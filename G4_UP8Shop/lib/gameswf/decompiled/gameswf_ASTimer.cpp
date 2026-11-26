#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASTimer.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimer::start  (binary VA: 0x1149cf0)
// Original: gameswf::ASTimer::start
// ----------------------------------------------------------------------------
int gameswf::ASTimer::start(int a1)
{
  int result;
  uint8_t *v2;
  bool v3;

  result = a1;
  v2 = *(uint8_t **)(a1 + 4);
  if ( v2 != nullptr )
  {
    v3 = (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v2 + 8))(*(uint32_t *)(a1 + 4), 43) == 0;
    result = 0;
    if ( v3 )
      v2 = nullptr;
  }
  v2[48] = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimer::stop  (binary VA: 0x1149d30)
// Original: gameswf::ASTimer::stop
// ----------------------------------------------------------------------------
int gameswf::ASTimer::stop(int a1)
{
  int result;
  uint8_t *v2;
  bool v3;

  result = a1;
  v2 = *(uint8_t **)(a1 + 4);
  if ( v2 != nullptr )
  {
    v3 = (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v2 + 8))(*(uint32_t *)(a1 + 4), 43) == 0;
    result = 0;
    if ( v3 )
      v2 = nullptr;
  }
  v2[48] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimer::init  (binary VA: 0x1149d70)
// Original: gameswf::ASTimer::init
// ----------------------------------------------------------------------------
int gameswf::ASTimer::init(int a1)
{
  int v1;
  long double v2; // fst7
  int result;
  float v4; // xmm0_4

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 43) == 0 )
    v1 = 0;
  v2 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  result = 0;
  if ( *(int *)(a1 + 16) > 1 )
    result = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  v4 = v2;
  *(uint32_t *)(v1 + 56) = result;
  *(uint32_t *)(v1 + 60) = 0;
  *(float *)(v1 + 52) = v4 * 0.001f;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimer::clearRefs  (binary VA: 0x1149e20)
// Original: gameswf::ASTimer::clearRefs
// ----------------------------------------------------------------------------
int gameswf::ASTimer::clearRefs(gameswf::ASTimer::Self *self, int a2)
{
  int result;
  int v3;
  int v4;
  int v5;
  typedef gameswf::ASValue::Self *_g4_t_v6;
  typedef int _g4_t_v7;
  typedef uint8_t _g4_t_v8[4];
  typedef int64_t _g4_t_v9;
  typedef uint8_t _g4_t_v10[4];
  typedef int64_t _g4_t_v11 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v12[4];
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v8)) > _g4_s2 ? (44u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v9)) > _g4_s3 ? (48u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v10)) > _g4_s4 ? (56u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v11)) > _g4_s5 ? (60u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v12)) > _g4_s6 ? (68u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v13)) > _g4_s7 ? (72u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v14)) > _g4_s8 ? (76u + sizeof(_g4_t_v14)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 44u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 56u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 68u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 72u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 76u);

  result = (int)(uintptr_t)(gameswf::ASEventDispatcher::clearRefs(self, a2));
  if ( *((uint8_t *)self + 64) == 5 && (result = *((uint32_t *)self + 17)) != 0 && a2 > *(uint32_t *)(result + 20) )
  {
    v9 = 0;
    v8[0] = 2;
    v8[1] = 0;
    gameswf::ASValue::opAssign((gameswf::ASTimer::Self *)((char *)self + 64), (const gameswf::ASValue::Self *)v8);
    result = gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v8);
    if ( *((uint8_t *)self + 76) != 5 )
      goto LABEL_3;
  }
  else if ( *((uint8_t *)self + 76) != 5 )
  {
    goto LABEL_3;
  }
  result = *((uint32_t *)self + 20);
  if ( result != 0 && a2 > *(uint32_t *)(result + 20) )
  {
    v10[0] = 2;
    v10[1] = 0;
    v11 = 0;
    gameswf::ASValue::opAssign((gameswf::ASTimer::Self *)((char *)self + 76), (const gameswf::ASValue::Self *)v10);
    result = gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v10);
  }
