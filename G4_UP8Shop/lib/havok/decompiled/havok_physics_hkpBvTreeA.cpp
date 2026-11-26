#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpBvTreeA.h"

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::cleanup  (binary VA: 0x170bcb0)
// Original: hkpBvTreeAgent::cleanup
// ----------------------------------------------------------------------------
int hkpBvTreeAgent::cleanup(hkpBvTreeAgent::Self *self, hkpConstraintOwner::Self *a2)
{
  hkpBvTreeAgent::Self *v2;
  int v3;
  int v4;
  int v5;

  v2 = self;
  v3 = *((uint32_t *)self + 3);
  v4 = v3 + 12 * *((uint32_t *)self + 4);
  if ( v3 != v4 )
  {
    do
    {
      v5 = *(uint32_t *)(v3 + 8);
      if ( v5 != 0 )
        G4_VCALL<void>(v5, 36, a2);
      v3 += 12;
    }
    while ( v3 != v4 );
    v2 = self;
  }
  return (*(int (**)(hkpBvTreeAgent::Self *))(*(uint32_t *)v2 + 4))(self);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::invalidateTim  (binary VA: 0x170bd10)
// Original: hkpBvTreeAgent::invalidateTim
// ----------------------------------------------------------------------------
int hkpBvTreeAgent::invalidateTim(int a1, int a2)
{
  int v2;
  int result;
  int i;

  v2 = *(uint32_t *)(a1 + 12);
  result = 3 * *(uint32_t *)(a1 + 16);
  for ( i = v2 + 12 * *(uint32_t *)(a1 + 16); v2 != i; v2 += 12 )
  {
    result = *(uint32_t *)(v2 + 8);
    if ( result != 0 )
      result = G4_VCALL<int>(result, 44, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::warpTime  (binary VA: 0x170bd60)
// Original: hkpBvTreeAgent::warpTime
// ----------------------------------------------------------------------------
int hkpBvTreeAgent::warpTime(int a1, int64_t a2, int a3)
{
  int v3;
  int result;
  int i;

  v3 = *(uint32_t *)(a1 + 12);
  result = 3 * *(uint32_t *)(a1 + 16);
  for ( i = v3 + 12 * *(uint32_t *)(a1 + 16); v3 != i; v3 += 12 )
  {
    result = *(uint32_t *)(v3 + 8);
    if ( result != 0 )
      result = G4_VCALL<int>(result, 48, a2, HIDWORD(a2), a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::LinearCastAabbCastCollector::addHit  (binary VA: 0x170bdc0)
// Original: hkpBvTreeAgent::LinearCastAabbCastCollector::addHit
// ----------------------------------------------------------------------------
float * hkpBvTreeAgent::LinearCastAabbCastCollector::addHit(hkpBvTreeAgent::LinearCastAabbCastCollector::Self *self, unsigned int a2)
{
  hkpBvTreeAgent::LinearCastAabbCastCollector::Self *v2;
  float *result;
  int *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int savedregs;
  void *retaddr;
  typedef int _g4_t_v9;
  typedef float *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef unsigned int _g4_t_v12;
  typedef char _g4_t_v13;
  typedef uint32_t _g4_t_v14[4];
  typedef uint32_t _g4_t_v15[134];
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v12)) > _g4_s3 ? (12u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (19u + sizeof(_g4_t_v13)) > _g4_s4 ? (19u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v14)) > _g4_s5 ? (20u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v15)) > _g4_s6 ? (36u + sizeof(_g4_t_v15)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 19u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);

  v15[131] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v12 = a2;
  result = (float *)(*(int (**)(uint32_t))(***((uint32_t ***)self + 3) + 64))(**((uint32_t **)self + 3));
  v11 = *((uint32_t *)v2 + 4);
  v4 = *(int **)(v11 + 16);
  if ( v4 != nullptr )
  {
    v10 = result;
    v9 = *v4;
    a2 = v12;
    self = (hkpBvTreeAgent::LinearCastAabbCastCollector::Self *)result;
    retaddr = *((void **)v2 + 3);
    savedregs = *((uint32_t *)v2 + 2);
    v15[133] = v11;
    v15[132] = (uint32_t)(uintptr_t)(v4);
    (*(void (**)(char *))(v9 + 28))(&v13);
    result = v10;
    if ( v13 != 0 )
    {
      v5 = G4_VCALL<int>(v10, 24, v12, v15);
      v6 = *((uint32_t *)v2 + 3);
      v14[1] = v12;
      v7 = *((uint32_t **)v2 + 4);
      v8 = *((uint32_t *)v2 + 2);
      v14[3] = v6;
      v14[0] = v5;
      v14[2] = *(uint32_t *)(v6 + 8);
      retaddr = *((void **)v2 + 6);
      (*(void (**)(int, uint32_t *, uint32_t *, uint32_t))(*v7
                                                           + 20
                                                           * *(uint8_t *)(*(uint8_t *)(v5 + 8)
                                                                                + *v7
                                                                                + 35
                                                                                * *(uint8_t *)(*(uint32_t *)v8 + 8)
                                                                                + 416)
                                                           + 2880))(
        v8,
        v14,
        v7,
        *((uint32_t *)v2 + 5));
      result = *((float **)v2 + 5);
      *((float *)v2 + 1) = fminf(*((float *)v2 + 1), result[1]);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::LinearCastAabbCastCollector::Destroy  (binary VA: 0x170bf30)
// Original: hkpBvTreeAgent::LinearCastAabbCastCollector::~LinearCastAabbCastCollector
// ----------------------------------------------------------------------------
void hkpBvTreeAgent::LinearCastAabbCastCollector::Destroy(hkpBvTreeAgent::LinearCastAabbCastCollector::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_209B900);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::updateShapeCollectionFilter  (binary VA: 0x170bf50)
// Original: hkpBvTreeAgent::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
uint32_t * hkpBvTreeAgent::updateShapeCollectionFilter(hkpNullAgent::Self *a1, int a2, uint32_t *a3, uint32_t *a4, int a5)
{
  hkpNullAgent::Self *v5;
  int v6;
  uint32_t *result;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v12;
  int *v13;
  int v14;
  hkpNullAgent::Self *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  void *retaddr;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef hkpNullAgent::Self *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef char _g4_t_v29;
  typedef uint32_t _g4_t_v30[4];
  typedef char _g4_t_v31;
  typedef hkpNullAgent::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef char *_g4_t_v34;
  enum : size_t {
    _g4_s0 = 672u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v21)) > _g4_s1 ? (8u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v22)) > _g4_s2 ? (12u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v23)) > _g4_s3 ? (24u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v24)) > _g4_s4 ? (28u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v25)) > _g4_s5 ? (32u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v26)) > _g4_s6 ? (36u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v27)) > _g4_s7 ? (40u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v28)) > _g4_s8 ? (40u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (47u + sizeof(_g4_t_v29)) > _g4_s9 ? (47u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v30)) > _g4_s10 ? (48u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v31)) > _g4_s11 ? (64u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (584u + sizeof(_g4_t_v32)) > _g4_s12 ? (584u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (588u + sizeof(_g4_t_v33)) > _g4_s13 ? (588u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (592u + sizeof(_g4_t_v34)) > _g4_s14 ? (592u + sizeof(_g4_t_v34)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 47u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 584u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 588u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 592u);

  v32 = (hkpNullAgent::Self *)&a1;
  v23 = a2;
  v25 = a3;
  v5 = a1;
  v24 = a4;
  v21 = a5;
  v6 = 0;
  v26 = (hkpNullAgent::Self *)G4_VCALL<int>(*a3, 64);
  result = v30;
  if ( *((int *)v5 + 4) > 0 )
  {
    while ( 1 )
    {
      v27 = 12 * v6;
      v9 = *(uint32_t *)v26;
      v34 = &v31;
      v33 = *(uint32_t *)(*((uint32_t *)v5 + 3) + 12 * v6);
      v10 = (*(int (**)(hkpNullAgent::Self *))(v9 + 24))(v26);
      v30[3] = (uint32_t)(uintptr_t)(v25);
      v30[2] = v25[2];
      v11 = (int *)(*((uint32_t *)v5 + 3) + 12 * v6);
      v12 = *v11;
      v30[0] = v10;
      v30[1] = v12;
      v13 = (int *)v24[4];
      v14 = *v13;
      a2 = *v11;
      a1 = v26;
      retaddr = v25;
      (*(void (**)(char *, int *, uint32_t *, int))(v14 + 28))(&v29, v13, v24, v23);
      v22 = *(uint32_t **)(*((uint32_t *)v5 + 3) + 12 * v6 + 8);
      if ( v29 != 0 )
        break;
      result = (uint32_t *)hkpNullAgent::getNullAgent(v32);
      if ( v22 == result )
      {
LABEL_5:
        if ( *((uint32_t *)v5 + 4) <= ++v6 )
          return result;
      }
      else
      {
        ++v6;
        v15 = *(hkpNullAgent::Self **)(*((uint32_t *)v5 + 3) + v27 + 8);
        v16 = *(uint32_t *)v15;
        v33 = v21;
        v32 = v15;
        (*(void (**)(void))(v16 + 36))();
        v28 = *((uint32_t *)v5 + 3) + v27;
        result = (uint32_t *)hkpNullAgent::getNullAgent(v32);
        *(uint32_t *)(v28 + 8) = (uint32_t)(uintptr_t)(result);
        if ( *((uint32_t *)v5 + 4) <= v6 )
          return result;
      }
    }
    if ( v22 == (uint32_t *)hkpNullAgent::getNullAgent(v32) )
    {
      v20 = *((uint32_t *)v5 + 3) + v27;
      v17 = *v24 + 35 * *(uint8_t *)(*(uint32_t *)v23 + 8);
      v18 = *(uint8_t *)(v30[0] + 8);
      if ( v24[6] != 0 )
        v19 = *(uint8_t *)(v18 + v17 + 1641);
      else
        v19 = *(uint8_t *)(v18 + v17 + 416);
      result = (uint32_t *)(*(int (**)(int, uint32_t *, uint32_t *, uint32_t))(*v24 + 20 * v19 + 2868))(
                           v23,
                           v30,
                           v24,
                           *((uint32_t *)v5 + 2));
      *(uint32_t *)(v20 + 8) = (uint32_t)(uintptr_t)(result);
    }
    else
    {
      v8 = *(uint32_t *)(*((uint32_t *)v5 + 3) + v27 + 8);
      result = (uint32_t *)G4_VCALL<int>(v8, 40, v23, v30, v24, v21);
    }
    goto LABEL_5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::LinearCastAabbCastCollector::Destroy_ea170c270  (binary VA: 0x170c270)
// Original: hkpBvTreeAgent::LinearCastAabbCastCollector::~LinearCastAabbCastCollector
// ----------------------------------------------------------------------------
void hkpBvTreeAgent::LinearCastAabbCastCollector::Destroy_ea170c270(hkpBvTreeAgent::LinearCastAabbCastCollector::Self *self)
{
  int address;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_209B900);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkpBvTreeAgent::LinearCastAabbCastCollector::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44)
                                                                                  + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    28);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::Destroy  (binary VA: 0x170c2c0)
// Original: hkpBvTreeAgent::~hkpBvTreeAgent
// ----------------------------------------------------------------------------
void hkpBvTreeAgent::Destroy(hkpBvTreeAgent::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209C148);
  v1 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      12 * v1);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::Destroy_ea170c410  (binary VA: 0x170c410)
// Original: hkpBvTreeAgent::~hkpBvTreeAgent
// ----------------------------------------------------------------------------
void hkpBvTreeAgent::Destroy_ea170c410(hkpBvTreeAgent::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209C148);
  v1 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      12 * v1);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 64;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::Construct  (binary VA: 0x170c620)
