#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASError.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASError::toString  (binary VA: 0x11913f0)
// Original: gameswf::ASError::toString
// ----------------------------------------------------------------------------
char * gameswf::ASError::toString(gameswf::ASError::Self *self)
{
  char *v1;

  if ( *((uint8_t *)self + 40) == 0xFF )
    v1 = *((char **)self + 13);
  else
    v1 = (char *)self + 41;
  sprintf(((char *)(&byte_2115AC0)), "[Error] %s", v1);
  return (char *)(uintptr_t)(((char *)(&byte_2115AC0)));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASError::getStandardMember  (binary VA: 0x1191450)
// Original: gameswf::ASError::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASError::getStandardMember(int a1, int a2, const gameswf::String::Self **a3)
{
  int result;

  result = 0;
  if ( a2 == 88 )
  {
    gameswf::ASValue::setString(a3, (const gameswf::String::Self *)(a1 + 40));
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASError::newOp  (binary VA: 0x11914a0)
// Original: gameswf::ASError::newOp
// ----------------------------------------------------------------------------
int gameswf::ASError::newOp(gameswf::ASError::Self *self)
{
  int v1;
  int v2;

  v1 = opNew(0x3Cu);
  gameswf::ASObject::ASObject((gameswf::ASObject::Self *)v1, self);
  *(uint8_t *)(v1 + 40) = 1;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2091A08);
  v2 = *(uint32_t *)(v1 + 56) | 0x7FFFFF;
  *(uint8_t *)(v1 + 41) = 0;
  *(uint32_t *)(v1 + 56) = v2;
  *(uint8_t *)(v1 + 58) = BYTE2(v2) & 0x7F;
  *(uint8_t *)(v1 + 59) = HIBYTE(v2) | 1;
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASError::init  (binary VA: 0x1191520)
// Original: gameswf::ASError::init
// ----------------------------------------------------------------------------
int gameswf::ASError::init(int a1)
{
  uint32_t *v1;
  int v2;
  int v3;
  gameswf::Self *v4;
  char *v5;
  gameswf::Self *v6;
  int v7;
  unsigned int v8;
  int result;
  int v10;
  char *v11;
  gameswf::Self *v12;
  gameswf::Self *v13;
  int v14;
  gameswf::Self *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  char *v21;
  int v22;
  int v23;
  typedef uint32_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef char *_g4_t_v27;
  typedef char _g4_t_v28;
  typedef char _g4_t_v29;
  typedef uint8_t _g4_t_v30[3];
  typedef char *_g4_t_v31;
  typedef gameswf::Self *_g4_t_v32;
  typedef unsigned int _g4_t_v33;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v24)) > _g4_s0 ? (12u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v25)) > _g4_s1 ? (16u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v26)) > _g4_s2 ? (16u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v27)) > _g4_s3 ? (24u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v28)) > _g4_s4 ? (24u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v29)) > _g4_s5 ? (32u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (33u + sizeof(_g4_t_v30)) > _g4_s6 ? (33u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v31)) > _g4_s7 ? (36u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v32)) > _g4_s8 ? (44u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v33)) > _g4_s9 ? (48u + sizeof(_g4_t_v33)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 33u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);

  v1 = *(uint32_t **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v1 + 8))(*(uint32_t *)(a1 + 4), 48) == 0 )
    v1 = nullptr;
  if ( *(int *)(a1 + 16) <= 0 )
  {
    v29 = 1;
    v30[0] = 0;
    LOWORD(v33) = -1;
    v28 = 1;
    BYTE2(v33) = 127;
    HIBYTE(v33) |= 1u;
  }
  else
  {
    v2 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
    if ( *(uint8_t *)v2 == 3 || *(uint8_t *)v2 == 4 )
    {
      v27 = *(char **)(v2 + 4);
    }
    else
    {
      v27 = (char *)(&byte_20D6378);
      if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
      {
        byte_20D6378 = 1;
        v19 = dword_20D6388 | 0x7FFFFF;
        byte_20D6379 = 0;
        dword_20D6388 = v19;
        BYTE2(dword_20D6388) = BYTE2(v19) & 0x7F;
        HIBYTE(dword_20D6388) = HIBYTE(v19) | 1;
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
        __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
      }
    }
    v29 = 1;
    v30[0] = 0;
    if ( *v27 == -1 )
      v3 = *((uint32_t *)v27 + 1) - 1;
    else
      v3 = *v27 - 1;
    gameswf::String::resize((gameswf::String::Self *)&v29, v3);
    v4 = (gameswf::Self *)(v27 + 1);
    if ( *v27 == -1 )
      v4 = *((gameswf::Self **)v27 + 3);
    if ( v29 == -1 )
    {
      v5 = v31;
      v6 = v32;
    }
    else
    {
      v5 = (char *)v29;
      v6 = (gameswf::Self *)v30;
    }
    gameswf::Strcpy_s(v6, v5, v4);
    v25 = *((uint32_t *)v27 + 4);
    if ( (uint8_t *)(v25 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( *v27 == -1 )
      {
        v21 = *((char **)v27 + 3);
        v20 = *((uint32_t *)v27 + 1) - 1;
      }
      else
      {
        v20 = *v27 - 1;
        v21 = v27 + 1;
      }
      v7 = 5381;
      if ( v20 > 0 )
      {
        v24 = v1;
        do
        {
          --v20;
          v22 = 33 * v7;
          v23 = (uint8_t)v21[v20] + 32;
          if ( (uint8_t)(v21[v20] - 65) > 0x19u )
            v23 = (uint8_t)v21[v20];
          v7 = v22 ^ v23;
        }
        while ( v20 != 0 );
        v1 = v24;
        v7 = v7 << 9 >> 9;
      }
      *((uint32_t *)v27 + 4) = v7 & 0x7FFFFF | v25 & 0xFF800000;
    }
    else
    {
      v7 = v25 << 9 >> 9;
    }
    v8 = v7 & 0x7FFFFF | v33 & 0xFF800000;
    LOWORD(v33) = v7;
    BYTE2(v33) = BYTE2(v8) & 0x7F;
    HIBYTE(v33) = HIBYTE(v8) | 1;
    v28 = v29;
  }
  result = (int)(uintptr_t)(v1 + 10);
  if ( v1 + 10 != (uint32_t *)&v29 )
  {
    if ( v28 == -1 )
      v10 = (int)(uintptr_t)(v31 - 1);
    else
      v10 = v28 - 1;
    gameswf::String::resize((gameswf::String::Self *)(v1 + 10), v10);
    LOBYTE(v11) = *((uint8_t *)v1 + 40);
    v12 = (gameswf::Self *)v30;
    if ( v29 == -1 )
      v12 = v32;
    if ( (uint8_t)(uintptr_t)v11 == 0xFF )
    {
      v11 = (char *)v1[11];
      v13 = (gameswf::Self *)v1[13];
    }
    else
    {
      v11 = (char *)(char)(uintptr_t)v11;
      v13 = (gameswf::Self *)((char *)v1 + 41);
    }
    gameswf::Strcpy_s(v13, v11, v12);
    if ( (uint8_t *)(v33 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      v28 = v29;
      if ( v29 == -1 )
      {
        v15 = v32;
        v16 = (int)(uintptr_t)(v31 - 1);
      }
      else
      {
        v15 = (gameswf::Self *)v30;
        v16 = v29 - 1;
      }
      v14 = 5381;
      if ( v16 > 0 )
      {
        v26 = v1;
        do
        {
          --v16;
          v17 = 33 * v14;
          v18 = *((uint8_t *)v15 + v16) + 32;
          if ( (uint8_t)(*((uint8_t *)v15 + v16) - 65) > 0x19u )
            v18 = *((uint8_t *)v15 + v16);
          v14 = v17 ^ v18;
        }
        while ( v16 != 0 );
        v1 = v26;
        v14 = v14 << 9 >> 9;
      }
      v33 = v14 & 0x7FFFFF | v33 & 0xFF800000;
    }
    else
    {
      v28 = v29;
      v14 = (int)(v33 << 9) >> 9;
    }
    result = v14 & 0x7FFFFF;
    v1[14] = result | v1[14] & 0xFF800000;
  }
  if ( v28 == -1 && (v33 & 0x1000000) != 0 )
    return gameswf::free_internal(v32);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASError::is  (binary VA: 0x1191960)
// Original: gameswf::ASError::is
// ----------------------------------------------------------------------------
bool gameswf::ASError::is(gameswf::ASError::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 48 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASError::Destroy  (binary VA: 0x1191980)
// Original: gameswf::ASError::~ASError
// ----------------------------------------------------------------------------
void gameswf::ASError::Destroy(gameswf::ASError::Self *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 40) == 0xFF;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091A08);
  if ( v1 && (*((uint8_t *)self + 59) & 1) != 0 )
    gameswf::free_internal(*((gameswf::Self **)self + 13));
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASError::Destroy_ea11919f0  (binary VA: 0x11919f0)
// Original: gameswf::ASError::~ASError
// ----------------------------------------------------------------------------
void gameswf::ASError::Destroy_ea11919f0(gameswf::ASError::Self *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 40) == 0xFF;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091A08);
  if ( v1 && (*((uint8_t *)self + 59) & 1) != 0 )
    gameswf::free_internal(*((gameswf::Self **)self + 13));
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}