LABEL_3:
  if ( *((int *)self + 24) > 0 )
  {
    v3 = 0;
    v4 = 0;
    v7 = *((uint32_t *)self + 24);
    do
    {
      while ( 1 )
      {
        result = *((uint32_t *)self + 23) + v3;
        if ( *(uint8_t *)result == 5 )
        {
          v5 = *(uint32_t *)(result + 4);
          if ( v5 != 0 && a2 > *(uint32_t *)(v5 + 20) )
            break;
        }
        ++v4;
        v3 += 12;
        if ( v4 >= v7 )
          return result;
      }
      v6 = (gameswf::ASValue::Self *)(*((uint32_t *)self + 23) + v3);
      v12[0] = 2;
      v12[1] = 0;
      v13 = 0;
      v14 = 0;
      gameswf::ASValue::opAssign(v6, (const gameswf::ASValue::Self *)v12);
      ++v4;
      v3 += 12;
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v12);
      result = *((uint32_t *)self + 24);
      v7 = result;
    }
    while ( v4 < result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimer::reset  (binary VA: 0x1149f90)
// Original: gameswf::ASTimer::reset
// ----------------------------------------------------------------------------
int gameswf::ASTimer::reset(int a1)
{
  gameswf::Player::Self **v1;
  int Root;
  int v3;

  v1 = *(gameswf::Player::Self ***)(a1 + 4);
  if ( v1 != nullptr && (*((uint8_t (**)(uint32_t, int))*v1 + 2))(*(uint32_t *)(a1 + 4), 43) == 0 )
    v1 = nullptr;
  v1[22] = nullptr;
  v1[15] = nullptr;
  *((uint8_t *)v1 + 48) = 0;
  Root = gameswf::ASObject::getRoot(v1);
  gameswf::Listener::remove((gameswf::Listener::Self *)(Root + 260), (gameswf::ASObject::Self *)v1);
  v3 = gameswf::ASObject::getRoot(v1);
  { gameswf::Listener::add((gameswf::Listener::Self *)(v3 + 260), (gameswf::ASObject::Self *)v1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimer::setMemberByName  (binary VA: 0x114a020)
// Original: gameswf::ASTimer::setMemberByName
// ----------------------------------------------------------------------------
int gameswf::ASTimer::setMemberByName(gameswf::ASTimer::Self *self, const gameswf::StringI::Self *a2, const gameswf::ASValue::Self *a3)
{
  gameswf::String::Self *v3;
  gameswf::String::Self *v4;
  long double v6; // fst7
  float v7; // xmm0_4

  v3 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a2 + 1));
  if ( *(uint8_t *)a2 == 0xFF )
    v3 = *((gameswf::String::Self **)a2 + 3);
  if ( gameswf::String::stricmp(v3, "delay") != 0 )
  {
    v4 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a2 + 1));
    if ( *(uint8_t *)a2 == 0xFF )
      v4 = *((gameswf::String::Self **)a2 + 3);
    if ( gameswf::String::stricmp(v4, "repeatCount") != 0 )
    {
      return gameswf::ASObject::setMemberByName(self, a2, a3);
    }
    else
    {
      *((uint32_t *)self + 14) = gameswf::ASValue::toInt(a3);
      return 1;
    }
  }
  else
  {
    v6 = gameswf::ASValue::toNumber(a3);
    v7 = v6;
    *((float *)self + 13) = v7 * 0.001f;
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimer::getMemberByName  (binary VA: 0x114a100)
// Original: gameswf::ASTimer::getMemberByName
// ----------------------------------------------------------------------------
int gameswf::ASTimer::getMemberByName(gameswf::ASTimer::Self *self, const gameswf::StringI::Self *a2, gameswf::ASValue::Self *a3)
{
  gameswf::String::Self *v3;
  gameswf::String::Self *v4;
  gameswf::String::Self *v5;
  gameswf::String::Self *v6;

  v3 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a2 + 1));
  if ( *(uint8_t *)a2 == 0xFF )
    v3 = *((gameswf::String::Self **)a2 + 3);
  if ( gameswf::String::stricmp(v3, "currentCount") != 0 )
  {
    v4 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a2 + 1));
    if ( *(uint8_t *)a2 == 0xFF )
      v4 = *((gameswf::String::Self **)a2 + 3);
    if ( gameswf::String::stricmp(v4, "delay") != 0 )
    {
      v5 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a2 + 1));
      if ( *(uint8_t *)a2 == 0xFF )
        v5 = *((gameswf::String::Self **)a2 + 3);
      if ( gameswf::String::stricmp(v5, "repeatCount") != 0 )
      {
        v6 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a2 + 1));
        if ( *(uint8_t *)a2 == 0xFF )
          v6 = *((gameswf::String::Self **)a2 + 3);
        if ( gameswf::String::stricmp(v6, "running") != 0 )
        {
          return gameswf::ASObject::getMemberByName(self, a2, a3);
        }
        else
        {
          gameswf::ASValue::setBool(a3, *((uint8_t *)self + 48));
          return 1;
        }
      }
      else
      {
        gameswf::ASValue::setDouble(a3, (double)*((int *)self + 14));
        return 1;
      }
    }
    else
    {
      gameswf::ASValue::setDouble(a3, (double)(int)(float)(1000.0 * *((float *)self + 13)));
      return 1;
    }
  }
  else
  {
    gameswf::ASValue::setDouble(a3, (double)*((int *)self + 15));
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimer::Destroy  (binary VA: 0x114a280)
// Original: gameswf::ASTimer::~ASTimer
// ----------------------------------------------------------------------------
void gameswf::ASTimer::Destroy(gameswf::ASTimer::Self *self)
{
  uint32_t *v1;
  int v2;
  int v3;
  int v4;
  gameswf::ASValue::Self *v5;
  int v6;
  gameswf::Self *v7;
  gameswf::Self *v8;
  uint32_t *v9;
  int v10;
  bool v11;
  int v12;
  int i;
  gameswf::Self **v14;
  gameswf::Self *v15;
  bool v16;
  gameswf::Self *v17;
  int v18;
  gameswf::Self *v19;
  int v20;
  int v21;
  int v22;
  uint8_t *v23;
  int v24;
  uint32_t *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  gameswf::Self **v30;
  gameswf::Self **v31;

  v1 = (uint32_t *)((char *)self + 92);
  v2 = *((uint32_t *)self + 24);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090308);
  if ( v2 <= 0 )
  {
    if ( v2 < 0 )
    {
      v22 = 12 * v2;
      do
      {
        v23 = (uint8_t *)(*v1 + v22);
        if ( v23 != nullptr )
        {
          *v23 = 0;
          v23[1] = 0;
        }
        v22 += 12;
        ++v2;
      }
      while ( v2 != 0 );
    }
  }
  else
  {
    v24 = v2;
    v3 = 0;
    v4 = 0;
    do
    {
      ++v3;
      v5 = (gameswf::ASValue::Self *)(v4 + *v1);
      v4 += 12;
      gameswf::ASValue::dropRefs(v5);
    }
    while ( v3 != v24 );
  }
  v6 = *((uint32_t *)self + 26);
  *((uint32_t *)self + 24) = 0;
  if ( v6 == 0 )
  {
    v7 = *((gameswf::Self **)self + 23);
    *((uint32_t *)self + 25) = 0;
    if ( v7 != nullptr )
      gameswf::free_internal(v7);
    *((uint32_t *)self + 23) = 0;
  }
  gameswf::ASValue::dropRefs((gameswf::ASTimer::Self *)((char *)self + 76));
  gameswf::ASValue::dropRefs((gameswf::ASTimer::Self *)((char *)self + 64));
  v31 = (gameswf::Self **)((char *)self + 40);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091248);
  v30 = (gameswf::Self **)((char *)self + 48);
LABEL_9:
  if ( v30 != v31 )
  {
    while ( 1 )
    {
      v8 = *--v30;
      if ( *v30 == nullptr )
        goto LABEL_9;
      v29 = *((uint32_t *)v8 + 1);
      if ( v29 >= 0 )
        break;
LABEL_31:
      gameswf::free_internal(v8);
      *v30 = nullptr;
      if ( v30 == v31 )
        goto LABEL_32;
    }
    v27 = 8;
    v28 = 0;
    while ( 1 )
    {
      v9 = (uint32_t *)((char *)v8 + v27);
      if ( *(uint32_t *)((char *)v8 + v27) != -2 )
        break;
LABEL_30:
      ++v28;
      v27 += 44;
      if ( v29 < v28 )
        goto LABEL_31;
    }
    if ( *((uint8_t *)v9 + 8) == 0xFF && (*((uint8_t *)v9 + 27) & 1) != 0 )
    {
      gameswf::free_internal((gameswf::Self *)v9[5]);
      v10 = v9[8];
      v11 = v10 < 0;
      if ( v10 <= 0 )
      {
LABEL_35:
        if ( v11 )
        {
          v20 = 24 * v10;
          do
          {
            v21 = v9[7] + v20;
            if ( v21 != 0 )
            {
              *(uint32_t *)v21 = 0;
              *(uint32_t *)(v21 + 4) = 0;
              *(uint32_t *)(v21 + 8) = 0;
              *(uint32_t *)(v21 + 12) = 0;
              *(uint32_t *)(v21 + 16) = 0;
              *(uint8_t *)(v21 + 20) = 0;
            }
            v20 += 24;
            ++v10;
          }
          while ( v10 != 0 );
        }
LABEL_25:
        v18 = v9[10];
        v9[8] = 0;
        if ( v18 == 0 )
        {
          v19 = (gameswf::Self *)v9[7];
          v9[9] = 0;
          if ( v19 != nullptr )
            gameswf::free_internal(v19);
          v9[7] = 0;
        }
        *v9 = -2;
        v9[1] = 0;
        v8 = *v30;
        goto LABEL_30;
      }
    }
    else
    {
      v10 = v9[8];
      v11 = v10 < 0;
      if ( v10 <= 0 )
        goto LABEL_35;
    }
    v26 = v10;
    v12 = 0;
    v25 = v9;
    for ( i = 0; i != v26; ++i )
    {
      v14 = (gameswf::Self **)(v25[7] + v12);
      v15 = v14[2];
      if ( v15 != nullptr )
      {
        v16 = (*(uint16_t *)v15)-- == 1;
        if ( v16 )
          gameswf::free_internal(v15);
      }
      v17 = *v14;
      if ( *v14 != nullptr )
      {
        v16 = (*(uint16_t *)v17)-- == 1;
        if ( v16 )
          gameswf::free_internal(v17);
      }
      v12 += 24;
    }
    v9 = v25;
    goto LABEL_25;
  }