// Original: hkpBvTreeAgent::hkpBvTreeAgent
// ----------------------------------------------------------------------------
void hkpBvTreeAgent::Construct(hkpBvTreeAgent::Self *self, hkpContactMgr::Self *a2)
{
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209C148);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *((uint32_t *)self + 12) = 2139095022;
  *((uint32_t *)self + 13) = 2139095022;
  *((uint32_t *)self + 14) = 2139095022;
  *((uint32_t *)self + 8) = 2139095022;
  *((uint32_t *)self + 9) = 2139095022;
  *((uint32_t *)self + 10) = 2139095022;
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::createShapeBvAgent  (binary VA: 0x170c690)
// Original: hkpBvTreeAgent::createShapeBvAgent
// ----------------------------------------------------------------------------
hkpBvTreeAgent::Self * hkpBvTreeAgent::createShapeBvAgent(int a1, int a2, int a3, hkpContactMgr::Self *a4)
{
  int address;
  hkpBvTreeAgent::Self *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (hkpBvTreeAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                           *(uint32_t *)(*(uint32_t *)address + 44),
                           64);
  hkpBvTreeAgent::Construct(v5, a4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::createBvTreeShapeAgent  (binary VA: 0x170c6e0)
// Original: hkpBvTreeAgent::createBvTreeShapeAgent
// ----------------------------------------------------------------------------
hkpBvTreeAgent::Self * hkpBvTreeAgent::createBvTreeShapeAgent(int a1, int a2, int a3, hkpContactMgr::Self *a4)
{
  int address;
  hkpBvTreeAgent::Self *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (hkpBvTreeAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                           *(uint32_t *)(*(uint32_t *)address + 44),
                           64);
  hkpBvTreeAgent::Construct(v5, a4);
  *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_209C0E8);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::createBvBvAgent  (binary VA: 0x170c740)
// Original: hkpBvTreeAgent::createBvBvAgent
// ----------------------------------------------------------------------------
hkpBvTreeAgent::Self * hkpBvTreeAgent::createBvBvAgent(int a1, int a2, int a3, hkpContactMgr::Self *a4)
{
  int v4;
  hkpBvTreeAgent::Self *v5;
  int address;

  if ( *(float *)(*(uint32_t *)(a2 + 8) + 160) > *(float *)(*(uint32_t *)(a1 + 8) + 160) )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v5 = (hkpBvTreeAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                             *(uint32_t *)(*(uint32_t *)address + 44),
                             64);
    hkpBvTreeAgent::Construct(v5, a4);
  }
  else
  {
    v4 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v5 = (hkpBvTreeAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v4 + 44) + 8))(
                             *(uint32_t *)(*(uint32_t *)v4 + 44),
                             64);
    hkpBvTreeAgent::Construct(v5, a4);
    *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_209C0E8);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::getUseAabbCaching  (binary VA: 0x170c800)
// Original: hkpBvTreeAgent::getUseAabbCaching
// ----------------------------------------------------------------------------
hkpBvTreeAgent::Self * hkpBvTreeAgent::getUseAabbCaching(hkpBvTreeAgent::Self *self)
{
  *(uint8_t *)self = hkpBvTreeAgent::m_useAabbCaching;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::setUseAabbCaching  (binary VA: 0x170c820)
// Original: hkpBvTreeAgent::setUseAabbCaching
// ----------------------------------------------------------------------------
int hkpBvTreeAgent::setUseAabbCaching(uint8_t a1)
{
  hkpBvTreeAgent::m_useAabbCaching = a1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::registerAgent  (binary VA: 0x170c840)
// Original: hkpBvTreeAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpBvTreeAgent::registerAgent(hkpBvTreeAgent::Self *self)
{
  uint32_t v2[11];

  v2[0] = (uint32_t)(uintptr_t)(hkpBvTreeAgent::createBvTreeShapeAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::staticGetClosestPoints);
  v2[3] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::staticLinearCast);
  LOWORD(v2[4]) = 257;
  hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 22, -1);
  hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 7, -1);
  v2[0] = (uint32_t)(uintptr_t)(hkpBvTreeAgent::createShapeBvAgent);
  v2[1] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetPenetrations));
  v2[2] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetClosestPoints));
  v2[3] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int, int))hkpBvTreeAgent::staticLinearCast));
  LOWORD(v2[4]) = 256;
  hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), -1, 22);
  hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), -1, 7);
  v2[0] = (uint32_t)(uintptr_t)(hkpBvTreeAgent::createBvBvAgent);
  v2[1] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetPenetrations));
  v2[2] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))hkpBvTreeAgent::staticGetClosestPoints));
  v2[3] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, uint32_t *, uint32_t *, int, int))hkpBvTreeAgent::staticLinearCast));
  LOWORD(v2[4]) = 256;
  hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 22, 22);
  return hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 7, 7);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::defaultAgentCreate  (binary VA: 0x170c9b0)
// Original: hkpBvTreeAgent::defaultAgentCreate
// ----------------------------------------------------------------------------
int hkpBvTreeAgent::defaultAgentCreate(int a1, int a2, uint32_t *a3, int a4)
{
  int v4;
  int v5;
  int v6;

  v4 = *(uint8_t *)(*(uint32_t *)a2 + 8);
  v5 = *a3 + 35 * *(uint8_t *)(*(uint32_t *)a1 + 8);
  if ( a3[6] != 0 )
    v6 = *(uint8_t *)(v4 + v5 + 1641);
  else
    v6 = *(uint8_t *)(v4 + v5 + 416);
  return (*(int (**)(int, int, uint32_t *, int))(*a3 + 20 * v6 + 2868))(a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::calcAabbLinearCast  (binary VA: 0x170ca20)
// Original: hkpBvTreeAgent::calcAabbLinearCast
// ----------------------------------------------------------------------------
unsigned int hkpBvTreeAgent::calcAabbLinearCast(const hkTransformf::Self **a1, int a2, int a3, __m128 *a4)
{
  float v4; // xmm4_4
  float *v5;
  float v6; // xmm0_4
  __m128 v7;
  __m128 v8;
  __m128 v9;
  unsigned int result;
  __m128 v11;
  unsigned int v12;
  __m128 v13;
  __m128 v14;
  __m128 v15;
  __m128 v16;
  __m128 v17;
  __m128 v18;
  __m128 v19;
  __m128 v20;
  __m128 v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t _g4_t_v24[19];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v23)) > _g4_s1 ? (4u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v24)) > _g4_s2 ? (16u + sizeof(_g4_t_v24)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);

  hkTransformf::setMulInverseMul((hkTransformf::Self *)v24, *(const hkTransformf::Self **)(a2 + 8), a1[2]);
  G4_VCALL<void>(*a1, 24, v24, *(uint32_t *)(a3 + 12), a4, v22, v23, a1, v24, v24[0], v24[1], v24[2], v24[3], v24[4], v24[5], v24[6], v24[7], v24[8], v24[9], v24[10], v24[11], v24[12], v24[13], v24[14], v24[15]);
g4_m128_raw(v9) = *(unsigned int *)(a3 + 80);
  v4 = *(float *)(a3 + 84);
  v5 = *(float **)(a2 + 8);
g4_m128_raw(v7) = *(unsigned int *)v5;
  v6 = *(float *)(a3 + 88);
g4_m128_lane<float>(v7, 0) = (float)((float)(g4_m128_lane<float>(v7, 0) *g4_m128_lane<float>(v9, 0)) + (float)(v5[1] * v4)) + (float)(v5[2] * v6);
g4_m128_raw(v8) = *((unsigned int *)v5 + 4);
g4_m128_lane<float>(v8, 0) = (float)((float)(g4_m128_lane<float>(v8, 0) *g4_m128_lane<float>(v9, 0)) + (float)(v5[5] * v4)) + (float)(v5[6] * v6);
g4_m128_lane<float>(v9, 0) = (float)((float)(g4_m128_lane<float>(v9, 0) * v5[8]) + (float)(v4 * v5[9])) + (float)(v6 * v5[10]);
  result = _mm_cvtsi128_si32(g4_m128_from<__m128i>(0LL));
  v11 = _mm_andnot_ps(_mm_cmplt_ss(g4_m128_from<__m128>(0LL), v7), v7);
  v12 = result;
  v13 = _mm_andnot_ps(_mm_cmplt_ss(g4_m128_from<__m128>(0LL), v8), v8);
  if (g4_m128_lane<float>(v9, 0) <= 0.0 )
  {
    result = _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v9)));
    v12 = result;
  }
  v14 = _mm_cmplt_ss(v7, g4_m128_from<__m128>(0LL));
  v15 = _mm_and_ps(g4_m128_from<__m128>(0LL), v14);
  v16 = _mm_andnot_ps(v14, v7);
  v17 = _mm_andnot_ps(_mm_cmplt_ss(v8, g4_m128_from<__m128>(0LL)), v8);
  if (g4_m128_lane<float>(v9, 0) < 0.0 )
  {
    v9 = v15;
    v18 = v15;
  }
  else if (g4_m128_lane<float>(v15, 0) >g4_m128_lane<float>(v9, 0) )
  {
    v18 = v15;
  }
  else
  {
    v18 = v9;
  }
g4_m128_lane<uint64_t>(v19, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v16, v17), 0);
g4_m128_lane<uint64_t>(v19, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v9, v18), 0);
g4_m128_lane<uint64_t>(v20, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v11, v13), 0);
g4_m128_lane<uint64_t>(v20, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(result)), g4_m128_from<__m128>(_mm_cvtsi32_si128(v12))), 0);
  v21 = _mm_add_ps(v20, *a4);
  a4[1] = _mm_add_ps(v19, a4[1]);
  *a4 = v21;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::staticLinearCast  (binary VA: 0x170cbb0)
