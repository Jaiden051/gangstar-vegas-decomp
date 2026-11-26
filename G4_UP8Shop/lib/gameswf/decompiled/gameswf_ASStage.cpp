#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASStage.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASStage::init  (binary VA: 0x114d620)
// Original: gameswf::ASStage::init
// ----------------------------------------------------------------------------
void gameswf::ASStage::init()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASStage::getStandardMember  (binary VA: 0x11514a0)
// Original: gameswf::ASStage::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASStage::getStandardMember(gameswf::Player::Self **a1, int a2, gameswf::ASValue::Self *a3)
{
  gameswf::Player::Self *v4;
  int v5;
  int v6;
  int MovieWidth;
  gameswf::Player::Self *v8;
  char *Controller;
  gameswf::Player::Self *v10;
  gameswf::Player::Self *v11;
  gameswf::Root::Self *v12;
  int v13;
  int v14;

  if ( a2 == 65 )
  {
    v14 = *(uint32_t *)(gameswf::Player::getRoot(a1[4]) + 148);
    if ( v14 == 1 )
    {
      gameswf::ASValue::setString(a3, "NO_BORDER");
      return 1;
    }
    else
    {
      if ( v14 == 2 )
        gameswf::ASValue::setString(a3, "SHOW_ALL");
      else
        gameswf::ASValue::setString(a3, "EXACT_FIT");
      return 1;
    }
  }
  if ( a2 <= 65 )
  {
    if ( a2 == 63 )
    {
      v11 = a1[4];
      v12 = nullptr;
      v13 = *((uint32_t *)v11 + 34);
      if ( v13 != 0 )
      {
        v12 = *((gameswf::Root::Self **)v11 + 34);
        if ( *(uint8_t *)(*((uint32_t *)v11 + 33) + 2) == 0 )
        {
          sub_7E5ED0((gameswf::Self **)v11 + 33, nullptr);
          *((uint32_t *)v11 + 34) = 0;
          v11 = a1[4];
          v13 = 0;
          v12 = *((gameswf::Root::Self **)v11 + 34);
        }
      }
      if ( *(uint32_t *)(v13 + 148) == 3 )
      {
        if ( v12 != nullptr && *(uint8_t *)(*((uint32_t *)v11 + 33) + 2) == 0 )
        {
          sub_7E5ED0((gameswf::Self **)v11 + 33, nullptr);
          *((uint32_t *)v11 + 34) = 0;
        }
        gameswf::ASValue::setDouble(a3, (double)*(int *)(*((uint32_t *)v11 + 34) + 28));
        return 1;
      }
      if ( v12 != nullptr && *(uint8_t *)(*((uint32_t *)v11 + 33) + 2) == 0 )
      {
        sub_7E5ED0((gameswf::Self **)v11 + 33, nullptr);
        *((uint32_t *)v11 + 34) = 0;
        v12 = nullptr;
      }
      MovieWidth = gameswf::Root::getMovieWidth(v12);
    }
    else if ( a2 <= 63 )
    {
      if ( a2 == 8 )
      {
        v10 = a1[4];
        if ( *((uint32_t *)v10 + 34) != 0 && *(uint8_t *)(*((uint32_t *)v10 + 33) + 2) == 0 )
        {
          sub_7E5ED0((gameswf::Self **)v10 + 33, nullptr);
          *((uint32_t *)v10 + 34) = 0;
        }
        MovieWidth = gameswf::Root::getMovieWidth(*((gameswf::Root::Self **)v10 + 34));
      }
      else
      {
        if ( a2 != 9 )
          return gameswf::SpriteInstance::getStandardMember((gameswf::ASObject::Self *)a1, a2, a3);
        v8 = a1[4];
        if ( *((uint32_t *)v8 + 34) != 0 && *(uint8_t *)(*((uint32_t *)v8 + 33) + 2) == 0 )
        {
          sub_7E5ED0((gameswf::Self **)v8 + 33, nullptr);
          *((uint32_t *)v8 + 34) = 0;
        }
        MovieWidth = gameswf::Root::getMovieHeight(*((gameswf::Root::Self **)v8 + 34));
      }
    }
    else
    {
      v4 = a1[4];
      v5 = *((uint32_t *)v4 + 34);
      v6 = v5;
      if ( v5 != 0 && *(uint8_t *)(*((uint32_t *)v4 + 33) + 2) == 0 )
      {
        sub_7E5ED0((gameswf::Self **)v4 + 33, nullptr);
        *((uint32_t *)v4 + 34) = 0;
        v4 = a1[4];
        v5 = 0;
        v6 = *((uint32_t *)v4 + 34);
      }
      if ( *(uint32_t *)(v5 + 148) == 3 )
      {
        if ( v6 != 0 && *(uint8_t *)(*((uint32_t *)v4 + 33) + 2) == 0 )
        {
          sub_7E5ED0((gameswf::Self **)v4 + 33, nullptr);
          *((uint32_t *)v4 + 34) = 0;
          v6 = 0;
        }
        gameswf::ASValue::setDouble(a3, (double)*(int *)(v6 + 32));
        return 1;
      }
      if ( v6 != 0 && *(uint8_t *)(*((uint32_t *)v4 + 33) + 2) == 0 )
      {
        sub_7E5ED0((gameswf::Self **)v4 + 33, nullptr);
        *((uint32_t *)v4 + 34) = 0;
      }
      MovieWidth = gameswf::Root::getMovieHeight(*((gameswf::Root::Self **)v4 + 34));
    }
    gameswf::ASValue::setDouble(a3, (double)MovieWidth);
    return 1;
  }
  if ( a2 != 97 )
    return gameswf::SpriteInstance::getStandardMember((gameswf::ASObject::Self *)a1, a2, a3);
  Controller = gameswf::RenderFX::getController(*((gameswf::RenderFX::Self **)a1[4] + 52), 0);
  gameswf::ASValue::setObject(a3, *((gameswf::ASObject::Self **)Controller + 3));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASStage::setStandardMember  (binary VA: 0x1157c80)
// Original: gameswf::ASStage::setStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASStage::setStandardMember(long double a1, gameswf::Player::Self **a2, int a3, gameswf::ASValue::Self *a4)
{
  gameswf::ASStageAlign::Self *v5;
  int AlignMode;
  gameswf::Root::Self *Root;
  gameswf::Character::Self *v8;
  int v9;
  gameswf::Self *v10[12];

  if ( a3 == 66 )
  {
    if ( *(uint8_t *)a4 == 3 || *(uint8_t *)a4 == 4 )
    {
      v5 = *((gameswf::ASStageAlign::Self **)a4 + 1);
    }
    else
    {
      v5 = (gameswf::ASStageAlign::Self *)&byte_20D6378;
      if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
      {
        byte_20D6378 = 1;
        v9 = dword_20D6388 | 0x7FFFFF;
        byte_20D6379 = 0;
        dword_20D6388 = v9;
        BYTE2(dword_20D6388) = BYTE2(v9) & 0x7F;
        HIBYTE(dword_20D6388) = HIBYTE(v9) | 1;
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
        __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
      }
    }
    AlignMode = gameswf::ASStageAlign::getAlignMode(v5);
    Root = (gameswf::Root::Self *)gameswf::Player::getRoot(a2[4]);
    gameswf::Root::setAlignMode(Root, AlignMode);
    return 1;
  }
  else if ( a3 == 97 )
  {
    v8 = nullptr;
    if ( *(uint8_t *)a4 == 5 )
    {
      v8 = *((gameswf::Character::Self **)a4 + 1);
      if ( v8 != nullptr
        && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v8 + 8))(*((uint32_t *)a4 + 1), 1) == 0 )
      {
        v8 = nullptr;
      }
    }
    gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v10, v8);
    gameswf::RenderFX::setFocus(*((gameswf::Character::Self ***)a2[4] + 52), (gameswf::CharacterHandle::Self *)v10, 0, 1);
    gameswf::CharacterHandle::Destroy(v10);
    return 1;
  }
  else
  {
    return gameswf::SpriteInstance::setStandardMember(a1, (gameswf::RefCounted::Self *)a2, a3, (gameswf::RefCounted::Self **)a4);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASStage::Construct  (binary VA: 0x1157e30)
// Original: gameswf::ASStage::ASStage
// ----------------------------------------------------------------------------
gameswf::ASStage::Self * gameswf::ASStage::Construct(gameswf::Self **self, gameswf::Player::Self *a2, gameswf::MovieDefinitionSub::Self *a3)
{
  gameswf::Self **v3;
  gameswf::ASStage::Self *result;
  int v5;
  int v6;
  char *v7;
  gameswf::Self *v8;
  gameswf::Self *v9;
  int v10;
  uint8_t *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint16_t *v16;
  unsigned int v17;
  uint16_t *v18;
  int v19;

  v3 = self;
  gameswf::SpriteInstance::Construct(self, a2, a3, nullptr, nullptr, nullptr);
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_2090888);
  if ( byte_2115852 >= 0 )
  {
    v5 = (int)(uintptr_t)(*(self + 19));
    if ( v5 == 0 )
    {
      v15 = opNew(0x94u);
      v16 = (uint16_t *)(v15 + 32);
      v5 = v15;
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
      if ( ((uint8_t)(uintptr_t)v16 & 2) != 0 )
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
      v19 = *(uint32_t *)(v15 + 92);
      *(uint32_t *)(v5 + 32) = 1065353216;
      v19 |= 0x7FFFFFu;
      *(uint32_t *)(v5 + 48) = 1065353216;
      *(uint32_t *)(v5 + 92) = v19;
      *(uint32_t *)(v5 + 56) = 0;
      *(uint32_t *)(v5 + 60) = 0;
      *(uint32_t *)(v5 + 64) = 0;
      *(uint32_t *)(v5 + 68) = 0;
      *(uint32_t *)(v5 + 72) = 0;
      *(uint8_t *)(v5 + 76) = 1;
      *(uint8_t *)(v5 + 77) = 0;
      *(uint8_t *)(v5 + 94) = BYTE2(v19) & 0x7F;
      *(uint16_t *)(v5 + 95) = HIBYTE(v19) | 1;
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
      *(self + 19) = (gameswf::Self *)v5;
    }
    result = (gameswf::ASStage::Self *)(v5 + 76);
    if ( (char *)(v5 + 76) != (char *)(&byte_2115840) )
    {
      if ( byte_2115840 == -1 )
        v6 = dword_2115844 - 1;
      else
        v6 = byte_2115840 - 1;
      gameswf::String::resize((gameswf::String::Self *)(v5 + 76), v6);
      LOBYTE(v7) = *(uint8_t *)(v5 + 76);
      v8 = (gameswf::Self *)&unk_2115841;
      if ( byte_2115840 == -1 )
        v8 = (gameswf::Self *)dword_211584C;
      if ( (uint8_t)(uintptr_t)v7 == 0xFF )
      {
        v7 = *(char **)(v5 + 80);
        v9 = *(gameswf::Self **)(v5 + 88);
      }
      else
      {
        v7 = (char *)(char)(uintptr_t)v7;
        v9 = (gameswf::Self *)(v5 + 77);
      }
      gameswf::Strcpy_s(v9, v7, v8);
      if ( (uint8_t *)((*(const int *)&unk_2115850) &0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( byte_2115840 == -1 )
        {
          v11 = (uint8_t *)dword_211584C;
          v12 = dword_2115844 - 1;
        }
        else
        {
          v11 = (uint8_t *)(&unk_2115841);
          v12 = byte_2115840 - 1;
        }
        v10 = 5381;
        if ( v12 > 0 )
        {
          do
          {
            --v12;
            v13 = 33 * v10;
            v14 = (uint8_t)v11[v12] + 32;
            if ( (uint8_t)(v11[v12] - 65) > 0x19u )
              v14 = (uint8_t)v11[v12];
            v10 = v13 ^ v14;
          }
          while ( v12 != 0 );
          v3 = self;
          v10 = v10 << 9 >> 9;
        }
        (*(int *)&unk_2115850) = v10 &0x7FFFFF | (*(const int *)&unk_2115850) &0xFF800000;
      }
      else
      {
        v10 = (int)((*(const int *)&unk_2115850) << 9) >> 9;
      }
      *(uint32_t *)(v5 + 92) = v10 & 0x7FFFFF | *(uint32_t *)(v5 + 92) & 0xFF800000;
      result = (gameswf::ASStage::Self *)((gameswf::Self *)((char *)v3[19] + 76));
    }
    v3[15] = (gameswf::Self *)(result);
  }
  else
  {
    result = (gameswf::ASStage::Self *)&byte_2115840;
    *(self + 15) = (gameswf::Self *)&byte_2115840;
  }
  *((uint8_t *)v3 + 152) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASStage::newOp  (binary VA: 0x11581c0)
// Original: gameswf::ASStage::newOp
// ----------------------------------------------------------------------------
gameswf::Self ** gameswf::ASStage::newOp(gameswf::ASStage::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  gameswf::Self **v8;
  char v10[48];

  sub_776320((gameswf::String::Self *)v10, (gameswf::Self *)&unk_1B15112);
  v1 = opNew(0x128u);
  gameswf::MovieDefImpl::Construct(
    (pthread_mutex_t **)v1,
    self,
    (pthread_mutex_t *)((char *)&dword_0 + 1),
    (pthread_mutex_t *)((char *)&dword_0 + 1),
    v10);
  sub_59CE50((int)(uintptr_t)(v10));
  v2 = *(uint32_t *)(v1 + 88);
  *(uint32_t *)(v1 + 52) = 1;
  if ( v2 == 0 )
  {
    *(uint32_t *)(v1 + 92) = *(uint32_t *)(v1 + 92) & 0xFF000000 | 1;
    v3 = gameswf::malloc_internal(0x10u);
    *(uint8_t *)(v1 + 95) = 1;
    v4 = *(uint32_t *)(v1 + 92) << 8;
    *(uint32_t *)(v1 + 88) = v3;
    v5 = v4 >> 8;
    if ( v5 > 0 )
    {
      v6 = 0;
      while ( 1 )
      {
        v7 = (uint32_t *)(16 * v6 + v3);
        if ( v7 != nullptr )
        {
          *v7 = 0;
          v7[1] = 0;
          v7[2] = 0;
          v7[3] = 0;
          v5 = (int)(*(uint32_t *)(v1 + 92) << 8) >> 8;
        }
        if ( ++v6 >= v5 )
          break;
        v3 = *(uint32_t *)(v1 + 88);
      }
    }
  }
  v8 = (gameswf::Self **)opNew(0x130u);
  gameswf::ASStage::Construct(v8, (gameswf::Player::Self *)(self), (gameswf::MovieDefinitionSub::Self *)v1);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASStage::setRoot  (binary VA: 0x11582e0)
// Original: gameswf::ASStage::setRoot
// ----------------------------------------------------------------------------
int gameswf::ASStage::setRoot(gameswf::ASStage::Self *self, gameswf::Character::Self *a2)
{
  gameswf::Character::Self *v2;
  gameswf::RefCounted::Self *v3;
  gameswf::Self *WeakProxy;
  int v6;
  int v7;
  int v8;
  char *v9;
  gameswf::Self *v10;
  gameswf::Self *v11;
  int v12;
  uint8_t *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint16_t *v18;
  unsigned int v19;
  uint16_t *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  char v28;
  int v29;
  int v30;
  gameswf::Self *v31;
  int v32;

  v2 = a2;
  if ( byte_2115872 >= 0 )
  {
    v6 = *((uint32_t *)a2 + 19);
    if ( v6 == 0 )
    {
      v17 = opNew(0x94u);
      v18 = (uint16_t *)(v17 + 32);
      v6 = v17;
      *(uint32_t *)v17 = 1065353216;
      *(uint32_t *)(v17 + 8) = 1065353216;
      *(uint32_t *)(v17 + 16) = 1065353216;
      *(uint32_t *)(v17 + 24) = 1065353216;
      *(uint32_t *)(v17 + 4) = 0;
      *(uint32_t *)(v17 + 12) = 0;
      *(uint32_t *)(v17 + 20) = 0;
      *(uint32_t *)(v17 + 28) = 0;
      v19 = 24;
      if ( ((v17 + 32) & 1) != 0 )
      {
        *(uint8_t *)(v17 + 32) = 0;
        v18 = (uint16_t *)(v17 + 33);
        LOBYTE(v19) = 23;
      }
      if ( ((uint8_t)(uintptr_t)v18 & 2) != 0 )
      {
        *v18 = 0;
        v19 -= 2;
        ++v18;
      }
      memset(v18, 0, 4 * (v19 >> 2));
      v20 = &v18[2 * (v19 >> 2)];
      if ( (v19 & 2) != 0 )
        *v20++ = 0;
      if ( (v19 & 1) != 0 )
        *(uint8_t *)v20 = 0;
      v21 = *(uint32_t *)(v17 + 92);
      *(uint32_t *)(v6 + 32) = 1065353216;
      v21 |= 0x7FFFFFu;
      *(uint32_t *)(v6 + 48) = 1065353216;
      *(uint32_t *)(v6 + 92) = v21;
      *(uint32_t *)(v6 + 56) = 0;
      *(uint32_t *)(v6 + 60) = 0;
      *(uint32_t *)(v6 + 64) = 0;
      *(uint32_t *)(v6 + 68) = 0;
      *(uint32_t *)(v6 + 72) = 0;
      *(uint8_t *)(v6 + 76) = 1;
      *(uint8_t *)(v6 + 77) = 0;
      *(uint8_t *)(v6 + 94) = BYTE2(v21) & 0x7F;
      *(uint16_t *)(v6 + 95) = HIBYTE(v21) | 1;
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
      *((uint32_t *)a2 + 19) = v6;
    }
    v7 = v6 + 76;
    if ( (char *)(v6 + 76) != (char *)(&byte_2115860) )
    {
      if ( byte_2115860 == -1 )
        v8 = dword_2115864 - 1;
      else
        v8 = byte_2115860 - 1;
      gameswf::String::resize((gameswf::String::Self *)(v6 + 76), v8);
      LOBYTE(v9) = *(uint8_t *)(v6 + 76);
      v10 = (gameswf::Self *)&unk_2115861;
      if ( byte_2115860 == -1 )
        v10 = (gameswf::Self *)dword_211586C;
      if ( (uint8_t)(uintptr_t)v9 == 0xFF )
      {
        v9 = *(char **)(v6 + 80);
        v11 = *(gameswf::Self **)(v6 + 88);
      }
      else
      {
        v9 = (char *)(char)(uintptr_t)v9;
        v11 = (gameswf::Self *)(v6 + 77);
      }
      gameswf::Strcpy_s(v11, v9, v10);
      v26 = (int)(uintptr_t)((*(uint32_t *)unk_2115870));
      if ( (uint8_t *)((*(const int *)&unk_2115870) &0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( byte_2115860 == -1 )
        {
          v13 = (uint8_t *)dword_211586C;
          v14 = dword_2115864 - 1;
        }
        else
        {
          v13 = (uint8_t *)(&unk_2115861);
          v14 = byte_2115860 - 1;
        }
        v12 = 5381;
        if ( v14 > 0 )
        {
          v27 = v6;
          v28 = (char)(uintptr_t)a2;
          do
          {
            v25 = (uint8_t)v13[--v14];
            v15 = 33 * v12;
            v16 = v25 + 32;
            if ( (uint8_t)(v13[v14] - 65) > 0x19u )
              v16 = (uint8_t)v13[v14];
            v12 = v15 ^ v16;
          }
          while ( v14 != 0 );
          v2 = a2;
          v12 = v12 << 9 >> 9;
        }
        (*(int *)&unk_2115870) = v12 &0x7FFFFF | (*(const int *)&unk_2115870) &0xFF800000;
      }
      else
      {
        v12 = (int)((*(const int *)&unk_2115870) << 9) >> 9;
      }
      *(uint32_t *)(v6 + 92) = v12 & 0x7FFFFF | *(uint32_t *)(v6 + 92) & 0xFF800000;
      v7 = *((uint32_t *)v2 + 19) + 76;
    }
    *((uint32_t *)v2 + 15) = v7;
    v3 = (gameswf::RefCounted::Self *)(self);
    *((uint32_t *)v2 + 14) = (uint32_t)(uintptr_t)(self);
    if ( self != nullptr )
      goto LABEL_3;
LABEL_17:
    sub_7E5ED0((gameswf::Self **)v2 + 13, nullptr);
    return gameswf::DisplayList::addDisplayObject(
             (gameswf::DisplayList::Self *)((char *)self + 212),
             v2,
             1,
             true,
             nullptr,
             nullptr,
             nullptr,
             1.0,
             0,
             v22,
             v23,
             v24,
             v25,
             v26,
             v27,
             v28,
             v29,
             v30,
             v31,
             v32);
  }
  *((uint32_t *)a2 + 15) = (uint32_t)(uintptr_t)(&byte_2115860);
  v3 = (gameswf::RefCounted::Self *)(self);
  *((uint32_t *)a2 + 14) = (uint32_t)(uintptr_t)(self);
  if ( self == nullptr )
    goto LABEL_17;
LABEL_3:
  WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v3);
  sub_7E5ED0((gameswf::Self **)v2 + 13, WeakProxy);
  return gameswf::DisplayList::addDisplayObject(
           (gameswf::DisplayList::Self *)((char *)self + 212),
           v2,
           1,
           true,
           nullptr,
           nullptr,
           nullptr,
           1.0,
           0,
           v22,
           v23,
           v24,
           v25,
           v26,
           v27,
           v28,
           v29,
           v30,
           v31,
           v32);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASStage::is  (binary VA: 0x1162100)
// Original: gameswf::ASStage::is
// ----------------------------------------------------------------------------
bool gameswf::ASStage::is(gameswf::ASStage::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 25 && a2 != 2 && a2 != 4 && a2 != 1 && a2 != 57 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASStage::Destroy  (binary VA: 0x1162260)
// Original: gameswf::ASStage::~ASStage
// ----------------------------------------------------------------------------
void gameswf::ASStage::Destroy(gameswf::ASStage::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090888);
  gameswf::SpriteInstance::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASStage::Destroy_ea11622e0  (binary VA: 0x11622e0)
// Original: gameswf::ASStage::~ASStage
// ----------------------------------------------------------------------------
void gameswf::ASStage::Destroy_ea11622e0(gameswf::ASStage::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090888);
  gameswf::SpriteInstance::Destroy(self);
  opDelete(self);
}


