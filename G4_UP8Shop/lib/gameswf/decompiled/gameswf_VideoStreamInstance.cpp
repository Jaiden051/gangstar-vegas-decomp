#include "Core/Utils/DecompTypes.h"
#include "gameswf_VideoStreamInstance.h"

// ----------------------------------------------------------------------------
// Function: gameswf::VideoStreamInstance::clearRefs  (binary VA: 0x1111680)
// Original: gameswf::VideoStreamInstance::clearRefs
// ----------------------------------------------------------------------------
int gameswf::VideoStreamInstance::clearRefs(gameswf::VideoStreamInstance::Self *self, int a2)
{
  int v2;

  v2 = *((uint32_t *)self + 55);
  if ( v2 != 0 && *(uint32_t *)(v2 + 20) < a2 )
  {
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 55));
    *((uint32_t *)self + 55) = 0;
  }
  return gameswf::Character::clearRefs(self, a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::VideoStreamInstance::thisAlive  (binary VA: 0x11116f0)
// Original: gameswf::VideoStreamInstance::thisAlive
// ----------------------------------------------------------------------------
uint32_t * gameswf::VideoStreamInstance::thisAlive(gameswf::VideoStreamInstance::Self *self)
{
  int v1;

  v1 = *((uint32_t *)self + 55);
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 76))(*((uint32_t *)self + 55));
  return gameswf::Character::thisAlive(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::VideoStreamInstance::getBoundInternal  (binary VA: 0x1111740)
// Original: gameswf::VideoStreamInstance::getBoundInternal
// ----------------------------------------------------------------------------
gameswf::Rect::Self * gameswf::VideoStreamInstance::getBoundInternal(gameswf::Matrix::Self **self, gameswf::Rect::Self *a2)
{
  *(uint32_t *)a2 = 0;
  *((uint32_t *)a2 + 2) = 0;
  *((float *)a2 + 1) = (float)((float)0 * 65536.0) + (float)*((uint16_t *)self + 106);
  *((float *)a2 + 3) = (float)((float)0 * 65536.0) + (float)*((uint16_t *)self + 107);
  return gameswf::Matrix::transform(*(self + 17), a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::VideoStreamInstance::display  (binary VA: 0x11117c0)
// Original: gameswf::VideoStreamInstance::display
// ----------------------------------------------------------------------------
int gameswf::VideoStreamInstance::display(gameswf::VideoStreamInstance::Self *self)
{
  int result;
  gameswf::VideoHandler::Self *VideoHandler;
  int v3;
  float v4; // xmm2_4
  typedef uint8_t _g4_t_v5[4];
  typedef float _g4_t_v6[4];
  typedef uint32_t _g4_t_v7[6];
  typedef float _g4_t_v8[11];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v7)) > _g4_s2 ? (24u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v8)) > _g4_s3 ? (48u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 48u);

  result = *((uint32_t *)self + 55);
  if ( result != 0 )
  {
    VideoHandler = (gameswf::VideoHandler::Self *)gameswf::ASNetStream::getVideoHandler(*((gameswf::ASNetStream::Self **)self + 55));
    v6[0] = 0.0;
    v3 = *((uint16_t *)self + 106);
    v6[2] = 0.0;
    v4 = (float)*((uint16_t *)self + 107);
    v6[1] = (float)((float)0 * 65536.0) + (float)v3;
    v6[3] = (float)((float)0 * 65536.0) + v4;
    std::memcpy(v8, gameswf::Character::getWorldCxForm(self), 32);
    gameswf::CxForm::transform(v5, v8, 0xFFFFFFFF);
    std::memcpy(v7, gameswf::Character::getWorldMatrix(self), sizeof(v7));
    return ((gameswf::VideoHandler::display(
             VideoHandler,
             (const gameswf::Matrix::Self *)v7,
             (const gameswf::Rect::Self *)v6,
             (const gameswf::Color::Self *)v5)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::VideoStreamInstance::advance  (binary VA: 0x1111920)
// Original: gameswf::VideoStreamInstance::advance
// ----------------------------------------------------------------------------
int gameswf::VideoStreamInstance::advance(gameswf::VideoStreamInstance::Self *self)
{
  int result;

  result = *((uint32_t *)self + 55);
  if ( result != 0 )
    return gameswf::ASNetStream::dispatchEvents(*((gameswf::ASNetStream::Self **)self + 55));
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::VideoStreamInstance::Destroy  (binary VA: 0x1111950)
// Original: gameswf::VideoStreamInstance::~VideoStreamInstance
// ----------------------------------------------------------------------------
void gameswf::VideoStreamInstance::Destroy(gameswf::RefCounted::Self **self)
{
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208F908);
  if ( *(self + 55) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 55));
  if ( *(self + 54) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 54));
  gameswf::Character::Destroy((gameswf::Character::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::VideoStreamInstance::Destroy_ea11119b0  (binary VA: 0x11119b0)
// Original: gameswf::VideoStreamInstance::~VideoStreamInstance
// ----------------------------------------------------------------------------
void gameswf::VideoStreamInstance::Destroy_ea11119b0(gameswf::RefCounted::Self **self)
{
  gameswf::VideoStreamInstance::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::VideoStreamInstance::getMemberByName  (binary VA: 0x11119f0)
// Original: gameswf::VideoStreamInstance::getMemberByName
// ----------------------------------------------------------------------------
int gameswf::VideoStreamInstance::getMemberByName(gameswf::VideoStreamInstance::Self *self, gameswf::String::Self **a2, gameswf::ASValue::Self *a3)
{
  char MemberByName;
  int v4;
  gameswf::String::Self *v5;
  int v6;
  uint8_t v8[12];

  MemberByName = gameswf::ASObject::getMemberByName(self, (const gameswf::StringI::Self *)a2, a3);
  v4 = 1;
  if ( MemberByName == 0 )
  {
    if ( *(uint8_t *)a2 == 0xFF )
      v5 = a2[3];
    else
      v5 = (gameswf::String::Self *)((char *)a2 + 1);
    v6 = gameswf::String::stricmp(v5, "attachVideo");
    v4 = 0;
    if ( v6 == 0 )
    {
      v8[0] = 0;
      v8[1] = 0;
      gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v8, (int)(uintptr_t)(gameswf::attachVideo));
      gameswf::ASValue::opAssign(a3, (const gameswf::ASValue::Self *)v8);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v8);
      return 1;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gameswf::VideoStreamInstance::Construct  (binary VA: 0x1111d40)
// Original: gameswf::VideoStreamInstance::VideoStreamInstance
// ----------------------------------------------------------------------------
gameswf::VideoStreamInstance::Self * gameswf::VideoStreamInstance::Construct(gameswf::VideoStreamInstance::Self *self, gameswf::Player::Self *a2, gameswf::VideoStreamDefinition::Self *a3, gameswf::Character::Self *a4, char *a5)
{
  gameswf::VideoStreamInstance::Self *result;
  gameswf::Self *v6;
  gameswf::Self *v7;
  bool v8;
  typedef char _g4_t_v9;
  typedef char _g4_t_v10;
  typedef gameswf::Self *_g4_t_v11;
  typedef int16_t _g4_t_v12;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  typedef gameswf::Self *_g4_t_v17;
  typedef int16_t _g4_t_v18;
  typedef char _g4_t_v19;
  typedef char _g4_t_v20;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (1u + sizeof(_g4_t_v10)) > _g4_s1 ? (1u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v12)) > _g4_s3 ? (16u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (18u + sizeof(_g4_t_v13)) > _g4_s4 ? (18u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (19u + sizeof(_g4_t_v14)) > _g4_s5 ? (19u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v15)) > _g4_s6 ? (32u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (33u + sizeof(_g4_t_v16)) > _g4_s7 ? (33u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v17)) > _g4_s8 ? (44u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v18)) > _g4_s9 ? (48u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (50u + sizeof(_g4_t_v19)) > _g4_s10 ? (50u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (51u + sizeof(_g4_t_v20)) > _g4_s11 ? (51u + sizeof(_g4_t_v20)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 1u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 18u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 19u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 33u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 50u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 51u);

  gameswf::Character::Construct(self, a2, a4, (int)(uintptr_t)(a5), 18);
  *((uint16_t *)self + 106) = 1;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208F908);
  *((uint16_t *)self + 107) = 1;
  *((uint32_t *)self + 54) = (uint32_t)(uintptr_t)(a3);
  if ( a3 != nullptr )
  {
    gameswf::RefCounted::addRef(a3);
    *((uint32_t *)self + 55) = 0;
    *((uint16_t *)self + 106) = *((uint16_t *)a3 + 14);
    *((uint16_t *)self + 107) = *((uint16_t *)a3 + 15);
  }
  else
  {
    *((uint32_t *)self + 55) = 0;
  }
  result = *((gameswf::VideoStreamInstance::Self **)self + 4);
  if ( *((uint8_t *)result + 232) != 0 )
  {
    v15 = 1;
    v16 = 0;
    gameswf::String::resize((gameswf::String::Self *)&v15, 5);
    v6 = (gameswf::Self *)&v16;
    if ( v15 == -1 )
      v6 = v17;
    gameswf::Strcpy_s(v6, (char *)&loc_6, (gameswf::Self *)"Video");
    v9 = 1;
    v10 = 0;
    v18 = -1;
    v19 = 127;
    v20 |= 1u;
    gameswf::String::resize((gameswf::String::Self *)&v9, 11);
    v7 = (gameswf::Self *)&v10;
    if ( v9 == -1 )
      v7 = v11;
    gameswf::Strcpy_s(v7, &byte_9[3], (gameswf::Self *)"flash.media");
    v12 = -1;
    v13 = 127;
    v14 |= 1u;
    result = (gameswf::VideoStreamInstance::Self *)gameswf::ASClassManager::findClass(
                                               (gameswf::ASClassManager::Self *)(*((uint32_t *)self + 4) + 236),
                                               (const gameswf::String::Self *)&v9,
                                               (const gameswf::String::Self *)&v15,
                                               true);
    v8 = v9 == -1;
    *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(result);
    if ( v8 && (v14 & 1) != 0 )
      result = (gameswf::VideoStreamInstance::Self *)gameswf::free_internal(v11);
    if ( v15 == -1 && (v20 & 1) != 0 )
      return (gameswf::VideoStreamInstance::Self *)gameswf::free_internal(v17);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::VideoStreamInstance::is  (binary VA: 0x1112030)
// Original: gameswf::VideoStreamInstance::is
// ----------------------------------------------------------------------------
bool gameswf::VideoStreamInstance::is(gameswf::VideoStreamInstance::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 18 && a2 != 1 && a2 != 57 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::VideoStreamInstance::getCharacterDef  (binary VA: 0x1112050)
// Original: gameswf::VideoStreamInstance::getCharacterDef
// ----------------------------------------------------------------------------
int gameswf::VideoStreamInstance::getCharacterDef(gameswf::VideoStreamInstance::Self *self)
{
  return *((uint32_t *)self + 54);
}


