#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpBvTreeS.h"

// ----------------------------------------------------------------------------
// Function: hkpBvTreeShape::Destroy  (binary VA: 0x1692ef0)
// Original: hkpBvTreeShape::~hkpBvTreeShape
// ----------------------------------------------------------------------------
void hkpBvTreeShape::Destroy(hkpBvTreeShape::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeShape::Destroy_ea1692f10  (binary VA: 0x1692f10)
// Original: hkpBvTreeShape::~hkpBvTreeShape
// ----------------------------------------------------------------------------
void hkpBvTreeShape::Destroy_ea1692f10(hkpBvTreeShape::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeShape::castAabbImpl  (binary VA: 0x1692f70)
// Original: hkpBvTreeShape::castAabbImpl
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * hkpBvTreeShape::castAabbImpl(hkpBvTreeShape::Self *self, const hkAabb::Self *a2, const hkVector4f::Self *a3, hkpAabbCastCollector::Self *a4, int a5, int a6, int a7, int a8, hkLifoAllocator::Self **a9, int a10, char *a11)
{
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm4_4
  float v16; // xmm7_4
  float v17; // xmm3_4
  float v18; // xmm5_4
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm5_4
  float v22; // xmm4_4
  hkLifoAllocator::Self *v23;
  int v24;
  int v25;
  char *v26;
  hkLifoAllocator::Self *result;
  int v29;
  int v31;
  int v44;
  hkpAabbCastCollector::Self *v45;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39[4];
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v32)) > _g4_s0 ? (0u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v33)) > _g4_s1 ? (4u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v34)) > _g4_s2 ? (8u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v35)) > _g4_s3 ? (16u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v36)) > _g4_s4 ? (20u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_address)) > _g4_s5 ? (36u + sizeof(_g4_t_address)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v38)) > _g4_s6 ? (44u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v39)) > _g4_s7 ? (48u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v40)) > _g4_s8 ? (64u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v41)) > _g4_s9 ? (68u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v42)) > _g4_s10 ? (72u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v43)) > _g4_s11 ? (76u + sizeof(_g4_t_v43)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 68u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 72u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 76u);

  v11 = *(float *)a2;
  v12 = *((float *)a2 + 4) + *(float *)a2;
  v13 = *((float *)a2 + 1);
  v14 = *((float *)a2 + 5);
  v40 = *((float *)a2 + 4);
  v15 = v14 + v13;
  v16 = *(float *)a3;
  v41 = *((float *)a2 + 5);
  v36 = v13;
  v17 = *((float *)a3 + 1);
  v42 = *((float *)a2 + 6);
  v18 = *((float *)a2 + 2);
  v19 = *((float *)a2 + 3);
  v43 = *((float *)a2 + 7);
  v35 = v18;
  v20 = v16 - (float)(v12 * 0.5);
  v38 = v17 - (float)(v15 * 0.5);
  v21 = *((float *)a3 + 2) - (float)((float)(*((float *)a2 + 6) + v18) * 0.5);
  v22 = *((float *)a3 + 3) - (float)((float)(*((float *)a2 + 7) + v19) * 0.5);
  v39[0] = fminf(v20, 0.0) + v11;
  v39[1] = fminf(v38, 0.0) + v36;
  v39[2] = fminf(v21, 0.0) + v35;
  v39[3] = fminf(v22, 0.0) + v19;
  v40 = fmaxf(v20, 0.0) + v40;
  v41 = fmaxf(v38, 0.0) + v41;
  v42 = fmaxf(v21, 0.0) + v42;
  v43 = fmaxf(v22, 0.0) + v43;
  address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v23 = *address;
  v24 = *((uint32_t *)*address + 3);
  if ( *((int *)*address + 2) > 0x1FFF && (unsigned int)(v24 + 0x2000) <= *((uint32_t *)v23 + 4) )
    *((uint32_t *)v23 + 3) = v24 + 0x2000;
  else
    v24 = hkLifoAllocator::allocateFromNewSlab(v23, 0x2000);
  v25 = G4_VCALL<int>(self, 84, v39, v24, 2048, v32, v33, v34, COERCE_FLOAT(LODWORD(v19)), COERCE_FLOAT(LODWORD(v35)), COERCE_FLOAT(LODWORD(v36)), COERCE_FLOAT(LODWORD(v11)), 0, 0, address, 0, v24);
  v26 = a11;
  if ( v25 > 2047 )
  {
    v44 = 2048;
LABEL_11:
    v29 = 0;
    do
    {
      v31 = *(uint32_t *)&a11[4 * v29];
      v45 = a4;
      ++v29;
      (**(void (***)(hkpAabbCastCollector::Self *, int))a4)(a4, v31);
      a4 = v45;
    }
    while ( v44 > v29 );
    v26 = a11;
    goto LABEL_7;
  }
  if ( v25 != 0 )
  {
    v44 = v25;
    if ( v25 > 0 )
      goto LABEL_11;
  }
