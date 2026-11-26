#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameGangBattlesRetrieveMember.h"

// ----------------------------------------------------------------------------
// Function: ActorGameGangBattlesRetrieveMember::CreateInstance  (binary VA: 0x0)
// Original: ActorGameGangBattlesRetrieveMember::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameGangBattlesRetrieveMember::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameGangBattlesRetrieveMember::ActorGameGangBattlesRetrieveMember(v3, -1);
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
    ActorGameGangBattlesRetrieveMember::ActorGameGangBattlesRetrieveMember(v3, a1);
  }
  return v3;
}



// Constructor (0xc4f8c0):
int (**ActorGameGangBattlesRetrieveMember::ActorGameGangBattlesRetrieveMember(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C7E8);
  return (int (**)(int))(uintptr_t)(&off_206C7E8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameGangBattlesRetrieveMember::Destroy  (binary VA: 0x0)
// Original: ActorGameGangBattlesRetrieveMember::~ActorGameGangBattlesRetrieveMember
// ----------------------------------------------------------------------------
void ActorGameGangBattlesRetrieveMember::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C7E8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C40220  (binary VA: 0x0)
// Original: sub_C40220
// ----------------------------------------------------------------------------
void sub_C40220(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C7E8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C46D30  (binary VA: 0x0)
// Original: sub_C46D30
// ----------------------------------------------------------------------------
int sub_C46D30(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v3;
  void *v4;
  void *v5;
  int v6;
  int v7;
  long double v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "RetrieveClanMember", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "GangBattles", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "In", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 1, v18, 0, -1);
  g4_std::string::Destroy(v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Clan type", (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Clan", (int)(uintptr_t)(&v7));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v8) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v11, 11, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Clan type", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v4, 1, 1, (int)(uintptr_t)(&v13), 1);
  g4_std::string::Destroy(&v12);
  if ( DWORD1(v8) != 0 )
    G4_VCALL<void>(DWORD1(v8), 44);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Profile id", (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Profile id", (int)(uintptr_t)(&v7) + 3);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v14, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Profile ID", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v15), v5, 1, 1, (int)(uintptr_t)(&v16), 2);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v14);
  { g4_std::string::Destroy(&v16); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C532E0  (binary VA: 0x0)
// Original: sub_C532E0
// ----------------------------------------------------------------------------
int sub_C532E0(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  int *v4;
  uint32_t *v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  int v16;
  int v17;

  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    v14 = (int *)(&dword_20D3C40);
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D3C44 == 0 )
    v4 = (int *)(&dword_20D3C40);
  v5 = (uint32_t *)v4[123];
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
  v7 = sub_837200((int)(uintptr_t)(a2), Variable, a4, v10, v11, v12, v13, (int)(uintptr_t)(v14), v15, v16, v17, a1);
  v8 = sub_8EB230(v5, (int)(uintptr_t)(v7));
  sub_C4DA10(a2, v8, a4);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 1, a4));
}


