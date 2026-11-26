#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpCapsule.h"

// ----------------------------------------------------------------------------
// Function: hkpCapsuleShape::staticClass  (binary VA: 0x1693aa0)
// Original: hkpCapsuleShape::staticClass
// ----------------------------------------------------------------------------
void * hkpCapsuleShape::staticClass()
{
  return &hkpCapsuleShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleShape::getSize  (binary VA: 0x1697770)
// Original: hkpCapsuleShape::getSize
// ----------------------------------------------------------------------------
int hkpCapsuleShape::getSize()
{
  return 64;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleShape::calcSizeForSpu  (binary VA: 0x1697780)
// Original: hkpCapsuleShape::calcSizeForSpu
// ----------------------------------------------------------------------------
int hkpCapsuleShape::calcSizeForSpu()
{
  return 64;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleShape::getNumCollisionSpheres  (binary VA: 0x1697790)
// Original: hkpCapsuleShape::getNumCollisionSpheres
// ----------------------------------------------------------------------------
int hkpCapsuleShape::getNumCollisionSpheres()
{
  return 2;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleShape::getCentre  (binary VA: 0x16977a0)
// Original: hkpCapsuleShape::getCentre
// ----------------------------------------------------------------------------
void * hkpCapsuleShape::getCentre(hkpCapsuleShape::Self *self, hkVector4f::Self *a2)
{
  float v3; // xmm4_4
  float v4; // xmm3_4
  float v5; // xmm2_4
  float v6; // xmm0_4

  v3 = *((float *)self + 8) + *((float *)self + 12);
  *(float *)a2 = v3;
  v4 = *((float *)self + 9) + *((float *)self + 13);
  *((float *)a2 + 1) = v4;
  v5 = *((float *)self + 10) + *((float *)self + 14);
  *((float *)a2 + 2) = v5;
  v6 = *((float *)self + 11) + *((float *)self + 15);
  *(float *)a2 = v3 * 0.5;
  *((float *)a2 + 1) = v4 * 0.5;
  *((float *)a2 + 2) = v5 * 0.5;
  *((float *)a2 + 3) = v6 * 0.5;
  return &g_vectorfConstants;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleShape::convertVertexIdsToVertices  (binary VA: 0x1697820)
// Original: hkpCapsuleShape::convertVertexIdsToVertices
// ----------------------------------------------------------------------------
int hkpCapsuleShape::convertVertexIdsToVertices(int a1, uint16_t *a2, int a3, int a4)
{
  uint16_t *v4;
  int result;
  int v6;
  int v7;

  v4 = a2;
  result = a4;
  v6 = a1 + 32;
  if ( a3 > 0 )
  {
    do
    {
      v7 = *v4++;
      result += 16;
      *(uint32_t *)(result - 16) = *(uint32_t *)(v7 + v6);
      *(uint32_t *)(result - 12) = *(uint32_t *)(v7 + v6 + 4);
      *(uint32_t *)(result - 8) = *(uint32_t *)(v7 + v6 + 8);
      *(uint32_t *)(result - 4) = v7 | 0x3F000000;
    }
    while ( v4 != &a2[a3] );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleShape::getFirstVertex  (binary VA: 0x1697870)
// Original: hkpCapsuleShape::getFirstVertex
// ----------------------------------------------------------------------------
hkVector4f::Self * hkpCapsuleShape::getFirstVertex(hkpCapsuleShape::Self *self, hkVector4f::Self *a2)
{
  *(uint32_t *)a2 = *((uint32_t *)self + 12);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 13);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 14);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 15);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleShape::getCollisionSpheres  (binary VA: 0x1697890)
// Original: hkpCapsuleShape::getCollisionSpheres
// ----------------------------------------------------------------------------
hkSphere::Self * hkpCapsuleShape::getCollisionSpheres(hkpCapsuleShape::Self *self, hkSphere::Self *a2)
{
  *(uint32_t *)a2 = *((uint32_t *)self + 8);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 9);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 10);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 11);
  *((uint32_t *)a2 + 4) = *((uint32_t *)self + 12);
  *((uint32_t *)a2 + 5) = *((uint32_t *)self + 13);
  *((uint32_t *)a2 + 6) = *((uint32_t *)self + 14);
  *((uint32_t *)a2 + 7) = *((uint32_t *)self + 15);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleShape::Destroy  (binary VA: 0x16978d0)
// Original: hkpCapsuleShape::~hkpCapsuleShape
// ----------------------------------------------------------------------------
void hkpCapsuleShape::Destroy(hkpCapsuleShape::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleShape::Destroy_ea16978f0  (binary VA: 0x16978f0)
// Original: hkpCapsuleShape::~hkpCapsuleShape
// ----------------------------------------------------------------------------
void hkpCapsuleShape::Destroy_ea16978f0(hkpCapsuleShape::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 64;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleShape::getAabb  (binary VA: 0x1697950)
// Original: hkpCapsuleShape::getAabb
// ----------------------------------------------------------------------------
hkAabb::Self * hkpCapsuleShape::getAabb(hkpCapsuleShape::Self *self, const hkTransformf::Self *a2, float a3, hkAabb::Self *a4)
{
  int v4;
  float v5; // xmm5_4
  float v6; // xmm6_4
  float v7; // xmm4_4
  float *v8;
  float *v9;
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm1_4
  float v16; // xmm6_4
  float v17; // xmm4_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm7_4
  float v42;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
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
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v21)) > _g4_s0 ? (12u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v22)) > _g4_s1 ? (16u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v23)) > _g4_s2 ? (20u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v24)) > _g4_s3 ? (24u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v25)) > _g4_s4 ? (28u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v26)) > _g4_s5 ? (32u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v27)) > _g4_s6 ? (36u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v28)) > _g4_s7 ? (40u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v29)) > _g4_s8 ? (44u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v30)) > _g4_s9 ? (48u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v31)) > _g4_s10 ? (52u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v32)) > _g4_s11 ? (56u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v33)) > _g4_s12 ? (60u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v34)) > _g4_s13 ? (64u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v35)) > _g4_s14 ? (68u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v36)) > _g4_s15 ? (72u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v37)) > _g4_s16 ? (76u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v38)) > _g4_s17 ? (80u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v39)) > _g4_s18 ? (84u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v40)) > _g4_s19 ? (88u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v41)) > _g4_s20 ? (92u + sizeof(_g4_t_v41)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 72u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 76u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 80u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 84u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 88u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);

  v4 = 1;
  v21 = *(float *)a2;
  v33 = *((float *)a2 + 1);
  v32 = *((float *)a2 + 2);
  v42 = a3 + *((float *)self + 4);
  v31 = *((float *)a2 + 3);
  v30 = *((float *)a2 + 4);
  v29 = *((float *)a2 + 5);
  v28 = *((float *)a2 + 6);
  v27 = *((float *)a2 + 7);
  v26 = *((float *)a2 + 8);
  v25 = *((float *)a2 + 9);
  v24 = *((float *)a2 + 10);
  v23 = *((float *)a2 + 11);
  v22 = *((float *)a2 + 12);
  v5 = *((float *)a2 + 14);
  v6 = *((float *)a2 + 13);
  v7 = *((float *)a2 + 15);
  while ( 1 )
  {
    v8 = (float *)((char *)self + 16 * v4 + 32);
    v9 = &v34 + 4 * v4;
    v10 = *v8;
    v11 = v8[1];
    v12 = v8[2];
    *v9 = (float)((float)((float)(v21 * *v8) + (float)(v30 * v11)) + (float)(v26 * v12)) + v22;
    v9[1] = (float)((float)((float)(v33 * v10) + (float)(v29 * v11)) + (float)(v25 * v12)) + v6;
    v9[2] = (float)((float)((float)(v32 * v10) + (float)(v28 * v11)) + (float)(v24 * v12)) + v5;
    v9[3] = (float)((float)((float)(v10 * v31) + (float)(v11 * v27)) + (float)(v12 * v23)) + v7;
    if ( v4 != 1 )
      break;
    LOBYTE(v4) = 0;
  }
  v14 = fminf(v35, v39) - v42;
  v15 = fminf(v36, v40) - v42;
  v16 = fmaxf(v34, v38) + v42;
  v17 = fmaxf(v35, v39) + v42;
  v18 = fmaxf(v36, v40) + v42;
  v19 = fmaxf(v37, v41) + 0.0;
  v20 = fminf(v37, v41);
  *(float *)a4 = fminf(v34, v38) - v42;
  *((float *)a4 + 1) = v14;
  *((float *)a4 + 2) = v15;
  *((float *)a4 + 4) = v16;
  *((float *)a4 + 3) = v20;
  *((float *)a4 + 5) = v17;
  *((float *)a4 + 6) = v18;
  *((float *)a4 + 7) = v19;
  return a4;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleShape::getSupportingVertex  (binary VA: 0x1697bb0)
// Original: hkpCapsuleShape::getSupportingVertex
// ----------------------------------------------------------------------------
int hkpCapsuleShape::getSupportingVertex(int a1, float *a2, int a3)
{
  int result;
  float v4; // xmm3_4
  float v5; // xmm6_4
  float v6; // xmm5_4
  float v7; // xmm2_4
  float v8; // xmm4_4
  int v9; // xmm0_4

  result = a1;
  v4 = *(float *)(a1 + 52);
  v5 = *(float *)(a1 + 32);
  v6 = *(float *)(a1 + 36);
  v7 = *(float *)(a1 + 56);
  v8 = *(float *)(a1 + 40);
  if ( (float)((float)((float)((float)(*(float *)(a1 + 48) - v5) * *a2) + (float)((float)(v4 - v6) * a2[1]))
             + (float)((float)(v7 - v8) * a2[2])) < 0.0 )
  {
    v9 = 1056964608;
    *(float *)a3 = v5;
    *(float *)(a3 + 4) = v6;
    *(float *)(a3 + 8) = v8;
  }
  else
  {
    v9 = 1056964624;
    *(uint32_t *)a3 = *(uint32_t *)(a1 + 48);
    *(float *)(a3 + 4) = v4;
    *(float *)(a3 + 8) = v7;
  }
  *(uint32_t *)(a3 + 12) = v9;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleShape::Construct  (binary VA: 0x1697c60)
// Original: hkpCapsuleShape::hkpCapsuleShape
// ----------------------------------------------------------------------------
void hkpCapsuleShape::Construct(hkpCapsuleShape::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, float a4)
{
  *((float *)self + 4) = a4;
  *((uint32_t *)self + 1) = -65535;
  *((uint8_t *)self + 8) = 4;
  *((uint8_t *)self + 9) = 4;
  *((uint8_t *)self + 10) = 0;
  *((uint8_t *)self + 11) = 0;
  *((uint32_t *)self + 3) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2099628);
  *((uint32_t *)self + 8) = *(uint32_t *)a2;
  *((uint32_t *)self + 9) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 2);
  *((float *)self + 11) = a4;
  *((uint32_t *)self + 12) = *(uint32_t *)a3;
  *((uint32_t *)self + 13) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 14) = *((uint32_t *)a3 + 2);
  *((float *)self + 15) = a4;
}



// ============================================================================
// Address:   0x1697d00 (size: 59 bytes)
// Symbol:    _ZN15hkpCapsuleShapeC1E24hkFinishLoadedObjectFlag
// Demangled: hkpCapsuleShape::hkpCapsuleShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN15hkpCapsuleShapeC2E24hkFinishLoadedObjectFlag'
void (**hkpCapsuleShape::Construct(int a1, int a2))(hkpCapsuleShape::Self * self)
{
  hkpConvexShape::hkpConvexShape(a1, a2);
  *(uint8_t *)(a1 + 8) = 4;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2099628);
  return (void (**)(hkpCapsuleShape::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2099628));
}
// ----------------------------------------------------------------------------
// Function: hkpCapsuleShape::closestInfLineSegInfLineSeg  (binary VA: 0x1697d40)
// Original: hkpCapsuleShape::closestInfLineSegInfLineSeg
// ----------------------------------------------------------------------------
const hkVector4f::Self * hkpCapsuleShape::closestInfLineSegInfLineSeg(hkpCapsuleShape::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5, float *a6, float *a7, float *a8, hkVector4f::Self *a9)
{
  hkVector4f::Self *v9;
  float *v10;
  int v11; // xmm0_4
  typedef float *_g4_t_v13;
  typedef float *_g4_t_v14;
  typedef const hkVector4f::Self *_g4_t_v15;
  typedef uint8_t _g4_t_v16[4];
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef hkpCapsuleShape::Self **_g4_t_v28;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v16)) > _g4_s3 ? (24u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v17)) > _g4_s4 ? (28u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v18)) > _g4_s5 ? (32u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v19)) > _g4_s6 ? (36u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v20)) > _g4_s7 ? (44u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v21)) > _g4_s8 ? (48u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v22)) > _g4_s9 ? (52u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v23)) > _g4_s10 ? (56u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v24)) > _g4_s11 ? (60u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v25)) > _g4_s12 ? (64u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v26)) > _g4_s13 ? (68u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v27)) > _g4_s14 ? (72u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v28)) > _g4_s15 ? (84u + sizeof(_g4_t_v28)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 68u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 72u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 84u);

  v28 = &self;
  v14 = a6;
  v9 = a9;
  v13 = a7;
  v10 = a8;
  v15 = a5;
  hkLineSegmentUtil::closestPointInfLineInfLine(v16);
  v11 = v18;
  *(uint32_t *)v10 = v20;
  *((uint32_t *)v10 + 1) = v21;
  *((uint32_t *)v10 + 2) = v22;
  *((uint32_t *)v10 + 3) = v23;
  *(uint32_t *)v9 = v24;
  *((uint32_t *)v9 + 1) = v25;
  *((uint32_t *)v9 + 2) = v26;
  *((uint32_t *)v9 + 3) = v27;
  *(uint32_t *)v14 = v11;
  *(uint32_t *)v13 = v19;
  *(uint32_t *)v15 = v17;
  return v15;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleShape::closestPointLineSeg  (binary VA: 0x1697e20)
// Original: hkpCapsuleShape::closestPointLineSeg
// ----------------------------------------------------------------------------
const hkVector4f::Self * hkpCapsuleShape::closestPointLineSeg(hkpCapsuleShape::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4)
{
  const hkVector4f::Self *result;
  float v5; // xmm1_4
  __m128i v6;
  float v7; // xmm3_4
  float v8; // xmm5_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  __m128i v12;
  int v13;
  int v14;
  float v15; // xmm1_4
  float v16;
  float v17;

  result = a2;
  v5 = *((float *)a2 + 1);
g4_m128_raw(v6) = *(unsigned int *)a3;
  *(float *)g4_m128_ptr<int32_t>(v6) = *(float *)g4_m128_ptr<int32_t>(v6) - *(float *)a2;
  v16 = *((float *)a3 + 3);
  v7 = *((float *)a3 + 1) - v5;
  v8 = *((float *)a2 + 2);
  v17 = *((float *)a2 + 3);
  v9 = *((float *)a3 + 2) - v8;
  v10 = (float)((float)(*(float *)a2 - *(float *)self) * *(float *)g4_m128_ptr<int32_t>(v6))
      + (float)((float)(v5 - *((float *)self + 1)) * v7);
  v12 = v6;
  v11 = -(float)(v10 + (float)((float)(v8 - *((float *)self + 2)) * v9));
  *(float *)g4_m128_ptr<int32_t>(v12) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v6) * *(float *)g4_m128_ptr<int32_t>(v6)) + (float)(v7 * v7))
                          + (float)(v9 * v9);
  if ( v11 <= 0.0 )
  {
    *(uint32_t *)a4 = *(uint32_t *)a2;
    *((uint32_t *)a4 + 1) = *((uint32_t *)a2 + 1);
    *((uint32_t *)a4 + 2) = *((uint32_t *)a2 + 2);
    result = *((const hkVector4f::Self **)a2 + 3);
    *((uint32_t *)a4 + 3) = (uint32_t)(uintptr_t)(result);
  }
  else if ( v11 < *(float *)g4_m128_ptr<int32_t>(v12) )
  {
    v13 = _mm_cvtsi128_si32(v12);
    v14 = (2130706432 - v13) & ((v13 ^ (v13 + 2139095040)) >> 31);
    v15 = (float)((float)(2.0
                        - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                * (float)((float)(*(float *)&v14
                                                * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v14)))
                                        * (float)(2.0
                                                - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                                        * (float)(*(float *)&v14
                                                                * (float)(2.0
                                                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                                                                * *(float *)&v14))))))))
                * (float)((float)(*(float *)&v14 * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v14)))
                        * (float)(2.0
                                - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                        * (float)(*(float *)&v14
                                                * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v14)))))))
        * v11;
    *(float *)a4 = (float)(*(float *)g4_m128_ptr<int32_t>(v6) * v15) + *(float *)a2;
    *((float *)a4 + 1) = (float)(v7 * v15) + *((float *)a2 + 1);
    *((float *)a4 + 2) = (float)(v9 * v15) + *((float *)a2 + 2);
    *((float *)a4 + 3) = (float)((float)(v16 - v17) * v15) + *((float *)a2 + 3);
  }
  else
  {
    *(uint32_t *)a4 = *(uint32_t *)a3;
    *((uint32_t *)a4 + 1) = *((uint32_t *)a3 + 1);
    *((uint32_t *)a4 + 2) = *((uint32_t *)a3 + 2);
    result = *((const hkVector4f::Self **)a3 + 3);
    *((uint32_t *)a4 + 3) = (uint32_t)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleShape::castRay  (binary VA: 0x1697ff0)
// Original: hkpCapsuleShape::castRay
// ----------------------------------------------------------------------------
char * hkpCapsuleShape::castRay(char *a1, float *a2, __m128 *a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  uint32_t *v8;
  uint64_t v9; // rax
  __m128 v11;
  __m128 v12;
  float v13; // xmm0_4
  __m128i v14;
  __m128i v15;
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm4_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm3_4
  int v23; // xmm4_4
  float v24; // xmm4_4
  float v25; // xmm1_4
  float v26; // xmm4_4
  float v27; // xmm5_4
  float v28; // xmm0_4
  __m128i v29;
  float v30; // xmm6_4
  int v31;
  int v32;
  float v33; // xmm3_4
  float v34; // xmm3_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  int v37;
  int v38;
  float v39; // xmm5_4
  float v40; // xmm6_4
  float v41; // xmm5_4
  float v42; // xmm1_4
  float v43; // xmm0_4
  float v44; // xmm2_4
  __m128i v45;
  float v46; // xmm4_4
  __m128i v47;
  float v48;
  float v49; // xmm4_4
  char v50;
  uint8_t v51;
  char v52;
  char v53;
  char v54;
  float v55; // xmm3_4
  float v56; // xmm1_4
  float v57; // xmm4_4
  __m128i v58;
  __m128i v59;
  float v60; // xmm5_4
  int v61;
  int v62;
  float v63; // xmm3_4
  float v64; // xmm1_4
  float v65; // xmm4_4
  char v66;
  int v67;
  int v68;
  float v69; // xmm1_4
  float v70; // xmm5_4
  __m128i v71;
  float v72; // xmm1_4
  float v73; // xmm0_4
  __m128i v74;
  float v75; // xmm4_4
  int v76;
  int v77;
  float v78; // xmm0_4
  float v79; // xmm2_4
  float v80; // xmm0_4
  float v81; // xmm2_4
  float v82; // xmm4_4
  float v83; // xmm4_4
  int v84; // xmm3_4
  float v85; // xmm3_4
  float v86; // xmm4_4
  int v87;
  int v88;
  float v89; // xmm0_4
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97;
  typedef float _g4_t_v98;
  typedef float _g4_t_v99;
  typedef float _g4_t_v100;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef float _g4_t_v103;
  typedef float _g4_t_v104;
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108;
  typedef float _g4_t_v109;
  typedef float _g4_t_v110;
  typedef float _g4_t_v111;
  typedef float _g4_t_v112;
  typedef float _g4_t_v113;
  typedef float _g4_t_v114;
  typedef float _g4_t_v115;
  typedef float _g4_t_v116;
  typedef float _g4_t_v117;
  typedef float _g4_t_v118;
  typedef float _g4_t_v119[2];
  typedef float _g4_t_v120;
  typedef int _g4_t_v121;
  typedef float _g4_t_v122[4];
  typedef float _g4_t_v123[4];
  typedef char _g4_t_v124[16];
  typedef __m128 _g4_t_v125;
  typedef __m128 _g4_t_v126;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v90)) > _g4_s0 ? (0u + sizeof(_g4_t_v90)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v91)) > _g4_s1 ? (4u + sizeof(_g4_t_v91)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v92)) > _g4_s2 ? (8u + sizeof(_g4_t_v92)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v93)) > _g4_s3 ? (12u + sizeof(_g4_t_v93)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v94)) > _g4_s4 ? (16u + sizeof(_g4_t_v94)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v95)) > _g4_s5 ? (24u + sizeof(_g4_t_v95)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v96)) > _g4_s6 ? (28u + sizeof(_g4_t_v96)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v97)) > _g4_s7 ? (32u + sizeof(_g4_t_v97)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v98)) > _g4_s8 ? (32u + sizeof(_g4_t_v98)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v99)) > _g4_s9 ? (36u + sizeof(_g4_t_v99)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v100)) > _g4_s10 ? (40u + sizeof(_g4_t_v100)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v101)) > _g4_s11 ? (40u + sizeof(_g4_t_v101)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v102)) > _g4_s12 ? (44u + sizeof(_g4_t_v102)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v103)) > _g4_s13 ? (44u + sizeof(_g4_t_v103)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v104)) > _g4_s14 ? (48u + sizeof(_g4_t_v104)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v105)) > _g4_s15 ? (52u + sizeof(_g4_t_v105)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v106)) > _g4_s16 ? (52u + sizeof(_g4_t_v106)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v107)) > _g4_s17 ? (56u + sizeof(_g4_t_v107)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v108)) > _g4_s18 ? (60u + sizeof(_g4_t_v108)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v109)) > _g4_s19 ? (60u + sizeof(_g4_t_v109)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v110)) > _g4_s20 ? (64u + sizeof(_g4_t_v110)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v111)) > _g4_s21 ? (68u + sizeof(_g4_t_v111)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v112)) > _g4_s22 ? (68u + sizeof(_g4_t_v112)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v113)) > _g4_s23 ? (68u + sizeof(_g4_t_v113)) : _g4_s23,
    _g4_s25 = (72u + sizeof(_g4_t_v114)) > _g4_s24 ? (72u + sizeof(_g4_t_v114)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v115)) > _g4_s25 ? (72u + sizeof(_g4_t_v115)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v116)) > _g4_s26 ? (76u + sizeof(_g4_t_v116)) : _g4_s26,
    _g4_s28 = (76u + sizeof(_g4_t_v117)) > _g4_s27 ? (76u + sizeof(_g4_t_v117)) : _g4_s27,
    _g4_s29 = (76u + sizeof(_g4_t_v118)) > _g4_s28 ? (76u + sizeof(_g4_t_v118)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v119)) > _g4_s29 ? (80u + sizeof(_g4_t_v119)) : _g4_s29,
    _g4_s31 = (88u + sizeof(_g4_t_v120)) > _g4_s30 ? (88u + sizeof(_g4_t_v120)) : _g4_s30,
    _g4_s32 = (92u + sizeof(_g4_t_v121)) > _g4_s31 ? (92u + sizeof(_g4_t_v121)) : _g4_s31,
    _g4_s33 = (96u + sizeof(_g4_t_v122)) > _g4_s32 ? (96u + sizeof(_g4_t_v122)) : _g4_s32,
    _g4_s34 = (112u + sizeof(_g4_t_v123)) > _g4_s33 ? (112u + sizeof(_g4_t_v123)) : _g4_s33,
    _g4_s35 = (128u + sizeof(_g4_t_v124)) > _g4_s34 ? (128u + sizeof(_g4_t_v124)) : _g4_s34,
    _g4_s36 = (144u + sizeof(_g4_t_v125)) > _g4_s35 ? (144u + sizeof(_g4_t_v125)) : _g4_s35,
    _g4_s37 = (160u + sizeof(_g4_t_v126)) > _g4_s36 ? (160u + sizeof(_g4_t_v126)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 0u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 4u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 8u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 12u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 16u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 24u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 28u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 32u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 32u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 36u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 40u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 40u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 44u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 44u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 48u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 52u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 52u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 56u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 60u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 60u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 64u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 68u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 68u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 68u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 72u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 72u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 76u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 76u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 76u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 80u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 88u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 92u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 96u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 112u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 128u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 144u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 160u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtrcCapsule");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  hkpCapsuleShape::closestPointLineSeg(
    (hkpCapsuleShape::Self *)a3,
    (const hkVector4f::Self *)(a2 + 8),
    (const hkVector4f::Self *)(a2 + 12),
    (const hkVector4f::Self *)v122);
  if ( (float)(a2[4] * a2[4]) > (float)((float)((float)((float)(g4_m128_lane<float>(*(a3), 0) - v122[0])
                                                      * (float)(g4_m128_lane<float>(*(a3), 0) - v122[0]))
                                              + (float)((float)(g4_m128_lane<float>(*(a3), 1) - v122[1])
                                                      * (float)(g4_m128_lane<float>(*(a3), 1) - v122[1])))
                                      + (float)((float)(g4_m128_lane<float>(*(a3), 2) - v122[2]) * (float)(g4_m128_lane<float>(*(a3), 2) - v122[2]))) )
    goto LABEL_4;
