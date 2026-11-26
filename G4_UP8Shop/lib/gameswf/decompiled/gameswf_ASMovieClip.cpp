#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASMovieClip.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClip::init  (binary VA: 0x114d400)
// Original: gameswf::ASMovieClip::init
// ----------------------------------------------------------------------------
int gameswf::ASMovieClip::init(int a1)
{
  int result;
  int v2;

  result = a1;
  v2 = *(uint32_t *)(a1 + 4);
  if ( v2 != 0 )
  {
    result = G4_VCALL<int>(v2, 8, 2);
    if ( (uint8_t)result != 0 )
      return G4_VCALL<int>(v2, 208, 0, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClip::play  (binary VA: 0x114d450)
// Original: gameswf::ASMovieClip::play
// ----------------------------------------------------------------------------
int gameswf::ASMovieClip::play(int a1)
{
  int v1;

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 2) == 0 )
    v1 = 0;
  return G4_VCALL<int>(v1, 156, 0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClip::stop  (binary VA: 0x114d4a0)
// Original: gameswf::ASMovieClip::stop
// ----------------------------------------------------------------------------
int gameswf::ASMovieClip::stop(int a1)
{
  int v1;

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 2) == 0 )
    v1 = 0;
  return G4_VCALL<int>(v1, 156, 1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClip::nextFrame  (binary VA: 0x114d4f0)
// Original: gameswf::ASMovieClip::nextFrame
// ----------------------------------------------------------------------------
int gameswf::ASMovieClip::nextFrame(int a1)
{
  int v1;
  int v2;
  int v3;

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 2) == 0 )
    v1 = 0;
  v2 = G4_VCALL<int>(v1, 316);
  v3 = G4_VCALL<int>(v1, 312);
  if ( v2 > v3 )
    G4_VCALL<void>(v1, 328, v3 + 1);
  return G4_VCALL<int>(v1, 156, 1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClip::prevFrame  (binary VA: 0x114d570)
// Original: gameswf::ASMovieClip::prevFrame
// ----------------------------------------------------------------------------
int gameswf::ASMovieClip::prevFrame(int a1)
{
  int v1;
  int v2;

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 2) == 0 )
    v1 = 0;
  v2 = G4_VCALL<int>(v1, 312);
  if ( v2 > 0 )
    G4_VCALL<void>(v1, 328, v2 - 1);
  return G4_VCALL<int>(v1, 156, 1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClip::addFrameScript  (binary VA: 0x114e310)
// Original: gameswf::ASMovieClip::addFrameScript
// ----------------------------------------------------------------------------
void gameswf::ASMovieClip::addFrameScript(int a1)
{
  gameswf::SpriteInstance::Self *v1;
  bool v2;
  gameswf::SpriteInstance::Self *v3;
  int v4;
  int v5;
  int v6;
  gameswf::ASFunction::Self *v7;
  int v8;
  gameswf::SpriteInstance::Self *v9;

  v1 = *(gameswf::SpriteInstance::Self **)(a1 + 4);
  v9 = v1;
  if ( v1 != nullptr )
  {
    v2 = G4_VCALL<uint8_t>(v1, 8, 2) == 0;
    v3 = nullptr;
    if ( !v2 )
      v3 = v9;
    v9 = v3;
  }
  if ( *(int *)(a1 + 16) > 1 )
  {
    v4 = 0;
    do
    {
      v8 = v4 + 1;
      v5 = *(uint32_t *)(a1 + 20) - v4;
      v4 += 2;
      v6 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * v5));
      v7 = (gameswf::ASFunction::Self *)gameswf::ASValue::toFunction((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12)
                                                                                  + 12 * (*(uint32_t *)(a1 + 20) - v8)));
      gameswf::SpriteInstance::addScript(v9, v6, v7);
    }
    while ( v4 < *(uint32_t *)(a1 + 16) );
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClip::gotoAndStop  (binary VA: 0x114e790)
// Original: gameswf::ASMovieClip::gotoAndStop
// ----------------------------------------------------------------------------
int gameswf::ASMovieClip::gotoAndStop(uint32_t *a1)
{
  gameswf::SpriteInstance::Self *v1;
  uint32_t *v2;
  int v3;
  char v4; // bp
  int result;
  gameswf::String::Self *v6;
  typedef gameswf::String::Self *_g4_t_v7;
  typedef gameswf::Self *_g4_t_v8[4];
  typedef int16_t _g4_t_v9;
  typedef char _g4_t_v10;
  typedef char _g4_t_v11;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v9)) > _g4_s2 ? (44u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (46u + sizeof(_g4_t_v10)) > _g4_s3 ? (46u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (47u + sizeof(_g4_t_v11)) > _g4_s4 ? (47u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 46u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 47u);

  v1 = (gameswf::SpriteInstance::Self *)a1[1];
  if ( v1 != nullptr
    && (*(uint8_t (**)(uint32_t, char *))(*(uint32_t *)v1 + 8))(a1[1], (char *)&dword_0 + 2) == 0 )
  {
    v1 = nullptr;
  }
  if ( (int)a1[4] <= 0 )
    return gameswf::logError((gameswf::Self *)"error: sprite_goto_and_stop needs one arg\n", (const char *)v7);
  v2 = (uint32_t *)a1[3];
  v3 = 12 * a1[5];
  v4 = *(uint8_t *)(*v2 + v3);
  if ( (uint8_t)(v4 - 3) <= 1u || (result = *(uint8_t *)(*v2 + v3), v4 == 2) )
  {
    LOWORD(v8[0]) = 1;
    v9 = -1;
    v10 = 127;
    v11 |= 1u;
    v6 = gameswf::ASValue::toString((gameswf::ASValue::Self *)(*v2 + v3), v8);
    gameswf::SpriteInstance::gotoFrame(v1, v6);
    G4_VCALL<void>(v1, 156, 1);
    return sub_59CE50((int)(uintptr_t)(v8));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClip::gotoAndPlay  (binary VA: 0x114e8a0)
// Original: gameswf::ASMovieClip::gotoAndPlay
// ----------------------------------------------------------------------------
int gameswf::ASMovieClip::gotoAndPlay(uint32_t *a1)
{
  gameswf::SpriteInstance::Self *v1;
  uint32_t *v2;
  int v3;
  char v4; // bp
  int result;
  gameswf::String::Self *v6;
  typedef gameswf::String::Self *_g4_t_v7;
  typedef gameswf::Self *_g4_t_v8[4];
  typedef int16_t _g4_t_v9;
  typedef char _g4_t_v10;
  typedef char _g4_t_v11;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v9)) > _g4_s2 ? (44u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (46u + sizeof(_g4_t_v10)) > _g4_s3 ? (46u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (47u + sizeof(_g4_t_v11)) > _g4_s4 ? (47u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 46u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 47u);

  v1 = (gameswf::SpriteInstance::Self *)a1[1];
  if ( v1 != nullptr
    && (*(uint8_t (**)(uint32_t, char *))(*(uint32_t *)v1 + 8))(a1[1], (char *)&dword_0 + 2) == 0 )
  {
    v1 = nullptr;
  }
  if ( (int)a1[4] <= 0 )
    return gameswf::logError((gameswf::Self *)"error: sprite_goto_and_play needs one arg\n", (const char *)v7);
  v2 = (uint32_t *)a1[3];
  v3 = 12 * a1[5];
  v4 = *(uint8_t *)(*v2 + v3);
  if ( (uint8_t)(v4 - 3) <= 1u || (result = *(uint8_t *)(*v2 + v3), v4 == 2) )
  {
    LOWORD(v8[0]) = 1;
    v9 = -1;
    v10 = 127;
    v11 |= 1u;
    v6 = gameswf::ASValue::toString((gameswf::ASValue::Self *)(*v2 + v3), v8);
    if ( (uint8_t)gameswf::SpriteInstance::gotoFrame(v1, v6) != 0 )
      G4_VCALL<void>(v1, 156, 0);
    return sub_59CE50((int)(uintptr_t)(v8));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClip::newOp  (binary VA: 0x1150e90)
// Original: gameswf::ASMovieClip::newOp
// ----------------------------------------------------------------------------
gameswf::SpriteInstance::Self * gameswf::ASMovieClip::newOp(gameswf::ASMovieClip::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  char v9[48];

  sub_776320((gameswf::String::Self *)v9, (gameswf::Self *)&unk_1B15112);
  v1 = opNew(0x128u);
  gameswf::MovieDefImpl::Construct(
    (pthread_mutex_t **)v1,
    self,
    (pthread_mutex_t *)((char *)&dword_0 + 1),
    (pthread_mutex_t *)((char *)&dword_0 + 1),
    v9);
  sub_59CE50((int)(uintptr_t)(v9));
  v2 = *(uint32_t *)(v1 + 88);
  *(uint32_t *)(v1 + 52) = 1;
  if ( v2 == 0 )
  {
    *(uint32_t *)(v1 + 92) = *(uint32_t *)(v1 + 92) & 0xFF000000 | 1;
    v3 = gameswf::malloc_internal(0x10u);
    *(uint8_t *)(v1 + 95) = 1;
    v4 = *(uint32_t *)(v1 + 92) << 8;
    *(uint32_t *)(v1 + 88) = v3;
    v5 = v4 >> 8;
    if ( v5 > 0 )
    {
      v6 = 0;
      while ( 1 )
      {
        v7 = (uint32_t *)(16 * v6 + v3);
        if ( v7 != nullptr )
        {
          *v7 = 0;
          v7[1] = 0;
          v7[2] = 0;
          v7[3] = 0;
          v5 = (int)(*(uint32_t *)(v1 + 92) << 8) >> 8;
        }
        if ( ++v6 >= v5 )
          break;
        v3 = *(uint32_t *)(v1 + 88);
      }
    }
  }
  return gameswf::Player::createSpriteInstance(self, (gameswf::MovieDefinitionSub::Self *)v1, nullptr, nullptr, nullptr);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClip::startDrag  (binary VA: 0x1150fb0)
// Original: gameswf::ASMovieClip::startDrag
// ----------------------------------------------------------------------------
int gameswf::ASMovieClip::startDrag(int a1)
{
  gameswf::Character::Self *v1;
  int v2;
  gameswf::Player::Self *v3;
  gameswf::Root::Self *Root;
  char v6;
  long double v7; // fst7
  bool v8; // cc
  float v9; // xmm0_4
  float v10; // xmm0_4
  long double v11; // fst7
  int v12;
  float v13; // xmm0_4
  long double v14; // fst7
  int v15;
  float v16; // xmm0_4
  typedef bool _g4_t_v17;
  typedef bool _g4_t_v18;
  typedef float _g4_t_v19[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);

  v1 = *(gameswf::Character::Self **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 2) == 0 )
    v1 = nullptr;
  v17 = false;
  v18 = false;
  if ( *(int *)(a1 + 16) > 0 )
  {
    v6 = gameswf::ASValue::toBool((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v17 = v6;
    if ( *(int *)(a1 + 16) <= 1 )
    {
      v17 = v6;
      goto LABEL_5;
    }
    v7 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
    v8 = *(uint32_t *)(a1 + 16) <= 2;
    v9 = v7;
    v19[0] = v9;
    if ( v8 )
    {
      v19[2] = -9999.0;
    }
    else
    {
      v11 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 6)));
      v12 = *(uint32_t *)(a1 + 16);
      v13 = v11;
      v19[2] = v13;
      if ( v12 > 3 )
      {
        v14 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4
                                                                                     * (3 * *(uint32_t *)(a1 + 20) - 9)));
        v15 = *(uint32_t *)(a1 + 16);
        v16 = v14;
        v19[1] = v16;
        if ( v15 <= 4 )
          v10 = 9999.0;
        else
          v10 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12)
                                                              + 4 * (3 * *(uint32_t *)(a1 + 20) - 12)));
        goto LABEL_13;
      }
    }
    v19[1] = 9999.0;
    v10 = 9999.0;
LABEL_13:
    v18 = true;
    v19[3] = v10;
  }
LABEL_5:
  v2 = *(uint32_t *)(a1 + 12);
  v3 = *(gameswf::Player::Self **)(v2 + 212);
  if ( v3 != nullptr && *(uint8_t *)(*(uint32_t *)(v2 + 208) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)(v2 + 208), nullptr);
    *(uint32_t *)(v2 + 212) = 0;
    v3 = nullptr;
  }
  Root = (gameswf::Root::Self *)gameswf::Player::getRoot(v3);
  return gameswf::Root::startDrag(Root, v1, v17, v18, (gameswf::Rect::Self *)v19);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClip::stopDrag  (binary VA: 0x11511a0)
