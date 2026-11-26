#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpRemoveT.h"

// ----------------------------------------------------------------------------
// Function: hkpRemoveTerminalsMoppModifier::staticClass  (binary VA: 0x16972c0)
// Original: hkpRemoveTerminalsMoppModifier::staticClass
// ----------------------------------------------------------------------------
void * hkpRemoveTerminalsMoppModifier::staticClass()
{
  return &hkpRemoveTerminalsMoppModifierClass;
}

// ----------------------------------------------------------------------------
// Function: hkpRemoveTerminalsMoppModifier::shouldTerminalBeRemoved  (binary VA: 0x16b4070)
// Original: hkpRemoveTerminalsMoppModifier::shouldTerminalBeRemoved
// ----------------------------------------------------------------------------
hkpRemoveTerminalsMoppModifier::Self * hkpRemoveTerminalsMoppModifier::shouldTerminalBeRemoved(hkpRemoveTerminalsMoppModifier::Self *self, unsigned int a2, const unsigned int *a3)
{
  hkpRemoveTerminalsMoppModifier::Self *result;
  const unsigned int ***v4;
  int v5;
  const unsigned int **v6;
  int v7;
  char v8;

  result = self;
  v4 = *(const unsigned int ****)(a2 + 24);
  v5 = (int)(uintptr_t)(v4[1]);
  if ( v5 > 0 )
  {
    v6 = *v4;
    if ( **v4 == a3 )
    {
      v8 = 1;
      goto LABEL_7;
    }
    v7 = 0;
    while ( ++v7 != v5 )
    {
      if ( v6[v7] == a3 )
      {
        *(uint8_t *)self = v7 >= 0;
        return result;
      }
    }
  }
  v8 = 0;
LABEL_7:
  *(uint8_t *)self = v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRemoveTerminalsMoppModifier2::shouldTerminalBeRemoved  (binary VA: 0x16b40e0)
// Original: hkpRemoveTerminalsMoppModifier2::shouldTerminalBeRemoved
// ----------------------------------------------------------------------------
int64_t hkpRemoveTerminalsMoppModifier2::shouldTerminalBeRemoved(hkpRemoveTerminalsMoppModifier2::Self *self, unsigned int a2, const unsigned int *a3)
{
  int64_t result; // rax

  LODWORD(result) = (uint32_t)(uintptr_t)(self);
  HIDWORD(result) = !((*(uint32_t *)(**(uint32_t **)(a2 + 28) + 4 * ((int)(uintptr_t)(a3) >> 5)) >> (char)(uintptr_t)a3) & 1);
  *(uint8_t *)self = BYTE4(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRemoveTerminalsMoppModifier::Destroy  (binary VA: 0x16b4120)
// Original: hkpRemoveTerminalsMoppModifier::~hkpRemoveTerminalsMoppModifier
// ----------------------------------------------------------------------------
void hkpRemoveTerminalsMoppModifier::Destroy(hkpRemoveTerminalsMoppModifier::Self *self)
{
  int v1;

  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209A2AC);
  v1 = *((uint32_t *)self + 5);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A288);
  *((uint32_t *)self + 4) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      4 * v1);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_2099518);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpRemoveTerminalsMoppModifier2::Destroy  (binary VA: 0x16b41b0)
