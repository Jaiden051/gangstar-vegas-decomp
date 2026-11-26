#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameConditionInRange.h"

// ----------------------------------------------------------------------------
// Function: ActorGameConditionInRange::CreateInstance  (binary VA: 0x0)
// Original: ActorGameConditionInRange::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameConditionInRange::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x40u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameConditionInRange::ActorGameConditionInRange(v3, -1);
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
    v3 = gll_operator_new(0x40u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameConditionInRange::ActorGameConditionInRange(v3, a1);
  }
  return v3;
}



// Constructor (0xc50b50):
int (**ActorGameConditionInRange::ActorGameConditionInRange(int a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)a1, a2);
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C3C8);
  *(uint32_t *)(a1 + 56) = 0;
  *(uint8_t *)(a1 + 60) = 0;
  *(uint8_t *)(a1 + 61) = 0;
  return (int (**)(int))(uintptr_t)(&off_206C3C8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameConditionInRange::Destroy  (binary VA: 0x0)
// Original: ActorGameConditionInRange::~ActorGameConditionInRange
// ----------------------------------------------------------------------------
void ActorGameConditionInRange::Destroy(grapher::ActorBase::Self *a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C3C8);
  v1 = *((uint32_t *)a1 + 13);
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 52, v1 + 16);
  *((uint32_t *)a1 + 13) = 0;
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C50340  (binary VA: 0x0)
// Original: sub_C50340
// ----------------------------------------------------------------------------
void sub_C50340(grapher::ActorBase::Self *a1)
{
  int v1;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C3C8);
  v1 = *((uint32_t *)a1 + 13);
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 52, v1 + 16);
  *((uint32_t *)a1 + 13) = 0;
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C43290  (binary VA: 0x0)
// Original: sub_C43290
// ----------------------------------------------------------------------------
int sub_C43290(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  void *v8;
  void *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
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
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 6, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "In Range (Imm=%Immediate) [C]", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetDisplayName(a1, &v17);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Conditions", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "In", (int)(uintptr_t)(&v13) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v31, 1, -1);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Out", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddPin(a1, 1, &v32, 0, -1);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "In Range", (int)(uintptr_t)(&v14));
  grapher::ActorBase::AddPin(a1, 2, &v33, 0, -1);
  g4_std::string::Destroy(&v33);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Out of Range", (int)(uintptr_t)(&v14) + 1);
  grapher::ActorBase::AddPin(a1, 3, &v34, 0, -1);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "All in Range", (int)(uintptr_t)(&v14) + 2);
  grapher::ActorBase::AddPin(a1, 4, &v35, 0, -1);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v36), "All out of Range", (int)(uintptr_t)(&v14) + 3);
  grapher::ActorBase::AddPin(a1, 5, v36, 0, -1);
  g4_std::string::Destroy(v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Object to compare to the targets", (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Reference", (int)(uintptr_t)(&v10) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v15 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v19, 9, &v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Reference", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v20), v5, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  if ( v15 != nullptr )
    G4_VCALL<void>(v15, 44);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Targets the subject must be in range of", (int)(uintptr_t)(&v11) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Targets", (int)(uintptr_t)(&v11) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v16 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v22, 9, &v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Targets", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v23), v7, 1, 1, (int)(uintptr_t)(&v24), 3);
  g4_std::string::Destroy(&v23);
  if ( v16 != nullptr )
    G4_VCALL<void>(v16, 44);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Range to test", (int)(uintptr_t)(&v12) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Range", (int)(uintptr_t)(&v12));
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v8), (int)(uintptr_t)(&v25), 2, 0.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Range", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v26), v8, 1, 1, (int)(uintptr_t)(&v27), 3);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Is this condtion tested once? (at the firing of this event)", (int)(uintptr_t)(&v13) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Immediate", (int)(uintptr_t)(&v12) + 3);
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v28, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Immediate", (int)(uintptr_t)(&v13));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v29), v9, 1, 0, (int)(uintptr_t)(&v30), 3);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v28);
  { g4_std::string::Destroy(&v30); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C4EA40  (binary VA: 0x0)
// Original: sub_C4EA40
// ----------------------------------------------------------------------------
int sub_C4EA40(char *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;

  sub_C4E810((grapher::ActorBase::Self *)a1, a3);
  result = a1[61];
  if ( (result & 2) != 0 && (result & 4) != 0 && (result & 0x10) != 0 && (result & 8) != 0 && (result & 0x20) != 0 )
    return G4_VCALL<int>(a1, 28, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C57050  (binary VA: 0x0)
// Original: sub_C57050
// ----------------------------------------------------------------------------
void sub_C57050(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  bool v5;
  int v6;
  int v7;
  int v8;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v10;
  void **v11;
  void **v12;
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
  int v26;
  grapher::ActorManager::Self *v27;
  g4_cxa_guard_t *v28;
  void *v29[9];

  v3 = 0;
  G4_VCALL<void>(a1, 28, a3);
  v4 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v5 = v4 == 0;
  v6 = v4 + 12;
  v7 = *((uint32_t *)a1 + 13);
  if ( !v5 )
    v3 = v6;
  if ( v7 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 52, v7 + 16);
  if ( v3 != 0 )
  {
    v8 = 0;
    *((uint32_t *)a1 + 13) = v3 - 12;
    if ( v3 != 12 )
      v8 = v3;
    sub_C5A550(v8, (char *)a1 + 52, 0);
  }
  else
  {
    *((uint32_t *)a1 + 13) = 0;
  }
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  *((float *)a1 + 14) = sub_838060(
                          (int)(uintptr_t)(a1),
                          Variable,
                          a3,
                          v13,
                          v15,
                          v17,
                          v19,
                          v21,
                          v23,
                          v25,
                          (int)(uintptr_t)(v27),
                          (grapher::ActorContext::Self *)v28);
  v29[0] = v29;
  v29[1] = v29;
  sub_8560A0(a1, 1, (int)(uintptr_t)(v29), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  if ( a2 == 0 )
    *((uint8_t *)a1 + 61) = 0;
  sub_C4E810(a1, a3);
  v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
  if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), v10, a3, v14, v16, v18, v20, v22, v24, v26) == 0 )
  {
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    }
    grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  }
  grapher::ActorBase::FireEvent(a1, 1, a3);
  v11 = (void **)v29[0];
  if ( v29[0] != v29 )
  {
    while ( 1 )
    {
      v12 = (void **)*v11;
      opDelete(v11);
      if ( v12 == v29 )
        break;
      v11 = v12;
    }
  }
}


