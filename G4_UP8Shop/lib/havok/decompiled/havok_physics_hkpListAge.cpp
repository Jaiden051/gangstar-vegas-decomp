#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpListAge.h"

// ----------------------------------------------------------------------------
// Function: hkpListAgent::cleanup  (binary VA: 0x16d1400)
// Original: hkpListAgent::cleanup
// ----------------------------------------------------------------------------
int hkpListAgent::cleanup(hkpListAgent::Self *self, hkpConstraintOwner::Self *a2)
{
  hkAgent1nMachine_Destroy((char *)self + 16, *((uint32_t *)self + 3), *((uint32_t *)self + 2), a2);
  return G4_VCALL<int>(self, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpListAgent::invalidateTim  (binary VA: 0x16d1450)
// Original: hkpListAgent::invalidateTim
// ----------------------------------------------------------------------------
int hkpListAgent::invalidateTim(int a1, int a2)
{
  return hkAgent1nMachine_InvalidateTim(a1 + 16, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpListAgent::warpTime  (binary VA: 0x16d1480)
// Original: hkpListAgent::warpTime
// ----------------------------------------------------------------------------
int hkpListAgent::warpTime(int a1, int64_t a2, int a3)
{
  return hkAgent1nMachine_WarpTime(a1 + 16, a2, HIDWORD(a2), a3);
}

// ----------------------------------------------------------------------------
// Function: hkpListAgent::updateShapeCollectionFilter  (binary VA: 0x16d14d0)
// Original: hkpListAgent::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
int hkpListAgent::updateShapeCollectionFilter(int a1, int a2, int *a3, int a4, int a5)
{
  int v5;
  uint32_t v7[11];

  v7[1] = (uint32_t)(uintptr_t)(a3);
  v7[0] = a2;
  v7[4] = a4;
  v5 = *a3;
  v7[5] = *(uint32_t *)(a1 + 8);
  v7[6] = a5;
  v7[3] = G4_VCALL<int>(v5, 64);
  return hkAgent1nMachine_UpdateShapeCollectionFilter(a1 + 16, v7);
}

// ----------------------------------------------------------------------------
// Function: hkpListAgent::processCollision  (binary VA: 0x16d1640)
// Original: hkpListAgent::processCollision
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * hkpListAgent::processCollision(int a1, int a2, int *a3, int a4)
{
  float v4; // xmm7_4
  int v5;
  float *v6;
  float *v7;
  float v8; // xmm2_4
  float v9; // xmm5_4
  float v10; // xmm6_4
  float v11; // xmm2_4
  float v12; // xmm5_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm1_4
  float v16; // xmm4_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm4_4
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm0_4
  float v23; // xmm6_4
  int v24;
  hkLifoAllocator::Self *v25;
  char *v26;
  unsigned int v27;
  int v28;
  int v29;
  hkLifoAllocator::Self *result;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef int _g4_t_v32;
  typedef signed int _g4_t_v33;
  typedef uint32_t _g4_t_v34[8];
  typedef float _g4_t_v35[27];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_address)) > _g4_s0 ? (0u + sizeof(_g4_t_address)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v32)) > _g4_s1 ? (4u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v33)) > _g4_s2 ? (12u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v34)) > _g4_s3 ? (16u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v35)) > _g4_s4 ? (48u + sizeof(_g4_t_v35)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);

  v34[1] = (uint32_t)(uintptr_t)(a3);
  v34[0] = a2;
  v4 = *(float *)(a4 + 88);
  v5 = *a3;
  v6 = (float *)a3[2];
  v7 = *(float **)(a2 + 8);
  v34[3] = a4;
  v8 = v7[16];
  v32 = v5;
  v9 = v6[20];
  v10 = v7[23];
  v34[4] = *(uint32_t *)(a1 + 8);
  v11 = v8 - v7[20];
  v12 = v9 - v6[16];
  v13 = v10 * v4;
  v34[2] = 0;
  v14 = v4 * v6[23];
  v15 = v7[17] - v7[21];
  v16 = v6[21] - v6[17];
  v17 = (float)((float)(v7[18] - v7[22]) * v13) + (float)((float)(v6[22] - v6[18]) * v14);
  v35[20] = (float)(v11 * v13) + (float)(v12 * v14);
  v18 = v15 * v13;
  v19 = v16 * v14;
  v20 = v13 * v7[39];
  v21 = v14 * v6[39];
  v35[22] = v17;
  v22 = v6[40];
  v23 = v20 * v7[40];
  v35[21] = v18 + v19;
  v35[23] = (float)(v22 * v21) + v23;
  hkTransformf::setMulInverseMul((hkTransformf::Self *)v35, (const hkTransformf::Self *)v7, (const hkTransformf::Self *)v6);
  v24 = *(uint32_t *)(v5 + 28);
  address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v25 = *address;
  v33 = (4 * v24 + 131) & 0xFFFFFF80;
  v26 = *((char **)*address + 3);
  if ( v33 <= *((uint32_t *)*address + 2) && (unsigned int)(uintptr_t)(&v26[v33]) <= *((uint32_t *)v25 + 4) )
    *((uint32_t *)v25 + 3) = (uint32_t)(uintptr_t)(&v26[v33]);
  else
    v26 = (char *)hkLifoAllocator::allocateFromNewSlab(v25, v33);
  if ( v24 <= 0 )
  {
    v29 = 0;
  }
  else
  {
    v27 = 0;
    v28 = 0;
    do
    {
      if ( v27 > 0xFF || ((1 << v27) & *(uint32_t *)(v32 + 4 * (v27 >> 5) + 80)) != 0 )
        *(uint32_t *)&v26[4 * v28++] = v27;
      ++v27;
    }
    while ( v27 != v24 );
    v29 = 4 * v28;
  }
  *(uint32_t *)&v26[v29] = -1;
  hkAgent1nMachine_Process(a1 + 16, v34, v32 + 16, v26);
  result = *address;
  if ( v33 > *((uint32_t *)*address + 2) || *((char **)result + 3) != &v26[v33] || v26 == *((char **)result + 5) )
    return hkLifoAllocator::slowBlockFree(result, v26, v33);
  *((uint32_t *)result + 3) = (uint32_t)(uintptr_t)(v26);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpListAgent::Destroy  (binary VA: 0x16d1a70)
