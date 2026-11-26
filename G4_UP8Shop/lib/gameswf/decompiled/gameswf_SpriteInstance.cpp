#include "Core/Utils/DecompTypes.h"
#include "gameswf_SpriteInstance.h"

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::getPlayState  (binary VA: 0x10e1e70)
// Original: gameswf::SpriteInstance::getPlayState
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::getPlayState(gameswf::SpriteInstance::Self *self)
{
  return *((char *)self + 266);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::findPreviousReplaceOrAddTag  (binary VA: 0x10e1e80)
// Original: gameswf::SpriteInstance::findPreviousReplaceOrAddTag
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::findPreviousReplaceOrAddTag(gameswf::SpriteInstance::Self *self, int a2, int a3, uint16_t a4)
{
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v10;
  int v11;

  v4 = 0;
  v11 = a2 - 1;
  if ( a2 - 1 >= 0 )
  {
    while ( 1 )
    {
      v5 = (uint32_t *)(*(int (**)(uint32_t, int))(**((uint32_t **)self + 63) + 76))(*((uint32_t *)self + 63), v11);
      v6 = v5[1] - 1;
      if ( v6 >= 0 )
        break;
LABEL_7:
      if ( --v11 == -1 )
        return 0;
    }
    v7 = 4 * v6;
    while ( 1 )
    {
      v4 = *(uint32_t *)(*v5 + v7);
      v10 = v5;
      v8 = G4_VCALL<int>(v4, 28);
      v5 = v10;
      if ( ((a3 << 16) | a4) == v8 )
        break;
      --v6;
      v7 -= 4;
      if ( v6 == -1 )
        goto LABEL_7;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::gotoLabeledFrame  (binary VA: 0x10e1f20)
// Original: gameswf::SpriteInstance::gotoLabeledFrame
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::gotoLabeledFrame(gameswf::SpriteInstance::Self *self, const gameswf::StringI::Self *a2)
{
  char v2;
  int v3;
  int v5[4];

  v5[0] = -1;
  v2 = (*(int (**)(uint32_t, const gameswf::StringI::Self *, int *))(**((uint32_t **)self + 63) + 92))(
         *((uint32_t *)self + 63),
         a2,
         v5);
  v3 = 0;
  if ( v2 != 0 )
  {
    G4_VCALL<void>(self, 328, v5[0]);
    return 1;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::addActionBuffer  (binary VA: 0x10e1f80)
// Original: gameswf::SpriteInstance::addActionBuffer
// ----------------------------------------------------------------------------
void gameswf::SpriteInstance::addActionBuffer()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::callFrameActions  (binary VA: 0x10e1f90)
// Original: gameswf::SpriteInstance::callFrameActions
// ----------------------------------------------------------------------------
void gameswf::SpriteInstance::callFrameActions()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::getEnvironment  (binary VA: 0x10e1fa0)
// Original: gameswf::SpriteInstance::getEnvironment
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::getEnvironment()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::getDragState  (binary VA: 0x10e1fb0)
// Original: gameswf::SpriteInstance::getDragState
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::getDragState(gameswf::Player::Self **a1, uint32_t *a2)
{
  uint32_t *Root;
  int result;

  Root = (uint32_t *)gameswf::ASObject::getRoot(a1);
  *a2 = Root[47];
  a2[1] = Root[48];
  a2[2] = Root[49];
  a2[3] = Root[50];
  a2[4] = Root[51];
  a2[5] = Root[52];
  a2[6] = Root[53];
  result = Root[54];
  a2[7] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::dump  (binary VA: 0x10e2020)
// Original: gameswf::SpriteInstance::dump
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::dump(gameswf::SpriteInstance::Self *self, gameswf::String::Self *a2)
{
  int v2;
  char *v3;
  char *v4;
  char *v5;
  int v6;

  v2 = *(char *)a2 - 1;
  if ( *(uint8_t *)a2 == 0xFF )
    v2 = *((uint32_t *)a2 + 1) - 1;
  gameswf::String::resize(a2, v2 + 2);
  LOBYTE(v3) = *(uint8_t *)a2;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    v3 = *((char **)a2 + 1);
    v4 = *((char **)a2 + 3);
  }
  else
  {
    v3 = (char *)(char)(uintptr_t)v3;
    v4 = (char *)a2 + 1;
  }
  gameswf::Strcpy_s((gameswf::Self *)&v4[v2], v3, (gameswf::Self *)"  ");
  *((uint32_t *)a2 + 4) |= 0x7FFFFFu;
  v5 = (char *)a2 + 1;
  if ( *(uint8_t *)a2 == 0xFF )
    v5 = *((char **)a2 + 3);
  printf("%s*** movieclip 0x%p ***\n", v5, self);
  gameswf::ASObject::dump(self, a2);
  gameswf::DisplayList::dump((gameswf::SpriteInstance::Self *)((char *)self + 212), a2);
  if ( *(uint8_t *)a2 == 0xFF )
    v6 = *((uint32_t *)a2 + 1) - 1;
  else
    v6 = *(char *)a2 - 1;
  return gameswf::String::resize(a2, v6 - 2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::removeDisplayObject  (binary VA: 0x10e2140)
// Original: gameswf::SpriteInstance::removeDisplayObject
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::removeDisplayObject(gameswf::SpriteInstance::Self *self, gameswf::Character::Self *a2)
{
  gameswf::Character::invalidateBitmapCache(self);
  return gameswf::DisplayList::removeDisplayObject((gameswf::SpriteInstance::Self *)((char *)self + 212), a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::removeDisplayObject  (binary VA: 0x10e2190)
// Original: gameswf::SpriteInstance::removeDisplayObject
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::removeDisplayObject(gameswf::SpriteInstance::Self *self, const gameswf::String::Self *a2)
{
  int result;

  result = gameswf::DisplayList::getCharacterByName((gameswf::SpriteInstance::Self *)((char *)self + 212), a2);
  if ( result != 0 )
    return G4_VCALL<int>(self, 204, *(uint16_t *)(result + 140), *(uint32_t *)(result + 48));
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::stopDrag  (binary VA: 0x10e21f0)
// Original: gameswf::SpriteInstance::stopDrag
// ----------------------------------------------------------------------------
gameswf::Root::Self * gameswf::SpriteInstance::stopDrag(gameswf::Player::Self **self)
{
  gameswf::Root::Self *Root;

  Root = (gameswf::Root::Self *)gameswf::ASObject::getRoot(self);
  return gameswf::Root::stopDrag(Root);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::clearDisplayObjects  (binary VA: 0x10e2220)
// Original: gameswf::SpriteInstance::clearDisplayObjects
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::clearDisplayObjects(gameswf::SpriteInstance::Self *self)
{
  return gameswf::DisplayList::clear((gameswf::SpriteInstance::Self *)((char *)self + 212));
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::removeDisplayObject  (binary VA: 0x10e2250)
// Original: gameswf::SpriteInstance::removeDisplayObject
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::removeDisplayObject(gameswf::SpriteInstance::Self *self, int a2, int a3)
{
  return gameswf::DisplayList::removeDisplayObject((gameswf::SpriteInstance::Self *)((char *)self + 212), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::moveDisplayObject  (binary VA: 0x10e2290)
// Original: gameswf::SpriteInstance::moveDisplayObject
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::moveDisplayObject(gameswf::SpriteInstance::Self *self, char *a2, const gameswf::CxForm::Self *a3, const gameswf::Matrix::Self *a4, const gameswf::Effect::Self *a5, float a6)
{
  gameswf::DisplayList::moveDisplayObject((gameswf::SpriteInstance::Self *)((char *)self + 212), a2, a3, a4, a5, a6);
  return gameswf::Character::invalidateBitmapCache(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::doActions  (binary VA: 0x10e2300)
// Original: gameswf::SpriteInstance::doActions
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::SpriteInstance::doActions(int a1, int a2)
{
  gameswf::Self *result;
  int v3;
  gameswf::ASEnvironment::Self *v4;

  result = *(gameswf::Self **)(a2 + 4);
  if ( (int)(uintptr_t)(result) > 0 )
  {
    v3 = 0;
    do
    {
      v4 = (gameswf::ASEnvironment::Self *)G4_VCALL<int>(a1, 92, v4);
      ++v3;
      gameswf::ActionBuffer::execute();
    }
    while ( *(uint32_t *)(a2 + 4) > v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::getMemberByName  (binary VA: 0x10e2360)
// Original: gameswf::SpriteInstance::getMemberByName
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::getMemberByName(gameswf::SpriteInstance::Self *self, const gameswf::StringI::Self *a2, gameswf::ASValue::Self *a3)
{
  gameswf::ASObject::Self *CharacterByNameI;
  int result;
  char MemberByName;

  CharacterByNameI = (gameswf::ASObject::Self *)gameswf::DisplayList::getCharacterByNameI(
                                            (gameswf::SpriteInstance::Self *)((char *)self + 212),
                                            a2);
  if ( CharacterByNameI != nullptr )
  {
    gameswf::ASValue::setObject(a3, CharacterByNameI);
    return 1;
  }
  else
  {
    MemberByName = gameswf::ASObject::getMemberByName(self, a2, a3);
    result = 1;
    if ( MemberByName == 0 )
      return gameswf::get_builtin(1, (char *)a2, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::canHandleMouseEvent  (binary VA: 0x10e2400)
// Original: gameswf::SpriteInstance::canHandleMouseEvent
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::canHandleMouseEvent(gameswf::SpriteInstance::Self *self)
{
  char v1;
  int v2;
  int v3;
  const void *v4;

  v1 = G4_VCALL<int>(self, 368);
  v2 = 0;
  if ( v1 != 0 )
  {
    v2 = 1;
    if ( *((uint8_t *)self + 149) == 0 )
    {
      v3 = *((uint32_t *)self + 15);
      if ( *(uint8_t *)v3 == 0xFF )
        v4 = *(const void **)(v3 + 12);
      else
        v4 = (const void *)(v3 + 1);
      LOBYTE(v2) = memcmp(v4, "btn", 3u) == 0;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::construct  (binary VA: 0x10e2640)
// Original: gameswf::SpriteInstance::construct
// ----------------------------------------------------------------------------
void gameswf::SpriteInstance::construct(gameswf::SpriteInstance::Self *self)
{
  int v1;

  if ( *((uint8_t *)self + 271) == 0 )
  {
    v1 = *((uint32_t *)self + 4);
    *((uint8_t *)self + 271) = 1;
    if ( *(uint8_t *)(v1 + 232) == 0 )
    {
      gameswf::CharacterDef::instanciateRegisteredClass(*((gameswf::Self ***)self + 63), self);
      gameswf::DisplayList::construct((gameswf::SpriteInstance::Self *)((char *)self + 212));
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::thisAlive  (binary VA: 0x10e26c0)
// Original: gameswf::SpriteInstance::thisAlive
// ----------------------------------------------------------------------------
uint32_t * gameswf::SpriteInstance::thisAlive(gameswf::SpriteInstance::Self *self)
{
  uint32_t *result;
  int v2;
  int i;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
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

  result = *((uint32_t **)self + 4);
  if ( result[25] > *((uint32_t *)self + 5) )
  {
    gameswf::Character::thisAlive(self);
    v2 = *((uint32_t *)self + 54);
    if ( v2 > 0 )
    {
      for ( i = 0; i != v2; ++i )
      {
        while ( 1 )
        {
          v4 = *(uint32_t **)(*((uint32_t *)self + 53) + 4 * i);
          if ( v4 != nullptr && *(uint32_t *)(*((uint32_t *)self + 4) + 100) > v4[5] )
            break;
          if ( ++i == v2 )
            goto LABEL_9;
        }
        G4_VCALL<void>(v4, 76);
      }
    }
LABEL_9:
    v5 = *((uint32_t *)self + 69);
    if ( v5 != 0 )
      (*(void (**)(uint32_t))(*(uint32_t *)v5 + 76))(*((uint32_t *)self + 69));
    v6 = *((uint32_t *)self + 70);
    if ( v6 != 0 )
      (*(void (**)(uint32_t))(*(uint32_t *)v6 + 76))(*((uint32_t *)self + 70));
    v7 = *((uint32_t *)self + 71);
    if ( v7 != 0 )
      (*(void (**)(uint32_t))(*(uint32_t *)v7 + 76))(*((uint32_t *)self + 71));
    result = *((uint32_t **)self + 72);
    if ( result != nullptr )
      result = (uint32_t *)(*(int (**)(uint32_t))(*result + 76))(*((uint32_t *)self + 72));
    v8 = *((uint32_t *)self + 73);
    if ( v8 != 0 )
    {
      v9 = *(uint32_t **)v8;
      if ( *(uint32_t *)v8 != 0 )
      {
        v10 = v9[1];
        v11 = 0;
        if ( v10 >= 0 && v9[2] == -2 )
        {
          v16 = 24;
          v17 = 1;
          do
          {
            v11 = v17;
            if ( v17 > v10 )
              break;
            ++v17;
            v18 = *(uint32_t *)(*(uint32_t *)v8 + v16);
            v16 += 16;
          }
          while ( v18 == -2 );
        }
        result = *(uint32_t **)v8;
LABEL_22:
        while ( result != nullptr )
        {
          v12 = result[1];
          if ( v11 > v12 )
            break;
          v13 = result[4 * v11 + 5];
          if ( v13 != 0 )
          {
            G4_VCALL<void>(v13, 76);
            result = *(uint32_t **)v8;
            v12 = *(uint32_t *)(*(uint32_t *)v8 + 4);
            if ( v12 < v11 )
              break;
          }
          v14 = v11 + 1;
          if ( v11 + 1 <= v12 )
          {
            v15 = 16 * v11 + 40;
            if ( result[4 * v14 + 2] == -2 )
            {
              while ( ++v14 <= v12 )
              {
                v19 = *(uint32_t *)((char *)result + v15);
                v15 += 16;
                if ( v19 != -2 )
                {
                  v11 = v14;
                  goto LABEL_22;
                }
              }
            }
          }
          v11 = v14;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::clearRefs  (binary VA: 0x10e2860)
// Original: gameswf::SpriteInstance::clearRefs
// ----------------------------------------------------------------------------
uint32_t * gameswf::SpriteInstance::clearRefs(gameswf::RefCounted::Self **self, int a2)
{
  uint32_t *result;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;

  gameswf::ASDisplayObjectContainer::clearRefs((gameswf::ASDisplayObjectContainer::Self *)self, a2);
  result = (uint32_t *)(*(self + 72));
  if ( result != nullptr )
  {
    (*(void (**)(uint32_t, int))(*result + 72))((uint32_t)(uintptr_t)(*(self + 72)), a2);
    result = (uint32_t *)(*(self + 72));
    if ( a2 > result[5] )
    {
      result = (uint32_t *)gameswf::RefCounted::dropRef(*(self + 72));
      *(self + 72) = nullptr;
    }
  }
  v3 = (uint32_t *)(*(self + 73));
  v18 = v3;
  if ( v3 != nullptr )
  {
    v4 = *v3;
    if ( *v3 != 0 )
    {
      result = *(uint32_t **)(v4 + 4);
      v5 = 0;
      if ( (int)(uintptr_t)(result) >= 0 && *(uint32_t *)(v4 + 8) == -2 )
      {
        v6 = 24;
        v7 = 1;
        v15 = v4;
        do
        {
          v5 = v7;
          if ( v7 > (int)(uintptr_t)(result) )
            break;
          ++v7;
          v8 = *(uint32_t *)(v15 + v6);
          v6 += 16;
        }
        while ( v8 == -2 );
      }
      if ( v18 != nullptr )
      {
LABEL_18:
        result = (uint32_t *)*v18;
        v17 = 16 * v5 + 8;
        while ( result != nullptr )
        {
          v9 = result[1];
          if ( v5 > v9 )
            break;
          v10 = (char *)result + v17;
          v11 = *(uint32_t *)((char *)result + v17 + 12);
          if ( v11 != 0 && a2 > *(uint32_t *)(v11 + 20) )
          {
            gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)((char *)result + v17 + 12));
            *((uint32_t *)v10 + 3) = 0;
            result = (uint32_t *)*v18;
            v9 = *(uint32_t *)(*v18 + 4);
            if ( v9 < v5 )
              continue;
          }
          v16 = v5 + 1;
          if ( v5 + 1 <= v9 && result[4 * v5 + 6] == -2 )
          {
            v12 = v5 + 2;
            v13 = 16 * v12 + 8;
            do
            {
              v16 = v12;
              if ( v12 > v9 )
                break;
              v14 = *(uint32_t *)((char *)result + v13);
              ++v12;
              v13 += 16;
            }
            while ( v14 == -2 );
          }
          v5 = v16;
          goto LABEL_18;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::enumerate  (binary VA: 0x10e29d0)
// Original: gameswf::SpriteInstance::enumerate
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::enumerate(gameswf::SpriteInstance::Self *self, gameswf::ASEnvironment::Self *a2)
{
  int result;
  gameswf::SpriteInstance::Self *v3;
  int i;
  int v5;
  void *v6;
  const gameswf::String::Self *v7;
  gameswf::Self *v8;
  bool v9;
  int v10;
  void *v11;
  int v12;
  gameswf::SpriteInstance::Self *v13;
  gameswf::SpriteInstance::Self *v14;
  gameswf::SpriteInstance::Self *v15;
  int v16;
  int v17;
  gameswf::Self *v18;

  result = gameswf::Character::enumerate(self, a2);
  v3 = self;
  v17 = *((uint32_t *)self + 54);
  if ( v17 > 0 )
  {
    for ( i = 0; i != v17; ++i )
    {
      result = *(uint32_t *)(*((uint32_t *)v3 + 53) + 4 * i);
      if ( result != 0 )
      {
        v7 = *(const gameswf::String::Self **)(result + 60);
        result = *(uint8_t *)v7 == 0xFF ? *((uint32_t *)v7 + 1) - 1 : *(char *)v7 - 1;
        if ( result > 0 )
        {
          v5 = *((uint32_t *)a2 + 1);
          v12 = v5 + 1;
          v16 = *((uint32_t *)a2 + 2);
          if ( v5 + 1 <= v16 || *((uint32_t *)a2 + 3) != 0 )
          {
            v6 = *(void **)a2;
          }
          else
          {
            v8 = (gameswf::Self *)(v12 + (v12 >> 1));
            v9 = v8 == nullptr;
            v18 = v8;
            *((uint32_t *)a2 + 2) = (uint32_t)(uintptr_t)(v8);
            v10 = *(uint32_t *)a2;
            if ( v9 )
            {
              if ( v10 != 0 )
              {
                v14 = v3;
                gameswf::free_internal(*(gameswf::Self **)a2);
                v5 = *((uint32_t *)a2 + 1);
                v3 = v14;
              }
              *(uint32_t *)a2 = 0;
              v6 = nullptr;
            }
            else
            {
              v15 = v3;
              if ( v10 != 0 )
                v11 = gameswf::realloc_internal(*(gameswf::Self **)a2, 12 * (uint32_t)(uintptr_t)(v18), 12 * v16);
              else
                v11 = (void *)gameswf::malloc_internal(12 * (uint32_t)(uintptr_t)(v18));
              *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v11);
              v6 = v11;
              v5 = *((uint32_t *)a2 + 1);
              v3 = v15;
            }
          }
          result = (int)(uintptr_t)(v6) + 12 * v5;
          if ( result != 0 )
          {
            *(uint8_t *)result = 0;
            *(uint8_t *)(result + 1) = 0;
            *(uint32_t *)(result + 4) = 0;
            v13 = v3;
            result = gameswf::ASValue::setString((gameswf::ASValue::Self *)result, v7);
            v3 = v13;
          }
          *((uint32_t *)a2 + 1) = v12;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::hasKeypressEvent  (binary VA: 0x10e2ba0)
// Original: gameswf::SpriteInstance::hasKeypressEvent
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::hasKeypressEvent(gameswf::SpriteInstance::Self *self)
{
  gameswf::Self *v1;
  int StandardMemberID;
  char v3;
  char v4;
  typedef uint8_t _g4_t_v6;
  typedef char _g4_t_v7;
  typedef unsigned int _g4_t_v8[3];
  typedef char _g4_t_v9;
  typedef char _g4_t_v10;
  typedef gameswf::Self *_g4_t_v11;
  typedef int16_t _g4_t_v12;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v8)) > _g4_s2 ? (16u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v9)) > _g4_s3 ? (28u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (29u + sizeof(_g4_t_v10)) > _g4_s4 ? (29u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v11)) > _g4_s5 ? (40u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v12)) > _g4_s6 ? (44u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (46u + sizeof(_g4_t_v13)) > _g4_s7 ? (46u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (47u + sizeof(_g4_t_v14)) > _g4_s8 ? (47u + sizeof(_g4_t_v14)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 29u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 46u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 47u);

  LOWORD(v8[0]) = 0;
  v9 = 1;
  v10 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v9, 10);
  v1 = (gameswf::Self *)&v10;
  if ( v9 == -1 )
    v1 = v11;
  gameswf::Strcpy_s(v1, &byte_9[2], (gameswf::Self *)"onKeyPress");
  v12 = -1;
  v13 = 127;
  v14 |= 1u;
  StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v9);
  if ( StandardMemberID == -1
    || (v3 = G4_VCALL<int>(self, 36, StandardMemberID, v8),
        v4 = 1,
        v3 == 0) )
  {
    v4 = G4_VCALL<int>(self, 44, &v9, v8);
    if ( v9 != -1 )
      goto LABEL_6;
  }
  else if ( v9 != -1 )
  {
    goto LABEL_6;
  }
  if ( (v14 & 1) != 0 )
  {
    v7 = v4;
    gameswf::free_internal(v11);
    v4 = v7;
  }
LABEL_6:
  v6 = v4;
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v8);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::attachDisplayCallback  (binary VA: 0x10e2cc0)
// Original: gameswf::SpriteInstance::attachDisplayCallback
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::SpriteInstance::attachDisplayCallback(int a1, gameswf::Self *a2, int a3, int a4)
{
  gameswf::Self *v4;
  int v5;
  gameswf::Self *v6;
  gameswf::ASEnvironment::Self *v7;
  int v8;
  int i;
  gameswf::Self *result;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef size_t _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef gameswf::Self *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef gameswf::Self *_g4_t_v36;
  typedef unsigned int _g4_t_v37[2];
  typedef void *_g4_t_v38;
  typedef gameswf::Self *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int *_g4_t_v46;
  typedef void *_g4_t_v47;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v18)) > _g4_s3 ? (16u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v19)) > _g4_s4 ? (20u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v20)) > _g4_s5 ? (24u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v21)) > _g4_s6 ? (28u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v22)) > _g4_s7 ? (32u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v23)) > _g4_s8 ? (36u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v24)) > _g4_s9 ? (40u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v25)) > _g4_s10 ? (40u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v26)) > _g4_s11 ? (44u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v27)) > _g4_s12 ? (44u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v28)) > _g4_s13 ? (44u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v29)) > _g4_s14 ? (48u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v30)) > _g4_s15 ? (52u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v31)) > _g4_s16 ? (56u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v32)) > _g4_s17 ? (60u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v33)) > _g4_s18 ? (64u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v34)) > _g4_s19 ? (68u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v35)) > _g4_s20 ? (72u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v36)) > _g4_s21 ? (76u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v37)) > _g4_s22 ? (80u + sizeof(_g4_t_v37)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v38)) > _g4_s23 ? (88u + sizeof(_g4_t_v38)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v39)) > _g4_s24 ? (92u + sizeof(_g4_t_v39)) : _g4_s24,
    _g4_s26 = (96u + sizeof(_g4_t_v40)) > _g4_s25 ? (96u + sizeof(_g4_t_v40)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v41)) > _g4_s26 ? (100u + sizeof(_g4_t_v41)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v42)) > _g4_s27 ? (104u + sizeof(_g4_t_v42)) : _g4_s27,
    _g4_s29 = (108u + sizeof(_g4_t_v43)) > _g4_s28 ? (108u + sizeof(_g4_t_v43)) : _g4_s28,
    _g4_s30 = (112u + sizeof(_g4_t_v44)) > _g4_s29 ? (112u + sizeof(_g4_t_v44)) : _g4_s29,
    _g4_s31 = (116u + sizeof(_g4_t_v45)) > _g4_s30 ? (116u + sizeof(_g4_t_v45)) : _g4_s30,
    _g4_s32 = (120u + sizeof(_g4_t_v46)) > _g4_s31 ? (120u + sizeof(_g4_t_v46)) : _g4_s31,
    _g4_s33 = (124u + sizeof(_g4_t_v47)) > _g4_s32 ? (124u + sizeof(_g4_t_v47)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 72u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 76u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 80u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 88u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 92u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 96u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 100u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 104u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 108u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 112u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 116u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 120u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 124u);

  v46 = &a1;
  v4 = a2;
  v5 = a1;
  v26 = a3;
  v24 = a4;
  v33 = nullptr;
  v34 = 0;
  v35 = 0;
  v36 = nullptr;
  LOWORD(v37[0]) = 1;
  if ( a2 != nullptr )
  {
    v22 = a1;
    v23 = strlen((const char *)a2);
    gameswf::String::resize((gameswf::String::Self *)v37, v23);
    v6 = (gameswf::Self *)((char *)v37 + 1);
    if ( LOBYTE(v37[0]) == 0xFF )
      v6 = v39;
    gameswf::Strcpy_s(v6, (char *)(v23 + 1), v4);
    v5 = v22;
  }
  LOWORD(v40) = -1;
  BYTE2(v40) = 127;
  HIBYTE(v40) |= 1u;
  v7 = (gameswf::ASEnvironment::Self *)G4_VCALL<int>(v5, 92, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v26, v29, v30, v31, v32, v33, v34, v35, v36, v37[0], v37[1], v38, v39, v40, v41, v42, v43, v44, v45);
  gameswf::ASEnvironment::getVariable((gameswf::ASValue::Self *)&v29, v7, (gameswf::String::Self *)v37, &v33, nullptr);
  if ( LOBYTE(v37[0]) == 0xFF && (v40 & 0x1000000) != 0 )
  {
    v47 = v38;
    gameswf::free_internal(v39);
  }
  if ( (uint8_t)v29 == 5 )
  {
    v12 = v30;
    if ( v30 != 0 && G4_VCALL<uint8_t>(v30, 8, 1) != 0 )
      G4_VCALL<void>(v12, 336, v27, v25);
  }
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v29);
  v8 = v34;
  if ( v34 <= 0 )
  {
    if ( v34 < 0 )
    {
      v13 = 8 * v34;
      do
      {
        v14 = (uint32_t *)((char *)v33 + v13);
        if ( (gameswf::Self *)((char *)v33 + v13) != nullptr )
        {
          *v14 = 0;
          v14[1] = 0;
        }
        v13 += 8;
        ++v8;
      }
      while ( v8 != 0 );
    }
  }
  else
  {
    v28 = v34;
    for ( i = 0; i != v28; ++i )
    {
      if ( *((uint32_t *)v33 + 2 * i) != 0 )
        gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v33 + 2 * i));
    }
  }
  result = v36;
  v34 = 0;
  if ( v36 == nullptr )
  {
    result = v33;
    v11 = v35;
    v35 = 0;
    if ( v33 != nullptr )
    {
      v47 = (void *)(8 * v11);
      return (gameswf::Self *)gameswf::free_internal(v33);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::replaceDisplayObject  (binary VA: 0x10e34c0)
// Original: gameswf::SpriteInstance::replaceDisplayObject
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::replaceDisplayObject(gameswf::SpriteInstance::Self *self, gameswf::Character::Self **a2, char *a3, unsigned int a4, const gameswf::CxForm::Self *a5, const gameswf::Matrix::Self *a6, const gameswf::Effect::Self *a7, float a8, uint16_t a9)
{
  gameswf::Self *v10;
  typedef size_t _g4_t_v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  typedef gameswf::Self *_g4_t_v14;
  typedef int16_t _g4_t_v15;
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (17u + sizeof(_g4_t_v13)) > _g4_s2 ? (17u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v14)) > _g4_s3 ? (28u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v15)) > _g4_s4 ? (32u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (34u + sizeof(_g4_t_v16)) > _g4_s5 ? (34u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (35u + sizeof(_g4_t_v17)) > _g4_s6 ? (35u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 17u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 34u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 35u);

  if ( a3 != nullptr && *a3 != 0 )
  {
    v12 = 1;
    v13 = 0;
    v11 = strlen(a3);
    gameswf::String::resize((gameswf::String::Self *)&v12, v11);
    v10 = (gameswf::Self *)&v13;
    if ( v12 == -1 )
      v10 = v14;
    gameswf::Strcpy_s(v10, (char *)(v11 + 1), (gameswf::Self *)a3);
    v15 = -1;
    v16 = 127;
    v17 |= 1u;
    sub_10E31A0((int)(uintptr_t)(a2), &v12);
    if ( v12 == -1 && (v17 & 1) != 0 )
      gameswf::free_internal(v14);
  }
  gameswf::DisplayList::replaceDisplayObject(
    (gameswf::SpriteInstance::Self *)((char *)self + 212),
    a2,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return gameswf::Character::invalidateBitmapCache(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::replaceMe  (binary VA: 0x10e3610)
// Original: gameswf::SpriteInstance::replaceMe
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::replaceMe(gameswf::SpriteInstance::Self *self, gameswf::CharacterDef::Self *a2)
{
  gameswf::RefCounted::Self *v2;
  int v3;
  gameswf::Self *WeakProxy;
  int v5;
  int v6;
  char *v8;

  v2 = *((gameswf::RefCounted::Self **)self + 14);
  if ( v2 == nullptr )
    goto LABEL_9;
  if ( *(uint8_t *)(*((uint32_t *)self + 13) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)self + 13, nullptr);
    *((uint32_t *)self + 14) = 0;
LABEL_9:
    v3 = 0;
    gameswf::logError((gameswf::Self *)"character can't replace _root\n", v8);
    return v3;
  }
  v3 = G4_VCALL<int>(a2, 24, v2, 0);
  *(uint32_t *)(v3 + 56) = (uint32_t)(uintptr_t)(v2);
  WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v2);
  sub_7E5ED0((gameswf::Self **)(v3 + 52), WeakProxy);
  v5 = *((uint32_t *)self + 15);
  if ( *(uint8_t *)v5 == 0xFF )
    v6 = *(uint32_t *)(v5 + 12);
  else
    v6 = v5 + 1;
  G4_VCALL<void>(v2, 200, v3, v6, *((uint16_t *)self + 70), 0, 0, 0, *((uint32_t *)self + 34), *((uint16_t *)self + 71));
  gameswf::Character::invalidateBitmapCache(self);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::isEnabled  (binary VA: 0x10e3740)
// Original: gameswf::SpriteInstance::isEnabled
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::isEnabled(gameswf::SpriteInstance::Self *self)
{
  int result;
  int v2;

  result = 0;
  if ( *((uint8_t *)self + 270) != 0 )
  {
    v2 = *((uint32_t *)self + 14);
    result = 1;
    if ( v2 != 0 )
    {
      if ( *(uint8_t *)(*((uint32_t *)self + 13) + 2) != 0 )
      {
        return (*(int (**)(uint32_t))(*(uint32_t *)v2 + 368))(*((uint32_t *)self + 14));
      }
      else
      {
        sub_7E5ED0((gameswf::Self **)self + 13, nullptr);
        *((uint32_t *)self + 14) = 0;
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::findExportedResource  (binary VA: 0x10e37e0)
// Original: gameswf::SpriteInstance::findExportedResource
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::findExportedResource(gameswf::SpriteInstance::Self *self, const gameswf::String::Self *a2)
{
  int v2;
  int v3;
  int result;
  int v5;

  v2 = G4_VCALL<int>(self, 148);
  v3 = v2;
  if ( v2 == 0
    || G4_VCALL<uint8_t>(v2, 8, 12) == 0
    || (result = G4_VCALL<int>(v3, 84, a2)) == 0 )
  {
    v5 = *((uint32_t *)self + 14);
    result = 0;
    if ( v5 != 0 )
    {
      if ( *(uint8_t *)(*((uint32_t *)self + 13) + 2) != 0 )
      {
        return G4_VCALL<int>(v5, 152, a2);
      }
      else
      {
        sub_7E5ED0((gameswf::Self **)self + 13, nullptr);
        *((uint32_t *)self + 14) = 0;
        return 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::display  (binary VA: 0x10e38b0)
// Original: gameswf::SpriteInstance::display
// ----------------------------------------------------------------------------
void gameswf::SpriteInstance::display(gameswf::SpriteInstance::Self *self)
{
  int v1;
  int v2;
  float *v3;
  float v4;
  int v5;
  float *v6;
  float v7;
  float v8;
  __m128 v9;
  __m128 v10;
  __m128 v11;
  float v12; // xmm0_4
  __m128 v13;
  __m128 v14;
  __m128 v15;
  __m128 v16;
  float v17; // xmm5_4
  __m128 v18;
  float v19; // xmm3_4
  __m128 v20;
  __m128 v21;
  __m128 v22;
  float v23; // xmm4_4
  __m128 v24;
  float v25; // xmm2_4
  __m128 v26;
  __m128 v27;
  float v28; // xmm1_4
  __m128 v29;
  __m128 v30;
  float v31; // xmm0_4
  int v32;
  int v33;
  gameswf::Character::Self *v34;
  __m128 v35;
  __m128 v36;
  uint32_t v37; // xmm0_4
  gameswf::Character::Self *v38;
  int v39;
  int v40;
  gameswf::Character::Self *v41;
  int v42;
  uint16_t *v43;
  uint16_t *v44;
  int v45;
  int v46;
  uint16_t *v47;
  uint16_t *v48;
  int v49;
  int v50;
  uint16_t *v51;
  uint16_t *v52;
  int v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef float _g4_t_v63[14];
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef unsigned int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef float _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef unsigned int _g4_t_v84;
  typedef int _g4_t_v85;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v54)) > _g4_s0 ? (0u + sizeof(_g4_t_v54)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v55)) > _g4_s1 ? (4u + sizeof(_g4_t_v55)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v56)) > _g4_s2 ? (12u + sizeof(_g4_t_v56)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v57)) > _g4_s3 ? (16u + sizeof(_g4_t_v57)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v58)) > _g4_s4 ? (20u + sizeof(_g4_t_v58)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v59)) > _g4_s5 ? (24u + sizeof(_g4_t_v59)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v60)) > _g4_s6 ? (24u + sizeof(_g4_t_v60)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v61)) > _g4_s7 ? (24u + sizeof(_g4_t_v61)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v62)) > _g4_s8 ? (24u + sizeof(_g4_t_v62)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v63)) > _g4_s9 ? (32u + sizeof(_g4_t_v63)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v64)) > _g4_s10 ? (88u + sizeof(_g4_t_v64)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v65)) > _g4_s11 ? (92u + sizeof(_g4_t_v65)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v66)) > _g4_s12 ? (96u + sizeof(_g4_t_v66)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v67)) > _g4_s13 ? (100u + sizeof(_g4_t_v67)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v68)) > _g4_s14 ? (104u + sizeof(_g4_t_v68)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v69)) > _g4_s15 ? (108u + sizeof(_g4_t_v69)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v70)) > _g4_s16 ? (112u + sizeof(_g4_t_v70)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v71)) > _g4_s17 ? (116u + sizeof(_g4_t_v71)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v72)) > _g4_s18 ? (120u + sizeof(_g4_t_v72)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v73)) > _g4_s19 ? (124u + sizeof(_g4_t_v73)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v74)) > _g4_s20 ? (128u + sizeof(_g4_t_v74)) : _g4_s20,
    _g4_s22 = (132u + sizeof(_g4_t_v75)) > _g4_s21 ? (132u + sizeof(_g4_t_v75)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v76)) > _g4_s22 ? (136u + sizeof(_g4_t_v76)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v77)) > _g4_s23 ? (140u + sizeof(_g4_t_v77)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v78)) > _g4_s24 ? (144u + sizeof(_g4_t_v78)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v79)) > _g4_s25 ? (148u + sizeof(_g4_t_v79)) : _g4_s25,
    _g4_s27 = (152u + sizeof(_g4_t_v80)) > _g4_s26 ? (152u + sizeof(_g4_t_v80)) : _g4_s26,
    _g4_s28 = (156u + sizeof(_g4_t_v81)) > _g4_s27 ? (156u + sizeof(_g4_t_v81)) : _g4_s27,
    _g4_s29 = (160u + sizeof(_g4_t_v82)) > _g4_s28 ? (160u + sizeof(_g4_t_v82)) : _g4_s28,
    _g4_s30 = (164u + sizeof(_g4_t_v83)) > _g4_s29 ? (164u + sizeof(_g4_t_v83)) : _g4_s29,
    _g4_s31 = (168u + sizeof(_g4_t_v84)) > _g4_s30 ? (168u + sizeof(_g4_t_v84)) : _g4_s30,
    _g4_s32 = (172u + sizeof(_g4_t_v85)) > _g4_s31 ? (172u + sizeof(_g4_t_v85)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 0u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 4u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 12u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 20u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 24u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 24u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 24u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 24u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 88u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 92u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 96u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 100u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 104u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 108u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 112u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 116u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 120u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 124u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 128u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 132u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 136u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 140u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 144u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 148u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 152u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 156u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 160u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 164u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 168u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 172u);

  if ( *((uint8_t *)self + 148) != 0 )
  {
    v1 = *((uint32_t *)self + 19);
    if ( v1 == 0 || *(uint32_t *)(v1 + 140) == 0 )
    {
      if ( *((uint8_t *)self + 272) == 0 )
        G4_VCALL<void>(self, 96, 1065353216);
      gameswf::ASDisplayObjectContainer::display(self);
      v2 = *((uint32_t *)self + 19);
      if ( v2 != 0 && *(uint8_t *)(v2 + 98) != 0 )
      {
        if ( gameswf::s_render_handler != nullptr )
        {
          gameswf::RenderHandler::flush((gameswf::RenderHandler::Self *)gameswf::s_render_handler);
          v2 = *((uint32_t *)self + 19);
        }
        v3 = *((float **)self + 16);
        v70 = *v3;
        v71 = *((uint32_t *)v3 + 1);
        v72 = *((uint32_t *)v3 + 2);
        v73 = *((uint32_t *)v3 + 3);
        v74 = *((uint32_t *)v3 + 4);
        v75 = *((uint32_t *)v3 + 5);
        v4 = v3[6];
        v5 = *((uint32_t *)v3 + 7);
        *(float *)&v76 = v4;
        v77 = v5;
        v6 = *((float **)self + 17);
        v64 = *v6;
        v65 = v6[1];
        v66 = v6[2];
        v67 = v6[3];
        v7 = v6[4];
        v8 = v6[5];
        v68 = v7;
        v69 = v8;
        v58 = v64;
        v59 = v65;
        memset(v63, 0, 0x18u);
        v63[0] = 1.0;
        v57 = v67;
        v63[4] = 1.0;
g4_m128_raw(v9) = *(unsigned int *)(v2 + 100);
g4_m128_lane<float>(v9, 0) =g4_m128_lane<float>(v9, 0) +g4_m128_lane<float>(v9, 0);
        v55 = v66;
        v56 = v7;
        v54 = v8;
        if (g4_m128_lane<float>(v9, 0) < -3.4028235e38f )
        {
          v12 = 0.0;
        }
        else
        {
g4_m128_lane<int32_t>(v10, 0) = 2139095039;
          v11 = _mm_cmple_ss(v9, v10);
          LODWORD(v12) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v11, g4_m128_from<__m128>(0LL)), 0) |g4_m128_lane<int32_t>(v9, 0) &g4_m128_lane<int32_t>(v11, 0);
        }
        v63[5] = v12;
        gameswf::Matrix::setScaleRotation((gameswf::Matrix::Self *)v63, 0x3F800000u, 0xBF800000, 0.0);
g4_m128_raw(v13) = LODWORD(v63[3]);
g4_m128_raw(v15) = LODWORD(v59);
g4_m128_raw(v14) = 0u;
g4_m128_lane<float>(v15, 0) = (float)(v59 * v63[3]) + (float)(v58 * v63[0]);
        if (g4_m128_lane<float>(v15, 0) < -3.4028235e38f )
        {
          v17 = 0.0;
        }
        else
        {
          v16 = _mm_cmple_ss(v15, *(__m128 *)&dword_1C7B5E0);
          LODWORD(v17) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v16, g4_m128_from<__m128>(0)), 0) |g4_m128_lane<int32_t>(v15, 0) &g4_m128_lane<int32_t>(v16, 0);
        }
        v63[8] = v17;