LABEL_7:
  result = *a9;
  if ( *((int *)*a9 + 2) <= 0x1FFF || *((char **)result + 3) != v26 + 0x2000 || v26 == *((char **)result + 5) )
    return hkLifoAllocator::slowBlockFree(result, v26, 0x2000);
  *((uint32_t *)result + 3) = (uint32_t)(uintptr_t)(v26);
  return result;
}



// ============================================================================
// Address:   0x1693230 (size: 69 bytes)
// Symbol:    _ZN14hkpBvTreeShapeC2E24hkFinishLoadedObjectFlag
// Demangled: hkpBvTreeShape::hkpBvTreeShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN14hkpBvTreeShapeC1E24hkFinishLoadedObjectFlag'
void (**hkpBvTreeShape::hkpBvTreeShape(int a1, int a2))(hkpBvTreeShape::Self * self)
{
  void (**result)(hkpBvTreeShape::Self *);

  hkpShape::hkpShape(a1, a2);
  result = (void (**)(hkpBvTreeShape::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2099248));
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2099248);
  if ( a2 != 0 )
  {
    *(uint8_t *)(a1 + 8) = 22;
    *(uint8_t *)(a1 + 16) = 4;
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: hkpBvTreeShape::staticClass  (binary VA: 0x1696b90)
// Original: hkpBvTreeShape::staticClass
// ----------------------------------------------------------------------------
void * hkpBvTreeShape::staticClass()
{
  return &hkpBvTreeShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeStreamAgent::getPenetrations  (binary VA: 0x169be70)
// Original: hkpBvTreeStreamAgent::getPenetrations
// ----------------------------------------------------------------------------
int hkpBvTreeStreamAgent::getPenetrations(int a1, int a2, int a3, int a4, int a5)
{
  return hkpBvTreeAgent::staticGetPenetrations(a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeStreamAgent::getClosestPoints  (binary VA: 0x169bf70)
// Original: hkpBvTreeStreamAgent::getClosestPoints
// ----------------------------------------------------------------------------
int hkpBvTreeStreamAgent::getClosestPoints(int a1, int a2, int a3, int a4, int a5)
{
  return hkpBvTreeAgent::staticGetClosestPoints(a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeStreamAgent::linearCast  (binary VA: 0x169c070)
// Original: hkpBvTreeStreamAgent::linearCast
// ----------------------------------------------------------------------------
int hkpBvTreeStreamAgent::linearCast(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return hkpBvTreeAgent::staticLinearCast(a2, a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeStreamAgent::cleanup  (binary VA: 0x169c480)
// Original: hkpBvTreeStreamAgent::cleanup
// ----------------------------------------------------------------------------
int hkpBvTreeStreamAgent::cleanup(hkpBvTreeStreamAgent::Self *self, hkpConstraintOwner::Self *a2)
{
  hkAgent1nMachine_Destroy((char *)self + 48, *((uint32_t *)self + 3), *((uint32_t *)self + 2), a2);
  return G4_VCALL<int>(self, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeStreamAgent::updateShapeCollectionFilter  (binary VA: 0x169c4d0)
// Original: hkpBvTreeStreamAgent::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
int hkpBvTreeStreamAgent::updateShapeCollectionFilter(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5)
{
  uint32_t v6[11];

  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  v6[3] = G4_VCALL<int>(*a3, 64);
  v6[0] = a2;
  v6[4] = a4;
  v6[5] = a1[2];
  v6[1] = (uint32_t)(uintptr_t)(a3);
  v6[6] = a5;
  return hkAgent1nMachine_UpdateShapeCollectionFilter(a1 + 12, v6);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeStreamAgent::invalidateTim  (binary VA: 0x169c5c0)
// Original: hkpBvTreeStreamAgent::invalidateTim
// ----------------------------------------------------------------------------
int hkpBvTreeStreamAgent::invalidateTim(int a1, int a2)
{
  return hkAgent1nMachine_InvalidateTim(a1 + 48, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeStreamAgent::warpTime  (binary VA: 0x169c5f0)
// Original: hkpBvTreeStreamAgent::warpTime
// ----------------------------------------------------------------------------
int hkpBvTreeStreamAgent::warpTime(int a1, int64_t a2, int a3)
{
  return hkAgent1nMachine_WarpTime(a1 + 48, a2, HIDWORD(a2), a3);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeStreamAgent::Destroy  (binary VA: 0x169c900)
// Original: hkpBvTreeStreamAgent::~hkpBvTreeStreamAgent
// ----------------------------------------------------------------------------
void hkpBvTreeStreamAgent::Destroy(hkpBvTreeStreamAgent::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2099CE8);
  v1 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 13) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 12),
      4 * v1);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeStreamAgent::Destroy_ea169cb30  (binary VA: 0x169cb30)
// Original: hkpBvTreeStreamAgent::~hkpBvTreeStreamAgent
// ----------------------------------------------------------------------------
void hkpBvTreeStreamAgent::Destroy_ea169cb30(hkpBvTreeStreamAgent::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2099CE8);
  v1 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 13) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 12),
      4 * v1);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 64;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeStreamAgent::Construct  (binary VA: 0x169cf10)
// Original: hkpBvTreeStreamAgent::hkpBvTreeStreamAgent
// ----------------------------------------------------------------------------
int hkpBvTreeStreamAgent::Construct(uint32_t *a1, int a2, int a3, int *a4, int a5)
{
  int v5;

  a1[2] = a5;
  a1[1] = -65535;
  *a1 = ((uint32_t)(uintptr_t)&off_2099CE8);
  a1[12] = 0;
  a1[13] = 0;
  a1[14] = 0x80000000;
  v5 = *a4;
  a1[4] = 0;
  a1[3] = v5;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  return hkAgent1nMachine_Create(a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeStreamAgent::createShapeBvAgent  (binary VA: 0x169cfa0)
// Original: hkpBvTreeStreamAgent::createShapeBvAgent
// ----------------------------------------------------------------------------
uint32_t * hkpBvTreeStreamAgent::createShapeBvAgent(int a1, int a2, int *a3, int a4)
{
  int address;
  uint32_t *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   64);
  hkpBvTreeStreamAgent::Construct(v5, a1, a2, a3, a4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeStreamAgent::dispatchConvexListBvTree  (binary VA: 0x169d010)
// Original: hkpBvTreeStreamAgent::dispatchConvexListBvTree
// ----------------------------------------------------------------------------
uint32_t * hkpBvTreeStreamAgent::dispatchConvexListBvTree(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  int address;
  int v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;

  if ( a4 != 0 )
  {
    v4 = (*(int (**)(uint32_t, int, int, int))(**(uint32_t **)(a3 + 20) + 20))(*(uint32_t *)(a3 + 20), a1, a2, a3);
    if ( v4 == 1 )
    {
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v10 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
              *(uint32_t *)(*(uint32_t *)address + 44),
              56);
      hkpShapeCollectionAgent::Construct(v10, a1, a2, a3, a4);
      return (uint32_t *)v10;
    }
    else if ( v4 == 2 || v4 == 0 )
    {
      v6 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v9 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v6 + 44) + 8))(
                       *(uint32_t *)(*(uint32_t *)v6 + 44),
                       64);
      hkpBvTreeStreamAgent::Construct(v9, a1, a2, (int *)a3, a4);
      return v9;
    }
    else
    {
      return nullptr;
    }
  }
  else
  {
    v8 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v11 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v8 + 44) + 8))(
                      *(uint32_t *)(*(uint32_t *)v8 + 44),
                      64);
    hkpBvTreeStreamAgent::Construct(v11, a2, a1, (int *)a3, 0);
    *v11 = ((uint32_t)(uintptr_t)&off_2099BC8);
    return v11;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeStreamAgent::createBvTreeShapeAgent  (binary VA: 0x169d170)
// Original: hkpBvTreeStreamAgent::createBvTreeShapeAgent
// ----------------------------------------------------------------------------
uint32_t * hkpBvTreeStreamAgent::createBvTreeShapeAgent(int a1, int a2, int *a3, int a4)
{
  int address;
  uint32_t *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   64);
  hkpBvTreeStreamAgent::Construct(v5, a2, a1, a3, a4);
  *v5 = ((uint32_t)(uintptr_t)&off_2099BC8);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeStreamAgent::dispatchBvTreeConvexList  (binary VA: 0x169d1f0)
// Original: hkpBvTreeStreamAgent::dispatchBvTreeConvexList
// ----------------------------------------------------------------------------
uint32_t * hkpBvTreeStreamAgent::dispatchBvTreeConvexList(int a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  uint32_t *v7;
  int v8;
  int address;
  int v10;
  int v11;
  int *v12;
  int v13;
  uint32_t *v14;
  uint32_t *v15;

  if ( a4 == 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v7 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                     *(uint32_t *)(*(uint32_t *)address + 44),
                     64);
    v13 = 0;
    v12 = (int *)a3;
    v11 = a1;
    v10 = a2;
LABEL_7:
    v14 = v7;
    hkpBvTreeStreamAgent::Construct(v7, v10, v11, v12, v13);
    *v14 = ((uint32_t)(uintptr_t)&off_2099BC8);
    return v14;
  }
  v4 = (*(int (**)(uint32_t, int, int, int))(**(uint32_t **)(a3 + 20) + 20))(*(uint32_t *)(a3 + 20), a2, a1, a3);
  if ( v4 != 1 )
  {
    if ( v4 != 2 && v4 != 0 )
      return nullptr;
    v6 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v7 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v6 + 44) + 8))(
                     *(uint32_t *)(*(uint32_t *)v6 + 44),
                     64);
    v13 = a4;
    v12 = (int *)a3;
    v11 = a1;
    v10 = a2;
    goto LABEL_7;
  }
  v8 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v15 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v8 + 44) + 8))(
                    *(uint32_t *)(*(uint32_t *)v8 + 44),
                    56);
  hkpShapeCollectionAgent::Construct(v15, a2, a1, a3, a4);
  *v15 = ((uint32_t)(uintptr_t)&off_2099C88);
  return v15;
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeStreamAgent::registerAgent  (binary VA: 0x169d350)
// Original: hkpBvTreeStreamAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpBvTreeStreamAgent::registerAgent(hkpBvTreeStreamAgent::Self *self)
{
  uint32_t v2[11];

  v2[0] = (uint32_t)(uintptr_t)(hkpBvTreeStreamAgent::createBvTreeShapeAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::staticGetClosestPoints);
  v2[3] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::staticLinearCast);
  LOWORD(v2[4]) = 257;
  hkpCollisionDispatcher::registerCollisionAgent(self, v2, 22, 23);
  hkpCollisionDispatcher::registerCollisionAgent(self, v2, 7, 23);
  v2[0] = (uint32_t)(uintptr_t)(hkpBvTreeStreamAgent::createShapeBvAgent);
  v2[1] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetPenetrations));
  v2[2] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetClosestPoints));
  v2[3] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int, int))hkpBvTreeAgent::staticLinearCast));
  LOWORD(v2[4]) = 256;
  hkpCollisionDispatcher::registerCollisionAgent(self, v2, 23, 22);
  return hkpCollisionDispatcher::registerCollisionAgent(self, v2, 23, 7);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeStreamAgent::registerConvexListAgent  (binary VA: 0x169d450)
