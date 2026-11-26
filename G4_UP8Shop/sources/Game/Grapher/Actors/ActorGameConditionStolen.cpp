#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameConditionStolen.h"

// ----------------------------------------------------------------------------
// Function: ActorGameConditionStolen::CreateInstance  (binary VA: 0x0)
// Original: ActorGameConditionStolen::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameConditionStolen::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x3Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameConditionStolen::ActorGameConditionStolen(v3, -1);
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
    v3 = gll_operator_new(0x3Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameConditionStolen::ActorGameConditionStolen(v3, a1);
  }
  return v3;
}



// Constructor (0xc50400):
int (**ActorGameConditionStolen::ActorGameConditionStolen(int a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)a1, a2);
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C508);
  *(uint8_t *)(a1 + 56) = 0;
  return (int (**)(int))(uintptr_t)(&off_206C508);
}
// ----------------------------------------------------------------------------
// Function: ActorGameConditionStolen::Destroy  (binary VA: 0x0)
// Original: ActorGameConditionStolen::~ActorGameConditionStolen
// ----------------------------------------------------------------------------
void ActorGameConditionStolen::Destroy(grapher::ActorBase::Self *a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C508);
  v1 = *((uint32_t *)a1 + 13);
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 52, v1 + 16);
  *((uint32_t *)a1 + 13) = 0;
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C503A0  (binary VA: 0x0)
// Original: sub_C503A0
// ----------------------------------------------------------------------------
void sub_C503A0(grapher::ActorBase::Self *a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C508);
  v1 = *((uint32_t *)a1 + 13);
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 52, v1 + 16);
  *((uint32_t *)a1 + 13) = 0;
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C44620  (binary VA: 0x0)
// Original: sub_C44620
// ----------------------------------------------------------------------------
int sub_C44620(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  int v8;
  int v9;
  int v10;
  uint8_t v11[20];
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 5, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Stolen [C]", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Conditions", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "In", (int)(uintptr_t)(&v9));
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Out", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v16, 0, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Stolen", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v17, 0, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Leave", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddPin(a1, 3, &v18, 0, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v26), "Wrong Vehicle", (int)(uintptr_t)(&v11[3]));
  grapher::ActorBase::AddPin(a1, 4, v26, 0, -1);
  g4_std::string::Destroy(v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "the vehicle to stole", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Target", (int)(uintptr_t)(&v10));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v11[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v19, 9, &v11[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Target", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v20), v5, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  if ( *(uint32_t *)&v11[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v11[4] + 44))(*(uint32_t *)&v11[4]);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Filter that matches vehicle to steal. Exclusive with target.", (int)(uintptr_t)(&v11[2]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Vehicle Filter", (int)(uintptr_t)(v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "VehicleFilter.All", (int)(uintptr_t)(&v10) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &v22);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v23, 11, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Vehicle Filter", (int)(uintptr_t)(&v11[1]));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v24), v7, 1, 1, (int)(uintptr_t)(&v25), 3);
  g4_std::string::Destroy(&v24);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v23);
  { g4_std::string::Destroy(&v25); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C543E0  (binary VA: 0x0)
// Original: sub_C543E0
// ----------------------------------------------------------------------------
int sub_C543E0(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  return sub_C54180(a1, a2, a4);
}

// ----------------------------------------------------------------------------
// Function: sub_C543F0  (binary VA: 0x0)
// Original: sub_C543F0
// ----------------------------------------------------------------------------
int sub_C543F0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;

  G4_VCALL<void>(a1, 28, a3);
  if ( a2 == 0 )
    *((uint8_t *)a1 + 56) = 0;
  sub_C54180((grapher::ActorContext::Self *)&dword_20B9FF4, a1, a3);
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  result = a2;
  if ( a2 == 0 )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
  return result;
}