LABEL_32:
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimer::Destroy_ea114a5b0  (binary VA: 0x114a5b0)
// Original: gameswf::ASTimer::~ASTimer
// ----------------------------------------------------------------------------
void gameswf::ASTimer::Destroy_ea114a5b0(gameswf::ASTimer::Self *self)
{
  gameswf::ASTimer::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimer::createClass  (binary VA: 0x114a5f0)
// Original: gameswf::ASTimer::createClass
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASTimer::createClass(gameswf::ASTimer::Self *self)
{
  gameswf::Self *v1;
  gameswf::Self *v2;
  gameswf::Self *v3;
  int v4;
  gameswf::Self **v5;
  gameswf::Self *v6;
  gameswf::Self *v7;
  gameswf::Self *v8;
  typedef gameswf::ASClass::Self *_g4_t_Class;
  typedef uint8_t _g4_t_v11[12];
  typedef uint16_t _g4_t_v12[6];
  typedef uint16_t _g4_t_v13[6];
  typedef uint16_t _g4_t_v14[6];
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  typedef gameswf::Self *_g4_t_v17;
  typedef int16_t _g4_t_v18;
  typedef int16_t _g4_t_v19;
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef gameswf::Self *_g4_t_v22;
  typedef int16_t _g4_t_v23;
  typedef char _g4_t_v24;
  typedef char _g4_t_v25;
  typedef char _g4_t_v26;
  typedef char _g4_t_v27;
  typedef gameswf::Self *_g4_t_v28;
  typedef unsigned int _g4_t_v29;
  typedef char _g4_t_v30;
  typedef char _g4_t_v31;
  typedef gameswf::Self *_g4_t_v32;
  typedef int16_t _g4_t_v33;
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef char _g4_t_v37;
  typedef gameswf::Self *_g4_t_v38;
  typedef int16_t _g4_t_v39;
  typedef char _g4_t_v40;
  typedef char _g4_t_v41;
  typedef char _g4_t_v42;
  typedef char _g4_t_v43;
  typedef gameswf::Self *_g4_t_v44;
  typedef int16_t _g4_t_v45;
  typedef char _g4_t_v46;
  typedef char _g4_t_v47;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (4u + sizeof(_g4_t_Class)) > _g4_s0 ? (4u + sizeof(_g4_t_Class)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v13)) > _g4_s3 ? (40u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v14)) > _g4_s4 ? (52u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v15)) > _g4_s5 ? (64u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (65u + sizeof(_g4_t_v16)) > _g4_s6 ? (65u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v17)) > _g4_s7 ? (76u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v18)) > _g4_s8 ? (80u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (82u + sizeof(_g4_t_v19)) > _g4_s9 ? (82u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v20)) > _g4_s10 ? (96u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (97u + sizeof(_g4_t_v21)) > _g4_s11 ? (97u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (108u + sizeof(_g4_t_v22)) > _g4_s12 ? (108u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v23)) > _g4_s13 ? (112u + sizeof(_g4_t_v23)) : _g4_s13,
    _g4_s15 = (114u + sizeof(_g4_t_v24)) > _g4_s14 ? (114u + sizeof(_g4_t_v24)) : _g4_s14,
    _g4_s16 = (115u + sizeof(_g4_t_v25)) > _g4_s15 ? (115u + sizeof(_g4_t_v25)) : _g4_s15,
    _g4_s17 = (128u + sizeof(_g4_t_v26)) > _g4_s16 ? (128u + sizeof(_g4_t_v26)) : _g4_s16,
    _g4_s18 = (129u + sizeof(_g4_t_v27)) > _g4_s17 ? (129u + sizeof(_g4_t_v27)) : _g4_s17,
    _g4_s19 = (140u + sizeof(_g4_t_v28)) > _g4_s18 ? (140u + sizeof(_g4_t_v28)) : _g4_s18,
    _g4_s20 = (144u + sizeof(_g4_t_v29)) > _g4_s19 ? (144u + sizeof(_g4_t_v29)) : _g4_s19,
    _g4_s21 = (160u + sizeof(_g4_t_v30)) > _g4_s20 ? (160u + sizeof(_g4_t_v30)) : _g4_s20,
    _g4_s22 = (161u + sizeof(_g4_t_v31)) > _g4_s21 ? (161u + sizeof(_g4_t_v31)) : _g4_s21,
    _g4_s23 = (172u + sizeof(_g4_t_v32)) > _g4_s22 ? (172u + sizeof(_g4_t_v32)) : _g4_s22,
    _g4_s24 = (176u + sizeof(_g4_t_v33)) > _g4_s23 ? (176u + sizeof(_g4_t_v33)) : _g4_s23,
    _g4_s25 = (178u + sizeof(_g4_t_v34)) > _g4_s24 ? (178u + sizeof(_g4_t_v34)) : _g4_s24,
    _g4_s26 = (179u + sizeof(_g4_t_v35)) > _g4_s25 ? (179u + sizeof(_g4_t_v35)) : _g4_s25,
    _g4_s27 = (192u + sizeof(_g4_t_v36)) > _g4_s26 ? (192u + sizeof(_g4_t_v36)) : _g4_s26,
    _g4_s28 = (193u + sizeof(_g4_t_v37)) > _g4_s27 ? (193u + sizeof(_g4_t_v37)) : _g4_s27,
    _g4_s29 = (204u + sizeof(_g4_t_v38)) > _g4_s28 ? (204u + sizeof(_g4_t_v38)) : _g4_s28,
    _g4_s30 = (208u + sizeof(_g4_t_v39)) > _g4_s29 ? (208u + sizeof(_g4_t_v39)) : _g4_s29,
    _g4_s31 = (210u + sizeof(_g4_t_v40)) > _g4_s30 ? (210u + sizeof(_g4_t_v40)) : _g4_s30,
    _g4_s32 = (211u + sizeof(_g4_t_v41)) > _g4_s31 ? (211u + sizeof(_g4_t_v41)) : _g4_s31,
    _g4_s33 = (224u + sizeof(_g4_t_v42)) > _g4_s32 ? (224u + sizeof(_g4_t_v42)) : _g4_s32,
    _g4_s34 = (225u + sizeof(_g4_t_v43)) > _g4_s33 ? (225u + sizeof(_g4_t_v43)) : _g4_s33,
    _g4_s35 = (236u + sizeof(_g4_t_v44)) > _g4_s34 ? (236u + sizeof(_g4_t_v44)) : _g4_s34,
    _g4_s36 = (240u + sizeof(_g4_t_v45)) > _g4_s35 ? (240u + sizeof(_g4_t_v45)) : _g4_s35,
    _g4_s37 = (242u + sizeof(_g4_t_v46)) > _g4_s36 ? (242u + sizeof(_g4_t_v46)) : _g4_s36,
    _g4_s38 = (243u + sizeof(_g4_t_v47)) > _g4_s37 ? (243u + sizeof(_g4_t_v47)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_Class &Class = *reinterpret_cast<_g4_t_Class *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 52u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 65u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 76u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 80u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 82u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 96u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 97u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 108u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 112u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 114u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 115u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 128u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 129u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 140u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 144u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 160u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 161u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 172u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 176u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 178u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 179u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 192u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 193u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 204u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 208u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 210u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 211u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 224u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 225u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 236u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 240u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 242u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 243u);

  v20 = 1;
  v21 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v20, 15);
  v1 = (gameswf::Self *)&v21;
  if ( v20 == -1 )
    v1 = v22;
  gameswf::Strcpy_s(v1, (char *)&word_10, (gameswf::Self *)"EventDispatcher");
  v15 = 1;
  v23 = -1;
  v16 = 0;
  v24 = 127;
  v25 |= 1u;
  gameswf::String::resize((gameswf::String::Self *)&v15, 12);
  v2 = (gameswf::Self *)&v16;
  if ( v15 == -1 )
    v2 = v17;
  gameswf::Strcpy_s(v2, &byte_9[4], (gameswf::Self *)"flash.events");
  v18 = -1;
  HIBYTE(v19) = ((uint16_t)(v19 | 0x7F) >> 8) | 1;
  LOBYTE(v19) = 127;
  Class = (gameswf::ASClass::Self *)gameswf::ASClassManager::findClass(
                                (gameswf::ASTimer::Self *)((char *)self + 236),
                                (const gameswf::String::Self *)&v15,
                                (const gameswf::String::Self *)&v20,
                                (bool)&dword_0 + 1);
  v26 = 1;
  v27 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v26, 5);
  v3 = (gameswf::Self *)&v27;
  if ( v26 == -1 )
    v3 = v28;
  gameswf::Strcpy_s(v3, (char *)&loc_6, (gameswf::Self *)"Timer");
  v11[0] = 0;
  v11[1] = 0;
  v29 |= 0x7FFFFFu;
  v4 = HIWORD(v29) & 0x7F;
  HIBYTE(v29) |= 1u;
  BYTE2(v29) = v4;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v11, (int)(uintptr_t)((int (*)(int))gameswf::ASTimer::init));
  v5 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v5,
    self,
    Class,
    (const gameswf::String::Self *)&v26,
    (gameswf::ASObject::Self *(*)(gameswf::Player::Self *))gameswf::ASTimer::newOp,
    (const gameswf::ASValue::Self *)v11,
    nullptr);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v11);
  if ( v26 == -1 && (v29 & 0x1000000) != 0 )
  {
    gameswf::free_internal(v28);
    if ( v15 != -1 )
      goto LABEL_9;
  }
  else if ( v15 != -1 )
  {
    goto LABEL_9;
  }
  if ( (v19 & 0x100) != 0 )
  {
    gameswf::free_internal(v17);
    if ( v20 != -1 )
      goto LABEL_10;
    goto LABEL_24;
  }
