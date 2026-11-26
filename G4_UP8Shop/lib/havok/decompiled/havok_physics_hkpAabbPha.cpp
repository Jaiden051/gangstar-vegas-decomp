#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpAabbPha.h"

// ----------------------------------------------------------------------------
// Function: hkpAabbPhantom::staticClass  (binary VA: 0x172afd0)
// Original: hkpAabbPhantom::staticClass
// ----------------------------------------------------------------------------
void * hkpAabbPhantom::staticClass()
{
  return &hkpAabbPhantomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpAabbPhantom::getMotionState  (binary VA: 0x1748a50)
// Original: hkpAabbPhantom::getMotionState
// ----------------------------------------------------------------------------
int hkpAabbPhantom::getMotionState()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpAabbPhantom::getType  (binary VA: 0x1748a60)
// Original: hkpAabbPhantom::getType
// ----------------------------------------------------------------------------
int hkpAabbPhantom::getType()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpAabbPhantom::calcAabb  (binary VA: 0x1748a70)
// Original: hkpAabbPhantom::calcAabb
// ----------------------------------------------------------------------------
hkAabb::Self * hkpAabbPhantom::calcAabb(hkpAabbPhantom::Self *self, hkAabb::Self *a2)
{
  *(uint32_t *)a2 = *((uint32_t *)self + 40);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 41);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 42);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 43);
  *((uint32_t *)a2 + 4) = *((uint32_t *)self + 44);
  *((uint32_t *)a2 + 5) = *((uint32_t *)self + 45);
  *((uint32_t *)a2 + 6) = *((uint32_t *)self + 46);
  *((uint32_t *)a2 + 7) = *((uint32_t *)self + 47);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpAabbPhantom::isOverlappingCollidableAdded  (binary VA: 0x1748ac0)
