#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpGroupCo.h"

// ----------------------------------------------------------------------------
// Function: hkpGroupCollisionFilter::staticClass  (binary VA: 0x182e330)
// Original: hkpGroupCollisionFilter::staticClass
// ----------------------------------------------------------------------------
void * hkpGroupCollisionFilter::staticClass()
{
  return &hkpGroupCollisionFilterClass;
}

// ----------------------------------------------------------------------------
// Function: hkpGroupCollisionFilter::Destroy  (binary VA: 0x18301a0)
// Original: hkpGroupCollisionFilter::~hkpGroupCollisionFilter
// ----------------------------------------------------------------------------
void hkpGroupCollisionFilter::Destroy(hkpGroupCollisionFilter::Self *self)
{
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&off_2054D80);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_2054D98);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_2054DB0);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&off_2054DD0);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpGroupCollisionFilter::Destroy_ea1830230  (binary VA: 0x1830230)
// Original: hkpGroupCollisionFilter::~hkpGroupCollisionFilter
// ----------------------------------------------------------------------------
void hkpGroupCollisionFilter::Destroy_ea1830230(hkpGroupCollisionFilter::Self *self)
{
  int v1;
  int v2;

  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&off_2054D80);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_2054D98);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_2054DB0);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&off_2054DD0);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 180;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpGroupCollisionFilter::Construct  (binary VA: 0x1830300)
