#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASClass.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASClass::toString  (binary VA: 0x106ef10)
// Original: gameswf::ASClass::toString
// ----------------------------------------------------------------------------
char * gameswf::ASClass::toString(gameswf::ASClass::Self *self)
{
  char *v1;

  if ( *((uint8_t *)self + 40) == 0xFF )
    v1 = *((char **)self + 13);
  else
    v1 = (char *)self + 41;
  snprintf(((char *)(&byte_20E2D80)), 0x80u, "<class %s>", v1);
  return (char *)(uintptr_t)(((char *)(&byte_20E2D80)));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClass::getMemberByName  (binary VA: 0x106efd0)
// Original: gameswf::ASClass::getMemberByName
// ----------------------------------------------------------------------------
int gameswf::ASClass::getMemberByName(gameswf::ASClass::Self *self, const gameswf::StringI::Self *a2, gameswf::ASValue::Self *a3)
{
  const char *s2;
  const char *s1;

  if ( a2 != (const gameswf::StringI::Self *)((gameswf::ASClass::Self *)((char *)self + 40)) )
  {
    s2 = (char *)self + 41;
    if ( *((uint8_t *)self + 40) == 0xFF )
      s2 = *((const char **)self + 13);
    s1 = (char *)a2 + 1;
    if ( *(uint8_t *)a2 == 0xFF )
      s1 = *((const char **)a2 + 3);
    if ( strcmp(s1, s2) != 0 )
      return gameswf::ASObject::getMemberByName(self, a2, a3);
  }
  gameswf::ASValue::setObject(a3, self);
  return 1;
}



// ============================================================================
// Address:   0x106f310 (size: 283 bytes)
// Symbol:    _ZN7gameswf7ASClassclERKNS_12FunctionCallE
// Demangled: gameswf::ASClass::operator()(gameswf::FunctionCall const&)
// ============================================================================
int gameswf::ASClass::opCall(int a1, gameswf::ASValue::Self **a2)
{
  int v2;
  gameswf::ASValue::Self **v3;
  gameswf::ASValue::Self *v4;
  gameswf::RefCounted::Self *v5;
  typedef gameswf::ASValue::Self *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef char *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[4];
  typedef gameswf::RefCounted::Self *_g4_t_v12;
  typedef uint8_t _g4_t_v13[4];
  typedef gameswf::RefCounted::Self *_g4_t_v14;
  typedef uint8_t _g4_t_v15[20];
  typedef int *_g4_t_v16;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v11)) > _g4_s4 ? (16u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v12)) > _g4_s5 ? (20u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v13)) > _g4_s6 ? (32u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v14)) > _g4_s7 ? (36u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v15)) > _g4_s8 ? (52u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v16)) > _g4_s9 ? (72u + sizeof(_g4_t_v16)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 52u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 72u);

  v16 = &a1;
  v2 = a1;
  v3 = a2;
  if ( *(uint8_t *)(a1 + 40) == 0xFF )
    v9 = *(char **)(a1 + 52);
  else
    v9 = (char *)(a1 + 41);
  v4 = a2[3];
  v13[0] = 5;
  v13[1] = 0;
  v8 = *((uint32_t *)v4 + 1) - 1;
  v10 = (int)(uintptr_t)(a2[4]);
  v14 = (gameswf::RefCounted::Self *)(a2[1]);
  if ( v14 != nullptr )
  {
    gameswf::RefCounted::addRef(v14);
    v4 = v3[3];
  }
  v5 = *(gameswf::RefCounted::Self **)(v2 + 64);
  v11[0] = 5;
  v11[1] = 0;
  v12 = v5;
  if ( v5 != nullptr )
  {
    v7 = v4;
    gameswf::RefCounted::addRef(v5);
    v4 = v7;
  }
  gameswf::call_method((gameswf::Self *)v15, (const gameswf::ASValue::Self *)v11, v4, (const gameswf::ASValue::Self *)v13, v10, v8, v9);
  gameswf::ASValue::opAssign(*v3, (const gameswf::ASValue::Self *)v15);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v11);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v13);
}
// ----------------------------------------------------------------------------
// Function: gameswf::ASClass::Construct  (binary VA: 0x106f5e0)
// Original: gameswf::ASClass::ASClass
// ----------------------------------------------------------------------------
gameswf::ASClass::Self * gameswf::ASClass::Construct(gameswf::Self **self, gameswf::Player::Self *a2, const gameswf::String::Self *a3, gameswf::ASObject::Self *(*a4)(gameswf::Player::Self *), const gameswf::ASValue::Self *a5, bool a6)
{
  int v6;
  gameswf::Self *v7;
  char *v8;
  gameswf::Self *v9;
  int v10;
  unsigned int v11;
  gameswf::ASClass::Self *result;
  int v13;
  char *v14;
  int v15;
  int v16;
  int v17;

  gameswf::ASObject::ASObject((gameswf::ASObject::Self *)self, a2);
  *((uint8_t *)self + 40) = 1;
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_208E108);
  *((uint8_t *)self + 41) = 0;
  if ( *(uint8_t *)a3 == 0xFF )
    v6 = *((uint32_t *)a3 + 1) - 1;
  else
    v6 = *(char *)a3 - 1;
  gameswf::String::resize((gameswf::String::Self *)(self + 10), v6);
  v7 = (gameswf::Self *)((const gameswf::String::Self *)((char *)a3 + 1));
  if ( *(uint8_t *)a3 == 0xFF )
    v7 = *((gameswf::Self **)a3 + 3);
  LOBYTE(v8) = *((uint8_t *)self + 40);
  if ( (uint8_t)(uintptr_t)v8 == 0xFF )
  {
    v8 = (char *)*(self + 11);
    v9 = *(self + 13);
  }
  else
  {
    v8 = (char *)(char)(uintptr_t)v8;
    v9 = (gameswf::Self *)((char *)self + 41);
  }
  gameswf::Strcpy_s(v9, v8, v7);
  v17 = *((uint32_t *)a3 + 4);
  if ( (uint8_t *)(v17 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *(uint8_t *)a3 == 0xFF )
    {
      v14 = *((char **)a3 + 3);
      v13 = *((uint32_t *)a3 + 1) - 1;
    }
    else
    {
      v13 = *(char *)a3 - 1;
      v14 = (char *)a3 + 1;
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
      v10 = v10 << 9 >> 9;
    }
    *((uint32_t *)a3 + 4) = v10 & 0x7FFFFF | v17 & 0xFF800000;
  }
  else
  {
    v10 = v17 << 9 >> 9;
  }
  v11 = v10 & 0x7FFFFF | (unsigned int)(uintptr_t)(*(self + 14)) & 0xFF800000;
  *(self + 14) = (gameswf::Self *)v11;
  *((uint8_t *)self + 58) = BYTE2(v11) & 0x7F;
  *((uint8_t *)self + 59) = HIBYTE(v11) | 1;
  *(self + 15) = (gameswf::Self *)a4;
  result = (gameswf::ASClass::Self *)gameswf::ASValue::toFunction(a5);
  *(self + 16) = (gameswf::Self *)(result);
  if ( result != nullptr )
    result = (gameswf::ASClass::Self *)(gameswf::RefCounted::addRef(result));
  *(self + 23) = (gameswf::Self *)((unsigned int)(uintptr_t)(*(self + 23)) & 0xFF000000);
  *(self + 25) = (gameswf::Self *)((unsigned int)(uintptr_t)(*(self + 25)) & 0xFF000000);
  *(self + 17) = nullptr;
  *(self + 18) = nullptr;
  *(self + 19) = nullptr;
  *(self + 20) = nullptr;
  *(self + 21) = nullptr;
  *(self + 22) = nullptr;
  *((uint8_t *)self + 95) = 0;
  *(self + 24) = nullptr;
  *((uint8_t *)self + 103) = 0;
  *(self + 26) = nullptr;
  *((uint8_t *)self + 109) = 0;
  *((uint8_t *)self + 110) = 0;
  *((uint8_t *)self + 111) = a6;
  *(self + 28) = (gameswf::Self *)-1;
  *(self + 29) = nullptr;
  *(self + 30) = nullptr;
  *(self + 31) = nullptr;
  *(self + 32) = nullptr;
  *(self + 33) = nullptr;
  *(self + 34) = nullptr;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClass::Construct  (binary VA: 0x106f850)
// Original: gameswf::ASClass::ASClass
// ----------------------------------------------------------------------------
gameswf::ASClass::Self * gameswf::ASClass::Construct(gameswf::Self **self, gameswf::Player::Self *a2, gameswf::ASClass::Self *a3, const gameswf::String::Self *a4, gameswf::ASObject::Self *(*a5)(gameswf::Player::Self *), const gameswf::ASValue::Self *a6, gameswf::instance_info::Self *a7)
{
  int v7;
  gameswf::Self *v8;
  char *v9;
  gameswf::Self *v10;
  int v11;
  unsigned int v12;
  gameswf::RefCounted::Self *v13;
  gameswf::ASClass::Self *result;
  gameswf::Self *v15;
  int v17;
  char *v18;
  int v19;
  int v20;
  gameswf::ASClass::Self *v21;
  int v22;

  gameswf::ASObject::ASObject((gameswf::ASObject::Self *)self, a2);
  *((uint8_t *)self + 40) = 1;
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_208E108);
  *((uint8_t *)self + 41) = 0;
  if ( *(uint8_t *)a4 == 0xFF )
    v7 = *((uint32_t *)a4 + 1) - 1;
  else
    v7 = *(char *)a4 - 1;
  gameswf::String::resize((gameswf::String::Self *)(self + 10), v7);
  v8 = (gameswf::Self *)((const gameswf::String::Self *)((char *)a4 + 1));
  if ( *(uint8_t *)a4 == 0xFF )
    v8 = *((gameswf::Self **)a4 + 3);
  LOBYTE(v9) = *((uint8_t *)self + 40);
  if ( (uint8_t)(uintptr_t)v9 == 0xFF )
  {
    v9 = (char *)*(self + 11);
    v10 = *(self + 13);
  }
  else
  {
    v9 = (char *)(char)(uintptr_t)v9;
    v10 = (gameswf::Self *)((char *)self + 41);
  }
  gameswf::Strcpy_s(v10, v9, v8);
  v22 = *((uint32_t *)a4 + 4);
  if ( (uint8_t *)(v22 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *(uint8_t *)a4 == 0xFF )
    {
      v18 = *((char **)a4 + 3);
      v17 = *((uint32_t *)a4 + 1) - 1;
    }
    else
    {
      v17 = *(char *)a4 - 1;
      v18 = (char *)a4 + 1;
    }
    v11 = 5381;
    if ( v17 > 0 )
    {
      do
      {
        --v17;
        v19 = 33 * v11;
        v20 = (uint8_t)v18[v17] + 32;
        if ( (uint8_t)(v18[v17] - 65) > 0x19u )
          v20 = (uint8_t)v18[v17];
        v11 = v19 ^ v20;
      }
      while ( v17 != 0 );
      v11 = v11 << 9 >> 9;
    }
    *((uint32_t *)a4 + 4) = v11 & 0x7FFFFF | v22 & 0xFF800000;
  }
  else
  {
    v11 = v22 << 9 >> 9;
  }
  v12 = v11 & 0x7FFFFF | (unsigned int)(uintptr_t)(*(self + 14)) & 0xFF800000;
  *(self + 14) = (gameswf::Self *)v12;
  *((uint8_t *)self + 58) = BYTE2(v12) & 0x7F;
  *((uint8_t *)self + 59) = HIBYTE(v12) | 1;
  *(self + 15) = (gameswf::Self *)a5;
  v13 = (gameswf::RefCounted::Self *)gameswf::ASValue::toFunction(a6);
  *(self + 16) = (gameswf::Self *)(v13);
  if ( v13 != nullptr )
    gameswf::RefCounted::addRef(v13);
  result = (gameswf::ASClass::Self *)(a7);
  *(self + 17) = (gameswf::Self *)(a7);
  *(self + 18) = nullptr;
  *(self + 19) = (gameswf::Self *)(a3);
  if ( a3 != nullptr )
  {
    result = (gameswf::ASClass::Self *)gameswf::RefCounted::getWeakProxy(a3);
    v15 = *(self + 18);
    if ( result != (gameswf::ASClass::Self *)(v15) )
    {
      if ( v15 != nullptr && (*(uint16_t *)v15)-- == 1 )
      {
        v21 = result;
        gameswf::free_internal(v15);
        result = v21;
      }
      *(self + 18) = (gameswf::Self *)(result);
      if ( result != nullptr )
        ++*(uint16_t *)result;
    }
  }
  *(self + 23) = (gameswf::Self *)((unsigned int)(uintptr_t)(*(self + 23)) & 0xFF000000);
  *(self + 25) = (gameswf::Self *)((unsigned int)(uintptr_t)(*(self + 25)) & 0xFF000000);
  *(self + 20) = nullptr;
  *(self + 21) = nullptr;
  *(self + 22) = nullptr;
  *((uint8_t *)self + 95) = 0;
  *(self + 24) = nullptr;
  *((uint8_t *)self + 103) = 0;
  *(self + 26) = nullptr;
  *((uint8_t *)self + 109) = 0;
  *((uint8_t *)self + 110) = 0;
  *((uint8_t *)self + 111) = 0;
  *(self + 28) = (gameswf::Self *)-1;
  *(self + 29) = nullptr;
  *(self + 30) = nullptr;
  *(self + 31) = nullptr;
  *(self + 32) = nullptr;
  *(self + 33) = nullptr;
  *(self + 34) = nullptr;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClass::initializeInstance  (binary VA: 0x106fb00)
