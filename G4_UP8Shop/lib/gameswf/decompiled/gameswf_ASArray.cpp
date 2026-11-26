#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASArray.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::getStandardMember  (binary VA: 0x111bb10)
// Original: gameswf::ASArray::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASArray::getStandardMember(int a1, int a2, gameswf::ASValue::Self *a3)
{
  int result;

  result = 0;
  if ( a2 == 47 )
  {
    gameswf::ASValue::setDouble(a3, (double)*(int *)(a1 + 64));
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::thisAlive  (binary VA: 0x111bb60)
// Original: gameswf::ASArray::thisAlive
// ----------------------------------------------------------------------------
uint32_t * gameswf::ASArray::thisAlive(gameswf::ASArray::Self *self)
{
  uint32_t *result;
  int v2;
  int i;
  int v4;

  result = *((uint32_t **)self + 4);
  if ( result[25] > *((uint32_t *)self + 5) )
  {
    result = (uint32_t *)gameswf::ASObject::thisAlive(self);
    v4 = *((uint32_t *)self + 16);
    if ( v4 > 0 )
    {
      v2 = 0;
      for ( i = 0; i != v4; ++i )
      {
        result = (uint32_t *)(*((uint32_t *)self + 15) + v2);
        if ( *(uint8_t *)result == 5 )
        {
          result = (uint32_t *)result[1];
          if ( result != nullptr && *(uint32_t *)(*((uint32_t *)self + 4) + 100) > result[5] )
            result = (uint32_t *)G4_VCALL<int>(result, 76);
        }
        v2 += 12;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::enumerate  (binary VA: 0x111bd80)
// Original: gameswf::ASArray::enumerate
// ----------------------------------------------------------------------------
void gameswf::ASArray::enumerate(gameswf::ASArray::Self *self, gameswf::ASEnvironment::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  gameswf::ASObject::enumerate(self, a2);
  if ( *((int *)self + 16) > 0 )
  {
    v2 = *((uint32_t *)a2 + 1);
    v3 = *((uint32_t *)a2 + 2);
    v4 = 0;
    v9 = *((uint32_t *)self + 16);
    v5 = v2 + 1;
    if ( v2 + 1 > v3 )
      goto LABEL_8;
LABEL_3:
    v6 = *(uint32_t *)a2;
    while ( 1 )
    {
      v7 = v6 + 12 * v2;
      if ( v7 != 0 )
      {
        *(uint8_t *)v7 = 2;
        *(uint8_t *)(v7 + 1) = 0;
        *(double *)(v7 + 4) = (double)v4;
      }
      ++v4;
      *((uint32_t *)a2 + 1) = v5;
      if ( v4 == v9 )
        break;
      v2 = v5;
      v3 = *((uint32_t *)a2 + 2);
      if ( ++v5 <= v3 )
        goto LABEL_3;
LABEL_8:
      if ( *((uint32_t *)a2 + 3) != 0 )
        goto LABEL_3;
      v8 = v5 + (v5 >> 1);
      *((uint32_t *)a2 + 2) = v8;
      if ( v8 != 0 )
      {
        if ( *(uint32_t *)a2 != 0 )
          v6 = (int)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)a2, 12 * v8, 12 * v3));
        else
          v6 = gameswf::malloc_internal(12 * v8);
        *(uint32_t *)a2 = v6;
        v2 = *((uint32_t *)a2 + 1);
      }
      else
      {
        if ( *(uint32_t *)a2 != 0 )
        {
          gameswf::free_internal(*(gameswf::Self **)a2);
          v2 = *((uint32_t *)a2 + 1);
        }
        *(uint32_t *)a2 = 0;
        v6 = 0;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::toString  (binary VA: 0x111beb0)
// Original: gameswf::ASArray::toString
// ----------------------------------------------------------------------------
char * gameswf::ASArray::toString(gameswf::ASArray::Self *self)
{
  char *v1;
  gameswf::Self *v2;
  int v3;
  char v4;
  int v5;
  char v6;
  int v7;
  int v8;
  gameswf::Self *v9;
  char *v10;
  char v11;
  int v12;
  char *v13;
  gameswf::ASValue::Self *v14;
  gameswf::String::Self *v15;
  char *result;
  typedef gameswf::String::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef char *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef char *_g4_t_v23;
  typedef char *_g4_t_v24;
  typedef gameswf::String::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[12];
  typedef gameswf::Self *_g4_t_v28[4];
  typedef int16_t _g4_t_v29;
  typedef char _g4_t_v30;
  typedef char _g4_t_v31;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v20)) > _g4_s3 ? (16u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v21)) > _g4_s4 ? (24u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v22)) > _g4_s5 ? (28u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v23)) > _g4_s6 ? (32u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v24)) > _g4_s7 ? (32u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v25)) > _g4_s8 ? (36u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v26)) > _g4_s9 ? (40u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v27)) > _g4_s10 ? (48u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v28)) > _g4_s11 ? (60u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v29)) > _g4_s12 ? (76u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (78u + sizeof(_g4_t_v30)) > _g4_s13 ? (78u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (79u + sizeof(_g4_t_v31)) > _g4_s14 ? (79u + sizeof(_g4_t_v31)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 78u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 79u);

  v25 = (gameswf::String::Self *)((gameswf::ASArray::Self *)((char *)self + 40));
  gameswf::String::resize((gameswf::ASArray::Self *)((char *)self + 40), 0);
  LOBYTE(v1) = *((uint8_t *)self + 40);
  if ( (uint8_t)(uintptr_t)v1 == 0xFF )
  {
    v1 = *((char **)self + 11);
    v2 = *((gameswf::Self **)self + 13);
  }
  else
  {
    v1 = (char *)(char)(uintptr_t)v1;
    v2 = (gameswf::Self *)((gameswf::ASArray::Self *)((char *)self + 41));
  }
  gameswf::Strcpy_s(v2, v1, (gameswf::Self *)&unk_1B15112);
  *((uint32_t *)self + 14) |= 0x7FFFFFu;
  LOWORD(v28[0]) = 1;
  v29 = -1;
  v30 = 127;
  v31 |= 1u;
  v3 = *((uint32_t *)self + 16);
  v22 = v3;
  v4 = 1;
  if ( v3 > 0 )
  {
    v21 = v3 - 1;
    v26 = 0;
    v5 = 0;
    while ( 1 )
    {
      v14 = (gameswf::ASValue::Self *)(*((uint32_t *)self + 15) + v26);
      v27[0] = 0;
      v27[1] = 0;
      v15 = gameswf::ASValue::toString(v14, v28);
      if ( *(uint8_t *)v15 == 0xFF )
      {
        v6 = *((uint8_t *)self + 40);
        v7 = *((uint32_t *)v15 + 1) - 1;
        if ( v6 == -1 )
        {
LABEL_20:
          v8 = *((uint32_t *)self + 11) - 1;
          goto LABEL_7;
        }
      }
      else
      {
        v6 = *((uint8_t *)self + 40);
        v7 = *(char *)v15 - 1;
        if ( v6 == -1 )
          goto LABEL_20;
      }
      v8 = v6 - 1;
LABEL_7:
      v17 = v15;
      v20 = v8;
      gameswf::String::resize(v25, v8 + v7);
      if ( *(uint8_t *)v17 == 0xFF )
        v9 = *((gameswf::Self **)v17 + 3);
      else
        v9 = (gameswf::Self *)((gameswf::String::Self *)((char *)v17 + 1));
      LOBYTE(v10) = *((uint8_t *)self + 40);
      if ( (uint8_t)(uintptr_t)v10 == 0xFF )
      {
        v10 = *((char **)self + 11);
        v23 = *((char **)self + 13);
      }
      else
      {
        v23 = (char *)self + 41;
        v10 = (char *)(char)(uintptr_t)v10;
      }
      gameswf::Strcpy_s((gameswf::Self *)&v23[v20], v10, v9);
      *((uint32_t *)self + 14) |= 0x7FFFFFu;
      if ( v21 > v5 )
      {
        v11 = *((uint8_t *)self + 40);
        if ( v11 == -1 )
          v12 = *((uint32_t *)self + 11) - 1;
        else
          v12 = v11 - 1;
        v18 = v12;
        gameswf::String::resize(v25, v12 + 1);
        LOBYTE(v13) = *((uint8_t *)self + 40);
        if ( (uint8_t)(uintptr_t)v13 == 0xFF )
        {
          v13 = *((char **)self + 11);
          v24 = *((char **)self + 13);
        }
        else
        {
          v24 = (char *)self + 41;
          v13 = (char *)(char)(uintptr_t)v13;
        }
        gameswf::Strcpy_s((gameswf::Self *)&v24[v18], v13, (gameswf::Self *)",");
        *((uint32_t *)self + 14) |= 0x7FFFFFu;
      }
      ++v5;
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v27);
      v26 += 12;
      if ( v5 == v22 )
      {
        v4 = (char)(uintptr_t)v28[0];
        break;
      }
    }
  }
  result = (char *)self + 41;
  if ( *((uint8_t *)self + 40) == 0xFF )
    result = *((char **)self + 13);
  if ( v4 == -1 && (v31 & 1) != 0 )
  {
    v19 = result;
    gameswf::free_internal(v28[3]);
    return v19;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::toString  (binary VA: 0x111c6c0)
// Original: gameswf::ASArray::toString
// ----------------------------------------------------------------------------
int gameswf::ASArray::toString(int a1)
{
  int v1;
  char *s;

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 20) == 0 )
    v1 = 0;
  s = (char *)G4_VCALL<int>(v1, 12);
  return gameswf::ASValue::setString(*(gameswf::ASValue::Self **)a1, s);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::join  (binary VA: 0x111c730)
// Original: gameswf::ASArray::join
// ----------------------------------------------------------------------------
char * gameswf::ASArray::join(int a1)
{
  int v1;
  bool v2;
  int v3;
  gameswf::Self *v4;
  int v5;
  char *v6;
  int v7;
  gameswf::Self *v8;
  char *v9;
  gameswf::Self *v10;
  int v11;
  int v12;
  char v13;
  int v14;
  int v15;
  gameswf::Self *v16;
  char *v17;
  gameswf::Self *v18;
  int v19;
  int v20;
  gameswf::Self *v21;
  char *v22;
  gameswf::Self *v23;
  int v24;
  char *v25;
  int v26;
  char *result;
  char *v28;
  int v29;
  int v30;
  int v31;
  int v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef char *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_i;
  typedef char _g4_t_v41;
  typedef uint8_t _g4_t_v42[3];
  typedef char *_g4_t_v43;
  typedef gameswf::Self *_g4_t_v44;
  typedef unsigned int _g4_t_v45;
  typedef char _g4_t_v46;
  typedef uint8_t _g4_t_v47[3];
  typedef char *_g4_t_v48;
  typedef gameswf::Self *_g4_t_v49;
  typedef int _g4_t_v50;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v33)) > _g4_s0 ? (4u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v34)) > _g4_s1 ? (8u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v35)) > _g4_s2 ? (12u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v36)) > _g4_s3 ? (12u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v37)) > _g4_s4 ? (16u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v38)) > _g4_s5 ? (20u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v39)) > _g4_s6 ? (20u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_i)) > _g4_s7 ? (24u + sizeof(_g4_t_i)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v41)) > _g4_s8 ? (32u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (33u + sizeof(_g4_t_v42)) > _g4_s9 ? (33u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v43)) > _g4_s10 ? (36u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v44)) > _g4_s11 ? (44u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v45)) > _g4_s12 ? (48u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v46)) > _g4_s13 ? (64u + sizeof(_g4_t_v46)) : _g4_s13,
    _g4_s15 = (65u + sizeof(_g4_t_v47)) > _g4_s14 ? (65u + sizeof(_g4_t_v47)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v48)) > _g4_s15 ? (68u + sizeof(_g4_t_v48)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v49)) > _g4_s16 ? (76u + sizeof(_g4_t_v49)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v50)) > _g4_s17 ? (80u + sizeof(_g4_t_v50)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 33u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 48u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 64u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 65u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 68u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 76u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 80u);

  v1 = *(uint32_t *)(a1 + 4);
  v37 = v1;
  if ( v1 != 0 )
  {
    v2 = G4_VCALL<uint8_t>(v1, 8, 20) == 0;
    v3 = 0;
    if ( !v2 )
      v3 = v37;
    v37 = v3;
  }
  v41 = 1;
  v42[0] = 0;
  gameswf::String::resize((gameswf::String::Self *)&v41, 1);
  v4 = (gameswf::Self *)v42;
  if ( v41 == -1 )
    v4 = v44;
  gameswf::Strcpy_s(v4, (char *)&dword_0 + 2, (gameswf::Self *)",");
  LOWORD(v45) = -1;
  BYTE2(v45) = 127;
  HIBYTE(v45) |= 1u;
  if ( *(int *)(a1 + 16) > 0 )
  {
    v5 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
    if ( *(uint8_t *)v5 == 3 || *(uint8_t *)v5 == 4 )
    {
      v6 = *(char **)(v5 + 4);
    }
    else
    {
      v6 = (char *)(&byte_20D6378);
      if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
      {
        byte_20D6378 = 1;
        v32 = dword_20D6388 | 0x7FFFFF;
        byte_20D6379 = 0;
        dword_20D6388 = v32;
        BYTE2(dword_20D6388) = BYTE2(v32) & 0x7F;
        HIBYTE(dword_20D6388) = HIBYTE(v32) | 1;
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
        __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
      }
    }
    if ( v6 != &v41 )
    {
      if ( *v6 == -1 )
        v7 = *((uint32_t *)v6 + 1) - 1;
      else
        v7 = *v6 - 1;
      gameswf::String::resize((gameswf::String::Self *)&v41, v7);
      v8 = (gameswf::Self *)(v6 + 1);
      if ( *v6 == -1 )
        v8 = *((gameswf::Self **)v6 + 3);
      if ( v41 == -1 )
      {
        v9 = v43;
        v10 = v44;
      }
      else
      {
        v9 = (char *)v41;
        v10 = (gameswf::Self *)v42;
      }
      gameswf::Strcpy_s(v10, v9, v8);
      v38 = *((uint32_t *)v6 + 4);
      if ( (uint8_t *)(v38 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( *v6 == -1 )
        {
          v28 = *((char **)v6 + 3);
          v29 = *((uint32_t *)v6 + 1) - 1;
        }
        else
        {
          v28 = v6 + 1;
          v29 = *v6 - 1;
        }
        v11 = 5381;
        if ( v29 > 0 )
        {
          v36 = v6;
          do
          {
            --v29;
            v30 = 33 * v11;
            v31 = (uint8_t)v28[v29] + 32;
            if ( (uint8_t)(v28[v29] - 65) > 0x19u )
              v31 = (uint8_t)v28[v29];
            v11 = v30 ^ v31;
          }
          while ( v29 != 0 );
          v6 = v36;
          v11 = v11 << 9 >> 9;
        }
        *((uint32_t *)v6 + 4) = v11 & 0x7FFFFF | v38 & 0xFF800000;
      }
      else
      {
        v11 = v38 << 9 >> 9;
      }
      v45 = v11 & 0x7FFFFF | v45 & 0xFF800000;
    }
  }
  v46 = 1;
  v47[0] = 0;
  LOWORD(v50) = -1;
  BYTE2(v50) = 127;
  HIBYTE(v50) |= 1u;
  v12 = *(uint32_t *)(v37 + 64);
  v35 = v12;
  if ( v12 > 0 )
  {
    v39 = 0;
    v34 = v12 - 1;
    for ( i = 0; i != v35; ++i )
    {
      v24 = *(uint32_t *)(v37 + 60) + v39;
      if ( *(uint8_t *)v24 == 3 || *(uint8_t *)v24 == 4 )
      {
        v25 = *(char **)(v24 + 4);
      }
      else
      {
        v25 = (char *)(&byte_20D6378);
        if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
        {
          byte_20D6378 = 1;
          v26 = dword_20D6388 | 0x7FFFFF;
          byte_20D6379 = 0;
          dword_20D6388 = v26;
          BYTE2(dword_20D6388) = BYTE2(v26) & 0x7F;
          HIBYTE(dword_20D6388) = HIBYTE(v26) | 1;
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
          __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
        }
      }
      if ( *v25 == -1 )
      {
        v13 = v46;
        v14 = *((uint32_t *)v25 + 1) - 1;
        if ( v46 == -1 )
        {
LABEL_45:
          v15 = (int)(uintptr_t)(v48 - 1);
          goto LABEL_25;
        }
      }
      else
      {
        v13 = v46;
        v14 = *v25 - 1;
        if ( v46 == -1 )
          goto LABEL_45;
      }
      v15 = v13 - 1;
LABEL_25:
      v33 = v15;
      gameswf::String::resize((gameswf::String::Self *)&v46, v15 + v14);
      if ( *v25 == -1 )
        v16 = *((gameswf::Self **)v25 + 3);
      else
        v16 = (gameswf::Self *)(v25 + 1);
      if ( v46 == -1 )
      {
        v17 = v48;
        v18 = v49;
      }
      else
      {
        v17 = (char *)v46;
        v18 = (gameswf::Self *)v47;
      }
      gameswf::Strcpy_s((gameswf::Self *)((char *)v18 + v33), v17, v16);
      v50 |= 0x7FFFFFu;
      if ( i < v34 )
      {
        if ( v41 == -1 )
          v19 = (int)(uintptr_t)(v43 - 1);
        else
          v19 = v41 - 1;
        v20 = v46 - 1;
        if ( v46 == -1 )
          v20 = (int)(uintptr_t)(v48 - 1);
        gameswf::String::resize((gameswf::String::Self *)&v46, v20 + v19);
        v21 = (gameswf::Self *)v42;
        if ( v41 == -1 )
          v21 = v44;
        if ( v46 == -1 )
        {
          v22 = v48;
          v23 = v49;
        }
        else
        {
          v22 = (char *)v46;
          v23 = (gameswf::Self *)v47;
        }
        gameswf::Strcpy_s((gameswf::Self *)((char *)v23 + v20), v22, v21);
        v50 |= 0x7FFFFFu;
      }
      v39 += 12;
    }
  }
  result = gameswf::ASValue::setString(*(const gameswf::String::Self ***)a1, (const gameswf::String::Self *)&v46);
  if ( v46 == -1 && (v50 & 0x1000000) != 0 )
    result = (char *)gameswf::free_internal(v49);
  if ( v41 == -1 && (v45 & 0x1000000) != 0 )
    return (char *)gameswf::free_internal(v44);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::reverse  (binary VA: 0x111ccb0)
// Original: gameswf::ASArray::reverse
// ----------------------------------------------------------------------------
int gameswf::ASArray::reverse(int a1)
{
  uint32_t *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  gameswf::ASValue::Self *v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[40];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);

  v1 = *(uint32_t **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v1 + 8))(*(uint32_t *)(a1 + 4), 20) == 0 )
    v1 = nullptr;
  v2 = v1[16];
  v11[0] = 0;
  v11[1] = 0;
  v10 = v2 / 2;
  if ( v2 / 2 > 0 )
  {
    v3 = 3 * v2 - 3;
    v4 = 0;
    v5 = 0;
    v6 = 4 * v3;
    do
    {
      v9 = v5;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v11, (const gameswf::ASValue::Self *)(v4 + v1[15]));
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v4 + v1[15]), (const gameswf::ASValue::Self *)(v1[15] + v6));
      v4 += 12;
      v7 = (gameswf::ASValue::Self *)(v6 + v1[15]);
      v6 -= 12;
      gameswf::ASValue::opAssign(v7, (const gameswf::ASValue::Self *)v11);
      v5 = v9 + 1;
    }
    while ( v9 + 1 != v10 );
  }
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v11);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::indexOf  (binary VA: 0x111ea40)
// Original: gameswf::ASArray::indexOf
// ----------------------------------------------------------------------------
int gameswf::ASArray::indexOf(int a1)
{
  uint32_t *v1;
  int v2;
  int v3;
  int v4;
  double v5; // xmm0_8
  int v6;
  uint8_t v8[40];

  v1 = *(uint32_t **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v1 + 8))(*(uint32_t *)(a1 + 4), 20) == 0 )
    v1 = nullptr;
  v2 = **(uint32_t **)(a1 + 12);
  v3 = 3 * *(uint32_t *)(a1 + 20);
  v8[0] = 0;
  v8[1] = 0;
  gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v8, (const gameswf::ASValue::Self *)(v2 + 4 * v3));
  v4 = 0;
  if ( *(uint32_t *)(a1 + 16) == 2 )
    v4 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  v5 = -1.0;
  if ( v4 < v1[16] )
  {
    v6 = 12 * v4;
    do
    {
      if ( gameswf::ASValue::opEq((gameswf::ASValue::Self *)(v6 + v1[15]), (const gameswf::ASValue::Self *)v8) != 0 )
      {
        v5 = (double)v4;
        goto LABEL_11;
      }
      ++v4;
      v6 += 12;
    }
    while ( v1[16] > v4 );
    v5 = -1.0;
  }
