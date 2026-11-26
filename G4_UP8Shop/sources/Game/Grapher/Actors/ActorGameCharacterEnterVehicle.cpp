#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterEnterVehicle.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterEnterVehicle::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterEnterVehicle::CreateInstance
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * ActorGameCharacterEnterVehicle::CreateInstance(unsigned int a1, int a2, int a3)
{
  grapher::ActorBase::Self *v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterEnterVehicle::ActorGameCharacterEnterVehicle(v3, 0xFFFFFFFF);
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
    ActorGameCharacterEnterVehicle::ActorGameCharacterEnterVehicle(v3, a1);
  }
  return v3;
}



// Constructor (0x855010):
int (**ActorGameCharacterEnterVehicle::ActorGameCharacterEnterVehicle(grapher::ActorBase::Self *a1, unsigned int a2))(grapher::ActorBase::Self *)
{
  grapher::ActorBase::Construct(a1, a2);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205DC28);
  return (int (**)(grapher::ActorBase::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_205DC28));
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterEnterVehicle::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterEnterVehicle::~ActorGameCharacterEnterVehicle
// ----------------------------------------------------------------------------
void ActorGameCharacterEnterVehicle::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D350  (binary VA: 0x0)
// Original: sub_84D350
// ----------------------------------------------------------------------------
void sub_84D350(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8502E0  (binary VA: 0x0)
// Original: sub_8502E0
// ----------------------------------------------------------------------------
int sub_8502E0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Enter Vehicle", (int)(uintptr_t)(&v8));
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "The vehicle to eject from. Deprecated.", (int)(uintptr_t)(&v10) + 2);
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
// Function: sub_857EC0  (binary VA: 0x0)
// Original: sub_857EC0
// ----------------------------------------------------------------------------
int sub_857EC0(grapher::ActorBase::Self *a1, int a2, int a3)
{
  grapher::ActorContext::Self *v3;
  void ***v4;
  int v5;
  void **v6;
  int v7;
  int *v8;
  void ***v9;
  int v10;
  void **v11;
  int v12;
  int *v13;
  grapher::ActorContext::Self *v15;
  grapher::ActorContext::Self *v16;
  void *v17;
  void **v18;

  v3 = (grapher::ActorContext::Self *)a3;
  v17 = &v17;
  v18 = &v17;
  sub_856780(a1, 0, (int)(uintptr_t)(&v17), a3, 1);
  v4 = (void ***)v17;
  if ( v17 != &v17 )
  {
    v5 = *((uint32_t *)v17 + 2);
    while ( 1 )
    {
      v6 = *v4;
      opDelete(v4);
      if ( v6 == &v17 )
        break;
      v4 = (void ***)v6;
    }
    v7 = v5;
    v3 = (grapher::ActorContext::Self *)a3;
    if ( v7 != 0 )
    {
      v8 = (int *)G4_VCALL<int>(v7, 16);
      if ( v8 != nullptr )
      {
        if ( v8 == (int *)(&dword_20D75F0) )
          goto LABEL_12;
        while ( 1 )
        {
          v8 = (int *)v8[1];
          if ( v8 == nullptr )
            break;
          if ( v8 == (int *)(&dword_20D75F0) )
            goto LABEL_12;
        }
      }
    }
  }
  v7 = 0;
LABEL_12:
  v17 = &v17;
  v18 = &v17;
  sub_856780(a1, 1, (int)(uintptr_t)(&v17), (int)(uintptr_t)(v3), 1);
  v9 = (void ***)v17;
  if ( v17 != &v17 )
  {
    v16 = v3;
    v15 = *((grapher::ActorContext::Self **)v17 + 2);
    v10 = v7;
    while ( 1 )
    {
      v11 = *v9;
      opDelete(v9);
      if ( v11 == &v17 )
        break;
      v9 = (void ***)v11;
    }
    v12 = v10;
    v3 = v16;
    if ( v15 != nullptr )
    {
      v13 = (int *)G4_VCALL<int>(v15, 16);
      if ( v13 != nullptr )
      {
        if ( v13 == (int *)(&dword_20D68D0) )
        {
LABEL_23:
          if ( v12 != 0 )
          {
            if ( a2 != 0 )
            {
              if ( a2 == 1 )
                G4_VCALL<void>(v12, 648);
            }
            else
            {
              G4_VCALL<void>(v12, 640, 0);
              G4_VCALL<void>(v12, 644);
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v13 = (int *)v13[1];
            if ( v13 == nullptr )
              break;
            if ( v13 == (int *)(&dword_20D68D0) )
              goto LABEL_23;
          }
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, v3));
}