// Original: gameswf::ASClass::initializeInstance
// ----------------------------------------------------------------------------
gameswf::abc_def::Self ** gameswf::ASClass::initializeInstance(gameswf::abc_def::Self ***self, gameswf::ASObject::Self *a2)
{
  gameswf::ASClass::Self *v2;
  gameswf::abc_def::Self **result;
  int v4;
  int v5;
  gameswf::ASClass::Self *v6;

  v2 = (gameswf::ASClass::Self *)self;
  result = *((gameswf::abc_def::Self ***)a2 + 7);
  if ( result == nullptr )
  {
    *((uint32_t *)a2 + 6) = (uint32_t)(uintptr_t)(self);
    result = *(self + 17);
    *((uint32_t *)a2 + 7) = (uint32_t)(uintptr_t)(result);
    v4 = ((int)((uint32_t)(uintptr_t)(*(self + 23)) << 8) >> 8) - 1;
    if ( v4 >= 0 )
    {
      v5 = 4 * v4;
      do
      {
        result = *(gameswf::abc_def::Self ***)(*(uint32_t *)(*((uint32_t *)v2 + 22) + v5) + 68);
        if ( result != nullptr )
        {
          v6 = v2;
          result = (gameswf::abc_def::Self **)gameswf::abc_def::initializeTraits(
                                          *result,
                                          a2,
                                          *(gameswf::ObjectInfo::Self **)(*(uint32_t *)(*((uint32_t *)v2 + 22) + v5) + 68));
          v2 = v6;
        }
        --v4;
        v5 -= 4;
      }
      while ( v4 != -1 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClass::isInstanceOf  (binary VA: 0x106fba0)
// Original: gameswf::ASClass::isInstanceOf
// ----------------------------------------------------------------------------
int gameswf::ASClass::isInstanceOf(gameswf::ASClass::Self *self, gameswf::ASClass::Self *a2)
{
  int result;
  gameswf::ASClass::Self *v3;
  int v4;
  gameswf::ASClass::Self *v5;
  gameswf::ASClass::Self *v6;
  gameswf::Self *v7;
  gameswf::ASClass::Self *v8;
  int i;

  result = 1;
  v3 = self;
  if ( a2 != self )
  {
    while ( 1 )
    {
      v4 = (int)(*((uint32_t *)v3 + 25) << 8) >> 8;
      if ( v4 > 0 )
      {
        for ( i = 0; i < v4; ++i )
        {
          while ( 1 )
          {
            v5 = *(gameswf::ASClass::Self **)(*((uint32_t *)v3 + 24) + 4 * i);
            if ( v5 != nullptr )
            {
              if ( v5 == a2 )
                return 1;
              v6 = *((gameswf::ASClass::Self **)v5 + 19);
              if ( v6 != nullptr )
                break;
            }
LABEL_10:
            if ( ++i >= v4 )
              goto LABEL_11;
          }
          while ( 1 )
          {
            v7 = *((gameswf::Self **)v5 + 18);
            if ( *((uint8_t *)v7 + 2) == 0 )
              break;
            if ( a2 == v6 )
              return 1;
            v5 = v6;
            v6 = *((gameswf::ASClass::Self **)v6 + 19);
            if ( v6 == nullptr )
              goto LABEL_10;
          }
          if ( (*(uint16_t *)v7)-- == 1 )
            gameswf::free_internal(v7);
          *((uint32_t *)v5 + 18) = 0;
          *((uint32_t *)v5 + 19) = 0;
          v4 = (int)(*((uint32_t *)v3 + 25) << 8) >> 8;
        }
      }
LABEL_11:
      v8 = *((gameswf::ASClass::Self **)v3 + 19);
      if ( v8 == nullptr )
        return 0;
      if ( *(uint8_t *)(*((uint32_t *)v3 + 18) + 2) == 0 )
      {
        sub_7E5ED0((gameswf::Self **)v3 + 18, nullptr);
        *((uint32_t *)v3 + 19) = 0;
        return 0;
      }
      if ( a2 == v8 )
        return 1;
      v3 = *((gameswf::ASClass::Self **)v3 + 19);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClass::findMethod  (binary VA: 0x106fcc0)
// Original: gameswf::ASClass::findMethod
// ----------------------------------------------------------------------------
int gameswf::ASClass::findMethod(int a1, uint32_t *a2, int a3, int a4)
{
  int result;
  uint8_t *v5;
  const char *s1;
  int v7;
  const char *s2;
  int i;
  uint8_t v10;
  uint8_t *v11;
  int v12;

  result = 0;
  if ( (int)(a2[2] << 8) > 0 )
  {
    v12 = 0;
    for ( i = 0; ; i += 20 )
    {
      v7 = a2[1] + i;
      v11 = *(uint8_t **)(*(uint32_t *)(*(uint32_t *)(*a2 + 172) + 16)
                      + 4 * *(uint32_t *)(*(uint32_t *)(*a2 + 108) + 4 * (*(uint32_t *)v7 & 0xFFFFFF)));
      if ( *(uint8_t *)gameswf::abc_def::getMultiNamespaceInfo((gameswf::abc_def::Self *)*a2, *(uint32_t *)v7 & 0xFFFFFF) == 5
        || (*(uint8_t *)(v7 + 3) & 0xFu) - 1 > 2 )
      {
        goto LABEL_7;
      }
      s2 = (const char *)(a3 + 1);
      if ( *(uint8_t *)a3 == 0xFF )
      {
        s2 = *(const char **)(a3 + 12);
        v5 = v11;
        if ( *v11 == 0xFF )
        {
LABEL_12:
          s1 = *((const char **)v5 + 3);
          goto LABEL_5;
        }
      }
      else
      {
        v5 = v11;
        if ( *v11 == 0xFF )
          goto LABEL_12;
      }
      s1 = (const char *)(v5 + 1);
LABEL_5:
      v10 = *(uint8_t *)(v7 + 3) & 0xF;
      if ( strcmp(s1, s2) == 0 && v10 == a4 )
        return *(uint32_t *)(*(uint32_t *)(*a2 + 132) + 4 * *(uint32_t *)(v7 + 8));
LABEL_7:
      if ( ++v12 >= (int)(a2[2] << 8) >> 8 )
        return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClass::findStaticMethod  (binary VA: 0x106fdf0)
// Original: gameswf::ASClass::findStaticMethod
// ----------------------------------------------------------------------------
int gameswf::ASClass::findStaticMethod(gameswf::ASClass::Self *self, const gameswf::String::Self *a2)
{
  int result;
  uint32_t *v3;

  result = 0;
  v3 = *((uint32_t **)self + 7);
  if ( v3 != nullptr )
    return gameswf::ASClass::findMethod((int)(uintptr_t)(self), v3, (int)(uintptr_t)(a2), 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClass::findDeclaredMethod  (binary VA: 0x106fe30)
// Original: gameswf::ASClass::findDeclaredMethod
// ----------------------------------------------------------------------------
int gameswf::ASClass::findDeclaredMethod(int a1, int a2, int a3)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 68) != 0 )
    return gameswf::ASClass::findMethod(a1, *(uint32_t **)(a1 + 68), a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClass::findBuiltinMethod  (binary VA: 0x106fe70)
// Original: gameswf::ASClass::findBuiltinMethod
// ----------------------------------------------------------------------------
int gameswf::ASClass::findBuiltinMethod(gameswf::ASClass::Self *self, const gameswf::String::Self *a2, gameswf::ASValue::Self *a3)
{
  int v3;
  gameswf::ASClass::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  gameswf::Self *v11;
  int v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  int v19;
  int *v20;
  int v21;
  int v22;
  const gameswf::String::Self *v23;
  const char *s2;
  const char *s1;
  int v26;
  int v27;
  gameswf::ASClass::Self *v28;
  char *v29;

  v3 = 0;
  if ( self == nullptr )
    return v3;
  v28 = self;
  v4 = self;
  while ( 1 )
  {
    v5 = *((uint32_t *)v4 + 26);
    if ( v5 != 0 )
    {
      v29 = *((char **)a2 + 4);
      if ( (uint8_t *)((unsigned int)(uintptr_t)(v29) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( *(uint8_t *)a2 == 0xFF )
        {
          v13 = *((char **)a2 + 3);
          v12 = *((uint32_t *)a2 + 1) - 1;
        }
        else
        {
          v12 = *(char *)a2 - 1;
          v13 = (char *)a2 + 1;
        }
        v6 = 5381;
        v14 = 5381;
        if ( v12 > 0 )
        {
          do
          {
            --v12;
            v15 = 33 * v14;
            v16 = (uint8_t)v13[v12] + 32;
            if ( (uint8_t)(v13[v12] - 65) > 0x19u )
              v16 = (uint8_t)v13[v12];
            v14 = v15 ^ v16;
          }
          while ( v12 != 0 );
          v14 = v14 << 9 >> 9;
          v6 = v14;
        }
        *((uint32_t *)a2 + 4) = v14 & 0x7FFFFF | (unsigned int)(uintptr_t)(v29) & 0xFF800000;
        v5 = *((uint32_t *)v28 + 26);
      }
      else
      {
        v6 = (int)((uint32_t)(uintptr_t)(v29) << 9) >> 9;
      }
      v7 = *(uint32_t *)(v5 + 4);
      v8 = v7 & v6;
      v9 = (int *)(v5 + 24 * (v7 & v6) + 8);
      if ( *v9 != -2 )
      {
        v10 = *(uint32_t *)(v5 + 24 * (v7 & v6) + 12);
        if ( v8 == (v10 & v7) )
        {
          v19 = v6;
          v20 = v9;
          v21 = v5;
          v22 = v19;
          while ( 1 )
          {
            if ( v10 == v22 )
            {
              v23 = (const gameswf::String::Self *)v20[2];
              if ( a2 == v23 )
                break;
              s2 = *(uint8_t *)a2 == 0xFF ? *((const char **)a2 + 3) : (char *)a2 + 1;
              s1 = *(uint8_t *)v23 == 0xFF ? *((const char **)v23 + 3) : (char *)v23 + 1;
              v27 = v21;
              v26 = strcmp(s1, s2);
              v21 = v27;
              if ( v26 == 0 )
                break;
            }
            v8 = *v20;
            if ( *v20 == -1 )
              goto LABEL_8;
            v20 = (int *)(v21 + 24 * v8 + 8);
            v10 = *(uint32_t *)(v21 + 24 * v8 + 12);
          }
          if ( v8 >= 0 )
            break;
        }
      }
    }
LABEL_8:
    v4 = *((gameswf::ASClass::Self **)v28 + 19);
    if ( v4 == nullptr )
      return 0;
    v11 = *((gameswf::Self **)v28 + 18);
    if ( *((uint8_t *)v11 + 2) == 0 )
    {
      if ( (*(uint16_t *)v11)-- == 1 )
        gameswf::free_internal(v11);
      v3 = 0;
      *((uint32_t *)v28 + 18) = 0;
      *((uint32_t *)v28 + 19) = 0;
      return v3;
    }
    v28 = *((gameswf::ASClass::Self **)v28 + 19);
  }
  v3 = 1;
  if ( a3 == nullptr )
    return v3;
  gameswf::ASValue::opAssign(a3, (const gameswf::ASValue::Self *)(v21 + 24 * v8 + 20));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClass::enumerateMembers  (binary VA: 0x10700b0)
// Original: gameswf::ASClass::enumerateMembers
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ASClass::enumerateMembers(gameswf::Self **self, gameswf::array<int> *a2, bool a3)
{
  gameswf::ASClass::Self *v3;
  gameswf::Self *result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  char *v12;
  int v13;
  void *v14;
  int v15;
  gameswf::ASClass::Self *v16;
  gameswf::ASClass::Self *v17;
  gameswf::ASClass::Self *v18;
  int v19;
  int v20;

  v3 = (gameswf::ASClass::Self *)self;
  result = *(self + 17);
  if ( result != nullptr )
  {
    v5 = (int)(*((uint32_t *)result + 2) << 8) >> 8;
    if ( *((uint32_t *)a2 + 3) == 0 )
    {
      v6 = *((uint32_t *)a2 + 1) + v5;
      v7 = *((uint32_t *)a2 + 2);
      *((uint32_t *)a2 + 2) = v6;
      if ( v6 != 0 )
      {
        if ( *(uint32_t *)a2 != 0 )
          v14 = gameswf::realloc_internal(*(gameswf::Self **)a2, 4 * v6, 4 * v7);
        else
          v14 = (void *)gameswf::malloc_internal(4 * v6);
        *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v14);
        v3 = (gameswf::ASClass::Self *)self;
        result = *(self + 17);
        v5 = (int)(*((uint32_t *)result + 2) << 8) >> 8;
      }
      else
      {
        if ( *(uint32_t *)a2 != 0 )
        {
          gameswf::free_internal(*(gameswf::Self **)a2);
          v3 = (gameswf::ASClass::Self *)self;
        }
        *(uint32_t *)a2 = 0;
        result = *((gameswf::Self **)v3 + 17);
        v5 = (int)(*((uint32_t *)result + 2) << 8) >> 8;
      }
    }
    if ( v5 > 0 )
    {
      v8 = *((uint32_t *)a2 + 1);
      v9 = 0;
      v19 = 0;
      while ( 1 )
      {
        v20 = *(uint32_t *)(*(uint32_t *)(**((uint32_t **)v3 + 7) + 108)
                        + 4 * (*(uint32_t *)(*((uint32_t *)result + 1) + v9) & 0xFFFFFF));
        v10 = v8 + 1;
        v15 = *((uint32_t *)a2 + 2);
        if ( v8 + 1 <= v15 || *((uint32_t *)a2 + 3) != 0 )
        {
          v11 = *(char **)a2;
        }
        else
        {
          v13 = v10 + (v10 >> 1);
          *((uint32_t *)a2 + 2) = v13;
          if ( v13 != 0 )
          {
            v17 = v3;
            v11 = *(uint32_t *)a2 != 0
                ? (char *)gameswf::realloc_internal(*(gameswf::Self **)a2, 4 * v13, 4 * v15)
                : (char *)gameswf::malloc_internal(4 * v13);
            *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v11);
            v8 = *((uint32_t *)a2 + 1);
            v3 = v17;
          }
          else
          {
            if ( *(uint32_t *)a2 != 0 )
            {
              v16 = v3;
              gameswf::free_internal(*(gameswf::Self **)a2);
              v8 = *((uint32_t *)a2 + 1);
              v3 = v16;
            }
            *(uint32_t *)a2 = 0;
            v11 = nullptr;
          }
        }
        v12 = &v11[4 * v8];
        if ( v12 != nullptr )
          *(uint32_t *)v12 = v20;
        *((uint32_t *)a2 + 1) = v10;
        result = *((gameswf::Self **)v3 + 17);
        ++v19;
        v9 += 20;
        if ( v19 >= (int)(*((uint32_t *)result + 2) << 8) >> 8 )
          break;
        v8 = v10;
      }
    }
  }
  if ( a3 )
  {
    result = *((gameswf::Self **)v3 + 19);
    if ( result != nullptr )
    {
      if ( *(uint8_t *)(*((uint32_t *)v3 + 18) + 2) != 0 )
      {
        return (gameswf::Self *)gameswf::ASClass::enumerateMembers(result, a2, true);
      }
      else
      {
        v18 = v3;
        result = sub_7E5ED0((gameswf::Self **)v3 + 18, nullptr);
        *((uint32_t *)v18 + 19) = 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClass::enumerateStatics  (binary VA: 0x1070340)
// Original: gameswf::ASClass::enumerateStatics
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ASClass::enumerateStatics(gameswf::ASClass::Self *self, gameswf::array<int> *a2, bool a3)
{
  gameswf::Self *result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  result = *((gameswf::Self **)self + 7);
  if ( result == nullptr )
    goto LABEL_21;
  v4 = (int)(*((uint32_t *)result + 2) << 8) >> 8;
  if ( *((uint32_t *)a2 + 3) == 0 )
  {
    v5 = *((uint32_t *)a2 + 1) + v4;
    v6 = *((uint32_t *)a2 + 2);
    *((uint32_t *)a2 + 2) = v5;
    if ( v5 == 0 )
    {
      if ( *(uint32_t *)a2 != 0 )
        gameswf::free_internal(*(gameswf::Self **)a2);
      *(uint32_t *)a2 = 0;
      goto LABEL_7;
    }
    if ( *(uint32_t *)a2 == 0 )
    {
      *(uint32_t *)a2 = gameswf::malloc_internal(4 * v5);
LABEL_7:
      result = *((gameswf::Self **)self + 7);
      v4 = (int)(*((uint32_t *)result + 2) << 8) >> 8;
      goto LABEL_8;
    }
    *(uint32_t *)a2 = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)a2, 4 * v5, 4 * v6));
    result = *((gameswf::Self **)self + 7);
    v4 = (int)(*((uint32_t *)result + 2) << 8) >> 8;
  }
LABEL_8:
  if ( v4 > 0 )
  {
    v7 = *((uint32_t *)a2 + 1);
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      v17 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)result + 108) + 4
                                                             * (*(uint32_t *)(*((uint32_t *)result + 1) + v9) & 0xFFFFFF));
      v10 = v7 + 1;
      v14 = *((uint32_t *)a2 + 2);
      if ( v7 + 1 <= v14 || *((uint32_t *)a2 + 3) != 0 )
      {
        v11 = *(char **)a2;
      }
      else
      {
        v13 = v10 + (v10 >> 1);
        *((uint32_t *)a2 + 2) = v13;
        if ( v13 != 0 )
        {
          v16 = v8;
          v11 = *(uint32_t *)a2 != 0
              ? (char *)gameswf::realloc_internal(*(gameswf::Self **)a2, 4 * v13, 4 * v14)
              : (char *)gameswf::malloc_internal(4 * v13);
          *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v11);
          v7 = *((uint32_t *)a2 + 1);
          v8 = v16;
        }
        else
        {
          if ( *(uint32_t *)a2 != 0 )
          {
            v15 = v8;
            gameswf::free_internal(*(gameswf::Self **)a2);
            v7 = *((uint32_t *)a2 + 1);
            v8 = v15;
          }
          *(uint32_t *)a2 = 0;
          v11 = nullptr;
        }
      }
      v12 = &v11[4 * v7];
      if ( v12 != nullptr )
        *(uint32_t *)v12 = v17;
      *((uint32_t *)a2 + 1) = v10;
      ++v8;
      v9 += 20;
      result = *((gameswf::Self **)self + 7);
      if ( v8 >= (int)(*((uint32_t *)result + 2) << 8) >> 8 )
        break;
      v7 = v10;
    }
  }
LABEL_21:
  if ( a3 )
  {
    result = *((gameswf::Self **)self + 19);
    if ( result != nullptr )
    {
      if ( *(uint8_t *)(*((uint32_t *)self + 18) + 2) != 0 )
      {
        return (gameswf::Self *)gameswf::ASClass::enumerateStatics(result, a2, true);
      }
      else
      {
        result = sub_7E5ED0((gameswf::Self **)self + 18, nullptr);
        *((uint32_t *)self + 19) = 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClass::enumerateBuiltinMethods  (binary VA: 0x10705c0)
// Original: gameswf::ASClass::enumerateBuiltinMethods
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ASClass::enumerateBuiltinMethods(gameswf::ASClass::Self *self, gameswf::array<gameswf::String::Self> *a2)
{
  gameswf::Self *result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  char *v12;
  int v13;
  gameswf::Self *v14;
  char *v15;
  gameswf::Self *v16;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  char *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  char *v28;
  int v29;
  int v30;
  int v31;
  char *v32;

  result = *((gameswf::Self **)self + 19);
  if ( result != nullptr )
  {
    if ( *(uint8_t *)(*((uint32_t *)self + 18) + 2) != 0 )
    {
      result = (gameswf::Self *)gameswf::ASClass::enumerateBuiltinMethods(*((gameswf::ASClass::Self **)self + 19), a2);
    }
    else
    {
      result = sub_7E5ED0((gameswf::Self **)self + 18, nullptr);
      *((uint32_t *)self + 19) = 0;
    }
  }
  v3 = *((uint32_t *)self + 26);
  v32 = (char *)self + 104;
  if ( v3 != 0 )
  {
    v4 = *(uint32_t *)(v3 + 4);
    v30 = 0;
    if ( v4 >= 0 && *(uint32_t *)(v3 + 8) == -2 )
    {
      v5 = 32;
      v6 = 1;
      while ( 1 )
      {
        v30 = v6;
        if ( v6 > v4 )
          break;
        v7 = *(uint32_t *)(v3 + v5);
        ++v6;
        v5 += 24;
        if ( v7 != -2 )
        {
          result = (gameswf::Self *)((gameswf::ASClass::Self *)((char *)self + 104));
          if ( self == (gameswf::ASClass::Self *)-104 )
            return result;
          goto LABEL_13;
        }
      }
    }
    result = (gameswf::Self *)((gameswf::ASClass::Self *)((char *)self + 104));
    if ( self != (gameswf::ASClass::Self *)-104 )
    {
LABEL_13:
      result = *((gameswf::Self **)self + 26);
      while ( result != nullptr && *((uint32_t *)result + 1) >= v30 )
      {
        v28 = *((char **)result + 6 * v30 + 4);
        v8 = *((uint32_t *)a2 + 1);
        v31 = v8 + 1;
        v9 = *((uint32_t *)a2 + 2);
        if ( v8 + 1 <= v9 || *((uint32_t *)a2 + 3) != 0 )
        {
          v11 = *(char **)a2;
        }
        else
        {
          v10 = v31 + (v31 >> 1);
          *((uint32_t *)a2 + 2) = v10;
          if ( v10 != 0 )
          {
            v11 = *(uint32_t *)a2 != 0
                ? (char *)gameswf::realloc_internal(*(gameswf::Self **)a2, 20 * v10, 20 * v9)
                : (char *)gameswf::malloc_internal(20 * v10);
            *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v11);
            v8 = *((uint32_t *)a2 + 1);
          }
          else
          {
            if ( *(uint32_t *)a2 != 0 )
            {
              gameswf::free_internal(*(gameswf::Self **)a2);
              v8 = *((uint32_t *)a2 + 1);
            }
            v11 = nullptr;
            *(uint32_t *)a2 = 0;
          }
        }
        v12 = &v11[20 * v8];
        if ( v12 != nullptr )
        {
          *v12 = 1;
          v12[1] = 0;
          if ( *v28 == -1 )
            v13 = *((uint32_t *)v28 + 1) - 1;
          else
            v13 = *v28 - 1;
          gameswf::String::resize((gameswf::String::Self *)v12, v13);
          v14 = (gameswf::Self *)(v28 + 1);
          if ( *v28 == -1 )
            v14 = *((gameswf::Self **)v28 + 3);
          LOBYTE(v15) = *v12;
          if ( *v12 == -1 )
          {
            v15 = *((char **)v12 + 1);
            v16 = *((gameswf::Self **)v12 + 3);
          }
          else
          {
            v15 = (char *)(char)(uintptr_t)(v15);
            v16 = (gameswf::Self *)(v12 + 1);
          }
          gameswf::Strcpy_s(v16, v15, v14);
          v29 = *((uint32_t *)v28 + 4);
          if ( (uint8_t *)(v29 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
          {
            if ( *v28 == -1 )
            {
              v22 = *((char **)v28 + 3);
              v21 = *((uint32_t *)v28 + 1) - 1;
            }
            else
            {
              v21 = *v28 - 1;
              v22 = v28 + 1;
            }
            v17 = 5381;
            if ( v21 > 0 )
            {
              do
              {
                --v21;
                v23 = 33 * v17;
                v24 = (uint8_t)v22[v21] + 32;
                if ( (uint8_t)(v22[v21] - 65) > 0x19u )
                  v24 = (uint8_t)v22[v21];
                v17 = v23 ^ v24;
              }
              while ( v21 != 0 );
              v17 = v17 << 9 >> 9;
            }
            *((uint32_t *)v28 + 4) = v17 & 0x7FFFFF | v29 & 0xFF800000;
          }
          else
          {
            v17 = v29 << 9 >> 9;
          }
          v18 = v17 & 0x7FFFFF | *((uint32_t *)v12 + 4) & 0xFF800000;
          *((uint32_t *)v12 + 4) = v18;
          v12[18] = BYTE2(v18) & 0x7F;
          v12[19] = HIBYTE(v18) | 1;
        }
        *((uint32_t *)a2 + 1) = v31;
        result = *(gameswf::Self **)v32;
        v19 = *(uint32_t *)(*(uint32_t *)v32 + 4);
        if ( v19 < v30 )
          break;
        v20 = v30 + 1;
        if ( v19 >= v30 + 1 && *((uint32_t *)result + 6 * v20 + 2) == -2 )
        {
          v25 = v30 + 2;
          v26 = 24 * (v30 + 2) + 8;
          do
          {
            v20 = v25;
            if ( v19 < v25 )
              break;
            v27 = *(uint32_t *)((char *)result + v26);
            ++v25;
            v26 += 24;
          }
          while ( v27 == -2 );
        }
        v30 = v20;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClass::getFullClassName  (binary VA: 0x1070940)
// Original: gameswf::ASClass::getFullClassName
// ----------------------------------------------------------------------------
gameswf::ASClass::Self * gameswf::ASClass::getFullClassName(gameswf::ASClass::Self *self, int a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  gameswf::Self *v5;
  char v6;
  int v7;
  gameswf::Self *v8;
  char v9;
  int v10;
  gameswf::Self *v11;
  char *v12;
  gameswf::Self *v13;
  int v14;
  int v15;
  char *v16;
  char *v17;
  char v18;
  int v19;
  int v20;
  gameswf::Self *v21;
  char *v22;
  char *v23;
  bool v25;
  char v26;
  char *v27;
  int v28;
  int v29;
  int v30;
  int v31;

  v2 = a2;
  v3 = *((uint32_t *)self + 4);
  *(uint8_t *)self = 1;
  v3 |= 0x7FFFFFu;
  *((uint8_t *)self + 1) = 0;
  *((uint32_t *)self + 4) = v3;
  *((uint8_t *)self + 18) = BYTE2(v3) & 0x7F;
  *((uint8_t *)self + 19) = HIBYTE(v3) | 1;
  v4 = *(uint32_t **)(a2 + 84);
  if ( v4 != nullptr )
  {
    v5 = *(gameswf::Self **)(a2 + 80);
    if ( *((uint8_t *)v5 + 2) == 0 )
    {
      v25 = (*(uint16_t *)v5)-- == 1;
      if ( v25 )
        gameswf::free_internal(v5);
      *(uint32_t *)(a2 + 80) = 0;
      *(uint32_t *)(a2 + 84) = 0;
      v4 = nullptr;
    }
  }
  v6 = *((uint8_t *)v4 + 48);
  if ( v6 == -1 )
    v7 = v4[13] - 1;
  else
    v7 = v6 - 1;
  if ( v7 > 0 )
  {
    v8 = *(gameswf::Self **)(a2 + 80);
    if ( *((uint8_t *)v8 + 2) == 0 )
    {
      v25 = (*(uint16_t *)v8)-- == 1;
      if ( v25 )
        gameswf::free_internal(v8);
      *(uint32_t *)(a2 + 80) = 0;
      *(uint32_t *)(a2 + 84) = 0;
      v4 = nullptr;
    }
    if ( self != (gameswf::ASClass::Self *)(v4 + 12) )
    {
      v9 = *((uint8_t *)v4 + 48);
      if ( v9 == -1 )
        v10 = v4[13] - 1;
      else
        v10 = v9 - 1;
      gameswf::String::resize(self, v10);
      v11 = (gameswf::Self *)((char *)v4 + 49);
      if ( *((uint8_t *)v4 + 48) == 0xFF )
        v11 = (gameswf::Self *)v4[15];
      LOBYTE(v12) = *(uint8_t *)self;
      if ( *(uint8_t *)self == 0xFF )
      {
        v12 = *((char **)self + 1);
        v13 = *((gameswf::Self **)self + 3);
      }
      else
      {
        v12 = (char *)(char)(uintptr_t)(v12);
        v13 = (gameswf::Self *)((gameswf::ASClass::Self *)((char *)self + 1));
      }
      gameswf::Strcpy_s(v13, v12, v11);
      v31 = v4[16];
      if ( (uint8_t *)(v31 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        v26 = *((uint8_t *)v4 + 48);
        if ( v26 == -1 )
        {
          v27 = (char *)v4[15];
          v28 = v4[13] - 1;
        }
        else
        {
          v27 = (char *)v4 + 49;
          v28 = v26 - 1;
        }
        v14 = 5381;
        if ( v28 > 0 )
        {
          do
          {
            --v28;
            v29 = 33 * v14;
            v30 = (uint8_t)v27[v28] + 32;
            if ( (uint8_t)(v27[v28] - 65) > 0x19u )
              v30 = (uint8_t)v27[v28];
            v14 = v29 ^ v30;
          }
          while ( v28 != 0 );
          v2 = a2;
          v14 = v14 << 9 >> 9;
        }
        v4[16] = v14 & 0x7FFFFF | v31 & 0xFF800000;
      }
      else
      {
        v14 = v31 << 9 >> 9;
      }
      *((uint32_t *)self + 4) = v14 & 0x7FFFFF | *((uint32_t *)self + 4) & 0xFF800000;
    }
    v15 = *(char *)self - 1;
    if ( *(uint8_t *)self == 0xFF )
      v15 = *((uint32_t *)self + 1) - 1;
    gameswf::String::resize(self, v15 + 1);
    LOBYTE(v16) = *(uint8_t *)self;
    if ( *(uint8_t *)self == 0xFF )
    {
      v16 = *((char **)self + 1);
      v17 = *((char **)self + 3);
    }
    else
    {
      v16 = (char *)(char)(uintptr_t)(v16);
      v17 = (char *)self + 1;
    }
    gameswf::Strcpy_s((gameswf::Self *)&v17[v15], v16, (gameswf::Self *)".");
    *((uint32_t *)self + 4) |= 0x7FFFFFu;
  }
  v18 = *(uint8_t *)(v2 + 40);
  if ( v18 == -1 )
    v19 = *(uint32_t *)(v2 + 44) - 1;
  else
    v19 = v18 - 1;
  v20 = *(char *)self - 1;
  if ( *(uint8_t *)self == 0xFF )
    v20 = *((uint32_t *)self + 1) - 1;
  gameswf::String::resize(self, v19 + v20);
  if ( *(uint8_t *)(v2 + 40) == 0xFF )
    v21 = *(gameswf::Self **)(v2 + 52);
  else
    v21 = (gameswf::Self *)(v2 + 41);
  LOBYTE(v22) = *(uint8_t *)self;
  if ( *(uint8_t *)self == 0xFF )
  {
    v22 = *((char **)self + 1);
    v23 = *((char **)self + 3);
  }
  else
  {
    v22 = (char *)(char)(uintptr_t)(v22);
    v23 = (char *)self + 1;
  }
  gameswf::Strcpy_s((gameswf::Self *)&v23[v20], v22, v21);
  *((uint32_t *)self + 4) |= 0x7FFFFFu;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClass::initialize  (binary VA: 0x1072370)
// Original: gameswf::ASClass::initialize
// ----------------------------------------------------------------------------
void gameswf::ASClass::initialize(gameswf::ASClass::Self *self)
{
  gameswf::ASClass::Self *v1;
  uint32_t *v2;
  gameswf::RefCounted::Self *v3;
  gameswf::RefCounted::Self *v4;
  gameswf::ASClass::Self *v5;
  int v6;
  gameswf::ASClass::Self *v7;
  gameswf::Self *v8;
  gameswf::ASClass::Self *v9;
  gameswf::ASClass::Self *v10;
  int v11;
  gameswf::Self *v12;
  bool v13;
  int v14;
  gameswf::Self **v15;
  gameswf::Self *v16;
  gameswf::Self *v17;
  gameswf::abc_def::Self **v18;
  int v19;
  char *v20;
  gameswf::abc_def::Self *v21;
  uint8_t v22;
  int v23;
  gameswf::Self *v24;
  int DeclaredMethod;
  gameswf::Self *v26;
  int16_t v27;
  int v28;
  int v29;
  int v30;
  int v31;
  uint32_t *v32;
  gameswf::abc_def::Self *v33;
  gameswf::ObjectInfo::Self *v34;
  gameswf::Self *v35;
  gameswf::Self *WeakProxy;
  gameswf::RefCounted::Self **v37;
  gameswf::ASObject::Self *v38;
  gameswf::RefCounted::Self **v39;
  gameswf::ObjectInfo::Self *v40;
  typedef gameswf::RefCounted::Self *_g4_t_v41;
  typedef gameswf::RefCounted::Self *_g4_t_v42;
  typedef gameswf::RefCounted::Self *_g4_t_v43;
  typedef gameswf::ASValue::Self *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef gameswf::Self **_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef gameswf::ObjectInfo::Self *_g4_t_v52;
  typedef gameswf::ObjectInfo::Self *_g4_t_v53;
  typedef uint8_t _g4_t_v54[4];
  typedef gameswf::RefCounted::Self *_g4_t_v55;
  typedef uint8_t _g4_t_v56[4];
  typedef gameswf::Self **_g4_t_v57;
  typedef uint8_t _g4_t_v58[12];
  typedef uint32_t _g4_t_v59[28];
  typedef char _g4_t_v60;
  typedef char _g4_t_v61;
  typedef char _g4_t_v62;
  typedef char _g4_t_v63;
  typedef char _g4_t_v64;
  typedef char _g4_t_v65;
  typedef char _g4_t_v66;
  typedef char _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef char _g4_t_v73;
  typedef char _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef gameswf::Self *_g4_t_v79[10];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (0u + sizeof(_g4_t_v41)) > _g4_s0 ? (0u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v42)) > _g4_s1 ? (0u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v43)) > _g4_s2 ? (0u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v44)) > _g4_s3 ? (4u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v45)) > _g4_s4 ? (12u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v46)) > _g4_s5 ? (16u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v47)) > _g4_s6 ? (20u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v48)) > _g4_s7 ? (24u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v49)) > _g4_s8 ? (28u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v50)) > _g4_s9 ? (28u + sizeof(_g4_t_v50)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v51)) > _g4_s10 ? (32u + sizeof(_g4_t_v51)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v52)) > _g4_s11 ? (32u + sizeof(_g4_t_v52)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v53)) > _g4_s12 ? (32u + sizeof(_g4_t_v53)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v54)) > _g4_s13 ? (48u + sizeof(_g4_t_v54)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v55)) > _g4_s14 ? (52u + sizeof(_g4_t_v55)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v56)) > _g4_s15 ? (60u + sizeof(_g4_t_v56)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v57)) > _g4_s16 ? (64u + sizeof(_g4_t_v57)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v58)) > _g4_s17 ? (72u + sizeof(_g4_t_v58)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v59)) > _g4_s18 ? (84u + sizeof(_g4_t_v59)) : _g4_s18,
    _g4_s20 = (196u + sizeof(_g4_t_v60)) > _g4_s19 ? (196u + sizeof(_g4_t_v60)) : _g4_s19,
    _g4_s21 = (197u + sizeof(_g4_t_v61)) > _g4_s20 ? (197u + sizeof(_g4_t_v61)) : _g4_s20,
    _g4_s22 = (208u + sizeof(_g4_t_v62)) > _g4_s21 ? (208u + sizeof(_g4_t_v62)) : _g4_s21,
    _g4_s23 = (209u + sizeof(_g4_t_v63)) > _g4_s22 ? (209u + sizeof(_g4_t_v63)) : _g4_s22,
    _g4_s24 = (220u + sizeof(_g4_t_v64)) > _g4_s23 ? (220u + sizeof(_g4_t_v64)) : _g4_s23,
    _g4_s25 = (221u + sizeof(_g4_t_v65)) > _g4_s24 ? (221u + sizeof(_g4_t_v65)) : _g4_s24,
    _g4_s26 = (232u + sizeof(_g4_t_v66)) > _g4_s25 ? (232u + sizeof(_g4_t_v66)) : _g4_s25,
    _g4_s27 = (233u + sizeof(_g4_t_v67)) > _g4_s26 ? (233u + sizeof(_g4_t_v67)) : _g4_s26,
    _g4_s28 = (244u + sizeof(_g4_t_v68)) > _g4_s27 ? (244u + sizeof(_g4_t_v68)) : _g4_s27,
    _g4_s29 = (248u + sizeof(_g4_t_v69)) > _g4_s28 ? (248u + sizeof(_g4_t_v69)) : _g4_s28,
    _g4_s30 = (252u + sizeof(_g4_t_v70)) > _g4_s29 ? (252u + sizeof(_g4_t_v70)) : _g4_s29,
    _g4_s31 = (256u + sizeof(_g4_t_v71)) > _g4_s30 ? (256u + sizeof(_g4_t_v71)) : _g4_s30,
    _g4_s32 = (260u + sizeof(_g4_t_v72)) > _g4_s31 ? (260u + sizeof(_g4_t_v72)) : _g4_s31,
    _g4_s33 = (264u + sizeof(_g4_t_v73)) > _g4_s32 ? (264u + sizeof(_g4_t_v73)) : _g4_s32,
    _g4_s34 = (265u + sizeof(_g4_t_v74)) > _g4_s33 ? (265u + sizeof(_g4_t_v74)) : _g4_s33,
    _g4_s35 = (276u + sizeof(_g4_t_v75)) > _g4_s34 ? (276u + sizeof(_g4_t_v75)) : _g4_s34,
    _g4_s36 = (280u + sizeof(_g4_t_v76)) > _g4_s35 ? (280u + sizeof(_g4_t_v76)) : _g4_s35,
    _g4_s37 = (284u + sizeof(_g4_t_v77)) > _g4_s36 ? (284u + sizeof(_g4_t_v77)) : _g4_s36,
    _g4_s38 = (288u + sizeof(_g4_t_v78)) > _g4_s37 ? (288u + sizeof(_g4_t_v78)) : _g4_s37,
    _g4_s39 = (292u + sizeof(_g4_t_v79)) > _g4_s38 ? (292u + sizeof(_g4_t_v79)) : _g4_s38
  };
  alignas(16) uint8_t _g4_sf[_g4_s39];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 0u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 0u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 24u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 28u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 52u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 64u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 72u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 84u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 196u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 197u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 208u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 209u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 220u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 221u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 232u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 233u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 244u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 248u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 252u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 256u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 260u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 264u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 265u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 276u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 280u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 284u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 288u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 292u);

  v79[6] = (gameswf::Self *)&self;
  v1 = self;
  v2 = *((uint32_t **)self + 17);
  *((uint8_t *)self + 109) = 1;
  if ( v2 == nullptr )
    return;
  *((uint32_t *)v1 + 6) = (uint32_t)(uintptr_t)(v1);
  *((uint32_t *)v1 + 7) = *(uint32_t *)(*v2 + 156) + 24 * v2[5];
  v3 = *(gameswf::RefCounted::Self **)(*(uint32_t *)(*v2 + 132) + 4 * v2[11]);
  v4 = *((gameswf::RefCounted::Self **)v1 + 16);
  if ( v3 != v4 )
  {
    if ( v4 != nullptr )
      gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v1 + 16));
    *((uint32_t *)v1 + 16) = (uint32_t)(uintptr_t)(v3);
    if ( v3 != nullptr )
      gameswf::RefCounted::addRef(v3);
  }
  v5 = v1;
  v6 = 1;
  v7 = *((gameswf::ASClass::Self **)v1 + 19);
  if ( v7 != nullptr )
  {
    while ( 1 )
    {
      v8 = *((gameswf::Self **)v5 + 18);
      if ( *((uint8_t *)v8 + 2) == 0 )
        break;
      v5 = v7;
      ++v6;
      v7 = *((gameswf::ASClass::Self **)v7 + 19);
      if ( v7 == nullptr )
        goto LABEL_10;
    }
    v51 = v6;
    v27 = *(uint16_t *)v8 - 1;
    *(uint16_t *)v8 = v27;
    if ( v27 == 0 )
      gameswf::free_internal(v8);
    *((uint32_t *)v5 + 18) = 0;
    *((uint32_t *)v5 + 19) = 0;
    if ( *((uint32_t *)v1 + 22) != 0 )
      goto LABEL_11;
    goto LABEL_40;
  }
