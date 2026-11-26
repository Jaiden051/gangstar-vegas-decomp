#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterTurnToward.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterTurnToward::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterTurnToward::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterTurnToward::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterTurnToward::ActorGameCharacterTurnToward(v3, -1);
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
    ActorGameCharacterTurnToward::ActorGameCharacterTurnToward(v3, a1);
  }
  return v3;
}



// Constructor (0x845300):
int (**ActorGameCharacterTurnToward::ActorGameCharacterTurnToward(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C948);
  return (int (**)(int))(uintptr_t)(&off_205C948);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterTurnToward::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterTurnToward::~ActorGameCharacterTurnToward
// ----------------------------------------------------------------------------
int ActorGameCharacterTurnToward::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C948);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8397F0  (binary VA: 0x0)
// Original: sub_8397F0
// ----------------------------------------------------------------------------
void sub_8397F0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C948);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_83F3F0  (binary VA: 0x0)
// Original: sub_83F3F0
// ----------------------------------------------------------------------------
int sub_83F3F0(grapher::ActorBase::Self *a1)
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
  int v26[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Turn Toward", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetDisplayName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "AI", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetCategoryName(a1, &v15);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "In", (int)(uintptr_t)(&v12[2]));
  grapher::ActorBase::AddPin(a1, 0, &v25, 1, -1);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v26), "Out", (int)(uintptr_t)(&v12[3]));
  grapher::ActorBase::AddPin(a1, 1, v26, 0, -1);
  g4_std::string::Destroy(v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "The character to turn.", (int)(uintptr_t)(&v10) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Subject", (int)(uintptr_t)(&v10) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v12[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v16, 9, &v12[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Subject", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v17), v5, 1, 1, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  if ( *(uint32_t *)&v12[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v12[4] + 44))(*(uint32_t *)&v12[4]);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "The object to look at.", (int)(uintptr_t)(&v11) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Target", (int)(uintptr_t)(&v11));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v13 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v19, 9, &v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Target", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v20), v7, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  if ( v13 != nullptr )
    G4_VCALL<void>(v13, 44);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Immediately or not.", (int)(uintptr_t)(&v12[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Immediately", (int)(uintptr_t)(&v11) + 3);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v22, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Immediately", (int)(uintptr_t)(v12));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v23), v8, 1, 1, (int)(uintptr_t)(&v24), 3);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v22);
  return ((g4_std::string::Destroy(&v24)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_846F00  (binary VA: 0x0)
// Original: sub_846F00
// ----------------------------------------------------------------------------
int sub_846F00(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  int v7;
  grapher::ActorVariable::Self *Variable;
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  float v23;
  float v24[6];
  uint8_t v25[40];

  v3 = sub_857260(a1, 0, a3);
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(&dword_20D75F0) )
      {
LABEL_8:
        v7 = sub_857260(a1, 1, a3);
        if ( v7 != 0 )
        {
          v19 = v7;
          Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
          if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), Variable, a3, v15, v16, v17, v18, v19, v21, v22) != 0 )
          {
            (*(void (**)(float *))(*(uint32_t *)v4 + 52))(v24);
            (*(void (**)(int *))(*(uint32_t *)v20 + 52))(&v21);
            v9 = *(float *)&v21 - v24[0];
            v10 = *(float *)&v22 - v24[1];
            v11 = v23 - v24[2];
            v12 = (float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v11 * v11);
            if ( v12 != 0.0 )
            {
              v13 = 1.0 / fsqrt(v12);
              v14 = (float)((float)((float)(v12 * v13) * v13) + -3.0) * (float)(v13 * -0.5);
              v9 = v9 * v14;
              v10 = v10 * v14;
              v11 = v11 * v14;
            }
            v24[3] = v9;
            v24[4] = v10;
            v24[5] = v11;
            sub_98EFF0(v4);
          }
          else
          {
            (*(void (**)(uint8_t *))(*(uint32_t *)v20 + 52))(v25);
            sub_980500(v4, v25);
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v5 = (int *)v5[1];
          if ( v5 == nullptr )
            break;
          if ( v5 == (int *)(&dword_20D75F0) )
            goto LABEL_8;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


