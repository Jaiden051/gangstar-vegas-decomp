#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorAnimation.h"

// ----------------------------------------------------------------------------
// Function: ActorAnimation::CreateInstance  (binary VA: 0x0)
// Original: ActorAnimation::CreateInstance
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * ActorAnimation::CreateInstance(unsigned int a1, int a2, int a3)
{
  grapher::ActorBase::Self *v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorAnimation::Construct(v3, 0xFFFFFFFF);
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
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorAnimation::Construct(v3, a1);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ActorAnimation::Construct  (binary VA: 0x0)
// Original: ActorAnimation::ActorAnimation
// ----------------------------------------------------------------------------
int ActorAnimation::Construct(grapher::ActorBase::Self *a1, unsigned int a2)
{
  grapher::ActorBase::Construct(a1, a2);
  *((uint32_t *)a1 + 13) = -1;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6E8);
  return sub_84BB20((char *)a1 + 52, -1);
}

// ----------------------------------------------------------------------------
// Function: ActorAnimation::Destroy  (binary VA: 0x0)
// Original: ActorAnimation::~ActorAnimation
// ----------------------------------------------------------------------------
void ActorAnimation::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84D310  (binary VA: 0x0)
// Original: sub_84D310
// ----------------------------------------------------------------------------
void sub_84D310(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D6A8);
  grapher::ActorBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84CB30  (binary VA: 0x0)
// Original: sub_84CB30
// ----------------------------------------------------------------------------
int sub_84CB30(grapher::ActorBase::Self *a1)
{
  void *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11[8];

  grapher::ActorBase::SetArraySize(a1, 2, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "Animation", (int)(uintptr_t)(&v3));
  grapher::ActorBase::SetDisplayName(a1, &v5);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "AI", (int)(uintptr_t)(&v3) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v6);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Check", (int)(uintptr_t)(&v3) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v7, 1, -1);
  g4_std::string::Destroy(&v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Ended", (int)(uintptr_t)(&v4));
  grapher::ActorBase::AddPin(a1, 1, &v8, 0, -1);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "Sub anim.", (int)(uintptr_t)(&v4) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Sub anim", (int)(uintptr_t)(&v4) + 1);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v9, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Sub anim", (int)(uintptr_t)(&v4) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v10), v2, 1, 0, (int)(uintptr_t)(v11), 3);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v9);
  { g4_std::string::Destroy(v11); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_858760  (binary VA: 0x0)
// Original: sub_858760
// ----------------------------------------------------------------------------
int * sub_858760(grapher::ActorBase::Self *a1, int *a2, grapher::ActorContext::Self *a3)
{
  uint32_t *v3;
  char *v4;
  char *v5;
  int *v6;
  int *result;
  uint32_t *v8;
  uint32_t *v9;
  grapher::ActorVariable::Self *Variable;
  int v11;
  grapher::ActorVariable::Self *v12;
  char v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  int *v17;
  int v18;
  int v19;
  int *v20;
  int v21;
  char v22;
  int v23;
  int v24;
  int *v25;
  int v26;
  int v27;
  uint32_t *v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  void *v37[7];

  v3 = (uint32_t *)((char *)a1 + 52);
  v37[0] = (char *)a1 + 52;
  v4 = *((char **)a3 + 3);
  v5 = (char *)a3 + 8;
  v26 = (int)(uintptr_t)(a3) + 8;
  if ( v4 == nullptr )
    goto LABEL_53;
  do
  {
    while ( (unsigned int)(uintptr_t)(v3) <= *((uint32_t *)v4 + 4) )
    {
      v5 = v4;
      v4 = *((char **)v4 + 2);
      if ( v4 == nullptr )
        goto LABEL_6;
    }
    v4 = *((char **)v4 + 3);
  }
  while ( v4 != nullptr );
LABEL_6:
  if ( v5 == (char *)v26 || (unsigned int)(uintptr_t)(v3) < *((uint32_t *)v5 + 4) )
  {
LABEL_53:
    if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
    {
      grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
      __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
    }
    v8 = (uint32_t *)dword_20D672C;
    v9 = (uint32_t *)(&unk_20D6728);
    if ( dword_20D672C != 0 )
    {
      do
      {
        if ( (unsigned int)(uintptr_t)(v3) <= v8[4] )
        {
          v9 = v8;
          v8 = (uint32_t *)v8[2];
        }
        else
        {
          v8 = (uint32_t *)v8[3];
        }
      }
      while ( v8 != nullptr );
      if ( v9 != (uint32_t *)&unk_20D6728 && (unsigned int)(uintptr_t)(v3) < v9[4] )
        v9 = (uint32_t *)(&unk_20D6728);
    }
    *((uint32_t *)a1 + 13) = *(uint32_t *)(v9[5] + 4);
    v17 = (int *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 177);
    *v17 = (int)(uintptr_t)(&off_205CD10);
    v17[1] = *((uint32_t *)a1 + 13);
    v20 = v17;
    *g4_std::map_void_grapher_ActorContex_7fce1e::opIndex((grapher::ActorContext::Self *)((char *)a3 + 4), v37) = (uint32_t)(uintptr_t)(v17);
  }
  else
  {
    *((uint32_t *)a1 + 13) = *(uint32_t *)(*((uint32_t *)v5 + 5) + 4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36) + 1, "Subject", (int)(uintptr_t)(&v36));
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    v20 = (int *)(&dword_20D4A60);
    sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v6 = nullptr;
  if ( byte_20D4A64 == 0 )
    v6 = (int *)(&dword_20D4A60);
  v29 = sub_5B44E0((int)(uintptr_t)(v6), (int)(uintptr_t)(&v36) + 1, (unsigned int)(uintptr_t)(a3));
  g4_std::string::Destroy((char *)&v36 + 1);
  result = (int *)v29;
  if ( v29 != 0 )
  {
    result = (int *)G4_VCALL<int>(v29, 16);
    if ( result != nullptr )
    {
      if ( result == (int *)(&dword_20D75F0) )
      {
LABEL_28:
        result = a2;
        if ( a2 == nullptr )
        {
          Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
          v11 = (uint8_t)sub_837730((int)(uintptr_t)(a1), Variable, a3, v18, (int)(uintptr_t)(v20), v23, v26, v29, v32, v34) != 0
              ? *(uint32_t *)(v30 + 720)
              : *(uint32_t *)(v30 + 676);
          v24 = v11;
          v12 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
          v13 = (uint8_t)sub_837730((int)(uintptr_t)(a1), v12, a3, v19, v21, v24, v27, v30, v33, v35) != 0
              ? *(uint8_t *)(v31 + 698)
              : *(uint8_t *)(v31 + 654);
          result = *((int **)a1 + 13);
          if ( result == (int *)-1 )
          {
            *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(v25);
            v22 = v13;
            sub_84BEC0(a3, v3);
            v13 = v22;
            result = *((int **)a1 + 13);
          }
          if ( v25 != result || v13 != 0 )
          {
            v37[0] = (char *)a1 + 52;
            *((uint32_t *)a1 + 13) = -1;
            v14 = *((uint32_t **)a3 + 3);
            if ( v14 == nullptr )
              goto LABEL_48;
            v15 = v28;
            do
            {
              while ( (unsigned int)(uintptr_t)(v3) <= v14[4] )
              {
                v15 = v14;
                v14 = (uint32_t *)v14[2];
                if ( v14 == nullptr )
                  goto LABEL_42;
              }
              v14 = (uint32_t *)v14[3];
            }
            while ( v14 != nullptr );
LABEL_42:
            if ( v28 == v15 || (unsigned int)(uintptr_t)(v3) < v15[4] )
            {
LABEL_48:
              v16 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
              *v16 = (uint32_t)(uintptr_t)(&off_205CD10);
              v16[1] = *((uint32_t *)a1 + 13);
              *g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                 (grapher::ActorContext::Self *)((char *)a3 + 4),
                 v37) = (uint32_t)(uintptr_t)(v16);
            }
            else
            {
              *(uint32_t *)(v15[5] + 4) = -1;
            }
            return (int *)grapher::ActorBase::FireEvent(a1, 1, a3);
          }
        }
      }
      else
      {
        while ( 1 )
        {
          result = (int *)result[1];
          if ( result == nullptr )
            break;
          if ( result == (int *)(&dword_20D75F0) )
            goto LABEL_28;
        }
      }
    }
  }
  return result;
}


