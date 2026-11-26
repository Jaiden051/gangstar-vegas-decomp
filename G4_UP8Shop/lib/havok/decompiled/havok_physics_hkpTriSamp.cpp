#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpTriSamp.h"

// ----------------------------------------------------------------------------
// Function: hkpTriSampledHeightFieldCollection::staticClass  (binary VA: 0x1ad3cb0)
// Original: hkpTriSampledHeightFieldCollection::staticClass
// ----------------------------------------------------------------------------
void * hkpTriSampledHeightFieldCollection::staticClass()
{
  return &hkpTriSampledHeightFieldCollectionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpTriSampledHeightFieldCollection::getFirstKey  (binary VA: 0x1ad4040)
// Original: hkpTriSampledHeightFieldCollection::getFirstKey
// ----------------------------------------------------------------------------
int hkpTriSampledHeightFieldCollection::getFirstKey()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpTriSampledHeightFieldCollection::calcSizeForSpu  (binary VA: 0x1ad4060)
// Original: hkpTriSampledHeightFieldCollection::calcSizeForSpu
// ----------------------------------------------------------------------------
int hkpTriSampledHeightFieldCollection::calcSizeForSpu(int a1, int a2, int a3)
{
  int v3;

  v3 = (*(int (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 24) + 72))(*(uint32_t *)(a1 + 24), a2, a3 - 64);
  if ( v3 > a3 - 64 || v3 < 0 )
    return -1;
  if ( *(uint32_t *)(a1 + 24) == a1 + 64 )
  {
    *(uint32_t *)(a1 + 28) = 0;
    return v3 + 64;
  }
  else
  {
    *(uint32_t *)(a1 + 28) = v3;
    return 64;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpTriSampledHeightFieldCollection::getCollisionFilterInfo  (binary VA: 0x1ad40d0)
// Original: hkpTriSampledHeightFieldCollection::getCollisionFilterInfo
// ----------------------------------------------------------------------------
int hkpTriSampledHeightFieldCollection::getCollisionFilterInfo()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpTriSampledHeightFieldCollection::getNextKey  (binary VA: 0x1ad40f0)
// Original: hkpTriSampledHeightFieldCollection::getNextKey
// ----------------------------------------------------------------------------
unsigned int hkpTriSampledHeightFieldCollection::getNextKey(hkpTriSampledHeightFieldCollection::Self *self, unsigned int a2)
{
  unsigned int v2;
  int v3;
  int v4;
  int v5;
  unsigned int result;

  if ( (a2 & 1) == 0 )
    return a2 | 1;
  v2 = HIWORD(a2);
  v3 = ((uint16_t)a2 >> 1) + 1;
  v4 = *((uint32_t *)self + 6);
  if ( v3 != *(uint32_t *)(v4 + 40) - 1 )
  {
    v5 = 2 * v3;
    return (v2 << 16) + v5;
  }
  ++v2;
  result = 0xFFFFFFFF;
  if ( v2 != *(uint32_t *)(v4 + 44) - 1 )
  {
    v5 = 0;
    return (v2 << 16) + v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTriSampledHeightFieldCollection::Destroy  (binary VA: 0x1ad4150)
// Original: hkpTriSampledHeightFieldCollection::~hkpTriSampledHeightFieldCollection
// ----------------------------------------------------------------------------
void hkpTriSampledHeightFieldCollection::Destroy(hkpTriSampledHeightFieldCollection::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1A68);
  v1 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20B1AD8);
  if ( *(uint16_t *)(v1 + 6) != 0 )
  {
    do
    {
      v3 = *(uint32_t *)(v1 + 4);
      HIWORD(v2) = HIWORD(v3);
      LOWORD(v2) = 0;
      v4 = v2 | (uint16_t)(v3 - 1);
      v5 = v3;
    }
    while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)(v1 + 4), v5, v4) );
    if ( (uint16_t)v4 == 0 )
      G4_VCALL<void>(v1, 16);
  }
  v6 = *((uint32_t *)self + 11);
  *((uint32_t *)self + 10) = 0;
  if ( v6 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 9),
      2 * (v6 & 0x3FFFFFFF));
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 11) = 0x80000000;
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpTriSampledHeightFieldCollection::Destroy_ea1ad4230  (binary VA: 0x1ad4230)
// Original: hkpTriSampledHeightFieldCollection::~hkpTriSampledHeightFieldCollection
// ----------------------------------------------------------------------------
void hkpTriSampledHeightFieldCollection::Destroy_ea1ad4230(hkpTriSampledHeightFieldCollection::Self *self)
{
  int v1;
  int v2;

  hkpTriSampledHeightFieldCollection::Destroy(self);
  v1 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 64;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpTriSampledHeightFieldCollection::Construct  (binary VA: 0x1ad42a0)
// Original: hkpTriSampledHeightFieldCollection::hkpTriSampledHeightFieldCollection
// ----------------------------------------------------------------------------
void hkpTriSampledHeightFieldCollection::Construct(hkpTriSampledHeightFieldCollection::Self *self, const hkpSampledHeightFieldShape::Self *a2, float a3)
{
  int v3;
  int32_t v4; // kr00_4

  hkpShapeCollection::Construct((int)(uintptr_t)(self), 6, 2);
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20B1AD8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1A68);
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0x80000000;
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 12) = 0;
  *((float *)self + 8) = a3;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  if ( *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v4 = *((uint32_t *)a2 + 1);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
    }
    while ( v4 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v4, v3 | (uint16_t)(v4 + 1)) );
  }
}