// Original: hkpBvTreeAgent::staticLinearCast
// ----------------------------------------------------------------------------
int hkpBvTreeAgent::staticLinearCast(const hkTransformf::Self **a1, uint32_t *a2, uint32_t *a3, int a4, int a5)
{
  uint32_t *v5;
  int *address;
  int v7;
  uint32_t *v8;
  uint64_t v9; // rax
  int v10;
  uint32_t *v11;
  uint64_t v12; // rax
  const hkTransformf::Self ***v13;
  int v14;
  int *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uint32_t *v20;
  uint64_t v21; // rax
  int result;
  uint32_t *savedregs;
  void *retaddr;
  typedef int *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef const hkTransformf::Self ***_g4_t_v28;
  typedef int _g4_t_v29;
  typedef void *_g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef const hkTransformf::Self **_g4_t_v32;
  typedef char _g4_t_v33;
  typedef uint32_t _g4_t_v34[4];
  typedef __m128 _g4_t_v35[2];
  typedef char _g4_t_v36[512];
  typedef const hkTransformf::Self ***_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint32_t _g4_t_v40[135];
  enum : size_t {
    _g4_s0 = 1216u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v24)) > _g4_s1 ? (4u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v25)) > _g4_s2 ? (4u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v26)) > _g4_s3 ? (8u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v27)) > _g4_s4 ? (12u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v28)) > _g4_s5 ? (20u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v29)) > _g4_s6 ? (24u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v30)) > _g4_s7 ? (24u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v31)) > _g4_s8 ? (28u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v32)) > _g4_s9 ? (32u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (39u + sizeof(_g4_t_v33)) > _g4_s10 ? (39u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v34)) > _g4_s11 ? (40u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v35)) > _g4_s12 ? (56u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v36)) > _g4_s13 ? (88u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (600u + sizeof(_g4_t_v37)) > _g4_s14 ? (600u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (604u + sizeof(_g4_t_v38)) > _g4_s15 ? (604u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (608u + sizeof(_g4_t_v39)) > _g4_s16 ? (608u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (612u + sizeof(_g4_t_v40)) > _g4_s17 ? (612u + sizeof(_g4_t_v40)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 39u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 88u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 600u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 604u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 608u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 612u);

  v40[131] = (uint32_t)(uintptr_t)(&a1);
  v32 = a1;
  v31 = a2;
  v27 = a4;
  v26 = a5;
  v5 = a3;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v7 = *address;
  v23 = address;
  v8 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(*address + 12) )
  {
    *v8 = (uint32_t)(uintptr_t)("LtBvTree");
    v8[3] = (uint32_t)(uintptr_t)("StQueryTree");
    v9 = __rdtsc();
    v8[1] = v9;
    *(uint32_t *)(v7 + 4) = (uint32_t)(uintptr_t)(v8 + 4);
  }
  hkpBvTreeAgent::calcAabbLinearCast(v32, (int)(uintptr_t)(v31), (int)(uintptr_t)(v5), v35);
  v38 = 0;
  v39 = -2147483520;
  v29 = *v31;
  v37 = (const hkTransformf::Self ***)v40;
  G4_VCALL<void>(v29, 76, v35, &v37);
  v10 = *v23;
  v11 = *(uint32_t **)(*v23 + 4);
  if ( (unsigned int)(uintptr_t)(v11) < *(uint32_t *)(*v23 + 12) )
  {
    *v11 = (uint32_t)(uintptr_t)("StNarrowPhase");
    v12 = __rdtsc();
    v11[1] = v12;
    *(uint32_t *)(v10 + 4) = (uint32_t)(uintptr_t)(v11 + 3);
  }
  v13 = v37;
  v14 = *((uint8_t *)*v32 + 8);
  v34[3] = (uint32_t)(uintptr_t)(v31);
  v24 = v14;
  v28 = &v37[v38];
  v34[2] = v31[2];
  v30 = (void *)G4_VCALL<int>(v29, 64);
  v25 = 35 * v24;
  while ( v13 != v28 )
  {
    while ( 1 )
    {
      v15 = (int *)v5[4];
      v16 = *v15;
      a1 = *v13;
      v40[132] = (uint32_t)(uintptr_t)(v15);
      retaddr = v30;
      savedregs = v31;
      v40[133] = (uint32_t)(uintptr_t)(v5);
      v40[134] = (uint32_t)(uintptr_t)(v32);
      (*(void (**)(char *))(v16 + 28))(&v33);
      if ( v33 != 0 )
        break;
      if ( ++v13 == v28 )
        goto LABEL_10;
    }
    v17 = G4_VCALL<int>(v30, 24, *v13++, v36);
    v18 = *(uint8_t *)(v17 + 8);
    v34[1] = (uint32_t)(uintptr_t)(*(v13 - 1));
    v34[0] = v17;
    (*(void (**)(const hkTransformf::Self **, uint32_t *, uint32_t *, int, int))(*v5
                                                                             + 20
                                                                             * *(uint8_t *)(v18 + *v5 + v25 + 416)
                                                                             + 2880))(
      v32,
      v34,
      v5,
      v27,
      v26);
  }
LABEL_10:
  v19 = *v23;
  v20 = *(uint32_t **)(*v23 + 4);
  if ( (unsigned int)(uintptr_t)(v20) < *(uint32_t *)(*v23 + 12) )
  {
    *v20 = (uint32_t)(uintptr_t)("lt");
    v21 = __rdtsc();
    v20[1] = v21;
    *(uint32_t *)(v19 + 4) = (uint32_t)(uintptr_t)(v20 + 3);
  }
  result = v39;
  v38 = 0;
  if ( v39 >= 0 )
    return (*(int (**)(uint32_t *, const hkTransformf::Self ***, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v37,
             4 * v39);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::linearCast  (binary VA: 0x170ce90)
// Original: hkpBvTreeAgent::linearCast
// ----------------------------------------------------------------------------
int hkpBvTreeAgent::linearCast(int a1, const hkTransformf::Self **a2, uint32_t *a3, uint32_t *a4, int a5, int a6)
{
  return hkpBvTreeAgent::staticLinearCast(a2, a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::staticCalcAabb  (binary VA: 0x170d030)
// Original: hkpBvTreeAgent::staticCalcAabb
// ----------------------------------------------------------------------------
int hkpBvTreeAgent::staticCalcAabb(const hkTransformf::Self **a1, int a2, int a3, int a4)
{
  uint8_t v5[76];

  hkTransformf::setMulInverseMul((hkTransformf::Self *)v5, *(const hkTransformf::Self **)(a2 + 8), a1[2]);
  return G4_VCALL<int>(*a1, 24, v5, *(uint32_t *)(a3 + 12), a4);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::staticGetClosestPoints  (binary VA: 0x170d0a0)
// Original: hkpBvTreeAgent::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpBvTreeAgent::staticGetClosestPoints(const hkTransformf::Self **a1, uint32_t *a2, uint32_t *a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  hkLifoAllocator::Self *v8;
  int v9;
  char *v10;
  int v11;
  int v12;
  bool v13; // cc
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  int v18;
  const hkTransformf::Self **v19;
  int *v20;
  int v21;
  int v22;
  int v23;
  hkLifoAllocator::Self *v24;
  uint64_t v25; // rax
  int v26;
  uint32_t *v27;
  uint64_t v28; // rax
  hkLifoAllocator::Self *v29;
  int v30;
  uint32_t *v31;
  uint32_t *savedregs;
  void *retaddr;
  typedef hkLifoAllocator::Self **_g4_t_v33;
  typedef int *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef void *_g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef const hkTransformf::Self **_g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef char *_g4_t_v42;
  typedef char _g4_t_v43;
  typedef uint32_t _g4_t_v44[4];
  typedef uint8_t _g4_t_v45[32];
  typedef uint32_t _g4_t_v46[134];
  enum : size_t {
    _g4_s0 = 704u,
    _g4_s1 = (0u + sizeof(_g4_t_v33)) > _g4_s0 ? (0u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v34)) > _g4_s1 ? (4u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v35)) > _g4_s2 ? (8u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v36)) > _g4_s3 ? (12u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v37)) > _g4_s4 ? (16u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v38)) > _g4_s5 ? (20u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v39)) > _g4_s6 ? (24u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v40)) > _g4_s7 ? (36u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v41)) > _g4_s8 ? (40u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v42)) > _g4_s9 ? (44u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (51u + sizeof(_g4_t_v43)) > _g4_s10 ? (51u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v44)) > _g4_s11 ? (52u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v45)) > _g4_s12 ? (68u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v46)) > _g4_s13 ? (100u + sizeof(_g4_t_v46)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 51u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 68u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 100u);

  v46[130] = (uint32_t)(uintptr_t)(&a1);
  v39 = a1;
  v38 = a2;
  v41 = a3;
  v36 = a4;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v34 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("LtBvTree");
    v6[3] = (uint32_t)(uintptr_t)("StQueryTree");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 4);
  }
  hkpBvTreeAgent::staticCalcAabb(v39, (int)(uintptr_t)(v38), (int)(uintptr_t)(v41), (int)(uintptr_t)(v45));
  v33 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v8 = *v33;
  v42 = *((char **)*v33 + 3);
  if ( *((int *)*v33 + 2) > 0x1FFF && (unsigned int)(v9 = *((uint32_t *)*v33 + 3) + 0x2000) <= *((uint32_t *)v8 + 4) )
  {
    *((uint32_t *)v8 + 3) = v9;
    v10 = v42;
  }
  else
  {
    v42 = (char *)hkLifoAllocator::allocateFromNewSlab(v8, 0x2000);
    v10 = v42;
  }
  v11 = *v38;
  v12 = G4_VCALL<int>(*v38, 84, v45, v10, 2048);
  if ( v12 != 0 )
  {
    v13 = v12 < 2048;
    v14 = v12;
    v15 = 2048;
    if ( v13 )
      v15 = v14;
    v40 = v15;
    v16 = *v34;
    v17 = *(uint32_t **)(*v34 + 4);
    if ( (unsigned int)(uintptr_t)(v17) < *(uint32_t *)(*v34 + 12) )
    {
      *v17 = (uint32_t)(uintptr_t)("StNarrowPhase");
      v28 = __rdtsc();
      v17[1] = v28;
      *(uint32_t *)(v16 + 4) = (uint32_t)(uintptr_t)(v17 + 3);
    }
    v37 = (void *)G4_VCALL<int>(v11, 64);
    v44[3] = (uint32_t)(uintptr_t)(v38);
    v18 = 0;
    v44[2] = v38[2];
    v35 = 35 * *((uint8_t *)*v39 + 8);
    if ( v40 > 0 )
    {
      do
      {
        v19 = *(const hkTransformf::Self ***)&v42[4 * v18];
        v20 = (int *)v41[4];
        if ( v20 != nullptr )
        {
          v21 = *v20;
          v46[132] = (uint32_t)(uintptr_t)(v41);
          retaddr = v37;
          savedregs = v38;
          v46[131] = (uint32_t)(uintptr_t)(v20);
          a1 = v19;
          v46[133] = (uint32_t)(uintptr_t)(v39);
          (*(void (**)(char *))(v21 + 28))(&v43);
          if ( v43 != 0 )
          {
            v22 = G4_VCALL<int>(v37, 24, v19, v46);
            v44[1] = (uint32_t)(uintptr_t)(v19);
            v23 = *(uint8_t *)(v22 + 8);
            v44[0] = v22;
            (*(void (**)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))(*v41
                                                                                + 20
                                                                                * *(uint8_t *)(v23 + *v41 + v35 + 416)
                                                                                + 2876))(
              v39,
              v44,
              v41,
              v36);
          }
        }
        ++v18;
      }
      while ( v18 != v40 );
    }
    v24 = *v33;
    if ( *((int *)*v33 + 2) <= 0x1FFF || *((char **)v24 + 3) != v42 + 0x2000 || v42 == *((char **)v24 + 5) )
      hkLifoAllocator::slowBlockFree(v24, v42, 0x2000);
    else
      *((uint32_t *)v24 + 3) = (uint32_t)(uintptr_t)(v42);
    LODWORD(v25) = (uint32_t)(uintptr_t)(v34);
    v26 = *v34;
    v27 = *(uint32_t **)(*v34 + 4);
    if ( (unsigned int)(uintptr_t)(v27) < *(uint32_t *)(*v34 + 12) )
    {
      *v27 = (uint32_t)(uintptr_t)("lt");
      v25 = __rdtsc();
      v27[1] = v25;
      *(uint32_t *)(v26 + 4) = (uint32_t)(uintptr_t)(v27 + 3);
    }
  }
  else
  {
    v29 = *v33;
    if ( *((int *)*v33 + 2) <= 0x1FFF || *((char **)v29 + 3) != v42 + 0x2000 || v42 == *((char **)v29 + 5) )
      hkLifoAllocator::slowBlockFree(v29, v42, 0x2000);
    else
      *((uint32_t *)v29 + 3) = (uint32_t)(uintptr_t)(v42);
    LODWORD(v25) = (uint32_t)(uintptr_t)(v34);
    v30 = *v34;
    v31 = *(uint32_t **)(*v34 + 4);
    if ( (unsigned int)(uintptr_t)(v31) < *(uint32_t *)(*v34 + 12) )
    {
      *v31 = (uint32_t)(uintptr_t)("lt");
      v25 = __rdtsc();
      v31[1] = v25;
      *(uint32_t *)(v30 + 4) = (uint32_t)(uintptr_t)(v31 + 3);
    }
  }
  return v25;
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::getClosestPoints  (binary VA: 0x170d470)
// Original: hkpBvTreeAgent::getClosestPoints
// ----------------------------------------------------------------------------
int hkpBvTreeAgent::getClosestPoints(int a1, const hkTransformf::Self **a2, uint32_t *a3, uint32_t *a4, int a5)
{
  return hkpBvTreeAgent::staticGetClosestPoints(a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::staticGetPenetrations  (binary VA: 0x170d510)
// Original: hkpBvTreeAgent::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpBvTreeAgent::staticGetPenetrations(const hkTransformf::Self **a1, uint32_t *a2, uint32_t *a3, int a4)
{
  uint32_t *v4;
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  uint32_t *v10;
  uint64_t v11; // rax
  const hkTransformf::Self ***v12;
  int v13;
  int *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint32_t *v19;
  uint64_t v20; // rax
  int result;
  uint32_t *savedregs;
  void *retaddr;
  typedef int *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_i;
  typedef int _g4_t_v25;
  typedef const hkTransformf::Self ***_g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef void *_g4_t_v29;
  typedef const hkTransformf::Self **_g4_t_v30;
  typedef char _g4_t_v31;
  typedef uint32_t _g4_t_v32[4];
  typedef uint8_t _g4_t_v33[32];
  typedef char _g4_t_v34[512];
  typedef const hkTransformf::Self ***_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint32_t _g4_t_v38[135];
  enum : size_t {
    _g4_s0 = 1216u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v23)) > _g4_s1 ? (4u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_i)) > _g4_s2 ? (4u + sizeof(_g4_t_i)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v25)) > _g4_s3 ? (8u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v26)) > _g4_s4 ? (16u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v27)) > _g4_s5 ? (20u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v28)) > _g4_s6 ? (24u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v29)) > _g4_s7 ? (24u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v30)) > _g4_s8 ? (28u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (35u + sizeof(_g4_t_v31)) > _g4_s9 ? (35u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v32)) > _g4_s10 ? (36u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v33)) > _g4_s11 ? (52u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v34)) > _g4_s12 ? (84u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (596u + sizeof(_g4_t_v35)) > _g4_s13 ? (596u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (600u + sizeof(_g4_t_v36)) > _g4_s14 ? (600u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (604u + sizeof(_g4_t_v37)) > _g4_s15 ? (604u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (608u + sizeof(_g4_t_v38)) > _g4_s16 ? (608u + sizeof(_g4_t_v38)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 35u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 84u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 596u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 600u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 604u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 608u);

  v38[131] = (uint32_t)(uintptr_t)(&a1);
  v30 = a1;
  v27 = a2;
  v25 = a4;
  v4 = a3;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v22 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("LtBvTree");
    v7[3] = (uint32_t)(uintptr_t)("StQueryTree");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 4);
  }
  hkpBvTreeAgent::staticCalcAabb(v30, (int)(uintptr_t)(v27), (int)(uintptr_t)(v4), (int)(uintptr_t)(v33));
  v36 = 0;
  v37 = -2147483520;
  v28 = *v27;
  v35 = (const hkTransformf::Self ***)v38;
  G4_VCALL<void>(v28, 76, v33, &v35);
  v9 = *v22;
  v10 = *(uint32_t **)(*v22 + 4);
  if ( (unsigned int)(uintptr_t)(v10) < *(uint32_t *)(*v22 + 12) )
  {
    *v10 = (uint32_t)(uintptr_t)("StNarrowPhase");
    v11 = __rdtsc();
    v10[1] = v11;
    *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(v10 + 3);
  }
  v12 = v35;
  v13 = *((uint8_t *)*v30 + 8);
  v32[3] = (uint32_t)(uintptr_t)(v27);
  v23 = v13;
  v26 = &v35[v36];
  v32[2] = v27[2];
  v29 = (void *)G4_VCALL<int>(v28, 64);
  for ( i = 35 * v23; v12 != v26; ++v12 )
  {
    v14 = (int *)v4[4];
    v15 = *v14;
    a1 = *v12;
    v38[132] = (uint32_t)(uintptr_t)(v14);
    retaddr = v29;
    savedregs = v27;
    v38[133] = (uint32_t)(uintptr_t)(v4);
    v38[134] = (uint32_t)(uintptr_t)(v30);
    (*(void (**)(char *))(v15 + 28))(&v31);
    if ( v31 != 0 )
    {
      v16 = G4_VCALL<int>(v29, 24, *v12, v34);
      v17 = *(uint8_t *)(v16 + 8);
      v32[1] = (uint32_t)(uintptr_t)(*v12);
      v32[0] = v16;
      (*(void (**)(const hkTransformf::Self **, uint32_t *, uint32_t *, int))(*v4
                                                                          + 20
                                                                          * *(uint8_t *)(v17 + *v4 + i + 416)
                                                                          + 2872))(
        v30,
        v32,
        v4,
        v25);
      if ( *(uint8_t *)(v25 + 4) != 0 )
        break;
    }
  }
  v18 = *v22;
  v19 = *(uint32_t **)(*v22 + 4);
  if ( (unsigned int)(uintptr_t)(v19) < *(uint32_t *)(*v22 + 12) )
  {
    *v19 = (uint32_t)(uintptr_t)("lt");
    v20 = __rdtsc();
    v19[1] = v20;
    *(uint32_t *)(v18 + 4) = (uint32_t)(uintptr_t)(v19 + 3);
  }
  result = v37;
  v36 = 0;
  if ( v37 >= 0 )
    return (*(int (**)(uint32_t *, const hkTransformf::Self ***, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v35,
             4 * v37);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::getPenetrations  (binary VA: 0x170d7d0)
// Original: hkpBvTreeAgent::getPenetrations
// ----------------------------------------------------------------------------
int hkpBvTreeAgent::getPenetrations(int a1, const hkTransformf::Self **a2, uint32_t *a3, uint32_t *a4, int a5)
{
  return hkpBvTreeAgent::staticGetPenetrations(a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpBvTreeAgent::processCollision  (binary VA: 0x170d870)
// Original: hkpBvTreeAgent::processCollision
// ----------------------------------------------------------------------------
int hkpBvTreeAgent::processCollision(hkpNullAgent::Self *a1, const hkTransformf::Self **a2, const hkTransformf::Self **a3, int a4, int a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  const hkTransformf::Self *v9;
  float *v10;
  float v11; // xmm4_4
  float v12; // xmm5_4
  float *v13;
  float v14; // xmm4_4
  float v15; // xmm0_4
  float v16; // xmm3_4
  float v17; // xmm1_4
  float v18; // xmm4_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float *v22;
  float v23; // xmm1_4
  float v24; // xmm6_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm6_4
  float v30; // xmm6_4
  float v31; // xmm5_4
  float v32; // xmm1_4
  float v33; // xmm7_4
  __m128 v34;
  __m128 v35;
  __m128 v36;
  __m128 v37;
  __m128 v38;
  __m128 v39;
  float v40; // xmm3_4
  float v41; // xmm2_4
  __m128i v42;
  __m128i v43;
  __m128i v44;
  int v45;
  float v46; // xmm0_4
  int v47;
  unsigned int v48;
  __m128i v49;
  float v50; // xmm7_4
  float v51; // xmm7_4
  float v52; // xmm4_4
  __m128 v53;
  unsigned int v54;
  __m128i v55;
  unsigned int v56;
  unsigned int v57;
  __m128 v58;
  __m128i v59;
  unsigned int v60;
  __m128 v61;
  __m128 v62;
  __m128 v63;
  __m128 v64;
  __m128 v65;
  __m128 v66;
  __m128 v67;
  int32_t v68;
  hkpNullAgent::Self *v69;
  const hkTransformf::Self *v70;
  int v71;
  const hkTransformf::Self ***v72;
  const hkTransformf::Self ***v73;
  void *v74;
  const hkTransformf::Self **v75;
  const hkTransformf::Self **v76;
  const hkTransformf::Self **v77;
  int v78;
  const hkTransformf::Self ***v79;
  const hkTransformf::Self **v80;
  int v81;
  int *v82;
  const hkTransformf::Self **v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  void *v89;
  char *v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  char *v96;
  void *v97;
  void *v98;
  int32_t v99;
  hkLifoAllocator::Self *v100;
  int *v101;
  int v102;
  uint32_t *v103;
  uint64_t v104; // rax
  int v105;
  int v106;
  int v107;
  int v108;
  uint64_t v109; // rax
  int v110;
  uint32_t *v111;
  const hkTransformf::Self ***v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  const hkTransformf::Self ***v118;
  const hkTransformf::Self **NullAgent;
  int v120;
  const hkTransformf::Self ***v121;
  const hkTransformf::Self ***v122;
  int v123;
  const hkTransformf::Self ***v124;
  const hkTransformf::Self ***v125;
  int v126;
  int v127;
  const hkTransformf::Self ***v128;
  int v129;
  int v130;
  int v131;
  int v132;
  const hkTransformf::Self **v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  unsigned int v148;
  hkLifoAllocator::Self *v149;
  void *v150;
  void *v151;
  int v152;
  int v153;
  int savedregs;
  const hkTransformf::Self **retaddr;
  typedef float _g4_t_v155;
  typedef float _g4_t_v156;
  typedef float _g4_t_v157;
  typedef float _g4_t_v158;
  typedef float _g4_t_v159;
  typedef float _g4_t_v160;
  typedef float _g4_t_v161;
  typedef float _g4_t_v162;
  typedef float _g4_t_v163;
  typedef float _g4_t_v164;
  typedef float _g4_t_v165;
  typedef float _g4_t_v166;
  typedef float _g4_t_v167;
  typedef float _g4_t_v168;
  typedef float _g4_t_v169;
  typedef float _g4_t_v170;
  typedef float _g4_t_v171;
  typedef float _g4_t_v172;
  typedef float _g4_t_v173;
  typedef float _g4_t_v174;
  typedef int _g4_t_v175;
  typedef float _g4_t_v176;
  typedef float _g4_t_v177;
  typedef int *_g4_t_v178;
  typedef float *_g4_t_v179;
  typedef float _g4_t_v180;
  typedef float _g4_t_v181;
  typedef int _g4_t_v182;
  typedef float _g4_t_v183;
  typedef int _g4_t_v184;
  typedef int _g4_t_v185;
  typedef int _g4_t_v186;
  typedef int _g4_t_v187;
  typedef float _g4_t_v188;
  typedef float _g4_t_v189;
  typedef float _g4_t_v190;
  typedef const hkTransformf::Self **_g4_t_v191;
  typedef int *_g4_t_v192;
  typedef const hkTransformf::Self ***_g4_t_v193;
  typedef char *_g4_t_v194;
  typedef unsigned int _g4_t_v195;
  typedef float _g4_t_v196;
  typedef unsigned int _g4_t_v197;
  typedef hkpNullAgent::Self *_g4_t_v198;
  typedef int _g4_t_v199;
  typedef int _g4_t_v200;
  typedef void *_g4_t_v201;
  typedef void *_g4_t_v202;
  typedef int _g4_t_v203;
  typedef const hkTransformf::Self **_g4_t_v204;
  typedef hkpNullAgent::Self *_g4_t_v205;
  typedef hkpNullAgent::Self *_g4_t_v206;
  typedef float _g4_t_v207;
  typedef unsigned int _g4_t_v208;
  typedef const hkTransformf::Self ***_g4_t_v209;
  typedef int _g4_t_v210;
  typedef int _g4_t_v211;
  typedef int *_g4_t_v212;
  typedef const hkTransformf::Self **_g4_t_v213;
  typedef int _g4_t_v214;
  typedef float _g4_t_v215;
  typedef unsigned int _g4_t_v216;
  typedef const hkTransformf::Self ***_g4_t_v217;
  typedef char *_g4_t_v218;
  typedef int _g4_t_v219;
  typedef const hkTransformf::Self **_g4_t_v220;
  typedef int *_g4_t_v221;
  typedef int _g4_t_v222;
  typedef float _g4_t_v223;
  typedef float _g4_t_v224;
  typedef __m128 _g4_t_v225;
  typedef const hkTransformf::Self ***_g4_t_v226;
  typedef void *_g4_t_v227;
  typedef int *_g4_t_v228;
  typedef int _g4_t_v229;
  typedef const hkTransformf::Self ***_g4_t_v230;
  typedef int _g4_t_v231;
  typedef signed int _g4_t_v232;
  typedef int _g4_t_v233;
  typedef const hkTransformf::Self **_g4_t_v234;
  typedef char _g4_t_v235;
  typedef char _g4_t_v236;
  typedef void *_g4_t_v237[4];
  typedef __m128 _g4_t_v238;
  typedef const hkTransformf::Self ***_g4_t_v239;
  typedef int _g4_t_v240;
  typedef int _g4_t_v241;
  typedef const hkTransformf::Self **_g4_t_v242;
  typedef hkpNullAgent::Self *_g4_t_v243;
  typedef int _g4_t_v244;
  typedef const hkTransformf::Self **_g4_t_v245;
  typedef const hkTransformf::Self *_g4_t_v246;
  typedef const hkTransformf::Self **_g4_t_v247;
  typedef uint8_t _g4_t_v248[520];
  typedef hkpNullAgent::Self **_g4_t_v249;
  typedef const hkTransformf::Self **_g4_t_v250;
  typedef uint8_t *_g4_t_v251;
  typedef char _g4_t_v252;
  enum : size_t {
    _g4_s0 = 1360u,
    _g4_s1 = (4u + sizeof(_g4_t_v155)) > _g4_s0 ? (4u + sizeof(_g4_t_v155)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v156)) > _g4_s1 ? (8u + sizeof(_g4_t_v156)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v157)) > _g4_s2 ? (12u + sizeof(_g4_t_v157)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v158)) > _g4_s3 ? (16u + sizeof(_g4_t_v158)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v159)) > _g4_s4 ? (16u + sizeof(_g4_t_v159)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v160)) > _g4_s5 ? (20u + sizeof(_g4_t_v160)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v161)) > _g4_s6 ? (20u + sizeof(_g4_t_v161)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v162)) > _g4_s7 ? (20u + sizeof(_g4_t_v162)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v163)) > _g4_s8 ? (24u + sizeof(_g4_t_v163)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v164)) > _g4_s9 ? (24u + sizeof(_g4_t_v164)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v165)) > _g4_s10 ? (28u + sizeof(_g4_t_v165)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v166)) > _g4_s11 ? (28u + sizeof(_g4_t_v166)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v167)) > _g4_s12 ? (32u + sizeof(_g4_t_v167)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v168)) > _g4_s13 ? (36u + sizeof(_g4_t_v168)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v169)) > _g4_s14 ? (40u + sizeof(_g4_t_v169)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v170)) > _g4_s15 ? (44u + sizeof(_g4_t_v170)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v171)) > _g4_s16 ? (52u + sizeof(_g4_t_v171)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v172)) > _g4_s17 ? (52u + sizeof(_g4_t_v172)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v173)) > _g4_s18 ? (56u + sizeof(_g4_t_v173)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v174)) > _g4_s19 ? (56u + sizeof(_g4_t_v174)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v175)) > _g4_s20 ? (56u + sizeof(_g4_t_v175)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v176)) > _g4_s21 ? (60u + sizeof(_g4_t_v176)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v177)) > _g4_s22 ? (60u + sizeof(_g4_t_v177)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v178)) > _g4_s23 ? (64u + sizeof(_g4_t_v178)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v179)) > _g4_s24 ? (68u + sizeof(_g4_t_v179)) : _g4_s24,
    _g4_s26 = (68u + sizeof(_g4_t_v180)) > _g4_s25 ? (68u + sizeof(_g4_t_v180)) : _g4_s25,
    _g4_s27 = (68u + sizeof(_g4_t_v181)) > _g4_s26 ? (68u + sizeof(_g4_t_v181)) : _g4_s26,
    _g4_s28 = (68u + sizeof(_g4_t_v182)) > _g4_s27 ? (68u + sizeof(_g4_t_v182)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v183)) > _g4_s28 ? (72u + sizeof(_g4_t_v183)) : _g4_s28,
    _g4_s30 = (72u + sizeof(_g4_t_v184)) > _g4_s29 ? (72u + sizeof(_g4_t_v184)) : _g4_s29,
    _g4_s31 = (72u + sizeof(_g4_t_v185)) > _g4_s30 ? (72u + sizeof(_g4_t_v185)) : _g4_s30,
    _g4_s32 = (72u + sizeof(_g4_t_v186)) > _g4_s31 ? (72u + sizeof(_g4_t_v186)) : _g4_s31,
    _g4_s33 = (72u + sizeof(_g4_t_v187)) > _g4_s32 ? (72u + sizeof(_g4_t_v187)) : _g4_s32,
    _g4_s34 = (76u + sizeof(_g4_t_v188)) > _g4_s33 ? (76u + sizeof(_g4_t_v188)) : _g4_s33,
    _g4_s35 = (76u + sizeof(_g4_t_v189)) > _g4_s34 ? (76u + sizeof(_g4_t_v189)) : _g4_s34,
    _g4_s36 = (76u + sizeof(_g4_t_v190)) > _g4_s35 ? (76u + sizeof(_g4_t_v190)) : _g4_s35,
    _g4_s37 = (76u + sizeof(_g4_t_v191)) > _g4_s36 ? (76u + sizeof(_g4_t_v191)) : _g4_s36,
    _g4_s38 = (76u + sizeof(_g4_t_v192)) > _g4_s37 ? (76u + sizeof(_g4_t_v192)) : _g4_s37,
    _g4_s39 = (76u + sizeof(_g4_t_v193)) > _g4_s38 ? (76u + sizeof(_g4_t_v193)) : _g4_s38,
    _g4_s40 = (76u + sizeof(_g4_t_v194)) > _g4_s39 ? (76u + sizeof(_g4_t_v194)) : _g4_s39,
    _g4_s41 = (76u + sizeof(_g4_t_v195)) > _g4_s40 ? (76u + sizeof(_g4_t_v195)) : _g4_s40,
    _g4_s42 = (80u + sizeof(_g4_t_v196)) > _g4_s41 ? (80u + sizeof(_g4_t_v196)) : _g4_s41,
    _g4_s43 = (80u + sizeof(_g4_t_v197)) > _g4_s42 ? (80u + sizeof(_g4_t_v197)) : _g4_s42,
    _g4_s44 = (80u + sizeof(_g4_t_v198)) > _g4_s43 ? (80u + sizeof(_g4_t_v198)) : _g4_s43,
    _g4_s45 = (80u + sizeof(_g4_t_v199)) > _g4_s44 ? (80u + sizeof(_g4_t_v199)) : _g4_s44,
    _g4_s46 = (80u + sizeof(_g4_t_v200)) > _g4_s45 ? (80u + sizeof(_g4_t_v200)) : _g4_s45,
    _g4_s47 = (80u + sizeof(_g4_t_v201)) > _g4_s46 ? (80u + sizeof(_g4_t_v201)) : _g4_s46,
    _g4_s48 = (80u + sizeof(_g4_t_v202)) > _g4_s47 ? (80u + sizeof(_g4_t_v202)) : _g4_s47,
    _g4_s49 = (84u + sizeof(_g4_t_v203)) > _g4_s48 ? (84u + sizeof(_g4_t_v203)) : _g4_s48,
    _g4_s50 = (84u + sizeof(_g4_t_v204)) > _g4_s49 ? (84u + sizeof(_g4_t_v204)) : _g4_s49,
    _g4_s51 = (84u + sizeof(_g4_t_v205)) > _g4_s50 ? (84u + sizeof(_g4_t_v205)) : _g4_s50,
    _g4_s52 = (88u + sizeof(_g4_t_v206)) > _g4_s51 ? (88u + sizeof(_g4_t_v206)) : _g4_s51,
    _g4_s53 = (92u + sizeof(_g4_t_v207)) > _g4_s52 ? (92u + sizeof(_g4_t_v207)) : _g4_s52,
    _g4_s54 = (92u + sizeof(_g4_t_v208)) > _g4_s53 ? (92u + sizeof(_g4_t_v208)) : _g4_s53,
    _g4_s55 = (92u + sizeof(_g4_t_v209)) > _g4_s54 ? (92u + sizeof(_g4_t_v209)) : _g4_s54,
    _g4_s56 = (92u + sizeof(_g4_t_v210)) > _g4_s55 ? (92u + sizeof(_g4_t_v210)) : _g4_s55,
    _g4_s57 = (92u + sizeof(_g4_t_v211)) > _g4_s56 ? (92u + sizeof(_g4_t_v211)) : _g4_s56,
    _g4_s58 = (92u + sizeof(_g4_t_v212)) > _g4_s57 ? (92u + sizeof(_g4_t_v212)) : _g4_s57,
    _g4_s59 = (96u + sizeof(_g4_t_v213)) > _g4_s58 ? (96u + sizeof(_g4_t_v213)) : _g4_s58,
    _g4_s60 = (104u + sizeof(_g4_t_v214)) > _g4_s59 ? (104u + sizeof(_g4_t_v214)) : _g4_s59,
    _g4_s61 = (108u + sizeof(_g4_t_v215)) > _g4_s60 ? (108u + sizeof(_g4_t_v215)) : _g4_s60,
    _g4_s62 = (108u + sizeof(_g4_t_v216)) > _g4_s61 ? (108u + sizeof(_g4_t_v216)) : _g4_s61,
    _g4_s63 = (108u + sizeof(_g4_t_v217)) > _g4_s62 ? (108u + sizeof(_g4_t_v217)) : _g4_s62,
    _g4_s64 = (108u + sizeof(_g4_t_v218)) > _g4_s63 ? (108u + sizeof(_g4_t_v218)) : _g4_s63,
    _g4_s65 = (108u + sizeof(_g4_t_v219)) > _g4_s64 ? (108u + sizeof(_g4_t_v219)) : _g4_s64,
    _g4_s66 = (108u + sizeof(_g4_t_v220)) > _g4_s65 ? (108u + sizeof(_g4_t_v220)) : _g4_s65,
    _g4_s67 = (108u + sizeof(_g4_t_v221)) > _g4_s66 ? (108u + sizeof(_g4_t_v221)) : _g4_s66,
    _g4_s68 = (108u + sizeof(_g4_t_v222)) > _g4_s67 ? (108u + sizeof(_g4_t_v222)) : _g4_s67,
    _g4_s69 = (112u + sizeof(_g4_t_v223)) > _g4_s68 ? (112u + sizeof(_g4_t_v223)) : _g4_s68,
    _g4_s70 = (112u + sizeof(_g4_t_v224)) > _g4_s69 ? (112u + sizeof(_g4_t_v224)) : _g4_s69,
    _g4_s71 = (112u + sizeof(_g4_t_v225)) > _g4_s70 ? (112u + sizeof(_g4_t_v225)) : _g4_s70,
    _g4_s72 = (112u + sizeof(_g4_t_v226)) > _g4_s71 ? (112u + sizeof(_g4_t_v226)) : _g4_s71,
    _g4_s73 = (112u + sizeof(_g4_t_v227)) > _g4_s72 ? (112u + sizeof(_g4_t_v227)) : _g4_s72,
    _g4_s74 = (112u + sizeof(_g4_t_v228)) > _g4_s73 ? (112u + sizeof(_g4_t_v228)) : _g4_s73,
    _g4_s75 = (112u + sizeof(_g4_t_v229)) > _g4_s74 ? (112u + sizeof(_g4_t_v229)) : _g4_s74,
    _g4_s76 = (112u + sizeof(_g4_t_v230)) > _g4_s75 ? (112u + sizeof(_g4_t_v230)) : _g4_s75,
    _g4_s77 = (112u + sizeof(_g4_t_v231)) > _g4_s76 ? (112u + sizeof(_g4_t_v231)) : _g4_s76,
    _g4_s78 = (112u + sizeof(_g4_t_v232)) > _g4_s77 ? (112u + sizeof(_g4_t_v232)) : _g4_s77,
    _g4_s79 = (128u + sizeof(_g4_t_v233)) > _g4_s78 ? (128u + sizeof(_g4_t_v233)) : _g4_s78,
    _g4_s80 = (132u + sizeof(_g4_t_v234)) > _g4_s79 ? (132u + sizeof(_g4_t_v234)) : _g4_s79,
    _g4_s81 = (139u + sizeof(_g4_t_v235)) > _g4_s80 ? (139u + sizeof(_g4_t_v235)) : _g4_s80,
    _g4_s82 = (140u + sizeof(_g4_t_v236)) > _g4_s81 ? (140u + sizeof(_g4_t_v236)) : _g4_s81,
    _g4_s83 = (144u + sizeof(_g4_t_v237)) > _g4_s82 ? (144u + sizeof(_g4_t_v237)) : _g4_s82,
    _g4_s84 = (160u + sizeof(_g4_t_v238)) > _g4_s83 ? (160u + sizeof(_g4_t_v238)) : _g4_s83,
    _g4_s85 = (176u + sizeof(_g4_t_v239)) > _g4_s84 ? (176u + sizeof(_g4_t_v239)) : _g4_s84,
    _g4_s86 = (180u + sizeof(_g4_t_v240)) > _g4_s85 ? (180u + sizeof(_g4_t_v240)) : _g4_s85,
    _g4_s87 = (184u + sizeof(_g4_t_v241)) > _g4_s86 ? (184u + sizeof(_g4_t_v241)) : _g4_s86,
    _g4_s88 = (188u + sizeof(_g4_t_v242)) > _g4_s87 ? (188u + sizeof(_g4_t_v242)) : _g4_s87,
    _g4_s89 = (704u + sizeof(_g4_t_v243)) > _g4_s88 ? (704u + sizeof(_g4_t_v243)) : _g4_s88,
    _g4_s90 = (708u + sizeof(_g4_t_v244)) > _g4_s89 ? (708u + sizeof(_g4_t_v244)) : _g4_s89,
    _g4_s91 = (712u + sizeof(_g4_t_v245)) > _g4_s90 ? (712u + sizeof(_g4_t_v245)) : _g4_s90,
    _g4_s92 = (716u + sizeof(_g4_t_v246)) > _g4_s91 ? (716u + sizeof(_g4_t_v246)) : _g4_s91,
    _g4_s93 = (720u + sizeof(_g4_t_v247)) > _g4_s92 ? (720u + sizeof(_g4_t_v247)) : _g4_s92,
    _g4_s94 = (736u + sizeof(_g4_t_v248)) > _g4_s93 ? (736u + sizeof(_g4_t_v248)) : _g4_s93,
    _g4_s95 = (1256u + sizeof(_g4_t_v249)) > _g4_s94 ? (1256u + sizeof(_g4_t_v249)) : _g4_s94,
    _g4_s96 = (1260u + sizeof(_g4_t_v250)) > _g4_s95 ? (1260u + sizeof(_g4_t_v250)) : _g4_s95,
    _g4_s97 = (1264u + sizeof(_g4_t_v251)) > _g4_s96 ? (1264u + sizeof(_g4_t_v251)) : _g4_s96,
    _g4_s98 = (1268u + sizeof(_g4_t_v252)) > _g4_s97 ? (1268u + sizeof(_g4_t_v252)) : _g4_s97
  };
  alignas(16) uint8_t _g4_sf[_g4_s98];
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 4u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 8u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 12u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 16u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 16u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 20u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 20u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 20u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 24u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 24u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 28u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 28u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 32u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 36u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 40u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 44u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 52u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 52u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 56u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 56u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 56u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 60u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 60u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 64u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 68u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 68u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 68u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 68u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 72u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 72u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 72u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 72u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 72u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 76u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 76u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 76u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 76u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 76u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 76u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 76u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 76u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 80u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 80u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 80u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 80u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 80u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 80u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 80u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 84u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 84u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 84u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 88u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 92u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 92u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 92u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 92u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 92u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 92u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 96u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 104u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 108u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 108u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 108u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 108u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 108u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 108u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 108u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 108u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 112u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 112u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 112u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 112u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 112u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 112u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 112u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 112u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 112u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 112u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 128u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 132u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 139u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 140u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 144u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 160u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 176u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 180u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 184u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 188u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 704u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 708u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 712u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 716u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 720u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 736u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 1256u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 1260u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 1264u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 1268u);

  v249 = &a1;
  v206 = a1;
  v234 = a2;
  v213 = a3;
  v233 = a4;
  v214 = a5;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v178 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("LtBvTree");
    v7[3] = (uint32_t)(uintptr_t)("StQueryTree");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 4);
  }
  v240 = 0;
  v241 = -2147483520;
  v203 = *(uint32_t *)(v214 + 4);
  v239 = &v242;
  hkTransformf::setMulInverseMul((hkTransformf::Self *)&v243, v213[2], v234[2]);
  v9 = v213[2];
  v10 = (float *)v234[2];
  v11 = *(float *)(v233 + 88);
  v12 = v10[23] * v11;
  v13 = nullptr;
  v14 = v11 * *((float *)v9 + 23);
  if ( hkpBvTreeAgent::m_useAabbCaching != 0 )
    v13 = (float *)((char *)v206 + 32);
  v15 = (float)((float)(v10[16] - v10[20]) * v12) + (float)((float)(*((float *)v9 + 20) - *((float *)v9 + 16)) * v14);
  v16 = (float)((float)(v10[17] - v10[21]) * v12) + (float)((float)(*((float *)v9 + 21) - *((float *)v9 + 17)) * v14);
  v17 = (float)(*((float *)v9 + 22) - *((float *)v9 + 18)) * v14;
  v18 = *((float *)v9 + 39);
  v19 = (float)((float)(v10[18] - v10[22]) * v12) + v17;
  v20 = v10[40];
  v223 = (float)((float)(*((float *)v9 + 1) * v16) + (float)(*(float *)v9 * v15)) + (float)(*((float *)v9 + 2) * v19);
  v215 = (float)((float)(*((float *)v9 + 5) * v16) + (float)(*((float *)v9 + 4) * v15))
       + (float)(*((float *)v9 + 6) * v19);
  v207 = (float)((float)(v16 * *((float *)v9 + 9)) + (float)(v15 * *((float *)v9 + 8)))
       + (float)(v19 * *((float *)v9 + 10));
  v21 = *(float *)(v233 + 12) * 0.5;
  v196 = v21;
  if ( *(uint32_t *)(*(uint32_t *)(v233 + 96) + 16) != 0 )
  {
    v179 = (float *)v234[2];
    v188 = (float)(v18 * v18) * *((float *)v9 + 40);
    G4_VCALL<void>(*v234, 24, &v243, (float)((float)((float)(v18 + v10[39]) * v20) + v188) + v21, v237);
    v22 = (float *)v213[2];
    v23 = (float)(v20 + v21) + v188;
    v24 = v179[20] - v22[12];
    v25 = v179[21] - v22[13];
    v26 = v179[22] - v22[14];
    v27 = (float)((float)(*v22 * v24) + (float)(v22[1] * v25)) + (float)(v22[2] * v26);
    v28 = (float)((float)(v22[4] * v24) + (float)(v22[5] * v25)) + (float)(v22[6] * v26);
    v29 = (float)((float)(v24 * v22[8]) + (float)(v25 * v22[9])) + (float)(v26 * v22[10]);
    v176 = fmaxf(*(float *)v237, v27 - v23);
    v173 = fmaxf(*(float *)&v237[1], v28 - v23);
    v171 = fmaxf(*(float *)&v237[2], v29 - v23);
    v189 = fmaxf(*(float *)&v237[3], v29);
    v183 = fminf(g4_m128_lane<float>(v238, 0), v23 + v27);
    v180 = fminf(g4_m128_lane<float>(v238, 3), v29 + 0.0);
    v165 = fminf(g4_m128_lane<float>(v238, 1), v23 + v28);
    v163 = fminf(g4_m128_lane<float>(v238, 2), v23 + v29);
    v167 = v180 - v189;
    v170 = v183 - v176;
    v169 = v165 - v173;
    v168 = v163 - v171;
    if ( *((float *)v9 + 39) <= 0.0 )
    {
g4_m128_raw(v34) = LODWORD(v207);
    }
    else
    {
      v30 = v29 - *((float *)v9 + 34);
      v31 = *((float *)v9 + 38);
      v32 = *((float *)v9 + 23) * *(float *)(v233 + 88);
      v33 = v28 - *((float *)v9 + 33);
      v160 = v27 - *((float *)v9 + 32);
      v158 = *((float *)v9 + 36);
g4_m128_raw(v34) = *((unsigned int *)v9 + 37);
      v223 = v223 + (float)((float)((float)(v33 * v31) - (float)(v30 *g4_m128_lane<float>(v34, 0))) * v32);
      v215 = (float)((float)((float)(v30 * v158) - (float)(v31 * v160)) * v32) + v215;
g4_m128_lane<float>(v34, 0) = (float)((float)((float)(g4_m128_lane<float>(v34, 0) * v160) - (float)(v158 * v33)) * v32) + v207;
      v207 = (float)(v32 * 0.0) + v207;
    }
    v35 = _mm_andnot_ps(_mm_cmplt_ss(g4_m128_from<__m128>(0LL), g4_m128_from<__m128>(LODWORD(v223))), g4_m128_from<__m128>(LODWORD(v223)));
    v159 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(g4_m128_from<__m128>(0LL), v34), v34), 0);
    v157 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(g4_m128_from<__m128>(0LL), g4_m128_from<__m128>(LODWORD(v215))), g4_m128_from<__m128>(LODWORD(v215))), 0);
    v36 = _mm_andnot_ps(_mm_cmplt_ss(g4_m128_from<__m128>(LODWORD(v215)), g4_m128_from<__m128>(0LL)), g4_m128_from<__m128>(LODWORD(v215)));
    v156 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(g4_m128_from<__m128>(0LL), g4_m128_from<__m128>(LODWORD(v207))), g4_m128_from<__m128>(LODWORD(v207))), 0);
    v155 =g4_m128_lane<float>(v35, 0);
    v37 = _mm_andnot_ps(_mm_cmplt_ss(g4_m128_from<__m128>(LODWORD(v223)), g4_m128_from<__m128>(0LL)), g4_m128_from<__m128>(LODWORD(v223)));
    v38 = _mm_andnot_ps(_mm_cmplt_ss(v34, g4_m128_from<__m128>(0LL)), v34);
    v161 = fmaxf(0.0, v207);
