#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameStatCounters.h"

// ----------------------------------------------------------------------------
// Function: ActorGameStatCounters::CreateInstance  (binary VA: 0x0)
// Original: ActorGameStatCounters::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameStatCounters::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameStatCounters::ActorGameStatCounters(v3, -1);
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
    ActorGameStatCounters::ActorGameStatCounters(v3, a1);
  }
  return v3;
}



// Constructor (0x829ad0):
int (**ActorGameStatCounters::ActorGameStatCounters(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BB68);
  return (int (**)(int))(uintptr_t)(&off_205BB68);
}
// ----------------------------------------------------------------------------
// Function: ActorGameStatCounters::Destroy  (binary VA: 0x0)
// Original: ActorGameStatCounters::~ActorGameStatCounters
// ----------------------------------------------------------------------------
int ActorGameStatCounters::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BB68);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_820730  (binary VA: 0x0)
// Original: sub_820730
// ----------------------------------------------------------------------------
void sub_820730(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BB68);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_825670  (binary VA: 0x0)
// Original: sub_825670
// ----------------------------------------------------------------------------
int sub_825670(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  uint32_t *v4;
  void *v5;
  int v6;
  int v7;
  int64_t v8;
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
  int v19[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Inc StatCounters", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Stats", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "In", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v18, 1, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 1, v19, 0, -1);
  g4_std::string::Destroy(v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Stats to increment (see giv_stat_counters.xml).", (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "StatCounter", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "GIV_StatCounters.", (int)(uintptr_t)(&v6) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &v11);
  HIDWORD(v8) = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v12, 11, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "StatCounter", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v13), v5, 1, 1, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  if ( HIDWORD(v8) != 0 )
    G4_VCALL<void>(HIDWORD(v8), 44);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Increment to give to the stats. ( > 0)", (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Amount", (int)(uintptr_t)(&v7) + 3);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v15, 1, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Amount", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v16), v3, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v15);
  { g4_std::string::Destroy(&v17); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8316B0  (binary VA: 0x0)
// Original: sub_8316B0
// ----------------------------------------------------------------------------
int sub_8316B0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  int v4;
  grapher::ActorVariable::Self *v5;
  int v6;
  int v7;
  int v9;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v4 = (int)(uintptr_t)(sub_837200(a1, Variable, a3));
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v9 = (int)(uintptr_t)(sub_837200(a1, v5, a3));
  v7 = sub_8F0680(v6);
  if ( v7 != 0 )
    sub_8F3C20(v7, v4, v9);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


