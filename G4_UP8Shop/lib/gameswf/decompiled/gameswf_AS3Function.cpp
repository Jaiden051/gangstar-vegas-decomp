#include "Core/Utils/DecompTypes.h"
#include "gameswf_AS3Function.h"

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Function::Destroy  (binary VA: 0x106f160)
// Original: gameswf::AS3Function::~AS3Function
// ----------------------------------------------------------------------------
void gameswf::AS3Function::Destroy(gameswf::RefCounted::Self **self)
{
  int v1;
  gameswf::Self *v2;
  int v3;
  gameswf::Self *v4;
  int v5;
  gameswf::Self *v6;
  int v7;

  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208E188);
  if ( *(self + 25) != nullptr )
    gameswf::RefCounted::dropRef(*(self + 25));
  v1 = (int)(uintptr_t)(*(self + 24));
  if ( *(self + 23) != nullptr && *((uint8_t *)self + 99) != 0 )
  {
    gameswf::free_internal(*(self + 23));
    v1 = (int)(uintptr_t)(*(self + 24));
  }
  v2 = (gameswf::Self *)(*(self + 21));
  *(self + 24) = (gameswf::RefCounted::Self *)(v1 & 0xFF000000);
  *(self + 23) = nullptr;
  *((uint8_t *)self + 99) = 0;
  v3 = (int)(uintptr_t)(*(self + 22));
  if ( v2 != nullptr && *((uint8_t *)self + 91) != 0 )
  {
    gameswf::free_internal(v2);
    v3 = (int)(uintptr_t)(*(self + 22));
  }
  v4 = (gameswf::Self *)(*(self + 19));
  *(self + 22) = (gameswf::RefCounted::Self *)(v3 & 0xFF000000);
  *(self + 21) = nullptr;
  *((uint8_t *)self + 91) = 0;
  v5 = (int)(uintptr_t)(*(self + 20));
  if ( v4 != nullptr && *((uint8_t *)self + 83) != 0 )
  {
    gameswf::free_internal(v4);
    v5 = (int)(uintptr_t)(*(self + 20));
  }
  v6 = (gameswf::Self *)(*(self + 12));
  *(self + 20) = (gameswf::RefCounted::Self *)(v5 & 0xFF000000);
  *(self + 19) = nullptr;
  *((uint8_t *)self + 83) = 0;
  v7 = (int)(uintptr_t)(*(self + 13));
  if ( v6 != nullptr && *((uint8_t *)self + 55) != 0 )
  {
    gameswf::free_internal(v6);
    v7 = (int)(uintptr_t)(*(self + 13));
  }
  *(self + 12) = nullptr;
  *(self + 13) = (gameswf::RefCounted::Self *)(v7 & 0xFF000000);
  *((uint8_t *)self + 55) = 0;
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208E288);
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Function::Destroy_ea106f2d0  (binary VA: 0x106f2d0)
// Original: gameswf::AS3Function::~AS3Function
// ----------------------------------------------------------------------------
void gameswf::AS3Function::Destroy_ea106f2d0(gameswf::RefCounted::Self **self)
{
  gameswf::AS3Function::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Function::Construct  (binary VA: 0x10710a0)
// Original: gameswf::AS3Function::AS3Function
// ----------------------------------------------------------------------------
gameswf::AS3Function::Self * gameswf::AS3Function::Construct(gameswf::AS3Function::Self *self, gameswf::abc_def::Self *a2, int a3, gameswf::Player::Self *a4)
{
  gameswf::AS3Function::Self *result;

  gameswf::ASObject::ASObject(self, a4);
  *((uint32_t *)self + 11) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E188);
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 13) &= 0xFF000000;
  result = (gameswf::AS3Function::Self *)(a3 & 0xFFFFFF | *((uint32_t *)self + 16) & 0xFF000000);
  *((uint32_t *)self + 20) &= 0xFF000000;
  *((uint32_t *)self + 22) &= 0xFF000000;
  *((uint32_t *)self + 24) &= 0xFF000000;
  *((uint32_t *)self + 12) = 0;
  *((uint8_t *)self + 55) = 0;
  *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)self + 19) = 0;
  *((uint8_t *)self + 83) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint8_t *)self + 91) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint8_t *)self + 99) = 0;
  *((uint32_t *)self + 25) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Function::getPropertyOwner  (binary VA: 0x1071150)
// Original: gameswf::AS3Function::getPropertyOwner
// ----------------------------------------------------------------------------
gameswf::ASObject::Self * gameswf::AS3Function::getPropertyOwner(gameswf::AS3Function::Self *self, gameswf::ASValue::Self *a2, int a3, const gameswf::String::Self *a4)
{
  int v4;
  gameswf::ASObject::Self *v5;
  gameswf::Self *v7;
  uint8_t v9[28];

  v4 = 0;
  v9[0] = 0;
  v9[1] = 0;
  if ( *(uint8_t *)a2 == 5 )
    v4 = *((uint32_t *)a2 + 1);
  if ( (uint8_t)gameswf::ASValue::getMemberAt(a2, a3, a4, (gameswf::ASValue::Self *)v9) != 0 )
  {
    v5 = nullptr;
    if ( *(uint8_t *)a2 == 5 )
      v5 = *((gameswf::ASObject::Self **)a2 + 1);
  }
  else if ( v4 != 0 )
  {
    v5 = *(gameswf::ASObject::Self **)(v4 + 24);
    if ( v5 != nullptr )
    {
      while ( (uint8_t)gameswf::ASObject::getMemberAt(v5, a3, a4, (gameswf::ASValue::Self *)v9) == 0 )
      {
        if ( *((uint32_t *)v5 + 19) == 0 )
          goto LABEL_16;
        v7 = *((gameswf::Self **)v5 + 18);
        if ( *((uint8_t *)v7 + 2) == 0 )
        {
          if ( (*(uint16_t *)v7)-- == 1 )
            gameswf::free_internal(v7);
          *((uint32_t *)v5 + 18) = 0;
          *((uint32_t *)v5 + 19) = 0;
          goto LABEL_16;
        }
        v5 = *((gameswf::ASObject::Self **)v5 + 19);
      }
    }
  }
  else
  {
LABEL_16:
    v5 = nullptr;
  }
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v9);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Function::findPropStrict  (binary VA: 0x1071260)
// Original: gameswf::AS3Function::findPropStrict
// ----------------------------------------------------------------------------
gameswf::ASObject::Self * gameswf::AS3Function::findPropStrict(gameswf::AS3Function::Self *a1, uint32_t *a2, int a3, gameswf::String::Self *a4)
{
  gameswf::abc_def::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  gameswf::RefCounted::Self *v9;
  gameswf::ASObject::Self *PropertyOwner;
  gameswf::ASObject::Self *Class;
  const gameswf::String::Self *MultiNamespace;
  gameswf::ASPackage::Self *Package;
  gameswf::ASPackage::Self *v15;
  typedef uint8_t _g4_t_v16[12];
  typedef uint8_t _g4_t_v17[4];
  typedef gameswf::RefCounted::Self *_g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v17)) > _g4_s1 ? (20u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v18)) > _g4_s2 ? (24u + sizeof(_g4_t_v18)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);

  v4 = *((gameswf::abc_def::Self **)a1 + 10);
  v5 = *(uint32_t *)(*((uint32_t *)v4 + 27) + 4 * a3);
  v16[0] = 0;
  v16[1] = 0;
  v6 = a2[1] - 1;
  if ( v6 >= 0 )
  {
    v7 = 4 * v6;
    v8 = v5;
    do
    {
      v9 = *(gameswf::RefCounted::Self **)(*a2 + v7);
      v17[0] = 5;
      v17[1] = 0;
      v18 = v9;
      if ( v9 != nullptr )
        gameswf::RefCounted::addRef(v9);
      PropertyOwner = gameswf::AS3Function::getPropertyOwner(a1, (gameswf::ASValue::Self *)v17, v8, a4);
      if ( PropertyOwner != nullptr )
      {
        Class = PropertyOwner;
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v17);
        goto LABEL_8;
      }
      --v6;
      v7 -= 4;
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v17);
    }
    while ( v6 != -1 );
    v4 = *((gameswf::abc_def::Self **)a1 + 10);
  }
  Class = nullptr;
  MultiNamespace = (const gameswf::String::Self *)gameswf::abc_def::getMultiNamespace(v4, a3);
  Package = (gameswf::ASPackage::Self *)gameswf::ASClassManager::findPackage(
                                    (gameswf::ASClassManager::Self *)(*((uint32_t *)a1 + 4) + 236),
                                    MultiNamespace,
                                    false);
  v15 = Package;
  if ( Package != nullptr )
  {
    Class = (gameswf::ASObject::Self *)gameswf::ASPackage::findClass(Package, a4, true);
    if ( Class == nullptr && (uint8_t)gameswf::ASPackage::hasFunction(v15, a4) != 0 )
      Class = (gameswf::ASObject::Self *)(v15);
  }
LABEL_8:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v16);
  return Class;
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Function::getProperty  (binary VA: 0x10713b0)
// Original: gameswf::AS3Function::getProperty
// ----------------------------------------------------------------------------
int gameswf::AS3Function::getProperty(gameswf::Player::Self **self, gameswf::ASValue::Self *a2, int a3, const gameswf::String::Self *a4, gameswf::ASValue::Self *a5, bool a6)
{
  int result;
  gameswf::RefCounted::Self *v7;
  gameswf::ASObject::Self *v8;
  typedef gameswf::RefCounted::Self *_g4_t_v9;
  typedef uint8_t _g4_t_v10[24];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);

  v9 = nullptr;
  if ( *(uint8_t *)a2 == 5 )
    v9 = *((gameswf::RefCounted::Self **)a2 + 1);
  if ( (uint8_t)gameswf::ASValue::getMemberAt(a2, a3, a4, a5) != 0 )
  {
    if ( *(uint8_t *)a5 == 6 )
    {
      v10[0] = 0;
      v10[1] = 0;
      gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v10, a2);
      gameswf::ASValue::getProperty(a5, (const gameswf::ASValue::Self *)v10, a5);
      return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v10);
    }
    else
    {
      result = gameswf::ASValue::isFunction(a5);
      if ( (uint8_t)result != 0 )
      {
        result = a6;
        if ( a6 && *(uint8_t *)a5 == 5 )
        {
          result = *((uint32_t *)a5 + 1);
          if ( result != 0 )
          {
            result = G4_VCALL<int>(result, 8, 9);
            if ( (uint8_t)result == 0 && *(uint8_t *)a5 == 5 )
            {
              v7 = *((gameswf::RefCounted::Self **)a5 + 1);
              if ( v7 != nullptr )
              {
                result = G4_VCALL<int>(v7, 8, 8);
                if ( (uint8_t)result != 0 )
                {
                  v8 = (gameswf::ASObject::Self *)opNew(0x30u);
                  gameswf::ASObject::ASObject(v8, *(self + 4));
                  *((uint32_t *)v8 + 10) = (uint32_t)(uintptr_t)(v7);
                  *(uint32_t *)v8 = ((uint32_t)(uintptr_t)&off_208E208);
                  gameswf::RefCounted::addRef(v7);
                  *((uint32_t *)v8 + 11) = (uint32_t)(uintptr_t)(v9);
                  if ( v9 != nullptr )
                    gameswf::RefCounted::addRef(v9);
                  return (int)(uintptr_t)(gameswf::ASValue::setObject(a5, v8));
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    result = gameswf::ASValue::dropRefs(a5);
    *(uint8_t *)a5 = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Function::isInstanceOf  (binary VA: 0x1071540)
// Original: gameswf::AS3Function::isInstanceOf
// ----------------------------------------------------------------------------
int gameswf::AS3Function::isInstanceOf(gameswf::AS3Function::Self *self, gameswf::ASValue::Self *a2, gameswf::ASClass::Self *a3)
{
  int v3;
  char isInstanceOf;
  int v6;
  gameswf::ASClass::Self *v7;
  char v8;
  gameswf::ASClass::Self *v9;
  gameswf::Self *v10;
  gameswf::Self *v11;
  gameswf::ASClass::Self *Class;
  gameswf::ASClass::Self *v13;
  typedef gameswf::ASClass::Self *_g4_t_v14;
  typedef gameswf::ASClass::Self *_g4_t_v15;
  typedef gameswf::ASClass::Self *_g4_t_v16;
  typedef gameswf::ASClass::Self *_g4_t_v17;
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  typedef gameswf::Self *_g4_t_v20;
  typedef int16_t _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef char _g4_t_v25;
  typedef gameswf::Self *_g4_t_v26;
  typedef int16_t _g4_t_v27;
  typedef char _g4_t_v28;
  typedef char _g4_t_v29;
  typedef gameswf::Self *_g4_t_v30[8];
  typedef gameswf::Self *_g4_t_v31[8];
  typedef gameswf::Self *_g4_t_v32[8];
  typedef gameswf::Self *_g4_t_v33[8];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v17)) > _g4_s3 ? (8u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v18)) > _g4_s4 ? (16u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (17u + sizeof(_g4_t_v19)) > _g4_s5 ? (17u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v20)) > _g4_s6 ? (28u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v21)) > _g4_s7 ? (32u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (34u + sizeof(_g4_t_v22)) > _g4_s8 ? (34u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (35u + sizeof(_g4_t_v23)) > _g4_s9 ? (35u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v24)) > _g4_s10 ? (48u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (49u + sizeof(_g4_t_v25)) > _g4_s11 ? (49u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v26)) > _g4_s12 ? (60u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v27)) > _g4_s13 ? (64u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (66u + sizeof(_g4_t_v28)) > _g4_s14 ? (66u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (67u + sizeof(_g4_t_v29)) > _g4_s15 ? (67u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v30)) > _g4_s16 ? (80u + sizeof(_g4_t_v30)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v31)) > _g4_s17 ? (112u + sizeof(_g4_t_v31)) : _g4_s17,
    _g4_s19 = (144u + sizeof(_g4_t_v32)) > _g4_s18 ? (144u + sizeof(_g4_t_v32)) : _g4_s18,
    _g4_s20 = (176u + sizeof(_g4_t_v33)) > _g4_s19 ? (176u + sizeof(_g4_t_v33)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 17u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 34u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 35u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 49u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 66u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 67u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 112u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 144u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 176u);

  v3 = 0;
  if ( a3 == nullptr )
    return v3;
  if ( *(uint8_t *)a2 != 5
    || (v6 = *((uint32_t *)a2 + 1)) == 0
    || (v7 = *(gameswf::ASClass::Self **)(v6 + 24)) == nullptr
    || (uint8_t)gameswf::ASClass::isInstanceOf(v7, a3) == 0 )
  {
    isInstanceOf = gameswf::ASValue::isInstanceOf(a2, a3);
    v3 = 1;
    if ( isInstanceOf != 0 )
      return v3;
    v8 = gameswf::ASValue::isInstanceOf(a2, *((const gameswf::ASFunction::Self **)a3 + 16));
    v3 = 1;
    if ( v8 != 0 )
      return v3;
    if ( (uint8_t)gameswf::ASValue::isFunction(a2) == 0 )
      goto LABEL_11;
    v24 = 1;
    v25 = 0;
    gameswf::String::resize((gameswf::String::Self *)&v24, 8);
    v10 = (gameswf::Self *)&v25;
    if ( v24 == -1 )
      v10 = v26;
    gameswf::Strcpy_s(v10, byte_9, (gameswf::Self *)"Function");
    v18 = 1;
    v19 = 0;
    v27 = -1;
    v28 = 127;
    v29 |= 1u;
    gameswf::String::resize((gameswf::String::Self *)&v18, 0);
    v11 = (gameswf::Self *)&v19;
    if ( v18 == -1 )
      v11 = v20;
    gameswf::Strcpy_s(v11, (char *)&dword_0 + 1, (gameswf::Self *)&unk_1B15112);
    v21 = -1;
    v22 = 127;
    v23 |= 1u;
    Class = (gameswf::ASClass::Self *)gameswf::ASClassManager::findClass(
                                  (gameswf::ASClassManager::Self *)(*((uint32_t *)self + 4) + 236),
                                  (const gameswf::String::Self *)&v18,
                                  (const gameswf::String::Self *)&v24,
                                  true);
    if ( v18 == -1 && (v23 & 1) != 0 )
    {
      v14 = Class;
      gameswf::free_internal(v20);
      Class = v14;
    }
    if ( v24 == -1 && (v29 & 1) != 0 )
    {
      v15 = Class;
      gameswf::free_internal(v26);
      Class = v15;
    }
    if ( a3 != Class )
    {
LABEL_11:
      v3 = 0;
      if ( *(uint8_t *)a2 != 5 )
        return v3;
      sub_776320((gameswf::String::Self *)v31, (gameswf::Self *)"Object");
      sub_776320((gameswf::String::Self *)v30, (gameswf::Self *)&unk_1B15112);
      v9 = (gameswf::ASClass::Self *)gameswf::ASClassManager::findClass(
                                 (gameswf::ASClassManager::Self *)(*((uint32_t *)self + 4) + 236),
                                 (const gameswf::String::Self *)v30,
                                 (const gameswf::String::Self *)v31,
                                 true);
      if ( LOBYTE(v30[0]) == 0xFF && (HIBYTE(v30[4]) & 1) != 0 )
      {
        v17 = v9;
        gameswf::free_internal(v30[3]);
        v9 = v17;
      }
      if ( LOBYTE(v31[0]) == 0xFF && (HIBYTE(v31[4]) & 1) != 0 )
      {
        v16 = v9;
        gameswf::free_internal(v31[3]);
        v9 = v16;
      }
      if ( a3 != v9 )
      {
        v3 = 0;
        if ( *(uint8_t *)a2 == 5 )
        {
          sub_776320((gameswf::String::Self *)v33, (gameswf::Self *)"Class");
          sub_776320((gameswf::String::Self *)v32, (gameswf::Self *)&unk_1B15112);
          v13 = (gameswf::ASClass::Self *)gameswf::ASClassManager::findClass(
                                      (gameswf::ASClassManager::Self *)(*((uint32_t *)self + 4) + 236),
                                      (const gameswf::String::Self *)v32,
                                      (const gameswf::String::Self *)v33,
                                      true);
          if ( LOBYTE(v32[0]) == 0xFF && (HIBYTE(v32[4]) & 1) != 0 )
            gameswf::free_internal(v32[3]);
          if ( LOBYTE(v33[0]) == 0xFF && (HIBYTE(v33[4]) & 1) != 0 )
            gameswf::free_internal(v33[3]);
          LOBYTE(v3) = a3 == v13;
        }
        return v3;
      }
    }
    return 1;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Function::getExceptionHandlerInfo  (binary VA: 0x1071940)
// Original: gameswf::AS3Function::getExceptionHandlerInfo
// ----------------------------------------------------------------------------
uint32_t * gameswf::AS3Function::getExceptionHandlerInfo(gameswf::AS3Function::Self *self, gameswf::ASValue::Self *a2, int a3)
{
  uint32_t *v3;
  const gameswf::String::Self *MultiNamespace;
  gameswf::ASClass::Self *Class;
  gameswf::Self *v6;
  gameswf::Self *v7;
  typedef gameswf::ASClass::Self *_g4_t_v9;
  typedef gameswf::ASClass::Self *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef gameswf::Self *_g4_t_v15;
  typedef int16_t _g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  typedef unsigned int _g4_t_v19[3];
  typedef gameswf::Self *_g4_t_v20;
  typedef int16_t _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v11)) > _g4_s2 ? (24u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v12)) > _g4_s3 ? (28u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v13)) > _g4_s4 ? (32u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (33u + sizeof(_g4_t_v14)) > _g4_s5 ? (33u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v15)) > _g4_s6 ? (44u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v16)) > _g4_s7 ? (48u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (50u + sizeof(_g4_t_v17)) > _g4_s8 ? (50u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (51u + sizeof(_g4_t_v18)) > _g4_s9 ? (51u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v19)) > _g4_s10 ? (64u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v20)) > _g4_s11 ? (76u + sizeof(_g4_t_v20)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v21)) > _g4_s12 ? (80u + sizeof(_g4_t_v21)) : _g4_s12,
    _g4_s14 = (82u + sizeof(_g4_t_v22)) > _g4_s13 ? (82u + sizeof(_g4_t_v22)) : _g4_s13,
    _g4_s15 = (83u + sizeof(_g4_t_v23)) > _g4_s14 ? (83u + sizeof(_g4_t_v23)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 33u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 50u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 51u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 76u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 80u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 82u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 83u);

  v3 = nullptr;
  if ( (int)(*((uint32_t *)self + 24) << 8) > 0 )
  {
    v12 = 0;
    v11 = 0;
    while ( 1 )
    {
      v3 = (uint32_t *)(*((uint32_t *)self + 23) + v12);
      MultiNamespace = (const gameswf::String::Self *)gameswf::abc_def::getMultiNamespace(
                                                  *((gameswf::abc_def::Self **)self + 10),
                                                  v3[3]);
      Class = (gameswf::ASClass::Self *)gameswf::ASClassManager::findClass(
                                    (gameswf::ASClassManager::Self *)(*((uint32_t *)self + 4) + 236),
                                    MultiNamespace,
                                    *(const gameswf::String::Self **)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 10) + 172)
                                                                          + 16)
                                                              + 4
                                                              * *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 10) + 116)
                                                                          + 4
                                                                          * (*(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 10) + 80)
                                                                                       + 8 * v3[3]) >> 8))),
                                    (bool)&dword_0 + 1);
      if ( v3[3] == 0 )
      {
        LOWORD(v19[0]) = 1;
        gameswf::String::resize((gameswf::String::Self *)v19, 6);
        v6 = (gameswf::Self *)((char *)v19 + 1);
        if ( LOBYTE(v19[0]) == 0xFF )
          v6 = v20;
        gameswf::Strcpy_s(v6, (char *)&loc_6 + 1, (gameswf::Self *)"Object");
        v21 = -1;
        v22 = 127;
        v23 |= 1u;
        v13 = 1;
        v14 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v13, 0);
        v7 = (gameswf::Self *)&v14;
        if ( v13 == -1 )
          v7 = v15;
        gameswf::Strcpy_s(v7, (char *)&dword_0 + 1, (gameswf::Self *)&unk_1B15112);
        v16 = -1;
        v17 = 127;
        v18 |= 1u;
        Class = (gameswf::ASClass::Self *)gameswf::ASClassManager::findClass(
                                      (gameswf::ASClassManager::Self *)(*((uint32_t *)self + 4) + 236),
                                      (const gameswf::String::Self *)&v13,
                                      (const gameswf::String::Self *)v19,
                                      true);
        if ( v13 == -1 && (v18 & 1) != 0 )
        {
          v10 = Class;
          gameswf::free_internal(v15);
          Class = v10;
        }
        if ( LOBYTE(v19[0]) == 0xFF && (v23 & 1) != 0 )
        {
          v9 = Class;
          gameswf::free_internal(v20);
          Class = v9;
        }
      }
      if ( *v3 <= a3 && a3 <= v3[1] && (uint8_t)gameswf::AS3Function::isInstanceOf(self, a2, Class) != 0 )
        break;
      ++v11;
      v12 += 20;
      if ( v11 >= (int)(*((uint32_t *)self + 24) << 8) >> 8 )
        return nullptr;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Function::read  (binary VA: 0x1071bd0)
// Original: gameswf::AS3Function::read
// ----------------------------------------------------------------------------
int gameswf::AS3Function::read(gameswf::AS3Function::Self *self, gameswf::Stream::Self *a2)
{
  gameswf::AS3Function::Self *v2;
  gameswf::Stream::Self *v3;
  int VU32;
  int v5;
  unsigned int v6;
  int i;
  int result;
  int j;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint32_t *v16;
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
  uint32_t *v27;
  int v28;
  gameswf::AS3Function::Self *v29;
  gameswf::Stream::Self *v30;
  gameswf::Stream::Self *v31;
  int v32;

  v2 = self;
  v3 = a2;
  VU32 = gameswf::Stream::readVU32(a2);
  v5 = gameswf::Stream::readVU32(a2);
  v6 = *((uint32_t *)self + 14) & 0xFF000000;
  *((uint16_t *)self + 37) = VU32;
  *((uint32_t *)self + 14) = v5 & 0xFFFFFF | v6;
  if ( VU32 > 0 )
  {
    for ( i = 0; i != VU32; ++i )
      gameswf::Stream::readVU32(a2);
    v3 = a2;
    v2 = self;
  }
  *((uint32_t *)v2 + 15) = gameswf::Stream::readVU32(v3) & 0xFFFFFF | *((uint32_t *)v2 + 15) & 0xFF000000;
  result = gameswf::Stream::readU8(v3);
  *((uint8_t *)v2 + 63) = result;
  if ( (result & 8) != 0 )
  {
    v11 = gameswf::Stream::readVU32(v3);
    v31 = (gameswf::Stream::Self *)v11;
    if ( v11 > 0 )
    {
      if ( *((uint32_t *)v2 + 19) == 0 )
      {
        v21 = v11 << 8 >> 8;
        *((uint32_t *)v2 + 20) = v21 & 0xFFFFFF | *((uint32_t *)v2 + 20) & 0xFF000000;
        v22 = gameswf::malloc_internal(8 * v21);
        *((uint8_t *)v2 + 83) = 1;
        v23 = *((uint32_t *)v2 + 20) << 8;
        *((uint32_t *)v2 + 19) = v22;
        v24 = v23 >> 8;
        if ( v24 > 0 )
        {
          v25 = 0;
          while ( 1 )
          {
            v26 = v22 + 8 * v25;
            if ( v26 != 0 )
            {
              *(uint32_t *)v26 = 0;
              *(uint8_t *)(v26 + 4) = 0;
              v24 = (int)(*((uint32_t *)v2 + 20) << 8) >> 8;
            }
            if ( ++v25 >= v24 )
              break;
            v22 = *((uint32_t *)v2 + 19);
          }
        }
      }
      v29 = v2;
      v32 = VU32;
      v17 = 0;
      do
      {
        v18 = 8 * v17;
        v19 = 8 * v17++;
        v27 = (uint32_t *)(*((uint32_t *)v29 + 19) + v19);
        *v27 = gameswf::Stream::readVU32(v3);
        v20 = *((uint32_t *)v29 + 19) + v18;
        *(uint8_t *)(v20 + 4) = gameswf::Stream::readU8(v3);
      }
      while ( v17 < (int)(uintptr_t)(v31) );
      VU32 = v32;
      v2 = v29;
    }
    result = *((uint8_t *)v2 + 63);
  }
  if ( (result & 0x80u) != 0 && VU32 > 0 )
  {
    if ( *((uint32_t *)v2 + 12) == 0 )
    {
      *((uint32_t *)v2 + 13) = (VU32 << 8 >> 8) & 0xFFFFFF | *((uint32_t *)v2 + 13) & 0xFF000000;
      v12 = gameswf::malloc_internal(4 * (VU32 << 8 >> 8));
      *((uint8_t *)v2 + 55) = 1;
      v13 = *((uint32_t *)v2 + 13) << 8;
      *((uint32_t *)v2 + 12) = v12;
      v14 = v13 >> 8;
      if ( v14 > 0 )
      {
        v15 = 0;
        while ( 1 )
        {
          v16 = (uint32_t *)(v12 + 4 * v15);
          if ( v16 != nullptr )
          {
            *v16 = 0;
            v14 = (int)(*((uint32_t *)v2 + 13) << 8) >> 8;
          }
          if ( ++v15 >= v14 )
            break;
          v12 = *((uint32_t *)v2 + 12);
        }
      }
    }
    v28 = VU32;
    v30 = v3;
    for ( j = 0; j < v28; ++j )
    {
      v10 = (uint32_t *)(*((uint32_t *)v2 + 12) + 4 * j);
      result = gameswf::Stream::readVU32(v30);
      *v10 = result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Function::readBody  (binary VA: 0x1071e30)
// Original: gameswf::AS3Function::readBody
// ----------------------------------------------------------------------------
int gameswf::AS3Function::readBody(gameswf::AS3Function::Self *self, gameswf::Stream::Self *a2, bool a3)
{
  gameswf::AS3Function::Self *v3;
  gameswf::Stream::Self *v4;
  int VU32;
  bool v6; // cc
  int v7;
  bool v8;
  int v9;
  int v10;
  int v11;
  uint8_t *v12;
  int v13;
  gameswf::Stream::Self *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint32_t *v22;
  int v23;
  gameswf::AS3Function::Self *v24;
  int v25;
  gameswf::except_info::Self *v26;
  int result;
  int v28;
  gameswf::AS3Function::Self *v29;
  int v30;
  typedef gameswf::Stream::Self *_g4_t_v31;
  typedef bool _g4_t_v32;
  typedef gameswf::Stream::Self *_g4_t_v33;
  typedef gameswf::Stream::Self *_g4_t_v34;
  typedef gameswf::Stream::Self *_g4_t_v35;
  typedef gameswf::Stream::Self *_g4_t_v36;
  typedef uint8_t _g4_t_v37[4];
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v31)) > _g4_s0 ? (4u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v32)) > _g4_s1 ? (4u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v33)) > _g4_s2 ? (8u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v34)) > _g4_s3 ? (8u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v35)) > _g4_s4 ? (12u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v36)) > _g4_s5 ? (12u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v37)) > _g4_s6 ? (28u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v38)) > _g4_s7 ? (32u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v39)) > _g4_s8 ? (36u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v40)) > _g4_s9 ? (40u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v41)) > _g4_s10 ? (44u + sizeof(_g4_t_v41)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 40u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 44u);

  v3 = self;
  v4 = a2;
  v35 = nullptr;
  if ( a3 )
    v35 = (gameswf::Stream::Self *)(*((uint32_t *)self + 4) + 76);
  *((uint16_t *)self + 34) = gameswf::Stream::readVU32(a2);
  *((uint16_t *)self + 35) = gameswf::Stream::readVU32(a2);
  gameswf::Stream::readVU32(a2);
  *((uint16_t *)self + 36) = gameswf::Stream::readVU32(a2);
  VU32 = gameswf::Stream::readVU32(a2);
  v6 = VU32 <= 0;
  v7 = VU32;
  v8 = VU32 > 0;
  if ( v6 || *((uint32_t *)self + 21) != 0 )
  {
    v32 = v8;
    gameswf::Stream::align(a2);
    if ( !v32 )
      goto LABEL_17;
  }
  else
  {
    *((uint32_t *)self + 22) = (v7 << 8 >> 8) & 0xFFFFFF | *((uint32_t *)self + 22) & 0xFF000000;
    if ( v35 != nullptr )
    {
      v9 = gameswf::PermanentAllocator::allocate(v35, v7 << 8 >> 8);
      *((uint32_t *)self + 21) = v9;
      *((uint8_t *)self + 91) = 0;
    }
    else
    {
      v9 = gameswf::malloc_internal(v7 << 8 >> 8);
      *((uint32_t *)self + 21) = v9;
      *((uint8_t *)self + 91) = 1;
    }
    v10 = (int)(*((uint32_t *)self + 22) << 8) >> 8;
    if ( v10 > 0 )
    {
      v11 = 0;
      while ( 1 )
      {
        v12 = (uint8_t *)(v11 + v9);
        if ( v12 != nullptr )
        {
          *v12 = 0;
          v10 = (int)(*((uint32_t *)self + 22) << 8) >> 8;
        }
        if ( ++v11 >= v10 )
          break;
        v9 = *((uint32_t *)self + 21);
      }
    }
    gameswf::Stream::align(a2);
  }
  v13 = 0;
  v14 = a2;
  do
  {
    v31 = v14;
    v15 = (*(int (**)(int, int, uint32_t))(*((uint32_t *)v14 + 1) + 8))(
            v13 + *((uint32_t *)self + 21),
            v7,
            **((uint32_t **)v14 + 1));
    v7 -= v15;
    v13 += v15;
    v14 = v31;
  }
  while ( v7 > 0 );
  v3 = self;
  v4 = v31;
