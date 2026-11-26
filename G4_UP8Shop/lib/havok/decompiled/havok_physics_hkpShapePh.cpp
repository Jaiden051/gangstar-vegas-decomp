#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpShapePh.h"

// ----------------------------------------------------------------------------
// Function: hkpShapePhantom::staticClass  (binary VA: 0x1752ed0)
// Original: hkpShapePhantom::staticClass
// ----------------------------------------------------------------------------
void * hkpShapePhantom::staticClass()
{
  return &hkpShapePhantomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpShapePhantom::getMotionState  (binary VA: 0x1787540)
// Original: hkpShapePhantom::getMotionState
// ----------------------------------------------------------------------------
char * hkpShapePhantom::getMotionState(hkpShapePhantom::Self *self)
{
  return (char *)self + 160;
}

// ----------------------------------------------------------------------------
// Function: hkpShapePhantom::calcAabb  (binary VA: 0x1787550)
// Original: hkpShapePhantom::calcAabb
// ----------------------------------------------------------------------------
int hkpShapePhantom::calcAabb(hkpShapePhantom::Self *self, hkAabb::Self *a2)
{
  float v2; // xmm0_4
  int v3;

  v2 = 0.0;
  v3 = *((uint32_t *)self + 2);
  if ( v3 != 0 )
    v2 = 0.5 * *(float *)(*(uint32_t *)(v3 + 112) + 12);
  return (*(int (**)(uint32_t, char *, float, hkAabb::Self *))(**((uint32_t **)self + 4) + 24))(
           *((uint32_t *)self + 4),
           (char *)self + 160,
           COERCE_FLOAT(LODWORD(v2)),
           a2);
}

// ----------------------------------------------------------------------------
// Function: hkpShapePhantom::deallocateInternalArrays  (binary VA: 0x17875b0)
// Original: hkpShapePhantom::deallocateInternalArrays
// ----------------------------------------------------------------------------
int hkpShapePhantom::deallocateInternalArrays(hkpShapePhantom::Self *self)
{
  return hkpPhantom::deallocateInternalArrays(self);
}

// ----------------------------------------------------------------------------
// Function: hkpShapePhantom::Destroy  (binary VA: 0x17875e0)
// Original: hkpShapePhantom::~hkpShapePhantom
// ----------------------------------------------------------------------------
void hkpShapePhantom::Destroy(hkpShapePhantom::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0B88);
  hkpPhantom::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpShapePhantom::setShape  (binary VA: 0x1787610)
// Original: hkpShapePhantom::setShape
// ----------------------------------------------------------------------------
int hkpShapePhantom::setShape(hkpShapePhantom::Self *self, const hkpShape::Self *a2)
{
  hkpShapePhantom::Self *v2;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int v6;
  int v7;
  int32_t v8; // kr04_4
  int32_t v9;
  int32_t v10; // ett
  hkpWorldCallbackUtil::Self *v11;
  hkpWorldOperationUtil::Self *v12;
  int v13;
  typedef int _g4_t_v16;
  typedef hkpPhantom::Self *_g4_t_v17;
  typedef volatile int32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef hkpShapePhantom::Self *_g4_t_v20;
  typedef char *_g4_t_v21;
  typedef int _g4_t_v22;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v19)) > _g4_s3 ? (16u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v20)) > _g4_s4 ? (20u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v21)) > _g4_s5 ? (24u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v22)) > _g4_s6 ? (28u + sizeof(_g4_t_v22)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);

  v2 = self;
  v3 = *((uint32_t *)self + 2);
  if ( v3 != 0 )
  {
    if ( *(uint32_t *)(v3 + 140) != 0 )
    {
      v16 = *((uint32_t *)self + 2);
      v20 = self;
      v21 = (char *)a2;
      LOBYTE(v19) = 5;
      hkpWorld::queueOperation(v16, (int)(uintptr_t)(&v19));
      return 0;
    }
    *(uint32_t *)(v3 + 140) = 1;
    hkpWorldOperationUtil::removePhantomBP(
      *((hkpWorldOperationUtil::Self **)self + 2),
      self,
      v17,
      (int)(uintptr_t)(v18),
      v19,
      (int)(uintptr_t)(v20),
      v21,
      v22);
  }
  if ( *((uint16_t *)a2 + 3) != 0 )
  {
    v18 = (volatile int32_t *)((char *)a2 + 4);
    do
    {
      v5 = *((uint32_t *)a2 + 1);
      HIWORD(v4) = HIWORD(v5);
      LOWORD(v4) = 0;
    }
    while ( v5 != __sync_val_compare_and_swap(v18, v5, v4 | (uint16_t)(v5 + 1)) );
  }
  v6 = *((uint32_t *)self + 4);
  if ( v6 != 0 && *(uint16_t *)(v6 + 6) != 0 )
  {
    v18 = (volatile int32_t *)(v6 + 4);
    do
    {
      v8 = *(uint32_t *)(v6 + 4);
      HIWORD(v7) = HIWORD(v8);
      LOWORD(v7) = 0;
      v9 = v7 | (uint16_t)(v8 - 1);
      v10 = v8;
    }
    while ( v10 != __sync_val_compare_and_swap(v18, v10, v9) );
    v2 = self;
    if ( (uint16_t)v9 == 0 )
      G4_VCALL<void>(v6, 16);
  }
  v11 = *((hkpWorldCallbackUtil::Self **)v2 + 2);
  *((uint32_t *)v2 + 4) = (uint32_t)(uintptr_t)(a2);
  if ( v11 != nullptr )
    hkpWorldCallbackUtil::firePhantomShapeSet(v11, v2);
  hkpPhantom::firePhantomShapeSet(v2);
  v12 = *((hkpWorldOperationUtil::Self **)v2 + 2);
  if ( v12 != nullptr )
  {
    hkpWorldOperationUtil::addPhantomBP(v12, v2, v17, (char *)v18, v19, (int)(uintptr_t)(v20), v21, v22);
    v13 = *((uint32_t *)v2 + 2);
    if ( (*(uint32_t *)(v13 + 140))-- == 1 && *(uint8_t *)(v13 + 148) == 0 )
    {
      if ( *(uint32_t *)(v13 + 132) != 0 )
        hkpWorld::internal_executePendingOperations((hkpWorld::Self *)v13);
      if ( *(uint32_t *)(v13 + 156) == 1 && *(uint32_t *)(v13 + 136) != 0 )
        hkpWorld::internal_executePendingBodyOperations((hkpWorld::Self *)v13);
    }
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkpShapePhantom::Destroy_ea1787790  (binary VA: 0x1787790)
// Original: hkpShapePhantom::~hkpShapePhantom
// ----------------------------------------------------------------------------
void hkpShapePhantom::Destroy_ea1787790(hkpShapePhantom::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0B88);
  hkpPhantom::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 336;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpShapePhantom::Construct  (binary VA: 0x1787800)
// Original: hkpShapePhantom::hkpShapePhantom
// ----------------------------------------------------------------------------
void hkpShapePhantom::Construct(hkpShapePhantom::Self *self, const hkpShape::Self *a2, const hkTransformf::Self *a3)
{
  uint8_t v3[28];

  hkpWorldObject::Construct((int)(uintptr_t)(self), (int)(uintptr_t)(a2), 2);
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 35) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0B88);
  *((uint32_t *)self + 36) = 0x80000000;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0x80000000;
  *((uint8_t *)self + 32) = -16;
  hkQuaternionf::set((hkQuaternionf::Self *)v3, a3);
  hkMotionState::initMotionState(
    (hkpShapePhantom::Self *)((char *)self + 160),
    (const hkTransformf::Self *)((char *)a3 + 48),
    (const hkQuaternionf::Self *)v3);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)((char *)self + 160);
}