// Original: hkpAabbPhantom::isOverlappingCollidableAdded
// ----------------------------------------------------------------------------
hkpAabbPhantom::Self * hkpAabbPhantom::isOverlappingCollidableAdded(hkpAabbPhantom::Self *self, const hkpCollidable::Self *a2, int a3)
{
  hkpAabbPhantom::Self *result;
  int v4;
  uint32_t *v5;
  int v6;

  result = self;
  v4 = *((uint32_t *)a2 + 49);
  if ( v4 <= 0 )
  {
LABEL_6:
    *(uint8_t *)self = 0;
    return result;
  }
  v5 = *((uint32_t **)a2 + 48);
  v6 = 0;
  if ( *v5 != a3 )
  {
    while ( ++v6 != v4 )
    {
      if ( v5[v6] == a3 )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  *(uint8_t *)self = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpAabbPhantom::removeOverlappingCollidable  (binary VA: 0x1748b10)
// Original: hkpAabbPhantom::removeOverlappingCollidable
// ----------------------------------------------------------------------------
int hkpAabbPhantom::removeOverlappingCollidable(hkpAabbPhantom::Self *self, hkpCollidable::Self *a2)
{
  hkpAabbPhantom::Self *v2;
  int v3;
  hkpCollidable::Self **v4;
  int v5;
  bool v6; // si
  int v7;
  int v8;
  int result;
  int v10;
  int v11;
  typedef int _g4_t_v12;
  typedef bool _g4_t_v13;
  typedef int _g4_t_v14;
  typedef hkpAabbPhantom::Self *_g4_t_v15;
  typedef uint32_t _g4_t_v16[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (19u + sizeof(_g4_t_v13)) > _g4_s1 ? (19u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v16)) > _g4_s4 ? (32u + sizeof(_g4_t_v16)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 19u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);

  v2 = self;
  v3 = *((uint32_t *)self + 49);
  if ( v3 <= 0 )
  {
    v12 = -4;
    v6 = false;
    v13 = false;
    v14 = -1;
  }
  else
  {
    v4 = *((hkpCollidable::Self ***)self + 48);
    if ( *v4 == a2 )
    {
      v12 = 0;
      v6 = true;
      v13 = true;
      v14 = 0;
    }
    else
    {
      v5 = 0;
      do
      {
        if ( ++v5 == v3 )
        {
          v2 = self;
          v12 = -4;
          v6 = false;
          v13 = false;
          v14 = -1;
          goto LABEL_7;
        }
      }
      while ( v4[v5] != a2 );
      v14 = v5;
      v12 = 4 * v5;
      v6 = v5 >= 0;
      v2 = self;
      v13 = v5 >= 0;
    }
  }
LABEL_7:
  v16[1] = (uint32_t)(uintptr_t)(a2);
  LOBYTE(v16[2]) = v6;
  v7 = *((uint32_t *)v2 + 35);
  v16[0] = (uint32_t)(uintptr_t)(v2);
  v8 = v7 - 1;
  result = (int)(uintptr_t)(v16);
  v10 = 4 * v8;
  if ( v8 >= 0 )
  {
    do
    {
      result = *(uint32_t *)(*((uint32_t *)v2 + 34) + v10);
      if ( result != 0 )
      {
        v15 = v2;
        result = G4_VCALL<int>(result, 4, v16);
        v2 = v15;
      }
      --v8;
      v10 -= 4;
    }
    while ( v8 != -1 );
  }
  if ( v13 )
  {
    v11 = *((uint32_t *)v2 + 48);
    result = *((uint32_t *)v2 + 49) - 1;
    *((uint32_t *)v2 + 49) = result;
    if ( v14 != result )
    {
      result = *(uint32_t *)(v11 + 4 * result);
      *(uint32_t *)(v11 + v12) = result;
    }
    *((uint8_t *)v2 + 204) = 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpAabbPhantom::addOverlappingCollidable  (binary VA: 0x1748c80)
// Original: hkpAabbPhantom::addOverlappingCollidable
// ----------------------------------------------------------------------------
int hkpAabbPhantom::addOverlappingCollidable(hkpAabbPhantom::Self *self, hkpCollidable::Self *a2)
{
  hkpAabbPhantom::Self *v2;
  int v3;
  int v4;
  void (***v5)(uint32_t, uint32_t *);
  int result;
  int v7;
  typedef int _g4_t_v8;
  typedef hkpAabbPhantom::Self *_g4_t_v9;
  typedef hkpAabbPhantom::Self *_g4_t_v10;
  typedef uint32_t _g4_t_v11[2];
  typedef int _g4_t_v12;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v9)) > _g4_s1 ? (28u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v11)) > _g4_s3 ? (32u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v12)) > _g4_s4 ? (40u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);

  v2 = self;
  v11[0] = (uint32_t)(uintptr_t)(self);
  v11[1] = (uint32_t)(uintptr_t)(a2);
  v12 = 0;
  v3 = *((uint32_t *)self + 35) - 1;
  if ( v3 < 0 )
    goto LABEL_7;
  v4 = 4 * v3;
  do
  {
    v5 = *(void (****)(uint32_t, uint32_t *))(*((uint32_t *)v2 + 34) + v4);
    if ( v5 != nullptr )
    {
      v9 = v2;
      (**v5)((uint32_t)(uintptr_t)(v5), v11);
      v2 = v9;
    }
    --v3;
    v4 -= 4;
  }
  while ( v3 != -1 );
  result = v12;
  if ( v12 == 0 )
  {
LABEL_7:
    v7 = *((uint32_t *)v2 + 49);
    if ( v7 == (*((uint32_t *)v2 + 50) & 0x3FFFFFFF) )
    {
      v10 = v2;
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkpAabbPhantom::Self *)((char *)v2 + 192),
        4,
        v8);
      v2 = v10;
      v7 = *((uint32_t *)v10 + 49);
    }
    result = *((uint32_t *)v2 + 48);
    *(uint32_t *)(result + 4 * v7) = (uint32_t)(uintptr_t)(a2);
    *((uint8_t *)v2 + 204) = 1;
    ++*((uint32_t *)v2 + 49);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpAabbPhantom::deallocateInternalArrays  (binary VA: 0x1748d80)
// Original: hkpAabbPhantom::deallocateInternalArrays
// ----------------------------------------------------------------------------
int hkpAabbPhantom::deallocateInternalArrays(hkpAabbPhantom::Self *self)
{
  int v2;

  if ( *((uint32_t *)self + 49) != 0 )
    return hkpPhantom::deallocateInternalArrays(self);
  v2 = *((uint32_t *)self + 50);
  *((uint32_t *)self + 49) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 48),
      4 * v2);
  *((uint32_t *)self + 48) = 0;
  *((uint32_t *)self + 50) = 0x80000000;
  return hkpPhantom::deallocateInternalArrays(self);
}

// ----------------------------------------------------------------------------
// Function: hkpAabbPhantom::Destroy  (binary VA: 0x1748e10)
// Original: hkpAabbPhantom::~hkpAabbPhantom
// ----------------------------------------------------------------------------
void hkpAabbPhantom::Destroy(hkpAabbPhantom::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209F4C8);
  v1 = *((uint32_t *)self + 50);
  *((uint32_t *)self + 49) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 48),
      4 * v1);
  *((uint32_t *)self + 48) = 0;
  *((uint32_t *)self + 50) = 0x80000000;
  hkpPhantom::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpAabbPhantom::Destroy_ea1748e90  (binary VA: 0x1748e90)
// Original: hkpAabbPhantom::~hkpAabbPhantom
// ----------------------------------------------------------------------------
void hkpAabbPhantom::Destroy_ea1748e90(hkpAabbPhantom::Self *self)
{
  int v1;
  int v2;

  hkpAabbPhantom::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 208;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpAabbPhantom::Construct  (binary VA: 0x1748ef0)
// Original: hkpAabbPhantom::hkpAabbPhantom
// ----------------------------------------------------------------------------
void hkpAabbPhantom::Construct(hkpAabbPhantom::Self *self, const hkAabb::Self *a2, unsigned int a3)
{
  hkpWorldObject::Construct((int)(uintptr_t)(self), 0, 2);
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0x80000000;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0x80000000;
  *((uint8_t *)self + 32) = -16;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209F4C8);
  *((uint32_t *)self + 48) = 0;
  *((uint32_t *)self + 49) = 0;
  *((uint32_t *)self + 50) = 0x80000000;
  *((uint8_t *)self + 204) = 0;
  *((uint32_t *)self + 40) = *(uint32_t *)a2;
  *((uint32_t *)self + 41) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 42) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 43) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 44) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 45) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 46) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 47) = *((uint32_t *)a2 + 7);
  *((uint32_t *)self + 11) = a3;
}

