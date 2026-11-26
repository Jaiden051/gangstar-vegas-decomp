#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpGskBase.h"

// ----------------------------------------------------------------------------
// Function: hkpGskBaseAgent::Destroy  (binary VA: 0x16be820)
// Original: hkpGskBaseAgent::~hkpGskBaseAgent
// ----------------------------------------------------------------------------
void hkpGskBaseAgent::Destroy(hkpGskBaseAgent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpGskBaseAgent::processCollision  (binary VA: 0x16be840)
// Original: hkpGskBaseAgent::processCollision
// ----------------------------------------------------------------------------
void hkpGskBaseAgent::processCollision()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpGskBaseAgent::invalidateTim  (binary VA: 0x16be850)
// Original: hkpGskBaseAgent::invalidateTim
// ----------------------------------------------------------------------------
uint32_t * hkpGskBaseAgent::invalidateTim(uint32_t *a1)
{
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  a1[6] = -1082130432;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpGskBaseAgent::cleanup  (binary VA: 0x16be880)
// Original: hkpGskBaseAgent::cleanup
// ----------------------------------------------------------------------------
hkpGskBaseAgent::Self * hkpGskBaseAgent::cleanup(hkpGskBaseAgent::Self *self)
{
  hkpGskBaseAgent::Self *result;

  result = self;
  if ( self != nullptr )
    return (hkpGskBaseAgent::Self *)G4_VCALL<int>(self, 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGskBaseAgent::warpTime  (binary VA: 0x16be8a0)
// Original: hkpGskBaseAgent::warpTime
// ----------------------------------------------------------------------------
int hkpGskBaseAgent::warpTime(int a1, float a2, int a3)
{
  int result;

  result = a1;
  if ( a2 == *(float *)(a1 + 24) )
  {
    *(uint32_t *)(a1 + 24) = a3;
  }
  else
  {
    *(g4_int128_t *)(a1 + 32) = 0;
    *(uint32_t *)(a1 + 24) = -1082130432;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGskBaseAgent::getClosestPoints  (binary VA: 0x16be8f0)
// Original: hkpGskBaseAgent::getClosestPoints
// ----------------------------------------------------------------------------
int hkpGskBaseAgent::getClosestPoints(int a1, int *a2, int *a3, int a4, int a5)
{
  int *v5;
  int *address;
  int v7;
  uint32_t *v8;
  uint64_t v9; // rax
  uint64_t v10; // rax
  int v11;
  uint32_t *v12;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int *_g4_t_v17;
  typedef int *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint8_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint8_t _g4_t_v41[64];
  typedef uint32_t _g4_t_v42[22];
  enum : size_t {
    _g4_s0 = 336u,
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
    _g4_s12 = (44u + sizeof(_g4_t_v25)) > _g4_s11 ? (44u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v26)) > _g4_s12 ? (48u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v27)) > _g4_s13 ? (52u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v28)) > _g4_s14 ? (68u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v29)) > _g4_s15 ? (72u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v30)) > _g4_s16 ? (76u + sizeof(_g4_t_v30)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v31)) > _g4_s17 ? (80u + sizeof(_g4_t_v31)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v32)) > _g4_s18 ? (84u + sizeof(_g4_t_v32)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v33)) > _g4_s19 ? (88u + sizeof(_g4_t_v33)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v34)) > _g4_s20 ? (92u + sizeof(_g4_t_v34)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v35)) > _g4_s21 ? (96u + sizeof(_g4_t_v35)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v36)) > _g4_s22 ? (100u + sizeof(_g4_t_v36)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v37)) > _g4_s23 ? (104u + sizeof(_g4_t_v37)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v38)) > _g4_s24 ? (108u + sizeof(_g4_t_v38)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v39)) > _g4_s25 ? (112u + sizeof(_g4_t_v39)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v40)) > _g4_s26 ? (116u + sizeof(_g4_t_v40)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v41)) > _g4_s27 ? (120u + sizeof(_g4_t_v41)) : _g4_s27,
    _g4_s29 = (184u + sizeof(_g4_t_v42)) > _g4_s28 ? (184u + sizeof(_g4_t_v42)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
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
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 84u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 88u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 92u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 96u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 100u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 104u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 108u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 112u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 116u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 120u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 184u);

  v42[18] = (uint32_t)(uintptr_t)(&a1);
  v16 = a1;
  v18 = a3;
  v15 = a4;
  v14 = a5;
  v5 = a2;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v7 = *address;
  v17 = address;
  v8 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(*address + 12) )
  {
    *v8 = (uint32_t)(uintptr_t)("TtGsk");
    v9 = __rdtsc();
    v8[1] = v9;
    *(uint32_t *)(v7 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
  }
  hkTransformf::setMulInverseMul((hkTransformf::Self *)v41, (const hkTransformf::Self *)v5[2], (const hkTransformf::Self *)v18[2]);
  v30 = *v5;
  v28 = v41;
  v31 = *v18;
  v29 = v5[2];
  v32 = *(uint32_t *)(v15 + 12);
  hkpGsk::getClosestPoint(&v19);
  if ( v19 == 0 )
  {
    v33 = v24;
    v34 = v25;
    v35 = v26;
    v36 = v27;
    v40 = v23;
    v42[0] = v24;
    v42[1] = v25;
    v42[2] = v26;
    v42[3] = v27;
    v42[7] = v23;
    v39 = v22;
    v42[6] = v22;
    v42[12] = (uint32_t)(uintptr_t)(v5);
    v42[13] = (uint32_t)(uintptr_t)(v18);
    v37 = v20;
    v38 = v21;
    v42[4] = v20;
    v42[5] = v21;
    v42[8] = v20;
    v42[9] = v21;
    v42[11] = v23;
    v42[10] = v22;
    G4_VCALL<void>(v14, 8, v42, v16 + 12, &v20, &v24);
  }
  LODWORD(v10) = (uint32_t)(uintptr_t)(v17);
  v11 = *v17;
  v12 = *(uint32_t **)(*v17 + 4);
  if ( (unsigned int)(uintptr_t)(v12) < *(uint32_t *)(*v17 + 12) )
  {
    *v12 = (uint32_t)(uintptr_t)("Et");
    v10 = __rdtsc();
    v12[1] = v10;
    *(uint32_t *)(v11 + 4) = (uint32_t)(uintptr_t)(v12 + 3);
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: hkpGskBaseAgent::Destroy_ea16beb10  (binary VA: 0x16beb10)
// Original: hkpGskBaseAgent::~hkpGskBaseAgent
// ----------------------------------------------------------------------------
void hkpGskBaseAgent::Destroy_ea16beb10(hkpGskBaseAgent::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 48;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpGskBaseAgent::Construct  (binary VA: 0x16beb70)
// Original: hkpGskBaseAgent::hkpGskBaseAgent
// ----------------------------------------------------------------------------
void hkpGskBaseAgent::Construct(hkpGskBaseAgent::Self *self, const hkTransformf::Self **a2, const hkTransformf::Self **a3, hkpContactMgr::Self *a4)
{
  const hkTransformf::Self **v4;
  const hkTransformf::Self **v5;
  hkpGskCache::Self *v6;
  const hkpConvexShape::Self *v7;
  const hkTransformf::Self *v8;
  uint8_t v9[76];

  v4 = a2;
  v5 = a3;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a4);
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A728);
  v7 = (const hkpConvexShape::Self *)(*a2);
  v8 = *a3;
  hkTransformf::setMulInverseMul((hkTransformf::Self *)v9, a2[2], a3[2]);
  v6 = (hkpGskCache::Self *)((hkpGskBaseAgent::Self *)((char *)self + 12));
  if ( *((uint8_t *)v8 + 8) == 2 )
    hkpGskCache::initTriangle(v6, v7, v8, (const hkTransformf::Self *)v9);
  else
    hkpGskCache::init(v6, v7, v8, (const hkTransformf::Self *)v9);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = -1082130432;
  *((uint32_t *)self + 6) = -1082130432;
  while ( v4[3] != nullptr )
    v4 = (const hkTransformf::Self **)v4[3];
  while ( v5[3] != nullptr )
    v5 = (const hkTransformf::Self **)v5[3];
  *((float *)self + 7) = fminf(*((float *)v4 + 19), *((float *)v5 + 19));
}

// ----------------------------------------------------------------------------
// Function: hkpGskBaseAgent::calcSeparatingNormal  (binary VA: 0x16bef90)
// Original: hkpGskBaseAgent::calcSeparatingNormal
// ----------------------------------------------------------------------------
float * hkpGskBaseAgent::calcSeparatingNormal(const hkTransformf::Self **self, const hkTransformf::Self **a2, const hkpCdBody::Self *a3, hkpGsk::Self *a4, hkpGsk::Self *a5)
{
  const hkTransformf::Self *v5;
  const hkTransformf::Self *v6;
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float *result;
  float v11; // xmm3_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  float v14; // xmm5_4
  float v15; // xmm4_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21[4];
  uint8_t v22[76];

  v5 = *a2;
  v6 = *self;
  hkTransformf::setMulInverseMul((hkTransformf::Self *)v22, *(self + 2), a2[2]);
  hkpGsk::getClosestFeature(a4, v6, v5, (const hkTransformf::Self *)v22, (hkVector4f::Self *)v21);
  v7 = v21[0];
  v8 = v21[1];
  v9 = v21[2];
  result = (float *)*(self + 2);
  v11 = *result * v21[0];
  *(float *)a5 = v11;
  v12 = result[1] * v7;
  *((float *)a5 + 1) = v12;
  v13 = result[2] * v7;
  *((float *)a5 + 2) = v13;
  v14 = result[3] * v7;
  *((float *)a5 + 3) = v14;
  v15 = (float)(result[4] * v8) + v11;
  *(float *)a5 = v15;
  v16 = (float)(result[5] * v8) + v12;
  *((float *)a5 + 1) = v16;
  v17 = (float)(result[6] * v8) + v13;
  *((float *)a5 + 2) = v17;
  v18 = (float)(v8 * result[7]) + v14;
  *((float *)a5 + 3) = v18;
  *(float *)a5 = (float)(result[8] * v9) + v15;
  *((float *)a5 + 1) = (float)(result[9] * v9) + v16;
  *((float *)a5 + 2) = (float)(result[10] * v9) + v17;
  v19 = (float)(v9 * result[11]) + v18;
  v20 = v21[3];
  *((float *)a5 + 3) = v19;
  *((float *)a5 + 3) = (float)(v20 - *((float *)v6 + 4)) - *((float *)v5 + 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGskBaseAgent::getClosestPoint  (binary VA: 0x16bf4e0)
// Original: hkpGskBaseAgent::getClosestPoint
// ----------------------------------------------------------------------------
int hkpGskBaseAgent::getClosestPoint(int a1)
{
  hkpGskBaseAgent::_getClosestPoint(a1);
  return a1;
}