// ----------------------------------------------------------------------------
// Function: hkpShapePhantom::setTransform  (binary VA: 0x17878d0)
// Original: hkpShapePhantom::setTransform
// ----------------------------------------------------------------------------
const hkTransformf::Self * hkpShapePhantom::setTransform(hkpShapePhantom::Self *self, const hkTransformf::Self *a2)
{
  const hkTransformf::Self *result;
  int v3;
  uint8_t v4[44];

  result = a2;
  *((uint32_t *)self + 40) = *(uint32_t *)a2;
  *((uint32_t *)self + 41) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 42) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 43) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 44) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 45) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 46) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 47) = *((uint32_t *)a2 + 7);
  *((uint32_t *)self + 48) = *((uint32_t *)a2 + 8);
  *((uint32_t *)self + 49) = *((uint32_t *)a2 + 9);
  *((uint32_t *)self + 50) = *((uint32_t *)a2 + 10);
  *((uint32_t *)self + 51) = *((uint32_t *)a2 + 11);
  *((uint32_t *)self + 52) = *((uint32_t *)a2 + 12);
  *((uint32_t *)self + 53) = *((uint32_t *)a2 + 13);
  *((uint32_t *)self + 54) = *((uint32_t *)a2 + 14);
  *((uint32_t *)self + 55) = *((uint32_t *)a2 + 15);
  v3 = *((uint32_t *)self + 2);
  if ( v3 != 0 )
  {
    (*(void (**)(uint32_t, const hkTransformf::Self *, uint32_t, uint8_t *))(**((uint32_t **)self + 4) + 24))(
      *((uint32_t *)self + 4),
      a2,
      0.5 * *(float *)(*(uint32_t *)(v3 + 112) + 12),
      v4);
    return (const hkTransformf::Self *)hkpPhantom::updateBroadPhase(self, (const hkAabb::Self *)v4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapePhantom::setPosition  (binary VA: 0x17879d0)
// Original: hkpShapePhantom::setPosition
// ----------------------------------------------------------------------------
int hkpShapePhantom::setPosition(hkpShapePhantom::Self *self, const hkVector4f::Self *a2, float a3)
{
  int v3;
  int result;
  uint8_t v5[44];

  *((uint32_t *)self + 52) = *(uint32_t *)a2;
  *((uint32_t *)self + 53) = *((uint32_t *)a2 + 1);
  v3 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 54) = *((uint32_t *)a2 + 2);
  result = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 55) = result;
  if ( v3 != 0 )
  {
    (*(void (**)(uint32_t, char *, uint32_t, uint8_t *))(**((uint32_t **)self + 4) + 24))(
      *((uint32_t *)self + 4),
      (char *)self + 160,
      (float)(0.5 * *(float *)(*(uint32_t *)(v3 + 112) + 12)) + a3,
      v5);
    return hkpPhantom::updateBroadPhase(self, (const hkAabb::Self *)v5);
  }
  return result;
}


