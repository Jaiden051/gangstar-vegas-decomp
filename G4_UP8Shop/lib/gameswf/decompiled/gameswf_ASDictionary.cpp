#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASDictionary.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASDictionary::init  (binary VA: 0x116ef50)
// Original: gameswf::ASDictionary::init
// ----------------------------------------------------------------------------
int gameswf::ASDictionary::init(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 4);
  if ( result != 0 )
    return G4_VCALL<int>(result, 8, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDictionary::newOp  (binary VA: 0x116ef80)
// Original: gameswf::ASDictionary::newOp
// ----------------------------------------------------------------------------
gameswf::ASObject::Self * gameswf::ASDictionary::newOp(gameswf::ASDictionary::Self *self)
{
  gameswf::ASObject::Self *v1;

  v1 = (gameswf::ASObject::Self *)opNew(0x28u);
  gameswf::ASObject::ASObject(v1, self);
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_20915C8);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDictionary::getIdentity  (binary VA: 0x116f060)
// Original: gameswf::ASDictionary::getIdentity
// ----------------------------------------------------------------------------
gameswf::String::Self * gameswf::ASDictionary::getIdentity(gameswf::ASDictionary::Self *self, const gameswf::ASValue::Self *a2, gameswf::Self **a3)
{
  gameswf::String::Self *v3;
  gameswf::String::Self *result;
  char v5;
  int v6;
  gameswf::Self *v7;
  char *v8;
  gameswf::Self *v9;
  int v10;
  char *v11;
  gameswf::Self *v12;
  int v13;
  char *v14;
  int v15;
  int v16;
  typedef int _g4_t_v17;
  typedef char *_g4_t_v18;
  typedef char _g4_t_s[12];
  typedef gameswf::Self *_g4_t_v20;
  typedef int16_t _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_s)) > _g4_s2 ? (16u + sizeof(_g4_t_s)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v20)) > _g4_s3 ? (28u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v21)) > _g4_s4 ? (32u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (34u + sizeof(_g4_t_v22)) > _g4_s5 ? (34u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (35u + sizeof(_g4_t_v23)) > _g4_s6 ? (35u + sizeof(_g4_t_v23)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 34u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 35u);

  v3 = (gameswf::String::Self *)a3;
  if ( *(uint8_t *)a2 == 5 )
  {
    sprintf(s, "0x%x", *((uint32_t *)a2 + 1));
    gameswf::String::resize((gameswf::String::Self *)a3, strlen(s));
    LOBYTE(v11) = *(uint8_t *)a3;
    if ( *(uint8_t *)a3 == 0xFF )
    {
      v11 = (char *)a3[1];
      v12 = a3[3];
    }
    else
    {
      v11 = (char *)(char)(uintptr_t)v11;
      v12 = (gameswf::Self *)((char *)a3 + 1);
    }
    result = (gameswf::String::Self *)gameswf::Strcpy_s(v12, v11, (gameswf::Self *)s);
    a3[4] = (gameswf::Self *)((unsigned int)(uintptr_t)(a3[4]) | 0x7FFFFF);
  }
  else
  {
    s[0] = 1;
    s[1] = 0;
    v21 = -1;
    v22 = 127;
    v23 |= 1u;
    result = gameswf::ASValue::toString(a2, (gameswf::Self **)s);
    v18 = (char *)result;
    if ( a3 != (gameswf::Self **)result )
    {
      v5 = *(uint8_t *)result;
      if ( v5 == -1 )
        v6 = *((uint32_t *)v18 + 1) - 1;
      else
        v6 = v5 - 1;
      gameswf::String::resize((gameswf::String::Self *)a3, v6);
      v7 = (gameswf::Self *)(v18 + 1);
      if ( *v18 == -1 )
        v7 = *((gameswf::Self **)v18 + 3);
      LOBYTE(v8) = *(uint8_t *)a3;
      if ( *(uint8_t *)a3 == 0xFF )
      {
        v8 = (char *)a3[1];
        v9 = a3[3];
      }
      else
      {
        v8 = (char *)(char)(uintptr_t)v8;
        v9 = (gameswf::Self *)((char *)a3 + 1);
      }
      gameswf::Strcpy_s(v9, v8, v7);
      v17 = *((uint32_t *)v18 + 4);
      if ( (uint8_t *)(v17 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( *v18 == -1 )
        {
          v14 = *((char **)v18 + 3);
          v13 = *((uint32_t *)v18 + 1) - 1;
        }
        else
        {
          v13 = *v18 - 1;
          v14 = v18 + 1;
        }
        v10 = 5381;
        if ( v13 > 0 )
        {
          do
          {
            --v13;
            v15 = 33 * v10;
            v16 = (uint8_t)v14[v13] + 32;
            if ( (uint8_t)(v14[v13] - 65) > 0x19u )
              v16 = (uint8_t)v14[v13];
            v10 = v15 ^ v16;
          }
          while ( v13 != 0 );
          v3 = (gameswf::String::Self *)a3;
          v10 = v10 << 9 >> 9;
        }
        *((uint32_t *)v18 + 4) = v10 & 0x7FFFFF | v17 & 0xFF800000;
      }
      else
      {
        v10 = v17 << 9 >> 9;
      }
      result = (gameswf::String::Self *)(v10 & 0x7FFFFF);
      *((uint32_t *)v3 + 4) = (unsigned int)(uintptr_t)(result) | *((uint32_t *)v3 + 4) & 0xFF800000;
    }
    if ( s[0] == -1 && (v23 & 1) != 0 )
      return (gameswf::String::Self *)gameswf::free_internal(v20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDictionary::deleteMemberByKey  (binary VA: 0x116f2f0)
// Original: gameswf::ASDictionary::deleteMemberByKey
// ----------------------------------------------------------------------------
int gameswf::ASDictionary::deleteMemberByKey(gameswf::ASDictionary::Self *self, const gameswf::ASValue::Self *a2, int a3, char a4, int a5, int a6, gameswf::Self *a7, int a8)
{
  int result;
  uint8_t v19;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef gameswf::Self *_g4_t_v15[4];
  typedef int16_t _g4_t_v16;
  typedef int16_t _g4_t_v17;
  typedef int _g4_t_v18;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v13)) > _g4_s4 ? (24u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v14)) > _g4_s5 ? (28u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v15)) > _g4_s6 ? (32u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v16)) > _g4_s7 ? (48u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (50u + sizeof(_g4_t_v17)) > _g4_s8 ? (50u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v18)) > _g4_s9 ? (68u + sizeof(_g4_t_v18)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 50u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 68u);

  v16 = -1;
  HIBYTE(v17) = ((uint16_t)(v17 | 0x7F) >> 8) | 1;
  LOBYTE(v17) = 127;
  LOWORD(v15[0]) = 1;
  gameswf::ASDictionary::getIdentity(self, a2, v15);
  result = G4_VCALL<int>(self, 40, v15, v9, v10, v11, v12, v13, v14);
  if ( a4 == -1 && (a8 & 0x1000000) != 0 )
  {
    v19 = result;
    v18 = a6;
    gameswf::free_internal(a7);
    return v19;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDictionary::setMemberByKey  (binary VA: 0x116f3c0)
// Original: gameswf::ASDictionary::setMemberByKey
// ----------------------------------------------------------------------------
int gameswf::ASDictionary::setMemberByKey(gameswf::ASDictionary::Self *self, const gameswf::ASValue::Self *a2, const gameswf::ASValue::Self *a3)
{
  int StandardMemberID;
  char v4;
  int result;
  typedef uint8_t _g4_t_v6;
  typedef gameswf::Self *_g4_t_v7[4];
  typedef int16_t _g4_t_v8;
  typedef int16_t _g4_t_v9;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (34u + sizeof(_g4_t_v9)) > _g4_s3 ? (34u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 34u);

  v8 = -1;
  HIBYTE(v9) = ((uint16_t)(v9 | 0x7F) >> 8) | 1;
  LOBYTE(v9) = 127;
  LOWORD(v7[0]) = 1;
  gameswf::ASDictionary::getIdentity(self, a2, v7);
  StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)v7);
  if ( StandardMemberID == -1
    || (v4 = G4_VCALL<int>(self, 32, StandardMemberID, a3),
        result = 1,
        v4 == 0) )
  {
    result = G4_VCALL<int>(self, 48, v7, a3);
    if ( LOBYTE(v7[0]) != 0xFF )
      return result;
  }
  else if ( LOBYTE(v7[0]) != 0xFF )
  {
    return result;
  }
  if ( (v9 & 0x100) != 0 )
  {
    v6 = result;
    gameswf::free_internal(v7[3]);
    return v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDictionary::getMemberByKey  (binary VA: 0x116f4c0)
// Original: gameswf::ASDictionary::getMemberByKey
// ----------------------------------------------------------------------------
int gameswf::ASDictionary::getMemberByKey(gameswf::ASDictionary::Self *self, const gameswf::ASValue::Self *a2, gameswf::ASValue::Self *a3)
{
  int StandardMemberID;
  char v4;
  int result;
  typedef uint8_t _g4_t_v6;
  typedef gameswf::Self *_g4_t_v7[4];
  typedef int16_t _g4_t_v8;
  typedef int16_t _g4_t_v9;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (34u + sizeof(_g4_t_v9)) > _g4_s3 ? (34u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 34u);

  v8 = -1;
  HIBYTE(v9) = ((uint16_t)(v9 | 0x7F) >> 8) | 1;
  LOBYTE(v9) = 127;
  LOWORD(v7[0]) = 1;
  gameswf::ASDictionary::getIdentity(self, a2, v7);
  StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)v7);
  if ( StandardMemberID == -1
    || (v4 = G4_VCALL<int>(self, 36, StandardMemberID, a3),
        result = 1,
        v4 == 0) )
  {
    result = G4_VCALL<int>(self, 44, v7, a3);
    if ( LOBYTE(v7[0]) != 0xFF )
      return result;
  }
  else if ( LOBYTE(v7[0]) != 0xFF )
  {
    return result;
  }
  if ( (v9 & 0x100) != 0 )
  {
    v6 = result;
    gameswf::free_internal(v7[3]);
    return v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDictionary::Destroy  (binary VA: 0x1170130)
// Original: gameswf::ASDictionary::~ASDictionary
// ----------------------------------------------------------------------------
void gameswf::ASDictionary::Destroy(gameswf::ASDictionary::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20915C8);
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDictionary::Destroy_ea1170160  (binary VA: 0x1170160)
// Original: gameswf::ASDictionary::~ASDictionary
// ----------------------------------------------------------------------------
void gameswf::ASDictionary::Destroy_ea1170160(gameswf::ASDictionary::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20915C8);
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}


