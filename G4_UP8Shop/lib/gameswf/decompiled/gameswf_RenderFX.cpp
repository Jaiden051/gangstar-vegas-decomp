#include "Core/Utils/DecompTypes.h"
#include "gameswf_RenderFX.h"

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::notifyClassInitialized  (binary VA: 0x1115430)
// Original: gameswf::RenderFX::notifyClassInitialized
// ----------------------------------------------------------------------------
int gameswf::RenderFX::notifyClassInitialized(gameswf::RenderFX::Self *self, gameswf::ASClass::Self *a2)
{
  int result;

  result = *((uint32_t *)self + 81);
  if ( result != 0 )
    return G4_VCALL<int>(result, 20, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::Construct  (binary VA: 0x1115530)
// Original: gameswf::RenderFX::RenderFX
// ----------------------------------------------------------------------------
gameswf::RenderFX::Self * gameswf::RenderFX::Construct(gameswf::RenderFX::Self *self)
{
  int v1;
  glf::App::Self *Instance;
  glf::EventManager::Self *EventMgr;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FB08);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  gameswf::CharacterHandle::Construct((gameswf::RenderFX::Self *)((char *)self + 44), nullptr);
  v1 = *((uint32_t *)self + 24);
  *((uint8_t *)self + 80) = 1;
  v1 |= 0x7FFFFFu;
  *((uint8_t *)self + 81) = 0;
  *((uint32_t *)self + 24) = v1;
  *((uint32_t *)self + 25) = 0;
  *((uint8_t *)self + 112) = 0;
  *((uint8_t *)self + 99) = HIBYTE(v1) | 1;
  *((uint8_t *)self + 98) = BYTE2(v1) & 0x7F;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 44) = 0;
  *((uint32_t *)self + 45) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint8_t *)self + 136) = 1;
  *((uint8_t *)self + 148) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 42) = 0;
  *((uint8_t *)self + 172) = 1;
  *((uint8_t *)self + 184) = 0;
  *((uint32_t *)self + 47) = 0;
  *((uint32_t *)self + 48) = 0;
  *((uint32_t *)self + 49) = 0;
  *((uint32_t *)self + 50) = 0;
  *((uint32_t *)self + 51) = 0;
  *((uint8_t *)self + 208) = 1;
  *((uint32_t *)self + 53) = 0;
  *((uint32_t *)self + 54) = 0;
  *((uint32_t *)self + 62) = 0;
  *((uint32_t *)self + 63) = 0;
  *((uint32_t *)self + 66) = 0;
  *((uint32_t *)self + 67) = 0;
  *((uint32_t *)self + 70) = 0;
  *((uint32_t *)self + 71) = 0;
  *((uint32_t *)self + 74) = 0;
  *((uint32_t *)self + 75) = 0;
  *((uint8_t *)self + 220) = 0;
  *((uint32_t *)self + 80) = (uint32_t)(uintptr_t)(&off_205A508);
  *((uint32_t *)self + 81) = (uint32_t)(uintptr_t)((char *)self + 320);
  *((uint32_t *)self + 56) = 0;
  *((uint32_t *)self + 82) = ((uint32_t)(uintptr_t)&off_208FB30);
  *((uint32_t *)self + 57) = 0;
  *((uint32_t *)self + 58) = 0;
  *((uint32_t *)self + 59) = 0;
  *((uint32_t *)self + 60) = 0;
  *((uint8_t *)self + 244) = 1;
  *((uint8_t *)self + 256) = 0;
  *((uint32_t *)self + 65) = -1;
  *((uint8_t *)self + 272) = 0;
  *((uint32_t *)self + 69) = -1;
  *((uint8_t *)self + 288) = 0;
  *((uint32_t *)self + 73) = -1;
  *((uint8_t *)self + 304) = 0;
  *((uint32_t *)self + 77) = -1;
  *((uint8_t *)self + 312) = 1;
  *((uint32_t *)self + 79) = 0;
  *((uint8_t *)self + 332) = 1;
  *((uint32_t *)self + 84) = (uint32_t)(uintptr_t)(self);
  Instance = (glf::App::Self *)glf::App::GetInstance();
  EventMgr = (glf::EventManager::Self *)glf::App::GetEventMgr(Instance);
  glf::EventManager::AddEventReceiver(
    EventMgr,
    (gameswf::RenderFX::Self *)((char *)self + 328),
    (glf::EventReceiver::Self *)&dword_C8);
  return (gameswf::RenderFX::Self *)gameswf::registerNativeFunction(
                                (gameswf::Self *)"forceFlashInputBehavior",
                                (int)(uintptr_t)(gameswf::NativeForceFlashInputBehavior));
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::forceTexturesToVRAM  (binary VA: 0x1115800)
// Original: gameswf::RenderFX::forceTexturesToVRAM
// ----------------------------------------------------------------------------
int gameswf::RenderFX::forceTexturesToVRAM(gameswf::RenderFX::Self *self, bool a2)
{
  int v2;
  gameswf::Player::Self *v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  gameswf::Self **Root;
  typedef int _g4_t_v10;
  typedef gameswf::Player::Self *_g4_t_v11;
  typedef uint32_t _g4_t_v12[4];
  typedef uint32_t _g4_t_v13[4];
  typedef uint32_t _g4_t_v14[13];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v11)) > _g4_s1 ? (44u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v12)) > _g4_s2 ? (56u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (72u + sizeof(_g4_t_v13)) > _g4_s3 ? (72u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (88u + sizeof(_g4_t_v14)) > _g4_s4 ? (88u + sizeof(_g4_t_v14)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 56u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 72u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 88u);

  v2 = 0;
  memset(v12, 0, sizeof(v12));
  memset(v14, 0, 0x18u);
  v3 = *((gameswf::Player::Self **)self + 9);
  v13[0] = 0;
  v13[2] = 0;
  v13[1] = 1065353216;
  v13[3] = 1065353216;
  v14[0] = 1065353216;
  v14[4] = 1065353216;
  v11 = v3;
  if ( v3 != nullptr )
    v2 = *((uint32_t *)v3 + 3);
  v4 = *(uint32_t *)(*(uint32_t *)(v2 + 12) + 36);
  if ( v4 != 0 )
  {
    (*(void (**)(uint32_t))(**(uint32_t **)(v4 + 52) + 8))(*(uint32_t *)(v4 + 52));
    v11 = *((gameswf::Player::Self **)self + 9);
  }
  if ( a2 )
  {
    Root = (gameswf::Self **)gameswf::Player::getRoot(v11);
    gameswf::Root::beginDisplay(Root);
  }
  v5 = *(uint32_t *)(gameswf::Player::getRoot(v11) + 12);
  result = a2;
  if ( *(int *)(v5 + 140) <= 0 )
  {
    if ( !a2 )
      return result;
LABEL_12:
    gameswf::Player::getRoot(v11);
    return (int)(uintptr_t)(gameswf::Root::endDisplay());
  }
  v7 = 0;
  if ( a2 )
  {
    do
    {
      (*(void (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)(v5 + 136) + 4 * v7) + 8))(*(uint32_t *)(*(uint32_t *)(v5 + 136)
                                                                                                  + 4 * v7));
      v10 = *(uint32_t *)(*(uint32_t *)(v5 + 136) + 4 * v7++);
      (*(void (**)(uint32_t *, uint32_t *, int, uint32_t *, uint32_t *, int))(*gameswf::s_render_handler + 108))(
        (uint32_t *)(gameswf::s_render_handler),
        v14,
        v10,
        v12,
        v13,
        -1);
    }
    while ( *(uint32_t *)(v5 + 140) > v7 );
    goto LABEL_12;
  }
  do
  {
    v8 = *(uint32_t *)(*(uint32_t *)(v5 + 136) + 4 * v7++);
    result = G4_VCALL<int>(v8, 8);
  }
  while ( v7 < *(uint32_t *)(v5 + 140) );
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::unloadTextures  (binary VA: 0x11159b0)
// Original: gameswf::RenderFX::unloadTextures
// ----------------------------------------------------------------------------
int gameswf::RenderFX::unloadTextures(gameswf::Player::Self **self)
{
  int result;
  int v2;
  int v3;
  int v4;

  result = gameswf::Player::getRoot(*(self + 9));
  v2 = *(uint32_t *)(result + 12);
  if ( *(int *)(v2 + 140) > 0 )
  {
    v3 = 0;
    do
    {
      v4 = *(uint32_t *)(*(uint32_t *)(v2 + 136) + 4 * v3++);
      result = G4_VCALL<int>(v4, 12);
    }
    while ( *(uint32_t *)(v2 + 140) > v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::setEventListener  (binary VA: 0x1115a10)
// Original: gameswf::RenderFX::setEventListener
// ----------------------------------------------------------------------------
int gameswf::RenderFX::setEventListener(int a1, int a2)
{
  *(uint32_t *)(a1 + 324) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::getController  (binary VA: 0x1115b20)
// Original: gameswf::RenderFX::getController
// ----------------------------------------------------------------------------
char * gameswf::RenderFX::getController(gameswf::RenderFX::Self *self, int a2)
{
  return (char *)self + 36 * a2 + 104;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::setControllerEnabled  (binary VA: 0x1115b40)
// Original: gameswf::RenderFX::setControllerEnabled
// ----------------------------------------------------------------------------
char * gameswf::RenderFX::setControllerEnabled(gameswf::RenderFX::Self *self, int a2, bool a3)
{
  char *result;

  result = (char *)self + 36 * a2;
  result[136] = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::setInputBehavior  (binary VA: 0x1115b60)
// Original: gameswf::RenderFX::setInputBehavior
// ----------------------------------------------------------------------------
gameswf::RenderFX::Self * gameswf::RenderFX::setInputBehavior(gameswf::RenderFX::Self *self, int a2)
{
  *((uint32_t *)self + 79) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::forceFlashInputBehavior  (binary VA: 0x1115b80)
// Original: gameswf::RenderFX::forceFlashInputBehavior
// ----------------------------------------------------------------------------
gameswf::RenderFX::Self * gameswf::RenderFX::forceFlashInputBehavior(gameswf::RenderFX::Self *self, bool a2)
{
  gameswf::RenderFX::Self *result;
  int v3;

  result = self;
  if ( a2 )
  {
    v3 = *((uint32_t *)self + 79);
    if ( v3 != 16 )
    {
      *((uint32_t *)self + 25) = v3;
      return gameswf::RenderFX::setInputBehavior(self, 16);
    }
  }
  else if ( *((uint32_t *)self + 25) != 0 )
  {
    return gameswf::RenderFX::setInputBehavior(self, *((uint32_t *)self + 25));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::getRootHandle  (binary VA: 0x1115be0)
// Original: gameswf::RenderFX::getRootHandle
// ----------------------------------------------------------------------------
gameswf::RenderFX::Self * gameswf::RenderFX::getRootHandle(gameswf::RenderFX::Self *self, int a2)
{
  gameswf::Character::getHandle(self, *(gameswf::Character::Self **)(*(uint32_t *)(a2 + 40) + 16));
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::getStage  (binary VA: 0x1115c30)
// Original: gameswf::RenderFX::getStage
// ----------------------------------------------------------------------------
gameswf::RenderFX::Self * gameswf::RenderFX::getStage(gameswf::RenderFX::Self *self, int a2)
{
  int v2;
  typedef uint8_t _g4_t_v4[4];
  typedef gameswf::RefCounted::Self *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);

  v2 = *(uint32_t *)(a2 + 36);
  v4[0] = 5;
  v4[1] = 0;
  v5 = *(gameswf::RefCounted::Self **)(v2 + 120);
  if ( v5 != nullptr )
    gameswf::RefCounted::addRef(v5);
  gameswf::CharacterHandle::Construct(self, (const gameswf::ASValue::Self *)v4);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::getRoot  (binary VA: 0x1115cb0)
// Original: gameswf::RenderFX::getRoot
// ----------------------------------------------------------------------------
int gameswf::RenderFX::getRoot(gameswf::RenderFX::Self *self)
{
  return *((uint32_t *)self + 10);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::findClass  (binary VA: 0x1115cc0)
// Original: gameswf::RenderFX::findClass
// ----------------------------------------------------------------------------
gameswf::RenderFX::Self * gameswf::RenderFX::findClass(gameswf::RenderFX::Self *self, const gameswf::String::Self *a2, const gameswf::String::Self *a3, gameswf::String::Self *a4)
{
  gameswf::RefCounted::Self *Class;
  uint16_t *WeakProxy;
  gameswf::Self *v6;
  uint16_t *v9;

  Class = (gameswf::RefCounted::Self *)gameswf::ASClassManager::findClass(
                                   (gameswf::ASClassManager::Self *)(*((uint32_t *)a2 + 9) + 236),
                                   a3,
                                   a4,
                                   true);
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(Class);
  if ( Class != nullptr )
  {
    WeakProxy = (uint16_t *)gameswf::RefCounted::getWeakProxy(Class);
    v6 = *(gameswf::Self **)self;
    if ( WeakProxy != *(uint16_t **)self )
    {
      if ( v6 != nullptr && (*(uint16_t *)v6)-- == 1 )
      {
        v9 = WeakProxy;
        gameswf::free_internal(v6);
        WeakProxy = v9;
      }
      *(uint32_t *)self = (uint32_t)(uintptr_t)(WeakProxy);
      if ( WeakProxy != nullptr )
        ++*WeakProxy;
    }
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::createObject  (binary VA: 0x1115d70)
// Original: gameswf::RenderFX::createObject
// ----------------------------------------------------------------------------
gameswf::RenderFX::Self * gameswf::RenderFX::createObject(gameswf::RenderFX::Self *self, const gameswf::String::Self *a2, const gameswf::String::Self *a3, const gameswf::String::Self *a4)
{
  gameswf::Character::Self *Object;
  gameswf::Character::Self *v5;
  int Character;
  gameswf::Self ***v7;

  Object = (gameswf::Character::Self *)gameswf::ASClassManager::createObject(
                                   (gameswf::ASClassManager::Self *)(*((uint32_t *)a2 + 9) + 236),
                                   a3,
                                   a4);
  v5 = Object;
  if ( Object != nullptr
    && G4_VCALL<uint8_t>(Object, 8, 1) == 0 )
  {
    v5 = nullptr;
  }
  gameswf::CharacterHandle::Construct(self, v5);
  Character = gameswf::CharacterHandle::getCharacter(self);
  v7 = (gameswf::Self ***)Character;
  if ( Character != 0 && G4_VCALL<uint8_t>(Character, 8, 2) != 0 )
    gameswf::SpriteInstance::invokeConstructor(v7);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::createBitmap  (binary VA: 0x1115e20)
// Original: gameswf::RenderFX::createBitmap
// ----------------------------------------------------------------------------
gameswf::CharacterHandle::Self * gameswf::RenderFX::createBitmap(gameswf::CharacterHandle::Self *a1, int a2, int a3, int a4)
{
  int v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  gameswf::RefCounted::Self *Object;
  gameswf::RefCounted::Self *v8;
  gameswf::Self *v9;
  gameswf::Self *v10;
  gameswf::RefCounted::Self *v11;
  int v12;
  gameswf::BitmapInfo::Self *v13;
  int v14;
  glitch::video::ITexture::Self *v15;
  int32_t v16;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef gameswf::String::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef gameswf::CharacterHandle::Self *_g4_t_v26;
  typedef gameswf::CharacterHandle::Self *_g4_t_v27;
  typedef gameswf::RefCounted::Self *_g4_t_v28;
  typedef gameswf::RefCounted::Self *_g4_t_v29;
  typedef void *_g4_t_v30[3];
  typedef gameswf::Self *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef void *_g4_t_v36[3];
  typedef gameswf::Self *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef void *_g4_t_v42[3];
  typedef gameswf::Self *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef unsigned int _g4_t_v48[3];
  typedef gameswf::Self *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint8_t _g4_t_v54[36];
  typedef glitch::video::ITexture::Self *_g4_t_v55;
  typedef char _g4_t_v56;
  typedef void *_g4_t_v57;
  typedef gameswf::Self *_g4_t_v58;
  typedef char _g4_t_v59;
  typedef gameswf::String::Self *_g4_t_v60;
  typedef void *_g4_t_v61;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v21)) > _g4_s3 ? (12u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v22)) > _g4_s4 ? (16u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v23)) > _g4_s5 ? (20u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v24)) > _g4_s6 ? (20u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v25)) > _g4_s7 ? (24u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v26)) > _g4_s8 ? (28u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v27)) > _g4_s9 ? (28u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v28)) > _g4_s10 ? (32u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v29)) > _g4_s11 ? (32u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v30)) > _g4_s12 ? (36u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v31)) > _g4_s13 ? (48u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v32)) > _g4_s14 ? (52u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v33)) > _g4_s15 ? (56u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v34)) > _g4_s16 ? (60u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v35)) > _g4_s17 ? (64u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v36)) > _g4_s18 ? (68u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v37)) > _g4_s19 ? (80u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v38)) > _g4_s20 ? (84u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v39)) > _g4_s21 ? (88u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v40)) > _g4_s22 ? (92u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v41)) > _g4_s23 ? (96u + sizeof(_g4_t_v41)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v42)) > _g4_s24 ? (100u + sizeof(_g4_t_v42)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v43)) > _g4_s25 ? (112u + sizeof(_g4_t_v43)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v44)) > _g4_s26 ? (116u + sizeof(_g4_t_v44)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v45)) > _g4_s27 ? (120u + sizeof(_g4_t_v45)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v46)) > _g4_s28 ? (124u + sizeof(_g4_t_v46)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v47)) > _g4_s29 ? (128u + sizeof(_g4_t_v47)) : _g4_s29,
    _g4_s31 = (132u + sizeof(_g4_t_v48)) > _g4_s30 ? (132u + sizeof(_g4_t_v48)) : _g4_s30,
    _g4_s32 = (144u + sizeof(_g4_t_v49)) > _g4_s31 ? (144u + sizeof(_g4_t_v49)) : _g4_s31,
    _g4_s33 = (148u + sizeof(_g4_t_v50)) > _g4_s32 ? (148u + sizeof(_g4_t_v50)) : _g4_s32,
    _g4_s34 = (152u + sizeof(_g4_t_v51)) > _g4_s33 ? (152u + sizeof(_g4_t_v51)) : _g4_s33,
    _g4_s35 = (156u + sizeof(_g4_t_v52)) > _g4_s34 ? (156u + sizeof(_g4_t_v52)) : _g4_s34,
    _g4_s36 = (160u + sizeof(_g4_t_v53)) > _g4_s35 ? (160u + sizeof(_g4_t_v53)) : _g4_s35,
    _g4_s37 = (164u + sizeof(_g4_t_v54)) > _g4_s36 ? (164u + sizeof(_g4_t_v54)) : _g4_s36,
    _g4_s38 = (200u + sizeof(_g4_t_v55)) > _g4_s37 ? (200u + sizeof(_g4_t_v55)) : _g4_s37,
    _g4_s39 = (208u + sizeof(_g4_t_v56)) > _g4_s38 ? (208u + sizeof(_g4_t_v56)) : _g4_s38,
    _g4_s40 = (216u + sizeof(_g4_t_v57)) > _g4_s39 ? (216u + sizeof(_g4_t_v57)) : _g4_s39,
    _g4_s41 = (220u + sizeof(_g4_t_v58)) > _g4_s40 ? (220u + sizeof(_g4_t_v58)) : _g4_s40,
    _g4_s42 = (227u + sizeof(_g4_t_v59)) > _g4_s41 ? (227u + sizeof(_g4_t_v59)) : _g4_s41,
    _g4_s43 = (236u + sizeof(_g4_t_v60)) > _g4_s42 ? (236u + sizeof(_g4_t_v60)) : _g4_s42,
    _g4_s44 = (240u + sizeof(_g4_t_v61)) > _g4_s43 ? (240u + sizeof(_g4_t_v61)) : _g4_s43
  };
  alignas(16) uint8_t _g4_sf[_g4_s44];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 56u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 60u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 64u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 68u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 80u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 84u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 88u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 92u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 96u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 100u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 112u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 116u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 120u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 124u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 128u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 132u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 144u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 148u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 152u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 156u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 160u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 164u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 200u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 208u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 216u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 220u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 227u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 236u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 240u);

  v60 = (gameswf::String::Self *)&a1;
  v4 = a2;
  v26 = a1;
  v25 = a3;
  v23 = a4;
  LOWORD(v36[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v36, 6);
  v5 = (gameswf::Self *)((char *)v36 + 1);
  if ( LOBYTE(v36[0]) == 0xFF )
    v5 = v37;
  gameswf::Strcpy_s(v5, (char *)&loc_6 + 1, (gameswf::Self *)"Bitmap");
  LOWORD(v30[0]) = 1;
  LOWORD(v38) = -1;
  BYTE2(v38) = 127;
  HIBYTE(v38) |= 1u;
  gameswf::String::resize((gameswf::String::Self *)v30, 13);
  v6 = (gameswf::Self *)((char *)v30 + 1);
  if ( LOBYTE(v30[0]) == 0xFF )
    v6 = v31;
  gameswf::Strcpy_s(v6, &byte_9[5], (gameswf::Self *)"flash.display");
  LOWORD(v32) = -1;
  BYTE2(v32) = 127;
  HIBYTE(v32) |= 1u;
  Object = (gameswf::RefCounted::Self *)gameswf::ASClassManager::createObject(
                                    (gameswf::ASClassManager::Self *)(*(uint32_t *)(v4 + 36) + 236),
                                    (const gameswf::String::Self *)v30,
                                    (const gameswf::String::Self *)v36);
  v8 = Object;
  if ( Object != nullptr
    && G4_VCALL<uint8_t>(Object, 8, 64) != 0 )
  {
    gameswf::RefCounted::addRef(v8);
    if ( LOBYTE(v30[0]) != 0xFF )
      goto LABEL_8;
  }
  else
  {
    v8 = nullptr;
    if ( LOBYTE(v30[0]) != 0xFF )
      goto LABEL_8;
  }
  if ( (v32 & 0x1000000) != 0 )
  {
    gameswf::free_internal(v31);
    if ( LOBYTE(v36[0]) != 0xFF )
      goto LABEL_9;
    goto LABEL_30;
  }
LABEL_8:
  if ( LOBYTE(v36[0]) == 0xFF )
  {
LABEL_30:
    if ( (v38 & 0x1000000) != 0 )
      gameswf::free_internal(v37);
  }
LABEL_9:
  LOWORD(v48[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v48, 10);
  v9 = (gameswf::Self *)((char *)v48 + 1);
  if ( LOBYTE(v48[0]) == 0xFF )
    v9 = v49;
  gameswf::Strcpy_s(v9, &byte_9[2], (gameswf::Self *)"BitmapData");
  LOWORD(v42[0]) = 1;
  LOWORD(v50) = -1;
  BYTE2(v50) = 127;
  HIBYTE(v50) |= 1u;
  gameswf::String::resize((gameswf::String::Self *)v42, 13);
  v10 = (gameswf::Self *)((char *)v42 + 1);
  if ( LOBYTE(v42[0]) == 0xFF )
    v10 = v43;
  gameswf::Strcpy_s(v10, &byte_9[5], (gameswf::Self *)"flash.display");
  LOWORD(v44) = -1;
  BYTE2(v44) = 127;
  HIBYTE(v44) |= 1u;
  v11 = (gameswf::RefCounted::Self *)gameswf::ASClassManager::createObject(
                                 (gameswf::ASClassManager::Self *)(*(uint32_t *)(v4 + 36) + 236),
                                 (const gameswf::String::Self *)v42,
                                 (const gameswf::String::Self *)v48);
  v28 = v11;
  if ( v11 != nullptr && G4_VCALL<uint8_t>(v11, 8, 65) != 0 )
  {
    gameswf::RefCounted::addRef(v28);
    if ( LOBYTE(v42[0]) != 0xFF )
      goto LABEL_16;
  }
  else
  {
    v28 = nullptr;
    if ( LOBYTE(v42[0]) != 0xFF )
      goto LABEL_16;
  }
  if ( (v44 & 0x1000000) == 0 )
  {
LABEL_16:
    if ( LOBYTE(v48[0]) != 0xFF )
      goto LABEL_17;
    goto LABEL_37;
  }
  gameswf::free_internal(v43);
  if ( LOBYTE(v48[0]) == 0xFF )
  {
LABEL_37:
    if ( (v50 & 0x1000000) != 0 )
      gameswf::free_internal(v49);
  }
LABEL_17:
  (*(void (**)(uint8_t *, uint32_t *, int, int, int, int, int, uint8_t *, int, int, gameswf::CharacterHandle::Self *, gameswf::RefCounted::Self *, void *, void *, void *, gameswf::Self *, int, int, int, int, void *, void *, void *, gameswf::Self *, int, int, int, int, void *, void *, void *, gameswf::Self *, int, int, int, int, unsigned int, unsigned int, unsigned int, gameswf::Self *, int, int, int, int))(*gameswf::s_render_handler + 12))(
    v54,
    (uint32_t *)(gameswf::s_render_handler),
    v25,
    v18,
    v19,
    v20,
    v21,
    v54,
    v23,
    v25,
    v26,
    v28,
    v30[0],
    v30[1],
    v30[2],
    v31,
    v32,
    v33,
    v34,
    v35,
    v36[0],
    v36[1],
    v36[2],
    v37,
    v38,
    v39,
    v40,
    v41,
    v42[0],
    v42[1],
    v42[2],
    v43,
    v44,
    v45,
    v46,
    v47,
    v48[0],
    v48[1],
    v48[2],
    v49,
    v50,
    v51,
    v52,
    v53);
  v12 = *gameswf::s_render_handler;
  v60 = v22;
  v13 = (gameswf::BitmapInfo::Self *)(*(int (**)(uint32_t *))(v12 + 8))((uint32_t *)(gameswf::s_render_handler));
  v14 = *v24;
  *((uint32_t *)v13 + 5) = v24[1];
  *((uint32_t *)v13 + 4) = v14;
  gameswf::ASBitmapData::setBitmapInfo(v29, v13);
  gameswf::ASBitmap::setBitmapData(v8, v29);
  gameswf::CharacterHandle::Construct(v27, v8);
  if ( v56 == -1 && (v59 & 1) != 0 )
  {
    v61 = v57;
    gameswf::free_internal(v58);
  }
  v15 = v55;
  if ( v55 != nullptr )
  {
    while ( 1 )
    {
      v16 = *((uint32_t *)v15 + 1);
      _mm_mfence();
      if ( v16 == 2 )
      {
        if ( *((uint16_t *)v15 + 16) == 0xFFFF )
          goto LABEL_21;
        glitch::video::ITexture::removeFromTextureManager(v15);
      }
      else
      {
        if ( v16 == 1 )
        {
          G4_VCALL<void>(v15, 4);
          break;
        }
LABEL_21:
        if ( v16 == __sync_val_compare_and_swap((volatile int32_t *)v15 + 1, v16, v16 - 1) )
          break;
      }
    }
  }
  if ( v29 != nullptr )
    gameswf::RefCounted::dropRef(v29);
  if ( v8 != nullptr )
    gameswf::RefCounted::dropRef(v8);
  return v27;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::setTextBufferingEnabled  (binary VA: 0x1116350)
// Original: gameswf::RenderFX::setTextBufferingEnabled
// ----------------------------------------------------------------------------
int gameswf::RenderFX::setTextBufferingEnabled(gameswf::RenderFX::Self *self, bool a2)
{
  int result;

  result = *((uint32_t *)self + 10);
  *(uint8_t *)(result + 221) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::flushBufferedText  (binary VA: 0x1116370)
// Original: gameswf::RenderFX::flushBufferedText
// ----------------------------------------------------------------------------
uint32_t * gameswf::RenderFX::flushBufferedText()
{
  return gameswf::Root::flushBufferedText();
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::setAutoLoadGlyphsEnabled  (binary VA: 0x11163a0)
// Original: gameswf::RenderFX::setAutoLoadGlyphsEnabled
// ----------------------------------------------------------------------------
int gameswf::RenderFX::setAutoLoadGlyphsEnabled(gameswf::RenderFX::Self *self, bool a2)
{
  int result;

  result = *((uint32_t *)self + 10);
  *(uint8_t *)(result + 222) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::setRenderCachingEnabled  (binary VA: 0x11163c0)
// Original: gameswf::RenderFX::setRenderCachingEnabled
// ----------------------------------------------------------------------------
int gameswf::RenderFX::setRenderCachingEnabled(gameswf::RenderFX::Self *self, bool a2)
{
  int result;

  result = *((uint32_t *)self + 9);
  *(uint8_t *)(result + 212) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::preloadGlyphs  (binary VA: 0x11163e0)
// Original: gameswf::RenderFX::preloadGlyphs
// ----------------------------------------------------------------------------
int gameswf::RenderFX::preloadGlyphs(int a1, int a2, int a3, char *s, int a5, char a6, char a7)
{
  int v7;
  gameswf::Self *v8;
  int v9;
  char *v10;
  gameswf::Self *v11;
  gameswf::Self *v12;
  int v13;
  int v14;
  gameswf::Self *v16;
  int v17;
  int v18;
  unsigned int v19;
  typedef gameswf::Player::Self *_g4_t_v20;
  typedef size_t _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int16_t _g4_t_v23;
  typedef char _g4_t_v24;
  typedef char *_g4_t_v25;
  typedef char _g4_t_v26;
  typedef uint8_t _g4_t_v27[3];
  typedef int _g4_t_v28;
  typedef gameswf::Self *_g4_t_v29;
  typedef unsigned int _g4_t_v30;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v21)) > _g4_s1 ? (12u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v22)) > _g4_s2 ? (16u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (26u + sizeof(_g4_t_v23)) > _g4_s3 ? (26u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (26u + sizeof(_g4_t_v24)) > _g4_s4 ? (26u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v25)) > _g4_s5 ? (28u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v26)) > _g4_s6 ? (32u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (33u + sizeof(_g4_t_v27)) > _g4_s7 ? (33u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v28)) > _g4_s8 ? (36u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v29)) > _g4_s9 ? (44u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v30)) > _g4_s10 ? (48u + sizeof(_g4_t_v30)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 26u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 26u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 33u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);

  LOBYTE(v23) = a7;
  HIBYTE(v23) = a6;
  v20 = *(gameswf::Player::Self **)(a1 + 36);
  v7 = opNew(0x84u);
  gameswf::Font::Construct((gameswf::Font::Self *)v7, v20);
  if ( v7 != 0 )
    gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v7);
  *(uint16_t *)(v7 + 72) = v23;
  v26 = 1;
  v27[0] = 0;
  v24 = 1;
  v25 = &v26;
  if ( s != nullptr )
  {
    v21 = strlen(s);
    gameswf::String::resize((gameswf::String::Self *)&v26, v21);
    v8 = (gameswf::Self *)v27;
    if ( v26 == -1 )
      v8 = v29;
    gameswf::Strcpy_s(v8, (char *)(v21 + 1), (gameswf::Self *)s);
    v24 = v26;
  }
  LOWORD(v30) = -1;
  HIBYTE(v30) = ((uint16_t)(HIWORD(v30) | 0x7F) >> 8) | 1;
  BYTE2(v30) = 127;
  if ( (char *)(v7 + 44) != v25 )
  {
    if ( v24 == -1 )
      v9 = v28 - 1;
    else
      v9 = v24 - 1;
    gameswf::String::resize((gameswf::String::Self *)(v7 + 44), v9);
    LOBYTE(v10) = *(uint8_t *)(v7 + 44);
    v11 = (gameswf::Self *)v27;
    if ( v26 == -1 )
      v11 = v29;
    if ( (uint8_t)(uintptr_t)v10 == 0xFF )
    {
      v10 = *(char **)(v7 + 48);
      v12 = *(gameswf::Self **)(v7 + 56);
    }
    else
    {
      v10 = (char *)(char)(uintptr_t)v10;
      v12 = (gameswf::Self *)(v7 + 45);
    }
    gameswf::Strcpy_s(v12, v10, v11);
    if ( (uint8_t *)(v30 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      v24 = v26;
      if ( v26 == -1 )
      {
        v16 = v29;
        v17 = v28 - 1;
      }
      else
      {
        v16 = (gameswf::Self *)v27;
        v17 = v26 - 1;
      }
      v13 = 5381;
      if ( v17 > 0 )
      {
        v22 = v7;
        do
        {
          --v17;
          v25 = (char *)*((uint8_t *)v16 + v17);
          v18 = 33 * v13;
          v19 = (unsigned int)(uintptr_t)(v25 + 32);
          if ( (uint8_t)(*((uint8_t *)v16 + v17) - 65) > 0x19u )
            v19 = (unsigned int)(uintptr_t)(v25);
          v13 = v18 ^ v19;
        }
        while ( v17 != 0 );
        v7 = v22;
        v13 = v13 << 9 >> 9;
      }
      v30 = v13 & 0x7FFFFF | v30 & 0xFF800000;
    }
    else
    {
      v24 = v26;
      v13 = (int)(v30 << 9) >> 9;
    }
    *(uint32_t *)(v7 + 60) = v13 & 0x7FFFFF | *(uint32_t *)(v7 + 60) & 0xFF800000;
  }
  if ( v24 == -1 && (v30 & 0x1000000) != 0 )
    gameswf::free_internal(v29);
  v14 = gameswf::preloadGlyphCodes(*(uint32_t *)(*(uint32_t *)(a1 + 36) + 12), a2, a3);
  gameswf::RefCounted::dropRef((gameswf::RefCounted::Self *)v7);
  return v14;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::preloadGlyphs  (binary VA: 0x11166a0)
// Original: gameswf::RenderFX::preloadGlyphs
// ----------------------------------------------------------------------------
int gameswf::RenderFX::preloadGlyphs(int a1, char *a2, char *s, int a4, char a5, char a6)
{
  gameswf::Self *v6;
  int v7;
  int v8;
  int16_t v9; // di
  int v10;
  int result;
  int v12;
  int v13;
  char v14;
  char v15;

  v6 = nullptr;
  v7 = 0;
  v13 = 0;
  v14 = a5;
  v15 = a6;
  while ( 1 )
  {
    LOWORD(v8) = gameswf::decodeNextUnicodeCharacter(&a2);
    v9 = v8;
    if ( v8 == 0 )
      break;
    if ( ++v7 > v13 )
    {
      v10 = v7 + (v7 >> 1);
      if ( v10 != 0 )
      {
        if ( v6 != nullptr )
          v6 = (gameswf::Self *)gameswf::realloc_internal(v6, 2 * v10, 2 * v13);
        else
          v6 = (gameswf::Self *)gameswf::malloc_internal(2 * v10);
        v13 = v7 + (v7 >> 1);
      }
      else
      {
        if ( v6 != nullptr )
          gameswf::free_internal(v6);
        v13 = 0;
        v6 = nullptr;
      }
    }
    if ( (char *)v6 + 2 * v7 != (char *)&dword_0 + 2 )
      *((uint16_t *)v6 + v7 - 1) = v9;
  }
  result = 0;
  if ( v7 != 0 )
    result = gameswf::RenderFX::preloadGlyphs(a1, (int)(uintptr_t)(v6), v7, s, a4, v14, v15);
  if ( v6 != nullptr )
  {
    v12 = result;
    gameswf::free_internal(v6);
    return v12;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::replaceTexture  (binary VA: 0x1116800)
// Original: gameswf::RenderFX::replaceTexture
// ----------------------------------------------------------------------------
uint32_t * gameswf::RenderFX::replaceTexture(int a1, char *s, int a3, int *a4, int a5, int a6, gameswf::Self *a7, int a8)
{
  int RootMovie;
  uint32_t *result;
  size_t v10;
  char *v11;
  gameswf::Self *v12;
  int v13;
  int *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int retaddr;
  char *sa;
  int v45;
  int v46;

  RootMovie = gameswf::Root::getRootMovie(*(gameswf::Root::Self **)(a1 + 40));
  result = (uint32_t *)G4_VCALL<int>(RootMovie, 304, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42);
  if ( result != nullptr )
  {
    result = (uint32_t *)G4_VCALL<int>(result, 8, 12);
    if ( (uint8_t)(uintptr_t)result != 0 )
    {
      LOWORD(a4) = 1;
      if ( s != nullptr )
      {
        v10 = strlen(s);
        v11 = (char *)(v10 + 1);
        gameswf::String::resize((gameswf::String::Self *)&a4, v10);
        v12 = (gameswf::Self *)((char *)&a4 + 1);
        if ( (uint8_t)(uintptr_t)a4 == 0xFF )
          v12 = a7;
        gameswf::Strcpy_s(v12, v11, (gameswf::Self *)s);
      }
      LOWORD(a8) = -1;
      BYTE2(a8) = 127;
      HIBYTE(a8) |= 1u;
      sa = gameswf::Player::getChardefLibrary(*(gameswf::Player::Self **)(a1 + 36));
      result = *(uint32_t **)sa;
      if ( *(uint32_t *)sa != 0 )
      {
        v13 = 0;
        if ( (int)result[1] >= 0 && result[2] == -2 )
        {
          v22 = 10;
          v23 = 1;
          do
          {
            v13 = v23;
            if ( v23 > result[1] )
              break;
            v24 = result[v22];
            ++v23;
            v22 += 8;
          }
          while ( v24 == -2 );
        }
        if ( sa != nullptr )
        {
          v45 = v13;
          v14 = a4;
          while ( result != nullptr && v45 <= result[1] )
          {
            v15 = result[8 * v45 + 9];
            if ( v15 != 0 && G4_VCALL<uint8_t>(v15, 8, 12) == 0 )
              v15 = 0;
            v16 = G4_VCALL<int>(v15, 84, &a4);
            v17 = v16;
            if ( v16 != 0 && G4_VCALL<uint8_t>(v16, 8, 38) != 0 )
            {
              if ( v14 != nullptr )
              {
                v18 = G4_VCALL<int>(v17, 40);
                v19 = *v14;
                *(uint32_t *)(v18 + 20) = v14[1];
                *(uint32_t *)(v18 + 16) = v19;
              }
              v20 = G4_VCALL<int>(v17, 40);
              G4_VCALL<void>(v20, 36, v45);
            }
            result = *(uint32_t **)sa;
            v21 = *(uint32_t *)(*(uint32_t *)sa + 4);
            if ( v45 > v21 )
              break;
            v25 = v45 + 1;
            if ( v21 >= v45 + 1 && result[8 * v25 + 2] == -2 )
            {
              retaddr = *(uint32_t *)(*(uint32_t *)sa + 4);
              v26 = v45 + 2;
              v46 = 32 * (v45 + 2) + 8;
              do
              {
                v25 = v26;
                if ( retaddr < v26 )
                  break;
                v27 = v46;
                ++v26;
                v46 += 32;
              }
              while ( *(uint32_t *)((char *)result + v27) == -2 );
            }
            v45 = v25;
          }
        }
      }
      if ( (uint8_t)(uintptr_t)a4 == 0xFF && (a8 & 0x1000000) != 0 )
        return (uint32_t *)gameswf::free_internal(a7);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::traceHierarchy  (binary VA: 0x1116a60)
// Original: gameswf::RenderFX::traceHierarchy
// ----------------------------------------------------------------------------
void gameswf::RenderFX::traceHierarchy(gameswf::RenderFX::Self *self, gameswf::Character::Self *a2, int a3, int a4)
{
  gameswf::Character::Self *v4;
  int i;
  char *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  const char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  typedef gameswf::Character::Self *_g4_t_v16;
  typedef gameswf::Character::Self *_g4_t_v17;
  typedef char _g4_t_v18[284];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v18)) > _g4_s2 ? (32u + sizeof(_g4_t_v18)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);

  v4 = a2;
  if ( a2 == nullptr )
    v4 = *(gameswf::Character::Self **)(*((uint32_t *)self + 10) + 16);
  if ( a4 == 0 )
    gameswf::logMsg((gameswf::Self *)"Hierarchy:\n", (const char *)v16);
  if ( ((a3 & 1) == 0 || *((uint8_t *)v4 + 148) != 0 && *((float *)gameswf::Character::getWorldCxForm(v4) + 6) != 0.0)
    && ((a3 & 0x20) == 0 || *((uint8_t *)v4 + 150) != 0) )
  {
    memset(v18, 0, 0x100u);
    if ( a4 > 0 )
    {
      for ( i = 0; i != a4; ++i )
        *(uint32_t *)&v18[strlen(v18)] = 2105376;
    }
    if ( G4_VCALL<uint8_t>(v4, 8, 37) != 0 )
    {
      v6 = (char *)v4 + 469;
      if ( *((uint8_t *)v4 + 468) == 0xFF )
        v6 = *((char **)v4 + 120);
      v7 = *((uint32_t *)v4 + 15);
      if ( *(uint8_t *)v7 == 0xFF )
        v8 = *(uint32_t *)(v7 + 12);
      else
        v8 = v7 + 1;
      gameswf::logMsg((gameswf::Self *)"%s edit: '%s' text='%s' @ 0x%x\n", v18, v8, v6, v4);
    }
    else if ( G4_VCALL<uint8_t>(v4, 8, 2) != 0 )
    {
      v11 = "PLAY";
      if ( G4_VCALL<int>(v4, 160) != 0 )
        v11 = "STOP";
      v12 = G4_VCALL<int>(v4, 312);
      v13 = *((uint32_t *)v4 + 15);
      if ( *(uint8_t *)v13 == 0xFF )
        v14 = *(uint32_t *)(v13 + 12);
      else
        v14 = v13 + 1;
      gameswf::logMsg((gameswf::Self *)"%s sprite: '%s' f=%d %s @ 0x%x\n", v18, v14, v12, v11, v4);
      if ( *((int *)v4 + 54) > 0 )
      {
        v15 = 0;
        do
        {
          v17 = *(gameswf::Character::Self **)(*((uint32_t *)v4 + 53) + 4 * v15++);
          gameswf::RenderFX::traceHierarchy(self, v17, a3, a4 + 1);
        }
        while ( v15 < *((uint32_t *)v4 + 54) );
      }
    }
    else
    {
      v9 = *((uint32_t *)v4 + 15);
      if ( *(uint8_t *)v9 == 0xFF )
        v10 = *(uint32_t *)(v9 + 12);
      else
        v10 = v9 + 1;
      gameswf::logMsg((gameswf::Self *)"%s ch: '%s' @ 0x%x\n", v18, v10, v4);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::traceHierarchy  (binary VA: 0x1116d20)
// Original: gameswf::RenderFX::traceHierarchy
// ----------------------------------------------------------------------------
void gameswf::RenderFX::traceHierarchy(gameswf::RenderFX::Self *a1, gameswf::CharacterHandle::Self *a2, int a3)
{
  gameswf::Character::Self *Character;

  Character = (gameswf::Character::Self *)gameswf::CharacterHandle::getCharacter(a2);
  gameswf::RenderFX::traceHierarchy(a1, Character, a3, 0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::notifyFSCommand  (binary VA: 0x1116d70)
// Original: gameswf::RenderFX::notifyFSCommand
// ----------------------------------------------------------------------------
int gameswf::RenderFX::notifyFSCommand(gameswf::RenderFX::Self *self, const char *a2, const char *a3)
{
  int result;

  result = *((uint32_t *)self + 81);
  if ( result != 0 )
    return G4_VCALL<int>(result, 12, a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::sendEvent  (binary VA: 0x1116da0)
// Original: gameswf::RenderFX::sendEvent
// ----------------------------------------------------------------------------
int gameswf::RenderFX::sendEvent(gameswf::RenderFX::Self *self, Event *a2)
{
  gameswf::RenderFX::Self *v2;
  Event *v3;
  int result;
  char *v5;
  gameswf::Self *v6;
  char *v7;
  int v8;
  int MouseEvent;
  TMLongCard eventCode;
  int v11;
  gameswf::ASValue::Self *v12;
  typedef uint8_t _g4_t_v13[12];
  typedef uint8_t _g4_t_v14[12];
  typedef uint8_t _g4_t_v15[12];
  typedef uint8_t _g4_t_v16[12];
  typedef uint8_t _g4_t_v17[12];
  typedef uint8_t _g4_t_v18[12];
  typedef uint8_t _g4_t_v19[12];
  typedef uint8_t _g4_t_v20[12];
  typedef uint8_t _g4_t_v21[12];
  typedef uint8_t _g4_t_v22[12];
  typedef char _g4_t_v23;
  typedef uint8_t _g4_t_v24[3];
  typedef char *_g4_t_v25;
  typedef gameswf::Self *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef gameswf::RenderFX::Self **_g4_t_v28;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v14)) > _g4_s1 ? (20u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v15)) > _g4_s2 ? (32u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v16)) > _g4_s3 ? (44u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v17)) > _g4_s4 ? (56u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v18)) > _g4_s5 ? (68u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v19)) > _g4_s6 ? (80u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (92u + sizeof(_g4_t_v20)) > _g4_s7 ? (92u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (104u + sizeof(_g4_t_v21)) > _g4_s8 ? (104u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (116u + sizeof(_g4_t_v22)) > _g4_s9 ? (116u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (128u + sizeof(_g4_t_v23)) > _g4_s10 ? (128u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (129u + sizeof(_g4_t_v24)) > _g4_s11 ? (129u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (132u + sizeof(_g4_t_v25)) > _g4_s12 ? (132u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (140u + sizeof(_g4_t_v26)) > _g4_s13 ? (140u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (144u + sizeof(_g4_t_v27)) > _g4_s14 ? (144u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (168u + sizeof(_g4_t_v28)) > _g4_s15 ? (168u + sizeof(_g4_t_v28)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 68u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 92u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 104u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 116u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 128u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 129u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 132u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 140u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 144u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 168u);

  v28 = &self;
  v2 = self;
  v3 = a2;
  result = (*(int (**)(uint32_t, Event *))(**((uint32_t **)self + 81) + 8))(*((uint32_t *)self + 81), a2);
  if ( LOBYTE(v3->eventType) == 0 )
  {
    if ( *(uint8_t *)(*((uint32_t *)v2 + 9) + 232) != 0 )
    {
      v23 = 1;
      v24[0] = 0;
      LOWORD(v27) = -1;
      BYTE2(v27) = 127;
      HIBYTE(v27) |= 1u;
      result = (int)(uintptr_t)(dword_20B9FF4) + (uint32_t)jpt_1116E61[v3->modifiers - 3];
      switch ( v3->modifiers )
      {
        case 3u:
          gameswf::String::resize((gameswf::String::Self *)&v23, 9);
          if ( v23 == -1 )
          {
            v5 = v25;
            v6 = v26;
          }
          else
          {
            v5 = (char *)v23;
            v6 = (gameswf::Self *)v24;
          }
          v7 = "mouseDown";
          goto LABEL_12;
        case 4u:
        case 6u:
        case 0xAu:
        case 0xBu:
          return result;
        case 5u:
          gameswf::String::resize((gameswf::String::Self *)&v23, 7);
          if ( v23 == -1 )
          {
            v5 = v25;
            v6 = v26;
          }
          else
          {
            v5 = (char *)v23;
            v6 = (gameswf::Self *)v24;
          }
          v7 = "mouseUp";
          goto LABEL_12;
        case 7u:
          gameswf::String::resize((gameswf::String::Self *)&v23, 5);
          if ( v23 == -1 )
          {
            v5 = v25;
            v6 = v26;
          }
          else
          {
            v5 = (char *)v23;
            v6 = (gameswf::Self *)v24;
          }
          v7 = "click";
          goto LABEL_12;
        case 8u:
          gameswf::String::resize((gameswf::String::Self *)&v23, 9);
          if ( v23 == -1 )
          {
            v5 = v25;
            v6 = v26;
          }
          else
          {
            v5 = (char *)v23;
            v6 = (gameswf::Self *)v24;
          }
          v7 = "mouseOver";
          goto LABEL_12;
        case 9u:
          gameswf::String::resize((gameswf::String::Self *)&v23, 8);
          if ( v23 == -1 )
          {
            v5 = v25;
            v6 = v26;
          }
          else
          {
            v5 = (char *)v23;
            v6 = (gameswf::Self *)v24;
          }
          v7 = "mouseOut";
          goto LABEL_12;
        case 0xCu:
          gameswf::String::resize((gameswf::String::Self *)&v23, 9);
          if ( v23 == -1 )
          {
            v5 = v25;
            v6 = v26;
          }
          else
          {
            v5 = (char *)v23;
            v6 = (gameswf::Self *)v24;
          }
          v7 = "mouseMove";
LABEL_12:
          gameswf::Strcpy_s(v6, v5, (gameswf::Self *)v7);
          result = (uint8_t)v23;
          v27 |= 0x7FFFFFu;
          v8 = v23 - 1;
          if ( v23 == -1 )
            v8 = (int)(uintptr_t)(v25 - 1);
          if ( v8 > 0 )
          {
            MouseEvent = gameswf::AS3Engine::getMouseEvent(
                           (gameswf::AS3Engine::Self *)(*((uint32_t *)v2 + 9) + 236),
                           (const gameswf::String::Self *)&v23);
            eventCode = v3->eventCode;
            *(uint32_t *)(MouseEvent + 88) = v3->eventCodeMask;
            *(uint32_t *)(MouseEvent + 84) = eventCode;
            v11 = *(uint32_t *)&v3->standard;
            *(uint32_t *)(MouseEvent + 96) = v3[1].modifiers;
            *(uint32_t *)(MouseEvent + 92) = v11;
            *(uint8_t *)(MouseEvent + 100) = v3[1].modifierMask;
            *(uint32_t *)(MouseEvent + 104) = v3->lateModifiers;
            gameswf::ASEventDispatcher::dispatchCaptureEvent(
              (gameswf::ASEventDispatcher::Self *)v3->modifierMask,
              (gameswf::ASEvent::Self *)MouseEvent);
            result = (uint8_t)v23;
          }
          if ( (uint8_t)result == 0xFF && (v27 & 0x1000000) != 0 )
            result = gameswf::free_internal(v26);
          break;
        default:
          result = v3->modifiers - 3;
          break;
      }
    }
    else
    {
      result = (int)(uintptr_t)(dword_20B9FF4) + (uint32_t)jpt_1116E50[v3->modifiers];
      switch ( v3->modifiers )
      {
        case 0u:
          v12 = (gameswf::ASValue::Self *)v13;
          gameswf::Character::invokeMethod(
            (gameswf::Character::Self *)v13,
            (gameswf::RefCounted::Self *)v3->modifierMask,
            (const gameswf::ASValue::Self *)"on_focus_in",
            nullptr,
            0);
          goto LABEL_35;
        case 1u:
          v12 = (gameswf::ASValue::Self *)v14;
          gameswf::Character::invokeMethod(
            (gameswf::Character::Self *)v14,
            (gameswf::RefCounted::Self *)v3->modifierMask,
            (const gameswf::ASValue::Self *)"on_focus_out",
            nullptr,
            0);
          goto LABEL_35;
        case 2u:
        case 4u:
        case 7u:
        case 0xCu:
          return result;
        case 3u:
          v12 = (gameswf::ASValue::Self *)v15;
          gameswf::Character::invokeMethod(
            (gameswf::Character::Self *)v15,
            (gameswf::RefCounted::Self *)v3->modifierMask,
            (const gameswf::ASValue::Self *)"onPress",
            nullptr,
            0);
          goto LABEL_35;
        case 5u:
          v12 = (gameswf::ASValue::Self *)v16;
          gameswf::Character::invokeMethod(
            (gameswf::Character::Self *)v16,
            (gameswf::RefCounted::Self *)v3->modifierMask,
            (const gameswf::ASValue::Self *)"onRelease",
            nullptr,
            0);
          goto LABEL_35;
        case 6u:
          v12 = (gameswf::ASValue::Self *)v17;
          gameswf::Character::invokeMethod(
            (gameswf::Character::Self *)v17,
            (gameswf::RefCounted::Self *)v3->modifierMask,
            (const gameswf::ASValue::Self *)"onReleaseOutside",
            nullptr,
            0);
          goto LABEL_35;
        case 8u:
          v12 = (gameswf::ASValue::Self *)v18;
          gameswf::Character::invokeMethod(
            (gameswf::Character::Self *)v18,
            (gameswf::RefCounted::Self *)v3->modifierMask,
            (const gameswf::ASValue::Self *)"onRollOver",
            nullptr,
            0);
          goto LABEL_35;
        case 9u:
          v12 = (gameswf::ASValue::Self *)v19;
          gameswf::Character::invokeMethod(
            (gameswf::Character::Self *)v19,
            (gameswf::RefCounted::Self *)v3->modifierMask,
            (const gameswf::ASValue::Self *)"onRollOut",
            nullptr,
            0);
          goto LABEL_35;
        case 0xAu:
          v12 = (gameswf::ASValue::Self *)v20;
          gameswf::Character::invokeMethod(
            (gameswf::Character::Self *)v20,
            (gameswf::RefCounted::Self *)v3->modifierMask,
            (const gameswf::ASValue::Self *)"onDragOver",
            nullptr,
            0);
          goto LABEL_35;
        case 0xBu:
          v12 = (gameswf::ASValue::Self *)v21;
          gameswf::Character::invokeMethod(
            (gameswf::Character::Self *)v21,
            (gameswf::RefCounted::Self *)v3->modifierMask,
            (const gameswf::ASValue::Self *)"onDragOut",
            nullptr,
            0);
          goto LABEL_35;
        case 0xDu:
          v12 = (gameswf::ASValue::Self *)v22;
          gameswf::Character::invokeMethod(
            (gameswf::Character::Self *)v22,
            (gameswf::RefCounted::Self *)v3->modifierMask,
            (const gameswf::ASValue::Self *)"on_clicked",
            nullptr,
            0);
LABEL_35:
          result = gameswf::ASValue::dropRefs(v12);
          break;
        default:
          result = *((uint32_t *)v2 + 9);
          break;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::setFocus  (binary VA: 0x1117260)
// Original: gameswf::RenderFX::setFocus
// ----------------------------------------------------------------------------
void gameswf::RenderFX::setFocus(gameswf::Character::Self **a1, gameswf::CharacterHandle::Self *a2, int a3, char a4)
{
  int v4;
  gameswf::RefCounted::Self *v5;
  gameswf::RefCounted::Self *v6;
  gameswf::Character::Self *v7;
  int v8;
  int v9;
  gameswf::Self *v10;
  gameswf::RefCounted::Self *v11;
  gameswf::Self *v12;
  gameswf::Self *v13;
  bool v14;
  gameswf::ASEventDispatcher::Self *v15;
  int v16;
  gameswf::Self *v17;
  gameswf::RefCounted::Self *Character;
  gameswf::Self *WeakProxy;
  gameswf::Self *v20;
  gameswf::ASEventDispatcher::Self *v21;
  gameswf::Self *v22;
  gameswf::Self *v23;
  typedef gameswf::RefCounted::Self *_g4_t_v24;
  typedef gameswf::Self *_g4_t_v25;
  typedef gameswf::Self *_g4_t_v26;
  typedef gameswf::ASEvent::Self *_g4_t_FocusEvent;
  typedef gameswf::ASEvent::Self *_g4_t_v28;
  typedef char _g4_t_v29;
  typedef char _g4_t_v30;
  typedef gameswf::Self *_g4_t_v31;
  typedef int16_t _g4_t_v32;
  typedef char _g4_t_v33;
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef gameswf::Self *_g4_t_v37;
  typedef int16_t _g4_t_v38;
  typedef char _g4_t_v39;
  typedef char _g4_t_v40;
  typedef gameswf::Self *_g4_t_v41[9];
  typedef Event _g4_t_v42;
  typedef int _g4_t_v43;
  typedef char _g4_t_v44;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v25)) > _g4_s1 ? (0u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v26)) > _g4_s2 ? (0u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_FocusEvent)) > _g4_s3 ? (4u + sizeof(_g4_t_FocusEvent)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v28)) > _g4_s4 ? (8u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v29)) > _g4_s5 ? (16u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (17u + sizeof(_g4_t_v30)) > _g4_s6 ? (17u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v31)) > _g4_s7 ? (28u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v32)) > _g4_s8 ? (32u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (34u + sizeof(_g4_t_v33)) > _g4_s9 ? (34u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (35u + sizeof(_g4_t_v34)) > _g4_s10 ? (35u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v35)) > _g4_s11 ? (48u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (49u + sizeof(_g4_t_v36)) > _g4_s12 ? (49u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v37)) > _g4_s13 ? (60u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v38)) > _g4_s14 ? (64u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (66u + sizeof(_g4_t_v39)) > _g4_s15 ? (66u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (67u + sizeof(_g4_t_v40)) > _g4_s16 ? (67u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v41)) > _g4_s17 ? (68u + sizeof(_g4_t_v41)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v42)) > _g4_s18 ? (104u + sizeof(_g4_t_v42)) : _g4_s18,
    _g4_s20 = (136u + sizeof(_g4_t_v43)) > _g4_s19 ? (136u + sizeof(_g4_t_v43)) : _g4_s19,
    _g4_s21 = (140u + sizeof(_g4_t_v44)) > _g4_s20 ? (140u + sizeof(_g4_t_v44)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_FocusEvent &FocusEvent = *reinterpret_cast<_g4_t_FocusEvent *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 17u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 34u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 35u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 49u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 66u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 67u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 68u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 104u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 136u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 140u);

  gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v41, a1[9 * a3 + 29]);
  if ( gameswf::CharacterHandle::opEq((gameswf::CharacterHandle::Self *)v41, a2) )
    goto LABEL_14;
  if ( ((uint8_t)(uintptr_t)(a1)[79] & 0x10) == 0
    && (uint8_t)gameswf::CharacterHandle::isEnabled((gameswf::CharacterHandle::Self *)v41) != 0 )
  {
    gameswf::CharacterHandle::gotoAndPlay((gameswf::CharacterHandle::Self *)v41, "focus_out");
    v42.modifierMask = gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v41);
    v42.modifiers = 1;
    v42.lateModifiers = (uint32_t)(uintptr_t)((_LateBindings *)a3);
    LOBYTE(v42.eventType) = 0;
    memset(&v42.eventCode, 0, 9);
    *(uint32_t *)&v42.standard = 0;
    v43 = 0;
    v44 = 0;
    gameswf::RenderFX::sendEvent((gameswf::RenderFX::Self *)a1, &v42);
  }
  if ( a4 != 0 )
  {
    if ( gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v41) != 0 )
    {
      if ( *((uint8_t *)a1[9] + 232) != 0 )
      {
        v29 = 1;
        v30 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v29, 8);
        v17 = (gameswf::Self *)&v30;
        if ( v29 == -1 )
          v17 = v31;
        gameswf::Strcpy_s(v17, byte_9, (gameswf::Self *)"focusOut");
        v32 = -1;
        v33 = 127;
        v34 |= 1u;
        FocusEvent = (gameswf::ASEvent::Self *)gameswf::AS3Engine::getFocusEvent(
                                           (gameswf::Character::Self *)((char *)a1[9] + 236),
                                           (const gameswf::String::Self *)&v29);
        if ( v29 == -1 && (v34 & 1) != 0 )
          gameswf::free_internal(v31);
        Character = (gameswf::RefCounted::Self *)gameswf::CharacterHandle::getCharacter(a2);
        *((uint32_t *)FocusEvent + 22) = (uint32_t)(uintptr_t)(Character);
        if ( Character != nullptr )
        {
          WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(Character);
          v20 = *((gameswf::Self **)FocusEvent + 21);
          if ( WeakProxy != v20 )
          {
            if ( v20 != nullptr )
            {
              v14 = (*(uint16_t *)v20)-- == 1;
              if ( v14 )
              {
                v26 = WeakProxy;
                gameswf::free_internal(v20);
                WeakProxy = v26;
              }
            }
            *((uint32_t *)FocusEvent + 21) = (uint32_t)(uintptr_t)(WeakProxy);
            if ( WeakProxy != nullptr )
              ++*(uint16_t *)WeakProxy;
          }
        }
        else
        {
          v22 = *((gameswf::Self **)FocusEvent + 21);
          if ( v22 != nullptr )
          {
            v14 = (*(uint16_t *)v22)-- == 1;
            if ( v14 )
              gameswf::free_internal(v22);
            *((uint32_t *)FocusEvent + 21) = 0;
          }
        }
        v21 = (gameswf::ASEventDispatcher::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v41);
        gameswf::ASEventDispatcher::dispatchCaptureEvent(v21, FocusEvent);
      }
      v4 = gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v41);
      G4_VCALL<void>(v4, 128);
    }
  }
  else
  {
    if ( gameswf::CharacterHandle::opNe(a2, (gameswf::Character::Self *)nullptr) )
    {
      v16 = gameswf::CharacterHandle::getCharacter(a2);
      if ( G4_VCALL<uint8_t>(v16, 132) != 0 )
        goto LABEL_14;
    }
    if ( gameswf::CharacterHandle::opNe((gameswf::CharacterHandle::Self *)v41, (gameswf::Character::Self *)nullptr) )
    {
      v8 = gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v41);
      if ( G4_VCALL<uint8_t>(v8, 132) != 0 )
        goto LABEL_14;
    }
  }
  v5 = (gameswf::RefCounted::Self *)gameswf::CharacterHandle::getCharacter(a2);
  v6 = (gameswf::RefCounted::Self *)(a1[9 * a3 + 29]);
  if ( v5 != v6 )
  {
    if ( v6 != nullptr )
    {
      v24 = v5;
      gameswf::RefCounted::dropRef(v6);
      v5 = v24;
    }
    a1[9 * a3 + 29] = (gameswf::Character::Self *)(v5);
    if ( v5 != nullptr )
      gameswf::RefCounted::addRef(v5);
  }
  if ( a4 != 0 && gameswf::CharacterHandle::getCharacter(a2) != 0 )
  {
    v9 = gameswf::CharacterHandle::getCharacter(a2);
    G4_VCALL<void>(v9, 124);
    if ( *((uint8_t *)a1[9] + 232) != 0 )
    {
      v35 = 1;
      v36 = 0;
      gameswf::String::resize((gameswf::String::Self *)&v35, 7);
      v10 = (gameswf::Self *)&v36;
      if ( v35 == -1 )
        v10 = v37;
      gameswf::Strcpy_s(v10, byte_8, (gameswf::Self *)"focusIn");
      v38 = -1;
      v39 = 127;
      v40 |= 1u;
      v28 = (gameswf::ASEvent::Self *)gameswf::AS3Engine::getFocusEvent(
                                  (gameswf::Character::Self *)((char *)a1[9] + 236),
                                  (const gameswf::String::Self *)&v35);
      if ( v35 == -1 && (v40 & 1) != 0 )
        gameswf::free_internal(v37);
      v11 = (gameswf::RefCounted::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)v41);
      *((uint32_t *)v28 + 22) = (uint32_t)(uintptr_t)(v11);
      if ( v11 != nullptr )
      {
        v12 = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v11);
        v13 = *((gameswf::Self **)v28 + 21);
        if ( v12 != v13 )
        {
          if ( v13 != nullptr )
          {
            v14 = (*(uint16_t *)v13)-- == 1;
            if ( v14 )
            {
              v25 = v12;
              gameswf::free_internal(v13);
              v12 = v25;
            }
          }
          *((uint32_t *)v28 + 21) = (uint32_t)(uintptr_t)(v12);
          if ( v12 != nullptr )
            ++*(uint16_t *)v12;
        }
      }
      else
      {
        v23 = *((gameswf::Self **)v28 + 21);
        if ( v23 != nullptr )
        {
          v14 = (*(uint16_t *)v23)-- == 1;
          if ( v14 )
            gameswf::free_internal(v23);
          *((uint32_t *)v28 + 21) = 0;
        }
      }
      v15 = (gameswf::ASEventDispatcher::Self *)gameswf::CharacterHandle::getCharacter(a2);
      gameswf::ASEventDispatcher::dispatchCaptureEvent(v15, v28);
    }
  }
  if ( ((uint8_t)(uintptr_t)(a1)[79] & 0x10) == 0 && gameswf::CharacterHandle::isValid(a2) )
  {
    v42.modifierMask = gameswf::CharacterHandle::getCharacter(a2);
    v7 = a1[81];
    v42.modifiers = 0;
    v42.lateModifiers = (uint32_t)(uintptr_t)((_LateBindings *)a3);
    LOBYTE(v42.eventType) = 0;
    memset(&v42.eventCode, 0, 9);
    *(uint32_t *)&v42.standard = 0;
    v43 = 0;
    v44 = 0;
    if ( G4_VCALL<uint8_t>(v7, 16, &v42) != 0 )
    {
      gameswf::CharacterHandle::gotoAndPlay(a2, "focus_in");
      gameswf::RenderFX::sendEvent((gameswf::RenderFX::Self *)a1, &v42);
    }
    else if ( a1[9 * a3 + 29] != nullptr )
    {
      gameswf::RefCounted::dropRef(a1[9 * a3 + 29]);
      a1[9 * a3 + 29] = nullptr;
    }
  }
LABEL_14:
  gameswf::CharacterHandle::Destroy(v41);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::resetFocus  (binary VA: 0x11178b0)
// Original: gameswf::RenderFX::resetFocus
// ----------------------------------------------------------------------------
int gameswf::RenderFX::resetFocus(gameswf::Character::Self **self, int a2)
{
  int result;
  gameswf::Self *v3[12];

  gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v3, nullptr);
  gameswf::RenderFX::setFocus(self, (gameswf::CharacterHandle::Self *)v3, a2, 0);
  gameswf::CharacterHandle::Destroy(v3);
  result = (int)(uintptr_t)(*(self + 9 * a2 + 32));
  if ( result != 0 )
  {
    result = gameswf::RefCounted::dropRef(*(self + 9 * a2 + 32));
    *(self + 9 * a2 + 32) = nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::update  (binary VA: 0x1117940)
// Original: gameswf::RenderFX::update
// ----------------------------------------------------------------------------
int gameswf::RenderFX::update(gameswf::Root::Self **self, int a2, bool a3)
{
  int result;
  int v4;
  int v5;
  int v6;
  TMLongCard v7;
  TMLongCard v8;
  TMLongCard v9;
  TMLongCard v10;
  typedef Event _g4_t_v11;
  typedef int _g4_t_v12;
  typedef char _g4_t_v13;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v12)) > _g4_s1 ? (40u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v13)) > _g4_s2 ? (44u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);

  result = gameswf::Root::advance(*(self + 10), (float)a2 * 0.001f, a3);
  if ( (*(uint8_t *)(self + 79) & 0x10) != 0 )
    return result;
  v4 = (int)(uintptr_t)(*(self + 31));
  if ( v4 == 0 )
    goto LABEL_4;
  if ( (*(int (**)(uint32_t))(*(uint32_t *)v4 + 160))((uint32_t)(uintptr_t)(*(self + 31))) != 1 )
    goto LABEL_4;
  v7 = (TMLongCard)*(self + 31);
  v11.modifiers = 13;
  v11.modifierMask = v7;
  v11.lateModifiers = (uint32_t)(uintptr_t)(nullptr);
  LOBYTE(v11.eventType) = 0;
  memset(&v11.eventCode, 0, 9);
  *(uint32_t *)&v11.standard = 0;
  v12 = 0;
  v13 = 0;
  gameswf::RenderFX::sendEvent((gameswf::RenderFX::Self *)self, &v11);
  if ( *(self + 31) != nullptr )
  {
    gameswf::RefCounted::dropRef(*(self + 31));
    v5 = (int)(uintptr_t)(*(self + 40));
    *(self + 31) = nullptr;
    if ( v5 == 0 )
      goto LABEL_6;
  }
  else
  {
LABEL_4:
    v5 = (int)(uintptr_t)(*(self + 40));
    if ( v5 == 0 )
      goto LABEL_6;
  }
  if ( G4_VCALL<int>(v5, 160) == 1 )
  {
    v8 = (TMLongCard)*(self + 40);
    v11.modifiers = 13;
    v11.modifierMask = v8;
    v11.lateModifiers = (uint32_t)(uintptr_t)((_LateBindings *)(&dword_0 + 1));
    LOBYTE(v11.eventType) = 0;
    memset(&v11.eventCode, 0, 9);
    *(uint32_t *)&v11.standard = 0;
    v12 = 0;
    v13 = 0;
    gameswf::RenderFX::sendEvent((gameswf::RenderFX::Self *)self, &v11);
    if ( *(self + 40) != nullptr )
    {
      gameswf::RefCounted::dropRef(*(self + 40));
      v6 = (int)(uintptr_t)(*(self + 49));
      *(self + 40) = nullptr;
      if ( v6 == 0 )
        goto LABEL_8;
      goto LABEL_7;
    }
  }
LABEL_6:
  v6 = (int)(uintptr_t)(*(self + 49));
  if ( v6 == 0 )
    goto LABEL_8;
LABEL_7:
  if ( G4_VCALL<int>(v6, 160) == 1 )
  {
    v9 = (TMLongCard)*(self + 49);
    v11.modifiers = 13;
    v11.modifierMask = v9;
    v11.lateModifiers = (uint32_t)(uintptr_t)((_LateBindings *)(&dword_0 + 2));
    LOBYTE(v11.eventType) = 0;
    memset(&v11.eventCode, 0, 9);
    *(uint32_t *)&v11.standard = 0;
    v12 = 0;
    v13 = 0;
    gameswf::RenderFX::sendEvent((gameswf::RenderFX::Self *)self, &v11);
    if ( *(self + 49) != nullptr )
    {
      gameswf::RefCounted::dropRef(*(self + 49));
      result = (int)(uintptr_t)(*(self + 58));
      *(self + 49) = nullptr;
      if ( result == 0 )
        return result;
      goto LABEL_9;
    }
  }
LABEL_8:
  result = (int)(uintptr_t)(*(self + 58));
  if ( result == 0 )
    return result;
LABEL_9:
  result = G4_VCALL<int>(result, 160);
  if ( result == 1 )
  {
    v10 = (TMLongCard)*(self + 58);
    v11.modifiers = 13;
    v11.modifierMask = v10;
    v11.lateModifiers = (uint32_t)(uintptr_t)((_LateBindings *)(&dword_0 + 3));
    LOBYTE(v11.eventType) = 0;
    memset(&v11.eventCode, 0, 9);
    *(uint32_t *)&v11.standard = 0;
    v12 = 0;
    v13 = 0;
    gameswf::RenderFX::sendEvent((gameswf::RenderFX::Self *)self, &v11);
    result = (int)(uintptr_t)(*(self + 58));
    if ( result != 0 )
    {
      result = gameswf::RefCounted::dropRef(*(self + 58));
      *(self + 58) = nullptr;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::updateCursor  (binary VA: 0x1119410)
// Original: gameswf::RenderFX::updateCursor
// ----------------------------------------------------------------------------
char gameswf::RenderFX::updateCursor(size_t a1, float a2, size_t a3, size_t a4, gameswf::RenderFX::Self *self, Cursor *a6, unsigned int a7)
{
  gameswf::RenderFX::Self *v7;
  Cursor *v8;
  float v9; // xmm1_4
  int v10;
  Cursor v11;
  Cursor v12;
  char v13;
  float *v14;
  float v15; // xmm0_4
  int MovieWidth;
  bool v17;
  gameswf::Root::Self *v18;
  gameswf::RefCounted::Self *Character;
  int MovieHeight;
  float v21; // xmm0_4
  int v22;
  int v23;
  int v24;
  char *v25;
  size_t *v26;
  int v27;
  int v28;
  int v29;
  char *v30;
  char *v31;
  gameswf::RefCounted::Self *v32;
  uint32_t *v33;
  int v34;
  int v35;
  int v36;
  int v37;
  gameswf::RefCounted::Self *v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  char v44;
  int v45;
  int v46;
  gameswf::RefCounted::Self *v47;
  int v48;
  gameswf::RefCounted::Self *v49;
  gameswf::RefCounted::Self *v50;
  char v51;
  float v52; // xmm0_4
  float v53; // xmm1_4
  int v54;
  int v55;
  gameswf::Character::Self *v56;
  gameswf::Character::Self *v57;
  gameswf::CharacterHandle::Self *v58;
  int v59;
  gameswf::Self *v60;
  int v61;
  gameswf::Self *v62;
  int v63;
  gameswf::Self *v64;
  int v65;
  int v66;
  gameswf::Self *v67;
  gameswf::Self *v68;
  char *v69;
  gameswf::Character::Self *v70;
  char v71;
  int v72;
  int v73;
  char v74;
  gameswf::RefCounted::Self *v75;
  char v76;
  int v77;
  gameswf::RefCounted::Self *v78;
  gameswf::RenderFX::Self *v79;
  void *retaddr;
  typedef float _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef char _g4_t_v86;
  typedef char _g4_t_v87;
  typedef char _g4_t_v88;
  typedef char _g4_t_v89;
  typedef char _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef char _g4_t_v95;
  typedef char _g4_t_v96;
  typedef char _g4_t_v97;
  typedef char _g4_t_v98;
  typedef bool _g4_t_v99;
  typedef bool _g4_t_v100;
  typedef char _g4_t_v101;
  typedef gameswf::RefCounted::Self *_g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef char _g4_t_v107;
  typedef gameswf::RefCounted::Self *_g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef gameswf::Character::Self *_g4_t_v111;
  typedef struct _LateBindings *_g4_t_v112;
  typedef Cursor *_g4_t_v113;
  typedef float _g4_t_v114;
  typedef gameswf::RefCounted::Self *_g4_t_v115;
  typedef int _g4_t_v116;
  typedef uint32_t _g4_t_v117[5];
  typedef float _g4_t_v118;
  typedef float _g4_t_v119;
  typedef float _g4_t_v120[6];
  typedef uint8_t _g4_t_v121[24];
  typedef float _g4_t_v122[6];
  typedef gameswf::Self *_g4_t_v123[9];
  typedef gameswf::Self *_g4_t_v124[9];
  typedef gameswf::Self *_g4_t_v125[9];
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef Event _g4_t_v128;
  typedef float _g4_t_v129;
  typedef char _g4_t_v130;
  typedef Event _g4_t_v131;
  typedef float _g4_t_v132;
  typedef char _g4_t_v133;
  typedef size_t _g4_t_v134[20];
  typedef size_t _g4_t_v135;
  typedef size_t _g4_t_v136;
  typedef float _g4_t_v137;
  typedef void *_g4_t_v138;
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (0u + sizeof(_g4_t_v81)) > _g4_s0 ? (0u + sizeof(_g4_t_v81)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v82)) > _g4_s1 ? (28u + sizeof(_g4_t_v82)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v83)) > _g4_s2 ? (28u + sizeof(_g4_t_v83)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v84)) > _g4_s3 ? (28u + sizeof(_g4_t_v84)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v85)) > _g4_s4 ? (28u + sizeof(_g4_t_v85)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v86)) > _g4_s5 ? (28u + sizeof(_g4_t_v86)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v87)) > _g4_s6 ? (28u + sizeof(_g4_t_v87)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v88)) > _g4_s7 ? (28u + sizeof(_g4_t_v88)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v89)) > _g4_s8 ? (28u + sizeof(_g4_t_v89)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v90)) > _g4_s9 ? (28u + sizeof(_g4_t_v90)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v91)) > _g4_s10 ? (52u + sizeof(_g4_t_v91)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v92)) > _g4_s11 ? (52u + sizeof(_g4_t_v92)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v93)) > _g4_s12 ? (52u + sizeof(_g4_t_v93)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v94)) > _g4_s13 ? (52u + sizeof(_g4_t_v94)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v95)) > _g4_s14 ? (52u + sizeof(_g4_t_v95)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v96)) > _g4_s15 ? (52u + sizeof(_g4_t_v96)) : _g4_s15,
    _g4_s17 = (59u + sizeof(_g4_t_v97)) > _g4_s16 ? (59u + sizeof(_g4_t_v97)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v98)) > _g4_s17 ? (60u + sizeof(_g4_t_v98)) : _g4_s17,
    _g4_s19 = (61u + sizeof(_g4_t_v99)) > _g4_s18 ? (61u + sizeof(_g4_t_v99)) : _g4_s18,
    _g4_s20 = (62u + sizeof(_g4_t_v100)) > _g4_s19 ? (62u + sizeof(_g4_t_v100)) : _g4_s19,
    _g4_s21 = (63u + sizeof(_g4_t_v101)) > _g4_s20 ? (63u + sizeof(_g4_t_v101)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v102)) > _g4_s21 ? (64u + sizeof(_g4_t_v102)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v103)) > _g4_s22 ? (64u + sizeof(_g4_t_v103)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v104)) > _g4_s23 ? (64u + sizeof(_g4_t_v104)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v105)) > _g4_s24 ? (68u + sizeof(_g4_t_v105)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v106)) > _g4_s25 ? (72u + sizeof(_g4_t_v106)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v107)) > _g4_s26 ? (76u + sizeof(_g4_t_v107)) : _g4_s26,
    _g4_s28 = (76u + sizeof(_g4_t_v108)) > _g4_s27 ? (76u + sizeof(_g4_t_v108)) : _g4_s27,
    _g4_s29 = (80u + sizeof(_g4_t_v109)) > _g4_s28 ? (80u + sizeof(_g4_t_v109)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v110)) > _g4_s29 ? (80u + sizeof(_g4_t_v110)) : _g4_s29,
    _g4_s31 = (80u + sizeof(_g4_t_v111)) > _g4_s30 ? (80u + sizeof(_g4_t_v111)) : _g4_s30,
    _g4_s32 = (84u + sizeof(_g4_t_v112)) > _g4_s31 ? (84u + sizeof(_g4_t_v112)) : _g4_s31,
    _g4_s33 = (88u + sizeof(_g4_t_v113)) > _g4_s32 ? (88u + sizeof(_g4_t_v113)) : _g4_s32,
    _g4_s34 = (92u + sizeof(_g4_t_v114)) > _g4_s33 ? (92u + sizeof(_g4_t_v114)) : _g4_s33,
    _g4_s35 = (92u + sizeof(_g4_t_v115)) > _g4_s34 ? (92u + sizeof(_g4_t_v115)) : _g4_s34,
    _g4_s36 = (96u + sizeof(_g4_t_v116)) > _g4_s35 ? (96u + sizeof(_g4_t_v116)) : _g4_s35,
    _g4_s37 = (104u + sizeof(_g4_t_v117)) > _g4_s36 ? (104u + sizeof(_g4_t_v117)) : _g4_s36,
    _g4_s38 = (124u + sizeof(_g4_t_v118)) > _g4_s37 ? (124u + sizeof(_g4_t_v118)) : _g4_s37,
    _g4_s39 = (128u + sizeof(_g4_t_v119)) > _g4_s38 ? (128u + sizeof(_g4_t_v119)) : _g4_s38,
    _g4_s40 = (132u + sizeof(_g4_t_v120)) > _g4_s39 ? (132u + sizeof(_g4_t_v120)) : _g4_s39,
    _g4_s41 = (156u + sizeof(_g4_t_v121)) > _g4_s40 ? (156u + sizeof(_g4_t_v121)) : _g4_s40,
    _g4_s42 = (180u + sizeof(_g4_t_v122)) > _g4_s41 ? (180u + sizeof(_g4_t_v122)) : _g4_s41,
    _g4_s43 = (204u + sizeof(_g4_t_v123)) > _g4_s42 ? (204u + sizeof(_g4_t_v123)) : _g4_s42,
    _g4_s44 = (240u + sizeof(_g4_t_v124)) > _g4_s43 ? (240u + sizeof(_g4_t_v124)) : _g4_s43,
    _g4_s45 = (276u + sizeof(_g4_t_v125)) > _g4_s44 ? (276u + sizeof(_g4_t_v125)) : _g4_s44,
    _g4_s46 = (312u + sizeof(_g4_t_v126)) > _g4_s45 ? (312u + sizeof(_g4_t_v126)) : _g4_s45,
    _g4_s47 = (348u + sizeof(_g4_t_v127)) > _g4_s46 ? (348u + sizeof(_g4_t_v127)) : _g4_s46,
    _g4_s48 = (384u + sizeof(_g4_t_v128)) > _g4_s47 ? (384u + sizeof(_g4_t_v128)) : _g4_s47,
    _g4_s49 = (416u + sizeof(_g4_t_v129)) > _g4_s48 ? (416u + sizeof(_g4_t_v129)) : _g4_s48,
    _g4_s50 = (420u + sizeof(_g4_t_v130)) > _g4_s49 ? (420u + sizeof(_g4_t_v130)) : _g4_s49,
    _g4_s51 = (424u + sizeof(_g4_t_v131)) > _g4_s50 ? (424u + sizeof(_g4_t_v131)) : _g4_s50,
    _g4_s52 = (456u + sizeof(_g4_t_v132)) > _g4_s51 ? (456u + sizeof(_g4_t_v132)) : _g4_s51,
    _g4_s53 = (460u + sizeof(_g4_t_v133)) > _g4_s52 ? (460u + sizeof(_g4_t_v133)) : _g4_s52,
    _g4_s54 = (464u + sizeof(_g4_t_v134)) > _g4_s53 ? (464u + sizeof(_g4_t_v134)) : _g4_s53,
    _g4_s55 = (544u + sizeof(_g4_t_v135)) > _g4_s54 ? (544u + sizeof(_g4_t_v135)) : _g4_s54,
    _g4_s56 = (548u + sizeof(_g4_t_v136)) > _g4_s55 ? (548u + sizeof(_g4_t_v136)) : _g4_s55,
    _g4_s57 = (552u + sizeof(_g4_t_v137)) > _g4_s56 ? (552u + sizeof(_g4_t_v137)) : _g4_s56,
    _g4_s58 = (556u + sizeof(_g4_t_v138)) > _g4_s57 ? (556u + sizeof(_g4_t_v138)) : _g4_s57
  };
  alignas(16) uint8_t _g4_sf[_g4_s58];
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 0u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 28u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 28u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 28u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 28u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 28u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 28u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 28u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 28u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 28u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 52u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 52u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 52u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 52u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 52u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 52u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 59u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 60u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 61u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 62u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 63u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 64u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 64u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 64u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 68u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 72u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 76u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 76u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 80u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 80u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 80u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 84u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 88u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 92u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 92u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 96u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 104u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 124u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 128u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 132u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 156u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 180u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 204u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 240u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 276u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 312u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 348u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 384u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 416u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 420u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 424u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 456u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 460u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 464u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 544u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 548u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 552u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 556u);

  v79 = self;
  if ( *((uint8_t *)self + 312) == 0 )
    return (char)(uintptr_t)(v79);
  if ( a7 > 3 )
    return (char)(uintptr_t)(v79);
  self = (gameswf::RenderFX::Self *)a7;
  v138 = retaddr;
  v137 = a2;
  v136 = a3;
  v135 = a4;
  v7 = v79;
  v134[19] = a1;
  v134[18] = (size_t)&self;
  v113 = a6;
  v112 = (struct _LateBindings *)a7;
  v8 = a6;
  v9 = *((float *)v79 + 9 * a7 + 27);
  v116 = (int)(uintptr_t)(v79) + 36 * a7 + 104;
  v114 = *(float *)v116;
  v107 = *((uint8_t *)v79 + 36 * a7 + 112);
  *(uint32_t *)v116 = *(uint32_t *)v8;
  *(uint32_t *)(v116 + 4) = *((uint32_t *)v8 + 1);
  *(uint8_t *)(v116 + 8) = *((uint8_t *)v8 + 8);
  v10 = *((uint32_t *)v79 + 10);
  v11 = *v8;
  v12 = v8[1];
  v118 = *(float *)&v11;
  v119 = *(float *)&v12;
  *(float *)(v10 + 172) = *(float *)&v11;
  *(float *)(v10 + 176) = *(float *)&v12;
  *(uint32_t *)(*((uint32_t *)v7 + 10) + 180) = (uint32_t)(uintptr_t)(v112);
  LOBYTE(v79) = (uint8_t)(uintptr_t)gameswf::Root::screenToLogical(*((gameswf::Root::Self **)v7 + 10), (gameswf::Point::Self *)&v118);
  v106 = v118;
  v101 = *((uint8_t *)v113 + 8);
  v105 = v119;
  if ( *(uint8_t *)(v116 + 32) == 0 )
    return (char)(uintptr_t)(v79);
  LOBYTE(v79) = gameswf::CharacterHandle::opEq((gameswf::RenderFX::Self *)((char *)v7 + 44), (gameswf::Character::Self *)nullptr);
  if ( (uint8_t)(uintptr_t)(v79) != 0 || (*((uint8_t *)v7 + 316) & 0x40) != 0 && *(uint32_t *)(v116 + 20) != 0 )
    return (char)(uintptr_t)(v79);
  gameswf::Root::notifyMouseState(*((gameswf::Root::Self **)v7 + 10), (int)v106, (int)v105, 0);
  v13 = *((uint8_t *)v113 + 8);
  v98 = v107 ^ 1;
  if ( v13 != 0 || (v98 = 0, v97 = 1, v107 == 0) )
    v97 = 0;
  v99 = true;
  if ( v114 == *(float *)v113 )
    v99 = v9 != *((float *)v113 + 1);
  v100 = false;
  if ( v13 != 0 )
  {
    v100 = true;
    if ( v114 == *(float *)v113 )
      v100 = v9 != *((float *)v113 + 1);
  }
  v14 = *((float **)v7 + 10);
  v15 = v14[15];
  v120[0] = 0.0;
  v120[1] = 0.0;
  v120[2] = -v15;
  v81 = v105 - (float)(gameswf::Root::getMovieHeight((gameswf::Root::Self *)v14) / 2);
  MovieWidth = gameswf::Root::getMovieWidth(*((gameswf::Root::Self **)v7 + 10));
  v120[5] = 0.0;
  v17 = (*((uint8_t *)v7 + 316) & 2) == 0;
  v120[4] = v81;
  v120[3] = v106 - (float)(MovieWidth / 2);
  if ( v17 )
  {
    Character = (gameswf::RefCounted::Self *)gameswf::CharacterHandle::getCharacter((gameswf::RenderFX::Self *)((char *)v7 + 44));
    v108 = Character;
    if ( Character == nullptr )
      goto LABEL_19;
    goto LABEL_18;
  }
  v18 = *((gameswf::Root::Self **)v7 + 10);
  Character = *((gameswf::RefCounted::Self **)v18 + 4);
  v108 = Character;
  if ( Character != nullptr )
  {
LABEL_18:
    gameswf::RefCounted::addRef(Character);
LABEL_19:
    v18 = *((gameswf::Root::Self **)v7 + 10);
  }
  memset(v134, 0, 0x40u);
  v134[15] = 1065353216;
  v134[10] = 1065353216;
  v134[5] = 1065353216;
  v134[0] = 1065353216;
  MovieHeight = gameswf::Root::getMovieHeight(v18);
  v21 = (float)(gameswf::Root::getMovieWidth(*((gameswf::Root::Self **)v7 + 10)) / -2);
  gameswf::Transform::postTranslate((gameswf::Transform::Self *)v134, v21, (float)(MovieHeight / -2), 0.0);
  v22 = *((uint32_t *)v7 + 10);
  v23 = *(uint32_t *)(v22 + 68);
  v109 = *(uint32_t *)(v22 + 72);
  v24 = v23 + 1;
  if ( v23 + 1 <= v109 || *(uint32_t *)(v22 + 76) != 0 )
  {
    v25 = *(char **)(v22 + 64);
  }
  else
  {
    v59 = v24 + (v24 >> 1);
    *(uint32_t *)(v22 + 72) = v59;
    if ( v59 != 0 )
    {
      v68 = *(gameswf::Self **)(v22 + 64);
      v85 = v24;
      if ( v68 != nullptr )
        v69 = (char *)gameswf::realloc_internal(v68, v59 << 6, v109 << 6);
      else
        v69 = (char *)gameswf::malloc_internal(v59 << 6);
      *(uint32_t *)(v22 + 64) = (uint32_t)(uintptr_t)(v69);
      v25 = v69;
      v24 = v85;
      v23 = *(uint32_t *)(v22 + 68);
    }
    else
    {
      v60 = *(gameswf::Self **)(v22 + 64);
      if ( v60 != nullptr )
      {
        v82 = v23 + 1;
        gameswf::free_internal(v60);
        v23 = *(uint32_t *)(v22 + 68);
        v24 = v82;
      }
      *(uint32_t *)(v22 + 64) = 0;
      v25 = nullptr;
    }
  }
  v26 = (size_t *)&v25[64 * v23];
  if ( v26 != nullptr )
    std::memcpy(v26, v134, 64);
  v27 = *(uint32_t *)(v22 + 84);
  v28 = *(uint32_t *)(v22 + 88);
  *(uint32_t *)(v22 + 68) = v24;
  v110 = v28;
  v29 = v27 + 1;
  if ( v27 + 1 <= v28 || *(uint32_t *)(v22 + 92) != 0 )
  {
    v30 = *(char **)(v22 + 80);
  }
  else
  {
    v61 = v29 + (v29 >> 1);
    *(uint32_t *)(v22 + 88) = v61;
    if ( v61 != 0 )
    {
      v84 = v27 + 1;
      if ( *(uint32_t *)(v22 + 80) != 0 )
        v30 = (char *)gameswf::realloc_internal(*(gameswf::Self **)(v22 + 80), 4 * v61, 4 * v110);
      else
        v30 = (char *)gameswf::malloc_internal(4 * v61);
      *(uint32_t *)(v22 + 80) = (uint32_t)(uintptr_t)(v30);
      v27 = *(uint32_t *)(v22 + 84);
      v29 = v84;
    }
    else
    {
      v62 = *(gameswf::Self **)(v22 + 80);
      if ( v62 != nullptr )
      {
        v83 = v27 + 1;
        gameswf::free_internal(v62);
        v27 = *(uint32_t *)(v22 + 84);
        v29 = v83;
      }
      *(uint32_t *)(v22 + 80) = 0;
      v30 = nullptr;
    }
  }
  v31 = &v30[4 * v27];
  if ( v31 != nullptr )
    *(uint32_t *)v31 = 0;
  *(uint32_t *)(v22 + 84) = v29;
  v32 = (gameswf::RefCounted::Self *)G4_VCALL<int>(v108, 112, COERCE_FLOAT(LODWORD(v106)), COERCE_FLOAT(LODWORD(v105)), v120);
  v115 = v32;
  if ( v32 != nullptr )
    gameswf::RefCounted::addRef(v32);
  v33 = *((uint32_t **)v7 + 10);
  v34 = v33[17] - 1;
  if ( v33[17] != 1 )
  {
    v35 = v33[18];
    if ( v34 > v35 && v33[19] == 0 )
    {
      v63 = v34 + (v34 >> 1);
      v17 = v63 == 0;
      v103 = v63;
      v33[18] = v63;
      v64 = (gameswf::Self *)v33[16];
      if ( v17 )
      {
        if ( v64 != nullptr )
        {
          v91 = v34;
          v135 = v35 << 6;
          gameswf::free_internal(v64);
          v34 = v91;
        }
        v33[16] = 0;
      }
      else
      {
        v93 = v34;
        if ( v64 != nullptr )
        {
          v137 = 0.0;
          v33[16] = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v64, v103 << 6, v35 << 6));
        }
        else
        {
          v135 = 0;
          v33[16] = gameswf::malloc_internal(v103 << 6);
        }
        v34 = v93;
      }
    }
  }
  v33[17] = v34;
  v36 = v33[21] - 1;
  if ( v33[21] != 1 )
  {
    v37 = v33[22];
    if ( v36 > v37 && v33[23] == 0 )
    {
      v66 = v36 + (v36 >> 1);
      v17 = v66 == 0;
      v104 = v66;
      v33[22] = v66;
      v67 = (gameswf::Self *)v33[20];
      if ( v17 )
      {
        if ( v67 != nullptr )
        {
          v92 = v36;
          v135 = 4 * v37;
          gameswf::free_internal(v67);
          v36 = v92;
        }
        v33[20] = 0;
      }
      else
      {
        v94 = v36;
        if ( v67 != nullptr )
        {
          v137 = 0.0;
          v33[20] = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v67, 4 * v104, 4 * v37));
        }
        else
        {
          v135 = 0;
          v33[20] = gameswf::malloc_internal(4 * v104);
        }
        v36 = v94;
      }
    }
  }
  v33[21] = v36;
  v38 = *(gameswf::RefCounted::Self **)(v116 + 12);
  v102 = v38;
  if ( v38 != nullptr )
    gameswf::RefCounted::addRef(v38);
  if ( *(uint8_t *)(*((uint32_t *)v7 + 9) + 232) != 0 )
  {
    if ( v115 == nullptr )
    {
      v75 = *(gameswf::RefCounted::Self **)(*((uint32_t *)v7 + 10) + 16);
      v115 = v75;
      if ( v75 != nullptr )
        gameswf::RefCounted::addRef(v75);
    }
  }
  else if ( v115 != nullptr
         && G4_VCALL<uint8_t>(v115, 344) == 0 )
  {
    gameswf::RefCounted::dropRef(v115);
    v115 = nullptr;
  }
  if ( *(uint32_t *)(v116 + 24) == 0 || *(uint8_t *)(*((uint32_t *)v7 + 9) + 232) != 0 )
  {
    v39 = *((uint32_t *)v7 + 79);
    if ( v98 == 0 && (v39 & 8) != 0 && ((v39 & 0x20) == 0 || !v100 || v115 == nullptr) )
    {
LABEL_43:
      if ( v97 == 0 )
        goto LABEL_47;
      goto LABEL_44;
    }
    v58 = (gameswf::CharacterHandle::Self *)&v127;
    v135 = (size_t)v115;
    goto LABEL_104;
  }
  if ( (*((uint8_t *)v7 + 316) & 0x20) != 0 && v115 != nullptr && v100 )
  {
    v58 = (gameswf::CharacterHandle::Self *)&v126;
    v135 = (size_t)v115;
LABEL_104:
    gameswf::CharacterHandle::Construct(v58, (gameswf::Character::Self *)v135);
    gameswf::RenderFX::setFocus((gameswf::Character::Self **)v7, v58, (int)(uintptr_t)(v112), v98);
    gameswf::CharacterHandle::Destroy((gameswf::Self **)v58);
  }
  if ( v98 == 0 )
    goto LABEL_43;
