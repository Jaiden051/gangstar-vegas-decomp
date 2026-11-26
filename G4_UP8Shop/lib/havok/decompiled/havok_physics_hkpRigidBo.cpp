#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpRigidBo.h"

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::staticClass  (binary VA: 0x172db40)
// Original: hkpRigidBody::staticClass
// ----------------------------------------------------------------------------
void * hkpRigidBody::staticClass()
{
  return &hkpRigidBodyClass;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyCinfo::Construct  (binary VA: 0x172f450)
// Original: hkpRigidBodyCinfo::hkpRigidBodyCinfo
// ----------------------------------------------------------------------------
void hkpRigidBodyCinfo::Construct(hkpRigidBodyCinfo::Self *self)
{
  *((g4_int128_t *)self + 1) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 11) = 1065353216;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 20) = 1065353216;
  *((uint32_t *)self + 25) = 1065353216;
  *((uint32_t *)self + 30) = 1065353216;
  *((uint32_t *)self + 38) = 1028443341;
  *((uint32_t *)self + 40) = 1056964608;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 42) = 1053609165;
  *((uint32_t *)self + 33) = 0;
  *((uint8_t *)self + 180) = 1;
  *((uint32_t *)self + 34) = 0;
  *((uint8_t *)self + 181) = 1;
  *((uint32_t *)self + 35) = 0;
  *((uint8_t *)self + 182) = 2;
  *((uint32_t *)self + 37) = 0;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 48) = 0;
  *((uint32_t *)self + 36) = 1065353216;
  *((uint8_t *)self + 200) = -1;
  *((uint32_t *)self + 39) = 1065353216;
  *((uint32_t *)self + 46) = -1082130432;
  *((uint32_t *)self + 43) = 1128792064;
  *((uint8_t *)self + 201) = 0;
  *((uint32_t *)self + 44) = 1128792064;
  *((uint8_t *)self + 202) = 0;
  *((uint32_t *)self + 47) = 1065353216;
  *((uint8_t *)self + 203) = 0;
  *((uint8_t *)self + 196) = 1;
  *((uint16_t *)self + 99) = -1;
  *((uint8_t *)self + 204) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyCinfo::setMassProperties  (binary VA: 0x172f600)
// Original: hkpRigidBodyCinfo::setMassProperties
// ----------------------------------------------------------------------------
hkpRigidBodyCinfo::Self * hkpRigidBodyCinfo::setMassProperties(hkpRigidBodyCinfo::Self *self, const hkMassProperties::Self *a2)
{
  *((uint32_t *)self + 36) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 20) = *((uint32_t *)a2 + 8);
  *((uint32_t *)self + 21) = *((uint32_t *)a2 + 9);
  *((uint32_t *)self + 22) = *((uint32_t *)a2 + 10);
  *((uint32_t *)self + 23) = *((uint32_t *)a2 + 11);
  *((uint32_t *)self + 24) = *((uint32_t *)a2 + 12);
  *((uint32_t *)self + 25) = *((uint32_t *)a2 + 13);
  *((uint32_t *)self + 26) = *((uint32_t *)a2 + 14);
  *((uint32_t *)self + 27) = *((uint32_t *)a2 + 15);
  *((uint32_t *)self + 28) = *((uint32_t *)a2 + 16);
  *((uint32_t *)self + 29) = *((uint32_t *)a2 + 17);
  *((uint32_t *)self + 30) = *((uint32_t *)a2 + 18);
  *((uint32_t *)self + 31) = *((uint32_t *)a2 + 19);
  *((uint32_t *)self + 32) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 33) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 34) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 35) = *((uint32_t *)a2 + 7);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyCinfo::setTransform  (binary VA: 0x172f690)
// Original: hkpRigidBodyCinfo::setTransform
// ----------------------------------------------------------------------------
hkQuaternionf::Self * hkpRigidBodyCinfo::setTransform(hkpRigidBodyCinfo::Self *self, const hkTransformf::Self *a2)
{
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 12);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 13);
  *((uint32_t *)self + 6) = *((uint32_t *)a2 + 14);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 15);
  return hkQuaternionf::set((hkpRigidBodyCinfo::Self *)((char *)self + 32), a2);
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::getMotionState  (binary VA: 0x175b960)
// Original: hkpRigidBody::getMotionState
// ----------------------------------------------------------------------------
char * hkpRigidBody::getMotionState(hkpRigidBody::Self *self)
{
  return (char *)self + 240;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::Destroy  (binary VA: 0x175b970)
// Original: hkpRigidBody::~hkpRigidBody
// ----------------------------------------------------------------------------
void hkpRigidBody::Destroy(hkpRigidBody::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209FB28);
  hkpEntity::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::Destroy_ea175b9a0  (binary VA: 0x175b9a0)
// Original: hkpRigidBody::~hkpRigidBody
// ----------------------------------------------------------------------------
void hkpRigidBody::Destroy_ea175b9a0(hkpRigidBody::Self *self)
{
  int v1;
  int v2;

  hkpRigidBody::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 544;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::updateCachedShapeInfo  (binary VA: 0x175ba00)
// Original: hkpRigidBody::updateCachedShapeInfo
// ----------------------------------------------------------------------------
int hkpRigidBody::updateCachedShapeInfo(hkpRigidBody::Self *self, const hkpShape::Self *a2, hkVector4f::Self *a3, float a4, float a5, float a6, float a7)
{
  int result;
  float v8; // xmm6_4
  float v9; // xmm4_4
  float v10; // xmm2_4
  __m128i v11;
  float v12; // xmm2_4
  float v13; // xmm1_4
  float retaddr;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);

  *(float *)&result = COERCE_FLOAT(
                        G4_VCALL<int>(a2, 24, &unk_1D12FD0, 0, &v14));
g4_m128_raw(v11) = LODWORD(a4);
  *(float *)a3 = a4 - retaddr;
  *((float *)a3 + 1) = a5 - *(float *)&self;
  *((float *)a3 + 2) = a6 - *(float *)&a2;
  *((float *)a3 + 3) = a7 - *(float *)&a3;
  v8 = *((float *)self + 92);
  v9 = *((float *)self + 93);
  v10 = 0.0;
  *(float *)g4_m128_ptr<int32_t>(v11) = fmaxf(
                              (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v11) - v8)
                                            * (float)(*(float *)g4_m128_ptr<int32_t>(v11) - v8))
                                    + (float)((float)(a5 - v9) * (float)(a5 - v9)))
                            + (float)((float)(a6 - *((float *)self + 94)) * (float)(a6 - *((float *)self + 94))),
                              (float)((float)((float)(retaddr - v8) * (float)(retaddr - v8))
                                    + (float)((float)(*(float *)&self - v9) * (float)(*(float *)&self - v9)))
                            + (float)((float)(*(float *)&a2 - *((float *)self + 94))
                                    * (float)(*(float *)&a2 - *((float *)self + 94))));
  if ( *(float *)g4_m128_ptr<int32_t>(v11) > 0.0 )
  {
    result = ((_mm_cvtsi128_si32(v11) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v11) >> 1));
    v12 = (float)(*(float *)&result * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * *(float *)&result)
                * (float)(*(float *)&result * *(float *)&result));
    v13 = (float)(v12 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * v12) * (float)(v12 * v12));
    v10 = (float)((float)(1.5 * v13)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v11)) * v13) * (float)(v13 * v13)))
        * *(float *)g4_m128_ptr<int32_t>(v11);
  }
  *((float *)self + 100) = v10;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::setShape  (binary VA: 0x175bba0)
// Original: hkpRigidBody::setShape
// ----------------------------------------------------------------------------
int hkpRigidBody::setShape(hkpRigidBody::Self *self, const hkpShape::Self *a2)
{
  hkpRigidBody::Self *v2;
  int v3;
  float v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  float v9; // xmm0_4
  hkpWorldCallbackUtil::Self *v10;
  hkpWorldOperationUtil::Self *v11;
  int v12;
  int v15;
  int32_t v16; // kr04_4
  typedef int _g4_t_v17;
  typedef hkpEntity::Self *_g4_t_v18;
  typedef hkpEntity::Self *_g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef hkpRigidBody::Self *_g4_t_v25;
  typedef const hkpShape::Self *_g4_t_v26;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v18)) > _g4_s1 ? (4u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v19)) > _g4_s2 ? (8u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v20)) > _g4_s3 ? (12u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v21)) > _g4_s4 ? (16u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v22)) > _g4_s5 ? (20u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v23)) > _g4_s6 ? (24u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v24)) > _g4_s7 ? (32u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v25)) > _g4_s8 ? (36u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v26)) > _g4_s9 ? (40u + sizeof(_g4_t_v26)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);

  v2 = self;
  v3 = *((uint32_t *)self + 2);
  if ( v3 != 0 )
  {
    if ( *(uint32_t *)(v3 + 140) != 0 )
    {
      v17 = *((uint32_t *)self + 2);
      v25 = self;
      v26 = a2;
      LOBYTE(v24) = 5;
      hkpWorld::queueOperation(v17, (int)(uintptr_t)(&v24));
      return 0;
    }
    *(uint32_t *)(v3 + 140) = 1;
    hkpWorldOperationUtil::removeEntityBP(*((hkpWorldOperationUtil::Self **)self + 2), self);
  }
  v4 = *((float *)self + 4);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(a2);
  if ( *((uint16_t *)a2 + 3) != 0 )
  {
    v23 = v4;
    do
    {
      v16 = *((uint32_t *)a2 + 1);
      HIWORD(v15) = HIWORD(v16);
      LOWORD(v15) = 0;
    }
    while ( v16 != __sync_val_compare_and_swap(
                     (volatile int32_t *)a2 + 1,
                     v16,
                     v15 | (uint16_t)(v16 + 1)) );
    v4 = v23;
  }
  if ( v4 != 0.0 )
  {
    if ( *(uint16_t *)(LODWORD(v4) + 6) != 0 )
    {
      do
      {
        v6 = *(uint32_t *)(LODWORD(v4) + 4);
        HIWORD(v5) = HIWORD(v6);
        LOWORD(v5) = 0;
        v7 = v5 | (uint16_t)(v6 - 1);
        v8 = v6;
      }
      while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)(LODWORD(v4) + 4), v8, v7) );
      v2 = self;
      if ( (uint16_t)v7 == 0 )
        (*(void (**)(float))(*(uint32_t *)LODWORD(v4) + 16))(COERCE_FLOAT(LODWORD(v4)));
    }
    hkpRigidBody::updateCachedShapeInfo(v2, a2, (hkVector4f::Self *)&v24, v20, v21, v22, v23);
    if ( *((float *)v2 + 23) == 3.40282e38f )
      goto LABEL_14;
    *((uint32_t *)v2 + 23) = -1082130432;
    goto LABEL_12;
  }
  hkpRigidBody::updateCachedShapeInfo(self, a2, (hkVector4f::Self *)&v24, v20, v21, v22, v23);
  if ( *((float *)self + 23) <= 0.0 )
  {
LABEL_12:
    v9 = fminf(fminf(v24, *(float *)&v25), *(float *)&v26);
    if ( v9 >= 0.5 )
      *((uint32_t *)v2 + 23) = 1036831949;
    else
      *((float *)v2 + 23) = v9 * 0.2f;
  }
LABEL_14:
  if ( *((uint32_t *)v2 + 2) != 0 )
  {
    hkpEntity::setCachedShapeData(v2, *((const hkpWorld::Self **)v2 + 2), a2);
    v10 = *((hkpWorldCallbackUtil::Self **)v2 + 2);
    if ( v10 != nullptr )
      hkpWorldCallbackUtil::fireEntityShapeSet(v10, v2, v19);
  }
  hkpEntityCallbackUtil::fireEntityShapeSet(v2, v18);
  v11 = *((hkpWorldOperationUtil::Self **)v2 + 2);
  if ( v11 != nullptr )
  {
    hkpWorldOperationUtil::addEntityBP(v11, v2);
    v12 = *((uint32_t *)v2 + 2);
    if ( (*(uint32_t *)(v12 + 140))-- == 1 && *(uint8_t *)(v12 + 148) == 0 )
    {
      if ( *(uint32_t *)(v12 + 132) != 0 )
        hkpWorld::internal_executePendingOperations((hkpWorld::Self *)v12);
      if ( *(uint32_t *)(v12 + 156) == 1 && *(uint32_t *)(v12 + 136) != 0 )
        hkpWorld::internal_executePendingBodyOperations((hkpWorld::Self *)v12);
    }
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::updateShape  (binary VA: 0x175be00)
// Original: hkpRigidBody::updateShape
// ----------------------------------------------------------------------------
int hkpRigidBody::updateShape(hkpRigidBody::Self *a1, int a2)
{
  int v2;
  const hkpShape::Self *v3;
  int v4;
  bool v5;
  typedef hkpEntity::Self *_g4_t_v7;
  typedef hkpEntity::Self *_g4_t_v8;
  typedef float _g4_t_v9;
  typedef float _g4_t_v10;
  typedef float _g4_t_v11;
  typedef float _g4_t_v12;
  typedef uint32_t _g4_t_v13[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v9)) > _g4_s2 ? (12u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v10)) > _g4_s3 ? (16u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v11)) > _g4_s4 ? (20u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v12)) > _g4_s5 ? (24u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v13)) > _g4_s6 ? (32u + sizeof(_g4_t_v13)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);

  v2 = *((uint32_t *)a1 + 2);
  if ( v2 == 0 )
  {
LABEL_4:
    v3 = *((const hkpShape::Self **)a1 + 4);
    if ( a2 != 0 )
      G4_VCALL<void>(a2, 8, *((uint32_t *)a1 + 4));
    hkpRigidBody::updateCachedShapeInfo(a1, v3, (hkVector4f::Self *)v13, v9, v10, v11, v12);
    v4 = *((uint32_t *)a1 + 2);
    if ( v4 == 0 )
      goto LABEL_10;
    v5 = *((uint8_t *)a1 + 232) == 5;
    *((uint32_t *)a1 + 12) = 1;
    *((uint32_t *)a1 + 16) = 0;
    if ( v5 )
    {
      v13[0] = (uint32_t)(uintptr_t)(a1);
      v8 = (hkpEntity::Self *)((char *)&dword_0 + 1);
      (*(void (**)(uint32_t, uint32_t *))(**(uint32_t **)(v4 + 8) + 56))(*(uint32_t *)(v4 + 8), v13);
      hkpWorldOperationUtil::updateEntityBP(*((hkpWorldOperationUtil::Self **)a1 + 2), a1);
      v4 = *((uint32_t *)a1 + 2);
      v5 = (*(uint32_t *)(v4 + 140))-- == 1;
      if ( !v5 )
        goto LABEL_9;
    }
    else
    {
      v5 = (*(uint32_t *)(v4 + 140))-- == 1;
      if ( !v5 )
      {
LABEL_9:
        hkpWorldCallbackUtil::fireEntityShapeSet(*((hkpWorldCallbackUtil::Self **)a1 + 2), a1, v8);
LABEL_10:
        hkpEntityCallbackUtil::fireEntityShapeSet(a1, v7);
        return 1;
      }
    }
    if ( *(uint8_t *)(v4 + 148) == 0 )
    {
      if ( *(uint32_t *)(v4 + 132) != 0 )
        hkpWorld::internal_executePendingOperations((hkpWorld::Self *)v4);
      if ( *(uint32_t *)(v4 + 156) == 1 && *(uint32_t *)(v4 + 136) != 0 )
        hkpWorld::internal_executePendingBodyOperations((hkpWorld::Self *)v4);
    }
    goto LABEL_9;
  }
  if ( *(uint32_t *)(v2 + 140) == 0 )
  {
    *(uint32_t *)(v2 + 140) = 1;
    goto LABEL_4;
  }
  v13[2] = a2;
  v13[1] = (uint32_t)(uintptr_t)(a1);
  LOBYTE(v13[0]) = 6;
  hkpWorld::queueOperation(v2, (int)(uintptr_t)(v13));
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::createDynamicRigidMotion  (binary VA: 0x175bf80)
// Original: hkpRigidBody::createDynamicRigidMotion
// ----------------------------------------------------------------------------
hkUFloat8::Self * hkpRigidBody::createDynamicRigidMotion(int a1, hkVector4f::Self *a2, hkQuaternionf::Self *a3, int a4, float *a5, int a6, int a7, int a8, hkpMotion::Self *a9)
{
  hkUFloat8::Self *result;
  float v10[7];

  switch ( a1 )
  {
    case 1:
      if ( fminf(fminf(*a5, a5[5]), a5[10]) > (float)(fmaxf(fmaxf(*a5, a5[5]), a5[10]) * 0.8f) )
        goto LABEL_7;
      goto LABEL_3;
    case 2:
LABEL_7:
      hkpMotion::Construct(a9, a2, a3, false);
      *((uint8_t *)a9 + 8) = 2;
      *(uint32_t *)a9 = ((uint32_t)(uintptr_t)&off_20A0408);
      break;
    case 3:
LABEL_3:
      hkpBoxMotion::Construct(a9, a2, a3);
      break;
    case 4:
      hkpKeyframedRigidMotion::Construct(a9, a2, a3);
      a8 = 1232348160;
      a7 = 1232348160;
      break;
    case 6:
      hkpThinBoxMotion::Construct(a9, a2, a3);
      break;
    case 7:
      hkpMotion::Construct(a9, a2, a3, false);
      *((uint8_t *)a9 + 8) = 7;
      *(uint32_t *)a9 = ((uint32_t)(uintptr_t)&off_209F728);
      break;
    default:
      hkpFixedRigidMotion::Construct(a9, a2, a3);
      break;
  }
  if ( a1 != 4 )
  {
    G4_VCALL<void>(a9, 44, a5);
    G4_VCALL<void>(a9, 60, a6);
    G4_VCALL<void>(a9, 20, a4);
  }
  LODWORD(v10[0]) = a7;
  hkUFloat8::opAssign((hkpMotion::Self *)((char *)a9 + 186), v10);
  LODWORD(v10[0]) = a8;
  result = hkUFloat8::opAssign((hkpMotion::Self *)((char *)a9 + 187), v10);
  *((uint16_t *)a9 + 142) = 0;
  return result;
}



