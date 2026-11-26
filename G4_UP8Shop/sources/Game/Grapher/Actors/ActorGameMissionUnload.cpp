#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameMissionUnload.h"

// ----------------------------------------------------------------------------
// Function: ActorGameMissionUnload::CreateInstance  (binary VA: 0x0)
// Original: ActorGameMissionUnload::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameMissionUnload::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameMissionUnload::ActorGameMissionUnload(v3, -1);
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
    ActorGameMissionUnload::ActorGameMissionUnload(v3, a1);
  }
  return v3;
}



// Constructor (0xc381a0):
int (**ActorGameMissionUnload::ActorGameMissionUnload(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BB88);
  return (int (**)(int))(uintptr_t)(&off_206BB88);
}
// ----------------------------------------------------------------------------
// Function: ActorGameMissionUnload::Destroy  (binary VA: 0x0)
// Original: ActorGameMissionUnload::~ActorGameMissionUnload
// ----------------------------------------------------------------------------
void ActorGameMissionUnload::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BB88);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B670  (binary VA: 0x0)
// Original: sub_C2B670
// ----------------------------------------------------------------------------
void sub_C2B670(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BB88);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2D6C0  (binary VA: 0x0)
// Original: sub_C2D6C0
// ----------------------------------------------------------------------------
int sub_C2D6C0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "Mission End", (int)(uintptr_t)(&v3));
  grapher::ActorBase::SetDisplayName(a1, &v5);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "Missions", (int)(uintptr_t)(&v3) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v6);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "In", (int)(uintptr_t)(&v4) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v10, 1, -1);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "Out", (int)(uintptr_t)(&v4) + 3);
  grapher::ActorBase::AddPin(a1, 1, v11, 0, -1);
  g4_std::string::Destroy(v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Use fade in at the end of the mission screen.", (int)(uintptr_t)(&v4) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Use Fades", (int)(uintptr_t)(&v3) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v7, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Use Fades", (int)(uintptr_t)(&v4));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v8), v2, 1, 0, (int)(uintptr_t)(&v9), 3);
  g4_std::string::Destroy(&v8);
  g4_std::string::Destroy(&v7);
  { g4_std::string::Destroy(&v9); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C3B4C0  (binary VA: 0x0)
// Original: sub_C3B4C0
// ----------------------------------------------------------------------------
int sub_C3B4C0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  grapher::ActorVariable::Self *Variable;
  int *v5;
  int *v6;
  int *v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  g4_cxa_guard_t *v13;
  int v14;
  int v15;

  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    v12 = (int *)(&dword_20D3C40);
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D3C44 == 0 )
    v3 = (int *)(&dword_20D3C40);
  sub_632640((int)(uintptr_t)(v3));
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), Variable, a3, v9, v10, v11, (int)(uintptr_t)(v12), (int)(uintptr_t)(v13), v14, v15) == 0 )
  {
    if ( byte_20D4980 != 0 )
      goto LABEL_6;
    goto LABEL_16;
  }
  if ( byte_20D5DA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
  {
    sub_9BA6C0((int)(uintptr_t)(&dword_20D5DA8));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
    __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
  }
  v8 = nullptr;
  if ( byte_20D5DAC == 0 )
    v8 = (int *)(&dword_20D5DA8);
  sub_99C110((int)(uintptr_t)(v8), 9);
  if ( byte_20D4980 == 0 )
  {
LABEL_16:
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
    {
      sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
      __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
    }
  }
LABEL_6:
  v5 = nullptr;
  if ( byte_20D49A8 == 0 )
    v5 = (int *)(&dword_20D49A0);
  sub_82A420((int)(uintptr_t)(v5), 1, 1);
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v6 = nullptr;
  if ( byte_20D49A8 == 0 )
    v6 = (int *)(&dword_20D49A0);
  sub_82D430((int)(uintptr_t)(v6), 0);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


