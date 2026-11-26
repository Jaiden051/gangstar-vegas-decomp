#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameMissionIsCompleted.h"

// ----------------------------------------------------------------------------
// Function: ActorGameMissionIsCompleted::CreateInstance  (binary VA: 0x0)
// Original: ActorGameMissionIsCompleted::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameMissionIsCompleted::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameMissionIsCompleted::ActorGameMissionIsCompleted(v3, -1);
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
    ActorGameMissionIsCompleted::ActorGameMissionIsCompleted(v3, a1);
  }
  return v3;
}



// Constructor (0xc381e0):
int (**ActorGameMissionIsCompleted::ActorGameMissionIsCompleted(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BBC8);
  return (int (**)(int))(uintptr_t)(&off_206BBC8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameMissionIsCompleted::Destroy  (binary VA: 0x0)
// Original: ActorGameMissionIsCompleted::~ActorGameMissionIsCompleted
// ----------------------------------------------------------------------------
void ActorGameMissionIsCompleted::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BBC8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B6B0  (binary VA: 0x0)
// Original: sub_C2B6B0
// ----------------------------------------------------------------------------
void sub_C2B6B0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BBC8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2D8F0  (binary VA: 0x0)
// Original: sub_C2D8F0
// ----------------------------------------------------------------------------
int sub_C2D8F0(grapher::ActorBase::Self *a1)
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
  int v11;
  int v12[8];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "IsCompleted", (int)(uintptr_t)(&v3));
  grapher::ActorBase::SetDisplayName(a1, &v5);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "Missions", (int)(uintptr_t)(&v3) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v6);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "In", (int)(uintptr_t)(&v4) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v10, 1, -1);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Comleted", (int)(uintptr_t)(&v4) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v11, 0, -1);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v12), "Not Comleted", (int)(uintptr_t)(&v4) + 3);
  grapher::ActorBase::AddPin(a1, 3, v12, 0, -1);
  g4_std::string::Destroy(v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "The mission id to test for completion.", (int)(uintptr_t)(&v4));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Mission ID", (int)(uintptr_t)(&v3) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v7, 11, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Mission ID", (int)(uintptr_t)(&v3) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v8), v2, 1, 1, (int)(uintptr_t)(&v9), 1);
  g4_std::string::Destroy(&v8);
  g4_std::string::Destroy(&v7);
  { g4_std::string::Destroy(&v9); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C395A0  (binary VA: 0x0)
// Original: sub_C395A0
// ----------------------------------------------------------------------------
int sub_C395A0(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v5;
  int *v6;
  int v7;
  int v9;
  int v10;
  int v11;
  void *v12;
  g4_cxa_guard_t *v13;
  int v14;
  int v15;
  int v16;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
  v5 = sub_837200((int)(uintptr_t)(a2), Variable, a4, v9, v10, v11, (int)(uintptr_t)(v12), (int)(uintptr_t)(v13), v14, v15, v16, a1);
  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v6 = nullptr;
  if ( byte_20D3C44 == 0 )
    v6 = (int *)(&dword_20D3C40);
  v7 = sub_633950((int)(uintptr_t)(v6), (int)(uintptr_t)(v5));
  grapher::ActorBase::FireEvent(a2, (v7 != 3) + 2, a4);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 1, a4));
}


