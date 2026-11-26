#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpCollisi.h"

// ----------------------------------------------------------------------------
// Function: hkpCollisionFilter::staticClass  (binary VA: 0x1693980)
// Original: hkpCollisionFilter::staticClass
// ----------------------------------------------------------------------------
void * hkpCollisionFilter::staticClass()
{
  return &hkpCollisionFilterClass;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionFilter::numShapeKeyHitsLimitBreached  (binary VA: 0x169ae90)
// Original: hkpCollisionFilter::numShapeKeyHitsLimitBreached
// ----------------------------------------------------------------------------
int hkpCollisionFilter::numShapeKeyHitsLimitBreached(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return a8;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionFilter::Destroy  (binary VA: 0x169aeb0)
// Original: hkpCollisionFilter::~hkpCollisionFilter
// ----------------------------------------------------------------------------
void hkpCollisionFilter::Destroy(hkpCollisionFilter::Self *self)
{
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&off_2054D80);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_2054D98);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_2054DB0);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&off_2054DD0);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionFilter::Destroy_ea169af40  (binary VA: 0x169af40)
// Original: hkpCollisionFilter::~hkpCollisionFilter
// ----------------------------------------------------------------------------
void hkpCollisionFilter::Destroy_ea169af40(hkpCollisionFilter::Self *self)
{
  int v1;
  int v2;

  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&off_2054D80);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_2054D98);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_2054DB0);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&off_2054DD0);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 48;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionFilter::Construct  (binary VA: 0x169b010)
// Original: hkpCollisionFilter::hkpCollisionFilter
// ----------------------------------------------------------------------------
void hkpCollisionFilter::Construct(hkpCollisionFilter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2099988);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20999C0);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_20999D4);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_20999F0);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_2099A04);
  *((uint32_t *)self + 8) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionFilterList::staticClass  (binary VA: 0x169bd80)
// Original: hkpCollisionFilterList::staticClass
// ----------------------------------------------------------------------------
void * hkpCollisionFilterList::staticClass()
{
  return &hkpCollisionFilterListClass;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionAgent::updateShapeCollectionFilter  (binary VA: 0x16a0200)
// Original: hkpCollisionAgent::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
void hkpCollisionAgent::updateShapeCollectionFilter()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionDispatcher::resetCreationFunctions  (binary VA: 0x16c2fb0)
// Original: hkpCollisionDispatcher::resetCreationFunctions
// ----------------------------------------------------------------------------
int hkpCollisionDispatcher::resetCreationFunctions(hkpCollisionDispatcher::Self *self)
{
  uint8_t *v1;
  int v2;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  hkpCollisionDispatcher::Self *v10;
  int v11;
  char *v12;

  v11 = 0;
  *((uint32_t *)self + 103) = 1;
  *((uint32_t *)self + 1037) = 1;
  v12 = (char *)self + 416;
  do
  {
    v1 = (uint8_t *)(v12);
    v2 = 0;
    do
    {
      v3 = *((uint32_t *)self + 2104);
      if ( v3 != 0 )
      {
        v4 = 3 * v2 + 105 * v11;
        *(uint8_t *)(v3 + v4 + 2) = 100;
        *(uint8_t *)(*((uint32_t *)self + 2105) + v4 + 2) = 100;
        *(uint8_t *)(*((uint32_t *)self + 2106) + v4 + 2) = 100;
        *(uint8_t *)(*((uint32_t *)self + 2107) + v4 + 2) = 100;
      }
      ++v2;
      *v1 = 0;
      v1[3744] = 0;
      v1[1225] = 0;
      v1[4976] = 0;
      ++v1;
    }
    while ( v2 != 35 );
    ++v11;
    v12 += 35;
  }
  while ( v11 != 35 );
  *((uint8_t *)self + 2884) = 0;
  *((uint32_t *)self + 717) = (uint32_t)(uintptr_t)(hkpNullAgent::createNullAgent);
  *((uint32_t *)self + 718) = (uint32_t)(uintptr_t)(hkpNullAgent::staticGetPenetrations);
  *((uint32_t *)self + 719) = (uint32_t)(uintptr_t)(hkpNullAgent::staticGetClosestPoints);
  *((uint32_t *)self + 720) = (uint32_t)(uintptr_t)(hkpNullAgent::staticLinearCast);
  *((uint32_t *)self + 1656) = (uint32_t)(uintptr_t)(hkNullAgent3::create);
  *((uint32_t *)self + 1657) = (uint32_t)(uintptr_t)(hkNullAgent3::destroy);
  *((uint8_t *)self + 2885) = 1;
  *((uint32_t *)self + 1658) = 0;
  *((uint32_t *)self + 1659) = 0;
  *((uint32_t *)self + 1660) = 0;
  *((uint32_t *)self + 1661) = 0;
  *((uint32_t *)self + 1662) = 0;
  *((uint32_t *)self + 1665) = 0;
  *((uint32_t *)self + 1663) = 0;
  *((uint32_t *)self + 1664) = 0;
  *((uint32_t *)self + 1666) = (uint32_t)(uintptr_t)(hkNullAgent3::process);
  *((uint32_t *)self + 1668) = 0;
  result = hkAgent3Bridge::registerAgent3(self, v10);
  v6 = *((uint32_t *)self + 2106);
  *((uint8_t *)self + 8400) = 0;
  if ( v6 != 0 )
  {
    v7 = 0;
    while ( 1 )
    {
      result = 0;
      while ( 1 )
      {
        v8 = 3 * result++;
        v9 = v8 + 105 * v7;
        *(uint8_t *)(v6 + v9 + 2) = 100;
        *(uint8_t *)(*((uint32_t *)self + 2107) + v9 + 2) = 100;
        if ( result == 35 )
          break;
        v6 = *((uint32_t *)self + 2106);
      }
      if ( ++v7 == 35 )
        break;
      v6 = *((uint32_t *)self + 2106);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionDispatcher::Construct  (binary VA: 0x16c31a0)
// Original: hkpCollisionDispatcher::hkpCollisionDispatcher
// ----------------------------------------------------------------------------
int hkpCollisionDispatcher::Construct(hkpCollisionDispatcher::Self *a1, int a2, int a3)
{
  int i;
  hkpCollisionDispatcher::Self *v4;
  hkpCollisionDispatcher::Self *v5;
  int v6;
  hkpCollisionDispatcher::Self *v7;
  int v8;
  int v9;
  int32_t v10; // kr00_4
  int j;
  int result;
  int v13;
  int v14;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209A888);
  *((uint32_t *)a1 + 2) = a2;
  *((uint32_t *)a1 + 1) = -65535;
  for ( i = 0; i != 1280; i += 20 )
  {
    *((uint8_t *)a1 + i + 2884) = 0;
    *((uint8_t *)a1 + i + 2885) = 0;
  }
  v4 = (hkpCollisionDispatcher::Self *)((char *)a1 + 6624);
  do
  {
    v5 = v4;
    v4 = (hkpCollisionDispatcher::Self *)((char *)v4 + 64);
    v6 = v5 - (hkpCollisionDispatcher::Self *)((char *)a1 + 6624);
    *((uint8_t *)a1 + v6 + 6668) = 0;
    *((uint8_t *)a1 + v6 + 6669) = 0;
    *((uint8_t *)a1 + v6 + 6670) = 0;
    *((uint32_t *)v4 - 10) = 0;
    *((uint32_t *)v4 - 9) = 0;
    *((uint32_t *)v4 - 8) = 0;
    *((uint32_t *)v4 - 7) = 0;
  }
  while ( v4 != (hkpCollisionDispatcher::Self *)((char *)a1 + 7776) );
  v7 = a1;
  v14 = 0;
  *((uint32_t *)a1 + 2101) = 0;
  *((uint32_t *)a1 + 2102) = 0;
  *((uint32_t *)a1 + 2103) = 0x80000000;
  *((uint32_t *)a1 + 2104) = 0;
  *((uint32_t *)a1 + 2105) = 0;
  *((uint32_t *)a1 + 2106) = 0;
  *((uint32_t *)a1 + 2107) = 0;
  *((uint8_t *)a1 + 8400) = 0;
  *((uint8_t *)a1 + 8403) = 1;
  *((uint32_t *)a1 + 1037) = 0;
  *((uint8_t *)a1 + 8402) = 0;
  do
  {
    v8 = 0;
    do
    {
      while ( 1 )
      {
        *((uint32_t *)v7 + v8 + 3) = a3;
        if ( a3 != 0 && *(uint16_t *)(a3 + 6) != 0 )
          break;
        if ( ++v8 == 8 )
          goto LABEL_13;
      }
      v13 = v8;
      do
      {
        v10 = *(uint32_t *)(a3 + 4);
        HIWORD(v9) = HIWORD(v10);
        LOWORD(v9) = 0;
      }
      while ( v10 != __sync_val_compare_and_swap(
                       (volatile int32_t *)(a3 + 4),
                       v10,
                       v9 | (uint16_t)(v10 + 1)) );
      v8 = v13 + 1;
    }
    while ( v13 != 7 );
LABEL_13:
    ++v14;
    v7 = (hkpCollisionDispatcher::Self *)((char *)v7 + 32);
  }
  while ( v14 != 8 );
  for ( j = 0; j != 35; ++j )
    *((uint32_t *)a1 + j + 68) = 1 << j;
  result = hkpCollisionDispatcher::resetCreationFunctions(a1);
  *((uint8_t *)a1 + 8401) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionDispatcher::setEnableChecks  (binary VA: 0x16c3390)
// Original: hkpCollisionDispatcher::setEnableChecks
// ----------------------------------------------------------------------------
int hkpCollisionDispatcher::setEnableChecks(int a1, uint8_t a2)
{
  *(uint8_t *)(a1 + 8403) = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionDispatcher::disableDebugging  (binary VA: 0x16c33b0)
// Original: hkpCollisionDispatcher::disableDebugging
// ----------------------------------------------------------------------------
void hkpCollisionDispatcher::disableDebugging(hkpCollisionDispatcher::Self *self)
{
  int v1;
  int address;

  v1 = *((uint32_t *)self + 2104);
  if ( v1 != 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)address + 48) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 48),
      v1,
      3675);
    (*(void (**)(uint32_t, uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 48) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 48),
      *((uint32_t *)self + 2105),
      3675);
    (*(void (**)(uint32_t, uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 48) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 48),
      *((uint32_t *)self + 2106),
      3675);
    (*(void (**)(uint32_t, uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 48) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 48),
      *((uint32_t *)self + 2107),
      3675);
    *((uint32_t *)self + 2104) = 0;
    *((uint32_t *)self + 2105) = 0;
    *((uint32_t *)self + 2106) = 0;
    *((uint32_t *)self + 2107) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionDispatcher::Destroy  (binary VA: 0x16c3490)
// Original: hkpCollisionDispatcher::~hkpCollisionDispatcher
// ----------------------------------------------------------------------------
void hkpCollisionDispatcher::Destroy(hkpCollisionDispatcher::Self *self)
{
  hkpCollisionDispatcher::Self *v1;
  int j;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int32_t v7; // ett
  int v8;
  int v9;
  int i;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A888);
  hkpCollisionDispatcher::disableDebugging(self);
  v1 = self;
  for ( i = 0; i != 8; ++i )
  {
    for ( j = 0; j != 8; ++j )
    {
      v3 = *((uint32_t *)v1 + j + 3);
      if ( v3 != 0 && *(uint16_t *)(v3 + 6) != 0 )
      {
        v9 = j;
        do
        {
          v5 = *(uint32_t *)(v3 + 4);
          HIWORD(v4) = HIWORD(v5);
          LOWORD(v4) = 0;
          v6 = v4 | (uint16_t)(v5 - 1);
          v7 = v5;
        }
        while ( v7 != __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v7, v6) );
        j = v9;
        if ( (uint16_t)v6 == 0 )
          G4_VCALL<void>(v3, 16);
      }
    }
    v1 = (hkpCollisionDispatcher::Self *)((char *)v1 + 32);
  }
  *((uint32_t *)self + 2102) = 0;
  v8 = *((uint32_t *)self + 2103);
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2101),
      8 * v8);
  *((uint32_t *)self + 2101) = 0;
  *((uint32_t *)self + 2103) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionDispatcher::Destroy_ea16c35b0  (binary VA: 0x16c35b0)
