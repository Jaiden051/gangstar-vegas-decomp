#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASDisplayObjectContainer.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::Destroy  (binary VA: 0x10e9b70)
// Original: gameswf::ASDisplayObjectContainer::~ASDisplayObjectContainer
// ----------------------------------------------------------------------------
void gameswf::ASDisplayObjectContainer::Destroy(gameswf::ASDisplayObjectContainer::Self *self)
{
  gameswf::Self *v1;
  int v2;
  int v3;
  int i;
  uint32_t *v5;
  int v6;
  int j;
  int v8;
  gameswf::Self *v9;
  int v10;
  uint32_t *v11;

  v1 = *((gameswf::Self **)self + 57);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090408);
  if ( v1 != nullptr )
  {
    v2 = *((uint32_t *)v1 + 1);
    if ( v2 >= 0 )
    {
      v3 = 8;
      for ( i = 0; i <= v2; ++i )
      {
        v5 = (uint32_t *)((char *)v1 + v3);
        if ( *(uint32_t *)((char *)v1 + v3) != -2 )
        {
          *v5 = -2;
          v5[1] = 0;
          v1 = *((gameswf::Self **)self + 57);
        }
        v3 += 16;
      }
    }
    gameswf::free_internal(v1);
    *((uint32_t *)self + 57) = 0;
  }
  v6 = *((uint32_t *)self + 54);
  if ( v6 <= 0 )
  {
    if ( v6 < 0 )
    {
      v10 = 4 * v6;
      do
      {
        v11 = (uint32_t *)(*((uint32_t *)self + 53) + v10);
        if ( v11 != nullptr )
          *v11 = 0;
        v10 += 4;
        ++v6;
      }
      while ( v6 != 0 );
    }
  }
  else
  {
    for ( j = 0; j != v6; ++j )
    {
      if ( *(uint32_t *)(*((uint32_t *)self + 53) + 4 * j) != 0 )
        gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(*((uint32_t *)self + 53) + 4 * j));
    }
  }
  v8 = *((uint32_t *)self + 56);
  *((uint32_t *)self + 54) = 0;
  if ( v8 == 0 )
  {
    v9 = *((gameswf::Self **)self + 53);
    *((uint32_t *)self + 55) = 0;
    if ( v9 != nullptr )
      gameswf::free_internal(v9);
    *((uint32_t *)self + 53) = 0;
  }
  gameswf::Character::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::Destroy_ea10e9cb0  (binary VA: 0x10e9cb0)
// Original: gameswf::ASDisplayObjectContainer::~ASDisplayObjectContainer
// ----------------------------------------------------------------------------
void gameswf::ASDisplayObjectContainer::Destroy_ea10e9cb0(gameswf::ASDisplayObjectContainer::Self *self)
{
  gameswf::ASDisplayObjectContainer::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::newOp  (binary VA: 0x114d3e0)
// Original: gameswf::ASDisplayObjectContainer::newOp
// ----------------------------------------------------------------------------
int gameswf::ASDisplayObjectContainer::newOp()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::init  (binary VA: 0x114d3f0)
// Original: gameswf::ASDisplayObjectContainer::init
// ----------------------------------------------------------------------------
void gameswf::ASDisplayObjectContainer::init()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::updateWorldMatrix  (binary VA: 0x114d830)
// Original: gameswf::ASDisplayObjectContainer::updateWorldMatrix
// ----------------------------------------------------------------------------
uint32_t gameswf::ASDisplayObjectContainer::updateWorldMatrix(gameswf::ASDisplayObjectContainer::Self *self)
{
  uint32_t result;
  int v2;
  int i;

  result = gameswf::Character::updateWorldMatrix(self);
  v2 = *((uint32_t *)self + 54);
  if ( v2 > 0 )
  {
    for ( i = 0; i != v2; ++i )
    {
      result = *(uint32_t *)(*((uint32_t *)self + 53) + 4 * i);
      if ( result != 0 )
        result = (*(int (**)(uint32_t))(*(uint32_t *)result + 276))(*(uint32_t *)(*((uint32_t *)self + 53) + 4 * i));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::updateWorldCxForm  (binary VA: 0x114d890)
// Original: gameswf::ASDisplayObjectContainer::updateWorldCxForm
// ----------------------------------------------------------------------------
uint32_t * gameswf::ASDisplayObjectContainer::updateWorldCxForm(gameswf::ASDisplayObjectContainer::Self *self)
{
  uint32_t *result;
  int v2;
  int i;

  result = gameswf::Character::updateWorldCxForm(self);
  v2 = *((uint32_t *)self + 54);
  if ( v2 > 0 )
  {
    for ( i = 0; i != v2; ++i )
    {
      result = *(uint32_t **)(*((uint32_t *)self + 53) + 4 * i);
      if ( result != nullptr )
        result = (uint32_t *)(*(int (**)(uint32_t))(*result + 280))(*(uint32_t *)(*((uint32_t *)self + 53) + 4 * i));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::clearRefs  (binary VA: 0x114de50)
// Original: gameswf::ASDisplayObjectContainer::clearRefs
// ----------------------------------------------------------------------------
int gameswf::ASDisplayObjectContainer::clearRefs(gameswf::ASDisplayObjectContainer::Self *self, int a2)
{
  int result;
  int v3;
  int i;

  result = gameswf::Character::clearRefs(self, a2);
  v3 = *((uint32_t *)self + 54);
  if ( v3 > 0 )
  {
    for ( i = 0; i != v3; ++i )
    {
      result = *(uint32_t *)(*((uint32_t *)self + 53) + 4 * i);
      if ( result != 0 )
        result = G4_VCALL<int>(result, 72, a2);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::thisAlive  (binary VA: 0x114dec0)
// Original: gameswf::ASDisplayObjectContainer::thisAlive
// ----------------------------------------------------------------------------
uint32_t * gameswf::ASDisplayObjectContainer::thisAlive(gameswf::ASDisplayObjectContainer::Self *self)
{
  uint32_t *result;
  int v2;
  int i;

  result = gameswf::Character::thisAlive(self);
  v2 = *((uint32_t *)self + 54);
  if ( v2 > 0 )
  {
    for ( i = 0; i != v2; ++i )
    {
      while ( 1 )
      {
        result = *(uint32_t **)(*((uint32_t *)self + 53) + 4 * i);
        if ( result != nullptr && *(uint32_t *)(*((uint32_t *)self + 4) + 100) > result[5] )
          break;
        if ( ++i == v2 )
          return result;
      }
      result = (uint32_t *)G4_VCALL<int>(result, 76);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::removeChild  (binary VA: 0x114e3d0)
// Original: gameswf::ASDisplayObjectContainer::removeChild
// ----------------------------------------------------------------------------
int gameswf::ASDisplayObjectContainer::removeChild(int a1)
{
  int v1;
  int result;
  int v3;
  gameswf::Character::Self *v4;

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 4) == 0 )
    v1 = 0;
  result = *(uint32_t *)(a1 + 16);
  if ( result > 0 )
  {
    v3 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
    v4 = nullptr;
    if ( *(uint8_t *)v3 == 5 )
    {
      v4 = *(gameswf::Character::Self **)(v3 + 4);
      if ( v4 != nullptr && G4_VCALL<uint8_t>(v4, 8, 1) == 0 )
        v4 = nullptr;
    }
    return gameswf::DisplayList::removeDisplayObject((gameswf::DisplayList::Self *)(v1 + 212), v4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::advance  (binary VA: 0x114e480)
// Original: gameswf::ASDisplayObjectContainer::advance
// ----------------------------------------------------------------------------
int gameswf::ASDisplayObjectContainer::advance(gameswf::ASDisplayObjectContainer::Self *self, float a2)
{
  int result;

  result = gameswf::DisplayList::advance((gameswf::ASDisplayObjectContainer::Self *)((char *)self + 212), a2);
  if ( (uint8_t)result != 0 )
    *((uint8_t *)self + 150) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::swapChildren  (binary VA: 0x114e4d0)
// Original: gameswf::ASDisplayObjectContainer::swapChildren
// ----------------------------------------------------------------------------
void gameswf::ASDisplayObjectContainer::swapChildren(int a1)
{
  int v1;
  int v2;
  gameswf::Character::Self *v3;
  int v4;
  int v5;
  gameswf::Character::Self *v6;
  int v7;
  bool v8;

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 4) == 0 )
    v1 = 0;
  if ( *(int *)(a1 + 16) > 1 )
  {
    v2 = *(uint32_t *)(a1 + 20);
    v3 = nullptr;
    v4 = **(uint32_t **)(a1 + 12);
    v5 = v4 + 12 * v2;
    if ( *(uint8_t *)v5 == 5
      && (v3 = *(gameswf::Character::Self **)(v5 + 4)) != nullptr
      && (v8 = (*(uint8_t (**)(gameswf::Character::Self *, int))(*(uint32_t *)v3 + 8))(v3, 1) == 0,
          v2 = *(uint32_t *)(a1 + 20),
          v4 = **(uint32_t **)(a1 + 12),
          v8) )
    {
      v3 = nullptr;
      v7 = v4 + 4 * (3 * v2 - 3);
      v6 = nullptr;
      if ( *(uint8_t *)v7 == 5 )
      {
LABEL_12:
        v6 = *(gameswf::Character::Self **)(v7 + 4);
        if ( v6 != nullptr
          && G4_VCALL<uint8_t>(v6, 8, 1) == 0 )
        {
          v6 = nullptr;
        }
      }
    }
    else
    {
      v6 = nullptr;
      v7 = v4 + 4 * (3 * v2 - 3);
      if ( *(uint8_t *)v7 == 5 )
        goto LABEL_12;
    }
    gameswf::DisplayList::swap_characters((gameswf::DisplayList::Self *)(v1 + 212), v3, v6);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::notifyStageChanged  (binary VA: 0x114e5d0)
// Original: gameswf::ASDisplayObjectContainer::notifyStageChanged
// ----------------------------------------------------------------------------
int gameswf::ASDisplayObjectContainer::notifyStageChanged(gameswf::ASDisplayObjectContainer::Self *self, bool a2)
{
  gameswf::ASDisplayObjectContainer::Self *v2;
  int v3;
  int v4;
  int v5;
  gameswf::ASDisplayObjectContainer::Self *v7;
  uint8_t v8;

  v8 = gameswf::Character::notifyStageChanged(self, a2);
  if ( v8 != 0 && *((int *)self + 54) > 0 )
  {
    v2 = self;
    v3 = 0;
    v4 = *((uint32_t *)self + 54);
    do
    {
      v5 = *(uint32_t *)(*((uint32_t *)v2 + 53) + 4 * v3++);
      v7 = v2;
      G4_VCALL<void>(v5, 348, a2);
      v2 = v7;
    }
    while ( v3 != v4 );
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::contains  (binary VA: 0x114ea40)
// Original: gameswf::ASDisplayObjectContainer::contains
// ----------------------------------------------------------------------------
int gameswf::ASDisplayObjectContainer::contains(int a1)
{
  int v1;
  const gameswf::Character::Self *v2;
  int v3;
  int IndexOf;

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 4) == 0 )
    v1 = 0;
  if ( *(int *)(a1 + 16) <= 0 )
    return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 0);
  v2 = nullptr;
  v3 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v3 == 5 )
  {
    v2 = *(const gameswf::Character::Self **)(v3 + 4);
    if ( v2 != nullptr
      && G4_VCALL<uint8_t>(v2, 8, 1) == 0 )
    {
      v2 = nullptr;
    }
  }
  IndexOf = gameswf::DisplayList::getIndexOf((gameswf::DisplayList::Self *)(v1 + 212), v2);
  return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, IndexOf >= 0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::getChildAt  (binary VA: 0x114ecc0)
// Original: gameswf::ASDisplayObjectContainer::getChildAt
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASDisplayObjectContainer::getChildAt(int a1)
{
  uint32_t *v1;
  int v2;
  gameswf::ASObject::Self *v3;

  v1 = *(uint32_t **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v1 + 8))(*(uint32_t *)(a1 + 4), 4) == 0 )
    v1 = nullptr;
  if ( *(int *)(a1 + 16) <= 0 )
    return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, nullptr);
  v2 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v3 = nullptr;
  if ( v2 >= 0 && v2 < v1[54] )
    v3 = *(gameswf::ASObject::Self **)(v1[53] + 4 * v2);
  return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::getChildIndex  (binary VA: 0x114f150)
// Original: gameswf::ASDisplayObjectContainer::getChildIndex
// ----------------------------------------------------------------------------
int gameswf::ASDisplayObjectContainer::getChildIndex(int a1)
{
  int v1;
  int v2;
  const gameswf::Character::Self *v3;
  double IndexOf; // xmm0_8

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 4) == 0 )
    v1 = 0;
  if ( *(int *)(a1 + 16) <= 0 )
    return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, -1.0);
  v2 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  v3 = nullptr;
  if ( *(uint8_t *)v2 == 5 )
  {
    v3 = *(const gameswf::Character::Self **)(v2 + 4);
    if ( v3 != nullptr
      && G4_VCALL<uint8_t>(v3, 8, 1) == 0 )
    {
      v3 = nullptr;
    }
  }
  IndexOf = (double)gameswf::DisplayList::getIndexOf((gameswf::DisplayList::Self *)(v1 + 212), v3);
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, IndexOf);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::getChildByName  (binary VA: 0x1150420)
// Original: gameswf::ASDisplayObjectContainer::getChildByName
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASDisplayObjectContainer::getChildByName(int a1)
{
  int v1;
  int v2;
  const gameswf::String::Self *v3;
  gameswf::ASObject::Self *CharacterByName;
  int v6;

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 4) == 0 )
    v1 = 0;
  if ( *(int *)(a1 + 16) <= 0 )
    return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, nullptr);
  v2 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v2 == 3 || *(uint8_t *)v2 == 4 )
  {
    v3 = *(const gameswf::String::Self **)(v2 + 4);
  }
  else
  {
    v3 = (const gameswf::String::Self *)&byte_20D6378;
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
    {
      byte_20D6378 = 1;
      v6 = dword_20D6388 | 0x7FFFFF;
      byte_20D6379 = 0;
      dword_20D6388 = v6;
      BYTE2(dword_20D6388) = BYTE2(v6) & 0x7F;
      HIBYTE(dword_20D6388) = HIBYTE(v6) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
    }
  }
  CharacterByName = (gameswf::ASObject::Self *)gameswf::DisplayList::getCharacterByName(
                                           (gameswf::DisplayList::Self *)(v1 + 212),
                                           v3);
  return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, CharacterByName);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::swapChildrenAt  (binary VA: 0x1150790)
// Original: gameswf::ASDisplayObjectContainer::swapChildrenAt
// ----------------------------------------------------------------------------
void gameswf::ASDisplayObjectContainer::swapChildrenAt(int a1)
{
  uint32_t *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  gameswf::RefCounted::Self **v6;
  gameswf::RefCounted::Self *v7;
  gameswf::RefCounted::Self *v8;
  gameswf::RefCounted::Self **v9;
  gameswf::RefCounted::Self *v10;
  gameswf::RefCounted::Self **v11;
  gameswf::RefCounted::Self **v12;
  int v13;
  int v14;

  v1 = *(uint32_t **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*v1 + 8))(*(uint32_t *)(a1 + 4), 4) == 0 )
    v1 = nullptr;
  if ( *(int *)(a1 + 16) > 1 )
  {
    v2 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v3 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
    if ( v2 >= 0 )
    {
      v4 = v1[54];
      if ( v2 < v4 && v3 >= 0 && v3 < v4 )
      {
        v5 = v1[53];
        v13 = 4 * v3;
        v6 = (gameswf::RefCounted::Self **)(v5 + 4 * v3);
        v7 = nullptr;
        v8 = *v6;
        if ( *v6 != nullptr )
        {
          gameswf::RefCounted::addRef(*v6);
          v5 = v1[53];
          v6 = (gameswf::RefCounted::Self **)(v5 + v13);
          v7 = *(gameswf::RefCounted::Self **)(v5 + v13);
        }
        v14 = 4 * v2;
        v9 = (gameswf::RefCounted::Self **)(v5 + 4 * v2);
        v10 = *v9;
        if ( *v9 != v7 )
        {
          if ( v7 != nullptr )
          {
            v11 = v6;
            gameswf::RefCounted::dropRef(v7);
            v6 = v11;
          }
          *v6 = v10;
          if ( v10 != nullptr )
            gameswf::RefCounted::addRef(v10);
          v9 = (gameswf::RefCounted::Self **)(v1[53] + v14);
          v10 = *v9;
        }
        if ( v10 == v8 )
        {
          if ( v8 == nullptr )
            return;
          goto LABEL_22;
        }
        if ( v10 != nullptr )
        {
          v12 = v9;
          gameswf::RefCounted::dropRef(v10);
          v9 = v12;
        }
        *v9 = v8;
        if ( v8 != nullptr )
        {
          gameswf::RefCounted::addRef(v8);
LABEL_22:
          gameswf::RefCounted::dropRef(v8);
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::createClass  (binary VA: 0x1152360)
// Original: gameswf::ASDisplayObjectContainer::createClass
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASDisplayObjectContainer::createClass(gameswf::ASDisplayObjectContainer::Self *self)
{
  gameswf::Player::Self *v2;
  gameswf::ASClass::Self *Class;
  gameswf::Self **v4;
  uint8_t v5[12];
  uint8_t v6[12];
  uint8_t v7[12];
  uint8_t v8[12];
  uint8_t v9[12];
  uint8_t v10[12];
  uint8_t v11[12];
  uint8_t v12[12];
  uint8_t v13[12];
  uint8_t v14[12];
  uint8_t v15[12];
  uint8_t v16[20];
  uint8_t v17[20];
  uint8_t v18[20];
  uint8_t v19[20];
  uint8_t v20[20];
  uint8_t v21[20];
  uint8_t v22[20];
  uint8_t v23[20];
  uint8_t v24[20];
  uint8_t v25[20];
  uint8_t v26[20];
  uint8_t v27[48];

  v2 = *((gameswf::Player::Self **)self + 4);
  sub_776320((gameswf::String::Self *)v16, (gameswf::Self *)"DisplayObject");
  Class = (gameswf::ASClass::Self *)gameswf::ASPackage::findClass(self, (const gameswf::String::Self *)v16, true);
  sub_776320((gameswf::String::Self *)v17, (gameswf::Self *)"DisplayObjectContainer");
  v5[0] = 0;
  v5[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v5, (int)(uintptr_t)(gameswf::ASDisplayObjectContainer::init));
  v4 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v4,
    v2,
    Class,
    (const gameswf::String::Self *)v17,
    (gameswf::ASObject::Self *(*)(gameswf::Player::Self *))gameswf::ASDisplayObjectContainer::newOp,
    (const gameswf::ASValue::Self *)v5,
    nullptr);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v5);
  sub_59CE50((int)(uintptr_t)(v17));
  sub_59CE50((int)(uintptr_t)(v16));
  v6[0] = 0;
  v6[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v6, (int)(uintptr_t)((int (*)(int))gameswf::ASDisplayObjectContainer::addChild));
  sub_776320((gameswf::String::Self *)v18, (gameswf::Self *)"addChild");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v4, (const gameswf::String::Self *)v18, (const gameswf::ASValue::Self *)v6);
  sub_59CE50((int)(uintptr_t)(v18));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v6);
  v7[0] = 0;
  v7[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v7, (int)(uintptr_t)(gameswf::ASDisplayObjectContainer::addChildAt));
  sub_776320((gameswf::String::Self *)v19, (gameswf::Self *)"addChildAt");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v4, (const gameswf::String::Self *)v19, (const gameswf::ASValue::Self *)v7);
  sub_59CE50((int)(uintptr_t)(v19));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v7);
  v8[0] = 0;
  v8[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v8, (int)(uintptr_t)((int (*)(int))gameswf::ASDisplayObjectContainer::removeChild));
  sub_776320((gameswf::String::Self *)v20, (gameswf::Self *)"removeChild");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v4, (const gameswf::String::Self *)v20, (const gameswf::ASValue::Self *)v8);
  sub_59CE50((int)(uintptr_t)(v20));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v8);
  v9[0] = 0;
  v9[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v9, (int)gameswf::ASDisplayObjectContainer::removeChildAt);
  sub_776320((gameswf::String::Self *)v21, (gameswf::Self *)"removeChildAt");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v4, (const gameswf::String::Self *)v21, (const gameswf::ASValue::Self *)v9);
  sub_59CE50((int)(uintptr_t)(v21));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v9);
  v10[0] = 0;
  v10[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v10, (int)(uintptr_t)(gameswf::ASDisplayObjectContainer::getChildAt));
  sub_776320((gameswf::String::Self *)v22, (gameswf::Self *)"getChildAt");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v4, (const gameswf::String::Self *)v22, (const gameswf::ASValue::Self *)v10);
  sub_59CE50((int)(uintptr_t)(v22));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v10);
  v11[0] = 0;
  v11[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v11, (int)(uintptr_t)(gameswf::ASDisplayObjectContainer::getChildByName));
  sub_776320((gameswf::String::Self *)v23, (gameswf::Self *)"getChildByName");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v4, (const gameswf::String::Self *)v23, (const gameswf::ASValue::Self *)v11);
  sub_59CE50((int)(uintptr_t)(v23));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v11);
  v12[0] = 0;
  v12[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v12, (int)(uintptr_t)((int (*)(int))gameswf::ASDisplayObjectContainer::getChildIndex));
  sub_776320((gameswf::String::Self *)v24, (gameswf::Self *)"getChildIndex");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v4, (const gameswf::String::Self *)v24, (const gameswf::ASValue::Self *)v12);
  sub_59CE50((int)(uintptr_t)(v24));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v12);
  v13[0] = 0;
  v13[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v13, (int)(uintptr_t)(gameswf::ASDisplayObjectContainer::contains));
  sub_776320((gameswf::String::Self *)v25, (gameswf::Self *)"contains");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v4, (const gameswf::String::Self *)v25, (const gameswf::ASValue::Self *)v13);
  sub_59CE50((int)(uintptr_t)(v25));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v13);
  v14[0] = 0;
  v14[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v14, (int)(uintptr_t)(gameswf::ASDisplayObjectContainer::swapChildren));
  sub_776320((gameswf::String::Self *)v26, (gameswf::Self *)"swapChildren");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v4, (const gameswf::String::Self *)v26, (const gameswf::ASValue::Self *)v14);
  sub_59CE50((int)(uintptr_t)(v26));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v14);
  v15[0] = 0;
  v15[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v15, (int)(uintptr_t)(gameswf::ASDisplayObjectContainer::swapChildrenAt));
  sub_776320((gameswf::String::Self *)v27, (gameswf::Self *)"swapChildrenAt");
  gameswf::ASClass::builtinMethod((gameswf::ASClass::Self *)v4, (const gameswf::String::Self *)v27, (const gameswf::ASValue::Self *)v15);
  sub_59CE50((int)(uintptr_t)(v27));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::getTransform  (binary VA: 0x1153300)
