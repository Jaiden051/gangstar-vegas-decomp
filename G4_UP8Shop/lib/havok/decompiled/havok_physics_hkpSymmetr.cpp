#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpSymmetr.h"

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvTreeStreamAgent_b17254::getPenetrations  (binary VA: 0x169beb0)
// Original: hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::getPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvTreeStreamAgent_b17254::getPenetrations(int a1, int a2, int a3, int a4, int a5)
{
  uint32_t v6[4];

  LOBYTE(v6[1]) = 0;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v6[2] = a5;
  return hkpBvTreeStreamAgent::getPenetrations(a1, a3, a2, a4, (int)(uintptr_t)(v6));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::staticGetPenetrations  (binary VA: 0x169bf10)
// Original: hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::staticGetPenetrations(int a1, int a2, int a3, int a4)
{
  uint32_t v5[4];

  LOBYTE(v5[1]) = 0;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v5[2] = a4;
  return hkpBvTreeAgent::staticGetPenetrations(a2, a1, a3, v5);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvTreeStreamAgent_b17254::getClosestPoints  (binary VA: 0x169bfb0)
// Original: hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::getClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvTreeStreamAgent_b17254::getClosestPoints(int a1, int a2, int a3, int a4, int a5)
{
  uint32_t v6[4];

  v6[1] = 2139095022;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v6[2] = a5;
  return hkpBvTreeStreamAgent::getClosestPoints(a1, a3, a2, a4, (int)(uintptr_t)(v6));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::staticGetClosestPoints  (binary VA: 0x169c010)
// Original: hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::staticGetClosestPoints(int a1, int a2, int a3, int a4)
{
  uint32_t v5[4];

  v5[1] = 2139095022;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v5[2] = a4;
  return hkpBvTreeAgent::staticGetClosestPoints(a2, a1, a3, v5);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpBvTreeStreamAgent_8ab76a::linearCast  (binary VA: 0x169c0c0)
// Original: hkpSymmetricAgent<hkpBvTreeStreamAgent>::linearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgent_hkpBvTreeStreamAgent_8ab76a::linearCast(int a1, int a2, int a3, int a4, int a5, int a6)
{
  float v6; // xmm1_4
  int v7;
  int v8;
  int v9;
  typedef float _g4_t_v11;
  typedef uint32_t _g4_t_v12[12];
  typedef uint32_t _g4_t_v13[12];
  typedef float _g4_t_v14[31];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v13)) > _g4_s2 ? (64u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (112u + sizeof(_g4_t_v14)) > _g4_s3 ? (112u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 112u);

  v6 = -*(float *)(a4 + 80);
  std::memcpy(v14, (const void *)a4, 112);
  v14[20] = v6;
  v7 = *(uint32_t *)(a4 + 80);
  v14[21] = -*(float *)(a4 + 84);
  v8 = *(uint32_t *)(a4 + 84);
  v9 = *(uint32_t *)(a4 + 88);
  LODWORD(v14[22]) = v9 ^ 0x80000000;
  v12[1] = 2139095022;
  v11 = *(float *)(a4 + 92);
  *(float *)&v12[7] = v11;
  v12[8] = a5;
  v12[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v14[23] = -v11;
  v12[4] = v7;
  v12[5] = v8;
  v12[6] = v9;
  if ( a6 == 0 )
    return hkpBvTreeStreamAgent::linearCast(a1, a3, a2, (int)(uintptr_t)(v14), (int)(uintptr_t)(v12), 0);
  v13[0] = ((uint32_t)(uintptr_t)&off_209B830);
  *(float *)&v13[7] = v11;
  v13[1] = 2139095022;
  v13[8] = a6;
  v13[4] = v7;
  v13[5] = v8;
  v13[6] = v9;
  return hkpBvTreeStreamAgent::linearCast(a1, a3, a2, (int)(uintptr_t)(v14), (int)(uintptr_t)(v12), (int)(uintptr_t)(v13));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::staticLinearCast  (binary VA: 0x169c210)
// Original: hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::staticLinearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::staticLinearCast(int a1, int a2, float *a3, int a4, int a5)
{
  float v5; // xmm1_4
  float v6; // xmm1_4
  int v7;
  float v8; // xmm1_4
  float v9; // xmm1_4
  typedef uint32_t _g4_t_v11[4];
  typedef uint32_t _g4_t_v12[12];
  typedef float _g4_t_v13[31];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v13)) > _g4_s2 ? (64u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);

  v5 = -a3[20];
  std::memcpy(v13, a3, 112);
  v12[1] = 2139095022;
  v13[20] = v5;
  v6 = a3[21];
  v12[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v7 = *((uint32_t *)a3 + 20);
  v13[21] = -v6;
  v12[4] = v7;
  v8 = -a3[22];
  *(float *)&v12[5] = a3[21];
  v13[22] = v8;
  v9 = a3[23];
  *(float *)&v12[6] = a3[22];
  *(float *)&v12[7] = a3[23];
  v13[23] = -v9;
  v12[8] = a4;
  if ( a5 == 0 )
    return hkpBvTreeAgent::staticLinearCast(a2, a1, v13, v12, 0);
  v11[1] = 2139095022;
  v11[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v11[2] = a5;
  return hkpBvTreeAgent::staticLinearCast(a2, a1, v13, v12, v11);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpShapeCollectionAgent_42da58::linearCast  (binary VA: 0x169c330)
// Original: hkpSymmetricAgent<hkpShapeCollectionAgent>::linearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgent_hkpShapeCollectionAgent_42da58::linearCast(int a1, int a2, int a3, int a4, int a5, int a6)
{
  float v6; // xmm1_4
  int v7;
  int v8;
  int v9;
  typedef float _g4_t_v11;
  typedef uint32_t _g4_t_v12[12];
  typedef uint32_t _g4_t_v13[12];
  typedef float _g4_t_v14[31];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v13)) > _g4_s2 ? (64u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (112u + sizeof(_g4_t_v14)) > _g4_s3 ? (112u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 112u);

  v6 = -*(float *)(a4 + 80);
  std::memcpy(v14, (const void *)a4, 112);
  v14[20] = v6;
  v7 = *(uint32_t *)(a4 + 80);
  v14[21] = -*(float *)(a4 + 84);
  v8 = *(uint32_t *)(a4 + 84);
  v9 = *(uint32_t *)(a4 + 88);
  LODWORD(v14[22]) = v9 ^ 0x80000000;
  v12[1] = 2139095022;
  v11 = *(float *)(a4 + 92);
  *(float *)&v12[7] = v11;
  v12[8] = a5;
  v12[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v14[23] = -v11;
  v12[4] = v7;
  v12[5] = v8;
  v12[6] = v9;
  if ( a6 == 0 )
    return hkpShapeCollectionAgent::linearCast(a1, a3, a2, v14, v12, 0);
  v13[0] = ((uint32_t)(uintptr_t)&off_209B830);
  *(float *)&v13[7] = v11;
  v13[1] = 2139095022;
  v13[8] = a6;
  v13[4] = v7;
  v13[5] = v8;
  v13[6] = v9;
  return hkpShapeCollectionAgent::linearCast(a1, a3, a2, v14, v12, v13);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvTreeStreamAgent_b17254::updateShapeCollectionFilter  (binary VA: 0x169c570)
// Original: hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvTreeStreamAgent_b17254::updateShapeCollectionFilter(uint32_t *a1, uint32_t *a2, int a3, int a4, int a5)
{
  return hkpBvTreeStreamAgent::updateShapeCollectionFilter(a1, a3, a2, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::getPenetrations  (binary VA: 0x169c640)
// Original: hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::getPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::getPenetrations(int a1, int a2, int a3, int a4, int a5)
{
  uint32_t v6[4];

  LOBYTE(v6[1]) = 0;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v6[2] = a5;
  return hkpShapeCollectionAgent::getPenetrations(a1, a3, a2, a4, v6);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::getClosestPoints  (binary VA: 0x169c6a0)
// Original: hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::getClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::getClosestPoints(int a1, int a2, int a3, int a4, int a5)
{
  uint32_t v6[4];

  v6[1] = 2139095022;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v6[2] = a5;
  return hkpShapeCollectionAgent::getClosestPoints(a1, a3, a2, a4, v6);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::updateShapeCollectionFilter  (binary VA: 0x169c700)
// Original: hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::updateShapeCollectionFilter(int a1, int a2, int a3, int a4, int a5)
{
  return hkpShapeCollectionAgent::updateShapeCollectionFilter(a1, a3, a2, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpBvTreeStreamAgent_8ab76a::Destroy  (binary VA: 0x169c750)
// Original: hkpSymmetricAgent<hkpBvTreeStreamAgent>::~hkpSymmetricAgent
// ----------------------------------------------------------------------------
void hkpSymmetricAgent_hkpBvTreeStreamAgent_8ab76a::Destroy(hkpSymmetricAgent<hkpBvTreeStreamAgent::Self> *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2099CE8);
  v1 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 13) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 12),
      4 * v1);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 64;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpShapeCollectionAgent_42da58::Destroy  (binary VA: 0x169c800)
// Original: hkpSymmetricAgent<hkpShapeCollectionAgent>::~hkpSymmetricAgent
// ----------------------------------------------------------------------------
void hkpSymmetricAgent_hkpShapeCollectionAgent_42da58::Destroy(hkpSymmetricAgent<hkpShapeCollectionAgent::Self> *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A788);
  v1 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      8 * v1);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 56;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvTreeStreamAgent_b17254::Destroy  (binary VA: 0x169c970)
// Original: hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpBvTreeStreamAgent_b17254::Destroy(hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent::Self> *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2099CE8);
  v1 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 13) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 12),
      4 * v1);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::Destroy  (binary VA: 0x169c9e0)
// Original: hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::Destroy(hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent::Self> *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A788);
  v1 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      8 * v1);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpShapeCollectionAgent_42da58::Destroy_ea169ca50  (binary VA: 0x169ca50)
// Original: hkpSymmetricAgent<hkpShapeCollectionAgent>::~hkpSymmetricAgent
// ----------------------------------------------------------------------------
void hkpSymmetricAgent_hkpShapeCollectionAgent_42da58::Destroy_ea169ca50(hkpSymmetricAgent<hkpShapeCollectionAgent::Self> *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A788);
  v1 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      8 * v1);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpBvTreeStreamAgent_8ab76a::Destroy_ea169cac0  (binary VA: 0x169cac0)
// Original: hkpSymmetricAgent<hkpBvTreeStreamAgent>::~hkpSymmetricAgent
// ----------------------------------------------------------------------------
void hkpSymmetricAgent_hkpBvTreeStreamAgent_8ab76a::Destroy_ea169cac0(hkpSymmetricAgent<hkpBvTreeStreamAgent::Self> *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2099CE8);
  v1 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 13) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 12),
      4 * v1);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::Destroy_ea169cbe0  (binary VA: 0x169cbe0)
// Original: hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::Destroy_ea169cbe0(hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent::Self> *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209A788);
  v1 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      8 * v1);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 56;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvTreeStreamAgent_b17254::Destroy_ea169cc90  (binary VA: 0x169cc90)
// Original: hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpBvTreeStreamAgent_b17254::Destroy_ea169cc90(hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent::Self> *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2099CE8);
  v1 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 13) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 12),
      4 * v1);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 64;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::processCollision  (binary VA: 0x169cd40)
// Original: hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::processCollision
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::processCollision(int a1, int a2, int a3, int a4, float *a5)
{
  unsigned int v5;
  int result;
  unsigned int v7;
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  int v14;
  int v15;
  int v16;
  float v17; // xmm2_4
  float v18; // xmm1_4
  int v19;
  float v20; // xmm3_4
  float v21;
  int16_t v22;

  v21 = a5[3084];
  v5 = *(uint32_t *)a5;
  result = hkpShapeCollectionAgent::processCollision(a1, a3, a2, a4, a5);
  if ( v5 < *(uint32_t *)a5 )
  {
    v7 = v5 + 20;
    result = v5 + 16;
    do
    {
      v8 = *(float *)(v5 + 28);
      v7 += 48;
      v9 = *(float *)(v7 - 52);
      v5 += 48;
      result += 48;
      *(float *)(v5 - 48) = (float)(v8 * v9) + *(float *)(v5 - 48);
      v10 = *(float *)(v7 - 48);
      *(float *)(v5 - 44) = (float)(v8 * v10) + *(float *)(v5 - 44);
      v11 = *(float *)(v7 - 44);
      v12 = v8 * v11;
      v13 = (float)(v8 * v8) + *(float *)(v5 - 36);
      *(float *)(v5 - 40) = v12 + *(float *)(v5 - 40);
      *(float *)(v5 - 36) = v13;
      *(float *)(result - 48) = -v9;
      *(float *)(result - 44) = -v10;
      *(float *)(result - 40) = -v11;
    }
    while ( v5 < *(uint32_t *)a5 );
  }
  if ( v21 != a5[3084] )
  {
    v14 = *((uint8_t *)a5 + 12360);
    v15 = *((uint8_t *)a5 + 12361);
    v22 = *((uint16_t *)a5 + 6176);
    *((uint8_t *)a5 + 12361) = v14;
    *((uint8_t *)a5 + 12360) = v15;
    v16 = (uint8_t)v15 + (uint8_t)v14 - 1;
    result = v15 & v14;
    v17 = -a5[3081];
    v18 = -a5[3082];
    v19 = (int)(uintptr_t)(a5) + 2 * v16;
    v20 = -a5[3080];
    *((uint8_t *)a5 + 12362) = __builtin_rotateleft8(*((uint8_t *)a5 + 12362), 4);
    a5[3080] = v20;
    a5[3081] = v17;
    a5[3082] = v18;
    *((uint16_t *)a5 + 6176) = *(uint16_t *)(v19 + 12352);
    *(uint16_t *)(v19 + 12352) = v22;
    if ( (uint8_t)result == 2 )
    {
      result = *((uint16_t *)a5 + 6177);
      *((uint16_t *)a5 + 6177) = *((uint16_t *)a5 + 6178);
      *((uint16_t *)a5 + 6178) = result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereBoxAgent_5d8cb1::Destroy  (binary VA: 0x169e410)
// Original: hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpSphereBoxAgent_5d8cb1::Destroy(hkpSymmetricAgentLinearCast<hkpSphereBoxAgent::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereBoxAgent_5d8cb1::updateShapeCollectionFilter  (binary VA: 0x16a1200)
// Original: hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpSphereBoxAgent_5d8cb1::updateShapeCollectionFilter()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereBoxAgent_5d8cb1::staticLinearCast  (binary VA: 0x16a1210)
// Original: hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::staticLinearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpSphereBoxAgent_5d8cb1::staticLinearCast(int a1, int a2, float *a3, int a4, int a5)
{
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  int v8;
  int v9;
  float v10; // xmm1_4
  typedef uint32_t _g4_t_v12[4];
  typedef uint32_t _g4_t_v13[12];
  typedef float _g4_t_v14[31];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v14)) > _g4_s2 ? (64u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);

  v5 = -a3[20];
  std::memcpy(v14, a3, 112);
  v14[20] = v5;
  v6 = -a3[21];
  v13[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v14[21] = v6;
  v7 = a3[22];
  *(float *)&v13[4] = a3[20];
  v8 = *((uint32_t *)a3 + 21);
  v14[22] = -v7;
  v13[5] = v8;
  v9 = *((uint32_t *)a3 + 22);
  v10 = -a3[23];
  *(float *)&v13[7] = a3[23];
  v13[8] = a4;
  v13[1] = 2139095022;
  v14[23] = v10;
  v13[6] = v9;
  if ( a5 == 0 )
    return (int)(uintptr_t)((int)(uintptr_t)(hkpIterativeLinearCastAgent::staticLinearCast(a2, a1, (int)(uintptr_t)(v14), (int)(uintptr_t)(v13), 0)));
  v12[1] = 2139095022;
  v12[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v12[2] = a5;
  return (int)(uintptr_t)((int)(uintptr_t)(hkpIterativeLinearCastAgent::staticLinearCast(a2, a1, (int)(uintptr_t)(v14), (int)(uintptr_t)(v13), (int)(uintptr_t)(v12))));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereBoxAgent_5d8cb1::Destroy_ea16a1330  (binary VA: 0x16a1330)
// Original: hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpSphereBoxAgent_5d8cb1::Destroy_ea16a1330(hkpSymmetricAgentLinearCast<hkpSphereBoxAgent::Self> *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereBoxAgent_5d8cb1::processCollision  (binary VA: 0x16a1a90)
// Original: hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::processCollision
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpSphereBoxAgent_5d8cb1::processCollision(int a1, uint32_t *a2, uint32_t *a3, int a4, int a5)
{
  unsigned int v5;
  int result;
  unsigned int v7;
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  int v14;
  int v15;
  int v16;
  float v17; // xmm2_4
  float v18; // xmm1_4
  int v19;
  float v20; // xmm3_4
  float v21;
  int16_t v22;

  v21 = *(float *)(a5 + 12336);
  v5 = *(uint32_t *)a5;
  result = hkpSphereBoxAgent::processCollision(a1, a3, a2, a4, (int *)a5);
  if ( v5 < *(uint32_t *)a5 )
  {
    v7 = v5 + 20;
    result = v5 + 16;
    do
    {
      v8 = *(float *)(v5 + 28);
      v7 += 48;
      v9 = *(float *)(v7 - 52);
      v5 += 48;
      result += 48;
      *(float *)(v5 - 48) = (float)(v8 * v9) + *(float *)(v5 - 48);
      v10 = *(float *)(v7 - 48);
      *(float *)(v5 - 44) = (float)(v8 * v10) + *(float *)(v5 - 44);
      v11 = *(float *)(v7 - 44);
      v12 = v8 * v11;
      v13 = (float)(v8 * v8) + *(float *)(v5 - 36);
      *(float *)(v5 - 40) = v12 + *(float *)(v5 - 40);
      *(float *)(v5 - 36) = v13;
      *(float *)(result - 48) = -v9;
      *(float *)(result - 44) = -v10;
      *(float *)(result - 40) = -v11;
    }
    while ( v5 < *(uint32_t *)a5 );
  }
  if ( v21 != *(float *)(a5 + 12336) )
  {
    v14 = *(uint8_t *)(a5 + 12360);
    v15 = *(uint8_t *)(a5 + 12361);
    v22 = *(uint16_t *)(a5 + 12352);
    *(uint8_t *)(a5 + 12361) = v14;
    *(uint8_t *)(a5 + 12360) = v15;
    v16 = (uint8_t)v15 + (uint8_t)v14 - 1;
    result = v15 & v14;
    v17 = -*(float *)(a5 + 12324);
    v18 = -*(float *)(a5 + 12328);
    v19 = a5 + 2 * v16;
    v20 = -*(float *)(a5 + 12320);
    *(uint8_t *)(a5 + 12362) = __builtin_rotateleft8(*(uint8_t *)(a5 + 12362), 4);
    *(float *)(a5 + 12320) = v20;
    *(float *)(a5 + 12324) = v17;
    *(float *)(a5 + 12328) = v18;
    *(uint16_t *)(a5 + 12352) = *(uint16_t *)(v19 + 12352);
    *(uint16_t *)(v19 + 12352) = v22;
    if ( (uint8_t)result == 2 )
    {
      result = *(uint16_t *)(a5 + 12354);
      *(uint16_t *)(a5 + 12354) = *(uint16_t *)(a5 + 12356);
      *(uint16_t *)(a5 + 12356) = result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereBoxAgent_5d8cb1::staticGetPenetrations  (binary VA: 0x16a1f20)
// Original: hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpSphereBoxAgent_5d8cb1::staticGetPenetrations(uint32_t *a1, uint32_t *a2, int a3, int a4)
{
  uint32_t v5[4];

  LOBYTE(v5[1]) = 0;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v5[2] = a4;
  return hkpSphereBoxAgent::staticGetPenetrations(a2, a1, a3, (int)(uintptr_t)(v5));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereBoxAgent_5d8cb1::getPenetrations  (binary VA: 0x16a1fc0)
// Original: hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::getPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpSphereBoxAgent_5d8cb1::getPenetrations(int a1, uint32_t *a2, uint32_t *a3, int a4, int a5)
{
  uint32_t v6[4];

  LOBYTE(v6[1]) = 0;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v6[2] = a5;
  return hkpSphereBoxAgent::getPenetrations(a1, a3, a2, a4, (int)(uintptr_t)(v6));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereBoxAgent_5d8cb1::staticGetClosestPoints  (binary VA: 0x16a2590)
// Original: hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpSphereBoxAgent_5d8cb1::staticGetClosestPoints(uint32_t *a1, uint32_t *a2, int a3, int a4)
{
  int v5[4];

  v5[1] = 2139095022;
  v5[0] = (int)((uint32_t)(uintptr_t)&off_209B818);
  v5[2] = a4;
  return hkpSphereBoxAgent::staticGetClosestPoints(a2, a1, a3, v5);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereBoxAgent_5d8cb1::getClosestPoints  (binary VA: 0x16a2b60)
// Original: hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>::getClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpSphereBoxAgent_5d8cb1::getClosestPoints(int a1, uint32_t *a2, uint32_t *a3, int a4, int a5)
{
  int v6[4];

  v6[1] = 2139095022;
  v6[0] = (int)((uint32_t)(uintptr_t)&off_209B818);
  v6[2] = a5;
  return hkpSphereBoxAgent::getClosestPoints(a1, a3, a2, a4, v6);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereTriangleAgent_4500b0::Destroy  (binary VA: 0x16a4ac0)
// Original: hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpSphereTriangleAgent_4500b0::Destroy(hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereTriangleAgent_4500b0::updateShapeCollectionFilter  (binary VA: 0x16a4ae0)
// Original: hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpSphereTriangleAgent_4500b0::updateShapeCollectionFilter()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereTriangleAgent_4500b0::staticLinearCast  (binary VA: 0x16a4af0)
// Original: hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::staticLinearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpSphereTriangleAgent_4500b0::staticLinearCast(int a1, int a2, float *a3, int a4, int a5)
{
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  int v8;
  int v9;
  float v10; // xmm1_4
  typedef uint32_t _g4_t_v12[4];
  typedef uint32_t _g4_t_v13[12];
  typedef float _g4_t_v14[31];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v14)) > _g4_s2 ? (64u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);

  v5 = -a3[20];
  std::memcpy(v14, a3, 112);
  v14[20] = v5;
  v6 = -a3[21];
  v13[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v14[21] = v6;
  v7 = a3[22];
  *(float *)&v13[4] = a3[20];
  v8 = *((uint32_t *)a3 + 21);
  v14[22] = -v7;
  v13[5] = v8;
  v9 = *((uint32_t *)a3 + 22);
  v10 = -a3[23];
  *(float *)&v13[7] = a3[23];
  v13[8] = a4;
  v13[1] = 2139095022;
  v14[23] = v10;
  v13[6] = v9;
  if ( a5 == 0 )
    return (int)(uintptr_t)((int)(uintptr_t)(hkpIterativeLinearCastAgent::staticLinearCast(a2, a1, (int)(uintptr_t)(v14), (int)(uintptr_t)(v13), 0)));
  v12[1] = 2139095022;
  v12[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v12[2] = a5;
  return (int)(uintptr_t)((int)(uintptr_t)(hkpIterativeLinearCastAgent::staticLinearCast(a2, a1, (int)(uintptr_t)(v14), (int)(uintptr_t)(v13), (int)(uintptr_t)(v12))));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereTriangleAgent_4500b0::Destroy_ea16a4c10  (binary VA: 0x16a4c10)
// Original: hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpSphereTriangleAgent_4500b0::Destroy_ea16a4c10(hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent::Self> *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereTriangleAgent_4500b0::staticGetPenetrations  (binary VA: 0x16a4e70)
// Original: hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpSphereTriangleAgent_4500b0::staticGetPenetrations(int *a1, int *a2, int a3, int a4)
{
  uint32_t v5[4];

  LOBYTE(v5[1]) = 0;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v5[2] = a4;
  return hkpSphereTriangleAgent::staticGetPenetrations(a2, a1, a3, (int)(uintptr_t)(v5));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereTriangleAgent_4500b0::getPenetrations  (binary VA: 0x16a5160)
// Original: hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::getPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpSphereTriangleAgent_4500b0::getPenetrations(int a1, int *a2, int *a3, int a4, int a5)
{
  uint32_t v6[4];

  LOBYTE(v6[1]) = 0;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v6[2] = a5;
  return hkpSphereTriangleAgent::getPenetrations(a1, a3, a2, a4, (int)(uintptr_t)(v6));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereTriangleAgent_4500b0::processCollision  (binary VA: 0x16a51c0)
// Original: hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::processCollision
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpSphereTriangleAgent_4500b0::processCollision(int a1, float **a2, int *a3, int a4, float *a5)
{
  float *v5;
  float *v6;
  uint32_t *v7;
  uint64_t v8; // rax
  float *v9;
  float *v10;
  float *v11;
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  float **v27;
  float *v28;
  float *v29;
  float v30; // xmm6_4
  float v31; // xmm5_4
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm1_4
  float v35; // xmm5_4
  bool v36;
  uint16_t v37;
  int result;
  uint32_t *v39;
  uint64_t v40; // rax
  float *v41;
  float v42; // xmm0_4
  float v43; // xmm4_4
  float v44; // xmm5_4
  float v45; // xmm3_4
  float v46; // xmm1_4
  float v47; // xmm0_4
  int v48;
  int v49;
  int v50;
  int v51;
  float v52; // xmm2_4
  float v53; // xmm1_4
  int v54;
  float v55; // xmm3_4
  float *v56;
  int v57;
  typedef float *_g4_t_v58;
  typedef int *_g4_t_address;
  typedef int _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef int _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float *_g4_t_v75;
  typedef float _g4_t_v76;
  typedef float *_g4_t_v77;
  typedef float _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int16_t _g4_t_v80;
  typedef int _g4_t_v81;
  typedef float **_g4_t_v82;
  typedef char _g4_t_v83;
  typedef char _g4_t_v84;
  typedef int16_t _g4_t_v85;
  typedef float _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91[15];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v58)) > _g4_s0 ? (8u + sizeof(_g4_t_v58)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_address)) > _g4_s1 ? (12u + sizeof(_g4_t_address)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v60)) > _g4_s2 ? (20u + sizeof(_g4_t_v60)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v61)) > _g4_s3 ? (24u + sizeof(_g4_t_v61)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v62)) > _g4_s4 ? (28u + sizeof(_g4_t_v62)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v63)) > _g4_s5 ? (32u + sizeof(_g4_t_v63)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v64)) > _g4_s6 ? (36u + sizeof(_g4_t_v64)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v65)) > _g4_s7 ? (40u + sizeof(_g4_t_v65)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v66)) > _g4_s8 ? (44u + sizeof(_g4_t_v66)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v67)) > _g4_s9 ? (48u + sizeof(_g4_t_v67)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v68)) > _g4_s10 ? (52u + sizeof(_g4_t_v68)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v69)) > _g4_s11 ? (56u + sizeof(_g4_t_v69)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v70)) > _g4_s12 ? (60u + sizeof(_g4_t_v70)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v71)) > _g4_s13 ? (64u + sizeof(_g4_t_v71)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v72)) > _g4_s14 ? (68u + sizeof(_g4_t_v72)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v73)) > _g4_s15 ? (72u + sizeof(_g4_t_v73)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v74)) > _g4_s16 ? (72u + sizeof(_g4_t_v74)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v75)) > _g4_s17 ? (72u + sizeof(_g4_t_v75)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v76)) > _g4_s18 ? (76u + sizeof(_g4_t_v76)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v77)) > _g4_s19 ? (76u + sizeof(_g4_t_v77)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v78)) > _g4_s20 ? (76u + sizeof(_g4_t_v78)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v79)) > _g4_s21 ? (76u + sizeof(_g4_t_v79)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v80)) > _g4_s22 ? (76u + sizeof(_g4_t_v80)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v81)) > _g4_s23 ? (76u + sizeof(_g4_t_v81)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v82)) > _g4_s24 ? (76u + sizeof(_g4_t_v82)) : _g4_s24,
    _g4_s26 = (80u + sizeof(_g4_t_v83)) > _g4_s25 ? (80u + sizeof(_g4_t_v83)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v84)) > _g4_s26 ? (88u + sizeof(_g4_t_v84)) : _g4_s26,
    _g4_s28 = (90u + sizeof(_g4_t_v85)) > _g4_s27 ? (90u + sizeof(_g4_t_v85)) : _g4_s27,
    _g4_s29 = (96u + sizeof(_g4_t_v86)) > _g4_s28 ? (96u + sizeof(_g4_t_v86)) : _g4_s28,
    _g4_s30 = (100u + sizeof(_g4_t_v87)) > _g4_s29 ? (100u + sizeof(_g4_t_v87)) : _g4_s29,
    _g4_s31 = (104u + sizeof(_g4_t_v88)) > _g4_s30 ? (104u + sizeof(_g4_t_v88)) : _g4_s30,
    _g4_s32 = (108u + sizeof(_g4_t_v89)) > _g4_s31 ? (108u + sizeof(_g4_t_v89)) : _g4_s31,
    _g4_s33 = (112u + sizeof(_g4_t_v90)) > _g4_s32 ? (112u + sizeof(_g4_t_v90)) : _g4_s32,
    _g4_s34 = (128u + sizeof(_g4_t_v91)) > _g4_s33 ? (128u + sizeof(_g4_t_v91)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 20u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 24u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 36u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 40u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 44u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 48u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 52u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 56u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 60u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 64u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 68u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 72u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 72u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 72u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 76u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 76u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 76u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 76u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 76u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 76u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 76u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 80u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 88u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 90u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 96u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 100u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 104u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 108u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 112u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 128u);

  v61 = a5[3084];
  v5 = *(float **)a5;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v73 = *address;
  v6 = v5;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtSphereTri");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v73 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
    v6 = *(float **)a5;
  }
  v58 = v6;
  v9 = *a2;
  v60 = *a3;
  v10 = (float *)a3[2];
  v11 = a2[2];
  v62 = v11[3];
  v70 = v11[7];
  v68 = v11[10];
  v12 = *v11;
  v74 = v11[1];
  v76 = v11[2];
  v72 = v11[5];
  v13 = v11[4];
  v71 = v11[6];
  v14 = v11[8];
  v69 = v11[9];
  v67 = v11[11];
  v66 = v11[12];
  v63 = v11[15];
  v15 = (*a2)[16];
  v65 = v11[13];
  v64 = v11[14];
  v16 = (*a2)[17];
  v17 = (*a2)[18];
  v91[8] = (float)((float)((float)(v15 * *v11) + (float)(v13 * v16)) + (float)(v17 * v14)) + v66;
  v91[9] = (float)((float)((float)(v74 * v15) + (float)(v72 * v16)) + (float)(v69 * v17)) + v65;
  v91[10] = (float)((float)((float)(v76 * v15) + (float)(v71 * v16)) + (float)(v68 * v17)) + v64;
  v91[11] = (float)((float)((float)(v15 * v62) + (float)(v16 * v70)) + (float)(v17 * v67)) + v63;
  v18 = v9[12];
  v19 = v9[13];
  v20 = v9[14];
  v91[4] = (float)((float)((float)(v18 * v12) + (float)(v13 * v19)) + (float)(v20 * v14)) + v66;
  v91[5] = (float)((float)((float)(v74 * v18) + (float)(v72 * v19)) + (float)(v69 * v20)) + v65;
  v91[6] = (float)((float)((float)(v76 * v18) + (float)(v71 * v19)) + (float)(v68 * v20)) + v64;
  v91[7] = (float)((float)((float)(v18 * v62) + (float)(v19 * v70)) + (float)(v20 * v67)) + v63;
  v21 = v9[8];
  v22 = v9[9];
  v23 = v9[10];
  v91[0] = (float)((float)((float)(v12 * v21) + (float)(v13 * v22)) + (float)(v14 * v23)) + v66;
  v91[1] = (float)((float)((float)(v74 * v21) + (float)(v72 * v22)) + (float)(v69 * v23)) + v65;
  v91[2] = (float)((float)((float)(v76 * v21) + (float)(v71 * v22)) + (float)(v68 * v23)) + v64;
  v91[3] = (float)((float)((float)(v21 * v62) + (float)(v22 * v70)) + (float)(v23 * v67)) + v63;
  v77 = v10;
  hkpCollideTriangleUtil::closestPointTriangle(v10 + 12, v91, a1 + 16, &v86, &v84);
  v24 = v9[4];
  v25 = *(float *)(v60 + 16) + v24;
  v26 = v90;
  v27 = (float **)a5;
  if ( (float)(v25 + *(float *)(a4 + 12)) <= v90 )
  {
    v48 = *(uint16_t *)(a1 + 12);
    if ( (uint16_t)v48 != 0xFFFF )
    {
      (*(void (**)(uint32_t, int, float *))(**(uint32_t **)(a1 + 8) + 28))(
        *(uint32_t *)(a1 + 8),
        v48,
        *((float **)a5 + 1));
      v27 = (float **)a5;
      *(uint16_t *)(a1 + 12) = -1;
    }
    goto LABEL_7;
  }
  v28 = v77;
  v78 = v88;
  v29 = v58;
  v30 = v87;
  v31 = v24 - v90;
  v32 = (float)(v88 * (float)(v24 - v90)) + v28[14];
  v33 = (float)(v89 * (float)(v24 - v90)) + v28[15];
  v34 = (float)((float)(v24 - v90) * v86) + v28[12];
  v35 = (float)(v31 * v87) + v28[13];
  v58[4] = v86;
  v58[2] = v32;
  *v58 = v34;
  v36 = v84 == 0;
  v83 = v84;
  v58[1] = v35;
  v58[3] = v33;
  v58[5] = v30;
  v58[6] = v78;
  v58[7] = v26 - v25;
  if ( v36 )
  {
LABEL_5:
    v37 = *(uint16_t *)(a1 + 12);
    if ( v37 != 0xFFFF
      || (v82 = v27,
          v75 = v29,
          v37 = (*(int (**)(uint32_t, int *, float **, int, float **, uint32_t, float *))(**(uint32_t **)(a1 + 8) + 20))(
                  *(uint32_t *)(a1 + 8),
                  a3,
                  a2,
                  a4,
                  v27,
                  0,
                  v29),
          v27 = v82,
          v29 = v75,
          *(uint16_t *)(a1 + 12) = v37,
          v37 != 0xFFFF) )
    {
      *((uint32_t *)v29 + 8) = v37;
      *v27 += 12;
    }
LABEL_7:
    result = *address;
    v79 = *address;
    v39 = *(uint32_t **)(*address + 4);
    if ( (unsigned int)(uintptr_t)(v39) < *(uint32_t *)(*address + 12) )
    {
      *v39 = (uint32_t)(uintptr_t)("Et");
      v40 = __rdtsc();
      v39[1] = v40;
      result = v79;
      *(uint32_t *)(v79 + 4) = (uint32_t)(uintptr_t)(v39 + 3);
    }
    goto LABEL_9;
  }
  v81 = *a3;
  v56 = *a2;
  v86 = v58[4];
  v87 = v58[5];
  v88 = v58[6];
  v89 = v58[7];
  v91[0] = *v58;
  v91[1] = v58[1];
  v91[2] = v58[2];
  v91[3] = v58[3];
  v57 = G4_VCALL<int>(v56, 60, &v85, &v83, v91, a2[2], v81, a3[2], &v86);
  v29 = v58;
  v27 = (float **)a5;
  if ( v57 != 0 )
  {
    if ( v57 == 1 )
    {
      v58[4] = v86;
      v58[5] = v87;
      v58[6] = v88;
    }
    goto LABEL_5;
  }
  result = *(uint16_t *)(a1 + 12);
  if ( (uint16_t)result != 0xFFFF )
  {
    (*(void (**)(uint32_t, int, float *))(**(uint32_t **)(a1 + 8) + 28))(
      *(uint32_t *)(a1 + 8),
      result,
      *((float **)a5 + 1));
    result = a1;
    v27 = (float **)a5;
    *(uint16_t *)(a1 + 12) = -1;
  }
