#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASPackage.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASPackage::toString  (binary VA: 0x117cb60)
// Original: gameswf::ASPackage::toString
// ----------------------------------------------------------------------------
char * gameswf::ASPackage::toString(gameswf::ASPackage::Self *self)
{
  char *v1;

  if ( *((uint8_t *)self + 48) == 0xFF )
    v1 = *((char **)self + 15);
  else
    v1 = (char *)self + 49;
  sprintf(((char *)(&byte_2115900)), "[package %s]", v1);
  return (char *)(uintptr_t)(((char *)(&byte_2115900)));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASPackage::thisAlive  (binary VA: 0x117cbc0)
// Original: gameswf::ASPackage::thisAlive
// ----------------------------------------------------------------------------
int gameswf::ASPackage::thisAlive(gameswf::ASPackage::Self *self)
{
  int v1;
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  char *v7;
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
  int v20;
  int v21;
  int v22;
  int v23;
  char *v24;

  gameswf::ASObject::thisAlive(self);
  v1 = *((uint32_t *)self + 10);
  v24 = (char *)self + 40;
  if ( v1 != 0 )
  {
    v2 = 0;
    if ( *(int *)(v1 + 4) >= 0 && *(uint32_t *)(v1 + 8) == -2 )
    {
      v15 = 40;
      v16 = 1;
      do
      {
        v2 = v16;
        if ( v16 > *(uint32_t *)(v1 + 4) )
          break;
        v17 = *(uint32_t *)(v1 + v15);
        ++v16;
        v15 += 32;
      }
      while ( v17 == -2 );
    }
    if ( self != (gameswf::ASPackage::Self *)-40 )
    {
LABEL_4:
      while ( v1 != 0 )
      {
        if ( v2 > *(uint32_t *)(v1 + 4) )
          break;
        (*(void (**)(uint32_t))(**(uint32_t **)(v1 + 32 * v2 + 36) + 76))(*(uint32_t *)(v1 + 32 * v2 + 36));
        v1 = *(uint32_t *)v24;
        v3 = *(uint32_t *)(*(uint32_t *)v24 + 4);
        if ( v2 > v3 )
          break;
        v20 = v2 + 1;
        if ( v3 >= v2 + 1 && *(uint32_t *)(v1 + 32 * v20 + 8) == -2 )
        {
          v21 = v2 + 2;
          v22 = 32 * v21 + 8;
          while ( 1 )
          {
            v20 = v21;
            if ( *(uint32_t *)(*(uint32_t *)v24 + 4) < v21 )
              break;
            v23 = *(uint32_t *)(v1 + v22);
            ++v21;
            v22 += 32;
            if ( v23 != -2 )
            {
              v2 = v20;
              goto LABEL_4;
            }
          }
        }
        v2 = v20;
      }
    }
  }
  result = *((uint32_t *)self + 11);
  if ( result != 0 )
  {
    v5 = *(uint32_t *)(result + 4);
    v6 = 0;
    if ( v5 >= 0 && *(uint32_t *)(result + 8) == -2 )
    {
      v18 = 48;
      do
      {
        if ( ++v6 > v5 )
          break;
        v19 = *(uint32_t *)(result + v18);
        v18 += 40;
      }
      while ( v19 == -2 );
    }
    v7 = (char *)self + 44;
    if ( self != (gameswf::ASPackage::Self *)-44 )
    {
LABEL_17:
      result = *(uint32_t *)v7;
      while ( result != 0 && v6 <= *(uint32_t *)(result + 4) )
      {
        v14 = result + 40 * v6 + 8;
        if ( *(uint8_t *)(v14 + 28) == 5 )
          v12 = *(uint32_t *)(v14 + 32);
        else
          v12 = 0;
        G4_VCALL<void>(v12, 76);
        result = *(uint32_t *)v7;
        v13 = *(uint32_t *)(*(uint32_t *)v7 + 4);
        if ( v13 >= v6 )
        {
          v8 = v6 + 1;
          if ( v6 + 1 <= v13 && *(uint32_t *)(result + 40 * v8 + 8) == -2 )
          {
            v9 = v6 + 2;
            v10 = 40 * v9 + 8;
            do
            {
              v8 = v9;
              if ( v9 > v13 )
                break;
              ++v9;
              v11 = *(uint32_t *)(*(uint32_t *)v7 + v10);
              v10 += 40;
            }
            while ( v11 == -2 );
          }
          v6 = v8;
          goto LABEL_17;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASPackage::findClass  (binary VA: 0x117ded0)
// Original: gameswf::ASPackage::findClass
// ----------------------------------------------------------------------------
int gameswf::ASPackage::findClass(gameswf::ASPackage::Self *self, const gameswf::String::Self *a2, bool a3)
{
  int v3;
  int index;
  int v5;

  v3 = 0;
  index = gameswf::hash_gameswf_String_gameswf_s_b74bac::find_index(
            (gameswf::ASPackage::Self *)((char *)self + 40),
            a2);
  if ( index >= 0 )
  {
    v5 = *((uint32_t *)self + 10) + 32 * index;
    v3 = *(uint32_t *)(v5 + 36);
    if ( v3 != 0 )
    {
      gameswf::RefCounted::addRef(*(gameswf::RefCounted::Self **)(v5 + 36));
      if ( a3 && *(uint8_t *)(v3 + 109) == 0 && *(uint32_t *)(v3 + 68) != 0 )
        gameswf::ASClass::initialize((gameswf::ASClass::Self *)v3);
      gameswf::RefCounted::dropRef((gameswf::RefCounted::Self *)v3);
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASPackage::hasFunction  (binary VA: 0x117df60)
// Original: gameswf::ASPackage::hasFunction
// ----------------------------------------------------------------------------
int gameswf::ASPackage::hasFunction(gameswf::ASPackage::Self *self, const gameswf::String::Self *a2)
{
  int index;
  int v3;
  int v4;

  index = gameswf::hash_gameswf_String_gameswf_A_0f1111::find_index(
            (gameswf::ASPackage::Self *)((char *)self + 44),
            a2);
  v3 = 0;
  if ( index >= 0 && self != (gameswf::ASPackage::Self *)-44 )
  {
    v4 = *((uint32_t *)self + 11);
    if ( v4 != 0 )
      LOBYTE(v3) = index <= *(uint32_t *)(v4 + 4);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASPackage::getMemberByName  (binary VA: 0x117dfc0)
// Original: gameswf::ASPackage::getMemberByName
// ----------------------------------------------------------------------------
int gameswf::ASPackage::getMemberByName(gameswf::ASPackage::Self *self, const gameswf::StringI::Self *a2, gameswf::ASValue::Self *a3)
{
  gameswf::RefCounted::Self *Class;
  int result;
  int index;
  typedef uint8_t _g4_t_v6[4];
  typedef gameswf::RefCounted::Self *_g4_t_v7;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);

  Class = (gameswf::RefCounted::Self *)gameswf::ASPackage::findClass(self, a2, true);
  if ( Class != nullptr )
  {
    v7 = Class;
    v6[0] = 5;
    v6[1] = 0;
    gameswf::RefCounted::addRef(Class);
    gameswf::ASValue::opAssign(a3, (const gameswf::ASValue::Self *)v6);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v6);
    return 1;
  }
  else
  {
    index = gameswf::hash_gameswf_String_gameswf_A_0f1111::find_index(
              (gameswf::ASPackage::Self *)((char *)self + 44),
              a2);
    result = 0;
    if ( index >= 0 )
    {
      result = 1;
      if ( a3 != nullptr )
      {
        gameswf::ASValue::opAssign(a3, (const gameswf::ASValue::Self *)(*((uint32_t *)self + 11) + 40 * index + 8 + 28));
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASPackage::registerClass  (binary VA: 0x117e0a0)
// Original: gameswf::ASPackage::registerClass
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ASPackage::registerClass(gameswf::ASPackage::Self *self, gameswf::ASClass::Self *a2)
{
  int v2;
  char v3;
  int v4;
  char *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  const char *s1;
  int v13;
  gameswf::RefCounted::Self **v14;
  gameswf::Self *WeakProxy;
  const char *v17;
  int v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef gameswf::String::Self *_g4_t_v21;
  typedef gameswf::RefCounted::Self *_g4_t_v22;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v19)) > _g4_s0 ? (4u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v20)) > _g4_s1 ? (4u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v22)) > _g4_s3 ? (28u + sizeof(_g4_t_v22)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);

  v21 = (gameswf::String::Self *)((gameswf::ASClass::Self *)((char *)a2 + 40));
  v2 = *((uint32_t *)self + 10);
  if ( v2 == 0 )
    goto LABEL_33;
  v3 = *((uint8_t *)a2 + 40);
  if ( v3 == -1 )
  {
    v5 = *((char **)a2 + 13);
    v4 = *((uint32_t *)a2 + 11) - 1;
  }
  else
  {
    v4 = v3 - 1;
    v5 = (char *)a2 + 41;
  }
  v6 = 5381;
  if ( v4 > 0 )
  {
    do
      v6 = (33 * v6) ^ (uint8_t)v5[--v4];
    while ( v4 != 0 );
  }
  v7 = *(uint32_t *)(v2 + 4);
  v8 = v7 & v6;
  v9 = 32 * (v7 & v6);
  v10 = v2 + v9 + 8;
  if ( *(uint32_t *)v10 == -2 )
    goto LABEL_33;
  v11 = *(uint32_t *)(v2 + v9 + 12);
  if ( v8 != (v11 & v7) )
    goto LABEL_33;
  if ( *((uint8_t *)a2 + 40) == 0xFF )
  {
    while ( 1 )
    {
      if ( v6 == v11 )
      {
        if ( v21 == (gameswf::String::Self *)(v10 + 8) )
          goto LABEL_17;
        v17 = (const char *)(v10 + 9);
        if ( *(uint8_t *)(v10 + 8) == 0xFF )
          v17 = *(const char **)(v10 + 20);
        v20 = v2;
        v18 = strcmp(v17, *((const char **)a2 + 13));
        v2 = v20;
        if ( v18 == 0 )
          goto LABEL_17;
        v8 = *(uint32_t *)v10;
        if ( *(uint32_t *)v10 == -1 )
          goto LABEL_33;
      }
      else
      {
        v8 = *(uint32_t *)v10;
        if ( *(uint32_t *)v10 == -1 )
          goto LABEL_33;
      }
      v10 = v2 + 32 * v8 + 8;
      v11 = *(uint32_t *)(v2 + 32 * v8 + 12);
    }
  }
  while ( 1 )
  {
    if ( v6 == v11 )
    {
      if ( v21 == (gameswf::String::Self *)(v10 + 8) )
        break;
      s1 = (const char *)(v10 + 9);
      if ( *(uint8_t *)(v10 + 8) == 0xFF )
        s1 = *(const char **)(v10 + 20);
      v19 = v2;
      v13 = strcmp(s1, (const char *)a2 + 41);
      v2 = v19;
      if ( v13 == 0 )
        break;
    }
    v8 = *(uint32_t *)v10;
    if ( *(uint32_t *)v10 == -1 )
      goto LABEL_33;
    v10 = v2 + 32 * v8 + 8;
    v11 = *(uint32_t *)(v2 + 32 * v8 + 12);
  }
LABEL_17:
  if ( v8 >= 0 )
  {
    v14 = (gameswf::RefCounted::Self **)(v2 + 32 * v8 + 36);
  }
  else
  {
LABEL_33:
    v22 = nullptr;
    gameswf::hash_gameswf_String_gameswf_s_b74bac::add(
      (gameswf::ASPackage::Self *)((char *)self + 40),
      v21,
      (int)(uintptr_t)(&v22));
    if ( v22 != nullptr )
      gameswf::RefCounted::dropRef(v22);
    v14 = (gameswf::RefCounted::Self **)(*((uint32_t *)self + 10)
                                 + 32
                                 * gameswf::hash_gameswf_String_gameswf_s_b74bac::find_index(
                                     (gameswf::ASPackage::Self *)((char *)self + 40),
                                     v21)
                                 + 36);
  }
  if ( a2 != (gameswf::ASClass::Self *)(*v14) )
  {
    if ( *v14 != nullptr )
      gameswf::RefCounted::dropRef(*v14);
    *v14 = (gameswf::RefCounted::Self *)(a2);
    if ( a2 != nullptr )
      gameswf::RefCounted::addRef(a2);
  }
  *((uint32_t *)a2 + 21) = (uint32_t)(uintptr_t)(self);
  WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(self);
  return sub_7E5ED0((gameswf::Self **)a2 + 20, WeakProxy);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASPackage::registerPrimitiveClass  (binary VA: 0x117e2e0)
// Original: gameswf::ASPackage::registerPrimitiveClass
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ASPackage::registerPrimitiveClass(gameswf::ASPackage::Self *self, gameswf::ASClass::Self *a2)
{
  *((uint8_t *)a2 + 110) = 1;
  return gameswf::ASPackage::registerClass(self, a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASPackage::registerFunction  (binary VA: 0x117e310)
// Original: gameswf::ASPackage::registerFunction
// ----------------------------------------------------------------------------
void * gameswf::ASPackage::registerFunction(gameswf::ASPackage::Self *self, const gameswf::String::Self *a2, const gameswf::ASValue::Self *a3)
{
  gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> *v3;
  int index;
  typedef uint8_t _g4_t_v6[4];
  typedef int64_t _g4_t_v7;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);

  v3 = (gameswf::hash<gameswf::String::Self, gameswf::ASValue::Self, gameswf::string_hash_functor<gameswf::String::Self>> *)((gameswf::ASPackage::Self *)((char *)self + 44));
  index = gameswf::hash_gameswf_String_gameswf_A_0f1111::find_index(
            (gameswf::ASPackage::Self *)((char *)self + 44),
            a2);
  if ( index < 0 )
  {
    v7 = 0;
    v6[0] = 2;
    v6[1] = 0;
    gameswf::hash_gameswf_String_gameswf_A_0f1111::add(
      v3,
      a2,
      (const gameswf::ASValue::Self *)v6);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v6);
    index = gameswf::hash_gameswf_String_gameswf_A_0f1111::find_index(
              v3,
              a2);
  }
  return gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(*((uint32_t *)self + 11) + 40 * index + 8 + 28), a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASPackage::is  (binary VA: 0x1180e00)
// Original: gameswf::ASPackage::is
// ----------------------------------------------------------------------------
bool gameswf::ASPackage::is(gameswf::ASPackage::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 47 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASPackage::Destroy  (binary VA: 0x1180e70)
// Original: gameswf::ASPackage::~ASPackage
// ----------------------------------------------------------------------------
void gameswf::ASPackage::Destroy(gameswf::ASPackage::Self *self)
{
  bool v1;
  gameswf::Self *v2;
  int v3;
  int v4;
  int i;
  uint32_t *v6;
  gameswf::ASObject::Self *v7;
  gameswf::Self *v8;
  int v9;
  int j;
  int v11;
  int v12;
  int v13;

  v1 = *((uint8_t *)self + 48) == 0xFF;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091688);
  if ( v1 && (*((uint8_t *)self + 67) & 1) != 0 )
    gameswf::free_internal(*((gameswf::Self **)self + 15));
  v2 = *((gameswf::Self **)self + 11);
  if ( v2 != nullptr )
  {
    v3 = *((uint32_t *)v2 + 1);
    if ( v3 >= 0 )
    {
      v4 = 8;
      for ( i = 0; i <= v3; ++i )
      {
        v6 = (uint32_t *)((char *)v2 + v4);
        if ( *(uint32_t *)((char *)v2 + v4) != -2 )
        {
          if ( *((uint8_t *)v6 + 8) == 0xFF && (*((uint8_t *)v6 + 27) & 1) != 0 )
          {
            v13 = v3;
            gameswf::free_internal((gameswf::Self *)v6[5]);
            v3 = v13;
          }
          v12 = v3;
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v6 + 7));
          *v6 = -2;
          v6[1] = 0;
          v3 = v12;
          v2 = *((gameswf::Self **)self + 11);
        }
        v4 += 40;
      }
    }
    gameswf::free_internal(v2);
    *((uint32_t *)self + 11) = 0;
  }
  v7 = (gameswf::ASObject::Self *)(self);
  v8 = *((gameswf::Self **)self + 10);
  if ( v8 != nullptr )
  {
    v9 = *((uint32_t *)v8 + 1);
    if ( v9 >= 0 )
    {
      for ( j = 0; j <= v9; ++j )
      {
        v11 = (int)(uintptr_t)(v8) + 32 * j + 8;
        if ( *(uint32_t *)v11 != -2 )
        {
          if ( *((uint8_t *)v8 + 32 * j + 16) == 0xFF && (*((uint8_t *)v8 + 32 * j + 35) & 1) != 0 )
            gameswf::free_internal(*((gameswf::Self **)v8 + 8 * j + 7));
          if ( *(uint32_t *)(v11 + 28) != 0 )
            gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v11 + 28));
          *(uint32_t *)v11 = -2;
          *(uint32_t *)(v11 + 4) = 0;
          v8 = *((gameswf::Self **)self + 10);
        }
      }
    }
    gameswf::free_internal(v8);
    v7 = (gameswf::ASObject::Self *)(self);
    *((uint32_t *)self + 10) = 0;
  }
  gameswf::ASObject::Destroy(v7);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASPackage::Destroy_ea1181030  (binary VA: 0x1181030)
// Original: gameswf::ASPackage::~ASPackage
// ----------------------------------------------------------------------------
void gameswf::ASPackage::Destroy_ea1181030(gameswf::ASPackage::Self *self)
{
  bool v1;
  gameswf::Self *v2;
  int v3;
  int v4;
  int i;
  uint32_t *v6;
  gameswf::ASObject::Self *v7;
  gameswf::Self *v8;
  int v9;
  int j;
  int v11;
  int v12;
  int v13;

  v1 = *((uint8_t *)self + 48) == 0xFF;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091688);
  if ( v1 && (*((uint8_t *)self + 67) & 1) != 0 )
    gameswf::free_internal(*((gameswf::Self **)self + 15));
  v2 = *((gameswf::Self **)self + 11);
  if ( v2 != nullptr )
  {
    v3 = *((uint32_t *)v2 + 1);
    if ( v3 >= 0 )
    {
      v4 = 8;
      for ( i = 0; i <= v3; ++i )
      {
        v6 = (uint32_t *)((char *)v2 + v4);
        if ( *(uint32_t *)((char *)v2 + v4) != -2 )
        {
          if ( *((uint8_t *)v6 + 8) == 0xFF && (*((uint8_t *)v6 + 27) & 1) != 0 )
          {
            v13 = v3;
            gameswf::free_internal((gameswf::Self *)v6[5]);
            v3 = v13;
          }
          v12 = v3;
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v6 + 7));
          *v6 = -2;
          v6[1] = 0;
          v3 = v12;
          v2 = *((gameswf::Self **)self + 11);
        }
        v4 += 40;
      }
    }
    gameswf::free_internal(v2);
    *((uint32_t *)self + 11) = 0;
  }
  v7 = (gameswf::ASObject::Self *)(self);
  v8 = *((gameswf::Self **)self + 10);
  if ( v8 != nullptr )
  {
    v9 = *((uint32_t *)v8 + 1);
    if ( v9 >= 0 )
    {
      for ( j = 0; j <= v9; ++j )
      {
        v11 = (int)(uintptr_t)(v8) + 32 * j + 8;
        if ( *(uint32_t *)v11 != -2 )
        {
          if ( *((uint8_t *)v8 + 32 * j + 16) == 0xFF && (*((uint8_t *)v8 + 32 * j + 35) & 1) != 0 )
            gameswf::free_internal(*((gameswf::Self **)v8 + 8 * j + 7));
          if ( *(uint32_t *)(v11 + 28) != 0 )
            gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v11 + 28));
          *(uint32_t *)v11 = -2;
          *(uint32_t *)(v11 + 4) = 0;
          v8 = *((gameswf::Self **)self + 10);
        }
      }
    }
    gameswf::free_internal(v8);
    v7 = (gameswf::ASObject::Self *)(self);
    *((uint32_t *)self + 10) = 0;
  }
  gameswf::ASObject::Destroy(v7);
}