// Original: hkpListAgent::~hkpListAgent
// ----------------------------------------------------------------------------
void hkpListAgent::Destroy(hkpListAgent::Self *self)
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
// Function: hkpListAgent::Destroy_ea16d1bc0  (binary VA: 0x16d1bc0)
// Original: hkpListAgent::~hkpListAgent
// ----------------------------------------------------------------------------
void hkpListAgent::Destroy_ea16d1bc0(hkpListAgent::Self *self)
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
// Function: hkpListAgent::initAgentFunc  (binary VA: 0x16d1d20)
// Original: hkpListAgent::initAgentFunc
// ----------------------------------------------------------------------------
int hkpListAgent::initAgentFunc(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(hkpListAgent::createListAAgent);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(hkpShapeCollectionAgent::staticGetPenetrations);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(hkpShapeCollectionAgent::staticGetClosestPoints);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(hkpShapeCollectionAgent::staticLinearCast);
  *(uint8_t *)(a1 + 16) = 1;
  *(uint8_t *)(a1 + 17) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpListAgent::initAgentFuncInverse  (binary VA: 0x16d1d60)
// Original: hkpListAgent::initAgentFuncInverse
// ----------------------------------------------------------------------------
int hkpListAgent::initAgentFuncInverse(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(hkpListAgent::createListBAgent);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::staticGetPenetrations);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::staticGetClosestPoints);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpShapeCollectionAgent_530a10::staticLinearCast);
  *(uint8_t *)(a1 + 16) = 0;
  *(uint8_t *)(a1 + 17) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpListAgent::registerAgent  (binary VA: 0x16d1da0)
// Original: hkpListAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpListAgent::registerAgent(hkpListAgent::Self *self)
{
  uint8_t v2[44];

  v2[16] = 0;
  v2[17] = 0;
  hkpListAgent::initAgentFunc((int)(uintptr_t)(v2));
  hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 8, -1);
  v2[16] = 0;
  v2[17] = 0;
  hkpListAgent::initAgentFuncInverse((int)(uintptr_t)(v2));
  return hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), -1, 8);
}