LABEL_9:
  if ( *v27 > v5 )
  {
    v41 = v5 + 5;
    result = (int)(uintptr_t)(v5 + 4);
    do
    {
      v42 = v5[7];
      v41 += 12;
      v43 = *(v41 - 13);
      v5 += 12;
      result += 48;
      *(v5 - 12) = (float)(v42 * v43) + *(v5 - 12);
      v44 = *(v41 - 12);
      *(v5 - 11) = (float)(v42 * v44) + *(v5 - 11);
      v45 = *(v41 - 11);
      v46 = v42 * v45;
      v47 = (float)(v42 * v42) + *(v5 - 9);
      *(v5 - 10) = v46 + *(v5 - 10);
      *(v5 - 9) = v47;
      *(float *)(result - 48) = -v43;
      *(float *)(result - 44) = -v44;
      *(float *)(result - 40) = -v45;
    }
    while ( v5 < *v27 );
  }
  if ( v61 != *((float *)v27 + 3084) )
  {
    v49 = *((uint8_t *)v27 + 12360);
    v50 = *((uint8_t *)v27 + 12361);
    v80 = *((uint16_t *)v27 + 6176);
    *((uint8_t *)v27 + 12361) = v49;
    *((uint8_t *)v27 + 12360) = v50;
    v51 = (uint8_t)v50 + (uint8_t)v49 - 1;
    result = v50 & v49;
    v52 = -*((float *)v27 + 3081);
    v53 = -*((float *)v27 + 3082);
    v54 = (int)(uintptr_t)(v27) + 2 * v51;
    v55 = -*((float *)v27 + 3080);
    *((uint8_t *)v27 + 12362) = __builtin_rotateleft8(*((uint8_t *)v27 + 12362), 4);
    *((float *)v27 + 3080) = v55;
    *((float *)v27 + 3081) = v52;
    *((float *)v27 + 3082) = v53;
    *((uint16_t *)v27 + 6176) = *(uint16_t *)(v54 + 12352);
    *(uint16_t *)(v54 + 12352) = v80;
    if ( (uint8_t)result == 2 )
    {
      result = *((uint16_t *)v27 + 6177);
      *((uint16_t *)v27 + 6177) = *((uint16_t *)v27 + 6178);
      *((uint16_t *)v27 + 6178) = result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereTriangleAgent_4500b0::getClosestPoints  (binary VA: 0x16a5ed0)
// Original: hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::getClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpSphereTriangleAgent_4500b0::getClosestPoints(int a1, float **a2, int *a3, int a4, int a5)
{
  int v6[4];

  v6[1] = 2139095022;
  v6[0] = (int)((uint32_t)(uintptr_t)&off_209B818);
  v6[2] = a5;
  return hkpSphereTriangleAgent::getClosestPoints(a1, a3, a2, a4, v6);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereTriangleAgent_4500b0::staticGetClosestPoints  (binary VA: 0x16a6b80)
// Original: hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpSphereTriangleAgent_4500b0::staticGetClosestPoints(float **a1, int *a2, int a3, int a4)
{
  uint32_t v5[4];

  v5[1] = 2139095022;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v5[2] = a4;
  return hkpSphereTriangleAgent::staticGetClosestPoints(a2, a1, a3, (int)(uintptr_t)(v5));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereCapsuleAgent_5d9101::Destroy  (binary VA: 0x16bc0b0)
// Original: hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpSphereCapsuleAgent_5d9101::Destroy(hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereCapsuleAgent_5d9101::updateShapeCollectionFilter  (binary VA: 0x16bc0d0)
// Original: hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpSphereCapsuleAgent_5d9101::updateShapeCollectionFilter()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereCapsuleAgent_5d9101::staticLinearCast  (binary VA: 0x16bc0e0)
// Original: hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::staticLinearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpSphereCapsuleAgent_5d9101::staticLinearCast(int a1, int a2, float *a3, int a4, int a5)
{
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  int v8;
  int v9;
  float v10; // xmm1_4
  typedef uint32_t _g4_t_v12[4];
  typedef uint32_t _g4_t_v13[12];
  typedef float _g4_t_v14[31];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v14)) > _g4_s2 ? (64u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);

  v5 = -a3[20];
  std::memcpy(v14, a3, 112);
  v14[20] = v5;
  v6 = -a3[21];
  v13[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v14[21] = v6;
  v7 = a3[22];
  *(float *)&v13[4] = a3[20];
  v8 = *((uint32_t *)a3 + 21);
  v14[22] = -v7;
  v13[5] = v8;
  v9 = *((uint32_t *)a3 + 22);
  v10 = -a3[23];
  *(float *)&v13[7] = a3[23];
  v13[8] = a4;
  v13[1] = 2139095022;
  v14[23] = v10;
  v13[6] = v9;
  if ( a5 == 0 )
    return (int)(uintptr_t)((int)(uintptr_t)(hkpIterativeLinearCastAgent::staticLinearCast(a2, a1, (int)(uintptr_t)(v14), (int)(uintptr_t)(v13), 0)));
  v12[1] = 2139095022;
  v12[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v12[2] = a5;
  return (int)(uintptr_t)((int)(uintptr_t)(hkpIterativeLinearCastAgent::staticLinearCast(a2, a1, (int)(uintptr_t)(v14), (int)(uintptr_t)(v13), (int)(uintptr_t)(v12))));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereCapsuleAgent_5d9101::Destroy_ea16bc200  (binary VA: 0x16bc200)
// Original: hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpSphereCapsuleAgent_5d9101::Destroy_ea16bc200(hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent::Self> *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereCapsuleAgent_5d9101::processCollision  (binary VA: 0x16bc380)
// Original: hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::processCollision
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpSphereCapsuleAgent_5d9101::processCollision(int a1, int *a2, int *a3, int a4, float *a5)
{
  unsigned int v5;
  int *address;
  int v7;
  uint32_t *v8;
  uint64_t v9; // rax
  int v10;
  float *v11;
  int v12;
  float v13; // xmm5_4
  float v14; // xmm6_4
  float v15; // xmm4_4
  float *v16;
  float *v17;
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  unsigned int v21;
  __m128i v22;
  float v23; // xmm5_4
  float v24; // xmm0_4
  __m128i v25;
  int v26;
  int v27;
  float v28; // xmm1_4
  float v29; // xmm1_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  int v32;
  int v33;
  float v34; // xmm3_4
  float v35; // xmm2_4
  float v36; // xmm6_4
  float v37; // xmm5_4
  float v38; // xmm3_4
  float v39; // xmm0_4
  float v40; // xmm3_4
  float v41; // xmm1_4
  float v42; // xmm6_4
  uint16_t v43;
  int result;
  uint32_t *v45;
  uint64_t v46; // rax
  unsigned int v47;
  float v48; // xmm0_4
  float v49; // xmm4_4
  float v50; // xmm5_4
  float v51; // xmm3_4
  float v52; // xmm1_4
  float v53; // xmm0_4
  int v54;
  int v55;
  int v56;
  int v57;
  float v58; // xmm2_4
  float v59; // xmm3_4
  float v60; // xmm1_4
  int v61;
  float v62; // xmm6_4
  __m128 v63;
  float v64; // xmm7_4
  __m128 v65;
  __m128 v66;
  float v67; // xmm1_4
  int v68;
  int v69;
  __m128 v70;
  typedef unsigned int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int *_g4_t_v73;
  typedef float _g4_t_v74;
  typedef unsigned int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef int _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int16_t _g4_t_v94;
  typedef float _g4_t_v95[4];
  typedef unsigned int _g4_t_v96;
  typedef float _g4_t_v97;
  typedef float _g4_t_v98;
  typedef float _g4_t_v99[4];
  typedef float _g4_t_v100[7];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v71)) > _g4_s0 ? (8u + sizeof(_g4_t_v71)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v72)) > _g4_s1 ? (20u + sizeof(_g4_t_v72)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v73)) > _g4_s2 ? (24u + sizeof(_g4_t_v73)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v74)) > _g4_s3 ? (28u + sizeof(_g4_t_v74)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v75)) > _g4_s4 ? (32u + sizeof(_g4_t_v75)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v76)) > _g4_s5 ? (36u + sizeof(_g4_t_v76)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v77)) > _g4_s6 ? (40u + sizeof(_g4_t_v77)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v78)) > _g4_s7 ? (44u + sizeof(_g4_t_v78)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v79)) > _g4_s8 ? (48u + sizeof(_g4_t_v79)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v80)) > _g4_s9 ? (52u + sizeof(_g4_t_v80)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v81)) > _g4_s10 ? (56u + sizeof(_g4_t_v81)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v82)) > _g4_s11 ? (60u + sizeof(_g4_t_v82)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v83)) > _g4_s12 ? (64u + sizeof(_g4_t_v83)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v84)) > _g4_s13 ? (68u + sizeof(_g4_t_v84)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v85)) > _g4_s14 ? (72u + sizeof(_g4_t_v85)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v86)) > _g4_s15 ? (76u + sizeof(_g4_t_v86)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v87)) > _g4_s16 ? (80u + sizeof(_g4_t_v87)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v88)) > _g4_s17 ? (84u + sizeof(_g4_t_v88)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v89)) > _g4_s18 ? (88u + sizeof(_g4_t_v89)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v90)) > _g4_s19 ? (92u + sizeof(_g4_t_v90)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v91)) > _g4_s20 ? (92u + sizeof(_g4_t_v91)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v92)) > _g4_s21 ? (92u + sizeof(_g4_t_v92)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v93)) > _g4_s22 ? (92u + sizeof(_g4_t_v93)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v94)) > _g4_s23 ? (92u + sizeof(_g4_t_v94)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v95)) > _g4_s24 ? (96u + sizeof(_g4_t_v95)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v96)) > _g4_s25 ? (112u + sizeof(_g4_t_v96)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v97)) > _g4_s26 ? (116u + sizeof(_g4_t_v97)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v98)) > _g4_s27 ? (120u + sizeof(_g4_t_v98)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v99)) > _g4_s28 ? (128u + sizeof(_g4_t_v99)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v100)) > _g4_s29 ? (144u + sizeof(_g4_t_v100)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 8u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 20u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 24u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 28u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 32u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 36u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 40u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 44u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 48u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 52u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 56u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 60u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 64u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 68u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 72u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 76u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 80u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 84u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 88u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 92u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 92u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 92u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 92u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 92u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 96u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 112u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 116u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 120u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 128u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 144u);

  v74 = a5[3084];
  v5 = *(uint32_t *)a5;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v7 = *address;
  v73 = address;
  v75 = v5;
  v8 = *(uint32_t **)(*address + 4);
  v90 = *(uint32_t *)(v7 + 4);
  if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(v7 + 12) )
  {
    *v8 = (uint32_t)(uintptr_t)("TtSphereCapsule");
    v9 = __rdtsc();
    *(uint32_t *)(v90 + 4) = v9;
    *(uint32_t *)(v7 + 4) = v90 + 12;
    v75 = *(uint32_t *)a5;
  }
  v72 = *a3;
  v76 = a3[2];
  v10 = 1;
  v77 = *a2;
  v11 = (float *)a2[2];
  v78 = *v11;
  v89 = v11[1];
  v91 = v11[2];
  v88 = v11[3];
  v87 = v11[4];
  v86 = v11[5];
  v85 = v11[6];
  v84 = v11[7];
  v83 = v11[8];
  v82 = v11[9];
  v81 = v11[10];
  v71 = v5;
  v80 = v11[11];
  v12 = *a2 + 32;
  v79 = v11[12];
  v13 = v11[14];
  v14 = v11[13];
  v15 = v11[15];
  while ( 1 )
  {
    v16 = (float *)(v12 + 16 * v10);
    v17 = &v99[4 * v10];
    v18 = *v16;
    v19 = v16[1];
    v20 = v16[2];
    *v17 = (float)((float)((float)(v78 * *v16) + (float)(v87 * v19)) + (float)(v83 * v20)) + v79;
    v17[1] = (float)((float)((float)(v89 * v18) + (float)(v86 * v19)) + (float)(v82 * v20)) + v14;
    v17[2] = (float)((float)((float)(v91 * v18) + (float)(v85 * v19)) + (float)(v81 * v20)) + v13;
    v17[3] = (float)((float)((float)(v18 * v88) + (float)(v19 * v84)) + (float)(v20 * v80)) + v15;
    if ( v10 != 1 )
      break;
    LOBYTE(v10) = 0;
  }
  v21 = v71;
  hkLineSegmentUtil::closestPointLineSeg(v76 + 48, v99, v100, v95);