// Original: hkpRemoveTerminalsMoppModifier2::~hkpRemoveTerminalsMoppModifier2
// ----------------------------------------------------------------------------
void hkpRemoveTerminalsMoppModifier2::Destroy(hkpRemoveTerminalsMoppModifier2::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A2C8);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209A2EC);
  hkpRemoveTerminalsMoppModifier::Destroy((hkpRemoveTerminalsMoppModifier::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: hkpRemoveTerminalsMoppModifier::addTerminalRemoveInfo  (binary VA: 0x16b4200)
// Original: hkpRemoveTerminalsMoppModifier::addTerminalRemoveInfo
// ----------------------------------------------------------------------------
int hkpRemoveTerminalsMoppModifier::addTerminalRemoveInfo(hkpRemoveTerminalsMoppModifier::Self *self, int a2)
{
  int result;
  int v3;
  int v4;

  result = *((uint32_t *)self + 4);
  if ( result == (*((uint32_t *)self + 5) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpRemoveTerminalsMoppModifier::Self *)((char *)self + 12),
      4,
      v4);
    result = *((uint32_t *)self + 4);
  }
  v3 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 4) = result + 1;
  *(uint32_t *)(v3 + 4 * result) = a2 << 8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRemoveTerminalsMoppModifier2::Destroy_ea16b4280  (binary VA: 0x16b4280)
// Original: hkpRemoveTerminalsMoppModifier2::~hkpRemoveTerminalsMoppModifier2
// ----------------------------------------------------------------------------
void hkpRemoveTerminalsMoppModifier2::Destroy_ea16b4280(hkpRemoveTerminalsMoppModifier2::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A2C8);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209A2EC);
  hkpRemoveTerminalsMoppModifier::Destroy((hkpRemoveTerminalsMoppModifier::Self *)(self));
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpRemoveTerminalsMoppModifier::Destroy_ea16b4300  (binary VA: 0x16b4300)
// Original: hkpRemoveTerminalsMoppModifier::~hkpRemoveTerminalsMoppModifier
// ----------------------------------------------------------------------------
void hkpRemoveTerminalsMoppModifier::Destroy_ea16b4300(hkpRemoveTerminalsMoppModifier::Self *self)
{
  int v1;
  int v2;

  hkpRemoveTerminalsMoppModifier::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpRemoveTerminalsMoppModifier::Construct  (binary VA: 0x16b4370)
// Original: hkpRemoveTerminalsMoppModifier::hkpRemoveTerminalsMoppModifier
// ----------------------------------------------------------------------------
void hkpRemoveTerminalsMoppModifier::Construct(hkpRemoveTerminalsMoppModifier::Self *self, const hkpMoppCode::Self *a2, const hkpShapeContainer::Self *a3, const hkArray<unsigned int, hkContainerHeapAllocator::Self> *a4, int a5, int a6, int a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15, float a16, float a17, float a18, float a19, float a20, float a21, float a22, float a23)
{
  const hkArray<unsigned int, hkContainerHeapAllocator::Self> *v23;
  int *v24;
  int v25;
  int v26;
  const hkArray<unsigned int, hkContainerHeapAllocator::Self> *v27;
  int v28;
  int v29;
  int v30;
  bool v31; // cc
  uint32_t v32[131];
  float *savedregs;
  const hkArray<unsigned int, hkContainerHeapAllocator::Self> *v34;

  v23 = a4;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209A2AC);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A288);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  if ( *((uint32_t *)a4 + 1) != 0 )
  {
    v24 = (int *)G4_VCALL<int>(a3, 24, **(uint32_t **)a4, v32);
    v25 = *v24;
    savedregs = &a8;
    (*(void (**)(int *, void *, uint32_t, float *))(v25 + 24))(v24, &unk_1D12FD0, 0, &a8);
    v26 = 1;
    if ( *((int *)a4 + 1) > 1 )
    {
      v27 = a4;
      do
      {
        v28 = *(uint32_t *)a2;
        v32[130] = a6;
        v34 = v27;
        v29 = *(uint32_t *)(*(uint32_t *)v27 + 4 * v26++);
        v30 = (*(int (**)(const hkpMoppCode::Self *, int, int))(v28 + 24))(a2, v29, a6);
        G4_VCALL<void>(v30, 24, a4, 0, &a16);
        v27 = v34;
        v31 = *((uint32_t *)v34 + 1) <= v26;
        a8 = fminf(a8, a16);
        a9 = fminf(a9, a17);
        a10 = fminf(a10, a18);
        a11 = fminf(a11, a19);
        a12 = fmaxf(a12, a20);
        a13 = fmaxf(a13, a21);
        a14 = fmaxf(a14, a22);
        a15 = fmaxf(a15, a23);
      }
      while ( !v31 );
      v23 = v34;
    }
    *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v23);
    hkMoppModifyVirtualMachine_queryAabb(a2, (hkAabb::Self *)&a8, (hkpRemoveTerminalsMoppModifier::Self *)((char *)self + 8));
    *((uint32_t *)self + 6) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpRemoveTerminalsMoppModifier::Construct  (binary VA: 0x16b4580)