// ============================================================================
// Address:   0x1ad4350 (size: 77 bytes)
// Symbol:    _ZN34hkpTriSampledHeightFieldCollectionC1E24hkFinishLoadedObjectFlag
// Demangled: hkpTriSampledHeightFieldCollection::hkpTriSampledHeightFieldCollection(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN34hkpTriSampledHeightFieldCollectionC2E24hkFinishLoadedObjectFlag'
void (**hkpTriSampledHeightFieldCollection::Construct(
        int a1,
        int a2))(hkpTriSampledHeightFieldCollection::Self * self)
{
  void (**result)(hkpTriSampledHeightFieldCollection::Self *);

  hkpShapeCollection::Construct(a1, a2);
  result = (void (**)(hkpTriSampledHeightFieldCollection::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20B1AD8));
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20B1A68);
  *(uint32_t *)(a1 + 16) = ((uint32_t)(uintptr_t)&off_20B1AD8);
  if ( a2 != 0 )
  {
    *(uint8_t *)(a1 + 8) = 6;
    *(uint8_t *)(a1 + 21) = 2;
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: hkpTriSampledHeightFieldCollection::getHeightFieldShape  (binary VA: 0x1ad43a0)
// Original: hkpTriSampledHeightFieldCollection::getHeightFieldShape
// ----------------------------------------------------------------------------
int hkpTriSampledHeightFieldCollection::getHeightFieldShape(hkpTriSampledHeightFieldCollection::Self *self)
{
  return *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: hkpTriSampledHeightFieldCollection::getAabb  (binary VA: 0x1ad43b0)
// Original: hkpTriSampledHeightFieldCollection::getAabb
// ----------------------------------------------------------------------------
int hkpTriSampledHeightFieldCollection::getAabb(hkpTriSampledHeightFieldCollection::Self *self, const hkTransformf::Self *a2, float a3, hkAabb::Self *a4)
{
  int HeightFieldShape;
  int result;
  float v6; // xmm2_4
  float v7; // xmm5_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm7_4
  float v12; // xmm6_4
  float v13; // xmm1_4
  float v14; // xmm5_4
  float v15; // xmm4_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm6_4
  float v20; // xmm0_4
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v21)) > _g4_s0 ? (12u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v22)) > _g4_s1 ? (12u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v23)) > _g4_s2 ? (16u + sizeof(_g4_t_v23)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);

  v21 = a3 + *((float *)self + 8);
  HeightFieldShape = hkpTriSampledHeightFieldCollection::getHeightFieldShape(self);
  result = G4_VCALL<int>(HeightFieldShape, 24, a2, LODWORD(v21), v23);
  v6 = *((float *)self + 15);
  v7 = *((float *)self + 12);
  v8 = *((float *)self + 13);
  v9 = *((float *)self + 14);
  v22 = v23[3] + v6;
  v10 = fminf(v23[0], v23[0] + v7);
  v11 = fminf(v23[1], v23[1] + v8);
  v12 = fminf(v23[2], v23[2] + v9);
  v13 = fmaxf(v23[4], v7 + v23[4]);
  v14 = v23[5];
  v15 = v8 + v23[5];
  v16 = v9 + v23[6];
  v17 = v6 + v23[7];
  *(float *)a4 = v10;
  *((float *)a4 + 2) = v12;
  *((float *)a4 + 4) = v13;
  v18 = fmaxf(v23[6], v16);
  v19 = fminf(v23[3], v22);
  v20 = fmaxf(v23[7], v17);
  *((float *)a4 + 1) = v11;
  *((float *)a4 + 5) = fmaxf(v14, v15);
  *((float *)a4 + 6) = v18;
  *((float *)a4 + 3) = v19;
  *((float *)a4 + 7) = v20;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTriSampledHeightFieldCollection::getChildShape  (binary VA: 0x1ad44f0)
