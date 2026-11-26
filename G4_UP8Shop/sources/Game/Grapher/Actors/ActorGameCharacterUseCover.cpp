#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterUseCover.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterUseCover::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterUseCover::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterUseCover::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterUseCover::ActorGameCharacterUseCover(v3, -1);
    if ( v3 != 0 )
    {
      G4_VCALL<void>(v3, 8);
      g4_std::string::construct_copy(v5, a2);
      grapher::ActorBase::SetTemplateName(v3, v5);
      g4_std::string::Destroy(v5);
      grapher::ActorBase::ParseAttributes(v3, a3);
    }
  }
  else
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameCharacterUseCover::ActorGameCharacterUseCover(v3, a1);
  }
  return v3;
}



// Constructor (0x845340):
int (**ActorGameCharacterUseCover::ActorGameCharacterUseCover(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C988);
  return (int (**)(int))(uintptr_t)(&off_205C988);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterUseCover::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterUseCover::~ActorGameCharacterUseCover
// ----------------------------------------------------------------------------
int ActorGameCharacterUseCover::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C988);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_839830  (binary VA: 0x0)
// Original: sub_839830
// ----------------------------------------------------------------------------
void sub_839830(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C988);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_83F8F0  (binary VA: 0x0)
// Original: sub_83F8F0
// ----------------------------------------------------------------------------
int sub_83F8F0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v3;
  void *v4;
  int v5;
  int v6;
  g4_int128_t v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Use Cover", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Player", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), (char *)&off_1B2B462, (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Use & Lock", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Unlock", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "The Player (not needed)", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Target", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Target", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 0, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  { g4_std::string::Destroy(&v12); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_84B2E0  (binary VA: 0x0)
// Original: sub_84B2E0
// ----------------------------------------------------------------------------
int sub_84B2E0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int v6;
  int *v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int v14;
  int *v15;

  switch ( a2 )
  {
    case 1:
      v10 = sub_8F0680(v3);
      sub_8E9510(v10, 1);
      *(uint8_t *)(sub_8F0680(v11) + 1090) = 0;
      v12 = sub_5A5890("Cover", 0x4651FFB5u);
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v13 = nullptr;
      if ( byte_20D49A8 == 0 )
        v13 = (int *)(&dword_20D49A0);
      sub_835950((int)(uintptr_t)(v13), v12, 0, 0);
      v14 = sub_5A5890("Cover", 0x4651FFB5u);
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v15 = nullptr;
      if ( byte_20D49A8 == 0 )
        v15 = (int *)(&dword_20D49A0);
      sub_835950((int)(uintptr_t)(v15), v14, 1, 0);
      break;
    case 2:
      *(uint8_t *)(sub_8F0680(v3) + 1090) = 1;
      v6 = sub_5A5890("Cover", 0x4651FFB5u);
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v7 = nullptr;
      if ( byte_20D49A8 == 0 )
        v7 = (int *)(&dword_20D49A0);
      sub_835950((int)(uintptr_t)(v7), v6, 1, 1);
      v8 = sub_5A5890("Cover", 0x4651FFB5u);
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v9 = nullptr;
      if ( byte_20D49A8 == 0 )
        v9 = (int *)(&dword_20D49A0);
      sub_835950((int)(uintptr_t)(v9), v8, 0, 1);
      break;
    case 0:
      v4 = sub_8F0680(v3);
      sub_8E9510(v4, 1);
      break;
    default:
      break;
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
}