g4_m128_lane<uint64_t>(v39, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v176)), g4_m128_from<__m128>(LODWORD(v173))), 0);
g4_m128_lane<uint64_t>(v39, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v171)), g4_m128_from<__m128>(LODWORD(v189))), 0);
g4_m128_lane<uint64_t>(v35, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v35, g4_m128_from<__m128>(LODWORD(v157))), 0);
g4_m128_lane<uint64_t>(v35, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v159)), g4_m128_from<__m128>(LODWORD(v156))), 0);
    *(__m128 *)v237 = _mm_add_ps(v39, v35);
g4_m128_lane<uint64_t>(v39, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v183)), g4_m128_from<__m128>(LODWORD(v165))), 0);
g4_m128_lane<uint64_t>(v39, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v163)), g4_m128_from<__m128>(LODWORD(v180))), 0);
g4_m128_lane<uint64_t>(v35, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v37, v36), 0);
g4_m128_lane<uint64_t>(v35, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v38, g4_m128_from<__m128>(LODWORD(v161))), 0);
g4_m128_raw(v42) = LODWORD(v171);
    v40 =g4_m128_lane<float>(v38, 0) + v163;
    v238 = _mm_add_ps(v39, v35);
    *(float *)&v184 =g4_m128_lane<float>(v37, 0) + v183;