// Original: gameswf::ASDisplayObjectContainer::getTransform
// ----------------------------------------------------------------------------
int gameswf::ASDisplayObjectContainer::getTransform(const gameswf::Matrix::Self **self, gameswf::Transform::Self *a2)
{
  int result;
  float v3; // xmm1_4
  float v4; // xmm1_4
  typedef float _g4_t_v5;
  typedef float _g4_t_v6;
  typedef float _g4_t_v7;
  typedef float _g4_t_v8;
  typedef uint32_t _g4_t_v9[19];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v7)) > _g4_s2 ? (8u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v8)) > _g4_s3 ? (12u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v9)) > _g4_s4 ? (16u + sizeof(_g4_t_v9)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  gameswf::Transform::Transform((gameswf::Transform::Self *)v9, *(self + 17));
  std::memcpy(a2, v9, 64);
  result = (int)(uintptr_t)(*(self + 19));
  if ( result != 0 )
  {
    *((uint32_t *)a2 + 10) = *(uint32_t *)(result + 112);
    *((uint32_t *)a2 + 11) = *((uint32_t *)*(self + 19) + 27);
    result = (int)(uintptr_t)(*(self + 19));
    v3 = *(float *)(result + 120);
    if ( v3 != 0.0 )
    {
      v5 = 0.0;
      v6 = 0.0;
      v7 = 0.0;
      v8 = 0.0;
      gameswf::Quaternion::setAngleAxis((gameswf::Quaternion::Self *)&v5, v3, 0.0, 1.0, 0.0);
      gameswf::Transform::postRotateQuat(a2, v5, v6, v7, v8);
      result = (int)(uintptr_t)(*(self + 19));
    }
    v4 = *(float *)(result + 116);
    if ( v4 != 0.0 )
    {
      v5 = 0.0;
      v6 = 0.0;
      v7 = 0.0;
      v8 = 0.0;
      gameswf::Quaternion::setAngleAxis((gameswf::Quaternion::Self *)&v5, v4, 1.0, 0.0, 0.0);
      return gameswf::Transform::postRotateQuat(a2, v5, v6, v7, v8);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::getBoundingBox  (binary VA: 0x11534e0)
// Original: gameswf::ASDisplayObjectContainer::getBoundingBox
// ----------------------------------------------------------------------------
uint8_t * gameswf::ASDisplayObjectContainer::getBoundingBox(const gameswf::Matrix::Self **a1, uint32_t *a2, int a3)
{
  uint8_t *result;
  int v4;
  int i;
  typedef uint32_t _g4_t_v6[16];
  typedef uint32_t _g4_t_v7[23];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (64u + sizeof(_g4_t_v7)) > _g4_s1 ? (64u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 64u);

  memset(v6, 0, sizeof(v6));
  memset(v7, 0, 0x40u);
  v6[15] = 1065353216;
  v6[10] = 1065353216;
  v6[5] = 1065353216;
  v6[0] = 1065353216;
  v7[15] = 1065353216;
  v7[10] = 1065353216;
  v7[5] = 1065353216;
  v7[0] = 1065353216;
  gameswf::ASDisplayObjectContainer::getTransform(a1, (gameswf::Transform::Self *)v7);
  v6[0] = *a2;
  v6[1] = a2[1];
  v6[2] = a2[2];
  v6[3] = a2[3];
  v6[4] = a2[4];
  v6[5] = a2[5];
  v6[6] = a2[6];
  v6[7] = a2[7];
  v6[8] = a2[8];
  v6[9] = a2[9];
  v6[10] = a2[10];
  v6[11] = a2[11];
  v6[12] = a2[12];
  v6[13] = a2[13];
  v6[14] = a2[14];
  v6[15] = a2[15];
  result = (uint8_t *)gameswf::Transform::postMultiply((gameswf::Transform::Self *)v6, (const gameswf::Transform::Self *)v7);
  v4 = (int)(uintptr_t)(a1[54]);
  if ( v4 > 0 )
  {
    for ( i = 0; i != v4; ++i )
    {
      while ( 1 )
      {
        result = *((uint8_t **)a1[53] + i);
        if ( result[148] != 0 )
          break;
        if ( ++i == v4 )
          return result;
      }
      result = (uint8_t *)G4_VCALL<int>(result, 300, v6, a3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::getWorldTransform  (binary VA: 0x1153660)
// Original: gameswf::ASDisplayObjectContainer::getWorldTransform
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ASDisplayObjectContainer::getWorldTransform(gameswf::ASDisplayObjectContainer::Self *self, gameswf::Transform::Self *a2)
{
  gameswf::ASDisplayObjectContainer::Self *v2;
  int v3;
  gameswf::Self *v4;
  int v5;
  int v6;
  gameswf::Self *v7;
  char *v8;
  gameswf::ASDisplayObjectContainer::Self *v9;
  int v10;
  int v11;
  gameswf::Transform::Self *v12;
  int v13;
  unsigned int v14;
  uint16_t *v15;
  gameswf::Self *result;
  int v17;
  const gameswf::Transform::Self *v18;
  int v19;
  char *v20;
  uint16_t *v21;
  uint16_t *v22;
  int v23;
  gameswf::Transform::Self *v24;
  unsigned int v25;
  uint16_t *v26;
  typedef int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef uint32_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[64];
  typedef gameswf::Self *_g4_t_v31;
  typedef gameswf::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  enum : size_t {
    _g4_s0 = 1264u,
    _g4_s1 = (4u + sizeof(_g4_t_v27)) > _g4_s0 ? (4u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v28)) > _g4_s1 ? (8u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v29)) > _g4_s2 ? (16u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v30)) > _g4_s3 ? (80u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (144u + sizeof(_g4_t_v31)) > _g4_s4 ? (144u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (148u + sizeof(_g4_t_v32)) > _g4_s5 ? (148u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (152u + sizeof(_g4_t_v33)) > _g4_s6 ? (152u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (156u + sizeof(_g4_t_v34)) > _g4_s7 ? (156u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (160u + sizeof(_g4_t_v35)) > _g4_s8 ? (160u + sizeof(_g4_t_v35)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 144u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 148u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 152u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 156u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 160u);

  v2 = self;
  v32 = nullptr;
  v31 = (gameswf::Self *)&v35;
  v33 = 16;
  v34 = 1;
  if ( self != nullptr )
  {
    while ( 1 )
    {
      memset(v29, 0, sizeof(v29));
      v29[15] = 1065353216;
      v29[10] = 1065353216;
      v29[5] = 1065353216;
      v3 = *((uint32_t *)v2 + 19);
      v29[0] = 1065353216;
      if ( v3 != 0 && *(uint8_t *)(v3 + 96) != 0 )
      {
        gameswf::ASDisplayObjectContainer::getTransform((const gameswf::Matrix::Self **)v2, (gameswf::Transform::Self *)v29);
      }
      else
      {
        gameswf::Transform::Transform((gameswf::Transform::Self *)v30, *((const gameswf::Matrix::Self **)v2 + 17));
        std::memcpy(v29, v30, sizeof(v29));
      }
      v4 = v32;
      v5 = v33;
      v6 = (int)(uintptr_t)(v32) + 1;
      if ( (int)(uintptr_t)(v32) + 1 <= v33 || v34 != 0 )
      {
        v7 = v31;
      }
      else
      {
        v23 = v6 + (v6 >> 1);
        v33 = v23;
        if ( v23 != 0 )
        {
          v7 = v31 != nullptr
             ? (gameswf::Self *)gameswf::realloc_internal(v31, v23 << 6, v5 << 6)
             : (gameswf::Self *)gameswf::malloc_internal(v23 << 6);
          v31 = v7;
          v4 = v32;
        }
        else
        {
          if ( v31 != nullptr )
          {
            gameswf::free_internal(v31);
            v4 = v32;
          }
          v31 = nullptr;
          v7 = nullptr;
        }
      }
      v8 = (char *)v7 + 64 * (uint32_t)(uintptr_t)(v4);
      if ( v8 != nullptr )
        std::memcpy(v8, v29, 64);
      v9 = *((gameswf::ASDisplayObjectContainer::Self **)v2 + 14);
      v32 = (gameswf::Self *)v6;
      if ( v9 == nullptr )
        break;
      if ( *(uint8_t *)(*((uint32_t *)v2 + 13) + 2) == 0 )
      {
        sub_7E5ED0((gameswf::Self **)v2 + 13, nullptr);
        v10 = (int)(uintptr_t)(v32);
        *((uint32_t *)v2 + 14) = 0;
        v27 = v10;
        v11 = v10;
        goto LABEL_13;
      }
      v2 = v9;
    }
    v27 = v6;
    v11 = v6;
LABEL_13:
    v12 = a2;
    v13 = v11 - 1;
    v14 = 64;
    if ( ((uint8_t)(uintptr_t)a2 & 1) != 0 )
    {
      *(uint8_t *)a2 = 0;
      v12 = (gameswf::Transform::Self *)((char *)a2 + 1);
      LOBYTE(v14) = 63;
    }
    if ( ((uint8_t)(uintptr_t)v12 & 2) != 0 )
    {
      *(uint16_t *)v12 = 0;
      v14 -= 2;
      v12 = (gameswf::Transform::Self *)((char *)v12 + 2);
    }
    memset(v12, 0, 4 * (v14 >> 2));
    v15 = (uint16_t *)((char *)v12 + 4 * (v14 >> 2));
    if ( (v14 & 2) != 0 )
      *v15++ = 0;
    if ( (v14 & 1) != 0 )
      *(uint8_t *)v15 = 0;
    result = (gameswf::Self *)(a2);
    *((uint32_t *)a2 + 15) = 1065353216;
    *((uint32_t *)a2 + 10) = 1065353216;
    *((uint32_t *)a2 + 5) = 1065353216;
    *(uint32_t *)a2 = 1065353216;
    if ( v13 >= 0 )
    {
      v17 = v13 << 6;
      do
      {
        --v13;
        v18 = (const gameswf::Transform::Self *)((gameswf::Self *)((char *)v31 + v17));
        v17 -= 64;
        gameswf::Transform::postMultiply(a2, v18);
      }
      while ( v13 != -1 );
      result = v32;
      v27 = (int)(uintptr_t)(v32);
    }
    if ( v27 < 0 )
    {
      result = nullptr;
      v19 = v27 << 6;
      do
      {
        v20 = (char *)v31 + v19;
        if ( (gameswf::Self *)((char *)v31 + v19) != nullptr )
        {
          v21 = (uint16_t *)((char *)v31 + v19);
          v28 = 64;
          if ( ((uint8_t)(uintptr_t)v20 & 1) != 0 )
          {
            *v20 = 0;
            v21 = (uint16_t *)(v20 + 1);
            v28 = 63;
          }
          if ( ((uint8_t)(uintptr_t)v21 & 2) != 0 )
          {
            *v21++ = 0;
            v28 -= 2;
          }
          memset(v21, 0, 4 * (v28 >> 2));
          v22 = &v21[2 * (v28 >> 2)];
          if ( (v28 & 2) != 0 )
            *v22++ = 0;
          if ( (v28 & 1) != 0 )
            *(uint8_t *)v22 = 0;
          *((uint32_t *)v20 + 15) = 1065353216;
          *((uint32_t *)v20 + 10) = 1065353216;
          *((uint32_t *)v20 + 5) = 1065353216;
          *(uint32_t *)v20 = 1065353216;
        }
        v19 += 64;
        ++v27;
      }
      while ( v27 != 0 );
    }
  }
  else
  {
    v24 = a2;
    v25 = 64;
    if ( ((uint8_t)(uintptr_t)a2 & 1) != 0 )
    {
      *(uint8_t *)a2 = 0;
      v24 = (gameswf::Transform::Self *)((char *)a2 + 1);
      LOBYTE(v25) = 63;
    }
    if ( ((uint8_t)(uintptr_t)v24 & 2) != 0 )
    {
      *(uint16_t *)v24 = 0;
      v25 -= 2;
      v24 = (gameswf::Transform::Self *)((char *)v24 + 2);
    }
    memset(v24, 0, 4 * (v25 >> 2));
    v26 = (uint16_t *)((char *)v24 + 4 * (v25 >> 2));
    if ( (v25 & 2) != 0 )
      *v26++ = 0;
    if ( (v25 & 1) != 0 )
      *(uint8_t *)v26 = 0;
    result = (gameswf::Self *)(a2);
    *((uint32_t *)a2 + 15) = 1065353216;
    *((uint32_t *)a2 + 10) = 1065353216;
    *((uint32_t *)a2 + 5) = 1065353216;
    *(uint32_t *)a2 = 1065353216;
  }
  v32 = nullptr;
  if ( v34 == 0 )
  {
    result = v31;
    v33 = 0;
    if ( v31 != nullptr )
      return (gameswf::Self *)gameswf::free_internal(v31);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::updateChildTransform  (binary VA: 0x1153bb0)
// Original: gameswf::ASDisplayObjectContainer::updateChildTransform
// ----------------------------------------------------------------------------
int gameswf::ASDisplayObjectContainer::updateChildTransform(gameswf::ASDisplayObjectContainer::Self *self)
{
  int result;
  int i;
  gameswf::ASDisplayObjectContainer::Self *v3;
  int v4;

  result = *((uint32_t *)self + 54);
  if ( result > 0 )
  {
    for ( i = 0; i < result; ++i )
    {
      v3 = *(gameswf::ASDisplayObjectContainer::Self **)(*((uint32_t *)self + 53) + 4 * i);
      if ( v3 != nullptr )
      {
        if ( G4_VCALL<uint8_t>(v3, 8, 4) != 0 )
        {
          v4 = *((uint32_t *)v3 + 19);
          if ( v4 != 0 && *(uint8_t *)(v4 + 96) != 0 )
          {
            *(uint8_t *)(v4 + 96) = 0;
            gameswf::ASDisplayObjectContainer::setTransform(v3);
          }
          gameswf::ASDisplayObjectContainer::updateChildTransform(v3);
        }
        result = *((uint32_t *)self + 54);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::setTransform  (binary VA: 0x1153c40)
// Original: gameswf::ASDisplayObjectContainer::setTransform
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::ASDisplayObjectContainer::setTransform(gameswf::Self **self)
{
  gameswf::Self *result;
  int v2;
  int v3;
  int v4;
  int v5;
  gameswf::Self *v6;
  int v7;
  int v8;
  uint16_t *v9;
  int v10;
  uint16_t *v11;
  int v12;
  int v13;
  uint16_t *v14;
  unsigned int v15;
  uint16_t *v16;
  int v17;
  unsigned int v18;

  result = (gameswf::Self *)self;
  v2 = (int)(uintptr_t)(*(self + 19));
  if ( v2 == 0 )
  {
    v13 = opNew(0x94u);
    v14 = (uint16_t *)(v13 + 32);
    v2 = v13;
    *(uint32_t *)v13 = 1065353216;
    *(uint32_t *)(v13 + 8) = 1065353216;
    *(uint32_t *)(v13 + 16) = 1065353216;
    *(uint32_t *)(v13 + 24) = 1065353216;
    *(uint32_t *)(v13 + 4) = 0;
    *(uint32_t *)(v13 + 12) = 0;
    *(uint32_t *)(v13 + 20) = 0;
    *(uint32_t *)(v13 + 28) = 0;
    v15 = 24;
    if ( ((v13 + 32) & 1) != 0 )
    {
      *(uint8_t *)(v13 + 32) = 0;
      v14 = (uint16_t *)(v13 + 33);
      LOWORD(v15) = 23;
    }
    if ( ((uint8_t)(uintptr_t)v14 & 2) != 0 )
    {
      *v14 = 0;
      v15 -= 2;
      ++v14;
    }
    memset(v14, 0, 4 * (v15 >> 2));
    v16 = &v14[2 * (v15 >> 2)];
    if ( (v15 & 2) != 0 )
      *v16++ = 0;
    if ( (v15 & 1) != 0 )
      *(uint8_t *)v16 = 0;
    v17 = *(uint32_t *)(v13 + 92);
    *(uint32_t *)(v2 + 32) = 1065353216;
    v17 |= 0x7FFFFFu;
    *(uint32_t *)(v2 + 48) = 1065353216;
    *(uint32_t *)(v2 + 92) = v17;
    *(uint32_t *)(v2 + 56) = 0;
    *(uint8_t *)(v2 + 94) = BYTE2(v17) & 0x7F;
    *(uint8_t *)(v2 + 95) = HIBYTE(v17) | 1;
    result = (gameswf::Self *)self;
    *(uint32_t *)(v2 + 60) = 0;
    *(uint32_t *)(v2 + 64) = 0;
    *(uint32_t *)(v2 + 68) = 0;
    *(uint32_t *)(v2 + 72) = 0;
    *(uint8_t *)(v2 + 76) = 1;
    *(uint8_t *)(v2 + 77) = 0;
    *(uint8_t *)(v2 + 96) = 0;
    *(uint8_t *)(v2 + 97) = 0;
    *(uint8_t *)(v2 + 98) = 0;
    *(uint32_t *)(v2 + 100) = 0;
    *(uint32_t *)(v2 + 104) = 1065353216;
    *(uint32_t *)(v2 + 108) = 0;
    *(uint32_t *)(v2 + 112) = 1065353216;
    *(uint32_t *)(v2 + 116) = 0;
    *(uint32_t *)(v2 + 120) = 0;
    *(uint32_t *)(v2 + 124) = 0;
    *(uint32_t *)(v2 + 128) = 0;
    *(uint32_t *)(v2 + 132) = 0;
    *(uint32_t *)(v2 + 136) = 0;
    *(uint32_t *)(v2 + 140) = 0;
    *(uint32_t *)(v2 + 144) = 0;
    *(self + 19) = (gameswf::Self *)v2;
  }
  if ( *(uint8_t *)(v2 + 96) == 0 )
  {
    *(uint8_t *)(v2 + 96) = 1;
    v3 = (int)(uintptr_t)(*(self + 14));
    if ( v3 == 0 )
      goto LABEL_32;
    if ( *((uint8_t *)*(self + 13) + 2) != 0 )
    {
      v4 = *(uint32_t *)(v3 + 76);
      *(uint8_t *)(v3 + 249) = 1;
      if ( v4 == 0 || *(uint8_t *)(v4 + 96) == 0 )
      {
        do
        {
          result = *(gameswf::Self **)(v3 + 56);
          if ( result == nullptr )
            goto LABEL_32;
          if ( *(uint8_t *)(*(uint32_t *)(v3 + 52) + 2) == 0 )
          {
            result = sub_7E5ED0((gameswf::Self **)(v3 + 52), nullptr);
            *(uint32_t *)(v3 + 56) = 0;
            goto LABEL_32;
          }
          v3 = *(uint32_t *)(v3 + 56);
          v5 = *((uint32_t *)result + 19);
          *(uint8_t *)(v3 + 249) = 1;
        }
        while ( v5 == 0 || *(uint8_t *)(v5 + 96) == 0 );
      }
      v6 = *(self + 14);
      if ( v6 != nullptr )
      {
        result = *(self + 13);
        if ( *((uint8_t *)result + 2) != 0 )
        {
          if ( v6 != (gameswf::Self *)v3 )
          {
LABEL_15:
            v7 = *((uint32_t *)v6 + 19);
            if ( v7 == 0 )
              goto LABEL_21;
            while ( 1 )
            {
              *(uint8_t *)(v7 + 96) = 1;
              result = *((gameswf::Self **)v6 + 14);
              if ( result != nullptr )
                break;
LABEL_30:
              while ( 1 )
              {
                v6 = nullptr;
LABEL_20:
                v7 = *((uint32_t *)v6 + 19);
                if ( v7 != 0 )
                  break;
LABEL_21:
                v8 = opNew(0x94u);
                v9 = (uint16_t *)(v8 + 32);
                v10 = v8;
                *(uint32_t *)v8 = 1065353216;
                *(uint32_t *)(v8 + 8) = 1065353216;
                *(uint32_t *)(v8 + 16) = 1065353216;
                *(uint32_t *)(v8 + 24) = 1065353216;
                *(uint32_t *)(v8 + 4) = 0;
                *(uint32_t *)(v8 + 12) = 0;
                *(uint32_t *)(v8 + 20) = 0;
                *(uint32_t *)(v8 + 28) = 0;
                v18 = 24;
                if ( ((v8 + 32) & 1) != 0 )
                {
                  *(uint8_t *)(v8 + 32) = 0;
                  v9 = (uint16_t *)(v8 + 33);
                  v18 = 23;
                }
                if ( ((uint8_t)(uintptr_t)v9 & 2) != 0 )
                {
                  *v9++ = 0;
                  v18 -= 2;
                }
                memset(v9, 0, 4 * (v18 >> 2));
                v11 = &v9[2 * (v18 >> 2)];
                if ( (v18 & 2) != 0 )
                  *v11++ = 0;
                if ( (v18 & 1) != 0 )
                  *(uint8_t *)v11 = 0;
                v12 = *(uint32_t *)(v8 + 92);
                *(uint8_t *)(v10 + 96) = 0;
                v12 |= 0x7FFFFFu;
                *(uint32_t *)(v10 + 32) = 1065353216;
                *(uint32_t *)(v10 + 92) = v12;
                *(uint32_t *)(v10 + 48) = 1065353216;
                *(uint32_t *)(v10 + 56) = 0;
                *(uint32_t *)(v10 + 60) = 0;
                *(uint32_t *)(v10 + 64) = 0;
                *(uint32_t *)(v10 + 68) = 0;
                *(uint32_t *)(v10 + 72) = 0;
                *(uint8_t *)(v10 + 76) = 1;
                *(uint8_t *)(v10 + 77) = 0;
                *(uint8_t *)(v10 + 94) = BYTE2(v12) & 0x7F;
                *(uint8_t *)(v10 + 95) = HIBYTE(v12) | 1;
                *(uint8_t *)(v10 + 97) = 0;
                *(uint8_t *)(v10 + 98) = 0;
                *(uint32_t *)(v10 + 100) = 0;
                *(uint32_t *)(v10 + 104) = 1065353216;
                *(uint32_t *)(v10 + 108) = 0;
                *(uint32_t *)(v10 + 112) = 1065353216;
                *(uint32_t *)(v10 + 116) = 0;
                *(uint32_t *)(v10 + 120) = 0;
                *(uint32_t *)(v10 + 124) = 0;
                *(uint32_t *)(v10 + 128) = 0;
                *(uint32_t *)(v10 + 132) = 0;
                *(uint32_t *)(v10 + 136) = 0;
                *(uint32_t *)(v10 + 140) = 0;
                *(uint32_t *)(v10 + 144) = 0;
                *((uint32_t *)v6 + 19) = v10;
                *(uint8_t *)(v10 + 96) = 1;
                result = *((gameswf::Self **)v6 + 14);
                if ( result != nullptr )
                  goto LABEL_17;
              }
            }
LABEL_17:
            if ( *(uint8_t *)(*((uint32_t *)v6 + 13) + 2) == 0 )
            {
              sub_7E5ED0((gameswf::Self **)v6 + 13, nullptr);
              *((uint32_t *)v6 + 14) = 0;
              goto LABEL_30;
            }
            if ( result != (gameswf::Self *)v3 )
            {
              v6 = result;
              goto LABEL_20;
            }
          }
LABEL_32:
          if ( *((uint8_t *)self + 249) != 0 )
            return (gameswf::Self *)gameswf::ASDisplayObjectContainer::updateChildTransform((gameswf::ASDisplayObjectContainer::Self *)self);
          return result;
        }
        sub_7E5ED0(self + 13, nullptr);
        *(self + 14) = nullptr;
      }
      v6 = nullptr;
      goto LABEL_15;
    }
    result = sub_7E5ED0(self + 13, nullptr);
    *(self + 14) = nullptr;
    goto LABEL_32;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::setStandardMember  (binary VA: 0x1154110)
// Original: gameswf::ASDisplayObjectContainer::setStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASDisplayObjectContainer::setStandardMember(long double a1, __m128 a2, gameswf::Character::Self *a3, int a4, gameswf::ASValue::Self *a5)
{
  int v6;
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  int v11;
  uint16_t *v12;
  uint16_t *v13;
  int v14;
  int v15;
  uint16_t *v16;
  uint16_t *v17;
  int v18;
  int v19;
  uint16_t *v20;
  uint16_t *v21;
  int v22;
  int v23;
  uint16_t *v24;
  uint16_t *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;

  if ( a4 == 62 )
  {
    *((uint8_t *)a3 + 248) = gameswf::ASValue::toBool(a5);
    return 1;
  }
  else if ( a4 < 62 || (unsigned int)(a4 - 99) > 3 )
  {
    return gameswf::Character::setStandardMember(a1, a2, a3, a4, (char **)a5);
  }
  else
  {
    gameswf::ASDisplayObjectContainer::setTransform((gameswf::Self **)a3);
    v6 = *((uint32_t *)a3 + 19);
    switch ( a4 )
    {
      case 'e':
        if ( v6 == 0 )
        {
          v19 = opNew(0x94u);
          v20 = (uint16_t *)(v19 + 32);
          v6 = v19;
          *(uint32_t *)v19 = 1065353216;
          *(uint32_t *)(v19 + 8) = 1065353216;
          *(uint32_t *)(v19 + 16) = 1065353216;
          *(uint32_t *)(v19 + 24) = 1065353216;
          *(uint32_t *)(v19 + 4) = 0;
          *(uint32_t *)(v19 + 12) = 0;
          *(uint32_t *)(v19 + 20) = 0;
          *(uint32_t *)(v19 + 28) = 0;
          v33 = 24;
          if ( ((v19 + 32) & 1) != 0 )
          {
            *(uint8_t *)(v19 + 32) = 0;
            v20 = (uint16_t *)(v19 + 33);
            v33 = 23;
          }
          if ( ((uint8_t)(uintptr_t)(v20) & 2) != 0 )
          {
            *v20++ = 0;
            v33 -= 2;
          }
          memset(v20, 0, 4 * (v33 >> 2));
          v21 = &v20[2 * (v33 >> 2)];
          if ( (v33 & 2) != 0 )
            *v21++ = 0;
          if ( (v33 & 1) != 0 )
            *(uint8_t *)v21 = 0;
          v22 = *(uint32_t *)(v19 + 92);
          *(uint32_t *)(v6 + 32) = 1065353216;
          v22 |= 0x7FFFFFu;
          *(uint32_t *)(v6 + 48) = 1065353216;
          *(uint32_t *)(v6 + 92) = v22;
          *(uint32_t *)(v6 + 56) = 0;
          *(uint32_t *)(v6 + 60) = 0;
          *(uint32_t *)(v6 + 64) = 0;
          *(uint32_t *)(v6 + 68) = 0;
          *(uint32_t *)(v6 + 72) = 0;
          *(uint8_t *)(v6 + 76) = 1;
          *(uint8_t *)(v6 + 77) = 0;
          *(uint8_t *)(v6 + 94) = BYTE2(v22) & 0x7F;
          *(uint16_t *)(v6 + 95) = HIBYTE(v22) | 1;
          *(uint8_t *)(v6 + 97) = 0;
          *(uint8_t *)(v6 + 98) = 0;
          *(uint32_t *)(v6 + 100) = 0;
          *(uint32_t *)(v6 + 104) = 1065353216;
          *(uint32_t *)(v6 + 108) = 0;
          *(uint32_t *)(v6 + 112) = 1065353216;
          *(uint32_t *)(v6 + 116) = 0;
          *(uint32_t *)(v6 + 120) = 0;
          *(uint32_t *)(v6 + 124) = 0;
          *(uint32_t *)(v6 + 128) = 0;
          *(uint32_t *)(v6 + 132) = 0;
          *(uint32_t *)(v6 + 136) = 0;
          *(uint32_t *)(v6 + 140) = 0;
          *(uint32_t *)(v6 + 144) = 0;
          *((uint32_t *)a3 + 19) = v6;
        }
        v29 = v6;
        v9 = gameswf::ASValue::toNumber(a5);
        *(float *)(v29 + 116) = v9;
        break;
      case 'f':
        if ( v6 == 0 )
        {
          v23 = opNew(0x94u);
          v24 = (uint16_t *)(v23 + 32);
          v6 = v23;
          *(uint32_t *)v23 = 1065353216;
          *(uint32_t *)(v23 + 8) = 1065353216;
          *(uint32_t *)(v23 + 16) = 1065353216;
          *(uint32_t *)(v23 + 24) = 1065353216;
          *(uint32_t *)(v23 + 4) = 0;
          *(uint32_t *)(v23 + 12) = 0;
          *(uint32_t *)(v23 + 20) = 0;
          *(uint32_t *)(v23 + 28) = 0;
          v34 = 24;
          if ( ((v23 + 32) & 1) != 0 )
          {
            *(uint8_t *)(v23 + 32) = 0;
            v24 = (uint16_t *)(v23 + 33);
            v34 = 23;
          }
          if ( ((uint8_t)(uintptr_t)(v24) & 2) != 0 )
          {
            *v24++ = 0;
            v34 -= 2;
          }
          memset(v24, 0, 4 * (v34 >> 2));
          v25 = &v24[2 * (v34 >> 2)];
          if ( (v34 & 2) != 0 )
            *v25++ = 0;
          if ( (v34 & 1) != 0 )
            *(uint8_t *)v25 = 0;
          v26 = *(uint32_t *)(v23 + 92);
          *(uint32_t *)(v6 + 32) = 1065353216;
          v26 |= 0x7FFFFFu;
          *(uint32_t *)(v6 + 48) = 1065353216;
          *(uint32_t *)(v6 + 92) = v26;
          *(uint32_t *)(v6 + 56) = 0;
          *(uint32_t *)(v6 + 60) = 0;
          *(uint32_t *)(v6 + 64) = 0;
          *(uint32_t *)(v6 + 68) = 0;
          *(uint32_t *)(v6 + 72) = 0;
          *(uint8_t *)(v6 + 76) = 1;
          *(uint8_t *)(v6 + 77) = 0;
          *(uint8_t *)(v6 + 94) = BYTE2(v26) & 0x7F;
          *(uint16_t *)(v6 + 95) = HIBYTE(v26) | 1;
          *(uint8_t *)(v6 + 97) = 0;
          *(uint8_t *)(v6 + 98) = 0;
          *(uint32_t *)(v6 + 100) = 0;
          *(uint32_t *)(v6 + 104) = 1065353216;
          *(uint32_t *)(v6 + 108) = 0;
          *(uint32_t *)(v6 + 112) = 1065353216;
          *(uint32_t *)(v6 + 116) = 0;
          *(uint32_t *)(v6 + 120) = 0;
          *(uint32_t *)(v6 + 124) = 0;
          *(uint32_t *)(v6 + 128) = 0;
          *(uint32_t *)(v6 + 132) = 0;
          *(uint32_t *)(v6 + 136) = 0;
          *(uint32_t *)(v6 + 140) = 0;
          *(uint32_t *)(v6 + 144) = 0;
          *((uint32_t *)a3 + 19) = v6;
        }
        v28 = v6;
        v8 = gameswf::ASValue::toNumber(a5);
        *(float *)(v28 + 120) = v8;
        break;
      case 'd':
        if ( v6 == 0 )
        {
          v15 = opNew(0x94u);
          v16 = (uint16_t *)(v15 + 32);
          v6 = v15;
          *(uint32_t *)v15 = 1065353216;
          *(uint32_t *)(v15 + 8) = 1065353216;
          *(uint32_t *)(v15 + 16) = 1065353216;
          *(uint32_t *)(v15 + 24) = 1065353216;
          *(uint32_t *)(v15 + 4) = 0;
          *(uint32_t *)(v15 + 12) = 0;
          *(uint32_t *)(v15 + 20) = 0;
          *(uint32_t *)(v15 + 28) = 0;
          v32 = 24;
          if ( ((v15 + 32) & 1) != 0 )
          {
            *(uint8_t *)(v15 + 32) = 0;
            v16 = (uint16_t *)(v15 + 33);
            v32 = 23;
          }
          if ( ((uint8_t)(uintptr_t)(v16) & 2) != 0 )
          {
            *v16++ = 0;
            v32 -= 2;
          }
          memset(v16, 0, 4 * (v32 >> 2));
          v17 = &v16[2 * (v32 >> 2)];
          if ( (v32 & 2) != 0 )
            *v17++ = 0;
          if ( (v32 & 1) != 0 )
            *(uint8_t *)v17 = 0;
          v18 = *(uint32_t *)(v15 + 92);
          *(uint32_t *)(v6 + 32) = 1065353216;
          v18 |= 0x7FFFFFu;
          *(uint32_t *)(v6 + 48) = 1065353216;
          *(uint32_t *)(v6 + 92) = v18;
          *(uint32_t *)(v6 + 56) = 0;
          *(uint32_t *)(v6 + 60) = 0;
          *(uint32_t *)(v6 + 64) = 0;
          *(uint32_t *)(v6 + 68) = 0;
          *(uint32_t *)(v6 + 72) = 0;
          *(uint8_t *)(v6 + 76) = 1;
          *(uint8_t *)(v6 + 77) = 0;
          *(uint8_t *)(v6 + 94) = BYTE2(v18) & 0x7F;
          *(uint16_t *)(v6 + 95) = HIBYTE(v18) | 1;
          *(uint8_t *)(v6 + 97) = 0;
          *(uint8_t *)(v6 + 98) = 0;
          *(uint32_t *)(v6 + 100) = 0;
          *(uint32_t *)(v6 + 104) = 1065353216;
          *(uint32_t *)(v6 + 108) = 0;
          *(uint32_t *)(v6 + 112) = 1065353216;
          *(uint32_t *)(v6 + 116) = 0;
          *(uint32_t *)(v6 + 120) = 0;
          *(uint32_t *)(v6 + 124) = 0;
          *(uint32_t *)(v6 + 128) = 0;
          *(uint32_t *)(v6 + 132) = 0;
          *(uint32_t *)(v6 + 136) = 0;
          *(uint32_t *)(v6 + 140) = 0;
          *(uint32_t *)(v6 + 144) = 0;
          *((uint32_t *)a3 + 19) = v6;
        }
        v30 = v6;
        v10 = gameswf::ASValue::toNumber(a5);
        *(float *)(v30 + 112) = v10;
        break;
      default:
        if ( v6 == 0 )
        {
          v11 = opNew(0x94u);
          v12 = (uint16_t *)(v11 + 32);
          v6 = v11;
          *(uint32_t *)v11 = 1065353216;
          *(uint32_t *)(v11 + 8) = 1065353216;
          *(uint32_t *)(v11 + 16) = 1065353216;
          *(uint32_t *)(v11 + 24) = 1065353216;
          *(uint32_t *)(v11 + 4) = 0;
          *(uint32_t *)(v11 + 12) = 0;
          *(uint32_t *)(v11 + 20) = 0;
          *(uint32_t *)(v11 + 28) = 0;
          v31 = 24;
          if ( ((v11 + 32) & 1) != 0 )
          {
            *(uint8_t *)(v11 + 32) = 0;
            v12 = (uint16_t *)(v11 + 33);
            v31 = 23;
          }
          if ( ((uint8_t)(uintptr_t)(v12) & 2) != 0 )
          {
            *v12++ = 0;
            v31 -= 2;
          }
          memset(v12, 0, 4 * (v31 >> 2));
          v13 = &v12[2 * (v31 >> 2)];
          if ( (v31 & 2) != 0 )
            *v13++ = 0;
          if ( (v31 & 1) != 0 )
            *(uint8_t *)v13 = 0;
          v14 = *(uint32_t *)(v11 + 92);
          *(uint32_t *)(v6 + 32) = 1065353216;
          v14 |= 0x7FFFFFu;
          *(uint32_t *)(v6 + 48) = 1065353216;
          *(uint32_t *)(v6 + 92) = v14;
          *(uint32_t *)(v6 + 56) = 0;
          *(uint32_t *)(v6 + 60) = 0;
          *(uint32_t *)(v6 + 64) = 0;
          *(uint32_t *)(v6 + 68) = 0;
          *(uint32_t *)(v6 + 72) = 0;
          *(uint8_t *)(v6 + 76) = 1;
          *(uint8_t *)(v6 + 77) = 0;
          *(uint8_t *)(v6 + 94) = BYTE2(v14) & 0x7F;
          *(uint16_t *)(v6 + 95) = HIBYTE(v14) | 1;
          *(uint8_t *)(v6 + 97) = 0;
          *(uint8_t *)(v6 + 98) = 0;
          *(uint32_t *)(v6 + 100) = 0;
          *(uint32_t *)(v6 + 104) = 1065353216;
          *(uint32_t *)(v6 + 108) = 0;
          *(uint32_t *)(v6 + 112) = 1065353216;
          *(uint32_t *)(v6 + 116) = 0;
          *(uint32_t *)(v6 + 120) = 0;
          *(uint32_t *)(v6 + 124) = 0;
          *(uint32_t *)(v6 + 128) = 0;
          *(uint32_t *)(v6 + 132) = 0;
          *(uint32_t *)(v6 + 136) = 0;
          *(uint32_t *)(v6 + 140) = 0;
          *(uint32_t *)(v6 + 144) = 0;
          *((uint32_t *)a3 + 19) = v6;
        }
        v27 = v6;
        v7 = gameswf::ASValue::toNumber(a5);
        *(float *)(v27 + 108) = v7;
        break;
    }
    *((uint8_t *)a3 + 145) = 1;
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::getStandardMember  (binary VA: 0x11548a0)
// Original: gameswf::ASDisplayObjectContainer::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASDisplayObjectContainer::getStandardMember(long double a1, gameswf::ASDisplayObjectContainer::Self *a2, int a3, gameswf::ASValue::Self *a4)
{
  int v5;
  int v6;
  uint16_t *v7;
  uint16_t *v8;
  int v9;
  int v10;
  uint16_t *v11;
  uint16_t *v12;
  int v13;
  int v14;
  uint16_t *v15;
  uint16_t *v16;
  int v17;
  int v18;
  uint16_t *v19;
  uint16_t *v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;

  if ( a3 > 102 )
    return gameswf::Character::getStandardMember(a1, a2, a3, a4);
  if ( a3 < 99 )
  {
    if ( a3 == 60 )
    {
      gameswf::ASValue::setDouble(a4, (double)*((int *)a2 + 54));
      return 1;
    }
    if ( a3 == 62 )
    {
      gameswf::ASValue::setBool(a4, *((uint8_t *)a2 + 248));
      return 1;
    }
    return gameswf::Character::getStandardMember(a1, a2, a3, a4);
  }
  gameswf::ASDisplayObjectContainer::setTransform((gameswf::Self **)a2);
  v5 = *((uint32_t *)a2 + 19);
  switch ( a3 )
  {
    case 'e':
      if ( v5 == 0 )
      {
        v14 = opNew(0x94u);
        v15 = (uint16_t *)(v14 + 32);
        v5 = v14;
        *(uint32_t *)v14 = 1065353216;
        *(uint32_t *)(v14 + 8) = 1065353216;
        *(uint32_t *)(v14 + 16) = 1065353216;
        *(uint32_t *)(v14 + 24) = 1065353216;
        *(uint32_t *)(v14 + 4) = 0;
        *(uint32_t *)(v14 + 12) = 0;
        *(uint32_t *)(v14 + 20) = 0;
        *(uint32_t *)(v14 + 28) = 0;
        v24 = 24;
        if ( ((v14 + 32) & 1) != 0 )
        {
          *(uint8_t *)(v14 + 32) = 0;
          v15 = (uint16_t *)(v14 + 33);
          v24 = 23;
        }
        if ( ((uint8_t)(uintptr_t)(v15) & 2) != 0 )
        {
          *v15++ = 0;
          v24 -= 2;
        }
        memset(v15, 0, 4 * (v24 >> 2));
        v16 = &v15[2 * (v24 >> 2)];
        if ( (v24 & 2) != 0 )
          *v16++ = 0;
        if ( (v24 & 1) != 0 )
          *(uint8_t *)v16 = 0;
        v17 = *(uint32_t *)(v14 + 92);
        *(uint32_t *)(v5 + 32) = 1065353216;
        v17 |= 0x7FFFFFu;
        *(uint32_t *)(v5 + 48) = 1065353216;
        *(uint32_t *)(v5 + 92) = v17;
        *(uint32_t *)(v5 + 56) = 0;
        *(uint32_t *)(v5 + 60) = 0;
        *(uint32_t *)(v5 + 64) = 0;
        *(uint32_t *)(v5 + 68) = 0;
        *(uint32_t *)(v5 + 72) = 0;
        *(uint8_t *)(v5 + 76) = 1;
        *(uint8_t *)(v5 + 77) = 0;
        *(uint8_t *)(v5 + 94) = BYTE2(v17) & 0x7F;
        *(uint16_t *)(v5 + 95) = HIBYTE(v17) | 1;
        *(uint8_t *)(v5 + 97) = 0;
        *(uint8_t *)(v5 + 98) = 0;
        *(uint32_t *)(v5 + 100) = 0;
        *(uint32_t *)(v5 + 104) = 1065353216;
        *(uint32_t *)(v5 + 108) = 0;
        *(uint32_t *)(v5 + 112) = 1065353216;
        *(uint32_t *)(v5 + 116) = 0;
        *(uint32_t *)(v5 + 120) = 0;
        *(uint32_t *)(v5 + 124) = 0;
        *(uint32_t *)(v5 + 128) = 0;
        *(uint32_t *)(v5 + 132) = 0;
        *(uint32_t *)(v5 + 136) = 0;
        *(uint32_t *)(v5 + 140) = 0;
        *(uint32_t *)(v5 + 144) = 0;
        *((uint32_t *)a2 + 19) = v5;
      }
      gameswf::ASValue::setDouble(a4, *(float *)(v5 + 116));
      return 1;
    case 'f':
      if ( v5 == 0 )
      {
        v6 = opNew(0x94u);
        v7 = (uint16_t *)(v6 + 32);
        v5 = v6;
        *(uint32_t *)v6 = 1065353216;
        *(uint32_t *)(v6 + 8) = 1065353216;
        *(uint32_t *)(v6 + 16) = 1065353216;
        *(uint32_t *)(v6 + 24) = 1065353216;
        *(uint32_t *)(v6 + 4) = 0;
        *(uint32_t *)(v6 + 12) = 0;
        *(uint32_t *)(v6 + 20) = 0;
        *(uint32_t *)(v6 + 28) = 0;
        v22 = 24;
        if ( ((v6 + 32) & 1) != 0 )
        {
          *(uint8_t *)(v6 + 32) = 0;
          v7 = (uint16_t *)(v6 + 33);
          v22 = 23;
        }
        if ( ((uint8_t)(uintptr_t)(v7) & 2) != 0 )
        {
          *v7++ = 0;
          v22 -= 2;
        }
        memset(v7, 0, 4 * (v22 >> 2));
        v8 = &v7[2 * (v22 >> 2)];
        if ( (v22 & 2) != 0 )
          *v8++ = 0;
        if ( (v22 & 1) != 0 )
          *(uint8_t *)v8 = 0;
        v9 = *(uint32_t *)(v6 + 92);
        *(uint32_t *)(v5 + 32) = 1065353216;
        v9 |= 0x7FFFFFu;
        *(uint32_t *)(v5 + 48) = 1065353216;
        *(uint32_t *)(v5 + 92) = v9;
        *(uint32_t *)(v5 + 56) = 0;
        *(uint32_t *)(v5 + 60) = 0;
        *(uint32_t *)(v5 + 64) = 0;
        *(uint32_t *)(v5 + 68) = 0;
        *(uint32_t *)(v5 + 72) = 0;
        *(uint8_t *)(v5 + 76) = 1;
        *(uint8_t *)(v5 + 77) = 0;
        *(uint8_t *)(v5 + 94) = BYTE2(v9) & 0x7F;
        *(uint16_t *)(v5 + 95) = HIBYTE(v9) | 1;
        *(uint8_t *)(v5 + 97) = 0;
        *(uint8_t *)(v5 + 98) = 0;
        *(uint32_t *)(v5 + 100) = 0;
        *(uint32_t *)(v5 + 104) = 1065353216;
        *(uint32_t *)(v5 + 108) = 0;
        *(uint32_t *)(v5 + 112) = 1065353216;
        *(uint32_t *)(v5 + 116) = 0;
        *(uint32_t *)(v5 + 120) = 0;
        *(uint32_t *)(v5 + 124) = 0;
        *(uint32_t *)(v5 + 128) = 0;
        *(uint32_t *)(v5 + 132) = 0;
        *(uint32_t *)(v5 + 136) = 0;
        *(uint32_t *)(v5 + 140) = 0;
        *(uint32_t *)(v5 + 144) = 0;
        *((uint32_t *)a2 + 19) = v5;
      }
      gameswf::ASValue::setDouble(a4, *(float *)(v5 + 120));
      return 1;
    case 'd':
      if ( v5 == 0 )
      {
        v10 = opNew(0x94u);
        v11 = (uint16_t *)(v10 + 32);
        v5 = v10;
        *(uint32_t *)v10 = 1065353216;
        *(uint32_t *)(v10 + 8) = 1065353216;
        *(uint32_t *)(v10 + 16) = 1065353216;
        *(uint32_t *)(v10 + 24) = 1065353216;
        *(uint32_t *)(v10 + 4) = 0;
        *(uint32_t *)(v10 + 12) = 0;
        *(uint32_t *)(v10 + 20) = 0;
        *(uint32_t *)(v10 + 28) = 0;
        v23 = 24;
        if ( ((v10 + 32) & 1) != 0 )
        {
          *(uint8_t *)(v10 + 32) = 0;
          v11 = (uint16_t *)(v10 + 33);
          v23 = 23;
        }
        if ( ((uint8_t)(uintptr_t)(v11) & 2) != 0 )
        {
          *v11++ = 0;
          v23 -= 2;
        }
        memset(v11, 0, 4 * (v23 >> 2));
        v12 = &v11[2 * (v23 >> 2)];
        if ( (v23 & 2) != 0 )
          *v12++ = 0;
        if ( (v23 & 1) != 0 )
          *(uint8_t *)v12 = 0;
        v13 = *(uint32_t *)(v10 + 92);
        *(uint32_t *)(v5 + 32) = 1065353216;
        v13 |= 0x7FFFFFu;
        *(uint32_t *)(v5 + 48) = 1065353216;
        *(uint32_t *)(v5 + 92) = v13;
        *(uint32_t *)(v5 + 56) = 0;
        *(uint32_t *)(v5 + 60) = 0;
        *(uint32_t *)(v5 + 64) = 0;
        *(uint32_t *)(v5 + 68) = 0;
        *(uint32_t *)(v5 + 72) = 0;
        *(uint8_t *)(v5 + 76) = 1;
        *(uint8_t *)(v5 + 77) = 0;
        *(uint8_t *)(v5 + 94) = BYTE2(v13) & 0x7F;
        *(uint16_t *)(v5 + 95) = HIBYTE(v13) | 1;
        *(uint8_t *)(v5 + 97) = 0;
        *(uint8_t *)(v5 + 98) = 0;
        *(uint32_t *)(v5 + 100) = 0;
        *(uint32_t *)(v5 + 104) = 1065353216;
        *(uint32_t *)(v5 + 108) = 0;
        *(uint32_t *)(v5 + 112) = 1065353216;
        *(uint32_t *)(v5 + 116) = 0;
        *(uint32_t *)(v5 + 120) = 0;
        *(uint32_t *)(v5 + 124) = 0;
        *(uint32_t *)(v5 + 128) = 0;
        *(uint32_t *)(v5 + 132) = 0;
        *(uint32_t *)(v5 + 136) = 0;
        *(uint32_t *)(v5 + 140) = 0;
        *(uint32_t *)(v5 + 144) = 0;
        *((uint32_t *)a2 + 19) = v5;
      }
      gameswf::ASValue::setDouble(a4, *(float *)(v5 + 112));
      return 1;
    default:
      if ( v5 == 0 )
      {
        v18 = opNew(0x94u);
        v19 = (uint16_t *)(v18 + 32);
        v5 = v18;
        *(uint32_t *)v18 = 1065353216;
        *(uint32_t *)(v18 + 8) = 1065353216;
        *(uint32_t *)(v18 + 16) = 1065353216;
        *(uint32_t *)(v18 + 24) = 1065353216;
        *(uint32_t *)(v18 + 4) = 0;
        *(uint32_t *)(v18 + 12) = 0;
        *(uint32_t *)(v18 + 20) = 0;
        *(uint32_t *)(v18 + 28) = 0;
        v25 = 24;
        if ( ((v18 + 32) & 1) != 0 )
        {
          *(uint8_t *)(v18 + 32) = 0;
          v19 = (uint16_t *)(v18 + 33);
          v25 = 23;
        }
        if ( ((uint8_t)(uintptr_t)(v19) & 2) != 0 )
        {
          *v19++ = 0;
          v25 -= 2;
        }
        memset(v19, 0, 4 * (v25 >> 2));
        v20 = &v19[2 * (v25 >> 2)];
        if ( (v25 & 2) != 0 )
          *v20++ = 0;
        if ( (v25 & 1) != 0 )
          *(uint8_t *)v20 = 0;
        v21 = *(uint32_t *)(v18 + 92);
        *(uint32_t *)(v5 + 32) = 1065353216;
        v21 |= 0x7FFFFFu;
        *(uint32_t *)(v5 + 48) = 1065353216;
        *(uint32_t *)(v5 + 92) = v21;
        *(uint32_t *)(v5 + 56) = 0;
        *(uint32_t *)(v5 + 60) = 0;
        *(uint32_t *)(v5 + 64) = 0;
        *(uint32_t *)(v5 + 68) = 0;
        *(uint32_t *)(v5 + 72) = 0;
        *(uint8_t *)(v5 + 76) = 1;
        *(uint8_t *)(v5 + 77) = 0;
        *(uint8_t *)(v5 + 94) = BYTE2(v21) & 0x7F;
        *(uint16_t *)(v5 + 95) = HIBYTE(v21) | 1;
        *(uint8_t *)(v5 + 97) = 0;
        *(uint8_t *)(v5 + 98) = 0;
        *(uint32_t *)(v5 + 100) = 0;
        *(uint32_t *)(v5 + 104) = 1065353216;
        *(uint32_t *)(v5 + 108) = 0;
        *(uint32_t *)(v5 + 112) = 1065353216;
        *(uint32_t *)(v5 + 116) = 0;
        *(uint32_t *)(v5 + 120) = 0;
        *(uint32_t *)(v5 + 124) = 0;
        *(uint32_t *)(v5 + 128) = 0;
        *(uint32_t *)(v5 + 132) = 0;
        *(uint32_t *)(v5 + 136) = 0;
        *(uint32_t *)(v5 + 140) = 0;
        *(uint32_t *)(v5 + 144) = 0;
        *((uint32_t *)a2 + 19) = v5;
      }
      gameswf::ASValue::setDouble(a4, *(float *)(v5 + 108));
      return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::hasWorldTransform  (binary VA: 0x1155030)
// Original: gameswf::ASDisplayObjectContainer::hasWorldTransform
// ----------------------------------------------------------------------------
int gameswf::ASDisplayObjectContainer::hasWorldTransform(gameswf::ASDisplayObjectContainer::Self *self)
{
  int result;
  gameswf::ASDisplayObjectContainer::Self *v2;
  int v3;
  int v4;
  int v5;

  result = 0;
  v2 = self;
  if ( self != nullptr )
  {
    v3 = *((uint32_t *)self + 19);
    if ( v3 != 0 && *(uint8_t *)(v3 + 96) != 0 )
    {
      return 1;
    }
    else
    {
      while ( 1 )
      {
        v4 = *((uint32_t *)v2 + 14);
        if ( v4 == 0 )
          break;
        if ( *(uint8_t *)(*((uint32_t *)v2 + 13) + 2) == 0 )
        {
          sub_7E5ED0((gameswf::Self **)v2 + 13, nullptr);
          *((uint32_t *)v2 + 14) = 0;
          return 0;
        }
        v2 = *((gameswf::ASDisplayObjectContainer::Self **)v2 + 14);
        v5 = *(uint32_t *)(v4 + 76);
        if ( v5 != 0 && *(uint8_t *)(v5 + 96) != 0 )
          return 1;
      }
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::removeChild  (binary VA: 0x11556a0)
// Original: gameswf::ASDisplayObjectContainer::removeChild
// ----------------------------------------------------------------------------
int gameswf::ASDisplayObjectContainer::removeChild(gameswf::ASDisplayObjectContainer::Self *self, gameswf::Character::Self *a2)
{
  gameswf::DisplayList::removeDisplayObject((gameswf::ASDisplayObjectContainer::Self *)((char *)self + 212), a2);
  return gameswf::Character::invalidateBitmapCache(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::addChild  (binary VA: 0x11557a0)
// Original: gameswf::ASDisplayObjectContainer::addChild
// ----------------------------------------------------------------------------
int gameswf::ASDisplayObjectContainer::addChild(gameswf::ASDisplayObjectContainer::Self *self, gameswf::Character::Self *a2)
{
  gameswf::Character::Self *v2;
  int result;
  gameswf::ASDisplayObjectContainer::Self *v4;
  int *v5;
  int *v6;
  int *v7;
  int v8;
  gameswf::Self *WeakProxy;
  int HighestDepth;
  int v11;
  int v12;
  gameswf::Character::Self *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  void *v18;
  int v19;
  int v20;
  char *v21;
  char *v22;
  gameswf::Character::Self *v23;
  int v24;
  char *v25;
  int v26;
  int v27;
  gameswf::Self *v28;
  int v29;
  int v30;
  char *v31;
  const void *v32;
  int v33;
  int v34;
  uint16_t *v35;
  unsigned int v36;
  uint16_t *v37;
  int v38;
  int v39;
  uint16_t *v40;
  unsigned int v41;
  uint16_t *v42;
  int v43;
  int v44;
  uint16_t *v45;
  unsigned int v46;
  uint16_t *v47;
  int v48;
  gameswf::Self *v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  gameswf::DisplayList::Self *v55;
  gameswf::DisplayList::Self *v56;
  gameswf::Self *v57;
  gameswf::Self *v58;
  uint32_t *v59;
  int v60;
  int v61;
  int v62;
  gameswf::Character::Self *v63;
  gameswf::Self **v64;
  gameswf::Self **v65;
  gameswf::Self *v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;

  v2 = a2;
  v55 = (gameswf::DisplayList::Self *)((gameswf::ASDisplayObjectContainer::Self *)((char *)self + 212));
  result = gameswf::DisplayList::getIndexOf((gameswf::ASDisplayObjectContainer::Self *)((char *)self + 212), a2);
  if ( result < 0 )
  {
    v4 = *((gameswf::ASDisplayObjectContainer::Self **)a2 + 14);
    v64 = (gameswf::Self **)((char *)a2 + 52);
    if ( v4 != nullptr )
    {
      if ( *(uint8_t *)(*((uint32_t *)a2 + 13) + 2) != 0 )
      {
        gameswf::ASDisplayObjectContainer::removeChild(v4, a2);
      }
      else
      {
        sub_7E5ED0(v64, nullptr);
        *((uint32_t *)a2 + 14) = 0;
      }
    }
    v5 = *((int **)a2 + 17);
    v68 = *v5;
    v69 = v5[1];
    v70 = v5[2];
    v71 = v5[3];
    v72 = v5[4];
    v73 = v5[5];
    v6 = *((int **)a2 + 16);
    v74 = *v6;
    v75 = v6[1];
    v76 = v6[2];
    v77 = v6[3];
    v78 = v6[4];
    v79 = v6[5];
    v80 = v6[6];
    v81 = v6[7];
    v7 = *((int **)a2 + 18);
    v61 = *v7;
    v59 = (uint32_t *)(v7 + 1);
    v8 = v7[2];
    v67 = 0;
    v53 = v8;
    v57 = nullptr;
    if ( v8 > 0 )
    {
      v27 = 0;
      v67 = 96 * (v8 + (v8 >> 1));
      v57 = (gameswf::Self *)gameswf::malloc_internal(v67);
      v28 = v57;
      v66 = (gameswf::Self *)(a2);
      do
      {
        if ( v28 != nullptr )
          memset(v28, 0, 0x60u);
        ++v27;
        v28 = (gameswf::Self *)((char *)v28 + 96);
      }
      while ( v27 != v53 );
      v29 = 0;
      v30 = 0;
      do
      {
        v31 = (char *)v57 + v29;
        ++v30;
        v32 = (const void *)(*v59 + v29);
        v29 += 96;
        std::memcpy(v31, v32, 96);
      }
      while ( v30 != v53 );
      v2 = a2;
    }
    *((uint32_t *)v2 + 14) = (uint32_t)(uintptr_t)(self);
    if ( self != nullptr )
    {
      WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(self);
      sub_7E5ED0(v64, WeakProxy);
    }
    else
    {
      sub_7E5ED0(v64, nullptr);
    }
    HighestDepth = gameswf::DisplayList::getHighestDepth(v55);
    gameswf::DisplayList::addDisplayObject(
      v55,
      v2,
      HighestDepth,
      true,
      (const gameswf::CxForm::Self *)gameswf::CxForm::identity,
      (const gameswf::Matrix::Self *)gameswf::Matrix::identity,
      (const gameswf::Effect::Self *)gameswf::Effect::identity,
      1.0,
      0,
      v50,
      v51,
      v52,
      v53,
      (int)(uintptr_t)(v55),
      (int)(uintptr_t)(v57),
      (char)(uintptr_t)(v59),
      v61,
      (int)(uintptr_t)(v64),
      v66,
      v67);
    v11 = *((uint32_t *)v2 + 19);
    if ( v11 == 0 )
    {
      v44 = opNew(0x94u);
      v45 = (uint16_t *)(v44 + 32);
      v11 = v44;
      *(uint32_t *)v44 = 1065353216;
      *(uint32_t *)(v44 + 8) = 1065353216;
      *(uint32_t *)(v44 + 16) = 1065353216;
      *(uint32_t *)(v44 + 24) = 1065353216;
      *(uint32_t *)(v44 + 4) = 0;
      *(uint32_t *)(v44 + 12) = 0;
      *(uint32_t *)(v44 + 20) = 0;
      *(uint32_t *)(v44 + 28) = 0;
      v46 = 24;
      if ( ((v44 + 32) & 1) != 0 )
      {
        *(uint8_t *)(v44 + 32) = 0;
        v45 = (uint16_t *)(v44 + 33);
        LOWORD(v46) = 23;
      }
      if ( ((uint8_t)(uintptr_t)(v45) & 2) != 0 )
      {
        *v45 = 0;
        v46 -= 2;
        ++v45;
      }
      memset(v45, 0, 4 * (v46 >> 2));
      v47 = &v45[2 * (v46 >> 2)];
      if ( (v46 & 2) != 0 )
        *v47++ = 0;
      if ( (v46 & 1) != 0 )
        *(uint8_t *)v47 = 0;
      v48 = *(uint32_t *)(v44 + 92);
      *(uint32_t *)(v11 + 32) = 1065353216;
      v48 |= 0x7FFFFFu;
      *(uint32_t *)(v11 + 48) = 1065353216;
      *(uint32_t *)(v11 + 92) = v48;
      *(uint32_t *)(v11 + 56) = 0;
      *(uint32_t *)(v11 + 60) = 0;
      *(uint32_t *)(v11 + 64) = 0;
      *(uint32_t *)(v11 + 68) = 0;
      *(uint32_t *)(v11 + 72) = 0;
      *(uint8_t *)(v11 + 76) = 1;
      *(uint8_t *)(v11 + 77) = 0;
      *(uint8_t *)(v11 + 94) = BYTE2(v48) & 0x7F;
      *(uint16_t *)(v11 + 95) = HIBYTE(v48) | 1;
      *(uint8_t *)(v11 + 97) = 0;
      *(uint8_t *)(v11 + 98) = 0;
      *(uint32_t *)(v11 + 100) = 0;
      *(uint32_t *)(v11 + 104) = 1065353216;
      *(uint32_t *)(v11 + 108) = 0;
      *(uint32_t *)(v11 + 112) = 1065353216;
      *(uint32_t *)(v11 + 116) = 0;
      *(uint32_t *)(v11 + 120) = 0;
      *(uint32_t *)(v11 + 124) = 0;
      *(uint32_t *)(v11 + 128) = 0;
      *(uint32_t *)(v11 + 132) = 0;
      *(uint32_t *)(v11 + 136) = 0;
      *(uint32_t *)(v11 + 140) = 0;
      *(uint32_t *)(v11 + 144) = 0;
      *((uint32_t *)v2 + 19) = v11;
    }
    *(uint32_t *)(v11 + 32) = v68;
    *(uint32_t *)(v11 + 36) = v69;
    *(uint32_t *)(v11 + 40) = v70;
    *(uint32_t *)(v11 + 44) = v71;
    *(uint32_t *)(v11 + 48) = v72;
    *(uint32_t *)(v11 + 52) = v73;
    v12 = *((uint32_t *)v2 + 19);
    *((uint8_t *)v2 + 145) = 1;
    *((uint8_t *)v2 + 147) = 1;
    *((uint32_t *)v2 + 17) = v12 + 32;
    if ( *((uint32_t *)v2 + 14) != 0 )
    {
      if ( *(uint8_t *)(*((uint32_t *)v2 + 13) + 2) != 0 )
      {
        gameswf::Character::invalidateBitmapCache(*((gameswf::Character::Self **)v2 + 14));
      }
      else
      {
        sub_7E5ED0(v65, nullptr);
        *((uint32_t *)v2 + 14) = 0;
      }
      v12 = *((uint32_t *)v2 + 19);
    }
    if ( v12 == 0 )
    {
      v39 = opNew(0x94u);
      v40 = (uint16_t *)(v39 + 32);
      v12 = v39;
      *(uint32_t *)v39 = 1065353216;
      *(uint32_t *)(v39 + 8) = 1065353216;
      *(uint32_t *)(v39 + 16) = 1065353216;
      *(uint32_t *)(v39 + 24) = 1065353216;
      *(uint32_t *)(v39 + 4) = 0;
      *(uint32_t *)(v39 + 12) = 0;
      *(uint32_t *)(v39 + 20) = 0;
      *(uint32_t *)(v39 + 28) = 0;
      v41 = 24;
      if ( ((v39 + 32) & 1) != 0 )
      {
        *(uint8_t *)(v39 + 32) = 0;
        v40 = (uint16_t *)(v39 + 33);
        LOWORD(v41) = 23;
      }
      if ( ((uint8_t)(uintptr_t)(v40) & 2) != 0 )
      {
        *v40 = 0;
        v41 -= 2;
        ++v40;
      }
      memset(v40, 0, 4 * (v41 >> 2));
      v42 = &v40[2 * (v41 >> 2)];
      if ( (v41 & 2) != 0 )
        *v42++ = 0;
      if ( (v41 & 1) != 0 )
        *(uint8_t *)v42 = 0;
      v43 = *(uint32_t *)(v39 + 92);
      *(uint32_t *)(v12 + 32) = 1065353216;
      v43 |= 0x7FFFFFu;
      *(uint32_t *)(v12 + 48) = 1065353216;
      *(uint32_t *)(v12 + 92) = v43;
      *(uint32_t *)(v12 + 56) = 0;
      *(uint32_t *)(v12 + 60) = 0;
      *(uint32_t *)(v12 + 64) = 0;
      *(uint32_t *)(v12 + 68) = 0;
      *(uint32_t *)(v12 + 72) = 0;
      *(uint8_t *)(v12 + 76) = 1;
      *(uint8_t *)(v12 + 77) = 0;
      *(uint8_t *)(v12 + 94) = BYTE2(v43) & 0x7F;
      *(uint16_t *)(v12 + 95) = HIBYTE(v43) | 1;
      *(uint8_t *)(v12 + 97) = 0;
      *(uint8_t *)(v12 + 98) = 0;
      *(uint32_t *)(v12 + 100) = 0;
      *(uint32_t *)(v12 + 104) = 1065353216;
      *(uint32_t *)(v12 + 108) = 0;
      *(uint32_t *)(v12 + 112) = 1065353216;
      *(uint32_t *)(v12 + 116) = 0;
      *(uint32_t *)(v12 + 120) = 0;
      *(uint32_t *)(v12 + 124) = 0;
      *(uint32_t *)(v12 + 128) = 0;
      *(uint32_t *)(v12 + 132) = 0;
      *(uint32_t *)(v12 + 136) = 0;
      *(uint32_t *)(v12 + 140) = 0;
      *(uint32_t *)(v12 + 144) = 0;
      *((uint32_t *)v2 + 19) = v12;
    }
    *(uint32_t *)v12 = v74;
    *(uint32_t *)(v12 + 4) = v75;
    *(uint32_t *)(v12 + 8) = v76;
    *(uint32_t *)(v12 + 12) = v77;
    *(uint32_t *)(v12 + 16) = v78;
    *(uint32_t *)(v12 + 20) = v79;
    *(uint32_t *)(v12 + 24) = v80;
    *(uint32_t *)(v12 + 28) = v81;
    v60 = *((uint32_t *)v2 + 19);
    *((uint32_t *)v2 + 16) = v60;
    v13 = *((gameswf::Character::Self **)v2 + 14);
    *((uint8_t *)v2 + 146) = 1;
    if ( v13 != nullptr )
    {
      if ( *(uint8_t *)(*((uint32_t *)v2 + 13) + 2) != 0 )
      {
        gameswf::Character::invalidateBitmapCache(v13);
        v60 = *((uint32_t *)v2 + 19);
      }
      else
      {
        sub_7E5ED0(v65, nullptr);
        v26 = *((uint32_t *)v2 + 19);
        *((uint32_t *)v2 + 14) = 0;
        v60 = v26;
      }
    }
    if ( v60 == 0 )
    {
      v34 = opNew(0x94u);
      v60 = v34;
      v35 = (uint16_t *)(v34 + 32);
      *(uint32_t *)v34 = 1065353216;
      *(uint32_t *)(v34 + 8) = 1065353216;
      *(uint32_t *)(v34 + 16) = 1065353216;
      *(uint32_t *)(v34 + 24) = 1065353216;
      *(uint32_t *)(v34 + 4) = 0;
      *(uint32_t *)(v34 + 12) = 0;
      *(uint32_t *)(v34 + 20) = 0;
      *(uint32_t *)(v34 + 28) = 0;
      v36 = 24;
      if ( ((v34 + 32) & 1) != 0 )
      {
        *(uint8_t *)(v34 + 32) = 0;
        v35 = (uint16_t *)(v34 + 33);
        LOBYTE(v36) = 23;
      }
      if ( ((uint8_t)(uintptr_t)(v35) & 2) != 0 )
      {
        *v35 = 0;
        v36 -= 2;
        ++v35;
      }
      memset(v35, 0, 4 * (v36 >> 2));
      v37 = &v35[2 * (v36 >> 2)];
      if ( (v36 & 2) != 0 )
        *v37++ = 0;
      if ( (v36 & 1) != 0 )
        *(uint8_t *)v37 = 0;
      *(uint32_t *)(v34 + 32) = 1065353216;
      *(uint32_t *)(v34 + 48) = 1065353216;
      *(uint32_t *)(v34 + 56) = 0;
      *(uint32_t *)(v34 + 60) = 0;
      *(uint32_t *)(v34 + 64) = 0;
      *(uint32_t *)(v34 + 68) = 0;
      *(uint32_t *)(v34 + 72) = 0;
      *(uint8_t *)(v34 + 76) = 1;
      *(uint8_t *)(v34 + 77) = 0;
      v38 = *(uint32_t *)(v34 + 92) | 0x7FFFFF;
      *(uint32_t *)(v60 + 92) = v38;
      *(uint8_t *)(v60 + 94) = BYTE2(v38) & 0x7F;
      *(uint16_t *)(v60 + 95) = HIBYTE(v38) | 1;
      *(uint8_t *)(v60 + 97) = 0;
      *(uint8_t *)(v60 + 98) = 0;
      *(uint32_t *)(v60 + 100) = 0;
      *(uint32_t *)(v60 + 104) = 1065353216;
      *(uint32_t *)(v60 + 108) = 0;
      *(uint32_t *)(v60 + 112) = 1065353216;
      *(uint32_t *)(v60 + 116) = 0;
      *(uint32_t *)(v60 + 120) = 0;
      *(uint32_t *)(v60 + 124) = 0;
      *(uint32_t *)(v60 + 128) = 0;
      *(uint32_t *)(v60 + 132) = 0;
      *(uint32_t *)(v60 + 136) = 0;
      *(uint32_t *)(v60 + 140) = 0;
      *(uint32_t *)(v60 + 144) = 0;
      *((uint32_t *)v2 + 19) = v60;
    }
    *(uint32_t *)(v60 + 56) = v62;
    v56 = (gameswf::DisplayList::Self *)(v60 + 60);
    v14 = *(uint32_t *)(v60 + 64);
    if ( v54 != 0 )
    {
      v15 = *(uint32_t *)(v60 + 68);
      if ( v54 > v15 && *(uint32_t *)(v60 + 72) == 0 )
      {
        v33 = v54 + (v54 >> 1);
        *(uint32_t *)(v60 + 68) = v33;
        if ( v33 != 0 )
        {
          v49 = *(gameswf::Self **)(v60 + 60);
          if ( v49 != nullptr )
            *(uint32_t *)(v60 + 60) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v49, 96 * v33, 96 * v15));
          else
            *(uint32_t *)(v60 + 60) = gameswf::malloc_internal(96 * v33);
        }
        else
        {
          if ( *(uint32_t *)(v60 + 60) != 0 )
            gameswf::free_internal(*(gameswf::Self **)(v60 + 60));
          *(uint32_t *)(v60 + 60) = 0;
        }
      }
    }
    if ( v54 > v14 )
    {
      v63 = v2;
      v16 = v14;
      v17 = 96 * v14;
      do
      {
        v18 = (void *)(*(uint32_t *)v56 + v17);
        if ( v18 != nullptr )
          memset(v18, 0, 0x60u);
        ++v16;
        v17 += 96;
      }
      while ( v16 != v54 );
      v2 = v63;
    }
    *(uint32_t *)(v60 + 64) = v54;
    if ( v54 > 0 )
    {
      v19 = 0;
      v20 = 0;
      do
      {
        v21 = (char *)(v19 + *(uint32_t *)v56);
        ++v20;
        v22 = (char *)v58 + v19;
        v19 += 96;
        std::memcpy(v21, v22, 96);
      }
      while ( v20 < *(uint32_t *)(v60 + 64) );
    }
    *((uint32_t *)v2 + 18) = *((uint32_t *)v2 + 19) + 56;
    if ( *((uint32_t *)v2 + 14) != 0 )
    {
      if ( *(uint8_t *)(*((uint32_t *)v2 + 13) + 2) != 0 )
      {
        gameswf::Character::invalidateBitmapCache(*((gameswf::Character::Self **)v2 + 14));
        v23 = *((gameswf::Character::Self **)v2 + 14);
        goto LABEL_34;
      }
      sub_7E5ED0(v65, nullptr);
      *((uint32_t *)v2 + 14) = 0;
    }
    v23 = nullptr;
LABEL_34:
    while ( 1 )
    {
      *((uint8_t *)v2 + 150) = 1;
      if ( v23 == nullptr )
        break;
      if ( *(uint8_t *)(*((uint32_t *)v2 + 13) + 2) == 0 )
      {
        sub_7E5ED0((gameswf::Self **)v2 + 13, nullptr);
        *((uint32_t *)v2 + 14) = 0;
        break;
      }
      v2 = v23;
      v23 = *((gameswf::Character::Self **)v23 + 14);
    }
    result = gameswf::Character::invalidateBitmapCache(self);
    if ( v54 < 0 )
    {
      result = 0;
      v24 = v54;
      v25 = (char *)v58 + 96 * v54;
      do
      {
        if ( v25 != nullptr )
          memset(v25, 0, 0x60u);
        v25 += 96;
        ++v24;
      }
      while ( v24 != 0 );
    }
    if ( v58 != nullptr )
      return gameswf::free_internal(v58);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::addChild  (binary VA: 0x1156200)
// Original: gameswf::ASDisplayObjectContainer::addChild
// ----------------------------------------------------------------------------
int gameswf::ASDisplayObjectContainer::addChild(int a1)
{
  gameswf::ASDisplayObjectContainer::Self *v1;
  int result;
  int v3;
  gameswf::Character::Self *v4;

  v1 = *(gameswf::ASDisplayObjectContainer::Self **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 4) == 0 )
    v1 = nullptr;
  result = *(uint32_t *)(a1 + 16);
  if ( result > 0 )
  {
    v3 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
    v4 = nullptr;
    if ( *(uint8_t *)v3 == 5 )
    {
      v4 = *(gameswf::Character::Self **)(v3 + 4);
      if ( v4 != nullptr && G4_VCALL<uint8_t>(v4, 8, 1) == 0 )
        v4 = nullptr;
    }
    return gameswf::ASDisplayObjectContainer::addChild(v1, v4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::addChildAt  (binary VA: 0x11562b0)
// Original: gameswf::ASDisplayObjectContainer::addChildAt
// ----------------------------------------------------------------------------
void gameswf::ASDisplayObjectContainer::addChildAt(int a1)
{
  gameswf::ASDisplayObjectContainer::Self *v1;
  int v2;
  gameswf::Character::Self *v3;
  int v4;
  int v5;
  gameswf::Self *v6;
  gameswf::RefCounted::Self *v7;
  gameswf::RefCounted::Self *v8;
  int v9;
  int i;
  int v11;
  int v12;
  uint32_t *v13;
  gameswf::RefCounted::Self **v14;
  int v15;
  int v16;
  int v17;
  int v18;
  bool v19;
  int v20;
  int v21;
  gameswf::RefCounted::Self *v22;
  int v23;

  v1 = *(gameswf::ASDisplayObjectContainer::Self **)(a1 + 4);
  if ( v1 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v1 + 8))(*(uint32_t *)(a1 + 4), 4) == 0 )
    v1 = nullptr;
  if ( *(int *)(a1 + 16) > 1 )
  {
    v2 = *(uint32_t *)(a1 + 20);
    v3 = nullptr;
    v4 = **(uint32_t **)(a1 + 12);
    v5 = v4 + 12 * v2;
    if ( *(uint8_t *)v5 == 5 )
    {
      v3 = *(gameswf::Character::Self **)(v5 + 4);
      if ( v3 != nullptr )
      {
        v19 = G4_VCALL<uint8_t>(v3, 8, 1) == 0;
        v2 = *(uint32_t *)(a1 + 20);
        v4 = **(uint32_t **)(a1 + 12);
        if ( v19 )
          v3 = nullptr;
      }
    }
    v23 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(v4 + 4 * (3 * v2 - 3)));
    gameswf::ASDisplayObjectContainer::addChild(v1, v3);
    v6 = *((gameswf::Self **)v1 + 53);
    v20 = *((uint32_t *)v1 + 54);
    v7 = nullptr;
    v21 = v20 - 1;
    v8 = *((gameswf::RefCounted::Self **)v6 + v20 - 1);
    v22 = v8;
    if ( v8 != nullptr )
    {
      gameswf::RefCounted::addRef(v8);
      v6 = *((gameswf::Self **)v1 + 53);
      v20 = *((uint32_t *)v1 + 54);
      v21 = v20 - 1;
      v7 = *((gameswf::RefCounted::Self **)v6 + v20 - 1);
    }
    v9 = v21;
    for ( i = 4 * v21; ; v7 = *(gameswf::RefCounted::Self **)((char *)v6 + i) )
    {
      if ( v7 != nullptr )
      {
        gameswf::RefCounted::dropRef(v7);
        v6 = *((gameswf::Self **)v1 + 53);
      }
      ++v9;
      i += 4;
      if ( v9 >= v20 )
        break;
    }
    v11 = 4 * v21;
    if ( v21 != 0 )
    {
      v17 = *((uint32_t *)v1 + 55);
      if ( v21 > v17 && *((uint32_t *)v1 + 56) == 0 )
      {
        v18 = v21 + (v21 >> 1);
        *((uint32_t *)v1 + 55) = v18;
        if ( v18 != 0 )
        {
          if ( v6 != nullptr )
            v6 = (gameswf::Self *)gameswf::realloc_internal(v6, 4 * v18, 4 * v17);
          else
            v6 = (gameswf::Self *)gameswf::malloc_internal(4 * v18);
          *((uint32_t *)v1 + 53) = (uint32_t)(uintptr_t)(v6);
        }
        else
        {
          if ( v6 != nullptr )
            gameswf::free_internal(v6);
          *((uint32_t *)v1 + 53) = 0;
          v6 = nullptr;
        }
      }
    }
    *((uint32_t *)v1 + 54) = v21;
    if ( v20 != 0 )
    {
      v15 = *((uint32_t *)v1 + 55);
      if ( v15 < v20 && *((uint32_t *)v1 + 56) == 0 )
      {
        v16 = v20 + (v20 >> 1);
        *((uint32_t *)v1 + 55) = v16;
        if ( v16 != 0 )
        {
          if ( v6 != nullptr )
            v6 = (gameswf::Self *)gameswf::realloc_internal(v6, 4 * v16, 4 * v15);
          else
            v6 = (gameswf::Self *)gameswf::malloc_internal(4 * v16);
          *((uint32_t *)v1 + 53) = (uint32_t)(uintptr_t)(v6);
        }
        else
        {
          if ( v6 != nullptr )
            gameswf::free_internal(v6);
          *((uint32_t *)v1 + 53) = 0;
          v6 = nullptr;
        }
      }
    }
    v12 = v21;
    while ( 1 )
    {
      v13 = (uint32_t *)((char *)v6 + v11);
      if ( v13 != nullptr )
        *v13 = 0;
      ++v12;
      v11 += 4;
      if ( v12 >= v20 )
        break;
      v6 = *((gameswf::Self **)v1 + 53);
    }
    *((uint32_t *)v1 + 54) = v20;
    if ( v23 < v21 )
      memmove(
        (void *)(*((uint32_t *)v1 + 53) + 4 * v23 + 4),
        (const void *)(*((uint32_t *)v1 + 53) + 4 * v23),
        4 * (v21 - v23));
    v14 = (gameswf::RefCounted::Self **)(*((uint32_t *)v1 + 53) + 4 * v23);
    if ( v14 != nullptr )
    {
      *v14 = nullptr;
      if ( v22 == nullptr )
        return;
      *v14 = v22;
      gameswf::RefCounted::addRef(v22);
      goto LABEL_25;
    }
    if ( v22 != nullptr )
LABEL_25:
      gameswf::RefCounted::dropRef(v22);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::getTopmostMouseEntity  (binary VA: 0x115f0b0)
// Original: gameswf::ASDisplayObjectContainer::getTopmostMouseEntity
// ----------------------------------------------------------------------------
gameswf::ASDisplayObjectContainer::Self * gameswf::ASDisplayObjectContainer::getTopmostMouseEntity(gameswf::ASDisplayObjectContainer::Self *a1, float a2, float a3, float *a4)
{
  gameswf::ASDisplayObjectContainer::Self *v4;
  int v5;
  gameswf::SceneNode::Self *v6;
  int Root;
  int v8;
  int v9;
  int v10;
  int v11;
  char *v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  char *v17;
  char *v18;
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm5_4
  const gameswf::Matrix::Self *v24;
  float v25; // xmm1_4
  int v26;
  int v27;
  gameswf::ASDisplayObjectContainer::Self *v28;
  int v29;
  int v30;
  char v31;
  char v32;
  int v33;
  uint16_t v34;
  int v35;
  gameswf::Self *v36;
  int *v37;
  char v38;
  gameswf::ASDisplayObjectContainer::Self *v39;
  int v40;
  int v41;
  int v42;
  char v44;
  int v45;
  int v46;
  int v47;
  bool v48;
  int v49;
  int v50;
  int v51;
  char *WorldMatrix;
  typedef int _g4_t_v53;
  typedef gameswf::ASDisplayObjectContainer::Self *_g4_t_v54;
  typedef gameswf::ASDisplayObjectContainer::Self *_g4_t_v55;
  typedef gameswf::ASDisplayObjectContainer::Self *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef gameswf::ASDisplayObjectContainer::Self *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef float _g4_t_v67;
  typedef char _g4_t_v68;
  typedef float _g4_t_v69;
  typedef bool _g4_t_v70;
  typedef int _g4_t_v71;
  typedef float _g4_t_v72;
  typedef char _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef float _g4_t_v76;
  typedef int _g4_t_v77;
  typedef float _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef float _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86;
  typedef uint32_t _g4_t_v87[16];
  typedef uint8_t _g4_t_v88[64];
  typedef uint32_t _g4_t_v89[16];
  typedef float _g4_t_v90[16];
  typedef gameswf::Self *_g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  enum : size_t {
    _g4_s0 = 592u,
    _g4_s1 = (0u + sizeof(_g4_t_v53)) > _g4_s0 ? (0u + sizeof(_g4_t_v53)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v54)) > _g4_s1 ? (16u + sizeof(_g4_t_v54)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v55)) > _g4_s2 ? (16u + sizeof(_g4_t_v55)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v56)) > _g4_s3 ? (16u + sizeof(_g4_t_v56)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v57)) > _g4_s4 ? (16u + sizeof(_g4_t_v57)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v58)) > _g4_s5 ? (16u + sizeof(_g4_t_v58)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v59)) > _g4_s6 ? (20u + sizeof(_g4_t_v59)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v60)) > _g4_s7 ? (20u + sizeof(_g4_t_v60)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v61)) > _g4_s8 ? (20u + sizeof(_g4_t_v61)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v62)) > _g4_s9 ? (24u + sizeof(_g4_t_v62)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v63)) > _g4_s10 ? (28u + sizeof(_g4_t_v63)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v64)) > _g4_s11 ? (32u + sizeof(_g4_t_v64)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v65)) > _g4_s12 ? (32u + sizeof(_g4_t_v65)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v66)) > _g4_s13 ? (36u + sizeof(_g4_t_v66)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v67)) > _g4_s14 ? (40u + sizeof(_g4_t_v67)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v68)) > _g4_s15 ? (40u + sizeof(_g4_t_v68)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v69)) > _g4_s16 ? (44u + sizeof(_g4_t_v69)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v70)) > _g4_s17 ? (44u + sizeof(_g4_t_v70)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v71)) > _g4_s18 ? (44u + sizeof(_g4_t_v71)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v72)) > _g4_s19 ? (60u + sizeof(_g4_t_v72)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v73)) > _g4_s20 ? (60u + sizeof(_g4_t_v73)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v74)) > _g4_s21 ? (60u + sizeof(_g4_t_v74)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v75)) > _g4_s22 ? (60u + sizeof(_g4_t_v75)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v76)) > _g4_s23 ? (76u + sizeof(_g4_t_v76)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v77)) > _g4_s24 ? (76u + sizeof(_g4_t_v77)) : _g4_s24,
    _g4_s26 = (80u + sizeof(_g4_t_v78)) > _g4_s25 ? (80u + sizeof(_g4_t_v78)) : _g4_s25,
    _g4_s27 = (80u + sizeof(_g4_t_v79)) > _g4_s26 ? (80u + sizeof(_g4_t_v79)) : _g4_s26,
    _g4_s28 = (80u + sizeof(_g4_t_v80)) > _g4_s27 ? (80u + sizeof(_g4_t_v80)) : _g4_s27,
    _g4_s29 = (84u + sizeof(_g4_t_v81)) > _g4_s28 ? (84u + sizeof(_g4_t_v81)) : _g4_s28,
    _g4_s30 = (84u + sizeof(_g4_t_v82)) > _g4_s29 ? (84u + sizeof(_g4_t_v82)) : _g4_s29,
    _g4_s31 = (84u + sizeof(_g4_t_v83)) > _g4_s30 ? (84u + sizeof(_g4_t_v83)) : _g4_s30,
    _g4_s32 = (96u + sizeof(_g4_t_v84)) > _g4_s31 ? (96u + sizeof(_g4_t_v84)) : _g4_s31,
    _g4_s33 = (100u + sizeof(_g4_t_v85)) > _g4_s32 ? (100u + sizeof(_g4_t_v85)) : _g4_s32,
    _g4_s34 = (104u + sizeof(_g4_t_v86)) > _g4_s33 ? (104u + sizeof(_g4_t_v86)) : _g4_s33,
    _g4_s35 = (108u + sizeof(_g4_t_v87)) > _g4_s34 ? (108u + sizeof(_g4_t_v87)) : _g4_s34,
    _g4_s36 = (172u + sizeof(_g4_t_v88)) > _g4_s35 ? (172u + sizeof(_g4_t_v88)) : _g4_s35,
    _g4_s37 = (236u + sizeof(_g4_t_v89)) > _g4_s36 ? (236u + sizeof(_g4_t_v89)) : _g4_s36,
    _g4_s38 = (300u + sizeof(_g4_t_v90)) > _g4_s37 ? (300u + sizeof(_g4_t_v90)) : _g4_s37,
    _g4_s39 = (364u + sizeof(_g4_t_v91)) > _g4_s38 ? (364u + sizeof(_g4_t_v91)) : _g4_s38,
    _g4_s40 = (368u + sizeof(_g4_t_v92)) > _g4_s39 ? (368u + sizeof(_g4_t_v92)) : _g4_s39,
    _g4_s41 = (372u + sizeof(_g4_t_v93)) > _g4_s40 ? (372u + sizeof(_g4_t_v93)) : _g4_s40,
    _g4_s42 = (376u + sizeof(_g4_t_v94)) > _g4_s41 ? (376u + sizeof(_g4_t_v94)) : _g4_s41,
    _g4_s43 = (380u + sizeof(_g4_t_v95)) > _g4_s42 ? (380u + sizeof(_g4_t_v95)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 0u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 16u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 20u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 20u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 20u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 24u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 28u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 32u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 36u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 40u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 40u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 44u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 44u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 44u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 60u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 60u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 60u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 76u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 76u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 80u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 80u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 80u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 84u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 84u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 84u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 96u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 100u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 104u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 108u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 172u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 236u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 300u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 364u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 368u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 372u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 376u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 380u);

  v4 = nullptr;
  if ( *((uint8_t *)a1 + 148) == 0 )
    return v4;
  v5 = *((uint32_t *)a1 + 19);
  if ( v5 != 0 )
  {
    v6 = *(gameswf::SceneNode::Self **)(v5 + 140);
    if ( v6 == nullptr || (gameswf::SceneNode::getLocalMouse(v6, a1, &a2, &a3), (v5 = *((uint32_t *)a1 + 19)) != 0) )
    {
      if ( *(uint8_t *)(v5 + 96) != 0 )
      {
        Root = gameswf::ASObject::getRoot((gameswf::Player::Self **)a1);
        memset(v87, 0, sizeof(v87));
        v87[15] = 1065353216;
        v87[10] = 1065353216;
        v87[5] = 1065353216;
        v8 = *(uint32_t *)(Root + 68);
        v87[0] = 1065353216;
        if ( v8 <= 0 )
        {
          gameswf::Transform::setIdentity((gameswf::Transform::Self *)v87);
        }
        else
        {
          std::memcpy(v87, (const void *)(*(uint32_t *)(Root + 64) + ((v8 - 1) << 6)), sizeof(v87));
          if ( *(uint32_t *)(*(uint32_t *)(Root + 80) + 4 * *(uint32_t *)(Root + 84) - 4) != 0 )
          {
LABEL_8:
            memset(v89, 0, sizeof(v89));
            v89[15] = 1065353216;
            v89[10] = 1065353216;
            v89[5] = 1065353216;
            v89[0] = 1065353216;
            gameswf::ASDisplayObjectContainer::getTransform((const gameswf::Matrix::Self **)a1, (gameswf::Transform::Self *)v89);
            gameswf::Transform::postMultiply((gameswf::Transform::Self *)v87, (const gameswf::Transform::Self *)v89);
            v9 = *(uint32_t *)(Root + 68);
            v10 = *(uint32_t *)(Root + 72);
            v11 = v9 + 1;
            if ( v9 + 1 <= v10 || *(uint32_t *)(Root + 76) != 0 )
            {
              v12 = *(char **)(Root + 64);
            }
            else
            {
              v51 = v11 + (v11 >> 1);
              *(uint32_t *)(Root + 72) = v51;
              if ( v51 != 0 )
              {
                if ( *(uint32_t *)(Root + 64) != 0 )
                {
                  v12 = (char *)gameswf::realloc_internal(*(gameswf::Self **)(Root + 64), v51 << 6, v10 << 6);
                }
                else
                {
                  v53 = 0;
                  v12 = (char *)gameswf::malloc_internal(v51 << 6);
                }
                *(uint32_t *)(Root + 64) = (uint32_t)(uintptr_t)(v12);
                v9 = *(uint32_t *)(Root + 68);
              }
              else
              {
                if ( *(uint32_t *)(Root + 64) != 0 )
                {
                  v53 = v10 << 6;
                  gameswf::free_internal(*(gameswf::Self **)(Root + 64));
                  v9 = *(uint32_t *)(Root + 68);
                }
                *(uint32_t *)(Root + 64) = 0;
                v12 = nullptr;
              }
            }
            v13 = &v12[64 * v9];
            if ( v13 != nullptr )
              std::memcpy(v13, v87, 64);
            v14 = *(uint32_t *)(Root + 84);
            *(uint32_t *)(Root + 68) = v11;
            v15 = *(uint32_t *)(Root + 88);
            v16 = v14 + 1;
            if ( v14 + 1 <= v15 || *(uint32_t *)(Root + 92) != 0 )
            {
              v17 = *(char **)(Root + 80);
            }
            else
            {
              v50 = v16 + (v16 >> 1);
              *(uint32_t *)(Root + 88) = v50;
              if ( v50 != 0 )
              {
                if ( *(uint32_t *)(Root + 80) != 0 )
                {
                  v17 = (char *)gameswf::realloc_internal(*(gameswf::Self **)(Root + 80), 4 * v50, 4 * v15);
                }
                else
                {
                  v53 = 0;
                  v17 = (char *)gameswf::malloc_internal(4 * v50);
                }
                *(uint32_t *)(Root + 80) = (uint32_t)(uintptr_t)(v17);
                v14 = *(uint32_t *)(Root + 84);
              }
              else
              {
                if ( *(uint32_t *)(Root + 80) != 0 )
                {
                  v53 = 4 * v15;
                  gameswf::free_internal(*(gameswf::Self **)(Root + 80));
                  v14 = *(uint32_t *)(Root + 84);
                }
                *(uint32_t *)(Root + 80) = 0;
                v17 = nullptr;
              }
            }
            v18 = &v17[4 * v14];
            if ( v18 != nullptr )
              *(uint32_t *)v18 = (uint32_t)(uintptr_t)(a1);
            *(uint32_t *)(Root + 84) = v16;
            v84 = *(float *)&v87[2];
            v64 = *(float *)&v87[3];
            v85 = *(float *)&v87[6];
            v63 = *(float *)&v87[7];
            v86 = *(float *)&v87[10];
            v62 = *(float *)&v87[11];
            gameswf::vector3df::normalize((gameswf::vector3df::Self *)&v84);
            v19 = a4[5] - a4[2];
            v78 = a4[2];
            v20 = a4[4] - a4[1];
            v76 = a4[1];
            v21 = a4[3] - *a4;
            v67 = *a4;
            v22 = (float)((float)(v20 * v85) + (float)(v84 * v21)) + (float)(v19 * v86);
            if ( v22 != 0.0 )
            {
              v23 = (float)((float)(v64 * v84)
                          - (float)((float)((float)((float)((float)(v76 * v85) + (float)(v84 * v67)) + (float)(v78 * v86))
                                          - (float)(v86 * v62))
                                  - (float)(v85 * v63)))
                  / v22;
              v72 = v78 + (float)(v19 * v23);
              v81 = v76 + (float)(v20 * v23);
              v69 = v67 + (float)(v23 * v21);
            }
            std::memcpy(v90, v87, sizeof(v90));
            gameswf::Transform::invert((gameswf::Transform::Self *)v90);
            v68 = 1;
            a3 = (float)((float)((float)(v69 * v90[4]) + (float)(v81 * v90[5])) + v90[7]) + (float)(v72 * v90[6]);
            a2 = (float)((float)((float)(v69 * v90[0]) + (float)(v81 * v90[1])) + v90[3]) + (float)(v72 * v90[2]);
            goto LABEL_20;
          }
        }
        if ( *((uint32_t *)a1 + 14) != 0 )
        {
          if ( *(uint8_t *)(*((uint32_t *)a1 + 13) + 2) != 0 )
          {
            WorldMatrix = gameswf::Character::getWorldMatrix(*((gameswf::Character::Self **)a1 + 14));
            gameswf::Transform::Transform((gameswf::Transform::Self *)v88, (const gameswf::Matrix::Self *)WorldMatrix);
            gameswf::Transform::postMultiply((gameswf::Transform::Self *)v87, (const gameswf::Transform::Self *)v88);
          }
          else
          {
            sub_7E5ED0((gameswf::Self **)a1 + 13, nullptr);
            *((uint32_t *)a1 + 14) = 0;
          }
        }
        goto LABEL_8;
      }
    }
  }
  v24 = *((const gameswf::Matrix::Self **)a1 + 17);
  memset(v90, 0, 0x18u);
  v90[0] = 1.0;
  v90[4] = 1.0;
  gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v90, v24);
  v68 = 0;
  v25 = (float)((float)(a2 * v90[0]) + (float)(a3 * v90[1])) + v90[2];
  a3 = (float)((float)(v90[3] * a2) + (float)(v90[4] * a3)) + v90[5];
  a2 = v25;
LABEL_20:
  v91 = nullptr;
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v26 = *((uint32_t *)a1 + 54);
  if ( (unsigned int)v26 <= 0x20 )
  {
    v93 = 32;
    v91 = (gameswf::Self *)&v95;
    v94 = 1;
  }
  if ( v26 <= 0 )
  {
    v71 = 0;
    v39 = nullptr;
    v4 = nullptr;
    goto LABEL_50;
  }
  v82 = v26;
  v70 = true;
  v73 = 0;
  v77 = 0;
  v27 = 0;
  v28 = a1;
  do
  {
    while ( 1 )
    {
      v29 = *(uint32_t *)(*((uint32_t *)v28 + 53) + 4 * v27);
      if ( v29 == 0 || *(uint8_t *)(v29 + 148) == 0 )
        goto LABEL_25;
      if ( v73 != 0 )
      {
        v30 = *(uint16_t *)(v29 + 140);
        v31 = 1;
        if ( v30 <= v77 )
          v31 = v70;
        v70 = v31;
        v32 = 0;
        if ( v30 <= v77 )
          v32 = v73;
        v73 = v32;
      }
      v59 = v28;
      v33 = G4_VCALL<int>(v29, 112, LODWORD(a2), LODWORD(a3), a4);
      v34 = *(uint16_t *)(v29 + 142);
      v28 = v59;
      if ( v34 == 0 )
        break;
      v73 = 1;
      v70 = v33 != 0;
      v77 = v34;
LABEL_25:
      if ( ++v27 == v82 )
        goto LABEL_42;
    }
    if ( v33 == 0 || !v70 )
      goto LABEL_25;
    v35 = v92;
    v79 = v92 + 1;
    v65 = v93;
    if ( v92 + 1 <= v93 || v94 != 0 )
    {
      v36 = v91;
    }
    else
    {
      v66 = (v79 >> 1) + v79;
      v93 = v66;
      if ( v66 != 0 )
      {
        v58 = v33;
        if ( v91 != nullptr )
        {
          v36 = (gameswf::Self *)gameswf::realloc_internal(v91, 4 * v66, 4 * v65);
          v91 = v36;
          v35 = v92;
          v33 = v58;
          v28 = v59;
        }
        else
        {
          v53 = 0;
          v36 = (gameswf::Self *)gameswf::malloc_internal(4 * v66);
          v91 = v36;
          v35 = v92;
          v28 = v59;
          v33 = v58;
        }
      }
      else
      {
        if ( v91 != nullptr )
        {
          v57 = v33;
          v53 = 4 * v65;
          gameswf::free_internal(v91);
          v35 = v92;
          v28 = v59;
          v33 = v57;
        }
        v91 = nullptr;
        v36 = nullptr;
      }
    }
    v37 = (int *)((char *)v36 + 4 * v35);
    if ( v37 != nullptr )
      *v37 = v33;
    ++v27;
    v92 = v79;
  }
  while ( v27 != v82 );
LABEL_42:
  v71 = v92;
  v74 = v92 - 1;
  if ( v92 - 1 < 0 )
  {
    v39 = nullptr;
    v4 = nullptr;
LABEL_50:
    if ( v68 != 0 )
      goto LABEL_71;
    goto LABEL_51;
  }
  v83 = 4 * (v92 - 1);
  while ( 1 )
  {
    v54 = *(gameswf::ASDisplayObjectContainer::Self **)((char *)v91 + v83);
    v38 = G4_VCALL<int>(v54, 344, v53);
    v39 = v54;
    if ( v38 != 0 )
      break;
    v40 = *((uint32_t *)v54 + 15);
    if ( *(uint8_t *)v40 == 0xFF )
    {
      if ( strcmp(*(const char **)(v40 + 12), "hitzone") == 0 )
      {
LABEL_49:
        v4 = nullptr;
        goto LABEL_50;
      }
    }
    else if ( strcmp((const char *)(v40 + 1), "hitzone") == 0 )
    {
      goto LABEL_49;
    }
    --v74;
    v83 -= 4;
    if ( v74 == -1 )
      goto LABEL_49;
  }
  v4 = v54;
  if ( v68 != 0 )
  {
LABEL_71:
    v56 = v39;
    v45 = gameswf::ASObject::getRoot((gameswf::Player::Self **)a1);
    gameswf::array_gameswf_Transform_9f8f44::resize(
      (gameswf::array<gameswf::Transform::Self> *)(v45 + 64),
      *(uint32_t *)(v45 + 68) - 1);
    v39 = v56;
    v46 = *(uint32_t *)(v45 + 84) - 1;
    if ( *(uint32_t *)(v45 + 84) != 1 )
    {
      v80 = *(uint32_t *)(v45 + 88);
      if ( v46 > v80 && *(uint32_t *)(v45 + 92) == 0 )
      {
        v47 = v46 + (v46 >> 1);
        v48 = v47 == 0;
        v75 = v47;
        *(uint32_t *)(v45 + 88) = v47;
        v49 = *(uint32_t *)(v45 + 80);
        if ( v48 )
        {
          if ( v49 != 0 )
          {
            v60 = v46;
            gameswf::free_internal(*(gameswf::Self **)(v45 + 80));
            v46 = v60;
            v39 = v56;
          }
          *(uint32_t *)(v45 + 80) = 0;
        }
        else
        {
          v61 = v46;
          if ( v49 != 0 )
            *(uint32_t *)(v45 + 80) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)(v45 + 80), 4 * v75, 4 * v80));
          else
            *(uint32_t *)(v45 + 80) = gameswf::malloc_internal(4 * v75);
          v39 = v56;
          v46 = v61;
        }
      }
    }
    *(uint32_t *)(v45 + 84) = v46;
  }
LABEL_51:
  if ( *(uint8_t *)(*((uint32_t *)a1 + 4) + 232) == 0 )
    goto LABEL_64;
  if ( v39 != nullptr && *((uint8_t *)a1 + 248) == 0 )
  {
    v4 = a1;
  }
  else
  {
    if ( v4 != nullptr )
      goto LABEL_55;
LABEL_64:
    if ( v71 > 0
      && (v55 = v39,
          v44 = G4_VCALL<int>(a1, 344),
          v39 = v55,
          v44 != 0) )
    {
      v4 = a1;
    }
    else if ( v4 == nullptr )
    {
      v4 = v39;
    }
  }
LABEL_55:
  v41 = v92;
  if ( v92 < 0 )
  {
    v42 = 4 * v92;
    do
    {
      if ( (gameswf::Self *)((char *)v91 + v42) != nullptr )
        *(uint32_t *)((char *)v91 + v42) = 0;
      v42 += 4;
      ++v41;
    }
    while ( v41 != 0 );
  }
  v92 = 0;
  if ( v94 == 0 )
  {
    v93 = 0;
    if ( v91 != nullptr )
      gameswf::free_internal(v91);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::display  (binary VA: 0x1160fa0)
// Original: gameswf::ASDisplayObjectContainer::display
// ----------------------------------------------------------------------------
int gameswf::ASDisplayObjectContainer::display(gameswf::Self **self)
{
  gameswf::ASDisplayObjectContainer::Self *v1;
  char v2;
  int result;
  int v4;
  gameswf::Self **v5;
  int v6;
  float *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  float *v12;
  int v13;
  int v14;
  char v15; // di
  int v16;
  gameswf::Character::Self *v17;
  char *WorldMatrix;
  gameswf::ASDisplayObjectContainer::Self *v19;
  int v20;
  int v21;
  int v22;
  gameswf::Self **v23;
  float v24;
  char *v25;
  float v26;
  uint32_t *v27;
  int v28;
  int v29;
  float *v30;
  uint32_t *v31;
  int v32;
  int v33;
  uint16_t *v34;
  int v35;
  uint16_t *v36;
  int v37;
  int v38;
  int v39;
  size_t v40;
  char *v41;
  typedef int64_t _g4_t_v42;
  typedef size_t _g4_t_v43;
  typedef gameswf::Matrix::Self *_g4_t_v44;
  typedef gameswf::Matrix::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef float *_g4_t_v55;
  typedef float *_g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef uint32_t *_g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70[6];
  typedef int _g4_t_v71[6];
  typedef float _g4_t_v72[6];
  typedef float _g4_t_v73[16];
  typedef uint8_t _g4_t_v74[64];
  typedef uint8_t _g4_t_v75[64];
  typedef uint32_t _g4_t_v76[16];
  typedef float _g4_t_v77[16];
  typedef uint32_t _g4_t_v78[16];
  typedef uint8_t _g4_t_v79[92];
  enum : size_t {
    _g4_s0 = 704u,
    _g4_s1 = (0u + sizeof(_g4_t_v42)) > _g4_s0 ? (0u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v43)) > _g4_s1 ? (0u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v44)) > _g4_s2 ? (4u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v45)) > _g4_s3 ? (4u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v46)) > _g4_s4 ? (8u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v47)) > _g4_s5 ? (12u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v48)) > _g4_s6 ? (16u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v49)) > _g4_s7 ? (20u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v50)) > _g4_s8 ? (24u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v51)) > _g4_s9 ? (32u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v52)) > _g4_s10 ? (32u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v53)) > _g4_s11 ? (32u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v54)) > _g4_s12 ? (32u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v55)) > _g4_s13 ? (36u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v56)) > _g4_s14 ? (40u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v57)) > _g4_s15 ? (40u + sizeof(_g4_t_v57)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v58)) > _g4_s16 ? (44u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v59)) > _g4_s17 ? (48u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v60)) > _g4_s18 ? (52u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v61)) > _g4_s19 ? (56u + sizeof(_g4_t_v61)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v62)) > _g4_s20 ? (56u + sizeof(_g4_t_v62)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v63)) > _g4_s21 ? (60u + sizeof(_g4_t_v63)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v64)) > _g4_s22 ? (64u + sizeof(_g4_t_v64)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v65)) > _g4_s23 ? (68u + sizeof(_g4_t_v65)) : _g4_s23,
    _g4_s25 = (72u + sizeof(_g4_t_v66)) > _g4_s24 ? (72u + sizeof(_g4_t_v66)) : _g4_s24,
    _g4_s26 = (76u + sizeof(_g4_t_v67)) > _g4_s25 ? (76u + sizeof(_g4_t_v67)) : _g4_s25,
    _g4_s27 = (80u + sizeof(_g4_t_v68)) > _g4_s26 ? (80u + sizeof(_g4_t_v68)) : _g4_s26,
    _g4_s28 = (84u + sizeof(_g4_t_v69)) > _g4_s27 ? (84u + sizeof(_g4_t_v69)) : _g4_s27,
    _g4_s29 = (88u + sizeof(_g4_t_v70)) > _g4_s28 ? (88u + sizeof(_g4_t_v70)) : _g4_s28,
    _g4_s30 = (112u + sizeof(_g4_t_v71)) > _g4_s29 ? (112u + sizeof(_g4_t_v71)) : _g4_s29,
    _g4_s31 = (136u + sizeof(_g4_t_v72)) > _g4_s30 ? (136u + sizeof(_g4_t_v72)) : _g4_s30,
    _g4_s32 = (160u + sizeof(_g4_t_v73)) > _g4_s31 ? (160u + sizeof(_g4_t_v73)) : _g4_s31,
    _g4_s33 = (224u + sizeof(_g4_t_v74)) > _g4_s32 ? (224u + sizeof(_g4_t_v74)) : _g4_s32,
    _g4_s34 = (288u + sizeof(_g4_t_v75)) > _g4_s33 ? (288u + sizeof(_g4_t_v75)) : _g4_s33,
    _g4_s35 = (352u + sizeof(_g4_t_v76)) > _g4_s34 ? (352u + sizeof(_g4_t_v76)) : _g4_s34,
    _g4_s36 = (416u + sizeof(_g4_t_v77)) > _g4_s35 ? (416u + sizeof(_g4_t_v77)) : _g4_s35,
    _g4_s37 = (480u + sizeof(_g4_t_v78)) > _g4_s36 ? (480u + sizeof(_g4_t_v78)) : _g4_s36,
    _g4_s38 = (544u + sizeof(_g4_t_v79)) > _g4_s37 ? (544u + sizeof(_g4_t_v79)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 0u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 32u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 36u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 40u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 40u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 44u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 48u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 56u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 56u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 60u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 64u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 68u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 72u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 76u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 80u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 84u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 88u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 112u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 136u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 160u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 224u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 288u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 352u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 416u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 480u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 544u);

  v1 = (gameswf::ASDisplayObjectContainer::Self *)self;
  BYTE1(v60) = *((uint8_t *)self + 145);
  BYTE2(v60) = *((uint8_t *)self + 146);
  v2 = BYTE2(v60);
  if ( BYTE1(v60) != 0 )
  {
    v22 = (int)(uintptr_t)(*(self + 14));
    if ( v22 != 0 )
    {
      v23 = (gameswf::Self **)(v22 + 112);
      if ( *((uint8_t *)*(self + 13) + 2) != 0 )
      {
LABEL_36:
        *(self + 28) = *v23;
        *(self + 29) = v23[1];
        *(self + 30) = v23[2];
        *(self + 31) = v23[3];
        *(self + 32) = v23[4];
        *(self + 33) = v23[5];
        gameswf::Matrix::concatenate((gameswf::Matrix::Self *)(self + 28), *(self + 17));
        *((uint8_t *)self + 145) = 0;
        v2 = *((uint8_t *)self + 146);
        goto LABEL_2;
      }
      sub_7E5ED0(self + 13, nullptr);
      *(self + 14) = nullptr;
    }
    v23 = (gameswf::Self **)gameswf::Matrix::identity;
    goto LABEL_36;
  }