// ============================================================================
// Address:   0x175c170 (size: 55 bytes)
// Symbol:    _ZN12hkpRigidBodyC1E24hkFinishLoadedObjectFlag
// Demangled: hkpRigidBody::hkpRigidBody(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN12hkpRigidBodyC2E24hkFinishLoadedObjectFlag'
void (**hkpRigidBody::Construct(uint32_t *a1, int a2))(hkpRigidBody::Self * self)
{
  hkpEntity::Construct((int)(uintptr_t)(a1), a2);
  *a1 = ((uint32_t)(uintptr_t)&off_209FB28);
  return (void (**)(hkpRigidBody::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209FB28));
}
// ----------------------------------------------------------------------------
// Function: hkpRigidBody::setMotionType  (binary VA: 0x175c1b0)
// Original: hkpRigidBody::setMotionType
// ----------------------------------------------------------------------------
int hkpRigidBody::setMotionType(hkpWorld::Self *a1, int a2, hkpEntity::Self *a3, int a4)
{
  int v4;
  hkpWorldCallbackUtil::Self *v6;
  typedef hkpEntity::Self *_g4_t_v7;
  typedef hkpEntity::Self *_g4_t_v8;
  typedef uint32_t _g4_t_v9[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v9)) > _g4_s2 ? (16u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  v4 = *((uint32_t *)a1 + 2);
  if ( v4 != 0 && *(uint32_t *)(v4 + 140) != 0 )
  {
    BYTE2(v9[2]) = a4;
    v9[1] = (uint32_t)(uintptr_t)(a1);
    LOBYTE(v9[0]) = 4;
    LOBYTE(v9[2]) = a2;
    BYTE1(v9[2]) = (uint8_t)(uintptr_t)(a3);
    return hkpWorld::queueOperation(v4, (int)(uintptr_t)(v9));
  }
  else
  {
    hkpWorldOperationUtil::setRigidBodyMotionType((hkpWorldCallbackUtil::Self **)a1, a2, (int)(uintptr_t)(a3), a4);
    v6 = *((hkpWorldCallbackUtil::Self **)a1 + 2);
    if ( v6 != nullptr )
      hkpWorldCallbackUtil::fireEntitySetMotionType(v6, a1, v8);
    return hkpEntityCallbackUtil::fireEntitySetMotionType(a1, v7);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::setCenterOfMassLocal  (binary VA: 0x175c250)
// Original: hkpRigidBody::setCenterOfMassLocal
// ----------------------------------------------------------------------------
int hkpRigidBody::setCenterOfMassLocal(hkpRigidBody::Self *self, const hkVector4f::Self *a2)
{
  typedef float _g4_t_v3;
  typedef float _g4_t_v4[6];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v4)) > _g4_s1 ? (16u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);

  (*(void (**)(char *, const hkVector4f::Self *))(*((uint32_t *)self + 56) + 60))((char *)self + 224, a2);
  return hkpRigidBody::updateCachedShapeInfo(
           self,
           *((const hkpShape::Self **)self + 4),
           (hkVector4f::Self *)v4,
           v3,
           v4[0],
           v4[1],
           v4[2]);
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::isDeactivationEnabled  (binary VA: 0x175c2b0)
// Original: hkpRigidBody::isDeactivationEnabled
// ----------------------------------------------------------------------------
bool hkpRigidBody::isDeactivationEnabled(hkpRigidBody::Self *self)
{
  return *((uint8_t *)self + 233) != 0xFF;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::enableDeactivation  (binary VA: 0x175c2d0)
// Original: hkpRigidBody::enableDeactivation
// ----------------------------------------------------------------------------
void hkpRigidBody::enableDeactivation(hkpRigidBody::Self *self, bool a2)
{
  uint8_t *v2;
  uint8_t v3;
  uint8_t v4;
  int16_t v5; // di
  int16_t v6; // bp
  uint8_t v7;
  int16_t v8;
  int16_t v9;
  int16_t v10;
  int v11;
  char v12;
  int16_t v13;

  if ( a2 )
  {
    if ( !hkpRigidBody::isDeactivationEnabled(self) )
    {
      v2 = *((uint8_t **)self + 2);
      if ( v2 != nullptr )
      {
        v3 = v2[815];
        v13 = v2[813];
        v4 = *((uint8_t *)self + 208) & 3;
        v5 = v2[814];
        v6 = v13 << 14;
        v7 = *((uint8_t *)self + 208) & 0xF;
        *((uint8_t *)self + 233) = v7;
        if ( v4 > (uint8_t)(v3 & 3) )
          v6 = ~v13 << 14;
        v8 = v5 << 14;
        if ( v3 < (int)v7 )
          v8 = ~v5 << 14;
        v9 = *((uint16_t *)self + 118);
        *((uint16_t *)self + 117) = v6 | *((uint16_t *)self + 117) & 0x3FFF;
        *((uint16_t *)self + 118) = v8 | v9 & 0x3FFF;
      }
      else
      {
        v10 = *((uint16_t *)self + 117);
        v11 = *((uint32_t *)self + 52) & 3;
        v12 = *((uint32_t *)self + 52) & 0xF;
        *((uint8_t *)self + 233) = v12;
        *((uint16_t *)self + 117) = v10 & 0x3FFF | ((uint8_t)v11 != 0 ? 0xC000 : 0);
        *((uint16_t *)self + 118) = *((uint16_t *)self + 118) & 0x3FFF | (v12 != 0 ? 0xC000 : 0);
      }
    }
  }
  else
  {
    *((uint8_t *)self + 233) = -1;
    *((uint16_t *)self + 117) = 0;
    *((uint16_t *)self + 118) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::Construct  (binary VA: 0x175c420)
// Original: hkpRigidBody::hkpRigidBody
// ----------------------------------------------------------------------------
void hkpRigidBody::Construct(hkpRigidBody::Self *self, const hkpRigidBodyCinfo::Self *a2)
{
  hkpRigidBody::Self *v2;
  int v3;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  bool v9;
  int v10;
  __m128 v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  char v16;
  __m128i v17;
  char ShapeDepth;
  int v19;
  int32_t v20; // kr04_4
  float v21; // xmm1_4
  hkpRigidBody::Self *thisa;
  typedef const hkpShape::Self *_g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26;
  typedef int _g4_t_v27;
  typedef float _g4_t_v28[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v23)) > _g4_s1 ? (12u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v24)) > _g4_s2 ? (16u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v25)) > _g4_s3 ? (20u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v26)) > _g4_s4 ? (24u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v27)) > _g4_s5 ? (40u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v28)) > _g4_s6 ? (48u + sizeof(_g4_t_v28)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);

  v2 = self;
  hkpEntity::Construct(self, *((const hkpShape::Self **)a2 + 1));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209FB28);
  *((uint8_t *)self + 136) = *((uint8_t *)a2 + 196);
  *((uint16_t *)self + 83) = *((uint16_t *)a2 + 99);
  *((uint32_t *)self + 11) = *(uint32_t *)a2;
  v3 = *((uint32_t *)a2 + 48);
  if ( v3 != 0 && *(uint16_t *)(v3 + 6) != 0 )
  {
    do
    {
      v20 = *(uint32_t *)(v3 + 4);
      HIWORD(v19) = HIWORD(v20);
      LOWORD(v19) = 0;
    }
    while ( v20 != __sync_val_compare_and_swap(
                     (volatile int32_t *)(v3 + 4),
                     v20,
                     v19 | (uint16_t)(v20 + 1)) );
    v2 = self;
  }
  v4 = *((uint32_t *)v2 + 132);
  if ( v4 != 0 && *(uint16_t *)(v4 + 6) != 0 )
  {
    v27 = v3;
    thisa = v2;
    do
    {
      v6 = *(uint32_t *)(v4 + 4);
      HIWORD(v5) = HIWORD(v6);
      LOWORD(v5) = 0;
      v7 = v5 | (uint16_t)(v6 - 1);
      v8 = v6;
    }
    while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v8, v7) );
    v2 = thisa;
    v9 = (uint16_t)v7 == 0;
    v3 = v27;
    if ( v9 )
    {
      G4_VCALL<void>(v4, 16);
      v3 = v27;
    }
  }
  *((uint32_t *)v2 + 132) = v3;
  v10 = *((char *)a2 + 180);
  if ( (uint8_t)v10 == 5 )
  {
    hkpFixedRigidMotion::Construct(
      (hkpRigidBody::Self *)((char *)v2 + 224),
      (const hkpRigidBodyCinfo::Self *)((char *)a2 + 16),
      (const hkpRigidBodyCinfo::Self *)((char *)a2 + 32));
    v28[0] = *((float *)a2 + 43);
    hkUFloat8::opAssign((hkpRigidBody::Self *)((char *)v2 + 410), v28);
    v28[0] = *((float *)a2 + 44);
    hkUFloat8::opAssign((hkpRigidBody::Self *)((char *)v2 + 411), v28);
    hkpMotion::setDeactivationClass((hkpRigidBody::Self *)((char *)v2 + 224), 1);
    *((uint32_t *)v2 + 6) = (uint32_t)(uintptr_t)((char *)v2 + 240);
    v11 = _mm_cmple_ss(g4_m128_u32(*((unsigned int *)a2 + 46)), *(__m128 *)&dword_1C7B5A8);
    *((uint32_t *)v2 + 23) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v11, g4_m128_u32(*((unsigned int *)a2 + 46))), 0)
                         |g4_m128_lane<int32_t>(v11, 0) & 0x7F7FFFEE;
  }
  else
  {
    hkpRigidBody::createDynamicRigidMotion(
      v10,
      (hkVector4f::Self *)((const hkpRigidBodyCinfo::Self *)((char *)a2 + 16)),
      (hkQuaternionf::Self *)((const hkpRigidBodyCinfo::Self *)((char *)a2 + 32)),
      *((uint32_t *)a2 + 36),
      (float *)a2 + 20,
      (int)(uintptr_t)(a2) + 128,
      *((uint32_t *)a2 + 43),
      *((uint32_t *)a2 + 44),
      (hkpMotion::Self *)((hkpRigidBody::Self *)((char *)v2 + 224)));
    hkpMotion::setDeactivationClass((hkpRigidBody::Self *)((char *)v2 + 224), *((char *)a2 + 182));
    hkpEntity::activate(v2);
    hkpMotion::setLinearVelocity((hkpRigidBody::Self *)((char *)v2 + 224), (const hkpRigidBodyCinfo::Self *)((char *)a2 + 48));
    hkpEntity::activate(v2);
    hkpMotion::setAngularVelocity((hkpRigidBody::Self *)((char *)v2 + 224), (const hkpRigidBodyCinfo::Self *)((char *)a2 + 64));
    *((uint32_t *)v2 + 6) = (uint32_t)(uintptr_t)((char *)v2 + 240);
    *((uint32_t *)v2 + 23) = *((uint32_t *)a2 + 46);
  }
  hkpRigidBody::enableDeactivation(v2, *((uint8_t *)a2 + 181) != 0);
g4_m128_raw(v12) = *((unsigned int *)a2 + 37);
g4_m128_raw(v13) = 0x3F808000u;
  *(float *)g4_m128_ptr<int32_t>(v12) = *(float *)g4_m128_ptr<int32_t>(v12) * 1.0039062f;
  *((uint16_t *)v2 + 202) = (unsigned int)_mm_cvtsi128_si32(v12) >> 16;
g4_m128_raw(v14) = *((unsigned int *)a2 + 38);
  *(float *)g4_m128_ptr<int32_t>(v14) = *(float *)g4_m128_ptr<int32_t>(v14) * 1.0039062f;
  *((uint16_t *)v2 + 203) = (unsigned int)_mm_cvtsi128_si32(v14) >> 16;
g4_m128_raw(v15) = *((unsigned int *)a2 + 47);
  *(float *)g4_m128_ptr<int32_t>(v15) = *(float *)g4_m128_ptr<int32_t>(v15) * 1.0039062f;
  *((uint16_t *)v2 + 204) = (unsigned int)_mm_cvtsi128_si32(v15) >> 16;
  if ( *((uint32_t *)v2 + 4) != 0 )
  {
    hkpRigidBody::updateCachedShapeInfo(v2, *((const hkpShape::Self **)v2 + 4), (hkVector4f::Self *)v28, v23, v24, v25, v26);
g4_m128_raw(v13) = 0x3F808000u;
    if ( *((float *)v2 + 23) <= 0.0 )
    {
      v21 = fminf(fminf(v28[0], v28[1]), v28[2]);
      if ( v21 >= 0.5 )
        *((uint32_t *)v2 + 23) = 1036831949;
      else
        *((float *)v2 + 23) = v21 * 0.2f;
    }
  }
  v16 = *((uint8_t *)a2 + 200);
  if ( v16 == -1 )
  {
    if ( *((uint8_t *)v2 + 232) == 5 )
    {
      *((uint8_t *)v2 + 42) = 0;
      goto LABEL_18;
    }
    v16 = (*((uint8_t *)a2 + 180) != 4) + 1;
  }
  *((uint8_t *)v2 + 42) = v16;
LABEL_18:
  *((uint8_t *)v2 + 204) = *((uint8_t *)a2 + 201);
  if ( *((uint8_t *)a2 + 204) != 0 )
    *((uint8_t *)v2 + 33) |= 1u;
  *((uint32_t *)v2 + 35) = *((uint32_t *)a2 + 40);
