#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterKill.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterKill::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterKill::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterKill::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterKill::ActorGameCharacterKill(v3, -1);
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
    ActorGameCharacterKill::ActorGameCharacterKill(v3, a1);
  }
  return v3;
}



// Constructor (0xc664a0):
int (**ActorGameCharacterKill::ActorGameCharacterKill(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CDE8);
  return (int (**)(int))(uintptr_t)(&off_206CDE8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterKill::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterKill::~ActorGameCharacterKill
// ----------------------------------------------------------------------------
void ActorGameCharacterKill::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CDE8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B2D0  (binary VA: 0x0)
// Original: sub_C5B2D0
// ----------------------------------------------------------------------------
void sub_C5B2D0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CDE8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5F9A0  (binary VA: 0x0)
// Original: sub_C5F9A0
// ----------------------------------------------------------------------------
int sub_C5F9A0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  void *v4;
  uint32_t *v5;
  void *v6;
  void *v7;
  uint32_t *v8;
  void *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
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
  int v31[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Kill", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetDisplayName(a1, &v16);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Characters", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v17);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "In", (int)(uintptr_t)(&v13) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v30, 1, -1);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v31), "Out", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddPin(a1, 1, v31, 0, -1);
  g4_std::string::Destroy(v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "List of characters to kill.", (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Target", (int)(uintptr_t)(&v10) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v14 = v5;
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v18, 9, &v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Target", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v19), v6, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( v14 != nullptr )
    G4_VCALL<void>(v14, 44);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Did the character play his death animation?", (int)(uintptr_t)(&v11) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Animated", (int)(uintptr_t)(&v11) + 1);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v21, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Animated", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v22), v4, 1, 0, (int)(uintptr_t)(&v23), 3);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Did the character drop his loot?", (int)(uintptr_t)(&v12) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "DropLoot", (int)(uintptr_t)(&v12));
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v24, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Drop Loot", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v25), v7, 1, 0, (int)(uintptr_t)(&v26), 3);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Animation name. Default played if none specified", (int)(uintptr_t)(&v13) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "AnimName", (int)(uintptr_t)(&v12) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v8 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v15 = v8;
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v27, 4, &v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Anim Name", (int)(uintptr_t)(&v13));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v28), v9, 1, 0, (int)(uintptr_t)(&v29), 3);
  g4_std::string::Destroy(&v28);
  if ( v15 != nullptr )
    G4_VCALL<void>(v15, 44);
  g4_std::string::Destroy(&v27);
  return ((g4_std::string::Destroy(&v29)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C6A620  (binary VA: 0x0)
// Original: sub_C6A620
// ----------------------------------------------------------------------------
int sub_C6A620(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v4;
  grapher::ActorVariable::Self *v5;
  void **v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  void **v12;
  void **v13;
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
  void *obj;
  void *obja;
  void *objb;
  void *objc;
  int v33;
  int v34;
  int v35;
  int16_t v36;
  int v37;
  int v38;
  grapher::ActorContext::Self *v39;
  grapher::ActorBase::Self *v40;
  const char *v41;
  void *v42[10];

  v42[6] = &a1;
  v40 = a1;
  v39 = a3;
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  HIBYTE(v34) = sub_837730((int)(uintptr_t)(v40), Variable, v39, v15, v17, v20, v23, v26, (int)(uintptr_t)(obj), v33);
  v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v40, 2);
  BYTE2(v35) = sub_837730((int)(uintptr_t)(v40), v4, v39, v16, v18, v21, v24, v27, (int)(uintptr_t)(obja), v34);
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v40, 3);
  sub_837C70(&v41, (int)(uintptr_t)(v40), v5, v39, v19, v22, v25, v28, (int)(uintptr_t)(objb), v35, v37);
  v42[0] = v42;
  v42[1] = v42;
  sub_8560A0(v40, 0, (int)(uintptr_t)(v42), (int)(uintptr_t)(v39), 0x7FFFFFFF);
  v38 = -1;
  if ( *((uint32_t *)v41 - 3) != 0 )
    v38 = sub_C6A190(v41);
  v6 = (void **)v42[0];
  if ( v42[0] != v42 )
  {
    while ( 1 )
    {
      v10 = (uint32_t *)(v6[2]);
      if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_1AA54)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0
        && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
      {
        sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
        __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
      }
      if ( v10 == nullptr )
        goto LABEL_13;
      if ( *(uint32_t *)(v10[102] - 12) == 0 )
        goto LABEL_13;
      v7 = v10[101];
      if ( v7 == 0 || ((*(int (**)(uint32_t))(*(uint32_t *)v7 + 32))(v10[101]) & 2) == 0 )
        goto LABEL_13;
      v8 = G4_VCALL<int>(v10, 560);
      if ( sub_A6DB10(v8) != dword_20D76D0 )
        break;
      v11 = v10[468];
      if ( (v11 & 0x2000) != 0 )
      {
LABEL_13:
        v6 = (void **)*v6;
        if ( v6 == v42 )
          goto LABEL_20;
      }
      else
      {
        if ( (v11 & 0x1000) == 0 )
          goto LABEL_11;
        v6 = (void **)*v6;
        if ( v6 == v42 )
          goto LABEL_20;
      }
    }
    objc = (void *)dword_20D76D0;
    v9 = G4_VCALL<int>(v10, 560);
    sub_A6DB00(v9, (int)(uintptr_t)(objc));
    sub_BDEE30(v10 + 72, 0);
LABEL_11:
    G4_VCALL<void>(v10, 420, HIBYTE(v36), (uint8_t)v36);
    if ( v38 != -1 )
      sub_9D4450((int)(uintptr_t)(v10), v38, 1065353216, 125, 0, 1);
    goto LABEL_13;
  }
LABEL_20:
  grapher::ActorBase::FireEvent(v40, 1, v39);
  v12 = (void **)v42[0];
  if ( v42[0] != v42 )
  {
    while ( 1 )
    {
      v13 = (void **)*v12;
      opDelete(v12);
      if ( v13 == v42 )
        break;
      v12 = v13;
    }
  }
  return ((g4_std::string::Destroy(&v41)), (int)0);
}