g4_m128_raw(v22) = *(unsigned int *)(v76 + 48);
  *(float *)g4_m128_ptr<int32_t>(v22) = *(float *)g4_m128_ptr<int32_t>(v22) - v95[0];
  v23 = *(float *)(v76 + 52) - v95[1];
  v25 = v22;
  v24 = *(float *)(v72 + 16) + *(float *)(v77 + 16);
  *(float *)g4_m128_ptr<int32_t>(v25) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v22) * *(float *)g4_m128_ptr<int32_t>(v22)) + (float)(v23 * v23))
                          + (float)((float)(*(float *)(v76 + 56) - v95[2]) * (float)(*(float *)(v76 + 56) - v95[2]));
  if ( *(float *)g4_m128_ptr<int32_t>(v25) >= (float)((float)(*(float *)(a4 + 12) + v24) * (float)(*(float *)(a4 + 12) + v24)) )
  {
    v54 = *(uint16_t *)(a1 + 12);
    if ( (uint16_t)v54 != 0xFFFF )
    {
      (*(void (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 8) + 28))(
        *(uint32_t *)(a1 + 8),
        v54,
        *((uint32_t *)a5 + 1));
      *(uint16_t *)(a1 + 12) = -1;
    }
  }
  else
  {
    if ( *(float *)g4_m128_ptr<int32_t>(v25) <= 0.0 )
    {
      v62 = v100[1] - v99[1];
g4_m128_raw(v63) = LODWORD(v100[2]);
g4_m128_lane<float>(v63, 0) = v100[2] - v99[2];
      v64 = fabs(v100[0] - v99[0]);
g4_m128_lane<int32_t>(v65, 0) = fabs(v100[1] - v99[1]);
      v66 = _mm_and_ps(g4_m128_u32(0x7FFFFFFFu), v63);
      if ( v64 >g4_m128_lane<float>(v65, 0) )
      {
        v67 = v100[1] - v99[1];
        v68 = 0;
        v62 = v100[0] - v99[0];
        v69 = 1;
      }
      else
      {
        v67 = v100[0] - v99[0];
g4_m128_lane<float>(v65, 0) = v64;
        v68 = 1;
        v69 = 0;
      }
      v70 = _mm_cmplt_ss(v66, v65);
      if (g4_m128_lane<float>(v65, 0) <=g4_m128_lane<float>(v66, 0) )
        v69 = 2;
      v96 = 0;
      v97 = 0.0;
      v98 = 0.0;
      *(&v96 + v68) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v70, v63), 0)) | LODWORD(v67) &g4_m128_lane<int32_t>(v70, 0);
      *((float *)&v96 + v69) = -v62;