g4_m128_raw(v17) = *((unsigned int *)a2 + 41);
  *(float *)g4_m128_ptr<int32_t>(v17) = *(float *)g4_m128_ptr<int32_t>(v17) * *(float *)g4_m128_ptr<int32_t>(v13);
  *((uint16_t *)v2 + 69) = (unsigned int)_mm_cvtsi128_si32(v17) >> 16;
  *((uint32_t *)v2 + 36) = *((uint32_t *)a2 + 42);
  *(float *)g4_m128_ptr<int32_t>(v13) = *(float *)g4_m128_ptr<int32_t>(v13) * *((float *)a2 + 39);
  *((uint16_t *)v2 + 255) = (unsigned int)_mm_cvtsi128_si32(v13) >> 16;
  ShapeDepth = *((uint8_t *)a2 + 203);
  if ( ShapeDepth < 0 )
    ShapeDepth = hkpShapeDepthUtil::getShapeDepth(*((hkpShapeDepthUtil::Self **)a2 + 1), v22);
  *((uint8_t *)v2 + 205) = ShapeDepth;
  *((uint8_t *)v2 + 206) = *((uint8_t *)a2 + 202);
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::getCinfo  (binary VA: 0x175c880)
// Original: hkpRigidBody::getCinfo
// ----------------------------------------------------------------------------
int hkpRigidBody::getCinfo(hkpRigidBody::Self *self, hkpRigidBodyCinfo::Self *a2)
{
  uint16_t EncodedFloat;
  int v3; // xmm0_4
  uint16_t v4;
  int v5; // xmm0_4
  int result;
  float Mass;

  *((uint8_t *)a2 + 204) = *((uint8_t *)self + 33) & 1;
  *((uint8_t *)a2 + 201) = *((uint8_t *)self + 204);
  *((uint8_t *)a2 + 203) = *((uint8_t *)self + 205);
  *((uint16_t *)a2 + 99) = *((uint16_t *)self + 83);
  *((uint8_t *)a2 + 181) = hkpRigidBody::isDeactivationEnabled(self);
  *((uint32_t *)a2 + 48) = *((uint32_t *)self + 132);
  *((uint32_t *)a2 + 40) = *((uint32_t *)self + 35);
  *((uint32_t *)a2 + 41) = *((int16_t *)self + 69) << 16;
  *((uint8_t *)a2 + 196) = *((uint8_t *)self + 136);
  *((uint32_t *)a2 + 42) = *((uint32_t *)self + 36);
  *((uint32_t *)a2 + 37) = *((int16_t *)self + 202) << 16;
  *((uint32_t *)a2 + 38) = *((int16_t *)self + 203) << 16;
  *((uint32_t *)a2 + 12) = *((uint32_t *)self + 108);
  *((uint32_t *)a2 + 13) = *((uint32_t *)self + 109);
  *((uint32_t *)a2 + 14) = *((uint32_t *)self + 110);
  *((uint32_t *)a2 + 15) = *((uint32_t *)self + 111);
  *((uint32_t *)a2 + 16) = *((uint32_t *)self + 112);
  *((uint32_t *)a2 + 17) = *((uint32_t *)self + 113);
  *((uint32_t *)a2 + 18) = *((uint32_t *)self + 114);
  *((uint32_t *)a2 + 19) = *((uint32_t *)self + 115);
  Mass = hkpMotion::getMass((hkpRigidBody::Self *)((char *)self + 224));
  *((float *)a2 + 36) = Mass;
  (*(void (**)(char *, char *))(*((uint32_t *)self + 56) + 36))((char *)self + 224, (char *)a2 + 80);
  *((uint8_t *)a2 + 180) = *((uint8_t *)self + 232);
  *((uint8_t *)a2 + 182) = *((uint8_t *)self + 412);
  EncodedFloat = hkUFloat8::getEncodedFloat((hkUFloat8::Self *)*((uint8_t *)self + 410));
  v3 = 0;
  if ( EncodedFloat != 0 )
    v3 = (EncodedFloat + 243712) << 12;
  *((uint32_t *)a2 + 43) = v3;
  v4 = hkUFloat8::getEncodedFloat((hkUFloat8::Self *)*((uint8_t *)self + 411));
  v5 = 0;
  if ( v4 != 0 )
    v5 = (v4 + 243712) << 12;
  *((uint32_t *)a2 + 44) = v5;
  *((uint32_t *)a2 + 4) = *((uint32_t *)self + 72);
  *((uint32_t *)a2 + 5) = *((uint32_t *)self + 73);
  *((uint32_t *)a2 + 6) = *((uint32_t *)self + 74);
  *((uint32_t *)a2 + 7) = *((uint32_t *)self + 75);
  *((uint32_t *)a2 + 8) = *((uint32_t *)self + 88);
  *((uint32_t *)a2 + 9) = *((uint32_t *)self + 89);
  *((uint32_t *)a2 + 10) = *((uint32_t *)self + 90);
  *((uint32_t *)a2 + 11) = *((uint32_t *)self + 91);
  *((uint32_t *)a2 + 32) = *((uint32_t *)self + 92);
  *((uint32_t *)a2 + 33) = *((uint32_t *)self + 93);
  *((uint32_t *)a2 + 34) = *((uint32_t *)self + 94);
  *((uint32_t *)a2 + 35) = *((uint32_t *)self + 95);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 4);
  *(uint32_t *)a2 = *((uint32_t *)self + 11);
  *((uint32_t *)a2 + 46) = *((uint32_t *)self + 23);
  *((uint8_t *)a2 + 200) = *((uint8_t *)self + 42);
  result = *((int16_t *)self + 255) << 16;
  *((uint32_t *)a2 + 39) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::clone  (binary VA: 0x175caf0)
