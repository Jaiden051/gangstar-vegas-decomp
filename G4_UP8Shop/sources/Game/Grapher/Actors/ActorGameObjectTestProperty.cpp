#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameObjectTestProperty.h"

// ----------------------------------------------------------------------------
// Function: ActorGameObjectTestProperty::CreateInstance  (binary VA: 0x0)
// Original: ActorGameObjectTestProperty::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameObjectTestProperty::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameObjectTestProperty::ActorGameObjectTestProperty(v3, -1);
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
    ActorGameObjectTestProperty::ActorGameObjectTestProperty(v3, a1);
  }
  return v3;
}



// Constructor (0xc38bb0):
int (**ActorGameObjectTestProperty::ActorGameObjectTestProperty(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C148);
  return (int (**)(int))(uintptr_t)(&off_206C148);
}
// ----------------------------------------------------------------------------
// Function: ActorGameObjectTestProperty::Destroy  (binary VA: 0x0)
// Original: ActorGameObjectTestProperty::~ActorGameObjectTestProperty
// ----------------------------------------------------------------------------
void ActorGameObjectTestProperty::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C148);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BAF0  (binary VA: 0x0)
// Original: sub_C2BAF0
// ----------------------------------------------------------------------------
void sub_C2BAF0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C148);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C35E10  (binary VA: 0x0)
// Original: sub_C35E10
// ----------------------------------------------------------------------------
int sub_C35E10(grapher::ActorBase::Self *a1)
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
  long double v12;
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
  int v30[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Test Property", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Objects", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "In", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddPin(a1, 0, &v27, 1, -1);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "True", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v28, 0, -1);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "False", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v29, 0, -1);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v30), "Out", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddPin(a1, 3, v30, 0, -1);
  g4_std::string::Destroy(v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Object to test the property", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Object", (int)(uintptr_t)(&v9));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v12) = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v15, 9, (char *)&v12 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Object", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v7, 1, 1, (int)(uintptr_t)(&v17), 1);
  g4_std::string::Destroy(&v16);
  if ( DWORD1(v12) != 0 )
    G4_VCALL<void>(DWORD1(v12), 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "OID of the property", (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Property", (int)(uintptr_t)(&v9) + 3);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v18, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Property", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v3, 1, 1, (int)(uintptr_t)(&v20), 1);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Operator applied between the property value and the input value", (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Operator", (int)(uintptr_t)(&v10) + 2);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v21, 1, 11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Operator", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v22), v4, 1, 1, (int)(uintptr_t)(&v23), 1);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Value to test", (int)(uintptr_t)(&v11) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Value", (int)(uintptr_t)(&v11) + 1);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v24, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Value", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v25), v5, 1, 1, (int)(uintptr_t)(&v26), 1);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  { g4_std::string::Destroy(&v26); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C39800  (binary VA: 0x0)
// Original: sub_C39800
// ----------------------------------------------------------------------------
void sub_C39800(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v4;
  grapher::ActorVariable::Self *v5;
  grapher::ActorVariable::Self *v6;
  grapher::ActorContext::Self *v7;
  void **v8;
  void **v9;
  void **v10;
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
  int v32;
  int v33;
  int v34;
  grapher::ActorContext::Self *v35;
  grapher::ActorContext::Self *v36;
  grapher::ActorContext::Self *v37;
  grapher::ActorContext::Self *v38;
  int v39;
  uint32_t *i;
  void *v41[2];
  uint32_t v42[11];

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v4 = sub_837200((int)(uintptr_t)(a1), Variable, a3, v11, v14, v17, v20, v23, v26, v29, v32, v36);
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v38 = sub_837200((int)(uintptr_t)(a1), v5, a3, v12, v15, v18, v21, v24, v27, v30, v33, v37);
  v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
  v7 = sub_837200((int)(uintptr_t)(a1), v6, a3, v13, v16, v19, v22, v25, v28, v31, v34, v38);
  if ( (unsigned int)(uintptr_t)(v4) <= 0xE5 )
  {
    v35 = v7;
    v41[0] = v41;
    v41[1] = v41;
    sub_8560A0(a1, 0, (int)(uintptr_t)(v41), (int)(uintptr_t)(a3), 0x7FFFFFFF);
    v42[2] = (uint32_t)(uintptr_t)((char *)v4 + 25);
    v8 = (void **)v41[0];
    v42[3] = (uint32_t)(uintptr_t)((char *)v35 + 25);
    v42[0] = v39;
    v42[1] = 23;
    for ( i = v42; v8 != v41; v8 = (void **)*v8 )
    {
      while ( sub_970B40(&i, v8[2], 0) != 0 )
      {
        grapher::ActorBase::FireEvent(a1, 1, a3);
        v8 = (void **)*v8;
        if ( v8 == v41 )
          goto LABEL_7;
      }
      grapher::ActorBase::FireEvent(a1, 2, a3);
    }
LABEL_7:
    grapher::ActorBase::FireEvent(a1, 3, a3);
    v9 = (void **)v41[0];
    if ( v41[0] != v41 )
    {
      while ( 1 )
      {
        v10 = (void **)*v9;
        opDelete(v9);
        if ( v10 == v41 )
          break;
        v9 = v10;
      }
    }
  }
}


