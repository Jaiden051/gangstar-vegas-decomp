#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameVehicleLockDoors.h"

// ----------------------------------------------------------------------------
// Function: ActorGameVehicleLockDoors::CreateInstance  (binary VA: 0x0)
// Original: ActorGameVehicleLockDoors::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameVehicleLockDoors::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameVehicleLockDoors::ActorGameVehicleLockDoors(v3, -1);
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
    ActorGameVehicleLockDoors::ActorGameVehicleLockDoors(v3, a1);
  }
  return v3;
}



// Constructor (0x829b90):
int (**ActorGameVehicleLockDoors::ActorGameVehicleLockDoors(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BC28);
  return (int (**)(int))(uintptr_t)(&off_205BC28);
}
// ----------------------------------------------------------------------------
// Function: ActorGameVehicleLockDoors::Destroy  (binary VA: 0x0)
// Original: ActorGameVehicleLockDoors::~ActorGameVehicleLockDoors
// ----------------------------------------------------------------------------
int ActorGameVehicleLockDoors::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BC28);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8207F0  (binary VA: 0x0)
// Original: sub_8207F0
// ----------------------------------------------------------------------------
void sub_8207F0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205BC28);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_826340  (binary VA: 0x0)
// Original: sub_826340
// ----------------------------------------------------------------------------
int sub_826340(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v3;
  void *v4;
  int v5;
  int v6;
  g4_int128_t v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Lock Vehicle Doors", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Vehicles", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Lock", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Unlock", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Toggle", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Vehicle to lock teh doors", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Vehicle", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Vehicle", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  { g4_std::string::Destroy(&v12); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_821440  (binary VA: 0x0)
// Original: sub_821440
// ----------------------------------------------------------------------------
void sub_821440(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **i;
  uint8_t *v4;
  int *v5;
  bool v6;
  bool v7;
  void **v8;
  void **v9;
  void *v10[9];

  v10[0] = v10;
  v10[1] = v10;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v10), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  for ( i = (void **)v10[0]; i != v10; i = (void **)*i )
  {
    v4 = (uint8_t *)(i[2]);
    if ( v4 != nullptr )
    {
      v5 = (int *)(*(int (**)(void *))(*(uint32_t *)v4 + 16))(i[2]);
      if ( v5 != nullptr )
      {
        while ( v5 != (int *)(&dword_20D68D0) )
        {
          v5 = (int *)v5[1];
          if ( v5 == nullptr )
            goto LABEL_11;
        }
        v6 = false;
        v7 = false;
        if ( a2 != 1 )
        {
          LOBYTE(v6) = 1;
          v7 = true;
          if ( a2 == 2 )
          {
            v7 = v4[177] >= 0;
            v6 = v7;
          }
        }
        v4[1011] = v7;
        G4_VCALL<void>(v4, 40, 0x8000, v6);
      }
    }
LABEL_11:
    ;
  }
  grapher::ActorBase::FireEvent(a1, 3, a3);
  v8 = (void **)v10[0];
  if ( v10[0] != v10 )
  {
    while ( 1 )
    {
      v9 = (void **)*v8;
      opDelete(v8);
      if ( v9 == v10 )
        break;
      v8 = v9;
    }
  }
}