LABEL_10:
  v51 = v6;
  if ( *((uint32_t *)v1 + 22) == 0 )
  {
LABEL_40:
    *((uint32_t *)v1 + 23) = (v51 << 8 >> 8) & 0xFFFFFF | *((uint32_t *)v1 + 23) & 0xFF000000;
    v28 = gameswf::malloc_internal(4 * (v51 << 8 >> 8));
    *((uint8_t *)v1 + 95) = 1;
    v29 = *((uint32_t *)v1 + 23) << 8;
    *((uint32_t *)v1 + 22) = v28;
    v30 = v29 >> 8;
    if ( v30 > 0 )
    {
      v31 = 0;
      while ( 1 )
      {
        v32 = (uint32_t *)(v28 + 4 * v31);
        if ( v32 != nullptr )
        {
          *v32 = 0;
          v30 = (int)(*((uint32_t *)v1 + 23) << 8) >> 8;
        }
        if ( ++v31 >= v30 )
          break;
        v28 = *((uint32_t *)v1 + 22);
      }
    }
  }
LABEL_11:
  v9 = v1;
  v10 = v1;
  v11 = 0;
  do
  {
    while ( 1 )
    {
      *(uint32_t *)(*((uint32_t *)v10 + 22) + 4 * v11) = (uint32_t)(uintptr_t)(v9);
      if ( *((uint32_t *)v9 + 19) == 0 )
      {
        v9 = nullptr;
        goto LABEL_13;
      }
      v12 = *((gameswf::Self **)v9 + 18);
      if ( *((uint8_t *)v12 + 2) == 0 )
        break;
      v9 = *((gameswf::ASClass::Self **)v9 + 19);
LABEL_13:
      if ( ++v11 >= v51 )
        goto LABEL_19;
    }
    v13 = (*(uint16_t *)v12)-- == 1;
    if ( v13 )
    {
      v44 = (gameswf::ASValue::Self *)(v10);
      gameswf::free_internal(v12);
      v10 = (gameswf::ASClass::Self *)(v44);
    }
    *((uint32_t *)v9 + 18) = 0;
    *((uint32_t *)v9 + 19) = 0;
    ++v11;
    v9 = nullptr;
  }
  while ( v11 < v51 );
