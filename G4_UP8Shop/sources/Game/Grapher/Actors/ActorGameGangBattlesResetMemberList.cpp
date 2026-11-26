#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameGangBattlesResetMemberList.h"

// ----------------------------------------------------------------------------
// Function: ActorGameGangBattlesResetMemberList::CreateInstance  (binary VA: 0x0)
// Original: ActorGameGangBattlesResetMemberList::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameGangBattlesResetMemberList::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameGangBattlesResetMemberList::ActorGameGangBattlesResetMemberList(v3, -1);
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
    ActorGameGangBattlesResetMemberList::ActorGameGangBattlesResetMemberList(v3, a1);
  }
  return v3;
}



// Constructor (0xc4f880):
int (**ActorGameGangBattlesResetMemberList::ActorGameGangBattlesResetMemberList(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C7A8);
  return (int (**)(int))(uintptr_t)(&off_206C7A8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameGangBattlesResetMemberList::Destroy  (binary VA: 0x0)
// Original: ActorGameGangBattlesResetMemberList::~ActorGameGangBattlesResetMemberList
// ----------------------------------------------------------------------------
void ActorGameGangBattlesResetMemberList::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C7A8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FED0  (binary VA: 0x0)
// Original: sub_C3FED0
// ----------------------------------------------------------------------------
void sub_C3FED0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C7A8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C46AA0  (binary VA: 0x0)
// Original: sub_C46AA0
// ----------------------------------------------------------------------------
int sub_C46AA0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v3;
  void *v4;
  int v5;
  int64_t v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "ResetMemberList", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v7);
  g4_std::string::Destroy(&v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "GangBattles", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "In", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v12, 1, -1);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "Out", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 1, v13, 0, -1);
  g4_std::string::Destroy(v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Clan type", (int)(uintptr_t)(&v6) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Clan", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  HIDWORD(v6) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v9, 11, (char *)&v6 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Clan type", (int)(uintptr_t)(&v6));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v10), v4, 1, 1, (int)(uintptr_t)(&v11), 1);
  g4_std::string::Destroy(&v10);
  if ( HIDWORD(v6) != 0 )
    G4_VCALL<void>(HIDWORD(v6), 44);
  g4_std::string::Destroy(&v9);
  { g4_std::string::Destroy(&v11); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C52A00  (binary VA: 0x0)
// Original: sub_C52A00
// ----------------------------------------------------------------------------
int sub_C52A00(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  int *v4;
  int v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int v14;
  int v15;
  int v16;

  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    v13 = (int *)(&dword_20D3C40);
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D3C44 == 0 )
    v4 = (int *)(&dword_20D3C40);
  v5 = v4[123];
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
  v7 = sub_837200((int)(uintptr_t)(a2), Variable, a4, v9, v10, v11, v12, (int)(uintptr_t)(v13), v14, v15, v16, a1);
  sub_8EA7D0(v5, (int)(uintptr_t)(v7));
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 1, a4));
}


