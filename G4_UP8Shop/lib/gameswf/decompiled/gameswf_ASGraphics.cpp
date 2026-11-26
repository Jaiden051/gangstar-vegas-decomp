#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASGraphics.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASGraphics::clearRefs  (binary VA: 0x114d730)
// Original: gameswf::ASGraphics::clearRefs
// ----------------------------------------------------------------------------
int gameswf::ASGraphics::clearRefs(gameswf::ASGraphics::Self *self, int a2)
{
  gameswf::ASObject::clearRefs(self, a2);
  return (*(int (**)(uint32_t, int))(**((uint32_t **)self + 11) + 72))(*((uint32_t *)self + 11), a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASGraphics::thisAlive  (binary VA: 0x114d780)
// Original: gameswf::ASGraphics::thisAlive
// ----------------------------------------------------------------------------
int gameswf::ASGraphics::thisAlive(gameswf::ASGraphics::Self *self)
{
  gameswf::ASObject::thisAlive(self);
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 11) + 76))(*((uint32_t *)self + 11));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASGraphics::clear  (binary VA: 0x114e040)
// Original: gameswf::ASGraphics::clear
// ----------------------------------------------------------------------------
int gameswf::ASGraphics::clear(int a1)
{
  int v1;

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 49) == 0 )
    v1 = 0;
  gameswf::Canvas::clear(*(gameswf::Canvas::Self **)(v1 + 40));
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)(v1 + 44) + 212) + 20))(
           *(uint32_t *)(*(uint32_t *)(v1 + 44) + 212),
           *(uint32_t *)(v1 + 44) + 216);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASGraphics::endFill  (binary VA: 0x114e0b0)
// Original: gameswf::ASGraphics::endFill
// ----------------------------------------------------------------------------
int gameswf::ASGraphics::endFill(int a1)
{
  gameswf::Canvas::Self **v1;

  v1 = *(gameswf::Canvas::Self ***)(a1 + 4);
  if ( v1 != nullptr && (*((uint8_t (**)(gameswf::Canvas::Self **, int))*v1 + 2))(v1, 49) == 0 )
    v1 = nullptr;
  return gameswf::Canvas::endFill(v1[10]);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASGraphics::beginBitmapFill  (binary VA: 0x114e110)
// Original: gameswf::ASGraphics::beginBitmapFill
// ----------------------------------------------------------------------------
int gameswf::ASGraphics::beginBitmapFill(int a1)
{
  gameswf::Canvas::Self **v1;
  gameswf::BitmapInfo::Self **v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  char v7;
  int v9;
  char v10;
  typedef uint32_t *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v12)) > _g4_s1 ? (24u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v13)) > _g4_s2 ? (28u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v14)) > _g4_s3 ? (32u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v15)) > _g4_s4 ? (36u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v16)) > _g4_s5 ? (40u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v17)) > _g4_s6 ? (44u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);

  v1 = *(gameswf::Canvas::Self ***)(a1 + 4);
  if ( v1 != nullptr && (*((uint8_t (**)(uint32_t, int))*v1 + 2))(*(uint32_t *)(a1 + 4), 49) == 0 )
    v1 = nullptr;
  v2 = nullptr;
  v3 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v3 == 5 )
  {
    v2 = *(gameswf::BitmapInfo::Self ***)(v3 + 4);
    if ( v2 != nullptr && (*((uint8_t (**)(gameswf::BitmapInfo::Self **, int))*v2 + 2))(v2, 65) == 0 )
      v2 = nullptr;
  }
  v4 = *(uint32_t *)(a1 + 16);
  if ( v4 <= 1 )
  {
    v12 = gameswf::Matrix::identity[0];
    v13 = gameswf::Matrix::identity[1];
    v14 = gameswf::Matrix::identity[2];
    v15 = gameswf::Matrix::identity[3];
    v9 = gameswf::Matrix::identity[5];
    v16 = gameswf::Matrix::identity[4];
    v17 = v9;
    v7 = 1;
  }
  else
  {
    v5 = **(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3);
    v6 = nullptr;
    if ( *(uint8_t *)v5 == 5 )
    {
      v6 = *(uint32_t **)(v5 + 4);
      if ( v6 != nullptr )
      {
        v11 = *(uint32_t **)(v5 + 4);
        v10 = G4_VCALL<int>(v6, 8, 30);
        v4 = *(uint32_t *)(a1 + 16);
        v6 = v11;
        if ( v10 == 0 )
          v6 = nullptr;
      }
    }
    v12 = v6[10];
    v13 = v6[11];
    v14 = v6[12];
    v15 = v6[13];
    v16 = v6[14];
    v17 = v6[15];
    v7 = 1;
    if ( v4 > 2 )
      v7 = gameswf::ASValue::toBool((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 6)));
  }
  { gameswf::Canvas::beginBitmapFill(v1[10], v2[16], (const gameswf::Matrix::Self *)&v12, v7); return 0; }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASGraphics::moveTo  (binary VA: 0x114f3c0)
