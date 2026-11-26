#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameVehicleSetSpeed.h"

// ----------------------------------------------------------------------------
// Function: ActorGameVehicleSetSpeed::CreateInstance  (binary VA: 0x0)
// Original: ActorGameVehicleSetSpeed::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameVehicleSetSpeed::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameVehicleSetSpeed::ActorGameVehicleSetSpeed(v3, -1);
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
    ActorGameVehicleSetSpeed::ActorGameVehicleSetSpeed(v3, a1);
  }
  return v3;
}



// Constructor (0x829bd0):
int (**ActorGameVehicleSetSpeed::ActorGameVehicleSetSpeed(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BC68);
  return (int (**)(int))(uintptr_t)(&off_205BC68);
}
// ----------------------------------------------------------------------------
// Function: ActorGameVehicleSetSpeed::Destroy  (binary VA: 0x0)
// Original: ActorGameVehicleSetSpeed::~ActorGameVehicleSetSpeed
// ----------------------------------------------------------------------------
int ActorGameVehicleSetSpeed::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BC68);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_820830  (binary VA: 0x0)
// Original: sub_820830
// ----------------------------------------------------------------------------
void sub_820830(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BC68);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_826670  (binary VA: 0x0)
// Original: sub_826670
// ----------------------------------------------------------------------------
int sub_826670(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  void *v4;
  uint32_t *v5;
  void *v6;
  int v7;
  int v8;
  int v9;
  g4_int128_t v10;
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
  int v23[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Set Vehicle Speed", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Vehicles", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetCategoryName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "In", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v22, 1, -1);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v23), "Out", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 1, v23, 0, -1);
  g4_std::string::Destroy(v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Vehicle to set the speed", (int)(uintptr_t)(&v8) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Vehicle", (int)(uintptr_t)(&v8) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v10) = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v13, 9, (char *)&v10 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Vehicle", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v14), v6, 1, 1, (int)(uintptr_t)(&v15), 3);
  g4_std::string::Destroy(&v14);
  if ( DWORD1(v10) != 0 )
    G4_VCALL<void>(DWORD1(v10), 44);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Speed to reach for this vehicle in km/h", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Speed", (int)(uintptr_t)(&v9));
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v16, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Speed", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v17), v3, 1, 1, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Does the vehicle starts as close as possible to this speed.", (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Is Initial Speed", (int)(uintptr_t)(&v9) + 3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v19, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Is Initial Speed", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v20), v4, 1, 0, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v19);
  { g4_std::string::Destroy(&v21); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_832F30  (binary VA: 0x0)
// Original: sub_832F30
// ----------------------------------------------------------------------------
void sub_832F30(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  void **v4;
  void *v5;
  int *v6;
  int v7;
  void **v8;
  void **v9;
  void **i;
  uint32_t *v11;
  grapher::ActorVariable::Self *v12;
  uint32_t *v13;
  void **v14;
  void **v15;
  void *v16;
  uint32_t *v17;
  char *v18;
  void (*v19)(char *);
  grapher::ActorBase::Self *v20;
  grapher::ActorContext::Self *v21;
  float v22;
  void *v23[4];
  void *v24[2];
  float v25[12];

  LODWORD(v25[8]) = (uint32_t)(uintptr_t)(&a1);
  v20 = a1;
  v21 = a3;
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v23[0] = v23;
  v23[1] = v23;
  v24[0] = v24;
  v24[1] = v24;
  v22 = (float)(int)(uintptr_t)(sub_837200(v20, Variable, v21)) * 0.2777778f;
  sub_8560A0(v20, 0, (int)(uintptr_t)(v24), (int)(uintptr_t)(v21), 0x7FFFFFFF);
  v4 = (void **)v24[0];
  if ( v24[0] != v24 )
  {
    do
    {
      v5 = v4[2];
      if ( v5 != nullptr )
      {
        v16 = v4[2];
        v6 = (int *)(*(int (**)(void *))(*(uint32_t *)v5 + 16))(v16);
        if ( v6 != nullptr )
        {
          while ( v6 != (int *)(&dword_20D68D0) )
          {
            v6 = (int *)v6[1];
            if ( v6 == nullptr )
              goto LABEL_10;
          }
          v7 = opNew(0xCu);
          if ( v7 != -8 )
            *(uint32_t *)(v7 + 8) = (uint32_t)(uintptr_t)(v16);
          sub_1901920(v7, v23);
        }
      }
LABEL_10:
      v4 = (void **)*v4;
    }
    while ( v4 != v24 );
    v8 = (void **)v24[0];
    if ( v24[0] != v24 )
    {
      while ( 1 )
      {
        v9 = (void **)*v8;
        opDelete(v8);
        if ( v9 == v24 )
          break;
        v8 = v9;
      }
    }
  }
  for ( i = (void **)v23[0]; i != v23; i = (void **)*i )
  {
    v11 = (uint32_t *)(i[2]);
    if ( v11 != nullptr )
    {
      v11[254] &= ~0x20000000u;
      v17 = v11;
      sub_86F550(v11, LODWORD(v22), 0);
      v17[254] |= 0x20000000u;
      if ( *((uint32_t *)i[2] + 195) != 0 )
      {
        v12 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v20, 2);
        if ( (uint8_t)sub_837730(v20, v12, v21) != 0 )
        {
          v13 = (uint32_t *)(i[2]);
          v19 = *(void (**)(char *))(*(uint32_t *)(v13[195] + *(uint32_t *)(*(uint32_t *)v13[195] - 12)) + 96);
          v18 = (char *)v13[195];
          (*(void (**)(float *, uint32_t *))(*v13 + 296))(v25, v13);
          v25[4] = (float)(v25[1] * 27.777779f) * v22;
          v25[5] = (float)(v25[2] * 27.777779f) * v22;
          v25[3] = (float)(27.777779f * v25[0]) * v22;
          v19(&v18[*(uint32_t *)(*(uint32_t *)v18 - 12)]);
        }
      }
    }
  }
  grapher::ActorBase::FireEvent(v20, 1, v21);
  v14 = (void **)v23[0];
  if ( v23[0] != v23 )
  {
    while ( 1 )
    {
      v15 = (void **)*v14;
      opDelete(v14);
      if ( v15 == v23 )
        break;
      v14 = v15;
    }
  }
}


