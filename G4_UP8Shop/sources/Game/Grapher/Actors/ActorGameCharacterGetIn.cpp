#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterGetIn.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterGetIn::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterGetIn::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterGetIn::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterGetIn::ActorGameCharacterGetIn(v3, -1);
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
    ActorGameCharacterGetIn::ActorGameCharacterGetIn(v3, a1);
  }
  return v3;
}



// Constructor (0xc663d0):
int (**ActorGameCharacterGetIn::ActorGameCharacterGetIn(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *((uint8_t *)a1 + 52) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CCE8);
  *((uint8_t *)a1 + 53) = 0;
  return (int (**)(int))(uintptr_t)(&off_206CCE8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterGetIn::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterGetIn::~ActorGameCharacterGetIn
// ----------------------------------------------------------------------------
void ActorGameCharacterGetIn::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CCE8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B210  (binary VA: 0x0)
// Original: sub_C5B210
// ----------------------------------------------------------------------------
void sub_C5B210(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CCE8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5DBA0  (binary VA: 0x0)
// Original: sub_C5DBA0
// ----------------------------------------------------------------------------
int sub_C5DBA0(grapher::ActorBase::Self *a1)
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
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
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
  int v52[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Get In", (int)(uintptr_t)(&v15));
  grapher::ActorBase::SetDisplayName(a1, &v25);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Characters", (int)(uintptr_t)(&v15) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v26);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "In", (int)(uintptr_t)(&v21));
  grapher::ActorBase::AddPin(a1, 0, &v49, 1, -1);
  g4_std::string::Destroy(&v49);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "Teleport", (int)(uintptr_t)(&v21) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v50, 1, -1);
  g4_std::string::Destroy(&v50);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "Out", (int)(uintptr_t)(&v21) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v51, 0, -1);
  g4_std::string::Destroy(&v51);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v52), "Reached", (int)(uintptr_t)(&v21) + 3);
  grapher::ActorBase::AddPin(a1, 3, v52, 0, -1);
  g4_std::string::Destroy(v52);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Character who will get in the vehicle", (int)(uintptr_t)(&v16));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Subject", (int)(uintptr_t)(&v15) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v22 = v5;
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v27, 9, &v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Subject", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v28), v6, 1, 1, (int)(uintptr_t)(&v29), 3);
  g4_std::string::Destroy(&v28);
  if ( v22 != nullptr )
    G4_VCALL<void>(v22, 44);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Vehicle to get in", (int)(uintptr_t)(&v16) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Vehicle", (int)(uintptr_t)(&v16) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v23 = v7;
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v30, 9, &v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Vehicle", (int)(uintptr_t)(&v16) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v31), v8, 1, 1, (int)(uintptr_t)(&v32), 3);
  g4_std::string::Destroy(&v31);
  if ( v23 != nullptr )
    G4_VCALL<void>(v23, 44);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "The position of the actor in the vehicle.", (int)(uintptr_t)(&v17) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Door", (int)(uintptr_t)(&v17) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "VehicleDoor.Driver", (int)(uintptr_t)(&v17));
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v3;
  grapher::HolderT_string_e830be::From(v3, &v33);
  v24 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v34, 11, &v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Door", (int)(uintptr_t)(&v17) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v35), v10, 1, 0, (int)(uintptr_t)(&v36), 3);
  g4_std::string::Destroy(&v35);
  if ( v24 != nullptr )
    G4_VCALL<void>(v24, 44);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v34);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "True if the actor can be hijacked.", (int)(uintptr_t)(&v18) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Hijackable", (int)(uintptr_t)(&v18));
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v37, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Hijackable", (int)(uintptr_t)(&v18) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v38), v11, 1, 0, (int)(uintptr_t)(&v39), 3);
  g4_std::string::Destroy(&v38);
  g4_std::string::Destroy(&v37);
  g4_std::string::Destroy(&v39);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "True if the actor can be thrown out of the vehicle.", (int)(uintptr_t)(&v19) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Throwable", (int)(uintptr_t)(&v18) + 3);
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v40, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "Throwable", (int)(uintptr_t)(&v19));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v41), v12, 1, 0, (int)(uintptr_t)(&v42), 3);
  g4_std::string::Destroy(&v41);
  g4_std::string::Destroy(&v40);
  g4_std::string::Destroy(&v42);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "True if the actor can get out of the vehicle by itself.", (int)(uintptr_t)(&v20));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "Can get out", (int)(uintptr_t)(&v19) + 2);
  v13 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v13, &v43, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "Can get out", (int)(uintptr_t)(&v19) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v44), v13, 1, 0, (int)(uintptr_t)(&v45), 3);
  g4_std::string::Destroy(&v44);
  g4_std::string::Destroy(&v43);
  g4_std::string::Destroy(&v45);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v48),
    "Failsafe. The actor will be teleported to the Vehicle at the end of the given timer (in ms).",
    (int)(uintptr_t)(&v20) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "Failsafe", (int)(uintptr_t)(&v20) + 1);
  v14 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v14, &v46, 2, 3000);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "Failsafe", (int)(uintptr_t)(&v20) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 6, (int)(uintptr_t)(&v47), v14, 1, 0, (int)(uintptr_t)(&v48), 3);
  g4_std::string::Destroy(&v47);
  g4_std::string::Destroy(&v46);
  return ((g4_std::string::Destroy(&v48)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C66180  (binary VA: 0x0)
// Original: sub_C66180
// ----------------------------------------------------------------------------
int * sub_C66180(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  int *result;
  int *v7;
  bool v8;

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
  result = (int *)sub_857260(a1, 1, (int)(uintptr_t)(a3));
  v7 = result;
  if ( result == nullptr || (result = (int *)G4_VCALL<int>(result, 16)) == nullptr )
  {
LABEL_14:
    v8 = false;
    goto LABEL_15;
  }
  while ( result != (int *)(&dword_20D68D0) )
  {
    result = (int *)result[1];
    if ( result == nullptr )
      goto LABEL_14;
  }
  v8 = false;
  if ( v4 != 0 )
  {
    result = (int *)G4_VCALL<int>(v4, 456);
    v8 = false;
    if ( result == v7 )
    {
      result = (int *)sub_5EC9B0((uint32_t *)v4);
      v8 = true;
      if ( (uint8_t)(uintptr_t)result == 0 )
      {
        result = (int *)G4_VCALL<int>(v4, 456);
        v8 = false;
        if ( result != nullptr )
          v8 = (*(uint8_t *)(v4 + 1873) & 8) != 0;
      }
    }
  }
LABEL_15:
  if ( *((uint8_t *)a1 + 53) != 0 && v8 )
  {
    G4_VCALL<void>(a1, 28, a3);
    result = (int *)grapher::ActorBase::FireEvent(a1, 3, a3);
  }
  if ( *((uint8_t *)a1 + 52) != 0 )
  {
    *((uint8_t *)a1 + 52) = 0;
  }
  else if ( *((uint8_t *)a1 + 53) == 0 )
  {
    *((uint8_t *)a1 + 53) = 1;
    return (int *)grapher::ActorBase::FireEvent(a1, 2, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C69970  (binary VA: 0x0)
// Original: sub_C69970
// ----------------------------------------------------------------------------
char sub_C69970(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  int v6;
  int *v7;
  char v8;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v10;
  grapher::ActorVariable::Self *v11;
  grapher::ActorVariable::Self *v12;
  grapher::ActorVariable::Self *v13;
  char result;
  int v15;
  int *v16;
  float v17;
  void *v18;
  uint8_t v19;
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
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  grapher::ActorContext::Self *v60;
  grapher::ActorContext::Self *v61;
  char v62;
  uint32_t *v63;
  char v64;
  g4_cxa_guard_t *v65;
  char v66;
  char v67;
  char v68;
  float v69;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      v64 = 1;
      if ( v5 == (int *)(&dword_20D75F0) )
        goto LABEL_8;
      while ( 1 )
      {
        v5 = (int *)v5[1];
        if ( v5 == nullptr )
          break;
        if ( v5 == (int *)(&dword_20D75F0) )
        {
          v64 = 1;
          goto LABEL_8;
        }
      }
    }
  }
  v64 = 0;
  v4 = 0;
LABEL_8:
  v6 = sub_857260(a1, 1, (int)(uintptr_t)(a3));
  v63 = (uint32_t *)v6;
  if ( v6 == 0 || (v7 = (int *)G4_VCALL<int>(v6, 16)) == nullptr )
  {
LABEL_14:
    v8 = 0;
    v63 = nullptr;
    goto LABEL_15;
  }
  v8 = v64 & 1;
  if ( v7 != (int *)(&dword_20D68D0) )
  {
    while ( 1 )
    {
      v7 = (int *)v7[1];
      if ( v7 == nullptr )
        goto LABEL_14;
      if ( v7 == (int *)(&dword_20D68D0) )
      {
        v8 = v64;
        break;
      }
    }
  }
LABEL_15:
  LOBYTE(v60) = v8;
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v65 = (g4_cxa_guard_t *)sub_837200((int)(uintptr_t)(a1), Variable, a3, v23, v28, v33, v38, v43, v48, v53, v58, v60);
  v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 5);
  v66 = sub_837730((int)(uintptr_t)(a1), v10, a3, v24, v29, v34, v39, v44, v49, v54);
  v11 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
  v67 = sub_837730((int)(uintptr_t)(a1), v11, a3, v25, v30, v35, v40, v45, v50, v55);
  v12 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 4);
  v68 = sub_837730((int)(uintptr_t)(a1), v12, a3, v26, v31, v36, v41, v46, v51, v56);
  v13 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 6);
  v69 = sub_838060((int)(uintptr_t)(a1), v13, a3, v27, v32, v37, v42, v47, v52, v57, v59, v61);
  result = G4_VCALL<int>(a1, 28, a3);
  if ( v62 != 0 )
  {
    if ( G4_VCALL<int>(v4, 168) == 0 )
      sub_C38550((uint32_t *)v4);
    if ( G4_VCALL<int>(v63, 168) == 0 )
      sub_C38550(v63);
    result = a2;
    if ( a2 != 0 )
    {
      if ( a2 == 1 )
      {
        *(uint32_t *)(v4 + 3684) = -1;
        sub_985D20(v4, (int)(uintptr_t)(v65), v63);
        v15 = G4_VCALL<int>(v63, 748, *(uint32_t *)(v4 + 3684));
        *(uint32_t *)(v4 + 3688) = v15;
        G4_VCALL<void>(v4, 664, v63, v15 == 0);
        *(uint8_t *)(v4 + 3199) = v67;
        *(uint8_t *)(v4 + 3200) = v68;
        sub_9655C0(v4, v66);
        if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
        {
          grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
          __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
        }
        grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
        *((uint8_t *)a1 + 52) = 1;
        *((uint8_t *)a1 + 53) = 0;
        result = sub_97FD30(v4);
        if ( result != 0 )
        {
          if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
          {
            sub_976230((int)(uintptr_t)(&dword_20D5240));
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
            __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
          }
          v16 = nullptr;
          if ( byte_20D5248 == 0 )
            v16 = (int *)(&dword_20D5240);
          if ( !sub_9767E0((int)(uintptr_t)(v16)) && byte_20D186E == 0 )
          {
            v17 = *(float *)(dword_20DA1B0 + 64);
            if ( byte_20D4E40 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
            {
              sub_9C9CC0((int)(uintptr_t)(&unk_20D4E60));
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
              __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
            }
            v18 = nullptr;
            if ( byte_20D4E64 == 0 )
              v18 = &unk_20D4E60;
            sub_9CE370((int)(uintptr_t)(v18), v17);
          }
          v19 = sub_62F450(0);
          return sub_977DC0(*(uint32_t *)(dword_20DDDC0 + 868), v4, (int)(uintptr_t)(v63), v19, 1);
        }
      }
    }
    else
    {
      v20 = *(uint32_t *)v4;
      *(float *)(v4 + 3964) = v69;
      if ( (*(int (**)(int))(v20 + 456))(v4) == 0
        || (v21 = *(uint32_t *)(v4 + 1872), v22 = *(uint32_t *)(v4 + 1876), (v21 & 0x100) == 0)
        || v21 < 0
        || (v22 & 1) != 0
        || (v22 & 4) != 0 )
      {
        *(uint32_t *)(v4 + 3684) = -1;
        sub_985D20(v4, (int)(uintptr_t)(v65), v63);
        G4_VCALL<void>(v4, 624, 1, v63, *(uint32_t *)(v4 + 3684) == 0);
        if ( !sub_97FD50(v4) )
          *(uint8_t *)(v4 + 3444) = v65 == nullptr;
      }
      *(uint8_t *)(v4 + 3199) = v67;
      *(uint8_t *)(v4 + 3200) = v68;
      sub_9655C0(v4, v66);
      if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
      }
      grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
      result = (char)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
      *((uint8_t *)a1 + 53) = 1;
    }
  }
  return result;
}