LABEL_44:
  v40 = *(uint32_t *)(v116 + 20);
  if ( *(uint32_t *)(v116 + 12) != v40 && v40 != 0 )
  {
    gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v116 + 20));
    *(uint32_t *)(v116 + 20) = 0;
  }
LABEL_47:
  v41 = *(uint32_t *)(v116 + 24);
  if ( v41 != 0
    && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v41 + 344))(*(uint32_t *)(v116 + 24)) == 0
    && *(uint32_t *)(v116 + 24) != 0 )
  {
    gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v116 + 24));
    *(uint32_t *)(v116 + 24) = 0;
  }
  if ( v99 && v115 != nullptr )
  {
    gameswf::getLocalPosition((gameswf::Self *)v117, v115, v106, v105);
    v131.modifierMask = (TMLongCard)v115;
    v131.eventCode = v117[0];
    v131.eventCodeMask = v117[1];
    v42 = *((uint32_t *)v7 + 81);
    v131.modifiers = 12;
    LOBYTE(v131.matchEvent) = *((uint8_t *)v113 + 8);
    v131.lateModifiers = (uint32_t)(uintptr_t)(v112);
    LOBYTE(v131.eventType) = 0;
    v133 = v101;
    *(float *)&v131.standard = v106;
    v132 = v105;
    if ( G4_VCALL<uint8_t>(v42, 16, &v131) != 0 )
      gameswf::RenderFX::sendEvent(v7, &v131);
  }
  if ( v102 != *(gameswf::RefCounted::Self **)(v116 + 12) )
  {
    v43 = *(uint32_t *)(v116 + 16);
    if ( v43 != 0 && G4_VCALL<uint8_t>(v43, 344) != 0 )
    {
      gameswf::getLocalPosition((gameswf::Self *)v117, *(gameswf::Character::Self **)(v116 + 16), v106, v105);
      v131.modifiers = 9;
      LOBYTE(v131.eventType) = 0;
      v44 = *((uint8_t *)v113 + 8);
      v131.modifierMask = *(uint32_t *)(v116 + 16);
      v131.lateModifiers = (uint32_t)(uintptr_t)(v112);
      v131.eventCode = v117[0];
      v131.eventCodeMask = v117[1];
      v45 = *((uint32_t *)v7 + 81);
      LOBYTE(v131.matchEvent) = v44;
      *(float *)&v131.standard = v106;
      v133 = v101;
      v132 = v105;
      if ( G4_VCALL<uint8_t>(v45, 16, &v131) != 0 )
        gameswf::RenderFX::sendEvent(v7, &v131);
    }
    if ( v115 != nullptr && G4_VCALL<uint8_t>(v115, 344) != 0 )
    {
      gameswf::getLocalPosition((gameswf::Self *)v117, v115, v106, v105);
      v131.modifierMask = (TMLongCard)v115;
      v131.eventCode = v117[0];
      v131.eventCodeMask = v117[1];
      v46 = *((uint32_t *)v7 + 81);
      v131.modifiers = 8;
      LOBYTE(v131.matchEvent) = *((uint8_t *)v113 + 8);
      v131.lateModifiers = (uint32_t)(uintptr_t)(v112);
      LOBYTE(v131.eventType) = 0;
      v133 = v101;
      *(float *)&v131.standard = v106;
      v132 = v105;
      if ( G4_VCALL<uint8_t>(v46, 16, &v131) != 0 )
        gameswf::RenderFX::sendEvent(v7, &v131);
    }
  }
  if ( v100 )
  {
    v47 = *(gameswf::RefCounted::Self **)(v116 + 12);
    if ( v47 != nullptr )
    {
      if ( v47 == *(gameswf::RefCounted::Self **)(v116 + 16) && v47 != v115 )
      {
        if ( G4_VCALL<uint8_t>(v47, 344) != 0 )
        {
          gameswf::getLocalPosition((gameswf::Self *)v117, *(gameswf::Character::Self **)(v116 + 12), v106, v105);
          v131.modifiers = 11;
          LOBYTE(v131.eventType) = 0;
          v71 = *((uint8_t *)v113 + 8);
          v131.modifierMask = *(uint32_t *)(v116 + 12);
          v131.lateModifiers = (uint32_t)(uintptr_t)(v112);
          v131.eventCode = v117[0];
          v131.eventCodeMask = v117[1];
          v72 = *((uint32_t *)v7 + 81);
          LOBYTE(v131.matchEvent) = v71;
          *(float *)&v131.standard = v106;
          v133 = v101;
          v132 = v105;
          if ( G4_VCALL<uint8_t>(v72, 16, &v131) != 0 )
            gameswf::RenderFX::sendEvent(v7, &v131);
        }
        v47 = *(gameswf::RefCounted::Self **)(v116 + 12);
      }
      if ( v47 != *(gameswf::RefCounted::Self **)(v116 + 16)
        && v115 != nullptr
        && v47 == v115
        && G4_VCALL<uint8_t>(v115, 344) != 0 )
      {
        gameswf::getLocalPosition((gameswf::Self *)v117, *(gameswf::Character::Self **)(v116 + 12), v106, v105);
        v131.modifiers = 10;
        LOBYTE(v131.eventType) = 0;
        v76 = *((uint8_t *)v113 + 8);
        v131.modifierMask = *(uint32_t *)(v116 + 12);
        v131.lateModifiers = (uint32_t)(uintptr_t)(v112);
        v131.eventCode = v117[0];
        v131.eventCodeMask = v117[1];
        v77 = *((uint32_t *)v7 + 81);
        LOBYTE(v131.matchEvent) = v76;
        *(float *)&v131.standard = v106;
        v133 = v101;
        v132 = v105;
        if ( G4_VCALL<uint8_t>(v77, 16, &v131) != 0 )
          gameswf::RenderFX::sendEvent(v7, &v131);
      }
    }
  }
  v48 = v116;
  v49 = *(gameswf::RefCounted::Self **)(v116 + 16);
  if ( v115 != v49 )
  {
    if ( v49 != nullptr )
      gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v116 + 16));
    v48 = v116;
    *(uint32_t *)(v116 + 16) = (uint32_t)(uintptr_t)(v115);
    if ( v115 != nullptr )
    {
      gameswf::RefCounted::addRef(v115);
      v48 = v116;
    }
  }
  v50 = *(gameswf::RefCounted::Self **)(v48 + 12);
  v111 = (gameswf::Character::Self *)(v50);
  if ( v50 == nullptr )
    goto LABEL_82;
  gameswf::RefCounted::addRef(v50);
  if ( G4_VCALL<uint8_t>(v111, 344) != 0 )
  {
    std::memcpy(v121, gameswf::Character::getWorldMatrix(v111), sizeof(v121));
    memset(v122, 0, sizeof(v122));
    v122[0] = 1.0;
    v122[4] = 1.0;
    gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v122, (const gameswf::Matrix::Self *)v121);
    v51 = *((uint8_t *)v113 + 8);
    v52 = (float)((float)(v106 * v122[0]) + (float)(v105 * v122[1])) + v122[2];
    v53 = (float)((float)(v106 * v122[3]) + (float)(v105 * v122[4])) + v122[5];
    if ( v98 != 0 )
    {
      v54 = *((uint32_t *)v7 + 79);
      if ( (v54 & 1) != 0 || v115 != nullptr )
      {
        if ( (v54 & 0x10) == 0 )
        {
          v86 = *((uint8_t *)v113 + 8);
          gameswf::Character::getHandle((gameswf::Character::Self *)v125, v111);
          gameswf::CharacterHandle::gotoAndPlay((gameswf::CharacterHandle::Self *)v125, "pressed");
          gameswf::CharacterHandle::Destroy(v125);
          v51 = v86;
        }
        v131.modifierMask = (TMLongCard)v111;
        v131.lateModifiers = (uint32_t)(uintptr_t)(v112);
        v131.modifiers = 3;
        *(float *)&v131.eventCode = v52;
        v133 = v101;
        *(float *)&v131.eventCodeMask = v53;
        LOBYTE(v131.eventType) = 0;
        LOBYTE(v131.matchEvent) = v51;
        *(float *)&v131.standard = v106;
        v132 = v105;
        gameswf::RenderFX::sendEvent(v7, &v131);
        v55 = v116;
        v56 = *(gameswf::Character::Self **)(v116 + 24);
        if ( v111 != v56 )
        {
          if ( v56 != nullptr )
            gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v116 + 24));
          *(uint32_t *)(v116 + 24) = (uint32_t)(uintptr_t)(v111);
          gameswf::RefCounted::addRef(v111);
          v55 = v116;
        }
        v57 = *(gameswf::Character::Self **)(v55 + 28);
        if ( v111 != v57 )
        {
          if ( v57 != nullptr )
            gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v55 + 28));
          *(uint32_t *)(v116 + 28) = (uint32_t)(uintptr_t)(v111);
          gameswf::RefCounted::addRef(v111);
        }
        goto LABEL_81;
      }
      goto LABEL_80;
    }
    if ( v97 != 0 )
    {
      if ( (*((uint8_t *)v7 + 316) & 1) == 0 && v111 != (gameswf::Character::Self *)(uintptr_t)(v115) )
      {
        v131.modifierMask = (TMLongCard)v111;
        v131.lateModifiers = (uint32_t)(uintptr_t)(v112);
        LOBYTE(v131.matchEvent) = v51;
        *(float *)&v131.eventCode = (float)((float)(v106 * v122[0]) + (float)(v105 * v122[1])) + v122[2];
        v133 = v101;
        v131.modifiers = 6;
        *(float *)&v131.eventCodeMask = (float)((float)(v106 * v122[3]) + (float)(v105 * v122[4])) + v122[5];
        LOBYTE(v131.eventType) = 0;
        *(float *)&v131.standard = v106;
        v132 = v105;
        gameswf::RenderFX::sendEvent(v7, &v131);
        gameswf::RenderFX::resetFocus((gameswf::Character::Self **)v7, (int)(uintptr_t)(v112));
        v65 = v116;
LABEL_128:
        if ( *(uint32_t *)(v65 + 24) != 0 )
        {
          gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v65 + 24));
          v65 = v116;
          *(uint32_t *)(v116 + 24) = 0;
        }
        if ( *(uint32_t *)(v65 + 28) != 0 )
        {
          gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v65 + 28));
          *(uint32_t *)(v116 + 28) = 0;
        }
        goto LABEL_81;
      }
      v73 = *((uint32_t *)v7 + 81);
      v128.modifierMask = (TMLongCard)v111;
      v128.lateModifiers = (uint32_t)(uintptr_t)(v112);
      *(float *)&v128.standard = v106;
      LOBYTE(v128.matchEvent) = v51;
      v128.modifiers = 5;
      LOBYTE(v128.eventType) = 0;
      *(float *)&v128.eventCode = (float)((float)(v106 * v122[0]) + (float)(v105 * v122[1])) + v122[2];
      v130 = v101;
      *(float *)&v128.eventCodeMask = (float)((float)(v106 * v122[3]) + (float)(v105 * v122[4])) + v122[5];
      v129 = v105;
      v87 = v51;
      if ( G4_VCALL<uint8_t>(v73, 16, &v128) == 0 )
      {
LABEL_172:
        v65 = v116;
        goto LABEL_128;
      }
      if ( (*((uint8_t *)v7 + 316) & 0x10) != 0 )
      {
        gameswf::RenderFX::sendEvent(v7, &v128);
        v74 = v87;
LABEL_169:
        LOBYTE(v131.matchEvent) = v74;
        v131.modifierMask = (TMLongCard)v111;
        v131.lateModifiers = (uint32_t)(uintptr_t)(v112);
        v88 = v74;
        v131.modifiers = 13;
        *(float *)&v131.standard = v106;
        v133 = v101;
        LOBYTE(v131.eventType) = 0;
        *(float *)&v131.eventCode = v52;
        *(float *)&v131.eventCodeMask = v53;
        v132 = v105;
        gameswf::RenderFX::sendEvent(v7, &v131);
        v65 = v116;
        v74 = v88;
LABEL_170:
        if ( v111 != *(gameswf::Character::Self **)(v65 + 28) )
          goto LABEL_128;
        v131.modifierMask = (TMLongCard)v111;
        v131.lateModifiers = (uint32_t)(uintptr_t)(v112);
        *(float *)&v131.eventCode = v52;
        v131.modifiers = 7;
        *(float *)&v131.eventCodeMask = v53;
        LOBYTE(v131.eventType) = 0;
        LOBYTE(v131.matchEvent) = v74;
        *(float *)&v131.standard = v106;
        v133 = v101;
        v132 = v105;
        gameswf::RenderFX::sendEvent(v7, &v131);
        goto LABEL_172;
      }
      gameswf::Character::getHandle((gameswf::Character::Self *)v124, v111);
      v95 = gameswf::CharacterHandle::gotoAndPlay((gameswf::CharacterHandle::Self *)v124, "released");
      gameswf::CharacterHandle::Destroy(v124);
      if ( v95 != 0 )
      {
        gameswf::RenderFX::sendEvent(v7, &v128);
        v74 = v87;
      }
      else
      {
        gameswf::Character::getHandle((gameswf::Character::Self *)v123, v111);
        v96 = gameswf::CharacterHandle::gotoAndPlay((gameswf::CharacterHandle::Self *)v123, "clicked");
        gameswf::CharacterHandle::Destroy(v123);
        gameswf::RenderFX::sendEvent(v7, &v128);
        v74 = v87;
        if ( v96 == 0 )
          goto LABEL_169;
      }
      v65 = v116;
      v78 = *(gameswf::RefCounted::Self **)(v116 + 20);
      if ( v111 != (gameswf::Character::Self *)(uintptr_t)(v78) )
      {
        if ( v78 != nullptr )
        {
          v89 = v74;
          gameswf::RefCounted::dropRef(v78);
          v74 = v89;
        }
        *(uint32_t *)(v116 + 20) = (uint32_t)(uintptr_t)(v111);
        v90 = v74;
        gameswf::RefCounted::addRef(v111);
        v74 = v90;
        v65 = v116;
      }
      goto LABEL_170;
    }
    if ( v100 )
    {
      if ( (*((uint8_t *)v7 + 316) & 0x10) == 0 )
      {
        v131.modifierMask = (TMLongCard)v111;
        v131.lateModifiers = (uint32_t)(uintptr_t)(v112);
        v131.modifiers = 4;
        *(float *)&v131.eventCode = (float)((float)(v106 * v122[0]) + (float)(v105 * v122[1])) + v122[2];
        LOBYTE(v131.eventType) = 0;
        *(float *)&v131.eventCodeMask = (float)((float)(v106 * v122[3]) + (float)(v105 * v122[4])) + v122[5];
        LOBYTE(v131.matchEvent) = v51;
        *(float *)&v131.standard = v106;
        v133 = v101;
        v132 = v105;
        gameswf::RenderFX::sendEvent(v7, &v131);
      }
      v70 = *(gameswf::Character::Self **)(v116 + 24);
      if ( v111 != v70 )
      {
        if ( v70 != nullptr )
          gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v116 + 24));
        *(uint32_t *)(v116 + 24) = (uint32_t)(uintptr_t)(v111);
        gameswf::RefCounted::addRef(v111);
      }
      goto LABEL_81;
    }
    if ( (*((uint8_t *)v7 + 316) & 1) == 0 && v115 == nullptr && *(uint32_t *)(v116 + 24) == 0 )
