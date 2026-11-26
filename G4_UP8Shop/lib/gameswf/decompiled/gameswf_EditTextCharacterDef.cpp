#include "Core/Utils/DecompTypes.h"
#include "gameswf_EditTextCharacterDef.h"

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacterDef::csmTextSetting  (binary VA: 0x10f92b0)
// Original: gameswf::EditTextCharacterDef::csmTextSetting
// ----------------------------------------------------------------------------
int gameswf::EditTextCharacterDef::csmTextSetting(gameswf::EditTextCharacterDef::Self *self, gameswf::Stream::Self *a2)
{
  *((uint8_t *)self + 140) = gameswf::Stream::readUInt(a2, 2) != 0;
  *((uint32_t *)self + 36) = gameswf::Stream::readUInt(a2, 3);
  gameswf::Stream::readUInt(a2, 3);
  *((float *)self + 37) = gameswf::Stream::readFixed(a2);
  *((float *)self + 38) = gameswf::Stream::readFixed(a2);
  return gameswf::Stream::readU8(a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacterDef::Destroy  (binary VA: 0x10f9a80)
// Original: gameswf::EditTextCharacterDef::~EditTextCharacterDef
// ----------------------------------------------------------------------------
void gameswf::EditTextCharacterDef::Destroy(gameswf::EditTextCharacterDef::Self *self)
{
  gameswf::Self *v1;
  bool v2;
  gameswf::Self *v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208F6E8);
  sub_59CE50((int)(uintptr_t)(self) + 120);
  sub_59CE50((int)(uintptr_t)(self) + 48);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E728);
  v1 = *((gameswf::Self **)self + 5);
  if ( v1 != nullptr )
  {
    v2 = (*(uint16_t *)v1)-- == 1;
    if ( v2 )
      gameswf::free_internal(v1);
  }
  v3 = *((gameswf::Self **)self + 3);
  if ( v3 != nullptr )
  {
    v2 = (*(uint16_t *)v3)-- == 1;
    if ( v2 )
      gameswf::free_internal(v3);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E508);
  gameswf::RefCounted::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacterDef::Destroy_ea10f9b30  (binary VA: 0x10f9b30)
// Original: gameswf::EditTextCharacterDef::~EditTextCharacterDef
// ----------------------------------------------------------------------------
void gameswf::EditTextCharacterDef::Destroy_ea10f9b30(gameswf::EditTextCharacterDef::Self *self)
{
  gameswf::EditTextCharacterDef::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacterDef::createCharacterInstance  (binary VA: 0x10fc500)
// Original: gameswf::EditTextCharacterDef::createCharacterInstance
// ----------------------------------------------------------------------------
gameswf::EditTextCharacter::Self * gameswf::EditTextCharacterDef::createCharacterInstance(gameswf::EditTextCharacterDef::Self *self, gameswf::Character::Self *a2, char *a3)
{
  gameswf::Player::Self *v3;
  gameswf::Self *v4;
  int v7;
  int v8;

  if ( *((uint32_t *)self + 21) == 0 )
  {
    v7 = *((uint32_t *)self + 7);
    if ( v7 != 0 )
    {
      v8 = G4_VCALL<int>(v7, 124, *((uint32_t *)self + 20));
      *((uint32_t *)self + 21) = v8;
      if ( v8 == 0 )
        gameswf::logError(
          (gameswf::Self *)"error: text style with undefined font; font_id = %d\n",
          *((const char **)self + 20));
    }
  }
  v3 = *((gameswf::Player::Self **)self + 6);
  if ( v3 != nullptr )
  {
    v4 = *((gameswf::Self **)self + 5);
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      if ( (*(uint16_t *)v4)-- == 1 )
        gameswf::free_internal(v4);
      *((uint32_t *)self + 5) = 0;
      *((uint32_t *)self + 6) = 0;
      v3 = nullptr;
    }
  }
  return gameswf::Player::createEditTextCharacter(v3, self, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacterDef::Construct  (binary VA: 0x10fca10)
// Original: gameswf::EditTextCharacterDef::EditTextCharacterDef
// ----------------------------------------------------------------------------
gameswf::EditTextCharacterDef::Self * gameswf::EditTextCharacterDef::Construct(gameswf::Self **self, gameswf::Player::Self *a2, int a3, int a4)
{
  gameswf::Self *WeakProxy;
  gameswf::Self *v5;
  int v7;
  char v8; // edx^2
  int v9;
  gameswf::Font::Self *v10;
  gameswf::EditTextCharacterDef::Self *result;
  gameswf::Self *v12;

  gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)self);
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_208E728);
  *(self + 3) = nullptr;
  *(self + 4) = nullptr;
  *(self + 5) = nullptr;
  *(self + 6) = (gameswf::Self *)(a2);
  if ( a2 != nullptr )
  {
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(a2);
    v5 = *(self + 5);
    if ( WeakProxy != v5 )
    {
      if ( v5 != nullptr && (*(uint16_t *)v5)-- == 1 )
      {
        v12 = WeakProxy;
        gameswf::free_internal(v5);
        WeakProxy = v12;
      }
      *(self + 5) = WeakProxy;
      if ( WeakProxy != nullptr )
        ++*(uint16_t *)WeakProxy;
    }
  }
  *(self + 7) = nullptr;
  *((uint8_t *)self + 48) = 1;
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_208F6E8);
  v7 = (unsigned int)(uintptr_t)(*(self + 16)) | 0x7FFFFF;
  *((uint8_t *)self + 49) = 0;
  *(self + 16) = (gameswf::Self *)v7;
  v8 = BYTE2(v7);
  *((uint8_t *)self + 68) = 0;
  *((uint8_t *)self + 69) = 0;
  *((uint8_t *)self + 67) = HIBYTE(v7) | 1;
  v9 = (unsigned int)(uintptr_t)(*(self + 34)) | 0x7FFFFF;
  *(self + 34) = (gameswf::Self *)v9;
  *((uint8_t *)self + 66) = v8 & 0x7F;
  *((uint8_t *)self + 70) = 0;
  *((uint8_t *)self + 138) = BYTE2(v9) & 0x7F;
  *((uint8_t *)self + 139) = HIBYTE(v9) | 1;
  *((uint8_t *)self + 71) = 1;
  *((uint8_t *)self + 72) = 0;
  *((uint8_t *)self + 73) = 0;
  *((uint8_t *)self + 74) = 0;
  *((uint8_t *)self + 76) = 0;
  *(self + 20) = (gameswf::Self *)-1;
  *(self + 21) = nullptr;
  *(self + 22) = (gameswf::Self *)1094713344;
  *((uint8_t *)self + 95) = -1;
  *(self + 24) = nullptr;
  *(self + 25) = nullptr;
  *(self + 26) = nullptr;
  *(self + 27) = nullptr;
  *(self + 28) = nullptr;
  *(self + 29) = nullptr;
  *((uint8_t *)self + 120) = 1;
  *((uint8_t *)self + 121) = 0;
  *((uint8_t *)self + 140) = 0;
  *(self + 36) = nullptr;
  *((float *)self + 9) = (float)a3;
  *(self + 37) = nullptr;
  *(self + 38) = nullptr;
  *(self + 8) = nullptr;
  *((float *)self + 11) = (float)a4;
  *(self + 10) = nullptr;
  *((uint8_t *)self + 92) = 0;
  *((uint8_t *)self + 93) = 0;
  *((uint8_t *)self + 94) = 0;
  v10 = (gameswf::Font::Self *)opNew(0x84u);
  result = (gameswf::EditTextCharacterDef::Self *)(gameswf::Font::Construct(v10, a2));
  *(self + 21) = (gameswf::Self *)(v10);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacterDef::Construct  (binary VA: 0x10fcc00)
