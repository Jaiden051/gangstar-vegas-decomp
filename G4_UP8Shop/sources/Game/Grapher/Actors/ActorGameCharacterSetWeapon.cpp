#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterSetWeapon.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetWeapon::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterSetWeapon::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterSetWeapon::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterSetWeapon::ActorGameCharacterSetWeapon(v3, -1);
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
    ActorGameCharacterSetWeapon::ActorGameCharacterSetWeapon(v3, a1);
  }
  return v3;
}



// Constructor (0xc66960):
int (**ActorGameCharacterSetWeapon::ActorGameCharacterSetWeapon(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D2E8);
  return (int (**)(int))(uintptr_t)(&off_206D2E8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetWeapon::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterSetWeapon::~ActorGameCharacterSetWeapon
// ----------------------------------------------------------------------------
void ActorGameCharacterSetWeapon::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D2E8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B790  (binary VA: 0x0)
// Original: sub_C5B790
// ----------------------------------------------------------------------------
void sub_C5B790(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D2E8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C64A20  (binary VA: 0x0)
// Original: sub_C64A20
// ----------------------------------------------------------------------------
int sub_C64A20(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  void *v8;
  int v9;
  int v10;
  int v11;
  uint8_t v12[20];
  uint32_t *v13;
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
  grapher::ActorBase::SetArraySize(a1, 3, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Set Weapon", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetDisplayName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Objects", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v15);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Give", (int)(uintptr_t)(&v12[1]));
  grapher::ActorBase::AddPin(a1, 0, &v26, 1, -1);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Remove", (int)(uintptr_t)(&v12[2]));
  grapher::ActorBase::AddPin(a1, 1, &v27, 1, -1);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), "Out", (int)(uintptr_t)(&v12[3]));
  grapher::ActorBase::AddPin(a1, 2, v28, 0, -1);
  g4_std::string::Destroy(v28);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v18),
    "The character who will receive the weapon. / The vehicle which will equip the weapon (available weapons are specifie"
    "d in the vehicle's primitive).",
    (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Target", (int)(uintptr_t)(&v9) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v12[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v16, 9, &v12[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Target", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v17), v5, 1, 1, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  if ( *(uint32_t *)&v12[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v12[4] + 44))(*(uint32_t *)&v12[4]);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Which weapon to equip from stock_items.xml.", (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Weapon Type", (int)(uintptr_t)(&v10) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), (char *)&unk_1B15112, (int)(uintptr_t)(&v10) + 2);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &v19);
  v13 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v20, 11, &v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Weapon Oid", (int)(uintptr_t)(&v11));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v21), v7, 1, 1, (int)(uintptr_t)(&v22), 3);
  g4_std::string::Destroy(&v21);
  if ( v13 != nullptr )
    G4_VCALL<void>(v13, 44);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "How much clips to give, -1 for unlimited/all.", (int)(uintptr_t)(v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Clips", (int)(uintptr_t)(&v11) + 2);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v23, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Clips", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v24), v8, 1, 1, (int)(uintptr_t)(&v25), 3);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v23);
  return ((g4_std::string::Destroy(&v25)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C68B80  (binary VA: 0x0)
// Original: sub_C68B80
// ----------------------------------------------------------------------------
int sub_C68B80(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int *v4;
  uint32_t *v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v7;
  int v8;
  uint32_t *v9;
  grapher::ActorVariable::Self *v10;
  grapher::ActorContext::Self *v11;
  unsigned int v12;
  int v13;
  int v14;
  int v16;
  int v17;
  int v18;
  int *v19;
  int *v20;
  int *v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  uint32_t *v28;
  grapher::ActorVariable::Self *v29;
  grapher::ActorContext::Self *v30;
  int v31;
  grapher::ActorVariable::Self *v32;
  uint32_t *v33;
  char *v34;
  g4_cxa_guard_t *v35;
  int v36;
  int v37;
  int v38;
  uint32_t v39[4];
  uint32_t v40[7];

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  if ( v3 == 0 || (v28 = (uint32_t *)v3, (v4 = (int *)G4_VCALL<int>(v3, 16)) == nullptr) )
  {
LABEL_7:
    v5 = nullptr;
    goto LABEL_8;
  }
  while ( v4 != (int *)(&dword_20DE814) )
  {
    v4 = (int *)v4[1];
    if ( v4 == nullptr )
      goto LABEL_7;
  }
  v20 = (int *)G4_VCALL<int>(v28, 16);
  if ( v20 == nullptr )
  {
LABEL_44:
    v5 = nullptr;
    goto LABEL_45;
  }
  v5 = v28;
  if ( v20 != (int *)(&dword_20D75F0) )
  {
    while ( 1 )
    {
      v20 = (int *)v20[1];
      if ( v20 == nullptr )
        goto LABEL_44;
      if ( v20 == (int *)(&dword_20D75F0) )
      {
        v5 = v28;
        break;
      }
    }
  }
LABEL_45:
  v21 = (int *)G4_VCALL<int>(v28, 16);
  if ( v21 != nullptr )
  {
    v36 = (int)(uintptr_t)(v28);
    if ( v21 == (int *)(&dword_20D68D0) )
      goto LABEL_9;
    while ( 1 )
    {
      v21 = (int *)v21[1];
      if ( v21 == nullptr )
        break;
      if ( v21 == (int *)(&dword_20D68D0) )
      {
        v36 = (int)(uintptr_t)(v28);
        goto LABEL_9;
      }
    }
  }
LABEL_8:
  v36 = 0;
LABEL_9:
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  v7 = a3;
  if ( a3 == nullptr )
  {
    v7 = (grapher::ActorContext::Self *)&unk_20D6720;
    if ( byte_20D6700 == 0 )
    {
      v32 = Variable;
      v33 = (uint32_t *)(&unk_20D6720);
      v34 = (char *)(&byte_20D6700);
      v23 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700);
      Variable = v32;
      v7 = (grapher::ActorContext::Self *)&unk_20D6720;
      if ( v23 != 0 )
      {
        grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
        __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
        v7 = (grapher::ActorContext::Self *)&unk_20D6720;
        Variable = v32;
      }
    }
  }
  v29 = Variable;
  grapher::ActorContext::LoadAVar(v7, Variable);
  if ( *((uint32_t *)v29 + 2) == 12 )
  {
    v35 = (g4_cxa_guard_t *)sub_C5BBB0((int)(uintptr_t)(v29), v24, v25, v26, v27, (int)(uintptr_t)(v29), (int)(uintptr_t)(v33), (int)(uintptr_t)(v34), v36, v39[0]);
    if ( v5 != nullptr )
    {
LABEL_16:
      if ( a2 != 0 )
      {
        if ( sub_97FD50((int)(uintptr_t)(v5)) )
        {
          sub_907060(v5, (int)(uintptr_t)(v35));
          if ( G4_VCALL<int>(v5, 428) == 0 )
          {
            sub_8ED2D0(v5[283]);
            sub_9EE090((int)(uintptr_t)(v5), 0);
            v18 = G4_VCALL<int>(v5, 428);
            if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
            {
              sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
              __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
            }
            v19 = nullptr;
            if ( byte_20D49A8 == 0 )
              v19 = (int *)(&dword_20D49A0);
            sub_82ADA0((int)(uintptr_t)(v19), v18, 1, 0);
          }
        }
        else
        {
          G4_VCALL<void>(v5, 592, 1);
        }
      }
      else
      {
        G4_VCALL<void>(v5, 424, v35);
        v37 = G4_VCALL<int>(v5, 428);
        if ( v37 != 0 )
        {
          v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
          v11 = sub_837200(
                  (int)(uintptr_t)(a1),
                  v10,
                  nullptr,
                  v27,
                  (int)(uintptr_t)(v29),
                  (int)(uintptr_t)(v33),
                  (int)(uintptr_t)(v35),
                  v37,
                  v39[0],
                  v39[1],
                  v39[2],
                  (grapher::ActorContext::Self *)v39[3]);
          if ( v11 == (grapher::ActorContext::Self *)-1 )
          {
            v22 = sub_5B18B0(v38);
            sub_9803D0((int)(uintptr_t)(v5), v22, 1);
          }
          else
          {
            v30 = v11;
            v12 = sub_5B18B0(v38);
            sub_9803D0((int)(uintptr_t)(v5), v12, 0);
            v13 = sub_5B2340(v38);
            sub_8ED510(v5[283], v38, (uint32_t)(uintptr_t)(v30) * v13);
            v31 = sub_5B2340(v38);
            v14 = G4_VCALL<int>(v5, 428);
            sub_5B1960(v14, v31);
          }
        }
      }
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
    }
  }
  else
  {
    if ( (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v25) != 0
      || *((uint32_t *)v29 + 2) != 11 )
    {
      v8 = *((uint32_t *)v29 + 1);
      if ( v8 != 0 && (v9 = (uint32_t *)G4_VCALL<int>(v8, 48)) != nullptr )
      {
        v33 = v9;
        G4_VCALL<void>(v9, 0, v39);
        v35 = (g4_cxa_guard_t *)v39[0];
        G4_VCALL<void>(v33, 44);
      }
      else
      {
        v35 = (g4_cxa_guard_t *)v39[0];
      }
    }
    else
    {
      v16 = *((uint32_t *)v29 + 1);
      v17 = 0;
      if ( v16 != 0 )
        v17 = G4_VCALL<int>(v16, 48);
      v40[0] = (uint32_t)(uintptr_t)(&dword_213B814);
      if ( v17 != 0 )
      {
        v29 = (grapher::ActorVariable::Self *)v17;
        G4_VCALL<void>(v17, 32, v40);
        G4_VCALL<void>(v29, 44);
      }
      v33 = v40;
      v35 = sub_C5BDB0(v40);
      g4_std::string::Destroy(v40);
    }
    if ( v5 != nullptr )
      goto LABEL_16;
  }
  if ( v36 != 0
    && (uint8_t)sub_8707F0(v36) != 0
    && (uint8_t)sub_8ED1D0(*(uint32_t *)(v36 + 1048), (int)(uintptr_t)(v35)) != 0
    && a2 == 0 )
  {
    sub_870890(v36, (int)(uintptr_t)(v35));
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}


