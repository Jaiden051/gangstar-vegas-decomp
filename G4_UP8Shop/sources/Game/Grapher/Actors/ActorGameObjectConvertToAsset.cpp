#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameObjectConvertToAsset.h"

// ----------------------------------------------------------------------------
// Function: ActorGameObjectConvertToAsset::CreateInstance  (binary VA: 0x0)
// Original: ActorGameObjectConvertToAsset::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameObjectConvertToAsset::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameObjectConvertToAsset::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), -1);
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
    v3 = gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameObjectConvertToAsset::Construct((grapher::ActorBase::Self *)(uintptr_t)(v3), a1);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ActorGameObjectConvertToAsset::Construct  (binary VA: 0x0)
// Original: ActorGameObjectConvertToAsset::ActorGameObjectConvertToAsset
// ----------------------------------------------------------------------------
uint32_t * ActorGameObjectConvertToAsset::Construct(grapher::ActorBase::Self *a1, unsigned int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *result;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t v12[9];

  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BCC8);
  v2 = (uint32_t *)((char *)a1 + 52);
  if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
  }
  v3 = (uint32_t *)dword_20D672C;
  v4 = (uint32_t *)(&unk_20D6728);
  if ( dword_20D672C == 0 )
    goto LABEL_20;
  do
  {
    while ( (unsigned int)(uintptr_t)(v2) <= v3[4] )
    {
      v4 = v3;
      v3 = (uint32_t *)v3[2];
      if ( v3 == nullptr )
        goto LABEL_7;
    }
    v3 = (uint32_t *)v3[3];
  }
  while ( v3 != nullptr );
LABEL_7:
  if ( v4 == (uint32_t *)&unk_20D6728 || (unsigned int)(uintptr_t)(v2) < v4[4] )
  {
LABEL_20:
    v5 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
    v5[1] = 0;
    *v5 = (uint32_t)(uintptr_t)(&off_205CD10);
  }
  else
  {
    v5 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
    v5[1] = 0;
    *v5 = (uint32_t)(uintptr_t)(&off_205CD10);
    v6 = v4[5];
    if ( v6 != 0 )
    {
      v9 = v5;
      G4_VCALL<void>(v6, 4);
      v5 = v9;
    }
  }
  result = (uint32_t *)dword_20D672C;
  v8 = (uint32_t *)(&unk_20D6728);
  if ( dword_20D672C == 0 )
    goto LABEL_18;
  do
  {
    while ( (unsigned int)(uintptr_t)(v2) <= result[4] )
    {
      v8 = result;
      result = (uint32_t *)result[2];
      if ( result == nullptr )
        goto LABEL_16;
    }
    result = (uint32_t *)result[3];
  }
  while ( result != nullptr );
LABEL_16:
  if ( v8 == (uint32_t *)&unk_20D6728 || (unsigned int)(uintptr_t)(v2) < v8[4] )
  {
LABEL_18:
    v10 = v5;
    v12[0] = (uint32_t)(uintptr_t)((char *)a1 + 52);
    v12[1] = 0;
    result = (uint32_t *)sub_C37DE0(v8, v12);
    v8 = v11;
    v5 = v10;
  }
  v8[5] = (uint32_t)(uintptr_t)(v5);
  *((uint32_t *)a1 + 13) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_84B640  (binary VA: 0x0)
// Original: sub_84B640
// ----------------------------------------------------------------------------
uint32_t * sub_84B640(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205CD00);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_84B660  (binary VA: 0x0)
// Original: sub_84B660
// ----------------------------------------------------------------------------
void sub_84B660(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205CD00);
  opDelete(a1);
}


