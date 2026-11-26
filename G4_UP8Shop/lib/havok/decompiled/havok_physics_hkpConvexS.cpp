#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpConvexS.h"

// ----------------------------------------------------------------------------
// Function: hkpConvexShape::isConvex  (binary VA: 0x1690b80)
// Original: hkpConvexShape::isConvex
// ----------------------------------------------------------------------------
int hkpConvexShape::isConvex()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexShape::staticClass  (binary VA: 0x169a030)
// Original: hkpConvexShape::staticClass
// ----------------------------------------------------------------------------
void * hkpConvexShape::staticClass()
{
  return &hkpConvexShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexShape::Destroy  (binary VA: 0x169fba0)
// Original: hkpConvexShape::~hkpConvexShape
// ----------------------------------------------------------------------------
void hkpConvexShape::Destroy(hkpConvexShape::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexShape::castRayWithCollector  (binary VA: 0x169fbc0)
// Original: hkpConvexShape::castRayWithCollector
// ----------------------------------------------------------------------------
int hkpConvexShape::castRayWithCollector(int *a1, int a2, int a3, int a4)
{
  int (***v4)(uint32_t, int, float *);
  int v5; // xmm0_4
  int v6;
  int result;
  float *v8;
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm5_4
  int (**v14)(uint32_t, int, float *);
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef float _g4_t_v18;
  typedef float _g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int **_g4_t_v26;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v17)) > _g4_s2 ? (24u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v18)) > _g4_s3 ? (28u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v19)) > _g4_s4 ? (32u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v20)) > _g4_s5 ? (36u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v21)) > _g4_s6 ? (40u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v22)) > _g4_s7 ? (44u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v23)) > _g4_s8 ? (48u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v24)) > _g4_s9 ? (60u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v25)) > _g4_s10 ? (92u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (120u + sizeof(_g4_t_v26)) > _g4_s11 ? (120u + sizeof(_g4_t_v26)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 92u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 120u);

  v26 = &a1;
  v4 = (int (***)(uint32_t, int, float *))a4;
  v5 = *(uint32_t *)(a4 + 4);
  v6 = *a1;
  v23 = -1;
  v25 = 0;
  v24 = -1;
  v22 = v5;
  result = (*(int (**)(char *, int *, int, float *, int, int, char *, int))(v6 + 28))(
             (char *)&v17 + 3,
             a1,
             a2,
             &v18,
             v15,
             a3,
             (char *)&v17 + 3,
             v17);
  if ( HIBYTE(v17) != 0 )
  {
    v8 = *(float **)(v16 + 8);
    v9 = (float)(v8[1] * v18) + (float)(v8[5] * v19);
    v10 = (float)(v8[2] * v18) + (float)(v8[6] * v19);
    v11 = (float)(v8[3] * v18) + (float)(v8[7] * v19);
    v18 = (float)((float)(v18 * *v8) + (float)(v19 * v8[4])) + (float)(v8[8] * v20);
    v19 = v9 + (float)(v8[9] * v20);
    v12 = v8[10] * v20;
    v13 = v20 * v8[11];
    v14 = *v4;
    v20 = v10 + v12;
    v21 = v11 + v13;
    return (*v14)((uint32_t)(uintptr_t)(v4), v16, &v18);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexShape::weldContactPoint  (binary VA: 0x169fd00)
// Original: hkpConvexShape::weldContactPoint
// ----------------------------------------------------------------------------
int hkpConvexShape::weldContactPoint()
{
  return 2;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexShape::getCentre  (binary VA: 0x169fd10)
// Original: hkpConvexShape::getCentre
// ----------------------------------------------------------------------------
int hkpConvexShape::getCentre(hkpConvexShape::Self *self, hkVector4f::Self *a2)
{
  int result;
  float v3; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm3_4
  float v6[11];

  result = G4_VCALL<int>(self, 24, &unk_1D12FD0, 0, v6);
  v3 = (float)(v6[6] + v6[2]) * 0.5;
  v4 = (float)(v6[7] + v6[3]) * 0.5;
  v5 = (float)(v6[4] + v6[0]) * 0.5;
  *((float *)a2 + 1) = (float)(v6[5] + v6[1]) * 0.5;
  *((float *)a2 + 2) = v3;
  *((float *)a2 + 3) = v4;
  *(float *)a2 = v5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexShape::getMaximumProjection  (binary VA: 0x169fdc0)
// Original: hkpConvexShape::getMaximumProjection
// ----------------------------------------------------------------------------
long double hkpConvexShape::getMaximumProjection(hkpConvexShape::Self *self, const hkVector4f::Self *a2)
{
  float v2; // xmm3_4
  float v3; // xmm1_4
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm1_4
  __m128i v7;
  int v8;
  float v9; // xmm3_4
  float v10; // xmm2_4
  float retaddr;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  G4_VCALL<void>(self, 40, a2, &v13, v12);
g4_m128_raw(v7) = *(unsigned int *)a2;
  v2 = *((float *)a2 + 1);
  v3 = (float)(retaddr * *(float *)g4_m128_ptr<int32_t>(v7)) + (float)(*(float *)&self * v2);
  v4 = *((float *)a2 + 2);
  *(float *)g4_m128_ptr<int32_t>(v7) = (float)(*(float *)g4_m128_ptr<int32_t>(v7) * *(float *)g4_m128_ptr<int32_t>(v7)) + (float)(v2 * v2);
  v5 = 0.0;
  v6 = v3 + (float)(*(float *)&a2 * v4);
  *(float *)g4_m128_ptr<int32_t>(v7) = *(float *)g4_m128_ptr<int32_t>(v7) + (float)(v4 * v4);
  if ( *(float *)g4_m128_ptr<int32_t>(v7) > 0.0 )
  {
    v8 = ((_mm_cvtsi128_si32(v7) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v7) >> 1));
    v9 = (float)(*(float *)&v8 * 1.5)
       - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v7)) * *(float *)&v8) * (float)(*(float *)&v8 * *(float *)&v8));
    v10 = (float)(v9 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v7)) * v9) * (float)(v9 * v9));
    v5 = (float)((float)(1.5 * v10) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v7)) * v10) * (float)(v10 * v10)))
       * *(float *)g4_m128_ptr<int32_t>(v7);
  }
  return (float)((float)(v5 * *((float *)self + 4)) + v6);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexShape::Destroy_ea169fef0  (binary VA: 0x169fef0)