LABEL_80:
      gameswf::RenderFX::resetFocus((gameswf::Character::Self **)v7, (int)(uintptr_t)(v112));
  }
LABEL_81:
  gameswf::RefCounted::dropRef(v111);
LABEL_82:
  if ( v102 != nullptr )
    gameswf::RefCounted::dropRef(v102);
  if ( v115 != nullptr )
    gameswf::RefCounted::dropRef(v115);
  LOBYTE(v79) = gameswf::RefCounted::dropRef(v108);
  return (char)(uintptr_t)(v79);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::setViewport  (binary VA: 0x1119440)
// Original: gameswf::RenderFX::setViewport
// ----------------------------------------------------------------------------
int gameswf::RenderFX::setViewport(int a1, int a2, unsigned int a3, char *a4, int a5, int a6)
{
  gameswf::RefCounted::Self *Root;
  gameswf::RefCounted::Self *v8;

  Root = (gameswf::RefCounted::Self *)gameswf::Player::getRoot(*(gameswf::Player::Self **)(a1 + 36));
  if ( Root == nullptr )
    return gameswf::Root::setDisplayViewport(nullptr, a2, a3, a4, a5, a6);
  v8 = Root;
  gameswf::RefCounted::addRef(Root);
  gameswf::Root::setDisplayViewport(v8, a2, a3, a4, a5, a6);
  return gameswf::RefCounted::dropRef(v8);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::setBounds  (binary VA: 0x1119510)
// Original: gameswf::RenderFX::setBounds
// ----------------------------------------------------------------------------
int gameswf::RenderFX::setBounds(int a1, int a2, int a3, int a4, int a5, int a6)
{
  gameswf::RefCounted::Self *Root;
  gameswf::RefCounted::Self *v8;

  Root = (gameswf::RefCounted::Self *)gameswf::Player::getRoot(*(gameswf::Player::Self **)(a1 + 36));
  if ( Root == nullptr )
    return gameswf::Root::setDisplayBounds(nullptr, a2, a3, a4, a5, a6);
  v8 = Root;
  gameswf::RefCounted::addRef(Root);
  gameswf::Root::setDisplayBounds(v8, a2, a3, a4, a5, a6);
  return gameswf::RefCounted::dropRef(v8);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::setStageSize  (binary VA: 0x11195e0)
// Original: gameswf::RenderFX::setStageSize
// ----------------------------------------------------------------------------
int gameswf::RenderFX::setStageSize(gameswf::Player::Self **self, int a2, int a3)
{
  gameswf::RefCounted::Self *Root;
  gameswf::Root::Self *v4;

  Root = (gameswf::RefCounted::Self *)gameswf::Player::getRoot(*(self + 9));
  v4 = (gameswf::Root::Self *)(Root);
  if ( Root == nullptr )
    return gameswf::Root::setStageSize(nullptr, a2, a3);
  gameswf::RefCounted::addRef(Root);
  gameswf::Root::setStageSize(v4, a2, a3);
  return gameswf::RefCounted::dropRef(v4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::setGarbageCollectorTime  (binary VA: 0x1119670)
// Original: gameswf::RenderFX::setGarbageCollectorTime
// ----------------------------------------------------------------------------
int gameswf::RenderFX::setGarbageCollectorTime(gameswf::RenderFX::Self *self, int a2)
{
  int result;

  result = *((uint32_t *)self + 10);
  *(uint32_t *)(result + 240) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::setGarbageCollectorIntervalTime  (binary VA: 0x11196e0)
// Original: gameswf::RenderFX::setGarbageCollectorIntervalTime
// ----------------------------------------------------------------------------
int gameswf::RenderFX::setGarbageCollectorIntervalTime(gameswf::RenderFX::Self *self, int a2)
{
  int result;

  result = *((uint32_t *)self + 10);
  *(uint32_t *)(result + 244) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::setGarbageCollectorObjectThreshold  (binary VA: 0x1119700)
// Original: gameswf::RenderFX::setGarbageCollectorObjectThreshold
// ----------------------------------------------------------------------------
int gameswf::RenderFX::setGarbageCollectorObjectThreshold(gameswf::RenderFX::Self *self, int a2)
{
  int result;

  result = *((uint32_t *)self + 10);
  *(uint32_t *)(result + 248) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::getViewportWidth  (binary VA: 0x1119720)
// Original: gameswf::RenderFX::getViewportWidth
// ----------------------------------------------------------------------------
int gameswf::RenderFX::getViewportWidth(gameswf::RenderFX::Self *self)
{
  return *(uint32_t *)(*((uint32_t *)self + 10) + 28);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::getViewportHeight  (binary VA: 0x1119730)
// Original: gameswf::RenderFX::getViewportHeight
// ----------------------------------------------------------------------------
int gameswf::RenderFX::getViewportHeight(gameswf::RenderFX::Self *self)
{
  return *(uint32_t *)(*((uint32_t *)self + 10) + 32);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::getBoundWidth  (binary VA: 0x1119740)
// Original: gameswf::RenderFX::getBoundWidth
// ----------------------------------------------------------------------------
int gameswf::RenderFX::getBoundWidth(gameswf::RenderFX::Self *self)
{
  return *(uint32_t *)(*((uint32_t *)self + 10) + 44);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::getBoundHeight  (binary VA: 0x1119750)
// Original: gameswf::RenderFX::getBoundHeight
// ----------------------------------------------------------------------------
int gameswf::RenderFX::getBoundHeight(gameswf::RenderFX::Self *self)
{
  return *(uint32_t *)(*((uint32_t *)self + 10) + 48);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::getMovieWidth  (binary VA: 0x1119760)
// Original: gameswf::RenderFX::getMovieWidth
// ----------------------------------------------------------------------------
int gameswf::RenderFX::getMovieWidth(gameswf::Root::Self **self)
{
  return gameswf::Root::getMovieWidth(*(self + 10));
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::getMovieHeight  (binary VA: 0x1119790)
// Original: gameswf::RenderFX::getMovieHeight
// ----------------------------------------------------------------------------
int gameswf::RenderFX::getMovieHeight(gameswf::Root::Self **self)
{
  return gameswf::Root::getMovieHeight(*(self + 10));
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::logicalToScreen  (binary VA: 0x11197c0)
// Original: gameswf::RenderFX::logicalToScreen
// ----------------------------------------------------------------------------
gameswf::Root::Self * gameswf::RenderFX::logicalToScreen(gameswf::Root::Self **self, gameswf::Point::Self *a2)
{
  return gameswf::Root::logicalToScreen(*(self + 10), a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::screenToLogical  (binary VA: 0x11197f0)
// Original: gameswf::RenderFX::screenToLogical
// ----------------------------------------------------------------------------
gameswf::Root::Self * gameswf::RenderFX::screenToLogical(gameswf::Root::Self **self, gameswf::Point::Self *a2)
{
  return gameswf::Root::screenToLogical(*(self + 10), a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::beginDisplay  (binary VA: 0x1119820)
// Original: gameswf::RenderFX::beginDisplay
// ----------------------------------------------------------------------------
uint32_t * gameswf::RenderFX::beginDisplay(gameswf::Player::Self **self)
{
  gameswf::RefCounted::Self *Root;
  gameswf::Self **v2;

  Root = (gameswf::RefCounted::Self *)gameswf::Player::getRoot(*(self + 9));
  v2 = (gameswf::Self **)Root;
  if ( Root == nullptr )
    return gameswf::Root::beginDisplay(nullptr);
  gameswf::RefCounted::addRef(Root);
  gameswf::Root::beginDisplay(v2);
  return (uint32_t *)gameswf::RefCounted::dropRef((gameswf::RefCounted::Self *)v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::endDisplay  (binary VA: 0x11198a0)
// Original: gameswf::RenderFX::endDisplay
// ----------------------------------------------------------------------------
uint32_t * gameswf::RenderFX::endDisplay(gameswf::Player::Self **self)
{
  gameswf::RefCounted::Self *Root;
  gameswf::RefCounted::Self *v2;

  Root = (gameswf::RefCounted::Self *)gameswf::Player::getRoot(*(self + 9));
  v2 = Root;
  if ( Root == nullptr )
    return gameswf::Root::endDisplay();
  gameswf::RefCounted::addRef(Root);
  gameswf::Root::endDisplay();
  return (uint32_t *)gameswf::RefCounted::dropRef(v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::render  (binary VA: 0x1119920)
// Original: gameswf::RenderFX::render
// ----------------------------------------------------------------------------
uint32_t * gameswf::RenderFX::render(int a1, int a2)
{
  gameswf::RefCounted::Self *Root;
  gameswf::Root::Self *v3;
  uint32_t *result;

  Root = (gameswf::RefCounted::Self *)gameswf::Player::getRoot(*(gameswf::Player::Self **)(a1 + 36));
  v3 = (gameswf::Root::Self *)(Root);
  if ( Root != nullptr )
  {
    gameswf::RefCounted::addRef(Root);
    gameswf::s_render_handler[16] = a2;
    gameswf::Root::display(v3);
    gameswf::s_render_handler[16] = 0;
    return (uint32_t *)gameswf::RefCounted::dropRef(v3);
  }
  else
  {
    gameswf::s_render_handler[16] = a2;
    gameswf::Root::display(nullptr);
    result = (uint32_t *)(gameswf::s_render_handler);
    gameswf::s_render_handler[16] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::setContext  (binary VA: 0x11199d0)
// Original: gameswf::RenderFX::setContext
// ----------------------------------------------------------------------------
void gameswf::RenderFX::setContext(int a1, int a2)
{
  int v2;
  int v3;
  char v4;
  int v5;
  gameswf::Self *v6;
  char *v7;
  gameswf::Self *v8;
  int v9;
  unsigned int v10;
  char v11;
  int v12;
  int v13;
  int v14;
  int v15;
  typedef int _g4_t_v16;
  typedef gameswf::Self *_g4_t_v17;
  typedef uint16_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef char *_g4_t_v22;
  typedef gameswf::Self *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef char _g4_t_v25;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v17)) > _g4_s1 ? (16u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v18)) > _g4_s2 ? (20u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v19)) > _g4_s3 ? (24u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v20)) > _g4_s4 ? (28u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (29u + sizeof(_g4_t_v21)) > _g4_s5 ? (29u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v22)) > _g4_s6 ? (32u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v23)) > _g4_s7 ? (40u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v24)) > _g4_s8 ? (44u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v25)) > _g4_s9 ? (48u + sizeof(_g4_t_v25)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 29u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);

  v2 = a2;
  v17 = *(gameswf::Self **)a2;
  v18 = *(uint16_t **)(a2 + 4);
  if ( v18 != nullptr )
    ++*v18;
  v3 = *(uint32_t *)(a2 + 8);
  v20 = 1;
  v19 = v3;
  v21 = 0;
  v4 = *(uint8_t *)(a2 + 12);
  if ( v4 == -1 )
    v5 = *(uint32_t *)(a2 + 16) - 1;
  else
    v5 = v4 - 1;
  gameswf::String::resize((gameswf::String::Self *)&v20, v5);
  v6 = (gameswf::Self *)(a2 + 13);
  if ( *(uint8_t *)(a2 + 12) == 0xFF )
    v6 = *(gameswf::Self **)(a2 + 24);
  if ( v20 == -1 )
  {
    v7 = v22;
    v8 = v23;
  }
  else
  {
    v7 = (char *)v20;
    v8 = (gameswf::Self *)&v21;
  }
  gameswf::Strcpy_s(v8, v7, v6);
  v16 = *(uint32_t *)(a2 + 28);
  if ( (uint8_t *)(v16 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    v11 = *(uint8_t *)(a2 + 12);
    if ( v11 == -1 )
    {
      v12 = *(uint32_t *)(a2 + 24);
      v13 = *(uint32_t *)(a2 + 16) - 1;
    }
    else
    {
      v12 = a2 + 13;
      v13 = v11 - 1;
    }
    v9 = 5381;
    if ( v13 > 0 )
    {
      do
      {
        --v13;
        v14 = 33 * v9;
        v15 = *(uint8_t *)(v12 + v13) + 32;
        if ( (uint8_t)(*(uint8_t *)(v12 + v13) - 65) > 0x19u )
          v15 = *(uint8_t *)(v12 + v13);
        v9 = v14 ^ v15;
      }
      while ( v13 != 0 );
      v2 = a2;
      v9 = v9 << 9 >> 9;
    }
    *(uint32_t *)(v2 + 28) = v9 & 0x7FFFFF | v16 & 0xFF800000;
  }
  else
  {
    v9 = v16 << 9 >> 9;
  }
  v10 = v9 & 0x7FFFFF | v24 & 0xFF800000;
  LOWORD(v24) = v9;
  BYTE2(v24) = BYTE2(v10) & 0x7F;
  HIBYTE(v24) = HIBYTE(v10) | 1;
  v25 = *(uint8_t *)(v2 + 32);
  gameswf::CharacterHandle::opAssign((gameswf::CharacterHandle::Self *)(a1 + 44), &v17);
  gameswf::CharacterHandle::Destroy(&v17);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::unload  (binary VA: 0x1119ba0)
// Original: gameswf::RenderFX::unload
// ----------------------------------------------------------------------------
void gameswf::RenderFX::unload(gameswf::RefCounted::Self **self)
{
  int v1;
  int v2;
  uint32_t *v3;
  int v4;
  gameswf::Self *v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  gameswf::Self *v10;
  gameswf::Self *v11[12];

  if ( gameswf::s_render_handler != nullptr )
    (*(void (**)(uint32_t *))(*gameswf::s_render_handler + 152))((uint32_t *)(gameswf::s_render_handler));
  if ( *(self + 29) != nullptr )
  {
    gameswf::RefCounted::dropRef(*(self + 29));
    *(self + 29) = nullptr;
  }
  if ( *(self + 30) != nullptr )
  {
    gameswf::RefCounted::dropRef(*(self + 30));
    *(self + 30) = nullptr;
  }
  if ( *(self + 32) != nullptr )
  {
    gameswf::RefCounted::dropRef(*(self + 32));
    *(self + 32) = nullptr;
  }
  if ( *(self + 33) != nullptr )
  {
    gameswf::RefCounted::dropRef(*(self + 33));
    *(self + 33) = nullptr;
  }
  if ( *(self + 38) != nullptr )
  {
    gameswf::RefCounted::dropRef(*(self + 38));
    *(self + 38) = nullptr;
  }
  if ( *(self + 39) != nullptr )
  {
    gameswf::RefCounted::dropRef(*(self + 39));
    *(self + 39) = nullptr;
  }
  if ( *(self + 41) != nullptr )
  {
    gameswf::RefCounted::dropRef(*(self + 41));
    *(self + 41) = nullptr;
  }
  if ( *(self + 42) != nullptr )
  {
    gameswf::RefCounted::dropRef(*(self + 42));
    *(self + 42) = nullptr;
  }
  if ( *(self + 47) != nullptr )
  {
    gameswf::RefCounted::dropRef(*(self + 47));
    *(self + 47) = nullptr;
  }
  if ( *(self + 48) != nullptr )
  {
    gameswf::RefCounted::dropRef(*(self + 48));
    *(self + 48) = nullptr;
  }
  if ( *(self + 50) != nullptr )
  {
    gameswf::RefCounted::dropRef(*(self + 50));
    *(self + 50) = nullptr;
  }
  if ( *(self + 51) != nullptr )
  {
    gameswf::RefCounted::dropRef(*(self + 51));
    *(self + 51) = nullptr;
  }
  if ( *(self + 56) != nullptr )
  {
    gameswf::RefCounted::dropRef(*(self + 56));
    *(self + 56) = nullptr;
  }
  if ( *(self + 57) != nullptr )
  {
    gameswf::RefCounted::dropRef(*(self + 57));
    *(self + 57) = nullptr;
  }
  if ( *(self + 59) != nullptr )
  {
    gameswf::RefCounted::dropRef(*(self + 59));
    *(self + 59) = nullptr;
  }
  if ( *(self + 60) != nullptr )
  {
    gameswf::RefCounted::dropRef(*(self + 60));
    *(self + 60) = nullptr;
  }
  if ( *(self + 10) != nullptr )
  {
    gameswf::RefCounted::dropRef(*(self + 10));
    *(self + 10) = nullptr;
  }
  if ( *(self + 9) != nullptr )
  {
    gameswf::RefCounted::dropRef(*(self + 9));
    *(self + 9) = nullptr;
  }
  gameswf::String::resize((gameswf::String::Self *)(self + 20), 0);
  v1 = (int)(uintptr_t)(*(self + 6));
  *(self + 24) = (gameswf::RefCounted::Self *)((unsigned int)(uintptr_t)(*(self + 24)) | 0x7FFFFF);
  if ( v1 < 0 )
  {
    v2 = 8 * v1;
    do
    {
      v3 = (uint32_t *)((char *)*(self + 5) + v2);
      if ( v3 != nullptr )
      {
        *v3 = 0;
        v3[1] = 0;
      }
      v2 += 8;
      ++v1;
    }
    while ( v1 != 0 );
  }
  v4 = (int)(uintptr_t)(*(self + 8));
  *(self + 6) = nullptr;
  if ( v4 == 0 )
  {
    v5 = (gameswf::Self *)(*(self + 5));
    *(self + 7) = nullptr;
    if ( v5 != nullptr )
      gameswf::free_internal(v5);
    *(self + 5) = nullptr;
  }
  v6 = (int)(uintptr_t)(*(self + 2));
  if ( v6 < 0 )
  {
    v7 = 4 * v6;
    do
    {
      v8 = (uint32_t *)((char *)*(self + 1) + v7);
      if ( v8 != nullptr )
        *v8 = 0;
      v7 += 4;
      ++v6;
    }
    while ( v6 != 0 );
  }
  v9 = (int)(uintptr_t)(*(self + 4));
  *(self + 2) = nullptr;
  if ( v9 == 0 )
  {
    v10 = (gameswf::Self *)(*(self + 1));
    *(self + 3) = nullptr;
    if ( v10 != nullptr )
      gameswf::free_internal(v10);
    *(self + 1) = nullptr;
  }
  gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v11, nullptr);
  gameswf::RenderFX::setContext((int)(uintptr_t)(self), (int)(uintptr_t)(v11));
  gameswf::CharacterHandle::Destroy(v11);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::Destroy  (binary VA: 0x1119ec0)
// Original: gameswf::RenderFX::~RenderFX
// ----------------------------------------------------------------------------
void gameswf::RenderFX::Destroy(gameswf::RenderFX::Self *self)
{
  glf::App::Self *Instance;
  char *v2;
  glf::EventManager::Self *EventMgr;
  gameswf::RenderFX::Self *v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  gameswf::Self *v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  gameswf::Self *v15;
  gameswf::RenderFX::Self *v16;
  char *v17;
  char *v18;
  char *v19;
  char *v20;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FB08);
  *((uint32_t *)self + 84) = (uint32_t)(uintptr_t)(self);
  Instance = (glf::App::Self *)glf::App::GetInstance();
  v2 = (char *)self + 232;
  EventMgr = (glf::EventManager::Self *)glf::App::GetEventMgr(Instance);
  glf::EventManager::RemoveEventReceiver(EventMgr, (gameswf::RenderFX::Self *)((char *)self + 328));
  gameswf::RenderFX::unload((gameswf::RefCounted::Self **)self);
  v16 = (gameswf::RenderFX::Self *)((char *)self + 248);
  *((uint32_t *)self + 82) = ((uint32_t)(uintptr_t)&off_206D428);
  v4 = (gameswf::RenderFX::Self *)((char *)self + 248);
  *((uint32_t *)self + 80) = (uint32_t)(uintptr_t)(&off_205A508);
  v19 = (char *)self + 236;
  v17 = (char *)self + 224;
  v20 = (char *)self + 240;
  v18 = (char *)self + 228;
  do
  {
    v5 = v4 - v16;
    if ( *(uint32_t *)&v20[v4 - v16] != 0 )
      gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)&v20[v4 - v16]);
    if ( *(uint32_t *)&v19[v5] != 0 )
      gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)&v19[v5]);
    if ( *(uint32_t *)&v2[v5] != 0 )
      gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)&v2[v5]);
    if ( *(uint32_t *)&v18[v5] != 0 )
      gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)&v18[v5]);
    if ( *(uint32_t *)&v17[v5] != 0 )
      gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)&v17[v5]);
    v4 = (gameswf::RenderFX::Self *)((char *)v4 - 36);
  }
  while ( (gameswf::RenderFX::Self *)((char *)self + 104) != v4 );
  if ( *((uint8_t *)self + 80) == 0xFF && (*((uint8_t *)self + 99) & 1) != 0 )
    gameswf::free_internal(*((gameswf::Self **)self + 23));
  gameswf::CharacterHandle::Destroy((gameswf::Self **)self + 11);
  if ( *((uint32_t *)self + 10) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 10));
  if ( *((uint32_t *)self + 9) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 9));
  v6 = *((uint32_t *)self + 6);
  if ( v6 < 0 )
  {
    v7 = 8 * v6;
    do
    {
      v8 = (uint32_t *)(*((uint32_t *)self + 5) + v7);
      if ( v8 != nullptr )
      {
        *v8 = 0;
        v8[1] = 0;
      }
      v7 += 8;
      ++v6;
    }
    while ( v6 != 0 );
  }
  v9 = *((uint32_t *)self + 8);
  *((uint32_t *)self + 6) = 0;
  if ( v9 == 0 )
  {
    v10 = *((gameswf::Self **)self + 5);
    *((uint32_t *)self + 7) = 0;
    if ( v10 != nullptr )
      gameswf::free_internal(v10);
    *((uint32_t *)self + 5) = 0;
  }
  v11 = *((uint32_t *)self + 2);
  if ( v11 < 0 )
  {
    v12 = 4 * v11;
    do
    {
      v13 = (uint32_t *)(*((uint32_t *)self + 1) + v12);
      if ( v13 != nullptr )
        *v13 = 0;
      v12 += 4;
      ++v11;
    }
    while ( v11 != 0 );
  }
  v14 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 2) = 0;
  if ( v14 == 0 )
  {
    v15 = *((gameswf::Self **)self + 1);
    *((uint32_t *)self + 3) = 0;
    if ( v15 != nullptr )
      gameswf::free_internal(v15);
    *((uint32_t *)self + 1) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::Destroy_ea111a120  (binary VA: 0x111a120)
// Original: gameswf::RenderFX::~RenderFX
// ----------------------------------------------------------------------------
void gameswf::RenderFX::Destroy_ea111a120(gameswf::RenderFX::Self *self)
{
  gameswf::RenderFX::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::load  (binary VA: 0x111a160)
// Original: gameswf::RenderFX::load
// ----------------------------------------------------------------------------
void gameswf::RenderFX::load(gameswf::RenderFX::Self *self, char *a2, gameswf::PlayerContext::Self *a3)
{
  gameswf::RenderFX::Self *v3;
  char *v4;
  size_t v5;
  char *v6;
  gameswf::Self *v7;
  int v8;
  gameswf::RefCounted::Self *v9;
  size_t v10;
  char *v11;
  int v12;
  uint8_t *v13;
  uint8_t *v14;
  gameswf::Self *v15;
  gameswf::RefCounted::Self *v16;
  gameswf::RefCounted::Self *v17;
  gameswf::Character::Self *Stage;
  typedef gameswf::RefCounted::Self **_g4_t_n;
  typedef size_t _g4_t_na;
  typedef int _g4_t_v21;
  typedef gameswf::PlayerContext::Self *_g4_t_DefaultContext;
  typedef gameswf::RefCounted::Self *_g4_t_v23;
  typedef char _g4_t_v24;
  typedef uint8_t _g4_t_v25[7];
  typedef void *_g4_t_dest;
  typedef int16_t _g4_t_v27;
  typedef char _g4_t_v28;
  typedef char _g4_t_v29;
  typedef gameswf::Self *_g4_t_v30[15];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_n)) > _g4_s0 ? (0u + sizeof(_g4_t_n)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_na)) > _g4_s1 ? (0u + sizeof(_g4_t_na)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v21)) > _g4_s2 ? (4u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_DefaultContext)) > _g4_s3 ? (8u + sizeof(_g4_t_DefaultContext)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v23)) > _g4_s4 ? (16u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v24)) > _g4_s5 ? (32u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (33u + sizeof(_g4_t_v25)) > _g4_s6 ? (33u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_dest)) > _g4_s7 ? (44u + sizeof(_g4_t_dest)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v27)) > _g4_s8 ? (48u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (50u + sizeof(_g4_t_v28)) > _g4_s9 ? (50u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (51u + sizeof(_g4_t_v29)) > _g4_s10 ? (51u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v30)) > _g4_s11 ? (60u + sizeof(_g4_t_v30)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 0u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_DefaultContext &DefaultContext = *reinterpret_cast<_g4_t_DefaultContext *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 33u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 50u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 51u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);

  v30[11] = (gameswf::Self *)&self;
  v3 = self;
  v4 = a2;
  DefaultContext = a3;
  if ( a3 == nullptr )
    DefaultContext = (gameswf::PlayerContext::Self *)gameswf::getDefaultContext();
  if ( v4 != nullptr )
  {
    v5 = strlen(v4);
    gameswf::String::resize((gameswf::RenderFX::Self *)((char *)v3 + 80), v5);
    LOBYTE(v6) = *((uint8_t *)v3 + 80);
    if ( (uint8_t)(uintptr_t)(v6) == 0xFF )
    {
      v6 = *((char **)v3 + 21);
      v7 = *((gameswf::Self **)v3 + 23);
    }
    else
    {
      v6 = (char *)(char)(uintptr_t)(v6);
      v7 = (gameswf::Self *)((gameswf::RenderFX::Self *)((char *)v3 + 81));
    }
    gameswf::Strcpy_s(v7, v6, (gameswf::Self *)v4);
    *((uint32_t *)v3 + 24) |= 0x7FFFFFu;
  }
  n = (gameswf::RefCounted::Self **)opNew(0x13Cu);
  gameswf::Player::Construct(n, DefaultContext);
  v8 = *((uint32_t *)v3 + 9);
  v9 = (gameswf::RefCounted::Self *)n;
  if ( n != (gameswf::RefCounted::Self **)v8 )
  {
    if ( v8 != 0 )
    {
      gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v3 + 9));
      v9 = (gameswf::RefCounted::Self *)n;
    }
    v8 = 0;
    *((uint32_t *)v3 + 9) = (uint32_t)(uintptr_t)(v9);
    if ( v9 != nullptr )
    {
      gameswf::RefCounted::addRef(v9);
      v8 = *((uint32_t *)v3 + 9);
    }
  }
  *(uint32_t *)(v8 + 208) = (uint32_t)(uintptr_t)(v3);
  v10 = strlen(v4);
  v11 = &v4[v10];
  if ( !__CFADD__(v10, v4) )
  {
    do
    {
      if ( *v11 == 47 )
        break;
      if ( *v11 == 92 )
        break;
      --v11;
    }
    while ( v4 <= v11 );
  }
  v12 = v11 - v4;
  if ( v12 + 1 > 0 )
  {
    v24 = 1;
    v25[0] = 0;
    if ( v4 != nullptr )
    {
      v21 = v12;
      na = v12 + 1;
      gameswf::String::resize((gameswf::String::Self *)&v24, v12 + 1);
      v13 = v25;
      if ( v24 == -1 )
        v13 = (uint8_t *)(dest);
      memcpy(v13, v4, na);
      v14 = v25;
      if ( v24 == -1 )
        v14 = (uint8_t *)(dest);
      v14[v21 + 1] = 0;
      v27 = -1;
      v28 = 127;
      v29 |= 1u;
      v15 = (gameswf::Self *)v25;
      if ( v24 == -1 )
        v15 = (gameswf::Self *)dest;
    }
    else
    {
      v27 = -1;
      v28 = 127;
      v29 |= 1u;
      v15 = (gameswf::Self *)v25;
    }
    gameswf::Player::setWorkdir(*((gameswf::Player::Self **)v3 + 9), v15);
    if ( v24 == -1 && (v29 & 1) != 0 )
      gameswf::free_internal((gameswf::Self *)dest);
  }
  gameswf::Player::loadFile((gameswf::Player::Self *)&v23, *((gameswf::Player::Self **)v3 + 9), (gameswf::Self *)v4);
  v16 = v23;
  v17 = *((gameswf::RefCounted::Self **)v3 + 10);
  if ( v23 != v17 )
  {
    if ( v17 != nullptr )
      gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v3 + 10));
    *((uint32_t *)v3 + 10) = (uint32_t)(uintptr_t)(v16);
    if ( v16 != nullptr )
      gameswf::RefCounted::addRef(v16);
    v16 = v23;
  }
  if ( v16 != nullptr )
    gameswf::RefCounted::dropRef(v16);
  Stage = (gameswf::Character::Self *)gameswf::Root::getStage(*((gameswf::Root::Self **)v3 + 10));
  gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v30, Stage);
  gameswf::RenderFX::setContext((int)(uintptr_t)(v3), (int)(uintptr_t)(v30));
  gameswf::CharacterHandle::Destroy(v30);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::getContext  (binary VA: 0x111a3f0)
