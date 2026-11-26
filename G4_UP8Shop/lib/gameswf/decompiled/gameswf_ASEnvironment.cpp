#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASEnvironment.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASEnvironment::Construct  (binary VA: 0x107a0e0)
// Original: gameswf::ASEnvironment::ASEnvironment
// ----------------------------------------------------------------------------
gameswf::ASEnvironment::Self * gameswf::ASEnvironment::Construct(gameswf::ASEnvironment::Self *self, gameswf::Player::Self *a2, unsigned int a3)
{
  gameswf::ASEnvironment::Self *result;
  gameswf::Self *v4;
  gameswf::ASEnvironment::Self *v6;

  result = (gameswf::ASEnvironment::Self *)(a2);
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  if ( a3 <= 8 )
  {
    *((uint32_t *)self + 2) = 8;
    *(uint32_t *)self = (uint32_t)(uintptr_t)((char *)self + 16);
    *((uint32_t *)self + 3) = 1;
  }
  *((uint8_t *)self + 112) = 0;
  *((uint8_t *)self + 113) = 0;
  *((uint8_t *)self + 124) = 0;
  *((uint8_t *)self + 125) = 0;
  *((uint8_t *)self + 136) = 0;
  *((uint8_t *)self + 137) = 0;
  *((uint8_t *)self + 148) = 0;
  *((uint8_t *)self + 149) = 0;
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 42) = 0;
  *((uint32_t *)self + 43) = 0;
  *((uint32_t *)self + 44) = 0;
  *((uint8_t *)self + 180) = 0;
  *((uint8_t *)self + 181) = 0;
  *((uint32_t *)self + 48) = 0;
  *((uint32_t *)self + 49) = 0;
  *((uint32_t *)self + 50) = 0;
  *((uint32_t *)self + 51) = 0;
  *((uint32_t *)self + 52) = 0;
  *((uint32_t *)self + 53) = (uint32_t)(uintptr_t)(a2);
  if ( a2 != nullptr )
  {
    result = (gameswf::ASEnvironment::Self *)gameswf::RefCounted::getWeakProxy(a2);
    v4 = *((gameswf::Self **)self + 52);
    if ( result != (gameswf::ASEnvironment::Self *)(v4) )
    {
      if ( v4 != nullptr && (*(uint16_t *)v4)-- == 1 )
      {
        v6 = result;
        gameswf::free_internal(v4);
        result = v6;
      }
      *((uint32_t *)self + 52) = (uint32_t)(uintptr_t)(result);
      if ( result != nullptr )
        ++*(uint16_t *)result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEnvironment::Destroy  (binary VA: 0x107a4b0)
// Original: gameswf::ASEnvironment::~ASEnvironment
// ----------------------------------------------------------------------------
void gameswf::ASEnvironment::Destroy(gameswf::ASEnvironment::Self *self)
{
  gameswf::Self *v1;
  int v3;
  int v4;
  int v5;
  int v6;
  gameswf::Self *v7;
  gameswf::ASValue::Self *v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v1 = *((gameswf::Self **)self + 52);
  if ( v1 != nullptr && (*(uint16_t *)v1)-- == 1 )
    gameswf::free_internal(v1);
  v3 = *((uint32_t *)self + 49);
  if ( v3 <= 0 )
  {
    if ( v3 < 0 )
    {
      v11 = 32 * v3;
      do
      {
        v9 = *((uint32_t *)self + 48) + v11;
        if ( v9 != 0 )
        {
          v10 = *(uint32_t *)(v9 + 16);
          *(uint8_t *)v9 = 1;
          v10 |= 0x7FFFFFu;
          *(uint8_t *)(v9 + 1) = 0;
          *(uint32_t *)(v9 + 16) = v10;
          *(uint8_t *)(v9 + 20) = 0;
          *(uint8_t *)(v9 + 21) = 0;
          *(uint8_t *)(v9 + 18) = BYTE2(v10) & 0x7F;
          *(uint8_t *)(v9 + 19) = HIBYTE(v10) | 1;
        }
        v11 += 32;
        ++v3;
      }
      while ( v3 != 0 );
    }
  }
  else
  {
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = *((uint32_t *)self + 48) + 32 * v4;
        v12 = v4;
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v5 + 20));
        if ( *(uint8_t *)v5 == 0xFF && (*(uint8_t *)(v5 + 19) & 1) != 0 )
          break;
        v4 = v12 + 1;
        if ( v12 + 1 == v3 )
          goto LABEL_10;
      }
      gameswf::free_internal(*(gameswf::Self **)(v5 + 12));
      v4 = v12 + 1;
    }
    while ( v12 + 1 != v3 );
  }
LABEL_10:
  v6 = *((uint32_t *)self + 51);
  *((uint32_t *)self + 49) = 0;
  if ( v6 == 0 )
  {
    v7 = *((gameswf::Self **)self + 48);
    *((uint32_t *)self + 50) = 0;
    if ( v7 != nullptr )
      gameswf::free_internal(v7);
    *((uint32_t *)self + 48) = 0;
  }
  gameswf::ASValue::dropRefs((gameswf::ASEnvironment::Self *)((char *)self + 180));
  if ( *((uint32_t *)self + 44) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 44));
  v8 = (gameswf::ASValue::Self *)((gameswf::ASEnvironment::Self *)((char *)self + 160));
  gameswf::array_gameswf_ASValue_3ea8a1::resize((gameswf::ASEnvironment::Self *)((char *)self + 160), 0);
  gameswf::array_gameswf_ASValue_3ea8a1::reserve((gameswf::ASEnvironment::Self *)((char *)self + 160), 0);
  do
  {
    v8 = (gameswf::ASValue::Self *)((char *)v8 - 12);
    gameswf::ASValue::dropRefs(v8);
  }
  while ( (gameswf::ASEnvironment::Self *)((char *)self + 112) != (gameswf::ASEnvironment::Self *)(v8) );
  gameswf::array_gameswf_ASValue_3ea8a1::resize(self, 0);
  gameswf::array_gameswf_ASValue_3ea8a1::reserve(self, 0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEnvironment::get_target  (binary VA: 0x1091930)
// Original: gameswf::ASEnvironment::get_target
// ----------------------------------------------------------------------------
int gameswf::ASEnvironment::get_target(gameswf::ASEnvironment::Self *self)
{
  int v1;

  v1 = *((uint32_t *)self + 44);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*((uint32_t *)self + 44), 1) == 0 )
    return 0;
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEnvironment::setTarget  (binary VA: 0x1091970)
// Original: gameswf::ASEnvironment::setTarget
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASEnvironment::setTarget(gameswf::ASEnvironment::Self *self, gameswf::Character::Self *a2)
{
  gameswf::RefCounted::Self *result;

  result = *((gameswf::RefCounted::Self **)self + 44);
  if ( a2 != (gameswf::Character::Self *)(result) )
  {
    if ( result != nullptr )
      result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 44));
    *((uint32_t *)self + 44) = (uint32_t)(uintptr_t)(a2);
    if ( a2 != nullptr )
      return gameswf::RefCounted::addRef(a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEnvironment::addLocal  (binary VA: 0x10919d0)
// Original: gameswf::ASEnvironment::addLocal
// ----------------------------------------------------------------------------
int gameswf::ASEnvironment::addLocal(gameswf::ASEnvironment::Self *self, const gameswf::String::Self *a2, const gameswf::ASValue::Self *a3)
{
  int v3;
  gameswf::Self *v4;
  char *v5;
  gameswf::Self *v6;
  int v7;
  unsigned int v8;
  int v9;
  int v10;
  char *v11;
  char *v12;
  int v13;
  char *v14;
  gameswf::Self *v15;
  gameswf::Self *v16;
  int v17;
  unsigned int v18;
  int v19;
  int result;
  gameswf::Self *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  char *v27;
  int v28;
  int v29;
  typedef char *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef char _g4_t_v33;
  typedef uint8_t _g4_t_v34[3];
  typedef char *_g4_t_v35;
  typedef gameswf::Self *_g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef uint8_t _g4_t_v38[24];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v30)) > _g4_s0 ? (0u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v31)) > _g4_s1 ? (4u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v32)) > _g4_s2 ? (8u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v33)) > _g4_s3 ? (16u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (17u + sizeof(_g4_t_v34)) > _g4_s4 ? (17u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v35)) > _g4_s5 ? (20u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v36)) > _g4_s6 ? (28u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v37)) > _g4_s7 ? (32u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v38)) > _g4_s8 ? (36u + sizeof(_g4_t_v38)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 17u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);

  v33 = 1;
  v34[0] = 0;
  if ( *(uint8_t *)a2 == 0xFF )
    v3 = *((uint32_t *)a2 + 1) - 1;
  else
    v3 = *(char *)a2 - 1;
  gameswf::String::resize((gameswf::String::Self *)&v33, v3);
  v4 = (gameswf::Self *)((const gameswf::String::Self *)((char *)a2 + 1));
  if ( *(uint8_t *)a2 == 0xFF )
    v4 = *((gameswf::Self **)a2 + 3);
  if ( v33 == -1 )
  {
    v5 = v35;
    v6 = v36;
  }
  else
  {
    v5 = (char *)v33;
    v6 = (gameswf::Self *)v34;
  }
  gameswf::Strcpy_s(v6, v5, v4);
  v31 = *((uint32_t *)a2 + 4);
  if ( (uint8_t *)(v31 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *(uint8_t *)a2 == 0xFF )
    {
      v27 = *((char **)a2 + 3);
      v26 = *((uint32_t *)a2 + 1) - 1;
    }
    else
    {
      v26 = *(char *)a2 - 1;
      v27 = (char *)a2 + 1;
    }
    v7 = 5381;
    if ( v26 > 0 )
    {
      do
      {
        --v26;
        v28 = 33 * v7;
        v29 = (uint8_t)v27[v26] + 32;
        if ( (uint8_t)(v27[v26] - 65) > 0x19u )
          v29 = (uint8_t)v27[v26];
        v7 = v28 ^ v29;
      }
      while ( v26 != 0 );
      v7 = v7 << 9 >> 9;
    }
    *((uint32_t *)a2 + 4) = v7 & 0x7FFFFF | v31 & 0xFF800000;
  }
  else
  {
    v7 = v31 << 9 >> 9;
  }
  v38[0] = 0;
  v8 = v7 & 0x7FFFFF | v37 & 0xFF800000;
  v38[1] = 0;
  LOWORD(v37) = v7;
  BYTE2(v37) = BYTE2(v8) & 0x7F;
  HIBYTE(v37) = HIBYTE(v8) | 1;
  gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v38, a3);
  v9 = *((uint32_t *)self + 49);
  v10 = *((uint32_t *)self + 50);
  v32 = v9 + 1;
  if ( v9 + 1 <= v10 || *((uint32_t *)self + 51) != 0 )
  {
    v11 = *((char **)self + 48);
  }
  else
  {
    v25 = v32 + (v32 >> 1);
    *((uint32_t *)self + 50) = v25;
    if ( v25 != 0 )
    {
      if ( *((uint32_t *)self + 48) != 0 )
        v11 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 48), 32 * v25, 32 * v10);
      else
        v11 = (char *)gameswf::malloc_internal(32 * v25);
      *((uint32_t *)self + 48) = (uint32_t)(uintptr_t)(v11);
      v9 = *((uint32_t *)self + 49);
    }
    else
    {
      if ( *((uint32_t *)self + 48) != 0 )
      {
        gameswf::free_internal(*((gameswf::Self **)self + 48));
        v9 = *((uint32_t *)self + 49);
      }
      v11 = nullptr;
      *((uint32_t *)self + 48) = 0;
    }
  }
  v12 = &v11[32 * v9];
  if ( v12 != nullptr )
  {
    *v12 = 1;
    v12[1] = 0;
    if ( v33 == -1 )
      v13 = (int)(uintptr_t)(v35 - 1);
    else
      v13 = v33 - 1;
    gameswf::String::resize((gameswf::String::Self *)v12, v13);
    LOBYTE(v14) = *v12;
    v15 = (gameswf::Self *)v34;
    if ( v33 == -1 )
      v15 = v36;
    if ( (uint8_t)(uintptr_t)v14 == 0xFF )
    {
      v14 = *((char **)v12 + 1);
      v16 = *((gameswf::Self **)v12 + 3);
    }
    else
    {
      v14 = (char *)(char)(uintptr_t)v14;
      v16 = (gameswf::Self *)(v12 + 1);
    }
    gameswf::Strcpy_s(v16, v14, v15);
    if ( (uint8_t *)(v37 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( v33 == -1 )
      {
        v21 = v36;
        v22 = (int)(uintptr_t)(v35 - 1);
      }
      else
      {
        v21 = (gameswf::Self *)v34;
        v22 = v33 - 1;
      }
      v17 = 5381;
      if ( v22 > 0 )
      {
        v30 = v12;
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
        v12 = v30;
        v17 = v17 << 9 >> 9;
      }
      v37 = v17 & 0x7FFFFF | v37 & 0xFF800000;
    }
    else
    {
      v17 = (int)(v37 << 9) >> 9;
    }
    v18 = *((uint32_t *)v12 + 4) & 0xFF800000;
    v12[20] = 0;
    v19 = v17 & 0x7FFFFF | v18;
    v12[21] = 0;
    *((uint32_t *)v12 + 4) = v19;
    v12[18] = BYTE2(v19) & 0x7F;
    v12[19] = HIBYTE(v19) | 1;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v12 + 20), (const gameswf::ASValue::Self *)v38);
  }
  *((uint32_t *)self + 49) = v32;
  result = gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v38);
  if ( v33 == -1 && (v37 & 0x1000000) != 0 )
    return gameswf::free_internal(v36);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEnvironment::find_local  (binary VA: 0x1091e20)