LABEL_2:
  if ( v2 != 0 )
  {
    v4 = (int)(uintptr_t)(*(self + 14));
    if ( v4 != 0 )
    {
      v5 = (gameswf::Self **)(v4 + 80);
      if ( *((uint8_t *)*(self + 13) + 2) != 0 )
        goto LABEL_10;
      sub_7E5ED0(self + 13, nullptr);
      *(self + 14) = nullptr;
    }
    v5 = (gameswf::Self **)gameswf::CxForm::identity;
LABEL_10:
    *(self + 20) = *v5;
    *(self + 21) = v5[1];
    *(self + 22) = v5[2];
    *(self + 23) = v5[3];
    *(self + 24) = v5[4];
    *(self + 25) = v5[5];
    *(self + 26) = v5[6];
    *(self + 27) = v5[7];
    HIDWORD(v42) = (uint32_t)(uintptr_t)(*(self + 16));
    LODWORD(v42) = (uint32_t)(uintptr_t)(self + 20);
    gameswf::CxForm::concatenate(v42);
    v6 = (int)(uintptr_t)(*(self + 54));
    *((uint8_t *)self + 146) = 0;
    if ( v6 == 0 )
      goto LABEL_4;
    goto LABEL_11;
  }
  if ( *(self + 54) == nullptr )
    goto LABEL_4;
