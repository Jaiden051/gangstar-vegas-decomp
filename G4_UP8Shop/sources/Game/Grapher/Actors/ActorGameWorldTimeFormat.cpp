#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameWorldTimeFormat.h"

// ----------------------------------------------------------------------------
// Function: ActorGameWorldTimeFormat::CreateInstance  (binary VA: 0x0)
// Original: ActorGameWorldTimeFormat::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameWorldTimeFormat::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameWorldTimeFormat::ActorGameWorldTimeFormat(v3, -1);
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
    ActorGameWorldTimeFormat::ActorGameWorldTimeFormat(v3, a1);
  }
  return v3;
}



// Constructor (0x82a120):
int (**ActorGameWorldTimeFormat::ActorGameWorldTimeFormat(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BE68);
  return (int (**)(int))(uintptr_t)(&off_205BE68);
}
// ----------------------------------------------------------------------------
// Function: ActorGameWorldTimeFormat::Destroy  (binary VA: 0x0)
// Original: ActorGameWorldTimeFormat::~ActorGameWorldTimeFormat
// ----------------------------------------------------------------------------
int ActorGameWorldTimeFormat::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BE68);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8209F0  (binary VA: 0x0)
// Original: sub_8209F0
// ----------------------------------------------------------------------------
void sub_8209F0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BE68);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_829280  (binary VA: 0x0)
// Original: sub_829280
// ----------------------------------------------------------------------------
int sub_829280(grapher::ActorBase::Self *a1)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int v6;
  int v7;
  int v8;
  int v9;
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
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25[8];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Format Time", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "World", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "In", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v24, 1, -1);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v25), "Out", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddPin(a1, 1, v25, 0, -1);
  g4_std::string::Destroy(v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Time to convert in milliseconds", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Time in", (int)(uintptr_t)(&v6) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v12, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Time in", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v13), v2, 1, 1, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Minute", (int)(uintptr_t)(&v7) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Minutes", (int)(uintptr_t)(&v7) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v15, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Minutes", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v16), v3, 1, 1, (int)(uintptr_t)(&v17), 2);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Seconds", (int)(uintptr_t)(&v8) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Seconds", (int)(uintptr_t)(&v8));
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v18, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Seconds", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v19), v4, 1, 1, (int)(uintptr_t)(&v20), 2);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Milliseconds", (int)(uintptr_t)(&v9) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Milliseconds", (int)(uintptr_t)(&v8) + 3);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v21, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Milliseconds", (int)(uintptr_t)(&v9));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v22), v5, 1, 1, (int)(uintptr_t)(&v23), 2);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v21);
  { g4_std::string::Destroy(&v23); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_831B50  (binary VA: 0x0)
// Original: sub_831B50
// ----------------------------------------------------------------------------
int sub_831B50(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  int v5;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v5 = (int)(uintptr_t)(sub_837200(a1, Variable, a3));
  sub_836F40(a1, 1, v5 / 1000 / 60, a3);
  sub_836F40(a1, 2, v5 / 1000 % 60, a3);
  sub_836F40(a1, 3, v5 % 1000, a3);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