// Original: gameswf::ASEnvironment::find_local
// ----------------------------------------------------------------------------
int gameswf::ASEnvironment::find_local(gameswf::ASEnvironment::Self *self, const gameswf::String::Self *a2, bool a3)
{
  int v3;
  int v4;
  const gameswf::String::Self *v5;
  char v6;
  int v7;
  const char *s2;
  const char *s1;
  int v11;
  const char *v12;
  const char *v13;
  int v14;
  char v15;

  v3 = *((uint32_t *)self + 49) - 1;
  if ( v3 >= 0 )
  {
    v4 = 32 * v3;
    v14 = *((uint32_t *)self + 48);
    if ( !a3 )
    {
      while ( 1 )
      {
        v5 = (const gameswf::String::Self *)(v14 + v4);
        v6 = *(uint8_t *)(v14 + v4);
        v7 = v6 - 1;
        if ( v6 == -1 )
          v7 = *((uint32_t *)v5 + 1) - 1;
        if ( v7 == 0 )
          break;
        if ( v5 != a2 )
        {
          v12 = (char *)a2 + 1;
          if ( *(uint8_t *)a2 == 0xFF )
            v12 = *((const char **)a2 + 3);
          v13 = v6 == -1 ? *((const char **)v5 + 3) : (char *)v5 + 1;
          if ( strcmp(v13, v12) != 0 )
          {
            --v3;
            v4 -= 32;
            if ( v3 != -1 )
              continue;
          }
        }
        return v3;
      }
      return -1;
    }
    while ( 1 )
    {
      v11 = v14 + v4;
      v15 = *(uint8_t *)(v14 + v4);
      if ( (const gameswf::String::Self *)(v14 + v4) == a2 )
        return v3;
      s2 = (char *)a2 + 1;
      if ( *(uint8_t *)a2 == 0xFF )
      {
        s2 = *((const char **)a2 + 3);
        s1 = (const char *)(v11 + 1);
        if ( v15 != -1 )
          goto LABEL_9;
      }
      else
      {
        s1 = (const char *)(v11 + 1);
        if ( v15 != -1 )
          goto LABEL_9;
      }
      s1 = *(const char **)(v11 + 12);
LABEL_9:
      if ( strcmp(s1, s2) != 0 )
      {
        --v3;
        v4 -= 32;
        if ( v3 != -1 )
          continue;
      }
      return v3;
    }
  }
  return -1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEnvironment::declareLocal  (binary VA: 0x1091f50)
// Original: gameswf::ASEnvironment::declareLocal
// ----------------------------------------------------------------------------
int gameswf::ASEnvironment::declareLocal(gameswf::ASEnvironment::Self *self, const gameswf::String::Self *a2)
{
  int result;
  uint8_t v3[24];

  result = gameswf::ASEnvironment::find_local(self, a2, false);
  if ( result < 0 )
  {
    v3[0] = 0;
    v3[1] = 0;
    gameswf::ASEnvironment::addLocal(self, a2, (const gameswf::ASValue::Self *)v3);
    return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEnvironment::setLocal  (binary VA: 0x1091fd0)
// Original: gameswf::ASEnvironment::setLocal
// ----------------------------------------------------------------------------
int gameswf::ASEnvironment::setLocal(gameswf::ASEnvironment::Self *self, const gameswf::String::Self *a2, const gameswf::ASValue::Self *a3)
{
  int local;

  local = gameswf::ASEnvironment::find_local(self, a2, false);
  if ( local < 0 )
    return gameswf::ASEnvironment::addLocal(self, a2, a3);
  else
    return (int)(uintptr_t)(gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(*((uint32_t *)self + 48) + 32 * local + 20), a3));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEnvironment::setVariableRaw  (binary VA: 0x1092060)
// Original: gameswf::ASEnvironment::setVariableRaw
// ----------------------------------------------------------------------------
int gameswf::ASEnvironment::setVariableRaw(gameswf::ASEnvironment::Self *a1, gameswf::String::Self *a2, gameswf::ASValue::Self *a3, uint32_t *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int local;
  int v11;
  int StandardMemberID;
  uint8_t v13[40];

  v4 = a4[1] - 1;
  if ( v4 < 0 )
  {
LABEL_11:
    local = gameswf::ASEnvironment::find_local(a1, a2, true);
    if ( local >= 0 )
    {
      return (int)(uintptr_t)(gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(*((uint32_t *)a1 + 48) + 32 * local + 20), a3));
    }
    else
    {
      v11 = *((uint32_t *)a1 + 44);
      if ( v11 != 0 )
      {
        StandardMemberID = gameswf::getStandardMemberID(a2);
        if ( StandardMemberID == -1 )
          return G4_VCALL<int>(v11, 48, a2, a3);
        result = G4_VCALL<int>(v11, 32, StandardMemberID, a3);
        if ( (uint8_t)result == 0 )
          return G4_VCALL<int>(v11, 48, a2, a3);
      }
      else
      {
        return gameswf::ASEnvironment::addLocal(a1, a2, a3);
      }
    }
  }
  else
  {
    v5 = 8 * v4;
    while ( 1 )
    {
      v6 = *(uint32_t *)(*a4 + v5);
      v13[0] = 0;
      v13[1] = 0;
      if ( v6 != 0 )
      {
        v7 = gameswf::getStandardMemberID(a2);
        if ( v7 != -1 && G4_VCALL<uint8_t>(v6, 36, v7, v13) != 0 )
          break;
        if ( G4_VCALL<uint8_t>(v6, 44, a2, v13) != 0 )
          break;
      }
      --v4;
      v5 -= 8;
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v13);
      if ( v4 == -1 )
        goto LABEL_11;
    }
    v8 = gameswf::getStandardMemberID(a2);
    if ( v8 == -1
      || G4_VCALL<uint8_t>(v6, 32, v8, a3) == 0 )
    {
      G4_VCALL<void>(v6, 48, a2, a3);
      return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v13);
    }
    else
    {
      return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v13);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEnvironment::getVariableRaw  (binary VA: 0x1092250)
// Original: gameswf::ASEnvironment::getVariableRaw
// ----------------------------------------------------------------------------
gameswf::ASValue::Self * gameswf::ASEnvironment::getVariableRaw(gameswf::ASValue::Self *a1, gameswf::ASEnvironment::Self *a2, gameswf::String::Self *a3, uint32_t *a4, int *a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int local;
  int v11;
  int v12;
  int StandardMemberID;
  int v14;
  gameswf::Player::Self *v15;
  gameswf::ASObject::Self *v16;
  gameswf::Player::Self *v17;
  gameswf::ASObject::Self *Stage;
  gameswf::Player::Self *v19;
  gameswf::ASObject::Self *Global;
  gameswf::ASObject::Self *target;
  gameswf::Player::Self *v22;
  gameswf::Root::Self *Root;
  gameswf::ASObject::Self *RootMovie;
  typedef int _g4_t_v25;
  typedef uint8_t _g4_t_v26[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v25)) > _g4_s0 ? (12u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v26)) > _g4_s1 ? (16u + sizeof(_g4_t_v26)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);

  v26[0] = 0;
  v26[1] = 0;
  v5 = a4[1] - 1;
  v25 = v5;
  if ( v5 < 0 )
  {
LABEL_12:
    local = gameswf::ASEnvironment::find_local(a2, a3, true);
    if ( local >= 0 )
    {
      v11 = *((uint32_t *)a2 + 48) + 32 * local;
      *(uint8_t *)a1 = 0;
      *((uint8_t *)a1 + 1) = 0;
      gameswf::ASValue::opAssign(a1, (const gameswf::ASValue::Self *)(v11 + 20));
      goto LABEL_9;
    }
    v12 = *((uint32_t *)a2 + 44);
    if ( v12 == 0
      || ((StandardMemberID = gameswf::getStandardMemberID(a3)) == -1
       || G4_VCALL<uint8_t>(v12, 36, StandardMemberID, v26) == 0)
      && G4_VCALL<uint8_t>(v12, 44, a3, v26) == 0 )
    {
      v14 = gameswf::getStandardMemberID(a3) - 34;
      switch ( v14 )
      {
        case 0:
          target = (gameswf::ASObject::Self *)gameswf::ASEnvironment::get_target(a2);
          gameswf::ASValue::setObject((gameswf::ASValue::Self *)v26, target);
          break;
        case 1:
        case 4:
          v22 = *((gameswf::Player::Self **)a2 + 53);
          if ( v22 != nullptr && *(uint8_t *)(*((uint32_t *)a2 + 52) + 2) == 0 )
          {
            sub_7E5ED0((gameswf::Self **)a2 + 52, nullptr);
            v22 = nullptr;
            *((uint32_t *)a2 + 53) = 0;
          }
          Root = (gameswf::Root::Self *)gameswf::Player::getRoot(v22);
          RootMovie = (gameswf::ASObject::Self *)gameswf::Root::getRootMovie(Root);
          gameswf::ASValue::setObject((gameswf::ASValue::Self *)v26, RootMovie);
          break;
        case 5:
          v19 = *((gameswf::Player::Self **)a2 + 53);
          if ( v19 != nullptr && *(uint8_t *)(*((uint32_t *)a2 + 52) + 2) == 0 )
          {
            sub_7E5ED0((gameswf::Self **)a2 + 52, nullptr);
            v19 = nullptr;
            *((uint32_t *)a2 + 53) = 0;
          }
          Global = (gameswf::ASObject::Self *)gameswf::Player::getGlobal(v19);
          gameswf::ASValue::setObject((gameswf::ASValue::Self *)v26, Global);
          break;
        case 6:
          v17 = *((gameswf::Player::Self **)a2 + 53);
          if ( v17 != nullptr && *(uint8_t *)(*((uint32_t *)a2 + 52) + 2) == 0 )
          {
            sub_7E5ED0((gameswf::Self **)a2 + 52, nullptr);
            v17 = nullptr;
            *((uint32_t *)a2 + 53) = 0;
          }
          Stage = (gameswf::ASObject::Self *)gameswf::Player::getStage(v17);
          gameswf::ASValue::setObject((gameswf::ASValue::Self *)v26, Stage);
          break;
        default:
          v15 = *((gameswf::Player::Self **)a2 + 53);
          if ( v15 != nullptr && *(uint8_t *)(*((uint32_t *)a2 + 52) + 2) == 0 )
          {
            sub_7E5ED0((gameswf::Self **)a2 + 52, nullptr);
            *((uint32_t *)a2 + 53) = 0;
            v15 = nullptr;
          }
          v16 = (gameswf::ASObject::Self *)gameswf::Player::getGlobal(v15);
          gameswf::ASObject::getMember(v16, a3, (gameswf::ASValue::Self *)v26);
          break;
      }
    }
  }
  else
  {
    v6 = 8 * v5;
    while ( 1 )
    {
      v7 = *(uint32_t *)(*a4 + v6);
      if ( v7 != 0 )
      {
        v8 = gameswf::getStandardMemberID(a3);
        if ( v8 != -1 && G4_VCALL<uint8_t>(v7, 36, v8, v26) != 0 )
          break;
        if ( G4_VCALL<uint8_t>(v7, 44, a3, v26) != 0 )
          break;
      }
      --v25;
      v6 -= 8;
      if ( v25 == -1 )
        goto LABEL_12;
    }
    if ( a5 != nullptr )
      *a5 = v25;
  }
  *(uint8_t *)a1 = 0;
  *((uint8_t *)a1 + 1) = 0;
  gameswf::ASValue::opAssign(a1, (const gameswf::ASValue::Self *)v26);
LABEL_9:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v26);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEnvironment::parsePath  (binary VA: 0x10925b0)
// Original: gameswf::ASEnvironment::parsePath
// ----------------------------------------------------------------------------
int gameswf::ASEnvironment::parsePath(gameswf::Self **self, gameswf::Self **a2, gameswf::Self **a3)
{
  gameswf::ASEnvironment::Self *v3;
  const gameswf::String::Self *v4;
  const char *s;
  char *v6;
  char v7;
  size_t v8;
  char *v9;
  gameswf::Self *v10;
  char *v11;
  int v12;
  gameswf::Self *v13;
  char *v14;
  gameswf::Self *v15;
  int v16;
  char *v17;
  int result;
  const char *v19;
  size_t v20;
  char *v21;
  gameswf::Self *v22;
  int v23;
  gameswf::Self *v24;
  char *v25;
  gameswf::Self *v26;
  char *v27;
  int v28;
  int v29;
  int v30;
  char *v31;
  int v32;
  int v33;
  int v34;
  char v35;
  gameswf::Self *v36;
  char *v37;
  int v38;
  gameswf::ASEnvironment::Self *v39;
  const gameswf::String::Self *v40;

  v3 = (gameswf::ASEnvironment::Self *)self;
  v4 = (const gameswf::String::Self *)a2;
  s = (char *)self + 1;
  if ( *(uint8_t *)self == 0xFF )
    s = (const char *)*(self + 3);
  v35 = *(uint8_t *)self;
  v6 = (char *)(strrchr(s, 58));
  v37 = v6;
  v7 = v35;
  if ( v6 != nullptr )
  {
    if ( v6 != (char *)-1 )
    {
      v36 = (gameswf::Self *)(v6 + 1);
      v8 = strlen(v6 + 1);
      gameswf::String::resize((gameswf::String::Self *)a3, v8);
      LOBYTE(v9) = *(uint8_t *)a3;
      if ( *(uint8_t *)a3 == 0xFF )
      {
        v9 = (char *)a3[1];
        v10 = a3[3];
      }
      else
      {
        v9 = (char *)(char)(uintptr_t)(v9);
        v10 = (gameswf::Self *)((char *)a3 + 1);
      }
      gameswf::Strcpy_s(v10, v9, v36);
      a3[4] = (gameswf::Self *)((unsigned int)(uintptr_t)(a3[4]) | 0x7FFFFF);
      v7 = *(uint8_t *)self;
    }
    v11 = (char *)self + 1;
    if ( v7 == -1 )
      v11 = (char *)*(self + 3);
    if ( v37 > v11 + 1 )
      v37 -= *(v37 - 1) == 47;
    if ( self == a2 )
      goto LABEL_21;
    if ( v7 == -1 )
      v12 = (int)(uintptr_t)(*(self + 1)) - 1;
    else
      v12 = v7 - 1;
    gameswf::String::resize((gameswf::String::Self *)a2, v12);
    v13 = (gameswf::Self *)((char *)self + 1);
    if ( *(uint8_t *)self == 0xFF )
    {
      LOBYTE(v14) = *(uint8_t *)a2;
      v13 = *(self + 3);
      if ( *(uint8_t *)a2 != 0xFF )
        goto LABEL_17;
    }
    else
    {
      LOBYTE(v14) = *(uint8_t *)a2;
      if ( *(uint8_t *)a2 != 0xFF )
      {
LABEL_17:
        v14 = (char *)(char)(uintptr_t)(v14);
        v15 = (gameswf::Self *)((char *)a2 + 1);
        goto LABEL_18;
      }
    }
    v14 = (char *)a2[1];
    v15 = a2[3];
LABEL_18:
    gameswf::Strcpy_s(v15, v14, v13);
    v38 = (int)(uintptr_t)(*(self + 4));
    if ( (uint8_t *)(v38 & 0x7FFFFF) != ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      v16 = v38 << 9 >> 9;
LABEL_20:
      *((uint32_t *)v4 + 4) = v16 & 0x7FFFFF | *((uint32_t *)v4 + 4) & 0xFF800000;
      v7 = *(uint8_t *)v3;
LABEL_21:
      if ( v7 == -1 )
        v17 = *((char **)v3 + 3);
      else
        v17 = (char *)v3 + 1;
      gameswf::String::resize(v4, v37 - v17);
      return 1;
    }
    if ( *(uint8_t *)self == 0xFF )
    {
      v27 = (char *)*(self + 3);
      v28 = (int)(uintptr_t)(*(self + 1)) - 1;
    }
    else
    {
      v27 = (char *)self + 1;
      v28 = *(char *)self - 1;
    }
    v16 = 5381;
    if ( v28 > 0 )
    {
      v39 = (gameswf::ASEnvironment::Self *)self;
      v40 = (const gameswf::String::Self *)a2;
      do
      {
        --v28;
        v29 = 33 * v16;
        v30 = (uint8_t)v27[v28] + 32;
        if ( (uint8_t)(v27[v28] - 65) > 0x19u )
          v30 = (uint8_t)v27[v28];
        v16 = v29 ^ v30;
      }
      while ( v28 != 0 );
LABEL_49:
      v3 = v39;
      v4 = v40;
      v16 = v16 << 9 >> 9;
      goto LABEL_50;
    }
    goto LABEL_50;
  }
  v19 = (char *)self + 1;
  if ( v35 == -1 )
    v19 = (const char *)*(self + 3);
  v37 = (char *)(strrchr(v19, 46));
  result = 0;
  v7 = v35;
  if ( v37 != nullptr )
  {
    if ( v37 != (char *)-1 )
    {
      v20 = strlen(v37 + 1);
      gameswf::String::resize((gameswf::String::Self *)a3, v20);
      LOBYTE(v21) = *(uint8_t *)a3;
      if ( *(uint8_t *)a3 == 0xFF )
      {
        v21 = (char *)a3[1];
        v22 = a3[3];
      }
      else
      {
        v21 = (char *)(char)(uintptr_t)(v21);
        v22 = (gameswf::Self *)((char *)a3 + 1);
      }
      gameswf::Strcpy_s(v22, v21, (gameswf::Self *)(v37 + 1));
      a3[4] = (gameswf::Self *)((unsigned int)(uintptr_t)(a3[4]) | 0x7FFFFF);
      v7 = *(uint8_t *)self;
    }
    if ( self == a2 )
      goto LABEL_21;
    if ( v7 == -1 )
      v23 = (int)(uintptr_t)(*(self + 1)) - 1;
    else
      v23 = v7 - 1;
    gameswf::String::resize((gameswf::String::Self *)a2, v23);
    v24 = (gameswf::Self *)((char *)self + 1);
    if ( *(uint8_t *)self == 0xFF )
      v24 = *(self + 3);
    LOBYTE(v25) = *(uint8_t *)a2;
    if ( *(uint8_t *)a2 == 0xFF )
    {
      v25 = (char *)a2[1];
      v26 = a2[3];
    }
    else
    {
      v25 = (char *)(char)(uintptr_t)(v25);
      v26 = (gameswf::Self *)((char *)a2 + 1);
    }
    gameswf::Strcpy_s(v26, v25, v24);
    v38 = (int)(uintptr_t)(*(self + 4));
    if ( (uint8_t *)(v38 & 0x7FFFFF) != ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      v16 = v38 << 9 >> 9;
      goto LABEL_20;
    }
    if ( *(uint8_t *)self == 0xFF )
    {
      v31 = (char *)*(self + 3);
      v32 = (int)(uintptr_t)(*(self + 1)) - 1;
    }
    else
    {
      v31 = (char *)self + 1;
      v32 = *(char *)self - 1;
    }
    v16 = 5381;
    if ( v32 > 0 )
    {
      v39 = (gameswf::ASEnvironment::Self *)self;
      v40 = (const gameswf::String::Self *)a2;
      do
      {
        --v32;
        v33 = 33 * v16;
        v34 = (uint8_t)v31[v32] + 32;
        if ( (uint8_t)(v31[v32] - 65) > 0x19u )
          v34 = (uint8_t)v31[v32];
        v16 = v33 ^ v34;
      }
      while ( v32 != 0 );
      goto LABEL_49;
    }
LABEL_50:
    *((uint32_t *)v3 + 4) = v16 & 0x7FFFFF | v38 & 0xFF800000;
    goto LABEL_20;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEnvironment::findTarget  (binary VA: 0x10929d0)
// Original: gameswf::ASEnvironment::findTarget
// ----------------------------------------------------------------------------
int gameswf::ASEnvironment::findTarget(gameswf::ASObject::Self **self, const gameswf::ASValue::Self *a2)
{
  int result;

  result = 0;
  if ( *(self + 44) != nullptr )
    return (int)(uintptr_t)(gameswf::ASObject::findTarget(*(self + 44), a2));
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEnvironment::findTarget  (binary VA: 0x1092a10)
// Original: gameswf::ASEnvironment::findTarget
// ----------------------------------------------------------------------------
int gameswf::ASEnvironment::findTarget(gameswf::ASObject::Self **self, char *s)
{
  int result;

  result = 0;
  if ( *(self + 44) != nullptr )
    return (int)(uintptr_t)(gameswf::ASObject::findTarget(*(self + 44), s));
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEnvironment::setVariable  (binary VA: 0x1092a50)
// Original: gameswf::ASEnvironment::setVariable
// ----------------------------------------------------------------------------
int gameswf::ASEnvironment::setVariable(gameswf::ASEnvironment::Self *a1, gameswf::ASEnvironment::Self *a2, gameswf::ASValue::Self *a3, uint32_t *a4)
{
  char *v4;
  int result;
  int v6;
  int v7;
  gameswf::Self *v8;
  char *v9;
  gameswf::Self *v10;
  int v11;
  unsigned int v12;
  int StandardMemberID;
  gameswf::Self *v14;
  int v15;
  int v16;
  int v17;
  typedef int _g4_t_v18;
  typedef gameswf::Self *_g4_t_v19[3];
  typedef gameswf::Self *_g4_t_v20;
  typedef int16_t _g4_t_v21;
  typedef int16_t _g4_t_v22;
  typedef gameswf::Self *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef gameswf::Self *_g4_t_v25;
  typedef unsigned int _g4_t_v26;
  typedef char _g4_t_v27;
  typedef char _g4_t_v28;
  typedef char *_g4_t_v29;
  typedef gameswf::Self *_g4_t_v30;
  typedef int _g4_t_v31;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v20)) > _g4_s2 ? (28u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v21)) > _g4_s3 ? (32u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (34u + sizeof(_g4_t_v22)) > _g4_s4 ? (34u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v23)) > _g4_s5 ? (48u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v24)) > _g4_s6 ? (52u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v25)) > _g4_s7 ? (60u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v26)) > _g4_s8 ? (64u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v27)) > _g4_s9 ? (80u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (81u + sizeof(_g4_t_v28)) > _g4_s10 ? (81u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v29)) > _g4_s11 ? (84u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v30)) > _g4_s12 ? (92u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v31)) > _g4_s13 ? (96u + sizeof(_g4_t_v31)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 34u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 80u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 81u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 84u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);

  gameswf::ASEnvironment::get_target(a1);
  LOWORD(v19[0]) = 1;
  v21 = -1;
  LOWORD(v23) = 1;
  HIBYTE(v22) = ((uint16_t)(v22 | 0x7F) >> 8) | 1;
  LOBYTE(v22) = 127;
  LOWORD(v26) = -1;
  BYTE2(v26) = 127;
  HIBYTE(v26) |= 1u;
  if ( (uint8_t)gameswf::ASEnvironment::parsePath((gameswf::Self **)a2, v19, &v23) == 0 )
  {
    result = gameswf::ASEnvironment::setVariableRaw(a1, a2, a3, a4);
    if ( (uint8_t)(uintptr_t)(v23) != 0xFF )
      goto LABEL_18;
    goto LABEL_23;
  }
  v4 = (char *)v19 + 1;
  if ( LOBYTE(v19[0]) == 0xFF )
    v4 = (char *)v20;
  result = gameswf::ASEnvironment::findTarget((gameswf::ASObject::Self **)a1, v4);
  v6 = result;
  if ( result != 0 )
  {
    result = G4_VCALL<int>(result, 8, 1);
    if ( (uint8_t)result != 0 )
    {
      v27 = 1;
      v28 = 0;
      v7 = (char)(uintptr_t)(v23) - 1;
      if ( (uint8_t)(uintptr_t)(v23) == 0xFF )
        v7 = v24 - 1;
      gameswf::String::resize((gameswf::String::Self *)&v27, v7);
      v8 = (gameswf::Self *)((char *)&v23 + 1);
      if ( (uint8_t)(uintptr_t)(v23) == 0xFF )
        v8 = v25;
      if ( v27 == -1 )
      {
        v9 = v29;
        v10 = v30;
      }
      else
      {
        v9 = (char *)v27;
        v10 = (gameswf::Self *)&v28;
      }
      gameswf::Strcpy_s(v10, v9, v8);
      if ( (uint8_t *)(v26 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( (uint8_t)(uintptr_t)(v23) == 0xFF )
        {
          v14 = v25;
          v15 = v24 - 1;
        }
        else
        {
          v14 = (gameswf::Self *)((char *)&v23 + 1);
          v15 = (char)(uintptr_t)(v23) - 1;
        }
        v11 = 5381;
        if ( v15 > 0 )
        {
          v18 = v6;
          do
          {
            --v15;
            v16 = 33 * v11;
            v17 = *((uint8_t *)v14 + v15) + 32;
            if ( (uint8_t)(*((uint8_t *)v14 + v15) - 65) > 0x19u )
              v17 = *((uint8_t *)v14 + v15);
            v11 = v16 ^ v17;
          }
          while ( v15 != 0 );
          v6 = v18;
          v11 = v11 << 9 >> 9;
        }
        v26 = v11 & 0x7FFFFF | v26 & 0xFF800000;
      }
      else
      {
        v11 = (int)(v26 << 9) >> 9;
      }
      v12 = v11 & 0x7FFFFF | v31 & 0xFF800000;
      LOWORD(v31) = v11;
      BYTE2(v31) = BYTE2(v12) & 0x7F;
      HIBYTE(v31) = HIBYTE(v12) | 1;
      StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v27);
      if ( StandardMemberID == -1
        || (uint8_t)(result = G4_VCALL<int>(v6, 32, StandardMemberID, a3)) == 0 )
      {
        result = G4_VCALL<int>(v6, 48, &v27, a3);
        if ( v27 != -1 )
          goto LABEL_17;
      }
      else if ( v27 != -1 )
      {
        goto LABEL_17;
      }
      if ( (v31 & 0x1000000) != 0 )
        result = gameswf::free_internal(v30);
    }
  }
LABEL_17:
  if ( (uint8_t)(uintptr_t)(v23) == 0xFF )
  {
LABEL_23:
    if ( (v26 & 0x1000000) != 0 )
    {
      result = gameswf::free_internal(v25);
      if ( LOBYTE(v19[0]) != 0xFF )
        return result;
      goto LABEL_25;
    }
  }
LABEL_18:
  if ( LOBYTE(v19[0]) != 0xFF )
    return result;
LABEL_25:
  if ( (v22 & 0x100) != 0 )
    return gameswf::free_internal(v20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEnvironment::getVariable  (binary VA: 0x1092d90)
// Original: gameswf::ASEnvironment::getVariable
// ----------------------------------------------------------------------------
gameswf::ASValue::Self * gameswf::ASEnvironment::getVariable(gameswf::ASValue::Self *a1, gameswf::ASEnvironment::Self *a2, gameswf::String::Self *a3, uint32_t *a4, int *a5)
{
  gameswf::ASValue::Self *v5;
  gameswf::ASEnvironment::Self *v6;
  char *v7;
  gameswf::Self *v8;
  int v9;
  gameswf::Self *v10;
  char *v11;
  gameswf::Self *v12;
  int v13;
  unsigned int v14;
  int StandardMemberID;
  gameswf::Player::Self *v17;
  gameswf::Self *v18;
  gameswf::ASObject::Self *Global;
  int v21;
  int v22;
  int v23;
  char v24;
  gameswf::Self *v25;
  int v26;
  int v27;
  int v28;
  typedef int _g4_t_v29;
  typedef gameswf::ASValue::Self *_g4_t_v30;
  typedef int *_g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef int _g4_t_Target;
  typedef gameswf::String::Self *_g4_t_v34;
  typedef gameswf::ASEnvironment::Self *_g4_t_v35;
  typedef unsigned int _g4_t_v36[4];
  typedef gameswf::Self *_g4_t_v37[2];
  typedef gameswf::Self *_g4_t_v38;
  typedef int16_t _g4_t_v39;
  typedef int16_t _g4_t_v40;
  typedef unsigned int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef gameswf::Self *_g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef char _g4_t_v45;
  typedef char _g4_t_v46;
  typedef char *_g4_t_v47;
  typedef gameswf::Self *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef uint8_t _g4_t_v50[8];
  typedef gameswf::Self *_g4_t_v51;
  typedef char _g4_t_v52;
  typedef gameswf::ASValue::Self **_g4_t_v53;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v29)) > _g4_s0 ? (4u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v30)) > _g4_s1 ? (8u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v31)) > _g4_s2 ? (12u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v32)) > _g4_s3 ? (16u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_Target)) > _g4_s4 ? (16u + sizeof(_g4_t_Target)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v34)) > _g4_s5 ? (20u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v35)) > _g4_s6 ? (20u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v36)) > _g4_s7 ? (24u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v37)) > _g4_s8 ? (40u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v38)) > _g4_s9 ? (52u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v39)) > _g4_s10 ? (56u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (58u + sizeof(_g4_t_v40)) > _g4_s11 ? (58u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v41)) > _g4_s12 ? (72u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v42)) > _g4_s13 ? (76u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v43)) > _g4_s14 ? (84u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v44)) > _g4_s15 ? (88u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v45)) > _g4_s16 ? (104u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (105u + sizeof(_g4_t_v46)) > _g4_s17 ? (105u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v47)) > _g4_s18 ? (108u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v48)) > _g4_s19 ? (116u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v49)) > _g4_s20 ? (120u + sizeof(_g4_t_v49)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v50)) > _g4_s21 ? (136u + sizeof(_g4_t_v50)) : _g4_s21,
    _g4_s23 = (148u + sizeof(_g4_t_v51)) > _g4_s22 ? (148u + sizeof(_g4_t_v51)) : _g4_s22,
    _g4_s24 = (155u + sizeof(_g4_t_v52)) > _g4_s23 ? (155u + sizeof(_g4_t_v52)) : _g4_s23,
    _g4_s25 = (176u + sizeof(_g4_t_v53)) > _g4_s24 ? (176u + sizeof(_g4_t_v53)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_Target &Target = *reinterpret_cast<_g4_t_Target *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 58u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 72u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 76u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 84u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 88u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 104u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 105u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 108u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 116u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 120u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 136u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 148u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 155u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 176u);

  v53 = &a1;
  v5 = a1;
  v6 = a2;
  v34 = a3;
  v32 = a4;
  v31 = a5;
  gameswf::ASEnvironment::get_target(a2);
  LOWORD(v37[0]) = 1;
  v39 = -1;
  LOWORD(v41) = 1;
  HIBYTE(v40) = ((uint16_t)(v40 | 0x7F) >> 8) | 1;
  LOBYTE(v40) = 127;
  LOWORD(v44) = -1;
  BYTE2(v44) = 127;
  HIBYTE(v44) |= 1u;
  if ( (uint8_t)gameswf::ASEnvironment::parsePath((gameswf::Self **)v34, v37, (gameswf::Self **)&v41) == 0 )
  {
    gameswf::ASEnvironment::getVariableRaw(v5, v6, v34, v32, v31);
    if ( (uint8_t)v41 != 0xFF )
      goto LABEL_18;
    goto LABEL_37;
  }
  v7 = (char *)v37 + 1;
  if ( LOBYTE(v37[0]) == 0xFF )
    v7 = (char *)v38;
  Target = gameswf::ASEnvironment::findTarget((gameswf::ASObject::Self **)v6, v7);
  v8 = (gameswf::Self *)((char *)v37 + 1);
  if ( Target != 0 )
  {
    LOWORD(v36[0]) = 0;
    v45 = 1;
    v46 = 0;
    if ( (uint8_t)v41 == 0xFF )
      v9 = v42 - 1;
    else
      v9 = (char)v41 - 1;
    gameswf::String::resize((gameswf::String::Self *)&v45, v9);
    v10 = (gameswf::Self *)((char *)&v41 + 1);
    if ( (uint8_t)v41 == 0xFF )
      v10 = v43;
    if ( v45 == -1 )
    {
      v11 = v47;
      v12 = v48;
    }
    else
    {
      v11 = (char *)v45;
      v12 = (gameswf::Self *)&v46;
    }
    gameswf::Strcpy_s(v12, v11, v10);
    if ( (uint8_t *)(v44 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( (uint8_t)v41 == 0xFF )
      {
        v25 = v43;
        v26 = v42 - 1;
      }
      else
      {
        v25 = (gameswf::Self *)((char *)&v41 + 1);
        v26 = (char)v41 - 1;
      }
      v13 = 5381;
      if ( v26 > 0 )
      {
        v30 = v5;
        do
        {
          --v26;
          v27 = 33 * v13;
          v28 = *((uint8_t *)v25 + v26) + 32;
          if ( (uint8_t)(*((uint8_t *)v25 + v26) - 65) > 0x19u )
            v28 = *((uint8_t *)v25 + v26);
          v13 = v27 ^ v28;
        }
        while ( v26 != 0 );
        v5 = v30;
        v13 = v13 << 9 >> 9;
      }
      v44 = v13 & 0x7FFFFF | v44 & 0xFF800000;
    }
    else
    {
      v13 = (int)(v44 << 9) >> 9;
    }
    v14 = v13 & 0x7FFFFF | v49 & 0xFF800000;
    LOWORD(v49) = v13;
    BYTE2(v49) = BYTE2(v14) & 0x7F;
    HIBYTE(v49) = HIBYTE(v14) | 1;
    StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v45);
    if ( StandardMemberID == -1
      || G4_VCALL<uint8_t>(Target, 36, StandardMemberID, v36) == 0 )
    {
      G4_VCALL<void>(Target, 44, &v45, v36);
      if ( v45 != -1 )
        goto LABEL_16;
    }
    else if ( v45 != -1 )
    {
LABEL_16:
      *(uint8_t *)v5 = 0;
      *((uint8_t *)v5 + 1) = 0;
      gameswf::ASValue::opAssign(v5, (const gameswf::ASValue::Self *)v36);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v36);
      goto LABEL_17;
    }
    if ( (v49 & 0x1000000) != 0 )
      gameswf::free_internal(v48);
    goto LABEL_16;
  }
  v17 = *((gameswf::Player::Self **)v6 + 53);
  if ( LOBYTE(v37[0]) == 0xFF )
    v8 = v38;
  v35 = (gameswf::ASEnvironment::Self *)(v8);
  if ( v17 != nullptr )
  {
    v18 = *((gameswf::Self **)v6 + 52);
    if ( *((uint8_t *)v18 + 2) == 0 )
    {
      if ( (*(uint16_t *)v18)-- == 1 )
        gameswf::free_internal(v18);
      *((uint32_t *)v6 + 52) = 0;
      *((uint32_t *)v6 + 53) = 0;
      v17 = nullptr;
    }
  }
  Global = (gameswf::ASObject::Self *)gameswf::Player::getGlobal(v17);
  v21 = (int)(uintptr_t)(gameswf::ASObject::findTarget(Global, (const char *)v35));
  if ( v21 != 0 )
  {
    v29 = v21;
    LOWORD(v36[0]) = 0;
    sub_7763C0((gameswf::String::Self *)v50, (char *)&v41);
    v22 = gameswf::getStandardMemberID((gameswf::Self *)v50);
    v23 = v29;
    if ( v22 == -1
      || (v24 = G4_VCALL<int>(v29, 36, v22, v36), v23 = v29, v24 == 0) )
    {
      G4_VCALL<void>(v23, 44, v50, v36);
    }
    if ( v50[0] == 0xFF && (v52 & 1) != 0 )
      gameswf::free_internal(v51);
    goto LABEL_16;
  }
  *(uint8_t *)v5 = 0;
  *((uint8_t *)v5 + 1) = 0;