// Original: hkpRigidBody::clone
// ----------------------------------------------------------------------------
int * hkpRigidBody::clone(hkpRigidBody::Self *self)
{
  hkpRigidBody::Self *v1;
  int *v2;
  __m128i *v3;
  unsigned int v4;
  int i;
  hkpMotion::Self *v6;
  unsigned int v7;
  hkpMotion::Self *v8;
  __m128i *v9;
  int j;
  int v11;
  int32_t v12; // ett
  int v13;
  int v14;
  int32_t v15; // ett
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
  __m128i v28;
  hkpMotion::Self *v29;
  __m128i *k;
  __m128i v31;
  int savedregs;
  typedef int *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_address;
  typedef unsigned int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef hkpRigidBody::Self *_g4_t_v39;
  typedef char _g4_t_v40;
  typedef uint8_t _g4_t_v41[216];
  typedef hkArrayUtil::Self *_g4_t_v42;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v32)) > _g4_s0 ? (0u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v33)) > _g4_s1 ? (8u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_address)) > _g4_s2 ? (12u + sizeof(_g4_t_address)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v35)) > _g4_s3 ? (12u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v36)) > _g4_s4 ? (12u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v37)) > _g4_s5 ? (12u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v38)) > _g4_s6 ? (12u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v39)) > _g4_s7 ? (16u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v40)) > _g4_s8 ? (20u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v41)) > _g4_s9 ? (24u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (240u + sizeof(_g4_t_v42)) > _g4_s10 ? (240u + sizeof(_g4_t_v42)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 24u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 240u);

  v42 = (hkArrayUtil::Self *)&self;
  v1 = self;
  hkpRigidBodyCinfo::Construct((hkpRigidBodyCinfo::Self *)v41);
  v39 = v1;
  hkpRigidBody::getCinfo(v1, (hkpRigidBodyCinfo::Self *)v41);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (int *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                *(uint32_t *)(*(uint32_t *)address + 44),
                544);
  hkpRigidBody::Construct((hkpRigidBody::Self *)v2, (const hkpRigidBodyCinfo::Self *)v41);
  v3 = (__m128i *)((char *)v39 + 224);
  v4 = (unsigned int)(uintptr_t)(v2 + 56);
  if ( (char *)v39 + 224 >= (char *)(v2 + 60) || v4 >= (unsigned int)(uintptr_t)(v39) + 240 )
  {
    for ( i = 0; i != 18; ++i )
      *(__m128i *)(v4 + i * 16) = v3[i];
  }
  else
  {
    do
    {
      v28 = *v3++;
      v4 += 16;
      *(__m128i *)(v4 - 16) = v28;
    }
    while ( v3 != (__m128i *)((char *)v39 + 512) );
  }
  if ( *((uint32_t *)v39 + 126) != 0 )
  {
    v6 = (hkpMotion::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                        *(uint32_t *)(*(uint32_t *)address + 44),
                        288);
    hkpMotion::Construct(v6);
    *(uint32_t *)v6 = ((uint32_t)(uintptr_t)&off_209EA08);
    *((uint32_t *)v6 + 70) = 0;
    v2[126] = (int)(uintptr_t)(v6);
    v7 = *((uint32_t *)v6 + 1);
    v8 = (hkpMotion::Self *)((char *)v6 + 16);
    v33 = (uint16_t)v7;
    v35 = HIWORD(v7);
    v9 = *((__m128i **)v39 + 126);
    if ( v9 >= (__m128i *)v6 + 1 || v6 >= (hkpMotion::Self *)&v9[1] )
    {
      for ( j = 0; j != 18; ++j )
        *(__m128i *)((char *)v6 + j * 16) = v9[j];
    }
    else
    {
      v32 = v2;
      v29 = (hkpMotion::Self *)((char *)v6 + 288);
      for ( k = v9 + 1; ; ++k )
      {
        v31 = *v9;
        v9 = k;
        *(__m128i *)v6 = v31;
        v6 = v8;
        if ( v8 == v29 )
          break;
        v8 = (hkpMotion::Self *)((char *)v8 + 16);
      }
      v2 = v32;
    }
    v11 = v2[126];
    v36 = v35 << 16;
    do
      v12 = *(uint32_t *)(v11 + 4);
    while ( v12 != __sync_val_compare_and_swap((volatile int32_t *)(v11 + 4), v12, v36 | (uint16_t)v12) );
    v13 = v2[126];
    do
    {
      HIWORD(v14) = HIWORD(*(uint32_t *)(v13 + 4));
      LOWORD(v14) = 0;
      v15 = *(uint32_t *)(v13 + 4);
    }
    while ( v15 != __sync_val_compare_and_swap((volatile int32_t *)(v13 + 4), v15, v33 | v14) );
  }
  v2[6] = G4_VCALL<int>(v2, 28);
  v16 = v2[32];
  v17 = *((uint32_t *)v39 + 32);
  if ( v17 <= v16 )
    v16 = *((uint32_t *)v39 + 32);
  v37 = v16;
  v18 = v2[33] & 0x3FFFFFFF;
  if ( v17 > v18 )
  {
    v19 = 2 * v18;
    savedregs = 16;
    v42 = (hkArrayUtil::Self *)&v40;
    if ( v19 < v17 )
      v19 = v17;
    hkArrayUtil::reserve(v42, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v2 + 31, v19, savedregs);
  }
  v20 = v2[31];
  v21 = *((uint32_t *)v39 + 31);
  if ( v37 > 0 )
  {
    v22 = 0;
    do
    {
      *(uint32_t *)(v20 + v22) = *(uint32_t *)(v21 + v22);
      *(uint32_t *)(v20 + v22 + 4) = *(uint32_t *)(v21 + v22 + 4);
      *(uint32_t *)(v20 + v22 + 8) = *(uint32_t *)(v21 + v22 + 8);
      *(uint32_t *)(v20 + v22 + 12) = *(uint32_t *)(v21 + v22 + 12);
      v22 += 16;
    }
    while ( v22 != 16 * v37 );
    v20 = v2[31];
    v21 = *((uint32_t *)v39 + 31);
  }
  v23 = 16 * v37 + v21;
  v24 = 16 * v37 + v20;
  v38 = v17 - v37;
  v25 = 0;
  if ( v38 > 0 )
  {
    do
    {
      *(uint32_t *)(v24 + v25) = *(uint32_t *)(v23 + v25);
      *(uint32_t *)(v24 + v25 + 4) = *(uint32_t *)(v23 + v25 + 4);
      *(uint32_t *)(v24 + v25 + 8) = *(uint32_t *)(v23 + v25 + 8);
      *(uint32_t *)(v24 + v25 + 12) = *(uint32_t *)(v23 + v25 + 12);
      v25 += 16;
    }
    while ( v25 != 16 * v38 );
  }
  v2[32] = v17;
  hkStringPtr::opAssign((hkStringPtr::Self *)(v2 + 30), (hkString::Self *)(*((uint32_t *)v39 + 30) & 0xFFFFFFFE));
  v2[3] = *((uint32_t *)v39 + 3);
  v26 = *((uint32_t *)v39 + 39);
  if ( v26 != 0 )
    v2[39] = G4_VCALL<int>(v26, 20, v2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::getStoredDynamicMotion  (binary VA: 0x175ced0)
// Original: hkpRigidBody::getStoredDynamicMotion
// ----------------------------------------------------------------------------
int hkpRigidBody::getStoredDynamicMotion(hkpRigidBody::Self *self)
{
  if ( (uint8_t)(*((uint8_t *)self + 232) - 4) <= 1u )
    return *((uint32_t *)self + 126);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::getStoredDynamicMotion_ea175cef0  (binary VA: 0x175cef0)
// Original: hkpRigidBody::getStoredDynamicMotion
// ----------------------------------------------------------------------------
int hkpRigidBody::getStoredDynamicMotion_ea175cef0(hkpRigidBody::Self *self)
{
  if ( (uint8_t)(*((uint8_t *)self + 232) - 4) <= 1u )
    return *((uint32_t *)self + 126);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::updateBroadphaseAndResetCollisionInformationOfWarpedBody  (binary VA: 0x175cf10)
// Original: hkpRigidBody::updateBroadphaseAndResetCollisionInformationOfWarpedBody
// ----------------------------------------------------------------------------
hkpEntity::Self * hkpRigidBody::updateBroadphaseAndResetCollisionInformationOfWarpedBody(hkpRigidBody::Self *self)
{
  hkpRigidBody::Self *v1;
  int v2;
  hkpEntity::Self *result;
  bool v4;
  typedef int _g4_t_v5;
  typedef hkpEntity::Self *_g4_t_v6;
  typedef char _g4_t_v7;
  typedef uint32_t _g4_t_v8[10];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (39u + sizeof(_g4_t_v7)) > _g4_s2 ? (39u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v8)) > _g4_s3 ? (40u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 39u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);

  v8[6] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  v2 = *((uint32_t *)self + 2);
  if ( v2 != 0 )
  {
    if ( *(uint32_t *)(v2 + 140) != 0 )
    {
      v5 = *((uint32_t *)self + 2);
      v8[1] = (uint32_t)(uintptr_t)(self);
      LOBYTE(v8[0]) = 23;
      return (hkpEntity::Self *)hkpWorld::queueOperation(v5, (int)(uintptr_t)(v8));
    }
    else
    {
      *(uint32_t *)(v2 + 140) = 1;
      v8[0] = (uint32_t)(uintptr_t)(v1);
      v6 = (hkpEntity::Self *)(&dword_0 + 1);
      (*(void (**)(uint32_t, uint32_t *))(**(uint32_t **)(v2 + 8) + 56))(*(uint32_t *)(v2 + 8), v8);
      if ( *((uint32_t *)v1 + 4) != 0 )
        hkpSimulation::collideEntitiesBroadPhaseDiscrete(
          (hkpSimulation::Self *)v8,
          (hkpEntity::Self **)((char *)&dword_0 + 1),
          v2,
          (hkpWorld::Self *)v2);
      result = hkpEntity::isActive((hkpEntity::Self *)&v7, (int)(uintptr_t)(v1));
      if ( v7 == 0 )
      {
        if ( *(uint8_t *)(v2 + 210) != 0 && *((uint8_t *)v1 + 232) != 5 )
          hkpEntity::activate(v1);
        result = (hkpEntity::Self *)hkpWorldCallbackUtil::fireInactiveEntityMoved((hkpWorldCallbackUtil::Self *)v2, v1, v6);
      }
      v4 = (*(uint32_t *)(v2 + 140))-- == 1;
      if ( v4 && *(uint8_t *)(v2 + 148) == 0 )
      {
        if ( *(uint32_t *)(v2 + 132) != 0 )
          result = (hkpEntity::Self *)hkpWorld::internal_executePendingOperations((hkpWorld::Self *)v2);
        if ( *(uint32_t *)(v2 + 156) == 1 && *(uint32_t *)(v2 + 136) != 0 )
          return (hkpEntity::Self *)hkpWorld::internal_executePendingBodyOperations((hkpWorld::Self *)v2);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::setPosition  (binary VA: 0x175d070)
// Original: hkpRigidBody::setPosition
// ----------------------------------------------------------------------------
hkpEntity::Self * hkpRigidBody::setPosition(hkpRigidBody::Self *self, const hkVector4f::Self *a2)
{
  (*(void (**)(char *, const hkVector4f::Self *))(*((uint32_t *)self + 56) + 64))((char *)self + 224, a2);
  return hkpRigidBody::updateBroadphaseAndResetCollisionInformationOfWarpedBody(self);
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::setRotation  (binary VA: 0x175d0b0)
// Original: hkpRigidBody::setRotation
// ----------------------------------------------------------------------------
hkpEntity::Self * hkpRigidBody::setRotation(hkpRigidBody::Self *self, const hkQuaternionf::Self *a2)
{
  (*(void (**)(char *, const hkQuaternionf::Self *))(*((uint32_t *)self + 56) + 68))((char *)self + 224, a2);
  return hkpRigidBody::updateBroadphaseAndResetCollisionInformationOfWarpedBody(self);
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::setPositionAndRotation  (binary VA: 0x175d0f0)
// Original: hkpRigidBody::setPositionAndRotation
// ----------------------------------------------------------------------------
hkpEntity::Self * hkpRigidBody::setPositionAndRotation(hkpRigidBody::Self *self, const hkVector4f::Self *a2, const hkQuaternionf::Self *a3)
{
  (*(void (**)(char *, const hkVector4f::Self *, const hkQuaternionf::Self *))(*((uint32_t *)self + 56) + 72))(
    (char *)self + 224,
    a2,
    a3);
  return hkpRigidBody::updateBroadphaseAndResetCollisionInformationOfWarpedBody(self);
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::setTransform  (binary VA: 0x175d140)
// Original: hkpRigidBody::setTransform
// ----------------------------------------------------------------------------
hkpEntity::Self * hkpRigidBody::setTransform(hkpRigidBody::Self *self, const hkTransformf::Self *a2)
{
  (*(void (**)(char *, const hkTransformf::Self *))(*((uint32_t *)self + 56) + 76))((char *)self + 224, a2);
  return hkpRigidBody::updateBroadphaseAndResetCollisionInformationOfWarpedBody(self);
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::setMass  (binary VA: 0x175d180)
// Original: hkpRigidBody::setMass
// ----------------------------------------------------------------------------
int hkpRigidBody::setMass(hkpRigidBody::Self *self, float a2)
{
  return (*(int (**)(char *, uint32_t))(*((uint32_t *)self + 56) + 20))((char *)self + 224, LODWORD(a2));
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::setMassInv  (binary VA: 0x175d1b0)
// Original: hkpRigidBody::setMassInv
// ----------------------------------------------------------------------------
int hkpRigidBody::setMassInv(hkpRigidBody::Self *self, float a2)
{
  return (*(int (**)(char *, uint32_t))(*((uint32_t *)self + 56) + 28))((char *)self + 224, LODWORD(a2));
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::setFriction  (binary VA: 0x175d1e0)
// Original: hkpRigidBody::setFriction
// ----------------------------------------------------------------------------
hkpRigidBody::Self * hkpRigidBody::setFriction(hkpRigidBody::Self *self, float a2)
{
  *((float *)self + 35) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::setRollingFrictionMultiplier  (binary VA: 0x175d200)
// Original: hkpRigidBody::setRollingFrictionMultiplier
// ----------------------------------------------------------------------------
hkpRigidBody::Self * hkpRigidBody::setRollingFrictionMultiplier(hkpRigidBody::Self *self, float a2)
{
  __m128i v2;
g4_m128_raw(v2) = 0x3F808000u;
  *(float *)g4_m128_ptr<int32_t>(v2) = 1.0039062f * a2;
  *((uint16_t *)self + 69) = (unsigned int)_mm_cvtsi128_si32(v2) >> 16;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::setRestitution  (binary VA: 0x175d230)
// Original: hkpRigidBody::setRestitution
// ----------------------------------------------------------------------------
hkpRigidBody::Self * hkpRigidBody::setRestitution(hkpRigidBody::Self *self, float a2)
{
  *((float *)self + 36) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::setInertiaLocal  (binary VA: 0x175d250)
// Original: hkpRigidBody::setInertiaLocal
// ----------------------------------------------------------------------------
int hkpRigidBody::setInertiaLocal(hkpRigidBody::Self *self, const hkMatrix3f::Self *a2)
{
  return (*(int (**)(char *, const hkMatrix3f::Self *))(*((uint32_t *)self + 56) + 44))((char *)self + 224, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::setInertiaInvLocal  (binary VA: 0x175d280)
// Original: hkpRigidBody::setInertiaInvLocal
// ----------------------------------------------------------------------------
int hkpRigidBody::setInertiaInvLocal(hkpRigidBody::Self *self, const hkMatrix3f::Self *a2)
{
  return (*(int (**)(char *, const hkMatrix3f::Self *))(*((uint32_t *)self + 56) + 48))((char *)self + 224, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::setPositionAndRotationAsCriticalOperation  (binary VA: 0x175d2b0)
// Original: hkpRigidBody::setPositionAndRotationAsCriticalOperation
// ----------------------------------------------------------------------------
hkpEntity::Self * hkpRigidBody::setPositionAndRotationAsCriticalOperation(hkpRigidBody::Self *self, const hkVector4f::Self *a2, const hkQuaternionf::Self *a3)
{
  int v3;
  int address;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  typedef char _g4_t_v9[4];
  typedef hkpRigidBody::Self *_g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);

  v3 = *((uint32_t *)self + 2);
  if ( v3 == 0 || *(uint32_t *)(v3 + 140) == 0 )
    return hkpRigidBody::setPositionAndRotation(self, a2, a3);
  v10 = self;
  v9[0] = 25;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v6 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   32);
  v7 = *(uint32_t *)a2;
  v11 = v6;
  *v6 = v7;
  v6[1] = *((uint32_t *)a2 + 1);
  v6[2] = *((uint32_t *)a2 + 2);
  v6[3] = *((uint32_t *)a2 + 3);
  v8 = v11;
  v11[4] = *(uint32_t *)a3;
  v8[5] = *((uint32_t *)a3 + 1);
  v8[6] = *((uint32_t *)a3 + 2);
  v8[7] = *((uint32_t *)a3 + 3);
  return (hkpEntity::Self *)hkpWorld::queueOperation(*((uint32_t *)self + 2), (int)(uintptr_t)(v9));
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::setLinearVelocityAsCriticalOperation  (binary VA: 0x175d380)
// Original: hkpRigidBody::setLinearVelocityAsCriticalOperation
// ----------------------------------------------------------------------------
int hkpRigidBody::setLinearVelocityAsCriticalOperation(hkpRigidBody::Self *self, const hkVector4f::Self *a2)
{
  int v2;
  int v4; // xmm0_4
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef hkpRigidBody::Self *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v7)) > _g4_s2 ? (16u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v8)) > _g4_s3 ? (20u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v9)) > _g4_s4 ? (24u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v10)) > _g4_s5 ? (28u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v11)) > _g4_s6 ? (32u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v12)) > _g4_s7 ? (36u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v13)) > _g4_s8 ? (40u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v14)) > _g4_s9 ? (44u + sizeof(_g4_t_v14)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  v2 = *((uint32_t *)self + 2);
  if ( v2 != 0 && *(uint32_t *)(v2 + 140) != 0 )
  {
    v9 = *(uint32_t *)a2;
    v8 = self;
    v4 = *((uint32_t *)a2 + 1);
    LOBYTE(v7) = 26;
    v10 = v4;
    v11 = *((uint32_t *)a2 + 2);
    return hkpWorld::queueOperation(v2, (int)(uintptr_t)(&v7));
  }
  else
  {
    hkpEntity::activate(self);
    return (*(int (**)(char *, const hkVector4f::Self *, int, int, int, hkpRigidBody::Self *, int, int, int, int, int, int))(*((uint32_t *)self + 56) + 80))(
             (char *)self + 224,
             a2,
             v5,
             v6,
             v7,
             v8,
             v9,
             v10,
             v11,
             v12,
             v13,
             v14);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::setAngularVelocityAsCriticalOperation  (binary VA: 0x175d420)
// Original: hkpRigidBody::setAngularVelocityAsCriticalOperation
// ----------------------------------------------------------------------------
int hkpRigidBody::setAngularVelocityAsCriticalOperation(hkpRigidBody::Self *self, const hkVector4f::Self *a2)
{
  int v2;
  int v4; // xmm0_4
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef hkpRigidBody::Self *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v7)) > _g4_s2 ? (16u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v8)) > _g4_s3 ? (20u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v9)) > _g4_s4 ? (24u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v10)) > _g4_s5 ? (28u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v11)) > _g4_s6 ? (32u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v12)) > _g4_s7 ? (36u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v13)) > _g4_s8 ? (40u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v14)) > _g4_s9 ? (44u + sizeof(_g4_t_v14)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  v2 = *((uint32_t *)self + 2);
  if ( v2 != 0 && *(uint32_t *)(v2 + 140) != 0 )
  {
    v9 = *(uint32_t *)a2;
    v8 = self;
    v4 = *((uint32_t *)a2 + 1);
    LOBYTE(v7) = 27;
    v10 = v4;
    v11 = *((uint32_t *)a2 + 2);
    return hkpWorld::queueOperation(v2, (int)(uintptr_t)(&v7));
  }
  else
  {
    hkpEntity::activate(self);
    return (*(int (**)(char *, const hkVector4f::Self *, int, int, int, hkpRigidBody::Self *, int, int, int, int, int, int))(*((uint32_t *)self + 56) + 84))(
             (char *)self + 224,
             a2,
             v5,
             v6,
             v7,
             v8,
             v9,
             v10,
             v11,
             v12,
             v13,
             v14);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::applyLinearImpulseAsCriticalOperation  (binary VA: 0x175d4c0)
// Original: hkpRigidBody::applyLinearImpulseAsCriticalOperation
// ----------------------------------------------------------------------------
int hkpRigidBody::applyLinearImpulseAsCriticalOperation(hkpRigidBody::Self *self, const hkVector4f::Self *a2)
{
  int v2;
  int v4; // xmm0_4
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef hkpRigidBody::Self *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v7)) > _g4_s2 ? (16u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v8)) > _g4_s3 ? (20u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v9)) > _g4_s4 ? (24u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v10)) > _g4_s5 ? (28u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v11)) > _g4_s6 ? (32u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v12)) > _g4_s7 ? (36u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v13)) > _g4_s8 ? (40u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v14)) > _g4_s9 ? (44u + sizeof(_g4_t_v14)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  v2 = *((uint32_t *)self + 2);
  if ( v2 != 0 && *(uint32_t *)(v2 + 140) != 0 )
  {
    v9 = *(uint32_t *)a2;
    v8 = self;
    v4 = *((uint32_t *)a2 + 1);
    LOBYTE(v7) = 28;
    v10 = v4;
    v11 = *((uint32_t *)a2 + 2);
    return hkpWorld::queueOperation(v2, (int)(uintptr_t)(&v7));
  }
  else
  {
    hkpEntity::activate(self);
    return (*(int (**)(char *, const hkVector4f::Self *, int, int, int, hkpRigidBody::Self *, int, int, int, int, int, int))(*((uint32_t *)self + 56) + 96))(
             (char *)self + 224,
             a2,
             v5,
             v6,
             v7,
             v8,
             v9,
             v10,
             v11,
             v12,
             v13,
             v14);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::applyPointImpulseAsCriticalOperation  (binary VA: 0x175d560)
// Original: hkpRigidBody::applyPointImpulseAsCriticalOperation
// ----------------------------------------------------------------------------
int hkpRigidBody::applyPointImpulseAsCriticalOperation(hkpRigidBody::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3)
{
  int v3;
  int address;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  typedef char _g4_t_v9[4];
  typedef hkpRigidBody::Self *_g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);

  v3 = *((uint32_t *)self + 2);
  if ( v3 != 0 && *(uint32_t *)(v3 + 140) != 0 )
  {
    v10 = self;
    v9[0] = 29;
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v6 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                     *(uint32_t *)(*(uint32_t *)address + 44),
                     32);
    v7 = *(uint32_t *)a3;
    v11 = v6;
    *v6 = v7;
    v6[1] = *((uint32_t *)a3 + 1);
    v6[2] = *((uint32_t *)a3 + 2);
    v6[3] = *((uint32_t *)a3 + 3);
    v8 = v11;
    v11[4] = *(uint32_t *)a2;
    v8[5] = *((uint32_t *)a2 + 1);
    v8[6] = *((uint32_t *)a2 + 2);
    v8[7] = *((uint32_t *)a2 + 3);
    return hkpWorld::queueOperation(*((uint32_t *)self + 2), (int)(uintptr_t)(v9));
  }
  else
  {
    hkpEntity::activate(self);
    return (*(int (**)(char *, const hkVector4f::Self *, const hkVector4f::Self *))(*((uint32_t *)self + 56) + 100))(
             (char *)self + 224,
             a2,
             a3);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::applyAngularImpulseAsCriticalOperation  (binary VA: 0x175d640)
// Original: hkpRigidBody::applyAngularImpulseAsCriticalOperation
// ----------------------------------------------------------------------------
int hkpRigidBody::applyAngularImpulseAsCriticalOperation(hkpRigidBody::Self *self, const hkVector4f::Self *a2)
{
  int v2;
  int v4; // xmm0_4
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef hkpRigidBody::Self *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v7)) > _g4_s2 ? (16u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v8)) > _g4_s3 ? (20u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v9)) > _g4_s4 ? (24u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v10)) > _g4_s5 ? (28u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v11)) > _g4_s6 ? (32u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v12)) > _g4_s7 ? (36u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v13)) > _g4_s8 ? (40u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v14)) > _g4_s9 ? (44u + sizeof(_g4_t_v14)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  v2 = *((uint32_t *)self + 2);
  if ( v2 != 0 && *(uint32_t *)(v2 + 140) != 0 )
  {
    v9 = *(uint32_t *)a2;
    v8 = self;
    v4 = *((uint32_t *)a2 + 1);
    LOBYTE(v7) = 30;
    v10 = v4;
    v11 = *((uint32_t *)a2 + 2);
    return hkpWorld::queueOperation(v2, (int)(uintptr_t)(&v7));
  }
  else
  {
    hkpEntity::activate(self);
    return (*(int (**)(char *, const hkVector4f::Self *, int, int, int, hkpRigidBody::Self *, int, int, int, int, int, int))(*((uint32_t *)self + 56) + 104))(
             (char *)self + 224,
             a2,
             v5,
             v6,
             v7,
             v8,
             v9,
             v10,
             v11,
             v12,
             v13,
             v14);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBody::checkPerformance  (binary VA: 0x175d6e0)
// Original: hkpRigidBody::checkPerformance
// ----------------------------------------------------------------------------
hkpRigidBody::Self * hkpRigidBody::checkPerformance(hkpRigidBody::Self *self, int a2)
{
  int v2;
  uint8_t *v3;
  char v4;
  int v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char v12;
  char v13;
  char v14;

  v2 = a2;
  v3 = *(uint8_t **)(a2 + 16);
  if ( v3 != nullptr )
  {
    v4 = 1;
    v5 = v3[8];
    if ( (uint8_t)(*(uint8_t *)(a2 + 232) - 4) > 1u )
    {
      if ( (unsigned int)(v5 - 7) > 0xF
        || ((1 << (v5 - 7)) & 0x8605) == 0
        || (v9 = G4_VCALL<int>(v3, 64),
            v10 = G4_VCALL<int>(v9, 8),
            v4 = 0,
            v2 = a2,
            v10 <= 100) )
      {
        v4 = 1;
      }
    }
    switch ( v5 )
    {
      case 27:
        v14 = v4;
        v11 = G4_VCALL<int>(*(uint32_t *)(v2 + 16) + 16, 8);
        v4 = v14;
        if ( v11 >= 101 )
          v4 = 0;
        goto LABEL_11;
      case 6:
      case 18:
        v12 = v4;
        v7 = G4_VCALL<int>(*(uint32_t *)(v2 + 16) + 16, 8);
        v4 = v12;
        if ( v7 >= 101 )
          v4 = 0;
        break;
      case 14:
        v4 = 0;
LABEL_11:
        *(uint8_t *)self = v4;
        return self;
      case 8:
        v13 = v4;
        v8 = G4_VCALL<int>(v3, 96);
        v4 = v13;
        if ( v8 >= 101 )
          v4 = 0;
        break;
      default:
        break;
    }
    goto LABEL_11;
  }
  *(uint8_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyLocalFrameViewer::getProcessTag  (binary VA: 0x18345b0)
// Original: hkpRigidBodyLocalFrameViewer::getProcessTag
// ----------------------------------------------------------------------------
int hkpRigidBodyLocalFrameViewer::getProcessTag()
{
  return hkpRigidBodyLocalFrameViewer::m_tag;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyLocalFrameViewer::init  (binary VA: 0x18345e0)
// Original: hkpRigidBodyLocalFrameViewer::init
// ----------------------------------------------------------------------------
int hkpRigidBodyLocalFrameViewer::init(hkpRigidBodyLocalFrameViewer::Self *self)
{
  int result;
  int v2;
  int v3;

  result = *((uint32_t *)self + 9);
  if ( result != 0 && *(int *)(result + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(uint32_t *)(*(uint32_t *)(result + 108) + 4 * v2++);
      G4_VCALL<void>(self, 36, v3);
      result = *((uint32_t *)self + 9);
    }
    while ( v2 < *(uint32_t *)(result + 112) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyLocalFrameViewer::worldRemovedCallback  (binary VA: 0x1834640)
// Original: hkpRigidBodyLocalFrameViewer::worldRemovedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpRigidBodyLocalFrameViewer::worldRemovedCallback(hkpRigidBodyLocalFrameViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpWorld::removeWorldPostSimulationListener(a2, (hkpRigidBodyLocalFrameViewer::Self *)((char *)self + 40));
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyLocalFrameViewer::Destroy  (binary VA: 0x1834680)
// Original: hkpRigidBodyLocalFrameViewer::~hkpRigidBodyLocalFrameViewer
// ----------------------------------------------------------------------------
void hkpRigidBodyLocalFrameViewer::Destroy(hkpRigidBodyLocalFrameViewer::Self *self)
{
  int v1;
  int v2;
  hkpWorld::Self *v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A23C8);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A2404);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A2430);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A2448);
  v1 = *((uint32_t *)self + 9);
  if ( v1 != 0 && *(int *)(v1 + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(hkpWorld::Self **)(*(uint32_t *)(v1 + 108) + 4 * v2++);
      hkpRigidBodyLocalFrameViewer::worldRemovedCallback(self, v3);
      v1 = *((uint32_t *)self + 9);
    }
    while ( v2 < *(uint32_t *)(v1 + 112) );
  }
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_209E868);
  hkpWorldViewerBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyLocalFrameViewer::worldAddedCallback  (binary VA: 0x1834740)
// Original: hkpRigidBodyLocalFrameViewer::worldAddedCallback
// ----------------------------------------------------------------------------
int hkpRigidBodyLocalFrameViewer::worldAddedCallback(hkpRigidBodyLocalFrameViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpWorld::addWorldPostSimulationListener(a2, (hkpRigidBodyLocalFrameViewer::Self *)((char *)self + 40));
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyLocalFrameViewer::Destroy_ea1834780  (binary VA: 0x1834780)
// Original: hkpRigidBodyLocalFrameViewer::~hkpRigidBodyLocalFrameViewer
// ----------------------------------------------------------------------------
void hkpRigidBodyLocalFrameViewer::Destroy_ea1834780(hkpRigidBodyLocalFrameViewer::Self *self)
{
  int v1;
  int v2;

  hkpRigidBodyLocalFrameViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 44;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyLocalFrameViewer::postSimulationCallback  (binary VA: 0x1834810)
// Original: hkpRigidBodyLocalFrameViewer::postSimulationCallback
// ----------------------------------------------------------------------------
int hkpRigidBodyLocalFrameViewer::postSimulationCallback(hkpRigidBodyLocalFrameViewer::Self *self, hkpWorld::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  hkpWorld::Self *v8;
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
  int result;
  typedef int _g4_t_v21;
  typedef const char *_g4_t_v22;
  typedef int _g4_t_i;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef float _g4_t_CurrentTime;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint8_t _g4_t_v36[76];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v21)) > _g4_s0 ? (12u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v22)) > _g4_s1 ? (24u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_i)) > _g4_s2 ? (32u + sizeof(_g4_t_i)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v24)) > _g4_s3 ? (32u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v25)) > _g4_s4 ? (40u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v26)) > _g4_s5 ? (40u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v27)) > _g4_s6 ? (40u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v28)) > _g4_s7 ? (40u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v29)) > _g4_s8 ? (44u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v30)) > _g4_s9 ? (44u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v31)) > _g4_s10 ? (44u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_CurrentTime)) > _g4_s11 ? (44u + sizeof(_g4_t_CurrentTime)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v33)) > _g4_s12 ? (48u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v34)) > _g4_s13 ? (52u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v35)) > _g4_s14 ? (56u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v36)) > _g4_s15 ? (64u + sizeof(_g4_t_v36)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_CurrentTime &CurrentTime = *reinterpret_cast<_g4_t_CurrentTime *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);

  v33 = 0;
  v34 = 0;
  v35 = 0x80000000;
  v2 = *((uint32_t *)a2 + 11);
  if ( v2 <= 0 )
  {
    v3 = 0;
  }
  else
  {
    v3 = 0;
    v25 = *((uint32_t *)a2 + 10);
    for ( i = 0; i < v2; ++i )
    {
      v4 = *(uint32_t *)(v25 + 4 * i);
      if ( *(int *)(v4 + 80) > 0 )
      {
        v29 = *(uint32_t *)(v4 + 80);
        v5 = v3;
        v6 = 0;
        while ( 1 )
        {
          v7 = *(uint32_t *)(*(uint32_t *)(v4 + 76) + 4 * v6);
          if ( *(uint32_t *)(v7 + 528) != 0 )
          {
            if ( (v35 & 0x3FFFFFFF) == v3 )
            {
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)&v33,
                4,
                v21);
              v5 = v34;
            }
            *(uint32_t *)(v33 + 4 * v5) = v7;
            v3 = ++v34;
            v25 = *((uint32_t *)a2 + 10);
            v4 = *(uint32_t *)(v25 + 4 * i);
            v29 = *(uint32_t *)(v4 + 80);
          }
          if ( ++v6 >= v29 )
            break;
          v5 = v3;
        }
        v2 = *((uint32_t *)a2 + 11);
      }
    }
  }
  v8 = a2;
  v9 = *((uint32_t *)a2 + 14);
  if ( v9 > 0 )
  {
    v24 = 0;
    v26 = *((uint32_t *)a2 + 13);
    do
    {
      v10 = *(uint32_t *)(v26 + 4 * v24);
      if ( *(int *)(v10 + 80) > 0 )
      {
        v30 = *(uint32_t *)(v10 + 80);
        v11 = v3;
        v12 = 0;
        while ( 1 )
        {
          v13 = *(uint32_t *)(*(uint32_t *)(v10 + 76) + 4 * v12);
          if ( *(uint32_t *)(v13 + 528) != 0 )
          {
            if ( (v35 & 0x3FFFFFFF) == v3 )
            {
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)&v33,
                4,
                v21);
              v11 = v34;
            }
            *(uint32_t *)(v33 + 4 * v11) = v13;
            v3 = ++v34;
            v26 = *((uint32_t *)a2 + 13);
            v10 = *(uint32_t *)(v26 + 4 * v24);
            v30 = *(uint32_t *)(v10 + 80);
          }
          if ( ++v12 >= v30 )
            break;
          v11 = v3;
        }
        v9 = *((uint32_t *)a2 + 14);
      }
      ++v24;
    }
    while ( v24 < v9 );
    v8 = a2;
  }
  v14 = *((uint32_t *)v8 + 8);
  v15 = *(uint32_t *)(v14 + 80);
  if ( v15 > 0 )
  {
    v31 = v3;
    v16 = 0;
    while ( 1 )
    {
      v17 = *(uint32_t *)(*(uint32_t *)(v14 + 76) + 4 * v16);
      if ( *(uint32_t *)(v17 + 528) != 0 )
      {
        if ( (v35 & 0x3FFFFFFF) == v3 )
        {
          v27 = v14;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v33,
            4,
            v21);
          v14 = v27;
          v31 = v34;
        }
        *(uint32_t *)(v33 + 4 * v31) = v17;
        v15 = *(uint32_t *)(v14 + 80);
        v3 = ++v34;
      }
      if ( ++v16 >= v15 )
        break;
      v31 = v3;
    }
  }
  if ( v3 > 0 )
  {
    v18 = 0;
    do
    {
      v28 = *(uint32_t *)(v33 + 4 * v18);
      CurrentTime = hkpWorld::getCurrentTime((hkpWorld::Self *)*(uint32_t *)(v28 + 8));
      hkpMotion::approxTransformAt((hkpMotion::Self *)(v28 + 224), CurrentTime, (hkTransformf::Self *)v36);
      v19 = *(uint32_t *)(v33 + 4 * v18++);
      hkDrawUtil::displayLocalFrame(
        *(hkDrawUtil::Self **)(v19 + 528),
        (const hkLocalFrame::Self *)v36,
        hkpRigidBodyLocalFrameViewer::m_scale,
        COERCE_FLOAT(1),
        184,
        " (local frame)",
        v22);
    }
    while ( v34 > v18 );
  }
  result = v35;
  v34 = 0;
  if ( v35 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v33,
             4 * v35);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyLocalFrameViewer::registerViewer  (binary VA: 0x1834b90)
