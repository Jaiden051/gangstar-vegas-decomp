#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterCover.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterCover::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterCover::CreateInstance
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * ActorGameCharacterCover::CreateInstance(unsigned int a1, int a2, int a3)
{
  grapher::ActorBase::Self *v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterCover::ActorGameCharacterCover(v3, 0xFFFFFFFF);
    if ( v3 != nullptr )
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
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameCharacterCover::ActorGameCharacterCover(v3, a1);
  }
  return v3;
}



// Constructor (0x854f10):
int (**ActorGameCharacterCover::ActorGameCharacterCover(grapher::ActorBase::Self *a1, unsigned int a2))(grapher::ActorBase::Self *)
{
  grapher::ActorBase::Construct(a1, a2);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205DB28);
  return (int (**)(grapher::ActorBase::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_205DB28));
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterCover::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterCover::~ActorGameCharacterCover
// ----------------------------------------------------------------------------
void ActorGameCharacterCover::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D550  (binary VA: 0x0)
// Original: sub_84D550
// ----------------------------------------------------------------------------
void sub_84D550(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84F7E0  (binary VA: 0x0)
// Original: sub_84F7E0
// ----------------------------------------------------------------------------
int sub_84F7E0(grapher::ActorBase::Self *a1)
{
  int v2;
  int v3;
  uint8_t v4[7];
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12[4];

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "{Base}", (int)(uintptr_t)(&v3) + 1);
  grapher::ActorBase::SetDisplayName(a1, &v6);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), (char *)&unk_1B15112, (int)(uintptr_t)(&v3) + 2);
  grapher::ActorBase::SetCategoryName(a1, &v7);
  g4_std::string::Destroy(&v7);
  grapher::ActorBase::SetArraySize(a1, 5, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4[4]), "Cover", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v4[4]);
  g4_std::string::Destroy(&v4[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "AI", (int)(uintptr_t)(&v3));
  grapher::ActorBase::SetCategoryName(a1, &v5);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Enter", (int)(uintptr_t)(&v3) + 3);
  grapher::ActorBase::AddPin(a1, 0, &v8, 1, -1);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Exit", (int)(uintptr_t)(v4));
  grapher::ActorBase::AddPin(a1, 1, &v9, 1, -1);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Take", (int)(uintptr_t)(&v4[1]));
  grapher::ActorBase::AddPin(a1, 2, &v10, 1, -1);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Leave", (int)(uintptr_t)(&v4[2]));
  grapher::ActorBase::AddPin(a1, 3, &v11, 1, -1);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v12), "Out", (int)(uintptr_t)(&v4[3]));
  grapher::ActorBase::AddPin(a1, 4, v12, 0, -1);
  { g4_std::string::Destroy(v12); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_84DB80  (binary VA: 0x0)
// Original: sub_84DB80
// ----------------------------------------------------------------------------
int sub_84DB80(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  void *v5;
  int v6[4];

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6) + 1, "Subject", (int)(uintptr_t)(v6));
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D4A64 == 0 )
    v3 = (int *)(&dword_20D4A60);
  v5 = (void *)sub_5B44E0((int)(uintptr_t)(v3), (int)(uintptr_t)(v6) + 1, (unsigned int)(uintptr_t)(a3));
  g4_std::string::Destroy((char *)v6 + 1);
  if ( v5 != nullptr )
  {
    if ( a2 == 1 )
    {
      G4_VCALL<void>(v5, 720, 1);
    }
    else if ( a2 <= 1 )
    {
      if ( a2 == 0 )
        G4_VCALL<void>(v5, 716, 1);
    }
    else if ( a2 == 2 )
    {
      G4_VCALL<void>(v5, 716, 0);
    }
    else if ( a2 == 3 )
    {
      G4_VCALL<void>(v5, 720, 0);
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 4, a3));
}