g4_m128_raw(v44) = LODWORD(v176);
    v181 = v161 + v180;
    v41 =g4_m128_lane<float>(v36, 0) + v165;
    v190 = v189 + v156;
g4_m128_raw(v43) = LODWORD(v173);
    *(float *)g4_m128_ptr<int32_t>(v42) = v171 + v159;
    *(float *)g4_m128_ptr<int32_t>(v43) = v173 + v157;
    *(float *)g4_m128_ptr<int32_t>(v44) = v176 + v155;
  }
  else
  {
    G4_VCALL<void>(*v234, 24, &v243, COERCE_FLOAT(LODWORD(v21)), v237);
g4_m128_raw(v43) = (unsigned int)(uintptr_t)(v237[1]);
    v181 =g4_m128_lane<float>(v238, 3);
    v184 =g4_m128_lane<int32_t>(v238, 0);
g4_m128_raw(v44) = (unsigned int)(uintptr_t)(v237[0]);
    v170 =g4_m128_lane<float>(v238, 0) - *(float *)v237;
    v40 =g4_m128_lane<float>(v238, 2);
    v169 =g4_m128_lane<float>(v238, 1) - *(float *)&v237[1];
g4_m128_raw(v42) = (unsigned int)(uintptr_t)(v237[2]);
g4_m128_lane<float>(v34, 0) = v207;
    v168 =g4_m128_lane<float>(v238, 2) - *(float *)&v237[2];
    v190 = *(float *)&v237[3];
    v167 =g4_m128_lane<float>(v238, 3) - *(float *)&v237[3];
    v41 =g4_m128_lane<float>(v238, 1);
  }
  if ( v13 == nullptr )
    goto LABEL_29;
  LOBYTE(v45) = *(float *)g4_m128_ptr<int32_t>(v42) >= v13[2] ? 4 : 0;
  if ( v190 >= v13[3] )
    v45 = *(float *)g4_m128_ptr<int32_t>(v42) < v13[2] ? 8 : 12;
  v46 = v13[6];
  v47 = v46 < v40 ? 0 : 4;
  if ( v13[7] >= v181 )
    v47 = v46 < v40 ? 8 : 12;
  if ( ((v47 | (v13[4] >= *(float *)&v184) | (v13[5] >= v41 ? 2 : 0))
      & (v45 & 7 | (*(float *)g4_m128_ptr<int32_t>(v44) >= *v13) | (*(float *)g4_m128_ptr<int32_t>(v43) >= v13[1] ? 2 : 0))) == 7 )
    goto LABEL_75;
  v48 = 0x80000000;
