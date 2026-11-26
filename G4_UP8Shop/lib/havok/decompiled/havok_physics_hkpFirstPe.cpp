#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpFirstPe.h"

// ----------------------------------------------------------------------------
// Function: hkpFirstPersonGun::staticClass  (binary VA: 0x182ac20)
// Original: hkpFirstPersonGun::staticClass
// ----------------------------------------------------------------------------
void * hkpFirstPersonGun::staticClass()
{
  return &hkpFirstPersonGunClass;
}

// ----------------------------------------------------------------------------
// Function: hkpFirstPersonGun::initGun  (binary VA: 0x183ade0)
// Original: hkpFirstPersonGun::initGun
// ----------------------------------------------------------------------------
void hkpFirstPersonGun::initGun()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpFirstPersonGun::stepGun  (binary VA: 0x183adf0)
// Original: hkpFirstPersonGun::stepGun
// ----------------------------------------------------------------------------
void hkpFirstPersonGun::stepGun()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpFirstPersonGun::fireGun  (binary VA: 0x183ffe0)
// Original: hkpFirstPersonGun::fireGun
// ----------------------------------------------------------------------------
void hkpFirstPersonGun::fireGun()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpFirstPersonGun::reset  (binary VA: 0x183fff0)
// Original: hkpFirstPersonGun::reset
// ----------------------------------------------------------------------------
void hkpFirstPersonGun::reset()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpFirstPersonGun::getName  (binary VA: 0x1840000)
// Original: hkpFirstPersonGun::getName
// ----------------------------------------------------------------------------
unsigned int hkpFirstPersonGun::getName(hkpFirstPersonGun::Self *self)
{
  return *((uint32_t *)self + 3) & 0xFFFFFFFE;
}

// ----------------------------------------------------------------------------
// Function: hkpFirstPersonGun::quitGun  (binary VA: 0x1840010)
// Original: hkpFirstPersonGun::quitGun
// ----------------------------------------------------------------------------
int hkpFirstPersonGun::quitGun(hkpFirstPersonGun::Self *self, hkpWorld::Self *a2)
{
  return G4_VCALL<int>(self, 40, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpFirstPersonGun::Destroy  (binary VA: 0x1840030)
// Original: hkpFirstPersonGun::~hkpFirstPersonGun
// ----------------------------------------------------------------------------
void hkpFirstPersonGun::Destroy(hkpFirstPersonGun::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int32_t v7; // ett
  int v8;
  int v9;

  v1 = 0;
  v2 = *((uint32_t *)self + 6);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A35C8);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 5) + 4 * v1);
      if ( *(uint16_t *)(v3 + 6) != 0 )
      {
        v9 = v1;
        do
        {
          v5 = *(uint32_t *)(v3 + 4);
          HIWORD(v4) = HIWORD(v5);
          LOWORD(v4) = 0;
          v6 = v4 | (uint16_t)(v5 - 1);
          v7 = v5;
        }
        while ( v7 != __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v7, v6) );
        v1 = v9;
        if ( (uint16_t)v6 == 0 )
          G4_VCALL<void>(v3, 16);
        v2 = *((uint32_t *)self + 6);
      }
      ++v1;
    }
    while ( v1 < v2 );
  }
  v8 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 6) = 0;
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      4 * v8);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  hkStringPtr::Destroy((hkpFirstPersonGun::Self *)((char *)self + 12));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpFirstPersonGun::Destroy_ea1840110  (binary VA: 0x1840110)
// Original: hkpFirstPersonGun::~hkpFirstPersonGun
// ----------------------------------------------------------------------------
void hkpFirstPersonGun::Destroy_ea1840110(hkpFirstPersonGun::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int32_t v7; // ett
  int v8;
  int v9;
  int v10;
  int v11;

  v1 = 0;
  v2 = *((uint32_t *)self + 6);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A35C8);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 5) + 4 * v1);
      if ( *(uint16_t *)(v3 + 6) != 0 )
      {
        v11 = v1;
        do
        {
          v5 = *(uint32_t *)(v3 + 4);
          HIWORD(v4) = HIWORD(v5);
          LOWORD(v4) = 0;
          v6 = v4 | (uint16_t)(v5 - 1);
          v7 = v5;
        }
        while ( v7 != __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v7, v6) );
        v1 = v11;
        if ( (uint16_t)v6 == 0 )
          G4_VCALL<void>(v3, 16);
        v2 = *((uint32_t *)self + 6);
      }
      ++v1;
    }
    while ( v1 < v2 );
  }
  v8 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 6) = 0;
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      4 * v8);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  hkStringPtr::Destroy((hkpFirstPersonGun::Self *)((char *)self + 12));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v9 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v10 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v10 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v9, 12, self, v10);
}