g4_m128_raw(v22) = v96;
      v23 = v97;
      v25 = v22;
      v92 = v98;
      *(float *)g4_m128_ptr<int32_t>(v25) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v22) * *(float *)g4_m128_ptr<int32_t>(v22)) + (float)(v23 * v23))
                              + (float)(v98 * v98);
      v29 = 0.0;
    }
    else
    {
      v26 = _mm_cvtsi128_si32(v25) >> 1;
      v27 = (_mm_cvtsi128_si32(v25) + 2139095040) >> 31;
      v28 = (float)(1.5 * COERCE_FLOAT(v27 & (1597463174 - v26)))
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v25)) * COERCE_FLOAT(v27 & (1597463174 - v26)))
                  * (float)(COERCE_FLOAT(v27 & (1597463174 - v26)) * COERCE_FLOAT(v27 & (1597463174 - v26))));
      v92 = *(float *)(v76 + 56) - v95[2];
      v29 = (float)((float)(1.5
                          * (float)((float)(1.5 * v28)
                                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v25)) * v28) * (float)(v28 * v28))))
                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v25))
                                  * (float)((float)(1.5 * v28)
                                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v25)) * v28)
                                                  * (float)(v28 * v28))))
                          * (float)((float)((float)(1.5 * v28)
                                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v25)) * v28)
                                                  * (float)(v28 * v28)))
                                  * (float)((float)(1.5 * v28)
                                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v25)) * v28)
                                                  * (float)(v28 * v28))))))
          * *(float *)g4_m128_ptr<int32_t>(v25);
    }
    v30 = 0.0;
    if ( *(float *)g4_m128_ptr<int32_t>(v25) > 0.0 )
    {
      v31 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v25);
      v32 = _mm_cvtsi128_si32(v25) >> 1;
      v33 = (_mm_cvtsi128_si32(v25) + 2139095040) >> 31;
      v34 = (float)(1.5 * COERCE_FLOAT(v33 & (1597463174 - v32)))
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v25)) * COERCE_FLOAT(v33 & (1597463174 - v32)))
                  * (float)(COERCE_FLOAT(v33 & (1597463174 - v32)) * COERCE_FLOAT(v33 & (1597463174 - v32))));
      v30 = (float)(1.5 * (float)((float)(1.5 * v34) - (float)((float)(v31 * v34) * (float)(v34 * v34))))
          - (float)((float)(v31 * (float)((float)(1.5 * v34) - (float)((float)(v31 * v34) * (float)(v34 * v34))))
                  * (float)((float)((float)(1.5 * v34) - (float)((float)(v31 * v34) * (float)(v34 * v34)))
                          * (float)((float)(1.5 * v34) - (float)((float)(v31 * v34) * (float)(v34 * v34)))));
    }
    v35 = v29 - v24;
    v36 = *(float *)g4_m128_ptr<int32_t>(v22) * v30;
    v37 = v23 * v30;
    v38 = v30 * v92;
    *(float *)(v75 + 16) = v36;
    *(float *)(v75 + 20) = v37;
    *(float *)(v75 + 24) = v38;
    *(float *)(v75 + 28) = v29 - v24;
    v39 = *(float *)(v77 + 16) - v29;
    v40 = (float)(v38 * v39) + *(float *)(v76 + 56);
    v41 = *(float *)(v76 + 60) + (float)(v35 * v39);
    v42 = (float)(v36 * v39) + *(float *)(v76 + 48);
    *(float *)(v75 + 4) = (float)(v37 * v39) + *(float *)(v76 + 52);
    *(float *)(v75 + 8) = v40;
    *(float *)(v75 + 12) = v41;
    *(float *)v75 = v42;
    v43 = *(uint16_t *)(a1 + 12);
    if ( v43 != 0xFFFF
      || (v43 = (*(int (**)(uint32_t, int *, int *, int, float *, uint32_t, unsigned int))(**(uint32_t **)(a1 + 8) + 20))(
                  *(uint32_t *)(a1 + 8),
                  a3,
                  a2,
                  a4,
                  a5,
                  0,
                  v75),
          *(uint16_t *)(a1 + 12) = v43,
          v43 != 0xFFFF) )
    {
      *(uint32_t *)(v75 + 32) = v43;
      *(uint32_t *)a5 += 48;
    }
  }
  result = *v73;
  v93 = *v73;
  v45 = *(uint32_t **)(*v73 + 4);
  if ( (unsigned int)(uintptr_t)(v45) < *(uint32_t *)(*v73 + 12) )
  {
    *v45 = (uint32_t)(uintptr_t)("Et");
    v46 = __rdtsc();
    v45[1] = v46;
    result = v93;
    *(uint32_t *)(v93 + 4) = (uint32_t)(uintptr_t)(v45 + 3);
  }
  if ( v71 < *(uint32_t *)a5 )
  {
    v47 = v71 + 20;
    result = v71 + 16;
    do
    {
      v48 = *(float *)(v21 + 28);
      v47 += 48;
      v49 = *(float *)(v47 - 52);
      v21 += 48;
      result += 48;
      *(float *)(v21 - 48) = (float)(v48 * v49) + *(float *)(v21 - 48);
      v50 = *(float *)(v47 - 48);
      *(float *)(v21 - 44) = (float)(v48 * v50) + *(float *)(v21 - 44);
      v51 = *(float *)(v47 - 44);
      v52 = v48 * v51;
      v53 = (float)(v48 * v48) + *(float *)(v21 - 36);
      *(float *)(v21 - 40) = v52 + *(float *)(v21 - 40);
      *(float *)(v21 - 36) = v53;
      *(float *)(result - 48) = -v49;
      *(float *)(result - 44) = -v50;
      *(float *)(result - 40) = -v51;
    }
    while ( v21 < *(uint32_t *)a5 );
  }
  if ( v74 != a5[3084] )
  {
    v55 = *((uint8_t *)a5 + 12361);
    v56 = *((uint8_t *)a5 + 12360);
    v94 = *((uint16_t *)a5 + 6176);
    *((uint8_t *)a5 + 12361) = v56;
    *((uint8_t *)a5 + 12360) = v55;
    v57 = (uint8_t)v55 + (uint8_t)v56;
    result = v55 & v56;
    v58 = -a5[3081];
    v59 = a5[3080];
    v60 = -a5[3082];
    *((uint8_t *)a5 + 12362) = __builtin_rotateleft8(*((uint8_t *)a5 + 12362), 4);
    v61 = (int)(uintptr_t)(a5) + 2 * v57 - 2;
    a5[3080] = -v59;
    a5[3081] = v58;
    a5[3082] = v60;
    *((uint16_t *)a5 + 6176) = *(uint16_t *)(v61 + 12352);
    *(uint16_t *)(v61 + 12352) = v94;
    if ( (uint8_t)result == 2 )
    {
      result = *((uint16_t *)a5 + 6177);
      *((uint16_t *)a5 + 6177) = *((uint16_t *)a5 + 6178);
      *((uint16_t *)a5 + 6178) = result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereCapsuleAgent_5d9101::staticGetPenetrations  (binary VA: 0x16bce40)
// Original: hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpSphereCapsuleAgent_5d9101::staticGetPenetrations(int *a1, int *a2, int a3, int a4)
{
  uint32_t v5[4];

  LOBYTE(v5[1]) = 0;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v5[2] = a4;
  return hkpSphereCapsuleAgent::staticGetPenetrations(a2, a1, a3, (int)(uintptr_t)(v5));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereCapsuleAgent_5d9101::getPenetrations  (binary VA: 0x16bcee0)
// Original: hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::getPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpSphereCapsuleAgent_5d9101::getPenetrations(int a1, int *a2, int *a3, int a4, int a5)
{
  uint32_t v6[4];

  LOBYTE(v6[1]) = 0;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v6[2] = a5;
  return hkpSphereCapsuleAgent::getPenetrations(a1, a3, a2, a4, (int)(uintptr_t)(v6));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereCapsuleAgent_5d9101::staticGetClosestPoints  (binary VA: 0x16bd530)
// Original: hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpSphereCapsuleAgent_5d9101::staticGetClosestPoints(uint32_t *a1, uint32_t *a2, int a3, int a4)
{
  int v5[4];

  v5[1] = 2139095022;
  v5[0] = (int)((uint32_t)(uintptr_t)&off_209B818);
  v5[2] = a4;
  return hkpSphereCapsuleAgent::staticGetClosestPoints(a2, a1, a3, v5);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpSphereCapsuleAgent_5d9101::getClosestPoints  (binary VA: 0x16be1c0)
// Original: hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>::getClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpSphereCapsuleAgent_5d9101::getClosestPoints(int a1, uint32_t *a2, uint32_t *a3, int a4, int a5)
{
  int v6[4];

  v6[1] = 2139095022;
  v6[0] = (int)((uint32_t)(uintptr_t)&off_209B818);
  v6[2] = a5;
  return hkpSphereCapsuleAgent::getClosestPoints(a1, a3, a2, a4, v6);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::staticGetPenetrations  (binary VA: 0x16c08d0)
// Original: hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::staticGetPenetrations(int a1, uint32_t *a2, int a3, int a4)
{
  uint32_t v5[4];

  LOBYTE(v5[1]) = 0;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v5[2] = a4;
  return hkpShapeCollectionAgent::staticGetPenetrations(a2, a1, a3, (int)(uintptr_t)(v5));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::staticLinearCast  (binary VA: 0x16c0c60)
// Original: hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::staticLinearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::staticLinearCast(int a1, uint32_t *a2, float *a3, int a4, int a5)
{
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  int v8;
  int v9;
  float v10; // xmm1_4
  typedef uint32_t _g4_t_v12[4];
  typedef uint32_t _g4_t_v13[12];
  typedef float _g4_t_v14[31];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v14)) > _g4_s2 ? (64u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);

  v5 = -a3[20];
  std::memcpy(v14, a3, 112);
  v14[20] = v5;
  v6 = -a3[21];
  v13[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v14[21] = v6;
  v7 = a3[22];
  *(float *)&v13[4] = a3[20];
  v8 = *((uint32_t *)a3 + 21);
  v14[22] = -v7;
  v13[5] = v8;
  v9 = *((uint32_t *)a3 + 22);
  v10 = -a3[23];
  *(float *)&v13[7] = a3[23];
  v14[23] = v10;
  v13[1] = 2139095022;
  v13[6] = v9;
  v13[8] = a4;
  if ( a5 == 0 )
    return hkpShapeCollectionAgent::staticLinearCast(a2, a1, (int)(uintptr_t)(v14), (int)(uintptr_t)(v13), 0);
  v12[1] = 2139095022;
  v12[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v12[2] = a5;
  return hkpShapeCollectionAgent::staticLinearCast(a2, a1, (int)(uintptr_t)(v14), (int)(uintptr_t)(v13), (int)(uintptr_t)(v12));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::staticGetClosestPoints  (binary VA: 0x16c10a0)
// Original: hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::staticGetClosestPoints(int a1, uint32_t *a2, int a3, int a4)
{
  uint32_t v5[4];

  v5[1] = 2139095022;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v5[2] = a4;
  return hkpShapeCollectionAgent::staticGetClosestPoints(a2, a1, a3, (int)(uintptr_t)(v5));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::getPenetrations  (binary VA: 0x16c8350)
// Original: hkpSymmetricAgentLinearCast<hkpMoppAgent>::getPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::getPenetrations(int a1, int a2, int a3, int a4, int a5)
{
  uint32_t v6[4];

  LOBYTE(v6[1]) = 0;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v6[2] = a5;
  return hkpBvTreeAgent::getPenetrations(a1, a3, a2, a4, v6);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::getClosestPoints  (binary VA: 0x16c83b0)
// Original: hkpSymmetricAgentLinearCast<hkpMoppAgent>::getClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::getClosestPoints(int a1, int a2, int a3, int a4, int a5)
{
  uint32_t v6[4];

  v6[1] = 2139095022;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v6[2] = a5;
  return hkpBvTreeAgent::getClosestPoints(a1, a3, a2, a4, v6);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpMoppAgent_c136fc::linearCast  (binary VA: 0x16c8410)
// Original: hkpSymmetricAgent<hkpMoppAgent>::linearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgent_hkpMoppAgent_c136fc::linearCast(int a1, int a2, int a3, int a4, int a5, int a6)
{
  float v6; // xmm1_4
  int v7;
  int v8;
  int v9;
  typedef float _g4_t_v11;
  typedef uint32_t _g4_t_v12[12];
  typedef uint32_t _g4_t_v13[12];
  typedef float _g4_t_v14[31];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v13)) > _g4_s2 ? (64u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (112u + sizeof(_g4_t_v14)) > _g4_s3 ? (112u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 112u);

  v6 = -*(float *)(a4 + 80);
  std::memcpy(v14, (const void *)a4, 112);
  v14[20] = v6;
  v7 = *(uint32_t *)(a4 + 80);
  v14[21] = -*(float *)(a4 + 84);
  v8 = *(uint32_t *)(a4 + 84);
  v9 = *(uint32_t *)(a4 + 88);
  LODWORD(v14[22]) = v9 ^ 0x80000000;
  v12[1] = 2139095022;
  v11 = *(float *)(a4 + 92);
  *(float *)&v12[7] = v11;
  v12[8] = a5;
  v12[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v14[23] = -v11;
  v12[4] = v7;
  v12[5] = v8;
  v12[6] = v9;
  if ( a6 == 0 )
    return hkpBvTreeAgent::linearCast(a1, a3, a2, v14, v12, 0);
  v13[0] = ((uint32_t)(uintptr_t)&off_209B830);
  *(float *)&v13[7] = v11;
  v13[1] = 2139095022;
  v13[8] = a6;
  v13[4] = v7;
  v13[5] = v8;
  v13[6] = v9;
  return hkpBvTreeAgent::linearCast(a1, a3, a2, v14, v12, v13);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::processCollision  (binary VA: 0x16c8560)
// Original: hkpSymmetricAgentLinearCast<hkpMoppAgent>::processCollision
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::processCollision(int a1, int a2, int a3, int a4, float *a5)
{
  unsigned int v5;
  int result;
  unsigned int v7;
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  int v14;
  int v15;
  int v16;
  float v17; // xmm2_4
  float v18; // xmm1_4
  int v19;
  float v20; // xmm3_4
  float v21;
  int16_t v22;

  v21 = a5[3084];
  v5 = *(uint32_t *)a5;
  result = hkpBvTreeAgent::processCollision(a1, a3, a2, a4, a5);
  if ( v5 < *(uint32_t *)a5 )
  {
    v7 = v5 + 20;
    result = v5 + 16;
    do
    {
      v8 = *(float *)(v5 + 28);
      v7 += 48;
      v9 = *(float *)(v7 - 52);
      v5 += 48;
      result += 48;
      *(float *)(v5 - 48) = (float)(v8 * v9) + *(float *)(v5 - 48);
      v10 = *(float *)(v7 - 48);
      *(float *)(v5 - 44) = (float)(v8 * v10) + *(float *)(v5 - 44);
      v11 = *(float *)(v7 - 44);
      v12 = v8 * v11;
      v13 = (float)(v8 * v8) + *(float *)(v5 - 36);
      *(float *)(v5 - 40) = v12 + *(float *)(v5 - 40);
      *(float *)(v5 - 36) = v13;
      *(float *)(result - 48) = -v9;
      *(float *)(result - 44) = -v10;
      *(float *)(result - 40) = -v11;
    }
    while ( v5 < *(uint32_t *)a5 );
  }
  if ( v21 != a5[3084] )
  {
    v14 = *((uint8_t *)a5 + 12360);
    v15 = *((uint8_t *)a5 + 12361);
    v22 = *((uint16_t *)a5 + 6176);
    *((uint8_t *)a5 + 12361) = v14;
    *((uint8_t *)a5 + 12360) = v15;
    v16 = (uint8_t)v15 + (uint8_t)v14 - 1;
    result = v15 & v14;
    v17 = -a5[3081];
    v18 = -a5[3082];
    v19 = (int)(uintptr_t)(a5) + 2 * v16;
    v20 = -a5[3080];
    *((uint8_t *)a5 + 12362) = __builtin_rotateleft8(*((uint8_t *)a5 + 12362), 4);
    a5[3080] = v20;
    a5[3081] = v17;
    a5[3082] = v18;
    *((uint16_t *)a5 + 6176) = *(uint16_t *)(v19 + 12352);
    *(uint16_t *)(v19 + 12352) = v22;
    if ( (uint8_t)result == 2 )
    {
      result = *((uint16_t *)a5 + 6177);
      *((uint16_t *)a5 + 6177) = *((uint16_t *)a5 + 6178);
      *((uint16_t *)a5 + 6178) = result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::updateShapeCollectionFilter  (binary VA: 0x16c8730)
// Original: hkpSymmetricAgentLinearCast<hkpMoppAgent>::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::updateShapeCollectionFilter(int a1, int a2, int a3, int a4, int a5)
{
  return (int)(uintptr_t)(hkpBvTreeAgent::updateShapeCollectionFilter(a1, a3, a2, a4, a5));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::staticGetPenetrations  (binary VA: 0x16c8780)
// Original: hkpSymmetricAgentLinearCast<hkpMoppAgent>::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::staticGetPenetrations(int a1, int a2, int a3, int a4)
{
  uint32_t v5[4];

  LOBYTE(v5[1]) = 0;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v5[2] = a4;
  return hkpBvTreeAgent::staticGetPenetrations(a2, a1, a3, v5);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::staticGetClosestPoints  (binary VA: 0x16c87e0)
// Original: hkpSymmetricAgentLinearCast<hkpMoppAgent>::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::staticGetClosestPoints(int a1, int a2, int a3, int a4)
{
  uint32_t v5[4];

  v5[1] = 2139095022;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v5[2] = a4;
  return hkpBvTreeAgent::staticGetClosestPoints(a2, a1, a3, v5);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpMoppAgent_c136fc::Destroy  (binary VA: 0x16c8840)
// Original: hkpSymmetricAgent<hkpMoppAgent>::~hkpSymmetricAgent
// ----------------------------------------------------------------------------
void hkpSymmetricAgent_hkpMoppAgent_c136fc::Destroy(hkpSymmetricAgent<hkpMoppAgent::Self> *self)
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
// Function: hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::staticLinearCast  (binary VA: 0x16c8b90)
// Original: hkpSymmetricAgentLinearCast<hkpMoppAgent>::staticLinearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::staticLinearCast(const hkTransformf::Self **a1, const hkTransformf::Self **a2, float *a3, int a4, float a5)
{
  float v5; // xmm1_4
  float v6; // xmm1_4
  int v7;
  float v8; // xmm1_4
  float v9; // xmm1_4
  typedef float _g4_t_v11;
  typedef float _g4_t_v12;
  typedef float _g4_t_v13;
  typedef float _g4_t_v14[4];
  typedef void (**_g4_t_v15)(hkpSymmetricAgentFlipCastCollector::Self *);
  typedef int _g4_t_v16;
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
  typedef float _g4_t_v27[31];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v14)) > _g4_s3 ? (16u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v15)) > _g4_s4 ? (32u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v16)) > _g4_s5 ? (36u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v17)) > _g4_s6 ? (40u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v18)) > _g4_s7 ? (44u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v19)) > _g4_s8 ? (48u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v20)) > _g4_s9 ? (52u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v21)) > _g4_s10 ? (56u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v22)) > _g4_s11 ? (60u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v23)) > _g4_s12 ? (64u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v24)) > _g4_s13 ? (68u + sizeof(_g4_t_v24)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v25)) > _g4_s14 ? (72u + sizeof(_g4_t_v25)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v26)) > _g4_s15 ? (76u + sizeof(_g4_t_v26)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v27)) > _g4_s16 ? (80u + sizeof(_g4_t_v27)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 56u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 68u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 72u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 76u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 80u);

  v5 = -a3[20];
  std::memcpy(v27, a3, 112);
  v16 = 2139095022;
  v27[20] = v5;
  v6 = a3[21];
  v15 = (void (**)(hkpSymmetricAgentFlipCastCollector::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209B830));
  v7 = *((uint32_t *)a3 + 20);
  v27[21] = -v6;
  v19 = v7;
  v8 = -a3[22];
  v20 = *((uint32_t *)a3 + 21);
  v27[22] = v8;
  v9 = a3[23];
  v21 = *((uint32_t *)a3 + 22);
  v22 = *((uint32_t *)a3 + 23);
  v27[23] = -v9;
  v23 = a4;
  if ( a5 == 0.0 )
    return hkpMoppAgent::staticLinearCast(
             a2,
             a1,
             v27,
             COERCE_FLOAT(&v15),
             0.0,
             v11,
             v12,
             v13,
             v14[0],
             v14[1],
             v14[2],
             SLODWORD(v14[3]),
             (int)(uintptr_t)(v15),
             v16,
             v17,
             v18,
             v19,
             v20,
             v21,
             v22,
             v23,
             v24,
             v25,
             v26,
             SLODWORD(v27[0]),
             SLODWORD(v27[1]),
             SLODWORD(v27[2]),
             v27[3],
             v27[4],
             v27[5],
             v27[6],
             v27[7],
             v27[8],
             v27[9],
             v27[10],
             v27[11],
             v27[12],
             v27[13],
             v27[14],
             (float *)LODWORD(v27[15]),
             (const hkTransformf::Self **)LODWORD(v27[16]),
             (const hkTransformf::Self **)LODWORD(v27[17]));
  else
    return hkpMoppAgent::staticLinearCast(
             a2,
             a1,
             v27,
             COERCE_FLOAT(&v15),
             COERCE_FLOAT(v14),
             v11,
             v12,
             v13,
             COERCE_FLOAT(((uint32_t)(uintptr_t)&off_209B818)),
             3.40282e38f,
             a5,
             SLODWORD(v14[3]),
             (int)(uintptr_t)(v15),
             v16,
             v17,
             v18,
             v19,
             v20,
             v21,
             v22,
             v23,
             v24,
             v25,
             v26,
             SLODWORD(v27[0]),
             SLODWORD(v27[1]),
             SLODWORD(v27[2]),
             v27[3],
             v27[4],
             v27[5],
             v27[6],
             v27[7],
             v27[8],
             v27[9],
             v27[10],
             v27[11],
             v27[12],
             v27[13],
             v27[14],
             (float *)LODWORD(v27[15]),
             (const hkTransformf::Self **)LODWORD(v27[16]),
             (const hkTransformf::Self **)LODWORD(v27[17]));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::Destroy  (binary VA: 0x16c8d20)
// Original: hkpSymmetricAgentLinearCast<hkpMoppAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::Destroy(hkpSymmetricAgentLinearCast<hkpMoppAgent::Self> *self)
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
// Function: hkpSymmetricAgent_hkpMoppAgent_c136fc::Destroy_ea16c8d90  (binary VA: 0x16c8d90)
// Original: hkpSymmetricAgent<hkpMoppAgent>::~hkpSymmetricAgent
// ----------------------------------------------------------------------------
void hkpSymmetricAgent_hkpMoppAgent_c136fc::Destroy_ea16c8d90(hkpSymmetricAgent<hkpMoppAgent::Self> *self)
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
// Function: hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::Destroy_ea16c8eb0  (binary VA: 0x16c8eb0)
// Original: hkpSymmetricAgentLinearCast<hkpMoppAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpMoppAgent_39c288::Destroy_ea16c8eb0(hkpSymmetricAgentLinearCast<hkpMoppAgent::Self> *self)
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
// Function: hkpSymmetricAgentLinearCast_hkpTransformAgent_52dea0::Destroy  (binary VA: 0x16cdc70)
// Original: hkpSymmetricAgentLinearCast<hkpTransformAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpTransformAgent_52dea0::Destroy(hkpSymmetricAgentLinearCast<hkpTransformAgent::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpTransformAgent_17024b::Destroy  (binary VA: 0x16cdc90)
// Original: hkpSymmetricAgent<hkpTransformAgent>::~hkpSymmetricAgent
// ----------------------------------------------------------------------------
void hkpSymmetricAgent_hkpTransformAgent_17024b::Destroy(hkpSymmetricAgent<hkpTransformAgent::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpTransformAgent_17024b::linearCast  (binary VA: 0x16cdd50)
// Original: hkpSymmetricAgent<hkpTransformAgent>::linearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgent_hkpTransformAgent_17024b::linearCast(int a1, int a2, const hkTransformf::Self **a3, int a4, int a5, int a6)
{
  float v6; // xmm1_4
  int v7;
  int v8;
  int v9;
  typedef float _g4_t_v11;
  typedef uint32_t _g4_t_v12[12];
  typedef uint32_t _g4_t_v13[12];
  typedef float _g4_t_v14[31];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v13)) > _g4_s2 ? (64u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (112u + sizeof(_g4_t_v14)) > _g4_s3 ? (112u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 112u);

  v6 = -*(float *)(a4 + 80);
  std::memcpy(v14, (const void *)a4, 112);
  v14[20] = v6;
  v7 = *(uint32_t *)(a4 + 80);
  v14[21] = -*(float *)(a4 + 84);
  v8 = *(uint32_t *)(a4 + 84);
  v9 = *(uint32_t *)(a4 + 88);
  LODWORD(v14[22]) = v9 ^ 0x80000000;
  v12[1] = 2139095022;
  v11 = *(float *)(a4 + 92);
  *(float *)&v12[7] = v11;
  v12[8] = a5;
  v12[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v14[23] = -v11;
  v12[4] = v7;
  v12[5] = v8;
  v12[6] = v9;
  if ( a6 == 0 )
    return hkpTransformAgent::linearCast(a1, a3, a2, (int)(uintptr_t)(v14), (int)(uintptr_t)(v12), 0);
  v13[0] = ((uint32_t)(uintptr_t)&off_209B830);
  *(float *)&v13[7] = v11;
  v13[1] = 2139095022;
  v13[8] = a6;
  v13[4] = v7;
  v13[5] = v8;
  v13[6] = v9;
  return hkpTransformAgent::linearCast(a1, a3, a2, (int)(uintptr_t)(v14), (int)(uintptr_t)(v12), (int)(uintptr_t)(v13));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpTransformAgent_52dea0::getClosestPoints  (binary VA: 0x16cdf30)
// Original: hkpSymmetricAgentLinearCast<hkpTransformAgent>::getClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpTransformAgent_52dea0::getClosestPoints(int a1, int a2, const hkTransformf::Self **a3, int a4, int a5)
{
  uint32_t v6[4];

  v6[1] = 2139095022;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v6[2] = a5;
  return hkpTransformAgent::getClosestPoints(a1, a3, a2, a4, (int)(uintptr_t)(v6));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpTransformAgent_52dea0::getPenetrations  (binary VA: 0x16ce020)
// Original: hkpSymmetricAgentLinearCast<hkpTransformAgent>::getPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpTransformAgent_52dea0::getPenetrations(int a1, int a2, const hkTransformf::Self **a3, int a4, int a5)
{
  uint32_t v6[4];

  LOBYTE(v6[1]) = 0;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v6[2] = a5;
  return hkpTransformAgent::getPenetrations(a1, a3, a2, a4, (int)(uintptr_t)(v6));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpTransformAgent_52dea0::updateShapeCollectionFilter  (binary VA: 0x16ce110)
// Original: hkpSymmetricAgentLinearCast<hkpTransformAgent>::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpTransformAgent_52dea0::updateShapeCollectionFilter(int a1, int a2, const hkTransformf::Self **a3, int a4, int a5)
{
  return hkpTransformAgent::updateShapeCollectionFilter(a1, a3, a2, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpTransformAgent_52dea0::staticLinearCast  (binary VA: 0x16ce220)
// Original: hkpSymmetricAgentLinearCast<hkpTransformAgent>::staticLinearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpTransformAgent_52dea0::staticLinearCast(int *a1, const hkTransformf::Self **a2, float *a3, int a4, int a5)
{
  float v5; // xmm1_4
  float v6; // xmm1_4
  int v7;
  float v8; // xmm1_4
  float v9; // xmm1_4
  typedef uint32_t _g4_t_v11[4];
  typedef uint32_t _g4_t_v12[12];
  typedef float _g4_t_v13[31];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v13)) > _g4_s2 ? (64u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);

  v5 = -a3[20];
  std::memcpy(v13, a3, 112);
  v12[1] = 2139095022;
  v13[20] = v5;
  v6 = a3[21];
  v12[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v7 = *((uint32_t *)a3 + 20);
  v13[21] = -v6;
  v12[4] = v7;
  v8 = -a3[22];
  *(float *)&v12[5] = a3[21];
  v13[22] = v8;
  v9 = a3[23];
  *(float *)&v12[6] = a3[22];
  *(float *)&v12[7] = a3[23];
  v13[23] = -v9;
  v12[8] = a4;
  if ( a5 == 0 )
    return hkpTransformAgent::staticLinearCast(a2, a1, v13, (int)(uintptr_t)(v12), 0);
  v11[1] = 2139095022;
  v11[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v11[2] = a5;
  return hkpTransformAgent::staticLinearCast(a2, a1, v13, (int)(uintptr_t)(v12), (int)(uintptr_t)(v11));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpTransformAgent_52dea0::staticGetClosestPoints  (binary VA: 0x16ce3f0)
// Original: hkpSymmetricAgentLinearCast<hkpTransformAgent>::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpTransformAgent_52dea0::staticGetClosestPoints(int *a1, const hkTransformf::Self **a2, uint32_t *a3, int a4)
{
  uint32_t v5[4];

  v5[1] = 2139095022;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v5[2] = a4;
  return hkpTransformAgent::staticGetClosestPoints(a2, a1, a3, (int)(uintptr_t)(v5));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpTransformAgent_52dea0::staticGetPenetrations  (binary VA: 0x16ce500)
// Original: hkpSymmetricAgentLinearCast<hkpTransformAgent>::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpTransformAgent_52dea0::staticGetPenetrations(int *a1, const hkTransformf::Self **a2, uint32_t *a3, int a4)
{
  uint32_t v5[4];

  LOBYTE(v5[1]) = 0;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v5[2] = a4;
  return hkpTransformAgent::staticGetPenetrations(a2, a1, a3, (int)(uintptr_t)(v5));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpTransformAgent_17024b::Destroy_ea16ce560  (binary VA: 0x16ce560)
// Original: hkpSymmetricAgent<hkpTransformAgent>::~hkpSymmetricAgent
// ----------------------------------------------------------------------------
void hkpSymmetricAgent_hkpTransformAgent_17024b::Destroy_ea16ce560(hkpSymmetricAgent<hkpTransformAgent::Self> *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpTransformAgent_52dea0::Destroy_ea16ce5c0  (binary VA: 0x16ce5c0)
// Original: hkpSymmetricAgentLinearCast<hkpTransformAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpTransformAgent_52dea0::Destroy_ea16ce5c0(hkpSymmetricAgentLinearCast<hkpTransformAgent::Self> *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpTransformAgent_52dea0::processCollision  (binary VA: 0x16ced30)
// Original: hkpSymmetricAgentLinearCast<hkpTransformAgent>::processCollision
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpTransformAgent_52dea0::processCollision(int a1, int a2, const hkTransformf::Self **a3, int *a4, int a5)
{
  unsigned int v5;
  int result;
  unsigned int v7;
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  int v14;
  int v15;
  int v16;
  float v17; // xmm2_4
  float v18; // xmm1_4
  int v19;
  float v20; // xmm3_4
  float v21;
  int16_t v22;

  v21 = *(float *)(a5 + 12336);
  v5 = *(uint32_t *)a5;
  result = hkpTransformAgent::processCollision(a1, a3, a2, a4, a5);
  if ( v5 < *(uint32_t *)a5 )
  {
    v7 = v5 + 20;
    result = v5 + 16;
    do
    {
      v8 = *(float *)(v5 + 28);
      v7 += 48;
      v9 = *(float *)(v7 - 52);
      v5 += 48;
      result += 48;
      *(float *)(v5 - 48) = (float)(v8 * v9) + *(float *)(v5 - 48);
      v10 = *(float *)(v7 - 48);
      *(float *)(v5 - 44) = (float)(v8 * v10) + *(float *)(v5 - 44);
      v11 = *(float *)(v7 - 44);
      v12 = v8 * v11;
      v13 = (float)(v8 * v8) + *(float *)(v5 - 36);
      *(float *)(v5 - 40) = v12 + *(float *)(v5 - 40);
      *(float *)(v5 - 36) = v13;
      *(float *)(result - 48) = -v9;
      *(float *)(result - 44) = -v10;
      *(float *)(result - 40) = -v11;
    }
    while ( v5 < *(uint32_t *)a5 );
  }
  if ( v21 != *(float *)(a5 + 12336) )
  {
    v14 = *(uint8_t *)(a5 + 12360);
    v15 = *(uint8_t *)(a5 + 12361);
    v22 = *(uint16_t *)(a5 + 12352);
    *(uint8_t *)(a5 + 12361) = v14;
    *(uint8_t *)(a5 + 12360) = v15;
    v16 = (uint8_t)v15 + (uint8_t)v14 - 1;
    result = v15 & v14;
    v17 = -*(float *)(a5 + 12324);
    v18 = -*(float *)(a5 + 12328);
    v19 = a5 + 2 * v16;
    v20 = -*(float *)(a5 + 12320);
    *(uint8_t *)(a5 + 12362) = __builtin_rotateleft8(*(uint8_t *)(a5 + 12362), 4);
    *(float *)(a5 + 12320) = v20;
    *(float *)(a5 + 12324) = v17;
    *(float *)(a5 + 12328) = v18;
    *(uint16_t *)(a5 + 12352) = *(uint16_t *)(v19 + 12352);
    *(uint16_t *)(v19 + 12352) = v22;
    if ( (uint8_t)result == 2 )
    {
      result = *(uint16_t *)(a5 + 12354);
      *(uint16_t *)(a5 + 12354) = *(uint16_t *)(a5 + 12356);
      *(uint16_t *)(a5 + 12356) = result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMultiSphereAgent_39928a::updateShapeCollectionFilter  (binary VA: 0x16cf020)
// Original: hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpMultiSphereAgent_39928a::updateShapeCollectionFilter()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpMultiSphereAgent_c244fc::Destroy  (binary VA: 0x16cf030)
// Original: hkpSymmetricAgent<hkpMultiSphereAgent>::~hkpSymmetricAgent
// ----------------------------------------------------------------------------
void hkpSymmetricAgent_hkpMultiSphereAgent_c244fc::Destroy(hkpSymmetricAgent<hkpMultiSphereAgent::Self> *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209AE68);
  v1 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      8 * v1);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 56;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMultiSphereAgent_39928a::Destroy  (binary VA: 0x16cf150)
// Original: hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpMultiSphereAgent_39928a::Destroy(hkpSymmetricAgentLinearCast<hkpMultiSphereAgent::Self> *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209AE68);
  v1 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      8 * v1);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpMultiSphereAgent_c244fc::Destroy_ea16cf1c0  (binary VA: 0x16cf1c0)
// Original: hkpSymmetricAgent<hkpMultiSphereAgent>::~hkpSymmetricAgent
// ----------------------------------------------------------------------------
void hkpSymmetricAgent_hkpMultiSphereAgent_c244fc::Destroy_ea16cf1c0(hkpSymmetricAgent<hkpMultiSphereAgent::Self> *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209AE68);
  v1 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      8 * v1);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMultiSphereAgent_39928a::Destroy_ea16cf2e0  (binary VA: 0x16cf2e0)
// Original: hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpMultiSphereAgent_39928a::Destroy_ea16cf2e0(hkpSymmetricAgentLinearCast<hkpMultiSphereAgent::Self> *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209AE68);
  v1 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      8 * v1);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 56;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMultiSphereAgent_39928a::staticGetClosestPoints  (binary VA: 0x16cf5a0)
// Original: hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::staticGetClosestPoints
// ----------------------------------------------------------------------------
uint32_t * hkpSymmetricAgentLinearCast_hkpMultiSphereAgent_39928a::staticGetClosestPoints(int a1, int *a2, uint32_t *a3, int a4)
{
  uint32_t v5[4];

  v5[1] = 2139095022;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v5[2] = a4;
  return hkpMultiSphereAgent::staticGetClosestPoints(a2, a1, a3, (int)(uintptr_t)(v5));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpMultiSphereAgent_c244fc::linearCast  (binary VA: 0x16cf7e0)
// Original: hkpSymmetricAgent<hkpMultiSphereAgent>::linearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgent_hkpMultiSphereAgent_c244fc::linearCast(int a1, int a2, int *a3, int a4, int a5, int a6)
{
  float v6; // xmm1_4
  int v7;
  int v8;
  int v9;
  typedef float _g4_t_v11;
  typedef uint32_t _g4_t_v12[12];
  typedef uint32_t _g4_t_v13[12];
  typedef float _g4_t_v14[31];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v13)) > _g4_s2 ? (64u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (112u + sizeof(_g4_t_v14)) > _g4_s3 ? (112u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 112u);

  v6 = -*(float *)(a4 + 80);
  std::memcpy(v14, (const void *)a4, 112);
  v14[20] = v6;
  v7 = *(uint32_t *)(a4 + 80);
  v14[21] = -*(float *)(a4 + 84);
  v8 = *(uint32_t *)(a4 + 84);
  v9 = *(uint32_t *)(a4 + 88);
  LODWORD(v14[22]) = v9 ^ 0x80000000;
  v12[1] = 2139095022;
  v11 = *(float *)(a4 + 92);
  *(float *)&v12[7] = v11;
  v12[8] = a5;
  v12[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v14[23] = -v11;
  v12[4] = v7;
  v12[5] = v8;
  v12[6] = v9;
  if ( a6 == 0 )
    return hkpMultiSphereAgent::linearCast(a1, a3, a2, (int)(uintptr_t)(v14), (int)(uintptr_t)(v12), 0);
  v13[0] = ((uint32_t)(uintptr_t)&off_209B830);
  *(float *)&v13[7] = v11;
  v13[1] = 2139095022;
  v13[8] = a6;
  v13[4] = v7;
  v13[5] = v8;
  v13[6] = v9;
  return hkpMultiSphereAgent::linearCast(a1, a3, a2, (int)(uintptr_t)(v14), (int)(uintptr_t)(v12), (int)(uintptr_t)(v13));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMultiSphereAgent_39928a::staticLinearCast  (binary VA: 0x16cfb40)
// Original: hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::staticLinearCast
// ----------------------------------------------------------------------------
uint32_t * hkpSymmetricAgentLinearCast_hkpMultiSphereAgent_39928a::staticLinearCast(int a1, int *a2, float *a3, int a4, int a5)
{
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  int v8;
  int v9;
  float v10; // xmm1_4
  typedef uint32_t _g4_t_v12[4];
  typedef uint32_t _g4_t_v13[12];
  typedef float _g4_t_v14[31];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v14)) > _g4_s2 ? (64u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);

  v5 = -a3[20];
  std::memcpy(v14, a3, 112);
  v14[20] = v5;
  v6 = -a3[21];
  v13[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v14[21] = v6;
  v7 = a3[22];
  *(float *)&v13[4] = a3[20];
  v8 = *((uint32_t *)a3 + 21);
  v14[22] = -v7;
  v13[5] = v8;
  v9 = *((uint32_t *)a3 + 22);
  v10 = -a3[23];
  *(float *)&v13[7] = a3[23];
  v13[8] = a4;
  v13[1] = 2139095022;
  v14[23] = v10;
  v13[6] = v9;
  if ( a5 == 0 )
    return hkpMultiSphereAgent::staticLinearCast(a2, a1, v14, (int)(uintptr_t)(v13), 0);
  v12[1] = 2139095022;
  v12[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v12[2] = a5;
  return hkpMultiSphereAgent::staticLinearCast(a2, a1, v14, (int)(uintptr_t)(v13), (int)(uintptr_t)(v12));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMultiSphereAgent_39928a::getClosestPoints  (binary VA: 0x16cfe30)
// Original: hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::getClosestPoints
// ----------------------------------------------------------------------------
uint32_t * hkpSymmetricAgentLinearCast_hkpMultiSphereAgent_39928a::getClosestPoints(int a1, int a2, int *a3, int a4, int a5)
{
  uint32_t v6[4];

  v6[1] = 2139095022;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v6[2] = a5;
  return hkpMultiSphereAgent::getClosestPoints(a1, a3, a2, a4, (int)(uintptr_t)(v6));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMultiSphereAgent_39928a::staticGetPenetrations  (binary VA: 0x16d00a0)
// Original: hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::staticGetPenetrations
// ----------------------------------------------------------------------------
uint32_t * hkpSymmetricAgentLinearCast_hkpMultiSphereAgent_39928a::staticGetPenetrations(int a1, int *a2, uint32_t *a3, int a4)
{
  uint32_t v5[4];

  LOBYTE(v5[1]) = 0;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v5[2] = a4;
  return hkpMultiSphereAgent::staticGetPenetrations(a2, a1, a3, (int)(uintptr_t)(v5));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMultiSphereAgent_39928a::getPenetrations  (binary VA: 0x16d02d0)
// Original: hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::getPenetrations
// ----------------------------------------------------------------------------
uint32_t * hkpSymmetricAgentLinearCast_hkpMultiSphereAgent_39928a::getPenetrations(int a1, int a2, int *a3, int a4, int a5)
{
  uint32_t v6[4];

  LOBYTE(v6[1]) = 0;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v6[2] = a5;
  return hkpMultiSphereAgent::getPenetrations(a1, a3, a2, a4, v6);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMultiSphereAgent_39928a::processCollision  (binary VA: 0x16d0590)
// Original: hkpSymmetricAgentLinearCast<hkpMultiSphereAgent>::processCollision
// ----------------------------------------------------------------------------
float * hkpSymmetricAgentLinearCast_hkpMultiSphereAgent_39928a::processCollision(int a1, int a2, int *a3, int a4, int a5)
{
  unsigned int v5;
  float *result;
  unsigned int v7;
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  int v14;
  int v15;
  int v16;
  float v17; // xmm2_4
  float v18; // xmm1_4
  int v19;
  float v20; // xmm3_4
  float v21;
  int16_t v22;

  v21 = *(float *)(a5 + 12336);
  v5 = *(uint32_t *)a5;
  result = (float *)hkpMultiSphereAgent::processCollision(a1, a3, a2, a4, a5);
  if ( v5 < *(uint32_t *)a5 )
  {
    v7 = v5 + 20;
    result = (float *)(v5 + 16);
    do
    {
      v8 = *(float *)(v5 + 28);
      v7 += 48;
      v9 = *(float *)(v7 - 52);
      v5 += 48;
      result += 12;
      *(float *)(v5 - 48) = (float)(v8 * v9) + *(float *)(v5 - 48);
      v10 = *(float *)(v7 - 48);
      *(float *)(v5 - 44) = (float)(v8 * v10) + *(float *)(v5 - 44);
      v11 = *(float *)(v7 - 44);
      v12 = v8 * v11;
      v13 = (float)(v8 * v8) + *(float *)(v5 - 36);
      *(float *)(v5 - 40) = v12 + *(float *)(v5 - 40);
      *(float *)(v5 - 36) = v13;
      *(result - 12) = -v9;
      *(result - 11) = -v10;
      *(result - 10) = -v11;
    }
    while ( v5 < *(uint32_t *)a5 );
  }
  if ( v21 != *(float *)(a5 + 12336) )
  {
    v14 = *(uint8_t *)(a5 + 12360);
    v15 = *(uint8_t *)(a5 + 12361);
    v22 = *(uint16_t *)(a5 + 12352);
    *(uint8_t *)(a5 + 12361) = v14;
    *(uint8_t *)(a5 + 12360) = v15;
    v16 = (uint8_t)v15 + (uint8_t)v14 - 1;
    result = (float *)(v15 & v14);
    v17 = -*(float *)(a5 + 12324);
    v18 = -*(float *)(a5 + 12328);
    v19 = a5 + 2 * v16;
    v20 = -*(float *)(a5 + 12320);
    *(uint8_t *)(a5 + 12362) = __builtin_rotateleft8(*(uint8_t *)(a5 + 12362), 4);
    *(float *)(a5 + 12320) = v20;
    *(float *)(a5 + 12324) = v17;
    *(float *)(a5 + 12328) = v18;
    *(uint16_t *)(a5 + 12352) = *(uint16_t *)(v19 + 12352);
    *(uint16_t *)(v19 + 12352) = v22;
    if ( (uint8_t)(uintptr_t)(result) == 2 )
    {
      result = (float *)*(uint16_t *)(a5 + 12354);
      *(uint16_t *)(a5 + 12354) = *(uint16_t *)(a5 + 12356);
      *(uint16_t *)(a5 + 12356) = (uint16_t)(uintptr_t)(result);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpListAgent_19578b::updateShapeCollectionFilter  (binary VA: 0x16d1540)
// Original: hkpSymmetricAgentLinearCast<hkpListAgent>::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpListAgent_19578b::updateShapeCollectionFilter(int a1, int *a2, int a3, int a4, int a5)
{
  return hkpListAgent::updateShapeCollectionFilter(a1, a3, a2, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpListAgent_ec9aa9::Destroy  (binary VA: 0x16d1590)
// Original: hkpSymmetricAgent<hkpListAgent>::~hkpSymmetricAgent
// ----------------------------------------------------------------------------
void hkpSymmetricAgent_hkpListAgent_ec9aa9::Destroy(hkpSymmetricAgent<hkpListAgent::Self> *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209B008);
  v1 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      4 * v1);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpListAgent_19578b::processCollision  (binary VA: 0x16d18a0)
// Original: hkpSymmetricAgentLinearCast<hkpListAgent>::processCollision
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * hkpSymmetricAgentLinearCast_hkpListAgent_19578b::processCollision(int a1, int *a2, int a3, int a4, float *a5)
{
  unsigned int v5;
  hkLifoAllocator::Self *result;
  unsigned int v7;
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  int v14;
  int v15;
  int v16;
  float v17; // xmm2_4
  float v18; // xmm1_4
  int v19;
  float v20; // xmm3_4
  float v21;
  int16_t v22;

  v21 = a5[3084];
  v5 = *(uint32_t *)a5;
  result = hkpListAgent::processCollision(a1, a3, a2, a4);
  if ( v5 < *(uint32_t *)a5 )
  {
    v7 = v5 + 20;
    result = (hkLifoAllocator::Self *)(v5 + 16);
    do
    {
      v8 = *(float *)(v5 + 28);
      v7 += 48;
      v9 = *(float *)(v7 - 52);
      v5 += 48;
      result = (hkLifoAllocator::Self *)((char *)result + 48);
      *(float *)(v5 - 48) = (float)(v8 * v9) + *(float *)(v5 - 48);
      v10 = *(float *)(v7 - 48);
      *(float *)(v5 - 44) = (float)(v8 * v10) + *(float *)(v5 - 44);
      v11 = *(float *)(v7 - 44);
      v12 = v8 * v11;
      v13 = (float)(v8 * v8) + *(float *)(v5 - 36);
      *(float *)(v5 - 40) = v12 + *(float *)(v5 - 40);
      *(float *)(v5 - 36) = v13;
      *((float *)result - 12) = -v9;
      *((float *)result - 11) = -v10;
      *((float *)result - 10) = -v11;
    }
    while ( v5 < *(uint32_t *)a5 );
  }
  if ( v21 != a5[3084] )
  {
    v14 = *((uint8_t *)a5 + 12360);
    v15 = *((uint8_t *)a5 + 12361);
    v22 = *((uint16_t *)a5 + 6176);
    *((uint8_t *)a5 + 12361) = v14;
    *((uint8_t *)a5 + 12360) = v15;
    v16 = (uint8_t)v15 + (uint8_t)v14 - 1;
    result = (hkLifoAllocator::Self *)(v15 & v14);
    v17 = -a5[3081];
    v18 = -a5[3082];
    v19 = (int)(uintptr_t)(a5) + 2 * v16;
    v20 = -a5[3080];
    *((uint8_t *)a5 + 12362) = __builtin_rotateleft8(*((uint8_t *)a5 + 12362), 4);
    a5[3080] = v20;
    a5[3081] = v17;
    a5[3082] = v18;
    *((uint16_t *)a5 + 6176) = *(uint16_t *)(v19 + 12352);
    *(uint16_t *)(v19 + 12352) = v22;
    if ( (uint8_t)(uintptr_t)(result) == 2 )
    {
      result = (hkLifoAllocator::Self *)*((uint16_t *)a5 + 6177);
      *((uint16_t *)a5 + 6177) = *((uint16_t *)a5 + 6178);
      *((uint16_t *)a5 + 6178) = (uint16_t)(uintptr_t)(result);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpListAgent_19578b::Destroy  (binary VA: 0x16d1ae0)
// Original: hkpSymmetricAgentLinearCast<hkpListAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpListAgent_19578b::Destroy(hkpSymmetricAgentLinearCast<hkpListAgent::Self> *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209B008);
  v1 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      4 * v1);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpListAgent_ec9aa9::Destroy_ea16d1b50  (binary VA: 0x16d1b50)
// Original: hkpSymmetricAgent<hkpListAgent>::~hkpSymmetricAgent
// ----------------------------------------------------------------------------
void hkpSymmetricAgent_hkpListAgent_ec9aa9::Destroy_ea16d1b50(hkpSymmetricAgent<hkpListAgent::Self> *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209B008);
  v1 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      4 * v1);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpListAgent_19578b::Destroy_ea16d1c70  (binary VA: 0x16d1c70)
// Original: hkpSymmetricAgentLinearCast<hkpListAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpListAgent_19578b::Destroy_ea16d1c70(hkpSymmetricAgentLinearCast<hkpListAgent::Self> *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209B008);
  v1 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      4 * v1);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpListAgent_19578b::getClosestPoints  (binary VA: 0x16d2020)
// Original: hkpSymmetricAgentLinearCast<hkpListAgent>::getClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpListAgent_19578b::getClosestPoints(int a1, uint32_t *a2, int a3, int a4, int a5)
{
  uint32_t v6[4];

  v6[1] = 2139095022;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v6[2] = a5;
  return hkpListAgent::getClosestPoints(a1, a3, a2, a4, (int)(uintptr_t)(v6));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpListAgent_ec9aa9::linearCast  (binary VA: 0x16d21f0)
// Original: hkpSymmetricAgent<hkpListAgent>::linearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgent_hkpListAgent_ec9aa9::linearCast(int a1, uint32_t *a2, int a3, int a4, int a5, int a6)
{
  float v6; // xmm1_4
  int v7;
  int v8;
  int v9;
  typedef float _g4_t_v11;
  typedef uint32_t _g4_t_v12[12];
  typedef uint32_t _g4_t_v13[12];
  typedef float _g4_t_v14[31];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v13)) > _g4_s2 ? (64u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (112u + sizeof(_g4_t_v14)) > _g4_s3 ? (112u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 112u);

  v6 = -*(float *)(a4 + 80);
  std::memcpy(v14, (const void *)a4, 112);
  v14[20] = v6;
  v7 = *(uint32_t *)(a4 + 80);
  v14[21] = -*(float *)(a4 + 84);
  v8 = *(uint32_t *)(a4 + 84);
  v9 = *(uint32_t *)(a4 + 88);
  LODWORD(v14[22]) = v9 ^ 0x80000000;
  v12[1] = 2139095022;
  v11 = *(float *)(a4 + 92);
  *(float *)&v12[7] = v11;
  v12[8] = a5;
  v12[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v14[23] = -v11;
  v12[4] = v7;
  v12[5] = v8;
  v12[6] = v9;
  if ( a6 == 0 )
    return hkpListAgent::linearCast(a1, a3, a2, v14, (int)(uintptr_t)(v12), 0);
  v13[0] = ((uint32_t)(uintptr_t)&off_209B830);
  *(float *)&v13[7] = v11;
  v13[1] = 2139095022;
  v13[8] = a6;
  v13[4] = v7;
  v13[5] = v8;
  v13[6] = v9;
  return hkpListAgent::linearCast(a1, a3, a2, v14, (int)(uintptr_t)(v12), (int)(uintptr_t)(v13));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpListAgent_19578b::getPenetrations  (binary VA: 0x16d23e0)
// Original: hkpSymmetricAgentLinearCast<hkpListAgent>::getPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpListAgent_19578b::getPenetrations(int a1, uint32_t *a2, int a3, int a4, int a5)
{
  uint32_t v6[4];

  LOBYTE(v6[1]) = 0;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v6[2] = a5;
  return hkpListAgent::getPenetrations(a1, a3, a2, a4, (int)(uintptr_t)(v6));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMultiSphereTriangleAg_a8843a::Destroy  (binary VA: 0x16db700)
// Original: hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpMultiSphereTriangleAg_a8843a::Destroy(hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMultiSphereTriangleAg_a8843a::updateShapeCollectionFilter  (binary VA: 0x16db720)
// Original: hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpMultiSphereTriangleAg_a8843a::updateShapeCollectionFilter()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMultiSphereTriangleAg_a8843a::staticLinearCast  (binary VA: 0x16db730)
// Original: hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::staticLinearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpMultiSphereTriangleAg_a8843a::staticLinearCast(int a1, int a2, float *a3, int a4, int a5)
{
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  int v8;
  int v9;
  float v10; // xmm1_4
  typedef uint32_t _g4_t_v12[4];
  typedef uint32_t _g4_t_v13[12];
  typedef float _g4_t_v14[31];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v14)) > _g4_s2 ? (64u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);

  v5 = -a3[20];
  std::memcpy(v14, a3, 112);
  v14[20] = v5;
  v6 = -a3[21];
  v13[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v14[21] = v6;
  v7 = a3[22];
  *(float *)&v13[4] = a3[20];
  v8 = *((uint32_t *)a3 + 21);
  v14[22] = -v7;
  v13[5] = v8;
  v9 = *((uint32_t *)a3 + 22);
  v10 = -a3[23];
  *(float *)&v13[7] = a3[23];
  v13[8] = a4;
  v13[1] = 2139095022;
  v14[23] = v10;
  v13[6] = v9;
  if ( a5 == 0 )
    return (int)(uintptr_t)((int)(uintptr_t)(hkpIterativeLinearCastAgent::staticLinearCast(a2, a1, (int)(uintptr_t)(v14), (int)(uintptr_t)(v13), 0)));
  v12[1] = 2139095022;
  v12[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v12[2] = a5;
  return (int)(uintptr_t)((int)(uintptr_t)(hkpIterativeLinearCastAgent::staticLinearCast(a2, a1, (int)(uintptr_t)(v14), (int)(uintptr_t)(v13), (int)(uintptr_t)(v12))));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMultiSphereTriangleAg_a8843a::Destroy_ea16db850  (binary VA: 0x16db850)
// Original: hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpMultiSphereTriangleAg_a8843a::Destroy_ea16db850(hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent::Self> *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 44;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMultiSphereTriangleAg_a8843a::processCollision  (binary VA: 0x16dba40)
// Original: hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::processCollision
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpMultiSphereTriangleAg_a8843a::processCollision(int a1, float **a2, int *a3, int a4, int a5)
{
  int *address;
  int v6;
  unsigned int v7;
  uint32_t *v8;
  uint64_t v9; // rax
  int v10;
  float *v11;
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float *v24;
  float v25; // xmm5_4
  float v26; // xmm6_4
  float v27; // xmm4_4
  int v28;
  float *v29;
  int v30;
  float v31; // xmm3_4
  float v32; // xmm2_4
  float *v33;
  float v34; // xmm1_4
  int v35;
  float *v36;
  int v37;
  float v38; // xmm1_4
  float v39; // xmm4_4
  float v40; // xmm3_4
  float v41; // xmm2_4
  float v42; // xmm1_4
  float v43; // xmm1_4
  uint16_t *v44;
  int v45;
  int v46;
  uint32_t *v47;
  uint64_t v48; // rax
  int result;
  unsigned int v50;
  unsigned int v51;
  float v52; // xmm0_4
  float v53; // xmm4_4
  float v54; // xmm5_4
  float v55; // xmm3_4
  float v56; // xmm1_4
  float v57; // xmm0_4
  uint16_t v58;
  float v59; // xmm2_4
  float v60; // xmm3_4
  float v61; // xmm1_4
  int v62;
  int v63;
  int v64;
  int v65;
  typedef unsigned int _g4_t_v66;
  typedef int *_g4_t_v67;
  typedef float _g4_t_v68;
  typedef int _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
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
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float *_g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef uint16_t *_g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97;
  typedef unsigned int _g4_t_v98;
  typedef float _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int16_t _g4_t_v101;
  typedef float _g4_t_v102[8];
  typedef float _g4_t_v103[12];
  typedef uint8_t _g4_t_v104[140];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (0u + sizeof(_g4_t_v66)) > _g4_s0 ? (0u + sizeof(_g4_t_v66)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v67)) > _g4_s1 ? (4u + sizeof(_g4_t_v67)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v68)) > _g4_s2 ? (8u + sizeof(_g4_t_v68)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v69)) > _g4_s3 ? (16u + sizeof(_g4_t_v69)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v70)) > _g4_s4 ? (20u + sizeof(_g4_t_v70)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v71)) > _g4_s5 ? (24u + sizeof(_g4_t_v71)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v72)) > _g4_s6 ? (24u + sizeof(_g4_t_v72)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v73)) > _g4_s7 ? (28u + sizeof(_g4_t_v73)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v74)) > _g4_s8 ? (28u + sizeof(_g4_t_v74)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v75)) > _g4_s9 ? (32u + sizeof(_g4_t_v75)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v76)) > _g4_s10 ? (32u + sizeof(_g4_t_v76)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v77)) > _g4_s11 ? (36u + sizeof(_g4_t_v77)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v78)) > _g4_s12 ? (36u + sizeof(_g4_t_v78)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v79)) > _g4_s13 ? (40u + sizeof(_g4_t_v79)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v80)) > _g4_s14 ? (40u + sizeof(_g4_t_v80)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v81)) > _g4_s15 ? (44u + sizeof(_g4_t_v81)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v82)) > _g4_s16 ? (44u + sizeof(_g4_t_v82)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v83)) > _g4_s17 ? (48u + sizeof(_g4_t_v83)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v84)) > _g4_s18 ? (48u + sizeof(_g4_t_v84)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v85)) > _g4_s19 ? (52u + sizeof(_g4_t_v85)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v86)) > _g4_s20 ? (52u + sizeof(_g4_t_v86)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v87)) > _g4_s21 ? (56u + sizeof(_g4_t_v87)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v88)) > _g4_s22 ? (56u + sizeof(_g4_t_v88)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v89)) > _g4_s23 ? (60u + sizeof(_g4_t_v89)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v90)) > _g4_s24 ? (60u + sizeof(_g4_t_v90)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v91)) > _g4_s25 ? (64u + sizeof(_g4_t_v91)) : _g4_s25,
    _g4_s27 = (68u + sizeof(_g4_t_v92)) > _g4_s26 ? (68u + sizeof(_g4_t_v92)) : _g4_s26,
    _g4_s28 = (68u + sizeof(_g4_t_v93)) > _g4_s27 ? (68u + sizeof(_g4_t_v93)) : _g4_s27,
    _g4_s29 = (68u + sizeof(_g4_t_v94)) > _g4_s28 ? (68u + sizeof(_g4_t_v94)) : _g4_s28,
    _g4_s30 = (72u + sizeof(_g4_t_v95)) > _g4_s29 ? (72u + sizeof(_g4_t_v95)) : _g4_s29,
    _g4_s31 = (72u + sizeof(_g4_t_v96)) > _g4_s30 ? (72u + sizeof(_g4_t_v96)) : _g4_s30,
    _g4_s32 = (72u + sizeof(_g4_t_v97)) > _g4_s31 ? (72u + sizeof(_g4_t_v97)) : _g4_s31,
    _g4_s33 = (76u + sizeof(_g4_t_v98)) > _g4_s32 ? (76u + sizeof(_g4_t_v98)) : _g4_s32,
    _g4_s34 = (76u + sizeof(_g4_t_v99)) > _g4_s33 ? (76u + sizeof(_g4_t_v99)) : _g4_s33,
    _g4_s35 = (76u + sizeof(_g4_t_v100)) > _g4_s34 ? (76u + sizeof(_g4_t_v100)) : _g4_s34,
    _g4_s36 = (76u + sizeof(_g4_t_v101)) > _g4_s35 ? (76u + sizeof(_g4_t_v101)) : _g4_s35,
    _g4_s37 = (80u + sizeof(_g4_t_v102)) > _g4_s36 ? (80u + sizeof(_g4_t_v102)) : _g4_s36,
    _g4_s38 = (112u + sizeof(_g4_t_v103)) > _g4_s37 ? (112u + sizeof(_g4_t_v103)) : _g4_s37,
    _g4_s39 = (160u + sizeof(_g4_t_v104)) > _g4_s38 ? (160u + sizeof(_g4_t_v104)) : _g4_s38
  };
  alignas(16) uint8_t _g4_sf[_g4_s39];
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 0u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 4u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 8u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 16u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 20u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 24u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 24u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 28u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 28u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 32u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 32u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 36u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 36u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 40u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 40u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 44u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 44u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 48u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 48u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 52u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 52u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 56u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 56u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 60u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 60u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 64u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 68u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 68u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 68u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 72u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 72u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 72u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 76u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 76u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 76u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 76u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 80u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 112u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 160u);

  v68 = *(float *)(a5 + 12336);
  v98 = *(uint32_t *)a5;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v67 = address;
  v7 = v98;
  v8 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(*address + 12) )
  {
    *v8 = (uint32_t)(uintptr_t)("TtMultiSphereTri");
    v9 = __rdtsc();
    v8[1] = v9;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
  }
  v10 = *a3;
  v91 = *a2;
  v11 = a2[2];
  v71 = v11[3];
  v89 = v11[6];
  v87 = v11[5];
  v92 = v11[7];
  v79 = v11[10];
  v81 = v11[11];
  v12 = *v11;
  v77 = v11[1];
  v99 = v11[2];
  v13 = v11[4];
  v14 = v11[8];
  v95 = v11[9];
  v83 = v11[12];
  v85 = v11[13];
  v75 = v11[14];
  v15 = (*a2)[16];
  v16 = (*a2)[17];
  v73 = v11[15];
  v17 = (*a2)[18];
  v103[8] = (float)((float)((float)(v15 * *v11) + (float)(v16 * v13)) + (float)(v14 * v17)) + v83;
  v103[9] = (float)((float)((float)(v77 * v15) + (float)(v87 * v16)) + (float)(v95 * v17)) + v85;
  v103[10] = (float)((float)((float)(v99 * v15) + (float)(v89 * v16)) + (float)(v79 * v17)) + v75;
  v103[11] = (float)((float)((float)(v15 * v71) + (float)(v16 * v92)) + (float)(v17 * v81)) + v73;
  v18 = v91[12];
  v19 = v91[13];
  v20 = v91[14];
  v103[4] = (float)((float)((float)(v18 * v12) + (float)(v19 * v13)) + (float)(v14 * v20)) + v83;
  v103[5] = (float)((float)((float)(v77 * v18) + (float)(v87 * v19)) + (float)(v95 * v20)) + v85;
  v103[6] = (float)((float)((float)(v99 * v18) + (float)(v89 * v19)) + (float)(v79 * v20)) + v75;
  v103[7] = (float)((float)((float)(v18 * v71) + (float)(v19 * v92)) + (float)(v20 * v81)) + v73;
  v21 = v91[8];
  v22 = v91[9];
  v23 = v91[10];
  v103[0] = (float)((float)((float)(v12 * v21) + (float)(v13 * v22)) + (float)(v14 * v23)) + v83;
  v103[1] = (float)((float)((float)(v77 * v21) + (float)(v87 * v22)) + (float)(v95 * v23)) + v85;
  v24 = (float *)a3[2];
  v103[2] = (float)((float)((float)(v99 * v21) + (float)(v89 * v22)) + (float)(v79 * v23)) + v75;
  v103[3] = (float)((float)((float)(v21 * v71) + (float)(v22 * v92)) + (float)(v23 * v81)) + v73;
  v82 = *v24;
  v80 = v24[1];
  v78 = v24[2];
  v76 = v24[3];
  v66 = v7;
  v74 = v24[4];
  v72 = v24[5];
  v70 = v24[6];
  v90 = v24[7];
  v84 = v24[8];
  v93 = v24[9];
  v96 = v24[10];
  v86 = v24[11];
  v88 = v24[12];
  v25 = v24[14];
  v26 = v24[13];
  v27 = v24[15];
  v100 = v10 + 32;
  v28 = *(uint32_t *)(v10 + 16) - 1;
  v69 = v28;
  v29 = (float *)(v10 + 32 + 16 * v28 + 4);
  v30 = -4 - (v10 + 32);
  do
  {
    v31 = *(v29 - 1);
    v32 = *v29;
    v33 = (float *)&v104[(uint32_t)(uintptr_t)(v29) + v30];
    v29 -= 4;
    v34 = v29[5];
    --v28;
    *v33 = (float)((float)((float)(v82 * v31) + (float)(v74 * v32)) + (float)(v84 * v34)) + v88;
    v33[1] = (float)((float)((float)(v80 * v31) + (float)(v72 * v32)) + (float)(v93 * v34)) + v26;
    v33[2] = (float)((float)((float)(v78 * v31) + (float)(v70 * v32)) + (float)(v96 * v34)) + v25;
    v33[3] = (float)((float)((float)(v31 * v76) + (float)(v32 * v90)) + (float)(v34 * v86)) + v27;
  }
  while ( v28 >= 0 );
  if ( v69 >= 0 )
  {
    v35 = a1 + 2 * v69 + 28;
    v36 = (float *)v104;
    do
    {
      v94 = (uint16_t *)v35;
      v97 = *(float *)(v100 + 12) + v91[4];
      hkpCollideTriangleUtil::closestPointTriangle(v36, v103, a1 + 12, v102, 0);
      v44 = v94;
      if ( (float)(*(float *)(a4 + 12) + v97) > v102[4] )
      {
        v37 = *(uint32_t *)a5;
        v38 = v91[4] - v102[4];
        v39 = (float)(v102[1] * v38) + v36[1];
        v40 = (float)(v102[2] * v38) + v36[2];
        v41 = (float)(v102[3] * v38) + v36[3];
        v42 = (float)(v38 * v102[0]) + *v36;
        *(float *)(v37 + 4) = v39;
        *(float *)(v37 + 8) = v40;
        *(float *)(v37 + 12) = v41;
        *(float *)v37 = v42;
        *(float *)(v37 + 16) = v102[0];
        v43 = v102[4];
        *(float *)(v37 + 20) = v102[1];
        *(float *)(v37 + 24) = v102[2];
        *(float *)(v37 + 28) = v43 - v97;
        if ( *v94 != 0xFFFF
          || (v58 = (*(int (**)(uint32_t, int *, float **, int, int, uint32_t, int))(**(uint32_t **)(a1 + 8) + 20))(
                      *(uint32_t *)(a1 + 8),
                      a3,
                      a2,
                      a4,
                      a5,
                      0,
                      v37),
              v44 = v94,
              *v94 = v58,
              v58 != 0xFFFF) )
        {
          *(uint32_t *)a5 += 48;
          *(uint32_t *)(v37 + 32) = *v44;
        }
      }
      else
      {
        v45 = *v94;
        if ( (uint16_t)v45 != 0xFFFF )
        {
          (*(void (**)(uint32_t, int, uint32_t))(**(uint32_t **)(a1 + 8) + 28))(
            *(uint32_t *)(a1 + 8),
            v45,
            *(uint32_t *)(a5 + 4));
          v44 = v94;
          *v94 = 0xFFFFu;
        }
      }
      v36 += 4;
      v100 += 16;
      v35 = (int)(uintptr_t)(v44 - 1);
    }
    while ( v35 != a1 + 26 );
    v7 = v66;
  }
  v46 = *v67;
  v47 = *(uint32_t **)(*v67 + 4);
  if ( (unsigned int)(uintptr_t)(v47) < *(uint32_t *)(*v67 + 12) )
  {
    *v47 = (uint32_t)(uintptr_t)("Et");
    v48 = __rdtsc();
    v47[1] = v48;
    *(uint32_t *)(v46 + 4) = (uint32_t)(uintptr_t)(v47 + 3);
  }
  result = a5;
  if ( v7 < *(uint32_t *)a5 )
  {
    v50 = v7 + 20;
    v51 = v7 + 16;
    do
    {
      v52 = *(float *)(v7 + 28);
      v50 += 48;
      v53 = *(float *)(v50 - 52);
      v7 += 48;
      v51 += 48;
      *(float *)(v7 - 48) = (float)(v52 * v53) + *(float *)(v7 - 48);
      v54 = *(float *)(v50 - 48);
      *(float *)(v7 - 44) = (float)(v52 * v54) + *(float *)(v7 - 44);
      v55 = *(float *)(v50 - 44);
      v56 = v52 * v55;
      v57 = (float)(v52 * v52) + *(float *)(v7 - 36);
      *(float *)(v7 - 40) = v56 + *(float *)(v7 - 40);
      *(float *)(v7 - 36) = v57;
      *(float *)(v51 - 48) = -v53;
      *(float *)(v51 - 44) = -v54;
      *(float *)(v51 - 40) = -v55;
    }
    while ( v7 < *(uint32_t *)a5 );
    result = a5;
  }
  if ( !__builtin_isunordered(v68, *(float *)(result + 12336)) )
  {
    if ( v68 == *(float *)(result + 12336) )
      return result;
    result = a5;
  }
  v59 = -*(float *)(result + 12324);
  v60 = *(float *)(result + 12320);
  v61 = -*(float *)(result + 12328);
  *(uint8_t *)(result + 12362) = __builtin_rotateleft8(*(uint8_t *)(result + 12362), 4);
  *(float *)(result + 12320) = -v60;
  *(float *)(result + 12324) = v59;
  *(float *)(result + 12328) = v61;
  v62 = *(uint8_t *)(result + 12360);
  v101 = *(uint16_t *)(a5 + 12352);
  v63 = *(uint8_t *)(a5 + 12361);
  *(uint8_t *)(a5 + 12361) = v62;
  *(uint8_t *)(a5 + 12360) = v63;
  v64 = (uint8_t)v62;
  result = v63 & v62;
  v65 = a5 + 2 * ((uint8_t)v63 + v64 - 1);
  *(uint16_t *)(a5 + 12352) = *(uint16_t *)(v65 + 12352);
  *(uint16_t *)(v65 + 12352) = v101;
  if ( (uint8_t)result == 2 )
  {
    result = *(uint16_t *)(a5 + 12354);
    *(uint16_t *)(a5 + 12354) = *(uint16_t *)(a5 + 12356);
    *(uint16_t *)(a5 + 12356) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMultiSphereTriangleAg_a8843a::getPenetrations  (binary VA: 0x16dc8d0)
// Original: hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::getPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpMultiSphereTriangleAg_a8843a::getPenetrations(int a1, float **a2, int *a3, int a4, int a5)
{
  uint32_t v6[4];

  LOBYTE(v6[1]) = 0;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v6[2] = a5;
  return hkpMultiSphereTriangleAgent::getPenetrations(a1, a3, a2, a4, (int)(uintptr_t)(v6));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMultiSphereTriangleAg_a8843a::staticGetPenetrations  (binary VA: 0x16dcef0)
// Original: hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpMultiSphereTriangleAg_a8843a::staticGetPenetrations(float **a1, int *a2, int a3, int a4)
{
  uint32_t v5[4];

  LOBYTE(v5[1]) = 0;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v5[2] = a4;
  return hkpMultiSphereTriangleAgent::staticGetPenetrations(a2, a1, a3, (int)(uintptr_t)(v5));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMultiSphereTriangleAg_a8843a::staticGetClosestPoints  (binary VA: 0x16dd6c0)
// Original: hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpMultiSphereTriangleAg_a8843a::staticGetClosestPoints(float **a1, int *a2, int a3, int a4)
{
  uint32_t v5[4];

  v5[1] = 2139095022;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v5[2] = a4;
  return hkpMultiSphereTriangleAgent::staticGetClosestPoints(a2, a1, a3, (int)(uintptr_t)(v5));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpMultiSphereTriangleAg_a8843a::getClosestPoints  (binary VA: 0x16dde70)
// Original: hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>::getClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpMultiSphereTriangleAg_a8843a::getClosestPoints(int a1, float **a2, int *a3, int a4, int a5)
{
  uint32_t v6[4];

  v6[1] = 2139095022;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v6[2] = a5;
  return hkpMultiSphereTriangleAgent::getClosestPoints(a1, a3, a2, a4, (int)(uintptr_t)(v6));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpConvexListAgent_4b3445::Destroy  (binary VA: 0x16e9cb0)
// Original: hkpSymmetricAgentLinearCast<hkpConvexListAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpConvexListAgent_4b3445::Destroy(hkpSymmetricAgentLinearCast<hkpConvexListAgent::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpConvexListAgent_e84c7a::Destroy  (binary VA: 0x16e9cd0)
// Original: hkpSymmetricAgent<hkpConvexListAgent>::~hkpSymmetricAgent
// ----------------------------------------------------------------------------
void hkpSymmetricAgent_hkpConvexListAgent_e84c7a::Destroy(hkpSymmetricAgent<hkpConvexListAgent::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpConvexListAgent_4b3445::updateShapeCollectionFilter  (binary VA: 0x16e9f70)
// Original: hkpSymmetricAgentLinearCast<hkpConvexListAgent>::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpConvexListAgent_4b3445::updateShapeCollectionFilter(int a1, uint32_t *a2, int a3, int a4, int a5)
{
  hkpConvexListAgent::updateShapeCollectionFilter(a1, a3, a2, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpConvexListAgent_e84c7a::Destroy_ea16ea020  (binary VA: 0x16ea020)
// Original: hkpSymmetricAgent<hkpConvexListAgent>::~hkpSymmetricAgent
// ----------------------------------------------------------------------------
void hkpSymmetricAgent_hkpConvexListAgent_e84c7a::Destroy_ea16ea020(hkpSymmetricAgent<hkpConvexListAgent::Self> *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 128;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpConvexListAgent_4b3445::Destroy_ea16ea080  (binary VA: 0x16ea080)
// Original: hkpSymmetricAgentLinearCast<hkpConvexListAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpConvexListAgent_4b3445::Destroy_ea16ea080(hkpSymmetricAgentLinearCast<hkpConvexListAgent::Self> *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 128;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpConvexListAgent_4b3445::staticLinearCast  (binary VA: 0x16ea2e0)
// Original: hkpSymmetricAgentLinearCast<hkpConvexListAgent>::staticLinearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpConvexListAgent_4b3445::staticLinearCast(uint32_t *a1, int a2, float *a3, int a4, int a5)
{
  float v5; // xmm1_4
  float v6; // xmm1_4
  int v7;
  float v8; // xmm1_4
  float v9; // xmm1_4
  typedef uint32_t _g4_t_v11[4];
  typedef uint32_t _g4_t_v12[12];
  typedef float _g4_t_v13[31];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v13)) > _g4_s2 ? (64u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);

  v5 = -a3[20];
  std::memcpy(v13, a3, 112);
  v12[1] = 2139095022;
  v13[20] = v5;
  v6 = a3[21];
  v12[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v7 = *((uint32_t *)a3 + 20);
  v13[21] = -v6;
  v12[4] = v7;
  v8 = -a3[22];
  *(float *)&v12[5] = a3[21];
  v13[22] = v8;
  v9 = a3[23];
  *(float *)&v12[6] = a3[22];
  *(float *)&v12[7] = a3[23];
  v13[23] = -v9;
  v12[8] = a4;
  if ( a5 == 0 )
    return hkpConvexListAgent::staticLinearCast(a2, a1, (int)(uintptr_t)(v13), (int)(uintptr_t)(v12), 0);
  v11[1] = 2139095022;
  v11[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v11[2] = a5;
  return hkpConvexListAgent::staticLinearCast(a2, a1, (int)(uintptr_t)(v13), (int)(uintptr_t)(v12), (int)(uintptr_t)(v11));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpConvexListAgent_e84c7a::linearCast  (binary VA: 0x16ea450)
// Original: hkpSymmetricAgent<hkpConvexListAgent>::linearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgent_hkpConvexListAgent_e84c7a::linearCast(int a1, uint32_t *a2, int a3, int a4, int a5, int a6)
{
  float v6; // xmm1_4
  int v7;
  int v8;
  int v9;
  typedef float _g4_t_v11;
  typedef uint32_t _g4_t_v12[12];
  typedef uint32_t _g4_t_v13[12];
  typedef float _g4_t_v14[31];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v13)) > _g4_s2 ? (64u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (112u + sizeof(_g4_t_v14)) > _g4_s3 ? (112u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 112u);

  v6 = -*(float *)(a4 + 80);
  std::memcpy(v14, (const void *)a4, 112);
  v14[20] = v6;
  v7 = *(uint32_t *)(a4 + 80);
  v14[21] = -*(float *)(a4 + 84);
  v8 = *(uint32_t *)(a4 + 84);
  v9 = *(uint32_t *)(a4 + 88);
  LODWORD(v14[22]) = v9 ^ 0x80000000;
  v12[1] = 2139095022;
  v11 = *(float *)(a4 + 92);
  *(float *)&v12[7] = v11;
  v12[8] = a5;
  v12[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v14[23] = -v11;
  v12[4] = v7;
  v12[5] = v8;
  v12[6] = v9;
  if ( a6 == 0 )
    return hkpConvexListAgent::linearCast(a1, a3, a2, (int)(uintptr_t)(v14), (int)(uintptr_t)(v12), 0);
  v13[0] = ((uint32_t)(uintptr_t)&off_209B830);
  *(float *)&v13[7] = v11;
  v13[1] = 2139095022;
  v13[8] = a6;
  v13[4] = v7;
  v13[5] = v8;
  v13[6] = v9;
  return hkpConvexListAgent::linearCast(a1, a3, a2, (int)(uintptr_t)(v14), (int)(uintptr_t)(v12), (int)(uintptr_t)(v13));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpConvexListAgent_4b3445::staticGetPenetrations  (binary VA: 0x16ea770)
// Original: hkpSymmetricAgentLinearCast<hkpConvexListAgent>::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpConvexListAgent_4b3445::staticGetPenetrations(uint32_t *a1, int a2, int a3, int a4)
{
  uint32_t v5[4];

  LOBYTE(v5[1]) = 0;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v5[2] = a4;
  return hkpConvexListAgent::staticGetPenetrations(a2, a1, a3, (int)(uintptr_t)(v5));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpConvexListAgent_4b3445::getPenetrations  (binary VA: 0x16ea810)
// Original: hkpSymmetricAgentLinearCast<hkpConvexListAgent>::getPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpConvexListAgent_4b3445::getPenetrations(int a1, uint32_t *a2, int a3, int a4, int a5)
{
  uint32_t v6[4];

  LOBYTE(v6[1]) = 0;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v6[2] = a5;
  return hkpConvexListAgent::getPenetrations(a1, a3, a2, a4, (int)(uintptr_t)(v6));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpConvexListAgent_4b3445::staticGetClosestPoints  (binary VA: 0x16eaad0)
// Original: hkpSymmetricAgentLinearCast<hkpConvexListAgent>::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpConvexListAgent_4b3445::staticGetClosestPoints(uint32_t *a1, int a2, int a3, int a4)
{
  uint32_t v5[4];

  v5[1] = 2139095022;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v5[2] = a4;
  return hkpConvexListAgent::staticGetClosestPoints(a2, a1, a3, v5);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpConvexListAgent_4b3445::getClosestPoints  (binary VA: 0x16eab70)
// Original: hkpSymmetricAgentLinearCast<hkpConvexListAgent>::getClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpConvexListAgent_4b3445::getClosestPoints(int a1, uint32_t *a2, int a3, int a4, int a5)
{
  uint32_t v6[4];

  v6[1] = 2139095022;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v6[2] = a5;
  return hkpConvexListAgent::getClosestPoints(a1, a3, a2, a4, v6);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpConvexListAgent_4b3445::processCollision  (binary VA: 0x16ec170)
// Original: hkpSymmetricAgentLinearCast<hkpConvexListAgent>::processCollision
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpConvexListAgent_4b3445::processCollision(hkpConvexListAgent::Self *a1, unsigned int a2, unsigned int a3, int a4, int a5)
{
  unsigned int v5;
  int result;
  unsigned int v7;
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  int v14;
  int v15;
  int v16;
  float v17; // xmm2_4
  float v18; // xmm1_4
  int v19;
  float v20; // xmm3_4
  float v21;
  int16_t v22;

  v21 = *(float *)(a5 + 12336);
  v5 = *(uint32_t *)a5;
  result = hkpConvexListAgent::processCollision(a1, __SPAIR64__(a2, a3), a4, a5);
  if ( v5 < *(uint32_t *)a5 )
  {
    v7 = v5 + 20;
    result = v5 + 16;
    do
    {
      v8 = *(float *)(v5 + 28);
      v7 += 48;
      v9 = *(float *)(v7 - 52);
      v5 += 48;
      result += 48;
      *(float *)(v5 - 48) = (float)(v8 * v9) + *(float *)(v5 - 48);
      v10 = *(float *)(v7 - 48);
      *(float *)(v5 - 44) = (float)(v8 * v10) + *(float *)(v5 - 44);
      v11 = *(float *)(v7 - 44);
      v12 = v8 * v11;
      v13 = (float)(v8 * v8) + *(float *)(v5 - 36);
      *(float *)(v5 - 40) = v12 + *(float *)(v5 - 40);
      *(float *)(v5 - 36) = v13;
      *(float *)(result - 48) = -v9;
      *(float *)(result - 44) = -v10;
      *(float *)(result - 40) = -v11;
    }
    while ( v5 < *(uint32_t *)a5 );
  }
  if ( v21 != *(float *)(a5 + 12336) )
  {
    v14 = *(uint8_t *)(a5 + 12360);
    v15 = *(uint8_t *)(a5 + 12361);
    v22 = *(uint16_t *)(a5 + 12352);
    *(uint8_t *)(a5 + 12361) = v14;
    *(uint8_t *)(a5 + 12360) = v15;
    v16 = (uint8_t)v15 + (uint8_t)v14 - 1;
    result = v15 & v14;
    v17 = -*(float *)(a5 + 12324);
    v18 = -*(float *)(a5 + 12328);
    v19 = a5 + 2 * v16;
    v20 = -*(float *)(a5 + 12320);
    *(uint8_t *)(a5 + 12362) = __builtin_rotateleft8(*(uint8_t *)(a5 + 12362), 4);
    *(float *)(a5 + 12320) = v20;
    *(float *)(a5 + 12324) = v17;
    *(float *)(a5 + 12328) = v18;
    *(uint16_t *)(a5 + 12352) = *(uint16_t *)(v19 + 12352);
    *(uint16_t *)(v19 + 12352) = v22;
    if ( (uint8_t)result == 2 )
    {
      result = *(uint16_t *)(a5 + 12354);
      *(uint16_t *)(a5 + 12354) = *(uint16_t *)(a5 + 12356);
      *(uint16_t *)(a5 + 12356) = result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentFlipCollector::addCdPoint  (binary VA: 0x16ec340)
// Original: hkpSymmetricAgentFlipCollector::addCdPoint
// ----------------------------------------------------------------------------
int hkpSymmetricAgentFlipCollector::addCdPoint(int a1, float *a2)
{
  float v2; // xmm0_4
  float v3; // xmm7_4
  float v4; // xmm3_4
  float v5; // xmm1_4
  float v6;
  float v7; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm5_4
  int result;
  typedef float _g4_t_v12;
  typedef float _g4_t_v13[18];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  v2 = a2[7];
  v3 = a2[5];
  v12 = a2[4];
  v4 = a2[6];
  v5 = -v4;
  v6 = a2[12];
  v13[12] = a2[13];
  v13[13] = v6;
  v7 = (float)(v2 * v3) + a2[1];
  v8 = (float)(v4 * v2) + a2[2];
  v9 = (float)(v2 * v2) + a2[3];
  v10 = (float)(v12 * v2) + *a2;
  v13[7] = v2;
  v13[1] = v7;
  v13[2] = v8;
  v13[3] = v9;
  v13[0] = v10;
  v13[4] = -v12;
  v13[5] = -v3;
  v13[6] = v5;
  v13[8] = -v12;
  v13[9] = -v3;
  v13[10] = v5;
  v13[11] = v2;
  (*(void (**)(uint32_t, float *))(**(uint32_t **)(a1 + 8) + 8))(*(uint32_t *)(a1 + 8), v13);
  result = *(uint32_t *)(a1 + 8);
  *(uint32_t *)(a1 + 4) = *(uint32_t *)(result + 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentFlipCastCollector::addCdPoint  (binary VA: 0x16ec440)
// Original: hkpSymmetricAgentFlipCastCollector::addCdPoint
// ----------------------------------------------------------------------------
int hkpSymmetricAgentFlipCastCollector::addCdPoint(int a1, int a2)
{
  float v2; // xmm3_4
  float v3; // xmm0_4
  float v4; // xmm2_4
  float v5; // xmm1_4
  int v6;
  float v7; // xmm7_4
  float v8; // xmm6_4
  float v9; // xmm5_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  int v14;
  int result;
  uint32_t v16[18];

  v2 = -*(float *)(a2 + 16);
  v3 = *(float *)(a2 + 28);
  v4 = -*(float *)(a2 + 20);
  v5 = -*(float *)(a2 + 24);
  v6 = *(uint32_t *)(a2 + 48);
  v7 = *(float *)(a1 + 20);
  v8 = *(float *)(a1 + 24);
  v16[12] = *(uint32_t *)(a2 + 52);
  v9 = *(float *)(a1 + 28);
  v16[13] = v6;
  v10 = (float)(v7 * v3) + *(float *)(a2 + 4);
  v11 = (float)(v8 * v3) + *(float *)(a2 + 8);
  v12 = (float)(v9 * v3) + *(float *)(a2 + 12);
  v13 = (float)(*(float *)(a1 + 16) * v3) + *(float *)a2;
  *(float *)&v16[7] = v3;
  *(float *)&v16[1] = v10;
  *(float *)&v16[2] = v11;
  *(float *)&v16[3] = v12;
  *(float *)v16 = v13;
  *(float *)&v16[4] = v2;
  *(float *)&v16[5] = v4;
  *(float *)&v16[6] = v5;
  *(float *)&v16[8] = v2;
  *(float *)&v16[9] = v4;
  *(float *)&v16[10] = v5;
  v14 = *(uint32_t *)(a1 + 32);
  *(float *)&v16[11] = v3;
  G4_VCALL<void>(v14, 8, v16);
  result = *(uint32_t *)(a1 + 32);
  *(uint32_t *)(a1 + 4) = *(uint32_t *)(result + 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentFlipBodyCollector::addCdBodyPair  (binary VA: 0x16ec540)
// Original: hkpSymmetricAgentFlipBodyCollector::addCdBodyPair
// ----------------------------------------------------------------------------
int hkpSymmetricAgentFlipBodyCollector::addCdBodyPair(hkpSymmetricAgentFlipBodyCollector::Self *self, const hkpCdBody::Self *a2, const hkpCdBody::Self *a3)
{
  int result;

  (*(void (**)(uint32_t, const hkpCdBody::Self *, const hkpCdBody::Self *))(**((uint32_t **)self + 2) + 8))(
    *((uint32_t *)self + 2),
    a3,
    a2);
  result = *(uint8_t *)(*((uint32_t *)self + 2) + 4);
  *((uint8_t *)self + 4) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentFlipBodyCollector::Destroy  (binary VA: 0x16ec580)
// Original: hkpSymmetricAgentFlipBodyCollector::~hkpSymmetricAgentFlipBodyCollector
// ----------------------------------------------------------------------------
void hkpSymmetricAgentFlipBodyCollector::Destroy(hkpSymmetricAgentFlipBodyCollector::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2055268);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentFlipCastCollector::Destroy  (binary VA: 0x16ec5a0)
// Original: hkpSymmetricAgentFlipCastCollector::~hkpSymmetricAgentFlipCastCollector
// ----------------------------------------------------------------------------
void hkpSymmetricAgentFlipCastCollector::Destroy(hkpSymmetricAgentFlipCastCollector::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2055250);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentFlipCollector::Destroy  (binary VA: 0x16ec5c0)
// Original: hkpSymmetricAgentFlipCollector::~hkpSymmetricAgentFlipCollector
// ----------------------------------------------------------------------------
void hkpSymmetricAgentFlipCollector::Destroy(hkpSymmetricAgentFlipCollector::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2055250);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentFlipCollector::Destroy_ea16ec5e0  (binary VA: 0x16ec5e0)
// Original: hkpSymmetricAgentFlipCollector::~hkpSymmetricAgentFlipCollector
// ----------------------------------------------------------------------------
void hkpSymmetricAgentFlipCollector::Destroy_ea16ec5e0(hkpSymmetricAgentFlipCollector::Self *self)
{
  int address;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2055250);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkpSymmetricAgentFlipCollector::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    8);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentFlipCastCollector::Destroy_ea16ec630  (binary VA: 0x16ec630)
// Original: hkpSymmetricAgentFlipCastCollector::~hkpSymmetricAgentFlipCastCollector
// ----------------------------------------------------------------------------
void hkpSymmetricAgentFlipCastCollector::Destroy_ea16ec630(hkpSymmetricAgentFlipCastCollector::Self *self)
{
  int address;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2055250);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkpSymmetricAgentFlipCastCollector::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    48);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentFlipBodyCollector::Destroy_ea16ec680  (binary VA: 0x16ec680)
// Original: hkpSymmetricAgentFlipBodyCollector::~hkpSymmetricAgentFlipBodyCollector
// ----------------------------------------------------------------------------
void hkpSymmetricAgentFlipBodyCollector::Destroy_ea16ec680(hkpSymmetricAgentFlipBodyCollector::Self *self)
{
  int address;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2055268);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkpSymmetricAgentFlipBodyCollector::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    12);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpStaticCompoundAgent_5a0393::staticGetPenetrations  (binary VA: 0x16ee5c0)
// Original: hkpSymmetricAgentLinearCast<hkpStaticCompoundAgent>::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpStaticCompoundAgent_5a0393::staticGetPenetrations(int a1, int a2, int a3, int a4)
{
  uint32_t v5[4];

  LOBYTE(v5[1]) = 0;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v5[2] = a4;
  return hkpBvTreeAgent::staticGetPenetrations(a2, a1, a3, v5);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpStaticCompoundAgent_5a0393::staticGetClosestPoints  (binary VA: 0x16ee620)
// Original: hkpSymmetricAgentLinearCast<hkpStaticCompoundAgent>::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpStaticCompoundAgent_5a0393::staticGetClosestPoints(int a1, int a2, int a3, int a4)
{
  uint32_t v5[4];

  v5[1] = 2139095022;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v5[2] = a4;
  return hkpBvTreeAgent::staticGetClosestPoints(a2, a1, a3, v5);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpStaticCompoundAgent_5a0393::staticLinearCast  (binary VA: 0x16ee890)
// Original: hkpSymmetricAgentLinearCast<hkpStaticCompoundAgent>::staticLinearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpStaticCompoundAgent_5a0393::staticLinearCast(float a1, float a2, float *a3, int a4, int a5)
{
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  int v8;
  int v9;
  float v10; // xmm1_4
  typedef uint32_t _g4_t_v12[4];
  typedef uint32_t _g4_t_v13[12];
  typedef float _g4_t_v14[31];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v14)) > _g4_s2 ? (64u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);

  v5 = -a3[20];
  std::memcpy(v14, a3, 112);
  v14[20] = v5;
  v6 = -a3[21];
  v13[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v14[21] = v6;
  v7 = a3[22];
  *(float *)&v13[4] = a3[20];
  v8 = *((uint32_t *)a3 + 21);
  v14[22] = -v7;
  v13[5] = v8;
  v9 = *((uint32_t *)a3 + 22);
  v10 = -a3[23];
  *(float *)&v13[7] = a3[23];
  v13[8] = a4;
  v13[1] = 2139095022;
  v14[23] = v10;
  v13[6] = v9;
  if ( a5 == 0 )
    return hkpStaticCompoundAgent::staticLinearCast(a2, a1, COERCE_FLOAT(v14), COERCE_FLOAT(v13), 0.0);
  v12[1] = 2139095022;
  v12[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v12[2] = a5;
  return hkpStaticCompoundAgent::staticLinearCast(a2, a1, COERCE_FLOAT(v14), COERCE_FLOAT(v13), COERCE_FLOAT(v12));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpCapsuleTriangleAgent_38b2ef::Destroy  (binary VA: 0x16efb20)
// Original: hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpCapsuleTriangleAgent_38b2ef::Destroy(hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpCapsuleTriangleAgent_38b2ef::updateShapeCollectionFilter  (binary VA: 0x16efb40)
// Original: hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpCapsuleTriangleAgent_38b2ef::updateShapeCollectionFilter()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpCapsuleTriangleAgent_38b2ef::staticLinearCast  (binary VA: 0x16efb50)
// Original: hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::staticLinearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpCapsuleTriangleAgent_38b2ef::staticLinearCast(int a1, int a2, float *a3, int a4, int a5)
{
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  int v8;
  int v9;
  float v10; // xmm1_4
  typedef uint32_t _g4_t_v12[4];
  typedef uint32_t _g4_t_v13[12];
  typedef float _g4_t_v14[31];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v14)) > _g4_s2 ? (64u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);

  v5 = -a3[20];
  std::memcpy(v14, a3, 112);
  v14[20] = v5;
  v6 = -a3[21];
  v13[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v14[21] = v6;
  v7 = a3[22];
  *(float *)&v13[4] = a3[20];
  v8 = *((uint32_t *)a3 + 21);
  v14[22] = -v7;
  v13[5] = v8;
  v9 = *((uint32_t *)a3 + 22);
  v10 = -a3[23];
  *(float *)&v13[7] = a3[23];
  v13[8] = a4;
  v13[1] = 2139095022;
  v14[23] = v10;
  v13[6] = v9;
  if ( a5 == 0 )
    return (int)(uintptr_t)((int)(uintptr_t)(hkpIterativeLinearCastAgent::staticLinearCast(a2, a1, (int)(uintptr_t)(v14), (int)(uintptr_t)(v13), 0)));
  v12[1] = 2139095022;
  v12[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v12[2] = a5;
  return (int)(uintptr_t)((int)(uintptr_t)(hkpIterativeLinearCastAgent::staticLinearCast(a2, a1, (int)(uintptr_t)(v14), (int)(uintptr_t)(v13), (int)(uintptr_t)(v12))));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpCapsuleTriangleAgent_38b2ef::Destroy_ea16efc70  (binary VA: 0x16efc70)
// Original: hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpCapsuleTriangleAgent_38b2ef::Destroy_ea16efc70(hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent::Self> *self)
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
// Function: hkpSymmetricAgentLinearCast_hkpCapsuleTriangleAgent_38b2ef::processCollision  (binary VA: 0x16efe50)
// Original: hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::processCollision
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpCapsuleTriangleAgent_38b2ef::processCollision(int a1, int *a2, int *a3, int a4, int a5)
{
  float *v5;
  int *address;
  int v7;
  uint32_t *v8;
  uint64_t v9; // rax
  int v10;
  int v11;
  float *v12;
  float v13; // xmm5_4
  float v14; // xmm6_4
  float v15; // xmm4_4
  float *v16;
  float *v17;
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float *v21;
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm6_4
  float v25; // xmm5_4
  float v26; // xmm1_4
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm1_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm0_4
  float *v34;
  float v35; // xmm0_4
  int v36;
  float *v37;
  float *v38;
  int v39;
  uint32_t *v40;
  uint64_t v41; // rax
  int result;
  float *v43;
  float *v44;
  float v45; // xmm0_4
  float v46; // xmm4_4
  float v47; // xmm5_4
  float v48; // xmm3_4
  float v49; // xmm1_4
  float v50; // xmm0_4
  int v51;
  float v52; // xmm2_4
  float v53; // xmm3_4
  float v54; // xmm1_4
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int16_t v60;
  typedef int _g4_t_v61;
  typedef float *_g4_t_v62;
  typedef int *_g4_t_v63;
  typedef float _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float *_g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef uint32_t *_g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef char *_g4_t_v95;
  typedef int16_t _g4_t_v96;
  typedef char _g4_t_v97;
  typedef int _g4_t_v98[6];
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
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
  typedef float _g4_t_v115[4];
  typedef uint8_t _g4_t_v116[80];
  typedef int _g4_t_v117;
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (12u + sizeof(_g4_t_v61)) > _g4_s0 ? (12u + sizeof(_g4_t_v61)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v62)) > _g4_s1 ? (40u + sizeof(_g4_t_v62)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v63)) > _g4_s2 ? (48u + sizeof(_g4_t_v63)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v64)) > _g4_s3 ? (52u + sizeof(_g4_t_v64)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v65)) > _g4_s4 ? (60u + sizeof(_g4_t_v65)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v66)) > _g4_s5 ? (64u + sizeof(_g4_t_v66)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v67)) > _g4_s6 ? (68u + sizeof(_g4_t_v67)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v68)) > _g4_s7 ? (68u + sizeof(_g4_t_v68)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v69)) > _g4_s8 ? (72u + sizeof(_g4_t_v69)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v70)) > _g4_s9 ? (72u + sizeof(_g4_t_v70)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v71)) > _g4_s10 ? (76u + sizeof(_g4_t_v71)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v72)) > _g4_s11 ? (76u + sizeof(_g4_t_v72)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v73)) > _g4_s12 ? (80u + sizeof(_g4_t_v73)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v74)) > _g4_s13 ? (80u + sizeof(_g4_t_v74)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v75)) > _g4_s14 ? (84u + sizeof(_g4_t_v75)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v76)) > _g4_s15 ? (84u + sizeof(_g4_t_v76)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v77)) > _g4_s16 ? (88u + sizeof(_g4_t_v77)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v78)) > _g4_s17 ? (88u + sizeof(_g4_t_v78)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v79)) > _g4_s18 ? (92u + sizeof(_g4_t_v79)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v80)) > _g4_s19 ? (92u + sizeof(_g4_t_v80)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v81)) > _g4_s20 ? (96u + sizeof(_g4_t_v81)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v82)) > _g4_s21 ? (96u + sizeof(_g4_t_v82)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v83)) > _g4_s22 ? (96u + sizeof(_g4_t_v83)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v84)) > _g4_s23 ? (100u + sizeof(_g4_t_v84)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v85)) > _g4_s24 ? (100u + sizeof(_g4_t_v85)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v86)) > _g4_s25 ? (104u + sizeof(_g4_t_v86)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v87)) > _g4_s26 ? (104u + sizeof(_g4_t_v87)) : _g4_s26,
    _g4_s28 = (108u + sizeof(_g4_t_v88)) > _g4_s27 ? (108u + sizeof(_g4_t_v88)) : _g4_s27,
    _g4_s29 = (108u + sizeof(_g4_t_v89)) > _g4_s28 ? (108u + sizeof(_g4_t_v89)) : _g4_s28,
    _g4_s30 = (108u + sizeof(_g4_t_v90)) > _g4_s29 ? (108u + sizeof(_g4_t_v90)) : _g4_s29,
    _g4_s31 = (112u + sizeof(_g4_t_v91)) > _g4_s30 ? (112u + sizeof(_g4_t_v91)) : _g4_s30,
    _g4_s32 = (112u + sizeof(_g4_t_v92)) > _g4_s31 ? (112u + sizeof(_g4_t_v92)) : _g4_s31,
    _g4_s33 = (116u + sizeof(_g4_t_v93)) > _g4_s32 ? (116u + sizeof(_g4_t_v93)) : _g4_s32,
    _g4_s34 = (116u + sizeof(_g4_t_v94)) > _g4_s33 ? (116u + sizeof(_g4_t_v94)) : _g4_s33,
    _g4_s35 = (116u + sizeof(_g4_t_v95)) > _g4_s34 ? (116u + sizeof(_g4_t_v95)) : _g4_s34,
    _g4_s36 = (116u + sizeof(_g4_t_v96)) > _g4_s35 ? (116u + sizeof(_g4_t_v96)) : _g4_s35,
    _g4_s37 = (120u + sizeof(_g4_t_v97)) > _g4_s36 ? (120u + sizeof(_g4_t_v97)) : _g4_s36,
    _g4_s38 = (128u + sizeof(_g4_t_v98)) > _g4_s37 ? (128u + sizeof(_g4_t_v98)) : _g4_s37,
    _g4_s39 = (152u + sizeof(_g4_t_v99)) > _g4_s38 ? (152u + sizeof(_g4_t_v99)) : _g4_s38,
    _g4_s40 = (156u + sizeof(_g4_t_v100)) > _g4_s39 ? (156u + sizeof(_g4_t_v100)) : _g4_s39,
    _g4_s41 = (160u + sizeof(_g4_t_v101)) > _g4_s40 ? (160u + sizeof(_g4_t_v101)) : _g4_s40,
    _g4_s42 = (164u + sizeof(_g4_t_v102)) > _g4_s41 ? (164u + sizeof(_g4_t_v102)) : _g4_s41,
    _g4_s43 = (184u + sizeof(_g4_t_v103)) > _g4_s42 ? (184u + sizeof(_g4_t_v103)) : _g4_s42,
    _g4_s44 = (188u + sizeof(_g4_t_v104)) > _g4_s43 ? (188u + sizeof(_g4_t_v104)) : _g4_s43,
    _g4_s45 = (192u + sizeof(_g4_t_v105)) > _g4_s44 ? (192u + sizeof(_g4_t_v105)) : _g4_s44,
    _g4_s46 = (196u + sizeof(_g4_t_v106)) > _g4_s45 ? (196u + sizeof(_g4_t_v106)) : _g4_s45,
    _g4_s47 = (200u + sizeof(_g4_t_v107)) > _g4_s46 ? (200u + sizeof(_g4_t_v107)) : _g4_s46,
    _g4_s48 = (204u + sizeof(_g4_t_v108)) > _g4_s47 ? (204u + sizeof(_g4_t_v108)) : _g4_s47,
    _g4_s49 = (208u + sizeof(_g4_t_v109)) > _g4_s48 ? (208u + sizeof(_g4_t_v109)) : _g4_s48,
    _g4_s50 = (212u + sizeof(_g4_t_v110)) > _g4_s49 ? (212u + sizeof(_g4_t_v110)) : _g4_s49,
    _g4_s51 = (216u + sizeof(_g4_t_v111)) > _g4_s50 ? (216u + sizeof(_g4_t_v111)) : _g4_s50,
    _g4_s52 = (220u + sizeof(_g4_t_v112)) > _g4_s51 ? (220u + sizeof(_g4_t_v112)) : _g4_s51,
    _g4_s53 = (224u + sizeof(_g4_t_v113)) > _g4_s52 ? (224u + sizeof(_g4_t_v113)) : _g4_s52,
    _g4_s54 = (228u + sizeof(_g4_t_v114)) > _g4_s53 ? (228u + sizeof(_g4_t_v114)) : _g4_s53,
    _g4_s55 = (232u + sizeof(_g4_t_v115)) > _g4_s54 ? (232u + sizeof(_g4_t_v115)) : _g4_s54,
    _g4_s56 = (248u + sizeof(_g4_t_v116)) > _g4_s55 ? (248u + sizeof(_g4_t_v116)) : _g4_s55,
    _g4_s57 = (328u + sizeof(_g4_t_v117)) > _g4_s56 ? (328u + sizeof(_g4_t_v117)) : _g4_s56
  };
  alignas(16) uint8_t _g4_sf[_g4_s57];
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 12u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 40u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 52u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 60u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 64u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 68u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 68u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 72u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 72u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 76u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 76u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 80u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 80u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 84u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 84u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 88u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 88u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 92u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 92u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 96u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 96u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 96u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 100u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 100u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 104u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 104u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 108u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 108u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 108u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 112u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 112u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 116u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 116u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 116u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 116u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 120u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 128u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 152u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 156u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 160u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 164u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 184u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 188u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 192u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 196u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 200u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 204u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 208u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 212u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 216u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 220u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 224u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 228u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 232u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 248u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 328u);

  v64 = *(float *)(a5 + 12336);
  v5 = *(float **)a5;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v7 = *address;
  v63 = address;
  v8 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(*address + 12) )
  {
    *v8 = (uint32_t)(uintptr_t)("TtCapsuleTri");
    v9 = __rdtsc();
    v8[1] = v9;
    *(uint32_t *)(v7 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
  }
  v10 = 1;
  v65 = *a2;
  v66 = *a3;
  v11 = *a3 + 32;
  v12 = (float *)a3[2];
  v67 = *v12;
  v69 = v12[1];
  v91 = v12[2];
  v93 = v12[3];
  v86 = v12[4];
  v88 = v12[5];
  v84 = v12[6];
  v81 = v12[7];
  v79 = v12[8];
  v77 = v12[9];
  v75 = v12[10];
  v73 = v12[11];
  v62 = v5;
  v71 = v12[12];
  v13 = v12[14];
  v14 = v12[13];
  v15 = v12[15];
  while ( 1 )
  {
    v16 = (float *)(v11 + 16 * v10);
    v17 = (float *)(&v99 + 4 * v10);
    v18 = *v16;
    v19 = v16[1];
    v20 = v16[2];
    *v17 = (float)((float)((float)(v67 * *v16) + (float)(v86 * v19)) + (float)(v79 * v20)) + v71;
    v17[1] = (float)((float)((float)(v69 * v18) + (float)(v88 * v19)) + (float)(v77 * v20)) + v14;
    v17[2] = (float)((float)((float)(v91 * v18) + (float)(v84 * v19)) + (float)(v75 * v20)) + v13;
    v17[3] = (float)((float)((float)(v18 * v93) + (float)(v19 * v81)) + (float)(v20 * v73)) + v15;
    if ( v10 != 1 )
      break;
    LOBYTE(v10) = 0;
  }
  v21 = (float *)a2[2];
  v68 = v21[3];
  v87 = v21[6];
  v89 = v21[5];
  v78 = v21[11];
  v80 = v21[10];
  v74 = v21[13];
  v22 = *(float *)(v65 + 68);
  v70 = v21[14];
  v23 = *(float *)(v65 + 64);
  v24 = *v21;
  v76 = v21[12];
  v94 = v21[1];
  v25 = v21[4];
  v85 = v21[7];
  v82 = v21[9];
  v72 = v21[15];
  v26 = *(float *)(v65 + 72);
  v92 = v21[2];
  v27 = v21[8];
  v111 = (float)((float)((float)(v23 * *v21) + (float)(v22 * v25)) + (float)(v26 * v27)) + v76;
  v112 = (float)((float)((float)(v94 * v23) + (float)(v89 * v22)) + (float)(v82 * v26)) + v74;
  v113 = (float)((float)((float)(v92 * v23) + (float)(v87 * v22)) + (float)(v80 * v26)) + v70;
  v114 = (float)((float)((float)(v23 * v68) + (float)(v22 * v85)) + (float)(v26 * v78)) + v72;
  v28 = *(float *)(v65 + 48);
  v29 = *(float *)(v65 + 52);
  v30 = *(float *)(v65 + 56);
  v107 = (float)((float)((float)(v28 * v24) + (float)(v29 * v25)) + (float)(v30 * v27)) + v76;
  v108 = (float)((float)((float)(v94 * v28) + (float)(v89 * v29)) + (float)(v82 * v30)) + v74;
  v109 = (float)((float)((float)(v92 * v28) + (float)(v87 * v29)) + (float)(v80 * v30)) + v70;
  v110 = (float)((float)((float)(v28 * v68) + (float)(v29 * v85)) + (float)(v30 * v78)) + v72;
  v31 = *(float *)(v65 + 32);
  v32 = *(float *)(v65 + 36);
  v33 = *(float *)(v65 + 40);
  v34 = v115;
  *(float *)&v103 = (float)((float)((float)(v24 * v31) + (float)(v25 * v32)) + (float)(v27 * v33)) + v76;
  v104 = (float)((float)((float)(v94 * v31) + (float)(v89 * v32)) + (float)(v82 * v33)) + v74;
  v61 = *(uint32_t *)(a4 + 12);
  v105 = (float)((float)((float)(v92 * v31) + (float)(v87 * v32)) + (float)(v80 * v33)) + v70;
  v106 = (float)((float)((float)(v31 * v68) + (float)(v32 * v85)) + (float)(v33 * v78)) + v72;
  hkCollideCapsuleUtilCapsVsTri(
    (hkLineSegmentUtil::Self *)&v99,
    *(hkVector4f::Self **)(v66 + 16),
    (int)(uintptr_t)(&v103),
    *(hkVector4f::Self **)(v65 + 16),
    a1 + 20,
    v61,
    1,
    COERCE_FLOAT(v115),
    (int)(uintptr_t)(v98));
  v83 = v5;
  v35 = *(float *)(a4 + 12);
  v95 = (char *)v98 + 2;
  v90 = (uint32_t *)(v116);
  v36 = a1;
  do
  {
    if ( v35 > v34[7] )
    {
      v97 = *(v95 - 2);
      if ( v97 == 0 )
        goto LABEL_9;
      v99 = *((uint32_t *)v34 + 4);
      v100 = *((uint32_t *)v34 + 5);
      v101 = *((uint32_t *)v34 + 6);
      v102 = *((uint32_t *)v34 + 7);
      v103 = *(int *)v34;
      v104 = v34[1];
      v105 = v34[2];
      v106 = v34[3];
      v59 = G4_VCALL<int>(v65, 60, v95, &v97, &v103, a2[2], v66, a3[2], &v99);
      *v34 = *(float *)&v103;
      v34[1] = v104;
      v34[2] = v105;
      v34[3] = v106;
      if ( v59 != 0 )
      {
        if ( v59 == 1 )
        {
          *v90 = v99;
          v90[1] = v100;
          v90[2] = v101;
        }
LABEL_9:
        if ( *(uint16_t *)(v36 + 12) != 0xFFFF
          || (v60 = (*(int (**)(uint32_t, int *, int *, int, int, uint32_t, float *))(**(uint32_t **)(a1 + 8) + 20))(
                      *(uint32_t *)(a1 + 8),
                      a3,
                      a2,
                      a4,
                      a5,
                      0,
                      v34),
              *(uint16_t *)(v36 + 12) = v60,
              v60 != -1) )
        {
          v37 = *(float **)a5;
          *(uint32_t *)a5 += 48;
          *v37 = *v34;
          v37[1] = v34[1];
          v37[2] = v34[2];
          v37[3] = v34[3];
          v37[4] = *(float *)&v116[(char *)v34 - (char *)v115];
          v37[5] = *(float *)&v116[(char *)v34 - (char *)v115 + 4];
          v37[6] = *(float *)&v116[(char *)v34 - (char *)v115 + 8];
          v37[7] = *(float *)&v116[(char *)v34 - (char *)v115 + 12];
          *((uint32_t *)v37 + 8) = *(uint16_t *)(v36 + 12);
        }
        goto LABEL_11;
      }
    }
    v51 = *(uint16_t *)(v36 + 12);
    if ( (uint16_t)v51 != 0xFFFF )
    {
      (*(void (**)(uint32_t, int, uint32_t))(**(uint32_t **)(a1 + 8) + 28))(
        *(uint32_t *)(a1 + 8),
        v51,
        *(uint32_t *)(a5 + 4));
      *(uint16_t *)(v36 + 12) = -1;
    }
LABEL_11:
    v36 += 2;
    v34 += 8;
    v90 += 8;
    v95 += 8;
  }
  while ( v34 != (float *)&v117 );
  v38 = v62;
  v39 = *v63;
  v40 = *(uint32_t **)(*v63 + 4);
  if ( (unsigned int)(uintptr_t)(v40) < *(uint32_t *)(*v63 + 12) )
  {
    *v40 = (uint32_t)(uintptr_t)("Et");
    v41 = __rdtsc();
    v40[1] = v41;
    *(uint32_t *)(v39 + 4) = (uint32_t)(uintptr_t)(v40 + 3);
  }
  result = a5;
  if ( *(uint32_t *)a5 > (unsigned int)(uintptr_t)(v83) )
  {
    v43 = v83 + 5;
    v44 = v83 + 4;
    do
    {
      v45 = v38[7];
      v43 += 12;
      v46 = *(v43 - 13);
      v38 += 12;
      v44 += 12;
      *(v38 - 12) = (float)(v45 * v46) + *(v38 - 12);
      v47 = *(v43 - 12);
      *(v38 - 11) = (float)(v45 * v47) + *(v38 - 11);
      v48 = *(v43 - 11);
      v49 = v45 * v48;
      v50 = (float)(v45 * v45) + *(v38 - 9);
      *(v38 - 10) = v49 + *(v38 - 10);
      *(v38 - 9) = v50;
      *(v44 - 12) = -v46;
      *(v44 - 11) = -v47;
      *(v44 - 10) = -v48;
    }
    while ( (unsigned int)(uintptr_t)(v38) < *(uint32_t *)a5 );
    result = a5;
  }
  if ( !__builtin_isunordered(v64, *(float *)(result + 12336)) )
  {
    if ( v64 == *(float *)(result + 12336) )
      return result;
    result = a5;
  }
  v52 = -*(float *)(result + 12324);
  v53 = *(float *)(result + 12320);
  v54 = -*(float *)(result + 12328);
  *(uint8_t *)(result + 12362) = __builtin_rotateleft8(*(uint8_t *)(result + 12362), 4);
  *(float *)(result + 12320) = -v53;
  *(float *)(result + 12324) = v52;
  *(float *)(result + 12328) = v54;
  v55 = *(uint8_t *)(result + 12360);
  v56 = *(uint8_t *)(a5 + 12361);
  *(uint8_t *)(a5 + 12361) = v55;
  v57 = (uint8_t)v55;
  *(uint8_t *)(a5 + 12360) = v56;
  result = v56 & v55;
  v96 = *(uint16_t *)(a5 + 12352);
  v58 = a5 + 2 * ((uint8_t)v56 + v57 - 1);
  *(uint16_t *)(a5 + 12352) = *(uint16_t *)(v58 + 12352);
  *(uint16_t *)(v58 + 12352) = v96;
  if ( (uint8_t)result == 2 )
  {
    result = *(uint16_t *)(a5 + 12354);
    *(uint16_t *)(a5 + 12354) = *(uint16_t *)(a5 + 12356);
    *(uint16_t *)(a5 + 12356) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpCapsuleTriangleAgent_38b2ef::getPenetrations  (binary VA: 0x16f0e10)
// Original: hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::getPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpCapsuleTriangleAgent_38b2ef::getPenetrations(int a1, int *a2, int *a3, int a4, int a5)
{
  uint32_t v6[4];

  LOBYTE(v6[1]) = 0;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v6[2] = a5;
  return hkpCapsuleTriangleAgent::getPenetrations(a1, a3, a2, a4, (int)(uintptr_t)(v6));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpCapsuleTriangleAgent_38b2ef::staticGetPenetrations  (binary VA: 0x16f1460)
// Original: hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpCapsuleTriangleAgent_38b2ef::staticGetPenetrations(int *a1, int *a2, int a3, int a4)
{
  uint32_t v5[4];

  LOBYTE(v5[1]) = 0;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v5[2] = a4;
  return hkpCapsuleTriangleAgent::staticGetPenetrations(a2, a1, a3, (int)(uintptr_t)(v5));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpCapsuleTriangleAgent_38b2ef::getClosestPoints  (binary VA: 0x16f1d70)
// Original: hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::getClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpCapsuleTriangleAgent_38b2ef::getClosestPoints(int a1, int *a2, int *a3, float *a4, int a5)
{
  uint32_t v6[4];

  v6[1] = 2139095022;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v6[2] = a5;
  return hkpCapsuleTriangleAgent::getClosestPoints(a1, a3, a2, a4, (int)(uintptr_t)(v6));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpCapsuleTriangleAgent_38b2ef::staticGetClosestPoints  (binary VA: 0x16f2ee0)
// Original: hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpCapsuleTriangleAgent_38b2ef::staticGetClosestPoints(int *a1, int *a2, float *a3, int a4)
{
  uint32_t v5[4];

  v5[1] = 2139095022;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v5[2] = a4;
  return hkpCapsuleTriangleAgent::staticGetClosestPoints(a2, a1, a3, (int)(uintptr_t)(v5));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvAgent_f657f2::Destroy  (binary VA: 0x1705610)
// Original: hkpSymmetricAgentLinearCast<hkpBvAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpBvAgent_f657f2::Destroy(hkpSymmetricAgentLinearCast<hkpBvAgent::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpBvAgent_054336::Destroy  (binary VA: 0x1705630)
// Original: hkpSymmetricAgent<hkpBvAgent>::~hkpSymmetricAgent
// ----------------------------------------------------------------------------
void hkpSymmetricAgent_hkpBvAgent_054336::Destroy(hkpSymmetricAgent<hkpBvAgent::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvAgent_f657f2::updateShapeCollectionFilter  (binary VA: 0x1705650)
// Original: hkpSymmetricAgentLinearCast<hkpBvAgent>::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvAgent_f657f2::updateShapeCollectionFilter(int a1, int a2, int *a3, int a4, int a5)
{
  return hkpBvAgent::updateShapeCollectionFilter(a1, a3, a2, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpBvAgent_054336::Destroy_ea17056a0  (binary VA: 0x17056a0)
// Original: hkpSymmetricAgent<hkpBvAgent>::~hkpSymmetricAgent
// ----------------------------------------------------------------------------
void hkpSymmetricAgent_hkpBvAgent_054336::Destroy_ea17056a0(hkpSymmetricAgent<hkpBvAgent::Self> *self)
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
// Function: hkpSymmetricAgentLinearCast_hkpBvAgent_f657f2::Destroy_ea1705700  (binary VA: 0x1705700)
// Original: hkpSymmetricAgentLinearCast<hkpBvAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpBvAgent_f657f2::Destroy_ea1705700(hkpSymmetricAgentLinearCast<hkpBvAgent::Self> *self)
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
// Function: hkpSymmetricAgentLinearCast_hkpBvAgent_f657f2::staticLinearCast  (binary VA: 0x1705910)
// Original: hkpSymmetricAgentLinearCast<hkpBvAgent>::staticLinearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvAgent_f657f2::staticLinearCast(int *a1, int *a2, float *a3, int a4, int a5)
{
  int v5; // xmm1_4
  int v6; // xmm1_4
  float v7; // xmm1_4
  int v8;
  int v9;
  int v10; // xmm1_4
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[4];
  typedef uint32_t _g4_t_v16[12];
  typedef int _g4_t_v17[31];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v15)) > _g4_s3 ? (16u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v16)) > _g4_s4 ? (32u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v17)) > _g4_s5 ? (80u + sizeof(_g4_t_v17)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 80u);

  *(float *)&v5 = -a3[20];
  std::memcpy(v17, a3, 112);
  v17[20] = v5;
  *(float *)&v6 = -a3[21];
  v16[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v17[21] = v6;
  v7 = a3[22];
  *(float *)&v16[4] = a3[20];
  v8 = *((uint32_t *)a3 + 21);
  *(float *)&v17[22] = -v7;
  v16[5] = v8;
  v9 = *((uint32_t *)a3 + 22);
  *(float *)&v10 = -a3[23];
  *(float *)&v16[7] = a3[23];
  v16[8] = a4;
  v16[1] = 2139095022;
  v17[23] = v10;
  v16[6] = v9;
  if ( a5 == 0 )
    return hkpBvAgent::staticLinearCast(a2, a1, v17, (int)(uintptr_t)(v16), 0, v12, v13, v14, v15[0], v15[1]);
  v15[2] = a5;
  return hkpBvAgent::staticLinearCast(a2, a1, v17, (int)(uintptr_t)(v16), (int)(uintptr_t)(v15), v12, v13, v14, (int)((uint32_t)(uintptr_t)&off_209B818), 238);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpBvAgent_054336::linearCast  (binary VA: 0x1705c20)
// Original: hkpSymmetricAgent<hkpBvAgent>::linearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgent_hkpBvAgent_054336::linearCast(int a1, int *a2, int *a3, int a4, int a5, int a6)
{
  float v6; // xmm1_4
  int v7;
  int v8;
  int v9;
  typedef uint32_t *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef void (**_g4_t_v13)(hkpSymmetricAgentFlipCastCollector::Self *);
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t _g4_t_v20[12];
  typedef float _g4_t_v21[31];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v14)) > _g4_s3 ? (20u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v15)) > _g4_s4 ? (32u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v16)) > _g4_s5 ? (36u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v17)) > _g4_s6 ? (40u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v18)) > _g4_s7 ? (44u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v19)) > _g4_s8 ? (48u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v20)) > _g4_s9 ? (64u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v21)) > _g4_s10 ? (112u + sizeof(_g4_t_v21)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 112u);

  v6 = -*(float *)(a4 + 80);
  std::memcpy(v21, (const void *)a4, 112);
  v21[20] = v6;
  v7 = *(uint32_t *)(a4 + 80);
  v21[21] = -*(float *)(a4 + 84);
  v8 = *(uint32_t *)(a4 + 84);
  v9 = *(uint32_t *)(a4 + 88);
  LODWORD(v21[22]) = v9 ^ 0x80000000;
  v14 = 2139095022;
  v12 = *(int *)(a4 + 92);
  v18 = v12;
  v19 = a5;
  v13 = (void (**)(hkpSymmetricAgentFlipCastCollector::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209B830));
  v21[23] = -*(float *)&v12;
  v15 = v7;
  v16 = v8;
  v17 = v9;
  if ( a6 != 0 )
  {
    v20[0] = ((uint32_t)(uintptr_t)&off_209B830);
    v20[7] = v12;
    v20[1] = 2139095022;
    v20[8] = a6;
    v20[4] = v7;
    v20[5] = v8;
    v11 = v20;
    v20[6] = v9;
  }
  else
  {
    v11 = nullptr;
  }
  return hkpBvAgent::linearCast(a1, a3, a2, (int)(uintptr_t)(v21), (int)(uintptr_t)(&v13), (int)(uintptr_t)(v11), v12, (int)(uintptr_t)(v21), (int)(uintptr_t)(v13), v14);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvAgent_f657f2::processCollision  (binary VA: 0x1705fc0)
