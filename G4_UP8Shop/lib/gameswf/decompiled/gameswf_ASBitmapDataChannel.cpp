#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASBitmapDataChannel.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapDataChannel::createClass  (binary VA: 0x11586b0)
// Original: gameswf::ASBitmapDataChannel::createClass
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASBitmapDataChannel::createClass(gameswf::ASBitmapDataChannel::Self *self)
{
  gameswf::Self **v1;
  typedef uint8_t _g4_t_v3[4];
  typedef int64_t _g4_t_v4 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v5[4];
  typedef int64_t _g4_t_v6;
  typedef uint8_t _g4_t_v7[4];
  typedef int64_t _g4_t_v8 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v9[4];
  typedef int64_t _g4_t_v10;
  typedef uint8_t _g4_t_v11[4];
  typedef int64_t _g4_t_v12 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v13[20];
  typedef uint8_t _g4_t_v14[20];
  typedef uint8_t _g4_t_v15[20];
  typedef uint8_t _g4_t_v16[20];
  typedef uint8_t _g4_t_v17[48];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v5)) > _g4_s2 ? (12u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v6)) > _g4_s3 ? (16u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v7)) > _g4_s4 ? (24u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v8)) > _g4_s5 ? (28u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v9)) > _g4_s6 ? (36u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v10)) > _g4_s7 ? (40u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v11)) > _g4_s8 ? (48u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v12)) > _g4_s9 ? (52u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v13)) > _g4_s10 ? (60u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v14)) > _g4_s11 ? (80u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v15)) > _g4_s12 ? (100u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (120u + sizeof(_g4_t_v16)) > _g4_s13 ? (120u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (140u + sizeof(_g4_t_v17)) > _g4_s14 ? (140u + sizeof(_g4_t_v17)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 80u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 100u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 120u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 140u);

  sub_776320((gameswf::String::Self *)v13, (gameswf::Self *)"BitmapDataChannel");
  v3[0] = 2;
  v4 = 0;
  v3[1] = 0;
  v1 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(v1, self, (const gameswf::String::Self *)v13, nullptr, (const gameswf::ASValue::Self *)v3, false);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v3);
  sub_59CE50((int)(uintptr_t)(v13));
  v6 = 0x4020000000000000LL;
  v5[0] = 2;
  v5[1] = 0;
  sub_776320((gameswf::String::Self *)v14, (gameswf::Self *)"ALPHA");
  gameswf::ASObject::builtinMember((gameswf::ASObject::Self *)v1, (const gameswf::StringI::Self *)v14, (const gameswf::ASValue::Self *)v5);
  sub_59CE50((int)(uintptr_t)(v14));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v5);
  v8 = 0x4010000000000000LL;
  v7[0] = 2;
  v7[1] = 0;
  sub_776320((gameswf::String::Self *)v15, (gameswf::Self *)"BLUE");
  gameswf::ASObject::builtinMember((gameswf::ASObject::Self *)v1, (const gameswf::StringI::Self *)v15, (const gameswf::ASValue::Self *)v7);
  sub_59CE50((int)(uintptr_t)(v15));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v7);
  v10 = 0x4000000000000000LL;
  v9[0] = 2;
  v9[1] = 0;
  sub_776320((gameswf::String::Self *)v16, (gameswf::Self *)"GREEN");
  gameswf::ASObject::builtinMember((gameswf::ASObject::Self *)v1, (const gameswf::StringI::Self *)v16, (const gameswf::ASValue::Self *)v9);
  sub_59CE50((int)(uintptr_t)(v16));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v9);
  v12 = 0x3FF0000000000000LL;
  v11[0] = 2;
  v11[1] = 0;
  sub_776320((gameswf::String::Self *)v17, (gameswf::Self *)"RED");
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)v1,
    (const gameswf::StringI::Self *)v17,
    (const gameswf::ASValue::Self *)v11);
  sub_59CE50((int)(uintptr_t)(v17));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v11);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapDataChannel::channelToIndex  (binary VA: 0x11588b0)
// Original: gameswf::ASBitmapDataChannel::channelToIndex
// ----------------------------------------------------------------------------
int gameswf::ASBitmapDataChannel::channelToIndex(gameswf::ASBitmapDataChannel::Self *self)
{
  int result;

  result = 0;
  if ( (unsigned int)(uintptr_t)(self) - 2 <= 6 )
    return dword_1CC4EA8[(uint32_t)(uintptr_t)(self) - 2];
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASBitmapDataChannel::indexToChannel  (binary VA: 0x1158e80)
// Original: gameswf::ASBitmapDataChannel::indexToChannel
// ----------------------------------------------------------------------------
int gameswf::ASBitmapDataChannel::indexToChannel(gameswf::ASBitmapDataChannel::Self *self)
{
  int result;

  result = 0;
  if ( (unsigned int)(uintptr_t)(self) <= 3 )
    return dword_1CC4EC4[(uint32_t)(uintptr_t)(self)];
  return result;
}