// Original: gameswf::ASGraphics::moveTo
// ----------------------------------------------------------------------------
void gameswf::ASGraphics::moveTo(int a1)
{
  gameswf::Canvas::Self **v1;
  float v2; // xmm0_4
  float v3; // xmm0_4
  float v4;
  double v5;

  v1 = *(gameswf::Canvas::Self ***)(a1 + 4);
  if ( v1 != nullptr && (*((uint8_t (**)(uint32_t, int))*v1 + 2))(*(uint32_t *)(a1 + 4), 49) == 0 )
    v1 = nullptr;
  if ( *(int *)(a1 + 16) > 1 )
  {
    v5 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v2 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
    v4 = v2 * 20.0;
    v3 = v5;
    gameswf::Canvas::moveTo(v1[10], v3 * 20.0, v4);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASGraphics::beginFill  (binary VA: 0x114f480)
// Original: gameswf::ASGraphics::beginFill
// ----------------------------------------------------------------------------
int gameswf::ASGraphics::beginFill(int a1)
{
  gameswf::Canvas::Self **v1;
  int v2;
  bool v3; // cc
  float v4; // xmm0_4
  typedef double _g4_t_v6;
  typedef uint8_t _g4_t_v7[16];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  v1 = *(gameswf::Canvas::Self ***)(a1 + 4);
  if ( v1 != nullptr && (*((uint8_t (**)(uint32_t, int))*v1 + 2))(*(uint32_t *)(a1 + 4), 49) == 0 )
    v1 = nullptr;
  v2 = *(uint32_t *)(a1 + 16);
  v7[0] = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = -1;
  if ( v2 > 0 )
  {
    v6 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v7[3] = -1;
    v7[2] = (int)v6;
    v7[0] = (unsigned int)(int)v6 >> 16;
    v3 = *(uint32_t *)(a1 + 16) <= 1;
    v7[1] = (uint16_t)(int)v6 >> 8;
    if ( !v3 )
    {
      v4 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
      v7[3] = (int)(float)(fmaxf(fminf(v4, 1.0), 0.0) * 255.0);
    }
  }
  { gameswf::Canvas::beginFill(v1[10], (const gameswf::Color::Self *)v7); return 0; }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASGraphics::lineTo  (binary VA: 0x114f590)
// Original: gameswf::ASGraphics::lineTo
// ----------------------------------------------------------------------------
void gameswf::ASGraphics::lineTo(int a1)
{
  gameswf::Canvas::Self **v1;
  float v2; // xmm0_4
  float v3; // xmm0_4
  float v4;
  double v5;

  v1 = *(gameswf::Canvas::Self ***)(a1 + 4);
  if ( v1 != nullptr && (*((uint8_t (**)(uint32_t, int))*v1 + 2))(*(uint32_t *)(a1 + 4), 49) == 0 )
    v1 = nullptr;
  if ( *(int *)(a1 + 16) > 1 )
  {
    v5 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v2 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
    v4 = v2 * 20.0;
    v3 = v5;
    gameswf::Canvas::lineTo(v1[10], v3 * 20.0, v4);
    gameswf::Character::invalidateBitmapCache(v1[11]);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASGraphics::drawRect  (binary VA: 0x114f940)
// Original: gameswf::ASGraphics::drawRect
// ----------------------------------------------------------------------------
int gameswf::ASGraphics::drawRect(int a1)
{
  gameswf::Canvas::Self **v1;
  float v2; // xmm0_4
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v7;
  float v8;
  float v9;

  v1 = *(gameswf::Canvas::Self ***)(a1 + 4);
  if ( v1 != nullptr && (*((uint8_t (**)(uint32_t, int))*v1 + 2))(*(uint32_t *)(a1 + 4), 49) == 0 )
    v1 = nullptr;
  if ( *(int *)(a1 + 16) > 3 )
  {
    v2 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v9 = 20.0 * v2;
    v3 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
    v4 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 6)));
    v7 = (float)(v4 * 20.0) + v9;
    v5 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 9)));
    v8 = (float)(v5 * 20.0) + (float)(v3 * 20.0);
    gameswf::Canvas::moveTo(v1[10], v9, v3 * 20.0);
    gameswf::Canvas::lineTo(v1[10], v9, v8);
    gameswf::Canvas::lineTo(v1[10], v7, v8);
    gameswf::Canvas::lineTo(v1[10], v7, v3 * 20.0);
    gameswf::Canvas::lineTo(v1[10], v9, v3 * 20.0);
  }
  (*(void (**)(uint32_t, int))(**((uint32_t **)v1[11] + 53) + 20))(*((uint32_t *)v1[11] + 53), (int)(uintptr_t)(v1[11]) + 216);
  return gameswf::Character::invalidateBitmapCache(v1[11]);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASGraphics::curveTo  (binary VA: 0x114fb30)