LABEL_19:
  v14 = *((uint32_t *)v10 + 19);
  v15 = (gameswf::Self **)v10;
  if ( v14 == 0 )
  {
LABEL_48:
    v52 = (gameswf::ObjectInfo::Self *)(v15[17]);
    v18 = (gameswf::abc_def::Self **)v52;
    goto LABEL_49;
  }
  if ( *(uint8_t *)(*((uint32_t *)v10 + 18) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)v10 + 18, nullptr);
    v15[19] = nullptr;
    goto LABEL_48;
  }
  if ( *(uint8_t *)(v14 + 109) != 0 )
  {
    v16 = *((gameswf::Self **)v10 + 16);
    if ( v16 != nullptr )
    {
LABEL_23:
      if ( G4_VCALL<uint8_t>(v16, 8, 8) != 0 )
      {
        v17 = v15[19];
        if ( v17 != nullptr && *((uint8_t *)v15[18] + 2) == 0 )
        {
          sub_7E5ED0(v15 + 18, nullptr);
          v15[19] = nullptr;
          v17 = nullptr;
        }
        *((uint32_t *)v16 + 11) = *((uint32_t *)v17 + 16);
      }
    }
  }
  else
  {
    gameswf::ASClass::initialize(*((gameswf::ASClass::Self **)v10 + 19));
    v16 = v15[16];
    if ( v16 != nullptr )
      goto LABEL_23;
  }
  v18 = (gameswf::abc_def::Self **)v15[17];
  v52 = (gameswf::ObjectInfo::Self *)v18;
  v19 = (int)((uint32_t)(uintptr_t)(v18[2]) << 8) >> 8;
  if ( v19 > 0 )
  {
    v47 = 0;
    v49 = 0;
    v46 = v15;
    while ( 1 )
    {
      v20 = (char *)v18[1] + v47;
      v21 = *v18;
      v48 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)*v18 + 43) + 16)
                      + 4 * *(uint32_t *)(*((uint32_t *)*v18 + 27) + 4 * (*(uint32_t *)v20 & 0xFFFFFF)));
      v22 = v20[3] & 0xF;
      if ( (unsigned int)v22 - 1 <= 2 )
      {
        v45 = *(uint32_t *)(*((uint32_t *)v21 + 33) + 4 * *((uint32_t *)v20 + 2));
        v23 = (int)(uintptr_t)(v46[19]);
        if ( v23 != 0 )
        {
          v24 = v46[18];
          if ( *((uint8_t *)v24 + 2) != 0 )
          {
            while ( 1 )
            {
              DeclaredMethod = gameswf::ASClass::findDeclaredMethod(v23, v48, v22);
              if ( DeclaredMethod != 0 )
                break;
              if ( *(uint32_t *)(v23 + 76) == 0 )
                goto LABEL_64;
              v26 = *(gameswf::Self **)(v23 + 72);
              if ( *((uint8_t *)v26 + 2) == 0 )
              {
                v13 = (*(uint16_t *)v26)-- == 1;
                if ( v13 )
                  gameswf::free_internal(v26);
                *(uint32_t *)(v23 + 72) = 0;
                *(uint32_t *)(v23 + 76) = 0;
LABEL_64:
                v52 = (gameswf::ObjectInfo::Self *)(v46[17]);
                v19 = (int)(*((uint32_t *)v52 + 2) << 8) >> 8;
                goto LABEL_65;
              }
              v23 = *(uint32_t *)(v23 + 76);
              v22 = v20[3] & 0xF;
            }
            *(uint32_t *)(v45 + 44) = DeclaredMethod;
            v52 = (gameswf::ObjectInfo::Self *)(v46[17]);
            v19 = (int)(*((uint32_t *)v52 + 2) << 8) >> 8;
          }
          else
          {
            v13 = (*(uint16_t *)v24)-- == 1;
            if ( v13 )
              gameswf::free_internal(v24);
            v40 = (gameswf::ObjectInfo::Self *)(v46[17]);
            v46[18] = nullptr;
            v46[19] = nullptr;
            v52 = v40;
            v19 = (int)(*((uint32_t *)v40 + 2) << 8) >> 8;
          }
        }
      }