g4_m128_lane<float>(v13, 0) = (float)(v63[3] * v56) + (float)(v63[0] * v57);
        if (g4_m128_lane<float>(v13, 0) < -3.4028235e38f )
        {
          v19 = 0.0;
        }
        else
        {
          v18 = _mm_cmple_ss(v13, *(__m128 *)&dword_1C7B5E0);
          LODWORD(v19) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v18, g4_m128_from<__m128>(0)), 0) |g4_m128_lane<int32_t>(v13, 0) &g4_m128_lane<int32_t>(v18, 0);
        }
g4_m128_raw(v20) = LODWORD(v63[4]);
g4_m128_raw(v21) = LODWORD(v59);
        v63[11] = v19;
g4_m128_lane<float>(v21, 0) = (float)(v59 * v63[4]) + (float)(v58 * v63[1]);
        if (g4_m128_lane<float>(v21, 0) < -3.4028235e38f )
        {
          v23 = 0.0;
        }
        else
        {
          v22 = _mm_cmple_ss(v21, *(__m128 *)&dword_1C7B5E0);
          LODWORD(v23) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v22, g4_m128_from<__m128>(0)), 0) |g4_m128_lane<int32_t>(v21, 0) &g4_m128_lane<int32_t>(v22, 0);
        }
        v63[9] = v23;
g4_m128_lane<float>(v20, 0) = (float)(v63[4] * v56) + (float)(v63[1] * v57);
        if (g4_m128_lane<float>(v20, 0) < -3.4028235e38f )
        {
          v25 = 0.0;
        }
        else
        {
          v24 = _mm_cmple_ss(v20, *(__m128 *)&dword_1C7B5E0);
          LODWORD(v25) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v24, g4_m128_from<__m128>(0)), 0) |g4_m128_lane<int32_t>(v20, 0) &g4_m128_lane<int32_t>(v24, 0);
        }
g4_m128_raw(v26) = LODWORD(v58);
        v63[12] = v25;
g4_m128_lane<float>(v26, 0) = (float)((float)(v58 * v63[2]) + (float)(v59 * v63[5])) + v55;
        if (g4_m128_lane<float>(v26, 0) < -3.4028235e38f )
        {
          v28 = 0.0;
        }
        else
        {
          v27 = _mm_cmple_ss(v26, *(__m128 *)&dword_1C7B5E0);
          LODWORD(v28) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v27, g4_m128_from<__m128>(0)), 0) |g4_m128_lane<int32_t>(v26, 0) &g4_m128_lane<int32_t>(v27, 0);
        }
g4_m128_raw(v29) = LODWORD(v57);
        v63[10] = v28;
g4_m128_lane<float>(v29, 0) = (float)((float)(v57 * v63[2]) + (float)(v56 * v63[5])) + v54;
        if (g4_m128_lane<float>(v29, 0) < -3.4028235e38f )
        {
          v31 = 0.0;
        }
        else
        {
          v30 = _mm_cmple_ss(v29, *(__m128 *)&dword_1C7B5E0);
          LODWORD(v31) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v30, g4_m128_from<__m128>(0)), 0) |g4_m128_lane<int32_t>(v29, 0) &g4_m128_lane<int32_t>(v30, 0);
        }
        v32 = *((uint32_t *)self + 19);
        v63[13] = v31;
        if ( v32 == 0 )
        {
          v42 = opNew(0x94u);
          v43 = (uint16_t *)(v42 + 32);
          *(uint32_t *)v42 = 1065353216;
          *(uint32_t *)(v42 + 8) = 1065353216;
          *(uint32_t *)(v42 + 16) = 1065353216;
          *(uint32_t *)(v42 + 24) = 1065353216;
          *(uint32_t *)(v42 + 4) = 0;
          *(uint32_t *)(v42 + 12) = 0;
          *(uint32_t *)(v42 + 20) = 0;
          *(uint32_t *)(v42 + 28) = 0;
          v32 = v42;
          v60 = 24;
g4_m128_raw(v14) = 0u;
          if ( ((v42 + 32) & 1) != 0 )
          {
            *(uint8_t *)(v42 + 32) = 0;
            v43 = (uint16_t *)(v42 + 33);
            v60 = 23;
          }
          if ( ((uint8_t)(uintptr_t)(v43) & 2) != 0 )
          {
            *v43++ = 0;
            v60 -= 2;
          }
          memset(v43, 0, 4 * (v60 >> 2));
          v44 = &v43[2 * (v60 >> 2)];
          if ( (v60 & 2) != 0 )
            *v44++ = 0;
          if ( (v60 & 1) != 0 )
            *(uint8_t *)v44 = 0;
          v45 = *(uint32_t *)(v42 + 92);
          *(uint32_t *)(v32 + 32) = 1065353216;
          v45 |= 0x7FFFFFu;
          *(uint32_t *)(v32 + 48) = 1065353216;
          *(uint32_t *)(v32 + 92) = v45;
          *(uint32_t *)(v32 + 56) = 0;
          *(uint32_t *)(v32 + 60) = 0;
          *(uint32_t *)(v32 + 64) = 0;
          *(uint32_t *)(v32 + 68) = 0;
          *(uint32_t *)(v32 + 72) = 0;
          *(uint8_t *)(v32 + 76) = 1;
          *(uint8_t *)(v32 + 77) = 0;
          *(uint8_t *)(v32 + 94) = BYTE2(v45) & 0x7F;
          *(uint16_t *)(v32 + 95) = HIBYTE(v45) | 1;
          *(uint8_t *)(v32 + 97) = 0;
          *(uint8_t *)(v32 + 98) = 0;
          *(uint32_t *)(v32 + 100) = 0;
          *(uint32_t *)(v32 + 104) = 1065353216;
          *(uint32_t *)(v32 + 108) = 0;
          *(uint32_t *)(v32 + 112) = 1065353216;
          *(uint32_t *)(v32 + 116) = 0;
          *(uint32_t *)(v32 + 120) = 0;
          *(uint32_t *)(v32 + 124) = 0;
          *(uint32_t *)(v32 + 128) = 0;
          *(uint32_t *)(v32 + 132) = 0;
          *(uint32_t *)(v32 + 136) = 0;
          *(uint32_t *)(v32 + 140) = 0;
          *(uint32_t *)(v32 + 144) = 0;
          *((uint32_t *)self + 19) = v32;
        }
        *(float *)(v32 + 32) = v17;
        *(float *)(v32 + 36) = v23;
        *(float *)(v32 + 40) = v28;
        *(float *)(v32 + 44) = v19;
        *(float *)(v32 + 48) = v25;
        *(float *)(v32 + 52) = v31;
        v33 = *((uint32_t *)self + 19);
        *((uint8_t *)self + 145) = 1;
        *((uint8_t *)self + 147) = 1;
        *((uint32_t *)self + 17) = v33 + 32;
        v34 = *((gameswf::Character::Self **)self + 14);
        if ( v34 != nullptr )
        {
          if ( *(uint8_t *)(*((uint32_t *)self + 13) + 2) != 0 )
          {
            gameswf::Character::invalidateBitmapCache(v34);
          }
          else
          {
            sub_7E5ED0((gameswf::Self **)self + 13, nullptr);
            *((uint32_t *)self + 14) = 0;
          }
          v33 = *((uint32_t *)self + 19);
g4_m128_raw(v14) =g4_m128_lane<uint32_t>(v14, 0);
        }