g4_m128_raw(v49) = LODWORD(v223);
  if ( v223 <= 0.0 )
  {
    *(float *)g4_m128_ptr<int32_t>(v49) = v223 * -2.0;
    v48 = _mm_cvtsi128_si32(v49);
  }
  v177 = -0.0;
  if ( v215 <= 0.0 )
    v177 = v215 * -2.0;
  v174 = -0.0;
  if (g4_m128_lane<float>(v34, 0) <= 0.0 )
    v174 = -2.0 *g4_m128_lane<float>(v34, 0);
  v172 = -0.0;
  if ( v207 <= 0.0 )
  {
    v172 = v207 * -2.0;
    v50 = v223;
    if ( v223 >= 0.0 )
    {
LABEL_24:
      v224 = v50 * -2.0;
      v51 = v215;
      if ( v215 >= 0.0 )
        goto LABEL_25;
      goto LABEL_122;
    }
  }
  else
  {
    v50 = v223;
    if ( v223 >= 0.0 )
      goto LABEL_24;
  }
  v224 = -0.0;
  v51 = v215;
  if ( v215 >= 0.0 )
  {
LABEL_25:
    v166 = v51 * -2.0;
    if (g4_m128_lane<float>(v34, 0) >= 0.0 )
      goto LABEL_26;
LABEL_123:
    v164 = -0.0;
    v52 = v207;
    if ( v207 >= 0.0 )
      goto LABEL_27;
LABEL_124:
    v162 = -0.0;
    goto LABEL_28;
  }