// ----------------------------------------------------------------------------
// Function: hkpAabbPhantom::clone  (binary VA: 0x1748ff0)
// Original: hkpAabbPhantom::clone
// ----------------------------------------------------------------------------
int * hkpAabbPhantom::clone(hkpAabbPhantom::Self *self)
{
  unsigned int v1;
  int address;
  int *v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  unsigned int v14;
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
  int v26;
  int v27;
  int v28;
  int v29;
  int j;
  int i;
  int savedregs;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef unsigned int _g4_t_v45;
  typedef unsigned int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef hkpAabbPhantom::Self *_g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint32_t _g4_t_v57[6];
  typedef hkArrayUtil::Self *_g4_t_v58;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v32)) > _g4_s0 ? (8u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v33)) > _g4_s1 ? (12u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v34)) > _g4_s2 ? (16u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v35)) > _g4_s3 ? (20u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v36)) > _g4_s4 ? (24u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v37)) > _g4_s5 ? (28u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v38)) > _g4_s6 ? (32u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v39)) > _g4_s7 ? (32u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v40)) > _g4_s8 ? (36u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v41)) > _g4_s9 ? (40u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v42)) > _g4_s10 ? (40u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v43)) > _g4_s11 ? (40u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v44)) > _g4_s12 ? (44u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v45)) > _g4_s13 ? (44u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v46)) > _g4_s14 ? (44u + sizeof(_g4_t_v46)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v47)) > _g4_s15 ? (48u + sizeof(_g4_t_v47)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v48)) > _g4_s16 ? (48u + sizeof(_g4_t_v48)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v49)) > _g4_s17 ? (48u + sizeof(_g4_t_v49)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v50)) > _g4_s18 ? (52u + sizeof(_g4_t_v50)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v51)) > _g4_s19 ? (52u + sizeof(_g4_t_v51)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v52)) > _g4_s20 ? (52u + sizeof(_g4_t_v52)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v53)) > _g4_s21 ? (52u + sizeof(_g4_t_v53)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v54)) > _g4_s22 ? (56u + sizeof(_g4_t_v54)) : _g4_s22,
    _g4_s24 = (56u + sizeof(_g4_t_v55)) > _g4_s23 ? (56u + sizeof(_g4_t_v55)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v56)) > _g4_s24 ? (60u + sizeof(_g4_t_v56)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v57)) > _g4_s25 ? (64u + sizeof(_g4_t_v57)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v58)) > _g4_s26 ? (88u + sizeof(_g4_t_v58)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 48u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 52u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 52u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 52u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 52u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 56u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 56u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 64u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 88u);

  v58 = (hkArrayUtil::Self *)&self;
  v54 = self;
  v1 = *((uint32_t *)self + 11);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v3 = (int *)(*(int (**)(uint32_t, int, int, int, int, int, int, int, int, int, int, int, int, int, hkpAabbPhantom::Self *, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                *(uint32_t *)(*(uint32_t *)address + 44),
                208,
                v32,
                v33,
                v34,
                v35,
                v36,
                v37,
                v38,
                v40,
                v41,
                v44,
                v47,
                v50,
                v54,
                v56,
                v57[0],
                v57[1],
                v57[2],
                v57[3],
                v57[4],
                v57[5]);
  hkpAabbPhantom::Construct((hkpAabbPhantom::Self *)v3, (const hkAabb::Self *)(v55 + 40), v1);
  v4 = v55[35];
  if ( (v3[36] & 0x3FFFFFFF) < v4 )
  {
    if ( v3[36] >= 0 )
    {
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v3[34],
        4 * v3[36]);
      v4 = v55[35];
    }
    v57[0] = 4 * v4;
    v26 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerHeapAllocator::s_alloc + 16))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v57);
    v27 = v57[0];
    v28 = v57[0];
    v3[34] = v26;
    v29 = v28 + 3;
    v51 = v26;
    v5 = v55;
    if ( v27 < 0 )
      v27 = v29;
    v3[36] = v27 >> 2;
    v4 = v55[35];
  }
  else
  {
    v51 = v3[34];
    v5 = v55;
  }
  v3[35] = v4;
  v48 = v5[34];
  if ( v4 > 0 )
  {
    if ( (v48 >= v51 + 16 || v51 >= v48 + 16) && (unsigned int)v4 > 0xB )
    {
      v6 = 0;
      v45 = 0;
      v42 = 4 * ((unsigned int)v4 >> 2);
      do
      {
        ++v45;
        *(__m128i *)(v51 + v6) = *(__m128i *)(v48 + v6);
        v6 += 16;
      }
      while ( (unsigned int)v4 >> 2 > v45 );
      if ( v4 != v42 )
      {
        *(uint32_t *)(v51 + 16 * ((unsigned int)v4 >> 2)) = *(uint32_t *)(v48 + 16 * ((unsigned int)v4 >> 2));
        if ( v4 > v42 + 1 )
        {
          *(uint32_t *)(v51 + 4 * (v42 + 1)) = *(uint32_t *)(v48 + 4 * (v42 + 1));
          if ( v4 > v42 + 2 )
            *(uint32_t *)(v51 + 4 * (v42 + 2)) = *(uint32_t *)(v48 + 4 * (v42 + 2));
        }
      }
    }
    else
    {
      for ( i = 0; i != v4; ++i )
        *(uint32_t *)(v51 + 4 * i) = *(uint32_t *)(v48 + 4 * i);
    }
  }
  v7 = v55[38];
  if ( (v3[39] & 0x3FFFFFFF) >= v7 )
  {
    v52 = v3[37];
    v12 = v55;
  }
  else
  {
    if ( v3[39] >= 0 )
    {
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v3[37],
        4 * v3[39]);
      v7 = v55[38];
    }
    v57[0] = 4 * v7;
    v8 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerHeapAllocator::s_alloc + 16))(
           (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
           v57);
    v9 = v57[0];
    v52 = v8;
    v10 = v57[0];
    v3[37] = v8;
    v11 = v10 + 3;
    if ( v9 < 0 )
      v9 = v11;
    v12 = v55;
    v3[39] = v9 >> 2;
    v7 = v55[38];
  }
  v3[38] = v7;
  v49 = v12[37];
  if ( v7 > 0 )
  {
    if ( (v49 >= v52 + 16 || v52 >= v49 + 16) && (unsigned int)v7 > 0xB )
    {
      v39 = v7;
      v13 = 0;
      v46 = 0;
      v43 = 4 * ((unsigned int)v7 >> 2);
      v14 = (unsigned int)v7 >> 2;
      do
      {
        ++v46;
        *(__m128i *)(v52 + v13) = *(__m128i *)(v49 + v13);
        v13 += 16;
      }
      while ( v46 < v14 );
      if ( v39 != v43 )
      {
        *(uint32_t *)(v52 + 4 * v43) = *(uint32_t *)(v49 + 4 * v43);
        if ( v43 + 1 < v39 )
        {
          *(uint32_t *)(v52 + 4 * (v43 + 1)) = *(uint32_t *)(v49 + 4 * (v43 + 1));
          if ( v43 + 2 < v39 )
            *(uint32_t *)(v52 + 4 * (v43 + 2)) = *(uint32_t *)(v49 + 4 * (v43 + 2));
        }
      }
    }
    else
    {
      for ( j = 0; j != v7; ++j )
        *(uint32_t *)(v52 + 4 * j) = *(uint32_t *)(v49 + 4 * j);
    }
  }
  v15 = v3[32];
  v16 = v55[32];
  if ( v16 <= v15 )
    v15 = v55[32];
  v53 = v15;
  v17 = v3[33] & 0x3FFFFFFF;
  if ( v16 > v17 )
  {
    v18 = 2 * v17;
    savedregs = 16;
    v58 = (hkArrayUtil::Self *)&v56;
    if ( v18 < v16 )
      v18 = v16;
    hkArrayUtil::reserve(v58, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v3 + 31, v18, savedregs);
  }
  v19 = v3[31];
  v20 = v55[31];
  if ( v53 > 0 )
  {
    v21 = 0;
    do
    {
      *(uint32_t *)(v19 + v21) = *(uint32_t *)(v20 + v21);
      *(uint32_t *)(v19 + v21 + 4) = *(uint32_t *)(v20 + v21 + 4);
      *(uint32_t *)(v19 + v21 + 8) = *(uint32_t *)(v20 + v21 + 8);
      *(uint32_t *)(v19 + v21 + 12) = *(uint32_t *)(v20 + v21 + 12);
      v21 += 16;
    }
    while ( v21 != 16 * v53 );
    v19 = v3[31];
    v20 = v55[31];
  }
  v22 = 16 * v53 + v20;
  v23 = 16 * v53 + v19;
  v24 = 0;
  if ( v16 - v53 > 0 )
  {
    do
    {
      *(uint32_t *)(v23 + v24) = *(uint32_t *)(v22 + v24);
      *(uint32_t *)(v23 + v24 + 4) = *(uint32_t *)(v22 + v24 + 4);
      *(uint32_t *)(v23 + v24 + 8) = *(uint32_t *)(v22 + v24 + 8);
      *(uint32_t *)(v23 + v24 + 12) = *(uint32_t *)(v22 + v24 + 12);
      v24 += 16;
    }
    while ( v24 != 16 * (v16 - v53) );
  }
  v3[32] = v16;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkpAabbPhantom::setAabb  (binary VA: 0x1749480)
