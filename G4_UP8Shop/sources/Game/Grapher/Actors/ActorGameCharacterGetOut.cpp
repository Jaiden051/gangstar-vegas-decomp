#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterGetOut.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterGetOut::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterGetOut::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterGetOut::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterGetOut::ActorGameCharacterGetOut(v3, -1);
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
    ActorGameCharacterGetOut::ActorGameCharacterGetOut(v3, a1);
  }
  return v3;
}



// Constructor (0xc66420):
int (**ActorGameCharacterGetOut::ActorGameCharacterGetOut(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CD28);
  return (int (**)(int))(uintptr_t)(&off_206CD28);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterGetOut::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterGetOut::~ActorGameCharacterGetOut
// ----------------------------------------------------------------------------
void ActorGameCharacterGetOut::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CD28);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B250  (binary VA: 0x0)
// Original: sub_C5B250
// ----------------------------------------------------------------------------
void sub_C5B250(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CD28);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5E5F0  (binary VA: 0x0)
// Original: sub_C5E5F0
// ----------------------------------------------------------------------------
int sub_C5E5F0(grapher::ActorBase::Self *a1)
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
  uint32_t *v13;
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
  int v30[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Get Out", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetDisplayName(a1, &v15);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Characters", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v16);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "In", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddPin(a1, 0, &v27, 1, -1);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Teleport", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v28, 1, -1);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Out", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v29, 0, -1);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v30), "Completed", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddPin(a1, 3, v30, 0, -1);
  g4_std::string::Destroy(v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "The character who will get out of the vehicle", (int)(uintptr_t)(&v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Subject", (int)(uintptr_t)(&v9) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v13 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v17, 9, &v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Subject", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v18), v5, 1, 1, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  if ( v13 != nullptr )
    G4_VCALL<void>(v13, 44);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "The door from where the character will get out", (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Door", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "VehicleDoor.Driver", (int)(uintptr_t)(&v10) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &v20);
  v14 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v21, 11, &v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Door", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v22), v7, 1, 0, (int)(uintptr_t)(&v23), 3);
  g4_std::string::Destroy(&v22);
  if ( v14 != nullptr )
    G4_VCALL<void>(v14, 44);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "The character will eject from the vehicle when exiting.", (int)(uintptr_t)(&v11) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Force Eject", (int)(uintptr_t)(&v11) + 1);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v24, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Force Eject", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v25), v8, 1, 0, (int)(uintptr_t)(&v26), 3);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  { g4_std::string::Destroy(&v26); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C65910  (binary VA: 0x0)
// Original: sub_C65910
// ----------------------------------------------------------------------------
int sub_C65910(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  bool v6;
  int v7;
  int v8;
  int result;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(&dword_20D75F0) )
        goto LABEL_8;
      while ( 1 )
      {
        v5 = (int *)v5[1];
        if ( v5 == nullptr )
          break;
        if ( v5 == (int *)(&dword_20D75F0) )
          goto LABEL_8;
      }
    }
  }
  v4 = 0;
LABEL_8:
  v6 = G4_VCALL<int>(v4, 456) == 0;
  v7 = *(uint32_t *)(v4 + 1876);
  v8 = *(uint32_t *)(v4 + 1872);
  if ( !v6 && (v8 & 0x100) != 0 )
  {
    if ( v8 < 0 || (v7 & 1) != 0 || (v7 & 4) == 0 )
      goto LABEL_20;
  }
  else if ( v8 < 0 || (v7 & 1) != 0 )
  {
    goto LABEL_20;
  }
  if ( (v7 & 4) == 0 && (v7 & 8) == 0 && *(uint8_t *)(v4 + 3198) == 0 )
    goto LABEL_15;
LABEL_20:
  result = G4_VCALL<int>(v4, 208);
  if ( (uint8_t)result != 0 )
  {
LABEL_15:
    G4_VCALL<void>(a1, 28, a3);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C688D0  (binary VA: 0x0)
// Original: sub_C688D0
// ----------------------------------------------------------------------------
int sub_C688D0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v7;
  grapher::ActorVariable::Self *v9;
  grapher::ActorVariable::Self *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint32_t *v15;
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
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  uint32_t *v39;
  g4_cxa_guard_t *v40;
  g4_cxa_guard_t *v41;
  grapher::ActorContext::Self *v42;
  uint8_t v43;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 == 0 || (v5 = (int *)G4_VCALL<int>(v3, 16)) == nullptr )
  {
LABEL_7:
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    sub_837200((int)(uintptr_t)(a1), Variable, a3, v17, v20, v23, v26, v30, v33, v36, (int)(uintptr_t)(v40), v42);
    v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
    sub_837730((int)(uintptr_t)(a1), v7, a3, v18, v21, v24, v27, v31, v34, v37);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
  }
  while ( v5 != (int *)(&dword_20D75F0) )
  {
    v5 = (int *)v5[1];
    if ( v5 == nullptr )
      goto LABEL_7;
  }
  v9 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v41 = (g4_cxa_guard_t *)sub_837200((int)(uintptr_t)(a1), v9, a3, v17, v20, v23, v26, v30, v33, v36, (int)(uintptr_t)(v40), v42);
  v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v43 = sub_837730((int)(uintptr_t)(a1), v10, a3, v19, v22, v25, v28, v32, v35, v38);
  if ( G4_VCALL<int>(v4, 456) != 0
    && (v11 = *(uint32_t *)(v4 + 1872), v12 = *(uint32_t *)(v4 + 1876), (v11 & 0x100) != 0)
    && v11 >= 0
    && (v12 & 1) == 0
    && (v12 & 4) == 0
    || G4_VCALL<int>(v4, 456) != 0 && (*(uint8_t *)(v4 + 1873) & 8) != 0 )
  {
    v13 = G4_VCALL<int>(v4, 456);
    v29 = *(uint32_t *)(v4 + 3688);
    v39 = (uint32_t *)v13;
    v14 = G4_VCALL<int>(v13, 748, v41);
    v15 = v39;
    if ( v29 != v14 )
    {
      sub_892B60(v39, v29, v14, 1);
      v15 = v39;
    }
    *(uint32_t *)(v4 + 3684) = -1;
    sub_985D20(v4, (int)(uintptr_t)(v41), v15);
    v16 = *(uint32_t *)v4;
    if ( a2 == 1 )
    {
      (*(void (**)(int))(v16 + 708))(v4);
      grapher::ActorBase::FireEvent(a1, 3, a3);
    }
    else
    {
      (*(void (**)(int, int, uint32_t))(v16 + 668))(v4, 1, v43);
      if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
      }
      grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}