// Original: hkpRigidBodyLocalFrameViewer::registerViewer
// ----------------------------------------------------------------------------
int hkpRigidBodyLocalFrameViewer::registerViewer()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "Physics Local Frames",
             hkpRigidBodyLocalFrameViewer::create);
  hkpRigidBodyLocalFrameViewer::m_tag = result;
  return result;
}



// ============================================================================
// Address:   0x1834be0 (size: 77 bytes)
// Symbol:    _ZN28hkpRigidBodyLocalFrameViewerC2ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE
// Demangled: hkpRigidBodyLocalFrameViewer::hkpRigidBodyLocalFrameViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// ============================================================================
// Alternative name is '_ZN28hkpRigidBodyLocalFrameViewerC1ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE'
void (**hkpRigidBodyLocalFrameViewer::hkpRigidBodyLocalFrameViewer(
        uint32_t *a1,
        int a2))(hkpRigidBodyLocalFrameViewer::Self * self)
{
  hkpWorldViewerBase::Construct(a1, a2);
  *a1 = ((uint32_t)(uintptr_t)&off_20A23C8);
  a1[2] = ((uint32_t)(uintptr_t)&off_20A2404);
  a1[8] = ((uint32_t)(uintptr_t)&off_20A2430);
  a1[10] = ((uint32_t)(uintptr_t)&off_20A2448);
  return (void (**)(hkpRigidBodyLocalFrameViewer::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A2448));
}
// ----------------------------------------------------------------------------
// Function: hkpRigidBodyLocalFrameViewer::create  (binary VA: 0x1834c30)
// Original: hkpRigidBodyLocalFrameViewer::create
// ----------------------------------------------------------------------------
uint32_t * hkpRigidBodyLocalFrameViewer::create(int a1)
{
  int address;
  uint32_t *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   44);
  hkpRigidBodyLocalFrameViewer::hkpRigidBodyLocalFrameViewer(v2, a1);
  if ( v2 != nullptr )
    return v2 + 2;
  else
    return nullptr;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyInertiaViewer::getProcessTag  (binary VA: 0x1841b00)