// Original: hkpAabbPhantom::setAabb
// ----------------------------------------------------------------------------
int hkpAabbPhantom::setAabb(hkpAabbPhantom::Self *self, const hkAabb::Self *a2)
{
  *((uint32_t *)self + 40) = *(uint32_t *)a2;
  *((uint32_t *)self + 41) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 42) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 43) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 44) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 45) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 46) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 47) = *((uint32_t *)a2 + 7);
  return hkpPhantom::updateBroadPhase(self, (hkpAabbPhantom::Self *)((char *)self + 160));
}

// ----------------------------------------------------------------------------
// Function: hkpAabbPhantom::castRay  (binary VA: 0x1749500)
// Original: hkpAabbPhantom::castRay
// ----------------------------------------------------------------------------
int hkpAabbPhantom::castRay(uint32_t *a1, int a2, int a3)
{
  int *address;
  int v4;
  uint32_t *v5;
  uint64_t v6; // rax
  float v7;
  bool v8;
  int v9;
  int **v10;
  int v11;
  int v12;
  float *v13;
  float v14; // xmm0_4
  float v15; // xmm7_4
  float v16; // xmm2_4
  float v17; // xmm6_4
  float v18; // xmm5_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  float v21; // xmm4_4
  float v22; // xmm0_4
  float v23; // xmm7_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm3_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm6_4
  float v31; // xmm3_4
  uint64_t v32; // rax
  int v33;
  uint32_t *v34;
  typedef int *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef float _g4_t_v38[15];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v36)) > _g4_s0 ? (4u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v37)) > _g4_s1 ? (12u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v38)) > _g4_s2 ? (16u + sizeof(_g4_t_v38)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 4u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v4 = *address;
  v36 = address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("TtrcPhantom");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v5 + 3);
  }
  v7 = *(float *)(a2 + 36);
  v8 = *(uint8_t *)(a2 + 32) == 0;
  memset(&v38[9], 0, 12);
  v38[8] = v7;
  if ( !v8 )
  {
    v9 = 0;
    if ( *(uint32_t *)(a1[2] + 116) != 0 )
      v9 = *(uint32_t *)(a1[2] + 116) + 16;
    LODWORD(v38[9]) = v9;
  }
  v38[11] = *(float *)(a2 + 40);
  v10 = (int **)a1[48];
  if ( a1[49] - 1 >= 0 )
  {
    v11 = a1[49] - 1;
    do
    {
      v12 = **v10;
      if ( v12 != 0 )
      {
        v13 = (float *)(*v10)[2];
        v37 = v11;
        v14 = *(float *)a2 - v13[12];
        v15 = *(float *)(a2 + 4) - v13[13];
        v16 = *(float *)(a2 + 8) - v13[14];
        v17 = v13[4];
        v18 = v13[5];
        v19 = (float)(*v13 * v14) + (float)(v13[1] * v15);
        v20 = (float)(v14 * v17) + (float)(v15 * v18);
        v21 = v13[6];
        v22 = (float)((float)(v14 * v13[8]) + (float)(v15 * v13[9])) + (float)(v13[10] * v16);
        v23 = v13[2] * v16;
        v38[2] = v22;
        v24 = v20 + (float)(v16 * v21);
        v25 = *(float *)(a2 + 20) - v13[13];
        v38[3] = v22;
        v26 = *(float *)(a2 + 24);
        v38[0] = v19 + v23;
        v27 = *(float *)(a2 + 16) - v13[12];
        v38[1] = v24;
        v28 = v26 - v13[14];
        v29 = *v13 * v27;
        v30 = v17 * v27;
        v31 = (float)((float)(v27 * v13[8]) + (float)(v25 * v13[9])) + (float)(v13[10] * v28);
        v38[4] = (float)(v29 + (float)(v13[1] * v25)) + (float)(v13[2] * v28);
        v38[5] = (float)(v30 + (float)(v18 * v25)) + (float)(v28 * v21);
        v38[6] = v31;
        v38[7] = v31;
        LODWORD(v38[10]) = (uint32_t)(uintptr_t)(*v10);
        G4_VCALL<void>(v12, 32, v38, *v10, a3);
        v11 = v37;
      }
      --v11;
      ++v10;
    }
    while ( v11 != -1 );
  }
  LODWORD(v32) = (uint32_t)(uintptr_t)(v36);
  v33 = *v36;
  v34 = *(uint32_t **)(*v36 + 4);
  if ( (unsigned int)(uintptr_t)(v34) < *(uint32_t *)(*v36 + 12) )
  {
    *v34 = (uint32_t)(uintptr_t)("Et");
    v32 = __rdtsc();
    v34[1] = v32;
    *(uint32_t *)(v33 + 4) = (uint32_t)(uintptr_t)(v34 + 3);
  }
  return v32;
}

