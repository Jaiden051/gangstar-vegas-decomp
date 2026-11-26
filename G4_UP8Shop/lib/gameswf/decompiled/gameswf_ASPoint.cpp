#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASPoint.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASPoint::normalize  (binary VA: 0x113cdc0)
// Original: gameswf::ASPoint::normalize
// ----------------------------------------------------------------------------
void gameswf::ASPoint::normalize(int a1)
{
  float *v1;
  float v2; // xmm4_4
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm3_4
  float v7; // xmm0_4

  if ( *(int *)(a1 + 16) > 0 )
  {
    v1 = *(float **)(a1 + 4);
    if ( v1 != nullptr && G4_VCALL<uint8_t>(v1, 8, 29) != 0 )
    {
      v2 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
      if ( v2 != 0.0 )
      {
        v3 = v1[10];
        v4 = v1[11];
        v5 = (float)(v4 * v4) + (float)(v3 * v3);
        v6 = 1.0 / fsqrt(v5);
        v7 = (float)((float)((float)((float)(v5 * v6) * v6) + -3.0) * (float)(v6 * -0.5)) * v2;
        v1[10] = v3 * v7;
        v1[11] = v7 * v4;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASPoint::getStandardMember  (binary VA: 0x113cea0)
// Original: gameswf::ASPoint::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASPoint::getStandardMember(int a1, int a2, gameswf::ASValue::Self *a3)
{
  float Length;

  switch ( a2 )
  {
    case 0:
      gameswf::ASValue::setDouble(a3, *(float *)(a1 + 40));
      return 1;
    case 1:
      gameswf::ASValue::setDouble(a3, *(float *)(a1 + 44));
      return 1;
    case 47:
      Length = gameswf::Point::getLength((gameswf::Point::Self *)(a1 + 40));
      gameswf::ASValue::setDouble(a3, Length);
      return 1;
    default:
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASPoint::setStandardMember  (binary VA: 0x113cf80)
// Original: gameswf::ASPoint::setStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASPoint::setStandardMember(int a1, int a2, gameswf::ASValue::Self *a3)
{
  float v4; // xmm0_4
  float v5; // xmm0_4

  if ( a2 != 0 )
  {
    if ( a2 == 1 )
    {
      v5 = gameswf::ASValue::toNumber(a3);
      *(float *)(a1 + 44) = v5;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v4 = gameswf::ASValue::toNumber(a3);
    *(float *)(a1 + 40) = v4;
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASPoint::init  (binary VA: 0x113d020)
// Original: gameswf::ASPoint::init
// ----------------------------------------------------------------------------
void gameswf::ASPoint::init(int a1)
{
  float *v1;
  float v2; // xmm0_4
  float v3; // xmm0_4

  v1 = *(float **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 29) == 0 )
    v1 = nullptr;
  v1[10] = 0.0;
  v1[11] = 0.0;
  if ( *(uint32_t *)(a1 + 16) == 2 )
  {
    v2 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v1[10] = v2;
    v3 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
    v1[11] = v3;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASPoint::Construct  (binary VA: 0x113d0e0)
// Original: gameswf::ASPoint::ASPoint
// ----------------------------------------------------------------------------
gameswf::ASPoint::Self * gameswf::ASPoint::Construct(gameswf::ASPoint::Self *self, gameswf::Player::Self *a2, float a3, float a4)
{
  gameswf::Self *v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  typedef uint8_t _g4_t_v8[12];
  typedef uint8_t _g4_t_v9[12];
  typedef uint8_t _g4_t_v10[12];
  typedef char _g4_t_v11;
  typedef char _g4_t_v12;
  typedef gameswf::Self *_g4_t_v13;
  typedef int16_t _g4_t_v14;
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  typedef gameswf::Self *_g4_t_v19;
  typedef int16_t _g4_t_v20;
  typedef char _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef gameswf::Self *_g4_t_v25;
  typedef int16_t _g4_t_v26;
  typedef char _g4_t_v27;
  typedef char _g4_t_v28;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v11)) > _g4_s3 ? (36u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (37u + sizeof(_g4_t_v12)) > _g4_s4 ? (37u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v13)) > _g4_s5 ? (48u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v14)) > _g4_s6 ? (52u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (54u + sizeof(_g4_t_v15)) > _g4_s7 ? (54u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (55u + sizeof(_g4_t_v16)) > _g4_s8 ? (55u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v17)) > _g4_s9 ? (68u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (69u + sizeof(_g4_t_v18)) > _g4_s10 ? (69u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v19)) > _g4_s11 ? (80u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v20)) > _g4_s12 ? (84u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (86u + sizeof(_g4_t_v21)) > _g4_s13 ? (86u + sizeof(_g4_t_v21)) : _g4_s13,
    _g4_s15 = (87u + sizeof(_g4_t_v22)) > _g4_s14 ? (87u + sizeof(_g4_t_v22)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v23)) > _g4_s15 ? (100u + sizeof(_g4_t_v23)) : _g4_s15,
    _g4_s17 = (101u + sizeof(_g4_t_v24)) > _g4_s16 ? (101u + sizeof(_g4_t_v24)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v25)) > _g4_s17 ? (112u + sizeof(_g4_t_v25)) : _g4_s17,
    _g4_s19 = (116u + sizeof(_g4_t_v26)) > _g4_s18 ? (116u + sizeof(_g4_t_v26)) : _g4_s18,
    _g4_s20 = (118u + sizeof(_g4_t_v27)) > _g4_s19 ? (118u + sizeof(_g4_t_v27)) : _g4_s19,
    _g4_s21 = (119u + sizeof(_g4_t_v28)) > _g4_s20 ? (119u + sizeof(_g4_t_v28)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 37u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 52u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 54u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 55u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 69u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 84u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 86u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 87u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 100u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 101u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 112u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 116u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 118u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 119u);

  gameswf::ASObject::ASObject(self, a2);
  v8[0] = 0;
  v8[1] = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090088);
  *((float *)self + 10) = a3;
  *((float *)self + 11) = a4;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v8, (int)(uintptr_t)(gameswf::ASPoint::add));
  v11 = 1;
  v12 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v11, 3);
  v4 = (gameswf::Self *)&v12;
  if ( v11 == -1 )
    v4 = v13;
  gameswf::Strcpy_s(v4, (char *)&loc_4, (gameswf::Self *)"add");
  v14 = -1;
  v15 = 127;
  v16 |= 1u;
  gameswf::ASObject::builtinMember(self, (const gameswf::StringI::Self *)&v11, (const gameswf::ASValue::Self *)v8);
  if ( v11 == -1 && (v16 & 1) != 0 )
    gameswf::free_internal(v13);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v8);
  v9[0] = 0;
  v9[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v9, (int)(uintptr_t)(gameswf::ASPoint::subtract));
  v17 = 1;
  v18 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v17, 8);
  v5 = (gameswf::Self *)&v18;
  if ( v17 == -1 )
    v5 = v19;
  gameswf::Strcpy_s(v5, byte_9, (gameswf::Self *)"subtract");
  v20 = -1;
  v21 = 127;
  v22 |= 1u;
  gameswf::ASObject::builtinMember(self, (const gameswf::StringI::Self *)&v17, (const gameswf::ASValue::Self *)v9);
  if ( v17 == -1 && (v22 & 1) != 0 )
    gameswf::free_internal(v19);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v9);
  v10[0] = 0;
  v10[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v10, (int)(uintptr_t)(gameswf::ASPoint::normalize));
  v23 = 1;
  v24 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v23, 9);
  v6 = (gameswf::Self *)&v24;
  if ( v23 == -1 )
    v6 = v25;
  gameswf::Strcpy_s(v6, &byte_9[1], (gameswf::Self *)"normalize");
  v26 = -1;
  v27 = 127;
  v28 |= 1u;
  gameswf::ASObject::builtinMember(self, (const gameswf::StringI::Self *)&v23, (const gameswf::ASValue::Self *)v10);
  if ( v23 != -1 || (v28 & 1) == 0 )
    return (gameswf::ASPoint::Self *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v10);
  gameswf::free_internal(v25);
  return (gameswf::ASPoint::Self *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v10);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASPoint::newOp  (binary VA: 0x113d400)
