#include "Core/Utils/DecompTypes.h"
#include "gameswf_SpriteDefinition.h"

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::createCharacterInstance  (binary VA: 0x10a1950)
// Original: gameswf::SpriteDefinition::createCharacterInstance
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::createCharacterInstance(gameswf::SpriteDefinition::Self *self, gameswf::Character::Self *a2, int a3)
{
  gameswf::Character::Self *v3;
  gameswf::Player::Self *v4;
  gameswf::Self *v5;
  gameswf::Character::Self *v8;

  v3 = (gameswf::Character::Self *)G4_VCALL<int>(a2, 308);
  v4 = *((gameswf::Player::Self **)self + 6);
  if ( v4 != nullptr )
  {
    v5 = *((gameswf::Self **)self + 5);
    if ( *((uint8_t *)v5 + 2) == 0 )
    {
      if ( (*(uint16_t *)v5)-- == 1 )
      {
        v8 = v3;
        gameswf::free_internal(v5);
        v3 = v8;
      }
      *((uint32_t *)self + 5) = 0;
      *((uint32_t *)self + 6) = 0;
      v4 = nullptr;
    }
  }
  return (int)(uintptr_t)(gameswf::Player::createSpriteInstance(v4, self, v3, a2, a3));
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::Destroy  (binary VA: 0x10eadc0)
// Original: gameswf::SpriteDefinition::~SpriteDefinition
// ----------------------------------------------------------------------------
void gameswf::SpriteDefinition::Destroy(gameswf::SpriteDefinition::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  void (***v5)(uint32_t);
  gameswf::Self *v6;
  int v7;
  int v8;
  int i;
  uint32_t *v10;
  int v11;
  int v12;
  int j;
  gameswf::Self **v14;
  int v15;
  int v16;
  uint32_t *v17;
  gameswf::Self *v18;
  gameswf::Self *v19;
  bool v20;
  int v21;
  int v22;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208F5A8);
  v1 = *((uint32_t *)self + 20) << 8;
  *((uint8_t *)self + 68) = 1;
  v22 = v1 >> 8;
  if ( v1 >> 8 > 0 )
  {
    v21 = 0;
    do
    {
      v2 = *((uint32_t *)self + 19);
      v3 = *(uint32_t *)(v2 + 16 * v21 + 4);
      if ( v3 > 0 )
      {
        v4 = 0;
        while ( 1 )
        {
          v5 = *(void (****)(uint32_t))(*(uint32_t *)(v2 + 16 * v21) + 4 * v4++);
          (**v5)((uint32_t)(uintptr_t)(v5));
          if ( v4 == v3 )
            break;
          v2 = *((uint32_t *)self + 19);
        }
      }
      ++v21;
    }
    while ( v21 < v22 );
  }
  if ( *((uint32_t *)self + 22) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 22));
  v6 = *((gameswf::Self **)self + 21);
  if ( v6 != nullptr )
  {
    v7 = *((uint32_t *)v6 + 1);
    if ( v7 >= 0 )
    {
      v8 = 8;
      for ( i = 0; i <= v7; ++i )
      {
        v10 = (uint32_t *)((char *)v6 + v8);
        if ( *(uint32_t *)((char *)v6 + v8) != -2 )
        {
          *v10 = -2;
          v10[1] = 0;
          v6 = *((gameswf::Self **)self + 21);
        }
        v8 += 16;
      }
    }
    gameswf::free_internal(v6);
    *((uint32_t *)self + 21) = 0;
  }
  v11 = *((uint32_t *)self + 20);
  if ( *((uint32_t *)self + 19) != 0 )
  {
    if ( v11 << 8 >> 8 > 0 )
    {
      v12 = 0;
      for ( j = *((uint32_t *)self + 19); ; j = *((uint32_t *)self + 19) )
      {
        v14 = (gameswf::Self **)(j + 16 * v12);
        v15 = (int)(uintptr_t)(v14[1]);
        if ( v15 < 0 )
        {
          v16 = 4 * v15;
          do
          {
            v17 = (uint32_t *)((char *)*v14 + v16);
            if ( v17 != nullptr )
              *v17 = 0;
            v16 += 4;
            ++v15;
          }
          while ( v15 != 0 );
        }
        v18 = v14[3];
        v14[1] = nullptr;
        if ( v18 == nullptr )
        {
          v19 = *v14;
          v20 = *v14 == nullptr;
          v14[2] = nullptr;
          if ( !v20 )
            gameswf::free_internal(v19);
          *v14 = nullptr;
        }
        v11 = *((uint32_t *)self + 20);
        if ( ++v12 >= v11 << 8 >> 8 )
          break;
      }
    }
    if ( *((uint8_t *)self + 83) != 0 )
    {
      gameswf::free_internal(*((gameswf::Self **)self + 19));
      v11 = *((uint32_t *)self + 20);
    }
  }
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = v11 & 0xFF000000;
  *((uint8_t *)self + 83) = 0;
  gameswf::MovieDefinitionSub::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::Destroy_ea10eafa0  (binary VA: 0x10eafa0)
