#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCharacterSetMonitoredAnim.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetMonitoredAnim::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCharacterSetMonitoredAnim::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCharacterSetMonitoredAnim::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCharacterSetMonitoredAnim::ActorGameCharacterSetMonitoredAnim(v3, -1);
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
    ActorGameCharacterSetMonitoredAnim::ActorGameCharacterSetMonitoredAnim(v3, a1);
  }
  return v3;
}



// Constructor (0xc66820):
int (**ActorGameCharacterSetMonitoredAnim::ActorGameCharacterSetMonitoredAnim(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D168);
  return (int (**)(int))(uintptr_t)(&off_206D168);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSetMonitoredAnim::Destroy  (binary VA: 0x0)
// Original: ActorGameCharacterSetMonitoredAnim::~ActorGameCharacterSetMonitoredAnim
// ----------------------------------------------------------------------------
void ActorGameCharacterSetMonitoredAnim::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D168);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C5B650  (binary VA: 0x0)
// Original: sub_C5B650
// ----------------------------------------------------------------------------
void sub_C5B650(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D168);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C623C0  (binary VA: 0x0)
// Original: sub_C623C0
// ----------------------------------------------------------------------------
int sub_C623C0(grapher::ActorBase::Self *a1)
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Set Monitored Anim", (int)(uintptr_t)(&v9));
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "The character for the monitored animation.", (int)(uintptr_t)(&v10) + 3);
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "The animation to monitor.", (int)(uintptr_t)(&v11) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Animation", (int)(uintptr_t)(&v11));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v13 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v19, 4, &v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Animation", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v20), v7, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  if ( v13 != nullptr )
    G4_VCALL<void>(v13, 44);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Is the animation interruptable?", (int)(uintptr_t)(&v12[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Interruptable", (int)(uintptr_t)(&v11) + 3);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v22, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Interruptable", (int)(uintptr_t)(v12));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v23), v8, 1, 1, (int)(uintptr_t)(&v24), 3);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v22);
  return ((g4_std::string::Destroy(&v24)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_C6A4A0  (binary VA: 0x0)
// Original: sub_C6A4A0
// ----------------------------------------------------------------------------
int sub_C6A4A0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v8;
  int v9;
  int v10;
  bool v11;
  int v12;
  int v13;
  bool v14;
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
  char v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  const char *v32[8];

  v3 = sub_857260(a1, 0, (int)(uintptr_t)(a3));
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(&dword_20D75F0) )
      {
LABEL_8:
        Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
        sub_837C70(v32, (int)(uintptr_t)(a1), Variable, a3, (int)(uintptr_t)(v32), v19, v22, v24, v27, v29, v31);
        v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
        v26 = sub_837730((int)(uintptr_t)(a1), v8, a3, v15, v16, v20, v23, v25, v28, v30);
        v9 = sub_C6A190(v32[0]);
        v10 = 0;
        if ( v9 >= 0 )
          v10 = v9;
        v21 = v10;
        v11 = sub_988270((uint32_t *)(v4 + 460), v10, 1);
        v12 = v21;
        v13 = v17;
        if ( v11 || (v14 = sub_988270((uint32_t *)(v4 + 460), v21, 0), v12 = v21, v13 = v17, v14) )
        {
          v18 = v13;
          sub_97E8D0(v4, v12, v26 ^ 1);
          g4_std::string::Destroy(v18);
        }
        else
        {
          g4_std::string::Destroy(v17);
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