// Original: hkpConvexShape::~hkpConvexShape
// ----------------------------------------------------------------------------
void hkpConvexShape::Destroy_ea169fef0(hkpConvexShape::Self *self)
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



// ============================================================================
// Address:   0x16a00b0 (size: 59 bytes)
// Symbol:    _ZN14hkpConvexShapeC2E24hkFinishLoadedObjectFlag
// Demangled: hkpConvexShape::hkpConvexShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN14hkpConvexShapeC1E24hkFinishLoadedObjectFlag'
void (**hkpConvexShape::hkpConvexShape(int a1, int a2))(hkpConvexShape::Self * self)
{
  hkpShape::hkpShape(a1, a2);
  *(uint8_t *)(a1 + 8) = 23;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2099DE8);
  return (void (**)(hkpConvexShape::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2099DE8));
}
// ----------------------------------------------------------------------------
// Function: hkpConvexShape::getSize  (binary VA: 0x16a0180)
// Original: hkpConvexShape::getSize
// ----------------------------------------------------------------------------
int hkpConvexShape::getSize()
{
  typedef int _g4_t_v1;
  typedef int _g4_t_v2[3];
  typedef int _g4_t_v3[131];
  enum : size_t {
    _g4_s0 = 608u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v2)) > _g4_s1 ? (4u + sizeof(_g4_t_v2)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v3)) > _g4_s2 ? (16u + sizeof(_g4_t_v3)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 4u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 16u);

  hkErrStream::Construct((hkErrStream::Self *)v2, (hkString::Self *)v3, 512);
  hkOstream::opShl((int)(uintptr_t)(v2), (hkString::Self *)"Not implemented");
  if ( hkError::messageError(
         (hkError::Self *)0x97EF335C,
         (int)(uintptr_t)(v3),
         "../../Physics2012/Collide/Shape/Convex/hkpConvexShape.h",
         (const char *)&dword_50 + 3,
         v1) != 0 )
    __builtin_debugtrap();
  hkErrStream::Destroy((hkErrStream::Self *)v2);
  return 0;
}


