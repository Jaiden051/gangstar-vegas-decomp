#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameObjectSetAnim.h"

// ----------------------------------------------------------------------------
// Function: ActorGameObjectSetAnim::CreateInstance  (binary VA: 0x0)
// Original: ActorGameObjectSetAnim::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameObjectSetAnim::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameObjectSetAnim::ActorGameObjectSetAnim(v3, -1);
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
    ActorGameObjectSetAnim::ActorGameObjectSetAnim(v3, a1);
  }
  return v3;
}



// Constructor (0xc38af0):
int (**ActorGameObjectSetAnim::ActorGameObjectSetAnim(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C008);
  return (int (**)(int))(uintptr_t)(&off_206C008);
}
// ----------------------------------------------------------------------------
// Function: ActorGameObjectSetAnim::Destroy  (binary VA: 0x0)
// Original: ActorGameObjectSetAnim::~ActorGameObjectSetAnim
// ----------------------------------------------------------------------------
void ActorGameObjectSetAnim::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C008);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BA30  (binary VA: 0x0)
// Original: sub_C2BA30
// ----------------------------------------------------------------------------
void sub_C2BA30(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C008);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C34BF0  (binary VA: 0x0)
// Original: sub_C34BF0
// ----------------------------------------------------------------------------
int sub_C34BF0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  int v8;
  int v9;
  uint8_t v10[20];
  uint32_t *v11;
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

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Set Anim", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Game Objects", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "In", (int)(uintptr_t)(&v10[2]));
  grapher::ActorBase::AddPin(a1, 0, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Out", (int)(uintptr_t)(&v10[3]));
  grapher::ActorBase::AddPin(a1, 1, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "GameObject to set the animation", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "GameObject", (int)(uintptr_t)(&v9));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v10[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v14, 9, &v10[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "GameObject", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v15), v5, 1, 1, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  if ( *(uint32_t *)&v10[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v10[4] + 44))(*(uint32_t *)&v10[4]);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Animation name", (int)(uintptr_t)(&v10[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Animation", (int)(uintptr_t)(&v9) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v11 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v17, 4, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Animation", (int)(uintptr_t)(v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v18), v7, 0, 0, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v17);
  { g4_std::string::Destroy(&v19); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C3B2E0  (binary VA: 0x0)
// Original: sub_C3B2E0
// ----------------------------------------------------------------------------
int sub_C3B2E0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  grapher::ActorVariable::Self *Variable;
  void **v5;
  void **v6;
  void **v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint8_t v17[5];
  char *v18;
  void *v19[9];

  v3 = a1;
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  sub_837C70(&v18, (int)(uintptr_t)(a1), Variable, a3, v9, v10, v11, v12, v13, v14, v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17[1]), v18, (int)(uintptr_t)(v17));
  g4_std::string::Destroy(&v18);
  v19[0] = v19;
  v16 = *(uint32_t *)&v17[1];
  v19[1] = v19;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v19), 0, 0x7FFFFFFF);
  v5 = (void **)v19[0];
  if ( v19[0] != v19 )
  {
    do
    {
      G4_VCALL<void>(v5[2], 404, v16);
      v5 = (void **)*v5;
    }
    while ( v5 != v19 );
    v3 = a1;
  }
  grapher::ActorBase::FireEvent(v3, 1, a3);
  v6 = (void **)v19[0];
  if ( v19[0] != v19 )
  {
    while ( 1 )
    {
      v7 = (void **)*v6;
      opDelete(v6);
      if ( v7 == v19 )
        break;
      v6 = v7;
    }
  }
  return ((g4_std::string::Destroy(&v17[1])), (int)0);
}


