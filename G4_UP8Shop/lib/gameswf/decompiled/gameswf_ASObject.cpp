#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASObject.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::toBool  (binary VA: 0x1079760)
// Original: gameswf::ASObject::toBool
// ----------------------------------------------------------------------------
int gameswf::ASObject::toBool()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::typeof  (binary VA: 0x1079770)
// Original: gameswf::ASObject::_typeof
// ----------------------------------------------------------------------------
const char * gameswf::ASObject::typeof()
{
  return "object";
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::construct  (binary VA: 0x1079790)
// Original: gameswf::ASObject::construct
// ----------------------------------------------------------------------------
void gameswf::ASObject::construct()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::setStandardMember  (binary VA: 0x10797a0)
// Original: gameswf::ASObject::setStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASObject::setStandardMember()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::getStandardMember  (binary VA: 0x10797b0)
// Original: gameswf::ASObject::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASObject::getStandardMember()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::getEnvironment  (binary VA: 0x10797c0)
// Original: gameswf::ASObject::getEnvironment
// ----------------------------------------------------------------------------
int gameswf::ASObject::getEnvironment()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::advance  (binary VA: 0x10797d0)
// Original: gameswf::ASObject::advance
// ----------------------------------------------------------------------------
void gameswf::ASObject::advance()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::notifySetMember  (binary VA: 0x10797e0)
// Original: gameswf::ASObject::notifySetMember
// ----------------------------------------------------------------------------
void gameswf::ASObject::notifySetMember()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::getMember  (binary VA: 0x1094920)
// Original: gameswf::ASObject::getMember
// ----------------------------------------------------------------------------
int gameswf::ASObject::getMember(gameswf::ASObject::Self *self, const gameswf::StringI::Self *a2, gameswf::ASValue::Self *a3)
{
  int StandardMemberID;

  StandardMemberID = gameswf::getStandardMemberID(a2);
  if ( StandardMemberID != -1
    && G4_VCALL<uint8_t>(self, 36, StandardMemberID, a3) != 0 )
  {
    return 1;
  }
  else
  {
    return G4_VCALL<int>(self, 44, a2, a3);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::toString  (binary VA: 0x10b1a30)
// Original: gameswf::ASObject::toString
// ----------------------------------------------------------------------------
const char * gameswf::ASObject::toString(gameswf::ASObject::Self *self)
{
  int v1;
  const char *result;
  int v3;

  v1 = *((uint32_t *)self + 6);
  result = "[object Object]";
  if ( v1 != 0 )
  {
    if ( *(uint8_t *)(v1 + 40) == 0xFF )
      v3 = *(uint32_t *)(v1 + 52);
    else
      v3 = v1 + 41;
    sprintf(((char *)(&byte_20E5280)), "[object %s]", v3);
    return (const char *)(uintptr_t)(((char *)(&byte_20E5280)));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::toNumber  (binary VA: 0x10b1aa0)
// Original: gameswf::ASObject::toNumber
// ----------------------------------------------------------------------------
long double gameswf::ASObject::toNumber(gameswf::ASObject::Self *self)
{
  double *v1;
  typedef const char *_g4_t_v3;
  typedef double _g4_t_v4[2];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v4)) > _g4_s1 ? (24u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 24u);

  v1 = (double *)G4_VCALL<int>(self, 12);
  v4[0] = 0.0;
  if ( (uint8_t)gameswf::ASString::toNumber((gameswf::ASString::Self *)v4, v1, v3) != 0 )
    return v4[0];
  else
    return gameswf::getNAN();
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::dump  (binary VA: 0x10b1b00)
// Original: gameswf::ASObject::dump
// ----------------------------------------------------------------------------
int gameswf::ASObject::dump(gameswf::ASObject::Self *self, char a2, int a3, int a4, gameswf::Self *a5, int a6)
{
  int result;
  int savedregs;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint8_t _g4_t_v9[19];
  typedef char _g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v9)) > _g4_s2 ? (16u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (35u + sizeof(_g4_t_v10)) > _g4_s3 ? (35u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 35u);

  v9[0] = 1;
  v9[1] = 0;
  *(uint16_t *)&v9[16] = -1;
  v9[18] = 127;
  v10 |= 1u;
  result = G4_VCALL<int>(self, 84, v9, v7, v8);
  if ( a2 == -1 && (a6 & 0x1000000) != 0 )
  {
    savedregs = a4;
    return gameswf::free_internal(a5);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::deleteMemberByKey  (binary VA: 0x10b1b90)
// Original: gameswf::ASObject::deleteMemberByKey
// ----------------------------------------------------------------------------
int gameswf::ASObject::deleteMemberByKey(int a1, gameswf::ASObject::Self *self, const gameswf::ASValue::Self *a3, int a4, char a5, int a6, int a7, gameswf::Self *a8, int a9)
{
  int v9;
  int (*v10)(gameswf::ASObject::Self *, int, int, int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, int, int, int, int);
  int v11;
  int result;
  uint8_t v25;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t _g4_t_v19[4];
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v16)) > _g4_s3 ? (20u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v18)) > _g4_s5 ? (28u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v19)) > _g4_s6 ? (32u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v20)) > _g4_s7 ? (48u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v21)) > _g4_s8 ? (52u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v22)) > _g4_s9 ? (56u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v23)) > _g4_s10 ? (60u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v24)) > _g4_s11 ? (68u + sizeof(_g4_t_v24)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 68u);

  v24 = a1;
  LOWORD(v20) = -1;
  BYTE2(v20) = 127;
  HIBYTE(v20) |= 1u;
  v9 = *(uint32_t *)self;
  LOWORD(v19[0]) = 1;
  v10 = *(int (**)(gameswf::ASObject::Self *, int, int, int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, int, int, int, int))(v9 + 40);
  v11 = (int)(uintptr_t)(gameswf::ASValue::toString(a3, (gameswf::String::Self *)v19));
  result = v10(self, v11, v13, v14, v15, v16, v17, v18, v19[0], v19[1], v19[2], v19[3], v20, v21, v22, v23);
  if ( a5 == -1 && (a9 & 0x1000000) != 0 )
  {
    v25 = result;
    v24 = a7;
    gameswf::free_internal(a8);
    return v25;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::setMemberByKey  (binary VA: 0x10b1c50)
// Original: gameswf::ASObject::setMemberByKey
// ----------------------------------------------------------------------------
int gameswf::ASObject::setMemberByKey(gameswf::ASObject::Self *self, const gameswf::ASValue::Self *a2, const gameswf::ASValue::Self *a3)
{
  gameswf::Self *v3;
  int StandardMemberID;
  char v5;
  int result;
  typedef uint8_t _g4_t_v7;
  typedef uint8_t _g4_t_v8[12];
  typedef gameswf::Self *_g4_t_v9;
  typedef int16_t _g4_t_v10;
  typedef int16_t _g4_t_v11;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v9)) > _g4_s2 ? (28u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v10)) > _g4_s3 ? (32u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (34u + sizeof(_g4_t_v11)) > _g4_s4 ? (34u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 34u);

  v10 = -1;
  v8[0] = 1;
  HIBYTE(v11) = ((uint16_t)(v11 | 0x7F) >> 8) | 1;
  LOBYTE(v11) = 127;
  v8[1] = 0;
  v3 = (gameswf::Self *)gameswf::ASValue::toString(a2, (gameswf::String::Self *)v8);
  StandardMemberID = gameswf::getStandardMemberID(v3);
  if ( StandardMemberID == -1
    || (v5 = G4_VCALL<int>(self, 32, StandardMemberID, a3),
        result = 1,
        v5 == 0) )
  {
    result = G4_VCALL<int>(self, 48, v3, a3);
    if ( v8[0] != 0xFF )
      return result;
  }
  else if ( v8[0] != 0xFF )
  {
    return result;
  }
  if ( (v11 & 0x100) != 0 )
  {
    v7 = result;
    gameswf::free_internal(v9);
    return v7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::getMemberByKey  (binary VA: 0x10b1d50)
// Original: gameswf::ASObject::getMemberByKey
// ----------------------------------------------------------------------------
int gameswf::ASObject::getMemberByKey(gameswf::ASObject::Self *self, const gameswf::ASValue::Self *a2, gameswf::ASValue::Self *a3)
{
  gameswf::Self *v3;
  int StandardMemberID;
  char v5;
  int result;
  typedef uint8_t _g4_t_v7;
  typedef uint8_t _g4_t_v8[12];
  typedef gameswf::Self *_g4_t_v9;
  typedef int16_t _g4_t_v10;
  typedef int16_t _g4_t_v11;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v9)) > _g4_s2 ? (28u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v10)) > _g4_s3 ? (32u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (34u + sizeof(_g4_t_v11)) > _g4_s4 ? (34u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 34u);

  v10 = -1;
  v8[0] = 1;
  HIBYTE(v11) = ((uint16_t)(v11 | 0x7F) >> 8) | 1;
  LOBYTE(v11) = 127;
  v8[1] = 0;
  v3 = (gameswf::Self *)gameswf::ASValue::toString(a2, (gameswf::String::Self *)v8);
  StandardMemberID = gameswf::getStandardMemberID(v3);
  if ( StandardMemberID == -1
    || (v5 = G4_VCALL<int>(self, 36, StandardMemberID, a3),
        result = 1,
        v5 == 0) )
  {
    result = G4_VCALL<int>(self, 44, v3, a3);
    if ( v8[0] != 0xFF )
      return result;
  }
  else if ( v8[0] != 0xFF )
  {
    return result;
  }
  if ( (v11 & 0x100) != 0 )
  {
    v7 = result;
    gameswf::free_internal(v9);
    return v7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::enumerate  (binary VA: 0x10b1e50)
// Original: gameswf::ASObject::enumerate
// ----------------------------------------------------------------------------
void gameswf::ASObject::enumerate(gameswf::ASObject::Self *self, gameswf::ASEnvironment::Self *a2)
{
  int v2;
  int v3;
  int v4;
  char *v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  gameswf::String::Self *v20;
  char *v21;

  v2 = *((uint32_t *)self + 3);
  if ( v2 != 0 )
  {
    v3 = *(uint32_t *)(v2 + 4);
    v4 = 0;
    if ( v3 >= 0 && *(uint32_t *)(v2 + 8) == -2 )
    {
      v17 = 32;
      do
      {
        if ( ++v4 > v3 )
          break;
        v18 = *(uint32_t *)(v2 + v17);
        v17 += 24;
      }
      while ( v18 == -2 );
    }
    v21 = (char *)self + 12;
    if ( self != (gameswf::ASObject::Self *)-12 )
    {
LABEL_12:
      v10 = 24 * v4 + 8;
      v7 = *(uint32_t *)v21;
      while ( v7 != 0 )
      {
        v8 = *(uint32_t *)(v7 + 4);
        if ( v8 < v4 )
          break;
        if ( (*(uint8_t *)(v7 + v10 + 13) & 1) == 0 )
        {
          v20 = *(gameswf::String::Self **)(v7 + v10 + 8);
          v11 = *((uint32_t *)a2 + 1);
          v19 = *((uint32_t *)a2 + 2);
          v12 = v11 + 1;
          if ( v11 + 1 <= v19 || *((uint32_t *)a2 + 3) != 0 )
          {
            v5 = *(char **)a2;
          }
          else
          {
            v13 = v12 + (v12 >> 1);
            *((uint32_t *)a2 + 2) = v13;
            if ( v13 != 0 )
            {
              v5 = *(uint32_t *)a2 != 0
                 ? (char *)gameswf::realloc_internal(*(gameswf::Self **)a2, 12 * v13, 12 * v19)
                 : (char *)gameswf::malloc_internal(12 * v13);
              *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v5);
              v11 = *((uint32_t *)a2 + 1);
            }
            else
            {
              if ( *(uint32_t *)a2 != 0 )
              {
                gameswf::free_internal(*(gameswf::Self **)a2);
                v11 = *((uint32_t *)a2 + 1);
              }
              v5 = nullptr;
              *(uint32_t *)a2 = 0;
            }
          }
          v6 = &v5[12 * v11];
          if ( v6 != nullptr )
          {
            *v6 = 0;
            v6[1] = 0;
            *((uint32_t *)v6 + 1) = 0;
            gameswf::ASValue::setString((gameswf::ASValue::Self *)v6, v20);
          }
          *((uint32_t *)a2 + 1) = v12;
          v7 = *(uint32_t *)v21;
          v8 = *(uint32_t *)(*(uint32_t *)v21 + 4);
          if ( v8 < v4 )
            continue;
        }
        v9 = v4 + 1;
        if ( v4 + 1 <= v8 && *(uint32_t *)(v7 + 24 * v9 + 8) == -2 )
        {
          v14 = v4 + 2;
          v15 = 24 * v14 + 8;
          while ( 1 )
          {
            v9 = v14;
            if ( v14 > v8 )
              break;
            v16 = *(uint32_t *)(v7 + v15);
            ++v14;
            v15 += 24;
            if ( v16 != -2 )
            {
              v4 = v9;
              goto LABEL_12;
            }
          }
        }
        v4 = v9;
        goto LABEL_12;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::clearRefs  (binary VA: 0x10b2060)
// Original: gameswf::ASObject::clearRefs
// ----------------------------------------------------------------------------
int gameswf::ASObject::clearRefs(gameswf::ASObject::Self *self, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  gameswf::ASValue::Self *v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  typedef int _g4_t_v20;
  typedef uint8_t *_g4_t_v21;
  typedef char *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v21)) > _g4_s1 ? (20u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v22)) > _g4_s2 ? (24u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v23)) > _g4_s3 ? (24u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v24)) > _g4_s4 ? (28u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v25)) > _g4_s5 ? (32u + sizeof(_g4_t_v25)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);

  v25[0] = 0;
  v25[1] = 0;
  v2 = *((uint32_t *)self + 3);
  if ( v2 != 0 )
  {
    v3 = *(uint32_t *)(v2 + 4);
    v4 = 0;
    if ( v3 >= 0 && *(uint32_t *)(v2 + 8) == -2 )
    {
      v16 = 32;
      v17 = 1;
      do
      {
        v4 = v17;
        if ( v17 > v3 )
          break;
        ++v17;
        v18 = *(uint32_t *)(*((uint32_t *)self + 3) + v16);
        v16 += 24;
      }
      while ( v18 == -2 );
    }
    v22 = (char *)self + 12;
    if ( self != (gameswf::ASObject::Self *)-12 )
    {
LABEL_21:
      v20 = v4;
      v13 = *(uint32_t *)v22;
      v24 = 24 * v4 + 8;
      while ( v13 != 0 )
      {
        v14 = *(uint32_t *)(v13 + 4);
        if ( v14 < v20 )
          break;
        v15 = v13 + v24;
        if ( *(uint8_t *)(v13 + v24 + 12) == 5 && (v9 = *(uint32_t *)(v15 + 16)) != 0 )
        {
          if ( *(uint32_t *)(v9 + 20) >= a2 )
            goto LABEL_15;
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v15 + 12));
          *(uint8_t *)(v15 + 12) = 0;
          v13 = *(uint32_t *)v22;
          v14 = *(uint32_t *)(*(uint32_t *)v22 + 4);
          if ( v14 >= v20 )
            goto LABEL_15;
        }
        else
        {
          if ( gameswf::ASValue::toProperty((gameswf::ASValue::Self *)(v15 + 12)) != 0
            && gameswf::ASValue::getPropertyTarget((gameswf::ASValue::Self *)(*(uint32_t *)v22 + v24 + 12)) != 0
            && a2 > *(uint32_t *)(gameswf::ASValue::getPropertyTarget((gameswf::ASValue::Self *)(*(uint32_t *)v22 + v24 + 12)) + 20) )
          {
            gameswf::ASValue::setPropertyTarget((gameswf::ASValue::Self *)(*(uint32_t *)v22 + v24 + 12), nullptr);
          }
          v13 = *(uint32_t *)v22;
          v14 = *(uint32_t *)(*(uint32_t *)v22 + 4);
          if ( v14 >= v20 )
          {
LABEL_15:
            v10 = v20 + 1;
            if ( v14 >= v20 + 1 && *(uint32_t *)(v13 + 24 * v10 + 8) == -2 )
            {
              v11 = 8 * (3 * v20 + 6) + 8;
              do
              {
                if ( v14 < ++v10 )
                  break;
                v12 = *(uint32_t *)(v13 + v11);
                v11 += 24;
              }
              while ( v12 == -2 );
            }
            v4 = v10;
            goto LABEL_21;
          }
        }
      }
    }
  }
  v5 = 0;
  v6 = 0;
  if ( (int)(*((uint32_t *)self + 9) << 8) >> 8 > 0 )
  {
    v23 = (int)(*((uint32_t *)self + 9) << 8) >> 8;
    do
    {
      v7 = (gameswf::ASValue::Self *)(*((uint32_t *)self + 8) + v5);
      if ( *(uint8_t *)v7 == 5 && (v19 = *((uint32_t *)v7 + 1)) != 0 )
      {
        if ( a2 > *(uint32_t *)(v19 + 20) )
        {
          v21 = (uint8_t *)(*((uint32_t *)self + 8) + v5);
          gameswf::ASValue::dropRefs(v7);
          *v21 = 0;
LABEL_41:
          v23 = (int)(*((uint32_t *)self + 9) << 8) >> 8;
        }
      }
      else
      {
        if ( gameswf::ASValue::toProperty(v7) != 0
          && gameswf::ASValue::getPropertyTarget((gameswf::ASValue::Self *)(*((uint32_t *)self + 8) + v5)) != 0
          && a2 > *(uint32_t *)(gameswf::ASValue::getPropertyTarget((gameswf::ASValue::Self *)(*((uint32_t *)self + 8) + v5)) + 20) )
        {
          gameswf::ASValue::setPropertyTarget((gameswf::ASValue::Self *)(*((uint32_t *)self + 8) + v5), nullptr);
          goto LABEL_41;
        }
        v23 = (int)(*((uint32_t *)self + 9) << 8) >> 8;
      }
      ++v6;
      v5 += 12;
    }
    while ( v6 < v23 );
  }
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v25);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::copyTo  (binary VA: 0x10b2310)
// Original: gameswf::ASObject::copyTo
// ----------------------------------------------------------------------------
gameswf::ASObject::Self * gameswf::ASObject::copyTo(gameswf::ASObject::Self *self, gameswf::ASObject::Self *a2)
{
  gameswf::ASObject::Self *result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  gameswf::Self *v11;
  int StandardMemberID;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char *v18;

  result = a2;
  if ( a2 != nullptr )
  {
    v3 = *((uint32_t *)self + 3);
    if ( v3 != 0 )
    {
      result = *(gameswf::ASObject::Self **)(v3 + 4);
      v4 = 0;
      if ( (int)(uintptr_t)(result) >= 0 && *(uint32_t *)(v3 + 8) == -2 )
      {
        v14 = 32;
        v15 = 1;
        do
        {
          v4 = v15;
          if ( v15 > (int)(uintptr_t)(result) )
            break;
          ++v15;
          v16 = *(uint32_t *)(*((uint32_t *)self + 3) + v14);
          v14 += 24;
        }
        while ( v16 == -2 );
      }
      v18 = (char *)self + 12;
      if ( self != (gameswf::ASObject::Self *)-12 )
      {
        while ( 1 )
        {
LABEL_10:
          result = (gameswf::ASObject::Self *)(24 * v4 + 8);
          v9 = *(uint32_t *)v18;
          do
          {
            if ( v9 == 0 || *(uint32_t *)(v9 + 4) < v4 )
              return result;
            v10 = 24 * v4 + 8 + v9;
            v11 = *(gameswf::Self **)(v10 + 8);
            v17 = v10 + 12;
            StandardMemberID = gameswf::getStandardMemberID(v11);
            if ( StandardMemberID == -1
              || (uint8_t)(uintptr_t)(result = (gameswf::ASObject::Self *)G4_VCALL<int>(a2, 32, StandardMemberID, v17)) == 0 )
            {
              result = (gameswf::ASObject::Self *)G4_VCALL<int>(a2, 48, v11, v17);
            }
            v9 = *(uint32_t *)v18;
            v13 = *(uint32_t *)(*(uint32_t *)v18 + 4);
          }
          while ( v13 < v4 );
          v7 = v4 + 1;
          if ( v13 < v4 + 1 )
            goto LABEL_9;
          if ( *(uint32_t *)(v9 + 24 * v7 + 8) == -2 )
            break;
          ++v4;
        }
        v5 = v4 + 2;
        v6 = 24 * v5 + 8;
        do
        {
          v7 = v5;
          if ( v13 < v5 )
            break;
          v8 = *(uint32_t *)(v9 + v6);
          ++v5;
          v6 += 24;
        }
        while ( v8 == -2 );
LABEL_9:
        v4 = v7;
        goto LABEL_10;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::dump  (binary VA: 0x10b2460)
// Original: gameswf::ASObject::dump
// ----------------------------------------------------------------------------
int gameswf::ASObject::dump(gameswf::ASObject::Self *self, gameswf::String::Self *a2)
{
  gameswf::String::Self *v2;
  int v3;
  char *v4;
  char *v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  char *v10;
  int v11;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  gameswf::ASValue::Self *v18;
  int v19;
  int v20;
  int v21;
  char *v22;
  int v23;
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
  char *v38;
  int v39;
  int v40;
  gameswf::String::Self *v41;
  int v42;
  char *v43;
  int v44;
  int v45;
  gameswf::String::Self *v46;
  int v47;
  char *v48;
  int v49;
  int v50;
  int v51;
  int PropertyTarget;
  int v53;

  v2 = a2;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    v3 = *((uint32_t *)a2 + 1) - 1;
  }
  else
  {
    v2 = a2;
    v3 = *(char *)a2 - 1;
  }
  gameswf::String::resize(v2, v3 + 2);
  LOBYTE(v4) = *(uint8_t *)a2;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    v4 = *((char **)a2 + 1);
    v5 = *((char **)a2 + 3);
  }
  else
  {
    v4 = (char *)(char)(uintptr_t)v4;
    v5 = (char *)a2 + 1;
  }
  gameswf::Strcpy_s((gameswf::Self *)&v5[v3], v4, (gameswf::Self *)"  ");
  v6 = (char *)a2 + 1;
  *((uint32_t *)a2 + 4) |= 0x7FFFFFu;
  if ( *(uint8_t *)a2 == 0xFF )
    v6 = *((char **)a2 + 3);
  printf("%s*** object 0x%p ***\n", v6, self);
  v7 = *((uint32_t *)self + 3);
  if ( v7 != 0 )
  {
    v8 = *(uint32_t *)(v7 + 4);
    v9 = 0;
    if ( v8 >= 0 && *(uint32_t *)(v7 + 8) == -2 )
    {
      v13 = 32;
      v14 = 1;
      do
      {
        v9 = v14;
        if ( v14 > v8 )
          break;
        ++v14;
        v15 = *(uint32_t *)(*((uint32_t *)self + 3) + v13);
        v13 += 24;
      }
      while ( v15 == -2 );
    }
    v10 = (char *)self + 12;
    if ( self != (gameswf::ASObject::Self *)-12 )
    {
LABEL_21:
      v16 = *(uint32_t *)v10;
      v51 = 24 * v9 + 8;
      while ( v16 != 0 && *(uint32_t *)(v16 + 4) >= v9 )
      {
        v17 = v51 + v16;
        v18 = (gameswf::ASValue::Self *)(v17 + 12);
        if ( *(uint8_t *)(v17 + 12) == 6 )
        {
          v50 = *(uint32_t *)(gameswf::ASValue::toProperty((gameswf::ASValue::Self *)(v17 + 12)) + 16);
          v53 = *(uint32_t *)(gameswf::ASValue::toProperty(v18) + 12);
          PropertyTarget = gameswf::ASValue::getPropertyTarget(v18);
          v31 = gameswf::ASValue::toProperty(v18);
          v32 = *(uint32_t *)(*(uint32_t *)v10 + v51 + 8);
          if ( *(uint8_t *)v32 == 0xFF )
            v33 = *(uint32_t *)(v32 + 12);
          else
            v33 = v32 + 1;
          v34 = (char *)a2 + 1;
          if ( *(uint8_t *)a2 == 0xFF )
            v34 = *((char **)a2 + 3);
          printf(
            "%s%s: <ASProperty 0x%p, target 0x%p, getter 0x%p, setter 0x%p>\n",
            v34,
            v33,
            v31,
            PropertyTarget,
            v53,
            v50);
          goto LABEL_33;
        }
        v49 = v17;
        if ( (uint8_t)gameswf::ASValue::isFunction((gameswf::ASValue::Self *)(v17 + 12)) == 0 )
        {
          if ( *(uint8_t *)(v49 + 12) == 5 )
          {
            v28 = *(uint32_t *)(*(uint32_t *)v10 + v51 + 8);
            if ( *(uint8_t *)v28 == 0xFF )
              v29 = *(uint32_t *)(v28 + 12);
            else
              v29 = v28 + 1;
            v30 = (char *)a2 + 1;
            if ( *(uint8_t *)a2 == 0xFF )
              v30 = *((char **)a2 + 3);
            printf("%s%s: <ASObject 0x%p>\n", v30, v29, *(uint32_t *)(v49 + 16));
          }
          else
          {
            v35 = (int)(uintptr_t)(gameswf::ASValue::toCStr((gameswf::ASValue::Self *)(*(uint32_t *)v10 + v51 + 12)));
            v36 = *(uint32_t *)(*(uint32_t *)v10 + v51 + 8);
            if ( *(uint8_t *)v36 == 0xFF )
              v37 = *(uint32_t *)(v36 + 12);
            else
              v37 = v36 + 1;
            if ( *(uint8_t *)a2 == 0xFF )
              v38 = *((char **)a2 + 3);
            else
              v38 = (char *)a2 + 1;
            printf("%s%s: %s\n", v38, v37, v35);
          }
          goto LABEL_33;
        }
        if ( *(uint8_t *)(v49 + 12) != 5 )
          goto LABEL_27;
        v19 = *(uint32_t *)(v49 + 16);
        if ( v19 == 0 )
          goto LABEL_28;
        if ( G4_VCALL<uint8_t>(v19, 8, 7) == 0 )
        {
          if ( *(uint8_t *)(v49 + 12) != 5 )
            goto LABEL_27;
          v19 = *(uint32_t *)(v49 + 16);
          if ( v19 == 0 )
            goto LABEL_28;
          if ( G4_VCALL<uint8_t>(v19, 8, 8) == 0 )
          {
            if ( *(uint8_t *)(v49 + 12) == 5 )
              v19 = *(uint32_t *)(v49 + 16);
            else
LABEL_27:
              v19 = 0;
LABEL_28:
            v20 = *(uint32_t *)(*(uint32_t *)v10 + v51 + 8);
            if ( *(uint8_t *)v20 == 0xFF )
              v21 = *(uint32_t *)(v20 + 12);
            else
              v21 = v20 + 1;
            if ( *(uint8_t *)a2 == 0xFF )
              v22 = *((char **)a2 + 3);
            else
              v22 = (char *)a2 + 1;
            printf("%s%s: <ASCppFunction 0x%p>\n", v22, v21, v19);
            goto LABEL_33;
          }
          v44 = 0;
          if ( *(uint8_t *)(v49 + 12) == 5 )
            v44 = *(uint32_t *)(v49 + 16);
          v45 = *(uint32_t *)(*(uint32_t *)v10 + v51 + 8);
          if ( *(uint8_t *)v45 == 0xFF )
          {
            v46 = a2;
            v47 = *(uint32_t *)(v45 + 12);
            v48 = (char *)a2 + 1;
            if ( *(uint8_t *)a2 != 0xFF )
              goto LABEL_79;
          }
          else
          {
            v46 = a2;
            v47 = v45 + 1;
            v48 = (char *)a2 + 1;
            if ( *(uint8_t *)a2 != 0xFF )
            {
LABEL_79:
              printf("%s%s: <as_3_function 0x%p>\n", v48, v47, v44);
              goto LABEL_33;
            }
          }
          v48 = *((char **)v46 + 3);
          goto LABEL_79;
        }
        v39 = 0;
        if ( *(uint8_t *)(v49 + 12) == 5 )
          v39 = *(uint32_t *)(v49 + 16);
        v40 = *(uint32_t *)(*(uint32_t *)v10 + v51 + 8);
        if ( *(uint8_t *)v40 == 0xFF )
        {
          v41 = a2;
          v42 = *(uint32_t *)(v40 + 12);
          v43 = (char *)a2 + 1;
          if ( *(uint8_t *)a2 == 0xFF )
LABEL_70:
            v43 = *((char **)v41 + 3);
        }
        else
        {
          v41 = a2;
          v42 = v40 + 1;
          v43 = (char *)a2 + 1;
          if ( *(uint8_t *)a2 == 0xFF )
            goto LABEL_70;
        }
        printf("%s%s: <ASScriptFunction 0x%p>\n", v43, v42, v39);
LABEL_33:
        v16 = *(uint32_t *)v10;
        v23 = *(uint32_t *)(*(uint32_t *)v10 + 4);
        if ( v23 >= v9 )
        {
          v24 = v9 + 1;
          if ( v23 >= v9 + 1 && *(uint32_t *)(v16 + 24 * v24 + 8) == -2 )
          {
            v25 = v9 + 2;
            v26 = 24 * v25 + 8;
            while ( 1 )
            {
              v24 = v25;
              if ( *(uint32_t *)(*(uint32_t *)v10 + 4) < v25 )
                break;
              v27 = *(uint32_t *)(v16 + v26);
              ++v25;
              v26 += 24;
              if ( v27 != -2 )
              {
                v9 = v24;
                goto LABEL_21;
              }
            }
          }
          v9 = v24;
          goto LABEL_21;
        }
      }
    }
  }
  if ( *(uint8_t *)a2 == 0xFF )
    v11 = *((uint32_t *)a2 + 1) - 1;
  else
    v11 = *(char *)a2 - 1;
  return gameswf::String::resize(a2, v11 - 2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::thisAlive  (binary VA: 0x10b2990)
// Original: gameswf::ASObject::thisAlive
// ----------------------------------------------------------------------------
int gameswf::ASObject::thisAlive(gameswf::ASObject::Self *self)
{
  gameswf::ASObject::Self *v1;
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint32_t *v19;
  int v20;
  char *v21;
  int v22;

  v1 = self;
  result = *((uint32_t *)self + 4);
  if ( result != 0 )
  {
    result = *(uint32_t *)(result + 100);
    if ( result > *((uint32_t *)self + 5) )
    {
      v3 = *((uint32_t *)self + 3);
      *((uint32_t *)self + 5) = result;
      if ( v3 != 0 )
      {
        v4 = *(uint32_t *)(v3 + 4);
        v5 = 0;
        if ( v4 >= 0 && *(uint32_t *)(v3 + 8) == -2 )
        {
          v10 = 32;
          v11 = 1;
          v22 = v3;
          do
          {
            v5 = v11;
            if ( v11 > v4 )
              break;
            ++v11;
            v12 = *(uint32_t *)(v22 + v10);
            v10 += 24;
          }
          while ( v12 == -2 );
        }
        v21 = (char *)self + 12;
        if ( self != (gameswf::ASObject::Self *)-12 )
        {
LABEL_19:
          v20 = 24 * v5 + 8;
          v13 = *(uint32_t *)v21;
          while ( v13 != 0 )
          {
            v14 = *(uint32_t *)(v13 + 4);
            if ( v14 < v5 )
              break;
            if ( *(uint8_t *)(v13 + v20 + 12) == 5 )
            {
              v19 = *(uint32_t **)(v13 + v20 + 16);
              if ( v19 != nullptr && *(uint32_t *)(*((uint32_t *)self + 4) + 100) > v19[5] )
              {
                (*(void (**)(uint32_t))(*v19 + 76))(*(uint32_t *)(v13 + v20 + 16));
                v13 = *(uint32_t *)v21;
                v14 = *(uint32_t *)(*(uint32_t *)v21 + 4);
                if ( v14 < v5 )
                  continue;
              }
            }
            v15 = v5 + 1;
            if ( v5 + 1 <= v14 && *(uint32_t *)(v13 + 24 * v15 + 8) == -2 )
            {
              v16 = v5 + 2;
              v17 = 24 * (v5 + 2) + 8;
              while ( 1 )
              {
                v15 = v16;
                if ( v16 > v14 )
                  break;
                v18 = *(uint32_t *)(v13 + v17);
                ++v16;
                v17 += 24;
                if ( v18 != -2 )
                {
                  v5 = v15;
                  goto LABEL_19;
                }
              }
            }
            v5 = v15;
            goto LABEL_19;
          }
          v1 = self;
        }
      }
      v6 = 0;
      v7 = 0;
      result = (int)(*((uint32_t *)v1 + 9) << 8) >> 8;
      if ( result > 0 )
      {
        do
        {
          while ( 1 )
          {
            v8 = *((uint32_t *)v1 + 8) + v6;
            if ( *(uint8_t *)v8 == 5 )
            {
              v9 = *(uint32_t *)(v8 + 4);
              if ( v9 != 0 )
                break;
            }
            ++v7;
            v6 += 12;
            if ( v7 >= result )
              return result;
          }
          G4_VCALL<void>(v9, 76);
          ++v7;
          v6 += 12;
          result = (int)(*((uint32_t *)v1 + 9) << 8) >> 8;
        }
        while ( v7 < result );
      }
    }
  }
  else
  {
    *((uint32_t *)self + 5) = 0x7FFFFFFF;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::Destroy  (binary VA: 0x10b2b30)
// Original: gameswf::ASObject::~ASObject
// ----------------------------------------------------------------------------
void gameswf::ASObject::Destroy(gameswf::ASObject::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  gameswf::Self *v5;
  int v6;
  int v7;
  int i;
  uint32_t *v9;
  gameswf::Self *v10;
  int v11;
  int v12;

  v1 = *((uint32_t *)self + 8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208EC48);
  v2 = *((uint32_t *)self + 9);
  if ( v1 != 0 )
  {
    if ( v2 << 8 >> 8 > 0 )
    {
      v3 = 0;
      v4 = 0;
      while ( 1 )
      {
        ++v4;
        v10 = (gameswf::Self *)(v3 + v1);
        v3 += 12;
        gameswf::ASValue::dropRefs(v10);
        v2 = *((uint32_t *)self + 9);
        if ( v4 >= v2 << 8 >> 8 )
          break;
        v1 = *((uint32_t *)self + 8);
      }
    }
    if ( *((uint8_t *)self + 39) != 0 )
    {
      gameswf::free_internal(*((gameswf::Self **)self + 8));
      v2 = *((uint32_t *)self + 9);
    }
  }
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = v2 & 0xFF000000;
  v5 = *((gameswf::Self **)self + 3);
  *((uint8_t *)self + 39) = 0;
  if ( v5 != nullptr )
  {
    v6 = *((uint32_t *)v5 + 1);
    if ( v6 >= 0 )
    {
      v7 = 8;
      for ( i = 0; i <= v6; ++i )
      {
        v9 = (uint32_t *)((char *)v5 + v7);
        if ( *(uint32_t *)((char *)v5 + v7) != -2 )
        {
          v12 = v7;
          v11 = v6;
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v9 + 3));
          *v9 = -2;
          v9[1] = 0;
          v5 = *((gameswf::Self **)self + 3);
          v6 = v11;
          v7 = v12;
        }
        v7 += 24;
      }
    }
    gameswf::free_internal(v5);
    *((uint32_t *)self + 3) = 0;
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E508);
  gameswf::RefCounted::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::Destroy_ea10b2c70  (binary VA: 0x10b2c70)
// Original: gameswf::ASObject::~ASObject
// ----------------------------------------------------------------------------
void gameswf::ASObject::Destroy_ea10b2c70(gameswf::ASObject::Self *self)
{
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::deleteMember  (binary VA: 0x10b2cb0)
// Original: gameswf::ASObject::deleteMember
// ----------------------------------------------------------------------------
int gameswf::ASObject::deleteMember(gameswf::ASObject::Self *self, const gameswf::StringI::Self *a2)
{
  gameswf::ASValue::Self *v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  const gameswf::StringI::Self *v8;
  char *v9;
  gameswf::String::Self *v10;
  int v11;
  int result;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int *v18;
  int i;
  uint32_t *v20;
  int v21;
  char *v22;
  int v23;
  int v24;
  int v25;
  uint32_t *v26;
  gameswf::ASValue::Self *v27;
  int v28;
  int v29;

  v2 = (gameswf::ASValue::Self *)((gameswf::ASObject::Self *)((char *)self + 12));
  v3 = *((uint32_t *)self + 3);
  if ( v3 == 0 )
    return 0;
  v28 = *((uint32_t *)a2 + 4);
  if ( (uint8_t *)(v28 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *(uint8_t *)a2 == 0xFF )
    {
      v22 = *((char **)a2 + 3);
      v21 = *((uint32_t *)a2 + 1) - 1;
    }
    else
    {
      v21 = *(char *)a2 - 1;
      v22 = (char *)a2 + 1;
    }
    v4 = 5381;
    v23 = 5381;
    if ( v21 > 0 )
    {
      do
      {
        --v21;
        v24 = 33 * v23;
        v25 = (uint8_t)v22[v21] + 32;
        if ( (uint8_t)(v22[v21] - 65) > 0x19u )
          v25 = (uint8_t)v22[v21];
        v23 = v24 ^ v25;
      }
      while ( v21 != 0 );
      v2 = (gameswf::ASValue::Self *)((gameswf::ASObject::Self *)((char *)self + 12));
      v23 = v23 << 9 >> 9;
      v4 = v23;
    }
    *((uint32_t *)a2 + 4) = v23 & 0x7FFFFF | v28 & 0xFF800000;
    v3 = *((uint32_t *)self + 3);
  }
  else
  {
    v4 = v28 << 9 >> 9;
  }
  v29 = *(uint32_t *)(v3 + 4);
  v5 = v4 & v29;
  v6 = (int *)(v3 + 24 * (v4 & v29) + 8);
  if ( *v6 == -2 )
    return 0;
  v7 = *(uint32_t *)(v3 + 24 * (v4 & v29) + 12);
  if ( v5 != (v7 & v29) )
    return 0;
  while ( 1 )
  {
    if ( v7 == v4 )
    {
      v8 = (const gameswf::StringI::Self *)v6[2];
      if ( a2 == v8 )
        break;
      v9 = *(uint8_t *)a2 == 0xFF ? *((char **)a2 + 3) : (char *)a2 + 1;
      v10 = *(uint8_t *)v8 == 0xFF ? *((gameswf::String::Self **)v8 + 3) : (gameswf::String::Self *)((char *)v8 + 1);
      v27 = v2;
      v11 = gameswf::String::stricmp(v10, v9);
      v2 = v27;
      if ( v11 == 0 )
        break;
    }
    v5 = *v6;
    if ( *v6 == -1 )
      return 0;
    v6 = (int *)(*(uint32_t *)v2 + 24 * v5 + 8);
    v7 = v6[1];
  }
  if ( v5 < 0 || v2 == nullptr )
    return 0;
  result = 0;
  v13 = *((uint32_t *)self + 3);
  if ( v13 != 0 )
  {
    v14 = *(uint32_t *)(v13 + 4);
    if ( v14 >= v5 )
    {
      v15 = 24 * v5 + 8;
      v16 = v13 + v15;
      v17 = *(uint32_t *)(v13 + v15 + 4) & v14;
      if ( v5 == v17 )
      {
        if ( *(uint32_t *)v16 == -1 )
        {
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v16 + 12));
          *(uint32_t *)v16 = -2;
          *(uint32_t *)(v16 + 4) = 0;
        }
        else
        {
          v26 = (uint32_t *)(v13 + 24 * *(uint32_t *)v16 + 8);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v16 + 12));
          *(uint32_t *)v16 = -2;
          *(uint32_t *)(v16 + 4) = 0;
          *(uint32_t *)v16 = *v26;
          *(uint32_t *)(v16 + 4) = v26[1];
          *(uint32_t *)(v16 + 8) = v26[2];
          *(uint8_t *)(v16 + 12) = 0;
          *(uint8_t *)(v16 + 13) = 0;
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v16 + 12), (const gameswf::ASValue::Self *)(v26 + 3));
          *(uint32_t *)v16 = *v26;
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v26 + 3));
          *v26 = -2;
          v26[1] = 0;
        }
      }
      else
      {
        v18 = (int *)(v13 + 24 * v17 + 8);
        for ( i = *v18; v5 != *v18; i = *v18 )
          v18 = (int *)(v13 + 24 * i + 8);
        *v18 = *(uint32_t *)v16;
        v20 = (uint32_t *)(*((uint32_t *)self + 3) + v15);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v20 + 3));
        *v20 = -2;
        v20[1] = 0;
      }
      --**((uint32_t **)self + 3);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::onEvent  (binary VA: 0x10b2f90)
// Original: gameswf::ASObject::onEvent
// ----------------------------------------------------------------------------
int gameswf::ASObject::onEvent(gameswf::ASObject::Self *self, const gameswf::EventId::Self *a2)
{
  int result;
  gameswf::ASObject::Self *v3;
  char *function_name;
  int v5;
  int StandardMemberID;
  char v7;
  char v8;
  gameswf::RefCounted::Self *v9;
  gameswf::Self *WeakProxy;
  gameswf::Self *v11;
  bool v12;
  int *v13;
  int v14;
  int v15;
  int v16;
  gameswf::Self *v17;
  gameswf::ASValue::Self *v18;
  int v19;
  int v20;
  gameswf::Self *v21;
  int v22;
  gameswf::ASValue::Self *v23;
  gameswf::Self **v24;
  gameswf::ASValue::Self *v25;
  char *v26;
  int v27;
  int v28;
  gameswf::ASValue::Self *v29;
  int v30;
  gameswf::ASValue::Self *v31;
  int v32;
  gameswf::ASValue::Self *v33;
  int v34;
  gameswf::ASValue::Self *v35;
  int v36;
  char *v37;
  int v38;
  char *v39;
  typedef gameswf::Self *_g4_t_v40;
  typedef uint8_t _g4_t_v41;
  typedef gameswf::ASValue::Self *_g4_t_v42;
  typedef gameswf::ASValue::Self *_g4_t_v43;
  typedef gameswf::ASValue::Self *_g4_t_v44;
  typedef gameswf::ASValue::Self *_g4_t_v45;
  typedef gameswf::ASValue::Self *_g4_t_v46;
  typedef gameswf::ASValue::Self *_g4_t_v47;
  typedef gameswf::ASValue::Self *_g4_t_v48;
  typedef gameswf::RefCounted::Self *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef gameswf::Self *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef const gameswf::EventId::Self *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef gameswf::ASValue::Self *_g4_t_v57;
  typedef gameswf::ASValue::Self *_g4_t_v58;
  typedef unsigned int _g4_t_v59[3];
  typedef uint8_t _g4_t_v60[12];
  typedef uint8_t _g4_t_v61[4];
  typedef gameswf::ASObject::Self *_g4_t_v62;
  typedef gameswf::Self *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef gameswf::Self *_g4_t_v65;
  typedef int _g4_t_v66;
  typedef uint8_t _g4_t_v67[12];
  typedef uint8_t _g4_t_v68[12];
  typedef uint8_t _g4_t_v69[12];
  typedef uint8_t _g4_t_v70[12];
  typedef gameswf::Self *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef gameswf::RefCounted::Self *_g4_t_v75;
  typedef uint8_t _g4_t_v76[12];
  typedef gameswf::Self *_g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef gameswf::Self *_g4_t_v81;
  typedef gameswf::RefCounted::Self *_g4_t_v82;
  typedef gameswf::ASObject::Self **_g4_t_v83;
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (0u + sizeof(_g4_t_v40)) > _g4_s0 ? (0u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v41)) > _g4_s1 ? (4u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v42)) > _g4_s2 ? (4u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v43)) > _g4_s3 ? (4u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v44)) > _g4_s4 ? (4u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v45)) > _g4_s5 ? (4u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v46)) > _g4_s6 ? (4u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v47)) > _g4_s7 ? (4u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v48)) > _g4_s8 ? (4u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v49)) > _g4_s9 ? (8u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v50)) > _g4_s10 ? (12u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v51)) > _g4_s11 ? (16u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v52)) > _g4_s12 ? (28u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v53)) > _g4_s13 ? (32u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v54)) > _g4_s14 ? (32u + sizeof(_g4_t_v54)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v55)) > _g4_s15 ? (36u + sizeof(_g4_t_v55)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v56)) > _g4_s16 ? (36u + sizeof(_g4_t_v56)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v57)) > _g4_s17 ? (36u + sizeof(_g4_t_v57)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v58)) > _g4_s18 ? (36u + sizeof(_g4_t_v58)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v59)) > _g4_s19 ? (52u + sizeof(_g4_t_v59)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v60)) > _g4_s20 ? (64u + sizeof(_g4_t_v60)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v61)) > _g4_s21 ? (76u + sizeof(_g4_t_v61)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v62)) > _g4_s22 ? (80u + sizeof(_g4_t_v62)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v63)) > _g4_s23 ? (88u + sizeof(_g4_t_v63)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v64)) > _g4_s24 ? (92u + sizeof(_g4_t_v64)) : _g4_s24,
    _g4_s26 = (96u + sizeof(_g4_t_v65)) > _g4_s25 ? (96u + sizeof(_g4_t_v65)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v66)) > _g4_s26 ? (100u + sizeof(_g4_t_v66)) : _g4_s26,
    _g4_s28 = (200u + sizeof(_g4_t_v67)) > _g4_s27 ? (200u + sizeof(_g4_t_v67)) : _g4_s27,
    _g4_s29 = (212u + sizeof(_g4_t_v68)) > _g4_s28 ? (212u + sizeof(_g4_t_v68)) : _g4_s28,
    _g4_s30 = (224u + sizeof(_g4_t_v69)) > _g4_s29 ? (224u + sizeof(_g4_t_v69)) : _g4_s29,
    _g4_s31 = (236u + sizeof(_g4_t_v70)) > _g4_s30 ? (236u + sizeof(_g4_t_v70)) : _g4_s30,
    _g4_s32 = (248u + sizeof(_g4_t_v71)) > _g4_s31 ? (248u + sizeof(_g4_t_v71)) : _g4_s31,
    _g4_s33 = (252u + sizeof(_g4_t_v72)) > _g4_s32 ? (252u + sizeof(_g4_t_v72)) : _g4_s32,
    _g4_s34 = (256u + sizeof(_g4_t_v73)) > _g4_s33 ? (256u + sizeof(_g4_t_v73)) : _g4_s33,
    _g4_s35 = (260u + sizeof(_g4_t_v74)) > _g4_s34 ? (260u + sizeof(_g4_t_v74)) : _g4_s34,
    _g4_s36 = (264u + sizeof(_g4_t_v75)) > _g4_s35 ? (264u + sizeof(_g4_t_v75)) : _g4_s35,
    _g4_s37 = (268u + sizeof(_g4_t_v76)) > _g4_s36 ? (268u + sizeof(_g4_t_v76)) : _g4_s36,
    _g4_s38 = (280u + sizeof(_g4_t_v77)) > _g4_s37 ? (280u + sizeof(_g4_t_v77)) : _g4_s37,
    _g4_s39 = (284u + sizeof(_g4_t_v78)) > _g4_s38 ? (284u + sizeof(_g4_t_v78)) : _g4_s38,
    _g4_s40 = (288u + sizeof(_g4_t_v79)) > _g4_s39 ? (288u + sizeof(_g4_t_v79)) : _g4_s39,
    _g4_s41 = (292u + sizeof(_g4_t_v80)) > _g4_s40 ? (292u + sizeof(_g4_t_v80)) : _g4_s40,
    _g4_s42 = (296u + sizeof(_g4_t_v81)) > _g4_s41 ? (296u + sizeof(_g4_t_v81)) : _g4_s41,
    _g4_s43 = (300u + sizeof(_g4_t_v82)) > _g4_s42 ? (300u + sizeof(_g4_t_v82)) : _g4_s42,
    _g4_s44 = (320u + sizeof(_g4_t_v83)) > _g4_s43 ? (320u + sizeof(_g4_t_v83)) : _g4_s43
  };
  alignas(16) uint8_t _g4_sf[_g4_s44];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 4u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 4u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 12u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 32u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 36u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 36u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 36u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 36u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 52u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 64u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 76u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 80u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 88u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 92u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 96u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 100u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 200u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 212u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 224u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 236u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 248u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 252u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 256u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 260u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 264u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 268u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 280u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 284u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 288u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 292u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 296u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 300u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 320u);

  result = 0;
  v83 = &self;
  v3 = self;
  v55 = a2;
  if ( *(uint8_t *)(*((uint32_t *)self + 4) + 232) == 0 )
  {
    function_name = gameswf::EventId::get_function_name(a2);
    v5 = *function_name == -1 ? *((uint32_t *)function_name + 1) - 1 : *function_name - 1;
    result = 0;
    if ( v5 > 0 )
    {
      LOWORD(v59[0]) = 0;
      StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)function_name);
      if ( StandardMemberID != -1
        && G4_VCALL<uint8_t>(v3, 36, StandardMemberID, v59) != 0
        || (v7 = G4_VCALL<int>(v3, 44, function_name, v59),
            v8 = 0,
            v7 != 0) )
      {
        v9 = *((gameswf::RefCounted::Self **)v3 + 4);
        v63 = nullptr;
        v64 = 0;
        v65 = nullptr;
        v66 = 0;
        v67[0] = 0;
        v67[1] = 0;
        v68[0] = 0;
        v68[1] = 0;
        v69[0] = 0;
        v69[1] = 0;
        v70[0] = 0;
        v70[1] = 0;
        v71 = nullptr;
        v72 = 0;
        v73 = 0;
        v74 = 0;
        v75 = nullptr;
        v76[0] = 0;
        v76[1] = 0;
        v77 = nullptr;
        v78 = 0;
        v79 = 0;
        v80 = 0;
        v81 = nullptr;
        v82 = v9;
        if ( v9 != nullptr )
        {
          WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v9);
          v11 = v81;
          if ( WeakProxy != v81 )
          {
            if ( v81 != nullptr )
            {
              v12 = (*(uint16_t *)v81)-- == 1;
              if ( v12 )
              {
                v48 = (gameswf::ASValue::Self *)(WeakProxy);
                gameswf::free_internal(v11);
                WeakProxy = (gameswf::Self *)(v48);
              }
            }
            v81 = WeakProxy;
            if ( WeakProxy != nullptr )
              ++*(uint16_t *)WeakProxy;
          }
        }
        v13 = *((int **)v55 + 1);
        if ( v13 != nullptr )
        {
          v51 = v13[1];
          if ( v51 - 1 < 0 )
          {
            v20 = v64;
          }
          else
          {
            v49 = (gameswf::RefCounted::Self *)(v3);
            v50 = v64;
            v14 = v51 - 1;
            v15 = v64;
            v16 = 12 * (v51 - 1);
            while ( 1 )
            {
              v19 = v15 + 1;
              v53 = *v13;
              v40 = v65;
              if ( v15 + 1 <= (int)(uintptr_t)(v65) || v66 != 0 )
              {
                v17 = v63;
              }
              else
              {
                v52 = (gameswf::Self *)(v19 + (v19 >> 1));
                v65 = v52;
                if ( v52 != nullptr )
                {
                  v47 = (gameswf::ASValue::Self *)v16;
                  v17 = v63 != nullptr
                      ? (gameswf::Self *)gameswf::realloc_internal(v63, 12 * (uint32_t)(uintptr_t)(v52), 12 * (uint32_t)(uintptr_t)(v40))
                      : (gameswf::Self *)gameswf::malloc_internal(12 * (uint32_t)(uintptr_t)(v52));
                  v63 = v17;
                  v15 = v64;
                  v16 = (int)(uintptr_t)(v47);
                }
                else
                {
                  if ( v63 != nullptr )
                  {
                    v43 = (gameswf::ASValue::Self *)v16;
                    gameswf::free_internal(v63);
                    v15 = v64;
                    v16 = (int)(uintptr_t)(v43);
                  }
                  v63 = nullptr;
                  v17 = nullptr;
                }
              }
              v18 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v17 + 12 * v15));
              if ( v18 != nullptr )
              {
                *(uint8_t *)v18 = 0;
                *((uint8_t *)v18 + 1) = 0;
                v42 = (gameswf::ASValue::Self *)v16;
                gameswf::ASValue::opAssign(v18, (const gameswf::ASValue::Self *)(v16 + v53));
                v16 = (int)(uintptr_t)(v42);
              }
              --v14;
              v16 -= 12;
              v64 = v19;
              if ( v14 == -1 )
                break;
              v13 = *((int **)v55 + 1);
              v15 = v19;
            }
            v3 = (gameswf::ASObject::Self *)(v49);
            v20 = v50 + v51;
          }
        }
        else
        {
          v20 = v64;
          v51 = 0;
        }
        v62 = v3;
        v61[0] = 5;
        v61[1] = 0;
        gameswf::RefCounted::addRef(v3);
        gameswf::call_method(
          (gameswf::Self *)v60,
          (const gameswf::ASValue::Self *)v59,
          (gameswf::ASEnvironment::Self *)&v63,
          (const gameswf::ASValue::Self *)v61,
          v51,
          v20 - 1,
          "???");
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v60);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v61);
        v21 = v81;
        if ( v81 != nullptr )
        {
          v12 = (*(uint16_t *)v81)-- == 1;
          if ( v12 )
            gameswf::free_internal(v21);
        }
        v22 = v78;
        if ( v78 <= 0 )
        {
          if ( v78 < 0 )
          {
            v54 = 32 * v78;
            do
            {
              v26 = (char *)v77 + v54;
              if ( (gameswf::Self *)((char *)v77 + v54) != nullptr )
              {
                v27 = *((uint32_t *)v26 + 4);
                *v26 = 1;
                v27 |= 0x7FFFFFu;
                v26[1] = 0;
                *((uint32_t *)v26 + 4) = v27;
                v26[20] = 0;
                v26[18] = BYTE2(v27) & 0x7F;
                v26[19] = HIBYTE(v27) | 1;
                v26[21] = 0;
              }
              v54 += 32;
              ++v22;
            }
            while ( v22 != 0 );
          }
        }
        else
        {
          v23 = nullptr;
          v56 = v78;
          do
          {
            v24 = (gameswf::Self **)((char *)v77 + 32 * (uint32_t)(uintptr_t)(v23));
            v44 = v23;
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v24 + 5));
            v25 = v44;
            if ( *(uint8_t *)v24 == 0xFF && (*((uint8_t *)v24 + 19) & 1) != 0 )
            {
              gameswf::free_internal(v24[3]);
              v25 = v44;
            }
            v23 = (gameswf::ASValue::Self *)((char *)v25 + 1);
          }
          while ( v23 != (gameswf::ASValue::Self *)v56 );
        }
        v78 = 0;
        if ( v80 == 0 )
        {
          v79 = 0;
          if ( v77 != nullptr )
            gameswf::free_internal(v77);
          v77 = nullptr;
        }
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v76);
        if ( v75 != nullptr )
          gameswf::RefCounted::dropRef(v75);
        v28 = v72;
        if ( v72 <= 0 )
        {
          if ( v72 < 0 )
          {
            v36 = 12 * v72;
            do
            {
              v37 = (char *)v71 + v36;
              if ( (gameswf::Self *)((char *)v71 + v36) != nullptr )
              {
                *v37 = 0;
                v37[1] = 0;
              }
              v36 += 12;
              ++v28;
            }
            while ( v28 != 0 );
          }
        }
        else
        {
          v57 = (gameswf::ASValue::Self *)v72;
          v29 = nullptr;
          v30 = 0;
          do
          {
            v45 = v29;
            v31 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v71 + v30));
            v30 += 12;
            gameswf::ASValue::dropRefs(v31);
            v29 = (gameswf::ASValue::Self *)((char *)v45 + 1);
          }
          while ( (gameswf::ASValue::Self *)((char *)v45 + 1) != v57 );
        }
        v72 = 0;
        if ( v74 == 0 )
        {
          v73 = 0;
          if ( v71 != nullptr )
            gameswf::free_internal(v71);
          v71 = nullptr;
        }
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v70);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v69);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v68);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v67);
        v32 = v64;
        if ( v64 <= 0 )
        {
          if ( v64 < 0 )
          {
            v38 = 12 * v64;
            do
            {
              v39 = (char *)v63 + v38;
              if ( (gameswf::Self *)((char *)v63 + v38) != nullptr )
              {
                *v39 = 0;
                v39[1] = 0;
              }
              v38 += 12;
              ++v32;
            }
            while ( v32 != 0 );
          }
        }
        else
        {
          v58 = (gameswf::ASValue::Self *)v64;
          v33 = nullptr;
          v34 = 0;
          do
          {
            v46 = v33;
            v35 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v63 + v34));
            v34 += 12;
            gameswf::ASValue::dropRefs(v35);
            v33 = (gameswf::ASValue::Self *)((char *)v46 + 1);
          }
          while ( (gameswf::ASValue::Self *)((char *)v46 + 1) != v58 );
        }
        v64 = 0;
        v8 = 1;
        if ( v66 == 0 )
        {
          v65 = nullptr;
          if ( v63 != nullptr )
            gameswf::free_internal(v63);
          v63 = nullptr;
          v8 = 1;
        }
      }
      v41 = v8;
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v59);
      return v41;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::getMemberByName  (binary VA: 0x10b3730)