// Original: hkpTriSampledHeightFieldCollection::getChildShape
// ----------------------------------------------------------------------------
uint32_t * hkpTriSampledHeightFieldCollection::getChildShape(hkpTriSampledHeightFieldCollection::Self *a1, unsigned int a2, int a3)
{
  unsigned int v3;
  float *HeightFieldShape;
  int v5;
  int v6; // xmm0_4
  float *v7;
  float v8; // xmm1_4
  float v9; // xmm0_4
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char v18;
  int16_t v19;
  int v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef char _g4_t_v28;
  typedef hkpTriSampledHeightFieldCollection::Self *_g4_t_v29;
  typedef hkpTriSampledHeightFieldCollection::Self *_g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef float _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint32_t _g4_t_v42[22];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v23)) > _g4_s1 ? (4u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v24)) > _g4_s2 ? (8u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v25)) > _g4_s3 ? (12u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v26)) > _g4_s4 ? (16u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v27)) > _g4_s5 ? (20u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v28)) > _g4_s6 ? (20u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v29)) > _g4_s7 ? (24u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v30)) > _g4_s8 ? (24u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v31)) > _g4_s9 ? (28u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v32)) > _g4_s10 ? (28u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v33)) > _g4_s11 ? (32u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v34)) > _g4_s12 ? (32u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v35)) > _g4_s13 ? (36u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v36)) > _g4_s14 ? (40u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v37)) > _g4_s15 ? (44u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v38)) > _g4_s16 ? (48u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v39)) > _g4_s17 ? (48u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v40)) > _g4_s18 ? (48u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v41)) > _g4_s19 ? (52u + sizeof(_g4_t_v41)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v42)) > _g4_s20 ? (56u + sizeof(_g4_t_v42)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);

  v42[18] = (uint32_t)(uintptr_t)(&a1);
  v29 = a1;
  v3 = a2;
  v38 = a3;
  v27 = a2;
  HeightFieldShape = (float *)hkpTriSampledHeightFieldCollection::getHeightFieldShape(a1);
  v5 = v38;
  v31 = HIWORD(v3);
  v6 = *((uint32_t *)v29 + 8);
  *(uint32_t *)(v38 + 4) = -65535;
  v33 = (uint16_t)v3 >> 1;
  *(uint8_t *)(v38 + 8) = 2;
  *(uint8_t *)(v38 + 9) = 4;
  *(uint8_t *)(v38 + 10) = 0;
  *(uint8_t *)(v38 + 11) = 0;
  *(uint32_t *)(v38 + 12) = 0;
  *(uint32_t *)(v38 + 16) = v6;
  *(uint32_t *)v38 = ((uint32_t)(uintptr_t)&off_209A8C8);
  *(uint16_t *)(v38 + 20) = 0;
  *(uint8_t *)(v38 + 22) = 6;
  *(uint32_t *)(v38 + 80) = 0;
  *(uint32_t *)(v38 + 84) = 0;
  *(uint32_t *)(v38 + 88) = 0;
  *(uint32_t *)(v38 + 92) = 0;
  *(uint8_t *)(v38 + 23) = 0;
  v7 = (float *)v42;
  v39 = 0;
  v26 = v5;
  do
  {
    v35 = v31 + (v39 & 1);
    v36 = v33 + (v39 >> 1);
    v37 = ((long double (*)(float *, int, int))*(uint32_t *)(*(uint32_t *)HeightFieldShape + 88))(
            HeightFieldShape,
            v36,
            v35);
    ++v39;
    v7[1] = v37 * HeightFieldShape[17];
    v7 += 4;
    v8 = (float)v36 * HeightFieldShape[16];
    *(v7 - 2) = (float)v35 * HeightFieldShape[18];
    v9 = 0.0 * HeightFieldShape[19];
    *(v7 - 4) = v8;
    *(v7 - 1) = v9;
  }
  while ( v39 != 4 );
  (*(void (**)(char *, float *, int, int, int, int, int, unsigned int, hkpTriSampledHeightFieldCollection::Self *, unsigned int, int, int, int, float, int, int))(*(uint32_t *)HeightFieldShape + 92))(
    (char *)&v41 + 3,
    HeightFieldShape,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v29,
    v31,
    v33,
    v35,
    v36,
    COERCE_FLOAT(LODWORD(v37)),
    v26,
    v41);
  v10 = HIBYTE(v41) != 0;
  v11 = v28 & 1;
  v12 = v40;
  v13 = 12 * (v11 & ~v10);
  v40[8] = v42[v13];
  v40[9] = v42[v13 + 1];
  v14 = v42[v13 + 2];
  v15 = v42[v13 + 3];
  v40[10] = v14;
  v40[11] = v15;
  v40[12] = v42[4 * v11 * (v10 + 1) + 4];
  v40[13] = v42[4 * v11 * (v10 + 1) + 5];
  v16 = v42[4 * v11 * (v10 + 1) + 7];
  v40[14] = v42[4 * v11 * (v10 + 1) + 6];
  v40[15] = v16;
  v40[16] = v42[4 * (v10 - v11) + 8];
  v40[17] = v42[4 * (v10 - v11) + 9];
  v17 = v42[4 * (v10 - v11) + 11];
  v40[18] = v42[4 * (v10 - v11) + 10];
  v40[19] = v17;
  if ( *((uint32_t *)v30 + 10) != 0 )
  {
    v21 = hkpTriSampledHeightFieldCollection::getHeightFieldShape(v30);
    v12 = v40;
    v19 = *(uint16_t *)(*((uint32_t *)v30 + 9) + 2 * (v11 | (2 * (v34 + v32 * (*(uint32_t *)(v21 + 40) - 1)))));
    v18 = 0;
  }
  else
  {
    v18 = 6;
    v19 = 0;
  }
  *((uint8_t *)v12 + 22) = v18;
  *((uint16_t *)v12 + 10) = v19;
  *((uint8_t *)v12 + 23) = (float)((float)((float)(*((float *)v30 + 12) * *((float *)v30 + 12))
                                       + (float)(*((float *)v30 + 13) * *((float *)v30 + 13)))
                               + (float)(*((float *)v30 + 14) * *((float *)v30 + 14))) > 0.0;
  v12[20] = *((uint32_t *)v30 + 12);
  v12[21] = *((uint32_t *)v30 + 13);
  v12[22] = *((uint32_t *)v30 + 14);
  v12[23] = *((uint32_t *)v30 + 15);
  return v12;
}

