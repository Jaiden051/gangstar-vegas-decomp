#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASNetConnection.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetConnection::connect  (binary VA: 0x1135a30)
// Original: gameswf::ASNetConnection::connect
// ----------------------------------------------------------------------------
int gameswf::ASNetConnection::connect(int a1)
{
  int v1;
  int v3;

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 )
    G4_VCALL<void>(v1, 8, 33);
  if ( *(uint32_t *)(a1 + 16) == 1
    && *(uint8_t *)(v3 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)) == 5
    && *(uint32_t *)(v3 + 4) == 0 )
  {
    return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 1);
  }
  else
  {
    return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 0);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetConnection::init  (binary VA: 0x11366d0)
// Original: gameswf::ASNetConnection::init
// ----------------------------------------------------------------------------
int gameswf::ASNetConnection::init(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 4);
  if ( result != 0 )
    return G4_VCALL<int>(result, 8, 33);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetConnection::Construct  (binary VA: 0x1136700)
// Original: gameswf::ASNetConnection::ASNetConnection
// ----------------------------------------------------------------------------
gameswf::ASNetConnection::Self * gameswf::ASNetConnection::Construct(gameswf::ASNetConnection::Self *self, gameswf::Player::Self *a2)
{
  gameswf::Self *v2;
  int StandardMemberID;
  typedef unsigned int _g4_t_v5[3];
  typedef char _g4_t_v6;
  typedef char _g4_t_v7;
  typedef gameswf::Self *_g4_t_v8;
  typedef int16_t _g4_t_v9;
  typedef char _g4_t_v10;
  typedef char _g4_t_v11;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (13u + sizeof(_g4_t_v7)) > _g4_s2 ? (13u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v8)) > _g4_s3 ? (24u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v9)) > _g4_s4 ? (28u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (30u + sizeof(_g4_t_v10)) > _g4_s5 ? (30u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (31u + sizeof(_g4_t_v11)) > _g4_s6 ? (31u + sizeof(_g4_t_v11)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 13u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 30u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 31u);

  gameswf::ASObject::ASObject(self, a2);
  LOWORD(v5[0]) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FEC8);
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v5, (int)(uintptr_t)(gameswf::ASNetConnection::connect));
  v6 = 1;
  v7 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v6, 7);
  v2 = (gameswf::Self *)&v7;
  if ( v6 == -1 )
    v2 = v8;
  gameswf::Strcpy_s(v2, byte_8, (gameswf::Self *)"connect");
  v9 = -1;
  v10 = 127;
  v11 |= 1u;
  StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v6);
  if ( StandardMemberID == -1
    || G4_VCALL<uint8_t>(self, 32, StandardMemberID, v5) == 0 )
  {
    G4_VCALL<void>(self, 48, &v6, v5);
    if ( v6 != -1 )
      return (gameswf::ASNetConnection::Self *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v5);
  }
  else if ( v6 != -1 )
  {
    return (gameswf::ASNetConnection::Self *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v5);
  }
  if ( (v11 & 1) == 0 )
    return (gameswf::ASNetConnection::Self *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v5);
  gameswf::free_internal(v8);
  return (gameswf::ASNetConnection::Self *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v5);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetConnection::newOp  (binary VA: 0x1136850)
// Original: gameswf::ASNetConnection::newOp
// ----------------------------------------------------------------------------
gameswf::ASNetConnection::Self * gameswf::ASNetConnection::newOp(gameswf::ASNetConnection::Self *self)
{
  gameswf::ASNetConnection::Self *v1;

  v1 = (gameswf::ASNetConnection::Self *)opNew(0x28u);
  gameswf::ASNetConnection::Construct(v1, (gameswf::Player::Self *)(self));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetConnection::ctor  (binary VA: 0x11368a0)
// Original: gameswf::ASNetConnection::ctor
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASNetConnection::ctor(int a1)
{
  int v1;
  gameswf::Player::Self *v2;
  gameswf::Self *v3;
  gameswf::ASNetConnection::Self *v4;

  v1 = *(uint32_t *)(a1 + 12);
  v2 = *(gameswf::Player::Self **)(v1 + 212);
  if ( v2 != nullptr )
  {
    v3 = *(gameswf::Self **)(v1 + 208);
    if ( *((uint8_t *)v3 + 2) == 0 )
    {
      if ( (*(uint16_t *)v3)-- == 1 )
        gameswf::free_internal(v3);
      *(uint32_t *)(v1 + 208) = 0;
      *(uint32_t *)(v1 + 212) = 0;
      v2 = nullptr;
    }
  }
  v4 = (gameswf::ASNetConnection::Self *)opNew(0x28u);
  gameswf::ASNetConnection::Construct(v4, v2);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v4);
  gameswf::ASNetConnection::init(a1);
  return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetConnection::is  (binary VA: 0x1136cc0)
// Original: gameswf::ASNetConnection::is
// ----------------------------------------------------------------------------
bool gameswf::ASNetConnection::is(gameswf::ASNetConnection::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 33 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetConnection::Destroy  (binary VA: 0x1136d00)
// Original: gameswf::ASNetConnection::~ASNetConnection
// ----------------------------------------------------------------------------
void gameswf::ASNetConnection::Destroy(gameswf::ASNetConnection::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FEC8);
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNetConnection::Destroy_ea1136d30  (binary VA: 0x1136d30)
// Original: gameswf::ASNetConnection::~ASNetConnection
// ----------------------------------------------------------------------------
void gameswf::ASNetConnection::Destroy_ea1136d30(gameswf::ASNetConnection::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FEC8);
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}