// Original: hkpCollisionDispatcher::~hkpCollisionDispatcher
// ----------------------------------------------------------------------------
void hkpCollisionDispatcher::Destroy_ea16c35b0(hkpCollisionDispatcher::Self *self)
{
  int v1;
  int v2;

  hkpCollisionDispatcher::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8448;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionDispatcher::internalRegisterCollisionAgent  (binary VA: 0x16c3610)
// Original: hkpCollisionDispatcher::internalRegisterCollisionAgent
// ----------------------------------------------------------------------------
int hkpCollisionDispatcher::internalRegisterCollisionAgent(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9;
  int v10;
  int v11;
  int result;
  int v13;
  int v14;
  uint32_t *v15;
  int v16;
  int v17;
  int v18;
  char *v19;
  int v20;
  uint8_t *v21;
  int v22;
  const char *v23;
  int v41;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef const char *_g4_t_ShapeTypeName;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef const char *_g4_t_v31;
  typedef char *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef char *_g4_t_s;
  typedef uint8_t *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef char *_g4_t_v39;
  typedef char _g4_t_v40[1052];
  enum : size_t {
    _g4_s0 = 1168u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v25)) > _g4_s1 ? (0u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v26)) > _g4_s2 ? (4u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v27)) > _g4_s3 ? (4u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_ShapeTypeName)) > _g4_s4 ? (4u + sizeof(_g4_t_ShapeTypeName)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v29)) > _g4_s5 ? (8u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v30)) > _g4_s6 ? (8u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v31)) > _g4_s7 ? (8u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v32)) > _g4_s8 ? (12u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v33)) > _g4_s9 ? (16u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v34)) > _g4_s10 ? (20u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_s)) > _g4_s11 ? (28u + sizeof(_g4_t_s)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v36)) > _g4_s12 ? (32u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v37)) > _g4_s13 ? (36u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v38)) > _g4_s14 ? (40u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v39)) > _g4_s15 ? (44u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v40)) > _g4_s16 ? (48u + sizeof(_g4_t_v40)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_ShapeTypeName &ShapeTypeName = *reinterpret_cast<_g4_t_ShapeTypeName *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);

  v9 = 0;
  v10 = a1;
  v11 = a9;
  result = *(uint32_t *)(a1 + 8408);
  *(uint8_t *)(a1 + 8400) = 1;
  if ( result > 0 )
  {
    v24 = a9 + 1;
    v13 = a4;
    v14 = a5;
    while ( 1 )
    {
      v15 = (uint32_t *)(*(uint32_t *)(a1 + 8404) + 8 * v9);
      result = v15[1];
      if ( result == v13 )
      {
        v29 = v13;
        v26 = v14;
        hkpCollisionDispatcher::internalRegisterCollisionAgent(a1, a2, a3, *v15, v14, a6, a7, a8, v24);
        result = v15[1];
        v14 = v26;
        v13 = v29;
        if ( v26 == result )
          goto LABEL_7;
LABEL_4:
        if ( *(uint32_t *)(a1 + 8408) <= ++v9 )
          goto LABEL_8;
      }
      else
      {
        if ( v14 != result )
          goto LABEL_4;
LABEL_7:
        v30 = v14;
        v27 = v13;
        ++v9;
        result = hkpCollisionDispatcher::internalRegisterCollisionAgent(a1, a2, a3, v13, *v15, a6, a7, a8, v24);
        v14 = v30;
        v13 = v27;
        if ( *(uint32_t *)(a1 + 8408) <= v9 )
        {
LABEL_8:
          v10 = a1;
          v11 = a9;
          break;
        }
      }
    }
  }
  if ( a4 == -1 )
  {
    ++v11;
    v16 = 0;
    v17 = 35;
    if ( a5 != -1 )
      goto LABEL_11;
  }
  else
  {
    result = a4;
    v16 = a4;
    v17 = a4 + 1;
    if ( a5 != -1 )
    {
LABEL_11:
      v38 = a5 + 1;
      result = a5;
      v37 = a5;
      goto LABEL_12;
    }
  }
  ++v11;
  v38 = 35;
  v37 = 0;
