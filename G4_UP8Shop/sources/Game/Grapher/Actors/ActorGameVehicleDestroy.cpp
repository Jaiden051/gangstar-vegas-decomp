#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameVehicleDestroy.h"

// ----------------------------------------------------------------------------
// Function: ActorGameVehicleDestroy::CreateInstance  (binary VA: 0x0)
// Original: ActorGameVehicleDestroy::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameVehicleDestroy::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameVehicleDestroy::ActorGameVehicleDestroy(v3, -1);
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
    ActorGameVehicleDestroy::ActorGameVehicleDestroy(v3, a1);
  }
  return v3;
}



// Constructor (0x829b50):
int (**ActorGameVehicleDestroy::ActorGameVehicleDestroy(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BBE8);
  return (int (**)(int))(uintptr_t)(&off_205BBE8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameVehicleDestroy::Destroy  (binary VA: 0x0)
// Original: ActorGameVehicleDestroy::~ActorGameVehicleDestroy
// ----------------------------------------------------------------------------
int ActorGameVehicleDestroy::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BBE8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8207B0  (binary VA: 0x0)
// Original: sub_8207B0
// ----------------------------------------------------------------------------
void sub_8207B0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BBE8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_825DB0  (binary VA: 0x0)
// Original: sub_825DB0
// ----------------------------------------------------------------------------
int sub_825DB0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  void *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  int v8;
  int v9;
  int v10;
  int v11;
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
  int v26;
  int v27;
  int v28[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Destroy Vehicle", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Vehicles", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "In", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v27, 1, -1);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), "Out", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddPin(a1, 1, v28, 0, -1);
  g4_std::string::Destroy(v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Vehicle to destroy", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Vehicle", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v15, 9, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Vehicle", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v7, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Is the destruction play it sound?", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Sound", (int)(uintptr_t)(&v9) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v18, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Sound", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v3, 1, 0, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Is the destruction play it animation?", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Animation", (int)(uintptr_t)(&v10));
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v21, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Animation", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v22), v4, 1, 0, (int)(uintptr_t)(&v23), 3);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Is the destruction damaging surrounding objects?", (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Damage", (int)(uintptr_t)(&v10) + 3);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v24, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Damage", (int)(uintptr_t)(&v11));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v25), v5, 1, 0, (int)(uintptr_t)(&v26), 3);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  { g4_std::string::Destroy(&v26); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_833400  (binary VA: 0x0)
// Original: sub_833400
// ----------------------------------------------------------------------------
void sub_833400(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v4;
  grapher::ActorVariable::Self *v5;
  uint32_t *v6;
  int v7;
  int *v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *i;
  uint8_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  int v16;
  uint8_t v17;
  uint8_t v18;
  uint8_t v19;
  uint32_t v20[4];
  uint32_t v21[7];

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v19 = sub_837730(a1, Variable, a3);
  v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v18 = sub_837730(a1, v4, a3);
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
  v20[0] = (uint32_t)(uintptr_t)(v20);
  v20[1] = (uint32_t)(uintptr_t)(v20);
  v21[0] = (uint32_t)(uintptr_t)(v21);
  v21[1] = (uint32_t)(uintptr_t)(v21);
  v17 = sub_837730(a1, v5, a3);
  sub_8560A0(a1, 0, (int)(uintptr_t)(v21), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v6 = (uint32_t *)v21[0];
  if ( (uint32_t *)v21[0] != v21 )
  {
    do
    {
      v7 = v6[2];
      if ( v7 != 0 )
      {
        v16 = v6[2];
        v8 = (int *)(*(int (**)(int))(*(uint32_t *)v7 + 16))(v16);
        if ( v8 != nullptr )
        {
          while ( v8 != (int *)(&dword_20D68D0) )
          {
            v8 = (int *)v8[1];
            if ( v8 == nullptr )
              goto LABEL_10;
          }
          v9 = opNew(0xCu);
          if ( v9 != -8 )
            *(uint32_t *)(v9 + 8) = v16;
          sub_1901920(v9, v20);
        }
      }
LABEL_10:
      v6 = (uint32_t *)*v6;
    }
    while ( v6 != v21 );
    v10 = (uint32_t *)v21[0];
    if ( (uint32_t *)v21[0] != v21 )
    {
      while ( 1 )
      {
        v11 = (uint32_t *)*v10;
        opDelete(v10);
        if ( v11 == v21 )
          break;
        v10 = v11;
      }
    }
  }
  for ( i = (uint32_t *)v20[0]; i != v20; i = (uint32_t *)*i )
  {
    if ( i[2] != 0 && (uint8_t)sub_C170A0(i[2]) != 0 )
    {
      v13 = (uint8_t *)i[2];
      if ( v13[1006] == 0 )
        G4_VCALL<void>(v13, 640, v19, v18, v17);
    }
  }
  grapher::ActorBase::FireEvent(a1, 1, a3);
  v14 = (uint32_t *)v20[0];
  if ( (uint32_t *)v20[0] != v20 )
  {
    while ( 1 )
    {
      v15 = (uint32_t *)*v14;
      opDelete(v14);
      if ( v15 == v20 )
        break;
      v14 = v15;
    }
  }
}