// Original: hkpBvTreeStreamAgent::registerConvexListAgent
// ----------------------------------------------------------------------------
int hkpBvTreeStreamAgent::registerConvexListAgent(hkpBvTreeStreamAgent::Self *self)
{
  uint32_t v2[11];

  v2[0] = (uint32_t)(uintptr_t)(hkpBvTreeStreamAgent::dispatchBvTreeConvexList);
  v2[1] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::staticGetClosestPoints);
  v2[3] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::staticLinearCast);
  LOWORD(v2[4]) = 257;
  hkpCollisionDispatcher::registerCollisionAgent(self, v2, 22, 26);
  hkpCollisionDispatcher::registerCollisionAgent(self, v2, 7, 26);
  v2[0] = (uint32_t)(uintptr_t)(hkpBvTreeStreamAgent::dispatchConvexListBvTree);
  v2[1] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetPenetrations));
  v2[2] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetClosestPoints));
  v2[3] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int, int))hkpBvTreeAgent::staticLinearCast));
  LOWORD(v2[4]) = 256;
  hkpCollisionDispatcher::registerCollisionAgent(self, v2, 26, 22);
  return hkpCollisionDispatcher::registerCollisionAgent(self, v2, 26, 7);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeStreamAgent::registerMultiRayAgent  (binary VA: 0x169d550)