LABEL_12:
  if ( v16 < v17 )
  {
    s = (char *)(a2 + v37 + 35 * v16);
    v36 = (uint8_t *)(a8 + 105 * v16 + 3 * v37 + 2);
    v18 = v10;
    v39 = (char *)(v37 + a2 + 35 * v17);
    do
    {
      if ( v37 < v38 )
      {
        if ( a8 != 0 )
        {
          v19 = s;
          v41 = v11;
          v20 = (uint8_t)a3;
          v21 = v36;
          v22 = v41;
          do
          {
            *v19 = v20;
            if ( *(uint8_t *)(v18 + 8403) != 0 && v22 > (char)*v21 )
            {
              v34 = v22;
              v33 = v20;
              ShapeTypeName = hkGetShapeTypeName((char)*(v21 - 2));
              v31 = hkGetShapeTypeName((char)*(v21 - 1));
              v32 = (char *)hkGetShapeTypeName(a4);
              v23 = hkGetShapeTypeName(a5);
              hkString::snprintf(
                (hkString::Self *)v40,
                0x3E8u,
                "Agent handling types <%s-%s> would override more specialized agent <%s-%s>\n"
                "Maybe the order of registering your collision agent is wrong, make sure you register your alternate type agents first",
                v32,
                v23,
                ShapeTypeName,
                v31);
              v20 = v33;
              v22 = v34;
            }
            *v21 = v22;
            *(v21 - 2) = a6;
            ++v19;
            v21 += 3;
            *(v21 - 4) = a7;
          }
          while ( v19 != &s[v38 - v37] );
          v11 = v22;
        }
        else
        {
          v25 = v11;
          memset(s, (uint8_t)a3, v38 - v37);
          v11 = v25;
        }
      }
      s += 35;
      v36 += 105;
      result = (int)(uintptr_t)(v39);
    }
    while ( s != v39 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionDispatcher::registerCollisionAgent  (binary VA: 0x16c39b0)
// Original: hkpCollisionDispatcher::registerCollisionAgent
// ----------------------------------------------------------------------------
int hkpCollisionDispatcher::registerCollisionAgent(int *a1, int a2, int a3, int a4)
{
  int v4;
  int result;

  v4 = 20 * a1[103] + 2864;
  *(int *)((char *)a1 + v4 + 4) = *(uint32_t *)a2;
  *(int *)((char *)a1 + v4 + 8) = *(uint32_t *)(a2 + 4);
  *(int *)((char *)a1 + v4 + 12) = *(uint32_t *)(a2 + 8);
  *(int *)((char *)a1 + v4 + 16) = *(uint32_t *)(a2 + 12);
  *(uint16_t *)((char *)a1 + v4 + 20) = *(uint16_t *)(a2 + 16);
  hkpCollisionDispatcher::internalRegisterCollisionAgent((int)(uintptr_t)(a1), (int)(uintptr_t)(a1 + 1040), 1, a3, a4, a3, a4, a1[2106], 0);
  hkpCollisionDispatcher::internalRegisterCollisionAgent((int)(uintptr_t)(a1), (int)(uintptr_t)(a1 + 104), a1[103], a3, a4, a3, a4, a1[2104], 0);
  result = a2;
  if ( *(uint8_t *)(a2 + 17) != 0 )
  {
    hkpCollisionDispatcher::internalRegisterCollisionAgent((int)(uintptr_t)(a1), (int)(uintptr_t)(a1 + 1348), 1, a3, a4, a3, a4, a1[2107], 0);
    result = hkpCollisionDispatcher::internalRegisterCollisionAgent(
               (int)(uintptr_t)(a1),
               (int)(uintptr_t)(a1) + 1641,
               a1[103],
               a3,
               a4,
               a3,
               a4,
               a1[2105],
               0);
  }
  ++a1[103];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionDispatcher::registerCollisionAgent2  (binary VA: 0x16c3b20)
// Original: hkpCollisionDispatcher::registerCollisionAgent2
// ----------------------------------------------------------------------------
int hkpCollisionDispatcher::registerCollisionAgent2(int *a1, int a2, int a3, int a4)
{
  int v4;
  int result;

  v4 = 20 * a1[103] + 2864;
  *(int *)((char *)a1 + v4 + 4) = *(uint32_t *)a2;
  *(int *)((char *)a1 + v4 + 8) = *(uint32_t *)(a2 + 4);
  *(int *)((char *)a1 + v4 + 12) = *(uint32_t *)(a2 + 8);
  *(int *)((char *)a1 + v4 + 16) = *(uint32_t *)(a2 + 12);
  *(uint16_t *)((char *)a1 + v4 + 20) = *(uint16_t *)(a2 + 16);
  result = hkpCollisionDispatcher::internalRegisterCollisionAgent(
             (int)(uintptr_t)(a1),
             (int)(uintptr_t)(a1 + 104),
             a1[103],
             a3,
             a4,
             a3,
             a4,
             a1[2104],
             0);
  if ( *(uint8_t *)(a2 + 17) != 0 )
    result = hkpCollisionDispatcher::internalRegisterCollisionAgent(
               (int)(uintptr_t)(a1),
               (int)(uintptr_t)(a1) + 1641,
               a1[103],
               a3,
               a4,
               a3,
               a4,
               a1[2105],
               0);
  ++a1[103];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionDispatcher::registerAgent3  (binary VA: 0x16c3c10)
// Original: hkpCollisionDispatcher::registerAgent3
// ----------------------------------------------------------------------------
int hkpCollisionDispatcher::registerAgent3(int a1, int *a2, int a3, int a4)
{
  int v4;
  int v5;
  char v6;
  int v7;
  int v8;
  int v10;
  int v11;
  char v12;
  char v13;
  char v14;
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

  *(uint8_t *)(a1 + 8401) = 1;
  v24 = *a2;
  v23 = a2[1];
  v22 = a2[2];
  v21 = a2[3];
  v20 = a2[4];
  v19 = a2[5];
  v18 = a2[6];
  v17 = a2[7];
  v25 = a2[8];
  v16 = a2[9];
  v15 = a2[10];
  v12 = *((uint8_t *)a2 + 44);
  v14 = *((uint8_t *)a2 + 45);
  v13 = *((uint8_t *)a2 + 46);
  if ( a3 == a4 )
  {
    v6 = *((uint8_t *)a2 + 46);
    v5 = *(uint32_t *)(a1 + 4148);
    v4 = a1 + 4160;
    v7 = 0;
  }
  else
  {
    if ( v14 == 0 )
    {
      v10 = a1 + (*(uint32_t *)(a1 + 4148) << 6) + 6624;
      *(uint32_t *)v10 = v24;
      *(uint32_t *)(v10 + 4) = v23;
      *(uint32_t *)(v10 + 8) = v22;
      *(uint32_t *)(v10 + 12) = v21;
      *(uint32_t *)(v10 + 16) = v20;
      *(uint32_t *)(v10 + 20) = v19;
      *(uint32_t *)(v10 + 24) = v18;
      *(uint32_t *)(v10 + 28) = v17;
      *(uint32_t *)(v10 + 32) = v25;
      *(uint32_t *)(v10 + 36) = v16;
      *(uint32_t *)(v10 + 40) = v15;
      *(uint8_t *)(v10 + 45) = 0;
      *(uint8_t *)(v10 + 44) = v12;
      *(uint8_t *)(v10 + 46) = v13;
      *(uint32_t *)(v10 + 48) = 2;
      hkpCollisionDispatcher::internalRegisterCollisionAgent(
        a1,
        a1 + 4160,
        *(uint32_t *)(a1 + 4148),
        a4,
        a3,
        a4,
        a3,
        *(uint32_t *)(a1 + 8424),
        0);
      v4 = a1 + 4160;
      if ( v12 != 0 )
      {
        hkpCollisionDispatcher::internalRegisterCollisionAgent(
          a1,
          a1 + 5392,
          *(uint32_t *)(a1 + 4148),
          a4,
          a3,
          a4,
          a3,
          *(uint32_t *)(a1 + 8428),
          0);
        v4 = a1 + 4160;
      }
      v11 = *(uint32_t *)(a1 + 4148) + 1;
      *(uint32_t *)(a1 + 4148) = v11;
      v5 = v11;
      v7 = 1;
      if ( *((uint8_t *)a2 + 46) == 0 )
        goto LABEL_5;
      goto LABEL_12;
    }
    v4 = a1 + 4160;
    v5 = *(uint32_t *)(a1 + 4148);
    v6 = *((uint8_t *)a2 + 46);
    v7 = 0;
  }
  if ( v6 == 0 )
  {
LABEL_5:
    *(uint32_t *)(a1 + 4148) = v5 + 1;
    v8 = a1 + (v5 << 6) + 6624;
    *(uint32_t *)v8 = v24;
    *(uint32_t *)(v8 + 4) = v23;
    *(uint32_t *)(v8 + 8) = v22;
    *(uint32_t *)(v8 + 12) = v21;
    *(uint32_t *)(v8 + 16) = v20;
    *(uint32_t *)(v8 + 20) = v19;
    *(uint32_t *)(v8 + 24) = v18;
    *(uint32_t *)(v8 + 28) = v17;
    *(uint32_t *)(v8 + 32) = v25;
    *(uint32_t *)(v8 + 36) = v16;
    *(uint32_t *)(v8 + 40) = v15;
    *(uint32_t *)(v8 + 48) = v7;
    *(uint8_t *)(v8 + 44) = v12;
    *(uint8_t *)(v8 + 45) = v14;
    *(uint8_t *)(v8 + 46) = v13;
    goto LABEL_6;
  }
LABEL_12:
  --v5;
LABEL_6:
  hkpCollisionDispatcher::internalRegisterCollisionAgent(a1, v4, v5, a3, a4, a3, a4, *(uint32_t *)(a1 + 8424), 0);
  if ( v12 != 0 )
    hkpCollisionDispatcher::internalRegisterCollisionAgent(a1, a1 + 5392, v5, a3, a4, a3, a4, *(uint32_t *)(a1 + 8428), 0);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionDispatcher::updateHasAlternateType  (binary VA: 0x16c3f50)
// Original: hkpCollisionDispatcher::updateHasAlternateType
// ----------------------------------------------------------------------------
uint32_t * hkpCollisionDispatcher::updateHasAlternateType(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint32_t *result;

  v4 = 0;
  *(uint32_t *)(a1 + 4 * a2 + 272) |= *(uint32_t *)(a1 + 4 * a3 + 272);
  v5 = *(uint32_t *)(a1 + 8408);
  result = (uint32_t *)(a4 + 1);
  if ( v5 > 0 )
  {
    do
    {
      while ( 1 )
      {
        result = (uint32_t *)(*(uint32_t *)(a1 + 8404) + 8 * v4);
        if ( result[1] == a2 )
          break;
        if ( ++v4 >= v5 )
          return result;
      }
      result = (uint32_t *)hkpCollisionDispatcher::updateHasAlternateType(a1, *result, a2, a4 + 1);
      ++v4;
      v5 = *(uint32_t *)(a1 + 8408);
    }
    while ( v4 < v5 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionDispatcher::registerAlternateShapeType  (binary VA: 0x16c3ff0)
// Original: hkpCollisionDispatcher::registerAlternateShapeType
// ----------------------------------------------------------------------------
int * hkpCollisionDispatcher::registerAlternateShapeType(uint32_t *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  int i;
  uint32_t *v11;
  int v12;
  int v13;
  int *result;
  int v15;

  v3 = a1[2102];
  v4 = 0;
  if ( v3 > 0 )
  {
    while ( 1 )
    {
      v5 = v3;
      v6 = a1[2101];
      v7 = (uint32_t *)(v6 + 8 * v4);
      if ( *v7 == a2 && v7[1] == a3 )
      {
        v8 = v3 - 1;
        a1[2102] = v8;
        v9 = 8 * (v8 - v4);
        if ( v9 <= 0 )
        {
          v5 = v8;
        }
        else
        {
          for ( i = 0; i < v9; i += 4 )
            v7[i / 4u] = *(uint32_t *)(v6 + 8 * v4 + 8 + i);
          v5 = a1[2102];
        }
        if ( v4 >= v5 )
          break;
      }
      else if ( ++v4 >= v3 )
      {
        break;
      }
      v3 = v5;
    }
  }
  hkpCollisionDispatcher::updateHasAlternateType((int)(uintptr_t)(a1), a2, a3, 0);
  v11 = a1;
  v12 = a1[2102];
  if ( v12 == (a1[2103] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(a1 + 2101),
      8,
      v15);
    v11 = a1;
    v12 = a1[2102];
  }
  v13 = v11[2101];
  a1[2102] = v12 + 1;
  result = (int *)(v13 + 8 * v12);
  *result = a2;
  result[1] = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionDispatcher::registerContactMgrFactory  (binary VA: 0x16c4160)
// Original: hkpCollisionDispatcher::registerContactMgrFactory
// ----------------------------------------------------------------------------
int hkpCollisionDispatcher::registerContactMgrFactory(hkpCollisionDispatcher::Self *self, hkpContactMgrFactory::Self *a2, int a3, int a4)
{
  hkpContactMgrFactory::Self *v4;
  int v5;
  int v6;
  int32_t v7; // kr00_4
  int32_t v8;
  int32_t v9; // ett
  int v10;
  int v11;
  int32_t v12; // kr04_4
  int32_t v13;
  int32_t v14; // ett
  int result;
  int v16;
  int32_t v17; // kr08_4
  int v18;
  int32_t v19; // kr0C_4
  hkpContactMgrFactory::Self *v20;

  v4 = a2;
  if ( *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v19 = *((uint32_t *)a2 + 1);
      HIWORD(v18) = HIWORD(v19);
      LOWORD(v18) = 0;
    }
    while ( v19 != __sync_val_compare_and_swap(
                     (volatile int32_t *)a2 + 1,
                     v19,
                     v18 | (uint16_t)(v19 + 1)) );
  }
  v5 = *((uint32_t *)self + 8 * a4 + a3 + 3);
  if ( *(uint16_t *)(v5 + 6) != 0 )
  {
    do
    {
      v7 = *(uint32_t *)(v5 + 4);
      HIWORD(v6) = HIWORD(v7);
      LOWORD(v6) = 0;
      v8 = v6 | (uint16_t)(v7 - 1);
      v9 = v7;
    }
    while ( v9 != __sync_val_compare_and_swap((volatile int32_t *)(v5 + 4), v9, v8) );
    v4 = a2;
    if ( (uint16_t)v8 == 0 )
      G4_VCALL<void>(v5, 16);
  }
  *((uint32_t *)self + 8 * a4 + a3 + 3) = (uint32_t)(uintptr_t)(v4);
  if ( *((uint16_t *)v4 + 3) != 0 )
  {
    do
    {
      v17 = *((uint32_t *)v4 + 1);
      HIWORD(v16) = HIWORD(v17);
      LOWORD(v16) = 0;
    }
    while ( v17 != __sync_val_compare_and_swap(
                     (volatile int32_t *)v4 + 1,
                     v17,
                     v16 | (uint16_t)(v17 + 1)) );
  }
  v10 = *((uint32_t *)self + 8 * a3 + a4 + 3);
  if ( *(uint16_t *)(v10 + 6) != 0 )
  {
    v20 = v4;
    do
    {
      v12 = *(uint32_t *)(v10 + 4);
      HIWORD(v11) = HIWORD(v12);
      LOWORD(v11) = 0;
      v13 = v11 | (uint16_t)(v12 - 1);
      v14 = v12;
    }
    while ( v14 != __sync_val_compare_and_swap((volatile int32_t *)(v10 + 4), v14, v13) );
    v4 = v20;
    if ( (uint16_t)v13 == 0 )
      G4_VCALL<void>(v10, 16);
  }
  result = a4 + 8 * a3;
  *((uint32_t *)self + result + 3) = (uint32_t)(uintptr_t)(v4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionDispatcher::registerContactMgrFactoryWithAll  (binary VA: 0x16c42a0)
// Original: hkpCollisionDispatcher::registerContactMgrFactoryWithAll
// ----------------------------------------------------------------------------
uint32_t * hkpCollisionDispatcher::registerContactMgrFactoryWithAll(hkpCollisionDispatcher::Self *self, hkpContactMgrFactory::Self *a2, int a3)
{
  char *v4;
  char *v5;
  uint32_t *v6;
  volatile int32_t *v7;
  int v8;
  int32_t v9; // kr00_4
  int32_t v10;
  int32_t v11; // ett
  uint32_t *v12;
  volatile int32_t *v13;
  int v14;
  int32_t v15; // kr04_4
  int32_t v16;
  int32_t v17; // ett
  uint32_t *result;
  int v19;
  int32_t v20; // kr08_4
  int v21;
  int32_t v22; // kr0C_4
  char *v23;
  char *v24;
  hkpContactMgrFactory::Self *v25;
  hkpContactMgrFactory::Self *v26;

  v4 = (char *)self + 4 * a3;
  v23 = (char *)self + 32 * a3 + 12;
  v5 = v4 + 12;
  v24 = v4 + 268;
  do
  {
    if ( *((uint16_t *)a2 + 3) != 0 )
    {
      do
      {
        v20 = *((uint32_t *)a2 + 1);
        HIWORD(v19) = HIWORD(v20);
        LOWORD(v19) = 0;
      }
      while ( v20 != __sync_val_compare_and_swap(
                       (volatile int32_t *)a2 + 1,
                       v20,
                       v19 | (uint16_t)(v20 + 1)) );
    }
    v6 = *(uint32_t **)v5;
    v7 = (volatile int32_t *)(*(uint32_t *)v5 + 4);
    if ( *(uint16_t *)(*(uint32_t *)v5 + 6) != 0 )
    {
      v25 = a2;
      do
      {
        v9 = v6[1];
        HIWORD(v8) = HIWORD(v9);
        LOWORD(v8) = 0;
        v10 = v8 | (uint16_t)(v9 - 1);
        v11 = v9;
      }
      while ( v11 != __sync_val_compare_and_swap(v7, v11, v10) );
      a2 = v25;
      if ( (uint16_t)v10 == 0 )
        G4_VCALL<void>(v6, 16);
    }
    *(uint32_t *)v5 = (uint32_t)(uintptr_t)(a2);
    if ( *((uint16_t *)a2 + 3) != 0 )
    {
      do
      {
        v22 = *((uint32_t *)a2 + 1);
        HIWORD(v21) = HIWORD(v22);
        LOWORD(v21) = 0;
      }
      while ( v22 != __sync_val_compare_and_swap(
                       (volatile int32_t *)a2 + 1,
                       v22,
                       v21 | (uint16_t)(v22 + 1)) );
    }
    v12 = *(uint32_t **)v23;
    v13 = (volatile int32_t *)(*(uint32_t *)v23 + 4);
    if ( *(uint16_t *)(*(uint32_t *)v23 + 6) != 0 )
    {
      v26 = a2;
      do
      {
        v15 = v12[1];
        HIWORD(v14) = HIWORD(v15);
        LOWORD(v14) = 0;
        v16 = v14 | (uint16_t)(v15 - 1);
        v17 = v15;
      }
      while ( v17 != __sync_val_compare_and_swap(v13, v17, v16) );
      a2 = v26;
      if ( (uint16_t)v16 == 0 )
        G4_VCALL<void>(v12, 16);
    }
    result = (uint32_t *)(v23);
    v5 += 32;
    v23 += 4;
    *result = (uint32_t)(uintptr_t)(a2);
  }
  while ( v5 != v24 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionDispatcher::getClosestPoints  (binary VA: 0x16c43e0)
// Original: hkpCollisionDispatcher::getClosestPoints
// ----------------------------------------------------------------------------
void hkpCollisionDispatcher::getClosestPoints(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  typedef uint32_t _g4_t_v7[2];
  typedef uint32_t _g4_t_v8[12];
  typedef uint32_t _g4_t_v9[20];
  typedef uint8_t _g4_t_v10[25];
  typedef int16_t _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[12];
  typedef uint8_t _g4_t_v14[25];
  typedef int16_t _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[15];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v9)) > _g4_s2 ? (64u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (144u + sizeof(_g4_t_v10)) > _g4_s3 ? (144u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (169u + sizeof(_g4_t_v11)) > _g4_s4 ? (169u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (172u + sizeof(_g4_t_v12)) > _g4_s5 ? (172u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (176u + sizeof(_g4_t_v13)) > _g4_s6 ? (176u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (224u + sizeof(_g4_t_v14)) > _g4_s7 ? (224u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (249u + sizeof(_g4_t_v15)) > _g4_s8 ? (249u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (252u + sizeof(_g4_t_v16)) > _g4_s9 ? (252u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (256u + sizeof(_g4_t_v17)) > _g4_s10 ? (256u + sizeof(_g4_t_v17)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 64u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 144u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 169u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 172u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 176u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 224u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 249u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 252u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 256u);

  hkpCollisionFilter::Construct((hkpCollisionFilter::Self *)v8);
  v9[4] = (uint32_t)(uintptr_t)(v8);
  v8[8] = 1;
  v7[1] = -65535;
  v8[0] = ((uint32_t)(uintptr_t)&off_20992C8);
  v9[2] = 0;
  v8[2] = ((uint32_t)(uintptr_t)&off_2099300);
  v8[3] = ((uint32_t)(uintptr_t)&off_2099314);
  v8[5] = ((uint32_t)(uintptr_t)&off_2099344);
  v8[4] = (uint32_t)(uintptr_t)(&off_2099330);
  v7[0] = ((uint32_t)(uintptr_t)&off_209B8C8);
  v9[0] = a1;
  v9[5] = (uint32_t)(uintptr_t)(v7);
  *(uint32_t *)v10 = a2;
  *(uint32_t *)&v10[8] = a3;
  v9[3] = a6;
  *(uint32_t *)&v10[12] = 0;
  *(uint32_t *)&v10[4] = -1;
  v10[16] = 0;
  *(uint32_t *)&v10[20] = 0;
  v10[24] = 0;
  v12 = 0;
  v11 = -129;
  hkpCollidable::BoundingVolumeData::BoundingVolumeData((hkpCollidable::BoundingVolumeData::Self *)v13);
  *(uint32_t *)v14 = a4;
  *(uint32_t *)&v14[8] = a5;
  v13[11] = -1082130432;
  LOBYTE(v11) = -20;
  v10[17] = 8;
  *(uint16_t *)&v10[18] = 0;
  *(uint32_t *)&v14[12] = 0;
  *(uint32_t *)&v14[4] = -1;
  v14[16] = 0;
  *(uint32_t *)&v14[20] = 0;
  v14[24] = 0;
  v16 = 0;
  v15 = -129;
  hkpCollidable::BoundingVolumeData::BoundingVolumeData((hkpCollidable::BoundingVolumeData::Self *)v17);
  v17[11] = -1082130432;
  LOBYTE(v15) = -20;
  v14[17] = 8;
  *(uint16_t *)&v14[18] = 0;
  (*(void (**)(uint8_t *, uint8_t *, uint32_t *, int))(a1
                                                       + 20
                                                       * *(uint8_t *)(*(uint8_t *)(a4 + 8)
                                                                            + a1
                                                                            + 35 * *(uint8_t *)(a2 + 8)
                                                                            + 416)
                                                       + 2876))(
    v10,
    v14,
    v9,
    a7);
  v7[0] = ((uint32_t)(uintptr_t)&off_2054CB8);
  hkpNullCollisionFilter::Destroy((hkpNullCollisionFilter::Self *)v8);
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionDispatcher::getPenetrations  (binary VA: 0x16c4620)
// Original: hkpCollisionDispatcher::getPenetrations
// ----------------------------------------------------------------------------
void hkpCollisionDispatcher::getPenetrations(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  typedef uint32_t _g4_t_v7[2];
  typedef uint32_t _g4_t_v8[12];
  typedef uint32_t _g4_t_v9[20];
  typedef uint8_t _g4_t_v10[25];
  typedef int16_t _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[12];
  typedef uint8_t _g4_t_v14[25];
  typedef int16_t _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[15];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v9)) > _g4_s2 ? (64u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (144u + sizeof(_g4_t_v10)) > _g4_s3 ? (144u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (169u + sizeof(_g4_t_v11)) > _g4_s4 ? (169u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (172u + sizeof(_g4_t_v12)) > _g4_s5 ? (172u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (176u + sizeof(_g4_t_v13)) > _g4_s6 ? (176u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (224u + sizeof(_g4_t_v14)) > _g4_s7 ? (224u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (249u + sizeof(_g4_t_v15)) > _g4_s8 ? (249u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (252u + sizeof(_g4_t_v16)) > _g4_s9 ? (252u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (256u + sizeof(_g4_t_v17)) > _g4_s10 ? (256u + sizeof(_g4_t_v17)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 64u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 144u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 169u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 172u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 176u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 224u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 249u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 252u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 256u);

  hkpCollisionFilter::Construct((hkpCollisionFilter::Self *)v8);
  v9[4] = (uint32_t)(uintptr_t)(v8);
  v8[8] = 1;
  v7[1] = -65535;
  v8[0] = ((uint32_t)(uintptr_t)&off_20992C8);
  v9[2] = 0;
  v8[2] = ((uint32_t)(uintptr_t)&off_2099300);
  v8[3] = ((uint32_t)(uintptr_t)&off_2099314);
  v8[5] = ((uint32_t)(uintptr_t)&off_2099344);
  v8[4] = (uint32_t)(uintptr_t)(&off_2099330);
  v7[0] = ((uint32_t)(uintptr_t)&off_209B8C8);
  v9[0] = a1;
  v9[5] = (uint32_t)(uintptr_t)(v7);
  *(uint32_t *)v10 = a2;
  *(uint32_t *)&v10[8] = a3;
  v9[3] = a6;
  *(uint32_t *)&v10[12] = 0;
  *(uint32_t *)&v10[4] = -1;
  v10[16] = 0;
  *(uint32_t *)&v10[20] = 0;
  v10[24] = 0;
  v12 = 0;
  v11 = -129;
  hkpCollidable::BoundingVolumeData::BoundingVolumeData((hkpCollidable::BoundingVolumeData::Self *)v13);
  *(uint32_t *)v14 = a4;
  *(uint32_t *)&v14[8] = a5;
  v13[11] = -1082130432;
  LOBYTE(v11) = -20;
  v10[17] = 8;
  *(uint16_t *)&v10[18] = 0;
  *(uint32_t *)&v14[12] = 0;
  *(uint32_t *)&v14[4] = -1;
  v14[16] = 0;
  *(uint32_t *)&v14[20] = 0;
  v14[24] = 0;
  v16 = 0;
  v15 = -129;
  hkpCollidable::BoundingVolumeData::BoundingVolumeData((hkpCollidable::BoundingVolumeData::Self *)v17);
  v17[11] = -1082130432;
  LOBYTE(v15) = -20;
  v14[17] = 8;
  *(uint16_t *)&v14[18] = 0;
  (*(void (**)(uint8_t *, uint8_t *, uint32_t *, int))(a1
                                                       + 20
                                                       * *(uint8_t *)(*(uint8_t *)(a4 + 8)
                                                                            + a1
                                                                            + 35 * *(uint8_t *)(a2 + 8)
                                                                            + 416)
                                                       + 2872))(
    v10,
    v14,
    v9,
    a7);
  v7[0] = ((uint32_t)(uintptr_t)&off_2054CB8);
  hkpNullCollisionFilter::Destroy((hkpNullCollisionFilter::Self *)v8);
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionDispatcher::initCollisionQualityInfo  (binary VA: 0x16c4860)
// Original: hkpCollisionDispatcher::initCollisionQualityInfo
// ----------------------------------------------------------------------------
int hkpCollisionDispatcher::initCollisionQualityInfo(uint8_t *a1, int a2)
{
  int v2;
  float v3; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  uint16_t *v6;
  uint16_t *v7;
  unsigned int v8;
  int v9;
  uint16_t *v10;
  uint16_t *v11;
  uint8_t *v12;
  uint16_t *v13;
  unsigned int v14;
  int v15;
  uint16_t *v16;
  uint16_t *v17;
  uint16_t *v18;
  uint16_t *v19;
  unsigned int v20;
  int v21;
  uint16_t *v22;
  uint16_t *v23;
  uint16_t *v24;
  uint16_t *v25;
  unsigned int v26;
  int v27;
  uint16_t *v28;
  uint16_t *v29;
  uint16_t *v30;
  uint8_t *v31;
  int v32;
  uint16_t *v33;
  uint16_t *v34;
  int v35;
  float v36; // xmm2_4
  float v37; // xmm7_4
  float v38; // xmm4_4
  float v39; // xmm2_4
  float v40; // xmm7_4
  float v41; // xmm2_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm0_4
  float v47; // xmm1_4
  float v48; // xmm0_4
  uint8_t *v49;
  uint16_t *v50;
  unsigned int v51;
  int v52;
  uint16_t *v53;
  uint16_t *v54;
  int v56; // xmm0_4
  unsigned int v57;

  v2 = a2;
  *((uint32_t *)a1 + 2109) = *(uint32_t *)(a2 + 8);
  *((uint32_t *)a1 + 2108) = *(uint32_t *)(a2 + 12);
  v3 = *(float *)(a2 + 8);
  v4 = *(float *)a2;
  a1[8014] = *(uint8_t *)(a2 + 43);
  *((uint32_t *)a1 + 1988) = *(uint32_t *)(a2 + 4);
  *((uint32_t *)a1 + 1989) = *(uint32_t *)(a2 + 4);
  *((uint32_t *)a1 + 1991) = *(uint32_t *)(a2 + 4);
  v5 = (float)((float)(v4 * v3) * v3) * 0.5;
  if ( *(uint8_t *)(a2 + 41) != 0 )
  {
    v2 = a2;
    *((float *)a1 + 1991) = -2.0 * v5;
  }
  *((uint32_t *)a1 + 1990) = *(uint32_t *)(v2 + 4);
  if ( *(uint8_t *)(v2 + 42) != 0 )
  {
    *((float *)a1 + 1990) = -v5;
    v2 = a2;
  }
  v6 = (uint16_t *)(a1 + 8336);
  *((uint32_t *)a1 + 2001) = 2139095022;
  *((uint32_t *)a1 + 1992) = 0;
  a1[7972] = 0;
  *((uint16_t *)a1 + 4006) = *(uint16_t *)(v2 + 32);
  *((uint32_t *)a1 + 1994) = -533890836;
  v7 = (uint16_t *)(a1 + 7952);
  *((uint32_t *)a1 + 1995) = -533890836;
  *((uint32_t *)a1 + 1998) = -552941789;
  *((uint32_t *)a1 + 1999) = -552941789;
  *((uint32_t *)a1 + 2000) = 1586153251;
  *((uint32_t *)a1 + 1996) = 1065353216;
  *((uint32_t *)a1 + 1997) = 1065353216;
  *((uint32_t *)a1 + 2002) = 1065353216;
  v8 = 63;
  if ( ((unsigned int)(uintptr_t)(a1 + 8336) & 1) != 0 )
  {
    v6 = (uint16_t *)(a1 + 8337);
    v7 = (uint16_t *)(a1 + 7953);
    a1[8336] = a1[7952];
    LOBYTE(v8) = 62;
    if ( ((unsigned int)(uintptr_t)(a1 + 8337) & 2) == 0 )
      goto LABEL_7;
  }
  else if ( (((uint8_t)(uintptr_t)(a1) - 112) & 2) == 0 )
  {
    goto LABEL_7;
  }
  *v6++ = *v7++;
  v8 -= 2;
LABEL_7:
  std::memcpy(v6, v7, 4 * (v8 >> 2));
  v11 = &v7[2 * (v8 >> 2)];
  v10 = &v6[2 * (v8 >> 2)];
  v9 = 0;
  if ( (v8 & 2) != 0 )
  {
    *v10 = *v11;
    v9 = 1;
  }
  if ( (v8 & 1) != 0 )
    LOBYTE(v10[v9]) = v11[v9];
  v12 = a1 + 8016;
  v13 = (uint16_t *)(a1 + 7952);
  v14 = 63;
  if ( ((unsigned int)(uintptr_t)(a1 + 8016) & 1) != 0 )
  {
    v12 = a1 + 8017;
    v13 = (uint16_t *)(a1 + 7953);
    a1[8016] = a1[7952];
    LOBYTE(v14) = 62;
    if ( ((unsigned int)(uintptr_t)(a1 + 8017) & 2) == 0 )
      goto LABEL_13;
  }
  else if ( ((uint8_t)(uintptr_t)(v12) & 2) == 0 )
  {
    goto LABEL_13;
  }
  v12 += 2;
  *((uint16_t *)v12 - 1) = *v13++;
  v14 -= 2;
LABEL_13:
  std::memcpy(v12, v13, 4 * (v14 >> 2));
  v17 = &v13[2 * (v14 >> 2)];
  v16 = (uint16_t *)(&v12[4 * (v14 >> 2)]);
  v15 = 0;
  if ( (v14 & 2) != 0 )
  {
    *v16 = *v17;
    v15 = 1;
  }
  if ( (v14 & 1) != 0 )
    LOBYTE(v16[v15]) = v17[v15];
  v18 = (uint16_t *)(a1 + 8080);
  v19 = (uint16_t *)(a1 + 7952);
  v20 = 63;
  if ( ((unsigned int)(uintptr_t)(a1 + 8080) & 1) != 0 )
  {
    v18 = (uint16_t *)(a1 + 8081);
    v19 = (uint16_t *)(a1 + 7953);
    a1[8080] = a1[7952];
    LOBYTE(v20) = 62;
    if ( ((unsigned int)(uintptr_t)(a1 + 8081) & 2) == 0 )
      goto LABEL_19;
  }
  else if ( (((uint8_t)(uintptr_t)(a1) - 112) & 2) == 0 )
  {
    goto LABEL_19;
  }
  *v18++ = *v19++;
  v20 -= 2;
LABEL_19:
  std::memcpy(v18, v19, 4 * (v20 >> 2));
  v23 = &v19[2 * (v20 >> 2)];
  v22 = &v18[2 * (v20 >> 2)];
  v21 = 0;
  if ( (v20 & 2) != 0 )
  {
    *v22 = *v23;
    v21 = 1;
  }
  if ( (v20 & 1) != 0 )
    LOBYTE(v22[v21]) = v23[v21];
  v24 = (uint16_t *)(a1 + 8144);
  v25 = (uint16_t *)(a1 + 7952);
  v26 = 63;
  if ( ((unsigned int)(uintptr_t)(a1 + 8144) & 1) != 0 )
  {
    v24 = (uint16_t *)(a1 + 8145);
    v25 = (uint16_t *)(a1 + 7953);
    a1[8144] = a1[7952];
    LOBYTE(v26) = 62;
    if ( ((unsigned int)(uintptr_t)(a1 + 8145) & 2) == 0 )
      goto LABEL_25;
  }
  else if ( (((uint8_t)(uintptr_t)(a1) - 48) & 2) == 0 )
  {
    goto LABEL_25;
  }
  *v24++ = *v25++;
  v26 -= 2;
LABEL_25:
  std::memcpy(v24, v25, 4 * (v26 >> 2));
  v29 = &v25[2 * (v26 >> 2)];
  v28 = &v24[2 * (v26 >> 2)];
  v27 = 0;
  if ( (v26 & 2) != 0 )
  {
    *v28 = *v29;
    v27 = 1;
  }
  if ( (v26 & 1) != 0 )
    LOBYTE(v28[v27]) = v29[v27];
  v30 = (uint16_t *)(a1 + 7952);
  v31 = a1 + 8208;
  v57 = 63;
  if ( (((uint8_t)(uintptr_t)(a1) + 16) & 1) != 0 )
  {
    v31 = a1 + 8209;
    v30 = (uint16_t *)(a1 + 7953);
    a1[8208] = a1[7952];
    v57 = 62;
    if ( ((unsigned int)(uintptr_t)(a1 + 8209) & 2) == 0 )
      goto LABEL_31;
  }
  else if ( ((uint8_t)(uintptr_t)(v31) & 2) == 0 )
  {
    goto LABEL_31;
  }
  v31 += 2;
  *((uint16_t *)v31 - 1) = *v30++;
  v57 -= 2;
LABEL_31:
  std::memcpy(v31, v30, 4 * (v57 >> 2));
  v34 = &v30[2 * (v57 >> 2)];
  v33 = (uint16_t *)(&v31[4 * (v57 >> 2)]);
  v32 = 0;
  if ( (v57 & 2) != 0 )
  {
    *v33 = *v34;
    v32 = 1;
  }
  if ( (v57 & 1) != 0 )
    LOBYTE(v33[v32]) = v34[v32];
  v35 = a2;
  *((uint32_t *)a1 + 2087) = *(uint32_t *)(a2 + 4);
  *((uint32_t *)a1 + 2085) = *(uint32_t *)(a2 + 4);
  *((uint32_t *)a1 + 2086) = *(uint32_t *)(a2 + 4);
  if ( *(uint8_t *)(a2 + 40) != 0 )
  {
    *((uint32_t *)a1 + 2010) = -1090519040;
    v36 = *(float *)(a2 + 16);
    *((uint32_t *)a1 + 2014) = -1098907648;
    v37 = -0.5 / (float)(v36 - 1.0);
    *((float *)a1 + 2011) = v37;
    v38 = -0.35f / (float)(*(float *)(a2 + 16) - 1.0);
    *((float *)a1 + 2015) = v38;
    *((float *)a1 + 2016) = v38 * -0.3f;
    *((float *)a1 + 2017) = -v37;
    *((float *)a1 + 2012) = 5.0 / *(float *)(a2 + 12);
    v35 = a2;
    *((float *)a1 + 2013) = 0.005f / *(float *)(a2 + 12);
    *((float *)a1 + 2018) = (float)(-2.0 * v37) / *(float *)(a2 + 12);
    *((uint16_t *)a1 + 4038) = *(uint16_t *)(a2 + 34);
    *((uint32_t *)a1 + 2008) = 1;
    a1[8036] = 1;
    if ( *(uint8_t *)(a2 + 40) != 0 )
    {
      *((uint32_t *)a1 + 2026) = -1090519040;
      v39 = *(float *)(a2 + 20);
      *((uint32_t *)a1 + 2030) = -1098907648;
      v40 = -0.5 / (float)(v39 - 1.0);
      *((float *)a1 + 2027) = v40;
      v41 = *(float *)(a2 + 20);
      *((float *)a1 + 2031) = -0.35f / (float)(v41 - 1.0);
      *((float *)a1 + 2032) = (float)(-0.35f / (float)(v41 - 1.0)) * -0.3f;
      *((float *)a1 + 2033) = -v40;
      *((float *)a1 + 2028) = 5.0 / *(float *)(a2 + 12);
      v35 = a2;
      *((float *)a1 + 2029) = 0.005f / *(float *)(a2 + 12);
      *((float *)a1 + 2034) = (float)(-2.0 * v40) / *(float *)(a2 + 12);
      *((uint16_t *)a1 + 4070) = *(uint16_t *)(a2 + 34);
      *((uint32_t *)a1 + 2024) = 1;
      if ( *(uint8_t *)(a2 + 40) != 0 )
      {
        *((uint32_t *)a1 + 2042) = -1090519040;
        v42 = *(float *)(a2 + 24);
        *((uint32_t *)a1 + 2046) = -1098907648;
        v43 = -0.5 / (float)(v42 - 1.0);
        *((float *)a1 + 2043) = v43;
        v44 = *(float *)(a2 + 24) - 1.0;
        *((float *)a1 + 2049) = -v43;
        *((float *)a1 + 2047) = -0.35f / v44;
        *((float *)a1 + 2048) = -0.3f * (float)(-0.35f / v44);
        v35 = a2;
        *((float *)a1 + 2044) = 5.0 / *(float *)(a2 + 12);
        *((float *)a1 + 2045) = 0.005f / *(float *)(a2 + 12);
        *((float *)a1 + 2050) = (float)-v43 / *(float *)(a2 + 12);
        *((uint16_t *)a1 + 4102) = *(uint16_t *)(a2 + 36);
        *((uint32_t *)a1 + 2040) = 1;
      }
    }
  }
  *((uint32_t *)a1 + 2052) = *(uint32_t *)(v35 + 4);
  if ( *(uint8_t *)(v35 + 40) != 0 )
  {
    *((uint32_t *)a1 + 2058) = -1093874483;
    v45 = *(float *)(v35 + 28);
    *((uint32_t *)a1 + 2062) = -1102263091;
    v46 = -0.6f / (float)(v45 - 1.0);
    *((float *)a1 + 2059) = v46;
    v47 = -0.42000002f / (float)(*(float *)(v35 + 28) - 1.0);
    *((float *)a1 + 2063) = v47;
    *((float *)a1 + 2064) = v47 * -0.3f;
    v48 = -v46;
    *((float *)a1 + 2065) = v48;
    *((float *)a1 + 2060) = 5.0 / *(float *)(v35 + 12);
    *((float *)a1 + 2061) = 0.005f / *(float *)(v35 + 12);
    *((float *)a1 + 2066) = v48 / *(float *)(v35 + 12);
    *((uint16_t *)a1 + 4134) = *(uint16_t *)(v35 + 38);
    *((uint32_t *)a1 + 2056) = 1;
  }
  v49 = a1 + 8272;
  v50 = (uint16_t *)(a1 + 8208);
  v51 = 63;
  if ( ((unsigned int)(uintptr_t)(a1 + 8272) & 1) != 0 )
  {
    v49 = a1 + 8273;
    v50 = (uint16_t *)(a1 + 8209);
    a1[8272] = a1[8208];
    LOBYTE(v51) = 62;
    if ( ((unsigned int)(uintptr_t)(a1 + 8273) & 2) == 0 )
      goto LABEL_43;
  }
  else if ( ((uint8_t)(uintptr_t)(v49) & 2) == 0 )
  {
    goto LABEL_43;
  }
  v49 += 2;
  *((uint16_t *)v49 - 1) = *v50++;
  v51 -= 2;
LABEL_43:
  std::memcpy(v49, v50, 4 * (v51 >> 2));
  v54 = &v50[2 * (v51 >> 2)];
  v53 = (uint16_t *)(&v49[4 * (v51 >> 2)]);
  v52 = 0;
  if ( (v51 & 2) != 0 )
  {
    *v53 = *v54;
    v52 = 1;
  }
  if ( (v51 & 1) != 0 )
    LOBYTE(v53[v52]) = v54[v52];
  v56 = *(uint32_t *)(a2 + 4);
  *((uint32_t *)a1 + 2070) = 981668463;
  *((uint32_t *)a1 + 2071) = v56;
  *((uint32_t *)a1 + 2069) = 1008981770;
  a1[7863] = 1;
  *((__m128i *)a1 + 486) = G4_BITCAST<__m128i>(xmmword_1C7C990);
  a1[7873] = 1;
  *((__m128i *)a1 + 487) = G4_BITCAST<__m128i>(xmmword_1C7C990);
  a1[7776] = 0;
  *((__m128i *)a1 + 488) = G4_BITCAST<__m128i>(xmmword_1C7C990);
  a1[7777] = 0;
  *((__m128i *)a1 + 489) = G4_BITCAST<__m128i>(xmmword_1C7C990);
  a1[7785] = 3;
  *((__m128i *)a1 + 490) = G4_BITCAST<__m128i>(xmmword_1C7C990);
  a1[7779] = 2;
  a1[7780] = 4;
  a1[7781] = 5;
  a1[7782] = 4;
  a1[7784] = 6;
  a1[7786] = 0;
  a1[7787] = 0;
  a1[7795] = 3;
  a1[7788] = 1;
  a1[7789] = 1;
  a1[7790] = 3;
  a1[7791] = 3;
  a1[7792] = 3;
  a1[7794] = 3;
  a1[7866] = 3;
  a1[7867] = 3;
  a1[7875] = 3;
  a1[7868] = 1;
  a1[7869] = 1;
  a1[7870] = 3;
  a1[7871] = 3;
  a1[7872] = 3;
  a1[7874] = 3;
  a1[7796] = 1;
  a1[7797] = 1;
  a1[7805] = 1;
  a1[7798] = 1;
  a1[7799] = 1;
  a1[7800] = 1;
  a1[7801] = 1;
  a1[7802] = 3;
  a1[7804] = 1;
  a1[7806] = 2;
  a1[7807] = 1;
  a1[7815] = 1;
  a1[7812] = 3;
  a1[7814] = 1;
  a1[7816] = 4;
  a1[7817] = 3;
  a1[7825] = 3;
  a1[7818] = 1;
  a1[7819] = 1;
  a1[7820] = 1;
  a1[7821] = 3;
  a1[7822] = 3;
  a1[7824] = 3;
  a1[7826] = 5;
  a1[7827] = 3;
  a1[7835] = 3;
  a1[7828] = 1;
  a1[7829] = 1;
  a1[7830] = 3;
  a1[7831] = 3;
  a1[7832] = 3;
  a1[7834] = 3;
  a1[7836] = 4;
  a1[7837] = 3;
  a1[7845] = 3;
  a1[7838] = 3;
  a1[7839] = 3;
  a1[7840] = 3;
  a1[7841] = 3;
  a1[7842] = 3;
  a1[7844] = 3;
  a1[7856] = 6;
  a1[7857] = 3;
  a1[7865] = 3;
  a1[7858] = 1;
  a1[7859] = 1;
  a1[7860] = 3;
  a1[7861] = 3;
  a1[7862] = 3;
  a1[7864] = 3;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionAgent::Destroy  (binary VA: 0x16c52f0)
// Original: hkpCollisionAgent::~hkpCollisionAgent
// ----------------------------------------------------------------------------
void hkpCollisionAgent::Destroy(hkpCollisionAgent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionAgent::invalidateTim  (binary VA: 0x16db5c0)
// Original: hkpCollisionAgent::invalidateTim
// ----------------------------------------------------------------------------
void hkpCollisionAgent::invalidateTim()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionAgent::warpTime  (binary VA: 0x16db5d0)
// Original: hkpCollisionAgent::warpTime
// ----------------------------------------------------------------------------
void hkpCollisionAgent::warpTime()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionAgent::removePoint  (binary VA: 0x16db5e0)
// Original: hkpCollisionAgent::removePoint
// ----------------------------------------------------------------------------
void hkpCollisionAgent::removePoint()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionAgent::commitPotential  (binary VA: 0x16db5f0)
// Original: hkpCollisionAgent::commitPotential
// ----------------------------------------------------------------------------
void hkpCollisionAgent::commitPotential()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionAgent::createZombie  (binary VA: 0x16db600)
// Original: hkpCollisionAgent::createZombie
// ----------------------------------------------------------------------------
void hkpCollisionAgent::createZombie()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionAgent::Destroy_ea16db610  (binary VA: 0x16db610)
// Original: hkpCollisionAgent::~hkpCollisionAgent
// ----------------------------------------------------------------------------
void hkpCollisionAgent::Destroy_ea16db610(hkpCollisionAgent::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionFilterList::isCollisionEnabled  (binary VA: 0x16f3e40)
// Original: hkpCollisionFilterList::isCollisionEnabled
// ----------------------------------------------------------------------------
hkpCollisionFilterList::Self * hkpCollisionFilterList::isCollisionEnabled(hkpCollisionFilterList::Self *self, const hkpCollidable::Self *a2, const hkpCollidable::Self *a3)
{
  const hkpCollidable::Self *v3;
  int v4;
  int v5;
  typedef const hkpCollidable::Self *_g4_t_v7;
  typedef uint8_t _g4_t_v8[9];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v8)) > _g4_s1 ? (15u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 15u);

  v3 = a2;
  v4 = *((uint32_t *)a2 + 13) - 1;
  v5 = 4 * v4;
  if ( v4 >= 0 )
  {
    while ( 1 )
    {
      v7 = v3;
      (*(void (**)(uint8_t *))(**(uint32_t **)(*((uint32_t *)v3 + 12) + v5) + 24))(v8);
      v3 = v7;
      if ( v8[0] == 0 )
        break;
      --v4;
      v5 -= 4;
      if ( v4 == -1 )
        goto LABEL_6;
    }
    *(uint8_t *)self = 0;
    return self;
  }
  else
  {
LABEL_6:
    *(uint8_t *)self = 1;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionFilterList::isCollisionEnabled  (binary VA: 0x16f3ee0)
// Original: hkpCollisionFilterList::isCollisionEnabled
// ----------------------------------------------------------------------------
uint8_t * hkpCollisionFilterList::isCollisionEnabled(uint8_t *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  typedef int _g4_t_v6;
  typedef uint8_t _g4_t_v7[9];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v7)) > _g4_s1 ? (15u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 15u);

  v2 = a2;
  v3 = *(uint32_t *)(a2 + 52) - 1;
  v4 = 4 * v3;
  if ( v3 >= 0 )
  {
    while ( 1 )
    {
      v6 = v2;
      (*(void (**)(uint8_t *))(**(uint32_t **)(*(uint32_t *)(v2 + 48) + v4) + 28))(v7);
      v2 = v6;
      if ( v7[0] == 0 )
        break;
      --v3;
      v4 -= 4;
      if ( v3 == -1 )
        goto LABEL_6;
    }
    *a1 = 0;
    return a1;
  }
  else
  {
LABEL_6:
    *a1 = 1;
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionFilterList::isCollisionEnabled_ea16f3f90  (binary VA: 0x16f3f90)
// Original: hkpCollisionFilterList::isCollisionEnabled
// ----------------------------------------------------------------------------
uint8_t * hkpCollisionFilterList::isCollisionEnabled_ea16f3f90(uint8_t *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  typedef int _g4_t_v6;
  typedef uint8_t _g4_t_v7[9];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v7)) > _g4_s1 ? (15u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 15u);

  v2 = a2;
  v3 = *(uint32_t *)(a2 + 52) - 1;
  v4 = 4 * v3;
  if ( v3 >= 0 )
  {
    while ( 1 )
    {
      v6 = v2;
      (*(void (**)(uint8_t *))(**(uint32_t **)(*(uint32_t *)(v2 + 48) + v4) + 40))(v7);
      v2 = v6;
      if ( v7[0] == 0 )
        break;
      --v3;
      v4 -= 4;
      if ( v3 == -1 )
        goto LABEL_6;
    }
    *a1 = 0;
    return a1;
  }
  else
  {
LABEL_6:
    *a1 = 1;
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionFilterList::isCollisionEnabled_ea16f4030  (binary VA: 0x16f4030)
// Original: hkpCollisionFilterList::isCollisionEnabled
// ----------------------------------------------------------------------------
uint8_t * hkpCollisionFilterList::isCollisionEnabled_ea16f4030(uint8_t *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  typedef int _g4_t_v6;
  typedef uint8_t _g4_t_v7[9];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v7)) > _g4_s1 ? (15u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 15u);

  v2 = a2;
  v3 = *(uint32_t *)(a2 + 52) - 1;
  v4 = 4 * v3;
  if ( v3 >= 0 )
  {
    while ( 1 )
    {
      v6 = v2;
      (*(void (**)(uint8_t *))(**(uint32_t **)(*(uint32_t *)(v2 + 48) + v4) + 32))(v7);
      v2 = v6;
      if ( v7[0] == 0 )
        break;
      --v3;
      v4 -= 4;
      if ( v3 == -1 )
        goto LABEL_6;
    }
    *a1 = 0;
    return a1;
  }
  else
  {
LABEL_6:
    *a1 = 1;
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionFilterList::isCollisionEnabled_ea16f40f0  (binary VA: 0x16f40f0)
// Original: hkpCollisionFilterList::isCollisionEnabled
// ----------------------------------------------------------------------------
uint8_t * hkpCollisionFilterList::isCollisionEnabled_ea16f40f0(uint8_t *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  typedef int _g4_t_v6;
  typedef uint8_t _g4_t_v7[9];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v7)) > _g4_s1 ? (15u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 15u);

  v2 = a2;
  v3 = *(uint32_t *)(a2 + 52) - 1;
  v4 = 4 * v3;
  if ( v3 >= 0 )
  {
    while ( 1 )
    {
      v6 = v2;
      (*(void (**)(uint8_t *))(**(uint32_t **)(*(uint32_t *)(v2 + 48) + v4) + 44))(v7);
      v2 = v6;
      if ( v7[0] == 0 )
        break;
      --v3;
      v4 -= 4;
      if ( v3 == -1 )
        goto LABEL_6;
    }
    *a1 = 0;
    return a1;
  }
  else
  {
LABEL_6:
    *a1 = 1;
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionFilterList::init  (binary VA: 0x16f4190)
// Original: hkpCollisionFilterList::init
// ----------------------------------------------------------------------------
int hkpCollisionFilterList::init(hkpCollisionFilterList::Self *self, hkpWorld::Self *a2)
{
  int v2;
  int result;
  int v4;

  v2 = 0;
  result = *((uint32_t *)self + 13);
  if ( result > 0 )
  {
    do
    {
      v4 = *(uint32_t *)(*((uint32_t *)self + 12) + 4 * v2++);
      result = G4_VCALL<int>(v4, 20, a2);
    }
    while ( *((uint32_t *)self + 13) > v2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionFilterList::Destroy  (binary VA: 0x16f41e0)
// Original: hkpCollisionFilterList::~hkpCollisionFilterList
// ----------------------------------------------------------------------------
void hkpCollisionFilterList::Destroy(hkpCollisionFilterList::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int32_t v7; // ett
  int v8;
  int v9;

  v1 = 0;
  v2 = *((uint32_t *)self + 13);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209BB08);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209BB40);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_209BB54);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_209BB70);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_209BB84);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 12) + 4 * v1);
      if ( *(uint16_t *)(v3 + 6) != 0 )
      {
        v9 = v1;
        do
        {
          v5 = *(uint32_t *)(v3 + 4);
          HIWORD(v4) = HIWORD(v5);
          LOWORD(v4) = 0;
          v6 = v4 | (uint16_t)(v5 - 1);
          v7 = v5;
        }
        while ( v7 != __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v7, v6) );
        v1 = v9;
        if ( (uint16_t)v6 == 0 )
          G4_VCALL<void>(v3, 16);
        v2 = *((uint32_t *)self + 13);
      }
      ++v1;
    }
    while ( v1 < v2 );
  }
  v8 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 13) = 0;
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 12),
      4 * v8);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&off_2054D80);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_2054D98);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_2054DB0);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&off_2054DD0);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionFilterList::Destroy_ea16f4340  (binary VA: 0x16f4340)
// Original: hkpCollisionFilterList::~hkpCollisionFilterList
// ----------------------------------------------------------------------------
void hkpCollisionFilterList::Destroy_ea16f4340(hkpCollisionFilterList::Self *self)
{
  int v1;
  int v2;

  hkpCollisionFilterList::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 60;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionFilterList::Construct  (binary VA: 0x16f43e0)
// Original: hkpCollisionFilterList::hkpCollisionFilterList
// ----------------------------------------------------------------------------
unsigned int hkpCollisionFilterList::Construct(hkpCollisionFilter::Self *a1, int *a2, int a3, int a4)
{
  unsigned int result;
  unsigned int v6;
  int v7;
  unsigned int v8;
  int v9;
  hkpCollisionFilter::Self *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int32_t v15; // kr00_4
  int i;
  hkpCollisionFilter::Self *savedregs;
  void *retaddr;
  hkpCollisionFilter::Self *v26;
  unsigned int v27;
  int v28;
  int v29;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v20)) > _g4_s3 ? (20u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v21)) > _g4_s4 ? (24u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v22)) > _g4_s5 ? (28u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v23)) > _g4_s6 ? (32u + sizeof(_g4_t_v23)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);

  hkpCollisionFilter::Construct(a1);
  *((uint32_t *)a1 + 12) = 0;
  *((uint32_t *)a1 + 13) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209BB08);
  *((uint32_t *)a1 + 14) = 0x80000000;
  *((uint32_t *)a1 + 2) = ((uint32_t)(uintptr_t)&off_209BB40);
  *((uint32_t *)a1 + 3) = ((uint32_t)(uintptr_t)&off_209BB54);
  *((uint32_t *)a1 + 5) = ((uint32_t)(uintptr_t)&off_209BB84);
  *((uint32_t *)a1 + 4) = (uint32_t)(uintptr_t)(&off_209BB70);
  *((uint32_t *)a1 + 8) = 3;
  result = a2[1];
  if ( (int)result <= 0 )
  {
    *((uint32_t *)a1 + 13) = result;
  }
  else
  {
    v23 = 4 * result;
    result = (*(int (**)(uint32_t *, int *, int, int, int, int, int, int))(hkContainerHeapAllocator::s_alloc + 16))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               &v23,
               v17,
               v18,
               v19,
               v20,
               v21,
               v22);
    *((uint32_t *)a1 + 12) = result;
    *((uint32_t *)a1 + 14) = a4 / 4;
    v6 = a2[1];
    *((uint32_t *)a1 + 13) = v6;
    v29 = *a2;
    if ( (int)v6 > 0 )
    {
      if ( (result >= v29 + 16 || *a2 >= result + 16) && v6 > 0xB )
      {
        savedregs = (hkpCollisionFilter::Self *)v6;
        retaddr = nullptr;
        v27 = v6 >> 2;
        v7 = 4 * (v6 >> 2);
        v8 = 0;
        v26 = (hkpCollisionFilter::Self *)v7;
        v9 = 0;
        do
        {
          ++v8;
          *(__m128i *)(result + v9) = *(__m128i *)(v29 + v9);
          v9 += 16;
        }
        while ( v27 > v8 );
        v10 = savedregs;
        if ( v26 != savedregs )
        {
          *(uint32_t *)(result + 4 * (uint32_t)(uintptr_t)(v26)) = *(uint32_t *)(v29 + 4 * (uint32_t)(uintptr_t)(v26));
          if ( (int)(uintptr_t)(v10) > (int)(uintptr_t)((char *)v26 + 1) )
          {
            *(uint32_t *)(result + 4 * ((uint32_t)(uintptr_t)(v26) + 1)) = *(uint32_t *)(v29 + 4 * ((uint32_t)(uintptr_t)(v26) + 1));
            if ( (int)(uintptr_t)(v10) > (int)(uintptr_t)((char *)v26 + 2) )
              *(uint32_t *)(result + 4 * ((uint32_t)(uintptr_t)(v26) + 2)) = *(uint32_t *)(v29 + 4 * ((uint32_t)(uintptr_t)(v26) + 2));
          }
        }
      }
      else
      {
        for ( i = 0; i != v6; ++i )
          *(uint32_t *)(result + 4 * i) = *(uint32_t *)(v29 + 4 * i);
      }
      v11 = *((uint32_t *)a1 + 13);
      if ( v11 > 0 )
      {
        v12 = 0;
        do
        {
          while ( 1 )
          {
            result = *((uint32_t *)a1 + 12);
            v13 = *(uint32_t *)(result + 4 * v12);
            if ( *(uint16_t *)(v13 + 6) != 0 )
              break;
            if ( ++v12 >= v11 )
              return result;
          }
          v28 = v12;
          do
          {
            v15 = *(uint32_t *)(v13 + 4);
            HIWORD(v14) = HIWORD(v15);
            LOWORD(v14) = 0;
            result = __sync_val_compare_and_swap(
                       (volatile int32_t *)(v13 + 4),
                       v15,
                       v14 | (uint16_t)(v15 + 1));
          }
          while ( v15 != result );
          v11 = *((uint32_t *)a1 + 13);
          v12 = v28 + 1;
        }
        while ( v28 + 1 < v11 );
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionFilterList::Construct  (binary VA: 0x16f45f0)
// Original: hkpCollisionFilterList::hkpCollisionFilterList
// ----------------------------------------------------------------------------
void hkpCollisionFilterList::Construct(hkpCollisionFilterList::Self *self)
{
  hkpCollisionFilter::Construct(self);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209BB08);
  *((uint32_t *)self + 14) = 0x80000000;
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209BB40);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_209BB54);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_209BB70);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_209BB84);
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionFilterList::addCollisionFilter  (binary VA: 0x16f4650)
// Original: hkpCollisionFilterList::addCollisionFilter
// ----------------------------------------------------------------------------
int hkpCollisionFilterList::addCollisionFilter(hkpCollisionFilterList::Self *self, hkpCollisionFilter::Self *a2)
{
  int v2;
  int result;
  int v4;
  int32_t v5; // kr00_4
  int v6;

  if ( *((uint16_t *)a2 + 3) == 0 )
  {
    v2 = *((uint32_t *)self + 13);
    if ( v2 != (*((uint32_t *)self + 14) & 0x3FFFFFFF) )
      goto LABEL_3;
LABEL_6:
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpCollisionFilterList::Self *)((char *)self + 48),
      4,
      v6);
    v2 = *((uint32_t *)self + 13);
    goto LABEL_3;
  }
  do
  {
    v5 = *((uint32_t *)a2 + 1);
    HIWORD(v4) = HIWORD(v5);
    LOWORD(v4) = 0;
  }
  while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v5, v4 | (uint16_t)(v5 + 1)) );
  v2 = *((uint32_t *)self + 13);
  if ( v2 == (*((uint32_t *)self + 14) & 0x3FFFFFFF) )
    goto LABEL_6;
LABEL_3:
  result = *((uint32_t *)self + 12);
  *(uint32_t *)(result + 4 * v2) = (uint32_t)(uintptr_t)(a2);
  ++*((uint32_t *)self + 13);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionFilterList::removeCollisionFilter  (binary VA: 0x16f46f0)
// Original: hkpCollisionFilterList::removeCollisionFilter
// ----------------------------------------------------------------------------
int hkpCollisionFilterList::removeCollisionFilter(hkpCollisionFilterList::Self *self, hkpCollisionFilter::Self *a2)
{
  int v2;
  hkpCollisionFilter::Self **v3;
  int result;
  int v5;
  int v6;
  int v7;
  int32_t v8; // kr00_4
  int32_t v9;
  int32_t v10; // ett

  v2 = *((uint32_t *)self + 13);
  v3 = *((hkpCollisionFilter::Self ***)self + 12);
  if ( v2 <= 0 )
  {
LABEL_6:
    v5 = -1;
    result = -1;
    goto LABEL_7;
  }
  if ( *v3 != a2 )
  {
    result = 0;
    while ( ++result != v2 )
    {
      v5 = result;
      if ( v3[result] == a2 )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
  v5 = 0;
  result = 0;
LABEL_7:
  v6 = v2 - 1;
  *((uint32_t *)self + 13) = v6;
  if ( result != v6 )
  {
    result = (int)(uintptr_t)(v3[v6]);
    v3[v5] = (hkpCollisionFilter::Self *)result;
  }
  if ( *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v8 = *((uint32_t *)a2 + 1);
      HIWORD(v7) = HIWORD(v8);
      LOWORD(v7) = 0;
      v9 = v7 | (uint16_t)(v8 - 1);
      v10 = v8;
      result = __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v10, v9);
    }
    while ( v10 != result );
    if ( (uint16_t)v9 == 0 )
      return G4_VCALL<int>(a2, 16);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionFilterList::getCollisionFilters  (binary VA: 0x16f4790)
// Original: hkpCollisionFilterList::getCollisionFilters
// ----------------------------------------------------------------------------
char * hkpCollisionFilterList::getCollisionFilters(hkpCollisionFilterList::Self *self)
{
  return (char *)self + 48;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionCallbackUtil::performAttachments  (binary VA: 0x177cb30)
// Original: hkpCollisionCallbackUtil::performAttachments
// ----------------------------------------------------------------------------
int hkpCollisionCallbackUtil::performAttachments(hkpCollisionCallbackUtil::Self *self, hkpWorld::Self *a2)
{
  hkpWorld::addConstraintListener(a2, (hkpCollisionCallbackUtil::Self *)((char *)self + 20));
  return hkpWorld::addWorldPostSimulationListener(a2, (hkpCollisionCallbackUtil::Self *)((char *)self + 32));
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionCallbackUtil::performDetachments  (binary VA: 0x177cb80)
// Original: hkpCollisionCallbackUtil::performDetachments
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpCollisionCallbackUtil::performDetachments(hkpCollisionCallbackUtil::Self *self, hkpWorld::Self *a2)
{
  hkpWorld::removeWorldPostSimulationListener(a2, (hkpCollisionCallbackUtil::Self *)((char *)self + 32));
  return hkpWorld::removeConstraintListener(a2, (hkpCollisionCallbackUtil::Self *)((char *)self + 20));
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionCallbackUtil::constraintRemovedCallback  (binary VA: 0x177cbd0)
// Original: hkpCollisionCallbackUtil::constraintRemovedCallback
// ----------------------------------------------------------------------------
int hkpCollisionCallbackUtil::constraintRemovedCallback(hkpCollisionCallbackUtil::Self *self, hkpConstraintInstance::Self *a2)
{
  int *address;
  int v3;
  int *v4;
  uint32_t *v5;
  uint64_t v6; // rax
  hkpSimpleContactConstraintData::Self *v7;
  uint64_t v8; // rax
  int v9;
  uint32_t *v10;
  char *SimpleConstraintContactMgr;
  int v12;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef char *_g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v16)) > _g4_s2 ? (20u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v17)) > _g4_s3 ? (24u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v18)) > _g4_s4 ? (28u + sizeof(_g4_t_v18)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v3 = *address;
  v4 = address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("TtCollLfUtil");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v5 + 3);
  }
  v7 = *((hkpSimpleContactConstraintData::Self **)a2 + 3);
  LODWORD(v8) = G4_VCALL<int>(v7, 20);
  if ( (uint32_t)v8 == 11 )
  {
    SimpleConstraintContactMgr = hkpSimpleContactConstraintData::getSimpleConstraintContactMgr(v7);
    v12 = *((uint32_t *)a2 + 6);
    v16 = *((uint32_t *)a2 + 5);
    v18 = SimpleConstraintContactMgr;
    v17 = v12;
    v14 = v16;
    v15 = 2;
    hkpWorldCallbackUtil::fireContactConstraintRemovedCallback(*(uint32_t *)(v16 + 8), (int)(uintptr_t)(&v15));
    v15 = 0;
    hkpEntityCallbackUtil::fireContactConstraintRemovedCallback(v14, &v15);
    v15 = 1;
    LODWORD(v8) = hkpEntityCallbackUtil::fireContactConstraintRemovedCallback(v12, &v15);
  }
  v9 = *v4;
  v10 = *(uint32_t **)(*v4 + 4);
  if ( (unsigned int)(uintptr_t)(v10) < *(uint32_t *)(*v4 + 12) )
  {
    *v10 = (uint32_t)(uintptr_t)("Et");
    v8 = __rdtsc();
    v10[1] = v8;
    *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(v10 + 3);
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionCallbackUtil::constraintAddedCallback  (binary VA: 0x177ccd0)
// Original: hkpCollisionCallbackUtil::constraintAddedCallback
// ----------------------------------------------------------------------------
int hkpCollisionCallbackUtil::constraintAddedCallback(hkpCollisionCallbackUtil::Self *self, hkpConstraintInstance::Self *a2)
{
  int *address;
  int v3;
  int *v4;
  uint32_t *v5;
  uint64_t v6; // rax
  hkpSimpleContactConstraintData::Self *v7;
  uint64_t v8; // rax
  int v9;
  uint32_t *v10;
  char *SimpleConstraintContactMgr;
  int v12;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef char *_g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v16)) > _g4_s2 ? (20u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v17)) > _g4_s3 ? (24u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v18)) > _g4_s4 ? (28u + sizeof(_g4_t_v18)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v3 = *address;
  v4 = address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("TtCollLtUtil");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v5 + 3);
  }
  v7 = *((hkpSimpleContactConstraintData::Self **)a2 + 3);
  LODWORD(v8) = G4_VCALL<int>(v7, 20);
  if ( (uint32_t)v8 == 11 )
  {
    SimpleConstraintContactMgr = hkpSimpleContactConstraintData::getSimpleConstraintContactMgr(v7);
    v12 = *((uint32_t *)a2 + 6);
    v16 = *((uint32_t *)a2 + 5);
    v18 = SimpleConstraintContactMgr;
    v17 = v12;
    v14 = v16;
    v15 = 2;
    hkpWorldCallbackUtil::fireContactConstraintAddedCallback(*(uint32_t *)(v16 + 8), (int)(uintptr_t)(&v15));
    v15 = 0;
    hkpEntityCallbackUtil::fireContactConstraintAddedCallback(v14, &v15);
    v15 = 1;
    LODWORD(v8) = hkpEntityCallbackUtil::fireContactConstraintAddedCallback(v12, &v15);
  }
  v9 = *v4;
  v10 = *(uint32_t **)(*v4 + 4);
  if ( (unsigned int)(uintptr_t)(v10) < *(uint32_t *)(*v4 + 12) )
  {
    *v10 = (uint32_t)(uintptr_t)("Et");
    v8 = __rdtsc();
    v10[1] = v8;
    *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(v10 + 3);
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionCallbackUtil::Destroy  (binary VA: 0x177ce30)
// Original: hkpCollisionCallbackUtil::~hkpCollisionCallbackUtil
// ----------------------------------------------------------------------------
void hkpCollisionCallbackUtil::Destroy(hkpCollisionCallbackUtil::Self *self)
{
  int v1;
  int v2;
  int v3;

  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20A09F4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A09C8);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A0128);
  v1 = *((uint32_t *)self + 19);
  *((uint32_t *)self + 6) = ((uint32_t)(uintptr_t)&off_20A0108);
  *((uint32_t *)self + 18) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 17),
      12 * v1);
  v2 = *((uint32_t *)self + 16);
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 19) = 0x80000000;
  *((uint32_t *)self + 15) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 14),
      16 * v2);
  v3 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 16) = 0x80000000;
  *((uint32_t *)self + 12) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 11),
      12 * v3);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_209E868);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  *((uint32_t *)self + 6) = ((uint32_t)(uintptr_t)&off_2054CB8);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_209EC68);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpCollisionCallbackUtil::Destroy_ea177cf60  (binary VA: 0x177cf60)
// Original: hkpCollisionCallbackUtil::~hkpCollisionCallbackUtil
// ----------------------------------------------------------------------------
void hkpCollisionCallbackUtil::Destroy_ea177cf60(hkpCollisionCallbackUtil::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20A09F4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A09C8);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A0128);
  v1 = *((uint32_t *)self + 19);
  *((uint32_t *)self + 6) = ((uint32_t)(uintptr_t)&off_20A0108);
  *((uint32_t *)self + 18) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 17),
      12 * v1);
  v2 = *((uint32_t *)self + 16);
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 19) = 0x80000000;
  *((uint32_t *)self + 15) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 14),
      16 * v2);
  v3 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 16) = 0x80000000;
  *((uint32_t *)self + 12) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 11),
      12 * v3);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_209E868);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_209EC68);
  *((uint32_t *)self + 6) = ((uint32_t)(uintptr_t)&off_2054CB8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  v4 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v5 = 80;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v5 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v4, 12, self, v5);
}