LABEL_11:
  gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, v5);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v8);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::lastIndexOf  (binary VA: 0x111eb50)
// Original: gameswf::ASArray::lastIndexOf
// ----------------------------------------------------------------------------
int gameswf::ASArray::lastIndexOf(int a1)
{
  uint32_t *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  double v6; // xmm0_8
  uint8_t v8[40];

  v1 = *(uint32_t **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v1 + 8))(*(uint32_t *)(a1 + 4), 20) == 0 )
    v1 = nullptr;
  v2 = **(uint32_t **)(a1 + 12);
  v3 = 3 * *(uint32_t *)(a1 + 20);
  v8[0] = 0;
  v8[1] = 0;
  gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v8, (const gameswf::ASValue::Self *)(v2 + 4 * v3));
  if ( *(uint32_t *)(a1 + 16) == 2 )
    v4 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  else
    v4 = v1[16] - 1;
  v5 = 12 * v4;
  if ( v4 >= 0 )
  {
    while ( gameswf::ASValue::opEq((gameswf::ASValue::Self *)(v5 + v1[15]), (const gameswf::ASValue::Self *)v8) == 0 )
    {
      --v4;
      v5 -= 12;
      if ( v4 == -1 )
        goto LABEL_11;
    }
    v6 = (double)v4;
  }
  else
  {
LABEL_11:
    v6 = -1.0;
  }
  gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, v6);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v8);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::createClass  (binary VA: 0x111ec60)
