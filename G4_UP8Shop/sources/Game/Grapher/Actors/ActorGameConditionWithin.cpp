#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameConditionWithin.h"

// ----------------------------------------------------------------------------
// Function: ActorGameConditionWithin::CreateInstance  (binary VA: 0x0)
// Original: ActorGameConditionWithin::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameConditionWithin::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x4Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameConditionWithin::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), -1);
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
    v3 = gll_operator_new(0x4Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameConditionWithin::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), a1);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ActorGameConditionWithin::Construct  (binary VA: 0x0)
// Original: ActorGameConditionWithin::ActorGameConditionWithin
// ----------------------------------------------------------------------------
uint32_t * ActorGameConditionWithin::Construct(grapher::ActorBase::Self *a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *((uint32_t *)a1 + 18) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C588);
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)((char *)a1 + 52);
  *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)((char *)a1 + 52);
  *((uint32_t *)a1 + 15) = (uint32_t)(uintptr_t)((char *)a1 + 60);
  *((uint32_t *)a1 + 16) = (uint32_t)(uintptr_t)((char *)a1 + 60);
  return (uint32_t *)((char *)a1 + 60);
}

// ----------------------------------------------------------------------------
// Function: ActorGameConditionWithin::Destroy  (binary VA: 0x0)
// Original: ActorGameConditionWithin::~ActorGameConditionWithin
// ----------------------------------------------------------------------------
void ActorGameConditionWithin::Destroy(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_206C588);
  g4_std::List_base_Gangstar_Handle_LevelObj_b6b765::M_clear((std::_List_base<Gangstar::Handle<LevelObject, true>> *)(a1 + 13));
  a1[13] = (uint32_t)(uintptr_t)(a1 + 13);
  a1[14] = (uint32_t)(uintptr_t)(a1 + 13);
  g4_std::List_base_Gangstar_Handle_TriggerZ_faa35e::M_clear((std::_List_base<Gangstar::Handle<TriggerZone, true>> *)(a1 + 15));
  a1[15] = (uint32_t)(uintptr_t)(a1 + 15);
  a1[16] = (uint32_t)(uintptr_t)(a1 + 15);
  g4_std::List_base_Gangstar_Handle_TriggerZ_faa35e::M_clear((std::_List_base<Gangstar::Handle<TriggerZone, true>> *)(a1 + 15));
  g4_std::List_base_Gangstar_Handle_LevelObj_b6b765::M_clear((std::_List_base<Gangstar::Handle<LevelObject, true>> *)(a1 + 13));
  ActorGameBase::Destroy((grapher::ActorBase::Self *)a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C57960  (binary VA: 0x0)
// Original: sub_C57960
// ----------------------------------------------------------------------------
void sub_C57960(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_206C588);
  g4_std::List_base_Gangstar_Handle_LevelObj_b6b765::M_clear((std::_List_base<Gangstar::Handle<LevelObject, true>> *)(a1 + 13));
  a1[13] = (uint32_t)(uintptr_t)(a1 + 13);
  a1[14] = (uint32_t)(uintptr_t)(a1 + 13);
  g4_std::List_base_Gangstar_Handle_TriggerZ_faa35e::M_clear((std::_List_base<Gangstar::Handle<TriggerZone, true>> *)(a1 + 15));
  a1[15] = (uint32_t)(uintptr_t)(a1 + 15);
  a1[16] = (uint32_t)(uintptr_t)(a1 + 15);
  g4_std::List_base_Gangstar_Handle_TriggerZ_faa35e::M_clear((std::_List_base<Gangstar::Handle<TriggerZone, true>> *)(a1 + 15));
  g4_std::List_base_Gangstar_Handle_LevelObj_b6b765::M_clear((std::_List_base<Gangstar::Handle<LevelObject, true>> *)(a1 + 13));
  ActorGameBase::Destroy((grapher::ActorBase::Self *)a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C4C550  (binary VA: 0x0)
// Original: sub_C4C550
// ----------------------------------------------------------------------------
int sub_C4C550(grapher::ActorBase::Self *a1)
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
  uint8_t v16[20];
  uint32_t *v17;
  uint32_t *v18;
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
  grapher::ActorBase::SetArraySize(a1, 4, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Within (Imm=%Immediate) [C]", (int)(uintptr_t)(&v12));
  grapher::ActorBase::SetDisplayName(a1, &v19);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Conditions", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v20);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "In", (int)(uintptr_t)(&v13));
  grapher::ActorBase::AddPin(a1, 0, &v21, 1, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Out", (int)(uintptr_t)(&v13) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v22, 0, -1);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Inside", (int)(uintptr_t)(&v13) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v23, 0, -1);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Outside", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddPin(a1, 3, &v24, 0, -1);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "List of objects that must go in the zone.", (int)(uintptr_t)(&v14) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Target", (int)(uintptr_t)(&v14));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v16[4] = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v25, 9, &v16[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Target", (int)(uintptr_t)(&v14) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v26), v7, 1, 1, (int)(uintptr_t)(&v27), 3);
  g4_std::string::Destroy(&v26);
  if ( *(uint32_t *)&v16[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v16[4] + 44))(*(uint32_t *)&v16[4]);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "List of zones where to go.", (int)(uintptr_t)(&v15) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Zone", (int)(uintptr_t)(&v14) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v8 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v17 = v8;
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v28, 9, &v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Zone", (int)(uintptr_t)(&v15));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v29), v9, 1, 1, (int)(uintptr_t)(&v30), 3);
  g4_std::string::Destroy(&v29);
  if ( v17 != nullptr )
    G4_VCALL<void>(v17, 44);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Is this condtion tested once? (at the firing of this event)", (int)(uintptr_t)(v16));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Immediate", (int)(uintptr_t)(&v15) + 2);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v31, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Immediate", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v32), v5, 1, 0, (int)(uintptr_t)(&v33), 3);
  g4_std::string::Destroy(&v32);
  g4_std::string::Destroy(&v31);
  g4_std::string::Destroy(&v33);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(v36),
    "Object that trapped into one of the zones. Note, that the variable is modified by module",
    (int)(uintptr_t)(&v16[3]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "ObjectIn", (int)(uintptr_t)(&v16[1]));
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v10 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v18 = v10;
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v34, 9, &v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "ObjectIn", (int)(uintptr_t)(&v16[2]));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v35), v11, 1, 0, (int)(uintptr_t)(v36), 3);
  g4_std::string::Destroy(&v35);
  if ( v18 != nullptr )
    G4_VCALL<void>(v18, 44);
  g4_std::string::Destroy(&v34);
  return ((g4_std::string::Destroy(v36)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C50A20  (binary VA: 0x0)
// Original: sub_C50A20
// ----------------------------------------------------------------------------
int sub_C50A20(int a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;

  if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
  {
    sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
    __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
  }
  result = dword_20D5690;
  if ( dword_20D5690 == 0 )
    return sub_C504B0(a1, a3);
  return result;
}



// Vtable Slot [+36] (0xc574b0, 1198 bytes) - sub_C574B0:

