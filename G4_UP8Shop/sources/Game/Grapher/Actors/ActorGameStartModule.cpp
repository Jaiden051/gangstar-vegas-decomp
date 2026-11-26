#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameStartModule.h"

// ----------------------------------------------------------------------------
// Function: ActorGameStartModule::CreateInstance  (binary VA: 0x0)
// Original: ActorGameStartModule::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameStartModule::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameStartModule::ActorGameStartModule(v3, -1);
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
    ActorGameStartModule::ActorGameStartModule(v3, a1);
  }
  return v3;
}



// Constructor (0xc38220):
int (**ActorGameStartModule::ActorGameStartModule(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BC08);
  return (int (**)(int))(uintptr_t)(&off_206BC08);
}
// ----------------------------------------------------------------------------
// Function: ActorGameStartModule::Destroy  (binary VA: 0x0)
// Original: ActorGameStartModule::~ActorGameStartModule
// ----------------------------------------------------------------------------
void ActorGameStartModule::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BC08);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B6F0  (binary VA: 0x0)
// Original: sub_C2B6F0
// ----------------------------------------------------------------------------
void sub_C2B6F0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BC08);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2F920  (binary VA: 0x0)
// Original: sub_C2F920
// ----------------------------------------------------------------------------
int sub_C2F920(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v3;
  void *v4;
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

  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Start Module", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Missions", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Out", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v18, 0, 4);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), "Respawn", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 1, v19, 0, 4);
  g4_std::string::Destroy(v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Script Name", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), (char *)&unk_1B15112, (int)(uintptr_t)(&v6) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &v11);
  HIDWORD(v8) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v12, 4, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Script Name", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v13), v4, 1, 0, (int)(uintptr_t)(&v14), 1);
  g4_std::string::Destroy(&v13);
  if ( HIDWORD(v8) != 0 )
    G4_VCALL<void>(HIDWORD(v8), 44);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), (char *)&unk_1B15112, (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Use Respawn Fade", (int)(uintptr_t)(&v7) + 3);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Use Respawn Fade", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v16), v5, 1, 0, (int)(uintptr_t)(&v17), 1);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v15);
  { g4_std::string::Destroy(&v17); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C3B1C0  (binary VA: 0x0)
// Original: sub_C3B1C0
// ----------------------------------------------------------------------------
int sub_C3B1C0(grapher::ActorBase::Self *a1)
{
  grapher::ActorVariable::Self *Variable;
  int v3;
  int v4;
  grapher::ActorManager::Self *v5;
  g4_cxa_guard_t *v6;
  int v7;
  int v8;
  char *v9;
  int v10[4];

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  sub_837C70(&v9, (int)(uintptr_t)(a1), Variable, nullptr, v3, v4, (int)(uintptr_t)(v5), (int)(uintptr_t)(v6), v7, v8, (int)(uintptr_t)(v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v10), v9, (int)(uintptr_t)(&v8) + 3);
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::RegisterActorForManualEvent(&unk_20D5B60, v10, a1, 0);
  g4_std::string::Destroy(v10);
  { g4_std::string::Destroy(&v9); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C3CDC0  (binary VA: 0x0)
// Original: sub_C3CDC0
// ----------------------------------------------------------------------------
int sub_C3CDC0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  int *v4;
  uint32_t *v5;
  int *v6;
  grapher::ActorVariable::Self *v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  void *v15;
  int *v16;
  g4_cxa_guard_t *v17;
  g4_cxa_guard_t *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  void *s2[4];

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  sub_837C70(s2, (int)(uintptr_t)(a1), Variable, a3, v11, v13, (int)(uintptr_t)(v15), (int)(uintptr_t)(v17), v19, v21, v23);
  if ( byte_20D3C30 == 0 )
  {
    v18 = (g4_cxa_guard_t *)&byte_20D3C30;
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
    {
      v16 = (int *)(&dword_20D3C40);
      sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
      __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
    }
  }
  v4 = nullptr;
  if ( byte_20D3C44 == 0 )
    v4 = (int *)(&dword_20D3C40);
  v5 = *(uint32_t **)sub_6313F0((int)(uintptr_t)(v4));
  if ( *(v5 - 3) == *((uint32_t *)s2[0] - 3) && memcmp(v5, s2[0], *(v5 - 3)) == 0 )
  {
    v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), v8, nullptr, v10, v12, v14, (int)(uintptr_t)(v16), (int)(uintptr_t)(v18), v20, v22) != 0 )
    {
      if ( byte_20D5DA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
      {
        sub_9BA6C0((int)(uintptr_t)(&dword_20D5DA8));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
        __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
      }
      v9 = nullptr;
      if ( byte_20D5DAC == 0 )
        v9 = (int *)(&dword_20D5DA8);
      sub_99C000((int)(uintptr_t)(v9), 10);
    }
    grapher::ActorBase::FireEvent(a1, 1, a3);
  }
  else
  {
    grapher::ActorBase::FireEvent(a1, a2, a3);
  }
  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  v6 = nullptr;
  if ( byte_20D3C44 == 0 )
    v6 = (int *)(&dword_20D3C40);
  sub_6313C0((int)(uintptr_t)(v6), (int)(uintptr_t)(s2));
  return ((g4_std::string::Destroy(s2)), (int)0);
}