// Original: gameswf::ASArray::createClass
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASArray::createClass(gameswf::ASArray::Self *self)
{
  gameswf::Self *v1;
  unsigned int v2;
  gameswf::Self **v3;
  gameswf::Self *v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  gameswf::Self *v7;
  gameswf::Self *v8;
  typedef uint8_t _g4_t_v10[12];
  typedef uint16_t _g4_t_v11[6];
  typedef uint16_t _g4_t_v12[6];
  typedef uint16_t _g4_t_v13[6];
  typedef uint16_t _g4_t_v14[6];
  typedef uint16_t _g4_t_v15[6];
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  typedef gameswf::Self *_g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef gameswf::Self *_g4_t_v22;
  typedef int16_t _g4_t_v23;
  typedef char _g4_t_v24;
  typedef char _g4_t_v25;
  typedef char _g4_t_v26;
  typedef char _g4_t_v27;
  typedef gameswf::Self *_g4_t_v28;
  typedef int16_t _g4_t_v29;
  typedef char _g4_t_v30;
  typedef char _g4_t_v31;
  typedef char _g4_t_v32;
  typedef char _g4_t_v33;
  typedef gameswf::Self *_g4_t_v34;
  typedef int16_t _g4_t_v35;
  typedef char _g4_t_v36;
  typedef char _g4_t_v37;
  typedef char _g4_t_v38;
  typedef char _g4_t_v39;
  typedef gameswf::Self *_g4_t_v40;
  typedef int16_t _g4_t_v41;
  typedef char _g4_t_v42;
  typedef char _g4_t_v43;
  typedef char _g4_t_v44;
  typedef char _g4_t_v45;
  typedef gameswf::Self *_g4_t_v46;
  typedef int16_t _g4_t_v47;
  typedef char _g4_t_v48;
  typedef char _g4_t_v49;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v12)) > _g4_s2 ? (24u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v13)) > _g4_s3 ? (36u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v14)) > _g4_s4 ? (48u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v15)) > _g4_s5 ? (60u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v16)) > _g4_s6 ? (72u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (73u + sizeof(_g4_t_v17)) > _g4_s7 ? (73u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v18)) > _g4_s8 ? (84u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v19)) > _g4_s9 ? (88u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (104u + sizeof(_g4_t_v20)) > _g4_s10 ? (104u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (105u + sizeof(_g4_t_v21)) > _g4_s11 ? (105u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (116u + sizeof(_g4_t_v22)) > _g4_s12 ? (116u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (120u + sizeof(_g4_t_v23)) > _g4_s13 ? (120u + sizeof(_g4_t_v23)) : _g4_s13,
    _g4_s15 = (122u + sizeof(_g4_t_v24)) > _g4_s14 ? (122u + sizeof(_g4_t_v24)) : _g4_s14,
    _g4_s16 = (123u + sizeof(_g4_t_v25)) > _g4_s15 ? (123u + sizeof(_g4_t_v25)) : _g4_s15,
    _g4_s17 = (136u + sizeof(_g4_t_v26)) > _g4_s16 ? (136u + sizeof(_g4_t_v26)) : _g4_s16,
    _g4_s18 = (137u + sizeof(_g4_t_v27)) > _g4_s17 ? (137u + sizeof(_g4_t_v27)) : _g4_s17,
    _g4_s19 = (148u + sizeof(_g4_t_v28)) > _g4_s18 ? (148u + sizeof(_g4_t_v28)) : _g4_s18,
    _g4_s20 = (152u + sizeof(_g4_t_v29)) > _g4_s19 ? (152u + sizeof(_g4_t_v29)) : _g4_s19,
    _g4_s21 = (154u + sizeof(_g4_t_v30)) > _g4_s20 ? (154u + sizeof(_g4_t_v30)) : _g4_s20,
    _g4_s22 = (155u + sizeof(_g4_t_v31)) > _g4_s21 ? (155u + sizeof(_g4_t_v31)) : _g4_s21,
    _g4_s23 = (168u + sizeof(_g4_t_v32)) > _g4_s22 ? (168u + sizeof(_g4_t_v32)) : _g4_s22,
    _g4_s24 = (169u + sizeof(_g4_t_v33)) > _g4_s23 ? (169u + sizeof(_g4_t_v33)) : _g4_s23,
    _g4_s25 = (180u + sizeof(_g4_t_v34)) > _g4_s24 ? (180u + sizeof(_g4_t_v34)) : _g4_s24,
    _g4_s26 = (184u + sizeof(_g4_t_v35)) > _g4_s25 ? (184u + sizeof(_g4_t_v35)) : _g4_s25,
    _g4_s27 = (186u + sizeof(_g4_t_v36)) > _g4_s26 ? (186u + sizeof(_g4_t_v36)) : _g4_s26,
    _g4_s28 = (187u + sizeof(_g4_t_v37)) > _g4_s27 ? (187u + sizeof(_g4_t_v37)) : _g4_s27,
    _g4_s29 = (200u + sizeof(_g4_t_v38)) > _g4_s28 ? (200u + sizeof(_g4_t_v38)) : _g4_s28,
    _g4_s30 = (201u + sizeof(_g4_t_v39)) > _g4_s29 ? (201u + sizeof(_g4_t_v39)) : _g4_s29,
    _g4_s31 = (212u + sizeof(_g4_t_v40)) > _g4_s30 ? (212u + sizeof(_g4_t_v40)) : _g4_s30,
    _g4_s32 = (216u + sizeof(_g4_t_v41)) > _g4_s31 ? (216u + sizeof(_g4_t_v41)) : _g4_s31,
    _g4_s33 = (218u + sizeof(_g4_t_v42)) > _g4_s32 ? (218u + sizeof(_g4_t_v42)) : _g4_s32,
    _g4_s34 = (219u + sizeof(_g4_t_v43)) > _g4_s33 ? (219u + sizeof(_g4_t_v43)) : _g4_s33,
    _g4_s35 = (232u + sizeof(_g4_t_v44)) > _g4_s34 ? (232u + sizeof(_g4_t_v44)) : _g4_s34,
    _g4_s36 = (233u + sizeof(_g4_t_v45)) > _g4_s35 ? (233u + sizeof(_g4_t_v45)) : _g4_s35,
    _g4_s37 = (244u + sizeof(_g4_t_v46)) > _g4_s36 ? (244u + sizeof(_g4_t_v46)) : _g4_s36,
    _g4_s38 = (248u + sizeof(_g4_t_v47)) > _g4_s37 ? (248u + sizeof(_g4_t_v47)) : _g4_s37,
    _g4_s39 = (250u + sizeof(_g4_t_v48)) > _g4_s38 ? (250u + sizeof(_g4_t_v48)) : _g4_s38,
    _g4_s40 = (251u + sizeof(_g4_t_v49)) > _g4_s39 ? (251u + sizeof(_g4_t_v49)) : _g4_s39
  };
  alignas(16) uint8_t _g4_sf[_g4_s40];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 72u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 73u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 84u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 88u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 104u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 105u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 116u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 120u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 122u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 123u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 136u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 137u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 148u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 152u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 154u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 155u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 168u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 169u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 180u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 184u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 186u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 187u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 200u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 201u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 212u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 216u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 218u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 219u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 232u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 233u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 244u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 248u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 250u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 251u);

  v16 = 1;
  v17 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v16, 5);
  v1 = (gameswf::Self *)&v17;
  if ( v16 == -1 )
    v1 = v18;
  gameswf::Strcpy_s(v1, (char *)&loc_6, (gameswf::Self *)"Array");
  v10[0] = 0;
  v10[1] = 0;
  v19 |= 0x7FFFFFu;
  v2 = HIWORD(v19);
  HIBYTE(v19) |= 1u;
  BYTE2(v19) = v2 & 0x7F;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v10, (int)(uintptr_t)((gameswf::ASValue::Self * (*)(uint32_t *))gameswf::ASArray::init));
  v3 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v3,
    self,
    (const gameswf::String::Self *)&v16,
    (gameswf::ASObject::Self *(*)(gameswf::Player::Self *))gameswf::ASArray::newOp,
    (const gameswf::ASValue::Self *)v10,
    false);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v10);
  if ( v16 == -1 && (v19 & 0x1000000) != 0 )
    gameswf::free_internal(v18);
  *(uint64_t *)&v11[2] = 0x3FF0000000000000LL;
  v11[0] = 2;
  v20 = 1;
  v21 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v20, 15);
  v4 = (gameswf::Self *)&v21;
  if ( v20 == -1 )
    v4 = v22;
  gameswf::Strcpy_s(v4, (char *)&word_10, (gameswf::Self *)"CASEINSENSITIVE");
  v23 = -1;
  v24 = 127;
  v25 |= 1u;
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v3,
    (const gameswf::StringI::Self *)&v20,
    (const gameswf::ASValue::Self *)v11);
  if ( v20 == -1 && (v25 & 1) != 0 )
    gameswf::free_internal(v22);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v11);
  v12[0] = 2;
  *(uint64_t *)&v12[2] = 0x4000000000000000LL;
  v26 = 1;
  v27 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v26, 10);
  v5 = (gameswf::Self *)&v27;
  if ( v26 == -1 )
    v5 = v28;
  gameswf::Strcpy_s(v5, &byte_9[2], (gameswf::Self *)"DESCENDING");
  v29 = -1;
  v30 = 127;
  v31 |= 1u;
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v3,
    (const gameswf::StringI::Self *)&v26,
    (const gameswf::ASValue::Self *)v12);
  if ( v26 == -1 && (v31 & 1) != 0 )
    gameswf::free_internal(v28);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v12);
  v13[0] = 2;
  *(uint64_t *)&v13[2] = 0x4010000000000000LL;
  v32 = 1;
  v33 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v32, 10);
  v6 = (gameswf::Self *)&v33;
  if ( v32 == -1 )
    v6 = v34;
  gameswf::Strcpy_s(v6, &byte_9[2], (gameswf::Self *)"UNIQUESORT");
  v35 = -1;
  v36 = 127;
  v37 |= 1u;
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v3,
    (const gameswf::StringI::Self *)&v32,
    (const gameswf::ASValue::Self *)v13);
  if ( v32 == -1 && (v37 & 1) != 0 )
    gameswf::free_internal(v34);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v13);
  v14[0] = 2;
  *(uint64_t *)&v14[2] = 0x4020000000000000LL;
  v38 = 1;
  v39 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v38, 18);
  v7 = (gameswf::Self *)&v39;
  if ( v38 == -1 )
    v7 = v40;
  gameswf::Strcpy_s(v7, (char *)&word_12 + 1, (gameswf::Self *)"RETURNINDEXEDARRAY");
  v41 = -1;
  v42 = 127;
  v43 |= 1u;
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v3,
    (const gameswf::StringI::Self *)&v38,
    (const gameswf::ASValue::Self *)v14);
  if ( v38 == -1 && (v43 & 1) != 0 )
    gameswf::free_internal(v40);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v14);
  v15[0] = 2;
  *(uint64_t *)&v15[2] = 0x4030000000000000LL;
  v44 = 1;
  v45 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v44, 7);
  v8 = (gameswf::Self *)&v45;
  if ( v44 == -1 )
    v8 = v46;
  gameswf::Strcpy_s(v8, byte_8, (gameswf::Self *)"NUMERIC");
  v47 = -1;
  v48 = 127;
  v49 |= 1u;
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v3,
    (const gameswf::StringI::Self *)&v44,
    (const gameswf::ASValue::Self *)v15);
  if ( v44 == -1 && (v49 & 1) != 0 )
    gameswf::free_internal(v46);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::Construct  (binary VA: 0x111f2e0)