LABEL_17:
  v16 = gameswf::Stream::readVU32(v4);
  v33 = (gameswf::Stream::Self *)v16;
  if ( v16 > 0 )
  {
    if ( *((uint32_t *)v3 + 23) == 0 )
    {
      v17 = v16 << 8 >> 8;
      *((uint32_t *)v3 + 24) = v17 & 0xFFFFFF | *((uint32_t *)v3 + 24) & 0xFF000000;
      if ( v35 != nullptr )
      {
        v18 = gameswf::PermanentAllocator::allocate(v35, 20 * v17);
        *((uint32_t *)v3 + 23) = v18;
        *((uint8_t *)v3 + 99) = 0;
      }
      else
      {
        v18 = gameswf::malloc_internal(20 * v17);
        *((uint32_t *)v3 + 23) = v18;
        *((uint8_t *)v3 + 99) = 1;
      }
      v19 = (int)(*((uint32_t *)v3 + 24) << 8) >> 8;
      if ( v19 > 0 )
      {
        v20 = 0;
        v21 = 0;
        while ( 1 )
        {
          v22 = (uint32_t *)(v20 + v18);
          if ( v22 != nullptr )
          {
            *v22 = 0;
            v22[1] = 0;
            v22[2] = 0;
            v22[3] = 0;
            v22[4] = 0;
            v19 = (int)(*((uint32_t *)v3 + 24) << 8) >> 8;
          }
          ++v21;
          v20 += 20;
          if ( v21 >= v19 )
            break;
          v18 = *((uint32_t *)v3 + 23);
        }
      }
    }
    v36 = v4;
    v23 = 0;
    v24 = v3;
    v25 = 0;
    do
    {
      ++v23;
      v26 = (gameswf::except_info::Self *)(v25 + *((uint32_t *)v24 + 23));
      v25 += 20;
      gameswf::except_info::read(v26, v36, *((gameswf::abc_def::Self **)v24 + 10));
    }
    while ( v23 < (int)(uintptr_t)(v33) );
    v3 = v24;
    v4 = v36;
  }
  result = gameswf::Stream::readVU32(v4);
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  if ( result > 0 )
  {
    v34 = v4;
    v28 = 0;
    v29 = v3;
    v30 = result;
    do
    {
      ++v28;
      result = gameswf::traits_info::read((gameswf::traits_info::Self *)v37, v34, *((gameswf::abc_def::Self **)v29 + 10));
    }
    while ( v28 != v30 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Function::prepareCall  (binary VA: 0x1072f40)
// Original: gameswf::AS3Function::prepareCall
// ----------------------------------------------------------------------------
int gameswf::AS3Function::prepareCall(gameswf::AS3Function::Self *self, gameswf::ASValue::Self *a2, gameswf::ASEnvironment::Self *a3, gameswf::array<gameswf::ASValue::Self> *a4, int a5)
{
  gameswf::array<gameswf::ASValue::Self> *v5;
  int v6;
  int v7;
  int v8;
  gameswf::ASValue::Self *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char *v14;
  gameswf::ASValue::Self *v15;
  int v16;
  gameswf::array<gameswf::ASValue::Self> *i;
  gameswf::array<gameswf::ASValue::Self> *v19;
  gameswf::array<gameswf::ASValue::Self> *v20;
  int v21;
  int v22;
  int v23;

  v5 = a4;
  v6 = *((uint32_t *)a4 + 1);
  v21 = *(uint32_t *)a4;
  v7 = *((uint32_t *)a3 + 1);
  v8 = v7 + 1;
  if ( v7 + 1 > *((uint32_t *)a3 + 2) )
  {
    gameswf::array_gameswf_ASValue_3ea8a1::reserve(a3, v8 + (v8 >> 1));
    v7 = *((uint32_t *)a3 + 1);
    v5 = a4;
  }
  v9 = (gameswf::ASValue::Self *)(*(uint32_t *)a3 + 12 * v7);
  if ( v9 != nullptr )
  {
    *(uint8_t *)v9 = 0;
    *((uint8_t *)v9 + 1) = 0;
    v19 = v5;
    gameswf::ASValue::opAssign(v9, (const gameswf::ASValue::Self *)(v21 + 12 * (v6 - 1 - a5)));
    v5 = v19;
  }
  *((uint32_t *)a3 + 1) = v8;
  if ( a5 > 0 )
  {
    v10 = v8;
    v11 = 0;
    for ( i = v5; ; v5 = i )
    {
      v12 = v10 + 1;
      v22 = *((uint32_t *)v5 + 1);
      v23 = *(uint32_t *)i;
      v13 = *((uint32_t *)a3 + 2);
      if ( v10 + 1 <= v13 || *((uint32_t *)a3 + 3) != 0 )
      {
        v14 = *(char **)a3;
      }
      else
      {
        v16 = v12 + (v12 >> 1);
        *((uint32_t *)a3 + 2) = v16;
        if ( v16 != 0 )
        {
          v14 = *(uint32_t *)a3 != 0
              ? (char *)gameswf::realloc_internal(*(gameswf::Self **)a3, 12 * v16, 12 * v13)
              : (char *)gameswf::malloc_internal(12 * v16);
          *(uint32_t *)a3 = (uint32_t)(uintptr_t)(v14);
          v10 = *((uint32_t *)a3 + 1);
        }
        else
        {
          if ( *(uint32_t *)a3 != 0 )
          {
            gameswf::free_internal(*(gameswf::Self **)a3);
            v10 = *((uint32_t *)a3 + 1);
          }
          *(uint32_t *)a3 = 0;
          v14 = nullptr;
        }
      }
      v15 = (gameswf::ASValue::Self *)&v14[12 * v10];
      if ( v15 != nullptr )
      {
        *(uint8_t *)v15 = 0;
        *((uint8_t *)v15 + 1) = 0;
        gameswf::ASValue::opAssign(v15, (const gameswf::ASValue::Self *)(v23 + 12 * (v22 - 1 - v11)));
      }
      ++v11;
      *((uint32_t *)a3 + 1) = v12;
      if ( v11 == a5 )
        break;
      v10 = v12;
    }
    v5 = i;
  }
  v20 = v5;
  gameswf::array_gameswf_ASValue_3ea8a1::resize(v5, *((uint32_t *)v5 + 1) - a5);
  gameswf::ASValue::opAssign(a2, (const gameswf::ASValue::Self *)(*(uint32_t *)v20 + 4 * (3 * *((uint32_t *)v20 + 1) - 3)));
  return gameswf::array_gameswf_ASValue_3ea8a1::resize(v20, *((uint32_t *)v20 + 1) - 1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Function::getExceptionTarget  (binary VA: 0x1073170)
// Original: gameswf::AS3Function::getExceptionTarget
// ----------------------------------------------------------------------------
int gameswf::AS3Function::getExceptionTarget(gameswf::AS3Function::Self *a1, gameswf::ASValue::Self *a2, int a3, gameswf::array<gameswf::ASValue::Self> *a4, int a5)
{
  uint32_t *ExceptionHandlerInfo;
  int v6;
  int v7;
  gameswf::ASValue::Self *v8;
  uint32_t *v10;
  uint32_t *v11;

  ExceptionHandlerInfo = gameswf::AS3Function::getExceptionHandlerInfo(a1, a2, a3);
  if ( ExceptionHandlerInfo != nullptr )
  {
    v6 = *((uint32_t *)a4 + 1);
    v7 = v6 + 1;
    if ( v6 + 1 > *((uint32_t *)a4 + 2) )
    {
      v11 = ExceptionHandlerInfo;
      gameswf::array_gameswf_ASValue_3ea8a1::reserve(a4, v7 + (v7 >> 1));
      v6 = *((uint32_t *)a4 + 1);
      ExceptionHandlerInfo = v11;
    }
    v8 = (gameswf::ASValue::Self *)(*(uint32_t *)a4 + 12 * v6);
    if ( v8 != nullptr )
    {
      *(uint8_t *)v8 = 0;
      *((uint8_t *)v8 + 1) = 0;
      v10 = ExceptionHandlerInfo;
      gameswf::ASValue::opAssign(v8, a2);
      ExceptionHandlerInfo = v10;
    }
    *((uint32_t *)a4 + 1) = v7;
    return ExceptionHandlerInfo[2];
  }
  else
  {
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(a5 + 180), a2);
    return -1;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Function::execute  (binary VA: 0x10735b0)
// Original: gameswf::AS3Function::execute
// ----------------------------------------------------------------------------
void gameswf::AS3Function::execute(long double nan_arg, gameswf::AS3Function::Self *a2, gameswf::RefCounted::Self **a3, gameswf::String::Self *a4, gameswf::array<gameswf::smart_ptr<gameswf::ASObject::Self>> *a5, gameswf::ASValue::Self *a6, int a7)
{
  int ExceptionTarget;
  unsigned int v8;
  gameswf::String::Self *v9;
  int v10;
  uint8_t v11;
  int v12;
  int v13;
  int v14;
  int v15;
  gameswf::ASValue::Self *v16;
  gameswf::RefCounted::Self *v17;
  char *v18;
  int v19;
  int v20;
  gameswf::ASValue::Self *v21;
  gameswf::RefCounted::Self *v22;
  char *v23;
  uint8_t *v24;
  uint8_t v25; // di
  int v26;
  uint8_t *v27;
  uint8_t v28; // di
  int v29;
  uint8_t *v30;
  uint8_t v31; // di
  int v32;
  uint8_t *v33;
  uint8_t v34; // di
  int v35;
  uint8_t *v36;
  int v37;
  uint8_t *v38;
  int v39;
  uint8_t *v40;
  int v41;
  uint8_t *v42;
  int v43;
  uint8_t *v44;
  uint8_t v45; // di
  int v46;
  uint8_t *v47;
  uint8_t v48; // di
  int v49;
  uint8_t *v50;
  uint8_t v51; // di
  int v52;
  uint8_t *v53;
  uint8_t v54; // di
  int v55;
  uint8_t *v56;
  int v57;
  uint8_t *v58;
  int v59;
  int v60;
  int v61;
  uint8_t *v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  gameswf::ASValue::Self *v69;
  gameswf::ASValue::Self *v70;
  int v71;
  gameswf::ASValue::Self *v72;
  int v73;
  int v74;
  int v75;
  char v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  uint8_t *v86;
  int v87;
  int v88;
  uint8_t *v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  gameswf::ASValue::Self *v97;
  int v98;
  int v99;
  const gameswf::String::Self *v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  double v108; // xmm0_8
  char v109;
  gameswf::ASObject::Self *v110;
  const gameswf::String::Self *v111;
  int v112;
  int v113;
  gameswf::ASClass::Self *v114;
  char isInstanceOf;
  int v116;
  int v117;
  gameswf::ASValue::Self *v118;
  gameswf::ASValue::Self *v119;
  char v120;
  double v121; // xmm0_8
  int v122;
  gameswf::ASValue::Self *v123;
  gameswf::ASValue::Self *v124;
  gameswf::ASValue::Self *v125;
  gameswf::ASValue::Self *v126;
  gameswf::ASValue::Self *v127;
  long double v128; // fst6
  char v130; // c2
  int v131;
  char v132;
  double v133; // xmm0_8
  int v134;
  int v135;
  int v136;
  char v137;
  double v138; // xmm0_8
  int v139;
  int v140;
  int v141;
  char v142; // di
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  gameswf::ASClass::Self *v155;
  int v156;
  char v157;
  int v158;
  int v159;
  gameswf::ASValue::Self *v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v167;
  gameswf::abc_def::Self *v168;
  gameswf::RefCounted::Self *v169;
  int v170;
  int v171;
  int v172;
  gameswf::RefCounted::Self *v173;
  int v174;
  int v175;
  int v176;
  gameswf::RefCounted::Self *v177;
  int v178;
  int v179;
  int v180;
  uint32_t *v181;
  uint8_t *v182;
  int v183;
  gameswf::ASValue::Self *v184;
  int v185;
  int v186;
  int v187;
  int v188;
  char v189;
  int v190;
  int v191;
  uint8_t *v192;
  gameswf::RefCounted::Self *v193;
  int v194;
  int v195;
  gameswf::ASObject::Self *v196;
  double v197; // xmm0_8
  gameswf::RefCounted::Self *v198;
  int v199;
  int v200;
  int v201;
  int v202;
  gameswf::RefCounted::Self *v203;
  int v204;
  int v205;
  gameswf::ASValue::Self *v206;
  int v207;
  int v208;
  int v209;
  gameswf::RefCounted::Self *v210;
  int v211;
  int v212;
  const gameswf::String::Self *v213;
  int v214;
  int v215;
  gameswf::RefCounted::Self *v216;
  gameswf::RefCounted::Self *v217;
  int v218;
  int v219;
  int v220;
  gameswf::RefCounted::Self *PropStrict;
  int v222;
  int v223;
  int v224;
  int v225;
  int v226;
  gameswf::ASValue::Self *v227;
  gameswf::RefCounted::Self *v228;
  gameswf::RefCounted::Self *v229;
  gameswf::RefCounted::Self *v230;
  int v231;
  int v232;
  int v233;
  char *v234;
  gameswf::RefCounted::Self *v235;
  char *v236;
  int v237;
  gameswf::ASObject::Self *v238;
  char *v239;
  int v240;
  gameswf::Self **v241;
  char v242;
  gameswf::Self **v243;
  gameswf::RefCounted::Self *v244;
  gameswf::RefCounted::Self *Object;
  gameswf::RefCounted::Self *v246;
  int v247;
  gameswf::RefCounted::Self *v248;
  int v249;
  gameswf::ASValue::Self *v250;
  char *v251;
  gameswf::RefCounted::Self *v252;
  char *v253;
  int v254;
  gameswf::ASValue::Self *v255;
  int *v256;
  int v257;
  int v258;
  int v259;
  int v260;
  int v261;
  int v262;
  gameswf::Self *v263;
  int v264;
  int64_t v265; // xmm0_8
  int v266;
  int v267;
  int v268;
  char *v269;
  int v270;
  char *v271;
  int v272;
  int v273;
  char *v274;
  int v275;
  const gameswf::String::Self *MultiNamespace;
  gameswf::RefCounted::Self *Class;
  char *v278;
  int v279;
  int v280;
  gameswf::ASValue::Self *v281;
  char *v282;
  int v283;
  char *v284;
  int v285;
  gameswf::String::Self *v286;
  int v287;
  int v288;
  int v289;
  int v290;
  int v291;
  int v292;
  int v293;
  char *v294;
  int v295;
  int v296;
  gameswf::ASValue::Self *v297;
  char *v298;
  int v299;
  gameswf::RefCounted::Self *v300;
  int v301;
  int v302;
  const gameswf::ASValue::Self *v303;
  char *v304;
  int v305;
  gameswf::RefCounted::Self *v306;
  bool v307;
  char *v308;
  int v309;
  int v310;
  int v311;
  int v312;
  int v313;
  int v314;
  int v315;
  gameswf::ASObject::Self *v316;
  char *v317;
  int v318;
  int v319;
  int v320;
  gameswf::ASValue::Self *v321;
  gameswf::ASObject::Self *v322;
  int v323;
  int v324;
  int v325;
  int v326;
  const gameswf::String::Self *v327;
  const gameswf::String::Self *v328;
  gameswf::RefCounted::Self *v329;
  int v330;
  int v331;
  int v332;
  gameswf::RefCounted::Self *v333;
  gameswf::RefCounted::Self *v334;
  bool v335;
  int v336;
  int v337;
  gameswf::ASValue::Self *v338;
  int v339;
  int v340;
  int v341;
  int StandardMemberID;
  gameswf::RefCounted::Self *v343;
  int v344;
  gameswf::Self *v345;
  char *v346;
  gameswf::ASObject::Self *v347;
  int v348;
  int v349;
  int v350;
  int v351;
  int v352;
  uint8_t *v353;
  const gameswf::String::Self *v354;
  char *v355;
  char *v356;
  int v357;
  char v358;
  int v359;
  gameswf::ASObject::Self *v360;
  typedef gameswf::Player::Self *_g4_t_v361;
  typedef unsigned int *_g4_t_v362;
  typedef const uint8_t *_g4_t_v363;
  typedef const uint8_t *_g4_t_v364;
  typedef const uint8_t *_g4_t_v365;
  typedef const uint8_t *_g4_t_v366;
  typedef const uint8_t *_g4_t_v367;
  typedef const uint8_t *_g4_t_v368;
  typedef const uint8_t *_g4_t_v369;
  typedef gameswf::RefCounted::Self *_g4_t_v370;
  typedef gameswf::RefCounted::Self *_g4_t_v371;
  typedef gameswf::RefCounted::Self *_g4_t_v372;
  typedef gameswf::RefCounted::Self *_g4_t_v373;
  typedef gameswf::RefCounted::Self *_g4_t_v374;
  typedef gameswf::RefCounted::Self *_g4_t_v375;
  typedef gameswf::RefCounted::Self *_g4_t_v376;
  typedef gameswf::RefCounted::Self *_g4_t_v377;
  typedef gameswf::RefCounted::Self *_g4_t_v378;
  typedef gameswf::RefCounted::Self *_g4_t_v379;
  typedef gameswf::RefCounted::Self *_g4_t_v380;
  typedef gameswf::RefCounted::Self *_g4_t_v381;
  typedef gameswf::RefCounted::Self *_g4_t_v382;
  typedef gameswf::RefCounted::Self *_g4_t_v383;
  typedef gameswf::RefCounted::Self *_g4_t_v384;
  typedef gameswf::RefCounted::Self *_g4_t_v385;
  typedef gameswf::RefCounted::Self *_g4_t_v386;
  typedef gameswf::RefCounted::Self *_g4_t_v387;
  typedef gameswf::RefCounted::Self *_g4_t_v388;
  typedef gameswf::RefCounted::Self *_g4_t_v389;
  typedef gameswf::RefCounted::Self *_g4_t_v390;
  typedef gameswf::RefCounted::Self *_g4_t_v391;
  typedef gameswf::RefCounted::Self *_g4_t_v392;
  typedef gameswf::RefCounted::Self *_g4_t_v393;
  typedef gameswf::RefCounted::Self *_g4_t_v394;
  typedef gameswf::RefCounted::Self *_g4_t_v395;
  typedef gameswf::RefCounted::Self *_g4_t_v396;
  typedef gameswf::RefCounted::Self *_g4_t_v397;
  typedef gameswf::RefCounted::Self *_g4_t_v398;
  typedef gameswf::RefCounted::Self *_g4_t_v399;
  typedef gameswf::RefCounted::Self *_g4_t_v400;
  typedef gameswf::RefCounted::Self *_g4_t_v401;
  typedef gameswf::RefCounted::Self *_g4_t_v402;
  typedef gameswf::RefCounted::Self *_g4_t_v403;
  typedef gameswf::RefCounted::Self *_g4_t_v404;
  typedef gameswf::RefCounted::Self *_g4_t_v405;
  typedef gameswf::RefCounted::Self *_g4_t_v406;
  typedef gameswf::RefCounted::Self *_g4_t_v407;
  typedef gameswf::RefCounted::Self *_g4_t_v408;
  typedef gameswf::RefCounted::Self *_g4_t_v409;
  typedef gameswf::RefCounted::Self *_g4_t_v410;
  typedef gameswf::RefCounted::Self *_g4_t_v411;
  typedef gameswf::RefCounted::Self *_g4_t_v412;
  typedef char _g4_t_v413;
  typedef gameswf::RefCounted::Self *_g4_t_v414;
  typedef gameswf::RefCounted::Self *_g4_t_v415;
  typedef gameswf::RefCounted::Self *_g4_t_v416;
  typedef gameswf::RefCounted::Self *_g4_t_v417;
  typedef gameswf::RefCounted::Self *_g4_t_v418;
  typedef gameswf::RefCounted::Self *_g4_t_v419;
  typedef gameswf::RefCounted::Self *_g4_t_v420;
  typedef gameswf::RefCounted::Self *_g4_t_v421;
  typedef gameswf::RefCounted::Self *_g4_t_v422;
  typedef gameswf::RefCounted::Self *_g4_t_v423;
  typedef gameswf::RefCounted::Self *_g4_t_v424;
  typedef gameswf::RefCounted::Self *_g4_t_v425;
  typedef gameswf::RefCounted::Self *_g4_t_v426;
  typedef char _g4_t_v427;
  typedef char _g4_t_v428;
  typedef char _g4_t_v429;
  typedef char _g4_t_v430;
  typedef char _g4_t_v431;
  typedef char _g4_t_v432;
  typedef gameswf::RefCounted::Self *_g4_t_v433;
  typedef gameswf::RefCounted::Self *_g4_t_v434;
  typedef gameswf::RefCounted::Self *_g4_t_v435;
  typedef gameswf::RefCounted::Self *_g4_t_v436;
  typedef gameswf::RefCounted::Self *_g4_t_v437;
  typedef char _g4_t_v438;
  typedef gameswf::RefCounted::Self *_g4_t_v439;
  typedef gameswf::RefCounted::Self *_g4_t_v440;
  typedef gameswf::RefCounted::Self *_g4_t_v441;
  typedef gameswf::Self *_g4_t_v442;
  typedef gameswf::Self *_g4_t_v443;
  typedef int _g4_t_v444;
  typedef int _g4_t_v445;
  typedef int _g4_t_v446;
  typedef int _g4_t_v447;
  typedef gameswf::RefCounted::Self *_g4_t_v448;
  typedef int _g4_t_v449;
  typedef int _g4_t_v450;
  typedef gameswf::Self **_g4_t_v451;
  typedef gameswf::RefCounted::Self *_g4_t_v452;
  typedef int _g4_t_v453;
  typedef int _g4_t_v454;
  typedef int _g4_t_v455;
  typedef gameswf::RefCounted::Self *_g4_t_v456;
  typedef int _g4_t_v457;
  typedef const gameswf::String::Self *_g4_t_v458;
  typedef gameswf::RefCounted::Self *_g4_t_v459;
  typedef uint8_t _g4_t_v460;
  typedef int _g4_t_v461;
  typedef int _g4_t_v462;
  typedef int _g4_t_v463;
  typedef int _g4_t_v464;
  typedef int _g4_t_v465;
  typedef int _g4_t_v466;
  typedef int _g4_t_v467;
  typedef gameswf::RefCounted::Self *_g4_t_v468;
  typedef char _g4_t_v469;
  typedef int _g4_t_v470;
  typedef uint8_t _g4_t_v471;
  typedef uint8_t _g4_t_v472;
  typedef uint8_t _g4_t_v473;
  typedef uint8_t _g4_t_v474;
  typedef uint8_t _g4_t_v475;
  typedef uint8_t _g4_t_v476;
  typedef uint8_t _g4_t_v477;
  typedef uint8_t _g4_t_v478;
  typedef gameswf::String::Self *_g4_t_VU30;
  typedef gameswf::String::Self *_g4_t_v480;
  typedef gameswf::String::Self *_g4_t_v481;
  typedef gameswf::String::Self *_g4_t_v482;
  typedef int _g4_t_v483;
  typedef gameswf::ASValue::Self *_g4_t_v484;
  typedef gameswf::RefCounted::Self **_g4_t_v485;
  typedef gameswf::array<gameswf::smart_ptr<gameswf::ASObject::Self>> *_g4_t_v486;
  typedef gameswf::RefCounted::Self *_g4_t_v487;
  typedef gameswf::RefCounted::Self *_g4_t_v488;
  typedef uint8_t _g4_t_v489;
  typedef uint8_t _g4_t_v490;
  typedef uint8_t _g4_t_v491;
  typedef uint8_t _g4_t_v492;
  typedef uint8_t _g4_t_v493;
  typedef uint8_t _g4_t_v494;
  typedef uint8_t _g4_t_v495;
  typedef uint8_t _g4_t_v496;
  typedef uint8_t _g4_t_v497;
  typedef uint8_t _g4_t_v498;
  typedef uint8_t _g4_t_v499;
  typedef uint8_t _g4_t_v500;
  typedef uint8_t _g4_t_v501;
  typedef uint8_t _g4_t_v502;
  typedef char _g4_t_v503;
  typedef int _g4_t_MemberIndex;
  typedef gameswf::RefCounted::Self *_g4_t_v505;
  typedef gameswf::RefCounted::Self *_g4_t_v506;
  typedef gameswf::RefCounted::Self *_g4_t_v507;
  typedef gameswf::RefCounted::Self *_g4_t_v508;
  typedef gameswf::RefCounted::Self *_g4_t_v509;
  typedef gameswf::RefCounted::Self *_g4_t_v510;
  typedef char _g4_t_v511;
  typedef gameswf::RefCounted::Self *_g4_t_v512;
  typedef gameswf::RefCounted::Self *_g4_t_v513;
  typedef gameswf::RefCounted::Self *_g4_t_v514;
  typedef gameswf::RefCounted::Self *_g4_t_v515;
  typedef int _g4_t_v516;
  typedef char *_g4_t_v517;
  typedef char *_g4_t_v518;
  typedef uint8_t _g4_t_v519;
  typedef uint8_t _g4_t_v520;
  typedef uint8_t _g4_t_v521;
  typedef uint8_t _g4_t_v522;
  typedef uint8_t _g4_t_v523;
  typedef uint8_t _g4_t_v524;
  typedef uint8_t _g4_t_v525;
  typedef gameswf::String::Self *_g4_t_v526;
  typedef int _g4_t_v527;
  typedef char *_g4_t_v528;
  typedef int _g4_t_v529;
  typedef char *_g4_t_v530;
  typedef unsigned int *_g4_t_v531;
  typedef int _g4_t_v532;
  typedef int _g4_t_v533;
  typedef char _g4_t_v534;
  typedef int _g4_t_v535;
  typedef gameswf::String::Self *_g4_t_v536;
  typedef uint8_t _g4_t_v537;
  typedef uint8_t _g4_t_v538;
  typedef uint8_t _g4_t_v539;
  typedef uint8_t _g4_t_v540;
  typedef uint8_t _g4_t_v541;
  typedef uint8_t _g4_t_v542;
  typedef uint8_t _g4_t_v543;
  typedef int _g4_t_v544;
  typedef gameswf::RefCounted::Self *_g4_t_v545;
  typedef gameswf::String::Self *_g4_t_v546;
  typedef int _g4_t_v547;
  typedef gameswf::Player::Self *_g4_t_v548;
  typedef int _g4_t_v549;
  typedef int _g4_t_v550;
  typedef gameswf::AS3Function::Self *_g4_t_v551;
  typedef gameswf::RefCounted::Self *_g4_t_v552;
  typedef gameswf::RefCounted::Self *_g4_t_ExceptionHandlerInfo;
  typedef gameswf::RefCounted::Self *_g4_t_v554;
  typedef gameswf::RefCounted::Self *_g4_t_v555;
  typedef gameswf::RefCounted::Self *_g4_t_v556;
  typedef int _g4_t_v557;
  typedef gameswf::RefCounted::Self *_g4_t_v558;
  typedef gameswf::RefCounted::Self *_g4_t_v559;
  typedef gameswf::RefCounted::Self *_g4_t_v560;
  typedef gameswf::RefCounted::Self *_g4_t_v561;
  typedef gameswf::RefCounted::Self *_g4_t_v562;
  typedef gameswf::RefCounted::Self *_g4_t_Array;
  typedef gameswf::RefCounted::Self *_g4_t_v564;
  typedef gameswf::RefCounted::Self *_g4_t_v565;
  typedef gameswf::RefCounted::Self *_g4_t_v566;
  typedef int _g4_t_v567;
  typedef bool _g4_t_v568;
  typedef bool _g4_t_v569;
  typedef gameswf::ASObject::Self *_g4_t_v570;
  typedef unsigned int _g4_t_v571;
  typedef int _g4_t_v572;
  typedef int _g4_t_v573[4];
  typedef char _g4_t_v574;
  typedef char _g4_t_v575;
  typedef uint8_t _g4_t_v576[4];
  typedef gameswf::RefCounted::Self *_g4_t_v577;
  typedef uint8_t _g4_t_v578[24];
  typedef uint8_t _g4_t_v579[4];
  typedef int _g4_t_v580;
  typedef uint8_t _g4_t_v581[12];
  typedef uint8_t _g4_t_v582[4];
  typedef int _g4_t_v583;
  typedef uint8_t _g4_t_v584[12];
  typedef uint8_t _g4_t_v585[12];
  typedef uint8_t _g4_t_v586[4];
  typedef int _g4_t_v587;
  typedef uint8_t _g4_t_v588[12];
  typedef uint8_t _g4_t_v589[12];
  typedef uint8_t _g4_t_v590[4];
  typedef int _g4_t_v591;
  typedef uint8_t _g4_t_v592[12];
  typedef uint8_t _g4_t_v593[12];
  typedef uint8_t _g4_t_v594[12];
  typedef uint8_t _g4_t_v595[12];
  typedef uint8_t _g4_t_v596[4];
  typedef int _g4_t_v597;
  typedef uint8_t _g4_t_v598[12];
  typedef uint8_t _g4_t_v599[4];
  typedef gameswf::RefCounted::Self *_g4_t_v600;
  typedef uint8_t _g4_t_v601[12];
  typedef uint8_t _g4_t_v602[4];
  typedef int _g4_t_v603;
  typedef uint8_t _g4_t_v604[12];
  typedef uint8_t _g4_t_v605[4];
  typedef gameswf::RefCounted::Self *_g4_t_v606;
  typedef uint8_t _g4_t_v607[12];
  typedef uint8_t _g4_t_v608[4];
  typedef gameswf::RefCounted::Self *_g4_t_v609;
  typedef uint8_t _g4_t_v610[4];
  typedef gameswf::RefCounted::Self *_g4_t_v611;
  typedef uint8_t _g4_t_v612[12];
  typedef uint8_t _g4_t_v613[4];
  typedef int _g4_t_v614;
  typedef uint8_t _g4_t_v615[12];
  typedef char _g4_t_v616;
  typedef char _g4_t_v617;
  typedef gameswf::RefCounted::Self *_g4_t_v618;
  typedef uint8_t _g4_t_v619[12];
  typedef unsigned int _g4_t_v620;
  typedef gameswf::ASObject::Self *_g4_t_v621;
  typedef uint8_t _g4_t_v622[12];
  typedef uint8_t _g4_t_v623[4];
  typedef double _g4_t_v624;
  typedef uint8_t _g4_t_v625[4];
  typedef double _g4_t_v626 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v627[4];
  typedef double _g4_t_v628;
  typedef uint8_t _g4_t_v629[12];
  typedef uint8_t _g4_t_v630[12];
  typedef uint8_t _g4_t_v631[12];
  typedef uint8_t _g4_t_v632[12];
  typedef uint8_t _g4_t_v633[12];
  typedef uint8_t _g4_t_v634[8];
  typedef gameswf::Self *_g4_t_v635;
  typedef int _g4_t_v636;
  typedef uint8_t _g4_t_v637[8];
  typedef gameswf::Self *_g4_t_v638;
  typedef int16_t _g4_t_v639;
  typedef char _g4_t_v640;
  typedef char _g4_t_v641;
  typedef uint8_t _g4_t_v642[8];
  typedef gameswf::Self *_g4_t_v643;
  typedef char _g4_t_v644;
  typedef int _g4_t_v645;
  typedef char *_g4_t_v646;
  typedef gameswf::Self *_g4_t_v647;
  typedef int16_t _g4_t_v648;
  typedef char _g4_t_v649;
  typedef char _g4_t_v650;
  typedef char _g4_t_v651[52];
  typedef gameswf::AS3Function::Self **_g4_t_v652;
  enum : size_t {
    _g4_s0 = 1120u,
    _g4_s1 = (0u + sizeof(_g4_t_v361)) > _g4_s0 ? (0u + sizeof(_g4_t_v361)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v362)) > _g4_s1 ? (4u + sizeof(_g4_t_v362)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v363)) > _g4_s2 ? (4u + sizeof(_g4_t_v363)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v364)) > _g4_s3 ? (4u + sizeof(_g4_t_v364)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v365)) > _g4_s4 ? (4u + sizeof(_g4_t_v365)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v366)) > _g4_s5 ? (4u + sizeof(_g4_t_v366)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v367)) > _g4_s6 ? (4u + sizeof(_g4_t_v367)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v368)) > _g4_s7 ? (4u + sizeof(_g4_t_v368)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v369)) > _g4_s8 ? (4u + sizeof(_g4_t_v369)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v370)) > _g4_s9 ? (40u + sizeof(_g4_t_v370)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v371)) > _g4_s10 ? (52u + sizeof(_g4_t_v371)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v372)) > _g4_s11 ? (52u + sizeof(_g4_t_v372)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v373)) > _g4_s12 ? (52u + sizeof(_g4_t_v373)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v374)) > _g4_s13 ? (52u + sizeof(_g4_t_v374)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v375)) > _g4_s14 ? (52u + sizeof(_g4_t_v375)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v376)) > _g4_s15 ? (52u + sizeof(_g4_t_v376)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v377)) > _g4_s16 ? (52u + sizeof(_g4_t_v377)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v378)) > _g4_s17 ? (52u + sizeof(_g4_t_v378)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v379)) > _g4_s18 ? (52u + sizeof(_g4_t_v379)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v380)) > _g4_s19 ? (52u + sizeof(_g4_t_v380)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v381)) > _g4_s20 ? (52u + sizeof(_g4_t_v381)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v382)) > _g4_s21 ? (52u + sizeof(_g4_t_v382)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v383)) > _g4_s22 ? (52u + sizeof(_g4_t_v383)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v384)) > _g4_s23 ? (52u + sizeof(_g4_t_v384)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v385)) > _g4_s24 ? (52u + sizeof(_g4_t_v385)) : _g4_s24,
    _g4_s26 = (52u + sizeof(_g4_t_v386)) > _g4_s25 ? (52u + sizeof(_g4_t_v386)) : _g4_s25,
    _g4_s27 = (52u + sizeof(_g4_t_v387)) > _g4_s26 ? (52u + sizeof(_g4_t_v387)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v388)) > _g4_s27 ? (52u + sizeof(_g4_t_v388)) : _g4_s27,
    _g4_s29 = (52u + sizeof(_g4_t_v389)) > _g4_s28 ? (52u + sizeof(_g4_t_v389)) : _g4_s28,
    _g4_s30 = (52u + sizeof(_g4_t_v390)) > _g4_s29 ? (52u + sizeof(_g4_t_v390)) : _g4_s29,
    _g4_s31 = (52u + sizeof(_g4_t_v391)) > _g4_s30 ? (52u + sizeof(_g4_t_v391)) : _g4_s30,
    _g4_s32 = (52u + sizeof(_g4_t_v392)) > _g4_s31 ? (52u + sizeof(_g4_t_v392)) : _g4_s31,
    _g4_s33 = (52u + sizeof(_g4_t_v393)) > _g4_s32 ? (52u + sizeof(_g4_t_v393)) : _g4_s32,
    _g4_s34 = (52u + sizeof(_g4_t_v394)) > _g4_s33 ? (52u + sizeof(_g4_t_v394)) : _g4_s33,
    _g4_s35 = (52u + sizeof(_g4_t_v395)) > _g4_s34 ? (52u + sizeof(_g4_t_v395)) : _g4_s34,
    _g4_s36 = (52u + sizeof(_g4_t_v396)) > _g4_s35 ? (52u + sizeof(_g4_t_v396)) : _g4_s35,
    _g4_s37 = (52u + sizeof(_g4_t_v397)) > _g4_s36 ? (52u + sizeof(_g4_t_v397)) : _g4_s36,
    _g4_s38 = (52u + sizeof(_g4_t_v398)) > _g4_s37 ? (52u + sizeof(_g4_t_v398)) : _g4_s37,
    _g4_s39 = (52u + sizeof(_g4_t_v399)) > _g4_s38 ? (52u + sizeof(_g4_t_v399)) : _g4_s38,
    _g4_s40 = (52u + sizeof(_g4_t_v400)) > _g4_s39 ? (52u + sizeof(_g4_t_v400)) : _g4_s39,
    _g4_s41 = (52u + sizeof(_g4_t_v401)) > _g4_s40 ? (52u + sizeof(_g4_t_v401)) : _g4_s40,
    _g4_s42 = (52u + sizeof(_g4_t_v402)) > _g4_s41 ? (52u + sizeof(_g4_t_v402)) : _g4_s41,
    _g4_s43 = (52u + sizeof(_g4_t_v403)) > _g4_s42 ? (52u + sizeof(_g4_t_v403)) : _g4_s42,
    _g4_s44 = (52u + sizeof(_g4_t_v404)) > _g4_s43 ? (52u + sizeof(_g4_t_v404)) : _g4_s43,
    _g4_s45 = (52u + sizeof(_g4_t_v405)) > _g4_s44 ? (52u + sizeof(_g4_t_v405)) : _g4_s44,
    _g4_s46 = (52u + sizeof(_g4_t_v406)) > _g4_s45 ? (52u + sizeof(_g4_t_v406)) : _g4_s45,
    _g4_s47 = (52u + sizeof(_g4_t_v407)) > _g4_s46 ? (52u + sizeof(_g4_t_v407)) : _g4_s46,
    _g4_s48 = (52u + sizeof(_g4_t_v408)) > _g4_s47 ? (52u + sizeof(_g4_t_v408)) : _g4_s47,
    _g4_s49 = (52u + sizeof(_g4_t_v409)) > _g4_s48 ? (52u + sizeof(_g4_t_v409)) : _g4_s48,
    _g4_s50 = (52u + sizeof(_g4_t_v410)) > _g4_s49 ? (52u + sizeof(_g4_t_v410)) : _g4_s49,
    _g4_s51 = (52u + sizeof(_g4_t_v411)) > _g4_s50 ? (52u + sizeof(_g4_t_v411)) : _g4_s50,
    _g4_s52 = (52u + sizeof(_g4_t_v412)) > _g4_s51 ? (52u + sizeof(_g4_t_v412)) : _g4_s51,
    _g4_s53 = (52u + sizeof(_g4_t_v413)) > _g4_s52 ? (52u + sizeof(_g4_t_v413)) : _g4_s52,
    _g4_s54 = (52u + sizeof(_g4_t_v414)) > _g4_s53 ? (52u + sizeof(_g4_t_v414)) : _g4_s53,
    _g4_s55 = (52u + sizeof(_g4_t_v415)) > _g4_s54 ? (52u + sizeof(_g4_t_v415)) : _g4_s54,
    _g4_s56 = (52u + sizeof(_g4_t_v416)) > _g4_s55 ? (52u + sizeof(_g4_t_v416)) : _g4_s55,
    _g4_s57 = (52u + sizeof(_g4_t_v417)) > _g4_s56 ? (52u + sizeof(_g4_t_v417)) : _g4_s56,
    _g4_s58 = (52u + sizeof(_g4_t_v418)) > _g4_s57 ? (52u + sizeof(_g4_t_v418)) : _g4_s57,
    _g4_s59 = (52u + sizeof(_g4_t_v419)) > _g4_s58 ? (52u + sizeof(_g4_t_v419)) : _g4_s58,
    _g4_s60 = (52u + sizeof(_g4_t_v420)) > _g4_s59 ? (52u + sizeof(_g4_t_v420)) : _g4_s59,
    _g4_s61 = (52u + sizeof(_g4_t_v421)) > _g4_s60 ? (52u + sizeof(_g4_t_v421)) : _g4_s60,
    _g4_s62 = (52u + sizeof(_g4_t_v422)) > _g4_s61 ? (52u + sizeof(_g4_t_v422)) : _g4_s61,
    _g4_s63 = (52u + sizeof(_g4_t_v423)) > _g4_s62 ? (52u + sizeof(_g4_t_v423)) : _g4_s62,
    _g4_s64 = (52u + sizeof(_g4_t_v424)) > _g4_s63 ? (52u + sizeof(_g4_t_v424)) : _g4_s63,
    _g4_s65 = (52u + sizeof(_g4_t_v425)) > _g4_s64 ? (52u + sizeof(_g4_t_v425)) : _g4_s64,
    _g4_s66 = (56u + sizeof(_g4_t_v426)) > _g4_s65 ? (56u + sizeof(_g4_t_v426)) : _g4_s65,
    _g4_s67 = (56u + sizeof(_g4_t_v427)) > _g4_s66 ? (56u + sizeof(_g4_t_v427)) : _g4_s66,
    _g4_s68 = (56u + sizeof(_g4_t_v428)) > _g4_s67 ? (56u + sizeof(_g4_t_v428)) : _g4_s67,
    _g4_s69 = (56u + sizeof(_g4_t_v429)) > _g4_s68 ? (56u + sizeof(_g4_t_v429)) : _g4_s68,
    _g4_s70 = (56u + sizeof(_g4_t_v430)) > _g4_s69 ? (56u + sizeof(_g4_t_v430)) : _g4_s69,
    _g4_s71 = (56u + sizeof(_g4_t_v431)) > _g4_s70 ? (56u + sizeof(_g4_t_v431)) : _g4_s70,
    _g4_s72 = (56u + sizeof(_g4_t_v432)) > _g4_s71 ? (56u + sizeof(_g4_t_v432)) : _g4_s71,
    _g4_s73 = (56u + sizeof(_g4_t_v433)) > _g4_s72 ? (56u + sizeof(_g4_t_v433)) : _g4_s72,
    _g4_s74 = (56u + sizeof(_g4_t_v434)) > _g4_s73 ? (56u + sizeof(_g4_t_v434)) : _g4_s73,
    _g4_s75 = (56u + sizeof(_g4_t_v435)) > _g4_s74 ? (56u + sizeof(_g4_t_v435)) : _g4_s74,
    _g4_s76 = (56u + sizeof(_g4_t_v436)) > _g4_s75 ? (56u + sizeof(_g4_t_v436)) : _g4_s75,
    _g4_s77 = (56u + sizeof(_g4_t_v437)) > _g4_s76 ? (56u + sizeof(_g4_t_v437)) : _g4_s76,
    _g4_s78 = (56u + sizeof(_g4_t_v438)) > _g4_s77 ? (56u + sizeof(_g4_t_v438)) : _g4_s77,
    _g4_s79 = (56u + sizeof(_g4_t_v439)) > _g4_s78 ? (56u + sizeof(_g4_t_v439)) : _g4_s78,
    _g4_s80 = (56u + sizeof(_g4_t_v440)) > _g4_s79 ? (56u + sizeof(_g4_t_v440)) : _g4_s79,
    _g4_s81 = (56u + sizeof(_g4_t_v441)) > _g4_s80 ? (56u + sizeof(_g4_t_v441)) : _g4_s80,
    _g4_s82 = (60u + sizeof(_g4_t_v442)) > _g4_s81 ? (60u + sizeof(_g4_t_v442)) : _g4_s81,
    _g4_s83 = (60u + sizeof(_g4_t_v443)) > _g4_s82 ? (60u + sizeof(_g4_t_v443)) : _g4_s82,
    _g4_s84 = (60u + sizeof(_g4_t_v444)) > _g4_s83 ? (60u + sizeof(_g4_t_v444)) : _g4_s83,
    _g4_s85 = (60u + sizeof(_g4_t_v445)) > _g4_s84 ? (60u + sizeof(_g4_t_v445)) : _g4_s84,
    _g4_s86 = (60u + sizeof(_g4_t_v446)) > _g4_s85 ? (60u + sizeof(_g4_t_v446)) : _g4_s85,
    _g4_s87 = (60u + sizeof(_g4_t_v447)) > _g4_s86 ? (60u + sizeof(_g4_t_v447)) : _g4_s86,
    _g4_s88 = (60u + sizeof(_g4_t_v448)) > _g4_s87 ? (60u + sizeof(_g4_t_v448)) : _g4_s87,
    _g4_s89 = (60u + sizeof(_g4_t_v449)) > _g4_s88 ? (60u + sizeof(_g4_t_v449)) : _g4_s88,
    _g4_s90 = (60u + sizeof(_g4_t_v450)) > _g4_s89 ? (60u + sizeof(_g4_t_v450)) : _g4_s89,
    _g4_s91 = (60u + sizeof(_g4_t_v451)) > _g4_s90 ? (60u + sizeof(_g4_t_v451)) : _g4_s90,
    _g4_s92 = (60u + sizeof(_g4_t_v452)) > _g4_s91 ? (60u + sizeof(_g4_t_v452)) : _g4_s91,
    _g4_s93 = (60u + sizeof(_g4_t_v453)) > _g4_s92 ? (60u + sizeof(_g4_t_v453)) : _g4_s92,
    _g4_s94 = (60u + sizeof(_g4_t_v454)) > _g4_s93 ? (60u + sizeof(_g4_t_v454)) : _g4_s93,
    _g4_s95 = (60u + sizeof(_g4_t_v455)) > _g4_s94 ? (60u + sizeof(_g4_t_v455)) : _g4_s94,
    _g4_s96 = (60u + sizeof(_g4_t_v456)) > _g4_s95 ? (60u + sizeof(_g4_t_v456)) : _g4_s95,
    _g4_s97 = (60u + sizeof(_g4_t_v457)) > _g4_s96 ? (60u + sizeof(_g4_t_v457)) : _g4_s96,
    _g4_s98 = (60u + sizeof(_g4_t_v458)) > _g4_s97 ? (60u + sizeof(_g4_t_v458)) : _g4_s97,
    _g4_s99 = (60u + sizeof(_g4_t_v459)) > _g4_s98 ? (60u + sizeof(_g4_t_v459)) : _g4_s98,
    _g4_s100 = (60u + sizeof(_g4_t_v460)) > _g4_s99 ? (60u + sizeof(_g4_t_v460)) : _g4_s99,
    _g4_s101 = (60u + sizeof(_g4_t_v461)) > _g4_s100 ? (60u + sizeof(_g4_t_v461)) : _g4_s100,
    _g4_s102 = (60u + sizeof(_g4_t_v462)) > _g4_s101 ? (60u + sizeof(_g4_t_v462)) : _g4_s101,
    _g4_s103 = (60u + sizeof(_g4_t_v463)) > _g4_s102 ? (60u + sizeof(_g4_t_v463)) : _g4_s102,
    _g4_s104 = (60u + sizeof(_g4_t_v464)) > _g4_s103 ? (60u + sizeof(_g4_t_v464)) : _g4_s103,
    _g4_s105 = (60u + sizeof(_g4_t_v465)) > _g4_s104 ? (60u + sizeof(_g4_t_v465)) : _g4_s104,
    _g4_s106 = (60u + sizeof(_g4_t_v466)) > _g4_s105 ? (60u + sizeof(_g4_t_v466)) : _g4_s105,
    _g4_s107 = (60u + sizeof(_g4_t_v467)) > _g4_s106 ? (60u + sizeof(_g4_t_v467)) : _g4_s106,
    _g4_s108 = (60u + sizeof(_g4_t_v468)) > _g4_s107 ? (60u + sizeof(_g4_t_v468)) : _g4_s107,
    _g4_s109 = (60u + sizeof(_g4_t_v469)) > _g4_s108 ? (60u + sizeof(_g4_t_v469)) : _g4_s108,
    _g4_s110 = (60u + sizeof(_g4_t_v470)) > _g4_s109 ? (60u + sizeof(_g4_t_v470)) : _g4_s109,
    _g4_s111 = (84u + sizeof(_g4_t_v471)) > _g4_s110 ? (84u + sizeof(_g4_t_v471)) : _g4_s110,
    _g4_s112 = (84u + sizeof(_g4_t_v472)) > _g4_s111 ? (84u + sizeof(_g4_t_v472)) : _g4_s111,
    _g4_s113 = (84u + sizeof(_g4_t_v473)) > _g4_s112 ? (84u + sizeof(_g4_t_v473)) : _g4_s112,
    _g4_s114 = (84u + sizeof(_g4_t_v474)) > _g4_s113 ? (84u + sizeof(_g4_t_v474)) : _g4_s113,
    _g4_s115 = (84u + sizeof(_g4_t_v475)) > _g4_s114 ? (84u + sizeof(_g4_t_v475)) : _g4_s114,
    _g4_s116 = (84u + sizeof(_g4_t_v476)) > _g4_s115 ? (84u + sizeof(_g4_t_v476)) : _g4_s115,
    _g4_s117 = (84u + sizeof(_g4_t_v477)) > _g4_s116 ? (84u + sizeof(_g4_t_v477)) : _g4_s116,
    _g4_s118 = (84u + sizeof(_g4_t_v478)) > _g4_s117 ? (84u + sizeof(_g4_t_v478)) : _g4_s117,
    _g4_s119 = (84u + sizeof(_g4_t_VU30)) > _g4_s118 ? (84u + sizeof(_g4_t_VU30)) : _g4_s118,
    _g4_s120 = (84u + sizeof(_g4_t_v480)) > _g4_s119 ? (84u + sizeof(_g4_t_v480)) : _g4_s119,
    _g4_s121 = (84u + sizeof(_g4_t_v481)) > _g4_s120 ? (84u + sizeof(_g4_t_v481)) : _g4_s120,
    _g4_s122 = (84u + sizeof(_g4_t_v482)) > _g4_s121 ? (84u + sizeof(_g4_t_v482)) : _g4_s121,
    _g4_s123 = (88u + sizeof(_g4_t_v483)) > _g4_s122 ? (88u + sizeof(_g4_t_v483)) : _g4_s122,
    _g4_s124 = (92u + sizeof(_g4_t_v484)) > _g4_s123 ? (92u + sizeof(_g4_t_v484)) : _g4_s123,
    _g4_s125 = (96u + sizeof(_g4_t_v485)) > _g4_s124 ? (96u + sizeof(_g4_t_v485)) : _g4_s124,
    _g4_s126 = (100u + sizeof(_g4_t_v486)) > _g4_s125 ? (100u + sizeof(_g4_t_v486)) : _g4_s125,
    _g4_s127 = (104u + sizeof(_g4_t_v487)) > _g4_s126 ? (104u + sizeof(_g4_t_v487)) : _g4_s126,
    _g4_s128 = (104u + sizeof(_g4_t_v488)) > _g4_s127 ? (104u + sizeof(_g4_t_v488)) : _g4_s127,
    _g4_s129 = (104u + sizeof(_g4_t_v489)) > _g4_s128 ? (104u + sizeof(_g4_t_v489)) : _g4_s128,
    _g4_s130 = (104u + sizeof(_g4_t_v490)) > _g4_s129 ? (104u + sizeof(_g4_t_v490)) : _g4_s129,
    _g4_s131 = (104u + sizeof(_g4_t_v491)) > _g4_s130 ? (104u + sizeof(_g4_t_v491)) : _g4_s130,
    _g4_s132 = (104u + sizeof(_g4_t_v492)) > _g4_s131 ? (104u + sizeof(_g4_t_v492)) : _g4_s131,
    _g4_s133 = (104u + sizeof(_g4_t_v493)) > _g4_s132 ? (104u + sizeof(_g4_t_v493)) : _g4_s132,
    _g4_s134 = (104u + sizeof(_g4_t_v494)) > _g4_s133 ? (104u + sizeof(_g4_t_v494)) : _g4_s133,
    _g4_s135 = (104u + sizeof(_g4_t_v495)) > _g4_s134 ? (104u + sizeof(_g4_t_v495)) : _g4_s134,
    _g4_s136 = (104u + sizeof(_g4_t_v496)) > _g4_s135 ? (104u + sizeof(_g4_t_v496)) : _g4_s135,
    _g4_s137 = (104u + sizeof(_g4_t_v497)) > _g4_s136 ? (104u + sizeof(_g4_t_v497)) : _g4_s136,
    _g4_s138 = (104u + sizeof(_g4_t_v498)) > _g4_s137 ? (104u + sizeof(_g4_t_v498)) : _g4_s137,
    _g4_s139 = (104u + sizeof(_g4_t_v499)) > _g4_s138 ? (104u + sizeof(_g4_t_v499)) : _g4_s138,
    _g4_s140 = (104u + sizeof(_g4_t_v500)) > _g4_s139 ? (104u + sizeof(_g4_t_v500)) : _g4_s139,
    _g4_s141 = (104u + sizeof(_g4_t_v501)) > _g4_s140 ? (104u + sizeof(_g4_t_v501)) : _g4_s140,
    _g4_s142 = (104u + sizeof(_g4_t_v502)) > _g4_s141 ? (104u + sizeof(_g4_t_v502)) : _g4_s141,
    _g4_s143 = (104u + sizeof(_g4_t_v503)) > _g4_s142 ? (104u + sizeof(_g4_t_v503)) : _g4_s142,
    _g4_s144 = (104u + sizeof(_g4_t_MemberIndex)) > _g4_s143 ? (104u + sizeof(_g4_t_MemberIndex)) : _g4_s143,
    _g4_s145 = (104u + sizeof(_g4_t_v505)) > _g4_s144 ? (104u + sizeof(_g4_t_v505)) : _g4_s144,
    _g4_s146 = (104u + sizeof(_g4_t_v506)) > _g4_s145 ? (104u + sizeof(_g4_t_v506)) : _g4_s145,
    _g4_s147 = (104u + sizeof(_g4_t_v507)) > _g4_s146 ? (104u + sizeof(_g4_t_v507)) : _g4_s146,
    _g4_s148 = (104u + sizeof(_g4_t_v508)) > _g4_s147 ? (104u + sizeof(_g4_t_v508)) : _g4_s147,
    _g4_s149 = (104u + sizeof(_g4_t_v509)) > _g4_s148 ? (104u + sizeof(_g4_t_v509)) : _g4_s148,
    _g4_s150 = (104u + sizeof(_g4_t_v510)) > _g4_s149 ? (104u + sizeof(_g4_t_v510)) : _g4_s149,
    _g4_s151 = (104u + sizeof(_g4_t_v511)) > _g4_s150 ? (104u + sizeof(_g4_t_v511)) : _g4_s150,
    _g4_s152 = (104u + sizeof(_g4_t_v512)) > _g4_s151 ? (104u + sizeof(_g4_t_v512)) : _g4_s151,
    _g4_s153 = (104u + sizeof(_g4_t_v513)) > _g4_s152 ? (104u + sizeof(_g4_t_v513)) : _g4_s152,
    _g4_s154 = (104u + sizeof(_g4_t_v514)) > _g4_s153 ? (104u + sizeof(_g4_t_v514)) : _g4_s153,
    _g4_s155 = (104u + sizeof(_g4_t_v515)) > _g4_s154 ? (104u + sizeof(_g4_t_v515)) : _g4_s154,
    _g4_s156 = (104u + sizeof(_g4_t_v516)) > _g4_s155 ? (104u + sizeof(_g4_t_v516)) : _g4_s155,
    _g4_s157 = (108u + sizeof(_g4_t_v517)) > _g4_s156 ? (108u + sizeof(_g4_t_v517)) : _g4_s156,
    _g4_s158 = (108u + sizeof(_g4_t_v518)) > _g4_s157 ? (108u + sizeof(_g4_t_v518)) : _g4_s157,
    _g4_s159 = (108u + sizeof(_g4_t_v519)) > _g4_s158 ? (108u + sizeof(_g4_t_v519)) : _g4_s158,
    _g4_s160 = (108u + sizeof(_g4_t_v520)) > _g4_s159 ? (108u + sizeof(_g4_t_v520)) : _g4_s159,
    _g4_s161 = (108u + sizeof(_g4_t_v521)) > _g4_s160 ? (108u + sizeof(_g4_t_v521)) : _g4_s160,
    _g4_s162 = (108u + sizeof(_g4_t_v522)) > _g4_s161 ? (108u + sizeof(_g4_t_v522)) : _g4_s161,
    _g4_s163 = (108u + sizeof(_g4_t_v523)) > _g4_s162 ? (108u + sizeof(_g4_t_v523)) : _g4_s162,
    _g4_s164 = (108u + sizeof(_g4_t_v524)) > _g4_s163 ? (108u + sizeof(_g4_t_v524)) : _g4_s163,
    _g4_s165 = (108u + sizeof(_g4_t_v525)) > _g4_s164 ? (108u + sizeof(_g4_t_v525)) : _g4_s164,
    _g4_s166 = (108u + sizeof(_g4_t_v526)) > _g4_s165 ? (108u + sizeof(_g4_t_v526)) : _g4_s165,
    _g4_s167 = (108u + sizeof(_g4_t_v527)) > _g4_s166 ? (108u + sizeof(_g4_t_v527)) : _g4_s166,
    _g4_s168 = (108u + sizeof(_g4_t_v528)) > _g4_s167 ? (108u + sizeof(_g4_t_v528)) : _g4_s167,
    _g4_s169 = (108u + sizeof(_g4_t_v529)) > _g4_s168 ? (108u + sizeof(_g4_t_v529)) : _g4_s168,
    _g4_s170 = (108u + sizeof(_g4_t_v530)) > _g4_s169 ? (108u + sizeof(_g4_t_v530)) : _g4_s169,
    _g4_s171 = (108u + sizeof(_g4_t_v531)) > _g4_s170 ? (108u + sizeof(_g4_t_v531)) : _g4_s170,
    _g4_s172 = (108u + sizeof(_g4_t_v532)) > _g4_s171 ? (108u + sizeof(_g4_t_v532)) : _g4_s171,
    _g4_s173 = (108u + sizeof(_g4_t_v533)) > _g4_s172 ? (108u + sizeof(_g4_t_v533)) : _g4_s172,
    _g4_s174 = (108u + sizeof(_g4_t_v534)) > _g4_s173 ? (108u + sizeof(_g4_t_v534)) : _g4_s173,
    _g4_s175 = (108u + sizeof(_g4_t_v535)) > _g4_s174 ? (108u + sizeof(_g4_t_v535)) : _g4_s174,
    _g4_s176 = (108u + sizeof(_g4_t_v536)) > _g4_s175 ? (108u + sizeof(_g4_t_v536)) : _g4_s175,
    _g4_s177 = (116u + sizeof(_g4_t_v537)) > _g4_s176 ? (116u + sizeof(_g4_t_v537)) : _g4_s176,
    _g4_s178 = (116u + sizeof(_g4_t_v538)) > _g4_s177 ? (116u + sizeof(_g4_t_v538)) : _g4_s177,
    _g4_s179 = (116u + sizeof(_g4_t_v539)) > _g4_s178 ? (116u + sizeof(_g4_t_v539)) : _g4_s178,
    _g4_s180 = (116u + sizeof(_g4_t_v540)) > _g4_s179 ? (116u + sizeof(_g4_t_v540)) : _g4_s179,
    _g4_s181 = (116u + sizeof(_g4_t_v541)) > _g4_s180 ? (116u + sizeof(_g4_t_v541)) : _g4_s180,
    _g4_s182 = (116u + sizeof(_g4_t_v542)) > _g4_s181 ? (116u + sizeof(_g4_t_v542)) : _g4_s181,
    _g4_s183 = (116u + sizeof(_g4_t_v543)) > _g4_s182 ? (116u + sizeof(_g4_t_v543)) : _g4_s182,
    _g4_s184 = (116u + sizeof(_g4_t_v544)) > _g4_s183 ? (116u + sizeof(_g4_t_v544)) : _g4_s183,
    _g4_s185 = (116u + sizeof(_g4_t_v545)) > _g4_s184 ? (116u + sizeof(_g4_t_v545)) : _g4_s184,
    _g4_s186 = (116u + sizeof(_g4_t_v546)) > _g4_s185 ? (116u + sizeof(_g4_t_v546)) : _g4_s185,
    _g4_s187 = (116u + sizeof(_g4_t_v547)) > _g4_s186 ? (116u + sizeof(_g4_t_v547)) : _g4_s186,
    _g4_s188 = (116u + sizeof(_g4_t_v548)) > _g4_s187 ? (116u + sizeof(_g4_t_v548)) : _g4_s187,
    _g4_s189 = (116u + sizeof(_g4_t_v549)) > _g4_s188 ? (116u + sizeof(_g4_t_v549)) : _g4_s188,
    _g4_s190 = (116u + sizeof(_g4_t_v550)) > _g4_s189 ? (116u + sizeof(_g4_t_v550)) : _g4_s189,
    _g4_s191 = (124u + sizeof(_g4_t_v551)) > _g4_s190 ? (124u + sizeof(_g4_t_v551)) : _g4_s190,
    _g4_s192 = (128u + sizeof(_g4_t_v552)) > _g4_s191 ? (128u + sizeof(_g4_t_v552)) : _g4_s191,
    _g4_s193 = (128u + sizeof(_g4_t_ExceptionHandlerInfo)) > _g4_s192 ? (128u + sizeof(_g4_t_ExceptionHandlerInfo)) : _g4_s192,
    _g4_s194 = (128u + sizeof(_g4_t_v554)) > _g4_s193 ? (128u + sizeof(_g4_t_v554)) : _g4_s193,
    _g4_s195 = (128u + sizeof(_g4_t_v555)) > _g4_s194 ? (128u + sizeof(_g4_t_v555)) : _g4_s194,
    _g4_s196 = (128u + sizeof(_g4_t_v556)) > _g4_s195 ? (128u + sizeof(_g4_t_v556)) : _g4_s195,
    _g4_s197 = (128u + sizeof(_g4_t_v557)) > _g4_s196 ? (128u + sizeof(_g4_t_v557)) : _g4_s196,
    _g4_s198 = (128u + sizeof(_g4_t_v558)) > _g4_s197 ? (128u + sizeof(_g4_t_v558)) : _g4_s197,
    _g4_s199 = (128u + sizeof(_g4_t_v559)) > _g4_s198 ? (128u + sizeof(_g4_t_v559)) : _g4_s198,
    _g4_s200 = (128u + sizeof(_g4_t_v560)) > _g4_s199 ? (128u + sizeof(_g4_t_v560)) : _g4_s199,
    _g4_s201 = (128u + sizeof(_g4_t_v561)) > _g4_s200 ? (128u + sizeof(_g4_t_v561)) : _g4_s200,
    _g4_s202 = (128u + sizeof(_g4_t_v562)) > _g4_s201 ? (128u + sizeof(_g4_t_v562)) : _g4_s201,
    _g4_s203 = (128u + sizeof(_g4_t_Array)) > _g4_s202 ? (128u + sizeof(_g4_t_Array)) : _g4_s202,
    _g4_s204 = (128u + sizeof(_g4_t_v564)) > _g4_s203 ? (128u + sizeof(_g4_t_v564)) : _g4_s203,
    _g4_s205 = (128u + sizeof(_g4_t_v565)) > _g4_s204 ? (128u + sizeof(_g4_t_v565)) : _g4_s204,
    _g4_s206 = (132u + sizeof(_g4_t_v566)) > _g4_s205 ? (132u + sizeof(_g4_t_v566)) : _g4_s205,
    _g4_s207 = (136u + sizeof(_g4_t_v567)) > _g4_s206 ? (136u + sizeof(_g4_t_v567)) : _g4_s206,
    _g4_s208 = (142u + sizeof(_g4_t_v568)) > _g4_s207 ? (142u + sizeof(_g4_t_v568)) : _g4_s207,
    _g4_s209 = (143u + sizeof(_g4_t_v569)) > _g4_s208 ? (143u + sizeof(_g4_t_v569)) : _g4_s208,
    _g4_s210 = (144u + sizeof(_g4_t_v570)) > _g4_s209 ? (144u + sizeof(_g4_t_v570)) : _g4_s209,
    _g4_s211 = (148u + sizeof(_g4_t_v571)) > _g4_s210 ? (148u + sizeof(_g4_t_v571)) : _g4_s210,
    _g4_s212 = (152u + sizeof(_g4_t_v572)) > _g4_s211 ? (152u + sizeof(_g4_t_v572)) : _g4_s211,
    _g4_s213 = (156u + sizeof(_g4_t_v573)) > _g4_s212 ? (156u + sizeof(_g4_t_v573)) : _g4_s212,
    _g4_s214 = (172u + sizeof(_g4_t_v574)) > _g4_s213 ? (172u + sizeof(_g4_t_v574)) : _g4_s213,
    _g4_s215 = (173u + sizeof(_g4_t_v575)) > _g4_s214 ? (173u + sizeof(_g4_t_v575)) : _g4_s214,
    _g4_s216 = (188u + sizeof(_g4_t_v576)) > _g4_s215 ? (188u + sizeof(_g4_t_v576)) : _g4_s215,
    _g4_s217 = (192u + sizeof(_g4_t_v577)) > _g4_s216 ? (192u + sizeof(_g4_t_v577)) : _g4_s216,
    _g4_s218 = (204u + sizeof(_g4_t_v578)) > _g4_s217 ? (204u + sizeof(_g4_t_v578)) : _g4_s217,
    _g4_s219 = (228u + sizeof(_g4_t_v579)) > _g4_s218 ? (228u + sizeof(_g4_t_v579)) : _g4_s218,
    _g4_s220 = (232u + sizeof(_g4_t_v580)) > _g4_s219 ? (232u + sizeof(_g4_t_v580)) : _g4_s219,
    _g4_s221 = (240u + sizeof(_g4_t_v581)) > _g4_s220 ? (240u + sizeof(_g4_t_v581)) : _g4_s220,
    _g4_s222 = (252u + sizeof(_g4_t_v582)) > _g4_s221 ? (252u + sizeof(_g4_t_v582)) : _g4_s221,
    _g4_s223 = (256u + sizeof(_g4_t_v583)) > _g4_s222 ? (256u + sizeof(_g4_t_v583)) : _g4_s222,
    _g4_s224 = (264u + sizeof(_g4_t_v584)) > _g4_s223 ? (264u + sizeof(_g4_t_v584)) : _g4_s223,
    _g4_s225 = (276u + sizeof(_g4_t_v585)) > _g4_s224 ? (276u + sizeof(_g4_t_v585)) : _g4_s224,
    _g4_s226 = (288u + sizeof(_g4_t_v586)) > _g4_s225 ? (288u + sizeof(_g4_t_v586)) : _g4_s225,
    _g4_s227 = (292u + sizeof(_g4_t_v587)) > _g4_s226 ? (292u + sizeof(_g4_t_v587)) : _g4_s226,
    _g4_s228 = (300u + sizeof(_g4_t_v588)) > _g4_s227 ? (300u + sizeof(_g4_t_v588)) : _g4_s227,
    _g4_s229 = (312u + sizeof(_g4_t_v589)) > _g4_s228 ? (312u + sizeof(_g4_t_v589)) : _g4_s228,
    _g4_s230 = (324u + sizeof(_g4_t_v590)) > _g4_s229 ? (324u + sizeof(_g4_t_v590)) : _g4_s229,
    _g4_s231 = (328u + sizeof(_g4_t_v591)) > _g4_s230 ? (328u + sizeof(_g4_t_v591)) : _g4_s230,
    _g4_s232 = (336u + sizeof(_g4_t_v592)) > _g4_s231 ? (336u + sizeof(_g4_t_v592)) : _g4_s231,
    _g4_s233 = (348u + sizeof(_g4_t_v593)) > _g4_s232 ? (348u + sizeof(_g4_t_v593)) : _g4_s232,
    _g4_s234 = (360u + sizeof(_g4_t_v594)) > _g4_s233 ? (360u + sizeof(_g4_t_v594)) : _g4_s233,
    _g4_s235 = (372u + sizeof(_g4_t_v595)) > _g4_s234 ? (372u + sizeof(_g4_t_v595)) : _g4_s234,
    _g4_s236 = (384u + sizeof(_g4_t_v596)) > _g4_s235 ? (384u + sizeof(_g4_t_v596)) : _g4_s235,
    _g4_s237 = (388u + sizeof(_g4_t_v597)) > _g4_s236 ? (388u + sizeof(_g4_t_v597)) : _g4_s236,
    _g4_s238 = (396u + sizeof(_g4_t_v598)) > _g4_s237 ? (396u + sizeof(_g4_t_v598)) : _g4_s237,
    _g4_s239 = (408u + sizeof(_g4_t_v599)) > _g4_s238 ? (408u + sizeof(_g4_t_v599)) : _g4_s238,
    _g4_s240 = (412u + sizeof(_g4_t_v600)) > _g4_s239 ? (412u + sizeof(_g4_t_v600)) : _g4_s239,
    _g4_s241 = (420u + sizeof(_g4_t_v601)) > _g4_s240 ? (420u + sizeof(_g4_t_v601)) : _g4_s240,
    _g4_s242 = (432u + sizeof(_g4_t_v602)) > _g4_s241 ? (432u + sizeof(_g4_t_v602)) : _g4_s241,
    _g4_s243 = (436u + sizeof(_g4_t_v603)) > _g4_s242 ? (436u + sizeof(_g4_t_v603)) : _g4_s242,
    _g4_s244 = (444u + sizeof(_g4_t_v604)) > _g4_s243 ? (444u + sizeof(_g4_t_v604)) : _g4_s243,
    _g4_s245 = (456u + sizeof(_g4_t_v605)) > _g4_s244 ? (456u + sizeof(_g4_t_v605)) : _g4_s244,
    _g4_s246 = (460u + sizeof(_g4_t_v606)) > _g4_s245 ? (460u + sizeof(_g4_t_v606)) : _g4_s245,
    _g4_s247 = (468u + sizeof(_g4_t_v607)) > _g4_s246 ? (468u + sizeof(_g4_t_v607)) : _g4_s246,
    _g4_s248 = (480u + sizeof(_g4_t_v608)) > _g4_s247 ? (480u + sizeof(_g4_t_v608)) : _g4_s247,
    _g4_s249 = (484u + sizeof(_g4_t_v609)) > _g4_s248 ? (484u + sizeof(_g4_t_v609)) : _g4_s248,
    _g4_s250 = (492u + sizeof(_g4_t_v610)) > _g4_s249 ? (492u + sizeof(_g4_t_v610)) : _g4_s249,
    _g4_s251 = (496u + sizeof(_g4_t_v611)) > _g4_s250 ? (496u + sizeof(_g4_t_v611)) : _g4_s250,
    _g4_s252 = (504u + sizeof(_g4_t_v612)) > _g4_s251 ? (504u + sizeof(_g4_t_v612)) : _g4_s251,
    _g4_s253 = (516u + sizeof(_g4_t_v613)) > _g4_s252 ? (516u + sizeof(_g4_t_v613)) : _g4_s252,
    _g4_s254 = (520u + sizeof(_g4_t_v614)) > _g4_s253 ? (520u + sizeof(_g4_t_v614)) : _g4_s253,
    _g4_s255 = (528u + sizeof(_g4_t_v615)) > _g4_s254 ? (528u + sizeof(_g4_t_v615)) : _g4_s254,
    _g4_s256 = (540u + sizeof(_g4_t_v616)) > _g4_s255 ? (540u + sizeof(_g4_t_v616)) : _g4_s255,
    _g4_s257 = (541u + sizeof(_g4_t_v617)) > _g4_s256 ? (541u + sizeof(_g4_t_v617)) : _g4_s256,
    _g4_s258 = (544u + sizeof(_g4_t_v618)) > _g4_s257 ? (544u + sizeof(_g4_t_v618)) : _g4_s257,
    _g4_s259 = (560u + sizeof(_g4_t_v619)) > _g4_s258 ? (560u + sizeof(_g4_t_v619)) : _g4_s258,
    _g4_s260 = (572u + sizeof(_g4_t_v620)) > _g4_s259 ? (572u + sizeof(_g4_t_v620)) : _g4_s259,
    _g4_s261 = (576u + sizeof(_g4_t_v621)) > _g4_s260 ? (576u + sizeof(_g4_t_v621)) : _g4_s260,
    _g4_s262 = (592u + sizeof(_g4_t_v622)) > _g4_s261 ? (592u + sizeof(_g4_t_v622)) : _g4_s261,
    _g4_s263 = (604u + sizeof(_g4_t_v623)) > _g4_s262 ? (604u + sizeof(_g4_t_v623)) : _g4_s262,
    _g4_s264 = (608u + sizeof(_g4_t_v624)) > _g4_s263 ? (608u + sizeof(_g4_t_v624)) : _g4_s263,
    _g4_s265 = (616u + sizeof(_g4_t_v625)) > _g4_s264 ? (616u + sizeof(_g4_t_v625)) : _g4_s264,
    _g4_s266 = (620u + sizeof(_g4_t_v626)) > _g4_s265 ? (620u + sizeof(_g4_t_v626)) : _g4_s265,
    _g4_s267 = (628u + sizeof(_g4_t_v627)) > _g4_s266 ? (628u + sizeof(_g4_t_v627)) : _g4_s266,
    _g4_s268 = (632u + sizeof(_g4_t_v628)) > _g4_s267 ? (632u + sizeof(_g4_t_v628)) : _g4_s267,
    _g4_s269 = (640u + sizeof(_g4_t_v629)) > _g4_s268 ? (640u + sizeof(_g4_t_v629)) : _g4_s268,
    _g4_s270 = (652u + sizeof(_g4_t_v630)) > _g4_s269 ? (652u + sizeof(_g4_t_v630)) : _g4_s269,
    _g4_s271 = (664u + sizeof(_g4_t_v631)) > _g4_s270 ? (664u + sizeof(_g4_t_v631)) : _g4_s270,
    _g4_s272 = (676u + sizeof(_g4_t_v632)) > _g4_s271 ? (676u + sizeof(_g4_t_v632)) : _g4_s271,
    _g4_s273 = (688u + sizeof(_g4_t_v633)) > _g4_s272 ? (688u + sizeof(_g4_t_v633)) : _g4_s272,
    _g4_s274 = (700u + sizeof(_g4_t_v634)) > _g4_s273 ? (700u + sizeof(_g4_t_v634)) : _g4_s273,
    _g4_s275 = (712u + sizeof(_g4_t_v635)) > _g4_s274 ? (712u + sizeof(_g4_t_v635)) : _g4_s274,
    _g4_s276 = (716u + sizeof(_g4_t_v636)) > _g4_s275 ? (716u + sizeof(_g4_t_v636)) : _g4_s275,
    _g4_s277 = (732u + sizeof(_g4_t_v637)) > _g4_s276 ? (732u + sizeof(_g4_t_v637)) : _g4_s276,
    _g4_s278 = (744u + sizeof(_g4_t_v638)) > _g4_s277 ? (744u + sizeof(_g4_t_v638)) : _g4_s277,
    _g4_s279 = (748u + sizeof(_g4_t_v639)) > _g4_s278 ? (748u + sizeof(_g4_t_v639)) : _g4_s278,
    _g4_s280 = (750u + sizeof(_g4_t_v640)) > _g4_s279 ? (750u + sizeof(_g4_t_v640)) : _g4_s279,
    _g4_s281 = (751u + sizeof(_g4_t_v641)) > _g4_s280 ? (751u + sizeof(_g4_t_v641)) : _g4_s280,
    _g4_s282 = (764u + sizeof(_g4_t_v642)) > _g4_s281 ? (764u + sizeof(_g4_t_v642)) : _g4_s281,
    _g4_s283 = (776u + sizeof(_g4_t_v643)) > _g4_s282 ? (776u + sizeof(_g4_t_v643)) : _g4_s282,
    _g4_s284 = (783u + sizeof(_g4_t_v644)) > _g4_s283 ? (783u + sizeof(_g4_t_v644)) : _g4_s283,
    _g4_s285 = (796u + sizeof(_g4_t_v645)) > _g4_s284 ? (796u + sizeof(_g4_t_v645)) : _g4_s284,
    _g4_s286 = (800u + sizeof(_g4_t_v646)) > _g4_s285 ? (800u + sizeof(_g4_t_v646)) : _g4_s285,
    _g4_s287 = (808u + sizeof(_g4_t_v647)) > _g4_s286 ? (808u + sizeof(_g4_t_v647)) : _g4_s286,
    _g4_s288 = (812u + sizeof(_g4_t_v648)) > _g4_s287 ? (812u + sizeof(_g4_t_v648)) : _g4_s287,
    _g4_s289 = (814u + sizeof(_g4_t_v649)) > _g4_s288 ? (814u + sizeof(_g4_t_v649)) : _g4_s288,
    _g4_s290 = (815u + sizeof(_g4_t_v650)) > _g4_s289 ? (815u + sizeof(_g4_t_v650)) : _g4_s289,
    _g4_s291 = (976u + sizeof(_g4_t_v651)) > _g4_s290 ? (976u + sizeof(_g4_t_v651)) : _g4_s290,
    _g4_s292 = (1028u + sizeof(_g4_t_v652)) > _g4_s291 ? (1028u + sizeof(_g4_t_v652)) : _g4_s291
  };
  alignas(16) uint8_t _g4_sf[_g4_s292];
  _g4_t_v361 &v361 = *reinterpret_cast<_g4_t_v361 *>(_g4_sf + 0u);
  _g4_t_v362 &v362 = *reinterpret_cast<_g4_t_v362 *>(_g4_sf + 4u);
  _g4_t_v363 &v363 = *reinterpret_cast<_g4_t_v363 *>(_g4_sf + 4u);
  _g4_t_v364 &v364 = *reinterpret_cast<_g4_t_v364 *>(_g4_sf + 4u);
  _g4_t_v365 &v365 = *reinterpret_cast<_g4_t_v365 *>(_g4_sf + 4u);
  _g4_t_v366 &v366 = *reinterpret_cast<_g4_t_v366 *>(_g4_sf + 4u);
  _g4_t_v367 &v367 = *reinterpret_cast<_g4_t_v367 *>(_g4_sf + 4u);
  _g4_t_v368 &v368 = *reinterpret_cast<_g4_t_v368 *>(_g4_sf + 4u);
  _g4_t_v369 &v369 = *reinterpret_cast<_g4_t_v369 *>(_g4_sf + 4u);
  _g4_t_v370 &v370 = *reinterpret_cast<_g4_t_v370 *>(_g4_sf + 40u);
  _g4_t_v371 &v371 = *reinterpret_cast<_g4_t_v371 *>(_g4_sf + 52u);
  _g4_t_v372 &v372 = *reinterpret_cast<_g4_t_v372 *>(_g4_sf + 52u);
  _g4_t_v373 &v373 = *reinterpret_cast<_g4_t_v373 *>(_g4_sf + 52u);
  _g4_t_v374 &v374 = *reinterpret_cast<_g4_t_v374 *>(_g4_sf + 52u);
  _g4_t_v375 &v375 = *reinterpret_cast<_g4_t_v375 *>(_g4_sf + 52u);
  _g4_t_v376 &v376 = *reinterpret_cast<_g4_t_v376 *>(_g4_sf + 52u);
  _g4_t_v377 &v377 = *reinterpret_cast<_g4_t_v377 *>(_g4_sf + 52u);
  _g4_t_v378 &v378 = *reinterpret_cast<_g4_t_v378 *>(_g4_sf + 52u);
  _g4_t_v379 &v379 = *reinterpret_cast<_g4_t_v379 *>(_g4_sf + 52u);
  _g4_t_v380 &v380 = *reinterpret_cast<_g4_t_v380 *>(_g4_sf + 52u);
  _g4_t_v381 &v381 = *reinterpret_cast<_g4_t_v381 *>(_g4_sf + 52u);
  _g4_t_v382 &v382 = *reinterpret_cast<_g4_t_v382 *>(_g4_sf + 52u);
  _g4_t_v383 &v383 = *reinterpret_cast<_g4_t_v383 *>(_g4_sf + 52u);
  _g4_t_v384 &v384 = *reinterpret_cast<_g4_t_v384 *>(_g4_sf + 52u);
  _g4_t_v385 &v385 = *reinterpret_cast<_g4_t_v385 *>(_g4_sf + 52u);
  _g4_t_v386 &v386 = *reinterpret_cast<_g4_t_v386 *>(_g4_sf + 52u);
  _g4_t_v387 &v387 = *reinterpret_cast<_g4_t_v387 *>(_g4_sf + 52u);
  _g4_t_v388 &v388 = *reinterpret_cast<_g4_t_v388 *>(_g4_sf + 52u);
  _g4_t_v389 &v389 = *reinterpret_cast<_g4_t_v389 *>(_g4_sf + 52u);
  _g4_t_v390 &v390 = *reinterpret_cast<_g4_t_v390 *>(_g4_sf + 52u);
  _g4_t_v391 &v391 = *reinterpret_cast<_g4_t_v391 *>(_g4_sf + 52u);
  _g4_t_v392 &v392 = *reinterpret_cast<_g4_t_v392 *>(_g4_sf + 52u);
  _g4_t_v393 &v393 = *reinterpret_cast<_g4_t_v393 *>(_g4_sf + 52u);
  _g4_t_v394 &v394 = *reinterpret_cast<_g4_t_v394 *>(_g4_sf + 52u);
  _g4_t_v395 &v395 = *reinterpret_cast<_g4_t_v395 *>(_g4_sf + 52u);
  _g4_t_v396 &v396 = *reinterpret_cast<_g4_t_v396 *>(_g4_sf + 52u);
  _g4_t_v397 &v397 = *reinterpret_cast<_g4_t_v397 *>(_g4_sf + 52u);
  _g4_t_v398 &v398 = *reinterpret_cast<_g4_t_v398 *>(_g4_sf + 52u);
  _g4_t_v399 &v399 = *reinterpret_cast<_g4_t_v399 *>(_g4_sf + 52u);
  _g4_t_v400 &v400 = *reinterpret_cast<_g4_t_v400 *>(_g4_sf + 52u);
  _g4_t_v401 &v401 = *reinterpret_cast<_g4_t_v401 *>(_g4_sf + 52u);
  _g4_t_v402 &v402 = *reinterpret_cast<_g4_t_v402 *>(_g4_sf + 52u);
  _g4_t_v403 &v403 = *reinterpret_cast<_g4_t_v403 *>(_g4_sf + 52u);
  _g4_t_v404 &v404 = *reinterpret_cast<_g4_t_v404 *>(_g4_sf + 52u);
  _g4_t_v405 &v405 = *reinterpret_cast<_g4_t_v405 *>(_g4_sf + 52u);
  _g4_t_v406 &v406 = *reinterpret_cast<_g4_t_v406 *>(_g4_sf + 52u);
  _g4_t_v407 &v407 = *reinterpret_cast<_g4_t_v407 *>(_g4_sf + 52u);
  _g4_t_v408 &v408 = *reinterpret_cast<_g4_t_v408 *>(_g4_sf + 52u);
  _g4_t_v409 &v409 = *reinterpret_cast<_g4_t_v409 *>(_g4_sf + 52u);
  _g4_t_v410 &v410 = *reinterpret_cast<_g4_t_v410 *>(_g4_sf + 52u);
  _g4_t_v411 &v411 = *reinterpret_cast<_g4_t_v411 *>(_g4_sf + 52u);
  _g4_t_v412 &v412 = *reinterpret_cast<_g4_t_v412 *>(_g4_sf + 52u);
  _g4_t_v413 &v413 = *reinterpret_cast<_g4_t_v413 *>(_g4_sf + 52u);
  _g4_t_v414 &v414 = *reinterpret_cast<_g4_t_v414 *>(_g4_sf + 52u);
  _g4_t_v415 &v415 = *reinterpret_cast<_g4_t_v415 *>(_g4_sf + 52u);
  _g4_t_v416 &v416 = *reinterpret_cast<_g4_t_v416 *>(_g4_sf + 52u);
  _g4_t_v417 &v417 = *reinterpret_cast<_g4_t_v417 *>(_g4_sf + 52u);
  _g4_t_v418 &v418 = *reinterpret_cast<_g4_t_v418 *>(_g4_sf + 52u);
  _g4_t_v419 &v419 = *reinterpret_cast<_g4_t_v419 *>(_g4_sf + 52u);
  _g4_t_v420 &v420 = *reinterpret_cast<_g4_t_v420 *>(_g4_sf + 52u);
  _g4_t_v421 &v421 = *reinterpret_cast<_g4_t_v421 *>(_g4_sf + 52u);
  _g4_t_v422 &v422 = *reinterpret_cast<_g4_t_v422 *>(_g4_sf + 52u);
  _g4_t_v423 &v423 = *reinterpret_cast<_g4_t_v423 *>(_g4_sf + 52u);
  _g4_t_v424 &v424 = *reinterpret_cast<_g4_t_v424 *>(_g4_sf + 52u);
  _g4_t_v425 &v425 = *reinterpret_cast<_g4_t_v425 *>(_g4_sf + 52u);
  _g4_t_v426 &v426 = *reinterpret_cast<_g4_t_v426 *>(_g4_sf + 56u);
  _g4_t_v427 &v427 = *reinterpret_cast<_g4_t_v427 *>(_g4_sf + 56u);
  _g4_t_v428 &v428 = *reinterpret_cast<_g4_t_v428 *>(_g4_sf + 56u);
  _g4_t_v429 &v429 = *reinterpret_cast<_g4_t_v429 *>(_g4_sf + 56u);
  _g4_t_v430 &v430 = *reinterpret_cast<_g4_t_v430 *>(_g4_sf + 56u);
  _g4_t_v431 &v431 = *reinterpret_cast<_g4_t_v431 *>(_g4_sf + 56u);
  _g4_t_v432 &v432 = *reinterpret_cast<_g4_t_v432 *>(_g4_sf + 56u);
  _g4_t_v433 &v433 = *reinterpret_cast<_g4_t_v433 *>(_g4_sf + 56u);
  _g4_t_v434 &v434 = *reinterpret_cast<_g4_t_v434 *>(_g4_sf + 56u);
  _g4_t_v435 &v435 = *reinterpret_cast<_g4_t_v435 *>(_g4_sf + 56u);
  _g4_t_v436 &v436 = *reinterpret_cast<_g4_t_v436 *>(_g4_sf + 56u);
  _g4_t_v437 &v437 = *reinterpret_cast<_g4_t_v437 *>(_g4_sf + 56u);
  _g4_t_v438 &v438 = *reinterpret_cast<_g4_t_v438 *>(_g4_sf + 56u);
  _g4_t_v439 &v439 = *reinterpret_cast<_g4_t_v439 *>(_g4_sf + 56u);
  _g4_t_v440 &v440 = *reinterpret_cast<_g4_t_v440 *>(_g4_sf + 56u);
  _g4_t_v441 &v441 = *reinterpret_cast<_g4_t_v441 *>(_g4_sf + 56u);
  _g4_t_v442 &v442 = *reinterpret_cast<_g4_t_v442 *>(_g4_sf + 60u);
  _g4_t_v443 &v443 = *reinterpret_cast<_g4_t_v443 *>(_g4_sf + 60u);
  _g4_t_v444 &v444 = *reinterpret_cast<_g4_t_v444 *>(_g4_sf + 60u);
  _g4_t_v445 &v445 = *reinterpret_cast<_g4_t_v445 *>(_g4_sf + 60u);
  _g4_t_v446 &v446 = *reinterpret_cast<_g4_t_v446 *>(_g4_sf + 60u);
  _g4_t_v447 &v447 = *reinterpret_cast<_g4_t_v447 *>(_g4_sf + 60u);
  _g4_t_v448 &v448 = *reinterpret_cast<_g4_t_v448 *>(_g4_sf + 60u);
  _g4_t_v449 &v449 = *reinterpret_cast<_g4_t_v449 *>(_g4_sf + 60u);
  _g4_t_v450 &v450 = *reinterpret_cast<_g4_t_v450 *>(_g4_sf + 60u);
  _g4_t_v451 &v451 = *reinterpret_cast<_g4_t_v451 *>(_g4_sf + 60u);
  _g4_t_v452 &v452 = *reinterpret_cast<_g4_t_v452 *>(_g4_sf + 60u);
  _g4_t_v453 &v453 = *reinterpret_cast<_g4_t_v453 *>(_g4_sf + 60u);
  _g4_t_v454 &v454 = *reinterpret_cast<_g4_t_v454 *>(_g4_sf + 60u);
  _g4_t_v455 &v455 = *reinterpret_cast<_g4_t_v455 *>(_g4_sf + 60u);
  _g4_t_v456 &v456 = *reinterpret_cast<_g4_t_v456 *>(_g4_sf + 60u);
  _g4_t_v457 &v457 = *reinterpret_cast<_g4_t_v457 *>(_g4_sf + 60u);
  _g4_t_v458 &v458 = *reinterpret_cast<_g4_t_v458 *>(_g4_sf + 60u);
  _g4_t_v459 &v459 = *reinterpret_cast<_g4_t_v459 *>(_g4_sf + 60u);
  _g4_t_v460 &v460 = *reinterpret_cast<_g4_t_v460 *>(_g4_sf + 60u);
  _g4_t_v461 &v461 = *reinterpret_cast<_g4_t_v461 *>(_g4_sf + 60u);
  _g4_t_v462 &v462 = *reinterpret_cast<_g4_t_v462 *>(_g4_sf + 60u);
  _g4_t_v463 &v463 = *reinterpret_cast<_g4_t_v463 *>(_g4_sf + 60u);
  _g4_t_v464 &v464 = *reinterpret_cast<_g4_t_v464 *>(_g4_sf + 60u);
  _g4_t_v465 &v465 = *reinterpret_cast<_g4_t_v465 *>(_g4_sf + 60u);
  _g4_t_v466 &v466 = *reinterpret_cast<_g4_t_v466 *>(_g4_sf + 60u);
  _g4_t_v467 &v467 = *reinterpret_cast<_g4_t_v467 *>(_g4_sf + 60u);
  _g4_t_v468 &v468 = *reinterpret_cast<_g4_t_v468 *>(_g4_sf + 60u);
  _g4_t_v469 &v469 = *reinterpret_cast<_g4_t_v469 *>(_g4_sf + 60u);
  _g4_t_v470 &v470 = *reinterpret_cast<_g4_t_v470 *>(_g4_sf + 60u);
  _g4_t_v471 &v471 = *reinterpret_cast<_g4_t_v471 *>(_g4_sf + 84u);
  _g4_t_v472 &v472 = *reinterpret_cast<_g4_t_v472 *>(_g4_sf + 84u);
  _g4_t_v473 &v473 = *reinterpret_cast<_g4_t_v473 *>(_g4_sf + 84u);
  _g4_t_v474 &v474 = *reinterpret_cast<_g4_t_v474 *>(_g4_sf + 84u);
  _g4_t_v475 &v475 = *reinterpret_cast<_g4_t_v475 *>(_g4_sf + 84u);
  _g4_t_v476 &v476 = *reinterpret_cast<_g4_t_v476 *>(_g4_sf + 84u);
  _g4_t_v477 &v477 = *reinterpret_cast<_g4_t_v477 *>(_g4_sf + 84u);
  _g4_t_v478 &v478 = *reinterpret_cast<_g4_t_v478 *>(_g4_sf + 84u);
  _g4_t_VU30 &VU30 = *reinterpret_cast<_g4_t_VU30 *>(_g4_sf + 84u);
  _g4_t_v480 &v480 = *reinterpret_cast<_g4_t_v480 *>(_g4_sf + 84u);
  _g4_t_v481 &v481 = *reinterpret_cast<_g4_t_v481 *>(_g4_sf + 84u);
  _g4_t_v482 &v482 = *reinterpret_cast<_g4_t_v482 *>(_g4_sf + 84u);
  _g4_t_v483 &v483 = *reinterpret_cast<_g4_t_v483 *>(_g4_sf + 88u);
  _g4_t_v484 &v484 = *reinterpret_cast<_g4_t_v484 *>(_g4_sf + 92u);
  _g4_t_v485 &v485 = *reinterpret_cast<_g4_t_v485 *>(_g4_sf + 96u);
  _g4_t_v486 &v486 = *reinterpret_cast<_g4_t_v486 *>(_g4_sf + 100u);
  _g4_t_v487 &v487 = *reinterpret_cast<_g4_t_v487 *>(_g4_sf + 104u);
  _g4_t_v488 &v488 = *reinterpret_cast<_g4_t_v488 *>(_g4_sf + 104u);
  _g4_t_v489 &v489 = *reinterpret_cast<_g4_t_v489 *>(_g4_sf + 104u);
  _g4_t_v490 &v490 = *reinterpret_cast<_g4_t_v490 *>(_g4_sf + 104u);
  _g4_t_v491 &v491 = *reinterpret_cast<_g4_t_v491 *>(_g4_sf + 104u);
  _g4_t_v492 &v492 = *reinterpret_cast<_g4_t_v492 *>(_g4_sf + 104u);
  _g4_t_v493 &v493 = *reinterpret_cast<_g4_t_v493 *>(_g4_sf + 104u);
  _g4_t_v494 &v494 = *reinterpret_cast<_g4_t_v494 *>(_g4_sf + 104u);
  _g4_t_v495 &v495 = *reinterpret_cast<_g4_t_v495 *>(_g4_sf + 104u);
  _g4_t_v496 &v496 = *reinterpret_cast<_g4_t_v496 *>(_g4_sf + 104u);
  _g4_t_v497 &v497 = *reinterpret_cast<_g4_t_v497 *>(_g4_sf + 104u);
  _g4_t_v498 &v498 = *reinterpret_cast<_g4_t_v498 *>(_g4_sf + 104u);
  _g4_t_v499 &v499 = *reinterpret_cast<_g4_t_v499 *>(_g4_sf + 104u);
  _g4_t_v500 &v500 = *reinterpret_cast<_g4_t_v500 *>(_g4_sf + 104u);
  _g4_t_v501 &v501 = *reinterpret_cast<_g4_t_v501 *>(_g4_sf + 104u);
  _g4_t_v502 &v502 = *reinterpret_cast<_g4_t_v502 *>(_g4_sf + 104u);
  _g4_t_v503 &v503 = *reinterpret_cast<_g4_t_v503 *>(_g4_sf + 104u);
  _g4_t_MemberIndex &MemberIndex = *reinterpret_cast<_g4_t_MemberIndex *>(_g4_sf + 104u);
  _g4_t_v505 &v505 = *reinterpret_cast<_g4_t_v505 *>(_g4_sf + 104u);
  _g4_t_v506 &v506 = *reinterpret_cast<_g4_t_v506 *>(_g4_sf + 104u);
  _g4_t_v507 &v507 = *reinterpret_cast<_g4_t_v507 *>(_g4_sf + 104u);
  _g4_t_v508 &v508 = *reinterpret_cast<_g4_t_v508 *>(_g4_sf + 104u);
  _g4_t_v509 &v509 = *reinterpret_cast<_g4_t_v509 *>(_g4_sf + 104u);
  _g4_t_v510 &v510 = *reinterpret_cast<_g4_t_v510 *>(_g4_sf + 104u);
  _g4_t_v511 &v511 = *reinterpret_cast<_g4_t_v511 *>(_g4_sf + 104u);
  _g4_t_v512 &v512 = *reinterpret_cast<_g4_t_v512 *>(_g4_sf + 104u);
  _g4_t_v513 &v513 = *reinterpret_cast<_g4_t_v513 *>(_g4_sf + 104u);
  _g4_t_v514 &v514 = *reinterpret_cast<_g4_t_v514 *>(_g4_sf + 104u);
  _g4_t_v515 &v515 = *reinterpret_cast<_g4_t_v515 *>(_g4_sf + 104u);
  _g4_t_v516 &v516 = *reinterpret_cast<_g4_t_v516 *>(_g4_sf + 104u);
  _g4_t_v517 &v517 = *reinterpret_cast<_g4_t_v517 *>(_g4_sf + 108u);
  _g4_t_v518 &v518 = *reinterpret_cast<_g4_t_v518 *>(_g4_sf + 108u);
  _g4_t_v519 &v519 = *reinterpret_cast<_g4_t_v519 *>(_g4_sf + 108u);
  _g4_t_v520 &v520 = *reinterpret_cast<_g4_t_v520 *>(_g4_sf + 108u);
  _g4_t_v521 &v521 = *reinterpret_cast<_g4_t_v521 *>(_g4_sf + 108u);
  _g4_t_v522 &v522 = *reinterpret_cast<_g4_t_v522 *>(_g4_sf + 108u);
  _g4_t_v523 &v523 = *reinterpret_cast<_g4_t_v523 *>(_g4_sf + 108u);
  _g4_t_v524 &v524 = *reinterpret_cast<_g4_t_v524 *>(_g4_sf + 108u);
  _g4_t_v525 &v525 = *reinterpret_cast<_g4_t_v525 *>(_g4_sf + 108u);
  _g4_t_v526 &v526 = *reinterpret_cast<_g4_t_v526 *>(_g4_sf + 108u);
  _g4_t_v527 &v527 = *reinterpret_cast<_g4_t_v527 *>(_g4_sf + 108u);
  _g4_t_v528 &v528 = *reinterpret_cast<_g4_t_v528 *>(_g4_sf + 108u);
  _g4_t_v529 &v529 = *reinterpret_cast<_g4_t_v529 *>(_g4_sf + 108u);
  _g4_t_v530 &v530 = *reinterpret_cast<_g4_t_v530 *>(_g4_sf + 108u);
  _g4_t_v531 &v531 = *reinterpret_cast<_g4_t_v531 *>(_g4_sf + 108u);
  _g4_t_v532 &v532 = *reinterpret_cast<_g4_t_v532 *>(_g4_sf + 108u);
  _g4_t_v533 &v533 = *reinterpret_cast<_g4_t_v533 *>(_g4_sf + 108u);
  _g4_t_v534 &v534 = *reinterpret_cast<_g4_t_v534 *>(_g4_sf + 108u);
  _g4_t_v535 &v535 = *reinterpret_cast<_g4_t_v535 *>(_g4_sf + 108u);
  _g4_t_v536 &v536 = *reinterpret_cast<_g4_t_v536 *>(_g4_sf + 108u);
  _g4_t_v537 &v537 = *reinterpret_cast<_g4_t_v537 *>(_g4_sf + 116u);
  _g4_t_v538 &v538 = *reinterpret_cast<_g4_t_v538 *>(_g4_sf + 116u);
  _g4_t_v539 &v539 = *reinterpret_cast<_g4_t_v539 *>(_g4_sf + 116u);
  _g4_t_v540 &v540 = *reinterpret_cast<_g4_t_v540 *>(_g4_sf + 116u);
  _g4_t_v541 &v541 = *reinterpret_cast<_g4_t_v541 *>(_g4_sf + 116u);
  _g4_t_v542 &v542 = *reinterpret_cast<_g4_t_v542 *>(_g4_sf + 116u);
  _g4_t_v543 &v543 = *reinterpret_cast<_g4_t_v543 *>(_g4_sf + 116u);
  _g4_t_v544 &v544 = *reinterpret_cast<_g4_t_v544 *>(_g4_sf + 116u);
  _g4_t_v545 &v545 = *reinterpret_cast<_g4_t_v545 *>(_g4_sf + 116u);
  _g4_t_v546 &v546 = *reinterpret_cast<_g4_t_v546 *>(_g4_sf + 116u);
  _g4_t_v547 &v547 = *reinterpret_cast<_g4_t_v547 *>(_g4_sf + 116u);
  _g4_t_v548 &v548 = *reinterpret_cast<_g4_t_v548 *>(_g4_sf + 116u);
  _g4_t_v549 &v549 = *reinterpret_cast<_g4_t_v549 *>(_g4_sf + 116u);
  _g4_t_v550 &v550 = *reinterpret_cast<_g4_t_v550 *>(_g4_sf + 116u);
  _g4_t_v551 &v551 = *reinterpret_cast<_g4_t_v551 *>(_g4_sf + 124u);
  _g4_t_v552 &v552 = *reinterpret_cast<_g4_t_v552 *>(_g4_sf + 128u);
  _g4_t_ExceptionHandlerInfo &ExceptionHandlerInfo = *reinterpret_cast<_g4_t_ExceptionHandlerInfo *>(_g4_sf + 128u);
  _g4_t_v554 &v554 = *reinterpret_cast<_g4_t_v554 *>(_g4_sf + 128u);
  _g4_t_v555 &v555 = *reinterpret_cast<_g4_t_v555 *>(_g4_sf + 128u);
  _g4_t_v556 &v556 = *reinterpret_cast<_g4_t_v556 *>(_g4_sf + 128u);
  _g4_t_v557 &v557 = *reinterpret_cast<_g4_t_v557 *>(_g4_sf + 128u);
  _g4_t_v558 &v558 = *reinterpret_cast<_g4_t_v558 *>(_g4_sf + 128u);
  _g4_t_v559 &v559 = *reinterpret_cast<_g4_t_v559 *>(_g4_sf + 128u);
  _g4_t_v560 &v560 = *reinterpret_cast<_g4_t_v560 *>(_g4_sf + 128u);
  _g4_t_v561 &v561 = *reinterpret_cast<_g4_t_v561 *>(_g4_sf + 128u);
  _g4_t_v562 &v562 = *reinterpret_cast<_g4_t_v562 *>(_g4_sf + 128u);
  _g4_t_Array &Array = *reinterpret_cast<_g4_t_Array *>(_g4_sf + 128u);
  _g4_t_v564 &v564 = *reinterpret_cast<_g4_t_v564 *>(_g4_sf + 128u);
  _g4_t_v565 &v565 = *reinterpret_cast<_g4_t_v565 *>(_g4_sf + 128u);
  _g4_t_v566 &v566 = *reinterpret_cast<_g4_t_v566 *>(_g4_sf + 132u);
  _g4_t_v567 &v567 = *reinterpret_cast<_g4_t_v567 *>(_g4_sf + 136u);
  _g4_t_v568 &v568 = *reinterpret_cast<_g4_t_v568 *>(_g4_sf + 142u);
  _g4_t_v569 &v569 = *reinterpret_cast<_g4_t_v569 *>(_g4_sf + 143u);
  _g4_t_v570 &v570 = *reinterpret_cast<_g4_t_v570 *>(_g4_sf + 144u);
  _g4_t_v571 &v571 = *reinterpret_cast<_g4_t_v571 *>(_g4_sf + 148u);
  _g4_t_v572 &v572 = *reinterpret_cast<_g4_t_v572 *>(_g4_sf + 152u);
  _g4_t_v573 &v573 = *reinterpret_cast<_g4_t_v573 *>(_g4_sf + 156u);
  _g4_t_v574 &v574 = *reinterpret_cast<_g4_t_v574 *>(_g4_sf + 172u);
  _g4_t_v575 &v575 = *reinterpret_cast<_g4_t_v575 *>(_g4_sf + 173u);
  _g4_t_v576 &v576 = *reinterpret_cast<_g4_t_v576 *>(_g4_sf + 188u);
  _g4_t_v577 &v577 = *reinterpret_cast<_g4_t_v577 *>(_g4_sf + 192u);
  _g4_t_v578 &v578 = *reinterpret_cast<_g4_t_v578 *>(_g4_sf + 204u);
  _g4_t_v579 &v579 = *reinterpret_cast<_g4_t_v579 *>(_g4_sf + 228u);
  _g4_t_v580 &v580 = *reinterpret_cast<_g4_t_v580 *>(_g4_sf + 232u);
  _g4_t_v581 &v581 = *reinterpret_cast<_g4_t_v581 *>(_g4_sf + 240u);
  _g4_t_v582 &v582 = *reinterpret_cast<_g4_t_v582 *>(_g4_sf + 252u);
  _g4_t_v583 &v583 = *reinterpret_cast<_g4_t_v583 *>(_g4_sf + 256u);
  _g4_t_v584 &v584 = *reinterpret_cast<_g4_t_v584 *>(_g4_sf + 264u);
  _g4_t_v585 &v585 = *reinterpret_cast<_g4_t_v585 *>(_g4_sf + 276u);
  _g4_t_v586 &v586 = *reinterpret_cast<_g4_t_v586 *>(_g4_sf + 288u);
  _g4_t_v587 &v587 = *reinterpret_cast<_g4_t_v587 *>(_g4_sf + 292u);
  _g4_t_v588 &v588 = *reinterpret_cast<_g4_t_v588 *>(_g4_sf + 300u);
  _g4_t_v589 &v589 = *reinterpret_cast<_g4_t_v589 *>(_g4_sf + 312u);
  _g4_t_v590 &v590 = *reinterpret_cast<_g4_t_v590 *>(_g4_sf + 324u);
  _g4_t_v591 &v591 = *reinterpret_cast<_g4_t_v591 *>(_g4_sf + 328u);
  _g4_t_v592 &v592 = *reinterpret_cast<_g4_t_v592 *>(_g4_sf + 336u);
  _g4_t_v593 &v593 = *reinterpret_cast<_g4_t_v593 *>(_g4_sf + 348u);
  _g4_t_v594 &v594 = *reinterpret_cast<_g4_t_v594 *>(_g4_sf + 360u);
  _g4_t_v595 &v595 = *reinterpret_cast<_g4_t_v595 *>(_g4_sf + 372u);
  _g4_t_v596 &v596 = *reinterpret_cast<_g4_t_v596 *>(_g4_sf + 384u);
  _g4_t_v597 &v597 = *reinterpret_cast<_g4_t_v597 *>(_g4_sf + 388u);
  _g4_t_v598 &v598 = *reinterpret_cast<_g4_t_v598 *>(_g4_sf + 396u);
  _g4_t_v599 &v599 = *reinterpret_cast<_g4_t_v599 *>(_g4_sf + 408u);
  _g4_t_v600 &v600 = *reinterpret_cast<_g4_t_v600 *>(_g4_sf + 412u);
  _g4_t_v601 &v601 = *reinterpret_cast<_g4_t_v601 *>(_g4_sf + 420u);
  _g4_t_v602 &v602 = *reinterpret_cast<_g4_t_v602 *>(_g4_sf + 432u);
  _g4_t_v603 &v603 = *reinterpret_cast<_g4_t_v603 *>(_g4_sf + 436u);
  _g4_t_v604 &v604 = *reinterpret_cast<_g4_t_v604 *>(_g4_sf + 444u);
  _g4_t_v605 &v605 = *reinterpret_cast<_g4_t_v605 *>(_g4_sf + 456u);
  _g4_t_v606 &v606 = *reinterpret_cast<_g4_t_v606 *>(_g4_sf + 460u);
  _g4_t_v607 &v607 = *reinterpret_cast<_g4_t_v607 *>(_g4_sf + 468u);
  _g4_t_v608 &v608 = *reinterpret_cast<_g4_t_v608 *>(_g4_sf + 480u);
  _g4_t_v609 &v609 = *reinterpret_cast<_g4_t_v609 *>(_g4_sf + 484u);
  _g4_t_v610 &v610 = *reinterpret_cast<_g4_t_v610 *>(_g4_sf + 492u);
  _g4_t_v611 &v611 = *reinterpret_cast<_g4_t_v611 *>(_g4_sf + 496u);
  _g4_t_v612 &v612 = *reinterpret_cast<_g4_t_v612 *>(_g4_sf + 504u);
  _g4_t_v613 &v613 = *reinterpret_cast<_g4_t_v613 *>(_g4_sf + 516u);
  _g4_t_v614 &v614 = *reinterpret_cast<_g4_t_v614 *>(_g4_sf + 520u);
  _g4_t_v615 &v615 = *reinterpret_cast<_g4_t_v615 *>(_g4_sf + 528u);
  _g4_t_v616 &v616 = *reinterpret_cast<_g4_t_v616 *>(_g4_sf + 540u);
  _g4_t_v617 &v617 = *reinterpret_cast<_g4_t_v617 *>(_g4_sf + 541u);
  _g4_t_v618 &v618 = *reinterpret_cast<_g4_t_v618 *>(_g4_sf + 544u);
  _g4_t_v619 &v619 = *reinterpret_cast<_g4_t_v619 *>(_g4_sf + 560u);
  _g4_t_v620 &v620 = *reinterpret_cast<_g4_t_v620 *>(_g4_sf + 572u);
  _g4_t_v621 &v621 = *reinterpret_cast<_g4_t_v621 *>(_g4_sf + 576u);
  _g4_t_v622 &v622 = *reinterpret_cast<_g4_t_v622 *>(_g4_sf + 592u);
  _g4_t_v623 &v623 = *reinterpret_cast<_g4_t_v623 *>(_g4_sf + 604u);
  _g4_t_v624 &v624 = *reinterpret_cast<_g4_t_v624 *>(_g4_sf + 608u);
  _g4_t_v625 &v625 = *reinterpret_cast<_g4_t_v625 *>(_g4_sf + 616u);
  _g4_t_v626 &v626 = *reinterpret_cast<_g4_t_v626 *>(_g4_sf + 620u);
  _g4_t_v627 &v627 = *reinterpret_cast<_g4_t_v627 *>(_g4_sf + 628u);
  _g4_t_v628 &v628 = *reinterpret_cast<_g4_t_v628 *>(_g4_sf + 632u);
  _g4_t_v629 &v629 = *reinterpret_cast<_g4_t_v629 *>(_g4_sf + 640u);
  _g4_t_v630 &v630 = *reinterpret_cast<_g4_t_v630 *>(_g4_sf + 652u);
  _g4_t_v631 &v631 = *reinterpret_cast<_g4_t_v631 *>(_g4_sf + 664u);
  _g4_t_v632 &v632 = *reinterpret_cast<_g4_t_v632 *>(_g4_sf + 676u);
  _g4_t_v633 &v633 = *reinterpret_cast<_g4_t_v633 *>(_g4_sf + 688u);
  _g4_t_v634 &v634 = *reinterpret_cast<_g4_t_v634 *>(_g4_sf + 700u);
  _g4_t_v635 &v635 = *reinterpret_cast<_g4_t_v635 *>(_g4_sf + 712u);
  _g4_t_v636 &v636 = *reinterpret_cast<_g4_t_v636 *>(_g4_sf + 716u);
  _g4_t_v637 &v637 = *reinterpret_cast<_g4_t_v637 *>(_g4_sf + 732u);
  _g4_t_v638 &v638 = *reinterpret_cast<_g4_t_v638 *>(_g4_sf + 744u);
  _g4_t_v639 &v639 = *reinterpret_cast<_g4_t_v639 *>(_g4_sf + 748u);
  _g4_t_v640 &v640 = *reinterpret_cast<_g4_t_v640 *>(_g4_sf + 750u);
  _g4_t_v641 &v641 = *reinterpret_cast<_g4_t_v641 *>(_g4_sf + 751u);
  _g4_t_v642 &v642 = *reinterpret_cast<_g4_t_v642 *>(_g4_sf + 764u);
  _g4_t_v643 &v643 = *reinterpret_cast<_g4_t_v643 *>(_g4_sf + 776u);
  _g4_t_v644 &v644 = *reinterpret_cast<_g4_t_v644 *>(_g4_sf + 783u);
  _g4_t_v645 &v645 = *reinterpret_cast<_g4_t_v645 *>(_g4_sf + 796u);
  _g4_t_v646 &v646 = *reinterpret_cast<_g4_t_v646 *>(_g4_sf + 800u);
  _g4_t_v647 &v647 = *reinterpret_cast<_g4_t_v647 *>(_g4_sf + 808u);
  _g4_t_v648 &v648 = *reinterpret_cast<_g4_t_v648 *>(_g4_sf + 812u);
  _g4_t_v649 &v649 = *reinterpret_cast<_g4_t_v649 *>(_g4_sf + 814u);
  _g4_t_v650 &v650 = *reinterpret_cast<_g4_t_v650 *>(_g4_sf + 815u);
  _g4_t_v651 &v651 = *reinterpret_cast<_g4_t_v651 *>(_g4_sf + 976u);
  _g4_t_v652 &v652 = *reinterpret_cast<_g4_t_v652 *>(_g4_sf + 1028u);

  ExceptionTarget = 0;
  v652 = &a2;
  v486 = a5;
  v551 = a2;
  v484 = a6;
  v485 = a3;
  v8 = (v636 | 0x7FFFFFu) >> 16;
  v9 = a4;
  LOWORD(v636) = -1;
  v483 = a7;
  v634[0] = 1;
  v634[1] = 0;
  BYTE2(v636) = v8 & 0x7F;
  HIBYTE(v636) |= 1u;
  while ( 2 )
  {
    v552 = (gameswf::RefCounted::Self *)(ExceptionTarget + 1);
    v10 = *((uint32_t *)v551 + 21);
    v11 = *(uint8_t *)(v10 + ExceptionTarget);
    switch ( v11 )
    {
      case 2u:
      case 9u:
      case 0x82u:
        ++ExceptionTarget;
        goto LABEL_10;
      case 3u:
        v12 = *((uint32_t *)v9 + 1);
        v13 = *(uint32_t *)v9;
        LOWORD(v645) = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v645, (const gameswf::ASValue::Self *)(v13 + 4 * (3 * v12 - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        ExceptionHandlerInfo = (gameswf::RefCounted::Self *)gameswf::AS3Function::getExceptionHandlerInfo(
                                                        v551,
                                                        (gameswf::ASValue::Self *)&v645,
                                                        (int)(uintptr_t)(v552));
        if ( ExceptionHandlerInfo == nullptr )
        {
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v483 + 180), (const gameswf::ASValue::Self *)&v645);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v645);
          goto LABEL_4;
        }
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, 0);
        gameswf::array_gameswf_smart_ptr_gamesw_b135e5::resize(v486, 0);
        v14 = *((uint32_t *)v9 + 1);
        v15 = v14 + 1;
        if ( v14 + 1 > *((uint32_t *)v9 + 2) )
        {
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v15 + (v15 >> 1));
          v14 = *((uint32_t *)v9 + 1);
        }
        v16 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 12 * v14);
        if ( v16 != nullptr )
        {
          *(uint8_t *)v16 = 0;
          *((uint8_t *)v16 + 1) = 0;
          gameswf::ASValue::opAssign(v16, (const gameswf::ASValue::Self *)&v645);
        }
        *((uint32_t *)v9 + 1) = v15;
        ExceptionTarget = *((uint32_t *)ExceptionHandlerInfo + 2);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v645);
        goto LABEL_10;
      case 4u:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v442 = *(gameswf::Self **)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 172) + 16)
                           + 4 * *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 108) + 4 * v573[0]));
        gameswf::ASEnvironment::Construct((gameswf::ASEnvironment::Self *)&v645, *((gameswf::Player::Self **)v551 + 4), 1);
        v616 = 0;
        v617 = 0;
        gameswf::AS3Function::prepareCall(v551, (gameswf::ASValue::Self *)&v616, (gameswf::ASEnvironment::Self *)&v645, v9, 0);
        LOWORD(v620) = 0;
        v17 = *((gameswf::RefCounted::Self **)v551 + 11);
        if ( v17 != nullptr )
        {
          if ( *(uint8_t *)v442 == 0xFF )
            v18 = *((char **)v442 + 3);
          else
            v18 = (char *)v442 + 1;
          v517 = v18;
          v580 = *((uint32_t *)v551 + 11);
          v579[0] = 5;
          v579[1] = 0;
          v487 = (gameswf::RefCounted::Self *)(v646 - 1);
          gameswf::RefCounted::addRef(v17);
          gameswf::call_method(
            (gameswf::Self *)v581,
            (const gameswf::ASValue::Self *)v579,
            (gameswf::ASEnvironment::Self *)&v645,
            (const gameswf::ASValue::Self *)&v616,
            0,
            (int)(uintptr_t)(v487),
            v517);
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v620, (const gameswf::ASValue::Self *)v581);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v581);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v579);
        }
        else if ( v616 == 5 && v618 != nullptr )
        {
          StandardMemberID = gameswf::getStandardMemberID(v442);
          v343 = nullptr;
          if ( StandardMemberID != -1 )
          {
            if ( v616 == 5 )
              v343 = v618;
            v370 = v343;
            v344 = gameswf::getStandardMemberID(v442);
            v345 = v442;
            if ( v344 == -1
              || (v362 = &v620,
                  v358 = (*(int (**)(gameswf::Self *, gameswf::RefCounted::Self *, int))(*(uint32_t *)v370 + 36))(
                           v442,
                           v370,
                           v344),
                  v345 = v442,
                  v358 == 0) )
            {
              v362 = &v620;
              G4_VCALL<void>(v370, 44, v345);
            }
          }
        }
        v19 = *((uint32_t *)v9 + 1);
        v20 = v19 + 1;
        if ( v19 + 1 > *((uint32_t *)v9 + 2) )
        {
          v419 = (gameswf::RefCounted::Self *)(v19 + 1);
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v20 + (v20 >> 1));
          v19 = *((uint32_t *)v9 + 1);
          v20 = (int)(uintptr_t)(v419);
        }
        v21 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 12 * v19);
        if ( v21 != nullptr )
        {
          *(uint8_t *)v21 = 0;
          *((uint8_t *)v21 + 1) = 0;
          v371 = (gameswf::RefCounted::Self *)v20;
          gameswf::ASValue::opAssign(v21, (const gameswf::ASValue::Self *)&v620);
          v20 = (int)(uintptr_t)(v371);
        }
        goto LABEL_26;
      case 5u:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v443 = *(gameswf::Self **)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 172) + 16)
                           + 4 * *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 108) + 4 * v573[0]));
        gameswf::ASEnvironment::Construct((gameswf::ASEnvironment::Self *)&v645, *((gameswf::Player::Self **)v551 + 4), 2);
        v616 = 0;
        v617 = 0;
        gameswf::AS3Function::prepareCall(v551, (gameswf::ASValue::Self *)&v616, (gameswf::ASEnvironment::Self *)&v645, v9, 1);
        LOWORD(v620) = 0;
        v22 = *((gameswf::RefCounted::Self **)v551 + 11);
        if ( v22 != nullptr )
        {
          if ( *(uint8_t *)v443 == 0xFF )
            v23 = *((char **)v443 + 3);
          else
            v23 = (char *)v443 + 1;
          v518 = v23;
          v583 = *((uint32_t *)v551 + 11);
          v582[0] = 5;
          v582[1] = 0;
          v488 = (gameswf::RefCounted::Self *)(v646 - 1);
          gameswf::RefCounted::addRef(v22);
          gameswf::call_method(
            (gameswf::Self *)v584,
            (const gameswf::ASValue::Self *)v582,
            (gameswf::ASEnvironment::Self *)&v645,
            (const gameswf::ASValue::Self *)&v616,
            1,
            (int)(uintptr_t)(v488),
            v518);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v584);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v582);
        }
        else if ( v616 == 5 && v618 != nullptr )
        {
          v340 = gameswf::getStandardMemberID(v443);
          v341 = 0;
          if ( v340 != -1 )
          {
            if ( v616 == 5 )
              v341 = (int)(uintptr_t)(v618);
            sub_776540(v341, v443, v645 + 4 * (3 * (uint32_t)(uintptr_t)(v646) - 3));
          }
        }
        goto LABEL_295;
      case 8u:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v426 = (gameswf::RefCounted::Self *)((char *)*v485 + 12 * v573[0]);
        gameswf::ASValue::dropRefs(v426);
        *(uint8_t *)v426 = 0;
        goto LABEL_10;
      case 0xCu:
        v24 = (uint8_t *)v552 + v10;
        v25 = v24[1];
        v489 = *v24;
        v471 = v24[2];
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)));
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 2);
        if ( (double)nan_arg >= (double)nan_arg )
          v26 = (((char)v471 << 16) | v489 | (v25 << 8)) + 3;
        else
          v26 = 3;
        ExceptionTarget = (int)(uintptr_t)(v552) + v26;
        goto LABEL_10;
      case 0xDu:
        v27 = (uint8_t *)v552 + v10;
        v28 = v27[1];
        v490 = *v27;
        v472 = v27[2];
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)));
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 2);
        if ( (double)nan_arg > (double)nan_arg )
          v29 = (((char)v472 << 16) | v490 | (v28 << 8)) + 3;
        else
          v29 = 3;
        ExceptionTarget = (int)(uintptr_t)(v552) + v29;
        goto LABEL_10;
      case 0xEu:
        v30 = (uint8_t *)v552 + v10;
        v31 = v30[1];
        v491 = *v30;
        v473 = v30[2];
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)));
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 2);
        if ( (double)nan_arg >= (double)nan_arg )
          v32 = (((char)v473 << 16) | v491 | (v31 << 8)) + 3;
        else
          v32 = 3;
        ExceptionTarget = (int)(uintptr_t)(v552) + v32;
        goto LABEL_10;
      case 0xFu:
        v33 = (uint8_t *)v552 + v10;
        v34 = v33[1];
        v492 = *v33;
        v474 = v33[2];
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)));
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 2);
        if ( (double)nan_arg > (double)nan_arg )
          v35 = (((char)v474 << 16) | v492 | (v34 << 8)) + 3;
        else
          v35 = 3;
        ExceptionTarget = (int)(uintptr_t)(v552) + v35;
        goto LABEL_10;
      case 0x10u:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + ((*((char *)v552 + v10 + 2) << 16) | *(uint16_t *)((char *)v552 + v10))
                        + 3;
        goto LABEL_10;
      case 0x11u:
        v36 = (uint8_t *)v552 + v10;
        v537 = *v36;
        v519 = v36[1];
        v493 = v36[2];
        v427 = gameswf::ASValue::toBool((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        v37 = 3;
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        if ( v427 != 0 )
          v37 = (((char)v493 << 16) | v537 | (v519 << 8)) + 3;
        ExceptionTarget = (int)(uintptr_t)(v552) + v37;
        goto LABEL_10;
      case 0x12u:
        v38 = (uint8_t *)v552 + v10;
        v39 = 3;
        v538 = *v38;
        v494 = v38[2];
        v520 = v38[1];
        v428 = gameswf::ASValue::toBool((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        if ( v428 == 0 )
          v39 = (((char)v494 << 16) | v538 | (v520 << 8)) + 3;
        ExceptionTarget = (int)(uintptr_t)(v552) + v39;
        goto LABEL_10;
      case 0x13u:
        v40 = (uint8_t *)v552 + v10;
        v41 = 3;
        v539 = *v40;
        v495 = v40[2];
        v521 = v40[1];
        v429 = gameswf::ASValue::opEq(
                 (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)),
                 (const gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 2);
        if ( v429 != 0 )
          v41 = (((char)v495 << 16) | v539 | (v521 << 8)) + 3;
        ExceptionTarget = (int)(uintptr_t)(v552) + v41;
        goto LABEL_10;
      case 0x14u:
        v42 = (uint8_t *)v552 + v10;
        v43 = 3;
        v540 = *v42;
        v496 = v42[2];
        v522 = v42[1];
        v430 = gameswf::ASValue::opEq(
                 (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)),
                 (const gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 2);
        if ( v430 == 0 )
          v43 = (((char)v496 << 16) | v540 | (v522 << 8)) + 3;
        ExceptionTarget = (int)(uintptr_t)(v552) + v43;
        goto LABEL_10;
      case 0x15u:
        v44 = (uint8_t *)v552 + v10;
        v45 = v44[1];
        v497 = *v44;
        v475 = v44[2];
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)));
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 2);
        if ( (double)nan_arg > (double)nan_arg )
          v46 = (((char)v475 << 16) | v497 | (v45 << 8)) + 3;
        else
          v46 = 3;
        ExceptionTarget = (int)(uintptr_t)(v552) + v46;
        goto LABEL_10;
      case 0x16u:
        v47 = (uint8_t *)v552 + v10;
        v48 = v47[1];
        v498 = *v47;
        v476 = v47[2];
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)));
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 2);
        if ( (double)nan_arg >= (double)nan_arg )
          v49 = (((char)v476 << 16) | v498 | (v48 << 8)) + 3;
        else
          v49 = 3;
        ExceptionTarget = (int)(uintptr_t)(v552) + v49;
        goto LABEL_10;
      case 0x17u:
        v50 = (uint8_t *)v552 + v10;
        v51 = v50[1];
        v499 = *v50;
        v477 = v50[2];
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)));
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 2);
        if ( (double)nan_arg > (double)nan_arg )
          v52 = (((char)v477 << 16) | v499 | (v51 << 8)) + 3;
        else
          v52 = 3;
        ExceptionTarget = (int)(uintptr_t)(v552) + v52;
        goto LABEL_10;
      case 0x18u:
        v53 = (uint8_t *)v552 + v10;
        v54 = v53[1];
        v500 = *v53;
        v478 = v53[2];
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)));
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 2);
        if ( (double)nan_arg >= (double)nan_arg )
          v55 = (((char)v478 << 16) | v500 | (v54 << 8)) + 3;
        else
          v55 = 3;
        ExceptionTarget = (int)(uintptr_t)(v552) + v55;
        goto LABEL_10;
      case 0x19u:
        v56 = (uint8_t *)v552 + v10;
        v57 = 3;
        v541 = *v56;
        v523 = v56[1];
        v501 = v56[2];
        v431 = gameswf::ASValue::opEq(
                 (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)),
                 (const gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 2);
        if ( v431 != 0 )
          v57 = (((char)v501 << 16) | v541 | (v523 << 8)) + 3;
        ExceptionTarget = (int)(uintptr_t)(v552) + v57;
        goto LABEL_10;
      case 0x1Au:
        v58 = (uint8_t *)v552 + v10;
        v59 = 3;
        v542 = *v58;
        v524 = v58[1];
        v502 = v58[2];
        v432 = gameswf::ASValue::opEq(
                 (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)),
                 (const gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 2);
        if ( v432 == 0 )
          v59 = (((char)v502 << 16) | v542 | (v524 << 8)) + 3;
        ExceptionTarget = (int)(uintptr_t)(v552) + v59;
        goto LABEL_10;
      case 0x1Bu:
        v60 = ExceptionTarget + 4;
        v543 = *((uint8_t *)v552 + v10);
        v525 = *((uint8_t *)v552 + v10 + 1);
        v503 = *((uint8_t *)v552 + v10 + 2);
        VU30 = (gameswf::String::Self *)gameswf::readVU30((gameswf::Self *)v573, (int *)(v60 + v10), (const uint8_t *)v362);
        v61 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        if ( v61 < 0 || v61 > v573[0] )
        {
          v63 = ((v503 << 16) | v543 | (v525 << 8)) - 1;
        }
        else
        {
          v62 = (uint8_t *)VU30 + 3 * v61 + v60 + *((uint32_t *)v551 + 21);
          v63 = ((char)v62[2] << 16) | *v62 | (v62[1] << 8);
        }
        ExceptionTarget = (int)(uintptr_t)(v552) + v63;
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        goto LABEL_10;
      case 0x1Du:
        gameswf::array_gameswf_smart_ptr_gamesw_b135e5::resize(v486, *((uint32_t *)v486 + 1) - 1);
        ++ExceptionTarget;
        goto LABEL_10;
      case 0x1Eu:
        v64 = *((uint32_t *)v9 + 1);
        v65 = *(uint32_t *)v9;
        LOWORD(v645) = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v645, (const gameswf::ASValue::Self *)(v65 + 4 * (3 * v64 - 3)));
        v66 = *(uint32_t *)v9 + 12 * (*((uint32_t *)v9 + 1) - 2);
        if ( *(uint8_t *)v66 != 5 )
        {
          gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 2);