// Original: gameswf::ASObject::getMemberByName
// ----------------------------------------------------------------------------
int gameswf::ASObject::getMemberByName(gameswf::ASObject::Self *self, const gameswf::StringI::Self *a2, gameswf::ASValue::Self *a3)
{
  const gameswf::StringI::Self *v3;
  char builtin;
  int v5;
  int v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  const gameswf::StringI::Self *v12;
  const gameswf::StringI::Self *v13;
  gameswf::String::Self *v14;
  int v15;
  char *v16;
  int v17;
  int v18;
  uint8_t v19;
  int v20;
  int v21;
  gameswf::ASClass::Self *v22;
  const gameswf::StringI::Self *v23;
  char *v24;
  char *v25;
  char *v26;
  int v27;

  v3 = a2;
  builtin = gameswf::get_builtin(0, (int)(uintptr_t)(a2), a3);
  v5 = 1;
  if ( builtin != 0 )
    return v5;
  v7 = *((uint32_t *)self + 3);
  if ( v7 == 0 )
    goto LABEL_35;
  v24 = *((char **)a2 + 4);
  if ( (uint8_t *)((unsigned int)(uintptr_t)(v24) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *(uint8_t *)a2 == 0xFF )
    {
      v16 = *((char **)a2 + 3);
      v17 = *((uint32_t *)a2 + 1) - 1;
    }
    else
    {
      v16 = (char *)a2 + 1;
      v17 = *(char *)a2 - 1;
    }
    v8 = 5381;
    v18 = 5381;
    if ( v17 > 0 )
    {
      do
      {
        v19 = v16[--v17];
        v20 = 33 * v18;
        v21 = v19 + 32;
        if ( (uint8_t)(v19 - 65) > 0x19u )
          v21 = v19;
        v18 = v20 ^ v21;
      }
      while ( v17 != 0 );
      v3 = a2;
      v18 = v18 << 9 >> 9;
      v8 = v18;
    }
    *((uint32_t *)v3 + 4) = v18 & 0x7FFFFF | (unsigned int)(uintptr_t)(v24) & 0xFF800000;
    v7 = *((uint32_t *)self + 3);
  }
  else
  {
    v8 = (int)((uint32_t)(uintptr_t)(v24) << 9) >> 9;
  }
  v25 = *(char **)(v7 + 4);
  v9 = v8 & (unsigned int)(uintptr_t)(v25);
  v10 = (int *)(v7 + 24 * (v8 & (unsigned int)(uintptr_t)(v25)) + 8);
  if ( *v10 != -2 && (v11 = *(uint32_t *)(v7 + 24 * (v8 & (unsigned int)(uintptr_t)(v25)) + 12), v9 == (v11 & (unsigned int)(uintptr_t)(v25))) )
  {
    v27 = v8;
    v12 = v3;
    while ( 1 )
    {
      if ( v11 == v27 )
      {
        v13 = (const gameswf::StringI::Self *)v10[2];
        if ( v12 == v13 )
          break;
        v26 = *(uint8_t *)v12 == 0xFF ? *((char **)v12 + 3) : (char *)v12 + 1;
        v14 = *(uint8_t *)v13 == 0xFF ? *((gameswf::String::Self **)v13 + 3) : (gameswf::String::Self *)((char *)v13 + 1);
        v23 = v12;
        v15 = gameswf::String::stricmp(v14, v26);
        v12 = v23;
        if ( v15 == 0 )
          break;
      }
      v9 = *v10;
      if ( *v10 == -1 )
      {
        v3 = v12;
        goto LABEL_35;
      }
      v10 = (int *)(*((uint32_t *)self + 3) + 24 * v9 + 8);
      v11 = v10[1];
    }
    v3 = v12;
    if ( v9 < 0 )
      goto LABEL_35;
    if ( a3 != nullptr )
      gameswf::ASValue::opAssign(a3, (const gameswf::ASValue::Self *)(*((uint32_t *)self + 3) + 24 * v9 + 8 + 12));
    if ( *(uint8_t *)a3 == 6 )
      gameswf::ASValue::setPropertyTarget(a3, self);
    return 1;
  }
  else
  {
LABEL_35:
    v5 = 0;
    v22 = *((gameswf::ASClass::Self **)self + 6);
    if ( v22 == nullptr )
      return v5;
    return gameswf::ASClass::findBuiltinMethod(v22, v3, a3);
  }
}



