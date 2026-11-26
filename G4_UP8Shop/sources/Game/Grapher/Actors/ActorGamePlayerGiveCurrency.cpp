#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGamePlayerGiveCurrency.h"

// ----------------------------------------------------------------------------
// Function: ActorGamePlayerGiveCurrency::CreateInstance  (binary VA: 0x0)
// Original: ActorGamePlayerGiveCurrency::CreateInstance
// ----------------------------------------------------------------------------
int ActorGamePlayerGiveCurrency::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGamePlayerGiveCurrency::ActorGamePlayerGiveCurrency(v3, -1);
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
    ActorGamePlayerGiveCurrency::ActorGamePlayerGiveCurrency(v3, a1);
  }
  return v3;
}



// Constructor (0x829890):
int (**ActorGamePlayerGiveCurrency::ActorGamePlayerGiveCurrency(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B8E8);
  return (int (**)(int))(uintptr_t)(&off_205B8E8);
}
// ----------------------------------------------------------------------------
// Function: ActorGamePlayerGiveCurrency::Destroy  (binary VA: 0x0)
// Original: ActorGamePlayerGiveCurrency::~ActorGamePlayerGiveCurrency
// ----------------------------------------------------------------------------
int ActorGamePlayerGiveCurrency::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B8E8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8204F0  (binary VA: 0x0)
// Original: sub_8204F0
// ----------------------------------------------------------------------------
void sub_8204F0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B8E8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_823BB0  (binary VA: 0x0)
// Original: sub_823BB0
// ----------------------------------------------------------------------------
int sub_823BB0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Give Currency", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Player", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "In", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v18, 1, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 1, v19, 0, -1);
  g4_std::string::Destroy(v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Amount of the currency to give or remove.", (int)(uintptr_t)(&v7) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Amount", (int)(uintptr_t)(&v6) + 2);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v11, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Amount", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v3, 1, 1, (int)(uintptr_t)(&v13), 3);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Currency from the Currency enum in stock_items_struct.xml", (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Currency", (int)(uintptr_t)(&v7) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Currency.", (int)(uintptr_t)(&v7) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &v14);
  HIDWORD(v8) = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 11, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Currency", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v16), v5, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( HIDWORD(v8) != 0 )
    G4_VCALL<void>(HIDWORD(v8), 44);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v15);
  { g4_std::string::Destroy(&v17); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_831A20  (binary VA: 0x0)
// Original: sub_831A20
// ----------------------------------------------------------------------------
int sub_831A20(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  int v4;
  grapher::ActorVariable::Self *v5;
  int v6;
  int v7;
  int *v8;
  int v10;
  int v11;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v4 = (int)(uintptr_t)(sub_837200(a1, Variable, a3));
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v6 = (int)(uintptr_t)(sub_837200(a1, v5, a3));
  v7 = v6;
  if ( byte_20D34B0 == 0 )
  {
    v11 = v6;
    v10 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0);
    v7 = v11;
    if ( v10 != 0 )
    {
      sub_5B54D0((int)(uintptr_t)(&dword_20D34C0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
      __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
      v7 = v11;
    }
  }
  v8 = nullptr;
  if ( byte_20D34C4 == 0 )
    v8 = (int *)(&dword_20D34C0);
  sub_5B80A0((int)(uintptr_t)(v8), v4, v7);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