// Original: gameswf::ASArray::ASArray
// ----------------------------------------------------------------------------
gameswf::ASArray::Self * gameswf::ASArray::Construct(gameswf::ASArray::Self *self, gameswf::Player::Self *a2)
{
  unsigned int v2;
  int v3;
  gameswf::ASArray::Self *result;

  gameswf::ASObject::ASObject(self, a2);
  *((uint8_t *)self + 40) = 1;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FB48);
  v2 = *((uint32_t *)self + 14) | 0x7FFFFF;
  *((uint8_t *)self + 41) = 0;
  *((uint32_t *)self + 14) = v2;
  *((uint32_t *)self + 15) = 0;
  v3 = HIWORD(v2) & 0x7F;
  result = (gameswf::ASArray::Self *)(HIBYTE(v2) | 1);
  *((uint8_t *)self + 58) = v3;
  *((uint8_t *)self + 59) = (uint8_t)(uintptr_t)result;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::newOp  (binary VA: 0x111f360)
// Original: gameswf::ASArray::newOp
// ----------------------------------------------------------------------------
gameswf::ASArray::Self * gameswf::ASArray::newOp(gameswf::ASArray::Self *self)
{
  gameswf::ASArray::Self *v1;

  v1 = (gameswf::ASArray::Self *)opNew(0x4Cu);
  gameswf::ASArray::Construct(v1, self);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::getMemberByIndex  (binary VA: 0x111f570)
// Original: gameswf::ASArray::getMemberByIndex
// ----------------------------------------------------------------------------
int gameswf::ASArray::getMemberByIndex(gameswf::ASArray::Self *self, int a2, gameswf::ASValue::Self *a3)
{
  int result;

  result = 0;
  if ( a2 >= 0 && a2 < *((uint32_t *)self + 16) )
  {
    gameswf::ASValue::opAssign(a3, (const gameswf::ASValue::Self *)(*((uint32_t *)self + 15) + 12 * a2));
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::getMemberByKey  (binary VA: 0x111f5c0)
// Original: gameswf::ASArray::getMemberByKey
// ----------------------------------------------------------------------------
int gameswf::ASArray::getMemberByKey(gameswf::ASArray::Self *self, const gameswf::ASValue::Self *a2, gameswf::ASValue::Self *a3)
{
  int v3;

  v3 = gameswf::ASValue::toInt(a2);
  return gameswf::ASArray::getMemberByIndex(self, v3, a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::push  (binary VA: 0x111f600)
// Original: gameswf::ASArray::push
// ----------------------------------------------------------------------------
gameswf::ASValue::Self * gameswf::ASArray::push(gameswf::ASArray::Self *self, const gameswf::ASValue::Self *a2)
{
  int v2;
  int v3;
  int v4;
  char *v5;
  gameswf::ASValue::Self *result;
  int v7;

  v2 = *((uint32_t *)self + 16);
  v3 = *((uint32_t *)self + 17);
  v4 = v2 + 1;
  if ( v2 + 1 <= v3 || *((uint32_t *)self + 18) != 0 )
  {
    v5 = *((char **)self + 15);
  }
  else
  {
    v7 = v4 + (v4 >> 1);
    *((uint32_t *)self + 17) = v7;
    if ( v7 != 0 )
    {
      if ( *((uint32_t *)self + 15) != 0 )
        v5 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 15), 12 * v7, 12 * v3);
      else
        v5 = (char *)gameswf::malloc_internal(12 * v7);
      *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)(v5);
      v2 = *((uint32_t *)self + 16);
    }
    else
    {
      if ( *((uint32_t *)self + 15) != 0 )
      {
        gameswf::free_internal(*((gameswf::Self **)self + 15));
        v2 = *((uint32_t *)self + 16);
      }
      *((uint32_t *)self + 15) = 0;
      v5 = nullptr;
    }
  }
  result = (gameswf::ASValue::Self *)&v5[12 * v2];
  if ( result != nullptr )
  {
    *(uint8_t *)result = 0;
    *((uint8_t *)result + 1) = 0;
    result = (gameswf::ASValue::Self *)gameswf::ASValue::opAssign(result, a2);
  }
  *((uint32_t *)self + 16) = v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::push  (binary VA: 0x111f710)
// Original: gameswf::ASArray::push
// ----------------------------------------------------------------------------
int gameswf::ASArray::push(int a1)
{
  int *v1;
  int v2;
  int v3;

  v1 = *(int **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v1 + 8))(*(uint32_t *)(a1 + 4), 20) == 0 )
    v1 = nullptr;
  if ( *(int *)(a1 + 16) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(uint32_t *)(a1 + 20) - v2++;
      gameswf::ASArray::push((gameswf::ASArray::Self *)v1, (const gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * v3));
    }
    while ( *(uint32_t *)(a1 + 16) > v2 );
  }
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, (double)v1[16]);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::slice  (binary VA: 0x111f7a0)
// Original: gameswf::ASArray::slice
// ----------------------------------------------------------------------------
int gameswf::ASArray::slice(int a1)
{
  gameswf::ASValue::Self **v1;
  uint32_t *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  gameswf::Self *v9;
  gameswf::Self *v10;
  gameswf::RefCounted::Self *Array;
  int v12;
  const gameswf::ASValue::Self *v13;
  int result;
  int v16;
  int v17;
  gameswf::RefCounted::Self *v18;
  int v19;

  v1 = (gameswf::ASValue::Self **)a1;
  v2 = *(uint32_t **)(a1 + 4);
  if ( v2 != nullptr && (*(uint8_t (**)(uint32_t, int *))(*v2 + 8))(*(uint32_t *)(a1 + 4), (int *)(&dword_14)) == 0 )
    v2 = nullptr;
  v3 = v2[16];
  v4 = 0;
  v5 = v3;
  if ( *(int *)(a1 + 16) > 0 )
  {
    v16 = v2[16];
    v6 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v4 = v6;
    v3 = v16;
    if ( v6 < 0 )
      v4 = v16 + v6;
    if ( *(int *)(a1 + 16) <= 1 )
    {
      v5 = v16;
    }
    else
    {
      v5 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
      v3 = v16;
      if ( v5 < 0 )
        v5 += v16;
    }
  }
  if ( v4 > v3 )
    v4 = v3;
  v7 = 0;
  if ( v4 < 0 )
    v4 = 0;
  if ( v5 <= v3 )
    v3 = v5;
  v8 = *(uint32_t *)(a1 + 12);
  if ( v3 >= 0 )
    v7 = v3;
  v9 = *(gameswf::Self **)(v8 + 212);
  v19 = v7;
  if ( v9 != nullptr )
  {
    v10 = *(gameswf::Self **)(v8 + 208);
    if ( *((uint8_t *)v10 + 2) == 0 )
    {
      if ( (*(uint16_t *)v10)-- == 1 )
      {
        v17 = v8;
        gameswf::free_internal(v10);
        v8 = v17;
      }
      *(uint32_t *)(v8 + 208) = 0;
      *(uint32_t *)(v8 + 212) = 0;
      v9 = nullptr;
    }
  }
  Array = (gameswf::RefCounted::Self *)(gameswf::createArray(v9));
  v18 = Array;
  if ( Array != nullptr )
    gameswf::RefCounted::addRef(Array);
  if ( v19 > v4 )
  {
    v12 = 12 * v4;
    do
    {
      ++v4;
      v13 = (const gameswf::ASValue::Self *)(v12 + v2[15]);
      v12 += 12;
      gameswf::ASArray::push(v18, v13);
    }
    while ( v4 != v19 );
    v1 = (gameswf::ASValue::Self **)a1;
  }
  gameswf::ASValue::setObject(*v1, v18);
  result = (int)(uintptr_t)(v18);
  if ( v18 != nullptr )
    return gameswf::RefCounted::dropRef(v18);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::concat  (binary VA: 0x111f960)
// Original: gameswf::ASArray::concat
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASArray::concat(int a1)
{
  int v1;
  uint32_t *v2;
  char v3;
  int v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  gameswf::RefCounted::Self *Array;
  gameswf::ASArray::Self *v8;
  int v9;
  uint32_t *v10;
  int v11;
  const gameswf::ASValue::Self *v12;
  int v13;
  int v14;
  gameswf::ASArray::Self *v15;
  int v16;
  int v17;
  int v18;
  gameswf::RefCounted::Self *result;
  int v21;
  int v22;
  gameswf::ASArray::Self *v23;
  gameswf::ASArray::Self *v24;
  int i;

  v1 = a1;
  v2 = *(uint32_t **)(a1 + 4);
  if ( v2 != nullptr )
  {
    v3 = (*(int (**)(uint32_t, int *))(*v2 + 8))(*(uint32_t *)(a1 + 4), (int *)(&dword_14));
    v1 = a1;
    if ( v3 == 0 )
      v2 = nullptr;
  }
  v4 = *(uint32_t *)(v1 + 12);
  v5 = *(gameswf::Self **)(v4 + 212);
  if ( v5 != nullptr )
  {
    v6 = *(gameswf::Self **)(v4 + 208);
    if ( *((uint8_t *)v6 + 2) == 0 )
    {
      if ( (*(uint16_t *)v6)-- == 1 )
        gameswf::free_internal(v6);
      *(uint32_t *)(v4 + 208) = 0;
      *(uint32_t *)(v4 + 212) = 0;
      v5 = nullptr;
    }
  }
  Array = (gameswf::RefCounted::Self *)(gameswf::createArray(v5));
  v8 = (gameswf::ASArray::Self *)(Array);
  if ( Array != nullptr )
    gameswf::RefCounted::addRef(Array);
  v21 = v2[16];
  if ( v21 > 0 )
  {
    v23 = v8;
    v9 = 0;
    v10 = v2;
    v11 = 0;
    do
    {
      ++v9;
      v12 = (const gameswf::ASValue::Self *)(v11 + v10[15]);
      v11 += 12;
      gameswf::ASArray::push(v23, v12);
    }
    while ( v9 != v21 );
    v8 = v23;
  }
  v13 = *(uint32_t *)(a1 + 16);
  if ( v13 > 0 )
  {
    for ( i = 0; i < v13; ++i )
    {
      while ( 1 )
      {
        v14 = **(uint32_t **)(a1 + 12) + 12 * (*(uint32_t *)(a1 + 20) - i);
        if ( *(uint8_t *)v14 == 5 )
        {
          v15 = *(gameswf::ASArray::Self **)(v14 + 4);
          if ( v15 != nullptr )
            break;
        }
        if ( ++i >= v13 )
          goto LABEL_22;
      }
      if ( G4_VCALL<uint8_t>(v15, 8, 20) != 0 )
      {
        v16 = 0;
        v22 = *((uint32_t *)v15 + 16);
        if ( v22 > 0 )
        {
          v24 = v15;
          v17 = 0;
          do
          {
            v18 = v17;
            ++v16;
            v17 += 12;
            gameswf::ASArray::push(v8, (const gameswf::ASValue::Self *)(*((uint32_t *)v24 + 15) + v18));
          }
          while ( v16 != v22 );
        }
      }
      v13 = *(uint32_t *)(a1 + 16);
    }
  }
LABEL_22:
  result = gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v8);
  if ( v8 != nullptr )
    return (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(v8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::isIndex  (binary VA: 0x111fb20)
// Original: gameswf::ASArray::isIndex
// ----------------------------------------------------------------------------
int gameswf::ASArray::isIndex(gameswf::ASArray::Self *self, const gameswf::StringI::Self *a2)
{
  uint8_t *v2;
  int result;

  if ( *(uint8_t *)a2 == 0xFF )
    v2 = *((uint8_t **)a2 + 3);
  else
    v2 = (uint8_t *)((char *)a2 + 1);
  result = 1;
  if ( *v2 != 0 )
  {
    result = 0;
    if ( (uint8_t)(*v2 - 48) <= 9u )
    {
      do
      {
        if ( *++v2 == 0 )
          return 1;
      }
      while ( (uint8_t)(*v2 - 48) <= 9u );
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::getMemberByName  (binary VA: 0x111fb80)
// Original: gameswf::ASArray::getMemberByName
// ----------------------------------------------------------------------------
int gameswf::ASArray::getMemberByName(gameswf::ASArray::Self *self, const gameswf::StringI::Self *a2, gameswf::ASValue::Self *a3)
{
  int v3;
  const char *nptr;
  int v6;

  v3 = 1;
  if ( (uint8_t)gameswf::get_builtin(9, (char *)a2, a3) == 0
    && (uint8_t)gameswf::ASObject::getMemberByName(self, a2, a3) == 0 )
  {
    v3 = 0;
    if ( (uint8_t)gameswf::ASArray::isIndex(self, a2) != 0 )
    {
      if ( *(uint8_t *)a2 == 0xFF )
        nptr = *((const char **)a2 + 3);
      else
        nptr = (char *)a2 + 1;
      v6 = atoi(nptr);
      return gameswf::ASArray::getMemberByIndex(self, v6, a3);
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::pop  (binary VA: 0x111fc40)
// Original: gameswf::ASArray::pop
// ----------------------------------------------------------------------------
int gameswf::ASArray::pop(gameswf::ASArray::Self *self, gameswf::ASValue::Self *a2)
{
  int v2;
  int result;

  v2 = *((uint32_t *)self + 16);
  if ( v2 <= 0 )
  {
    result = gameswf::ASValue::dropRefs(a2);
    *(uint8_t *)a2 = 0;
  }
  else
  {
    gameswf::ASValue::opAssign(a2, (const gameswf::ASValue::Self *)(*((uint32_t *)self + 15) + 4 * (3 * v2 - 3)));
    return gameswf::array_gameswf_ASValue_3ea8a1::resize((gameswf::ASArray::Self *)((char *)self + 60), *((uint32_t *)self + 16) - 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::pop  (binary VA: 0x111fcc0)
// Original: gameswf::ASArray::pop
// ----------------------------------------------------------------------------
int gameswf::ASArray::pop(gameswf::ASValue::Self **a1)
{
  gameswf::ASArray::Self *v1;
  uint8_t v3[24];

  v1 = (gameswf::ASArray::Self *)(a1[1]);
  if ( v1 != nullptr && (*(uint8_t (**)(gameswf::ASValue::Self *, int))(*(uint32_t *)v1 + 8))(a1[1], 20) == 0 )
    v1 = nullptr;
  v3[0] = 0;
  v3[1] = 0;
  gameswf::ASArray::pop(v1, (gameswf::ASValue::Self *)v3);
  gameswf::ASValue::opAssign(*a1, (const gameswf::ASValue::Self *)v3);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::setMemberByIndex  (binary VA: 0x111fd50)
// Original: gameswf::ASArray::setMemberByIndex
// ----------------------------------------------------------------------------
int gameswf::ASArray::setMemberByIndex(gameswf::ASArray::Self *self, int a2, const gameswf::ASValue::Self *a3)
{
  int result;

  result = 0;
  if ( a2 >= 0 )
  {
    if ( a2 >= *((uint32_t *)self + 16) )
      gameswf::array_gameswf_ASValue_3ea8a1::resize((gameswf::ASArray::Self *)((char *)self + 60), a2 + 1);
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(*((uint32_t *)self + 15) + 12 * a2), a3);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::setMemberByKey  (binary VA: 0x111fdd0)
// Original: gameswf::ASArray::setMemberByKey
// ----------------------------------------------------------------------------
int gameswf::ASArray::setMemberByKey(gameswf::ASArray::Self *self, const gameswf::ASValue::Self *a2, const gameswf::ASValue::Self *a3)
{
  int v3;

  v3 = gameswf::ASValue::toInt(a2);
  return gameswf::ASArray::setMemberByIndex(self, v3, a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::setMemberByName  (binary VA: 0x111fe10)
// Original: gameswf::ASArray::setMemberByName
// ----------------------------------------------------------------------------
int gameswf::ASArray::setMemberByName(gameswf::ASArray::Self *self, const gameswf::StringI::Self *a2, const gameswf::ASValue::Self *a3)
{
  const char *nptr;
  int v4;

  if ( (uint8_t)gameswf::ASArray::isIndex(self, a2) == 0 )
    return gameswf::ASObject::setMemberByName(self, a2, a3);
  nptr = (char *)a2 + 1;
  if ( *(uint8_t *)a2 == 0xFF )
    nptr = *((const char **)a2 + 3);
  v4 = atoi(nptr);
  if ( (uint8_t)gameswf::ASArray::setMemberByIndex(self, v4, a3) != 0 )
    return 1;
  else
    return gameswf::ASObject::setMemberByName(self, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::shift  (binary VA: 0x111feb0)
// Original: gameswf::ASArray::shift
// ----------------------------------------------------------------------------
int gameswf::ASArray::shift(int a1)
{
  uint32_t *v1;
  int v2;
  int StandardMemberID;
  typedef unsigned int _g4_t_v5[3];
  typedef uint8_t _g4_t_v6[12];
  typedef gameswf::Self *_g4_t_v7;
  typedef int16_t _g4_t_v8;
  typedef char _g4_t_v9;
  typedef char _g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v7)) > _g4_s2 ? (24u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (30u + sizeof(_g4_t_v9)) > _g4_s4 ? (30u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (31u + sizeof(_g4_t_v10)) > _g4_s5 ? (31u + sizeof(_g4_t_v10)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 30u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 31u);

  v1 = *(uint32_t **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v1 + 8))(*(uint32_t *)(a1 + 4), 20) == 0 )
    v1 = nullptr;
  v2 = v1[16];
  LOWORD(v5[0]) = 0;
  if ( v2 > 0 )
  {
    v6[0] = 1;
    v6[1] = 0;
    v8 = -1;
    v9 = 127;
    v10 |= 1u;
    StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)v6);
    if ( StandardMemberID == -1
      || G4_VCALL<uint8_t>(v1, 36, StandardMemberID, v5) == 0 )
    {
      G4_VCALL<void>(v1, 44, v6, v5);
    }
    if ( v6[0] == 0xFF && (v10 & 1) != 0 )
      gameswf::free_internal(v7);
    if ( v1[16] == 1 )
    {
      gameswf::array_gameswf_ASValue_3ea8a1::resize((gameswf::array<gameswf::ASValue::Self> *)(v1 + 15), 0);
    }
    else
    {
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v1[15]);
      memmove((void *)v1[15], (const void *)(v1[15] + 12), 4 * (3 * v1[16]-- - 3));
    }
  }
  gameswf::ASValue::opAssign(*(gameswf::ASValue::Self **)a1, (const gameswf::ASValue::Self *)v5);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v5);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::init  (binary VA: 0x1120000)
// Original: gameswf::ASArray::init
// ----------------------------------------------------------------------------
gameswf::ASValue::Self * gameswf::ASArray::init(uint32_t *a1)
{
  gameswf::ASArray::Self *v1;
  gameswf::ASValue::Self *result;
  int v3;
  int v4;
  int v5;
  int v6;
  gameswf::ASValue::Self *v7;
  gameswf::array<gameswf::ASValue::Self> *v8;
  int v9;
  int v10;
  int v11;
  gameswf::array<gameswf::ASValue::Self> *v12;
  int v13;
  int v14;
  typedef gameswf::array<gameswf::ASValue::Self> *_g4_t_v15;
  typedef gameswf::ASValue::Self *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t _g4_t_v18[12];
  typedef uint8_t _g4_t_v19[12];
  typedef uint8_t _g4_t_v20[40];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v18)) > _g4_s3 ? (28u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v19)) > _g4_s4 ? (40u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v20)) > _g4_s5 ? (52u + sizeof(_g4_t_v20)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);

  v1 = (gameswf::ASArray::Self *)a1[1];
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(a1[1], 20) == 0 )
    v1 = nullptr;
  result = (gameswf::ASValue::Self *)a1[4];
  if ( result == (gameswf::ASValue::Self *)-1 )
  {
    if ( a1[5] == -1 )
    {
      v8 = (gameswf::array<gameswf::ASValue::Self> *)a1[3];
      v9 = *((uint32_t *)v8 + 1);
      v10 = *(uint32_t *)v8;
      v15 = v8;
      v18[0] = 0;
      v18[1] = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v18, (const gameswf::ASValue::Self *)(v10 + 4 * (3 * v9 - 3)));
      gameswf::array_gameswf_ASValue_3ea8a1::resize(v15, *((uint32_t *)v15 + 1) - 1);
      v17 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)v18);
      result = (gameswf::ASValue::Self *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v18);
      if ( v17 > 0 )
      {
        v11 = 0;
        do
        {
          ++v11;
          v12 = (gameswf::array<gameswf::ASValue::Self> *)a1[3];
          v13 = *((uint32_t *)v12 + 1);
          v14 = *(uint32_t *)v12;
          v19[0] = 0;
          v19[1] = 0;
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v19, (const gameswf::ASValue::Self *)(v14 + 4 * (3 * v13 - 3)));
          gameswf::array_gameswf_ASValue_3ea8a1::resize(v12, *((uint32_t *)v12 + 1) - 1);
          gameswf::ASArray::push(v1, (const gameswf::ASValue::Self *)v19);
          result = (gameswf::ASValue::Self *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v19);
        }
        while ( v11 != v17 );
      }
    }
  }
  else
  {
    if ( result != (gameswf::ASValue::Self *)((char *)&dword_0 + 1) )
    {
      if ( (int)(uintptr_t)(result) <= 0 )
        return result;
      v3 = a1[5];
      v4 = *(uint32_t *)a1[3];
      goto LABEL_8;
    }
    v3 = a1[5];
    v4 = *(uint32_t *)a1[3];
    if ( *(uint8_t *)(v4 + 12 * v3) != 2 )
    {
LABEL_8:
      v5 = 0;
      while ( 1 )
      {
        v6 = v3 - v5++;
        result = gameswf::ASArray::push(v1, (const gameswf::ASValue::Self *)(v4 + 12 * v6));
        if ( a1[4] <= v5 )
          break;
        v3 = a1[5];
        v4 = *(uint32_t *)a1[3];
      }
      return result;
    }
    result = (gameswf::ASValue::Self *)gameswf::ASValue::toInt((gameswf::ASValue::Self *)(v4 + 12 * v3));
    v16 = result;
    if ( (int)(uintptr_t)(result) > 0 )
    {
      v7 = nullptr;
      do
      {
        v20[0] = 0;
        v20[1] = 0;
        v7 = (gameswf::ASValue::Self *)((char *)v7 + 1);
        gameswf::ASArray::push(v1, (const gameswf::ASValue::Self *)v20);
        result = (gameswf::ASValue::Self *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v20);
      }
      while ( v7 != v16 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::ctor  (binary VA: 0x11201e0)
// Original: gameswf::ASArray::ctor
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASArray::ctor(gameswf::ASValue::Self **a1)
{
  gameswf::ASValue::Self *v1;
  gameswf::Player::Self *v2;
  gameswf::Self *v3;
  gameswf::ASArray::Self *v4;

  v1 = a1[3];
  v2 = *((gameswf::Player::Self **)v1 + 53);
  if ( v2 != nullptr )
  {
    v3 = *((gameswf::Self **)v1 + 52);
    if ( *((uint8_t *)v3 + 2) == 0 )
    {
      if ( (*(uint16_t *)v3)-- == 1 )
        gameswf::free_internal(v3);
      *((uint32_t *)v1 + 52) = 0;
      *((uint32_t *)v1 + 53) = 0;
      v2 = nullptr;
    }
  }
  v4 = (gameswf::ASArray::Self *)opNew(0x4Cu);
  gameswf::ASArray::Construct(v4, v2);
  if ( v4 != nullptr )
  {
    gameswf::RefCounted::addRef(v4);
    a1[1] = (gameswf::ASValue::Self *)(v4);
    gameswf::ASArray::init(a1);
    gameswf::ASValue::setObject(*a1, v4);
    return (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(v4);
  }
  else
  {
    a1[1] = nullptr;
    gameswf::ASArray::init(a1);
    return gameswf::ASValue::setObject(*a1, nullptr);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::unshift  (binary VA: 0x11202f0)
// Original: gameswf::ASArray::unshift
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ASArray::unshift(int a1)
{
  int v1;
  gameswf::ASArray::Self *v2;
  int v3;
  int v4;
  gameswf::ASValue::Self *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  const gameswf::ASValue::Self *v11;
  gameswf::Self *result;
  typedef int _g4_t_v13;
  typedef const gameswf::ASValue::Self *_g4_t_v14;
  typedef gameswf::ASArray::Self *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef gameswf::array<gameswf::ASValue::Self> *_g4_t_v17;
  typedef gameswf::ASArray::Self *_g4_t_v18;
  typedef gameswf::ASArray::Self *_g4_t_v19;
  typedef gameswf::Self *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v15)) > _g4_s2 ? (24u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v16)) > _g4_s3 ? (24u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v17)) > _g4_s4 ? (28u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v18)) > _g4_s5 ? (28u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v19)) > _g4_s6 ? (28u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v20)) > _g4_s7 ? (32u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v21)) > _g4_s8 ? (36u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v22)) > _g4_s9 ? (40u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v23)) > _g4_s10 ? (44u + sizeof(_g4_t_v23)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);

  v1 = a1;
  v2 = *(gameswf::ASArray::Self **)(a1 + 4);
  if ( v2 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v2 + 8))(*(uint32_t *)(a1 + 4), 20) == 0 )
    v2 = nullptr;
  v17 = (gameswf::array<gameswf::ASValue::Self> *)((gameswf::ASArray::Self *)((char *)v2 + 60));
  v13 = *((uint32_t *)v2 + 16);
  v20 = nullptr;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  gameswf::array_gameswf_ASValue_3ea8a1::resize((gameswf::array<gameswf::ASValue::Self> *)&v20, v13);
  if ( v21 > 0 )
  {
    v15 = v2;
    v3 = 0;
    v4 = 0;
    do
    {
      ++v4;
      v14 = (const gameswf::ASValue::Self *)(*(uint32_t *)v17 + v3);
      v5 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v20 + v3));
      v3 += 12;
      gameswf::ASValue::opAssign(v5, v14);
    }
    while ( v4 < v21 );
    v2 = v15;
    v1 = a1;
  }
  gameswf::array_gameswf_ASValue_3ea8a1::resize(v17, 0);
  if ( *(int *)(v1 + 16) > 0 )
  {
    v18 = v2;
    v6 = v1;
    v7 = 0;
    do
    {
      v8 = *(uint32_t *)(v6 + 20) - v7++;
      gameswf::ASArray::push(v18, (const gameswf::ASValue::Self *)(**(uint32_t **)(v6 + 12) + 12 * v8));
    }
    while ( *(uint32_t *)(v6 + 16) > v7 );
    v1 = v6;
    v2 = v18;
  }
  if ( v21 > 0 )
  {
    v19 = v2;
    v16 = v1;
    v9 = 0;
    v10 = 0;
    do
    {
      ++v10;
      v11 = (const gameswf::ASValue::Self *)((gameswf::Self *)((char *)v20 + v9));
      v9 += 12;
      gameswf::ASArray::push(v19, v11);
    }
    while ( v21 > v10 );
    v2 = v19;
    v1 = v16;
  }
  gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)v1, (double)*((int *)v2 + 16));
  result = (gameswf::Self *)gameswf::array_gameswf_ASValue_3ea8a1::resize((gameswf::array<gameswf::ASValue::Self> *)&v20, 0);
  if ( v23 == 0 )
  {
    result = v20;
    v22 = 0;
    if ( v20 != nullptr )
      return (gameswf::Self *)gameswf::free_internal(v20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::splice  (binary VA: 0x11204b0)
// Original: gameswf::ASArray::splice
// ----------------------------------------------------------------------------
int gameswf::ASArray::splice(int a1)
{
  int v1;
  bool v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  gameswf::Self *v10;
  gameswf::Self *v11;
  gameswf::RefCounted::Self *Array;
  int v13;
  int v14;
  int i;
  int v16;
  int v17;
  gameswf::Self *v18;
  gameswf::ASValue::Self *v19;
  uint32_t *v20;
  int v21;
  int v22;
  int v24;
  int v25;
  gameswf::Self *v26;
  gameswf::ASValue::Self *v27;
  int v28;
  typedef gameswf::ASValue::Self *_g4_t_v29;
  typedef const gameswf::ASValue::Self *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef gameswf::ASArray::Self *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef char _g4_t_v43;
  typedef char _g4_t_v44;
  typedef uint8_t _g4_t_v45[12];
  typedef gameswf::Self *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v29)) > _g4_s0 ? (12u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v30)) > _g4_s1 ? (16u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v31)) > _g4_s2 ? (40u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v32)) > _g4_s3 ? (44u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v33)) > _g4_s4 ? (44u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v34)) > _g4_s5 ? (44u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v35)) > _g4_s6 ? (44u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v36)) > _g4_s7 ? (52u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v37)) > _g4_s8 ? (52u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v38)) > _g4_s9 ? (56u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v39)) > _g4_s10 ? (60u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v40)) > _g4_s11 ? (64u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v41)) > _g4_s12 ? (68u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v42)) > _g4_s13 ? (72u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v43)) > _g4_s14 ? (76u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (77u + sizeof(_g4_t_v44)) > _g4_s15 ? (77u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v45)) > _g4_s16 ? (96u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v46)) > _g4_s17 ? (108u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v47)) > _g4_s18 ? (112u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v48)) > _g4_s19 ? (116u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v49)) > _g4_s20 ? (120u + sizeof(_g4_t_v49)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 68u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 72u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 76u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 77u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 96u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 108u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 112u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 116u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 120u);

  v1 = *(uint32_t *)(a1 + 4);
  v42 = v1;
  if ( v1 != 0 )
  {
    v2 = G4_VCALL<uint8_t>(v1, 8, 20) == 0;
    v3 = 0;
    if ( !v2 )
      v3 = v42;
    v42 = v3;
  }
  v41 = *(uint32_t *)(v42 + 64);
  if ( *(int *)(a1 + 16) <= 0 )
  {
    v5 = 0;
LABEL_52:
    v6 = v41;
    v43 = 0;
    v44 = 0;
    goto LABEL_11;
  }
  v4 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v5 = v4;
  if ( v4 < 0 )
    v5 = v41 + v4;
  if ( *(int *)(a1 + 16) <= 1 )
    goto LABEL_52;
  v6 = v5 + gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  v43 = 0;
  v44 = 0;
  if ( *(int *)(a1 + 16) > 2 )
    gameswf::ASValue::opAssign(
      (gameswf::ASValue::Self *)&v43,
      (const gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 6)));