// ============================================================================
// Address:   0x10b39a0 (size: 136 bytes)
// Symbol:    _ZN7gameswf8ASObjectC1EPNS_6PlayerE
// Demangled: gameswf::ASObject::ASObject(gameswf::Player *)
// ============================================================================
// Alternative name is '_ZN7gameswf8ASObjectC2EPNS_6PlayerE'
void (**gameswf::ASObject::ASObject(
        gameswf::ASObject::Self *self,
        gameswf::Player::Self *a2))(gameswf::ASObject::Self * self)
{
  void (**result)(gameswf::ASObject::Self *);

  gameswf::RefCounted::RefCounted(self);
  result = (void (**)(gameswf::ASObject::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208EC48));
  *((uint32_t *)self + 9) &= 0xFF000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208EC48);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint8_t *)self + 39) = 0;
  if ( a2 != nullptr )
    return (void (**)(gameswf::ASObject::Self *))gameswf::Player::registerObject(a2, self);
  return result;
}
// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::builtinMember  (binary VA: 0x10b3a30)
// Original: gameswf::ASObject::builtinMember
// ----------------------------------------------------------------------------
int gameswf::ASObject::builtinMember(gameswf::ASObject::Self *self, const gameswf::StringI::Self *a2, const gameswf::ASValue::Self *a3)
{
  int StandardMemberID;
  int result;

  *((uint8_t *)a3 + 1) = 1;
  StandardMemberID = gameswf::getStandardMemberID(a2);
  if ( StandardMemberID == -1 )
    return G4_VCALL<int>(self, 48, a2, a3);
  result = G4_VCALL<int>(self, 32, StandardMemberID, a3);
  if ( (uint8_t)result == 0 )
    return G4_VCALL<int>(self, 48, a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::getMemberAt  (binary VA: 0x10b3ab0)
// Original: gameswf::ASObject::getMemberAt
// ----------------------------------------------------------------------------
int gameswf::ASObject::getMemberAt(gameswf::ASObject::Self *self, int a2, const gameswf::String::Self *a3, gameswf::ASValue::Self *a4)
{
  gameswf::ASObject::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int StandardMemberID;
  char v11;
  int result;
  int i;
  int v14;
  gameswf::ASValue::Self *v15;
  int v16;
  int v17;
  int v18;
  int *v19;
  int j;
  int v21;
  char v22;
  int v23;
  int v24;
  int v25;
  int v26;

  v4 = self;
  v5 = *((uint32_t *)self + 7);
  v26 = v5;
  if ( a2 < 0 || v5 == 0 )
  {
LABEL_7:
    StandardMemberID = gameswf::getStandardMemberID(a3);
    if ( StandardMemberID == -1 )
      return G4_VCALL<int>(v4, 44, a3, a4);
    v11 = G4_VCALL<int>(v4, 36, StandardMemberID, a4);
    result = 1;
    if ( v11 == 0 )
      return G4_VCALL<int>(v4, 44, a3, a4);
    return result;
  }
  v6 = *(uint32_t *)(v5 + 12);
  if ( v6 == 0 )
    goto LABEL_6;
  v7 = *(uint32_t *)(v6 + 4);
  v24 = v7;
  v8 = v7 & (65599 * (BYTE1(a2) + 65599 * (BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219))) + (uint8_t)a2);
  v9 = (int *)(v6 + 16 * v8 + 8);
  if ( *v9 == -2
    || v8 != (*(uint32_t *)(v6
                        + 16
                        * (v7
                         & (65599 * (BYTE1(a2) + 65599 * (BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219)))
                          + (uint8_t)a2))
                        + 12)
            & v7) )
  {
    goto LABEL_6;
  }
  for ( i = *(uint32_t *)(v6
                      + 16
                      * (v7
                       & (65599 * (BYTE1(a2) + 65599 * (BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219)))
                        + (uint8_t)a2))
                      + 12);
        65599 * (BYTE1(a2) + 65599 * (BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219))) + (uint8_t)a2 != i
     || a2 != v9[2];
        i = *(uint32_t *)(v6 + 16 * v8 + 12) )
  {
    v8 = *v9;
    if ( *v9 == -1 )
    {
      v4 = self;
      goto LABEL_6;
    }
    v9 = (int *)(v6 + 16 * v8 + 8);
  }
  v4 = self;
  if ( v8 < 0 || v24 < v8 || (v14 = *(uint32_t *)(v6 + 16 * v8 + 20)) == -1 )
  {
LABEL_6:
    if ( *(uint16_t *)(v26 + 16) == 0 )
    {
      v16 = *(uint32_t *)(v26 + 52);
      if ( v16 != 0 )
      {
        v17 = *(uint32_t *)(v16 + 4);
        v25 = v17;
        v23 = 65599
            * (((BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219)) << 6)
             + 0xFFFF * (BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219))
             + BYTE1(a2))
            + (uint8_t)a2;
        v18 = v17 & v23;
        v19 = (int *)(v16 + 16 * (v17 & v23) + 8);
        if ( *v19 != -2 && v18 == (*(uint32_t *)(v16 + 16 * (v17 & v23) + 12) & v17) )
        {
          for ( j = *(uint32_t *)(v16 + 16 * (v17 & v23) + 12); v23 != j || a2 != v19[2]; j = *(uint32_t *)(v16 + 16 * v18 + 12) )
          {
            v18 = *v19;
            if ( *v19 == -1 )
              goto LABEL_7;
            v19 = (int *)(v16 + 16 * v18 + 8);
          }
          if ( v18 >= 0 && v25 >= v18 )
          {
            v21 = *(uint32_t *)(v16 + 16 * v18 + 20);
            if ( v21 != -1 )
            {
              v15 = (gameswf::ASValue::Self *)(*(uint32_t *)(v26 + 56) + 12 * v21);
              if ( *(uint8_t *)v15 == 7 )
              {
                v22 = gameswf::ASValue::invokeGetter(v15, v4, a4);
                result = 1;
                if ( v22 != 0 )
                  return result;
              }
              else if ( *(uint8_t *)v15 != 0 )
              {
LABEL_35:
                gameswf::ASValue::opAssign(a4, v15);
                return 1;
              }
            }
          }
        }
      }
    }
    goto LABEL_7;
  }
  v15 = (gameswf::ASValue::Self *)(*((uint32_t *)self + 8) + 12 * v14);
  if ( *(uint8_t *)v15 != 7 )
    goto LABEL_35;
  gameswf::ASValue::invokeGetter(v15, self, a4);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::setMemberAt  (binary VA: 0x10b3da0)
