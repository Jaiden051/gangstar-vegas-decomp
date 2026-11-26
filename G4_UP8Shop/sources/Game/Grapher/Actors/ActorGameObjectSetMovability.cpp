#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameObjectSetMovability.h"

// ----------------------------------------------------------------------------
// Function: ActorGameObjectSetMovability::CreateInstance  (binary VA: 0x0)
// Original: ActorGameObjectSetMovability::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameObjectSetMovability::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameObjectSetMovability::ActorGameObjectSetMovability(v3, -1);
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
    ActorGameObjectSetMovability::ActorGameObjectSetMovability(v3, a1);
  }
  return v3;
}



// Constructor (0xc38c30):
int (**ActorGameObjectSetMovability::ActorGameObjectSetMovability(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C1C8);
  return (int (**)(int))(uintptr_t)(&off_206C1C8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameObjectSetMovability::Destroy  (binary VA: 0x0)
// Original: ActorGameObjectSetMovability::~ActorGameObjectSetMovability
// ----------------------------------------------------------------------------
void ActorGameObjectSetMovability::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C1C8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2BB70  (binary VA: 0x0)
// Original: sub_C2BB70
// ----------------------------------------------------------------------------
void sub_C2BB70(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C1C8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C36770  (binary VA: 0x0)
// Original: sub_C36770
// ----------------------------------------------------------------------------
int sub_C36770(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Set Movability", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Physic", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetCategoryName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Enable", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v22, 1, -1);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v23), "Out", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 1, v23, 0, -1);
  g4_std::string::Destroy(v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Object to enable or disable collision", (int)(uintptr_t)(&v8) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Object", (int)(uintptr_t)(&v8) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v10) = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v13, 9, (char *)&v10 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Object", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v14), v6, 1, 1, (int)(uintptr_t)(&v15), 3);
  g4_std::string::Destroy(&v14);
  if ( DWORD1(v10) != 0 )
    G4_VCALL<void>(DWORD1(v10), 44);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Can the object be moved by other objects.", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Movable", (int)(uintptr_t)(&v9));
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v16, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Movable", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v17), v3, 1, 1, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Can the object fall", (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Can Fall", (int)(uintptr_t)(&v9) + 3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v19, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Can Fall", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v20), v4, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v19);
  { g4_std::string::Destroy(&v21); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C3BA80  (binary VA: 0x0)
// Original: sub_C3BA80
// ----------------------------------------------------------------------------
void sub_C3BA80(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v4;
  uint8_t v5;
  void **v6;
  uint32_t *v7;
  int *v8;
  int *v9;
  int v10;
  char *v11;
  uint32_t *v12;
  void **v13;
  void **v14;
  uint32_t *v15;
  char *v16;
  int v17;
  bool v18;
  int v19;
  int v20;
  int v21;
  char *v22;
  uint32_t *v23;
  grapher::ActorBase::Self *v24;
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
  char v39;
  uint8_t v40;
  void *v41[9];

  v41[0] = v41;
  v41[1] = v41;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v41), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v39 = sub_837730((int)(uintptr_t)(a1), Variable, a3, v25, v27, v29, v31, v33, v35, v37);
  v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v5 = sub_837730((int)(uintptr_t)(a1), v4, a3, v26, v28, v30, v32, v34, v36, v38);
  v6 = (void **)v41[0];
  v40 = v5;
  if ( v41[0] != v41 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = (uint32_t *)(v6[2]);
        if ( v7 != nullptr )
          break;
LABEL_18:
        v6 = (void **)*v6;
        if ( v6 == v41 )
          goto LABEL_19;
      }
      v8 = (int *)(*(int (**)(void *))(*v7 + 16))(v6[2]);
      if ( v8 == nullptr )
        goto LABEL_8;
      if ( v8 != (int *)(&dword_20D75F0) )
      {
        while ( 1 )
        {
          v8 = (int *)v8[1];
          if ( v8 == nullptr )
            break;
          if ( v8 == (int *)(&dword_20D75F0) )
            goto LABEL_24;
        }
LABEL_8:
        v9 = (int *)G4_VCALL<int>(v7, 16);
        if ( v9 != nullptr )
        {
          while ( v9 != (int *)(&dword_20D68D0) )
          {
            v9 = (int *)v9[1];
            if ( v9 == nullptr )
              goto LABEL_18;
          }
          if ( v7[195] != 0 )
          {
            if ( v39 != 0 )
            {
              v10 = sub_6645E0();
              v11 = nullptr;
              v12 = (uint32_t *)v7[195];
              if ( v12 != nullptr )
                v11 = (char *)v12 + *(uint32_t *)(*v12 - 12);
              G4_VCALL<void>(v10, 108, v11);
            }
            else
            {
              v21 = sub_6645E0();
              v22 = nullptr;
              v23 = (uint32_t *)v7[195];
              if ( v23 != nullptr )
                v22 = (char *)v23 + *(uint32_t *)(*v23 - 12);
              G4_VCALL<void>(v21, 104, v22, 1065353216, 1036831949, 1, 1016);
            }
            v24 = (grapher::ActorBase::Self *)(*(uint32_t *)(*(uint32_t *)v7[195] - 12) + v7[195]);
            G4_VCALL<void>(v24, 52, v40);
          }
        }
        goto LABEL_18;
      }
LABEL_24:
      v15 = (uint32_t *)v7[459];
      if ( v15 != nullptr )
      {
        v16 = (char *)v15 + *(uint32_t *)(*v15 - 12);
        v17 = 1232348160;
        if ( v39 != 0 )
          v17 = 944879383;
        G4_VCALL<void>(v16, 176, v17);
      }
      v18 = G4_VCALL<int>(v7, 456) == 0;
      v19 = v7[469];
      v20 = v7[468];
      if ( !v18 && (v20 & 0x100) != 0 )
      {
        if ( v20 < 0 || (v19 & 1) != 0 )
          goto LABEL_18;
        if ( (v19 & 4) != 0 )
          goto LABEL_32;
        v6 = (void **)*v6;
        if ( v6 == v41 )
          break;
      }
      else
      {
        if ( v20 < 0 || (v19 & 1) != 0 )
          goto LABEL_18;
LABEL_32:
        if ( (v19 & 4) != 0 )
          goto LABEL_18;
        sub_96D5A0(v7, v40);
        v6 = (void **)*v6;
        if ( v6 == v41 )
          break;
      }
    }
  }
LABEL_19:
  grapher::ActorBase::FireEvent(a1, 1, a3);
  v13 = (void **)v41[0];
  if ( v41[0] != v41 )
  {
    while ( 1 )
    {
      v14 = (void **)*v13;
      opDelete(v13);
      if ( v14 == v41 )
        break;
      v13 = v14;
    }
  }
}


