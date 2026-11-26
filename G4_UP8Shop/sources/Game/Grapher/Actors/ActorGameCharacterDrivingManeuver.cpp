#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterDrivingManeuver.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterDrivingManeuver::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterDrivingManeuver::CreateInstance
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * ActorGameCharacterDrivingManeuver::CreateInstance(unsigned int a1, int a2, int a3)
{
  grapher::ActorBase::Self *v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterDrivingManeuver::ActorGameCharacterDrivingManeuver(v3, 0xFFFFFFFF);
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
    ActorGameCharacterDrivingManeuver::ActorGameCharacterDrivingManeuver(v3, a1);
  }
  return v3;
}



// Constructor (0x854f90):
int (**ActorGameCharacterDrivingManeuver::ActorGameCharacterDrivingManeuver(grapher::ActorBase::Self *a1, unsigned int a2))(grapher::ActorBase::Self *)
{
  grapher::ActorBase::Construct(a1, a2);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205DBA8);
  return (int (**)(grapher::ActorBase::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_205DBA8));
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterDrivingManeuver::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterDrivingManeuver::~ActorGameCharacterDrivingManeuver
// ----------------------------------------------------------------------------
void ActorGameCharacterDrivingManeuver::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D650  (binary VA: 0x0)
// Original: sub_84D650
// ----------------------------------------------------------------------------
void sub_84D650(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_850C80  (binary VA: 0x0)
// Original: sub_850C80
// ----------------------------------------------------------------------------
int sub_850C80(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v3;
  void *v4;
  int v5;
  int v6;
  int v7;
  g4_int128_t v8;
  int v9;
  int v10;
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
  int v21[4];

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "{Base}", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), (char *)&unk_1B15112, (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v15);
  g4_std::string::Destroy(&v15);
  grapher::ActorBase::SetArraySize(a1, 6, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Driving Maneuver", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "AI", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Overtake", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v16, 1, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Pit", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 1, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Bump", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddPin(a1, 2, &v18, 1, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Cutoff", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddPin(a1, 3, &v19, 1, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Cop Stop", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 4, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 5, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "The driving character.", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Subject", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v8) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v11, 9, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Subject", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v4, 1, 1, (int)(uintptr_t)(&v13), 3);
  g4_std::string::Destroy(&v12);
  if ( DWORD1(v8) != 0 )
    G4_VCALL<void>(DWORD1(v8), 44);
  g4_std::string::Destroy(&v11);
  { g4_std::string::Destroy(&v13); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8575E0  (binary VA: 0x0)
// Original: sub_8575E0
// ----------------------------------------------------------------------------
int sub_8575E0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
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
      v6 = (int *)(*(int (**)(void))(*(uint32_t *)v8 + 16))();
      if ( v6 != nullptr )
      {
        if ( v6 == (int *)(&dword_20D75F0) )
        {
LABEL_12:
          switch ( a2 )
          {
            case 0:
              sub_9B4EB0(v8);
              break;
            case 1:
              sub_9B49D0(v8);
              break;
            case 2:
              sub_9B47F0(v8);
              break;
            case 3:
              sub_9BA270(v8);
              break;
            case 4:
              sub_9B4550(v8);
              break;
            default:
              return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 5, v3));
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
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 5, v3));
}