g4_m128_lane<uint64_t>(v11, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(a3), 0),g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(a3), 1)), 0);
g4_m128_lane<uint64_t>(v11, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(a3), 2),g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(a3), 3)), 0);
  v12 = _mm_sub_ps(a3[1], v11);
  v119[0] = 3.40282e38f;
  v125 = v12;
  v126 = _mm_sub_ps(*(__m128 *)(a2 + 12), *(__m128 *)(a2 + 8));
  hkpCapsuleShape::closestInfLineSegInfLineSeg(
    (hkpCapsuleShape::Self *)a3,
    (const hkVector4f::Self *)&v125,
    (const hkVector4f::Self *)(a2 + 8),
    (const hkVector4f::Self *)&v126,
    (const hkVector4f::Self *)v119,
    &v120,
    (float *)&v121,
    v123,
    (hkVector4f::Self *)v124);
  v13 = a2[4] * a2[4];
  if ( v119[0] > v13 )
    goto LABEL_4;
g4_m128_raw(v15) =g4_m128_lane<uint32_t>(v126, 0);
g4_m128_raw(v14) = 0;
  *(float *)g4_m128_ptr<int32_t>(v15) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)g4_m128_ptr<int32_t>(v15))
                                  + (float)(g4_m128_lane<float>(v126, 1) *g4_m128_lane<float>(v126, 1)))
                          + (float)(g4_m128_lane<float>(v126, 2) *g4_m128_lane<float>(v126, 2));
  if ( *(float *)g4_m128_ptr<int32_t>(v15) > 0.00000011920929f )
  {
    if ( *(float *)g4_m128_ptr<int32_t>(v15) <= 0.0 )
    {
      v41 = 0.0;
    }
    else
    {
      v37 = _mm_cvtsi128_si32(v15) >> 1;
      v38 = (_mm_cvtsi128_si32(v15) + 2139095040) >> 31;
      v39 = (float)(1.5 * COERCE_FLOAT(v38 & (1597463174 - v37)))
          - (float)((float)(COERCE_FLOAT(v38 & (1597463174 - v37)) * COERCE_FLOAT(v38 & (1597463174 - v37)))
                  * (float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v15)) * COERCE_FLOAT(v38 & (1597463174 - v37))));
      v40 = (float)(1.5 * v39) - (float)((float)(v39 * v39) * (float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v15)) * v39));
      v41 = (float)(1.5 * v40) - (float)((float)(v40 * v40) * (float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v15)) * v40));
    }
    v111 =g4_m128_lane<float>(v126, 2) * v41;
    v114 =g4_m128_lane<float>(v126, 0) * v41;
    v16 =g4_m128_lane<float>(v126, 0) * v41;
    v116 =g4_m128_lane<float>(v126, 1) * v41;
    v108 = *(float *)g4_m128_ptr<int32_t>(v15) * v41;
    v17 =g4_m128_lane<float>(v126, 1) * v41;
    v18 =g4_m128_lane<float>(v126, 2) * v41;
  }
  else
  {
    v111 = 0.0;
    v16 = 0.0;
    v116 = 0.0;
    v17 = 0.0;
    v114 = 0.0;
    v18 = 0.0;
    v108 = 0.0;
  }
  v19 = -(float)((float)((float)(v16 *g4_m128_lane<float>(v125, 0)) + (float)(v17 *g4_m128_lane<float>(v125, 1)))
               + (float)(v18 *g4_m128_lane<float>(v125, 2)));
  v20 = (float)((float)((float)((float)(v114 * v19) +g4_m128_lane<float>(v125, 0)) * (float)((float)(v114 * v19) +g4_m128_lane<float>(v125, 0)))
              + (float)((float)((float)(v116 * v19) +g4_m128_lane<float>(v125, 1)) * (float)((float)(v116 * v19) +g4_m128_lane<float>(v125, 1))))
      + (float)((float)((float)(v19 * v18) +g4_m128_lane<float>(v125, 2)) * (float)((float)(v19 * v18) +g4_m128_lane<float>(v125, 2)));
  if ( v20 == 0.0 )
  {
    v21 = -1.0;
  }
  else
  {
    v35 = (float)(v13 - v119[0]) / v20;
    v36 = fsqrt(v35);
    if ( __builtin_isnan(v36) )
    {
g4_m128_raw(v14) = 0u;
      v110 = sqrtf(v35);
      v36 = v110;
    }
    v21 = v120 - v36;
  }
  if ( v21 >= *(float *)(a4 + 16) )
    goto LABEL_4;
  v99 = a2[8];
  v97 = a2[9];
  v96 = a2[10];
  v94 =g4_m128_lane<float>(a3[1], 0);
  v102 =g4_m128_lane<float>(*(a3), 1);
  v107 =g4_m128_lane<float>(*(a3), 0);
  v93 =g4_m128_lane<float>(a3[1], 1);
  v92 =g4_m128_lane<float>(a3[1], 2);
  v105 = (float)((float)(v116 * v97) + (float)(v114 * v99)) + (float)(v111 * v96);
  v95 =g4_m128_lane<float>(*(a3), 3);
  v100 =g4_m128_lane<float>(*(a3), 2);
  v22 = (float)((float)(v94 - v107) * v21) + v107;
  v91 = (float)((float)(v93 - v102) * v21) + v102;
  v104 = (float)((float)((float)(v116 * v91) + (float)(v114 * v22))
               + (float)(v111 * (float)((float)((float)(v92 - v100) * v21) + v100)))
       - v105;
  if ( v21 >= 0.0
    && (float)((float)((float)((float)(v116 * v91) + (float)(v114 * v22))
                     + (float)(v111 * (float)((float)((float)(v92 - v100) * v21) + v100)))
             - v105) > 0.0
    && v108 > (float)((float)((float)((float)(v116 * v91) + (float)(v114 * v22))
                            + (float)(v111 * (float)((float)((float)(v92 - v100) * v21) + v100)))
                    - v105) )
  {
    v23 = (2130706432 - LODWORD(v108)) & ((LODWORD(v108) ^ (LODWORD(v108) + 2139095040)) >> 31);
    v24 = (float)(2.0 - (float)(v108 * (float)((float)(2.0 - (float)(v108 * *(float *)&v23)) * *(float *)&v23)))
        * (float)((float)(2.0 - (float)(v108 * *(float *)&v23)) * *(float *)&v23);
    v25 = (float)((float)(2.0 - (float)(v108 * v24)) * v24) * v104;
    v117 = v22 - (float)((float)((float)(a2[12] - v99) * v25) + v99);
    v26 = v91 - (float)((float)((float)(a2[13] - v97) * v25) + v97);
    v27 = (float)((float)((float)(v92 - v100) * v21) + v100) - (float)((float)((float)(a2[14] - v96) * v25) + v96);
    v28 = (float)((float)((float)(g4_m128_lane<float>(a3[1], 3) - v95) * v21) + v95)
        - (float)((float)((float)(a2[15] - a2[11]) * v25) + a2[11]);
g4_m128_raw(v29) = LODWORD(v117);
    *(float *)g4_m128_ptr<int32_t>(v29) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v29) * *(float *)g4_m128_ptr<int32_t>(v29)) + (float)(v26 * v26))
                            + (float)(v27 * v27);
    if ( *(float *)g4_m128_ptr<int32_t>(v29) <= 0.0 )
    {
      v34 = 0.0;
    }
    else
    {
      v30 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v29);
      v31 = _mm_cvtsi128_si32(v29) >> 1;
      v32 = (_mm_cvtsi128_si32(v29) + 2139095040) >> 31;
      v33 = (float)(1.5 * COERCE_FLOAT(v32 & (1597463174 - v31)))
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v29)) * COERCE_FLOAT(v32 & (1597463174 - v31)))
                  * (float)(COERCE_FLOAT(v32 & (1597463174 - v31)) * COERCE_FLOAT(v32 & (1597463174 - v31))));
      v34 = (float)(1.5 * (float)((float)(1.5 * v33) - (float)((float)(v30 * v33) * (float)(v33 * v33))))
          - (float)((float)(v30 * (float)((float)(1.5 * v33) - (float)((float)(v30 * v33) * (float)(v33 * v33))))
                  * (float)((float)((float)(1.5 * v33) - (float)((float)(v30 * v33) * (float)(v33 * v33)))
                          * (float)((float)(1.5 * v33) - (float)((float)(v30 * v33) * (float)(v33 * v33)))));
    }
    *(uint32_t *)(a4 + 20) = 2;
    *(float *)a4 = v117 * v34;
    *(float *)(a4 + 4) = v26 * v34;
    *(float *)(a4 + 8) = v27 * v34;
    *(float *)(a4 + 12) = v28 * v34;
    *(float *)(a4 + 16) = v21;
    *(uint32_t *)(a4 + 4 * *(uint32_t *)(a4 + 64) + 32) = -1;
    *a1 = 1;
    goto LABEL_5;
  }
  v42 = a2[13];
  v43 = a2[14];
  if ( v21 < 0.0 )
  {
    v84 = (2130706432 - LODWORD(v108)) & ((LODWORD(v108) ^ (LODWORD(v108) + 2139095040)) >> 31);
    v85 = (float)(2.0 - (float)(v108 * (float)((float)(2.0 - (float)(v108 * *(float *)&v84)) * *(float *)&v84)))
        * (float)((float)(2.0 - (float)(v108 * *(float *)&v84)) * *(float *)&v84);
    v86 = (float)((float)((float)((float)(v114 * v107) + (float)(v116 * v102)) + (float)(v111 * v100)) - v105)
        * (float)((float)(2.0 - (float)(v108 * v85)) * v85);
    v109 = a2[4] * a2[4];
    if ( (float)((float)((float)((float)(v107 - (float)((float)((float)(a2[12] - v99) * v86) + v99))
                               * (float)(v107 - (float)((float)((float)(a2[12] - v99) * v86) + v99)))
                       + (float)((float)(v102 - (float)((float)((float)(v42 - v97) * v86) + v97))
                               * (float)(v102 - (float)((float)((float)(v42 - v97) * v86) + v97))))
               + (float)((float)(v100 - (float)((float)((float)(v43 - v96) * v86) + v96))
                       * (float)(v100 - (float)((float)((float)(v43 - v96) * v86) + v96)))) <= v109 )
    {
      v90 = a2[4];
      goto LABEL_28;
    }
LABEL_4:
    *a1 = 0;
    goto LABEL_5;
  }
  v90 = a2[4];
  v109 = v90 * v90;
LABEL_28:
  if ( v104 <= 0.0 )
  {
    v42 = a2[9];
    v44 = a2[8];
    v43 = a2[10];
    v98 = a2[11];
  }
  else
  {
    v44 = a2[12];
    v98 = a2[15];
  }
g4_m128_raw(v45) = LODWORD(v94);
  *(float *)g4_m128_ptr<int32_t>(v45) = v94 - v44;
  v46 = v107 - v44;
  v47 = v45;
  *(float *)g4_m128_ptr<int32_t>(v47) = *(float *)g4_m128_ptr<int32_t>(v45) - v46;
  v106 = v46;
  v48 = 1.0;
  v103 = v102 - v42;
  v101 = v100 - v43;
  v49 = (float)(v93 - v42) - v103;
  v115 = v49;
  v118 = (float)(v92 - v43) - v101;
  if ( __builtin_isnan(v49) || (v50 = 2, v49 != 0.0) )
    v50 = 0;
  v51 = (*(float *)g4_m128_ptr<int32_t>(v47) == 0.0) | v50;
  if ( v118 == 0.0 )
  {
    v52 = 12;
    v53 = 4;
  }
  else
  {
    v52 = 8;
    v53 = 0;
  }
  if ( 1.0 != 0.0 )
    v52 = v53;
  v54 = v51 | v52;
  if ( ((v51 | (uint8_t)v52) & 1) != 0 )
  {
    v112 = *(float *)g4_m128_ptr<int32_t>(v14);
    v47 = v14;
  }
  else
  {
    v112 = *(float *)g4_m128_ptr<int32_t>(v47) * *(float *)g4_m128_ptr<int32_t>(v47);
  }
  if ( (v54 & 2) != 0 )
  {
    v115 = 0.0;
    v55 = 0.0;
  }
  else
  {
    v55 = v49 * v49;
  }
  if ( (v54 & 4) != 0 )
  {
    v118 = 0.0;
    v56 = 0.0;
  }
  else
  {
    v56 = v118 * v118;
  }
  if ( (v54 & 8) != 0 )
    v48 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
  v113 = (float)(v55 + v112) + v56;
  v57 = -(float)((float)((float)((float)(v106 - 0.0) * *(float *)g4_m128_ptr<int32_t>(v47)) + (float)(v115 * (float)(v103 - 0.0)))
               + (float)(v118 * (float)(v101 - 0.0)));
  if ( v113 == 0.0 )
  {
g4_m128_raw(v58) = 0xFF7FFFEE;
    if ( v57 >= 0.0 )
g4_m128_raw(v58) = 0x7F7FFFEEu;
  }
  else
  {
    v87 = _mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v113)));
g4_m128_raw(v58) = 0x40000000u;
    v88 = (2130706432 - v87) & ((v87 ^ (v87 + 2139095040)) >> 31);
    v89 = (float)(2.0 - (float)(v113 * (float)((float)(2.0 - (float)(v113 * *(float *)&v88)) * *(float *)&v88)))
        * (float)((float)(2.0 - (float)(v113 * *(float *)&v88)) * *(float *)&v88);
    *(float *)g4_m128_ptr<int32_t>(v58) = (float)((float)(2.0 - (float)(v113 * v89)) * v89) * v57;
  }
  v59 = v58;
  *(float *)g4_m128_ptr<int32_t>(v59) = (float)((float)((float)((float)((float)((float)(v106 - 0.0)
                                                                  + (float)(*(float *)g4_m128_ptr<int32_t>(v58)
                                                                          * *(float *)g4_m128_ptr<int32_t>(v47)))
                                                          * (float)((float)(v106 - 0.0)
                                                                  + (float)(*(float *)g4_m128_ptr<int32_t>(v58)
                                                                          * *(float *)g4_m128_ptr<int32_t>(v47))))
                                                  + (float)((float)((float)(v103 - 0.0)
                                                                  + (float)(v115 * *(float *)g4_m128_ptr<int32_t>(v58)))
                                                          * (float)((float)(v103 - 0.0)
                                                                  + (float)(v115 * *(float *)g4_m128_ptr<int32_t>(v58)))))
                                          + (float)((float)((float)(v101 - 0.0) + (float)(*(float *)g4_m128_ptr<int32_t>(v58) * v118))
                                                  * (float)((float)(v101 - 0.0) + (float)(*(float *)g4_m128_ptr<int32_t>(v58) * v118))))
                                  - v109)
                          * (float)-v113;
  if ( *(float *)g4_m128_ptr<int32_t>(v59) < 0.0 )
    goto LABEL_51;
  v60 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v59) > 0.0 )
  {
    v61 = _mm_cvtsi128_si32(v59) >> 1;
    v62 = (_mm_cvtsi128_si32(v59) + 2139095040) >> 31;
    v63 = (float)(1.5 * COERCE_FLOAT(v62 & (1597463174 - v61)))
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v59)) * COERCE_FLOAT(v62 & (1597463174 - v61)))
                * (float)(COERCE_FLOAT(v62 & (1597463174 - v61)) * COERCE_FLOAT(v62 & (1597463174 - v61))));
    v64 = (float)(1.5 * v63) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v59)) * v63) * (float)(v63 * v63));
    v60 = (float)((float)(1.5 * v64)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v59)) * v64) * (float)(v64 * v64)))
        * *(float *)g4_m128_ptr<int32_t>(v59);
  }
  v65 = v57 - v60;
  if ( v65 >= (float)(*(float *)(a4 + 16) * v113) || v65 < 0.0 )
  {
LABEL_51:
    v66 = 0;
  }
  else
  {
    v67 = _mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v113)));
    v68 = (2130706432 - v67) & ((v67 ^ (v67 + 2139095040)) >> 31);
    v69 = (float)(2.0 - (float)(v113 * (float)((float)(2.0 - (float)(v113 * *(float *)&v68)) * *(float *)&v68)))
        * (float)((float)(2.0 - (float)(v113 * *(float *)&v68)) * *(float *)&v68);
    v71 = v47;
    v70 = (float)((float)(2.0 - (float)(v113 * v69)) * v69) * v65;
    *(float *)g4_m128_ptr<int32_t>(v71) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v47) * v70) + v106) - 0.0;
    v72 = (float)((float)(v115 * v70) + v103) - 0.0;
    v73 = (float)((float)(v118 * v70) + v101) - 0.0;
    v74 = v71;
    *(float *)g4_m128_ptr<int32_t>(v74) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v71) * *(float *)g4_m128_ptr<int32_t>(v71)) + (float)(v72 * v72))
                            + (float)(v73 * v73);
    if ( *(float *)g4_m128_ptr<int32_t>(v74) <= 0.0 )
    {
      v83 = 0.0;
    }
    else
    {
      v75 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v74);
      v76 = _mm_cvtsi128_si32(v74) >> 1;
      v77 = (_mm_cvtsi128_si32(v74) + 2139095040) >> 31;
      v78 = (float)(1.5 * COERCE_FLOAT(v77 & (1597463174 - v76)))
          - (float)((float)(COERCE_FLOAT(v77 & (1597463174 - v76)) * COERCE_FLOAT(v77 & (1597463174 - v76)))
                  * (float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v74)) * COERCE_FLOAT(v77 & (1597463174 - v76))));
      v79 = (float)(1.5 * v78) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v74)) * v78) * (float)(v78 * v78));
      v80 = 1.5 * v79;
      v81 = (float)(v79 * v79) * (float)(v75 * v79);
      v82 = v80;
      v73 = (float)((float)(v118 * v70) + v101) - 0.0;
      v83 = v82 - v81;
    }
    *(float *)(a4 + 16) = v70;
    *(float *)a4 = *(float *)g4_m128_ptr<int32_t>(v71) * v83;
    *(float *)(a4 + 4) = v72 * v83;
    *(float *)(a4 + 8) = v73 * v83;
    *(float *)(a4 + 12) = (float)((float)((float)(v95 - v98) + (float)(v48 * v70)) - v90) * v83;
    *(uint32_t *)(a4 + 4 * *(uint32_t *)(a4 + 64) + 32) = -1;
    *(uint32_t *)(a4 + 20) = v104 > 0.0;
    v66 = 1;
  }
  *a1 = v66;
