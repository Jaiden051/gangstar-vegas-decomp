#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameConditionIsAttacked.h"

// ----------------------------------------------------------------------------
// Function: ActorGameConditionIsAttacked::CreateInstance  (binary VA: 0x0)
// Original: ActorGameConditionIsAttacked::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameConditionIsAttacked::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameConditionIsAttacked::ActorGameConditionIsAttacked(v3, -1);
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
    v3 = gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameConditionIsAttacked::ActorGameConditionIsAttacked(v3, a1);
  }
  return v3;
}



// Constructor (0xc4eff0):
int (**ActorGameConditionIsAttacked::ActorGameConditionIsAttacked(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *((uint8_t *)a1 + 52) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C448);
  return (int (**)(int))(uintptr_t)(&off_206C448);
}
// ----------------------------------------------------------------------------
// Function: ActorGameConditionIsAttacked::Destroy  (binary VA: 0x0)
// Original: ActorGameConditionIsAttacked::~ActorGameConditionIsAttacked
// ----------------------------------------------------------------------------
void ActorGameConditionIsAttacked::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C448);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FF50  (binary VA: 0x0)
// Original: sub_C3FF50
// ----------------------------------------------------------------------------
void sub_C3FF50(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C448);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C439E0  (binary VA: 0x0)
// Original: sub_C439E0
// ----------------------------------------------------------------------------
int sub_C439E0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  void *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint8_t v13[20];
  uint32_t *v14;
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
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 5, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Attacked [C]", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetDisplayName(a1, &v15);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Conditions", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetCategoryName(a1, &v16);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "In", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddPin(a1, 0, &v27, 1, -1);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Out", (int)(uintptr_t)(v13));
  grapher::ActorBase::AddPin(a1, 1, &v28, 0, -1);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Attacked", (int)(uintptr_t)(&v13[1]));
  grapher::ActorBase::AddPin(a1, 2, &v29, 0, -1);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Right Damage", (int)(uintptr_t)(&v13[2]));
  grapher::ActorBase::AddPin(a1, 4, &v30, 0, -1);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v31), "Wrong Damage", (int)(uintptr_t)(&v13[3]));
  grapher::ActorBase::AddPin(a1, 3, v31, 0, -1);
  g4_std::string::Destroy(v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "The targets to kill or to keep alive", (int)(uintptr_t)(&v10) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Target", (int)(uintptr_t)(&v10) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v13[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v17, 9, &v13[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Target", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v18), v5, 1, 1, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  if ( *(uint32_t *)&v13[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v13[4] + 44))(*(uint32_t *)&v13[4]);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Filter on the damage that must be done", (int)(uintptr_t)(&v11) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Damage Filter", (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "DamageFilter.All", (int)(uintptr_t)(&v11));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &v20);
  v14 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v21, 11, &v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Damage Filter", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v22), v7, 1, 1, (int)(uintptr_t)(&v23), 3);
  g4_std::string::Destroy(&v22);
  if ( v14 != nullptr )
    G4_VCALL<void>(v14, 44);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Ignore Damage under this threshold (in health points)", (int)(uintptr_t)(&v12) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Damage Threshold", (int)(uintptr_t)(&v12));
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v24, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Damage Health Threshold", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v25), v8, 1, 1, (int)(uintptr_t)(&v26), 3);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  return ((g4_std::string::Destroy(&v26)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C53110  (binary VA: 0x0)
// Original: sub_C53110
// ----------------------------------------------------------------------------
void sub_C53110(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v4;
  grapher::ActorContext::Self *v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
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
  int v22;
  grapher::ActorContext::Self *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  grapher::ActorContext::Self *v28;
  uint32_t *v29;
  uint32_t v30[7];

  v30[0] = (uint32_t)(uintptr_t)(v30);
  v30[1] = (uint32_t)(uintptr_t)(v30);
  sub_8560A0(a1, 0, (int)(uintptr_t)(v30), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v23 = sub_837200((int)(uintptr_t)(a1), Variable, a3, v10, v12, v14, v16, v18, v20, v22, v25, (grapher::ActorContext::Self *)v30);
  v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v5 = sub_837200((int)(uintptr_t)(a1), v4, a3, v11, v13, v15, v17, v19, v21, (int)(uintptr_t)(v23), v26, v28);
  v6 = (uint32_t *)v30[0];
  v27 = (int)(uintptr_t)(v5);
  if ( (uint32_t *)v30[0] == v29 )
    return;
  do
  {
    while ( 1 )
    {
      v7 = v6[2];
      if ( v7 != 0
        && (*(uint8_t (**)(uint32_t))(*(uint32_t *)v7 + 248))(v6[2]) != 0
        && *((uint8_t *)a1 + 52) == 0 )
      {
        grapher::ActorBase::FireEvent(a1, 2, a3);
        *((uint8_t *)a1 + 52) = 1;
      }
      if ( G4_VCALL<uint8_t>(v7, 256) != 0
        && G4_VCALL<int>(v7, 164) >= v27 )
      {
        if ( (G4_VCALL<int>(v7, 160) & v24) != 0 )
          break;
        if ( G4_VCALL<int>(v7, 160) > 0 )
          grapher::ActorBase::FireEvent(a1, 3, a3);
      }
      v6 = (uint32_t *)*v6;
      if ( v6 == v29 )
        goto LABEL_12;
    }
    grapher::ActorBase::FireEvent(a1, 4, a3);
    v6 = (uint32_t *)*v6;
  }
  while ( v6 != v29 );
LABEL_12:
  v8 = (uint32_t *)v30[0];
  if ( (uint32_t *)v30[0] != v29 )
  {
    while ( 1 )
    {
      v9 = (uint32_t *)*v8;
      opDelete(v8);
      if ( v9 == v29 )
        break;
      v8 = v9;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C418F0  (binary VA: 0x0)
// Original: sub_C418F0
// ----------------------------------------------------------------------------
int sub_C418F0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  if ( a2 == 0 )
    *((uint8_t *)a1 + 52) = 0;
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


