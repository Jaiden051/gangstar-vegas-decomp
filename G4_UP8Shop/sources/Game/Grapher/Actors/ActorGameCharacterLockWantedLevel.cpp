#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterLockWantedLevel.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterLockWantedLevel::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterLockWantedLevel::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterLockWantedLevel::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterLockWantedLevel::ActorGameCharacterLockWantedLevel(v3, -1);
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
    ActorGameCharacterLockWantedLevel::ActorGameCharacterLockWantedLevel(v3, a1);
  }
  return v3;
}



// Constructor (0xc664e0):
int (**ActorGameCharacterLockWantedLevel::ActorGameCharacterLockWantedLevel(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CE28);
  return (int (**)(int))(uintptr_t)(&off_206CE28);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterLockWantedLevel::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterLockWantedLevel::~ActorGameCharacterLockWantedLevel
// ----------------------------------------------------------------------------
void ActorGameCharacterLockWantedLevel::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CE28);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B310  (binary VA: 0x0)
// Original: sub_C5B310
// ----------------------------------------------------------------------------
void sub_C5B310(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CE28);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C64F90  (binary VA: 0x0)
// Original: sub_C64F90
// ----------------------------------------------------------------------------
int sub_C64F90(grapher::ActorBase::Self *a1)
{
  void *v2;
  void *v3;
  int v4;
  int v5;
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
  int v17[8];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Lock Wanted Level", (int)(uintptr_t)(&v4));
  grapher::ActorBase::SetDisplayName(a1, &v7);
  g4_std::string::Destroy(&v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Characters", (int)(uintptr_t)(&v4) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Lock", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Unlock", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v16, 1, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), "Out", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 2, v17, 0, -1);
  g4_std::string::Destroy(v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "The wanted wanted level to stick", (int)(uintptr_t)(&v5) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "WantedLevel", (int)(uintptr_t)(&v4) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v9, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "W. Level", (int)(uintptr_t)(&v5));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v10), v2, 1, 1, (int)(uintptr_t)(&v11), 3);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v9);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "How many time the wanted level set is on", (int)(uintptr_t)(&v6));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "LockTime", (int)(uintptr_t)(&v5) + 2);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v12, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Lock Time", (int)(uintptr_t)(&v5) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v13), v3, 1, 1, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v12);
  { g4_std::string::Destroy(&v14); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C690F0  (binary VA: 0x0)
// Original: sub_C690F0
// ----------------------------------------------------------------------------
int sub_C690F0(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v5;
  grapher::ActorVariable::Self *v6;
  grapher::ActorContext::Self *v7;
  int *v8;
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  void *v17;
  void *v18;
  g4_cxa_guard_t *v19;
  g4_cxa_guard_t *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  grapher::ActorContext::Self *v27;

  if ( a3 != 0 )
  {
    if ( a3 == 1 )
    {
      if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
      {
        sub_971D40((int)(uintptr_t)(&dword_20D3BC0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
        __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
      }
      v10 = nullptr;
      if ( byte_20D3BC4 == 0 )
        v10 = (int *)(&dword_20D3BC0);
      sub_9729A0((int)(uintptr_t)(v10));
    }
  }
  else
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 1);
    v5 = sub_837200((int)(uintptr_t)(a2), Variable, nullptr, v11, v13, v15, (int)(uintptr_t)(v17), (int)(uintptr_t)(v19), v21, v23, v25, a1);
    v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
    v7 = sub_837200((int)(uintptr_t)(a2), v6, nullptr, v12, v14, v16, (int)(uintptr_t)(v18), (int)(uintptr_t)(v20), v22, v24, v26, v27);
    if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
    {
      sub_971D40((int)(uintptr_t)(&dword_20D3BC0));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
      __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
    }
    v8 = nullptr;
    if ( byte_20D3BC4 == 0 )
      v8 = (int *)(&dword_20D3BC0);
    sub_972930((int)(uintptr_t)(v8), (int)(uintptr_t)(v7), (int)(uintptr_t)(v5));
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 2, a4));
}


