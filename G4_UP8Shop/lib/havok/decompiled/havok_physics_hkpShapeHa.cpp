#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpShapeHa.h"

// ----------------------------------------------------------------------------
// Function: hkpShapeHashUtil::writeTransform  (binary VA: 0x184ee60)
// Original: hkpShapeHashUtil::writeTransform
// ----------------------------------------------------------------------------
int hkpShapeHashUtil::writeTransform(hkpShapeHashUtil::Self *self, const hkTransformf::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint32_t _g4_t_v25[3];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v17)) > _g4_s3 ? (12u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v18)) > _g4_s4 ? (16u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v19)) > _g4_s5 ? (20u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v20)) > _g4_s6 ? (24u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v21)) > _g4_s7 ? (28u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v22)) > _g4_s8 ? (32u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v23)) > _g4_s9 ? (36u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v24)) > _g4_s10 ? (40u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v25)) > _g4_s11 ? (44u + sizeof(_g4_t_v25)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);

  v14 = *(uint32_t *)a2;
  G4_VCALL<void>(self, 24, &v14, 4);
  v2 = *(uint32_t *)self;
  v16 = *((uint32_t *)a2 + 1);
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v2 + 24))(self, &v16, 4);
  v3 = *(uint32_t *)self;
  v15 = *((uint32_t *)a2 + 2);
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v3 + 24))(self, &v15, 4);
  v4 = *(uint32_t *)self;
  v19 = *((uint32_t *)a2 + 4);
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v4 + 24))(self, &v19, 4);
  v5 = *(uint32_t *)self;
  v18 = *((uint32_t *)a2 + 5);
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v5 + 24))(self, &v18, 4);
  v6 = *(uint32_t *)self;
  v17 = *((uint32_t *)a2 + 6);
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v6 + 24))(self, &v17, 4);
  v7 = *(uint32_t *)self;
  v22 = *((uint32_t *)a2 + 8);
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v7 + 24))(self, &v22, 4);
  v8 = *(uint32_t *)self;
  v21 = *((uint32_t *)a2 + 9);
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v8 + 24))(self, &v21, 4);
  v9 = *(uint32_t *)self;
  v20 = *((uint32_t *)a2 + 10);
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v9 + 24))(self, &v20, 4);
  v10 = *(uint32_t *)self;
  v25[0] = *((uint32_t *)a2 + 12);
  (*(void (**)(hkpShapeHashUtil::Self *, uint32_t *, int))(v10 + 24))(self, v25, 4);
  v11 = *(uint32_t *)self;
  v24 = *((uint32_t *)a2 + 13);
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v11 + 24))(self, &v24, 4);
  v12 = *(uint32_t *)self;
  v23 = *((uint32_t *)a2 + 14);
  return (*(int (**)(hkpShapeHashUtil::Self *, int *, int))(v12 + 24))(self, &v23, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeHashUtil::writeQsTransform  (binary VA: 0x184f020)
// Original: hkpShapeHashUtil::writeQsTransform
// ----------------------------------------------------------------------------
int hkpShapeHashUtil::writeQsTransform(hkpShapeHashUtil::Self *self, const hkQsTransformf::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[76];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v11)) > _g4_s4 ? (16u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);

  hkQsTransformf::copyToTransformNoScale(a2, (hkTransformf::Self *)v11);
  hkpShapeHashUtil::writeTransform(self, (const hkTransformf::Self *)v11);
  v2 = *(uint32_t *)self;
  v10 = *((uint32_t *)a2 + 8);
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v2 + 24))(self, &v10, 4);
  v3 = *(uint32_t *)self;
  v9 = *((uint32_t *)a2 + 9);
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v3 + 24))(self, &v9, 4);
  v4 = *(uint32_t *)self;
  v8 = *((uint32_t *)a2 + 10);
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v4 + 24))(self, &v8, 4);
  v5 = *(uint32_t *)self;
  v7 = *((uint32_t *)a2 + 11);
  return (*(int (**)(hkpShapeHashUtil::Self *, int *, int))(v5 + 24))(self, &v7, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeHashUtil::writeSphereShape  (binary VA: 0x184f100)
// Original: hkpShapeHashUtil::writeSphereShape
// ----------------------------------------------------------------------------
int hkpShapeHashUtil::writeSphereShape(hkpShapeHashUtil::Self *self, const hkpSphereShape::Self *a2)
{
  uint32_t v3[4];

  v3[0] = *((uint32_t *)a2 + 4);
  return G4_VCALL<int>(self, 24, v3, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeHashUtil::writeCylinderShape  (binary VA: 0x184f140)
// Original: hkpShapeHashUtil::writeCylinderShape
// ----------------------------------------------------------------------------
int hkpShapeHashUtil::writeCylinderShape(int *a1, hkpCylinderShape::Self *a2, int a3, int a4, int a5, float a6, int a7, int a8, int a9, int a10, int a11)
{
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int result;
  float CylinderRadius;
  void *retaddr;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v20)) > _g4_s2 ? (20u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v21)) > _g4_s3 ? (24u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v22)) > _g4_s4 ? (28u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v23)) > _g4_s5 ? (32u + sizeof(_g4_t_v23)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);

  v23 = *((uint32_t *)a2 + 8);
  G4_VCALL<void>(a1, 24, &v23, 4, v18, v19, v20, v21, v22);
  v11 = *a1;
  a8 = *((uint32_t *)a2 + 9);
  (*(void (**)(int *, int *, int))(v11 + 24))(a1, &a8, 4);
  v12 = *a1;
  a7 = *((uint32_t *)a2 + 10);
  (*(void (**)(int *, int *, int))(v12 + 24))(a1, &a7, 4);
  v13 = *a1;
  a11 = *((uint32_t *)a2 + 12);
  (*(void (**)(int *, int *, int))(v13 + 24))(a1, &a11, 4);
  v14 = *a1;
  a10 = *((uint32_t *)a2 + 13);
  (*(void (**)(int *, int *, int))(v14 + 24))(a1, &a10, 4);
  v15 = *a1;
  a9 = *((uint32_t *)a2 + 14);
  (*(void (**)(int *, int *, int))(v15 + 24))(a1, &a9, 4);
  CylinderRadius = hkpCylinderShape::getCylinderRadius(a2);
  v16 = *a1;
  a6 = CylinderRadius;
  result = (*(int (**)(int *, float *, int, float))(v16 + 24))(
             a1,
             &a6,
             4,
             COERCE_FLOAT(LODWORD(CylinderRadius)));
  if ( a3 == 1 )
  {
    retaddr = *((void **)a2 + 4);
    return G4_VCALL<int>(a1, 24, &retaddr, 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeHashUtil::writeTriangleShape  (binary VA: 0x184f2a0)
// Original: hkpShapeHashUtil::writeTriangleShape
// ----------------------------------------------------------------------------
int hkpShapeHashUtil::writeTriangleShape(int *a1, uint32_t *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;
  int v12;
  typedef uint32_t _g4_t_v13[4];
  typedef uint32_t _g4_t_v14[4];
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t _g4_t_v22[3];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v15)) > _g4_s2 ? (32u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v16)) > _g4_s3 ? (36u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v17)) > _g4_s4 ? (40u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v18)) > _g4_s5 ? (44u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v19)) > _g4_s6 ? (48u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v20)) > _g4_s7 ? (52u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v21)) > _g4_s8 ? (56u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v22)) > _g4_s9 ? (60u + sizeof(_g4_t_v22)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 56u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);

  v14[0] = a2[8];
  G4_VCALL<void>(a1, 24, v14, 4);
  v3 = *a1;
  v16 = a2[9];
  (*(void (**)(int *, int *, int))(v3 + 24))(a1, &v16, 4);
  v4 = *a1;
  v15 = a2[10];
  (*(void (**)(int *, int *, int))(v4 + 24))(a1, &v15, 4);
  v5 = *a1;
  v19 = a2[12];
  (*(void (**)(int *, int *, int))(v5 + 24))(a1, &v19, 4);
  v6 = *a1;
  v18 = a2[13];
  (*(void (**)(int *, int *, int))(v6 + 24))(a1, &v18, 4);
  v7 = *a1;
  v17 = a2[14];
  (*(void (**)(int *, int *, int))(v7 + 24))(a1, &v17, 4);
  v8 = *a1;
  v22[0] = a2[16];
  (*(void (**)(int *, uint32_t *, int))(v8 + 24))(a1, v22, 4);
  v9 = *a1;
  v21 = a2[17];
  (*(void (**)(int *, int *, int))(v9 + 24))(a1, &v21, 4);
  v10 = *a1;
  v20 = a2[18];
  result = (*(int (**)(int *, int *, int))(v10 + 24))(a1, &v20, 4);
  if ( a3 == 1 )
  {
    v12 = *a1;
    v13[0] = a2[4];
    return (*(int (**)(int *, uint32_t *, int))(v12 + 24))(a1, v13, 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeHashUtil::writeBoxShape  (binary VA: 0x184f430)
// Original: hkpShapeHashUtil::writeBoxShape
// ----------------------------------------------------------------------------
int hkpShapeHashUtil::writeBoxShape(int *a1, uint32_t *a2, int a3)
{
  int v3;
  int v4;
  int result;
  int v6;
  typedef uint32_t _g4_t_v7[4];
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint32_t _g4_t_v10[3];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v9)) > _g4_s2 ? (24u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v10)) > _g4_s3 ? (28u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  v8 = a2[8];
  G4_VCALL<void>(a1, 24, &v8, 4);
  v3 = *a1;
  v10[0] = a2[9];
  (*(void (**)(int *, uint32_t *, int))(v3 + 24))(a1, v10, 4);
  v4 = *a1;
  v9 = a2[10];
  result = (*(int (**)(int *, int *, int))(v4 + 24))(a1, &v9, 4);
  if ( a3 == 1 )
  {
    v6 = *a1;
    v7[0] = a2[4];
    return (*(int (**)(int *, uint32_t *, int))(v6 + 24))(a1, v7, 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeHashUtil::writeCapsuleShape  (binary VA: 0x184f4f0)
// Original: hkpShapeHashUtil::writeCapsuleShape
// ----------------------------------------------------------------------------
int hkpShapeHashUtil::writeCapsuleShape(hkpShapeHashUtil::Self *self, const hkpCapsuleShape::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t _g4_t_v15[3];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v12)) > _g4_s3 ? (16u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v13)) > _g4_s4 ? (20u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v14)) > _g4_s5 ? (24u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v15)) > _g4_s6 ? (28u + sizeof(_g4_t_v15)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  v9 = *((uint32_t *)a2 + 8);
  G4_VCALL<void>(self, 24, &v9, 4);
  v2 = *(uint32_t *)self;
  v12 = *((uint32_t *)a2 + 9);
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v2 + 24))(self, &v12, 4);
  v3 = *(uint32_t *)self;
  v11 = *((uint32_t *)a2 + 10);
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v3 + 24))(self, &v11, 4);
  v4 = *(uint32_t *)self;
  v15[0] = *((uint32_t *)a2 + 12);
  (*(void (**)(hkpShapeHashUtil::Self *, uint32_t *, int))(v4 + 24))(self, v15, 4);
  v5 = *(uint32_t *)self;
  v14 = *((uint32_t *)a2 + 13);
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v5 + 24))(self, &v14, 4);
  v6 = *(uint32_t *)self;
  v13 = *((uint32_t *)a2 + 14);
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v6 + 24))(self, &v13, 4);
  v7 = *(uint32_t *)self;
  v10 = *((uint32_t *)a2 + 4);
  return (*(int (**)(hkpShapeHashUtil::Self *, int *, int))(v7 + 24))(self, &v10, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeHashUtil::writeConvexVerticesShape  (binary VA: 0x184f600)
// Original: hkpShapeHashUtil::writeConvexVerticesShape
// ----------------------------------------------------------------------------
int hkpShapeHashUtil::writeConvexVerticesShape(int *a1, hkpConvexVerticesShape::Self *a2, int a3)
{
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int result;
  int v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v13)) > _g4_s3 ? (32u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v14)) > _g4_s4 ? (40u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v15)) > _g4_s5 ? (44u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v16)) > _g4_s6 ? (48u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v17)) > _g4_s7 ? (52u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v18)) > _g4_s8 ? (56u + sizeof(_g4_t_v18)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 52u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);

  v16 = 0;
  v17 = 0;
  v18 = 0x80000000;
  hkpConvexVerticesShape::getOriginalVertices(a2, (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v16);
  v10 = v17;
  if ( v17 > 0 )
  {
    v3 = 0;
    do
    {
      v4 = *a1;
      v5 = (int *)(v16 + 16 * v3);
      v11 = v3;
      v13 = *v5;
      (*(void (**)(int *, int *, int))(v4 + 24))(a1, &v13, 4);
      v6 = *a1;
      v15 = v5[1];
      (*(void (**)(int *, int *, int))(v6 + 24))(a1, &v15, 4);
      v7 = *a1;
      v14 = v5[2];
      (*(void (**)(int *, int *, int))(v7 + 24))(a1, &v14, 4);
      v3 = v11 + 1;
    }
    while ( v11 + 1 != v10 );
  }
  if ( a3 == 1 )
  {
    v9 = *a1;
    v12 = *((uint32_t *)a2 + 4);
    (*(void (**)(int *, int *, int))(v9 + 24))(a1, &v12, 4);
  }
  result = v18;
  v17 = 0;
  if ( v18 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v16,
             16 * v18);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeHashUtil::writeSampledHeightFieldShape  (binary VA: 0x184f760)
// Original: hkpShapeHashUtil::writeSampledHeightFieldShape
// ----------------------------------------------------------------------------
int hkpShapeHashUtil::writeSampledHeightFieldShape(hkpShapeHashUtil::Self *self, const hkpSampledHeightFieldShape::Self *a2)
{
  const hkpSampledHeightFieldShape::Self *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  const hkpSampledHeightFieldShape::Self *v9;
  int j;
  int v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_i;
  typedef const hkpSampledHeightFieldShape::Self *_g4_t_v15;
  typedef float _g4_t_v16;
  typedef int _g4_t_v17[3];
  typedef int _g4_t_v18;
  typedef float _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t _g4_t_v22[3];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_i)) > _g4_s2 ? (20u + sizeof(_g4_t_i)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v17)) > _g4_s5 ? (32u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v18)) > _g4_s6 ? (44u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v19)) > _g4_s7 ? (48u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v20)) > _g4_s8 ? (52u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v21)) > _g4_s9 ? (56u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v22)) > _g4_s10 ? (60u + sizeof(_g4_t_v22)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 56u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);

  v2 = a2;
  v3 = *((uint32_t *)a2 + 11);
  v17[0] = *((uint32_t *)a2 + 10);
  v12 = v17[0];
  v13 = v3;
  G4_VCALL<void>(self, 24, v17, 4);
  v4 = *(uint32_t *)self;
  v18 = v13;
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v4 + 24))(self, &v18, 4);
  v5 = *(uint32_t *)self;
  v22[0] = *((uint32_t *)a2 + 16);
  (*(void (**)(hkpShapeHashUtil::Self *, uint32_t *, int))(v5 + 24))(self, v22, 4);
  v6 = *(uint32_t *)self;
  v21 = *((uint32_t *)a2 + 17);
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v6 + 24))(self, &v21, 4);
  v7 = *(uint32_t *)self;
  v20 = *((uint32_t *)a2 + 18);
  result = (*(int (**)(hkpShapeHashUtil::Self *, int *, int))(v7 + 24))(self, &v20, 4);
  if ( v12 > 0 )
  {
    for ( i = 0; i != v12; ++i )
    {
      if ( v13 > 0 )
      {
        v9 = v2;
        for ( j = 0; j != v13; ++j )
        {
          v15 = v9;
          v16 = ((long double (*)(const hkpSampledHeightFieldShape::Self *, int, int))*(uint32_t *)(*(uint32_t *)v9 + 88))(
                  v9,
                  i,
                  j);
          v11 = *(uint32_t *)self;
          v19 = v16;
          (*(void (**)(hkpShapeHashUtil::Self *, float *, int))(v11 + 24))(self, &v19, 4);
          v9 = v15;
        }
        v2 = v15;
      }
      result = v12;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeHashUtil::writeMultiRayShape  (binary VA: 0x184f8d0)
// Original: hkpShapeHashUtil::writeMultiRayShape
// ----------------------------------------------------------------------------
int hkpShapeHashUtil::writeMultiRayShape(hkpShapeHashUtil::Self *self, const hkpMultiRayShape::Self *a2)
{
  int result;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t _g4_t_v15[3];
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t _g4_t_v20[3];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v15)) > _g4_s3 ? (16u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v17)) > _g4_s5 ? (32u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v18)) > _g4_s6 ? (36u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v19)) > _g4_s7 ? (40u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v20)) > _g4_s8 ? (44u + sizeof(_g4_t_v20)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);

  result = *((uint32_t *)a2 + 5);
  v12 = result;
  if ( result > 0 )
  {
    v3 = 0;
    do
    {
      v13 = v3;
      v14 = 32 * v3;
      v4 = (uint32_t *)(*((uint32_t *)a2 + 4) + 32 * v3);
      v5 = *(uint32_t *)self;
      v15[0] = *v4;
      (*(void (**)(hkpShapeHashUtil::Self *, uint32_t *, int))(v5 + 24))(self, v15, 4);
      v6 = *(uint32_t *)self;
      v17 = v4[1];
      (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v6 + 24))(self, &v17, 4);
      v7 = *(uint32_t *)self;
      v16 = v4[2];
      (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v7 + 24))(self, &v16, 4);
      v8 = *(uint32_t *)self;
      v9 = (uint32_t *)(*((uint32_t *)a2 + 4) + v14);
      v20[0] = v9[4];
      (*(void (**)(hkpShapeHashUtil::Self *, uint32_t *, int))(v8 + 24))(self, v20, 4);
      v10 = *(uint32_t *)self;
      v19 = v9[5];
      (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v10 + 24))(self, &v19, 4);
      v11 = *(uint32_t *)self;
      v18 = v9[6];
      result = (*(int (**)(hkpShapeHashUtil::Self *, int *, int))(v11 + 24))(self, &v18, 4);
      v3 = v13 + 1;
    }
    while ( v13 + 1 != v12 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeHashUtil::writePhantomCallbackShape  (binary VA: 0x184fa40)
// Original: hkpShapeHashUtil::writePhantomCallbackShape
// ----------------------------------------------------------------------------
int hkpShapeHashUtil::writePhantomCallbackShape(hkpShapeHashUtil::Self *self, const hkpPhantomCallbackShape::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t _g4_t_v14[8];
  typedef uint32_t _g4_t_v15[20];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v13)) > _g4_s4 ? (28u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v14)) > _g4_s5 ? (32u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v15)) > _g4_s6 ? (64u + sizeof(_g4_t_v15)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);

  v15[0] = 1065353216;
  memset(&v15[1], 0, 16);
  v15[5] = 1065353216;
  memset(&v15[6], 0, 16);
  v15[10] = 1065353216;
  memset(&v15[11], 0, 20);
  G4_VCALL<void>(a2, 24, v15, 0, v14);
  v2 = *(uint32_t *)self;
  v11 = v14[4];
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v2 + 24))(self, &v11, 4);
  v3 = *(uint32_t *)self;
  v10 = v14[5];
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v3 + 24))(self, &v10, 4);
  v4 = *(uint32_t *)self;
  v9 = v14[6];
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v4 + 24))(self, &v9, 4);
  v5 = *(uint32_t *)self;
  v15[0] = v14[0];
  (*(void (**)(hkpShapeHashUtil::Self *, uint32_t *, int))(v5 + 24))(self, v15, 4);
  v6 = *(uint32_t *)self;
  v13 = v14[1];
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v6 + 24))(self, &v13, 4);
  v7 = *(uint32_t *)self;
  v12 = v14[2];
  return (*(int (**)(hkpShapeHashUtil::Self *, int *, int))(v7 + 24))(self, &v12, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeHashUtil::writePlaneShape  (binary VA: 0x184fc00)
// Original: hkpShapeHashUtil::writePlaneShape
// ----------------------------------------------------------------------------
int hkpShapeHashUtil::writePlaneShape(int *a1, uint32_t *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  typedef uint32_t _g4_t_v12[3];
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t _g4_t_v21[3];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v15)) > _g4_s3 ? (20u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v16)) > _g4_s4 ? (24u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v17)) > _g4_s5 ? (28u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v18)) > _g4_s6 ? (32u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v19)) > _g4_s7 ? (36u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v20)) > _g4_s8 ? (40u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v21)) > _g4_s9 ? (44u + sizeof(_g4_t_v21)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);

  v12[0] = a2[4];
  G4_VCALL<void>(a1, 24, v12, 4);
  v2 = *a1;
  v15 = a2[5];
  (*(void (**)(int *, int *, int))(v2 + 24))(a1, &v15, 4);
  v3 = *a1;
  v14 = a2[6];
  (*(void (**)(int *, int *, int))(v3 + 24))(a1, &v14, 4);
  v4 = *a1;
  v13 = a2[7];
  (*(void (**)(int *, int *, int))(v4 + 24))(a1, &v13, 4);
  v5 = *a1;
  v18 = a2[8];
  (*(void (**)(int *, int *, int))(v5 + 24))(a1, &v18, 4);
  v6 = *a1;
  v17 = a2[9];
  (*(void (**)(int *, int *, int))(v6 + 24))(a1, &v17, 4);
  v7 = *a1;
  v16 = a2[10];
  (*(void (**)(int *, int *, int))(v7 + 24))(a1, &v16, 4);
  v8 = *a1;
  v21[0] = a2[12];
  (*(void (**)(int *, uint32_t *, int))(v8 + 24))(a1, v21, 4);
  v9 = *a1;
  v20 = a2[13];
  (*(void (**)(int *, int *, int))(v9 + 24))(a1, &v20, 4);
  v10 = *a1;
  v19 = a2[14];
  return (*(int (**)(int *, int *, int))(v10 + 24))(a1, &v19, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeHashUtil::writeMoppBvTreeShape  (binary VA: 0x184fd80)
// Original: hkpShapeHashUtil::writeMoppBvTreeShape
// ----------------------------------------------------------------------------
int hkpShapeHashUtil::writeMoppBvTreeShape(int a1, int a2, int a3)
{
  return hkpShapeHashUtil::writeShape(a1, *(uint32_t *)(a2 + 52), a3);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeHashUtil::writeConvexTranslateShape  (binary VA: 0x184fdc0)
// Original: hkpShapeHashUtil::writeConvexTranslateShape
// ----------------------------------------------------------------------------
int hkpShapeHashUtil::writeConvexTranslateShape(int *a1, uint32_t *a2, int a3)
{
  int v3;
  int v4;
  int v6;
  int v7;
  int v8;

  v6 = a2[8];
  G4_VCALL<void>(a1, 24, &v6, 4);
  v3 = *a1;
  v8 = a2[9];
  (*(void (**)(int *, int *, int))(v3 + 24))(a1, &v8, 4);
  v4 = *a1;
  v7 = a2[10];
  (*(void (**)(int *, int *, int))(v4 + 24))(a1, &v7, 4);
  return hkpShapeHashUtil::writeShape(a1, a2[6], a3);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeHashUtil::writeConvexTransformShape  (binary VA: 0x1850130)
// Original: hkpShapeHashUtil::writeConvexTransformShape
// ----------------------------------------------------------------------------
int hkpShapeHashUtil::writeConvexTransformShape(hkpShapeHashUtil::Self *a1, uint32_t *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v10)) > _g4_s2 ? (8u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v11)) > _g4_s3 ? (12u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);

  hkpShapeHashUtil::writeQsTransform(a1, (const hkQsTransformf::Self *)(a2 + 8));
  v3 = *(uint32_t *)a1;
  v11[0] = a2[20];
  (*(void (**)(hkpShapeHashUtil::Self *, uint32_t *, int))(v3 + 24))(a1, v11, 4);
  v4 = *(uint32_t *)a1;
  v10 = a2[21];
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v4 + 24))(a1, &v10, 4);
  v5 = *(uint32_t *)a1;
  v9 = a2[22];
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v5 + 24))(a1, &v9, 4);
  v6 = *(uint32_t *)a1;
  v8 = a2[23];
  (*(void (**)(hkpShapeHashUtil::Self *, int *, int))(v6 + 24))(a1, &v8, 4);
  return hkpShapeHashUtil::writeShape(a1, a2[6], a3);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeHashUtil::writeTransformShape  (binary VA: 0x1850210)