LABEL_84:
          v585[0] = 0;
          v585[1] = 0;
          gameswf::array_gameswf_ASValue_3ea8a1::push_back_gameswf_ASValue_0fae14(v9, (const gameswf::ASValue::Self *)v585);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v585);
          goto LABEL_99;
        }
        v464 = *(uint32_t *)(v66 + 4);
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 2);
        if ( v464 == 0 )
          goto LABEL_84;
        if ( (uint8_t)v645 == 3 )
        {
          v308 = v646;
        }
        else if ( (uint8_t)v645 == 4 )
        {
          v308 = v646;
        }
        else
        {
          v308 = (char *)(&byte_20D6378);
          if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
            v308 = sub_106F070();
        }
        v362 = &v620;
        v620 = (unsigned int)(uintptr_t)(v308);
        gameswf::hash_gameswf_StringIPointer_g_5eef2f::find(&v566);
        if ( v566 != nullptr && (v309 = *(uint32_t *)v566, *(uint32_t *)v566 != 0) && v567 <= *(uint32_t *)(v309 + 4) )
        {
          sub_7763C0((gameswf::String::Self *)v637, *(char **)(v309 + 24 * v567 + 16));
        }
        else
        {
          v637[0] = 1;
          v639 = -1;
          v637[1] = 0;
          v640 = 127;
          v641 |= 1u;
        }
        v310 = *((uint32_t *)v9 + 1);
        v311 = v310 + 1;
        if ( v310 + 1 > *((uint32_t *)v9 + 2) )
        {
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v311 + (v311 >> 1));
          v310 = *((uint32_t *)v9 + 1);
        }
        v312 = *(uint32_t *)v9 + 12 * v310;
        if ( v312 != 0 )
        {
          *(uint8_t *)v312 = 0;
          *(uint8_t *)(v312 + 1) = 0;
          *(uint32_t *)(v312 + 4) = 0;
          gameswf::ASValue::setString((gameswf::ASValue::Self *)v312, (const gameswf::String::Self *)v637);
        }
        *((uint32_t *)v9 + 1) = v311;
        if ( v637[0] == 0xFF && (v641 & 1) != 0 )
          gameswf::free_internal(v638);
        goto LABEL_99;
      case 0x20u:
        v67 = *((uint32_t *)v9 + 1);
        v586[0] = 5;
        v586[1] = 0;
        v587 = 0;
        v68 = v67 + 1;
        if ( v67 + 1 > *((uint32_t *)v9 + 2) )
        {
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v68 + (v68 >> 1));
          v67 = *((uint32_t *)v9 + 1);
        }
        v69 = (gameswf::ASValue::Self *)v586;
        v70 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 12 * v67);
        if ( v70 != nullptr )
        {
          *(uint8_t *)v70 = 0;
          *((uint8_t *)v70 + 1) = 0;
          gameswf::ASValue::opAssign(v70, (const gameswf::ASValue::Self *)v586);
          v69 = (gameswf::ASValue::Self *)v586;
        }
        goto LABEL_90;
      case 0x21u:
        v71 = *((uint32_t *)v9 + 1);
        v588[0] = 0;
        v588[1] = 0;
        v68 = v71 + 1;
        if ( v71 + 1 > *((uint32_t *)v9 + 2) )
        {
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v68 + (v68 >> 1));
          v71 = *((uint32_t *)v9 + 1);
        }
        v69 = (gameswf::ASValue::Self *)v588;
        v72 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 12 * v71);
        if ( v72 != nullptr )
        {
          *(uint8_t *)v72 = 0;
          *((uint8_t *)v72 + 1) = 0;
          gameswf::ASValue::opAssign(v72, (const gameswf::ASValue::Self *)v588);
          v69 = (gameswf::ASValue::Self *)v588;
        }
