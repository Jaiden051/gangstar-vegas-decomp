#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASKey.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASKey::isToggled  (binary VA: 0x112c220)
// Original: gameswf::ASKey::isToggled
// ----------------------------------------------------------------------------
int gameswf::ASKey::isToggled(gameswf::ASValue::Self **a1)
{
  return gameswf::ASValue::setBool(*a1, 0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASKey::removeListener  (binary VA: 0x112c250)
// Original: gameswf::ASKey::removeListener
// ----------------------------------------------------------------------------
int gameswf::ASKey::removeListener(int a1)
{
  int v1;
  gameswf::ASObject::Self *v2;
  int v3;
  gameswf::ASObject::Self *v5;

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0
    && (*(uint8_t (**)(uint32_t, char *))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), (char *)&word_12 + 1) == 0 )
  {
    v1 = 0;
  }
  if ( *(int *)(a1 + 16) <= 0 )
    return gameswf::logError(
             (gameswf::Self *)"key_remove_listener needs one argument (the listener object)\n",
             (const char *)v5);
  v2 = nullptr;
  v3 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v3 == 5 )
    v2 = *(gameswf::ASObject::Self **)(v3 + 4);
  return (int)(uintptr_t)(gameswf::Listener::remove((gameswf::Listener::Self *)(v1 + 72), v2));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASKey::addListener  (binary VA: 0x112c2f0)
// Original: gameswf::ASKey::addListener
// ----------------------------------------------------------------------------
int gameswf::ASKey::addListener(int a1)
{
  int v1;
  int v2;
  gameswf::ASObject::Self *v4;
  gameswf::ASObject::Self *v5;

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0
    && (*(uint8_t (**)(uint32_t, char *))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), (char *)&word_12 + 1) == 0 )
  {
    v1 = 0;
  }
  if ( *(int *)(a1 + 16) <= 0 )
    return gameswf::logError((gameswf::Self *)"key_add_listener needs one argument (the listener object)\n", (const char *)v5);
  v2 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v2 == 5 && (v4 = *(gameswf::ASObject::Self **)(v2 + 4)) != nullptr )
    { gameswf::Listener::add((gameswf::Listener::Self *)(v1 + 72), v4); return 0; }
  else
    return gameswf::logError((gameswf::Self *)"key_add_listener passed a NULL object; ignored\n", (const char *)v5);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASKey::Construct  (binary VA: 0x112c920)
