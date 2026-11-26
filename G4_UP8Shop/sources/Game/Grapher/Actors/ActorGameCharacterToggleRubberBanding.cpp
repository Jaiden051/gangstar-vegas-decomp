#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterToggleRubberBanding.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterToggleRubberBanding::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterToggleRubberBanding::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterToggleRubberBanding::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterToggleRubberBanding::ActorGameCharacterToggleRubberBanding(v3, -1);
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
    ActorGameCharacterToggleRubberBanding::ActorGameCharacterToggleRubberBanding(v3, a1);
  }
  return v3;
}



// Constructor (0x845240):
int (**ActorGameCharacterToggleRubberBanding::ActorGameCharacterToggleRubberBanding(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C888);
  return (int (**)(int))(uintptr_t)(&off_205C888);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterToggleRubberBanding::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterToggleRubberBanding::~ActorGameCharacterToggleRubberBanding
// ----------------------------------------------------------------------------
int ActorGameCharacterToggleRubberBanding::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C888);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_839730  (binary VA: 0x0)
// Original: sub_839730
// ----------------------------------------------------------------------------
void sub_839730(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C888);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_83E4C0  (binary VA: 0x0)
// Original: sub_83E4C0
// ----------------------------------------------------------------------------
int sub_83E4C0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v4;
  void *v5;
  uint32_t *v6;
  void *v7;
  void *v8;
  void *v9;
  void *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
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
  int v35;
  int v36;
  int v37[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Toggle Ruberbanding", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetDisplayName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Characters", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v19);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Enable", (int)(uintptr_t)(&v15) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v35, 1, -1);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Disable", (int)(uintptr_t)(&v15) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v36, 1, -1);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v37), "Out", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddPin(a1, 2, v37, 0, -1);
  g4_std::string::Destroy(v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "The character who will be chased.", (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Target", (int)(uintptr_t)(&v11) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v16 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v20, 9, &v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Target", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v21), v5, 1, 1, (int)(uintptr_t)(&v22), 1);
  g4_std::string::Destroy(&v21);
  if ( v16 != nullptr )
    G4_VCALL<void>(v16, 44);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "List of characters who will pursue the target.", (int)(uintptr_t)(&v12) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Pursuer", (int)(uintptr_t)(&v12) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v17 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v23, 9, &v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Pursuers", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v24), v7, 1, 1, (int)(uintptr_t)(&v25), 1);
  g4_std::string::Destroy(&v24);
  if ( v17 != nullptr )
    G4_VCALL<void>(v17, 44);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v28),
    "Distance ahead (or behind if negative) that the pursuer will consider it's ideal position, in cm.",
    (int)(uintptr_t)(&v13) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Distance", (int)(uintptr_t)(&v13));
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v10), (int)(uintptr_t)(&v26), 2, 1.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Distance", (int)(uintptr_t)(&v13) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v27), v10, 1, 1, (int)(uintptr_t)(&v28), 1);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v31),
    "Percentage of maximum increase or decrease in pursuer's speed to reach ideal position. [0 - 100]",
    (int)(uintptr_t)(&v14) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Max Speed Modifier", (int)(uintptr_t)(&v13) + 3);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v8), (int)(uintptr_t)(&v29), 2, 1.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Max speed modifier", (int)(uintptr_t)(&v14));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v30), v8, 1, 1, (int)(uintptr_t)(&v31), 1);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v34),
    "Radius around the ideal position at which the maximum modifier applies. Inside radius, the modifier applied is linea"
    "rly interpolated.",
    (int)(uintptr_t)(&v15));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Speed Update Radius", (int)(uintptr_t)(&v14) + 2);
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v9), (int)(uintptr_t)(&v32), 2, 1.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Speed update radius", (int)(uintptr_t)(&v14) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v33), v9, 1, 1, (int)(uintptr_t)(&v34), 1);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v32);
  return ((g4_std::string::Destroy(&v34)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_84A4A0  (binary VA: 0x0)
// Original: sub_84A4A0
// ----------------------------------------------------------------------------
void sub_84A4A0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint32_t *i;
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  int *v8;
  grapher::ActorContext::Self *j;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v11;
  grapher::ActorVariable::Self *v12;
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
  int v35;
  int v36;
  grapher::ActorContext::Self *v37;
  grapher::ActorContext::Self *v38;
  grapher::ActorContext::Self *v39;
  grapher::ActorContext::Self *v40;
  float v41;
  uint32_t *v42;
  float v43;
  int v44;
  uint32_t v45[7];

  v45[0] = (uint32_t)(uintptr_t)(v45);
  v45[1] = (uint32_t)(uintptr_t)(v45);
  sub_8392C0(a1, 1, (int)(uintptr_t)(v45), (int)(uintptr_t)(a3));
  if ( a2 != 0 )
  {
    for ( i = (uint32_t *)v45[0]; i != v45; i = (uint32_t *)*i )
    {
      v4 = i[2];
      if ( v4 != 0 )
      {
        v42 = i;
        sub_9A5700(v4);
        i = v42;
      }
    }
  }
  else
  {
    v7 = sub_857260(a1, 0, a3);
    v44 = v7;
    if ( v7 != 0 )
    {
      v8 = (int *)G4_VCALL<int>(v7, 16);
      if ( v8 != nullptr )
      {
        if ( v8 == (int *)(&dword_20D75F0) )
        {
LABEL_18:
          for ( j = (grapher::ActorContext::Self *)v45[0]; j != (grapher::ActorContext::Self *)v45; j = *(grapher::ActorContext::Self **)j )
          {
            if ( *((uint32_t *)j + 2) != 0 )
            {
              v37 = j;
              Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
              *(float *)&v35 = sub_838060((int)(uintptr_t)(a1), Variable, a3, v13, v16, v19, v22, v25, v28, v31, v34, v37);
              v41 = *(float *)&v35;
              v11 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 4);
              *(float *)&v36 = sub_838060((int)(uintptr_t)(a1), v11, a3, v14, v17, v20, v23, v26, v29, v32, v35, v38);
              v43 = *(float *)&v36;
              v12 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
              *(float *)&v34 = sub_838060((int)(uintptr_t)(a1), v12, a3, v15, v18, v21, v24, v27, v30, v33, v36, v39);
              sub_9A5730(*((uint32_t *)v40 + 2), v44, (int)*(float *)&v34, (int)v43, (int)v41);
              j = v40;
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v8 = (int *)v8[1];
            if ( v8 == nullptr )
              break;
            if ( v8 == (int *)(&dword_20D75F0) )
              goto LABEL_18;
          }
        }
      }
    }
  }
  grapher::ActorBase::FireEvent(a1, 2, a3);
  v5 = (uint32_t *)v45[0];
  if ( (uint32_t *)v45[0] != v45 )
  {
    while ( 1 )
    {
      v6 = (uint32_t *)*v5;
      opDelete(v5);
      if ( v6 == v45 )
        break;
      v5 = v6;
    }
  }
}