LABEL_11:
  if ( v5 > v41 )
    v5 = v41;
  v7 = 0;
  v8 = v41;
  if ( v5 < 0 )
    v5 = 0;
  if ( v6 <= v41 )
    v8 = v6;
  v40 = v5;
  v9 = *(uint32_t *)(a1 + 12);
  if ( v8 >= 0 )
    v7 = v8;
  v39 = v7;
  v10 = *(gameswf::Self **)(v9 + 212);
  if ( v10 != nullptr )
  {
    v11 = *(gameswf::Self **)(v9 + 208);
    if ( *((uint8_t *)v11 + 2) == 0 )
    {
      v2 = (*(uint16_t *)v11)-- == 1;
      if ( v2 )
        gameswf::free_internal(v11);
      *(uint32_t *)(v9 + 208) = 0;
      *(uint32_t *)(v9 + 212) = 0;
      v10 = nullptr;
    }
  }
  Array = (gameswf::RefCounted::Self *)(gameswf::createArray(v10));
  v38 = (gameswf::ASArray::Self *)(Array);
  if ( Array != nullptr )
    gameswf::RefCounted::addRef(Array);
  v13 = 0;
  v46 = nullptr;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  if ( v41 > 0 )
  {
    v14 = 0;
    for ( i = 0; i != v41; ++i )
    {
      v45[0] = 0;
      v45[1] = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v45, (const gameswf::ASValue::Self *)(*(uint32_t *)(v42 + 60) + v14));
      if ( i == v40 && v43 != 0 )
      {
        v24 = v47;
        v25 = v48;
        v37 = v47 + 1;
        if ( v47 + 1 <= v48 || v49 != 0 )
        {
          v26 = v46;
        }
        else
        {
          v28 = v37 + (v37 >> 1);
          v48 = v28;
          if ( v28 != 0 )
          {
            if ( v46 != nullptr )
              v26 = (gameswf::Self *)gameswf::realloc_internal(v46, 12 * v28, 12 * v25);
            else
              v26 = (gameswf::Self *)gameswf::malloc_internal(12 * v28);
            v46 = v26;
            v24 = v47;
          }
          else
          {
            if ( v46 != nullptr )
            {
              gameswf::free_internal(v46);
              v24 = v47;
            }
            v46 = nullptr;
            v26 = nullptr;
          }
        }
        v27 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v26 + 12 * v24));
        if ( v27 != nullptr )
        {
          *(uint8_t *)v27 = 0;
          *((uint8_t *)v27 + 1) = 0;
          gameswf::ASValue::opAssign(v27, (const gameswf::ASValue::Self *)&v43);
        }
        v47 = v37;
      }
      if ( i >= v39 || i < v40 )
      {
        v16 = v47;
        v31 = v48;
        v17 = v47 + 1;
        if ( v47 + 1 <= v48 || v49 != 0 )
        {
          v18 = v46;
        }
        else
        {
          v36 = v17 + (v17 >> 1);
          v48 = v36;
          if ( v36 != 0 )
          {
            v35 = v47 + 1;
            if ( v46 != nullptr )
              v18 = (gameswf::Self *)gameswf::realloc_internal(v46, 12 * v36, 12 * v31);
            else
              v18 = (gameswf::Self *)gameswf::malloc_internal(12 * v36);
            v46 = v18;
            v16 = v47;
            v17 = v35;
          }
          else
          {
            if ( v46 != nullptr )
            {
              v33 = v47 + 1;
              gameswf::free_internal(v46);
              v16 = v47;
              v17 = v33;
            }
            v46 = nullptr;
            v18 = nullptr;
          }
        }
        v19 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v18 + 12 * v16));
        if ( v19 != nullptr )
        {
          *(uint8_t *)v19 = 0;
          *((uint8_t *)v19 + 1) = 0;
          v32 = v17;
          gameswf::ASValue::opAssign(v19, (const gameswf::ASValue::Self *)v45);
          v17 = v32;
        }
        v47 = v17;
      }
      else
      {
        gameswf::ASArray::push(v38, (const gameswf::ASValue::Self *)v45);
      }
      v14 += 12;
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v45);
    }
    v13 = v47;
  }
  gameswf::array_gameswf_ASValue_3ea8a1::resize((gameswf::array<gameswf::ASValue::Self> *)(v42 + 60), v13);
  v20 = (uint32_t *)(v42 + 60);
  if ( *(int *)(v42 + 64) > 0 )
  {
    v21 = 0;
    v22 = 0;
    do
    {
      ++v22;
      v30 = (const gameswf::ASValue::Self *)((gameswf::Self *)((char *)v46 + v21));
      v34 = v20;
      v29 = (gameswf::ASValue::Self *)(v21 + *v20);
      v21 += 12;
      gameswf::ASValue::opAssign(v29, v30);
      v20 = v34;
    }
    while ( v22 < v34[1] );
  }
  gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v38);
  gameswf::array_gameswf_ASValue_3ea8a1::resize((gameswf::array<gameswf::ASValue::Self> *)&v46, 0);
  if ( v49 == 0 )
  {
    v48 = 0;
    if ( v46 != nullptr )
      gameswf::free_internal(v46);
    v46 = nullptr;
  }
  if ( v38 != nullptr )
    gameswf::RefCounted::dropRef(v38);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v43);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::sortOn  (binary VA: 0x1120a20)
