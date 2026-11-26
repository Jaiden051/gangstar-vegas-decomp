#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterSwitchJetpackMode.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSwitchJetpackMode::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterSwitchJetpackMode::CreateInstance
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * ActorGameCharacterSwitchJetpackMode::CreateInstance(unsigned int a1, int a2, int a3)
{
  grapher::ActorBase::Self *v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterSwitchJetpackMode::ActorGameCharacterSwitchJetpackMode(v3, 0xFFFFFFFF);
    if ( v3 != nullptr )
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
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameCharacterSwitchJetpackMode::ActorGameCharacterSwitchJetpackMode(v3, a1);
  }
  return v3;
}



// Constructor (0x854cc0):
int (**ActorGameCharacterSwitchJetpackMode::ActorGameCharacterSwitchJetpackMode(grapher::ActorBase::Self *a1, unsigned int a2))(grapher::ActorBase::Self *)
{
  grapher::ActorBase::Construct(a1, a2);
  *((uint8_t *)a1 + 52) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D8E8);
  return (int (**)(grapher::ActorBase::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_205D8E8));
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSwitchJetpackMode::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterSwitchJetpackMode::~ActorGameCharacterSwitchJetpackMode
// ----------------------------------------------------------------------------
void ActorGameCharacterSwitchJetpackMode::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D750  (binary VA: 0x0)
// Original: sub_84D750
// ----------------------------------------------------------------------------
void sub_84D750(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_852EB0  (binary VA: 0x0)
// Original: sub_852EB0
// ----------------------------------------------------------------------------
int sub_852EB0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v3;
  void *v4;
  void *v5;
  int v6;
  int v7;
  int v8;
  g4_int128_t v9;
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
  int v22[4];

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "{Base}", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::SetDisplayName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), (char *)&unk_1B15112, (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetCategoryName(a1, &v19);
  g4_std::string::Destroy(&v19);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Switch Jetpack Mode", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Characters", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "In", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Switch completed", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v21, 0, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "Out", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddPin(a1, 2, v22, 0, -1);
  g4_std::string::Destroy(v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "The jetpack's driver.", (int)(uintptr_t)(&v7) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Subject", (int)(uintptr_t)(&v7) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v9) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v12, 9, (char *)&v9 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Subject", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v13), v4, 1, 1, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  if ( DWORD1(v9) != 0 )
    G4_VCALL<void>(DWORD1(v9), 44);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "True to start driving the vehicle, False to start walking with the vehicle.", (int)(uintptr_t)(&v8) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Start Driving", (int)(uintptr_t)(&v8));
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Flying", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v16), v5, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v15);
  { g4_std::string::Destroy(&v17); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_857C70  (binary VA: 0x0)
// Original: sub_857C70
// ----------------------------------------------------------------------------
void sub_857C70(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  int *v4;
  bool v5;
  void **v6;
  g4_cxa_guard_t *v7;
  void *v8[9];

  v8[0] = v8;
  v8[1] = v8;
  sub_856780(a1, 0, (int)(uintptr_t)(v8), (int)(uintptr_t)(a3), 1);
  v3 = (void **)v8[0];
  if ( v8[0] != v8 )
  {
    v7 = *((g4_cxa_guard_t **)v8[0] + 2);
    while ( 1 )
    {
      v6 = (void **)*v3;
      opDelete(v3);
      if ( v6 == v8 )
        break;
      v3 = v6;
    }
    if ( v7 != nullptr )
    {
      v4 = (int *)G4_VCALL<int>(v7, 16);
      if ( v4 != nullptr )
      {
        if ( v4 == (int *)(&dword_20D75F0) )
          goto LABEL_12;
        while ( 1 )
        {
          v4 = (int *)v4[1];
          if ( v4 == nullptr )
            break;
          if ( v4 == (int *)(&dword_20D75F0) )
            goto LABEL_12;
        }
      }
    }
  }
  v7 = nullptr;
LABEL_12:
  if ( *((uint8_t *)a1 + 52) != 0 && v7 != nullptr && *((uint8_t *)v7 + 2853) == 0 )
  {
    v5 = byte_20D5B50 == 0;
    *((uint8_t *)a1 + 52) = 0;
    if ( v5 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    }
    grapher::ActorManager::RemoveFromUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
    grapher::ActorBase::FireEvent(a1, 1, a3);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_858510  (binary VA: 0x0)
// Original: sub_858510
// ----------------------------------------------------------------------------
int sub_858510(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void ***v3;
  int *v4;
  grapher::ActorVariable::Self *Variable;
  int v7;
  grapher::ActorVariable::Self *v8;
  int v9;
  g4_cxa_guard_t v10;
  bool v11;
  int v12;
  int v13;
  void **v14;
  g4_cxa_guard_t *v15;
  g4_cxa_guard_t *v16;
  int v17;
  char v18;
  int v19;
  int v20;
  void *v21[9];

  v21[0] = v21;
  v21[1] = v21;
  sub_856780(a1, 0, (int)(uintptr_t)(v21), (int)(uintptr_t)(a3), 1);
  v3 = (void ***)v21[0];
  if ( v21[0] == v21 )
    goto LABEL_11;
  v15 = *((g4_cxa_guard_t **)v21[0] + 2);
  while ( 1 )
  {
    v14 = *v3;
    opDelete(v3);
    if ( v14 == v21 )
      break;
    v3 = (void ***)v14;
  }
  if ( v15 == nullptr || (v4 = (int *)G4_VCALL<int>(v15, 16)) == nullptr )
  {
LABEL_11:
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    sub_837730((int)(uintptr_t)(a1), Variable, a3, v12, v13, (int)(uintptr_t)(v14), (int)(uintptr_t)(v15), v17, v19, v20);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
  }
  while ( v4 != (int *)(&dword_20D75F0) )
  {
    v4 = (int *)v4[1];
    if ( v4 == nullptr )
      goto LABEL_11;
  }
  v7 = G4_VCALL<int>(v15, 456);
  v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v18 = sub_837730((int)(uintptr_t)(a1), v8, a3, v12, v13, (int)(uintptr_t)(v14), (int)(uintptr_t)(v15), v17, v19, v20);
  if ( v7 == 0 || G4_VCALL<uint8_t>(v7, 564) == 0 )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
  if ( v18 != 0 )
  {
    if ( G4_VCALL<int>(v16, 456) == 0 || (*((uint8_t *)v16 + 1873) & 8) == 0 )
      goto LABEL_18;
  }
  else
  {
    if ( G4_VCALL<int>(v16, 456) == 0 )
      goto LABEL_18;
    v9 = v16[468];
    v10 = v16[469];
    if ( (v9 & 0x100) == 0 || v9 < 0 || (v10 & 1) != 0 || (v10 & 4) != 0 )
      goto LABEL_18;
  }
  if ( *((uint8_t *)v16 + 2853) != 0 )
  {
LABEL_18:
    grapher::ActorBase::FireEvent(a1, 1, a3);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
  }
  v11 = byte_20D5B50 == 0;
  *((uint8_t *)a1 + 52) = 1;
  *((uint8_t *)v16 + 2853) = 1;
  if ( v11 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  return ((grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3)), (int)0);
}