// Original: hkpBvTreeStreamAgent::registerMultiRayAgent
// ----------------------------------------------------------------------------
int hkpBvTreeStreamAgent::registerMultiRayAgent(hkpBvTreeStreamAgent::Self *self)
{
  uint32_t v2[11];

  v2[0] = (uint32_t)(uintptr_t)(hkpBvTreeStreamAgent::createBvTreeShapeAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::staticGetClosestPoints);
  v2[3] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::staticLinearCast);
  LOWORD(v2[4]) = 257;
  hkpCollisionDispatcher::registerCollisionAgent(self, v2, 22, 33);
  hkpCollisionDispatcher::registerCollisionAgent(self, v2, 7, 33);
  v2[0] = (uint32_t)(uintptr_t)(hkpBvTreeStreamAgent::createShapeBvAgent);
  v2[1] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetPenetrations));
  v2[2] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetClosestPoints));
  v2[3] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int, int))hkpBvTreeAgent::staticLinearCast));
  LOWORD(v2[4]) = 256;
  hkpCollisionDispatcher::registerCollisionAgent(self, v2, 33, 22);
  return hkpCollisionDispatcher::registerCollisionAgent(self, v2, 33, 7);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeStreamAgent::processCollision  (binary VA: 0x169d650)
// Original: hkpBvTreeStreamAgent::processCollision
// ----------------------------------------------------------------------------
int hkpBvTreeStreamAgent::processCollision(__m128 *a1, uint32_t *a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, float *a15, float a16, float a17, int a18, int *a19, float a20, float a21, float a22, int a23, float a24, int a25, int a26, int a27, float a28, float a29, float a30, float a31, float a32, float a33, float a34, float a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52)
{
  uint8_t STACK[1144] = {0};
  int *address;
  int v53;
  uint32_t *v54;
  uint64_t v55; // rax
  float *v56;
  float v57; // xmm3_4
  float v58; // xmm7_4
  float *v59;
  float v60; // xmm6_4
  float v61; // xmm7_4
  float v62; // xmm0_4
  float v63; // xmm4_4
  float v64; // xmm5_4
  float v65; // xmm1_4
  float v66; // xmm7_4
  float v67; // xmm2_4
  float v68; // xmm6_4
  float v69; // xmm0_4
  float v70; // xmm6_4
  int v71;
  float v72; // xmm4_4
  float *v73;
  float v74; // xmm1_4
  float v75; // xmm6_4
  float v76; // xmm0_4
  float v77; // xmm5_4
  float v78; // xmm4_4
  float v79; // xmm3_4
  float v80; // xmm6_4
  float v81; // xmm6_4
  float v82; // xmm5_4
  float v83; // xmm1_4
  float v84; // xmm7_4
  __m128 v85;
  float v86; // xmm3_4
  float v87; // xmm3_4
  __m128 v88;
  __m128 v89;
  float v90; // xmm3_4
  float v91; // xmm6_4
  float v92; // xmm1_4
  __m128i v93;
  __m128i v94;
  __m128i v95;
  __m128i v96;
  __m128i v97;
  int v98;
  float v99; // xmm0_4
  int v100;
  float v101; // xmm4_4
  __m128i v102;
  unsigned int v103;
  float v104; // xmm4_4
  float v105; // xmm4_4
  __m128i v106;
  unsigned int v107;
  unsigned int v108;
  unsigned int v109;
  __m128 v110;
  __m128 v111;
  __m128 v112;
  __m128 v113;
  __m128 v114;
  __m128i v115;
  __m128 m128i_i128;
  __m128i v117;
  __m128 v118;
  unsigned int v119;
  __m128 v120;
  int32_t v121;
  int v122;
  uint32_t *v123;
  uint64_t v124; // rax
  signed int v125;
  int v126;
  int Instance;
  unsigned int v128;
  int v129;
  int v130;
  int v131;
  uint32_t *v132;
  uint64_t v133; // rax
  int result;
  int v135;
  uint32_t *v136;
  uint64_t v137; // rax
  unsigned int savedregs;
  float retaddr;
  float v144;
  float v145;
  float v146;
  float v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float v152;
  float v153;
  float v154;
  float v155;
  float v156;
  float v157;
  float v158;
  float v159;
  float v160;
  float v161;
  float v162;
  float v163;
  float v164;
  unsigned int v165;
  unsigned int v166;
  float v167;
  float v168;
  unsigned int v169;
  float v170;
  int v171;
  __m128 v172;
  typedef uint8_t _g4_t_v138[32];
  typedef float _g4_t_v139[24];
  typedef float _g4_t_v140[27];
  typedef int _g4_t_v141;
  enum : size_t {
    _g4_s0 = 832u,
    _g4_s1 = (0u + sizeof(_g4_t_v138)) > _g4_s0 ? (0u + sizeof(_g4_t_v138)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v139)) > _g4_s1 ? (32u + sizeof(_g4_t_v139)) : _g4_s1,
    _g4_s3 = (128u + sizeof(_g4_t_v140)) > _g4_s2 ? (128u + sizeof(_g4_t_v140)) : _g4_s2,
    _g4_s4 = (236u + sizeof(_g4_t_v141)) > _g4_s3 ? (236u + sizeof(_g4_t_v141)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 0u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 32u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 128u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 236u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v53 = *address;
  v54 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v54) < *(uint32_t *)(*address + 12) )
  {
    *v54 = (uint32_t)(uintptr_t)("LtBvTree3");
    v54[3] = (uint32_t)(uintptr_t)("StQueryTree");
    v55 = __rdtsc();
    v54[1] = v55;
    *(uint32_t *)(v53 + 4) = (uint32_t)(uintptr_t)(v54 + 4);
  }
  LODWORD(v139[16]) = (uint32_t)(uintptr_t)(a2);
  v139[17] = a3;
  v139[20] =g4_m128_lane<float>(*(a1), 2);
  v139[19] = a4;
  v56 = *(float **)(LODWORD(a3) + 8);
  v57 = v56[22];
  v58 = *(float *)(LODWORD(a4) + 88);
  v139[18] = 0.0;
  v59 = (float *)a2[2];
  v60 = v59[23] * v58;
  v61 = v58 * v56[23];
  v62 = (float)((float)(v59[18] - v59[22]) * v60) + (float)((float)(v57 - v56[18]) * v61);
  v63 = (float)(v56[21] - v56[17]) * v61;
  v64 = (float)(v56[20] - v56[16]) * v61;
  v65 = (float)(v59[17] - v59[21]) * v60;
  v66 = v61 * v56[39];
  v67 = (float)(v59[16] - v59[20]) * v60;
  v68 = v60 * v59[39];
  v140[22] = v62;
  v69 = v56[40];
  v70 = v68 * v59[40];
  v140[21] = v65 + v63;
  v140[20] = v67 + v64;
  v140[23] = (float)(v69 * v66) + v70;
  hkTransformf::setMulInverseMul((hkTransformf::Self *)v140, (const hkTransformf::Self *)v59, (const hkTransformf::Self *)v56);
  LODWORD(v140[24]) = (uint32_t)(uintptr_t)(&v141);
  LODWORD(v140[26]) = -2147483520;
  v141 = -1;
  LODWORD(v140[25]) = 1;
  hkTransformf::setInverse((hkTransformf::Self *)v139, (const hkTransformf::Self *)v140);
  v71 = *(uint32_t *)(LODWORD(a3) + 8);
  v72 = *(float *)(LODWORD(a4) + 12) * 0.5;
  if ( *(uint32_t *)(*(uint32_t *)(LODWORD(a4) + 96) + 16) != 0 )
  {
    G4_VCALL<void>(*a2, 24, v139, (float)((float)((float)(*(float *)(v71 + 156) + *(float *)(a2[2] + 156)) * *(float *)(a2[2] + 160))
            + (float)((float)(*(float *)(v71 + 156) * *(float *)(v71 + 156)) * *(float *)(v71 + 160)))
    + v72, v138);
    v73 = *(float **)(LODWORD(a3) + 8);
    v74 = (float)(a16 + a20) + a17;
    v75 = a15[20] - v73[12];
    v76 = a15[21] - v73[13];
    v77 = a15[22] - v73[14];
    v78 = (float)((float)(*v73 * v75) + (float)(v73[1] * v76)) + (float)(v73[2] * v77);
    v79 = (float)((float)(v73[4] * v75) + (float)(v73[5] * v76)) + (float)(v73[6] * v77);
    v80 = (float)((float)(v75 * v73[8]) + (float)(v76 * v73[9])) + (float)(v77 * v73[10]);
    v159 = fmaxf(a28, v78 - v74);
    v157 = fmaxf(a29, v79 - v74);
    v155 = fmaxf(a30, v80 - v74);
    v163 = fmaxf(a31, v80);
    v149 = fminf(a32, v74 + v78);
    v161 = fminf(a35, v80 + 0.0);
    v147 = fminf(a33, v74 + v79);
    v145 = fminf(a34, v74 + v80);
    v151 = v161 - v163;
    v154 = v149 - v159;
    v153 = v147 - v157;
    v152 = v145 - v155;
    if ( *(float *)(v71 + 156) <= 0.0 )
    {
      v168 = a24;
g4_m128_raw(v89) = LODWORD(a24);
    }
    else
    {
      v81 = v80 - *(float *)(v71 + 136);
      v82 = *(float *)(v71 + 152);
      v83 = *(float *)(v71 + 92) * *(float *)(LODWORD(a4) + 88);
      v84 = v79 - *(float *)(v71 + 132);
      v167 = v78 - *(float *)(v71 + 128);
      v144 = *(float *)(v71 + 144);
g4_m128_raw(v85) = *(unsigned int *)(v71 + 148);
      v86 = a22 + (float)((float)((float)(v84 * v82) - (float)(v81 *g4_m128_lane<float>(v85, 0))) * v83);
g4_m128_lane<float>(v85, 0) =g4_m128_lane<float>(v85, 0) * v167;
      a22 = v86;
      v87 = v144 * v84;
      v88 = v85;
      a21 = (float)((float)((float)(v81 * v144) - (float)(v82 * v167)) * v83) + a21;
g4_m128_lane<float>(v88, 0) = (float)((float)(g4_m128_lane<float>(v85, 0) - v87) * v83) + a24;
      a24 = (float)(v83 * 0.0) + a24;
      v168 =g4_m128_lane<float>(v88, 0);
      v89 = v88;
    }
    a3 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(g4_m128_from<__m128>(0LL), g4_m128_from<__m128>(LODWORD(a24))), g4_m128_from<__m128>(LODWORD(a24))), 0);
    a5 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(g4_m128_from<__m128>(0LL), v89), v89), 0);
    v90 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(g4_m128_from<__m128>(LODWORD(v168)), g4_m128_from<__m128>(0LL)), g4_m128_from<__m128>(LODWORD(v168))), 0) + v145;
    v162 = fmaxf(0.0, a24) + v161;
    v91 = v147 +g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(g4_m128_from<__m128>(LODWORD(a21)), g4_m128_from<__m128>(0LL)), g4_m128_from<__m128>(LODWORD(a21))), 0);
    v92 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(g4_m128_from<__m128>(LODWORD(a22)), g4_m128_from<__m128>(0LL)), g4_m128_from<__m128>(LODWORD(a22))), 0) + v149;
    v164 = v163 + a3;