LABEL_11:
  memset(v70, 0, sizeof(v70));
  v7 = (float *)*(self + 18);
  v70[0] = 1065353216;
  v70[4] = 1065353216;
  v56 = v7;
  v58 = 0.0;
  v8 = *((uint32_t *)v7 + 2);
  if ( v8 <= 0 )
    goto LABEL_20;
  v9 = *((uint32_t *)v7 + 1);
  v10 = 0;
  v11 = 0;
  v61 = v8;
  do
  {
    while ( 1 )
    {
      v12 = (float *)(v9 + v11);
      v13 = *(uint32_t *)(v9 + v11);
      if ( gameswf::s_filterEnabled[v13] != 0 )
        break;
LABEL_15:
      ++v10;
      v11 += 96;
      if ( v10 == v61 )
        goto LABEL_19;
    }
    switch ( v13 )
    {
      case 1:
        if ( *(float *)&v70[4] >= v12[21] )
        {
          v26 = *(float *)&v56;
          if ( *(float *)&v70[4] >= v12[22] )
            v26 = v58;
          v58 = v26;
        }
        else
        {
          v58 = *(float *)&v56;
        }
        goto LABEL_15;
      case 6:
        goto LABEL_18;
      case 8:
        if ( v12[5] == 0.0 )
        {
          v24 = *(float *)&v56;
          if ( v12[6] == 0.0 )
            v24 = v58;
          v58 = v24;
          goto LABEL_15;
        }
LABEL_18:
        ++v10;
        v11 += 96;
        v58 = *(float *)&v56;
        break;
      default:
        goto LABEL_15;
    }
  }
  while ( v10 != v61 );