// Original: gameswf::EditTextCharacterDef::EditTextCharacterDef
// ----------------------------------------------------------------------------
gameswf::EditTextCharacterDef::Self * gameswf::EditTextCharacterDef::Construct(gameswf::Self **self, gameswf::Player::Self *a2, gameswf::MovieDefinitionSub::Self *a3)
{
  gameswf::Self *WeakProxy;
  gameswf::Self *v4;
  int v6;
  char v7; // edx^2
  unsigned int v8;
  int v9;
  gameswf::EditTextCharacterDef::Self *result;
  gameswf::Self *v11;

  gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)self);
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_208E728);
  *(self + 3) = nullptr;
  *(self + 4) = nullptr;
  *(self + 5) = nullptr;
  *(self + 6) = (gameswf::Self *)(a2);
  if ( a2 != nullptr )
  {
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(a2);
    v4 = *(self + 5);
    if ( WeakProxy != v4 )
    {
      if ( v4 != nullptr && (*(uint16_t *)v4)-- == 1 )
      {
        v11 = WeakProxy;
        gameswf::free_internal(v4);
        WeakProxy = v11;
      }
      *(self + 5) = WeakProxy;
      if ( WeakProxy != nullptr )
        ++*(uint16_t *)WeakProxy;
    }
  }
  *((uint8_t *)self + 48) = 1;
  *((uint8_t *)self + 49) = 0;
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_208F6E8);
  *(self + 7) = (gameswf::Self *)(a3);
  v6 = (unsigned int)(uintptr_t)(*(self + 16)) | 0x7FFFFF;
  *((uint8_t *)self + 68) = 0;
  *(self + 16) = (gameswf::Self *)v6;
  v7 = BYTE2(v6);
  *((uint8_t *)self + 69) = 0;
  *((uint8_t *)self + 70) = 0;
  *((uint8_t *)self + 67) = HIBYTE(v6) | 1;
  v8 = (unsigned int)(uintptr_t)(*(self + 34)) | 0x7FFFFF;
  *(self + 34) = (gameswf::Self *)v8;
  *((uint8_t *)self + 66) = v7 & 0x7F;
  *((uint8_t *)self + 71) = 0;
  v9 = HIWORD(v8) & 0x7F;
  result = (gameswf::EditTextCharacterDef::Self *)(HIBYTE(v8) | 1);
  *((uint8_t *)self + 72) = 0;
  *((uint8_t *)self + 73) = 0;
  *((uint8_t *)self + 74) = 0;
  *((uint8_t *)self + 75) = 0;
  *((uint8_t *)self + 76) = 0;
  *(self + 20) = (gameswf::Self *)-1;
  *(self + 21) = nullptr;
  *(self + 22) = (gameswf::Self *)1094713344;
  *((uint8_t *)self + 95) = -1;
  *(self + 24) = nullptr;
  *(self + 25) = nullptr;
  *(self + 26) = nullptr;
  *(self + 27) = nullptr;
  *(self + 28) = nullptr;
  *(self + 29) = nullptr;
  *((uint8_t *)self + 120) = 1;
  *((uint8_t *)self + 121) = 0;
  *((uint8_t *)self + 138) = v9;
  *((uint8_t *)self + 139) = (uint8_t)(uintptr_t)result;
  *((uint8_t *)self + 140) = 0;
  *(self + 36) = nullptr;
  *(self + 37) = nullptr;
  *(self + 38) = nullptr;
  *((uint8_t *)self + 92) = 0;
  *((uint8_t *)self + 93) = 0;
  *((uint8_t *)self + 94) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacterDef::read  (binary VA: 0x10fcdb0)
