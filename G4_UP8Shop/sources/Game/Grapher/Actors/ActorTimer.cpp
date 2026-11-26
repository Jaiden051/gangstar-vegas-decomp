#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorTimer.h"

// ----------------------------------------------------------------------------
// Function: ActorTimer::CreateInstance  (binary VA: 0x0)
// Original: ActorTimer::CreateInstance
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * ActorTimer::CreateInstance(unsigned int a1, int a2, int a3)
{
  grapher::ActorBase::Self *v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x3Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorTimer::Construct(v3, 0xFFFFFFFF);
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
    v3 = (grapher::ActorBase::Self *)gll_operator_new(0x3Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorTimer::Construct(v3, a1);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ActorTimer::Construct  (binary VA: 0x0)
// Original: ActorTimer::ActorTimer
// ----------------------------------------------------------------------------
int ActorTimer::Construct(grapher::ActorBase::Self *a1, unsigned int a2)
{
  bool v2;
  uint32_t *v3;
  char *v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t v14[9];

  grapher::ActorBase::Construct(a1, a2);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_205D7A8);
  v2 = byte_20D6700 == 0;
  *((uint32_t *)a1 + 13) = 0;
  *((uint32_t *)a1 + 14) = 0;
  if ( v2 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
  }
  v3 = (uint32_t *)dword_20D672C;
  v4 = (char *)a1 + 52;
  v5 = (uint32_t *)(&unk_20D6728);
  if ( dword_20D672C == 0 )
    goto LABEL_20;
  do
  {
    while ( (unsigned int)(uintptr_t)(v4) <= v3[4] )
    {
      v5 = v3;
      v3 = (uint32_t *)v3[2];
      if ( v3 == nullptr )
        goto LABEL_7;
    }
    v3 = (uint32_t *)v3[3];
  }
  while ( v3 != nullptr );
LABEL_7:
  if ( v5 == (uint32_t *)&unk_20D6728 || (unsigned int)(uintptr_t)(v4) < v5[4] )
  {
LABEL_20:
    v6 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
    v6[1] = 0;
    *v6 = (uint32_t)(uintptr_t)(&off_205DD50);
  }
  else
  {
    v6 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
    v6[1] = 0;
    *v6 = (uint32_t)(uintptr_t)(&off_205DD50);
    v7 = v5[5];
    if ( v7 != 0 )
    {
      v11 = v6;
      G4_VCALL<void>(v7, 4);
      v6 = v11;
    }
  }
  v8 = (uint32_t *)dword_20D672C;
  v9 = (uint32_t *)(&unk_20D6728);
  if ( dword_20D672C == 0 )
    goto LABEL_18;
  do
  {
    while ( (unsigned int)(uintptr_t)(v4) <= v8[4] )
    {
      v9 = v8;
      v8 = (uint32_t *)v8[2];
      if ( v8 == nullptr )
        goto LABEL_16;
    }
    v8 = (uint32_t *)v8[3];
  }
  while ( v8 != nullptr );
LABEL_16:
  if ( v9 == (uint32_t *)&unk_20D6728 || (unsigned int)(uintptr_t)(v4) < v9[4] )
  {
LABEL_18:
    v12 = v6;
    v14[0] = (uint32_t)(uintptr_t)((char *)a1 + 52);
    v14[1] = 0;
    sub_8541D0(v9, v14);
    v9 = v13;
    v6 = v12;
  }
  v9[5] = (uint32_t)(uintptr_t)(v6);
  *((uint32_t *)a1 + 13) = 0;
  return sub_84BB20((char *)a1 + 56, *((uint32_t *)a1 + 14));
}

// ----------------------------------------------------------------------------
// Function: sub_85A430  (binary VA: 0x0)
// Original: sub_85A430
// ----------------------------------------------------------------------------
uint32_t * sub_85A430(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205CD00);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_85A450  (binary VA: 0x0)
// Original: sub_85A450
// ----------------------------------------------------------------------------
void sub_85A450(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205CD00);
  opDelete(a1);
}