// Original: gameswf::ASArray::sortOn
// ----------------------------------------------------------------------------
int gameswf::ASArray::sortOn(int a1)
{
  int v1;
  bool v2;
  int v3;
  int v4;
  char *v5;
  int v6;
  gameswf::Self *v7;
  char *v8;
  gameswf::Self *v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  gameswf::Self *v14;
  char *v15;
  gameswf::Self *v16;
  int v17;
  unsigned int v18;
  int result;
  int v20;
  gameswf::Self *v21;
  int v22;
  int v23;
  int v24;
  char *v25;
  int v26;
  int v27;
  int v28;
  typedef char *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef char _g4_t_v32;
  typedef uint8_t _g4_t_v33[3];
  typedef char *_g4_t_v34;
  typedef gameswf::Self *_g4_t_v35;
  typedef unsigned int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef char _g4_t_v38;
  typedef char _g4_t_v39;
  typedef char *_g4_t_v40;
  typedef gameswf::Self *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef gameswf::Self *_g4_t_v44[10];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v29)) > _g4_s0 ? (12u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v30)) > _g4_s1 ? (16u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v31)) > _g4_s2 ? (20u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v32)) > _g4_s3 ? (32u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (33u + sizeof(_g4_t_v33)) > _g4_s4 ? (33u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v34)) > _g4_s5 ? (36u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v35)) > _g4_s6 ? (44u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v36)) > _g4_s7 ? (48u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v37)) > _g4_s8 ? (64u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v38)) > _g4_s9 ? (68u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (69u + sizeof(_g4_t_v39)) > _g4_s10 ? (69u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v40)) > _g4_s11 ? (72u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v41)) > _g4_s12 ? (80u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v42)) > _g4_s13 ? (84u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v43)) > _g4_s14 ? (96u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v44)) > _g4_s15 ? (100u + sizeof(_g4_t_v44)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 33u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 64u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 68u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 69u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 72u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 80u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 84u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 96u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 100u);

  v1 = *(uint32_t *)(a1 + 4);
  v31 = v1;
  if ( v1 != 0 )
  {
    v2 = G4_VCALL<uint8_t>(v1, 8, 20) == 0;
    v3 = 0;
    if ( !v2 )
      v3 = v31;
    v31 = v3;
  }
  v4 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v4 == 3 || *(uint8_t *)v4 == 4 )
  {
    v5 = *(char **)(v4 + 4);
  }
  else
  {
    v5 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
    {
      byte_20D6378 = 1;
      v20 = dword_20D6388 | 0x7FFFFF;
      byte_20D6379 = 0;
      dword_20D6388 = v20;
      BYTE2(dword_20D6388) = BYTE2(v20) & 0x7F;
      HIBYTE(dword_20D6388) = HIBYTE(v20) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
    }
  }
  v32 = 1;
  v33[0] = 0;
  if ( *v5 == -1 )
    v6 = *((uint32_t *)v5 + 1) - 1;
  else
    v6 = *v5 - 1;
  gameswf::String::resize((gameswf::String::Self *)&v32, v6);
  v7 = (gameswf::Self *)(v5 + 1);
  if ( *v5 == -1 )
    v7 = *((gameswf::Self **)v5 + 3);
  if ( v32 == -1 )
  {
    v8 = v34;
    v9 = v35;
  }
  else
  {
    v8 = (char *)v32;
    v9 = (gameswf::Self *)v33;
  }
  gameswf::Strcpy_s(v9, v8, v7);
  v30 = *((uint32_t *)v5 + 4);
  if ( (uint8_t *)(v30 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *v5 == -1 )
    {
      v25 = *((char **)v5 + 3);
      v26 = *((uint32_t *)v5 + 1) - 1;
    }
    else
    {
      v25 = v5 + 1;
      v26 = *v5 - 1;
    }
    v10 = 5381;
    if ( v26 > 0 )
    {
      v29 = v5;
      do
      {
        --v26;
        v27 = 33 * v10;
        v28 = (uint8_t)v25[v26] + 32;
        if ( (uint8_t)(v25[v26] - 65) > 0x19u )
          v28 = (uint8_t)v25[v26];
        v10 = v27 ^ v28;
      }
      while ( v26 != 0 );
      v5 = v29;
      v10 = v10 << 9 >> 9;
    }
    *((uint32_t *)v5 + 4) = v10 & 0x7FFFFF | v30 & 0xFF800000;
  }
  else
  {
    v10 = v30 << 9 >> 9;
  }
  v11 = v10 & 0x7FFFFF | v36 & 0xFF800000;
  LOWORD(v36) = v10;
  HIBYTE(v36) = HIBYTE(v11) | 1;
  BYTE2(v36) = BYTE2(v11) & 0x7F;
  v12 = 0;
  if ( *(int *)(a1 + 16) > 1 )
    v12 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  v37 = v12;
  v38 = 1;
  v39 = 0;
  if ( v32 == -1 )
    v13 = (int)(uintptr_t)(v34 - 1);
  else
    v13 = v32 - 1;
  gameswf::String::resize((gameswf::String::Self *)&v38, v13);
  v14 = (gameswf::Self *)v33;
  if ( v32 == -1 )
    v14 = v35;
  if ( v38 == -1 )
  {
    v15 = v40;
    v16 = v41;
  }
  else
  {
    v15 = (char *)v38;
    v16 = (gameswf::Self *)&v39;
  }
  gameswf::Strcpy_s(v16, v15, v14);
  if ( (uint8_t *)(v36 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( v32 == -1 )
    {
      v21 = v35;
      v22 = (int)(uintptr_t)(v34 - 1);
    }
    else
    {
      v21 = (gameswf::Self *)v33;
      v22 = v32 - 1;
    }
    v17 = 5381;
    if ( v22 > 0 )
    {
      do
      {
        --v22;
        v23 = 33 * v17;
        v24 = *((uint8_t *)v21 + v22) + 32;
        if ( (uint8_t)(*((uint8_t *)v21 + v22) - 65) > 0x19u )
          v24 = *((uint8_t *)v21 + v22);
        v17 = v23 ^ v24;
      }
      while ( v22 != 0 );
      v17 = v17 << 9 >> 9;
    }
    v36 = v17 & 0x7FFFFF | v36 & 0xFF800000;
  }
  else
  {
    v17 = (int)(v36 << 9) >> 9;
  }
  v18 = v17 & 0x7FFFFF | v42 & 0xFF800000;
  LOWORD(v42) = v17;
  result = HIWORD(v18) & 0x7F;
  BYTE2(v42) = BYTE2(v18) & 0x7F;
  HIBYTE(v42) = HIBYTE(v18) | 1;
  if ( *(int *)(v31 + 64) > 0 )
  {
    v43 = v37;
    sub_111BC00((int)(uintptr_t)(v44), &v38);
    result = g4_std::sort_gameswf_ASValue_gameswf_20cf09(
               *(uint32_t *)(v31 + 60),
               *(uint32_t *)(v31 + 60) + 12 * *(uint32_t *)(v31 + 64),
               &v43);
    if ( LOBYTE(v44[0]) == 0xFF && (HIBYTE(v44[4]) & 1) != 0 )
      result = gameswf::free_internal(v44[3]);
  }
  if ( v38 == -1 && (v42 & 0x1000000) != 0 )
  {
    result = gameswf::free_internal(v41);
    if ( v32 != -1 )
      return result;
  }
  else if ( v32 != -1 )
  {
    return result;
  }
  if ( (v36 & 0x1000000) != 0 )
    return gameswf::free_internal(v35);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::sort  (binary VA: 0x1120ef0)
// Original: gameswf::ASArray::sort
// ----------------------------------------------------------------------------
int gameswf::ASArray::sort(int a1)
{
  gameswf::ASObject::Self *v1;
  bool v2;
  gameswf::ASObject::Self *v3;
  int v4;
  int v5;
  int v6;
  gameswf::ASObject::Self *v7;
  int v8;
  gameswf::ASValue::Self *v10;
  gameswf::ASValue::Self *v11;
  int v12;
  const gameswf::ASValue::Self *v13;
  gameswf::ASValue::Self *v14;
  gameswf::ASValue::Self *j;
  gameswf::ASValue::Self *v16;
  gameswf::ASValue::Self *v17;
  int v18;
  const gameswf::ASValue::Self *v19;
  gameswf::ASValue::Self *v20;
  gameswf::ASValue::Self *i;
  typedef gameswf::ASValue::Self *_g4_t_v22;
  typedef gameswf::ASValue::Self *_g4_t_v23;
  typedef const gameswf::ASValue::Self *_g4_t_v24;
  typedef const gameswf::ASValue::Self *_g4_t_v25;
  typedef gameswf::ASValue::Self *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef gameswf::ASValue::Self *_g4_t_v29;
  typedef gameswf::ASObject::Self *_g4_t_v30;
  typedef gameswf::ASValue::Self *_g4_t_v31;
  typedef gameswf::ASValue::Self *_g4_t_v32;
  typedef uint32_t _g4_t_v33[2];
  typedef uint8_t _g4_t_v34[20];
  typedef uint8_t _g4_t_v35[24];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v23)) > _g4_s1 ? (0u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v24)) > _g4_s2 ? (4u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v25)) > _g4_s3 ? (4u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v26)) > _g4_s4 ? (40u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v27)) > _g4_s5 ? (40u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v28)) > _g4_s6 ? (44u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v29)) > _g4_s7 ? (44u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v30)) > _g4_s8 ? (48u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v31)) > _g4_s9 ? (52u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v32)) > _g4_s10 ? (52u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v33)) > _g4_s11 ? (72u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v34)) > _g4_s12 ? (80u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v35)) > _g4_s13 ? (100u + sizeof(_g4_t_v35)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 80u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 100u);

  v1 = *(gameswf::ASObject::Self **)(a1 + 4);
  v30 = v1;
  if ( v1 != nullptr )
  {
    v2 = G4_VCALL<uint8_t>(v1, 8, 20) == 0;
    v3 = nullptr;
    if ( !v2 )
      v3 = v30;
    v30 = v3;
  }
  v34[0] = 0;
  v34[1] = 0;
  v4 = *(uint32_t *)(a1 + 16);
  if ( v4 > 0 )
  {
    if ( (uint8_t)gameswf::ASValue::isFunction((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12)
                                                                          + 12 * *(uint32_t *)(a1 + 20))) != 0 )
    {
      gameswf::ASValue::opAssign(
        (gameswf::ASValue::Self *)v34,
        (const gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
      v28 = 0;
      v5 = 1;
      if ( *(int *)(a1 + 16) > 1 )
        goto LABEL_8;
      goto LABEL_12;
    }
    v4 = *(uint32_t *)(a1 + 16);
  }
  v5 = 0;
  v28 = 0;
  if ( v4 > 0 )
  {
LABEL_8:
    v6 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * (*(uint32_t *)(a1 + 20) - v5)));
    v7 = v30;
    v28 = v6;
    v8 = *((uint32_t *)v30 + 16);
    if ( v8 <= 0 )
      goto LABEL_9;
    goto LABEL_13;
  }