// Original: gameswf::EditTextCharacterDef::read
// ----------------------------------------------------------------------------
char * gameswf::EditTextCharacterDef::read(gameswf::EditTextCharacterDef::Self *self, gameswf::Stream::Self *a2)
{
  int v2;
  char *result;
  int v4;
  int UInt;
  int v6;
  int v7;

  gameswf::Rect::read((gameswf::EditTextCharacterDef::Self *)((char *)self + 32), a2);
  gameswf::Stream::align(a2);
  UInt = gameswf::Stream::readUInt(a2, 1);
  *((uint8_t *)self + 68) = gameswf::Stream::readUInt(a2, 1) != 0;
  *((uint8_t *)self + 69) = gameswf::Stream::readUInt(a2, 1) != 0;
  *((uint8_t *)self + 70) = gameswf::Stream::readUInt(a2, 1) != 0;
  *((uint8_t *)self + 71) = gameswf::Stream::readUInt(a2, 1) != 0;
  v2 = gameswf::Stream::readUInt(a2, 1);
  v6 = gameswf::Stream::readUInt(a2, 1);
  v4 = gameswf::Stream::readUInt(a2, 1);
  gameswf::Stream::readUInt(a2, 1);
  *((uint8_t *)self + 72) = gameswf::Stream::readUInt(a2, 1) != 0;
  v7 = gameswf::Stream::readUInt(a2, 1);
  *((uint8_t *)self + 73) = gameswf::Stream::readUInt(a2, 1) != 0;
  *((uint8_t *)self + 74) = gameswf::Stream::readUInt(a2, 1) != 0;
  gameswf::Stream::readUInt(a2, 1);
  *((uint8_t *)self + 75) = gameswf::Stream::readUInt(a2, 1) != 0;
  *((uint8_t *)self + 76) = gameswf::Stream::readUInt(a2, 1) != 0;
  if ( v4 != 0 )
  {
    *((uint32_t *)self + 20) = (uint16_t)gameswf::Stream::readU16(a2);
    *((float *)self + 22) = (float)(uint16_t)gameswf::Stream::readU16(a2) * 0.05f;
  }
  if ( v2 != 0 )
    gameswf::Color::read_rgba((gameswf::EditTextCharacterDef::Self *)((char *)self + 92), a2);
  if ( v6 != 0 )
    *((uint32_t *)self + 24) = (uint16_t)gameswf::Stream::readU16(a2);
  if ( v7 != 0 )
  {
    *((uint32_t *)self + 25) = (uint8_t)gameswf::Stream::readU8(a2);
    *((float *)self + 26) = (float)(uint16_t)gameswf::Stream::readU16(a2) * 0.05f;
    *((float *)self + 27) = (float)(uint16_t)gameswf::Stream::readU16(a2) * 0.05f;
    *((float *)self + 28) = (float)(int16_t)gameswf::Stream::readS16(a2) * 0.05f;
    *((float *)self + 29) = (float)(int16_t)gameswf::Stream::readS16(a2) * 0.05f;
  }
  gameswf::Stream::readString((gameswf::Self **)a2, (gameswf::Self **)self + 12);
  result = (char *)UInt;
  if ( UInt != 0 )
  {
    gameswf::Stream::readString((gameswf::Self **)a2, (gameswf::Self **)self + 30);
    return gameswf::removeHTML((gameswf::EditTextCharacterDef::Self *)((char *)self + 120));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::EditTextCharacterDef::getBoundInternal  (binary VA: 0x1107880)
// Original: gameswf::EditTextCharacterDef::getBoundInternal
// ----------------------------------------------------------------------------
gameswf::Rect::Self * gameswf::EditTextCharacterDef::getBoundInternal(gameswf::EditTextCharacterDef::Self *self, gameswf::Rect::Self *a2)
{
  *(uint32_t *)a2 = *((uint32_t *)self + 8);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 9);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 10);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 11);
  return a2;
}


