#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASTimerEvent.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimerEvent::init  (binary VA: 0x1164420)
// Original: gameswf::ASTimerEvent::init
// ----------------------------------------------------------------------------
void gameswf::ASTimerEvent::init()
{
  ;
}



// ============================================================================
// Address:   0x1165740 (size: 77 bytes)
// Symbol:    _ZN7gameswf12ASTimerEventC2EPNS_6PlayerE
// Demangled: gameswf::ASTimerEvent::ASTimerEvent(gameswf::Player *)
// ============================================================================
// Alternative name is '_ZN7gameswf12ASTimerEventC1EPNS_6PlayerE'
void (**gameswf::ASTimerEvent::ASTimerEvent(
        gameswf::ASTimerEvent::Self *self,
        gameswf::Player::Self *a2))(gameswf::ASTimerEvent::Self * self)
{
  gameswf::ASEvent::Construct(self, a2, (gameswf::Self *)&unk_1B15112);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091448);
  return (void (**)(gameswf::ASTimerEvent::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2091448));
}
// ----------------------------------------------------------------------------
// Function: gameswf::ASTimerEvent::newOp  (binary VA: 0x1165790)
// Original: gameswf::ASTimerEvent::newOp
// ----------------------------------------------------------------------------
gameswf::ASTimerEvent::Self * gameswf::ASTimerEvent::newOp(gameswf::ASTimerEvent::Self *self)
{
  gameswf::ASTimerEvent::Self *v1;

  v1 = (gameswf::ASTimerEvent::Self *)opNew(0x54u);
  gameswf::ASTimerEvent::ASTimerEvent(v1, self);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimerEvent::createClass  (binary VA: 0x1167a60)
// Original: gameswf::ASTimerEvent::createClass
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASTimerEvent::createClass(gameswf::ASTimerEvent::Self *self)
{
  gameswf::Self **v1;
  gameswf::String::Self *v2;
  gameswf::String::Self *v3;
  typedef uint8_t _g4_t_v5[12];
  typedef const gameswf::String::Self *_g4_t_v6[3];
  typedef const gameswf::String::Self *_g4_t_v7[3];
  typedef uint8_t _g4_t_v8[20];
  typedef char _g4_t_v9[20];
  typedef uint8_t _g4_t_v10[20];
  typedef char _g4_t_v11[20];
  typedef uint8_t _g4_t_v12[48];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v6)) > _g4_s1 ? (20u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v7)) > _g4_s2 ? (32u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v8)) > _g4_s3 ? (44u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v9)) > _g4_s4 ? (64u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (84u + sizeof(_g4_t_v10)) > _g4_s5 ? (84u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (104u + sizeof(_g4_t_v11)) > _g4_s6 ? (104u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (124u + sizeof(_g4_t_v12)) > _g4_s7 ? (124u + sizeof(_g4_t_v12)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 44u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 64u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 84u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 104u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 124u);

  sub_776320((gameswf::String::Self *)v8, (gameswf::Self *)"TimerEvent");
  v5[0] = 0;
  v5[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v5, (int)(uintptr_t)(gameswf::ASTimerEvent::init));
  v1 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v1,
    self,
    (const gameswf::String::Self *)v8,
    gameswf::ASTimerEvent::newOp,
    (const gameswf::ASValue::Self *)v5,
    false);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v5);
  sub_59CE50((int)(uintptr_t)(v8));
  sub_776320((gameswf::String::Self *)v9, (gameswf::Self *)"timer");
  v2 = sub_1166B80((int *)self + 12, v9);
  LOWORD(v6[0]) = 0;
  v6[1] = nullptr;
  gameswf::ASValue::setString(v6, v2);
  sub_776320((gameswf::String::Self *)v10, (gameswf::Self *)"TIMER");
  gameswf::ASObject::builtinMember((gameswf::ASObject::Self *)v1, (const gameswf::StringI::Self *)v10, (const gameswf::ASValue::Self *)v6);
  sub_59CE50((int)(uintptr_t)(v10));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v6);
  sub_59CE50((int)(uintptr_t)(v9));
  sub_776320((gameswf::String::Self *)v11, (gameswf::Self *)"timerComplete");
  v3 = sub_1166B80((int *)self + 12, v11);
  LOWORD(v7[0]) = 0;
  v7[1] = nullptr;
  gameswf::ASValue::setString(v7, v3);
  sub_776320((gameswf::String::Self *)v12, (gameswf::Self *)"TIMER_COMPLETE");
  gameswf::ASObject::builtinMember((gameswf::ASObject::Self *)v1, (const gameswf::StringI::Self *)v12, (const gameswf::ASValue::Self *)v7);
  sub_59CE50((int)(uintptr_t)(v12));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v7);
  sub_59CE50((int)(uintptr_t)(v11));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimerEvent::is  (binary VA: 0x116aa20)
// Original: gameswf::ASTimerEvent::is
// ----------------------------------------------------------------------------
bool gameswf::ASTimerEvent::is(gameswf::ASTimerEvent::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 54 && a2 != 51 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimerEvent::Destroy  (binary VA: 0x116ac10)
// Original: gameswf::ASTimerEvent::~ASTimerEvent
// ----------------------------------------------------------------------------
void gameswf::ASTimerEvent::Destroy(gameswf::Self **self)
{
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_20911C8);
  sub_7E5E90(self + 19);
  sub_7E5E90(self + 17);
  sub_59CE50((int)(uintptr_t)(self + 10));
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASTimerEvent::Destroy_ea116ae20  (binary VA: 0x116ae20)
// Original: gameswf::ASTimerEvent::~ASTimerEvent
// ----------------------------------------------------------------------------
void gameswf::ASTimerEvent::Destroy_ea116ae20(gameswf::Self **self)
{
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_20911C8);
  sub_7E5E90(self + 19);
  sub_7E5E90(self + 17);
  sub_59CE50((int)(uintptr_t)(self + 10));
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
  opDelete(self);
}


