#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpGskfAge.h"

// ----------------------------------------------------------------------------
// Function: hkpGskfAgent::Destroy  (binary VA: 0x16d0d20)
// Original: hkpGskfAgent::~hkpGskfAgent
// ----------------------------------------------------------------------------
void hkpGskfAgent::Destroy(hkpGskfAgent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpGskfAgent::commitPotential  (binary VA: 0x16d0d40)
// Original: hkpGskfAgent::commitPotential
// ----------------------------------------------------------------------------
hkpGskfAgent::Self * hkpGskfAgent::commitPotential(hkpGskfAgent::Self *self, uint16_t a2)
{
  hkpGskfAgent::Self *result;
  int v3;

  result = self;
  if ( *((uint8_t *)self + 50) != 0 )
  {
    if ( *((uint16_t *)self + 27) == 0xFFFF )
    {
      v3 = 0;
    }
    else
    {
      if ( *((uint8_t *)self + 50) <= 1u )
        return result;
      if ( *((uint16_t *)self + 31) == 0xFFFF )
      {
        v3 = 1;
      }
      else
      {
        if ( *((uint8_t *)self + 50) <= 2u )
          return result;
        if ( *((uint16_t *)self + 35) == 0xFFFF )
        {
          v3 = 2;
        }
        else
        {
          if ( *((uint8_t *)self + 50) <= 3u || *((uint16_t *)self + 39) != 0xFFFF )
            return result;
          v3 = 3;
        }
      }
    }
    *((uint16_t *)self + 4 * v3 + 27) = a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGskfAgent::createZombie  (binary VA: 0x16d0db0)
// Original: hkpGskfAgent::createZombie
// ----------------------------------------------------------------------------
void hkpGskfAgent::createZombie(hkpGskfAgent::Self *self, uint16_t a2)
{
  int v2;
  char *v3;
  char *v4;

  if ( *((uint8_t *)self + 50) != 0 )
  {
    v2 = 0;
    v3 = (char *)self + 60;
    if ( *((uint16_t *)self + 27) == a2 )
    {
      v4 = (char *)self + 52;
LABEL_7:
      *v4 = 0;
      v4[1] = 0;
    }
    else
    {
      while ( ++v2 < *((uint8_t *)self + 50) )
      {
        v4 = v3;
        v3 += 8;
        if ( *((uint16_t *)v3 - 3) == a2 )
          goto LABEL_7;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpGskfAgent::cleanup  (binary VA: 0x16d0e10)
// Original: hkpGskfAgent::cleanup
// ----------------------------------------------------------------------------
int hkpGskfAgent::cleanup(hkpGskfAgent::Self *self, hkpConstraintOwner::Self *a2)
{
  hkGskManifold_cleanup((char *)self + 48, *((uint32_t *)self + 2), a2);
  return G4_VCALL<int>(self, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpGskfAgent::removePoint  (binary VA: 0x16d0e50)
// Original: hkpGskfAgent::removePoint
// ----------------------------------------------------------------------------
hkpGskfAgent::Self * hkpGskfAgent::removePoint(hkpGskfAgent::Self *self, uint16_t a2)
{
  hkpGskfAgent::Self *result;
  int v3;

  result = self;
  if ( *((uint8_t *)self + 50) != 0 )
  {
    if ( *((uint16_t *)self + 27) == a2 )
    {
      v3 = 0;
    }
    else
    {
      if ( *((uint8_t *)self + 50) <= 1u )
        return result;
      if ( *((uint16_t *)self + 31) == a2 )
      {
        v3 = 1;
      }
      else
      {
        if ( *((uint8_t *)self + 50) <= 2u )
          return result;
        if ( *((uint16_t *)self + 35) == a2 )
        {
          v3 = 2;
        }
        else
        {
          if ( *((uint8_t *)self + 50) <= 3u || *((uint16_t *)self + 39) != a2 )
            return result;
          v3 = 3;
        }
      }
    }
    return (hkpGskfAgent::Self *)hkGskManifold_removePoint((char *)self + 48, v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGskfAgent::Destroy_ea16d0ed0  (binary VA: 0x16d0ed0)
// Original: hkpGskfAgent::~hkpGskfAgent
// ----------------------------------------------------------------------------
void hkpGskfAgent::Destroy_ea16d0ed0(hkpGskfAgent::Self *self)
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
// Function: hkpGskfAgent::initAgentFunc  (binary VA: 0x16d0f30)
// Original: hkpGskfAgent::initAgentFunc
// ----------------------------------------------------------------------------
int hkpGskfAgent::initAgentFunc(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(((hkpGskfAgent::Self * (*)(const hkTransformf::Self **, const hkTransformf::Self **, int, hkpContactMgr::Self *))hkpGskfAgent::createGskfAgent));
  *(uint32_t *)(a1 + 4) = hkpGskBaseAgent::staticGetPenetrations;
  *(uint32_t *)(a1 + 8) = hkpGskBaseAgent::staticGetClosestPoints;
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(((int * (*)(unsigned int, float *, float *, float *, int, int, int, int, int, int, int, unsigned int, int, int, int, int, int, int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, g4_int128_t, float, int, int, int, int, int, int, int, int, int, int, int, float, float, float, float, unsigned int, unsigned int, unsigned int, unsigned int, g4_int128_t, int32_t, unsigned int, int32_t, int32_t, unsigned int, float *, int, int, int, int, int, int, unsigned int))hkpIterativeLinearCastAgent::staticLinearCast));
  *(uint8_t *)(a1 + 16) = 0;
  *(uint8_t *)(a1 + 17) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpGskfAgent::registerAgent  (binary VA: 0x16d0f70)
// Original: hkpGskfAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpGskfAgent::registerAgent(hkpGskfAgent::Self *self)
{
  uint8_t v2[40];

  v2[16] = 0;
  v2[17] = 0;
  hkpGskfAgent::initAgentFunc((int)(uintptr_t)(v2));
  return hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 23, 23);
}

// ----------------------------------------------------------------------------
// Function: hkpGskfAgent::Construct  (binary VA: 0x16d0fd0)
// Original: hkpGskfAgent::hkpGskfAgent
// ----------------------------------------------------------------------------
void hkpGskfAgent::Construct(hkpGskfAgent::Self *self, const hkTransformf::Self **a2, const hkTransformf::Self **a3, hkpContactMgr::Self *a4)
{
  hkpGskBaseAgent::Construct(self, a2, a3, a4);
  *((uint32_t *)self + 12) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209AEC8);
}

// ----------------------------------------------------------------------------
// Function: hkpGskfAgent::createGskfAgent  (binary VA: 0x16d1020)
// Original: hkpGskfAgent::createGskfAgent
// ----------------------------------------------------------------------------
hkpGskfAgent::Self * hkpGskfAgent::createGskfAgent(const hkTransformf::Self **a1, const hkTransformf::Self **a2, int a3, hkpContactMgr::Self *a4)
{
  int address;
  hkpGskfAgent::Self *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  if ( a4 != nullptr )
  {
    v5 = (hkpGskfAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                           *(uint32_t *)(*(uint32_t *)address + 44),
                           128);
    hkpGskfAgent::Construct(v5, a1, a2, a4);
  }
  else
  {
    v5 = (hkpGskfAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                           *(uint32_t *)(*(uint32_t *)address + 44),
                           48);
    hkpGskBaseAgent::Construct(v5, a1, a2, nullptr);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpGskfAgent::processCollisionNoTim  (binary VA: 0x16d10d0)
// Original: hkpGskfAgent::processCollisionNoTim
// ----------------------------------------------------------------------------
int hkpGskfAgent::processCollisionNoTim(int a1, int a2, int a3, int a4, int a5, int a6)
{
  const hkTransformf::Self *v6;
  typedef const hkTransformf::Self *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[8];
  typedef uint8_t _g4_t_v12[108];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v9)) > _g4_s1 ? (32u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v10)) > _g4_s2 ? (36u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v11)) > _g4_s3 ? (48u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (80u + sizeof(_g4_t_v12)) > _g4_s4 ? (80u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 80u);

  v11[1] = a3;
  v11[0] = a2;
  v11[2] = 0;
  v8 = *(const hkTransformf::Self **)(a3 + 8);
  v6 = *(const hkTransformf::Self **)(a2 + 8);
  v11[4] = *(uint32_t *)(a1 + 8);
  v11[3] = a4;
  hkTransformf::setMulInverseMul((hkTransformf::Self *)v12, v6, v8);
  { hkGskAgentUtil_processCollisionNoTim(v11, &v9, &v10, a1 + 12, a1 + 48, a1 + 32, a5, a6); return 0; }
}

// ----------------------------------------------------------------------------
// Function: hkpGskfAgent::processCollision  (binary VA: 0x16d1180)
// Original: hkpGskfAgent::processCollision
// ----------------------------------------------------------------------------
int hkpGskfAgent::processCollision(float *a1, int a2, int a3, int a4, int a5)
{
  int *address;
  int v6;
  int *v7;
  uint32_t *v8;
  uint64_t v9; // rax
  int v10;
  uint32_t *v11;
  uint64_t v12; // rax
  int v13;
  uint32_t *v14;
  uint64_t v15; // rax
  float v16; // xmm2_4
  float v17;
  float v18;
  float v19; // xmm6_4
  float v20; // xmm4_4
  float v21; // xmm1_4
  float v22; // xmm7_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v7 = address;
  v8 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(*address + 12) )
  {
    *v8 = (uint32_t)(uintptr_t)("LtGskAgent");
    v8[3] = (uint32_t)(uintptr_t)("StTim");
    v9 = __rdtsc();
    v8[1] = v9;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v8 + 4);
  }
  if ( a1[6] == *(float *)(a4 + 80) )
    goto LABEL_4;
  v16 = *(float *)(a4 + 88);
  HIDWORD(v12) = *(uint32_t *)(a3 + 8);
  LODWORD(v12) = *(uint32_t *)(a2 + 8);
  v28 = *(float *)(v12 + 80);
  v17 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_to_m128i(*(unsigned int *)(v12 + 72))));
  v18 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_to_m128i(*(unsigned int *)(HIDWORD(v12) + 88))));
  v29 = *(float *)(v12 + 84);
  v19 = *(float *)(v12 + 64);
  v20 = *(float *)(v12 + 68);
  v30 = *(float *)(v12 + 88);
  v21 = *(float *)(v12 + 92);
  v31 = *(float *)(v12 + 160);
  v32 = *(float *)(v12 + 156);
  LODWORD(v12) = a4;
  v22 = a1[11];
  v23 = *(float *)(a4 + 12);
  if ( v22 <= v23
    || (v24 = v21 * v16,
        v25 = v16 * *(float *)(HIDWORD(v12) + 92),
        v26 = v22
            - (float)((float)((float)((float)((float)((float)((float)(v19 - v28) * v24)
                                                    + (float)((float)(*(float *)(HIDWORD(v12) + 80)
                                                                    - *(float *)(HIDWORD(v12) + 64))
                                                            * v25))
                                            * a1[8])
                                    + (float)((float)((float)((float)(v20 - v29) * v24)
                                                    + (float)((float)(*(float *)(HIDWORD(v12) + 84)
                                                                    - *(float *)(HIDWORD(v12) + 68))
                                                            * v25))
                                            * a1[9]))
                            + (float)((float)((float)((float)(v17 - v30) * v24)
                                            + (float)((float)(v18 - *(float *)(HIDWORD(v12) + 72)) * v25))
                                    * a1[10]))
                    + (float)((float)((float)(v25 * *(float *)(HIDWORD(v12) + 156)) * *(float *)(HIDWORD(v12) + 160))
                            + (float)((float)(v24 * v32) * v31))),
        a1[11] = v26,
        v26 <= v23) )
  {
LABEL_4:
    v10 = *v7;
    v11 = *(uint32_t **)(*v7 + 4);
    if ( (unsigned int)(uintptr_t)(v11) < *(uint32_t *)(*v7 + 12) )
    {
      *v11 = (uint32_t)(uintptr_t)("StGsk");
      v15 = __rdtsc();
      v11[1] = v15;
      *(uint32_t *)(v10 + 4) = (uint32_t)(uintptr_t)(v11 + 3);
    }
    a1[6] = *(float *)(a4 + 84);
    LODWORD(v12) = hkpGskfAgent::processCollisionNoTim((int)(uintptr_t)(a1), a2, a3, a4, 0, a5);
  }
  v13 = *v7;
  v14 = *(uint32_t **)(*v7 + 4);
  if ( (unsigned int)(uintptr_t)(v14) < *(uint32_t *)(*v7 + 12) )
  {
    *v14 = (uint32_t)(uintptr_t)("lt");
    v12 = __rdtsc();
    v14[1] = v12;
    *(uint32_t *)(v13 + 4) = (uint32_t)(uintptr_t)(v14 + 3);
  }
  return v12;
}


