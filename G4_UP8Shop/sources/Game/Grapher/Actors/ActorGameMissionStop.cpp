#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameMissionStop.h"

// ----------------------------------------------------------------------------
// Function: ActorGameMissionStop::CreateInstance  (binary VA: 0x0)
// Original: ActorGameMissionStop::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameMissionStop::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameMissionStop::ActorGameMissionStop(v3, -1);
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
    ActorGameMissionStop::ActorGameMissionStop(v3, a1);
  }
  return v3;
}



// Constructor (0xc38160):
int (**ActorGameMissionStop::ActorGameMissionStop(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BB48);
  return (int (**)(int))(uintptr_t)(&off_206BB48);
}
// ----------------------------------------------------------------------------
// Function: ActorGameMissionStop::Destroy  (binary VA: 0x0)
// Original: ActorGameMissionStop::~ActorGameMissionStop
// ----------------------------------------------------------------------------
void ActorGameMissionStop::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BB48);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B630  (binary VA: 0x0)
// Original: sub_C2B630
// ----------------------------------------------------------------------------
void sub_C2B630(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BB48);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2EEE0  (binary VA: 0x0)
// Original: sub_C2EEE0
// ----------------------------------------------------------------------------
int sub_C2EEE0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v6;
  void *v7;
  void *v8;
  uint32_t *v9;
  void *v10;
  uint32_t *v11;
  void *v12;
  uint32_t *v13;
  void *v14;
  void *v15;
  void *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  uint8_t v23[20];
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
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
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Mission Outcome", (int)(uintptr_t)(&v17));
  grapher::ActorBase::SetDisplayName(a1, &v27);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Missions", (int)(uintptr_t)(&v17) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v28);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "Succeed", (int)(uintptr_t)(&v23[1]));
  grapher::ActorBase::AddPin(a1, 0, &v51, 1, -1);
  g4_std::string::Destroy(&v51);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "Fail", (int)(uintptr_t)(&v23[2]));
  grapher::ActorBase::AddPin(a1, 1, &v52, 1, -1);
  g4_std::string::Destroy(&v52);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v53), "Out", (int)(uintptr_t)(&v23[3]));
  grapher::ActorBase::AddPin(a1, 2, v53, 0, -1);
  g4_std::string::Destroy(v53);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), (char *)&unk_1B15112, (int)(uintptr_t)(&v18) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Mission ID", (int)(uintptr_t)(&v17) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v23[4] = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v29, 4, &v23[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Mission ID", (int)(uintptr_t)(&v18));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v30), v7, 1, 1, (int)(uintptr_t)(&v31), 3);
  g4_std::string::Destroy(&v30);
  if ( *(uint32_t *)&v23[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v23[4] + 44))(*(uint32_t *)&v23[4]);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), (char *)&unk_1B15112, (int)(uintptr_t)(&v19));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Show Screen", (int)(uintptr_t)(&v18) + 2);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v32, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Show Screen", (int)(uintptr_t)(&v18) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v33), v8, 1, 0, (int)(uintptr_t)(&v34), 3);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v32);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Failure type (from GIV_MissionFailTypes in GIV_mission_constants.xml)", (int)(uintptr_t)(&v20));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Fail Type", (int)(uintptr_t)(&v19) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "GIV_MissionFailTypes.None", (int)(uintptr_t)(&v19) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v2;
  grapher::HolderT_string_e830be::From(v2, &v35);
  v24 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v36, 11, &v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Fail Type", (int)(uintptr_t)(&v19) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v37), v10, 1, 0, (int)(uintptr_t)(&v38), 3);
  g4_std::string::Destroy(&v37);
  if ( v24 != nullptr )
    G4_VCALL<void>(v24, 44);
  g4_std::string::Destroy(&v35);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "The text label specified as PACK_ID.TEXT_ID.", (int)(uintptr_t)(&v20) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Fail Text ID", (int)(uintptr_t)(&v20) + 1);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v11 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v25 = v11;
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v39, 11, &v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Fail Text ID", (int)(uintptr_t)(&v20) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v40), v12, 1, 0, (int)(uintptr_t)(&v41), 3);
  g4_std::string::Destroy(&v40);
  if ( v25 != nullptr )
    G4_VCALL<void>(v25, 44);
  g4_std::string::Destroy(&v39);
  g4_std::string::Destroy(&v41);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "The text label specified as PACK_ID.TEXT_ID.", (int)(uintptr_t)(&v21) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "Fail Hint ID", (int)(uintptr_t)(&v21));
  v4 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v4 = (uint32_t)(uintptr_t)(&off_205C408);
  v4[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v13 = v4;
  grapher::HolderT_string_e830be::From(v4, &unk_20D67EC);
  v26 = v13;
  v14 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v14, &v42, 11, &v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "Fail Hint ID", (int)(uintptr_t)(&v21) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v43), v14, 1, 0, (int)(uintptr_t)(&v44), 3);
  g4_std::string::Destroy(&v43);
  if ( v26 != nullptr )
    G4_VCALL<void>(v26, 44);
  g4_std::string::Destroy(&v42);
  g4_std::string::Destroy(&v44);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "The player's score at the end of the mission.", (int)(uintptr_t)(&v22) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "Score", (int)(uintptr_t)(&v21) + 3);
  v15 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v15, &v45, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "Score", (int)(uintptr_t)(&v22));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v46), v15, 1, 0, (int)(uintptr_t)(&v47), 3);
  g4_std::string::Destroy(&v46);
  g4_std::string::Destroy(&v45);
  g4_std::string::Destroy(&v47);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "Reset to the default cameraa at the end of the mission.", (int)(uintptr_t)(v23));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "Reset Camera", (int)(uintptr_t)(&v22) + 2);
  v16 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v16, &v48, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "Reset Camera", (int)(uintptr_t)(&v22) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 6, (int)(uintptr_t)(&v49), v16, 1, 0, (int)(uintptr_t)(&v50), 3);
  g4_std::string::Destroy(&v49);
  g4_std::string::Destroy(&v48);
  return ((g4_std::string::Destroy(&v50)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C3D040  (binary VA: 0x0)
// Original: sub_C3D040
// ----------------------------------------------------------------------------
int sub_C3D040(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorVariable::Self *v4;
  grapher::ActorVariable::Self *v5;
  g4_cxa_guard_t *v6;
  int *v7;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v10;
  grapher::ActorVariable::Self *v11;
  grapher::ActorContext::Self *v12;
  int *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  void *v18;
  void *v19;
  void *v20;
  void *v21;
  int v22;
  int v23;
  char v24;
  grapher::ActorContext::Self *v25;
  int v26;
  int v27;
  g4_cxa_guard_t *v28;
  g4_cxa_guard_t *v29;
  g4_cxa_guard_t *v30;
  g4_cxa_guard_t *v31;
  g4_cxa_guard_t *v32;
  g4_cxa_guard_t *v33;
  g4_cxa_guard_t *v34;
  g4_cxa_guard_t *v35;
  g4_cxa_guard_t *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  grapher::ActorContext::Self *v48;
  grapher::ActorContext::Self *v49;

  if ( a3 != 0 )
  {
    if ( a3 == 1 )
    {
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 4);
      v25 = sub_837200((int)(uintptr_t)(a2), Variable, a4, v14, (int)(uintptr_t)(v18), v22, (int)(uintptr_t)(v28), (int)(uintptr_t)(v33), v37, v41, v45, a1);
      v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 2);
      v31 = (g4_cxa_guard_t *)sub_837200((int)(uintptr_t)(a2), v10, a4, v16, (int)(uintptr_t)(v20), (int)(uintptr_t)(v25), (int)(uintptr_t)(v30), (int)(uintptr_t)(v35), v39, v43, v46, v48);
      v11 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 3);
      v12 = sub_837200((int)(uintptr_t)(a2), v11, a4, v17, (int)(uintptr_t)(v21), v26, (int)(uintptr_t)(v31), (int)(uintptr_t)(v36), v40, v44, v47, v49);
      if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
      {
        sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
        __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
      }
      v13 = nullptr;
      if ( byte_20D3C44 == 0 )
        v13 = (int *)(&dword_20D3C40);
      sub_631340(v13, (int)(uintptr_t)(v12), (int)(uintptr_t)(v32), v27);
    }
  }
  else
  {
    v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 6);
    v23 = (uint8_t)sub_837730((int)(uintptr_t)(a2), v4, a4, v14, (int)(uintptr_t)(v18), v22, (int)(uintptr_t)(v28), (int)(uintptr_t)(v33), v37, v41);
    v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 5);
    v6 = (g4_cxa_guard_t *)sub_837200((int)(uintptr_t)(a2), v5, a4, v15, (int)(uintptr_t)(v19), v23, (int)(uintptr_t)(v29), (int)(uintptr_t)(v34), v38, v42, v45, a1);
    if ( byte_20D3C30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30) != 0 )
    {
      sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
      __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
    }
    v7 = nullptr;
    if ( byte_20D3C44 == 0 )
      v7 = (int *)(&dword_20D3C40);
    sub_63C6B0((int)(uintptr_t)(v7), 1, v6, v24);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 2, a4));
}