// Original: gameswf::ASObject::setMemberAt
// ----------------------------------------------------------------------------
int gameswf::ASObject::setMemberAt(gameswf::ASObject::Self *self, int a2, const gameswf::String::Self *a3, const gameswf::ASValue::Self *a4)
{
  gameswf::ASObject::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int StandardMemberID;
  char v11;
  int result;
  int i;
  int v14;
  gameswf::ASValue::Self *v15;
  int v16;
  int v17;
  int v18;
  int *v19;
  int j;
  int v21;
  char v22;
  int v23;
  int v24;
  int v25;
  int v26;

  v4 = self;
  v5 = *((uint32_t *)self + 7);
  v26 = v5;
  if ( a2 < 0 || v5 == 0 )
  {
LABEL_7:
    StandardMemberID = gameswf::getStandardMemberID(a3);
    if ( StandardMemberID == -1 )
      return G4_VCALL<int>(v4, 48, a3, a4);
    v11 = G4_VCALL<int>(v4, 32, StandardMemberID, a4);
    result = 1;
    if ( v11 == 0 )
      return G4_VCALL<int>(v4, 48, a3, a4);
    return result;
  }
  v6 = *(uint32_t *)(v5 + 12);
  if ( v6 == 0 )
    goto LABEL_6;
  v7 = *(uint32_t *)(v6 + 4);
  v24 = v7;
  v8 = v7 & (65599 * (BYTE1(a2) + 65599 * (BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219))) + (uint8_t)a2);
  v9 = (int *)(v6 + 16 * v8 + 8);
  if ( *v9 == -2
    || v8 != (*(uint32_t *)(v6
                        + 16
                        * (v7
                         & (65599 * (BYTE1(a2) + 65599 * (BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219)))
                          + (uint8_t)a2))
                        + 12)
            & v7) )
  {
    goto LABEL_6;
  }
  for ( i = *(uint32_t *)(v6
                      + 16
                      * (v7
                       & (65599 * (BYTE1(a2) + 65599 * (BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219)))
                        + (uint8_t)a2))
                      + 12);
        65599 * (BYTE1(a2) + 65599 * (BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219))) + (uint8_t)a2 != i
     || a2 != v9[2];
        i = *(uint32_t *)(v6 + 16 * v8 + 12) )
  {
    v8 = *v9;
    if ( *v9 == -1 )
    {
      v4 = self;
      goto LABEL_6;
    }
    v9 = (int *)(v6 + 16 * v8 + 8);
  }
  v4 = self;
  if ( v8 < 0 || v24 < v8 || (v14 = *(uint32_t *)(v6 + 16 * v8 + 20)) == -1 )
  {
LABEL_6:
    if ( *(uint16_t *)(v26 + 16) == 0 )
    {
      v16 = *(uint32_t *)(v26 + 52);
      if ( v16 != 0 )
      {
        v17 = *(uint32_t *)(v16 + 4);
        v25 = v17;
        v23 = 65599
            * (((BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219)) << 6)
             + 0xFFFF * (BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219))
             + BYTE1(a2))
            + (uint8_t)a2;
        v18 = v17 & v23;
        v19 = (int *)(v16 + 16 * (v17 & v23) + 8);
        if ( *v19 != -2 && v18 == (*(uint32_t *)(v16 + 16 * (v17 & v23) + 12) & v17) )
        {
          for ( j = *(uint32_t *)(v16 + 16 * (v17 & v23) + 12); v23 != j || a2 != v19[2]; j = *(uint32_t *)(v16 + 16 * v18 + 12) )
          {
            v18 = *v19;
            if ( *v19 == -1 )
              goto LABEL_7;
            v19 = (int *)(v16 + 16 * v18 + 8);
          }
          if ( v18 >= 0 && v25 >= v18 )
          {
            v21 = *(uint32_t *)(v16 + 16 * v18 + 20);
            if ( v21 != -1 )
            {
              v15 = (gameswf::ASValue::Self *)(*(uint32_t *)(v26 + 56) + 12 * v21);
              if ( *(uint8_t *)v15 == 7 )
              {
                v22 = gameswf::ASValue::invokeSetter(v15, v4, a4);
                result = 1;
                if ( v22 != 0 )
                  return result;
              }
              else if ( *(uint8_t *)v15 != 0 )
              {
LABEL_35:
                gameswf::ASValue::opAssign(v15, a4);
                return 1;
              }
            }
          }
        }
      }
    }
    goto LABEL_7;
  }
  v15 = (gameswf::ASValue::Self *)(*((uint32_t *)self + 8) + 12 * v14);
  if ( *(uint8_t *)v15 != 7 )
    goto LABEL_35;
  gameswf::ASValue::invokeSetter(v15, self, a4);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::getSlot  (binary VA: 0x10b4090)