// Original: hkpSymmetricAgentLinearCast<hkpBvAgent>::processCollision
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvAgent_f657f2::processCollision(int a1, int *a2, int *a3, uint32_t *a4, int a5)
{
  unsigned int v5;
  int result;
  unsigned int v7;
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  int v14;
  int v15;
  int v16;
  float v17; // xmm2_4
  float v18; // xmm1_4
  int v19;
  float v20; // xmm3_4
  int v21;
  char v22;
  float v23;
  int16_t v24;

  v23 = *(float *)(a5 + 12336);
  v5 = *(uint32_t *)a5;
  result = hkpBvAgent::processCollision(a1, a3, a2, a4, a5, v21, v22);
  if ( v5 < *(uint32_t *)a5 )
  {
    v7 = v5 + 20;
    result = v5 + 16;
    do
    {
      v8 = *(float *)(v5 + 28);
      v7 += 48;
      v9 = *(float *)(v7 - 52);
      v5 += 48;
      result += 48;
      *(float *)(v5 - 48) = (float)(v8 * v9) + *(float *)(v5 - 48);
      v10 = *(float *)(v7 - 48);
      *(float *)(v5 - 44) = (float)(v8 * v10) + *(float *)(v5 - 44);
      v11 = *(float *)(v7 - 44);
      v12 = v8 * v11;
      v13 = (float)(v8 * v8) + *(float *)(v5 - 36);
      *(float *)(v5 - 40) = v12 + *(float *)(v5 - 40);
      *(float *)(v5 - 36) = v13;
      *(float *)(result - 48) = -v9;
      *(float *)(result - 44) = -v10;
      *(float *)(result - 40) = -v11;
    }
    while ( v5 < *(uint32_t *)a5 );
  }
  if ( v23 != *(float *)(a5 + 12336) )
  {
    v14 = *(uint8_t *)(a5 + 12360);
    v15 = *(uint8_t *)(a5 + 12361);
    v24 = *(uint16_t *)(a5 + 12352);
    *(uint8_t *)(a5 + 12361) = v14;
    *(uint8_t *)(a5 + 12360) = v15;
    v16 = (uint8_t)v15 + (uint8_t)v14 - 1;
    result = v15 & v14;
    v17 = -*(float *)(a5 + 12324);
    v18 = -*(float *)(a5 + 12328);
    v19 = a5 + 2 * v16;
    v20 = -*(float *)(a5 + 12320);
    *(uint8_t *)(a5 + 12362) = __builtin_rotateleft8(*(uint8_t *)(a5 + 12362), 4);
    *(float *)(a5 + 12320) = v20;
    *(float *)(a5 + 12324) = v17;
    *(float *)(a5 + 12328) = v18;
    *(uint16_t *)(a5 + 12352) = *(uint16_t *)(v19 + 12352);
    *(uint16_t *)(v19 + 12352) = v24;
    if ( (uint8_t)result == 2 )
    {
      result = *(uint16_t *)(a5 + 12354);
      *(uint16_t *)(a5 + 12354) = *(uint16_t *)(a5 + 12356);
      *(uint16_t *)(a5 + 12356) = result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvAgent_f657f2::getClosestPoints  (binary VA: 0x1706350)
// Original: hkpSymmetricAgentLinearCast<hkpBvAgent>::getClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvAgent_f657f2::getClosestPoints(int a1, int *a2, int *a3, uint32_t *a4, int a5)
{
  typedef int _g4_t_v6;
  typedef char _g4_t_v7;
  typedef uint32_t _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v8)) > _g4_s2 ? (16u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  v8[1] = 2139095022;
  v8[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v8[2] = a5;
  return hkpBvAgent::getClosestPoints(a1, a3, a2, a4, (int)(uintptr_t)(v8), v6, v7);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvAgent_f657f2::staticGetClosestPoints  (binary VA: 0x1706530)
// Original: hkpSymmetricAgentLinearCast<hkpBvAgent>::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvAgent_f657f2::staticGetClosestPoints(int *a1, int *a2, int *a3, char a4)
{
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);

  return hkpBvAgent::staticGetClosestPoints(a2, a1, a3, (int)(uintptr_t)(&v5), (int)((uint32_t)(uintptr_t)&off_209B818), 2139095022, a4);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvAgent_f657f2::getPenetrations  (binary VA: 0x1706750)
// Original: hkpSymmetricAgentLinearCast<hkpBvAgent>::getPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvAgent_f657f2::getPenetrations(int a1, int *a2, int *a3, uint32_t *a4, int a5)
{
  typedef int _g4_t_v6;
  typedef char _g4_t_v7;
  typedef uint32_t _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v8)) > _g4_s2 ? (16u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  LOBYTE(v8[1]) = 0;
  v8[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v8[2] = a5;
  return hkpBvAgent::getPenetrations(a1, a3, a2, a4, (int)(uintptr_t)(v8), v6, v7);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvAgent_f657f2::staticGetPenetrations  (binary VA: 0x1706930)
// Original: hkpSymmetricAgentLinearCast<hkpBvAgent>::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvAgent_f657f2::staticGetPenetrations(int *a1, int *a2, int *a3, char a4)
{
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);

  LOBYTE(v6) = 0;
  return hkpBvAgent::staticGetPenetrations(a2, a1, a3, (int)(uintptr_t)(&v5), (int)((uint32_t)(uintptr_t)&off_209B848), v6, a4);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvCompressedMeshAgent_9ed280::staticGetPenetrations  (binary VA: 0x170a840)
// Original: hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvCompressedMeshAgent_9ed280::staticGetPenetrations(int a1, int a2, int a3, int a4)
{
  uint32_t v5[4];

  LOBYTE(v5[1]) = 0;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v5[2] = a4;
  return hkpBvTreeAgent::staticGetPenetrations(a2, a1, a3, v5);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvCompressedMeshAgent_9ed280::staticGetClosestPoints  (binary VA: 0x170a8a0)
// Original: hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvCompressedMeshAgent_9ed280::staticGetClosestPoints(int a1, int a2, int a3, int a4)
{
  uint32_t v5[4];

  v5[1] = 2139095022;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v5[2] = a4;
  return hkpBvTreeAgent::staticGetClosestPoints(a2, a1, a3, v5);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvCompressedMeshAgent_9ed280::staticLinearCast  (binary VA: 0x170aad0)
// Original: hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::staticLinearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvCompressedMeshAgent_9ed280::staticLinearCast(int *a1, const hkTransformf::Self **a2, float *a3, int a4, int a5)
{
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  int v8;
  int v9;
  float v10; // xmm1_4
  typedef uint32_t _g4_t_v12[4];
  typedef uint32_t _g4_t_v13[12];
  typedef float _g4_t_v14[31];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v14)) > _g4_s2 ? (64u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);

  v5 = -a3[20];
  std::memcpy(v14, a3, 112);
  v14[20] = v5;
  v6 = -a3[21];
  v13[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v14[21] = v6;
  v7 = a3[22];
  *(float *)&v13[4] = a3[20];
  v8 = *((uint32_t *)a3 + 21);
  v14[22] = -v7;
  v13[5] = v8;
  v9 = *((uint32_t *)a3 + 22);
  v10 = -a3[23];
  *(float *)&v13[7] = a3[23];
  v13[8] = a4;
  v13[1] = 2139095022;
  v14[23] = v10;
  v13[6] = v9;
  if ( a5 == 0 )
    return hkpBvCompressedMeshAgent::staticLinearCast(a2, a1, (int)(uintptr_t)(v14), (int)(uintptr_t)(v13), 0);
  v12[1] = 2139095022;
  v12[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v12[2] = a5;
  return hkpBvCompressedMeshAgent::staticLinearCast(a2, a1, (int)(uintptr_t)(v14), (int)(uintptr_t)(v13), (int)(uintptr_t)(v12));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpBvCompressedMeshAgent_5cb5cd::linearCast  (binary VA: 0x170ac40)
// Original: hkpSymmetricAgent<hkpBvCompressedMeshAgent>::linearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgent_hkpBvCompressedMeshAgent_5cb5cd::linearCast(int a1, int *a2, const hkTransformf::Self **a3, int a4, int a5, int a6)
{
  float v6; // xmm1_4
  int v7;
  int v8;
  int v9;
  typedef float _g4_t_v11;
  typedef uint32_t _g4_t_v12[12];
  typedef uint32_t _g4_t_v13[12];
  typedef float _g4_t_v14[31];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v13)) > _g4_s2 ? (64u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (112u + sizeof(_g4_t_v14)) > _g4_s3 ? (112u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 112u);

  v6 = -*(float *)(a4 + 80);
  std::memcpy(v14, (const void *)a4, 112);
  v14[20] = v6;
  v7 = *(uint32_t *)(a4 + 80);
  v14[21] = -*(float *)(a4 + 84);
  v8 = *(uint32_t *)(a4 + 84);
  v9 = *(uint32_t *)(a4 + 88);
  LODWORD(v14[22]) = v9 ^ 0x80000000;
  v12[1] = 2139095022;
  v11 = *(float *)(a4 + 92);
  *(float *)&v12[7] = v11;
  v12[8] = a5;
  v12[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v14[23] = -v11;
  v12[4] = v7;
  v12[5] = v8;
  v12[6] = v9;
  if ( a6 == 0 )
    return hkpBvCompressedMeshAgent::linearCast(a1, a3, a2, (int)(uintptr_t)(v14), (int)(uintptr_t)(v12), 0);
  v13[0] = ((uint32_t)(uintptr_t)&off_209B830);
  *(float *)&v13[7] = v11;
  v13[1] = 2139095022;
  v13[8] = a6;
  v13[4] = v7;
  v13[5] = v8;
  v13[6] = v9;
  return hkpBvCompressedMeshAgent::linearCast(a1, a3, a2, (int)(uintptr_t)(v14), (int)(uintptr_t)(v12), (int)(uintptr_t)(v13));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvCompressedMeshAgent_9ed280::getPenetrations  (binary VA: 0x170ad90)
// Original: hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::getPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvCompressedMeshAgent_9ed280::getPenetrations(int a1, int a2, int a3, int a4, int a5)
{
  uint32_t v6[4];

  LOBYTE(v6[1]) = 0;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v6[2] = a5;
  return hkpBvTreeAgent::getPenetrations(a1, a3, a2, a4, v6);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvCompressedMeshAgent_9ed280::getClosestPoints  (binary VA: 0x170adf0)
// Original: hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::getClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvCompressedMeshAgent_9ed280::getClosestPoints(int a1, int a2, int a3, int a4, int a5)
{
  uint32_t v6[4];

  v6[1] = 2139095022;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v6[2] = a5;
  return hkpBvTreeAgent::getClosestPoints(a1, a3, a2, a4, v6);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvCompressedMeshAgent_9ed280::processCollision  (binary VA: 0x170ae50)
// Original: hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::processCollision
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvCompressedMeshAgent_9ed280::processCollision(int a1, int a2, int a3, int a4, float *a5)
{
  unsigned int v5;
  int result;
  unsigned int v7;
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  int v14;
  int v15;
  int v16;
  float v17; // xmm2_4
  float v18; // xmm1_4
  int v19;
  float v20; // xmm3_4
  float v21;
  int16_t v22;

  v21 = a5[3084];
  v5 = *(uint32_t *)a5;
  result = hkpBvTreeAgent::processCollision(a1, a3, a2, a4, a5);
  if ( v5 < *(uint32_t *)a5 )
  {
    v7 = v5 + 20;
    result = v5 + 16;
    do
    {
      v8 = *(float *)(v5 + 28);
      v7 += 48;
      v9 = *(float *)(v7 - 52);
      v5 += 48;
      result += 48;
      *(float *)(v5 - 48) = (float)(v8 * v9) + *(float *)(v5 - 48);
      v10 = *(float *)(v7 - 48);
      *(float *)(v5 - 44) = (float)(v8 * v10) + *(float *)(v5 - 44);
      v11 = *(float *)(v7 - 44);
      v12 = v8 * v11;
      v13 = (float)(v8 * v8) + *(float *)(v5 - 36);
      *(float *)(v5 - 40) = v12 + *(float *)(v5 - 40);
      *(float *)(v5 - 36) = v13;
      *(float *)(result - 48) = -v9;
      *(float *)(result - 44) = -v10;
      *(float *)(result - 40) = -v11;
    }
    while ( v5 < *(uint32_t *)a5 );
  }
  if ( v21 != a5[3084] )
  {
    v14 = *((uint8_t *)a5 + 12360);
    v15 = *((uint8_t *)a5 + 12361);
    v22 = *((uint16_t *)a5 + 6176);
    *((uint8_t *)a5 + 12361) = v14;
    *((uint8_t *)a5 + 12360) = v15;
    v16 = (uint8_t)v15 + (uint8_t)v14 - 1;
    result = v15 & v14;
    v17 = -a5[3081];
    v18 = -a5[3082];
    v19 = (int)(uintptr_t)(a5) + 2 * v16;
    v20 = -a5[3080];
    *((uint8_t *)a5 + 12362) = __builtin_rotateleft8(*((uint8_t *)a5 + 12362), 4);
    a5[3080] = v20;
    a5[3081] = v17;
    a5[3082] = v18;
    *((uint16_t *)a5 + 6176) = *(uint16_t *)(v19 + 12352);
    *(uint16_t *)(v19 + 12352) = v22;
    if ( (uint8_t)result == 2 )
    {
      result = *((uint16_t *)a5 + 6177);
      *((uint16_t *)a5 + 6177) = *((uint16_t *)a5 + 6178);
      *((uint16_t *)a5 + 6178) = result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvCompressedMeshAgent_9ed280::updateShapeCollectionFilter  (binary VA: 0x170b020)
// Original: hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvCompressedMeshAgent_9ed280::updateShapeCollectionFilter(int a1, int a2, int a3, int a4, int a5)
{
  return (int)(uintptr_t)(hkpBvTreeAgent::updateShapeCollectionFilter(a1, a3, a2, a4, a5));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgent_hkpBvCompressedMeshAgent_5cb5cd::Destroy  (binary VA: 0x170b070)
// Original: hkpSymmetricAgent<hkpBvCompressedMeshAgent>::~hkpSymmetricAgent
// ----------------------------------------------------------------------------
void hkpSymmetricAgent_hkpBvCompressedMeshAgent_5cb5cd::Destroy(hkpSymmetricAgent<hkpBvCompressedMeshAgent::Self> *self)
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
// Function: hkpSymmetricAgentLinearCast_hkpBvCompressedMeshAgent_9ed280::Destroy  (binary VA: 0x170b190)
// Original: hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpBvCompressedMeshAgent_9ed280::Destroy(hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent::Self> *self)
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
// Function: hkpSymmetricAgent_hkpBvCompressedMeshAgent_5cb5cd::Destroy_ea170b200  (binary VA: 0x170b200)
// Original: hkpSymmetricAgent<hkpBvCompressedMeshAgent>::~hkpSymmetricAgent
// ----------------------------------------------------------------------------
void hkpSymmetricAgent_hkpBvCompressedMeshAgent_5cb5cd::Destroy_ea170b200(hkpSymmetricAgent<hkpBvCompressedMeshAgent::Self> *self)
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
// Function: hkpSymmetricAgentLinearCast_hkpBvCompressedMeshAgent_9ed280::Destroy_ea170b320  (binary VA: 0x170b320)
// Original: hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpBvCompressedMeshAgent_9ed280::Destroy_ea170b320(hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent::Self> *self)
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
// Function: hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::updateShapeCollectionFilter  (binary VA: 0x170c220)
// Original: hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
uint32_t * hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::updateShapeCollectionFilter(hkpNullAgent::Self *a1, uint32_t *a2, int a3, uint32_t *a4, int a5)
{
  return hkpBvTreeAgent::updateShapeCollectionFilter(a1, a3, a2, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::Destroy  (binary VA: 0x170c330)
// Original: hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::Destroy(hkpSymmetricAgentLinearCast<hkpBvTreeAgent::Self> *self)
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
// Function: hkpSymmetricAgent_hkpBvTreeAgent_347e14::Destroy  (binary VA: 0x170c3a0)
// Original: hkpSymmetricAgent<hkpBvTreeAgent>::~hkpSymmetricAgent
// ----------------------------------------------------------------------------
void hkpSymmetricAgent_hkpBvTreeAgent_347e14::Destroy(hkpSymmetricAgent<hkpBvTreeAgent::Self> *self)
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
// Function: hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::Destroy_ea170c4c0  (binary VA: 0x170c4c0)
// Original: hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::~hkpSymmetricAgentLinearCast
// ----------------------------------------------------------------------------
void hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::Destroy_ea170c4c0(hkpSymmetricAgentLinearCast<hkpBvTreeAgent::Self> *self)
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
// Function: hkpSymmetricAgent_hkpBvTreeAgent_347e14::Destroy_ea170c570  (binary VA: 0x170c570)
// Original: hkpSymmetricAgent<hkpBvTreeAgent>::~hkpSymmetricAgent
// ----------------------------------------------------------------------------
void hkpSymmetricAgent_hkpBvTreeAgent_347e14::Destroy_ea170c570(hkpSymmetricAgent<hkpBvTreeAgent::Self> *self)
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
// Function: hkpSymmetricAgent_hkpBvTreeAgent_347e14::linearCast  (binary VA: 0x170cee0)
// Original: hkpSymmetricAgent<hkpBvTreeAgent>::linearCast
// ----------------------------------------------------------------------------
int hkpSymmetricAgent_hkpBvTreeAgent_347e14::linearCast(int a1, uint32_t *a2, const hkTransformf::Self **a3, int a4, int a5, int a6)
{
  float v6; // xmm1_4
  int v7;
  int v8;
  int v9;
  typedef float _g4_t_v11;
  typedef uint32_t _g4_t_v12[12];
  typedef uint32_t _g4_t_v13[12];
  typedef float _g4_t_v14[31];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v13)) > _g4_s2 ? (64u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (112u + sizeof(_g4_t_v14)) > _g4_s3 ? (112u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 112u);

  v6 = -*(float *)(a4 + 80);
  std::memcpy(v14, (const void *)a4, 112);
  v14[20] = v6;
  v7 = *(uint32_t *)(a4 + 80);
  v14[21] = -*(float *)(a4 + 84);
  v8 = *(uint32_t *)(a4 + 84);
  v9 = *(uint32_t *)(a4 + 88);
  LODWORD(v14[22]) = v9 ^ 0x80000000;
  v12[1] = 2139095022;
  v11 = *(float *)(a4 + 92);
  *(float *)&v12[7] = v11;
  v12[8] = a5;
  v12[0] = ((uint32_t)(uintptr_t)&off_209B830);
  v14[23] = -v11;
  v12[4] = v7;
  v12[5] = v8;
  v12[6] = v9;
  if ( a6 == 0 )
    return hkpBvTreeAgent::linearCast(a1, a3, a2, v14, (int)(uintptr_t)(v12), 0);
  v13[0] = ((uint32_t)(uintptr_t)&off_209B830);
  *(float *)&v13[7] = v11;
  v13[1] = 2139095022;
  v13[8] = a6;
  v13[4] = v7;
  v13[5] = v8;
  v13[6] = v9;
  return hkpBvTreeAgent::linearCast(a1, a3, a2, v14, (int)(uintptr_t)(v12), (int)(uintptr_t)(v13));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::getClosestPoints  (binary VA: 0x170d4b0)
// Original: hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::getClosestPoints
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::getClosestPoints(int a1, uint32_t *a2, const hkTransformf::Self **a3, uint32_t *a4, int a5)
{
  uint32_t v6[4];

  v6[1] = 2139095022;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v6[2] = a5;
  return hkpBvTreeAgent::getClosestPoints(a1, a3, a2, a4, (int)(uintptr_t)(v6));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::getPenetrations  (binary VA: 0x170d810)
// Original: hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::getPenetrations
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::getPenetrations(int a1, uint32_t *a2, const hkTransformf::Self **a3, uint32_t *a4, int a5)
{
  uint32_t v6[4];

  LOBYTE(v6[1]) = 0;
  v6[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v6[2] = a5;
  return hkpBvTreeAgent::getPenetrations(a1, a3, a2, a4, (int)(uintptr_t)(v6));
}

// ----------------------------------------------------------------------------
// Function: hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::processCollision  (binary VA: 0x170f300)
// Original: hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::processCollision
// ----------------------------------------------------------------------------
int hkpSymmetricAgentLinearCast_hkpBvTreeAgent_1bd3bf::processCollision(hkpNullAgent::Self *a1, const hkTransformf::Self **a2, const hkTransformf::Self **a3, int a4, int a5)
{
  unsigned int v5;
  int result;
  unsigned int v7;
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  int v14;
  int v15;
  int v16;
  float v17; // xmm2_4
  float v18; // xmm1_4
  int v19;
  float v20; // xmm3_4
  float v21;
  int16_t v22;

  v21 = *(float *)(a5 + 12336);
  v5 = *(uint32_t *)a5;
  result = hkpBvTreeAgent::processCollision(a1, a3, a2, a4, a5);
  if ( v5 < *(uint32_t *)a5 )
  {
    v7 = v5 + 20;
    result = v5 + 16;
    do
    {
      v8 = *(float *)(v5 + 28);
      v7 += 48;
      v9 = *(float *)(v7 - 52);
      v5 += 48;
      result += 48;
      *(float *)(v5 - 48) = (float)(v8 * v9) + *(float *)(v5 - 48);
      v10 = *(float *)(v7 - 48);
      *(float *)(v5 - 44) = (float)(v8 * v10) + *(float *)(v5 - 44);
      v11 = *(float *)(v7 - 44);
      v12 = v8 * v11;
      v13 = (float)(v8 * v8) + *(float *)(v5 - 36);
      *(float *)(v5 - 40) = v12 + *(float *)(v5 - 40);
      *(float *)(v5 - 36) = v13;
      *(float *)(result - 48) = -v9;
      *(float *)(result - 44) = -v10;
      *(float *)(result - 40) = -v11;
    }
    while ( v5 < *(uint32_t *)a5 );
  }
  if ( v21 != *(float *)(a5 + 12336) )
  {
    v14 = *(uint8_t *)(a5 + 12360);
    v15 = *(uint8_t *)(a5 + 12361);
    v22 = *(uint16_t *)(a5 + 12352);
    *(uint8_t *)(a5 + 12361) = v14;
    *(uint8_t *)(a5 + 12360) = v15;
    v16 = (uint8_t)v15 + (uint8_t)v14 - 1;
    result = v15 & v14;
    v17 = -*(float *)(a5 + 12324);
    v18 = -*(float *)(a5 + 12328);
    v19 = a5 + 2 * v16;
    v20 = -*(float *)(a5 + 12320);
    *(uint8_t *)(a5 + 12362) = __builtin_rotateleft8(*(uint8_t *)(a5 + 12362), 4);
    *(float *)(a5 + 12320) = v20;
    *(float *)(a5 + 12324) = v17;
    *(float *)(a5 + 12328) = v18;
    *(uint16_t *)(a5 + 12352) = *(uint16_t *)(v19 + 12352);
    *(uint16_t *)(v19 + 12352) = v22;
    if ( (uint8_t)result == 2 )
    {
      result = *(uint16_t *)(a5 + 12354);
      *(uint16_t *)(a5 + 12354) = *(uint16_t *)(a5 + 12356);
      *(uint16_t *)(a5 + 12356) = result;
    }
  }
  return result;
}