// Original: gameswf::RenderFX::getContext
// ----------------------------------------------------------------------------
gameswf::RenderFX::Self * gameswf::RenderFX::getContext(gameswf::RenderFX::Self *self, int a2)
{
  int v2;
  uint16_t *v3;
  int v4;
  char v5;
  int v6;
  gameswf::Self *v7;
  char *v8;
  gameswf::Self *v9;
  int v10;
  unsigned int v11;
  char v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v2 = a2;
  *(uint32_t *)self = *(uint32_t *)(a2 + 44);
  v3 = *(uint16_t **)(a2 + 48);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v3);
  if ( v3 != nullptr )
    ++*v3;
  v4 = *(uint32_t *)(a2 + 52);
  *((uint8_t *)self + 12) = 1;
  *((uint32_t *)self + 2) = v4;
  *((uint8_t *)self + 13) = 0;
  v5 = *(uint8_t *)(a2 + 56);
  if ( v5 == -1 )
    v6 = *(uint32_t *)(a2 + 60) - 1;
  else
    v6 = v5 - 1;
  gameswf::String::resize((gameswf::RenderFX::Self *)((char *)self + 12), v6);
  v7 = (gameswf::Self *)(a2 + 57);
  if ( *(uint8_t *)(a2 + 56) == 0xFF )
    v7 = *(gameswf::Self **)(a2 + 68);
  LOBYTE(v8) = *((uint8_t *)self + 12);
  if ( (uint8_t)(uintptr_t)(v8) == 0xFF )
  {
    v8 = *((char **)self + 4);
    v9 = *((gameswf::Self **)self + 6);
  }
  else
  {
    v8 = (char *)(char)(uintptr_t)(v8);
    v9 = (gameswf::Self *)((gameswf::RenderFX::Self *)((char *)self + 13));
  }
  gameswf::Strcpy_s(v9, v8, v7);
  v18 = *(uint32_t *)(a2 + 72);
  if ( (uint8_t *)(v18 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    v13 = *(uint8_t *)(a2 + 56);
    if ( v13 == -1 )
    {
      v14 = *(uint32_t *)(a2 + 68);
      v15 = *(uint32_t *)(a2 + 60) - 1;
    }
    else
    {
      v14 = a2 + 57;
      v15 = v13 - 1;
    }
    v10 = 5381;
    if ( v15 > 0 )
    {
      do
      {
        --v15;
        v16 = 33 * v10;
        v17 = *(uint8_t *)(v14 + v15) + 32;
        if ( (uint8_t)(*(uint8_t *)(v14 + v15) - 65) > 0x19u )
          v17 = *(uint8_t *)(v14 + v15);
        v10 = v16 ^ v17;
      }
      while ( v15 != 0 );
      v2 = a2;
      v10 = v10 << 9 >> 9;
    }
    *(uint32_t *)(v2 + 72) = v10 & 0x7FFFFF | v18 & 0xFF800000;
  }
  else
  {
    v10 = v18 << 9 >> 9;
  }
  v11 = v10 & 0x7FFFFF | *((uint32_t *)self + 7) & 0xFF800000;
  *((uint32_t *)self + 7) = v11;
  *((uint8_t *)self + 30) = BYTE2(v11) & 0x7F;
  *((uint8_t *)self + 31) = HIBYTE(v11) | 1;
  *((uint8_t *)self + 32) = *(uint8_t *)(v2 + 76);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::collectCharacters  (binary VA: 0x111a5a0)
// Original: gameswf::RenderFX::collectCharacters
// ----------------------------------------------------------------------------
char gameswf::RenderFX::collectCharacters(int a1, int a2, gameswf::Character::Self *a3, char *needle, int a5)
{
  gameswf::Character::Self *v5;
  int v6;
  char v7;
  char v8;
  int v9;
  const char *s1;
  int v11;
  const char *v12;
  int v13;
  int v14;
  gameswf::Self *v15;
  char *v16;
  bool v17;
  gameswf::Self *v18;
  gameswf::Character::Self *v20;
  int v21;
  int v22;
  char *v23;

  v5 = nullptr;
  LOBYTE(v6) = 1;
  if ( a3 != nullptr )
  {
    v7 = G4_VCALL<int>(a3, 8, 2);
    v5 = nullptr;
    if ( v7 != 0 )
      v5 = a3;
    v6 = v7 == 0;
  }
  v8 = 1;
  if ( (a5 & 1) != 0 )
    v8 = *((uint8_t *)a3 + 148);
  if ( (uint8_t)v6 != 0 )
  {
    LOBYTE(v6) = 0;
    if ( (a5 & 8) != 0 )
      v8 = 0;
  }
  if ( (v5 == nullptr || (a5 & 2) == 0 || *((uint8_t *)v5 + 270) != 0) && v8 != 0 )
  {
    if ( needle != nullptr )
    {
      v9 = *((uint32_t *)a3 + 15);
      if ( (a5 & 0x40) != 0 )
      {
        if ( *(uint8_t *)v9 == 0xFF )
          s1 = *(const char **)(v9 + 12);
        else
          s1 = (const char *)(v9 + 1);
        LOBYTE(v6) = strcmp(s1, needle) == 0;
        if ( (uint8_t)v6 == 0 )
        {
LABEL_18:
          if ( a3 != nullptr )
          {
            LOBYTE(v6) = G4_VCALL<int>(a3, 8, 4);
            if ( (uint8_t)v6 != 0 )
            {
              v6 = *((uint32_t *)a3 + 54);
              if ( v6 > 0 )
              {
                v11 = 0;
                do
                {
                  v20 = *(gameswf::Character::Self **)(*((uint32_t *)a3 + 53) + 4 * v11++);
                  LOBYTE(v6) = gameswf::RenderFX::collectCharacters(a1, a2, v20, needle, a5);
                }
                while ( v11 < *((uint32_t *)a3 + 54) );
              }
            }
          }
          return v6;
        }
      }
      else
      {
        if ( *(uint8_t *)v9 == 0xFF )
          v12 = *(const char **)(v9 + 12);
        else
          v12 = (const char *)(v9 + 1);
        LOBYTE(v6) = strstr(v12, needle) != nullptr;
        if ( (uint8_t)v6 == 0 )
          goto LABEL_18;
      }
    }
    if ( (a5 & 4) == 0
      || (*(uint8_t *)(v6 = *((uint32_t *)a3 + 15)) == 0xFF ? (v13 = *(uint32_t *)(v6 + 4) - 1) : (v13 = *(char *)v6 - 1),
          v13 != 0) )
    {
      v14 = *(uint32_t *)(a2 + 4);
      v21 = *(uint32_t *)(a2 + 8);
      v22 = v14 + 1;
      if ( v14 + 1 > v21 )
      {
        if ( *(uint32_t *)(a2 + 12) != 0 )
        {
          v15 = *(gameswf::Self **)a2;
        }
        else
        {
          v16 = (char *)(v22 + (v22 >> 1));
          v17 = v16 == nullptr;
          v23 = v16;
          *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v16);
          v18 = *(gameswf::Self **)a2;
          if ( v17 )
          {
            if ( v18 != nullptr )
            {
              gameswf::free_internal(v18);
              v14 = *(uint32_t *)(a2 + 4);
            }
            v15 = nullptr;
            *(uint32_t *)a2 = 0;
          }
          else
          {
            if ( v18 != nullptr )
              v15 = (gameswf::Self *)gameswf::realloc_internal(*(gameswf::Self **)a2, 36 * (uint32_t)(uintptr_t)(v23), 36 * v21);
            else
              v15 = (gameswf::Self *)gameswf::malloc_internal(36 * (uint32_t)(uintptr_t)(v23));
            *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v15);
            v14 = *(uint32_t *)(a2 + 4);
          }
        }
      }
      else
      {
        v15 = *(gameswf::Self **)a2;
      }
      v6 = (int)(uintptr_t)(v15) + 36 * v14;
      if ( v6 != 0 )
        LOBYTE(v6) = (uint8_t)(uintptr_t)gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v6, a3);
      *(uint32_t *)(a2 + 4) = v22;
    }
    goto LABEL_18;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::findCharacters  (binary VA: 0x111a880)