// Original: gameswf::ASObject::getSlot
// ----------------------------------------------------------------------------
int gameswf::ASObject::getSlot(gameswf::ASObject::Self *self, int a2, gameswf::ASValue::Self *a3)
{
  gameswf::ASValue::opAssign(a3, (const gameswf::ASValue::Self *)(*((uint32_t *)self + 8) + 12 * a2));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::setSlot  (binary VA: 0x10b40d0)
// Original: gameswf::ASObject::setSlot
// ----------------------------------------------------------------------------
int gameswf::ASObject::setSlot(gameswf::ASObject::Self *self, int a2, const gameswf::ASValue::Self *a3)
{
  gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(*((uint32_t *)self + 8) + 12 * a2), a3);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::getMemberIndex  (binary VA: 0x10b4110)
// Original: gameswf::ASObject::getMemberIndex
// ----------------------------------------------------------------------------
int gameswf::ASObject::getMemberIndex(gameswf::ASObject::Self *self, const gameswf::String::Self *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int result;
  int v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  int i;
  const gameswf::String::Self *v21;
  const char *s2;
  const char *s1;
  int v24;
  int v25;
  char *v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  const gameswf::String::Self *v33;
  const char *v34;
  const char *v35;
  int v36;
  int v37;
  int v38;
  char *v39;
  char *v40;
  char *v41;
  int v42;

  v2 = *((int **)self + 7);
  if ( v2 == nullptr )
    return -1;
  v42 = *v2;
  v3 = *(uint32_t *)(*v2 + 124);
  if ( v3 != 0 )
  {
    v39 = *((char **)a2 + 4);
    if ( (uint8_t *)((unsigned int)(uintptr_t)(v39) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( *(uint8_t *)a2 == 0xFF )
      {
        v16 = *((char **)a2 + 3);
        v15 = *((uint32_t *)a2 + 1) - 1;
      }
      else
      {
        v15 = *(char *)a2 - 1;
        v16 = (char *)a2 + 1;
      }
      v4 = 5381;
      v17 = 5381;
      if ( v15 > 0 )
      {
        do
        {
          --v15;
          v18 = 33 * v17;
          v19 = (uint8_t)v16[v15] + 32;
          if ( (uint8_t)(v16[v15] - 65) > 0x19u )
            v19 = (uint8_t)v16[v15];
          v17 = v18 ^ v19;
        }
        while ( v15 != 0 );
        v17 = v17 << 9 >> 9;
        v4 = v17;
      }
      *((uint32_t *)a2 + 4) = v17 & 0x7FFFFF | (unsigned int)(uintptr_t)(v39) & 0xFF800000;
      v3 = *(uint32_t *)(v42 + 124);
    }
    else
    {
      v4 = (int)((uint32_t)(uintptr_t)(v39) << 9) >> 9;
    }
    v5 = *(uint32_t *)(v3 + 4);
    v6 = v5 & v4;
    v7 = 16 * (v5 & v4);
    v8 = (int *)(v3 + v7 + 8);
    if ( *v8 != -2 )
    {
      v9 = *(uint32_t *)(v3 + v7 + 12);
      if ( v6 != (v9 & v5) )
      {
        v42 = **((uint32_t **)self + 7);
        goto LABEL_8;
      }
      v30 = v4;
      v31 = v3;
      v32 = v30;
      while ( 1 )
      {
        if ( v9 == v32 )
        {
          v33 = (const gameswf::String::Self *)v8[2];
          if ( a2 == v33 )
            break;
          v34 = *(uint8_t *)a2 == 0xFF ? *((const char **)a2 + 3) : (char *)a2 + 1;
          v35 = *(uint8_t *)v33 == 0xFF ? *((const char **)v33 + 3) : (char *)v33 + 1;
          v38 = v31;
          v36 = strcmp(v35, v34);
          v31 = v38;
          if ( v36 == 0 )
            break;
        }
        v6 = *v8;
        if ( *v8 == -1 )
          goto LABEL_22;
        v8 = (int *)(v31 + 16 * v6 + 8);
        v9 = *(uint32_t *)(v31 + 16 * v6 + 12);
      }
      if ( v6 >= 0 )
        return *(uint32_t *)(v31 + 16 * v6 + 20);
    }
LABEL_22:
    v42 = **((uint32_t **)self + 7);
  }
LABEL_8:
  result = -1;
  v11 = *(uint32_t *)(v42 + 128);
  if ( v11 != 0 )
  {
    v40 = *((char **)a2 + 4);
    if ( (uint8_t *)((unsigned int)(uintptr_t)(v40) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( *(uint8_t *)a2 == 0xFF )
      {
        v26 = *((char **)a2 + 3);
        v25 = *((uint32_t *)a2 + 1) - 1;
      }
      else
      {
        v25 = *(char *)a2 - 1;
        v26 = (char *)a2 + 1;
      }
      v12 = 5381;
      v27 = 5381;
      if ( v25 > 0 )
      {
        do
        {
          --v25;
          v28 = 33 * v27;
          v29 = (uint8_t)v26[v25] + 32;
          if ( (uint8_t)(v26[v25] - 65) > 0x19u )
            v29 = (uint8_t)v26[v25];
          v27 = v28 ^ v29;
        }
        while ( v25 != 0 );
        v27 = v27 << 9 >> 9;
        v12 = v27;
      }
      *((uint32_t *)a2 + 4) = v27 & 0x7FFFFF | (unsigned int)(uintptr_t)(v40) & 0xFF800000;
      v11 = *(uint32_t *)(v42 + 128);
    }
    else
    {
      v12 = (int)((uint32_t)(uintptr_t)(v40) << 9) >> 9;
    }
    v41 = *(char **)(v11 + 4);
    v13 = v12 & (unsigned int)(uintptr_t)(v41);
    v14 = (int *)(v11 + 16 * (v12 & (unsigned int)(uintptr_t)(v41)) + 8);
    result = -1;
    if ( *v14 != -2 && v13 == (*(uint32_t *)(v11 + 16 * (v12 & (unsigned int)(uintptr_t)(v41)) + 12) & (unsigned int)(uintptr_t)(v41)) )
    {
      for ( i = *(uint32_t *)(v11 + 16 * (v12 & (unsigned int)(uintptr_t)(v41)) + 12); ; i = *(uint32_t *)(v11 + 16 * v13 + 12) )
      {
        if ( i == v12 )
        {
          v21 = (const gameswf::String::Self *)v14[2];
          if ( a2 == v21 )
            break;
          s2 = *(uint8_t *)a2 == 0xFF ? *((const char **)a2 + 3) : (char *)a2 + 1;
          s1 = *(uint8_t *)v21 == 0xFF ? *((const char **)v21 + 3) : (char *)v21 + 1;
          v37 = v11;
          v24 = strcmp(s1, s2);
          v11 = v37;
          if ( v24 == 0 )
            break;
        }
        v13 = *v14;
        if ( *v14 == -1 )
          return -1;
        v14 = (int *)(v11 + 16 * v13 + 8);
      }
      if ( v13 >= 0 )
        return gameswf::ObjectInfo::getMemberIndex(*((gameswf::ObjectInfo::Self **)self + 7), a2);
      return -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::findTarget  (binary VA: 0x10b44b0)
// Original: gameswf::ASObject::findTarget
// ----------------------------------------------------------------------------
gameswf::Player::Self ** gameswf::ASObject::findTarget(gameswf::Player::Self **self, char *s)
{
  gameswf::Player::Self **result;
  char v3;
  char *v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  int v7;
  char *v8;
  char v9;
  gameswf::ASObject::Self *Target;
  char *v11;
  gameswf::Self *v12;
  int StandardMemberID;
  gameswf::Root::Self *Root;
  gameswf::ASObject::Self *RootMovie;
  typedef char *_g4_t_v16;
  typedef char *_g4_t_v17;
  typedef gameswf::ASObject::Self *_g4_t_v18;
  typedef gameswf::ASObject::Self *_g4_t_v19;
  typedef size_t _g4_t_v20;
  typedef size_t _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef gameswf::ASObject::Self *_g4_t_v23;
  typedef char _g4_t_v24;
  typedef uint8_t _g4_t_v25[11];
  typedef gameswf::Self *_g4_t_v26;
  typedef int16_t _g4_t_v27;
  typedef char _g4_t_v28;
  typedef char _g4_t_v29;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v17)) > _g4_s1 ? (0u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v18)) > _g4_s2 ? (4u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v19)) > _g4_s3 ? (4u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v20)) > _g4_s4 ? (4u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v21)) > _g4_s5 ? (12u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v22)) > _g4_s6 ? (16u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v23)) > _g4_s7 ? (20u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v24)) > _g4_s8 ? (32u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (33u + sizeof(_g4_t_v25)) > _g4_s9 ? (33u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v26)) > _g4_s10 ? (44u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v27)) > _g4_s11 ? (48u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (50u + sizeof(_g4_t_v28)) > _g4_s12 ? (50u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (51u + sizeof(_g4_t_v29)) > _g4_s13 ? (51u + sizeof(_g4_t_v29)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 33u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 50u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 51u);

  result = self;
  v3 = *s;
  if ( *s != 0 )
  {
    LOWORD(v22) = 0;
    if ( v3 == 47 )
    {
      Root = (gameswf::Root::Self *)gameswf::Player::getRoot(*(self + 4));
      RootMovie = (gameswf::ASObject::Self *)gameswf::Root::getRootMovie(Root);
      Target = (gameswf::ASObject::Self *)gameswf::ASObject::findTarget(RootMovie, s + 1);
      goto LABEL_12;
    }
    v4 = strchr(s, 47);
    if ( v4 == nullptr )
    {
      v11 = strchr(s, 46);
      v4 = v11;
      if ( v11 == nullptr || v11[1] == 46 )
      {
        v24 = 1;
        v25[0] = 0;
        v20 = strlen(s);
        gameswf::String::resize((gameswf::String::Self *)&v24, v20);
        v12 = (gameswf::Self *)v25;
        if ( v24 == -1 )
          v12 = v26;
        gameswf::Strcpy_s(v12, (char *)(v20 + 1), (gameswf::Self *)s);
        v27 = -1;
        v28 = 127;
        v29 |= 1u;
        StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v24);
        if ( StandardMemberID == -1
          || (*((uint8_t (**)(gameswf::Player::Self **, int, unsigned int *))*self + 9))(
               self,
               StandardMemberID,
               &v22) == 0 )
        {
          (*((void (**)(gameswf::Player::Self **, char *, unsigned int *))*self + 11))(self, &v24, &v22);
        }
        Target = nullptr;
        if ( (uint8_t)v22 == 5 )
          Target = v23;
        if ( v24 != -1 )
          goto LABEL_12;
        goto LABEL_17;
      }
    }
    v16 = v4;
    v24 = 1;
    v21 = v4 - s;
    v25[0] = 0;
    gameswf::String::resize((gameswf::String::Self *)&v24, v4 - s);
    v5 = (gameswf::Self *)v25;
    if ( v24 == -1 )
      v5 = v26;
    memcpy(v5, s, v21);
    v6 = (gameswf::Self *)v25;
    if ( v24 == -1 )
      v6 = v26;
    *((uint8_t *)v6 + v21) = 0;
    v27 = -1;
    v28 = 127;
    v29 |= 1u;
    v7 = gameswf::getStandardMemberID((gameswf::Self *)&v24);
    v8 = v16;
    if ( v7 == -1
      || (v9 = (*((int (**)(gameswf::Player::Self **, int, unsigned int *))*self + 9))(self, v7, &v22),
          v8 = v16,
          v9 == 0) )
    {
      v17 = v8;
      (*((void (**)(gameswf::Player::Self **, char *, unsigned int *))*self + 11))(self, &v24, &v22);
      v8 = v17;
      if ( (uint8_t)v22 != 5 )
        goto LABEL_11;
    }
    else if ( (uint8_t)v22 != 5 )
    {
      goto LABEL_11;
    }
    if ( v23 != nullptr )
    {
      Target = (gameswf::ASObject::Self *)gameswf::ASObject::findTarget(v23, v8 + 1);
      if ( v24 != -1 )
        goto LABEL_12;
      goto LABEL_17;
    }
LABEL_11:
    Target = nullptr;
    if ( v24 != -1 )
    {
LABEL_12:
      v18 = Target;
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v22);
      return (gameswf::Player::Self **)v18;
    }
LABEL_17:
    if ( (v29 & 1) != 0 )
    {
      v19 = Target;
      gameswf::free_internal(v26);
      Target = v19;
    }
    goto LABEL_12;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::findTarget  (binary VA: 0x10b4790)
// Original: gameswf::ASObject::findTarget
// ----------------------------------------------------------------------------
gameswf::Player::Self ** gameswf::ASObject::findTarget(gameswf::Player::Self **self, const gameswf::ASValue::Self *a2)
{
  gameswf::Player::Self **result;
  int v3;
  char *s;

  if ( (uint8_t)(*(uint8_t *)a2 - 3) <= 1u )
  {
    v3 = *((uint32_t *)a2 + 1);
    if ( *(uint8_t *)v3 == 0xFF )
      s = *(char **)(v3 + 12);
    else
      s = (char *)(v3 + 1);
    return gameswf::ASObject::findTarget(self, s);
  }
  else
  {
    result = nullptr;
    if ( *(uint8_t *)a2 == 5 )
      return *((gameswf::Player::Self ***)a2 + 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::isInstanceOf  (binary VA: 0x10b4800)
// Original: gameswf::ASObject::isInstanceOf
// ----------------------------------------------------------------------------
int gameswf::ASObject::isInstanceOf(gameswf::ASObject::Self *self, const gameswf::ASFunction::Self *a2)
{
  int result;
  gameswf::ASClass::Self *v3;

  if ( self != nullptr
    && G4_VCALL<uint8_t>(self, 8, 5) != 0
    && self == (gameswf::ASObject::Self *)(uintptr_t)(a2) )
  {
    return 1;
  }
  v3 = *((gameswf::ASClass::Self **)self + 6);
  result = 0;
  if ( v3 != nullptr )
  {
    if ( a2 != nullptr && *((uint32_t *)v3 + 17) != 0 )
    {
      if ( *((uint32_t *)a2 + 6) != 0 )
        return gameswf::ASClass::isInstanceOf(v3, *((gameswf::ASClass::Self **)a2 + 6));
    }
    else
    {
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::getGlobal  (binary VA: 0x10b4890)
// Original: gameswf::ASObject::getGlobal
// ----------------------------------------------------------------------------
int gameswf::ASObject::getGlobal(gameswf::Player::Self **self)
{
  return gameswf::Player::getGlobal(*(self + 4));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::getRoot  (binary VA: 0x10b48c0)
// Original: gameswf::ASObject::getRoot
// ----------------------------------------------------------------------------
int gameswf::ASObject::getRoot(gameswf::Player::Self **self)
{
  return gameswf::Player::getRoot(*(self + 4));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::setMemberByName  (binary VA: 0x10b48f0)
// Original: gameswf::ASObject::setMemberByName
// ----------------------------------------------------------------------------
int gameswf::ASObject::setMemberByName(gameswf::ASObject::Self *self, const gameswf::StringI::Self *a2, const gameswf::ASValue::Self *a3)
{
  char *StaticString;
  int v4;
  char *v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  char *v11;
  char *v12;
  int v13;
  gameswf::String::Self *v14;
  int v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  char *v21;
  int v22;
  int v23;
  uint8_t v24;
  int v25;
  int v26;
  char *v27;
  uint32_t *v28;
  int v29;
  int v30;
  int v31;
  int *v32;
  int v33;
  int v34;
  char *v35;
  gameswf::String::Self *v36;
  int v37;
  char *v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int StandardMemberID;
  typedef gameswf::String::Self *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef char *_g4_t_v48;
  typedef char *_g4_t_v49;
  typedef char *_g4_t_v50;
  typedef char *_g4_t_v51;
  typedef char *_g4_t_v52;
  typedef char *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef char *_g4_t_v56;
  typedef char *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef uint8_t _g4_t_v59[40];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v44)) > _g4_s0 ? (4u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v45)) > _g4_s1 ? (32u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v46)) > _g4_s2 ? (32u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v47)) > _g4_s3 ? (32u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v48)) > _g4_s4 ? (36u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v49)) > _g4_s5 ? (36u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v50)) > _g4_s6 ? (36u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v51)) > _g4_s7 ? (36u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v52)) > _g4_s8 ? (36u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v53)) > _g4_s9 ? (36u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v54)) > _g4_s10 ? (40u + sizeof(_g4_t_v54)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v55)) > _g4_s11 ? (40u + sizeof(_g4_t_v55)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v56)) > _g4_s12 ? (40u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v57)) > _g4_s13 ? (40u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v58)) > _g4_s14 ? (48u + sizeof(_g4_t_v58)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v59)) > _g4_s15 ? (52u + sizeof(_g4_t_v59)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 32u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 36u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 40u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 40u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 40u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 48u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 52u);

  StaticString = (char *)a2;
  if ( *((char *)a2 + 18) >= 0 )
  {
    v4 = *((uint32_t *)self + 4);
    if ( v4 != 0 )
      StaticString = gameswf::PermanentStringCache::get((int **)(v4 + 48), a2);
    else
      StaticString = (char *)gameswf::getStaticString(a2, v44);
  }
  v5 = (char *)self + 12;
  v6 = *((uint32_t *)self + 3);
  if ( v6 == 0 )
    goto LABEL_38;
  v48 = *((char **)StaticString + 4);
  if ( (uint8_t *)((unsigned int)(uintptr_t)(v48) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *StaticString == -1 )
    {
      v21 = *((char **)StaticString + 3);
      v22 = *((uint32_t *)StaticString + 1) - 1;
    }
    else
    {
      v21 = StaticString + 1;
      v22 = *StaticString - 1;
    }
    v7 = 5381;
    v23 = 5381;
    if ( v22 > 0 )
    {
      v56 = StaticString;
      do
      {
        v24 = v21[--v22];
        v25 = 33 * v23;
        v26 = v24 + 32;
        if ( (uint8_t)(v24 - 65) > 0x19u )
          v26 = v24;
        v23 = v25 ^ v26;
      }
      while ( v22 != 0 );
      StaticString = v56;
      v23 = v23 << 9 >> 9;
      v5 = (char *)self + 12;
      v7 = v23;
    }
    *((uint32_t *)StaticString + 4) = v23 & 0x7FFFFF | (unsigned int)(uintptr_t)(v48) & 0xFF800000;
    v6 = *((uint32_t *)self + 3);
  }
  else
  {
    v7 = (int)((uint32_t)(uintptr_t)(v48) << 9) >> 9;
  }
  v49 = *(char **)(v6 + 4);
  v8 = v7 & (unsigned int)(uintptr_t)(v49);
  v9 = (int *)(v6 + 24 * (v7 & (unsigned int)(uintptr_t)(v49)) + 8);
  if ( *v9 == -2 )
    goto LABEL_38;
  v54 = *(uint32_t *)(v6 + 24 * (v7 & (unsigned int)(uintptr_t)(v49)) + 12);
  if ( v8 != (v54 & (unsigned int)(uintptr_t)(v49)) )
    goto LABEL_38;
  v50 = v5;
  v10 = v54;
  v11 = StaticString;
  v55 = v7;
  v12 = v50;
  while ( 1 )
  {
    if ( v10 == v55 )
    {
      v13 = v9[2];
      if ( v11 == (char *)v13 )
        break;
      v51 = *v11 == -1 ? *((char **)v11 + 3) : v11 + 1;
      v14 = *(uint8_t *)v13 == 0xFF ? *(gameswf::String::Self **)(v13 + 12) : (gameswf::String::Self *)(v13 + 1);
      v45 = (int)(uintptr_t)(v11);
      v15 = gameswf::String::stricmp(v14, v51);
      v11 = (char *)v45;
      if ( v15 == 0 )
        break;
    }
    v8 = *v9;
    if ( *v9 == -1 )
    {
      v27 = v12;
      StaticString = v11;
      v5 = v27;
      goto LABEL_38;
    }
    v9 = (int *)(*(uint32_t *)v12 + 24 * v8 + 8);
    v10 = v9[1];
  }
  v16 = v12;
  StaticString = v11;
  v5 = v16;
  if ( v8 < 0 || v16 == nullptr || (v17 = *((uint32_t *)self + 3)) == 0 || *(uint32_t *)(v17 + 4) < v8 )
  {
LABEL_38:
    v46 = (int)(uintptr_t)(v5);
    G4_VCALL<void>(self, 100, StaticString, a3);
    v58 = (int)(uintptr_t)(StaticString);
    v28 = (uint32_t *)v46;
    v29 = *((uint32_t *)self + 3);
    if ( v29 != 0 )
    {
      v52 = *((char **)StaticString + 4);
      if ( (uint8_t *)((unsigned int)(uintptr_t)(v52) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( *StaticString == -1 )
        {
          v38 = *((char **)StaticString + 3);
          v39 = *((uint32_t *)StaticString + 1) - 1;
        }
        else
        {
          v38 = StaticString + 1;
          v39 = *StaticString - 1;
        }
        v30 = 5381;
        v40 = 5381;
        if ( v39 > 0 )
        {
          v57 = StaticString;
          do
          {
            --v39;
            v41 = 33 * v40;
            v42 = (uint8_t)v38[v39] + 32;
            if ( (uint8_t)(v38[v39] - 65) > 0x19u )
              v42 = (uint8_t)v38[v39];
            v40 = v41 ^ v42;
          }
          while ( v39 != 0 );
          StaticString = v57;
          v40 = v40 << 9 >> 9;
          v28 = (uint32_t *)v46;
          v30 = v40;
        }
        *((uint32_t *)StaticString + 4) = v40 & 0x7FFFFF | (unsigned int)(uintptr_t)(v52) & 0xFF800000;
        v29 = *((uint32_t *)self + 3);
      }
      else
      {
        v30 = (int)((uint32_t)(uintptr_t)(v52) << 9) >> 9;
      }
      v53 = *(char **)(v29 + 4);
      v31 = v30 & (unsigned int)(uintptr_t)(v53);
      v32 = (int *)(v29 + 24 * (v30 & (unsigned int)(uintptr_t)(v53)) + 8);
      if ( *v32 != -2 )
      {
        v33 = *(uint32_t *)(v29 + 24 * (v30 & (unsigned int)(uintptr_t)(v53)) + 12);
        if ( v31 == (v33 & (unsigned int)(uintptr_t)(v53)) )
        {
          while ( 1 )
          {
            if ( v33 == v30 )
            {
              v34 = v32[2];
              if ( v34 == v58 )
                break;
              v35 = *(uint8_t *)v58 == 0xFF ? *(char **)(v58 + 12) : (char *)(v58 + 1);
              v36 = *(uint8_t *)v34 == 0xFF ? *(gameswf::String::Self **)(v34 + 12) : (gameswf::String::Self *)(v34 + 1);
              v47 = (int)(uintptr_t)(v28);
              v37 = gameswf::String::stricmp(v36, v35);
              v28 = (uint32_t *)v47;
              if ( v37 == 0 )
                break;
            }
            v31 = *v32;
            if ( *v32 == -1 )
              goto LABEL_73;
            v32 = (int *)(*v28 + 24 * v31 + 8);
            v33 = v32[1];
          }
          if ( v31 >= 0 )
          {
            gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(*((uint32_t *)self + 3) + 24 * v31 + 8 + 12), a3);
            return 1;
          }
        }
      }
    }
LABEL_73:
    gameswf::hash_gameswf_StringIPointer_g_5eef2f::add(
      (int)(uintptr_t)(v28),
      (int)(uintptr_t)(&v58),
      a3);
    return 1;
  }
  v18 = 24 * v8 + 8;
  if ( *(uint8_t *)(v17 + v18 + 12) == 6 )
  {
    v59[0] = 0;
    v59[1] = 0;
    StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)StaticString);
    if ( StandardMemberID != -1
      && G4_VCALL<uint8_t>(self, 36, StandardMemberID, v59) != 0
      || G4_VCALL<uint8_t>(self, 44, StaticString, v59) != 0 )
    {
      gameswf::ASValue::setProperty((gameswf::ASValue::Self *)v59, a3);
    }
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v59);
    return 1;
  }
  G4_VCALL<void>(self, 100, StaticString, a3);
  v19 = *((uint32_t *)self + 3) + v18;
  if ( (*(uint8_t *)(v19 + 13) & 4) != 0 )
    return 1;
  gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v19 + 12), a3);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::is  (binary VA: 0x10b4de0)