g4_m128_raw(v35) = v76;
g4_m128_lane<float>(v35, 0) = *(float *)&v76 * *(float *)(v33 + 104);
        v78 = v70;
        v79 = v71;
        v80 = v72;
        v81 = v73;
        v82 = v74;
        v83 = v75;
        v84 = v76;
        v85 = v77;
        if (g4_m128_lane<float>(v35, 0) < -3.4028235e38f )
        {
          v37 =g4_m128_lane<int32_t>(v14, 0);
        }
        else
        {
          v36 = _mm_cmple_ss(v35, *(__m128 *)&dword_1C7B5E0);
          v37 =g4_m128_lane<uint32_t>(_mm_andnot_ps(v36, v14), 0) |g4_m128_lane<int32_t>(v35, 0) &g4_m128_lane<int32_t>(v36, 0);
        }
        *(float *)v33 = v78;
        *(uint32_t *)(v33 + 4) = v79;
        *(uint32_t *)(v33 + 8) = v80;
        *(uint32_t *)(v33 + 12) = v81;
        *(uint32_t *)(v33 + 16) = v82;
        *(uint32_t *)(v33 + 20) = v83;
        *(uint32_t *)(v33 + 28) = v85;
        *(uint32_t *)(v33 + 24) = v37;
        *((uint32_t *)self + 16) = *((uint32_t *)self + 19);
        v38 = *((gameswf::Character::Self **)self + 14);
        *((uint8_t *)self + 146) = 1;
        if ( v38 != nullptr )
        {
          if ( *(uint8_t *)(*((uint32_t *)self + 13) + 2) != 0 )
          {
            gameswf::Character::invalidateBitmapCache(v38);
          }
          else
          {
            sub_7E5ED0((gameswf::Self **)self + 13, nullptr);
            *((uint32_t *)self + 14) = 0;
          }
        }
        gameswf::ASDisplayObjectContainer::display(self);
        v39 = *((uint32_t *)self + 19);
        if ( v39 == 0 )
        {
          v50 = opNew(0x94u);
          v51 = (uint16_t *)(v50 + 32);
          v39 = v50;
          *(uint32_t *)v50 = 1065353216;
          *(uint32_t *)(v50 + 8) = 1065353216;
          *(uint32_t *)(v50 + 16) = 1065353216;
          *(uint32_t *)(v50 + 24) = 1065353216;
          *(uint32_t *)(v50 + 4) = 0;
          *(uint32_t *)(v50 + 12) = 0;
          *(uint32_t *)(v50 + 20) = 0;
          *(uint32_t *)(v50 + 28) = 0;
          v62 = 24;
          if ( ((v50 + 32) & 1) != 0 )
          {
            *(uint8_t *)(v50 + 32) = 0;
            v51 = (uint16_t *)(v50 + 33);
            v62 = 23;
          }
          if ( ((uint8_t)(uintptr_t)(v51) & 2) != 0 )
          {
            *v51++ = 0;
            v62 -= 2;
          }
          memset(v51, 0, 4 * (v62 >> 2));
          v52 = &v51[2 * (v62 >> 2)];
          if ( (v62 & 2) != 0 )
            *v52++ = 0;
          if ( (v62 & 1) != 0 )
            *(uint8_t *)v52 = 0;
          v53 = *(uint32_t *)(v50 + 92);
          *(uint32_t *)(v39 + 32) = 1065353216;
          v53 |= 0x7FFFFFu;
          *(uint32_t *)(v39 + 48) = 1065353216;
          *(uint32_t *)(v39 + 92) = v53;
          *(uint32_t *)(v39 + 56) = 0;
          *(uint32_t *)(v39 + 60) = 0;
          *(uint32_t *)(v39 + 64) = 0;
          *(uint32_t *)(v39 + 68) = 0;
          *(uint32_t *)(v39 + 72) = 0;
          *(uint8_t *)(v39 + 76) = 1;
          *(uint8_t *)(v39 + 77) = 0;
          *(uint8_t *)(v39 + 94) = BYTE2(v53) & 0x7F;
          *(uint16_t *)(v39 + 95) = HIBYTE(v53) | 1;
          *(uint8_t *)(v39 + 97) = 0;
          *(uint8_t *)(v39 + 98) = 0;
          *(uint32_t *)(v39 + 100) = 0;
          *(uint32_t *)(v39 + 104) = 1065353216;
          *(uint32_t *)(v39 + 108) = 0;
          *(uint32_t *)(v39 + 112) = 1065353216;
          *(uint32_t *)(v39 + 116) = 0;
          *(uint32_t *)(v39 + 120) = 0;
          *(uint32_t *)(v39 + 124) = 0;
          *(uint32_t *)(v39 + 128) = 0;
          *(uint32_t *)(v39 + 132) = 0;
          *(uint32_t *)(v39 + 136) = 0;
          *(uint32_t *)(v39 + 140) = 0;
          *(uint32_t *)(v39 + 144) = 0;
          *((uint32_t *)self + 19) = v39;
        }
        *(float *)(v39 + 32) = v64;
        *(float *)(v39 + 36) = v65;
        *(float *)(v39 + 40) = v66;
        *(float *)(v39 + 44) = v67;
        *(float *)(v39 + 48) = v68;
        *(float *)(v39 + 52) = v69;
        v40 = *((uint32_t *)self + 19);
        *((uint8_t *)self + 145) = 1;
        *((uint8_t *)self + 147) = 1;
        *((uint32_t *)self + 17) = v40 + 32;
        if ( *((uint32_t *)self + 14) != 0 )
        {
          if ( *(uint8_t *)(*((uint32_t *)self + 13) + 2) != 0 )
          {
            gameswf::Character::invalidateBitmapCache(*((gameswf::Character::Self **)self + 14));
          }
          else
          {
            sub_7E5ED0((gameswf::Self **)self + 13, nullptr);
            *((uint32_t *)self + 14) = 0;
          }
          v40 = *((uint32_t *)self + 19);
        }
        if ( v40 == 0 )
        {
          v46 = opNew(0x94u);
          v47 = (uint16_t *)(v46 + 32);
          v40 = v46;
          *(uint32_t *)v46 = 1065353216;
          *(uint32_t *)(v46 + 8) = 1065353216;
          *(uint32_t *)(v46 + 16) = 1065353216;
          *(uint32_t *)(v46 + 24) = 1065353216;
          *(uint32_t *)(v46 + 4) = 0;
          *(uint32_t *)(v46 + 12) = 0;
          *(uint32_t *)(v46 + 20) = 0;
          *(uint32_t *)(v46 + 28) = 0;
          v61 = 24;
          if ( ((v46 + 32) & 1) != 0 )
          {
            *(uint8_t *)(v46 + 32) = 0;
            v47 = (uint16_t *)(v46 + 33);
            v61 = 23;
          }
          if ( ((uint8_t)(uintptr_t)(v47) & 2) != 0 )
          {
            *v47++ = 0;
            v61 -= 2;
          }
          memset(v47, 0, 4 * (v61 >> 2));
          v48 = &v47[2 * (v61 >> 2)];
          if ( (v61 & 2) != 0 )
            *v48++ = 0;
          if ( (v61 & 1) != 0 )
            *(uint8_t *)v48 = 0;
          v49 = *(uint32_t *)(v46 + 92);
          *(uint32_t *)(v40 + 32) = 1065353216;
          v49 |= 0x7FFFFFu;
          *(uint32_t *)(v40 + 48) = 1065353216;
          *(uint32_t *)(v40 + 92) = v49;
          *(uint32_t *)(v40 + 56) = 0;
          *(uint32_t *)(v40 + 60) = 0;
          *(uint32_t *)(v40 + 64) = 0;
          *(uint32_t *)(v40 + 68) = 0;
          *(uint32_t *)(v40 + 72) = 0;
          *(uint8_t *)(v40 + 76) = 1;
          *(uint8_t *)(v40 + 77) = 0;
          *(uint8_t *)(v40 + 94) = BYTE2(v49) & 0x7F;
          *(uint16_t *)(v40 + 95) = HIBYTE(v49) | 1;
          *(uint8_t *)(v40 + 97) = 0;
          *(uint8_t *)(v40 + 98) = 0;
          *(uint32_t *)(v40 + 100) = 0;
          *(uint32_t *)(v40 + 104) = 1065353216;
          *(uint32_t *)(v40 + 108) = 0;
          *(uint32_t *)(v40 + 112) = 1065353216;
          *(uint32_t *)(v40 + 116) = 0;
          *(uint32_t *)(v40 + 120) = 0;
          *(uint32_t *)(v40 + 124) = 0;
          *(uint32_t *)(v40 + 128) = 0;
          *(uint32_t *)(v40 + 132) = 0;
          *(uint32_t *)(v40 + 136) = 0;
          *(uint32_t *)(v40 + 140) = 0;
          *(uint32_t *)(v40 + 144) = 0;
          *((uint32_t *)self + 19) = v40;
        }
        *(float *)v40 = v70;
        *(uint32_t *)(v40 + 4) = v71;
        *(uint32_t *)(v40 + 8) = v72;
        *(uint32_t *)(v40 + 12) = v73;
        *(uint32_t *)(v40 + 16) = v74;
        *(uint32_t *)(v40 + 20) = v75;
        *(float *)(v40 + 24) = *(float *)&v76;
        *(uint32_t *)(v40 + 28) = v77;
        *((uint32_t *)self + 16) = *((uint32_t *)self + 19);
        v41 = *((gameswf::Character::Self **)self + 14);
        *((uint8_t *)self + 146) = 1;
        if ( v41 != nullptr )
        {
          if ( *(uint8_t *)(*((uint32_t *)self + 13) + 2) != 0 )
          {
            gameswf::Character::invalidateBitmapCache(v41);
          }
          else
          {
            sub_7E5ED0((gameswf::Self **)self + 13, nullptr);
            *((uint32_t *)self + 14) = 0;
          }
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::setPlayState  (binary VA: 0x10e45e0)
// Original: gameswf::SpriteInstance::setPlayState
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::SpriteInstance::setPlayState(int a1, char a2)
{
  gameswf::Self *v2;
  int SoundHandler;
  gameswf::Self *result;

  v2 = (gameswf::Self *)a1;
  SoundHandler = gameswf::getSoundHandler();
  if ( SoundHandler != 0 && *(int *)(*(uint32_t *)(a1 + 252) + 28) >= 0 )
    G4_VCALL<void>(SoundHandler, 56, *(uint32_t *)(*(uint32_t *)(a1 + 252) + 28), *(uint8_t *)(a1 + 266) == 0);
  *(uint8_t *)(a1 + 150) = 1;
  *(uint8_t *)(a1 + 266) = a2;
  result = *(gameswf::Self **)(a1 + 56);
  if ( result != nullptr )
  {
    while ( *(uint8_t *)(*((uint32_t *)v2 + 13) + 2) != 0 )
    {
      v2 = result;
      result = *((gameswf::Self **)result + 14);
      *((uint8_t *)v2 + 150) = 1;
      if ( result == nullptr )
        return result;
    }
    result = sub_7E5ED0((gameswf::Self **)v2 + 13, nullptr);
    *((uint32_t *)v2 + 14) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::setDragState  (binary VA: 0x10e46a0)
// Original: gameswf::SpriteInstance::setDragState
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::SpriteInstance::setDragState(gameswf::Player::Self **a1, int *a2)
{
  gameswf::Self *result;
  int v3;

  result = (gameswf::Self *)gameswf::ASObject::getRoot(a1);
  *((uint32_t *)result + 47) = *a2;
  *((uint32_t *)result + 48) = a2[1];
  *((uint32_t *)result + 49) = a2[2];
  *((uint32_t *)result + 50) = a2[3];
  *((uint32_t *)result + 51) = a2[4];
  *((uint32_t *)result + 52) = a2[5];
  *((uint32_t *)result + 53) = a2[6];
  *((uint32_t *)result + 54) = a2[7];
  v3 = *a2;
  if ( *a2 != 0 )
  {
    result = *(gameswf::Self **)(v3 + 56);
    *(uint8_t *)(v3 + 150) = 1;
    if ( result != nullptr )
    {
      while ( *(uint8_t *)(*(uint32_t *)(v3 + 52) + 2) != 0 )
      {
        v3 = (int)(uintptr_t)(result);
        result = *((gameswf::Self **)result + 14);
        *(uint8_t *)(v3 + 150) = 1;
        if ( result == nullptr )
          return result;
      }
      result = sub_7E5ED0((gameswf::Self **)(v3 + 52), nullptr);
      *(uint32_t *)(v3 + 56) = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::notifySetMember  (binary VA: 0x10e4770)
// Original: gameswf::SpriteInstance::notifySetMember
// ----------------------------------------------------------------------------
char * gameswf::SpriteInstance::notifySetMember(gameswf::SpriteInstance::Self *self, const gameswf::String::Self *a2)
{
  char *result;
  char v3;
  const char *v4;
  char *v5;
  const char *v6;
  const char *v7;
  const char *v8;
  const char *v9;
  const char *v10;
  const char *v11;
  const char *v12;
  const char *v13;
  typedef char _g4_t_v14;
  typedef uint8_t _g4_t_v15[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);

  result = (char *)a2;
  v3 = *(uint8_t *)a2;
  v14 = *(uint8_t *)a2;
  if ( *(uint8_t *)(*((uint32_t *)self + 4) + 232) != 0 )
  {
    if ( v3 == -1 )
    {
      if ( strcmp(*((const char **)a2 + 3), "enterFrame") != 0 )
        goto LABEL_4;
    }
    else if ( strcmp((const char *)a2 + 1, "enterFrame") != 0 )
    {
LABEL_4:
      if ( v14 == -1 )
      {
        v4 = *((const char **)a2 + 3);
        result = (char *)(strstr(v4, "mouse"));
      }
      else
      {
        v4 = (char *)a2 + 1;
        result = (char *)(strstr((const char *)a2 + 1, "mouse"));
      }
      if ( result == v4 )
        *((uint8_t *)self + 149) = 1;
      return result;
    }
LABEL_39:
    *((uint8_t *)self + 269) = 1;
    return (char *)gameswf::Character::notifyNeedAdvance(self);
  }
  if ( v3 == -1 )
  {
    if ( strcmp(*((const char **)a2 + 3), "onEnterFrame") == 0 )
      goto LABEL_39;
  }
  else if ( strcmp((const char *)a2 + 1, "onEnterFrame") == 0 )
  {
    goto LABEL_39;
  }
  v5 = (char *)a2 + 1;
  if ( v14 == -1 )
    v5 = *((char **)a2 + 3);
  if ( memcmp(v5, "on", 2u) == 0 )
  {
    v15[0] = 0;
    v15[1] = 0;
    v6 = (char *)a2 + 1;
    if ( v14 == -1 )
      v6 = *((const char **)a2 + 3);
    if ( strcmp(v6, "onKeyPress") == 0 )
      goto LABEL_44;
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
    v15[0] = 0;
    v15[1] = 0;
    v7 = (char *)a2 + 1;
    if ( *(uint8_t *)a2 == 0xFF )
      v7 = *((const char **)a2 + 3);
    if ( strcmp(v7, "onRelease") == 0 )
      goto LABEL_44;
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
    v15[0] = 0;
    v15[1] = 0;
    v8 = (char *)a2 + 1;
    if ( *(uint8_t *)a2 == 0xFF )
      v8 = *((const char **)a2 + 3);
    if ( strcmp(v8, "onDragOver") == 0 )
      goto LABEL_44;
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
    v15[0] = 0;
    v15[1] = 0;
    v9 = (char *)a2 + 1;
    if ( *(uint8_t *)a2 == 0xFF )
      v9 = *((const char **)a2 + 3);
    if ( strcmp(v9, "onDragOut") == 0 )
      goto LABEL_44;
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
    v15[0] = 0;
    v15[1] = 0;
    v10 = (char *)a2 + 1;
    if ( *(uint8_t *)a2 == 0xFF )
      v10 = *((const char **)a2 + 3);
    if ( strcmp(v10, "onPress") == 0 )
      goto LABEL_44;
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
    v15[0] = 0;
    v15[1] = 0;
    v11 = (char *)a2 + 1;
    if ( *(uint8_t *)a2 == 0xFF )
      v11 = *((const char **)a2 + 3);
    if ( strcmp(v11, "onReleaseOutside") == 0 )
      goto LABEL_44;
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
    v15[0] = 0;
    v15[1] = 0;
    v12 = (char *)a2 + 1;
    if ( *(uint8_t *)a2 == 0xFF )
      v12 = *((const char **)a2 + 3);
    if ( strcmp(v12, "onRollout") == 0 )
      goto LABEL_44;
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
    v15[0] = 0;
    v15[1] = 0;
    v13 = (char *)a2 + 1;
    if ( *(uint8_t *)a2 == 0xFF )
      v13 = *((const char **)a2 + 3);
    if ( strcmp(v13, "onRollover") == 0 )
    {
LABEL_44:
      *((uint8_t *)self + 149) = 1;
      return (char *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
    }
    else
    {
      return (char *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::Destroy  (binary VA: 0x10e4b30)
// Original: gameswf::SpriteInstance::~SpriteInstance
// ----------------------------------------------------------------------------
void gameswf::SpriteInstance::Destroy(gameswf::SpriteInstance::Self *self)
{
  gameswf::Self *v1;
  gameswf::Self *v2;
  int v3;
  int i;
  uint32_t *v5;
  gameswf::RefCounted::Self *v6;
  gameswf::Self *v7;
  gameswf::Self *v9;
  gameswf::Self *v10;
  int v11;

  v1 = *((gameswf::Self **)self + 73);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208F428);
  if ( v1 != nullptr )
  {
    v2 = *(gameswf::Self **)v1;
    if ( *(uint32_t *)v1 != 0 )
    {
      v3 = *((uint32_t *)v2 + 1);
      if ( v3 >= 0 )
      {
        for ( i = 0; i <= v3; ++i )
        {
          v5 = (uint32_t *)((char *)v2 + 16 * i + 8);
          if ( *v5 != -2 )
          {
            v6 = *((gameswf::RefCounted::Self **)v2 + 4 * i + 5);
            if ( v6 != nullptr )
            {
              v11 = v3;
              v9 = v1;
              gameswf::RefCounted::dropRef(v6);
              v1 = v9;
              v3 = v11;
            }
            *v5 = -2;
            v5[1] = 0;
            v2 = *(gameswf::Self **)v1;
          }
        }
      }
      v10 = v1;
      gameswf::free_internal(v2);
      v1 = v10;
      *(uint32_t *)v10 = 0;
    }
    gameswf::free_internal(v1);
  }
  if ( *((uint32_t *)self + 75) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 75));
  if ( *((uint32_t *)self + 74) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 74));
  if ( *((uint32_t *)self + 72) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 72));
  if ( *((uint32_t *)self + 71) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 71));
  if ( *((uint32_t *)self + 70) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 70));
  if ( *((uint32_t *)self + 69) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 69));
  v7 = *((gameswf::Self **)self + 64);
  if ( v7 != nullptr && (*(uint16_t *)v7)-- == 1 )
    gameswf::free_internal(v7);
  if ( *((uint32_t *)self + 63) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 63));
  gameswf::ASDisplayObjectContainer::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::Destroy_ea10e4ca0  (binary VA: 0x10e4ca0)
// Original: gameswf::SpriteInstance::~SpriteInstance
// ----------------------------------------------------------------------------
void gameswf::SpriteInstance::Destroy_ea10e4ca0(gameswf::SpriteInstance::Self *self)
{
  gameswf::SpriteInstance::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::Construct  (binary VA: 0x10e4ce0)
// Original: gameswf::SpriteInstance::SpriteInstance
// ----------------------------------------------------------------------------
gameswf::SpriteInstance::Self * gameswf::SpriteInstance::Construct(gameswf::Self **self, gameswf::Player::Self *a2, gameswf::MovieDefinitionSub::Self *a3, gameswf::Character::Self *a4, gameswf::Character::Self *a5, char *a6)
{
  gameswf::RefCounted::Self *v6;
  gameswf::Self *WeakProxy;
  gameswf::SpriteInstance::Self *result;
  gameswf::Self *v9;
  gameswf::Self *v10;
  bool v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  typedef gameswf::Self *_g4_t_v14;
  typedef int16_t _g4_t_v15;
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  typedef gameswf::Self *_g4_t_v20;
  typedef int16_t _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (1u + sizeof(_g4_t_v13)) > _g4_s1 ? (1u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v15)) > _g4_s3 ? (16u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (18u + sizeof(_g4_t_v16)) > _g4_s4 ? (18u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (19u + sizeof(_g4_t_v17)) > _g4_s5 ? (19u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v18)) > _g4_s6 ? (32u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (33u + sizeof(_g4_t_v19)) > _g4_s7 ? (33u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v20)) > _g4_s8 ? (44u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v21)) > _g4_s9 ? (48u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (50u + sizeof(_g4_t_v22)) > _g4_s10 ? (50u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (51u + sizeof(_g4_t_v23)) > _g4_s11 ? (51u + sizeof(_g4_t_v23)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 1u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 18u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 19u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 33u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 50u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 51u);

  v6 = (gameswf::RefCounted::Self *)(a4);
  gameswf::Character::Construct((gameswf::Character::Self *)self, a2, a5, (int)(uintptr_t)(a6), 2);
  *(self + 53) = nullptr;
  *(self + 54) = nullptr;
  *(self + 55) = nullptr;
  *(self + 56) = nullptr;
  *(self + 57) = nullptr;
  *((uint8_t *)self + 248) = 1;
  *((uint8_t *)self + 249) = 0;
  *((uint8_t *)self + 250) = 0;
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_208F428);
  *(self + 63) = (gameswf::Self *)(a3);
  if ( a3 != nullptr )
    gameswf::RefCounted::addRef(a3);
  *(self + 64) = nullptr;
  if ( a4 == nullptr )
    v6 = (gameswf::RefCounted::Self *)self;
  *(self + 65) = (gameswf::Self *)(v6);
  WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v6);
  sub_7E5ED0(self + 64, WeakProxy);
  result = (gameswf::SpriteInstance::Self *)(*(self + 4));
  *((uint16_t *)self + 132) = 0;
  *((uint8_t *)self + 266) = 0;
  *((uint8_t *)self + 267) = 0;
  *((uint8_t *)self + 268) = 1;
  *((uint8_t *)self + 269) = 0;
  *((uint8_t *)self + 270) = 1;
  *((uint8_t *)self + 271) = 0;
  *((uint8_t *)self + 272) = 0;
  *(self + 69) = nullptr;
  *(self + 70) = nullptr;
  *(self + 71) = nullptr;
  *(self + 72) = nullptr;
  *(self + 73) = nullptr;
  *(self + 74) = nullptr;
  *(self + 75) = nullptr;
  if ( *((uint8_t *)result + 232) != 0 )
  {
    *((uint8_t *)self + 149) = 1;
    v18 = 1;
    v19 = 0;
    gameswf::String::resize((gameswf::String::Self *)&v18, 9);
    v9 = (gameswf::Self *)&v19;
    if ( v18 == -1 )
      v9 = v20;
    gameswf::Strcpy_s(v9, &byte_9[1], (gameswf::Self *)"MovieClip");
    v12 = 1;
    v13 = 0;
    v21 = -1;
    v22 = 127;
    v23 |= 1u;
    gameswf::String::resize((gameswf::String::Self *)&v12, 13);
    v10 = (gameswf::Self *)&v13;
    if ( v12 == -1 )
      v10 = v14;
    gameswf::Strcpy_s(v10, &byte_9[5], (gameswf::Self *)"flash.display");
    v15 = -1;
    v16 = 127;
    v17 |= 1u;
    result = (gameswf::SpriteInstance::Self *)gameswf::ASClassManager::findClass(
                                          (gameswf::Self *)((char *)*(self + 4) + 236),
                                          (const gameswf::String::Self *)&v12,
                                          (const gameswf::String::Self *)&v18,
                                          true);
    v11 = v12 == -1;
    *(self + 6) = (gameswf::Self *)(result);
    if ( v11 && (v17 & 1) != 0 )
      result = (gameswf::SpriteInstance::Self *)gameswf::free_internal(v14);
    if ( v18 == -1 && (v23 & 1) != 0 )
      return (gameswf::SpriteInstance::Self *)gameswf::free_internal(v20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::executeFrameTagsReverse  (binary VA: 0x10e4fc0)
// Original: gameswf::SpriteInstance::executeFrameTagsReverse
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::executeFrameTagsReverse(gameswf::SpriteInstance::Self *self, int a2)
{
  gameswf::RefCounted::Self *v2;
  int result;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;

  v2 = (gameswf::RefCounted::Self *)(self);
  if ( self != nullptr )
    gameswf::RefCounted::addRef(self);
  result = (*(int (**)(uint32_t, int))(**((uint32_t **)self + 63) + 76))(*((uint32_t *)self + 63), a2);
  v4 = *(uint32_t *)(result + 4) - 1;
  if ( v4 >= 0 )
  {
    v5 = 4 * v4;
    v6 = (uint32_t *)result;
    do
    {
      --v4;
      v7 = *(uint32_t *)(*v6 + v5);
      v5 -= 4;
      result = G4_VCALL<int>(v7, 16, self, a2);
    }
    while ( v4 != -1 );
    v2 = (gameswf::RefCounted::Self *)(self);
  }
  if ( v2 != nullptr )
    return gameswf::RefCounted::dropRef(v2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::gotoFrame  (binary VA: 0x10e51f0)
// Original: gameswf::SpriteInstance::gotoFrame
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::gotoFrame(gameswf::SpriteInstance::Self *self, int a2)
{
  gameswf::RefCounted::Self *v3;
  gameswf::RefCounted::Self *v4;
  int v5;
  gameswf::RefCounted::Self *v6;
  int i;
  gameswf::RefCounted::Self *v8;
  gameswf::SpriteInstance::Self *v9;
  gameswf::SpriteInstance::Self *v10;
  int v11;
  int v12;
  int v13;

  if ( (*(int (**)(uint32_t))(**((uint32_t **)self + 63) + 52))(*((uint32_t *)self + 63)) <= a2 || a2 < 0 )
  {
    *((uint8_t *)self + 266) = 1;
    return 0;
  }
  if ( *((int16_t *)self + 132) == a2 )
  {
    *((uint8_t *)self + 266) = 1;
    return 1;
  }
  v3 = *((gameswf::RefCounted::Self **)self + 74);
  v4 = *((gameswf::RefCounted::Self **)self + 75);
  if ( v3 != v4 )
  {
    if ( v4 != nullptr )
      gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 75));
    *((uint32_t *)self + 75) = (uint32_t)(uintptr_t)(v3);
    if ( v3 != nullptr )
      gameswf::RefCounted::addRef(v3);
    v3 = *((gameswf::RefCounted::Self **)self + 74);
  }
  if ( v3 != nullptr )
  {
    gameswf::RefCounted::dropRef(v3);
    *((uint32_t *)self + 74) = 0;
  }
  v5 = *((int16_t *)self + 132);
  if ( a2 < v5 )
  {
    v11 = v5 - 1;
    do
    {
      v13 = v11-- + 1;
      gameswf::SpriteInstance::executeFrameTagsReverse(self, v13);
    }
    while ( v11 != a2 - 1 );
  }
  else
  {
    v6 = nullptr;
    if ( a2 <= v5 )
      goto LABEL_18;
    for ( i = v5 + 1; a2 > i; ++i )
    {
      v12 = i;
      G4_VCALL<void>(self, 208, v12, 1);
    }
  }
  G4_VCALL<void>(self, 208, a2, 0);
  v6 = *((gameswf::RefCounted::Self **)self + 74);
LABEL_18:
  v8 = *((gameswf::RefCounted::Self **)self + 75);
  *((uint16_t *)self + 132) = a2;
  *((uint8_t *)self + 266) = 1;
  if ( v6 != v8 )
  {
    if ( v8 != nullptr )
      gameswf::RefCounted::dropRef(v8);
    *((uint32_t *)self + 75) = (uint32_t)(uintptr_t)(v6);
    if ( v6 != nullptr )
      gameswf::RefCounted::addRef(v6);
    v6 = *((gameswf::RefCounted::Self **)self + 74);
  }
  if ( v6 != nullptr )
  {
    gameswf::RefCounted::dropRef(v6);
    *((uint32_t *)self + 74) = 0;
  }
  if ( *(uint8_t *)(*((uint32_t *)self + 4) + 232) != 0 )
    gameswf::DisplayList::construct((gameswf::SpriteInstance::Self *)((char *)self + 212));
  v9 = self;
  v10 = *((gameswf::SpriteInstance::Self **)self + 14);
  *((uint8_t *)self + 150) = 1;
  if ( v10 != nullptr )
  {
    while ( *(uint8_t *)(*((uint32_t *)v9 + 13) + 2) != 0 )
    {
      v9 = v10;
      v10 = *((gameswf::SpriteInstance::Self **)v10 + 14);
      *((uint8_t *)v9 + 150) = 1;
      if ( v10 == nullptr )
        goto LABEL_31;
    }
    sub_7E5ED0((gameswf::Self **)v9 + 13, nullptr);
    *((uint32_t *)v9 + 14) = 0;
    gameswf::Character::invalidateBitmapCache(self);
    return 1;
  }
  else
  {
LABEL_31:
    gameswf::Character::invalidateBitmapCache(self);
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::executeRemoveTags  (binary VA: 0x10e5430)
// Original: gameswf::SpriteInstance::executeRemoveTags
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::executeRemoveTags(gameswf::SpriteInstance::Self *self, int a2)
{
  uint32_t *v2;
  int result;
  int v4;
  int v5;

  v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**((uint32_t **)self + 63) + 76))(*((uint32_t *)self + 63), a2);
  result = v2[1];
  if ( result > 0 )
  {
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = *(uint32_t *)(*v2 + 4 * v4);
        result = G4_VCALL<int>(v5, 20);
        if ( (uint8_t)result != 0 )
          break;
        if ( v2[1] <= ++v4 )
          return result;
      }
      ++v4;
      result = G4_VCALL<int>(v5, 12, self);
    }
    while ( v2[1] > v4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::doActions  (binary VA: 0x10e54a0)
// Original: gameswf::SpriteInstance::doActions
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::doActions(gameswf::SpriteInstance::Self *self)
{
  gameswf::SpriteInstance::Self *v1;
  int result;
  gameswf::Self *v3;
  gameswf::Self *WeakProxy;
  gameswf::RefCounted::Self *v5;
  typedef uint8_t _g4_t_v6[4];
  typedef gameswf::RefCounted::Self *_g4_t_v7;
  typedef uint8_t _g4_t_v8[4];
  typedef gameswf::SpriteInstance::Self *_g4_t_v9;
  typedef uint8_t _g4_t_v10[12];
  typedef uint32_t _g4_t_v11[28];
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef char _g4_t_v25;
  typedef char _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef gameswf::Self *_g4_t_v31[10];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v8)) > _g4_s2 ? (20u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v9)) > _g4_s3 ? (24u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v10)) > _g4_s4 ? (32u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v11)) > _g4_s5 ? (44u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (156u + sizeof(_g4_t_v12)) > _g4_s6 ? (156u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (157u + sizeof(_g4_t_v13)) > _g4_s7 ? (157u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (168u + sizeof(_g4_t_v14)) > _g4_s8 ? (168u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (169u + sizeof(_g4_t_v15)) > _g4_s9 ? (169u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (180u + sizeof(_g4_t_v16)) > _g4_s10 ? (180u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (181u + sizeof(_g4_t_v17)) > _g4_s11 ? (181u + sizeof(_g4_t_v17)) : _g4_s11,
    _g4_s13 = (192u + sizeof(_g4_t_v18)) > _g4_s12 ? (192u + sizeof(_g4_t_v18)) : _g4_s12,
    _g4_s14 = (193u + sizeof(_g4_t_v19)) > _g4_s13 ? (193u + sizeof(_g4_t_v19)) : _g4_s13,
    _g4_s15 = (204u + sizeof(_g4_t_v20)) > _g4_s14 ? (204u + sizeof(_g4_t_v20)) : _g4_s14,
    _g4_s16 = (208u + sizeof(_g4_t_v21)) > _g4_s15 ? (208u + sizeof(_g4_t_v21)) : _g4_s15,
    _g4_s17 = (212u + sizeof(_g4_t_v22)) > _g4_s16 ? (212u + sizeof(_g4_t_v22)) : _g4_s16,
    _g4_s18 = (216u + sizeof(_g4_t_v23)) > _g4_s17 ? (216u + sizeof(_g4_t_v23)) : _g4_s17,
    _g4_s19 = (220u + sizeof(_g4_t_v24)) > _g4_s18 ? (220u + sizeof(_g4_t_v24)) : _g4_s18,
    _g4_s20 = (224u + sizeof(_g4_t_v25)) > _g4_s19 ? (224u + sizeof(_g4_t_v25)) : _g4_s19,
    _g4_s21 = (225u + sizeof(_g4_t_v26)) > _g4_s20 ? (225u + sizeof(_g4_t_v26)) : _g4_s20,
    _g4_s22 = (236u + sizeof(_g4_t_v27)) > _g4_s21 ? (236u + sizeof(_g4_t_v27)) : _g4_s21,
    _g4_s23 = (240u + sizeof(_g4_t_v28)) > _g4_s22 ? (240u + sizeof(_g4_t_v28)) : _g4_s22,
    _g4_s24 = (244u + sizeof(_g4_t_v29)) > _g4_s23 ? (244u + sizeof(_g4_t_v29)) : _g4_s23,
    _g4_s25 = (248u + sizeof(_g4_t_v30)) > _g4_s24 ? (248u + sizeof(_g4_t_v30)) : _g4_s24,
    _g4_s26 = (252u + sizeof(_g4_t_v31)) > _g4_s25 ? (252u + sizeof(_g4_t_v31)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 156u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 157u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 168u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 169u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 180u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 181u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 192u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 193u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 204u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 208u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 212u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 216u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 220u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 224u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 225u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 236u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 240u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 244u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 248u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 252u);

  v31[6] = (gameswf::Self *)&self;
  v1 = self;
  result = *((uint32_t *)self + 74);
  if ( result != 0 )
  {
    gameswf::RefCounted::addRef(self);
    v3 = *((gameswf::Self **)v1 + 4);
    memset(v11, 0, 16);
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31[0] = nullptr;
    v31[1] = v3;
    if ( v3 != nullptr )
    {
      WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v3);
      if ( WeakProxy != v31[0] )
      {
        v31[0] = WeakProxy;
        ++*(uint16_t *)WeakProxy;
      }
    }
    else
    {
      sub_7E5ED0(v31, nullptr);
    }
    v8[0] = 5;
    v8[1] = 0;
    v9 = v1;
    gameswf::RefCounted::addRef(v1);
    v5 = *((gameswf::RefCounted::Self **)v1 + 74);
    v6[0] = 5;
    v6[1] = 0;
    v7 = v5;
    if ( v5 != nullptr )
      gameswf::RefCounted::addRef(v5);
    gameswf::call_method(
      (gameswf::Self *)v10,
      (const gameswf::ASValue::Self *)v6,
      (gameswf::ASEnvironment::Self *)v11,
      (const gameswf::ASValue::Self *)v8,
      0,
      0,
      "<Frame Script>");
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v10);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v6);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v8);
    if ( *((uint32_t *)v1 + 74) != 0 )
    {
      gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v1 + 74));
      *((uint32_t *)v1 + 74) = 0;
    }
    sub_10E2ED0((int)(uintptr_t)(v11));
    return gameswf::RefCounted::dropRef(v1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::advance  (binary VA: 0x10e5700)
// Original: gameswf::SpriteInstance::advance
// ----------------------------------------------------------------------------
void gameswf::SpriteInstance::advance(gameswf::SpriteInstance::Self *self, int a2)
{
  gameswf::SpriteInstance::Self *v2;
  gameswf::Self *v3;
  gameswf::Self *WeakProxy;
  gameswf::Self *v5;
  bool v6;
  gameswf::RefCounted::Self *v7;
  gameswf::Self *v8;
  char v9; // di
  int v10;
  int16_t v11; // di
  int v12;
  int16_t v13;
  gameswf::Self *v14;
  gameswf::ASValue::Self *v15;
  unsigned int v16;
  int v17;
  gameswf::Self *v18;
  unsigned int *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  typedef int *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef gameswf::ASValue::Self *_g4_t_v37;
  typedef gameswf::ASValue::Self *_g4_t_v38;
  typedef gameswf::ASValue::Self *_g4_t_v39;
  typedef gameswf::ASValue::Self *_g4_t_v40;
  typedef gameswf::ASValue::Self *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef gameswf::SpriteInstance::Self *_g4_t_v43;
  typedef gameswf::Self *_g4_t_v44;
  typedef gameswf::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef unsigned int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef float _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef gameswf::RefCounted::Self *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63[3];
  typedef gameswf::Self *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef gameswf::Self *_g4_t_v66;
  typedef gameswf::Self **_g4_t_v67;
  typedef float _g4_t_v68[24];
  typedef char _g4_t_v69;
  typedef char _g4_t_v70;
  typedef char _g4_t_v71;
  typedef char _g4_t_v72;
  typedef char _g4_t_v73;
  typedef char _g4_t_v74;
  typedef char _g4_t_v75;
  typedef char _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef char _g4_t_v82;
  typedef char _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef gameswf::Self *_g4_t_v88[10];
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (4u + sizeof(_g4_t_v26)) > _g4_s0 ? (4u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v27)) > _g4_s1 ? (4u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v28)) > _g4_s2 ? (8u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v29)) > _g4_s3 ? (12u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v30)) > _g4_s4 ? (12u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v31)) > _g4_s5 ? (16u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v32)) > _g4_s6 ? (20u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v33)) > _g4_s7 ? (24u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v34)) > _g4_s8 ? (28u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v35)) > _g4_s9 ? (32u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v36)) > _g4_s10 ? (32u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v37)) > _g4_s11 ? (36u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v38)) > _g4_s12 ? (36u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v39)) > _g4_s13 ? (40u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v40)) > _g4_s14 ? (40u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v41)) > _g4_s15 ? (44u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v42)) > _g4_s16 ? (48u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v43)) > _g4_s17 ? (48u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v44)) > _g4_s18 ? (52u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v45)) > _g4_s19 ? (52u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v46)) > _g4_s20 ? (56u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v47)) > _g4_s21 ? (56u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v48)) > _g4_s22 ? (60u + sizeof(_g4_t_v48)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v49)) > _g4_s23 ? (60u + sizeof(_g4_t_v49)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v50)) > _g4_s24 ? (64u + sizeof(_g4_t_v50)) : _g4_s24,
    _g4_s26 = (68u + sizeof(_g4_t_v51)) > _g4_s25 ? (68u + sizeof(_g4_t_v51)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v52)) > _g4_s26 ? (72u + sizeof(_g4_t_v52)) : _g4_s26,
    _g4_s28 = (76u + sizeof(_g4_t_v53)) > _g4_s27 ? (76u + sizeof(_g4_t_v53)) : _g4_s27,
    _g4_s29 = (80u + sizeof(_g4_t_v54)) > _g4_s28 ? (80u + sizeof(_g4_t_v54)) : _g4_s28,
    _g4_s30 = (84u + sizeof(_g4_t_v55)) > _g4_s29 ? (84u + sizeof(_g4_t_v55)) : _g4_s29,
    _g4_s31 = (88u + sizeof(_g4_t_v56)) > _g4_s30 ? (88u + sizeof(_g4_t_v56)) : _g4_s30,
    _g4_s32 = (92u + sizeof(_g4_t_v57)) > _g4_s31 ? (92u + sizeof(_g4_t_v57)) : _g4_s31,
    _g4_s33 = (96u + sizeof(_g4_t_v58)) > _g4_s32 ? (96u + sizeof(_g4_t_v58)) : _g4_s32,
    _g4_s34 = (100u + sizeof(_g4_t_v59)) > _g4_s33 ? (100u + sizeof(_g4_t_v59)) : _g4_s33,
    _g4_s35 = (104u + sizeof(_g4_t_v60)) > _g4_s34 ? (104u + sizeof(_g4_t_v60)) : _g4_s34,
    _g4_s36 = (108u + sizeof(_g4_t_v61)) > _g4_s35 ? (108u + sizeof(_g4_t_v61)) : _g4_s35,
    _g4_s37 = (112u + sizeof(_g4_t_v62)) > _g4_s36 ? (112u + sizeof(_g4_t_v62)) : _g4_s36,
    _g4_s38 = (116u + sizeof(_g4_t_v63)) > _g4_s37 ? (116u + sizeof(_g4_t_v63)) : _g4_s37,
    _g4_s39 = (128u + sizeof(_g4_t_v64)) > _g4_s38 ? (128u + sizeof(_g4_t_v64)) : _g4_s38,
    _g4_s40 = (132u + sizeof(_g4_t_v65)) > _g4_s39 ? (132u + sizeof(_g4_t_v65)) : _g4_s39,
    _g4_s41 = (136u + sizeof(_g4_t_v66)) > _g4_s40 ? (136u + sizeof(_g4_t_v66)) : _g4_s40,
    _g4_s42 = (140u + sizeof(_g4_t_v67)) > _g4_s41 ? (140u + sizeof(_g4_t_v67)) : _g4_s41,
    _g4_s43 = (144u + sizeof(_g4_t_v68)) > _g4_s42 ? (144u + sizeof(_g4_t_v68)) : _g4_s42,
    _g4_s44 = (240u + sizeof(_g4_t_v69)) > _g4_s43 ? (240u + sizeof(_g4_t_v69)) : _g4_s43,
    _g4_s45 = (241u + sizeof(_g4_t_v70)) > _g4_s44 ? (241u + sizeof(_g4_t_v70)) : _g4_s44,
    _g4_s46 = (252u + sizeof(_g4_t_v71)) > _g4_s45 ? (252u + sizeof(_g4_t_v71)) : _g4_s45,
    _g4_s47 = (253u + sizeof(_g4_t_v72)) > _g4_s46 ? (253u + sizeof(_g4_t_v72)) : _g4_s46,
    _g4_s48 = (264u + sizeof(_g4_t_v73)) > _g4_s47 ? (264u + sizeof(_g4_t_v73)) : _g4_s47,
    _g4_s49 = (265u + sizeof(_g4_t_v74)) > _g4_s48 ? (265u + sizeof(_g4_t_v74)) : _g4_s48,
    _g4_s50 = (276u + sizeof(_g4_t_v75)) > _g4_s49 ? (276u + sizeof(_g4_t_v75)) : _g4_s49,
    _g4_s51 = (277u + sizeof(_g4_t_v76)) > _g4_s50 ? (277u + sizeof(_g4_t_v76)) : _g4_s50,
    _g4_s52 = (288u + sizeof(_g4_t_v77)) > _g4_s51 ? (288u + sizeof(_g4_t_v77)) : _g4_s51,
    _g4_s53 = (292u + sizeof(_g4_t_v78)) > _g4_s52 ? (292u + sizeof(_g4_t_v78)) : _g4_s52,
    _g4_s54 = (296u + sizeof(_g4_t_v79)) > _g4_s53 ? (296u + sizeof(_g4_t_v79)) : _g4_s53,
    _g4_s55 = (300u + sizeof(_g4_t_v80)) > _g4_s54 ? (300u + sizeof(_g4_t_v80)) : _g4_s54,
    _g4_s56 = (304u + sizeof(_g4_t_v81)) > _g4_s55 ? (304u + sizeof(_g4_t_v81)) : _g4_s55,
    _g4_s57 = (308u + sizeof(_g4_t_v82)) > _g4_s56 ? (308u + sizeof(_g4_t_v82)) : _g4_s56,
    _g4_s58 = (309u + sizeof(_g4_t_v83)) > _g4_s57 ? (309u + sizeof(_g4_t_v83)) : _g4_s57,
    _g4_s59 = (320u + sizeof(_g4_t_v84)) > _g4_s58 ? (320u + sizeof(_g4_t_v84)) : _g4_s58,
    _g4_s60 = (324u + sizeof(_g4_t_v85)) > _g4_s59 ? (324u + sizeof(_g4_t_v85)) : _g4_s59,
    _g4_s61 = (328u + sizeof(_g4_t_v86)) > _g4_s60 ? (328u + sizeof(_g4_t_v86)) : _g4_s60,
    _g4_s62 = (332u + sizeof(_g4_t_v87)) > _g4_s61 ? (332u + sizeof(_g4_t_v87)) : _g4_s61,
    _g4_s63 = (336u + sizeof(_g4_t_v88)) > _g4_s62 ? (336u + sizeof(_g4_t_v88)) : _g4_s62
  };
  alignas(16) uint8_t _g4_sf[_g4_s63];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 40u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 40u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 44u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 52u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 56u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 56u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 60u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 60u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 64u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 68u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 72u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 76u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 80u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 84u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 88u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 92u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 96u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 100u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 104u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 108u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 112u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 116u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 128u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 132u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 136u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 140u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 144u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 240u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 241u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 252u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 253u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 264u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 265u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 276u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 277u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 288u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 292u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 296u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 300u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 304u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 308u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 309u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 320u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 324u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 328u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 332u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 336u);

  v88[6] = (gameswf::Self *)&self;
  v2 = self;
  v48 = a2;
  if ( *((uint8_t *)self + 272) == 0 )
  {
    G4_VCALL<void>(self, 28);
    v8 = *(gameswf::Self **)v2;
    v53 = 10;
    v54 = 0;
    v26 = &v53;
    (*((void (**)(gameswf::SpriteInstance::Self *))v8 + 16))(v2);
  }
  if ( *((uint8_t *)v2 + 148) != 0 || *((uint8_t *)v2 + 272) == 0 )
  {
    *((uint8_t *)v2 + 150) = 0;
    gameswf::Character::doMouseDrag(
      (gameswf::Self **)v2,
      (int)(uintptr_t)(v26),
      v28,
      v29,
      v31,
      v32,
      v33,
      v34,
      v35,
      (int)(uintptr_t)(v37),
      (int)(uintptr_t)(v39),
      (int)(uintptr_t)(v41),
      v42,
      (int)(uintptr_t)(v44),
      v46,
      v48,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      (int)(uintptr_t)(v58),
      v59,
      v60,
      v61,
      v62,
      v63[0],
      v63[1],
      v63[2],
      *(float *)&v64,
      v65,
      (int)(uintptr_t)(v66),
      v67,
      SLODWORD(v68[0]),
      LODWORD(v68[1]),
      LODWORD(v68[2]),
      v68[3],
      v68[4],
      v68[5],
      v68[6]);
    if ( *((uint32_t *)v2 + 75) != 0 )
    {
      gameswf::RefCounted::addRef(v2);
      v3 = *((gameswf::Self **)v2 + 4);
      v64 = nullptr;
      v65 = 0;
      v66 = nullptr;
      v67 = nullptr;
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
      v79 = 0;
      v80 = 0;
      v81 = 0;
      v82 = 0;
      v83 = 0;
      v84 = 0;
      v85 = 0;
      v86 = 0;
      v87 = 0;
      v88[0] = nullptr;
      v88[1] = v3;
      if ( v3 != nullptr )
      {
        WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v3);
        v5 = v88[0];
        if ( WeakProxy != v88[0] )
        {
          if ( v88[0] != nullptr )
          {
            v6 = (*(uint16_t *)v88[0])-- == 1;
            if ( v6 )
            {
              v38 = (gameswf::ASValue::Self *)(WeakProxy);
              gameswf::free_internal(v5);
              WeakProxy = (gameswf::Self *)(v38);
            }
          }
          v88[0] = WeakProxy;
          if ( WeakProxy != nullptr )
            ++*(uint16_t *)WeakProxy;
        }
      }
      else
      {
        sub_7E5ED0(v88, nullptr);
      }
      LOWORD(v60) = 5;
      v61 = *(float *)&v2;
      gameswf::RefCounted::addRef(v2);
      v7 = *((gameswf::RefCounted::Self **)v2 + 75);
      LOWORD(v57) = 5;
      v58 = v7;
      if ( v7 != nullptr )
        gameswf::RefCounted::addRef(v7);
      gameswf::call_method(
        (gameswf::Self *)v63,
        (const gameswf::ASValue::Self *)&v57,
        (gameswf::ASEnvironment::Self *)&v64,
        (const gameswf::ASValue::Self *)&v60,
        0,
        0,
        "<Frame Script>");
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v63);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v57);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v60);
      if ( *((uint32_t *)v2 + 75) != 0 )
      {
        gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v2 + 75));
        *((uint32_t *)v2 + 75) = 0;
      }
      sub_10E2ED0((int)(uintptr_t)(&v64));
      gameswf::RefCounted::dropRef(v2);
    }
    if ( *((uint8_t *)v2 + 266) == 0 )
    {
      v9 = *((uint8_t *)v2 + 150);
      v10 = (*(int (**)(uint32_t))(**((uint32_t **)v2 + 63) + 52))(*((uint32_t *)v2 + 63));
      v6 = *((uint8_t *)v2 + 272) == 0;
      *((uint8_t *)v2 + 150) = v9 | (v10 > 1);
      v11 = *((uint16_t *)v2 + 132);
      if ( !v6 )
      {
        v12 = *((uint32_t *)v2 + 63);
        *((uint16_t *)v2 + 132) = v11 + 1;
        if ( (int16_t)(v11 + 1) >= G4_VCALL<int>(v12, 52) )
        {
          *((uint16_t *)v2 + 132) = 0;
          v13 = 0;
        }
        else
        {
          v13 = *((uint16_t *)v2 + 132);
        }
        if ( v11 != v13 )
        {
          if ( v13 == 0 )
          {
            if ( (*(int (**)(uint32_t))(**((uint32_t **)v2 + 63) + 52))(*((uint32_t *)v2 + 63)) > 1 )
            {
              v15 = (gameswf::ASValue::Self *)(*(int (**)(uint32_t, uint32_t))(**((uint32_t **)v2 + 63) + 76))(
                                          *((uint32_t *)v2 + 63),
                                          0);
              v16 = *((uint32_t *)v15 + 1);
              v64 = nullptr;
              v65 = 0;
              v66 = nullptr;
              v67 = nullptr;
              if ( v16 <= 0x20 )
              {
                v66 = (gameswf::Self *)&dword_20;
                v64 = (gameswf::Self *)v68;
                v67 = (gameswf::Self **)(&dword_0 + 1);
              }
              if ( *((int *)v15 + 1) <= 0 )
                goto LABEL_63;
              v17 = 0;
              v43 = v2;
              do
              {
                v40 = v15;
                v20 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v15 + 4 * v17) + 28))(
                        *(uint32_t *)(*(uint32_t *)v15 + 4 * v17),
                        v27);
                v21 = v65;
                v47 = v20;
                v15 = v40;
                v36 = (int)(uintptr_t)(v66);
                v22 = v65 + 1;
                if ( v65 + 1 <= (int)(uintptr_t)(v66) || v67 != nullptr )
                {
                  v18 = v64;
                }
                else
                {
                  v45 = (gameswf::Self *)(v22 + (v22 >> 1));
                  v66 = v45;
                  if ( v45 != nullptr )
                  {
                    if ( v64 != nullptr )
                    {
                      v30 = 0;
                      v18 = (gameswf::Self *)gameswf::realloc_internal(v64, 4 * (uint32_t)(uintptr_t)(v45), 4 * v36);
                    }
                    else
                    {
                      v27 = 0;
                      v18 = (gameswf::Self *)gameswf::malloc_internal(4 * (uint32_t)(uintptr_t)(v45));
                    }
                    v64 = v18;
                    v21 = v65;
                    v15 = v40;
                  }
                  else
                  {
                    if ( v64 != nullptr )
                    {
                      v27 = 4 * v36;
                      gameswf::free_internal(v64);
                      v21 = v65;
                      v15 = v40;
                    }
                    v64 = nullptr;
                    v18 = nullptr;
                  }
                }
                v19 = (unsigned int *)((char *)v18 + 4 * v21);
                if ( v19 != nullptr )
                  *v19 = HIWORD(v47);
                v65 = v22;
                ++v17;
              }
              while ( *((uint32_t *)v15 + 1) > v17 );
              v23 = v22;
              v2 = v43;
              if ( v23 <= 0 )
LABEL_63:
                gameswf::DisplayList::clearAddedByPlayList((gameswf::SpriteInstance::Self *)((char *)v2 + 212));
              else
                gameswf::DisplayList::clearUnaffected(
                  (gameswf::SpriteInstance::Self *)((char *)v43 + 212),
                  (gameswf::array<int> *)&v64);
              v24 = v65;
              if ( v65 < 0 )
              {
                v25 = 4 * v65;
                do
                {
                  if ( (gameswf::Self *)((char *)v64 + v25) != nullptr )
                    *(uint32_t *)((char *)v64 + v25) = 0;
                  v25 += 4;
                  ++v24;
                }
                while ( v24 != 0 );
              }
              v65 = 0;
              if ( v67 == nullptr )
              {
                v66 = nullptr;
                if ( v64 != nullptr )
                  gameswf::free_internal(v64);
                v64 = nullptr;
              }
            }
            v13 = *((uint16_t *)v2 + 132);
          }
          G4_VCALL<void>(v2, 208, v13, 0, v30);
          *((uint8_t *)v2 + 150) = 1;
        }
      }
    }
    if ( *((uint8_t *)v2 + 269) != 0 )
    {
      if ( *((uint8_t *)v2 + 272) != 0 )
      {
        v14 = *(gameswf::Self **)v2;
        v55 = 12;
        v56 = 0;
        (*((void (**)(gameswf::SpriteInstance::Self *, int *))v14 + 16))(v2, &v55);
      }
      *((uint8_t *)v2 + 150) = 1;
    }
    gameswf::SpriteInstance::doActions(v2);
    gameswf::ASDisplayObjectContainer::advance(v2, v49);
    *((uint8_t *)v2 + 272) = 1;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::doInitActions  (binary VA: 0x10e5df0)
