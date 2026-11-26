#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorSoundAction.h"

// ----------------------------------------------------------------------------
// Function: ActorSoundAction::CreateInstance  (binary VA: 0x0)
// Original: ActorSoundAction::CreateInstance
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * ActorSoundAction::CreateInstance(unsigned int a1, int a2, int a3)
{
  grapher::ActorBase::Self *v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorSoundAction::ActorSoundAction(v3, 0xFFFFFFFF);
    if ( v3 != nullptr )
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
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorSoundAction::ActorSoundAction(v3, a1);
  }
  return v3;
}



// Constructor (0x854d10):
int (**ActorSoundAction::ActorSoundAction(grapher::ActorBase::Self *a1, unsigned int a2))(grapher::ActorBase::Self *)
{
  grapher::ActorBase::Construct(a1, a2);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D928);
  return (int (**)(grapher::ActorBase::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_205D928));
}
// ----------------------------------------------------------------------------
// Function: ActorSoundAction::Destroy  (binary VA: 0x0)
// Original: ActorSoundAction::~ActorSoundAction
// ----------------------------------------------------------------------------
void ActorSoundAction::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D510  (binary VA: 0x0)
// Original: sub_84D510
// ----------------------------------------------------------------------------
void sub_84D510(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_852AB0  (binary VA: 0x0)
// Original: sub_852AB0
// ----------------------------------------------------------------------------
int sub_852AB0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  uint32_t *v4;
  void *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
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
  int v21[4];

  grapher::ActorBase::SetArraySize(a1, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "{Base}", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), (char *)&unk_1B15112, (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v19);
  g4_std::string::Destroy(&v19);
  grapher::ActorBase::SetArraySize(a1, 2, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Sound Action", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "AI", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Play", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Out", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 1, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Sound Action", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Action", (int)(uintptr_t)(&v6) + 2);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v12, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Action", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v13), v3, 1, 1, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "The character on which to trigger the sound action if not the current subject", (int)(uintptr_t)(&v7) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Target", (int)(uintptr_t)(&v7) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v9 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 9, &v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Target", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v16), v5, 1, 0, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( v9 != nullptr )
    G4_VCALL<void>(v9, 44);
  g4_std::string::Destroy(&v15);
  { g4_std::string::Destroy(&v17); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8590C0  (binary VA: 0x0)
// Original: sub_8590C0
// ----------------------------------------------------------------------------
int sub_8590C0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  grapher::ActorContext::Self *v4;
  grapher::ActorVariable::Self *Variable;
  void ***v6;
  void **v7;
  int *v8;
  int *v9;
  int *v10;
  int v12;
  void *v13;
  int *v14;
  g4_cxa_guard_t *v15;
  g4_cxa_guard_t *v16;
  int v17;
  int v18;
  grapher::ActorContext::Self *v19;
  int v20;
  int v21;
  void *v22;
  void **v23;

  v3 = a1;
  v4 = a3;
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  v19 = sub_837200(
          (int)(uintptr_t)(a1),
          Variable,
          a3,
          v12,
          (int)(uintptr_t)(v13),
          (int)(uintptr_t)(v15),
          v17,
          v18,
          v20,
          v21,
          (int)(uintptr_t)(v22),
          (grapher::ActorContext::Self *)v23);
  v22 = &v22;
  v23 = &v22;
  sub_856780(a1, 1, (int)(uintptr_t)(&v22), (int)(uintptr_t)(a3), 1);
  v6 = (void ***)v22;
  if ( v22 != &v22 )
  {
    v16 = *((g4_cxa_guard_t **)v22 + 2);
    while ( 1 )
    {
      v7 = *v6;
      opDelete(v6);
      if ( v7 == &v22 )
        break;
      v6 = (void ***)v7;
    }
    v3 = a1;
    v4 = a3;
    if ( v16 != nullptr )
    {
      v8 = (int *)G4_VCALL<int>(v16, 16);
      if ( v8 != nullptr )
      {
        if ( v8 == (int *)(&dword_20D75F0) )
        {
LABEL_16:
          if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
          {
            v14 = (int *)(&dword_20D5240);
            sub_976230(&dword_20D5240);
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
            __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
          }
          v10 = nullptr;
          if ( byte_20D5248 == 0 )
            v10 = (int *)(&dword_20D5240);
          if ( (uint8_t)sub_9767E0(v10) == 0 )
            sub_913030(v16, v19, 0, -1082130432, v14);
          return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v4));
        }
        while ( 1 )
        {
          v8 = (int *)v8[1];
          if ( v8 == nullptr )
            break;
          if ( v8 == (int *)(&dword_20D75F0) )
            goto LABEL_16;
        }
      }
    }
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Subject", (int)(uintptr_t)(&v20) + 3);
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v9 = nullptr;
  if ( byte_20D4A64 == 0 )
    v9 = (int *)(&dword_20D4A60);
  v14 = (int *)sub_5B44E0((int)(uintptr_t)(v9), (int)(uintptr_t)(&v21), (unsigned int)(uintptr_t)(v4));
  g4_std::string::Destroy(&v21);
  if ( v14 != nullptr )
  {
    v16 = (g4_cxa_guard_t *)(v14);
    goto LABEL_16;
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 1, v4));
}


