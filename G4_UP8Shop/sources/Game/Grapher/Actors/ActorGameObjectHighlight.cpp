#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameObjectHighlight.h"

// ----------------------------------------------------------------------------
// Function: ActorGameObjectHighlight::CreateInstance  (binary VA: 0x0)
// Original: ActorGameObjectHighlight::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameObjectHighlight::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameObjectHighlight::ActorGameObjectHighlight(v3, -1);
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
    ActorGameObjectHighlight::ActorGameObjectHighlight(v3, a1);
  }
  return v3;
}



// Constructor (0xc386e0):
int (**ActorGameObjectHighlight::ActorGameObjectHighlight(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BF08);
  return (int (**)(int))(uintptr_t)(&off_206BF08);
}
// ----------------------------------------------------------------------------
// Function: ActorGameObjectHighlight::Destroy  (binary VA: 0x0)
// Original: ActorGameObjectHighlight::~ActorGameObjectHighlight
// ----------------------------------------------------------------------------
void ActorGameObjectHighlight::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BF08);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B970  (binary VA: 0x0)
// Original: sub_C2B970
// ----------------------------------------------------------------------------
void sub_C2B970(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BF08);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C32F90  (binary VA: 0x0)
// Original: sub_C32F90
// ----------------------------------------------------------------------------
int sub_C32F90(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  void *v8;
  void *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint8_t v14[20];
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
  int v33[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Highlight", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetDisplayName(a1, &v16);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Objects", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v17);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Show", (int)(uintptr_t)(&v14[1]));
  grapher::ActorBase::AddPin(a1, 0, &v31, 1, -1);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Hide", (int)(uintptr_t)(&v14[2]));
  grapher::ActorBase::AddPin(a1, 1, &v32, 1, -1);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v33), "Out", (int)(uintptr_t)(&v14[3]));
  grapher::ActorBase::AddPin(a1, 2, v33, 0, -1);
  g4_std::string::Destroy(v33);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "List of objects to highlight.", (int)(uintptr_t)(&v11) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Object", (int)(uintptr_t)(&v11));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v14[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v18, 9, &v14[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Object", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v19), v5, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( *(uint32_t *)&v14[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v14[4] + 44))(*(uint32_t *)&v14[4]);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), (char *)&unk_1B15112, (int)(uintptr_t)(&v12) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Highlight", (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Highlight", (int)(uintptr_t)(&v11) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &v21);
  v15 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v22, 11, &v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Highlight", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v23), v7, 1, 1, (int)(uintptr_t)(&v24), 3);
  g4_std::string::Destroy(&v23);
  if ( v15 != nullptr )
    G4_VCALL<void>(v15, 44);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), (char *)&unk_1B15112, (int)(uintptr_t)(&v13) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Show in game", (int)(uintptr_t)(&v12) + 3);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v25, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Show in game", (int)(uintptr_t)(&v13));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v26), v8, 1, 1, (int)(uintptr_t)(&v27), 3);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), (char *)&unk_1B15112, (int)(uintptr_t)(v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Show on map", (int)(uintptr_t)(&v13) + 2);
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v28, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Show on map", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v29), v9, 1, 1, (int)(uintptr_t)(&v30), 3);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v28);
  return ((g4_std::string::Destroy(&v30)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C3C8E0  (binary VA: 0x0)
// Original: sub_C3C8E0
// ----------------------------------------------------------------------------
void sub_C3C8E0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v4;
  grapher::ActorVariable::Self *v5;
  uint32_t *j;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *i;
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
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  uint8_t v32;
  int v33;
  grapher::ActorContext::Self *v34;
  grapher::ActorContext::Self *v35;
  uint8_t v36;
  uint32_t v37[7];

  v37[0] = (uint32_t)(uintptr_t)(v37);
  v37[1] = (uint32_t)(uintptr_t)(v37);
  sub_8560A0(a1, 0, (int)(uintptr_t)(v37), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v34 = sub_837200((int)(uintptr_t)(a1), Variable, a3, v11, v14, v17, v20, v23, v26, v29, v33, v35);
  v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v36 = sub_837730((int)(uintptr_t)(a1), v4, a3, v12, v15, v18, v21, v24, v27, v30);
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
  v32 = sub_837730((int)(uintptr_t)(a1), v5, a3, v13, v16, v19, v22, v25, v28, v31);
  if ( a2 != 0 )
  {
    if ( a2 == 1 )
    {
      for ( i = (uint32_t *)v37[0]; i != v37; i = (uint32_t *)*i )
      {
        if ( i[2] != 0 )
          sub_C1A860(i[2]);
      }
    }
  }
  else
  {
    for ( j = (uint32_t *)v37[0]; j != v37; j = (uint32_t *)*j )
    {
      v7 = j[2];
      if ( v7 != 0 )
        G4_VCALL<void>(v7, 288, v34, v32, v36);
    }
  }
  grapher::ActorBase::FireEvent(a1, 2, a3);
  v8 = (uint32_t *)v37[0];
  if ( (uint32_t *)v37[0] != v37 )
  {
    while ( 1 )
    {
      v9 = (uint32_t *)*v8;
      opDelete(v8);
      if ( v9 == v37 )
        break;
      v8 = v9;
    }
  }
}