// Original: gameswf::SpriteDefinition::~SpriteDefinition
// ----------------------------------------------------------------------------
void gameswf::SpriteDefinition::Destroy_ea10eafa0(gameswf::SpriteDefinition::Self *self)
{
  gameswf::SpriteDefinition::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0x10eafe0 (size: 697 bytes)
// Symbol:    _ZN7gameswf16SpriteDefinitionC1EPNS_6PlayerEPNS_18MovieDefinitionSubE
// Demangled: gameswf::SpriteDefinition::SpriteDefinition(gameswf::Player *,gameswf::MovieDefinitionSub *)
// ============================================================================
// Alternative name is '_ZN7gameswf16SpriteDefinitionC2EPNS_6PlayerEPNS_18MovieDefinitionSubE'
void (**gameswf::SpriteDefinition::SpriteDefinition(
        pthread_mutex_t **self,
        gameswf::Player::Self *a2,
        gameswf::MovieDefinitionSub::Self *a3))(gameswf::SpriteDefinition::Self * self)
{
  gameswf::Self *WeakProxy;
  gameswf::Self *v4;
  void (**result)(gameswf::SpriteDefinition::Self *);
  int v7;
  int v8;
  int v9;
  int v10;
  gameswf::Self *v11;
  int v12;
  int v13;
  int i;
  uint32_t *v15;
  glf::Mutex::Self *v16;

  gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)self);
  *self = (pthread_mutex_t *)((uint32_t)(uintptr_t)&off_208E728);
  *(self + 3) = nullptr;
  *(self + 4) = nullptr;
  *(self + 5) = nullptr;
  *(self + 6) = (pthread_mutex_t *)a2;
  if ( a2 != nullptr )
  {
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(a2);
    v4 = (gameswf::Self *)*(self + 5);
    if ( WeakProxy != v4 )
    {
      if ( v4 != nullptr && (*(uint16_t *)v4)-- == 1 )
      {
        v16 = (glf::Mutex::Self *)(WeakProxy);
        gameswf::free_internal(v4);
        WeakProxy = (gameswf::Self *)(v16);
      }
      *(self + 5) = (pthread_mutex_t *)WeakProxy;
      if ( WeakProxy != nullptr )
        ++*(uint16_t *)WeakProxy;
    }
  }
  *(self + 7) = (pthread_mutex_t *)-1;
  *(self + 8) = nullptr;
  *self = (pthread_mutex_t *)((uint32_t)(uintptr_t)&off_208E7A8);
  *(self + 9) = (pthread_mutex_t *)-1;
  *((uint8_t *)self + 40) = 0;
  *((uint8_t *)self + 41) = 0;
  *((uint8_t *)self + 42) = 0;
  *(self + 11) = nullptr;
  *(self + 12) = nullptr;
  *(self + 13) = nullptr;
  *(self + 14) = nullptr;
  glf::Mutex::Construct(self + 15, 1);
  glf::Condition::Construct((glf::Condition::Self *)(self + 16), (glf::Mutex::Self *)(self + 15));
  *(self + 20) = (pthread_mutex_t *)((unsigned int)(uintptr_t)(*(self + 20)) & 0xFF000000);
  result = (void (**)(gameswf::SpriteDefinition::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208F5A8));
  *((uint8_t *)self + 68) = 0;
  *self = (pthread_mutex_t *)((uint32_t)(uintptr_t)&off_208F5A8);
  *(self + 18) = (pthread_mutex_t *)a3;
  *(self + 19) = nullptr;
  *((uint8_t *)self + 83) = 0;
  *(self + 21) = nullptr;
  *(self + 22) = nullptr;
  if ( a3 == nullptr )
  {
    *(self + 14) = (pthread_mutex_t *)((char *)*(self + 14) + 1);
    *(self + 13) = (pthread_mutex_t *)(&dword_0 + 1);
    if ( (uint8_t)gameswf::MovieDefinitionSub::isMultiThread() != 0 )
      glf::Condition::Signal((glf::Condition::Self *)(self + 16));
    v7 = (int)(uintptr_t)(*(self + 19));
    if ( v7 == 0 )
    {
      *(self + 20) = (pthread_mutex_t *)((unsigned int)(uintptr_t)(*(self + 20)) & 0xFF000000 | 1);
      v7 = gameswf::malloc_internal(0x10u);
      *(self + 19) = (pthread_mutex_t *)v7;
      *((uint8_t *)self + 83) = 1;
      v13 = (int)((uint32_t)(uintptr_t)(*(self + 20)) << 8) >> 8;
      if ( v13 > 0 )
      {
        for ( i = 0; i < v13; ++i )
        {
          v15 = (uint32_t *)(v7 + 16 * i);
          if ( v15 != nullptr )
          {
            *v15 = 0;
            v15[1] = 0;
            v15[2] = 0;
            v15[3] = 0;
            v7 = (int)(uintptr_t)(*(self + 19));
            v13 = (int)((uint32_t)(uintptr_t)(*(self + 20)) << 8) >> 8;
          }
        }
      }
    }
    v8 = *(uint32_t *)(v7 + 4);
    v9 = *(uint32_t *)(v7 + 8);
    v10 = v8 + 1;
    if ( v8 + 1 <= v9 || *(uint32_t *)(v7 + 12) != 0 )
    {
      v11 = *(gameswf::Self **)v7;
    }
    else
    {
      v12 = v10 + (v10 >> 1);
      *(uint32_t *)(v7 + 8) = v12;
      if ( v12 != 0 )
      {
        if ( *(uint32_t *)v7 != 0 )
          v11 = (gameswf::Self *)gameswf::realloc_internal(*(gameswf::Self **)v7, 4 * v12, 4 * v9);
        else
          v11 = (gameswf::Self *)gameswf::malloc_internal(4 * v12);
        *(uint32_t *)v7 = (uint32_t)(uintptr_t)(v11);
        v8 = *(uint32_t *)(v7 + 4);
      }
      else
      {
        if ( *(uint32_t *)v7 != 0 )
        {
          gameswf::free_internal(*(gameswf::Self **)v7);
          v8 = *(uint32_t *)(v7 + 4);
        }
        *(uint32_t *)v7 = 0;
        v11 = nullptr;
      }
    }
    result = (void (**)(gameswf::SpriteDefinition::Self *))((char *)v11 + 4 * v8);
    if ( result != nullptr )
      *result = (void (*)(gameswf::SpriteDefinition::Self *))&dword_20E5594;
    *(uint32_t *)(v7 + 4) = v10;
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::read  (binary VA: 0x10eb2a0)
// Original: gameswf::SpriteDefinition::read
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::SpriteDefinition::read(gameswf::SpriteDefinition::Self *self, gameswf::Stream::Self *a2)
{
  int U16;
  int v3;
  char *v4;
  gameswf::Self *result;
  int v6;
  int v7;
  int i;
  uint32_t *v9;
  gameswf::Self *v10;
  int v11;
  int v12;
  int j;
  uint32_t *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  typedef char *_g4_t_v22;
  typedef unsigned int _g4_t_TagEndPosition;
  typedef uint32_t _g4_t_v24[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_TagEndPosition)) > _g4_s1 ? (24u + sizeof(_g4_t_TagEndPosition)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v24)) > _g4_s2 ? (44u + sizeof(_g4_t_v24)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_TagEndPosition &TagEndPosition = *reinterpret_cast<_g4_t_TagEndPosition *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);

  TagEndPosition = gameswf::Stream::getTagEndPosition(a2);
  U16 = (uint16_t)gameswf::Stream::readU16(a2);
  if ( (uint16_t)U16 == 0 )
    U16 = 1;
  *((uint32_t *)self + 13) = U16;
  v3 = G4_VCALL<int>(self, 52);
  if ( v3 > 0 && *((uint32_t *)self + 19) == 0 )
  {
    v16 = v3 << 8 >> 8;
    *((uint32_t *)self + 20) = v16 & 0xFFFFFF | *((uint32_t *)self + 20) & 0xFF000000;
    v22 = nullptr;
    v17 = gameswf::malloc_internal(16 * v16);
    *((uint8_t *)self + 83) = 1;
    v18 = *((uint32_t *)self + 20) << 8;
    *((uint32_t *)self + 19) = v17;
    v19 = v18 >> 8;
    if ( v19 > 0 )
    {
      v20 = 0;
      while ( 1 )
      {
        v21 = (uint32_t *)(v17 + 16 * v20);
        if ( v21 != nullptr )
        {
          *v21 = 0;
          v21[1] = 0;
          v21[2] = 0;
          v21[3] = 0;
          v19 = (int)(*((uint32_t *)self + 20) << 8) >> 8;
        }
        if ( ++v20 >= v19 )
          break;
        v17 = *((uint32_t *)self + 19);
      }
    }
  }
  while ( gameswf::Stream::getPosition(a2) < TagEndPosition && *((uint8_t *)self + 68) == 0 )
  {
    v4 = (char *)gameswf::Stream::openTag(a2);
    v24[0] = 0;
    if ( v4 == (char *)((uint8_t *)&dword_0 + 1) )
    {
      v15 = *(uint32_t *)self;
      ++*((uint32_t *)self + 14);
      if ( (*(uint8_t (**)(gameswf::SpriteDefinition::Self *, char *))(v15 + 192))(self, v22) != 0 )
        glf::Condition::Signal((gameswf::SpriteDefinition::Self *)((char *)self + 64));
    }
    else if ( (uint8_t)gameswf::getTagLoader((gameswf::Self *)v4, v24) != 0 )
    {
      ((void (*)(gameswf::Stream::Self *, char *, gameswf::SpriteDefinition::Self *))v24[0])(a2, v4, self);
    }
    else
    {
      gameswf::logMsg((gameswf::Self *)"*** no tag loader for type %d\n", v4);
    }
    gameswf::Stream::closeTag(a2);
  }
  result = *((gameswf::Self **)self + 11);
  if ( result != nullptr )
  {
    v6 = *((uint32_t *)result + 1);
    if ( v6 >= 0 )
    {
      v7 = 8;
      for ( i = 0; i <= v6; ++i )
      {
        v9 = (uint32_t *)((char *)result + v7);
        if ( *(uint32_t *)((char *)result + v7) != -2 )
        {
          *v9 = -2;
          v9[1] = 0;
          result = *((gameswf::Self **)self + 11);
        }
        v7 += 16;
      }
    }
    result = (gameswf::Self *)gameswf::free_internal(result);
    *((uint32_t *)self + 11) = 0;
  }
  v10 = *((gameswf::Self **)self + 12);
  if ( v10 != nullptr )
  {
    v11 = *((uint32_t *)v10 + 1);
    if ( v11 >= 0 )
    {
      v12 = 8;
      for ( j = 0; j <= v11; ++j )
      {
        v14 = (uint32_t *)((char *)v10 + v12);
        if ( *(uint32_t *)((char *)v10 + v12) != -2 )
        {
          *v14 = -2;
          v14[1] = 0;
          v10 = *((gameswf::Self **)self + 12);
        }
        v12 += 16;
      }
    }
    result = (gameswf::Self *)gameswf::free_internal(v10);
    *((uint32_t *)self + 12) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::is  (binary VA: 0x10eb4f0)
// Original: gameswf::SpriteDefinition::is
// ----------------------------------------------------------------------------
bool gameswf::SpriteDefinition::is(gameswf::SpriteDefinition::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 15 && a2 != 13 )
    return a2 == 14;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::getWidthPixels  (binary VA: 0x10eb510)
// Original: gameswf::SpriteDefinition::getWidthPixels
// ----------------------------------------------------------------------------
long double gameswf::SpriteDefinition::getWidthPixels()
{
  return 1.0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::getHeightPixels  (binary VA: 0x10eb520)
// Original: gameswf::SpriteDefinition::getHeightPixels
// ----------------------------------------------------------------------------
long double gameswf::SpriteDefinition::getHeightPixels()
{
  return 1.0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::getFrameRate  (binary VA: 0x10eb530)
// Original: gameswf::SpriteDefinition::getFrameRate
// ----------------------------------------------------------------------------
long double gameswf::SpriteDefinition::getFrameRate(gameswf::SpriteDefinition::Self *self)
{
  long double result; // fst7
  int v2;

  result = 0.0;
  v2 = *((uint32_t *)self + 18);
  if ( v2 != 0 )
    return ((double (*)(uint32_t))*(uint32_t *)(*(uint32_t *)v2 + 56))(*((uint32_t *)self + 18));
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::getVersion  (binary VA: 0x10eb560)
// Original: gameswf::SpriteDefinition::getVersion
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::getVersion(gameswf::SpriteDefinition::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 18);
  result = 0;
  if ( v1 != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)v1 + 40))(*((uint32_t *)self + 18));
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::addABC  (binary VA: 0x10eb580)
// Original: gameswf::SpriteDefinition::addABC
// ----------------------------------------------------------------------------
void gameswf::SpriteDefinition::addABC()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::addSymbolClass  (binary VA: 0x10eb590)
// Original: gameswf::SpriteDefinition::addSymbolClass
// ----------------------------------------------------------------------------
void gameswf::SpriteDefinition::addSymbolClass()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::addScene  (binary VA: 0x10eb5a0)
// Original: gameswf::SpriteDefinition::addScene
// ----------------------------------------------------------------------------
void gameswf::SpriteDefinition::addScene()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::addFrameLabel  (binary VA: 0x10eb5b0)
// Original: gameswf::SpriteDefinition::addFrameLabel
// ----------------------------------------------------------------------------
void gameswf::SpriteDefinition::addFrameLabel()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::getFont  (binary VA: 0x10eb5c0)
// Original: gameswf::SpriteDefinition::getFont
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::getFont(gameswf::SpriteDefinition::Self *self, int a2)
{
  return (*(int (**)(uint32_t, int))(**((uint32_t **)self + 18) + 124))(*((uint32_t *)self + 18), a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::setJpegLoader  (binary VA: 0x10eb5e0)
// Original: gameswf::SpriteDefinition::setJpegLoader
// ----------------------------------------------------------------------------
void gameswf::SpriteDefinition::setJpegLoader()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::getJpegLoader  (binary VA: 0x10eb5f0)
// Original: gameswf::SpriteDefinition::getJpegLoader
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::getJpegLoader()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::getBitmapCharacter  (binary VA: 0x10eb600)
// Original: gameswf::SpriteDefinition::getBitmapCharacter
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::getBitmapCharacter(gameswf::SpriteDefinition::Self *self, int a2)
{
  return (*(int (**)(uint32_t, int))(**((uint32_t **)self + 18) + 152))(*((uint32_t *)self + 18), a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::getSoundSample  (binary VA: 0x10eb630)
// Original: gameswf::SpriteDefinition::getSoundSample
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::getSoundSample(gameswf::SpriteDefinition::Self *self, int a2)
{
  return (*(int (**)(uint32_t, int))(**((uint32_t **)self + 18) + 160))(*((uint32_t *)self + 18), a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::getCreateBitmaps  (binary VA: 0x10eb660)
// Original: gameswf::SpriteDefinition::getCreateBitmaps
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::getCreateBitmaps()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::getCreateFontShapes  (binary VA: 0x10eb670)
// Original: gameswf::SpriteDefinition::getCreateFontShapes
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::getCreateFontShapes()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::getBitmapInfoCount  (binary VA: 0x10eb680)
// Original: gameswf::SpriteDefinition::getBitmapInfoCount
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::getBitmapInfoCount()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::getBitmapInfo  (binary VA: 0x10eb690)
// Original: gameswf::SpriteDefinition::getBitmapInfo
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::getBitmapInfo()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::addBitmapInfo  (binary VA: 0x10eb6a0)
// Original: gameswf::SpriteDefinition::addBitmapInfo
// ----------------------------------------------------------------------------
void gameswf::SpriteDefinition::addBitmapInfo()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::getExportedResource  (binary VA: 0x10eb6b0)
// Original: gameswf::SpriteDefinition::getExportedResource
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::getExportedResource(gameswf::SpriteDefinition::Self *self, const gameswf::String::Self *a2)
{
  return (*(int (**)(uint32_t, const gameswf::String::Self *))(**((uint32_t **)self + 18) + 84))(
           *((uint32_t *)self + 18),
           a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::addImport  (binary VA: 0x10eb6d0)
// Original: gameswf::SpriteDefinition::addImport
// ----------------------------------------------------------------------------
void gameswf::SpriteDefinition::addImport()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::getImportCharacter  (binary VA: 0x10eb6e0)
// Original: gameswf::SpriteDefinition::getImportCharacter
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::getImportCharacter()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::visitImportedMovies  (binary VA: 0x10eb6f0)
// Original: gameswf::SpriteDefinition::visitImportedMovies
// ----------------------------------------------------------------------------
void gameswf::SpriteDefinition::visitImportedMovies()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::getCharacterDef  (binary VA: 0x10eb700)
// Original: gameswf::SpriteDefinition::getCharacterDef
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::getCharacterDef(gameswf::SpriteDefinition::Self *self, int a2)
{
  return (*(int (**)(uint32_t, int))(**((uint32_t **)self + 18) + 88))(*((uint32_t *)self + 18), a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::createInstance  (binary VA: 0x10eb720)
// Original: gameswf::SpriteDefinition::createInstance
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::createInstance()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::hasInitActions  (binary VA: 0x10eb730)
// Original: gameswf::SpriteDefinition::hasInitActions
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::hasInitActions()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::getPlaylist  (binary VA: 0x10eb740)
// Original: gameswf::SpriteDefinition::getPlaylist
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::getPlaylist(gameswf::SpriteDefinition::Self *self, int a2)
{
  return *((uint32_t *)self + 19) + 16 * a2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::getInitActions  (binary VA: 0x10eb750)
// Original: gameswf::SpriteDefinition::getInitActions
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::getInitActions()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::getCurrentLabels  (binary VA: 0x10eb760)
// Original: gameswf::SpriteDefinition::getCurrentLabels
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::SpriteDefinition::getCurrentLabels(gameswf::SpriteDefinition::Self *self)
{
  int v1;
  gameswf::RefCounted::Self *FrameLabels;
  gameswf::RefCounted::Self *v4;

  v1 = *((uint32_t *)self + 22);
  if ( v1 == 0 )
  {
    FrameLabels = (gameswf::RefCounted::Self *)(gameswf::MovieDefinitionSub::createFrameLabels((int)(uintptr_t)(self), (int *)self + 21));
    v4 = *((gameswf::RefCounted::Self **)self + 22);
    if ( FrameLabels == v4 )
    {
      return FrameLabels;
    }
    else
    {
      if ( v4 != nullptr )
        gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 22));
      *((uint32_t *)self + 22) = (uint32_t)(uintptr_t)(FrameLabels);
      if ( FrameLabels != nullptr )
      {
        gameswf::RefCounted::addRef(FrameLabels);
        return *((gameswf::RefCounted::Self **)self + 22);
      }
    }
  }
  return (gameswf::RefCounted::Self *)v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::addInitAction  (binary VA: 0x10eb7f0)
// Original: gameswf::SpriteDefinition::addInitAction
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::addInitAction()
{
  const char *v1;

  return gameswf::logError((gameswf::Self *)"SpriteDefinition::addInitAction called!  Ignored.\n", v1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::exportResource  (binary VA: 0x10eb820)
// Original: gameswf::SpriteDefinition::exportResource
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::exportResource()
{
  const char *v1;

  return gameswf::logError((gameswf::Self *)"can't export from sprite\n", v1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::addSoundSample  (binary VA: 0x10eb850)
// Original: gameswf::SpriteDefinition::addSoundSample
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::addSoundSample()
{
  const char *v1;

  return gameswf::logError((gameswf::Self *)"add sam appears in sprite tags!\n", v1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::addBitmapCharacter  (binary VA: 0x10eb880)
// Original: gameswf::SpriteDefinition::addBitmapCharacter
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::addBitmapCharacter()
{
  const char *v1;

  return gameswf::logError((gameswf::Self *)"add_bc appears in sprite tags!\n", v1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::addFont  (binary VA: 0x10eb8b0)
// Original: gameswf::SpriteDefinition::addFont
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::addFont()
{
  const char *v1;

  return gameswf::logError((gameswf::Self *)"addFont tag appears in sprite tags!\n", v1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::addCharacter  (binary VA: 0x10eb8e0)
// Original: gameswf::SpriteDefinition::addCharacter
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::addCharacter()
{
  const char *v1;

  return gameswf::logError((gameswf::Self *)"addCharacter tag appears in sprite tags!\n", v1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::getLabeledFrame  (binary VA: 0x10eb910)
// Original: gameswf::SpriteDefinition::getLabeledFrame
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::getLabeledFrame(gameswf::SpriteDefinition::Self *self, const gameswf::StringI::Self *a2, int *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  const gameswf::StringI::Self *v11;
  char *v12;
  gameswf::String::Self *v13;
  int v14;
  int v16;
  char *v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  int v22;
  int v23;

  v3 = (uint32_t *)((char *)self + 84);
  v4 = *((uint32_t *)self + 21);
  if ( v4 != 0 )
  {
    v22 = *((uint32_t *)a2 + 4);
    if ( (uint8_t *)(v22 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( *(uint8_t *)a2 == 0xFF )
      {
        v17 = *((char **)a2 + 3);
        v16 = *((uint32_t *)a2 + 1) - 1;
      }
      else
      {
        v16 = *(char *)a2 - 1;
        v17 = (char *)a2 + 1;
      }
      v5 = 5381;
      v18 = 5381;
      if ( v16 > 0 )
      {
        do
        {
          --v16;
          v19 = 33 * v18;
          v20 = (uint8_t)v17[v16] + 32;
          if ( (uint8_t)(v17[v16] - 65) > 0x19u )
            v20 = (uint8_t)v17[v16];
          v18 = v19 ^ v20;
        }
        while ( v16 != 0 );
        v3 = (uint32_t *)((char *)self + 84);
        v18 = v18 << 9 >> 9;
        v5 = v18;
      }
      *((uint32_t *)a2 + 4) = v18 & 0x7FFFFF | v22 & 0xFF800000;
      v4 = *((uint32_t *)self + 21);
    }
    else
    {
      v5 = v22 << 9 >> 9;
    }
    v23 = *(uint32_t *)(v4 + 4);
    v6 = v5 & v23;
    v7 = 16 * (v5 & v23);
    v8 = (int *)(v4 + v7 + 8);
    if ( *v8 != -2 )
    {
      v9 = *(uint32_t *)(v4 + v7 + 12);
      v10 = 0;
      if ( v6 != (v9 & v23) )
        return v10;
      while ( 1 )
      {
        if ( v9 == v5 )
        {
          v11 = (const gameswf::StringI::Self *)v8[2];
          if ( a2 == v11 )
            break;
          v12 = *(uint8_t *)a2 == 0xFF ? *((char **)a2 + 3) : (char *)a2 + 1;
          v13 = *(uint8_t *)v11 == 0xFF ? *((gameswf::String::Self **)v11 + 3) : (gameswf::String::Self *)((char *)v11 + 1);
          v21 = v3;
          v14 = gameswf::String::stricmp(v13, v12);
          v3 = v21;
          if ( v14 == 0 )
            break;
        }
        v6 = *v8;
        if ( *v8 == -1 )
          return 0;
        v8 = (int *)(*v3 + 16 * v6 + 8);
        v9 = v8[1];
      }
      if ( v6 >= 0 )
      {
        v10 = 1;
        if ( a3 != nullptr )
          *a3 = *(uint32_t *)(*((uint32_t *)self + 21) + 16 * v6 + 20);
        return v10;
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::addExecuteTag  (binary VA: 0x10ebb00)
// Original: gameswf::SpriteDefinition::addExecuteTag
// ----------------------------------------------------------------------------
uint32_t * gameswf::SpriteDefinition::addExecuteTag(gameswf::SpriteDefinition::Self *self, gameswf::ExecuteTag::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  gameswf::Self *v6;
  uint32_t *result;
  int v8;

  v2 = *((uint32_t *)self + 19) + 16 * *((uint32_t *)self + 14);
  v3 = *(uint32_t *)(v2 + 4);
  v4 = *(uint32_t *)(v2 + 8);
  v5 = v3 + 1;
  if ( v3 + 1 <= v4 || *(uint32_t *)(v2 + 12) != 0 )
  {
    v6 = *(gameswf::Self **)v2;
  }
  else
  {
    v8 = v5 + (v5 >> 1);
    *(uint32_t *)(v2 + 8) = v8;
    if ( v8 != 0 )
    {
      if ( *(uint32_t *)v2 != 0 )
        v6 = (gameswf::Self *)gameswf::realloc_internal(*(gameswf::Self **)v2, 4 * v8, 4 * v4);
      else
        v6 = (gameswf::Self *)gameswf::malloc_internal(4 * v8);
      *(uint32_t *)v2 = (uint32_t)(uintptr_t)(v6);
      v3 = *(uint32_t *)(v2 + 4);
    }
    else
    {
      if ( *(uint32_t *)v2 != 0 )
      {
        gameswf::free_internal(*(gameswf::Self **)v2);
        v3 = *(uint32_t *)(v2 + 4);
      }
      *(uint32_t *)v2 = 0;
      v6 = nullptr;
    }
  }
  result = (uint32_t *)((char *)v6 + 4 * v3);
  if ( result != nullptr )
    *result = (uint32_t)(uintptr_t)(a2);
  *(uint32_t *)(v2 + 4) = v5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteDefinition::addFrameName  (binary VA: 0x10ebbe0)
// Original: gameswf::SpriteDefinition::addFrameName
// ----------------------------------------------------------------------------
int gameswf::SpriteDefinition::addFrameName(gameswf::SpriteDefinition::Self *self, char *s)
{
  size_t v2;
  char *v3;
  gameswf::Self *v4;
  gameswf::Self *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  const char *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int *v19;
  int v20;
  int v21;
  char *v22;
  gameswf::String::Self *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  char *v30;
  int v31;
  int v32;
  int v33;
  char *v34;
  int v35;
  int v36;
  int v37;
  int *v38;
  int i;
  const char *v40;
  int v41;
  char **v42;
  int v43;
  int v44;
  int v45;
  int *v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  char *v52;
  gameswf::String::Self *v53;
  int v54;
  int result;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  char *v66;
  int v67;
  int v68;
  int v69;
  char *v71;
  int v72;
  int v73;
  int v74;
  int v75;
  char *v76;
  char *v77;
  size_t v78;
  char *v79;
  gameswf::Self *v80;
  int v81;
  int v82;
  int *v83;
  int v84;
  int v85;
  const char *v86;
  const char *v87;
  int v88;
  int v89;
  int v90;
  char *v91;
  int v92;
  int v93;
  int v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef gameswf::String::Self *_g4_t_v97;
  typedef char *_g4_t_v98;
  typedef int _g4_t_v99;
  typedef uint32_t *_g4_t_v100;
  typedef char *_g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef char *_g4_t_v115;
  typedef char _g4_t_v116;
  typedef gameswf::Self **_g4_t_v117;
  typedef int _g4_t_v118;
  typedef const char *_g4_t_v119;
  typedef char *_g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef const char *_g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef const char *_g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129[4];
  typedef char *_g4_t_v130;
  typedef int _g4_t_v131;
  typedef char _g4_t_v132;
  typedef char _g4_t_s2[3];
  typedef int _g4_t_v134;
  typedef gameswf::Self *_g4_t_v135;
  typedef unsigned int _g4_t_v136;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v95)) > _g4_s0 ? (12u + sizeof(_g4_t_v95)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v96)) > _g4_s1 ? (12u + sizeof(_g4_t_v96)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v97)) > _g4_s2 ? (12u + sizeof(_g4_t_v97)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v98)) > _g4_s3 ? (12u + sizeof(_g4_t_v98)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v99)) > _g4_s4 ? (12u + sizeof(_g4_t_v99)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v100)) > _g4_s5 ? (12u + sizeof(_g4_t_v100)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v101)) > _g4_s6 ? (12u + sizeof(_g4_t_v101)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v102)) > _g4_s7 ? (12u + sizeof(_g4_t_v102)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v103)) > _g4_s8 ? (16u + sizeof(_g4_t_v103)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v104)) > _g4_s9 ? (16u + sizeof(_g4_t_v104)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v105)) > _g4_s10 ? (16u + sizeof(_g4_t_v105)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v106)) > _g4_s11 ? (16u + sizeof(_g4_t_v106)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v107)) > _g4_s12 ? (24u + sizeof(_g4_t_v107)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v108)) > _g4_s13 ? (24u + sizeof(_g4_t_v108)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v109)) > _g4_s14 ? (28u + sizeof(_g4_t_v109)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v110)) > _g4_s15 ? (28u + sizeof(_g4_t_v110)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v111)) > _g4_s16 ? (28u + sizeof(_g4_t_v111)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v112)) > _g4_s17 ? (28u + sizeof(_g4_t_v112)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v113)) > _g4_s18 ? (28u + sizeof(_g4_t_v113)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v114)) > _g4_s19 ? (32u + sizeof(_g4_t_v114)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v115)) > _g4_s20 ? (32u + sizeof(_g4_t_v115)) : _g4_s20,
    _g4_s22 = (36u + sizeof(_g4_t_v116)) > _g4_s21 ? (36u + sizeof(_g4_t_v116)) : _g4_s21,
    _g4_s23 = (36u + sizeof(_g4_t_v117)) > _g4_s22 ? (36u + sizeof(_g4_t_v117)) : _g4_s22,
    _g4_s24 = (36u + sizeof(_g4_t_v118)) > _g4_s23 ? (36u + sizeof(_g4_t_v118)) : _g4_s23,
    _g4_s25 = (36u + sizeof(_g4_t_v119)) > _g4_s24 ? (36u + sizeof(_g4_t_v119)) : _g4_s24,
    _g4_s26 = (36u + sizeof(_g4_t_v120)) > _g4_s25 ? (36u + sizeof(_g4_t_v120)) : _g4_s25,
    _g4_s27 = (40u + sizeof(_g4_t_v121)) > _g4_s26 ? (40u + sizeof(_g4_t_v121)) : _g4_s26,
    _g4_s28 = (40u + sizeof(_g4_t_v122)) > _g4_s27 ? (40u + sizeof(_g4_t_v122)) : _g4_s27,
    _g4_s29 = (40u + sizeof(_g4_t_v123)) > _g4_s28 ? (40u + sizeof(_g4_t_v123)) : _g4_s28,
    _g4_s30 = (40u + sizeof(_g4_t_v124)) > _g4_s29 ? (40u + sizeof(_g4_t_v124)) : _g4_s29,
    _g4_s31 = (40u + sizeof(_g4_t_v125)) > _g4_s30 ? (40u + sizeof(_g4_t_v125)) : _g4_s30,
    _g4_s32 = (40u + sizeof(_g4_t_v126)) > _g4_s31 ? (40u + sizeof(_g4_t_v126)) : _g4_s31,
    _g4_s33 = (40u + sizeof(_g4_t_v127)) > _g4_s32 ? (40u + sizeof(_g4_t_v127)) : _g4_s32,
    _g4_s34 = (48u + sizeof(_g4_t_v128)) > _g4_s33 ? (48u + sizeof(_g4_t_v128)) : _g4_s33,
    _g4_s35 = (64u + sizeof(_g4_t_v129)) > _g4_s34 ? (64u + sizeof(_g4_t_v129)) : _g4_s34,
    _g4_s36 = (80u + sizeof(_g4_t_v130)) > _g4_s35 ? (80u + sizeof(_g4_t_v130)) : _g4_s35,
    _g4_s37 = (92u + sizeof(_g4_t_v131)) > _g4_s36 ? (92u + sizeof(_g4_t_v131)) : _g4_s36,
    _g4_s38 = (96u + sizeof(_g4_t_v132)) > _g4_s37 ? (96u + sizeof(_g4_t_v132)) : _g4_s37,
    _g4_s39 = (97u + sizeof(_g4_t_s2)) > _g4_s38 ? (97u + sizeof(_g4_t_s2)) : _g4_s38,
    _g4_s40 = (100u + sizeof(_g4_t_v134)) > _g4_s39 ? (100u + sizeof(_g4_t_v134)) : _g4_s39,
    _g4_s41 = (108u + sizeof(_g4_t_v135)) > _g4_s40 ? (108u + sizeof(_g4_t_v135)) : _g4_s40,
    _g4_s42 = (112u + sizeof(_g4_t_v136)) > _g4_s41 ? (112u + sizeof(_g4_t_v136)) : _g4_s41
  };
  alignas(16) uint8_t _g4_sf[_g4_s42];
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 12u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 12u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 12u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 12u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 12u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 12u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 12u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 12u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 16u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 16u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 16u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 16u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 24u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 24u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 28u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 28u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 28u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 28u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 28u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 32u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 32u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 36u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 36u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 36u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 36u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 36u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 40u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 40u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 40u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 40u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 40u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 40u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 40u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 48u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 64u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 80u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 92u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 96u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 97u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 100u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 108u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 112u);

  v132 = 1;
  s2[0] = 0;
  if ( s != nullptr )
  {
    v2 = strlen(s);
    v3 = (char *)(v2 + 1);
    gameswf::String::resize((gameswf::String::Self *)&v132, v2);
    v4 = (gameswf::Self *)s2;
    if ( v132 == -1 )
      v4 = v135;
    gameswf::Strcpy_s(v4, v3, (gameswf::Self *)s);
  }
  LOWORD(v136) = -1;
  BYTE2(v136) = 127;
  HIBYTE(v136) |= 1u;
  v114 = *((uint32_t *)self + 6);
  if ( v114 != 0 )
  {
    v5 = *((gameswf::Self **)self + 5);
    if ( *((uint8_t *)v5 + 2) == 0 )
    {
      if ( (*(uint16_t *)v5)-- == 1 )
        gameswf::free_internal(v5);
      v114 = 0;
      *((uint32_t *)self + 5) = 0;
      *((uint32_t *)self + 6) = 0;
    }
  }
  v6 = *(uint32_t *)(v114 + 48);
  if ( v6 == 0 )
  {
    v116 = v132;
    goto LABEL_185;
  }
  v116 = v132;
  if ( (uint8_t *)(v136 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( v132 == -1 )
    {
      v66 = (char *)v135;
      v67 = v134 - 1;
    }
    else
    {
      v66 = s2;
      v67 = v132 - 1;
    }
    v7 = 5381;
    v68 = 5381;
    if ( v67 > 0 )
    {
      do
      {
        --v67;
        v112 = 33 * v68;
        v69 = (uint8_t)v66[v67] + 32;
        if ( (uint8_t)(v66[v67] - 65) > 0x19u )
          v69 = (uint8_t)v66[v67];
        v68 = v112 ^ v69;
      }
      while ( v67 != 0 );
      v6 = *(uint32_t *)(v114 + 48);
      v68 = v68 << 9 >> 9;
      v7 = v68;
    }
    v136 = v68 & 0x7FFFFF | v136 & 0xFF800000;
  }
  else
  {
    v7 = (int)(v136 << 9) >> 9;
  }
  v121 = *(uint32_t *)(v6 + 4);
  v8 = v7 & v121;
  v9 = 16 * (v7 & v121);
  v10 = (int *)(v6 + v9 + 8);
  if ( *v10 == -2 || v8 != (*(uint32_t *)(v6 + v9 + 12) & v121) )
    goto LABEL_185;
  v11 = *(uint32_t *)(v6 + v9 + 12);
  if ( v132 == -1 )
  {
    while ( 1 )
    {
      if ( v11 == v7 )
      {
        v109 = v10[2];
        if ( (char *)v109 == &v132 )
          goto LABEL_21;
        v124 = (const char *)(v109 + 1);
        if ( *(uint8_t *)v109 == 0xFF )
          v124 = *(const char **)(v109 + 12);
        v96 = v6;
        v104 = v7;
        v24 = strcmp(v124, (const char *)v135);
        v6 = v96;
        v7 = v104;
        if ( v24 == 0 )
          goto LABEL_21;
        v8 = *v10;
        if ( *v10 == -1 )
          goto LABEL_47;
      }
      else
      {
        v8 = *v10;
        if ( *v10 == -1 )
          goto LABEL_47;
      }
      v10 = (int *)(v6 + 16 * v8 + 8);
      v11 = *(uint32_t *)(v6 + 16 * v8 + 12);
    }
  }
  while ( 1 )
  {
    if ( v11 == v7 )
    {
      v12 = v10[2];
      if ( (char *)v12 == &v132 )
        break;
      v13 = *(uint8_t *)v12 == 0xFF ? *(const char **)(v12 + 12) : (const char *)(v12 + 1);
      v95 = v6;
      v103 = v7;
      v14 = strcmp(v13, s2);
      v6 = v95;
      v7 = v103;
      if ( v14 == 0 )
        break;
    }
    v8 = *v10;
    if ( *v10 == -1 )
      goto LABEL_185;
    v10 = (int *)(v6 + 16 * v8 + 8);
    v11 = *(uint32_t *)(v6 + 16 * v8 + 12);
  }
LABEL_21:
  if ( v8 < 0 )
  {
LABEL_185:
    if ( v116 == -1 )
LABEL_47:
      v25 = v134 - 1;
    else
      v25 = v116 - 1;
    if ( v25 <= 13 )
    {
      v76 = s2;
      v77 = (char *)gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)(v114 + 52), 20);
      if ( v132 == -1 )
        v76 = (char *)v135;
      v34 = v77;
      if ( v77 != nullptr )
      {
        *v77 = 1;
        v77[1] = 0;
        if ( v76 != nullptr )
        {
          v100 = (uint32_t *)(v77);
          v78 = strlen(v76);
          gameswf::String::resize((gameswf::String::Self *)v100, v78);
          v79 = (char *)(v78 + 1);
          v80 = (gameswf::Self *)((char *)v100 + 1);
          if ( *(uint8_t *)v100 == 0xFF )
            v80 = (gameswf::Self *)v100[3];
          gameswf::Strcpy_s(v80, v79, (gameswf::Self *)v76);
          v34 = (char *)v100;
        }
        v81 = *((uint32_t *)v34 + 4) | 0x7FFFFF;
        *((uint32_t *)v34 + 4) = v81;
        v34[18] = BYTE2(v81) | 0x80;
        v34[19] = HIBYTE(v81) | 1;
      }
    }
    else
    {
      if ( v116 == -1 )
        v26 = v134 - 1;
      else
        v26 = v116 - 1;
      v27 = gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)(v114 + 52), v26 + 21);
      v28 = v27;
      if ( v27 != 0 )
      {
        *(uint8_t *)v27 = 1;
        *(uint8_t *)(v27 + 1) = 0;
        v29 = *(uint32_t *)(v27 + 16) | 0x7FFFFF;
        *(uint32_t *)(v28 + 16) = v29;
        *(uint8_t *)(v28 + 18) = BYTE2(v29) | 0x80;
        *(uint8_t *)(v28 + 19) = HIBYTE(v29) | 1;
      }
      v30 = s2;
      if ( v132 == -1 )
        v30 = (char *)v135;
      v31 = v28 + 20;
      v97 = (gameswf::String::Self *)v28;
      strcpy((char *)(v28 + 20), v30);
      v32 = v132 - 1;
      if ( v132 == -1 )
        v32 = v134 - 1;
      v33 = v32 + 1;
      gameswf::String::resize(v97, 0);
      v34 = (char *)v97;
      *((uint32_t *)v97 + 3) = v31;
      *(uint8_t *)v97 = -1;
      *((uint32_t *)v97 + 1) = v33;
      *((uint32_t *)v97 + 2) = v33;
      *((uint8_t *)v97 + 19) &= ~1u;
    }
    v130 = v34;
    v35 = *(uint32_t *)(v114 + 48);
    if ( v35 == 0 )
      goto LABEL_153;
    v118 = *((uint32_t *)v34 + 4);
    if ( (uint8_t *)(v118 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( *v34 == -1 )
      {
        v71 = *((char **)v34 + 3);
        v72 = *((uint32_t *)v34 + 1) - 1;
      }
      else
      {
        v71 = v34 + 1;
        v72 = *v34 - 1;
      }
      v125 = 5381;
      v73 = 5381;
      if ( v72 > 0 )
      {
        do
        {
          --v72;
          v74 = 33 * v73;
          v75 = (uint8_t)v71[v72] + 32;
          if ( (uint8_t)(v71[v72] - 65) > 0x19u )
            v75 = (uint8_t)v71[v72];
          v73 = v74 ^ v75;
        }
        while ( v72 != 0 );
        v73 = v73 << 9 >> 9;
        v125 = v73;
      }
      *((uint32_t *)v34 + 4) = v73 & 0x7FFFFF | v118 & 0xFF800000;
      v36 = v125;
      v35 = *(uint32_t *)(v114 + 48);
    }
    else
    {
      v125 = v118 << 9 >> 9;
      v36 = v125;
    }
    v37 = *(uint32_t *)(v35 + 4) & v36;
    v38 = (int *)(v35 + 16 * v37 + 8);
    if ( *v38 == -2 || v37 != (*(uint32_t *)(v35 + 16 * v37 + 12) & *(uint32_t *)(v35 + 4)) )
      goto LABEL_153;
    for ( i = *(uint32_t *)(v35 + 16 * v37 + 12); ; i = *(uint32_t *)(v35 + 16 * v37 + 12) )
    {
      if ( i == v125 )
      {
        v110 = v38[2];
        if ( v34 == (char *)v110 )
          break;
        v119 = *v34 == -1 ? *((const char **)v34 + 3) : v34 + 1;
        v40 = *(uint8_t *)v110 == 0xFF ? *(const char **)(v110 + 12) : (const char *)(v110 + 1);
        v98 = v34;
        v105 = v35;
        v41 = strcmp(v40, v119);
        v34 = v98;
        v35 = v105;
        if ( v41 == 0 )
          break;
      }
      v37 = *v38;
      if ( *v38 == -1 )
        goto LABEL_153;
      v38 = (int *)(v35 + 16 * v37 + 8);
    }
    if ( v37 >= 0 )
    {
LABEL_74:
      v42 = (char **)(v35 + 16 * v37 + 20);
    }
    else
    {
LABEL_153:
      v101 = v34;
      v131 = 0;
      gameswf::hash_gameswf_StringPointer_ga_128477::add(
        (int **)(v114 + 48),
        &v130,
        &v131);
      v34 = v101;
      v35 = *(uint32_t *)(v114 + 48);
      if ( v35 == 0 )
        goto LABEL_183;
      v120 = v130;
      v108 = *((uint32_t *)v130 + 4);
      if ( (uint8_t *)(v108 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( *v130 == -1 )
        {
          v91 = *((char **)v130 + 3);
          v90 = *((uint32_t *)v130 + 1) - 1;
        }
        else
        {
          v90 = *v130 - 1;
          v91 = v130 + 1;
        }
        v126 = 5381;
        v92 = 5381;
        if ( v90 > 0 )
        {
          do
          {
            --v90;
            v93 = 33 * v92;
            v94 = (uint8_t)v91[v90] + 32;
            if ( (uint8_t)(v91[v90] - 65) > 0x19u )
              v94 = (uint8_t)v91[v90];
            v92 = v93 ^ v94;
          }
          while ( v90 != 0 );
          v34 = v101;
          v92 = v92 << 9 >> 9;
          v126 = v92;
        }
        *((uint32_t *)v130 + 4) = v92 & 0x7FFFFF | v108 & 0xFF800000;
        v82 = v126;
        v35 = *(uint32_t *)(v114 + 48);
      }
      else
      {
        v126 = v108 << 9 >> 9;
        v82 = v126;
      }
      v37 = *(uint32_t *)(v35 + 4) & v82;
      v83 = (int *)(v35 + 16 * v37 + 8);
      if ( *v83 != -2 && v37 == (*(uint32_t *)(v35 + 16 * v37 + 12) & *(uint32_t *)(v35 + 4)) )
      {
        v115 = v34;
        v84 = *(uint32_t *)(v35 + 16 * v37 + 12);
        v85 = v126;
        while ( 1 )
        {
          if ( v84 == v85 )
          {
            v113 = v83[2];
            if ( v120 == (char *)v113 )
              break;
            v86 = *v120 == -1 ? *((const char **)v120 + 3) : v120 + 1;
            v127 = v86;
            v87 = *(uint8_t *)v113 == 0xFF ? *(const char **)(v113 + 12) : (const char *)(v113 + 1);
            v102 = v85;
            v106 = v35;
            v88 = strcmp(v87, v127);
            v85 = v102;
            v35 = v106;
            if ( v88 == 0 )
              break;
          }
          v37 = *v83;
          if ( *v83 == -1 )
          {
            v34 = v115;
            goto LABEL_183;
          }
          v83 = (int *)(v35 + 16 * v37 + 8);
          v84 = *(uint32_t *)(v35 + 16 * v37 + 12);
        }
        v34 = v115;
        if ( v37 >= 0 )
          goto LABEL_74;
        v89 = 16 * v37 + 8;
      }
      else
      {
LABEL_183:
        v89 = -8;
      }
      v42 = (char **)(v35 + v89 + 12);
    }
    *v42 = v34;
    v128 = (int)(uintptr_t)(v34);
    if ( v132 != -1 )
      goto LABEL_23;
    goto LABEL_76;
  }
  v128 = *(uint32_t *)(v6 + 16 * v8 + 20);
  if ( v116 == -1 )
  {
LABEL_76:
    if ( (v136 & 0x1000000) != 0 )
      gameswf::free_internal(v135);
  }
LABEL_23:
  v117 = (gameswf::Self **)((char *)self + 84);
  v15 = *((uint32_t *)self + 21);
  if ( v15 == 0 )
    goto LABEL_81;
  v107 = *(uint32_t *)(v128 + 16);
  if ( (uint8_t *)(v107 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *(uint8_t *)v128 == 0xFF )
    {
      v62 = *(uint32_t *)(v128 + 12);
      v61 = *(uint32_t *)(v128 + 4) - 1;
    }
    else
    {
      v61 = *(char *)v128 - 1;
      v62 = v128 + 1;
    }
    v16 = 5381;
    v63 = 5381;
    if ( v61 > 0 )
    {
      do
      {
        --v61;
        v64 = 33 * v63;
        v65 = *(uint8_t *)(v62 + v61) + 32;
        if ( (uint8_t)(*(uint8_t *)(v62 + v61) - 65) > 0x19u )
          v65 = *(uint8_t *)(v62 + v61);
        v63 = v64 ^ v65;
      }
      while ( v61 != 0 );
      v63 = v63 << 9 >> 9;
      v16 = v63;
    }
    *(uint32_t *)(v128 + 16) = v63 & 0x7FFFFF | v107 & 0xFF800000;
    v15 = *((uint32_t *)self + 21);
  }
  else
  {
    v16 = v107 << 9 >> 9;
  }
  v122 = *(uint32_t *)(v15 + 4);
  v17 = v16 & v122;
  v18 = 16 * (v16 & v122);
  v19 = (int *)(v15 + v18 + 8);
  if ( *v19 == -2 || v17 != (*(uint32_t *)(v15 + v18 + 12) & v122) )
    goto LABEL_81;
  v20 = *(uint32_t *)(v15 + v18 + 12);
  v123 = v16;
  while ( 1 )
  {
    if ( v20 == v123 )
    {
      v21 = v19[2];
      if ( v21 == v128 )
        goto LABEL_79;
      v22 = *(uint8_t *)v128 == 0xFF ? *(char **)(v128 + 12) : (char *)(v128 + 1);
      v23 = *(uint8_t *)v21 == 0xFF ? *(gameswf::String::Self **)(v21 + 12) : (gameswf::String::Self *)(v21 + 1);
      if ( gameswf::String::stricmp(v23, v22) == 0 )
        break;
      v15 = *((uint32_t *)self + 21);
    }
    v17 = *v19;
    if ( *v19 == -1 )
      goto LABEL_81;
    v19 = (int *)(v15 + 16 * v17 + 8);
    v20 = *(uint32_t *)(v15 + 16 * v17 + 12);
  }
  v15 = *((uint32_t *)self + 21);
LABEL_79:
  if ( v17 >= 0 )
  {
    gameswf::logError(
      (gameswf::Self *)"addFrameName(%d, '%s') -- frame name already assigned to frame %d; overriding\n",
      *((const char **)self + 14),
      s,
      *(uint32_t *)(v15 + 16 * v17 + 20));
    v15 = *((uint32_t *)self + 21);
  }
LABEL_81:
  v129[0] = *((uint32_t *)self + 14);
  if ( v15 == 0 )
    return gameswf::hash_gameswf_StringIPointer_i_a6af4c::add(
             v117,
             (char **)&v128,
             v129);
  v111 = *(uint32_t *)(v128 + 16);
  if ( (uint8_t *)(v111 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *(uint8_t *)v128 == 0xFF )
    {
      v57 = *(uint32_t *)(v128 + 12);
      v56 = *(uint32_t *)(v128 + 4) - 1;
    }
    else
    {
      v56 = *(char *)v128 - 1;
      v57 = v128 + 1;
    }
    v43 = 5381;
    v58 = 5381;
    if ( v56 > 0 )
    {
      do
      {
        --v56;
        v59 = 33 * v58;
        v60 = *(uint8_t *)(v57 + v56) + 32;
        if ( (uint8_t)(*(uint8_t *)(v57 + v56) - 65) > 0x19u )
          v60 = *(uint8_t *)(v57 + v56);
        v58 = v59 ^ v60;
      }
      while ( v56 != 0 );
      v58 = v58 << 9 >> 9;
      v43 = v58;
    }
    *(uint32_t *)(v128 + 16) = v58 & 0x7FFFFF | v111 & 0xFF800000;
    v15 = *((uint32_t *)self + 21);
  }
  else
  {
    v43 = v111 << 9 >> 9;
  }
  v44 = *(uint32_t *)(v15 + 4);
  v45 = v44 & v43;
  v46 = (int *)(v15 + 16 * (v44 & v43) + 8);
  if ( *v46 == -2 )
    return gameswf::hash_gameswf_StringIPointer_i_a6af4c::add(
             v117,
             (char **)&v128,
             v129);
  v47 = *(uint32_t *)(v15 + 16 * (v44 & v43) + 12);
  if ( v45 != (v47 & v44) )
    return gameswf::hash_gameswf_StringIPointer_i_a6af4c::add(
             v117,
             (char **)&v128,
             v129);
  v48 = v43;
  v49 = v45;
  v50 = v48;
  while ( 1 )
  {
    if ( v47 == v50 )
    {
      v51 = v46[2];
      if ( v51 == v128 )
        break;
      v52 = *(uint8_t *)v128 == 0xFF ? *(char **)(v128 + 12) : (char *)(v128 + 1);
      v53 = *(uint8_t *)v51 == 0xFF ? *(gameswf::String::Self **)(v51 + 12) : (gameswf::String::Self *)(v51 + 1);
      v99 = v50;
      v54 = gameswf::String::stricmp(v53, v52);
      v50 = v99;
      if ( v54 == 0 )
        break;
    }
    v49 = *v46;
    if ( *v46 == -1 )
      return gameswf::hash_gameswf_StringIPointer_i_a6af4c::add(
               v117,
               (char **)&v128,
               v129);
    v46 = (int *)((char *)*v117 + 16 * v49 + 8);
    v47 = v46[1];
  }
  if ( v49 < 0 )
    return gameswf::hash_gameswf_StringIPointer_i_a6af4c::add(
             v117,
             (char **)&v128,
             v129);
  result = v129[0];
  *(uint32_t *)(*((uint32_t *)self + 21) + 16 * v49 + 20) = v129[0];
  return result;
}