LABEL_90:
        *((uint32_t *)v9 + 1) = v68;
        gameswf::ASValue::dropRefs(v69);
        ExceptionTarget = (int)(uintptr_t)(v552);
        goto LABEL_10;
      case 0x23u:
        v73 = *((uint32_t *)v9 + 1);
        v74 = *(uint32_t *)v9;
        LOWORD(v645) = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v645, (const gameswf::ASValue::Self *)(v74 + 4 * (3 * v73 - 3)));
        v75 = *(uint32_t *)v9 + 12 * (*((uint32_t *)v9 + 1) - 2);
        if ( *(uint8_t *)v75 != 5 )
        {
          gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 2);
LABEL_98:
          v589[0] = 0;
          v589[1] = 0;
          gameswf::array_gameswf_ASValue_3ea8a1::push_back_gameswf_ASValue_0fae14(v9, (const gameswf::ASValue::Self *)v589);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v589);
          goto LABEL_99;
        }
        v465 = *(uint32_t *)(v75 + 4);
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 2);
        if ( v465 == 0 )
          goto LABEL_98;
        if ( (uint8_t)v645 == 3 )
        {
          v317 = v646;
        }
        else if ( (uint8_t)v645 == 4 )
        {
          v317 = v646;
        }
        else
        {
          v317 = (char *)(&byte_20D6378);
          if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
            v317 = sub_106F070();
        }
        v362 = &v620;
        v620 = (unsigned int)(uintptr_t)(v317);
        gameswf::hash_gameswf_StringIPointer_g_5eef2f::find(&v566);
        if ( v566 != nullptr && (v318 = *(uint32_t *)v566, *(uint32_t *)v566 != 0) && v567 <= *(uint32_t *)(v318 + 4) )
        {
          v574 = 0;
          v575 = 0;
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v574, (const gameswf::ASValue::Self *)(v318 + 24 * v567 + 20));
        }
        else
        {
          v574 = 0;
          v575 = 0;
        }
        v319 = *((uint32_t *)v9 + 1);
        v320 = v319 + 1;
        if ( v319 + 1 > *((uint32_t *)v9 + 2) )
        {
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v320 + (v320 >> 1));
          v319 = *((uint32_t *)v9 + 1);
        }
        v321 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 12 * v319);
        if ( v321 != nullptr )
        {
          *(uint8_t *)v321 = 0;
          *((uint8_t *)v321 + 1) = 0;
          gameswf::ASValue::opAssign(v321, (const gameswf::ASValue::Self *)&v574);
        }
        *((uint32_t *)v9 + 1) = v320;
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v574);
LABEL_99:
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v645);
        ExceptionTarget = (int)(uintptr_t)(v552);
        goto LABEL_10;
      case 0x24u:
        ExceptionTarget += 2;
        v76 = *((uint8_t *)v552 + v10);
        v77 = *((uint32_t *)v9 + 1);
        v78 = v77 + 1;
        if ( v77 + 1 > *((uint32_t *)v9 + 2) )
        {
          v413 = v76;
          v462 = v77 + 1;
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v78 + (v78 >> 1));
          v77 = *((uint32_t *)v9 + 1);
          v78 = v462;
          v76 = v413;
        }
        v79 = *(uint32_t *)v9 + 12 * v77;
        if ( v79 != 0 )
        {
          *(uint8_t *)v79 = 2;
          *(uint8_t *)(v79 + 1) = 0;
          *(double *)(v79 + 4) = (double)v76;
        }
        *((uint32_t *)v9 + 1) = v78;
        goto LABEL_10;
      case 0x25u:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v80 = *((uint32_t *)v9 + 1);
        v81 = v80 + 1;
        if ( v80 + 1 > *((uint32_t *)v9 + 2) )
        {
          v412 = (gameswf::RefCounted::Self *)(v80 + 1);
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v81 + (v81 >> 1));
          v80 = *((uint32_t *)v9 + 1);
          v81 = (int)(uintptr_t)(v412);
        }
        v82 = *(uint32_t *)v9 + 12 * v80;
        if ( v82 != 0 )
        {
          v83 = v573[0];
          *(uint8_t *)v82 = 2;
          *(uint8_t *)(v82 + 1) = 0;
          *(double *)(v82 + 4) = (double)v83;
        }
        *((uint32_t *)v9 + 1) = v81;
        goto LABEL_10;
      case 0x26u:
        v84 = *((uint32_t *)v9 + 1);
        v85 = v84 + 1;
        if ( v84 + 1 > *((uint32_t *)v9 + 2) )
        {
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v85 + (v85 >> 1));
          v84 = *((uint32_t *)v9 + 1);
        }
        v86 = (uint8_t *)(*(uint32_t *)v9 + 12 * v84);
        if ( v86 != nullptr )
        {
          *v86 = 1;
          v86[1] = 0;
          v86[4] = 1;
        }
        *((uint32_t *)v9 + 1) = v85;
        ExceptionTarget = (int)(uintptr_t)(v552);
        goto LABEL_10;
      case 0x27u:
        v87 = *((uint32_t *)v9 + 1);
        v88 = v87 + 1;
        if ( v87 + 1 > *((uint32_t *)v9 + 2) )
        {
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v88 + (v88 >> 1));
          v87 = *((uint32_t *)v9 + 1);
        }
        v89 = (uint8_t *)(*(uint32_t *)v9 + 12 * v87);
        if ( v89 != nullptr )
        {
          *v89 = 1;
          v89[1] = 0;
          v89[4] = 0;
        }
        *((uint32_t *)v9 + 1) = v88;
        ExceptionTarget = (int)(uintptr_t)(v552);
        goto LABEL_10;
      case 0x28u:
        nan_arg = gameswf::getNAN();
        v90 = *((uint32_t *)v9 + 1);
        v91 = v90 + 1;
        if ( v90 + 1 > *((uint32_t *)v9 + 2) )
        {
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v91 + (v91 >> 1));
          nan_arg = (double)nan_arg;
          v90 = *((uint32_t *)v9 + 1);
        }
        v92 = *(uint32_t *)v9 + 12 * v90;
        if ( v92 != 0 )
        {
          *(uint8_t *)v92 = 2;
          *(uint8_t *)(v92 + 1) = 0;
          *(double *)(v92 + 4) = nan_arg;
        }
        *((uint32_t *)v9 + 1) = v91;
        ExceptionTarget = (int)(uintptr_t)(v552);
        goto LABEL_10;
      case 0x29u:
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        ++ExceptionTarget;
        goto LABEL_10;
      case 0x2Au:
        v93 = *((uint32_t *)v9 + 1);
        v94 = *(uint32_t *)v9;
        LOWORD(v645) = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v645, (const gameswf::ASValue::Self *)(v94 + 4 * (3 * v93 - 3)));
        v95 = *((uint32_t *)v9 + 1);
        v96 = v95 + 1;
        if ( v95 + 1 > *((uint32_t *)v9 + 2) )
        {
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v96 + (v96 >> 1));
          v95 = *((uint32_t *)v9 + 1);
        }
        v97 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 12 * v95);
        if ( v97 != nullptr )
        {
          *(uint8_t *)v97 = 0;
          *((uint8_t *)v97 + 1) = 0;
          gameswf::ASValue::opAssign(v97, (const gameswf::ASValue::Self *)&v645);
        }
        *((uint32_t *)v9 + 1) = v96;
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v645);
        ExceptionTarget = (int)(uintptr_t)(v552);
        goto LABEL_10;
      case 0x2Bu:
        v98 = *((uint32_t *)v9 + 1);
        v99 = *(uint32_t *)v9;
        LOWORD(v645) = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v645, (const gameswf::ASValue::Self *)(v99 + 4 * (3 * v98 - 3)));
        gameswf::ASValue::opAssign(
          (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)),
          (const gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)));
        gameswf::ASValue::opAssign(
          (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)),
          (const gameswf::ASValue::Self *)&v645);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v645);
        ++ExceptionTarget;
        goto LABEL_10;
      case 0x2Cu:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v100 = *(const gameswf::String::Self **)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 172) + 16)
                                         + 4 * *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 116) + 4 * v573[0]));
        v101 = *((uint32_t *)v9 + 1);
        v102 = v101 + 1;
        if ( v101 + 1 > *((uint32_t *)v9 + 2) )
        {
          v407 = (gameswf::RefCounted::Self *)(v101 + 1);
          v458 = *(const gameswf::String::Self **)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 172) + 16)
                                           + 4 * *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 116) + 4 * v573[0]));
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v102 + (v102 >> 1));
          v101 = *((uint32_t *)v9 + 1);
          v100 = v458;
          v102 = (int)(uintptr_t)(v407);
        }
        v103 = *(uint32_t *)v9 + 12 * v101;
        if ( v103 != 0 )
        {
          *(uint8_t *)v103 = 0;
          *(uint8_t *)(v103 + 1) = 0;
          *(uint32_t *)(v103 + 4) = 0;
          v372 = (gameswf::RefCounted::Self *)v102;
          gameswf::ASValue::setString((gameswf::ASValue::Self *)v103, v100);
          v102 = (int)(uintptr_t)(v372);
        }
        *((uint32_t *)v9 + 1) = v102;
        goto LABEL_10;
      case 0x2Du:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v104 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 40) + 4 * v573[0]);
        v105 = *((uint32_t *)v9 + 1);
        v106 = v105 + 1;
        if ( v105 + 1 > *((uint32_t *)v9 + 2) )
        {
          v411 = (gameswf::RefCounted::Self *)(v105 + 1);
          v461 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 40) + 4 * v573[0]);
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v106 + (v106 >> 1));
          v105 = *((uint32_t *)v9 + 1);
          v104 = v461;
          v106 = (int)(uintptr_t)(v411);
        }
        v107 = *(uint32_t *)v9 + 12 * v105;
        if ( v107 != 0 )
        {
          *(uint8_t *)v107 = 2;
          *(uint8_t *)(v107 + 1) = 0;
          *(double *)(v107 + 4) = (double)v104;
        }
        *((uint32_t *)v9 + 1) = v106;
        goto LABEL_10;
      case 0x2Fu:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v265 = *(uint64_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 56) + 8 * v573[0]);
        v266 = *((uint32_t *)v9 + 1);
        v267 = v266 + 1;
        if ( v266 + 1 > *((uint32_t *)v9 + 2) )
        {
          v405 = (gameswf::RefCounted::Self *)(v266 + 1);
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v267 + (v267 >> 1));
          v266 = *((uint32_t *)v9 + 1);
          v267 = (int)(uintptr_t)(v405);
        }
        v268 = *(uint32_t *)v9 + 12 * v266;
        if ( v268 != 0 )
        {
          *(uint8_t *)v268 = 2;
          *(uint8_t *)(v268 + 1) = 0;
          *(uint64_t *)(v268 + 4) = v265;
        }
        *((uint32_t *)v9 + 1) = v267;
        goto LABEL_10;
      case 0x30u:
        v237 = *(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3);
        v238 = nullptr;
        if ( *(uint8_t *)v237 == 5 )
          v238 = *(gameswf::ASObject::Self **)(v237 + 4);
        v570 = v238;
        gameswf::array_gameswf_smart_ptr_gamesw_b135e5::push_back_gameswf_ASObject_3ab925(v486, &v570);
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        ++ExceptionTarget;
        goto LABEL_10;
      case 0x32u:
        v269 = (char *)v552
             + gameswf::readVU30((gameswf::Self *)&v572, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        ExceptionTarget = (int)(uintptr_t)(&v269[gameswf::readVU30((gameswf::Self *)v573, (int *)&v269[*((uint32_t *)v551 + 21)], v367)]);
        v532 = 0;
        v270 = (int)(uintptr_t)(*v485) + 12 * v572;
        if ( *(uint8_t *)v270 == 5 )
          v532 = *(uint32_t *)(v270 + 4);
        v271 = (char *)gameswf::ASValue::toString(
                         (gameswf::RefCounted::Self *)((char *)*v485 + 12 * v573[0]),
                         (gameswf::String::Self *)v634);
        sub_7763C0((gameswf::String::Self *)&v645, v271);
        if ( *((uint8_t *)*v485 + 12 * v573[0]) == 2 )
        {
          v314 = *(uint32_t *)(v532 + 12);
          if ( v314 == 0 )
            goto LABEL_348;
          v315 = *(uint32_t *)(v314 + 4);
          v272 = 0;
          if ( v315 >= 0 && *(uint32_t *)(v314 + 8) == -2 )
          {
            v564 = (gameswf::RefCounted::Self *)(&dword_0 + 1);
            v272 = 1;
            v515 = (gameswf::RefCounted::Self *)&dword_20;
            if ( v315 >= 1 )
            {
              do
              {
                v329 = v515;
                v564 = (gameswf::RefCounted::Self *)((char *)v564 + 1);
                v515 = (gameswf::RefCounted::Self *)((char *)v515 + 24);
                if ( *(uint32_t *)((char *)v329 + v314) != -2 )
                  break;
                v272 = (int)(uintptr_t)(v564);
              }
              while ( (int)(uintptr_t)(v564) <= *(uint32_t *)(v314 + 4) );
            }
          }
          v511 = 1;
          v562 = (gameswf::RefCounted::Self *)(v532 + 12);
        }
        else
        {
          v362 = &v571;
          v571 = (unsigned int)(uintptr_t)(&v645);
          gameswf::hash_gameswf_StringIPointer_g_5eef2f::find(&v566);
          v562 = v566;
          v272 = v567;
          v511 = 0;
        }
        if ( v562 == nullptr
          || (v273 = *(uint32_t *)v562, *(uint32_t *)v562 == 0)
          || (v533 = *(uint32_t *)(v273 + 4), v272 > v533) )
        {
LABEL_348:
          v593[0] = 1;
          v593[1] = 0;
          v593[4] = 0;
          gameswf::array_gameswf_ASValue_3ea8a1::push_back_gameswf_ASValue_0fae14(v9, (const gameswf::ASValue::Self *)v593);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v593);
          goto LABEL_349;
        }
        if ( v511 != 0 )
          goto LABEL_504;
        v516 = v272 + 1;
        if ( v272 + 1 > v533 )
        {
LABEL_531:
          sub_776320((gameswf::String::Self *)v642, (gameswf::Self *)&unk_1B15112);
          v333 = (gameswf::RefCounted::Self *)v516;
        }
        else
        {
          if ( *(uint32_t *)(v273 + 24 * v516 + 8) == -2 )
          {
            v482 = v9;
            v339 = 8 * (3 * v272++ + 6) + 8;
            do
            {
              if ( ++v272 > v533 )
              {
                v9 = v482;
                v516 = v272;
                goto LABEL_531;
              }
              v359 = *(uint32_t *)(v273 + v339);
              v339 += 24;
            }
            while ( v359 == -2 );
            v9 = v482;
          }
          else
          {
            ++v272;
          }
LABEL_504:
          v467 = v272;
          sub_7763C0((gameswf::String::Self *)v642, *(char **)(v273 + 24 * v272 + 16));
          v333 = (gameswf::RefCounted::Self *)v467;
        }
        v468 = v333;
        v590[0] = 0;
        v590[1] = 0;
        v591 = 0;
        gameswf::ASValue::setString((gameswf::ASValue::Self *)v590, (const gameswf::String::Self *)v642);
        gameswf::ASValue::opAssign(
          (gameswf::RefCounted::Self *)((char *)*v485 + 12 * v573[0]),
          (const gameswf::ASValue::Self *)v590);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v590);
        v334 = v468;
        if ( v642[0] == 0xFF && (v644 & 1) != 0 )
        {
          gameswf::free_internal(v643);
          v334 = v468;
        }
        v335 = false;
        if ( *(uint32_t *)v562 != 0 )
          v335 = (int)(uintptr_t)(v334) <= *(uint32_t *)(*(uint32_t *)v562 + 4);
        v336 = *((uint32_t *)v9 + 1);
        v592[4] = v335;
        v592[0] = 1;
        v592[1] = 0;
        v337 = v336 + 1;
        if ( v336 + 1 > *((uint32_t *)v9 + 2) )
        {
          v422 = (gameswf::RefCounted::Self *)(v336 + 1);
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v337 + (v337 >> 1));
          v336 = *((uint32_t *)v9 + 1);
          v337 = (int)(uintptr_t)(v422);
        }
        v338 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 12 * v336);
        if ( v338 != nullptr )
        {
          *(uint8_t *)v338 = 0;
          *((uint8_t *)v338 + 1) = 0;
          v417 = (gameswf::RefCounted::Self *)v337;
          gameswf::ASValue::opAssign(v338, (const gameswf::ASValue::Self *)v592);
          v337 = (int)(uintptr_t)(v417);
        }
        *((uint32_t *)v9 + 1) = v337;
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v592);
LABEL_349:
        if ( (uint8_t)v645 == 0xFF && (v650 & 1) != 0 )
