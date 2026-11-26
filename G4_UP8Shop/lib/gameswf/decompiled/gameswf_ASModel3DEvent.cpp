#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASModel3DEvent.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3DEvent::init  (binary VA: 0x114d6e0)
// Original: gameswf::ASModel3DEvent::init
// ----------------------------------------------------------------------------
void gameswf::ASModel3DEvent::init()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3DEvent::newOp  (binary VA: 0x114da70)
// Original: gameswf::ASModel3DEvent::newOp
// ----------------------------------------------------------------------------
gameswf::ASEvent::Self * gameswf::ASModel3DEvent::newOp(gameswf::ASModel3DEvent::Self *self)
{
  gameswf::ASEvent::Self *v1;

  v1 = (gameswf::ASEvent::Self *)opNew(0x60u);
  gameswf::ASEvent::Construct(v1, self, (gameswf::Self *)&unk_1B15112);
  *((uint32_t *)v1 + 21) = 0;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2090FA8);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3DEvent::getMemberByName  (binary VA: 0x114f020)
// Original: gameswf::ASModel3DEvent::getMemberByName
// ----------------------------------------------------------------------------
int gameswf::ASModel3DEvent::getMemberByName(gameswf::ASModel3DEvent::Self *self, const gameswf::StringI::Self *a2, gameswf::ASValue::Self *a3)
{
  gameswf::String::Self *v3;
  gameswf::String::Self *v4;
  gameswf::String::Self *v5;
  double v7; // xmm0_8

  v3 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a2 + 1));
  if ( *(uint8_t *)a2 == 0xFF )
    v3 = *((gameswf::String::Self **)a2 + 3);
  if ( gameswf::String::stricmp(v3, "animatorID") != 0 )
  {
    v4 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a2 + 1));
    if ( *(uint8_t *)a2 == 0xFF )
      v4 = *((gameswf::String::Self **)a2 + 3);
    if ( gameswf::String::stricmp(v4, "animationID") != 0 )
    {
      v5 = (gameswf::String::Self *)((const gameswf::StringI::Self *)((char *)a2 + 1));
      if ( *(uint8_t *)a2 == 0xFF )
        v5 = *((gameswf::String::Self **)a2 + 3);
      if ( gameswf::String::stricmp(v5, "currentClipIndex") != 0 )
      {
        return gameswf::ASObject::getMemberByName(self, a2, a3);
      }
      else
      {
        v7 = (double)(*(int (**)(uint32_t))(**((uint32_t **)self + 21) + 60))(*((uint32_t *)self + 21));
        gameswf::ASValue::setDouble(a3, v7);
        return 1;
      }
    }
    else
    {
      gameswf::ASValue::setDouble(a3, (double)*((int *)self + 23));
      return 1;
    }
  }
  else
  {
    gameswf::ASValue::setDouble(a3, (double)*((int *)self + 22));
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3DEvent::createClass  (binary VA: 0x115fe20)
// Original: gameswf::ASModel3DEvent::createClass
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASModel3DEvent::createClass(int **self)
{
  char *v1;
  typedef gameswf::ASClass::Self *_g4_t_Class;
  typedef gameswf::Self **_g4_t_v4;
  typedef uint8_t _g4_t_v5[12];
  typedef const gameswf::String::Self *_g4_t_v6[3];
  typedef uint8_t _g4_t_v7[20];
  typedef uint8_t _g4_t_v8[20];
  typedef uint8_t _g4_t_v9[20];
  typedef uint8_t _g4_t_v10[20];
  typedef uint8_t _g4_t_v11[48];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_Class)) > _g4_s0 ? (8u + sizeof(_g4_t_Class)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v5)) > _g4_s2 ? (20u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v6)) > _g4_s3 ? (32u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v7)) > _g4_s4 ? (44u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v8)) > _g4_s5 ? (64u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (84u + sizeof(_g4_t_v9)) > _g4_s6 ? (84u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (104u + sizeof(_g4_t_v10)) > _g4_s7 ? (104u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (124u + sizeof(_g4_t_v11)) > _g4_s8 ? (124u + sizeof(_g4_t_v11)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_Class &Class = *reinterpret_cast<_g4_t_Class *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 44u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 64u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 84u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 104u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 124u);

  sub_776320((gameswf::String::Self *)v8, (gameswf::Self *)"Event");
  sub_776320((gameswf::String::Self *)v7, (gameswf::Self *)"flash.events");
  Class = (gameswf::ASClass::Self *)gameswf::ASClassManager::findClass(
                                (gameswf::ASClassManager::Self *)(self + 59),
                                (const gameswf::String::Self *)v7,
                                (const gameswf::String::Self *)v8,
                                true);
  sub_776320((gameswf::String::Self *)v9, (gameswf::Self *)"Model3DEvent");
  v5[0] = 0;
  v5[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v5, (int)(uintptr_t)(gameswf::ASModel3DEvent::init));
  v4 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v4,
    (gameswf::Player::Self *)self,
    Class,
    (const gameswf::String::Self *)v9,
    gameswf::ASModel3DEvent::newOp,
    (const gameswf::ASValue::Self *)v5,
    nullptr);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v5);
  sub_59CE50((int)(uintptr_t)(v9));
  sub_59CE50((int)(uintptr_t)(v7));
  sub_59CE50((int)(uintptr_t)(v8));
  sub_776320((gameswf::String::Self *)v10, (gameswf::Self *)"timeline_end");
  v1 = gameswf::PermanentStringCache::get(self + 12, (const gameswf::String::Self *)v10);
  LOWORD(v6[0]) = 0;
  v6[1] = nullptr;
  gameswf::ASValue::setString(v6, (const gameswf::String::Self *)v1);
  sub_776320((gameswf::String::Self *)v11, (gameswf::Self *)"TIMELINE_END");
  gameswf::ASObject::builtinMember((gameswf::ASObject::Self *)v4, (const gameswf::StringI::Self *)v11, (const gameswf::ASValue::Self *)v6);
  sub_59CE50((int)(uintptr_t)(v11));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v6);
  sub_59CE50((int)(uintptr_t)(v10));
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3DEvent::is  (binary VA: 0x1162180)
// Original: gameswf::ASModel3DEvent::is
// ----------------------------------------------------------------------------
bool gameswf::ASModel3DEvent::is(gameswf::ASModel3DEvent::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 69 && a2 != 51 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3DEvent::Destroy  (binary VA: 0x1162d90)
// Original: gameswf::ASModel3DEvent::~ASModel3DEvent
// ----------------------------------------------------------------------------
void gameswf::ASModel3DEvent::Destroy(gameswf::ASModel3DEvent::Self *self)
{
  uint32_t *v1;
  gameswf::Self *v2;
  bool v3;
  gameswf::Self *v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090FA8);
  v1 = *((uint32_t **)self + 21);
  if ( v1 != nullptr )
    sub_5459C0((uint32_t *)((char *)v1 + *(uint32_t *)(*v1 - 12)));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20911C8);
  v2 = *((gameswf::Self **)self + 19);
  if ( v2 != nullptr )
  {
    v3 = (*(uint16_t *)v2)-- == 1;
    if ( v3 )
      gameswf::free_internal(v2);
  }
  v4 = *((gameswf::Self **)self + 17);
  if ( v4 != nullptr )
  {
    v3 = (*(uint16_t *)v4)-- == 1;
    if ( v3 )
      gameswf::free_internal(v4);
  }
  sub_59CE50((int)(uintptr_t)(self) + 40);
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASModel3DEvent::Destroy_ea1162f70  (binary VA: 0x1162f70)
// Original: gameswf::ASModel3DEvent::~ASModel3DEvent
// ----------------------------------------------------------------------------
void gameswf::ASModel3DEvent::Destroy_ea1162f70(gameswf::ASModel3DEvent::Self *self)
{
  uint32_t *v1;
  gameswf::Self *v2;
  bool v3;
  gameswf::Self *v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090FA8);
  v1 = *((uint32_t **)self + 21);
  if ( v1 != nullptr )
    sub_5459C0((uint32_t *)((char *)v1 + *(uint32_t *)(*v1 - 12)));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20911C8);
  v2 = *((gameswf::Self **)self + 19);
  if ( v2 != nullptr )
  {
    v3 = (*(uint16_t *)v2)-- == 1;
    if ( v3 )
      gameswf::free_internal(v2);
  }
  v4 = *((gameswf::Self **)self + 17);
  if ( v4 != nullptr )
  {
    v3 = (*(uint16_t *)v4)-- == 1;
    if ( v3 )
      gameswf::free_internal(v4);
  }
  sub_59CE50((int)(uintptr_t)(self) + 40);
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}


