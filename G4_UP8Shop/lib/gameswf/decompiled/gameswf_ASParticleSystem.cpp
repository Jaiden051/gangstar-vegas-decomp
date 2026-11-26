#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASParticleSystem.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASParticleSystem::init  (binary VA: 0x114d6f0)
// Original: gameswf::ASParticleSystem::init
// ----------------------------------------------------------------------------
int gameswf::ASParticleSystem::init(int a1)
{
  return gameswf::ASModel3D::init(a1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASParticleSystem::unloadModel  (binary VA: 0x114d720)
// Original: gameswf::ASParticleSystem::unloadModel
// ----------------------------------------------------------------------------
void gameswf::ASParticleSystem::unloadModel()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASParticleSystem::newOp  (binary VA: 0x115c2f0)
// Original: gameswf::ASParticleSystem::newOp
// ----------------------------------------------------------------------------
gameswf::ASModel3D::Self * gameswf::ASParticleSystem::newOp(gameswf::ASParticleSystem::Self *self)
{
  gameswf::ASModel3D::Self *v1;

  v1 = (gameswf::ASModel3D::Self *)opNew(0x14Cu);
  gameswf::ASModel3D::Construct(v1, self);
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2091028);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASParticleSystem::loadModel  (binary VA: 0x115d160)
// Original: gameswf::ASParticleSystem::loadModel
// ----------------------------------------------------------------------------
void gameswf::ASParticleSystem::loadModel(gameswf::ASParticleSystem::Self *self, const gameswf::String::Self *a2)
{
  gameswf::ASModel3D::loadModel(self, a2, nullptr);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASParticleSystem::createClass  (binary VA: 0x115d7d0)
// Original: gameswf::ASParticleSystem::createClass
// ----------------------------------------------------------------------------
gameswf::Player::Self * gameswf::ASParticleSystem::createClass(gameswf::ASParticleSystem::Self *self)
{
  gameswf::Self **v1;
  gameswf::Player::Self *v2;
  typedef gameswf::ASClass::Self *_g4_t_Class;
  typedef gameswf::Player::Self *_g4_t_v5;
  typedef gameswf::Player::Self *_g4_t_v6;
  typedef uint8_t _g4_t_v7[12];
  typedef uint8_t _g4_t_v8[20];
  typedef uint8_t _g4_t_v9[32];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_Class)) > _g4_s0 ? (4u + sizeof(_g4_t_Class)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v6)) > _g4_s2 ? (12u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v7)) > _g4_s3 ? (28u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v8)) > _g4_s4 ? (40u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v9)) > _g4_s5 ? (60u + sizeof(_g4_t_v9)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_Class &Class = *reinterpret_cast<_g4_t_Class *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 60u);

  v5 = *((gameswf::Player::Self **)self + 4);
  sub_776320((gameswf::String::Self *)v8, (gameswf::Self *)"Model3D");
  Class = (gameswf::ASClass::Self *)gameswf::ASPackage::findClass(self, (const gameswf::String::Self *)v8, true);
  sub_776320((gameswf::String::Self *)v9, (gameswf::Self *)"ParticleSystem");
  v7[0] = 0;
  v7[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v7, (int)(uintptr_t)(gameswf::ASParticleSystem::init));
  v1 = (gameswf::Self **)opNew(0x8Cu);
  v2 = v5;
  v6 = (gameswf::Player::Self *)v1;
  gameswf::ASClass::Construct(
    v1,
    v2,
    Class,
    (const gameswf::String::Self *)v9,
    gameswf::ASParticleSystem::newOp,
    (const gameswf::ASValue::Self *)v7,
    nullptr);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v7);
  sub_59CE50((int)(uintptr_t)(v9));
  sub_59CE50((int)(uintptr_t)(v8));
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASParticleSystem::is  (binary VA: 0x11621a0)
// Original: gameswf::ASParticleSystem::is
// ----------------------------------------------------------------------------
bool gameswf::ASParticleSystem::is(gameswf::ASParticleSystem::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 68 && a2 != 67 && a2 != 4 && a2 != 1 && a2 != 57 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASParticleSystem::Destroy  (binary VA: 0x1163320)
// Original: gameswf::ASParticleSystem::~ASParticleSystem
// ----------------------------------------------------------------------------
void gameswf::ASParticleSystem::Destroy(volatile int32_t **self)
{
  *self = (volatile int32_t *)((uint32_t)(uintptr_t)&off_2091028);
  gameswf::ASModel3D::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASParticleSystem::Destroy_ea1163350  (binary VA: 0x1163350)
// Original: gameswf::ASParticleSystem::~ASParticleSystem
// ----------------------------------------------------------------------------
void gameswf::ASParticleSystem::Destroy_ea1163350(volatile int32_t **self)
{
  *self = (volatile int32_t *)((uint32_t)(uintptr_t)&off_2091028);
  gameswf::ASModel3D::Destroy(self);
  opDelete(self);
}


