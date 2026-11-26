#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASClassManager.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASClassManager::init  (binary VA: 0x117cda0)
// Original: gameswf::ASClassManager::init
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ASClassManager::init(gameswf::ASClassManager::Self *self, gameswf::Player::Self *a2)
{
  gameswf::Self *WeakProxy;

  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a2);
  if ( a2 == nullptr )
    return sub_7E5ED0((gameswf::Self **)self + 1, nullptr);
  WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(a2);
  return sub_7E5ED0((gameswf::Self **)self + 1, WeakProxy);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClassManager::registerGlobalString  (binary VA: 0x117e3d0)
// Original: gameswf::ASClassManager::registerGlobalString
// ----------------------------------------------------------------------------
int gameswf::ASClassManager::registerGlobalString(gameswf::ASClassManager::Self *self, const gameswf::String::Self *a2, bool a3)
{
  gameswf::ASClassManager::Self *v3;
  int index;
  char *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char *v12;
  int *v13;
  int v15;
  char v16;
  int v17;
  int v18;
  int v19;
  const char *v20;
  int v21;
  int v22;
  char *v23;
  const char *v24;
  gameswf::Self *v25;
  int v26;
  int *v27;
  int v28;
  int i;
  int v30;
  const char *v31;
  const char *v32;
  int v33;
  bool v34;
  char *v35;
  int v36;
  int v37;
  int v38;
  int v39;
  typedef gameswf::Self *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef size_t _g4_t_v42;
  typedef int _g4_t_v43;
  typedef char *_g4_t_v44;
  typedef gameswf::ASClassManager::Self *_g4_t_v45;
  typedef int *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef char *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef char *_g4_t_v56;
  typedef char *_g4_t_v57;
  typedef int _g4_t_v58[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v40)) > _g4_s0 ? (0u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v41)) > _g4_s1 ? (4u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v42)) > _g4_s2 ? (4u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v43)) > _g4_s3 ? (4u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v44)) > _g4_s4 ? (8u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v45)) > _g4_s5 ? (12u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v46)) > _g4_s6 ? (20u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v47)) > _g4_s7 ? (20u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v48)) > _g4_s8 ? (20u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v49)) > _g4_s9 ? (24u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v50)) > _g4_s10 ? (24u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v51)) > _g4_s11 ? (28u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v52)) > _g4_s12 ? (28u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v53)) > _g4_s13 ? (28u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v54)) > _g4_s14 ? (32u + sizeof(_g4_t_v54)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v55)) > _g4_s15 ? (48u + sizeof(_g4_t_v55)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v56)) > _g4_s16 ? (52u + sizeof(_g4_t_v56)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v57)) > _g4_s17 ? (56u + sizeof(_g4_t_v57)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v58)) > _g4_s18 ? (60u + sizeof(_g4_t_v58)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 20u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 24u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 28u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 32u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 52u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 56u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 60u);

  v3 = self;
  v51 = *((uint32_t *)self + 2);
  if ( v51 != 0 && *(uint8_t *)(*((uint32_t *)self + 1) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)self + 1, nullptr);
    *((uint32_t *)self + 2) = 0;
    v51 = 0;
  }
  v56 = (char *)a2;
  v46 = (int *)(v51 + 48);
  index = gameswf::hash_gameswf_StringPointer_ga_128477::find_index(
            (int *)(v51 + 48),
            &v56);
  if ( index >= 0 )
  {
    v5 = *(char **)(*(uint32_t *)(v51 + 48) + 16 * index + 20);
    goto LABEL_6;
  }
  v16 = *(uint8_t *)a2;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    if ( *((uint32_t *)a2 + 1) - 1 > 13 )
      goto LABEL_26;
LABEL_41:
    v23 = (char *)gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)(v51 + 52), 20);
    v5 = v23;
    if ( *(uint8_t *)a2 == 0xFF )
      v24 = *((const char **)a2 + 3);
    else
      v24 = (char *)a2 + 1;
    if ( v23 != nullptr )
    {
      *v23 = 1;
      v23[1] = 0;
      if ( v24 != nullptr )
      {
        v40 = (gameswf::Self *)v24;
        v42 = strlen(v24);
        gameswf::String::resize((gameswf::String::Self *)v5, v42);
        v25 = (gameswf::Self *)(v5 + 1);
        if ( *v5 == -1 )
          v25 = *((gameswf::Self **)v5 + 3);
        gameswf::Strcpy_s(v25, (char *)(v42 + 1), v40);
      }
      v26 = *((uint32_t *)v5 + 4) | 0x7FFFFF;
      *((uint32_t *)v5 + 4) = v26;
      v5[18] = BYTE2(v26) | 0x80;
      v5[19] = HIBYTE(v26) | 1;
    }
    goto LABEL_35;
  }
  if ( *(char *)a2 - 1 <= 13 )
    goto LABEL_41;
