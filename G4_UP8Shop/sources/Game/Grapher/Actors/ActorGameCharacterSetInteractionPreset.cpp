#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterSetInteractionPreset.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetInteractionPreset::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterSetInteractionPreset::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterSetInteractionPreset::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterSetInteractionPreset::ActorGameCharacterSetInteractionPreset(v3, -1);
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
    ActorGameCharacterSetInteractionPreset::ActorGameCharacterSetInteractionPreset(v3, a1);
  }
  return v3;
}



// Constructor (0xc667a0):
int (**ActorGameCharacterSetInteractionPreset::ActorGameCharacterSetInteractionPreset(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D0E8);
  return (int (**)(int))(uintptr_t)(&off_206D0E8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetInteractionPreset::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterSetInteractionPreset::~ActorGameCharacterSetInteractionPreset
// ----------------------------------------------------------------------------
void ActorGameCharacterSetInteractionPreset::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D0E8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B5D0  (binary VA: 0x0)
// Original: sub_C5B5D0
// ----------------------------------------------------------------------------
void sub_C5B5D0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D0E8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C61D00  (binary VA: 0x0)
// Original: sub_C61D00
// ----------------------------------------------------------------------------
int sub_C61D00(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Set Interaction Preset", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Characters", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "In", (int)(uintptr_t)(&v10[2]));
  grapher::ActorBase::AddPin(a1, 0, &v21, 1, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "Out", (int)(uintptr_t)(&v10[3]));
  grapher::ActorBase::AddPin(a1, 1, v22, 0, -1);
  g4_std::string::Destroy(v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "List of characters to whom apply the preset.", (int)(uintptr_t)(&v9) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Target", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v10[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v14, 9, &v10[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Target", (int)(uintptr_t)(&v9));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v15), v5, 1, 1, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  if ( *(uint32_t *)&v10[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v10[4] + 44))(*(uint32_t *)&v10[4]);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "The name of the preset from GIV_interaction_properties.xml.", (int)(uintptr_t)(&v10[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Preset", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "InteractionPropertiesPresets", (int)(uintptr_t)(&v9) + 2);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &v17);
  v11 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v18, 11, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Preset", (int)(uintptr_t)(v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v7, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v18);
  { g4_std::string::Destroy(&v20); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C65C50  (binary VA: 0x0)
// Original: sub_C65C50
// ----------------------------------------------------------------------------
void sub_C65C50(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  grapher::ActorContext::Self *v6;
  grapher::ActorVariable::Self *Variable;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  grapher::HolderT<int> *v14;
  g4_cxa_guard_t *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int *v20;
  int v21;
  int v22;
  int *v23;
  int v24;
  uint32_t *v25;
  uint32_t *v26;
  int v27;
  void (***v28)(uint32_t, uint32_t *);
  void (***v29)(uint32_t, uint32_t *);
  grapher::HolderT<int> *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int *v36;
  int *v37;
  uint32_t *i;
  int v39;
  int v40;
  int v41;
  int v42[3];
  const char *v43;
  const char *v44[4];
  uint32_t v45[4];
  int v46;
  int v47;
  uint32_t v48[5];

  v48[0] = (uint32_t)(uintptr_t)(v48);
  v48[1] = (uint32_t)(uintptr_t)(v48);
  sub_8560A0(a1, 0, (int)(uintptr_t)(v48), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  v3 = (uint32_t *)v48[0];
  for ( i = (uint32_t *)v48[0]; i != v48; i = (uint32_t *)*i )
  {
    v4 = v3[2];
    if ( v4 != 0 && *(uint32_t *)(*(uint32_t *)(v4 + 408) - 12) != 0 )
    {
      v5 = *(uint32_t *)(v4 + 404);
      if ( v5 != 0 && (G4_VCALL<int>(v5, 32) & 2) != 0 )
      {
        v39 = v3[2];
        if ( v39 != 0 )
        {
          v6 = a3;
          Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
          if ( a3 == nullptr )
          {
            v6 = (grapher::ActorContext::Self *)&unk_20D6720;
            if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
            {
              grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
              __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
            }
          }
          grapher::ActorContext::LoadAVar(v6, Variable);
          if ( *((uint32_t *)Variable + 2) == 12 )
          {
            v42[0] = (int)(uintptr_t)(&dword_213B814);
            v8 = *((uint32_t *)Variable + 1);
            if ( v8 != 0 )
              (*(void (**)(uint32_t, int *))(*(uint32_t *)v8 + 32))(*((uint32_t *)Variable + 1), v42);
            v9 = sub_1938090((int)(uintptr_t)(v42), "..", 0, 2u);
            v10 = v9;
            if ( v9 == -1 )
            {
              v47 = 0;
              v30 = (grapher::HolderT<int> *)gll_operator_new(
                                               8u,
                                               (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"),
                                               102);
              *(uint32_t *)v30 = (uint32_t)(uintptr_t)(&off_205C508);
              grapher::HolderT_int_id_fe4c74::From(v30, &v47);
              (**(void (***)(grapher::HolderT<int> *, uint32_t *))v30)(v30, v45);
              v15 = (g4_cxa_guard_t *)v45[0];
              G4_VCALL<void>(v30, 44);
            }
            else
            {
              sub_193A6F0(&v43, v42, 0, v9);
              if ( (unsigned int)(v10 + 2) > *(uint32_t *)(v42[0] - 12) )
                sub_1900210("basic_string::substr");
              sub_193A6F0(v44, v42, v10 + 2, -1);
              v11 = atoi(v43);
              v12 = atoi(v44[0]);
              v13 = v12;
              if ( v11 > v12 )
              {
                v13 = v11;
                v11 = v12;
              }
              v46 = v11 + lrand48() % (v13 - v11 + 1);
              v14 = (grapher::HolderT<int> *)gll_operator_new(
                                               8u,
                                               (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"),
                                               102);
              *(uint32_t *)v14 = (uint32_t)(uintptr_t)(&off_205C508);
              grapher::HolderT_int_id_fe4c74::From(v14, &v46);
              (**(void (***)(grapher::HolderT<int> *, uint32_t *))v14)(v14, v45);
              v15 = (g4_cxa_guard_t *)v45[0];
              G4_VCALL<void>(v14, 44);
              g4_std::string::Destroy(v44);
              g4_std::string::Destroy(&v43);
            }
            g4_std::string::Destroy(v42);
          }
          else if ( (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v33) == 0
                 && *((uint32_t *)Variable + 2) == 11 )
          {
            v31 = *((uint32_t *)Variable + 1);
            v32 = 0;
            if ( v31 != 0 )
              v32 = G4_VCALL<int>(v31, 48);
            v44[0] = (const char *)&dword_213B814;
            if ( v32 != 0 )
            {
              G4_VCALL<void>(v32, 32, v44);
              G4_VCALL<void>(v32, 44);
            }
            v15 = sub_C5BDB0(v44);
            g4_std::string::Destroy(v44);
          }
          else
          {
            v27 = *((uint32_t *)Variable + 1);
            if ( v27 != 0
              && (v28 = (void (***)(uint32_t, uint32_t *))(*(int (**)(uint32_t))(*(uint32_t *)v27 + 48))(*((uint32_t *)Variable + 1)),
                  v29 = v28,
                  v28 != nullptr) )
            {
              (**v28)((uint32_t)(uintptr_t)(v28), v45);
              v15 = (g4_cxa_guard_t *)v45[0];
              ((void (*)(void (***)(uint32_t, uint32_t *)))(*v29)[11])(v29);
            }
            else
            {
              v15 = (g4_cxa_guard_t *)v45[0];
            }
          }
          if ( (int)(uintptr_t)(v15) >= 0 )
          {
            v16 = 24 * (uint32_t)(uintptr_t)(v15);
            v17 = dword_20D9E30;
            v18 = dword_20D9E30 + 24 * (uint32_t)(uintptr_t)(v15);
            v40 = *(uint32_t *)(v18 + 12);
            if ( v40 > 0 )
            {
              v19 = 0;
              v20 = (int *)(&dword_20D7600);
              v34 = v16;
              while ( 1 )
              {
                v21 = *(uint32_t *)(*(uint32_t *)(v17 + v16 + 8) + 4 * v19++);
                v36 = v20;
                (*(void (**)(uint32_t, int, uint32_t))(**(uint32_t **)(*v20 + 4 * v21) + 8))(
                  *(uint32_t *)(*v20 + 4 * v21),
                  v39,
                  0);
                v20 = v36;
                if ( v40 == v19 )
                  break;
                v16 = v34;
                v17 = dword_20D9E30;
              }
              v16 = v34;
              v17 = dword_20D9E30;
              v18 = dword_20D9E30 + v34;
            }
            v41 = *(uint32_t *)(v18 + 20);
            if ( v41 > 0 )
            {
              v22 = 0;
              v23 = (int *)(&dword_20D7600);
              v35 = v16;
              while ( 1 )
              {
                v24 = *(uint32_t *)(*(uint32_t *)(v17 + v16 + 16) + 4 * v22++);
                v37 = v23;
                (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*v23 + 4 * v24) + 8))(
                  *(uint32_t *)(*v23 + 4 * v24),
                  v39,
                  1);
                v23 = v37;
                if ( v41 == v22 )
                  break;
                v16 = v35;
                v17 = dword_20D9E30;
              }
            }
          }
        }
      }
    }
    v3 = (uint32_t *)*i;
  }
  grapher::ActorBase::FireEvent(a1, 1, a3);
  v25 = (uint32_t *)v48[0];
  if ( (uint32_t *)v48[0] != v48 )
  {
    while ( 1 )
    {
      v26 = (uint32_t *)*v25;
      opDelete(v25);
      if ( v26 == v48 )
        break;
      v25 = v26;
    }
  }
}