LABEL_5:
  v8 = *(uint32_t **)(v5 + 4);
  if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(v5 + 12) )
  {
    *v8 = (uint32_t)(uintptr_t)("Et");
    v9 = __rdtsc();
    v8[1] = v9;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleCapsuleAgent::cleanup  (binary VA: 0x16b4bc0)
// Original: hkpCapsuleCapsuleAgent::cleanup
// ----------------------------------------------------------------------------
int hkpCapsuleCapsuleAgent::cleanup(hkpCapsuleCapsuleAgent::Self *self, hkpConstraintOwner::Self *a2)
{
  uint16_t *v2;
  int result;

  v2 = (uint16_t *)self;
  do
  {
    result = v2[6];
    if ( (uint16_t)result != 0xFFFF )
      result = (*(int (**)(uint32_t, int, hkpConstraintOwner::Self *, uint32_t))(**((uint32_t **)self + 2) + 28))(
                 *((uint32_t *)self + 2),
                 result,
                 a2,
                 *((uint32_t *)self + 2));
    ++v2;
  }
  while ( v2 != (uint16_t *)((char *)self + 6) );
  if ( self != nullptr )
    return G4_VCALL<int>(self, 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleCapsuleAgent::Destroy  (binary VA: 0x16b4c20)
// Original: hkpCapsuleCapsuleAgent::~hkpCapsuleCapsuleAgent
// ----------------------------------------------------------------------------
void hkpCapsuleCapsuleAgent::Destroy(hkpCapsuleCapsuleAgent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleCapsuleAgent::Destroy_ea16b4c40  (binary VA: 0x16b4c40)
// Original: hkpCapsuleCapsuleAgent::~hkpCapsuleCapsuleAgent
// ----------------------------------------------------------------------------
void hkpCapsuleCapsuleAgent::Destroy_ea16b4c40(hkpCapsuleCapsuleAgent::Self *self)
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
// Function: hkpCapsuleCapsuleAgent::createCapsuleCapsuleAgent  (binary VA: 0x16b4ca0)
// Original: hkpCapsuleCapsuleAgent::createCapsuleCapsuleAgent
// ----------------------------------------------------------------------------
int hkpCapsuleCapsuleAgent::createCapsuleCapsuleAgent(int a1, int a2, int a3, int a4)
{
  int address;
  int result;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  result = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
             *(uint32_t *)(*(uint32_t *)address + 44),
             20);
  *(uint32_t *)(result + 4) = -65535;
  *(uint32_t *)(result + 8) = a4;
  *(uint16_t *)(result + 12) = -1;
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_209A3A8);
  *(uint16_t *)(result + 14) = -1;
  *(uint16_t *)(result + 16) = -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleCapsuleAgent::processCollision  (binary VA: 0x16b4d10)
// Original: hkpCapsuleCapsuleAgent::processCollision
// ----------------------------------------------------------------------------
int hkpCapsuleCapsuleAgent::processCollision(int a1, int *a2, int *a3, int a4, int *a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  int v10;
  float *v11;
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float *v15;
  float *v16;
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  int v20;
  float *v21;
  float v22; // xmm6_4
  float v23; // xmm5_4
  float v24; // xmm4_4
  float *v25;
  float *v26;
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  int v30;
  float *v31;
  int v32;
  uint64_t v33; // rax
  int v34;
  uint32_t *v35;
  int v36;
  int16_t v37;
  typedef hkContactPoint::Self *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef int *_g4_t_v41;
  typedef float _g4_t_v42;
  typedef int _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef uint64_t _g4_t_v70[4];
  typedef g4_int128_t _g4_t_v71[2];
  typedef float _g4_t_v72[7];
  typedef uint32_t _g4_t_v73[8];
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef int _g4_t_v76;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (4u + sizeof(_g4_t_v39)) > _g4_s0 ? (4u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v40)) > _g4_s1 ? (28u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v41)) > _g4_s2 ? (32u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v42)) > _g4_s3 ? (36u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v43)) > _g4_s4 ? (40u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v44)) > _g4_s5 ? (44u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v45)) > _g4_s6 ? (44u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v46)) > _g4_s7 ? (48u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v47)) > _g4_s8 ? (48u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v48)) > _g4_s9 ? (52u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v49)) > _g4_s10 ? (52u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v50)) > _g4_s11 ? (56u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v51)) > _g4_s12 ? (56u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v52)) > _g4_s13 ? (60u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v53)) > _g4_s14 ? (60u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v54)) > _g4_s15 ? (64u + sizeof(_g4_t_v54)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v55)) > _g4_s16 ? (64u + sizeof(_g4_t_v55)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v56)) > _g4_s17 ? (68u + sizeof(_g4_t_v56)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v57)) > _g4_s18 ? (68u + sizeof(_g4_t_v57)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v58)) > _g4_s19 ? (72u + sizeof(_g4_t_v58)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v59)) > _g4_s20 ? (72u + sizeof(_g4_t_v59)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v60)) > _g4_s21 ? (76u + sizeof(_g4_t_v60)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v61)) > _g4_s22 ? (76u + sizeof(_g4_t_v61)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v62)) > _g4_s23 ? (80u + sizeof(_g4_t_v62)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_v63)) > _g4_s24 ? (80u + sizeof(_g4_t_v63)) : _g4_s24,
    _g4_s26 = (84u + sizeof(_g4_t_v64)) > _g4_s25 ? (84u + sizeof(_g4_t_v64)) : _g4_s25,
    _g4_s27 = (84u + sizeof(_g4_t_v65)) > _g4_s26 ? (84u + sizeof(_g4_t_v65)) : _g4_s26,
    _g4_s28 = (88u + sizeof(_g4_t_v66)) > _g4_s27 ? (88u + sizeof(_g4_t_v66)) : _g4_s27,
    _g4_s29 = (88u + sizeof(_g4_t_v67)) > _g4_s28 ? (88u + sizeof(_g4_t_v67)) : _g4_s28,
    _g4_s30 = (92u + sizeof(_g4_t_v68)) > _g4_s29 ? (92u + sizeof(_g4_t_v68)) : _g4_s29,
    _g4_s31 = (92u + sizeof(_g4_t_v69)) > _g4_s30 ? (92u + sizeof(_g4_t_v69)) : _g4_s30,
    _g4_s32 = (96u + sizeof(_g4_t_v70)) > _g4_s31 ? (96u + sizeof(_g4_t_v70)) : _g4_s31,
    _g4_s33 = (128u + sizeof(_g4_t_v71)) > _g4_s32 ? (128u + sizeof(_g4_t_v71)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v72)) > _g4_s33 ? (160u + sizeof(_g4_t_v72)) : _g4_s33,
    _g4_s35 = (188u + sizeof(_g4_t_v73)) > _g4_s34 ? (188u + sizeof(_g4_t_v73)) : _g4_s34,
    _g4_s36 = (220u + sizeof(_g4_t_v74)) > _g4_s35 ? (220u + sizeof(_g4_t_v74)) : _g4_s35,
    _g4_s37 = (252u + sizeof(_g4_t_v75)) > _g4_s36 ? (252u + sizeof(_g4_t_v75)) : _g4_s36,
    _g4_s38 = (256u + sizeof(_g4_t_v76)) > _g4_s37 ? (256u + sizeof(_g4_t_v76)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 4u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 52u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 56u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 56u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 60u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 64u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 68u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 68u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 72u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 72u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 76u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 76u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 80u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 80u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 84u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 84u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 88u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 88u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 92u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 92u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 96u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 128u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 160u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 188u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 220u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 252u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 256u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v41 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtCapsCaps");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v74 = *(float *)(a4 + 12);
  v9 = 1;
  v75 = v74;
  *(float *)v73 = v74;
  v43 = *a3;
  v42 = v74;
  v40 = *a2;
  v10 = *a2 + 32;
  v11 = (float *)a2[2];
  v44 = *v11;
  v46 = v11[1];
  v68 = v11[2];
  v64 = v11[3];
  v62 = v11[4];
  v66 = v11[5];
  v60 = v11[6];
  v58 = v11[7];
  v56 = v11[8];
  v54 = v11[9];
  v52 = v11[10];
  v50 = v11[11];
  v48 = v11[12];
  v12 = v11[13];
  v13 = v11[14];
  v14 = v11[15];
  while ( 1 )
  {
    v15 = (float *)(v10 + 16 * v9);
    v16 = (float *)&v70[2 * v9];
    v17 = *v15;
    v18 = v15[1];
    v19 = v15[2];
    *v16 = (float)((float)((float)(v44 * *v15) + (float)(v62 * v18)) + (float)(v56 * v19)) + v48;
    v16[1] = (float)((float)((float)(v46 * v17) + (float)(v66 * v18)) + (float)(v54 * v19)) + v12;
    v16[2] = (float)((float)((float)(v68 * v17) + (float)(v60 * v18)) + (float)(v52 * v19)) + v13;
    v16[3] = (float)((float)((float)(v17 * v64) + (float)(v18 * v58)) + (float)(v19 * v50)) + v14;
    if ( v9 != 1 )
      break;
    LOBYTE(v9) = 0;
  }
  v20 = 1;
  v21 = (float *)a3[2];
  v69 = *v21;
  v67 = v21[1];
  v65 = v21[2];
  v63 = v21[3];
  v61 = v21[4];
  v59 = v21[5];
  v57 = v21[6];
  v55 = v21[7];
  v53 = v21[8];
  v51 = v21[9];
  v49 = v21[10];
  v47 = v21[11];
  v45 = v21[12];
  v22 = v21[13];
  v23 = v21[14];
  v24 = v21[15];
  while ( 1 )
  {
    v25 = (float *)(v43 + 32 + 16 * v20);
    v26 = (float *)&v71[v20];
    v27 = *v25;
    v28 = v25[1];
    v29 = v25[2];
    *v26 = (float)((float)((float)(v69 * *v25) + (float)(v61 * v28)) + (float)(v53 * v29)) + v45;
    v26[1] = (float)((float)((float)(v67 * v27) + (float)(v59 * v28)) + (float)(v51 * v29)) + v22;
    v26[2] = (float)((float)((float)(v65 * v27) + (float)(v57 * v28)) + (float)(v49 * v29)) + v23;
    v26[3] = (float)((float)((float)(v27 * v63) + (float)(v28 * v55)) + (float)(v29 * v47)) + v24;
    if ( v20 != 1 )
      break;
    LOBYTE(v20) = 0;
  }
  hkLineSegmentUtil::capsuleCapsuleManifold(
    (hkLineSegmentUtil::Self *)v70,
    *(const hkVector4f::Self **)(v40 + 16),
    COERCE_FLOAT(v71),
    *(const hkVector4f::Self **)(v43 + 16),
    COERCE_FLOAT(v72),
    v39);
  v30 = a1;
  v31 = v72;
  do
  {
    if ( v42 <= v31[7] )
    {
      v36 = *(uint16_t *)(v30 + 12);
      if ( (uint16_t)v36 != 0xFFFF )
      {
        (*(void (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 8) + 28))(*(uint32_t *)(a1 + 8), v36, a5[1]);
        *(uint16_t *)(v30 + 12) = -1;
      }
    }
    else if ( *(uint16_t *)(v30 + 12) != 0xFFFF
           || (v37 = (*(int (**)(uint32_t, int *, int *, int, int *, uint32_t, float *))(**(uint32_t **)(a1 + 8) + 20))(
                       *(uint32_t *)(a1 + 8),
                       a2,
                       a3,
                       a4,
                       a5,
                       0,
                       v31),
               *(uint16_t *)(v30 + 12) = v37,
               v37 != -1) )
    {
      v32 = *a5;
      *a5 += 48;
      *(float *)v32 = *v31;
      *(float *)(v32 + 4) = v31[1];
      *(float *)(v32 + 8) = v31[2];
      *(float *)(v32 + 12) = v31[3];
      *(float *)(v32 + 16) = *(float *)((char *)&v72[4]  + ((uintptr_t)((char *)v31) - (uintptr_t)(char *)(v72)));
      *(float *)(v32 + 20) = *(float *)((char *)&v72[5]  + ((uintptr_t)((char *)v31) - (uintptr_t)(char *)(v72)));
      *(float *)(v32 + 24) = *(float *)((char *)&v72[6]  + ((uintptr_t)((char *)v31) - (uintptr_t)(char *)(v72)));
      *(uint32_t *)(v32 + 28) = *(uint32_t *)((char *)v73  + ((uintptr_t)((char *)v31) - (uintptr_t)(char *)(v72)));
      *(uint32_t *)(v32 + 32) = *(uint16_t *)(v30 + 12);
    }
    v31 += 8;
    v30 += 2;
  }
  while ( v31 != (float *)&v76 );
  LODWORD(v33) = (uint32_t)(uintptr_t)(v41);
  v34 = *v41;
  v35 = *(uint32_t **)(*v41 + 4);
  if ( (unsigned int)(uintptr_t)(v35) < *(uint32_t *)(*v41 + 12) )
  {
    *v35 = (uint32_t)(uintptr_t)("Et");
    v33 = __rdtsc();
    v35[1] = v33;
    *(uint32_t *)(v34 + 4) = (uint32_t)(uintptr_t)(v35 + 3);
  }
  return v33;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleCapsuleAgent::getClosestPoints  (binary VA: 0x16b5250)
// Original: hkpCapsuleCapsuleAgent::getClosestPoints
// ----------------------------------------------------------------------------
int hkpCapsuleCapsuleAgent::getClosestPoints(int a1, int *a2, int *a3, int a4, int *a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  float *v10;
  int v11;
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float *v15;
  float *v16;
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  int v20;
  float *v21;
  float v22; // xmm6_4
  float v23; // xmm5_4
  float v24; // xmm4_4
  float *v25;
  float *v26;
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  uint64_t v30; // rax
  int v31;
  uint32_t *v32;
  int v33;
  typedef int *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int *_g4_t_v38;
  typedef int *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef int *_g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef uint32_t _g4_t_v68[5];
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73[8];
  typedef float _g4_t_v74[22];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v35)) > _g4_s0 ? (0u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v36)) > _g4_s1 ? (8u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v37)) > _g4_s2 ? (12u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v38)) > _g4_s3 ? (16u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v39)) > _g4_s4 ? (20u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v40)) > _g4_s5 ? (24u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v41)) > _g4_s6 ? (28u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v42)) > _g4_s7 ? (32u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v43)) > _g4_s8 ? (32u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v44)) > _g4_s9 ? (36u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v45)) > _g4_s10 ? (36u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v46)) > _g4_s11 ? (40u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v47)) > _g4_s12 ? (40u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v48)) > _g4_s13 ? (44u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v49)) > _g4_s14 ? (44u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v50)) > _g4_s15 ? (48u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v51)) > _g4_s16 ? (48u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v52)) > _g4_s17 ? (52u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v53)) > _g4_s18 ? (52u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v54)) > _g4_s19 ? (56u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v55)) > _g4_s20 ? (56u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v56)) > _g4_s21 ? (60u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v57)) > _g4_s22 ? (60u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v58)) > _g4_s23 ? (64u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v59)) > _g4_s24 ? (64u + sizeof(_g4_t_v59)) : _g4_s24,
    _g4_s26 = (68u + sizeof(_g4_t_v60)) > _g4_s25 ? (68u + sizeof(_g4_t_v60)) : _g4_s25,
    _g4_s27 = (68u + sizeof(_g4_t_v61)) > _g4_s26 ? (68u + sizeof(_g4_t_v61)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v62)) > _g4_s27 ? (72u + sizeof(_g4_t_v62)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v63)) > _g4_s28 ? (72u + sizeof(_g4_t_v63)) : _g4_s28,
    _g4_s30 = (76u + sizeof(_g4_t_v64)) > _g4_s29 ? (76u + sizeof(_g4_t_v64)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v65)) > _g4_s30 ? (76u + sizeof(_g4_t_v65)) : _g4_s30,
    _g4_s32 = (80u + sizeof(_g4_t_v66)) > _g4_s31 ? (80u + sizeof(_g4_t_v66)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v67)) > _g4_s32 ? (80u + sizeof(_g4_t_v67)) : _g4_s32,
    _g4_s34 = (84u + sizeof(_g4_t_v68)) > _g4_s33 ? (84u + sizeof(_g4_t_v68)) : _g4_s33,
    _g4_s35 = (104u + sizeof(_g4_t_v69)) > _g4_s34 ? (104u + sizeof(_g4_t_v69)) : _g4_s34,
    _g4_s36 = (108u + sizeof(_g4_t_v70)) > _g4_s35 ? (108u + sizeof(_g4_t_v70)) : _g4_s35,
    _g4_s37 = (112u + sizeof(_g4_t_v71)) > _g4_s36 ? (112u + sizeof(_g4_t_v71)) : _g4_s36,
    _g4_s38 = (116u + sizeof(_g4_t_v72)) > _g4_s37 ? (116u + sizeof(_g4_t_v72)) : _g4_s37,
    _g4_s39 = (120u + sizeof(_g4_t_v73)) > _g4_s38 ? (120u + sizeof(_g4_t_v73)) : _g4_s38,
    _g4_s40 = (152u + sizeof(_g4_t_v74)) > _g4_s39 ? (152u + sizeof(_g4_t_v74)) : _g4_s39
  };
  alignas(16) uint8_t _g4_sf[_g4_s40];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 44u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 44u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 48u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 48u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 52u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 52u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 56u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 56u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 60u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 64u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 64u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 68u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 68u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 72u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 72u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 76u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 76u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 80u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 80u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 84u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 104u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 108u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 112u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 116u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 120u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 152u);

  LODWORD(v74[18]) = (uint32_t)(uintptr_t)(&a1);
  v39 = a2;
  v41 = a3;
  v36 = a4;
  v35 = a5;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v38 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtCapsCaps");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v9 = 1;
  v10 = (float *)v39[2];
  v37 = *v39;
  v40 = *v41;
  v42 = *v10;
  v11 = *v39 + 32;
  v44 = v10[1];
  v66 = v10[2];
  v64 = v10[3];
  v62 = v10[4];
  v60 = v10[5];
  v58 = v10[6];
  v56 = v10[7];
  v54 = v10[8];
  v52 = v10[9];
  v50 = v10[10];
  v48 = v10[11];
  v46 = v10[12];
  v12 = v10[13];
  v13 = v10[14];
  v14 = v10[15];
  while ( 1 )
  {
    v15 = (float *)(v11 + 16 * v9);
    v16 = &v73[4 * v9];
    v17 = *v15;
    v18 = v15[1];
    v19 = v15[2];
    *v16 = (float)((float)((float)(v42 * *v15) + (float)(v62 * v18)) + (float)(v54 * v19)) + v46;
    v16[1] = (float)((float)((float)(v44 * v17) + (float)(v60 * v18)) + (float)(v52 * v19)) + v12;
    v16[2] = (float)((float)((float)(v66 * v17) + (float)(v58 * v18)) + (float)(v50 * v19)) + v13;
    v16[3] = (float)((float)((float)(v17 * v64) + (float)(v18 * v56)) + (float)(v19 * v48)) + v14;
    if ( v9 != 1 )
      break;
    LOBYTE(v9) = 0;
  }
  v20 = 1;
  v21 = (float *)v41[2];
  v61 = *v21;
  v59 = v21[1];
  v57 = v21[2];
  v55 = v21[3];
  v53 = v21[4];
  v51 = v21[5];
  v49 = v21[6];
  v47 = v21[7];
  v45 = v21[8];
  v43 = v21[9];
  v65 = v21[10];
  v63 = v21[11];
  v67 = v21[12];
  v22 = v21[13];
  v23 = v21[14];
  v24 = v21[15];
  while ( 1 )
  {
    v25 = (float *)(v40 + 32 + 16 * v20);
    v26 = &v74[4 * v20];
    v27 = *v25;
    v28 = v25[1];
    v29 = v25[2];
    *v26 = (float)((float)((float)(v61 * *v25) + (float)(v53 * v28)) + (float)(v45 * v29)) + v67;
    v26[1] = (float)((float)((float)(v59 * v27) + (float)(v51 * v28)) + (float)(v43 * v29)) + v22;
    v26[2] = (float)((float)((float)(v57 * v27) + (float)(v49 * v28)) + (float)(v65 * v29)) + v23;
    v26[3] = (float)((float)((float)(v27 * v55) + (float)(v28 * v47)) + (float)(v29 * v63)) + v24;
    if ( v20 != 1 )
      break;
    LOBYTE(v20) = 0;
  }
  hkCollideCapsuleUtilClostestPointCapsVsCaps(
    (const hkVector4f::Self *)v68,
    v73,
    (const hkVector4f::Self *)(v37 + 16),
    v74,
    COERCE_FLOAT(v40 + 16),
    *(hkContactPoint::Self **)(v36 + 12));
  if ( v68[0] == 0 )
  {
    v74[0] = *(float *)&v68[1];
    v74[1] = *(float *)&v68[2];
    v74[2] = *(float *)&v68[3];
    v74[3] = *(float *)&v68[4];
    v74[4] = v69;
    v74[8] = v69;
    v74[7] = v72;
    LODWORD(v74[12]) = (uint32_t)(uintptr_t)(v39);
    LODWORD(v74[13]) = (uint32_t)(uintptr_t)(v41);
    v74[11] = v72;
    v33 = *v35;
    v74[5] = v70;
    v74[6] = v71;
    v74[9] = v70;
    v74[10] = v71;
    (*(void (**)(int *, float *))(v33 + 8))(v35, v74);
  }
  LODWORD(v30) = (uint32_t)(uintptr_t)(v38);
  v31 = *v38;
  v32 = *(uint32_t **)(*v38 + 4);
  if ( (unsigned int)(uintptr_t)(v32) < *(uint32_t *)(*v38 + 12) )
  {
    *v32 = (uint32_t)(uintptr_t)("Et");
    v30 = __rdtsc();
    v32[1] = v30;
    *(uint32_t *)(v31 + 4) = (uint32_t)(uintptr_t)(v32 + 3);
  }
  return v30;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleCapsuleAgent::staticGetClosestPoints  (binary VA: 0x16b5780)
// Original: hkpCapsuleCapsuleAgent::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpCapsuleCapsuleAgent::staticGetClosestPoints(int *a1, int *a2, int a3, int *a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  float *v9;
  int v10;
  float v11; // xmm6_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  float *v14;
  float *v15;
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  int v19;
  float *v20;
  float v21; // xmm6_4
  float v22; // xmm5_4
  float v23; // xmm4_4
  float *v24;
  float *v25;
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  uint64_t v29; // rax
  int v30;
  uint32_t *v31;
  int v32;
  typedef int *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int *_g4_t_v37;
  typedef int *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int *_g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef uint32_t _g4_t_v67[5];
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72[8];
  typedef float _g4_t_v73[22];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v34)) > _g4_s0 ? (0u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v35)) > _g4_s1 ? (8u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v36)) > _g4_s2 ? (12u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v37)) > _g4_s3 ? (16u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v38)) > _g4_s4 ? (20u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v39)) > _g4_s5 ? (24u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v40)) > _g4_s6 ? (28u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v41)) > _g4_s7 ? (32u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v42)) > _g4_s8 ? (32u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v43)) > _g4_s9 ? (36u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v44)) > _g4_s10 ? (36u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v45)) > _g4_s11 ? (40u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v46)) > _g4_s12 ? (40u + sizeof(_g4_t_v46)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v47)) > _g4_s13 ? (44u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v48)) > _g4_s14 ? (44u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v49)) > _g4_s15 ? (48u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v50)) > _g4_s16 ? (48u + sizeof(_g4_t_v50)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v51)) > _g4_s17 ? (52u + sizeof(_g4_t_v51)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v52)) > _g4_s18 ? (52u + sizeof(_g4_t_v52)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v53)) > _g4_s19 ? (56u + sizeof(_g4_t_v53)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v54)) > _g4_s20 ? (56u + sizeof(_g4_t_v54)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v55)) > _g4_s21 ? (60u + sizeof(_g4_t_v55)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v56)) > _g4_s22 ? (60u + sizeof(_g4_t_v56)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v57)) > _g4_s23 ? (64u + sizeof(_g4_t_v57)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v58)) > _g4_s24 ? (64u + sizeof(_g4_t_v58)) : _g4_s24,
    _g4_s26 = (68u + sizeof(_g4_t_v59)) > _g4_s25 ? (68u + sizeof(_g4_t_v59)) : _g4_s25,
    _g4_s27 = (68u + sizeof(_g4_t_v60)) > _g4_s26 ? (68u + sizeof(_g4_t_v60)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v61)) > _g4_s27 ? (72u + sizeof(_g4_t_v61)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v62)) > _g4_s28 ? (72u + sizeof(_g4_t_v62)) : _g4_s28,
    _g4_s30 = (76u + sizeof(_g4_t_v63)) > _g4_s29 ? (76u + sizeof(_g4_t_v63)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v64)) > _g4_s30 ? (76u + sizeof(_g4_t_v64)) : _g4_s30,
    _g4_s32 = (80u + sizeof(_g4_t_v65)) > _g4_s31 ? (80u + sizeof(_g4_t_v65)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v66)) > _g4_s32 ? (80u + sizeof(_g4_t_v66)) : _g4_s32,
    _g4_s34 = (84u + sizeof(_g4_t_v67)) > _g4_s33 ? (84u + sizeof(_g4_t_v67)) : _g4_s33,
    _g4_s35 = (104u + sizeof(_g4_t_v68)) > _g4_s34 ? (104u + sizeof(_g4_t_v68)) : _g4_s34,
    _g4_s36 = (108u + sizeof(_g4_t_v69)) > _g4_s35 ? (108u + sizeof(_g4_t_v69)) : _g4_s35,
    _g4_s37 = (112u + sizeof(_g4_t_v70)) > _g4_s36 ? (112u + sizeof(_g4_t_v70)) : _g4_s36,
    _g4_s38 = (116u + sizeof(_g4_t_v71)) > _g4_s37 ? (116u + sizeof(_g4_t_v71)) : _g4_s37,
    _g4_s39 = (120u + sizeof(_g4_t_v72)) > _g4_s38 ? (120u + sizeof(_g4_t_v72)) : _g4_s38,
    _g4_s40 = (152u + sizeof(_g4_t_v73)) > _g4_s39 ? (152u + sizeof(_g4_t_v73)) : _g4_s39
  };
  alignas(16) uint8_t _g4_sf[_g4_s40];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 44u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 44u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 48u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 52u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 52u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 56u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 56u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 60u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 64u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 64u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 68u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 68u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 72u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 72u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 76u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 76u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 80u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 80u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 84u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 104u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 108u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 112u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 116u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 120u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 152u);

  LODWORD(v73[18]) = (uint32_t)(uintptr_t)(&a1);
  v38 = a1;
  v40 = a2;
  v35 = a3;
  v34 = a4;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v37 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtCapsCaps");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  v8 = 1;
  v9 = (float *)v38[2];
  v36 = *v38;
  v39 = *v40;
  v41 = *v9;
  v10 = *v38 + 32;
  v43 = v9[1];
  v65 = v9[2];
  v63 = v9[3];
  v61 = v9[4];
  v59 = v9[5];
  v57 = v9[6];
  v55 = v9[7];
  v53 = v9[8];
  v51 = v9[9];
  v49 = v9[10];
  v47 = v9[11];
  v45 = v9[12];
  v11 = v9[13];
  v12 = v9[14];
  v13 = v9[15];
  while ( 1 )
  {
    v14 = (float *)(v10 + 16 * v8);
    v15 = &v72[4 * v8];
    v16 = *v14;
    v17 = v14[1];
    v18 = v14[2];
    *v15 = (float)((float)((float)(v41 * *v14) + (float)(v61 * v17)) + (float)(v53 * v18)) + v45;
    v15[1] = (float)((float)((float)(v43 * v16) + (float)(v59 * v17)) + (float)(v51 * v18)) + v11;
    v15[2] = (float)((float)((float)(v65 * v16) + (float)(v57 * v17)) + (float)(v49 * v18)) + v12;
    v15[3] = (float)((float)((float)(v16 * v63) + (float)(v17 * v55)) + (float)(v18 * v47)) + v13;
    if ( v8 != 1 )
      break;
    LOBYTE(v8) = 0;
  }
  v19 = 1;
  v20 = (float *)v40[2];
  v60 = *v20;
  v58 = v20[1];
  v56 = v20[2];
  v54 = v20[3];
  v52 = v20[4];
  v50 = v20[5];
  v48 = v20[6];
  v46 = v20[7];
  v44 = v20[8];
  v42 = v20[9];
  v64 = v20[10];
  v62 = v20[11];
  v66 = v20[12];
  v21 = v20[13];
  v22 = v20[14];
  v23 = v20[15];
  while ( 1 )
  {
    v24 = (float *)(v39 + 32 + 16 * v19);
    v25 = &v73[4 * v19];
    v26 = *v24;
    v27 = v24[1];
    v28 = v24[2];
    *v25 = (float)((float)((float)(v60 * *v24) + (float)(v52 * v27)) + (float)(v44 * v28)) + v66;
    v25[1] = (float)((float)((float)(v58 * v26) + (float)(v50 * v27)) + (float)(v42 * v28)) + v21;
    v25[2] = (float)((float)((float)(v56 * v26) + (float)(v48 * v27)) + (float)(v64 * v28)) + v22;
    v25[3] = (float)((float)((float)(v26 * v54) + (float)(v27 * v46)) + (float)(v28 * v62)) + v23;
    if ( v19 != 1 )
      break;
    LOBYTE(v19) = 0;
  }
  hkCollideCapsuleUtilClostestPointCapsVsCaps(
    (const hkVector4f::Self *)v67,
    v72,
    (const hkVector4f::Self *)(v36 + 16),
    v73,
    COERCE_FLOAT(v39 + 16),
    *(hkContactPoint::Self **)(v35 + 12));
  if ( v67[0] == 0 )
  {
    v73[0] = *(float *)&v67[1];
    v73[1] = *(float *)&v67[2];
    v73[2] = *(float *)&v67[3];
    v73[3] = *(float *)&v67[4];
    v73[4] = v68;
    v73[8] = v68;
    v73[7] = v71;
    LODWORD(v73[12]) = (uint32_t)(uintptr_t)(v38);
    LODWORD(v73[13]) = (uint32_t)(uintptr_t)(v40);
    v73[11] = v71;
    v32 = *v34;
    v73[5] = v69;
    v73[6] = v70;
    v73[9] = v69;
    v73[10] = v70;
    (*(void (**)(int *, float *))(v32 + 8))(v34, v73);
  }
  LODWORD(v29) = (uint32_t)(uintptr_t)(v37);
  v30 = *v37;
  v31 = *(uint32_t **)(*v37 + 4);
  if ( (unsigned int)(uintptr_t)(v31) < *(uint32_t *)(*v37 + 12) )
  {
    *v31 = (uint32_t)(uintptr_t)("Et");
    v29 = __rdtsc();
    v31[1] = v29;
    *(uint32_t *)(v30 + 4) = (uint32_t)(uintptr_t)(v31 + 3);
  }
  return v29;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleCapsuleAgent::staticGetPenetrations  (binary VA: 0x16b5cb0)
// Original: hkpCapsuleCapsuleAgent::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpCapsuleCapsuleAgent::staticGetPenetrations(int *a1, int *a2, int a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  int v9;
  float *v10;
  float v11; // xmm6_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  float *v14;
  __m128 *v15;
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  int v19;
  float *v20;
  float v21; // xmm6_4
  float v22; // xmm5_4
  float v23; // xmm4_4
  float *v24;
  __m128 *v25;
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  uint64_t v29; // rax
  int v30;
  uint32_t *v31;
  typedef int *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
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
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef __m128 _g4_t_v62;
  typedef __m128 _g4_t_v63;
  typedef __m128 _g4_t_v64[2];
  typedef __m128 _g4_t_v65[2];
  typedef float _g4_t_v66[15];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v33)) > _g4_s0 ? (0u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v34)) > _g4_s1 ? (4u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v35)) > _g4_s2 ? (8u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v36)) > _g4_s3 ? (12u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v37)) > _g4_s4 ? (12u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v38)) > _g4_s5 ? (16u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v39)) > _g4_s6 ? (16u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v40)) > _g4_s7 ? (20u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v41)) > _g4_s8 ? (20u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v42)) > _g4_s9 ? (24u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v43)) > _g4_s10 ? (24u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v44)) > _g4_s11 ? (28u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v45)) > _g4_s12 ? (28u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v46)) > _g4_s13 ? (32u + sizeof(_g4_t_v46)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v47)) > _g4_s14 ? (32u + sizeof(_g4_t_v47)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v48)) > _g4_s15 ? (36u + sizeof(_g4_t_v48)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v49)) > _g4_s16 ? (36u + sizeof(_g4_t_v49)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v50)) > _g4_s17 ? (40u + sizeof(_g4_t_v50)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v51)) > _g4_s18 ? (40u + sizeof(_g4_t_v51)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v52)) > _g4_s19 ? (44u + sizeof(_g4_t_v52)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v53)) > _g4_s20 ? (44u + sizeof(_g4_t_v53)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v54)) > _g4_s21 ? (48u + sizeof(_g4_t_v54)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v55)) > _g4_s22 ? (48u + sizeof(_g4_t_v55)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v56)) > _g4_s23 ? (52u + sizeof(_g4_t_v56)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v57)) > _g4_s24 ? (52u + sizeof(_g4_t_v57)) : _g4_s24,
    _g4_s26 = (56u + sizeof(_g4_t_v58)) > _g4_s25 ? (56u + sizeof(_g4_t_v58)) : _g4_s25,
    _g4_s27 = (56u + sizeof(_g4_t_v59)) > _g4_s26 ? (56u + sizeof(_g4_t_v59)) : _g4_s26,
    _g4_s28 = (60u + sizeof(_g4_t_v60)) > _g4_s27 ? (60u + sizeof(_g4_t_v60)) : _g4_s27,
    _g4_s29 = (60u + sizeof(_g4_t_v61)) > _g4_s28 ? (60u + sizeof(_g4_t_v61)) : _g4_s28,
    _g4_s30 = (64u + sizeof(_g4_t_v62)) > _g4_s29 ? (64u + sizeof(_g4_t_v62)) : _g4_s29,
    _g4_s31 = (80u + sizeof(_g4_t_v63)) > _g4_s30 ? (80u + sizeof(_g4_t_v63)) : _g4_s30,
    _g4_s32 = (96u + sizeof(_g4_t_v64)) > _g4_s31 ? (96u + sizeof(_g4_t_v64)) : _g4_s31,
    _g4_s33 = (128u + sizeof(_g4_t_v65)) > _g4_s32 ? (128u + sizeof(_g4_t_v65)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v66)) > _g4_s33 ? (160u + sizeof(_g4_t_v66)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 32u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 52u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 56u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 60u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 64u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 80u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 96u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 128u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 160u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v33 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtCapsCaps");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  v8 = 1;
  v34 = *a1;
  v35 = *a2;
  v9 = *a1 + 32;
  v10 = (float *)a1[2];
  v36 = *v10;
  v38 = v10[1];
  v60 = v10[2];
  v58 = v10[3];
  v56 = v10[4];
  v54 = v10[5];
  v52 = v10[6];
  v50 = v10[7];
  v48 = v10[8];
  v46 = v10[9];
  v44 = v10[10];
  v42 = v10[11];
  v40 = v10[12];
  v11 = v10[13];
  v12 = v10[14];
  v13 = v10[15];
  while ( 1 )
  {
    v14 = (float *)(v9 + 16 * v8);
    v15 = &v64[v8];
    v16 = *v14;
    v17 = v14[1];
    v18 = v14[2];
g4_m128_lane<float>(*(v15), 0) = (float)((float)((float)(v36 * *v14) + (float)(v56 * v17)) + (float)(v48 * v18)) + v40;
g4_m128_lane<float>(*(v15), 1) = (float)((float)((float)(v38 * v16) + (float)(v54 * v17)) + (float)(v46 * v18)) + v11;
g4_m128_lane<float>(*(v15), 2) = (float)((float)((float)(v60 * v16) + (float)(v52 * v17)) + (float)(v44 * v18)) + v12;
g4_m128_lane<float>(*(v15), 3) = (float)((float)((float)(v16 * v58) + (float)(v17 * v50)) + (float)(v18 * v42)) + v13;
    if ( v8 != 1 )
      break;
    LOBYTE(v8) = 0;
  }
  v19 = 1;
  v20 = (float *)a2[2];
  v55 = *v20;
  v53 = v20[1];
  v51 = v20[2];
  v49 = v20[3];
  v47 = v20[4];
  v45 = v20[5];
  v43 = v20[6];
  v41 = v20[7];
  v39 = v20[8];
  v37 = v20[9];
  v59 = v20[10];
  v57 = v20[11];
  v61 = v20[12];
  v21 = v20[13];
  v22 = v20[14];
  v23 = v20[15];
  while ( 1 )
  {
    v24 = (float *)(v35 + 32 + 16 * v19);
    v25 = &v65[v19];
    v26 = *v24;
    v27 = v24[1];
    v28 = v24[2];
g4_m128_lane<float>(*(v25), 0) = (float)((float)((float)(v55 * *v24) + (float)(v47 * v27)) + (float)(v39 * v28)) + v61;
g4_m128_lane<float>(*(v25), 1) = (float)((float)((float)(v53 * v26) + (float)(v45 * v27)) + (float)(v37 * v28)) + v21;
g4_m128_lane<float>(*(v25), 2) = (float)((float)((float)(v51 * v26) + (float)(v43 * v27)) + (float)(v59 * v28)) + v22;
g4_m128_lane<float>(*(v25), 3) = (float)((float)((float)(v26 * v49) + (float)(v27 * v41)) + (float)(v28 * v57)) + v23;
    if ( v19 != 1 )
      break;
    LOBYTE(v19) = 0;
  }
  v62 = _mm_sub_ps(v64[1], v64[0]);
  v63 = _mm_sub_ps(v65[1], v65[0]);
  hkLineSegmentUtil::closestLineSegLineSeg(v64, &v62, v65, &v63, v66);
  if ( (float)((float)(*(float *)(v34 + 16) + *(float *)(v35 + 16))
             * (float)(*(float *)(v34 + 16) + *(float *)(v35 + 16))) > v66[8] )
    G4_VCALL<void>(a4, 8, a1, a2);
  LODWORD(v29) = (uint32_t)(uintptr_t)(v33);
  v30 = *v33;
  v31 = *(uint32_t **)(*v33 + 4);
  if ( (unsigned int)(uintptr_t)(v31) < *(uint32_t *)(*v33 + 12) )
  {
    *v31 = (uint32_t)(uintptr_t)("Et");
    v29 = __rdtsc();
    v31[1] = v29;
    *(uint32_t *)(v30 + 4) = (uint32_t)(uintptr_t)(v31 + 3);
  }
  return v29;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleCapsuleAgent::getPenetrations  (binary VA: 0x16b60f0)
// Original: hkpCapsuleCapsuleAgent::getPenetrations
// ----------------------------------------------------------------------------
int hkpCapsuleCapsuleAgent::getPenetrations(int a1, int *a2, int *a3, int a4, int a5)
{
  return hkpCapsuleCapsuleAgent::staticGetPenetrations(a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleCapsuleAgent::registerAgent  (binary VA: 0x16b6130)
// Original: hkpCapsuleCapsuleAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpCapsuleCapsuleAgent::registerAgent(hkpCapsuleCapsuleAgent::Self *self)
{
  uint32_t v2[8];

  v2[0] = (uint32_t)(uintptr_t)(hkpCapsuleCapsuleAgent::createCapsuleCapsuleAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpCapsuleCapsuleAgent::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpCapsuleCapsuleAgent::staticGetClosestPoints);
  v2[3] = (uint32_t)(uintptr_t)(((int * (*)(unsigned int, float *, float *, float *, int, int, int, int, int, int, int, unsigned int, int, int, int, int, int, int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, g4_int128_t, float, int, int, int, int, int, int, int, int, int, int, int, float, float, float, float, unsigned int, unsigned int, unsigned int, unsigned int, g4_int128_t, int32_t, unsigned int, int32_t, int32_t, unsigned int, float *, int, int, int, int, int, int, unsigned int))hkpIterativeLinearCastAgent::staticLinearCast));
  LOWORD(v2[4]) = 0;
  return hkpCollisionDispatcher::registerCollisionAgent(self, v2, 4, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleTriangleAgent::cleanup  (binary VA: 0x16efaa0)
// Original: hkpCapsuleTriangleAgent::cleanup
// ----------------------------------------------------------------------------
int hkpCapsuleTriangleAgent::cleanup(hkpCapsuleTriangleAgent::Self *self, hkpConstraintOwner::Self *a2)
{
  uint16_t *v2;
  int result;

  v2 = (uint16_t *)self;
  do
  {
    result = v2[6];
    if ( (uint16_t)result != 0xFFFF )
      result = (*(int (**)(uint32_t, int, hkpConstraintOwner::Self *, uint32_t))(**((uint32_t **)self + 2) + 28))(
                 *((uint32_t *)self + 2),
                 result,
                 a2,
                 *((uint32_t *)self + 2));
    ++v2;
  }
  while ( v2 != (uint16_t *)((char *)self + 6) );
  if ( self != nullptr )
    return G4_VCALL<int>(self, 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleTriangleAgent::Destroy  (binary VA: 0x16efb00)
// Original: hkpCapsuleTriangleAgent::~hkpCapsuleTriangleAgent
// ----------------------------------------------------------------------------
void hkpCapsuleTriangleAgent::Destroy(hkpCapsuleTriangleAgent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleTriangleAgent::Destroy_ea16efcd0  (binary VA: 0x16efcd0)
// Original: hkpCapsuleTriangleAgent::~hkpCapsuleTriangleAgent
// ----------------------------------------------------------------------------
void hkpCapsuleTriangleAgent::Destroy_ea16efcd0(hkpCapsuleTriangleAgent::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 40;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleTriangleAgent::createCapsuleTriangleAgent  (binary VA: 0x16efd30)
// Original: hkpCapsuleTriangleAgent::createCapsuleTriangleAgent
// ----------------------------------------------------------------------------
int hkpCapsuleTriangleAgent::createCapsuleTriangleAgent(int a1, uint32_t *a2, int a3, int a4)
{
  int address;
  int v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         40);
  *(uint32_t *)(v5 + 4) = -65535;
  *(uint32_t *)(v5 + 8) = a4;
  *(uint16_t *)(v5 + 12) = -1;
  *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_209BAA8);
  *(uint16_t *)(v5 + 14) = -1;
  *(uint16_t *)(v5 + 16) = -1;
  hkpCollideTriangleUtil::setupPointTriangleDistanceCache(*a2 + 32, v5 + 20);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleTriangleAgent::createTriangleCapsuleAgent  (binary VA: 0x16efdc0)
// Original: hkpCapsuleTriangleAgent::createTriangleCapsuleAgent
// ----------------------------------------------------------------------------
int hkpCapsuleTriangleAgent::createTriangleCapsuleAgent(uint32_t *a1, int a2, int a3, int a4)
{
  int address;
  int v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         40);
  *(uint32_t *)(v5 + 4) = -65535;
  *(uint32_t *)(v5 + 8) = a4;
  *(uint16_t *)(v5 + 12) = -1;
  *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_209BAA8);
  *(uint16_t *)(v5 + 14) = -1;
  *(uint16_t *)(v5 + 16) = -1;
  hkpCollideTriangleUtil::setupPointTriangleDistanceCache(*a1 + 32, v5 + 20);
  *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_209BA48);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleTriangleAgent::getPenetrations  (binary VA: 0x16f0830)
// Original: hkpCapsuleTriangleAgent::getPenetrations
// ----------------------------------------------------------------------------
int hkpCapsuleTriangleAgent::getPenetrations(int a1, int *a2, int *a3, int a4, int a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  int v10;
  float *v11;
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float *v15;
  float *v16;
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float *v20;
  float v21; // xmm2_4
  float v22; // xmm3_4
  float v23; // xmm6_4
  float v24; // xmm5_4
  float v25; // xmm1_4
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  int v33;
  uint64_t v34; // rax
  int v35;
  uint32_t *v36;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int *_g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef uint64_t _g4_t_v68[4];
  typedef float _g4_t_v69[12];
  typedef float _g4_t_v70[27];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (4u + sizeof(_g4_t_v38)) > _g4_s0 ? (4u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v39)) > _g4_s1 ? (24u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v40)) > _g4_s2 ? (32u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v41)) > _g4_s3 ? (36u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v42)) > _g4_s4 ? (44u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v43)) > _g4_s5 ? (44u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v44)) > _g4_s6 ? (48u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v45)) > _g4_s7 ? (48u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v46)) > _g4_s8 ? (52u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v47)) > _g4_s9 ? (52u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v48)) > _g4_s10 ? (56u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v49)) > _g4_s11 ? (56u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v50)) > _g4_s12 ? (60u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v51)) > _g4_s13 ? (60u + sizeof(_g4_t_v51)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v52)) > _g4_s14 ? (64u + sizeof(_g4_t_v52)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v53)) > _g4_s15 ? (64u + sizeof(_g4_t_v53)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v54)) > _g4_s16 ? (68u + sizeof(_g4_t_v54)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v55)) > _g4_s17 ? (68u + sizeof(_g4_t_v55)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v56)) > _g4_s18 ? (72u + sizeof(_g4_t_v56)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v57)) > _g4_s19 ? (72u + sizeof(_g4_t_v57)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v58)) > _g4_s20 ? (76u + sizeof(_g4_t_v58)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v59)) > _g4_s21 ? (76u + sizeof(_g4_t_v59)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v60)) > _g4_s22 ? (80u + sizeof(_g4_t_v60)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v61)) > _g4_s23 ? (80u + sizeof(_g4_t_v61)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v62)) > _g4_s24 ? (84u + sizeof(_g4_t_v62)) : _g4_s24,
    _g4_s26 = (84u + sizeof(_g4_t_v63)) > _g4_s25 ? (84u + sizeof(_g4_t_v63)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v64)) > _g4_s26 ? (88u + sizeof(_g4_t_v64)) : _g4_s26,
    _g4_s28 = (88u + sizeof(_g4_t_v65)) > _g4_s27 ? (88u + sizeof(_g4_t_v65)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v66)) > _g4_s28 ? (92u + sizeof(_g4_t_v66)) : _g4_s28,
    _g4_s30 = (92u + sizeof(_g4_t_v67)) > _g4_s29 ? (92u + sizeof(_g4_t_v67)) : _g4_s29,
    _g4_s31 = (96u + sizeof(_g4_t_v68)) > _g4_s30 ? (96u + sizeof(_g4_t_v68)) : _g4_s30,
    _g4_s32 = (128u + sizeof(_g4_t_v69)) > _g4_s31 ? (128u + sizeof(_g4_t_v69)) : _g4_s31,
    _g4_s33 = (176u + sizeof(_g4_t_v70)) > _g4_s32 ? (176u + sizeof(_g4_t_v70)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 4u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 48u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 48u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 52u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 52u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 56u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 56u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 60u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 64u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 68u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 68u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 72u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 72u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 76u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 76u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 80u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 80u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 84u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 84u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 88u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 88u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 92u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 92u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 96u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 128u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 176u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v41 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtCapsTriangle");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v9 = 1;
  v40 = *a2;
  v10 = *a2 + 32;
  v11 = (float *)a2[2];
  v42 = *v11;
  v44 = v11[1];
  v66 = v11[2];
  v64 = v11[3];
  v62 = v11[4];
  v60 = v11[5];
  v58 = v11[6];
  v56 = v11[7];
  v54 = v11[8];
  v52 = v11[9];
  v50 = v11[10];
  v48 = v11[11];
  v46 = v11[12];
  v39 = *a3;
  v12 = v11[13];
  v13 = v11[14];
  v14 = v11[15];
  while ( 1 )
  {
    v15 = (float *)(v10 + 16 * v9);
    v16 = (float *)&v68[2 * v9];
    v17 = *v15;
    v18 = v15[1];
    v19 = v15[2];
    *v16 = (float)((float)((float)(v42 * *v15) + (float)(v62 * v18)) + (float)(v54 * v19)) + v46;
    v16[1] = (float)((float)((float)(v44 * v17) + (float)(v60 * v18)) + (float)(v52 * v19)) + v12;
    v16[2] = (float)((float)((float)(v66 * v17) + (float)(v58 * v18)) + (float)(v50 * v19)) + v13;
    v16[3] = (float)((float)((float)(v17 * v64) + (float)(v18 * v56)) + (float)(v19 * v48)) + v14;
    if ( v9 != 1 )
      break;
    LOBYTE(v9) = 0;
  }
  v20 = (float *)a3[2];
  v49 = v20[6];
  v47 = v20[7];
  v45 = v20[9];
  v59 = v20[11];
  v61 = v20[10];
  v67 = v20[14];
  v21 = *(float *)(v39 + 68);
  v65 = v20[15];
  v22 = *(float *)(v39 + 64);
  v23 = *v20;
  v63 = v20[12];
  v55 = v20[1];
  v24 = v20[4];
  v43 = v20[3];
  v51 = v20[5];
  v57 = v20[13];
  v25 = *(float *)(v39 + 72);
  v53 = v20[2];
  v26 = v20[8];
  v69[8] = (float)((float)((float)(v22 * *v20) + (float)(v21 * v24)) + (float)(v25 * v26)) + v63;
  v69[9] = (float)((float)((float)(v55 * v22) + (float)(v51 * v21)) + (float)(v45 * v25)) + v57;
  v69[10] = (float)((float)((float)(v53 * v22) + (float)(v49 * v21)) + (float)(v61 * v25)) + v67;
  v69[11] = (float)((float)((float)(v22 * v43) + (float)(v21 * v47)) + (float)(v25 * v59)) + v65;
  v27 = *(float *)(v39 + 48);
  v28 = *(float *)(v39 + 52);
  v29 = *(float *)(v39 + 56);
  v69[4] = (float)((float)((float)(v27 * v23) + (float)(v28 * v24)) + (float)(v29 * v26)) + v63;
  v69[5] = (float)((float)((float)(v55 * v27) + (float)(v51 * v28)) + (float)(v45 * v29)) + v57;
  v69[6] = (float)((float)((float)(v53 * v27) + (float)(v49 * v28)) + (float)(v61 * v29)) + v67;
  v69[7] = (float)((float)((float)(v27 * v43) + (float)(v28 * v47)) + (float)(v29 * v59)) + v65;
  v30 = *(float *)(v39 + 32);
  v31 = *(float *)(v39 + 36);
  v32 = *(float *)(v39 + 40);
  v69[0] = (float)((float)((float)(v23 * v30) + (float)(v24 * v31)) + (float)(v26 * v32)) + v63;
  v69[1] = (float)((float)((float)(v55 * v30) + (float)(v51 * v31)) + (float)(v45 * v32)) + v57;
  v38 = *(uint32_t *)(a4 + 12);
  v69[2] = (float)((float)((float)(v53 * v30) + (float)(v49 * v31)) + (float)(v61 * v32)) + v67;
  v69[3] = (float)((float)((float)(v30 * v43) + (float)(v31 * v47)) + (float)(v32 * v59)) + v65;
  hkCollideCapsuleUtilCapsVsTri(
    (hkLineSegmentUtil::Self *)v68,
    *(hkVector4f::Self **)(v40 + 16),
    (int)(uintptr_t)(v69),
    *(hkVector4f::Self **)(v39 + 16),
    a1 + 20,
    v38,
    0,
    COERCE_FLOAT(v70),
    0);
  v33 = 0;
  if ( v70[15] < 0.0 )
    v33 = 15;
  if ( v70[7] < 0.0 || v33 != 0 )
    G4_VCALL<void>(a5, 8, a2, a3);
  LODWORD(v34) = (uint32_t)(uintptr_t)(v41);
  v35 = *v41;
  v36 = *(uint32_t **)(*v41 + 4);
  if ( (unsigned int)(uintptr_t)(v36) < *(uint32_t *)(*v41 + 12) )
  {
    *v36 = (uint32_t)(uintptr_t)("Et");
    v34 = __rdtsc();
    v36[1] = v34;
    *(uint32_t *)(v35 + 4) = (uint32_t)(uintptr_t)(v36 + 3);
  }
  return v34;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleTriangleAgent::staticGetPenetrations  (binary VA: 0x16f0e70)
// Original: hkpCapsuleTriangleAgent::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpCapsuleTriangleAgent::staticGetPenetrations(int *a1, int *a2, int a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  int v9;
  float *v10;
  float v11; // xmm5_4
  float v12; // xmm6_4
  float v13; // xmm4_4
  float *v14;
  float *v15;
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float *v19;
  float v20; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm6_4
  float v23; // xmm5_4
  float v24; // xmm1_4
  float v25; // xmm4_4
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm2_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  int v32;
  uint64_t v33; // rax
  int v34;
  uint32_t *v35;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int *_g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef uint8_t _g4_t_v67[20];
  typedef uint64_t _g4_t_v68[4];
  typedef float _g4_t_v69[12];
  typedef float _g4_t_v70[27];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (4u + sizeof(_g4_t_v37)) > _g4_s0 ? (4u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v38)) > _g4_s1 ? (24u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v39)) > _g4_s2 ? (36u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v40)) > _g4_s3 ? (40u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v41)) > _g4_s4 ? (44u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v42)) > _g4_s5 ? (44u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v43)) > _g4_s6 ? (48u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v44)) > _g4_s7 ? (48u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v45)) > _g4_s8 ? (52u + sizeof(_g4_t_v45)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v46)) > _g4_s9 ? (52u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v47)) > _g4_s10 ? (56u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v48)) > _g4_s11 ? (56u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v49)) > _g4_s12 ? (60u + sizeof(_g4_t_v49)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v50)) > _g4_s13 ? (60u + sizeof(_g4_t_v50)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v51)) > _g4_s14 ? (64u + sizeof(_g4_t_v51)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v52)) > _g4_s15 ? (64u + sizeof(_g4_t_v52)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v53)) > _g4_s16 ? (68u + sizeof(_g4_t_v53)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v54)) > _g4_s17 ? (68u + sizeof(_g4_t_v54)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v55)) > _g4_s18 ? (72u + sizeof(_g4_t_v55)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v56)) > _g4_s19 ? (72u + sizeof(_g4_t_v56)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v57)) > _g4_s20 ? (76u + sizeof(_g4_t_v57)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v58)) > _g4_s21 ? (76u + sizeof(_g4_t_v58)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v59)) > _g4_s22 ? (80u + sizeof(_g4_t_v59)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v60)) > _g4_s23 ? (80u + sizeof(_g4_t_v60)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v61)) > _g4_s24 ? (84u + sizeof(_g4_t_v61)) : _g4_s24,
    _g4_s26 = (84u + sizeof(_g4_t_v62)) > _g4_s25 ? (84u + sizeof(_g4_t_v62)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v63)) > _g4_s26 ? (88u + sizeof(_g4_t_v63)) : _g4_s26,
    _g4_s28 = (88u + sizeof(_g4_t_v64)) > _g4_s27 ? (88u + sizeof(_g4_t_v64)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v65)) > _g4_s28 ? (92u + sizeof(_g4_t_v65)) : _g4_s28,
    _g4_s30 = (92u + sizeof(_g4_t_v66)) > _g4_s29 ? (92u + sizeof(_g4_t_v66)) : _g4_s29,
    _g4_s31 = (108u + sizeof(_g4_t_v67)) > _g4_s30 ? (108u + sizeof(_g4_t_v67)) : _g4_s30,
    _g4_s32 = (128u + sizeof(_g4_t_v68)) > _g4_s31 ? (128u + sizeof(_g4_t_v68)) : _g4_s31,
    _g4_s33 = (160u + sizeof(_g4_t_v69)) > _g4_s32 ? (160u + sizeof(_g4_t_v69)) : _g4_s32,
    _g4_s34 = (208u + sizeof(_g4_t_v70)) > _g4_s33 ? (208u + sizeof(_g4_t_v70)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 4u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 40u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 44u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 48u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 52u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 52u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 56u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 56u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 60u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 60u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 64u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 68u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 68u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 72u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 72u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 76u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 76u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 80u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 80u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 84u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 84u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 88u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 88u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 92u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 92u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 108u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 128u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 160u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 208u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v40 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtCapsTriangle");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  hkpCollideTriangleUtil::setupPointTriangleDistanceCache(*a2 + 32, (int)(uintptr_t)(v67));
  v8 = 1;
  v39 = *a1;
  v9 = *a1 + 32;
  v10 = (float *)a1[2];
  v41 = *v10;
  v43 = v10[1];
  v65 = v10[2];
  v63 = v10[3];
  v61 = v10[4];
  v59 = v10[5];
  v57 = v10[6];
  v55 = v10[7];
  v53 = v10[8];
  v51 = v10[9];
  v49 = v10[10];
  v47 = v10[11];
  v45 = v10[12];
  v11 = v10[14];
  v12 = v10[13];
  v13 = v10[15];
  v38 = *a2;
  while ( 1 )
  {
    v14 = (float *)(v9 + 16 * v8);
    v15 = (float *)&v68[2 * v8];
    v16 = *v14;
    v17 = v14[1];
    v18 = v14[2];
    *v15 = (float)((float)((float)(v41 * *v14) + (float)(v61 * v17)) + (float)(v53 * v18)) + v45;
    v15[1] = (float)((float)((float)(v43 * v16) + (float)(v59 * v17)) + (float)(v51 * v18)) + v12;
    v15[2] = (float)((float)((float)(v65 * v16) + (float)(v57 * v17)) + (float)(v49 * v18)) + v11;
    v15[3] = (float)((float)((float)(v16 * v63) + (float)(v17 * v55)) + (float)(v18 * v47)) + v13;
    if ( v8 != 1 )
      break;
    LOBYTE(v8) = 0;
  }
  v19 = (float *)a2[2];
  v48 = v19[6];
  v46 = v19[7];
  v44 = v19[9];
  v58 = v19[11];
  v60 = v19[10];
  v66 = v19[14];
  v20 = *(float *)(v38 + 68);
  v64 = v19[15];
  v21 = *(float *)(v38 + 64);
  v22 = *v19;
  v62 = v19[12];
  v54 = v19[1];
  v23 = v19[4];
  v42 = v19[3];
  v50 = v19[5];
  v56 = v19[13];
  v24 = *(float *)(v38 + 72);
  v52 = v19[2];
  v25 = v19[8];
  v69[8] = (float)((float)((float)(v21 * *v19) + (float)(v20 * v23)) + (float)(v24 * v25)) + v62;
  v69[9] = (float)((float)((float)(v54 * v21) + (float)(v50 * v20)) + (float)(v44 * v24)) + v56;
  v69[10] = (float)((float)((float)(v52 * v21) + (float)(v48 * v20)) + (float)(v60 * v24)) + v66;
  v69[11] = (float)((float)((float)(v21 * v42) + (float)(v20 * v46)) + (float)(v24 * v58)) + v64;
  v26 = *(float *)(v38 + 48);
  v27 = *(float *)(v38 + 52);
  v28 = *(float *)(v38 + 56);
  v69[4] = (float)((float)((float)(v26 * v22) + (float)(v27 * v23)) + (float)(v28 * v25)) + v62;
  v69[5] = (float)((float)((float)(v54 * v26) + (float)(v50 * v27)) + (float)(v44 * v28)) + v56;
  v69[6] = (float)((float)((float)(v52 * v26) + (float)(v48 * v27)) + (float)(v60 * v28)) + v66;
  v69[7] = (float)((float)((float)(v26 * v42) + (float)(v27 * v46)) + (float)(v28 * v58)) + v64;
  v29 = *(float *)(v38 + 32);
  v30 = *(float *)(v38 + 36);
  v31 = *(float *)(v38 + 40);
  v69[0] = (float)((float)((float)(v22 * v29) + (float)(v23 * v30)) + (float)(v25 * v31)) + v62;
  v69[1] = (float)((float)((float)(v54 * v29) + (float)(v50 * v30)) + (float)(v44 * v31)) + v56;
  v37 = *(uint32_t *)(a3 + 12);
  v69[2] = (float)((float)((float)(v52 * v29) + (float)(v48 * v30)) + (float)(v60 * v31)) + v66;
  v69[3] = (float)((float)((float)(v29 * v42) + (float)(v30 * v46)) + (float)(v31 * v58)) + v64;
  hkCollideCapsuleUtilCapsVsTri(
    (hkLineSegmentUtil::Self *)v68,
    *(hkVector4f::Self **)(v39 + 16),
    (int)(uintptr_t)(v69),
    *(hkVector4f::Self **)(v38 + 16),
    (int)(uintptr_t)(v67),
    v37,
    0,
    COERCE_FLOAT(v70),
    0);
  v32 = 0;
  if ( v70[15] < 0.0 )
    v32 = 15;
  if ( v70[7] < 0.0 || v32 != 0 )
    G4_VCALL<void>(a4, 8, a1, a2);
  LODWORD(v33) = (uint32_t)(uintptr_t)(v40);
  v34 = *v40;
  v35 = *(uint32_t **)(*v40 + 4);
  if ( (unsigned int)(uintptr_t)(v35) < *(uint32_t *)(*v40 + 12) )
  {
    *v35 = (uint32_t)(uintptr_t)("Et");
    v33 = __rdtsc();
    v35[1] = v33;
    *(uint32_t *)(v34 + 4) = (uint32_t)(uintptr_t)(v35 + 3);
  }
  return v33;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleTriangleAgent::getClosestPoints  (binary VA: 0x16f14c0)
// Original: hkpCapsuleTriangleAgent::getClosestPoints
// ----------------------------------------------------------------------------
int hkpCapsuleTriangleAgent::getClosestPoints(int a1, int *a2, int *a3, float *a4, int a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  int v10;
  float *v11;
  float v12; // xmm5_4
  float v13; // xmm6_4
  float v14; // xmm4_4
  float *v15;
  float *v16;
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float *v20;
  float v21; // xmm2_4
  float v22; // xmm3_4
  float v23; // xmm6_4
  float v24; // xmm5_4
  float v25; // xmm1_4
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  uint64_t v33; // rax
  int v34;
  uint32_t *v35;
  int v36;
  int v37;
  float *v38;
  char v39;
  int v40;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef int _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef int _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef int _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef int _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef char _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef uint64_t _g4_t_v81[7];
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97;
  typedef uint32_t _g4_t_v98[16];
  typedef float _g4_t_v99[27];
  enum : size_t {
    _g4_s0 = 528u,
    _g4_s1 = (12u + sizeof(_g4_t_v42)) > _g4_s0 ? (12u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v43)) > _g4_s1 ? (32u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v44)) > _g4_s2 ? (36u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v45)) > _g4_s3 ? (48u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v46)) > _g4_s4 ? (52u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v47)) > _g4_s5 ? (52u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v48)) > _g4_s6 ? (56u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v49)) > _g4_s7 ? (56u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v50)) > _g4_s8 ? (60u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v51)) > _g4_s9 ? (60u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v52)) > _g4_s10 ? (64u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v53)) > _g4_s11 ? (64u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v54)) > _g4_s12 ? (68u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v55)) > _g4_s13 ? (68u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v56)) > _g4_s14 ? (72u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v57)) > _g4_s15 ? (72u + sizeof(_g4_t_v57)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v58)) > _g4_s16 ? (76u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v59)) > _g4_s17 ? (76u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v60)) > _g4_s18 ? (80u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v61)) > _g4_s19 ? (80u + sizeof(_g4_t_v61)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v62)) > _g4_s20 ? (80u + sizeof(_g4_t_v62)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v63)) > _g4_s21 ? (84u + sizeof(_g4_t_v63)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v64)) > _g4_s22 ? (84u + sizeof(_g4_t_v64)) : _g4_s22,
    _g4_s24 = (84u + sizeof(_g4_t_v65)) > _g4_s23 ? (84u + sizeof(_g4_t_v65)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v66)) > _g4_s24 ? (88u + sizeof(_g4_t_v66)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v67)) > _g4_s25 ? (88u + sizeof(_g4_t_v67)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v68)) > _g4_s26 ? (88u + sizeof(_g4_t_v68)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v69)) > _g4_s27 ? (92u + sizeof(_g4_t_v69)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v70)) > _g4_s28 ? (92u + sizeof(_g4_t_v70)) : _g4_s28,
    _g4_s30 = (92u + sizeof(_g4_t_v71)) > _g4_s29 ? (92u + sizeof(_g4_t_v71)) : _g4_s29,
    _g4_s31 = (96u + sizeof(_g4_t_v72)) > _g4_s30 ? (96u + sizeof(_g4_t_v72)) : _g4_s30,
    _g4_s32 = (96u + sizeof(_g4_t_v73)) > _g4_s31 ? (96u + sizeof(_g4_t_v73)) : _g4_s31,
    _g4_s33 = (100u + sizeof(_g4_t_v74)) > _g4_s32 ? (100u + sizeof(_g4_t_v74)) : _g4_s32,
    _g4_s34 = (100u + sizeof(_g4_t_v75)) > _g4_s33 ? (100u + sizeof(_g4_t_v75)) : _g4_s33,
    _g4_s35 = (119u + sizeof(_g4_t_v76)) > _g4_s34 ? (119u + sizeof(_g4_t_v76)) : _g4_s34,
    _g4_s36 = (120u + sizeof(_g4_t_v77)) > _g4_s35 ? (120u + sizeof(_g4_t_v77)) : _g4_s35,
    _g4_s37 = (124u + sizeof(_g4_t_v78)) > _g4_s36 ? (124u + sizeof(_g4_t_v78)) : _g4_s36,
    _g4_s38 = (128u + sizeof(_g4_t_v79)) > _g4_s37 ? (128u + sizeof(_g4_t_v79)) : _g4_s37,
    _g4_s39 = (132u + sizeof(_g4_t_v80)) > _g4_s38 ? (132u + sizeof(_g4_t_v80)) : _g4_s38,
    _g4_s40 = (144u + sizeof(_g4_t_v81)) > _g4_s39 ? (144u + sizeof(_g4_t_v81)) : _g4_s39,
    _g4_s41 = (200u + sizeof(_g4_t_v82)) > _g4_s40 ? (200u + sizeof(_g4_t_v82)) : _g4_s40,
    _g4_s42 = (204u + sizeof(_g4_t_v83)) > _g4_s41 ? (204u + sizeof(_g4_t_v83)) : _g4_s41,
    _g4_s43 = (208u + sizeof(_g4_t_v84)) > _g4_s42 ? (208u + sizeof(_g4_t_v84)) : _g4_s42,
    _g4_s44 = (212u + sizeof(_g4_t_v85)) > _g4_s43 ? (212u + sizeof(_g4_t_v85)) : _g4_s43,
    _g4_s45 = (232u + sizeof(_g4_t_v86)) > _g4_s44 ? (232u + sizeof(_g4_t_v86)) : _g4_s44,
    _g4_s46 = (236u + sizeof(_g4_t_v87)) > _g4_s45 ? (236u + sizeof(_g4_t_v87)) : _g4_s45,
    _g4_s47 = (240u + sizeof(_g4_t_v88)) > _g4_s46 ? (240u + sizeof(_g4_t_v88)) : _g4_s46,
    _g4_s48 = (244u + sizeof(_g4_t_v89)) > _g4_s47 ? (244u + sizeof(_g4_t_v89)) : _g4_s47,
    _g4_s49 = (248u + sizeof(_g4_t_v90)) > _g4_s48 ? (248u + sizeof(_g4_t_v90)) : _g4_s48,
    _g4_s50 = (252u + sizeof(_g4_t_v91)) > _g4_s49 ? (252u + sizeof(_g4_t_v91)) : _g4_s49,
    _g4_s51 = (256u + sizeof(_g4_t_v92)) > _g4_s50 ? (256u + sizeof(_g4_t_v92)) : _g4_s50,
    _g4_s52 = (260u + sizeof(_g4_t_v93)) > _g4_s51 ? (260u + sizeof(_g4_t_v93)) : _g4_s51,
    _g4_s53 = (264u + sizeof(_g4_t_v94)) > _g4_s52 ? (264u + sizeof(_g4_t_v94)) : _g4_s52,
    _g4_s54 = (268u + sizeof(_g4_t_v95)) > _g4_s53 ? (268u + sizeof(_g4_t_v95)) : _g4_s53,
    _g4_s55 = (272u + sizeof(_g4_t_v96)) > _g4_s54 ? (272u + sizeof(_g4_t_v96)) : _g4_s54,
    _g4_s56 = (276u + sizeof(_g4_t_v97)) > _g4_s55 ? (276u + sizeof(_g4_t_v97)) : _g4_s55,
    _g4_s57 = (280u + sizeof(_g4_t_v98)) > _g4_s56 ? (280u + sizeof(_g4_t_v98)) : _g4_s56,
    _g4_s58 = (344u + sizeof(_g4_t_v99)) > _g4_s57 ? (344u + sizeof(_g4_t_v99)) : _g4_s57
  };
  alignas(16) uint8_t _g4_sf[_g4_s58];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 48u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 52u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 52u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 56u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 56u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 60u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 64u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 68u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 68u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 72u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 72u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 76u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 76u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 80u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 80u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 80u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 84u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 84u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 84u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 88u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 88u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 88u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 92u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 92u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 92u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 96u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 96u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 100u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 100u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 119u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 120u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 124u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 128u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 132u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 144u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 200u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 204u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 208u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 212u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 232u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 236u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 240u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 244u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 248u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 252u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 256u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 260u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 264u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 268u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 272u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 276u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 280u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 344u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v44 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtCapsTriangle");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v98[12] = (uint32_t)(uintptr_t)(a2);
  v98[13] = (uint32_t)(uintptr_t)(a3);
  memset(&v81[3], 0, 32);
  memset(v98, 0, 48);
  v9 = *a2 + 32;
  v45 = *a2;
  v10 = 1;
  v11 = (float *)a2[2];
  v48 = *v11;
  v50 = v11[1];
  v72 = v11[2];
  v74 = v11[3];
  v56 = v11[4];
  v63 = v11[5];
  v46 = v11[6];
  v54 = v11[7];
  v60 = v11[8];
  v58 = v11[9];
  v52 = v11[10];
  v69 = v11[11];
  v66 = v11[12];
  v12 = v11[14];
  v13 = v11[13];
  v14 = v11[15];
  v43 = *a3;
  while ( 1 )
  {
    v15 = (float *)(v9 + 16 * v10);
    v16 = (float *)(&v82 + 4 * v10);
    v17 = *v15;
    v18 = v15[1];
    v19 = v15[2];
    *v16 = (float)((float)((float)(v48 * *v15) + (float)(v56 * v18)) + (float)(v60 * v19)) + v66;
    v16[1] = (float)((float)((float)(v50 * v17) + (float)(v63 * v18)) + (float)(v58 * v19)) + v13;
    v16[2] = (float)((float)((float)(v72 * v17) + (float)(v46 * v18)) + (float)(v52 * v19)) + v12;
    v16[3] = (float)((float)((float)(v17 * v74) + (float)(v18 * v54)) + (float)(v19 * v69)) + v14;
    if ( v10 != 1 )
      break;
    LOBYTE(v10) = 0;
  }
  v20 = (float *)a3[2];
  v47 = v20[3];
  v64 = v20[7];
  v70 = v20[5];
  v61 = v20[9];
  v59 = v20[10];
  v53 = v20[13];
  v21 = *(float *)(v43 + 68);
  v49 = v20[15];
  v22 = *(float *)(v43 + 64);
  v23 = *v20;
  v55 = v20[12];
  v75 = v20[1];
  v24 = v20[4];
  v67 = v20[6];
  v57 = v20[11];
  v51 = v20[14];
  v25 = *(float *)(v43 + 72);
  v73 = v20[2];
  v26 = v20[8];
  v94 = (float)((float)((float)(v22 * *v20) + (float)(v21 * v24)) + (float)(v25 * v26)) + v55;
  v95 = (float)((float)((float)(v75 * v22) + (float)(v70 * v21)) + (float)(v61 * v25)) + v53;
  v96 = (float)((float)((float)(v73 * v22) + (float)(v67 * v21)) + (float)(v59 * v25)) + v51;
  v97 = (float)((float)((float)(v22 * v47) + (float)(v21 * v64)) + (float)(v25 * v57)) + v49;
  v27 = *(float *)(v43 + 48);
  v28 = *(float *)(v43 + 52);
  v29 = *(float *)(v43 + 56);
  v90 = (float)((float)((float)(v27 * v23) + (float)(v28 * v24)) + (float)(v29 * v26)) + v55;
  v91 = (float)((float)((float)(v75 * v27) + (float)(v70 * v28)) + (float)(v61 * v29)) + v53;
  v92 = (float)((float)((float)(v73 * v27) + (float)(v67 * v28)) + (float)(v59 * v29)) + v51;
  v93 = (float)((float)((float)(v27 * v47) + (float)(v28 * v64)) + (float)(v29 * v57)) + v49;
  v30 = *(float *)(v43 + 32);
  v31 = *(float *)(v43 + 36);
  v32 = *(float *)(v43 + 40);
  *(float *)&v86 = (float)((float)((float)(v23 * v30) + (float)(v24 * v31)) + (float)(v26 * v32)) + v55;
  v87 = (float)((float)((float)(v75 * v30) + (float)(v70 * v31)) + (float)(v61 * v32)) + v53;
  v42 = *((uint32_t *)a4 + 3);
  v88 = (float)((float)((float)(v73 * v30) + (float)(v67 * v31)) + (float)(v59 * v32)) + v51;
  v89 = (float)((float)((float)(v30 * v47) + (float)(v31 * v64)) + (float)(v32 * v57)) + v49;
  hkCollideCapsuleUtilCapsVsTri(
    (hkLineSegmentUtil::Self *)&v82,
    *(hkVector4f::Self **)(v45 + 16),
    (int)(uintptr_t)(&v86),
    *(hkVector4f::Self **)(v43 + 16),
    a1 + 20,
    v42,
    0,
    COERCE_FLOAT(v99),
    (int)(uintptr_t)(v81));
  if ( v99[15] <= v99[7] )
  {
    if ( a4[3] <= v99[15] )
      goto LABEL_8;
    v36 = 1;
  }
  else
  {
    if ( a4[3] <= v99[7] )
      goto LABEL_8;
    v36 = 0;
  }
  v37 = *((uint32_t *)a4 + 1);
  v38 = &v99[8 * v36];
  v71 = *((uint32_t *)v38 + 4);
  v77 = v71;
  v68 = *((uint32_t *)v38 + 5);
  v78 = v68;
  v65 = *((uint32_t *)v38 + 6);
  v79 = v65;
  v62 = *((uint32_t *)v38 + 7);
  v80 = v62;
  v39 = v81[v36];
  v76 = v39;
  if ( v37 == 0 || v39 == 0 )
    goto LABEL_19;
  v82 = v71;
  v83 = v68;
  v84 = v65;
  v85 = v62;
  v86 = *(int *)v38;
  v87 = v38[1];
  v88 = v38[2];
  v89 = v38[3];
  v40 = G4_VCALL<int>(v43, 60, (char *)&v81[v36] + 2, &v76, &v86, a3[2], v45, a2[2], &v82);
  *v38 = *(float *)&v86;
  v38[1] = v87;
  v38[2] = v88;
  v38[3] = v89;
  if ( *((uint32_t *)a4 + 2) != 0 || v40 != 0 )
  {
    if ( v40 == 1 )
    {
      *((uint32_t *)v38 + 4) = v82;
      *((uint32_t *)v38 + 5) = v83;
      *((uint32_t *)v38 + 6) = v84;
    }
LABEL_19:
    std::memcpy(v98, v38, 32);
    v98[8] = v77;
    v98[9] = v78;
    v98[10] = v79;
    v98[11] = v80;
    G4_VCALL<void>(a5, 8, v98);
  }
