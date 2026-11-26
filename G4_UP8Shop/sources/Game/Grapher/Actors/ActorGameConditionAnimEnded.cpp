#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameConditionAnimEnded.h"

// ----------------------------------------------------------------------------
// Function: ActorGameConditionAnimEnded::CreateInstance  (binary VA: 0x0)
// Original: ActorGameConditionAnimEnded::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameConditionAnimEnded::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x40u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameConditionAnimEnded::Construct(v3, -1);
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
    v3 = gll_operator_new(0x40u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameConditionAnimEnded::Construct(v3, a1);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ActorGameConditionAnimEnded::Construct  (binary VA: 0x0)
// Original: ActorGameConditionAnimEnded::ActorGameConditionAnimEnded
// ----------------------------------------------------------------------------
int ActorGameConditionAnimEnded::Construct(int a1, unsigned int a2)
{
  bool v2;
  unsigned int v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  int v13;
  int v14;
  char v15;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  int v20;
  uint32_t *v21;
  uint32_t *v22;
  int v23;
  uint32_t v24[5];

  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206C348);
  v2 = byte_20D6700 == 0;
  *(uint32_t *)(a1 + 52) = 0;
  *(uint32_t *)(a1 + 56) = -1;
  *(uint8_t *)(a1 + 60) = 0;
  v23 = 0;
  v3 = a1 + 52;
  if ( v2 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
  }
  v4 = (uint32_t *)dword_20D672C;
  v5 = (uint32_t *)(&unk_20D6728);
  if ( dword_20D672C != 0 )
  {
    do
    {
      while ( v3 <= v4[4] )
      {
        v5 = v4;
        v4 = (uint32_t *)v4[2];
        if ( v4 == nullptr )
          goto LABEL_7;
      }
      v4 = (uint32_t *)v4[3];
    }
    while ( v4 != nullptr );
LABEL_7:
    if ( v5 != (uint32_t *)&unk_20D6728 && v3 < v5[4] )
      v5 = (uint32_t *)(&unk_20D6728);
  }
  v17 = v5;
  v6 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
  *v6 = (uint32_t)(uintptr_t)(&off_206CC00);
  v7 = v23;
  v2 = v23 == 0;
  v6[1] = 0;
  v8 = v17;
  if ( !v2 )
  {
    v6[1] = v7;
    v18 = v6;
    sub_C5A550(v7 + 12, v6 + 1, 0);
    v6 = v18;
    v8 = v17;
  }
  if ( v8 != (uint32_t *)&unk_20D6728 )
  {
    v9 = v8[5];
    if ( v9 != 0 )
    {
      v19 = v6;
      G4_VCALL<void>(v9, 4);
      v6 = v19;
    }
  }
  v10 = (uint32_t *)dword_20D672C;
  v11 = (uint32_t *)(&unk_20D6728);
  if ( dword_20D672C == 0 )
    goto LABEL_35;
  do
  {
    while ( v3 <= v10[4] )
    {
      v11 = v10;
      v10 = (uint32_t *)v10[2];
      if ( v10 == nullptr )
        goto LABEL_20;
    }
    v10 = (uint32_t *)v10[3];
  }
  while ( v10 != nullptr );
LABEL_20:
  if ( v11 == (uint32_t *)&unk_20D6728 || v3 < v11[4] )
  {
LABEL_35:
    v21 = v6;
    v24[0] = a1 + 52;
    v24[1] = 0;
    sub_C4E4B0(v11, v24);
    v11 = v22;
    v6 = v21;
  }
  v11[5] = (uint32_t)(uintptr_t)(v6);
  v12 = 0;
  v13 = *(uint32_t *)(a1 + 52);
  if ( v23 != 0 )
    v12 = v23 + 12;
  if ( v13 != 0 )
  {
    v20 = v12;
    sub_5459F0(a1 + 52, v13 + 16);
    v12 = v20;
  }
  if ( v12 != 0 )
  {
    v14 = 0;
    *(uint32_t *)(a1 + 52) = v12 - 12;
    if ( v12 != 12 )
      v14 = v12;
    sub_C5A550(v14, a1 + 52, 0);
  }
  else
  {
    *(uint32_t *)(a1 + 52) = 0;
  }
  if ( v23 != 0 )
    sub_5459F0(&v23, v23 + 16);
  v15 = *(uint8_t *)(a1 + 60);
  v23 = 0;
  sub_C5A390(a1 + 60, v15);
  return sub_84BB20(a1 + 56, *(uint32_t *)(a1 + 56));
}



// Vtable Slot [+00] (0xc5a610, 88 bytes) - sub_C5A610:
int (**sub_C5A610(uint32_t *a1))(int)
{
  int v1;

  *a1 = (uint32_t)(uintptr_t)(&off_206CC00);
  v1 = a1[1];
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1 + 1), v1 + 16);
  a1[1] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_205CD00);
  return (int (**)(int))(uintptr_t)(&off_205CD00);
}
// ----------------------------------------------------------------------------
// Function: sub_C5A670  (binary VA: 0x0)
// Original: sub_C5A670
// ----------------------------------------------------------------------------
void sub_C5A670(uint32_t *a1)
{
  int v1;

  *a1 = (uint32_t)(uintptr_t)(&off_206CC00);
  v1 = a1[1];
  if ( v1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1 + 1), v1 + 16);
  a1[1] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_205CD00);
  opDelete(a1);
}


