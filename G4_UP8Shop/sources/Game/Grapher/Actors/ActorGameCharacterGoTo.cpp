#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterGoTo.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterGoTo::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterGoTo::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterGoTo::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x3Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterGoTo::ActorGameCharacterGoTo(v3, -1);
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
    v3 = gll_operator_new(0x3Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameCharacterGoTo::ActorGameCharacterGoTo(v3, a1);
  }
  return v3;
}



// Constructor (0xc66b80):
int (**ActorGameCharacterGoTo::ActorGameCharacterGoTo(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *((uint32_t *)a1 + 13) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CDA8);
  *((uint32_t *)a1 + 14) = 0;
  return (int (**)(int))(uintptr_t)(&off_206CDA8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterGoTo::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterGoTo::~ActorGameCharacterGoTo
// ----------------------------------------------------------------------------
void ActorGameCharacterGoTo::Destroy(grapher::ActorBase::Self *a1)
{
  int v1;
  int v2;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CDA8);
  v1 = *((uint32_t *)a1 + 14);
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 56, v1 + 16);
  v2 = *((uint32_t *)a1 + 13);
  *((uint32_t *)a1 + 14) = 0;
  if ( v2 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 52, v2 + 16);
  *((uint32_t *)a1 + 13) = 0;
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C66D50  (binary VA: 0x0)
// Original: sub_C66D50
// ----------------------------------------------------------------------------
void sub_C66D50(grapher::ActorBase::Self *a1)
{
  int v1;
  int v2;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CDA8);
  v1 = *((uint32_t *)a1 + 14);
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 56, v1 + 16);
  v2 = *((uint32_t *)a1 + 13);
  *((uint32_t *)a1 + 14) = 0;
  if ( v2 != 0 )
    sub_5459F0((int)(uintptr_t)(a1) + 52, v2 + 16);
  *((uint32_t *)a1 + 13) = 0;
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5F1A0  (binary VA: 0x0)
// Original: sub_C5F1A0
// ----------------------------------------------------------------------------
int sub_C5F1A0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  void *v8;
  void *v9;
  void *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint8_t v16[20];
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
  int v37;
  int v38;
  int v39[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 5, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Go To", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetDisplayName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Characters", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v19);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Drive", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddPin(a1, 0, &v35, 1, -1);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), (char *)&off_1B36EC5, (int)(uintptr_t)(v16));
  grapher::ActorBase::AddPin(a1, 1, &v36, 1, -1);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Walk", (int)(uintptr_t)(&v16[1]));
  grapher::ActorBase::AddPin(a1, 2, &v37, 1, -1);
  g4_std::string::Destroy(&v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "Out", (int)(uintptr_t)(&v16[2]));
  grapher::ActorBase::AddPin(a1, 3, &v38, 0, -1);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v39), "Reached", (int)(uintptr_t)(&v16[3]));
  grapher::ActorBase::AddPin(a1, 4, v39, 0, -1);
  g4_std::string::Destroy(v39);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "List of characters which will go to destination.", (int)(uintptr_t)(&v12) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Target", (int)(uintptr_t)(&v12));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v16[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v20, 9, &v16[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Target", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v21), v5, 1, 1, (int)(uintptr_t)(&v22), 1);
  g4_std::string::Destroy(&v21);
  if ( *(uint32_t *)&v16[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v16[4] + 44))(*(uint32_t *)&v16[4]);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "The destination to go to.", (int)(uintptr_t)(&v13) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Destination", (int)(uintptr_t)(&v12) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v17 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v23, 9, &v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Destination", (int)(uintptr_t)(&v13));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v24), v7, 1, 1, (int)(uintptr_t)(&v25), 1);
  g4_std::string::Destroy(&v24);
  if ( v17 != nullptr )
    G4_VCALL<void>(v17, 44);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Can the character react to attacks during the go to.", (int)(uintptr_t)(&v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "React to attacks", (int)(uintptr_t)(&v13) + 2);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v26, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "React to attacks", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v27), v8, 1, 0, (int)(uintptr_t)(&v28), 1);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Can the character use free running.", (int)(uintptr_t)(&v14) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Free running", (int)(uintptr_t)(&v14) + 1);
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v29, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Free running", (int)(uintptr_t)(&v14) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v30), v9, 1, 0, (int)(uintptr_t)(&v31), 1);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Enable pathfinding for go to.", (int)(uintptr_t)(&v15) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Enable pathfinding", (int)(uintptr_t)(&v15));
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v32, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Enable pathfinding", (int)(uintptr_t)(&v15) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v33), v10, 1, 0, (int)(uintptr_t)(&v34), 1);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v32);
  return ((g4_std::string::Destroy(&v34)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B120  (binary VA: 0x0)
// Original: sub_C5B120
// ----------------------------------------------------------------------------
int sub_C5B120(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;

  if ( *((uint32_t *)a1 + 13) == 0 || (uint8_t)(result = sub_986060(*((uint32_t *)a1 + 13))) == 0 )
  {
    G4_VCALL<void>(a1, 28, a3);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 4, a3));
  }
  return result;
}



// Vtable Slot [+28] (0xc67f20, 237 bytes) - sub_C67F20:


// Vtable Slot [+36] (0xc66dd0, 1391 bytes) - sub_C66DD0:

