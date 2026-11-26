#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpGroupFi.h"

// ----------------------------------------------------------------------------
// Function: hkpGroupFilter::staticClass  (binary VA: 0x1696950)
// Original: hkpGroupFilter::staticClass
// ----------------------------------------------------------------------------
void * hkpGroupFilter::staticClass()
{
  return &hkpGroupFilterClass;
}

// ----------------------------------------------------------------------------
// Function: hkpGroupFilter::dummyUnused  (binary VA: 0x16b39b0)
// Original: hkpGroupFilter::dummyUnused
// ----------------------------------------------------------------------------
int hkpGroupFilter::dummyUnused()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpGroupFilter::Destroy  (binary VA: 0x16b39c0)
// Original: hkpGroupFilter::~hkpGroupFilter
// ----------------------------------------------------------------------------
void hkpGroupFilter::Destroy(hkpGroupFilter::Self *self)
{
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&off_2054D80);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_2054D98);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_2054DB0);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&off_2054DD0);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpGroupFilter::Destroy_ea16b3a50  (binary VA: 0x16b3a50)
// Original: hkpGroupFilter::~hkpGroupFilter
// ----------------------------------------------------------------------------
void hkpGroupFilter::Destroy_ea16b3a50(hkpGroupFilter::Self *self)
{
  int v1;
  int v2;

  hkpGroupFilter::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 256;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpGroupFilter::Construct  (binary VA: 0x16b3af0)
// Original: hkpGroupFilter::hkpGroupFilter
// ----------------------------------------------------------------------------
void hkpGroupFilter::Construct(hkpGroupFilter::Self *self)
{
  char *v1;
  unsigned int v2;
  char *v3;

  hkpCollisionFilter::Construct(self);
  v1 = (char *)self + 52;
  *((uint32_t *)self + 8) = 2;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A1A8);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209A1E4);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_209A1F8);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_209A214);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_209A228);
  v2 = 128;
  if ( (((unsigned int)(uintptr_t)(self) + 52) & 1) != 0 )
  {
    v1 = (char *)self + 53;
    *((uint8_t *)self + 52) = -1;
    LOBYTE(v2) = 127;
    if ( (((unsigned int)(uintptr_t)(self) + 53) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)v1 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *(uint16_t *)v1 = -1;
  v2 -= 2;
  v1 += 2;
LABEL_3:
  memset(v1, 0xFFu, 4 * (v2 >> 2));
  v3 = &v1[4 * (v2 >> 2)];
  if ( (v2 & 2) != 0 )
  {
    *(uint16_t *)v3 = -1;
    v3 += 2;
  }
  if ( (v2 & 1) != 0 )
    *v3 = -1;
  *((uint32_t *)self + 12) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpGroupFilter::isCollisionEnabled  (binary VA: 0x16b3bb0)
// Original: hkpGroupFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
hkpGroupFilter::Self * hkpGroupFilter::isCollisionEnabled(hkpGroupFilter::Self *self, unsigned int a2, unsigned int a3, unsigned int a4)
{
  hkpGroupFilter::Self *result;

  result = self;
  if ( ((a4 ^ a3) & 0xFFFF0000) != 0 || (a3 & 0xFFFF0000) == 0 )
    *(uint8_t *)self = ((1 << a4) & *(uint32_t *)(a2 + 4 * (a3 & 0x1F) + 52)) != 0;
  else
    *(uint8_t *)self = ((a3 >> 5) & 0x1F) != ((a4 >> 10) & 0x1F) && ((a4 >> 5) & 0x1F) != ((a3 >> 10) & 0x1F);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGroupFilter::isCollisionEnabled  (binary VA: 0x16b3c30)
// Original: hkpGroupFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
hkpGroupFilter::Self * hkpGroupFilter::isCollisionEnabled(hkpGroupFilter::Self *self, const hkpCollidable::Self *a2, const hkpCollidable::Self *a3, int a4)
{
  hkpGroupFilter::isCollisionEnabled(self, (unsigned int)(uintptr_t)(a2), *((uint32_t *)a3 + 7), *(uint32_t *)(a4 + 28));
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpGroupFilter::isCollisionEnabled  (binary VA: 0x16b3c90)
// Original: hkpGroupFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
hkpGroupFilter::Self * hkpGroupFilter::isCollisionEnabled(hkpGroupFilter::Self *a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9;
  unsigned int v10;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v9 = G4_VCALL<int>(a6, 20, a8, v14, v15, v16, v17, v18);
  if ( v9 == -1 )
  {
    while ( *(uint32_t *)(a4 + 12) != 0 )
      a4 = *(uint32_t *)(a4 + 12);
    v9 = *(uint32_t *)(a4 + 28);
  }
  v10 = G4_VCALL<int>(a7, 20, a9);
  if ( v10 == -1 )
  {
    while ( *(uint32_t *)(a5 + 12) != 0 )
      a5 = *(uint32_t *)(a5 + 12);
    v10 = *(uint32_t *)(a5 + 28);
  }
  hkpGroupFilter::isCollisionEnabled(a1, a2, v9, v10);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpGroupFilter::isCollisionEnabled  (binary VA: 0x16b3d40)
// Original: hkpGroupFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
hkpGroupFilter::Self * hkpGroupFilter::isCollisionEnabled(hkpGroupFilter::Self *a1, unsigned int a2, int a3, int a4, int a5)
{
  unsigned int v5;

  v5 = G4_VCALL<int>(a4, 20, a5);
  hkpGroupFilter::isCollisionEnabled(a1, a2, *(uint32_t *)(a3 + 32), v5);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpGroupFilter::isCollisionEnabled  (binary VA: 0x16b3db0)
// Original: hkpGroupFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
hkpGroupFilter::Self * hkpGroupFilter::isCollisionEnabled(hkpGroupFilter::Self *a1, unsigned int a2, int a3, int a4)
{
  hkpGroupFilter::isCollisionEnabled(a1, a2, *(uint32_t *)(a3 + 36), *(uint32_t *)(a4 + 28));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpGroupFilter::isCollisionEnabled  (binary VA: 0x16b3e10)
// Original: hkpGroupFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
hkpGroupFilter::Self * hkpGroupFilter::isCollisionEnabled(hkpGroupFilter::Self *a1, unsigned int a2, uint32_t *a3, uint32_t *a4, int a5, int a6, int a7)
{
  uint32_t *v7;
  uint32_t *i;
  uint32_t *v9;
  int v10;
  unsigned int v11;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  int v23;
  int v24;

  v7 = a4;
  v21 = G4_VCALL<int>(a6, 20, a7, v15, v16, v17, v18, v19, v20, v22, v23, v24);
  if ( v21 == -1 )
  {
    while ( *(uint32_t *)(a5 + 12) != 0 )
      a5 = *(uint32_t *)(a5 + 12);
    v21 = *(uint32_t *)(a5 + 28);
  }
  if ( a4[3] != 0 )
  {
    for ( i = (uint32_t *)a4[3]; ; i = (uint32_t *)i[3] )
    {
      v9 = (uint32_t *)*i;
      v10 = *(uint32_t *)(*a3 + 4 * *(uint8_t *)(*i + 8) + 272);
      if ( (v10 & 0x40000) != 0 )
      {
        v11 = (*(int (**)(uint32_t *, uint32_t))(v9[4] + 20))(v9 + 4, v7[1]);
        goto LABEL_12;
      }
      if ( (v10 & 0x400000) != 0 )
      {
        v14 = (*(int (**)(uint32_t))(*v9 + 64))(*i);
        v11 = G4_VCALL<int>(v14, 20, v7[1]);
        goto LABEL_12;
      }
      if ( (v10 & 0x2000000) != 0 )
      {
        for ( i = (uint32_t *)a4[3]; i[3] != 0; i = (uint32_t *)i[3] )
          ;
LABEL_16:
        v11 = i[7];
        goto LABEL_12;
      }
      if ( (v10 & 0x4000000) != 0 )
        break;
      if ( i[3] == 0 )
        goto LABEL_16;
      v7 = i;
    }
    *(uint8_t *)a1 = 1;
    return a1;
  }
  else
  {
    v11 = a4[7];
LABEL_12:
    hkpGroupFilter::isCollisionEnabled(a1, a2, v11, v21);
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpGroupFilter::enableCollisionsUsingBitfield  (binary VA: 0x16b3f60)
// Original: hkpGroupFilter::enableCollisionsUsingBitfield
// ----------------------------------------------------------------------------
hkpGroupFilter::Self * hkpGroupFilter::enableCollisionsUsingBitfield(hkpGroupFilter::Self *self, unsigned int a2, unsigned int a3)
{
  int v3;
  hkpGroupFilter::Self *result;

  v3 = 0;
  result = self;
  do
  {
    if ( (a2 & (1 << v3)) != 0 )
      *((uint32_t *)self + v3 + 13) |= a3;
    if ( (a3 & (1 << v3)) != 0 )
      *((uint32_t *)self + v3 + 13) |= a2;
    ++v3;
  }
  while ( v3 != 32 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGroupFilter::enableCollisionsBetween  (binary VA: 0x16b3fa0)
// Original: hkpGroupFilter::enableCollisionsBetween
// ----------------------------------------------------------------------------
hkpGroupFilter::Self * hkpGroupFilter::enableCollisionsBetween(hkpGroupFilter::Self *self, int a2, int a3)
{
  *((uint32_t *)self + a2 + 13) |= 1 << a3;
  *((uint32_t *)self + a3 + 13) |= 1 << a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpGroupFilter::disableCollisionsBetween  (binary VA: 0x16b3fd0)
// Original: hkpGroupFilter::disableCollisionsBetween
// ----------------------------------------------------------------------------
hkpGroupFilter::Self * hkpGroupFilter::disableCollisionsBetween(hkpGroupFilter::Self *self, int a2, int a3)
{
  *((uint32_t *)self + a2 + 13) &= ~(1 << a3);
  *((uint32_t *)self + a3 + 13) &= ~(1 << a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpGroupFilter::disableCollisionsUsingBitfield  (binary VA: 0x16b4010)
// Original: hkpGroupFilter::disableCollisionsUsingBitfield
// ----------------------------------------------------------------------------
hkpGroupFilter::Self * hkpGroupFilter::disableCollisionsUsingBitfield(hkpGroupFilter::Self *self, unsigned int a2, unsigned int a3)
{
  int v3;
  hkpGroupFilter::Self *result;

  v3 = 0;
  result = self;
  do
  {
    if ( (a2 & (1 << v3)) != 0 )
      *((uint32_t *)self + v3 + 13) &= ~a3;
    if ( (a3 & (1 << v3)) != 0 )
      *((uint32_t *)self + v3 + 13) &= ~a2;
    ++v3;
  }
  while ( v3 != 32 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGroupFilterUtil::disableCollisionsBetweenConstraintBodies  (binary VA: 0x182c720)
// Original: hkpGroupFilterUtil::disableCollisionsBetweenConstraintBodies
// ----------------------------------------------------------------------------
const hkpConstraintInstance::Self *const * hkpGroupFilterUtil::disableCollisionsBetweenConstraintBodies(hkpGroupFilterUtil::Self *self, const hkpConstraintInstance::Self *const *a2, int a3)
{
  const hkpConstraintInstance::Self *const *result;
  hkpGroupFilterUtil::Self *v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;

  result = a2;
  if ( (int)(uintptr_t)(a2) > 0 )
  {
    v4 = self;
    v13 = 0;
    v12 = a3 << 16;
    do
    {
      result = *(const hkpConstraintInstance::Self *const **)(*(uint32_t *)v4 + 20);
      v5 = *(uint32_t *)(*(uint32_t *)v4 + 24);
      if ( result != nullptr && *((uint32_t *)result + 4) != 0 && v5 != 0 && *(uint32_t *)(v5 + 16) != 0 )
      {
        v6 = *((uint32_t *)result + 11);
        v11 = *(uint32_t *)(v5 + 44);
        v10 = (v11 >> 5) & 0x1F;
        v7 = (v6 >> 10) & 0x1F;
        v8 = (v6 >> 5) & 0x1F;
        if ( v8 == 0 )
          v8 = v13++;
        if ( v10 == 0 )
          v10 = v13++;
        v9 = v8;
        if ( v7 == 0 )
        {
          v7 = v10;
          v9 = (v11 >> 10) & 0x1F;
        }
        *((uint32_t *)result + 11) = v12 | (int)(uintptr_t)(result[11]) & 0x1F | (32 * v8) | (v7 << 10);
        result = (const hkpConstraintInstance::Self *const *)(32 * v10);
        *(uint32_t *)(v5 + 44) = v12 | v11 & 0x1F | (32 * v10) | (v9 << 10);
      }
      v4 = (hkpGroupFilterUtil::Self *)((char *)v4 + 4);
    }
    while ( v4 != (hkpGroupFilterUtil::Self *)((char *)self + 4 * (uint32_t)(uintptr_t)(a2)) );
  }
  return result;
}