// Original: gameswf::ASGraphics::curveTo
// ----------------------------------------------------------------------------
void gameswf::ASGraphics::curveTo(int a1)
{
  gameswf::Canvas::Self **v1;
  float v2; // xmm1_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6;
  float v7;
  float v8;
  double v9;
  double v10;
  double v11;

  v1 = *(gameswf::Canvas::Self ***)(a1 + 4);
  if ( v1 != nullptr && (*((uint8_t (**)(uint32_t, int))*v1 + 2))(*(uint32_t *)(a1 + 4), 49) == 0 )
    v1 = nullptr;
  if ( *(int *)(a1 + 16) > 3 )
  {
    v9 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v10 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
    v11 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 6)));
    v2 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 9)));
    v8 = v2 * 20.0;
    v3 = v11;
    v7 = v3 * 20.0;
    v4 = v10;
    v6 = v4 * 20.0;
    v5 = v9;
    gameswf::Canvas::curveTo(v1[10], v5 * 20.0, v6, v7, v8);
    gameswf::Character::invalidateBitmapCache(v1[11]);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASGraphics::lineStyle  (binary VA: 0x114fe20)
// Original: gameswf::ASGraphics::lineStyle
// ----------------------------------------------------------------------------
int gameswf::ASGraphics::lineStyle(int a1)
{
  gameswf::Canvas::Self **v1;
  float v2; // xmm0_4
  float v3; // xmm0_4
  int v4;
  int v5;
  long double v7; // fst7
  float v8; // xmm0_4
  double v9; // xmm0_8
  bool v10; // cc
  long double v11; // fst7
  float v12; // xmm0_4
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[16];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);

  v1 = *(gameswf::Canvas::Self ***)(a1 + 4);
  if ( v1 != nullptr && (*((uint8_t (**)(uint32_t, int))*v1 + 2))(*(uint32_t *)(a1 + 4), 49) == 0 )
    v1 = nullptr;
  if ( *(uint32_t *)(a1 + 16) != 0 )
  {
    v2 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v3 = fmaxf(fminf(v2, 255.0), 0.0);
    v4 = (int)v3;
    if ( *(int *)(a1 + 16) > 1 )
    {
      v13 = (int)v3;
      v7 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
      v14[3] = -1;
      v8 = v7;
      v9 = v8;
      v14[2] = (int)v9;
      LOWORD(v4) = v13;
      v14[0] = (unsigned int)(int)v9 >> 16;
      v10 = *(uint32_t *)(a1 + 16) <= 2;
      v14[1] = (uint16_t)(int)v9 >> 8;
      if ( !v10 )
      {
        v11 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4
                                                                                     * (3 * *(uint32_t *)(a1 + 20) - 6)));
        LOWORD(v4) = v13;
        v12 = v11;
        v5 = (int)(float)(fmaxf(fminf(v12, 1.0), 0.0) * 255.0);
        goto LABEL_8;
      }
    }
    else
    {
      v14[0] = 0;
      v14[1] = 0;
      v14[2] = 0;
    }
    LOBYTE(v5) = -1;
