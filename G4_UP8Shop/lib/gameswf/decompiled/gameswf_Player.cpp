#include "Core/Utils/DecompTypes.h"
#include "gameswf_Player.h"

// ----------------------------------------------------------------------------
// Function: gameswf::Player::setFlashVars  (binary VA: 0x10b5d50)
// Original: gameswf::Player::setFlashVars
// ----------------------------------------------------------------------------
int gameswf::Player::setFlashVars(gameswf::Player::Self *self, const gameswf::String::Self *a2)
{
  int result;
  int v3;
  gameswf::Self *v4;
  char *v5;
  gameswf::Self *v6;
  int v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  int v12;

  result = (int)(uintptr_t)(self) + 164;
  if ( (gameswf::Player::Self *)((char *)self + 164) != (gameswf::Player::Self *)(a2) )
  {
    if ( *(uint8_t *)a2 == 0xFF )
      v3 = *((uint32_t *)a2 + 1) - 1;
    else
      v3 = *(char *)a2 - 1;
    gameswf::String::resize((gameswf::Player::Self *)((char *)self + 164), v3);
    v4 = (gameswf::Self *)((const gameswf::String::Self *)((char *)a2 + 1));
    if ( *(uint8_t *)a2 == 0xFF )
      v4 = *((gameswf::Self **)a2 + 3);
    LOBYTE(v5) = *((uint8_t *)self + 164);
    if ( (uint8_t)(uintptr_t)v5 == 0xFF )
    {
      v5 = *((char **)self + 42);
      v6 = *((gameswf::Self **)self + 44);
    }
    else
    {
      v5 = (char *)(char)(uintptr_t)v5;
      v6 = (gameswf::Self *)((gameswf::Player::Self *)((char *)self + 165));
    }
    gameswf::Strcpy_s(v6, v5, v4);
    v12 = *((uint32_t *)a2 + 4);
    if ( (uint8_t *)(v12 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( *(uint8_t *)a2 == 0xFF )
      {
        v8 = *((char **)a2 + 3);
        v9 = *((uint32_t *)a2 + 1) - 1;
      }
      else
      {
        v8 = (char *)a2 + 1;
        v9 = *(char *)a2 - 1;
      }
      v7 = 5381;
      if ( v9 > 0 )
      {
        do
        {
          --v9;
          v10 = 33 * v7;
          v11 = (uint8_t)v8[v9] + 32;
          if ( (uint8_t)(v8[v9] - 65) > 0x19u )
            v11 = (uint8_t)v8[v9];
          v7 = v10 ^ v11;
        }
        while ( v9 != 0 );
        v7 = v7 << 9 >> 9;
      }
      *((uint32_t *)a2 + 4) = v7 & 0x7FFFFF | v12 & 0xFF800000;
    }
    else
    {
      v7 = v12 << 9 >> 9;
    }
    result = v7 & 0x7FFFFF;
    *((uint32_t *)self + 45) = result | *((uint32_t *)self + 45) & 0xFF800000;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::verboseAction  (binary VA: 0x10b5ee0)
// Original: gameswf::Player::verboseAction
// ----------------------------------------------------------------------------
uint8_t * gameswf::Player::verboseAction(gameswf::Player::Self *self, bool a2)
{
  return gameswf::setVerboseAction((gameswf::Self *)a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::verboseParse  (binary VA: 0x10b5f10)
// Original: gameswf::Player::verboseParse
// ----------------------------------------------------------------------------
void * gameswf::Player::verboseParse(gameswf::Player::Self *self, bool a2)
{
  return gameswf::setVerboseParse((gameswf::Self *)a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::actionClear  (binary VA: 0x10b5f40)
// Original: gameswf::Player::actionClear
// ----------------------------------------------------------------------------
void gameswf::Player::actionClear()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::getGlobal  (binary VA: 0x10b5f50)
// Original: gameswf::Player::getGlobal
// ----------------------------------------------------------------------------
int gameswf::Player::getGlobal(gameswf::Player::Self *self)
{
  return *((uint32_t *)self + 29);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::getStage  (binary VA: 0x10b5f60)
// Original: gameswf::Player::getStage
// ----------------------------------------------------------------------------
int gameswf::Player::getStage(gameswf::Player::Self *self)
{
  return *((uint32_t *)self + 30);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::getRoot  (binary VA: 0x10b5f70)
// Original: gameswf::Player::getRoot
// ----------------------------------------------------------------------------
int gameswf::Player::getRoot(gameswf::Player::Self *self)
{
  int result;
  gameswf::Self *v2;

  result = *((uint32_t *)self + 34);
  if ( result != 0 )
  {
    v2 = *((gameswf::Self **)self + 33);
    if ( *((uint8_t *)v2 + 2) == 0 )
    {
      if ( (*(uint16_t *)v2)-- == 1 )
        gameswf::free_internal(v2);
      *((uint32_t *)self + 33) = 0;
      *((uint32_t *)self + 34) = 0;
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::notifyKeyEvent  (binary VA: 0x10b6000)
// Original: gameswf::Player::notifyKeyEvent
// ----------------------------------------------------------------------------
void gameswf::Player::notifyKeyEvent()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::setRoot  (binary VA: 0x10b6010)
// Original: gameswf::Player::setRoot
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::Player::setRoot(gameswf::Player::Self *self, gameswf::Root::Self *a2)
{
  gameswf::Self *result;
  gameswf::Self *v3;
  bool v4;
  gameswf::Self *v5;

  *((uint32_t *)self + 34) = (uint32_t)(uintptr_t)(a2);
  if ( a2 != nullptr )
  {
    result = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(a2);
    v3 = *((gameswf::Self **)self + 33);
    if ( result != v3 )
    {
      if ( v3 != nullptr )
      {
        v4 = (*(uint16_t *)v3)-- == 1;
        if ( v4 )
        {
          v5 = result;
          gameswf::free_internal(v3);
          result = v5;
        }
      }
      *((uint32_t *)self + 33) = (uint32_t)(uintptr_t)(result);
      if ( result != nullptr )
        ++*(uint16_t *)result;
    }
  }
  else
  {
    result = *((gameswf::Self **)self + 33);
    if ( result != nullptr )
    {
      v4 = (*(uint16_t *)result)-- == 1;
      if ( v4 )
        result = (gameswf::Self *)gameswf::free_internal(result);
      *((uint32_t *)self + 33) = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::getWorkdir  (binary VA: 0x10b60e0)
// Original: gameswf::Player::getWorkdir
// ----------------------------------------------------------------------------
char * gameswf::Player::getWorkdir(gameswf::Player::Self *self)
{
  if ( *((uint8_t *)self + 140) == 0xFF )
    return *((char **)self + 38);
  else
    return (char *)self + 141;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::setWorkdir  (binary VA: 0x10b6100)
// Original: gameswf::Player::setWorkdir
// ----------------------------------------------------------------------------
void gameswf::Player::setWorkdir(gameswf::Player::Self *self, gameswf::Self *s)
{
  size_t v2;
  char *v3;
  gameswf::Self *v4;

  if ( s != nullptr )
  {
    v2 = strlen((const char *)s);
    gameswf::String::resize((gameswf::Player::Self *)((char *)self + 140), v2);
    LOBYTE(v3) = *((uint8_t *)self + 140);
    if ( (uint8_t)(uintptr_t)v3 == 0xFF )
    {
      v3 = *((char **)self + 36);
      v4 = *((gameswf::Self **)self + 38);
    }
    else
    {
      v3 = (char *)(char)(uintptr_t)v3;
      v4 = (gameswf::Self *)((gameswf::Player::Self *)((char *)self + 141));
    }
    gameswf::Strcpy_s(v4, v3, s);
    *((uint32_t *)self + 39) |= 0x7FFFFFu;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::getChardefLibrary  (binary VA: 0x10b6190)
// Original: gameswf::Player::getChardefLibrary
// ----------------------------------------------------------------------------
char * gameswf::Player::getChardefLibrary(gameswf::Player::Self *self)
{
  return (char *)self + 160;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::clearLibrary  (binary VA: 0x10b61a0)
// Original: gameswf::Player::clearLibrary
// ----------------------------------------------------------------------------
int gameswf::Player::clearLibrary(gameswf::Player::Self *self)
{
  int *v1;
  int result;
  gameswf::Self *v3;
  int v4;
  int v5;
  int j;
  int v7;
  int v8;
  char *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *i;
  char *v16;

  v1 = (int *)((char *)self + 160);
  result = *((uint32_t *)self + 40);
  v3 = (gameswf::Self *)result;
  if ( result != 0 )
  {
    v4 = 0;
    if ( *(int *)(result + 4) >= 0 && *(uint32_t *)(result + 8) == -2 )
    {
      v16 = (char *)&word_28;
      v8 = 1;
      while ( 1 )
      {
        v4 = v8;
        if ( v8 > *(uint32_t *)(result + 4) )
          break;
        v9 = v16;
        ++v8;
        v16 += 32;
        if ( *(uint32_t *)&v9[result] != -2 )
        {
          if ( self != (gameswf::Player::Self *)-160 )
          {
            while ( 1 )
            {
LABEL_19:
              v10 = *(uint32_t *)(result + 4);
              if ( v10 < v4 )
              {
LABEL_25:
                v3 = *((gameswf::Self **)self + 40);
                goto LABEL_4;
              }
              v11 = 32 * v4 + 8;
              if ( *(int *)(*(uint32_t *)(result + v11 + 28) + 4) > 1 )
              {
                puts("memory leaks is found out: on exit MovieDefinitionSub ref_count > 1");
                printf(
                  "this = 0x%p, ref_count = %d\n",
                  *(uint32_t *)(*v1 + v11 + 28),
                  *(uint32_t *)(*(uint32_t *)(*v1 + v11 + 28) + 4));
                result = *v1;
                for ( i = *(int **)(*v1 + v11 + 28); i[1] > 1; i = *(int **)(*v1 + v11 + 28) )
                {
                  gameswf::RefCounted::dropRef((gameswf::RefCounted::Self *)i);
                  result = *v1;
                }
                v10 = *(uint32_t *)(result + 4);
                if ( v4 > v10 )
                  break;
              }
              v12 = v4 + 1;
              if ( v4 + 1 <= v10 && *(uint32_t *)(result + 32 * v12 + 8) == -2 )
              {
                v13 = 32 * v4 + 72;
                while ( ++v12 <= v10 )
                {
                  v14 = *(uint32_t *)(result + v13);
                  v13 += 32;
                  if ( v14 != -2 )
                  {
                    v4 = v12;
                    goto LABEL_24;
                  }
                }
              }
              v4 = v12;
LABEL_24:
              if ( result == 0 )
                goto LABEL_25;
            }
            v3 = *((gameswf::Self **)self + 40);
          }
          goto LABEL_4;
        }
      }
    }
    if ( self != (gameswf::Player::Self *)-160 )
      goto LABEL_19;
LABEL_4:
    if ( v3 != nullptr )
    {
      v5 = *((uint32_t *)v3 + 1);
      if ( v5 >= 0 )
      {
        for ( j = 0; j <= v5; ++j )
        {
          v7 = (int)(uintptr_t)(v3) + 32 * j + 8;
          if ( *(uint32_t *)v7 != -2 )
          {
            sub_59CE50((int)(uintptr_t)(v3) + 32 * j + 16);
            if ( *(uint32_t *)(v7 + 28) != 0 )
              gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v7 + 28));
            *(uint32_t *)v7 = -2;
            *(uint32_t *)(v7 + 4) = 0;
            v3 = *((gameswf::Self **)self + 40);
          }
        }
      }
      result = gameswf::free_internal(v3);
      *((uint32_t *)self + 40) = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::clearGarbage  (binary VA: 0x10b6390)
// Original: gameswf::Player::clearGarbage
// ----------------------------------------------------------------------------
int gameswf::Player::clearGarbage(gameswf::Player::Self *self, uint64_t a2)
{
  gameswf::Player::Self *v2;
  int64_t v3; // rax
  bool v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  gameswf::RefCounted::Self **v9;
  gameswf::RefCounted::Self *v10;
  gameswf::RefCounted::Self *v11;
  int v12;
  int v13;
  int v14;
  gameswf::RefCounted::Self *v15;
  int v16;
  gameswf::Player::Self *v17;
  int v18;
  gameswf::Player::Self *v19;
  gameswf::RefCounted::Self *i;
  int v21;
  int v22;
  uint64_t v23; // rax
  int v24;
  int v25;
  int v26;
  gameswf::Self *v27;
  gameswf::timer::Self *v29;
  gameswf::RefCounted::Self **v30;
  gameswf::Player::Self *v31;
  int v32;
  int v33;

  v2 = self;
  LODWORD(v3) = *((uint32_t *)self + 26);
  if ( (uint32_t)v3 == 1 )
  {
    LODWORD(v3) = *((uint32_t *)self + 27);
    if ( (int)v3 >= 0 )
    {
      if ( (int)v3 >= *((uint32_t *)self + 5) )
        return v3;
LABEL_6:
      v32 = 1024;
      while ( (int)v3 >= 0 )
      {
        v5 = *(int **)(*((uint32_t *)v2 + 4) + 4 * v3);
        if ( v5 != nullptr && v5[5] < *((uint32_t *)v2 + 25) )
        {
          v29 = *(gameswf::timer::Self **)(*((uint32_t *)v2 + 4) + 4 * v3);
          (*(void (**)(void))(*v5 + 72))();
          if ( v5[1] > 1 )
            *((uint8_t *)v2 + 112) = 1;
          v6 = *((uint32_t *)v2 + 4);
          v7 = *((uint32_t *)v2 + 5);
          v8 = v7 - 1;
          v9 = (gameswf::RefCounted::Self **)(v6 + 4 * *((uint32_t *)v2 + 27));
          v10 = *(gameswf::RefCounted::Self **)(v6 + 4 * (v7 - 1));
          v11 = *v9;
          if ( v10 != *v9 )
          {
            if ( v11 != nullptr )
            {
              v30 = v9;
              gameswf::RefCounted::dropRef(v11);
              v9 = v30;
            }
            *v9 = v10;
            if ( v10 != nullptr )
              gameswf::RefCounted::addRef(v10);
            v7 = *((uint32_t *)v2 + 5);
            v8 = v7 - 1;
            v10 = *(gameswf::RefCounted::Self **)(*((uint32_t *)v2 + 4) + 4 * (v7 - 1));
          }
          v12 = v8;
          v13 = 4 * v8;
          v33 = v8;
          v14 = v7;
          v15 = v10;
          v16 = v12;
          v17 = v2;
          v18 = v13;
          v19 = v17;
          for ( i = v15; ; i = *(gameswf::RefCounted::Self **)(*((uint32_t *)v19 + 4) + v18) )
          {
            if ( i != nullptr )
            {
              v31 = v19;
              gameswf::RefCounted::dropRef(i);
              v19 = v31;
            }
            ++v16;
            v18 += 4;
            if ( v16 >= v14 )
              break;
          }
          v2 = v19;
          if ( v33 != 0 )
          {
            v21 = *((uint32_t *)v19 + 6);
            if ( v21 < v33 && *((uint32_t *)v19 + 7) == 0 )
            {
              v26 = v33 + (v33 >> 1);
              *((uint32_t *)v2 + 6) = v26;
              if ( v26 != 0 )
              {
                v27 = *((gameswf::Self **)v2 + 4);
                if ( v27 != nullptr )
                  *((uint32_t *)v2 + 4) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v27, 4 * v26, 4 * v21));
                else
                  *((uint32_t *)v2 + 4) = gameswf::malloc_internal(4 * v26);
              }
              else
              {
                if ( *((uint32_t *)v2 + 4) != 0 )
                  gameswf::free_internal(*((gameswf::Self **)v2 + 4));
                *((uint32_t *)v2 + 4) = 0;
              }
            }
          }
          v22 = *((uint32_t *)v2 + 27);
          *((uint32_t *)v2 + 5) = v33;
          LODWORD(v3) = v22 - 1;
          v4 = v32-- == 1;
          *((uint32_t *)v2 + 27) = v3;
          if ( v4 )
          {
LABEL_27:
            LODWORD(v23) = gameswf::timer::getMilliseconds(v29);
            if ( v23 <= a2 )
            {
              LODWORD(v3) = *((uint32_t *)v2 + 27);
              goto LABEL_6;
            }
            LODWORD(v3) = *((uint32_t *)v2 + 27);
            if ( (int)v3 >= 0 )
              return v3;
            break;
          }
        }
        else
        {
          LODWORD(v3) = v3 - 1;
          v4 = v32-- == 1;
          *((uint32_t *)v2 + 27) = v3;
          if ( v4 )
            goto LABEL_27;
        }
      }
    }
    if ( *((uint8_t *)v2 + 112) != 0 )
    {
      v24 = *((uint32_t *)v2 + 5);
      *((uint32_t *)v2 + 26) = 2;
      LODWORD(v3) = v24 - 1;
      *((uint32_t *)v2 + 27) = v3;
      return v3;
    }
LABEL_40:
    *((uint32_t *)v2 + 26) = 0;
    return v3;
  }
  if ( (uint32_t)v3 != 2 )
    return v3;
  HIDWORD(v3) = *((uint32_t *)self + 27);
  if ( v3 < 0 || SHIDWORD(v3) >= *((uint32_t *)self + 5) )
    goto LABEL_40;
LABEL_33:
  v25 = 1024;
  while ( v3 >= 0 )
  {
    LODWORD(v3) = *(uint32_t *)(*((uint32_t *)self + 4) + 4 * HIDWORD(v3));
    if ( (uint32_t)v3 != 0 )
    {
      v29 = *(gameswf::timer::Self **)(*((uint32_t *)self + 4) + 4 * HIDWORD(v3));
      LODWORD(v3) = (*(int (**)(void))(*(uint32_t *)v3 + 72))();
      HIDWORD(v3) = *((uint32_t *)self + 27);
    }
    --HIDWORD(v3);
    --v25;
    *((uint32_t *)self + 27) = HIDWORD(v3);
    if ( v25 == 0 )
    {
      LODWORD(v3) = gameswf::timer::getMilliseconds(v29);
      if ( a2 < v3 )
        return v3;
      HIDWORD(v3) = *((uint32_t *)self + 27);
      goto LABEL_33;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::clearGarbageWait  (binary VA: 0x10b6650)
// Original: gameswf::Player::clearGarbageWait
// ----------------------------------------------------------------------------
int gameswf::Player::clearGarbageWait(gameswf::Player::Self *self)
{
  return gameswf::Player::clearGarbage(self, 0xFFFFFFFFFFFFFFFFLL);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::setAsGarbage  (binary VA: 0x10b6690)
// Original: gameswf::Player::setAsGarbage
// ----------------------------------------------------------------------------
int gameswf::Player::setAsGarbage(gameswf::Player::Self *self)
{
  int v1;
  int result;

  if ( *((uint32_t *)self + 26) != 0 )
    gameswf::Player::clearGarbageWait(self);
  v1 = *((uint32_t *)self + 5);
  ++*((uint32_t *)self + 25);
  result = v1 - 1;
  *((uint32_t *)self + 26) = 1;
  *((uint32_t *)self + 27) = result;
  *((uint8_t *)self + 112) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::clearHeap  (binary VA: 0x10b66e0)
// Original: gameswf::Player::clearHeap
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::Player::clearHeap(gameswf::Player::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  gameswf::RefCounted::Self *result;
  gameswf::Player::Self *v6;
  int v7;
  uint32_t *v8;
  int i;
  uint32_t *v10;
  gameswf::Player::Self *v11;

  gameswf::Player::setAsGarbage(self);
  v1 = *((uint32_t *)self + 5) - 1;
  if ( v1 >= 0 )
  {
    v2 = 4 * v1;
    do
    {
      --v1;
      v3 = *(uint32_t *)(*((uint32_t *)self + 4) + v2);
      v2 -= 4;
      *(uint32_t *)(v3 + 20) = -1;
    }
    while ( v1 != -1 );
  }
  gameswf::Player::clearGarbageWait(self);
  v4 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 26) = 2;
  *((uint32_t *)self + 27) = v4 - 1;
  result = (gameswf::RefCounted::Self *)gameswf::Player::clearGarbageWait(self);
  v6 = self;
  v7 = *((uint32_t *)self + 5);
  v8 = (uint32_t *)((char *)self + 16);
  if ( v7 > 0 )
  {
    for ( i = 0; i != v7; ++i )
    {
      result = *(gameswf::RefCounted::Self **)(*v8 + 4 * i);
      if ( result != nullptr )
      {
        v11 = v6;
        result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(result);
        v6 = v11;
      }
    }
  }
  else if ( v7 < 0 )
  {
    result = (gameswf::RefCounted::Self *)(4 * v7);
    do
    {
      v10 = (uint32_t *)((char *)result + *v8);
      if ( v10 != nullptr )
        *v10 = 0;
      result = (gameswf::RefCounted::Self *)((char *)result + 4);
      ++v7;
    }
    while ( v7 != 0 );
    *((uint32_t *)self + 5) = 0;
    return result;
  }
  *((uint32_t *)v6 + 5) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::createSpriteInstance  (binary VA: 0x10b67e0)
// Original: gameswf::Player::createSpriteInstance
// ----------------------------------------------------------------------------
gameswf::SpriteInstance::Self * gameswf::Player::createSpriteInstance(gameswf::Player::Self *self, gameswf::MovieDefinitionSub::Self *a2, gameswf::Character::Self *a3, gameswf::Character::Self *a4, char *a5)
{
  gameswf::SpriteInstance::Self *v5;

  v5 = (gameswf::SpriteInstance::Self *)opNew(0x130u);
  gameswf::SpriteInstance::Construct(v5, self, a2, a3, a4, a5);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::createGenericCharacter  (binary VA: 0x10b6850)
// Original: gameswf::Player::createGenericCharacter
// ----------------------------------------------------------------------------
int gameswf::Player::createGenericCharacter(gameswf::Player::Self *self, gameswf::CharacterDef::Self *a2, gameswf::Character::Self *a3, int a4)
{
  int v4;
  int v5;

  v4 = opNew(0xE8u);
  gameswf::Character::Construct((gameswf::Character::Self *)v4, self, a3, a4, 3);
  *(uint32_t *)(v4 + 212) = (uint32_t)(uintptr_t)(a2);
  *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_208E888);
  v5 = 0;
  if ( a2 != nullptr )
  {
    gameswf::RefCounted::addRef(a2);
    v5 = *(uint32_t *)(v4 + 212);
  }
  G4_VCALL<void>(v5, 20, v4 + 216);
  *(uint8_t *)(v4 + 150) = 0;
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::createEditTextCharacter  (binary VA: 0x10b6900)
// Original: gameswf::Player::createEditTextCharacter
// ----------------------------------------------------------------------------
gameswf::EditTextCharacter::Self * gameswf::Player::createEditTextCharacter(gameswf::Player::Self *self, gameswf::EditTextCharacterDef::Self *a2, gameswf::Character::Self *a3, char *a4)
{
  gameswf::EditTextCharacter::Self *v4;

  v4 = (gameswf::EditTextCharacter::Self *)opNew(0x27Cu);
  gameswf::EditTextCharacter::Construct(v4, self, a3, a2, a4);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::registerObject  (binary VA: 0x10b6970)
// Original: gameswf::Player::registerObject
// ----------------------------------------------------------------------------
int gameswf::Player::registerObject(gameswf::Player::Self *self, gameswf::ASObject::Self *a2)
{
  int v2;
  int v3;
  int v4;
  char *v5;
  char *v6;
  int result;
  gameswf::Self *v8;
  int v9;
  bool v10;

  *((uint32_t *)a2 + 5) = *((uint32_t *)self + 25);
  v2 = *((uint32_t *)self + 5);
  v3 = *((uint32_t *)self + 6);
  v4 = v2 + 1;
  if ( v2 + 1 <= v3 || *((uint32_t *)self + 7) != 0 )
  {
    v5 = *((char **)self + 4);
  }
  else
  {
    v9 = v4 + (v4 >> 1);
    *((uint32_t *)self + 6) = v9;
    if ( v9 != 0 )
    {
      if ( *((uint32_t *)self + 4) != 0 )
        v5 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 4), 4 * v9, 4 * v3);
      else
        v5 = (char *)gameswf::malloc_internal(4 * v9);
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v5);
      v2 = *((uint32_t *)self + 5);
    }
    else
    {
      if ( *((uint32_t *)self + 4) != 0 )
      {
        gameswf::free_internal(*((gameswf::Self **)self + 4));
        v2 = *((uint32_t *)self + 5);
      }
      *((uint32_t *)self + 4) = 0;
      v5 = nullptr;
    }
  }
  v6 = &v5[4 * v2];
  if ( v6 != nullptr )
  {
    *(uint32_t *)v6 = (uint32_t)(uintptr_t)(a2);
    gameswf::RefCounted::addRef(a2);
  }
  result = *((uint32_t *)self + 34);
  *((uint32_t *)self + 5) = v4;
  if ( result != 0 )
  {
    v8 = *((gameswf::Self **)self + 33);
    if ( *((uint8_t *)v8 + 2) != 0 )
    {
      ++*(uint32_t *)(result + 252);
    }
    else
    {
      result = *(uint16_t *)v8 - 1;
      v10 = *(uint16_t *)v8 == 1;
      *(uint16_t *)v8 = result;
      if ( v10 )
        result = gameswf::free_internal(v8);
      *((uint32_t *)self + 33) = 0;
      *((uint32_t *)self + 34) = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::contains  (binary VA: 0x10b6ac0)
// Original: gameswf::Player::contains
// ----------------------------------------------------------------------------
int gameswf::Player::contains(gameswf::Player::Self *self, const gameswf::ASObject::Self *a2)
{
  int result;
  int v3;
  const gameswf::ASObject::Self **v4;
  int v5;

  result = 0;
  v3 = *((uint32_t *)self + 5);
  if ( v3 > 0 )
  {
    v4 = *((const gameswf::ASObject::Self ***)self + 4);
    result = 1;
    if ( a2 != *v4 )
    {
      v5 = 0;
      do
      {
        if ( ++v5 == v3 )
          return 0;
      }
      while ( a2 != v4[v5] );
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::notifyFSCommand  (binary VA: 0x10b6b00)
// Original: gameswf::Player::notifyFSCommand
// ----------------------------------------------------------------------------
int gameswf::Player::notifyFSCommand(gameswf::RenderFX::Self **self, char *a2, char *a3)
{
  return gameswf::RenderFX::notifyFSCommand(*(self + 52), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::Destroy  (binary VA: 0x10b6cb0)
// Original: gameswf::Player::~Player
// ----------------------------------------------------------------------------
void gameswf::Player::Destroy(gameswf::Player::Self *self)
{
  gameswf::Player::Self *v1;
  gameswf::Self *v2;
  bool v3;
  int v4;
  int v5;
  int v6;
  int v7;
  void *v8;
  int v9;
  pthread_mutex_t **GlobalMutex;
  pthread_mutex_t **v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  gameswf::Self *v16;
  gameswf::Self *v17;
  int v18;
  int v19;
  int v20;
  gameswf::Self *v21;
  gameswf::Self *v22;
  int v23;
  int i;
  int v25;
  gameswf::Self *v26;
  int v27;
  uint32_t *v28;
  int v29;
  int v30;
  uint32_t *v31;
  int v32;
  gameswf::Self *v33;
  int v34;
  uint32_t *v35;
  int v36;
  uint32_t *v37;
  gameswf::Self *dest;
  gameswf::Self *desta;
  gameswf::RefCounted::Self *v40;
  gameswf::RefCounted::Self *v41;
  gameswf::Player::Self **v42;

  v1 = self;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208ECB8);
  v2 = *((gameswf::Self **)self + 33);
  *((uint32_t *)self + 34) = 0;
  if ( v2 != nullptr )
  {
    v3 = (*(uint16_t *)v2)-- == 1;
    if ( v3 )
      gameswf::free_internal(v2);
    *((uint32_t *)self + 33) = 0;
  }
  if ( *((uint32_t *)self + 30) != 0 )
  {
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 30));
    *((uint32_t *)self + 30) = 0;
  }
  if ( *((uint32_t *)self + 29) != 0 )
  {
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 29));
    *((uint32_t *)self + 29) = 0;
  }
  v4 = *((uint32_t *)self + 3);
  v40 = (gameswf::RefCounted::Self *)v4;
  v5 = *(uint32_t *)(v4 + 28);
  if ( v5 > 0 )
  {
    v42 = *(gameswf::Player::Self ***)(v4 + 24);
    if ( self == *v42 )
    {
      v8 = *(void **)(v4 + 24);
      v9 = 0;
      v6 = 0;
LABEL_65:
      if ( v5 == 1 )
      {
        *((uint32_t *)v40 + 7) = 0;
      }
      else
      {
        memmove(v8, &v42[v9 + 1], 4 * (v5 - 1 - v6));
        --*((uint32_t *)v40 + 7);
      }
    }
    else
    {
      v6 = 0;
      v7 = *(uint32_t *)(v4 + 24) + 4;
      while ( ++v6 != v5 )
      {
        v8 = (void *)v7;
        v7 += 4;
        v9 = v6;
        if ( self == *(gameswf::Player::Self **)(v7 - 4) )
          goto LABEL_65;
      }
    }
  }
  gameswf::Player::clearHeap(self);
  GlobalMutex = (pthread_mutex_t **)gameswf::getGlobalMutex(dest);
  glf::Mutex::Lock(GlobalMutex);
  gameswf::Player::clearLibrary(self);
  v11 = (pthread_mutex_t **)gameswf::getGlobalMutex(desta);
  glf::Mutex::Unlock(v11);
  gameswf::Player::actionClear();
  gameswf::AS3Engine::Destroy((gameswf::Player::Self *)((char *)self + 236));
  v12 = *((uint32_t *)self + 55);
  if ( v12 < 0 )
  {
    v13 = 4 * v12;
    do
    {
      v14 = (uint32_t *)(*((uint32_t *)self + 54) + v13);
      if ( v14 != nullptr )
        *v14 = 0;
      v13 += 4;
      ++v12;
    }
    while ( v12 != 0 );
  }
  v15 = *((uint32_t *)self + 57);
  *((uint32_t *)self + 55) = 0;
  if ( v15 == 0 )
  {
    v16 = *((gameswf::Self **)self + 54);
    *((uint32_t *)self + 56) = 0;
    if ( v16 != nullptr )
      gameswf::free_internal(v16);
    *((uint32_t *)self + 54) = 0;
  }
  gameswf::ASValue::dropRefs((gameswf::Player::Self *)((char *)self + 196));
  gameswf::ASValue::dropRefs((gameswf::Player::Self *)((char *)self + 184));
  sub_59CE50((int)(uintptr_t)(self) + 164);
  v17 = *((gameswf::Self **)self + 40);
  if ( v17 != nullptr )
  {
    if ( *((int *)v17 + 1) >= 0 )
    {
      v18 = 0;
      v19 = *((uint32_t *)v17 + 1);
      do
      {
        v20 = (int)(uintptr_t)(v17) + 32 * v18 + 8;
        if ( *(uint32_t *)v20 != -2 )
        {
          sub_59CE50((int)(uintptr_t)(v17) + 32 * v18 + 16);
          if ( *(uint32_t *)(v20 + 28) != 0 )
            gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v20 + 28));
          *(uint32_t *)v20 = -2;
          *(uint32_t *)(v20 + 4) = 0;
          v17 = *((gameswf::Self **)self + 40);
        }
        ++v18;
      }
      while ( v19 >= v18 );
      v1 = self;
    }
    gameswf::free_internal(v17);
    *((uint32_t *)v1 + 40) = 0;
  }
  sub_59CE50((int)(uintptr_t)(v1) + 140);
  v21 = *((gameswf::Self **)v1 + 33);
  if ( v21 != nullptr )
  {
    v3 = (*(uint16_t *)v21)-- == 1;
    if ( v3 )
      gameswf::free_internal(v21);
  }
  if ( *((uint32_t *)v1 + 30) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v1 + 30));
  if ( *((uint32_t *)v1 + 29) != 0 )
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v1 + 29));
  gameswf::array_gameswf_array_char_6ef230::resize((gameswf::Player::Self *)((char *)v1 + 76), 0);
  gameswf::array_gameswf_array_char_6ef230::resize((gameswf::Player::Self *)((char *)v1 + 76), 0);
  if ( *((uint32_t *)v1 + 22) == 0 )
  {
    v22 = *((gameswf::Self **)v1 + 19);
    *((uint32_t *)v1 + 21) = 0;
    if ( v22 != nullptr )
      gameswf::free_internal(v22);
    *((uint32_t *)v1 + 19) = 0;
  }
  gameswf::PermanentStringCache::Destroy((gameswf::Player::Self *)((char *)v1 + 48));
  v23 = *((uint32_t *)v1 + 9);
  if ( v23 <= 0 )
  {
    if ( v23 < 0 )
    {
      v34 = 4 * v23;
      do
      {
        v35 = (uint32_t *)(*((uint32_t *)v1 + 8) + v34);
        if ( v35 != nullptr )
          *v35 = 0;
        v34 += 4;
        ++v23;
      }
      while ( v23 != 0 );
    }
  }
  else
  {
    for ( i = 0; i != v23; ++i )
    {
      if ( *(uint32_t *)(*((uint32_t *)v1 + 8) + 4 * i) != 0 )
        gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(*((uint32_t *)v1 + 8) + 4 * i));
    }
  }
  v25 = *((uint32_t *)v1 + 11);
  *((uint32_t *)v1 + 9) = 0;
  if ( v25 == 0 )
  {
    v26 = *((gameswf::Self **)v1 + 8);
    *((uint32_t *)v1 + 10) = 0;
    if ( v26 != nullptr )
      gameswf::free_internal(v26);
    *((uint32_t *)v1 + 8) = 0;
  }
  v27 = *((uint32_t *)v1 + 5);
  v28 = (uint32_t *)((char *)v1 + 16);
  if ( v27 <= 0 )
  {
    if ( v27 < 0 )
    {
      v36 = 4 * v27;
      do
      {
        v37 = (uint32_t *)(*v28 + v36);
        if ( v37 != nullptr )
          *v37 = 0;
        v36 += 4;
        ++v27;
      }
      while ( v27 != 0 );
    }
  }
  else
  {
    v41 = (gameswf::RefCounted::Self *)(v1);
    v29 = 0;
    v30 = *((uint32_t *)v1 + 5);
    v31 = v28;
    do
    {
      if ( *(uint32_t *)(*v31 + 4 * v29) != 0 )
        gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(*v31 + 4 * v29));
      ++v29;
    }
    while ( v29 != v30 );
    v1 = (gameswf::Player::Self *)(v41);
  }
  v32 = *((uint32_t *)v1 + 7);
  *((uint32_t *)v1 + 5) = 0;
  if ( v32 == 0 )
  {
    v33 = *((gameswf::Self **)v1 + 4);
    *((uint32_t *)v1 + 6) = 0;
    if ( v33 != nullptr )
      gameswf::free_internal(v33);
    *((uint32_t *)v1 + 4) = 0;
  }
  gameswf::RefCounted::Destroy(v1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::Destroy_ea10b7120  (binary VA: 0x10b7120)
// Original: gameswf::Player::~Player
// ----------------------------------------------------------------------------
void gameswf::Player::Destroy_ea10b7120(gameswf::Player::Self *self)
{
  gameswf::Player::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::unregisterObject  (binary VA: 0x10b7160)
// Original: gameswf::Player::unregisterObject
// ----------------------------------------------------------------------------
void gameswf::Player::unregisterObject(gameswf::Player::Self *self, gameswf::ASObject::Self *a2)
{
  int v2;
  int i;
  int v4;
  gameswf::RefCounted::Self **dest;
  gameswf::RefCounted::Self *v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v10 = *((uint32_t *)self + 5);
  v2 = v10 - 1;
  v9 = v10 - 1;
  if ( v10 - 1 >= 0 )
  {
    i = 4 * v2;
    v8 = v10 - 1;
    v4 = *((uint32_t *)self + 4);
    dest = (gameswf::RefCounted::Self **)(v4 + 4 * v2);
    v6 = *dest;
    if ( a2 == (gameswf::ASObject::Self *)(uintptr_t)(*dest) )
    {
      v7 = v10 - 1;
LABEL_9:
      if ( v10 == 1 )
      {
        gameswf::array_gameswf_smart_ptr_gamesw_b135e5::resize((gameswf::Player::Self *)((char *)self + 16), 0);
      }
      else
      {
        if ( v6 != nullptr )
        {
          gameswf::RefCounted::dropRef(v6);
          v4 = *((uint32_t *)self + 4);
          v9 = *((uint32_t *)self + 5) - 1;
          dest = (gameswf::RefCounted::Self **)(v4 + i);
        }
        memmove(dest, (const void *)(v4 + 4 * v8 + 4), 4 * (v9 - v7));
        --*((uint32_t *)self + 5);
      }
    }
    else
    {
      v7 = v10 - 1;
      for ( i = 4 * v10 - 8; --v7 != -1; i -= 4 )
      {
        dest = (gameswf::RefCounted::Self **)(v4 + i);
        v8 = v7;
        v6 = *(gameswf::RefCounted::Self **)(v4 + i);
        if ( a2 == (gameswf::ASObject::Self *)(uintptr_t)(v6) )
          goto LABEL_9;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::createMovie  (binary VA: 0x10baf10)
// Original: gameswf::Player::createMovie
// ----------------------------------------------------------------------------
pthread_mutex_t ** gameswf::Player::createMovie(gameswf::Player::Self *self, gameswf::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  gameswf::RefCounted::Self *v8;
  gameswf::RefCounted::Self *v9;
  char v10;
  gameswf::File::Self *v12;
  pthread_mutex_t **v13;
  char *v14;
  char *v15;
  char *v16;
  int v17;
  char *v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  typedef const char *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef char *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef char *_g4_t_ChardefLibrary;
  typedef gameswf::String::Self *_g4_t_v35;
  typedef char *_g4_t_v36;
  typedef gameswf::RefCounted::Self *_g4_t_v37[4];
  typedef uint32_t _g4_t_v38[4];
  typedef unsigned int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint32_t _g4_t_v41[5];
  typedef uint32_t _g4_t_v42[5];
  typedef gameswf::RefCounted::Self *_g4_t_v43;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v23)) > _g4_s0 ? (4u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v24)) > _g4_s1 ? (8u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v25)) > _g4_s2 ? (12u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v26)) > _g4_s3 ? (16u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v27)) > _g4_s4 ? (20u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v28)) > _g4_s5 ? (24u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v29)) > _g4_s6 ? (28u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v30)) > _g4_s7 ? (32u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v31)) > _g4_s8 ? (36u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v32)) > _g4_s9 ? (40u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v33)) > _g4_s10 ? (44u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_ChardefLibrary)) > _g4_s11 ? (48u + sizeof(_g4_t_ChardefLibrary)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v35)) > _g4_s12 ? (52u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v36)) > _g4_s13 ? (56u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v37)) > _g4_s14 ? (64u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v38)) > _g4_s15 ? (80u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v39)) > _g4_s16 ? (96u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v40)) > _g4_s17 ? (100u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v41)) > _g4_s18 ? (104u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v42)) > _g4_s19 ? (124u + sizeof(_g4_t_v42)) : _g4_s19,
    _g4_s21 = (144u + sizeof(_g4_t_v43)) > _g4_s20 ? (144u + sizeof(_g4_t_v43)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_ChardefLibrary &ChardefLibrary = *reinterpret_cast<_g4_t_ChardefLibrary *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 64u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 80u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 96u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 100u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 104u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 124u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 144u);

  if ( gameswf::s_use_cached_movie_def != 0 )
  {
    sub_776320((gameswf::String::Self *)v38, a2);
    ChardefLibrary = gameswf::Player::getChardefLibrary(self);
    v2 = *(uint32_t *)ChardefLibrary;
    if ( *(uint32_t *)ChardefLibrary == 0 )
      goto LABEL_6;
    v33 = v39;
    v3 = (int)(v39 << 9) >> 9;
    if ( (uint8_t *)(v39 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( LOBYTE(v38[0]) == 0xFF )
      {
        v18 = (char *)v38[3];
        v19 = v38[1] - 1;
      }
      else
      {
        v18 = (char *)v38 + 1;
        v19 = SLOBYTE(v38[0]) - 1;
      }
      v3 = 5381;
      v20 = 5381;
      if ( v19 > 0 )
      {
        do
        {
          --v19;
          v21 = 33 * v20;
          v36 = (char *)(uint8_t)v18[v19];
          v22 = (unsigned int)(uintptr_t)(v36 + 32);
          if ( (uint8_t)(v18[v19] - 65) > 0x19u )
            v22 = (uint8_t)v18[v19];
          v20 = v21 ^ v22;
        }
        while ( v19 != 0 );
        v20 = v20 << 9 >> 9;
        v3 = v20;
      }
      v39 = v20 & 0x7FFFFF | v39 & 0xFF800000;
      v2 = *(uint32_t *)ChardefLibrary;
    }
    v35 = *(gameswf::String::Self **)(v2 + 4);
    v4 = v3 & (unsigned int)(uintptr_t)(v35);
    v5 = 32 * (v3 & (unsigned int)(uintptr_t)(v35));
    v6 = (uint32_t *)(v2 + v5 + 8);
    if ( *v6 == -2 )
      goto LABEL_6;
    v7 = *(uint32_t *)(v2 + v5 + 12);
    if ( v4 != (v7 & (unsigned int)(uintptr_t)(v35)) )
      goto LABEL_6;
    v36 = (char *)v38 + 1;
    v15 = ChardefLibrary;
    while ( 1 )
    {
      if ( v7 == v3 )
      {
        if ( v38 == v6 + 2 )
          break;
        v16 = (char *)v38 + 1;
        if ( LOBYTE(v38[0]) == 0xFF )
          v16 = (char *)v38[3];
        v33 = (unsigned int)(uintptr_t)(v16);
        v35 = *((uint8_t *)v6 + 8) == 0xFF ? (gameswf::String::Self *)v6[5] : (gameswf::String::Self *)((char *)v6 + 9);
        v31 = v15;
        v32 = v3;
        v17 = gameswf::String::stricmp(v35, v16);
        v15 = v31;
        v3 = v32;
        if ( v17 == 0 )
          break;
      }
      v4 = *v6;
      if ( *v6 == -1 )
        goto LABEL_6;
      v6 = (uint32_t *)(*(uint32_t *)v15 + 32 * v4 + 8);
      v7 = v6[1];
    }
    if ( v4 >= 0 )
    {
      v8 = *(gameswf::RefCounted::Self **)(*(uint32_t *)ChardefLibrary + 32 * v4 + 36);
      if ( v8 != nullptr )
        gameswf::RefCounted::addRef(v8);
    }
    else
    {
LABEL_6:
      v8 = nullptr;
    }
    sub_59CE50((int)(uintptr_t)(v38));
    if ( v8 != nullptr )
    {
      v9 = nullptr;
      v10 = G4_VCALL<int>(v8, 8, 14, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, ChardefLibrary, v35, v36, v38, v37[0], v37[1], v37[2], v37[3], v38[0], v38[1], v38[2], v38[3], v39, v40, v41[0], v41[1], v41[2], v41[3], v41[4], v42[0], v42[1], v42[2], v42[3], v42[4]);
      v43 = v8;
      if ( v10 != 0 )
        v9 = v8;
      gameswf::RefCounted::dropRef(v43);
      return (pthread_mutex_t **)v9;
    }
  }
  if ( gameswf::getHostInterface() != 0 )
  {
    v12 = (gameswf::File::Self *)opNew(0x28u);
    gameswf::File::Construct(v12, (const char *)a2, "rb");
    if ( v12 != nullptr )
    {
      if ( *((uint32_t *)v12 + 9) != 0 )
      {
        v13 = nullptr;
        gameswf::logError((gameswf::Self *)"error: file opener can't open '%s'\n", (const char *)a2);
        gameswf::File::Destroy(v12);
        gameswf::free_internal(v12);
      }
      else
      {
        gameswf::ensureLoadersRegistered();
        sub_776320((gameswf::String::Self *)v41, a2);
        v13 = (pthread_mutex_t **)opNew(0x128u);
        gameswf::MovieDefImpl::Construct(v13, self, nullptr, nullptr, (char *)v41);
        sub_59CE50((int)(uintptr_t)(v41));
        gameswf::MovieDefImpl::read((gameswf::MovieDefImpl::Self *)v13, v12);
        if ( gameswf::s_use_cached_movie_def != 0 )
        {
          v37[0] = (gameswf::RefCounted::Self *)v13;
          if ( v13 != nullptr )
            gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v13);
          sub_776320((gameswf::String::Self *)v42, a2);
          v14 = gameswf::Player::getChardefLibrary(self);
          gameswf::hash_gameswf_StringI_gameswf_999f64::add(
            (gameswf::hash<gameswf::StringI::Self, gameswf::smart_ptr<gameswf::CharacterDef::Self>, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v14,
            (const gameswf::StringI::Self *)v42,
            (const gameswf::smart_ptr<gameswf::CharacterDef::Self> *)v37);
          sub_59CE50((int)(uintptr_t)(v42));
          if ( v37[0] != nullptr )
          {
            gameswf::RefCounted::dropRef(v37[0]);
            return v13;
          }
        }
      }
    }
    else
    {
      v13 = nullptr;
      gameswf::logError((gameswf::Self *)"failed to open '%s'; can't create movie.\n", (const char *)a2);
    }
  }
  else
  {
    v13 = nullptr;
    gameswf::logError((gameswf::Self *)"error: no host interface; can't create movie,\n", v23);
  }
  return v13;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::loadFile  (binary VA: 0x10bb2e0)
// Original: gameswf::Player::loadFile
// ----------------------------------------------------------------------------
gameswf::Player::Self * gameswf::Player::loadFile(gameswf::Player::Self *self, gameswf::Player::Self *a2, gameswf::Self *a3)
{
  pthread_mutex_t **Movie;
  gameswf::RefCounted::Self *v4;
  gameswf::RefCounted::Self *v5;
  gameswf::Root::Self *v6;
  gameswf::RefCounted::Self *Object;
  gameswf::RefCounted::Self *v8;
  gameswf::Character::Self *RootMovie;
  gameswf::Character::Self *v10;
  char v11;
  gameswf::ASStage::Self *v12;
  char v13;
  int v14;
  typedef gameswf::Character::Self *_g4_t_v16;
  typedef gameswf::Character::Self *_g4_t_v17;
  typedef gameswf::RefCounted::Self *_g4_t_v18;
  typedef gameswf::ASStage::Self *_g4_t_v19;
  typedef uint8_t _g4_t_v20[20];
  typedef uint8_t _g4_t_v21[32];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v19)) > _g4_s3 ? (12u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v20)) > _g4_s4 ? (24u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v21)) > _g4_s5 ? (44u + sizeof(_g4_t_v21)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);

  Movie = gameswf::Player::createMovie(a2, a3);
  v4 = (gameswf::RefCounted::Self *)Movie;
  if ( Movie != nullptr )
  {
    gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)Movie);
    v5 = (gameswf::RefCounted::Self *)G4_VCALL<int>(v4, 60);
    v6 = (gameswf::Root::Self *)(v5);
    if ( v5 != nullptr )
    {
      gameswf::RefCounted::addRef(v5);
      gameswf::Root::getMovieVersion(v6);
      if ( *((uint8_t *)a2 + 232) != 0 )
      {
        sub_776320((gameswf::String::Self *)v21, (gameswf::Self *)"Stage");
        sub_776320((gameswf::String::Self *)v20, (gameswf::Self *)"flash.display");
        Object = (gameswf::RefCounted::Self *)gameswf::ASClassManager::createObject(
                                          (gameswf::Player::Self *)((char *)a2 + 236),
                                          (const gameswf::String::Self *)v20,
                                          (const gameswf::String::Self *)v21);
        v8 = *((gameswf::RefCounted::Self **)a2 + 30);
        if ( Object != v8 )
        {
          if ( v8 != nullptr )
          {
            v18 = Object;
            gameswf::RefCounted::dropRef(v8);
            Object = v18;
          }
          *((uint32_t *)a2 + 30) = (uint32_t)(uintptr_t)(Object);
          if ( Object != nullptr )
            gameswf::RefCounted::addRef(Object);
        }
        sub_59CE50((int)(uintptr_t)(v20));
        sub_59CE50((int)(uintptr_t)(v21));
        RootMovie = (gameswf::Character::Self *)gameswf::Root::getRootMovie(v6);
        v10 = RootMovie;
        if ( RootMovie != nullptr )
        {
          v16 = RootMovie;
          v11 = G4_VCALL<int>(RootMovie, 8, 2);
          v10 = v16;
          if ( v11 == 0 )
            v10 = nullptr;
        }
        v12 = *((gameswf::ASStage::Self **)a2 + 30);
        if ( v12 != nullptr )
        {
          v19 = *((gameswf::ASStage::Self **)a2 + 30);
          v17 = v10;
          v13 = (*(int (**)(gameswf::ASStage::Self *, int))(*(uint32_t *)v12 + 8))(v19, 25);
          v12 = v19;
          v10 = v17;
          if ( v13 == 0 )
            v12 = nullptr;
        }
        gameswf::ASStage::setRoot(v12, v10);
      }
      else
      {
        v14 = gameswf::Root::getRootMovie(v6);
        G4_VCALL<void>(v14, 208, 0, 0);
      }
      *(uint32_t *)self = (uint32_t)(uintptr_t)(v6);
      gameswf::RefCounted::addRef(v6);
      gameswf::RefCounted::dropRef(v6);
    }
    else
    {
      fwrite("error: can't create movie instance\n", 1u, 0x23u, stderr);
      *(uint32_t *)self = 0;
    }
    gameswf::RefCounted::dropRef(v4);
  }
  else
  {
    fprintf(stderr, "error: can't create a movie from '%s'\n", a3);
    *(uint32_t *)self = 0;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::actionInit  (binary VA: 0x10bb740)
// Original: gameswf::Player::actionInit
// ----------------------------------------------------------------------------
int gameswf::Player::actionInit(gameswf::Player::Self *self)
{
  int v1;
  int v2;
  int v3;
  int *v4;
  gameswf::hash<gameswf::StringIPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringIPointer>> **v5;
  int v6;
  gameswf::RefCounted::Self *v7;
  gameswf::RefCounted::Self *v8;
  gameswf::RefCounted::Self *v9;
  gameswf::RefCounted::Self *v10;
  gameswf::RefCounted::Self *v11;
  gameswf::RefCounted::Self *v12;
  gameswf::RefCounted::Self *v13;
  int index;
  int v15;
  int v17;
  int v18;
  int v19;
  const char *v20;
  int v21;
  int v22;
  gameswf::Self *v23;
  typedef gameswf::timer::Self *_g4_t_v24;
  typedef gameswf::Player::Self *_g4_t_v25;
  typedef gameswf::Player::Self *_g4_t_v26;
  typedef gameswf::Player::Self *_g4_t_v27;
  typedef gameswf::Player::Self *_g4_t_v28;
  typedef gameswf::Player::Self *_g4_t_v29;
  typedef gameswf::Player::Self *_g4_t_v30;
  typedef gameswf::Player::Self *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int *_g4_t_v33;
  typedef char *_g4_t_v34;
  typedef char *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint8_t _g4_t_v37[12];
  typedef uint8_t _g4_t_v38[12];
  typedef uint8_t _g4_t_v39[12];
  typedef uint32_t _g4_t_v40[3];
  typedef uint8_t _g4_t_v41[12];
  typedef uint32_t _g4_t_v42[3];
  typedef uint8_t _g4_t_v43[12];
  typedef uint8_t _g4_t_v44[12];
  typedef uint8_t _g4_t_v45[12];
  typedef uint8_t _g4_t_v46[12];
  typedef uint8_t _g4_t_v47[12];
  typedef uint8_t _g4_t_v48[12];
  typedef uint8_t _g4_t_v49[12];
  typedef uint32_t _g4_t_v50[3];
  typedef uint8_t _g4_t_v51[12];
  typedef uint8_t _g4_t_v52[12];
  typedef uint8_t _g4_t_v53[12];
  typedef uint8_t _g4_t_v54[12];
  typedef uint32_t _g4_t_v55[3];
  typedef uint32_t _g4_t_v56[3];
  typedef uint32_t _g4_t_v57[3];
  typedef uint32_t _g4_t_v58[3];
  typedef uint8_t _g4_t_v59[12];
  typedef uint8_t _g4_t_v60[12];
  typedef uint8_t _g4_t_v61[12];
  typedef uint8_t _g4_t_v62[12];
  typedef uint8_t _g4_t_v63[12];
  typedef uint8_t _g4_t_v64[12];
  typedef uint32_t _g4_t_v65[3];
  typedef uint8_t _g4_t_v66[12];
  typedef char _g4_t_v67;
  typedef uint8_t _g4_t_v68[23];
  typedef uint8_t _g4_t_v69[20];
  typedef uint8_t _g4_t_v70[20];
  typedef uint8_t _g4_t_v71[20];
  typedef uint8_t _g4_t_v72[20];
  typedef uint8_t _g4_t_v73[20];
  typedef uint8_t _g4_t_v74[20];
  typedef uint8_t _g4_t_v75[20];
  typedef uint8_t _g4_t_v76[20];
  typedef uint8_t _g4_t_v77[20];
  typedef uint8_t _g4_t_v78[20];
  typedef uint8_t _g4_t_v79[20];
  typedef uint8_t _g4_t_v80[20];
  typedef uint8_t _g4_t_v81[20];
  typedef uint8_t _g4_t_v82[20];
  typedef uint8_t _g4_t_v83[20];
  typedef uint8_t _g4_t_v84[20];
  typedef uint8_t _g4_t_v85[20];
  typedef uint8_t _g4_t_v86[20];
  typedef uint8_t _g4_t_v87[20];
  typedef uint8_t _g4_t_v88[20];
  typedef uint8_t _g4_t_v89[20];
  typedef uint8_t _g4_t_v90[20];
  typedef uint8_t _g4_t_v91[20];
  typedef uint8_t _g4_t_v92[20];
  typedef uint8_t _g4_t_v93[20];
  typedef uint8_t _g4_t_v94[20];
  typedef uint8_t _g4_t_v95[20];
  typedef uint8_t _g4_t_v96[20];
  typedef uint8_t _g4_t_v97[20];
  typedef uint8_t _g4_t_v98[32];
  enum : size_t {
    _g4_s0 = 1136u,
    _g4_s1 = (8u + sizeof(_g4_t_v24)) > _g4_s0 ? (8u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v26)) > _g4_s2 ? (12u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v27)) > _g4_s3 ? (12u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v28)) > _g4_s4 ? (12u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v29)) > _g4_s5 ? (12u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v30)) > _g4_s6 ? (12u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v31)) > _g4_s7 ? (12u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v32)) > _g4_s8 ? (28u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v33)) > _g4_s9 ? (36u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v34)) > _g4_s10 ? (52u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v35)) > _g4_s11 ? (56u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v36)) > _g4_s12 ? (60u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v37)) > _g4_s13 ? (64u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v38)) > _g4_s14 ? (76u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v39)) > _g4_s15 ? (88u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v40)) > _g4_s16 ? (100u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v41)) > _g4_s17 ? (112u + sizeof(_g4_t_v41)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v42)) > _g4_s18 ? (124u + sizeof(_g4_t_v42)) : _g4_s18,
    _g4_s20 = (136u + sizeof(_g4_t_v43)) > _g4_s19 ? (136u + sizeof(_g4_t_v43)) : _g4_s19,
    _g4_s21 = (148u + sizeof(_g4_t_v44)) > _g4_s20 ? (148u + sizeof(_g4_t_v44)) : _g4_s20,
    _g4_s22 = (160u + sizeof(_g4_t_v45)) > _g4_s21 ? (160u + sizeof(_g4_t_v45)) : _g4_s21,
    _g4_s23 = (172u + sizeof(_g4_t_v46)) > _g4_s22 ? (172u + sizeof(_g4_t_v46)) : _g4_s22,
    _g4_s24 = (184u + sizeof(_g4_t_v47)) > _g4_s23 ? (184u + sizeof(_g4_t_v47)) : _g4_s23,
    _g4_s25 = (196u + sizeof(_g4_t_v48)) > _g4_s24 ? (196u + sizeof(_g4_t_v48)) : _g4_s24,
    _g4_s26 = (208u + sizeof(_g4_t_v49)) > _g4_s25 ? (208u + sizeof(_g4_t_v49)) : _g4_s25,
    _g4_s27 = (220u + sizeof(_g4_t_v50)) > _g4_s26 ? (220u + sizeof(_g4_t_v50)) : _g4_s26,
    _g4_s28 = (232u + sizeof(_g4_t_v51)) > _g4_s27 ? (232u + sizeof(_g4_t_v51)) : _g4_s27,
    _g4_s29 = (244u + sizeof(_g4_t_v52)) > _g4_s28 ? (244u + sizeof(_g4_t_v52)) : _g4_s28,
    _g4_s30 = (256u + sizeof(_g4_t_v53)) > _g4_s29 ? (256u + sizeof(_g4_t_v53)) : _g4_s29,
    _g4_s31 = (268u + sizeof(_g4_t_v54)) > _g4_s30 ? (268u + sizeof(_g4_t_v54)) : _g4_s30,
    _g4_s32 = (280u + sizeof(_g4_t_v55)) > _g4_s31 ? (280u + sizeof(_g4_t_v55)) : _g4_s31,
    _g4_s33 = (292u + sizeof(_g4_t_v56)) > _g4_s32 ? (292u + sizeof(_g4_t_v56)) : _g4_s32,
    _g4_s34 = (304u + sizeof(_g4_t_v57)) > _g4_s33 ? (304u + sizeof(_g4_t_v57)) : _g4_s33,
    _g4_s35 = (316u + sizeof(_g4_t_v58)) > _g4_s34 ? (316u + sizeof(_g4_t_v58)) : _g4_s34,
    _g4_s36 = (328u + sizeof(_g4_t_v59)) > _g4_s35 ? (328u + sizeof(_g4_t_v59)) : _g4_s35,
    _g4_s37 = (340u + sizeof(_g4_t_v60)) > _g4_s36 ? (340u + sizeof(_g4_t_v60)) : _g4_s36,
    _g4_s38 = (352u + sizeof(_g4_t_v61)) > _g4_s37 ? (352u + sizeof(_g4_t_v61)) : _g4_s37,
    _g4_s39 = (364u + sizeof(_g4_t_v62)) > _g4_s38 ? (364u + sizeof(_g4_t_v62)) : _g4_s38,
    _g4_s40 = (376u + sizeof(_g4_t_v63)) > _g4_s39 ? (376u + sizeof(_g4_t_v63)) : _g4_s39,
    _g4_s41 = (388u + sizeof(_g4_t_v64)) > _g4_s40 ? (388u + sizeof(_g4_t_v64)) : _g4_s40,
    _g4_s42 = (400u + sizeof(_g4_t_v65)) > _g4_s41 ? (400u + sizeof(_g4_t_v65)) : _g4_s41,
    _g4_s43 = (412u + sizeof(_g4_t_v66)) > _g4_s42 ? (412u + sizeof(_g4_t_v66)) : _g4_s42,
    _g4_s44 = (424u + sizeof(_g4_t_v67)) > _g4_s43 ? (424u + sizeof(_g4_t_v67)) : _g4_s43,
    _g4_s45 = (425u + sizeof(_g4_t_v68)) > _g4_s44 ? (425u + sizeof(_g4_t_v68)) : _g4_s44,
    _g4_s46 = (448u + sizeof(_g4_t_v69)) > _g4_s45 ? (448u + sizeof(_g4_t_v69)) : _g4_s45,
    _g4_s47 = (468u + sizeof(_g4_t_v70)) > _g4_s46 ? (468u + sizeof(_g4_t_v70)) : _g4_s46,
    _g4_s48 = (488u + sizeof(_g4_t_v71)) > _g4_s47 ? (488u + sizeof(_g4_t_v71)) : _g4_s47,
    _g4_s49 = (508u + sizeof(_g4_t_v72)) > _g4_s48 ? (508u + sizeof(_g4_t_v72)) : _g4_s48,
    _g4_s50 = (528u + sizeof(_g4_t_v73)) > _g4_s49 ? (528u + sizeof(_g4_t_v73)) : _g4_s49,
    _g4_s51 = (548u + sizeof(_g4_t_v74)) > _g4_s50 ? (548u + sizeof(_g4_t_v74)) : _g4_s50,
    _g4_s52 = (568u + sizeof(_g4_t_v75)) > _g4_s51 ? (568u + sizeof(_g4_t_v75)) : _g4_s51,
    _g4_s53 = (588u + sizeof(_g4_t_v76)) > _g4_s52 ? (588u + sizeof(_g4_t_v76)) : _g4_s52,
    _g4_s54 = (608u + sizeof(_g4_t_v77)) > _g4_s53 ? (608u + sizeof(_g4_t_v77)) : _g4_s53,
    _g4_s55 = (628u + sizeof(_g4_t_v78)) > _g4_s54 ? (628u + sizeof(_g4_t_v78)) : _g4_s54,
    _g4_s56 = (648u + sizeof(_g4_t_v79)) > _g4_s55 ? (648u + sizeof(_g4_t_v79)) : _g4_s55,
    _g4_s57 = (668u + sizeof(_g4_t_v80)) > _g4_s56 ? (668u + sizeof(_g4_t_v80)) : _g4_s56,
    _g4_s58 = (688u + sizeof(_g4_t_v81)) > _g4_s57 ? (688u + sizeof(_g4_t_v81)) : _g4_s57,
    _g4_s59 = (708u + sizeof(_g4_t_v82)) > _g4_s58 ? (708u + sizeof(_g4_t_v82)) : _g4_s58,
    _g4_s60 = (728u + sizeof(_g4_t_v83)) > _g4_s59 ? (728u + sizeof(_g4_t_v83)) : _g4_s59,
    _g4_s61 = (748u + sizeof(_g4_t_v84)) > _g4_s60 ? (748u + sizeof(_g4_t_v84)) : _g4_s60,
    _g4_s62 = (768u + sizeof(_g4_t_v85)) > _g4_s61 ? (768u + sizeof(_g4_t_v85)) : _g4_s61,
    _g4_s63 = (788u + sizeof(_g4_t_v86)) > _g4_s62 ? (788u + sizeof(_g4_t_v86)) : _g4_s62,
    _g4_s64 = (808u + sizeof(_g4_t_v87)) > _g4_s63 ? (808u + sizeof(_g4_t_v87)) : _g4_s63,
    _g4_s65 = (828u + sizeof(_g4_t_v88)) > _g4_s64 ? (828u + sizeof(_g4_t_v88)) : _g4_s64,
    _g4_s66 = (848u + sizeof(_g4_t_v89)) > _g4_s65 ? (848u + sizeof(_g4_t_v89)) : _g4_s65,
    _g4_s67 = (868u + sizeof(_g4_t_v90)) > _g4_s66 ? (868u + sizeof(_g4_t_v90)) : _g4_s66,
    _g4_s68 = (888u + sizeof(_g4_t_v91)) > _g4_s67 ? (888u + sizeof(_g4_t_v91)) : _g4_s67,
    _g4_s69 = (908u + sizeof(_g4_t_v92)) > _g4_s68 ? (908u + sizeof(_g4_t_v92)) : _g4_s68,
    _g4_s70 = (928u + sizeof(_g4_t_v93)) > _g4_s69 ? (928u + sizeof(_g4_t_v93)) : _g4_s69,
    _g4_s71 = (948u + sizeof(_g4_t_v94)) > _g4_s70 ? (948u + sizeof(_g4_t_v94)) : _g4_s70,
    _g4_s72 = (968u + sizeof(_g4_t_v95)) > _g4_s71 ? (968u + sizeof(_g4_t_v95)) : _g4_s71,
    _g4_s73 = (988u + sizeof(_g4_t_v96)) > _g4_s72 ? (988u + sizeof(_g4_t_v96)) : _g4_s72,
    _g4_s74 = (1008u + sizeof(_g4_t_v97)) > _g4_s73 ? (1008u + sizeof(_g4_t_v97)) : _g4_s73,
    _g4_s75 = (1028u + sizeof(_g4_t_v98)) > _g4_s74 ? (1028u + sizeof(_g4_t_v98)) : _g4_s74
  };
  alignas(16) uint8_t _g4_sf[_g4_s75];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 64u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 76u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 88u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 100u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 112u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 124u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 136u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 148u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 160u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 172u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 184u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 196u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 208u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 220u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 232u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 244u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 256u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 268u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 280u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 292u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 304u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 316u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 328u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 340u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 352u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 364u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 376u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 388u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 400u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 412u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 424u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 425u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 448u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 468u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 488u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 508u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 528u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 548u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 568u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 588u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 608u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 628u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 648u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 668u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 688u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 708u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 728u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 748u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 768u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 788u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 808u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 828u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 848u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 868u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 888u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 908u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 928u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 948u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 968u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 988u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 1008u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 1028u);

  *((uint32_t *)self + 31) = gameswf::timer::getTicks(v24);
  v1 = *((uint32_t *)self + 29);
  *((uint32_t *)self + 32) = v2;
  *(uint32_t *)(v1 + 20) = *((uint32_t *)self + 25);
  v3 = *((uint32_t *)self + 29);
  v4 = *(int **)(v3 + 12);
  v5 = (gameswf::hash<gameswf::StringIPointer, gameswf::ASValue::Self, gameswf::string_pointer_hash_functor<gameswf::StringIPointer>> **)(v3 + 12);
  v6 = 48;
  if ( v4 != nullptr )
  {
    LOBYTE(v6) = 32;
    if ( *v4 >= 32 )
      v6 = *v4;
    v6 = (3 * v6) >> 1;
  }
  gameswf::hash_gameswf_StringIPointer_g_5eef2f::set_raw_capacity(
    v5,
    v6);
  v37[0] = 0;
  v37[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v37, (int)(uintptr_t)(gameswf::ASGlobal::trace));
  sub_776320((gameswf::String::Self *)v69, (gameswf::Self *)"trace");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v69,
    (const gameswf::ASValue::Self *)v37);
  sub_59CE50((int)(uintptr_t)(v69));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v37);
  v38[0] = 0;
  v38[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v38, (int)(uintptr_t)(gameswf::ASObject::ctor));
  sub_776320((gameswf::String::Self *)v70, (gameswf::Self *)"Object");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v70,
    (const gameswf::ASValue::Self *)v38);
  sub_59CE50((int)(uintptr_t)(v70));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v38);
  v39[0] = 0;
  v39[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v39, (int)(uintptr_t)(gameswf::ASSound::ctor));
  sub_776320((gameswf::String::Self *)v71, (gameswf::Self *)"Sound");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v71,
    (const gameswf::ASValue::Self *)v39);
  sub_59CE50((int)(uintptr_t)(v71));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v39);
  v7 = (gameswf::RefCounted::Self *)gameswf::arrayInit(self, v25);
  LOWORD(v40[0]) = 5;
  v40[1] = (uint32_t)(uintptr_t)(v7);
  if ( v7 != nullptr )
    gameswf::RefCounted::addRef(v7);
  sub_776320((gameswf::String::Self *)v72, (gameswf::Self *)"Array");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v72,
    (const gameswf::ASValue::Self *)v40);
  sub_59CE50((int)(uintptr_t)(v72));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v40);
  v41[0] = 0;
  v41[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v41, (int)(uintptr_t)(gameswf::ASSprite::ctor));
  sub_776320((gameswf::String::Self *)v73, (gameswf::Self *)"MovieClip");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v73,
    (const gameswf::ASValue::Self *)v41);
  sub_59CE50((int)(uintptr_t)(v73));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v41);
  v8 = (gameswf::RefCounted::Self *)gameswf::textFieldInit(self, v26);
  LOWORD(v42[0]) = 5;
  v42[1] = (uint32_t)(uintptr_t)(v8);
  if ( v8 != nullptr )
    gameswf::RefCounted::addRef(v8);
  sub_776320((gameswf::String::Self *)v74, (gameswf::Self *)"TextField");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v74,
    (const gameswf::ASValue::Self *)v42);
  sub_59CE50((int)(uintptr_t)(v74));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v42);
  v43[0] = 0;
  v43[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v43, (int)(uintptr_t)(gameswf::ASTextFormat::ctor));
  sub_776320((gameswf::String::Self *)v75, (gameswf::Self *)"TextFormat");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v75,
    (const gameswf::ASValue::Self *)v43);
  sub_59CE50((int)(uintptr_t)(v75));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v43);
  v44[0] = 0;
  v44[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v44, (int)(uintptr_t)(gameswf::ASMovieClipLoader::ctor));
  sub_776320((gameswf::String::Self *)v76, (gameswf::Self *)"MovieClipLoader");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v76,
    (const gameswf::ASValue::Self *)v44);
  sub_59CE50((int)(uintptr_t)(v76));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v44);
  v45[0] = 0;
  v45[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v45, (int)(uintptr_t)(gameswf::ASString::ctor));
  sub_776320((gameswf::String::Self *)v77, (gameswf::Self *)"String");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v77,
    (const gameswf::ASValue::Self *)v45);
  sub_59CE50((int)(uintptr_t)(v77));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v45);
  v46[0] = 0;
  v46[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v46, (int)(uintptr_t)(gameswf::ASNumber::ctor));
  sub_776320((gameswf::String::Self *)v78, (gameswf::Self *)"Number");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v78,
    (const gameswf::ASValue::Self *)v46);
  sub_59CE50((int)(uintptr_t)(v78));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v46);
  v47[0] = 0;
  v47[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v47, (int)(uintptr_t)(gameswf::ASBoolean::ctor));
  sub_776320((gameswf::String::Self *)v79, (gameswf::Self *)"Boolean");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v79,
    (const gameswf::ASValue::Self *)v47);
  sub_59CE50((int)(uintptr_t)(v79));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v47);
  v48[0] = 0;
  v48[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v48, (int)(uintptr_t)(gameswf::ASColor::ctor));
  sub_776320((gameswf::String::Self *)v80, (gameswf::Self *)"Color");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v80,
    (const gameswf::ASValue::Self *)v48);
  sub_59CE50((int)(uintptr_t)(v80));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v48);
  v49[0] = 0;
  v49[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v49, (int)(uintptr_t)(gameswf::ASDate::ctor));
  sub_776320((gameswf::String::Self *)v81, (gameswf::Self *)"Date");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v81,
    (const gameswf::ASValue::Self *)v49);
  sub_59CE50((int)(uintptr_t)(v81));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v49);
  v9 = (gameswf::RefCounted::Self *)gameswf::selection_init(self, v27);
  LOWORD(v50[0]) = 5;
  v50[1] = (uint32_t)(uintptr_t)(v9);
  if ( v9 != nullptr )
    gameswf::RefCounted::addRef(v9);
  sub_776320((gameswf::String::Self *)v82, (gameswf::Self *)"Selection");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v82,
    (const gameswf::ASValue::Self *)v50);
  sub_59CE50((int)(uintptr_t)(v82));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v50);
  v51[0] = 0;
  v51[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v51, (int)(uintptr_t)(gameswf::ASGlobal::ASSetPropFlags));
  sub_776320((gameswf::String::Self *)v83, (gameswf::Self *)"ASSetPropFlags");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v83,
    (const gameswf::ASValue::Self *)v51);
  sub_59CE50((int)(uintptr_t)(v83));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v51);
  v52[0] = 0;
  v52[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v52, (int)(uintptr_t)(gameswf::ASNetStream::ctor));
  sub_776320((gameswf::String::Self *)v84, (gameswf::Self *)"NetStream");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v84,
    (const gameswf::ASValue::Self *)v52);
  sub_59CE50((int)(uintptr_t)(v84));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v52);
  v53[0] = 0;
  v53[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v53, (int)(uintptr_t)(gameswf::ASNetConnection::ctor));
  sub_776320((gameswf::String::Self *)v85, (gameswf::Self *)"NetConnection");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v85,
    (const gameswf::ASValue::Self *)v53);
  sub_59CE50((int)(uintptr_t)(v85));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v53);
  v54[0] = 0;
  v54[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v54, (int)(uintptr_t)(gameswf::ASLocalConnection::ctor));
  sub_776320((gameswf::String::Self *)v86, (gameswf::Self *)"LocalConnection");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v86,
    (const gameswf::ASValue::Self *)v54);
  sub_59CE50((int)(uintptr_t)(v86));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v54);
  v10 = (gameswf::RefCounted::Self *)gameswf::mathInit(self, v28);
  LOWORD(v55[0]) = 5;
  v55[1] = (uint32_t)(uintptr_t)(v10);
  if ( v10 != nullptr )
    gameswf::RefCounted::addRef(v10);
  sub_776320((gameswf::String::Self *)v87, (gameswf::Self *)"math");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v87,
    (const gameswf::ASValue::Self *)v55);
  sub_59CE50((int)(uintptr_t)(v87));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v55);
  v11 = (gameswf::RefCounted::Self *)gameswf::keyInit(self, v29);
  LOWORD(v56[0]) = 5;
  v56[1] = (uint32_t)(uintptr_t)(v11);
  if ( v11 != nullptr )
    gameswf::RefCounted::addRef(v11);
  sub_776320((gameswf::String::Self *)v88, (gameswf::Self *)"Key");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v88,
    (const gameswf::ASValue::Self *)v56);
  sub_59CE50((int)(uintptr_t)(v88));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v56);
  v12 = (gameswf::RefCounted::Self *)gameswf::broadcasterInit(self, v30);
  LOWORD(v57[0]) = 5;
  v57[1] = (uint32_t)(uintptr_t)(v12);
  if ( v12 != nullptr )
    gameswf::RefCounted::addRef(v12);
  sub_776320((gameswf::String::Self *)v89, (gameswf::Self *)"AsBroadcaster");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v89,
    (const gameswf::ASValue::Self *)v57);
  sub_59CE50((int)(uintptr_t)(v89));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v57);
  v13 = (gameswf::RefCounted::Self *)gameswf::flash_init(self, v31);
  LOWORD(v58[0]) = 5;
  v58[1] = (uint32_t)(uintptr_t)(v13);
  if ( v13 != nullptr )
    gameswf::RefCounted::addRef(v13);
  sub_776320((gameswf::String::Self *)v90, (gameswf::Self *)"flash");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v90,
    (const gameswf::ASValue::Self *)v58);
  sub_59CE50((int)(uintptr_t)(v90));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v58);
  v59[0] = 0;
  v59[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v59, (int)(uintptr_t)(gameswf::ASGlobal::setInterval));
  sub_776320((gameswf::String::Self *)v91, (gameswf::Self *)"setInterval");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v91,
    (const gameswf::ASValue::Self *)v59);
  sub_59CE50((int)(uintptr_t)(v91));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v59);
  v60[0] = 0;
  v60[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v60, (int)(uintptr_t)(gameswf::ASGlobal::clearInterval));
  sub_776320((gameswf::String::Self *)v92, (gameswf::Self *)"clearInterval");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v92,
    (const gameswf::ASValue::Self *)v60);
  sub_59CE50((int)(uintptr_t)(v92));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v60);
  v61[0] = 0;
  v61[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v61, (int)(uintptr_t)(gameswf::ASGlobal::getVersion));
  sub_776320((gameswf::String::Self *)v93, (gameswf::Self *)"getVersion");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v93,
    (const gameswf::ASValue::Self *)v61);
  sub_59CE50((int)(uintptr_t)(v93));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v61);
  v62[0] = 0;
  v62[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v62, (int)(uintptr_t)(gameswf::ASNumber::parseFloat));
  sub_776320((gameswf::String::Self *)v94, (gameswf::Self *)"parseFloat");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v94,
    (const gameswf::ASValue::Self *)v62);
  sub_59CE50((int)(uintptr_t)(v94));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v62);
  v63[0] = 0;
  v63[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v63, (int)(uintptr_t)(gameswf::ASNumber::parseInt));
  sub_776320((gameswf::String::Self *)v95, (gameswf::Self *)"parseInt");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v95,
    (const gameswf::ASValue::Self *)v63);
  sub_59CE50((int)(uintptr_t)(v95));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v63);
  v64[0] = 0;
  v64[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v64, (int)(uintptr_t)(gameswf::ASNumber::isNaN));
  sub_776320((gameswf::String::Self *)v96, (gameswf::Self *)"isNaN");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v96,
    (const gameswf::ASValue::Self *)v64);
  sub_59CE50((int)(uintptr_t)(v96));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v64);
  sub_776320((gameswf::String::Self *)&v67, (gameswf::Self *)"gameSWF");
  v34 = &v67;
  v33 = (int *)((char *)self + 48);
  index = gameswf::hash_gameswf_StringPointer_ga_128477::find_index(
            (int *)self + 12,
            &v34);
  if ( index >= 0 )
  {
    v15 = *(uint32_t *)(*((uint32_t *)self + 12) + 16 * index + 20);
    goto LABEL_21;
  }
  if ( v67 == -1 )
  {
    if ( *(uint32_t *)&v68[3] - 1 > 13 )
      goto LABEL_24;
LABEL_37:
    v15 = gameswf::PermanentAllocator::allocate((gameswf::Player::Self *)((char *)self + 52), 20);
    v23 = (gameswf::Self *)v68;
    if ( v67 == -1 )
      v23 = *(gameswf::Self **)&v68[11];
    if ( v15 != 0 )
    {
      sub_776320((gameswf::String::Self *)v15, v23);
      *(uint8_t *)(v15 + 18) |= 0x80u;
    }
    goto LABEL_33;
  }
  if ( v67 - 1 <= 13 )
    goto LABEL_37;
