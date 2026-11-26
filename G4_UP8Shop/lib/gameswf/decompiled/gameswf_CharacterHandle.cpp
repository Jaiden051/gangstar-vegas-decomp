#include "Core/Utils/DecompTypes.h"
#include "gameswf_CharacterHandle.h"

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::Destroy  (binary VA: 0x1082cc0)
// Original: gameswf::CharacterHandle::~CharacterHandle
// ----------------------------------------------------------------------------
void gameswf::CharacterHandle::Destroy(gameswf::Self **self)
{
  gameswf::Self *v1;

  if ( *((uint8_t *)self + 12) == 0xFF && (*((uint8_t *)self + 31) & 1) != 0 )
    gameswf::free_internal(*(self + 6));
  v1 = *(self + 1);
  if ( v1 != nullptr && (*(uint16_t *)v1)-- == 1 )
    gameswf::free_internal(v1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::opAssign  (binary VA: 0x1082d40)
// Original: gameswf::CharacterHandle::operator=
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::opAssign(gameswf::CharacterHandle::Self *self, gameswf::Character::Self *a2)
{
  gameswf::CharacterHandle::Self *v2;
  gameswf::Character::Self *v3;
  int result;
  gameswf::Self *v5;
  int v6;
  gameswf::Self *WeakProxy;
  gameswf::Self *v8;
  bool v9;
  gameswf::Self *v10;
  int v11;
  char *v12;
  gameswf::Self *v13;
  gameswf::Self *v14;
  int v15;
  gameswf::Self *v16;
  int v17;
  int v18;
  int v19;
  gameswf::Self *v20;
  typedef gameswf::Self *_g4_t_v21;
  typedef gameswf::CharacterHandle::Self *_g4_t_v22;
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef uint8_t _g4_t_v25[3];
  typedef int _g4_t_v26;
  typedef gameswf::Self *_g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef gameswf::CharacterHandle::Self **_g4_t_v29;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v22)) > _g4_s1 ? (8u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (18u + sizeof(_g4_t_v23)) > _g4_s2 ? (18u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v24)) > _g4_s3 ? (20u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (21u + sizeof(_g4_t_v25)) > _g4_s4 ? (21u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v26)) > _g4_s5 ? (24u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v27)) > _g4_s6 ? (32u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v28)) > _g4_s7 ? (36u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v29)) > _g4_s8 ? (60u + sizeof(_g4_t_v29)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 18u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 21u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);

  v29 = &self;
  v2 = self;
  v3 = a2;
  result = *((uint32_t *)self + 2);
  if ( result != 0 )
  {
    v5 = *((gameswf::Self **)self + 1);
    if ( *((uint8_t *)v5 + 2) == 0 )
    {
      v9 = (*(uint16_t *)v5)-- == 1;
      if ( v9 )
        gameswf::free_internal(v5);
      *((uint32_t *)v2 + 1) = 0;
      *((uint32_t *)v2 + 2) = 0;
      result = 0;
    }
  }
  if ( v3 != (gameswf::Character::Self *)result )
  {
    if ( v3 != nullptr )
    {
      v6 = *(uint32_t *)(*((uint32_t *)v3 + 4) + 208);
      *((uint32_t *)v2 + 2) = (uint32_t)(uintptr_t)(v3);
      *(uint32_t *)v2 = v6;
      WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v3);
      v8 = *((gameswf::Self **)v2 + 1);
      if ( WeakProxy != v8 )
      {
        if ( v8 != nullptr )
        {
          v9 = (*(uint16_t *)v8)-- == 1;
          if ( v9 )
          {
            v21 = WeakProxy;
            gameswf::free_internal(v8);
            WeakProxy = v21;
          }
        }
        *((uint32_t *)v2 + 1) = (uint32_t)(uintptr_t)(WeakProxy);
        if ( WeakProxy != nullptr )
          ++*(uint16_t *)WeakProxy;
      }
      if ( *((uint8_t *)v2 + 32) != 0 )
      {
        gameswf::Character::getTarget((gameswf::Character::Self *)&v24, (int)(uintptr_t)(v3));
LABEL_15:
        if ( (char *)v2 + 12 == &v24 )
        {
          result = *((uint8_t *)v2 + 12);
          v23 = *((uint8_t *)v2 + 12);
        }
        else
        {
          if ( v24 == -1 )
            v11 = v26 - 1;
          else
            v11 = v24 - 1;
          gameswf::String::resize((gameswf::CharacterHandle::Self *)((char *)v2 + 12), v11);
          LOBYTE(v12) = *((uint8_t *)v2 + 12);
          v13 = (gameswf::Self *)v25;
          if ( v24 == -1 )
            v13 = v27;
          if ( (uint8_t)(uintptr_t)v12 == 0xFF )
          {
            v12 = *((char **)v2 + 4);
            v14 = *((gameswf::Self **)v2 + 6);
          }
          else
          {
            v12 = (char *)(char)(uintptr_t)v12;
            v14 = (gameswf::Self *)((gameswf::CharacterHandle::Self *)((char *)v2 + 13));
          }
          gameswf::Strcpy_s(v14, v12, v13);
          if ( (uint8_t *)(v28 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
          {
            v23 = v24;
            if ( v24 == -1 )
            {
              v16 = v27;
              v17 = v26 - 1;
            }
            else
            {
              v16 = (gameswf::Self *)v25;
              v17 = v24 - 1;
            }
            v15 = 5381;
            if ( v17 > 0 )
            {
              v22 = v2;
              do
              {
                --v17;
                v18 = 33 * v15;
                v19 = *((uint8_t *)v16 + v17) + 32;
                if ( (uint8_t)(*((uint8_t *)v16 + v17) - 65) > 0x19u )
                  v19 = *((uint8_t *)v16 + v17);
                v15 = v18 ^ v19;
              }
              while ( v17 != 0 );
              v2 = v22;
              v15 = v15 << 9 >> 9;
            }
            v28 = v15 & 0x7FFFFF | v28 & 0xFF800000;
          }
          else
          {
            v23 = v24;
            v15 = (int)(v28 << 9) >> 9;
          }
          result = v15 & 0x7FFFFF;
          *((uint32_t *)v2 + 7) = result | *((uint32_t *)v2 + 7) & 0xFF800000;
        }
        if ( v23 == -1 && (v28 & 0x1000000) != 0 )
          return gameswf::free_internal(v27);
        return result;
      }
    }
    else
    {
      v20 = *((gameswf::Self **)v2 + 1);
      *(uint32_t *)v2 = 0;
      *((uint32_t *)v2 + 2) = 0;
      if ( v20 != nullptr )
      {
        v9 = (*(uint16_t *)v20)-- == 1;
        if ( v9 )
          gameswf::free_internal(v20);
        *((uint32_t *)v2 + 1) = 0;
      }
    }
    v24 = 1;
    v25[0] = 0;
    gameswf::String::resize((gameswf::String::Self *)&v24, 0);
    v10 = (gameswf::Self *)v25;
    if ( v24 == -1 )
      v10 = v27;
    gameswf::Strcpy_s(v10, (char *)&dword_0 + 1, (gameswf::Self *)&unk_1B15112);
    LOWORD(v28) = -1;
    BYTE2(v28) = 127;
    HIBYTE(v28) |= 1u;
    goto LABEL_15;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::Construct  (binary VA: 0x1083080)
// Original: gameswf::CharacterHandle::CharacterHandle
// ----------------------------------------------------------------------------
gameswf::CharacterHandle::Self * gameswf::CharacterHandle::Construct(gameswf::CharacterHandle::Self *self, const gameswf::ASValue::Self *a2)
{
  gameswf::Character::Self *v2;
  int v3;

  v2 = nullptr;
  v3 = *((uint32_t *)self + 7);
  *(uint32_t *)self = 0;
  v3 |= 0x7FFFFFu;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 7) = v3;
  *((uint32_t *)self + 2) = 0;
  *((uint8_t *)self + 12) = 1;
  *((uint8_t *)self + 13) = 0;
  *((uint8_t *)self + 30) = BYTE2(v3) & 0x7F;
  *(uint16_t *)((char *)self + 31) = HIBYTE(v3) | 1;
  if ( *(uint8_t *)a2 == 5 )
  {
    v2 = *((gameswf::Character::Self **)a2 + 1);
    if ( v2 != nullptr && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v2 + 8))(*((uint32_t *)a2 + 1), 1) == 0 )
      v2 = nullptr;
  }
  return (gameswf::CharacterHandle::Self *)gameswf::CharacterHandle::opAssign(self, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::Construct  (binary VA: 0x1083130)
// Original: gameswf::CharacterHandle::CharacterHandle
// ----------------------------------------------------------------------------
gameswf::CharacterHandle::Self * gameswf::CharacterHandle::Construct(gameswf::CharacterHandle::Self *self, gameswf::Character::Self *a2)
{
  int v2;

  v2 = *((uint32_t *)self + 7);
  *(uint32_t *)self = 0;
  v2 |= 0x7FFFFFu;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 7) = v2;
  *((uint32_t *)self + 2) = 0;
  *((uint8_t *)self + 30) = BYTE2(v2) & 0x7F;
  *((uint8_t *)self + 31) = HIBYTE(v2) | 1;
  *((uint8_t *)self + 12) = 1;
  *((uint8_t *)self + 13) = 0;
  *((uint8_t *)self + 32) = 0;
  return (gameswf::CharacterHandle::Self *)gameswf::CharacterHandle::opAssign(self, a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getPlayer  (binary VA: 0x10831a0)
// Original: gameswf::CharacterHandle::getPlayer
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::getPlayer(gameswf::CharacterHandle::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getCharacter  (binary VA: 0x10831b0)
// Original: gameswf::CharacterHandle::getCharacter
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::getCharacter(gameswf::CharacterHandle::Self *self)
{
  int v1;
  gameswf::Self *v2;
  int result;
  bool v4;
  char v5;
  const char *s;
  gameswf::RefCounted::Self *Target;
  gameswf::Self *WeakProxy;
  gameswf::Self *v9;
  gameswf::Self *v10;
  gameswf::Self *v11;
  gameswf::Self *v12;
  gameswf::Self *v13;

  v1 = *((uint32_t *)self + 2);
  if ( v1 == 0 )
    goto LABEL_8;
  v2 = *((gameswf::Self **)self + 1);
  if ( *((uint8_t *)v2 + 2) == 0 )
  {
    v4 = (*(uint16_t *)v2)-- == 1;
    if ( v4 )
      gameswf::free_internal(v2);
    *((uint32_t *)self + 1) = 0;
    *((uint32_t *)self + 2) = 0;
    goto LABEL_8;
  }
  if ( *(uint16_t *)(v1 + 140) == 0 )
  {
    if ( *(uint32_t *)(v1 + 56) != 0 )
    {
      v11 = *(gameswf::Self **)(v1 + 52);
      if ( *((uint8_t *)v11 + 2) != 0 )
        goto LABEL_8;
      v4 = (*(uint16_t *)v11)-- == 1;
      if ( v4 )
        gameswf::free_internal(v11);
      *(uint32_t *)(v1 + 52) = 0;
      *(uint32_t *)(v1 + 56) = 0;
    }
    if ( *(uint32_t *)(v1 + 48) == -1 )
      goto LABEL_28;
LABEL_8:
    v5 = *((uint8_t *)self + 12);
    if ( v5 == -1 )
    {
      if ( *((uint32_t *)self + 4) - 1 <= 0 )
        goto LABEL_28;
    }
    else if ( v5 - 1 <= 0 )
    {
LABEL_28:
      result = *((uint32_t *)self + 2);
      goto LABEL_19;
    }
    if ( v5 == -1 )
      s = *((const char **)self + 6);
    else
      s = (char *)self + 13;
    Target = (gameswf::RefCounted::Self *)gameswf::RenderFX::findTarget(*(gameswf::RenderFX::Self **)self, s, nullptr);
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(Target);
    if ( Target != nullptr )
    {
      WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(Target);
      v9 = *((gameswf::Self **)self + 1);
      if ( WeakProxy != v9 )
      {
        if ( v9 != nullptr )
        {
          v4 = (*(uint16_t *)v9)-- == 1;
          if ( v4 )
          {
            v13 = WeakProxy;
            gameswf::free_internal(v9);
            WeakProxy = v13;
          }
        }
        *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(WeakProxy);
        if ( WeakProxy != nullptr )
        {
          ++*(uint16_t *)WeakProxy;
          result = *((uint32_t *)self + 2);
          goto LABEL_19;
        }
      }
    }
    else
    {
      v12 = *((gameswf::Self **)self + 1);
      result = 0;
      if ( v12 == nullptr )
        return result;
      v4 = (*(uint16_t *)v12)-- == 1;
      if ( v4 )
        gameswf::free_internal(v12);
      *((uint32_t *)self + 1) = 0;
    }
    result = *((uint32_t *)self + 2);
    goto LABEL_19;
  }
  result = *((uint32_t *)self + 2);
LABEL_19:
  if ( result != 0 )
  {
    v10 = *((gameswf::Self **)self + 1);
    if ( *((uint8_t *)v10 + 2) == 0 )
    {
      v4 = (*(uint16_t *)v10)-- == 1;
      if ( v4 )
        gameswf::free_internal(v10);
      *((uint32_t *)self + 1) = 0;
      *((uint32_t *)self + 2) = 0;
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::toASValue  (binary VA: 0x10833d0)
// Original: gameswf::CharacterHandle::toASValue
// ----------------------------------------------------------------------------
gameswf::CharacterHandle::Self * gameswf::CharacterHandle::toASValue(gameswf::CharacterHandle::Self *self, gameswf::CharacterHandle::Self *a2)
{
  gameswf::RefCounted::Self *Character;

  Character = (gameswf::RefCounted::Self *)gameswf::CharacterHandle::getCharacter(a2);
  *(uint8_t *)self = 5;
  *((uint8_t *)self + 1) = 0;
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(Character);
  if ( Character != nullptr )
    gameswf::RefCounted::addRef(Character);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::isTextField  (binary VA: 0x1083420)
// Original: gameswf::CharacterHandle::isTextField
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::isTextField(gameswf::CharacterHandle::Self *self)
{
  int Character;
  int result;

  Character = gameswf::CharacterHandle::getCharacter(self);
  result = 0;
  if ( Character != 0 )
    return G4_VCALL<int>(Character, 8, 37);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::isSprite  (binary VA: 0x1083460)
// Original: gameswf::CharacterHandle::isSprite
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::isSprite(gameswf::CharacterHandle::Self *self)
{
  int Character;
  int result;

  Character = gameswf::CharacterHandle::getCharacter(self);
  result = 0;
  if ( Character != 0 )
    return G4_VCALL<int>(Character, 8, 2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::isValid  (binary VA: 0x10834a0)
// Original: gameswf::CharacterHandle::isValid
// ----------------------------------------------------------------------------
bool gameswf::CharacterHandle::isValid(gameswf::CharacterHandle::Self *self)
{
  return gameswf::CharacterHandle::getCharacter(self) != 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::opLt  (binary VA: 0x10834d0)
// Original: gameswf::CharacterHandle::operator<
// ----------------------------------------------------------------------------
bool gameswf::CharacterHandle::opLt(gameswf::CharacterHandle::Self *self, const gameswf::CharacterHandle::Self *a2)
{
  int Character;

  Character = gameswf::CharacterHandle::getCharacter(self);
  return Character < gameswf::CharacterHandle::getCharacter(a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::opNe  (binary VA: 0x1083520)
// Original: gameswf::CharacterHandle::operator!=
// ----------------------------------------------------------------------------
bool gameswf::CharacterHandle::opNe(gameswf::CharacterHandle::Self *self, const gameswf::CharacterHandle::Self *a2)
{
  int Character;

  Character = gameswf::CharacterHandle::getCharacter(self);
  return Character != gameswf::CharacterHandle::getCharacter(a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::opNe  (binary VA: 0x1083570)
// Original: gameswf::CharacterHandle::operator!=
// ----------------------------------------------------------------------------
bool gameswf::CharacterHandle::opNe(gameswf::CharacterHandle::Self *self, const gameswf::Character::Self *a2)
{
  return gameswf::CharacterHandle::getCharacter(self) != (uint32_t)(uintptr_t)(a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::opEq  (binary VA: 0x10835a0)
// Original: gameswf::CharacterHandle::operator==
// ----------------------------------------------------------------------------
bool gameswf::CharacterHandle::opEq(gameswf::CharacterHandle::Self *self, const gameswf::CharacterHandle::Self *a2)
{
  int Character;

  Character = gameswf::CharacterHandle::getCharacter(self);
  return Character == gameswf::CharacterHandle::getCharacter(a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::opEq  (binary VA: 0x10835f0)
// Original: gameswf::CharacterHandle::operator==
// ----------------------------------------------------------------------------
bool gameswf::CharacterHandle::opEq(gameswf::CharacterHandle::Self *self, const gameswf::Character::Self *a2)
{
  return gameswf::CharacterHandle::getCharacter(self) == (uint32_t)(uintptr_t)(a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::opAssign  (binary VA: 0x1083620)
// Original: gameswf::CharacterHandle::operator=
// ----------------------------------------------------------------------------
void gameswf::CharacterHandle::opAssign(gameswf::CharacterHandle::Self *a1, gameswf::Self **a2)
{
  gameswf::CharacterHandle::Self *v2;
  gameswf::RefCounted::Self *Character;
  gameswf::Self *WeakProxy;
  gameswf::Self *v5;
  bool v6;
  char v7;
  int v8;
  gameswf::Self *v9;
  char *v10;
  gameswf::Self *v11;
  int v12;
  char v13;
  gameswf::Self *v14;
  int v15;
  int v16;
  int v17;
  gameswf::Self *v18;
  gameswf::Self *v19;
  gameswf::Self *v20;

  v2 = (gameswf::CharacterHandle::Self *)a2;
  if ( a2 != (gameswf::Self **)a1 )
  {
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(*a2);
    Character = (gameswf::RefCounted::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)a2);
    *((uint32_t *)a1 + 2) = (uint32_t)(uintptr_t)(Character);
    if ( Character != nullptr )
    {
      WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(Character);
      v5 = *((gameswf::Self **)a1 + 1);
      if ( WeakProxy != v5 )
      {
        if ( v5 != nullptr )
        {
          v6 = (*(uint16_t *)v5)-- == 1;
          if ( v6 )
          {
            v19 = WeakProxy;
            gameswf::free_internal(v5);
            WeakProxy = v19;
          }
        }
        *((uint32_t *)a1 + 1) = (uint32_t)(uintptr_t)(WeakProxy);
        if ( WeakProxy != nullptr )
          ++*(uint16_t *)WeakProxy;
      }
    }
    else
    {
      v18 = *((gameswf::Self **)a1 + 1);
      if ( v18 != nullptr )
      {
        v6 = (*(uint16_t *)v18)-- == 1;
        if ( v6 )
          gameswf::free_internal(v18);
        *((uint32_t *)a1 + 1) = 0;
      }
    }
    if ( (gameswf::Self **)((char *)a1 + 12) != a2 + 3 )
    {
      v7 = *((uint8_t *)a2 + 12);
      if ( v7 == -1 )
        v8 = (int)(uintptr_t)(a2[4]) - 1;
      else
        v8 = v7 - 1;
      gameswf::String::resize((gameswf::CharacterHandle::Self *)((char *)a1 + 12), v8);
      v9 = (gameswf::Self *)((char *)a2 + 13);
      if ( *((uint8_t *)a2 + 12) == 0xFF )
        v9 = a2[6];
      LOBYTE(v10) = *((uint8_t *)a1 + 12);
      if ( (uint8_t)(uintptr_t)v10 == 0xFF )
      {
        v10 = *((char **)a1 + 4);
        v11 = *((gameswf::Self **)a1 + 6);
      }
      else
      {
        v10 = (char *)(char)(uintptr_t)v10;
        v11 = (gameswf::Self *)((gameswf::CharacterHandle::Self *)((char *)a1 + 13));
      }
      gameswf::Strcpy_s(v11, v10, v9);
      v20 = a2[7];
      if ( (uint8_t *)((unsigned int)(uintptr_t)(v20) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        v13 = *((uint8_t *)a2 + 12);
        if ( v13 == -1 )
        {
          v14 = a2[6];
          v15 = (int)(uintptr_t)(a2[4]) - 1;
        }
        else
        {
          v14 = (gameswf::Self *)((char *)a2 + 13);
          v15 = v13 - 1;
        }
        v12 = 5381;
        if ( v15 > 0 )
        {
          do
          {
            --v15;
            v16 = 33 * v12;
            v17 = *((uint8_t *)v14 + v15) + 32;
            if ( (uint8_t)(*((uint8_t *)v14 + v15) - 65) > 0x19u )
              v17 = *((uint8_t *)v14 + v15);
            v12 = v16 ^ v17;
          }
          while ( v15 != 0 );
          v2 = (gameswf::CharacterHandle::Self *)a2;
          v12 = v12 << 9 >> 9;
        }
        *((uint32_t *)v2 + 7) = v12 & 0x7FFFFF | (unsigned int)(uintptr_t)(v20) & 0xFF800000;
      }
      else
      {
        v12 = (int)((uint32_t)(uintptr_t)(v20) << 9) >> 9;
      }
      *((uint32_t *)a1 + 7) = v12 & 0x7FFFFF | *((uint32_t *)a1 + 7) & 0xFF800000;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getName  (binary VA: 0x1083830)
// Original: gameswf::CharacterHandle::getName
// ----------------------------------------------------------------------------
char * gameswf::CharacterHandle::getName(gameswf::CharacterHandle::Self *self)
{
  int Character;
  char *v2;

  Character = gameswf::CharacterHandle::getCharacter(self);
  v2 = (char *)(&byte_20E2EC0);
  if ( Character != 0 )
    return *(char **)(Character + 60);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getTarget  (binary VA: 0x1083870)
// Original: gameswf::CharacterHandle::getTarget
// ----------------------------------------------------------------------------
gameswf::CharacterHandle::Self * gameswf::CharacterHandle::getTarget(gameswf::CharacterHandle::Self *self, gameswf::CharacterHandle::Self *a2)
{
  int Character;
  int v4;

  Character = gameswf::CharacterHandle::getCharacter(a2);
  if ( Character != 0 )
  {
    gameswf::Character::getTarget(self, Character);
  }
  else
  {
    v4 = *((uint32_t *)self + 4);
    *(uint8_t *)self = 1;
    v4 |= 0x7FFFFFu;
    *((uint8_t *)self + 1) = 0;
    *((uint32_t *)self + 4) = v4;
    *((uint8_t *)self + 18) = BYTE2(v4) & 0x7F;
    *((uint8_t *)self + 19) = HIBYTE(v4) | 1;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getParent  (binary VA: 0x10838f0)
// Original: gameswf::CharacterHandle::getParent
// ----------------------------------------------------------------------------
gameswf::CharacterHandle::Self * gameswf::CharacterHandle::getParent(gameswf::CharacterHandle::Self *self, gameswf::CharacterHandle::Self *a2)
{
  int Character;
  gameswf::Character::Self *v3;
  gameswf::Self *v4;
  int v7;

  Character = gameswf::CharacterHandle::getCharacter(a2);
  v3 = nullptr;
  if ( Character != 0 )
  {
    v3 = *(gameswf::Character::Self **)(Character + 56);
    if ( v3 != nullptr )
    {
      v4 = *(gameswf::Self **)(Character + 52);
      if ( *((uint8_t *)v4 + 2) == 0 )
      {
        if ( (*(uint16_t *)v4)-- == 1 )
        {
          v7 = Character;
          gameswf::free_internal(v4);
          Character = v7;
        }
        *(uint32_t *)(Character + 52) = 0;
        *(uint32_t *)(Character + 56) = 0;
        v3 = nullptr;
      }
    }
  }
  gameswf::CharacterHandle::Construct(self, v3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getChildren  (binary VA: 0x1083990)
// Original: gameswf::CharacterHandle::getChildren
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::getChildren(gameswf::CharacterHandle::Self *a1, gameswf::Self **a2)
{
  int Character;
  bool v3;
  int v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int result;
  char *v10;
  char *v11;
  gameswf::Self *v12;
  char *v13;
  uint16_t *v14;
  int v15;
  char v16;
  int v17;
  char *v18;
  gameswf::Self *v19;
  gameswf::Self *v20;
  int v21;
  unsigned int v22;
  int v23;
  uint8_t *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  gameswf::CharacterHandle::Self *v29;
  typedef char *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef char *_g4_t_v34;
  typedef uint8_t _g4_t_v35[13];
  typedef uint8_t _g4_t_v36[15];
  typedef unsigned int _g4_t_v37;
  typedef char _g4_t_v38;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v30)) > _g4_s0 ? (4u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v31)) > _g4_s1 ? (12u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v32)) > _g4_s2 ? (16u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v33)) > _g4_s3 ? (20u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v34)) > _g4_s4 ? (24u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v35)) > _g4_s5 ? (32u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (45u + sizeof(_g4_t_v36)) > _g4_s6 ? (45u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v37)) > _g4_s7 ? (60u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v38)) > _g4_s8 ? (64u + sizeof(_g4_t_v38)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 45u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);

  Character = gameswf::CharacterHandle::getCharacter(a1);
  v31 = Character;
  if ( Character != 0 )
  {
    v3 = G4_VCALL<uint8_t>(Character, 8, 2) == 0;
    v4 = 0;
    if ( !v3 )
      v4 = v31;
    v31 = v4;
  }
  v5 = (int)(uintptr_t)(a2[1]);
  if ( v5 <= 0 )
  {
    if ( v5 < 0 )
    {
      v28 = 36 * v5;
      do
      {
        v29 = (gameswf::CharacterHandle::Self *)((gameswf::Self *)((char *)*a2 + v28));
        if ( v29 != nullptr )
          gameswf::CharacterHandle::Construct(v29, nullptr);
        v28 += 36;
        ++v5;
      }
      while ( v5 != 0 );
    }
  }
  else
  {
    v34 = (char *)a2[1];
    v6 = nullptr;
    v7 = 0;
    do
    {
      v8 = v7;
      ++v6;
      v7 += 36;
      gameswf::CharacterHandle::Destroy((gameswf::Self **)((char *)*a2 + v8));
    }
    while ( v6 != v34 );
  }
  result = v31;
  a2[1] = nullptr;
  if ( v31 != 0 )
  {
    result = v31;
    if ( *(int *)(v31 + 216) > 0 )
    {
      v33 = 0;
      do
      {
        gameswf::CharacterHandle::Construct(
          (gameswf::CharacterHandle::Self *)v35,
          *(gameswf::Character::Self **)(*(uint32_t *)(v31 + 212) + 4 * v33));
        v10 = (char *)a2[1];
        v11 = (char *)a2[2];
        v32 = (int)(uintptr_t)(v10 + 1);
        if ( (int)(uintptr_t)(v10 + 1) <= (int)(uintptr_t)(v11) || a2[3] != nullptr )
        {
          v12 = *a2;
        }
        else
        {
          v23 = v32 + (v32 >> 1);
          a2[2] = (gameswf::Self *)v23;
          if ( v23 != 0 )
          {
            if ( *a2 != nullptr )
              v12 = (gameswf::Self *)gameswf::realloc_internal(*a2, 36 * v23, 36 * (uint32_t)(uintptr_t)(v11));
            else
              v12 = (gameswf::Self *)gameswf::malloc_internal(36 * v23);
            *a2 = v12;
            v10 = (char *)a2[1];
          }
          else
          {
            if ( *a2 != nullptr )
            {
              gameswf::free_internal(*a2);
              v10 = (char *)a2[1];
            }
            v12 = nullptr;
            *a2 = nullptr;
          }
        }
        v13 = (char *)v12 + 36 * (uint32_t)(uintptr_t)(v10);
        if ( v13 != nullptr )
        {
          *(uint32_t *)v13 = *(uint32_t *)v35;
          v14 = *(uint16_t **)&v35[4];
          v3 = *(uint32_t *)&v35[4] == 0;
          *((uint32_t *)v13 + 1) = *(uint32_t *)&v35[4];
          if ( !v3 )
            ++*v14;
          v15 = *(uint32_t *)&v35[8];
          v13[12] = 1;
          *((uint32_t *)v13 + 2) = v15;
          v16 = v35[12];
          v13[13] = 0;
          if ( v16 == -1 )
            v17 = *(uint32_t *)&v36[3] - 1;
          else
            v17 = v16 - 1;
          gameswf::String::resize((gameswf::String::Self *)(v13 + 12), v17);
          LOBYTE(v18) = v13[12];
          v19 = (gameswf::Self *)v36;
          if ( v35[12] == 0xFF )
            v19 = *(gameswf::Self **)&v36[11];
          if ( (uint8_t)(uintptr_t)v18 == 0xFF )
          {
            v18 = *((char **)v13 + 4);
            v20 = *((gameswf::Self **)v13 + 6);
          }
          else
          {
            v18 = (char *)(char)(uintptr_t)v18;
            v20 = (gameswf::Self *)(v13 + 13);
          }
          gameswf::Strcpy_s(v20, v18, v19);
          if ( (uint8_t *)(v37 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
          {
            if ( v35[12] == 0xFF )
            {
              v24 = *(uint8_t **)&v36[11];
              v25 = *(uint32_t *)&v36[3] - 1;
            }
            else
            {
              v24 = v36;
              v25 = v35[12] - 1;
            }
            v21 = 5381;
            if ( v25 > 0 )
            {
              v30 = v13;
              do
              {
                --v25;
                v26 = 33 * v21;
                v27 = (uint8_t)v24[v25] + 32;
                if ( (uint8_t)(v24[v25] - 65) > 0x19u )
                  v27 = (uint8_t)v24[v25];
                v21 = v26 ^ v27;
              }
              while ( v25 != 0 );
              v13 = v30;
              v21 = v21 << 9 >> 9;
            }
            v37 = v21 & 0x7FFFFF | v37 & 0xFF800000;
          }
          else
          {
            v21 = (int)(v37 << 9) >> 9;
          }
          v22 = v21 & 0x7FFFFF | *((uint32_t *)v13 + 7) & 0xFF800000;
          *((uint32_t *)v13 + 7) = v22;
          v13[30] = BYTE2(v22) & 0x7F;
          v13[31] = HIBYTE(v22) | 1;
          v13[32] = v38;
        }
        a2[1] = (gameswf::Self *)v32;
        gameswf::CharacterHandle::Destroy((gameswf::Self **)v35);
        result = v31;
        ++v33;
      }
      while ( v33 < *(uint32_t *)(v31 + 216) );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::addChild  (binary VA: 0x1083d30)
// Original: gameswf::CharacterHandle::addChild
// ----------------------------------------------------------------------------
gameswf::ASDisplayObjectContainer::Self * gameswf::CharacterHandle::addChild(gameswf::CharacterHandle::Self *a1, gameswf::CharacterHandle::Self *a2)
{
  gameswf::ASDisplayObjectContainer::Self *result;
  gameswf::ASDisplayObjectContainer::Self *v3;
  gameswf::Character::Self *Character;

  result = (gameswf::ASDisplayObjectContainer::Self *)gameswf::CharacterHandle::getCharacter(a1);
  v3 = result;
  if ( result != nullptr )
  {
    result = (gameswf::ASDisplayObjectContainer::Self *)G4_VCALL<int>(result, 8, 4);
    if ( (uint8_t)(uintptr_t)result != 0 )
    {
      Character = (gameswf::Character::Self *)gameswf::CharacterHandle::getCharacter(a2);
      return (gameswf::ASDisplayObjectContainer::Self *)gameswf::ASDisplayObjectContainer::addChild(v3, Character);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::removeChild  (binary VA: 0x1083da0)
// Original: gameswf::CharacterHandle::removeChild
// ----------------------------------------------------------------------------
gameswf::ASDisplayObjectContainer::Self * gameswf::CharacterHandle::removeChild(gameswf::CharacterHandle::Self *a1, gameswf::CharacterHandle::Self *a2)
{
  gameswf::ASDisplayObjectContainer::Self *result;
  gameswf::ASDisplayObjectContainer::Self *v3;
  gameswf::Character::Self *Character;

  result = (gameswf::ASDisplayObjectContainer::Self *)gameswf::CharacterHandle::getCharacter(a1);
  v3 = result;
  if ( result != nullptr )
  {
    result = (gameswf::ASDisplayObjectContainer::Self *)G4_VCALL<int>(result, 8, 4);
    if ( (uint8_t)(uintptr_t)result != 0 )
    {
      Character = (gameswf::Character::Self *)gameswf::CharacterHandle::getCharacter(a2);
      return (gameswf::ASDisplayObjectContainer::Self *)gameswf::ASDisplayObjectContainer::removeChild(v3, Character);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::setMember  (binary VA: 0x1083e10)
// Original: gameswf::CharacterHandle::setMember
// ----------------------------------------------------------------------------
gameswf::ASObject::Self * gameswf::CharacterHandle::setMember(gameswf::CharacterHandle::Self *self, const gameswf::String::Self *a2, const gameswf::ASValue::Self *a3)
{
  gameswf::ASObject::Self *result;
  gameswf::ASObject::Self *v4;
  int MemberIndex;

  result = (gameswf::ASObject::Self *)gameswf::CharacterHandle::getCharacter(self);
  v4 = result;
  if ( result != nullptr )
  {
    MemberIndex = gameswf::ASObject::getMemberIndex(result, a2);
    return (gameswf::ASObject::Self *)gameswf::ASObject::setMemberAt(v4, MemberIndex, a2, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getMember  (binary VA: 0x1083e80)
// Original: gameswf::CharacterHandle::getMember
// ----------------------------------------------------------------------------
gameswf::CharacterHandle::Self * gameswf::CharacterHandle::getMember(gameswf::CharacterHandle::Self *self, const gameswf::String::Self *a2, gameswf::String::Self *a3)
{
  gameswf::ASObject::Self *Character;
  gameswf::ASObject::Self *v4;
  int MemberIndex;

  Character = (gameswf::ASObject::Self *)gameswf::CharacterHandle::getCharacter(a2);
  v4 = Character;
  *(uint8_t *)self = 0;
  *((uint8_t *)self + 1) = 0;
  if ( Character != nullptr )
  {
    MemberIndex = gameswf::ASObject::getMemberIndex(Character, a3);
    gameswf::ASObject::getMemberAt(v4, MemberIndex, a3, self);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::setLocalVariable  (binary VA: 0x1083f00)
// Original: gameswf::CharacterHandle::setLocalVariable
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::setLocalVariable(gameswf::CharacterHandle::Self *self, char *s, const gameswf::ASValue::Self *a3)
{
  int result;
  int v4;
  gameswf::Self *v5;
  gameswf::ASEnvironment::Self *v6;
  typedef size_t _g4_t_v7;
  typedef char _g4_t_v8;
  typedef char _g4_t_v9;
  typedef gameswf::Self *_g4_t_v10;
  typedef int16_t _g4_t_v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (17u + sizeof(_g4_t_v9)) > _g4_s2 ? (17u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v10)) > _g4_s3 ? (28u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v11)) > _g4_s4 ? (32u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (34u + sizeof(_g4_t_v12)) > _g4_s5 ? (34u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (35u + sizeof(_g4_t_v13)) > _g4_s6 ? (35u + sizeof(_g4_t_v13)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 17u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 34u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 35u);

  result = gameswf::CharacterHandle::getCharacter(self);
  v4 = result;
  if ( result != 0 )
  {
    result = G4_VCALL<int>(result, 8, 2);
    if ( (uint8_t)result != 0 )
    {
      v8 = 1;
      v9 = 0;
      if ( s != nullptr )
      {
        v7 = strlen(s);
        gameswf::String::resize((gameswf::String::Self *)&v8, v7);
        v5 = (gameswf::Self *)&v9;
        if ( v8 == -1 )
          v5 = v10;
        gameswf::Strcpy_s(v5, (char *)(v7 + 1), (gameswf::Self *)s);
      }
      v11 = -1;
      v12 = 127;
      v13 |= 1u;
      v6 = (gameswf::ASEnvironment::Self *)G4_VCALL<int>(v4, 92);
      result = gameswf::ASEnvironment::setLocal(v6, (const gameswf::String::Self *)&v8, a3);
      if ( v8 == -1 && (v13 & 1) != 0 )
        return gameswf::free_internal(v10);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getLocalVariable  (binary VA: 0x1084030)
// Original: gameswf::CharacterHandle::getLocalVariable
// ----------------------------------------------------------------------------
gameswf::CharacterHandle::Self * gameswf::CharacterHandle::getLocalVariable(gameswf::CharacterHandle::Self *self, gameswf::CharacterHandle::Self *a2, char *a3)
{
  gameswf::CharacterHandle::Self *v3;
  int Character;
  int v5;
  gameswf::Self *v6;
  int v7;
  gameswf::Self **v8;
  int i;
  gameswf::RefCounted::Self *v10;
  int v12;
  uint32_t *v13;
  typedef gameswf::Self **_g4_t_v14;
  typedef size_t _g4_t_v15;
  typedef int _g4_t_v16;
  typedef char *_g4_t_s;
  typedef gameswf::Self *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef gameswf::Self *_g4_t_v24;
  typedef int16_t _g4_t_v25;
  typedef char _g4_t_v26;
  typedef char _g4_t_v27;
  typedef gameswf::CharacterHandle::Self **_g4_t_v28;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v16)) > _g4_s2 ? (4u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_s)) > _g4_s3 ? (12u + sizeof(_g4_t_s)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v18)) > _g4_s4 ? (16u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v19)) > _g4_s5 ? (20u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v20)) > _g4_s6 ? (24u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v21)) > _g4_s7 ? (28u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v22)) > _g4_s8 ? (32u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (33u + sizeof(_g4_t_v23)) > _g4_s9 ? (33u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v24)) > _g4_s10 ? (44u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v25)) > _g4_s11 ? (48u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (50u + sizeof(_g4_t_v26)) > _g4_s12 ? (50u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (51u + sizeof(_g4_t_v27)) > _g4_s13 ? (51u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v28)) > _g4_s14 ? (72u + sizeof(_g4_t_v28)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 33u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 50u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 51u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 72u);

  v28 = &self;
  v3 = self;
  s = a3;
  Character = gameswf::CharacterHandle::getCharacter(a2);
  v5 = Character;
  if ( Character != 0 && G4_VCALL<uint8_t>(Character, 8, 2) != 0 )
  {
    v18 = nullptr;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 1;
    v23 = 0;
    if ( s != nullptr )
    {
      v15 = strlen(s);
      gameswf::String::resize((gameswf::String::Self *)&v22, v15);
      v6 = (gameswf::Self *)&v23;
      if ( v22 == -1 )
        v6 = v24;
      gameswf::Strcpy_s(v6, (char *)(v15 + 1), (gameswf::Self *)s);
    }
    v25 = -1;
    v26 = 127;
    v27 |= 1u;
    G4_VCALL<void>(v5, 92);
    gameswf::ASEnvironment::getVariable(v3);
    v7 = v19;
    v8 = &v18;
    if ( v22 == -1 )
    {
      if ( (v27 & 1) != 0 )
      {
        gameswf::free_internal(v24);
        v8 = &v18;
      }
      v7 = v19;
    }
    if ( v7 <= 0 )
    {
      if ( v7 < 0 )
      {
        v12 = 8 * v7;
        do
        {
          v13 = (uint32_t *)((char *)v18 + v12);
          if ( (gameswf::Self *)((char *)v18 + v12) != nullptr )
          {
            *v13 = 0;
            v13[1] = 0;
          }
          v12 += 8;
          ++v7;
        }
        while ( v7 != 0 );
      }
    }
    else
    {
      for ( i = 0; i != v7; ++i )
      {
        v10 = *((gameswf::RefCounted::Self **)*v8 + 2 * i);
        if ( v10 != nullptr )
        {
          v16 = i;
          v14 = v8;
          gameswf::RefCounted::dropRef(v10);
          v8 = v14;
          i = v16;
        }
      }
    }
  }
  else
  {
    v18 = nullptr;
    v20 = 0;
    v21 = 0;
    *(uint8_t *)v3 = 0;
    *((uint8_t *)v3 + 1) = 0;
  }
  v19 = 0;
  if ( v21 == 0 )
  {
    v20 = 0;
    if ( v18 != nullptr )
      gameswf::free_internal(v18);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::invokeMethod  (binary VA: 0x1084250)
// Original: gameswf::CharacterHandle::invokeMethod
// ----------------------------------------------------------------------------
gameswf::CharacterHandle::Self * gameswf::CharacterHandle::invokeMethod(gameswf::CharacterHandle::Self *self, gameswf::CharacterHandle::Self *a2, const gameswf::ASValue::Self *a3, gameswf::ASValue::Self *a4, unsigned int a5)
{
  gameswf::RefCounted::Self *Character;

  Character = (gameswf::RefCounted::Self *)gameswf::CharacterHandle::getCharacter(a2);
  if ( Character != nullptr )
  {
    gameswf::Character::invokeMethod(self, Character, a3, a4, a5);
  }
  else
  {
    *(uint8_t *)self = 0;
    *((uint8_t *)self + 1) = 0;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::registerDisplayCallback  (binary VA: 0x10842d0)
// Original: gameswf::CharacterHandle::registerDisplayCallback
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::registerDisplayCallback(gameswf::CharacterHandle::Self *a1, int a2, int a3)
{
  int result;

  result = gameswf::CharacterHandle::getCharacter(a1);
  if ( result != 0 )
    return G4_VCALL<int>(result, 336, a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::attachSceneNode  (binary VA: 0x1084320)
// Original: gameswf::CharacterHandle::attachSceneNode
// ----------------------------------------------------------------------------
char * gameswf::CharacterHandle::attachSceneNode(gameswf::CharacterHandle::Self *a1, char *a2, int a3)
{
  char *result;

  result = (char *)gameswf::CharacterHandle::getCharacter(a1);
  if ( result != nullptr )
    return gameswf::Character::attachSceneNode((int)(uintptr_t)(result), a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::detachSceneNode  (binary VA: 0x1084360)
// Original: gameswf::CharacterHandle::detachSceneNode
// ----------------------------------------------------------------------------
gameswf::Character::Self * gameswf::CharacterHandle::detachSceneNode(gameswf::CharacterHandle::Self *self)
{
  gameswf::Character::Self *result;

  result = (gameswf::Character::Self *)gameswf::CharacterHandle::getCharacter(self);
  if ( result != nullptr )
    return (gameswf::Character::Self *)gameswf::Character::detachSceneNode(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::setInputEventHandler  (binary VA: 0x1084390)
// Original: gameswf::CharacterHandle::setInputEventHandler
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::setInputEventHandler(gameswf::CharacterHandle::Self *self)
{
  int result;

  result = gameswf::CharacterHandle::getCharacter(self);
  if ( result != 0 )
    *(uint8_t *)(result + 149) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::addEventListener  (binary VA: 0x10843c0)
// Original: gameswf::CharacterHandle::addEventListener
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::addEventListener(gameswf::CharacterHandle::Self *self, const gameswf::String::Self *a2, void (*a3)(const gameswf::ASNativeEventState::Self *), void *a4, bool a5, int a6)
{
  int result;
  gameswf::ASEventDispatcher::Self *v7;
  gameswf::Player::Self *v8;
  gameswf::ASFunction::Self *v9;

  result = gameswf::CharacterHandle::getCharacter(self);
  v7 = (gameswf::ASEventDispatcher::Self *)result;
  if ( result != 0 )
  {
    v8 = *(gameswf::Player::Self **)(result + 16);
    v9 = (gameswf::ASFunction::Self *)opNew(0x34u);
    gameswf::ASCppFunction::Construct(v9, v8, 0);
    *(uint32_t *)v9 = ((uint32_t)(uintptr_t)&off_208E6A8);
    *((uint32_t *)v9 + 11) = (uint32_t)(uintptr_t)(a3);
    *((uint32_t *)v9 + 12) = (uint32_t)(uintptr_t)(a4);
    return gameswf::ASEventDispatcher::addEventListener(v7, a2, v9, a5, a6, false);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::removeEventListener  (binary VA: 0x1084490)
// Original: gameswf::CharacterHandle::removeEventListener
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::removeEventListener(gameswf::CharacterHandle::Self *self, const gameswf::String::Self *a2, void (*a3)(const gameswf::ASNativeEventState::Self *), bool a4)
{
  int result;
  gameswf::ASEventDispatcher::Self *v5;
  gameswf::Player::Self *v6;
  gameswf::ASFunction::Self *v7;

  result = gameswf::CharacterHandle::getCharacter(self);
  v5 = (gameswf::ASEventDispatcher::Self *)result;
  if ( result != 0 )
  {
    v6 = *(gameswf::Player::Self **)(result + 16);
    v7 = (gameswf::ASFunction::Self *)opNew(0x34u);
    gameswf::ASCppFunction::Construct(v7, v6, 0);
    *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_208E6A8);
    *((uint32_t *)v7 + 11) = (uint32_t)(uintptr_t)(a3);
    *((uint32_t *)v7 + 12) = 0;
    return (int)(uintptr_t)(gameswf::ASEventDispatcher::removeEventListener(v5, a2, v7, a4));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::dispatchEvent  (binary VA: 0x1084550)
// Original: gameswf::CharacterHandle::dispatchEvent
// ----------------------------------------------------------------------------
uint32_t * gameswf::CharacterHandle::dispatchEvent(gameswf::CharacterHandle::Self *a1, gameswf::String::Self *a2, gameswf::Self *a3, int a4)
{
  gameswf::Self *v4;
  uint32_t *result;
  uint32_t *Event;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  char v11;
  int i;
  int StandardMemberID;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;

  v4 = a3;
  result = (uint32_t *)gameswf::CharacterHandle::getCharacter(a1);
  v14 = result;
  if ( result == nullptr )
    return result;
  Event = (uint32_t *)gameswf::AS3Engine::getEvent((gameswf::AS3Engine::Self *)(*(uint32_t *)(*(uint32_t *)a1 + 36) + 236), a2);
  if ( a4 < 0 )
  {
    a4 = 0x7FFFFFFF;
LABEL_14:
    v10 = 0;
    if ( a3 != nullptr )
    {
      v11 = *(uint8_t *)a3;
      if ( *(uint8_t *)a3 == 0xFF )
        goto LABEL_23;
LABEL_16:
      for ( i = v11 - 1; i > 0; i = *((uint32_t *)v4 + 1) - 1 )
      {
        v17 = (uint32_t *)((char *)v4 + 20);
        StandardMemberID = gameswf::getStandardMemberID(v4);
        if ( StandardMemberID == -1
          || G4_VCALL<uint8_t>(Event, 32, StandardMemberID, v17) == 0 )
        {
          G4_VCALL<void>(Event, 48, v4, v17);
        }
        ++v10;
        v4 = (gameswf::Self *)((char *)v4 + 32);
        if ( a4 <= v10 )
          break;
        v11 = *(uint8_t *)v4;
        if ( *(uint8_t *)v4 != 0xFF )
          goto LABEL_16;
LABEL_23:
        ;
      }
    }
    goto LABEL_4;
  }
  if ( a4 > 0 )
    goto LABEL_14;
LABEL_4:
  G4_VCALL<void>(v14, 104, Event);
  result = (uint32_t *)Event[3];
  if ( result != nullptr )
  {
    if ( (int)result[1] >= 0 )
    {
      v16 = Event;
      v15 = result[1];
      v7 = 0;
      v8 = 2;
      do
      {
        v9 = &result[v8];
        if ( result[v8] != -2 )
        {
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v9 + 3));
          *v9 = -2;
          v9[1] = 0;
          result = (uint32_t *)v16[3];
        }
        ++v7;
        v8 += 6;
      }
      while ( v15 >= v7 );
      Event = v16;
    }
    result = (uint32_t *)gameswf::free_internal((gameswf::Self *)result);
    Event[3] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::play  (binary VA: 0x10846e0)
// Original: gameswf::CharacterHandle::play
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::play(gameswf::CharacterHandle::Self *self)
{
  int result;
  int v2;

  result = gameswf::CharacterHandle::getCharacter(self);
  v2 = result;
  if ( result != 0 )
  {
    result = G4_VCALL<int>(result, 8, 2);
    if ( (uint8_t)result != 0 )
      return G4_VCALL<int>(v2, 156, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::stop  (binary VA: 0x1084740)
// Original: gameswf::CharacterHandle::stop
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::stop(gameswf::CharacterHandle::Self *self)
{
  int result;
  int v2;

  result = gameswf::CharacterHandle::getCharacter(self);
  v2 = result;
  if ( result != 0 )
  {
    result = G4_VCALL<int>(result, 8, 2);
    if ( (uint8_t)result != 0 )
      return G4_VCALL<int>(v2, 156, 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::gotoAndPlay  (binary VA: 0x10847a0)
// Original: gameswf::CharacterHandle::gotoAndPlay
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::gotoAndPlay(gameswf::CharacterHandle::Self *self, char *s)
{
  int Character;
  int v3;
  int v4;
  char v5;
  int v6;
  gameswf::Self *v7;
  char v8;
  typedef size_t _g4_t_v10;
  typedef char _g4_t_v11;
  typedef int (*_g4_t_v12)(int, char *);
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef gameswf::Self *_g4_t_v15;
  typedef int16_t _g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v13)) > _g4_s3 ? (16u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (17u + sizeof(_g4_t_v14)) > _g4_s4 ? (17u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v15)) > _g4_s5 ? (28u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v16)) > _g4_s6 ? (32u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (34u + sizeof(_g4_t_v17)) > _g4_s7 ? (34u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (35u + sizeof(_g4_t_v18)) > _g4_s8 ? (35u + sizeof(_g4_t_v18)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 17u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 34u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 35u);

  Character = gameswf::CharacterHandle::getCharacter(self);
  v3 = 0;
  v4 = Character;
  if ( Character != 0 )
  {
    v5 = G4_VCALL<int>(Character, 8, 2);
    v3 = 0;
    if ( v5 != 0 )
    {
      v6 = *(uint32_t *)v4;
      v13 = 1;
      v14 = 0;
      v12 = *(int (**)(int, char *))(v6 + 164);
      if ( s != nullptr )
      {
        v10 = strlen(s);
        gameswf::String::resize((gameswf::String::Self *)&v13, v10);
        v7 = (gameswf::Self *)&v14;
        if ( v13 == -1 )
          v7 = v15;
        gameswf::Strcpy_s(v7, (char *)(v10 + 1), (gameswf::Self *)s);
      }
      v16 = -1;
      v17 = 127;
      v18 |= 1u;
      v8 = v12(v4, &v13);
      if ( v13 == -1 && (v18 & 1) != 0 )
      {
        v11 = v8;
        gameswf::free_internal(v15);
        v8 = v11;
      }
      v3 = 0;
      if ( v8 != 0 )
      {
        G4_VCALL<void>(v4, 156, 0);
        return 1;
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::gotoAndStop  (binary VA: 0x10848e0)
// Original: gameswf::CharacterHandle::gotoAndStop
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::gotoAndStop(gameswf::CharacterHandle::Self *self, char *s)
{
  int Character;
  int v3;
  int v4;
  char v5;
  int v6;
  gameswf::Self *v7;
  char v8;
  typedef size_t _g4_t_v10;
  typedef char _g4_t_v11;
  typedef int (*_g4_t_v12)(int, char *);
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef gameswf::Self *_g4_t_v15;
  typedef int16_t _g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v13)) > _g4_s3 ? (16u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (17u + sizeof(_g4_t_v14)) > _g4_s4 ? (17u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v15)) > _g4_s5 ? (28u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v16)) > _g4_s6 ? (32u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (34u + sizeof(_g4_t_v17)) > _g4_s7 ? (34u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (35u + sizeof(_g4_t_v18)) > _g4_s8 ? (35u + sizeof(_g4_t_v18)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 17u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 34u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 35u);

  Character = gameswf::CharacterHandle::getCharacter(self);
  v3 = 0;
  v4 = Character;
  if ( Character != 0 )
  {
    v5 = G4_VCALL<int>(Character, 8, 2);
    v3 = 0;
    if ( v5 != 0 )
    {
      v6 = *(uint32_t *)v4;
      v13 = 1;
      v14 = 0;
      v12 = *(int (**)(int, char *))(v6 + 164);
      if ( s != nullptr )
      {
        v10 = strlen(s);
        gameswf::String::resize((gameswf::String::Self *)&v13, v10);
        v7 = (gameswf::Self *)&v14;
        if ( v13 == -1 )
          v7 = v15;
        gameswf::Strcpy_s(v7, (char *)(v10 + 1), (gameswf::Self *)s);
      }
      v16 = -1;
      v17 = 127;
      v18 |= 1u;
      v8 = v12(v4, &v13);
      if ( v13 == -1 && (v18 & 1) != 0 )
      {
        v11 = v8;
        gameswf::free_internal(v15);
        v8 = v11;
      }
      v3 = 0;
      if ( v8 != 0 )
      {
        G4_VCALL<void>(v4, 156, 1);
        return 1;
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getFrameIdFromLabel  (binary VA: 0x1084a20)
// Original: gameswf::CharacterHandle::getFrameIdFromLabel
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::getFrameIdFromLabel(gameswf::CharacterHandle::Self *self, char *s)
{
  int FrameIdFromLabel;
  int Character;
  gameswf::SpriteInstance::Self *v4;
  gameswf::Self *v5;
  typedef size_t _g4_t_v7;
  typedef char _g4_t_v8;
  typedef char _g4_t_v9;
  typedef gameswf::Self *_g4_t_v10;
  typedef int16_t _g4_t_v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (17u + sizeof(_g4_t_v9)) > _g4_s2 ? (17u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v10)) > _g4_s3 ? (28u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v11)) > _g4_s4 ? (32u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (34u + sizeof(_g4_t_v12)) > _g4_s5 ? (34u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (35u + sizeof(_g4_t_v13)) > _g4_s6 ? (35u + sizeof(_g4_t_v13)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 17u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 34u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 35u);

  FrameIdFromLabel = -1;
  Character = gameswf::CharacterHandle::getCharacter(self);
  v4 = (gameswf::SpriteInstance::Self *)Character;
  if ( Character != 0 && G4_VCALL<uint8_t>(Character, 8, 2) != 0 )
  {
    v8 = 1;
    v9 = 0;
    if ( s != nullptr )
    {
      v7 = strlen(s);
      gameswf::String::resize((gameswf::String::Self *)&v8, v7);
      v5 = (gameswf::Self *)&v9;
      if ( v8 == -1 )
        v5 = v10;
      gameswf::Strcpy_s(v5, (char *)(v7 + 1), (gameswf::Self *)s);
    }
    v11 = -1;
    v12 = 127;
    v13 |= 1u;
    FrameIdFromLabel = gameswf::SpriteInstance::getFrameIdFromLabel(v4, (const gameswf::StringI::Self *)&v8);
    if ( v8 == -1 && (v13 & 1) != 0 )
      gameswf::free_internal(v10);
  }
  return FrameIdFromLabel;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::gotoAndPlay  (binary VA: 0x1084b30)
// Original: gameswf::CharacterHandle::gotoAndPlay
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::gotoAndPlay(gameswf::CharacterHandle::Self *self, int a2)
{
  int result;
  int v3;

  result = gameswf::CharacterHandle::getCharacter(self);
  v3 = result;
  if ( result != 0 )
  {
    result = G4_VCALL<int>(result, 8, 2);
    if ( (uint8_t)result != 0 )
    {
      G4_VCALL<void>(v3, 328, a2);
      return G4_VCALL<int>(v3, 156, 0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::gotoAndStop  (binary VA: 0x1084ba0)
// Original: gameswf::CharacterHandle::gotoAndStop
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::gotoAndStop(gameswf::CharacterHandle::Self *self, int a2)
{
  int result;
  int v3;

  result = gameswf::CharacterHandle::getCharacter(self);
  v3 = result;
  if ( result != 0 )
  {
    result = G4_VCALL<int>(result, 8, 2);
    if ( (uint8_t)result != 0 )
    {
      G4_VCALL<void>(v3, 328, a2);
      return G4_VCALL<int>(v3, 156, 1);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getTotalFrames  (binary VA: 0x1084c10)
// Original: gameswf::CharacterHandle::getTotalFrames
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::getTotalFrames(gameswf::CharacterHandle::Self *self)
{
  int v1;
  int Character;
  int v3;

  v1 = 0;
  Character = gameswf::CharacterHandle::getCharacter(self);
  v3 = Character;
  if ( Character != 0 && G4_VCALL<uint8_t>(Character, 8, 2) != 0 )
    return G4_VCALL<int>(v3, 316);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getCurrentFrame  (binary VA: 0x1084c80)
// Original: gameswf::CharacterHandle::getCurrentFrame
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::getCurrentFrame(gameswf::CharacterHandle::Self *self)
{
  int v1;
  int Character;
  int v3;

  v1 = 0;
  Character = gameswf::CharacterHandle::getCharacter(self);
  v3 = Character;
  if ( Character != 0 && G4_VCALL<uint8_t>(Character, 8, 2) != 0 )
    return G4_VCALL<int>(v3, 312);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::isPlaying  (binary VA: 0x1084cf0)
// Original: gameswf::CharacterHandle::isPlaying
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::isPlaying(gameswf::CharacterHandle::Self *self)
{
  int v1;
  int Character;
  int v3;
  int v4;

  v1 = 0;
  Character = gameswf::CharacterHandle::getCharacter(self);
  v3 = Character;
  if ( Character != 0 && G4_VCALL<uint8_t>(Character, 8, 2) != 0 )
  {
    v4 = G4_VCALL<int>(v3, 160);
    LOBYTE(v4) = v4 == 0;
    return v4;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::isVisible  (binary VA: 0x1084d60)
// Original: gameswf::CharacterHandle::isVisible
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::isVisible(gameswf::CharacterHandle::Self *self)
{
  int Character;
  int v2;

  Character = gameswf::CharacterHandle::getCharacter(self);
  v2 = 0;
  if ( Character != 0 )
    return *(uint8_t *)(Character + 148);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::setVisible  (binary VA: 0x1084da0)
// Original: gameswf::CharacterHandle::setVisible
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::setVisible(gameswf::CharacterHandle::Self *self, bool a2)
{
  int result;
  gameswf::Character::Self *v3;
  gameswf::Self *v4;
  int v6;
  int v7;

  result = gameswf::CharacterHandle::getCharacter(self);
  if ( result != 0 )
  {
    if ( a2 != *(uint8_t *)(result + 148) )
    {
      v3 = *(gameswf::Character::Self **)(result + 56);
      if ( v3 != nullptr )
      {
        v4 = *(gameswf::Self **)(result + 52);
        if ( *((uint8_t *)v4 + 2) != 0 )
        {
          v6 = result;
          gameswf::Character::invalidateBitmapCache(v3);
          result = v6;
        }
        else
        {
          if ( (*(uint16_t *)v4)-- == 1 )
          {
            v7 = result;
            gameswf::free_internal(v4);
            result = v7;
          }
          *(uint32_t *)(result + 52) = 0;
          *(uint32_t *)(result + 56) = 0;
        }
      }
    }
    *(uint8_t *)(result + 148) = a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::isEnabled  (binary VA: 0x1084e50)
// Original: gameswf::CharacterHandle::isEnabled
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::isEnabled(gameswf::CharacterHandle::Self *self)
{
  int Character;
  int result;

  Character = gameswf::CharacterHandle::getCharacter(self);
  result = 0;
  if ( Character != 0 )
    return G4_VCALL<int>(Character, 368);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::setEnabled  (binary VA: 0x1084e90)
// Original: gameswf::CharacterHandle::setEnabled
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::setEnabled(gameswf::CharacterHandle::Self *self, int a2)
{
  int result;
  int v3;

  result = gameswf::CharacterHandle::getCharacter(self);
  v3 = result;
  if ( result != 0 )
  {
    result = G4_VCALL<int>(result, 8, 2);
    if ( (uint8_t)result != 0 )
    {
      *(uint8_t *)(v3 + 270) = a2;
      return a2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getDepth  (binary VA: 0x1084ef0)
// Original: gameswf::CharacterHandle::getDepth
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::getDepth(gameswf::CharacterHandle::Self *self)
{
  int Character;
  int v2;

  Character = gameswf::CharacterHandle::getCharacter(self);
  v2 = 0;
  if ( Character != 0 )
    return *(uint16_t *)(Character + 140);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getHighestDepth  (binary VA: 0x1084f30)
// Original: gameswf::CharacterHandle::getHighestDepth
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::getHighestDepth(gameswf::CharacterHandle::Self *self)
{
  int v1;
  int Character;
  gameswf::SpriteInstance::Self *v3;

  v1 = 0;
  Character = gameswf::CharacterHandle::getCharacter(self);
  v3 = (gameswf::SpriteInstance::Self *)Character;
  if ( Character != 0 && G4_VCALL<uint8_t>(Character, 8, 2) != 0 )
    return gameswf::SpriteInstance::getHighestDepth(v3);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::swapDepths  (binary VA: 0x1084f90)
// Original: gameswf::CharacterHandle::swapDepths
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::swapDepths(gameswf::CharacterHandle::Self *self, int a2)
{
  int result;
  int v3;
  int v4;
  int v5;
  gameswf::Character::Self *CharacterAtDepth;
  gameswf::Character::Self *v7;
  gameswf::DisplayList::Self *v9;

  result = gameswf::CharacterHandle::getCharacter(self);
  v3 = result;
  if ( result != 0 )
  {
    result = G4_VCALL<int>(result, 8, 2);
    if ( (uint8_t)result != 0 )
    {
      v4 = a2 + 0x4000;
      result = *(uint16_t *)(v3 + 140);
      if ( result != a2 + 0x4000 )
      {
        v5 = *(uint32_t *)(v3 + 56);
        if ( v5 != 0 )
        {
          result = *(uint32_t *)(v3 + 52);
          if ( *(uint8_t *)(result + 2) != 0 )
          {
            result = G4_VCALL<int>(v5, 8, 2);
            if ( (uint8_t)result != 0 )
            {
              v9 = (gameswf::DisplayList::Self *)(v5 + 212);
              CharacterAtDepth = (gameswf::Character::Self *)gameswf::DisplayList::getCharacterAtDepth(
                                                         (gameswf::DisplayList::Self *)(v5 + 212),
                                                         v4);
              v7 = CharacterAtDepth;
              if ( CharacterAtDepth != nullptr )
              {
                result = G4_VCALL<int>(CharacterAtDepth, 8, 2);
                if ( (uint8_t)result != 0 )
                {
                  *((uint16_t *)v7 + 70) = *(uint16_t *)(v3 + 140);
                  *(uint16_t *)(v3 + 140) = v4;
                  return gameswf::DisplayList::swap_characters(v9, (gameswf::Character::Self *)v3, v7);
                }
              }
              else
              {
                return gameswf::DisplayList::change_character_depth(v9, (gameswf::Character::Self *)v3, v4);
              }
            }
          }
          else
          {
            if ( (*(uint16_t *)result)-- == 1 )
              result = gameswf::free_internal((gameswf::Self *)result);
            *(uint32_t *)(v3 + 52) = 0;
            *(uint32_t *)(v3 + 56) = 0;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getMatrix  (binary VA: 0x10850e0)
// Original: gameswf::CharacterHandle::getMatrix
// ----------------------------------------------------------------------------
gameswf::CharacterHandle::Self * gameswf::CharacterHandle::getMatrix(gameswf::CharacterHandle::Self *self, gameswf::CharacterHandle::Self *a2)
{
  int Character;
  uint32_t *v3;
  int v4;
  int v5;

  Character = gameswf::CharacterHandle::getCharacter(a2);
  if ( Character != 0 )
  {
    v3 = *(uint32_t **)(Character + 68);
    *(uint32_t *)self = *v3;
    *((uint32_t *)self + 1) = v3[1];
    *((uint32_t *)self + 2) = v3[2];
    *((uint32_t *)self + 3) = v3[3];
    v4 = v3[4];
    v5 = v3[5];
    *((uint32_t *)self + 4) = v4;
    *((uint32_t *)self + 5) = v5;
  }
  else
  {
    memset(self, 0, 0x18u);
    *(uint32_t *)self = 1065353216;
    *((uint32_t *)self + 4) = 1065353216;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getRotation  (binary VA: 0x1085170)
// Original: gameswf::CharacterHandle::getRotation
// ----------------------------------------------------------------------------
void gameswf::CharacterHandle::getRotation(gameswf::CharacterHandle::Self *self)
{
  uint8_t v1[28];

  gameswf::CharacterHandle::getMatrix((gameswf::CharacterHandle::Self *)v1, self);
  gameswf::Matrix::getRotation((gameswf::Matrix::Self *)v1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getPosition  (binary VA: 0x10851c0)
// Original: gameswf::CharacterHandle::getPosition
// ----------------------------------------------------------------------------
gameswf::CharacterHandle::Self * gameswf::CharacterHandle::getPosition(gameswf::CharacterHandle::Self *self, gameswf::CharacterHandle::Self *a2)
{
  typedef uint8_t _g4_t_v3[8];
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v4)) > _g4_s1 ? (16u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v5)) > _g4_s2 ? (28u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);

  gameswf::CharacterHandle::getMatrix((gameswf::CharacterHandle::Self *)v3, a2);
  *(uint32_t *)self = v4;
  *((uint32_t *)self + 1) = v5;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getWorldMatrix  (binary VA: 0x1085220)
// Original: gameswf::CharacterHandle::getWorldMatrix
// ----------------------------------------------------------------------------
gameswf::CharacterHandle::Self * gameswf::CharacterHandle::getWorldMatrix(gameswf::CharacterHandle::Self *self, gameswf::CharacterHandle::Self *a2)
{
  gameswf::Character::Self *Character;
  char *WorldMatrix;
  int v4;
  int v5;

  Character = (gameswf::Character::Self *)gameswf::CharacterHandle::getCharacter(a2);
  if ( Character != nullptr )
  {
    WorldMatrix = gameswf::Character::getWorldMatrix(Character);
    *(uint32_t *)self = *(uint32_t *)WorldMatrix;
    *((uint32_t *)self + 1) = *((uint32_t *)WorldMatrix + 1);
    *((uint32_t *)self + 2) = *((uint32_t *)WorldMatrix + 2);
    *((uint32_t *)self + 3) = *((uint32_t *)WorldMatrix + 3);
    v4 = *((uint32_t *)WorldMatrix + 4);
    v5 = *((uint32_t *)WorldMatrix + 5);
    *((uint32_t *)self + 4) = v4;
    *((uint32_t *)self + 5) = v5;
  }
  else
  {
    memset(self, 0, 0x18u);
    *(uint32_t *)self = 1065353216;
    *((uint32_t *)self + 4) = 1065353216;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getWorldPosition  (binary VA: 0x10852b0)
// Original: gameswf::CharacterHandle::getWorldPosition
// ----------------------------------------------------------------------------
gameswf::CharacterHandle::Self * gameswf::CharacterHandle::getWorldPosition(gameswf::CharacterHandle::Self *self, gameswf::CharacterHandle::Self *a2)
{
  typedef uint8_t _g4_t_v3[8];
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v4)) > _g4_s1 ? (16u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v5)) > _g4_s2 ? (28u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);

  gameswf::CharacterHandle::getWorldMatrix((gameswf::CharacterHandle::Self *)v3, a2);
  *(uint32_t *)self = v4;
  *((uint32_t *)self + 1) = v5;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::setMatrix  (binary VA: 0x1085310)
// Original: gameswf::CharacterHandle::setMatrix
// ----------------------------------------------------------------------------
gameswf::Character::Self * gameswf::CharacterHandle::setMatrix(gameswf::CharacterHandle::Self *self, const gameswf::Matrix::Self *a2)
{
  gameswf::Character::Self *result;
  gameswf::Character::Self *v3;
  int v4;
  int v5;
  gameswf::Self *v6;
  bool v7;
  int v8;
  uint16_t *v9;
  uint16_t *v10;
  int v11;
  unsigned int v12;

  result = (gameswf::Character::Self *)gameswf::CharacterHandle::getCharacter(self);
  v3 = result;
  if ( result != nullptr )
  {
    v4 = *((uint32_t *)result + 19);
    if ( v4 == 0 )
    {
      v8 = opNew(0x94u);
      v9 = (uint16_t *)(v8 + 32);
      v4 = v8;
      *(uint32_t *)v8 = 1065353216;
      *(uint32_t *)(v8 + 8) = 1065353216;
      *(uint32_t *)(v8 + 16) = 1065353216;
      *(uint32_t *)(v8 + 24) = 1065353216;
      *(uint32_t *)(v8 + 4) = 0;
      *(uint32_t *)(v8 + 12) = 0;
      *(uint32_t *)(v8 + 20) = 0;
      *(uint32_t *)(v8 + 28) = 0;
      v12 = 24;
      if ( ((v8 + 32) & 1) != 0 )
      {
        *(uint8_t *)(v8 + 32) = 0;
        v9 = (uint16_t *)(v8 + 33);
        v12 = 23;
      }
      if ( ((uint8_t)(uintptr_t)(v9) & 2) != 0 )
      {
        *v9++ = 0;
        v12 -= 2;
      }
      memset(v9, 0, 4 * (v12 >> 2));
      v10 = &v9[2 * (v12 >> 2)];
      if ( (v12 & 2) != 0 )
        *v10++ = 0;
      if ( (v12 & 1) != 0 )
        *(uint8_t *)v10 = 0;
      v11 = *(uint32_t *)(v8 + 92);
      *(uint32_t *)(v4 + 32) = 1065353216;
      v11 |= 0x7FFFFFu;
      *(uint32_t *)(v4 + 48) = 1065353216;
      *(uint32_t *)(v4 + 92) = v11;
      *(uint32_t *)(v4 + 56) = 0;
      *(uint32_t *)(v4 + 60) = 0;
      *(uint32_t *)(v4 + 64) = 0;
      *(uint32_t *)(v4 + 68) = 0;
      *(uint32_t *)(v4 + 72) = 0;
      *(uint8_t *)(v4 + 76) = 1;
      *(uint8_t *)(v4 + 77) = 0;
      *(uint8_t *)(v4 + 94) = BYTE2(v11) & 0x7F;
      *(uint16_t *)(v4 + 95) = HIBYTE(v11) | 1;
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
      *((uint32_t *)v3 + 19) = v4;
    }
    *(uint32_t *)(v4 + 32) = *(uint32_t *)a2;
    *(uint32_t *)(v4 + 36) = *((uint32_t *)a2 + 1);
    *(uint32_t *)(v4 + 40) = *((uint32_t *)a2 + 2);
    *(uint32_t *)(v4 + 44) = *((uint32_t *)a2 + 3);
    *(uint32_t *)(v4 + 48) = *((uint32_t *)a2 + 4);
    *(uint32_t *)(v4 + 52) = *((uint32_t *)a2 + 5);
    v5 = *((uint32_t *)v3 + 19) + 32;
    *((uint8_t *)v3 + 145) = 1;
    *((uint32_t *)v3 + 17) = v5;
    result = *((gameswf::Character::Self **)v3 + 14);
    *((uint8_t *)v3 + 147) = 1;
    if ( result != nullptr )
    {
      v6 = *((gameswf::Self **)v3 + 13);
      if ( *((uint8_t *)v6 + 2) != 0 )
      {
        return (gameswf::Character::Self *)gameswf::Character::invalidateBitmapCache(result);
      }
      else
      {
        result = (gameswf::Character::Self *)(*(uint16_t *)v6 - 1);
        v7 = *(uint16_t *)v6 == 1;
        *(uint16_t *)v6 = (uint16_t)(uintptr_t)(result);
        if ( v7 )
          result = (gameswf::Character::Self *)gameswf::free_internal(v6);
        *((uint32_t *)v3 + 13) = 0;
        *((uint32_t *)v3 + 14) = 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::setRotation  (binary VA: 0x1085590)
// Original: gameswf::CharacterHandle::setRotation
// ----------------------------------------------------------------------------
gameswf::Character::Self * gameswf::CharacterHandle::setRotation(gameswf::CharacterHandle::Self *self, float a2)
{
  gameswf::CharacterHandle::Self *v2;
  float v3; // xmm5_4
  typedef float _g4_t_v5;
  typedef float _g4_t_v6;
  typedef float _g4_t_v7;
  typedef float _g4_t_v8;
  typedef float _g4_t_v9;
  typedef gameswf::CharacterHandle::Self **_g4_t_v10;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v6)) > _g4_s1 ? (24u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v7)) > _g4_s2 ? (28u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v8)) > _g4_s3 ? (36u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v9)) > _g4_s4 ? (40u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v10)) > _g4_s5 ? (56u + sizeof(_g4_t_v10)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 36u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 40u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 56u);

  v10 = &self;
  v2 = self;
  v5 = a2;
  gameswf::CharacterHandle::getMatrix((gameswf::CharacterHandle::Self *)&v6, self);
  v3 = fsqrt((float)(v7 * v7) + (float)(v6 * v6));
  if ( (float)((float)(v6 * v9) - (float)(v7 * v8)) < 0.0 )
    v3 = -v3;
  gameswf::Matrix::setScaleRotation(
    (gameswf::Matrix::Self *)&v6,
    LODWORD(v3),
    COERCE_UNSIGNED_INT(fsqrt((float)(v8 * v8) + (float)(v9 * v9))),
    v5 * 0.017453294f);
  return gameswf::CharacterHandle::setMatrix(v2, (const gameswf::Matrix::Self *)&v6);
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::setPosition  (binary VA: 0x1085680)
// Original: gameswf::CharacterHandle::setPosition
// ----------------------------------------------------------------------------
gameswf::Character::Self * gameswf::CharacterHandle::setPosition(gameswf::CharacterHandle::Self *self, const gameswf::Point::Self *a2)
{
  __m128 v2;
  __m128 v3;
  __m128 v4;
  __m128 v5;
  __m128 v6;
  __m128 v7;
  uint32_t v8; // xmm1_4
  long double Rotation; // fst7
  float v10; // xmm6_4
  float v11; // xmm5_4
  typedef float _g4_t_v13;
  typedef const gameswf::Point::Self *_g4_t_v14;
  typedef gameswf::CharacterHandle::Self *_g4_t_v15;
  typedef uint32_t _g4_t_v16[6];
  typedef float _g4_t_v17;
  typedef float _g4_t_v18;
  typedef float _g4_t_v19;
  typedef float _g4_t_v20;
  typedef gameswf::CharacterHandle::Self **_g4_t_v21;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v14)) > _g4_s1 ? (40u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v15)) > _g4_s2 ? (44u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v16)) > _g4_s3 ? (48u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_v17)) > _g4_s4 ? (72u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v18)) > _g4_s5 ? (76u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (84u + sizeof(_g4_t_v19)) > _g4_s6 ? (84u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v20)) > _g4_s7 ? (88u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (104u + sizeof(_g4_t_v21)) > _g4_s8 ? (104u + sizeof(_g4_t_v21)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 84u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 88u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 104u);

  v21 = &self;
  v15 = self;
  v14 = a2;
  gameswf::CharacterHandle::getMatrix((gameswf::CharacterHandle::Self *)&v17, self);
  memset(v16, 0, sizeof(v16));
g4_m128_raw(v2) = *(unsigned int *)v14;
  v16[0] = 1065353216;
  v16[4] = 1065353216;
g4_m128_raw(v3) = *((unsigned int *)v14 + 1);
  if (g4_m128_lane<float>(v2, 0) < -3.4028235e38f )
  {
g4_m128_raw(v6) = 0;
    v16[2] = 0;
    if (g4_m128_lane<float>(v3, 0) >= -3.4028235e38f )
      goto LABEL_3;
  }
  else
  {
g4_m128_lane<int32_t>(v4, 0) = 2139095039;
    v5 = _mm_cmple_ss(v2, v4);
g4_m128_raw(v6) = 0;
    v16[2] =g4_m128_lane<uint32_t>(_mm_andnot_ps(v5, g4_m128_from<__m128>(0LL)), 0) |g4_m128_lane<int32_t>(v2, 0) &g4_m128_lane<int32_t>(v5, 0);
    if (g4_m128_lane<float>(v3, 0) >= -3.4028235e38f )
    {
LABEL_3:
      v7 = _mm_cmple_ss(v3, *(__m128 *)&dword_1C7B5E0);
      v8 =g4_m128_lane<uint32_t>(_mm_andnot_ps(v7, v6), 0) |g4_m128_lane<int32_t>(v3, 0) &g4_m128_lane<int32_t>(v7, 0);
      goto LABEL_4;
    }
  }
  v8 =g4_m128_lane<int32_t>(v6, 0);
LABEL_4:
  v16[5] = v8;
  Rotation = gameswf::Matrix::getRotation((gameswf::Matrix::Self *)&v17);
  v10 = fsqrt((float)(v19 * v19) + (float)(v20 * v20));
  v11 = fsqrt((float)(v18 * v18) + (float)(v17 * v17));
  if (g4_m128_lane<float>(v6, 0) > (float)((float)(v20 * v17) - (float)(v19 * v18)) )
    v11 = -v11;
  v13 = Rotation;
  gameswf::Matrix::setScaleRotation((gameswf::Matrix::Self *)v16, LODWORD(v11), LODWORD(v10), v13);
  return gameswf::CharacterHandle::setMatrix(v15, (const gameswf::Matrix::Self *)v16);
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::setY  (binary VA: 0x1085810)
// Original: gameswf::CharacterHandle::setY
// ----------------------------------------------------------------------------
gameswf::Character::Self * gameswf::CharacterHandle::setY(gameswf::CharacterHandle::Self *self, float a2)
{
  typedef uint8_t _g4_t_v3[4];
  typedef float _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  gameswf::CharacterHandle::getPosition((gameswf::CharacterHandle::Self *)v3, self);
  v4 = a2;
  return gameswf::CharacterHandle::setPosition(self, (const gameswf::Point::Self *)v3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::setX  (binary VA: 0x1085870)
// Original: gameswf::CharacterHandle::setX
// ----------------------------------------------------------------------------
gameswf::Character::Self * gameswf::CharacterHandle::setX(gameswf::CharacterHandle::Self *self, float a2)
{
  uint32_t v3[2];

  gameswf::CharacterHandle::getPosition((gameswf::CharacterHandle::Self *)v3, self);
  *(float *)v3 = a2;
  return gameswf::CharacterHandle::setPosition(self, (const gameswf::Point::Self *)v3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getTransform  (binary VA: 0x10858d0)
// Original: gameswf::CharacterHandle::getTransform
// ----------------------------------------------------------------------------
gameswf::CharacterHandle::Self * gameswf::CharacterHandle::getTransform(gameswf::CharacterHandle::Self *self, gameswf::CharacterHandle::Self *a2)
{
  int Character;
  gameswf::ASDisplayObjectContainer::Self *v3;

  memset(self, 0, 0x40u);
  *((uint32_t *)self + 15) = 1065353216;
  *((uint32_t *)self + 10) = 1065353216;
  *((uint32_t *)self + 5) = 1065353216;
  *(uint32_t *)self = 1065353216;
  Character = gameswf::CharacterHandle::getCharacter(a2);
  v3 = (gameswf::ASDisplayObjectContainer::Self *)Character;
  if ( Character != 0 && G4_VCALL<uint8_t>(Character, 8, 4) != 0 )
    gameswf::ASDisplayObjectContainer::getTransform(v3, self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getWorldTransform  (binary VA: 0x1085960)
// Original: gameswf::CharacterHandle::getWorldTransform
// ----------------------------------------------------------------------------
gameswf::CharacterHandle::Self * gameswf::CharacterHandle::getWorldTransform(gameswf::CharacterHandle::Self *self, gameswf::CharacterHandle::Self *a2)
{
  int Character;
  gameswf::ASDisplayObjectContainer::Self *v3;

  memset(self, 0, 0x40u);
  *((uint32_t *)self + 15) = 1065353216;
  *((uint32_t *)self + 10) = 1065353216;
  *((uint32_t *)self + 5) = 1065353216;
  *(uint32_t *)self = 1065353216;
  Character = gameswf::CharacterHandle::getCharacter(a2);
  v3 = (gameswf::ASDisplayObjectContainer::Self *)Character;
  if ( Character != 0 && G4_VCALL<uint8_t>(Character, 8, 4) != 0 )
    gameswf::ASDisplayObjectContainer::getWorldTransform(v3, self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getCxForm  (binary VA: 0x10859f0)
// Original: gameswf::CharacterHandle::getCxForm
// ----------------------------------------------------------------------------
gameswf::CharacterHandle::Self * gameswf::CharacterHandle::getCxForm(gameswf::CharacterHandle::Self *self, gameswf::CharacterHandle::Self *a2)
{
  int Character;
  uint32_t *v3;
  int v4;
  int v5;

  Character = gameswf::CharacterHandle::getCharacter(a2);
  if ( Character != 0 )
  {
    v3 = *(uint32_t **)(Character + 64);
    *(uint32_t *)self = *v3;
    *((uint32_t *)self + 1) = v3[1];
    *((uint32_t *)self + 2) = v3[2];
    *((uint32_t *)self + 3) = v3[3];
    *((uint32_t *)self + 4) = v3[4];
    *((uint32_t *)self + 5) = v3[5];
    v4 = v3[6];
    v5 = v3[7];
    *((uint32_t *)self + 6) = v4;
    *((uint32_t *)self + 7) = v5;
    return self;
  }
  else
  {
    _mm_storel_ps((double *)self, G4_BITCAST<__m128>(xmmword_1C7C9A0));
    _mm_storeh_ps((double *)self + 1, G4_BITCAST<__m128>(xmmword_1C7C9A0));
    _mm_storel_ps((double *)self + 2, G4_BITCAST<__m128>(xmmword_1C7C9A0));
    _mm_storel_ps((double *)self + 3, G4_BITCAST<__m128>(xmmword_1C7C9A0));
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getAlpha  (binary VA: 0x1085bb0)
// Original: gameswf::CharacterHandle::getAlpha
// ----------------------------------------------------------------------------
long double gameswf::CharacterHandle::getAlpha(gameswf::CharacterHandle::Self *self)
{
  typedef uint8_t _g4_t_v2[24];
  typedef float _g4_t_v3;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v2)) > _g4_s0 ? (0u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v3)) > _g4_s1 ? (24u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 0u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 24u);

  gameswf::CharacterHandle::getCxForm((gameswf::CharacterHandle::Self *)v2, self);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::setCxForm  (binary VA: 0x1085bf0)
// Original: gameswf::CharacterHandle::setCxForm
// ----------------------------------------------------------------------------
gameswf::Character::Self * gameswf::CharacterHandle::setCxForm(gameswf::CharacterHandle::Self *self, const gameswf::CxForm::Self *a2)
{
  gameswf::Character::Self *result;
  gameswf::Character::Self *v3;
  int v4;
  gameswf::Self *v5;
  bool v6;
  int v7;
  uint16_t *v8;
  uint16_t *v9;
  int v10;
  unsigned int v11;

  result = (gameswf::Character::Self *)gameswf::CharacterHandle::getCharacter(self);
  v3 = result;
  if ( result != nullptr )
  {
    v4 = *((uint32_t *)result + 19);
    if ( v4 == 0 )
    {
      v7 = opNew(0x94u);
      v8 = (uint16_t *)(v7 + 32);
      v4 = v7;
      *(uint32_t *)v7 = 1065353216;
      *(uint32_t *)(v7 + 8) = 1065353216;
      *(uint32_t *)(v7 + 16) = 1065353216;
      *(uint32_t *)(v7 + 24) = 1065353216;
      *(uint32_t *)(v7 + 4) = 0;
      *(uint32_t *)(v7 + 12) = 0;
      *(uint32_t *)(v7 + 20) = 0;
      *(uint32_t *)(v7 + 28) = 0;
      v11 = 24;
      if ( ((v7 + 32) & 1) != 0 )
      {
        *(uint8_t *)(v7 + 32) = 0;
        v8 = (uint16_t *)(v7 + 33);
        v11 = 23;
      }
      if ( ((uint8_t)(uintptr_t)(v8) & 2) != 0 )
      {
        *v8++ = 0;
        v11 -= 2;
      }
      memset(v8, 0, 4 * (v11 >> 2));
      v9 = &v8[2 * (v11 >> 2)];
      if ( (v11 & 2) != 0 )
        *v9++ = 0;
      if ( (v11 & 1) != 0 )
        *(uint8_t *)v9 = 0;
      v10 = *(uint32_t *)(v7 + 92);
      *(uint32_t *)(v4 + 32) = 1065353216;
      v10 |= 0x7FFFFFu;
      *(uint32_t *)(v4 + 48) = 1065353216;
      *(uint32_t *)(v4 + 92) = v10;
      *(uint32_t *)(v4 + 56) = 0;
      *(uint32_t *)(v4 + 60) = 0;
      *(uint32_t *)(v4 + 64) = 0;
      *(uint32_t *)(v4 + 68) = 0;
      *(uint32_t *)(v4 + 72) = 0;
      *(uint8_t *)(v4 + 76) = 1;
      *(uint8_t *)(v4 + 77) = 0;
      *(uint8_t *)(v4 + 94) = BYTE2(v10) & 0x7F;
      *(uint16_t *)(v4 + 95) = HIBYTE(v10) | 1;
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
      *((uint32_t *)v3 + 19) = v4;
    }
    *(uint32_t *)v4 = *(uint32_t *)a2;
    *(uint32_t *)(v4 + 4) = *((uint32_t *)a2 + 1);
    *(uint32_t *)(v4 + 8) = *((uint32_t *)a2 + 2);
    *(uint32_t *)(v4 + 12) = *((uint32_t *)a2 + 3);
    *(uint32_t *)(v4 + 16) = *((uint32_t *)a2 + 4);
    *(uint32_t *)(v4 + 20) = *((uint32_t *)a2 + 5);
    *(uint32_t *)(v4 + 24) = *((uint32_t *)a2 + 6);
    *(uint32_t *)(v4 + 28) = *((uint32_t *)a2 + 7);
    *((uint32_t *)v3 + 16) = *((uint32_t *)v3 + 19);
    result = *((gameswf::Character::Self **)v3 + 14);
    *((uint8_t *)v3 + 146) = 1;
    if ( result != nullptr )
    {
      v5 = *((gameswf::Self **)v3 + 13);
      if ( *((uint8_t *)v5 + 2) != 0 )
      {
        return (gameswf::Character::Self *)gameswf::Character::invalidateBitmapCache(result);
      }
      else
      {
        result = (gameswf::Character::Self *)(*(uint16_t *)v5 - 1);
        v6 = *(uint16_t *)v5 == 1;
        *(uint16_t *)v5 = (uint16_t)(uintptr_t)(result);
        if ( v6 )
          result = (gameswf::Character::Self *)gameswf::free_internal(v5);
        *((uint32_t *)v3 + 13) = 0;
        *((uint32_t *)v3 + 14) = 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::setAlpha  (binary VA: 0x1085e70)
// Original: gameswf::CharacterHandle::setAlpha
// ----------------------------------------------------------------------------
gameswf::Character::Self * gameswf::CharacterHandle::setAlpha(gameswf::CharacterHandle::Self *self, unsigned int a2)
{
  uint32_t v2; // xmm0_4
  uint32_t v4[8];

  v4[0] = 1065353216;
  v4[2] = 1065353216;
  v4[4] = 1065353216;
  v4[1] = 0;
  v4[3] = 0;
  v4[5] = 0;
  v4[7] = 0;
  if ( *(float *)&a2 < -3.4028235e38f )
    v2 = 0;
  else
    v2 = a2 &g4_m128_lane<uint32_t>(_mm_cmple_ss(G4_BITCAST<__m128>(a2), *(__m128 *)&dword_1C7B5E0), 0);
  v4[6] = v2;
  return gameswf::CharacterHandle::setCxForm(self, (const gameswf::CxForm::Self *)v4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::setCxForm  (binary VA: 0x1085f00)
// Original: gameswf::CharacterHandle::setCxForm
// ----------------------------------------------------------------------------
gameswf::Character::Self * gameswf::CharacterHandle::setCxForm(__m128 a1, gameswf::CharacterHandle::Self *self, unsigned int a3, unsigned int a4)
{
  __m128 v4;
  __m128 v5;
  __m128 v6;
  __m128 v7;
  __m128 v8;
  __m128 v9;
  float v10; // xmm0_4
  float v12[10];

g4_m128_lane<float>(a1, 0) = (float)((float)((float)0 * 65536.0) + (float)BYTE2(a3)) * 0.003921569f;
  if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
g4_m128_raw(v4) = 0;
  else
    v4 = _mm_and_ps(a1, _mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0));
  v12[0] =g4_m128_lane<float>(v4, 0);
g4_m128_lane<float>(v4, 0) = (float)((float)((float)0 * 65536.0) + (float)BYTE1(a3)) * 0.003921569f;
  if (g4_m128_lane<float>(v4, 0) < -3.4028235e38f )
g4_m128_raw(v5) = 0;
  else
    v5 = _mm_and_ps(v4, _mm_cmple_ss(v4, *(__m128 *)&dword_1C7B5E0));
  v12[2] =g4_m128_lane<float>(v5, 0);
g4_m128_lane<float>(v5, 0) = (float)((float)((float)0 * 65536.0) + (float)(uint8_t)a3) * 0.003921569f;
  if (g4_m128_lane<float>(v5, 0) < -3.4028235e38f )
g4_m128_raw(v6) = 0;
  else
    v6 = _mm_and_ps(v5, _mm_cmple_ss(v5, *(__m128 *)&dword_1C7B5E0));
  v12[4] =g4_m128_lane<float>(v6, 0);
g4_m128_lane<float>(v6, 0) = (float)HIBYTE(a3) * 0.003921569f;
  if (g4_m128_lane<float>(v6, 0) < -3.4028235e38f )
g4_m128_lane<float>(v6, 0) = (float)0;
  else
    v6 = _mm_and_ps(v6, _mm_cmple_ss(v6, *(__m128 *)&dword_1C7B5E0));
  v12[6] =g4_m128_lane<float>(v6, 0);
g4_m128_lane<float>(v6, 0) = (float)((float)0 * 65536.0) + (float)BYTE2(a4);
  if (g4_m128_lane<float>(v6, 0) < -3.4028235e38f )
g4_m128_raw(v7) = 0;
  else
    v7 = _mm_and_ps(v6, _mm_cmple_ss(v6, *(__m128 *)&dword_1C7B5E0));
  v12[1] =g4_m128_lane<float>(v7, 0);
g4_m128_lane<float>(v7, 0) = (float)((float)0 * 65536.0) + (float)BYTE1(a4);
  if (g4_m128_lane<float>(v7, 0) < -3.4028235e38f )
g4_m128_raw(v8) = 0;
  else
    v8 = _mm_and_ps(v7, _mm_cmple_ss(v7, *(__m128 *)&dword_1C7B5E0));
  v12[3] =g4_m128_lane<float>(v8, 0);
g4_m128_lane<float>(v8, 0) = (float)((float)0 * 65536.0) + (float)(uint8_t)a4;
  if (g4_m128_lane<float>(v8, 0) < -3.4028235e38f )
g4_m128_raw(v9) = 0;
  else
    v9 = _mm_and_ps(v8, _mm_cmple_ss(v8, *(__m128 *)&dword_1C7B5E0));
  v12[5] =g4_m128_lane<float>(v9, 0);
g4_m128_lane<float>(v9, 0) = (float)HIBYTE(a4);
  if (g4_m128_lane<float>(v9, 0) < -3.4028235e38f )
    v10 = (float)0;
  else
    LODWORD(v10) =g4_m128_lane<int32_t>(v9, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v9, *(__m128 *)&dword_1C7B5E0), 0);
  v12[7] = v10;
  return gameswf::CharacterHandle::setCxForm(self, (const gameswf::CxForm::Self *)v12);
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::setColorFilter  (binary VA: 0x1086140)
// Original: gameswf::CharacterHandle::setColorFilter
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::CharacterHandle::setColorFilter(gameswf::CharacterHandle::Self *self, int a2, unsigned int a3)
{
  gameswf::Self *result;
  int v4;
  uint32_t *v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  gameswf::Self *v10;
  char *v11;
  int v12;
  int v13;
  char *v14;
  const void *v15;
  typedef gameswf::Character::Self *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef gameswf::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef gameswf::Self *_g4_t_v25;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v18)) > _g4_s2 ? (8u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v19)) > _g4_s3 ? (12u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v20)) > _g4_s4 ? (12u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v21)) > _g4_s5 ? (16u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v22)) > _g4_s6 ? (20u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v23)) > _g4_s7 ? (24u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v24)) > _g4_s8 ? (28u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v25)) > _g4_s9 ? (32u + sizeof(_g4_t_v25)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);

  result = (gameswf::Self *)gameswf::CharacterHandle::getCharacter(self);
  v16 = (gameswf::Character::Self *)(result);
  if ( result == nullptr )
    return result;
  if ( a2 < 0 )
    return result;
  result = *((gameswf::Self **)result + 18);
  if ( a2 >= *((uint32_t *)result + 2) )
    return result;
  v4 = *(uint32_t *)result;
  v23 = 0;
  v21 = v4;
  v24 = 0;
  v5 = (uint32_t *)((char *)result + 4);
  v25 = nullptr;
  v6 = *((uint32_t *)result + 2);
  v17 = v5;
  v22 = nullptr;
  v18 = v6;
  if ( v6 > 0 )
  {
    v24 = v6 + (v6 >> 1);
    v9 = 0;
    v10 = (gameswf::Self *)gameswf::malloc_internal(96 * v24);
    v22 = v10;
    v20 = 0;
    while ( 1 )
    {
      v11 = (char *)v10 + v20;
      if ( v11 != nullptr )
        memset(v11, 0, 0x60u);
      ++v9;
      v20 += 96;
      if ( v9 == v18 )
        break;
      v10 = v22;
    }
    v23 = v9;
    v12 = 0;
    v13 = 0;
    do
    {
      v14 = (char *)v22 + v12;
      ++v13;
      v15 = (const void *)(*v17 + v12);
      v12 += 96;
      std::memcpy(v14, v15, 96);
    }
    while ( v13 < v23 );
  }
  else
  {
    v23 = v6;
  }
  v7 = (char *)v22 + 96 * a2;
  if ( *(uint32_t *)v7 != 0 )
  {
    if ( *(uint32_t *)v7 != 2 )
      goto LABEL_9;
    v7[4] = a3;
  }
  else
  {
    v7[4] = a3;
  }
  *(uint16_t *)(v7 + 5) = *(uint16_t *)((char *)&a3 + 1);
  v7[7] = HIBYTE(a3);
LABEL_9:
  gameswf::Character::setEffect(v16, (const gameswf::Effect::Self *)&v21);
  v19 = v23;
  if ( v23 < 0 )
  {
    v8 = 96 * v23;
    do
    {
      if ( (gameswf::Self *)((char *)v22 + v8) != nullptr )
        memset((char *)v22 + v8, 0, 0x60u);
      v8 += 96;
      ++v19;
    }
    while ( v19 != 0 );
  }
  result = v25;
  v23 = 0;
  if ( v25 == nullptr )
  {
    result = v22;
    v24 = 0;
    if ( v22 != nullptr )
      return (gameswf::Self *)gameswf::free_internal(v22);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::setEffect  (binary VA: 0x1086340)
// Original: gameswf::CharacterHandle::setEffect
// ----------------------------------------------------------------------------
uint32_t * gameswf::CharacterHandle::setEffect(gameswf::CharacterHandle::Self *self, const gameswf::Effect::Self *a2)
{
  uint32_t *result;
  int v3;
  int v4;
  int v5;
  void *v6;
  int v7;
  int v8;
  void *v9;
  const void *v10;
  gameswf::Self *v11;
  int v12;
  int v13;
  int v15;
  uint16_t *v16;
  unsigned int v17;
  uint16_t *v18;
  int v19;
  gameswf::Self *v20;
  uint32_t *v21;
  int v22;
  int v23;
  uint32_t *v24;

  result = (uint32_t *)gameswf::CharacterHandle::getCharacter(self);
  v24 = result;
  if ( result != nullptr )
  {
    v23 = result[19];
    if ( v23 == 0 )
    {
      v15 = opNew(0x94u);
      v23 = v15;
      v16 = (uint16_t *)(v15 + 32);
      *(uint32_t *)v15 = 1065353216;
      *(uint32_t *)(v15 + 8) = 1065353216;
      *(uint32_t *)(v15 + 16) = 1065353216;
      *(uint32_t *)(v15 + 24) = 1065353216;
      *(uint32_t *)(v15 + 4) = 0;
      *(uint32_t *)(v15 + 12) = 0;
      *(uint32_t *)(v15 + 20) = 0;
      *(uint32_t *)(v15 + 28) = 0;
      v17 = 24;
      if ( ((v15 + 32) & 1) != 0 )
      {
        *(uint8_t *)(v15 + 32) = 0;
        v16 = (uint16_t *)(v15 + 33);
        LOBYTE(v17) = 23;
      }
      if ( ((uint8_t)(uintptr_t)(v16) & 2) != 0 )
      {
        *v16 = 0;
        v17 -= 2;
        ++v16;
      }
      memset(v16, 0, 4 * (v17 >> 2));
      v18 = &v16[2 * (v17 >> 2)];
      if ( (v17 & 2) != 0 )
        *v18++ = 0;
      if ( (v17 & 1) != 0 )
        *(uint8_t *)v18 = 0;
      *(uint8_t *)(v15 + 76) = 1;
      *(uint8_t *)(v15 + 77) = 0;
      *(uint32_t *)(v15 + 32) = 1065353216;
      *(uint32_t *)(v15 + 48) = 1065353216;
      *(uint32_t *)(v15 + 56) = 0;
      *(uint32_t *)(v15 + 60) = 0;
      *(uint32_t *)(v15 + 64) = 0;
      *(uint32_t *)(v15 + 68) = 0;
      *(uint32_t *)(v15 + 72) = 0;
      v19 = *(uint32_t *)(v15 + 92) | 0x7FFFFF;
      *(uint32_t *)(v23 + 92) = v19;
      *(uint8_t *)(v23 + 94) = BYTE2(v19) & 0x7F;
      *(uint16_t *)(v23 + 95) = HIBYTE(v19) | 1;
      *(uint8_t *)(v23 + 97) = 0;
      *(uint8_t *)(v23 + 98) = 0;
      *(uint32_t *)(v23 + 100) = 0;
      *(uint32_t *)(v23 + 104) = 1065353216;
      *(uint32_t *)(v23 + 108) = 0;
      *(uint32_t *)(v23 + 112) = 1065353216;
      *(uint32_t *)(v23 + 116) = 0;
      *(uint32_t *)(v23 + 120) = 0;
      *(uint32_t *)(v23 + 124) = 0;
      *(uint32_t *)(v23 + 128) = 0;
      *(uint32_t *)(v23 + 132) = 0;
      *(uint32_t *)(v23 + 136) = 0;
      *(uint32_t *)(v23 + 140) = 0;
      *(uint32_t *)(v23 + 144) = 0;
      v24[19] = v23;
    }
    v21 = (uint32_t *)(v23 + 60);
    *(uint32_t *)(v23 + 56) = *(uint32_t *)a2;
    v3 = *((uint32_t *)a2 + 2);
    v22 = v3;
    v4 = *(uint32_t *)(v23 + 64);
    if ( v3 != 0 )
    {
      v12 = *(uint32_t *)(v23 + 68);
      if ( v3 > v12 && *(uint32_t *)(v23 + 72) == 0 )
      {
        v13 = v3 + (v3 >> 1);
        *(uint32_t *)(v23 + 68) = v13;
        if ( v13 != 0 )
        {
          v20 = *(gameswf::Self **)(v23 + 60);
          if ( v20 != nullptr )
            *(uint32_t *)(v23 + 60) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v20, 96 * v13, 96 * v12));
          else
            *(uint32_t *)(v23 + 60) = gameswf::malloc_internal(96 * v13);
        }
        else
        {
          if ( *(uint32_t *)(v23 + 60) != 0 )
            gameswf::free_internal(*(gameswf::Self **)(v23 + 60));
          *(uint32_t *)(v23 + 60) = 0;
        }
      }
    }
    if ( v3 > v4 )
    {
      v5 = 96 * v4;
      do
      {
        v6 = (void *)(*v21 + v5);
        if ( v6 != nullptr )
          memset(v6, 0, 0x60u);
        ++v4;
        v5 += 96;
      }
      while ( v4 != v22 );
    }
    *(uint32_t *)(v23 + 64) = v22;
    if ( v22 > 0 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        ++v8;
        v9 = (void *)(v7 + *v21);
        v10 = (const void *)(*((uint32_t *)a2 + 1) + v7);
        v7 += 96;
        std::memcpy(v9, v10, 96);
      }
      while ( v8 < *(uint32_t *)(v23 + 64) );
    }
    v24[18] = v24[19] + 56;
    result = (uint32_t *)v24[14];
    if ( result != nullptr )
    {
      v11 = (gameswf::Self *)v24[13];
      if ( *((uint8_t *)v11 + 2) != 0 )
      {
        return (uint32_t *)gameswf::Character::invalidateBitmapCache((gameswf::Character::Self *)result);
      }
      else
      {
        if ( (*(uint16_t *)v11)-- == 1 )
          gameswf::free_internal(v11);
        v24[13] = 0;
        v24[14] = 0;
        return v24;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getEffect  (binary VA: 0x10866e0)
// Original: gameswf::CharacterHandle::getEffect
// ----------------------------------------------------------------------------
int * gameswf::CharacterHandle::getEffect(gameswf::CharacterHandle::Self *self)
{
  int Character;
  int *v2;

  if ( byte_20E2EE0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20E2EE0) != 0 )
  {
    dword_20E2EE8 = 0;
    dword_20E2EEC = 0;
    dword_20E2EF0 = 0;
    dword_20E2EF4 = 0;
    dword_20E2EF8 = 0;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20E2EE0);
    __cxa_atexit((void (*)(void *))gameswf::Effect::Destroy, &dword_20E2EE8, &unk_20D1280);
  }
  Character = gameswf::CharacterHandle::getCharacter(self);
  v2 = (int *)(&dword_20E2EE8);
  if ( Character != 0 )
    return *(int **)(Character + 72);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::loadMovie  (binary VA: 0x10867a0)
// Original: gameswf::CharacterHandle::loadMovie
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::loadMovie(gameswf::CharacterHandle::Self *self, const char *a2)
{
  int result;
  gameswf::Character::Self *v3;
  gameswf::RefCounted::Self *v4;
  gameswf::Self *WeakProxy;
  gameswf::Self *v6;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  char *v15;
  int v16;
  char *v17;
  char *v18;
  int v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef gameswf::Self **_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t _g4_t_v27[3];
  typedef gameswf::Self *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint8_t _g4_t_v32[12];
  typedef uint8_t _g4_t_v33[12];
  typedef uint8_t _g4_t_v34[12];
  typedef uint8_t _g4_t_v35[12];
  typedef gameswf::Self *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef gameswf::RefCounted::Self *_g4_t_v40;
  typedef uint8_t _g4_t_v41[12];
  typedef gameswf::Self *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef gameswf::Self *_g4_t_v46;
  typedef gameswf::RefCounted::Self *_g4_t_v47;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v21)) > _g4_s1 ? (4u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v22)) > _g4_s2 ? (4u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v23)) > _g4_s3 ? (4u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v24)) > _g4_s4 ? (8u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v25)) > _g4_s5 ? (8u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v26)) > _g4_s6 ? (8u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v27)) > _g4_s7 ? (32u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v28)) > _g4_s8 ? (44u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v29)) > _g4_s9 ? (48u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v30)) > _g4_s10 ? (52u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v31)) > _g4_s11 ? (56u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (156u + sizeof(_g4_t_v32)) > _g4_s12 ? (156u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (168u + sizeof(_g4_t_v33)) > _g4_s13 ? (168u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (180u + sizeof(_g4_t_v34)) > _g4_s14 ? (180u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (192u + sizeof(_g4_t_v35)) > _g4_s15 ? (192u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (204u + sizeof(_g4_t_v36)) > _g4_s16 ? (204u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (208u + sizeof(_g4_t_v37)) > _g4_s17 ? (208u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (212u + sizeof(_g4_t_v38)) > _g4_s18 ? (212u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (216u + sizeof(_g4_t_v39)) > _g4_s19 ? (216u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (220u + sizeof(_g4_t_v40)) > _g4_s20 ? (220u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (224u + sizeof(_g4_t_v41)) > _g4_s21 ? (224u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (236u + sizeof(_g4_t_v42)) > _g4_s22 ? (236u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (240u + sizeof(_g4_t_v43)) > _g4_s23 ? (240u + sizeof(_g4_t_v43)) : _g4_s23,
    _g4_s25 = (244u + sizeof(_g4_t_v44)) > _g4_s24 ? (244u + sizeof(_g4_t_v44)) : _g4_s24,
    _g4_s26 = (248u + sizeof(_g4_t_v45)) > _g4_s25 ? (248u + sizeof(_g4_t_v45)) : _g4_s25,
    _g4_s27 = (252u + sizeof(_g4_t_v46)) > _g4_s26 ? (252u + sizeof(_g4_t_v46)) : _g4_s26,
    _g4_s28 = (256u + sizeof(_g4_t_v47)) > _g4_s27 ? (256u + sizeof(_g4_t_v47)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 156u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 168u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 180u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 192u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 204u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 208u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 212u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 216u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 220u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 224u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 236u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 240u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 244u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 248u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 252u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 256u);

  result = gameswf::CharacterHandle::getCharacter(self);
  v3 = (gameswf::Character::Self *)result;
  if ( result != 0 )
  {
    v4 = *(gameswf::RefCounted::Self **)(result + 16);
    v28 = nullptr;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32[0] = 0;
    v32[1] = 0;
    v33[0] = 0;
    v33[1] = 0;
    v34[0] = 0;
    v34[1] = 0;
    v35[0] = 0;
    v35[1] = 0;
    v36 = nullptr;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = nullptr;
    v41[0] = 0;
    v41[1] = 0;
    v42 = nullptr;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = nullptr;
    v47 = v4;
    if ( v4 != nullptr )
    {
      WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v4);
      if ( WeakProxy != v46 )
      {
        v46 = WeakProxy;
        ++*(uint16_t *)WeakProxy;
      }
    }
    gameswf::ASEnvironment::setTarget((gameswf::ASEnvironment::Self *)&v28, v3);
    v27[1] = (uint32_t)(uintptr_t)(v3);
    LOWORD(v27[0]) = 5;
    gameswf::RefCounted::addRef(v3);
    gameswf::ASEnvironment::loadFile((gameswf::ASEnvironment::Self *)&v28, a2, (const gameswf::ASValue::Self *)v27);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v27);
    v6 = v46;
    if ( v46 != nullptr && (*(uint16_t *)v46)-- == 1 )
      gameswf::free_internal(v6);
    v8 = v43;
    if ( v43 <= 0 )
    {
      if ( v43 < 0 )
      {
        v20 = 32 * v43;
        do
        {
          v18 = (char *)v42 + v20;
          if ( (gameswf::Self *)((char *)v42 + v20) != nullptr )
          {
            v19 = *((uint32_t *)v18 + 4);
            *v18 = 1;
            v19 |= 0x7FFFFFu;
            v18[1] = 0;
            *((uint32_t *)v18 + 4) = v19;
            v18[20] = 0;
            v18[18] = BYTE2(v19) & 0x7F;
            v18[19] = HIBYTE(v19) | 1;
            v18[21] = 0;
          }
          v20 += 32;
          ++v8;
        }
        while ( v8 != 0 );
      }
    }
    else
    {
      v9 = 0;
      do
      {
        while ( 1 )
        {
          v24 = (gameswf::Self **)((char *)v42 + 32 * v9);
          v21 = v9;
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v24 + 5));
          if ( *(uint8_t *)v24 == 0xFF && (*((uint8_t *)v24 + 19) & 1) != 0 )
            break;
          v9 = v21 + 1;
          if ( v21 + 1 == v8 )
            goto LABEL_14;
        }
        gameswf::free_internal(v24[3]);
        v9 = v21 + 1;
      }
      while ( v21 + 1 != v8 );
    }
LABEL_14:
    v43 = 0;
    if ( v45 == 0 )
    {
      v44 = 0;
      if ( v42 != nullptr )
        gameswf::free_internal(v42);
      v42 = nullptr;
    }
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v41);
    if ( v40 != nullptr )
      gameswf::RefCounted::dropRef(v40);
    v10 = v37;
    if ( v37 <= 0 )
    {
      if ( v37 < 0 )
      {
        v16 = 12 * v37;
        do
        {
          v17 = (char *)v36 + v16;
          if ( (gameswf::Self *)((char *)v36 + v16) != nullptr )
          {
            *v17 = 0;
            v17[1] = 0;
          }
          v16 += 12;
          ++v10;
        }
        while ( v10 != 0 );
      }
    }
    else
    {
      v11 = 0;
      v12 = 0;
      do
      {
        v25 = v12;
        v22 = v11;
        gameswf::ASValue::dropRefs((gameswf::Self *)((char *)v36 + v11));
        v12 = v25 + 1;
        v11 = v22 + 12;
      }
      while ( v25 + 1 != v10 );
    }
    v37 = 0;
    if ( v39 == 0 )
    {
      v38 = 0;
      if ( v36 != nullptr )
        gameswf::free_internal(v36);
      v36 = nullptr;
    }
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v35);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v34);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v33);
    result = gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v32);
    v13 = v29;
    if ( v29 <= 0 )
    {
      if ( v29 < 0 )
      {
        result = 12 * v29;
        do
        {
          v15 = (char *)v28 + result;
          if ( (gameswf::Self *)((char *)v28 + result) != nullptr )
          {
            *v15 = 0;
            v15[1] = 0;
          }
          result += 12;
          ++v13;
        }
        while ( v13 != 0 );
      }
    }
    else
    {
      v14 = 0;
      result = 0;
      do
      {
        v26 = result;
        v23 = v14;
        gameswf::ASValue::dropRefs((gameswf::Self *)((char *)v28 + v14));
        result = v26 + 1;
        v14 = v23 + 12;
      }
      while ( v26 + 1 != v13 );
    }
    v29 = 0;
    if ( v31 == 0 )
    {
      result = (int)(uintptr_t)(v28);
      v30 = 0;
      if ( v28 != nullptr )
        return gameswf::free_internal(v28);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::duplicateMovieClip  (binary VA: 0x1086c60)
// Original: gameswf::CharacterHandle::duplicateMovieClip
// ----------------------------------------------------------------------------
gameswf::CharacterHandle::Self * gameswf::CharacterHandle::duplicateMovieClip(gameswf::CharacterHandle::Self *self, gameswf::CharacterHandle::Self *a2, char *s, unsigned int a4)
{
  uint32_t *Character;
  uint32_t *v5;
  int v6;
  int (*v7)(uint32_t *, char *, unsigned int);
  gameswf::Self *v8;
  gameswf::Character::Self *v9;
  typedef int (*_g4_t_v11)(uint32_t *, char *, unsigned int);
  typedef size_t _g4_t_v12;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef gameswf::Self *_g4_t_v15;
  typedef int16_t _g4_t_v16;
  typedef int16_t _g4_t_v17;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (17u + sizeof(_g4_t_v14)) > _g4_s3 ? (17u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v15)) > _g4_s4 ? (28u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v16)) > _g4_s5 ? (32u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (34u + sizeof(_g4_t_v17)) > _g4_s6 ? (34u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 17u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 34u);

  gameswf::CharacterHandle::Construct(self, nullptr);
  Character = (uint32_t *)gameswf::CharacterHandle::getCharacter(a2);
  v5 = Character;
  if ( Character == nullptr )
    return self;
  v6 = *Character;
  v13 = 1;
  v14 = 0;
  v7 = *(int (**)(uint32_t *, char *, unsigned int))(v6 + 220);
  if ( s != nullptr )
  {
    v11 = *(int (**)(uint32_t *, char *, unsigned int))(v6 + 220);
    v12 = strlen(s);
    gameswf::String::resize((gameswf::String::Self *)&v13, v12);
    v8 = (gameswf::Self *)&v14;
    if ( v13 == -1 )
      v8 = v15;
    gameswf::Strcpy_s(v8, (char *)(v12 + 1), (gameswf::Self *)s);
    v7 = v11;
  }
  v16 = -1;
  HIBYTE(v17) = ((uint16_t)(v17 | 0x7F) >> 8) | 1;
  LOBYTE(v17) = 127;
  v9 = (gameswf::Character::Self *)v7(v5, &v13, a4);
  gameswf::CharacterHandle::opAssign(self, v9);
  if ( v13 != -1 || (v17 & 0x100) == 0 )
    return self;
  gameswf::free_internal(v15);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::removeMovieClip  (binary VA: 0x1086d90)
// Original: gameswf::CharacterHandle::removeMovieClip
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::CharacterHandle::removeMovieClip(gameswf::Self **self)
{
  gameswf::Self *result;
  int v2;
  gameswf::Self *v3;
  bool v4;
  gameswf::Self *v5;

  result = (gameswf::Self *)gameswf::CharacterHandle::getCharacter((gameswf::CharacterHandle::Self *)self);
  if ( result != nullptr )
  {
    v2 = *((uint32_t *)result + 14);
    if ( v2 != 0 )
    {
      v3 = *((gameswf::Self **)result + 13);
      if ( *((uint8_t *)v3 + 2) != 0 )
      {
        G4_VCALL<void>(v2, 176, result);
        result = *(self + 1);
        *(self + 2) = nullptr;
        if ( result != nullptr )
        {
          v4 = (*(uint16_t *)result)-- == 1;
          if ( v4 )
            result = (gameswf::Self *)gameswf::free_internal(result);
          *(self + 1) = nullptr;
        }
      }
      else
      {
        v4 = (*(uint16_t *)v3)-- == 1;
        if ( v4 )
        {
          v5 = result;
          gameswf::free_internal(v3);
          result = v5;
        }
        *((uint32_t *)result + 13) = 0;
        *((uint32_t *)result + 14) = 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::getText  (binary VA: 0x1086e70)
// Original: gameswf::CharacterHandle::getText
// ----------------------------------------------------------------------------
char * gameswf::CharacterHandle::getText(gameswf::CharacterHandle::Self *self)
{
  char *v1;
  int Character;
  int v3;

  v1 = (char *)(&byte_20E2EC0);
  Character = gameswf::CharacterHandle::getCharacter(self);
  if ( Character != 0 )
  {
    v3 = Character + 468;
    if ( G4_VCALL<uint8_t>(Character, 8, 37) != 0 )
      return (char *)v3;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::setText  (binary VA: 0x1086ee0)
// Original: gameswf::CharacterHandle::setText
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::setText(gameswf::CharacterHandle::Self *self, const gameswf::String::Self *a2)
{
  int result;
  gameswf::EditTextCharacter::Self *v3;

  result = gameswf::CharacterHandle::getCharacter(self);
  v3 = (gameswf::EditTextCharacter::Self *)result;
  if ( result != 0 )
  {
    result = G4_VCALL<int>(result, 8, 37);
    if ( (uint8_t)result != 0 )
      return (int)(uintptr_t)(gameswf::EditTextCharacter::setTextValue(v3, a2, false));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::setHtml  (binary VA: 0x1086f50)
// Original: gameswf::CharacterHandle::setHtml
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::setHtml(gameswf::CharacterHandle::Self *self, const gameswf::String::Self *a2)
{
  int result;
  gameswf::EditTextCharacter::Self *v3;

  result = gameswf::CharacterHandle::getCharacter(self);
  v3 = (gameswf::EditTextCharacter::Self *)result;
  if ( result != 0 )
  {
    result = G4_VCALL<int>(result, 8, 37);
    if ( (uint8_t)result != 0 )
      return (int)(uintptr_t)(gameswf::EditTextCharacter::setTextValue(v3, a2, true));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::formatText  (binary VA: 0x1086fc0)
// Original: gameswf::CharacterHandle::formatText
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::formatText(gameswf::CharacterHandle::Self *self, char *format, ...)
{
  char *v2; // kr00_4
  gameswf::Self *v3;
  int result;
  va_list va;
  typedef char _g4_t_v5;
  typedef char _g4_t_v6;
  typedef gameswf::Self *_g4_t_v7;
  typedef int16_t _g4_t_v8;
  typedef int16_t _g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (1u + sizeof(_g4_t_v6)) > _g4_s1 ? (1u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v7)) > _g4_s2 ? (12u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v8)) > _g4_s3 ? (16u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (18u + sizeof(_g4_t_v9)) > _g4_s4 ? (18u + sizeof(_g4_t_v9)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 1u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 18u);

  va_start(va, format);
  vsprintf(byte_20E2F00, format, va);
  v5 = 1;
  v6 = 0;
  v2 = (char *)(&byte_20E2F00[strlen(byte_20E2F00)]);
  gameswf::String::resize((gameswf::String::Self *)&v5, v2 - (char *)(byte_20E2F00));
  v3 = (gameswf::Self *)&v6;
  if ( v5 == -1 )
    v3 = v7;
  gameswf::Strcpy_s(v3, (char *)(v2 - (char *)(byte_20E2F00) + 1), (gameswf::Self *)byte_20E2F00);
  v8 = -1;
  HIBYTE(v9) = ((uint16_t)(v9 | 0x7F) >> 8) | 1;
  LOBYTE(v9) = 127;
  result = gameswf::CharacterHandle::setText(self, (const gameswf::String::Self *)&v5);
  if ( v5 == -1 && (v9 & 0x100) != 0 )
    return gameswf::free_internal(v7);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::formatHtml  (binary VA: 0x10870f0)
// Original: gameswf::CharacterHandle::formatHtml
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::formatHtml(gameswf::CharacterHandle::Self *self, char *format, ...)
{
  char *v2; // kr00_4
  gameswf::Self *v3;
  int result;
  va_list va;
  typedef char _g4_t_v5;
  typedef char _g4_t_v6;
  typedef gameswf::Self *_g4_t_v7;
  typedef int16_t _g4_t_v8;
  typedef int16_t _g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (1u + sizeof(_g4_t_v6)) > _g4_s1 ? (1u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v7)) > _g4_s2 ? (12u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v8)) > _g4_s3 ? (16u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (18u + sizeof(_g4_t_v9)) > _g4_s4 ? (18u + sizeof(_g4_t_v9)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 1u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 18u);

  va_start(va, format);
  vsprintf(byte_20E2F00, format, va);
  v5 = 1;
  v6 = 0;
  v2 = (char *)(&byte_20E2F00[strlen(byte_20E2F00)]);
  gameswf::String::resize((gameswf::String::Self *)&v5, v2 - (char *)(byte_20E2F00));
  v3 = (gameswf::Self *)&v6;
  if ( v5 == -1 )
    v3 = v7;
  gameswf::Strcpy_s(v3, (char *)(v2 - (char *)(byte_20E2F00) + 1), (gameswf::Self *)byte_20E2F00);
  v8 = -1;
  HIBYTE(v9) = ((uint16_t)(v9 | 0x7F) >> 8) | 1;
  LOBYTE(v9) = 127;
  result = gameswf::CharacterHandle::setHtml(self, (const gameswf::String::Self *)&v5);
  if ( v5 == -1 && (v9 & 0x100) != 0 )
    return gameswf::free_internal(v7);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::preloadGlyphs  (binary VA: 0x1087220)
// Original: gameswf::CharacterHandle::preloadGlyphs
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::preloadGlyphs(gameswf::CharacterHandle::Self *self)
{
  int result;
  gameswf::EditTextCharacter::Self *v2;

  result = gameswf::CharacterHandle::getCharacter(self);
  v2 = (gameswf::EditTextCharacter::Self *)result;
  if ( result != 0 )
  {
    result = G4_VCALL<int>(result, 8, 37);
    if ( (uint8_t)result != 0 )
      return (int)(uintptr_t)(gameswf::EditTextCharacter::preloadGlyphs(v2));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::CharacterHandle::hasMissingGlyphs  (binary VA: 0x1087280)
// Original: gameswf::CharacterHandle::hasMissingGlyphs
// ----------------------------------------------------------------------------
int gameswf::CharacterHandle::hasMissingGlyphs(gameswf::CharacterHandle::Self *self)
{
  int v1;
  int Character;
  int v3;

  v1 = 0;
  Character = gameswf::CharacterHandle::getCharacter(self);
  v3 = Character;
  if ( Character != 0 && G4_VCALL<uint8_t>(Character, 8, 37) != 0 )
    return *(uint8_t *)(v3 + 564);
  return v1;
}


