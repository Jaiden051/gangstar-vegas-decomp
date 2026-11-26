#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorBehavior.h"

// ----------------------------------------------------------------------------
// Function: ActorBehavior::CreateInstance  (binary VA: 0x0)
// Original: ActorBehavior::CreateInstance
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * ActorBehavior::CreateInstance(unsigned int a1, int a2, int a3)
{
  grapher::ActorBase::Self *v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorBehavior::ActorBehavior(v3, 0xFFFFFFFF);
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
    ActorBehavior::ActorBehavior(v3, a1);
  }
  return v3;
}



// Constructor (0x854b20):
int (**ActorBehavior::ActorBehavior(grapher::ActorBase::Self *a1, unsigned int a2))(grapher::ActorBase::Self *)
{
  grapher::ActorBase::Construct(a1, a2);
  *((uint32_t *)a1 + 13) = -1;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D728);
  return (int (**)(grapher::ActorBase::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_205D728));
}
// ----------------------------------------------------------------------------
// Function: ActorBehavior::Destroy  (binary VA: 0x0)
// Original: ActorBehavior::~ActorBehavior
// ----------------------------------------------------------------------------
void ActorBehavior::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D850  (binary VA: 0x0)
// Original: sub_84D850
// ----------------------------------------------------------------------------
void sub_84D850(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84F1E0  (binary VA: 0x0)
// Original: sub_84F1E0
// ----------------------------------------------------------------------------
int sub_84F1E0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v5;
  void *v6;
  uint32_t *v7;
  void *v8;
  uint32_t *v9;
  void *v10;
  int v11;
  int v12;
  int v13;
  uint8_t v14[20];
  uint32_t *v15;
  uint32_t *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31[4];

  sub_84EC10(a1);
  grapher::ActorBase::SetArraySize(a1, 5, 6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Behavior %BehaviorName", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetDisplayName(a1, &v17);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Behavior", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Out", (int)(uintptr_t)(v14));
  grapher::ActorBase::AddPin(a1, 1, &v28, 0, -1);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "On Enter", (int)(uintptr_t)(&v14[1]));
  grapher::ActorBase::AddPin(a1, 2, &v29, 0, -1);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "On Exit", (int)(uintptr_t)(&v14[2]));
  grapher::ActorBase::AddPin(a1, 3, &v30, 0, -1);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v31), "On Update", (int)(uintptr_t)(&v14[3]));
  grapher::ActorBase::AddPin(a1, 4, v31, 0, -1);
  g4_std::string::Destroy(v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Other behavior this behavior derives from", (int)(uintptr_t)(&v12) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Extends", (int)(uintptr_t)(&v11) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v14[4] = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v19, 4, &v14[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Extends", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v20), v6, 1, 0, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  if ( *(uint32_t *)&v14[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v14[4] + 44))(*(uint32_t *)&v14[4]);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Condition that must be verified to enter behavior", (int)(uintptr_t)(&v13));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "PredicateEnter", (int)(uintptr_t)(&v12) + 2);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v15 = v7;
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v22, 4, &v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "PredicateEnter", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v23), v8, 1, 0, (int)(uintptr_t)(&v24), 3);
  g4_std::string::Destroy(&v23);
  if ( v15 != nullptr )
    G4_VCALL<void>(v15, 44);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Condition that must be verified to exit behavior", (int)(uintptr_t)(&v13) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "PredicateExit", (int)(uintptr_t)(&v13) + 1);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v16 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v25, 4, &v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "PredicateExit", (int)(uintptr_t)(&v13) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v26), v10, 1, 0, (int)(uintptr_t)(&v27), 3);
  g4_std::string::Destroy(&v26);
  if ( v16 != nullptr )
    G4_VCALL<void>(v16, 44);
  g4_std::string::Destroy(&v25);
  { g4_std::string::Destroy(&v27); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8583A0  (binary VA: 0x0)
// Original: sub_8583A0
// ----------------------------------------------------------------------------
int sub_8583A0(grapher::ActorBase::Self *a1)
{
  grapher::ActorVariable::Self *Variable;
  bool v2;
  int v4;
  int v5;
  grapher::ActorManager::Self *v6;
  g4_cxa_guard_t *v7;
  int v8;
  int v9;
  int v10;
  uint32_t v11[4];

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  sub_837C70(v11, (int)(uintptr_t)(a1), Variable, nullptr, v4, v5, (int)(uintptr_t)(v6), (int)(uintptr_t)(v7), v8, v9, v10);
  v2 = byte_20D6700 == 0;
  *((uint32_t *)a1 + 13) = 0;
  if ( v2 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
    if ( byte_20D5B50 != 0 )
      goto LABEL_3;
  }
  else if ( byte_20D5B50 != 0 )
  {
    goto LABEL_3;
  }
  if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
LABEL_3:
  grapher::ActorManager::AddIntoUpdateList(
    (grapher::ActorManager::Self *)&unk_20D5B60,
    a1,
    (grapher::ActorContext::Self *)&unk_20D6720);
  return ((g4_std::string::Destroy(v11)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_84D9A0  (binary VA: 0x0)
// Original: sub_84D9A0
// ----------------------------------------------------------------------------
int sub_84D9A0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  return ((grapher::ActorManager::RemoveFromUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3)), (int)0);
}