// Original: gameswf::SpriteInstance::doInitActions
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::SpriteInstance::doInitActions(gameswf::SpriteInstance::Self *self)
{
  gameswf::SpriteInstance::Self *v1;
  int v2;
  int v3;
  gameswf::Self *result;
  gameswf::Self *WeakProxy;
  gameswf::RefCounted::Self *EntryScript;
  typedef uint8_t _g4_t_v7[4];
  typedef gameswf::RefCounted::Self *_g4_t_v8;
  typedef uint8_t _g4_t_v9[4];
  typedef gameswf::SpriteInstance::Self *_g4_t_v10;
  typedef uint8_t _g4_t_v11[12];
  typedef uint32_t _g4_t_v12[28];
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  typedef char _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef char _g4_t_v26;
  typedef char _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef gameswf::Self *_g4_t_v32;
  typedef gameswf::Self *_g4_t_v33;
  typedef gameswf::SpriteInstance::Self **_g4_t_v34;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v9)) > _g4_s2 ? (24u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v10)) > _g4_s3 ? (28u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v11)) > _g4_s4 ? (36u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v12)) > _g4_s5 ? (48u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (160u + sizeof(_g4_t_v13)) > _g4_s6 ? (160u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (161u + sizeof(_g4_t_v14)) > _g4_s7 ? (161u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (172u + sizeof(_g4_t_v15)) > _g4_s8 ? (172u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (173u + sizeof(_g4_t_v16)) > _g4_s9 ? (173u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (184u + sizeof(_g4_t_v17)) > _g4_s10 ? (184u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (185u + sizeof(_g4_t_v18)) > _g4_s11 ? (185u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (196u + sizeof(_g4_t_v19)) > _g4_s12 ? (196u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (197u + sizeof(_g4_t_v20)) > _g4_s13 ? (197u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (208u + sizeof(_g4_t_v21)) > _g4_s14 ? (208u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (212u + sizeof(_g4_t_v22)) > _g4_s15 ? (212u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (216u + sizeof(_g4_t_v23)) > _g4_s16 ? (216u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (220u + sizeof(_g4_t_v24)) > _g4_s17 ? (220u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (224u + sizeof(_g4_t_v25)) > _g4_s18 ? (224u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (228u + sizeof(_g4_t_v26)) > _g4_s19 ? (228u + sizeof(_g4_t_v26)) : _g4_s19,
    _g4_s21 = (229u + sizeof(_g4_t_v27)) > _g4_s20 ? (229u + sizeof(_g4_t_v27)) : _g4_s20,
    _g4_s22 = (240u + sizeof(_g4_t_v28)) > _g4_s21 ? (240u + sizeof(_g4_t_v28)) : _g4_s21,
    _g4_s23 = (244u + sizeof(_g4_t_v29)) > _g4_s22 ? (244u + sizeof(_g4_t_v29)) : _g4_s22,
    _g4_s24 = (248u + sizeof(_g4_t_v30)) > _g4_s23 ? (248u + sizeof(_g4_t_v30)) : _g4_s23,
    _g4_s25 = (252u + sizeof(_g4_t_v31)) > _g4_s24 ? (252u + sizeof(_g4_t_v31)) : _g4_s24,
    _g4_s26 = (256u + sizeof(_g4_t_v32)) > _g4_s25 ? (256u + sizeof(_g4_t_v32)) : _g4_s25,
    _g4_s27 = (260u + sizeof(_g4_t_v33)) > _g4_s26 ? (260u + sizeof(_g4_t_v33)) : _g4_s26,
    _g4_s28 = (280u + sizeof(_g4_t_v34)) > _g4_s27 ? (280u + sizeof(_g4_t_v34)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 160u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 161u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 172u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 173u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 184u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 185u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 196u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 197u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 208u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 212u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 216u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 220u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 224u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 228u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 229u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 240u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 244u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 248u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 252u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 256u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 260u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 280u);

  v34 = &self;
  v1 = self;
  v2 = G4_VCALL<int>(self, 148);
  v3 = v2;
  if ( v2 != 0 && G4_VCALL<uint8_t>(v2, 8, 12) == 0 )
    v3 = 0;
  result = *((gameswf::Self **)v1 + 4);
  if ( *((uint8_t *)result + 232) != 0 && v3 != 0 && *(uint32_t *)(v3 + 280) != 0 )
  {
    memset(v12, 0, 16);
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = nullptr;
    v33 = result;
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(result);
    if ( WeakProxy != nullptr )
    {
      v32 = WeakProxy;
      ++*(uint16_t *)WeakProxy;
    }
    v9[0] = 5;
    v9[1] = 0;
    v10 = v1;
    gameswf::RefCounted::addRef(v1);
    EntryScript = (gameswf::RefCounted::Self *)gameswf::abc_def::getEntryScript(*(gameswf::abc_def::Self **)(v3 + 280));
    v7[0] = 5;
    v7[1] = 0;
    v8 = EntryScript;
    if ( EntryScript != nullptr )
      gameswf::RefCounted::addRef(EntryScript);
    gameswf::call_method(
      (gameswf::Self *)v11,
      (const gameswf::ASValue::Self *)v7,
      (gameswf::ASEnvironment::Self *)v12,
      (const gameswf::ASValue::Self *)v9,
      0,
      0,
      "<Entry Script>");
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v11);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v7);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v9);
    gameswf::abc_def::clearScripts(*(gameswf::abc_def::Self **)(v3 + 280));
    return sub_10E2ED0((int)(uintptr_t)(v12));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::replaceMe  (binary VA: 0x10e6060)
// Original: gameswf::SpriteInstance::replaceMe
// ----------------------------------------------------------------------------
gameswf::SpriteInstance::Self * gameswf::SpriteInstance::replaceMe(gameswf::SpriteInstance::Self *self, gameswf::MovieDefinition::Self *a2)
{
  gameswf::MovieDefinitionSub::Self *v2;
  gameswf::Character::Self *v3;
  gameswf::Character::Self *v4;
  char v5;
  gameswf::SpriteInstance::Self *SpriteInstance;
  gameswf::Self *WeakProxy;
  gameswf::Root::Self *Root;
  gameswf::RefCounted::Self *v9;
  gameswf::Self *v10;
  int v11;
  int v12;
  gameswf::Root::Self *v14;
  int RootMovie;
  gameswf::Character::Self *v16;

  v2 = (gameswf::MovieDefinitionSub::Self *)(a2);
  v3 = *((gameswf::Character::Self **)self + 14);
  if ( v3 == nullptr )
    goto LABEL_12;
  if ( *(uint8_t *)(*((uint32_t *)self + 13) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)self + 13, nullptr);
    *((uint32_t *)self + 14) = 0;
LABEL_12:
    v14 = (gameswf::Root::Self *)G4_VCALL<int>(a2, 60);
    RootMovie = gameswf::Root::getRootMovie(v14);
    gameswf::Player::setRoot(*((gameswf::Player::Self **)self + 4), v14);
    return (gameswf::SpriteInstance::Self *)RootMovie;
  }
  v4 = (gameswf::Character::Self *)G4_VCALL<int>(self, 308);
  if ( a2 != nullptr )
  {
    v16 = v4;
    v5 = G4_VCALL<int>(a2, 8, 12);
    v4 = v16;
    if ( v5 == 0 )
      v2 = nullptr;
  }
  SpriteInstance = gameswf::Player::createSpriteInstance(
                     *((gameswf::Player::Self **)self + 4),
                     v2,
                     v4,
                     v3,
                     (char *)0xFFFFFFFF);
  *((uint32_t *)SpriteInstance + 14) = (uint32_t)(uintptr_t)(v3);
  WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v3);
  sub_7E5ED0((gameswf::Self **)SpriteInstance + 13, WeakProxy);
  Root = (gameswf::Root::Self *)gameswf::ASObject::getRoot((gameswf::Player::Self **)self);
  v9 = (gameswf::RefCounted::Self *)gameswf::Root::getRootMovie(Root);
  *((uint32_t *)SpriteInstance + 65) = (uint32_t)(uintptr_t)(v9);
  if ( v9 != nullptr )
  {
    v10 = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v9);
    sub_7E5ED0((gameswf::Self **)SpriteInstance + 64, v10);
  }
  else
  {
    sub_7E5ED0((gameswf::Self **)SpriteInstance + 64, nullptr);
  }
  v11 = *((uint32_t *)self + 15);
  if ( *(uint8_t *)v11 == 0xFF )
    v12 = *(uint32_t *)(v11 + 12);
  else
    v12 = v11 + 1;
  G4_VCALL<void>(v3, 200, SpriteInstance, v12, *((uint16_t *)self + 70), 0, 0, 0, *((uint32_t *)self + 34), *((uint16_t *)self + 71));
  gameswf::SpriteInstance::doInitActions(SpriteInstance);
  gameswf::Character::invalidateBitmapCache(self);
  return SpriteInstance;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::invokeConstructor  (binary VA: 0x10e6230)
// Original: gameswf::SpriteInstance::invokeConstructor
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::SpriteInstance::invokeConstructor(gameswf::Self ***self)
{
  gameswf::Self ***v1;
  gameswf::Self *v2;
  gameswf::Self *WeakProxy;
  gameswf::Self **v4;
  gameswf::RefCounted::Self *v5;
  typedef uint8_t _g4_t_v7[4];
  typedef gameswf::RefCounted::Self *_g4_t_v8;
  typedef uint8_t _g4_t_v9[4];
  typedef gameswf::Self ***_g4_t_v10;
  typedef uint8_t _g4_t_v11[12];
  typedef uint32_t _g4_t_v12[28];
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  typedef char _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef char _g4_t_v26;
  typedef char _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef gameswf::Self *_g4_t_v32[10];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v9)) > _g4_s2 ? (16u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v10)) > _g4_s3 ? (20u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v12)) > _g4_s5 ? (40u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (152u + sizeof(_g4_t_v13)) > _g4_s6 ? (152u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (153u + sizeof(_g4_t_v14)) > _g4_s7 ? (153u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (164u + sizeof(_g4_t_v15)) > _g4_s8 ? (164u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (165u + sizeof(_g4_t_v16)) > _g4_s9 ? (165u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (176u + sizeof(_g4_t_v17)) > _g4_s10 ? (176u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (177u + sizeof(_g4_t_v18)) > _g4_s11 ? (177u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (188u + sizeof(_g4_t_v19)) > _g4_s12 ? (188u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (189u + sizeof(_g4_t_v20)) > _g4_s13 ? (189u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (200u + sizeof(_g4_t_v21)) > _g4_s14 ? (200u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (204u + sizeof(_g4_t_v22)) > _g4_s15 ? (204u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (208u + sizeof(_g4_t_v23)) > _g4_s16 ? (208u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (212u + sizeof(_g4_t_v24)) > _g4_s17 ? (212u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (216u + sizeof(_g4_t_v25)) > _g4_s18 ? (216u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (220u + sizeof(_g4_t_v26)) > _g4_s19 ? (220u + sizeof(_g4_t_v26)) : _g4_s19,
    _g4_s21 = (221u + sizeof(_g4_t_v27)) > _g4_s20 ? (221u + sizeof(_g4_t_v27)) : _g4_s20,
    _g4_s22 = (232u + sizeof(_g4_t_v28)) > _g4_s21 ? (232u + sizeof(_g4_t_v28)) : _g4_s21,
    _g4_s23 = (236u + sizeof(_g4_t_v29)) > _g4_s22 ? (236u + sizeof(_g4_t_v29)) : _g4_s22,
    _g4_s24 = (240u + sizeof(_g4_t_v30)) > _g4_s23 ? (240u + sizeof(_g4_t_v30)) : _g4_s23,
    _g4_s25 = (244u + sizeof(_g4_t_v31)) > _g4_s24 ? (244u + sizeof(_g4_t_v31)) : _g4_s24,
    _g4_s26 = (248u + sizeof(_g4_t_v32)) > _g4_s25 ? (248u + sizeof(_g4_t_v32)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 152u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 153u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 164u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 165u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 176u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 177u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 188u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 189u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 200u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 204u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 208u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 212u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 216u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 220u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 221u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 232u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 236u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 240u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 244u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 248u);

  v32[6] = (gameswf::Self *)&self;
  v1 = self;
  gameswf::CharacterDef::instanciateRegisteredClass(*(self + 63), (gameswf::Character::Self *)self);
  v2 = (gameswf::Self *)v1[4];
  memset(v12, 0, 16);
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32[0] = nullptr;
  v32[1] = v2;
  if ( v2 != nullptr )
  {
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v2);
    if ( WeakProxy != v32[0] )
    {
      v32[0] = WeakProxy;
      ++*(uint16_t *)WeakProxy;
    }
  }
  else
  {
    sub_7E5ED0(v32, nullptr);
  }
  v9[0] = 5;
  v9[1] = 0;
  v10 = v1;
  gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v1);
  v4 = v1[6];
  v7[0] = 5;
  v7[1] = 0;
  v5 = (gameswf::RefCounted::Self *)(v4[16]);
  v8 = v5;
  if ( v5 != nullptr )
    gameswf::RefCounted::addRef(v5);
  gameswf::call_method(
    (gameswf::Self *)v11,
    (const gameswf::ASValue::Self *)v7,
    (gameswf::ASEnvironment::Self *)v12,
    (const gameswf::ASValue::Self *)v9,
    0,
    0,
    "<constructor>");
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v11);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v7);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v9);
  return sub_10E2ED0((int)(uintptr_t)(v12));
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::addDisplayObject  (binary VA: 0x10e6450)
// Original: gameswf::SpriteInstance::addDisplayObject
// ----------------------------------------------------------------------------
gameswf::Character::Self * gameswf::SpriteInstance::addDisplayObject(gameswf::Character::Self *a1, uint16_t a2, int a3, int a4, uint32_t *a5, int a6, char a7, gameswf::CxForm::Self *a8, gameswf::Matrix::Self *a9, gameswf::Effect::Self *a10, float a11, uint16_t a12, char a13)
{
  int v13;
  int CharacterAtDepth;
  int v15;
  gameswf::RefCounted::Self *v16;
  gameswf::Character::Self *v17;
  int i;
  char *function_name;
  int StandardMemberID;
  int v21;
  int v23;
  const char *s2;
  const char *s1;
  int v26;
  uint32_t *v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  gameswf::Self *v36;
  int v37;
  uint8_t v38[2];
  int16_t v39;
  int v40;

  HIBYTE(v37) = a7;
  HIWORD(v36) = a12;
  LOWORD(v37) = a2;
  LOBYTE(v34) = a13;
  v13 = (*(int (**)(uint32_t, uint32_t))(**((uint32_t **)a1 + 63) + 88))(*((uint32_t *)a1 + 63), a2);
  if ( v13 != 0
    || (v13 = (*(int (**)(uint32_t, uint32_t))(**((uint32_t **)a1 + 63) + 152))(
                *((uint32_t *)a1 + 63),
                (uint16_t)v37)) != 0
    || (v26 = *((uint32_t *)a1 + 63)) != 0
    && (G4_VCALL<uint8_t>(v26, 8, 12) != 0
     || (v27 = *((uint32_t **)a1 + 63)) != nullptr
     && G4_VCALL<uint8_t>(v27, 8, 15) != 0
     && (v26 = v27[18]) != 0
     && G4_VCALL<uint8_t>(v26, 8, 12) != 0)
    && (v13 = G4_VCALL<int>(v26, 176, a3, &v37)) != 0 )
  {
    CharacterAtDepth = gameswf::DisplayList::getCharacterAtDepth((gameswf::Character::Self *)((char *)a1 + 212), a6);
    v15 = (uint16_t)v37;
    if ( CharacterAtDepth == 0 || (uint16_t)v37 != *(uint32_t *)(CharacterAtDepth + 48) )
      goto LABEL_4;
    v23 = *(uint32_t *)(CharacterAtDepth + 60);
    if ( v23 == a4 )
      goto LABEL_26;
    s2 = (const char *)(v23 + 1);
    if ( *(uint8_t *)v23 == 0xFF )
      s2 = *(const char **)(v23 + 12);
    s1 = *(uint8_t *)a4 == 0xFF ? *(const char **)(a4 + 12) : (const char *)(a4 + 1);
    if ( strcmp(s1, s2) == 0 )
    {
LABEL_26:
      v17 = nullptr;
      G4_VCALL<void>(a1, 192, a6, a8, a9, a10, LODWORD(a11), a12);
    }
    else
    {
LABEL_4:
      v16 = (gameswf::RefCounted::Self *)G4_VCALL<int>(v13, 24, a1, v15);
      v17 = (gameswf::Character::Self *)(v16);
      if ( v16 != nullptr )
        gameswf::RefCounted::addRef(v16);
      *((uint8_t *)v17 + 153) = 1;
      if ( *(char *)(a4 + 18) >= 0 )
        sub_10E31A0((int)(uintptr_t)(v17), (char *)a4);
      else
        *((uint32_t *)v17 + 15) = a4;
      *((uint8_t *)v17 + 156) = a13;
      v35 = a5[1];
      if ( v35 > 0 )
      {
        v33 = (int)(uintptr_t)(v17);
        for ( i = 0; i != v35; ++i )
        {
          function_name = gameswf::EventId::get_function_name(*(gameswf::EventId::Self **)(*a5 + 4 * i));
          v34 = *(uint32_t *)(*a5 + 4 * i) + 8;
          StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)function_name);
          if ( StandardMemberID == -1
            || G4_VCALL<uint8_t>(v17, 32, StandardMemberID, v34) == 0 )
          {
            G4_VCALL<void>(v17, 48, function_name, v34);
          }
        }
      }
      gameswf::DisplayList::addDisplayObject(
        (gameswf::DisplayList::Self *)((char *)a1 + 212),
        v17,
        a6,
        SHIBYTE(v37),
        a8,
        a9,
        a10,
        a11,
        a12,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        (int)(uintptr_t)(a1) + 212,
        v36,
        v37);
      v21 = *(uint32_t *)v17;
      v38[0] = 19;
      v38[1] = 0;
      v39 = 0;
      v40 = 0;
      (*(void (**)(gameswf::Character::Self *, uint8_t *))(v21 + 64))(v17, v38);
      if ( *(uint8_t *)(*((uint32_t *)a1 + 4) + 232) != 0
        && (*(uint8_t (**)(gameswf::Character::Self *, int))(*(uint32_t *)v17 + 8))(v17, 2) != 0 )
      {
        gameswf::SpriteInstance::invokeConstructor((gameswf::Self ***)v17);
      }
      gameswf::Character::invalidateBitmapCache(a1);
      gameswf::RefCounted::dropRef(v17);
    }
  }
  else
  {
    v17 = nullptr;
    gameswf::logError((gameswf::Self *)"sprite::addDisplayObject(): unknown cid = %d\n", (const char *)(uint16_t)v37);
  }
  return v17;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::setFrameScript  (binary VA: 0x10e6a40)
// Original: gameswf::SpriteInstance::setFrameScript
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::SpriteInstance::setFrameScript(gameswf::RefCounted::Self **self, int a2)
{
  gameswf::RefCounted::Self **v2;
  gameswf::Self *result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  gameswf::RefCounted::Self *v11;
  gameswf::RefCounted::Self *v12;
  gameswf::RefCounted::Self **v13;

  v2 = self;
  if ( *(self + 74) != nullptr )
  {
    gameswf::RefCounted::dropRef(*(self + 74));
    v2 = self;
    *(self + 74) = nullptr;
  }
  result = (gameswf::Self *)(v2[73]);
  if ( result != nullptr )
  {
    v4 = *(uint32_t *)result;
    if ( *(uint32_t *)result != 0 )
    {
      v5 = *(uint32_t *)(v4 + 4);
      v6 = (BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219)) << 6;
      v7 = 65599 * (v6 + BYTE1(a2) + 0xFFFF * (BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219))) + (uint8_t)a2;
      v8 = v5 & v7;
      v9 = (int *)(v4 + 16 * (v5 & v7) + 8);
      if ( *v9 != -2 )
      {
        v10 = *(uint32_t *)(v4
                        + 16
                        * (v5
                         & (65599 * (v6 + BYTE1(a2) + 0xFFFF * (BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219)))
                          + (uint8_t)a2))
                        + 12);
        if ( v8 == (v10 & v5) )
        {
          while ( v7 != v10 || v9[2] != a2 )
          {
            v8 = *v9;
            if ( *v9 == -1 )
              goto LABEL_18;
            v9 = (int *)(v4 + 16 * v8 + 8);
            v10 = *(uint32_t *)(v4 + 16 * v8 + 12);
          }
          if ( v8 >= 0 )
          {
            v11 = *(gameswf::RefCounted::Self **)(v4 + 16 * v8 + 20);
            v12 = *(self + 74);
            if ( v11 != v12 )
            {
              if ( v12 != nullptr )
                gameswf::RefCounted::dropRef(*(self + 74));
              *(self + 74) = v11;
              if ( v11 != nullptr )
                gameswf::RefCounted::addRef(v11);
            }
          }
        }
      }
    }
LABEL_18:
    v13 = self;
    result = (gameswf::Self *)(*(self + 14));
    *((uint8_t *)self + 150) = 1;
    if ( result != nullptr )
    {
      while ( *((uint8_t *)v13[13] + 2) != 0 )
      {
        v13 = (gameswf::RefCounted::Self **)result;
        result = *((gameswf::Self **)result + 14);
        *((uint8_t *)v13 + 150) = 1;
        if ( result == nullptr )
          return result;
      }
      result = sub_7E5ED0(v13 + 13, nullptr);
      v13[14] = nullptr;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::executeFrameTags  (binary VA: 0x10e6bb0)
// Original: gameswf::SpriteInstance::executeFrameTags
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::SpriteInstance::executeFrameTags(gameswf::SpriteInstance::Self *self, int a2, bool a3)
{
  int v3;
  uint32_t *v4;
  int v5;
  int SoundHandler;
  int v7;
  gameswf::Self *result;
  int v9;
  int v10;
  int v11;
  int v12;

  if ( self != nullptr )
    gameswf::RefCounted::addRef(self);
  v3 = *((uint32_t *)self + 63);
  if ( G4_VCALL<uint8_t>(v3, 192) != 0 && a2 >= *(uint32_t *)(v3 + 56) )
  {
    do
      glf::Condition::Wait((pthread_mutex_t ****)(v3 + 64), 0);
    while ( a2 >= *(uint32_t *)(v3 + 56) );
  }
  v4 = (uint32_t *)(*(int (**)(uint32_t, int))(**((uint32_t **)self + 63) + 76))(*((uint32_t *)self + 63), a2);
  if ( (int)v4[1] <= 0 )
  {
    if ( a3 )
      goto LABEL_11;
  }
  else
  {
    v5 = 0;
    if ( a3 )
    {
      do
      {
        v11 = v5;
        (*(void (**)(uint32_t, gameswf::SpriteInstance::Self *))(**(uint32_t **)(*v4 + 4 * v5) + 12))(
          *(uint32_t *)(*v4 + 4 * v5),
          self);
        v5 = v11 + 1;
      }
      while ( v4[1] > v11 + 1 );
      goto LABEL_11;
    }
    do
    {
      v10 = v5;
      (*(void (**)(uint32_t, gameswf::SpriteInstance::Self *))(**(uint32_t **)(*v4 + 4 * v5) + 8))(
        *(uint32_t *)(*v4 + 4 * v5),
        self);
      v5 = v10 + 1;
    }
    while ( v10 + 1 < v4[1] );
  }
  SoundHandler = gameswf::getSoundHandler();
  if ( SoundHandler != 0 )
  {
    v7 = *((uint32_t *)self + 63);
    if ( a2 == *(uint32_t *)(v7 + 36) )
    {
      v9 = *(uint32_t *)(v7 + 28);
      if ( v9 >= 0 )
      {
        v12 = SoundHandler;
        G4_VCALL<void>(SoundHandler, 20, v9);
        G4_VCALL<void>(v12, 12, *(uint32_t *)(*((uint32_t *)self + 63) + 28), 0);
      }
    }
  }
LABEL_11:
  result = gameswf::SpriteInstance::setFrameScript((gameswf::RefCounted::Self **)self, a2);
  if ( self != nullptr )
    return (gameswf::Self *)gameswf::RefCounted::dropRef(self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::gotoFrame  (binary VA: 0x10e6d30)
// Original: gameswf::SpriteInstance::gotoFrame
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::gotoFrame(gameswf::SpriteInstance::Self *self, const gameswf::String::Self *a2)
{
  double *v2;
  bool v3;
  int v4;
  typedef const char *_g4_t_v6;
  typedef double _g4_t_v7;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);

  v2 = (double *)((char *)a2 + 1);
  if ( *(uint8_t *)a2 == 0xFF )
    v2 = *((double **)a2 + 3);
  v3 = (uint8_t)gameswf::ASString::toNumber((gameswf::ASString::Self *)&v7, v2, v6) == 0;
  v4 = *(uint32_t *)self;
  if ( v3 )
    return (*(int (**)(gameswf::SpriteInstance::Self *, const gameswf::String::Self *))(v4 + 164))(self, a2);
  else
    return (*(int (**)(gameswf::SpriteInstance::Self *, int))(v4 + 328))(self, (int)v7 - 1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::getFrameIdFromLabel  (binary VA: 0x10e6db0)
// Original: gameswf::SpriteInstance::getFrameIdFromLabel
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::getFrameIdFromLabel(gameswf::SpriteInstance::Self *self, const gameswf::StringI::Self *a2)
{
  char v2;
  int v3;
  int v5[4];

  v5[0] = -1;
  v2 = (*(int (**)(uint32_t, const gameswf::StringI::Self *, int *))(**((uint32_t **)self + 63) + 92))(
         *((uint32_t *)self + 63),
         a2,
         v5);
  v3 = -1;
  if ( v2 != 0 )
    return v5[0];
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::getIdAtDepth  (binary VA: 0x10e6e00)
// Original: gameswf::SpriteInstance::getIdAtDepth
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::getIdAtDepth(gameswf::SpriteInstance::Self *self, int a2)
{
  int display_index;

  display_index = gameswf::DisplayList::get_display_index((gameswf::SpriteInstance::Self *)((char *)self + 212), a2);
  if ( display_index == -1 )
    return -1;
  else
    return *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 53) + 4 * display_index) + 48);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::getHighestDepth  (binary VA: 0x10e6e60)
// Original: gameswf::SpriteInstance::getHighestDepth
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::getHighestDepth(gameswf::SpriteInstance::Self *self)
{
  return gameswf::DisplayList::getHighestDepth((gameswf::SpriteInstance::Self *)((char *)self + 212));
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::getFileBytes  (binary VA: 0x10e6e90)
// Original: gameswf::SpriteInstance::getFileBytes
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::getFileBytes(gameswf::SpriteInstance::Self *self)
{
  gameswf::MovieDefImpl::Self *v1;
  int v2;

  v1 = *((gameswf::MovieDefImpl::Self **)self + 63);
  v2 = 0;
  if ( v1 != nullptr && G4_VCALL<uint8_t>(v1, 8, 12) != 0 )
    return gameswf::MovieDefImpl::getFileBytes(v1);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::getLoadedBytes  (binary VA: 0x10e6ef0)
// Original: gameswf::SpriteInstance::getLoadedBytes
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::getLoadedBytes(gameswf::SpriteInstance::Self *self)
{
  gameswf::MovieDefImpl::Self *v1;
  int v2;

  v1 = *((gameswf::MovieDefImpl::Self **)self + 63);
  v2 = 0;
  if ( v1 != nullptr && G4_VCALL<uint8_t>(v1, 8, 12) != 0 )
    return gameswf::MovieDefImpl::getLoadedBytes(v1);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::setFPS  (binary VA: 0x10e6f50)
// Original: gameswf::SpriteInstance::setFPS
// ----------------------------------------------------------------------------
gameswf::MovieDefImpl::Self * gameswf::SpriteInstance::setFPS(gameswf::Player::Self **self, float a2)
{
  gameswf::MovieDefImpl::Self **Root;

  Root = (gameswf::MovieDefImpl::Self **)gameswf::ASObject::getRoot(self);
  return gameswf::Root::setFrameRate(Root, a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::getASTransform  (binary VA: 0x10e7510)
// Original: gameswf::SpriteInstance::getASTransform
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::SpriteInstance::getASTransform(gameswf::SpriteInstance::Self *self)
{
  int v1;
  gameswf::Player::Self *v3;
  gameswf::RefCounted::Self *v4;
  gameswf::RefCounted::Self *v5;
  gameswf::RefCounted::Self *v6;

  v1 = *((uint32_t *)self + 71);
  if ( v1 == 0 )
  {
    v3 = *((gameswf::Player::Self **)self + 4);
    v6 = (gameswf::RefCounted::Self *)opNew(0x30u);
    gameswf::ASTransform::Construct(v6, v3, self);
    v4 = *((gameswf::RefCounted::Self **)self + 71);
    v5 = v6;
    if ( v6 == v4 )
    {
      return v6;
    }
    else
    {
      if ( v4 != nullptr )
      {
        gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 71));
        v5 = v6;
      }
      *((uint32_t *)self + 71) = (uint32_t)(uintptr_t)(v5);
      if ( v5 != nullptr )
      {
        gameswf::RefCounted::addRef(v5);
        return *((gameswf::RefCounted::Self **)self + 71);
      }
    }
  }
  return (gameswf::RefCounted::Self *)v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::getStandardMember  (binary VA: 0x10e7820)
// Original: gameswf::SpriteInstance::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::getStandardMember(gameswf::ASObject::Self *a1, int a2, gameswf::ASValue::Self *a3)
{
  double v4; // xmm0_8
  int v5;
  int v6;
  gameswf::RefCounted::Self *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  gameswf::RefCounted::Self *ASTransform;
  int v13;
  int v14;
  int v15;
  int v16;

  switch ( a2 )
  {
    case 4:
      v5 = G4_VCALL<int>(a1, 312);
      if ( v5 < 0 )
        goto LABEL_10;
      v6 = v5 + 1;
      goto LABEL_8;
    case 5:
      v6 = G4_VCALL<int>(a1, 316);
      if ( v6 < 0 )
        goto LABEL_10;
      goto LABEL_8;
    case 12:
      v6 = G4_VCALL<int>(a1, 320);
      if ( v6 >= 0 )
      {
LABEL_8:
        gameswf::ASValue::setDouble(a3, (double)v6);
        return 1;
      }
      else
      {
LABEL_10:
        gameswf::ASValue::dropRefs(a3);
        *(uint8_t *)a3 = 0;
        return 1;
      }
    case 41:
      gameswf::ASValue::setBool(a3, *((uint8_t *)a1 + 270));
      return 1;
    case 42:
      ASTransform = gameswf::SpriteInstance::getASTransform((gameswf::SpriteInstance::Self *)(a1));
      gameswf::ASTransform::init(ASTransform);
      v7 = gameswf::SpriteInstance::getASTransform((gameswf::SpriteInstance::Self *)(a1));
      goto LABEL_12;
    case 49:
      gameswf::SpriteInstance::getGraphics(a1);
      v7 = *((gameswf::RefCounted::Self **)a1 + 70);
      goto LABEL_12;
    case 50:
      v7 = *((gameswf::RefCounted::Self **)a1 + 72);
      goto LABEL_12;
    case 53:
      v16 = (*(int (**)(uint32_t))(**((uint32_t **)a1 + 63) + 96))(*((uint32_t *)a1 + 63));
      v15 = *(uint32_t *)(v16 + 64);
      v8 = 0;
      if ( v15 > 0 )
      {
        v9 = *(uint32_t *)(v16 + 60);
        v10 = 0;
        do
        {
          v11 = 0;
          if ( *(uint8_t *)(v9 + v10) == 5 )
            v11 = *(uint32_t *)(v9 + v10 + 4);
          if ( *(uint32_t *)(v11 + 40) >= *((int16_t *)a1 + 132) )
            break;
          ++v8;
          v10 += 12;
        }
        while ( v8 != v15 );
      }
      if ( v8 > v15 - 1 )
        v8 = v15 - 1;
      if ( v8 < 0 )
      {
        gameswf::ASValue::setObject(a3, nullptr);
        return 1;
      }
      else
      {
        v13 = *(uint32_t *)(v16 + 60) + 12 * v8;
        v14 = 0;
        if ( *(uint8_t *)v13 == 5 )
          v14 = *(uint32_t *)(v13 + 4);
        gameswf::ASValue::setString(a3, *(const gameswf::String::Self **)(v14 + 44));
        return 1;
      }
    case 54:
      v7 = (gameswf::RefCounted::Self *)(*(int (**)(uint32_t))(**((uint32_t **)a1 + 63) + 96))(*((uint32_t *)a1 + 63));
LABEL_12:
      gameswf::ASValue::setObject(a3, v7);
      return 1;
    case 103:
      v4 = *(float *)(gameswf::ASObject::getRoot((gameswf::Player::Self **)a1) + 56);
      gameswf::ASValue::setDouble(a3, v4);
      return gameswf::ASDisplayObjectContainer::getStandardMember(a1, a2, a3);
    default:
      return gameswf::ASDisplayObjectContainer::getStandardMember(a1, a2, a3);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::cloneDisplayObject  (binary VA: 0x10e7aa0)
// Original: gameswf::SpriteInstance::cloneDisplayObject
// ----------------------------------------------------------------------------
gameswf::SpriteInstance::Self * gameswf::SpriteInstance::cloneDisplayObject(gameswf::SpriteInstance::Self *self, const gameswf::String::Self *a2, int a3)
{
  int v3;
  gameswf::Character::Self *v4;
  gameswf::SpriteInstance::Self *SpriteInstance;
  gameswf::Self *v6;
  gameswf::RefCounted::Self *v7;
  gameswf::Self *v8;
  gameswf::Canvas::Self *v9;
  gameswf::Canvas::Self *v10;
  gameswf::Character::Self *v11;
  int v12;
  int v13;
  gameswf::Character::Self *v14;
  int v16;
  uint16_t *v17;
  uint16_t *v18;
  int v19;
  int v20;
  gameswf::MovieDefinitionSub::Self *v21;
  gameswf::Character::Self *v22;
  char v23;
  gameswf::Self *WeakProxy;
  gameswf::RefCounted::Self *v25;
  gameswf::Self *v26;
  int v27;
  uint16_t *v28;
  uint16_t *v29;
  int v30;
  gameswf::Canvas::Self *v31;
  int v32;
  int v33;
  int v34;
  gameswf::Canvas::Self *Canvas;
  gameswf::Canvas::Self *v36;
  int v37;
  int v38;
  uint32_t *v39;
  int v40;
  unsigned int v41;
  unsigned int v42;
  char v43;
  gameswf::Self **v44;
  int v45;
  int v46;
  gameswf::Self *v47;
  int v48;

  v3 = *((uint32_t *)self + 14);
  if ( v3 == 0 )
    goto LABEL_21;
  if ( *(uint8_t *)(*((uint32_t *)self + 13) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)self + 13, nullptr);
    *((uint32_t *)self + 14) = 0;
    goto LABEL_21;
  }
  if ( G4_VCALL<uint8_t>(v3, 8, 2) == 0 )
  {
LABEL_21:
    gameswf::logError((gameswf::Self *)"can't clone _root\n", (const char *)v31);
    return nullptr;
  }
  if ( *((uint32_t *)self + 12) == -1 )
  {
    v20 = G4_VCALL<int>(self, 308);
    v21 = *((gameswf::MovieDefinitionSub::Self **)self + 63);
    v22 = (gameswf::Character::Self *)v20;
    if ( v21 != nullptr )
    {
      Canvas = (gameswf::Canvas::Self *)v20;
      v23 = (*(int (**)(uint32_t, int))(*(uint32_t *)v21 + 8))(*((uint32_t *)self + 63), 12);
      v22 = (gameswf::Character::Self *)(Canvas);
      if ( v23 == 0 )
        v21 = nullptr;
    }
    SpriteInstance = gameswf::Player::createSpriteInstance(
                       *((gameswf::Player::Self **)self + 4),
                       v21,
                       v22,
                       (gameswf::Character::Self *)v3,
                       (char *)0xFFFFFFFF);
    *((uint32_t *)SpriteInstance + 14) = v3;
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy((gameswf::RefCounted::Self *)v3);
    v43 = (uint8_t)(uintptr_t)(SpriteInstance) + 52;
    sub_7E5ED0((gameswf::Self **)SpriteInstance + 13, WeakProxy);
    v25 = (gameswf::RefCounted::Self *)G4_VCALL<int>(self, 308);
    *((uint32_t *)SpriteInstance + 65) = (uint32_t)(uintptr_t)(v25);
    if ( v25 != nullptr )
    {
      v26 = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v25);
      sub_7E5ED0((gameswf::Self **)SpriteInstance + 64, v26);
    }
    else
    {
      sub_7E5ED0((gameswf::Self **)SpriteInstance + 64, nullptr);
    }
    if ( *((char *)a2 + 18) >= 0 )
      sub_10E31A0((int)(uintptr_t)(SpriteInstance), (char *)a2);
    else
      *((uint32_t *)SpriteInstance + 15) = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
    v4 = (gameswf::Character::Self *)G4_VCALL<int>(self, 308);
    SpriteInstance = gameswf::Player::createSpriteInstance(
                       *((gameswf::Player::Self **)self + 4),
                       *((gameswf::MovieDefinitionSub::Self **)self + 63),
                       v4,
                       (gameswf::Character::Self *)v3,
                       nullptr);
    *((uint32_t *)SpriteInstance + 14) = v3;
    v6 = (gameswf::Self *)gameswf::RefCounted::getWeakProxy((gameswf::RefCounted::Self *)v3);
    v43 = (uint8_t)(uintptr_t)(SpriteInstance) + 52;
    sub_7E5ED0((gameswf::Self **)SpriteInstance + 13, v6);
    v7 = (gameswf::RefCounted::Self *)G4_VCALL<int>(self, 308);
    *((uint32_t *)SpriteInstance + 65) = (uint32_t)(uintptr_t)(v7);
    if ( v7 != nullptr )
    {
      v8 = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v7);
      sub_7E5ED0((gameswf::Self **)SpriteInstance + 64, v8);
    }
    else
    {
      sub_7E5ED0((gameswf::Self **)SpriteInstance + 64, nullptr);
    }
    if ( *((char *)a2 + 18) >= 0 )
      sub_10E31A0((int)(uintptr_t)(SpriteInstance), (char *)a2);
    else
      *((uint32_t *)SpriteInstance + 15) = (uint32_t)(uintptr_t)(a2);
    if ( *((uint32_t *)self + 69) != 0 )
    {
      Canvas = (gameswf::Canvas::Self *)gameswf::SpriteInstance::getCanvas(self);
      v9 = (gameswf::Canvas::Self *)gameswf::SpriteInstance::getCanvas(SpriteInstance);
      gameswf::Canvas::opAssign(v9, Canvas);
    }
  }
  gameswf::DisplayList::addDisplayObject(
    (gameswf::DisplayList::Self *)(v3 + 212),
    (gameswf::Character::Self *)SpriteInstance,
    a3,
    true,
    (const gameswf::CxForm::Self *)gameswf::CxForm::identity,
    (const gameswf::Matrix::Self *)gameswf::Matrix::identity,
    (const gameswf::Effect::Self *)gameswf::Effect::identity,
    *((float *)self + 34),
    *((uint16_t *)self + 71),
    v32,
    v33,
    v34,
    (int)(uintptr_t)(Canvas),
    v37,
    v40,
    v43,
    v45,
    v46,
    v47,
    v48);
  v10 = *((gameswf::Canvas::Self **)self + 16);
  v38 = *((uint32_t *)SpriteInstance + 19);
  if ( v38 == 0 )
  {
    v36 = *((gameswf::Canvas::Self **)self + 16);
    v27 = opNew(0x94u);
    *(uint32_t *)v27 = 1065353216;
    v28 = (uint16_t *)(v27 + 32);
    *(uint32_t *)(v27 + 8) = 1065353216;
    *(uint32_t *)(v27 + 16) = 1065353216;
    *(uint32_t *)(v27 + 24) = 1065353216;
    *(uint32_t *)(v27 + 4) = 0;
    *(uint32_t *)(v27 + 12) = 0;
    *(uint32_t *)(v27 + 20) = 0;
    *(uint32_t *)(v27 + 28) = 0;
    v38 = v27;
    v42 = 24;
    v10 = v36;
    if ( ((v27 + 32) & 1) != 0 )
    {
      *(uint8_t *)(v27 + 32) = 0;
      v28 = (uint16_t *)(v27 + 33);
      v42 = 23;
    }
    if ( ((uint8_t)(uintptr_t)(v28) & 2) != 0 )
    {
      *v28++ = 0;
      v42 -= 2;
    }
    memset(v28, 0, 4 * (v42 >> 2));
    v29 = &v28[2 * (v42 >> 2)];
    if ( (v42 & 2) != 0 )
      *v29++ = 0;
    if ( (v42 & 1) != 0 )
      *(uint8_t *)v29 = 0;
    *(uint32_t *)(v27 + 32) = 1065353216;
    *(uint32_t *)(v27 + 48) = 1065353216;
    *(uint32_t *)(v27 + 56) = 0;
    *(uint32_t *)(v27 + 60) = 0;
    *(uint32_t *)(v27 + 64) = 0;
    *(uint32_t *)(v27 + 68) = 0;
    *(uint32_t *)(v27 + 72) = 0;
    *(uint8_t *)(v27 + 76) = 1;
    *(uint8_t *)(v27 + 77) = 0;
    v30 = *(uint32_t *)(v27 + 92) | 0x7FFFFF;
    *(uint32_t *)(v38 + 92) = v30;
    *(uint8_t *)(v38 + 94) = BYTE2(v30) & 0x7F;
    *(uint16_t *)(v38 + 95) = HIBYTE(v30) | 1;
    *(uint8_t *)(v38 + 97) = 0;
    *(uint8_t *)(v38 + 98) = 0;
    *(uint32_t *)(v38 + 100) = 0;
    *(uint32_t *)(v38 + 104) = 1065353216;
    *(uint32_t *)(v38 + 108) = 0;
    *(uint32_t *)(v38 + 112) = 1065353216;
    *(uint32_t *)(v38 + 116) = 0;
    *(uint32_t *)(v38 + 120) = 0;
    *(uint32_t *)(v38 + 124) = 0;
    *(uint32_t *)(v38 + 128) = 0;
    *(uint32_t *)(v38 + 132) = 0;
    *(uint32_t *)(v38 + 136) = 0;
    *(uint32_t *)(v38 + 140) = 0;
    *(uint32_t *)(v38 + 144) = 0;
    *((uint32_t *)SpriteInstance + 19) = v38;
  }
  *(uint32_t *)v38 = *(uint32_t *)v10;
  *(uint32_t *)(v38 + 4) = *((uint32_t *)v10 + 1);
  *(uint32_t *)(v38 + 8) = *((uint32_t *)v10 + 2);
  *(uint32_t *)(v38 + 12) = *((uint32_t *)v10 + 3);
  *(uint32_t *)(v38 + 16) = *((uint32_t *)v10 + 4);
  *(uint32_t *)(v38 + 20) = *((uint32_t *)v10 + 5);
  *(uint32_t *)(v38 + 24) = *((uint32_t *)v10 + 6);
  *(uint32_t *)(v38 + 28) = *((uint32_t *)v10 + 7);
  v11 = *((gameswf::Character::Self **)SpriteInstance + 14);
  v12 = *((uint32_t *)SpriteInstance + 19);
  *((uint32_t *)SpriteInstance + 16) = v12;
  *((uint8_t *)SpriteInstance + 146) = 1;
  if ( v11 != nullptr )
  {
    if ( *(uint8_t *)(*((uint32_t *)SpriteInstance + 13) + 2) == 0 )
    {
      sub_7E5ED0(v44, nullptr);
      v12 = *((uint32_t *)SpriteInstance + 19);
      *((uint32_t *)SpriteInstance + 14) = 0;
      v39 = *((uint32_t **)self + 17);
      if ( v12 != 0 )
        goto LABEL_16;
LABEL_24:
      v16 = opNew(0x94u);
      v17 = (uint16_t *)(v16 + 32);
      v12 = v16;
      *(uint32_t *)v16 = 1065353216;
      *(uint32_t *)(v16 + 8) = 1065353216;
      *(uint32_t *)(v16 + 16) = 1065353216;
      *(uint32_t *)(v16 + 24) = 1065353216;
      *(uint32_t *)(v16 + 4) = 0;
      *(uint32_t *)(v16 + 12) = 0;
      *(uint32_t *)(v16 + 20) = 0;
      *(uint32_t *)(v16 + 28) = 0;
      v41 = 24;
      if ( ((v16 + 32) & 1) != 0 )
      {
        *(uint8_t *)(v16 + 32) = 0;
        v17 = (uint16_t *)(v16 + 33);
        v41 = 23;
      }
      if ( ((uint8_t)(uintptr_t)(v17) & 2) != 0 )
      {
        *v17++ = 0;
        v41 -= 2;
      }
      memset(v17, 0, 4 * (v41 >> 2));
      v18 = &v17[2 * (v41 >> 2)];
      if ( (v41 & 2) != 0 )
        *v18++ = 0;
      if ( (v41 & 1) != 0 )
        *(uint8_t *)v18 = 0;
      v19 = *(uint32_t *)(v16 + 92);
      *(uint32_t *)(v12 + 32) = 1065353216;
      v19 |= 0x7FFFFFu;
      *(uint32_t *)(v12 + 48) = 1065353216;
      *(uint32_t *)(v12 + 92) = v19;
      *(uint32_t *)(v12 + 56) = 0;
      *(uint32_t *)(v12 + 60) = 0;
      *(uint32_t *)(v12 + 64) = 0;
      *(uint32_t *)(v12 + 68) = 0;
      *(uint32_t *)(v12 + 72) = 0;
      *(uint8_t *)(v12 + 76) = 1;
      *(uint8_t *)(v12 + 77) = 0;
      *(uint8_t *)(v12 + 94) = BYTE2(v19) & 0x7F;
      *(uint16_t *)(v12 + 95) = HIBYTE(v19) | 1;
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
      *((uint32_t *)SpriteInstance + 19) = v12;
      goto LABEL_16;
    }
    gameswf::Character::invalidateBitmapCache(v11);
    v12 = *((uint32_t *)SpriteInstance + 19);
  }
  v39 = *((uint32_t **)self + 17);
  if ( v12 == 0 )
    goto LABEL_24;
LABEL_16:
  *(uint32_t *)(v12 + 32) = *v39;
  *(uint32_t *)(v12 + 36) = v39[1];
  *(uint32_t *)(v12 + 40) = v39[2];
  *(uint32_t *)(v12 + 44) = v39[3];
  *(uint32_t *)(v12 + 48) = v39[4];
  *(uint32_t *)(v12 + 52) = v39[5];
  v13 = *((uint32_t *)SpriteInstance + 19) + 32;
  *((uint8_t *)SpriteInstance + 145) = 1;
  *((uint32_t *)SpriteInstance + 17) = v13;
  v14 = *((gameswf::Character::Self **)SpriteInstance + 14);
  *((uint8_t *)SpriteInstance + 147) = 1;
  if ( v14 != nullptr )
  {
    if ( *(uint8_t *)(*((uint32_t *)SpriteInstance + 13) + 2) != 0 )
    {
      gameswf::Character::invalidateBitmapCache(v14);
    }
    else
    {
      sub_7E5ED0(v44, nullptr);
      *((uint32_t *)SpriteInstance + 14) = 0;
    }
  }
  gameswf::Character::setEffect(SpriteInstance, *((const gameswf::Effect::Self **)self + 18));
  G4_VCALL<void>(self, 80, SpriteInstance);
  return SpriteInstance;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::setStandardMember  (binary VA: 0x10e85e0)
// Original: gameswf::SpriteInstance::setStandardMember
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::setStandardMember(long double a1, gameswf::RefCounted::Self *a2, int a3, gameswf::RefCounted::Self **a4)
{
  int v4;
  int v5;
  float v6; // xmm0_4
  int v7;
  gameswf::RefCounted::Self *v9;
  int v10;
  int v11;
  float v12; // xmm0_4
  gameswf::RefCounted::Self *v13;
  void (*v14)(gameswf::RefCounted::Self *, gameswf::RefCounted::Self *);
  gameswf::RefCounted::Self *ASTransform;
  gameswf::RefCounted::Self *v16;
  gameswf::Self **v17;
  gameswf::Self *WeakProxy;
  gameswf::Self *v19;
  int StandardMemberID;
  gameswf::Self *v21;
  int v22;
  char v23;
  char v24;
  gameswf::Self *v25;
  int v26;
  char v27;
  char v28;
  gameswf::Self *v29;
  int v30;
  char v31;
  char v32;
  gameswf::Self *v33;
  int v34;
  gameswf::RefCounted::Self *v35;
  gameswf::RefCounted::Self *v36;
  int v37;
  int v38;
  int v39;
  char v40;
  int v41;
  int v42;
  gameswf::Self *v43;
  char *v44;
  gameswf::Root::Self *Root;
  float v46; // xmm0_4
  int v47;
  int v48;
  gameswf::RefCounted::Self *v49;
  int v50;
  float v51; // xmm0_4
  int v52;
  float v53; // xmm0_4
  int v54;
  float v55; // xmm0_4
  gameswf::Self *v56;
  gameswf::Self *v57;
  int v58;
  uint16_t *v59;
  unsigned int v60;
  uint16_t *v61;
  int v62;
  int v63;
  uint16_t *v64;
  unsigned int v65;
  uint16_t *v66;
  int v67;
  int v68;
  uint16_t *v69;
  unsigned int v70;
  uint16_t *v71;
  int v72;
  int v73;
  uint16_t *v74;
  unsigned int v75;
  uint16_t *v76;
  int v77;
  typedef int _g4_t_v78;
  typedef char _g4_t_v79;
  typedef char _g4_t_v80;
  typedef char _g4_t_v81;
  typedef gameswf::RefCounted::Self *_g4_t_v82;
  typedef int _g4_t_i;
  typedef char _g4_t_v84;
  typedef char _g4_t_v85;
  typedef gameswf::Self *_g4_t_v86;
  typedef int16_t _g4_t_v87;
  typedef char _g4_t_v88;
  typedef char _g4_t_v89;
  typedef char _g4_t_v90;
  typedef char _g4_t_v91;
  typedef gameswf::Self *_g4_t_v92;
  typedef int16_t _g4_t_v93;
  typedef char _g4_t_v94;
  typedef char _g4_t_v95;
  typedef char _g4_t_v96;
  typedef char _g4_t_v97;
  typedef gameswf::Self *_g4_t_v98;
  typedef int16_t _g4_t_v99;
  typedef char _g4_t_v100;
  typedef char _g4_t_v101;
  typedef char _g4_t_v102;
  typedef char _g4_t_v103;
  typedef gameswf::Self *_g4_t_v104;
  typedef int16_t _g4_t_v105;
  typedef char _g4_t_v106;
  typedef char _g4_t_v107;
  typedef char _g4_t_v108;
  typedef char _g4_t_v109;
  typedef gameswf::Self *_g4_t_v110;
  typedef int16_t _g4_t_v111;
  typedef char _g4_t_v112;
  typedef char _g4_t_v113;
  typedef int _g4_t_v114;
  typedef gameswf::Self *_g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (4u + sizeof(_g4_t_v78)) > _g4_s0 ? (4u + sizeof(_g4_t_v78)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v79)) > _g4_s1 ? (4u + sizeof(_g4_t_v79)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v80)) > _g4_s2 ? (4u + sizeof(_g4_t_v80)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v81)) > _g4_s3 ? (4u + sizeof(_g4_t_v81)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v82)) > _g4_s4 ? (16u + sizeof(_g4_t_v82)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_i)) > _g4_s5 ? (24u + sizeof(_g4_t_i)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v84)) > _g4_s6 ? (32u + sizeof(_g4_t_v84)) : _g4_s6,
    _g4_s8 = (33u + sizeof(_g4_t_v85)) > _g4_s7 ? (33u + sizeof(_g4_t_v85)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v86)) > _g4_s8 ? (44u + sizeof(_g4_t_v86)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v87)) > _g4_s9 ? (48u + sizeof(_g4_t_v87)) : _g4_s9,
    _g4_s11 = (50u + sizeof(_g4_t_v88)) > _g4_s10 ? (50u + sizeof(_g4_t_v88)) : _g4_s10,
    _g4_s12 = (51u + sizeof(_g4_t_v89)) > _g4_s11 ? (51u + sizeof(_g4_t_v89)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v90)) > _g4_s12 ? (64u + sizeof(_g4_t_v90)) : _g4_s12,
    _g4_s14 = (65u + sizeof(_g4_t_v91)) > _g4_s13 ? (65u + sizeof(_g4_t_v91)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v92)) > _g4_s14 ? (76u + sizeof(_g4_t_v92)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v93)) > _g4_s15 ? (80u + sizeof(_g4_t_v93)) : _g4_s15,
    _g4_s17 = (82u + sizeof(_g4_t_v94)) > _g4_s16 ? (82u + sizeof(_g4_t_v94)) : _g4_s16,
    _g4_s18 = (83u + sizeof(_g4_t_v95)) > _g4_s17 ? (83u + sizeof(_g4_t_v95)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v96)) > _g4_s18 ? (96u + sizeof(_g4_t_v96)) : _g4_s18,
    _g4_s20 = (97u + sizeof(_g4_t_v97)) > _g4_s19 ? (97u + sizeof(_g4_t_v97)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v98)) > _g4_s20 ? (108u + sizeof(_g4_t_v98)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v99)) > _g4_s21 ? (112u + sizeof(_g4_t_v99)) : _g4_s21,
    _g4_s23 = (114u + sizeof(_g4_t_v100)) > _g4_s22 ? (114u + sizeof(_g4_t_v100)) : _g4_s22,
    _g4_s24 = (115u + sizeof(_g4_t_v101)) > _g4_s23 ? (115u + sizeof(_g4_t_v101)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v102)) > _g4_s24 ? (128u + sizeof(_g4_t_v102)) : _g4_s24,
    _g4_s26 = (129u + sizeof(_g4_t_v103)) > _g4_s25 ? (129u + sizeof(_g4_t_v103)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v104)) > _g4_s26 ? (140u + sizeof(_g4_t_v104)) : _g4_s26,
    _g4_s28 = (144u + sizeof(_g4_t_v105)) > _g4_s27 ? (144u + sizeof(_g4_t_v105)) : _g4_s27,
    _g4_s29 = (146u + sizeof(_g4_t_v106)) > _g4_s28 ? (146u + sizeof(_g4_t_v106)) : _g4_s28,
    _g4_s30 = (147u + sizeof(_g4_t_v107)) > _g4_s29 ? (147u + sizeof(_g4_t_v107)) : _g4_s29,
    _g4_s31 = (160u + sizeof(_g4_t_v108)) > _g4_s30 ? (160u + sizeof(_g4_t_v108)) : _g4_s30,
    _g4_s32 = (161u + sizeof(_g4_t_v109)) > _g4_s31 ? (161u + sizeof(_g4_t_v109)) : _g4_s31,
    _g4_s33 = (172u + sizeof(_g4_t_v110)) > _g4_s32 ? (172u + sizeof(_g4_t_v110)) : _g4_s32,
    _g4_s34 = (176u + sizeof(_g4_t_v111)) > _g4_s33 ? (176u + sizeof(_g4_t_v111)) : _g4_s33,
    _g4_s35 = (178u + sizeof(_g4_t_v112)) > _g4_s34 ? (178u + sizeof(_g4_t_v112)) : _g4_s34,
    _g4_s36 = (179u + sizeof(_g4_t_v113)) > _g4_s35 ? (179u + sizeof(_g4_t_v113)) : _g4_s35,
    _g4_s37 = (192u + sizeof(_g4_t_v114)) > _g4_s36 ? (192u + sizeof(_g4_t_v114)) : _g4_s36,
    _g4_s38 = (196u + sizeof(_g4_t_v115)) > _g4_s37 ? (196u + sizeof(_g4_t_v115)) : _g4_s37,
    _g4_s39 = (200u + sizeof(_g4_t_v116)) > _g4_s38 ? (200u + sizeof(_g4_t_v116)) : _g4_s38,
    _g4_s40 = (204u + sizeof(_g4_t_v117)) > _g4_s39 ? (204u + sizeof(_g4_t_v117)) : _g4_s39,
    _g4_s41 = (208u + sizeof(_g4_t_v118)) > _g4_s40 ? (208u + sizeof(_g4_t_v118)) : _g4_s40
  };
  alignas(16) uint8_t _g4_sf[_g4_s41];
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 4u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 4u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 4u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 4u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 16u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 24u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 32u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 33u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 44u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 48u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 50u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 51u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 64u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 65u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 76u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 80u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 82u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 83u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 96u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 97u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 108u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 112u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 114u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 115u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 128u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 129u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 140u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 144u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 146u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 147u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 160u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 161u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 172u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 176u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 178u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 179u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 192u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 196u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 200u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 204u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 208u);

  switch ( a3 )
  {
    case ')':
      *((uint8_t *)a2 + 270) = gameswf::ASValue::toBool((gameswf::ASValue::Self *)a4);
      return 1;
    case '*':
      v7 = 1;
      if ( *(uint8_t *)a4 == 5 )
      {
        v13 = a4[1];
        if ( v13 != nullptr
          && G4_VCALL<uint8_t>(v13, 8, 31) != 0 )
        {
          v14 = *(void (**)(gameswf::RefCounted::Self *, gameswf::RefCounted::Self *))(*(uint32_t *)v13 + 80);
          ASTransform = gameswf::SpriteInstance::getASTransform((gameswf::SpriteInstance::Self *)(a2));
          v14(v13, ASTransform);
          v16 = gameswf::SpriteInstance::getASTransform((gameswf::SpriteInstance::Self *)(a2));
          *((uint32_t *)v16 + 11) = (uint32_t)(uintptr_t)(a2);
          if ( a2 != nullptr )
          {
            v17 = (gameswf::Self **)((char *)v16 + 40);
            WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(a2);
            sub_7E5ED0(v17, WeakProxy);
          }
          else
          {
            sub_7E5ED0((gameswf::Self **)v16 + 10, nullptr);
          }
          LOWORD(v114) = 0;
          v84 = 1;
          v85 = 0;
          gameswf::String::resize((gameswf::String::Self *)&v84, 6);
          v19 = (gameswf::Self *)&v85;
          if ( v84 == -1 )
            v19 = v86;
          gameswf::Strcpy_s(v19, (char *)&loc_6 + 1, (gameswf::Self *)"matrix");
          v87 = -1;
          v88 = 127;
          v89 |= 1u;
          StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v84);
          if ( StandardMemberID == -1
            || G4_VCALL<uint8_t>(v13, 36, StandardMemberID, &v114) == 0 )
          {
            G4_VCALL<void>(v13, 44, &v84, &v114);
          }
          if ( v84 == -1 && (v89 & 1) != 0 )
            gameswf::free_internal(v86);
          if ( (uint8_t)v114 == 5 )
          {
            v57 = v115;
            if ( v115 != nullptr
              && G4_VCALL<uint8_t>(v115, 8, 30) != 0 )
            {
              gameswf::Character::setMatrix(a2, (gameswf::Self *)((char *)v57 + 40));
            }
          }
          v90 = 1;
          v91 = 0;
          gameswf::String::resize((gameswf::String::Self *)&v90, 2);
          v21 = (gameswf::Self *)&v91;
          if ( v90 == -1 )
            v21 = v92;
          gameswf::Strcpy_s(v21, (char *)&dword_0 + 3, (gameswf::Self *)"_z");
          v93 = -1;
          v94 = 127;
          v95 |= 1u;
          v22 = gameswf::getStandardMemberID((gameswf::Self *)&v90);
          if ( v22 == -1
            || (v23 = G4_VCALL<int>(v13, 36, v22, &v114),
                v24 = 1,
                v23 == 0) )
          {
            v24 = G4_VCALL<int>(v13, 44, &v90, &v114);
          }
          if ( v90 == -1 && (v95 & 1) != 0 )
          {
            v81 = v24;
            gameswf::free_internal(v92);
            v24 = v81;
          }
          if ( v24 != 0 )
          {
            gameswf::ASDisplayObjectContainer::setTransform(a2);
            v52 = sub_10E2480((int *)a2 + 19);
            gameswf::ASValue::toNumber((gameswf::ASValue::Self *)&v114);
            v53 = a1;
            *(float *)(v52 + 108) = v53;
          }
          v96 = 1;
          v97 = 0;
          gameswf::String::resize((gameswf::String::Self *)&v96, 10);
          v25 = (gameswf::Self *)&v97;
          if ( v96 == -1 )
            v25 = v98;
          gameswf::Strcpy_s(v25, &byte_9[2], (gameswf::Self *)"_xrotation");
          v99 = -1;
          v100 = 127;
          v101 |= 1u;
          v26 = gameswf::getStandardMemberID((gameswf::Self *)&v96);
          if ( v26 == -1
            || (v27 = G4_VCALL<int>(v13, 36, v26, &v114),
                v28 = 1,
                v27 == 0) )
          {
            v28 = G4_VCALL<int>(v13, 44, &v96, &v114);
          }
          if ( v96 == -1 && (v101 & 1) != 0 )
          {
            v80 = v28;
            gameswf::free_internal(v98);
            v28 = v80;
          }
          if ( v28 != 0 )
          {
            gameswf::ASDisplayObjectContainer::setTransform(a2);
            v50 = sub_10E2480((int *)a2 + 19);
            gameswf::ASValue::toNumber((gameswf::ASValue::Self *)&v114);
            v51 = a1;
            *(float *)(v50 + 116) = v51;
          }
          v102 = 1;
          v103 = 0;
          gameswf::String::resize((gameswf::String::Self *)&v102, 10);
          v29 = (gameswf::Self *)&v103;
          if ( v102 == -1 )
            v29 = v104;
          gameswf::Strcpy_s(v29, &byte_9[2], (gameswf::Self *)"_yrotation");
          v105 = -1;
          v106 = 127;
          v107 |= 1u;
          v30 = gameswf::getStandardMemberID((gameswf::Self *)&v102);
          if ( v30 == -1
            || (v31 = G4_VCALL<int>(v13, 36, v30, &v114),
                v32 = 1,
                v31 == 0) )
          {
            v32 = G4_VCALL<int>(v13, 44, &v102, &v114);
          }
          if ( v102 == -1 && (v107 & 1) != 0 )
          {
            v79 = v32;
            gameswf::free_internal(v104);
            v32 = v79;
          }
          if ( v32 != 0 )
          {
            gameswf::ASDisplayObjectContainer::setTransform(a2);
            v54 = sub_10E2480((int *)a2 + 19);
            gameswf::ASValue::toNumber((gameswf::ASValue::Self *)&v114);
            v55 = a1;
            *(float *)(v54 + 120) = v55;
          }
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v114);
          LOBYTE(v114) = 0;
          v108 = 1;
          v109 = 0;
          gameswf::String::resize((gameswf::String::Self *)&v108, 14);
          v33 = (gameswf::Self *)&v109;
          if ( v108 == -1 )
            v33 = v110;
          gameswf::Strcpy_s(v33, &byte_9[6], (gameswf::Self *)"colorTransform");
          v111 = -1;
          v112 = 127;
          v113 |= 1u;
          v34 = gameswf::getStandardMemberID((gameswf::Self *)&v108);
          if ( v34 == -1
            || G4_VCALL<uint8_t>(v13, 36, v34, &v114) == 0 )
          {
            G4_VCALL<void>(v13, 44, &v108, &v114);
          }
          if ( v108 == -1 && (v113 & 1) != 0 )
            gameswf::free_internal(v110);
          if ( (uint8_t)v114 == 5 )
          {
            v56 = v115;
            if ( v115 != nullptr
              && G4_VCALL<uint8_t>(v115, 8, 32) != 0 )
            {
              gameswf::Character::setCxForm(a2, (gameswf::Self *)((char *)v56 + 40));
            }
          }
          v7 = 1;
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v114);
        }
      }
      return v7;
    case '2':
      v7 = 1;
      if ( *(uint8_t *)a4 == 5 )
      {
        v35 = a4[1];
        v82 = v35;
        if ( v35 != nullptr
          && G4_VCALL<uint8_t>(v35, 8, 20) != 0 )
        {
          v36 = v82;
          v114 = 0;
          v115 = nullptr;
          v116 = 0;
          v117 = 0;
          v118 = 0;
          v37 = 0;
          for ( i = 0; i < *((uint32_t *)v82 + 16); v37 += 12 )
          {
            v38 = *((uint32_t *)v36 + 15) + v37;
            if ( *(uint8_t *)v38 == 5 )
            {
              v39 = *(uint32_t *)(v38 + 4);
              if ( v39 != 0 )
              {
                v78 = v37;
                v40 = G4_VCALL<int>(v39, 8, 66);
                v37 = v78;
                if ( v40 != 0 )
                {
                  v41 = v116;
                  v42 = v117;
                  if ( v116 + 1 > v117 )
                  {
                    v48 = v116 + 1 + ((v116 + 1) >> 1);
                    v117 = v48;
                    if ( v48 != 0 )
                    {
                      if ( v115 != nullptr )
                        v43 = (gameswf::Self *)gameswf::realloc_internal(v115, 96 * v48, 96 * v42);
                      else
                        v43 = (gameswf::Self *)gameswf::malloc_internal(96 * v48);
                      v115 = v43;
                      v41 = v116;
                      v37 = v78;
                    }
                    else
                    {
                      if ( v115 != nullptr )
                      {
                        gameswf::free_internal(v115);
                        v41 = v116;
                        v37 = v78;
                      }
                      v115 = nullptr;
                      v43 = nullptr;
                    }
                  }
                  else
                  {
                    v43 = v115;
                  }
                  v44 = (char *)v43 + 96 * v41;
                  if ( v44 != nullptr )
                    std::memcpy(v44, (const void *)(v39 + 40), 96);
                  ++v116;
                }
              }
            }
            v36 = v82;
            ++i;
          }
          gameswf::Character::setEffect(a2, (const gameswf::Effect::Self *)&v114);
          v49 = *((gameswf::RefCounted::Self **)a2 + 72);
          if ( v82 != v49 )
          {
            if ( v49 != nullptr )
              gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)a2 + 72));
            *((uint32_t *)a2 + 72) = (uint32_t)(uintptr_t)(v82);
            gameswf::RefCounted::addRef(v82);
          }
          v7 = 1;
          gameswf::array_gameswf_Filter_2a2941::resize((gameswf::array<gameswf::Filter> *)&v115, 0);
          if ( v118 == 0 )
          {
            v117 = 0;
            if ( v115 != nullptr )
              gameswf::free_internal(v115);
          }
        }
      }
      return v7;
    case 'g':
      gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a4);
      Root = (gameswf::Root::Self *)gameswf::ASObject::getRoot((gameswf::Player::Self **)a2);
      v46 = a1;
      gameswf::Root::setCameraFOV(Root, v46);
      return 1;
    case 'h':
      gameswf::ASDisplayObjectContainer::setTransform(a2);
      v47 = *((uint32_t *)a2 + 19);
      if ( v47 == 0 )
      {
        v73 = opNew(0x94u);
        v74 = (uint16_t *)(v73 + 32);
        v47 = v73;
        *(uint32_t *)v73 = 1065353216;
        *(uint32_t *)(v73 + 8) = 1065353216;
        *(uint32_t *)(v73 + 16) = 1065353216;
        *(uint32_t *)(v73 + 24) = 1065353216;
        *(uint32_t *)(v73 + 4) = 0;
        *(uint32_t *)(v73 + 12) = 0;
        *(uint32_t *)(v73 + 20) = 0;
        *(uint32_t *)(v73 + 28) = 0;
        v75 = 24;
        if ( ((v73 + 32) & 1) != 0 )
        {
          *(uint8_t *)(v73 + 32) = 0;
          v74 = (uint16_t *)(v73 + 33);
          LOBYTE(v75) = 23;
        }
        if ( ((uint8_t)(uintptr_t)(v74) & 2) != 0 )
        {
          *v74 = 0;
          v75 -= 2;
          ++v74;
        }
        memset(v74, 0, 4 * (v75 >> 2));
        v76 = &v74[2 * (v75 >> 2)];
        if ( (v75 & 2) != 0 )
          *v76++ = 0;
        if ( (v75 & 1) != 0 )
          *(uint8_t *)v76 = 0;
        v77 = *(uint32_t *)(v73 + 92);
        *(uint32_t *)(v47 + 32) = 1065353216;
        v77 |= 0x7FFFFFu;
        *(uint32_t *)(v47 + 48) = 1065353216;
        *(uint32_t *)(v47 + 92) = v77;
        *(uint32_t *)(v47 + 56) = 0;
        *(uint8_t *)(v47 + 94) = BYTE2(v77) & 0x7F;
        *(uint8_t *)(v47 + 95) = HIBYTE(v77) | 1;
        *(uint32_t *)(v47 + 60) = 0;
        *(uint32_t *)(v47 + 64) = 0;
        *(uint32_t *)(v47 + 68) = 0;
        *(uint32_t *)(v47 + 72) = 0;
        *(uint8_t *)(v47 + 76) = 1;
        *(uint8_t *)(v47 + 77) = 0;
        *(uint8_t *)(v47 + 96) = 0;
        *(uint8_t *)(v47 + 97) = 0;
        *(uint8_t *)(v47 + 98) = 0;
        *(uint32_t *)(v47 + 100) = 0;
        *(uint32_t *)(v47 + 104) = 1065353216;
        *(uint32_t *)(v47 + 108) = 0;
        *(uint32_t *)(v47 + 112) = 1065353216;
        *(uint32_t *)(v47 + 116) = 0;
        *(uint32_t *)(v47 + 120) = 0;
        *(uint32_t *)(v47 + 124) = 0;
        *(uint32_t *)(v47 + 128) = 0;
        *(uint32_t *)(v47 + 132) = 0;
        *(uint32_t *)(v47 + 136) = 0;
        *(uint32_t *)(v47 + 140) = 0;
        *(uint32_t *)(v47 + 144) = 0;
        *((uint32_t *)a2 + 19) = v47;
      }
      *(uint8_t *)(v47 + 97) = gameswf::ASValue::toBool((gameswf::ASValue::Self *)a4);
      return gameswf::ASDisplayObjectContainer::setStandardMember(a2, a3, (gameswf::ASValue::Self *)a4);
    case 'i':
      v4 = *((uint32_t *)a2 + 19);
      if ( v4 == 0 )
      {
        v68 = opNew(0x94u);
        v69 = (uint16_t *)(v68 + 32);
        v4 = v68;
        *(uint32_t *)v68 = 1065353216;
        *(uint32_t *)(v68 + 8) = 1065353216;
        *(uint32_t *)(v68 + 16) = 1065353216;
        *(uint32_t *)(v68 + 24) = 1065353216;
        *(uint32_t *)(v68 + 4) = 0;
        *(uint32_t *)(v68 + 12) = 0;
        *(uint32_t *)(v68 + 20) = 0;
        *(uint32_t *)(v68 + 28) = 0;
        v70 = 24;
        if ( ((v68 + 32) & 1) != 0 )
        {
          *(uint8_t *)(v68 + 32) = 0;
          v69 = (uint16_t *)(v68 + 33);
          LOWORD(v70) = 23;
        }
        if ( ((uint8_t)(uintptr_t)(v69) & 2) != 0 )
        {
          *v69 = 0;
          v70 -= 2;
          ++v69;
        }
        memset(v69, 0, 4 * (v70 >> 2));
        v71 = &v69[2 * (v70 >> 2)];
        if ( (v70 & 2) != 0 )
          *v71++ = 0;
        if ( (v70 & 1) != 0 )
          *(uint8_t *)v71 = 0;
        v72 = *(uint32_t *)(v68 + 92);
        *(uint32_t *)(v4 + 32) = 1065353216;
        v72 |= 0x7FFFFFu;
        *(uint32_t *)(v4 + 48) = 1065353216;
        *(uint32_t *)(v4 + 92) = v72;
        *(uint32_t *)(v4 + 56) = 0;
        *(uint8_t *)(v4 + 94) = BYTE2(v72) & 0x7F;
        *(uint8_t *)(v4 + 95) = HIBYTE(v72) | 1;
        *(uint32_t *)(v4 + 60) = 0;
        *(uint32_t *)(v4 + 64) = 0;
        *(uint32_t *)(v4 + 68) = 0;
        *(uint32_t *)(v4 + 72) = 0;
        *(uint8_t *)(v4 + 76) = 1;
        *(uint8_t *)(v4 + 77) = 0;
        *(uint8_t *)(v4 + 96) = 0;
        *(uint8_t *)(v4 + 97) = 0;
        *(uint8_t *)(v4 + 98) = 0;
        *(uint32_t *)(v4 + 100) = 0;
        *(uint32_t *)(v4 + 104) = 1065353216;
        *(uint32_t *)(v4 + 108) = 0;
        *(uint32_t *)(v4 + 112) = 1065353216;
        *(uint32_t *)(v4 + 116) = 0;
        *(uint32_t *)(v4 + 120) = 0;
        *(uint32_t *)(v4 + 124) = 0;
        *(uint32_t *)(v4 + 128) = 0;
        *(uint32_t *)(v4 + 132) = 0;
        *(uint32_t *)(v4 + 136) = 0;
        *(uint32_t *)(v4 + 140) = 0;
        *(uint32_t *)(v4 + 144) = 0;
        *((uint32_t *)a2 + 19) = v4;
      }
      *(uint8_t *)(v4 + 98) = 1;
      v5 = *((uint32_t *)a2 + 19);
      if ( v5 == 0 )
      {
        v63 = opNew(0x94u);
        v64 = (uint16_t *)(v63 + 32);
        v5 = v63;
        *(uint32_t *)v63 = 1065353216;
        *(uint32_t *)(v63 + 8) = 1065353216;
        *(uint32_t *)(v63 + 16) = 1065353216;
        *(uint32_t *)(v63 + 24) = 1065353216;
        *(uint32_t *)(v63 + 4) = 0;
        *(uint32_t *)(v63 + 12) = 0;
        *(uint32_t *)(v63 + 20) = 0;
        *(uint32_t *)(v63 + 28) = 0;
        v65 = 24;
        if ( ((v63 + 32) & 1) != 0 )
        {
          *(uint8_t *)(v63 + 32) = 0;
          v64 = (uint16_t *)(v63 + 33);
          LOBYTE(v65) = 23;
        }
        if ( ((uint8_t)(uintptr_t)(v64) & 2) != 0 )
        {
          *v64 = 0;
          v65 -= 2;
          ++v64;
        }
        memset(v64, 0, 4 * (v65 >> 2));
        v66 = &v64[2 * (v65 >> 2)];
        if ( (v65 & 2) != 0 )
          *v66++ = 0;
        if ( (v65 & 1) != 0 )
          *(uint8_t *)v66 = 0;
        v67 = *(uint32_t *)(v63 + 92);
        *(uint32_t *)(v5 + 32) = 1065353216;
        v67 |= 0x7FFFFFu;
        *(uint32_t *)(v5 + 48) = 1065353216;
        *(uint32_t *)(v5 + 92) = v67;
        *(uint32_t *)(v5 + 56) = 0;
        *(uint8_t *)(v5 + 94) = BYTE2(v67) & 0x7F;
        *(uint8_t *)(v5 + 95) = HIBYTE(v67) | 1;
        *(uint32_t *)(v5 + 60) = 0;
        *(uint32_t *)(v5 + 64) = 0;
        *(uint32_t *)(v5 + 68) = 0;
        *(uint32_t *)(v5 + 72) = 0;
        *(uint8_t *)(v5 + 76) = 1;
        *(uint8_t *)(v5 + 77) = 0;
        *(uint8_t *)(v5 + 96) = 0;
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
      gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a4);
      v6 = a1;
      *(float *)(v5 + 100) = v6;
      return gameswf::ASDisplayObjectContainer::setStandardMember(a2, a3, (gameswf::ASValue::Self *)a4);
    case 'j':
      v9 = a2;
      v10 = *((uint32_t *)a2 + 19);
      if ( v10 == 0 )
      {
        v58 = opNew(0x94u);
        v59 = (uint16_t *)(v58 + 32);
        v10 = v58;
        *(uint32_t *)v58 = 1065353216;
        *(uint32_t *)(v58 + 8) = 1065353216;
        *(uint32_t *)(v58 + 16) = 1065353216;
        *(uint32_t *)(v58 + 24) = 1065353216;
        *(uint32_t *)(v58 + 4) = 0;
        *(uint32_t *)(v58 + 12) = 0;
        *(uint32_t *)(v58 + 20) = 0;
        *(uint32_t *)(v58 + 28) = 0;
        v60 = 24;
        if ( ((v58 + 32) & 1) != 0 )
        {
          *(uint8_t *)(v58 + 32) = 0;
          v59 = (uint16_t *)(v58 + 33);
          LOWORD(v60) = 23;
        }
        if ( ((uint8_t)(uintptr_t)(v59) & 2) != 0 )
        {
          *v59 = 0;
          v60 -= 2;
          ++v59;
        }
        memset(v59, 0, 4 * (v60 >> 2));
        v61 = &v59[2 * (v60 >> 2)];
        if ( (v60 & 2) != 0 )
          *v61++ = 0;
        if ( (v60 & 1) != 0 )
          *(uint8_t *)v61 = 0;
        v62 = *(uint32_t *)(v58 + 92);
        *(uint32_t *)(v10 + 32) = 1065353216;
        v62 |= 0x7FFFFFu;
        *(uint32_t *)(v10 + 48) = 1065353216;
        *(uint32_t *)(v10 + 92) = v62;
        *(uint32_t *)(v10 + 56) = 0;
        *(uint8_t *)(v10 + 94) = BYTE2(v62) & 0x7F;
        *(uint8_t *)(v10 + 95) = HIBYTE(v62) | 1;
        *(uint32_t *)(v10 + 60) = 0;
        *(uint32_t *)(v10 + 64) = 0;
        *(uint32_t *)(v10 + 68) = 0;
        *(uint32_t *)(v10 + 72) = 0;
        *(uint8_t *)(v10 + 76) = 1;
        *(uint8_t *)(v10 + 77) = 0;
        *(uint8_t *)(v10 + 96) = 0;
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
        v9 = a2;
        *((uint32_t *)a2 + 19) = v10;
      }
      *(uint8_t *)(v10 + 98) = 1;
      v11 = sub_10E2480((int *)v9 + 19);
      gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a4);
      v12 = a1;
      *(float *)(v11 + 104) = v12;
      return gameswf::ASDisplayObjectContainer::setStandardMember(a2, a3, (gameswf::ASValue::Self *)a4);
    default:
      return gameswf::ASDisplayObjectContainer::setStandardMember(a2, a3, (gameswf::ASValue::Self *)a4);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::addScript  (binary VA: 0x10e9720)
