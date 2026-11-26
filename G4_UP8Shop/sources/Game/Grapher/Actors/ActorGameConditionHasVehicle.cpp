#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameConditionHasVehicle.h"

// ----------------------------------------------------------------------------
// Function: ActorGameConditionHasVehicle::CreateInstance  (binary VA: 0x0)
// Original: ActorGameConditionHasVehicle::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameConditionHasVehicle::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameConditionHasVehicle::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), -1);
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
    ActorGameConditionHasVehicle::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), a1);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ActorGameConditionHasVehicle::Construct  (binary VA: 0x0)
// Original: ActorGameConditionHasVehicle::ActorGameConditionHasVehicle
// ----------------------------------------------------------------------------
int ActorGameConditionHasVehicle::Construct(grapher::ActorBase::Self *a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *((uint32_t *)a1 + 13) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C388);
  return sub_84BB20((char *)a1 + 52, 0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameConditionHasVehicle::Destroy  (binary VA: 0x0)
// Original: ActorGameConditionHasVehicle::~ActorGameConditionHasVehicle
// ----------------------------------------------------------------------------
void ActorGameConditionHasVehicle::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C388);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FE50  (binary VA: 0x0)
// Original: sub_C3FE50
// ----------------------------------------------------------------------------
void sub_C3FE50(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C388);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C42AF0  (binary VA: 0x0)
// Original: sub_C42AF0
// ----------------------------------------------------------------------------
int sub_C42AF0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  void *v5;
  uint32_t *v6;
  void *v7;
  uint32_t *v8;
  void *v9;
  uint32_t *v10;
  void *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
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
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 5, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Has Vehicle (Imm=%Immediate) [C]", (int)(uintptr_t)(&v12));
  grapher::ActorBase::SetDisplayName(a1, &v20);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Conditions", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v21);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "In", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddPin(a1, 0, &v35, 1, -1);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Out", (int)(uintptr_t)(&v16));
  grapher::ActorBase::AddPin(a1, 1, &v36, 0, -1);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Driver", (int)(uintptr_t)(&v16) + 1);
  grapher::ActorBase::AddPin(a1, 2, &v37, 0, -1);
  g4_std::string::Destroy(&v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Passenger", (int)(uintptr_t)(&v16) + 2);
  grapher::ActorBase::AddPin(a1, 3, &v38, 0, -1);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v39), "No Vehicle", (int)(uintptr_t)(&v16) + 3);
  grapher::ActorBase::AddPin(a1, 4, v39, 0, -1);
  g4_std::string::Destroy(v39);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Subject", (int)(uintptr_t)(&v13));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Subject", (int)(uintptr_t)(&v12) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v17 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v22, 9, &v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Subject", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v23), v7, 1, 1, (int)(uintptr_t)(&v24), 1);
  g4_std::string::Destroy(&v23);
  if ( v17 != nullptr )
    G4_VCALL<void>(v17, 44);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Check right now or check each frame.", (int)(uintptr_t)(&v13) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Immediate", (int)(uintptr_t)(&v13) + 1);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v25, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Immediate", (int)(uintptr_t)(&v13) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v26), v5, 1, 1, (int)(uintptr_t)(&v27), 1);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Vehicle of the subject, if any", (int)(uintptr_t)(&v14) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Vehicle", (int)(uintptr_t)(&v14));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v8 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v18 = v8;
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v28, 9, &v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Vehicle", (int)(uintptr_t)(&v14) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v29), v9, 1, 1, (int)(uintptr_t)(&v30), 2);
  g4_std::string::Destroy(&v29);
  if ( v18 != nullptr )
    G4_VCALL<void>(v18, 44);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Filter that matches vehicle the player should have (GIV_vehicleinfo.xml).", (int)(uintptr_t)(&v15) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Vehicle Filter", (int)(uintptr_t)(&v15));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "VehicleFilter.All", (int)(uintptr_t)(&v14) + 3);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v10 = v3;
  grapher::HolderT_string_e830be::From(v3, &v31);
  v19 = v10;
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v32, 11, &v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Vehicle Filter", (int)(uintptr_t)(&v15) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v33), v11, 1, 1, (int)(uintptr_t)(&v34), 3);
  g4_std::string::Destroy(&v33);
  if ( v19 != nullptr )
    G4_VCALL<void>(v19, 44);
  g4_std::string::Destroy(&v31);
  g4_std::string::Destroy(&v32);
  return ((g4_std::string::Destroy(&v34)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C54850  (binary VA: 0x0)
// Original: sub_C54850
// ----------------------------------------------------------------------------
int sub_C54850(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;

  sub_C544E0(a1, a3);
  result = *((uint32_t *)a1 + 13);
  if ( (result & 4) != 0 && (result & 8) != 0 && (result & 0x10) != 0 )
    return G4_VCALL<int>(a1, 28, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C548A0  (binary VA: 0x0)
// Original: sub_C548A0
// ----------------------------------------------------------------------------
int sub_C548A0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint32_t *v3;
  char *v4;
  uint32_t *v5;
  grapher::ActorVariable::Self *Variable;
  uint32_t *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  g4_cxa_guard_t *v13;
  int v14;
  int v15;
  void *v16;

  *((uint32_t *)a1 + 13) = 0;
  v3 = *((uint32_t **)a3 + 3);
  v4 = (char *)a1 + 52;
  v16 = (char *)a1 + 52;
  if ( v3 == nullptr )
    goto LABEL_15;
  v5 = (uint32_t *)((char *)a3 + 8);
  do
  {
    while ( (unsigned int)(uintptr_t)(v4) <= v3[4] )
    {
      v5 = v3;
      v3 = (uint32_t *)v3[2];
      if ( v3 == nullptr )
        goto LABEL_6;
    }
    v3 = (uint32_t *)v3[3];
  }
  while ( v3 != nullptr );
LABEL_6:
  if ( v5 == (uint32_t *)((char *)a3 + 8) || (unsigned int)(uintptr_t)(v4) < v5[4] )
  {
LABEL_15:
    v8 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
    *v8 = (uint32_t)(uintptr_t)(&off_205CD10);
    v8[1] = *((uint32_t *)a1 + 13);
    *g4_std::map_void_grapher_ActorContex_7fce1e::opIndex((grapher::ActorContext::Self *)((char *)a3 + 4), &v16) = (uint32_t)(uintptr_t)(v8);
  }
  else
  {
    *(uint32_t *)(v5[5] + 4) = 0;
  }
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), Variable, a3, v9, v10, v11, v12, (int)(uintptr_t)(v13), v14, v15) != 0 )
  {
    sub_C544E0(a1, a3);
  }
  else
  {
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    }
    grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