LABEL_19:
  v1 = (gameswf::ASDisplayObjectContainer::Self *)self;
LABEL_20:
  HIBYTE(v60) = 0;
  v59 = *v56;
  if ( *(uint32_t *)v56 != 0 )
    HIBYTE(v60) = *(uint32_t *)(*((uint32_t *)v1 + 4) + 220) == 0;
  v14 = *((uint32_t *)v1 + 19);
  v15 = 0;
  if ( v14 != 0 && *(uint8_t *)(v14 + 96) != 0 )
  {
    v62 = (uint32_t *)(&gameswf::s_render_handler);
    v55 = v73;
    memset(v73, 0, sizeof(v73));
    v73[15] = 1.0;
    v73[10] = 1.0;
    v73[5] = 1.0;
    v73[0] = 1.0;
    v16 = gameswf::s_render_handler[6];
    if ( v16 <= 0 )
    {
      memset(v73, 0, sizeof(v73));
      v73[15] = 1.0;
      v73[10] = 1.0;
      v73[5] = 1.0;
      v73[0] = 1.0;
    }
    else
    {
      std::memcpy(v73, (const void *)(gameswf::s_render_handler[5] + ((v16 - 1) << 6)), sizeof(v73));
      v17 = *(gameswf::Character::Self **)(gameswf::s_render_handler[9] + 4 * gameswf::s_render_handler[10] - 4);
      if ( v17 != nullptr )
      {
        WorldMatrix = gameswf::Character::getWorldMatrix(v17);
        gameswf::Transform::Transform((gameswf::Transform::Self *)v74, (const gameswf::Matrix::Self *)WorldMatrix);
        gameswf::Transform::postMultiply((gameswf::Transform::Self *)v73, (const gameswf::Transform::Self *)v74);
        goto LABEL_27;
      }
    }
    if ( *((uint32_t *)v1 + 14) != 0 )
    {
      if ( *(uint8_t *)(*((uint32_t *)v1 + 13) + 2) != 0 )
      {
        v41 = gameswf::Character::getWorldMatrix(*((gameswf::Character::Self **)v1 + 14));
        gameswf::Transform::Transform((gameswf::Transform::Self *)v75, (const gameswf::Matrix::Self *)v41);
        gameswf::Transform::postMultiply((gameswf::Transform::Self *)v73, (const gameswf::Transform::Self *)v75);
      }
      else
      {
        sub_7E5ED0((gameswf::Self **)v1 + 13, nullptr);
        *((uint32_t *)v1 + 14) = 0;
      }
    }
LABEL_27:
    memset(v76, 0, sizeof(v76));
    v76[15] = 1065353216;
    v76[10] = 1065353216;
    v76[5] = 1065353216;
    v76[0] = 1065353216;
    gameswf::ASDisplayObjectContainer::getTransform((const gameswf::Matrix::Self **)v1, (gameswf::Transform::Self *)v76);
    gameswf::Transform::postMultiply((gameswf::Transform::Self *)v73, (const gameswf::Transform::Self *)v76);
    if ( *(uint8_t *)(*((uint32_t *)v1 + 19) + 97) != 0 && *((int *)v1 + 54) > 1 )
    {
      v57 = 0.0;
      v19 = v1;
      do
      {
        v21 = *(uint32_t *)(*((uint32_t *)v19 + 53) + 4 * LODWORD(v57));
        if ( *(uint32_t *)(v21 + 76) == 0 )
        {
          v33 = opNew(0x94u);
          v34 = (uint16_t *)(v33 + 32);
          v35 = v33;
          *(uint32_t *)v33 = 1065353216;
          *(uint32_t *)(v33 + 8) = 1065353216;
          *(uint32_t *)(v33 + 16) = 1065353216;
          *(uint32_t *)(v33 + 24) = 1065353216;
          *(uint32_t *)(v33 + 4) = 0;
          *(uint32_t *)(v33 + 12) = 0;
          *(uint32_t *)(v33 + 20) = 0;
          *(uint32_t *)(v33 + 28) = 0;
          v63 = 24;
          if ( ((v33 + 32) & 1) != 0 )
          {
            *(uint8_t *)(v33 + 32) = 0;
            v34 = (uint16_t *)(v33 + 33);
            v63 = 23;
          }
          if ( ((uint8_t)(uintptr_t)(v34) & 2) != 0 )
          {
            *v34++ = 0;
            v63 -= 2;
          }
          memset(v34, 0, 4 * (v63 >> 2));
          v36 = &v34[2 * (v63 >> 2)];
          if ( (v63 & 2) != 0 )
            *v36++ = 0;
          if ( (v63 & 1) != 0 )
            *(uint8_t *)v36 = 0;
          v37 = *(uint32_t *)(v33 + 92);
          *(uint32_t *)(v35 + 32) = 1065353216;
          v37 |= 0x7FFFFFu;
          *(uint32_t *)(v35 + 48) = 1065353216;
          *(uint32_t *)(v35 + 92) = v37;
          *(uint32_t *)(v35 + 56) = 0;
          *(uint32_t *)(v35 + 60) = 0;
          *(uint32_t *)(v35 + 64) = 0;
          *(uint32_t *)(v35 + 68) = 0;
          *(uint32_t *)(v35 + 72) = 0;
          *(uint8_t *)(v35 + 76) = 1;
          *(uint8_t *)(v35 + 77) = 0;
          *(uint8_t *)(v35 + 94) = BYTE2(v37) & 0x7F;
          *(uint16_t *)(v35 + 95) = HIBYTE(v37) | 1;
          *(uint8_t *)(v35 + 97) = 0;
          *(uint8_t *)(v35 + 98) = 0;
          *(uint32_t *)(v35 + 100) = 0;
          *(uint32_t *)(v35 + 104) = 1065353216;
          *(uint32_t *)(v35 + 108) = 0;
          *(uint32_t *)(v35 + 112) = 1065353216;
          *(uint32_t *)(v35 + 116) = 0;
          *(uint32_t *)(v35 + 120) = 0;
          *(uint32_t *)(v35 + 124) = 0;
          *(uint32_t *)(v35 + 128) = 0;
          *(uint32_t *)(v35 + 132) = 0;
          *(uint32_t *)(v35 + 136) = 0;
          *(uint32_t *)(v35 + 140) = 0;
          *(uint32_t *)(v35 + 144) = 0;
          *(uint32_t *)(v21 + 76) = v35;
        }
        if ( *(uint8_t *)(v21 + 144) == 2 )
        {
          std::memcpy(v77, v73, sizeof(v77));
          memset(v78, 0, sizeof(v78));
          v78[15] = 1065353216;
          v78[10] = 1065353216;
          v78[5] = 1065353216;
          v78[0] = 1065353216;
          gameswf::ASDisplayObjectContainer::getTransform((const gameswf::Matrix::Self **)v21, (gameswf::Transform::Self *)v78);
          gameswf::Transform::postMultiply((gameswf::Transform::Self *)v77, (const gameswf::Transform::Self *)v78);
          gameswf::Character::getBound(
            (gameswf::Character::Self *)v21,
            (gameswf::Rect::Self *)&v66,
            v46,
            v47,
            v48,
            v49,
            v50,
            COERCE_FLOAT(v78),
            0.0,
            *(float *)&v55,
            v57,
            v58,
            v59,
            v60,
            (int)(uintptr_t)(v62),
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70[0],
            v70[1],
            v70[2],
            v70[3],
            v70[4],
            v70[5],
            v71[0],
            v71[1],
            v71[2],
            *(float *)&v71[3],
            *(float *)&v71[4],
            *(float *)&v71[5],
            v72[0],
            v72[1],
            v72[2],
            v72[3],
            v72[4],
            v72[5],
            v73[0],
            v73[1],
            v73[2],
            v73[3],
            v73[4],
            v73[5],
            v73[6],
            v73[7],
            v73[8],
            v73[9],
            v73[10],
            v73[11],
            v73[12],
            v73[13],
            v73[14]);
          v44 = *(gameswf::Matrix::Self **)(v21 + 68);
          memset32(v72, v51, 6u);
          v72[0] = 1.0;
          v72[4] = 1.0;
          gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v72, v44);
          gameswf::Matrix::transform((gameswf::Matrix::Self *)v72, (gameswf::Rect::Self *)&v66);
          *(float *)(*(uint32_t *)(v21 + 76) + 128) = (float)((float)((float)(v77[11] + v77[11])
                                                                  + (float)((float)(*(float *)&v67 + *(float *)&v66)
                                                                          * v77[8]))
                                                          + (float)((float)(*(float *)&v69 + *(float *)&v68) * v77[9]))
                                                  * 0.5;
        }
        ++LODWORD(v57);
        v20 = *((uint32_t *)v19 + 54);
      }
      while ( SLODWORD(v57) < v20 );
      v1 = v19;
      v38 = *((uint32_t *)v19 + 53);
      v39 = v38 + 4 * v20;
      if ( v38 != v39 )
      {
        LOBYTE(v47) = 0;
        v52 = 4 * v20;
        v45 = (gameswf::Matrix::Self *)(v38 + 4 * v20);
        _BitScanReverse((unsigned int *)&v20, (4 * v20) >> 2);
        g4_std::introsort_loop_gameswf_DisplayObjectInf_49f297(
          v38,
          v45,
          2 * (31 - (v20 ^ 0x1F)));
        if ( v52 <= 67 )
        {
          g4_std::insertion_sort_gameswf_DisplayObjectInf_411256(v38, v39);
        }
        else
        {
          g4_std::insertion_sort_gameswf_DisplayObjectInf_411256(v38, v38 + 64);
          if ( v39 != v38 + 64 )
          {
            v40 = v38 + 64;
            do
            {
              v43 = v40;
              v40 += 4;
              g4_std::unguarded_linear_insert_gameswf_DisplayObjectInf_ac468b(v43);
            }
            while ( v39 != v40 );
          }
        }
      }
    }
    memset(v71, 0, sizeof(v71));
    v71[0] = 1065353216;
    v71[4] = 1065353216;
    v25 = gameswf::Character::getWorldMatrix(v1);
    gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v71, (const gameswf::Matrix::Self *)v25);
    gameswf::Transform::Transform((gameswf::Transform::Self *)v79, (const gameswf::Matrix::Self *)v71);
    v15 = 1;
    gameswf::Transform::postMultiply((gameswf::Transform::Self *)v73, (const gameswf::Transform::Self *)v79);
    G4_VCALL<void>(*v62, 96, v73, v1, v47);
  }
  if ( v58 == 0.0 )
  {
    if ( HIBYTE(v60) != 0 )
    {
      v27 = *((uint32_t **)v1 + 4);
      v28 = v27[55];
      v29 = v28 + 1;
      if ( v28 + 1 > v27[56] )
      {
        v53 = v28 + 1;
        gameswf::array_gameswf_BlendMode_id_db5dba::reserve(
          (gameswf::array<gameswf::BlendMode::id> *)(v27 + 54),
          v29 + (v29 >> 1));
        v28 = v27[55];
        v29 = v53;
      }
      v30 = (float *)(v27[54] + 4 * v28);
      if ( v30 != nullptr )
        *v30 = v59;
      v27[55] = v29;
      if ( gameswf::s_render_handler != nullptr )
        *((float *)gameswf::s_render_handler + 53) = v59;
      gameswf::DisplayList::display((gameswf::ASDisplayObjectContainer::Self *)((char *)v1 + 212), SBYTE1(v60), SBYTE2(v60));
      v31 = *((uint32_t **)v1 + 4);
      v32 = v31[55] - 1;
      if ( v31[55] != 1 && v32 > v31[56] )
      {
        v54 = v31[55] - 1;
        gameswf::array_gameswf_BlendMode_id_db5dba::reserve(
          (gameswf::array<gameswf::BlendMode::id> *)(v31 + 54),
          v32 + (v32 >> 1));
        v32 = v54;
      }
      v31[55] = v32;
      if ( gameswf::s_render_handler != nullptr )
        gameswf::s_render_handler[53] = 0;
    }
    else
    {
      gameswf::DisplayList::display((gameswf::ASDisplayObjectContainer::Self *)((char *)v1 + 212), SBYTE1(v60), SBYTE2(v60));
    }
  }
  else
  {
    (*(void (**)(uint32_t *))(*gameswf::s_render_handler + 24))((uint32_t *)(gameswf::s_render_handler));
    gameswf::DisplayList::display((gameswf::ASDisplayObjectContainer::Self *)((char *)v1 + 212), SBYTE1(v60), SBYTE2(v60));
    gameswf::Character::getProjectedBound((gameswf::ASDisplayObjectContainer::Self **)v1, (gameswf::Rect::Self *)v78);
    (*(void (**)(uint32_t *, float, uint32_t *))(*gameswf::s_render_handler + 28))(
      (uint32_t *)(gameswf::s_render_handler),
      COERCE_FLOAT(LODWORD(v58)),
      v78);
  }
  if ( v15 != 0 )
    (*(void (**)(uint32_t *))(*gameswf::s_render_handler + 100))((uint32_t *)(gameswf::s_render_handler));
LABEL_4:
  result = *((uint32_t *)v1 + 19);
  if ( result != 0 && *(uint32_t *)(result + 132) != 0 )
    return gameswf::Character::doDisplayCallback(v1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASDisplayObjectContainer::is  (binary VA: 0x1161f70)
// Original: gameswf::ASDisplayObjectContainer::is
// ----------------------------------------------------------------------------
bool gameswf::ASDisplayObjectContainer::is(gameswf::ASDisplayObjectContainer::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 4 && a2 != 1 && a2 != 57 )
    return a2 == 0;
  return result;
}