LABEL_351:
          gameswf::free_internal(v647);
        goto LABEL_10;
      case 0x40u:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v548 = *((gameswf::Player::Self **)v551 + 4);
        v560 = *(gameswf::RefCounted::Self **)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 132) + 4 * v573[0]);
        v228 = nullptr;
        if ( *(uint8_t *)*v485 == 5 )
          v228 = *((gameswf::RefCounted::Self **)*v485 + 1);
        v448 = v228;
        v436 = (gameswf::RefCounted::Self *)opNew(0x30u);
        gameswf::ASObject::ASObject(v436, v548);
        v229 = v436;
        *(uint32_t *)v436 = ((uint32_t)(uintptr_t)&off_208E208);
        *((uint32_t *)v436 + 10) = (uint32_t)(uintptr_t)(v560);
        v230 = v448;
        if ( v560 != nullptr )
        {
          gameswf::RefCounted::addRef(v560);
          v230 = v448;
          v229 = v436;
        }
        *((uint32_t *)v229 + 11) = (uint32_t)(uintptr_t)(v230);
        if ( v230 != nullptr )
        {
          v437 = v229;
          gameswf::RefCounted::addRef(v230);
          v229 = v437;
        }
        v231 = *((uint32_t *)v9 + 1);
        v232 = v231 + 1;
        if ( v231 + 1 > *((uint32_t *)v9 + 2) )
        {
          v439 = v229;
          v455 = v231 + 1;
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v232 + (v232 >> 1));
          v231 = *((uint32_t *)v9 + 1);
          v232 = v455;
          v229 = v439;
        }
        v233 = *(uint32_t *)v9 + 12 * v231;
        if ( v233 != 0 )
        {
          *(uint8_t *)v233 = 5;
          *(uint8_t *)(v233 + 1) = 0;
          *(uint32_t *)(v233 + 4) = (uint32_t)(uintptr_t)(v229);
          v449 = v232;
          gameswf::RefCounted::addRef(v229);
          v232 = v449;
        }
        *((uint32_t *)v9 + 1) = v232;
        goto LABEL_10;
      case 0x42u:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        gameswf::ASEnvironment::Construct(
          (gameswf::ASEnvironment::Self *)&v645,
          *((gameswf::Player::Self **)v551 + 4),
          v573[0] + 1);
        v616 = 0;
        v617 = 0;
        gameswf::AS3Function::prepareCall(v551, (gameswf::ASValue::Self *)&v616, (gameswf::ASEnvironment::Self *)&v645, v9, v573[0]);
        if ( v616 == 5
          && v618 != nullptr
          && (v414 = v618,
              G4_VCALL<uint8_t>(v618, 8, 45) != 0) )
        {
          v514 = (gameswf::RefCounted::Self *)gameswf::ASClass::newOp(v414, *((gameswf::Player::Self **)v551 + 4));
          gameswf::ASClass::initializeInstance((gameswf::abc_def::Self ***)v414, v514);
          v322 = *((gameswf::ASObject::Self **)v414 + 16);
          LOWORD(v620) = 5;
          v621 = v322;
          if ( v322 != nullptr )
            gameswf::RefCounted::addRef(v322);
          v576[0] = 5;
          v576[1] = 0;
          v323 = v573[0];
          v535 = (int)(uintptr_t)(v646 - 1);
          v577 = v514;
          if ( v514 != nullptr )
          {
            v466 = v573[0];
            gameswf::RefCounted::addRef(v514);
            v323 = v466;
          }
          gameswf::call_method(
            (gameswf::Self *)v594,
            (const gameswf::ASValue::Self *)&v620,
            (gameswf::ASEnvironment::Self *)&v645,
            (const gameswf::ASValue::Self *)v576,
            v323,
            v535,
            "constructor");
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v594);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v576);
          v324 = *((uint32_t *)v9 + 1);
          v325 = v324 + 1;
          if ( v324 + 1 > *((uint32_t *)v9 + 2) )
          {
            v420 = (gameswf::RefCounted::Self *)(v324 + 1);
            gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v325 + (v325 >> 1));
            v324 = *((uint32_t *)v9 + 1);
            v325 = (int)(uintptr_t)(v420);
          }
          v326 = *(uint32_t *)v9 + 12 * v324;
          if ( v326 != 0 )
          {
            *(uint8_t *)v326 = 5;
            *(uint8_t *)(v326 + 1) = 0;
            *(uint32_t *)(v326 + 4) = (uint32_t)(uintptr_t)(v514);
            if ( v514 != nullptr )
            {
              v415 = (gameswf::RefCounted::Self *)v325;
              gameswf::RefCounted::addRef(v514);
              v325 = (int)(uintptr_t)(v415);
            }
          }
          *((uint32_t *)v9 + 1) = v325;
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v620);
        }
        else
        {
          v595[0] = 0;
          v595[1] = 0;
          gameswf::array_gameswf_ASValue_3ea8a1::push_back_gameswf_ASValue_0fae14(v9, (const gameswf::ASValue::Self *)v595);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v595);
        }
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v616);
        gameswf::ASEnvironment::Destroy((gameswf::ASEnvironment::Self *)&v645);
        goto LABEL_10;
      case 0x45u:
        v251 = (char *)v552
             + gameswf::readVU30((gameswf::Self *)&v572, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v387 = *(gameswf::RefCounted::Self **)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 172) + 16)
                                       + 4 * *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 108) + 4 * v572));
        ExceptionTarget = (int)(uintptr_t)(&v251[gameswf::readVU30((gameswf::Self *)v573, (int *)&v251[*((uint32_t *)v551 + 21)], v366)]);
        gameswf::ASEnvironment::Construct(
          (gameswf::ASEnvironment::Self *)&v645,
          *((gameswf::Player::Self **)v551 + 4),
          v573[0] + 1);
        v616 = 0;
        v617 = 0;
        gameswf::AS3Function::prepareCall(v551, (gameswf::ASValue::Self *)&v616, (gameswf::ASEnvironment::Self *)&v645, v9, v573[0]);
        LOWORD(v620) = 0;
        v252 = *((gameswf::RefCounted::Self **)v551 + 11);
        if ( v252 != nullptr )
        {
          if ( *(uint8_t *)v387 == 0xFF )
            v253 = *((char **)v387 + 3);
          else
            v253 = (char *)v387 + 1;
          v530 = v253;
          v597 = *((uint32_t *)v551 + 11);
          v596[0] = 5;
          v596[1] = 0;
          v509 = (gameswf::RefCounted::Self *)(v646 - 1);
          v388 = (gameswf::RefCounted::Self *)v573[0];
          gameswf::RefCounted::addRef(v252);
          gameswf::call_method(
            (gameswf::Self *)v598,
            (const gameswf::ASValue::Self *)v596,
            (gameswf::ASEnvironment::Self *)&v645,
            (const gameswf::ASValue::Self *)&v616,
            (int)(uintptr_t)(v388),
            (int)(uintptr_t)(v509),
            v530);
          gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v620, (const gameswf::ASValue::Self *)v598);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v598);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v596);
        }
        v254 = *((uint32_t *)v9 + 1);
        v20 = v254 + 1;
        if ( v254 + 1 > *((uint32_t *)v9 + 2) )
        {
          v406 = (gameswf::RefCounted::Self *)(v254 + 1);
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v20 + (v20 >> 1));
          v254 = *((uint32_t *)v9 + 1);
          v20 = (int)(uintptr_t)(v406);
        }
        v255 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 12 * v254);
        if ( v255 != nullptr )
        {
          *(uint8_t *)v255 = 0;
          *((uint8_t *)v255 + 1) = 0;
          v389 = (gameswf::RefCounted::Self *)v20;
          gameswf::ASValue::opAssign(v255, (const gameswf::ASValue::Self *)&v620);
          v20 = (int)(uintptr_t)(v389);
        }