// Original: gameswf::SpriteInstance::addScript
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::addScript(gameswf::SpriteInstance::Self *self, int a2, gameswf::ASFunction::Self *a3)
{
  int result;
  gameswf::RefCounted::Self *v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int i;
  int v10;
  gameswf::RefCounted::Self *v11;
  int v12;
  gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> *v13;
  typedef gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v16)) > _g4_s2 ? (16u + sizeof(_g4_t_v16)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);

  result = a2;
  v4 = (gameswf::RefCounted::Self *)(a3);
  if ( a2 < 0 )
    return result;
  result = (*(int (**)(uint32_t))(**((uint32_t **)self + 63) + 52))(*((uint32_t *)self + 63));
  if ( result <= a2 )
    return result;
  v14 = *((gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> **)self + 73);
  if ( v14 == nullptr )
  {
    v13 = (gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> *)opNew(4u);
    *(uint32_t *)v13 = 0;
    v14 = v13;
    *((uint32_t *)self + 73) = (uint32_t)(uintptr_t)(v13);
  }
  v16[0] = (int)(uintptr_t)(v4);
  if ( v4 != nullptr )
  {
    gameswf::RefCounted::addRef(v4);
    v14 = *((gameswf::hash<int, gameswf::smart_ptr<gameswf::ASFunction::Self>, gameswf::fixed_size_hash<int>> **)self + 73);
  }
  v5 = *(uint32_t *)v14;
  if ( *(uint32_t *)v14 == 0 )
    goto LABEL_26;
  v15 = *(uint32_t *)(v5 + 4);
  v6 = 65599
     * (BYTE1(a2)
      + 0xFFFF * (BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219))
      + ((BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219)) << 6))
     + (uint8_t)a2;
  v7 = v6 & v15;
  v8 = (int *)(v5 + 16 * (v6 & v15) + 8);
  if ( *v8 == -2 || v7 != (*(uint32_t *)(v5 + 16 * (v6 & v15) + 12) & v15) )
    goto LABEL_26;
  for ( i = *(uint32_t *)(v5 + 16 * (v6 & v15) + 12); v6 != i || v8[2] != a2; i = *(uint32_t *)(v5 + 16 * v7 + 12) )
  {
    v7 = *v8;
    if ( *v8 == -1 )
      goto LABEL_26;
    v8 = (int *)(v5 + 16 * v7 + 8);
  }
  if ( v7 < 0 )
  {
LABEL_26:
    gameswf::hash_int_gameswf_smart_ptr_ga_c7a3f0::add(
      v14,
      (int)(uintptr_t)(&a2),
      (int)(uintptr_t)(v16));
    goto LABEL_27;
  }
  v10 = v5 + 16 * v7 + 8;
  v11 = (gameswf::RefCounted::Self *)v16[0];
  v12 = *(uint32_t *)(v10 + 12);
  if ( v16[0] != v12 )
  {
    if ( v12 != 0 )
      gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v10 + 12));
    *(uint32_t *)(v10 + 12) = v16[0];
    if ( v11 != nullptr )
    {
      gameswf::RefCounted::addRef(v11);
      v11 = (gameswf::RefCounted::Self *)v16[0];
      goto LABEL_21;
    }