LABEL_122:
  v166 = -0.0;
  if (g4_m128_lane<float>(v34, 0) < 0.0 )
    goto LABEL_123;
LABEL_26:
  v164 =g4_m128_lane<float>(v34, 0) * -2.0;
  v52 = v207;
  if ( v207 < 0.0 )
    goto LABEL_124;
LABEL_27:
  v162 = v52 * -2.0;
LABEL_28:
  *(float *)g4_m128_ptr<int32_t>(v43) = *(float *)g4_m128_ptr<int32_t>(v43) - v196;
g4_m128_raw(v53) = LODWORD(v224);
  *(float *)g4_m128_ptr<int32_t>(v44) = *(float *)g4_m128_ptr<int32_t>(v44) - v196;
  v54 = _mm_cvtsi128_si32(v43);
  v55 = v42;
  *(float *)g4_m128_ptr<int32_t>(v55) = *(float *)g4_m128_ptr<int32_t>(v42) - v196;
  v56 = _mm_cvtsi128_si32(v44);
  v57 = _mm_cvtsi128_si32(v55);
  *(float *)&v208 = v41 + v196;
  *(float *)&v216 = *(float *)&v184 + v196;
  *(float *)&v197 = v40 + v196;
g4_m128_raw(v58) = LODWORD(v177);
  v59 = _mm_cvtsi32_si128(v48);
  *(float *)g4_m128_ptr<int32_t>(v59) = fminf(*(float *)g4_m128_ptr<int32_t>(v59), v170 * 0.4f);
g4_m128_lane<float>(v58, 0) = fminf(v177, v169 * 0.4f);
g4_m128_lane<float>(v53, 0) = fmaxf(v224, -(float)(v170 * 0.4f));
  v60 = _mm_cvtsi128_si32(v59);
  v61 = v53;
g4_m128_raw(v62) = LODWORD(v164);
g4_m128_lane<float>(v62, 0) = fmaxf(v164, -(float)(v168 * 0.4f));
g4_m128_raw(v63) = LODWORD(v172);
g4_m128_lane<float>(v63, 0) = fminf(v172, 0.4f * v167);
g4_m128_raw(v64) = LODWORD(v166);
g4_m128_lane<float>(v64, 0) = fmaxf(v166, -(float)(v169 * 0.4f));
  v65 = v62;
  v66 = v64;
g4_m128_raw(v67) = LODWORD(v162);
g4_m128_lane<float>(v67, 0) = fmaxf(v162, -(float)(0.4f * v167));
g4_m128_lane<uint64_t>(v62, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(v56)), g4_m128_from<__m128>(_mm_cvtsi32_si128(v54))), 0);
g4_m128_lane<uint64_t>(v62, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(v57)), v67), 0);
g4_m128_lane<uint64_t>(v66, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v61, v66), 0);
g4_m128_lane<uint64_t>(v66, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v65, g4_m128_from<__m128>(LODWORD(v190))), 0);
g4_m128_lane<uint64_t>(v61, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(G4_BITCAST<__m128>(v216), G4_BITCAST<__m128>(v208)), 0);
g4_m128_lane<uint64_t>(v61, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(G4_BITCAST<__m128>(v197), g4_m128_from<__m128>(COERCE_UNSIGNED_INT(v181 + 0.0))), 0);
g4_m128_lane<uint64_t>(v58, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(v60)), v58), 0);
  *(__m128 *)v237 = _mm_add_ps(v62, v66);
g4_m128_lane<uint64_t>(v58, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(COERCE_UNSIGNED_INT(fminf(v174, v168 * 0.4f))), v63), 0);
  v225 = _mm_add_ps(v58, v61);
  *v13 = *(float *)v237;
  v13[1] = *(float *)&v237[1];
  v13[2] = *(float *)&v237[2];
  v238 = v225;
  v13[3] = *(float *)&v237[3];
  v68 =g4_m128_lane<int32_t>(v238, 1);
  v13[4] =g4_m128_lane<float>(v225, 0);
  *(uint64_t *)(v13 + 5) = __PAIR64__(g4_m128_lane<uint32_t>(v238, 2), v68);
  v13[7] =g4_m128_lane<float>(v238, 3);
LABEL_29:
  G4_VCALL<void>(*v213, 76, v237, &v239);
  v69 = (hkpNullAgent::Self *)G4_VCALL<int>(*v213, 64);
  v70 = v213[2];
  v247 = v213;
  v246 = v70;
  v243 = v69;
  if ( hkpBvTreeAgent::m_useFastUpdate == 0 )
  {
    v71 = v240;
    v72 = v239;
    if ( v240 > 1 )
    {
      v252 = 0;
      hkAlgorithm::quickSortRecursive_unsigned_int_hkAlgorithm_24f5d6((int)(uintptr_t)(v239), 0, v240 - 1);
      v71 = v240;
      v72 = v239;
    }
    v237[0] = nullptr;
    v237[1] = nullptr;
    v237[2] = (void *)0x80000000;
g4_m128_lane<int32_t>(v238, 0) = v71;
    v182 = *((uint32_t *)v206 + 2);
    v73 = *((const hkTransformf::Self ****)v206 + 3);
    v217 = &v73[3 * *((uint32_t *)v206 + 4)];
    v209 = &v72[v71];
    if ( v71 != 0 )
    {
      v231 = v71;
      v147 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v148 = v231;
      v149 = *(hkLifoAllocator::Self **)v147;
      v187 = v147;
      v232 = (12 * v231 + 127) & 0xFFFFFF80;
      v194 = *(char **)(*(uint32_t *)v147 + 12);
      v201 = v194;
      if ( v232 <= *(uint32_t *)(*(uint32_t *)v147 + 8) && (unsigned int)(uintptr_t)(&v194[v232]) <= *((uint32_t *)v149 + 4) )
      {
        *((uint32_t *)v149 + 3) = (uint32_t)(uintptr_t)(&v194[v232]);
        v74 = (void *)v148;
        v150 = v194;
      }
      else
      {
        v195 = v148;
        v150 = (void *)hkLifoAllocator::allocateFromNewSlab(v149, v232);
        v201 = v150;
        v74 = (void *)v240;
        v148 = v195;
      }
      v237[0] = v150;
      v151 = (void *)(v148 | 0x80000000);
      v152 = v148 & 0x3FFFFFFF;
      v237[2] = v151;
      v237[3] = v201;
      if ( v152 >= (int)(uintptr_t)(v74) )
      {
        v175 = v187;
        v226 = (const hkTransformf::Self ***)v201;
      }
      else
      {
        v153 = 2 * v152;
        v202 = v74;
        savedregs = 12;
        v249 = (hkpNullAgent::Self **)&v236;
        if ( v153 < (int)(uintptr_t)(v74) )
          v153 = (int)(uintptr_t)(v74);
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v249,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          (int *)v237,
          v153,
          savedregs);
        v175 = v187;
        v226 = (const hkTransformf::Self ***)v237[0];
        v74 = v202;
      }
    }
    else
    {
      v175 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v237[3] = nullptr;
      v74 = nullptr;
      v226 = nullptr;
    }
    v237[1] = v74;
    v198 = v243;
