#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpTreeBro.h"

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::getAabbCacheSize  (binary VA: 0x17ce8e0)
// Original: hkpTreeBroadPhase::getAabbCacheSize
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::getAabbCacheSize(hkpTreeBroadPhase::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 76);
  result = 0;
  if ( v1 != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)v1 + 112))(*((uint32_t *)self + 76));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::calcAabbCache  (binary VA: 0x17ce910)
// Original: hkpTreeBroadPhase::calcAabbCache
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::calcAabbCache(hkpTreeBroadPhase::Self *self, const hkAabb::Self *a2, char *a3)
{
  int result;

  result = *((uint32_t *)self + 76);
  if ( result != 0 )
    return G4_VCALL<int>(result, 116, a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::calcAabbCache  (binary VA: 0x17ce940)
// Original: hkpTreeBroadPhase::calcAabbCache
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::calcAabbCache(int a1, int a2, int a3)
{
  int result;

  result = *(uint32_t *)(a1 + 304);
  if ( result != 0 )
    return G4_VCALL<int>(result, 120, a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::getType  (binary VA: 0x17ce970)
// Original: hkpTreeBroadPhase::getType
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::getType()
{
  return 2;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::set32BitOffsetAndScale  (binary VA: 0x17ce9b0)
// Original: hkpTreeBroadPhase::set32BitOffsetAndScale
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::set32BitOffsetAndScale(hkpTreeBroadPhase::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4)
{
  int v4; // xmm2_4
  int v5; // xmm4_4
  int v6;
  float v7; // xmm1_4
  __m128i v8;
  int v9;
  int v10; // xmm1_4
  float v11; // xmm1_4
  __m128i v12;
  int v13;
  int v14; // xmm1_4
  __m128i v15;
  int v16;
  int v17;
  int result;

  v4 = *((uint32_t *)self + 63);
  v5 = *((uint32_t *)self + 75);
  v6 = *((uint32_t *)self + 76);
  if ( v6 != 0 )
    G4_VCALL<void>(v6, 128, a2, a3, a4);
  *((float *)self + 60) = -*(float *)a2;
  *((float *)self + 61) = -*((float *)a2 + 1);
  v7 = *((float *)a2 + 2);
  *((uint32_t *)self + 63) = v4;
  *((float *)self + 62) = -v7;
g4_m128_raw(v8) = *(unsigned int *)a4;
  v9 = _mm_cvtsi128_si32(v8);
  v10 = (2130706432 - v9) & ((v9 ^ (v9 + 2139095040)) >> 31);
  v11 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v8)
                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v8) * *(float *)&v10)) * *(float *)&v10)))
      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v8) * *(float *)&v10)) * *(float *)&v10);
  *((float *)self + 72) = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v8) * v11)) * v11;
g4_m128_raw(v12) = *((unsigned int *)a4 + 1);
  v13 = _mm_cvtsi128_si32(v12);
  v14 = (2130706432 - v13) & ((v13 ^ (v13 + 2139095040)) >> 31);
  *((float *)self + 73) = (float)(2.0
                                - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                        * (float)((float)(2.0
                                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                                                * (float)((float)(2.0
                                                                                - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                                                                        * *(float *)&v14))
                                                                        * *(float *)&v14)))
                                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v14))
                                                        * *(float *)&v14))))
                        * (float)((float)(2.0
                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v14))
                                                        * *(float *)&v14)))
                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v14))
                                        * *(float *)&v14));
g4_m128_raw(v15) = *((unsigned int *)a4 + 2);
  v16 = _mm_cvtsi128_si32(v15);
  *((uint32_t *)self + 75) = v5;
  v17 = (2130706432 - v16) & ((v16 ^ (v16 + 2139095040)) >> 31);
  *((float *)self + 74) = (float)(2.0
                                - (float)(*(float *)g4_m128_ptr<int32_t>(v15)
                                        * (float)((float)(2.0
                                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v15)
                                                                * (float)((float)(2.0
                                                                                - (float)(*(float *)g4_m128_ptr<int32_t>(v15)
                                                                                        * *(float *)&v17))
                                                                        * *(float *)&v17)))
                                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)&v17))
                                                        * *(float *)&v17))))
                        * (float)((float)(2.0
                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v15)
                                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)&v17))
                                                        * *(float *)&v17)))
                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)&v17))
                                        * *(float *)&v17));
  *((uint32_t *)self + 64) = *(uint32_t *)a2;
  *((uint32_t *)self + 65) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 66) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 67) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 68) = *(uint32_t *)a3;
  *((uint32_t *)self + 69) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 70) = *((uint32_t *)a3 + 2);
  result = *((uint32_t *)a3 + 3);
  *((uint32_t *)self + 71) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::getCapabilityDelegate  (binary VA: 0x17cec10)
// Original: hkpTreeBroadPhase::getCapabilityDelegate
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::getCapabilityDelegate(int a1, int a2)
{
  int result;
  int v3;

  result = a1;
  if ( (a2 & *(uint32_t *)(a1 + 12)) == 0 )
  {
    v3 = *(uint32_t *)(a1 + 304);
    if ( v3 != 0 )
      return G4_VCALL<int>(v3, 24, a2);
    else
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::getNumObjects  (binary VA: 0x17cec50)
// Original: hkpTreeBroadPhase::getNumObjects
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::getNumObjects(hkpTreeBroadPhase::Self *self)
{
  int v1;

  v1 = *((uint32_t *)self + 76);
  if ( v1 != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)v1 + 48))(*((uint32_t *)self + 76));
  else
    return *((uint32_t *)self + 44)
         + *((uint32_t *)self + 36)
         + *((uint32_t *)self + 28)
         + *((uint32_t *)self + 20)
         + *((uint32_t *)self + 12);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::getOffsetLowHigh32bit  (binary VA: 0x17cec90)
// Original: hkpTreeBroadPhase::getOffsetLowHigh32bit
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::getOffsetLowHigh32bit(hkpTreeBroadPhase::Self *self, hkVector4f::Self *a2, hkVector4f::Self *a3)
{
  int v3;
  int result;

  v3 = *((uint32_t *)self + 76);
  if ( v3 != 0 )
    return G4_VCALL<int>(v3, 104, a3, a3);
  *(uint32_t *)a2 = *((uint32_t *)self + 64);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 65);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 66);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 67);
  *(uint32_t *)a3 = *((uint32_t *)self + 68);
  *((uint32_t *)a3 + 1) = *((uint32_t *)self + 69);
  *((uint32_t *)a3 + 2) = *((uint32_t *)self + 70);
  result = *((uint32_t *)self + 71);
  *((uint32_t *)a3 + 3) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::getAabb  (binary VA: 0x17ced20)
// Original: hkpTreeBroadPhase::getAabb
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::getAabb(hkpTreeBroadPhase::Self *self, const hkpBroadPhaseHandle *a2, hkAabb::Self *a3)
{
  int v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  uint32_t *v7;
  int v8; // xmm0_4
  int result;

  v3 = *((uint32_t *)self + 76);
  v4 = *(uint32_t *)a2;
  if ( v3 == 0 )
  {
    v5 = v4 >> 31;
    goto LABEL_3;
  }
  v5 = v4 >> 31;
  if ( v5 != 0 )
  {
LABEL_3:
    v6 = *((uint32_t *)self + 3 * v5 + 48) + 8 * *(uint32_t *)a2;
    v7 = (uint32_t *)(*(uint32_t *)((char *)self + (*(uint16_t *)(v6 + 6) & 0x1E0) + 32) + 32 * *(uint16_t *)(v6 + 4));
    *((uint32_t *)a3 + 4) = v7[4];
    *((uint32_t *)a3 + 5) = v7[5];
    v8 = v7[6];
    *((uint32_t *)a3 + 7) = 0;
    *((uint32_t *)a3 + 6) = v8;
    *(uint32_t *)a3 = *v7;
    *((uint32_t *)a3 + 1) = v7[1];
    *((uint32_t *)a3 + 2) = v7[2];
    result = v7[3];
    *((uint32_t *)a3 + 3) = result;
    return result;
  }
  return G4_VCALL<int>(v3, 72, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::Destroy  (binary VA: 0x17cef70)
// Original: hkpTreeBroadPhase::~hkpTreeBroadPhase
// ----------------------------------------------------------------------------
void hkpTreeBroadPhase::Destroy(hkpTreeBroadPhase::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  uint32_t *v7;
  int v8;
  hkpTreeBroadPhase::Self *v9;
  int v10;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0C88);
  v1 = *((uint32_t *)self + 76);
  if ( v1 != 0 && *(uint16_t *)(v1 + 6) != 0 )
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
  v6 = 5;
  v7 = (uint32_t *)((char *)self + 32);
  do
  {
    v8 = v7[2];
    v7[1] = 0;
    if ( v8 >= 0 )
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *v7,
        32 * v8);
    --v6;
    *v7 = 0;
    v7[2] = 0x80000000;
    v7 += 8;
  }
  while ( v6 != 0 );
  v9 = (hkpTreeBroadPhase::Self *)((char *)self + 216);
  do
  {
    v9 = (hkpTreeBroadPhase::Self *)((char *)v9 - 12);
    v10 = *((uint32_t *)v9 + 2);
    *((uint32_t *)v9 + 1) = 0;
    if ( v10 >= 0 )
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *(uint32_t *)v9,
        8 * v10);
    *(uint32_t *)v9 = 0;
    *((uint32_t *)v9 + 2) = 0x80000000;
  }
  while ( (hkpTreeBroadPhase::Self *)((char *)self + 192) != v9 );
  hkpBroadPhase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::Destroy_ea17cf090  (binary VA: 0x17cf090)
// Original: hkpTreeBroadPhase::~hkpTreeBroadPhase
// ----------------------------------------------------------------------------
void hkpTreeBroadPhase::Destroy_ea17cf090(hkpTreeBroadPhase::Self *self)
{
  int v1;
  int v2;

  hkpTreeBroadPhase::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 320;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::getAllAabbs  (binary VA: 0x17cf4c0)
// Original: hkpTreeBroadPhase::getAllAabbs
// ----------------------------------------------------------------------------
unsigned int hkpTreeBroadPhase::getAllAabbs(int a1, hkMemoryAllocator::Self *a2)
{
  int v2;
  unsigned int result;
  uint32_t *i;
  int v5;
  int v6;
  uint16_t j; // si
  int v8;
  uint16_t v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13; // xmm0_4
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  int v18; // xmm0_4
  int v19;
  uint16_t v20; // bp
  int v21;
  uint32_t *v22;
  uint32_t *v23;
  uint16_t v24;
  int16_t v25;
  int v26;

  v2 = *(uint32_t *)(a1 + 304);
  if ( v2 == 0 )
  {
    *((uint32_t *)a2 + 1) = 0;
    v26 = 5;
    for ( i = (uint32_t *)(a1 + 32); ; i += 8 )
    {
      result = *((uint16_t *)i + 12);
      v25 = *((uint16_t *)i + 12);
      if ( (uint16_t)result != 0 )
        break;
LABEL_17:
      if ( --v26 == 0 )
        return result;
    }
    v5 = *i;
    v6 = 32 * (uint16_t)result;
    j = *(uint16_t *)(*i + v6 + 28);
    if ( j == 0 )
    {
      v16 = *((uint32_t *)a2 + 1);
      if ( v16 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
      {
        v23 = i;
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 32, v21);
        v16 = *((uint32_t *)a2 + 1);
        i = v23;
      }
      *((uint32_t *)a2 + 1) = v16 + 1;
      v17 = (uint32_t *)(*i + v6);
      result = *(uint32_t *)a2 + 32 * v16;
      *(uint32_t *)(result + 16) = v17[4];
      *(uint32_t *)(result + 20) = v17[5];
      v18 = v17[6];
      *(uint32_t *)(result + 28) = 0;
      *(uint32_t *)(result + 24) = v18;
      *(uint32_t *)result = *v17;
      *(uint32_t *)(result + 4) = v17[1];
      *(uint32_t *)(result + 8) = v17[2];
      *(uint32_t *)(result + 12) = v17[3];
      goto LABEL_17;
    }
    v22 = i;
    while ( 1 )
    {
      v8 = 32 * j;
      v9 = *(uint16_t *)(v5 + v8 + 28);
      if ( v9 == 0 )
        goto LABEL_9;
      do
      {
        do
        {
          j = v9;
          v8 = 32 * v9;
          v9 = *(uint16_t *)(v5 + v8 + 28);
        }
        while ( v9 != 0 );
LABEL_9:
        v10 = *((uint32_t *)a2 + 1);
        if ( v10 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 32, v21);
          v10 = *((uint32_t *)a2 + 1);
        }
        *((uint32_t *)a2 + 1) = v10 + 1;
        v11 = (uint32_t *)(*(uint32_t *)a2 + 32 * v10);
        v12 = (uint32_t *)(*v22 + v8);
        v11[4] = v12[4];
        v11[5] = v12[5];
        v13 = v12[6];
        v11[7] = 0;
        v11[6] = v13;
        *v11 = *v12;
        v11[1] = v12[1];
        v11[2] = v12[2];
        v11[3] = v12[3];
        v5 = *v22;
        v14 = v8 + *v22;
        v9 = *(uint16_t *)(v14 + 28);
      }
      while ( v9 != 0 );
      v15 = *(uint32_t *)(v14 + 12);
      result = v15 & 0xC0FFFFFF;
      v24 = v15;
      if ( v25 != (uint16_t)v15 )
      {
        if ( *(uint16_t *)(v5 + 32 * (uint16_t)v15 + 30) == j )
        {
          for ( j = v15; ; j = v20 )
          {
            v19 = *(uint32_t *)(v5 + 32 * j + 12);
            v20 = v19;
            v24 = *(uint16_t *)(v5 + 32 * j + 12);
            if ( v25 == v24 )
              break;
            result = 32 * (uint16_t)v19;
            if ( *(uint16_t *)(v5 + result + 30) != j )
              goto LABEL_14;
          }
        }
        else
        {
LABEL_14:
          if ( v24 == 0 )
            goto LABEL_15;
        }
      }
      result = *(uint16_t *)(v5 + 32 * v24 + 30);
      if ( (uint16_t)result == j && v25 == v24 )
      {
LABEL_16:
        i = v22;
        goto LABEL_17;
      }
      j = *(uint16_t *)(v5 + 32 * v24 + 30);
LABEL_15:
      if ( j == 0 )
        goto LABEL_16;
    }
  }
  return G4_VCALL<int>(v2, 68, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::getExtents  (binary VA: 0x17cf780)
// Original: hkpTreeBroadPhase::getExtents
// ----------------------------------------------------------------------------
hkVector4f::Self * hkpTreeBroadPhase::getExtents(hkpTreeBroadPhase::Self *self, hkVector4f::Self *a2, hkVector4f::Self *a3)
{
  int v3;
  char *v5;
  float v6; // xmm6_4
  int v7;
  float v8; // xmm7_4
  float v9; // xmm2_4
  int v10;
  float v11; // xmm5_4
  __m128 v12;
  float v13; // xmm4_4
  unsigned int v14;
  int v15;
  float v16; // xmm0_4
  __m128i v17;
  float v18; // xmm1_4
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int32_t v24;
  int v25;
  int v26;
  int32_t v27;
  int v28;
  int v29;
  int v30;
  float v31;
  int v32;
  int64_t v33;
  int v34;
  int v35;
  float v36;
  int v37;
  float v38;
  int v39;
  float v40;
  int v41;
  float v42;
  int v43;
  float v44;

  v3 = *((uint32_t *)self + 76);
  if ( v3 != 0 )
    return (hkVector4f::Self *)G4_VCALL<int>(v3, 76, a2, a3, v19, v20, v21, v22, v23, v25, v26, v28, v29, v30, v32, v34, v35, v37, v39, v41, v43);
  v5 = (char *)self + 32;
  v6 = 3.40282e38f;
  v7 = 5;
  v8 = 3.40282e38f;
  v9 = -3.40282e38f;
  v10 = *((uint16_t *)self + 28);
  v11 = 3.40282e38f;
  v12 = _mm_xor_ps(g4_m128_u32(0x7F7FFFEEu), g4_m128_from<__m128>(0x80000000));
  v13 = 3.40282e38f;
  v14 = _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v12)));
  v27 =g4_m128_lane<int32_t>(v12, 0);
  v24 =g4_m128_lane<int32_t>(v12, 0);
  v31 = -3.40282e38f;
  if ( (uint16_t)v10 == 0 )
    goto LABEL_7;
LABEL_4:
  v15 = *(uint32_t *)v5 + 32 * v10;
  v44 = *(float *)(v15 + 16);
  v42 = *(float *)(v15 + 20);
  v40 = *(float *)(v15 + 24);
  v33 = *(uint64_t *)v15;
  v36 = *(float *)(v15 + 8);
  v38 = *(float *)(v15 + 12);
  v16 = 0.0;
  while ( 1 )
  {
    v17 = _mm_cvtsi32_si128(v14);
    --v7;
    *(float *)g4_m128_ptr<int32_t>(v17) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v17), v44);
    v8 = fminf(v8, *(float *)&v33);
    v6 = fminf(v6, *((float *)&v33 + 1));
    v11 = fminf(v11, v36);
    v13 = fminf(v13, v38);
    v14 = _mm_cvtsi128_si32(v17);
    v5 += 32;
    v18 = fmaxf(v31, v16);
    v9 = fmaxf(v9, v42);
g4_m128_lane<float>(v12, 0) = fmaxf(g4_m128_lane<float>(v12, 0), v40);
    if ( v7 == 0 )
      break;
    v10 = *((uint16_t *)v5 + 12);
    v31 = v18;
    if ( (uint16_t)v10 != 0 )
      goto LABEL_4;
LABEL_7:
    v40 = *(float *)&v24;
    v42 = -3.40282e38f;
    v44 = *(float *)&v27;
    v38 = 3.40282e38f;
    v36 = 3.40282e38f;
    v16 = -3.40282e38f;
    v33 = 0x7F7FFFEE7F7FFFEELL;
  }
  *(float *)a2 = v8;
  *((float *)a2 + 1) = v6;
  *((float *)a2 + 2) = v11;
  *((float *)a2 + 3) = v13;
  *(uint32_t *)a3 = v14;
  *((float *)a3 + 1) = v9;
  *((uint32_t *)a3 + 2) = _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v12)));
  *((float *)a3 + 3) = v18;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::areAabbsOverlapping  (binary VA: 0x17cfa90)
// Original: hkpTreeBroadPhase::areAabbsOverlapping
// ----------------------------------------------------------------------------
char hkpTreeBroadPhase::areAabbsOverlapping(hkpTreeBroadPhase::Self *self, const hkpBroadPhaseHandle *a2, const hkpBroadPhaseHandle *a3, int a4, int a5, int a6, int a7, ...)
{
  int v7;
  int v8;
  const hkAabb::Self *savedregs;
  va_list va;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[19];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);

  va_start(va, a7);
  v7 = *((uint32_t *)self + 76);
  if ( v7 != 0 && *(int *)a2 >= 0 && *(int *)a3 >= 0 )
    return G4_VCALL<int>(v7, 92, a2, a3, v10, v11[0], v11[1], v11[2], v11[3], v11[4], v11[5], v11[6], v11[7], v11[8], v11[9], v11[10], v11[11], v11[12], v11[13], v11[14], v11[15]);
  G4_VCALL<void>(self, 72, a2, v11, v10);
  v8 = *(uint32_t *)self;
  savedregs = va_arg(va, const hkAabb::Self *);
  (*(void (**)(hkpTreeBroadPhase::Self *, const hkpBroadPhaseHandle *, int *))(v8 + 72))(self, a3, g4_va_cast<int *>(va));
  return hkAabb::overlaps((hkAabb::Self *)v11, savedregs);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhaseInternals::ConvexQuerySorted::processLeaf  (binary VA: 0x17d00b0)
// Original: hkpTreeBroadPhaseInternals::ConvexQuerySorted::processLeaf
// ----------------------------------------------------------------------------
int hkpTreeBroadPhaseInternals::ConvexQuerySorted::processLeaf(int a1, int a2)
{
  hkMemoryAllocator::Self *v2;
  float v3; // xmm0_4
  float v4; // xmm3_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  int v7;
  int v8; // xmm1_4
  int v9;
  int v10;
  int result;
  int v12;

  v2 = *(hkMemoryAllocator::Self **)(a1 + 4);
  v3 = (float)(fminf(*(float *)a2 * *(float *)(a1 + 32), *(float *)(a1 + 32) * *(float *)(a2 + 16))
             + fminf(*(float *)(a2 + 4) * *(float *)(a1 + 36), *(float *)(a1 + 36) * *(float *)(a2 + 20)))
     + fminf(*(float *)(a2 + 8) * *(float *)(a1 + 40), *(float *)(a1 + 40) * *(float *)(a2 + 24));
  v4 = 1.0 * v3;
  v5 = 0.0 * v3;
  v6 = v3 * 0.0;
  v7 = *((uint32_t *)v2 + 1);
  v8 = v7 | 0x3F000000;
  v9 = *(uint32_t *)(*(uint32_t *)a1 + 8 * *(uint16_t *)(*(uint32_t *)(a2 + 32) + 30));
  if ( v7 == (*((uint32_t *)v2 + 2) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v2, 4, v12);
    v7 = *((uint32_t *)v2 + 1);
  }
  *(uint32_t *)(*(uint32_t *)v2 + 4 * v7) = v9;
  ++*((uint32_t *)v2 + 1);
  v10 = *(uint32_t *)(a1 + 12);
  if ( v10 == (*(uint32_t *)(a1 + 16) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 8), 16, v12);
    v10 = *(uint32_t *)(a1 + 12);
  }
  result = *(uint32_t *)(a1 + 8) + 16 * v10;
  *(float *)result = v4;
  *(float *)(result + 4) = v5;
  *(float *)(result + 8) = v6;
  *(uint32_t *)(result + 12) = v8;
  ++*(uint32_t *)(a1 + 12);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::getMemoryFootPrint  (binary VA: 0x17d0260)
// Original: hkpTreeBroadPhase::getMemoryFootPrint
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::getMemoryFootPrint(hkpTreeBroadPhase::Self *self)
{
  return 32 * *((uint32_t *)self + 41)
       + 32 * *((uint32_t *)self + 25)
       + 32 * *((uint32_t *)self + 9)
       + 32 * *((uint32_t *)self + 17)
       + 68
       + 32
       + 32 * *((uint32_t *)self + 33)
       + 32
       + 32
       + 8 * (*((uint32_t *)self + 52) + *((uint32_t *)self + 49));
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::updateHandlesMapping  (binary VA: 0x17d02c0)
// Original: hkpTreeBroadPhase::updateHandlesMapping
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::updateHandlesMapping(hkpTreeBroadPhase::Self *self)
{
  int v1;
  int v2;
  uint32_t *v3;
  unsigned int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int result;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v17)) > _g4_s3 ? (12u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v18)) > _g4_s4 ? (16u + sizeof(_g4_t_v18)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);

  v17 = 0;
  v1 = *((uint32_t *)self + 49);
  v15 = v1;
  if ( v1 == 0
    || (v18 = 8 * v1,
        v17 = (*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
                (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                &v18),
        v14 = v18 / 8,
        v18 / 8 == 0) )
  {
    v14 = 0x80000000;
  }
  v2 = 0;
  v3 = (uint32_t *)v17;
  if ( v15 > 0 )
  {
    do
    {
      ++v2;
      v4 = v3[1] & 0xFFE00000;
      *v3 = 0;
      v3[1] = v4;
      v3 += 2;
      *((uint16_t *)v3 - 1) = HIWORD(v4) & 0xFE1F;
      *((uint8_t *)v3 - 1) = 0;
    }
    while ( v2 != v15 );
  }
  if ( *((int *)self + 49) <= 0 )
  {
    v5 = *((uint32_t *)self + 48);
  }
  else
  {
    v5 = *((uint32_t *)self + 48);
    v16 = *((uint32_t *)self + 49);
    v6 = 0;
    do
    {
      v7 = v5 + 8 * v6;
      if ( *(uint32_t *)v7 != 0 )
      {
        v8 = v17 + 8 * **(uint32_t **)v7;
        v9 = *(uint32_t *)(v7 + 4);
        v10 = *(uint32_t **)v7;
        *(uint32_t *)(v8 + 4) = v9;
        *(uint32_t *)v8 = (uint32_t)(uintptr_t)(v10);
        *(uint16_t *)(*(uint32_t *)((char *)self + (*(uint16_t *)(v8 + 6) & 0x1E0) + 32)
                 + 32 * *(uint16_t *)(v8 + 4)
                 + 30) = **(uint16_t **)v8;
        v5 = *((uint32_t *)self + 48);
        v16 = *((uint32_t *)self + 49);
      }
      ++v6;
    }
    while ( v6 < v16 );
  }
  v11 = v15;
  if ( v15 > 1 )
  {
    v12 = v15 - 1;
    if ( *(uint32_t *)(v17 + 8 * (v15 - 1)) == 0 )
    {
      v11 = v15 - 1;
      if ( v15 == 2 )
      {
LABEL_18:
        v11 = 1;
      }
      else
      {
        while ( 1 )
        {
          --v12;
          if ( *(uint32_t *)(v17 + 8 * v12) != 0 )
            break;
          v11 = v12;
          if ( v12 == 1 )
            goto LABEL_18;
        }
      }
    }
  }
  *((uint32_t *)self + 49) = v11;
  result = *((uint32_t *)self + 50);
  *((uint32_t *)self + 48) = v17;
  *((uint32_t *)self + 50) = v14;
  if ( result >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v5,
             8 * result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::defragment  (binary VA: 0x17d04a0)
// Original: hkpTreeBroadPhase::defragment
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::defragment(hkpTreeBroadPhase::Self *self)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = *((uint32_t *)self + 76);
  if ( v1 != 0 )
  {
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 60))(*((uint32_t *)self + 76));
    hkpTreeBroadPhase::updateHandlesMapping(self);
  }
  v2 = *((uint32_t *)self + 49);
  if ( v2 < (*((uint32_t *)self + 50) & 0x3FFFFFFF) )
    hkArrayUtil::reduce(&hkContainerHeapAllocator::s_alloc, (int *)self + 48, 8, 0, v2);
  v3 = *((uint32_t *)self + 52);
  result = *((uint32_t *)self + 53) & 0x3FFFFFFF;
  if ( v3 < result )
    return hkArrayUtil::reduce(&hkContainerHeapAllocator::s_alloc, (int *)self + 51, 8, 0, v3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::indexAndCompact  (binary VA: 0x17d0560)
// Original: hkpTreeBroadPhase::indexAndCompact
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::indexAndCompact(hkpTreeBroadPhase::Self *self, int a2)
{
  int result;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int16_t v7;

  result = *((uint32_t *)self + 49) - a2;
  if ( a2 > 0 )
  {
    v3 = *((uint32_t *)self + 48) + 8 * result;
    v4 = v3 + 8 * a2;
    do
    {
      if ( *(uint32_t *)v3 != 0 )
      {
        v5 = *((uint32_t *)self + 48) + 8 * **(uint32_t **)v3;
        v6 = *(uint32_t **)v3;
        *(uint32_t *)(v5 + 4) = *(uint32_t *)(v3 + 4);
        v7 = *(uint16_t *)(v5 + 6);
        *(uint32_t *)v5 = (uint32_t)(uintptr_t)(v6);
        *(uint16_t *)(*(uint32_t *)((char *)self + (v7 & 0x1E0) + 32) + 32 * *(uint16_t *)(v5 + 4) + 30) = **(uint16_t **)v5;
      }
      v3 += 8;
    }
    while ( v3 != v4 );
    result = *((uint32_t *)self + 49) - a2;
  }
  *((uint32_t *)self + 49) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::setJitterMargin  (binary VA: 0x17d05f0)
// Original: hkpTreeBroadPhase::setJitterMargin
// ----------------------------------------------------------------------------
hkpTreeBroadPhase::Self * hkpTreeBroadPhase::setJitterMargin(hkpTreeBroadPhase::Self *self, float a2)
{
  *((float *)self + 56) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::setUpdateQuality  (binary VA: 0x17d0610)
// Original: hkpTreeBroadPhase::setUpdateQuality
// ----------------------------------------------------------------------------
hkpTreeBroadPhase::Self * hkpTreeBroadPhase::setUpdateQuality(hkpTreeBroadPhase::Self *self, float a2)
{
  *((float *)self + 57) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::setMotionPredictionFactor  (binary VA: 0x17d0630)
// Original: hkpTreeBroadPhase::setMotionPredictionFactor
// ----------------------------------------------------------------------------
hkpTreeBroadPhase::Self * hkpTreeBroadPhase::setMotionPredictionFactor(hkpTreeBroadPhase::Self *self, float a2)
{
  *((float *)self + 58) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::setCacheQuality  (binary VA: 0x17d0650)
// Original: hkpTreeBroadPhase::setCacheQuality
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::setCacheQuality(hkpTreeBroadPhase::Self *self, int a2)
{
  *((uint32_t *)self + 59) = a2 | 0x3F000000;
  return a2 | 0x3F000000;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::Construct  (binary VA: 0x17d0670)
// Original: hkpTreeBroadPhase::hkpTreeBroadPhase
// ----------------------------------------------------------------------------
void hkpTreeBroadPhase::Construct(hkpTreeBroadPhase::Self *self, hkpBroadPhase::Self *a2)
{
  int v2;
  int32_t v3; // kr00_4
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  hkpBroadPhase::Construct((int)(uintptr_t)(self), 2, 224, 7);
  *((uint32_t *)self + 48) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0C88);
  *((uint32_t *)self + 49) = 0;
  *((uint32_t *)self + 50) = 0x80000000;
  *((uint32_t *)self + 51) = 0;
  *((uint32_t *)self + 52) = 0;
  *((uint32_t *)self + 53) = 0x80000000;
  *((uint32_t *)self + 76) = (uint32_t)(uintptr_t)(a2);
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v3 = *((uint32_t *)a2 + 1);
      HIWORD(v2) = HIWORD(v3);
      LOWORD(v2) = 0;
    }
    while ( v3 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v3, v2 | (uint16_t)(v3 + 1)) );
  }
  hkpTreeBroadPhase::setJitterMargin(self, 0.01f);
  hkpTreeBroadPhase::setUpdateQuality(self, 0.016666668f);
  hkpTreeBroadPhase::setMotionPredictionFactor(self, 2.0);
  hkpTreeBroadPhase::setCacheQuality(self, 0);
  v4 = *((uint32_t *)self + 49);
  v5 = *((uint32_t *)self + 50) & 0x3FFFFFFF;
  *((uint32_t *)self + 60) = 0;
  *((uint32_t *)self + 61) = 0;
  *((uint32_t *)self + 62) = 0;
  *((uint32_t *)self + 63) = 0;
  *((uint32_t *)self + 72) = 0;
  *((uint32_t *)self + 73) = 0;
  *((uint32_t *)self + 74) = 0;
  *((uint32_t *)self + 75) = 0;
  *((uint8_t *)self + 308) = 0;
  if ( v4 == v5 )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpTreeBroadPhase::Self *)((char *)self + 192),
      8,
      v8);
    v4 = *((uint32_t *)self + 49);
  }
  v6 = *((uint32_t *)self + 48) + 8 * v4;
  v7 = *(uint32_t *)(v6 + 4);
  *(uint32_t *)v6 = 0;
  v7 &= 0xFFE00000;
  *(uint32_t *)(v6 + 4) = v7;
  *(uint16_t *)(v6 + 6) = HIWORD(v7) & 0xFE1F;
  *(uint8_t *)(v6 + 7) = 0;
  *((uint32_t *)self + 9) = 0;
  ++*((uint32_t *)self + 49);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint16_t *)self + 22) = 0;
  *((uint16_t *)self + 28) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 18) = 0x80000000;
  *((uint16_t *)self + 38) = 0;
  *((uint16_t *)self + 44) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 26) = 0x80000000;
  *((uint16_t *)self + 54) = 0;
  *((uint16_t *)self + 60) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 34) = 0x80000000;
  *((uint16_t *)self + 70) = 0;
  *((uint16_t *)self + 76) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 42) = 0x80000000;
  *((uint16_t *)self + 86) = 0;
  *((uint16_t *)self + 92) = 0;
  *((uint32_t *)self + 44) = 0;
  *((uint32_t *)self + 45) = 0;
  *((uint32_t *)self + 47) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::removeHandles  (binary VA: 0x17d0fa0)
// Original: hkpTreeBroadPhase::removeHandles
// ----------------------------------------------------------------------------
uint32_t * hkpTreeBroadPhase::removeHandles(hkpTreeBroadPhase::Self *self, const hkpBroadPhaseHandle *const *a2, int a3)
{
  uint32_t *result;
  int v4;
  hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16::Self> *v5;
  uint32_t *v6;
  int v7; // xmm0_4
  int v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v12)) > _g4_s3 ? (16u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);

  v11 = 0;
  result = v12;
  if ( a3 > 0 )
  {
    do
    {
      v4 = *((uint32_t *)self + 48) + 8 * *(uint32_t *)a2[v11];
      v5 = (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16::Self> *)((hkpTreeBroadPhase::Self *)((char *)self + (*(uint16_t *)(v4 + 6) & 0x1E0) + 32));
      v9 = *(uint32_t *)(v4 + 4) & 0x1FFFFF;
      v10 = 32 * *(uint16_t *)(v4 + 4);
      v6 = (uint32_t *)(*(uint32_t *)v5 + v10);
      v12[4] = v6[4];
      v12[5] = v6[5];
      v7 = v6[6];
      v12[7] = 0;
      v12[6] = v7;
      v12[0] = *v6;
      v12[1] = v6[1];
      v12[2] = v6[2];
      v12[3] = v6[3];
      hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_ddc0b8::internalRemove(v5, v9, (const hkAabb::Self *)v12);
      *(uint16_t *)(*(uint32_t *)v5 + v10) = *((uint16_t *)v5 + 6);
      --*((uint32_t *)v5 + 4);
      *((uint16_t *)v5 + 6) = v9;
      v8 = *(uint32_t *)(v4 + 4);
      *(uint32_t *)v4 = 0;
      v8 &= 0xFFE00000;
      *(uint32_t *)(v4 + 4) = v8;
      *(uint16_t *)(v4 + 6) = HIWORD(v8) & 0xFE1F;
      *(uint8_t *)(v4 + 7) = 0;
      result = (uint32_t *)++v11;
    }
    while ( v11 != a3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::removeUserObjects  (binary VA: 0x17d10d0)
// Original: hkpTreeBroadPhase::removeUserObjects
// ----------------------------------------------------------------------------
uint32_t * hkpTreeBroadPhase::removeUserObjects(hkpTreeBroadPhase::Self *self, int a2, hkpBroadPhaseHandle *const *a3)
{
  uint32_t *result;
  int v4;
  int v5;
  uint32_t *v6;
  int v7; // xmm0_4
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[11];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v15)) > _g4_s3 ? (20u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v16)) > _g4_s4 ? (24u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v17)) > _g4_s5 ? (28u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v18)) > _g4_s6 ? (32u + sizeof(_g4_t_v18)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);

  v16 = 0;
  result = v18;
  if ( a2 > 0 )
  {
    do
    {
      v15 = *((uint32_t *)self + 52) - 1;
      v12 = *(uint32_t *)a3[v16];
      v17 = v12 & 0x7FFFFFFF;
      v4 = *((uint32_t *)self + 51) + 8 * v12;
      **(uint32_t **)v4 = 0;
      v5 = *(uint16_t *)(v4 + 4);
      v13 = *(uint32_t *)(v4 + 4) & 0x1FFFFF;
      v14 = 32 * v5;
      v6 = (uint32_t *)(*((uint32_t *)self + 40) + 32 * v5);
      v18[4] = v6[4];
      v18[5] = v6[5];
      v7 = v6[6];
      v18[7] = 0;
      v18[6] = v7;
      v18[0] = *v6;
      v18[1] = v6[1];
      v18[2] = v6[2];
      v18[3] = v6[3];
      hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_ddc0b8::internalRemove(
        (hkpTreeBroadPhase::Self *)((char *)self + 160),
        v5,
        (const hkAabb::Self *)v18);
      *(uint16_t *)(*((uint32_t *)self + 40) + v14) = *((uint16_t *)self + 86);
      v8 = *((uint32_t *)self + 52) - 1;
      --*((uint32_t *)self + 44);
      *((uint16_t *)self + 86) = v13;
      *((uint32_t *)self + 52) = v8;
      v9 = *((uint32_t *)self + 51);
      if ( (v12 & 0x7FFFFFFF) != v8 )
      {
        v10 = (uint32_t *)(v9 + 8 * v8);
        v11 = (uint32_t *)(8 * v12 + v9);
        *v11 = *v10;
        v11[1] = v10[1];
      }
      if ( v17 < v15 )
      {
        *(uint16_t *)(*((uint32_t *)self + 40) + 32 * *(uint16_t *)(v4 + 4) + 30) = v12;
        **(uint32_t **)v4 = v17 | 0x80000000;
      }
      result = (uint32_t *)++v16;
    }
    while ( v16 != a2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::addHandles  (binary VA: 0x17d15a0)
// Original: hkpTreeBroadPhase::addHandles
// ----------------------------------------------------------------------------
const hkAabb::Self * hkpTreeBroadPhase::addHandles(hkpTreeBroadPhase::Self *self, const hkpBroadPhaseHandle *const *a2, const hkAabb::Self *a3, int a4)
{
  const hkAabb::Self *result;
  int v5;
  char v6; // di
  int v7;
  int v8;
  int v9;
  int v10;
  const hkpBroadPhaseHandle *v11;
  int v12;
  int16_t v13; // di
  int v14;
  int v15;
  uint16_t v16; // di
  int v17;
  const hkpBroadPhaseHandle *v18;
  char v19;
  uint8_t v20;
  int v21;
  float *v22;
  int v23;
  int v24;
  int v25;
  float v26; // xmm3_4
  float v27; // xmm5_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm3_4
  float v32; // xmm4_4
  float v33; // xmm0_4
  float v34; // xmm2_4
  float v35; // xmm5_4
  float v36; // xmm5_4
  float v37; // xmm4_4
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  float *v41;
  float v42; // xmm2_4
  float v43; // xmm1_4
  float v44; // xmm4_4
  float v45; // xmm7_4
  typedef int _g4_t_v46;
  typedef hkMemoryAllocator::Self *_g4_t_v47;
  typedef float _g4_t_v48;
  typedef char *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef int _g4_t_v59;
  typedef const hkAabb::Self *_g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef const hkpBroadPhaseHandle *const *_g4_t_v62;
  typedef hkpTreeBroadPhase::Self *_g4_t_v63;
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
  typedef int _g4_t_v74;
  typedef uint16_t _g4_t_v75;
  typedef int _g4_t_v76;
  typedef char _g4_t_v77[4];
  typedef float *_g4_t_v78;
  typedef float *_g4_t_v79;
  typedef hkpTreeBroadPhase::Self **_g4_t_v80;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v46)) > _g4_s0 ? (12u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v47)) > _g4_s1 ? (16u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v48)) > _g4_s2 ? (20u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v49)) > _g4_s3 ? (24u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v50)) > _g4_s4 ? (28u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v51)) > _g4_s5 ? (32u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v52)) > _g4_s6 ? (36u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v53)) > _g4_s7 ? (48u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v54)) > _g4_s8 ? (60u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v55)) > _g4_s9 ? (64u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v56)) > _g4_s10 ? (68u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v57)) > _g4_s11 ? (72u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v58)) > _g4_s12 ? (76u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v59)) > _g4_s13 ? (84u + sizeof(_g4_t_v59)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v60)) > _g4_s14 ? (88u + sizeof(_g4_t_v60)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v61)) > _g4_s15 ? (92u + sizeof(_g4_t_v61)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v62)) > _g4_s16 ? (96u + sizeof(_g4_t_v62)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v63)) > _g4_s17 ? (100u + sizeof(_g4_t_v63)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v64)) > _g4_s18 ? (104u + sizeof(_g4_t_v64)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v65)) > _g4_s19 ? (108u + sizeof(_g4_t_v65)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v66)) > _g4_s20 ? (112u + sizeof(_g4_t_v66)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v67)) > _g4_s21 ? (116u + sizeof(_g4_t_v67)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v68)) > _g4_s22 ? (120u + sizeof(_g4_t_v68)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v69)) > _g4_s23 ? (124u + sizeof(_g4_t_v69)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v70)) > _g4_s24 ? (132u + sizeof(_g4_t_v70)) : _g4_s24,
    _g4_s26 = (136u + sizeof(_g4_t_v71)) > _g4_s25 ? (136u + sizeof(_g4_t_v71)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v72)) > _g4_s26 ? (140u + sizeof(_g4_t_v72)) : _g4_s26,
    _g4_s28 = (144u + sizeof(_g4_t_v73)) > _g4_s27 ? (144u + sizeof(_g4_t_v73)) : _g4_s27,
    _g4_s29 = (148u + sizeof(_g4_t_v74)) > _g4_s28 ? (148u + sizeof(_g4_t_v74)) : _g4_s28,
    _g4_s30 = (148u + sizeof(_g4_t_v75)) > _g4_s29 ? (148u + sizeof(_g4_t_v75)) : _g4_s29,
    _g4_s31 = (152u + sizeof(_g4_t_v76)) > _g4_s30 ? (152u + sizeof(_g4_t_v76)) : _g4_s30,
    _g4_s32 = (156u + sizeof(_g4_t_v77)) > _g4_s31 ? (156u + sizeof(_g4_t_v77)) : _g4_s31,
    _g4_s33 = (160u + sizeof(_g4_t_v78)) > _g4_s32 ? (160u + sizeof(_g4_t_v78)) : _g4_s32,
    _g4_s34 = (164u + sizeof(_g4_t_v79)) > _g4_s33 ? (164u + sizeof(_g4_t_v79)) : _g4_s33,
    _g4_s35 = (184u + sizeof(_g4_t_v80)) > _g4_s34 ? (184u + sizeof(_g4_t_v80)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 24u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 28u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 48u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 60u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 64u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 68u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 72u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 76u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 84u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 88u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 92u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 96u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 100u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 104u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 108u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 112u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 116u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 120u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 124u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 132u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 136u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 140u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 144u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 148u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 148u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 152u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 156u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 160u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 164u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 184u);

  v80 = &self;
  v63 = self;
  v50 = a4;
  v62 = a2;
  result = a3;
  if ( a4 > 0 )
  {
    v60 = a3;
    v49 = (char *)self + 32;
    v47 = (hkMemoryAllocator::Self *)((hkpTreeBroadPhase::Self *)((char *)self + 192));
    v61 = (uint32_t *)((char *)a3 + 16);
    v76 = 0;
    do
    {
      v18 = v62[v76];
      v19 = *((uint8_t *)v18 + 4);
      if ( v19 == 1 )
      {
        v20 = *((uint8_t *)v18 + *((char *)v18 + 5) + *((char *)v18 + *((char *)v18 + 5) + 16) + 232) - 4;
        v5 = v20 < 2u ? 64 : 96;
        v6 = 3 - (v20 < 2u);
      }
      else if ( v19 < 1 || v19 > 3 )
      {
        v5 = 64;
        v6 = 2;
      }
      else
      {
        v5 = 32;
        v6 = 1;
      }
      v7 = *((uint32_t *)v63 + 49);
      if ( v7 == (*((uint32_t *)v63 + 50) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v47, 8, v46);
        v7 = *((uint32_t *)v63 + 49);
      }
      v8 = *((uint32_t *)v63 + 48) + 8 * v7;
      v9 = *(uint32_t *)(v8 + 4);
      *(uint32_t *)v8 = 0;
      v9 &= 0xFFE00000;
      *(uint32_t *)(v8 + 4) = v9;
      *(uint16_t *)(v8 + 6) = HIWORD(v9) & 0xFE1F;
      *(uint8_t *)(v8 + 7) = 0;
      v10 = *((uint32_t *)v63 + 48);
      v74 = *((uint32_t *)v63 + 49);
      *((uint32_t *)v63 + 49) = v74 + 1;
      v59 = v10 + 8 * v74;
      v11 = v62[v76];
      *(uint32_t *)v59 = (uint32_t)(uintptr_t)(v11);
      *(uint16_t *)(v59 + 6) = (32 * (v6 & 0xF)) | *(uint16_t *)(v59 + 6) & 0xFE1F;
      *(uint8_t *)(v59 + 7) = (2 * *(uint8_t *)v11) | *(uint8_t *)(v59 + 7) & 1;
      v12 = (int)(uintptr_t)(&v49[v5]);
      v13 = *(uint16_t *)v11;
      v75 = *(uint16_t *)(v12 + 12);
      if ( v75 == 0 )
      {
        hkcdDynamicTree::DynamicStorage_0_hkcdDynamicTree_Aniso_52f605::reserveNodes(
          (hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::Codec32::Self> *)v77,
          v12,
          1);
        v75 = *(uint16_t *)(v12 + 12);
      }
      v51 = 32 * v75;
      v14 = *(uint32_t *)v12 + v51;
      *(uint16_t *)(v12 + 12) = *(uint16_t *)v14;
      *(uint16_t *)(v14 + 30) = v13;
      *(uint16_t *)(v14 + 28) = 0;
      *(uint32_t *)v14 = *(uint32_t *)v60;
      *(uint32_t *)(v14 + 4) = *((uint32_t *)v60 + 1);
      *(uint32_t *)(v14 + 8) = *((uint32_t *)v60 + 2);
      *(uint32_t *)(v14 + 16) = *v61;
      *(uint32_t *)(v14 + 20) = v61[1];
      *(uint32_t *)(v14 + 24) = v61[2];
      v15 = *(uint32_t *)v12;
      v16 = *(uint16_t *)(v12 + 24);
      v17 = *(uint32_t *)v12 + v51;
      v67 = *(float *)(v17 + 16);
      v66 = *(float *)(v17 + 20);
      v65 = *(float *)(v17 + 24);
      v68 = *(float *)v17;
      v69 = *(float *)(v17 + 4);
      v64 = *(float *)(v17 + 8);
      if ( v16 != 0 )
      {
        v21 = *(uint16_t *)(v12 + 12);
        if ( (uint16_t)v21 == 0 )
        {
          hkcdDynamicTree::DynamicStorage_0_hkcdDynamicTree_Aniso_52f605::reserveNodes(
            (hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::Codec32::Self> *)v77,
            v12,
            1);
          v15 = *(uint32_t *)v12;
          v21 = *(uint16_t *)(v12 + 12);
        }
        v73 = v15;
        v52 = v15 + 32 * v21;
        *(uint16_t *)(v12 + 12) = *(uint16_t *)v52;
        v22 = (float *)(32 * v16 + v15);
        v23 = *((uint16_t *)v22 + 14);
        if ( (uint16_t)v23 != 0 )
        {
          v31 = v64;
          v32 = v69;
          v33 = v65;
          v34 = v67;
          v35 = v68;
          while ( 1 )
          {
            v36 = fminf(v35, *v22);
            v37 = fminf(v32, v22[1]);
            v38 = fmaxf(v34, v22[4]);
            v39 = fmaxf(v66, v22[5]);
            v40 = fmaxf(v33, v22[6]);
            v22[2] = fminf(v31, v22[2]);
            v41 = (float *)(v15 + 32 * v23);
            v22[4] = v38;
            v78 = v41;
            v22[5] = v39;
            *v22 = v36;
            v22[1] = v37;
            v22[6] = v40;
            v42 = v41[4];
            v43 = v41[6];
            v79 = (float *)(32 * *((uint16_t *)v22 + 15) + v15);
            v71 = v79[6];
            v70 = v79[1];
            v44 = v41[5];
            v72 = v41[2];
            v45 = v79[4];
            v53 = v41[1];
            v48 = v65 - v64;
            v54 = v66 - v69;
            v55 = v67 - v68;
            v56 = v65 + v64;
            v57 = v69 + v66;
            v58 = v68 + v67;
            v22 = (&v78)[(float)((float)((float)((float)(v43 - v72) + v48)
                                       + (float)((float)((float)(v42 - *v41) + v55) + (float)((float)(v44 - v53) + v54)))
                               * (float)((float)((float)((float)((float)(*v41 + v42) - v58)
                                                       * (float)((float)(*v41 + v42) - v58))
                                               + (float)((float)((float)(v53 + v44) - v57)
                                                       * (float)((float)(v53 + v44) - v57)))
                                       + (float)((float)((float)(v43 + v72) - v56) * (float)((float)(v43 + v72) - v56)))) > (float)((float)((float)((float)(v71 - v79[2]) + v48) + (float)((float)((float)(v79[5] - v70) + v54) + (float)((float)(v45 - *v79) + v55))) * (float)((float)((float)((float)((float)(*v79 + v45) - v58) * (float)((float)(*v79 + v45) - v58)) + (float)((float)((float)(v70 + v79[5]) - v57) * (float)((float)(v70 + v79[5]) - v57))) + (float)((float)((float)(v71 + v79[2]) - v56) * (float)((float)(v71 + v79[2]) - v56))))];
            v23 = *((uint16_t *)v22 + 14);
            if ( (uint16_t)v23 == 0 )
              break;
            v35 = v68;
            v15 = *(uint32_t *)v12;
            v32 = v69;
            v31 = v64;
            v34 = v67;
            v33 = v65;
          }
          v73 = *(uint32_t *)v12;
        }
        v24 = (v52 - v73) >> 5;
        if ( *((uint16_t *)v22 + 6) != 0 )
          *(uint16_t *)(v73
                   + 32 * (uint16_t)*((uint32_t *)v22 + 3)
                   + 2
                   * (*(uint16_t *)(v73 + 32 * (uint16_t)*((uint32_t *)v22 + 3) + 30) == (uint16_t)(((int)(uintptr_t)(v22) - v73) >> 5))
                   + 28) = v24;
        else
          *(uint16_t *)(v12 + 24) = v24;
        *(uint32_t *)(v52 + 12) = *((uint16_t *)v22 + 6) | 0x3F000000;
        *(uint16_t *)(v52 + 28) = ((int)(uintptr_t)(v22) - *(uint32_t *)v12) >> 5;
        *(uint16_t *)(v52 + 30) = v75;
        v25 = (uint16_t)v24 | 0x3F000000;
        *((uint32_t *)v22 + 3) = v25;
        *(uint32_t *)(*(uint32_t *)v12 + v51 + 12) = v25;
        v26 = fminf(v22[1], v69);
        v27 = fminf(v22[2], v64);
        v28 = fmaxf(v22[4], v67);
        v29 = fmaxf(v22[5], v66);
        v30 = fmaxf(v22[6], v65);
        *(float *)v52 = fminf(*v22, v68);
        *(float *)(v52 + 4) = v26;
        *(float *)(v52 + 8) = v27;
        *(float *)(v52 + 16) = v28;
        *(float *)(v52 + 20) = v29;
        *(float *)(v52 + 24) = v30;
      }
      else
      {
        *(uint16_t *)(v12 + 24) = v75;
        *(uint32_t *)(v17 + 12) = 1056964608;
      }
      ++*(uint32_t *)(v12 + 16);
      *(uint32_t *)(v59 + 4) = v75 | *(uint32_t *)(v59 + 4) & 0xFFE00000;
      ++v76;
      v60 = (const hkAabb::Self *)((char *)v60 + 32);
      v61 += 8;
      result = (const hkAabb::Self *)v50;
    }
    while ( v76 != v50 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::optimize  (binary VA: 0x17d20f0)
// Original: hkpTreeBroadPhase::optimize
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::optimize(hkpTreeBroadPhase::Self *self, float a2, int a3)
{
  hkpTreeBroadPhase::Self *v3;
  char *v4;
  unsigned int v5;
  uint16_t v6; // si
  float v7; // xmm0_4
  int v8;
  int v9;
  int v10;
  int v11;
  char v12; // si
  uint16_t v13; // si
  uint32_t *v14;
  int v15; // xmm0_4
  uint16_t v16;
  uint16_t v17;
  int v18;
  bool v19;
  hkpTreeBroadPhase::Self *v20;
  int result;
  int *v22;
  int v23;
  int i;
  unsigned int v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t _g4_t_v29[11];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v26)) > _g4_s0 ? (12u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v27)) > _g4_s1 ? (24u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v28)) > _g4_s2 ? (28u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v29)) > _g4_s3 ? (32u + sizeof(_g4_t_v29)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);

  v3 = self;
  v26 = 4;
  v4 = (char *)self + 64;
  if ( a2 > 0.0 )
  {
    do
    {
      v5 = *((uint32_t *)v4 + 4);
      if ( v5 != 0 )
      {
        v6 = *((uint16_t *)v4 + 12);
        v7 = (float)((float)((float)((float)HIWORD(v5) * 65536.0) + (float)(uint16_t)v5) * a2) + 0.5;
        v8 = 1;
        if ( (int)v7 > 0 )
          v8 = (int)v7;
        v28 = v8;
        if ( v6 != 0 )
        {
          v9 = *(uint32_t *)v4;
          if ( *(uint16_t *)(*(uint32_t *)v4 + 32 * v6 + 28) != 0 )
          {
            while ( 1 )
            {
              v10 = *((uint32_t *)v4 + 5);
              *((uint32_t *)v4 + 5) = v10 + 1;
              v11 = v9 + 32 * v6;
              do
              {
                v12 = v10;
                v10 = __builtin_rotateright32(v10, 1);
                v11 = 32 * *(uint16_t *)(v11 + 2 * (v12 & 1) + 28) + v9;
              }
              while ( *(uint16_t *)(v11 + 28) != 0 );
              v13 = (v11 - v9) >> 5;
              v14 = (uint32_t *)(v9 + 32 * v13);
              v29[4] = v14[4];
              v29[5] = v14[5];
              v15 = v14[6];
              v29[7] = 0;
              v29[6] = v15;
              v29[0] = *v14;
              v29[1] = v14[1];
              v29[2] = v14[2];
              v29[3] = v14[3];
              v16 = hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_ddc0b8::internalRemove(
                      (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16::Self> *)v4,
                      v13,
                      (const hkAabb::Self *)v29);
              v17 = 0;
              if ( v16 != 0 )
              {
                v18 = *(uint32_t *)(*(uint32_t *)v4 + 32 * v16 + 12);
                if ( *(uint16_t *)(*(uint32_t *)v4 + 32 * v16 + 12) != 0 )
                {
                  v17 = *(uint32_t *)(*(uint32_t *)v4 + 32 * (uint16_t)v18 + 12);
                  if ( v17 != 0 )
                    goto LABEL_14;
                  v16 = v18;
                }
                v17 = v16;
              }
LABEL_14:
              hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_ddc0b8::internalInsert(
                (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16::Self> *)v4,
                v13,
                v17);
              if ( --v28 == 0 )
                break;
              v6 = *((uint16_t *)v4 + 12);
              v9 = *(uint32_t *)v4;
            }
          }
        }
      }
      v19 = v26-- == 1;
      v4 += 32;
    }
    while ( !v19 );
    v3 = self;
  }
  v20 = v3;
  result = a3;
  v22 = (int *)((char *)v20 + 64);
  v27 = 1;
  if ( a3 > 0 )
  {
    do
    {
      result = *((uint32_t *)self + 3 * (v27 == 4) + 48);
      v23 = v22[4];
      v29[0] = result;
      if ( v23 != 0 )
      {
        for ( i = 0; i != a3; ++i )
        {
          v25 = v22[7];
          v22[7] = v25 + 1;
          result = hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_ddc0b8::sortBranch_hkpTreeBroadPhaseInterna_1d0a95(
                     v22,
                     v25,
                     v29,
                     0xFFFF);
        }
      }
      ++v27;
      v22 += 8;
    }
    while ( v27 != 5 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::updateUserObjects  (binary VA: 0x17d2d50)
// Original: hkpTreeBroadPhase::updateUserObjects
// ----------------------------------------------------------------------------
const hkVector4f::Self * hkpTreeBroadPhase::updateUserObjects(hkpTreeBroadPhase::Self *self, const hkVector4f::Self *a2, const hkpBroadPhaseHandle *const *a3, const hkAabb::Self *a4, const hkVector4f::Self *a5)
{
  const hkVector4f::Self *result;
  float v6; // xmm1_4
  float *v7;
  float *v8;
  bool v9;
  char v10;
  char v11;
  float v12; // xmm4_4
  char v13;
  bool v14;
  char v15;
  char v16;
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm5_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  int v24;
  char v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  unsigned int v29;
  __m128i v30;
  unsigned int v31;
  __m128i v32;
  unsigned int v33;
  __m128 v34;
  __m128 v35;
  unsigned int v36;
  __m128i v37;
  unsigned int v38;
  __m128i v39;
  unsigned int v40;
  __m128 v41;
  __m128 v42;
  __m128 v43;
  __m128 v44;
  float *v45;
  float *v46;
  float v47; // xmm0_4
  bool v48;
  char v49;
  char v50;
  uint8_t v51;
  char v52;
  bool v53;
  char v54;
  char v55;
  int v56;
  char v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef const hkVector4f::Self *_g4_t_v63;
  typedef unsigned int _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef char _g4_t_v69;
  typedef uint8_t _g4_t_v70;
  typedef float _g4_t_v71;
  typedef const hkVector4f::Self *_g4_t_v72;
  typedef const hkVector4f::Self *_g4_t_v73;
  typedef char _g4_t_v74;
  typedef float _g4_t_v75[4];
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef __m128 _g4_t_v84[2];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v58)) > _g4_s0 ? (8u + sizeof(_g4_t_v58)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v59)) > _g4_s1 ? (12u + sizeof(_g4_t_v59)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v60)) > _g4_s2 ? (16u + sizeof(_g4_t_v60)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v61)) > _g4_s3 ? (20u + sizeof(_g4_t_v61)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v62)) > _g4_s4 ? (20u + sizeof(_g4_t_v62)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v63)) > _g4_s5 ? (24u + sizeof(_g4_t_v63)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v64)) > _g4_s6 ? (28u + sizeof(_g4_t_v64)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v65)) > _g4_s7 ? (28u + sizeof(_g4_t_v65)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v66)) > _g4_s8 ? (32u + sizeof(_g4_t_v66)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v67)) > _g4_s9 ? (36u + sizeof(_g4_t_v67)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v68)) > _g4_s10 ? (36u + sizeof(_g4_t_v68)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v69)) > _g4_s11 ? (40u + sizeof(_g4_t_v69)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v70)) > _g4_s12 ? (40u + sizeof(_g4_t_v70)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v71)) > _g4_s13 ? (40u + sizeof(_g4_t_v71)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v72)) > _g4_s14 ? (40u + sizeof(_g4_t_v72)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v73)) > _g4_s15 ? (44u + sizeof(_g4_t_v73)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v74)) > _g4_s16 ? (44u + sizeof(_g4_t_v74)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v75)) > _g4_s17 ? (48u + sizeof(_g4_t_v75)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v76)) > _g4_s18 ? (64u + sizeof(_g4_t_v76)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v77)) > _g4_s19 ? (68u + sizeof(_g4_t_v77)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v78)) > _g4_s20 ? (72u + sizeof(_g4_t_v78)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v79)) > _g4_s21 ? (76u + sizeof(_g4_t_v79)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v80)) > _g4_s22 ? (80u + sizeof(_g4_t_v80)) : _g4_s22,
    _g4_s24 = (84u + sizeof(_g4_t_v81)) > _g4_s23 ? (84u + sizeof(_g4_t_v81)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v82)) > _g4_s24 ? (88u + sizeof(_g4_t_v82)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v83)) > _g4_s25 ? (92u + sizeof(_g4_t_v83)) : _g4_s25,
    _g4_s27 = (96u + sizeof(_g4_t_v84)) > _g4_s26 ? (96u + sizeof(_g4_t_v84)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 16u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 20u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 20u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 24u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 28u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 28u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 32u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 36u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 36u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 40u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 40u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 40u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 40u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 44u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 44u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 48u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 64u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 68u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 72u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 76u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 80u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 84u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 88u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 92u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 96u);

  result = a5;
  v6 = *((float *)self + 56);
  v59 = v6;
  if ( a5 != nullptr )
  {
    v7 = (float *)a4;
    v63 = a5;
    v73 = nullptr;
    v58 = *((float *)self + 58) * *((float *)self + 63);
    if ( (int)(uintptr_t)(a2) > 0 )
    {
      do
      {
        v66 = *v7;
        v17 = v7[1];
        v18 = v7[2];
        v19 = v7[3];
        v20 = v7[4];
        v21 = v7[5];
        v22 = v7[6];
        v23 = v7[7];
        v24 = *((uint32_t *)self + 51) + 8 * *(uint32_t *)a3[(uint32_t)(uintptr_t)(v73)];
        v25 = ((*(uint8_t *)(v24 + 7) >> 1) + 1) & 0x7F;
        *(uint8_t *)(v24 + 7) = (2 * v25) | *(uint8_t *)(v24 + 7) & 1;
        if ( v25 != 0 )
        {
          v8 = (float *)(*((uint32_t *)self + 40) + 32 * *(uint16_t *)(v24 + 4));
          v9 = v8[1] > v17;
          v10 = 2 * v9 + 4;
          v11 = 2 * v9;
          v12 = v8[3];
          if ( v8[2] > v18 )
            v11 = v10;
          v69 = v11;
          v13 = 8 * (v12 > v19);
          v70 = (v20 > v8[4] || *v8 > v66) | v69;
          if ( v21 > v8[5] )
            v13 = 8 * (v12 > v19) + 2;
          v14 = v22 > v8[6];
          v15 = 4 * v14 + 8;
          v16 = 4 * v14;
          if ( v23 <= 0.0 )
            v15 = v16;
          if ( (((uint8_t)(v13 | v15) | v70) & 7) != 0 )
          {
            v61 = v23;
            v60 = v18;
            v67 = *(float *)v63 * v58;
            *(float *)&v64 = *((float *)v63 + 1) * v58;
g4_m128_raw(v26) = *((unsigned int *)v63 + 2);
            *(float *)g4_m128_ptr<int32_t>(v26) = *(float *)g4_m128_ptr<int32_t>(v26) * v58;
            v27 = v26;
g4_m128_raw(v28) = LODWORD(v66);
            *(float *)g4_m128_ptr<int32_t>(v28) = v66 + v67;
            v29 = _mm_cvtsi128_si32(v28);
            v71 = *(float *)&v64 + v17;
            v30 = v27;
            *(float *)g4_m128_ptr<int32_t>(v30) = *(float *)g4_m128_ptr<int32_t>(v27) + v18;
            v31 = _mm_cvtsi128_si32(v30);
g4_m128_raw(v32) = LODWORD(v59);
            *(float *)g4_m128_ptr<int32_t>(v32) = v59 + v19;
            v33 = _mm_cvtsi128_si32(v32);
            v68 = v67 + v20;
g4_m128_raw(v34) = v64;
            v65 = *(float *)g4_m128_ptr<int32_t>(v27) + v22;
            *(float *)g4_m128_ptr<int32_t>(v27) = v61;
g4_m128_lane<float>(v34, 0) = fmaxf(g4_m128_lane<float>(v34, 0) + v21, v21);
            v62 = v59 + v61;
g4_m128_raw(v35) = (g4_int128_t)_mm_cvtsi32_si128(v29);
g4_m128_lane<float>(v35, 0) = fminf(g4_m128_lane<float>(v35, 0), v66);
            v36 = _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v35)));
g4_m128_lane<float>(v35, 0) = fminf(v71, v17);
            v37 = _mm_cvtsi32_si128(v31);
            *(float *)g4_m128_ptr<int32_t>(v37) = fminf(*(float *)g4_m128_ptr<int32_t>(v37), v60);
            v38 = _mm_cvtsi128_si32(v37);
            v39 = _mm_cvtsi32_si128(v33);
            *(float *)g4_m128_ptr<int32_t>(v39) = fminf(*(float *)g4_m128_ptr<int32_t>(v39), v19);
            v40 = _mm_cvtsi128_si32(v39);
g4_m128_raw(v41) = LODWORD(v68);
g4_m128_lane<float>(v41, 0) = fmaxf(v68, v20);
g4_m128_raw(v42) = LODWORD(v65);
g4_m128_lane<float>(v42, 0) = fmaxf(v65, v22);
g4_m128_raw(v43) = LODWORD(v62);
g4_m128_lane<float>(v43, 0) = fmaxf(v62, *(float *)g4_m128_ptr<int32_t>(v27));
g4_m128_lane<uint64_t>(v44, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(v36)),g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v35), 0)), 0);
g4_m128_lane<uint64_t>(v44, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(v38)), g4_m128_from<__m128>(_mm_cvtsi32_si128(v40))), 0);
            v84[0] = v44;
g4_m128_lane<uint64_t>(v35, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v41, v34), 0);
g4_m128_lane<uint64_t>(v35, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v42, v43), 0);
            v84[1] = v35;
            hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_ddc0b8::kineticUpdate(
              (hkpTreeBroadPhase::Self *)((char *)self + 160),
              *(uint16_t *)(v24 + 4),
              (const hkAabb::Self *)v84);
          }
        }
        else
        {
          hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_ddc0b8::update(
            (hkpTreeBroadPhase::Self *)((char *)self + 160),
            *(uint16_t *)(v24 + 4),
            (const hkAabb::Self *)v7);
        }
        v73 = (const hkVector4f::Self *)((char *)v73 + 1);
        v7 += 8;
        v63 = (const hkVector4f::Self *)((char *)v63 + 16);
        result = v73;
      }
      while ( v73 != a2 );
    }
  }
  else
  {
    memset(v75, 0, 12);
    v75[3] = v6;
    v45 = (float *)a4;
    v72 = nullptr;
    if ( (int)(uintptr_t)(a2) > 0 )
    {
      do
      {
        v56 = *((uint32_t *)self + 51) + 8 * *(uint32_t *)a3[(uint32_t)(uintptr_t)(v72)];
        v76 = *v45;
        v77 = v45[1];
        v78 = v45[2];
        v79 = v45[3];
        v80 = v45[4];
        v81 = v45[5];
        v82 = v45[6];
        v83 = v45[7];
        v57 = ((*(uint8_t *)(v56 + 7) >> 1) + 1) & 0x7F;
        *(uint8_t *)(v56 + 7) = (2 * v57) | *(uint8_t *)(v56 + 7) & 1;
        if ( v57 != 0 )
        {
          v46 = (float *)(*((uint32_t *)self + 40) + 32 * *(uint16_t *)(v56 + 4));
          v47 = v46[3];
          v48 = v46[1] > v77;
          v49 = v48 + v48 + 4;
          v50 = 2 * v48;
          if ( v46[2] <= v78 )
            v49 = v50;
          v51 = (v80 > v46[4] || *v46 > v76) | v49;
          v52 = 8 * (v47 > v79) + 2;
          if ( v81 <= v46[5] )
            v52 = 8 * (v47 > v79);
          v74 = v52;
          v53 = v82 > v46[6];
          v54 = 4 * v53 + 8;
          v55 = 4 * v53;
          if ( v83 <= 0.0 )
            v54 = v55;
          if ( (((uint8_t)(v74 | v54) | v51) & 7) != 0 )
          {
            hkAabbUtil::expandAabbByMotion((hkAabbUtil::Self *)&v76, (const hkAabb::Self *)v75, v84);
            hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_ddc0b8::kineticUpdate(
              (hkpTreeBroadPhase::Self *)((char *)self + 160),
              *(uint16_t *)(v56 + 4),
              (const hkAabb::Self *)v84);
          }
        }
        else
        {
          hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_ddc0b8::update(
            (hkpTreeBroadPhase::Self *)((char *)self + 160),
            *(uint16_t *)(v56 + 4),
            (const hkAabb::Self *)v45);
        }
        v72 = (const hkVector4f::Self *)((char *)v72 + 1);
        v45 += 8;
        result = v72;
      }
      while ( v72 != a2 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::updateHandles  (binary VA: 0x17d32a0)
// Original: hkpTreeBroadPhase::updateHandles
// ----------------------------------------------------------------------------
float * hkpTreeBroadPhase::updateHandles(hkpTreeBroadPhase::Self *self, const hkpBroadPhaseHandle *const *a2, const hkAabb::Self *a3, int a4)
{
  float *result;
  int v5;
  float *v6;
  char v7;
  float v8; // xmm0_4
  bool v9;
  char v10;
  float v11; // xmm2_4
  char v12;
  char v13;
  bool v14;
  char v15;
  char v16;
  __m128i v17;
  __m128 v18;
  __m128 v19;
  __m128 v20;
  int v21;
  int v22;
  __m128 v23;
  __m128 v24;
  float v25; // xmm6_4
  unsigned int v26;
  __m128 v27;
  __m128i v28;
  __m128 v29;
  __m128 v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef char _g4_t_v33;
  typedef uint8_t _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float *_g4_t_v40;
  typedef char _g4_t_v41;
  typedef uint8_t _g4_t_v42;
  typedef float *_g4_t_v43;
  typedef hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16::Self> *_g4_t_v44;
  typedef __m128i _g4_t_v45[2];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v31)) > _g4_s0 ? (4u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v32)) > _g4_s1 ? (8u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v33)) > _g4_s2 ? (12u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v34)) > _g4_s3 ? (12u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v35)) > _g4_s4 ? (16u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v36)) > _g4_s5 ? (20u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v37)) > _g4_s6 ? (32u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v38)) > _g4_s7 ? (36u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v39)) > _g4_s8 ? (40u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v40)) > _g4_s9 ? (48u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v41)) > _g4_s10 ? (52u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v42)) > _g4_s11 ? (56u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v43)) > _g4_s12 ? (56u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v44)) > _g4_s13 ? (60u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v45)) > _g4_s14 ? (64u + sizeof(_g4_t_v45)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 40u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 56u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 60u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 64u);

  result = (float *)self;
  v35 = *((float *)self + 56);
  v31 = *((float *)self + 63);
  if ( a4 > 0 )
  {
    v5 = 0;
    v40 = (float *)((char *)a3 + 28);
    v6 = (float *)a3;
    do
    {
      while ( 1 )
      {
        result = (float *)(*((uint32_t *)self + 48) + 8 * *(uint32_t *)a2[v5]);
        v44 = (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16::Self> *)((hkpTreeBroadPhase::Self *)((char *)self + (*((uint16_t *)result + 3) & 0x1E0) + 32));
        v42 = *((uint8_t *)result + 7);
        v7 = ((v42 >> 1) + 1) & 0x7F;
        *((uint8_t *)result + 7) = (2 * v7) | v42 & 1;
        if ( v7 != 0 && (*((uint16_t *)result + 3) & 0x1E0) == 0x60 )
          break;
        result = (float *)hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_ddc0b8::update(
                            v44,
                            *((uint16_t *)result + 2),
                            (const hkAabb::Self *)v6);
LABEL_4:
        ++v5;
        v6 += 8;
        v40 += 8;
        if ( v5 == a4 )
          return result;
      }
      v32 = *v6;
      v39 = v6[1];
      v43 = (float *)(*(uint32_t *)v44 + 32 * *((uint16_t *)result + 2));
      v8 = v43[3];
      v9 = v43[1] > v39;
      v10 = 2 * v9 + 4;
      v11 = v6[3];
      v12 = 2 * v9;
      v38 = v6[2];
      if ( v43[2] > v38 )
        v12 = v10;
      v33 = v12;
      v13 = 8 * (v8 > v11) + 2;
      v37 = v6[3];
      v34 = (*(v40 - 3) > v43[4] || *v43 > *v6) | v33;
      if ( *(v40 - 2) <= v43[5] )
        v13 = 8 * (v8 > v11);
      v41 = v13;
      v14 = *(v40 - 1) > v43[6];
      v15 = 4 * v14 + 8;
      v16 = 4 * v14;
      if ( *v40 <= 0.0 )
        v15 = v16;
      v36 = *(v40 - 1);
      if ( (((uint8_t)(v41 | v15) | v34) & 7) == 0 )
        goto LABEL_4;
      ++v5;
      v6 += 8;
g4_m128_raw(v17) = LODWORD(v39);
g4_m128_raw(v18) = LODWORD(v38);
g4_m128_raw(v19) = LODWORD(v35);
g4_m128_raw(v20) = LODWORD(v32);
      v21 = *(uint32_t *)result + *(char *)(*(uint32_t *)result + 5);
g4_m128_lane<float>(v19, 0) = fminf(v35 + v37, v37);
      v22 = v21 + *(char *)(v21 + 16);
g4_m128_raw(v23) = *(unsigned int *)(v22 + 432);
g4_m128_raw(v24) = *(unsigned int *)(v22 + 436);
g4_m128_lane<float>(v23, 0) =g4_m128_lane<float>(v23, 0) * v31;
g4_m128_lane<float>(v24, 0) =g4_m128_lane<float>(v24, 0) * v31;
      v25 = v31 * *(float *)(v22 + 440);
      *(float *)g4_m128_ptr<int32_t>(v17) = v39 +g4_m128_lane<float>(v24, 0);
g4_m128_lane<float>(v18, 0) = v38 + v25;
g4_m128_lane<float>(v20, 0) = fminf(v32 +g4_m128_lane<float>(v23, 0), v32);
      v26 = _mm_cvtsi128_si32(v17);
      v27 = v18;
      v28 = _mm_cvtsi32_si128(v26);
g4_m128_raw(v29) = LODWORD(v36);
g4_m128_lane<float>(v29, 0) = v36 + v25;
g4_m128_raw(v30) = LODWORD(v35);
      *(float *)g4_m128_ptr<int32_t>(v28) = fminf(*(float *)g4_m128_ptr<int32_t>(v28), v39);
g4_m128_lane<float>(v27, 0) = fminf(g4_m128_lane<float>(v27, 0), v38);
g4_m128_lane<float>(v23, 0) = fmaxf(g4_m128_lane<float>(v23, 0) + *(v40 - 3), *(v40 - 3));
g4_m128_lane<float>(v29, 0) = fmaxf(g4_m128_lane<float>(v29, 0), v36);
g4_m128_lane<float>(v24, 0) = fmaxf(g4_m128_lane<float>(v24, 0) + *(v40 - 2), *(v40 - 2));
g4_m128_lane<float>(v30, 0) = fmaxf(v35 + *v40, *v40);
g4_m128_lane<uint64_t>(v23, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v23, v24), 0);
g4_m128_lane<int64_t>(v28, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v20, g4_m128_from<__m128>(_mm_cvtsi32_si128(_mm_cvtsi128_si32(v28)))), 0);
g4_m128_lane<int64_t>(v28, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v27, v19), 0);
      v45[0] = v28;
g4_m128_lane<uint64_t>(v23, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v29, v30), 0);
      v45[1] =g4_m128_raw(G4_BITCAST<__m128i>(v23));
      result = hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_ddc0b8::kineticUpdate(
                 v44,
                 *((uint16_t *)result + 2),
                 (const hkAabb::Self *)v45);
      v40 += 8;
    }
    while ( v5 != a4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::shiftAllObjects  (binary VA: 0x17d35f0)
// Original: hkpTreeBroadPhase::shiftAllObjects
// ----------------------------------------------------------------------------
uint16_t * hkpTreeBroadPhase::shiftAllObjects(uint32_t *a1, int a2, float *a3, int a4)
{
  uint16_t *result;
  int v5;
  int v6;
  int v7;
  float *v8;
  float v9; // xmm0_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  typedef hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16::Self> *_g4_t_v14;
  typedef float _g4_t_v15;
  typedef float _g4_t_v16;
  typedef float _g4_t_v17;
  typedef float _g4_t_v18;
  typedef float _g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v16)) > _g4_s2 ? (20u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v17)) > _g4_s3 ? (24u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v18)) > _g4_s4 ? (28u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v19)) > _g4_s5 ? (32u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v20)) > _g4_s6 ? (36u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v21)) > _g4_s7 ? (40u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v22)) > _g4_s8 ? (44u + sizeof(_g4_t_v22)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);

  result = (uint16_t *)a1[76];
  if ( result != nullptr )
  {
    result = (uint16_t *)G4_VCALL<int>(result, 96, a2, a3, a4);
    v5 = a1[49];
    if ( v5 > 0 )
    {
      v6 = 0;
      do
      {
        while ( 1 )
        {
          result = (uint16_t *)(a1[48] + 8 * v6);
          v7 = *((uint32_t *)result + 1) & 0x1FFFFF;
          if ( v7 != 0 )
            break;
          if ( ++v6 >= v5 )
            return result;
        }
        ++v6;
        v14 = (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16::Self> *)((char *)a1 + (result[3] & 0x1E0) + 32);
        v8 = (float *)(*(uint32_t *)v14 + 32 * (uint16_t)v7);
        v19 = v8[4];
        v20 = v8[5];
        v9 = v8[6];
        v22 = 0.0;
        v21 = v9;
        v15 = *v8;
        v16 = v8[1];
        v17 = v8[2];
        v10 = *a3;
        v18 = v8[3];
        v19 = v19 + v10;
        v11 = a3[1];
        v15 = v10 + v15;
        v20 = v20 + v11;
        v12 = a3[2];
        v16 = v11 + v16;
        v21 = v9 + v12;
        v13 = a3[3];
        v17 = v12 + v17;
        v22 = v13 + 0.0;
        v18 = v13 + v18;
        result = (uint16_t *)hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_ddc0b8::update(
                                       v14,
                                       result[2],
                                       (const hkAabb::Self *)&v15);
        v5 = a1[49];
      }
      while ( v6 < v5 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::addUserObjects  (binary VA: 0x17d3770)
// Original: hkpTreeBroadPhase::addUserObjects
// ----------------------------------------------------------------------------
const hkAabb::Self * hkpTreeBroadPhase::addUserObjects(hkpTreeBroadPhase::Self *self, int a2, hkpBroadPhaseHandle *const *a3, const hkAabb::Self *a4)
{
  hkpTreeBroadPhase::Self *v4;
  const hkAabb::Self *result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint16_t v13; // di
  int v14;
  float *v15;
  int v16;
  int v17;
  int v18;
  float v19; // xmm3_4
  float v20; // xmm5_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm5_4
  float v29; // xmm5_4
  float v30; // xmm4_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm0_4
  float *v34;
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37; // xmm4_4
  float v38; // xmm7_4
  typedef int _g4_t_v39;
  typedef hkMemoryAllocator::Self *_g4_t_v40;
  typedef char *_g4_t_v41;
  typedef float _g4_t_v42;
  typedef hkpBroadPhaseHandle *const *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef int _g4_t_v53;
  typedef const hkAabb::Self *_g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef uint16_t _g4_t_v68;
  typedef char _g4_t_v69[4];
  typedef float *_g4_t_v70;
  typedef float *_g4_t_v71;
  typedef hkpTreeBroadPhase::Self **_g4_t_v72;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v39)) > _g4_s0 ? (12u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v40)) > _g4_s1 ? (16u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v41)) > _g4_s2 ? (20u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v42)) > _g4_s3 ? (24u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v43)) > _g4_s4 ? (28u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v44)) > _g4_s5 ? (32u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v45)) > _g4_s6 ? (36u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v46)) > _g4_s7 ? (40u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v47)) > _g4_s8 ? (52u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v48)) > _g4_s9 ? (64u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v49)) > _g4_s10 ? (68u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v50)) > _g4_s11 ? (72u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v51)) > _g4_s12 ? (76u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v52)) > _g4_s13 ? (80u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v53)) > _g4_s14 ? (88u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v54)) > _g4_s15 ? (92u + sizeof(_g4_t_v54)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v55)) > _g4_s16 ? (96u + sizeof(_g4_t_v55)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v56)) > _g4_s17 ? (100u + sizeof(_g4_t_v56)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v57)) > _g4_s18 ? (104u + sizeof(_g4_t_v57)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v58)) > _g4_s19 ? (108u + sizeof(_g4_t_v58)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v59)) > _g4_s20 ? (112u + sizeof(_g4_t_v59)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v60)) > _g4_s21 ? (116u + sizeof(_g4_t_v60)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v61)) > _g4_s22 ? (120u + sizeof(_g4_t_v61)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v62)) > _g4_s23 ? (128u + sizeof(_g4_t_v62)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v63)) > _g4_s24 ? (132u + sizeof(_g4_t_v63)) : _g4_s24,
    _g4_s26 = (136u + sizeof(_g4_t_v64)) > _g4_s25 ? (136u + sizeof(_g4_t_v64)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v65)) > _g4_s26 ? (140u + sizeof(_g4_t_v65)) : _g4_s26,
    _g4_s28 = (144u + sizeof(_g4_t_v66)) > _g4_s27 ? (144u + sizeof(_g4_t_v66)) : _g4_s27,
    _g4_s29 = (148u + sizeof(_g4_t_v67)) > _g4_s28 ? (148u + sizeof(_g4_t_v67)) : _g4_s28,
    _g4_s30 = (154u + sizeof(_g4_t_v68)) > _g4_s29 ? (154u + sizeof(_g4_t_v68)) : _g4_s29,
    _g4_s31 = (156u + sizeof(_g4_t_v69)) > _g4_s30 ? (156u + sizeof(_g4_t_v69)) : _g4_s30,
    _g4_s32 = (160u + sizeof(_g4_t_v70)) > _g4_s31 ? (160u + sizeof(_g4_t_v70)) : _g4_s31,
    _g4_s33 = (164u + sizeof(_g4_t_v71)) > _g4_s32 ? (164u + sizeof(_g4_t_v71)) : _g4_s32,
    _g4_s34 = (184u + sizeof(_g4_t_v72)) > _g4_s33 ? (184u + sizeof(_g4_t_v72)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 52u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 64u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 68u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 72u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 76u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 80u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 88u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 92u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 96u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 100u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 104u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 108u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 112u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 116u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 120u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 128u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 132u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 136u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 140u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 144u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 148u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 154u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 156u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 160u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 164u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 184u);

  v72 = &self;
  v44 = a2;
  v43 = a3;
  v4 = self;
  result = a4;
  if ( a2 > 0 )
  {
    v54 = a4;
    v55 = (uint32_t *)((char *)a4 + 16);
    v40 = (hkMemoryAllocator::Self *)((hkpTreeBroadPhase::Self *)((char *)self + 204));
    v67 = 0;
    v41 = (char *)self + 160;
    do
    {
      v66 = *((uint32_t *)v4 + 52);
      v6 = v66;
      if ( v66 == (*((uint32_t *)v4 + 53) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v40, 8, v39);
        v6 = *((uint32_t *)v4 + 52);
      }
      v7 = *((uint32_t *)v4 + 51) + 8 * v6;
      v8 = *(uint32_t *)(v7 + 4);
      *(uint32_t *)v7 = 0;
      v8 &= 0xFFE00000;
      *(uint32_t *)(v7 + 4) = v8;
      *(uint16_t *)(v7 + 6) = HIWORD(v8) & 0xFE1F;
      *(uint8_t *)(v7 + 7) = 0;
      v9 = *((uint32_t *)v4 + 52);
      v10 = *((uint32_t *)v4 + 51);
      *((uint32_t *)v4 + 52) = v9 + 1;
      v53 = v10 + 8 * v9;
      *(hkpBroadPhaseHandle **)v53 = v43[v67];
      LOWORD(v9) = *(uint16_t *)(v53 + 6) & 0xFE1F;
      LOBYTE(v9) = v9 | 0x80;
      *(uint16_t *)(v53 + 6) = v9;
      *(uint8_t *)(v53 + 7) = 2 * v66;
      v68 = *((uint16_t *)v4 + 86);
      if ( v68 == 0 )
      {
        hkcdDynamicTree::DynamicStorage_0_hkcdDynamicTree_Aniso_52f605::reserveNodes(
          (hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::Codec32::Self> *)v69,
          (int)(uintptr_t)(v41),
          1);
        v68 = *((uint16_t *)v4 + 86);
      }
      v45 = 32 * v68;
      v11 = *((uint32_t *)v4 + 40) + v45;
      *((uint16_t *)v4 + 86) = *(uint16_t *)v11;
      *(uint16_t *)(v11 + 30) = v66;
      *(uint16_t *)(v11 + 28) = 0;
      *(uint32_t *)v11 = *(uint32_t *)v54;
      *(uint32_t *)(v11 + 4) = *((uint32_t *)v54 + 1);
      *(uint32_t *)(v11 + 8) = *((uint32_t *)v54 + 2);
      *(uint32_t *)(v11 + 16) = *v55;
      *(uint32_t *)(v11 + 20) = v55[1];
      *(uint32_t *)(v11 + 24) = v55[2];
      v12 = *((uint32_t *)v4 + 40);
      v13 = *((uint16_t *)v4 + 92);
      v59 = *(float *)(v12 + v45 + 16);
      v58 = *(float *)(v12 + v45 + 20);
      v57 = *(float *)(v12 + v45 + 24);
      v60 = *(float *)(v12 + v45);
      v61 = *(float *)(v12 + v45 + 4);
      v56 = *(float *)(v12 + v45 + 8);
      if ( v13 != 0 )
      {
        v14 = *((uint16_t *)v4 + 86);
        if ( (uint16_t)v14 == 0 )
        {
          hkcdDynamicTree::DynamicStorage_0_hkcdDynamicTree_Aniso_52f605::reserveNodes(
            (hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::Codec32::Self> *)v69,
            (int)(uintptr_t)(v41),
            1);
          v12 = *((uint32_t *)v4 + 40);
          v14 = *((uint16_t *)v4 + 86);
        }
        v65 = v12;
        v46 = v12 + 32 * v14;
        *((uint16_t *)v4 + 86) = *(uint16_t *)v46;
        v15 = (float *)(32 * v13 + v12);
        v16 = *((uint16_t *)v15 + 14);
        if ( (uint16_t)v16 != 0 )
        {
          v24 = v56;
          v25 = v61;
          v26 = v57;
          v27 = v59;
          v28 = v60;
          while ( 1 )
          {
            v29 = fminf(v28, *v15);
            v30 = fminf(v25, v15[1]);
            v31 = fmaxf(v27, v15[4]);
            v32 = fmaxf(v58, v15[5]);
            v33 = fmaxf(v26, v15[6]);
            v15[2] = fminf(v24, v15[2]);
            v34 = (float *)(v12 + 32 * v16);
            v15[4] = v31;
            v70 = v34;
            v15[5] = v32;
            *v15 = v29;
            v15[1] = v30;
            v15[6] = v33;
            v35 = v34[4];
            v36 = v34[6];
            v71 = (float *)(32 * *((uint16_t *)v15 + 15) + v12);
            v63 = v71[6];
            v62 = v71[1];
            v37 = v34[5];
            v64 = v34[2];
            v38 = v71[4];
            v47 = v34[1];
            v42 = v57 - v56;
            v48 = v58 - v61;
            v49 = v59 - v60;
            v50 = v57 + v56;
            v51 = v61 + v58;
            v52 = v60 + v59;
            v15 = (&v70)[(float)((float)((float)((float)(v36 - v64) + v42)
                                       + (float)((float)((float)(v35 - *v34) + v49) + (float)((float)(v37 - v47) + v48)))
                               * (float)((float)((float)((float)((float)(*v34 + v35) - v52)
                                                       * (float)((float)(*v34 + v35) - v52))
                                               + (float)((float)((float)(v47 + v37) - v51)
                                                       * (float)((float)(v47 + v37) - v51)))
                                       + (float)((float)((float)(v36 + v64) - v50) * (float)((float)(v36 + v64) - v50)))) > (float)((float)((float)((float)(v63 - v71[2]) + v42) + (float)((float)((float)(v71[5] - v62) + v48) + (float)((float)(v38 - *v71) + v49))) * (float)((float)((float)((float)((float)(*v71 + v38) - v52) * (float)((float)(*v71 + v38) - v52)) + (float)((float)((float)(v62 + v71[5]) - v51) * (float)((float)(v62 + v71[5]) - v51))) + (float)((float)((float)(v63 + v71[2]) - v50) * (float)((float)(v63 + v71[2]) - v50))))];
            v16 = *((uint16_t *)v15 + 14);
            if ( (uint16_t)v16 == 0 )
              break;
            v28 = v60;
            v12 = *((uint32_t *)v4 + 40);
            v25 = v61;
            v24 = v56;
            v27 = v59;
            v26 = v57;
          }
          v65 = *((uint32_t *)v4 + 40);
        }
        v17 = (v46 - v65) >> 5;
        if ( *((uint16_t *)v15 + 6) != 0 )
          *(uint16_t *)(v65
                   + 32 * (uint16_t)*((uint32_t *)v15 + 3)
                   + 2
                   * (*(uint16_t *)(v65 + 32 * (uint16_t)*((uint32_t *)v15 + 3) + 30) == (uint16_t)(((int)(uintptr_t)(v15) - v65) >> 5))
                   + 28) = v17;
        else
          *((uint16_t *)v4 + 92) = v17;
        *(uint32_t *)(v46 + 12) = *((uint16_t *)v15 + 6) | 0x3F000000;
        *(uint16_t *)(v46 + 28) = ((int)(uintptr_t)(v15) - *((uint32_t *)v4 + 40)) >> 5;
        *(uint16_t *)(v46 + 30) = v68;
        v18 = (uint16_t)v17 | 0x3F000000;
        *((uint32_t *)v15 + 3) = v18;
        *(uint32_t *)(*((uint32_t *)v4 + 40) + v45 + 12) = v18;
        v19 = fminf(v15[1], v61);
        v20 = fminf(v15[2], v56);
        v21 = fmaxf(v15[4], v59);
        v22 = fmaxf(v15[5], v58);
        v23 = fmaxf(v15[6], v57);
        *(float *)v46 = fminf(*v15, v60);
        *(float *)(v46 + 4) = v19;
        *(float *)(v46 + 8) = v20;
        *(float *)(v46 + 16) = v21;
        *(float *)(v46 + 20) = v22;
        *(float *)(v46 + 24) = v23;
      }
      else
      {
        *((uint16_t *)v4 + 92) = v68;
        *(uint32_t *)(v12 + v45 + 12) = 1056964608;
      }
      ++*((uint32_t *)v4 + 44);
      *(uint32_t *)(v53 + 4) = v68 | *(uint32_t *)(v53 + 4) & 0xFFE00000;
      ++v67;
      v54 = (const hkAabb::Self *)((char *)v54 + 32);
      v55 += 8;
      **(uint32_t **)v53 = v66 | 0x80000000;
      result = (const hkAabb::Self *)v44;
    }
    while ( v67 != v44 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::removeHandlesStandalone  (binary VA: 0x17d4350)
// Original: hkpTreeBroadPhase::removeHandlesStandalone
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::removeHandlesStandalone(int *a1, int a2, int a3, int a4)
{
  int result;
  int v5;
  int *v6;
  int v7; // xmm6_4
  int v8; // xmm0_4
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  int *v13;
  int v14;
  hkLifoAllocator::Self *v15;
  char *v16;
  int v17;
  signed int v18;
  hkLifoAllocator::Self *v19;
  typedef int *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_i;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint32_t _g4_t_v31[4];
  typedef char *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef char *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint32_t _g4_t_v41[15];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (4u + sizeof(_g4_t_v20)) > _g4_s0 ? (4u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v21)) > _g4_s1 ? (12u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v22)) > _g4_s2 ? (16u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v23)) > _g4_s3 ? (20u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v24)) > _g4_s4 ? (32u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v25)) > _g4_s5 ? (40u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v26)) > _g4_s6 ? (44u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_i)) > _g4_s7 ? (52u + sizeof(_g4_t_i)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_address)) > _g4_s8 ? (56u + sizeof(_g4_t_address)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v29)) > _g4_s9 ? (60u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v30)) > _g4_s10 ? (60u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v31)) > _g4_s11 ? (64u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v32)) > _g4_s12 ? (80u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v33)) > _g4_s13 ? (84u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v34)) > _g4_s14 ? (88u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v35)) > _g4_s15 ? (92u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v36)) > _g4_s16 ? (96u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v37)) > _g4_s17 ? (112u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (116u + sizeof(_g4_t_v38)) > _g4_s18 ? (116u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (120u + sizeof(_g4_t_v39)) > _g4_s19 ? (120u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (124u + sizeof(_g4_t_v40)) > _g4_s20 ? (124u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (144u + sizeof(_g4_t_v41)) > _g4_s21 ? (144u + sizeof(_g4_t_v41)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 52u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 84u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 88u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 92u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 96u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 116u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 120u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 124u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 144u);

  result = a4;
  v31[0] = 0;
  v31[1] = a4;
  if ( a3 > 0 )
  {
    v20 = a1 + 8;
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    for ( i = 0; i != a3; result = i )
    {
      v24 = **(uint32_t **)(a2 + 4 * i);
      v21 = a1[48] + 8 * v24;
      v5 = (int)(uintptr_t)(v20) + (*(uint16_t *)(v21 + 6) & 0x1E0);
      v29 = *(uint32_t *)(v21 + 4) & 0x1FFFFF;
      v22 = 32 * *(uint16_t *)(v21 + 4);
      v6 = (int *)(*(uint32_t *)v5 + v22);
      v7 = v6[6];
      v26 = v6[4];
      v25 = v6[5];
      v37 = *v6;
      v38 = v6[1];
      v39 = v6[2];
      v40 = v6[3];
      v23 = a1[49] - 1;
      v41[4] = v26;
      v41[5] = v6[5];
      v8 = v6[6];
      v41[7] = 0;
      v41[6] = v8;
      v41[0] = *v6;
      v41[1] = v6[1];
      v41[2] = v6[2];
      v41[3] = v6[3];
      hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_ddc0b8::internalRemove(
        (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16::Self> *)v5,
        v29,
        (const hkAabb::Self *)v41);
      *(uint16_t *)(*(uint32_t *)v5 + v22) = *(uint16_t *)(v5 + 12);
      --*(uint32_t *)(v5 + 16);
      *(uint16_t *)(v5 + 12) = v29;
      **(uint32_t **)v21 = 0;
      v9 = a1[48];
      v10 = a1[49] - 1;
      a1[49] = v10;
      if ( v24 != v10 )
      {
        v11 = (uint32_t *)(v9 + 8 * v10);
        v12 = (uint32_t *)(8 * v24 + v9);
        *v12 = *v11;
        v12[1] = v11[1];
      }
      if ( v24 < v23 )
      {
        **(uint32_t **)v21 = v24;
        *(uint16_t *)(*(int *)((char *)v20 + (*(uint16_t *)(v21 + 6) & 0x1E0)) + 32 * *(uint16_t *)(v21 + 4) + 30) = v24;
      }
      v30 = 1;
      v13 = a1 + 16;
      v31[2] = *(uint32_t *)(a2 + 4 * i);
      do
      {
        v41[11] = 0;
        v36 = 64;
        v34 = 0x80000000;
        v32 = nullptr;
        v14 = a1[48];
        v33 = 0;
        v41[8] = v26;
        v31[0] = v14;
        v41[9] = v25;
        v41[10] = v7;
        v41[0] = (uint32_t)(uintptr_t)(v31);
        v41[4] = v37;
        v41[5] = v38;
        v41[6] = v39;
        v41[7] = v40;
        v15 = *address;
        v16 = *((char **)*address + 3);
        if ( *((int *)*address + 2) > 127 && (unsigned int)(uintptr_t)(v16 + 128) <= *((uint32_t *)v15 + 4) )
          *((uint32_t *)v15 + 3) = (uint32_t)(uintptr_t)(v16 + 128);
        else
          v16 = (char *)hkLifoAllocator::allocateFromNewSlab(v15, 128);
        v32 = v16;
        v35 = v16;
        v34 = -2147483584;
        hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_933b7a(
          v13,
          (hkMemoryAllocator::Self *)&v32,
          (int)(uintptr_t)(v41));
        v17 = 0;
        if ( v32 != v35 )
          v17 = v33;
        v33 = v17;
        v18 = (v36 + v36 + 127) & 0xFFFFFF80;
        v19 = *address;
        if ( v18 > *((uint32_t *)*address + 2) || *((char **)v19 + 3) != &v35[v18] || v35 == *((char **)v19 + 5) )
          hkLifoAllocator::slowBlockFree(v19, v35, (v36 + v36 + 127) & 0xFFFFFF80);
        else
          *((uint32_t *)v19 + 3) = (uint32_t)(uintptr_t)(v35);
        v33 = 0;
        if ( v34 >= 0 )
          (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v32,
            2 * (v34 & 0x3FFFFFFF));
        ++v30;
        v13 += 8;
      }
      while ( v30 != 4 );
      ++i;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::removeObject  (binary VA: 0x17d4750)
// Original: hkpTreeBroadPhase::removeObject
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::removeObject(hkpTreeBroadPhase::Self *a1, hkpBroadPhaseHandle *a2, int a3)
{
  if ( *((uint32_t *)a1 + 76) == 0 )
    return hkpTreeBroadPhase::removeHandlesStandalone((int *)a1, (int)(uintptr_t)(&a2), 1, a3);
  hkpTreeBroadPhase::removeHandles(a1, &a2, 1);
  (*(void (**)(uint32_t, hkpBroadPhaseHandle *, int))(**((uint32_t **)a1 + 76) + 40))(*((uint32_t *)a1 + 76), a2, a3);
  return hkpTreeBroadPhase::indexAndCompact(a1, 1);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::removeObjectBatch  (binary VA: 0x17d47f0)
// Original: hkpTreeBroadPhase::removeObjectBatch
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::removeObjectBatch(hkpTreeBroadPhase::Self *a1, int *a2, int a3)
{
  if ( *((uint32_t *)a1 + 76) == 0 )
    return hkpTreeBroadPhase::removeHandlesStandalone((int *)a1, *a2, a2[1], a3);
  hkpTreeBroadPhase::removeHandles(a1, (const hkpBroadPhaseHandle *const *)*a2, a2[1]);
  (*(void (**)(uint32_t, int *, int))(**((uint32_t **)a1 + 76) + 44))(*((uint32_t *)a1 + 76), a2, a3);
  return hkpTreeBroadPhase::indexAndCompact(a1, a2[1]);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::querySingleAabb  (binary VA: 0x17d5e20)
// Original: hkpTreeBroadPhase::querySingleAabb
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::querySingleAabb(int a1, uint32_t *a2, int a3, int a4)
{
  hkLifoAllocator::Self *v4;
  char *v5;
  int v6;
  signed int v7;
  hkLifoAllocator::Self *v8;
  int result;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef int *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[4];
  typedef char *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef char *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t _g4_t_v19[15];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_address)) > _g4_s0 ? (4u + sizeof(_g4_t_address)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v13)) > _g4_s3 ? (16u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v14)) > _g4_s4 ? (32u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v15)) > _g4_s5 ? (36u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v16)) > _g4_s6 ? (40u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v17)) > _g4_s7 ? (44u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v18)) > _g4_s8 ? (48u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v19)) > _g4_s9 ? (64u + sizeof(_g4_t_v19)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);

  v13[1] = a4;
  v13[2] = a3;
  address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v12 = 1;
  v11 = (int *)(a1 + 64);
  do
  {
    v18 = 64;
    v16 = 0x80000000;
    v14 = nullptr;
    v15 = 0;
    v13[0] = *(uint32_t *)(a1 + 12 * (v12 == 4) + 192);
    v19[0] = (uint32_t)(uintptr_t)(v13);
    v19[4] = *a2;
    v19[5] = a2[1];
    v19[6] = a2[2];
    v19[7] = a2[3];
    v19[8] = a2[4];
    v19[9] = a2[5];
    v19[10] = a2[6];
    v19[11] = a2[7];
    v4 = *address;
    v5 = *((char **)*address + 3);
    if ( *((int *)*address + 2) > 127 && (unsigned int)(uintptr_t)(v5 + 128) <= *((uint32_t *)v4 + 4) )
      *((uint32_t *)v4 + 3) = (uint32_t)(uintptr_t)(v5 + 128);
    else
      v5 = (char *)hkLifoAllocator::allocateFromNewSlab(v4, 128);
    v14 = v5;
    v17 = v5;
    v16 = -2147483584;
    hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_1ac094(
      v11,
      (hkMemoryAllocator::Self *)&v14,
      (int)(uintptr_t)(v19));
    v6 = 0;
    if ( v14 != v17 )
      v6 = v15;
    v15 = v6;
    v7 = (v18 + v18 + 127) & 0xFFFFFF80;
    v8 = *address;
    if ( v7 > *((uint32_t *)*address + 2) || *((char **)v8 + 3) != &v17[v7] || v17 == *((char **)v8 + 5) )
      hkLifoAllocator::slowBlockFree(v8, v17, (v18 + v18 + 127) & 0xFFFFFF80);
    else
      *((uint32_t *)v8 + 3) = (uint32_t)(uintptr_t)(v17);
    result = v16;
    v15 = 0;
    if ( v16 >= 0 )
      result = (*(int (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
                 (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                 v14,
                 2 * (v16 & 0x3FFFFFFF));
    ++v12;
    v11 += 8;
  }
  while ( v12 != 5 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::reQuerySingleObject  (binary VA: 0x17d6020)
// Original: hkpTreeBroadPhase::reQuerySingleObject
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::reQuerySingleObject(uint32_t *a1, int a2, int a3)
{
  int v3;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  v3 = a1[76];
  if ( v3 != 0 )
    return G4_VCALL<int>(v3, 84, a2, a3, v5, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v6[7]);
  G4_VCALL<void>(a1, 72, a2, v6, v5);
  return hkpTreeBroadPhase::querySingleAabb((int)(uintptr_t)(a1), v6, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::querySingleAabbWithCollector  (binary VA: 0x17d60b0)
// Original: hkpTreeBroadPhase::querySingleAabbWithCollector
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::querySingleAabbWithCollector(int a1, uint32_t *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v11)) > _g4_s3 ? (28u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v12)) > _g4_s4 ? (32u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v13)) > _g4_s5 ? (40u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v14)) > _g4_s6 ? (44u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v15)) > _g4_s7 ? (48u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v16)) > _g4_s8 ? (52u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v17)) > _g4_s9 ? (56u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v18)) > _g4_s10 ? (60u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v19)) > _g4_s11 ? (68u + sizeof(_g4_t_v19)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 68u);

  v19 = &a1;
  v3 = a1;
  v4 = a3;
  v5 = *(uint32_t *)(a1 + 304);
  if ( v5 != 0 )
    return G4_VCALL<int>(v5, 88, a2, a3);
  v12 = a2;
  v14 = 0;
  v15 = 0;
  v16 = 0x80000000;
  hkArrayUtil::reserve((hkArrayUtil::Self *)&v13, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v14, 32, 8);
  v8 = v3;
  v7 = 0;
  hkpTreeBroadPhase::querySingleAabb(v8, v12, 0, (int)(uintptr_t)(&v14));
  if ( v15 > 0 )
  {
    do
    {
      v9 = *(uint32_t *)(v14 + 8 * v7++ + 4);
      G4_VCALL<void>(v4, 8, v9, 0);
    }
    while ( v7 < v15 );
  }
  result = v16;
  v15 = 0;
  if ( v16 >= 0 )
    return (*(int (**)(uint32_t *, int, int, int, int, uint32_t *, int *, int, int, int, int, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v14,
             8 * v16,
             v10,
             v11,
             v12,
             &v14,
             v13,
             v14,
             v15,
             v16,
             v17,
             v18);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::querySingleAabb  (binary VA: 0x17d61e0)
// Original: hkpTreeBroadPhase::querySingleAabb
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::querySingleAabb(int a1, uint32_t *a2, int a3)
{
  return hkpTreeBroadPhase::querySingleAabb(a1, a2, 0, a3);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::compact  (binary VA: 0x17d6710)
// Original: hkpTreeBroadPhase::compact
// ----------------------------------------------------------------------------
char * hkpTreeBroadPhase::compact(hkpTreeBroadPhase::Self *self)
{
  char *result;
  uint16_t v2; // di
  int v3;
  int v4;
  unsigned int v5;
  uint16_t v6;
  int v7;
  char *v8;
  uint32_t *v9;
  int v10;

  v10 = 0;
  v8 = (char *)self + 32;
  do
  {
    result = v8;
    if ( *((uint32_t *)v8 + 4) <= 1u )
      goto LABEL_4;
    result = v8;
    if ( *((uint16_t *)v8 + 12) == 0 )
      goto LABEL_4;
    sub_17D6280((int)(uintptr_t)(v8), v7);
    result = v8;
    v2 = *((uint16_t *)v8 + 12);
    if ( v2 == 0 )
      goto LABEL_4;
    v3 = *(uint32_t *)v8;
    while ( 1 )
    {
      v4 = 32 * v2;
      LOWORD(result) = *(uint16_t *)(v3 + v4 + 28);
      if ( (uint16_t)(uintptr_t)(result) == 0 )
      {
        v9 = (uint32_t *)((char *)self + 12 * (v10 == 4) + 192);
        *(uint32_t *)(*v9 + 8 * *(uint16_t *)(v3 + v4 + 30) + 4) = v2
                                                                       | *(uint32_t *)(*v9
                                                                                   + 8
                                                                                   * *(uint16_t *)(v3 + v4 + 30)
                                                                                   + 4)
                                                                       & 0xFFE00000;
        v3 = *(uint32_t *)v8;
        v5 = v4 + *(uint32_t *)v8;
        LOWORD(result) = *(uint16_t *)(v5 + 28);
        if ( (uint16_t)(uintptr_t)(result) != 0 )
          goto LABEL_13;
        result = *(char **)(v5 + 12);
        LOWORD(v5) = (uint16_t)(uintptr_t)(result);
        v6 = (uint16_t)(uintptr_t)(result);
        if ( (uint16_t)(uintptr_t)(result) == 0 )
          goto LABEL_4;
        if ( *(uint16_t *)(v3 + 32 * (uint16_t)(uintptr_t)(result) + 30) == v2 )
          break;
LABEL_12:
        result = (char *)*(uint16_t *)(v3 + 32 * v6 + 30);
        if ( (uint16_t)(uintptr_t)(result) == 0 )
          goto LABEL_4;
      }
LABEL_13:
      v2 = (uint16_t)(uintptr_t)(result);
    }
    while ( 1 )
    {
      result = *(char **)(v3 + 32 * (uint16_t)v5 + 12);
      v6 = (uint16_t)(uintptr_t)(result);
      if ( *(uint16_t *)(v3 + 32 * (uint16_t)v5 + 12) == 0 )
        break;
      if ( (uint16_t)v5 != *(uint16_t *)(v3 + 32 * (uint16_t)(uintptr_t)(result) + 30) )
        goto LABEL_12;
      v5 = *(uint32_t *)(v3 + 32 * (uint16_t)v5 + 12) & 0xC0FFFFFF;
    }
LABEL_4:
    ++v10;
    v8 += 32;
  }
  while ( v10 != 5 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::updateHandlesStandalone  (binary VA: 0x17d6e30)
// Original: hkpTreeBroadPhase::updateHandlesStandalone
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::updateHandlesStandalone(int a1, int a2, __m128 *a3, int a4, int a5, int a6)
{
  float v6; // xmm6_4
  float v7; // xmm7_4
  int result;
  int v10;
  int v11;
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15;
  float v16;
  int *v17;
  int i;
  bool v19;
  int *v20;
  float v21;
  int *v22;
  float v23;
  char v24;
  char v25;
  uint8_t v26;
  char v27;
  int v28;
  float *v29;
  float v30; // xmm0_4
  float v31; // xmm2_4
  typedef __m128 *_g4_t_v32;
  typedef int **_g4_t_address;
  typedef hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16::Self> *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef char _g4_t_v36;
  typedef uint32_t _g4_t_v37[4];
  typedef float _g4_t_v38[8];
  typedef __m128 _g4_t_v39;
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
  typedef __m128 _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef __m128 _g4_t_v61;
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
  typedef float _g4_t_v73;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (8u + sizeof(_g4_t_v32)) > _g4_s0 ? (8u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_address)) > _g4_s1 ? (24u + sizeof(_g4_t_address)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v34)) > _g4_s2 ? (28u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v35)) > _g4_s3 ? (40u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v36)) > _g4_s4 ? (44u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v37)) > _g4_s5 ? (48u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v38)) > _g4_s6 ? (64u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v39)) > _g4_s7 ? (96u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v40)) > _g4_s8 ? (112u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (116u + sizeof(_g4_t_v41)) > _g4_s9 ? (116u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (120u + sizeof(_g4_t_v42)) > _g4_s10 ? (120u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (124u + sizeof(_g4_t_v43)) > _g4_s11 ? (124u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v44)) > _g4_s12 ? (128u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (132u + sizeof(_g4_t_v45)) > _g4_s13 ? (132u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (136u + sizeof(_g4_t_v46)) > _g4_s14 ? (136u + sizeof(_g4_t_v46)) : _g4_s14,
    _g4_s16 = (140u + sizeof(_g4_t_v47)) > _g4_s15 ? (140u + sizeof(_g4_t_v47)) : _g4_s15,
    _g4_s17 = (144u + sizeof(_g4_t_v48)) > _g4_s16 ? (144u + sizeof(_g4_t_v48)) : _g4_s16,
    _g4_s18 = (148u + sizeof(_g4_t_v49)) > _g4_s17 ? (148u + sizeof(_g4_t_v49)) : _g4_s17,
    _g4_s19 = (152u + sizeof(_g4_t_v50)) > _g4_s18 ? (152u + sizeof(_g4_t_v50)) : _g4_s18,
    _g4_s20 = (156u + sizeof(_g4_t_v51)) > _g4_s19 ? (156u + sizeof(_g4_t_v51)) : _g4_s19,
    _g4_s21 = (160u + sizeof(_g4_t_v52)) > _g4_s20 ? (160u + sizeof(_g4_t_v52)) : _g4_s20,
    _g4_s22 = (176u + sizeof(_g4_t_v53)) > _g4_s21 ? (176u + sizeof(_g4_t_v53)) : _g4_s21,
    _g4_s23 = (180u + sizeof(_g4_t_v54)) > _g4_s22 ? (180u + sizeof(_g4_t_v54)) : _g4_s22,
    _g4_s24 = (184u + sizeof(_g4_t_v55)) > _g4_s23 ? (184u + sizeof(_g4_t_v55)) : _g4_s23,
    _g4_s25 = (188u + sizeof(_g4_t_v56)) > _g4_s24 ? (188u + sizeof(_g4_t_v56)) : _g4_s24,
    _g4_s26 = (192u + sizeof(_g4_t_v57)) > _g4_s25 ? (192u + sizeof(_g4_t_v57)) : _g4_s25,
    _g4_s27 = (196u + sizeof(_g4_t_v58)) > _g4_s26 ? (196u + sizeof(_g4_t_v58)) : _g4_s26,
    _g4_s28 = (200u + sizeof(_g4_t_v59)) > _g4_s27 ? (200u + sizeof(_g4_t_v59)) : _g4_s27,
    _g4_s29 = (204u + sizeof(_g4_t_v60)) > _g4_s28 ? (204u + sizeof(_g4_t_v60)) : _g4_s28,
    _g4_s30 = (208u + sizeof(_g4_t_v61)) > _g4_s29 ? (208u + sizeof(_g4_t_v61)) : _g4_s29,
    _g4_s31 = (224u + sizeof(_g4_t_v62)) > _g4_s30 ? (224u + sizeof(_g4_t_v62)) : _g4_s30,
    _g4_s32 = (228u + sizeof(_g4_t_v63)) > _g4_s31 ? (228u + sizeof(_g4_t_v63)) : _g4_s31,
    _g4_s33 = (232u + sizeof(_g4_t_v64)) > _g4_s32 ? (232u + sizeof(_g4_t_v64)) : _g4_s32,
    _g4_s34 = (236u + sizeof(_g4_t_v65)) > _g4_s33 ? (236u + sizeof(_g4_t_v65)) : _g4_s33,
    _g4_s35 = (240u + sizeof(_g4_t_v66)) > _g4_s34 ? (240u + sizeof(_g4_t_v66)) : _g4_s34,
    _g4_s36 = (244u + sizeof(_g4_t_v67)) > _g4_s35 ? (244u + sizeof(_g4_t_v67)) : _g4_s35,
    _g4_s37 = (248u + sizeof(_g4_t_v68)) > _g4_s36 ? (248u + sizeof(_g4_t_v68)) : _g4_s36,
    _g4_s38 = (252u + sizeof(_g4_t_v69)) > _g4_s37 ? (252u + sizeof(_g4_t_v69)) : _g4_s37,
    _g4_s39 = (256u + sizeof(_g4_t_v70)) > _g4_s38 ? (256u + sizeof(_g4_t_v70)) : _g4_s38,
    _g4_s40 = (260u + sizeof(_g4_t_v71)) > _g4_s39 ? (260u + sizeof(_g4_t_v71)) : _g4_s39,
    _g4_s41 = (264u + sizeof(_g4_t_v72)) > _g4_s40 ? (264u + sizeof(_g4_t_v72)) : _g4_s40,
    _g4_s42 = (268u + sizeof(_g4_t_v73)) > _g4_s41 ? (268u + sizeof(_g4_t_v73)) : _g4_s41
  };
  alignas(16) uint8_t _g4_sf[_g4_s42];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 96u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 112u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 116u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 120u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 124u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 128u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 132u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 136u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 140u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 144u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 148u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 152u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 156u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 160u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 176u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 180u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 184u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 188u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 192u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 196u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 200u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 204u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 208u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 224u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 228u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 232u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 236u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 240u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 244u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 248u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 252u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 256u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 260u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 264u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 268u);

  v6 = *(float *)(a1 + 224);
  v7 = *(float *)(a1 + 252);
  v37[1] = a5;
  v37[2] = a6;
  result = a1 + 32;
  v37[0] = 0;
  v35 = 0;
  if ( a4 > 0 )
  {
    do
    {
      v10 = *(uint32_t *)(a1 + 192) + 8 * **(uint32_t **)(a2 + 4 * v35);
      v39 = *a3;
      v40 =g4_m128_lane<float>(a3[1], 0);
      v41 =g4_m128_lane<float>(a3[1], 1);
      v42 =g4_m128_lane<float>(a3[1], 2);
      v43 =g4_m128_lane<float>(a3[1], 3);
      v34 = (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16::Self> *)(a1 + 32 + (*(uint16_t *)(v10 + 6) & 0x1E0));
      v11 = *(uint32_t *)v34 + 32 * *(uint16_t *)(v10 + 4);
      v12 = *(float *)(v11 + 16);
      v13 = *(float *)(v11 + 20);
      v14 = *(float *)(v11 + 24);
      v48 = v12;
      v49 = v13;
      v50 = v14;
      v51 = 0.0;
      v44 = *(float *)v11;
      v45 = *(float *)(v11 + 4);
      v15 = *(float *)(v11 + 8);
      v16 = *(float *)(v11 + 12);
      v46 = v15;
      v47 = v16;
      LOBYTE(v15) = ((*(uint8_t *)(v10 + 7) >> 1) + 1) & 0x7F;
      *(uint8_t *)(v10 + 7) = (2 * LOBYTE(v15)) | *(uint8_t *)(v10 + 7) & 1;
      if ( LOBYTE(v15) != 0 && (*(uint16_t *)(v10 + 6) & 0x1E0) == 0x60 )
      {
        v24 = (v45 >g4_m128_lane<float>(v39, 1)) + (v45 >g4_m128_lane<float>(v39, 1)) + 4;
        if ( v46 <=g4_m128_lane<float>(v39, 2) )
          v24 = 2 * (v45 >g4_m128_lane<float>(v39, 1));
        v25 = 8 * (v47 >g4_m128_lane<float>(v39, 3)) + 2;
        v26 = (v44 >g4_m128_lane<float>(v39, 0) || v40 > v12) | v24;
        if ( v41 <= v13 )
          v25 = 8 * (v47 >g4_m128_lane<float>(v39, 3));
        v36 = v25;
        v27 = 4 * (v42 > v14) + 8;
        if ( v43 <= 0.0 )
          v27 = 4 * (v42 > v14);
        if ( (((uint8_t)(v36 | v27) | v26) & 7) == 0 )
          goto LABEL_13;
        v28 = *(uint32_t *)v10 + *(char *)(*(uint32_t *)v10 + 5);
        v29 = (float *)(v28 + *(char *)(v28 + 16));
        v30 = v29[110] * v7;
        v31 = v7 * v29[108];
        v38[1] = v29[109] * v7;
        v38[0] = v31;
        v38[2] = v30;
        v38[3] = v6;
        hkAabbUtil::expandAabbByMotion((hkAabbUtil::Self *)&v39, (const hkAabb::Self *)v38, &v52);
        hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_ddc0b8::kineticUpdate(
          v34,
          *(uint16_t *)(v10 + 4),
          (const hkAabb::Self *)&v52);
        v39 = v52;
        v40 = v53;
        v41 = v54;
        v42 = v55;
        v43 = v56;
      }
      else
      {
g4_m128_lane<float>(v39, 0) =g4_m128_lane<float>(v39, 0) - v6;
g4_m128_lane<float>(v39, 1) =g4_m128_lane<float>(v39, 1) - v6;
g4_m128_lane<float>(v39, 2) =g4_m128_lane<float>(v39, 2) - v6;
g4_m128_lane<float>(v39, 3) =g4_m128_lane<float>(v39, 3) - v6;
        v40 = v40 + v6;
        v41 = v41 + v6;
        v42 = v42 + v6;
        v43 = v43 + v6;
        hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_ddc0b8::update(v34, *(uint16_t *)(v10 + 4), (const hkAabb::Self *)&v39);
      }
      v37[3] = *(uint32_t *)(a2 + 4 * v35);
      address = (int **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v32 = a3;
      v17 = (int *)(a1 + 64);
      for ( i = 1; i != 4; ++i )
      {
        v37[0] = *(uint32_t *)(a1 + 192);
        v19 = hkAabb::overlaps((hkAabb::Self *)&v44, (const hkAabb::Self *)&v39);
g4_m128_lane<int32_t>(v52, 0) = (int32_t)(uintptr_t)(v37);
        v53 = v44;
        v54 = v45;
        v55 = v46;
        v56 = v47;
        v57 = v48;
        v58 = v49;
        v59 = v50;
        v60 = v51;
        v61 = v39;
        v62 = v40;
        v63 = v41;
        v64 = v42;
        v65 = v43;
        if ( v19 )
        {
          v38[0] = 0.0;
          v38[1] = 0.0;
          v38[2] = -0.0;
          LODWORD(v38[4]) = 64;
          v20 = *address;
          v66 = fminf(v44,g4_m128_lane<float>(v39, 0));
          v67 = fminf(v45,g4_m128_lane<float>(v39, 1));
          v68 = fminf(v46,g4_m128_lane<float>(v39, 2));
          v69 = fminf(v47,g4_m128_lane<float>(v39, 3));
          v70 = fmaxf(v48, v40);
          v71 = fmaxf(v49, v41);
          v72 = fmaxf(v50, v42);
          v73 = fmaxf(v51, v43);
          v21 = *((float *)v20 + 3);
          if ( v20[2] > 127 && LODWORD(v21) + 128 <= (unsigned int)v20[4] )
            v20[3] = LODWORD(v21) + 128;
          else
            v21 = COERCE_FLOAT(hkLifoAllocator::allocateFromNewSlab((hkLifoAllocator::Self *)v20, 128));
          v38[0] = v21;
          v38[3] = v21;
          LODWORD(v38[2]) = -2147483584;
          hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_434323(
            v17,
            (hkMemoryAllocator::Self *)v38,
            (int)(uintptr_t)(&v52));
          hkLocalArray_unsigned_short_375ea3::Destroy((hkLocalArray<unsigned short> *)v38);
        }
        else
        {
          v38[0] = 0.0;
          v38[1] = 0.0;
          v38[2] = -0.0;
          LODWORD(v38[4]) = 64;
          v22 = *address;
          v23 = *((float *)*address + 3);
          if ( (*address)[2] > 127 && LODWORD(v23) + 128 <= (unsigned int)v22[4] )
            v22[3] = LODWORD(v23) + 128;
          else
            v23 = COERCE_FLOAT(hkLifoAllocator::allocateFromNewSlab((hkLifoAllocator::Self *)v22, 128));
          v38[0] = v23;
          v38[3] = v23;
          LODWORD(v38[2]) = -2147483584;
          hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_fde0c5(
            (int)(uintptr_t)(v17),
            (int *)v38,
            (int)(uintptr_t)(&v52));
          hkLocalArray_unsigned_short_375ea3::Destroy((hkLocalArray<unsigned short> *)v38);
        }
        v17 += 8;
      }
      a3 = v32;
LABEL_13:
      ++v35;
      a3 += 2;
      result = v35;
    }
    while ( v35 != a4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::updateAabbs  (binary VA: 0x17d75c0)
// Original: hkpTreeBroadPhase::updateAabbs
// ----------------------------------------------------------------------------
float * hkpTreeBroadPhase::updateAabbs(hkpTreeBroadPhase::Self *a1, hkpBroadPhaseHandle **a2, hkAabb::Self *a3, int a4, int a5, int a6, int a7)
{
  int v7;

  v7 = *((uint32_t *)a1 + 76);
  if ( v7 == 0 )
    return (float *)hkpTreeBroadPhase::updateHandlesStandalone((int)(uintptr_t)(a1), (int)(uintptr_t)(a2), (__m128 *)a3, a5, a6, a7);
  if ( a4 != 0 )
    (*(void (**)(uint32_t, hkpBroadPhaseHandle **, int, int, int, int))(*(uint32_t *)v7 + 56))(
      *((uint32_t *)a1 + 76),
      a2,
      a4,
      a5,
      a6,
      a7);
  else
    G4_VCALL<void>(v7, 52, a2, a3, a5, a6, a7);
  return hkpTreeBroadPhase::updateHandles(a1, a2, a3, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::updateAabbs  (binary VA: 0x17d76b0)
// Original: hkpTreeBroadPhase::updateAabbs
// ----------------------------------------------------------------------------
float * hkpTreeBroadPhase::updateAabbs(hkpTreeBroadPhase::Self *a1, hkpBroadPhaseHandle **a2, hkAabb::Self *a3, int a4, int a5, int a6)
{
  return hkpTreeBroadPhase::updateAabbs(a1, a2, a3, 0, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::updateAabbsUint32  (binary VA: 0x17d7710)
// Original: hkpTreeBroadPhase::updateAabbsUint32
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * hkpTreeBroadPhase::updateAabbsUint32(hkpTreeBroadPhase::Self *a1, hkpBroadPhaseHandle **a2, int *a3, int a4, int a5, int a6)
{
  hkLifoAllocator::Self *v6;
  hkAabb::Self *v7;
  int *v8;
  float v9; // xmm7_4
  float *v10;
  int v11;
  float v12; // xmm0_4
  float *v13;
  hkLifoAllocator::Self *result;
  hkLifoAllocator::Self **address;
  signed int v16;
  hkAabb::Self *v17;
  float *v18;
  float *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;

  address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v6 = *address;
  v16 = (32 * a4 + 127) & 0xFFFFFF80;
  v7 = *((hkAabb::Self **)*address + 3);
  v17 = v7;
  if ( v16 <= *((uint32_t *)*address + 2) && (unsigned int)(uintptr_t)(v7) + v16 <= *((uint32_t *)v6 + 4) )
    *((uint32_t *)v6 + 3) = (uint32_t)(uintptr_t)((char *)v7 + v16);
  else
    v17 = (hkAabb::Self *)hkLifoAllocator::allocateFromNewSlab(v6, v16);
  if ( a4 > 0 )
  {
    v8 = a3;
    v19 = (float *)v17;
    v18 = (float *)((char *)v17 + 16);
    do
    {
      v20 = v8[1];
      v9 = (float)((float)*v8 * *((float *)a1 + 72)) + *((float *)a1 + 60);
      v21 = v8[2];
      v23 = v8[4];
      v22 = v8[3];
      v25 = v8[6];
      v10 = v19;
      v24 = v8[5];
      v11 = v8[7];
      v8 += 8;
      *v19 = v9;
      v19[1] = (float)((float)v20 * *((float *)a1 + 73)) + *((float *)a1 + 61);
      v12 = (float)v11;
      v19[2] = (float)((float)v21 * *((float *)a1 + 74)) + *((float *)a1 + 62);
      v13 = v18;
      v19 += 8;
      v18 += 8;
      v10[3] = (float)((float)v22 * *((float *)a1 + 75)) + *((float *)a1 + 63);
      *v13 = (float)((float)v23 * *((float *)a1 + 72)) + *((float *)a1 + 60);
      v13[1] = (float)((float)v24 * *((float *)a1 + 73)) + *((float *)a1 + 61);
      v13[2] = (float)((float)v25 * *((float *)a1 + 74)) + *((float *)a1 + 62);
      v13[3] = (float)(v12 * *((float *)a1 + 75)) + *((float *)a1 + 63);
    }
    while ( v8 != &a3[8 * a4] );
  }
  hkpTreeBroadPhase::updateAabbs(a1, a2, v17, (int)(uintptr_t)(a3), a4, a5, a6);
  result = *address;
  if ( v16 > *((uint32_t *)*address + 2)
    || *((hkAabb::Self **)result + 3) != (hkAabb::Self *)((char *)v17 + v16)
    || v17 == *((hkAabb::Self **)result + 5) )
  {
    return hkLifoAllocator::slowBlockFree(*address, (char *)v17, v16);
  }
  *((uint32_t *)result + 3) = (uint32_t)(uintptr_t)(v17);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::castAabb  (binary VA: 0x17d7980)
// Original: hkpTreeBroadPhase::castAabb
// ----------------------------------------------------------------------------
void hkpTreeBroadPhase::castAabb(int a1, __m128 *a2, int a3)
{
  float v3; // xmm6_4
  float v4; // xmm5_4
  float v5; // xmm0_4
  float v6; // xmm6_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm5_4
  float v10; // xmm0_4
  float v11; // xmm7_4
  float v12; // xmm4_4
  float v13; // xmm2_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm7_4
  float v17; // xmm5_4
  __m128 v18;
  int v19; // xmm1_4
  int v20;
  int v21;
  int *v22;
  int v23;
  typedef int **_g4_t_address;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26;
  typedef float _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef __m128 _g4_t_v33;
  typedef uint32_t _g4_t_v34[8];
  typedef int *_g4_t_v35;
  typedef float _g4_t_v36[23];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (8u + sizeof(_g4_t_address)) > _g4_s0 ? (8u + sizeof(_g4_t_address)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v26)) > _g4_s2 ? (40u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v27)) > _g4_s3 ? (44u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v28)) > _g4_s4 ? (48u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v29)) > _g4_s5 ? (64u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v30)) > _g4_s6 ? (68u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v31)) > _g4_s7 ? (72u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v32)) > _g4_s8 ? (76u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v33)) > _g4_s9 ? (80u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v34)) > _g4_s10 ? (96u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (128u + sizeof(_g4_t_v35)) > _g4_s11 ? (128u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (144u + sizeof(_g4_t_v36)) > _g4_s12 ? (144u + sizeof(_g4_t_v36)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 80u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 96u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 128u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 144u);

  v3 =g4_m128_lane<float>(a2[2], 0);
  v4 =g4_m128_lane<float>(*(a2), 0) - v3;
  v5 =g4_m128_lane<float>(*(a2), 3);
  v6 = v3 +g4_m128_lane<float>(*(a2), 0);
  v7 =g4_m128_lane<float>(*(a2), 1);
  v31 = a3;
  v8 = v7 +g4_m128_lane<float>(a2[2], 1);
  v27 = v4;
  v9 = v5;
  v10 = v5 +g4_m128_lane<float>(a2[2], 3);
  v11 =g4_m128_lane<float>(*(a2), 2);
  v32 = 0;
  v12 = v8;
  v13 =g4_m128_lane<float>(a2[2], 2);
  v30 = 1065353216;
  v14 = v13 + v11;
  v15 = v7 -g4_m128_lane<float>(a2[2], 1);
  v16 = v11 -g4_m128_lane<float>(a2[2], 2);
  v17 = v9 -g4_m128_lane<float>(a2[2], 3);
  v25 = (float)(v12 - v15) * 0.5;
  v26 = (float)(v15 + v12) * 0.5;
  address = (int **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
g4_m128_lane<uint64_t>(v18, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(COERCE_UNSIGNED_INT((float)(v6 + v27) * 0.5)), g4_m128_from<__m128>(LODWORD(v26))), 0);
g4_m128_lane<uint64_t>(v18, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(
                      g4_m128_from<__m128>(COERCE_UNSIGNED_INT((float)(v16 + v14) * 0.5)),
                      g4_m128_from<__m128>(COERCE_UNSIGNED_INT(0.5 * (float)(v17 + v10)))), 0);
  v19 = 1065353216;
  v20 = 1;
  v21 = a1 + 64;
  while ( 1 )
  {
    v28 = v19;
    v29 = *(uint32_t *)(a1 + 12 * (v20 == 4) + 192);
    v35 = &v29;
    v33 = _mm_sub_ps(a2[1], v18);
    hkcdRay_setDirection((unsigned int *)&v33, (float *)&v28, (int)(uintptr_t)(v36));
    v34[4] = 64;
    v34[2] = 0x80000000;
    v34[0] = 0;
    v36[0] = (float)(v6 + v27) * 0.5;
    v34[1] = 0;
    v36[1] = v26;
    v22 = *address;
    v36[2] = (float)(v16 + v14) * 0.5;
    v36[3] = 0.5 * (float)(v17 + v10);
    v36[12] = (float)(v6 - v27) * 0.5;
    v36[13] = v25;
    v36[14] = (float)(v14 - v16) * 0.5;
    v36[15] = (float)(v10 - v17) * 0.5;
    v23 = v22[3];
    if ( v22[2] <= 127 )
      goto LABEL_4;
    if ( v23 + 128 <= (unsigned int)v22[4] )
      v22[3] = v23 + 128;
    else
LABEL_4:
      v23 = hkLifoAllocator::allocateFromNewSlab((hkLifoAllocator::Self *)v22, 128);
    v34[0] = v23;
    v34[3] = v23;
    v34[2] = -2147483584;
    hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_d7a70f(
      v21,
      (hkMemoryAllocator::Self *)v34,
      (float *)&v35);
    ++v20;
    v21 += 32;
    hkLocalArray_unsigned_short_375ea3::Destroy((hkLocalArray<unsigned short> *)v34);
    if ( v20 == 5 )
      break;
    v19 = v30;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::queryConvex  (binary VA: 0x17d8880)
// Original: hkpTreeBroadPhase::queryConvex
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::queryConvex(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int result;
  int **address;
  int *v9;
  char *v10;
  int v11;
  int *v12;
  signed int v13;
  typedef int **_g4_t_v14;
  typedef uint32_t _g4_t_v15[4];
  typedef uint32_t _g4_t_v16[4];
  typedef char *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef char *_g4_t_v20;
  typedef int _g4_t_v21;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v16)) > _g4_s2 ? (32u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v17)) > _g4_s3 ? (48u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v18)) > _g4_s4 ? (52u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v19)) > _g4_s5 ? (56u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v20)) > _g4_s6 ? (60u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v21)) > _g4_s7 ? (64u + sizeof(_g4_t_v21)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);

  v5 = 1;
  v15[1] = a4;
  v6 = a1 + 64;
  do
  {
    v15[0] = *(uint32_t *)(a1 + 12 * (v5 == 4) + 192);
    result = a5;
    if ( _bittest(&result, (uint8_t)v5) )
    {
      v16[0] = (uint32_t)(uintptr_t)(v15);
      v16[1] = v6;
      v16[2] = a2;
      v16[3] = a3;
      v17 = nullptr;
      v18 = 0;
      v19 = 0x80000000;
      v21 = 64;
      address = (int **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v9 = *address;
      v14 = address;
      v10 = (char *)(*address)[3];
      if ( v9[2] > 127 && (unsigned int)(uintptr_t)(v10 + 128) <= v9[4] )
        v9[3] = (int)(uintptr_t)(v10 + 128);
      else
        v10 = (char *)hkLifoAllocator::allocateFromNewSlab((hkLifoAllocator::Self *)v9, 128);
      v17 = v10;
      v20 = v10;
      v19 = -2147483584;
      hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_9206dc(
        v6,
        (hkMemoryAllocator::Self *)&v17,
        v16);
      v11 = 0;
      if ( v17 != v20 )
        v11 = v18;
      v18 = v11;
      v12 = *v14;
      v13 = (v21 + v21 + 127) & 0xFFFFFF80;
      if ( v13 > (*v14)[2] || (char *)v12[3] != &v20[v13] || v20 == (char *)v12[5] )
        hkLifoAllocator::slowBlockFree((hkLifoAllocator::Self *)v12, v20, (v21 + v21 + 127) & 0xFFFFFF80);
      else
        v12[3] = (int)(uintptr_t)(v20);
      result = v19;
      v18 = 0;
      if ( v19 >= 0 )
        result = (*(int (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
                   (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                   v17,
                   2 * (v19 & 0x3FFFFFFF));
    }
    ++v5;
    v6 += 32;
  }
  while ( v5 != 5 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::queryConvexSorted  (binary VA: 0x17d92c0)
// Original: hkpTreeBroadPhase::queryConvexSorted
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::queryConvexSorted(int a1, int *a2, int a3, int a4, int *a5, int a6)
{
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  int result;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v22;
  bool v23; // cc
  int v24;
  typedef int *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef char _g4_t_v30[4];
  typedef int _g4_t_v31[4];
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef unsigned int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint32_t _g4_t_v37[2];
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int *_g4_t_v45;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v28)) > _g4_s3 ? (20u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v29)) > _g4_s4 ? (24u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v30)) > _g4_s5 ? (28u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v31)) > _g4_s6 ? (32u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v32)) > _g4_s7 ? (48u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v33)) > _g4_s8 ? (52u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v34)) > _g4_s9 ? (56u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v35)) > _g4_s10 ? (60u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v36)) > _g4_s11 ? (64u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v37)) > _g4_s12 ? (80u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v38)) > _g4_s13 ? (88u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v39)) > _g4_s14 ? (92u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v40)) > _g4_s15 ? (96u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v41)) > _g4_s16 ? (112u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v42)) > _g4_s17 ? (116u + sizeof(_g4_t_v42)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v43)) > _g4_s18 ? (120u + sizeof(_g4_t_v43)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v44)) > _g4_s19 ? (124u + sizeof(_g4_t_v44)) : _g4_s19,
    _g4_s21 = (136u + sizeof(_g4_t_v45)) > _g4_s20 ? (136u + sizeof(_g4_t_v45)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 80u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 88u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 92u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 96u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 112u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 116u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 120u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 124u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 136u);

  v45 = &a1;
  v6 = a1;
  v29 = a1;
  v27 = a3;
  v26 = a4;
  v7 = a5;
  v37[1] = (uint32_t)(uintptr_t)(a5);
  v28 = a6;
  v41 = *a2;
  v42 = a2[1];
  v8 = a2[2];
  v44 = a2[3];
  v9 = a5[2];
  v43 = v8;
  v37[0] = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0x80000000;
  hkArrayUtil::reserve(
    (hkArrayUtil::Self *)v30,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
    &v38,
    (v9 & 0x3FFFFFFF) + 1,
    16);
  v7[1] = 0;
  v10 = v6 + 64;
  v25 = v7;
  v11 = 1;
  v12 = v10;
  do
  {
    v37[0] = *(uint32_t *)(v29 + 12 * (v11 == 4) + 192);
    v13 = v28;
    if ( _bittest(&v13, (uint8_t)v11) )
    {
      v31[0] = (int)(uintptr_t)(v37);
      v31[1] = v12;
      v31[2] = v27;
      v31[3] = v26;
      v32 = 0;
      v33 = 0;
      v34 = 0x80000000;
      v36 = 64;
      address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v22 = *address;
      v23 = *((uint32_t *)*address + 2) <= 127;
      v24 = *((uint32_t *)*address + 3);
      if ( v23 || (unsigned int)(v24 + 128) > *((uint32_t *)v22 + 4) )
        v24 = hkLifoAllocator::allocateFromNewSlab(v22, 128);
      else
        *((uint32_t *)v22 + 3) = v24 + 128;
      v32 = v24;
      v35 = v24;
      v34 = 0x80000040;
      hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_f6d480(
        v12,
        &v32,
        v31);
      hkLocalArray_unsigned_short_375ea3::Destroy((hkLocalArray<unsigned short> *)&v32);
    }
    ++v11;
    v12 += 32;
  }
  while ( v11 != 5 );
  v14 = v39;
  if ( v39 <= 1 )
  {
    v32 = 0;
    v33 = 0;
    v34 = 0x80000000;
    if ( v39 != 1 )
    {
      v17 = 0x80000000;
      v16 = 0;
      goto LABEL_9;
    }
    hkArrayUtil::reserve((hkArrayUtil::Self *)v30, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v32, 1, 4);
    v33 = 1;
  }
  else
  {
    hkAlgorithm::quickSortRecursive_hkVector4f_hkpTreeBroadP_ad60fc(v38, 0, v39 - 1);
    v32 = 0;
    v33 = 0;
    v34 = 0x80000000;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v30, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v32, v14, 4);
    v33 = v14;
  }
  v15 = 0;
  do
  {
    *(uint32_t *)(v32 + 4 * v15) = *(uint32_t *)(*v25 + 4 * (*(uint32_t *)(v38 + 16 * v15 + 12) & 0xC0FFFFFF));
    ++v15;
  }
  while ( v15 != v14 );
  v16 = v32;
  v14 = v33;
  v17 = v34;
LABEL_9:
  v18 = *v25;
  *v25 = v16;
  v19 = v25[2];
  v32 = v18;
  v25[1] = v14;
  v25[2] = v17;
  v34 = v19;
  v33 = 0;
  if ( v19 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v18,
      4 * v19);
  result = v40;
  v32 = 0;
  v34 = 0x80000000;
  v39 = 0;
  if ( v40 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v38,
             16 * v40);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::fullOptimize  (binary VA: 0x17dbc50)
// Original: hkpTreeBroadPhase::fullOptimize
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::fullOptimize(hkpTreeBroadPhase::Self *self)
{
  int v1;
  unsigned int v2;
  int result;
  int v4;
  int v5;
  typedef int _g4_t_v6;
  typedef hkpTreeBroadPhase::Self *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef uint16_t *_g4_t_v10;
  typedef uint16_t _g4_t_v11;
  typedef uint32_t _g4_t_v12[7];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (52u + sizeof(_g4_t_v7)) > _g4_s1 ? (52u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v8)) > _g4_s2 ? (56u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v9)) > _g4_s3 ? (60u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v10)) > _g4_s4 ? (64u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (70u + sizeof(_g4_t_v11)) > _g4_s5 ? (70u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v12)) > _g4_s6 ? (72u + sizeof(_g4_t_v12)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 52u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 56u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 60u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 64u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 70u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 72u);

  v12[3] = (uint32_t)(uintptr_t)(&self);
  v7 = self;
  v10 = (uint16_t *)((char *)self + 32);
  v8 = 0;
  while ( 2 )
  {
    hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_ddc0b8::rebuildBranchSAH(
      v12,
      (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16::Self> *)v10,
      v10[12],
      1,
      32,
      COERCE_FLOAT(16));
    if ( v12[0] != 0 )
    {
      result = v10[12];
      v11 = v10[12];
    }
    else
    {
      result = 0;
      if ( v10[12] != 0 )
      {
        sub_17D6280((int)(uintptr_t)(v10), v6);
        result = v10[12];
      }
      v11 = result;
    }
    if ( v11 == 0 )
      goto LABEL_6;
    v1 = *(uint32_t *)v10;
    while ( 1 )
    {
      v5 = 32 * v11;
      LOWORD(result) = *(uint16_t *)(v1 + v5 + 28);
      if ( (uint16_t)result == 0 )
      {
        v9 = (uint32_t *)((char *)v7 + 12 * (v8 == 4) + 192);
        *(uint32_t *)(*v9 + 8 * *(uint16_t *)(v1 + v5 + 30) + 4) = v11
                                                                       | *(uint32_t *)(*v9
                                                                                   + 8
                                                                                   * *(uint16_t *)(v1 + v5 + 30)
                                                                                   + 4)
                                                                       & 0xFFE00000;
        v1 = *(uint32_t *)v10;
        v2 = v5 + *(uint32_t *)v10;
        LOWORD(result) = *(uint16_t *)(v2 + 28);
        if ( (uint16_t)result != 0 )
          goto LABEL_14;
        result = *(uint32_t *)(v2 + 12);
        LOWORD(v2) = result;
        v4 = (uint16_t)result;
        if ( (uint16_t)result == 0 )
          goto LABEL_6;
        if ( v11 == *(uint16_t *)(v1 + 32 * (uint16_t)result + 30) )
          break;
LABEL_5:
        result = *(uint16_t *)(v1 + 32 * v4 + 30);
        if ( (uint16_t)result == 0 )
          goto LABEL_6;
      }
LABEL_14:
      v11 = result;
    }
    while ( 1 )
    {
      result = *(uint32_t *)(v1 + 32 * (uint16_t)v2 + 12);
      v4 = *(uint16_t *)(v1 + 32 * (uint16_t)v2 + 12);
      if ( *(uint16_t *)(v1 + 32 * (uint16_t)v2 + 12) == 0 )
        break;
      if ( (uint16_t)v2 != *(uint16_t *)(v1 + 32 * (uint16_t)result + 30) )
        goto LABEL_5;
      v2 = *(uint32_t *)(v1 + 32 * (uint16_t)v2 + 12) & 0xC0FFFFFF;
    }
LABEL_6:
    ++v8;
    v10 += 16;
    if ( v8 != 5 )
      continue;
    return result;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::update  (binary VA: 0x17dbe20)
// Original: hkpTreeBroadPhase::update
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase::update(hkpTreeBroadPhase::Self *self, float a2)
{
  unsigned int v2;
  int result;

  v2 = *((uint32_t *)self + 59) & 0xC0FFFFFF;
  *((float *)self + 63) = *((float *)self + 58) * a2;
  result = hkpTreeBroadPhase::optimize(self, *((float *)self + 57), v2);
  if ( *((uint8_t *)self + 308) == 0 )
  {
    result = hkpTreeBroadPhase::fullOptimize(self);
    *((uint8_t *)self + 308) = 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::addHandlesStandalone  (binary VA: 0x17dd070)
// Original: hkpTreeBroadPhase::addHandlesStandalone
// ----------------------------------------------------------------------------
hkArrayUtil::Self * hkpTreeBroadPhase::addHandlesStandalone(int *a1, hkpBroadPhaseHandle **a2, hkAabb::Self *a3, int a4, int a5)
{
  int v5;
  hkArrayUtil::Self *result;
  int v7;
  int v8;
  hkMemoryAllocator::Self **v9;
  int *v10;
  hkMemoryAllocator::Self *v11;
  hkMemoryAllocator::Self *v12;
  int v13;
  float v14; // xmm6_4
  float v15; // xmm5_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  hkpBroadPhaseHandle *v21;
  int *v22;
  float v23;
  float v24;
  float v25;
  void *v26;
  float v27;
  float v28;
  float v29;
  float v30;
  int *v31;
  float v32;
  int v33;
  hkMemoryAllocator::Self *v34;
  uint64_t *v35;
  uint64_t *v36;
  float v37; // xmm1_4
  int i;
  float v39;
  hkLifoAllocator::Self *v40;
  signed int v41;
  typedef unsigned int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef hkpTreeBroadPhase::Self *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef hkpBroadPhaseHandle **_g4_t_v53;
  typedef hkAabb::Self *_g4_t_v54;
  typedef char *_g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef int _g4_t_v58;
  typedef float *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef int *_g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef void *_g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef int _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef char _g4_t_v79[4];
  typedef uint32_t _g4_t_v80[4];
  typedef hkMemoryAllocator::Self **_g4_t_v81[4];
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef int _g4_t_v84;
  typedef void *_g4_t_v85;
  typedef float _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef uint64_t _g4_t_v90[96];
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int **_g4_t_v95;
  enum : size_t {
    _g4_s0 = 1104u,
    _g4_s1 = (0u + sizeof(_g4_t_v42)) > _g4_s0 ? (0u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v43)) > _g4_s1 ? (4u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v44)) > _g4_s2 ? (8u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v45)) > _g4_s3 ? (12u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v46)) > _g4_s4 ? (16u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v47)) > _g4_s5 ? (20u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v48)) > _g4_s6 ? (28u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_address)) > _g4_s7 ? (40u + sizeof(_g4_t_address)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v50)) > _g4_s8 ? (44u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v51)) > _g4_s9 ? (52u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v52)) > _g4_s10 ? (56u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v53)) > _g4_s11 ? (60u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v54)) > _g4_s12 ? (64u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v55)) > _g4_s13 ? (68u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v56)) > _g4_s14 ? (72u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v57)) > _g4_s15 ? (76u + sizeof(_g4_t_v57)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v58)) > _g4_s16 ? (80u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v59)) > _g4_s17 ? (88u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v60)) > _g4_s18 ? (92u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v61)) > _g4_s19 ? (104u + sizeof(_g4_t_v61)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v62)) > _g4_s20 ? (112u + sizeof(_g4_t_v62)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v63)) > _g4_s21 ? (116u + sizeof(_g4_t_v63)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v64)) > _g4_s22 ? (120u + sizeof(_g4_t_v64)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v65)) > _g4_s23 ? (124u + sizeof(_g4_t_v65)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v66)) > _g4_s24 ? (132u + sizeof(_g4_t_v66)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v67)) > _g4_s25 ? (132u + sizeof(_g4_t_v67)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v68)) > _g4_s26 ? (136u + sizeof(_g4_t_v68)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v69)) > _g4_s27 ? (136u + sizeof(_g4_t_v69)) : _g4_s27,
    _g4_s29 = (140u + sizeof(_g4_t_v70)) > _g4_s28 ? (140u + sizeof(_g4_t_v70)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v71)) > _g4_s29 ? (140u + sizeof(_g4_t_v71)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v72)) > _g4_s30 ? (144u + sizeof(_g4_t_v72)) : _g4_s30,
    _g4_s32 = (148u + sizeof(_g4_t_v73)) > _g4_s31 ? (148u + sizeof(_g4_t_v73)) : _g4_s31,
    _g4_s33 = (148u + sizeof(_g4_t_v74)) > _g4_s32 ? (148u + sizeof(_g4_t_v74)) : _g4_s32,
    _g4_s34 = (152u + sizeof(_g4_t_v75)) > _g4_s33 ? (152u + sizeof(_g4_t_v75)) : _g4_s33,
    _g4_s35 = (156u + sizeof(_g4_t_v76)) > _g4_s34 ? (156u + sizeof(_g4_t_v76)) : _g4_s34,
    _g4_s36 = (156u + sizeof(_g4_t_v77)) > _g4_s35 ? (156u + sizeof(_g4_t_v77)) : _g4_s35,
    _g4_s37 = (156u + sizeof(_g4_t_v78)) > _g4_s36 ? (156u + sizeof(_g4_t_v78)) : _g4_s36,
    _g4_s38 = (160u + sizeof(_g4_t_v79)) > _g4_s37 ? (160u + sizeof(_g4_t_v79)) : _g4_s37,
    _g4_s39 = (164u + sizeof(_g4_t_v80)) > _g4_s38 ? (164u + sizeof(_g4_t_v80)) : _g4_s38,
    _g4_s40 = (180u + sizeof(_g4_t_v81)) > _g4_s39 ? (180u + sizeof(_g4_t_v81)) : _g4_s39,
    _g4_s41 = (196u + sizeof(_g4_t_v82)) > _g4_s40 ? (196u + sizeof(_g4_t_v82)) : _g4_s40,
    _g4_s42 = (200u + sizeof(_g4_t_v83)) > _g4_s41 ? (200u + sizeof(_g4_t_v83)) : _g4_s41,
    _g4_s43 = (204u + sizeof(_g4_t_v84)) > _g4_s42 ? (204u + sizeof(_g4_t_v84)) : _g4_s42,
    _g4_s44 = (208u + sizeof(_g4_t_v85)) > _g4_s43 ? (208u + sizeof(_g4_t_v85)) : _g4_s43,
    _g4_s45 = (212u + sizeof(_g4_t_v86)) > _g4_s44 ? (212u + sizeof(_g4_t_v86)) : _g4_s44,
    _g4_s46 = (216u + sizeof(_g4_t_v87)) > _g4_s45 ? (216u + sizeof(_g4_t_v87)) : _g4_s45,
    _g4_s47 = (220u + sizeof(_g4_t_v88)) > _g4_s46 ? (220u + sizeof(_g4_t_v88)) : _g4_s46,
    _g4_s48 = (224u + sizeof(_g4_t_v89)) > _g4_s47 ? (224u + sizeof(_g4_t_v89)) : _g4_s47,
    _g4_s49 = (228u + sizeof(_g4_t_v90)) > _g4_s48 ? (228u + sizeof(_g4_t_v90)) : _g4_s48,
    _g4_s50 = (996u + sizeof(_g4_t_v91)) > _g4_s49 ? (996u + sizeof(_g4_t_v91)) : _g4_s49,
    _g4_s51 = (1000u + sizeof(_g4_t_v92)) > _g4_s50 ? (1000u + sizeof(_g4_t_v92)) : _g4_s50,
    _g4_s52 = (1004u + sizeof(_g4_t_v93)) > _g4_s51 ? (1004u + sizeof(_g4_t_v93)) : _g4_s51,
    _g4_s53 = (1008u + sizeof(_g4_t_v94)) > _g4_s52 ? (1008u + sizeof(_g4_t_v94)) : _g4_s52,
    _g4_s54 = (1020u + sizeof(_g4_t_v95)) > _g4_s53 ? (1020u + sizeof(_g4_t_v95)) : _g4_s53
  };
  alignas(16) uint8_t _g4_sf[_g4_s54];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 40u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 44u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 52u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 56u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 68u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 72u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 76u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 80u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 88u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 92u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 104u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 112u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 116u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 120u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 124u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 132u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 132u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 136u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 136u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 140u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 140u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 144u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 148u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 148u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 152u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 156u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 156u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 156u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 160u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 164u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 180u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 196u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 200u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 204u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 208u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 212u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 216u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 220u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 224u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 228u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 996u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 1000u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 1004u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 1008u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 1020u);

  v95 = &a1;
  v50 = (hkpTreeBroadPhase::Self *)a1;
  v5 = a4;
  v53 = a2;
  v54 = a3;
  v80[0] = a5;
  result = (hkArrayUtil::Self *)(a4 + a1[49] + 1);
  v7 = a1[50] & 0x3FFFFFFF;
  if ( (int)(uintptr_t)(result) > v7 )
  {
    v8 = 2 * v7;
    if ( v8 >= (int)(uintptr_t)(result) )
      result = (hkArrayUtil::Self *)v8;
    result = hkArrayUtil::reserve(
               (hkArrayUtil::Self *)v79,
               (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
               a1 + 48,
               (int)(uintptr_t)(result),
               8);
  }
  if ( v5 > 0 )
  {
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v44 = 4 * v5;
    v43 = 32 * v5;
    v42 = v5 - 8 - ((v5 - 1) & 0xFFFFFFF8);
    v48 = v5;
    while ( v48 <= 7 )
    {
      hkcdDynamicTree::InplaceStorage_8_hkcdDynamicTree_Aniso_598623::releaseAll((hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUlong::Self> *)v90);
      hkcdDynamicTree::InplaceStorage_8_hkcdDynamicTree_Aniso_598623::releaseAll((hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUlong::Self> *)v90);
      v94 = 0;
      v92 = 0;
      v93 = 0;
      v51 = *((uint32_t *)v50 + 49);
      v45 = v43;
      v46 = v44;
      v52 = v48;
      if ( v48 > 0 )
        goto LABEL_9;
LABEL_21:
      v81[0] = (hkMemoryAllocator::Self **)v80;
      v82 = 0.0;
      v83 = 0.0;
      *(float *)&v84 = -0.0;
      LODWORD(v86) = 64;
      v82 = COERCE_FLOAT(hkLifoAllocator::fastBlockAlloc(*address, 512));
      v85 = (void *)LODWORD(v82);
      v84 = -2147483584;
      hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::binary_hkcdDynamicTree_Tree_hkc_b8faa5(
        1,
        (int)(uintptr_t)(v90),
        (int)(uintptr_t)(v90),
        (hkArrayBase<hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag, 64, 0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUlong::Self>>, hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUlong::Self>>>> *)&v82,
        v81,
        nullptr,
        nullptr);
      if ( (void *)LODWORD(v82) == v85 )
        v83 = 0.0;
      hkLifoAllocator::fastBlockFree(*address, (char *)v85, (8 * LODWORD(v86) + 127) & 0xFFFFFF80);
      v83 = 0.0;
      if ( v84 >= 0 )
        (*(void (**)(uint32_t *, float, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          COERCE_FLOAT(LODWORD(v82)),
          8 * v84);
      for ( i = 0; i != 96; i += 32 )
      {
        v82 = 0.0;
        v83 = 0.0;
        *(float *)&v84 = -0.0;
        LODWORD(v86) = 64;
        v80[1] = *((uint32_t *)v50 + 48);
        v81[0] = (hkMemoryAllocator::Self **)v80;
        v82 = COERCE_FLOAT(hkLifoAllocator::fastBlockAlloc(*address, 512));
        v85 = (void *)LODWORD(v82);
        v84 = -2147483584;
        hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::binary_hkcdDynamicTree_Tree_hkc_bf7b66(
          0,
          (int)(uintptr_t)(v90),
          (int)(uintptr_t)(v50) + i + 64,
          (hkArrayBase<hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag, 64, 0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUlong::Self>>, hkpTreeBroadPhaseSpatialTree16>> *)&v82,
          v81,
          nullptr,
          0);
        v39 = 0.0;
        if ( (void *)LODWORD(v82) != v85 )
          v39 = v83;
        v83 = v39;
        v40 = *address;
        v41 = (8 * LODWORD(v86) + 127) & 0xFFFFFF80;
        if ( v41 > *((uint32_t *)*address + 2) || *((void **)v40 + 3) != (char *)v85 + v41 || v85 == *((void **)v40 + 5) )
          hkLifoAllocator::slowBlockFree(v40, (char *)v85, (8 * LODWORD(v86) + 127) & 0xFFFFFF80);
        else
          *((uint32_t *)v40 + 3) = (uint32_t)(uintptr_t)(v85);
        v83 = 0.0;
        if ( v84 >= 0 )
          (*(void (**)(uint32_t *, float, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            COERCE_FLOAT(LODWORD(v82)),
            8 * v84);
      }
      hkpTreeBroadPhase::addHandles(v50, v53, v54, v52);
      v48 -= 8;
      v53 = (hkpBroadPhaseHandle **)((char *)v53 + v46);
      v44 -= 32;
      v43 -= 256;
      v54 = (hkAabb::Self *)((char *)v54 + v45);
      result = (hkArrayUtil::Self *)v42;
      if ( v48 == v42 )
        return result;
    }
    hkcdDynamicTree::InplaceStorage_8_hkcdDynamicTree_Aniso_598623::releaseAll((hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUlong::Self> *)v90);
    hkcdDynamicTree::InplaceStorage_8_hkcdDynamicTree_Aniso_598623::releaseAll((hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUlong::Self> *)v90);
    v94 = 0;
    v92 = 0;
    v93 = 0;
    v45 = 256;
    v46 = 32;
    v52 = 8;
    v51 = *((uint32_t *)v50 + 49);
LABEL_9:
    v60 = 0;
    v59 = (float *)v54;
    do
    {
      *(uint32_t *)v53[v60] = v60 + v51;
      v58 = v91;
      v21 = v53[v60];
      v22 = (int *)&v90[6 * v91];
      v91 = *v22;
      v22[10] = (int)(uintptr_t)(v21);
      v22[9] = 0;
      v66 = v22;
      v23 = v59[2];
      v24 = *v59;
      *v22 = *(uint32_t *)v59;
      v25 = v59[1];
      *((float *)v22 + 2) = v23;
      *((float *)v22 + 1) = v25;
      v77 = v25;
      v26 = *((void **)v59 + 3);
      v22[3] = (int)(uintptr_t)(v26);
      v73 = v26;
      v27 = v59[4];
      *((float *)v22 + 4) = v27;
      v70 = v27;
      v28 = v59[5];
      *((float *)v22 + 5) = v28;
      v29 = v59[6];
      v82 = v24;
      v30 = v29;
      v68 = v29;
      v31 = v66;
      v83 = v77;
      *(float *)&v84 = v23;
      v85 = v73;
      v87 = v28;
      *((float *)v66 + 6) = v30;
      v86 = v70;
      v88 = v68;
      v32 = v59[7];
      *((float *)v66 + 7) = v32;
      v89 = v32;
      if ( v94 != 0 )
      {
        v9 = (hkMemoryAllocator::Self **)&v90[6 * v94];
        v10 = (int *)&v90[6 * v91];
        v91 = *v10;
        v55 = (char *)v10;
        v11 = v9[9];
        if ( v11 != nullptr )
        {
          v47 = v66;
          v65 = v82 + v86;
          v57 = v86 - v82;
          v64 = v83 + v87;
          v62 = v87 - v83;
          v63 = *(float *)&v84 + v88;
          v56 = v88 - *(float *)&v84;
          do
          {
            v33 = 3 * (uint32_t)(uintptr_t)(v11);
            v34 = v9[10];
            v35 = &v90[2 * v33];
            v81[0] = (hkMemoryAllocator::Self **)v35;
            v36 = &v90[6 * (int)(uintptr_t)(v34)];
            v81[1] = (hkMemoryAllocator::Self **)v36;
            hkAabb::includeAabb((hkAabb::Self *)v9, (const hkAabb::Self *)&v82);
            v37 = *((float *)v35 + 2);
            v78 = *((float *)v35 + 4);
            v74 = *((float *)v35 + 6);
            v71 = *((float *)v36 + 1);
            v72 = *(float *)v36;
            v69 = *((float *)v36 + 2);
            v75 = *((float *)v35 + 5);
            v61 = *((float *)v35 + 1);
            v67 = *((float *)v36 + 6);
            v9 = v81[(float)((float)((float)((float)((float)(v75 - v61) + v62)
                                           + (float)((float)(v78 - *(float *)v35) + v57))
                                   + (float)((float)(v74 - v37) + v56))
                           * (float)((float)((float)((float)((float)(*(float *)v35 + v78) - v65)
                                                   * (float)((float)(*(float *)v35 + v78) - v65))
                                           + (float)((float)((float)(v61 + v75) - v64)
                                                   * (float)((float)(v61 + v75) - v64)))
                                   + (float)((float)((float)(v37 + v74) - v63) * (float)((float)(v37 + v74) - v63)))) > (float)((float)((float)((float)(v67 - v69) + v56) + (float)((float)((float)(*((float *)v36 + 5) - v71) + v62) + (float)((float)(*((float *)v36 + 4) - *(float *)v36) + v57))) * (float)((float)((float)((float)((float)(v72 + *((float *)v36 + 4)) - v65) * (float)((float)(v72 + *((float *)v36 + 4)) - v65)) + (float)((float)((float)(v71 + *((float *)v36 + 5)) - v64) * (float)((float)(v71 + *((float *)v36 + 5)) - v64))) + (float)((float)((float)(v69 + v67) - v63) * (float)((float)(v69 + v67) - v63))))];
            v11 = v9[9];
          }
          while ( v11 != nullptr );
          v31 = v47;
        }
        v12 = v9[8];
        v13 = -1431655765 * ((v55 - (char *)v90) >> 4);
        if ( v12 != nullptr )
        {
          v76 = -1431655765 * (((char *)v9 - (char *)v90) >> 4);
          *((uint32_t *)&v90[6 * (int)(uintptr_t)(v12) + 4] + (v76 == LODWORD(v90[6 * (int)(uintptr_t)(v12) + 5])) + 1) = v13;
        }
        else
        {
          v94 = -1431655765 * ((v55 - (char *)v90) >> 4);
          v76 = -1431655765 * (((char *)v9 - (char *)v90) >> 4);
        }
        *((uint32_t *)v55 + 8) = (uint32_t)(uintptr_t)(v9[8]);
        *((uint32_t *)v55 + 9) = v76;
        *((uint32_t *)v55 + 10) = v58;
        v9[8] = (hkMemoryAllocator::Self *)v13;
        v31[8] = v13;
        v14 = fminf(*((float *)v9 + 1), v83);
        v15 = fminf(*((float *)v9 + 2), *(float *)&v84);
        v16 = fminf(*((float *)v9 + 3), *(float *)&v85);
        v17 = fmaxf(*((float *)v9 + 4), v86);
        v18 = fmaxf(*((float *)v9 + 5), v87);
        v19 = fmaxf(*((float *)v9 + 6), v88);
        v20 = fmaxf(*((float *)v9 + 7), v89);
        *(float *)v55 = fminf(*(float *)v9, v82);
        *((float *)v55 + 1) = v14;
        *((float *)v55 + 2) = v15;
        *((float *)v55 + 3) = v16;
        *((float *)v55 + 4) = v17;
        *((float *)v55 + 5) = v18;
        *((float *)v55 + 6) = v19;
        *((float *)v55 + 7) = v20;
      }
      else
      {
        v94 = v58;
        v66[8] = 0;
      }
      ++v92;
      ++v60;
      v59 += 8;
    }
    while ( v60 < v52 );
    goto LABEL_21;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::addObject  (binary VA: 0x17ddb10)
// Original: hkpTreeBroadPhase::addObject
// ----------------------------------------------------------------------------
hkArrayUtil::Self * hkpTreeBroadPhase::addObject(hkpTreeBroadPhase::Self *a1, hkpBroadPhaseHandle *a2, int *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float a12, float a13, float a14, float a15, float a16, float a17, float a18, float a19)
{
  int *v19;
  int v20;
  int v21;
  int v22;
  float v23; // xmm6_4
  float v24; // xmm5_4
  float v25; // xmm4_4
  int v26;
  int v27;
  float v28; // xmm4_4
  float v29; // xmm5_4
  float v30; // xmm7_4
  float v31; // xmm4_4
  float v32; // xmm3_4
  float v33; // xmm2_4
  float v34; // xmm1_4
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v38; // xmm4_4
  float v39; // xmm5_4
  float v40; // xmm7_4
  float v41; // xmm4_4
  float v42; // xmm3_4
  float v43; // xmm2_4
  float v44; // xmm1_4
  float v45; // xmm2_4
  float v46; // xmm1_4
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
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
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v47)) > _g4_s0 ? (4u + sizeof(_g4_t_v47)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v48)) > _g4_s1 ? (8u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v49)) > _g4_s2 ? (12u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v50)) > _g4_s3 ? (16u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v51)) > _g4_s4 ? (16u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v52)) > _g4_s5 ? (20u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v53)) > _g4_s6 ? (24u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v54)) > _g4_s7 ? (28u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v55)) > _g4_s8 ? (28u + sizeof(_g4_t_v55)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v56)) > _g4_s9 ? (32u + sizeof(_g4_t_v56)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v57)) > _g4_s10 ? (32u + sizeof(_g4_t_v57)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v58)) > _g4_s11 ? (36u + sizeof(_g4_t_v58)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v59)) > _g4_s12 ? (36u + sizeof(_g4_t_v59)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v60)) > _g4_s13 ? (40u + sizeof(_g4_t_v60)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v61)) > _g4_s14 ? (40u + sizeof(_g4_t_v61)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v62)) > _g4_s15 ? (44u + sizeof(_g4_t_v62)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v63)) > _g4_s16 ? (44u + sizeof(_g4_t_v63)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v64)) > _g4_s17 ? (48u + sizeof(_g4_t_v64)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v65)) > _g4_s18 ? (52u + sizeof(_g4_t_v65)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v66)) > _g4_s19 ? (56u + sizeof(_g4_t_v66)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v67)) > _g4_s20 ? (60u + sizeof(_g4_t_v67)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v68)) > _g4_s21 ? (64u + sizeof(_g4_t_v68)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v69)) > _g4_s22 ? (68u + sizeof(_g4_t_v69)) : _g4_s22,
    _g4_s24 = (72u + sizeof(_g4_t_v70)) > _g4_s23 ? (72u + sizeof(_g4_t_v70)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v71)) > _g4_s24 ? (76u + sizeof(_g4_t_v71)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 12u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 36u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 36u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 40u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 40u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 44u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 52u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 56u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 60u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 64u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 68u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 72u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 76u);

  v19 = a3;
  v20 = *((uint32_t *)a1 + 76);
  if ( v20 != 0 )
  {
    G4_VCALL<void>(v20, 28, a2, a3, a4, 0, v47, v48, v49, v50, v52, v53, v54, v56, v58, v60, v62, COERCE_FLOAT(LODWORD(v64)), COERCE_FLOAT(LODWORD(v65)), COERCE_FLOAT(LODWORD(v66)), COERCE_FLOAT(LODWORD(v67)), COERCE_FLOAT(LODWORD(v68)), COERCE_FLOAT(LODWORD(v69)), COERCE_FLOAT(LODWORD(v70)), COERCE_FLOAT(LODWORD(v71)));
    v21 = *v19;
    a5 = v19[1];
    a4 = v21;
    v22 = v19[3];
    a6 = v19[2];
    a7 = v22;
    v23 = (float)v22;
    v24 = (float)((float)a5 * *((float *)a1 + 73)) + *((float *)a1 + 61);
    v25 = (float)a6 * *((float *)a1 + 74);
    v26 = v19[5];
    a8 = v19[4];
    a9 = v26;
    v27 = v19[7];
    a10 = v19[6];
    a11 = v27;
    v28 = v25 + *((float *)a1 + 62);
    a13 = v24;
    v29 = *((float *)a1 + 75);
    v30 = (float)v21 * *((float *)a1 + 72);
    a14 = v28;
    v31 = *((float *)a1 + 63);
    a12 = v30 + *((float *)a1 + 60);
    a15 = (float)(v23 * v29) + v31;
    v32 = (float)a8 * *((float *)a1 + 72);
    v33 = (float)a9 * *((float *)a1 + 73);
    v34 = (float)a10 * *((float *)a1 + 74);
    a19 = (float)((float)v27 * v29) + v31;
    v35 = v33 + *((float *)a1 + 61);
    v36 = v34 + *((float *)a1 + 62);
    a16 = v32 + *((float *)a1 + 60);
    a17 = v35;
    a18 = v36;
    return (hkArrayUtil::Self *)(hkpTreeBroadPhase::addHandles(a1, &a2, (const hkAabb::Self *)&a12, 1));
  }
  else
  {
    v51 = *a3;
    v55 = a3[3];
    v57 = a3[4];
    v59 = a3[5];
    v61 = a3[6];
    v63 = a3[7];
    v38 = (float)((float)a3[2] * *((float *)a1 + 74)) + *((float *)a1 + 62);
    v65 = (float)((float)a3[1] * *((float *)a1 + 73)) + *((float *)a1 + 61);
    v39 = *((float *)a1 + 75);
    v40 = (float)v51 * *((float *)a1 + 72);
    v66 = v38;
    v41 = *((float *)a1 + 63);
    v64 = v40 + *((float *)a1 + 60);
    v67 = (float)((float)v55 * v39) + v41;
    v42 = (float)v57 * *((float *)a1 + 72);
    v43 = (float)v59 * *((float *)a1 + 73);
    v44 = (float)v61 * *((float *)a1 + 74);
    v71 = (float)((float)v63 * v39) + v41;
    v45 = v43 + *((float *)a1 + 61);
    v46 = v44 + *((float *)a1 + 62);
    v68 = v42 + *((float *)a1 + 60);
    v69 = v45;
    v70 = v46;
    return hkpTreeBroadPhase::addHandlesStandalone((int *)a1, &a2, (hkAabb::Self *)&v64, 1, a4);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::addObject  (binary VA: 0x17dddf0)
// Original: hkpTreeBroadPhase::addObject
// ----------------------------------------------------------------------------
hkArrayUtil::Self * hkpTreeBroadPhase::addObject(hkpTreeBroadPhase::Self *a1, hkpBroadPhaseHandle *a2, hkAabb::Self *a3, int a4)
{
  const hkAabb::Self *v4;
  int v5;

  v4 = a3;
  v5 = *((uint32_t *)a1 + 76);
  if ( v5 == 0 )
    return hkpTreeBroadPhase::addHandlesStandalone((int *)a1, &a2, a3, 1, a4);
  G4_VCALL<void>(v5, 32, a2, a3, a4, 0);
  return (hkArrayUtil::Self *)(hkpTreeBroadPhase::addHandles(a1, &a2, v4, 1));
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::addObjectBatch  (binary VA: 0x17dde90)
// Original: hkpTreeBroadPhase::addObjectBatch
// ----------------------------------------------------------------------------
hkArrayUtil::Self * hkpTreeBroadPhase::addObjectBatch(hkpTreeBroadPhase::Self *a1, int a2, hkAabb::Self **a3, int a4)
{
  int v4;

  v4 = *((uint32_t *)a1 + 76);
  if ( v4 == 0 )
    return hkpTreeBroadPhase::addHandlesStandalone(
             (int *)a1,
             *(hkpBroadPhaseHandle ***)a2,
             *a3,
             *(uint32_t *)(a2 + 4),
             a4);
  G4_VCALL<void>(v4, 36, a2, a3, a4);
  return (hkArrayUtil::Self *)(hkpTreeBroadPhase::addHandles(a1, *(const hkpBroadPhaseHandle *const **)a2, *a3, *(uint32_t *)(a2 + 4)));
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::castRay  (binary VA: 0x17de6b0)
// Original: hkpTreeBroadPhase::castRay
// ----------------------------------------------------------------------------
void hkpTreeBroadPhase::castRay(int a1, int a2, float a3, int a4)
{
  int v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char *v18;
  int v19;
  int v20;
  hkLifoAllocator::Self *v21;
  int v22;
  int v23;
  float *v24;
  float v25;
  float v26;
  hkLifoAllocator::Self *v27;
  char *v28;
  typedef int _g4_t_v29;
  typedef unsigned int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef hkLifoAllocator::Self **_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef int _g4_t_i;
  typedef int _g4_t_v38;
  typedef float *_g4_t_v39;
  typedef char *_g4_t_v40;
  typedef float _g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef float _g4_t_v44[3];
  typedef char *_g4_t_v45;
  typedef char *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef char *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef float _g4_t_v50[3];
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef uint8_t _g4_t_v60[345];
  typedef char _g4_t_v61;
  enum : size_t {
    _g4_s0 = 608u,
    _g4_s1 = (8u + sizeof(_g4_t_v29)) > _g4_s0 ? (8u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v30)) > _g4_s1 ? (12u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v31)) > _g4_s2 ? (16u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v32)) > _g4_s3 ? (20u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v33)) > _g4_s4 ? (24u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v34)) > _g4_s5 ? (32u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v35)) > _g4_s6 ? (36u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_address)) > _g4_s7 ? (60u + sizeof(_g4_t_address)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_i)) > _g4_s8 ? (68u + sizeof(_g4_t_i)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v38)) > _g4_s9 ? (68u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v39)) > _g4_s10 ? (72u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v40)) > _g4_s11 ? (72u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v41)) > _g4_s12 ? (76u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v42)) > _g4_s13 ? (76u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v43)) > _g4_s14 ? (80u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v44)) > _g4_s15 ? (84u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v45)) > _g4_s16 ? (96u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v46)) > _g4_s17 ? (100u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v47)) > _g4_s18 ? (104u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v48)) > _g4_s19 ? (108u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v49)) > _g4_s20 ? (112u + sizeof(_g4_t_v49)) : _g4_s20,
    _g4_s22 = (128u + sizeof(_g4_t_v50)) > _g4_s21 ? (128u + sizeof(_g4_t_v50)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v51)) > _g4_s22 ? (140u + sizeof(_g4_t_v51)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v52)) > _g4_s23 ? (144u + sizeof(_g4_t_v52)) : _g4_s23,
    _g4_s25 = (148u + sizeof(_g4_t_v53)) > _g4_s24 ? (148u + sizeof(_g4_t_v53)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v54)) > _g4_s25 ? (152u + sizeof(_g4_t_v54)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v55)) > _g4_s26 ? (156u + sizeof(_g4_t_v55)) : _g4_s26,
    _g4_s28 = (160u + sizeof(_g4_t_v56)) > _g4_s27 ? (160u + sizeof(_g4_t_v56)) : _g4_s27,
    _g4_s29 = (164u + sizeof(_g4_t_v57)) > _g4_s28 ? (164u + sizeof(_g4_t_v57)) : _g4_s28,
    _g4_s30 = (168u + sizeof(_g4_t_v58)) > _g4_s29 ? (168u + sizeof(_g4_t_v58)) : _g4_s29,
    _g4_s31 = (172u + sizeof(_g4_t_v59)) > _g4_s30 ? (172u + sizeof(_g4_t_v59)) : _g4_s30,
    _g4_s32 = (176u + sizeof(_g4_t_v60)) > _g4_s31 ? (176u + sizeof(_g4_t_v60)) : _g4_s31,
    _g4_s33 = (521u + sizeof(_g4_t_v61)) > _g4_s32 ? (521u + sizeof(_g4_t_v61)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 60u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 68u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 68u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 72u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 72u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 76u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 76u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 80u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 84u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 96u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 100u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 104u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 108u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 112u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 128u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 140u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 144u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 148u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 152u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 156u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 160u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 164u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 168u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 172u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 176u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 521u);

  v4 = *(uint32_t *)(a2 + 16);
  if ( v4 <= 1 )
  {
    v44[2] = 0.0;
    v44[1] = a3;
    v23 = 1;
    v44[0] = 1.0;
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v38 = a1 + 64;
    do
    {
      v43 = *(uint32_t *)(a1 + 12 * (v23 == 4) + 192);
      v24 = *(float **)(a2 + 20);
      *(float *)v60 = *v24 - *(float *)a2;
      *(float *)&v60[4] = v24[1] - *(float *)(a2 + 4);
      *(float *)&v60[8] = v24[2] - *(float *)(a2 + 8);
      *(float *)&v60[12] = v24[3] - *(float *)(a2 + 12);
      hkcdRay_setDirection((unsigned int *)v60, v44, (int)(uintptr_t)(v50));
      v25 = *(float *)(a2 + 8);
      v50[0] = *(float *)a2;
      v51 = *(uint32_t *)(a2 + 12);
      v26 = *(float *)(a2 + 4);
      *(uint32_t *)v60 = (uint32_t)(uintptr_t)(&v43);
      *(uint32_t *)&v60[16] = *(uint32_t *)a2;
      *(uint32_t *)&v60[28] = v51;
      *(uint32_t *)&v60[32] = v52;
      *(uint32_t *)&v60[36] = v53;
      *(uint32_t *)&v60[40] = v54;
      *(uint32_t *)&v60[44] = v55;
      *(uint32_t *)&v60[48] = v56;
      *(uint32_t *)&v60[52] = v57;
      *(uint32_t *)&v60[56] = v58;
      v50[2] = v25;
      *(float *)&v60[24] = v25;
      v50[1] = v26;
      *(uint32_t *)&v60[64] = -1;
      *(float *)&v60[20] = v26;
      *(uint32_t *)&v60[60] = v59;
      v45 = nullptr;
      v46 = nullptr;
      v47 = 0x80000000;
      v49 = 64;
      v27 = *address;
      v28 = *((char **)*address + 3);
      if ( *((int *)*address + 2) > 127 && (unsigned int)(uintptr_t)(v28 + 128) <= *((uint32_t *)v27 + 4) )
        *((uint32_t *)v27 + 3) = (uint32_t)(uintptr_t)(v28 + 128);
      else
        v28 = (char *)hkLifoAllocator::allocateFromNewSlab(v27, 128);
      v45 = v28;
      v48 = v28;
      v47 = -2147483584;
      ++v23;
      hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_6d4fe5(
        v38,
        (int *)&v45,
        (float *)v60);
      hkLocalArray_unsigned_short_375ea3::Destroy((hkLocalArray<unsigned short> *)&v45);
      v38 += 32;
    }
    while ( v23 != 5 );
  }
  else
  {
    v45 = nullptr;
    v32 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v46 = (char *)hkLifoAllocator::fastBlockAlloc(*v32, (4 * v4 + 127) & 0xFFFFFF80);
    v47 = hkLifoAllocator::fastBlockAlloc(*v32, (16 * *(uint32_t *)(a2 + 16) + 127) & 0xFFFFFF80);
    v48 = (char *)hkLifoAllocator::fastBlockAlloc(*v32, (4 * *(uint32_t *)(a2 + 16) + 127) & 0xFFFFFF80);
    v49 = a4 == 0;
    if ( *(int *)(a2 + 16) <= 0 )
    {
      v34 = *(uint32_t *)(a2 + 16);
    }
    else
    {
      v41 = a3;
      v5 = 0;
      do
      {
        v6 = (char *)(v47 + 16 * v5);
        v7 = *(uint32_t *)(a2 + 24) * v5;
        v8 = *(uint32_t *)(a2 + 20);
        *(uint32_t *)v6 = *(uint32_t *)(v8 + v7);
        *((uint32_t *)v6 + 1) = *(uint32_t *)(v8 + v7 + 4);
        *((uint32_t *)v6 + 2) = *(uint32_t *)(v8 + v7 + 8);
        *((uint32_t *)v6 + 3) = *(uint32_t *)(v8 + v7 + 12);
        *(float *)&v46[4 * v5] = v41;
        *(uint32_t *)&v48[4 * v5++] = 1065353216;
        LODWORD(v41) += a4;
      }
      while ( *(uint32_t *)(a2 + 16) > v5 );
      v34 = *(uint32_t *)(a2 + 16);
    }
    v29 = 1;
    v9 = v34;
    v31 = a1 + 64;
    while ( 1 )
    {
      v10 = v47;
      v45 = *(char **)(a1 + 12 * (v29 == 4) + 192);
      v30 = (48 * v9 + 127) & 0xFFFFFF80;
      v11 = hkLifoAllocator::fastBlockAlloc(*v32, v30);
      v33 = (char *)v11;
      if ( v9 > 0 )
      {
        v12 = v11;
        v13 = (float *)v10;
        v14 = 0;
        do
        {
          v50[0] = 1.0;
          v39 = v13;
          v42 = (uint32_t *)v12;
          ++v14;
          *(float *)v60 = *v13 - *(float *)a2;
          *(float *)&v60[4] = v13[1] - *(float *)(a2 + 4);
          *(float *)&v60[8] = v13[2] - *(float *)(a2 + 8);
          *(float *)&v60[12] = v13[3] - *(float *)(a2 + 12);
          hkcdRay_setDirection((unsigned int *)v60, v50, v12);
          v12 = (int)(uintptr_t)(v42 + 12);
          v13 = v39 + 4;
          *v42 = *(uint32_t *)a2;
          v42[1] = *(uint32_t *)(a2 + 4);
          v42[2] = *(uint32_t *)(a2 + 8);
          v42[3] = *(uint32_t *)(a2 + 12);
        }
        while ( v14 != v34 );
        *(uint32_t *)&v60[336] = 0;
        *(uint32_t *)v60 = (uint32_t)(uintptr_t)(&v45);
        v35 = 0;
        v15 = v34;
        do
        {
          v16 = 4;
          v17 = v15 - v35;
          if ( v17 <= 4 )
            v16 = v17;
          if ( v16 > 0 )
          {
            v40 = (char *)(v60);
            v18 = &v33[48 * v35];
            for ( i = 0; i != v16; ++i )
            {
              v19 = *(uint32_t *)v18;
              v18 += 48;
              *((uint32_t *)v40 + 4) = v19;
              *((uint32_t *)v40 + 5) = *((uint32_t *)v18 - 11);
              *((uint32_t *)v40 + 6) = *((uint32_t *)v18 - 10);
              *((uint32_t *)v40 + 7) = *((uint32_t *)v18 - 9);
              v20 = v40 - (char *)(v60);
              *(uint32_t *)&v60[v20 + 32] = *((uint32_t *)v18 - 8);
              *(uint32_t *)&v60[v20 + 36] = *((uint32_t *)v18 - 7);
              *(uint32_t *)&v60[v20 + 40] = *((uint32_t *)v18 - 6);
              *(uint32_t *)&v60[v20 + 44] = *((uint32_t *)v18 - 5);
              *(uint32_t *)&v60[v20 + 48] = *((uint32_t *)v18 - 4);
              *(uint32_t *)&v60[v20 + 52] = *((uint32_t *)v18 - 3);
              *(uint32_t *)&v60[v20 + 56] = *((uint32_t *)v18 - 2);
              *(uint32_t *)&v60[v20 + 60] = *((uint32_t *)v18 - 1);
              v40 += 48;
            }
          }
          v50[0] = 0.0;
          v50[1] = 0.0;
          v50[2] = -0.0;
          v52 = 64;
          v61 = (1 << v16) - 1;
          v60[344] = v61;
          *(uint32_t *)&v60[340] = v35;
          v21 = *v32;
          v22 = *((uint32_t *)*v32 + 3);
          if ( *((int *)*v32 + 2) > 127 && (unsigned int)(v22 + 128) <= *((uint32_t *)v21 + 4) )
            *((uint32_t *)v21 + 3) = v22 + 128;
          else
            v22 = hkLifoAllocator::allocateFromNewSlab(v21, 128);
          LODWORD(v50[0]) = v22;
          v51 = v22;
          LODWORD(v50[2]) = -2147483584;
          hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_213e2e(
            v31,
            (int *)v50,
            (int)(uintptr_t)(v60));
          hkLocalArray_unsigned_short_375ea3::Destroy((hkLocalArray<unsigned short> *)v50);
          v35 += v16;
          v15 = v34;
        }
        while ( v35 < v34 );
      }
      hkLifoAllocator::fastBlockFree(*v32, v33, v30);
      ++v29;
      v31 += 32;
      if ( v29 == 5 )
        break;
      v34 = *(uint32_t *)(a2 + 16);
      v9 = v34;
    }
    hkLifoAllocator::fastBlockFree(*v32, v48, (4 * *(uint32_t *)(a2 + 16) + 127) & 0xFFFFFF80);
    hkLifoAllocator::fastBlockFree(*v32, (char *)v47, (16 * *(uint32_t *)(a2 + 16) + 127) & 0xFFFFFF80);
    hkLifoAllocator::fastBlockFree(*v32, v46, (4 * *(uint32_t *)(a2 + 16) + 127) & 0xFFFFFF80);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase::shiftBroadPhase  (binary VA: 0x17deee0)
// Original: hkpTreeBroadPhase::shiftBroadPhase
// ----------------------------------------------------------------------------
void hkpTreeBroadPhase::shiftBroadPhase(int a1, int a2, uint32_t *a3)
{
  typedef int _g4_t_v3;
  typedef int _g4_t_v4[3];
  typedef int _g4_t_v5[135];
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v5)) > _g4_s2 ? (16u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);

  hkErrStream::Construct((hkErrStream::Self *)v4, (hkString::Self *)v5, 512);
  hkOstream::opShl((int)(uintptr_t)(v4), (hkString::Self *)"shiftBroadPhase is not supported by the tree broadphase");
  hkError::messageWarning(
    (hkError::Self *)0xA2B0295F,
    (int)(uintptr_t)(v5),
    "BroadPhase/TreeBroadPhase/hkpTreeBroadPhase.cpp",
    (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_3E4)->st_value,
    v3);
  hkErrStream::Destroy((hkErrStream::Self *)v4);
  *a3 = 0;
  a3[1] = 0;
  a3[2] = 0;
  a3[3] = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::getAabbCacheSize  (binary VA: 0x17ffba0)
// Original: hkpTreeBroadPhase32::getAabbCacheSize
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::getAabbCacheSize(hkpTreeBroadPhase32::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 76);
  result = 0;
  if ( v1 != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)v1 + 112))(*((uint32_t *)self + 76));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::calcAabbCache  (binary VA: 0x17ffbd0)
// Original: hkpTreeBroadPhase32::calcAabbCache
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::calcAabbCache(hkpTreeBroadPhase32::Self *self, const hkAabb::Self *a2, char *a3)
{
  int result;

  result = *((uint32_t *)self + 76);
  if ( result != 0 )
    return G4_VCALL<int>(result, 116, a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::calcAabbCache  (binary VA: 0x17ffc00)
// Original: hkpTreeBroadPhase32::calcAabbCache
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::calcAabbCache(int a1, int a2, int a3)
{
  int result;

  result = *(uint32_t *)(a1 + 304);
  if ( result != 0 )
    return G4_VCALL<int>(result, 120, a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::getType  (binary VA: 0x17ffc30)
// Original: hkpTreeBroadPhase32::getType
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::getType()
{
  return 3;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::set32BitOffsetAndScale  (binary VA: 0x17ffc60)
// Original: hkpTreeBroadPhase32::set32BitOffsetAndScale
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::set32BitOffsetAndScale(hkpTreeBroadPhase32::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4)
{
  int v4; // xmm2_4
  int v5; // xmm4_4
  int v6;
  float v7; // xmm1_4
  __m128i v8;
  int v9;
  int v10; // xmm1_4
  float v11; // xmm1_4
  __m128i v12;
  int v13;
  int v14; // xmm1_4
  __m128i v15;
  int v16;
  int v17;
  int result;

  v4 = *((uint32_t *)self + 63);
  v5 = *((uint32_t *)self + 75);
  v6 = *((uint32_t *)self + 76);
  if ( v6 != 0 )
    G4_VCALL<void>(v6, 128, a2, a3, a4);
  *((float *)self + 60) = -*(float *)a2;
  *((float *)self + 61) = -*((float *)a2 + 1);
  v7 = *((float *)a2 + 2);
  *((uint32_t *)self + 63) = v4;
  *((float *)self + 62) = -v7;
g4_m128_raw(v8) = *(unsigned int *)a4;
  v9 = _mm_cvtsi128_si32(v8);
  v10 = (2130706432 - v9) & ((v9 ^ (v9 + 2139095040)) >> 31);
  v11 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v8)
                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v8) * *(float *)&v10)) * *(float *)&v10)))
      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v8) * *(float *)&v10)) * *(float *)&v10);
  *((float *)self + 72) = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v8) * v11)) * v11;
g4_m128_raw(v12) = *((unsigned int *)a4 + 1);
  v13 = _mm_cvtsi128_si32(v12);
  v14 = (2130706432 - v13) & ((v13 ^ (v13 + 2139095040)) >> 31);
  *((float *)self + 73) = (float)(2.0
                                - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                        * (float)((float)(2.0
                                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                                                * (float)((float)(2.0
                                                                                - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                                                                        * *(float *)&v14))
                                                                        * *(float *)&v14)))
                                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v14))
                                                        * *(float *)&v14))))
                        * (float)((float)(2.0
                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v14))
                                                        * *(float *)&v14)))
                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v14))
                                        * *(float *)&v14));
g4_m128_raw(v15) = *((unsigned int *)a4 + 2);
  v16 = _mm_cvtsi128_si32(v15);
  *((uint32_t *)self + 75) = v5;
  v17 = (2130706432 - v16) & ((v16 ^ (v16 + 2139095040)) >> 31);
  *((float *)self + 74) = (float)(2.0
                                - (float)(*(float *)g4_m128_ptr<int32_t>(v15)
                                        * (float)((float)(2.0
                                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v15)
                                                                * (float)((float)(2.0
                                                                                - (float)(*(float *)g4_m128_ptr<int32_t>(v15)
                                                                                        * *(float *)&v17))
                                                                        * *(float *)&v17)))
                                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)&v17))
                                                        * *(float *)&v17))))
                        * (float)((float)(2.0
                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v15)
                                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)&v17))
                                                        * *(float *)&v17)))
                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)&v17))
                                        * *(float *)&v17));
  *((uint32_t *)self + 64) = *(uint32_t *)a2;
  *((uint32_t *)self + 65) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 66) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 67) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 68) = *(uint32_t *)a3;
  *((uint32_t *)self + 69) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 70) = *((uint32_t *)a3 + 2);
  result = *((uint32_t *)a3 + 3);
  *((uint32_t *)self + 71) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::getCapabilityDelegate  (binary VA: 0x17ffec0)
// Original: hkpTreeBroadPhase32::getCapabilityDelegate
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::getCapabilityDelegate(int a1, int a2)
{
  int result;
  int v3;

  result = a1;
  if ( (a2 & *(uint32_t *)(a1 + 12)) == 0 )
  {
    v3 = *(uint32_t *)(a1 + 304);
    if ( v3 != 0 )
      return G4_VCALL<int>(v3, 24, a2);
    else
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::getNumObjects  (binary VA: 0x17fff00)
// Original: hkpTreeBroadPhase32::getNumObjects
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::getNumObjects(hkpTreeBroadPhase32::Self *self)
{
  int v1;

  v1 = *((uint32_t *)self + 76);
  if ( v1 != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)v1 + 48))(*((uint32_t *)self + 76));
  else
    return *((uint32_t *)self + 44)
         + *((uint32_t *)self + 36)
         + *((uint32_t *)self + 28)
         + *((uint32_t *)self + 20)
         + *((uint32_t *)self + 12);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::getOffsetLowHigh32bit  (binary VA: 0x17fff40)
// Original: hkpTreeBroadPhase32::getOffsetLowHigh32bit
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::getOffsetLowHigh32bit(hkpTreeBroadPhase32::Self *self, hkVector4f::Self *a2, hkVector4f::Self *a3)
{
  int v3;
  int result;

  v3 = *((uint32_t *)self + 76);
  if ( v3 != 0 )
    return G4_VCALL<int>(v3, 104, a3, a3);
  *(uint32_t *)a2 = *((uint32_t *)self + 64);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 65);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 66);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 67);
  *(uint32_t *)a3 = *((uint32_t *)self + 68);
  *((uint32_t *)a3 + 1) = *((uint32_t *)self + 69);
  *((uint32_t *)a3 + 2) = *((uint32_t *)self + 70);
  result = *((uint32_t *)self + 71);
  *((uint32_t *)a3 + 3) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::getAabb  (binary VA: 0x17fffd0)
// Original: hkpTreeBroadPhase32::getAabb
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::getAabb(hkpTreeBroadPhase32::Self *self, const hkpBroadPhaseHandle *a2, hkAabb::Self *a3)
{
  int v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  uint32_t *v7;
  int result;

  v3 = *((uint32_t *)self + 76);
  v4 = *(uint32_t *)a2;
  if ( v3 == 0 )
  {
    v5 = v4 >> 31;
    goto LABEL_3;
  }
  v5 = v4 >> 31;
  if ( v5 != 0 )
  {
LABEL_3:
    v6 = *((uint32_t *)self + 3 * v5 + 48) + 8 * *(uint32_t *)a2;
    v7 = (uint32_t *)(*(uint32_t *)((char *)self + (*(uint16_t *)(v6 + 6) & 0x1E0) + 32) + 48
                                                                                  * (*(uint32_t *)(v6 + 4) & 0x1FFFFF));
    *(uint32_t *)a3 = *v7;
    *((uint32_t *)a3 + 1) = v7[1];
    *((uint32_t *)a3 + 2) = v7[2];
    *((uint32_t *)a3 + 3) = v7[3];
    *((uint32_t *)a3 + 4) = v7[4];
    *((uint32_t *)a3 + 5) = v7[5];
    *((uint32_t *)a3 + 6) = v7[6];
    result = v7[7];
    *((uint32_t *)a3 + 7) = result;
    return result;
  }
  return G4_VCALL<int>(v3, 72, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::Destroy  (binary VA: 0x1800200)
// Original: hkpTreeBroadPhase32::~hkpTreeBroadPhase32
// ----------------------------------------------------------------------------
void hkpTreeBroadPhase32::Destroy(hkpTreeBroadPhase32::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  uint32_t *v7;
  int v8;
  hkpTreeBroadPhase32::Self *v9;
  int v10;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1028);
  v1 = *((uint32_t *)self + 76);
  if ( v1 != 0 && *(uint16_t *)(v1 + 6) != 0 )
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
  v6 = 5;
  v7 = (uint32_t *)((char *)self + 32);
  do
  {
    v8 = v7[2];
    v7[1] = 0;
    if ( v8 >= 0 )
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *v7,
        48 * v8);
    --v6;
    *v7 = 0;
    v7[2] = 0x80000000;
    v7 += 8;
  }
  while ( v6 != 0 );
  v9 = (hkpTreeBroadPhase32::Self *)((char *)self + 216);
  do
  {
    v9 = (hkpTreeBroadPhase32::Self *)((char *)v9 - 12);
    v10 = *((uint32_t *)v9 + 2);
    *((uint32_t *)v9 + 1) = 0;
    if ( v10 >= 0 )
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *(uint32_t *)v9,
        8 * v10);
    *(uint32_t *)v9 = 0;
    *((uint32_t *)v9 + 2) = 0x80000000;
  }
  while ( (hkpTreeBroadPhase32::Self *)((char *)self + 192) != v9 );
  hkpBroadPhase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::Destroy_ea1800330  (binary VA: 0x1800330)
// Original: hkpTreeBroadPhase32::~hkpTreeBroadPhase32
// ----------------------------------------------------------------------------
void hkpTreeBroadPhase32::Destroy_ea1800330(hkpTreeBroadPhase32::Self *self)
{
  int v1;
  int v2;

  hkpTreeBroadPhase32::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 320;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::getAllAabbs  (binary VA: 0x1800600)
// Original: hkpTreeBroadPhase32::getAllAabbs
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::getAllAabbs(int a1, hkMemoryAllocator::Self *a2)
{
  int v2;
  int result;
  uint32_t *v4;
  int v5;
  int v6;
  int i;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  int v14;
  uint32_t *v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  int v19;
  int v20;

  v2 = *(uint32_t *)(a1 + 304);
  if ( v2 == 0 )
  {
    *((uint32_t *)a2 + 1) = 0;
    v4 = (uint32_t *)(a1 + 32);
    v20 = 5;
    while ( 1 )
    {
      result = v4[6];
      v19 = result;
      if ( result != 0 )
        break;
LABEL_17:
      v4 += 8;
      if ( --v20 == 0 )
        return result;
    }
    v5 = *v4;
    v6 = 48 * result;
    i = *(uint32_t *)(*v4 + 48 * result + 36);
    if ( i == 0 )
    {
      v14 = *((uint32_t *)a2 + 1);
      if ( v14 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
      {
        v18 = v4;
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 32, v16);
        v14 = *((uint32_t *)a2 + 1);
        v4 = v18;
      }
      *((uint32_t *)a2 + 1) = v14 + 1;
      v15 = (uint32_t *)(*v4 + v6);
      result = *(uint32_t *)a2 + 32 * v14;
      *(uint32_t *)result = *v15;
      *(uint32_t *)(result + 4) = v15[1];
      *(uint32_t *)(result + 8) = v15[2];
      *(uint32_t *)(result + 12) = v15[3];
      *(uint32_t *)(result + 16) = v15[4];
      *(uint32_t *)(result + 20) = v15[5];
      *(uint32_t *)(result + 24) = v15[6];
      *(uint32_t *)(result + 28) = v15[7];
      goto LABEL_17;
    }
    v17 = v4;
    while ( 1 )
    {
      v8 = 48 * i;
      v9 = *(uint32_t *)(v5 + 48 * i + 36);
      if ( v9 == 0 )
        goto LABEL_9;
      do
      {
        do
        {
          i = v9;
          v8 = 48 * v9;
          v9 = *(uint32_t *)(v5 + 48 * v9 + 36);
        }
        while ( v9 != 0 );
LABEL_9:
        v10 = *((uint32_t *)a2 + 1);
        if ( v10 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 32, v16);
          v10 = *((uint32_t *)a2 + 1);
        }
        *((uint32_t *)a2 + 1) = v10 + 1;
        v11 = (uint32_t *)(*(uint32_t *)a2 + 32 * v10);
        v12 = (uint32_t *)(*v17 + v8);
        *v11 = *v12;
        v11[1] = v12[1];
        v11[2] = v12[2];
        v11[3] = v12[3];
        v11[4] = v12[4];
        v11[5] = v12[5];
        v11[6] = v12[6];
        v11[7] = v12[7];
        v5 = *v17;
        v13 = v8 + *v17;
        v9 = *(uint32_t *)(v13 + 36);
      }
      while ( v9 != 0 );
      result = *(uint32_t *)(v13 + 32);
      if ( v19 != result )
      {
        if ( i == *(uint32_t *)(v5 + 48 * result + 40) )
        {
          for ( i = *(uint32_t *)(v13 + 32); ; i = result )
          {
            result = *(uint32_t *)(v5 + 48 * result + 32);
            if ( v19 == result )
              break;
            if ( *(uint32_t *)(v5 + 48 * result + 40) != i )
              goto LABEL_14;
          }
        }
        else
        {
LABEL_14:
          if ( result == 0 )
            goto LABEL_15;
        }
      }
      if ( *(uint32_t *)(v5 + 48 * result + 40) == i && v19 == result )
      {
LABEL_16:
        v4 = v17;
        goto LABEL_17;
      }
      i = *(uint32_t *)(v5 + 48 * result + 40);
LABEL_15:
      if ( i == 0 )
        goto LABEL_16;
    }
  }
  return G4_VCALL<int>(v2, 68, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::getExtents  (binary VA: 0x1800870)
// Original: hkpTreeBroadPhase32::getExtents
// ----------------------------------------------------------------------------
hkVector4f::Self * hkpTreeBroadPhase32::getExtents(hkpTreeBroadPhase32::Self *self, hkVector4f::Self *a2, hkVector4f::Self *a3)
{
  int v3;
  uint32_t *v5;
  int v6;
  float v7; // xmm6_4
  float v8; // xmm7_4
  int v9;
  float v10; // xmm2_4
  float v11; // xmm5_4
  float v12; // xmm3_4
  float v13; // xmm4_4
  __m128i v14;
  unsigned int v15;
  int v16;
  float v17; // xmm0_4
  __m128i v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  float v28;
  int v29;
  int64_t v30;
  int v31;
  int v32;
  float v33;
  int v34;
  float v35;
  int v36;
  float v37;
  int v38;
  float v39;
  int v40;
  float v41;
  int v42;
  float v43;

  v3 = *((uint32_t *)self + 76);
  if ( v3 != 0 )
    return (hkVector4f::Self *)G4_VCALL<int>(v3, 76, a2, a3, v19, v20, v21, v22, v23, v24, v25, v26, v27, v29, v31, v32, v34, v36, v38, v40, v42);
  v5 = (uint32_t *)((char *)self + 32);
  v6 = 5;
  v7 = 3.40282e38f;
  v8 = 3.40282e38f;
  v9 = *((uint32_t *)self + 14);
  v10 = -3.40282e38f;
  v11 = 3.40282e38f;
  v12 = -3.40282e38f;
  v13 = 3.40282e38f;
g4_m128_raw(v14) = (g4_int128_t)_mm_xor_ps(g4_m128_from<__m128>(0x80000000), g4_m128_u32(0x7F7FFFEEu));
  v15 = _mm_cvtsi128_si32(v14);
  v28 = *(float *)g4_m128_ptr<int32_t>(v14);
  v43 = -3.40282e38f;
  if ( v9 == 0 )
    goto LABEL_7;
LABEL_4:
  v16 = *v5 + 48 * v9;
  v30 = *(uint64_t *)v16;
  v33 = *(float *)(v16 + 8);
  v35 = *(float *)(v16 + 12);
  v37 = *(float *)(v16 + 16);
  v39 = *(float *)(v16 + 20);
  v41 = *(float *)(v16 + 24);
  v17 = *(float *)(v16 + 28);
  while ( 1 )
  {
    --v6;
    v8 = fminf(v8, *(float *)&v30);
    v7 = fminf(v7, *((float *)&v30 + 1));
    v11 = fminf(v11, v33);
    v13 = fminf(v13, v35);
    v43 = fmaxf(v43, v41);
    v18 = _mm_cvtsi32_si128(v15);
    *(float *)g4_m128_ptr<int32_t>(v18) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v18), v17);
    v5 += 8;
    v12 = fmaxf(v12, v37);
    v10 = fmaxf(v10, v39);
    if ( v6 == 0 )
      break;
    v9 = v5[6];
    v15 = _mm_cvtsi128_si32(v18);
    if ( v9 != 0 )
      goto LABEL_4;
LABEL_7:
    v41 = -3.40282e38f;
    v39 = -3.40282e38f;
    v37 = -3.40282e38f;
    v35 = 3.40282e38f;
    v33 = 3.40282e38f;
    v17 = v28;
    v30 = 0x7F7FFFEE7F7FFFEELL;
  }
  *(float *)a2 = v8;
  *((float *)a2 + 1) = v7;
  *((float *)a2 + 2) = v11;
  *((float *)a2 + 3) = v13;
  *(float *)a3 = v12;
  *((float *)a3 + 1) = v10;
  *((float *)a3 + 2) = v43;
  *((uint32_t *)a3 + 3) =g4_m128_lane<int32_t>(v18, 0);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::areAabbsOverlapping  (binary VA: 0x1800ab0)
// Original: hkpTreeBroadPhase32::areAabbsOverlapping
// ----------------------------------------------------------------------------
char hkpTreeBroadPhase32::areAabbsOverlapping(hkpTreeBroadPhase32::Self *self, const hkpBroadPhaseHandle *a2, const hkpBroadPhaseHandle *a3)
{
  int v3;
  char result;
  typedef float _g4_t_v5[8];
  typedef float _g4_t_v6[10];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v6)) > _g4_s1 ? (32u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);

  v3 = *((uint32_t *)self + 76);
  if ( v3 != 0 && *(int *)a2 >= 0 && *(int *)a3 >= 0 )
    return G4_VCALL<int>(v3, 92, a2, a3);
  G4_VCALL<void>(self, 72, a2, v5);
  G4_VCALL<void>(self, 72, a3, v6);
  result = 0;
  if ( v5[0] <= v6[4] && v5[1] <= v6[5] && v5[2] <= v6[6] && v6[0] <= v5[4] && v6[1] <= v5[5] )
    return v6[2] <= v5[6];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhaseInternals::ConvexQuerySorted::processLeaf_ea1800b80  (binary VA: 0x1800b80)
// Original: hkpTreeBroadPhaseInternals::ConvexQuerySorted::processLeaf
// ----------------------------------------------------------------------------
int hkpTreeBroadPhaseInternals::ConvexQuerySorted::processLeaf_ea1800b80(int a1, int a2)
{
  hkMemoryAllocator::Self *v2;
  float v3; // xmm0_4
  float v4; // xmm3_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  int v7;
  int v8; // xmm1_4
  int v9;
  int v10;
  int result;
  int v12;

  v2 = *(hkMemoryAllocator::Self **)(a1 + 4);
  v3 = (float)(fminf(*(float *)a2 * *(float *)(a1 + 32), *(float *)(a1 + 32) * *(float *)(a2 + 16))
             + fminf(*(float *)(a2 + 4) * *(float *)(a1 + 36), *(float *)(a1 + 36) * *(float *)(a2 + 20)))
     + fminf(*(float *)(a2 + 8) * *(float *)(a1 + 40), *(float *)(a1 + 40) * *(float *)(a2 + 24));
  v4 = 1.0 * v3;
  v5 = 0.0 * v3;
  v6 = v3 * 0.0;
  v7 = *((uint32_t *)v2 + 1);
  v8 = v7 | 0x3F000000;
  v9 = *(uint32_t *)(*(uint32_t *)a1 + 8 * *(uint32_t *)(*(uint32_t *)(a2 + 32) + 40));
  if ( v7 == (*((uint32_t *)v2 + 2) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v2, 4, v12);
    v7 = *((uint32_t *)v2 + 1);
  }
  *(uint32_t *)(*(uint32_t *)v2 + 4 * v7) = v9;
  ++*((uint32_t *)v2 + 1);
  v10 = *(uint32_t *)(a1 + 12);
  if ( v10 == (*(uint32_t *)(a1 + 16) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 8), 16, v12);
    v10 = *(uint32_t *)(a1 + 12);
  }
  result = *(uint32_t *)(a1 + 8) + 16 * v10;
  *(float *)result = v4;
  *(float *)(result + 4) = v5;
  *(float *)(result + 8) = v6;
  *(uint32_t *)(result + 12) = v8;
  ++*(uint32_t *)(a1 + 12);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::getMemoryFootPrint  (binary VA: 0x1800d30)
// Original: hkpTreeBroadPhase32::getMemoryFootPrint
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::getMemoryFootPrint(hkpTreeBroadPhase32::Self *self)
{
  return 48 * *((uint32_t *)self + 41)
       + 48 * *((uint32_t *)self + 25)
       + 48 * *((uint32_t *)self + 9)
       + 48 * *((uint32_t *)self + 17)
       + 68
       + 32
       + 48 * *((uint32_t *)self + 33)
       + 32
       + 32
       + 8 * (*((uint32_t *)self + 52) + *((uint32_t *)self + 49));
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::updateHandlesMapping  (binary VA: 0x1800da0)
// Original: hkpTreeBroadPhase32::updateHandlesMapping
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::updateHandlesMapping(hkpTreeBroadPhase32::Self *self)
{
  int v1;
  int v2;
  uint32_t *v3;
  unsigned int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  int result;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v16)) > _g4_s3 ? (8u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v17)) > _g4_s4 ? (12u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v18)) > _g4_s5 ? (16u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);

  v17 = 0;
  v1 = *((uint32_t *)self + 49);
  v14 = v1;
  if ( v1 == 0
    || (v18 = 8 * v1,
        v17 = (*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
                (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                &v18),
        v13 = v18 / 8,
        v18 / 8 == 0) )
  {
    v13 = 0x80000000;
  }
  v2 = 0;
  v3 = (uint32_t *)v17;
  if ( v14 > 0 )
  {
    do
    {
      ++v2;
      v4 = v3[1] & 0xFFE00000;
      *v3 = 0;
      v3[1] = v4;
      v3 += 2;
      *((uint16_t *)v3 - 1) = HIWORD(v4) & 0xFE1F;
      *((uint8_t *)v3 - 1) = 0;
    }
    while ( v2 != v14 );
  }
  if ( *((int *)self + 49) <= 0 )
  {
    v5 = *((uint32_t *)self + 48);
  }
  else
  {
    v5 = *((uint32_t *)self + 48);
    v15 = *((uint32_t *)self + 49);
    v6 = 0;
    do
    {
      v7 = v5 + 8 * v6;
      if ( *(uint32_t *)v7 != 0 )
      {
        v8 = v17 + 8 * **(uint32_t **)v7;
        v9 = *(uint32_t **)v7;
        v16 = *(uint32_t *)(v7 + 4);
        *(uint32_t *)v8 = *(uint32_t *)v7;
        *(uint32_t *)(v8 + 4) = v16;
        *(uint32_t *)(*(uint32_t *)((char *)self + (*(uint16_t *)(v8 + 6) & 0x1E0) + 32)
                  + 48 * (*(uint32_t *)(v8 + 4) & 0x1FFFFF)
                  + 40) = *v9;
        v5 = *((uint32_t *)self + 48);
        v15 = *((uint32_t *)self + 49);
      }
      ++v6;
    }
    while ( v6 < v15 );
  }
  v10 = v14;
  if ( v14 > 1 )
  {
    v11 = v14 - 1;
    if ( *(uint32_t *)(v17 + 8 * (v14 - 1)) == 0 )
    {
      v10 = v14 - 1;
      if ( v14 == 2 )
      {
LABEL_18:
        v10 = 1;
      }
      else
      {
        while ( 1 )
        {
          --v11;
          if ( *(uint32_t *)(v17 + 8 * v11) != 0 )
            break;
          v10 = v11;
          if ( v11 == 1 )
            goto LABEL_18;
        }
      }
    }
  }
  *((uint32_t *)self + 49) = v10;
  result = *((uint32_t *)self + 50);
  *((uint32_t *)self + 48) = v17;
  *((uint32_t *)self + 50) = v13;
  if ( result >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v5,
             8 * result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::defragment  (binary VA: 0x1800f90)
// Original: hkpTreeBroadPhase32::defragment
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::defragment(hkpTreeBroadPhase32::Self *self)
{
  int v1;
  int v2;
  int v3;
  int result;

  v1 = *((uint32_t *)self + 76);
  if ( v1 != 0 )
  {
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 60))(*((uint32_t *)self + 76));
    hkpTreeBroadPhase32::updateHandlesMapping(self);
  }
  v2 = *((uint32_t *)self + 49);
  if ( v2 < (*((uint32_t *)self + 50) & 0x3FFFFFFF) )
    hkArrayUtil::reduce(&hkContainerHeapAllocator::s_alloc, (int *)self + 48, 8, 0, v2);
  v3 = *((uint32_t *)self + 52);
  result = *((uint32_t *)self + 53) & 0x3FFFFFFF;
  if ( v3 < result )
    return hkArrayUtil::reduce(&hkContainerHeapAllocator::s_alloc, (int *)self + 51, 8, 0, v3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::indexAndCompact  (binary VA: 0x1801050)
// Original: hkpTreeBroadPhase32::indexAndCompact
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::indexAndCompact(hkpTreeBroadPhase32::Self *self, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;

  v2 = *((uint32_t *)self + 49) - a2;
  result = *((uint32_t *)self + 48) + 8 * v2;
  if ( a2 > 0 )
  {
    v7 = result + 8 * a2;
    do
    {
      if ( *(uint32_t *)result != 0 )
      {
        v4 = *(uint32_t *)(result + 4);
        v5 = *((uint32_t *)self + 48) + 8 * **(uint32_t **)result;
        v6 = *(uint32_t **)result;
        *(uint32_t *)v5 = *(uint32_t *)result;
        *(uint32_t *)(v5 + 4) = v4;
        *(uint32_t *)(*(uint32_t *)((char *)self + (*(uint16_t *)(v5 + 6) & 0x1E0) + 32) + 48 * (v4 & 0x1FFFFF) + 40) = *v6;
      }
      result += 8;
    }
    while ( result != v7 );
    v2 = *((uint32_t *)self + 49) - a2;
  }
  *((uint32_t *)self + 49) = v2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::setJitterMargin  (binary VA: 0x18010f0)
// Original: hkpTreeBroadPhase32::setJitterMargin
// ----------------------------------------------------------------------------
hkpTreeBroadPhase32::Self * hkpTreeBroadPhase32::setJitterMargin(hkpTreeBroadPhase32::Self *self, float a2)
{
  *((float *)self + 56) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::setUpdateQuality  (binary VA: 0x1801110)
// Original: hkpTreeBroadPhase32::setUpdateQuality
// ----------------------------------------------------------------------------
hkpTreeBroadPhase32::Self * hkpTreeBroadPhase32::setUpdateQuality(hkpTreeBroadPhase32::Self *self, float a2)
{
  *((float *)self + 57) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::setMotionPredictionFactor  (binary VA: 0x1801130)
// Original: hkpTreeBroadPhase32::setMotionPredictionFactor
// ----------------------------------------------------------------------------
hkpTreeBroadPhase32::Self * hkpTreeBroadPhase32::setMotionPredictionFactor(hkpTreeBroadPhase32::Self *self, float a2)
{
  *((float *)self + 58) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::setCacheQuality  (binary VA: 0x1801150)
// Original: hkpTreeBroadPhase32::setCacheQuality
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::setCacheQuality(hkpTreeBroadPhase32::Self *self, int a2)
{
  *((uint32_t *)self + 59) = a2 | 0x3F000000;
  return a2 | 0x3F000000;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::Construct  (binary VA: 0x1801170)
// Original: hkpTreeBroadPhase32::hkpTreeBroadPhase32
// ----------------------------------------------------------------------------
void hkpTreeBroadPhase32::Construct(hkpTreeBroadPhase32::Self *self, hkpBroadPhase::Self *a2)
{
  int v2;
  int32_t v3; // kr00_4
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  hkpBroadPhase::Construct((int)(uintptr_t)(self), 3, 224, 0);
  *((uint32_t *)self + 48) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1028);
  *((uint32_t *)self + 49) = 0;
  *((uint32_t *)self + 50) = 0x80000000;
  *((uint32_t *)self + 51) = 0;
  *((uint32_t *)self + 52) = 0;
  *((uint32_t *)self + 53) = 0x80000000;
  *((uint32_t *)self + 76) = (uint32_t)(uintptr_t)(a2);
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v3 = *((uint32_t *)a2 + 1);
      HIWORD(v2) = HIWORD(v3);
      LOWORD(v2) = 0;
    }
    while ( v3 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v3, v2 | (uint16_t)(v3 + 1)) );
  }
  hkpTreeBroadPhase32::setJitterMargin(self, 0.01f);
  hkpTreeBroadPhase32::setUpdateQuality(self, 0.016666668f);
  hkpTreeBroadPhase32::setMotionPredictionFactor(self, 2.0);
  hkpTreeBroadPhase32::setCacheQuality(self, 0);
  v4 = *((uint32_t *)self + 49);
  v5 = *((uint32_t *)self + 50) & 0x3FFFFFFF;
  *((uint32_t *)self + 60) = 0;
  *((uint32_t *)self + 61) = 0;
  *((uint32_t *)self + 62) = 0;
  *((uint32_t *)self + 63) = 0;
  *((uint32_t *)self + 72) = 0;
  *((uint32_t *)self + 73) = 0;
  *((uint32_t *)self + 74) = 0;
  *((uint32_t *)self + 75) = 0;
  *((uint8_t *)self + 308) = 0;
  if ( v4 == v5 )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpTreeBroadPhase32::Self *)((char *)self + 192),
      8,
      v8);
    v4 = *((uint32_t *)self + 49);
  }
  v6 = *((uint32_t *)self + 48) + 8 * v4;
  v7 = *(uint32_t *)(v6 + 4);
  *(uint32_t *)v6 = 0;
  v7 &= 0xFFE00000;
  *(uint32_t *)(v6 + 4) = v7;
  *(uint16_t *)(v6 + 6) = HIWORD(v7) & 0xFE1F;
  *(uint8_t *)(v6 + 7) = 0;
  *((uint32_t *)self + 9) = 0;
  ++*((uint32_t *)self + 49);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 18) = 0x80000000;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 26) = 0x80000000;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 34) = 0x80000000;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 42) = 0x80000000;
  *((uint32_t *)self + 43) = 0;
  *((uint32_t *)self + 46) = 0;
  *((uint32_t *)self + 44) = 0;
  *((uint32_t *)self + 45) = 0;
  *((uint32_t *)self + 47) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32_createTreeBroadPhase  (binary VA: 0x1801490)
// Original: hkpTreeBroadPhase32_createTreeBroadPhase
// ----------------------------------------------------------------------------
hkpTreeBroadPhase32::Self * hkpTreeBroadPhase32_createTreeBroadPhase(hkpBroadPhase::Self *a1)
{
  int address;
  hkpTreeBroadPhase32::Self *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (hkpTreeBroadPhase32::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                *(uint32_t *)(*(uint32_t *)address + 44),
                                320);
  hkpTreeBroadPhase32::Construct(v2, a1);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::removeHandles  (binary VA: 0x1801b50)
// Original: hkpTreeBroadPhase32::removeHandles
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::removeHandles(hkpTreeBroadPhase32::Self *self, const hkpBroadPhaseHandle *const *a2, int a3)
{
  int result;
  int v4;
  hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *v5;
  int v6;
  typedef unsigned int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint8_t _g4_t_v9[44];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v9)) > _g4_s2 ? (16u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  v8 = 0;
  result = a3;
  if ( a3 > 0 )
  {
    do
    {
      v4 = *((uint32_t *)self + 48) + 8 * *(uint32_t *)a2[v8];
      v5 = (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *)((hkpTreeBroadPhase32::Self *)((char *)self + (*(uint16_t *)(v4 + 6) & 0x1E0) + 32));
      v7 = *(uint32_t *)(v4 + 4) & 0x1FFFFF;
      std::memcpy(v9, (const void *)(*(uint32_t *)v5 + 48 * v7), 32);
      hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::internalRemove(v5, v7, (const hkAabb::Self *)v9);
      *(uint32_t *)(*(uint32_t *)v5 + 48 * v7) = *((uint32_t *)v5 + 3);
      --*((uint32_t *)v5 + 4);
      *((uint32_t *)v5 + 3) = v7;
      v6 = *(uint32_t *)(v4 + 4);
      *(uint32_t *)v4 = 0;
      v6 &= 0xFFE00000;
      *(uint32_t *)(v4 + 4) = v6;
      *(uint16_t *)(v4 + 6) = HIWORD(v6) & 0xFE1F;
      *(uint8_t *)(v4 + 7) = 0;
      result = ++v8;
    }
    while ( v8 != a3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::removeUserObjects  (binary VA: 0x1801c70)
// Original: hkpTreeBroadPhase32::removeUserObjects
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::removeUserObjects(hkpTreeBroadPhase32::Self *self, int a2, hkpBroadPhaseHandle *const *a3)
{
  int result;
  int v4;
  unsigned int v5;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef unsigned int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[44];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v13)) > _g4_s3 ? (20u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v14)) > _g4_s4 ? (24u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v15)) > _g4_s5 ? (28u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v16)) > _g4_s6 ? (32u + sizeof(_g4_t_v16)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);

  v14 = 0;
  result = a2;
  if ( a2 > 0 )
  {
    do
    {
      v4 = *(uint32_t *)a3[v14] & 0x7FFFFFFF;
      v13 = *((uint32_t *)self + 52) - 1;
      v11 = 8 * *(uint32_t *)a3[v14];
      v10 = *((uint32_t *)self + 51) + v11;
      **(uint32_t **)v10 = 0;
      v5 = *(uint32_t *)(v10 + 4) & 0x1FFFFF;
      v15 = 48 * v5;
      std::memcpy(v16, (const void *)(*((uint32_t *)self + 40) + 48 * v5), 32);
      v12 = v5;
      hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::internalRemove(
        (hkpTreeBroadPhase32::Self *)((char *)self + 160),
        v5,
        (const hkAabb::Self *)v16);
      *(uint32_t *)(*((uint32_t *)self + 40) + v15) = *((uint32_t *)self + 43);
      v6 = *((uint32_t *)self + 52) - 1;
      --*((uint32_t *)self + 44);
      *((uint32_t *)self + 43) = v12;
      *((uint32_t *)self + 52) = v6;
      v7 = *((uint32_t *)self + 51);
      if ( v4 != v6 )
      {
        v8 = (uint32_t *)(v7 + 8 * v6);
        v9 = (uint32_t *)(v11 + v7);
        *v9 = *v8;
        v9[1] = v8[1];
      }
      if ( v4 < v13 )
      {
        *(uint32_t *)(*((uint32_t *)self + 40) + 48 * (*(uint32_t *)(v10 + 4) & 0x1FFFFF) + 40) = v4;
        **(uint32_t **)v10 = v4 | 0x80000000;
      }
      result = ++v14;
    }
    while ( v14 != a2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::compact  (binary VA: 0x1802320)
// Original: hkpTreeBroadPhase32::compact
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::compact(hkpTreeBroadPhase32::Self *self)
{
  int result;
  int v2;
  unsigned int v3;
  int v4;
  int32_t v5;
  int32_t v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  typedef int _g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef __m128i _g4_t_v19;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v16)) > _g4_s3 ? (20u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v18)) > _g4_s5 ? (28u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v19)) > _g4_s6 ? (32u + sizeof(_g4_t_v19)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);

  v13 = 0;
  v15 = (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *)((hkpTreeBroadPhase32::Self *)((char *)self + 32));
  do
  {
    result = (int)(uintptr_t)(v15);
    if ( *((uint32_t *)v15 + 4) <= 1u )
      goto LABEL_4;
    result = (int)(uintptr_t)(v15);
    if ( *((uint32_t *)v15 + 6) == 0 )
      goto LABEL_4;
    v17 = 0;
    v16 = 0;
    v18 = 0x80000000;
    v19 = g4_to_m128i(0);
    hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::copyTo_hkcdDynamicTree_Tree_hkc_ca3b00(
      v15,
      (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *)&v16);
    v2 = *(uint32_t *)v15;
    *(uint32_t *)v15 = v16;
    v3 = v18;
    *((uint32_t *)v15 + 1) = v17;
    v4 = *((uint32_t *)v15 + 2);
    v5 = *((uint32_t *)v15 + 3);
    *((uint32_t *)v15 + 2) = v3;
    v6 =g4_m128_lane<int32_t>(v19, 0);
    v16 = v2;
    v18 = v4;
g4_m128_lane<int32_t>(v19, 0) = v5;
    *((uint32_t *)v15 + 3) = v6;
    *((uint32_t *)v15 + 6) = 1;
    v17 = 0;
    if ( v4 < 0 )
    {
      v7 = 1;
    }
    else
    {
      result = (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
                 (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                 v2,
                 48 * v4);
      v7 = *((uint32_t *)v15 + 6);
      if ( v7 == 0 )
        goto LABEL_4;
    }
    v8 = *(uint32_t *)v15;
    while ( 1 )
    {
      v9 = v8 + 48 * v7;
      v10 = *(uint32_t *)(v9 + 36);
      if ( v10 == 0 )
      {
        v14 = (uint32_t *)((char *)self + 12 * (v13 == 4) + 192);
        *(uint32_t *)(*v14 + 8 * *(uint32_t *)(v9 + 40) + 4) = v7 & 0x1FFFFF
                                                         | *(uint32_t *)(*v14 + 8 * *(uint32_t *)(v9 + 40) + 4) & 0xFFE00000;
        v8 = *(uint32_t *)v15;
        result = 48 * v7 + *(uint32_t *)v15;
        v10 = *(uint32_t *)(result + 36);
        if ( v10 != 0 )
          goto LABEL_14;
        v11 = *(uint32_t *)(result + 32);
        if ( v11 == 0 )
          goto LABEL_4;
        result = 48 * v11;
        v10 = *(uint32_t *)(v8 + 48 * v11 + 40);
        if ( v10 == v7 )
          break;
LABEL_13:
        if ( v10 == 0 )
          goto LABEL_4;
      }
LABEL_14:
      v7 = v10;
    }
    while ( 1 )
    {
      result = 48 * v11;
      v12 = *(uint32_t *)(v8 + 48 * v11 + 32);
      if ( v12 == 0 )
        break;
      result = 48 * v12;
      v10 = *(uint32_t *)(v8 + 48 * v12 + 40);
      if ( v11 != v10 )
        goto LABEL_13;
      v11 = *(uint32_t *)(v8 + 48 * v11 + 32);
    }
LABEL_4:
    ++v13;
    v15 = (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *)((char *)v15 + 32);
  }
  while ( v13 != 5 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::optimize  (binary VA: 0x1802520)
// Original: hkpTreeBroadPhase32::optimize
// ----------------------------------------------------------------------------
uint32_t * hkpTreeBroadPhase32::optimize(hkpTreeBroadPhase32::Self *self, float a2, int a3)
{
  hkpTreeBroadPhase32::Self *v3;
  hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *v4;
  unsigned int v5;
  float v6; // xmm0_4
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  bool v16;
  uint32_t *v17;
  uint32_t *result;
  int i;
  unsigned int v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef uint32_t _g4_t_v25[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v22)) > _g4_s1 ? (8u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v23)) > _g4_s2 ? (8u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v24)) > _g4_s3 ? (12u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v25)) > _g4_s4 ? (16u + sizeof(_g4_t_v25)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);

  v3 = self;
  v21 = 4;
  v4 = (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *)((hkpTreeBroadPhase32::Self *)((char *)self + 64));
  if ( a2 > 0.0 )
  {
    do
    {
      v5 = *((uint32_t *)v4 + 4);
      if ( v5 != 0 )
      {
        v6 = (float)((float)((float)((float)HIWORD(v5) * 65536.0) + (float)(uint16_t)v5) * a2) + 0.5;
        v7 = 1;
        if ( (int)v6 > 0 )
          v7 = (int)v6;
        v22 = v7;
        v8 = *((uint32_t *)v4 + 6);
        if ( v8 != 0 )
        {
          v9 = *(uint32_t *)v4;
          if ( *(uint32_t *)(*(uint32_t *)v4 + 48 * v8 + 36) != 0 )
          {
            while ( 1 )
            {
              v10 = *((uint32_t *)v4 + 5);
              *((uint32_t *)v4 + 5) = v10 + 1;
              v11 = v9 + 48 * v8;
              do
              {
                v12 = v10;
                v10 = __builtin_rotateright32(v10, 1);
                v11 = 48 * *(uint32_t *)(v11 + 4 * ((v12 & 1) + 8) + 4) + v9;
              }
              while ( *(uint32_t *)(v11 + 36) != 0 );
              v13 = (v11 - v9) >> 4;
              v24 = -1431655765 * v13;
              std::memcpy(v25, (const void *)(16 * v13 + v9), 32);
              v14 = hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::internalRemove(
                      v4,
                      -1431655765 * v13,
                      (const hkAabb::Self *)v25);
              if ( v14 != 0 )
              {
                v15 = *(uint32_t *)(*(uint32_t *)v4 + 48 * v14 + 32);
                if ( v15 != 0 )
                {
                  v14 = *(uint32_t *)(*(uint32_t *)v4 + 48 * v15 + 32);
                  if ( v14 == 0 )
                    v14 = v15;
                }
              }
              hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::internalInsert(v4, v24, v14);
              if ( --v22 == 0 )
                break;
              v8 = *((uint32_t *)v4 + 6);
              v9 = *(uint32_t *)v4;
            }
          }
        }
      }
      v16 = v21-- == 1;
      v4 = (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *)((char *)v4 + 32);
    }
    while ( !v16 );
    v3 = self;
  }
  v17 = (uint32_t *)((char *)v3 + 64);
  result = v25;
  v23 = 1;
  if ( a3 > 0 )
  {
    do
    {
      v25[0] = *((uint32_t *)self + 3 * (v23 == 4) + 48);
      result = (uint32_t *)v17[4];
      if ( result != nullptr )
      {
        for ( i = 0; i != a3; ++i )
        {
          v20 = v17[7];
          v17[7] = v20 + 1;
          result = (uint32_t *)(uintptr_t)hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self>::sortBranch<hkpTreeBroadPhaseInternals::MappingUpdater>(
                     v17,
                     v20,
                     v25,
                     0xFFFF);
        }
      }
      ++v23;
      v17 += 8;
    }
    while ( v23 != 5 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::updateUserObjects  (binary VA: 0x1802840)
// Original: hkpTreeBroadPhase32::updateUserObjects
// ----------------------------------------------------------------------------
const hkVector4f::Self * hkpTreeBroadPhase32::updateUserObjects(hkpTreeBroadPhase32::Self *self, const hkVector4f::Self *a2, const hkpBroadPhaseHandle *const *a3, const hkAabb::Self *a4, const hkVector4f::Self *a5)
{
  const hkVector4f::Self *result;
  float *v6;
  float *v7;
  bool v8;
  char v9;
  char v10;
  float v11; // xmm4_4
  char v12;
  bool v13;
  char v14;
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm5_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  int v22;
  char v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  unsigned int v27;
  __m128i v28;
  unsigned int v29;
  __m128i v30;
  unsigned int v31;
  __m128 v32;
  __m128i v33;
  unsigned int v34;
  __m128i v35;
  __m128i v36;
  __m128 v37;
  unsigned int v38;
  __m128i v39;
  __m128 v40;
  unsigned int v41;
  __m128 v42;
  __m128 v43;
  const hkAabb::Self *v44;
  float *v45;
  bool v46;
  char v47;
  char v48;
  float v49; // xmm6_4
  char v50;
  bool v51;
  char v52;
  char v53;
  __m128 v54;
  __m128 v55;
  float v56; // xmm5_4
  float v57; // xmm2_4
  float v58; // xmm1_4
  float v59; // xmm0_4
  float v60; // xmm4_4
  int v61;
  char v62;
  __m128i v63;
  unsigned int v64;
  __m128i v65;
  unsigned int v66;
  __m128i v67;
  unsigned int v68;
  __m128 v69;
  __m128i v70;
  __m128i v71;
  __m128 v72;
  unsigned int v73;
  __m128i v74;
  __m128 v75;
  __m128 v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef const hkVector4f::Self *_g4_t_v81;
  typedef unsigned int _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef char _g4_t_v85;
  typedef uint8_t _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef char _g4_t_v89;
  typedef uint8_t _g4_t_v90;
  typedef const hkVector4f::Self *_g4_t_v91;
  typedef const hkVector4f::Self *_g4_t_v92;
  typedef char _g4_t_v93;
  typedef int32_t _g4_t_v94;
  typedef char _g4_t_v95;
  typedef __m128 _g4_t_v96[2];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v77)) > _g4_s0 ? (4u + sizeof(_g4_t_v77)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v78)) > _g4_s1 ? (8u + sizeof(_g4_t_v78)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v79)) > _g4_s2 ? (12u + sizeof(_g4_t_v79)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v80)) > _g4_s3 ? (16u + sizeof(_g4_t_v80)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v81)) > _g4_s4 ? (20u + sizeof(_g4_t_v81)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v82)) > _g4_s5 ? (24u + sizeof(_g4_t_v82)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v83)) > _g4_s6 ? (28u + sizeof(_g4_t_v83)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v84)) > _g4_s7 ? (32u + sizeof(_g4_t_v84)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v85)) > _g4_s8 ? (36u + sizeof(_g4_t_v85)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v86)) > _g4_s9 ? (36u + sizeof(_g4_t_v86)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v87)) > _g4_s10 ? (36u + sizeof(_g4_t_v87)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v88)) > _g4_s11 ? (36u + sizeof(_g4_t_v88)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v89)) > _g4_s12 ? (36u + sizeof(_g4_t_v89)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v90)) > _g4_s13 ? (36u + sizeof(_g4_t_v90)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v91)) > _g4_s14 ? (40u + sizeof(_g4_t_v91)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v92)) > _g4_s15 ? (40u + sizeof(_g4_t_v92)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v93)) > _g4_s16 ? (44u + sizeof(_g4_t_v93)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v94)) > _g4_s17 ? (44u + sizeof(_g4_t_v94)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v95)) > _g4_s18 ? (44u + sizeof(_g4_t_v95)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v96)) > _g4_s19 ? (48u + sizeof(_g4_t_v96)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 4u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 8u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 12u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 16u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 20u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 24u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 28u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 32u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 36u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 36u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 36u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 36u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 36u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 36u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 40u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 40u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 44u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 44u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 44u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 48u);

  result = a5;
  v78 = *((float *)self + 56);
  if ( a5 != nullptr )
  {
    v81 = a5;
    result = a2;
    v6 = (float *)a4;
    v91 = nullptr;
    v77 = *((float *)self + 58) * *((float *)self + 63);
    if ( (int)(uintptr_t)(a2) > 0 )
    {
      do
      {
        v84 = *v6;
        v15 = v6[1];
        v16 = v6[2];
        v17 = v6[3];
        v18 = v6[4];
        v19 = v6[5];
        v20 = v6[6];
        v21 = v6[7];
        v22 = *((uint32_t *)self + 51) + 8 * *(uint32_t *)a3[(uint32_t)(uintptr_t)(v91)];
        v23 = ((*(uint8_t *)(v22 + 7) >> 1) + 1) & 0x7F;
        *(uint8_t *)(v22 + 7) = (2 * v23) | *(uint8_t *)(v22 + 7) & 1;
        if ( v23 != 0 )
        {
          v7 = (float *)(*((uint32_t *)self + 40) + 48 * (*(uint32_t *)(v22 + 4) & 0x1FFFFF));
          v8 = v7[1] > v15;
          v9 = 2 * v8 + 4;
          v10 = 2 * v8;
          v11 = v7[3];
          if ( v7[2] > v16 )
            v10 = v9;
          v85 = v10;
          v12 = 8 * (v11 > v17) + 2;
          v86 = (*v7 > v84 || v18 > v7[4]) | v85;
          if ( v19 <= v7[5] )
            v12 = 8 * (v11 > v17);
          v13 = v20 > v7[6];
          v93 = v12;
          v14 = 4 * v13 + 8;
          if ( v21 <= v7[7] )
            v14 = 4 * v13;
          if ( (((uint8_t)(v93 | v14) | v86) & 7) != 0 )
          {
            v79 = v21;
            v80 = v16;
            v87 = *(float *)v81 * v77;
            *(float *)&v82 = *((float *)v81 + 1) * v77;
g4_m128_raw(v24) = *((unsigned int *)v81 + 2);
            *(float *)g4_m128_ptr<int32_t>(v24) = *(float *)g4_m128_ptr<int32_t>(v24) * v77;
            v25 = v24;
g4_m128_raw(v26) = LODWORD(v84);
            *(float *)g4_m128_ptr<int32_t>(v26) = v84 + v87;
            v27 = _mm_cvtsi128_si32(v26);
            v28 = v25;
            *(float *)g4_m128_ptr<int32_t>(v28) = *(float *)g4_m128_ptr<int32_t>(v25) + v16;
            *(float *)g4_m128_ptr<int32_t>(v25) = *(float *)g4_m128_ptr<int32_t>(v25) + v20;
            v29 = _mm_cvtsi128_si32(v28);
g4_m128_raw(v30) = LODWORD(v78);
            *(float *)g4_m128_ptr<int32_t>(v30) = v78 + v17;
            v31 = _mm_cvtsi128_si32(v30);
            v88 = v87 + v18;
g4_m128_raw(v32) = v82;
            v33 = _mm_cvtsi32_si128(v27);
            *(float *)g4_m128_ptr<int32_t>(v33) = fminf(*(float *)g4_m128_ptr<int32_t>(v33), v84);
            v34 = _mm_cvtsi128_si32(v33);
g4_m128_lane<float>(v32, 0) = fmaxf(*(float *)&v82 + v19, v19);
            *(float *)g4_m128_ptr<int32_t>(v33) = fminf(*(float *)&v82 + v15, v15);
            v35 = _mm_cvtsi32_si128(v29);
            v36 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v25));
            *(float *)g4_m128_ptr<int32_t>(v36) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v36), v20);
            v94 =g4_m128_lane<int32_t>(v33, 0);
            *(float *)g4_m128_ptr<int32_t>(v35) = fminf(*(float *)g4_m128_ptr<int32_t>(v35), v80);
g4_m128_raw(v37) = COERCE_UNSIGNED_INT(v78 + v79);
g4_m128_lane<float>(v37, 0) = fmaxf(g4_m128_lane<float>(v37, 0), v79);
            v38 = _mm_cvtsi128_si32(v35);
            v39 = _mm_cvtsi32_si128(v31);
            *(float *)g4_m128_ptr<int32_t>(v39) = fminf(*(float *)g4_m128_ptr<int32_t>(v39), v17);
g4_m128_lane<uint64_t>(v40, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(v34)), g4_to_m128((unsigned int)v94)), 0);
            v41 = _mm_cvtsi128_si32(v39);
g4_m128_raw(v42) = LODWORD(v88);
g4_m128_lane<float>(v42, 0) = fmaxf(v88, v18);
g4_m128_lane<uint64_t>(v40, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(v38)), g4_m128_from<__m128>(_mm_cvtsi32_si128(v41))), 0);
            v96[0] = v40;
            v43 = v42;
g4_m128_lane<uint64_t>(v42, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(_mm_cvtsi128_si32(v36))), v37), 0);
g4_m128_lane<uint64_t>(v37, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v43, v32), 0);
g4_m128_lane<uint64_t>(v37, 1) =g4_m128_lane<uint64_t>(v42, 0);
            v96[1] = v37;
            hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::kineticUpdate(
              (hkpTreeBroadPhase32::Self *)((char *)self + 160),
              *(uint32_t *)(v22 + 4) & 0x1FFFFF,
              (const hkAabb::Self *)v96);
          }
        }
        else
        {
          hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::update(
            (hkpTreeBroadPhase32::Self *)((char *)self + 160),
            *(uint32_t *)(v22 + 4) & 0x1FFFFF,
            (const hkAabb::Self *)v6);
        }
        v91 = (const hkVector4f::Self *)((char *)v91 + 1);
        v6 += 8;
        v81 = (const hkVector4f::Self *)((char *)v81 + 16);
        result = v91;
      }
      while ( v91 != a2 );
    }
  }
  else
  {
    v44 = a4;
    v92 = nullptr;
    if ( (int)(uintptr_t)(a2) > 0 )
    {
      do
      {
        v83 = *((float *)v44 + 1);
g4_m128_raw(v54) = *(unsigned int *)v44;
g4_m128_raw(v55) = *((unsigned int *)v44 + 2);
        v56 = *((float *)v44 + 3);
        v57 = *((float *)v44 + 4);
        v58 = *((float *)v44 + 5);
        v59 = *((float *)v44 + 6);
        v60 = *((float *)v44 + 7);
        v61 = *((uint32_t *)self + 51) + 8 * *(uint32_t *)a3[(uint32_t)(uintptr_t)(v92)];
        v62 = ((*(uint8_t *)(v61 + 7) >> 1) + 1) & 0x7F;
        *(uint8_t *)(v61 + 7) = (2 * v62) | *(uint8_t *)(v61 + 7) & 1;
        if ( v62 != 0 )
        {
          v45 = (float *)(*((uint32_t *)self + 40) + 48 * (*(uint32_t *)(v61 + 4) & 0x1FFFFF));
          v46 = v45[1] > v83;
          v47 = 2 * v46 + 4;
          v48 = 2 * v46;
          v49 = v45[3];
          if ( v45[2] >g4_m128_lane<float>(v55, 0) )
            v48 = v47;
          v89 = v48;
          v50 = 8 * (v49 > v56) + 2;
          v90 = (v57 > v45[4] || *v45 >g4_m128_lane<float>(v54, 0)) | v89;
          if ( v58 <= v45[5] )
            v50 = 8 * (v49 > v56);
          v51 = v59 > v45[6];
          v95 = v50;
          v52 = 4 * v51 + 8;
          v53 = 4 * v51;
          if ( v60 <= v45[7] )
            v52 = v53;
          if ( (((uint8_t)(v95 | v52) | v90) & 7) != 0 )
          {
g4_m128_raw(v63) = 0;
            *(float *)g4_m128_ptr<int32_t>(v63) = v57 + 0.0;
            v64 = _mm_cvtsi128_si32(v63);
g4_m128_raw(v65) = 0;
            *(float *)g4_m128_ptr<int32_t>(v65) = v58 + 0.0;
            v66 = _mm_cvtsi128_si32(v65);
g4_m128_raw(v67) = LODWORD(v78);
            *(float *)g4_m128_ptr<int32_t>(v67) = v78 + v60;
            v68 = _mm_cvtsi128_si32(v67);
g4_m128_raw(v69) = COERCE_UNSIGNED_INT(v78 + v56);
g4_m128_lane<float>(v69, 0) = fminf(g4_m128_lane<float>(v69, 0), v56);
            v70 = _mm_cvtsi32_si128(v64);
            *(float *)g4_m128_ptr<int32_t>(v70) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v70), v57);
            v71 = _mm_cvtsi32_si128(v66);
            *(float *)g4_m128_ptr<int32_t>(v71) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v71), v58);
g4_m128_raw(v72) = COERCE_UNSIGNED_INT(v59 + 0.0);
g4_m128_lane<float>(v72, 0) = fmaxf(g4_m128_lane<float>(v72, 0), v59);
            v73 = _mm_cvtsi128_si32(v71);
            v74 = _mm_cvtsi32_si128(v68);
            *(float *)g4_m128_ptr<int32_t>(v74) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v74), v60);
g4_m128_lane<uint64_t>(v75, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v54, g4_m128_from<__m128>(LODWORD(v83))), 0);
g4_m128_lane<uint64_t>(v76, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(
                                g4_m128_from<__m128>(_mm_cvtsi32_si128(_mm_cvtsi128_si32(v70))),
                                g4_m128_from<__m128>(_mm_cvtsi32_si128(v73))), 0);
g4_m128_lane<uint64_t>(v75, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v55, v69), 0);
g4_m128_lane<uint64_t>(v76, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v72, g4_m128_from<__m128>(_mm_cvtsi32_si128(_mm_cvtsi128_si32(v74)))), 0);
            v96[0] = v75;
            v96[1] = v76;
            hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::kineticUpdate(
              (hkpTreeBroadPhase32::Self *)((char *)self + 160),
              *(uint32_t *)(v61 + 4) & 0x1FFFFF,
              (const hkAabb::Self *)v96);
          }
        }
        else
        {
          hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::update(
            (hkpTreeBroadPhase32::Self *)((char *)self + 160),
            *(uint32_t *)(v61 + 4) & 0x1FFFFF,
            v44);
        }
        v92 = (const hkVector4f::Self *)((char *)v92 + 1);
        v44 = (const hkAabb::Self *)((char *)v44 + 32);
        result = v92;
      }
      while ( v92 != a2 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::updateHandles  (binary VA: 0x1802e10)
// Original: hkpTreeBroadPhase32::updateHandles
// ----------------------------------------------------------------------------
hkpTreeBroadPhase32::Self * hkpTreeBroadPhase32::updateHandles(hkpTreeBroadPhase32::Self *self, const hkpBroadPhaseHandle *const *a2, const hkAabb::Self *a3, int a4)
{
  hkpTreeBroadPhase32::Self *result;
  int v5;
  float *v6;
  int v7;
  char v8;
  float v9; // xmm5_4
  bool v10;
  char v11;
  char v12;
  char v13;
  bool v14;
  char v15;
  char v16;
  __m128i v17;
  __m128 v18;
  __m128 v19;
  __m128 v20;
  int v21;
  int v22;
  __m128 v23;
  __m128 v24;
  float v25; // xmm6_4
  unsigned int v26;
  __m128 v27;
  __m128 v28;
  __m128i v29;
  typedef hkpTreeBroadPhase32::Self *_g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef char _g4_t_v33;
  typedef uint8_t _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float *_g4_t_v40;
  typedef bool _g4_t_v41;
  typedef char _g4_t_v42;
  typedef char _g4_t_v43;
  typedef uint8_t _g4_t_v44;
  typedef float *_g4_t_v45;
  typedef hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *_g4_t_v46;
  typedef g4_int128_t _g4_t_v47[2];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v30)) > _g4_s0 ? (8u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v31)) > _g4_s1 ? (16u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v32)) > _g4_s2 ? (20u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v33)) > _g4_s3 ? (24u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v34)) > _g4_s4 ? (24u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v35)) > _g4_s5 ? (28u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v36)) > _g4_s6 ? (36u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v37)) > _g4_s7 ? (48u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v38)) > _g4_s8 ? (52u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v39)) > _g4_s9 ? (56u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v40)) > _g4_s10 ? (64u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v41)) > _g4_s11 ? (68u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v42)) > _g4_s12 ? (68u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v43)) > _g4_s13 ? (68u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v44)) > _g4_s14 ? (72u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v45)) > _g4_s15 ? (72u + sizeof(_g4_t_v45)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v46)) > _g4_s16 ? (76u + sizeof(_g4_t_v46)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v47)) > _g4_s17 ? (80u + sizeof(_g4_t_v47)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 68u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 68u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 68u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 72u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 72u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 76u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 80u);

  result = self;
  v35 = *((float *)self + 56);
  v31 = *((float *)self + 63);
  if ( a4 > 0 )
  {
    v5 = 0;
    v40 = (float *)((char *)a3 + 28);
    v6 = (float *)a3;
    do
    {
      while ( 1 )
      {
        v7 = *((uint32_t *)self + 48) + 8 * *(uint32_t *)a2[v5];
        v46 = (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *)((hkpTreeBroadPhase32::Self *)((char *)self + (*(uint16_t *)(v7 + 6) & 0x1E0) + 32));
        v44 = *(uint8_t *)(v7 + 7);
        v8 = ((v44 >> 1) + 1) & 0x7F;
        *(uint8_t *)(v7 + 7) = (2 * v8) | v44 & 1;
        if ( v8 != 0 && (*(uint16_t *)(v7 + 6) & 0x1E0) == 0x60 )
          break;
        result = (hkpTreeBroadPhase32::Self *)hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::update(
                                          v46,
                                          *(uint32_t *)(v7 + 4) & 0x1FFFFF,
                                          (const hkAabb::Self *)v6);
LABEL_4:
        ++v5;
        v6 += 8;
        v40 += 8;
        if ( v5 == a4 )
          return result;
      }
      v30 = (hkpTreeBroadPhase32::Self *)v7;
      v32 = *v6;
      v38 = v6[2];
      v45 = (float *)(*(uint32_t *)v46 + 48 * (*(uint32_t *)(v7 + 4) & 0x1FFFFF));
      v9 = v6[1];
      v10 = v45[1] > v9;
      v11 = 2 * v10 + 4;
      v12 = 2 * v10;
      if ( v45[2] > v38 )
        v12 = v11;
      v33 = v12;
      v39 = v6[1];
      v41 = v45[3] > v6[3];
      v13 = 8 * v41 + 2;
      v42 = 8 * v41;
      v37 = v6[3];
      v34 = (*(v40 - 3) > v45[4] || *v45 > *v6) | v33;
      if ( *(v40 - 2) <= v45[5] )
        v13 = v42;
      v14 = *(v40 - 1) > v45[6];
      v43 = v13;
      v15 = 4 * v14 + 8;
      v16 = 4 * v14;
      if ( *v40 <= v45[7] )
        v15 = v16;
      result = v30;
      v36 = *(v40 - 1);
      if ( (((uint8_t)(v43 | v15) | v34) & 7) == 0 )
        goto LABEL_4;
      ++v5;
      v6 += 8;
g4_m128_raw(v17) = LODWORD(v9);
g4_m128_raw(v18) = LODWORD(v32);
g4_m128_raw(v19) = LODWORD(v38);
g4_m128_raw(v20) = LODWORD(v35);
      v21 = *(uint32_t *)v30 + *(char *)(*(uint32_t *)v30 + 5);
g4_m128_lane<float>(v20, 0) = fminf(v35 + v37, v37);
      v22 = v21 + *(char *)(v21 + 16);
g4_m128_raw(v23) = *(unsigned int *)(v22 + 436);
g4_m128_lane<float>(v23, 0) =g4_m128_lane<float>(v23, 0) * v31;
g4_m128_raw(v24) = *(unsigned int *)(v22 + 432);
g4_m128_lane<float>(v24, 0) =g4_m128_lane<float>(v24, 0) * v31;
      v25 = v31 * *(float *)(v22 + 440);
      *(float *)g4_m128_ptr<int32_t>(v17) = v39 +g4_m128_lane<float>(v23, 0);
g4_m128_lane<float>(v19, 0) = v38 + v25;
      v26 = _mm_cvtsi128_si32(v17);
g4_m128_raw(v27) = LODWORD(v36);
g4_m128_lane<float>(v27, 0) = v36 + v25;
g4_m128_raw(v28) = LODWORD(v35);
g4_m128_lane<float>(v18, 0) = fminf(v32 +g4_m128_lane<float>(v24, 0), v32);
      v29 = _mm_cvtsi32_si128(v26);
      *(float *)g4_m128_ptr<int32_t>(v29) = fminf(*(float *)g4_m128_ptr<int32_t>(v29), v39);
g4_m128_lane<float>(v19, 0) = fminf(g4_m128_lane<float>(v19, 0), v38);
g4_m128_lane<float>(v27, 0) = fmaxf(g4_m128_lane<float>(v27, 0), v36);
g4_m128_lane<float>(v24, 0) = fmaxf(g4_m128_lane<float>(v24, 0) + *(v40 - 3), *(v40 - 3));
g4_m128_lane<float>(v23, 0) = fmaxf(g4_m128_lane<float>(v23, 0) + *(v40 - 2), *(v40 - 2));
g4_m128_lane<float>(v28, 0) = fmaxf(v35 + *v40, *v40);
g4_m128_lane<uint64_t>(v24, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v24, v23), 0);
g4_m128_lane<int64_t>(v29, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v18, g4_m128_from<__m128>(_mm_cvtsi32_si128(_mm_cvtsi128_si32(v29)))), 0);
g4_m128_lane<int64_t>(v29, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v19, v20), 0);
g4_m128_lane<uint64_t>(v24, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v27, v28), 0);
      v47[0] = v29;
      v47[1] = v24;
      result = (hkpTreeBroadPhase32::Self *)hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::kineticUpdate(
                                        v46,
                                        *((uint32_t *)v30 + 1) & 0x1FFFFF,
                                        (const hkAabb::Self *)v47);
      v40 += 8;
    }
    while ( v5 != a4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::addHandles  (binary VA: 0x1803180)
// Original: hkpTreeBroadPhase32::addHandles
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::addHandles(hkpTreeBroadPhase32::Self *self, const hkpBroadPhaseHandle *const *a2, const hkAabb::Self *a3, int a4)
{
  int result;
  char v5; // di
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  char v11;
  int v12;
  const hkpBroadPhaseHandle *v13;
  hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *v14;
  unsigned int v15;
  unsigned int v16;
  uint32_t *v17;
  const hkpBroadPhaseHandle *v18;
  char v19;
  uint8_t v20;
  typedef int *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef char *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef unsigned int _g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint8_t _g4_t_v30[28];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v22)) > _g4_s1 ? (12u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v23)) > _g4_s2 ? (24u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v24)) > _g4_s3 ? (28u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v25)) > _g4_s4 ? (32u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v26)) > _g4_s5 ? (32u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v27)) > _g4_s6 ? (32u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v28)) > _g4_s7 ? (36u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v30)) > _g4_s8 ? (44u + sizeof(_g4_t_v30)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);

  result = a4;
  if ( a4 > 0 )
  {
    v28 = 0;
    v23 = (char *)self + 32;
    do
    {
      v18 = a2[v28];
      v19 = *((uint8_t *)v18 + 4);
      if ( v19 == 1 )
      {
        v20 = *((uint8_t *)v18 + *((char *)v18 + 5) + *((char *)v18 + *((char *)v18 + 5) + 16) + 232) - 4;
        v5 = 3 - (v20 < 2u);
        v25 = v20 < 2u ? 64 : 96;
      }
      else if ( v19 < 1 || v19 > 3 )
      {
        v25 = 64;
        v5 = 2;
      }
      else
      {
        v25 = 32;
        v5 = 1;
      }
      v6 = *((uint32_t *)self + 49);
      if ( v6 == (*((uint32_t *)self + 50) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkpTreeBroadPhase32::Self *)((char *)self + 192),
          8,
          v22);
        v6 = *((uint32_t *)self + 49);
      }
      v7 = *((uint32_t *)self + 48) + 8 * v6;
      v8 = *(uint32_t *)(v7 + 4);
      *(uint32_t *)v7 = 0;
      v8 &= 0xFFE00000;
      *(uint32_t *)(v7 + 4) = v8;
      *(uint16_t *)(v7 + 6) = HIWORD(v8) & 0xFE1F;
      *(uint8_t *)(v7 + 7) = 0;
      v9 = *((uint32_t *)self + 48);
      v10 = *((uint32_t *)self + 49);
      *((uint32_t *)self + 49) = v10 + 1;
      v11 = v5;
      v12 = v9 + 8 * v10;
      v13 = a2[v28];
      *(uint32_t *)v12 = (uint32_t)(uintptr_t)(v13);
      v24 = v12;
      *(uint16_t *)(v12 + 6) = (32 * (v11 & 0xF)) | *(uint16_t *)(v12 + 6) & 0xFE1F;
      *(uint8_t *)(v12 + 7) = (2 * *(uint8_t *)v13) | *(uint8_t *)(v12 + 7) & 1;
      v14 = (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *)&v23[v25];
      v15 = *(uint32_t *)v13;
      v16 = *(uint32_t *)&v23[v25 + 12];
      if ( v16 == 0 )
      {
        v21 = (int *)&v23[v25];
        v26 = v15;
        hkcdDynamicTree::DynamicStorage_0_hkcdDynamicTree_Aniso_3ce13d::reserveNodes(
          (hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUint::Self> *)v30,
          v21,
          1);
        v16 = *((uint32_t *)v14 + 3);
        v15 = v26;
      }
      v27 = v16;
      v17 = (uint32_t *)(48 * v16 + *(uint32_t *)v14);
      *((uint32_t *)v14 + 3) = *v17;
      v17[9] = 0;
      v17[10] = v15;
      *v17 = *(uint32_t *)a3;
      v17[1] = *((uint32_t *)a3 + 1);
      v17[2] = *((uint32_t *)a3 + 2);
      v17[3] = *((uint32_t *)a3 + 3);
      v17[4] = *((uint32_t *)a3 + 4);
      v17[5] = *((uint32_t *)a3 + 5);
      v17[6] = *((uint32_t *)a3 + 6);
      v17[7] = *((uint32_t *)a3 + 7);
      hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::internalInsert(v14, v16, *((uint32_t *)v14 + 6));
      ++*((uint32_t *)v14 + 4);
      *(uint32_t *)(v24 + 4) = v27 & 0x1FFFFF | *(uint32_t *)(v24 + 4) & 0xFFE00000;
      ++v28;
      a3 = (const hkAabb::Self *)((char *)a3 + 32);
      result = v28;
    }
    while ( v28 != a4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::addUserObjects  (binary VA: 0x1803400)
// Original: hkpTreeBroadPhase32::addUserObjects
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::addUserObjects(hkpTreeBroadPhase32::Self *self, int a2, hkpBroadPhaseHandle *const *a3, const hkAabb::Self *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  uint32_t *v9;
  int result;
  int v11;
  typedef hkMemoryAllocator::Self *_g4_t_v12;
  typedef int *_g4_t_v13;
  typedef unsigned int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t _g4_t_v19[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v15)) > _g4_s3 ? (16u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v16)) > _g4_s4 ? (20u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v17)) > _g4_s5 ? (24u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v19)) > _g4_s6 ? (32u + sizeof(_g4_t_v19)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);

  if ( a2 > 0 )
  {
    v16 = 0;
    v13 = (int *)((char *)self + 160);
    v12 = (hkMemoryAllocator::Self *)((hkpTreeBroadPhase32::Self *)((char *)self + 204));
    do
    {
      v17 = *((uint32_t *)self + 52);
      v11 = v17;
      if ( v17 == (*((uint32_t *)self + 53) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v12, 8, (int)(uintptr_t)(v12));
        v11 = *((uint32_t *)self + 52);
      }
      v4 = *((uint32_t *)self + 51) + 8 * v11;
      v5 = *(uint32_t *)(v4 + 4);
      *(uint32_t *)v4 = 0;
      v5 &= 0xFFE00000;
      *(uint32_t *)(v4 + 4) = v5;
      *(uint16_t *)(v4 + 6) = HIWORD(v5) & 0xFE1F;
      *(uint8_t *)(v4 + 7) = 0;
      v6 = *((uint32_t *)self + 52);
      v7 = *((uint32_t *)self + 51);
      *((uint32_t *)self + 52) = v6 + 1;
      v15 = v7 + 8 * v6;
      *(hkpBroadPhaseHandle **)v15 = a3[v16];
      LOWORD(v6) = *(uint16_t *)(v15 + 6) & 0xFE1F;
      LOBYTE(v6) = v6 | 0x80;
      *(uint16_t *)(v15 + 6) = v6;
      *(uint8_t *)(v15 + 7) = 2 * v17;
      v8 = *((uint32_t *)self + 43);
      if ( v8 == 0 )
      {
        hkcdDynamicTree::DynamicStorage_0_hkcdDynamicTree_Aniso_3ce13d::reserveNodes(
          (hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUint::Self> *)v19,
          v13,
          1);
        v8 = *((uint32_t *)self + 43);
      }
      v9 = (uint32_t *)(48 * v8 + *((uint32_t *)self + 40));
      *((uint32_t *)self + 43) = *v9;
      v9[10] = v17;
      v9[9] = 0;
      *v9 = *(uint32_t *)a4;
      v9[1] = *((uint32_t *)a4 + 1);
      v9[2] = *((uint32_t *)a4 + 2);
      v9[3] = *((uint32_t *)a4 + 3);
      v9[4] = *((uint32_t *)a4 + 4);
      v9[5] = *((uint32_t *)a4 + 5);
      v9[6] = *((uint32_t *)a4 + 6);
      v14 = v8;
      v9[7] = *((uint32_t *)a4 + 7);
      hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::internalInsert(
        (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *)v13,
        v8,
        *((uint32_t *)self + 46));
      ++*((uint32_t *)self + 44);
      *(uint32_t *)(v15 + 4) = v14 & 0x1FFFFF | *(uint32_t *)(v15 + 4) & 0xFFE00000;
      ++v16;
      a4 = (const hkAabb::Self *)((char *)a4 + 32);
      **(uint32_t **)v15 = v17 | 0x80000000;
      result = v16;
    }
    while ( v16 != a2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::shiftAllObjects  (binary VA: 0x1803610)
// Original: hkpTreeBroadPhase32::shiftAllObjects
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::shiftAllObjects(uint32_t *a1, int a2, float *a3, int a4)
{
  int result;
  int v5;
  int v6;
  float *v7;
  hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *v8;
  int v9;
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float *v13;
  float v14; // xmm6_4
  float v15; // xmm5_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm4_4
  float v20; // xmm0_4
  float *v21;
  typedef float _g4_t_v22;
  typedef float *_g4_t_v23;
  typedef unsigned int *_g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef uint8_t _g4_t_v26[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v23)) > _g4_s1 ? (16u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v24)) > _g4_s2 ? (40u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v25)) > _g4_s3 ? (44u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v26)) > _g4_s4 ? (48u + sizeof(_g4_t_v26)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);

  result = a1[76];
  if ( result != 0 )
  {
    result = G4_VCALL<int>(result, 96, a2, a3, a4);
    v5 = a1[49];
    if ( v5 > 0 )
    {
      v6 = 0;
      v7 = a3;
      do
      {
        while ( 1 )
        {
          result = a1[48] + 8 * v6;
          v25 = *(uint32_t *)(result + 4) & 0x1FFFFF;
          if ( v25 != 0 )
            break;
          if ( ++v6 >= v5 )
            return result;
        }
        v8 = (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *)((char *)a1
                                                                        + (*(uint16_t *)(result + 6) & 0x1E0)
                                                                        + 32);
        v23 = v7;
        ++v6;
        v9 = 48 * (*(uint32_t *)(result + 4) & 0x1FFFFF);
        v10 = v7[1];
        v11 = v7[2];
        v12 = v7[3];
        v13 = (float *)(*(uint32_t *)v8 + v9);
        v14 = v13[5] + v10;
        v15 = v13[6] + v11;
        v16 = *v7 + *v13;
        v17 = v10 + v13[1];
        v18 = v11 + v13[2];
        v19 = v13[7] + v12;
        v22 = v13[4] + *v7;
        v20 = v12 + v13[3];
        std::memcpy(v26, v13, 32);
        v24 = (unsigned int *)v8;
        hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::internalRemove(v8, v25, (const hkAabb::Self *)v26);
        v21 = (float *)(*v24 + v9);
        *v21 = v16;
        v21[1] = v17;
        v21[2] = v18;
        v21[3] = v20;
        v21[4] = v22;
        v21[5] = v14;
        v21[6] = v15;
        v21[7] = v19;
        hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::internalInsert(
          (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *)v24,
          v25,
          v24[6]);
        result = (int)(uintptr_t)(a1);
        v7 = v23;
        v5 = a1[49];
      }
      while ( v6 < v5 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::removeHandlesStandalone  (binary VA: 0x1803d90)
// Original: hkpTreeBroadPhase32::removeHandlesStandalone
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::removeHandlesStandalone(uint32_t *a1, int a2, int a3, int a4)
{
  int result;
  unsigned int v5;
  hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *v6;
  float *v7;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  hkLifoAllocator::Self *v13;
  char *v14;
  int v15;
  signed int v16;
  hkLifoAllocator::Self *v17;
  typedef uint32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef unsigned int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_i;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t _g4_t_v27[4];
  typedef char *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef char *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41[15];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v21)) > _g4_s3 ? (16u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v22)) > _g4_s4 ? (28u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_i)) > _g4_s5 ? (36u + sizeof(_g4_t_i)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_address)) > _g4_s6 ? (40u + sizeof(_g4_t_address)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v25)) > _g4_s7 ? (44u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v26)) > _g4_s8 ? (44u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v27)) > _g4_s9 ? (48u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v28)) > _g4_s10 ? (64u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v29)) > _g4_s11 ? (68u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v30)) > _g4_s12 ? (72u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v31)) > _g4_s13 ? (76u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v32)) > _g4_s14 ? (80u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v33)) > _g4_s15 ? (96u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v34)) > _g4_s16 ? (100u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v35)) > _g4_s17 ? (104u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v36)) > _g4_s18 ? (108u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v37)) > _g4_s19 ? (112u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v38)) > _g4_s20 ? (116u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v39)) > _g4_s21 ? (120u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v40)) > _g4_s22 ? (124u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v41)) > _g4_s23 ? (128u + sizeof(_g4_t_v41)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 36u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 96u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 100u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 104u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 108u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 116u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 120u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 124u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 128u);

  v27[1] = a4;
  result = a3;
  v27[0] = 0;
  if ( a3 > 0 )
  {
    v18 = a1 + 8;
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    for ( i = 0; i != a3; result = i )
    {
      v22 = **(uint32_t **)(a2 + 4 * i);
      v19 = a1[48] + 8 * v22;
      v5 = *(uint32_t *)(v19 + 4) & 0x1FFFFF;
      v6 = (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *)((char *)v18 + (*(uint16_t *)(v19 + 6) & 0x1E0));
      v25 = 48 * v5;
      v7 = (float *)(*(uint32_t *)v6 + 48 * v5);
      v33 = *v7;
      v34 = v7[1];
      v35 = v7[2];
      v36 = v7[3];
      v37 = v7[4];
      v38 = v7[5];
      v39 = v7[6];
      v40 = v7[7];
      v21 = a1[49] - 1;
      std::memcpy(v41, v7, 32);
      v20 = v5;
      hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::internalRemove(v6, v5, (const hkAabb::Self *)v41);
      *(uint32_t *)(*(uint32_t *)v6 + v25) = *((uint32_t *)v6 + 3);
      --*((uint32_t *)v6 + 4);
      *((uint32_t *)v6 + 3) = v20;
      **(uint32_t **)v19 = 0;
      v8 = a1[48];
      v9 = a1[49] - 1;
      a1[49] = v9;
      if ( v22 != v9 )
      {
        v10 = (uint32_t *)(v8 + 8 * v9);
        v11 = (uint32_t *)(8 * v22 + v8);
        *v11 = *v10;
        v11[1] = v10[1];
      }
      if ( v22 < v21 )
      {
        **(uint32_t **)v19 = v22;
        *(uint32_t *)(*(uint32_t *)((char *)v18 + (*(uint16_t *)(v19 + 6) & 0x1E0))
                  + 48 * (*(uint32_t *)(v19 + 4) & 0x1FFFFF)
                  + 40) = v22;
      }
      v26 = 1;
      v12 = a1 + 16;
      v27[2] = *(uint32_t *)(a2 + 4 * i);
      do
      {
        v32 = 64;
        v30 = 0x80000000;
        v28 = nullptr;
        v29 = 0;
        v27[0] = a1[48];
        LODWORD(v41[0]) = (uint32_t)(uintptr_t)(v27);
        v41[4] = v33;
        v41[5] = v34;
        v41[6] = v35;
        v41[7] = v36;
        v41[8] = v37;
        v41[9] = v38;
        v41[10] = v39;
        v41[11] = v40;
        v13 = *address;
        v14 = *((char **)*address + 3);
        if ( *((int *)*address + 2) > 255 && (unsigned int)(uintptr_t)(v14 + 256) <= *((uint32_t *)v13 + 4) )
          *((uint32_t *)v13 + 3) = (uint32_t)(uintptr_t)(v14 + 256);
        else
          v14 = (char *)hkLifoAllocator::allocateFromNewSlab(v13, 256);
        v28 = v14;
        v31 = v14;
        v30 = -2147483584;
        hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpTreeBroadPhaseSpatialTree32,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsNoEarlyExitWrapper<hkpTreeBroadPhaseInternals::NewPairsQuery::Self>>(
          v12,
          (int *)&v28,
          v41);
        v15 = 0;
        if ( v28 != v31 )
          v15 = v29;
        v29 = v15;
        v16 = (4 * v32 + 127) & 0xFFFFFF80;
        v17 = *address;
        if ( v16 > *((uint32_t *)*address + 2) || *((char **)v17 + 3) != &v31[v16] || v31 == *((char **)v17 + 5) )
          hkLifoAllocator::slowBlockFree(v17, v31, (4 * v32 + 127) & 0xFFFFFF80);
        else
          *((uint32_t *)v17 + 3) = (uint32_t)(uintptr_t)(v31);
        v29 = 0;
        if ( v30 >= 0 )
          (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v28,
            4 * v30);
        ++v26;
        v12 += 8;
      }
      while ( v26 != 4 );
      ++i;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::removeObject  (binary VA: 0x1804190)
// Original: hkpTreeBroadPhase32::removeObject
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::removeObject(hkpTreeBroadPhase32::Self *a1, hkpBroadPhaseHandle *a2, int a3)
{
  if ( *((uint32_t *)a1 + 76) == 0 )
    return hkpTreeBroadPhase32::removeHandlesStandalone((uint32_t *)(a1), (int)(uintptr_t)(&a2), 1, a3);
  hkpTreeBroadPhase32::removeHandles(a1, &a2, 1);
  (*(void (**)(uint32_t, hkpBroadPhaseHandle *, int))(**((uint32_t **)a1 + 76) + 40))(*((uint32_t *)a1 + 76), a2, a3);
  return hkpTreeBroadPhase32::indexAndCompact(a1, 1);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::removeObjectBatch  (binary VA: 0x1804230)
// Original: hkpTreeBroadPhase32::removeObjectBatch
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::removeObjectBatch(hkpTreeBroadPhase32::Self *a1, int *a2, int a3)
{
  if ( *((uint32_t *)a1 + 76) == 0 )
    return hkpTreeBroadPhase32::removeHandlesStandalone((uint32_t *)(a1), *a2, a2[1], a3);
  hkpTreeBroadPhase32::removeHandles(a1, (const hkpBroadPhaseHandle *const *)*a2, a2[1]);
  (*(void (**)(uint32_t, int *, int))(**((uint32_t **)a1 + 76) + 44))(*((uint32_t *)a1 + 76), a2, a3);
  return hkpTreeBroadPhase32::indexAndCompact(a1, a2[1]);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::updateHandlesStandalone  (binary VA: 0x18050f0)
// Original: hkpTreeBroadPhase32::updateHandlesStandalone
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::updateHandlesStandalone(uint32_t *a1, int a2, __m128 *a3, int a4, int a5, int a6)
{
  float v6; // xmm2_4
  float v7; // xmm1_4
  int result;
  int v10;
  hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *v11;
  int v12;
  float v13; // xmm1_4
  float v14; // xmm7_4
  float v15; // xmm2_4
  float v16; // xmm4_4
  float v17; // xmm5_4
  float v18; // xmm1_4
  float v19; // xmm7_4
  char v20;
  __m128 v21;
  int *v22;
  int v23;
  int *v24;
  int v25;
  hkLifoAllocator::Self *v26;
  int v27;
  float *v28;
  hkMemoryAllocator::Self *v29;
  int v30;
  __m128 v31;
  __m128i v32;
  __m128 v33;
  __m128 v34;
  int v35;
  int v36;
  __m128 v37;
  __m128 v38;
  float v39; // xmm6_4
  unsigned int v40;
  __m128 v41;
  __m128 v42;
  __m128i v43;
  unsigned int v44;
  typedef float _g4_t_v45;
  typedef __m128 *_g4_t_v46;
  typedef float _g4_t_v47;
  typedef __m128 _g4_t_v48;
  typedef double _g4_t_v49;
  typedef unsigned int _g4_t_v50;
  typedef float _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef uint32_t _g4_t_v62[4];
  typedef uint32_t _g4_t_v63[8];
  typedef __m128 _g4_t_m128i_i128;
  typedef __m128 _g4_t_v65;
  typedef __m128i _g4_t_v66;
  typedef __m128 _g4_t_v67;
  typedef __m128 _g4_t_v68;
  typedef __m128 _g4_t_v69;
  typedef __m128 _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (0u + sizeof(_g4_t_v45)) > _g4_s0 ? (0u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v46)) > _g4_s1 ? (8u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v47)) > _g4_s2 ? (12u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v48)) > _g4_s3 ? (16u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v49)) > _g4_s4 ? (56u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v50)) > _g4_s5 ? (64u + sizeof(_g4_t_v50)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v51)) > _g4_s6 ? (68u + sizeof(_g4_t_v51)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v52)) > _g4_s7 ? (72u + sizeof(_g4_t_v52)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v53)) > _g4_s8 ? (76u + sizeof(_g4_t_v53)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v54)) > _g4_s9 ? (80u + sizeof(_g4_t_v54)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v55)) > _g4_s10 ? (84u + sizeof(_g4_t_v55)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v56)) > _g4_s11 ? (88u + sizeof(_g4_t_v56)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v57)) > _g4_s12 ? (92u + sizeof(_g4_t_v57)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v58)) > _g4_s13 ? (96u + sizeof(_g4_t_v58)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v59)) > _g4_s14 ? (100u + sizeof(_g4_t_v59)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v60)) > _g4_s15 ? (104u + sizeof(_g4_t_v60)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v61)) > _g4_s16 ? (108u + sizeof(_g4_t_v61)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v62)) > _g4_s17 ? (112u + sizeof(_g4_t_v62)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v63)) > _g4_s18 ? (128u + sizeof(_g4_t_v63)) : _g4_s18,
    _g4_s20 = (160u + sizeof(_g4_t_m128i_i128)) > _g4_s19 ? (160u + sizeof(_g4_t_m128i_i128)) : _g4_s19,
    _g4_s21 = (176u + sizeof(_g4_t_v65)) > _g4_s20 ? (176u + sizeof(_g4_t_v65)) : _g4_s20,
    _g4_s22 = (192u + sizeof(_g4_t_v66)) > _g4_s21 ? (192u + sizeof(_g4_t_v66)) : _g4_s21,
    _g4_s23 = (208u + sizeof(_g4_t_v67)) > _g4_s22 ? (208u + sizeof(_g4_t_v67)) : _g4_s22,
    _g4_s24 = (224u + sizeof(_g4_t_v68)) > _g4_s23 ? (224u + sizeof(_g4_t_v68)) : _g4_s23,
    _g4_s25 = (240u + sizeof(_g4_t_v69)) > _g4_s24 ? (240u + sizeof(_g4_t_v69)) : _g4_s24,
    _g4_s26 = (256u + sizeof(_g4_t_v70)) > _g4_s25 ? (256u + sizeof(_g4_t_v70)) : _g4_s25,
    _g4_s27 = (272u + sizeof(_g4_t_v71)) > _g4_s26 ? (272u + sizeof(_g4_t_v71)) : _g4_s26,
    _g4_s28 = (276u + sizeof(_g4_t_v72)) > _g4_s27 ? (276u + sizeof(_g4_t_v72)) : _g4_s27,
    _g4_s29 = (280u + sizeof(_g4_t_v73)) > _g4_s28 ? (280u + sizeof(_g4_t_v73)) : _g4_s28,
    _g4_s30 = (284u + sizeof(_g4_t_v74)) > _g4_s29 ? (284u + sizeof(_g4_t_v74)) : _g4_s29,
    _g4_s31 = (288u + sizeof(_g4_t_v75)) > _g4_s30 ? (288u + sizeof(_g4_t_v75)) : _g4_s30,
    _g4_s32 = (292u + sizeof(_g4_t_v76)) > _g4_s31 ? (292u + sizeof(_g4_t_v76)) : _g4_s31,
    _g4_s33 = (296u + sizeof(_g4_t_v77)) > _g4_s32 ? (296u + sizeof(_g4_t_v77)) : _g4_s32,
    _g4_s34 = (300u + sizeof(_g4_t_v78)) > _g4_s33 ? (300u + sizeof(_g4_t_v78)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 0u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 56u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 64u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 68u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 72u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 76u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 80u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 84u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 88u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 92u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 96u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 100u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 104u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 108u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 112u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 128u);
  _g4_t_m128i_i128 &m128i_i128 = *reinterpret_cast<_g4_t_m128i_i128 *>(_g4_sf + 160u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 176u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 192u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 208u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 224u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 240u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 256u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 272u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 276u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 280u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 284u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 288u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 292u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 296u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 300u);

  v6 = *((float *)a1 + 56);
  v62[0] = 0;
  v7 = *((float *)a1 + 63);
  v62[1] = a5;
  v62[2] = a6;
  result = a4;
  v61 = 0;
  v47 = v6;
  v45 = v7;
  if ( a4 > 0 )
  {
    do
    {
      v10 = a1[48] + 8 * **(uint32_t **)(a2 + 4 * v61);
      m128i_i128 = *a3;
      v65 = a3[1];
      v11 = (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *)((char *)a1 + (*(uint16_t *)(v10 + 6) & 0x1E0) + 32);
      v12 = *(uint32_t *)v11 + 48 * (*(uint32_t *)(v10 + 4) & 0x1FFFFF);
      v13 = *(float *)(v12 + 4);
      v14 = *(float *)(v12 + 8);
      v15 = *(float *)(v12 + 12);
      v58 = *(float *)v12;
      v51 = v13;
      v59 = v14;
      v53 = v15;
      v16 = *(float *)(v12 + 16);
      v17 = *(float *)(v12 + 20);
      v18 = *(float *)(v12 + 24);
      v19 = *(float *)(v12 + 28);
      LOBYTE(v60) = *(uint8_t *)(v10 + 7);
      v57 = v16;
      v56 = v17;
      v20 = (((uint8_t)v60 >> 1) + 1) & 0x7F;
      v55 = v18;
      v54 = v19;
      LOBYTE(v52) = 2 * v20;
      *(uint8_t *)(v10 + 7) = (2 * v20) | v60 & 1;
      if ( v20 != 0 && (*(uint16_t *)(v10 + 6) & 0x1E0) == 0x60 )
      {
        LODWORD(v49) =g4_m128_lane<int32_t>(m128i_i128, 1);
        v28 = (float *)(2 * (v51 >g4_m128_lane<float>(m128i_i128, 1)));
        v50 =g4_m128_lane<uint32_t>(m128i_i128, 2);
        if ( v59 >g4_m128_lane<float>(m128i_i128, 2) )
          v28 = (float *)(2 * (v51 >g4_m128_lane<float>(m128i_i128, 1)) + 4);
        v52 = (unsigned int)(uintptr_t)(v28);
        v29 = (hkMemoryAllocator::Self *)(8 * (v53 >g4_m128_lane<float>(m128i_i128, 3)) + 2);
        v60 = v53 >g4_m128_lane<float>(m128i_i128, 3);
        v60 *= 8;
        v52 |= v58 >g4_m128_lane<float>(m128i_i128, 0) ||g4_m128_lane<float>(v65, 0) > v57;
        if (g4_m128_lane<float>(v65, 1) <= v56 )
          v29 = (hkMemoryAllocator::Self *)v60;
        v60 = (int)(uintptr_t)(v29);
        v30 = 4 * (g4_m128_lane<float>(v65, 2) > v55) + 8;
        if (g4_m128_lane<float>(v65, 3) <= v54 )
          v30 = 4 * (g4_m128_lane<float>(v65, 2) > v55);
        v52 |= v60 | v30;
        if ( (v52 & 7) == 0 )
          goto LABEL_18;
g4_m128_raw(v31) =g4_m128_lane<uint32_t>(m128i_i128, 0);
g4_m128_raw(v32) = LODWORD(v49);
g4_m128_raw(v33) = v50;
g4_m128_raw(v34) = LODWORD(v47);
        v35 = *(uint32_t *)v10 + *(char *)(*(uint32_t *)v10 + 5);
g4_m128_lane<float>(v34, 0) = fminf(v47 +g4_m128_lane<float>(m128i_i128, 3),g4_m128_lane<float>(m128i_i128, 3));
        v36 = v35 + *(char *)(v35 + 16);
g4_m128_raw(v37) = *(unsigned int *)(v36 + 436);
g4_m128_lane<float>(v37, 0) =g4_m128_lane<float>(v37, 0) * v45;
g4_m128_raw(v38) = *(unsigned int *)(v36 + 432);
g4_m128_lane<float>(v38, 0) =g4_m128_lane<float>(v38, 0) * v45;
        v39 = v45 * *(float *)(v36 + 440);
        *(float *)g4_m128_ptr<int32_t>(v32) = *(float *)&v49 +g4_m128_lane<float>(v37, 0);
g4_m128_lane<float>(v33, 0) = *(float *)&v50 + v39;
        v40 = _mm_cvtsi128_si32(v32);
g4_m128_raw(v41) =g4_m128_lane<uint32_t>(v65, 2);
g4_m128_lane<float>(v41, 0) =g4_m128_lane<float>(v65, 2) + v39;
g4_m128_raw(v42) = LODWORD(v47);
g4_m128_lane<float>(v31, 0) = fminf(g4_m128_lane<float>(m128i_i128, 0) +g4_m128_lane<float>(v38, 0),g4_m128_lane<float>(m128i_i128, 0));
        v43 = _mm_cvtsi32_si128(v40);
        *(float *)g4_m128_ptr<int32_t>(v43) = fminf(*(float *)g4_m128_ptr<int32_t>(v43), *(float *)&v49);
g4_m128_lane<float>(v33, 0) = fminf(g4_m128_lane<float>(v33, 0), *(float *)&v50);
g4_m128_lane<float>(v41, 0) = fmaxf(g4_m128_lane<float>(v41, 0),g4_m128_lane<float>(v65, 2));
g4_m128_lane<float>(v38, 0) = fmaxf(g4_m128_lane<float>(v38, 0) +g4_m128_lane<float>(v65, 0),g4_m128_lane<float>(v65, 0));
g4_m128_lane<float>(v37, 0) = fmaxf(g4_m128_lane<float>(v37, 0) +g4_m128_lane<float>(v65, 1),g4_m128_lane<float>(v65, 1));
g4_m128_lane<float>(v42, 0) = fmaxf(v47 +g4_m128_lane<float>(v65, 3),g4_m128_lane<float>(v65, 3));
g4_m128_lane<int64_t>(v43, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v31, g4_m128_from<__m128>(_mm_cvtsi32_si128(_mm_cvtsi128_si32(v43)))), 0);
g4_m128_lane<uint64_t>(v38, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v38, v37), 0);
g4_m128_lane<int64_t>(v43, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v33, v34), 0);
g4_m128_lane<uint64_t>(v38, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v41, v42), 0);
        v66 = v43;
        v67 = v38;
        v44 = *(uint32_t *)(v10 + 4) & 0x1FFFFF;
        v52 = (unsigned int)(uintptr_t)(&v66);
        hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::kineticUpdate(v11, v44, (const hkAabb::Self *)&v66);
        m128i_i128 =g4_m128_raw(G4_BITCAST<__m128>(v66));
        v65 = v67;
      }
      else
      {
g4_m128_lane<float>(m128i_i128, 0) =g4_m128_lane<float>(m128i_i128, 0) - v47;
g4_m128_lane<float>(m128i_i128, 1) =g4_m128_lane<float>(m128i_i128, 1) - v47;
g4_m128_lane<float>(m128i_i128, 2) =g4_m128_lane<float>(m128i_i128, 2) - v47;
g4_m128_lane<float>(m128i_i128, 3) =g4_m128_lane<float>(m128i_i128, 3) - v47;
g4_m128_lane<float>(v65, 0) =g4_m128_lane<float>(v65, 0) + v47;
g4_m128_lane<float>(v65, 1) =g4_m128_lane<float>(v65, 1) + v47;
g4_m128_lane<float>(v65, 2) =g4_m128_lane<float>(v65, 2) + v47;
g4_m128_lane<float>(v65, 3) =g4_m128_lane<float>(v65, 3) + v47;
        hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::update(
          v11,
          *(uint32_t *)(v10 + 4) & 0x1FFFFF,
          (const hkAabb::Self *)&m128i_i128);
        v52 = (unsigned int)(uintptr_t)(&v66);
      }
      v62[3] = *(uint32_t *)(a2 + 4 * v61);
      *(float *)&v50 = COERCE_FLOAT(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
g4_m128_lane<uint64_t>(v21, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v58)), g4_m128_from<__m128>(LODWORD(v51))), 0);
g4_m128_lane<uint64_t>(v21, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v59)), g4_m128_from<__m128>(LODWORD(v53))), 0);
      v46 = a3;
      v22 = (int *)(a1 + 16);
      v60 = (int)(uintptr_t)(v63);
      _mm_storel_ps(&v49, _mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v55)), g4_m128_from<__m128>(LODWORD(v54))));
      v23 = 1;
      v48 = _mm_loadh_ps(&v49);
      do
      {
        v62[0] = a1[48];
        if ( v58 >g4_m128_lane<float>(v65, 0)
          || v51 >g4_m128_lane<float>(v65, 1)
          || (LODWORD(v49) =g4_m128_lane<int32_t>(v65, 2), v59 >g4_m128_lane<float>(v65, 2))
          ||g4_m128_lane<float>(m128i_i128, 0) > v57
          ||g4_m128_lane<float>(m128i_i128, 1) > v56
          ||g4_m128_lane<float>(m128i_i128, 2) > v55 )
        {
          v63[0] = 0;
g4_m128_lane<int32_t>(v66, 0) = (int32_t)(uintptr_t)(v62);
          v69 = m128i_i128;
          v70 = v65;
          v63[1] = 0;
          v63[2] = 0x80000000;
          v67 = v21;
          v63[4] = 64;
          v68 = v48;
          v26 = *(hkLifoAllocator::Self **)v50;
          v27 = *(uint32_t *)(*(uint32_t *)v50 + 12);
          if ( *(int *)(*(uint32_t *)v50 + 8) > 255 && (unsigned int)(v27 + 256) <= *((uint32_t *)v26 + 4) )
            *((uint32_t *)v26 + 3) = v27 + 256;
          else
            v27 = hkLifoAllocator::allocateFromNewSlab(v26, 256);
          v63[0] = v27;
          v63[3] = v27;
          v63[2] = -2147483584;
          hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpTreeBroadPhaseSpatialTree32,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::KineticAabbOverlapsWrapper<hkpTreeBroadPhaseInternals::UpdatePairsQuery::Self>>(
            v22,
            (hkMemoryAllocator::Self *)v60,
            (float *)v52);
          hkLocalArray_unsigned_int_b0c553::Destroy((hkLocalArray<unsigned int> *)v60);
        }
        else
        {
g4_m128_lane<int32_t>(v66, 0) = (int32_t)(uintptr_t)(v62);
          v67 = v21;
          v69 = m128i_i128;
          v68 = v48;
          v72 = fminf(v51,g4_m128_lane<float>(m128i_i128, 1));
          v71 = fminf(v58,g4_m128_lane<float>(m128i_i128, 0));
          v73 = fminf(v59,g4_m128_lane<float>(m128i_i128, 2));
          v70 = v65;
          v76 = fmaxf(v56,g4_m128_lane<float>(v65, 1));
          v75 = fmaxf(v57,g4_m128_lane<float>(v65, 0));
          v74 = fminf(v53,g4_m128_lane<float>(m128i_i128, 3));
          v77 = fmaxf(v55, *(float *)&v49);
          v63[0] = 0;
          v63[1] = 0;
          v63[2] = 0x80000000;
          v24 = *(int **)v50;
          v63[4] = 64;
          v78 = fmaxf(v54,g4_m128_lane<float>(v65, 3));
          v25 = v24[3];
          if ( v24[2] > 255 && v25 + 256 <= (unsigned int)v24[4] )
            v24[3] = v25 + 256;
          else
            v25 = hkLifoAllocator::allocateFromNewSlab((hkLifoAllocator::Self *)v24, 256);
          v63[0] = v25;
          v63[3] = v25;
          v63[2] = -2147483584;
          hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpTreeBroadPhaseSpatialTree32,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::CoherentKineticAabbOverlapsWrapper<hkpTreeBroadPhaseInternals::UpdatePairsQuery::Self>>(
            v22,
            (hkMemoryAllocator::Self *)v60,
            (float *)v52);
          hkLocalArray_unsigned_int_b0c553::Destroy((hkLocalArray<unsigned int> *)v60);
        }
        ++v23;
        v22 += 8;
      }
      while ( v23 != 4 );
      a3 = v46;
LABEL_18:
      ++v61;
      a3 += 2;
      result = v61;
    }
    while ( v61 != a4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::updateAabbs  (binary VA: 0x1805aa0)
// Original: hkpTreeBroadPhase32::updateAabbs
// ----------------------------------------------------------------------------
hkpTreeBroadPhase32::Self * hkpTreeBroadPhase32::updateAabbs(hkpTreeBroadPhase32::Self *a1, hkpBroadPhaseHandle **a2, hkAabb::Self *a3, int a4, int a5, int a6, int a7)
{
  int v7;

  v7 = *((uint32_t *)a1 + 76);
  if ( v7 == 0 )
    return (hkpTreeBroadPhase32::Self *)hkpTreeBroadPhase32::updateHandlesStandalone((uint32_t *)(a1), (int)(uintptr_t)(a2), (__m128 *)a3, a5, a6, a7);
  if ( a4 != 0 )
    (*(void (**)(uint32_t, hkpBroadPhaseHandle **, int, int, int, int))(*(uint32_t *)v7 + 56))(
      *((uint32_t *)a1 + 76),
      a2,
      a4,
      a5,
      a6,
      a7);
  else
    G4_VCALL<void>(v7, 52, a2, a3, a5, a6, a7);
  return hkpTreeBroadPhase32::updateHandles(a1, a2, a3, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::updateAabbs  (binary VA: 0x1805b90)
// Original: hkpTreeBroadPhase32::updateAabbs
// ----------------------------------------------------------------------------
hkpTreeBroadPhase32::Self * hkpTreeBroadPhase32::updateAabbs(hkpTreeBroadPhase32::Self *a1, hkpBroadPhaseHandle **a2, hkAabb::Self *a3, int a4, int a5, int a6)
{
  return hkpTreeBroadPhase32::updateAabbs(a1, a2, a3, 0, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::updateAabbsUint32  (binary VA: 0x1805bf0)
// Original: hkpTreeBroadPhase32::updateAabbsUint32
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * hkpTreeBroadPhase32::updateAabbsUint32(hkpTreeBroadPhase32::Self *a1, hkpBroadPhaseHandle **a2, int *a3, int a4, int a5, int a6)
{
  hkLifoAllocator::Self *v6;
  hkAabb::Self *v7;
  int *v8;
  float v9; // xmm7_4
  float *v10;
  int v11;
  float v12; // xmm0_4
  float *v13;
  hkLifoAllocator::Self *result;
  hkLifoAllocator::Self **address;
  signed int v16;
  hkAabb::Self *v17;
  float *v18;
  float *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;

  address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v6 = *address;
  v16 = (32 * a4 + 127) & 0xFFFFFF80;
  v7 = *((hkAabb::Self **)*address + 3);
  v17 = v7;
  if ( v16 <= *((uint32_t *)*address + 2) && (unsigned int)(uintptr_t)(v7) + v16 <= *((uint32_t *)v6 + 4) )
    *((uint32_t *)v6 + 3) = (uint32_t)(uintptr_t)((char *)v7 + v16);
  else
    v17 = (hkAabb::Self *)hkLifoAllocator::allocateFromNewSlab(v6, v16);
  if ( a4 > 0 )
  {
    v8 = a3;
    v19 = (float *)v17;
    v18 = (float *)((char *)v17 + 16);
    do
    {
      v20 = v8[1];
      v9 = (float)((float)*v8 * *((float *)a1 + 72)) + *((float *)a1 + 60);
      v21 = v8[2];
      v23 = v8[4];
      v22 = v8[3];
      v25 = v8[6];
      v10 = v19;
      v24 = v8[5];
      v11 = v8[7];
      v8 += 8;
      *v19 = v9;
      v19[1] = (float)((float)v20 * *((float *)a1 + 73)) + *((float *)a1 + 61);
      v12 = (float)v11;
      v19[2] = (float)((float)v21 * *((float *)a1 + 74)) + *((float *)a1 + 62);
      v13 = v18;
      v19 += 8;
      v18 += 8;
      v10[3] = (float)((float)v22 * *((float *)a1 + 75)) + *((float *)a1 + 63);
      *v13 = (float)((float)v23 * *((float *)a1 + 72)) + *((float *)a1 + 60);
      v13[1] = (float)((float)v24 * *((float *)a1 + 73)) + *((float *)a1 + 61);
      v13[2] = (float)((float)v25 * *((float *)a1 + 74)) + *((float *)a1 + 62);
      v13[3] = (float)(v12 * *((float *)a1 + 75)) + *((float *)a1 + 63);
    }
    while ( v8 != &a3[8 * a4] );
  }
  hkpTreeBroadPhase32::updateAabbs(a1, a2, v17, (int)(uintptr_t)(a3), a4, a5, a6);
  result = *address;
  if ( v16 > *((uint32_t *)*address + 2)
    || *((hkAabb::Self **)result + 3) != (hkAabb::Self *)((char *)v17 + v16)
    || v17 == *((hkAabb::Self **)result + 5) )
  {
    return hkLifoAllocator::slowBlockFree(*address, (char *)v17, v16);
  }
  *((uint32_t *)result + 3) = (uint32_t)(uintptr_t)(v17);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::castAabb  (binary VA: 0x1806520)
// Original: hkpTreeBroadPhase32::castAabb
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::castAabb(int a1, __m128 *a2, int a3)
{
  float v3; // xmm6_4
  float v4; // xmm5_4
  float v5; // xmm0_4
  float v6; // xmm6_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm5_4
  float v10; // xmm0_4
  float v11; // xmm7_4
  float v12; // xmm4_4
  float v13; // xmm2_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm7_4
  float v17; // xmm5_4
  __m128 v18;
  int v19; // xmm1_4
  int v20;
  int *v21;
  char *v22;
  int v23;
  signed int v24;
  int *v25;
  int result;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef float _g4_t_v32;
  typedef int **_g4_t_address;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef __m128 _g4_t_v39;
  typedef char *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef char *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int *_g4_t_v45;
  typedef float _g4_t_v46[23];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v28)) > _g4_s1 ? (4u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v29)) > _g4_s2 ? (16u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v30)) > _g4_s3 ? (20u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v31)) > _g4_s4 ? (24u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v32)) > _g4_s5 ? (28u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_address)) > _g4_s6 ? (28u + sizeof(_g4_t_address)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v34)) > _g4_s7 ? (32u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v35)) > _g4_s8 ? (48u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v36)) > _g4_s9 ? (52u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v37)) > _g4_s10 ? (56u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v38)) > _g4_s11 ? (60u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v39)) > _g4_s12 ? (64u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v40)) > _g4_s13 ? (80u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v41)) > _g4_s14 ? (84u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v42)) > _g4_s15 ? (88u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v43)) > _g4_s16 ? (92u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v44)) > _g4_s17 ? (96u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v45)) > _g4_s18 ? (112u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v46)) > _g4_s19 ? (128u + sizeof(_g4_t_v46)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 56u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 60u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 64u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 80u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 84u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 88u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 92u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 96u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 112u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 128u);

  v3 =g4_m128_lane<float>(a2[2], 0);
  v4 =g4_m128_lane<float>(*(a2), 0) - v3;
  v5 =g4_m128_lane<float>(*(a2), 3);
  v6 = v3 +g4_m128_lane<float>(*(a2), 0);
  v7 =g4_m128_lane<float>(*(a2), 1);
  v37 = a3;
  v8 = v7 +g4_m128_lane<float>(a2[2], 1);
  v32 = v4;
  v9 = v5;
  v10 = v5 +g4_m128_lane<float>(a2[2], 3);
  v11 =g4_m128_lane<float>(*(a2), 2);
  v38 = 0;
  v12 = v8;
  v13 =g4_m128_lane<float>(a2[2], 2);
  v36 = 1065353216;
  v14 = v13 + v11;
  v15 = v7 -g4_m128_lane<float>(a2[2], 1);
  v16 = v11 -g4_m128_lane<float>(a2[2], 2);
  v17 = v9 -g4_m128_lane<float>(a2[2], 3);
  v28 = (float)(v6 - v32) * 0.5;
  v27 = (float)(v12 - v15) * 0.5;
  v30 = (float)(v6 + v32) * 0.5;
  v29 = (float)(v15 + v12) * 0.5;
  address = (int **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
g4_m128_lane<uint64_t>(v18, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v30)), g4_m128_from<__m128>(LODWORD(v29))), 0);
g4_m128_lane<uint64_t>(v18, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(
                      g4_m128_from<__m128>(COERCE_UNSIGNED_INT((float)(v16 + v14) * 0.5)),
                      g4_m128_from<__m128>(COERCE_UNSIGNED_INT(0.5 * (float)(v17 + v10)))), 0);
  v19 = 1065353216;
  v20 = 1;
  v31 = (uint32_t *)(a1 + 64);
  while ( 1 )
  {
    v34 = v19;
    v35 = *(uint32_t *)(a1 + 12 * (v20 == 4) + 192);
    v45 = &v35;
    v39 = _mm_sub_ps(a2[1], v18);
    hkcdRay_setDirection((unsigned int *)&v39, (float *)&v34, (int)(uintptr_t)(v46));
    v44 = 64;
    v42 = 0x80000000;
    v40 = nullptr;
    v46[0] = v30;
    v41 = 0;
    v46[1] = v29;
    v21 = *address;
    v46[2] = (float)(v16 + v14) * 0.5;
    v46[3] = 0.5 * (float)(v17 + v10);
    v46[12] = v28;
    v46[13] = v27;
    v46[14] = (float)(v14 - v16) * 0.5;
    v46[15] = (float)(v10 - v17) * 0.5;
    v22 = (char *)v21[3];
    if ( v21[2] > 255 && (unsigned int)(uintptr_t)(v22 + 256) <= v21[4] )
      v21[3] = (int)(uintptr_t)(v22 + 256);
    else
      v22 = (char *)hkLifoAllocator::allocateFromNewSlab((hkLifoAllocator::Self *)v21, 256);
    v40 = v22;
    v43 = v22;
    v42 = -2147483584;
    hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpTreeBroadPhaseSpatialTree32,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbCastWrapper<hkpTreeBroadPhaseInternals::AabbCastQuery::Self>>(
      v31,
      (hkMemoryAllocator::Self *)&v40,
      (float *)&v45);
    v23 = 0;
    if ( v40 != v43 )
      v23 = v41;
    v41 = v23;
    v24 = (4 * v44 + 127) & 0xFFFFFF80;
    v25 = *address;
    if ( v24 > (*address)[2] || (char *)v25[3] != &v43[v24] || v43 == (char *)v25[5] )
      hkLifoAllocator::slowBlockFree((hkLifoAllocator::Self *)v25, v43, (4 * v44 + 127) & 0xFFFFFF80);
    else
      v25[3] = (int)(uintptr_t)(v43);
    result = v42;
    v41 = 0;
    if ( v42 >= 0 )
      result = (*(int (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
                 (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                 v40,
                 4 * v42);
    ++v20;
    v31 += 8;
    if ( v20 == 5 )
      break;
    v19 = v36;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::querySingleAabb  (binary VA: 0x1806ea0)
// Original: hkpTreeBroadPhase32::querySingleAabb
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::querySingleAabb(int a1, float *a2, int a3, int a4)
{
  hkLifoAllocator::Self *v4;
  char *v5;
  int v6;
  signed int v7;
  hkLifoAllocator::Self *v8;
  int result;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef uint32_t *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[4];
  typedef char *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef char *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef float _g4_t_v19[15];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_address)) > _g4_s0 ? (4u + sizeof(_g4_t_address)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v13)) > _g4_s3 ? (16u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v14)) > _g4_s4 ? (32u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v15)) > _g4_s5 ? (36u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v16)) > _g4_s6 ? (40u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v17)) > _g4_s7 ? (44u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v18)) > _g4_s8 ? (48u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v19)) > _g4_s9 ? (64u + sizeof(_g4_t_v19)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);

  v13[1] = a4;
  v13[2] = a3;
  address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v12 = 1;
  v11 = (uint32_t *)(a1 + 64);
  do
  {
    v18 = 64;
    v16 = 0x80000000;
    v14 = nullptr;
    v15 = 0;
    v13[0] = *(uint32_t *)(a1 + 12 * (v12 == 4) + 192);
    LODWORD(v19[0]) = (uint32_t)(uintptr_t)(v13);
    v19[4] = *a2;
    v19[5] = a2[1];
    v19[6] = a2[2];
    v19[7] = a2[3];
    v19[8] = a2[4];
    v19[9] = a2[5];
    v19[10] = a2[6];
    v19[11] = a2[7];
    v4 = *address;
    v5 = *((char **)*address + 3);
    if ( *((int *)*address + 2) > 255 && (unsigned int)(uintptr_t)(v5 + 256) <= *((uint32_t *)v4 + 4) )
      *((uint32_t *)v4 + 3) = (uint32_t)(uintptr_t)(v5 + 256);
    else
      v5 = (char *)hkLifoAllocator::allocateFromNewSlab(v4, 256);
    v14 = v5;
    v17 = v5;
    v16 = -2147483584;
    hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpTreeBroadPhaseSpatialTree32,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsNoEarlyExitWrapper<hkpTreeBroadPhaseInternals::AabbQuery::Self>>(
      v11,
      (hkMemoryAllocator::Self *)&v14,
      v19);
    v6 = 0;
    if ( v14 != v17 )
      v6 = v15;
    v15 = v6;
    v7 = (4 * v18 + 127) & 0xFFFFFF80;
    v8 = *address;
    if ( v7 > *((uint32_t *)*address + 2) || *((char **)v8 + 3) != &v17[v7] || v17 == *((char **)v8 + 5) )
      hkLifoAllocator::slowBlockFree(v8, v17, (4 * v18 + 127) & 0xFFFFFF80);
    else
      *((uint32_t *)v8 + 3) = (uint32_t)(uintptr_t)(v17);
    result = v16;
    v15 = 0;
    if ( v16 >= 0 )
      result = (*(int (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
                 (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                 v14,
                 4 * v16);
    ++v12;
    v11 += 8;
  }
  while ( v12 != 5 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::reQuerySingleObject  (binary VA: 0x18070a0)
// Original: hkpTreeBroadPhase32::reQuerySingleObject
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::reQuerySingleObject(uint32_t *a1, int a2, int a3)
{
  int v3;
  typedef int _g4_t_v5;
  typedef float _g4_t_v6[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  v3 = a1[76];
  if ( v3 != 0 )
    return G4_VCALL<int>(v3, 84, a2, a3, v5, LODWORD(v6[0]), LODWORD(v6[1]), LODWORD(v6[2]), LODWORD(v6[3]), LODWORD(v6[4]), LODWORD(v6[5]), LODWORD(v6[6]), LODWORD(v6[7]));
  G4_VCALL<void>(a1, 72, a2, v6, v5);
  return hkpTreeBroadPhase32::querySingleAabb((int)(uintptr_t)(a1), v6, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::querySingleAabbWithCollector  (binary VA: 0x1807130)
// Original: hkpTreeBroadPhase32::querySingleAabbWithCollector
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::querySingleAabbWithCollector(int a1, float *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef float *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v11)) > _g4_s3 ? (28u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v12)) > _g4_s4 ? (32u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v13)) > _g4_s5 ? (40u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v14)) > _g4_s6 ? (44u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v15)) > _g4_s7 ? (48u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v16)) > _g4_s8 ? (52u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v17)) > _g4_s9 ? (56u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v18)) > _g4_s10 ? (60u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v19)) > _g4_s11 ? (68u + sizeof(_g4_t_v19)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 68u);

  v19 = &a1;
  v3 = a1;
  v4 = a3;
  v5 = *(uint32_t *)(a1 + 304);
  if ( v5 != 0 )
    return G4_VCALL<int>(v5, 88, a2, a3);
  v12 = a2;
  v14 = 0;
  v15 = 0;
  v16 = 0x80000000;
  hkArrayUtil::reserve((hkArrayUtil::Self *)&v13, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v14, 32, 8);
  v8 = v3;
  v7 = 0;
  hkpTreeBroadPhase32::querySingleAabb(v8, v12, 0, (int)(uintptr_t)(&v14));
  if ( v15 > 0 )
  {
    do
    {
      v9 = *(uint32_t *)(v14 + 8 * v7++ + 4);
      G4_VCALL<void>(v4, 8, v9, 0);
    }
    while ( v7 < v15 );
  }
  result = v16;
  v15 = 0;
  if ( v16 >= 0 )
    return (*(int (**)(uint32_t *, int, int, int, int, float *, int *, int, int, int, int, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v14,
             8 * v16,
             v10,
             v11,
             v12,
             &v14,
             v13,
             v14,
             v15,
             v16,
             v17,
             v18);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::querySingleAabb  (binary VA: 0x1807260)
// Original: hkpTreeBroadPhase32::querySingleAabb
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::querySingleAabb(int a1, float *a2, int a3)
{
  return hkpTreeBroadPhase32::querySingleAabb(a1, a2, 0, a3);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::queryConvex  (binary VA: 0x1807e50)
// Original: hkpTreeBroadPhase32::queryConvex
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::queryConvex(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int *v6;
  int result;
  int **address;
  int *v9;
  char *v10;
  int v11;
  int *v12;
  signed int v13;
  typedef int **_g4_t_v14;
  typedef uint32_t _g4_t_v15[4];
  typedef uint32_t _g4_t_v16[4];
  typedef char *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef char *_g4_t_v20;
  typedef int _g4_t_v21;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v16)) > _g4_s2 ? (32u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v17)) > _g4_s3 ? (48u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v18)) > _g4_s4 ? (52u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v19)) > _g4_s5 ? (56u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v20)) > _g4_s6 ? (60u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v21)) > _g4_s7 ? (64u + sizeof(_g4_t_v21)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);

  v5 = 1;
  v15[1] = a4;
  v6 = (int *)(a1 + 64);
  do
  {
    v15[0] = *(uint32_t *)(a1 + 12 * (v5 == 4) + 192);
    result = a5;
    if ( _bittest(&result, (uint8_t)v5) )
    {
      v16[0] = (uint32_t)(uintptr_t)(v15);
      v16[1] = (uint32_t)(uintptr_t)(v6);
      v16[2] = a2;
      v16[3] = a3;
      v17 = nullptr;
      v18 = 0;
      v19 = 0x80000000;
      v21 = 64;
      address = (int **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v9 = *address;
      v14 = address;
      v10 = (char *)(*address)[3];
      if ( v9[2] > 255 && (unsigned int)(uintptr_t)(v10 + 256) <= v9[4] )
        v9[3] = (int)(uintptr_t)(v10 + 256);
      else
        v10 = (char *)hkLifoAllocator::allocateFromNewSlab((hkLifoAllocator::Self *)v9, 256);
      v17 = v10;
      v20 = v10;
      v19 = -2147483584;
      hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpTreeBroadPhaseSpatialTree32,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ConvexOverlapsWrapper<hkpTreeBroadPhaseInternals::ConvexQuery::Self>>(
        v6,
        (hkMemoryAllocator::Self *)&v17,
        v16);
      v11 = 0;
      if ( v17 != v20 )
        v11 = v18;
      v18 = v11;
      v12 = *v14;
      v13 = (4 * v21 + 127) & 0xFFFFFF80;
      if ( v13 > (*v14)[2] || (char *)v12[3] != &v20[v13] || v20 == (char *)v12[5] )
        hkLifoAllocator::slowBlockFree((hkLifoAllocator::Self *)v12, v20, (4 * v21 + 127) & 0xFFFFFF80);
      else
        v12[3] = (int)(uintptr_t)(v20);
      result = v19;
      v18 = 0;
      if ( v19 >= 0 )
        result = (*(int (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
                   (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                   v17,
                   4 * v19);
    }
    ++v5;
    v6 += 8;
  }
  while ( v5 != 5 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::queryConvexSorted  (binary VA: 0x1808790)
// Original: hkpTreeBroadPhase32::queryConvexSorted
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::queryConvexSorted(int a1, int *a2, int a3, int a4, int *a5, int a6)
{
  int v6;
  int *v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  int result;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v22;
  bool v23; // cc
  int v24;
  typedef int *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef char _g4_t_v30[4];
  typedef int _g4_t_v31[4];
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef unsigned int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint32_t _g4_t_v37[2];
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int *_g4_t_v45;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v28)) > _g4_s3 ? (20u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v29)) > _g4_s4 ? (24u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v30)) > _g4_s5 ? (28u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v31)) > _g4_s6 ? (32u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v32)) > _g4_s7 ? (48u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v33)) > _g4_s8 ? (52u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v34)) > _g4_s9 ? (56u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v35)) > _g4_s10 ? (60u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v36)) > _g4_s11 ? (64u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v37)) > _g4_s12 ? (80u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v38)) > _g4_s13 ? (88u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v39)) > _g4_s14 ? (92u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v40)) > _g4_s15 ? (96u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v41)) > _g4_s16 ? (112u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v42)) > _g4_s17 ? (116u + sizeof(_g4_t_v42)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v43)) > _g4_s18 ? (120u + sizeof(_g4_t_v43)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v44)) > _g4_s19 ? (124u + sizeof(_g4_t_v44)) : _g4_s19,
    _g4_s21 = (136u + sizeof(_g4_t_v45)) > _g4_s20 ? (136u + sizeof(_g4_t_v45)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 80u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 88u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 92u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 96u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 112u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 116u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 120u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 124u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 136u);

  v45 = &a1;
  v6 = a1;
  v29 = a1;
  v27 = a3;
  v26 = a4;
  v7 = a5;
  v37[1] = (uint32_t)(uintptr_t)(a5);
  v28 = a6;
  v41 = *a2;
  v42 = a2[1];
  v8 = a2[2];
  v44 = a2[3];
  v9 = a5[2];
  v43 = v8;
  v37[0] = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0x80000000;
  hkArrayUtil::reserve(
    (hkArrayUtil::Self *)v30,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
    &v38,
    (v9 & 0x3FFFFFFF) + 1,
    16);
  v7[1] = 0;
  v10 = (uint32_t *)(v6 + 64);
  v25 = v7;
  v11 = 1;
  v12 = v10;
  do
  {
    v37[0] = *(uint32_t *)(v29 + 12 * (v11 == 4) + 192);
    v13 = v28;
    if ( _bittest(&v13, (uint8_t)v11) )
    {
      v31[0] = (int)(uintptr_t)(v37);
      v31[1] = (int)(uintptr_t)(v12);
      v31[2] = v27;
      v31[3] = v26;
      v32 = 0;
      v33 = 0;
      v34 = 0x80000000;
      v36 = 64;
      address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v22 = *address;
      v23 = *((uint32_t *)*address + 2) <= 255;
      v24 = *((uint32_t *)*address + 3);
      if ( v23 || (unsigned int)(v24 + 256) > *((uint32_t *)v22 + 4) )
        v24 = hkLifoAllocator::allocateFromNewSlab(v22, 256);
      else
        *((uint32_t *)v22 + 3) = v24 + 256;
      v32 = v24;
      v35 = v24;
      v34 = 0x80000040;
      hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpTreeBroadPhaseSpatialTree32,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ConvexOverlapsWrapper<hkpTreeBroadPhaseInternals::ConvexQuerySorted::Self>>(
        v12,
        &v32,
        v31);
      hkLocalArray_unsigned_int_b0c553::Destroy((hkLocalArray<unsigned int> *)&v32);
    }
    ++v11;
    v12 += 8;
  }
  while ( v11 != 5 );
  v14 = v39;
  if ( v39 <= 1 )
  {
    v32 = 0;
    v33 = 0;
    v34 = 0x80000000;
    if ( v39 != 1 )
    {
      v17 = 0x80000000;
      v16 = 0;
      goto LABEL_9;
    }
    hkArrayUtil::reserve((hkArrayUtil::Self *)v30, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v32, 1, 4);
    v33 = 1;
  }
  else
  {
    hkAlgorithm::quickSortRecursive_hkVector4f_hkpTreeBroadP_ad60fc(v38, 0, v39 - 1);
    v32 = 0;
    v33 = 0;
    v34 = 0x80000000;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v30, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v32, v14, 4);
    v33 = v14;
  }
  v15 = 0;
  do
  {
    *(uint32_t *)(v32 + 4 * v15) = *(uint32_t *)(*v25 + 4 * (*(uint32_t *)(v38 + 16 * v15 + 12) & 0xC0FFFFFF));
    ++v15;
  }
  while ( v15 != v14 );
  v16 = v32;
  v14 = v33;
  v17 = v34;
LABEL_9:
  v18 = *v25;
  *v25 = v16;
  v19 = v25[2];
  v32 = v18;
  v25[1] = v14;
  v25[2] = v17;
  v34 = v19;
  v33 = 0;
  if ( v19 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v18,
      4 * v19);
  result = v40;
  v32 = 0;
  v34 = 0x80000000;
  v39 = 0;
  if ( v40 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v38,
             16 * v40);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::fullOptimize  (binary VA: 0x1808af0)
// Original: hkpTreeBroadPhase32::fullOptimize
// ----------------------------------------------------------------------------
int hkpTreeBroadPhase32::fullOptimize(hkpTreeBroadPhase32::Self *self)
{
  int result;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int32_t v10;
  typedef hkpTreeBroadPhase32::Self *_g4_t_v11;
  typedef int _g4_t_i;
  typedef uint32_t *_g4_t_v13;
  typedef int *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef __m128i _g4_t_v19;
  typedef hkpTreeBroadPhase32::Self **_g4_t_v20;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_i)) > _g4_s1 ? (16u + sizeof(_g4_t_i)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v13)) > _g4_s2 ? (20u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v14)) > _g4_s3 ? (24u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v15)) > _g4_s4 ? (32u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v16)) > _g4_s5 ? (36u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v17)) > _g4_s6 ? (40u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v18)) > _g4_s7 ? (44u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v19)) > _g4_s8 ? (48u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v20)) > _g4_s9 ? (76u + sizeof(_g4_t_v20)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 76u);

  v20 = &self;
  v11 = self;
  v14 = (int *)((char *)self + 32);
  for ( i = 0; i != 5; ++i )
  {
    hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::rebuildBranchSAH(&v15, v14, v14[6], 1, 32, 16);
    if ( v15 != 0 )
    {
      result = (int)(uintptr_t)(v14);
      v2 = v14[6];
    }
    else
    {
      result = 0;
      if ( v14[6] != 0 )
      {
        v17 = 0;
        v16 = 0;
        v18 = 0x80000000;
        v19 = g4_to_m128i(0);
        hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_40926f::copyTo_hkcdDynamicTree_Tree_hkc_ca3b00(
          (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *)v14,
          (hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage32::Self> *)&v16);
        v8 = *v14;
        *v14 = v16;
        v9 = v14[2];
        v14[1] = v17;
        v10 = v14[3];
        v14[2] = v18;
        v16 = v8;
        v14[3] =g4_m128_lane<int32_t>(v19, 0);
        v18 = v9;
g4_m128_lane<int32_t>(v19, 0) = v10;
        v14[6] = 1;
        v17 = 0;
        result = 1;
        if ( v9 >= 0 )
        {
          (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v8,
            48 * v9);
          result = v14[6];
        }
      }
      v2 = result;
    }
    if ( v2 == 0 )
      goto LABEL_12;
    v3 = *v14;
    while ( 1 )
    {
      v4 = v3 + 48 * v2;
      v5 = *(uint32_t *)(v4 + 36);
      if ( v5 == 0 )
      {
        v13 = (uint32_t *)((char *)v11 + 12 * (i == 4) + 192);
        *(uint32_t *)(*v13 + 8 * *(uint32_t *)(v4 + 40) + 4) = v2 & 0x1FFFFF
                                                         | *(uint32_t *)(*v13 + 8 * *(uint32_t *)(v4 + 40) + 4) & 0xFFE00000;
        v3 = *v14;
        result = 48 * v2 + *v14;
        v5 = *(uint32_t *)(result + 36);
        if ( v5 != 0 )
          goto LABEL_19;
        v6 = *(uint32_t *)(result + 32);
        if ( v6 == 0 )
          goto LABEL_12;
        result = 48 * v6;
        v5 = *(uint32_t *)(v3 + 48 * v6 + 40);
        if ( v5 == v2 )
          break;
LABEL_11:
        if ( v5 == 0 )
          goto LABEL_12;
      }
LABEL_19:
      v2 = v5;
    }
    while ( 1 )
    {
      result = 48 * v6;
      v7 = *(uint32_t *)(v3 + 48 * v6 + 32);
      if ( v7 == 0 )
        break;
      result = 48 * v7;
      v5 = *(uint32_t *)(v3 + 48 * v7 + 40);
      if ( v6 != v5 )
        goto LABEL_11;
      v6 = *(uint32_t *)(v3 + 48 * v6 + 32);
    }
LABEL_12:
    v14 += 8;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::update  (binary VA: 0x1808d30)
// Original: hkpTreeBroadPhase32::update
// ----------------------------------------------------------------------------
uint32_t * hkpTreeBroadPhase32::update(hkpTreeBroadPhase32::Self *self, float a2)
{
  unsigned int v2;
  uint32_t *result;

  v2 = *((uint32_t *)self + 59) & 0xC0FFFFFF;
  *((float *)self + 63) = *((float *)self + 58) * a2;
  result = hkpTreeBroadPhase32::optimize(self, *((float *)self + 57), v2);
  if ( *((uint8_t *)self + 308) == 0 )
  {
    result = (uint32_t *)hkpTreeBroadPhase32::fullOptimize(self);
    *((uint8_t *)self + 308) = 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::addHandlesStandalone  (binary VA: 0x18097f0)
// Original: hkpTreeBroadPhase32::addHandlesStandalone
// ----------------------------------------------------------------------------
hkArrayUtil::Self * hkpTreeBroadPhase32::addHandlesStandalone(int *a1, hkpBroadPhaseHandle **a2, hkAabb::Self *a3, int a4, int a5)
{
  int v5;
  hkArrayUtil::Self *result;
  int v7;
  int v8;
  hkAabb::Self *v9;
  int v10;
  float *v11;
  int v12;
  int v13;
  float v14; // xmm5_4
  float v15; // xmm4_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm7_4
  hkpBroadPhaseHandle *v21;
  float *v22;
  float v23; // xmm6_4
  int v24;
  float *v25;
  int v26;
  float *v27;
  float v28; // xmm0_4
  float *v29;
  float v30; // xmm5_4
  int *v31;
  hkLifoAllocator::Self *v32;
  float *v33;
  float *v34;
  signed int v35;
  hkLifoAllocator::Self *v36;
  typedef unsigned int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef hkAabb::Self *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef hkpTreeBroadPhase32::Self *_g4_t_v44;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef hkpBroadPhaseHandle **_g4_t_v48;
  typedef hkAabb::Self *_g4_t_v49;
  typedef float *_g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
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
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef int _g4_t_v73;
  typedef float _g4_t_v74;
  typedef int _g4_t_v75;
  typedef float _g4_t_v76;
  typedef int _g4_t_i;
  typedef char _g4_t_v78[4];
  typedef hkMemoryAllocator::Self **_g4_t_v79[4];
  typedef uint32_t _g4_t_v80[4];
  typedef float *_g4_t_v81;
  typedef float *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef void *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef float _g4_t_v86[192];
  typedef float _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int **_g4_t_v91;
  enum : size_t {
    _g4_s0 = 1136u,
    _g4_s1 = (4u + sizeof(_g4_t_v37)) > _g4_s0 ? (4u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v38)) > _g4_s1 ? (8u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v39)) > _g4_s2 ? (12u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v40)) > _g4_s3 ? (16u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v41)) > _g4_s4 ? (20u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v42)) > _g4_s5 ? (24u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v43)) > _g4_s6 ? (28u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v44)) > _g4_s7 ? (44u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_address)) > _g4_s8 ? (48u + sizeof(_g4_t_address)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v46)) > _g4_s9 ? (56u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v47)) > _g4_s10 ? (60u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v48)) > _g4_s11 ? (64u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v49)) > _g4_s12 ? (68u + sizeof(_g4_t_v49)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v50)) > _g4_s13 ? (72u + sizeof(_g4_t_v50)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v51)) > _g4_s14 ? (76u + sizeof(_g4_t_v51)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v52)) > _g4_s15 ? (80u + sizeof(_g4_t_v52)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v53)) > _g4_s16 ? (84u + sizeof(_g4_t_v53)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v54)) > _g4_s17 ? (88u + sizeof(_g4_t_v54)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v55)) > _g4_s18 ? (92u + sizeof(_g4_t_v55)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v56)) > _g4_s19 ? (96u + sizeof(_g4_t_v56)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v57)) > _g4_s20 ? (104u + sizeof(_g4_t_v57)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v58)) > _g4_s21 ? (108u + sizeof(_g4_t_v58)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v59)) > _g4_s22 ? (112u + sizeof(_g4_t_v59)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v60)) > _g4_s23 ? (116u + sizeof(_g4_t_v60)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v61)) > _g4_s24 ? (124u + sizeof(_g4_t_v61)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v62)) > _g4_s25 ? (128u + sizeof(_g4_t_v62)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v63)) > _g4_s26 ? (132u + sizeof(_g4_t_v63)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v64)) > _g4_s27 ? (136u + sizeof(_g4_t_v64)) : _g4_s27,
    _g4_s29 = (140u + sizeof(_g4_t_v65)) > _g4_s28 ? (140u + sizeof(_g4_t_v65)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v66)) > _g4_s29 ? (144u + sizeof(_g4_t_v66)) : _g4_s29,
    _g4_s31 = (148u + sizeof(_g4_t_v67)) > _g4_s30 ? (148u + sizeof(_g4_t_v67)) : _g4_s30,
    _g4_s32 = (152u + sizeof(_g4_t_v68)) > _g4_s31 ? (152u + sizeof(_g4_t_v68)) : _g4_s31,
    _g4_s33 = (164u + sizeof(_g4_t_v69)) > _g4_s32 ? (164u + sizeof(_g4_t_v69)) : _g4_s32,
    _g4_s34 = (168u + sizeof(_g4_t_v70)) > _g4_s33 ? (168u + sizeof(_g4_t_v70)) : _g4_s33,
    _g4_s35 = (172u + sizeof(_g4_t_v71)) > _g4_s34 ? (172u + sizeof(_g4_t_v71)) : _g4_s34,
    _g4_s36 = (176u + sizeof(_g4_t_v72)) > _g4_s35 ? (176u + sizeof(_g4_t_v72)) : _g4_s35,
    _g4_s37 = (180u + sizeof(_g4_t_v73)) > _g4_s36 ? (180u + sizeof(_g4_t_v73)) : _g4_s36,
    _g4_s38 = (180u + sizeof(_g4_t_v74)) > _g4_s37 ? (180u + sizeof(_g4_t_v74)) : _g4_s37,
    _g4_s39 = (184u + sizeof(_g4_t_v75)) > _g4_s38 ? (184u + sizeof(_g4_t_v75)) : _g4_s38,
    _g4_s40 = (184u + sizeof(_g4_t_v76)) > _g4_s39 ? (184u + sizeof(_g4_t_v76)) : _g4_s39,
    _g4_s41 = (184u + sizeof(_g4_t_i)) > _g4_s40 ? (184u + sizeof(_g4_t_i)) : _g4_s40,
    _g4_s42 = (188u + sizeof(_g4_t_v78)) > _g4_s41 ? (188u + sizeof(_g4_t_v78)) : _g4_s41,
    _g4_s43 = (192u + sizeof(_g4_t_v79)) > _g4_s42 ? (192u + sizeof(_g4_t_v79)) : _g4_s42,
    _g4_s44 = (208u + sizeof(_g4_t_v80)) > _g4_s43 ? (208u + sizeof(_g4_t_v80)) : _g4_s43,
    _g4_s45 = (224u + sizeof(_g4_t_v81)) > _g4_s44 ? (224u + sizeof(_g4_t_v81)) : _g4_s44,
    _g4_s46 = (228u + sizeof(_g4_t_v82)) > _g4_s45 ? (228u + sizeof(_g4_t_v82)) : _g4_s45,
    _g4_s47 = (232u + sizeof(_g4_t_v83)) > _g4_s46 ? (232u + sizeof(_g4_t_v83)) : _g4_s46,
    _g4_s48 = (236u + sizeof(_g4_t_v84)) > _g4_s47 ? (236u + sizeof(_g4_t_v84)) : _g4_s47,
    _g4_s49 = (240u + sizeof(_g4_t_v85)) > _g4_s48 ? (240u + sizeof(_g4_t_v85)) : _g4_s48,
    _g4_s50 = (256u + sizeof(_g4_t_v86)) > _g4_s49 ? (256u + sizeof(_g4_t_v86)) : _g4_s49,
    _g4_s51 = (1024u + sizeof(_g4_t_v87)) > _g4_s50 ? (1024u + sizeof(_g4_t_v87)) : _g4_s50,
    _g4_s52 = (1028u + sizeof(_g4_t_v88)) > _g4_s51 ? (1028u + sizeof(_g4_t_v88)) : _g4_s51,
    _g4_s53 = (1032u + sizeof(_g4_t_v89)) > _g4_s52 ? (1032u + sizeof(_g4_t_v89)) : _g4_s52,
    _g4_s54 = (1036u + sizeof(_g4_t_v90)) > _g4_s53 ? (1036u + sizeof(_g4_t_v90)) : _g4_s53,
    _g4_s55 = (1048u + sizeof(_g4_t_v91)) > _g4_s54 ? (1048u + sizeof(_g4_t_v91)) : _g4_s54
  };
  alignas(16) uint8_t _g4_sf[_g4_s55];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 4u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 48u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 56u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 60u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 64u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 68u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 72u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 76u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 80u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 84u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 88u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 92u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 96u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 104u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 108u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 112u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 116u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 124u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 128u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 132u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 136u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 140u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 144u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 148u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 152u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 164u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 168u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 172u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 176u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 180u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 180u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 184u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 184u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 184u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 188u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 192u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 208u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 224u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 228u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 232u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 236u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 240u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 256u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 1024u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 1028u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 1032u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 1036u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 1048u);

  v91 = &a1;
  v44 = (hkpTreeBroadPhase32::Self *)a1;
  v5 = a4;
  v48 = a2;
  v49 = a3;
  v80[0] = a5;
  result = (hkArrayUtil::Self *)(a4 + a1[49] + 1);
  v7 = a1[50] & 0x3FFFFFFF;
  if ( (int)(uintptr_t)(result) > v7 )
  {
    v8 = 2 * v7;
    if ( v8 >= (int)(uintptr_t)(result) )
      result = (hkArrayUtil::Self *)v8;
    result = hkArrayUtil::reserve(
               (hkArrayUtil::Self *)v78,
               (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
               a1 + 48,
               (int)(uintptr_t)(result),
               8);
  }
  if ( v5 > 0 )
  {
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v39 = 4 * v5;
    v38 = 32 * v5;
    v37 = v5 - 8 - ((v5 - 1) & 0xFFFFFFF8);
    v43 = v5;
    while ( v43 <= 7 )
    {
      hkcdDynamicTree::InplaceStorage_8_hkcdDynamicTree_Aniso_598623::releaseAll((hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUlong::Self> *)v86);
      hkcdDynamicTree::InplaceStorage_8_hkcdDynamicTree_Aniso_598623::releaseAll((hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUlong::Self> *)v86);
      v90 = 0;
      v88 = 0;
      v89 = 0;
      v46 = *((uint32_t *)v44 + 49);
      v41 = v38;
      v40 = v39;
      v47 = v43;
      if ( v43 > 0 )
        goto LABEL_9;
LABEL_22:
      v79[0] = (hkMemoryAllocator::Self **)v80;
      v81 = nullptr;
      v82 = nullptr;
      v83 = 0x80000000;
      v85 = 64;
      v81 = (float *)hkLifoAllocator::fastBlockAlloc(*address, 512);
      v84 = v81;
      v83 = -2147483584;
      hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::binary_hkcdDynamicTree_Tree_hkc_b8faa5(
        1,
        (int)(uintptr_t)(v86),
        (int)(uintptr_t)(v86),
        (hkArrayBase<hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag, 64, 0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUlong::Self>>, hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUlong::Self>>>> *)&v81,
        v79,
        nullptr,
        nullptr);
      if ( v81 == v84 )
        v82 = nullptr;
      hkLifoAllocator::fastBlockFree(*address, (char *)v84, (8 * v85 + 127) & 0xFFFFFF80);
      v82 = nullptr;
      if ( v83 >= 0 )
        (*(void (**)(uint32_t *, float *, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v81,
          8 * v83);
      v31 = (int *)((char *)v44 + 64);
      for ( i = 1; i != 4; ++i )
      {
        v81 = nullptr;
        v82 = nullptr;
        v83 = 0x80000000;
        v85 = 64;
        v80[1] = *((uint32_t *)v44 + 48);
        v79[0] = (hkMemoryAllocator::Self **)v80;
        v32 = *address;
        v33 = *((float **)*address + 3);
        if ( *((int *)*address + 2) > 511 && (unsigned int)(uintptr_t)(v33 + 128) <= *((uint32_t *)v32 + 4) )
          *((uint32_t *)v32 + 3) = (uint32_t)(uintptr_t)(v33 + 128);
        else
          v33 = (float *)hkLifoAllocator::allocateFromNewSlab(v32, 512);
        v81 = v33;
        v84 = v33;
        v83 = -2147483584;
        hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::binary<hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8,hkcdDynamicTree::AnisotropicMetric::Self,hkcdDynamicTree::CodecRawUlong::Self>>,hkpTreeBroadPhaseSpatialTree32,hkcdTreeQueriesStacks::Dynamic<64,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8,hkcdDynamicTree::AnisotropicMetric::Self,hkcdDynamicTree::CodecRawUlong::Self>>,hkpTreeBroadPhaseSpatialTree32>>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AllPairsWrapper<hkpTreeBroadPhaseInternals::InsertionQuery::Self>>(
          0,
          (int)(uintptr_t)(v86),
          v31,
          (hkArrayBase<hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag, 64, 0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUlong::Self>>, hkpTreeBroadPhaseSpatialTree32>> *)&v81,
          v79,
          nullptr,
          nullptr);
        v34 = nullptr;
        if ( v81 != v84 )
          v34 = v82;
        v82 = v34;
        v35 = (8 * v85 + 127) & 0xFFFFFF80;
        v36 = *address;
        if ( v35 > *((uint32_t *)*address + 2) || *((void **)v36 + 3) != (char *)v84 + v35 || v84 == *((void **)v36 + 5) )
          hkLifoAllocator::slowBlockFree(v36, (char *)v84, v35);
        else
          *((uint32_t *)v36 + 3) = (uint32_t)(uintptr_t)(v84);
        v82 = nullptr;
        if ( v83 >= 0 )
          (*(void (**)(uint32_t *, float *, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v81,
            8 * v83);
        v31 += 8;
      }
      hkpTreeBroadPhase32::addHandles(v44, v48, v49, v47);
      v43 -= 8;
      v48 = (hkpBroadPhaseHandle **)((char *)v48 + v40);
      v39 -= 32;
      v38 -= 256;
      v49 = (hkAabb::Self *)((char *)v49 + v41);
      result = (hkArrayUtil::Self *)v37;
      if ( v43 == v37 )
        return result;
    }
    hkcdDynamicTree::InplaceStorage_8_hkcdDynamicTree_Aniso_598623::releaseAll((hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUlong::Self> *)v86);
    hkcdDynamicTree::InplaceStorage_8_hkcdDynamicTree_Aniso_598623::releaseAll((hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUlong::Self> *)v86);
    v90 = 0;
    v88 = 0;
    v89 = 0;
    v41 = 256;
    v40 = 32;
    v47 = 8;
    v46 = *((uint32_t *)v44 + 49);
LABEL_9:
    v54 = 0;
    v9 = v49;
    do
    {
      *(uint32_t *)v48[v54] = v54 + v46;
      v21 = v48[v54];
      v53 = LODWORD(v87);
      v22 = &v86[12 * LODWORD(v87)];
      v87 = *v22;
      *v22 = *(float *)v9;
      v22[1] = *((float *)v9 + 1);
      v22[2] = *((float *)v9 + 2);
      v22[3] = *((float *)v9 + 3);
      *((uint32_t *)v22 + 10) = (uint32_t)(uintptr_t)(v21);
      v22[9] = 0.0;
      v23 = *v22;
      v22[4] = *((float *)v9 + 4);
      v22[5] = *((float *)v9 + 5);
      v24 = *((uint32_t *)v9 + 7);
      v22[6] = *((float *)v9 + 6);
      *((uint32_t *)v22 + 7) = v24;
      v63 = v22[1];
      v64 = v22[2];
      v56 = v22[3];
      v61 = v22[4];
      v62 = v22[5];
      v60 = v22[6];
      v55 = v22[7];
      if ( v90 != 0 )
      {
        v10 = 12 * LODWORD(v87);
        v87 = v86[12 * LODWORD(v87)];
        v50 = &v86[v10];
        v11 = &v86[12 * v90];
        v12 = *((uint32_t *)v11 + 9);
        if ( v12 != 0 )
        {
          v42 = v9;
          v25 = v22;
          while ( 1 )
          {
            v26 = 3 * *((uint32_t *)v11 + 10);
            v27 = &v86[12 * v12];
            *v11 = fminf(*v11, v23);
            v81 = v27;
            v28 = fminf(v11[1], v63);
            v29 = &v86[4 * v26];
            v82 = v29;
            v11[1] = v28;
            v11[2] = fminf(v11[2], v64);
            v11[3] = fminf(v11[3], v56);
            v11[4] = fmaxf(v11[4], v61);
            v11[5] = fmaxf(v11[5], v62);
            v11[6] = fmaxf(v11[6], v60);
            v11[7] = fmaxf(v11[7], v55);
            v74 = v27[5];
            v71 = *v29;
            v59 = *v27;
            v76 = v27[4];
            v72 = v27[6];
            v70 = v29[1];
            v69 = v29[2];
            v57 = v27[2];
            v30 = v29[5];
            v58 = v27[1];
            v51 = v60 - v64;
            v52 = v61 - v23;
            v65 = v62 - v63;
            v66 = v64 + v60;
            v67 = v63 + v62;
            v68 = v61 + v23;
            v11 = (&v81)[(float)((float)((float)((float)(v72 - v57) + v51)
                                       + (float)((float)((float)(v74 - v58) + v65) + (float)((float)(v76 - v59) + v52)))
                               * (float)((float)((float)((float)((float)(v59 + v76) - v68)
                                                       * (float)((float)(v59 + v76) - v68))
                                               + (float)((float)((float)(v58 + v74) - v67)
                                                       * (float)((float)(v58 + v74) - v67)))
                                       + (float)((float)((float)(v57 + v72) - v66) * (float)((float)(v57 + v72) - v66)))) > (float)((float)((float)((float)(v29[6] - v69) + v51) + (float)((float)((float)(v30 - v70) + v65) + (float)((float)(v29[4] - *v29) + v52))) * (float)((float)((float)((float)((float)(v71 + v29[4]) - v68) * (float)((float)(v71 + v29[4]) - v68)) + (float)((float)((float)(v70 + v30) - v67) * (float)((float)(v70 + v30) - v67))) + (float)((float)((float)(v69 + v29[6]) - v66) * (float)((float)(v69 + v29[6]) - v66))))];
            if ( *((uint32_t *)v11 + 9) == 0 )
              break;
            v12 = *((uint32_t *)v11 + 9);
          }
          v22 = v25;
          v9 = v42;
        }
        v75 = -1431655765 * (((char *)v50 - (char *)v86) >> 4);
        v13 = *((uint32_t *)v11 + 8);
        if ( v13 != 0 )
        {
          v73 = -1431655765 * (((char *)v11 - (char *)v86) >> 4);
          LODWORD(v86[12 * v13 + 9 + (v73 == LODWORD(v86[12 * v13 + 10]))]) = v75;
        }
        else
        {
          v90 = -1431655765 * (((char *)v50 - (char *)v86) >> 4);
          v73 = -1431655765 * (((char *)v11 - (char *)v86) >> 4);
        }
        v50[8] = v11[8];
        *((uint32_t *)v50 + 9) = v73;
        *((uint32_t *)v50 + 10) = v53;
        *((uint32_t *)v11 + 8) = v75;
        *((uint32_t *)v22 + 8) = v75;
        v14 = fminf(v11[1], v63);
        v15 = fminf(v11[2], v64);
        v16 = fminf(v11[3], v56);
        v17 = fmaxf(v11[4], v61);
        v18 = fmaxf(v11[5], v62);
        v19 = fmaxf(v11[6], v60);
        v20 = fmaxf(v11[7], v55);
        *v50 = fminf(*v11, v23);
        v50[1] = v14;
        v50[2] = v15;
        v50[3] = v16;
        v50[4] = v17;
        v50[5] = v18;
        v50[6] = v19;
        v50[7] = v20;
      }
      else
      {
        v90 = v53;
        v22[8] = 0.0;
      }
      ++v88;
      ++v54;
      v9 = (hkAabb::Self *)((char *)v9 + 32);
    }
    while ( v54 < v47 );
    goto LABEL_22;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::addObject  (binary VA: 0x180a350)
// Original: hkpTreeBroadPhase32::addObject
// ----------------------------------------------------------------------------
hkArrayUtil::Self * hkpTreeBroadPhase32::addObject(hkpTreeBroadPhase32::Self *a1, hkpBroadPhaseHandle *a2, int *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float a12, float a13, float a14, float a15, float a16, float a17, float a18, float a19)
{
  int *v19;
  int v20;
  int v21;
  int v22;
  float v23; // xmm6_4
  float v24; // xmm5_4
  float v25; // xmm4_4
  int v26;
  int v27;
  float v28; // xmm4_4
  float v29; // xmm5_4
  float v30; // xmm7_4
  float v31; // xmm4_4
  float v32; // xmm3_4
  float v33; // xmm2_4
  float v34; // xmm1_4
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v38; // xmm4_4
  float v39; // xmm5_4
  float v40; // xmm7_4
  float v41; // xmm4_4
  float v42; // xmm3_4
  float v43; // xmm2_4
  float v44; // xmm1_4
  float v45; // xmm2_4
  float v46; // xmm1_4
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
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
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v47)) > _g4_s0 ? (4u + sizeof(_g4_t_v47)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v48)) > _g4_s1 ? (8u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v49)) > _g4_s2 ? (12u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v50)) > _g4_s3 ? (16u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v51)) > _g4_s4 ? (16u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v52)) > _g4_s5 ? (20u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v53)) > _g4_s6 ? (24u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v54)) > _g4_s7 ? (28u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v55)) > _g4_s8 ? (28u + sizeof(_g4_t_v55)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v56)) > _g4_s9 ? (32u + sizeof(_g4_t_v56)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v57)) > _g4_s10 ? (32u + sizeof(_g4_t_v57)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v58)) > _g4_s11 ? (36u + sizeof(_g4_t_v58)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v59)) > _g4_s12 ? (36u + sizeof(_g4_t_v59)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v60)) > _g4_s13 ? (40u + sizeof(_g4_t_v60)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v61)) > _g4_s14 ? (40u + sizeof(_g4_t_v61)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v62)) > _g4_s15 ? (44u + sizeof(_g4_t_v62)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v63)) > _g4_s16 ? (44u + sizeof(_g4_t_v63)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v64)) > _g4_s17 ? (48u + sizeof(_g4_t_v64)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v65)) > _g4_s18 ? (52u + sizeof(_g4_t_v65)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v66)) > _g4_s19 ? (56u + sizeof(_g4_t_v66)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v67)) > _g4_s20 ? (60u + sizeof(_g4_t_v67)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v68)) > _g4_s21 ? (64u + sizeof(_g4_t_v68)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v69)) > _g4_s22 ? (68u + sizeof(_g4_t_v69)) : _g4_s22,
    _g4_s24 = (72u + sizeof(_g4_t_v70)) > _g4_s23 ? (72u + sizeof(_g4_t_v70)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v71)) > _g4_s24 ? (76u + sizeof(_g4_t_v71)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 12u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 36u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 36u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 40u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 40u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 44u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 52u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 56u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 60u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 64u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 68u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 72u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 76u);

  v19 = a3;
  v20 = *((uint32_t *)a1 + 76);
  if ( v20 != 0 )
  {
    G4_VCALL<void>(v20, 28, a2, a3, a4, 0, v47, v48, v49, v50, v52, v53, v54, v56, v58, v60, v62, COERCE_FLOAT(LODWORD(v64)), COERCE_FLOAT(LODWORD(v65)), COERCE_FLOAT(LODWORD(v66)), COERCE_FLOAT(LODWORD(v67)), COERCE_FLOAT(LODWORD(v68)), COERCE_FLOAT(LODWORD(v69)), COERCE_FLOAT(LODWORD(v70)), COERCE_FLOAT(LODWORD(v71)));
    v21 = *v19;
    a5 = v19[1];
    a4 = v21;
    v22 = v19[3];
    a6 = v19[2];
    a7 = v22;
    v23 = (float)v22;
    v24 = (float)((float)a5 * *((float *)a1 + 73)) + *((float *)a1 + 61);
    v25 = (float)a6 * *((float *)a1 + 74);
    v26 = v19[5];
    a8 = v19[4];
    a9 = v26;
    v27 = v19[7];
    a10 = v19[6];
    a11 = v27;
    v28 = v25 + *((float *)a1 + 62);
    a13 = v24;
    v29 = *((float *)a1 + 75);
    v30 = (float)v21 * *((float *)a1 + 72);
    a14 = v28;
    v31 = *((float *)a1 + 63);
    a12 = v30 + *((float *)a1 + 60);
    a15 = (float)(v23 * v29) + v31;
    v32 = (float)a8 * *((float *)a1 + 72);
    v33 = (float)a9 * *((float *)a1 + 73);
    v34 = (float)a10 * *((float *)a1 + 74);
    a19 = (float)((float)v27 * v29) + v31;
    v35 = v33 + *((float *)a1 + 61);
    v36 = v34 + *((float *)a1 + 62);
    a16 = v32 + *((float *)a1 + 60);
    a17 = v35;
    a18 = v36;
    return (hkArrayUtil::Self *)hkpTreeBroadPhase32::addHandles(a1, &a2, (const hkAabb::Self *)&a12, 1);
  }
  else
  {
    v51 = *a3;
    v55 = a3[3];
    v57 = a3[4];
    v59 = a3[5];
    v61 = a3[6];
    v63 = a3[7];
    v38 = (float)((float)a3[2] * *((float *)a1 + 74)) + *((float *)a1 + 62);
    v65 = (float)((float)a3[1] * *((float *)a1 + 73)) + *((float *)a1 + 61);
    v39 = *((float *)a1 + 75);
    v40 = (float)v51 * *((float *)a1 + 72);
    v66 = v38;
    v41 = *((float *)a1 + 63);
    v64 = v40 + *((float *)a1 + 60);
    v67 = (float)((float)v55 * v39) + v41;
    v42 = (float)v57 * *((float *)a1 + 72);
    v43 = (float)v59 * *((float *)a1 + 73);
    v44 = (float)v61 * *((float *)a1 + 74);
    v71 = (float)((float)v63 * v39) + v41;
    v45 = v43 + *((float *)a1 + 61);
    v46 = v44 + *((float *)a1 + 62);
    v68 = v42 + *((float *)a1 + 60);
    v69 = v45;
    v70 = v46;
    return hkpTreeBroadPhase32::addHandlesStandalone((int *)a1, &a2, (hkAabb::Self *)&v64, 1, a4);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::addObject  (binary VA: 0x180a630)
// Original: hkpTreeBroadPhase32::addObject
// ----------------------------------------------------------------------------
hkArrayUtil::Self * hkpTreeBroadPhase32::addObject(hkpTreeBroadPhase32::Self *a1, hkpBroadPhaseHandle *a2, hkAabb::Self *a3, int a4)
{
  const hkAabb::Self *v4;
  int v5;

  v4 = a3;
  v5 = *((uint32_t *)a1 + 76);
  if ( v5 == 0 )
    return hkpTreeBroadPhase32::addHandlesStandalone((int *)a1, &a2, a3, 1, a4);
  G4_VCALL<void>(v5, 32, a2, a3, a4, 0);
  return (hkArrayUtil::Self *)hkpTreeBroadPhase32::addHandles(a1, &a2, v4, 1);
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::addObjectBatch  (binary VA: 0x180a6d0)
// Original: hkpTreeBroadPhase32::addObjectBatch
// ----------------------------------------------------------------------------
hkArrayUtil::Self * hkpTreeBroadPhase32::addObjectBatch(hkpTreeBroadPhase32::Self *a1, int a2, hkAabb::Self **a3, int a4)
{
  int v4;

  v4 = *((uint32_t *)a1 + 76);
  if ( v4 == 0 )
    return hkpTreeBroadPhase32::addHandlesStandalone(
             (int *)a1,
             *(hkpBroadPhaseHandle ***)a2,
             *a3,
             *(uint32_t *)(a2 + 4),
             a4);
  G4_VCALL<void>(v4, 36, a2, a3, a4);
  return (hkArrayUtil::Self *)hkpTreeBroadPhase32::addHandles(
                          a1,
                          *(const hkpBroadPhaseHandle *const **)a2,
                          *a3,
                          *(uint32_t *)(a2 + 4));
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::castRay  (binary VA: 0x180b200)
// Original: hkpTreeBroadPhase32::castRay
// ----------------------------------------------------------------------------
void hkpTreeBroadPhase32::castRay(int a1, int a2, float a3, int a4)
{
  int v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char *v18;
  int v19;
  int v20;
  hkLifoAllocator::Self *v21;
  int v22;
  int v23;
  float *v24;
  float v25;
  float v26;
  hkLifoAllocator::Self *v27;
  char *v28;
  typedef int _g4_t_v29;
  typedef unsigned int _g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef hkLifoAllocator::Self **_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef int _g4_t_i;
  typedef uint32_t *_g4_t_v38;
  typedef float *_g4_t_v39;
  typedef char *_g4_t_v40;
  typedef float _g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef float _g4_t_v44[3];
  typedef char *_g4_t_v45;
  typedef char *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef char *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef float _g4_t_v50[3];
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef uint8_t _g4_t_v60[345];
  typedef char _g4_t_v61;
  enum : size_t {
    _g4_s0 = 608u,
    _g4_s1 = (8u + sizeof(_g4_t_v29)) > _g4_s0 ? (8u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v30)) > _g4_s1 ? (12u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v31)) > _g4_s2 ? (16u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v32)) > _g4_s3 ? (20u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v33)) > _g4_s4 ? (24u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v34)) > _g4_s5 ? (32u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v35)) > _g4_s6 ? (36u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_address)) > _g4_s7 ? (60u + sizeof(_g4_t_address)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_i)) > _g4_s8 ? (68u + sizeof(_g4_t_i)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v38)) > _g4_s9 ? (68u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v39)) > _g4_s10 ? (72u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v40)) > _g4_s11 ? (72u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v41)) > _g4_s12 ? (76u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v42)) > _g4_s13 ? (76u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v43)) > _g4_s14 ? (80u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v44)) > _g4_s15 ? (84u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v45)) > _g4_s16 ? (96u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v46)) > _g4_s17 ? (100u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v47)) > _g4_s18 ? (104u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v48)) > _g4_s19 ? (108u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v49)) > _g4_s20 ? (112u + sizeof(_g4_t_v49)) : _g4_s20,
    _g4_s22 = (128u + sizeof(_g4_t_v50)) > _g4_s21 ? (128u + sizeof(_g4_t_v50)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v51)) > _g4_s22 ? (140u + sizeof(_g4_t_v51)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v52)) > _g4_s23 ? (144u + sizeof(_g4_t_v52)) : _g4_s23,
    _g4_s25 = (148u + sizeof(_g4_t_v53)) > _g4_s24 ? (148u + sizeof(_g4_t_v53)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v54)) > _g4_s25 ? (152u + sizeof(_g4_t_v54)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v55)) > _g4_s26 ? (156u + sizeof(_g4_t_v55)) : _g4_s26,
    _g4_s28 = (160u + sizeof(_g4_t_v56)) > _g4_s27 ? (160u + sizeof(_g4_t_v56)) : _g4_s27,
    _g4_s29 = (164u + sizeof(_g4_t_v57)) > _g4_s28 ? (164u + sizeof(_g4_t_v57)) : _g4_s28,
    _g4_s30 = (168u + sizeof(_g4_t_v58)) > _g4_s29 ? (168u + sizeof(_g4_t_v58)) : _g4_s29,
    _g4_s31 = (172u + sizeof(_g4_t_v59)) > _g4_s30 ? (172u + sizeof(_g4_t_v59)) : _g4_s30,
    _g4_s32 = (176u + sizeof(_g4_t_v60)) > _g4_s31 ? (176u + sizeof(_g4_t_v60)) : _g4_s31,
    _g4_s33 = (521u + sizeof(_g4_t_v61)) > _g4_s32 ? (521u + sizeof(_g4_t_v61)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 60u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 68u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 68u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 72u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 72u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 76u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 76u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 80u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 84u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 96u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 100u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 104u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 108u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 112u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 128u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 140u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 144u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 148u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 152u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 156u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 160u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 164u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 168u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 172u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 176u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 521u);

  v4 = *(uint32_t *)(a2 + 16);
  if ( v4 <= 1 )
  {
    v44[2] = 0.0;
    v44[1] = a3;
    v23 = 1;
    v44[0] = 1.0;
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v38 = (uint32_t *)(a1 + 64);
    do
    {
      v43 = *(uint32_t *)(a1 + 12 * (v23 == 4) + 192);
      v24 = *(float **)(a2 + 20);
      *(float *)v60 = *v24 - *(float *)a2;
      *(float *)&v60[4] = v24[1] - *(float *)(a2 + 4);
      *(float *)&v60[8] = v24[2] - *(float *)(a2 + 8);
      *(float *)&v60[12] = v24[3] - *(float *)(a2 + 12);
      hkcdRay_setDirection((unsigned int *)v60, v44, (int)(uintptr_t)(v50));
      v25 = *(float *)(a2 + 8);
      v50[0] = *(float *)a2;
      v51 = *(uint32_t *)(a2 + 12);
      v26 = *(float *)(a2 + 4);
      *(uint32_t *)v60 = (uint32_t)(uintptr_t)(&v43);
      *(uint32_t *)&v60[16] = *(uint32_t *)a2;
      *(uint32_t *)&v60[28] = v51;
      *(uint32_t *)&v60[32] = v52;
      *(uint32_t *)&v60[36] = v53;
      *(uint32_t *)&v60[40] = v54;
      *(uint32_t *)&v60[44] = v55;
      *(uint32_t *)&v60[48] = v56;
      *(uint32_t *)&v60[52] = v57;
      *(uint32_t *)&v60[56] = v58;
      v50[2] = v25;
      *(float *)&v60[24] = v25;
      v50[1] = v26;
      *(uint32_t *)&v60[64] = -1;
      *(float *)&v60[20] = v26;
      *(uint32_t *)&v60[60] = v59;
      v45 = nullptr;
      v46 = nullptr;
      v47 = 0x80000000;
      v49 = 64;
      v27 = *address;
      v28 = *((char **)*address + 3);
      if ( *((int *)*address + 2) > 255 && (unsigned int)(uintptr_t)(v28 + 256) <= *((uint32_t *)v27 + 4) )
        *((uint32_t *)v27 + 3) = (uint32_t)(uintptr_t)(v28 + 256);
      else
        v28 = (char *)hkLifoAllocator::allocateFromNewSlab(v27, 256);
      v45 = v28;
      v48 = v28;
      v47 = -2147483584;
      ++v23;
      hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpTreeBroadPhaseSpatialTree32,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::RayCastWrapper<hkpTreeBroadPhaseInternals::RayCastQuery::Self>>(
        v38,
        (hkMemoryAllocator::Self *)&v45,
        (float *)v60);
      hkLocalArray_unsigned_int_b0c553::Destroy((hkLocalArray<unsigned int> *)&v45);
      v38 += 8;
    }
    while ( v23 != 5 );
  }
  else
  {
    v45 = nullptr;
    v32 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v46 = (char *)hkLifoAllocator::fastBlockAlloc(*v32, (4 * v4 + 127) & 0xFFFFFF80);
    v47 = hkLifoAllocator::fastBlockAlloc(*v32, (16 * *(uint32_t *)(a2 + 16) + 127) & 0xFFFFFF80);
    v48 = (char *)hkLifoAllocator::fastBlockAlloc(*v32, (4 * *(uint32_t *)(a2 + 16) + 127) & 0xFFFFFF80);
    v49 = a4 == 0;
    if ( *(int *)(a2 + 16) <= 0 )
    {
      v34 = *(uint32_t *)(a2 + 16);
    }
    else
    {
      v41 = a3;
      v5 = 0;
      do
      {
        v6 = (char *)(v47 + 16 * v5);
        v7 = *(uint32_t *)(a2 + 24) * v5;
        v8 = *(uint32_t *)(a2 + 20);
        *(uint32_t *)v6 = *(uint32_t *)(v8 + v7);
        *((uint32_t *)v6 + 1) = *(uint32_t *)(v8 + v7 + 4);
        *((uint32_t *)v6 + 2) = *(uint32_t *)(v8 + v7 + 8);
        *((uint32_t *)v6 + 3) = *(uint32_t *)(v8 + v7 + 12);
        *(float *)&v46[4 * v5] = v41;
        *(uint32_t *)&v48[4 * v5++] = 1065353216;
        LODWORD(v41) += a4;
      }
      while ( *(uint32_t *)(a2 + 16) > v5 );
      v34 = *(uint32_t *)(a2 + 16);
    }
    v29 = 1;
    v9 = v34;
    v31 = (uint32_t *)(a1 + 64);
    while ( 1 )
    {
      v10 = v47;
      v45 = *(char **)(a1 + 12 * (v29 == 4) + 192);
      v30 = (48 * v9 + 127) & 0xFFFFFF80;
      v11 = hkLifoAllocator::fastBlockAlloc(*v32, v30);
      v33 = (char *)v11;
      if ( v9 > 0 )
      {
        v12 = v11;
        v13 = (float *)v10;
        v14 = 0;
        do
        {
          v50[0] = 1.0;
          v39 = v13;
          v42 = (uint32_t *)v12;
          ++v14;
          *(float *)v60 = *v13 - *(float *)a2;
          *(float *)&v60[4] = v13[1] - *(float *)(a2 + 4);
          *(float *)&v60[8] = v13[2] - *(float *)(a2 + 8);
          *(float *)&v60[12] = v13[3] - *(float *)(a2 + 12);
          hkcdRay_setDirection((unsigned int *)v60, v50, v12);
          v12 = (int)(uintptr_t)(v42 + 12);
          v13 = v39 + 4;
          *v42 = *(uint32_t *)a2;
          v42[1] = *(uint32_t *)(a2 + 4);
          v42[2] = *(uint32_t *)(a2 + 8);
          v42[3] = *(uint32_t *)(a2 + 12);
        }
        while ( v14 != v34 );
        *(uint32_t *)&v60[336] = 0;
        *(uint32_t *)v60 = (uint32_t)(uintptr_t)(&v45);
        v35 = 0;
        v15 = v34;
        do
        {
          v16 = 4;
          v17 = v15 - v35;
          if ( v17 <= 4 )
            v16 = v17;
          if ( v16 > 0 )
          {
            v40 = (char *)(v60);
            v18 = &v33[48 * v35];
            for ( i = 0; i != v16; ++i )
            {
              v19 = *(uint32_t *)v18;
              v18 += 48;
              *((uint32_t *)v40 + 4) = v19;
              *((uint32_t *)v40 + 5) = *((uint32_t *)v18 - 11);
              *((uint32_t *)v40 + 6) = *((uint32_t *)v18 - 10);
              *((uint32_t *)v40 + 7) = *((uint32_t *)v18 - 9);
              v20 = v40 - (char *)(v60);
              *(uint32_t *)&v60[v20 + 32] = *((uint32_t *)v18 - 8);
              *(uint32_t *)&v60[v20 + 36] = *((uint32_t *)v18 - 7);
              *(uint32_t *)&v60[v20 + 40] = *((uint32_t *)v18 - 6);
              *(uint32_t *)&v60[v20 + 44] = *((uint32_t *)v18 - 5);
              *(uint32_t *)&v60[v20 + 48] = *((uint32_t *)v18 - 4);
              *(uint32_t *)&v60[v20 + 52] = *((uint32_t *)v18 - 3);
              *(uint32_t *)&v60[v20 + 56] = *((uint32_t *)v18 - 2);
              *(uint32_t *)&v60[v20 + 60] = *((uint32_t *)v18 - 1);
              v40 += 48;
            }
          }
          v50[0] = 0.0;
          v50[1] = 0.0;
          v50[2] = -0.0;
          v52 = 64;
          v61 = (1 << v16) - 1;
          v60[344] = v61;
          *(uint32_t *)&v60[340] = v35;
          v21 = *v32;
          v22 = *((uint32_t *)*v32 + 3);
          if ( *((int *)*v32 + 2) > 255 && (unsigned int)(v22 + 256) <= *((uint32_t *)v21 + 4) )
            *((uint32_t *)v21 + 3) = v22 + 256;
          else
            v22 = hkLifoAllocator::allocateFromNewSlab(v21, 256);
          LODWORD(v50[0]) = v22;
          v51 = v22;
          LODWORD(v50[2]) = -2147483584;
          hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpTreeBroadPhaseSpatialTree32,hkcdTreeQueriesStacks::Dynamic<64,unsigned int>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::RayCastBatchWrapper<hkpTreeBroadPhaseInternals::RayCastFanQuery>>(
            v31,
            (int *)v50,
            (int)(uintptr_t)(v60));
          hkLocalArray_unsigned_int_b0c553::Destroy((hkLocalArray<unsigned int> *)v50);
          v35 += v16;
          v15 = v34;
        }
        while ( v35 < v34 );
      }
      hkLifoAllocator::fastBlockFree(*v32, v33, v30);
      ++v29;
      v31 += 8;
      if ( v29 == 5 )
        break;
      v34 = *(uint32_t *)(a2 + 16);
      v9 = v34;
    }
    hkLifoAllocator::fastBlockFree(*v32, v48, (4 * *(uint32_t *)(a2 + 16) + 127) & 0xFFFFFF80);
    hkLifoAllocator::fastBlockFree(*v32, (char *)v47, (16 * *(uint32_t *)(a2 + 16) + 127) & 0xFFFFFF80);
    hkLifoAllocator::fastBlockFree(*v32, v46, (4 * *(uint32_t *)(a2 + 16) + 127) & 0xFFFFFF80);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpTreeBroadPhase32::shiftBroadPhase  (binary VA: 0x180ba30)
// Original: hkpTreeBroadPhase32::shiftBroadPhase
// ----------------------------------------------------------------------------
void hkpTreeBroadPhase32::shiftBroadPhase(int a1, int a2, uint32_t *a3)
{
  typedef int _g4_t_v3;
  typedef int _g4_t_v4[3];
  typedef int _g4_t_v5[135];
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v5)) > _g4_s2 ? (16u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);

  hkErrStream::Construct((hkErrStream::Self *)v4, (hkString::Self *)v5, 512);
  hkOstream::opShl((int)(uintptr_t)(v4), (hkString::Self *)"shiftBroadPhase is not supported by the tree broadphase");
  hkError::messageWarning(
    (hkError::Self *)0xA2B0295F,
    (int)(uintptr_t)(v5),
    "../../Physics2012/Internal/BroadPhase/TreeBroadPhase/hkpTreeBroadPhase.cpp",
    (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_3E4)->st_value,
    v3);
  hkErrStream::Destroy((hkErrStream::Self *)v4);
  *a3 = 0;
  a3[1] = 0;
  a3[2] = 0;
  a3[3] = 0;
}


