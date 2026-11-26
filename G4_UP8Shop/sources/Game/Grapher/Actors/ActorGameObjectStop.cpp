#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameObjectStop.h"

// ----------------------------------------------------------------------------
// Function: ActorGameObjectStop::CreateInstance  (binary VA: 0x0)
// Original: ActorGameObjectStop::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameObjectStop::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameObjectStop::ActorGameObjectStop(v3, -1);
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
    ActorGameObjectStop::ActorGameObjectStop(v3, a1);
  }
  return v3;
}



// Constructor (0xc38b70):
int (**ActorGameObjectStop::ActorGameObjectStop(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C088);
  return (int (**)(int))(uintptr_t)(&off_206C088);
}
// ----------------------------------------------------------------------------
// Function: ActorGameObjectStop::Destroy  (binary VA: 0x0)
// Original: ActorGameObjectStop::~ActorGameObjectStop
// ----------------------------------------------------------------------------
void ActorGameObjectStop::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C088);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BAB0  (binary VA: 0x0)
// Original: sub_C2BAB0
// ----------------------------------------------------------------------------
void sub_C2BAB0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C088);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C35470  (binary VA: 0x0)
// Original: sub_C35470
// ----------------------------------------------------------------------------
int sub_C35470(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  uint32_t *v4;
  void *v5;
  int v6;
  int v7;
  long double v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Stop", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Objects", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "In", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v17, 1, -1);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 1, v18, 0, -1);
  g4_std::string::Destroy(v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Object to stop", (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Object", (int)(uintptr_t)(&v7));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v8) = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v11, 9, (char *)&v8 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Object", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v12), v5, 1, 1, (int)(uintptr_t)(&v13), 3);
  g4_std::string::Destroy(&v12);
  if ( DWORD1(v8) != 0 )
    G4_VCALL<void>(DWORD1(v8), 44);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Is the object set to scripted behavior after stop?", (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Scripted", (int)(uintptr_t)(&v7) + 3);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v14, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Scripted", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v15), v3, 1, 0, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v14);
  { g4_std::string::Destroy(&v16); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C3C640  (binary VA: 0x0)
// Original: sub_C3C640
// ----------------------------------------------------------------------------
void sub_C3C640(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  char v4;
  void **v5;
  int v6;
  int v7;
  bool v8;
  void **v9;
  void **v10;
  int v11;
  uint32_t **v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  char v22;
  void *v23[9];

  v23[0] = v23;
  v23[1] = v23;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v23), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v4 = sub_837730((int)(uintptr_t)(a1), Variable, a3, v14, v15, v16, v17, v18, v19, v20);
  v5 = (void **)v23[0];
  v22 = v4;
  while ( v5 != v23 )
  {
    while ( 1 )
    {
      G4_VCALL<void>(v5[2], 76);
      v6 = (int)(uintptr_t)(v5[2]);
      if ( v6 != 0 && *(uint32_t *)(*(uint32_t *)(v6 + 408) - 12) != 0 )
      {
        v7 = *(uint32_t *)(v6 + 404);
        if ( v7 != 0 )
          break;
LABEL_16:
        if ( *(uint32_t *)(*(uint32_t *)(v6 + 408) - 12) != 0 )
        {
          v11 = *(uint32_t *)(v6 + 404);
          if ( v11 != 0 && G4_VCALL<uint8_t>(v11, 36) != 0 )
          {
            v12 = (uint32_t **)v5[2];
            if ( (int)(uintptr_t)(v12[274]) > 0 )
            {
              v13 = *v12[276];
              v21 = (uint32_t *)v13;
              if ( v13 != 0 )
              {
                sub_9B9E50(v13, 0, 0, 0, 0, 0, 0, nullptr);
                sub_9B8920(v21, 0);
                sub_9B71D0(v21, nullptr, 1);
                if ( v22 != 0 )
                  goto LABEL_9;
              }
            }
          }
        }
      }
LABEL_3:
      v5 = (void **)*v5;
      if ( v5 == v23 )
        goto LABEL_10;
    }
    v8 = (G4_VCALL<int>(v7, 32) & 2) == 0;
    v6 = (int)(uintptr_t)(v5[2]);
    if ( v8 )
    {
      if ( v6 == 0 )
        goto LABEL_3;
      goto LABEL_16;
    }
    v21 = (uint32_t *)(v5[2]);
    sub_9B9E50(v6, 0, 0, 0, 0, 0, 0, nullptr);
    sub_9B8920(v21, 0);
    sub_9B71D0(v21, nullptr, 1);
    if ( v22 == 0 )
      goto LABEL_3;
LABEL_9:
    G4_VCALL<void>(v21, 120, 136, 1);
    v5 = (void **)*v5;
  }
LABEL_10:
  grapher::ActorBase::FireEvent(a1, 1, a3);
  v9 = (void **)v23[0];
  if ( v23[0] != v23 )
  {
    while ( 1 )
    {
      v10 = (void **)*v9;
      opDelete(v9);
      if ( v10 == v23 )
        break;
      v9 = v10;
    }
  }
}


