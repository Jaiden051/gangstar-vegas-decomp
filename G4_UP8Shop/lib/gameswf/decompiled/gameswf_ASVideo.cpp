#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASVideo.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASVideo::init  (binary VA: 0x114dae0)
// Original: gameswf::ASVideo::init
// ----------------------------------------------------------------------------
int gameswf::ASVideo::init(int a1)
{
  uint16_t *v1;
  int v2;
  int16_t v3;
  int result;

  v1 = *(uint16_t **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 18) == 0 )
    v1 = nullptr;
  v2 = 0;
  v3 = 320;
  if ( *(int *)(a1 + 16) > 0 )
  {
    v3 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v2 = 1;
  }
  v1[106] = v3;
  result = 240;
  if ( *(uint32_t *)(a1 + 16) > v2 )
    result = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * (*(uint32_t *)(a1 + 20) - v2)));
  v1[107] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASVideo::attachNetStream  (binary VA: 0x114dc80)
// Original: gameswf::ASVideo::attachNetStream
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASVideo::attachNetStream(int a1)
{
  gameswf::RefCounted::Self **v1;
  gameswf::RefCounted::Self *v2;
  int v3;
  gameswf::RefCounted::Self *result;

  v1 = *(gameswf::RefCounted::Self ***)(a1 + 4);
  if ( v1 != nullptr && (*((uint8_t (**)(uint32_t, int))*v1 + 2))(*(uint32_t *)(a1 + 4), 18) == 0 )
    v1 = nullptr;
  v2 = nullptr;
  v3 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v3 == 5 )
  {
    v2 = *(gameswf::RefCounted::Self **)(v3 + 4);
    if ( v2 != nullptr && G4_VCALL<uint8_t>(v2, 8, 26) == 0 )
      v2 = nullptr;
  }
  result = v1[55];
  if ( v2 != result )
  {
    if ( result != nullptr )
      result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(v1[55]);
    v1[55] = v2;
    if ( v2 != nullptr )
      return gameswf::RefCounted::addRef(v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASVideo::newOp  (binary VA: 0x114dde0)
// Original: gameswf::ASVideo::newOp
// ----------------------------------------------------------------------------
gameswf::VideoStreamInstance::Self * gameswf::ASVideo::newOp(gameswf::ASVideo::Self *self)
{
  gameswf::VideoStreamInstance::Self *v1;

  v1 = (gameswf::VideoStreamInstance::Self *)opNew(0xE0u);
  gameswf::VideoStreamInstance::Construct(v1, self, nullptr, nullptr, (char *)0xFFFFFFFF);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASVideo::createClass  (binary VA: 0x115a850)
// Original: gameswf::ASVideo::createClass
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASVideo::createClass(gameswf::ASVideo::Self *self)
{
  gameswf::Self **v1;
  typedef uint8_t _g4_t_v3[12];
  typedef uint8_t _g4_t_v4[12];
  typedef uint8_t _g4_t_v5[20];
  typedef uint8_t _g4_t_v6[32];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v5)) > _g4_s2 ? (24u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v6)) > _g4_s3 ? (44u + sizeof(_g4_t_v6)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 44u);

  sub_776320((gameswf::String::Self *)v5, (gameswf::Self *)"Video");
  v3[0] = 0;
  v3[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v3, (int)(uintptr_t)(gameswf::ASVideo::init));
  v1 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v1,
    self,
    (const gameswf::String::Self *)v5,
    gameswf::ASVideo::newOp,
    (const gameswf::ASValue::Self *)v3,
    false);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v3);
  sub_59CE50((int)(uintptr_t)(v5));
  v4[0] = 0;
  v4[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v4, (int)(uintptr_t)(gameswf::ASVideo::attachNetStream));
  sub_776320((gameswf::String::Self *)v6, (gameswf::Self *)"attachNetStream");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v1, (const gameswf::String::Self *)v6, (const gameswf::ASValue::Self *)v4);
  sub_59CE50((int)(uintptr_t)(v6));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v4);
  return v1;
}