// Original: hkpRigidBodyInertiaViewer::getProcessTag
// ----------------------------------------------------------------------------
int hkpRigidBodyInertiaViewer::getProcessTag()
{
  return hkpRigidBodyInertiaViewer::m_tag;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyInertiaViewer::entityRemovedCallback  (binary VA: 0x1841b30)
// Original: hkpRigidBodyInertiaViewer::entityRemovedCallback
// ----------------------------------------------------------------------------
void hkpRigidBodyInertiaViewer::entityRemovedCallback(hkpRigidBodyInertiaViewer::Self *self, hkpEntity::Self *a2)
{
  int v2;
  hkpEntity::Self **v3;
  int v4;
  int v5;
  int v6;

  v2 = *((uint32_t *)self + 13);
  if ( v2 > 0 )
  {
    v3 = *((hkpEntity::Self ***)self + 12);
    if ( a2 == *v3 )
    {
      v5 = 0;
      v4 = 0;
LABEL_8:
      v6 = v2 - 1;
      *((uint32_t *)self + 13) = v6;
      if ( v4 != v6 )
        v3[v5] = v3[v6];
    }
    else
    {
      v4 = 0;
      while ( ++v4 != v2 )
      {
        v5 = v4;
        if ( a2 == v3[v4] )
          goto LABEL_8;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyInertiaViewer::entityAddedCallback  (binary VA: 0x1841ba0)
// Original: hkpRigidBodyInertiaViewer::entityAddedCallback
// ----------------------------------------------------------------------------
int hkpRigidBodyInertiaViewer::entityAddedCallback(hkpRigidBodyInertiaViewer::Self *self, hkpEntity::Self *a2)
{
  int v2;
  int result;
  int v4;

  v2 = *((uint32_t *)self + 13);
  if ( v2 == (*((uint32_t *)self + 14) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpRigidBodyInertiaViewer::Self *)((char *)self + 48),
      4,
      v4);
    v2 = *((uint32_t *)self + 13);
  }
  result = *((uint32_t *)self + 12);
  *(uint32_t *)(result + 4 * v2) = (uint32_t)(uintptr_t)(a2);
  ++*((uint32_t *)self + 13);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyInertiaViewer::postSimulationCallback  (binary VA: 0x1841c20)
// Original: hkpRigidBodyInertiaViewer::postSimulationCallback
// ----------------------------------------------------------------------------
int hkpRigidBodyInertiaViewer::postSimulationCallback(hkpRigidBodyInertiaViewer::Self *self)
{
  int *address;
  int v2;
  uint32_t *v3;
  uint64_t v4; // rax
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  void (***v15)(uint32_t);
  void (**v16)(uint32_t);
  hkDisplayBox::Self *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  float v25; // xmm4_4
  int v26;
  float v27; // xmm3_4
  float v28; // xmm3_4
  float v29; // xmm6_4
  int v30;
  float v31; // xmm3_4
  float v32; // xmm6_4
  int v33;
  float v34; // xmm2_4
  float v35; // xmm0_4
  int v36;
  int v37;
  uint32_t *v38;
  int v39;
  int v40;
  int v41;
  int v42;
  uint32_t *v43;
  uint64_t v44; // rax
  int v45;
  uint32_t *v46;
  uint64_t v47; // rax
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  void (***v54)(uint32_t);
  void (**v55)(uint32_t);
  hkDisplayBox::Self *v56;
  hkpRigidBodyInertiaViewer::Self *v57;
  char *v58;
  int v59;
  int v60;
  int v61;
  int v62;
  uint32_t *v63;
  uint64_t v64; // rax
  int v65;
  uint32_t *v66;
  uint64_t v67; // rax
  int result;
  typedef void (***_g4_t_v69)(uint32_t);
  typedef void (***_g4_t_v70)(uint32_t);
  typedef int *_g4_t_v71;
  typedef int *_g4_t_v72;
  typedef int *_g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef hkpRigidBodyInertiaViewer::Self *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef hkpRigidBodyInertiaViewer::Self *_g4_t_v80;
  typedef int _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef unsigned int _g4_t_v94[5];
  typedef float _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef float _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef float _g4_t_v114;
  typedef float _g4_t_v115;
  typedef float _g4_t_v116;
  typedef float _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef hkpRigidBodyInertiaViewer::Self **_g4_t_v120;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (8u + sizeof(_g4_t_v69)) > _g4_s0 ? (8u + sizeof(_g4_t_v69)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v70)) > _g4_s1 ? (8u + sizeof(_g4_t_v70)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v71)) > _g4_s2 ? (32u + sizeof(_g4_t_v71)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v72)) > _g4_s3 ? (40u + sizeof(_g4_t_v72)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v73)) > _g4_s4 ? (40u + sizeof(_g4_t_v73)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v74)) > _g4_s5 ? (44u + sizeof(_g4_t_v74)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v75)) > _g4_s6 ? (48u + sizeof(_g4_t_v75)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v76)) > _g4_s7 ? (56u + sizeof(_g4_t_v76)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v77)) > _g4_s8 ? (60u + sizeof(_g4_t_v77)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v78)) > _g4_s9 ? (60u + sizeof(_g4_t_v78)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v79)) > _g4_s10 ? (64u + sizeof(_g4_t_v79)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v80)) > _g4_s11 ? (64u + sizeof(_g4_t_v80)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v81)) > _g4_s12 ? (68u + sizeof(_g4_t_v81)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v82)) > _g4_s13 ? (72u + sizeof(_g4_t_v82)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v83)) > _g4_s14 ? (76u + sizeof(_g4_t_v83)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v84)) > _g4_s15 ? (80u + sizeof(_g4_t_v84)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v85)) > _g4_s16 ? (84u + sizeof(_g4_t_v85)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v86)) > _g4_s17 ? (88u + sizeof(_g4_t_v86)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v87)) > _g4_s18 ? (92u + sizeof(_g4_t_v87)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v88)) > _g4_s19 ? (96u + sizeof(_g4_t_v88)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v89)) > _g4_s20 ? (100u + sizeof(_g4_t_v89)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v90)) > _g4_s21 ? (104u + sizeof(_g4_t_v90)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v91)) > _g4_s22 ? (108u + sizeof(_g4_t_v91)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v92)) > _g4_s23 ? (112u + sizeof(_g4_t_v92)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v93)) > _g4_s24 ? (116u + sizeof(_g4_t_v93)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v94)) > _g4_s25 ? (120u + sizeof(_g4_t_v94)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v95)) > _g4_s26 ? (140u + sizeof(_g4_t_v95)) : _g4_s26,
    _g4_s28 = (144u + sizeof(_g4_t_v96)) > _g4_s27 ? (144u + sizeof(_g4_t_v96)) : _g4_s27,
    _g4_s29 = (148u + sizeof(_g4_t_v97)) > _g4_s28 ? (148u + sizeof(_g4_t_v97)) : _g4_s28,
    _g4_s30 = (152u + sizeof(_g4_t_v98)) > _g4_s29 ? (152u + sizeof(_g4_t_v98)) : _g4_s29,
    _g4_s31 = (156u + sizeof(_g4_t_v99)) > _g4_s30 ? (156u + sizeof(_g4_t_v99)) : _g4_s30,
    _g4_s32 = (160u + sizeof(_g4_t_v100)) > _g4_s31 ? (160u + sizeof(_g4_t_v100)) : _g4_s31,
    _g4_s33 = (164u + sizeof(_g4_t_v101)) > _g4_s32 ? (164u + sizeof(_g4_t_v101)) : _g4_s32,
    _g4_s34 = (168u + sizeof(_g4_t_v102)) > _g4_s33 ? (168u + sizeof(_g4_t_v102)) : _g4_s33,
    _g4_s35 = (172u + sizeof(_g4_t_v103)) > _g4_s34 ? (172u + sizeof(_g4_t_v103)) : _g4_s34,
    _g4_s36 = (176u + sizeof(_g4_t_v104)) > _g4_s35 ? (176u + sizeof(_g4_t_v104)) : _g4_s35,
    _g4_s37 = (180u + sizeof(_g4_t_v105)) > _g4_s36 ? (180u + sizeof(_g4_t_v105)) : _g4_s36,
    _g4_s38 = (184u + sizeof(_g4_t_v106)) > _g4_s37 ? (184u + sizeof(_g4_t_v106)) : _g4_s37,
    _g4_s39 = (188u + sizeof(_g4_t_v107)) > _g4_s38 ? (188u + sizeof(_g4_t_v107)) : _g4_s38,
    _g4_s40 = (192u + sizeof(_g4_t_v108)) > _g4_s39 ? (192u + sizeof(_g4_t_v108)) : _g4_s39,
    _g4_s41 = (196u + sizeof(_g4_t_v109)) > _g4_s40 ? (196u + sizeof(_g4_t_v109)) : _g4_s40,
    _g4_s42 = (200u + sizeof(_g4_t_v110)) > _g4_s41 ? (200u + sizeof(_g4_t_v110)) : _g4_s41,
    _g4_s43 = (204u + sizeof(_g4_t_v111)) > _g4_s42 ? (204u + sizeof(_g4_t_v111)) : _g4_s42,
    _g4_s44 = (208u + sizeof(_g4_t_v112)) > _g4_s43 ? (208u + sizeof(_g4_t_v112)) : _g4_s43,
    _g4_s45 = (212u + sizeof(_g4_t_v113)) > _g4_s44 ? (212u + sizeof(_g4_t_v113)) : _g4_s44,
    _g4_s46 = (216u + sizeof(_g4_t_v114)) > _g4_s45 ? (216u + sizeof(_g4_t_v114)) : _g4_s45,
    _g4_s47 = (220u + sizeof(_g4_t_v115)) > _g4_s46 ? (220u + sizeof(_g4_t_v115)) : _g4_s46,
    _g4_s48 = (224u + sizeof(_g4_t_v116)) > _g4_s47 ? (224u + sizeof(_g4_t_v116)) : _g4_s47,
    _g4_s49 = (228u + sizeof(_g4_t_v117)) > _g4_s48 ? (228u + sizeof(_g4_t_v117)) : _g4_s48,
    _g4_s50 = (232u + sizeof(_g4_t_v118)) > _g4_s49 ? (232u + sizeof(_g4_t_v118)) : _g4_s49,
    _g4_s51 = (236u + sizeof(_g4_t_v119)) > _g4_s50 ? (236u + sizeof(_g4_t_v119)) : _g4_s50,
    _g4_s52 = (240u + sizeof(_g4_t_v120)) > _g4_s51 ? (240u + sizeof(_g4_t_v120)) : _g4_s51
  };
  alignas(16) uint8_t _g4_sf[_g4_s52];
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 8u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 8u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 32u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 40u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 40u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 44u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 48u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 56u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 60u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 60u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 64u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 64u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 68u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 72u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 76u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 80u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 84u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 88u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 92u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 96u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 100u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 104u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 108u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 112u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 116u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 120u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 140u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 144u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 148u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 152u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 156u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 160u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 164u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 168u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 172u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 176u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 180u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 184u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 188u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 192u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 196u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 200u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 204u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 208u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 212u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 216u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 220u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 224u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 228u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 232u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 236u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 240u);

  v120 = &self;
  v76 = self;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v2 = *address;
  v72 = address;
  v3 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v3) < *(uint32_t *)(*address + 12) )
  {
    *v3 = (uint32_t)(uintptr_t)("TthkpRigidBodyInertiaViewer");
    v4 = __rdtsc();
    v3[1] = v4;
    *(uint32_t *)(v2 + 4) = (uint32_t)(uintptr_t)(v3 + 3);
    v5 = *v72;
    v6 = *(uint32_t **)(*v72 + 4);
    if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*v72 + 12) )
    {
      *v6 = (uint32_t)(uintptr_t)("TtgetProps");
      v7 = __rdtsc();
      v6[1] = v7;
      *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
    }
  }
  v8 = *((uint32_t *)v76 + 13);
  v71 = (int *)((char *)v76 + 60);
  v9 = *((uint32_t *)v76 + 17) & 0x3FFFFFFF;
  v77 = v8;
  if ( v8 > v9 )
  {
    v10 = 2 * v9;
    if ( v10 < v8 )
      v10 = *((uint32_t *)v76 + 13);
    hkArrayUtil::reserve((hkArrayUtil::Self *)&v81, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v71, v10, 112);
  }
  v11 = v77;
  v12 = *((uint32_t *)v76 + 16);
  v13 = *((uint32_t *)v76 + 15);
  v14 = v12 - v77 - 1;
  if ( v14 >= 0 )
  {
    v15 = (void (***)(uint32_t))(v13 + 112 * v77 + 112 * v14);
    do
    {
      v16 = *v15;
      --v14;
      v69 = v15;
      v15 -= 28;
      (*v16)((uint32_t)(uintptr_t)(v69));
    }
    while ( v14 != -1 );
    v11 = v77;
    v12 = *((uint32_t *)v76 + 16);
    v13 = *((uint32_t *)v76 + 15);
  }
  v79 = v11 - v12;
  v17 = (hkDisplayBox::Self *)(112 * v12 + v13);
  v18 = 0;
  if ( v79 > 0 )
  {
    do
    {
      ++v18;
      hkDisplayBox::Construct(v17);
      v17 = (hkDisplayBox::Self *)((char *)v17 + 112);
    }
    while ( v18 != v79 );
  }
  *((uint32_t *)v76 + 16) = v77;
  v19 = *((uint32_t *)v76 + 13);
  if ( v19 <= 0 )
  {
    v41 = 0;
    v78 = 0;
  }
  else
  {
    v20 = 0;
    v78 = 0;
    do
    {
      while ( 1 )
      {
        v21 = *(uint32_t *)(*((uint32_t *)v76 + 12) + 4 * v20);
g4_m128_lane<int32_t>(v22, 0) = *(uint32_t *)(v21 + 428);
        if ( *(float *)g4_m128_ptr<int32_t>(v22) != 0.0 )
          break;
        if ( ++v20 >= v19 )
          goto LABEL_25;
      }
      G4_VCALL<void>(v21 + 224, 36, v94);
g4_m128_raw(v23) = v94[0];
g4_m128_raw(v24) = v94[0];
g4_m128_raw(v22) =g4_m128_lane<uint32_t>(v22, 0);
      v75 = v100;
      *(float *)g4_m128_ptr<int32_t>(v24) = (float)((float)((float)(*(float *)v94 - v95) + v100) * *(float *)g4_m128_ptr<int32_t>(v22)) * 6.0;
      if ( *(float *)g4_m128_ptr<int32_t>(v24) <= 0.0 )
      {
        v74 = 0.0;
      }
      else
      {
        v25 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v24);
        v26 = ((_mm_cvtsi128_si32(v24) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v24) >> 1));
        v27 = (float)(*(float *)&v26 * 1.5)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v24)) * *(float *)&v26)
                    * (float)(*(float *)&v26 * *(float *)&v26));
        v74 = (float)((float)((float)(1.5
                                    * (float)((float)(v27 * 1.5) - (float)((float)(v25 * v27) * (float)(v27 * v27))))
                            - (float)((float)(v25
                                            * (float)((float)(v27 * 1.5)
                                                    - (float)((float)(v25 * v27) * (float)(v27 * v27))))
                                    * (float)((float)((float)(v27 * 1.5)
                                                    - (float)((float)(v25 * v27) * (float)(v27 * v27)))
                                            * (float)((float)(v27 * 1.5)
                                                    - (float)((float)(v25 * v27) * (float)(v27 * v27))))))
                    * *(float *)g4_m128_ptr<int32_t>(v24))
            * 0.505f;
      }
      v28 = 0.0;
      *(float *)g4_m128_ptr<int32_t>(v23) = (float)((float)(*(float *)v94 * *(float *)g4_m128_ptr<int32_t>(v22)) * 12.0)
                              - *(float *)g4_m128_ptr<int32_t>(v24);
      if ( *(float *)g4_m128_ptr<int32_t>(v23) > 0.0 )
      {
        v29 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v23);
        v30 = ((_mm_cvtsi128_si32(v23) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v23) >> 1));
        v31 = (float)(1.5 * *(float *)&v30)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23)) * *(float *)&v30)
                    * (float)(*(float *)&v30 * *(float *)&v30));
        v28 = (float)((float)((float)(1.5
                                    * (float)((float)(1.5 * v31) - (float)((float)(v29 * v31) * (float)(v31 * v31))))
                            - (float)((float)(v29
                                            * (float)((float)(1.5 * v31)
                                                    - (float)((float)(v29 * v31) * (float)(v31 * v31))))
                                    * (float)((float)((float)(1.5 * v31)
                                                    - (float)((float)(v29 * v31) * (float)(v31 * v31)))
                                            * (float)((float)(1.5 * v31)
                                                    - (float)((float)(v29 * v31) * (float)(v31 * v31))))))
                    * *(float *)g4_m128_ptr<int32_t>(v23))
            * 0.505f;
      }
      v32 = 0.0;
      *(float *)g4_m128_ptr<int32_t>(v22) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v22) * v100) * 12.0) - *(float *)g4_m128_ptr<int32_t>(v24);
      if ( *(float *)g4_m128_ptr<int32_t>(v22) > 0.0 )
      {
        v33 = ((_mm_cvtsi128_si32(v22) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v22) >> 1));
        v34 = (float)(*(float *)&v33 * 1.5)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v22)) * *(float *)&v33)
                    * (float)(*(float *)&v33 * *(float *)&v33));
        v35 = (float)(v34 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v22)) * v34) * (float)(v34 * v34));
        v32 = (float)((float)((float)(1.5 * v35)
                            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v22)) * v35) * (float)(v35 * v35)))
                    * *(float *)g4_m128_ptr<int32_t>(v22))
            * 0.505f;
      }
      v36 = *((uint32_t *)v76 + 12) + 4 * v20++;
      v82 = v32;
      v83 = v74;
      v84 = v28;
      v85 = 0.0 * 0.505f;
      v37 = *(uint32_t *)v36;
      v102 = *(uint32_t *)(*(uint32_t *)v36 + 240);
      v103 = *(uint32_t *)(v37 + 244);
      v104 = *(uint32_t *)(v37 + 248);
      v105 = *(uint32_t *)(v37 + 252);
      v106 = *(uint32_t *)(v37 + 256);
      v107 = *(uint32_t *)(v37 + 260);
      v108 = *(uint32_t *)(v37 + 264);
      v109 = *(uint32_t *)(v37 + 268);
      v110 = *(uint32_t *)(v37 + 272);
      v111 = *(uint32_t *)(v37 + 276);
      v112 = *(uint32_t *)(v37 + 280);
      v113 = *(uint32_t *)(v37 + 284);
      v114 = *(float *)(v37 + 288);
      v115 = *(float *)(v37 + 292);
      v116 = *(float *)(v37 + 296);
      v117 = *(float *)(v37 + 300);
      v38 = *(uint32_t **)v36;
      v86 = *(uint32_t *)(*(uint32_t *)v36 + 368);
      v87 = v38[93];
      v39 = v38[94];
      v40 = v38[95];
      v88 = v39;
      v89 = v40;
      hkVector4f::setRotatedDir((hkVector4f::Self *)&v90, (const hkMatrix3f::Self *)&v102, (const hkVector4f::Self *)&v86);
      v90 = v90 + v114;
      v114 = v90;
      v91 = v91 + v115;
      v115 = v91;
      v92 = v92 + v116;
      v116 = v92;
      v93 = v93 + v117;
      v117 = v93;
      hkDisplayBox::setParameters(
        (hkDisplayBox::Self *)(*((uint32_t *)v76 + 15) + 112 * v78),
        (const hkVector4f::Self *)&v82,
        (const hkTransformf::Self *)&v102);
      v19 = *((uint32_t *)v76 + 13);
      ++v78;
    }
    while ( v20 < v19 );
LABEL_25:
    v41 = 112 * v78;
  }
  v42 = *v72;
  v43 = *(uint32_t **)(*v72 + 4);
  if ( (unsigned int)(uintptr_t)(v43) < *(uint32_t *)(*v72 + 12) )
  {
    *v43 = (uint32_t)(uintptr_t)("Et");
    v44 = __rdtsc();
    v43[1] = v44;
    *(uint32_t *)(v42 + 4) = (uint32_t)(uintptr_t)(v43 + 3);
    v45 = *v72;
    v46 = *(uint32_t **)(*v72 + 4);
    if ( (unsigned int)(uintptr_t)(v46) < *(uint32_t *)(*v72 + 12) )
    {
      *v46 = (uint32_t)(uintptr_t)("TtsendProps");
      v47 = __rdtsc();
      v46[1] = v47;
      *(uint32_t *)(v45 + 4) = (uint32_t)(uintptr_t)(v46 + 3);
    }
  }
  v48 = *((uint32_t *)v76 + 17) & 0x3FFFFFFF;
  if ( v78 > v48 )
  {
    v49 = 2 * v48;
    if ( v78 >= v49 )
      v49 = v78;
    hkArrayUtil::reserve((hkArrayUtil::Self *)&v81, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v71, v49, 112);
  }
  v50 = *((uint32_t *)v76 + 16);
  v51 = *((uint32_t *)v76 + 15);
  v52 = v51 + v41;
  v53 = v50 - v78 - 1;
  if ( v53 >= 0 )
  {
    v54 = (void (***)(uint32_t))(v52 + 112 * v53);
    do
    {
      v55 = *v54;
      --v53;
      v70 = v54;
      v54 -= 28;
      (*v55)((uint32_t)(uintptr_t)(v70));
    }
    while ( v53 != -1 );
    v50 = *((uint32_t *)v76 + 16);
    v51 = *((uint32_t *)v76 + 15);
  }
  v80 = (hkpRigidBodyInertiaViewer::Self *)(v78 - v50);
  v56 = (hkDisplayBox::Self *)(112 * v50 + v51);
  v57 = nullptr;
  if ( v78 - v50 > 0 )
  {
    do
    {
      v57 = (hkpRigidBodyInertiaViewer::Self *)((char *)v57 + 1);
      hkDisplayBox::Construct(v56);
      v56 = (hkDisplayBox::Self *)((char *)v56 + 112);
    }
    while ( v57 != v80 );
  }
  v102 = 0;
  v103 = 0;
  v104 = 0x80000000;
  *((uint32_t *)v76 + 16) = v78;
  if ( v78 != 0 )
  {
    hkArrayUtil::reserve((hkArrayUtil::Self *)&v81, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v102, v78, 4);
    v103 = v78;
    v80 = *((hkpRigidBodyInertiaViewer::Self **)v76 + 16);
    v58 = (char *)v80 - 1;
    if ( (int)(uintptr_t)(v80) - 1 >= 0 )
    {
      v59 = 112 * (uint32_t)(uintptr_t)(v58);
      v60 = 4 * (uint32_t)(uintptr_t)(v58);
      v80 = v76;
      do
      {
        v61 = v59;
        --v58;
        v59 -= 112;
        *(uint32_t *)(v102 + v60) = *((uint32_t *)v76 + 15) + v61;
        v60 -= 4;
      }
      while ( v58 != (char *)-1 );
    }
  }
  else
  {
    v103 = 0;
  }
  (*(void (**)(int *, uint32_t, int *, int, uint32_t, uint32_t, int *, int *, int *, float, float, int *, hkpRigidBodyInertiaViewer::Self *, int, hkpRigidBodyInertiaViewer::Self *, int, float, float, float, float, int, int, int, int, float, float, float, float, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, float, int, int, int, int, float, int, int, int, int, int, int, int, int, int, int, int, int, int, float, float, float, float, int, int, hkpRigidBodyInertiaViewer::Self **))(**((uint32_t **)v76 + 6) + 116))(
    &v81,
    *((uint32_t *)v76 + 6),
    &v102,
    dword_21376A0,
    0,
    hkpRigidBodyInertiaViewer::m_tag,
    v71,
    &v81,
    v72,
    COERCE_FLOAT(LODWORD(v74)),
    COERCE_FLOAT(LODWORD(v75)),
    &v102,
    v76,
    v78,
    v80,
    v81,
    COERCE_FLOAT(LODWORD(v82)),
    COERCE_FLOAT(LODWORD(v83)),
    COERCE_FLOAT(LODWORD(v84)),
    COERCE_FLOAT(LODWORD(v85)),
    v86,
    v87,
    v88,
    v89,
    COERCE_FLOAT(LODWORD(v90)),
    COERCE_FLOAT(LODWORD(v91)),
    COERCE_FLOAT(LODWORD(v92)),
    COERCE_FLOAT(LODWORD(v93)),
    v94[0],
    v94[1],
    v94[2],
    v94[3],
    v94[4],
    COERCE_FLOAT(LODWORD(v95)),
    v96,
    v97,
    v98,
    v99,
    COERCE_FLOAT(LODWORD(v100)),
    v101,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113,
    COERCE_FLOAT(LODWORD(v114)),
    COERCE_FLOAT(LODWORD(v115)),
    COERCE_FLOAT(LODWORD(v116)),
    COERCE_FLOAT(LODWORD(v117)),
    v118,
    v119,
    v120);
  v62 = *v73;
  v63 = *(uint32_t **)(*v73 + 4);
  if ( (unsigned int)(uintptr_t)(v63) < *(uint32_t *)(*v73 + 12) )
  {
    *v63 = (uint32_t)(uintptr_t)("Et");
    v64 = __rdtsc();
    v63[1] = v64;
    *(uint32_t *)(v62 + 4) = (uint32_t)(uintptr_t)(v63 + 3);
    v65 = *v73;
    v66 = *(uint32_t **)(*v73 + 4);
    if ( (unsigned int)(uintptr_t)(v66) < *(uint32_t *)(*v73 + 12) )
    {
      *v66 = (uint32_t)(uintptr_t)("Et");
      v67 = __rdtsc();
      v66[1] = v67;
      *(uint32_t *)(v65 + 4) = (uint32_t)(uintptr_t)(v66 + 3);
    }
  }
  result = v104;
  v103 = 0;
  if ( v104 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v102,
             4 * v104);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyInertiaViewer::registerViewer  (binary VA: 0x1842510)