// Original: gameswf::ASObject::is
// ----------------------------------------------------------------------------
bool gameswf::ASObject::is(gameswf::ASObject::Self *self, int a2)
{
  return a2 == 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::newOp  (binary VA: 0x113c370)
// Original: gameswf::ASObject::newOp
// ----------------------------------------------------------------------------
gameswf::ASObject::Self * gameswf::ASObject::newOp(gameswf::ASObject::Self *self)
{
  gameswf::ASObject::Self *v1;

  v1 = (gameswf::ASObject::Self *)opNew(0x28u);
  gameswf::ASObject::ASObject(v1, self);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::init  (binary VA: 0x113c3c0)
// Original: gameswf::ASObject::init
// ----------------------------------------------------------------------------
void gameswf::ASObject::init()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::ctor  (binary VA: 0x113c3d0)
// Original: gameswf::ASObject::ctor
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASObject::ctor(int a1)
{
  int v1;
  gameswf::Player::Self *v2;
  gameswf::Self *v3;
  gameswf::ASObject::Self *v4;

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
  v4 = (gameswf::ASObject::Self *)opNew(0x28u);
  gameswf::ASObject::ASObject(v4, v2);
  return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::addProperty  (binary VA: 0x113c4a0)
// Original: gameswf::ASObject::addProperty
// ----------------------------------------------------------------------------
int gameswf::ASObject::addProperty(int a1)
{
  gameswf::ASValue::Self **v1;
  int v3;
  int v4;
  const gameswf::ASValue::Self *v5;
  int v6;
  int v7;
  gameswf::Self *v8;
  char *v9;
  gameswf::Self *v10;
  int v11;
  unsigned int v12;
  int v13;
  char *v14;
  int v15;
  int v16;
  int v17;
  typedef const gameswf::ASValue::Self *_g4_t_v18;
  typedef gameswf::RefCounted::Self **_g4_t_v19;
  typedef int _g4_t_v20;
  typedef char *_g4_t_v21;
  typedef uint32_t _g4_t_v22[3];
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef char *_g4_t_v25;
  typedef gameswf::Self *_g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v19)) > _g4_s1 ? (24u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v20)) > _g4_s2 ? (32u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v21)) > _g4_s3 ? (36u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v22)) > _g4_s4 ? (48u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v23)) > _g4_s5 ? (60u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (61u + sizeof(_g4_t_v24)) > _g4_s6 ? (61u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v25)) > _g4_s7 ? (64u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v26)) > _g4_s8 ? (72u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v27)) > _g4_s9 ? (76u + sizeof(_g4_t_v27)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 61u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 72u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);

  v1 = (gameswf::ASValue::Self **)a1;
  if ( *(uint32_t *)(a1 + 16) != 3 )
    return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 0);
  v3 = *(uint32_t *)(a1 + 20);
  v4 = **(uint32_t **)(a1 + 12);
  LOWORD(v22[0]) = 6;
  v22[1] = 0;
  v5 = (const gameswf::ASValue::Self *)(v4 + 4 * (3 * v3 - 3));
  v18 = (const gameswf::ASValue::Self *)(v4 + 4 * (3 * v3 - 6));
  v19 = (gameswf::RefCounted::Self **)opNew(0x14u);
  gameswf::ASProperty::Construct(v19, v5, v18);
  v22[2] = (uint32_t)(uintptr_t)(v19);
  gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v19);
  v6 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v6 == 3 || *(uint8_t *)v6 == 4 )
  {
    v21 = *(char **)(v6 + 4);
  }
  else
  {
    v21 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
    {
      byte_20D6378 = 1;
      v17 = dword_20D6388 | 0x7FFFFF;
      byte_20D6379 = 0;
      dword_20D6388 = v17;
      BYTE2(dword_20D6388) = BYTE2(v17) & 0x7F;
      HIBYTE(dword_20D6388) = HIBYTE(v17) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
    }
  }
  v23 = 1;
  v24 = 0;
  if ( *v21 == -1 )
    v7 = *((uint32_t *)v21 + 1) - 1;
  else
    v7 = *v21 - 1;
  gameswf::String::resize((gameswf::String::Self *)&v23, v7);
  v8 = (gameswf::Self *)(v21 + 1);
  if ( *v21 == -1 )
    v8 = *((gameswf::Self **)v21 + 3);
  if ( v23 == -1 )
  {
    v9 = v25;
    v10 = v26;
  }
  else
  {
    v9 = (char *)v23;
    v10 = (gameswf::Self *)&v24;
  }
  gameswf::Strcpy_s(v10, v9, v8);
  v20 = *((uint32_t *)v21 + 4);
  if ( (uint8_t *)(v20 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *v21 == -1 )
    {
      v14 = *((char **)v21 + 3);
      v13 = *((uint32_t *)v21 + 1) - 1;
    }
    else
    {
      v13 = *v21 - 1;
      v14 = v21 + 1;
    }
    v11 = 5381;
    if ( v13 > 0 )
    {
      do
      {
        --v13;
        v15 = 33 * v11;
        v16 = (uint8_t)v14[v13] + 32;
        if ( (uint8_t)(v14[v13] - 65) > 0x19u )
          v16 = (uint8_t)v14[v13];
        v11 = v15 ^ v16;
      }
      while ( v13 != 0 );
      v1 = (gameswf::ASValue::Self **)a1;
      v11 = v11 << 9 >> 9;
    }
    *((uint32_t *)v21 + 4) = v11 & 0x7FFFFF | v20 & 0xFF800000;
  }
  else
  {
    v11 = v20 << 9 >> 9;
  }
  v12 = v11 & 0x7FFFFF | v27 & 0xFF800000;
  LOWORD(v27) = v11;
  BYTE2(v27) = BYTE2(v12) & 0x7F;
  HIBYTE(v27) = HIBYTE(v12) | 1;
  gameswf::ASObject::builtinMember(v1[1], (const gameswf::StringI::Self *)&v23, (const gameswf::ASValue::Self *)v22);
  if ( v23 == -1 && (v27 & 0x1000000) != 0 )
    gameswf::free_internal(v26);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v22);
  return gameswf::ASValue::setBool(*v1, 1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::registerClass  (binary VA: 0x113c7e0)
// Original: gameswf::ASObject::registerClass
// ----------------------------------------------------------------------------
int gameswf::ASObject::registerClass(int a1)
{
  int result;
  int target;
  int (*v3)(int, char *);
  int v4;
  char *v5;
  int v6;
  gameswf::CharacterDef::Self *v7;
  uint32_t *v8;
  bool v9;
  int v10;
  gameswf::RefCounted::Self *v11;
  int v12;
  int v13;
  char *v14;
  typedef int (*_g4_t_v15)(int, char *);
  typedef uint8_t _g4_t_v16[4];
  typedef gameswf::RefCounted::Self *_g4_t_v17;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v16)) > _g4_s1 ? (36u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v17)) > _g4_s2 ? (40u + sizeof(_g4_t_v17)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);

  result = gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 0);
  if ( *(uint32_t *)(a1 + 16) != 2 )
    return result;
  target = gameswf::ASEnvironment::get_target(*(gameswf::ASEnvironment::Self **)(a1 + 12));
  v3 = *(int (**)(int, char *))(*(uint32_t *)target + 152);
  v4 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v4 == 3 || *(uint8_t *)v4 == 4 )
  {
    v5 = *(char **)(v4 + 4);
LABEL_6:
    v6 = v3(target, v5);
    goto LABEL_7;
  }
  v5 = (char *)(&byte_20D6378);
  if ( byte_20D6370 != 0 )
    goto LABEL_6;
  v15 = *(int (**)(int, char *))(*(uint32_t *)target + 152);
  v12 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370);
  v3 = v15;
  if ( v12 == 0 )
    goto LABEL_6;
  v13 = dword_20D6388;
  byte_20D6378 = 1;
  byte_20D6379 = 0;
  dword_20D6388 |= 0x7FFFFFu;
  BYTE2(dword_20D6388) &= ~0x80u;
  HIBYTE(dword_20D6388) = ((v13 | 0x7FFFFFu) >> 24) | 1;
  _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
  __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
  v6 = v15(target, (char *)(&byte_20D6378));