// ----------------------------------------------------------------------------
// Function: hkpAabbPhantom::castRay  (binary VA: 0x1749760)
// Original: hkpAabbPhantom::castRay
// ----------------------------------------------------------------------------
int hkpAabbPhantom::castRay(uint32_t *a1, int a2, hkVector4f::Self *a3)
{
  int v3;
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  bool v9;
  int v10;
  int **v11;
  int v12;
  float *v13;
  float v14; // xmm0_4
  float v15; // xmm7_4
  float v16; // xmm2_4
  float v17; // xmm6_4
  float v18; // xmm5_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  float v21; // xmm4_4
  float v22; // xmm0_4
  float v23; // xmm7_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm3_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm6_4
  float v31; // xmm3_4
  int v32;
  uint64_t v33; // rax
  int v34;
  uint32_t *v35;
  typedef int *_g4_t_v37;
  typedef hkVector4f::Self *_g4_t_v38;
  typedef uint32_t *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef char _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v37)) > _g4_s0 ? (0u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v38)) > _g4_s1 ? (8u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v39)) > _g4_s2 ? (12u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v40)) > _g4_s3 ? (12u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (19u + sizeof(_g4_t_v41)) > _g4_s4 ? (19u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v42)) > _g4_s5 ? (20u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v43)) > _g4_s6 ? (24u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v44)) > _g4_s7 ? (28u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v45)) > _g4_s8 ? (32u + sizeof(_g4_t_v45)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v46)) > _g4_s9 ? (36u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v47)) > _g4_s10 ? (40u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v48)) > _g4_s11 ? (44u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v49)) > _g4_s12 ? (48u + sizeof(_g4_t_v49)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v50)) > _g4_s13 ? (52u + sizeof(_g4_t_v50)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v51)) > _g4_s14 ? (56u + sizeof(_g4_t_v51)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v52)) > _g4_s15 ? (60u + sizeof(_g4_t_v52)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v53)) > _g4_s16 ? (64u + sizeof(_g4_t_v53)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v54)) > _g4_s17 ? (76u + sizeof(_g4_t_v54)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 0u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 19u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 20u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 36u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 44u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 52u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 56u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 60u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 64u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 76u);

  v54 = (uint32_t *)(&a1);
  v39 = a1;
  v38 = a3;
  v3 = a2;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v37 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtrcPhantom");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  v8 = *(uint32_t *)(v3 + 36);
  v9 = *(uint8_t *)(v3 + 32) == 0;
  v51 = 0;
  v52 = nullptr;
  v53 = 0;
  v50 = v8;
  if ( !v9 )
  {
    v10 = 0;
    if ( *(uint32_t *)(v39[2] + 116) != 0 )
      v10 = *(uint32_t *)(v39[2] + 116) + 16;
    v51 = v10;
  }
  v53 = *(uint32_t *)(v3 + 40);
  v11 = (int **)v39[48];
  v40 = v39[49] - 1;
  if ( v40 >= 0 )
  {
    do
    {
      v12 = **v11;
      if ( v12 != 0 )
      {
        v13 = (float *)(*v11)[2];
        v14 = *(float *)v3 - v13[12];
        v15 = *(float *)(v3 + 4) - v13[13];
        v16 = *(float *)(v3 + 8) - v13[14];
        v17 = v13[4];
        v18 = v13[5];
        v19 = (float)(*v13 * v14) + (float)(v13[1] * v15);
        v20 = (float)(v14 * v17) + (float)(v15 * v18);
        v21 = v13[6];
        v22 = (float)((float)(v14 * v13[8]) + (float)(v15 * v13[9])) + (float)(v13[10] * v16);
        v23 = v13[2] * v16;
        v44 = v22;
        v24 = v20 + (float)(v16 * v21);
        v25 = *(float *)(v3 + 20) - v13[13];
        v45 = v22;
        v26 = *(float *)(v3 + 24);
        v42 = v19 + v23;
        v27 = *(float *)(v3 + 16) - v13[12];
        v43 = v24;
        v28 = v26 - v13[14];
        v29 = *v13 * v27;
        v30 = v17 * v27;
        v31 = (float)((float)(v27 * v13[8]) + (float)(v25 * v13[9])) + (float)(v13[10] * v28);
        v46 = (float)(v29 + (float)(v13[1] * v25)) + (float)(v13[2] * v28);
        v47 = (float)(v30 + (float)(v18 * v25)) + (float)(v28 * v21);
        v48 = v31;
        v49 = v31;
        v52 = *v11;
        (*(void (**)(char *))(*(uint32_t *)v12 + 28))(&v41);
        if ( v41 != 0 )
          *((uint32_t *)v38 + 17) = (uint32_t)(uintptr_t)(*v11);
      }
      --v40;
      ++v11;
    }
    while ( v40 != -1 );
  }
  v32 = *((uint32_t *)v38 + 17);
  if ( v32 != 0 )
    hkVector4f::setRotatedDir(v38, *(const hkMatrix3f::Self **)(v32 + 8), v38);
  LODWORD(v33) = (uint32_t)(uintptr_t)(v37);
  v34 = *v37;
  v35 = *(uint32_t **)(*v37 + 4);
  if ( (unsigned int)(uintptr_t)(v35) < *(uint32_t *)(*v37 + 12) )
  {
    *v35 = (uint32_t)(uintptr_t)("Et");
    v33 = __rdtsc();
    v35[1] = v33;
    *(uint32_t *)(v34 + 4) = (uint32_t)(uintptr_t)(v35 + 3);
  }
  return v33;
}

