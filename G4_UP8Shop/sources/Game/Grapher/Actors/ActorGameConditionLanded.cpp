#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameConditionLanded.h"

// ----------------------------------------------------------------------------
// Function: ActorGameConditionLanded::CreateInstance  (binary VA: 0x0)
// Original: ActorGameConditionLanded::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameConditionLanded::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameConditionLanded::ActorGameConditionLanded(v3, -1);
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
    ActorGameConditionLanded::ActorGameConditionLanded(v3, a1);
  }
  return v3;
}



// Constructor (0xc4f080):
int (**ActorGameConditionLanded::ActorGameConditionLanded(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C4C8);
  return (int (**)(int))(uintptr_t)(&off_206C4C8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameConditionLanded::Destroy  (binary VA: 0x0)
// Original: ActorGameConditionLanded::~ActorGameConditionLanded
// ----------------------------------------------------------------------------
void ActorGameConditionLanded::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C4C8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FF10  (binary VA: 0x0)
// Original: sub_C3FF10
// ----------------------------------------------------------------------------
void sub_C3FF10(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C4C8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C44340  (binary VA: 0x0)
// Original: sub_C44340
// ----------------------------------------------------------------------------
int sub_C44340(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Landed [C]", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Conditions", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "In", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Out", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v14, 0, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Landed", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 2, v15, 0, -1);
  g4_std::string::Destroy(v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "The gameobject that will must go in the zone", (int)(uintptr_t)(&v6));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Target", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v7 = v3;
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, &v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Target", (int)(uintptr_t)(&v5) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( v7 != nullptr )
    G4_VCALL<void>(v7, 44);
  g4_std::string::Destroy(&v10);
  { g4_std::string::Destroy(&v12); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C419C0  (binary VA: 0x0)
// Original: sub_C419C0
// ----------------------------------------------------------------------------
char sub_C419C0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  g4_cxa_guard_t *v6;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 == 0 )
    return v3;
  v3 = *(uint32_t *)(*(uint32_t *)(v3 + 408) - 12);
  if ( v3 == 0 )
    return v3;
  v3 = *(uint32_t *)(v4 + 404);
  if ( v3 == 0 )
    return v3;
  if ( (*(uint8_t (**)(uint32_t))(*(uint32_t *)v3 + 36))(*(uint32_t *)(v4 + 404)) != 0 )
  {
    v6 = (g4_cxa_guard_t *)(*(uint32_t *)(**(uint32_t **)(v4 + 780) - 12) + *(uint32_t *)(v4 + 780));
    if ( G4_VCALL<uint8_t>(v6, 220) == 0 )
    {
      LOBYTE(v3) = G4_VCALL<int>(v4, 432);
      if ( (uint8_t)v3 == 0 )
        return v3;
    }
  }
  else
  {
    v3 = *(uint32_t *)(*(uint32_t *)(v4 + 408) - 12);
    if ( v3 == 0 )
      return v3;
    v3 = *(uint32_t *)(v4 + 404);
    if ( v3 == 0 )
      return v3;
    LOBYTE(v3) = (*(int (**)(uint32_t))(*(uint32_t *)v3 + 32))(*(uint32_t *)(v4 + 404));
    if ( (v3 & 2) == 0 )
      return v3;
    if ( (*(uint8_t (**)(uint32_t))(**(uint32_t **)(v4 + 1836) + 44))(*(uint32_t *)(v4 + 1836)) == 0 )
    {
      LOBYTE(v3) = sub_97EB90(v4);
      if ( (uint8_t)v3 == 0 )
        return v3;
    }
    LOBYTE(v3) = sub_9873F0(v4, 13);
    if ( (uint8_t)v3 != 0 )
      return v3;
    LOBYTE(v3) = sub_9873F0(v4, 12);
    if ( (uint8_t)v3 != 0 )
      return v3;
    LOBYTE(v3) = sub_9873F0(v4, 10);
    if ( (uint8_t)v3 != 0 )
      return v3;
    LOBYTE(v3) = sub_9873F0(v4, 11);
    if ( (uint8_t)v3 != 0 )
      return v3;
    LOBYTE(v3) = sub_9873F0(v4, 12);
    if ( (uint8_t)v3 != 0 )
      return v3;
  }
  grapher::ActorBase::FireEvent(a1, 2, a3);
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::RemoveFromUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_C41820  (binary VA: 0x0)
// Original: sub_C41820
// ----------------------------------------------------------------------------
int sub_C41820(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  G4_VCALL<void>(a1, 28, a3);
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


