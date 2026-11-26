#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameGangBattlesApplyProfile.h"

// ----------------------------------------------------------------------------
// Function: ActorGameGangBattlesApplyProfile::CreateInstance  (binary VA: 0x0)
// Original: ActorGameGangBattlesApplyProfile::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameGangBattlesApplyProfile::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameGangBattlesApplyProfile::ActorGameGangBattlesApplyProfile(v3, -1);
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
    ActorGameGangBattlesApplyProfile::ActorGameGangBattlesApplyProfile(v3, a1);
  }
  return v3;
}



// Constructor (0xc4f610):
int (**ActorGameGangBattlesApplyProfile::ActorGameGangBattlesApplyProfile(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C768);
  return (int (**)(int))(uintptr_t)(&off_206C768);
}
// ----------------------------------------------------------------------------
// Function: ActorGameGangBattlesApplyProfile::Destroy  (binary VA: 0x0)
// Original: ActorGameGangBattlesApplyProfile::~ActorGameGangBattlesApplyProfile
// ----------------------------------------------------------------------------
void ActorGameGangBattlesApplyProfile::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C768);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C3FFD0  (binary VA: 0x0)
// Original: sub_C3FFD0
// ----------------------------------------------------------------------------
void sub_C3FFD0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C768);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C46510  (binary VA: 0x0)
// Original: sub_C46510
// ----------------------------------------------------------------------------
int sub_C46510(grapher::ActorBase::Self *a1)
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
  uint32_t *v12;
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
  int v28[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "ApplyProfileToCharacter", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "GangBattles", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "In", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v27, 1, -1);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), "Out", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddPin(a1, 1, v28, 0, -1);
  g4_std::string::Destroy(v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Character", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Character", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v15, 9, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Character", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v7, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Profile ID", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Profile ID", (int)(uintptr_t)(&v9) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v18, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Profile ID", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v3, 1, 1, (int)(uintptr_t)(&v20), 1);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Whether the weapon should be applied", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Use weapon", (int)(uintptr_t)(&v10));
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v21, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Use weapon", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v22), v4, 1, 0, (int)(uintptr_t)(&v23), 1);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Whether or not fists should be replaced", (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Replace fists", (int)(uintptr_t)(&v10) + 3);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v24, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Replace fists", (int)(uintptr_t)(&v11));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v25), v5, 1, 0, (int)(uintptr_t)(&v26), 1);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  { g4_std::string::Destroy(&v26); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C53A80  (binary VA: 0x0)
// Original: sub_C53A80
// ----------------------------------------------------------------------------
int sub_C53A80(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  int *v6;
  grapher::ActorVariable::Self *Variable;
  int result;
  grapher::ActorVariable::Self *v9;
  unsigned int v10;
  size_t v11;
  int v12;
  char v13;
  int v14;
  int *v15;
  int v16;
  int v17;
  int *v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  int v23;
  const char *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int *v31;
  int v32;
  char *v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  char *v40;
  int v41;
  int v42;
  grapher::ActorContext::Self *v43;
  int v44;
  int v45;
  const char *v46;

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( byte_20D3C30 == 0 )
  {
    v27 = v3;
    v14 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30);
    v4 = v27;
    if ( v14 != 0 )
    {
      v31 = (int *)(&dword_20D3C40);
      sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
      __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
      v4 = v27;
    }
  }
  v5 = nullptr;
  if ( byte_20D3C44 == 0 )
    v5 = (int *)(&dword_20D3C40);
  v6 = nullptr;
  v36 = v5[123];
  if ( v4 != 0 && *(uint32_t *)(*(uint32_t *)(v4 + 408) - 12) != 0 )
  {
    v12 = *(uint32_t *)(v4 + 404);
    if ( v12 == 0 || (v27 = v4, v13 = G4_VCALL<int>(v12, 32), v4 = v27, (v13 & 2) == 0) )
    {
      v6 = nullptr;
      if ( v36 != 0 )
        goto LABEL_7;
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
    }
    sub_AB7AC0((int)(uintptr_t)(&v45), (glf::Self *)"Player");
    v31 = (int *)glf::Stricmp(*(glf::Self **)(v27 + 408), v46, v24);
    g4_std::string::Destroy(&v46);
    v4 = v27;
    if ( v31 != nullptr )
      v6 = (int *)v27;
  }
  if ( v36 == 0 )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
LABEL_7:
  if ( v4 == 0 )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
  if ( v6 == nullptr )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  if ( sub_837200((int)(uintptr_t)(a1), Variable, a3, v25, v27, (int)(uintptr_t)(v31), v34, v36, (int)(uintptr_t)(v40), v41, v42, v43) == (grapher::ActorContext::Self *)-1 )
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
  result = sub_8EA4A0(v37);
  v38 = result;
  if ( result != 0 )
  {
    sub_C4F650((int)(uintptr_t)(a1), (const void **)(result + 40), (int)(uintptr_t)(v6));
    sub_C4F650((int)(uintptr_t)(a1), (const void **)(v38 + 44), (int)(uintptr_t)(v6));
    sub_C4F650((int)(uintptr_t)(a1), (const void **)(v38 + 48), (int)(uintptr_t)(v6));
    v9 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
    if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), v9, a3, v26, v28, v32, v35, v38, (int)(uintptr_t)(v40), v41) != 0 )
    {
      if ( byte_20D34B0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D34B0) != 0 )
      {
        sub_5B54D0((int)(uintptr_t)(&dword_20D34C0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D34B0);
        __cxa_atexit((void (*)(void *))sub_5D43D0, &dword_20D34C0, &unk_20D1280);
      }
      v15 = nullptr;
      if ( byte_20D34C4 == 0 )
        v15 = (int *)(&dword_20D34C0);
      v16 = sub_5B8B10((int)(uintptr_t)(v15), (const void **)(v39 + 28));
      v17 = v16;
      if ( byte_20D3C30 == 0 )
      {
        v30 = v16;
        v23 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3C30);
        v17 = v30;
        if ( v23 != 0 )
        {
          sub_630BF0((int)(uintptr_t)(&dword_20D3C40));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3C30);
          __cxa_atexit((void (*)(void *))sub_6467F0, &dword_20D3C40, &unk_20D1280);
          v17 = v30;
        }
      }
      v18 = nullptr;
      if ( byte_20D3C44 == 0 )
        v18 = (int *)(&dword_20D3C40);
      v19 = v18[13];
      if ( v19 != 0 && *(uint32_t *)(dword_20D9970 + 164 * *(uint32_t *)(v19 + 36) + 8) == 16 )
      {
        v17 = 140;
      }
      else if ( v17 == -1 )
      {
        v17 = 140;
      }
      v29 = v17;
      sub_8ED2D0(v6[283]);
      v20 = *v6;
      v6[627] = v29;
      (*(void (**)(int *, int))(v20 + 424))(v6, v29);
      v21 = G4_VCALL<int>(v6, 428);
      if ( v21 != 0 )
      {
        v22 = sub_5B18B0(v21);
        sub_9803D0((int)(uintptr_t)(v6), v22, 1);
      }
    }
    v40 = (char *)&dword_213B814;
    glwebtools::Codec::DecodeUrl(v39, &v40);
    v10 = sub_AB6410(*(uint32_t *)(dword_20DDDC0 + 864), v40, 46);
    v44 = (int)(uintptr_t)(&dword_213B814);
    if ( v10 == 40970 )
    {
      g4_std::string::assign_str(&v44, &v40);
    }
    else
    {
      v33 = (char *)sub_AC5E50(*(uint32_t **)(dword_20DDDC0 + 864), v10);
      v11 = strlen(v33);
      g4_std_compat::string_assign((int)(uintptr_t)(&v44), v33, v11);
    }
    g4_std::string::assign_str(v6 + 719, &v44);
    G4_VCALL<void>(v6, 288, 2, 1, 1);
    grapher::ActorBase::FireEvent(a1, 1, a3);
    g4_std::string::Destroy(&v44);
    return ((g4_std::string::Destroy(&v40)), (int)0);
  }
  return result;
}