// ----------------------------------------------------------------------------
// Function: hkpFirstPersonGun::Construct  (binary VA: 0x1840220)
// Original: hkpFirstPersonGun::hkpFirstPersonGun
// ----------------------------------------------------------------------------
void hkpFirstPersonGun::Construct(hkpFirstPersonGun::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A35C8);
  *((uint32_t *)self + 1) = -65535;
  *((uint8_t *)self + 8) = 0;
  hkStringPtr::Construct((hkpFirstPersonGun::Self *)((char *)self + 12), (hkString::Self *)&unk_1B15112);
  *((uint8_t *)self + 16) = 113;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
}

// ----------------------------------------------------------------------------
// Function: hkpFirstPersonGun::calcVelocityToTarget  (binary VA: 0x1840280)
// Original: hkpFirstPersonGun::calcVelocityToTarget
// ----------------------------------------------------------------------------
float * hkpFirstPersonGun::calcVelocityToTarget(hkpFirstPersonGun::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, float a4, float *a5)
{
  float *result;
  __m128 v6;
  __m128 v7;
  __m128i m128_i128;
  int v9;
  float v10; // xmm4_4
  float v11; // xmm3_4
  __m128i v12;
  g4_int128_t v13;
  int v14; // xmm3_4
  float v15; // xmm3_4
  __m128i v16;
  float v17; // xmm0_4
  __m128i v18;
  __m128i v19;
  int v20;
  float v21; // xmm4_4
  float v22; // xmm3_4
  int v23;
  int v24;
  float v25; // xmm3_4
  int v26;
  int v27;
  float v28; // xmm0_4
  float v29; // xmm3_4
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;

  result = a5;
g4_m128_raw(v6) = *(unsigned int *)a2;
g4_m128_lane<float>(v6, 0) =g4_m128_lane<float>(v6, 0) - *(float *)self;
  v35 = *((float *)a2 + 1) - *((float *)self + 1);
g4_m128_raw(v7) = *((unsigned int *)a2 + 2);
  m128_i128 =g4_m128_raw(G4_BITCAST<__m128i>(v6));
g4_m128_lane<float>(v7, 0) =g4_m128_lane<float>(v7, 0) - *((float *)self + 2);
  v34 = *((float *)a2 + 3) - *((float *)self + 3);
  *(float *)g4_m128_ptr<int32_t>(m128_i128) = (float)((float)(g4_m128_lane<float>(v6, 0) *g4_m128_lane<float>(v6, 0)) + (float)(v35 * v35))
                                + (float)(g4_m128_lane<float>(v7, 0) *g4_m128_lane<float>(v7, 0));
  if ( *(float *)g4_m128_ptr<int32_t>(m128_i128) <= 0.0 )
  {
g4_m128_raw(v12) = 0;
  }
  else
  {
    v9 = ((_mm_cvtsi128_si32(m128_i128) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(m128_i128) >> 1));
g4_m128_raw(v12) = 0x3FC00000u;
    v10 = (float)(*(float *)&v9 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128)) * *(float *)&v9)
                * (float)(*(float *)&v9 * *(float *)&v9));
    v11 = (float)(v10 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128)) * v10) * (float)(v10 * v10));
    *(float *)g4_m128_ptr<int32_t>(v12) = (float)((float)(1.5 * v11)
                                    - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128)) * v11)
                                            * (float)(v11 * v11)))
                            * *(float *)g4_m128_ptr<int32_t>(m128_i128);
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v12) > 0.00000011920929f )
  {
    v14 = (2130706432 - LODWORD(a4)) & ((LODWORD(a4) ^ (LODWORD(a4) + 2139095040)) >> 31);
    v15 = (float)(2.0 - (float)(a4 * (float)((float)(2.0 - (float)(a4 * *(float *)&v14)) * *(float *)&v14)))
        * (float)((float)(2.0 - (float)(a4 * *(float *)&v14)) * *(float *)&v14);
g4_m128_raw(v16) = *(unsigned int *)a3;
    v17 = (float)-(float)((float)((float)(2.0 - (float)(a4 * v15)) * v15) * *(float *)g4_m128_ptr<int32_t>(v12)) * 0.5;
    *(float *)g4_m128_ptr<int32_t>(v16) = *(float *)g4_m128_ptr<int32_t>(v16) * v17;
    v32 = *(float *)g4_m128_ptr<int32_t>(v16);
    v31 = *((float *)a3 + 1) * v17;
    v33 = *((float *)a3 + 2) * v17;
    v30 = v17 * *((float *)a3 + 3);
    v19 = v16;
g4_m128_raw(v18) = 0;
    *(float *)g4_m128_ptr<int32_t>(v19) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v16) * *(float *)g4_m128_ptr<int32_t>(v16)) + (float)(v31 * v31))
                            + (float)(v33 * v33);
    if ( *(float *)g4_m128_ptr<int32_t>(v19) > 0.0 )
    {
      v20 = ((_mm_cvtsi128_si32(v19) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v19) >> 1));
      v21 = (float)(1.5 * *(float *)&v20)
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v19)) * *(float *)&v20)
                  * (float)(*(float *)&v20 * *(float *)&v20));
      v22 = (float)(1.5 * v21) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v19)) * v21) * (float)(v21 * v21));
