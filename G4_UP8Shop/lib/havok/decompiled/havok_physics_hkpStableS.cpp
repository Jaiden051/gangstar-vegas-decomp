#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpStableS.h"

// ----------------------------------------------------------------------------
// Function: hkpStableStiffSpringSchema::setArms  (binary VA: 0x179ecc0)
// Original: hkpStableStiffSpringSchema::setArms
// ----------------------------------------------------------------------------
unsigned int hkpStableStiffSpringSchema::setArms(hkpStableStiffSpringSchema::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3)
{
  __m128i v3;
  __m128 v4;
  int v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  __m128 v8;
  int v9;
  int v10;
  float v11; // xmm0_4
  float v12; // xmm6_4
  __m128i v13;
  float v14; // xmm3_4
  int v15; // xmm2_4
  float v16; // xmm2_4
  int v17;
  int v18;
  float v19; // xmm1_4
  float v20; // xmm0_4
  __m128 v21;
  __m128 v22;
  __m128 v23;
  __m128 v24;
  unsigned int result;
  __m128i v26;
  __m128 v27;
  g4_int128_t v28;
  g4_int128_t v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;

g4_m128_raw(v3) = *(unsigned int *)a2;
  *(float *)g4_m128_ptr<int32_t>(v3) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v3) * *(float *)g4_m128_ptr<int32_t>(v3))
                                 + (float)(*((float *)a2 + 1) * *((float *)a2 + 1)))
                         + (float)(*((float *)a2 + 2) * *((float *)a2 + 2));
g4_m128_raw(v4) = 0;
  v35 = *(float *)a2;
  v34 = *((float *)a2 + 1);
  v33 = *((float *)a2 + 2);
  if ( *(float *)g4_m128_ptr<int32_t>(v3) <= 0.0 )
  {
    v12 = 0.0;
g4_m128_raw(v8) = 0;
  }
  else
  {
    v5 = ((_mm_cvtsi128_si32(v3) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v3) >> 1));
g4_m128_raw(v8) = 0x3FC00000u;
    v6 = (float)(*(float *)&v5 * 1.5)
       - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v3)) * *(float *)&v5) * (float)(*(float *)&v5 * *(float *)&v5));
    v7 = (float)(v6 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v3)) * v6) * (float)(v6 * v6));
g4_m128_lane<float>(v8, 0) = (float)((float)(1.5 * v7)
                           - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v3)) * v7) * (float)(v7 * v7)))
                   * *(float *)g4_m128_ptr<int32_t>(v3);
    v9 = _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v8)));
    v10 = (2130706432 - v9) & ((v9 ^ (v9 + 2139095040)) >> 31);
    v11 = (float)(2.0
                - (float)(g4_m128_lane<float>(v8, 0)
                        * (float)((float)(2.0 - (float)(*(float *)&v10 *g4_m128_lane<float>(v8, 0))) * *(float *)&v10)))
        * (float)((float)(2.0 - (float)(*(float *)&v10 *g4_m128_lane<float>(v8, 0))) * *(float *)&v10);
    v12 = (float)(2.0 - (float)(v11 *g4_m128_lane<float>(v8, 0))) * v11;
  }
g4_m128_raw(v13) = *(unsigned int *)a3;
  v32 = *(float *)a3;
  v31 = *((float *)a3 + 1);
  v30 = *((float *)a3 + 2);
  *(float *)g4_m128_ptr<int32_t>(v13) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v13) * *(float *)g4_m128_ptr<int32_t>(v13)) + (float)(v31 * v31))
                          + (float)(v30 * v30);
  if ( *(float *)g4_m128_ptr<int32_t>(v13) <= 0.0 )
  {
    v20 = 0.0;
  }
  else
  {
    v14 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v13);
    v15 = ((_mm_cvtsi128_si32(v13) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v13) >> 1));
g4_m128_raw(v4) = 0x3FC00000u;
    v16 = (float)(*(float *)&v15 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v13)) * *(float *)&v15)
                * (float)(*(float *)&v15 * *(float *)&v15));
g4_m128_lane<float>(v4, 0) = (float)((float)(1.5 * (float)((float)(v16 * 1.5) - (float)((float)(v14 * v16) * (float)(v16 * v16))))
                           - (float)((float)(v14
                                           * (float)((float)(v16 * 1.5)
                                                   - (float)((float)(v14 * v16) * (float)(v16 * v16))))
                                   * (float)((float)((float)(v16 * 1.5)
                                                   - (float)((float)(v14 * v16) * (float)(v16 * v16)))
                                           * (float)((float)(v16 * 1.5)
                                                   - (float)((float)(v14 * v16) * (float)(v16 * v16))))))
                   * *(float *)g4_m128_ptr<int32_t>(v13);
    v17 = _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v4)));
    v18 = (2130706432 - v17) & ((v17 ^ (v17 + 2139095040)) >> 31);
    v19 = (float)(2.0
                - (float)(g4_m128_lane<float>(v4, 0)
                        * (float)((float)(2.0 - (float)(*(float *)&v18 *g4_m128_lane<float>(v4, 0))) * *(float *)&v18)))
        * (float)((float)(2.0 - (float)(*(float *)&v18 *g4_m128_lane<float>(v4, 0))) * *(float *)&v18);
    v20 = (float)(2.0 - (float)(g4_m128_lane<float>(v4, 0) * v19)) * v19;
  }
g4_m128_raw(v21) = 0x3F800000u;
  if (g4_m128_lane<float>(v8, 0) > 0.00000011920929f )
  {
g4_m128_raw(v21) = LODWORD(v35);
g4_m128_lane<float>(v21, 0) = v35 * v12;
  }
g4_m128_raw(v22) = 0u;
  if (g4_m128_lane<float>(v8, 0) > 0.00000011920929f )
  {
g4_m128_raw(v22) = LODWORD(v34);
g4_m128_lane<float>(v22, 0) = v34 * v12;
  }
g4_m128_raw(v23) = 0u;
  if (g4_m128_lane<float>(v8, 0) > 0.00000011920929f )
  {
g4_m128_raw(v23) = LODWORD(v33);
g4_m128_lane<float>(v23, 0) = v33 * v12;
  }
g4_m128_raw(v24) = 0x3F800000u;
  if (g4_m128_lane<float>(v4, 0) > 0.00000011920929f )
  {
g4_m128_raw(v24) = LODWORD(v32);
g4_m128_lane<float>(v24, 0) = v32 * v20;
  }
  result = 0;
  if (g4_m128_lane<float>(v4, 0) > 0.00000011920929f )
  {
g4_m128_raw(v26) = LODWORD(v31);
    *(float *)g4_m128_ptr<int32_t>(v26) = v31 * v20;
    result = _mm_cvtsi128_si32(v26);
  }
g4_m128_raw(v27) = 0u;
  if (g4_m128_lane<float>(v4, 0) > 0.00000011920929f )
  {
g4_m128_raw(v27) = LODWORD(v30);
g4_m128_lane<float>(v27, 0) = v30 * v20;
  }
  *(uint64_t *)&v28 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v21, v22), 0);
  *((uint64_t *)&v28 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v23, v8), 0);
  *(uint64_t *)&v29 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v24, g4_m128_from<__m128>(_mm_cvtsi32_si128(result))), 0);
  *((g4_int128_t *)self + 1) = v28;
  *((uint64_t *)&v29 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v27, v4), 0);
  *((g4_int128_t *)self + 2) = v29;
  return result;
}