// Original: gameswf::ASKey::ASKey
// ----------------------------------------------------------------------------
gameswf::ASKey::Self * gameswf::ASKey::Construct(gameswf::ASKey::Self *self, gameswf::Player::Self *a2)
{
  char *v2;
  unsigned int v3;
  gameswf::ASKey::Self *result;
  char *v5;

  gameswf::ASObject::ASObject(self, a2);
  v2 = (char *)self + 40;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FD48);
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  v3 = 28;
  if ( (((unsigned int)(uintptr_t)(self) + 40) & 1) != 0 )
  {
    v2 = (char *)self + 41;
    *((uint8_t *)self + 40) = 0;
    LOBYTE(v3) = 27;
    if ( (((unsigned int)(uintptr_t)(self) + 41) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)v2 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *(uint16_t *)v2 = 0;
  v3 -= 2;
  v2 += 2;
LABEL_3:
  result = nullptr;
  memset(v2, 0, 4 * (v3 >> 2));
  v5 = &v2[4 * (v3 >> 2)];
  if ( (v3 & 2) != 0 )
  {
    *(uint16_t *)v5 = 0;
    v5 += 2;
  }
  if ( (v3 & 1) != 0 )
    *v5 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASKey::isKeyDown  (binary VA: 0x112eaa0)
// Original: gameswf::ASKey::isKeyDown
// ----------------------------------------------------------------------------
bool gameswf::ASKey::isKeyDown(gameswf::ASKey::Self *self, int a2)
{
  bool result;

  result = false;
  if ( (unsigned int)a2 <= 0xDE )
    return (*((uint8_t *)self + (a2 >> 3) + 40) & (1 << (a2 & 7))) != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASKey::isDown  (binary VA: 0x112ead0)
// Original: gameswf::ASKey::isDown
// ----------------------------------------------------------------------------
int gameswf::ASKey::isDown(int a1)
{
  int v1;
  gameswf::ASKey::Self *v2;
  int v3;
  bool isKeyDown;
  const char *v6;

  if ( *(int *)(a1 + 16) <= 0 )
    return gameswf::logError((gameswf::Self *)"key_is_down needs one argument (the key code)\n", v6);
  v1 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v2 = *(gameswf::ASKey::Self **)(a1 + 4);
  v3 = v1;
  if ( v2 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v2 + 8))(*(uint32_t *)(a1 + 4), 19) == 0 )
    v2 = nullptr;
  isKeyDown = gameswf::ASKey::isKeyDown(v2, v3);
  return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, isKeyDown);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASKey::setKeyDown  (binary VA: 0x112eb80)
// Original: gameswf::ASKey::setKeyDown
// ----------------------------------------------------------------------------
gameswf::ASKey::Self * gameswf::ASKey::setKeyDown(gameswf::ASKey::Self *self, int a2)
{
  gameswf::ASKey::Self *result;
  typedef uint8_t _g4_t_v3[2];
  typedef int16_t _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (10u + sizeof(_g4_t_v4)) > _g4_s1 ? (10u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v5)) > _g4_s2 ? (12u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 10u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  result = self;
  if ( (unsigned int)a2 <= 0xDE )
  {
    *((uint32_t *)self + 17) = a2;
    v3[0] = 16;
    v3[1] = 0;
    v4 = 0;
    v5 = 0;
    *((uint8_t *)self + (a2 >> 3) + 40) |= 1 << (a2 & 7);
    return (gameswf::Listener::notify(
                               (gameswf::ASKey::Self *)((char *)self + 72),
                               (const gameswf::EventId::Self *)v3), (gameswf::ASKey::Self *)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASKey::setKeyUp  (binary VA: 0x112ec00)
// Original: gameswf::ASKey::setKeyUp
// ----------------------------------------------------------------------------
gameswf::ASKey::Self * gameswf::ASKey::setKeyUp(gameswf::ASKey::Self *self, int a2)
{
  gameswf::ASKey::Self *result;
  typedef uint8_t _g4_t_v3[2];
  typedef int16_t _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (10u + sizeof(_g4_t_v4)) > _g4_s1 ? (10u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v5)) > _g4_s2 ? (12u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 10u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  result = self;
  if ( (unsigned int)a2 <= 0xDE )
  {
    *((uint32_t *)self + 17) = a2;
    v3[0] = 17;
    v3[1] = 0;
    v4 = 0;
    *((uint8_t *)self + (a2 >> 3) + 40) &= ~(uint8_t)(1 << (a2 & 7));
    v5 = 0;
    return (gameswf::Listener::notify(
                               (gameswf::ASKey::Self *)((char *)self + 72),
                               (const gameswf::EventId::Self *)v3), (gameswf::ASKey::Self *)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASKey::getLastKeyPressed  (binary VA: 0x112ec80)
// Original: gameswf::ASKey::getLastKeyPressed
// ----------------------------------------------------------------------------
int gameswf::ASKey::getLastKeyPressed(gameswf::ASKey::Self *self)
{
  return *((uint32_t *)self + 17);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASKey::getCode  (binary VA: 0x112ec90)
// Original: gameswf::ASKey::getCode
// ----------------------------------------------------------------------------
int gameswf::ASKey::getCode(gameswf::ASValue::Self **a1)
{
  gameswf::ASKey::Self *v1;
  double LastKeyPressed; // xmm0_8

  v1 = (gameswf::ASKey::Self *)(a1[1]);
  if ( v1 != nullptr && (*(uint8_t (**)(gameswf::ASValue::Self *, int))(*(uint32_t *)v1 + 8))(a1[1], 19) == 0 )
    v1 = nullptr;
  LastKeyPressed = (double)gameswf::ASKey::getLastKeyPressed(v1);
  return gameswf::ASValue::setDouble(*a1, LastKeyPressed);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASKey::getAscii  (binary VA: 0x112ed00)
// Original: gameswf::ASKey::getAscii
// ----------------------------------------------------------------------------
int gameswf::ASKey::getAscii(gameswf::ASValue::Self **a1)
{
  gameswf::ASKey::Self *v1;
  gameswf::ASValue::Self *v2;
  int result;
  gameswf::ASValue::Self *v4;
  char s[14];

  v1 = (gameswf::ASKey::Self *)(a1[1]);
  if ( v1 != nullptr && (*(uint8_t (**)(gameswf::ASValue::Self *, int))(*(uint32_t *)v1 + 8))(a1[1], 19) == 0 )
    v1 = nullptr;
  v2 = *a1;
  gameswf::ASValue::dropRefs(*a1);
  *(uint8_t *)v2 = 0;
  result = gameswf::ASKey::getLastKeyPressed(v1);
  if ( result > 0 )
  {
    s[0] = result;
    v4 = *a1;
    s[1] = 0;
    return gameswf::ASValue::setString(v4, s);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASKey::is  (binary VA: 0x112ed90)
// Original: gameswf::ASKey::is
// ----------------------------------------------------------------------------
bool gameswf::ASKey::is(gameswf::ASKey::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 19 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASKey::Destroy  (binary VA: 0x112edb0)
// Original: gameswf::ASKey::~ASKey
// ----------------------------------------------------------------------------
void gameswf::ASKey::Destroy(gameswf::ASKey::Self *self)
{
  int v1;
  int i;
  gameswf::Self *v3;
  int v5;
  gameswf::Self *v6;
  int v7;
  uint32_t *v8;

  v1 = *((uint32_t *)self + 19);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FD48);
  if ( v1 <= 0 )
  {
    if ( v1 < 0 )
    {
      v7 = 8 * v1;
      do
      {
        v8 = (uint32_t *)(*((uint32_t *)self + 18) + v7);
        if ( v8 != nullptr )
        {
          *v8 = 0;
          v8[1] = 0;
        }
        v7 += 8;
        ++v1;
      }
      while ( v1 != 0 );
    }
  }
  else
  {
    for ( i = 0; i != v1; ++i )
    {
      v3 = *(gameswf::Self **)(*((uint32_t *)self + 18) + 8 * i);
      if ( v3 != nullptr && (*(uint16_t *)v3)-- == 1 )
        gameswf::free_internal(v3);
    }
  }
  v5 = *((uint32_t *)self + 21);
  *((uint32_t *)self + 19) = 0;
  if ( v5 == 0 )
  {
    v6 = *((gameswf::Self **)self + 18);
    *((uint32_t *)self + 20) = 0;
    if ( v6 != nullptr )
      gameswf::free_internal(v6);
    *((uint32_t *)self + 18) = 0;
  }
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASKey::Destroy_ea112ee80  (binary VA: 0x112ee80)
// Original: gameswf::ASKey::~ASKey
// ----------------------------------------------------------------------------
void gameswf::ASKey::Destroy_ea112ee80(gameswf::ASKey::Self *self)
{
  int v1;
  int i;
  gameswf::Self *v3;
  int v5;
  gameswf::Self *v6;
  int v7;
  uint32_t *v8;

  v1 = *((uint32_t *)self + 19);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FD48);
  if ( v1 <= 0 )
  {
    if ( v1 < 0 )
    {
      v7 = 8 * v1;
      do
      {
        v8 = (uint32_t *)(*((uint32_t *)self + 18) + v7);
        if ( v8 != nullptr )
        {
          *v8 = 0;
          v8[1] = 0;
        }
        v7 += 8;
        ++v1;
      }
      while ( v1 != 0 );
    }
  }
  else
  {
    for ( i = 0; i != v1; ++i )
    {
      v3 = *(gameswf::Self **)(*((uint32_t *)self + 18) + 8 * i);
      if ( v3 != nullptr && (*(uint16_t *)v3)-- == 1 )
        gameswf::free_internal(v3);
    }
  }
  v5 = *((uint32_t *)self + 21);
  *((uint32_t *)self + 19) = 0;
  if ( v5 == 0 )
  {
    v6 = *((gameswf::Self **)self + 18);
    *((uint32_t *)self + 20) = 0;
    if ( v6 != nullptr )
      gameswf::free_internal(v6);
    *((uint32_t *)self + 18) = 0;
  }
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}


