#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASEventPhase.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASEventPhase::createClass  (binary VA: 0x1165070)
// Original: gameswf::ASEventPhase::createClass
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASEventPhase::createClass(gameswf::ASEventPhase::Self *self)
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
  typedef uint8_t _g4_t_v11[20];
  typedef uint8_t _g4_t_v12[20];
  typedef uint8_t _g4_t_v13[20];
  typedef uint8_t _g4_t_v14[48];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v5)) > _g4_s2 ? (12u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v6)) > _g4_s3 ? (16u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v7)) > _g4_s4 ? (24u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v8)) > _g4_s5 ? (28u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v9)) > _g4_s6 ? (36u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v10)) > _g4_s7 ? (40u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v11)) > _g4_s8 ? (48u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v12)) > _g4_s9 ? (68u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v13)) > _g4_s10 ? (88u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v14)) > _g4_s11 ? (108u + sizeof(_g4_t_v14)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 68u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 88u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 108u);

  sub_776320((gameswf::String::Self *)v11, (gameswf::Self *)"EventPhase");
  v3[0] = 2;
  v4 = 0;
  v3[1] = 0;
  v1 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(v1, self, (const gameswf::String::Self *)v11, nullptr, (const gameswf::ASValue::Self *)v3, false);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v3);
  sub_59CE50((int)(uintptr_t)(v11));
  v6 = 0x3FF0000000000000LL;
  v5[0] = 2;
  v5[1] = 0;
  sub_776320((gameswf::String::Self *)v12, (gameswf::Self *)"CAPTURING_PHASE");
  gameswf::ASObject::builtinMember((gameswf::ASObject::Self *)v1, (const gameswf::StringI::Self *)v12, (const gameswf::ASValue::Self *)v5);
  sub_59CE50((int)(uintptr_t)(v12));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v5);
  v8 = 0x4000000000000000LL;
  v7[0] = 2;
  v7[1] = 0;
  sub_776320((gameswf::String::Self *)v13, (gameswf::Self *)"AT_TARGET");
  gameswf::ASObject::builtinMember((gameswf::ASObject::Self *)v1, (const gameswf::StringI::Self *)v13, (const gameswf::ASValue::Self *)v7);
  sub_59CE50((int)(uintptr_t)(v13));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v7);
  v10 = 0x4008000000000000LL;
  v9[0] = 2;
  v9[1] = 0;
  sub_776320((gameswf::String::Self *)v14, (gameswf::Self *)"BUBBLING_PHASE");
  gameswf::ASObject::builtinMember((gameswf::ASObject::Self *)v1, (const gameswf::StringI::Self *)v14, (const gameswf::ASValue::Self *)v9);
  sub_59CE50((int)(uintptr_t)(v14));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v9);
  return v1;
}


