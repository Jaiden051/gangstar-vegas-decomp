#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASKeyboardEvent.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASKeyboardEvent::init  (binary VA: 0x1164410)
// Original: gameswf::ASKeyboardEvent::init
// ----------------------------------------------------------------------------
void gameswf::ASKeyboardEvent::init()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASKeyboardEvent::getStandardMember  (binary VA: 0x1164e00)
// Original: gameswf::ASKeyboardEvent::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASKeyboardEvent::getStandardMember(int a1, int a2, gameswf::ASValue::Self *a3)
{
  int result;
  int v4;

  switch ( a2 )
  {
    case 'Y':
      gameswf::ASValue::setDouble(a3, (double)*(int *)(a1 + 84));
      return 1;
    case 'Z':
      gameswf::ASValue::setDouble(a3, (double)*(int *)(a1 + 88));
      return 1;
    case '[':
      v4 = *(uint8_t *)(a1 + 92);
      goto LABEL_5;
    case '\\':
      v4 = *(uint8_t *)(a1 + 93);
      goto LABEL_5;
    case ']':
      v4 = *(uint8_t *)(a1 + 94);
LABEL_5:
      gameswf::ASValue::setDouble(a3, (double)v4);
      result = 1;
      break;
    default:
      result = gameswf::ASEvent::getStandardMember((uint32_t *)a1, a2, (const gameswf::String::Self **)a3);
      break;
  }
  return result;
}