LABEL_24:
  if ( v67 == -1 )
    v17 = *(uint32_t *)&v68[3] - 1;
  else
    v17 = v67 - 1;
  v18 = gameswf::PermanentAllocator::allocate((gameswf::Player::Self *)((char *)self + 52), v17 + 21);
  v15 = v18;
  if ( v18 != 0 )
  {
    *(uint8_t *)v18 = 1;
    *(uint8_t *)(v18 + 1) = 0;
    v19 = *(uint32_t *)(v18 + 16) | 0x7FFFFF;
    *(uint32_t *)(v15 + 16) = v19;
    *(uint8_t *)(v15 + 18) = BYTE2(v19) | 0x80;
    *(uint8_t *)(v15 + 19) = HIBYTE(v19) | 1;
  }
  v20 = (const char *)(v68);
  if ( v67 == -1 )
    v20 = *(const char **)&v68[11];
  strcpy((char *)(v15 + 20), v20);
  if ( v67 == -1 )
    v21 = *(uint32_t *)&v68[3] - 1;
  else
    v21 = v67 - 1;
  v32 = v21 + 1;
  gameswf::String::resize((gameswf::String::Self *)v15, 0);
  *(uint8_t *)v15 = -1;
  *(uint32_t *)(v15 + 12) = v15 + 20;
  *(uint32_t *)(v15 + 4) = v32;
  *(uint32_t *)(v15 + 8) = v32;
  *(uint8_t *)(v15 + 19) &= ~1u;
