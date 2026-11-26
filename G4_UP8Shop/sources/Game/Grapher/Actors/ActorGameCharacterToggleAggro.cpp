#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterToggleAggro.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterToggleAggro::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterToggleAggro::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterToggleAggro::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterToggleAggro::ActorGameCharacterToggleAggro(v3, -1);
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
    ActorGameCharacterToggleAggro::ActorGameCharacterToggleAggro(v3, a1);
  }
  return v3;
}



// Constructor (0x845140):
int (**ActorGameCharacterToggleAggro::ActorGameCharacterToggleAggro(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C7C8);
  return (int (**)(int))(uintptr_t)(&off_205C7C8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterToggleAggro::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterToggleAggro::~ActorGameCharacterToggleAggro
// ----------------------------------------------------------------------------
int ActorGameCharacterToggleAggro::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C7C8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_839670  (binary VA: 0x0)
// Original: sub_839670
// ----------------------------------------------------------------------------
void sub_839670(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C7C8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_83D5D0  (binary VA: 0x0)
// Original: sub_83D5D0
// ----------------------------------------------------------------------------
int sub_83D5D0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  void *v4;
  uint32_t *v5;
  void *v6;
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Toggle Aggro", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Characters", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Enable", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddPin(a1, 0, &v27, 1, -1);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Disable", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v28, 1, -1);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Toggle", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v29, 1, -1);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v30), "Out", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddPin(a1, 3, v30, 0, -1);
  g4_std::string::Destroy(v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "The character wich wil have his aggro toggled", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Target", (int)(uintptr_t)(&v9));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v12) = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v15, 9, (char *)&v12 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Target", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v6, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( DWORD1(v12) != 0 )
    G4_VCALL<void>(DWORD1(v12), 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "The range of the target awarness", (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Range", (int)(uintptr_t)(&v9) + 3);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v3), (int)(uintptr_t)(&v18), 2, 0.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Range", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v3, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "The angle of wich the character will be aware (in degree)", (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Angle", (int)(uintptr_t)(&v10) + 2);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v4), (int)(uintptr_t)(&v21), 2, -1.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Angle", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v22), v4, 0, 1, (int)(uintptr_t)(&v23), 3);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Is the character will go back in his position after losing his target", (int)(uintptr_t)(&v11) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "StayWithin", (int)(uintptr_t)(&v11) + 1);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v24, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Stay Within", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v25), v7, 1, 0, (int)(uintptr_t)(&v26), 3);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  return ((g4_std::string::Destroy(&v26)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_84ABD0  (binary VA: 0x0)
// Original: sub_84ABD0
// ----------------------------------------------------------------------------
void sub_84ABD0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v5;
  grapher::ActorVariable::Self *v6;
  grapher::ActorVariable::Self *v7;
  long double v8; // fst7
  float *v9;
  void ***v10;
  void **v11;
  float v12;
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
  void *v36;
  void **v37;

  v36 = &v36;
  v37 = &v36;
  sub_8392C0(a1, 0, (int)(uintptr_t)(&v36), (int)(uintptr_t)(a3));
  v3 = (void **)v36;
  if ( v36 != &v36 )
  {
    do
    {
      while ( 1 )
      {
        v9 = (float *)v3[2];
        if ( a2 != 1 )
          break;
        sub_983620(v9, 0, 0);
        v3 = (void **)*v3;
        if ( v3 == &v36 )
          goto LABEL_10;
      }
      if ( a2 == 2 )
      {
        if ( v9[1210] <= 0.0 )
        {
LABEL_5:
          v22 = (int)(uintptr_t)(v3[2]);
          Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
          HIBYTE(v28) = sub_837730((int)(uintptr_t)(a1), Variable, nullptr, v13, v16, v19, v22, v27, v30, v33);
          v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
          v12 = sub_838060(
                  (int)(uintptr_t)(a1),
                  v5,
                  nullptr,
                  v14,
                  v17,
                  v20,
                  v23,
                  v28,
                  v31,
                  v34,
                  (int)(uintptr_t)(v36),
                  (grapher::ActorContext::Self *)v37);
          sub_983620(v24, LODWORD(v12), SHIBYTE(v29));
          v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
          *(float *)&v19 = sub_838060(
                             (int)(uintptr_t)(a1),
                             v6,
                             nullptr,
                             v15,
                             v18,
                             v21,
                             v24,
                             v29,
                             v32,
                             v35,
                             (int)(uintptr_t)(v36),
                             (grapher::ActorContext::Self *)v37);
          if ( *(float *)&v19 != -1.0 )
          {
            v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
            v8 = sub_838060(
                   (int)(uintptr_t)(a1),
                   v7,
                   nullptr,
                   v13,
                   v16,
                   v19,
                   v25,
                   v27,
                   v30,
                   v33,
                   (int)(uintptr_t)(v36),
                   (grapher::ActorContext::Self *)v37);
            *(float *)(v26 + 4852) = v8;
          }
          goto LABEL_7;
        }
        sub_983620(v9, 0, 0);
      }
      else if ( a2 == 0 )
      {
        goto LABEL_5;
      }
LABEL_7:
      v3 = (void **)*v3;
    }
    while ( v3 != &v36 );
  }
LABEL_10:
  grapher::ActorBase::FireEvent(a1, 3, a3);
  v10 = (void ***)v36;
  if ( v36 != &v36 )
  {
    while ( 1 )
    {
      v11 = *v10;
      opDelete(v10);
      if ( v11 == &v36 )
        break;
      v10 = (void ***)v11;
    }
  }
}