LABEL_26:
  if ( v16 == -1 )
    v17 = *((uint32_t *)a2 + 1) - 1;
  else
    v17 = v16 - 1;
  v18 = gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)(v51 + 52), v17 + 21);
  v5 = (char *)v18;
  if ( v18 != 0 )
  {
    *(uint8_t *)v18 = 1;
    *(uint8_t *)(v18 + 1) = 0;
    v19 = *(uint32_t *)(v18 + 16) | 0x7FFFFF;
    *((uint32_t *)v5 + 4) = v19;
    v5[19] = HIBYTE(v19) | 1;
    v5[18] = BYTE2(v19) | 0x80;
  }
  v20 = (char *)a2 + 1;
  if ( *(uint8_t *)a2 == 0xFF )
    v20 = *((const char **)a2 + 3);
  strcpy(v5 + 20, v20);
  if ( *(uint8_t *)a2 == 0xFF )
    v21 = *((uint32_t *)a2 + 1) - 1;
  else
    v21 = *(char *)a2 - 1;
  v41 = v21 + 1;
  gameswf::String::resize((gameswf::String::Self *)v5, 0);
  *v5 = -1;
  *((uint32_t *)v5 + 3) = (uint32_t)(uintptr_t)(v5 + 20);
  *((uint32_t *)v5 + 1) = v41;
  *((uint32_t *)v5 + 2) = v41;
  v5[19] &= ~1u;
LABEL_35:
  v57 = v5;
  v22 = gameswf::hash_gameswf_StringPointer_ga_128477::find_index(
          v46,
          &v57);
  if ( v22 >= 0
    || (v58[0] = 0,
        gameswf::hash_gameswf_StringPointer_ga_128477::add(
          (int **)v46,
          &v57,
          v58),
        (v22 = gameswf::hash_gameswf_StringPointer_ga_128477::find_index(
                 v46,
                 &v57)) < 0) )
  {
    *(uint32_t *)(*(uint32_t *)(v51 + 48) + 16 * v22 + 20) = (uint32_t)(uintptr_t)(v5);
  }
  else
  {
    *(uint32_t *)(*(uint32_t *)(v51 + 48) + 16 * v22 + 20) = (uint32_t)(uintptr_t)(v5);
  }