// ============================================================================
// Address:   0x1165680 (size: 107 bytes)
// Symbol:    _ZN7gameswf15ASKeyboardEventC2EPNS_6PlayerE
// Demangled: gameswf::ASKeyboardEvent::ASKeyboardEvent(gameswf::Player *)
// ============================================================================
// Alternative name is '_ZN7gameswf15ASKeyboardEventC1EPNS_6PlayerE'
void (**gameswf::ASKeyboardEvent::ASKeyboardEvent(
        gameswf::ASKeyboardEvent::Self *self,
        gameswf::Player::Self *a2))(gameswf::ASKeyboardEvent::Self * self)
{
  gameswf::ASEvent::Construct(self, a2, (gameswf::Self *)&unk_1B15112);
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091348);
  *((uint8_t *)self + 92) = 0;
  *((uint8_t *)self + 93) = 0;
  *((uint8_t *)self + 94) = 0;
  *((uint8_t *)self + 60) = 1;
  return (void (**)(gameswf::ASKeyboardEvent::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2091348));
}
// ----------------------------------------------------------------------------
// Function: gameswf::ASKeyboardEvent::newOp  (binary VA: 0x11656f0)
// Original: gameswf::ASKeyboardEvent::newOp
// ----------------------------------------------------------------------------
gameswf::ASKeyboardEvent::Self * gameswf::ASKeyboardEvent::newOp(gameswf::ASKeyboardEvent::Self *self)
{
  gameswf::ASKeyboardEvent::Self *v1;

  v1 = (gameswf::ASKeyboardEvent::Self *)opNew(0x60u);
  gameswf::ASKeyboardEvent::ASKeyboardEvent(v1, self);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASKeyboardEvent::createClass  (binary VA: 0x1167820)
// Original: gameswf::ASKeyboardEvent::createClass
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASKeyboardEvent::createClass(gameswf::ASKeyboardEvent::Self *self)
{
  gameswf::Self **v1;
  gameswf::String::Self *v2;
  gameswf::String::Self *v3;
  typedef gameswf::ASClass::Self *_g4_t_Class;
  typedef int *_g4_t_v6;
  typedef uint8_t _g4_t_v7[12];
  typedef const gameswf::String::Self *_g4_t_v8[3];
  typedef const gameswf::String::Self *_g4_t_v9[3];
  typedef uint8_t _g4_t_v10[20];
  typedef uint8_t _g4_t_v11[20];
  typedef char _g4_t_v12[20];
  typedef uint8_t _g4_t_v13[20];
  typedef char _g4_t_v14[20];
  typedef uint8_t _g4_t_v15[48];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_Class)) > _g4_s0 ? (8u + sizeof(_g4_t_Class)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v7)) > _g4_s2 ? (20u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v8)) > _g4_s3 ? (32u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v9)) > _g4_s4 ? (44u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v10)) > _g4_s5 ? (56u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v11)) > _g4_s6 ? (76u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v12)) > _g4_s7 ? (96u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (116u + sizeof(_g4_t_v13)) > _g4_s8 ? (116u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (136u + sizeof(_g4_t_v14)) > _g4_s9 ? (136u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (156u + sizeof(_g4_t_v15)) > _g4_s10 ? (156u + sizeof(_g4_t_v15)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_Class &Class = *reinterpret_cast<_g4_t_Class *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 56u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 76u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 96u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 116u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 136u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 156u);

  v6 = *((int **)self + 4);
  sub_776320((gameswf::String::Self *)v10, (gameswf::Self *)"Event");
  Class = (gameswf::ASClass::Self *)gameswf::ASPackage::findClass(self, (const gameswf::String::Self *)v10, true);
  sub_776320((gameswf::String::Self *)v11, (gameswf::Self *)"KeyboardEvent");
  v7[0] = 0;
  v7[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v7, (int)(uintptr_t)(gameswf::ASKeyboardEvent::init));
  v1 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v1,
    (gameswf::Player::Self *)v6,
    Class,
    (const gameswf::String::Self *)v11,
    gameswf::ASKeyboardEvent::newOp,
    (const gameswf::ASValue::Self *)v7,
    nullptr);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v7);
  sub_59CE50((int)(uintptr_t)(v11));
  sub_59CE50((int)(uintptr_t)(v10));
  sub_776320((gameswf::String::Self *)v12, (gameswf::Self *)"keyDown");
  v2 = sub_1166B80(v6 + 12, v12);
  LOWORD(v8[0]) = 0;
  v8[1] = nullptr;
  gameswf::ASValue::setString(v8, v2);
  sub_776320((gameswf::String::Self *)v13, (gameswf::Self *)"KEY_DOWN");
  gameswf::ASObject::builtinMember((gameswf::ASObject::Self *)v1, (const gameswf::StringI::Self *)v13, (const gameswf::ASValue::Self *)v8);
  sub_59CE50((int)(uintptr_t)(v13));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v8);
  sub_59CE50((int)(uintptr_t)(v12));
  sub_776320((gameswf::String::Self *)v14, (gameswf::Self *)"keyUp");
  v3 = sub_1166B80(v6 + 12, v14);
  LOWORD(v9[0]) = 0;
  v9[1] = nullptr;
  gameswf::ASValue::setString(v9, v3);
  sub_776320((gameswf::String::Self *)v15, (gameswf::Self *)"KEY_UP");
  gameswf::ASObject::builtinMember((gameswf::ASObject::Self *)v1, (const gameswf::StringI::Self *)v15, (const gameswf::ASValue::Self *)v9);
  sub_59CE50((int)(uintptr_t)(v15));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v9);
  sub_59CE50((int)(uintptr_t)(v14));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASKeyboardEvent::is  (binary VA: 0x116aa00)
// Original: gameswf::ASKeyboardEvent::is
// ----------------------------------------------------------------------------
bool gameswf::ASKeyboardEvent::is(gameswf::ASKeyboardEvent::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 53 && a2 != 51 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASKeyboardEvent::Destroy  (binary VA: 0x116aae0)
// Original: gameswf::ASKeyboardEvent::~ASKeyboardEvent
// ----------------------------------------------------------------------------
void gameswf::ASKeyboardEvent::Destroy(gameswf::Self **self)
{
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_20911C8);
  sub_7E5E90(self + 19);
  sub_7E5E90(self + 17);
  sub_59CE50((int)(uintptr_t)(self + 10));
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASKeyboardEvent::Destroy_ea116abb0  (binary VA: 0x116abb0)
// Original: gameswf::ASKeyboardEvent::~ASKeyboardEvent
// ----------------------------------------------------------------------------
void gameswf::ASKeyboardEvent::Destroy_ea116abb0(gameswf::Self **self)
{
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_20911C8);
  sub_7E5E90(self + 19);
  sub_7E5E90(self + 17);
  sub_59CE50((int)(uintptr_t)(self + 10));
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
}