// Original: gameswf::RenderFX::findCharacters
// ----------------------------------------------------------------------------
int gameswf::RenderFX::findCharacters(int a1, uint32_t *a2, gameswf::CharacterHandle::Self *a3, char *needle, int a5)
{
  int v5;
  int v6;
  int v7;
  gameswf::Character::Self *Character;
  int v10;
  gameswf::CharacterHandle::Self *v11;
  int v12;
  int v13;
  int v14;

  v5 = a2[1];
  if ( v5 <= 0 )
  {
    if ( v5 < 0 )
    {
      v10 = 36 * v5;
      do
      {
        v11 = (gameswf::CharacterHandle::Self *)(*a2 + v10);
        if ( v11 != nullptr )
        {
          v13 = v10;
          gameswf::CharacterHandle::Construct(v11, nullptr);
          v10 = v13;
        }
        v10 += 36;
        ++v5;
      }
      while ( v5 != 0 );
    }
  }
  else
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v12 = v7;
      v14 = v6;
      gameswf::CharacterHandle::Destroy((gameswf::Self **)(v6 + *a2));
      v7 = v12 + 1;
      v6 = v14 + 36;
    }
    while ( v12 + 1 != v5 );
  }
  a2[1] = 0;
  if ( gameswf::CharacterHandle::getCharacter(a3) != 0 )
  {
    Character = (gameswf::Character::Self *)gameswf::CharacterHandle::getCharacter(a3);
    gameswf::RenderFX::collectCharacters(a1, (int)(uintptr_t)(a2), Character, needle, a5);
  }
  return a2[1];
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::preloadGlyphs  (binary VA: 0x111a960)
// Original: gameswf::RenderFX::preloadGlyphs
// ----------------------------------------------------------------------------
int gameswf::RenderFX::preloadGlyphs(int a1, gameswf::CharacterHandle::Self *a2)
{
  gameswf::CharacterHandle::Self *v2;
  unsigned int v3;
  uint16_t *v4;
  unsigned int v5;
  char v6;
  int v7;
  gameswf::Self *v8;
  char *v9;
  gameswf::Self *v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int i;
  char v19;
  char *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef gameswf::CharacterHandle::Self *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef gameswf::Self *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef unsigned int _g4_t_v37[3];
  typedef char _g4_t_v38;
  typedef char _g4_t_v39;
  typedef char *_g4_t_v40;
  typedef gameswf::Self *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef char _g4_t_v43;
  typedef gameswf::Self *_g4_t_v44[15];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v26)) > _g4_s0 ? (4u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v27)) > _g4_s1 ? (4u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v28)) > _g4_s2 ? (4u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v29)) > _g4_s3 ? (8u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v30)) > _g4_s4 ? (12u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v31)) > _g4_s5 ? (16u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v32)) > _g4_s6 ? (20u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v33)) > _g4_s7 ? (24u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v34)) > _g4_s8 ? (28u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v35)) > _g4_s9 ? (32u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v36)) > _g4_s10 ? (36u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v37)) > _g4_s11 ? (40u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v38)) > _g4_s12 ? (52u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (53u + sizeof(_g4_t_v39)) > _g4_s13 ? (53u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v40)) > _g4_s14 ? (56u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v41)) > _g4_s15 ? (64u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v42)) > _g4_s16 ? (68u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v43)) > _g4_s17 ? (72u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v44)) > _g4_s18 ? (84u + sizeof(_g4_t_v44)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 53u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 68u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 72u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 84u);

  v44[11] = (gameswf::Self *)&a1;
  v2 = a2;
  v30 = a1;
  if ( gameswf::CharacterHandle::opEq(a2, (gameswf::Character::Self *)nullptr) )
  {
    gameswf::RenderFX::getRootHandle((gameswf::RenderFX::Self *)v44, v30);
    gameswf::CharacterHandle::opAssign(v2, v44);
    gameswf::CharacterHandle::Destroy(v44);
  }
  v3 = *(uint32_t *)v2;
  v33 = nullptr;
  v37[0] = v3;
  v4 = *((uint16_t **)v2 + 1);
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37[1] = (unsigned int)(uintptr_t)(v4);
  if ( v4 != nullptr )
    ++*v4;
  v5 = *((uint32_t *)v2 + 2);
  v38 = 1;
  v37[2] = v5;
  v39 = 0;
  v6 = *((uint8_t *)v2 + 12);
  if ( v6 == -1 )
    v7 = *((uint32_t *)v2 + 4) - 1;
  else
    v7 = v6 - 1;
  gameswf::String::resize((gameswf::String::Self *)&v38, v7);
  v8 = (gameswf::Self *)((gameswf::CharacterHandle::Self *)((char *)v2 + 13));
  if ( *((uint8_t *)v2 + 12) == 0xFF )
    v8 = *((gameswf::Self **)v2 + 6);
  if ( v38 == -1 )
  {
    v9 = v40;
    v10 = v41;
  }
  else
  {
    v9 = (char *)v38;
    v10 = (gameswf::Self *)&v39;
  }
  gameswf::Strcpy_s(v10, v9, v8);
  v31 = *((uint32_t *)v2 + 7);
  if ( (uint8_t *)(v31 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    v19 = *((uint8_t *)v2 + 12);
    if ( v19 == -1 )
    {
      v20 = *((char **)v2 + 6);
      v21 = *((uint32_t *)v2 + 4) - 1;
    }
    else
    {
      v20 = (char *)v2 + 13;
      v21 = v19 - 1;
    }
    v11 = 5381;
    if ( v21 > 0 )
    {
      v29 = v2;
      do
      {
        --v21;
        v22 = 33 * v11;
        v23 = (uint8_t)v20[v21] + 32;
        if ( (uint8_t)(v20[v21] - 65) > 0x19u )
          v23 = (uint8_t)v20[v21];
        v11 = v22 ^ v23;
      }
      while ( v21 != 0 );
      v2 = v29;
      v11 = v11 << 9 >> 9;
    }
    *((uint32_t *)v2 + 7) = v11 & 0x7FFFFF | v31 & 0xFF800000;
  }
  else
  {
    v11 = v31 << 9 >> 9;
  }
  v12 = v11 & 0x7FFFFF | v42 & 0xFF800000;
  LOWORD(v42) = v11;
  BYTE2(v42) = BYTE2(v12) & 0x7F;
  HIBYTE(v42) = HIBYTE(v12) | 1;
  v43 = *((uint8_t *)v2 + 32);
  gameswf::RenderFX::findCharacters(v30, &v33, (gameswf::CharacterHandle::Self *)v37, nullptr, 16);
  gameswf::CharacterHandle::Destroy((gameswf::Self **)v37);
  v13 = v34;
  if ( v34 <= 0 )
    goto LABEL_35;
  v14 = 0;
  v15 = 0;
  do
  {
    ++v15;
    v26 = v14;
    gameswf::CharacterHandle::preloadGlyphs((gameswf::Self *)((char *)v33 + v14));
    v14 = v26 + 36;
  }
  while ( v34 > v15 );
  v13 = v34;
  if ( v34 <= 0 )
  {
LABEL_35:
    if ( v13 < 0 )
    {
      v24 = v13;
      v25 = 36 * v13;
      do
      {
        if ( (gameswf::Self *)((char *)v33 + v25) != nullptr )
        {
          v28 = v24;
          gameswf::CharacterHandle::Construct((gameswf::Self *)((char *)v33 + v25), nullptr);
          v24 = v28;
        }
        v25 += 36;
        ++v24;
      }
      while ( v24 != 0 );
    }
  }
  else
  {
    v32 = v34;
    v16 = 0;
    for ( i = 0; i != v32; ++i )
    {
      v27 = v16;
      gameswf::CharacterHandle::Destroy((gameswf::Self **)((char *)v33 + v16));
      v16 = v27 + 36;
    }
  }
  v34 = 0;
  if ( v36 == 0 )
  {
    v35 = 0;
    if ( v33 != nullptr )
      gameswf::free_internal(v33);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::depthSearch  (binary VA: 0x111aca0)
// Original: gameswf::RenderFX::depthSearch
// ----------------------------------------------------------------------------
int gameswf::RenderFX::depthSearch(gameswf::RenderFX::Self *self, int a2)
{
  size_t v2;
  gameswf::Self *v3;
  int v4;
  signed int v5;
  int v6;
  size_t *v7;
  uint32_t *v8;
  const char *s;
  int v10;
  char *v11;
  int v12;
  char v13;
  int v14;
  int v15;
  int v16;
  char *v17;
  char *v18;
  int v19;
  int v20;
  gameswf::Self *v21;
  const char *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  size_t v35;
  size_t n;
  const char *v37;
  char *v38;
  int v39;
  int v40;
  const char *v41;
  signed int v42;
  int v43;

  v43 = 4 * a2;
  v2 = *((uint32_t *)self + 6);
  v3 = *((gameswf::Self **)self + 1);
  v4 = *((uint32_t *)self + 2);
  v35 = v2;
  do
  {
    ++a2;
    v42 = v2;
    v5 = *(uint32_t *)((char *)v3 + v43);
    if ( a2 < v4 )
      v42 = *(uint32_t *)((char *)v3 + v43 + 4);
    v6 = v4 + 1;
    v33 = *((uint32_t *)self + 3);
    if ( v4 + 1 > v33 && *((uint32_t *)self + 4) == 0 )
    {
      v25 = v6 + (v6 >> 1);
      *((uint32_t *)self + 3) = v25;
      if ( v25 != 0 )
      {
        v32 = v5;
        if ( v3 != nullptr )
          v3 = (gameswf::Self *)gameswf::realloc_internal(v3, 4 * v25, 4 * v33);
        else
          v3 = (gameswf::Self *)gameswf::malloc_internal(4 * v25);
        *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v3);
        v4 = *((uint32_t *)self + 2);
        v5 = v32;
      }
      else
      {
        if ( v3 != nullptr )
        {
          v31 = v5;
          gameswf::free_internal(v3);
          v4 = *((uint32_t *)self + 2);
          v5 = v31;
        }
        *((uint32_t *)self + 1) = 0;
        v3 = nullptr;
      }
    }
    v7 = (size_t *)((char *)v3 + 4 * v4);
    if ( v7 != nullptr )
      *v7 = v35;
    *((uint32_t *)self + 2) = v6;
    if ( v42 <= v5 )
    {
      v4 = v6;
    }
    else
    {
      v8 = (uint32_t *)(*((uint32_t *)self + 5) + 8 * v5);
      s = (const char *)v8[1];
      if ( s == nullptr )
        return 0;
      v39 = v5;
      v40 = 8 * v5 + 8;
      v38 = nullptr;
      v41 = nullptr;
      while ( 1 )
      {
        if ( s != v41 )
        {
          v38 = (char *)(strchr(s, 46));
          v41 = s;
          if ( v38 == nullptr )
          {
            v41 = s;
            v38 = (char *)&s[strlen(s)];
          }
        }
        v10 = *v8;
        n = v38 - s;
        v11 = *(char **)(*v8 + 60);
        v12 = *v11 - 1;
        if ( *v11 == -1 )
          v12 = *((uint32_t *)v11 + 1) - 1;
        v37 = s;
        if ( n == v12 )
        {
          v23 = *v11 == -1 ? *((const char **)v11 + 3) : v11 + 1;
          v30 = v10;
          v24 = strncmp(v23, s, n);
          v37 = s;
          v10 = v30;
          if ( v24 == 0 )
          {
            if ( *v38 == 0 )
              return v10;
            v37 = v38 + 1;
          }
        }
        v27 = v10;
        v13 = G4_VCALL<int>(v10, 8, 4);
        v14 = v27;
        if ( v13 != 0 && *(int *)(v27 + 216) > 0 )
        {
          v15 = *((uint32_t *)self + 6);
          v16 = 0;
          while ( 1 )
          {
            v19 = v15 + 1;
            v34 = *(uint32_t *)(*(uint32_t *)(v14 + 212) + 4 * v16);
            v26 = *((uint32_t *)self + 7);
            if ( v15 + 1 <= v26 || *((uint32_t *)self + 8) != 0 )
            {
              v17 = *((char **)self + 5);
            }
            else
            {
              v20 = v19 + (v19 >> 1);
              *((uint32_t *)self + 7) = v20;
              if ( v20 != 0 )
              {
                v29 = v14;
                v17 = *((uint32_t *)self + 5) != 0
                    ? (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 5), 8 * v20, 8 * v26)
                    : (char *)gameswf::malloc_internal(8 * v20);
                *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v17);
                v15 = *((uint32_t *)self + 6);
                v14 = v29;
              }
              else
              {
                v21 = *((gameswf::Self **)self + 5);
                if ( v21 != nullptr )
                {
                  v28 = v14;
                  gameswf::free_internal(v21);
                  v15 = *((uint32_t *)self + 6);
                  v14 = v28;
                }
                *((uint32_t *)self + 5) = 0;
                v17 = nullptr;
              }
            }
            v18 = &v17[8 * v15];
            if ( v18 != nullptr )
            {
              *(uint32_t *)v18 = v34;
              *((uint32_t *)v18 + 1) = (uint32_t)(uintptr_t)(v37);
            }
            *((uint32_t *)self + 6) = v19;
            if ( ++v16 >= *(uint32_t *)(v14 + 216) )
              break;
            v15 = v19;
          }
        }
        if ( ++v39 == v42 )
          break;
        v8 = (uint32_t *)(*((uint32_t *)self + 5) + v40);
        v40 += 8;
        s = (const char *)v8[1];
        if ( s == nullptr )
          return 0;
      }
      v4 = *((uint32_t *)self + 2);
    }
    v3 = *((gameswf::Self **)self + 1);
    v2 = *((uint32_t *)self + 6);
    v43 += 4;
    v35 = v2;
  }
  while ( *((uint32_t *)v3 + v4 - 1) != v2 );
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::findTarget  (binary VA: 0x111b090)
// Original: gameswf::RenderFX::findTarget
// ----------------------------------------------------------------------------
int gameswf::RenderFX::findTarget(gameswf::Root::Self **self, char *s, gameswf::Character::Self *a3)
{
  int v3;
  gameswf::Player::Self **v4;
  gameswf::Player::Self **RootMovie;
  gameswf::Player::Self **Target;
  gameswf::RenderFX::DepthSearchData::Self *v7;
  gameswf::Character::Self *v8;

  v3 = 0;
  if ( s != nullptr && *s != 0 )
  {
    if ( a3 == nullptr
      || (v4 = gameswf::ASObject::findTarget((gameswf::Player::Self **)a3, s), v3 = (int)(uintptr_t)(v4), v4 == nullptr)
      || (*((uint8_t (**)(gameswf::Player::Self **, int))*v4 + 2))(v4, 1) == 0 )
    {
      RootMovie = (gameswf::Player::Self **)gameswf::Root::getRootMovie(*(self + 10));
      Target = gameswf::ASObject::findTarget(RootMovie, s);
      v3 = (int)(uintptr_t)(Target);
      if ( Target == nullptr || (*((uint8_t (**)(gameswf::Player::Self **, int))*Target + 2))(Target, 1) == 0 )
      {
        if ( a3 == nullptr )
        {
          v7 = (gameswf::RenderFX::DepthSearchData::Self *)(self + 1);
          goto LABEL_10;
        }
        v7 = (gameswf::RenderFX::DepthSearchData::Self *)(self + 1);
        gameswf::RenderFX::DepthSearchData::Init((gameswf::RenderFX::DepthSearchData::Self *)(self + 1), a3, s);
        v3 = gameswf::RenderFX::depthSearch((gameswf::RenderFX::Self *)self, 0);
        if ( v3 == 0 )
        {
LABEL_10:
          v8 = (gameswf::Character::Self *)gameswf::Root::getRootMovie(*(self + 10));
          gameswf::RenderFX::DepthSearchData::Init(v7, v8, s);
          return gameswf::RenderFX::depthSearch((gameswf::RenderFX::Self *)self, 0);
        }
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::find  (binary VA: 0x111b1c0)
// Original: gameswf::RenderFX::find
// ----------------------------------------------------------------------------
gameswf::CharacterHandle::Self * gameswf::RenderFX::find(gameswf::CharacterHandle::Self *a1, gameswf::Root::Self **a2, char *s, gameswf::CharacterHandle::Self *a4)
{
  gameswf::Character::Self *Character;
  gameswf::Character::Self *Target;

  Character = (gameswf::Character::Self *)gameswf::CharacterHandle::getCharacter(a4);
  Target = (gameswf::Character::Self *)gameswf::RenderFX::findTarget(a2, s, Character);
  gameswf::CharacterHandle::Construct(a1, Target);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::forwardEvent  (binary VA: 0x111b220)
// Original: gameswf::RenderFX::forwardEvent
// ----------------------------------------------------------------------------
void gameswf::RenderFX::forwardEvent(long double a1, gameswf::RenderFX::Self *a2, int16_t *a3)
{
  int16_t *v3;
  gameswf::RenderFX::Self *v4;
  int16_t v5;
  int v6;
  int v7;
  int v8;
  float v9; // xmm0_4
  float *v10;
  gameswf::Self *v11;
  uint16_t v12;
  int v13;
  gameswf::Character::Self *v14;
  gameswf::Self *v15;
  const char *v16;
  gameswf::Self *v17;
  gameswf::Self *KeyboardEvent;
  gameswf::Self *v19;
  int v20;
  int v21;
  char *Controller;
  gameswf::EditTextCharacter::Self *v23;
  glf::App::Self *Instance;
  glf::InputManager::Self *InputMgr;
  int (***Gamepad)(uint32_t, uint32_t);
  int16_t v27;
  float v29; // xmm1_4
  int v30;
  char *v31;
  gameswf::EditTextCharacter::Self *v32;
  char v33;
  typedef gameswf::Self *_g4_t_v34;
  typedef gameswf::Self *_g4_t_v35;
  typedef gameswf::Self *_g4_t_v36;
  typedef gameswf::Self *_g4_t_v37;
  typedef size_t _g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef char _g4_t_v42;
  typedef char _g4_t_v43;
  typedef gameswf::Self *_g4_t_v44;
  typedef int16_t _g4_t_v45;
  typedef char _g4_t_v46;
  typedef char _g4_t_v47;
  typedef gameswf::Self *_g4_t_v48[12];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v34)) > _g4_s0 ? (12u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v35)) > _g4_s1 ? (12u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v36)) > _g4_s2 ? (12u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v37)) > _g4_s3 ? (12u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v38)) > _g4_s4 ? (20u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v39)) > _g4_s5 ? (24u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v40)) > _g4_s6 ? (28u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v41)) > _g4_s7 ? (28u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v42)) > _g4_s8 ? (32u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (33u + sizeof(_g4_t_v43)) > _g4_s9 ? (33u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v44)) > _g4_s10 ? (44u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v45)) > _g4_s11 ? (48u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (50u + sizeof(_g4_t_v46)) > _g4_s12 ? (50u + sizeof(_g4_t_v46)) : _g4_s12,
    _g4_s14 = (51u + sizeof(_g4_t_v47)) > _g4_s13 ? (51u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v48)) > _g4_s14 ? (60u + sizeof(_g4_t_v48)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 33u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 48u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 50u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 51u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 60u);

  v48[11] = (gameswf::Self *)&a2;
  v3 = a3;
  v4 = a2;
  v5 = *a3;
  switch ( *a3 )
  {
    case 200:
    case 201:
    case 202:
      Instance = (glf::App::Self *)glf::App::GetInstance();
      InputMgr = (glf::InputManager::Self *)glf::App::GetInputMgr(Instance);
      Gamepad = (int (***)(uint32_t, uint32_t))glf::InputManager::GetGamepad(InputMgr);
      if ( (uint32_t *)(**Gamepad)((uint32_t)(uintptr_t)(Gamepad), 0) != (uint32_t *)(intptr_t)glf::IPhoneController::sRtti )
      {
        v27 = *v3;
        if ( *v3 == 201 )
        {
          if ( *((uint32_t *)v3 + 4) == 0 )
            *((uint8_t *)v4 + 256) = 0;
        }
        else if ( v27 == 202 )
        {
          v29 = (float)v3[10];
          *((float *)v4 + 63) = (float)v3[11];
          *((float *)v4 + 62) = v29;
        }
        else if ( v27 == 200 && *((uint32_t *)v3 + 4) == 0 )
        {
          *((uint8_t *)v4 + 256) = 1;
        }
        G4_VCALL<void>(v4, 20, (int)(uintptr_t)(v4) + 248, 0);
      }
      return;
    case 204:
    case 205:
      if ( *((uint8_t *)a2 + 312) != 0 )
      {
        v16 = "keyDown";
        v42 = 1;
        if ( v5 != 204 )
          v16 = "keyUp";
        v43 = 0;
        v34 = (gameswf::Self *)v16;
        v38 = strlen(v16);
        gameswf::String::resize((gameswf::String::Self *)&v42, v38);
        v17 = (gameswf::Self *)&v43;
        if ( v42 == -1 )
          v17 = v44;
        gameswf::Strcpy_s(v17, (char *)(v38 + 1), v34);
        v45 = -1;
        v46 = 127;
        v47 |= 1u;
        KeyboardEvent = (gameswf::Self *)gameswf::AS3Engine::getKeyboardEvent(
                                     (gameswf::AS3Engine::Self *)(*((uint32_t *)v4 + 9) + 236),
                                     (const gameswf::String::Self *)&v42);
        v19 = KeyboardEvent;
        if ( v42 == -1 && (v47 & 1) != 0 )
        {
          v36 = KeyboardEvent;
          gameswf::free_internal(v44);
          v19 = v36;
        }
        v20 = 0;
        if ( (v3[12] & 4) != 0 )
        {
          v21 = *((uint32_t *)v3 + 5);
          if ( v21 > 9 && v21 < 36 )
            v20 = 32;
        }
        *((uint32_t *)v19 + 21) = *((uint32_t *)v3 + 4) - v20;
        *((uint32_t *)v19 + 22) = *((uint32_t *)v3 + 5);
        *((uint8_t *)v19 + 92) = (v3[12] & 2) != 0;
        *((uint8_t *)v19 + 93) = v3[12] & 1;
        *((uint8_t *)v19 + 94) = (v3[12] & 4) != 0;
        v35 = v19;
        if ( *((uint32_t *)gameswf::RenderFX::getController(v4, 0) + 3) != 0 )
        {
          Controller = gameswf::RenderFX::getController(v4, 0);
          gameswf::ASEventDispatcher::dispatchCaptureEvent(*((gameswf::ASEventDispatcher::Self **)Controller + 3), v35);
          v23 = *((gameswf::EditTextCharacter::Self **)gameswf::RenderFX::getController(v4, 0) + 3);
          if ( v23 != nullptr
            && G4_VCALL<uint8_t>(v23, 8, 37) != 0
            && *((uint8_t *)v23 + 563) == 0
            && *((uint8_t *)v35 + 61) == 0 )
          {
            gameswf::EditTextCharacter::onKeyboardEvent(a1, v23, v35);
          }
        }
      }
      return;
    case 216:
    case 217:
    case 218:
      v39 = *((uint32_t *)a3 + 6);
      v6 = *((uint32_t *)a2 + 65);
      v40 = *((uint32_t *)a3 + 5);
      if ( v5 != 216 )
      {
        if ( v6 != __PAIR64__(v39, v40) )
        {
          if ( *((uint32_t *)a2 + 69) != __PAIR64__(v39, v40) )
          {
            if ( *((uint32_t *)a2 + 73) != __PAIR64__(v39, v40) )
            {
              if ( *((uint32_t *)a2 + 77) != __PAIR64__(v39, v40) )
                return;
LABEL_11:
              v41 = 3;
              goto LABEL_12;
            }
            goto LABEL_72;
          }
LABEL_71:
          v41 = 1;
          goto LABEL_12;
        }
LABEL_70:
        v41 = 0;
        goto LABEL_12;
      }
      if ( v6 == __PAIR64__(v39, v40) || v6 == -1 )
        goto LABEL_70;
      v7 = *((uint32_t *)a2 + 69);
      if ( v7 == __PAIR64__(v39, v40) || v7 == -1 )
        goto LABEL_71;
      v8 = *((uint32_t *)a2 + 73);
      if ( v8 != __PAIR64__(v39, v40) && v8 != -1 )
      {
        if ( *((uint32_t *)a2 + 77) != __PAIR64__(v39, v40) && *((uint32_t *)a2 + 77) != -1 )
          return;
        goto LABEL_11;
      }
LABEL_72:
      v41 = 2;
LABEL_12:
      if ( *((uint32_t *)a3 + 4) == 0 )
      {
        v9 = (float)a3[15];
        v10 = (float *)((char *)a2 + 16 * v41 + 240);
        v10[2] = (float)a3[14];
        v11 = (gameswf::Self *)(v10 + 2);
        v10[3] = v9;
        v12 = *v3;
        if ( (uint16_t)*v3 >= 0xD8u )
        {
          if ( v12 <= 0xD9u )
          {
            v30 = *((uint32_t *)v3 + 5);
            *((uint8_t *)v11 + 8) = 1;
            *((uint32_t *)v11 + 3) = v30;
            v12 = *v3;
          }
          else if ( v12 == 218 )
          {
            *((uint32_t *)v11 + 3) = -1;
            *((uint8_t *)v11 + 8) = 0;
            v12 = *v3;
          }
        }
        if ( (uint16_t)(v12 - 217) <= 1u )
        {
          v37 = v11;
          v31 = gameswf::RenderFX::getController(v4, 0);
          v11 = v37;
          if ( *((uint32_t *)v31 + 3) != 0 )
          {
            v32 = *((gameswf::EditTextCharacter::Self **)gameswf::RenderFX::getController(v4, 0) + 3);
            v11 = v37;
            if ( v32 != nullptr )
            {
              v33 = G4_VCALL<int>(v32, 8, 37);
              v11 = v37;
              if ( v33 != 0 && *((uint8_t *)v32 + 563) == 0 )
              {
                gameswf::EditTextCharacter::onTouchEvent(
                  a1,
                  v32,
                  *(float *)(*(uint32_t *)(*((uint32_t *)v4 + 9) + 276) + 84),
                  *(float *)(*(uint32_t *)(*((uint32_t *)v4 + 9) + 276) + 88));
                v11 = v37;
              }
            }
          }
        }
        G4_VCALL<void>(v4, 20, v11, v41);
      }
      return;
    case 219:
      if ( *((uint32_t *)gameswf::RenderFX::getController(a2, 0) + 3) != 0 )
      {
        v13 = *((uint32_t *)gameswf::RenderFX::getController(v4, 0) + 3);
        if ( v13 != 0
          && G4_VCALL<uint8_t>(v13, 8, 37) != 0
          && *(uint8_t *)(v13 + 563) == 0 )
        {
          v14 = *(gameswf::Character::Self **)(v13 + 56);
          if ( v14 != nullptr )
          {
            v15 = *(gameswf::Self **)(v13 + 52);
            if ( *((uint8_t *)v15 + 2) == 0 )
            {
              if ( (*(uint16_t *)v15)-- == 1 )
                gameswf::free_internal(v15);
              *(uint32_t *)(v13 + 52) = 0;
              *(uint32_t *)(v13 + 56) = 0;
              v14 = nullptr;
            }
          }
          gameswf::Character::getHandle((gameswf::Character::Self *)v48, v14);
          gameswf::RenderFX::setFocus((gameswf::Character::Self **)v4, (gameswf::CharacterHandle::Self *)v48, 0, 1);
          gameswf::CharacterHandle::Destroy(v48);
        }
      }
      return;
    default:
      return;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::GlfEventReceiver::OnEvent  (binary VA: 0x111b850)
// Original: gameswf::RenderFX::GlfEventReceiver::OnEvent
// ----------------------------------------------------------------------------
int gameswf::RenderFX::GlfEventReceiver::OnEvent(long double a1, int a2, int16_t *a3)
{
  int v3;

  v3 = *(uint32_t *)(a2 + 8);
  if ( v3 != 0 && *(uint32_t *)(v3 + 36) != 0 )
    gameswf::RenderFX::forwardEvent(a1, *(gameswf::RenderFX::Self **)(a2 + 8), a3);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::GlfEventReceiver::Destroy  (binary VA: 0x111b890)
// Original: gameswf::RenderFX::GlfEventReceiver::~GlfEventReceiver
// ----------------------------------------------------------------------------
void gameswf::RenderFX::GlfEventReceiver::Destroy(gameswf::RenderFX::GlfEventReceiver::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D428);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::GlfEventReceiver::Destroy_ea111b8b0  (binary VA: 0x111b8b0)
// Original: gameswf::RenderFX::GlfEventReceiver::~GlfEventReceiver
// ----------------------------------------------------------------------------
void gameswf::RenderFX::GlfEventReceiver::Destroy_ea111b8b0(gameswf::RenderFX::GlfEventReceiver::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D428);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::RenderFX::DepthSearchData::Init  (binary VA: 0x111b8e0)
// Original: gameswf::RenderFX::DepthSearchData::Init
// ----------------------------------------------------------------------------
char * gameswf::RenderFX::DepthSearchData::Init(gameswf::RenderFX::DepthSearchData::Self *self, gameswf::Character::Self *a2, const char *a3)
{
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  gameswf::Self *v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  char *v16;
  char *result;
  int v18;
  int v19;

  v3 = *((uint32_t *)self + 5);
  if ( v3 < 0 )
  {
    v4 = 8 * v3;
    do
    {
      v5 = (uint32_t *)(*((uint32_t *)self + 4) + v4);
      if ( v5 != nullptr )
      {
        *v5 = 0;
        v5[1] = 0;
      }
      v4 += 8;
      ++v3;
    }
    while ( v3 != 0 );
  }
  v6 = *((uint32_t *)self + 1);
  v7 = 0;
  *((uint32_t *)self + 5) = 0;
  v8 = *(gameswf::Self **)self;
  if ( v6 < 0 )
  {
    v9 = 4 * v6;
    do
    {
      if ( (gameswf::Self *)((char *)v8 + v9) != nullptr )
      {
        *(uint32_t *)((char *)v8 + v9) = 0;
        v8 = *(gameswf::Self **)self;
      }
      v9 += 4;
      ++v6;
    }
    while ( v6 != 0 );
    v7 = *((uint32_t *)self + 5);
  }
  v10 = *((uint32_t *)self + 2);
  v11 = 0;
  *((uint32_t *)self + 1) = 0;
  if ( v10 <= 0 && *((uint32_t *)self + 3) == 0 )
  {
    *((uint32_t *)self + 2) = 1;
    if ( v8 != nullptr )
      v8 = (gameswf::Self *)gameswf::realloc_internal(v8, 4u, 4 * v10);
    else
      v8 = (gameswf::Self *)gameswf::malloc_internal(4u);
    v18 = *((uint32_t *)self + 1);
    *(uint32_t *)self = (uint32_t)(uintptr_t)(v8);
    v11 = 4 * v18;
  }
  v12 = (uint32_t *)((char *)v8 + v11);
  if ( v12 != nullptr )
    *v12 = v7;
  v13 = *((uint32_t *)self + 5);
  v14 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 1) = 1;
  v15 = v13 + 1;
  if ( v13 + 1 <= v14 || *((uint32_t *)self + 7) != 0 )
  {
    v16 = *((char **)self + 4);
  }
  else
  {
    v19 = v15 + (v15 >> 1);
    *((uint32_t *)self + 6) = v19;
    if ( v19 != 0 )
    {
      if ( *((uint32_t *)self + 4) != 0 )
        v16 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 4), 8 * v19, 8 * v14);
      else
        v16 = (char *)gameswf::malloc_internal(8 * v19);
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v16);
      v13 = *((uint32_t *)self + 5);
    }
    else
    {
      if ( *((uint32_t *)self + 4) != 0 )
      {
        gameswf::free_internal(*((gameswf::Self **)self + 4));
        v13 = *((uint32_t *)self + 5);
      }
      *((uint32_t *)self + 4) = 0;
      v16 = nullptr;
    }
  }
  result = &v16[8 * v13];
  if ( result != nullptr )
  {
    *(uint32_t *)result = (uint32_t)(uintptr_t)(a2);
    *((uint32_t *)result + 1) = (uint32_t)(uintptr_t)(a3);
  }
  *((uint32_t *)self + 5) = v15;
  return result;
}