// ----------------------------------------------------------------------------
// Function: hkpAabbPhantom::linearCast  (binary VA: 0x17499e0)
// Original: hkpAabbPhantom::linearCast
// ----------------------------------------------------------------------------
int hkpAabbPhantom::linearCast(uint32_t *a1, uint32_t *a2, float *a3, int a4, int a5)
{
  float *v5;
  int *address;
  uint32_t *v7;
  uint64_t v8; // rax
  float *v9;
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm4_4
  uint32_t *v13;
  int64_t *v14;
  unsigned int v15; // xmm3_4
  int v16;
  int v17;
  float v18; // xmm2_4
  __m128i v19;
  int v20; // xmm2_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  int v23; // xmm0_4
  int v24;
  int v25;
  uint32_t *v26;
  int result;
  uint32_t *v28;
  uint64_t v29; // rax
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef char _g4_t_v38;
  typedef int64_t _g4_t_v39 __attribute__((aligned(1)));
  typedef int _g4_t_v40;
  typedef unsigned int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int32_t _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef int _g4_t_v61;
  typedef float _g4_t_v62;
  typedef int _g4_t_v63;
  typedef uint32_t *_g4_t_v64;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v30)) > _g4_s0 ? (0u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v31)) > _g4_s1 ? (8u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v32)) > _g4_s2 ? (12u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v33)) > _g4_s3 ? (16u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v34)) > _g4_s4 ? (24u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v35)) > _g4_s5 ? (28u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v36)) > _g4_s6 ? (32u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v37)) > _g4_s7 ? (36u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (43u + sizeof(_g4_t_v38)) > _g4_s8 ? (43u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v39)) > _g4_s9 ? (44u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v40)) > _g4_s10 ? (52u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v41)) > _g4_s11 ? (56u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v42)) > _g4_s12 ? (60u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v43)) > _g4_s13 ? (64u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v44)) > _g4_s14 ? (68u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v45)) > _g4_s15 ? (76u + sizeof(_g4_t_v45)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v46)) > _g4_s16 ? (80u + sizeof(_g4_t_v46)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v47)) > _g4_s17 ? (84u + sizeof(_g4_t_v47)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v48)) > _g4_s18 ? (88u + sizeof(_g4_t_v48)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v49)) > _g4_s19 ? (92u + sizeof(_g4_t_v49)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v50)) > _g4_s20 ? (96u + sizeof(_g4_t_v50)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v51)) > _g4_s21 ? (100u + sizeof(_g4_t_v51)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v52)) > _g4_s22 ? (104u + sizeof(_g4_t_v52)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v53)) > _g4_s23 ? (108u + sizeof(_g4_t_v53)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v54)) > _g4_s24 ? (112u + sizeof(_g4_t_v54)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v55)) > _g4_s25 ? (116u + sizeof(_g4_t_v55)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v56)) > _g4_s26 ? (120u + sizeof(_g4_t_v56)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v57)) > _g4_s27 ? (124u + sizeof(_g4_t_v57)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v58)) > _g4_s28 ? (128u + sizeof(_g4_t_v58)) : _g4_s28,
    _g4_s30 = (132u + sizeof(_g4_t_v59)) > _g4_s29 ? (132u + sizeof(_g4_t_v59)) : _g4_s29,
    _g4_s31 = (136u + sizeof(_g4_t_v60)) > _g4_s30 ? (136u + sizeof(_g4_t_v60)) : _g4_s30,
    _g4_s32 = (140u + sizeof(_g4_t_v61)) > _g4_s31 ? (140u + sizeof(_g4_t_v61)) : _g4_s31,
    _g4_s33 = (144u + sizeof(_g4_t_v62)) > _g4_s32 ? (144u + sizeof(_g4_t_v62)) : _g4_s32,
    _g4_s34 = (148u + sizeof(_g4_t_v63)) > _g4_s33 ? (148u + sizeof(_g4_t_v63)) : _g4_s33,
    _g4_s35 = (164u + sizeof(_g4_t_v64)) > _g4_s34 ? (164u + sizeof(_g4_t_v64)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 43u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 52u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 60u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 64u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 68u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 76u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 80u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 84u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 88u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 92u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 96u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 100u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 104u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 108u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 112u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 116u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 120u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 124u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 128u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 132u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 136u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 140u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 144u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 148u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 164u);

  v64 = (uint32_t *)(&a1);
  v36 = a1;
  v37 = a2;
  v32 = a4;
  v31 = a5;
  v5 = a3;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v30 = *address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TthkpAabbPhantom::linearCast");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v30 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v40 = 0;