// Original: gameswf::ASMovieClip::stopDrag
// ----------------------------------------------------------------------------
gameswf::Root::Self * gameswf::ASMovieClip::stopDrag(int a1)
{
  int v1;
  int v2;
  gameswf::Player::Self *v3;
  gameswf::Root::Self *result;
  int v5;
  gameswf::Player::Self *v6;
  gameswf::Root::Self *Root;

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 2) == 0 )
    v1 = 0;
  v2 = *(uint32_t *)(a1 + 12);
  v3 = *(gameswf::Player::Self **)(v2 + 212);
  if ( v3 != nullptr && *(uint8_t *)(*(uint32_t *)(v2 + 208) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)(v2 + 208), nullptr);
    *(uint32_t *)(v2 + 212) = 0;
    v3 = nullptr;
  }
  result = (gameswf::Root::Self *)gameswf::Player::getRoot(v3);
  if ( *((uint32_t *)result + 47) == v1 )
  {
    v5 = *(uint32_t *)(a1 + 12);
    v6 = *(gameswf::Player::Self **)(v5 + 212);
    if ( v6 != nullptr && *(uint8_t *)(*(uint32_t *)(v5 + 208) + 2) == 0 )
    {
      sub_7E5ED0((gameswf::Self **)(v5 + 208), nullptr);
      *(uint32_t *)(v5 + 212) = 0;
      v6 = nullptr;
    }
    Root = (gameswf::Root::Self *)gameswf::Player::getRoot(v6);
    return gameswf::Root::stopDrag(Root);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASMovieClip::createClass  (binary VA: 0x1156f80)
// Original: gameswf::ASMovieClip::createClass
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASMovieClip::createClass(gameswf::ASMovieClip::Self *self)
{
  typedef gameswf::Player::Self *_g4_t_v2;
  typedef gameswf::ASClass::Self *_g4_t_Class;
  typedef gameswf::Self **_g4_t_v4;
  typedef uint8_t _g4_t_v5[12];
  typedef uint8_t _g4_t_v6[12];
  typedef uint8_t _g4_t_v7[12];
  typedef uint8_t _g4_t_v8[12];
  typedef uint8_t _g4_t_v9[12];
  typedef uint8_t _g4_t_v10[12];
  typedef uint8_t _g4_t_v11[12];
  typedef uint8_t _g4_t_v12[12];
  typedef uint8_t _g4_t_v13[12];
  typedef uint8_t _g4_t_v14[12];
  typedef uint8_t _g4_t_v15[20];
  typedef uint8_t _g4_t_v16[20];
  typedef uint8_t _g4_t_v17[20];
  typedef uint8_t _g4_t_v18[20];
  typedef uint8_t _g4_t_v19[20];
  typedef uint8_t _g4_t_v20[20];
  typedef uint8_t _g4_t_v21[20];
  typedef uint8_t _g4_t_v22[20];
  typedef uint8_t _g4_t_v23[20];
  typedef uint8_t _g4_t_v24[20];
  typedef uint8_t _g4_t_v25[48];
  enum : size_t {
    _g4_s0 = 464u,
    _g4_s1 = (4u + sizeof(_g4_t_v2)) > _g4_s0 ? (4u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_Class)) > _g4_s1 ? (8u + sizeof(_g4_t_Class)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v4)) > _g4_s2 ? (12u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v5)) > _g4_s3 ? (28u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v6)) > _g4_s4 ? (40u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v7)) > _g4_s5 ? (52u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v8)) > _g4_s6 ? (64u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v9)) > _g4_s7 ? (76u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v10)) > _g4_s8 ? (88u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (100u + sizeof(_g4_t_v11)) > _g4_s9 ? (100u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v12)) > _g4_s10 ? (112u + sizeof(_g4_t_v12)) : _g4_s10,
    _g4_s12 = (124u + sizeof(_g4_t_v13)) > _g4_s11 ? (124u + sizeof(_g4_t_v13)) : _g4_s11,
    _g4_s13 = (136u + sizeof(_g4_t_v14)) > _g4_s12 ? (136u + sizeof(_g4_t_v14)) : _g4_s12,
    _g4_s14 = (148u + sizeof(_g4_t_v15)) > _g4_s13 ? (148u + sizeof(_g4_t_v15)) : _g4_s13,
    _g4_s15 = (168u + sizeof(_g4_t_v16)) > _g4_s14 ? (168u + sizeof(_g4_t_v16)) : _g4_s14,
    _g4_s16 = (188u + sizeof(_g4_t_v17)) > _g4_s15 ? (188u + sizeof(_g4_t_v17)) : _g4_s15,
    _g4_s17 = (208u + sizeof(_g4_t_v18)) > _g4_s16 ? (208u + sizeof(_g4_t_v18)) : _g4_s16,
    _g4_s18 = (228u + sizeof(_g4_t_v19)) > _g4_s17 ? (228u + sizeof(_g4_t_v19)) : _g4_s17,
    _g4_s19 = (248u + sizeof(_g4_t_v20)) > _g4_s18 ? (248u + sizeof(_g4_t_v20)) : _g4_s18,
    _g4_s20 = (268u + sizeof(_g4_t_v21)) > _g4_s19 ? (268u + sizeof(_g4_t_v21)) : _g4_s19,
    _g4_s21 = (288u + sizeof(_g4_t_v22)) > _g4_s20 ? (288u + sizeof(_g4_t_v22)) : _g4_s20,
    _g4_s22 = (308u + sizeof(_g4_t_v23)) > _g4_s21 ? (308u + sizeof(_g4_t_v23)) : _g4_s21,
    _g4_s23 = (328u + sizeof(_g4_t_v24)) > _g4_s22 ? (328u + sizeof(_g4_t_v24)) : _g4_s22,
    _g4_s24 = (348u + sizeof(_g4_t_v25)) > _g4_s23 ? (348u + sizeof(_g4_t_v25)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 4u);
  _g4_t_Class &Class = *reinterpret_cast<_g4_t_Class *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 40u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 52u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 64u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 76u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 88u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 100u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 112u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 124u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 136u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 148u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 168u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 188u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 208u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 228u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 248u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 268u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 288u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 308u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 328u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 348u);

  v2 = *((gameswf::Player::Self **)self + 4);
  sub_776320((gameswf::String::Self *)v15, (gameswf::Self *)"Sprite");
  Class = (gameswf::ASClass::Self *)gameswf::ASPackage::findClass(self, (const gameswf::String::Self *)v15, true);
  sub_776320((gameswf::String::Self *)v16, (gameswf::Self *)"MovieClip");
  v5[0] = 0;
  v5[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v5, (int)(uintptr_t)(gameswf::ASMovieClip::init));
  v4 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v4,
    v2,
    Class,
    (const gameswf::String::Self *)v16,
    gameswf::ASMovieClip::newOp,
    (const gameswf::ASValue::Self *)v5,
    nullptr);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v5);
  sub_59CE50((int)(uintptr_t)(v16));
  sub_59CE50((int)(uintptr_t)(v15));
  v6[0] = 0;
  v6[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v6, (int)(uintptr_t)(gameswf::ASMovieClip::addFrameScript));
  sub_776320((gameswf::String::Self *)v17, (gameswf::Self *)"addFrameScript");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v4, (const gameswf::String::Self *)v17, (const gameswf::ASValue::Self *)v6);
  sub_59CE50((int)(uintptr_t)(v17));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v6);
  v7[0] = 0;
  v7[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v7, (int)(uintptr_t)(gameswf::ASMovieClip::startDrag));
  sub_776320((gameswf::String::Self *)v18, (gameswf::Self *)"startDrag");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v4, (const gameswf::String::Self *)v18, (const gameswf::ASValue::Self *)v7);
  sub_59CE50((int)(uintptr_t)(v18));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v7);
  v8[0] = 0;
  v8[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v8, (int)(uintptr_t)(gameswf::ASMovieClip::stopDrag));
  sub_776320((gameswf::String::Self *)v19, (gameswf::Self *)"stopDrag");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v4, (const gameswf::String::Self *)v19, (const gameswf::ASValue::Self *)v8);
  sub_59CE50((int)(uintptr_t)(v19));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v8);
  v9[0] = 0;
  v9[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v9, (int)(uintptr_t)(gameswf::ASMovieClip::play));
  sub_776320((gameswf::String::Self *)v20, (gameswf::Self *)"play");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v4, (const gameswf::String::Self *)v20, (const gameswf::ASValue::Self *)v9);
  sub_59CE50((int)(uintptr_t)(v20));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v9);
  v10[0] = 0;
  v10[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v10, (int)(uintptr_t)(gameswf::ASMovieClip::stop));
  sub_776320((gameswf::String::Self *)v21, (gameswf::Self *)"stop");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v4, (const gameswf::String::Self *)v21, (const gameswf::ASValue::Self *)v10);
  sub_59CE50((int)(uintptr_t)(v21));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v10);
  v11[0] = 0;
  v11[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v11, (int)(uintptr_t)(gameswf::ASMovieClip::gotoAndPlay));
  sub_776320((gameswf::String::Self *)v22, (gameswf::Self *)"gotoAndPlay");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v4, (const gameswf::String::Self *)v22, (const gameswf::ASValue::Self *)v11);
  sub_59CE50((int)(uintptr_t)(v22));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v11);
  v12[0] = 0;
  v12[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v12, (int)(uintptr_t)(gameswf::ASMovieClip::gotoAndStop));
  sub_776320((gameswf::String::Self *)v23, (gameswf::Self *)"gotoAndStop");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v4, (const gameswf::String::Self *)v23, (const gameswf::ASValue::Self *)v12);
  sub_59CE50((int)(uintptr_t)(v23));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v12);
  v13[0] = 0;
  v13[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v13, (int)(uintptr_t)(gameswf::ASMovieClip::nextFrame));
  sub_776320((gameswf::String::Self *)v24, (gameswf::Self *)"nextFrame");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v4, (const gameswf::String::Self *)v24, (const gameswf::ASValue::Self *)v13);
  sub_59CE50((int)(uintptr_t)(v24));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v13);
  v14[0] = 0;
  v14[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v14, (int)(uintptr_t)(gameswf::ASMovieClip::prevFrame));
  sub_776320((gameswf::String::Self *)v25, (gameswf::Self *)"prevFrame");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v4, (const gameswf::String::Self *)v25, (const gameswf::ASValue::Self *)v14);
  sub_59CE50((int)(uintptr_t)(v25));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v14);
  return v4;
}