// ----------------------------------------------------------------------------
// Function: hkpListAgent::Construct  (binary VA: 0x16d1e30)
// Original: hkpListAgent::hkpListAgent
// ----------------------------------------------------------------------------
int hkpListAgent::Construct(uint32_t *a1, int a2, int a3, uint32_t *a4, int a5)
{
  a1[2] = a5;
  a1[1] = -65535;
  *a1 = ((uint32_t)(uintptr_t)&off_209B008);
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0x80000000;
  a1[3] = *a4;
  return hkAgent1nMachine_Create(a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: hkpListAgent::createListBAgent  (binary VA: 0x16d1e90)
// Original: hkpListAgent::createListBAgent
// ----------------------------------------------------------------------------
uint32_t * hkpListAgent::createListBAgent(int a1, int a2, uint32_t *a3, int a4)
{
  int address;
  uint32_t *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   28);
  hkpListAgent::Construct(v5, a1, a2, a3, a4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpListAgent::createListAAgent  (binary VA: 0x16d1f00)
// Original: hkpListAgent::createListAAgent
// ----------------------------------------------------------------------------
uint32_t * hkpListAgent::createListAAgent(int a1, int a2, uint32_t *a3, int a4)
{
  int address;
  uint32_t *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   28);
  hkpListAgent::Construct(v5, a2, a1, a3, a4);
  *v5 = ((uint32_t)(uintptr_t)&off_209AFA8);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpListAgent::staticGetClosestPoints  (binary VA: 0x16d1f80)
// Original: hkpListAgent::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpListAgent::staticGetClosestPoints(int a1, uint32_t *a2, int a3, int a4)
{
  uint32_t v5[4];

  v5[1] = 2139095022;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v5[2] = a4;
  return hkpShapeCollectionAgent::staticGetClosestPoints(a2, a1, a3, (int)(uintptr_t)(v5));
}

// ----------------------------------------------------------------------------
// Function: hkpListAgent::getClosestPoints  (binary VA: 0x16d1fe0)
// Original: hkpListAgent::getClosestPoints
// ----------------------------------------------------------------------------
int hkpListAgent::getClosestPoints(int a1, int a2, uint32_t *a3, int a4, int a5)
{
  return hkpListAgent::staticGetClosestPoints(a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpListAgent::staticLinearCast  (binary VA: 0x16d2080)
// Original: hkpListAgent::staticLinearCast
// ----------------------------------------------------------------------------
int hkpListAgent::staticLinearCast(int a1, uint32_t *a2, float *a3, int a4, int a5)
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
    return hkpShapeCollectionAgent::staticLinearCast(a2, a1, (int)(uintptr_t)(v13), (int)(uintptr_t)(v12), 0);
  v11[1] = 2139095022;
  v11[0] = ((uint32_t)(uintptr_t)&off_209B818);
  v11[2] = a5;
  return hkpShapeCollectionAgent::staticLinearCast(a2, a1, (int)(uintptr_t)(v13), (int)(uintptr_t)(v12), (int)(uintptr_t)(v11));
}

// ----------------------------------------------------------------------------
// Function: hkpListAgent::linearCast  (binary VA: 0x16d21a0)
// Original: hkpListAgent::linearCast
// ----------------------------------------------------------------------------
int hkpListAgent::linearCast(int a1, int a2, uint32_t *a3, float *a4, int a5, int a6)
{
  return hkpListAgent::staticLinearCast(a2, a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: hkpListAgent::staticGetPenetrations  (binary VA: 0x16d2340)
// Original: hkpListAgent::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpListAgent::staticGetPenetrations(int a1, uint32_t *a2, int a3, int a4)
{
  uint32_t v5[4];

  LOBYTE(v5[1]) = 0;
  v5[0] = ((uint32_t)(uintptr_t)&off_209B848);
  v5[2] = a4;
  return hkpShapeCollectionAgent::staticGetPenetrations(a2, a1, a3, (int)(uintptr_t)(v5));
}

// ----------------------------------------------------------------------------
// Function: hkpListAgent::getPenetrations  (binary VA: 0x16d23a0)
// Original: hkpListAgent::getPenetrations
// ----------------------------------------------------------------------------
int hkpListAgent::getPenetrations(int a1, int a2, uint32_t *a3, int a4, int a5)
{
  return hkpListAgent::staticGetPenetrations(a2, a3, a4, a5);
}