// Original: hkpRemoveTerminalsMoppModifier::hkpRemoveTerminalsMoppModifier
// ----------------------------------------------------------------------------
void hkpRemoveTerminalsMoppModifier::Construct(hkpRemoveTerminalsMoppModifier::Self *self, const hkpMoppCode::Self *a2, const hkAabb::Self *a3, const hkArray<unsigned int, hkContainerHeapAllocator::Self> *a4)
{
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209A2AC);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(a4);
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A288);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  hkMoppModifyVirtualMachine_queryAabb(a2, a3, (hkpRemoveTerminalsMoppModifier::Self *)((char *)self + 8));
  *((uint32_t *)self + 6) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpRemoveTerminalsMoppModifier::applyRemoveTerminals  (binary VA: 0x16b4600)
// Original: hkpRemoveTerminalsMoppModifier::applyRemoveTerminals
// ----------------------------------------------------------------------------
uint8_t * hkpRemoveTerminalsMoppModifier::applyRemoveTerminals(hkpRemoveTerminalsMoppModifier::Self *self, hkpMoppCode::Self *a2)
{
  int i;
  unsigned int *v3;
  uint8_t *result;

  for ( i = 0; *((uint32_t *)self + 4) > i; *result = 0 )
  {
    v3 = (unsigned int *)(*((uint32_t *)self + 3) + 4 * i++);
    result = (uint8_t *)(*((uint32_t *)a2 + 8) + (*v3 >> 8));
    *v3 = *v3 & 0xFFFFFF00 | (uint8_t)*result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRemoveTerminalsMoppModifier::undoRemoveTerminals  (binary VA: 0x16b4640)
// Original: hkpRemoveTerminalsMoppModifier::undoRemoveTerminals
// ----------------------------------------------------------------------------
int hkpRemoveTerminalsMoppModifier::undoRemoveTerminals(hkpRemoveTerminalsMoppModifier::Self *self, hkpMoppCode::Self *a2)
{
  int result;
  unsigned int v3;

  for ( result = 0; *((uint32_t *)self + 4) > result; *(uint8_t *)(*((uint32_t *)a2 + 8) + (v3 >> 8)) = v3 )
    v3 = *(uint32_t *)(*((uint32_t *)self + 3) + 4 * result++);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRemoveTerminalsMoppModifier2::Construct  (binary VA: 0x16b4680)
// Original: hkpRemoveTerminalsMoppModifier2::hkpRemoveTerminalsMoppModifier2
// ----------------------------------------------------------------------------
void hkpRemoveTerminalsMoppModifier2::Construct(hkpRemoveTerminalsMoppModifier2::Self *self, const hkpMoppCode::Self *a2, const hkBitField::Self *a3)
{
  uint32_t v3[10];

  v3[4] = 1343554297;
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209A2EC);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(a3);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *((uint32_t *)self + 6) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A2C8);
  v3[5] = 1343554297;
  v3[6] = 1343554297;
  v3[7] = 1343554297;
  v3[0] = -803929351;
  v3[1] = -803929351;
  v3[2] = -803929351;
  v3[3] = -803929351;
  hkMoppModifyVirtualMachine_queryAabb(a2, (hkAabb::Self *)v3, (hkpRemoveTerminalsMoppModifier2::Self *)((char *)self + 8));
  *((uint32_t *)self + 7) = 0;
}