g4_m128_raw(v93) = LODWORD(v157);
    *(float *)g4_m128_ptr<int32_t>(v93) = v157
                            +g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(g4_m128_from<__m128>(0LL), g4_m128_from<__m128>(LODWORD(a21))), g4_m128_from<__m128>(LODWORD(a21))), 0);
g4_m128_raw(v94) = LODWORD(v155);
    *(float *)g4_m128_ptr<int32_t>(v94) = v155 + a5;
    v95 = v93;
g4_m128_raw(v96) = LODWORD(v159);
    *(float *)g4_m128_ptr<int32_t>(v96) = v159
                            +g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(g4_m128_from<__m128>(0LL), g4_m128_from<__m128>(LODWORD(a22))), g4_m128_from<__m128>(LODWORD(a22))), 0);
    v97 = v96;
  }
  else
  {
    G4_VCALL<void>(*a2, 24, v139, COERCE_FLOAT(LODWORD(v72)), v138);
    v92 = a32;
g4_m128_raw(v97) = LODWORD(a28);
    v90 = a34;
g4_m128_raw(v94) = LODWORD(a30);
    v154 = a32 - a28;
    v162 = a35;
    v164 = a31;
    v153 = a33 - a29;
    v152 = a34 - a30;
g4_m128_raw(v95) = LODWORD(a29);
    v168 = a24;
    v151 = a35 - a31;
    v91 = a33;
  }
  LOBYTE(v98) = *(float *)g4_m128_ptr<int32_t>(v94) >=g4_m128_lane<float>(a1[1], 2) ? 4 : 0;
  if ( v164 >=g4_m128_lane<float>(a1[1], 3) )
    v98 = *(float *)g4_m128_ptr<int32_t>(v94) <g4_m128_lane<float>(a1[1], 2) ? 8 : 12;
  v99 =g4_m128_lane<float>(a1[2], 2);
  v100 = v99 < v90 ? 0 : 4;
  if (g4_m128_lane<float>(a1[2], 3) >= v162 )
    v100 = v99 < v90 ? 8 : 12;
  if ( ((v100 | (g4_m128_lane<float>(a1[2], 0) >= v92) | (g4_m128_lane<float>(a1[2], 1) >= v91 ? 2 : 0))
      & (v98 & 7
       | (*(float *)g4_m128_ptr<int32_t>(v97) >=g4_m128_lane<float>(a1[1], 0))
       | (*(float *)g4_m128_ptr<int32_t>(v95) >=g4_m128_lane<float>(a1[1], 1) ? 2 : 0))) != 7 )
  {
    v160 = -0.0;
    if ( a22 <= 0.0 )
      v160 = a22 * -2.0;
    v158 = -0.0;
    if ( a21 <= 0.0 )
      v158 = a21 * -2.0;
    v156 = -0.0;
    if ( v168 <= 0.0 )
      v156 = v168 * -2.0;
    v150 = -0.0;
    if ( a24 <= 0.0 )
    {
      v150 = a24 * -2.0;
      v101 = a22;
      if ( a22 >= 0.0 )
      {
LABEL_21:
        v148 = v101 * -2.0;
g4_m128_raw(v102) = LODWORD(a21);
        if ( a21 >= 0.0 )
          goto LABEL_22;
        goto LABEL_44;
      }
    }
    else
    {
      v101 = a22;
      if ( a22 >= 0.0 )
        goto LABEL_21;
    }
    v148 = -0.0;
g4_m128_raw(v102) = LODWORD(a21);
    if ( a21 >= 0.0 )
    {
LABEL_22:
      *(float *)g4_m128_ptr<int32_t>(v102) = *(float *)g4_m128_ptr<int32_t>(v102) * -2.0;
      v103 = _mm_cvtsi128_si32(v102);
      v104 = v168;
      if ( v168 >= 0.0 )
        goto LABEL_23;
      goto LABEL_45;
    }
LABEL_44:
    v104 = v168;
    v103 = 0x80000000;
    if ( v168 >= 0.0 )
    {
LABEL_23:
      v146 = v104 * -2.0;
      v105 = a24;
      if ( a24 >= 0.0 )
      {
LABEL_24:
        v170 = v105 * -2.0;
LABEL_25:
        v106 = v97;
        *(float *)g4_m128_ptr<int32_t>(v106) = *(float *)g4_m128_ptr<int32_t>(v97) - a20;
        *(float *)g4_m128_ptr<int32_t>(v95) = *(float *)g4_m128_ptr<int32_t>(v95) - a20;
        *(float *)g4_m128_ptr<int32_t>(v94) = *(float *)g4_m128_ptr<int32_t>(v94) - a20;
        *(float *)&v169 = v92 + a20;
        v107 = _mm_cvtsi128_si32(v106);
        v108 = _mm_cvtsi128_si32(v95);
        v109 = _mm_cvtsi128_si32(v94);
        *(float *)&v165 = v90 + a20;
        *(float *)&v166 = v91 + a20;
g4_m128_raw(v110) = LODWORD(v158);
g4_m128_lane<float>(v110, 0) = fminf(v158, v153 * 0.4f);
g4_m128_raw(v111) = LODWORD(v150);
g4_m128_lane<float>(v111, 0) = fminf(v150, 0.4f * v151);
g4_m128_raw(v112) = LODWORD(v156);
g4_m128_lane<float>(v112, 0) = fminf(v156, v152 * 0.4f);
g4_m128_raw(v113) = LODWORD(v148);
g4_m128_lane<float>(v113, 0) = fmaxf(v148, -(float)(v154 * 0.4f));
        v114 = v113;
        v115 = _mm_cvtsi32_si128(v103);
        *(float *)g4_m128_ptr<int32_t>(v115) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v115), -(float)(v153 * 0.4f));
        m128i_i128 =g4_m128_raw(G4_BITCAST<__m128>(v115));
g4_m128_raw(v117) = LODWORD(v146);
g4_m128_lane<uint64_t>(v114, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v114, m128i_i128), 0);
        *(float *)g4_m128_ptr<int32_t>(v117) = fmaxf(v146, -(float)(v152 * 0.4f));