LABEL_9:
  if ( v20 == -1 )
  {
LABEL_24:
    if ( (v25 & 1) != 0 )
      gameswf::free_internal(v22);
  }
LABEL_10:
  v12[0] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v12, (int)(uintptr_t)(gameswf::ASTimer::start));
  v30 = 1;
  v31 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v30, 5);
  v6 = (gameswf::Self *)&v31;
  if ( v30 == -1 )
    v6 = v32;
  gameswf::Strcpy_s(v6, (char *)&loc_6, (gameswf::Self *)"start");
  v33 = -1;
  v34 = 127;
  v35 |= 1u;
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v5, (const gameswf::String::Self *)&v30, (const gameswf::ASValue::Self *)v12);
  if ( v30 == -1 && (v35 & 1) != 0 )
    gameswf::free_internal(v32);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v12);
  v13[0] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v13, (int)(uintptr_t)(gameswf::ASTimer::stop));
  v36 = 1;
  v37 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v36, 4);
  v7 = (gameswf::Self *)&v37;
  if ( v36 == -1 )
    v7 = v38;
  gameswf::Strcpy_s(v7, (char *)&loc_4 + 1, (gameswf::Self *)"stop");
  v39 = -1;
  v40 = 127;
  v41 |= 1u;
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v5, (const gameswf::String::Self *)&v36, (const gameswf::ASValue::Self *)v13);
  if ( v36 == -1 && (v41 & 1) != 0 )
    gameswf::free_internal(v38);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v13);
  v14[0] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v14, (int)(uintptr_t)(gameswf::ASTimer::reset));
  v42 = 1;
  v43 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v42, 5);
  v8 = (gameswf::Self *)&v43;
  if ( v42 == -1 )
    v8 = v44;
  gameswf::Strcpy_s(v8, (char *)&loc_6, (gameswf::Self *)"reset");
  v45 = -1;
  v46 = 127;
  v47 |= 1u;
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v5, (const gameswf::String::Self *)&v42, (const gameswf::ASValue::Self *)v14);
  if ( v42 == -1 && (v47 & 1) != 0 )
    gameswf::free_internal(v44);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v14);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimer::Construct  (binary VA: 0x114ac00)
