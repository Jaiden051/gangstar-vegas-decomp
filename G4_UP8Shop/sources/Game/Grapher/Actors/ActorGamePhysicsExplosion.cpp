#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGamePhysicsExplosion.h"

// ----------------------------------------------------------------------------
// Function: ActorGamePhysicsExplosion::CreateInstance  (binary VA: 0x0)
// Original: ActorGamePhysicsExplosion::CreateInstance
// ----------------------------------------------------------------------------
int ActorGamePhysicsExplosion::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGamePhysicsExplosion::ActorGamePhysicsExplosion(v3, -1);
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
    ActorGamePhysicsExplosion::ActorGamePhysicsExplosion(v3, a1);
  }
  return v3;
}



// Constructor (0x829810):
int (**ActorGamePhysicsExplosion::ActorGamePhysicsExplosion(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B868);
  return (int (**)(int))(uintptr_t)(&off_205B868);
}
// ----------------------------------------------------------------------------
// Function: ActorGamePhysicsExplosion::Destroy  (binary VA: 0x0)
// Original: ActorGamePhysicsExplosion::~ActorGamePhysicsExplosion
// ----------------------------------------------------------------------------
int ActorGamePhysicsExplosion::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B868);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_820AB0  (binary VA: 0x0)
// Original: sub_820AB0
// ----------------------------------------------------------------------------
void sub_820AB0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205B868);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_823150  (binary VA: 0x0)
// Original: sub_823150
// ----------------------------------------------------------------------------
int sub_823150(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  void *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  uint32_t *v8;
  void *v9;
  void *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
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
  int v37[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Explosion", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetDisplayName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Physic", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v19);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "In", (int)(uintptr_t)(&v15) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v36, 1, -1);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v37), "Out", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddPin(a1, 1, v37, 0, -1);
  g4_std::string::Destroy(v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Object where to place the explosion.", (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Object", (int)(uintptr_t)(&v11) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v16 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v20, 9, &v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Object", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v21), v7, 1, 1, (int)(uintptr_t)(&v22), 3);
  g4_std::string::Destroy(&v21);
  if ( v16 != nullptr )
    G4_VCALL<void>(v16, 44);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Force of the explosion.", (int)(uintptr_t)(&v12) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Force", (int)(uintptr_t)(&v12) + 1);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v23, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Force", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v24), v4, 1, 1, (int)(uintptr_t)(&v25), 3);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Radius of the explosion. Outside is no damage", (int)(uintptr_t)(&v13) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Radius", (int)(uintptr_t)(&v13));
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v26, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Radius", (int)(uintptr_t)(&v13) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v27), v5, 1, 1, (int)(uintptr_t)(&v28), 3);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "VFX to play.", (int)(uintptr_t)(&v14) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "VFX", (int)(uintptr_t)(&v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "VFXInfos.", (int)(uintptr_t)(&v13) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v8 = v2;
  grapher::HolderT_string_e830be::From(v2, &v29);
  v17 = v8;
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v30, 11, &v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "VFX", (int)(uintptr_t)(&v14) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v31), v9, 1, 1, (int)(uintptr_t)(&v32), 3);
  g4_std::string::Destroy(&v31);
  if ( v17 != nullptr )
    G4_VCALL<void>(v17, 44);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Maximum damage.", (int)(uintptr_t)(&v15) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Damage", (int)(uintptr_t)(&v14) + 3);
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v33, 1, 1000);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Damage", (int)(uintptr_t)(&v15));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v34), v10, 1, 0, (int)(uintptr_t)(&v35), 3);
  g4_std::string::Destroy(&v34);
  g4_std::string::Destroy(&v33);
  return ((g4_std::string::Destroy(&v35)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_831FA0  (binary VA: 0x0)
// Original: sub_831FA0
// ----------------------------------------------------------------------------
int sub_831FA0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  grapher::ActorContext::Self *v4;
  int v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v7;
  int v8;
  int v9;
  grapher::ActorVariable::Self *v10;
  int v11;
  uint32_t *v12;
  volatile int32_t *v13;
  grapher::ActorVariable::Self *v14;
  grapher::ActorVariable::Self *v15;
  int v16;
  float v17; // xmm0_4
  void *v18;
  int v20;
  void *v21;
  int v22;
  volatile int32_t *obj;
  int v24;
  float v25;
  int v26;
  float v27;
  uint32_t *v28;
  int v29;
  float v30[2];
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  int v36;
  int v37;
  float v38;
  char v39;
  grapher::ActorBase::Self **v40;

  v40 = &a1;
  v3 = a1;
  v4 = a3;
  v5 = sub_857260(a1, 0, a3);
  if ( v5 != 0 )
  {
    v22 = v5;
    (*(void (**)(float *, int))(*(uint32_t *)v5 + 52))(v30, v5);
    v31 = v31 + 10.0;
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 2);
    v24 = (int)(uintptr_t)(sub_837200(v3, Variable, v4));
    v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 1);
    v8 = (int)(uintptr_t)(sub_837200(v3, v7, v4));
    v32 = v30[0];
    v36 = 1181376512;
    v37 = 1120403456;
    v33 = v30[1];
    v39 = 1;
    v34 = v31;
    v35 = (float)v8;
    v38 = (float)v24;
    v9 = sub_6645E0();
    G4_VCALL<void>(v9, 88);
    v28 = nullptr;
    v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 3);
    v26 = (int)(uintptr_t)(sub_837200(v3, v10, v4));
    v11 = v22;
    if ( byte_20D4B60 == 0 )
    {
      v20 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4B60);
      v11 = v22;
      if ( v20 != 0 )
      {
        sub_7B3590(v21, &dword_20D4B80);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4B60);
        __cxa_atexit((void (*)(void *))sub_7B7D00, &dword_20D4B80, &unk_20D1280);
        v11 = v22;
      }
    }
    v12 = nullptr;
    if ( byte_20D4B84 == 0 )
      v12 = &dword_20D4B80;
    sub_7B30D0(&v29, (int)(uintptr_t)(v12), v26, v30, v11, &v28, 0);
    if ( v29 != 0 )
      sub_5459F0((int)(uintptr_t)(&v29), v29 + 4);
    v29 = 0;
    if ( v28 != nullptr )
    {
      v13 = (volatile int32_t *)((uint32_t *)((char *)v28 + *(uint32_t *)(*v28 - 16)));
      if ( __sync_fetch_and_add(v13 + 1, 0xFFFFFFFF) == 1 )
      {
        obj = v13;
        G4_VCALL<void>(v13, 8);
        G4_VCALL<void>(obj, 4);
      }
    }
    v14 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 4);
    v27 = (float)(int)(uintptr_t)(sub_837200(v3, v14, v4));
    v15 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 2);
    v16 = (int)(uintptr_t)(sub_837200(v3, v15, v4));
    v17 = (float)v16;
    if ( byte_20D4D58 == 0 )
    {
      v25 = (float)v16;
      v17 = (float)v16;
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4D58) != 0 )
      {
        sub_8082D0((int)(uintptr_t)(&unk_20D4D60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4D58);
        __cxa_atexit((void (*)(void *))sub_7F4170, &unk_20D4D60, &unk_20D1280);
        v17 = v25;
      }
    }
    v18 = nullptr;
    if ( byte_20D4D64 == 0 )
      v18 = &unk_20D4D60;
    sub_808430((int)(uintptr_t)(v18), v30, v27, 0.0, v17, nullptr, 360, 0, 0, nullptr);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v4));
}