LABEL_26:
        *((uint32_t *)v9 + 1) = v20;
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v620);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v616);
        gameswf::ASEnvironment::Destroy((gameswf::ASEnvironment::Self *)&v645);
        goto LABEL_10;
      case 0x46u:
        v274 = (char *)v552
             + gameswf::readVU30((gameswf::Self *)&v572, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v275 = *((uint32_t *)v551 + 10);
        v512 = *(gameswf::RefCounted::Self **)(*(uint32_t *)(*(uint32_t *)(v275 + 172) + 16)
                                       + 4 * *(uint32_t *)(*(uint32_t *)(v275 + 108) + 4 * v572));
        v391 = *(gameswf::RefCounted::Self **)(*(uint32_t *)(v275 + 108) + 4 * v572);
        ExceptionTarget = (int)(uintptr_t)(&v274[gameswf::readVU30((gameswf::Self *)v573, (int *)&v274[*((uint32_t *)v551 + 21)], v368)]);
        gameswf::ASEnvironment::Construct(
          (gameswf::ASEnvironment::Self *)&v645,
          *((gameswf::Player::Self **)v551 + 4),
          v573[0] + 1);
        v616 = 0;
        v617 = 0;
        gameswf::AS3Function::prepareCall(v551, (gameswf::ASValue::Self *)&v616, (gameswf::ASEnvironment::Self *)&v645, v9, v573[0]);
        LOWORD(v620) = 0;
        gameswf::AS3Function::getProperty(
          (gameswf::Player::Self **)v551,
          (gameswf::ASValue::Self *)&v616,
          (int)(uintptr_t)(v391),
          (const gameswf::String::Self *)(v512),
          (gameswf::ASValue::Self *)&v620,
          false);
        MultiNamespace = (const gameswf::String::Self *)gameswf::abc_def::getMultiNamespace(
                                                    *((gameswf::abc_def::Self **)v551 + 10),
                                                    v572);
        Class = (gameswf::RefCounted::Self *)gameswf::ASClassManager::findClass(
                                         (gameswf::ASClassManager::Self *)(*((uint32_t *)v551 + 4) + 236),
                                         MultiNamespace,
                                         v512,
                                         false);
        if ( Class != nullptr
          && (v600 = Class,
              v392 = Class,
              v599[0] = 5,
              v599[1] = 0,
              gameswf::RefCounted::addRef(Class),
              v438 = gameswf::ASValue::opEq((gameswf::ASValue::Self *)&v620, (const gameswf::ASValue::Self *)v599),
              gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v599),
              v438 != 0) )
        {
          if ( *((uint8_t *)v392 + 110) != 0 )
          {
            v278 = (char *)v512 + 1;
            if ( *(uint8_t *)v512 == 0xFF )
              v278 = *((char **)v512 + 3);
            gameswf::call_method(
              (gameswf::Self *)v601,
              (const gameswf::ASValue::Self *)&v620,
              (gameswf::ASEnvironment::Self *)&v645,
              (const gameswf::ASValue::Self *)&v616,
              v573[0],
              (int)(uintptr_t)(v646 - 1),
              v278);
            v279 = *((uint32_t *)v9 + 1);
            v280 = v279 + 1;
            if ( v279 + 1 > *((uint32_t *)v9 + 2) )
            {
              v425 = (gameswf::RefCounted::Self *)(v279 + 1);
              gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v280 + (v280 >> 1));
              v279 = *((uint32_t *)v9 + 1);
              v280 = (int)(uintptr_t)(v425);
            }
            v281 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 12 * v279);
            if ( v281 != nullptr )
            {
              *(uint8_t *)v281 = 0;
              *((uint8_t *)v281 + 1) = 0;
              v393 = (gameswf::RefCounted::Self *)v280;
              gameswf::ASValue::opAssign(v281, (const gameswf::ASValue::Self *)v601);
              v280 = (int)(uintptr_t)(v393);
            }
            *((uint32_t *)v9 + 1) = v280;
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v601);
          }
          else if ( (uint8_t)gameswf::AS3Function::isInstanceOf(
                                       v551,
                                       (gameswf::ASValue::Self *)(v645 + 4 * (3 * (uint32_t)(uintptr_t)(v646) - 3)),
                                       (gameswf::ASClass::Self *)(v392)) != 0 )
          {
            gameswf::array_gameswf_ASValue_3ea8a1::push_back_gameswf_ASValue_0fae14(
              v9,
              (const gameswf::ASValue::Self *)(v645 + 4 * (3 * (uint32_t)(uintptr_t)(v646) - 3)));
          }
          else
          {
            v602[0] = 5;
            v602[1] = 0;
            v603 = 0;
            gameswf::array_gameswf_ASValue_3ea8a1::push_back_gameswf_ASValue_0fae14(v9, (const gameswf::ASValue::Self *)v602);
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v602);
          }
        }
        else
        {
          v294 = (char *)v512 + 1;
          if ( *(uint8_t *)v512 == 0xFF )
            v294 = *((char **)v512 + 3);
          gameswf::call_method(
            (gameswf::Self *)v604,
            (const gameswf::ASValue::Self *)&v620,
            (gameswf::ASEnvironment::Self *)&v645,
            (const gameswf::ASValue::Self *)&v616,
            v573[0],
            (int)(uintptr_t)(v646 - 1),
            v294);
          v295 = *((uint32_t *)v9 + 1);
          v296 = v295 + 1;
          if ( v295 + 1 > *((uint32_t *)v9 + 2) )
          {
            v423 = (gameswf::RefCounted::Self *)(v295 + 1);
            gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v296 + (v296 >> 1));
            v295 = *((uint32_t *)v9 + 1);
            v296 = (int)(uintptr_t)(v423);
          }
          v297 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 12 * v295);
          if ( v297 != nullptr )
          {
            *(uint8_t *)v297 = 0;
            *((uint8_t *)v297 + 1) = 0;
            v397 = (gameswf::RefCounted::Self *)v296;
            gameswf::ASValue::opAssign(v297, (const gameswf::ASValue::Self *)v604);
            v296 = (int)(uintptr_t)(v397);
          }
          *((uint32_t *)v9 + 1) = v296;
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v604);
        }
        goto LABEL_295;
      case 0x47u:
        gameswf::ASValue::dropRefs(v484);
        *(uint8_t *)v484 = 0;
        goto LABEL_4;
      case 0x48u:
        gameswf::ASValue::opAssign(v484, (const gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        goto LABEL_4;
      case 0x49u:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        gameswf::ASEnvironment::Construct(
          (gameswf::ASEnvironment::Self *)&v645,
          *((gameswf::Player::Self **)v551 + 4),
          v573[0] + 1);
        v616 = 0;
        v617 = 0;
        gameswf::AS3Function::prepareCall(v551, (gameswf::ASValue::Self *)&v616, (gameswf::ASEnvironment::Self *)&v645, v9, v573[0]);
        LOWORD(v620) = 0;
        if ( *((uint32_t *)v551 + 11) != 0 )
        {
          v529 = (int)(uintptr_t)(v646 - 1);
          v606 = *((gameswf::RefCounted::Self **)v551 + 11);
          v450 = v573[0];
          v605[0] = 5;
          v605[1] = 0;
          gameswf::RefCounted::addRef(v606);
          gameswf::call_method(
            (gameswf::Self *)v607,
            (const gameswf::ASValue::Self *)v605,
            (gameswf::ASEnvironment::Self *)&v645,
            (const gameswf::ASValue::Self *)&v616,
            v450,
            v529,
            "constructor");
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v607);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v605);
        }
        goto LABEL_295;
      case 0x4Au:
        v239 = (char *)v552
             + gameswf::readVU30((gameswf::Self *)&v572, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v240 = *((uint32_t *)v551 + 10);
        v506 = *(gameswf::RefCounted::Self **)(*(uint32_t *)(*(uint32_t *)(v240 + 172) + 16)
                                       + 4 * *(uint32_t *)(*(uint32_t *)(v240 + 108) + 4 * v572));
        v383 = *(gameswf::RefCounted::Self **)(*(uint32_t *)(v240 + 108) + 4 * v572);
        ExceptionTarget = (int)(uintptr_t)(&v239[gameswf::readVU30((gameswf::Self *)v573, (int *)&v239[*((uint32_t *)v551 + 21)], v365)]);
        gameswf::ASEnvironment::Construct(
          (gameswf::ASEnvironment::Self *)&v645,
          *((gameswf::Player::Self **)v551 + 4),
          v573[0] + 1);
        v616 = 0;
        v617 = 0;
        gameswf::AS3Function::prepareCall(v551, (gameswf::ASValue::Self *)&v616, (gameswf::ASEnvironment::Self *)&v645, v9, v573[0]);
        LOWORD(v620) = 0;
        gameswf::AS3Function::getProperty(
          (gameswf::Player::Self **)v551,
          (gameswf::ASValue::Self *)&v616,
          (int)(uintptr_t)(v383),
          (const gameswf::String::Self *)(v506),
          (gameswf::ASValue::Self *)&v620,
          false);
        v241 = (gameswf::Self **)gameswf::ASValue::toFunction((gameswf::ASValue::Self *)&v620);
        if ( v241 != nullptr
          || (v354 = (const gameswf::String::Self *)gameswf::abc_def::getMultiNamespace(
                                                *((gameswf::abc_def::Self **)v551 + 10),
                                                v572),
              (v241 = (gameswf::Self **)gameswf::ASClassManager::findClass(
                                    (gameswf::ASClassManager::Self *)(*((uint32_t *)v551 + 4) + 236),
                                    v354,
                                    v506,
                                    true)) != nullptr) )
        {
          v451 = v241;
          v242 = (*((int (**)(gameswf::Self **, int))*v241 + 2))(v241, 45);
          v243 = nullptr;
          v244 = (gameswf::RefCounted::Self *)v451;
          if ( v242 != 0 )
            v243 = v451;
          v480 = (gameswf::String::Self *)(v243 + 10);
          v507 = (gameswf::RefCounted::Self *)(v243[21]);
          if ( v507 != nullptr && *((uint8_t *)v243[20] + 2) == 0 )
          {
            v396 = (gameswf::RefCounted::Self *)v243;
            sub_7E5ED0(v243 + 20, nullptr);
            v507 = nullptr;
            *((uint32_t *)v396 + 21) = 0;
            v244 = (gameswf::RefCounted::Self *)v451;
          }
          v452 = v244;
          Object = (gameswf::RefCounted::Self *)gameswf::abc_def::createObject(
                                            *((gameswf::abc_def::Self **)v551 + 10),
                                            (gameswf::RefCounted::Self *)((char *)v507 + 48),
                                            v480);
          v610[0] = 5;
          v610[1] = 0;
          v611 = Object;
          v246 = v452;
          v481 = (gameswf::String::Self *)(v646 - 1);
          v508 = (gameswf::RefCounted::Self *)v573[0];
          if ( Object != nullptr )
          {
            v384 = Object;
            gameswf::RefCounted::addRef(Object);
            v246 = v452;
            Object = v384;
          }
          v385 = Object;
          v609 = v246;
          v608[0] = 5;
          v608[1] = 0;
          gameswf::RefCounted::addRef(v246);
          gameswf::call_method(
            (gameswf::Self *)v578,
            (const gameswf::ASValue::Self *)v608,
            (gameswf::ASEnvironment::Self *)&v645,
            (const gameswf::ASValue::Self *)v610,
            (int)(uintptr_t)(v508),
            (int)(uintptr_t)(v481),
            "constructor");
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v608);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v610);
          v247 = *((uint32_t *)v9 + 1);
          v248 = v385;
          if ( v578[0] != 0 )
          {
            v249 = v247 + 1;
            if ( v247 + 1 > *((uint32_t *)v9 + 2) )
            {
              v424 = (gameswf::RefCounted::Self *)(v247 + 1);
              gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v249 + (v249 >> 1));
              v247 = *((uint32_t *)v9 + 1);
              v249 = (int)(uintptr_t)(v424);
            }
            v250 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 12 * v247);
            if ( v250 != nullptr )
            {
              *(uint8_t *)v250 = 0;
              *((uint8_t *)v250 + 1) = 0;
              v386 = (gameswf::RefCounted::Self *)v249;
              gameswf::ASValue::opAssign(v250, (const gameswf::ASValue::Self *)v578);
              v249 = (int)(uintptr_t)(v386);
            }
            *((uint32_t *)v9 + 1) = v249;
          }
          else
          {
            v292 = v247 + 1;
            if ( v247 + 1 > *((uint32_t *)v9 + 2) )
            {
              v470 = v247 + 1;
              gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v292 + (v292 >> 1));
              v247 = *((uint32_t *)v9 + 1);
              v292 = v470;
              v248 = v385;
            }
            v293 = *(uint32_t *)v9 + 12 * v247;
            if ( v293 != 0 )
            {
              *(uint8_t *)v293 = 5;
              *(uint8_t *)(v293 + 1) = 0;
              *(uint32_t *)(v293 + 4) = (uint32_t)(uintptr_t)(v248);
              if ( v248 != nullptr )
              {
                v453 = v292;
                gameswf::RefCounted::addRef(v248);
                v292 = v453;
              }
            }
            *((uint32_t *)v9 + 1) = v292;
          }
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v578);
        }
        else
        {
          v612[0] = 0;
          v612[1] = 0;
          gameswf::array_gameswf_ASValue_3ea8a1::push_back_gameswf_ASValue_0fae14(v9, (const gameswf::ASValue::Self *)v612);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v612);
        }
        goto LABEL_295;
      case 0x4Eu:
        v234 = (char *)v552
             + gameswf::readVU30((gameswf::Self *)&v572, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v381 = *(gameswf::RefCounted::Self **)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 172) + 16)
                                       + 4 * *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 108) + 4 * v572));
        ExceptionTarget = (int)(uintptr_t)(&v234[gameswf::readVU30((gameswf::Self *)v573, (int *)&v234[*((uint32_t *)v551 + 21)], v364)]);
        gameswf::ASEnvironment::Construct(
          (gameswf::ASEnvironment::Self *)&v645,
          *((gameswf::Player::Self **)v551 + 4),
          v573[0] + 1);
        v616 = 0;
        v617 = 0;
        gameswf::AS3Function::prepareCall(v551, (gameswf::ASValue::Self *)&v616, (gameswf::ASEnvironment::Self *)&v645, v9, v573[0]);
        LOWORD(v620) = 0;
        v235 = *((gameswf::RefCounted::Self **)v551 + 11);
        if ( v235 != nullptr )
        {
          if ( *(uint8_t *)v381 == 0xFF )
            v236 = *((char **)v381 + 3);
          else
            v236 = (char *)v381 + 1;
          v528 = v236;
          v614 = *((uint32_t *)v551 + 11);
          v613[0] = 5;
          v613[1] = 0;
          v505 = (gameswf::RefCounted::Self *)(v646 - 1);
          v382 = (gameswf::RefCounted::Self *)v573[0];
          gameswf::RefCounted::addRef(v235);
          gameswf::call_method(
            (gameswf::Self *)v615,
            (const gameswf::ASValue::Self *)v613,
            (gameswf::ASEnvironment::Self *)&v645,
            (const gameswf::ASValue::Self *)&v616,
            (int)(uintptr_t)(v382),
            (int)(uintptr_t)(v505),
            v528);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v615);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v613);
        }
        goto LABEL_295;
      case 0x4Fu:
        v282 = (char *)v552
             + gameswf::readVU30((gameswf::Self *)&v572, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v283 = *((uint32_t *)v551 + 10);
        v513 = *(gameswf::RefCounted::Self **)(*(uint32_t *)(*(uint32_t *)(v283 + 172) + 16)
                                       + 4 * *(uint32_t *)(*(uint32_t *)(v283 + 108) + 4 * v572));
        v394 = *(gameswf::RefCounted::Self **)(*(uint32_t *)(v283 + 108) + 4 * v572);
        ExceptionTarget = (int)(uintptr_t)(&v282[gameswf::readVU30((gameswf::Self *)v573, (int *)&v282[*((uint32_t *)v551 + 21)], v369)]);
        gameswf::ASEnvironment::Construct(
          (gameswf::ASEnvironment::Self *)&v645,
          *((gameswf::Player::Self **)v551 + 4),
          v573[0] + 1);
        v616 = 0;
        v617 = 0;
        gameswf::AS3Function::prepareCall(v551, (gameswf::ASValue::Self *)&v616, (gameswf::ASEnvironment::Self *)&v645, v9, v573[0]);
        LOWORD(v620) = 0;
        gameswf::AS3Function::getProperty(
          (gameswf::Player::Self **)v551,
          (gameswf::ASValue::Self *)&v616,
          (int)(uintptr_t)(v394),
          (const gameswf::String::Self *)(v513),
          (gameswf::ASValue::Self *)&v620,
          false);
        if ( *(uint8_t *)v513 == 0xFF )
          v284 = *((char **)v513 + 3);
        else
          v284 = (char *)v513 + 1;
        gameswf::call_method(
          (gameswf::Self *)v619,
          (const gameswf::ASValue::Self *)&v620,
          (gameswf::ASEnvironment::Self *)&v645,
          (const gameswf::ASValue::Self *)&v616,
          v573[0],
          (int)(uintptr_t)(v646 - 1),
          v284);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v619);
        if ( v651[0] == 0 )
          goto LABEL_295;
        ExceptionTarget = gameswf::AS3Function::getExceptionTarget(
                            v551,
                            (gameswf::ASValue::Self *)v651,
                            ExceptionTarget,
                            (gameswf::array<gameswf::ASValue::Self> *)(v9),
                            v483);
        if ( ExceptionTarget >= 0 )
        {
          gameswf::array_gameswf_smart_ptr_gamesw_b135e5::resize(v486, 0);
LABEL_295:
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v620);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v616);
          gameswf::ASEnvironment::Destroy((gameswf::ASEnvironment::Self *)&v645);