LABEL_12:
  v7 = v30;
  v8 = *((uint32_t *)v30 + 16);
  if ( v8 <= 0 )
    goto LABEL_9;
LABEL_13:
  if ( v34[0] != 0 )
  {
    v16 = *((gameswf::ASValue::Self **)v30 + 15);
    v27 = *(uint32_t *)(a1 + 12);
    v17 = (gameswf::ASValue::Self *)((char *)v16 + 12 * v8);
    v29 = v17;
    if ( v16 != v17 )
    {
      v18 = v17 - v16;
      _BitScanReverse((unsigned int *)&v17, -1431655765 * ((v17 - v16) >> 2));
      g4_std::introsort_loop_gameswf_ASValue_int_game_daf37c(
        v16,
        v29,
        2 * (31 - ((unsigned int)(uintptr_t)(v17) ^ 0x1F)),
        (int)(uintptr_t)(v34),
        *(uint32_t *)(a1 + 12));
      if ( v18 <= 203 )
      {
        g4_std::insertion_sort_gameswf_ASValue_gameswf_43f6cc(v16, (int)(uintptr_t)(v29), (int)(uintptr_t)(v34), v27);
      }
      else
      {
        v32 = (gameswf::ASValue::Self *)((char *)v16 + 192);
        g4_std::insertion_sort_gameswf_ASValue_gameswf_43f6cc(v16, (int)(uintptr_t)(v16) + 192, (int)(uintptr_t)(v34), v27);
        if ( v29 != (gameswf::ASValue::Self *)((char *)v16 + 192) )
        {
          v19 = (gameswf::ASValue::Self *)((char *)v16 + 192);
          do
          {
            v33[0] = (uint32_t)(uintptr_t)(v34);
            v33[1] = v27;
            v35[0] = 0;
            v35[1] = 0;
            gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v35, v19);
            v20 = v32;
            for ( i = (gameswf::ASValue::Self *)((char *)v32 - 12);
                  (uint8_t)gameswf::CustomArraySorter::opCall((int)(uintptr_t)(v33), (gameswf::ASValue::Self *)v35, i) != 0;
                  i = (gameswf::ASValue::Self *)((char *)i - 12) )
            {
              v25 = i;
              v23 = v20;
              v20 = i;
              gameswf::ASValue::opAssign(v23, v25);
            }
            gameswf::ASValue::opAssign(v20, (const gameswf::ASValue::Self *)v35);
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v35);
            v32 = (gameswf::ASValue::Self *)((char *)v32 + 12);
            v19 = v32;
          }
          while ( v29 != v32 );
        }
      }
    }
  }
  else
  {
    v10 = *((gameswf::ASValue::Self **)v7 + 15);
    v11 = (gameswf::ASValue::Self *)((char *)v10 + 12 * v8);
    v26 = v11;
    if ( v10 != v11 )
    {
      v12 = v11 - v10;
      _BitScanReverse((unsigned int *)&v11, -1431655765 * ((v11 - v10) >> 2));
      g4_std::introsort_loop_gameswf_ASValue_int_game_a15ea8(
        v10,
        v26,
        2 * (31 - ((unsigned int)(uintptr_t)(v11) ^ 0x1F)),
        v28);
      if ( v12 <= 203 )
      {
        g4_std::insertion_sort_gameswf_ASValue_gameswf_99a3ed(v10, (int)(uintptr_t)(v26), v28);
      }
      else
      {
        v31 = (gameswf::ASValue::Self *)((char *)v10 + 192);
        g4_std::insertion_sort_gameswf_ASValue_gameswf_99a3ed(v10, (int)(uintptr_t)(v10) + 192, v28);
        if ( v26 != (gameswf::ASValue::Self *)((char *)v10 + 192) )
        {
          v13 = (gameswf::ASValue::Self *)((char *)v10 + 192);
          do
          {
            v33[0] = v28;
            v35[0] = 0;
            v35[1] = 0;
            gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v35, v13);
            v14 = v31;
            for ( j = (gameswf::ASValue::Self *)((char *)v31 - 12);
                  (uint8_t)gameswf::StandardArraySorter::opCall((int)(uintptr_t)(v33), (gameswf::ASValue::Self *)v35, j) != 0;
                  j = (gameswf::ASValue::Self *)((char *)j - 12) )
            {
              v24 = j;
              v22 = v14;
              v14 = j;
              gameswf::ASValue::opAssign(v22, v24);
            }
            gameswf::ASValue::opAssign(v14, (const gameswf::ASValue::Self *)v35);
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v35);
            v31 = (gameswf::ASValue::Self *)((char *)v31 + 12);
            v13 = v31;
          }
          while ( v26 != v31 );
        }
      }
    }
  }
