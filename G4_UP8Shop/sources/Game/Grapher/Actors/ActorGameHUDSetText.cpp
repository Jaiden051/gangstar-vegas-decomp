#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameHUDSetText.h"

// ----------------------------------------------------------------------------
// Function: ActorGameHUDSetText::CreateInstance  (binary VA: 0x0)
// Original: ActorGameHUDSetText::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameHUDSetText::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameHUDSetText::ActorGameHUDSetText(v3, -1);
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
    ActorGameHUDSetText::ActorGameHUDSetText(v3, a1);
  }
  return v3;
}



// Constructor (0xc4fb00):
int (**ActorGameHUDSetText::ActorGameHUDSetText(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CA08);
  return (int (**)(int))(uintptr_t)(&off_206CA08);
}
// ----------------------------------------------------------------------------
// Function: ActorGameHUDSetText::Destroy  (binary VA: 0x0)
// Original: ActorGameHUDSetText::~ActorGameHUDSetText
// ----------------------------------------------------------------------------
void ActorGameHUDSetText::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CA08);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FCD0  (binary VA: 0x0)
// Original: sub_C3FCD0
// ----------------------------------------------------------------------------
void sub_C3FCD0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CA08);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C49BD0  (binary VA: 0x0)
// Original: sub_C49BD0
// ----------------------------------------------------------------------------
int sub_C49BD0(grapher::ActorBase::Self *a1)
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
  int v21;
  int v22[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Set HUD Text", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "HUD", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "In", (int)(uintptr_t)(&v10[2]));
  grapher::ActorBase::AddPin(a1, 0, &v21, 1, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "Out", (int)(uintptr_t)(&v10[3]));
  grapher::ActorBase::AddPin(a1, 1, v22, 0, -1);
  g4_std::string::Destroy(v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "The text label specified as PACK_ID.TEXT_ID", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Text", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "StrID", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &v14);
  *(uint32_t *)&v10[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 11, &v10[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Text", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v5, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( *(uint32_t *)&v10[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v10[4] + 44))(*(uint32_t *)&v10[4]);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), (char *)&unk_1B15112, (int)(uintptr_t)(&v10[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Text", (int)(uintptr_t)(&v9) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v11 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v18, 4, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Type", (int)(uintptr_t)(v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v7, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v18);
  { g4_std::string::Destroy(&v20); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C57E40  (binary VA: 0x0)
// Original: sub_C57E40
// ----------------------------------------------------------------------------
int sub_C57E40(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  grapher::ActorContext::Self *v4;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v6;
  grapher::ActorVariable::Self *v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  grapher::ActorVariable::Self *v14;
  char *v15;
  int *v16;
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
  gameswf::ASValue::Self *v29;
  gameswf::ASValue::Self *v30;
  gameswf::ASValue::Self *v31;
  gameswf::ASValue::Self *v32;
  gameswf::ASValue::Self *v33;
  void *obj;
  void *obja;
  g4_cxa_guard_t *v36;
  g4_cxa_guard_t *v37;
  g4_cxa_guard_t *v38;
  g4_cxa_guard_t *v39;
  char *v40;
  g4_cxa_guard_t *v41;
  char *v42;
  char *v43;
  int v44;
  int v45;
  int v46;
  uint8_t v47[4];
  uint64_t v48;
  grapher::ActorBase::Self **v49;

  v49 = &a1;
  v3 = a1;
  v4 = a3;
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v6 = sub_837200(
         (int)(uintptr_t)(v3),
         Variable,
         v4,
         v20,
         v21,
         v23,
         v25,
         v27,
         (int)(uintptr_t)(v29),
         (int)(uintptr_t)(obj),
         (int)(uintptr_t)(v36),
         (grapher::ActorContext::Self *)v39);
  if ( (int)(uintptr_t)(v6) <= 0 )
  {
    v14 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 1);
    sub_837C70(&v43, (int)(uintptr_t)(v3), v14, v4, v22, v24, v26, v28, (int)(uintptr_t)(v30), (int)(uintptr_t)(obja), (int)(uintptr_t)(v37));
    v15 = v43;
    if ( byte_20D5D70 == 0 )
    {
      v33 = (gameswf::ASValue::Self *)v43;
      v18 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70);
      v15 = (char *)v33;
      if ( v18 != 0 )
      {
        sub_785A60((int)(uintptr_t)(&dword_20D5D78));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
        __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
        v15 = (char *)v33;
      }
    }
    v16 = nullptr;
    if ( byte_20D5D7C == 0 )
      v16 = (int *)(&dword_20D5D78);
    sub_7CCAF0((int)(uintptr_t)(v16), v15);
    g4_std::string::Destroy(&v43);
  }
  else
  {
    v48 = 0xBFF0000000000000LL;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v47[0] = 2;
    v47[1] = 0;
    v31 = (gameswf::ASValue::Self *)(v6);
    v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 1);
    sub_837C70(&v42, (int)(uintptr_t)(v3), v7, v4, v22, v24, v26, v28, (int)(uintptr_t)(v31), (int)(uintptr_t)(obja), (int)(uintptr_t)(v37));
    v40 = v42;
    v8 = (int)(uintptr_t)(v32);
    if ( byte_20D5D70 == 0 )
    {
      v17 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5D70);
      v8 = (int)(uintptr_t)(v32);
      if ( v17 != 0 )
      {
        sub_785A60((int)(uintptr_t)(&dword_20D5D78));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5D70);
        __cxa_atexit((void (*)(void *))sub_785B80, &dword_20D5D78, &unk_20D1280);
        v8 = (int)(uintptr_t)(v32);
      }
    }
    v9 = nullptr;
    if ( byte_20D5D7C == 0 )
      v9 = (int *)(&dword_20D5D78);
    sub_7E2EE0(v9, v40, v8, -1, -1, 0, (gameswf::ASValue::Self *)v47);
    g4_std::string::Destroy(&v42);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v47);
    v10 = v44;
    if ( v45 != v44 )
    {
      v41 = (g4_cxa_guard_t *)v3;
      v38 = (g4_cxa_guard_t *)v4;
      v11 = v44;
      v12 = v45;
      do
      {
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v11 + 4));
        v19 = v11;
        v11 += 16;
        g4_std::string::Destroy(v19);
      }
      while ( v12 != v11 );
      v3 = (grapher::ActorBase::Self *)v41;
      v4 = (grapher::ActorContext::Self *)v38;
      v10 = v44;
    }
    if ( v10 != 0 )
      sub_4EB870(v10);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v4));
}