LABEL_7:
  v7 = (gameswf::CharacterDef::Self *)v6;
  v8 = *(uint32_t **)(a1 + 12);
  v9 = v6 == 0;
  v10 = *(uint32_t *)(a1 + 20);
  if ( v9 )
  {
    v14 = gameswf::ASValue::toCStr((gameswf::ASValue::Self *)(*v8 + 12 * v10));
    return gameswf::logError((gameswf::Self *)"can't find exported resource '%s'\n", v14);
  }
  else
  {
    result = *v8 + 4 * (3 * v10 - 3);
    if ( *(uint8_t *)result == 5 )
    {
      v11 = *(gameswf::RefCounted::Self **)(result + 4);
      if ( v11 != nullptr )
      {
        result = G4_VCALL<int>(v11, 8, 5);
        if ( (uint8_t)result != 0 )
        {
          gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 1);
          v16[0] = 5;
          v16[1] = 0;
          v17 = v11;
          gameswf::RefCounted::addRef(v11);
          gameswf::CharacterDef::setRegisteredClassConstructor(v7, (const gameswf::ASValue::Self *)v16);
          return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v16);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::hasOwnProperty  (binary VA: 0x113c9d0)
// Original: gameswf::ASObject::hasOwnProperty
// ----------------------------------------------------------------------------
int gameswf::ASObject::hasOwnProperty(int a1)
{
  gameswf::ASValue::Self **v1;
  uint32_t *v3;
  int v4;
  int v5;
  gameswf::ASObject::Self *v6;
  int v7;
  int v8;
  int *v9;
  int MemberIndex;
  int v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  gameswf::ASObject::Self *v19;
  int v20;
  gameswf::String::Self *v21;
  char *v22;
  gameswf::String::Self *v23;
  int v24;
  gameswf::ASObject::Self *v25;
  int v26;
  bool v27;
  typedef gameswf::ASObject::Self *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef gameswf::String::Self *_g4_t_v31;
  typedef uint8_t _g4_t_v32[24];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v28)) > _g4_s0 ? (12u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v29)) > _g4_s1 ? (16u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v30)) > _g4_s2 ? (16u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v31)) > _g4_s3 ? (20u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v32)) > _g4_s4 ? (36u + sizeof(_g4_t_v32)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);

  v1 = (gameswf::ASValue::Self **)a1;
  if ( *(uint32_t *)(a1 + 16) != 1 )
    return gameswf::ASValue::setBool(*v1, 0);
  v3 = *(uint32_t **)(a1 + 12);
  v4 = *(uint32_t *)(a1 + 20);
  v32[0] = 0;
  v32[1] = 0;
  v5 = *v3 + 12 * v4;
  if ( *(uint8_t *)v5 == 3 || *(uint8_t *)v5 == 4 )
  {
    v31 = *(gameswf::String::Self **)(v5 + 4);
  }
  else
  {
    v31 = (gameswf::String::Self *)&byte_20D6378;
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
    {
      byte_20D6378 = 1;
      v16 = dword_20D6388 | 0x7FFFFF;
      byte_20D6379 = 0;
      dword_20D6388 = v16;
      BYTE2(dword_20D6388) = BYTE2(v16) & 0x7F;
      HIBYTE(dword_20D6388) = HIBYTE(v16) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
    }
  }
  v6 = *(gameswf::ASObject::Self **)(a1 + 4);
  v7 = *((uint32_t *)v6 + 3);
  if ( v7 != 0 )
  {
    v29 = *((uint32_t *)v31 + 4);
    v8 = v29 << 9 >> 9;
    if ( (uint8_t *)(v29 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( *(uint8_t *)v31 == 0xFF )
      {
        v12 = *((char **)v31 + 3);
        v11 = *((uint32_t *)v31 + 1) - 1;
      }
      else
      {
        v11 = *(char *)v31 - 1;
        v12 = (char *)v31 + 1;
      }
      v8 = 5381;
      v13 = 5381;
      if ( v11 > 0 )
      {
        do
        {
          --v11;
          v14 = 33 * v13;
          v15 = (uint8_t)v12[v11] + 32;
          if ( (uint8_t)(v12[v11] - 65) > 0x19u )
            v15 = (uint8_t)v12[v11];
          v13 = v14 ^ v15;
        }
        while ( v11 != 0 );
        v6 = *(gameswf::ASObject::Self **)(a1 + 4);
        v13 = v13 << 9 >> 9;
        v8 = v13;
      }
      *((uint32_t *)v31 + 4) = v13 & 0x7FFFFF | v29 & 0xFF800000;
      v7 = *((uint32_t *)v6 + 3);
    }
    v30 = *(uint32_t *)(v7 + 4);
    v9 = (int *)(v7 + 24 * (v8 & v30) + 8);
    if ( *v9 != -2 && (v8 & v30) == (*(uint32_t *)(v7 + 24 * (v8 & v30) + 12) & v30) )
    {
      v17 = *(uint32_t *)(v7 + 24 * (v8 & v30) + 12);
      v18 = v8 & v30;
      v19 = v6;
      v20 = v8;
      while ( 1 )
      {
        if ( v17 == v20 )
        {
          v21 = (gameswf::String::Self *)v9[2];
          if ( v21 == v31 )
            break;
          v22 = *(uint8_t *)v31 == 0xFF ? *((char **)v31 + 3) : (char *)v31 + 1;
          v23 = *(uint8_t *)v21 == 0xFF ? *((gameswf::String::Self **)v21 + 3) : (gameswf::String::Self *)((char *)v21 + 1);
          v28 = v19;
          v24 = gameswf::String::stricmp(v23, v22);
          v19 = v28;
          if ( v24 == 0 )
            break;
        }
        v18 = *v9;
        if ( *v9 == -1 )
        {
          v1 = (gameswf::ASValue::Self **)a1;
          v6 = *(gameswf::ASObject::Self **)(a1 + 4);
          goto LABEL_11;
        }
        v9 = (int *)(*((uint32_t *)v19 + 3) + 24 * v18 + 8);
        v17 = v9[1];
      }
      v25 = v19;
      v26 = v18;
      v27 = v18 < 0;
      v1 = (gameswf::ASValue::Self **)a1;
      if ( v27 )
        goto LABEL_10;
      gameswf::ASValue::opAssign(
        (gameswf::ASValue::Self *)v32,
        (const gameswf::ASValue::Self *)(*((uint32_t *)v25 + 3) + 24 * v26 + 8 + 12));
      gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 1);
      return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v32);
    }
LABEL_10:
    v6 = (gameswf::ASObject::Self *)(v1[1]);
  }
LABEL_11:
  MemberIndex = gameswf::ASObject::getMemberIndex(v6, v31);
  if ( (uint8_t)gameswf::ASObject::getMemberAt(v1[1], MemberIndex, v31, (gameswf::ASValue::Self *)v32) == 0 )
  {
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v32);
    return gameswf::ASValue::setBool(*v1, 0);
  }
  gameswf::ASValue::setBool(*v1, 1);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v32);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASObject::dump  (binary VA: 0x113cd30)
// Original: gameswf::ASObject::dump
// ----------------------------------------------------------------------------
int gameswf::ASObject::dump(int a1)
{
  int result;
  int v2;
  typedef uint8_t _g4_t_v3[12];
  typedef gameswf::Self *_g4_t_v4;
  typedef int16_t _g4_t_v5;
  typedef char _g4_t_v6;
  typedef char _g4_t_v7;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v5)) > _g4_s2 ? (16u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (18u + sizeof(_g4_t_v6)) > _g4_s3 ? (18u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (19u + sizeof(_g4_t_v7)) > _g4_s4 ? (19u + sizeof(_g4_t_v7)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 18u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 19u);

  result = a1;
  v2 = *(uint32_t *)(a1 + 4);
  if ( v2 != 0 )
  {
    v3[0] = 1;
    v3[1] = 0;
    v5 = -1;
    v6 = 127;
    v7 |= 1u;
    result = G4_VCALL<int>(v2, 84, v3);
    if ( v3[0] == 0xFF && (v7 & 1) != 0 )
      return gameswf::free_internal(v4);
  }
  return result;
}