LABEL_8:
  LODWORD(v33) = (uint32_t)(uintptr_t)(v44);
  v34 = *v44;
  v35 = *(uint32_t **)(*v44 + 4);
  if ( (unsigned int)(uintptr_t)(v35) < *(uint32_t *)(*v44 + 12) )
  {
    *v35 = (uint32_t)(uintptr_t)("Et");
    v33 = __rdtsc();
    v35[1] = v33;
    *(uint32_t *)(v34 + 4) = (uint32_t)(uintptr_t)(v35 + 3);
  }
  return v33;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleTriangleAgent::processCollision  (binary VA: 0x16f1dd0)
// Original: hkpCapsuleTriangleAgent::processCollision
// ----------------------------------------------------------------------------
int hkpCapsuleTriangleAgent::processCollision(int a1, int *a2, int *a3, int a4, int a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  int v10;
  float *v11;
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float *v15;
  float *v16;
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float *v20;
  float v21; // xmm2_4
  float v22; // xmm3_4
  float v23; // xmm6_4
  float v24; // xmm5_4
  float v25; // xmm1_4
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float *v33;
  float v34; // xmm0_4
  int v35;
  uint32_t *v36;
  uint64_t v37; // rax
  int v38;
  uint32_t *v39;
  int v40;
  int v41;
  int16_t v42;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef uint32_t *_g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef char *_g4_t_v78;
  typedef char _g4_t_v79;
  typedef int _g4_t_v80[6];
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef float _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97[4];
  typedef uint8_t _g4_t_v98[80];
  typedef int _g4_t_v99;
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (12u + sizeof(_g4_t_v44)) > _g4_s0 ? (12u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v45)) > _g4_s1 ? (32u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v46)) > _g4_s2 ? (36u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v47)) > _g4_s3 ? (48u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v48)) > _g4_s4 ? (52u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v49)) > _g4_s5 ? (52u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v50)) > _g4_s6 ? (56u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v51)) > _g4_s7 ? (56u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v52)) > _g4_s8 ? (60u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v53)) > _g4_s9 ? (60u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v54)) > _g4_s10 ? (64u + sizeof(_g4_t_v54)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v55)) > _g4_s11 ? (64u + sizeof(_g4_t_v55)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v56)) > _g4_s12 ? (68u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v57)) > _g4_s13 ? (68u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v58)) > _g4_s14 ? (72u + sizeof(_g4_t_v58)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v59)) > _g4_s15 ? (72u + sizeof(_g4_t_v59)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v60)) > _g4_s16 ? (76u + sizeof(_g4_t_v60)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v61)) > _g4_s17 ? (76u + sizeof(_g4_t_v61)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v62)) > _g4_s18 ? (76u + sizeof(_g4_t_v62)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v63)) > _g4_s19 ? (76u + sizeof(_g4_t_v63)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v64)) > _g4_s20 ? (80u + sizeof(_g4_t_v64)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v65)) > _g4_s21 ? (80u + sizeof(_g4_t_v65)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v66)) > _g4_s22 ? (80u + sizeof(_g4_t_v66)) : _g4_s22,
    _g4_s24 = (84u + sizeof(_g4_t_v67)) > _g4_s23 ? (84u + sizeof(_g4_t_v67)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v68)) > _g4_s24 ? (84u + sizeof(_g4_t_v68)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v69)) > _g4_s25 ? (88u + sizeof(_g4_t_v69)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v70)) > _g4_s26 ? (88u + sizeof(_g4_t_v70)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v71)) > _g4_s27 ? (92u + sizeof(_g4_t_v71)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v72)) > _g4_s28 ? (92u + sizeof(_g4_t_v72)) : _g4_s28,
    _g4_s30 = (92u + sizeof(_g4_t_v73)) > _g4_s29 ? (92u + sizeof(_g4_t_v73)) : _g4_s29,
    _g4_s31 = (96u + sizeof(_g4_t_v74)) > _g4_s30 ? (96u + sizeof(_g4_t_v74)) : _g4_s30,
    _g4_s32 = (96u + sizeof(_g4_t_v75)) > _g4_s31 ? (96u + sizeof(_g4_t_v75)) : _g4_s31,
    _g4_s33 = (100u + sizeof(_g4_t_v76)) > _g4_s32 ? (100u + sizeof(_g4_t_v76)) : _g4_s32,
    _g4_s34 = (100u + sizeof(_g4_t_v77)) > _g4_s33 ? (100u + sizeof(_g4_t_v77)) : _g4_s33,
    _g4_s35 = (100u + sizeof(_g4_t_v78)) > _g4_s34 ? (100u + sizeof(_g4_t_v78)) : _g4_s34,
    _g4_s36 = (104u + sizeof(_g4_t_v79)) > _g4_s35 ? (104u + sizeof(_g4_t_v79)) : _g4_s35,
    _g4_s37 = (112u + sizeof(_g4_t_v80)) > _g4_s36 ? (112u + sizeof(_g4_t_v80)) : _g4_s36,
    _g4_s38 = (136u + sizeof(_g4_t_v81)) > _g4_s37 ? (136u + sizeof(_g4_t_v81)) : _g4_s37,
    _g4_s39 = (140u + sizeof(_g4_t_v82)) > _g4_s38 ? (140u + sizeof(_g4_t_v82)) : _g4_s38,
    _g4_s40 = (144u + sizeof(_g4_t_v83)) > _g4_s39 ? (144u + sizeof(_g4_t_v83)) : _g4_s39,
    _g4_s41 = (148u + sizeof(_g4_t_v84)) > _g4_s40 ? (148u + sizeof(_g4_t_v84)) : _g4_s40,
    _g4_s42 = (168u + sizeof(_g4_t_v85)) > _g4_s41 ? (168u + sizeof(_g4_t_v85)) : _g4_s41,
    _g4_s43 = (172u + sizeof(_g4_t_v86)) > _g4_s42 ? (172u + sizeof(_g4_t_v86)) : _g4_s42,
    _g4_s44 = (176u + sizeof(_g4_t_v87)) > _g4_s43 ? (176u + sizeof(_g4_t_v87)) : _g4_s43,
    _g4_s45 = (180u + sizeof(_g4_t_v88)) > _g4_s44 ? (180u + sizeof(_g4_t_v88)) : _g4_s44,
    _g4_s46 = (184u + sizeof(_g4_t_v89)) > _g4_s45 ? (184u + sizeof(_g4_t_v89)) : _g4_s45,
    _g4_s47 = (188u + sizeof(_g4_t_v90)) > _g4_s46 ? (188u + sizeof(_g4_t_v90)) : _g4_s46,
    _g4_s48 = (192u + sizeof(_g4_t_v91)) > _g4_s47 ? (192u + sizeof(_g4_t_v91)) : _g4_s47,
    _g4_s49 = (196u + sizeof(_g4_t_v92)) > _g4_s48 ? (196u + sizeof(_g4_t_v92)) : _g4_s48,
    _g4_s50 = (200u + sizeof(_g4_t_v93)) > _g4_s49 ? (200u + sizeof(_g4_t_v93)) : _g4_s49,
    _g4_s51 = (204u + sizeof(_g4_t_v94)) > _g4_s50 ? (204u + sizeof(_g4_t_v94)) : _g4_s50,
    _g4_s52 = (208u + sizeof(_g4_t_v95)) > _g4_s51 ? (208u + sizeof(_g4_t_v95)) : _g4_s51,
    _g4_s53 = (212u + sizeof(_g4_t_v96)) > _g4_s52 ? (212u + sizeof(_g4_t_v96)) : _g4_s52,
    _g4_s54 = (216u + sizeof(_g4_t_v97)) > _g4_s53 ? (216u + sizeof(_g4_t_v97)) : _g4_s53,
    _g4_s55 = (232u + sizeof(_g4_t_v98)) > _g4_s54 ? (232u + sizeof(_g4_t_v98)) : _g4_s54,
    _g4_s56 = (312u + sizeof(_g4_t_v99)) > _g4_s55 ? (312u + sizeof(_g4_t_v99)) : _g4_s55
  };
  alignas(16) uint8_t _g4_sf[_g4_s56];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 36u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 52u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 56u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 56u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 60u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 64u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 68u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 68u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 72u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 72u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 76u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 76u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 76u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 76u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 80u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 80u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 80u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 84u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 84u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 88u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 88u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 92u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 92u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 92u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 96u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 96u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 100u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 100u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 100u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 104u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 112u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 136u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 140u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 144u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 148u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 168u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 172u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 176u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 180u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 184u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 188u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 192u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 196u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 200u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 204u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 208u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 212u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 216u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 232u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 312u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v46 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtCapsuleTri");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v9 = 1;
  v47 = *a2;
  v10 = *a2 + 32;
  v11 = (float *)a2[2];
  v52 = *v11;
  v54 = v11[1];
  v76 = v11[2];
  v50 = v11[3];
  v48 = v11[4];
  v74 = v11[5];
  v71 = v11[6];
  v69 = v11[7];
  v67 = v11[8];
  v64 = v11[9];
  v60 = v11[10];
  v58 = v11[11];
  v56 = v11[12];
  v45 = *a3;
  v12 = v11[13];
  v13 = v11[14];
  v14 = v11[15];
  while ( 1 )
  {
    v15 = (float *)(v10 + 16 * v9);
    v16 = (float *)(&v81 + 4 * v9);
    v17 = *v15;
    v18 = v15[1];
    v19 = v15[2];
    *v16 = (float)((float)((float)(v52 * *v15) + (float)(v48 * v18)) + (float)(v67 * v19)) + v56;
    v16[1] = (float)((float)((float)(v54 * v17) + (float)(v74 * v18)) + (float)(v64 * v19)) + v12;
    v16[2] = (float)((float)((float)(v76 * v17) + (float)(v71 * v18)) + (float)(v60 * v19)) + v13;
    v16[3] = (float)((float)((float)(v17 * v50) + (float)(v18 * v69)) + (float)(v19 * v58)) + v14;
    if ( v9 != 1 )
      break;
    LOBYTE(v9) = 0;
  }
  v20 = (float *)a3[2];
  v70 = v20[6];
  v68 = v20[7];
  v65 = v20[9];
  v59 = v20[11];
  v61 = v20[10];
  v53 = v20[14];
  v21 = *(float *)(v45 + 68);
  v51 = v20[15];
  v22 = *(float *)(v45 + 64);
  v23 = *v20;
  v57 = v20[12];
  v77 = v20[1];
  v24 = v20[4];
  v49 = v20[3];
  v72 = v20[5];
  v55 = v20[13];
  v25 = *(float *)(v45 + 72);
  v75 = v20[2];
  v26 = v20[8];
  v93 = (float)((float)((float)(v22 * *v20) + (float)(v21 * v24)) + (float)(v25 * v26)) + v57;
  v94 = (float)((float)((float)(v77 * v22) + (float)(v72 * v21)) + (float)(v65 * v25)) + v55;
  v95 = (float)((float)((float)(v75 * v22) + (float)(v70 * v21)) + (float)(v61 * v25)) + v53;
  v96 = (float)((float)((float)(v22 * v49) + (float)(v21 * v68)) + (float)(v25 * v59)) + v51;
  v27 = *(float *)(v45 + 48);
  v28 = *(float *)(v45 + 52);
  v29 = *(float *)(v45 + 56);
  v89 = (float)((float)((float)(v27 * v23) + (float)(v28 * v24)) + (float)(v29 * v26)) + v57;
  v90 = (float)((float)((float)(v77 * v27) + (float)(v72 * v28)) + (float)(v65 * v29)) + v55;
  v91 = (float)((float)((float)(v75 * v27) + (float)(v70 * v28)) + (float)(v61 * v29)) + v53;
  v92 = (float)((float)((float)(v27 * v49) + (float)(v28 * v68)) + (float)(v29 * v59)) + v51;
  v30 = *(float *)(v45 + 32);
  v31 = *(float *)(v45 + 36);
  v32 = *(float *)(v45 + 40);
  v33 = v97;
  *(float *)&v85 = (float)((float)((float)(v23 * v30) + (float)(v24 * v31)) + (float)(v26 * v32)) + v57;
  v86 = (float)((float)((float)(v77 * v30) + (float)(v72 * v31)) + (float)(v65 * v32)) + v55;
  v44 = *(uint32_t *)(a4 + 12);
  v87 = (float)((float)((float)(v75 * v30) + (float)(v70 * v31)) + (float)(v61 * v32)) + v53;
  v88 = (float)((float)((float)(v30 * v49) + (float)(v31 * v68)) + (float)(v32 * v59)) + v51;
  hkCollideCapsuleUtilCapsVsTri(
    (hkLineSegmentUtil::Self *)&v81,
    *(hkVector4f::Self **)(v47 + 16),
    (int)(uintptr_t)(&v85),
    *(hkVector4f::Self **)(v45 + 16),
    a1 + 20,
    v44,
    1,
    COERCE_FLOAT(v97),
    (int)(uintptr_t)(v80));
  v34 = *(float *)(a4 + 12);
  v73 = (uint32_t *)(v98);
  v78 = (char *)v80 + 2;
  v35 = a1;
  do
  {
    if ( v34 <= v33[7] )
    {
      v40 = *(uint16_t *)(v35 + 12);
      if ( (uint16_t)v40 == 0xFFFF )
        goto LABEL_11;
      v66 = v34;
      v62 = v35;
LABEL_17:
      (*(void (**)(uint32_t, int, uint32_t))(**(uint32_t **)(a1 + 8) + 28))(
        *(uint32_t *)(a1 + 8),
        v40,
        *(uint32_t *)(a5 + 4));
      v35 = v62;
      *(uint16_t *)(v62 + 12) = -1;
      v34 = v66;
      goto LABEL_11;
    }
    v79 = *(v78 - 2);
    if ( v79 == 0 )
      goto LABEL_9;
    v81 = *((uint32_t *)v33 + 4);
    v82 = *((uint32_t *)v33 + 5);
    v83 = *((uint32_t *)v33 + 6);
    v84 = *((uint32_t *)v33 + 7);
    v85 = *(int *)v33;
    v86 = v33[1];
    v87 = v33[2];
    v62 = v35;
    v66 = v34;
    v88 = v33[3];
    v41 = G4_VCALL<int>(v45, 60, v78, &v79, &v85, a3[2], v47, a2[2], &v81);
    *v33 = *(float *)&v85;
    v33[1] = v86;
    v33[2] = v87;
    v33[3] = v88;
    v35 = v62;
    if ( v41 != 0 )
    {
      if ( v41 == 1 )
      {
        *v73 = v81;
        v73[1] = v82;
        v73[2] = v83;
      }
LABEL_9:
      if ( *(uint16_t *)(v35 + 12) != 0xFFFF
        || (v63 = v35,
            v42 = (*(int (**)(uint32_t, int *, int *, int, int, uint32_t, float *))(**(uint32_t **)(a1 + 8) + 20))(
                    *(uint32_t *)(a1 + 8),
                    a2,
                    a3,
                    a4,
                    a5,
                    0,
                    v33),
            v35 = v63,
            *(uint16_t *)(v63 + 12) = v42,
            v42 != -1) )
      {
        v36 = *(uint32_t **)a5;
        *(uint32_t *)a5 += 48;
        *v36 = *(uint32_t *)v33;
        v36[1] = *((uint32_t *)v33 + 1);
        v36[2] = *((uint32_t *)v33 + 2);
        v36[3] = *((uint32_t *)v33 + 3);
        v36[4] = *(uint32_t *)&v98[(char *)v33 - (char *)v97];
        v36[5] = *(uint32_t *)&v98[(char *)v33 - (char *)v97 + 4];
        v36[6] = *(uint32_t *)&v98[(char *)v33 - (char *)v97 + 8];
        v36[7] = *(uint32_t *)&v98[(char *)v33 - (char *)v97 + 12];
        v36[8] = *(uint16_t *)(v35 + 12);
      }
      goto LABEL_11;
    }
    v40 = *(uint16_t *)(v62 + 12);
    if ( (uint16_t)v40 != 0xFFFF )
      goto LABEL_17;
LABEL_11:
    v35 += 2;
    v33 += 8;
    v73 += 8;
    v78 += 8;
  }
  while ( v33 != (float *)&v99 );
  LODWORD(v37) = (uint32_t)(uintptr_t)(v46);
  v38 = *v46;
  v39 = *(uint32_t **)(*v46 + 4);
  if ( (unsigned int)(uintptr_t)(v39) < *(uint32_t *)(*v46 + 12) )
  {
    *v39 = (uint32_t)(uintptr_t)("Et");
    v37 = __rdtsc();
    v39[1] = v37;
    *(uint32_t *)(v38 + 4) = (uint32_t)(uintptr_t)(v39 + 3);
  }
  return v37;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleTriangleAgent::staticGetClosestPoints  (binary VA: 0x16f2620)