LABEL_35:
    if ( v209 != v72 )
    {
      while ( v217 != v73 )
      {
        v75 = *v72;
        if ( *v72 == *v73 )
        {
          v112 = v226;
          v73 += 3;
          v226 += 3;
          ++v72;
          *v112 = v75;
          v112[1] = *(v73 - 2);
          v112[2] = *(v73 - 1);
          goto LABEL_35;
        }
        if ( *v72 < *v73 )
        {
          v191 = *v72;
          v113 = *(uint32_t *)v243;
          v251 = v248;
          v250 = v75;
          v244 = (*(int (**)(hkpNullAgent::Self *))(v113 + 24))(v243);
          v245 = v191;
          v192 = *(int **)(v233 + 16);
          v185 = *v192;
          a2 = *v72;
          a1 = v198;
          retaddr = v213;
          (*(void (**)(char *, int *, int, const hkTransformf::Self **))(v185 + 28))(&v235, v192, v233, v234);
          if ( v235 != 0 )
          {
            v114 = *(uint32_t *)v233 + 35 * *((uint8_t *)*v234 + 8);
            v115 = *(uint8_t *)(v244 + 8);
            if ( *(uint32_t *)(v233 + 24) != 0 )
              v116 = *(uint8_t *)(v115 + v114 + 1641);
            else
              v116 = *(uint8_t *)(v115 + v114 + 416);
            v117 = (*(int (**)(const hkTransformf::Self **, int *, int, int))(*(uint32_t *)v233 + 20 * v116 + 2868))(
                     v234,
                     &v244,
                     v233,
                     v182);
            v118 = v226;
            v226[2] = (const hkTransformf::Self **)v117;
          }
          else
          {
            NullAgent = (const hkTransformf::Self **)hkpNullAgent::getNullAgent((hkpNullAgent::Self *)v249);
            v118 = v226;
            v226[2] = NullAgent;
          }
          v226 += 3;
          *v118 = *v72++;
          goto LABEL_35;
        }
        v76 = v73[2];
        if ( v76 != nullptr )
          (*((void (**)(const hkTransformf::Self **, int))*v76 + 9))(v76, v203);
        v73 += 3;
        if ( v209 == v72 )
          break;
      }
    }
    while ( v217 != v73 )
    {
      v77 = v73[2];
      if ( v77 != nullptr )
        (*((void (**)(const hkTransformf::Self **, int))*v77 + 9))(v77, v203);
      v73 += 3;
    }
    for ( ; v209 != v72; *v79 = v80 )
    {
      v204 = *v72;
      v81 = *(uint32_t *)v243;
      v251 = v248;
      v250 = v204;
      v244 = (*(int (**)(hkpNullAgent::Self *))(v81 + 24))(v243);
      v245 = v204;
      v82 = *(int **)(v233 + 16);
      v83 = *v72;
      v84 = *v82;
      a1 = v198;
      a2 = v83;
      retaddr = v213;
      (*(void (**)(char *, int *, int, const hkTransformf::Self **))(v84 + 28))(&v235, v82, v233, v234);
      if ( v235 != 0 )
      {
        v85 = *(uint32_t *)v233 + 35 * *((uint8_t *)*v234 + 8);
        v86 = *(uint8_t *)(v244 + 8);
        if ( *(uint32_t *)(v233 + 24) != 0 )
          v78 = *(uint8_t *)(v86 + v85 + 1641);
        else
          v78 = *(uint8_t *)(v86 + v85 + 416);
        v79 = v226;
        v226[2] = (const hkTransformf::Self **)(*(int (**)(const hkTransformf::Self **, int *, int, int))(*(uint32_t *)v233 + 20 * v78 + 2868))(
                                           v234,
                                           &v244,
                                           v233,
                                           v182);
      }
      else
      {
        v79 = v226;
        v226[2] = (const hkTransformf::Self **)hkpNullAgent::getNullAgent((hkpNullAgent::Self *)v249);
      }
      v80 = *v72;
      v226 += 3;
      ++v72;
    }
    v227 = v237[1];
    v87 = *((uint32_t *)v206 + 4);
    if ( (int)(uintptr_t)(v237[1]) <= v87 )
      v87 = (int)(uintptr_t)(v237[1]);
    v88 = *((uint32_t *)v206 + 5) & 0x3FFFFFFF;
    if ( (int)(uintptr_t)(v237[1]) > v88 )
    {
      v89 = (void *)(2 * v88);
      savedregs = 12;
      v249 = (hkpNullAgent::Self **)&v236;
      if ( (int)(uintptr_t)(v89) < (int)(uintptr_t)(v237[1]) )
        v89 = v237[1];
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v249,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)v206 + 3,
        (int)(uintptr_t)(v89),
        savedregs);
    }
    v90 = (char *)v237[0];
    v91 = *((uint32_t *)v206 + 3);
    if ( v87 > 0 )
    {
      v92 = 0;
      do
      {
        *(uint32_t *)(v91 + v92) = *(uint32_t *)&v90[v92];
        *(uint32_t *)(v91 + v92 + 4) = *(uint32_t *)&v90[v92 + 4];
        *(uint32_t *)(v91 + v92 + 8) = *(uint32_t *)&v90[v92 + 8];
        v92 += 12;
      }
      while ( v92 != 12 * v87 );
      v90 = (char *)v237[0];
      v91 = *((uint32_t *)v206 + 3);
    }
    v93 = 12 * v87 + v91;
    v218 = &v90[12 * v87];
    if ( (int)(uintptr_t)(v227) - v87 > 0 )
    {
      v94 = 0;
      v95 = 12 * ((int)(uintptr_t)(v227) - v87);
      do
      {
        *(uint32_t *)(v93 + v94) = *(uint32_t *)&v218[v94];
        *(uint32_t *)(v93 + v94 + 4) = *(uint32_t *)&v218[v94 + 4];
        *(uint32_t *)(v93 + v94 + 8) = *(uint32_t *)&v218[v94 + 8];
        v94 += 12;
      }
      while ( v94 != v95 );
      v90 = (char *)v237[0];
    }
    v96 = (char *)v237[3];
    v97 = v237[1];
    *((uint32_t *)v206 + 4) = (uint32_t)(uintptr_t)(v227);
    v98 = nullptr;
    if ( v96 != v90 )
      v98 = v97;
    v237[1] = v98;
    v99 = (12 *g4_m128_lane<int32_t>(v238, 0) + 127) & 0xFFFFFF80;
    v100 = *(hkLifoAllocator::Self **)v175;
    if ( v99 > *(uint32_t *)(*(uint32_t *)v175 + 8) || *((char **)v100 + 3) != &v96[v99] || v96 == *((char **)v100 + 5) )
      hkLifoAllocator::slowBlockFree(v100, v96, (12 *g4_m128_lane<int32_t>(v238, 0) + 127) & 0xFFFFFF80);
    else
      *((uint32_t *)v100 + 3) = (uint32_t)(uintptr_t)(v96);
    v237[1] = nullptr;
    if ( (int)(uintptr_t)(v237[2]) >= 0 )
      (*(void (**)(uint32_t *, void *, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v237[0],
        12 * (int)(uintptr_t)(v237[2]));
    goto LABEL_75;
  }
  v186 = *((uint32_t *)v206 + 2);
  v229 = *((uint32_t *)v206 + 3);
  v120 = v240;
  v219 = v229 + 12 * *((uint32_t *)v206 + 4);
  if ( v229 == v219 )
  {
    v123 = *((uint32_t *)v206 + 4);
    v205 = v69;
    goto LABEL_104;
  }
  v121 = &v239[v240];
  v122 = v239;
  do
  {
    if ( v121 != v122 && *(const hkTransformf::Self ***)v229 == *v122 )
      goto LABEL_101;
    v122 = v239;
    if ( v121 != v239 )
    {
      while ( *(const hkTransformf::Self ***)v229 != *v122 )
      {
        if ( v121 == ++v122 )
          goto LABEL_126;
      }
LABEL_101:
      ++v122;
      goto LABEL_102;
    }
LABEL_126:
    v193 = v121;
    (*(void (**)(uint32_t, int))(**(uint32_t **)(v229 + 8) + 36))(*(uint32_t *)(v229 + 8), v203);
    v139 = -1431655765 * ((v229 - *((uint32_t *)v206 + 3)) >> 2);
    v140 = *((uint32_t *)v206 + 3);
    v141 = *((uint32_t *)v206 + 4) - 1;
    *((uint32_t *)v206 + 4) = v141;
    v142 = v141 - v139;
    v143 = 4 * (3 * v139 + 3);
    v200 = 12 * v142;
    v144 = v140 + v143 - 12;
    v145 = v143 + v140;
    v146 = 0;
    v121 = v193;
    if ( v200 > 0 )
    {
      do
      {
        *(uint32_t *)(v144 + v146) = *(uint32_t *)(v145 + v146);
        v146 += 4;
      }
      while ( v200 > v146 );
      v121 = v193;
    }
    v229 -= 12;
    v219 -= 12;
LABEL_102:
    v229 += 12;
  }
  while ( v229 != v219 );
  v120 = v240;
  v205 = v243;
  v123 = *((uint32_t *)v206 + 4);
LABEL_104:
  if ( v120 != v123 )
  {
    v124 = v239;
    v230 = &v239[v120];
    v125 = *((const hkTransformf::Self ****)v206 + 3);
    v126 = (int)(uintptr_t)(&v125[3 * v123]);
    if ( v239 != v230 )
    {
      while ( v125 != (const hkTransformf::Self ***)v126 )
      {
        v133 = *v125;
        v125 += 3;
        if ( v133 != *v124 )
        {
          v134 = v124 - v239;
          v135 = *((uint32_t *)v206 + 5) & 0x3FFFFFFF;
          v136 = *((uint32_t *)v206 + 4) + 1;
          v137 = *((uint32_t *)v206 + 4) - v134;
          v222 = v137;
          if ( v136 > v135 )
          {
            v212 = (int *)((char *)v206 + 12);
            goto LABEL_117;
          }
          goto LABEL_107;
        }
LABEL_112:
        if ( v230 == ++v124 )
          goto LABEL_75;
      }
      v134 = v124 - v239;
      v212 = (int *)((char *)v206 + 12);
      v135 = *((uint32_t *)v206 + 5) & 0x3FFFFFFF;
      v136 = *((uint32_t *)v206 + 4) + 1;
      v137 = *((uint32_t *)v206 + 4) - v134;
      v222 = v137;
      if ( v135 < v136 )
      {
LABEL_117:
        v138 = 2 * v135;
        v249 = (hkpNullAgent::Self **)&v236;
        savedregs = 12;
        v199 = v136;
        if ( v138 < v136 )
          v138 = v136;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v249,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v212,
          v138,
          savedregs);
        v136 = v199;
        v137 = v222;
      }
LABEL_107:
      v210 = v136;
      v127 = 12 * v134;
      hkMemUtil::memMove(
        (hkMemUtil::Self *)(*((uint32_t *)v206 + 3) + v127 + 12),
        (char *)(*((uint32_t *)v206 + 3) + v127),
        12 * v137);
      *((uint32_t *)v206 + 4) = v210;
      v128 = (const hkTransformf::Self ***)(*((uint32_t *)v206 + 3) + v127);
      v220 = *v124;
      v129 = *(uint32_t *)v243;
      v251 = v248;
      v250 = v220;
      v244 = (*(int (**)(hkpNullAgent::Self *))(v129 + 24))(v243);
      v245 = v220;
      v221 = *(int **)(v233 + 16);
      v211 = *v221;
      a2 = *v124;
      a1 = v205;
      retaddr = v213;
      (*(void (**)(char *, int *, int, const hkTransformf::Self **))(v211 + 28))(&v235, v221, v233, v234);
      if ( v235 != 0 )
      {
        v130 = *(uint32_t *)v233 + 35 * *((uint8_t *)*v234 + 8);
        v131 = *(uint8_t *)(v244 + 8);
        if ( *(uint32_t *)(v233 + 24) != 0 )
          v132 = *(uint8_t *)(v131 + v130 + 1641);
        else
          v132 = *(uint8_t *)(v131 + v130 + 416);
        v128[2] = (const hkTransformf::Self **)(*(int (**)(const hkTransformf::Self **, int *, int, int))(*(uint32_t *)v233 + 20 * v132 + 2868))(
                                           v234,
                                           &v244,
                                           v233,
                                           v186);
      }
      else
      {
        v128[2] = (const hkTransformf::Self **)hkpNullAgent::getNullAgent((hkpNullAgent::Self *)v249);
      }
      *v128 = *v124;
      v125 = v128 + 3;
      v126 = *((uint32_t *)v206 + 3) + 12 * *((uint32_t *)v206 + 4);
      goto LABEL_112;
    }
  }
LABEL_75:
  v240 = 0;
  if ( v241 >= 0 )
    (*(void (**)(uint32_t *, const hkTransformf::Self ***, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v239,
      4 * v241);
  v101 = *((int **)v206 + 3);
  v228 = &v101[3 * *((uint32_t *)v206 + 4)];
  v242 = v213;
  v241 = (int)(uintptr_t)(v213[2]);
  v102 = *v178;
  v103 = *(uint32_t **)(*v178 + 4);
  if ( (unsigned int)(uintptr_t)(v103) < *(uint32_t *)(*v178 + 12) )
  {
    *v103 = (uint32_t)(uintptr_t)("StNarrowPhase");
    v104 = __rdtsc();
    v103[1] = v104;
    *(uint32_t *)(v102 + 4) = (uint32_t)(uintptr_t)(v103 + 3);
  }
  v105 = G4_VCALL<int>(*v213, 64);
  while ( v101 != v228 )
  {
    v106 = G4_VCALL<int>(v105, 24, *v101, &v243);
    v107 = *v101;
    v239 = (const hkTransformf::Self ***)v106;
    v240 = v107;
    v108 = v101[2];
    v101 += 3;
    G4_VCALL<void>(v108, 32, v234, &v239, v233, v214);
  }
  LODWORD(v109) = (uint32_t)(uintptr_t)(v178);
  v110 = *v178;
  v111 = *(uint32_t **)(*v178 + 4);
  if ( (unsigned int)(uintptr_t)(v111) < *(uint32_t *)(*v178 + 12) )
  {
    *v111 = (uint32_t)(uintptr_t)("lt");
    v109 = __rdtsc();
    v111[1] = v109;
    *(uint32_t *)(v110 + 4) = (uint32_t)(uintptr_t)(v111 + 3);
  }
  return v109;
}