LABEL_9:
  gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v30);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v34);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::is  (binary VA: 0x1121300)
// Original: gameswf::ASArray::is
// ----------------------------------------------------------------------------
bool gameswf::ASArray::is(gameswf::ASArray::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 20 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::Destroy  (binary VA: 0x1121bd0)
// Original: gameswf::ASArray::~ASArray
// ----------------------------------------------------------------------------
void gameswf::ASArray::Destroy(gameswf::ASArray::Self *self)
{
  gameswf::Self *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FB48);
  gameswf::array_gameswf_ASValue_3ea8a1::resize((gameswf::ASArray::Self *)((char *)self + 60), 0);
  if ( *((uint32_t *)self + 18) == 0 )
  {
    v1 = *((gameswf::Self **)self + 15);
    *((uint32_t *)self + 17) = 0;
    if ( v1 != nullptr )
      gameswf::free_internal(v1);
    *((uint32_t *)self + 15) = 0;
  }
  if ( *((uint8_t *)self + 40) == 0xFF && (*((uint8_t *)self + 59) & 1) != 0 )
    gameswf::free_internal(*((gameswf::Self **)self + 13));
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASArray::Destroy_ea1121c80  (binary VA: 0x1121c80)
// Original: gameswf::ASArray::~ASArray
// ----------------------------------------------------------------------------
void gameswf::ASArray::Destroy_ea1121c80(gameswf::ASArray::Self *self)
{
  gameswf::Self *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FB48);
  gameswf::array_gameswf_ASValue_3ea8a1::resize((gameswf::ASArray::Self *)((char *)self + 60), 0);
  if ( *((uint32_t *)self + 18) == 0 )
  {
    v1 = *((gameswf::Self **)self + 15);
    *((uint32_t *)self + 17) = 0;
    if ( v1 != nullptr )
      gameswf::free_internal(v1);
    *((uint32_t *)self + 15) = 0;
  }
  if ( *((uint8_t *)self + 40) == 0xFF && (*((uint8_t *)self + 59) & 1) != 0 )
    gameswf::free_internal(*((gameswf::Self **)self + 13));
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}