LABEL_8:
    v14[3] = v5;
    { gameswf::Canvas::setLineStyle(v1[10], v4, (const gameswf::Color::Self *)v14); return 0; }
  }
  *((uint32_t *)v1[10] + 35) = 0;
  return (int)(uintptr_t)(gameswf::Canvas::addPath(v1[10], false));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASGraphics::Construct  (binary VA: 0x11573f0)
// Original: gameswf::ASGraphics::ASGraphics
// ----------------------------------------------------------------------------
gameswf::ASGraphics::Self * gameswf::ASGraphics::Construct(gameswf::CharacterDef::Self **self, gameswf::Player::Self *a2, gameswf::Character::Self *a3)
{
  gameswf::Canvas::Self *v3;
  gameswf::CharacterDef::Self *v4;
  gameswf::RefCounted::Self *GenericCharacter;
  typedef uint8_t _g4_t_v7[12];
  typedef uint8_t _g4_t_v8[12];
  typedef uint8_t _g4_t_v9[12];
  typedef uint8_t _g4_t_v10[12];
  typedef uint8_t _g4_t_v11[12];
  typedef uint8_t _g4_t_v12[12];
  typedef uint8_t _g4_t_v13[12];
  typedef uint8_t _g4_t_v14[12];
  typedef uint8_t _g4_t_v15[12];
  typedef uint8_t _g4_t_v16[20];
  typedef uint8_t _g4_t_v17[20];
  typedef uint8_t _g4_t_v18[20];
  typedef uint8_t _g4_t_v19[20];
  typedef uint8_t _g4_t_v20[20];
  typedef uint8_t _g4_t_v21[20];
  typedef uint8_t _g4_t_v22[20];
  typedef uint8_t _g4_t_v23[20];
  typedef uint8_t _g4_t_v24[48];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v9)) > _g4_s2 ? (24u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v10)) > _g4_s3 ? (36u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v11)) > _g4_s4 ? (48u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v12)) > _g4_s5 ? (60u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v13)) > _g4_s6 ? (72u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v14)) > _g4_s7 ? (84u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v15)) > _g4_s8 ? (96u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (108u + sizeof(_g4_t_v16)) > _g4_s9 ? (108u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (128u + sizeof(_g4_t_v17)) > _g4_s10 ? (128u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (148u + sizeof(_g4_t_v18)) > _g4_s11 ? (148u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (168u + sizeof(_g4_t_v19)) > _g4_s12 ? (168u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (188u + sizeof(_g4_t_v20)) > _g4_s13 ? (188u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (208u + sizeof(_g4_t_v21)) > _g4_s14 ? (208u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (228u + sizeof(_g4_t_v22)) > _g4_s15 ? (228u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (248u + sizeof(_g4_t_v23)) > _g4_s16 ? (248u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (268u + sizeof(_g4_t_v24)) > _g4_s17 ? (268u + sizeof(_g4_t_v24)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 72u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 84u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 96u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 108u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 128u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 148u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 168u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 188u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 208u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 228u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 248u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 268u);

  gameswf::ASObject::ASObject((gameswf::ASObject::Self *)self, a2);
  *self = (gameswf::CharacterDef::Self *)((uint32_t)(uintptr_t)&off_2090608);
  v3 = (gameswf::Canvas::Self *)opNew(0xC8u);
  gameswf::Canvas::Construct(v3, a2);
  v4 = nullptr;
  *(self + 10) = (gameswf::CharacterDef::Self *)(v3);
  if ( v3 != nullptr )
  {
    gameswf::RefCounted::addRef(v3);
    v4 = *(self + 10);
  }
  GenericCharacter = (gameswf::RefCounted::Self *)gameswf::Player::createGenericCharacter(a2, v4, a3, -1);
  *(self + 11) = (gameswf::CharacterDef::Self *)(GenericCharacter);
  if ( GenericCharacter != nullptr )
    gameswf::RefCounted::addRef(GenericCharacter);
  v7[0] = 0;
  v7[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v7, (int)(uintptr_t)(gameswf::ASGraphics::beginFill));
  sub_776320((gameswf::String::Self *)v16, (gameswf::Self *)"beginFill");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)self,
    (const gameswf::StringI::Self *)v16,
    (const gameswf::ASValue::Self *)v7);
  sub_59CE50((int)(uintptr_t)(v16));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v7);
  v8[0] = 0;
  v8[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v8, (int)(uintptr_t)(gameswf::ASGraphics::beginBitmapFill));
  sub_776320((gameswf::String::Self *)v17, (gameswf::Self *)"beginBitmapFill");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)self,
    (const gameswf::StringI::Self *)v17,
    (const gameswf::ASValue::Self *)v8);
  sub_59CE50((int)(uintptr_t)(v17));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v8);
  v9[0] = 0;
  v9[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v9, (int)(uintptr_t)(gameswf::ASGraphics::endFill));
  sub_776320((gameswf::String::Self *)v18, (gameswf::Self *)"endFill");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)self,
    (const gameswf::StringI::Self *)v18,
    (const gameswf::ASValue::Self *)v9);
  sub_59CE50((int)(uintptr_t)(v18));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v9);
  v10[0] = 0;
  v10[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v10, (int)(uintptr_t)(gameswf::ASGraphics::clear));
  sub_776320((gameswf::String::Self *)v19, (gameswf::Self *)"clear");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)self,
    (const gameswf::StringI::Self *)v19,
    (const gameswf::ASValue::Self *)v10);
  sub_59CE50((int)(uintptr_t)(v19));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v10);
  v11[0] = 0;
  v11[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v11, (int)(uintptr_t)(gameswf::ASGraphics::moveTo));
  sub_776320((gameswf::String::Self *)v20, (gameswf::Self *)"moveTo");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)self,
    (const gameswf::StringI::Self *)v20,
    (const gameswf::ASValue::Self *)v11);
  sub_59CE50((int)(uintptr_t)(v20));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v11);
  v12[0] = 0;
  v12[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v12, (int)(uintptr_t)(gameswf::ASGraphics::lineTo));
  sub_776320((gameswf::String::Self *)v21, (gameswf::Self *)"lineTo");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)self,
    (const gameswf::StringI::Self *)v21,
    (const gameswf::ASValue::Self *)v12);
  sub_59CE50((int)(uintptr_t)(v21));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v12);
  v13[0] = 0;
  v13[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v13, (int)(uintptr_t)(gameswf::ASGraphics::curveTo));
  sub_776320((gameswf::String::Self *)v22, (gameswf::Self *)"curveTo");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)self,
    (const gameswf::StringI::Self *)v22,
    (const gameswf::ASValue::Self *)v13);
  sub_59CE50((int)(uintptr_t)(v22));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v13);
  v14[0] = 0;
  v14[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v14, (int)(uintptr_t)(gameswf::ASGraphics::lineStyle));
  sub_776320((gameswf::String::Self *)v23, (gameswf::Self *)"lineStyle");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)self,
    (const gameswf::StringI::Self *)v23,
    (const gameswf::ASValue::Self *)v14);
  sub_59CE50((int)(uintptr_t)(v23));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v14);
  v15[0] = 0;
  v15[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v15, (int)(uintptr_t)(gameswf::ASGraphics::drawRect));
  sub_776320((gameswf::String::Self *)v24, (gameswf::Self *)"drawRect");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)self,
    (const gameswf::StringI::Self *)v24,
    (const gameswf::ASValue::Self *)v15);
  sub_59CE50((int)(uintptr_t)(v24));
  return (gameswf::ASGraphics::Self *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASGraphics::is  (binary VA: 0x1161f50)
// Original: gameswf::ASGraphics::is
// ----------------------------------------------------------------------------
bool gameswf::ASGraphics::is(gameswf::ASGraphics::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 49 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASGraphics::Destroy  (binary VA: 0x1162200)
// Original: gameswf::ASGraphics::~ASGraphics
// ----------------------------------------------------------------------------
void gameswf::ASGraphics::Destroy(gameswf::RefCounted::Self **self)
{
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_2090608);
  if ( *(self + 11) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 11));
  if ( *(self + 10) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 10));
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASGraphics::Destroy_ea1162460  (binary VA: 0x1162460)
// Original: gameswf::ASGraphics::~ASGraphics
// ----------------------------------------------------------------------------
void gameswf::ASGraphics::Destroy_ea1162460(gameswf::RefCounted::Self **self)
{
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_2090608);
  if ( *(self + 11) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 11));
  if ( *(self + 10) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 10));
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
  opDelete(self);
}