LABEL_33:
  v35 = (char *)v15;
  v22 = gameswf::hash_gameswf_StringPointer_ga_128477::find_index(
          v33,
          &v35);
  if ( v22 < 0 )
  {
    v36 = 0;
    gameswf::hash_gameswf_StringPointer_ga_128477::add(
      (int **)v33,
      &v35,
      &v36);
    v22 = gameswf::hash_gameswf_StringPointer_ga_128477::find_index(
            v33,
            &v35);
  }
  *(uint32_t *)(*((uint32_t *)self + 12) + 16 * v22 + 20) = v15;
LABEL_21:
  LOWORD(v65[0]) = 0;
  v65[1] = 0;
  gameswf::ASValue::setString((gameswf::ASValue::Self *)v65, (const gameswf::String::Self *)v15);
  sub_776320((gameswf::String::Self *)v97, (gameswf::Self *)"$version");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v97,
    (const gameswf::ASValue::Self *)v65);
  sub_59CE50((int)(uintptr_t)(v97));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v65);
  sub_59CE50((int)(uintptr_t)(&v67));
  v66[0] = 0;
  v66[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v66, (int)(uintptr_t)(gameswf::ASGlobal::getActiveController));
  sub_776320((gameswf::String::Self *)v98, (gameswf::Self *)"getActiveController");
  gameswf::ASObject::builtinMember(
    *((gameswf::ASObject::Self **)self + 29),
    (const gameswf::StringI::Self *)v98,
    (const gameswf::ASValue::Self *)v66);
  sub_59CE50((int)(uintptr_t)(v98));
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v66);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Player::Construct  (binary VA: 0x10bc710)
// Original: gameswf::Player::Player
// ----------------------------------------------------------------------------
gameswf::Player::Self * gameswf::Player::Construct(gameswf::RefCounted::Self **self, gameswf::PlayerContext::Self *a2)
{
  unsigned int v2;
  char v3; // edx^2
  int v4;
  gameswf::ASObject::Self *v5;
  gameswf::ASObject::Self *v6;
  gameswf::ASObject::Self *v7;
  int StandardMemberID;
  int v9;
  gameswf::ASObject::Self *v10;
  gameswf::ASObject::Self *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  char *v16;
  gameswf::RefCounted::Self ***v17;
  gameswf::Player::Self *result;
  int v19;
  int64_t v20; // kr08_8
  int v21;
  typedef gameswf::timer::Self *_g4_t_v22;
  typedef gameswf::random::Self *_g4_t_v23;
  typedef unsigned int _g4_t_v24[3];
  typedef uint8_t _g4_t_v25[4];
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint8_t _g4_t_v28[20];
  typedef uint8_t _g4_t_v29[48];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v23)) > _g4_s1 ? (0u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v24)) > _g4_s2 ? (32u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v25)) > _g4_s3 ? (44u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v26)) > _g4_s4 ? (48u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v27)) > _g4_s5 ? (52u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v28)) > _g4_s6 ? (56u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v29)) > _g4_s7 ? (76u + sizeof(_g4_t_v29)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);

  gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)self);
  *(self + 4) = nullptr;
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208ECB8);
  *(self + 3) = (gameswf::RefCounted::Self *)(a2);
  *(self + 5) = nullptr;
  *(self + 6) = nullptr;
  *(self + 7) = nullptr;
  *(self + 8) = nullptr;
  *(self + 9) = nullptr;
  *(self + 10) = nullptr;
  *(self + 11) = nullptr;
  *(self + 12) = nullptr;
  *(self + 13) = nullptr;
  *(self + 14) = nullptr;
  *(self + 15) = nullptr;
  *(self + 16) = nullptr;
  *(self + 17) = (gameswf::RefCounted::Self *)(&stru_FFF4 + 12);
  *(self + 18) = nullptr;
  *(self + 19) = nullptr;
  *(self + 20) = nullptr;
  *(self + 21) = nullptr;
  *(self + 22) = nullptr;
  *(self + 23) = (gameswf::RefCounted::Self *)(&stru_FFF4 + 12);
  *(self + 24) = nullptr;
  *(self + 25) = (gameswf::RefCounted::Self *)(&dword_0 + 1);
  *(self + 26) = nullptr;
  *(self + 27) = nullptr;
  *((uint8_t *)self + 112) = 0;
  *(self + 29) = nullptr;
  *(self + 30) = nullptr;
  *(self + 31) = nullptr;
  *(self + 32) = nullptr;
  *(self + 33) = nullptr;
  v2 = (unsigned int)(uintptr_t)(*(self + 39));
  *(self + 34) = nullptr;
  v2 |= 0x7FFFFFu;
  *((uint8_t *)self + 140) = 1;
  *(self + 39) = (gameswf::RefCounted::Self *)v2;
  v3 = BYTE2(v2);
  *((uint8_t *)self + 141) = 0;
  *(self + 40) = nullptr;
  *((uint8_t *)self + 159) = HIBYTE(v2) | 1;
  v4 = (unsigned int)(uintptr_t)(*(self + 45)) | 0x7FFFFF;
  *((uint8_t *)self + 158) = v3 & 0x7F;
  *(self + 45) = (gameswf::RefCounted::Self *)v4;
  *((uint8_t *)self + 164) = 1;
  *((uint8_t *)self + 165) = 0;
  *((uint8_t *)self + 183) = HIBYTE(v4) | 1;
  *((uint8_t *)self + 182) = BYTE2(v4) & 0x7F;
  *((uint8_t *)self + 184) = 0;
  *((uint8_t *)self + 185) = 0;
  *((uint8_t *)self + 196) = 0;
  *((uint8_t *)self + 197) = 0;
  *(self + 52) = nullptr;
  *((uint8_t *)self + 212) = 0;
  *(self + 54) = nullptr;
  *(self + 55) = nullptr;
  *(self + 56) = nullptr;
  *(self + 57) = nullptr;
  *((uint8_t *)self + 232) = 0;
  *(self + 60) = nullptr;
  *(self + 61) = nullptr;
  *(self + 62) = nullptr;
  *(self + 63) = nullptr;
  *(self + 64) = nullptr;
  *(self + 65) = nullptr;
  *(self + 66) = nullptr;
  *(self + 67) = nullptr;
  *(self + 59) = (gameswf::RefCounted::Self *)&off_2091708;
  *(self + 68) = nullptr;
  *(self + 69) = nullptr;
  *(self + 70) = nullptr;
  *(self + 71) = nullptr;
  *(self + 72) = nullptr;
  *(self + 73) = nullptr;
  *(self + 74) = nullptr;
  *(self + 75) = nullptr;
  *(self + 76) = nullptr;
  *(self + 77) = nullptr;
  *(self + 78) = nullptr;
  gameswf::AS3Engine::init((gameswf::AS3Engine::Self *)(self + 59), (gameswf::Player::Self *)self);
  v5 = (gameswf::ASObject::Self *)opNew(0x28u);
  gameswf::ASObject::ASObject(v5, (gameswf::Player::Self *)self);
  v6 = (gameswf::ASObject::Self *)(*(self + 29));
  if ( v5 != v6 )
  {
    if ( v6 != nullptr )
      gameswf::RefCounted::dropRef(*(self + 29));
    *(self + 29) = (gameswf::RefCounted::Self *)(v5);
    if ( v5 != nullptr )
      gameswf::RefCounted::addRef(v5);
  }
  v7 = (gameswf::ASObject::Self *)opNew(0x28u);
  gameswf::ASObject::ASObject(v7, (gameswf::Player::Self *)self);
  *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_208ECC8);
  v25[0] = 2;
  v25[1] = 0;
  v26 = 0;
  v27 = 1072693248;
  sub_776320((gameswf::String::Self *)v29, (gameswf::Self *)"width");
  StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)v29);
  if ( StandardMemberID == -1
    || G4_VCALL<uint8_t>(v7, 32, StandardMemberID, v25) == 0 )
  {
    G4_VCALL<void>(v7, 48, v29, v25);
  }
  sub_59CE50((int)(uintptr_t)(v29));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v25);
  LOWORD(v24[0]) = 2;
  v24[1] = 0;
  v24[2] = 1072693248;
  sub_776320((gameswf::String::Self *)v28, (gameswf::Self *)"height");
  v9 = gameswf::getStandardMemberID((gameswf::Self *)v28);
  if ( v9 == -1
    || G4_VCALL<uint8_t>(v7, 32, v9, v24) == 0 )
  {
    G4_VCALL<void>(v7, 48, v28, v24);
  }
  sub_59CE50((int)(uintptr_t)(v28));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v24);
  v10 = (gameswf::ASObject::Self *)(*(self + 30));
  if ( v7 != v10 )
  {
    if ( v10 != nullptr )
      gameswf::RefCounted::dropRef(*(self + 30));
    *(self + 30) = (gameswf::RefCounted::Self *)(v7);
    gameswf::RefCounted::addRef(v7);
  }
  v11 = (gameswf::ASObject::Self *)opNew(0x28u);
  gameswf::ASObject::ASObject(v11, (gameswf::Player::Self *)self);
  gameswf::ASValue::setObject((gameswf::ASValue::Self *)(self + 46), v11);
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)(self + 49), (int)(uintptr_t)(gameswf::ASSprite::ctor));
  gameswf::Player::actionInit((gameswf::Player::Self *)self);
  v12 = (int)(uintptr_t)(*(self + 3));
  v13 = *(uint32_t *)(v12 + 28);
  v14 = *(uint32_t *)(v12 + 32);
  v15 = v13 + 1;
  if ( v13 + 1 <= v14 || *(uint32_t *)(v12 + 36) != 0 )
  {
    v16 = *(char **)(v12 + 24);
  }
  else
  {
    v21 = v15 + (v15 >> 1);
    *(uint32_t *)(v12 + 32) = v21;
    if ( v21 != 0 )
    {
      if ( *(uint32_t *)(v12 + 24) != 0 )
        v16 = (char *)gameswf::realloc_internal(*(gameswf::Self **)(v12 + 24), 4 * v21, 4 * v14);
      else
        v16 = (char *)gameswf::malloc_internal(4 * v21);
      *(uint32_t *)(v12 + 24) = (uint32_t)(uintptr_t)(v16);
      v13 = *(uint32_t *)(v12 + 28);
    }
    else
    {
      if ( *(uint32_t *)(v12 + 24) != 0 )
      {
        gameswf::free_internal(*(gameswf::Self **)(v12 + 24));
        v13 = *(uint32_t *)(v12 + 28);
      }
      *(uint32_t *)(v12 + 24) = 0;
      v16 = nullptr;
    }
  }
  v17 = (gameswf::RefCounted::Self ***)&v16[4 * v13];
  if ( v17 != nullptr )
    *v17 = self;
  *(uint32_t *)(v12 + 28) = v15;
  result = (gameswf::Player::Self *)gameswf::timer::getSysTime(v22);
  v19 = (uint8_t)(uintptr_t)(result);
  if ( (uint8_t)(uintptr_t)(result) != 0 )
  {
    v20 = 0;
    do
    {
      gameswf::random::nextRandom(v23);
      result = (gameswf::Player::Self *)(v19 ^ ++v20);
    }
    while ( v20 != v19 );
  }
  return result;
}