g4_m128_raw(v118) = LODWORD(v170);
g4_m128_lane<float>(v118, 0) = fmaxf(v170, -(float)(0.4f * v151));
        v119 = _mm_cvtsi128_si32(v117);
g4_m128_lane<int64_t>(v117, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(v109)), v118), 0);
g4_m128_lane<uint64_t>(v118, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(v107)), g4_m128_from<__m128>(_mm_cvtsi32_si128(v108))), 0);
g4_m128_lane<uint64_t>(v118, 1) =g4_m128_lane<int64_t>(v117, 0);
g4_m128_lane<uint64_t>(v114, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(v119)), g4_m128_from<__m128>(LODWORD(v164))), 0);
        v120 = _mm_add_ps(v114, v118);
        v121 =g4_m128_lane<int32_t>(v120, 0);
        v172 = v120;
g4_m128_lane<uint64_t>(v120, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(G4_BITCAST<__m128>(v169), G4_BITCAST<__m128>(v166)), 0);
g4_m128_lane<uint64_t>(v120, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(G4_BITCAST<__m128>(v165), g4_m128_from<__m128>(COERCE_UNSIGNED_INT(v162 + 0.0))), 0);
g4_m128_lane<uint64_t>(v110, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(COERCE_UNSIGNED_INT(fminf(v160, v154 * 0.4f))), v110), 0);
g4_m128_lane<uint64_t>(v110, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v112, v111), 0);
g4_m128_lane<uint64_t>(a1[1], 0) = __PAIR64__(g4_m128_lane<uint32_t>(v172, 1), v121);
g4_m128_lane<uint64_t>(a1[1], 1) =g4_m128_lane<uint64_t>(v172, 1);
        a1[2] = _mm_add_ps(v110, v120);
        (*(void (**)(uint32_t, int, unsigned int *))(**(uint32_t **)LODWORD(a3) + 76))(
          *(uint32_t *)LODWORD(a3),
          a9,
          (unsigned int *)(&STACK[0x430]));
        v171 = 0;
        goto LABEL_26;
      }