g4_m128_raw(v18) = 0x3FC00000u;
      *(float *)g4_m128_ptr<int32_t>(v18) = (float)((float)(1.5 * v22)
                                      - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v19)) * v22)
                                              * (float)(v22 * v22)))
                              * *(float *)g4_m128_ptr<int32_t>(v19);
    }
    if ( *(float *)g4_m128_ptr<int32_t>(v18) > a4 )
    {
      v26 = _mm_cvtsi128_si32(v18);
      v27 = (2130706432 - v26) & ((v26 ^ (v26 + 2139095040)) >> 31);
      v28 = (float)(2.0
                  - (float)(*(float *)g4_m128_ptr<int32_t>(v18)
                          * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v18) * *(float *)&v27)) * *(float *)&v27)))
          * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v18) * *(float *)&v27)) * *(float *)&v27);
      v29 = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v18) * v28)) * v28) * a4;
      v32 = v32 * v29;
      v31 = v31 * v29;
      v33 = v33 * v29;
      v30 = v29 * v30;
    }
    v23 = _mm_cvtsi128_si32(v12);
    v24 = (2130706432 - v23) & ((v23 ^ (v23 + 2139095040)) >> 31);
    v25 = (float)((float)(2.0
                        - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                * (float)((float)(2.0
                                                - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                                        * (float)((float)(2.0
                                                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                                                                * *(float *)&v24))
                                                                * *(float *)&v24)))
                                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v24))
                                                * *(float *)&v24))))
                * (float)((float)(2.0
                                - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v24))
                                                * *(float *)&v24)))
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v24)) * *(float *)&v24)))
        * a4;
    *a5 = (float)(g4_m128_lane<float>(v6, 0) * v25) + v32;
    a5[2] = (float)(g4_m128_lane<float>(v7, 0) * v25) + v33;
    a5[1] = (float)(v35 * v25) + v31;
    a5[3] = (float)(v25 * v34) + v30;
  }
  else
  {
    *(uint64_t *)&v13 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v6, g4_m128_from<__m128>(LODWORD(v35))), 0);
    *((uint64_t *)&v13 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v7, g4_m128_from<__m128>(LODWORD(v34))), 0);
    *(g4_int128_t *)a5 = v13;
  }
  return result;
}