// Original: hkpShapeHashUtil::writeTransformShape
// ----------------------------------------------------------------------------
int hkpShapeHashUtil::writeTransformShape(hkpShapeHashUtil::Self *a1, int a2, int a3)
{
  hkpShapeHashUtil::writeTransform(a1, (const hkTransformf::Self *)(a2 + 48));
  return hkpShapeHashUtil::writeShape(a1, *(uint32_t *)(a2 + 20), a3);
}

// ----------------------------------------------------------------------------
// Function: hkpShapeHashUtil::writeShapeContainer  (binary VA: 0x1850260)
// Original: hkpShapeHashUtil::writeShapeContainer
// ----------------------------------------------------------------------------
void ** hkpShapeHashUtil::writeShapeContainer(int a1, int a2, int a3)
{
  int v3;
  void **result;
  int v5;
  void **savedregs;
  void *retaddr;

  v3 = G4_VCALL<int>(a2, 12);
  result = &retaddr;
  savedregs = &retaddr;
  if ( v3 != -1 )
  {
    do
    {
      v5 = G4_VCALL<int>(a2, 24, v3, &retaddr);
      hkpShapeHashUtil::writeShape(a1, v5, a3);
      result = (void **)G4_VCALL<int>(a2, 16, v3);
      v3 = (int)(uintptr_t)(result);
    }
    while ( result != (void **)-1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpShapeHashUtil::writeBvShape  (binary VA: 0x18502f0)
// Original: hkpShapeHashUtil::writeBvShape
// ----------------------------------------------------------------------------
int hkpShapeHashUtil::writeBvShape(int a1, int a2, int a3)
{
  hkpShapeHashUtil::writeShape(a1, *(uint32_t *)(a2 + 16), a3);
  return hkpShapeHashUtil::writeShape(a1, *(uint32_t *)(a2 + 24), a3);
}


