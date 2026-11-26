#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASNetStatusEvent.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStatusEvent::init  (binary VA: 0x1164430)
// Original: gameswf::ASNetStatusEvent::init
// ----------------------------------------------------------------------------
void gameswf::ASNetStatusEvent::init()
{
  ;
}



// ============================================================================
// Address:   0x11657e0 (size: 77 bytes)
// Symbol:    _ZN7gameswf16ASNetStatusEventC2EPNS_6PlayerE
// Demangled: gameswf::ASNetStatusEvent::ASNetStatusEvent(gameswf::Player *)
// ============================================================================
// Alternative name is '_ZN7gameswf16ASNetStatusEventC1EPNS_6PlayerE'
void (**gameswf::ASNetStatusEvent::ASNetStatusEvent(
        gameswf::ASNetStatusEvent::Self *self,
        gameswf::Player::Self *a2))(gameswf::ASNetStatusEvent::Self * self)
{
  gameswf::ASEvent::Construct(self, a2, (gameswf::Self *)&unk_1B15112);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20914C8);
  return (void (**)(gameswf::ASNetStatusEvent::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20914C8));
}
// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStatusEvent::newOp  (binary VA: 0x1165830)
// Original: gameswf::ASNetStatusEvent::newOp
// ----------------------------------------------------------------------------
gameswf::ASNetStatusEvent::Self * gameswf::ASNetStatusEvent::newOp(gameswf::ASNetStatusEvent::Self *self)
{
  gameswf::ASNetStatusEvent::Self *v1;

  v1 = (gameswf::ASNetStatusEvent::Self *)opNew(0x54u);
  gameswf::ASNetStatusEvent::ASNetStatusEvent(v1, self);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStatusEvent::createClass  (binary VA: 0x1167c50)
// Original: gameswf::ASNetStatusEvent::createClass
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASNetStatusEvent::createClass(gameswf::ASNetStatusEvent::Self *self)
{
  gameswf::Self **v1;
  gameswf::String::Self *v2;
  typedef uint8_t _g4_t_v4[12];
  typedef const gameswf::String::Self *_g4_t_v5[3];
  typedef uint8_t _g4_t_v6[20];
  typedef char _g4_t_v7[20];
  typedef uint8_t _g4_t_v8[48];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v5)) > _g4_s1 ? (24u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v6)) > _g4_s2 ? (36u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v7)) > _g4_s3 ? (56u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v8)) > _g4_s4 ? (76u + sizeof(_g4_t_v8)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 36u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 56u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 76u);

  sub_776320((gameswf::String::Self *)v6, (gameswf::Self *)"NetStatusEvent");
  v4[0] = 0;
  v4[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v4, (int)(uintptr_t)(gameswf::ASNetStatusEvent::init));
  v1 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v1,
    self,
    (const gameswf::String::Self *)v6,
    gameswf::ASNetStatusEvent::newOp,
    (const gameswf::ASValue::Self *)v4,
    false);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v4);
  sub_59CE50((int)(uintptr_t)(v6));
  sub_776320((gameswf::String::Self *)v7, (gameswf::Self *)"netStatus");
  v2 = sub_1166B80((int *)self + 12, v7);
  LOWORD(v5[0]) = 0;
  v5[1] = nullptr;
  gameswf::ASValue::setString(v5, v2);
  sub_776320((gameswf::String::Self *)v8, (gameswf::Self *)"NET_STATUS");
  gameswf::ASObject::builtinMember((gameswf::ASObject::Self *)v1, (const gameswf::StringI::Self *)v8, (const gameswf::ASValue::Self *)v5);
  sub_59CE50((int)(uintptr_t)(v8));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v5);
  sub_59CE50((int)(uintptr_t)(v7));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStatusEvent::is  (binary VA: 0x116aa40)
// Original: gameswf::ASNetStatusEvent::is
// ----------------------------------------------------------------------------
bool gameswf::ASNetStatusEvent::is(gameswf::ASNetStatusEvent::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 55 && a2 != 51 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStatusEvent::Destroy  (binary VA: 0x116ac70)
// Original: gameswf::ASNetStatusEvent::~ASNetStatusEvent
// ----------------------------------------------------------------------------
void gameswf::ASNetStatusEvent::Destroy(gameswf::Self **self)
{
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_20911C8);
  sub_7E5E90(self + 19);
  sub_7E5E90(self + 17);
  sub_59CE50((int)(uintptr_t)(self + 10));
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetStatusEvent::Destroy_ea116adb0  (binary VA: 0x116adb0)
// Original: gameswf::ASNetStatusEvent::~ASNetStatusEvent
// ----------------------------------------------------------------------------
void gameswf::ASNetStatusEvent::Destroy_ea116adb0(gameswf::Self **self)
{
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_20911C8);
  sub_7E5E90(self + 19);
  sub_7E5E90(self + 17);
  sub_59CE50((int)(uintptr_t)(self + 10));
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
  opDelete(self);
}