// Original: hkpRigidBodyInertiaViewer::registerViewer
// ----------------------------------------------------------------------------
int hkpRigidBodyInertiaViewer::registerViewer()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "Inertia Tensors",
             hkpRigidBodyInertiaViewer::create);
  hkpRigidBodyInertiaViewer::m_tag = result;
  return result;
}



// ============================================================================
// Address:   0x1842560 (size: 128 bytes)
// Symbol:    _ZN25hkpRigidBodyInertiaViewerC2ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE
// Demangled: hkpRigidBodyInertiaViewer::hkpRigidBodyInertiaViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// ============================================================================
// Alternative name is '_ZN25hkpRigidBodyInertiaViewerC1ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE'
void (**hkpRigidBodyInertiaViewer::hkpRigidBodyInertiaViewer(
        uint32_t *a1,
        int a2))(hkpRigidBodyInertiaViewer::Self * self)
{
  hkpWorldViewerBase::Construct(a1, a2);
  a1[12] = 0;
  a1[13] = 0;
  *a1 = ((uint32_t)(uintptr_t)&off_20A3748);
  a1[14] = 0x80000000;
  a1[2] = ((uint32_t)(uintptr_t)&off_20A378C);
  a1[8] = ((uint32_t)(uintptr_t)&off_20A37B8);
  a1[10] = ((uint32_t)(uintptr_t)&off_20A37D0);
  a1[11] = ((uint32_t)(uintptr_t)&off_20A37F4);
  a1[15] = 0;
  a1[16] = 0;
  a1[17] = 0x80000000;
  return (void (**)(hkpRigidBodyInertiaViewer::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A37F4));
}
// ----------------------------------------------------------------------------
// Function: hkpRigidBodyInertiaViewer::create  (binary VA: 0x18425e0)
// Original: hkpRigidBodyInertiaViewer::create
// ----------------------------------------------------------------------------
uint32_t * hkpRigidBodyInertiaViewer::create(int a1)
{
  int address;
  uint32_t *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   72);
  hkpRigidBodyInertiaViewer::hkpRigidBodyInertiaViewer(v2, a1);
  if ( v2 != nullptr )
    return v2 + 2;
  else
    return nullptr;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyInertiaViewer::removeWorld  (binary VA: 0x1842640)
// Original: hkpRigidBodyInertiaViewer::removeWorld
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpRigidBodyInertiaViewer::removeWorld(hkpRigidBodyInertiaViewer::Self *self, hkpWorld::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  hkpWorld::Self *result;
  int v9;
  int v10;
  hkpWorldPostSimulationListener::Self *v11;
  hkpWorldPostSimulationListener::Self *v12;
  hkpWorldPostSimulationListener::Self *v13;
  int v14;
  int v15;

  hkpWorld::removeEntityListener(a2, (int)(uintptr_t)(self) + 40);
  hkpWorld::removeWorldPostSimulationListener(a2, (hkpRigidBodyInertiaViewer::Self *)((char *)self + 44));
  v14 = 0;
  v2 = *((uint32_t *)a2 + 11);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)a2 + 10) + 4 * v14);
      if ( *(int *)(v3 + 80) > 0 )
      {
        v4 = 0;
        do
        {
          v11 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v3 + 76) + 4 * v4++);
          G4_VCALL<void>(self, 52, v11);
        }
        while ( *(uint32_t *)(v3 + 80) > v4 );
        v2 = *((uint32_t *)a2 + 11);
      }
      ++v14;
    }
    while ( v14 < v2 );
  }
  v15 = 0;
  v5 = *((uint32_t *)a2 + 14);
  if ( v5 > 0 )
  {
    do
    {
      v6 = *(uint32_t *)(*((uint32_t *)a2 + 13) + 4 * v15);
      if ( *(int *)(v6 + 80) > 0 )
      {
        v7 = 0;
        do
        {
          v12 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v6 + 76) + 4 * v7++);
          G4_VCALL<void>(self, 52, v12);
        }
        while ( *(uint32_t *)(v6 + 80) > v7 );
        v5 = *((uint32_t *)a2 + 14);
      }
      ++v15;
    }
    while ( v15 < v5 );
  }
  result = a2;
  v9 = *((uint32_t *)a2 + 8);
  if ( v9 != 0 && *(int *)(v9 + 80) > 0 )
  {
    v10 = 0;
    do
    {
      v13 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v9 + 76) + 4 * v10++);
      result = (hkpWorld::Self *)G4_VCALL<int>(self, 52, v13);
    }
    while ( *(uint32_t *)(v9 + 80) > v10 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyInertiaViewer::worldRemovedCallback  (binary VA: 0x1842790)
// Original: hkpRigidBodyInertiaViewer::worldRemovedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpRigidBodyInertiaViewer::worldRemovedCallback(hkpRigidBodyInertiaViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpRigidBodyInertiaViewer::removeWorld(self, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyInertiaViewer::Destroy  (binary VA: 0x18427d0)
// Original: hkpRigidBodyInertiaViewer::~hkpRigidBodyInertiaViewer
// ----------------------------------------------------------------------------
void hkpRigidBodyInertiaViewer::Destroy(hkpRigidBodyInertiaViewer::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  hkpRigidBodyInertiaViewer::Self *v5;
  void (**v6)(hkpRigidBodyInertiaViewer::Self *);
  int v7;
  int v8;
  hkpRigidBodyInertiaViewer::Self *v9;
  hkpWorld::Self *v10;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3748);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A378C);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A37B8);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A37D0);
  *((uint32_t *)self + 11) = ((uint32_t)(uintptr_t)&off_20A37F4);
  v1 = *((uint32_t *)self + 9);
  if ( v1 != 0 )
  {
    v2 = *(uint32_t *)(v1 + 112);
    if ( v2 > 0 )
    {
      v3 = 0;
      while ( 1 )
      {
        v10 = *(hkpWorld::Self **)(*(uint32_t *)(v1 + 108) + 4 * v3++);
        hkpRigidBodyInertiaViewer::removeWorld(self, v10);
        if ( v3 == v2 )
          break;
        v1 = *((uint32_t *)self + 9);
      }
    }
  }
  v4 = *((uint32_t *)self + 16) - 1;
  if ( v4 >= 0 )
  {
    v5 = (hkpRigidBodyInertiaViewer::Self *)(112 * v4 + *((uint32_t *)self + 15));
    do
    {
      v6 = *(void (***)(hkpRigidBodyInertiaViewer::Self *))v5;
      --v4;
      v9 = v5;
      v5 = (hkpRigidBodyInertiaViewer::Self *)((char *)v5 - 112);
      (*v6)(v9);
    }
    while ( v4 != -1 );
  }
  v7 = *((uint32_t *)self + 17);
  *((uint32_t *)self + 16) = 0;
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 15),
      112 * (v7 & 0x3FFFFFFF));
  v8 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 17) = 0x80000000;
  *((uint32_t *)self + 13) = 0;
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 12),
      4 * v8);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  *((uint32_t *)self + 11) = ((uint32_t)(uintptr_t)&off_209E868);
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(&off_2054DE8);
  hkpWorldViewerBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyInertiaViewer::Destroy_ea1842950  (binary VA: 0x1842950)
// Original: hkpRigidBodyInertiaViewer::~hkpRigidBodyInertiaViewer
// ----------------------------------------------------------------------------
void hkpRigidBodyInertiaViewer::Destroy_ea1842950(hkpRigidBodyInertiaViewer::Self *self)
{
  int v1;
  int v2;

  hkpRigidBodyInertiaViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 72;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyInertiaViewer::addWorld  (binary VA: 0x18429f0)
// Original: hkpRigidBodyInertiaViewer::addWorld
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpRigidBodyInertiaViewer::addWorld(hkpRigidBodyInertiaViewer::Self *self, hkpWorld::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  hkpWorld::Self *result;
  int v9;
  int v10;
  hkpWorldPostSimulationListener::Self *v11;
  hkpWorldPostSimulationListener::Self *v12;
  hkpWorldPostSimulationListener::Self *v13;
  int v14;
  int v15;

  hkpWorld::addEntityListener(a2, (int)(uintptr_t)(self) + 40);
  hkpWorld::addWorldPostSimulationListener(a2, (hkpRigidBodyInertiaViewer::Self *)((char *)self + 44));
  v14 = 0;
  v2 = *((uint32_t *)a2 + 11);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)a2 + 10) + 4 * v14);
      if ( *(int *)(v3 + 80) > 0 )
      {
        v4 = 0;
        do
        {
          v11 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v3 + 76) + 4 * v4++);
          G4_VCALL<void>(self, 48, v11);
        }
        while ( *(uint32_t *)(v3 + 80) > v4 );
        v2 = *((uint32_t *)a2 + 11);
      }
      ++v14;
    }
    while ( v14 < v2 );
  }
  v15 = 0;
  v5 = *((uint32_t *)a2 + 14);
  if ( v5 > 0 )
  {
    do
    {
      v6 = *(uint32_t *)(*((uint32_t *)a2 + 13) + 4 * v15);
      if ( *(int *)(v6 + 80) > 0 )
      {
        v7 = 0;
        do
        {
          v12 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v6 + 76) + 4 * v7++);
          G4_VCALL<void>(self, 48, v12);
        }
        while ( *(uint32_t *)(v6 + 80) > v7 );
        v5 = *((uint32_t *)a2 + 14);
      }
      ++v15;
    }
    while ( v15 < v5 );
  }
  result = a2;
  v9 = *((uint32_t *)a2 + 8);
  if ( v9 != 0 )
  {
    result = *(hkpWorld::Self **)(v9 + 80);
    if ( (int)(uintptr_t)(result) > 0 )
    {
      v10 = 0;
      do
      {
        v13 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v9 + 76) + 4 * v10++);
        result = (hkpWorld::Self *)G4_VCALL<int>(self, 48, v13);
      }
      while ( *(uint32_t *)(v9 + 80) > v10 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyInertiaViewer::init  (binary VA: 0x1842b40)
// Original: hkpRigidBodyInertiaViewer::init
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpRigidBodyInertiaViewer::init(hkpRigidBodyInertiaViewer::Self *self)
{
  hkpWorld::Self *result;
  int v2;
  int v3;
  hkpWorld::Self *v4;

  result = *((hkpWorld::Self **)self + 9);
  if ( result != nullptr )
  {
    v2 = *((uint32_t *)result + 28);
    if ( v2 > 0 )
    {
      v3 = 0;
      while ( 1 )
      {
        v4 = *(hkpWorld::Self **)(*((uint32_t *)result + 27) + 4 * v3++);
        result = hkpRigidBodyInertiaViewer::addWorld(self, v4);
        if ( v3 == v2 )
          break;
        result = *((hkpWorld::Self **)self + 9);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyInertiaViewer::worldAddedCallback  (binary VA: 0x1842bb0)
// Original: hkpRigidBodyInertiaViewer::worldAddedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpRigidBodyInertiaViewer::worldAddedCallback(hkpRigidBodyInertiaViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpRigidBodyInertiaViewer::addWorld(self, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyCentreOfMassViewer::getProcessTag  (binary VA: 0x184d210)
// Original: hkpRigidBodyCentreOfMassViewer::getProcessTag
// ----------------------------------------------------------------------------
int hkpRigidBodyCentreOfMassViewer::getProcessTag()
{
  return hkpRigidBodyCentreOfMassViewer::m_tag;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyCentreOfMassViewer::entityRemovedCallback  (binary VA: 0x184d240)
// Original: hkpRigidBodyCentreOfMassViewer::entityRemovedCallback
// ----------------------------------------------------------------------------
void hkpRigidBodyCentreOfMassViewer::entityRemovedCallback(hkpRigidBodyCentreOfMassViewer::Self *self, hkpEntity::Self *a2)
{
  int v2;
  hkpEntity::Self **v3;
  int v4;
  int v5;
  int v6;

  v2 = *((uint32_t *)self + 13);
  if ( v2 > 0 )
  {
    v3 = *((hkpEntity::Self ***)self + 12);
    if ( a2 == *v3 )
    {
      v5 = 0;
      v4 = 0;
LABEL_8:
      v6 = v2 - 1;
      *((uint32_t *)self + 13) = v6;
      if ( v4 != v6 )
        v3[v5] = v3[v6];
    }
    else
    {
      v4 = 0;
      while ( ++v4 != v2 )
      {
        v5 = v4;
        if ( a2 == v3[v4] )
          goto LABEL_8;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyCentreOfMassViewer::entityAddedCallback  (binary VA: 0x184d2b0)
// Original: hkpRigidBodyCentreOfMassViewer::entityAddedCallback
// ----------------------------------------------------------------------------
int hkpRigidBodyCentreOfMassViewer::entityAddedCallback(hkpRigidBodyCentreOfMassViewer::Self *self, hkpEntity::Self *a2)
{
  int v2;
  int result;
  int v4;

  v2 = *((uint32_t *)self + 13);
  if ( v2 == (*((uint32_t *)self + 14) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpRigidBodyCentreOfMassViewer::Self *)((char *)self + 48),
      4,
      v4);
    v2 = *((uint32_t *)self + 13);
  }
  result = *((uint32_t *)self + 12);
  *(uint32_t *)(result + 4 * v2) = (uint32_t)(uintptr_t)(a2);
  ++*((uint32_t *)self + 13);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyCentreOfMassViewer::postSimulationCallback  (binary VA: 0x184d330)
// Original: hkpRigidBodyCentreOfMassViewer::postSimulationCallback
// ----------------------------------------------------------------------------
int hkpRigidBodyCentreOfMassViewer::postSimulationCallback(hkpRigidBodyCentreOfMassViewer::Self *self)
{
  int *address;
  int v2;
  uint32_t *v3;
  uint64_t v4; // rax
  int v5;
  uint64_t v6; // rax
  int v7;
  float *v8;
  uint64_t v9; // rax
  float v10;
  float v11;
  float *v12;
  float v13; // xmm2_4
  float *v14;
  float *v15;
  float v16; // xmm0_4
  uint32_t *v17;
  uint64_t v18; // rax
  int v19;
  uint32_t *v20;
  uint64_t v21; // rax
  int v22;
  uint32_t *v23;
  uint64_t v24; // rax
  typedef unsigned int _g4_t_v26;
  typedef int *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef hkpRigidBodyCentreOfMassViewer::Self *_g4_t_v30;
  typedef char _g4_t_v31[4];
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef hkpRigidBodyCentreOfMassViewer::Self **_g4_t_v48;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v27)) > _g4_s1 ? (4u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v28)) > _g4_s2 ? (12u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v29)) > _g4_s3 ? (16u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v30)) > _g4_s4 ? (20u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v31)) > _g4_s5 ? (24u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v32)) > _g4_s6 ? (28u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v33)) > _g4_s7 ? (32u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v34)) > _g4_s8 ? (36u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v35)) > _g4_s9 ? (40u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v36)) > _g4_s10 ? (44u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v37)) > _g4_s11 ? (48u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v38)) > _g4_s12 ? (52u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v39)) > _g4_s13 ? (56u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v40)) > _g4_s14 ? (60u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v41)) > _g4_s15 ? (64u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v42)) > _g4_s16 ? (68u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v43)) > _g4_s17 ? (72u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v44)) > _g4_s18 ? (76u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v45)) > _g4_s19 ? (80u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v46)) > _g4_s20 ? (84u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v47)) > _g4_s21 ? (88u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v48)) > _g4_s22 ? (100u + sizeof(_g4_t_v48)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 68u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 72u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 76u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 80u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 84u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 88u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 100u);

  v48 = &self;
  v30 = self;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v2 = *address;
  v27 = address;
  v3 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v3) >= *(uint32_t *)(*address + 12) )
  {
    v26 = *(uint32_t *)(v2 + 12);
    v5 = *address;
  }
  else
  {
    *v3 = (uint32_t)(uintptr_t)("TthkpRigidBodyCentreOfMassViewer");
    v4 = __rdtsc();
    v3[1] = v4;
    *(uint32_t *)(v2 + 4) = (uint32_t)(uintptr_t)(v3 + 3);
    v5 = *v27;
    v3 = *(uint32_t **)(*v27 + 4);
    v26 = *(uint32_t *)(*v27 + 12);
  }
  LODWORD(v6) = *((uint32_t *)v30 + 13);
  if ( (int)v6 > 0 )
  {
    v29 = 0;
    v28 = *((uint32_t *)v30 + 13);
    do
    {
      v7 = *((uint32_t *)v30 + 12) + 4 * v29;
      v8 = *(float **)v7;
      if ( *(float *)(*(uint32_t *)v7 + 428) != 0.0 )
      {
        if ( (unsigned int)(uintptr_t)(v3) < v26 )
        {
          *v3 = (uint32_t)(uintptr_t)("TtgetMassAndLines");
          v9 = __rdtsc();
          v3[1] = v9;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v3 + 3);
          v7 = *((uint32_t *)v30 + 12) + 4 * v29;
          v5 = *v27;
          v8 = *(float **)v7;
        }
        v32 = v8[80];
        v33 = v8[81];
        v10 = v8[82];
        v11 = v8[83];
        v34 = v10;
        v35 = v11;
        v12 = *(float **)v7;
        v13 = *(float *)(*(uint32_t *)v7 + 252) * hkpRigidBodyCentreOfMassViewer::m_scale;
        v36 = (float)(*(float *)(*(uint32_t *)v7 + 240) * hkpRigidBodyCentreOfMassViewer::m_scale) + v32;
        v37 = (float)(v12[61] * hkpRigidBodyCentreOfMassViewer::m_scale) + v33;
        v38 = (float)(v12[62] * hkpRigidBodyCentreOfMassViewer::m_scale) + v10;
        v39 = v13 + v35;
        v14 = *(float **)v7;
        v40 = (float)(*(float *)(*(uint32_t *)v7 + 256) * hkpRigidBodyCentreOfMassViewer::m_scale) + v32;
        v41 = (float)(v14[65] * hkpRigidBodyCentreOfMassViewer::m_scale) + v33;
        v42 = (float)(v14[66] * hkpRigidBodyCentreOfMassViewer::m_scale) + v10;
        v43 = (float)(v14[67] * hkpRigidBodyCentreOfMassViewer::m_scale) + v35;
        v15 = *(float **)v7;
        v44 = (float)(*(float *)(*(uint32_t *)v7 + 272) * hkpRigidBodyCentreOfMassViewer::m_scale) + v32;
        v45 = (float)(v15[69] * hkpRigidBodyCentreOfMassViewer::m_scale) + v33;
        v16 = (float)(hkpRigidBodyCentreOfMassViewer::m_scale * v15[71]) + v35;
        v46 = (float)(v15[70] * hkpRigidBodyCentreOfMassViewer::m_scale) + v10;
        v47 = v16;
        v17 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v17) < *(uint32_t *)(v5 + 12) )
        {
          *v17 = (uint32_t)(uintptr_t)("Et");
          v18 = __rdtsc();
          v17[1] = v18;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v17 + 3);
          v19 = *v27;
          v20 = *(uint32_t **)(*v27 + 4);
          if ( (unsigned int)(uintptr_t)(v20) < *(uint32_t *)(*v27 + 12) )
          {
            *v20 = (uint32_t)(uintptr_t)("Ttdisplay3lines");
            v21 = __rdtsc();
            v20[1] = v21;
            *(uint32_t *)(v19 + 4) = (uint32_t)(uintptr_t)(v20 + 3);
          }
        }
        (*(void (**)(char *))(**((uint32_t **)v30 + 6) + 72))(v31);
        (*(void (**)(char *))(**((uint32_t **)v30 + 6) + 72))(v31);
        (*(void (**)(char *))(**((uint32_t **)v30 + 6) + 72))(v31);
        v22 = *v27;
        v5 = *v27;
        v23 = *(uint32_t **)(*v27 + 4);
        if ( (unsigned int)(uintptr_t)(v23) < *(uint32_t *)(*v27 + 12) )
        {
          *v23 = (uint32_t)(uintptr_t)("Et");
          v24 = __rdtsc();
          v23[1] = v24;
          *(uint32_t *)(v22 + 4) = (uint32_t)(uintptr_t)(v23 + 3);
          v5 = *v27;
        }
        v3 = *(uint32_t **)(v5 + 4);
        v28 = *((uint32_t *)v30 + 13);
        v26 = *(uint32_t *)(v5 + 12);
      }
      ++v29;
      LODWORD(v6) = v28;
    }
    while ( v29 < v28 );
  }
  if ( (unsigned int)(uintptr_t)(v3) < v26 )
  {
    *v3 = (uint32_t)(uintptr_t)("Et");
    v6 = __rdtsc();
    v3[1] = v6;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v3 + 3);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyCentreOfMassViewer::registerViewer  (binary VA: 0x184d6f0)