// ----------------------------------------------------------------------------
// Function: hkpTriSampledHeightFieldCollection::initWeldingInfo  (binary VA: 0x1ad4780)
// Original: hkpTriSampledHeightFieldCollection::initWeldingInfo
// ----------------------------------------------------------------------------
int hkpTriSampledHeightFieldCollection::initWeldingInfo(hkpTriSampledHeightFieldCollection::Self *a1, int a2)
{
  int *v2;
  int HeightFieldShape;
  int v4;
  int result;
  int v6;
  int v7;
  uint32_t v8[7];

  v8[3] = (uint32_t)(uintptr_t)(&a1);
  v2 = (int *)a1;
  if ( a2 == 6 )
  {
    result = *((uint32_t *)a1 + 11);
    *((uint32_t *)a1 + 10) = 0;
    if ( result >= 0 )
      result = (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
                 (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                 v2[9],
                 2 * (result & 0x3FFFFFFF));
    v2[9] = 0;
    v2[11] = 0x80000000;
  }
  else
  {
    HeightFieldShape = hkpTriSampledHeightFieldCollection::getHeightFieldShape(a1);
    v4 = (*(uint32_t *)(HeightFieldShape + 44) - 1)
       * (*(uint32_t *)(HeightFieldShape + 40) + *(uint32_t *)(HeightFieldShape + 40) - 2);
    if ( v4 > (v2[11] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserve((hkArrayUtil::Self *)v8, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v2 + 9, v4, 2);
      v6 = v2[11] & 0x3FFFFFFF;
      if ( v4 > v6 )
      {
        v7 = 2 * v6;
        if ( v7 < v4 )
          v7 = v4;
        hkArrayUtil::reserve((hkArrayUtil::Self *)v8, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v2 + 9, v7, 2);
      }
    }
    result = v2[10];
    if ( v4 - result > 0 )
      result = (int)(uintptr_t)(memset((void *)(v2[9] + 2 * result), 0, 2 * (v4 - result)));
    v2[10] = v4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTriSampledHeightFieldCollection::setWeldingInfo  (binary VA: 0x1ad48d0)
// Original: hkpTriSampledHeightFieldCollection::setWeldingInfo
// ----------------------------------------------------------------------------
unsigned int hkpTriSampledHeightFieldCollection::setWeldingInfo(hkpTriSampledHeightFieldCollection::Self *self, unsigned int a2, int16_t a3)
{
  unsigned int result;

  result = a2 & 1
         | (2
          * ((*(uint32_t *)(hkpTriSampledHeightFieldCollection::getHeightFieldShape(self) + 40) - 1) * HIWORD(a2)
           + ((uint16_t)a2 >> 1)));
  *(uint16_t *)(*((uint32_t *)self + 9) + 2 * result) = a3;
  return result;
}