LABEL_65:
      ++v49;
      v47 += 20;
      if ( v49 >= v19 )
        break;
      v18 = (gameswf::abc_def::Self **)v52;
    }
    v15 = v46;
    v18 = (gameswf::abc_def::Self **)v52;
  }
LABEL_49:
  v33 = *v18;
  v41 = (gameswf::RefCounted::Self *)(v15[7]);
  gameswf::abc_def::initializeObjectInfo(*v18, v52, (gameswf::ASClass::Self *)v15);
  gameswf::abc_def::initializeObjectInfo(v33, v41, v41);
  memset(v59, 0, 16);
  v34 = *((gameswf::ObjectInfo::Self **)v41 + 5);
  v60 = 0;
  v53 = v34;
  v35 = v15[4];
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79[0] = nullptr;
  v79[1] = v35;
  if ( v35 != nullptr )
  {
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v35);
    if ( WeakProxy != v79[0] )
    {
      v79[0] = WeakProxy;
      ++*(uint16_t *)WeakProxy;
    }
  }
  else
  {
    sub_7E5ED0(v79, nullptr);
  }
  v50 = 4 * (uint32_t)(uintptr_t)(v53);
  v42 = *(gameswf::RefCounted::Self **)(*((uint32_t *)v33 + 33) + 4 * (uint32_t)(uintptr_t)(v53));
  gameswf::abc_def::initializeTraits(v33, (gameswf::ASObject::Self *)v15, v15[7]);
  v56[0] = 5;
  v56[1] = 0;
  v57 = v15;
  gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v15);
  v54[0] = 5;
  v54[1] = 0;
  v55 = v42;
  if ( v42 != nullptr )
    gameswf::RefCounted::addRef(v42);
  gameswf::call_method(
    (gameswf::Self *)v58,
    (const gameswf::ASValue::Self *)v54,
    (gameswf::ASEnvironment::Self *)v59,
    (const gameswf::ASValue::Self *)v56,
    0,
    0,
    "StaticInit");
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v58);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v54);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v56);
  gameswf::Player::unregisterObject(v15[4], *(gameswf::ASObject::Self **)(*((uint32_t *)v33 + 33) + 4 * (uint32_t)(uintptr_t)(v53)));
  v37 = (gameswf::RefCounted::Self **)(*((uint32_t *)v33 + 33) + v50);
  v38 = nullptr;
  if ( *v37 != nullptr )
  {
    v43 = (gameswf::RefCounted::Self *)(*((uint32_t *)v33 + 33) + v50);
    gameswf::RefCounted::dropRef(*v37);
    *(uint32_t *)v43 = 0;
    v38 = *(gameswf::ASObject::Self **)(*((uint32_t *)v33 + 33) + 4 * (uint32_t)(uintptr_t)(v53));
  }
  gameswf::Player::unregisterObject(v15[4], v38);
  v39 = (gameswf::RefCounted::Self **)(v50 + *((uint32_t *)v33 + 33));
  if ( *v39 != nullptr )
  {
    gameswf::RefCounted::dropRef(*v39);
    *v39 = nullptr;
  }
  (*(void (**)(uint32_t, gameswf::Self **))(**((uint32_t **)v15[4] + 52) + 24))(*((uint32_t *)v15[4] + 52), v15);
  gameswf::ASEnvironment::Destroy((gameswf::ASEnvironment::Self *)v59);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClass::newOp  (binary VA: 0x1073240)