// Original: hkpGroupCollisionFilter::hkpGroupCollisionFilter
// ----------------------------------------------------------------------------
void hkpGroupCollisionFilter::Construct(hkpGroupCollisionFilter::Self *self)
{
  char *v1;
  unsigned int v2;
  char *v3;

  hkpCollisionFilter::Construct(self);
  v1 = (char *)self + 52;
  *((uint8_t *)self + 48) = 1;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1F48);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A1F80);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_20A1F94);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_20A1FB0);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20A1FC4);
  v2 = 128;
  if ( (((unsigned int)(uintptr_t)(self) + 52) & 1) != 0 )
  {
    v1 = (char *)self + 53;
    *((uint8_t *)self + 52) = 0;
    LOBYTE(v2) = 127;
    if ( (((unsigned int)(uintptr_t)(self) + 53) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)v1 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *(uint16_t *)v1 = 0;
  v2 -= 2;
  v1 += 2;
LABEL_3:
  memset(v1, 0, 4 * (v2 >> 2));
  v3 = &v1[4 * (v2 >> 2)];
  if ( (v2 & 2) != 0 )
  {
    *(uint16_t *)v3 = 0;
    v3 += 2;
  }
  if ( (v2 & 1) != 0 )
    *v3 = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpGroupCollisionFilter::isCollisionEnabled  (binary VA: 0x18303b0)
// Original: hkpGroupCollisionFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
hkpGroupCollisionFilter::Self * hkpGroupCollisionFilter::isCollisionEnabled(hkpGroupCollisionFilter::Self *self, unsigned int a2, signed int a3, int a4)
{
  hkpGroupCollisionFilter::Self *result;
  int v5;
  int v6;
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
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;

  result = self;
  if ( a3 != 0 && a4 != 0 )
  {
    v5 = 0;
    if ( (uint8_t)a3 != 0 )
    {
      v6 = 0;
      if ( (a3 & 1) != 0 )
        v6 = *(uint32_t *)(a2 + 52);
      v7 = 0;
      if ( (a3 & 2) != 0 )
        v7 = *(uint32_t *)(a2 + 56);
      v8 = v6 | v7;
      v9 = 0;
      if ( (a3 & 4) != 0 )
        v9 = *(uint32_t *)(a2 + 60);
      v10 = 0;
      if ( (a3 & 8) != 0 )
        v10 = *(uint32_t *)(a2 + 64);
      v11 = v9 | v10;
      v12 = 0;
      v13 = v8 | v11;
      if ( (a3 & 0x10) != 0 )
        v12 = *(uint32_t *)(a2 + 68);
      v14 = 0;
      if ( (a3 & 0x20) != 0 )
        v14 = *(uint32_t *)(a2 + 72);
      v15 = v13 | v14 | v12;
      v16 = 0;
      if ( (a3 & 0x40) != 0 )
        v16 = *(uint32_t *)(a2 + 76);
      v17 = 0;
      if ( (a3 & 0x80u) != 0 )
        v17 = *(uint32_t *)(a2 + 80);
      v5 = v15 | v16 | v17;
    }
    if ( BYTE1(a3) != 0 )
    {
      v18 = 0;
      if ( (a3 & 0x100) != 0 )
        v18 = *(uint32_t *)(a2 + 84);
      v19 = v18 | v5;
      v20 = 0;
      if ( (a3 & 0x200) != 0 )
        v20 = *(uint32_t *)(a2 + 88);
      v21 = 0;
      if ( (a3 & 0x400) != 0 )
        v21 = *(uint32_t *)(a2 + 92);
      v22 = v20 | v21;
      v23 = 0;
      v24 = v19 | v22;
      if ( (a3 & 0x800) != 0 )
        v23 = *(uint32_t *)(a2 + 96);
      v25 = 0;
      if ( (a3 & 0x1000) != 0 )
        v25 = *(uint32_t *)(a2 + 100);
      v26 = v24 | v25 | v23;
      v27 = 0;
      if ( (a3 & 0x2000) != 0 )
        v27 = *(uint32_t *)(a2 + 104);
      v28 = 0;
      if ( (a3 & 0x4000) != 0 )
        v28 = *(uint32_t *)(a2 + 108);
      v29 = v28 | v27;
      v30 = 0;
      v31 = v26 | v29;
      if ( (a3 & 0x8000) != 0 )
        v30 = *(uint32_t *)(a2 + 112);
      v5 = v31 | v30;
    }
    if ( (a3 & 0xFF0000) != 0 )
    {
      v32 = 0;
      if ( (a3 & 0x10000) != 0 )
        v32 = *(uint32_t *)(a2 + 116);
      v33 = v32 | v5;
      v34 = 0;
      if ( (a3 & 0x20000) != 0 )
        v34 = *(uint32_t *)(a2 + 120);
      v35 = 0;
      if ( (a3 & 0x40000) != 0 )
        v35 = *(uint32_t *)(a2 + 124);
      v36 = v34 | v35;
      v37 = 0;
      v38 = v33 | v36;
      if ( (a3 & 0x80000) != 0 )
        v37 = *(uint32_t *)(a2 + 128);
      v39 = 0;
      if ( (a3 & 0x100000) != 0 )
        v39 = *(uint32_t *)(a2 + 132);
      v40 = v38 | v39 | v37;
      v41 = 0;
      if ( (a3 & 0x200000) != 0 )
        v41 = *(uint32_t *)(a2 + 136);
      v42 = 0;
      if ( (a3 & 0x400000) != 0 )
        v42 = *(uint32_t *)(a2 + 140);
      v43 = v42 | v41;
      v44 = 0;
      v45 = v40 | v43;
      if ( (a3 & 0x800000) != 0 )
        v44 = *(uint32_t *)(a2 + 144);
      v5 = v45 | v44;
    }
    if ( (a3 & 0xFF000000) != 0 )
    {
      v46 = 0;
      if ( (a3 & 0x1000000) != 0 )
        v46 = *(uint32_t *)(a2 + 148);
      v47 = v46 | v5;
      v48 = 0;
      if ( (a3 & 0x2000000) != 0 )
        v48 = *(uint32_t *)(a2 + 152);
      v49 = 0;
      if ( (a3 & 0x4000000) != 0 )
        v49 = *(uint32_t *)(a2 + 156);
      v50 = v48 | v49;
      v51 = 0;
      v52 = v47 | v50;
      if ( (a3 & 0x8000000) != 0 )
        v51 = *(uint32_t *)(a2 + 160);
      v53 = 0;
      if ( (a3 & 0x10000000) != 0 )
        v53 = *(uint32_t *)(a2 + 164);
      v54 = v52 | v53 | v51;
      v55 = 0;
      if ( (a3 & 0x20000000) != 0 )
        v55 = *(uint32_t *)(a2 + 168);
      v56 = 0;
      if ( (a3 & 0x40000000) != 0 )
        v56 = *(uint32_t *)(a2 + 172);
      v57 = v54 | v56 | v55;
      if ( a3 < 0 )
        v5 = v57 | *(uint32_t *)(a2 + 176);
      else
        v5 = v57;
    }
    *(uint8_t *)self = (v5 & a4) != 0;
  }
  else
  {
    *(uint8_t *)self = *(uint8_t *)(a2 + 48);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGroupCollisionFilter::isCollisionEnabled  (binary VA: 0x1830600)
// Original: hkpGroupCollisionFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
hkpGroupCollisionFilter::Self * hkpGroupCollisionFilter::isCollisionEnabled(hkpGroupCollisionFilter::Self *self, const hkpCollidable::Self *a2, const hkpCollidable::Self *a3, int a4)
{
  hkpGroupCollisionFilter::isCollisionEnabled(self, (unsigned int)(uintptr_t)(a2), *((uint32_t *)a3 + 7), *(uint32_t *)(a4 + 28));
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpGroupCollisionFilter::isCollisionEnabled  (binary VA: 0x1830660)
// Original: hkpGroupCollisionFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
hkpGroupCollisionFilter::Self * hkpGroupCollisionFilter::isCollisionEnabled(hkpGroupCollisionFilter::Self *a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  signed int v9;
  int v10;

  v9 = G4_VCALL<int>(a6, 20, a8);
  v10 = G4_VCALL<int>(a7, 20, a9);
  hkpGroupCollisionFilter::isCollisionEnabled(a1, a2, v9, v10);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpGroupCollisionFilter::isCollisionEnabled  (binary VA: 0x1830760)
// Original: hkpGroupCollisionFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
hkpGroupCollisionFilter::Self * hkpGroupCollisionFilter::isCollisionEnabled(hkpGroupCollisionFilter::Self *a1, unsigned int a2, int a3, int a4, int a5)
{
  int v5;

  v5 = G4_VCALL<int>(a4, 20, a5);
  hkpGroupCollisionFilter::isCollisionEnabled(a1, a2, *(uint32_t *)(a3 + 32), v5);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpGroupCollisionFilter::isCollisionEnabled  (binary VA: 0x18307d0)
// Original: hkpGroupCollisionFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
hkpGroupCollisionFilter::Self * hkpGroupCollisionFilter::isCollisionEnabled_CdBody(hkpGroupCollisionFilter::Self *a1, unsigned int a2, int a3, int a4)
{
  hkpGroupCollisionFilter::isCollisionEnabled(a1, a2, *(uint32_t *)(a3 + 36), *(uint32_t *)(a4 + 28));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpGroupCollisionFilter::enableCollisionGroups  (binary VA: 0x1830830)
// Original: hkpGroupCollisionFilter::enableCollisionGroups
// ----------------------------------------------------------------------------
hkpGroupCollisionFilter::Self * hkpGroupCollisionFilter::enableCollisionGroups(hkpGroupCollisionFilter::Self *self, int64_t a2)
{
  int v2;
  hkpGroupCollisionFilter::Self *result;

  v2 = 0;
  result = self;
  if ( a2 != 0 )
  {
    do
    {
      if ( ((unsigned int)a2 & (1 << v2)) != 0 )
        *((uint32_t *)self + v2 + 13) |= HIDWORD(a2);
      if ( (HIDWORD(a2) & (1 << v2)) != 0 )
        *((uint32_t *)self + v2 + 13) |= a2;
      ++v2;
    }
    while ( v2 != 32 );
  }
  else
  {
    *((uint8_t *)self + 48) = 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGroupCollisionFilter::disableCollisionGroups  (binary VA: 0x1830880)
// Original: hkpGroupCollisionFilter::disableCollisionGroups
// ----------------------------------------------------------------------------
hkpGroupCollisionFilter::Self * hkpGroupCollisionFilter::disableCollisionGroups(hkpGroupCollisionFilter::Self *self, int64_t a2)
{
  int v2;
  hkpGroupCollisionFilter::Self *result;

  v2 = 0;
  result = self;
  if ( a2 != 0 )
  {
    do
    {
      if ( ((unsigned int)a2 & (1 << v2)) != 0 )
        *((uint32_t *)self + v2 + 13) &= ~HIDWORD(a2);
      if ( (HIDWORD(a2) & (1 << v2)) != 0 )
        *((uint32_t *)self + v2 + 13) &= ~(uint32_t)a2;
      ++v2;
    }
    while ( v2 != 32 );
  }
  else
  {
    *((uint8_t *)self + 48) = 0;
  }
  return result;
}