LABEL_10:
          if ( ExceptionTarget >= (int)(*((uint32_t *)v551 + 22) << 8) >> 8 )
            goto LABEL_4;
          continue;
        }
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v620);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v616);
        gameswf::ASEnvironment::Destroy((gameswf::ASEnvironment::Self *)&v645);
LABEL_4:
        if ( v634[0] == 0xFF && (v636 & 0x1000000) != 0 )
          gameswf::free_internal(v635);
        return;
      case 0x55u:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v390 = *((gameswf::RefCounted::Self **)v551 + 4);
        v549 = opNew(0x28u);
        gameswf::ASObject::ASObject((gameswf::ASObject::Self *)v549, v390);
        v256 = *(int **)(v549 + 12);
        v257 = 0;
        if ( v256 != nullptr )
          v257 = *v256;
        if ( v573[0] < v257 )
        {
          v258 = 0;
          if ( v256 != nullptr )
            v258 = 3 * *v256 / 2;
        }
        else
        {
          v258 = 3 * v573[0] / 2;
        }
        gameswf::hash_gameswf_StringIPointer_g_5eef2f::set_raw_capacity(
          (gameswf::hash<gameswf::StringIPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringIPointer>> *)(v549 + 12),
          v258);
        if ( v573[0] > 0 )
        {
          v561 = nullptr;
          v510 = (gameswf::RefCounted::Self *)ExceptionTarget;
          do
          {
            v260 = *((uint32_t *)v9 + 1);
            v261 = *(uint32_t *)v9;
            v262 = *(uint32_t *)v9 + 4 * (3 * v260 - 6);
            if ( *(uint8_t *)v262 == 3 || *(uint8_t *)v262 == 4 )
            {
              v263 = *(gameswf::Self **)(v262 + 4);
            }
            else
            {
              v263 = (gameswf::Self *)&byte_20D6378;
              if ( byte_20D6370 == 0 )
              {
                if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
                {
                  byte_20D6378 = 1;
                  v264 = dword_20D6388 | 0x7FFFFF;
                  byte_20D6379 = 0;
                  dword_20D6388 = v264;
                  BYTE2(dword_20D6388) = BYTE2(v264) & 0x7F;
                  HIBYTE(dword_20D6388) = HIBYTE(v264) | 1;
                  _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
                  __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
                }
                v260 = *((uint32_t *)v9 + 1);
                v261 = *(uint32_t *)v9;
              }
            }
            v531 = (unsigned int *)(v261 + 4 * (3 * v260 - 3));
            v259 = gameswf::getStandardMemberID(v263);
            if ( v259 == -1
              || (v362 = v531, G4_VCALL<uint8_t>(v549, 32, v259) == 0) )
            {
              v362 = v531;
              G4_VCALL<void>(v549, 48, v263);
            }
            gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 2);
            v561 = (gameswf::RefCounted::Self *)((char *)v561 + 1);
          }
          while ( v573[0] > (int)(uintptr_t)(v561) );
          ExceptionTarget = (int)(uintptr_t)(v510);
        }
        v330 = *((uint32_t *)v9 + 1);
        v331 = v330 + 1;
        if ( v330 + 1 > *((uint32_t *)v9 + 2) )
        {
          v418 = (gameswf::RefCounted::Self *)(v330 + 1);
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v331 + (v331 >> 1));
          v330 = *((uint32_t *)v9 + 1);
          v331 = (int)(uintptr_t)(v418);
        }
        v332 = *(uint32_t *)v9 + 12 * v330;
        if ( v332 != 0 )
        {
          *(uint8_t *)v332 = 5;
          *(uint8_t *)(v332 + 1) = 0;
          *(uint32_t *)(v332 + 4) = v549;
          v416 = (gameswf::RefCounted::Self *)v331;
          gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v549);
          v331 = (int)(uintptr_t)(v416);
        }
        *((uint32_t *)v9 + 1) = v331;
        goto LABEL_10;
      case 0x56u:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        Array = (gameswf::RefCounted::Self *)gameswf::createArray(*((gameswf::Self **)v551 + 4), v361);
        gameswf::array_gameswf_ASValue_3ea8a1::reserve((gameswf::RefCounted::Self *)((char *)Array + 60), v573[0]);
        v285 = v573[0];
        if ( v573[0] - 1 >= 0 )
        {
          v550 = ExceptionTarget;
          v286 = v9;
          v287 = v573[0] - 1;
          do
          {
            v288 = *((uint32_t *)v286 + 1) + ~v287--;
            gameswf::ASArray::push(Array, (const gameswf::ASValue::Self *)(*(uint32_t *)v286 + 12 * v288));
          }
          while ( v287 != -1 );
          v9 = v286;
          v285 = v573[0];
          ExceptionTarget = v550;
        }
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - v285);
        v289 = *((uint32_t *)v9 + 1);
        v290 = v289 + 1;
        if ( v289 + 1 > *((uint32_t *)v9 + 2) )
        {
          v409 = (gameswf::RefCounted::Self *)(v289 + 1);
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v290 + (v290 >> 1));
          v289 = *((uint32_t *)v9 + 1);
          v290 = (int)(uintptr_t)(v409);
        }
        v291 = *(uint32_t *)v9 + 12 * v289;
        if ( v291 != 0 )
        {
          *(uint8_t *)v291 = 5;
          *(uint8_t *)(v291 + 1) = 0;
          *(uint32_t *)(v291 + 4) = (uint32_t)(uintptr_t)(Array);
          if ( Array != nullptr )
          {
            v395 = (gameswf::RefCounted::Self *)v290;
            gameswf::RefCounted::addRef(Array);
            v290 = (int)(uintptr_t)(v395);
          }
        }
        *((uint32_t *)v9 + 1) = v290;
        goto LABEL_10;
      case 0x57u:
        v373 = *((gameswf::RefCounted::Self **)v551 + 4);
        v162 = opNew(0x28u);
        gameswf::ASObject::ASObject((gameswf::ASObject::Self *)v162, v373);
        *(uint32_t *)v162 = ((uint32_t)(uintptr_t)&off_208E308);
        gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v162);
        if ( *(uint32_t *)(v162 + 32) == 0 )
        {
          *(uint32_t *)(v162 + 36) = *(uint32_t *)(v162 + 36) & 0xFF000000 | 0x20;
          v348 = gameswf::malloc_internal(0x180u);
          *(uint8_t *)(v162 + 39) = 1;
          v349 = *(uint32_t *)(v162 + 36) << 8;
          *(uint32_t *)(v162 + 32) = v348;
          v350 = v349 >> 8;
          if ( v350 > 0 )
          {
            v536 = v9;
            v351 = 0;
            v352 = 0;
            while ( 1 )
            {
              v353 = (uint8_t *)(v351 + v348);
              if ( v353 != nullptr )
              {
                *v353 = 0;
                v353[1] = 0;
                v350 = (int)(*(uint32_t *)(v162 + 36) << 8) >> 8;
              }
              ++v352;
              v351 += 12;
              if ( v352 >= v350 )
                break;
              v348 = *(uint32_t *)(v162 + 32);
            }
            v9 = v536;
          }
        }
        v163 = *((uint32_t *)v9 + 1);
        v164 = v163 + 1;
        if ( v163 + 1 > *((uint32_t *)v9 + 2) )
        {
          v410 = (gameswf::RefCounted::Self *)(v163 + 1);
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v164 + (v164 >> 1));
          v163 = *((uint32_t *)v9 + 1);
          v164 = (int)(uintptr_t)(v410);
        }
        v165 = *(uint32_t *)v9 + 12 * v163;
        if ( v165 != 0 )
        {
          *(uint8_t *)v165 = 5;
          *(uint8_t *)(v165 + 1) = 0;
          *(uint32_t *)(v165 + 4) = v162;
          v374 = (gameswf::RefCounted::Self *)v164;
          gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v162);
          v164 = (int)(uintptr_t)(v374);
        }
        *((uint32_t *)v9 + 1) = v164;
        gameswf::RefCounted::dropRef((gameswf::RefCounted::Self *)v162);
        ExceptionTarget = (int)(uintptr_t)(v552);
        goto LABEL_10;
      case 0x58u:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v166 = *((uint32_t *)v9 + 1) - 1;
        v167 = *(uint32_t *)v9 + 12 * v166;
        if ( *(uint8_t *)v167 == 5 )
        {
          v313 = *(uint32_t *)(v167 + 4);
          if ( v313 != 0 )
          {
            G4_VCALL<void>(v313, 8, 45);
            v166 = *((uint32_t *)v9 + 1) - 1;
          }
        }
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, v166);
        v168 = *((gameswf::abc_def::Self **)v551 + 10);
        v375 = (gameswf::RefCounted::Self *)(*((uint32_t *)v168 + 37) + (v573[0] << 6));
        v554 = (gameswf::RefCounted::Self *)gameswf::abc_def::getMultiNamespace(v168, *((uint32_t *)v375 + 6));
        v169 = (gameswf::RefCounted::Self *)gameswf::ASClassManager::findClass(
                                        (gameswf::ASClassManager::Self *)(*((uint32_t *)v551 + 4) + 236),
                                        v554,
                                        *(const gameswf::String::Self **)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 172)
                                                                              + 16)
                                                                  + 4
                                                                  * *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 116)
                                                                              + 4
                                                                              * (*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 80)
                                                                                           + 8 * *((uint32_t *)v375 + 6)) >> 8))),
                                        true);
        v170 = *((uint32_t *)v9 + 1);
        v171 = v170 + 1;
        if ( v170 + 1 > *((uint32_t *)v9 + 2) )
        {
          v403 = (gameswf::RefCounted::Self *)(v170 + 1);
          v456 = v169;
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v171 + (v171 >> 1));
          v170 = *((uint32_t *)v9 + 1);
          v169 = v456;
          v171 = (int)(uintptr_t)(v403);
        }
        v172 = *(uint32_t *)v9 + 12 * v170;
        if ( v172 != 0 )
        {
          *(uint8_t *)v172 = 5;
          *(uint8_t *)(v172 + 1) = 0;
          *(uint32_t *)(v172 + 4) = (uint32_t)(uintptr_t)(v169);
          if ( v169 != nullptr )
          {
            v376 = (gameswf::RefCounted::Self *)v171;
            gameswf::RefCounted::addRef(v169);
            v171 = (int)(uintptr_t)(v376);
          }
        }
        *((uint32_t *)v9 + 1) = v171;
        goto LABEL_10;
      case 0x5Au:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v214 = *((uint32_t *)v486 + 1) - 1;
        if ( v214 < 0 )
        {
          v217 = nullptr;
        }
        else
        {
          v526 = v9;
          v558 = (gameswf::RefCounted::Self *)(4 * v214);
          v547 = ExceptionTarget;
          v215 = *((uint32_t *)v486 + 1) - 1;
          do
          {
            v216 = *(gameswf::RefCounted::Self **)((char *)v558 + *(uint32_t *)v486);
            if ( v216 != nullptr
              && G4_VCALL<uint8_t>(v216, 8, 59) != 0 )
            {
              gameswf::RefCounted::addRef(v216);
            }
            else
            {
              v216 = nullptr;
            }
            if ( --v215 == -1 )
              break;
            v558 = (gameswf::RefCounted::Self *)((char *)v558 - 4);
          }
          while ( v216 == nullptr );
          v217 = v216;
          v9 = v526;
          ExceptionTarget = v547;
        }
        v218 = *((uint32_t *)v9 + 1);
        v219 = v218 + 1;
        if ( v218 + 1 > *((uint32_t *)v9 + 2) )
        {
          v401 = v217;
          v454 = v218 + 1;
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v219 + (v219 >> 1));
          v218 = *((uint32_t *)v9 + 1);
          v219 = v454;
          v217 = v401;
        }
        v220 = *(uint32_t *)v9 + 12 * v218;
        if ( v220 != 0 )
        {
          *(uint8_t *)v220 = 5;
          *(uint8_t *)(v220 + 1) = 0;
          *(uint32_t *)(v220 + 4) = (uint32_t)(uintptr_t)(v217);
          if ( v217 != nullptr )
          {
            v380 = v217;
            v446 = v219;
            gameswf::RefCounted::addRef(v217);
            *((uint32_t *)v9 + 1) = v446;
            v217 = v380;
LABEL_262:
            gameswf::RefCounted::dropRef(v217);
            goto LABEL_10;
          }
          *((uint32_t *)v9 + 1) = v219;
        }
        else
        {
          *((uint32_t *)v9 + 1) = v219;
          if ( v217 != nullptr )
            goto LABEL_262;
        }
        goto LABEL_10;
      case 0x5Du:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        PropStrict = (gameswf::RefCounted::Self *)(gameswf::AS3Function::findPropStrict(
                       v551,
                       (uint32_t *)(v486),
                       v573[0],
                       *(gameswf::String::Self **)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 172) + 16)
                                           + 4 * *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 108) + 4 * v573[0]))));
        v222 = *((uint32_t *)v9 + 1);
        v223 = v222 + 1;
        if ( v222 + 1 > *((uint32_t *)v9 + 2) )
        {
          v441 = PropStrict;
          v463 = v222 + 1;
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v223 + (v223 >> 1));
          v222 = *((uint32_t *)v9 + 1);
          v223 = v463;
          PropStrict = v441;
        }
        v224 = *(uint32_t *)v9 + 12 * v222;
        if ( v224 != 0 )
        {
          *(uint8_t *)v224 = 5;
          *(uint8_t *)(v224 + 1) = 0;
          *(uint32_t *)(v224 + 4) = (uint32_t)(uintptr_t)(PropStrict);
          if ( PropStrict != nullptr )
          {
            v447 = v223;
            gameswf::RefCounted::addRef(PropStrict);
            v223 = v447;
          }
        }
        *((uint32_t *)v9 + 1) = v223;
        goto LABEL_10;
      case 0x5Eu:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v198 = (gameswf::RefCounted::Self *)(gameswf::AS3Function::findPropStrict(
                 v551,
                 (uint32_t *)(v486),
                 v573[0],
                 *(gameswf::String::Self **)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 172) + 16)
                                     + 4 * *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 108) + 4 * v573[0]))));
        v199 = *((uint32_t *)v9 + 1);
        v200 = v199 + 1;
        if ( v199 + 1 > *((uint32_t *)v9 + 2) )
        {
          v440 = v198;
          v457 = v199 + 1;
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v200 + (v200 >> 1));
          v199 = *((uint32_t *)v9 + 1);
          v200 = v457;
          v198 = v440;
        }
        v201 = *(uint32_t *)v9 + 12 * v199;
        if ( v201 != 0 )
        {
          *(uint8_t *)v201 = 5;
          *(uint8_t *)(v201 + 1) = 0;
          *(uint32_t *)(v201 + 4) = (uint32_t)(uintptr_t)(v198);
          if ( v198 != nullptr )
          {
            v445 = v200;
            gameswf::RefCounted::addRef(v198);
            v200 = v445;
          }
        }
        *((uint32_t *)v9 + 1) = v200;
        goto LABEL_10;
      case 0x60u:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v202 = *((uint32_t *)v551 + 10);
        v557 = *(uint32_t *)(*(uint32_t *)(v202 + 108) + 4 * v573[0]);
        v546 = *(gameswf::String::Self **)(*(uint32_t *)(*(uint32_t *)(v202 + 172) + 16) + 4 * v557);
        LOWORD(v620) = 0;
        v203 = (gameswf::RefCounted::Self *)(gameswf::AS3Function::findPropStrict(v551, (uint32_t *)(v486), v573[0], v546));
        LOWORD(v645) = 5;
        v646 = (char *)v203;
        if ( v203 != nullptr )
          gameswf::RefCounted::addRef(v203);
        gameswf::AS3Function::getProperty(
          (gameswf::Player::Self **)v551,
          (gameswf::ASValue::Self *)&v645,
          v557,
          v546,
          (gameswf::ASValue::Self *)&v620,
          true);
        v204 = *((uint32_t *)v9 + 1);
        v205 = v204 + 1;
        if ( v204 + 1 > *((uint32_t *)v9 + 2) )
        {
          v402 = (gameswf::RefCounted::Self *)(v204 + 1);
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v205 + (v205 >> 1));
          v204 = *((uint32_t *)v9 + 1);
          v205 = (int)(uintptr_t)(v402);
        }
        v206 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 12 * v204);
        if ( v206 != nullptr )
        {
          *(uint8_t *)v206 = 0;
          *((uint8_t *)v206 + 1) = 0;
          v378 = (gameswf::RefCounted::Self *)v205;
          gameswf::ASValue::opAssign(v206, (const gameswf::ASValue::Self *)&v620);
          v205 = (int)(uintptr_t)(v378);
        }
        *((uint32_t *)v9 + 1) = v205;
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v645);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v620);
        goto LABEL_10;
      case 0x61u:
      case 0x68u:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v207 = *(uint32_t *)(*((uint32_t *)v551 + 10) + 80);
        v208 = *((uint32_t *)v9 + 1);
        v616 = 0;
        v617 = 0;
        LOWORD(v645) = 0;
        v435 = (gameswf::RefCounted::Self *)(v207 + 8 * v573[0]);
        gameswf::ASValue::opAssign(
          (gameswf::ASValue::Self *)&v645,
          (const gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * v208 - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        if ( *(uint8_t *)v435 == 27 )
        {
          v304 = (char *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3));
          if ( (uint8_t)(*v304 - 3) <= 1u )
          {
            v356 = sub_106F530(*v304, (int)(uintptr_t)(v304 + 4));
            gameswf::String::opAssign((gameswf::String::Self *)v634, (const gameswf::String::Self *)v356);
            v305 = *((uint32_t *)v9 + 1);
            v357 = *(uint32_t *)v9 + 4 * (3 * v305 - 6);
            v306 = (gameswf::RefCounted::Self *)v634;
            if ( *(uint8_t *)v357 == 5 && (v360 = *(gameswf::ASObject::Self **)(v357 + 4)) != nullptr )
            {
              MemberIndex = gameswf::ASObject::getMemberIndex(v360, (const gameswf::String::Self *)v634);
              v305 = *((uint32_t *)v9 + 1);
              v306 = (gameswf::RefCounted::Self *)v634;
            }
            else
            {
              MemberIndex = -1;
            }
          }
          else
          {
            if ( *v304 != 5 )
              gameswf::ASValue::toString(
                (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)),
                (gameswf::String::Self *)v634);
            gameswf::ASValue::opAssign(
              (gameswf::ASValue::Self *)&v616,
              (const gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
            v305 = *((uint32_t *)v9 + 1);
            v306 = nullptr;
            MemberIndex = -1;
          }
          v399 = v306;
          gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, v305 - 1);
          v210 = v399;
        }
        else
        {
          v209 = *((uint32_t *)v551 + 10);
          MemberIndex = *(uint32_t *)(*(uint32_t *)(v209 + 108) + 4 * v573[0]);
          v210 = *(gameswf::RefCounted::Self **)(*(uint32_t *)(*(uint32_t *)(v209 + 172) + 16) + 4 * MemberIndex);
        }
        v211 = *((uint32_t *)v9 + 1);
        v212 = *(uint32_t *)v9;
        LOWORD(v620) = 0;
        v379 = v210;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v620, (const gameswf::ASValue::Self *)(v212 + 4 * (3 * v211 - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        v213 = (const gameswf::String::Self *)(v379);
        if ( v379 == nullptr )
          v213 = (const gameswf::String::Self *)v634;
        if ( (uint8_t)v620 == 5 && v621 != nullptr )
        {
          if ( v616 != 0 )
          {
            v362 = (unsigned int *)&v645;
            G4_VCALL<void>(v621, 56, &v616);
          }
          else
          {
            gameswf::ASObject::setMemberAt(v621, MemberIndex, v213, (const gameswf::ASValue::Self *)&v645);
          }
        }
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v620);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v645);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v616);
        goto LABEL_10;
      case 0x62u:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v225 = *((uint32_t *)v9 + 1);
        v226 = v573[0];
        v559 = *v485;
        v527 = v225 + 1;
        if ( v225 + 1 > *((uint32_t *)v9 + 2) )
        {
          v400 = (gameswf::RefCounted::Self *)v573[0];
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v225 + 1 + ((v225 + 1) >> 1));
          v225 = *((uint32_t *)v9 + 1);
          v226 = (int)(uintptr_t)(v400);
        }
        v227 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 12 * v225);
        if ( v227 != nullptr )
        {
          *(uint8_t *)v227 = 0;
          *((uint8_t *)v227 + 1) = 0;
          gameswf::ASValue::opAssign(v227, (gameswf::RefCounted::Self *)((char *)v559 + 12 * v226));
        }
        *((uint32_t *)v9 + 1) = v527;
        goto LABEL_10;
      case 0x63u:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        gameswf::ASValue::opAssign(
          (gameswf::RefCounted::Self *)((char *)*v485 + 12 * v573[0]),
          (const gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        goto LABEL_10;
      case 0x64u:
        v173 = **(gameswf::RefCounted::Self ***)v486;
        v174 = *((uint32_t *)v9 + 1);
        v175 = v174 + 1;
        if ( v174 + 1 > *((uint32_t *)v9 + 2) )
        {
          v404 = **(gameswf::RefCounted::Self ***)v486;
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v175 + (v175 >> 1));
          v174 = *((uint32_t *)v9 + 1);
          v173 = v404;
        }
        v176 = *(uint32_t *)v9 + 12 * v174;
        if ( v176 != 0 )
        {
          *(uint8_t *)v176 = 5;
          *(uint8_t *)(v176 + 1) = 0;
          *(uint32_t *)(v176 + 4) = (uint32_t)(uintptr_t)(v173);
          if ( v173 != nullptr )
            gameswf::RefCounted::addRef(v173);
        }
        *((uint32_t *)v9 + 1) = v175;
        ExceptionTarget = (int)(uintptr_t)(v552);
        goto LABEL_10;
      case 0x65u:
        ExceptionTarget += 2;
        v177 = *(gameswf::RefCounted::Self **)(*(uint32_t *)v486 + 4 * *((uint8_t *)v552 + v10));
        v178 = *((uint32_t *)v9 + 1);
        v179 = v178 + 1;
        if ( v178 + 1 > *((uint32_t *)v9 + 2) )
        {
          v408 = (gameswf::RefCounted::Self *)(v178 + 1);
          v459 = v177;
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v179 + (v179 >> 1));
          v178 = *((uint32_t *)v9 + 1);
          v177 = v459;
          v179 = (int)(uintptr_t)(v408);
        }
        v180 = *(uint32_t *)v9 + 12 * v178;
        if ( v180 != 0 )
        {
          *(uint8_t *)v180 = 5;
          *(uint8_t *)(v180 + 1) = 0;
          *(uint32_t *)(v180 + 4) = (uint32_t)(uintptr_t)(v177);
          if ( v177 != nullptr )
          {
            v377 = (gameswf::RefCounted::Self *)v179;
            gameswf::RefCounted::addRef(v177);
            v179 = (int)(uintptr_t)(v377);
          }
        }
        *((uint32_t *)v9 + 1) = v179;
        goto LABEL_10;
      case 0x66u:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v181 = *((uint32_t **)v551 + 10);
        v182 = (uint8_t *)(v181[20] + 8 * v573[0]);
        LOWORD(v620) = 0;
        LOWORD(v645) = 0;
        if ( *v182 == 27 )
        {
          v298 = (char *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3));
          if ( (uint8_t)(*v298 - 3) <= 1u )
          {
            v346 = sub_106F530(*v298, (int)(uintptr_t)(v298 + 4));
            gameswf::String::opAssign((gameswf::String::Self *)v634, (const gameswf::String::Self *)v346);
            v299 = *((uint32_t *)v9 + 1);
            v300 = (gameswf::RefCounted::Self *)v634;
            v565 = (gameswf::RefCounted::Self *)(*(uint32_t *)v9 + 4 * (3 * v299 - 6));
            if ( *(uint8_t *)v565 == 5 )
            {
              v347 = *((gameswf::ASObject::Self **)v565 + 1);
              if ( v347 != nullptr )
              {
                v573[0] = gameswf::ASObject::getMemberIndex(v347, (const gameswf::String::Self *)v634);
                v300 = (gameswf::RefCounted::Self *)v634;
                v299 = *((uint32_t *)v9 + 1);
              }
            }
          }
          else
          {
            gameswf::ASValue::opAssign(
              (gameswf::ASValue::Self *)&v620,
              (const gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
            v299 = *((uint32_t *)v9 + 1);
            v300 = nullptr;
          }
          v398 = v300;
          gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, v299 - 1);
          v184 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3));
          if ( *(uint8_t *)v184 == 5 )
          {
            v301 = *((uint32_t *)v184 + 1);
            if ( v301 != 0 )
            {
              if ( v398 != nullptr )
              {
                gameswf::AS3Function::getProperty(
                  (gameswf::Player::Self **)v551,
                  v184,
                  v573[0],
                  (const gameswf::String::Self *)(v398),
                  (gameswf::ASValue::Self *)&v645,
                  true);
                v184 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3));
              }
              else if ( (uint8_t)v620 != 0 )
              {
                v362 = (unsigned int *)&v645;
                G4_VCALL<void>(v301, 52, &v620);
                v184 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3));
              }
            }
          }
        }
        else
        {
          v183 = *(uint32_t *)(v181[27] + 4 * v573[0]);
          gameswf::AS3Function::getProperty(
            (gameswf::Player::Self **)v551,
            (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)),
            v183,
            *(const gameswf::String::Self **)(*(uint32_t *)(v181[43] + 16) + 4 * v183),
            (gameswf::ASValue::Self *)&v645,
            true);
          v184 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3));
        }
        gameswf::ASValue::opAssign(v184, (const gameswf::ASValue::Self *)&v645);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v645);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v620);
        goto LABEL_10;
      case 0x6Au:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v185 = *(uint32_t *)(*((uint32_t *)v551 + 10) + 80);
        LOWORD(v645) = 0;
        if ( *(uint8_t *)(v185 + 8 * v573[0]) == 27 )
        {
          v302 = *((uint32_t *)v9 + 1) - 1;
          v303 = (const gameswf::ASValue::Self *)(*(uint32_t *)v9 + 12 * v302);
          v534 = *(uint8_t *)v303;
          if ( (uint8_t)(*(uint8_t *)v303 - 3) <= 1u )
          {
            v355 = sub_106F530(v534, (int)(uintptr_t)(v303) + 4);
            gameswf::String::opAssign((gameswf::String::Self *)v634, (const gameswf::String::Self *)v355);
            v302 = *((uint32_t *)v9 + 1) - 1;
            v555 = (gameswf::RefCounted::Self *)v634;
          }
          else
          {
            v555 = nullptr;
            if ( v534 == 5 )
            {
              gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v645, v303);
              v302 = *((uint32_t *)v9 + 1) - 1;
            }
          }
          gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, v302);
        }
        else
        {
          v555 = nullptr;
        }
        v186 = *((uint32_t *)v9 + 1) - 1;
        v187 = *(uint32_t *)v9 + 12 * v186;
        v188 = 0;
        if ( *(uint8_t *)v187 == 5 )
          v188 = *(uint32_t *)(v187 + 4);
        v444 = v188;
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, v186);
        if ( v555 != nullptr )
        {
          v189 = G4_VCALL<int>(v444, 40, v555);
          v190 = *((uint32_t *)v9 + 1);
          v191 = v190 + 1;
          if ( v190 + 1 > *((uint32_t *)v9 + 2) )
          {
            v421 = (gameswf::RefCounted::Self *)(v190 + 1);
            v469 = v189;
            gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v191 + (v191 >> 1));
            v190 = *((uint32_t *)v9 + 1);
            v191 = (int)(uintptr_t)(v421);
            v189 = v469;
          }
          v192 = (uint8_t *)(*(uint32_t *)v9 + 12 * v190);
          if ( v192 != nullptr )
          {
            *v192 = 1;
            v192[1] = 0;
            v192[4] = v189;
          }
          *((uint32_t *)v9 + 1) = v191;
        }
        else if ( (uint8_t)v645 != 0 )
        {
          v568 = G4_VCALL<int>(v444, 60, &v645);
          gameswf::array_gameswf_ASValue_3ea8a1::push_back_bool_id_c12604(v9, &v568);
        }
        else
        {
          v569 = G4_VCALL<int>(v444, 40, *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 172) + 16)
                             + 4 * *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 108) + 4 * v573[0])));
          gameswf::array_gameswf_ASValue_3ea8a1::push_back_bool_id_c12604(v9, &v569);
        }
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v645);
        goto LABEL_10;
      case 0x6Cu:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v193 = (gameswf::RefCounted::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3));
        if ( *(uint8_t *)v193 != 5 )
          goto LABEL_225;
        v316 = *((gameswf::ASObject::Self **)v193 + 1);
        if ( v316 == nullptr )
          goto LABEL_225;
        if ( (uint8_t)gameswf::ASObject::getSlot(
                                v316,
                                v573[0],
                                (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3))) == 0 )
        {
          v193 = (gameswf::RefCounted::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3));
