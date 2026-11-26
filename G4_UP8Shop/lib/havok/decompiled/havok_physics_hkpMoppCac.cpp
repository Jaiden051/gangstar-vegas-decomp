#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMoppCac.h"

// ----------------------------------------------------------------------------
// Function: hkpMoppCachedShapeMediator::getPrimitiveProperties  (binary VA: 0x1b05c70)
// Original: hkpMoppCachedShapeMediator::getPrimitiveProperties
// ----------------------------------------------------------------------------
int hkpMoppCachedShapeMediator::getPrimitiveProperties(int a1, int a2, uint32_t *a3)
{
  *a3 = 0;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCachedShapeMediator::projectPrimitives  (binary VA: 0x1b05c90)
// Original: hkpMoppCachedShapeMediator::projectPrimitives
// ----------------------------------------------------------------------------
float * hkpMoppCachedShapeMediator::projectPrimitives(int a1, int a2, int a3, int a4, int a5, float *a6, float *a7)
{
  float *v7;
  int v8;
  float v9; // xmm3_4
  float v10; // xmm2_4
  int v11;
  int v12;
  float v13; // xmm1_4
  float v14; // xmm0_4

  v7 = (float *)a4;
  v8 = *(uint32_t *)(a1 + 8) + 108 * *(uint32_t *)(a4 + 4) + 8 * a3;
  v9 = *(float *)(v8 + 4);
  v10 = *(float *)(v8 + 8);
  *(float *)(a4 + 12) = v10;
  *(float *)(a4 + 8) = v9;
  if ( a5 > 1 )
  {
    do
    {
      v11 = *(uint32_t *)(a1 + 8) + 108 * *((uint32_t *)v7 + 6);
      v7 += 5;
      v12 = v11 + 8 * a3;
      v13 = *(float *)(v12 + 4);
      v14 = *(float *)(v12 + 8);
      v9 = fminf(v9, v13);
      v7[2] = v13;
      v10 = fmaxf(v10, v14);
      v7[3] = v14;
    }
    while ( v7 != (float *)(a4 + 20 * a5 - 20) );
  }
  *a6 = v9;
  *a7 = v10;
  return a7;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCachedShapeMediator::findExtents  (binary VA: 0x1b05d10)
// Original: hkpMoppCachedShapeMediator::findExtents
// ----------------------------------------------------------------------------
float * hkpMoppCachedShapeMediator::findExtents(int a1, int a2, int a3, int a4, int a5, float *a6, float *a7)
{
  int v7;
  int v8;
  float v9; // xmm1_4
  float v10; // xmm0_4
  uint32_t *v11;
  int v12;
  int v13;

  v7 = *(uint32_t *)(a1 + 8);
  v8 = v7 + 108 * *(uint32_t *)(a4 + 4) + 8 * a3;
  v9 = *(float *)(v8 + 4);
  v10 = *(float *)(v8 + 8);
  if ( a5 > 1 )
  {
    v11 = (uint32_t *)(a4 + 24);
    do
    {
      v12 = 108 * *v11;
      v11 += 5;
      v13 = v7 + v12 + 8 * a3;
      v9 = fminf(v9, *(float *)(v13 + 4));
      v10 = fmaxf(v10, *(float *)(v13 + 8));
    }
    while ( v11 != (uint32_t *)(a4 + 20 * a5 + 4) );
  }
  *a6 = v9;
  *a7 = v10;
  return a7;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCachedShapeMediator::getPrimitives  (binary VA: 0x1b05d80)
// Original: hkpMoppCachedShapeMediator::getPrimitives
// ----------------------------------------------------------------------------
int hkpMoppCachedShapeMediator::getPrimitives(int a1, int *a2)
{
  int v2;
  int result;
  int v5;

  v2 = 0;
  v5 = *(uint32_t *)(a1 + 24);
  result = (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 20) + 12))(*(uint32_t *)(a1 + 20));
  if ( v5 > 0 )
  {
    do
    {
      a2[1] = v2;
      *a2 = result;
      a2 += 5;
      ++v2;
      result = (*(int (**)(uint32_t, int))(**(uint32_t **)(a1 + 20) + 16))(*(uint32_t *)(a1 + 20), result);
    }
    while ( v2 != v5 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCachedShapeMediator::splitPrimitive  (binary VA: 0x1b05de0)
// Original: hkpMoppCachedShapeMediator::splitPrimitive
// ----------------------------------------------------------------------------
uint32_t * hkpMoppCachedShapeMediator::splitPrimitive(int a1, uint32_t *a2, int a3, int a4, int a5, uint32_t *a6)
{
  *a6 = *a2;
  a6[1] = a2[1];
  a6[2] = a2[2];
  a6[3] = a2[3];
  a6[4] = a2[4];
  return a6;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCachedShapeMediator::getNumPrimitives  (binary VA: 0x1b05e10)
// Original: hkpMoppCachedShapeMediator::getNumPrimitives
// ----------------------------------------------------------------------------
int hkpMoppCachedShapeMediator::getNumPrimitives(hkpMoppCachedShapeMediator::Self *self)
{
  return *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCachedShapeMediator::Destroy  (binary VA: 0x1b05e20)
// Original: hkpMoppCachedShapeMediator::~hkpMoppCachedShapeMediator
// ----------------------------------------------------------------------------
void hkpMoppCachedShapeMediator::Destroy(hkpMoppCachedShapeMediator::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B2328);
  v1 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 3) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      108 * (v1 & 0x3FFFFFFF));
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCachedShapeMediator::Destroy_ea1b05ea0  (binary VA: 0x1b05ea0)
// Original: hkpMoppCachedShapeMediator::~hkpMoppCachedShapeMediator
// ----------------------------------------------------------------------------
void hkpMoppCachedShapeMediator::Destroy_ea1b05ea0(hkpMoppCachedShapeMediator::Self *self)
{
  int v1;
  int v2;

  hkpMoppCachedShapeMediator::Destroy(self);
  v1 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCachedShapeMediator::Construct  (binary VA: 0x1b05f00)
// Original: hkpMoppCachedShapeMediator::hkpMoppCachedShapeMediator
// ----------------------------------------------------------------------------
void hkpMoppCachedShapeMediator::Construct(hkpMoppCachedShapeMediator::Self *self, const hkpShapeContainer::Self *a2)
{
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B2328);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 6) = G4_VCALL<int>(a2, 8);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppCachedShapeMediator::addConvexShape  (binary VA: 0x1b05f60)
// Original: hkpMoppCachedShapeMediator::addConvexShape
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * hkpMoppCachedShapeMediator::addConvexShape(uint32_t *a1, int a2, int a3, float *a4, int a5)
{
  hkLifoAllocator::Self *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  float v12; // xmm7_4
  float v13; // xmm5_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float *v17;
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  hkLifoAllocator::Self *result;
  int v22;
  int v23;
  signed int v24;
  hkLifoAllocator::Self **address;

  v23 = G4_VCALL<int>(a2, 52);
  address = (hkLifoAllocator::Self **)_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v5 = *address;
  v24 = (16 * v23 + 127) & 0xFFFFFF80;
  v6 = *((uint32_t *)*address + 3);
  if ( v24 <= *((uint32_t *)*address + 2) && (unsigned int)(v24 + v6) <= *((uint32_t *)v5 + 4) )
    *((uint32_t *)v5 + 3) = v24 + v6;
  else
    v6 = hkLifoAllocator::allocateFromNewSlab(v5, v24);
  G4_VCALL<void>(a2, 56, v6);
  v7 = a1[3];
  if ( v7 == (a1[4] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(a1 + 2),
      108,
      v22);
    v7 = a1[3];
  }
  v8 = v7;
  v9 = a1[2] + 108 * v7;
  a1[3] = v8 + 1;
  *(uint32_t *)v9 = a3;
  if ( a5 > 0 )
  {
    v11 = 0;
    do
    {
      if ( v23 <= 0 )
      {
        v16 = 0.0;
        v15 = 0.0;
      }
      else
      {
        v12 = a4[1];
        v13 = a4[2];
        v14 = *(float *)(v6 + 12);
        v15 = (float)((float)((float)(*(float *)v6 * *a4) + (float)(*(float *)(v6 + 4) * v12))
                    + (float)(*(float *)(v6 + 8) * v13))
            - v14;
        v16 = (float)((float)((float)(*(float *)v6 * *a4) + (float)(*(float *)(v6 + 4) * v12))
                    + (float)(*(float *)(v6 + 8) * v13))
            + v14;
        if ( v23 != 1 )
        {
          v17 = (float *)v6;
          do
          {
            v18 = v17[4];
            v17 += 4;
            v19 = (float)((float)(v18 * *a4) + (float)(v17[1] * v12)) + (float)(v17[2] * v13);
            v20 = v17[3];
            v15 = fminf(v19 - v20, v15);
            v16 = fmaxf(v20 + v19, v16);
          }
          while ( v17 != (float *)(16 * v23 + v6 - 16) );
        }
      }
      *(float *)(v9 + 4) = v15;
      ++v11;
      *(float *)(v9 + 8) = v16;
      a4 += 8;
      v9 += 8;
    }
    while ( v11 != a5 );
  }
  result = *address;
  if ( v24 > *((uint32_t *)*address + 2) || *((uint32_t *)result + 3) != v24 + v6 || v6 == *((uint32_t *)result + 5) )
    return hkLifoAllocator::slowBlockFree(result, (char *)v6, v24);
  *((uint32_t *)result + 3) = v6;
  return result;
}



// ============================================================================
// Address:   0x1b06180 (size: 208 bytes)
// Symbol:    _ZN26hkpMoppCachedShapeMediator27setSplittingPlaneDirectionsEPK30hkpMoppSplittingPlaneDirectioni
// Demangled: hkpMoppCachedShapeMediator::setSplittingPlaneDirections(hkpMoppSplittingPlaneDirection const*,int)
// ============================================================================

