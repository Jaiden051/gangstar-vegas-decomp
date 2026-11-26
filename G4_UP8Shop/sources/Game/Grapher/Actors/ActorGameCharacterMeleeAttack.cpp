#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterMeleeAttack.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterMeleeAttack::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterMeleeAttack::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterMeleeAttack::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterMeleeAttack::ActorGameCharacterMeleeAttack(v3, -1);
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
    ActorGameCharacterMeleeAttack::ActorGameCharacterMeleeAttack(v3, a1);
  }
  return v3;
}



// Constructor (0xc66560):
int (**ActorGameCharacterMeleeAttack::ActorGameCharacterMeleeAttack(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CEA8);
  return (int (**)(int))(uintptr_t)(&off_206CEA8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterMeleeAttack::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterMeleeAttack::~ActorGameCharacterMeleeAttack
// ----------------------------------------------------------------------------
void ActorGameCharacterMeleeAttack::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CEA8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B390  (binary VA: 0x0)
// Original: sub_C5B390
// ----------------------------------------------------------------------------
void sub_C5B390(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206CEA8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5C120  (binary VA: 0x0)
// Original: sub_C5C120
// ----------------------------------------------------------------------------
int sub_C5C120(grapher::ActorBase::Self *a1)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  int v7;
  int v8;
  int v9;
  int v10;
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
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30[8];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Melee Attack", (int)(uintptr_t)(&v7));
  grapher::ActorBase::SetDisplayName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "AI", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "In", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v29, 1, -1);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v30), "Out", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddPin(a1, 1, v30, 0, -1);
  g4_std::string::Destroy(v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Fierce or quick attack", (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Fierce", (int)(uintptr_t)(&v7) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v14, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Fierce", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v15), v2, 1, 1, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Ground or normal attack", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Ground", (int)(uintptr_t)(&v8) + 2);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v17, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Ground", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v18), v3, 1, 1, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Left or right attack", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Left", (int)(uintptr_t)(&v9) + 1);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v20, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Left", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v21), v4, 1, 1, (int)(uintptr_t)(&v22), 3);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Combo attack", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Combo", (int)(uintptr_t)(&v10));
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v23, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Combo", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v24), v5, 1, 1, (int)(uintptr_t)(&v25), 3);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Attack return", (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Return", (int)(uintptr_t)(&v10) + 3);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v26, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Return", (int)(uintptr_t)(&v11));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v27), v6, 1, 1, (int)(uintptr_t)(&v28), 3);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v26);
  { g4_std::string::Destroy(&v28); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C6BAA0  (binary VA: 0x0)
// Original: sub_C6BAA0
// ----------------------------------------------------------------------------
int sub_C6BAA0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  int *v4;
  grapher::ActorVariable::Self *v5;
  grapher::ActorVariable::Self *v6;
  int v7;
  int v8;
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  grapher::ActorVariable::Self *Variable;
  int v16;
  grapher::ActorVariable::Self *v17;
  grapher::ActorVariable::Self *v18;
  grapher::ActorVariable::Self *v19;
  int v20;
  grapher::ActorVariable::Self *v21;
  grapher::ActorVariable::Self *v22;
  grapher::ActorVariable::Self *v23;
  float v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  int v31;
  char *s;
  float v33[4];
  float v34[12];

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31) + 1, "Subject", (int)(uintptr_t)(&v31));
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0(&dword_20D4A60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D4A64 == 0 )
    v3 = (int *)(&dword_20D4A60);
  v4 = (int *)sub_5B44E0(v3, (char *)&v31 + 1, a3);
  g4_std::string::Destroy((char *)&v31 + 1);
  if ( v4 != nullptr )
  {
    g4_std::string::construct_copy(&s, v4 + 626);
    if ( (uint8_t)sub_8ED2E0(v4[283]) == 0 )
    {
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
      if ( (uint8_t)sub_837730(a1, Variable, a3) == 0 )
      {
        v19 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
        if ( (uint8_t)sub_837730(a1, v19, a3) == 0 )
        {
          v22 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
          if ( (uint8_t)sub_837730(a1, v22, a3) == 0 )
          {
            v23 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 4);
            if ( (uint8_t)sub_837730(a1, v23, a3) != 0 )
              goto LABEL_26;
          }
        }
      }
      sub_5A5890(s, -1757258454);
      v16 = sub_C6A190();
LABEL_15:
      if ( v16 == -1 )
        goto LABEL_16;
LABEL_26:
      v20 = G4_VCALL<int>(v4, 56);
      sub_9D9CA0(v4, v20, 0, 0, 0);
      sub_9FFF40(v4);
      sub_97E8D0(v4, 4, 0);
      *((uint8_t *)v4 + 3404) = 1;
      sub_987840(v4, 0);
      sub_9879B0(v4, 0);
      v4[721] = -1;
      goto LABEL_16;
    }
    v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
    if ( (uint8_t)sub_837730(a1, v5, a3) != 0 )
    {
      *((uint8_t *)v4 + 4977) = 0;
      v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
      if ( (uint8_t)sub_837730(a1, v6, a3) != 0 )
      {
        if ( (uint8_t)sub_982C00(v4) != 0 )
        {
LABEL_9:
          lrand48();
          v7 = G4_VCALL<int>(v4, 56);
          sub_9D9CA0(v4, v7, 0, 0, 0);
          sub_9FFF40(v4);
          sub_97E8D0(v4, 4, 0);
          *((uint8_t *)v4 + 3404) = 1;
          sub_987840(v4, 0);
          sub_9879B0(v4, 0);
          v8 = *v4;
          v4[721] = -1;
          (*(void (**)(float *, int *))(v8 + 52))(v34, v4);
          (*(void (**)(float *))(*(uint32_t *)v4[574] + 52))(v33);
          v9 = v33[0] - v33[3];
          v10 = v33[1] - v34[0];
          v11 = (float)(v10 * v10) + (float)(v9 * v9);
          if ( v11 != v24 )
          {
            v12 = 1.0 / fsqrt(v11);
            v13 = (float)((float)((float)(v11 * v12) * v12) + -3.0) * (float)(v12 * -0.5);
            v9 = v9 * v13;
            v10 = v10 * v13;
          }
          v34[4] = 0.0;
          v34[2] = v9;
          v34[3] = v10;
          sub_98EFF0((char)(uintptr_t)(v4));
          g4_std::string::Destroy(&s);
          return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
        }
        v29 = (uint32_t *)dword_20D9B90;
        if ( v29[18 * sub_5A5890(s, -1757258454) + 3] != 0 )
          goto LABEL_36;
LABEL_16:
        g4_std::string::Destroy(&s);
        return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
      }
      if ( (uint8_t)sub_982C00(v4) != 0 )
        goto LABEL_9;
      v27 = (uint32_t *)dword_20D9B90;
      if ( v27[18 * sub_5A5890(s, -1757258454) + 9] == 0 )
        goto LABEL_16;
    }
    else
    {
      v17 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
      if ( (uint8_t)sub_837730(a1, v17, a3) != 0 )
      {
        v18 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
        if ( (uint8_t)sub_837730(a1, v18, a3) != 0 )
        {
          if ( (uint8_t)sub_982C00(v4) != 0 )
            goto LABEL_9;
          v25 = (uint32_t *)dword_20D9B90;
          if ( v25[18 * sub_5A5890(s, -1757258454) + 5] == 0 )
            goto LABEL_16;
        }
        else
        {
          if ( (uint8_t)sub_982C00(v4) != 0 )
            goto LABEL_9;
          v30 = (uint32_t *)dword_20D9B90;
          if ( v30[18 * sub_5A5890(s, -1757258454) + 11] == 0 )
            goto LABEL_16;
        }
      }
      else
      {
        v21 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
        if ( (uint8_t)sub_837730(a1, v21, a3) != 0 )
        {
          if ( (uint8_t)sub_982C00(v4) != 0 )
            goto LABEL_9;
          v26 = (uint32_t *)dword_20D9B90;
          if ( v26[18 * sub_5A5890(s, -1757258454) + 7] == 0 )
            goto LABEL_16;
        }
        else
        {
          if ( (uint8_t)sub_982C00(v4) != 0 )
            goto LABEL_9;
          v28 = (uint32_t *)dword_20D9B90;
          if ( v28[18 * sub_5A5890(s, -1757258454) + 13] == 0 )
            goto LABEL_16;
        }
      }
    }
LABEL_36:
    sub_5A5890(s, -1757258454);
    lrand48();
    v16 = sub_C6A190();
    goto LABEL_15;
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