g4_m128_raw(v19) = *(unsigned int *)v5;
  v9 = (float *)v37[2];
  *(float *)g4_m128_ptr<int32_t>(v19) = *(float *)g4_m128_ptr<int32_t>(v19) - v9[12];
  v10 = v5[1] - v9[13];
  v11 = v5[2] - v9[14];
  v12 = v5[3] - v9[15];
  v61 = 872415232;
  v13 = (uint32_t *)v36[2];
  v14 = (int64_t *)v13[28];
  v39 = *v14;
  v40 = *((uint32_t *)v14 + 2);
  v42 = *((uint32_t *)v14 + 4);
  v43 = *((uint32_t *)v14 + 5);
  v44 = *((uint32_t *)v14 + 6);
  v45 = *((uint32_t *)v14 + 8);
  v46 = *((uint32_t *)v14 + 9);
  v47 = *((uint32_t *)v14 + 10);
  v48 = *((uint32_t *)v14 + 11);
  v15 = *((uint32_t *)v5 + 5);
  v49 = *((uint32_t *)v14 + 12);
  v50 = *((uint32_t *)v14 + 13);
  v51 = *((uint32_t *)v14 + 14);
  v52 = *((uint32_t *)v14 + 15);
  v53 = *((uint32_t *)v14 + 16);
  v54 = *((uint32_t *)v14 + 17);
  v55 = *((uint32_t *)v14 + 18);
  v16 = *((uint32_t *)v14 + 19);
  v57 =g4_m128_lane<int32_t>(v19, 0);
  v17 = *((uint32_t *)v14 + 28);
  v58 = v10;
  v56 = v16;
  v63 = v17;
  v59 = v11;
  v60 = v12;
  *(float *)g4_m128_ptr<int32_t>(v19) = (float)(*(float *)g4_m128_ptr<int32_t>(v19) * *(float *)g4_m128_ptr<int32_t>(v19)) + (float)(v10 * v10);
  v18 = 0.0;
  *(float *)g4_m128_ptr<int32_t>(v19) = *(float *)g4_m128_ptr<int32_t>(v19) + (float)(v11 * v11);
  if ( *(float *)g4_m128_ptr<int32_t>(v19) > 0.0 )
  {
    v20 = ((_mm_cvtsi128_si32(v19) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v19) >> 1));
    v21 = (float)(*(float *)&v20 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v19)) * *(float *)&v20)
                * (float)(*(float *)&v20 * *(float *)&v20));
    v22 = (float)(v21 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v19)) * v21) * (float)(v21 * v21));
    v18 = (float)((float)(1.5 * v22)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v19)) * v22) * (float)(v22 * v22)))
        * *(float *)g4_m128_ptr<int32_t>(v19);
  }
  v23 = *((uint32_t *)v5 + 4);
  v33 = v13[30];
  v35 = v13[29];
  v24 = 0;
  v62 = v18;
  v41 = v15;
  v25 = v36[49];
  v34 = v25;
  v61 = v23;
  if ( v25 > 0 )
  {
    do
    {
      v26 = *(uint32_t **)(v36[48] + 4 * v24);
      (*(void (**)(char *))(*(uint32_t *)v35 + 24))(&v38);
      if ( *v26 != 0 && v26 != v37 && v38 != 0 )
        (*(void (**)(uint32_t *, uint32_t *, int64_t *, int, int))(v33
                                                                     + 20
                                                                     * *(uint8_t *)(*(uint8_t *)(*v26 + 8)
                                                                                          + v33
                                                                                          + 35
                                                                                          * *(uint8_t *)(*v37 + 8)
                                                                                          + 416)
                                                                     + 2880))(
          v37,
          v26,
          &v39,
          v32,
          v31);
      ++v24;
    }
    while ( v24 != v34 );
  }
  result = v30;
  v28 = *(uint32_t **)(v30 + 4);
  if ( (unsigned int)(uintptr_t)(v28) < *(uint32_t *)(v30 + 12) )
  {
    *v28 = (uint32_t)(uintptr_t)("Et");
    v29 = __rdtsc();
    v28[1] = v29;
    *(uint32_t *)(v30 + 4) = (uint32_t)(uintptr_t)(v28 + 3);
    return v30;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpAabbPhantom::ensureDeterministicOrder  (binary VA: 0x174a540)
// Original: hkpAabbPhantom::ensureDeterministicOrder
// ----------------------------------------------------------------------------
hkpAabbPhantom::Self * hkpAabbPhantom::ensureDeterministicOrder(hkpAabbPhantom::Self *self)
{
  hkpAabbPhantom::Self *result;
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  int *v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int i;

  result = self;
  if ( *((uint8_t *)self + 204) == 0 )
    return result;
  v2 = *((uint32_t *)self + 49);
  v15 = *((uint32_t *)self + 48);
  if ( v2 <= 1 )
    goto LABEL_14;
  v11 = 0;
  v10 = v2 - 1;
  v3 = v2 - 1;
  v4 = 0;
  while ( 2 )
  {
    v12 = *(uint32_t *)(v15 + 4 * ((v4 + v3) >> 1));
    v5 = *(uint32_t *)(v12 + 20);
    v6 = v4 + 1;
    for ( i = v4 + 1; ; v6 = i )
    {
      v14 = v6 - 1;
      v13 = *(uint32_t *)(v15 + 4 * v6 - 4);
      if ( *(uint32_t *)(v13 + 20) < v5 )
        goto LABEL_20;
      v7 = (int *)(v15 + 4 * v3);
      v8 = *v7;
      if ( *(uint32_t *)(*v7 + 20) > v5 )
      {
        v9 = (int *)(v15 + 4 * v3 - 4);
        do
        {
          v8 = *v9;
          --v3;
          v7 = v9--;
        }
        while ( *(uint32_t *)(v8 + 20) > v5 );
      }
      if ( v3 < v14 )
        break;
      if ( v3 != v14 )
      {
        *v7 = v13;
        *(uint32_t *)(v15 + 4 * i - 4) = v8;
      }
      --v3;
      v14 = i;
      if ( v3 < i )
        break;
      v5 = *(uint32_t *)(v12 + 20);
LABEL_20:
      ++i;
    }
    if ( v11 < v3 )
      hkAlgorithm::quickSortRecursive_hkpCollidable_hkpAabbPha_cd7ee6(v15, v11, v3);
    if ( v10 > v14 )
    {
      v11 = v14;
      v3 = v10;
      v4 = v14;
      continue;
    }
    break;
  }
LABEL_14:
  result = self;
  *((uint8_t *)self + 204) = 0;
  return result;
}