// Original: gameswf::ASTimer::ASTimer
// ----------------------------------------------------------------------------
int gameswf::ASTimer::Construct(gameswf::Self **a1, gameswf::ASValue::Self *a2, gameswf::ASValue::Self *a3, int64_t a4, int a5, int a6)
{
  int v6;
  int v7;
  gameswf::Player::Self *v8;
  gameswf::Self *v9;
  float v10; // xmm0_4
  int v11;
  int v12;
  gameswf::ASValue::Self *v13;
  int v14;
  int v15;
  int v16;
  int Root;
  gameswf::Self *v19;
  gameswf::Self *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;

  v6 = a5;
  v7 = *(uint32_t *)(a5 + 12);
  v8 = *(gameswf::Player::Self **)(v7 + 212);
  if ( v8 != nullptr )
  {
    v9 = *(gameswf::Self **)(v7 + 208);
    if ( *((uint8_t *)v9 + 2) == 0 )
    {
      if ( (*(uint16_t *)v9)-- == 1 )
      {
        gameswf::free_internal(v9);
        v6 = a5;
      }
      *(uint32_t *)(v7 + 208) = 0;
      *(uint32_t *)(v7 + 212) = 0;
      v8 = nullptr;
    }
  }
  v22 = v6;
  gameswf::ASEventDispatcher::ASEventDispatcher((gameswf::ASEventDispatcher::Self *)a1, v8);
  v10 = *(double *)&a4;
  *((uint8_t *)a1 + 48) = 1;
  *a1 = (gameswf::Self *)((uint32_t)(uintptr_t)&off_2090308);
  a1[14] = nullptr;
  a1[15] = nullptr;
  *((uint8_t *)a1 + 64) = 0;
  *((float *)a1 + 13) = v10 * 0.001f;
  *((uint8_t *)a1 + 65) = 0;
  gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(a1 + 16), a2);
  *((uint8_t *)a1 + 76) = 0;
  *((uint8_t *)a1 + 77) = 0;
  gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(a1 + 19), a3);
  a1[22] = nullptr;
  a1[23] = nullptr;
  a1[24] = nullptr;
  a1[25] = nullptr;
  a1[26] = nullptr;
  v11 = v22;
  if ( a6 < *(uint32_t *)(v22 + 16) )
  {
    v26 = 0;
    v12 = 0;
    v21 = nullptr;
    v27 = a6;
    while ( 1 )
    {
      v14 = *(uint32_t *)(v11 + 20);
      v28 = **(uint32_t **)(v11 + 12);
      v15 = v12 + 1;
      if ( v12 + 1 > v26 && a1[26] == nullptr )
      {
        v16 = v15 + (v15 >> 1);
        a1[25] = (gameswf::Self *)v16;
        if ( v16 != 0 )
        {
          v25 = v11;
          if ( v21 != nullptr )
            v19 = (gameswf::Self *)gameswf::realloc_internal(v21, 12 * v16, 12 * v26);
          else
            v19 = (gameswf::Self *)gameswf::malloc_internal(12 * v16);
          a1[23] = v19;
          v21 = v19;
          v12 = (int)(uintptr_t)(a1[24]);
          v11 = v25;
        }
        else
        {
          if ( v21 != nullptr )
          {
            v24 = v11;
            gameswf::free_internal(v21);
            v12 = (int)(uintptr_t)(a1[24]);
            v11 = v24;
          }
          a1[23] = nullptr;
          v21 = nullptr;
        }
      }
      v13 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v21 + 12 * v12));
      if ( v13 != nullptr )
      {
        *(uint8_t *)v13 = 0;
        *((uint8_t *)v13 + 1) = 0;
        v23 = v11;
        gameswf::ASValue::opAssign(v13, (const gameswf::ASValue::Self *)(v28 + 12 * (v14 - v27)));
        v11 = v23;
      }
      ++v27;
      a1[24] = (gameswf::Self *)v15;
      if ( *(uint32_t *)(v11 + 16) <= v27 )
        break;
      v26 = (int)(uintptr_t)(a1[25]);
      v21 = a1[23];
      v12 = v15;
    }
  }
  Root = gameswf::ASObject::getRoot(a1);
  return ((gameswf::Listener::add((gameswf::Listener::Self *)(Root + 260), (gameswf::ASObject::Self *)a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimer::Construct  (binary VA: 0x114aed0)
// Original: gameswf::ASTimer::ASTimer
// ----------------------------------------------------------------------------
gameswf::ASTimer::Self * gameswf::ASTimer::Construct(gameswf::ASTimer::Self *self, gameswf::Player::Self *a2, double a3, int a4)
{
  float v4; // xmm0_4
  int Root;

  gameswf::ASEventDispatcher::ASEventDispatcher(self, a2);
  v4 = a3;
  *((uint8_t *)self + 48) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090308);
  *((uint32_t *)self + 14) = a4;
  *((uint32_t *)self + 15) = 0;
  *((float *)self + 13) = v4 * 0.001f;
  *((uint8_t *)self + 64) = 5;
  *((uint8_t *)self + 65) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint8_t *)self + 76) = 5;
  *((uint8_t *)self + 77) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  Root = gameswf::ASObject::getRoot((gameswf::Player::Self **)self);
  return (gameswf::Listener::add((gameswf::Listener::Self *)(Root + 260), self), (gameswf::ASTimer::Self *)0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimer::newOp  (binary VA: 0x114afa0)
// Original: gameswf::ASTimer::newOp
// ----------------------------------------------------------------------------
gameswf::ASTimer::Self * gameswf::ASTimer::newOp(gameswf::ASTimer::Self *self)
{
  gameswf::ASTimer::Self *v1;

  v1 = (gameswf::ASTimer::Self *)opNew(0x6Cu);
  gameswf::ASTimer::Construct(v1, self, 0.0, 0);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimer::clear  (binary VA: 0x114b000)
// Original: gameswf::ASTimer::clear
// ----------------------------------------------------------------------------
int gameswf::ASTimer::clear(gameswf::Player::Self **self)
{
  int Root;

  Root = gameswf::ASObject::getRoot(self);
  return (int)(uintptr_t)(gameswf::Listener::remove((gameswf::Listener::Self *)(Root + 260), (gameswf::ASObject::Self *)self));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimer::thisAlive  (binary VA: 0x114b050)
// Original: gameswf::ASTimer::thisAlive
// ----------------------------------------------------------------------------
int gameswf::ASTimer::thisAlive(gameswf::ASTimer::Self *self)
{
  int result;
  int v2;
  int v3;
  int v4;
  int v5;
  gameswf::Self *v6;
  char hasEventListener;
  char v8;
  gameswf::Self *v9;
  char v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  typedef int _g4_t_v17;
  typedef gameswf::Self *_g4_t_v18;
  typedef int16_t _g4_t_v19;
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef int _g4_t_v24;
  typedef gameswf::Self *_g4_t_v25;
  typedef int16_t _g4_t_v26;
  typedef char _g4_t_v27;
  typedef char _g4_t_v28;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v12)) > _g4_s1 ? (28u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v13)) > _g4_s2 ? (28u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v14)) > _g4_s3 ? (28u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v15)) > _g4_s4 ? (32u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (33u + sizeof(_g4_t_v16)) > _g4_s5 ? (33u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v17)) > _g4_s6 ? (40u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v18)) > _g4_s7 ? (44u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v19)) > _g4_s8 ? (48u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (50u + sizeof(_g4_t_v20)) > _g4_s9 ? (50u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (51u + sizeof(_g4_t_v21)) > _g4_s10 ? (51u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v22)) > _g4_s11 ? (64u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (65u + sizeof(_g4_t_v23)) > _g4_s12 ? (65u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v24)) > _g4_s13 ? (72u + sizeof(_g4_t_v24)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v25)) > _g4_s14 ? (76u + sizeof(_g4_t_v25)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v26)) > _g4_s15 ? (80u + sizeof(_g4_t_v26)) : _g4_s15,
    _g4_s17 = (82u + sizeof(_g4_t_v27)) > _g4_s16 ? (82u + sizeof(_g4_t_v27)) : _g4_s16,
    _g4_s18 = (83u + sizeof(_g4_t_v28)) > _g4_s17 ? (83u + sizeof(_g4_t_v28)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 33u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 50u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 51u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 65u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 72u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 76u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 80u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 82u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 83u);

  if ( *(uint8_t *)(*((uint32_t *)self + 4) + 232) != 0 && *((uint32_t *)self + 1) == 1 )
  {
    v15 = 1;
    v16 = 0;
    gameswf::String::resize((gameswf::String::Self *)&v15, 5);
    v6 = (gameswf::Self *)&v16;
    if ( v15 == -1 )
      v6 = v18;
    gameswf::Strcpy_s(v6, (char *)&loc_6, (gameswf::Self *)"timer");
    v19 = -1;
    v20 = 127;
    v21 |= 1u;
    hasEventListener = gameswf::ASEventDispatcher::hasEventListener(self, (const gameswf::String::Self *)&v15);
    v8 = 0;
    if ( hasEventListener == 0 )
    {
      v22 = 1;
      v23 = 0;
      gameswf::String::resize((gameswf::String::Self *)&v22, 13);
      v9 = (gameswf::Self *)&v23;
      if ( v22 == -1 )
        v9 = v25;
      gameswf::Strcpy_s(v9, &byte_9[5], (gameswf::Self *)"timerComplete");
      v26 = -1;
      v27 = 127;
      v28 |= 1u;
      v10 = gameswf::ASEventDispatcher::hasEventListener(self, (const gameswf::String::Self *)&v22);
      v8 = v10 ^ 1;
      if ( v22 == -1 && (v28 & 1) != 0 )
      {
        v14 = v10 ^ 1;
        v11 = v24;
        gameswf::free_internal(v25);
        v8 = v14;
      }
    }
    if ( v15 == -1 && (v21 & 1) != 0 )
    {
      v13 = v8;
      v11 = v17;
      gameswf::free_internal(v18);
      v8 = v13;
    }
    if ( v8 != 0 )
      return gameswf::ASTimer::clear((gameswf::Player::Self **)self);
  }
  result = (int)(uintptr_t)(gameswf::ASEventDispatcher::thisAlive(self));
  if ( *((uint8_t *)self + 64) == 5 && (result = *((uint32_t *)self + 17)) != 0 )
  {
    result = (*(int (**)(uint32_t, int))(*(uint32_t *)result + 76))(*((uint32_t *)self + 17), v11);
    if ( *((uint8_t *)self + 76) != 5 )
      goto LABEL_5;
  }
  else if ( *((uint8_t *)self + 76) != 5 )
  {
    goto LABEL_5;
  }
  result = *((uint32_t *)self + 20);
  if ( result != 0 )
    result = (*(int (**)(uint32_t))(*(uint32_t *)result + 76))(*((uint32_t *)self + 20));