LABEL_17:
  if ( (uint8_t)v41 == 0xFF )
  {
LABEL_37:
    if ( (v44 & 0x1000000) != 0 )
    {
      gameswf::free_internal(v43);
      if ( LOBYTE(v37[0]) != 0xFF )
        return v5;
      goto LABEL_39;
    }
  }
LABEL_18:
  if ( LOBYTE(v37[0]) != 0xFF )
    return v5;
LABEL_39:
  if ( (v40 & 0x100) == 0 )
    return v5;
  gameswf::free_internal(v38);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEnvironment::setTarget  (binary VA: 0x10932c0)
// Original: gameswf::ASEnvironment::setTarget
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASEnvironment::setTarget(gameswf::ASEnvironment::Self *self, gameswf::ASValue::Self *a2, gameswf::Character::Self *a3)
{
  gameswf::RefCounted::Self *result;
  char *v4;
  int v5;
  gameswf::Self *v6;
  char *v7;
  gameswf::Self *v8;
  unsigned int v9;
  int v10;
  char *v11;
  gameswf::Character::Self *v12;
  gameswf::Character::Self *v13;
  char *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  typedef char *_g4_t_v19;
  typedef unsigned int _g4_t_v20;
  typedef char _g4_t_v21;
  typedef uint8_t _g4_t_v22[3];
  typedef char *_g4_t_v23;
  typedef gameswf::Self *_g4_t_v24;
  typedef int _g4_t_v25;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v19)) > _g4_s0 ? (4u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v20)) > _g4_s1 ? (8u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v21)) > _g4_s2 ? (16u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (17u + sizeof(_g4_t_v22)) > _g4_s3 ? (17u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v23)) > _g4_s4 ? (20u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v24)) > _g4_s5 ? (28u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v25)) > _g4_s6 ? (32u + sizeof(_g4_t_v25)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 17u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);

  result = (gameswf::RefCounted::Self *)*(uint8_t *)a2;
  if ( (uint8_t)((uint8_t)(uintptr_t)(result) - 3) <= 1u )
  {
    v4 = *((char **)a2 + 1);
    v21 = 1;
    v22[0] = 0;
    if ( *v4 == -1 )
      v5 = *((uint32_t *)v4 + 1) - 1;
    else
      v5 = *v4 - 1;
    gameswf::String::resize((gameswf::String::Self *)&v21, v5);
    v6 = (gameswf::Self *)(v4 + 1);
    if ( *v4 == -1 )
      v6 = *((gameswf::Self **)v4 + 3);
    if ( v21 == -1 )
    {
      v7 = v23;
      v8 = v24;
    }
    else
    {
      v7 = (char *)v21;
      v8 = (gameswf::Self *)v22;
    }
    gameswf::Strcpy_s(v8, v7, v6);
    v20 = *((uint32_t *)v4 + 4);
    if ( (uint8_t *)(v20 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( *v4 == -1 )
      {
        v14 = *((char **)v4 + 3);
        v15 = *((uint32_t *)v4 + 1) - 1;
      }
      else
      {
        v14 = v4 + 1;
        v15 = *v4 - 1;
      }
      v16 = 5381;
      if ( v15 > 0 )
      {
        v19 = v4;
        do
        {
          --v15;
          v17 = 33 * v16;
          v18 = (uint8_t)v14[v15] + 32;
          if ( (uint8_t)(v14[v15] - 65) > 0x19u )
            v18 = (uint8_t)v14[v15];
          v16 = v17 ^ v18;
        }
        while ( v15 != 0 );
        v4 = v19;
        v16 = v16 << 9 >> 9;
      }
      v20 = v16 & 0x7FFFFF | v20 & 0xFF800000;
      *((uint32_t *)v4 + 4) = v20;
    }
    v9 = v20 & 0x7FFFFF | v25 & 0xFF800000;
    LOWORD(v25) = v20;
    HIBYTE(v25) = HIBYTE(v9) | 1;
    BYTE2(v25) = BYTE2(v9) & 0x7F;
    v10 = v21 - 1;
    if ( v21 == -1 )
      v10 = (int)(uintptr_t)(v23 - 1);
    if ( v10 <= 0 )
    {
      result = gameswf::ASEnvironment::setTarget(self, a3);
    }
    else
    {
      v11 = (char *)(v22);
      if ( v21 == -1 )
        v11 = (char *)v24;
      result = (gameswf::RefCounted::Self *)gameswf::ASEnvironment::findTarget((gameswf::ASObject::Self **)self, v11);
      v12 = (gameswf::Character::Self *)(result);
      if ( result != nullptr )
      {
        result = (gameswf::RefCounted::Self *)G4_VCALL<int>(result, 8, 1);
        if ( (uint8_t)(uintptr_t)(result) != 0 )
          result = gameswf::ASEnvironment::setTarget(self, v12);
      }
    }
    if ( v21 == -1 && (v25 & 0x1000000) != 0 )
      return (gameswf::RefCounted::Self *)gameswf::free_internal(v24);
  }
  else if ( (uint8_t)(uintptr_t)(result) == 5 )
  {
    result = (gameswf::RefCounted::Self *)gameswf::ASEnvironment::findTarget((gameswf::ASObject::Self **)self, a2);
    v13 = (gameswf::Character::Self *)(result);
    if ( result != nullptr )
    {
      result = (gameswf::RefCounted::Self *)G4_VCALL<int>(result, 8, 1);
      if ( (uint8_t)(uintptr_t)(result) != 0 )
        return gameswf::ASEnvironment::setTarget(self, v13);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEnvironment::setMember  (binary VA: 0x1093560)
// Original: gameswf::ASEnvironment::setMember
// ----------------------------------------------------------------------------
int gameswf::ASEnvironment::setMember(gameswf::ASEnvironment::Self *self, const gameswf::StringI::Self *a2, const gameswf::ASValue::Self *a3)
{
  int v3;
  int result;
  int StandardMemberID;
  char v6;

  v3 = *((uint32_t *)self + 44);
  result = 0;
  if ( v3 != 0 )
  {
    StandardMemberID = gameswf::getStandardMemberID(a2);
    if ( StandardMemberID == -1 )
      return G4_VCALL<int>(v3, 48, a2, a3);
    v6 = G4_VCALL<int>(v3, 32, StandardMemberID, a3);
    result = 1;
    if ( v6 == 0 )
      return G4_VCALL<int>(v3, 48, a2, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEnvironment::getMember  (binary VA: 0x10935f0)
// Original: gameswf::ASEnvironment::getMember
// ----------------------------------------------------------------------------
int gameswf::ASEnvironment::getMember(gameswf::ASEnvironment::Self *self, const gameswf::StringI::Self *a2, gameswf::ASValue::Self *a3)
{
  int v3;
  int result;
  int StandardMemberID;
  char v6;

  v3 = *((uint32_t *)self + 44);
  result = 0;
  if ( v3 != 0 )
  {
    StandardMemberID = gameswf::getStandardMemberID(a2);
    if ( StandardMemberID == -1 )
      return G4_VCALL<int>(v3, 44, a2, a3);
    v6 = G4_VCALL<int>(v3, 36, StandardMemberID, a3);
    result = 1;
    if ( v6 == 0 )
      return G4_VCALL<int>(v3, 44, a2, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEnvironment::thisAlive  (binary VA: 0x1093680)
// Original: gameswf::ASEnvironment::thisAlive
// ----------------------------------------------------------------------------
uint32_t * gameswf::ASEnvironment::thisAlive(gameswf::ASEnvironment::Self *self)
{
  int v1;
  int v2;
  int i;
  int v4;
  int v5;
  int v6;
  int j;
  int v8;
  int v9;
  uint32_t *result;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;

  v1 = *((uint32_t *)self + 44);
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 76))(*((uint32_t *)self + 44));
  v2 = *((uint32_t *)self + 49);
  if ( v2 > 0 )
  {
    for ( i = 0; i != v2; ++i )
    {
      while ( 1 )
      {
        v4 = *((uint32_t *)self + 48) + 32 * i;
        if ( *(uint8_t *)(v4 + 20) == 5 )
        {
          v5 = *(uint32_t *)(v4 + 24);
          if ( v5 != 0 )
            break;
        }
        if ( ++i == v2 )
          goto LABEL_9;
      }
      G4_VCALL<void>(v5, 76);
    }
  }
LABEL_9:
  v17 = *((uint32_t *)self + 1);
  if ( v17 > 0 )
  {
    v6 = 0;
    for ( j = 0; j != v17; ++j )
    {
      while ( 1 )
      {
        v8 = *(uint32_t *)self + v6;
        if ( *(uint8_t *)v8 == 5 )
        {
          v9 = *(uint32_t *)(v8 + 4);
          if ( v9 != 0 )
            break;
        }
        ++j;
        v6 += 12;
        if ( j == v17 )
          goto LABEL_15;
      }
      v6 += 12;
      G4_VCALL<void>(v9, 76);
    }
  }
LABEL_15:
  if ( *((uint8_t *)self + 112) == 5 && (v13 = *((uint32_t *)self + 29)) != 0 )
  {
    (*(void (**)(uint32_t))(*(uint32_t *)v13 + 76))(*((uint32_t *)self + 29));
    if ( *((uint8_t *)self + 124) != 5 )
      goto LABEL_17;
  }
  else if ( *((uint8_t *)self + 124) != 5 )
  {
    goto LABEL_17;
  }
  v14 = *((uint32_t *)self + 32);
  if ( v14 != 0 )
  {
    (*(void (**)(uint32_t))(*(uint32_t *)v14 + 76))(*((uint32_t *)self + 32));
    if ( *((uint8_t *)self + 136) != 5 )
      goto LABEL_18;
    goto LABEL_30;
  }
LABEL_17:
  if ( *((uint8_t *)self + 136) == 5 )
  {
LABEL_30:
    v15 = *((uint32_t *)self + 35);
    if ( v15 != 0 )
    {
      (*(void (**)(uint32_t))(*(uint32_t *)v15 + 76))(*((uint32_t *)self + 35));
      if ( *((uint8_t *)self + 148) != 5 )
        goto LABEL_19;
      goto LABEL_32;
    }
  }
LABEL_18:
  if ( *((uint8_t *)self + 148) != 5 )
    goto LABEL_19;
LABEL_32:
  v16 = *((uint32_t *)self + 38);
  if ( v16 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v16 + 76))(*((uint32_t *)self + 38));
LABEL_19:
  result = *((uint32_t **)self + 41);
  v18 = result;
  if ( (int)(uintptr_t)(result) > 0 )
  {
    v11 = 0;
    v12 = nullptr;
    do
    {
      while ( 1 )
      {
        result = (uint32_t *)(*((uint32_t *)self + 40) + v11);
        if ( *(uint8_t *)result == 5 )
        {
          result = (uint32_t *)result[1];
          if ( result != nullptr )
            break;
        }
        v12 = (uint32_t *)((char *)v12 + 1);
        v11 += 12;
        if ( v12 == v18 )
          return result;
      }
      v12 = (uint32_t *)((char *)v12 + 1);
      v11 += 12;
      result = (uint32_t *)G4_VCALL<int>(result, 76);
    }
    while ( v12 != v18 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEnvironment::clearRefs  (binary VA: 0x1093830)
// Original: gameswf::ASEnvironment::clearRefs
// ----------------------------------------------------------------------------
int gameswf::ASEnvironment::clearRefs(gameswf::RefCounted::Self **self, int a2)
{
  gameswf::ASEnvironment::Self *v2;
  int result;
  gameswf::RefCounted::Self *v4;
  int v5;
  int v6;
  gameswf::ASEnvironment::Self *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  gameswf::ASEnvironment::Self *v12;
  gameswf::ASValue::Self *v13;
  int v14;
  int v15;
  int v16;
  gameswf::ASEnvironment::Self *v17;
  gameswf::ASValue::Self *v18;
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
  gameswf::ASEnvironment::Self *v31;
  gameswf::ASEnvironment::Self *v32;
  gameswf::ASEnvironment::Self *v33;
  int v34;
  int v35;

  v2 = (gameswf::ASEnvironment::Self *)self;
  result = a2;
  v4 = *(self + 44);
  if ( v4 != nullptr && *((uint32_t *)v4 + 5) < a2 )
  {
    gameswf::RefCounted::dropRef(v4);
    *(self + 44) = nullptr;
    result = a2;
  }
  if ( (int)(uintptr_t)(*(self + 49)) > 0 )
  {
    v5 = 0;
    v6 = (int)(uintptr_t)(*(self + 49));
    v7 = (gameswf::ASEnvironment::Self *)self;
    do
    {
      while ( 1 )
      {
        v8 = *((uint32_t *)v7 + 48) + 32 * v5;
        if ( *(uint8_t *)(v8 + 20) == 5 )
        {
          v9 = *(uint32_t *)(v8 + 24);
          if ( v9 != 0 && result > *(uint32_t *)(v9 + 20) )
            break;
        }
        if ( ++v5 == v6 )
          goto LABEL_11;
      }
      ++v5;
      v24 = result;
      v31 = v7;
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v8 + 20));
      *(uint8_t *)(v8 + 20) = 0;
      v7 = v31;
      result = v24;
    }
    while ( v5 != v6 );
LABEL_11:
    v2 = v7;
  }
  v34 = *((uint32_t *)v2 + 1);
  if ( v34 > 0 )
  {
    v10 = 0;
    v11 = 0;
    v12 = v2;
    do
    {
      while ( 1 )
      {
        v13 = (gameswf::ASValue::Self *)(*(uint32_t *)v12 + v10);
        if ( *(uint8_t *)v13 == 5 )
        {
          v14 = *((uint32_t *)v13 + 1);
          if ( v14 != 0 && result > *(uint32_t *)(v14 + 20) )
            break;
        }
        ++v11;
        v10 += 12;
        if ( v11 == v34 )
          goto LABEL_19;
      }
      v25 = result;
      v32 = v12;
      ++v11;
      gameswf::ASValue::dropRefs(v13);
      v10 += 12;
      *(uint8_t *)v13 = 0;
      v12 = v32;
      result = v25;
    }
    while ( v11 != v34 );
LABEL_19:
    v2 = v12;
  }
  if ( *((uint8_t *)v2 + 112) == 5 )
  {
    v23 = *((uint32_t *)v2 + 29);
    if ( v23 != 0 && result > *(uint32_t *)(v23 + 20) )
    {
      v30 = result;
      gameswf::ASValue::dropRefs((gameswf::ASEnvironment::Self *)((char *)v2 + 112));
      *((uint8_t *)v2 + 112) = 0;
      result = v30;
    }
  }
  if ( *((uint8_t *)v2 + 124) == 5 )
  {
    v22 = *((uint32_t *)v2 + 32);
    if ( v22 != 0 && result > *(uint32_t *)(v22 + 20) )
    {
      v29 = result;
      gameswf::ASValue::dropRefs((gameswf::ASEnvironment::Self *)((char *)v2 + 124));
      *((uint8_t *)v2 + 124) = 0;
      result = v29;
    }
  }
  if ( *((uint8_t *)v2 + 136) == 5 )
  {
    v21 = *((uint32_t *)v2 + 35);
    if ( v21 != 0 && result > *(uint32_t *)(v21 + 20) )
    {
      v28 = result;
      gameswf::ASValue::dropRefs((gameswf::ASEnvironment::Self *)((char *)v2 + 136));
      *((uint8_t *)v2 + 136) = 0;
      result = v28;
    }
  }
  if ( *((uint8_t *)v2 + 148) == 5 )
  {
    v20 = *((uint32_t *)v2 + 38);
    if ( v20 != 0 && result > *(uint32_t *)(v20 + 20) )
    {
      v27 = result;
      gameswf::ASValue::dropRefs((gameswf::ASEnvironment::Self *)((char *)v2 + 148));
      *((uint8_t *)v2 + 148) = 0;
      result = v27;
    }
  }
  v35 = *((uint32_t *)v2 + 41);
  if ( v35 > 0 )
  {
    v15 = 0;
    v16 = 0;
    v17 = v2;
    do
    {
      while ( 1 )
      {
        v18 = (gameswf::ASValue::Self *)(*((uint32_t *)v17 + 40) + v15);
        if ( *(uint8_t *)v18 == 5 )
        {
          v19 = *((uint32_t *)v18 + 1);
          if ( v19 != 0 && result > *(uint32_t *)(v19 + 20) )
            break;
        }
        ++v16;
        v15 += 12;
        if ( v16 == v35 )
          return result;
      }
      v26 = result;
      v33 = v17;
      ++v16;
      gameswf::ASValue::dropRefs(v18);
      v15 += 12;
      *(uint8_t *)v18 = 0;
      v17 = v33;
      result = v26;
    }
    while ( v16 != v35 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASEnvironment::loadFile  (binary VA: 0x1093ac0)
// Original: gameswf::ASEnvironment::loadFile
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ASEnvironment::loadFile(gameswf::ASObject::Self **self, gameswf::Self *a2, const gameswf::ASValue::Self *a3)
{
  gameswf::ASObject::Self **v3;
  int Target;
  int v5;
  int v6;
  char v7;
  gameswf::Player::Self *v8;
  gameswf::ASObject::Self *v9;
  const char *Workdir;
  gameswf::Self *v11;
  gameswf::Self *v12;
  int file_type;
  gameswf::Self *v14;
  int v15;
  int WeakProxy;
  gameswf::Self *v17;
  gameswf::Self *v18;
  bool v19;
  int v20;
  float v21; // xmm1_4
  float v22; // xmm0_4
  gameswf::Player::Self *v23;
  gameswf::Self *GenericCharacter;
  gameswf::Self *v25;
  gameswf::Self *v26;
  gameswf::Self *v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  gameswf::Self *v33;
  int v35;
  gameswf::Player::Self *v36;
  int Movie;
  gameswf::ASObject::Self *v38;
  int v39;
  gameswf::Self *v40;
  unsigned int v41;
  unsigned int v42;
  typedef int _g4_t_v43;
  typedef const char *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef gameswf::Self *_g4_t_v58;
  typedef gameswf::Self *_g4_t_v59;
  typedef gameswf::Self *_g4_t_v60;
  typedef gameswf::Self *_g4_t_v61;
  typedef gameswf::Self *_g4_t_v62;
  typedef gameswf::Self *_g4_t_v63;
  typedef gameswf::Self *_g4_t_v64;
  typedef gameswf::Self *_g4_t_v65;
  typedef gameswf::Self *_g4_t_v66;
  typedef gameswf::Self *_g4_t_v67;
  typedef gameswf::Self *_g4_t_v68;
  typedef gameswf::RefCounted::Self *_g4_t_v69;
  typedef gameswf::RefCounted::Self *_g4_t_v70;
  typedef gameswf::RefCounted::Self *_g4_t_v71;
  typedef gameswf::RefCounted::Self *_g4_t_v72;
  typedef int _g4_t_v73;
  typedef gameswf::RefCounted::Self *_g4_t_v74;
  typedef gameswf::RefCounted::Self *_g4_t_v75;
  typedef gameswf::Self *_g4_t_v76;
  typedef gameswf::RefCounted::Self *_g4_t_v77;
  typedef int _g4_t_v78;
  typedef unsigned int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef void *_g4_t_v86[3];
  typedef gameswf::Self *_g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef void *_g4_t_v94;
  typedef gameswf::Self *_g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef uint32_t _g4_t_v100[9];
  typedef int _g4_t_v101[5];
  typedef gameswf::Self *_g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef gameswf::ASObject::Self ***_g4_t_v105;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (12u + sizeof(_g4_t_v43)) > _g4_s0 ? (12u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v44)) > _g4_s1 ? (12u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v45)) > _g4_s2 ? (16u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v46)) > _g4_s3 ? (20u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v47)) > _g4_s4 ? (24u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v48)) > _g4_s5 ? (28u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v49)) > _g4_s6 ? (32u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v50)) > _g4_s7 ? (36u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v51)) > _g4_s8 ? (40u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v52)) > _g4_s9 ? (44u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v53)) > _g4_s10 ? (48u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v54)) > _g4_s11 ? (52u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v55)) > _g4_s12 ? (56u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v56)) > _g4_s13 ? (60u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v57)) > _g4_s14 ? (64u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v58)) > _g4_s15 ? (64u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v59)) > _g4_s16 ? (68u + sizeof(_g4_t_v59)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v60)) > _g4_s17 ? (68u + sizeof(_g4_t_v60)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v61)) > _g4_s18 ? (68u + sizeof(_g4_t_v61)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v62)) > _g4_s19 ? (68u + sizeof(_g4_t_v62)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v63)) > _g4_s20 ? (68u + sizeof(_g4_t_v63)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v64)) > _g4_s21 ? (68u + sizeof(_g4_t_v64)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v65)) > _g4_s22 ? (68u + sizeof(_g4_t_v65)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v66)) > _g4_s23 ? (68u + sizeof(_g4_t_v66)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v67)) > _g4_s24 ? (68u + sizeof(_g4_t_v67)) : _g4_s24,
    _g4_s26 = (68u + sizeof(_g4_t_v68)) > _g4_s25 ? (68u + sizeof(_g4_t_v68)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v69)) > _g4_s26 ? (72u + sizeof(_g4_t_v69)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v70)) > _g4_s27 ? (72u + sizeof(_g4_t_v70)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v71)) > _g4_s28 ? (72u + sizeof(_g4_t_v71)) : _g4_s28,
    _g4_s30 = (72u + sizeof(_g4_t_v72)) > _g4_s29 ? (72u + sizeof(_g4_t_v72)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v73)) > _g4_s30 ? (76u + sizeof(_g4_t_v73)) : _g4_s30,
    _g4_s32 = (80u + sizeof(_g4_t_v74)) > _g4_s31 ? (80u + sizeof(_g4_t_v74)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v75)) > _g4_s32 ? (80u + sizeof(_g4_t_v75)) : _g4_s32,
    _g4_s34 = (84u + sizeof(_g4_t_v76)) > _g4_s33 ? (84u + sizeof(_g4_t_v76)) : _g4_s33,
    _g4_s35 = (84u + sizeof(_g4_t_v77)) > _g4_s34 ? (84u + sizeof(_g4_t_v77)) : _g4_s34,
    _g4_s36 = (88u + sizeof(_g4_t_v78)) > _g4_s35 ? (88u + sizeof(_g4_t_v78)) : _g4_s35,
    _g4_s37 = (92u + sizeof(_g4_t_v79)) > _g4_s36 ? (92u + sizeof(_g4_t_v79)) : _g4_s36,
    _g4_s38 = (96u + sizeof(_g4_t_v80)) > _g4_s37 ? (96u + sizeof(_g4_t_v80)) : _g4_s37,
    _g4_s39 = (100u + sizeof(_g4_t_v81)) > _g4_s38 ? (100u + sizeof(_g4_t_v81)) : _g4_s38,
    _g4_s40 = (104u + sizeof(_g4_t_v82)) > _g4_s39 ? (104u + sizeof(_g4_t_v82)) : _g4_s39,
    _g4_s41 = (108u + sizeof(_g4_t_v83)) > _g4_s40 ? (108u + sizeof(_g4_t_v83)) : _g4_s40,
    _g4_s42 = (112u + sizeof(_g4_t_v84)) > _g4_s41 ? (112u + sizeof(_g4_t_v84)) : _g4_s41,
    _g4_s43 = (116u + sizeof(_g4_t_v85)) > _g4_s42 ? (116u + sizeof(_g4_t_v85)) : _g4_s42,
    _g4_s44 = (120u + sizeof(_g4_t_v86)) > _g4_s43 ? (120u + sizeof(_g4_t_v86)) : _g4_s43,
    _g4_s45 = (132u + sizeof(_g4_t_v87)) > _g4_s44 ? (132u + sizeof(_g4_t_v87)) : _g4_s44,
    _g4_s46 = (136u + sizeof(_g4_t_v88)) > _g4_s45 ? (136u + sizeof(_g4_t_v88)) : _g4_s45,
    _g4_s47 = (140u + sizeof(_g4_t_v89)) > _g4_s46 ? (140u + sizeof(_g4_t_v89)) : _g4_s46,
    _g4_s48 = (144u + sizeof(_g4_t_v90)) > _g4_s47 ? (144u + sizeof(_g4_t_v90)) : _g4_s47,
    _g4_s49 = (148u + sizeof(_g4_t_v91)) > _g4_s48 ? (148u + sizeof(_g4_t_v91)) : _g4_s48,
    _g4_s50 = (152u + sizeof(_g4_t_v92)) > _g4_s49 ? (152u + sizeof(_g4_t_v92)) : _g4_s49,
    _g4_s51 = (156u + sizeof(_g4_t_v93)) > _g4_s50 ? (156u + sizeof(_g4_t_v93)) : _g4_s50,
    _g4_s52 = (160u + sizeof(_g4_t_v94)) > _g4_s51 ? (160u + sizeof(_g4_t_v94)) : _g4_s51,
    _g4_s53 = (164u + sizeof(_g4_t_v95)) > _g4_s52 ? (164u + sizeof(_g4_t_v95)) : _g4_s52,
    _g4_s54 = (168u + sizeof(_g4_t_v96)) > _g4_s53 ? (168u + sizeof(_g4_t_v96)) : _g4_s53,
    _g4_s55 = (172u + sizeof(_g4_t_v97)) > _g4_s54 ? (172u + sizeof(_g4_t_v97)) : _g4_s54,
    _g4_s56 = (176u + sizeof(_g4_t_v98)) > _g4_s55 ? (176u + sizeof(_g4_t_v98)) : _g4_s55,
    _g4_s57 = (180u + sizeof(_g4_t_v99)) > _g4_s56 ? (180u + sizeof(_g4_t_v99)) : _g4_s56,
    _g4_s58 = (184u + sizeof(_g4_t_v100)) > _g4_s57 ? (184u + sizeof(_g4_t_v100)) : _g4_s57,
    _g4_s59 = (220u + sizeof(_g4_t_v101)) > _g4_s58 ? (220u + sizeof(_g4_t_v101)) : _g4_s58,
    _g4_s60 = (240u + sizeof(_g4_t_v102)) > _g4_s59 ? (240u + sizeof(_g4_t_v102)) : _g4_s59,
    _g4_s61 = (244u + sizeof(_g4_t_v103)) > _g4_s60 ? (244u + sizeof(_g4_t_v103)) : _g4_s60,
    _g4_s62 = (248u + sizeof(_g4_t_v104)) > _g4_s61 ? (248u + sizeof(_g4_t_v104)) : _g4_s61,
    _g4_s63 = (256u + sizeof(_g4_t_v105)) > _g4_s62 ? (256u + sizeof(_g4_t_v105)) : _g4_s62
  };
  alignas(16) uint8_t _g4_sf[_g4_s63];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 12u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 20u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 24u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 48u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 52u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 56u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 64u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 64u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 68u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 68u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 68u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 68u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 68u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 68u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 68u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 68u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 68u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 68u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 72u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 72u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 72u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 72u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 76u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 80u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 80u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 84u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 84u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 88u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 92u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 96u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 100u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 104u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 108u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 112u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 116u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 120u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 132u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 136u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 140u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 144u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 148u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 152u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 156u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 160u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 164u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 168u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 172u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 176u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 180u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 184u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 220u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 240u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 244u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 248u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 256u);

  v105 = &self;
  v3 = self;
  v76 = a2;
  Target = gameswf::ASEnvironment::findTarget(self, a3);
  v5 = 0;
  v6 = Target;
  if ( Target == 0 )
    return (gameswf::Self *)v5;
  v7 = G4_VCALL<int>(Target, 8, 1);
  v5 = 0;
  if ( v7 == 0 )
    return (gameswf::Self *)v5;
  if ( *(uint8_t *)v76 != 0 )
  {
    v8 = (gameswf::Player::Self *)(v3[53]);
    if ( v8 != nullptr )
    {
      v9 = v3[52];
      if ( *((uint8_t *)v9 + 2) == 0 )
      {
        v19 = (*(uint16_t *)v9)-- == 1;
        if ( v19 )
          gameswf::free_internal(v9);
        v3[52] = nullptr;
        v3[53] = nullptr;
        v8 = nullptr;
      }
    }
    Workdir = (const char *)gameswf::Player::getWorkdir(v8);
    LOWORD(v92) = 1;
    if ( Workdir != nullptr )
    {
      v59 = (gameswf::Self *)Workdir;
      v70 = (gameswf::RefCounted::Self *)strlen(Workdir);
      gameswf::String::resize((gameswf::String::Self *)&v92, (int)(uintptr_t)(v70));
      v11 = (gameswf::Self *)((char *)&v92 + 1);
      if ( (uint8_t)v92 == 0xFF )
        v11 = v95;
      gameswf::Strcpy_s(v11, (char *)v70 + 1, v59);
    }
    LOWORD(v96) = -1;
    BYTE2(v96) = 127;
    HIBYTE(v96) |= 1u;
    gameswf::getFullURL((gameswf::Self *)v86, (const gameswf::String::Self *)&v92, v76);
    if ( (uint8_t)v92 == 0xFF && (v96 & 0x1000000) != 0 )
    {
      v44 = (const char *)v94;
      gameswf::free_internal(v95);
    }
    v12 = (gameswf::Self *)((char *)v86 + 1);
    if ( LOBYTE(v86[0]) == 0xFF )
      v12 = v87;
    file_type = gameswf::get_file_type(v12);
    v14 = (gameswf::Self *)((char *)v86 + 1);
    if ( file_type == 1 )
    {
      v36 = (gameswf::Player::Self *)(v3[53]);
      if ( LOBYTE(v86[0]) == 0xFF )
        v14 = v87;
      if ( v36 != nullptr && *((uint8_t *)v3[52] + 2) == 0 )
      {
        v67 = v14;
        sub_7E5ED0(v3 + 52, nullptr);
        v3[53] = nullptr;
        v36 = nullptr;
        v14 = v67;
      }
      Movie = (int)(uintptr_t)(gameswf::Player::createMovie(v36, v14));
      v5 = 0;
      if ( Movie != 0 )
        v5 = G4_VCALL<int>(v6, 184, Movie);
      goto LABEL_41;
    }
    if ( file_type == 2 )
    {
      gameswf::logError((gameswf::Self *)"gameswf is not linked to jpeglib -- can't load jpeg image data!\n", v44);
      v5 = 0;
      goto LABEL_41;
    }
    v77 = *(gameswf::RefCounted::Self **)(v6 + 56);
    if ( v77 != nullptr )
    {
      if ( *(uint8_t *)(*(uint32_t *)(v6 + 52) + 2) != 0 )
      {
        v82 = 0;
        v83 = 0;
        v84 = 0;
        v85 = 0;
        v15 = *(uint32_t *)gameswf::getHostInterface();
        (*(void (**)(unsigned int *))(v15 + 16))(&v79);
        if ( v79 == 0 )
        {
          v38 = v3[53];
          if ( v38 != nullptr && *((uint8_t *)v3[52] + 2) == 0 )
          {
            sub_7E5ED0(v3 + 52, nullptr);
            v3[53] = nullptr;
            v38 = nullptr;
          }
          v39 = *(uint32_t *)(*((uint32_t *)v38 + 3) + 44);
          v40 = (gameswf::Self *)((char *)v86 + 1);
          if ( LOBYTE(v86[0]) == 0xFF )
            v40 = v87;
          glitch::video::CTextureManager::getTexture(
            (glitch::video::CTextureManager::Self *)&v80,
            *(char **)(v39 + 456),
            (const char *)v40,
            nullptr);
          v41 = 0;
          v81 = v80;
          if ( v80 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v80 + 4), 1u);
            v41 = v81;
          }
          v42 = v79;
          v79 = v41;
          v81 = v42;
          sub_5ED480(&v81);
          sub_5ED480(&v80);
          if ( v79 == 0 )
          {
            sub_5ED480((int *)&v79);
            v5 = 0;
LABEL_41:
            if ( LOBYTE(v86[0]) == 0xFF && (v88 & 0x1000000) != 0 )
            {
              v66 = (gameswf::Self *)v5;
              gameswf::free_internal(v87);
              return v66;
            }
            return (gameswf::Self *)v5;
          }
        }
        (*(void (**)(uint32_t *, uint32_t *, unsigned int *))(*gameswf::s_render_handler + 12))(
          v100,
          (uint32_t *)(gameswf::s_render_handler),
          &v79);
        v75 = (gameswf::RefCounted::Self *)(*(int (**)(uint32_t *))(*gameswf::s_render_handler + 8))((uint32_t *)(gameswf::s_render_handler));
        if ( v3[53] != nullptr )
        {
          if ( *((uint8_t *)v3[52] + 2) != 0 )
          {
            v71 = (gameswf::RefCounted::Self *)(v3[53]);
            v60 = (gameswf::Self *)opNew(0x50u);
            gameswf::RefCounted::RefCounted(v60);
            *(uint32_t *)v60 = ((uint32_t)(uintptr_t)&off_208E728);
            *((uint32_t *)v60 + 3) = 0;
            *((uint32_t *)v60 + 4) = 0;
            *((uint32_t *)v60 + 5) = 0;
            *((uint32_t *)v60 + 6) = (uint32_t)(uintptr_t)(v71);
            WeakProxy = gameswf::RefCounted::getWeakProxy(v71);
            v17 = v60;
            v58 = (gameswf::Self *)WeakProxy;
            v18 = *((gameswf::Self **)v60 + 5);
            if ( v58 != v18 )
            {
              if ( v18 != nullptr )
              {
                v19 = (*(uint16_t *)v18)-- == 1;
                if ( v19 )
                {
                  gameswf::free_internal(v18);
                  v17 = v60;
                }
              }
              *((uint32_t *)v17 + 5) = (uint32_t)(uintptr_t)(v58);
              if ( v58 != nullptr )
                ++*(uint16_t *)v58;
            }
            goto LABEL_26;
          }
          sub_7E5ED0(v3 + 52, nullptr);
          v3[53] = nullptr;
        }
        v68 = (gameswf::Self *)opNew(0x50u);
        gameswf::RefCounted::RefCounted(v68);
        *(uint32_t *)v68 = ((uint32_t)(uintptr_t)&off_208E728);
        *((uint32_t *)v68 + 3) = 0;
        *((uint32_t *)v68 + 4) = 0;
        *((uint32_t *)v68 + 5) = 0;
        *((uint32_t *)v68 + 6) = 0;
        sub_7E5ED0((gameswf::Self **)v68 + 5, nullptr);
        v17 = v68;
LABEL_26:
        *(uint32_t *)v17 = ((uint32_t)(uintptr_t)&off_208E568);
        *((uint32_t *)v17 + 7) = (uint32_t)(uintptr_t)(v75);
        if ( v75 != nullptr )
        {
          v61 = v17;
          gameswf::RefCounted::addRef(v75);
          v17 = v61;
        }
        *((uint32_t *)v17 + 10) = 0;
        _mm_storel_ps((double *)v17 + 6, g4_m128_from<__m128>(0LL));
        *((uint32_t *)v17 + 8) = 0;
        _mm_storel_ps((double *)v17 + 7, g4_m128_from<__m128>(0LL));
        v20 = *((uint32_t *)v17 + 7);
        _mm_storel_ps((double *)v17 + 8, g4_m128_from<__m128>(0LL));
        _mm_storel_ps((double *)v17 + 9, g4_m128_from<__m128>(0LL));
        v21 = (float)*(int *)(v20 + 16);
        *((float *)v17 + 9) = v21;
        v22 = (float)*(int *)(v20 + 20);
        *((uint32_t *)v17 + 12) = 0;
        *((uint32_t *)v17 + 13) = 0;
        *((float *)v17 + 11) = v22;
        *((uint32_t *)v17 + 15) = 0;
        *((float *)v17 + 14) = v21;
        *((uint32_t *)v17 + 16) = 0;
        *((float *)v17 + 17) = v22;
        *((float *)v17 + 18) = v21;
        *((float *)v17 + 19) = v22;
        v23 = (gameswf::Player::Self *)(v3[53]);
        if ( v23 != nullptr && *((uint8_t *)v3[52] + 2) == 0 )
        {
          v62 = v17;
          sub_7E5ED0(v3 + 52, nullptr);
          v3[53] = nullptr;
          v23 = nullptr;
          v17 = v62;
        }
        GenericCharacter = (gameswf::Self *)gameswf::Player::createGenericCharacter(v23, v17, v77, 0);
        *((uint32_t *)GenericCharacter + 14) = (uint32_t)(uintptr_t)(v77);
        v63 = GenericCharacter;
        v25 = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v77);
        v26 = v63;
        v27 = *((gameswf::Self **)v63 + 13);
        if ( v25 != v27 )
        {
          if ( v27 != nullptr )
          {
            v19 = (*(uint16_t *)v27)-- == 1;
            if ( v19 )
            {
              v72 = (gameswf::RefCounted::Self *)(v25);
              gameswf::free_internal(v27);
              v26 = v63;
              v25 = (gameswf::Self *)(v72);
            }
          }
          *((uint32_t *)v26 + 13) = (uint32_t)(uintptr_t)(v25);
          if ( v25 != nullptr )
            ++*(uint16_t *)v25;
        }
        v28 = *(uint16_t *)(v6 + 140);
        v29 = *(uint16_t *)(v6 + 142);
        v30 = *(uint32_t *)(v6 + 136);
        v31 = *(uint32_t *)(v6 + 60);
        if ( *(uint8_t *)v31 == 0xFF )
          v32 = *(uint32_t *)(v31 + 12);
        else
          v32 = v31 + 1;
        v64 = v26;
        G4_VCALL<void>(v77, 200, v26, v32, v28, 0, 0, 0, v30, v29);
        v33 = v64;
        if ( LOBYTE(v101[2]) == 0xFF && (v103 & 0x1000000) != 0 )
        {
          gameswf::free_internal(v102);
          v33 = v64;
        }
        v65 = v33;
        sub_5ED480(v101);
        sub_5ED480((int *)&v79);
        v5 = (int)(uintptr_t)(v65);
        goto LABEL_41;
      }
      sub_7E5ED0((gameswf::Self **)(v6 + 52), nullptr);
      *(uint32_t *)(v6 + 56) = 0;
    }
    gameswf::logError((gameswf::Self *)"character can't replace _root\n", v44);
    v5 = 0;
    goto LABEL_41;
  }
  v35 = *(uint32_t *)(v6 + 56);
  if ( v35 != 0 )
  {
    if ( *(uint8_t *)(*(uint32_t *)(v6 + 52) + 2) != 0 )
    {
      G4_VCALL<void>(v35, 176, v6, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57);
      return nullptr;
    }
    sub_7E5ED0((gameswf::Self **)(v6 + 52), nullptr);
    *(uint32_t *)(v6 + 56) = 0;
  }
  G4_VCALL<void>(v6, 172, v43, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, 0, v69, v73, v74, v76, v78, v79, v80, v81, v82, v83, v84, v85, v86[0], v86[1], v86[2], v87, v88, v89, v90, v91, v92, v93, v94, v95, v96, v97, v98, v99, v100[0], v100[1], v100[2], v100[3], v100[4], v100[5], v100[6], v100[7], v100[8], v101[0], v101[1], v101[2], v101[3], v101[4], v102, v103, v104);
  return nullptr;
}


