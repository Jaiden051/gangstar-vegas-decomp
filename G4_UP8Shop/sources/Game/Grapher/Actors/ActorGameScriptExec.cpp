#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameScriptExec.h"

// ----------------------------------------------------------------------------
// Function: ActorGameScriptExec::CreateInstance  (binary VA: 0x0)
// Original: ActorGameScriptExec::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameScriptExec::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameScriptExec::ActorGameScriptExec(v3, -1);
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
    ActorGameScriptExec::ActorGameScriptExec(v3, a1);
  }
  return v3;
}



// Constructor (0x829990):
int (**ActorGameScriptExec::ActorGameScriptExec(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BA28);
  return (int (**)(int))(uintptr_t)(&off_205BA28);
}
// ----------------------------------------------------------------------------
// Function: ActorGameScriptExec::Destroy  (binary VA: 0x0)
// Original: ActorGameScriptExec::~ActorGameScriptExec
// ----------------------------------------------------------------------------
int ActorGameScriptExec::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BA28);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8205F0  (binary VA: 0x0)
// Original: sub_8205F0
// ----------------------------------------------------------------------------
void sub_8205F0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BA28);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_824CD0  (binary VA: 0x0)
// Original: sub_824CD0
// ----------------------------------------------------------------------------
int sub_824CD0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v3;
  void *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "ScriptExec", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), (char *)&unk_1B15112, (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "In", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Out", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v14, 0, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Completed", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 2, v15, 0, -1);
  g4_std::string::Destroy(v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Script to execute", (int)(uintptr_t)(&v6));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Object", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v7 = v3;
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 4, &v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Script name", (int)(uintptr_t)(&v5) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( v7 != nullptr )
    G4_VCALL<void>(v7, 44);
  g4_std::string::Destroy(&v10);
  { g4_std::string::Destroy(&v12); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8347D0  (binary VA: 0x0)
// Original: sub_8347D0
// ----------------------------------------------------------------------------
int sub_8347D0(grapher::ActorBase::Self *a1)
{
  uint8_t v2[7];
  int v3;
  uint8_t v4[4];
  int v5;
  int v6;
  int v7;
  int v8[8];

  grapher::ActorBase::GetVariable(a1, 0);
  sub_837C70(v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3), "EXEC_", (int)(uintptr_t)(v2));
  g4_std::string::construct_copy(&v2[3], &v3);
  g4_std::string::append_str(&v2[3], v4);
  g4_std::string::Destroy(&v3);
  g4_std::string::Destroy(v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), *(char **)&v2[3], (int)(uintptr_t)(&v2[1]));
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::RegisterActorForManualEvent(&unk_20D5B60, &v5, a1, 0);
  g4_std::string::Destroy(&v5);
  grapher::ActorBase::GetVariable(a1, 0);
  sub_837C70(&v6);
  v7 = (int)(uintptr_t)(&dword_213B814);
  sub_1939B80(&v7, *(uint32_t *)(v6 - 12) + 10);
  g4_std::string::append((int)(uintptr_t)(&v7), "COMPLETED_", 0xAu);
  g4_std::string::append_str(&v7, &v6);
  g4_std::string::assign_str(&v2[3], &v7);
  g4_std::string::Destroy(&v7);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v8), *(char **)&v2[3], (int)(uintptr_t)(&v2[2]));
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::RegisterActorForManualEvent(&unk_20D5B60, v8, a1, 2);
  g4_std::string::Destroy(v8);
  return ((g4_std::string::Destroy(&v2[3])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_834450  (binary VA: 0x0)
// Original: sub_834450
// ----------------------------------------------------------------------------
int sub_834450(grapher::ActorBase::Self *a1)
{
  uint16_t v2[3];
  int v3;
  uint8_t v4[4];
  int v5;
  int v6;
  int v7[8];

  grapher::ActorBase::GetVariable(a1, 0);
  sub_837C70(v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3), "END_", (int)(uintptr_t)(v2));
  g4_std::string::construct_copy(&v2[1], &v3);
  g4_std::string::append_str(&v2[1], v4);
  g4_std::string::Destroy(&v3);
  g4_std::string::Destroy(v4);
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  if ( (uint8_t)grapher::ActorManager::IsActorRegisteredForManualEvent(&unk_20D5B60, &v2[1], a1, 2) != 0 )
  {
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    }
    grapher::ActorManager::DeregisterActorForManualEvent(&unk_20D5B60, &v2[1]);
  }
  if ( dword_20DA2A0 == 0 )
  {
    grapher::ActorBase::GetVariable(a1, 0);
    sub_837C70(&v5);
    v6 = (int)(uintptr_t)(&dword_213B814);
    sub_1939B80(&v6, *(uint32_t *)(v5 - 12) + 10);
    g4_std::string::append((int)(uintptr_t)(&v6), "COMPLETED_", 0xAu);
    g4_std::string::append_str(&v6, &v5);
    g4_std::string::assign_str(&v2[1], &v6);
    g4_std::string::Destroy(&v6);
    g4_std::string::Destroy(&v5);
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    }
    if ( (uint8_t)grapher::ActorManager::IsActorRegisteredForManualEvent(&unk_20D5B60, &v2[1], a1, 2) != 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v7), *(char **)&v2[1], (int)(uintptr_t)(v2) + 1);
      if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
      }
      grapher::ActorManager::DeregisterActorForManualEvent(&unk_20D5B60, v7);
      g4_std::string::Destroy(v7);
    }
  }
  return ((g4_std::string::Destroy(&v2[1])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_834050  (binary VA: 0x0)
// Original: sub_834050
// ----------------------------------------------------------------------------
int sub_834050(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;
  grapher::ActorBase::Self *v4;
  grapher::ActorContext::Self *v5;
  const char *v6;
  int v7;
  int *v8;
  size_t v9;
  const char *v10;
  void *v11;
  char *v12;
  char *v13;
  uint32_t v14[4];
  uint8_t v15[4];
  uint8_t v16[4];
  int v17;
  int v18[4];

  v18[3] = (int)(uintptr_t)(&a1);
  result = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 != 0 )
  {
    if ( a2 == 2 )
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
  }
  else
  {
    grapher::ActorBase::GetVariable(a1, 0);
    sub_837C70(v16);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "END_", (int)(uintptr_t)(&v13));
    g4_std::string::construct_copy(v15, &v17);
    g4_std::string::append_str(v15, v16);
    g4_std::string::Destroy(&v17);
    g4_std::string::Destroy(v16);
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    }
    if ( (uint8_t)grapher::ActorManager::IsActorRegisteredForManualEvent(&unk_20D5B60, v15, v4, 2) == 0 )
    {
      if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
      }
      grapher::ActorManager::RegisterActorForManualEvent(&unk_20D5B60, v15, v4, 2);
    }
    grapher::ActorBase::GetVariable(v4, 0);
    sub_837C70(v14);
    if ( g4_std::string::compare((int)(uintptr_t)(v14), "ScriptedBehaviorScript") == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Subject", (int)(uintptr_t)(&v13) + 1);
      if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
      {
        sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
        __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
      }
      v8 = nullptr;
      if ( byte_20D4A64 == 0 )
        v8 = (int *)(&dword_20D4A60);
      v11 = (void *)sub_5B44E0((int)(uintptr_t)(v8), (int)(uintptr_t)(v18), (unsigned int)(uintptr_t)(v5));
      g4_std::string::Destroy(v18);
      v12 = *((char **)v11 + 792);
      v9 = strlen(v12);
      g4_std_compat::string_assign((int)(uintptr_t)(v14), v12, v9);
    }
    v6 = (const char *)v14[0];
    if ( byte_20D5B50 == 0 )
    {
      v10 = (const char *)v14[0];
      v7 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50);
      v6 = v10;
      if ( v7 != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
        v6 = v10;
      }
    }
    grapher::ActorManager::FireManualEvent((grapher::ActorManager::Self *)&unk_20D5B60, v6, v5);
    grapher::ActorBase::FireEvent(v4, 1, v5);
    g4_std::string::Destroy(v14);
    return ((g4_std::string::Destroy(v15)), (int)0);
  }
  return result;
}