LABEL_5:
  v2 = *((uint32_t *)self + 24);
  if ( v2 > 0 )
  {
    result = 0;
    v3 = 0;
    do
    {
      while ( 1 )
      {
        v4 = *((uint32_t *)self + 23) + result;
        if ( *(uint8_t *)v4 == 5 )
        {
          v5 = *(uint32_t *)(v4 + 4);
          if ( v5 != 0 )
            break;
        }
        ++v3;
        result += 12;
        if ( v3 >= v2 )
          return result;
      }
      ++v3;
      v12 = result;
      G4_VCALL<void>(v5, 76);
      v2 = *((uint32_t *)self + 24);
      result = v12 + 12;
    }
    while ( v3 < v2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimer::advance  (binary VA: 0x114b290)
// Original: gameswf::ASTimer::advance
// ----------------------------------------------------------------------------
void gameswf::ASTimer::advance(gameswf::ASTimer::Self *self, float a2)
{
  gameswf::ASTimer::Self *v2;
  float v3; // xmm0_4
  bool v4;
  gameswf::RefCounted::Self *v5;
  unsigned int v6;
  gameswf::Self *WeakProxy;
  gameswf::Self *v8;
  bool v9;
  gameswf::ASValue::Self *v10;
  int v11;
  int v12;
  gameswf::Self *v13;
  gameswf::ASValue::Self *v14;
  int v15;
  int v16;
  gameswf::Self *v17;
  gameswf::Self *v18;
  int v19;
  gameswf::ASValue::Self *v20;
  gameswf::Self **v21;
  int v22;
  gameswf::ASValue::Self *v23;
  int i;
  int v25;
  gameswf::ASValue::Self *v26;
  int j;
  gameswf::Player::Self *v28;
  gameswf::Self *v29;
  int TimerEvent;
  int v31;
  gameswf::Player::Self *v32;
  gameswf::Self *v33;
  int v34;
  char *v35;
  int v36;
  int v37;
  char *v38;
  int v39;
  char *v40;
  typedef int _g4_t_v41;
  typedef gameswf::ASValue::Self *_g4_t_v42;
  typedef gameswf::ASValue::Self *_g4_t_v43;
  typedef gameswf::ASValue::Self *_g4_t_v44;
  typedef gameswf::ASValue::Self *_g4_t_v45;
  typedef gameswf::ASValue::Self *_g4_t_v46;
  typedef gameswf::ASValue::Self *_g4_t_v47;
  typedef gameswf::ASValue::Self *_g4_t_v48;
  typedef gameswf::ASTimer::Self *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef gameswf::Self *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef gameswf::ASValue::Self *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef void (*_g4_t_v57)(gameswf::ASTimer::Self *, int);
  typedef void (*_g4_t_v58)(gameswf::ASTimer::Self *, int);
  typedef uint8_t _g4_t_v59[12];
  typedef uint8_t _g4_t_v60[12];
  typedef char _g4_t_v61;
  typedef char _g4_t_v62;
  typedef gameswf::Self *_g4_t_v63;
  typedef int16_t _g4_t_v64;
  typedef char _g4_t_v65;
  typedef char _g4_t_v66;
  typedef char _g4_t_v67;
  typedef char _g4_t_v68;
  typedef gameswf::Self *_g4_t_v69;
  typedef int16_t _g4_t_v70;
  typedef char _g4_t_v71;
  typedef char _g4_t_v72;
  typedef gameswf::Self *_g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef char _g4_t_v77;
  typedef uint8_t _g4_t_v78[12];
  typedef uint8_t _g4_t_v79[12];
  typedef uint8_t _g4_t_v80[12];
  typedef uint8_t _g4_t_v81[12];
  typedef gameswf::Self *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef gameswf::RefCounted::Self *_g4_t_v86;
  typedef uint8_t _g4_t_v87[12];
  typedef gameswf::Self *_g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef gameswf::Self *_g4_t_v92;
  typedef gameswf::RefCounted::Self *_g4_t_v93;
  typedef gameswf::ASTimer::Self **_g4_t_v94;
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (0u + sizeof(_g4_t_v41)) > _g4_s0 ? (0u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v42)) > _g4_s1 ? (4u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v43)) > _g4_s2 ? (4u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v44)) > _g4_s3 ? (4u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v45)) > _g4_s4 ? (4u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v46)) > _g4_s5 ? (4u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v47)) > _g4_s6 ? (4u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v48)) > _g4_s7 ? (8u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v49)) > _g4_s8 ? (12u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v50)) > _g4_s9 ? (16u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v51)) > _g4_s10 ? (20u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v52)) > _g4_s11 ? (20u + sizeof(_g4_t_v52)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v53)) > _g4_s12 ? (24u + sizeof(_g4_t_v53)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v54)) > _g4_s13 ? (24u + sizeof(_g4_t_v54)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v55)) > _g4_s14 ? (24u + sizeof(_g4_t_v55)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v56)) > _g4_s15 ? (24u + sizeof(_g4_t_v56)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v57)) > _g4_s16 ? (24u + sizeof(_g4_t_v57)) : _g4_s16,
    _g4_s18 = (24u + sizeof(_g4_t_v58)) > _g4_s17 ? (24u + sizeof(_g4_t_v58)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v59)) > _g4_s18 ? (36u + sizeof(_g4_t_v59)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v60)) > _g4_s19 ? (48u + sizeof(_g4_t_v60)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v61)) > _g4_s20 ? (60u + sizeof(_g4_t_v61)) : _g4_s20,
    _g4_s22 = (61u + sizeof(_g4_t_v62)) > _g4_s21 ? (61u + sizeof(_g4_t_v62)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v63)) > _g4_s22 ? (72u + sizeof(_g4_t_v63)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v64)) > _g4_s23 ? (76u + sizeof(_g4_t_v64)) : _g4_s23,
    _g4_s25 = (78u + sizeof(_g4_t_v65)) > _g4_s24 ? (78u + sizeof(_g4_t_v65)) : _g4_s24,
    _g4_s26 = (79u + sizeof(_g4_t_v66)) > _g4_s25 ? (79u + sizeof(_g4_t_v66)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v67)) > _g4_s26 ? (92u + sizeof(_g4_t_v67)) : _g4_s26,
    _g4_s28 = (93u + sizeof(_g4_t_v68)) > _g4_s27 ? (93u + sizeof(_g4_t_v68)) : _g4_s27,
    _g4_s29 = (104u + sizeof(_g4_t_v69)) > _g4_s28 ? (104u + sizeof(_g4_t_v69)) : _g4_s28,
    _g4_s30 = (108u + sizeof(_g4_t_v70)) > _g4_s29 ? (108u + sizeof(_g4_t_v70)) : _g4_s29,
    _g4_s31 = (110u + sizeof(_g4_t_v71)) > _g4_s30 ? (110u + sizeof(_g4_t_v71)) : _g4_s30,
    _g4_s32 = (111u + sizeof(_g4_t_v72)) > _g4_s31 ? (111u + sizeof(_g4_t_v72)) : _g4_s31,
    _g4_s33 = (124u + sizeof(_g4_t_v73)) > _g4_s32 ? (124u + sizeof(_g4_t_v73)) : _g4_s32,
    _g4_s34 = (128u + sizeof(_g4_t_v74)) > _g4_s33 ? (128u + sizeof(_g4_t_v74)) : _g4_s33,
    _g4_s35 = (132u + sizeof(_g4_t_v75)) > _g4_s34 ? (132u + sizeof(_g4_t_v75)) : _g4_s34,
    _g4_s36 = (136u + sizeof(_g4_t_v76)) > _g4_s35 ? (136u + sizeof(_g4_t_v76)) : _g4_s35,
    _g4_s37 = (140u + sizeof(_g4_t_v77)) > _g4_s36 ? (140u + sizeof(_g4_t_v77)) : _g4_s36,
    _g4_s38 = (236u + sizeof(_g4_t_v78)) > _g4_s37 ? (236u + sizeof(_g4_t_v78)) : _g4_s37,
    _g4_s39 = (248u + sizeof(_g4_t_v79)) > _g4_s38 ? (248u + sizeof(_g4_t_v79)) : _g4_s38,
    _g4_s40 = (260u + sizeof(_g4_t_v80)) > _g4_s39 ? (260u + sizeof(_g4_t_v80)) : _g4_s39,
    _g4_s41 = (272u + sizeof(_g4_t_v81)) > _g4_s40 ? (272u + sizeof(_g4_t_v81)) : _g4_s40,
    _g4_s42 = (284u + sizeof(_g4_t_v82)) > _g4_s41 ? (284u + sizeof(_g4_t_v82)) : _g4_s41,
    _g4_s43 = (288u + sizeof(_g4_t_v83)) > _g4_s42 ? (288u + sizeof(_g4_t_v83)) : _g4_s42,
    _g4_s44 = (292u + sizeof(_g4_t_v84)) > _g4_s43 ? (292u + sizeof(_g4_t_v84)) : _g4_s43,
    _g4_s45 = (296u + sizeof(_g4_t_v85)) > _g4_s44 ? (296u + sizeof(_g4_t_v85)) : _g4_s44,
    _g4_s46 = (300u + sizeof(_g4_t_v86)) > _g4_s45 ? (300u + sizeof(_g4_t_v86)) : _g4_s45,
    _g4_s47 = (304u + sizeof(_g4_t_v87)) > _g4_s46 ? (304u + sizeof(_g4_t_v87)) : _g4_s46,
    _g4_s48 = (316u + sizeof(_g4_t_v88)) > _g4_s47 ? (316u + sizeof(_g4_t_v88)) : _g4_s47,
    _g4_s49 = (320u + sizeof(_g4_t_v89)) > _g4_s48 ? (320u + sizeof(_g4_t_v89)) : _g4_s48,
    _g4_s50 = (324u + sizeof(_g4_t_v90)) > _g4_s49 ? (324u + sizeof(_g4_t_v90)) : _g4_s49,
    _g4_s51 = (328u + sizeof(_g4_t_v91)) > _g4_s50 ? (328u + sizeof(_g4_t_v91)) : _g4_s50,
    _g4_s52 = (332u + sizeof(_g4_t_v92)) > _g4_s51 ? (332u + sizeof(_g4_t_v92)) : _g4_s51,
    _g4_s53 = (336u + sizeof(_g4_t_v93)) > _g4_s52 ? (336u + sizeof(_g4_t_v93)) : _g4_s52,
    _g4_s54 = (356u + sizeof(_g4_t_v94)) > _g4_s53 ? (356u + sizeof(_g4_t_v94)) : _g4_s53
  };
  alignas(16) uint8_t _g4_sf[_g4_s54];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 0u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 4u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 12u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 20u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 24u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 24u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 24u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 36u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 48u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 60u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 61u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 72u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 76u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 78u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 79u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 92u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 93u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 104u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 108u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 110u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 111u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 124u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 128u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 132u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 136u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 140u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 236u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 248u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 260u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 272u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 284u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 288u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 292u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 296u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 300u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 304u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 316u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 320u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 324u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 328u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 332u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 336u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 356u);

  v94 = &self;
  v2 = self;
  if ( *((uint8_t *)self + 48) != 0 )
  {
    v3 = a2 + *((float *)self + 22);
    v4 = v3 < *((float *)self + 13);
    *((float *)self + 22) = v3;
    if ( !v4 )
    {
      if ( *((uint8_t *)v2 + 64) == 5 )
      {
        v16 = *((uint32_t *)v2 + 17);
        if ( v16 != 0
          && G4_VCALL<uint8_t>(v16, 8, 1) != 0
          && *(uint16_t *)(v16 + 140) == 0 )
        {
          if ( *(uint32_t *)(v16 + 56) != 0 )
          {
            v17 = *(gameswf::Self **)(v16 + 52);
            if ( *((uint8_t *)v17 + 2) != 0 )
            {
LABEL_31:
              gameswf::ASTimer::clear((gameswf::Player::Self **)v2);
              return;
            }
            v9 = (*(uint16_t *)v17)-- == 1;
            if ( v9 )
              gameswf::free_internal(v17);
            *(uint32_t *)(v16 + 52) = 0;
            *(uint32_t *)(v16 + 56) = 0;
          }
          if ( *(uint32_t *)(v16 + 48) != -1 )
            goto LABEL_31;
        }
      }
      v5 = *((gameswf::RefCounted::Self **)v2 + 4);
      *((uint32_t *)v2 + 22) = 0;
      if ( *((uint8_t *)v5 + 232) != 0 )
      {
        v28 = *(gameswf::Player::Self **)v2;
        ++*((uint32_t *)v2 + 15);
        v61 = 1;
        v62 = 0;
        v57 = *((void (**)(gameswf::ASTimer::Self *, int))v28 + 26);
        gameswf::String::resize((gameswf::String::Self *)&v61, 5);
        v29 = (gameswf::Self *)&v62;
        if ( v61 == -1 )
          v29 = v63;
        gameswf::Strcpy_s(v29, (char *)&loc_6, (gameswf::Self *)"timer");
        v64 = -1;
        v65 = 127;
        v66 |= 1u;
        TimerEvent = gameswf::AS3Engine::getTimerEvent(
                       (gameswf::AS3Engine::Self *)(*((uint32_t *)v2 + 4) + 236),
                       (const gameswf::String::Self *)&v61);
        v57(v2, TimerEvent);
        if ( v61 == -1 && (v66 & 1) != 0 )
          gameswf::free_internal(v63);
        v31 = *((uint32_t *)v2 + 14);
        if ( *((uint32_t *)v2 + 15) >= v31 && v31 > 0 )
        {
          v32 = *(gameswf::Player::Self **)v2;
          v67 = 1;
          v68 = 0;
          v58 = *((void (**)(gameswf::ASTimer::Self *, int))v32 + 26);
          gameswf::String::resize((gameswf::String::Self *)&v67, 13);
          v33 = (gameswf::Self *)&v68;
          if ( v67 == -1 )
            v33 = v69;
          gameswf::Strcpy_s(v33, &byte_9[5], (gameswf::Self *)"timerComplete");
          v70 = -1;
          v71 = 127;
          v72 |= 1u;
          v34 = gameswf::AS3Engine::getTimerEvent(
                  (gameswf::AS3Engine::Self *)(*((uint32_t *)v2 + 4) + 236),
                  (const gameswf::String::Self *)&v67);
          v58(v2, v34);
          if ( v67 == -1 && (v72 & 1) != 0 )
            gameswf::free_internal(v69);
          goto LABEL_31;
        }
      }
      else
      {
        v6 = *((uint32_t *)v2 + 24);
        v73 = nullptr;
        v74 = 0;
        v75 = 0;
        v76 = 0;
        if ( v6 <= 8 )
        {
          v75 = 8;
          v73 = (gameswf::Self *)&v77;
          v76 = 1;
        }
        v78[0] = 0;
        v78[1] = 0;
        v79[0] = 0;
        v79[1] = 0;
        v80[0] = 0;
        v80[1] = 0;
        v81[0] = 0;
        v81[1] = 0;
        v82 = nullptr;
        v83 = 0;
        v84 = 0;
        v85 = 0;
        v86 = nullptr;
        v87[0] = 0;
        v87[1] = 0;
        v88 = nullptr;
        v89 = 0;
        v90 = 0;
        v91 = 0;
        v92 = nullptr;
        v93 = v5;
        WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v5);
        v8 = v92;
        if ( WeakProxy != v92 )
        {
          if ( v92 != nullptr )
          {
            v9 = (*(uint16_t *)v92)-- == 1;
            if ( v9 )
            {
              v48 = (gameswf::ASValue::Self *)(WeakProxy);
              gameswf::free_internal(v8);
              WeakProxy = (gameswf::Self *)(v48);
            }
          }
          v92 = WeakProxy;
          if ( WeakProxy != nullptr )
            ++*(uint16_t *)WeakProxy;
        }
        v50 = *((uint32_t *)v2 + 24);
        if ( v50 > 0 )
        {
          v10 = nullptr;
          v49 = v2;
          v11 = v74;
          v12 = 0;
          while ( 1 )
          {
            v15 = v11 + 1;
            v53 = *((uint32_t *)v49 + 23);
            v41 = v75;
            if ( v11 + 1 <= v75 || v76 != 0 )
            {
              v13 = v73;
            }
            else
            {
              v51 = v15 + (v15 >> 1);
              v75 = v51;
              if ( v51 != 0 )
              {
                v47 = v10;
                v13 = v73 != nullptr
                    ? (gameswf::Self *)gameswf::realloc_internal(v73, 12 * v51, 12 * v41)
                    : (gameswf::Self *)gameswf::malloc_internal(12 * v51);
                v73 = v13;
                v11 = v74;
                v10 = v47;
              }
              else
              {
                if ( v73 != nullptr )
                {
                  v43 = v10;
                  gameswf::free_internal(v73);
                  v11 = v74;
                  v10 = v43;
                }
                v73 = nullptr;
                v13 = nullptr;
              }
            }
            v14 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v13 + 12 * v11));
            if ( v14 != nullptr )
            {
              *(uint8_t *)v14 = 0;
              *((uint8_t *)v14 + 1) = 0;
              v42 = v10;
              gameswf::ASValue::opAssign(v14, (gameswf::ASValue::Self *)((char *)v10 + v53));
              v10 = v42;
            }
            ++v12;
            v10 = (gameswf::ASValue::Self *)((char *)v10 + 12);
            v74 = v15;
            if ( v12 == v50 )
              break;
            v11 = v15;
          }
          v2 = v49;
        }
        v59[0] = 0;
        v59[1] = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v59, (gameswf::ASTimer::Self *)((char *)v2 + 64));
        gameswf::call_method(
          (gameswf::Self *)v60,
          (gameswf::ASTimer::Self *)((char *)v2 + 76),
          (gameswf::ASEnvironment::Self *)&v73,
          (const gameswf::ASValue::Self *)v59,
          v50,
          v74 - 1,
          "timer");
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v60);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v59);
        v18 = v92;
        if ( v92 != nullptr )
        {
          v9 = (*(uint16_t *)v92)-- == 1;
          if ( v9 )
            gameswf::free_internal(v18);
        }
        v19 = v89;
        if ( v89 <= 0 )
        {
          if ( v89 < 0 )
          {
            v52 = (gameswf::Self *)(32 * v89);
            do
            {
              v35 = (char *)v52 + (uint32_t)(uintptr_t)(v88);
              if ( (gameswf::Self *)((char *)v52 + (uint32_t)(uintptr_t)(v88)) != nullptr )
              {
                v36 = *((uint32_t *)v35 + 4);
                *v35 = 1;
                v36 |= 0x7FFFFFu;
                v35[1] = 0;
                *((uint32_t *)v35 + 4) = v36;
                v35[20] = 0;
                v35[18] = BYTE2(v36) & 0x7F;
                v35[19] = HIBYTE(v36) | 1;
                v35[21] = 0;
              }
              v52 = (gameswf::Self *)((char *)v52 + 32);
              ++v19;
            }
            while ( v19 != 0 );
          }
        }
        else
        {
          v20 = nullptr;
          v54 = (gameswf::ASValue::Self *)v89;
          do
          {
            while ( 1 )
            {
              v21 = (gameswf::Self **)((char *)v88 + 32 * (uint32_t)(uintptr_t)(v20));
              v44 = v20;
              gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v21 + 5));
              if ( *(uint8_t *)v21 == 0xFF && (*((uint8_t *)v21 + 19) & 1) != 0 )
                break;
              v20 = (gameswf::ASValue::Self *)((char *)v44 + 1);
              if ( (gameswf::ASValue::Self *)((char *)v44 + 1) == v54 )
                goto LABEL_43;
            }
            gameswf::free_internal(v21[3]);
            v20 = (gameswf::ASValue::Self *)((char *)v44 + 1);
          }
          while ( (gameswf::ASValue::Self *)((char *)v44 + 1) != v54 );
        }
