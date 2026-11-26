#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterMelee.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterMelee::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterMelee::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterMelee::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterMelee::ActorGameCharacterMelee(v3, -1);
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
    ActorGameCharacterMelee::ActorGameCharacterMelee(v3, a1);
  }
  return v3;
}



// Constructor (0xc66520):
int (**ActorGameCharacterMelee::ActorGameCharacterMelee(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CE68);
  return (int (**)(int))(uintptr_t)(&off_206CE68);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterMelee::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterMelee::~ActorGameCharacterMelee
// ----------------------------------------------------------------------------
void ActorGameCharacterMelee::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CE68);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B350  (binary VA: 0x0)
// Original: sub_C5B350
// ----------------------------------------------------------------------------
void sub_C5B350(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CE68);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C652F0  (binary VA: 0x0)
// Original: sub_C652F0
// ----------------------------------------------------------------------------
int sub_C652F0(grapher::ActorBase::Self *a1)
{
  void *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11[8];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "Melee", (int)(uintptr_t)(&v3));
  grapher::ActorBase::SetDisplayName(a1, &v5);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "AI", (int)(uintptr_t)(&v3) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v6);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Reset", (int)(uintptr_t)(&v4) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v10, 1, -1);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "Out", (int)(uintptr_t)(&v4) + 3);
  grapher::ActorBase::AddPin(a1, 1, v11, 0, -1);
  g4_std::string::Destroy(v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Reset combo", (int)(uintptr_t)(&v4) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Combo", (int)(uintptr_t)(&v3) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v7, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Combo", (int)(uintptr_t)(&v4));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v8), v2, 1, 0, (int)(uintptr_t)(&v9), 3);
  g4_std::string::Destroy(&v8);
  g4_std::string::Destroy(&v7);
  { g4_std::string::Destroy(&v9); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C67DD0  (binary VA: 0x0)
// Original: sub_C67DD0
// ----------------------------------------------------------------------------
int sub_C67DD0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  grapher::ActorVariable::Self *Variable;
  char v5;
  int v7;
  int v8;
  int v9;
  int *v10;
  g4_cxa_guard_t *v11;
  g4_cxa_guard_t *v12;
  int v13;
  int v14;
  int v15[4];

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15) + 1, "Subject", (int)(uintptr_t)(v15));
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    v10 = (int *)(&dword_20D4A60);
    sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D4A64 == 0 )
    v3 = (int *)(&dword_20D4A60);
  v11 = (g4_cxa_guard_t *)sub_5B44E0((int)(uintptr_t)(v3), (int)(uintptr_t)(v15) + 1, (unsigned int)(uintptr_t)(a3));
  g4_std::string::Destroy((char *)v15 + 1);
  if ( v11 != nullptr )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
    v5 = sub_837730((int)(uintptr_t)(a1), Variable, a3, v7, v8, v9, (int)(uintptr_t)(v10), (int)(uintptr_t)(v11), v13, v14);
    sub_9832E0((int)(uintptr_t)(v12), v5);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


