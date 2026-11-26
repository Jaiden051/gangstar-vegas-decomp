#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterEjectVehicle.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterEjectVehicle::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterEjectVehicle::CreateInstance
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * ActorGameCharacterEjectVehicle::CreateInstance(unsigned int a1, int a2, int a3)
{
  grapher::ActorBase::Self *v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterEjectVehicle::ActorGameCharacterEjectVehicle(v3, 0xFFFFFFFF);
    if ( v3 != nullptr )
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
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameCharacterEjectVehicle::ActorGameCharacterEjectVehicle(v3, a1);
  }
  return v3;
}



// Constructor (0x854fd0):
int (**ActorGameCharacterEjectVehicle::ActorGameCharacterEjectVehicle(grapher::ActorBase::Self *a1, unsigned int a2))(grapher::ActorBase::Self *)
{
  grapher::ActorBase::Construct(a1, a2);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205DBE8);
  return (int (**)(grapher::ActorBase::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_205DBE8));
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterEjectVehicle::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterEjectVehicle::~ActorGameCharacterEjectVehicle
// ----------------------------------------------------------------------------
void ActorGameCharacterEjectVehicle::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D810  (binary VA: 0x0)
// Original: sub_84D810
// ----------------------------------------------------------------------------
void sub_84D810(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8507B0  (binary VA: 0x0)
// Original: sub_8507B0
// ----------------------------------------------------------------------------
int sub_8507B0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  int v8;
  int v9;
  int v10;
  uint8_t v11[20];
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
  int v25[4];

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "{Base}", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::SetDisplayName(a1, &v21);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), (char *)&unk_1B15112, (int)(uintptr_t)(v11));
  grapher::ActorBase::SetCategoryName(a1, &v22);
  g4_std::string::Destroy(&v22);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Eject Vehicle", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "AI", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Begin", (int)(uintptr_t)(&v11[1]));
  grapher::ActorBase::AddPin(a1, 0, &v23, 1, -1);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "End", (int)(uintptr_t)(&v11[2]));
  grapher::ActorBase::AddPin(a1, 1, &v24, 1, -1);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v25), "Out", (int)(uintptr_t)(&v11[3]));
  grapher::ActorBase::AddPin(a1, 2, v25, 0, -1);
  g4_std::string::Destroy(v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "The character being ejected.", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Subject", (int)(uintptr_t)(&v9) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v11[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 9, &v11[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Subject", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v5, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( *(uint32_t *)&v11[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v11[4] + 44))(*(uint32_t *)&v11[4]);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Deprecated.", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Vehicle", (int)(uintptr_t)(&v10));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v18, 9, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Vehicle", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v7, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v18);
  { g4_std::string::Destroy(&v20); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8574C0  (binary VA: 0x0)
// Original: sub_8574C0
// ----------------------------------------------------------------------------
int sub_8574C0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorContext::Self *v3;
  void **v4;
  void **v5;
  int *v6;
  int v8;
  void *v9[9];

  v3 = a3;
  v9[0] = v9;
  v9[1] = v9;
  sub_856780(a1, 0, (int)(uintptr_t)(v9), (int)(uintptr_t)(a3), 1);
  v4 = (void **)v9[0];
  if ( v9[0] != v9 )
  {
    v8 = *((uint32_t *)v9[0] + 2);
    while ( 1 )
    {
      v5 = (void **)*v4;
      opDelete(v4);
      if ( v5 == v9 )
        break;
      v4 = v5;
    }
    v3 = a3;
    if ( v8 != 0 )
    {
      v6 = (int *)G4_VCALL<int>(v8, 16);
      if ( v6 != nullptr )
      {
        if ( v6 == (int *)(&dword_20D75F0) )
        {
LABEL_12:
          if ( a2 != 0 )
          {
            if ( a2 == 1 )
            {
              G4_VCALL<void>(v8, 688);
              G4_VCALL<void>(v8, 700, 0);
            }
          }
          else
          {
            G4_VCALL<void>(v8, 672, 0);
            G4_VCALL<void>(v8, 684);
          }
        }
        else
        {
          while ( 1 )
          {
            v6 = (int *)v6[1];
            if ( v6 == nullptr )
              break;
            if ( v6 == (int *)(&dword_20D75F0) )
              goto LABEL_12;
          }
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, v3));
}