LABEL_6:
  v54 = (int)(uintptr_t)(v5);
  if ( a3 )
  {
    v6 = *((uint32_t *)self + 8);
    if ( v6 != 0 )
    {
      v47 = *((uint32_t *)v5 + 4);
      if ( (uint8_t *)(v47 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( *v5 == -1 )
        {
          v35 = *((char **)v5 + 3);
          v36 = *((uint32_t *)v5 + 1) - 1;
        }
        else
        {
          v35 = v5 + 1;
          v36 = *v5 - 1;
        }
        v49 = 5381;
        v37 = 5381;
        if ( v36 > 0 )
        {
          v50 = v5;
          do
          {
            --v36;
            v38 = 33 * v37;
            v39 = (uint8_t)v35[v36] + 32;
            if ( (uint8_t)(v35[v36] - 65) > 0x19u )
              v39 = (uint8_t)v35[v36];
            v37 = v38 ^ v39;
          }
          while ( v36 != 0 );
          v5 = v50;
          v37 = v37 << 9 >> 9;
          v3 = self;
          v49 = v37;
        }
        *((uint32_t *)v5 + 4) = v37 & 0x7FFFFF | v47 & 0xFF800000;
        v6 = *((uint32_t *)v3 + 8);
        v7 = v49;
      }
      else
      {
        v49 = v47 << 9 >> 9;
        v7 = v49;
      }
      v48 = *(uint32_t *)(v6 + 4);
      v52 = v48 & v7;
      v8 = 16 * (v48 & v7);
      if ( *(uint32_t *)(v6 + v8 + 8) != -2 && v52 == (*(uint32_t *)(v6 + v8 + 12) & v48) )
      {
        v44 = v5;
        v45 = v3;
        v27 = (int *)(v6 + v8 + 8);
        v28 = *(uint32_t *)(v6 + v8 + 12);
        for ( i = v52; ; v28 = *(uint32_t *)(v6 + 16 * i + 12) )
        {
          if ( v28 == v49 )
          {
            v30 = v27[2];
            if ( v44 == (char *)v30 )
              break;
            v31 = *v44 == -1 ? *((const char **)v44 + 3) : v44 + 1;
            v32 = *(uint8_t *)v30 == 0xFF ? *(const char **)(v30 + 12) : (const char *)(v30 + 1);
            v43 = v6;
            v33 = strcmp(v32, v31);
            v6 = v43;
            if ( v33 == 0 )
              break;
          }
          i = *v27;
          if ( *v27 == -1 )
          {
            v3 = v45;
            goto LABEL_12;
          }
          v27 = (int *)(v6 + 16 * i + 8);
        }
        v53 = i;
        v34 = i < 0;
        v3 = v45;
        if ( !v34 && v48 >= v53 )
          return *(uint32_t *)(v6 + 16 * v53 + 20);
      }
    }
LABEL_12:
    v55 = *((uint32_t *)v3 + 5);
    gameswf::hash_gameswf_StringPointer_in_aa74e2::add(
      (gameswf::Self **)self + 8,
      (char **)&v54,
      &v55);
    v9 = *((uint32_t *)v3 + 5);
  }
  else
  {
    v9 = *((uint32_t *)self + 5);
    v55 = v9;
  }
  v10 = v9 + 1;
  v11 = *((uint32_t *)v3 + 6);
  if ( v9 + 1 <= v11 || *((uint32_t *)v3 + 7) != 0 )
  {
    v12 = *((char **)v3 + 4);
  }
  else
  {
    v15 = v10 + (v10 >> 1);
    *((uint32_t *)v3 + 6) = v15;
    if ( v15 != 0 )
    {
      if ( *((uint32_t *)v3 + 4) != 0 )
        v12 = (char *)gameswf::realloc_internal(*((gameswf::Self **)v3 + 4), 4 * v15, 4 * v11);
      else
        v12 = (char *)gameswf::malloc_internal(4 * v15);
      *((uint32_t *)v3 + 4) = (uint32_t)(uintptr_t)(v12);
      v9 = *((uint32_t *)v3 + 5);
    }
    else
    {
      if ( *((uint32_t *)v3 + 4) != 0 )
      {
        gameswf::free_internal(*((gameswf::Self **)v3 + 4));
        v9 = *((uint32_t *)v3 + 5);
      }
      *((uint32_t *)v3 + 4) = 0;
      v12 = nullptr;
    }
  }
  v13 = (int *)&v12[4 * v9];
  if ( v13 != nullptr )
    *v13 = v54;
  *((uint32_t *)v3 + 5) = v10;
  return v55;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClassManager::registerPackage  (binary VA: 0x117e9b0)
// Original: gameswf::ASClassManager::registerPackage
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASClassManager::registerPackage(gameswf::ASClassManager::Self *self, gameswf::ASPackage::Self *a2)
{
  gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *v2;
  int index;
  gameswf::RefCounted::Self **v4;
  gameswf::RefCounted::Self *result;
  typedef gameswf::String::Self *_g4_t_v6;
  typedef gameswf::RefCounted::Self *_g4_t_v7;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  v2 = (gameswf::hash<gameswf::String::Self, gameswf::smart_ptr<gameswf::ASPackage::Self>, gameswf::string_hash_functor<gameswf::String::Self>> *)((gameswf::ASClassManager::Self *)((char *)self + 12));
  v6 = (gameswf::String::Self *)((gameswf::ASPackage::Self *)((char *)a2 + 48));
  index = gameswf::hash_gameswf_String_gameswf_s_d8b1d4::find_index(
            (gameswf::ASClassManager::Self *)((char *)self + 12),
            (gameswf::ASPackage::Self *)((char *)a2 + 48));
  if ( index < 0 )
  {
    v7 = nullptr;
    gameswf::hash_gameswf_String_gameswf_s_d8b1d4::add(
      v2,
      v6,
      (int)(uintptr_t)(&v7));
    if ( v7 != nullptr )
      gameswf::RefCounted::dropRef(v7);
    index = gameswf::hash_gameswf_String_gameswf_s_d8b1d4::find_index(
              v2,
              v6);
  }
  v4 = (gameswf::RefCounted::Self **)(*((uint32_t *)self + 3) + 32 * index + 36);
  result = *v4;
  if ( a2 != (gameswf::ASPackage::Self *)(*v4) )
  {
    if ( result != nullptr )
      result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(*v4);
    *v4 = (gameswf::RefCounted::Self *)(a2);
    if ( a2 != nullptr )
      return gameswf::RefCounted::addRef(a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClassManager::findPackage  (binary VA: 0x117fdc0)
// Original: gameswf::ASClassManager::findPackage
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASClassManager::findPackage(gameswf::ASClassManager::Self *self, const gameswf::String::Self *a2, bool a3)
{
  int index;
  gameswf::RefCounted::Self *v4;
  gameswf::RefCounted::Self *v5;
  gameswf::RefCounted::Self *result;
  gameswf::Player::Self *v7;
  gameswf::RefCounted::Self *v8;
  gameswf::RefCounted::Self *v9;
  gameswf::RefCounted::Self *v10;

  index = gameswf::hash_gameswf_String_gameswf_s_d8b1d4::find_index(
            (gameswf::ASClassManager::Self *)((char *)self + 12),
            a2);
  if ( index >= 0 )
  {
    v4 = *(gameswf::RefCounted::Self **)(*((uint32_t *)self + 3) + 32 * index + 36);
    if ( v4 != nullptr )
    {
      v8 = v4;
      gameswf::RefCounted::addRef(v4);
      v5 = v8;
LABEL_4:
      v9 = v5;
      gameswf::RefCounted::dropRef(v5);
      return v9;
    }
  }
  result = nullptr;
  if ( a3 )
  {
    v7 = *((gameswf::Player::Self **)self + 2);
    if ( v7 != nullptr && *(uint8_t *)(*((uint32_t *)self + 1) + 2) == 0 )
    {
      v7 = nullptr;
      sub_7E5ED0((gameswf::Self **)self + 1, nullptr);
      *((uint32_t *)self + 2) = 0;
    }
    v10 = (gameswf::RefCounted::Self *)opNew(0x44u);
    gameswf::ASObject::ASObject(v10, v7);
    *(uint32_t *)v10 = ((uint32_t)(uintptr_t)&off_2091688);
    *((uint32_t *)v10 + 10) = 0;
    *((uint32_t *)v10 + 11) = 0;
    sub_7763C0((gameswf::RefCounted::Self *)((char *)v10 + 48), (char *)a2);
    gameswf::RefCounted::addRef(v10);
    gameswf::ASClassManager::registerPackage(self, v10);
    v5 = v10;
    goto LABEL_4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClassManager::findClass  (binary VA: 0x117ff10)
// Original: gameswf::ASClassManager::findClass
// ----------------------------------------------------------------------------
int gameswf::ASClassManager::findClass(gameswf::ASClassManager::Self *self, const gameswf::String::Self *a2, const gameswf::String::Self *a3, bool a4)
{
  gameswf::RefCounted::Self *Package;
  int result;

  Package = gameswf::ASClassManager::findPackage(self, a2, false);
  result = 0;
  if ( Package != nullptr )
    return gameswf::ASPackage::findClass(Package, a3, a4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASClassManager::createObject  (binary VA: 0x117ff80)
// Original: gameswf::ASClassManager::createObject
// ----------------------------------------------------------------------------
gameswf::ASObject::Self * gameswf::ASClassManager::createObject(gameswf::Self **self, const gameswf::String::Self *a2, const gameswf::String::Self *a3)
{
  gameswf::ASObject::Self *v3;
  gameswf::ASClass::Self *Class;
  gameswf::Player::Self *v5;

  v3 = nullptr;
  Class = (gameswf::ASClass::Self *)gameswf::ASClassManager::findClass((gameswf::ASClassManager::Self *)self, a2, a3, true);
  if ( Class != nullptr )
  {
    v5 = (gameswf::Player::Self *)(*(self + 2));
    if ( v5 != nullptr && *((uint8_t *)*(self + 1) + 2) == 0 )
    {
      sub_7E5ED0(self + 1, nullptr);
      *(self + 2) = nullptr;
      v5 = nullptr;
    }
    v3 = (gameswf::ASObject::Self *)gameswf::ASClass::newOp(Class, v5);
    gameswf::ASClass::initializeInstance((gameswf::abc_def::Self ***)Class, v3);
  }
  return v3;
}