// Original: hkpCapsuleTriangleAgent::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpCapsuleTriangleAgent::staticGetClosestPoints(int *a1, int *a2, float *a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  int v9;
  int v10;
  float *v11;
  float v12; // xmm5_4
  float v13; // xmm6_4
  float v14; // xmm4_4
  float *v15;
  float *v16;
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float *v20;
  float v21; // xmm2_4
  float v22; // xmm3_4
  float v23; // xmm6_4
  float v24; // xmm5_4
  float v25; // xmm1_4
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  uint64_t v33; // rax
  int v34;
  uint32_t *v35;
  int v36;
  int v37;
  float *v38;
  char v39;
  int v40;
  int v41;
  typedef int _g4_t_v43;
  typedef int *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef int _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef int _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef int _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef int _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef char _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef uint8_t _g4_t_v81[20];
  typedef uint64_t _g4_t_v82[7];
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97;
  typedef float _g4_t_v98;
  typedef uint32_t _g4_t_v99[16];
  typedef float _g4_t_v100[27];
  enum : size_t {
    _g4_s0 = 544u,
    _g4_s1 = (12u + sizeof(_g4_t_v43)) > _g4_s0 ? (12u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v44)) > _g4_s1 ? (40u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v45)) > _g4_s2 ? (48u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v46)) > _g4_s3 ? (52u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v47)) > _g4_s4 ? (52u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v48)) > _g4_s5 ? (56u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v49)) > _g4_s6 ? (56u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v50)) > _g4_s7 ? (60u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v51)) > _g4_s8 ? (60u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v52)) > _g4_s9 ? (64u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v53)) > _g4_s10 ? (64u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v54)) > _g4_s11 ? (68u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v55)) > _g4_s12 ? (68u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v56)) > _g4_s13 ? (72u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v57)) > _g4_s14 ? (72u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v58)) > _g4_s15 ? (76u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v59)) > _g4_s16 ? (76u + sizeof(_g4_t_v59)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v60)) > _g4_s17 ? (80u + sizeof(_g4_t_v60)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v61)) > _g4_s18 ? (80u + sizeof(_g4_t_v61)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v62)) > _g4_s19 ? (80u + sizeof(_g4_t_v62)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v63)) > _g4_s20 ? (84u + sizeof(_g4_t_v63)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v64)) > _g4_s21 ? (84u + sizeof(_g4_t_v64)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v65)) > _g4_s22 ? (84u + sizeof(_g4_t_v65)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v66)) > _g4_s23 ? (88u + sizeof(_g4_t_v66)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v67)) > _g4_s24 ? (88u + sizeof(_g4_t_v67)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v68)) > _g4_s25 ? (88u + sizeof(_g4_t_v68)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v69)) > _g4_s26 ? (92u + sizeof(_g4_t_v69)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v70)) > _g4_s27 ? (92u + sizeof(_g4_t_v70)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v71)) > _g4_s28 ? (92u + sizeof(_g4_t_v71)) : _g4_s28,
    _g4_s30 = (96u + sizeof(_g4_t_v72)) > _g4_s29 ? (96u + sizeof(_g4_t_v72)) : _g4_s29,
    _g4_s31 = (96u + sizeof(_g4_t_v73)) > _g4_s30 ? (96u + sizeof(_g4_t_v73)) : _g4_s30,
    _g4_s32 = (100u + sizeof(_g4_t_v74)) > _g4_s31 ? (100u + sizeof(_g4_t_v74)) : _g4_s31,
    _g4_s33 = (100u + sizeof(_g4_t_v75)) > _g4_s32 ? (100u + sizeof(_g4_t_v75)) : _g4_s32,
    _g4_s34 = (119u + sizeof(_g4_t_v76)) > _g4_s33 ? (119u + sizeof(_g4_t_v76)) : _g4_s33,
    _g4_s35 = (120u + sizeof(_g4_t_v77)) > _g4_s34 ? (120u + sizeof(_g4_t_v77)) : _g4_s34,
    _g4_s36 = (124u + sizeof(_g4_t_v78)) > _g4_s35 ? (124u + sizeof(_g4_t_v78)) : _g4_s35,
    _g4_s37 = (128u + sizeof(_g4_t_v79)) > _g4_s36 ? (128u + sizeof(_g4_t_v79)) : _g4_s36,
    _g4_s38 = (132u + sizeof(_g4_t_v80)) > _g4_s37 ? (132u + sizeof(_g4_t_v80)) : _g4_s37,
    _g4_s39 = (140u + sizeof(_g4_t_v81)) > _g4_s38 ? (140u + sizeof(_g4_t_v81)) : _g4_s38,
    _g4_s40 = (160u + sizeof(_g4_t_v82)) > _g4_s39 ? (160u + sizeof(_g4_t_v82)) : _g4_s39,
    _g4_s41 = (216u + sizeof(_g4_t_v83)) > _g4_s40 ? (216u + sizeof(_g4_t_v83)) : _g4_s40,
    _g4_s42 = (220u + sizeof(_g4_t_v84)) > _g4_s41 ? (220u + sizeof(_g4_t_v84)) : _g4_s41,
    _g4_s43 = (224u + sizeof(_g4_t_v85)) > _g4_s42 ? (224u + sizeof(_g4_t_v85)) : _g4_s42,
    _g4_s44 = (228u + sizeof(_g4_t_v86)) > _g4_s43 ? (228u + sizeof(_g4_t_v86)) : _g4_s43,
    _g4_s45 = (248u + sizeof(_g4_t_v87)) > _g4_s44 ? (248u + sizeof(_g4_t_v87)) : _g4_s44,
    _g4_s46 = (252u + sizeof(_g4_t_v88)) > _g4_s45 ? (252u + sizeof(_g4_t_v88)) : _g4_s45,
    _g4_s47 = (256u + sizeof(_g4_t_v89)) > _g4_s46 ? (256u + sizeof(_g4_t_v89)) : _g4_s46,
    _g4_s48 = (260u + sizeof(_g4_t_v90)) > _g4_s47 ? (260u + sizeof(_g4_t_v90)) : _g4_s47,
    _g4_s49 = (264u + sizeof(_g4_t_v91)) > _g4_s48 ? (264u + sizeof(_g4_t_v91)) : _g4_s48,
    _g4_s50 = (268u + sizeof(_g4_t_v92)) > _g4_s49 ? (268u + sizeof(_g4_t_v92)) : _g4_s49,
    _g4_s51 = (272u + sizeof(_g4_t_v93)) > _g4_s50 ? (272u + sizeof(_g4_t_v93)) : _g4_s50,
    _g4_s52 = (276u + sizeof(_g4_t_v94)) > _g4_s51 ? (276u + sizeof(_g4_t_v94)) : _g4_s51,
    _g4_s53 = (280u + sizeof(_g4_t_v95)) > _g4_s52 ? (280u + sizeof(_g4_t_v95)) : _g4_s52,
    _g4_s54 = (284u + sizeof(_g4_t_v96)) > _g4_s53 ? (284u + sizeof(_g4_t_v96)) : _g4_s53,
    _g4_s55 = (288u + sizeof(_g4_t_v97)) > _g4_s54 ? (288u + sizeof(_g4_t_v97)) : _g4_s54,
    _g4_s56 = (292u + sizeof(_g4_t_v98)) > _g4_s55 ? (292u + sizeof(_g4_t_v98)) : _g4_s55,
    _g4_s57 = (296u + sizeof(_g4_t_v99)) > _g4_s56 ? (296u + sizeof(_g4_t_v99)) : _g4_s56,
    _g4_s58 = (360u + sizeof(_g4_t_v100)) > _g4_s57 ? (360u + sizeof(_g4_t_v100)) : _g4_s57
  };
  alignas(16) uint8_t _g4_sf[_g4_s58];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 12u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 48u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 52u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 52u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 56u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 56u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 60u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 64u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 68u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 68u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 72u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 72u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 76u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 76u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 80u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 80u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 80u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 84u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 84u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 84u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 88u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 88u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 88u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 92u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 92u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 92u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 96u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 96u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 100u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 100u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 119u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 120u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 124u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 128u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 132u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 140u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 160u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 216u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 220u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 224u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 228u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 248u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 252u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 256u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 260u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 264u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 268u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 272u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 276u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 280u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 284u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 288u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 292u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 296u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 360u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v44 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtCapsTriangle");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  hkpCollideTriangleUtil::setupPointTriangleDistanceCache(*a2 + 32, (int)(uintptr_t)(v81));
  v99[12] = (uint32_t)(uintptr_t)(a1);
  v99[13] = (uint32_t)(uintptr_t)(a2);
  memset(v99, 0, 48);
  memset(&v82[3], 0, 32);
  v45 = *a1;
  v8 = *a2;
  v9 = *a1 + 32;
  v10 = 1;
  v11 = (float *)a1[2];
  v48 = *v11;
  v50 = v11[1];
  v72 = v11[2];
  v74 = v11[3];
  v56 = v11[4];
  v63 = v11[5];
  v46 = v11[6];
  v54 = v11[7];
  v60 = v11[8];
  v58 = v11[9];
  v52 = v11[10];
  v69 = v11[11];
  v66 = v11[12];
  v12 = v11[14];
  v13 = v11[13];
  v14 = v11[15];
  while ( 1 )
  {
    v15 = (float *)(v9 + 16 * v10);
    v16 = (float *)(&v83 + 4 * v10);
    v17 = *v15;
    v18 = v15[1];
    v19 = v15[2];
    *v16 = (float)((float)((float)(v48 * *v15) + (float)(v56 * v18)) + (float)(v60 * v19)) + v66;
    v16[1] = (float)((float)((float)(v50 * v17) + (float)(v63 * v18)) + (float)(v58 * v19)) + v13;
    v16[2] = (float)((float)((float)(v72 * v17) + (float)(v46 * v18)) + (float)(v52 * v19)) + v12;
    v16[3] = (float)((float)((float)(v17 * v74) + (float)(v18 * v54)) + (float)(v19 * v69)) + v14;
    if ( v10 != 1 )
      break;
    LOBYTE(v10) = 0;
  }
  v20 = (float *)a2[2];
  v47 = v20[3];
  v64 = v20[7];
  v70 = v20[5];
  v61 = v20[9];
  v59 = v20[10];
  v53 = v20[13];
  v21 = *(float *)(v8 + 68);
  v49 = v20[15];
  v22 = *(float *)(v8 + 64);
  v23 = *v20;
  v55 = v20[12];
  v75 = v20[1];
  v24 = v20[4];
  v67 = v20[6];
  v57 = v20[11];
  v51 = v20[14];
  v25 = *(float *)(v8 + 72);
  v73 = v20[2];
  v26 = v20[8];
  v95 = (float)((float)((float)(v22 * *v20) + (float)(v21 * v24)) + (float)(v25 * v26)) + v55;
  v96 = (float)((float)((float)(v75 * v22) + (float)(v70 * v21)) + (float)(v61 * v25)) + v53;
  v97 = (float)((float)((float)(v73 * v22) + (float)(v67 * v21)) + (float)(v59 * v25)) + v51;
  v98 = (float)((float)((float)(v22 * v47) + (float)(v21 * v64)) + (float)(v25 * v57)) + v49;
  v27 = *(float *)(v8 + 48);
  v28 = *(float *)(v8 + 52);
  v29 = *(float *)(v8 + 56);
  v91 = (float)((float)((float)(v27 * v23) + (float)(v28 * v24)) + (float)(v29 * v26)) + v55;
  v92 = (float)((float)((float)(v75 * v27) + (float)(v70 * v28)) + (float)(v61 * v29)) + v53;
  v93 = (float)((float)((float)(v73 * v27) + (float)(v67 * v28)) + (float)(v59 * v29)) + v51;
  v94 = (float)((float)((float)(v27 * v47) + (float)(v28 * v64)) + (float)(v29 * v57)) + v49;
  v30 = *(float *)(v8 + 32);
  v31 = *(float *)(v8 + 36);
  v32 = *(float *)(v8 + 40);
  *(float *)&v87 = (float)((float)((float)(v23 * v30) + (float)(v24 * v31)) + (float)(v26 * v32)) + v55;
  v88 = (float)((float)((float)(v75 * v30) + (float)(v70 * v31)) + (float)(v61 * v32)) + v53;
  v43 = *((uint32_t *)a3 + 3);
  v89 = (float)((float)((float)(v73 * v30) + (float)(v67 * v31)) + (float)(v59 * v32)) + v51;
  v90 = (float)((float)((float)(v30 * v47) + (float)(v31 * v64)) + (float)(v32 * v57)) + v49;
  hkCollideCapsuleUtilCapsVsTri(
    (hkLineSegmentUtil::Self *)&v83,
    *(hkVector4f::Self **)(v45 + 16),
    (int)(uintptr_t)(&v87),
    *(hkVector4f::Self **)(v8 + 16),
    (int)(uintptr_t)(v81),
    v43,
    0,
    COERCE_FLOAT(v100),
    (int)(uintptr_t)(v82));
  if ( v100[15] <= v100[7] )
  {
    if ( a3[3] <= v100[15] )
      goto LABEL_8;
    v36 = 1;
  }
  else
  {
    if ( a3[3] <= v100[7] )
      goto LABEL_8;
    v36 = 0;
  }
  v37 = *((uint32_t *)a3 + 1);
  v38 = &v100[8 * v36];
  v71 = *((uint32_t *)v38 + 4);
  v77 = v71;
  v68 = *((uint32_t *)v38 + 5);
  v78 = v68;
  v65 = *((uint32_t *)v38 + 6);
  v79 = v65;
  v62 = *((uint32_t *)v38 + 7);
  v80 = v62;
  v39 = v82[v36];
  v76 = v39;
  if ( v37 == 0 || v39 == 0 )
    goto LABEL_19;
  v83 = v71;
  v84 = v68;
  v85 = v65;
  v86 = v62;
  v87 = *(int *)v38;
  v88 = v38[1];
  v89 = v38[2];
  v90 = v38[3];
  v40 = G4_VCALL<int>(v8, 60, (char *)&v82[v36] + 2, &v76, &v87, a2[2], v45, a1[2], &v83);
  *v38 = *(float *)&v87;
  v38[1] = v88;
  v38[2] = v89;
  v41 = *((uint32_t *)a3 + 2);
  v38[3] = v90;
  if ( v41 != 0 || v40 != 0 )
  {
    if ( v40 == 1 )
    {
      *((uint32_t *)v38 + 4) = v83;
      *((uint32_t *)v38 + 5) = v84;
      *((uint32_t *)v38 + 6) = v85;
    }
LABEL_19:
    std::memcpy(v99, v38, 32);
    v99[8] = v77;
    v99[9] = v78;
    v99[10] = v79;
    v99[11] = v80;
    G4_VCALL<void>(a4, 8, v99);
  }
LABEL_8:
  LODWORD(v33) = (uint32_t)(uintptr_t)(v44);
  v34 = *v44;
  v35 = *(uint32_t **)(*v44 + 4);
  if ( (unsigned int)(uintptr_t)(v35) < *(uint32_t *)(*v44 + 12) )
  {
    *v35 = (uint32_t)(uintptr_t)("Et");
    v33 = __rdtsc();
    v35[1] = v33;
    *(uint32_t *)(v34 + 4) = (uint32_t)(uintptr_t)(v35 + 3);
  }
  return v33;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleTriangleAgent::initAgentFunc  (binary VA: 0x16f2f40)
// Original: hkpCapsuleTriangleAgent::initAgentFunc
// ----------------------------------------------------------------------------
int hkpCapsuleTriangleAgent::initAgentFunc(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(hkpCapsuleTriangleAgent::createCapsuleTriangleAgent);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(hkpCapsuleTriangleAgent::staticGetPenetrations);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(hkpCapsuleTriangleAgent::staticGetClosestPoints);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(((int * (*)(unsigned int, float *, float *, float *, int, int, int, int, int, int, int, unsigned int, int, int, int, int, int, int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, g4_int128_t, float, int, int, int, int, int, int, int, int, int, int, int, float, float, float, float, unsigned int, unsigned int, unsigned int, unsigned int, g4_int128_t, int32_t, unsigned int, int32_t, int32_t, unsigned int, float *, int, int, int, int, int, int, unsigned int))hkpIterativeLinearCastAgent::staticLinearCast));
  *(uint8_t *)(a1 + 16) = 0;
  *(uint8_t *)(a1 + 17) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleTriangleAgent::initAgentFuncInverse  (binary VA: 0x16f2f80)
// Original: hkpCapsuleTriangleAgent::initAgentFuncInverse
// ----------------------------------------------------------------------------
int hkpCapsuleTriangleAgent::initAgentFuncInverse(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(hkpCapsuleTriangleAgent::createTriangleCapsuleAgent);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpCapsuleTriangleAgent_38b2ef::staticGetPenetrations);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpCapsuleTriangleAgent_38b2ef::staticGetClosestPoints);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpCapsuleTriangleAgent_38b2ef::staticLinearCast);
  *(uint8_t *)(a1 + 16) = 1;
  *(uint8_t *)(a1 + 17) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleTriangleAgent::registerAgent  (binary VA: 0x16f2fc0)
// Original: hkpCapsuleTriangleAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpCapsuleTriangleAgent::registerAgent(hkpCapsuleTriangleAgent::Self *self)
{
  uint8_t v2[44];

  v2[16] = 0;
  v2[17] = 0;
  hkpCapsuleTriangleAgent::initAgentFuncInverse((int)(uintptr_t)(v2));
  hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 2, 4);
  v2[16] = 0;
  v2[17] = 0;
  hkpCapsuleTriangleAgent::initAgentFunc((int)(uintptr_t)(v2));
  return hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 4, 2);
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleTriangleAgent::registerAgent2  (binary VA: 0x16f3050)
// Original: hkpCapsuleTriangleAgent::registerAgent2
// ----------------------------------------------------------------------------
int hkpCapsuleTriangleAgent::registerAgent2(hkpCapsuleTriangleAgent::Self *self)
{
  uint8_t v2[44];

  v2[16] = 0;
  v2[17] = 0;
  hkpCapsuleTriangleAgent::initAgentFuncInverse((int)(uintptr_t)(v2));
  hkpCollisionDispatcher::registerCollisionAgent2((int *)self, (int)(uintptr_t)(v2), 2, 4);
  v2[16] = 0;
  v2[17] = 0;
  hkpCapsuleTriangleAgent::initAgentFunc((int)(uintptr_t)(v2));
  return hkpCollisionDispatcher::registerCollisionAgent2((int *)self, (int)(uintptr_t)(v2), 4, 2);
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleTriangleAgent::getClosestPointsPublic  (binary VA: 0x16f30e0)
// Original: hkpCapsuleTriangleAgent::getClosestPointsPublic
// ----------------------------------------------------------------------------
int hkpCapsuleTriangleAgent::getClosestPointsPublic(int *a1, int *a2, int a3, int a4, int a5, float a6)
{
  int v6;
  float *v7;
  int v8;
  float v9; // xmm5_4
  float v10; // xmm6_4
  float v11; // xmm4_4
  float *v12;
  float *v13;
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float *v17;
  float v18; // xmm2_4
  float v19; // xmm3_4
  float v20; // xmm6_4
  float v21; // xmm5_4
  float v22; // xmm1_4
  float v23; // xmm4_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
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
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef uint64_t _g4_t_v60[4];
  typedef float _g4_t_v61[15];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v31)) > _g4_s0 ? (4u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v32)) > _g4_s1 ? (32u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v33)) > _g4_s2 ? (40u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v34)) > _g4_s3 ? (44u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v35)) > _g4_s4 ? (44u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v36)) > _g4_s5 ? (48u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v37)) > _g4_s6 ? (48u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v38)) > _g4_s7 ? (52u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v39)) > _g4_s8 ? (52u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v40)) > _g4_s9 ? (56u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v41)) > _g4_s10 ? (56u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v42)) > _g4_s11 ? (60u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v43)) > _g4_s12 ? (60u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v44)) > _g4_s13 ? (64u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v45)) > _g4_s14 ? (64u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v46)) > _g4_s15 ? (68u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v47)) > _g4_s16 ? (68u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v48)) > _g4_s17 ? (72u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v49)) > _g4_s18 ? (72u + sizeof(_g4_t_v49)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v50)) > _g4_s19 ? (76u + sizeof(_g4_t_v50)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v51)) > _g4_s20 ? (76u + sizeof(_g4_t_v51)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v52)) > _g4_s21 ? (80u + sizeof(_g4_t_v52)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v53)) > _g4_s22 ? (80u + sizeof(_g4_t_v53)) : _g4_s22,
    _g4_s24 = (84u + sizeof(_g4_t_v54)) > _g4_s23 ? (84u + sizeof(_g4_t_v54)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v55)) > _g4_s24 ? (84u + sizeof(_g4_t_v55)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v56)) > _g4_s25 ? (88u + sizeof(_g4_t_v56)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v57)) > _g4_s26 ? (88u + sizeof(_g4_t_v57)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v58)) > _g4_s27 ? (92u + sizeof(_g4_t_v58)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v59)) > _g4_s28 ? (92u + sizeof(_g4_t_v59)) : _g4_s28,
    _g4_s30 = (96u + sizeof(_g4_t_v60)) > _g4_s29 ? (96u + sizeof(_g4_t_v60)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v61)) > _g4_s30 ? (128u + sizeof(_g4_t_v61)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 60u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 60u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 64u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 64u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 68u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 68u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 72u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 72u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 76u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 76u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 80u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 80u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 84u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 84u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 88u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 88u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 92u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 92u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 96u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 128u);

  v6 = 1;
  v7 = (float *)a1[2];
  v33 = *a1;
  v34 = *v7;
  v8 = *a1 + 32;
  v36 = v7[1];
  v58 = v7[2];
  v56 = v7[3];
  v54 = v7[4];
  v52 = v7[5];
  v50 = v7[6];
  v48 = v7[7];
  v46 = v7[8];
  v44 = v7[9];
  v42 = v7[10];
  v40 = v7[11];
  v32 = *a2;
  v38 = v7[12];
  v9 = v7[14];
  v10 = v7[13];
  v11 = v7[15];
  while ( 1 )
  {
    v12 = (float *)(v8 + 16 * v6);
    v13 = (float *)&v60[2 * v6];
    v14 = *v12;
    v15 = v12[1];
    v16 = v12[2];
    *v13 = (float)((float)((float)(v34 * *v12) + (float)(v54 * v15)) + (float)(v46 * v16)) + v38;
    v13[1] = (float)((float)((float)(v36 * v14) + (float)(v52 * v15)) + (float)(v44 * v16)) + v10;
    v13[2] = (float)((float)((float)(v58 * v14) + (float)(v50 * v15)) + (float)(v42 * v16)) + v9;
    v13[3] = (float)((float)((float)(v14 * v56) + (float)(v15 * v48)) + (float)(v16 * v40)) + v11;
    if ( v6 != 1 )
      break;
    LOBYTE(v6) = 0;
  }
  v17 = (float *)a2[2];
  v41 = v17[6];
  v39 = v17[7];
  v37 = v17[9];
  v57 = v17[11];
  v59 = v17[10];
  v53 = v17[14];
  v18 = *(float *)(v32 + 68);
  v55 = v17[15];
  v19 = *(float *)(v32 + 64);
  v20 = *v17;
  v49 = v17[12];
  v47 = v17[1];
  v21 = v17[4];
  v35 = v17[3];
  v43 = v17[5];
  v51 = v17[13];
  v22 = *(float *)(v32 + 72);
  v45 = v17[2];
  v23 = v17[8];
  v61[8] = (float)((float)((float)(v19 * *v17) + (float)(v18 * v21)) + (float)(v22 * v23)) + v49;
  v61[9] = (float)((float)((float)(v47 * v19) + (float)(v43 * v18)) + (float)(v37 * v22)) + v51;
  v61[10] = (float)((float)((float)(v45 * v19) + (float)(v41 * v18)) + (float)(v59 * v22)) + v53;
  v61[11] = (float)((float)((float)(v19 * v35) + (float)(v18 * v39)) + (float)(v22 * v57)) + v55;
  v24 = *(float *)(v32 + 48);
  v25 = *(float *)(v32 + 52);
  v26 = *(float *)(v32 + 56);
  v61[4] = (float)((float)((float)(v24 * v20) + (float)(v25 * v21)) + (float)(v26 * v23)) + v49;
  v61[5] = (float)((float)((float)(v47 * v24) + (float)(v43 * v25)) + (float)(v37 * v26)) + v51;
  v61[6] = (float)((float)((float)(v45 * v24) + (float)(v41 * v25)) + (float)(v59 * v26)) + v53;
  v61[7] = (float)((float)((float)(v24 * v35) + (float)(v25 * v39)) + (float)(v26 * v57)) + v55;
  v27 = *(float *)(v32 + 32);
  v28 = *(float *)(v32 + 36);
  v29 = *(float *)(v32 + 40);
  v61[0] = (float)((float)((float)(v20 * v27) + (float)(v21 * v28)) + (float)(v23 * v29)) + v49;
  v61[1] = (float)((float)((float)(v47 * v27) + (float)(v43 * v28)) + (float)(v37 * v29)) + v51;
  v31 = *(uint32_t *)(a3 + 12);
  v61[2] = (float)((float)((float)(v45 * v27) + (float)(v41 * v28)) + (float)(v59 * v29)) + v53;
  v61[3] = (float)((float)((float)(v27 * v35) + (float)(v28 * v39)) + (float)(v29 * v57)) + v55;
  return (int)(uintptr_t)(hkCollideCapsuleUtilCapsVsTri(
           (hkLineSegmentUtil::Self *)v60,
           *(hkVector4f::Self **)(v33 + 16),
           (int)(uintptr_t)(v61),
           *(hkVector4f::Self **)(v32 + 16),
           a4,
           v31,
           a5,
           a6,
           0));
}

// ----------------------------------------------------------------------------
// Function: hkpCapsuleTriangleAgent::getClosestPoint  (binary VA: 0x16f3610)
// Original: hkpCapsuleTriangleAgent::getClosestPoint
// ----------------------------------------------------------------------------
int hkpCapsuleTriangleAgent::getClosestPoint(int *a1, int *a2, float *a3, int a4, int *a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  float *v9;
  float v10; // xmm5_4
  float v11; // xmm6_4
  float v12; // xmm4_4
  float *v13;
  float *v14;
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float *v18;
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm6_4
  float v22; // xmm5_4
  float v23; // xmm1_4
  float v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  int result;
  int v32;
  int v33;
  int *v34;
  char v35;
  int v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef int _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef int _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef int _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef int _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef uint8_t _g4_t_v69[25];
  typedef uint64_t _g4_t_v70[7];
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef float _g4_t_v95[27];
  enum : size_t {
    _g4_s0 = 528u,
    _g4_s1 = (12u + sizeof(_g4_t_v37)) > _g4_s0 ? (12u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v38)) > _g4_s1 ? (48u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v39)) > _g4_s2 ? (52u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v40)) > _g4_s3 ? (52u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v41)) > _g4_s4 ? (56u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v42)) > _g4_s5 ? (56u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v43)) > _g4_s6 ? (60u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v44)) > _g4_s7 ? (60u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v45)) > _g4_s8 ? (64u + sizeof(_g4_t_v45)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v46)) > _g4_s9 ? (64u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v47)) > _g4_s10 ? (68u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v48)) > _g4_s11 ? (68u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v49)) > _g4_s12 ? (72u + sizeof(_g4_t_v49)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v50)) > _g4_s13 ? (72u + sizeof(_g4_t_v50)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v51)) > _g4_s14 ? (76u + sizeof(_g4_t_v51)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v52)) > _g4_s15 ? (76u + sizeof(_g4_t_v52)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v53)) > _g4_s16 ? (80u + sizeof(_g4_t_v53)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v54)) > _g4_s17 ? (80u + sizeof(_g4_t_v54)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v55)) > _g4_s18 ? (80u + sizeof(_g4_t_v55)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v56)) > _g4_s19 ? (84u + sizeof(_g4_t_v56)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v57)) > _g4_s20 ? (84u + sizeof(_g4_t_v57)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v58)) > _g4_s21 ? (84u + sizeof(_g4_t_v58)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v59)) > _g4_s22 ? (88u + sizeof(_g4_t_v59)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v60)) > _g4_s23 ? (88u + sizeof(_g4_t_v60)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v61)) > _g4_s24 ? (88u + sizeof(_g4_t_v61)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v62)) > _g4_s25 ? (92u + sizeof(_g4_t_v62)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v63)) > _g4_s26 ? (92u + sizeof(_g4_t_v63)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v64)) > _g4_s27 ? (92u + sizeof(_g4_t_v64)) : _g4_s27,
    _g4_s29 = (96u + sizeof(_g4_t_v65)) > _g4_s28 ? (96u + sizeof(_g4_t_v65)) : _g4_s28,
    _g4_s30 = (96u + sizeof(_g4_t_v66)) > _g4_s29 ? (96u + sizeof(_g4_t_v66)) : _g4_s29,
    _g4_s31 = (100u + sizeof(_g4_t_v67)) > _g4_s30 ? (100u + sizeof(_g4_t_v67)) : _g4_s30,
    _g4_s32 = (100u + sizeof(_g4_t_v68)) > _g4_s31 ? (100u + sizeof(_g4_t_v68)) : _g4_s31,
    _g4_s33 = (119u + sizeof(_g4_t_v69)) > _g4_s32 ? (119u + sizeof(_g4_t_v69)) : _g4_s32,
    _g4_s34 = (144u + sizeof(_g4_t_v70)) > _g4_s33 ? (144u + sizeof(_g4_t_v70)) : _g4_s33,
    _g4_s35 = (200u + sizeof(_g4_t_v71)) > _g4_s34 ? (200u + sizeof(_g4_t_v71)) : _g4_s34,
    _g4_s36 = (204u + sizeof(_g4_t_v72)) > _g4_s35 ? (204u + sizeof(_g4_t_v72)) : _g4_s35,
    _g4_s37 = (208u + sizeof(_g4_t_v73)) > _g4_s36 ? (208u + sizeof(_g4_t_v73)) : _g4_s36,
    _g4_s38 = (212u + sizeof(_g4_t_v74)) > _g4_s37 ? (212u + sizeof(_g4_t_v74)) : _g4_s37,
    _g4_s39 = (232u + sizeof(_g4_t_v75)) > _g4_s38 ? (232u + sizeof(_g4_t_v75)) : _g4_s38,
    _g4_s40 = (236u + sizeof(_g4_t_v76)) > _g4_s39 ? (236u + sizeof(_g4_t_v76)) : _g4_s39,
    _g4_s41 = (240u + sizeof(_g4_t_v77)) > _g4_s40 ? (240u + sizeof(_g4_t_v77)) : _g4_s40,
    _g4_s42 = (244u + sizeof(_g4_t_v78)) > _g4_s41 ? (244u + sizeof(_g4_t_v78)) : _g4_s41,
    _g4_s43 = (248u + sizeof(_g4_t_v79)) > _g4_s42 ? (248u + sizeof(_g4_t_v79)) : _g4_s42,
    _g4_s44 = (252u + sizeof(_g4_t_v80)) > _g4_s43 ? (252u + sizeof(_g4_t_v80)) : _g4_s43,
    _g4_s45 = (256u + sizeof(_g4_t_v81)) > _g4_s44 ? (256u + sizeof(_g4_t_v81)) : _g4_s44,
    _g4_s46 = (260u + sizeof(_g4_t_v82)) > _g4_s45 ? (260u + sizeof(_g4_t_v82)) : _g4_s45,
    _g4_s47 = (264u + sizeof(_g4_t_v83)) > _g4_s46 ? (264u + sizeof(_g4_t_v83)) : _g4_s46,
    _g4_s48 = (268u + sizeof(_g4_t_v84)) > _g4_s47 ? (268u + sizeof(_g4_t_v84)) : _g4_s47,
    _g4_s49 = (272u + sizeof(_g4_t_v85)) > _g4_s48 ? (272u + sizeof(_g4_t_v85)) : _g4_s48,
    _g4_s50 = (276u + sizeof(_g4_t_v86)) > _g4_s49 ? (276u + sizeof(_g4_t_v86)) : _g4_s49,
    _g4_s51 = (280u + sizeof(_g4_t_v87)) > _g4_s50 ? (280u + sizeof(_g4_t_v87)) : _g4_s50,
    _g4_s52 = (284u + sizeof(_g4_t_v88)) > _g4_s51 ? (284u + sizeof(_g4_t_v88)) : _g4_s51,
    _g4_s53 = (288u + sizeof(_g4_t_v89)) > _g4_s52 ? (288u + sizeof(_g4_t_v89)) : _g4_s52,
    _g4_s54 = (292u + sizeof(_g4_t_v90)) > _g4_s53 ? (292u + sizeof(_g4_t_v90)) : _g4_s53,
    _g4_s55 = (296u + sizeof(_g4_t_v91)) > _g4_s54 ? (296u + sizeof(_g4_t_v91)) : _g4_s54,
    _g4_s56 = (300u + sizeof(_g4_t_v92)) > _g4_s55 ? (300u + sizeof(_g4_t_v92)) : _g4_s55,
    _g4_s57 = (304u + sizeof(_g4_t_v93)) > _g4_s56 ? (304u + sizeof(_g4_t_v93)) : _g4_s56,
    _g4_s58 = (308u + sizeof(_g4_t_v94)) > _g4_s57 ? (308u + sizeof(_g4_t_v94)) : _g4_s57,
    _g4_s59 = (344u + sizeof(_g4_t_v95)) > _g4_s58 ? (344u + sizeof(_g4_t_v95)) : _g4_s58
  };
  alignas(16) uint8_t _g4_sf[_g4_s59];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 52u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 60u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 60u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 64u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 64u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 68u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 68u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 72u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 72u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 76u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 76u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 80u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 80u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 80u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 84u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 84u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 84u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 88u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 88u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 88u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 92u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 92u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 92u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 96u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 96u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 100u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 100u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 119u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 144u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 200u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 204u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 208u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 212u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 232u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 236u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 240u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 244u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 248u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 252u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 256u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 260u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 264u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 268u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 272u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 276u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 280u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 284u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 288u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 292u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 296u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 300u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 304u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 308u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 344u);

  v90 = 0;
  v94 = 0;
  memset(&v70[3], 0, 32);
  v87 = 0;
  v91 = 0;
  v5 = *a2;
  v6 = *a1;
  v88 = 0;
  v38 = v6;
  v92 = 0;
  v89 = 0;
  v93 = 0;
  v7 = v6 + 32;
  v8 = 1;
  v9 = (float *)a1[2];
  v39 = *v9;
  v41 = v9[1];
  v51 = v9[2];
  v49 = v9[3];
  v47 = v9[4];
  v53 = v9[5];
  v45 = v9[6];
  v67 = v9[7];
  v65 = v9[8];
  v62 = v9[9];
  v59 = v9[10];
  v56 = v9[11];
  v43 = v9[12];
  v10 = v9[14];
  v11 = v9[13];
  v12 = v9[15];
  while ( 1 )
  {
    v13 = (float *)(v7 + 16 * v8);
    v14 = (float *)(&v71 + 4 * v8);
    v15 = *v13;
    v16 = v13[1];
    v17 = v13[2];
    *v14 = (float)((float)((float)(v39 * *v13) + (float)(v47 * v16)) + (float)(v65 * v17)) + v43;
    v14[1] = (float)((float)((float)(v41 * v15) + (float)(v53 * v16)) + (float)(v62 * v17)) + v11;
    v14[2] = (float)((float)((float)(v51 * v15) + (float)(v45 * v16)) + (float)(v59 * v17)) + v10;
    v14[3] = (float)((float)((float)(v15 * v49) + (float)(v16 * v67)) + (float)(v17 * v56)) + v12;
    if ( v8 != 1 )
      break;
    LOBYTE(v8) = 0;
  }
  v18 = (float *)a2[2];
  v40 = v18[3];
  v57 = v18[7];
  v63 = v18[5];
  v54 = v18[9];
  v52 = v18[10];
  v46 = v18[13];
  v19 = *(float *)(v5 + 68);
  v42 = v18[15];
  v20 = *(float *)(v5 + 64);
  v21 = *v18;
  v48 = v18[12];
  v68 = v18[1];
  v22 = v18[4];
  v60 = v18[6];
  v50 = v18[11];
  v44 = v18[14];
  v23 = *(float *)(v5 + 72);
  v66 = v18[2];
  v24 = v18[8];
  v83 = (float)((float)((float)(v20 * *v18) + (float)(v19 * v22)) + (float)(v23 * v24)) + v48;
  v84 = (float)((float)((float)(v68 * v20) + (float)(v63 * v19)) + (float)(v54 * v23)) + v46;
  v85 = (float)((float)((float)(v66 * v20) + (float)(v60 * v19)) + (float)(v52 * v23)) + v44;
  v86 = (float)((float)((float)(v20 * v40) + (float)(v19 * v57)) + (float)(v23 * v50)) + v42;
  v25 = *(float *)(v5 + 48);
  v26 = *(float *)(v5 + 52);
  v27 = *(float *)(v5 + 56);
  v79 = (float)((float)((float)(v25 * v21) + (float)(v26 * v22)) + (float)(v27 * v24)) + v48;
  v80 = (float)((float)((float)(v68 * v25) + (float)(v63 * v26)) + (float)(v54 * v27)) + v46;
  v81 = (float)((float)((float)(v66 * v25) + (float)(v60 * v26)) + (float)(v52 * v27)) + v44;
  v82 = (float)((float)((float)(v25 * v40) + (float)(v26 * v57)) + (float)(v27 * v50)) + v42;
  v28 = *(float *)(v5 + 32);
  v29 = *(float *)(v5 + 36);
  v30 = *(float *)(v5 + 40);
  *(float *)&v75 = (float)((float)((float)(v21 * v28) + (float)(v22 * v29)) + (float)(v24 * v30)) + v48;
  v76 = (float)((float)((float)(v68 * v28) + (float)(v63 * v29)) + (float)(v54 * v30)) + v46;
  v37 = *((uint32_t *)a3 + 3);
  v77 = (float)((float)((float)(v66 * v28) + (float)(v60 * v29)) + (float)(v52 * v30)) + v44;
  v78 = (float)((float)((float)(v28 * v40) + (float)(v29 * v57)) + (float)(v30 * v50)) + v42;
  hkCollideCapsuleUtilCapsVsTri(
    (hkLineSegmentUtil::Self *)&v71,
    *(hkVector4f::Self **)(v38 + 16),
    (int)(uintptr_t)(&v75),
    *(hkVector4f::Self **)(v5 + 16),
    a4,
    v37,
    0,
    COERCE_FLOAT(v95),
    (int)(uintptr_t)(v70));
  if ( v95[15] <= v95[7] )
  {
    if ( a3[3] <= v95[15] )
      goto LABEL_6;
    v32 = 1;
  }
  else
  {
    if ( a3[3] <= v95[7] )
    {
LABEL_6:
      result = 0;
      goto LABEL_7;
    }
    v32 = 0;
  }
  v33 = *((uint32_t *)a3 + 1);
  v34 = (int *)&v95[8 * v32];
  v64 = v34[4];
  *(uint32_t *)&v69[1] = v64;
  v61 = v34[5];
  *(uint32_t *)&v69[5] = v61;
  v58 = v34[6];
  *(uint32_t *)&v69[9] = v58;
  v55 = v34[7];
  *(uint32_t *)&v69[13] = v55;
  v35 = v70[v32];
  v69[0] = v35;
  if ( v33 == 0 || v35 == 0 )
  {
LABEL_16:
    v87 = *v34;
    v88 = v34[1];
    v89 = v34[2];
    v90 = v34[3];
    v91 = v34[4];
    v92 = v34[5];
    v93 = v34[6];
    v94 = v34[7];
    result = 1;
    goto LABEL_7;
  }
  v71 = v64;
  v72 = v61;
  v73 = v58;
  v74 = v55;
  v75 = *v34;
  v76 = *((float *)v34 + 1);
  v77 = *((float *)v34 + 2);
  v78 = *((float *)v34 + 3);
  v36 = G4_VCALL<int>(v5, 60, (char *)&v70[v32] + 2, v69, &v75, a2[2], v38, a1[2], &v71);
  *v34 = v75;
  *((float *)v34 + 1) = v76;
  *((float *)v34 + 2) = v77;
  *((float *)v34 + 3) = v78;
  if ( *((uint32_t *)a3 + 2) != 0 || (result = 0, v36 != 0) )
  {
    if ( v36 == 1 )
    {
      v34[4] = v71;
      v34[5] = v72;
      v34[6] = v73;
    }
    goto LABEL_16;
  }
LABEL_7:
  *a5 = v87;
  a5[1] = v88;
  a5[2] = v89;
  a5[3] = v90;
  a5[4] = v91;
  a5[5] = v92;
  a5[6] = v93;
  a5[7] = v94;
  return result;
}