LABEL_225:
          v434 = v193;
          gameswf::ASValue::dropRefs(v193);
          *(uint8_t *)v434 = 0;
        }
        goto LABEL_10;
      case 0x6Du:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v194 = *((uint32_t *)v9 + 1);
        v556 = (gameswf::RefCounted::Self *)(*(uint32_t *)v9 + 4 * (3 * v194 - 3));
        v195 = *(uint32_t *)v9 + 4 * (3 * v194 - 6);
        v196 = nullptr;
        if ( *(uint8_t *)v195 == 5 )
          v196 = *(gameswf::ASObject::Self **)(v195 + 4);
        gameswf::ASObject::setSlot(v196, v573[0], v556);
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 2);
        goto LABEL_10;
      case 0x73u:
        v197 = (double)(int)gameswf::ASValue::toInt((gameswf::ASValue::Self *)(*(uint32_t *)v9
                                                                       + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::ASValue::setDouble((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)), v197);
        ++ExceptionTarget;
        goto LABEL_10;
      case 0x74u:
        v108 = (double)(unsigned int)gameswf::ASValue::toInt((gameswf::ASValue::Self *)(*(uint32_t *)v9
                                                                                + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::ASValue::setDouble((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)), v108);
        ++ExceptionTarget;
        goto LABEL_10;
      case 0x75u:
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::ASValue::setDouble((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)), nan_arg);
        ++ExceptionTarget;
        goto LABEL_10;
      case 0x76u:
        v109 = gameswf::ASValue::toBool((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::ASValue::setBool((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)), v109);
        ++ExceptionTarget;
        goto LABEL_10;
      case 0x80u:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v110 = gameswf::AS3Function::findPropStrict(
                 v551,
                 (uint32_t *)(v486),
                 v573[0],
                 *(gameswf::String::Self **)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 172) + 16)
                                     + 4 * *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v551 + 10) + 108) + 4 * v573[0])));
        if ( v110 != nullptr )
          G4_VCALL<void>(v110, 8, 5);
        goto LABEL_10;
      case 0x85u:
        v111 = (const gameswf::String::Self *)gameswf::ASValue::toString(
                                          (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)),
                                          (gameswf::String::Self *)v634);
        LOWORD(v645) = 0;
        v646 = nullptr;
        gameswf::ASValue::setString((gameswf::ASValue::Self *)&v645, v111);
        v622[0] = 0;
        v622[1] = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v622, (const gameswf::ASValue::Self *)&v645);
        gameswf::ASValue::opAssign(
          (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)),
          (const gameswf::ASValue::Self *)v622);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v622);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v645);
        ++ExceptionTarget;
        goto LABEL_10;
      case 0x87u:
        v112 = *((uint32_t *)v9 + 1) - 1;
        v113 = *(uint32_t *)v9 + 12 * v112;
        v114 = nullptr;
        if ( *(uint8_t *)v113 == 5 )
        {
          v114 = *(gameswf::ASClass::Self **)(v113 + 4);
          if ( v114 != nullptr )
          {
            v307 = G4_VCALL<uint8_t>(v114, 8, 45) == 0;
            v112 = *((uint32_t *)v9 + 1) - 1;
            if ( v307 )
              v114 = nullptr;
          }
        }
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, v112);
        isInstanceOf = gameswf::AS3Function::isInstanceOf(
                         v551,
                         (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)),
                         v114);
        ExceptionTarget = (int)(uintptr_t)(v552);
        if ( isInstanceOf == 0 )
          gameswf::ASValue::setObject((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)), nullptr);
        goto LABEL_10;
      case 0x90u:
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        v116 = *((uint32_t *)v9 + 1);
        v117 = *(uint32_t *)v9;
        v623[0] = 2;
        v623[1] = 0;
        v624 = -(double)nan_arg;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v117 + 4 * (3 * v116 - 3)), (const gameswf::ASValue::Self *)v623);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v623);
        ++ExceptionTarget;
        goto LABEL_10;
      case 0x91u:
      case 0xC0u:
        v118 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3));
        gameswf::ASValue::toNumber(v118);
        gameswf::ASValue::setDouble(v118, (double)nan_arg + 1.0);
        ExceptionTarget = (int)(uintptr_t)(v552);
        goto LABEL_10;
      case 0x93u:
      case 0xC1u:
        v119 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3));
        gameswf::ASValue::toNumber(v119);
        gameswf::ASValue::setDouble(v119, (double)nan_arg - 1.0);
        ExceptionTarget = (int)(uintptr_t)(v552);
        goto LABEL_10;
      case 0x96u:
        v120 = gameswf::ASValue::toBool((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::ASValue::setBool((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)), v120 != 1);
        ++ExceptionTarget;
        goto LABEL_10;
      case 0x97u:
        v121 = (double)~gameswf::ASValue::toInt((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::ASValue::setDouble((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)), v121);
        ++ExceptionTarget;
        goto LABEL_10;
      case 0xA0u:
        v122 = *((uint32_t *)v9 + 1);
        v123 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * v122 - 3));
        if ( (uint8_t)(*(uint8_t *)v123 - 3) > 1u
          && (uint8_t)(*(uint8_t *)(*(uint32_t *)v9 + 4 * (3 * v122 - 6)) - 3) > 1u )
        {
          gameswf::ASValue::toNumber(v123);
          v124 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6));
          gameswf::ASValue::toNumber(v124);
          gameswf::ASValue::setDouble(v124, (double)nan_arg + (double)nan_arg);
          gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
          ExceptionTarget = (int)(uintptr_t)(v552);
          goto LABEL_10;
        }
        v648 = -1;
        LOWORD(v645) = 1;
        v649 = 127;
        v650 |= 1u;
        v327 = (const gameswf::String::Self *)gameswf::ASValue::toString(
                                          (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)),
                                          (gameswf::String::Self *)v634);
        gameswf::String::opAssign((gameswf::String::Self *)&v645, v327);
        v328 = (const gameswf::String::Self *)gameswf::ASValue::toString(
                                          (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)),
                                          (gameswf::String::Self *)v634);
        gameswf::String::opAddAssign((gameswf::String::Self *)&v645, v328);
        gameswf::ASValue::setString(
          (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)),
          (const gameswf::String::Self *)&v645);
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        ++ExceptionTarget;
        if ( (uint8_t)v645 == 0xFF && (v650 & 1) != 0 )
          goto LABEL_351;
        goto LABEL_10;
      case 0xA1u:
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        v125 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6));
        gameswf::ASValue::toNumber(v125);
        gameswf::ASValue::setDouble(v125, (double)nan_arg - (double)nan_arg);
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        ExceptionTarget = (int)(uintptr_t)(v552);
        goto LABEL_10;
      case 0xA2u:
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        v126 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6));
        gameswf::ASValue::toNumber(v126);
        gameswf::ASValue::setDouble(v126, (double)nan_arg * (double)nan_arg);
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        ExceptionTarget = (int)(uintptr_t)(v552);
        goto LABEL_10;
      case 0xA3u:
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        v127 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6));
        gameswf::ASValue::toNumber(v127);
        gameswf::ASValue::setDouble(v127, (double)nan_arg / (double)nan_arg);
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        ExceptionTarget = (int)(uintptr_t)(v552);
        goto LABEL_10;
      case 0xA4u:
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        v128 = (double)nan_arg;
        if ( (double)nan_arg == 0.0 )
        {
          nan_arg = 0.0;
        }
        else
        {
          do
            v128 = __FPREM__(v128, (double)nan_arg);
          while ( v130 != 0 );
          nan_arg = v128;
        }
        gameswf::ASValue::setDouble((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)), nan_arg);
        ++ExceptionTarget;
        goto LABEL_10;
      case 0xA5u:
        v131 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)));
        v132 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        v625[0] = 2;
        v625[1] = 0;
        v133 = (double)(v131 << v132);
        v134 = *((uint32_t *)v9 + 1);
        v135 = *(uint32_t *)v9;
        v626 = v133;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v135 + 4 * (3 * v134 - 6)), (const gameswf::ASValue::Self *)v625);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v625);
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        ExceptionTarget = (int)(uintptr_t)(v552);
        goto LABEL_10;
      case 0xA6u:
        v136 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)));
        v137 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        v627[0] = 2;
        v627[1] = 0;
        v138 = (double)(v136 >> v137);
        v139 = *((uint32_t *)v9 + 1);
        v140 = *(uint32_t *)v9;
        v628 = v138;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v140 + 4 * (3 * v139 - 6)), (const gameswf::ASValue::Self *)v627);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v627);
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        ExceptionTarget = (int)(uintptr_t)(v552);
        goto LABEL_10;
      case 0xA8u:
        v544 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        v141 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        gameswf::ASValue::setDouble(
          (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)),
          (double)(v544 & v141));
        ExceptionTarget = (int)(uintptr_t)(v552);
        goto LABEL_10;
      case 0xABu:
        v142 = gameswf::ASValue::opEq(
                 (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)),
                 (const gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        v629[4] = v142;
        v143 = *((uint32_t *)v9 + 1);
        v144 = *(uint32_t *)v9;
        v629[0] = 1;
        v629[1] = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v144 + 4 * (3 * v143 - 3)), (const gameswf::ASValue::Self *)v629);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v629);
        ExceptionTarget = (int)(uintptr_t)(v552);
        goto LABEL_10;
      case 0xADu:
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)));
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        v145 = *((uint32_t *)v9 + 1);
        v146 = *(uint32_t *)v9;
        v630[4] = (double)nan_arg > (double)nan_arg;
        v630[0] = 1;
        v630[1] = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v146 + 4 * (3 * v145 - 3)), (const gameswf::ASValue::Self *)v630);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v630);
        ++ExceptionTarget;
        goto LABEL_10;
      case 0xAEu:
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)));
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        v147 = *((uint32_t *)v9 + 1);
        v148 = *(uint32_t *)v9;
        v631[4] = (double)nan_arg >= (double)nan_arg;
        v631[0] = 1;
        v631[1] = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v148 + 4 * (3 * v147 - 3)), (const gameswf::ASValue::Self *)v631);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v631);
        ++ExceptionTarget;
        goto LABEL_10;
      case 0xAFu:
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)));
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        v149 = *((uint32_t *)v9 + 1);
        v150 = *(uint32_t *)v9;
        v632[4] = (double)nan_arg > (double)nan_arg;
        v632[0] = 1;
        v632[1] = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v150 + 4 * (3 * v149 - 3)), (const gameswf::ASValue::Self *)v632);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v632);
        ++ExceptionTarget;
        goto LABEL_10;
      case 0xB0u:
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)));
        gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        v151 = *((uint32_t *)v9 + 1);
        v152 = *(uint32_t *)v9;
        v633[4] = (double)nan_arg >= (double)nan_arg;
        v633[0] = 1;
        v633[1] = 0;
        gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(v152 + 4 * (3 * v151 - 3)), (const gameswf::ASValue::Self *)v633);
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v633);
        ++ExceptionTarget;
        goto LABEL_10;
      case 0xB3u:
        v153 = *((uint32_t *)v9 + 1);
        v154 = *(uint32_t *)v9;
        v155 = nullptr;
        v156 = *(uint32_t *)v9 + 4 * (3 * v153 - 3);
        if ( *(uint8_t *)v156 == 5 )
        {
          v155 = *(gameswf::ASClass::Self **)(v156 + 4);
          if ( v155 != nullptr )
          {
            v307 = G4_VCALL<uint8_t>(v155, 8, 45) == 0;
            v154 = *(uint32_t *)v9;
            v153 = *((uint32_t *)v9 + 1);
            if ( v307 )
              v155 = nullptr;
          }
        }
        v157 = gameswf::AS3Function::isInstanceOf(v551, (gameswf::ASValue::Self *)(v154 + 4 * (3 * v153 - 6)), v155);
        gameswf::ASValue::setBool((gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 6)), v157);
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        ExceptionTarget = (int)(uintptr_t)(v552);
        goto LABEL_10;
      case 0xC2u:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        v433 = (gameswf::RefCounted::Self *)((char *)*v485 + 12 * v573[0]);
        gameswf::ASValue::toNumber(v433);
        gameswf::ASValue::setDouble(v433, (double)nan_arg + 1.0);
        goto LABEL_10;
      case 0xD0u:
      case 0xD1u:
      case 0xD2u:
      case 0xD3u:
        v545 = *v485;
        v158 = *((uint32_t *)v9 + 1);
        v159 = v158 + 1;
        if ( v158 + 1 > *((uint32_t *)v9 + 2) )
        {
          v460 = v11;
          gameswf::array_gameswf_ASValue_3ea8a1::reserve(v9, v159 + (v159 >> 1));
          v158 = *((uint32_t *)v9 + 1);
          v11 = v460;
        }
        v160 = (gameswf::ASValue::Self *)(*(uint32_t *)v9 + 12 * v158);
        if ( v160 != nullptr )
        {
          *(uint8_t *)v160 = 0;
          *((uint8_t *)v160 + 1) = 0;
          gameswf::ASValue::opAssign(v160, (gameswf::RefCounted::Self *)((char *)v545 + 12 * (v11 & 3)));
        }
        *((uint32_t *)v9 + 1) = v159;
        ExceptionTarget = (int)(uintptr_t)(v552);
        goto LABEL_10;
      case 0xD4u:
      case 0xD5u:
      case 0xD6u:
      case 0xD7u:
        gameswf::ASValue::opAssign(
          (gameswf::RefCounted::Self *)((char *)*v485 + 12 * (v11 & 3)),
          (const gameswf::ASValue::Self *)(*(uint32_t *)v9 + 4 * (3 * *((uint32_t *)v9 + 1) - 3)));
        gameswf::array_gameswf_ASValue_3ea8a1::resize(v9, *((uint32_t *)v9 + 1) - 1);
        ++ExceptionTarget;
        goto LABEL_10;
      case 0xEFu:
        v161 = ExceptionTarget
             + 2
             + gameswf::readVU30((gameswf::Self *)&v572, (int *)(ExceptionTarget + 2 + v10), (const uint8_t *)v362)
             + 1;
        ExceptionTarget = gameswf::readVU30((gameswf::Self *)v573, (int *)(*((uint32_t *)v551 + 21) + v161), v363) + v161;
        goto LABEL_10;
      case 0xF0u:
      case 0xF1u:
        ExceptionTarget = (int)(uintptr_t)(v552)
                        + gameswf::readVU30((gameswf::Self *)v573, (int *)((char *)v552 + v10), (const uint8_t *)v362);
        goto LABEL_10;
      default:
        gameswf::logMsg((gameswf::Self *)"TODO opcode 0x%02X\n", (const char *)v11);
        goto LABEL_4;
    }
  }
}



// ============================================================================
// Address:   0x1079320 (size: 988 bytes)
// Symbol:    _ZN7gameswf11AS3FunctionclERKNS_12FunctionCallE
// Demangled: gameswf::AS3Function::operator()(gameswf::FunctionCall const&)
// ============================================================================
int gameswf::AS3Function::opCall(long double a1, int a2, int a3)
{
  gameswf::RefCounted::Self *v3;
  unsigned int v4;
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
  int i;
  int v17;
  int v18;
  int v19;
  gameswf::ASValue::Self *v20;
  int v21;
  typedef gameswf::ASValue::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint32_t _g4_t_v32[3];
  typedef gameswf::RefCounted::Self **_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef gameswf::RefCounted::Self *_g4_t_v38[2];
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint32_t _g4_t_v42[4];
  typedef int _g4_t_v43;
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (12u + sizeof(_g4_t_v22)) > _g4_s0 ? (12u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (52u + sizeof(_g4_t_v23)) > _g4_s1 ? (52u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v24)) > _g4_s2 ? (52u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v25)) > _g4_s3 ? (52u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v26)) > _g4_s4 ? (56u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v27)) > _g4_s5 ? (60u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v28)) > _g4_s6 ? (64u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v29)) > _g4_s7 ? (68u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v30)) > _g4_s8 ? (72u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v31)) > _g4_s9 ? (72u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v32)) > _g4_s10 ? (80u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v33)) > _g4_s11 ? (92u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v34)) > _g4_s12 ? (96u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v35)) > _g4_s13 ? (100u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v36)) > _g4_s14 ? (104u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v37)) > _g4_s15 ? (108u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (172u + sizeof(_g4_t_v38)) > _g4_s16 ? (172u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (180u + sizeof(_g4_t_v39)) > _g4_s17 ? (180u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (184u + sizeof(_g4_t_v40)) > _g4_s18 ? (184u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (188u + sizeof(_g4_t_v41)) > _g4_s19 ? (188u + sizeof(_g4_t_v41)) : _g4_s19,
    _g4_s21 = (284u + sizeof(_g4_t_v42)) > _g4_s20 ? (284u + sizeof(_g4_t_v42)) : _g4_s20,
    _g4_s22 = (300u + sizeof(_g4_t_v43)) > _g4_s21 ? (300u + sizeof(_g4_t_v43)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 92u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 96u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 100u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 104u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 108u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 172u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 180u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 184u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 188u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 284u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 300u);

  v38[0] = nullptr;
  v38[1] = nullptr;
  v39 = 0;
  v40 = 0;
  v3 = *(gameswf::RefCounted::Self **)(a3 + 4);
  v28 = *(uint32_t *)(a3 + 12);
  v4 = *(uint16_t *)(a2 + 70) + 1;
  if ( v4 <= 8 )
  {
    v39 = 8;
    v38[0] = (gameswf::RefCounted::Self *)&v41;
    v40 = 1;
  }
  gameswf::array_gameswf_ASValue_3ea8a1::resize((gameswf::array<gameswf::ASValue::Self> *)v38, v4);
  LOWORD(v32[0]) = 5;
  v32[1] = (uint32_t)(uintptr_t)(v3);
  v5 = a3;
  if ( v3 != nullptr )
  {
    gameswf::RefCounted::addRef(v3);
    v5 = a3;
  }
  v23 = v5;
  gameswf::ASValue::opAssign(v38[0], (const gameswf::ASValue::Self *)v32);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v32);
  v6 = v23;
  v7 = *(uint32_t *)(v23 + 16);
  v29 = *(uint16_t *)(a2 + 74);
  if ( v29 <= v7 )
    v7 = *(uint16_t *)(a2 + 74);
  v30 = v7;
  if ( v7 > 0 )
  {
    v8 = 12;
    v9 = 0;
    do
    {
      v10 = *(uint32_t *)(v6 + 20) - v9++;
      v24 = v6;
      v22 = (gameswf::ASValue::Self *)((gameswf::RefCounted::Self *)((char *)v38[0] + v8));
      v8 += 12;
      gameswf::ASValue::opAssign(v22, (const gameswf::ASValue::Self *)(**(uint32_t **)(v6 + 12) + 12 * v10));
      v6 = v24;
    }
    while ( v9 != v30 );
  }
  if ( (*(uint8_t *)(a2 + 63) & 8) != 0 )
  {
    v11 = *(uint32_t *)(v6 + 16);
    if ( v29 > v11 )
    {
      v27 = v6;
      v17 = v11 + 1;
      v31 = 8 * (v11 + ((int)(*(uint32_t *)(a2 + 80) << 8) >> 8) - v29);
      v18 = a2;
      v19 = 12 * (v11 + 1);
      while ( 1 )
      {
        v20 = (gameswf::ASValue::Self *)((gameswf::RefCounted::Self *)((char *)v38[0] + v19));
        v19 += 12;
        v25 = v17;
        v26 = v18;
        gameswf::abc_def::getConstant(
          *(uint32_t *)(v18 + 40),
          *(uint8_t *)(*(uint32_t *)(v18 + 76) + v31 + 4),
          *(uint32_t *)(*(uint32_t *)(v18 + 76) + v31),
          v20);
        v31 += 8;
        v18 = v26;
        if ( v29 <= v25 )
          break;
        v17 = v25 + 1;
      }
      v6 = v27;
    }
  }
  memset(v42, 0, sizeof(v42));
  if ( (unsigned int)*(uint16_t *)(a2 + 68) + 1 <= 8 )
  {
    v42[2] = 8;
    v42[0] = (uint32_t)(uintptr_t)(&v43);
    v42[3] = 1;
  }
  v33 = nullptr;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  if ( (unsigned int)*(uint16_t *)(a2 + 72) + 1 <= 0x10 )
  {
    v35 = 16;
    v33 = (gameswf::RefCounted::Self **)&v37;
    v36 = 1;
  }
  v12 = *(uint32_t *)(a2 + 100);
  if ( v12 != 0 )
    G4_VCALL<void>(v12, 104, v6);
  else
    gameswf::AS3Function::execute(
      a1,
      (gameswf::AS3Function::Self *)a2,
      v38,
      (gameswf::String::Self *)v42,
      (gameswf::array<gameswf::smart_ptr<gameswf::ASObject::Self>> *)&v33,
      *(gameswf::ASValue::Self **)v6,
      v28);
  v13 = v34;
  if ( v34 <= 0 )
  {
    if ( v34 < 0 )
    {
      v21 = v34;
      do
      {
        if ( &v33[v21] != nullptr )
          v33[v21] = nullptr;
        ++v21;
        ++v13;
      }
      while ( v13 != 0 );
    }
  }
  else
  {
    v14 = v34;
    for ( i = 0; i != v14; ++i )
    {
      if ( v33[i] != nullptr )
        gameswf::RefCounted::dropRef(v33[i]);
    }
  }
  v34 = 0;
  if ( v36 == 0 )
  {
    v35 = 0;
    if ( v33 != nullptr )
      gameswf::free_internal((gameswf::Self *)v33);
    v33 = nullptr;
  }
  gameswf::array_gameswf_ASValue_3ea8a1::resize((gameswf::array<gameswf::ASValue::Self> *)v42, 0);
  gameswf::array_gameswf_ASValue_3ea8a1::reserve((gameswf::array<gameswf::ASValue::Self> *)v42, 0);
  gameswf::array_gameswf_ASValue_3ea8a1::resize((gameswf::array<gameswf::ASValue::Self> *)v38, 0);
  return (int)(uintptr_t)(gameswf::array_gameswf_ASValue_3ea8a1::reserve((gameswf::array<gameswf::ASValue::Self> *)v38, 0));
}
// ----------------------------------------------------------------------------
// Function: gameswf::AS3Function::is  (binary VA: 0x1079850)
// Original: gameswf::AS3Function::is
// ----------------------------------------------------------------------------
bool gameswf::AS3Function::is(gameswf::AS3Function::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 8 && a2 != 5 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::AS3Function::getMemberByName  (binary VA: 0x10799e0)
// Original: gameswf::AS3Function::getMemberByName
// ----------------------------------------------------------------------------
int gameswf::AS3Function::getMemberByName(gameswf::AS3Function::Self *self, const gameswf::StringI::Self *a2, gameswf::ASValue::Self *a3)
{
  char builtin;
  int v4;

  builtin = gameswf::get_builtin(7, (int)(uintptr_t)(a2), a3);
  v4 = 1;
  if ( builtin == 0 )
    return gameswf::ASObject::getMemberByName(self, a2, a3);
  return v4;
}