// Original: gameswf::ASPoint::newOp
// ----------------------------------------------------------------------------
gameswf::ASPoint::Self * gameswf::ASPoint::newOp(gameswf::ASPoint::Self *self)
{
  gameswf::ASPoint::Self *v1;

  v1 = (gameswf::ASPoint::Self *)opNew(0x30u);
  gameswf::ASPoint::Construct(v1, (gameswf::Player::Self *)(self), 0.0, 0.0);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASPoint::ctor  (binary VA: 0x113d460)
// Original: gameswf::ASPoint::ctor
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASPoint::ctor(int a1)
{
  int v1;
  gameswf::Player::Self *v2;
  gameswf::Self *v3;
  gameswf::ASPoint::Self *v4;

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
  v4 = (gameswf::ASPoint::Self *)opNew(0x30u);
  gameswf::ASPoint::Construct(v4, v2, 0.0, 0.0);
  if ( v4 != nullptr )
  {
    gameswf::RefCounted::addRef(v4);
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v4);
    gameswf::ASPoint::init(a1);
    gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v4);
    return (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(v4);
  }
  else
  {
    *(uint32_t *)(a1 + 4) = 0;
    gameswf::ASPoint::init(a1);
    return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, nullptr);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASPoint::subtract  (binary VA: 0x113d750)
// Original: gameswf::ASPoint::subtract
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASPoint::subtract(int a1)
{
  gameswf::RefCounted::Self *result;
  float *v2;
  float *v3;
  float v4; // xmm0_4
  float v5; // xmm1_4
  int v6;
  float v7; // xmm0_4
  float v8; // xmm1_4
  gameswf::Self *v9;
  gameswf::Self *v10;
  gameswf::RefCounted::Self *Point;
  gameswf::ASObject::Self *v12;

  result = *(gameswf::RefCounted::Self **)(a1 + 16);
  if ( (int)(uintptr_t)(result) > 0 )
  {
    v2 = *(float **)(a1 + 4);
    if ( v2 != nullptr )
    {
      result = (gameswf::RefCounted::Self *)G4_VCALL<int>(v2, 8, 29);
      if ( (uint8_t)(uintptr_t)result != 0 )
      {
        result = (gameswf::RefCounted::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20));
        if ( *(uint8_t *)result == 5 )
        {
          v3 = *((float **)result + 1);
          if ( v3 != nullptr )
          {
            result = (gameswf::RefCounted::Self *)G4_VCALL<int>(v3, 8, 29);
            if ( (uint8_t)(uintptr_t)result != 0 )
            {
              v4 = v2[11];
              v5 = v2[10];
              v6 = *(uint32_t *)(a1 + 12);
              v7 = v4 - v3[11];
              v8 = v5 - v3[10];
              v9 = *(gameswf::Self **)(v6 + 212);
              if ( v9 != nullptr )
              {
                v10 = *(gameswf::Self **)(v6 + 208);
                if ( *((uint8_t *)v10 + 2) == 0 )
                {
                  if ( (*(uint16_t *)v10)-- == 1 )
                    gameswf::free_internal(v10);
                  *(uint32_t *)(v6 + 208) = 0;
                  *(uint32_t *)(v6 + 212) = 0;
                  v9 = nullptr;
                }
              }
              Point = (gameswf::RefCounted::Self *)gameswf::createPoint(v9, (gameswf::Player::Self *)LODWORD(v8), v7);
              v12 = (gameswf::ASObject::Self *)(Point);
              if ( Point != nullptr )
              {
                gameswf::RefCounted::addRef(Point);
                gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v12);
                return (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(v12);
              }
              else
              {
                return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, nullptr);
              }
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASPoint::add  (binary VA: 0x113d8c0)
// Original: gameswf::ASPoint::add
// ----------------------------------------------------------------------------
void gameswf::ASPoint::add(int a1)
{
  float *v1;
  int v2;
  float *v3;
  float v4; // xmm0_4
  float v5; // xmm1_4
  int v6;
  gameswf::Self *v7;
  gameswf::Self *v8;
  gameswf::RefCounted::Self *Point;
  gameswf::ASObject::Self *v10;

  if ( *(int *)(a1 + 16) > 0 )
  {
    v1 = *(float **)(a1 + 4);
    if ( v1 != nullptr && G4_VCALL<uint8_t>(v1, 8, 29) != 0 )
    {
      v2 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
      if ( *(uint8_t *)v2 == 5 )
      {
        v3 = *(float **)(v2 + 4);
        if ( v3 != nullptr && G4_VCALL<uint8_t>(v3, 8, 29) != 0 )
        {
          v4 = v3[11] + v1[11];
          v5 = v3[10] + v1[10];
          v6 = *(uint32_t *)(a1 + 12);
          v7 = *(gameswf::Self **)(v6 + 212);
          if ( v7 != nullptr )
          {
            v8 = *(gameswf::Self **)(v6 + 208);
            if ( *((uint8_t *)v8 + 2) == 0 )
            {
              if ( (*(uint16_t *)v8)-- == 1 )
                gameswf::free_internal(v8);
              *(uint32_t *)(v6 + 208) = 0;
              *(uint32_t *)(v6 + 212) = 0;
              v7 = nullptr;
            }
          }
          Point = (gameswf::RefCounted::Self *)gameswf::createPoint(v7, (gameswf::Player::Self *)LODWORD(v5), v4);
          v10 = (gameswf::ASObject::Self *)(Point);
          if ( Point != nullptr )
          {
            gameswf::RefCounted::addRef(Point);
            gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v10);
            gameswf::RefCounted::dropRef(v10);
          }
          else
          {
            gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, nullptr);
          }
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASPoint::is  (binary VA: 0x113da30)
// Original: gameswf::ASPoint::is
// ----------------------------------------------------------------------------
bool gameswf::ASPoint::is(gameswf::ASPoint::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 29 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASPoint::Destroy  (binary VA: 0x113da50)
// Original: gameswf::ASPoint::~ASPoint
// ----------------------------------------------------------------------------
void gameswf::ASPoint::Destroy(gameswf::ASPoint::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090088);
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASPoint::Destroy_ea113da80  (binary VA: 0x113da80)
// Original: gameswf::ASPoint::~ASPoint
// ----------------------------------------------------------------------------
void gameswf::ASPoint::Destroy_ea113da80(gameswf::ASPoint::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090088);
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}