// Original: hkpRigidBodyCentreOfMassViewer::registerViewer
// ----------------------------------------------------------------------------
int hkpRigidBodyCentreOfMassViewer::registerViewer()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "Center of Mass",
             hkpRigidBodyCentreOfMassViewer::create);
  hkpRigidBodyCentreOfMassViewer::m_tag = result;
  return result;
}



// ============================================================================
// Address:   0x184d740 (size: 107 bytes)
// Symbol:    _ZN30hkpRigidBodyCentreOfMassViewerC2ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE
// Demangled: hkpRigidBodyCentreOfMassViewer::hkpRigidBodyCentreOfMassViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// ============================================================================
// Alternative name is '_ZN30hkpRigidBodyCentreOfMassViewerC1ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE'
void (**hkpRigidBodyCentreOfMassViewer::hkpRigidBodyCentreOfMassViewer(
        uint32_t *a1,
        uint32_t *a2))(hkpRigidBodyCentreOfMassViewer::Self * self)
{
  hkpWorldViewerBase::Construct((int)(uintptr_t)(a1), a2);
  a1[12] = 0;
  a1[13] = 0;
  *a1 = ((uint32_t)(uintptr_t)&off_20A4088);
  a1[14] = 0x80000000;
  a1[2] = ((uint32_t)(uintptr_t)&off_20A40CC);
  a1[8] = ((uint32_t)(uintptr_t)&off_20A40F8);
  a1[10] = ((uint32_t)(uintptr_t)&off_20A4110);
  a1[11] = ((uint32_t)(uintptr_t)&off_20A4134);
  return (void (**)(hkpRigidBodyCentreOfMassViewer::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A4134));
}
// ----------------------------------------------------------------------------
// Function: hkpRigidBodyCentreOfMassViewer::create  (binary VA: 0x184d7b0)
// Original: hkpRigidBodyCentreOfMassViewer::create
// ----------------------------------------------------------------------------
uint32_t * hkpRigidBodyCentreOfMassViewer::create(uint32_t *a1)
{
  int address;
  uint32_t *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   60);
  hkpRigidBodyCentreOfMassViewer::hkpRigidBodyCentreOfMassViewer(v2, a1);
  if ( v2 != nullptr )
    return v2 + 2;
  else
    return nullptr;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyCentreOfMassViewer::removeWorld  (binary VA: 0x184d810)
// Original: hkpRigidBodyCentreOfMassViewer::removeWorld
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpRigidBodyCentreOfMassViewer::removeWorld(hkpRigidBodyCentreOfMassViewer::Self *self, hkpWorld::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  hkpWorld::Self *result;
  int v9;
  int v10;
  hkpWorldPostSimulationListener::Self *v11;
  hkpWorldPostSimulationListener::Self *v12;
  hkpWorldPostSimulationListener::Self *v13;
  int v14;
  int v15;

  hkpWorld::removeEntityListener(a2, (int)(uintptr_t)(self) + 40);
  hkpWorld::removeWorldPostSimulationListener(a2, (hkpRigidBodyCentreOfMassViewer::Self *)((char *)self + 44));
  v14 = 0;
  v2 = *((uint32_t *)a2 + 11);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)a2 + 10) + 4 * v14);
      if ( *(int *)(v3 + 80) > 0 )
      {
        v4 = 0;
        do
        {
          v11 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v3 + 76) + 4 * v4++);
          G4_VCALL<void>(self, 52, v11);
        }
        while ( *(uint32_t *)(v3 + 80) > v4 );
        v2 = *((uint32_t *)a2 + 11);
      }
      ++v14;
    }
    while ( v14 < v2 );
  }
  v15 = 0;
  v5 = *((uint32_t *)a2 + 14);
  if ( v5 > 0 )
  {
    do
    {
      v6 = *(uint32_t *)(*((uint32_t *)a2 + 13) + 4 * v15);
      if ( *(int *)(v6 + 80) > 0 )
      {
        v7 = 0;
        do
        {
          v12 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v6 + 76) + 4 * v7++);
          G4_VCALL<void>(self, 52, v12);
        }
        while ( *(uint32_t *)(v6 + 80) > v7 );
        v5 = *((uint32_t *)a2 + 14);
      }
      ++v15;
    }
    while ( v15 < v5 );
  }
  result = a2;
  v9 = *((uint32_t *)a2 + 8);
  if ( v9 != 0 && *(int *)(v9 + 80) > 0 )
  {
    v10 = 0;
    do
    {
      v13 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v9 + 76) + 4 * v10++);
      result = (hkpWorld::Self *)G4_VCALL<int>(self, 52, v13);
    }
    while ( *(uint32_t *)(v9 + 80) > v10 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyCentreOfMassViewer::worldRemovedCallback  (binary VA: 0x184d960)
// Original: hkpRigidBodyCentreOfMassViewer::worldRemovedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpRigidBodyCentreOfMassViewer::worldRemovedCallback(hkpRigidBodyCentreOfMassViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpRigidBodyCentreOfMassViewer::removeWorld(self, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyCentreOfMassViewer::Destroy  (binary VA: 0x184d9a0)
// Original: hkpRigidBodyCentreOfMassViewer::~hkpRigidBodyCentreOfMassViewer
// ----------------------------------------------------------------------------
void hkpRigidBodyCentreOfMassViewer::Destroy(hkpRigidBodyCentreOfMassViewer::Self *self)
{
  int v1;
  int v2;
  int v3;
  hkpWorld::Self *v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A4088);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A40CC);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A40F8);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A4110);
  *((uint32_t *)self + 11) = ((uint32_t)(uintptr_t)&off_20A4134);
  v1 = *((uint32_t *)self + 9);
  if ( v1 != 0 && *(int *)(v1 + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v4 = *(hkpWorld::Self **)(*(uint32_t *)(v1 + 108) + 4 * v2++);
      hkpRigidBodyCentreOfMassViewer::removeWorld(self, v4);
      v1 = *((uint32_t *)self + 9);
    }
    while ( v2 < *(uint32_t *)(v1 + 112) );
  }
  v3 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 13) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 12),
      4 * v3);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  *((uint32_t *)self + 11) = ((uint32_t)(uintptr_t)&off_209E868);
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(&off_2054DE8);
  hkpWorldViewerBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyCentreOfMassViewer::Destroy_ea184dab0  (binary VA: 0x184dab0)
// Original: hkpRigidBodyCentreOfMassViewer::~hkpRigidBodyCentreOfMassViewer
// ----------------------------------------------------------------------------
void hkpRigidBodyCentreOfMassViewer::Destroy_ea184dab0(hkpRigidBodyCentreOfMassViewer::Self *self)
{
  int v1;
  int v2;

  hkpRigidBodyCentreOfMassViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 60;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyCentreOfMassViewer::addWorld  (binary VA: 0x184db50)
// Original: hkpRigidBodyCentreOfMassViewer::addWorld
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpRigidBodyCentreOfMassViewer::addWorld(hkpRigidBodyCentreOfMassViewer::Self *self, hkpWorld::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  hkpWorld::Self *result;
  int v9;
  int v10;
  hkpWorldPostSimulationListener::Self *v11;
  hkpWorldPostSimulationListener::Self *v12;
  hkpWorldPostSimulationListener::Self *v13;
  int v14;
  int v15;

  hkpWorld::addEntityListener(a2, (int)(uintptr_t)(self) + 40);
  hkpWorld::addWorldPostSimulationListener(a2, (hkpRigidBodyCentreOfMassViewer::Self *)((char *)self + 44));
  v14 = 0;
  v2 = *((uint32_t *)a2 + 11);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)a2 + 10) + 4 * v14);
      if ( *(int *)(v3 + 80) > 0 )
      {
        v4 = 0;
        do
        {
          v11 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v3 + 76) + 4 * v4++);
          G4_VCALL<void>(self, 48, v11);
        }
        while ( *(uint32_t *)(v3 + 80) > v4 );
        v2 = *((uint32_t *)a2 + 11);
      }
      ++v14;
    }
    while ( v14 < v2 );
  }
  v15 = 0;
  v5 = *((uint32_t *)a2 + 14);
  if ( v5 > 0 )
  {
    do
    {
      v6 = *(uint32_t *)(*((uint32_t *)a2 + 13) + 4 * v15);
      if ( *(int *)(v6 + 80) > 0 )
      {
        v7 = 0;
        do
        {
          v12 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v6 + 76) + 4 * v7++);
          G4_VCALL<void>(self, 48, v12);
        }
        while ( *(uint32_t *)(v6 + 80) > v7 );
        v5 = *((uint32_t *)a2 + 14);
      }
      ++v15;
    }
    while ( v15 < v5 );
  }
  result = a2;
  v9 = *((uint32_t *)a2 + 8);
  if ( v9 != 0 && *(int *)(v9 + 80) > 0 )
  {
    v10 = 0;
    do
    {
      v13 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v9 + 76) + 4 * v10++);
      result = (hkpWorld::Self *)G4_VCALL<int>(self, 48, v13);
    }
    while ( *(uint32_t *)(v9 + 80) > v10 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyCentreOfMassViewer::init  (binary VA: 0x184dca0)
// Original: hkpRigidBodyCentreOfMassViewer::init
// ----------------------------------------------------------------------------
int hkpRigidBodyCentreOfMassViewer::init(hkpRigidBodyCentreOfMassViewer::Self *self)
{
  int result;
  int v2;
  hkpWorld::Self *v3;

  result = *((uint32_t *)self + 9);
  if ( result != 0 && *(int *)(result + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(hkpWorld::Self **)(*(uint32_t *)(result + 108) + 4 * v2++);
      hkpRigidBodyCentreOfMassViewer::addWorld(self, v3);
      result = *((uint32_t *)self + 9);
    }
    while ( v2 < *(uint32_t *)(result + 112) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpRigidBodyCentreOfMassViewer::worldAddedCallback  (binary VA: 0x184dd10)
// Original: hkpRigidBodyCentreOfMassViewer::worldAddedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpRigidBodyCentreOfMassViewer::worldAddedCallback(hkpRigidBodyCentreOfMassViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpRigidBodyCentreOfMassViewer::addWorld(self, a2);
}