// Original: gameswf::ASClass::newOp
// ----------------------------------------------------------------------------
int gameswf::ASClass::newOp(gameswf::ASClass::Self *self, gameswf::Player::Self *a2)
{
  gameswf::MovieDefinitionSub::Self *v2;
  gameswf::Self *v3;
  int v4;
  gameswf::ASBitmapData::Self *v5;
  gameswf::BitmapInfo::Self *v6;
  int v9;
  int v10;
  int v11;
  int v12;
  gameswf::RefCounted::Self *v13;
  int v14;
  gameswf::RefCounted::Self *v15;
  int v16;
  int v17;
  gameswf::RefCounted::Self **v18;
  typedef void *_g4_t_src;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef void *_g4_t_dest;
  typedef int _g4_t_v23;
  typedef gameswf::ASObject::Self *_g4_t_v24;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_src)) > _g4_s0 ? (4u + sizeof(_g4_t_src)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v20)) > _g4_s1 ? (44u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v21)) > _g4_s2 ? (48u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_dest)) > _g4_s3 ? (52u + sizeof(_g4_t_dest)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v23)) > _g4_s4 ? (56u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v24)) > _g4_s5 ? (76u + sizeof(_g4_t_v24)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);

  v2 = *((gameswf::MovieDefinitionSub::Self **)self + 30);
  if ( v2 != nullptr )
  {
    v3 = *((gameswf::Self **)self + 29);
    if ( *((uint8_t *)v3 + 2) != 0 )
    {
      if ( G4_VCALL<uint8_t>(v2, 8, 13) != 0 )
        return (int)(uintptr_t)(gameswf::Player::createSpriteInstance(
                 *((gameswf::Player::Self **)self + 4),
                 v2,
                 nullptr,
                 nullptr,
                 *((uint32_t *)self + 28)));
      v4 = *((uint32_t *)self + 30);
      if ( v4 == 0 )
        return 0;
      if ( *(uint8_t *)(*((uint32_t *)self + 29) + 2) != 0 )
      {
        v5 = nullptr;
        if ( G4_VCALL<uint8_t>(v4, 8, 14) != 0 )
        {
          v5 = (gameswf::ASBitmapData::Self *)opNew(0x48u);
          gameswf::ASBitmapData::ASBitmapData(v5, a2);
          v6 = (gameswf::BitmapInfo::Self *)G4_VCALL<int>(v4, 40);
          gameswf::ASBitmapData::setBitmapInfo(v5, v6);
        }
      }
      else
      {
        sub_7E5ED0((gameswf::Self **)self + 29, nullptr);
        *((uint32_t *)self + 30) = 0;
        return 0;
      }
      return (int)(uintptr_t)(v5);
    }
    if ( (*(uint16_t *)v3)-- == 1 )
    {
      src = nullptr;
      gameswf::free_internal(v3);
    }
    *((uint32_t *)self + 29) = 0;
    *((uint32_t *)self + 30) = 0;
  }
  if ( *((uint8_t *)self + 111) == 0 )
    return (*((int (**)(gameswf::Player::Self *, void *))self + 15))(a2, src);
  v9 = *((uint32_t *)self + 32) - 1;
  if ( v9 >= 0 )
  {
    v10 = *((uint32_t *)self + 31);
    v23 = *(uint32_t *)(v10 + 4 * v9);
    if ( *(uint32_t *)(v23 + 4) == 1 )
    {
LABEL_32:
      *(uint32_t *)(v23 + 20) = *((uint32_t *)a2 + 25);
      return *(uint32_t *)(*((uint32_t *)self + 31) + 4 * *((uint32_t *)self + 32) - 4);
    }
    v11 = 4 * *((uint32_t *)self + 32) - 8;
    v12 = *((uint32_t *)self + 32) - 1;
    while ( --v12 != -1 )
    {
      v13 = *(gameswf::RefCounted::Self **)(v10 + v11);
      if ( *((uint32_t *)v13 + 1) == 1 )
      {
        if ( v9 > v12 )
        {
          v21 = v11;
          gameswf::RefCounted::addRef(v13);
          v20 = *((uint32_t *)self + 32);
          if ( v20 == 1 )
          {
            gameswf::array_gameswf_smart_ptr_gamesw_b135e5::resize((gameswf::ASClass::Self *)((char *)self + 124), 0);
            v16 = *((uint32_t *)self + 32);
          }
          else
          {
            v14 = *((uint32_t *)self + 31);
            dest = (void *)(v14 + v21);
            v15 = *(gameswf::RefCounted::Self **)(v14 + v21);
            if ( v15 != nullptr )
            {
              gameswf::RefCounted::dropRef(v15);
              v20 = *((uint32_t *)self + 32);
              v14 = *((uint32_t *)self + 31);
              dest = (void *)(v14 + v21);
            }
            memmove(dest, (const void *)(v14 + 4 * v12 + 4), 4 * (v20 - 1 - v12));
            v16 = *((uint32_t *)self + 32) - 1;
            *((uint32_t *)self + 32) = v16;
          }
          v17 = v16 + 1;
          if ( v16 + 1 > *((uint32_t *)self + 33) )
          {
            gameswf::array_gameswf_smart_ptr_gamesw_b135e5::reserve(
              (gameswf::ASClass::Self *)((char *)self + 124),
              v17 + (v17 >> 1));
            v16 = *((uint32_t *)self + 32);
          }
          v18 = (gameswf::RefCounted::Self **)(*((uint32_t *)self + 31) + 4 * v16);
          if ( v18 != nullptr )
          {
            *v18 = v13;
            gameswf::RefCounted::addRef(v13);
          }
          *((uint32_t *)self + 32) = v17;
          gameswf::RefCounted::dropRef(v13);
          v23 = *(uint32_t *)(*((uint32_t *)self + 31) + 4 * *((uint32_t *)self + 32) - 4);
        }
        goto LABEL_32;
      }
      v11 -= 4;
    }
  }
  v24 = (gameswf::ASObject::Self *)(*((int (**)(gameswf::Player::Self *, void *))self + 15))(a2, src);
  gameswf::array_gameswf_smart_ptr_gamesw_b135e5::push_back_gameswf_ASObject_3ab925(
    (gameswf::ASClass::Self *)((char *)self + 124),
    &v24);
  gameswf::Player::unregisterObject(
    a2,
    *(gameswf::ASObject::Self **)(*((uint32_t *)self + 31) + 4 * *((uint32_t *)self + 32) - 4));
  return *(uint32_t *)(*((uint32_t *)self + 31) + 4 * *((uint32_t *)self + 32) - 4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClass::builtinMethod  (binary VA: 0x1079700)
// Original: gameswf::ASClass::builtinMethod
// ----------------------------------------------------------------------------
int gameswf::ASClass::builtinMethod(gameswf::ASClass::Self *self, const gameswf::String::Self *a2, const gameswf::ASValue::Self *a3)
{
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v4 = (int)(uintptr_t)(gameswf::PermanentStringCache::get((int **)(*((uint32_t *)self + 4) + 48), a2));
  return gameswf::hash_gameswf_StringPointer_ga_2dbc64::add(
           (gameswf::ASClass::Self *)((char *)self + 104),
           (int)(uintptr_t)(&v4),
           a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClass::is  (binary VA: 0x1079830)
// Original: gameswf::ASClass::is
// ----------------------------------------------------------------------------
bool gameswf::ASClass::is(gameswf::ASClass::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 45 && a2 != 5 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClass::Destroy  (binary VA: 0x1079bd0)
// Original: gameswf::ASClass::~ASClass
// ----------------------------------------------------------------------------
void gameswf::ASClass::Destroy(gameswf::ASClass::Self *self)
{
  int v1;
  uint32_t *v2;
  int i;
  gameswf::RefCounted::Self *v4;
  int v5;
  gameswf::Self *v6;
  gameswf::Self *v7;
  bool v8;
  gameswf::Self *v9;
  int v10;
  int v11;
  int j;
  uint32_t *v13;
  int v14;
  gameswf::Self *v15;
  int v16;
  gameswf::Self *v17;
  gameswf::Self *v18;
  int v19;
  uint32_t *v20;
  int v21;
  uint32_t *v22;
  int v23;

  v1 = *((uint32_t *)self + 32);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E108);
  v2 = (uint32_t *)((char *)self + 124);
  if ( v1 <= 0 )
  {
    if ( v1 < 0 )
    {
      v19 = 4 * v1;
      do
      {
        v20 = (uint32_t *)(*v2 + v19);
        if ( v20 != nullptr )
          *v20 = 0;
        v19 += 4;
        ++v1;
      }
      while ( v1 != 0 );
    }
  }
  else
  {
    for ( i = 0; i != v1; ++i )
    {
      v4 = *(gameswf::RefCounted::Self **)(*v2 + 4 * i);
      if ( v4 != nullptr )
      {
        v22 = v2;
        gameswf::RefCounted::dropRef(v4);
        v2 = v22;
      }
    }
  }
  v5 = *((uint32_t *)self + 34);
  *((uint32_t *)self + 32) = 0;
  if ( v5 == 0 )
  {
    v6 = *((gameswf::Self **)self + 31);
    *((uint32_t *)self + 33) = 0;
    if ( v6 != nullptr )
      gameswf::free_internal(v6);
    *((uint32_t *)self + 31) = 0;
  }
  v7 = *((gameswf::Self **)self + 29);
  if ( v7 != nullptr )
  {
    v8 = (*(uint16_t *)v7)-- == 1;
    if ( v8 )
      gameswf::free_internal(v7);
  }
  v9 = *((gameswf::Self **)self + 26);
  if ( v9 != nullptr )
  {
    v10 = *((uint32_t *)v9 + 1);
    if ( v10 >= 0 )
    {
      v11 = 8;
      for ( j = 0; j <= v10; ++j )
      {
        v13 = (uint32_t *)((char *)v9 + v11);
        if ( *(uint32_t *)((char *)v9 + v11) != -2 )
        {
          v23 = v11;
          v21 = v10;
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v13 + 3));
          *v13 = -2;
          v13[1] = 0;
          v9 = *((gameswf::Self **)self + 26);
          v10 = v21;
          v11 = v23;
        }
        v11 += 24;
      }
    }
    gameswf::free_internal(v9);
    *((uint32_t *)self + 26) = 0;
  }
  v14 = *((uint32_t *)self + 25);
  if ( *((uint32_t *)self + 24) != 0 && *((uint8_t *)self + 103) != 0 )
  {
    gameswf::free_internal(*((gameswf::Self **)self + 24));
    v14 = *((uint32_t *)self + 25);
  }
  v15 = *((gameswf::Self **)self + 22);
  *((uint32_t *)self + 25) = v14 & 0xFF000000;
  *((uint32_t *)self + 24) = 0;
  *((uint8_t *)self + 103) = 0;
  v16 = *((uint32_t *)self + 23);
  if ( v15 != nullptr && *((uint8_t *)self + 95) != 0 )
  {
    gameswf::free_internal(v15);
    v16 = *((uint32_t *)self + 23);
  }
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = v16 & 0xFF000000;
  v17 = *((gameswf::Self **)self + 20);
  *((uint8_t *)self + 95) = 0;
  if ( v17 != nullptr )
  {
    v8 = (*(uint16_t *)v17)-- == 1;
    if ( v8 )
      gameswf::free_internal(v17);
  }
  v18 = *((gameswf::Self **)self + 18);
  if ( v18 != nullptr )
  {
    v8 = (*(uint16_t *)v18)-- == 1;
    if ( v8 )
      gameswf::free_internal(v18);
  }
  if ( *((uint32_t *)self + 16) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 16));
  if ( *((uint8_t *)self + 40) == 0xFF && (*((uint8_t *)self + 59) & 1) != 0 )
    gameswf::free_internal(*((gameswf::Self **)self + 13));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E288);
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClass::Destroy_ea1079e60  (binary VA: 0x1079e60)
// Original: gameswf::ASClass::~ASClass
// ----------------------------------------------------------------------------
void gameswf::ASClass::Destroy_ea1079e60(gameswf::ASClass::Self *self)
{
  gameswf::ASClass::Destroy(self);
  opDelete(self);
}