LABEL_27:
    v11 = (gameswf::RefCounted::Self *)v16[0];
  }
LABEL_21:
  if ( v11 != nullptr )
    gameswf::RefCounted::dropRef(v11);
  result = *((int16_t *)self + 132);
  if ( result == a2 )
    return (int)(uintptr_t)(gameswf::SpriteInstance::setFrameScript((gameswf::RefCounted::Self **)self, *((int16_t *)self + 132)));
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::is  (binary VA: 0x10e98f0)
// Original: gameswf::SpriteInstance::is
// ----------------------------------------------------------------------------
bool gameswf::SpriteInstance::is(gameswf::SpriteInstance::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 2 && a2 != 4 && a2 != 1 && a2 != 57 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::getCharacterDef  (binary VA: 0x10e9920)
// Original: gameswf::SpriteInstance::getCharacterDef
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::getCharacterDef(gameswf::SpriteInstance::Self *self)
{
  return *((uint32_t *)self + 63);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::getMovieDefinition  (binary VA: 0x10e9930)
// Original: gameswf::SpriteInstance::getMovieDefinition
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::getMovieDefinition(gameswf::SpriteInstance::Self *self)
{
  return *((uint32_t *)self + 63);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::getCurrentFrame  (binary VA: 0x10e9940)
// Original: gameswf::SpriteInstance::getCurrentFrame
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::getCurrentFrame(gameswf::SpriteInstance::Self *self)
{
  return *((int16_t *)self + 132);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::getFrameCount  (binary VA: 0x10e9950)
// Original: gameswf::SpriteInstance::getFrameCount
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::getFrameCount(gameswf::SpriteInstance::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 63) + 52))(*((uint32_t *)self + 63));
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::getLoadingFrame  (binary VA: 0x10e9970)
// Original: gameswf::SpriteInstance::getLoadingFrame
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::getLoadingFrame(gameswf::SpriteInstance::Self *self)
{
  return *(uint32_t *)(*((uint32_t *)self + 63) + 56);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::getCharacter  (binary VA: 0x10e9980)
// Original: gameswf::SpriteInstance::getCharacter
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::getCharacter()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::typeof  (binary VA: 0x10e9990)
// Original: gameswf::SpriteInstance::_typeof
// ----------------------------------------------------------------------------
const char * gameswf::SpriteInstance::typeof()
{
  return "movieclip";
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::setBackgroundColor  (binary VA: 0x10e99b0)
// Original: gameswf::SpriteInstance::setBackgroundColor
// ----------------------------------------------------------------------------
gameswf::Root::Self * gameswf::SpriteInstance::setBackgroundColor(gameswf::Player::Self **self, const gameswf::Color::Self *a2)
{
  gameswf::Root::Self *Root;

  Root = (gameswf::Root::Self *)gameswf::ASObject::getRoot(self);
  return gameswf::Root::setBackgroundColor(Root, a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::getMouseState  (binary VA: 0x10e99f0)
// Original: gameswf::SpriteInstance::getMouseState
// ----------------------------------------------------------------------------
int * gameswf::SpriteInstance::getMouseState(gameswf::Player::Self **self, int *a2, int *a3, int *a4)
{
  gameswf::Root::Self *Root;

  Root = (gameswf::Root::Self *)gameswf::ASObject::getRoot(self);
  return gameswf::Root::getMouseState(Root, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::getPixelScale  (binary VA: 0x10e9a40)
// Original: gameswf::SpriteInstance::getPixelScale
// ----------------------------------------------------------------------------
void gameswf::SpriteInstance::getPixelScale(gameswf::Player::Self **self)
{
  gameswf::Root::Self *Root;

  Root = (gameswf::Root::Self *)gameswf::ASObject::getRoot(self);
  gameswf::Root::getPixelScale(Root);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::getBackgroundAlpha  (binary VA: 0x10e9a70)
// Original: gameswf::SpriteInstance::getBackgroundAlpha
// ----------------------------------------------------------------------------
void gameswf::SpriteInstance::getBackgroundAlpha(gameswf::Player::Self **self)
{
  gameswf::Root::Self *Root;

  Root = (gameswf::Root::Self *)gameswf::ASObject::getRoot(self);
  gameswf::Root::getBackgroundAlpha(Root);
}

// ----------------------------------------------------------------------------
// Function: gameswf::SpriteInstance::getRootMovie  (binary VA: 0x10e9aa0)
// Original: gameswf::SpriteInstance::getRootMovie
// ----------------------------------------------------------------------------
int gameswf::SpriteInstance::getRootMovie(gameswf::SpriteInstance::Self *self)
{
  int result;

  result = *((uint32_t *)self + 65);
  if ( result != 0 && *(uint8_t *)(*((uint32_t *)self + 64) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)self + 64, nullptr);
    *((uint32_t *)self + 65) = 0;
    return 0;
  }
  return result;
}