LABEL_43:
        v89 = 0;
        if ( v91 == 0 )
        {
          v90 = 0;
          if ( v88 != nullptr )
            gameswf::free_internal(v88);
          v88 = nullptr;
        }
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v87);
        if ( v86 != nullptr )
          gameswf::RefCounted::dropRef(v86);
        v22 = v83;
        if ( v83 <= 0 )
        {
          if ( v83 < 0 )
          {
            v39 = 12 * v83;
            do
            {
              v40 = (char *)v82 + v39;
              if ( (gameswf::Self *)((char *)v82 + v39) != nullptr )
              {
                *v40 = 0;
                v40[1] = 0;
              }
              v39 += 12;
              ++v22;
            }
            while ( v22 != 0 );
          }
        }
        else
        {
          v55 = v83;
          v23 = nullptr;
          for ( i = 0; i != v55; ++i )
          {
            v45 = v23;
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)((char *)v82 + (uint32_t)(uintptr_t)(v23)));
            v23 = (gameswf::ASValue::Self *)((char *)v45 + 12);
          }
        }
        v83 = 0;
        if ( v85 == 0 )
        {
          v84 = 0;
          if ( v82 != nullptr )
            gameswf::free_internal(v82);
          v82 = nullptr;
        }
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v81);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v80);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v79);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v78);
        v25 = v74;
        if ( v74 <= 0 )
        {
          if ( v74 < 0 )
          {
            v37 = 12 * v74;
            do
            {
              v38 = (char *)v73 + v37;
              if ( (gameswf::Self *)((char *)v73 + v37) != nullptr )
              {
                *v38 = 0;
                v38[1] = 0;
              }
              v37 += 12;
              ++v25;
            }
            while ( v25 != 0 );
          }
        }
        else
        {
          v56 = v74;
          v26 = nullptr;
          for ( j = 0; j != v56; ++j )
          {
            v46 = v26;
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)((char *)v73 + (uint32_t)(uintptr_t)(v26)));
            v26 = (gameswf::ASValue::Self *)((char *)v46 + 12);
          }
        }
        v74 = 0;
        if ( v76 == 0 )
        {
          v75 = 0;
          if ( v73 != nullptr )
            gameswf::free_internal(v73);
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimer::is  (binary VA: 0x114bbd0)
// Original: gameswf::ASTimer::is
// ----------------------------------------------------------------------------
bool gameswf::ASTimer::is(gameswf::ASTimer::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 43 && a2 != 57 )
    return a2 == 0;
  return result;
}