LABEL_46:
      v170 = -0.0;
      goto LABEL_25;
    }
LABEL_45:
    v146 = -0.0;
    v105 = a24;
    if ( a24 >= 0.0 )
      goto LABEL_24;
    goto LABEL_46;
  }
  v171 = 1;
LABEL_26:
  v122 = *a19;
  v123 = *(uint32_t **)(*a19 + 4);
  if ( (unsigned int)(uintptr_t)(v123) < *(uint32_t *)(*a19 + 12) )
  {
    *v123 = (uint32_t)(uintptr_t)("StNarrow");
    v124 = __rdtsc();
    v123[1] = v124;
    *(uint32_t *)(v122 + 4) = (uint32_t)(uintptr_t)(v123 + 3);
  }
  if ( v171 != 0 )
  {
    v130 = (*(int (**)(uint32_t))(**(uint32_t **)LODWORD(a3) + 64))(*(uint32_t *)LODWORD(a3));
    savedregs = 0;
    retaddr = a5;
LABEL_35:
    hkAgent1nMachine_Process(&a1[3], &a52, v130, savedregs);
    v131 = *a19;
    v132 = *(uint32_t **)(*a19 + 4);
    if ( (unsigned int)(uintptr_t)(v132) < *(uint32_t *)(*a19 + 12) )
    {
      *v132 = (uint32_t)(uintptr_t)("lt");
      v133 = __rdtsc();
      v132[1] = v133;
      *(uint32_t *)(v131 + 4) = (uint32_t)(uintptr_t)(v132 + 3);
    }
    goto LABEL_37;
  }
  v125 = STACK[0x434] + 3;
  if ( (STACK[0x434] & 0x80000000) == 0 )
    v125 = STACK[0x434];
  v126 = (v125 >> 2) + 1 -g4_m128_lane<int32_t>(a1[3], 1);
  Instance = hkMemorySystem::getInstance();
  if ( G4_VCALL<uint8_t>(Instance, 36, v126 << 9) != 0 )
  {
    v128 = STACK[0x434];
    v129 = STACK[0x430];
    if ( (int)STACK[0x434] > 1 )
    {
      LOBYTE(savedregs) = 0;
      hkAlgorithm::quickSortRecursive_unsigned_int_hkAlgorithm_24f5d6(v129, 0, v128 - 1);
    }
    v130 = (*(int (**)(uint32_t))(**(uint32_t **)LODWORD(a3) + 64))(*(uint32_t *)LODWORD(a3));
    retaddr = a5;
    savedregs = STACK[0x430];
    goto LABEL_35;
  }
  hkSetOutOfMemoryState(1);
  v135 = *a19;
  v136 = *(uint32_t **)(*a19 + 4);
  if ( (unsigned int)(uintptr_t)(v136) < *(uint32_t *)(*a19 + 12) )
  {
    *v136 = (uint32_t)(uintptr_t)("lt");
    v137 = __rdtsc();
    v136[1] = v137;
    *(uint32_t *)(v135 + 4) = (uint32_t)(uintptr_t)(v136 + 3);
  }
LABEL_37:
  result = STACK[0x438];
  STACK[0x434] = 0;
  if ( result >= 0 )
    return (*(int (**)(uint32_t *, unsigned int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             STACK[0x430],
             4 * result);
  return result;
}


