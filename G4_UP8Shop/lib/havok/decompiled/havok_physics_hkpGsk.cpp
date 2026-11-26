#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpGsk.h"

// ----------------------------------------------------------------------------
// Function: hkpGsk::print  (binary VA: 0x178e6d0)
// Original: hkpGsk::print
// ----------------------------------------------------------------------------
void hkpGsk::print()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpGsk::codeBegin  (binary VA: 0x178e6e0)
// Original: hkpGsk::codeBegin
// ----------------------------------------------------------------------------
void hkpGsk::codeBegin()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpGsk::checkTriangleBoundaries  (binary VA: 0x178e6f0)
// Original: hkpGsk::checkTriangleBoundaries
// ----------------------------------------------------------------------------
int hkpGsk::checkTriangleBoundaries(int a1, float *a2, int a3, int a4)
{
  float v4; // xmm0_4
  float v5; // xmm4_4
  float v6; // xmm7_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm5_4
  float v11; // xmm7_4
  float v12; // xmm6_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm4_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  int v19;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28; // xmm1_4
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  int v40;
  int v41;
  float v42;
  float v43;
  int v44;

  v4 = *(float *)(a3 + 32);
  v5 = *(float *)(a3 + 20);
  v6 = *(float *)a3 - v4;
  v7 = *(float *)(a3 + 36) - v5;
  v36 = *(float *)(a3 + 16) - *(float *)a3;
  v42 = v4 - *(float *)(a3 + 16);
  v8 = *(float *)(a3 + 24);
  v9 = *(float *)(a3 + 40) - v8;
  v35 = v5 - *(float *)(a3 + 4);
  v39 = *(float *)(a3 + 4) - *(float *)(a3 + 36);
  v37 = *(float *)(a3 + 8) - *(float *)(a3 + 40);
  v29 = v8 - *(float *)(a3 + 8);
  v10 = (float)(v37 * v7) - (float)(v39 * v9);
  v38 = (float)(v6 * v9) - (float)(v37 * v42);
  v30 = v6;
  v11 = (float)(v39 * v42) - (float)(v6 * v7);
  v12 = a2[1];
  v13 = v12 - v5;
  v14 = a2[2];
  v34 = v13;
  v31 = v14 - *(float *)(a3 + 8);
  v15 = v14 - *(float *)(a3 + 40);
  v33 = *a2 - *(float *)a3;
  v32 = v12 - *(float *)(a3 + 4);
  v16 = (float)((float)((float)((float)(v34 * v9) - (float)((float)(v14 - v8) * v7)) * v10)
              + (float)((float)((float)(v42 * (float)(v14 - v8)) - (float)(v9 * (float)(*a2 - *(float *)(a3 + 16))))
                      * v38))
      + (float)((float)((float)(v7 * (float)(*a2 - *(float *)(a3 + 16))) - (float)(v42 * v34)) * v11);
  v17 = (float)((float)((float)((float)((float)(v12 - *(float *)(a3 + 36)) * v37) - (float)(v39 * v15)) * v10)
              + (float)((float)((float)(v15 * v30) - (float)((float)(*a2 - *(float *)(a3 + 32)) * v37)) * v38))
      + (float)((float)((float)(v39 * (float)(*a2 - *(float *)(a3 + 32)))
                      - (float)(v30 * (float)(v12 - *(float *)(a3 + 36))))
              * v11);
  *(float *)(a1 + 352) = v16;
  *(float *)(a1 + 356) = v17;
  v18 = (float)((float)((float)((float)(v32 * v29) - (float)(v35 * v31)) * v10)
              + (float)((float)((float)(v31 * v36) - (float)(v29 * v33)) * v38))
      + (float)((float)((float)(v35 * v33) - (float)(v36 * v32)) * v11);
  *(float *)(a1 + 360) = v18;
  *(uint32_t *)(a1 + 364) = 0;
  v19 = (4 * (v18 < 0.0)) | (v16 < 0.0) | (2 * (v17 < 0.0));
  if ( a4 != 0 )
  {
    *(float *)(a1 + 288) = v10;
    *(float *)(a1 + 292) = v38;
    *(float *)(a1 + 296) = v11;
    *(uint32_t *)(a1 + 300) = 0;
    if ( v19 == 7
      && (float)((float)((float)((float)(*(float *)(a1 + 32) - *(float *)(a1 + 160)) * v10)
                       + (float)((float)(*(float *)(a1 + 36) - *(float *)(a1 + 164)) * v38))
               + (float)((float)(*(float *)(a1 + 40) - *(float *)(a1 + 168)) * v11)) < 0.0 )
    {
      *(uint32_t *)(a1 + 300) = 0x80000000;
      *(float *)(a1 + 288) = -v10;
      *(float *)(a1 + 292) = -v38;
      *(float *)(a1 + 296) = -v11;
      v43 = *(float *)a3;
      v40 = *(uint32_t *)(a3 + 4);
      *(uint32_t *)a3 = *(uint32_t *)(a3 + 16);
      *(uint32_t *)(a3 + 4) = *(uint32_t *)(a3 + 20);
      v21 = *(uint32_t *)(a3 + 8);
      *(uint32_t *)(a3 + 8) = *(uint32_t *)(a3 + 24);
      v22 = *(uint32_t *)(a3 + 12);
      *(uint32_t *)(a3 + 12) = *(uint32_t *)(a3 + 28);
      *(float *)(a3 + 16) = v43;
      *(uint32_t *)(a3 + 20) = v40;
      v23 = *(uint32_t *)(a3 + 64);
      *(uint32_t *)(a3 + 28) = v22;
      v44 = v23;
      v24 = *(uint32_t *)(a3 + 80);
      v25 = *(uint32_t *)(a3 + 68);
      *(uint32_t *)(a3 + 24) = v21;
      v41 = v25;
      v26 = *(uint32_t *)(a3 + 76);
      v27 = *(uint32_t *)(a3 + 72);
      *(uint32_t *)(a3 + 64) = v24;
      *(uint32_t *)(a3 + 68) = *(uint32_t *)(a3 + 84);
      *(uint32_t *)(a3 + 72) = *(uint32_t *)(a3 + 88);
      *(uint32_t *)(a3 + 76) = *(uint32_t *)(a3 + 92);
      *(uint32_t *)(a3 + 80) = v44;
      *(uint32_t *)(a3 + 84) = v41;
      *(uint32_t *)(a3 + 88) = v27;
      *(uint32_t *)(a3 + 92) = v26;
      v19 = 7;
      v28 = *(uint32_t *)(a1 + 352);
      *(uint32_t *)(a1 + 20) = 1;
      *(uint32_t *)(a1 + 352) = *(uint32_t *)(a1 + 356);
      *(uint32_t *)(a1 + 356) = v28;
    }
  }
  return v19;
}

// ----------------------------------------------------------------------------
// Function: hkpGsk::processEdgeTriangle  (binary VA: 0x178eb40)
// Original: hkpGsk::processEdgeTriangle
// ----------------------------------------------------------------------------
char hkpGsk::processEdgeTriangle(int a1, __m128 *a2, __m128 *a3, uint32_t *a4, uint32_t *a5, char a6, int a7)
{
  float v7; // xmm6_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm2_4
  float v12; // xmm4_4
  float v13; // xmm5_4
  float v14; // xmm6_4
  float v15; // xmm0_4
  float v16; // xmm5_4
  float v17; // xmm3_4
  float v18; // xmm6_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  __m128i v22;
  float v23; // xmm6_4
  __m128i v24;
  float v25; // xmm4_4
  __m128i v26;
  int v27;
  int v28;
  float v29; // xmm4_4
  float v30; // xmm0_4
  int v31;
  float v33; // xmm3_4
  float v34; // xmm4_4
  __m128i v35;
  float v36; // xmm2_4
  float v37; // xmm6_4
  float v38; // xmm1_4
  __m128i v39;
  __m128i v40;
  int v41;
  __m128i v42;
  int v43;
  int v44;
  float v45; // xmm4_4
  float v46; // xmm0_4
  int32_t v47;
  int32_t v48;
  int32_t v49;
  float v50;
  float v51;
  int32_t v52;
  float v53;
  float v54;
  int32_t v55;
  int32_t v56;
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
  typedef int32_t _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef int32_t _g4_t_v70;
  typedef float _g4_t_v71;
  typedef __m128 _g4_t_v72;
  typedef __m128 _g4_t_v73;
  typedef __m128 _g4_t_v74;
  typedef float _g4_t_v75[12];
  typedef float _g4_t_v76[15];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v57)) > _g4_s0 ? (0u + sizeof(_g4_t_v57)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v58)) > _g4_s1 ? (4u + sizeof(_g4_t_v58)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v59)) > _g4_s2 ? (8u + sizeof(_g4_t_v59)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v60)) > _g4_s3 ? (12u + sizeof(_g4_t_v60)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v61)) > _g4_s4 ? (16u + sizeof(_g4_t_v61)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v62)) > _g4_s5 ? (16u + sizeof(_g4_t_v62)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v63)) > _g4_s6 ? (20u + sizeof(_g4_t_v63)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v64)) > _g4_s7 ? (20u + sizeof(_g4_t_v64)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v65)) > _g4_s8 ? (24u + sizeof(_g4_t_v65)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v66)) > _g4_s9 ? (24u + sizeof(_g4_t_v66)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v67)) > _g4_s10 ? (24u + sizeof(_g4_t_v67)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v68)) > _g4_s11 ? (24u + sizeof(_g4_t_v68)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v69)) > _g4_s12 ? (28u + sizeof(_g4_t_v69)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v70)) > _g4_s13 ? (28u + sizeof(_g4_t_v70)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v71)) > _g4_s14 ? (28u + sizeof(_g4_t_v71)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v72)) > _g4_s15 ? (32u + sizeof(_g4_t_v72)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v73)) > _g4_s16 ? (48u + sizeof(_g4_t_v73)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v74)) > _g4_s17 ? (64u + sizeof(_g4_t_v74)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v75)) > _g4_s18 ? (80u + sizeof(_g4_t_v75)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v76)) > _g4_s19 ? (128u + sizeof(_g4_t_v76)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 0u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 4u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 8u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 12u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 16u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 16u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 20u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 20u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 24u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 24u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 24u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 24u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 28u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 28u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 28u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 32u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 48u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 64u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 80u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 128u);

  if ( a6 == 0 )
  {
    v57 = *(float *)(a1 + 352);
    v58 = *(float *)(a1 + 356);
    v59 = *(float *)(a1 + 360);
    v33 =g4_m128_lane<float>(*(a3), 1);
    v34 = *(float *)(a1 + 288);
    v64 =g4_m128_lane<float>(a2[1], 0);
    v60 =g4_m128_lane<float>(a2[1], 2);
g4_m128_raw(v35) =g4_m128_lane<uint32_t>(*(a2), 0);
    v36 = *(float *)(a1 + 296);
    v62 =g4_m128_lane<float>(a2[1], 1);
    v37 =g4_m128_lane<float>(*(a2), 1);
    v38 = (float)((float)((float)(v64 -g4_m128_lane<float>(*(a3), 0)) * v34) + (float)((float)(v62 - v33) * *(float *)(a1 + 292)))
        + (float)((float)(v60 -g4_m128_lane<float>(*(a3), 2)) * v36);
    v66 =g4_m128_lane<float>(*(a2), 2);
    v39 = v35;
    *(float *)g4_m128_ptr<int32_t>(v39) = *(float *)g4_m128_ptr<int32_t>(v35) -g4_m128_lane<float>(*(a3), 0);
    v40 = v39;
    *(float *)g4_m128_ptr<int32_t>(v40) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v39) * v34)
                                    + (float)(*(float *)(a1 + 292) * (float)(v37 - v33)))
                            + (float)((float)(v66 -g4_m128_lane<float>(*(a3), 2)) * v36);
    if ( (float)(v38 * *(float *)g4_m128_ptr<int32_t>(v40)) < 0.0 )
    {
      v42 = v40;
      *(float *)g4_m128_ptr<int32_t>(v42) = *(float *)g4_m128_ptr<int32_t>(v40) - v38;
      v43 = _mm_cvtsi128_si32(v42);
      v44 = (2130706432 - v43) & ((v43 ^ (v43 + 2139095040)) >> 31);
      v45 = (float)((float)(2.0
                          - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v40) - v38)
                                  * (float)((float)(2.0
                                                  - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v40) - v38)
                                                          * (float)((float)(2.0
                                                                          - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v40) - v38)
                                                                                  * *(float *)&v44))
                                                                  * *(float *)&v44)))
                                          * (float)((float)(2.0
                                                          - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v40) - v38)
                                                                  * *(float *)&v44))
                                                  * *(float *)&v44))))
                  * (float)((float)(2.0
                                  - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v40) - v38)
                                          * (float)((float)(2.0
                                                          - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v40) - v38)
                                                                  * *(float *)&v44))
                                                  * *(float *)&v44)))
                          * (float)((float)(2.0 - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v40) - v38) * *(float *)&v44))
                                  * *(float *)&v44)))
          * *(float *)g4_m128_ptr<int32_t>(v40);
      v46 = (float)((float)(g4_m128_lane<float>(a2[1], 3) -g4_m128_lane<float>(*(a2), 3)) * v45) +g4_m128_lane<float>(*(a2), 3);
      v76[0] = (float)((float)(v64 - *(float *)g4_m128_ptr<int32_t>(v35)) * v45) + *(float *)g4_m128_ptr<int32_t>(v35);
      v76[3] = v46;
      v76[1] = (float)((float)(v62 - v37) * v45) + v37;
      v76[2] = (float)((float)(v60 - v66) * v45) + v66;
      if ( hkpGsk::checkTriangleBoundaries(a1, v76, (int)(uintptr_t)(a3), 0) == 7 )
        return 1;
    }
    v41 = hkpGsk::checkTriangleBoundaries(a1,g4_m128_ptr<float>(a2[1]), (int)(uintptr_t)(a3), 0);
    if ( v41 == 7 )
    {
      --*a4;
g4_m128_lane<int32_t>(*(a2), 0) =g4_m128_lane<int32_t>(a2[1], 0);
g4_m128_lane<int32_t>(*(a2), 1) =g4_m128_lane<int32_t>(a2[1], 1);
g4_m128_lane<int32_t>(*(a2), 2) =g4_m128_lane<int32_t>(a2[1], 2);
g4_m128_lane<int32_t>(*(a2), 3) =g4_m128_lane<int32_t>(a2[1], 3);
g4_m128_lane<int32_t>(a2[4], 0) =g4_m128_lane<int32_t>(a2[5], 0);
g4_m128_lane<int32_t>(a2[4], 1) =g4_m128_lane<int32_t>(a2[5], 1);
g4_m128_lane<int32_t>(a2[4], 2) =g4_m128_lane<int32_t>(a2[5], 2);
g4_m128_lane<int32_t>(a2[4], 3) =g4_m128_lane<int32_t>(a2[5], 3);
      *(uint32_t *)(a1 + 372) = a7;
      return 0;
    }
    if ( v41 == 6 )
      goto LABEL_13;
    if ( v41 != 5 )
    {
      if ( v41 == 3 )
        goto LABEL_24;
      if ( v41 != 1 )
      {
        if ( v41 != 2 )
        {
          if ( v41 == 4
            && (float)((float)(*(float *)(a1 + 352) - v57) * v58) > (float)((float)(*(float *)(a1 + 356) - v58) * v57) )
          {
            goto LABEL_21;
          }
LABEL_13:
          --*a5;
g4_m128_lane<int32_t>(*(a3), 0) =g4_m128_lane<int32_t>(a3[2], 0);
g4_m128_lane<int32_t>(*(a3), 1) =g4_m128_lane<int32_t>(a3[2], 1);
g4_m128_lane<int32_t>(*(a3), 2) =g4_m128_lane<int32_t>(a3[2], 2);
g4_m128_lane<int32_t>(*(a3), 3) =g4_m128_lane<int32_t>(a3[2], 3);
g4_m128_lane<int32_t>(a3[4], 0) =g4_m128_lane<int32_t>(a3[6], 0);
g4_m128_lane<int32_t>(a3[4], 1) =g4_m128_lane<int32_t>(a3[6], 1);
g4_m128_lane<int32_t>(a3[4], 2) =g4_m128_lane<int32_t>(a3[6], 2);
g4_m128_lane<int32_t>(a3[4], 3) =g4_m128_lane<int32_t>(a3[6], 3);
          return 2;
        }
        if ( (float)((float)(*(float *)(a1 + 360) - v59) * v57) > (float)((float)(*(float *)(a1 + 352) - v57) * v59) )
          goto LABEL_13;
LABEL_24:
        --*a5;
        return 2;
      }
      if ( (float)((float)(*(float *)(a1 + 356) - v58) * v59) > (float)((float)(*(float *)(a1 + 360) - v59) * v58) )
        goto LABEL_24;
    }
LABEL_21:
    --*a5;
g4_m128_lane<int32_t>(a3[1], 0) =g4_m128_lane<int32_t>(a3[2], 0);
g4_m128_lane<int32_t>(a3[1], 1) =g4_m128_lane<int32_t>(a3[2], 1);
g4_m128_lane<int32_t>(a3[1], 2) =g4_m128_lane<int32_t>(a3[2], 2);
g4_m128_lane<int32_t>(a3[1], 3) =g4_m128_lane<int32_t>(a3[2], 3);
g4_m128_lane<int32_t>(a3[5], 0) =g4_m128_lane<int32_t>(a3[6], 0);
g4_m128_lane<int32_t>(a3[5], 1) =g4_m128_lane<int32_t>(a3[6], 1);
g4_m128_lane<int32_t>(a3[5], 2) =g4_m128_lane<int32_t>(a3[6], 2);
g4_m128_lane<int32_t>(a3[5], 3) =g4_m128_lane<int32_t>(a3[6], 3);
    return 2;
  }
  v7 =g4_m128_lane<float>(a3[2], 0);
  v8 =g4_m128_lane<float>(a3[1], 0) - v7;
  v9 =g4_m128_lane<float>(a3[2], 2);
  v10 =g4_m128_lane<float>(a3[1], 2);
  v72 = _mm_sub_ps(a3[1], a3[2]);
  v11 = v10 - v9;
  v12 =g4_m128_lane<float>(*(a3), 0) - v7;
  v13 =g4_m128_lane<float>(a3[2], 1);
  v14 =g4_m128_lane<float>(*(a3), 2) - v9;
  v15 =g4_m128_lane<float>(a3[1], 1) - v13;
  v16 =g4_m128_lane<float>(*(a3), 1) - v13;
  v73 = _mm_sub_ps(*a3, a3[2]);
  v17 = v15 * v14;
  v18 = v14 * v8;
  v19 = (float)(v8 * v16) - (float)(v15 * v12);
  v20 = v17 - (float)(v11 * v16);
  v65 =g4_m128_lane<float>(a2[1], 0);
  v21 = (float)(v11 * v12) - v18;
g4_m128_raw(v22) =g4_m128_lane<uint32_t>(*(a2), 0);
  v23 =g4_m128_lane<float>(*(a2), 1);
  v69 =g4_m128_lane<float>(*(a2), 2);
  v63 =g4_m128_lane<float>(a2[1], 1);
  v24 = v22;
  v61 =g4_m128_lane<float>(a2[1], 2);
  *(float *)g4_m128_ptr<int32_t>(v24) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v22) -g4_m128_lane<float>(*(a3), 0)) * v20)
                                  + (float)((float)(v23 -g4_m128_lane<float>(*(a3), 1)) * v21))
                          + (float)((float)(v69 -g4_m128_lane<float>(*(a3), 2)) * v19);
  v25 = (float)((float)((float)(v65 -g4_m128_lane<float>(*(a3), 0)) * v20) + (float)((float)(v63 -g4_m128_lane<float>(*(a3), 1)) * v21))
      + (float)((float)(v61 -g4_m128_lane<float>(*(a3), 2)) * v19);
  if ( *(float *)g4_m128_ptr<int32_t>(v24) < 0.0 != v25 < 0.0 )
  {
    v26 = v24;
    *(float *)g4_m128_ptr<int32_t>(v26) = *(float *)g4_m128_ptr<int32_t>(v24) - v25;
    v27 = _mm_cvtsi128_si32(v26);
    v28 = (2130706432 - v27) & ((v27 ^ (v27 + 2139095040)) >> 31);
    *(float *)g4_m128_ptr<int32_t>(v26) = (float)(2.0
                                    - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v24) - v25)
                                            * (float)((float)(2.0
                                                            - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v24) - v25)
                                                                    * *(float *)&v28))
                                                    * *(float *)&v28)))
                            * (float)((float)(2.0 - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v24) - v25) * *(float *)&v28))
                                    * *(float *)&v28);
    v29 = (float)((float)(2.0 - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v24) - v25) * *(float *)g4_m128_ptr<int32_t>(v26)))
                * *(float *)g4_m128_ptr<int32_t>(v26))
        * *(float *)g4_m128_ptr<int32_t>(v24);
    v30 = (float)((float)(g4_m128_lane<float>(a2[1], 3) -g4_m128_lane<float>(*(a2), 3)) * v29) +g4_m128_lane<float>(*(a2), 3);
    v76[0] = (float)((float)(v65 - *(float *)g4_m128_ptr<int32_t>(v22)) * v29) + *(float *)g4_m128_ptr<int32_t>(v22);
    v76[3] = v30;
    v76[1] = (float)((float)(v63 - v23) * v29) + v23;
    v76[2] = (float)((float)(v61 - v69) * v29) + v69;
    if ( hkpGsk::checkTriangleBoundaries(a1, v76, (int)(uintptr_t)(a3), 0) != 7 )
    {
LABEL_4:
      v74 = _mm_sub_ps(a2[1], *a2);
      hkLineSegmentUtil::closestLineSegLineSeg(a2, &v74, &a3[2], &v72, v75);
      hkLineSegmentUtil::closestLineSegLineSeg(a2, &v74, &a3[2], &v73, v76);
      v31 = v75[8] > v76[8];
g4_m128_lane<int32_t>(a3[v31], 0) =g4_m128_lane<int32_t>(a3[2], 0);
g4_m128_lane<int32_t>(a3[v31], 1) =g4_m128_lane<int32_t>(a3[2], 1);
g4_m128_lane<int32_t>(a3[v31], 2) =g4_m128_lane<int32_t>(a3[2], 2);
g4_m128_lane<int32_t>(a3[v31], 3) =g4_m128_lane<int32_t>(a3[2], 3);
g4_m128_lane<int32_t>(a3[v31 + 4], 0) =g4_m128_lane<int32_t>(a3[6], 0);
g4_m128_lane<int32_t>(a3[v31 + 4], 1) =g4_m128_lane<int32_t>(a3[6], 1);
g4_m128_lane<int32_t>(a3[v31 + 4], 2) =g4_m128_lane<int32_t>(a3[6], 2);
g4_m128_lane<int32_t>(a3[v31 + 4], 3) =g4_m128_lane<int32_t>(a3[6], 3);
      --*a5;
      return 2;
    }
    return 1;
  }
  if ( fabs(*(float *)g4_m128_ptr<int32_t>(v24)) > fabs(v25) )
  {
    v47 =g4_m128_lane<int32_t>(*(a2), 1);
    v70 =g4_m128_lane<int32_t>(*(a2), 0);
g4_m128_lane<int32_t>(*(a2), 0) =g4_m128_lane<int32_t>(a2[1], 0);
g4_m128_lane<int32_t>(*(a2), 1) =g4_m128_lane<int32_t>(a2[1], 1);
    v48 =g4_m128_lane<int32_t>(*(a2), 2);
g4_m128_lane<int32_t>(*(a2), 2) =g4_m128_lane<int32_t>(a2[1], 2);
    v67 = v48;
    v49 =g4_m128_lane<int32_t>(*(a2), 3);
g4_m128_lane<int32_t>(*(a2), 3) =g4_m128_lane<int32_t>(a2[1], 3);
g4_m128_lane<int32_t>(a2[1], 1) = v47;
g4_m128_lane<int32_t>(a2[1], 0) = v70;
    v50 =g4_m128_lane<float>(a2[4], 0);
g4_m128_lane<int32_t>(a2[1], 3) = v49;
    v71 = v50;
    v51 =g4_m128_lane<float>(a2[4], 2);
    v76[0] = v50;
    v52 =g4_m128_lane<int32_t>(a2[5], 0);
g4_m128_lane<int32_t>(a2[1], 2) = v67;
    v68 = v51;
    v53 =g4_m128_lane<float>(a2[4], 1);
    v76[2] = v51;
g4_m128_lane<int32_t>(a2[4], 0) = v52;
    v54 =g4_m128_lane<float>(a2[4], 3);
    v55 =g4_m128_lane<int32_t>(a2[5], 1);
    v76[1] = v53;
    v76[3] = v54;
g4_m128_lane<int32_t>(a2[4], 1) = v55;
    v56 =g4_m128_lane<int32_t>(a2[5], 2);
g4_m128_lane<float>(a2[5], 1) = v53;
g4_m128_lane<int32_t>(a2[4], 2) = v56;
g4_m128_lane<int32_t>(a2[4], 3) =g4_m128_lane<int32_t>(a2[5], 3);
g4_m128_lane<float>(a2[5], 2) = v68;
g4_m128_lane<float>(a2[5], 0) = v71;
g4_m128_lane<float>(a2[5], 3) = v54;
  }
  if ( hkpGsk::checkTriangleBoundaries(a1,g4_m128_ptr<float>(*(a2)), (int)(uintptr_t)(a3), 1) != 7 )
    goto LABEL_4;
  --*a4;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpGsk::reduceDimension  (binary VA: 0x178f380)
// Original: hkpGsk::reduceDimension
// ----------------------------------------------------------------------------
int hkpGsk::reduceDimension(__m128 *self)
{
  int v1;
  char *v2;
  int v3;
  int32_t v5;
  int v6;
  float v7; // xmm0_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  __m128i v10;
  float v11; // xmm6_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  __m128i v15;
  __m128i v16;
  int v17;
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm4_4
  float v21; // xmm7_4
  float v22; // xmm0_4
  int32_t v23;
  int v24;
  int v25;
  float v26; // xmm0_4
  __m128i v27;
  float v28; // xmm6_4
  float v29; // xmm4_4
  __m128i v30;
  float v31; // xmm3_4
  float v32; // xmm2_4
  __m128i v33;
  __m128i v34;
  int v35;
  float v36; // xmm0_4
  float v37; // xmm4_4
  float v38; // xmm5_4
  float v39; // xmm6_4
  float v40; // xmm4_4
  float v41; // xmm2_4
  char *v42;
  char *v43;
  int v44;
  int v45;
  int v46;
  char *v47;
  float *v48;
  int v49;
  int v50;
  int v51;
  float *v52;
  float v53; // xmm7_4
  __m128 *v54;
  float v55; // xmm4_4
  float v56; // xmm6_4
  float v57; // xmm3_4
  float v58; // xmm5_4
  int32_t v59;
  __m128 *v60;
  float v61; // xmm2_4
  float v62; // xmm0_4
  float v63; // xmm1_4
  float *v64;
  char *v65;
  int v66;
  int v67;
  int v68;
  float *v69;
  float v70; // xmm7_4
  float v71; // xmm6_4
  float v72; // xmm4_4
  float v73; // xmm5_4
  float v74; // xmm3_4
  float v75; // xmm2_4
  __m128 *v76;
  __m128 *v77;
  int32_t v78;
  float v79; // xmm0_4
  float v80; // xmm1_4
  int v81;
  int v82;
  int v83;
  int32_t v84;
  int v85;
  int v86;
  int32_t v87;
  int v88;
  __m128 *v89;
  int32_t v90;
  int32_t v91;
  int v92;
  float v93; // xmm2_4
  float v94; // xmm2_4
  float v95; // xmm6_4
  float v96; // xmm3_4
  float v97; // xmm0_4
  float v98; // xmm0_4
  float v99; // xmm6_4
  float v100; // xmm5_4
  float v101; // xmm0_4
  float v102; // xmm4_4
  float v103; // xmm0_4
  float v104; // xmm0_4
  int32_t v105;
  int32_t v106;
  int v107;
  int v108;
  float v109; // xmm1_4
  float v110; // xmm2_4
  float v111; // xmm4_4
  float v112; // xmm0_4
  float v113; // xmm1_4
  float v114; // xmm3_4
  float v115; // xmm2_4
  __m128i v116;
  typedef float _g4_t_v117;
  typedef float _g4_t_v118;
  typedef float _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef float _g4_t_v122;
  typedef float _g4_t_v123;
  typedef float _g4_t_v124;
  typedef float _g4_t_v125;
  typedef float _g4_t_v126;
  typedef float _g4_t_v127;
  typedef float _g4_t_v128;
  typedef float _g4_t_v129;
  typedef float _g4_t_v130;
  typedef float _g4_t_v131;
  typedef float _g4_t_v132;
  typedef float _g4_t_v133;
  typedef float _g4_t_v134;
  typedef float _g4_t_v135;
  typedef char *_g4_t_v136;
  typedef float _g4_t_v137;
  typedef float _g4_t_v138;
  typedef float _g4_t_v139;
  typedef int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef __m128 _g4_t_v142;
  typedef float _g4_t_v143;
  typedef float _g4_t_v144;
  typedef float _g4_t_v145;
  typedef float _g4_t_v146;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v117)) > _g4_s0 ? (8u + sizeof(_g4_t_v117)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v118)) > _g4_s1 ? (12u + sizeof(_g4_t_v118)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v119)) > _g4_s2 ? (16u + sizeof(_g4_t_v119)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v120)) > _g4_s3 ? (20u + sizeof(_g4_t_v120)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v121)) > _g4_s4 ? (20u + sizeof(_g4_t_v121)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v122)) > _g4_s5 ? (24u + sizeof(_g4_t_v122)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v123)) > _g4_s6 ? (24u + sizeof(_g4_t_v123)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v124)) > _g4_s7 ? (28u + sizeof(_g4_t_v124)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v125)) > _g4_s8 ? (28u + sizeof(_g4_t_v125)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v126)) > _g4_s9 ? (32u + sizeof(_g4_t_v126)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v127)) > _g4_s10 ? (32u + sizeof(_g4_t_v127)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v128)) > _g4_s11 ? (32u + sizeof(_g4_t_v128)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v129)) > _g4_s12 ? (36u + sizeof(_g4_t_v129)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v130)) > _g4_s13 ? (36u + sizeof(_g4_t_v130)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v131)) > _g4_s14 ? (36u + sizeof(_g4_t_v131)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v132)) > _g4_s15 ? (36u + sizeof(_g4_t_v132)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v133)) > _g4_s16 ? (40u + sizeof(_g4_t_v133)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v134)) > _g4_s17 ? (40u + sizeof(_g4_t_v134)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v135)) > _g4_s18 ? (40u + sizeof(_g4_t_v135)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v136)) > _g4_s19 ? (44u + sizeof(_g4_t_v136)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v137)) > _g4_s20 ? (44u + sizeof(_g4_t_v137)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v138)) > _g4_s21 ? (44u + sizeof(_g4_t_v138)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_v139)) > _g4_s22 ? (44u + sizeof(_g4_t_v139)) : _g4_s22,
    _g4_s24 = (44u + sizeof(_g4_t_v140)) > _g4_s23 ? (44u + sizeof(_g4_t_v140)) : _g4_s23,
    _g4_s25 = (44u + sizeof(_g4_t_v141)) > _g4_s24 ? (44u + sizeof(_g4_t_v141)) : _g4_s24,
    _g4_s26 = (48u + sizeof(_g4_t_v142)) > _g4_s25 ? (48u + sizeof(_g4_t_v142)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v143)) > _g4_s26 ? (64u + sizeof(_g4_t_v143)) : _g4_s26,
    _g4_s28 = (68u + sizeof(_g4_t_v144)) > _g4_s27 ? (68u + sizeof(_g4_t_v144)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v145)) > _g4_s28 ? (72u + sizeof(_g4_t_v145)) : _g4_s28,
    _g4_s30 = (76u + sizeof(_g4_t_v146)) > _g4_s29 ? (76u + sizeof(_g4_t_v146)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 8u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 12u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 16u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 20u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 20u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 24u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 24u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 28u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 28u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 32u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 32u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 32u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 36u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 36u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 36u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 36u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 40u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 40u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 40u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 44u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 44u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 44u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 44u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 44u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 44u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 48u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 64u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 68u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 72u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 76u);

  *((uint32_t *)self + 93) = 0;
  v1 =g4_m128_lane<int32_t>(*(self), 1);
  while ( 2 )
  {
    switch ( v1 | (8 *g4_m128_lane<int32_t>(*(self), 0)) )
    {
      case 9:
        goto LABEL_15;
      case 0xA:
        goto LABEL_12;
      case 0xB:
        v64 = (float *)(self + 2);
        v65 = (char *)(self + 10);
        goto LABEL_31;
      case 0xC:
        v65 = (char *)(self + 10);
        v82 = sub_178DD90((float *)self + 8, (float *)self + 40, 1.0);
        v141 = v82;
        v64 = (float *)(self + 2);
        if ( v82 < 0 )
          return 1;
        v83 = v82 + 10;
        v84 = *((uint32_t *)self + 52);
        --g4_m128_lane<int32_t>(*(self), 1);
        v83 *= 16;
        *(int32_t *)((char *)g4_m128_ptr<int32_t>(*(self)) + v83) = v84;
        *(int32_t *)((char *)&g4_m128_lane<int32_t>(*(self), 1) + v83) = *((uint32_t *)self + 53);
        *(int32_t *)((char *)&g4_m128_lane<int32_t>(*(self), 2) + v83) = *((uint32_t *)self + 54);
        *(int32_t *)((char *)&g4_m128_lane<int32_t>(*(self), 3) + v83) = *((uint32_t *)self + 55);
        v85 = 4 * (v141 + 14);
g4_m128_lane<int32_t>(*(self), v85) = *((uint32_t *)self + 68);
g4_m128_lane<int32_t>(*(self), v85 + 1) = *((uint32_t *)self + 69);
g4_m128_lane<int32_t>(*(self), v85 + 2) = *((uint32_t *)self + 70);
g4_m128_lane<int32_t>(*(self), v85 + 3) = *((uint32_t *)self + 71);
LABEL_31:
        v66 = hkpGsk::checkTriangleBoundaries((int)(uintptr_t)(self), v64, (int)(uintptr_t)(v65), 1);
        if ( v66 == 7 )
          goto LABEL_9;
        v67 = (char)hkpCollideTriangleUtil::maskToIndex[v66];
        if ( v67 < 0 )
        {
          if ( v67 == -1 )
            goto LABEL_14;
          v23 = *((uint32_t *)self + 48);
          --g4_m128_lane<int32_t>(*(self), 1);
          v24 = 4 * (v67 + 18);
          v25 = 4 * (v67 + 22);
g4_m128_lane<int32_t>(*(self), v24) = v23;
g4_m128_lane<int32_t>(*(self), v24 + 1) = *((uint32_t *)self + 49);
g4_m128_lane<int32_t>(*(self), v24 + 2) = *((uint32_t *)self + 50);
g4_m128_lane<int32_t>(*(self), v24 + 3) = *((uint32_t *)self + 51);
g4_m128_lane<int32_t>(*(self), v25) = *((uint32_t *)self + 64);
g4_m128_lane<int32_t>(*(self), v25 + 1) = *((uint32_t *)self + 65);
g4_m128_lane<int32_t>(*(self), v25 + 2) = *((uint32_t *)self + 66);
g4_m128_lane<int32_t>(*(self), v25 + 3) = *((uint32_t *)self + 67);
LABEL_12:
          v26 = *((float *)self + 46);
g4_m128_raw(v27) = *((unsigned int *)self + 44);
          v130 = *((float *)self + 42);
          v28 = *((float *)self + 45) - *((float *)self + 41);
          v117 = *((float *)self + 40);
          v29 = *((float *)self + 8);
          v30 = v27;
          *(float *)g4_m128_ptr<int32_t>(v30) = *(float *)g4_m128_ptr<int32_t>(v27) - v117;
          v138 = v26 - v130;
          v125 = *(float *)g4_m128_ptr<int32_t>(v27) - v29;
          v31 = *((float *)self + 9);
          v127 = *((float *)self + 45) - v31;
          v32 = *((float *)self + 10);
          v118 = v117 - v29;
          v123 = v26 - v32;
          v121 = *((float *)self + 41) - v31;
          v119 = v130 - v32;
          if ( (float)((float)((float)(v125 * *(float *)g4_m128_ptr<int32_t>(v30)) + (float)(v127 * v28))
                     + (float)((float)(v26 - v130) * (float)(v26 - v32))) < 0.0 == (float)((float)((float)((float)(v117 - v29) * *(float *)g4_m128_ptr<int32_t>(v30))
                                                                                                 + (float)(v121 * v28))
                                                                                         + (float)((float)(v26 - v130)
                                                                                                 * (float)(v130 - v32))) < 0.0 )
          {
            if ( (float)((float)((float)(v125 * *(float *)g4_m128_ptr<int32_t>(v30)) + (float)(v127 * v28))
                       + (float)((float)(v26 - v130) * (float)(v26 - v32))) < 0.0 )
            {
              *((uint32_t *)self + 40) = *((uint32_t *)self + 44);
              v101 = *((float *)self + 40);
              *((uint32_t *)self + 41) = *((uint32_t *)self + 45);
              v100 = *((float *)self + 41);
              *((uint32_t *)self + 42) = *((uint32_t *)self + 46);
              v99 = *((float *)self + 42);
              *((uint32_t *)self + 43) = *((uint32_t *)self + 47);
              *((uint32_t *)self + 56) = *((uint32_t *)self + 60);
              *((uint32_t *)self + 57) = *((uint32_t *)self + 61);
              *((uint32_t *)self + 58) = *((uint32_t *)self + 62);
              *((uint32_t *)self + 59) = *((uint32_t *)self + 63);
            }
            else
            {
              v99 = *((float *)self + 42);
              v100 = *((float *)self + 41);
              v101 = *((float *)self + 40);
            }
            v102 = v29 - v101;
            v103 = *((float *)self + 11);
            --g4_m128_lane<int32_t>(*(self), 1);
            v104 = v103 - *((float *)self + 43);
            *((float *)self + 72) = v102;
            *((float *)self + 73) = v31 - v100;
            *((float *)self + 74) = v32 - v99;
            *((float *)self + 75) = v104;
          }
          else
          {
            v33 = v30;
            *(float *)g4_m128_ptr<int32_t>(v33) = *(float *)g4_m128_ptr<int32_t>(v30) * *(float *)g4_m128_ptr<int32_t>(v30);
            *((uint32_t *)self + 75) = 0;
            v34 = v33;
            *(float *)g4_m128_ptr<int32_t>(v34) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v30) * *(float *)g4_m128_ptr<int32_t>(v30))
                                            + (float)(v28 * v28))
                                    + (float)(v138 * v138);
            v35 = ((_mm_cvtsi128_si32(v34) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v34) >> 1));
            v36 = (float)(*(float *)&v35 * 1.5)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v34)) * *(float *)&v35)
                        * (float)(*(float *)&v35 * *(float *)&v35));
            v37 = (float)(1.5 * v36)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v34)) * v36) * (float)(v36 * v36));
            v38 = *(float *)g4_m128_ptr<int32_t>(v30) * v37;
            v39 = v28 * v37;
            v40 = v37 * v138;
            *(float *)g4_m128_ptr<int32_t>(v33) = (float)(v127 * v119) - (float)(v123 * v121);
            v41 = (float)(v125 * v121) - (float)(v127 * v118);
            *((float *)self + 72) = (float)(v41 * v39)
                                  - (float)((float)((float)(v118 * v123) - (float)(v119 * v125)) * v40);
            *((float *)self + 73) = (float)(v40 * *(float *)g4_m128_ptr<int32_t>(v33)) - (float)(v41 * v38);
            *((float *)self + 74) = (float)((float)((float)(v118 * v123) - (float)(v119 * v125)) * v38)
                                  - (float)(*(float *)g4_m128_ptr<int32_t>(v33) * v39);
          }
          goto LABEL_9;
        }
        v68 = *((char *)&hkpCollideTriangleUtil::vertexToEdgeLut + v67);
        v140 = *((char *)&hkpCollideTriangleUtil::vertexToEdgeLut + v67 + 2);
        v69 = (float *)(self + v67 + 10);
        v70 = *v69;
        v71 = v69[1];
        v72 = *((float *)self + 8) - *v69;
        v73 = v69[2];
        v74 = *((float *)self + 9) - v71;
        v75 = *((float *)self + 10) - v73;
        v76 = self + v68 + 10;
        v77 = self + v140 + 10;
        v78 = *((uint32_t *)self + 48);
        v135 =g4_m128_lane<float>(*(v77), 0);
        v132 =g4_m128_lane<float>(*(v77), 1);
        v128 =g4_m128_lane<float>(*(v77), 2);
        v79 = (float)((float)(g4_m128_lane<float>(*(v76), 0) - v70) * v72) + (float)((float)(g4_m128_lane<float>(*(v76), 1) - v71) * v74);
        v80 =g4_m128_lane<float>(*(v76), 2) - v73;
g4_m128_lane<int32_t>(*(self), 1) = 2;
        if ( (float)(v79 + (float)(v80 * v75)) >= 0.0 )
        {
g4_m128_lane<int32_t>(*(v77), 0) = v78;
g4_m128_lane<int32_t>(*(v77), 1) = *((uint32_t *)self + 49);
g4_m128_lane<int32_t>(*(v77), 2) = *((uint32_t *)self + 50);
g4_m128_lane<int32_t>(*(v77), 3) = *((uint32_t *)self + 51);
          v81 = 4 * (v140 + 14);
g4_m128_lane<int32_t>(*(self), v81) = *((uint32_t *)self + 64);
g4_m128_lane<int32_t>(*(self), v81 + 1) = *((uint32_t *)self + 65);
g4_m128_lane<int32_t>(*(self), v81 + 2) = *((uint32_t *)self + 66);
g4_m128_lane<int32_t>(*(self), v81 + 3) = *((uint32_t *)self + 67);
          v1 =g4_m128_lane<int32_t>(*(self), 1);
          continue;
        }
        v89 = self + v68 + 14;
g4_m128_lane<int32_t>(*(v76), 0) = v78;
g4_m128_lane<int32_t>(*(v76), 1) = *((uint32_t *)self + 49);
g4_m128_lane<int32_t>(*(v76), 2) = *((uint32_t *)self + 50);
g4_m128_lane<int32_t>(*(v76), 3) = *((uint32_t *)self + 51);
g4_m128_lane<int32_t>(*(v89), 0) = *((uint32_t *)self + 64);
g4_m128_lane<int32_t>(*(v89), 1) = *((uint32_t *)self + 65);
g4_m128_lane<int32_t>(*(v89), 2) = *((uint32_t *)self + 66);
g4_m128_lane<int32_t>(*(v89), 3) = *((uint32_t *)self + 67);
        if ( (float)((float)((float)((float)(v135 - v70) * v72) + (float)((float)(v132 - v71) * v74))
                   + (float)((float)(v128 - v73) * v75)) >= 0.0 )
          goto LABEL_42;
        v105 =g4_m128_lane<int32_t>(*(self), 1);
        if ( v140 == v105 )
          v77 = v76;
        else
          v89 = self + v140 + 14;
        v106 = v105 - 1;
        v107 = 4 * (v105 + 9);
g4_m128_lane<int32_t>(*(self), 1) = v106;
g4_m128_lane<int32_t>(*(v77), 0) =g4_m128_lane<int32_t>(*(self), v107);
g4_m128_lane<int32_t>(*(v77), 1) =g4_m128_lane<int32_t>(*(self), v107 + 1);
g4_m128_lane<int32_t>(*(v77), 2) =g4_m128_lane<int32_t>(*(self), v107 + 2);
g4_m128_lane<int32_t>(*(v77), 3) =g4_m128_lane<int32_t>(*(self), v107 + 3);
        v108 = 4 * (g4_m128_lane<int32_t>(*(self), 1) + 14);
g4_m128_lane<int32_t>(*(v89), 0) =g4_m128_lane<int32_t>(*(self), v108);
g4_m128_lane<int32_t>(*(v89), 1) =g4_m128_lane<int32_t>(*(self), v108 + 1);
g4_m128_lane<int32_t>(*(v89), 2) =g4_m128_lane<int32_t>(*(self), v108 + 2);
g4_m128_lane<int32_t>(*(v89), 3) =g4_m128_lane<int32_t>(*(self), v108 + 3);
        v1 =g4_m128_lane<int32_t>(*(self), 1);
        continue;
      case 0x11:
        goto LABEL_7;
      case 0x12:
        v42 = (char *)(self + 2);
        v43 = (char *)(self + 10);
        goto LABEL_17;
      case 0x13:
        v2 = (char *)(self + 2);
        v136 = (char *)(self + 10);
        LOBYTE(v3) = hkpGsk::processEdgeTriangle(
                       (int)(uintptr_t)(self),
                       self + 2,
                       self + 10,
                       (uint32_t *)(self),
                       (uint32_t *)(&g4_m128_lane<int32_t>(*(self), 1)),
                       *((uint32_t *)self + 92) == 2,
                       1);
        if ( v3 != 1 )
          goto LABEL_23;
        return 1;
      case 0x19:
        v47 = (char *)(self + 2);
        v48 = (float *)(self + 10);
        goto LABEL_26;
      case 0x1A:
        v2 = (char *)(self + 2);
        v136 = (char *)(self + 10);
        LOBYTE(v3) = hkpGsk::processEdgeTriangle(
                       (int)(uintptr_t)(self),
                       self + 10,
                       self + 2,
                       (uint32_t *)(&g4_m128_lane<int32_t>(*(self), 1)),
                       (uint32_t *)(self),
                       *((uint32_t *)self + 92) == 2,
                       -1);
        if ( v3 == 1 )
          return 1;
LABEL_23:
        v43 = v136;
        if ( v3 != 2 )
          goto LABEL_9;
        v42 = v2;
LABEL_17:
        v142 = _mm_sub_ps(*(self + 3), *(self + 2));
        v143 = *((float *)self + 44) - *((float *)self + 40);
        v144 = *((float *)self + 45) - *((float *)self + 41);
        v145 = *((float *)self + 46) - *((float *)self + 42);
        v146 = *((float *)self + 47) - *((float *)self + 43);
        v44 = hkLineSegmentUtil::closestLineSegLineSeg(v42, &v142, v43, &v143, self + 19);
        if ( v44 == 0 )
        {
          v109 =g4_m128_lane<float>(v142, 1);
          *((uint32_t *)self + 75) = 0;
          v110 =g4_m128_lane<float>(v142, 0) * v144;
          v111 = (float)(v109 * v145) - (float)(g4_m128_lane<float>(v142, 2) * v144);
          v112 = v143 * v109;
          v113 = *((float *)self + 9) - *((float *)self + 41);
          v114 = (float)(g4_m128_lane<float>(v142, 2) * v143) - (float)(v145 *g4_m128_lane<float>(v142, 0));
          *((float *)self + 72) = v111;
          v115 = v110 - v112;
g4_m128_raw(v116) = *((unsigned int *)self + 8);
          *(float *)g4_m128_ptr<int32_t>(v116) = *(float *)g4_m128_ptr<int32_t>(v116) - *((float *)self + 40);
          *((float *)self + 73) = v114;
          *((float *)self + 74) = v115;
          *(float *)g4_m128_ptr<int32_t>(v116) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v116) * v111) + (float)(v113 * v114))
                                   + (float)((float)(*((float *)self + 10) - *((float *)self + 42)) * v115);
          if ( _mm_cvtsi128_si32(v116) < 0 )
          {
            *((float *)self + 72) = -v111;
            *((uint32_t *)self + 75) = 0x80000000;
            *((float *)self + 73) = -v114;
            *((float *)self + 74) = -v115;
          }
          goto LABEL_9;
        }
        if ( (v44 & 1) != 0 )
        {
          v45 = *((uint32_t *)self + 12);
g4_m128_lane<int32_t>(*(self), 0) = 1;
          *((uint32_t *)self + 8) = v45;
          *((uint32_t *)self + 9) = *((uint32_t *)self + 13);
          *((uint32_t *)self + 10) = *((uint32_t *)self + 14);
          *((uint32_t *)self + 11) = *((uint32_t *)self + 15);
        }
        else if ( (v44 & 2) != 0 )
        {
g4_m128_lane<int32_t>(*(self), 0) = 1;
        }
        if ( (v44 & 4) != 0 )
        {
          v46 = *((uint32_t *)self + 44);
g4_m128_lane<int32_t>(*(self), 1) = 1;
          *((uint32_t *)self + 40) = v46;
          *((uint32_t *)self + 41) = *((uint32_t *)self + 45);
          *((uint32_t *)self + 42) = *((uint32_t *)self + 46);
          *((uint32_t *)self + 43) = *((uint32_t *)self + 47);
          *((uint32_t *)self + 56) = *((uint32_t *)self + 60);
          *((uint32_t *)self + 57) = *((uint32_t *)self + 61);
          *((uint32_t *)self + 58) = *((uint32_t *)self + 62);
          *((uint32_t *)self + 59) = *((uint32_t *)self + 63);
          v1 = 1;
          continue;
        }
        if ( (v44 & 8) == 0 )
          goto LABEL_42;
g4_m128_lane<int32_t>(*(self), 1) = 1;
        v1 = 1;
        continue;
      case 0x21:
        v47 = (char *)(self + 2);
        v86 = sub_178DD90((float *)self + 40, (float *)self + 8, -1.0);
        if ( v86 < 0 )
          return 1;
        v87 = *((uint32_t *)self + 20);
        v88 = 4 * (v86 + 2);
        --g4_m128_lane<int32_t>(*(self), 0);
        v48 = (float *)(self + 10);
g4_m128_lane<int32_t>(*(self), v88) = v87;
g4_m128_lane<int32_t>(*(self), v88 + 1) = *((uint32_t *)self + 21);
g4_m128_lane<int32_t>(*(self), v88 + 2) = *((uint32_t *)self + 22);
g4_m128_lane<int32_t>(*(self), v88 + 3) = *((uint32_t *)self + 23);
LABEL_26:
        v49 = hkpGsk::checkTriangleBoundaries((int)(uintptr_t)(self), v48, (int)(uintptr_t)(v47), -1);
        if ( v49 == 7 )
          goto LABEL_9;
        v50 = (char)hkpCollideTriangleUtil::maskToIndex[v49];
        if ( v50 >= 0 )
        {
          v51 = *((char *)&hkpCollideTriangleUtil::vertexToEdgeLut + v50 + 2);
          v52 = (float *)(self + v50 + 2);
          v53 = *v52;
          v54 = self + *((char *)&hkpCollideTriangleUtil::vertexToEdgeLut + v50) + 2;
          v55 = *((float *)self + 40) - *v52;
          v56 = v52[1];
          v57 = *((float *)self + 41) - v56;
          v58 = v52[2];
          v59 = *((uint32_t *)self + 16);
          v60 = self + v51 + 2;
          v61 = *((float *)self + 42) - v58;
          v139 =g4_m128_lane<float>(*(v60), 0);
          v134 =g4_m128_lane<float>(*(v60), 1);
          v131 =g4_m128_lane<float>(*(v60), 2);
          v62 = (float)((float)(g4_m128_lane<float>(*(v54), 0) - v53) * v55) + (float)((float)(g4_m128_lane<float>(*(v54), 1) - v56) * v57);
          v63 =g4_m128_lane<float>(*(v54), 2) - v58;
g4_m128_lane<int32_t>(*(self), 0) = 2;
          if ( (float)(v62 + (float)(v63 * v61)) < 0.0 )
          {
g4_m128_lane<int32_t>(*(v54), 0) = v59;
g4_m128_lane<int32_t>(*(v54), 1) = *((uint32_t *)self + 17);
g4_m128_lane<int32_t>(*(v54), 2) = *((uint32_t *)self + 18);
g4_m128_lane<int32_t>(*(v54), 3) = *((uint32_t *)self + 19);
            if ( (float)((float)((float)((float)(v139 - v53) * v55) + (float)((float)(v134 - v56) * v57))
                       + (float)((float)(v131 - v58) * v61)) >= 0.0 )
            {
LABEL_42:
              v1 =g4_m128_lane<int32_t>(*(self), 1);
            }
            else
            {
              v90 =g4_m128_lane<int32_t>(*(self), 0);
              if ( v51 ==g4_m128_lane<int32_t>(*(self), 0) )
                v60 = v54;
              v91 = v90 - 1;
              v92 = 4 * (v90 + 1);
g4_m128_lane<int32_t>(*(self), 0) = v91;
g4_m128_lane<int32_t>(*(v60), 0) =g4_m128_lane<int32_t>(*(self), v92);
g4_m128_lane<int32_t>(*(v60), 1) =g4_m128_lane<int32_t>(*(self), v92 + 1);
g4_m128_lane<int32_t>(*(v60), 2) =g4_m128_lane<int32_t>(*(self), v92 + 2);
g4_m128_lane<int32_t>(*(v60), 3) =g4_m128_lane<int32_t>(*(self), v92 + 3);
              v1 =g4_m128_lane<int32_t>(*(self), 1);
            }
          }
          else
          {
g4_m128_lane<int32_t>(*(v60), 0) = v59;
g4_m128_lane<int32_t>(*(v60), 1) = *((uint32_t *)self + 17);
g4_m128_lane<int32_t>(*(v60), 2) = *((uint32_t *)self + 18);
g4_m128_lane<int32_t>(*(v60), 3) = *((uint32_t *)self + 19);
            v1 =g4_m128_lane<int32_t>(*(self), 1);
          }
          continue;
        }
        if ( v50 != -1 )
        {
          v5 = *((uint32_t *)self + 16);
          v6 = 4 * (v50 + 10);
          --g4_m128_lane<int32_t>(*(self), 0);
g4_m128_lane<int32_t>(*(self), v6) = v5;
g4_m128_lane<int32_t>(*(self), v6 + 1) = *((uint32_t *)self + 17);
g4_m128_lane<int32_t>(*(self), v6 + 2) = *((uint32_t *)self + 18);
g4_m128_lane<int32_t>(*(self), v6 + 3) = *((uint32_t *)self + 19);
LABEL_7:
          v7 = *((float *)self + 9);
          v8 = *((float *)self + 10);
          v9 = *((float *)self + 8);
g4_m128_raw(v10) = *((unsigned int *)self + 12);
          *(float *)g4_m128_ptr<int32_t>(v10) = *(float *)g4_m128_ptr<int32_t>(v10) - v9;
          v129 = *((float *)self + 13) - v7;
          v137 = *((float *)self + 14) - v8;
          v11 = *((float *)self + 40);
          v122 = *((float *)self + 12) - v11;
          v12 = *((float *)self + 41);
          v126 = v9 - v11;
          v124 = *((float *)self + 13) - v12;
          v13 = *((float *)self + 42);
          v133 = v7 - v12;
          v14 = v8 - v13;
          v120 = *((float *)self + 14) - v13;
          if ( (float)((float)((float)(v122 * *(float *)g4_m128_ptr<int32_t>(v10)) + (float)(v124 * v129)) + (float)(v137 * v120)) < 0.0 == (float)((float)((float)((float)(v9 - v11) * *(float *)g4_m128_ptr<int32_t>(v10)) + (float)(v129 * (float)(v7 - v12))) + (float)(v137 * v14)) < 0.0 )
          {
            if ( (float)((float)((float)(v122 * *(float *)g4_m128_ptr<int32_t>(v10)) + (float)(v124 * v129)) + (float)(v137 * v120)) < 0.0 )
            {
              *((uint32_t *)self + 8) = *((uint32_t *)self + 12);
              v93 = *((float *)self + 8);
              *((uint32_t *)self + 9) = *((uint32_t *)self + 13);
              v94 = v93 - v11;
              v95 = *((float *)self + 9);
              *((uint32_t *)self + 10) = *((uint32_t *)self + 14);
              v96 = *((float *)self + 10);
              *((uint32_t *)self + 11) = *((uint32_t *)self + 15);
              v14 = v96 - v13;
              v126 = v94;
              *((uint32_t *)self + 24) = *((uint32_t *)self + 28);
              v133 = v95 - v12;
              *((uint32_t *)self + 25) = *((uint32_t *)self + 29);
              *((uint32_t *)self + 26) = *((uint32_t *)self + 30);
              *((uint32_t *)self + 27) = *((uint32_t *)self + 31);
            }
            v97 = *((float *)self + 11);
            --g4_m128_lane<int32_t>(*(self), 0);
            v98 = v97 - *((float *)self + 43);
            *((float *)self + 72) = v126;
            *((float *)self + 73) = v133;
            *((float *)self + 74) = v14;
            *((float *)self + 75) = v98;
          }
          else
          {
            v15 = v10;
            *(float *)g4_m128_ptr<int32_t>(v15) = *(float *)g4_m128_ptr<int32_t>(v10) * *(float *)g4_m128_ptr<int32_t>(v10);
            *((uint32_t *)self + 75) = 0;
            v16 = v15;
            *(float *)g4_m128_ptr<int32_t>(v16) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v10) * *(float *)g4_m128_ptr<int32_t>(v10))
                                            + (float)(v129 * v129))
                                    + (float)(v137 * v137);
            v17 = ((_mm_cvtsi128_si32(v16) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v16) >> 1));
            v18 = (float)(*(float *)&v17 * 1.5)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v16)) * *(float *)&v17)
                        * (float)(*(float *)&v17 * *(float *)&v17));
            *(float *)g4_m128_ptr<int32_t>(v15) = (float)(1.5 * v18)
                                    - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v16)) * v18) * (float)(v18 * v18));
            *(float *)g4_m128_ptr<int32_t>(v16) = (float)(v124 * v14) - (float)(v133 * v120);
            v19 = *(float *)g4_m128_ptr<int32_t>(v10) * *(float *)g4_m128_ptr<int32_t>(v15);
            v20 = v129 * *(float *)g4_m128_ptr<int32_t>(v15);
            *(float *)g4_m128_ptr<int32_t>(v15) = *(float *)g4_m128_ptr<int32_t>(v15) * v137;
            v21 = (float)(v120 * v126) - (float)(v14 * v122);
            v22 = (float)(v122 * v133) - (float)(v124 * v126);
            *((float *)self + 72) = (float)(v21 * *(float *)g4_m128_ptr<int32_t>(v15)) - (float)(v22 * v20);
            *((float *)self + 73) = (float)(v22 * v19) - (float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)g4_m128_ptr<int32_t>(v16));
            *((float *)self + 74) = (float)(*(float *)g4_m128_ptr<int32_t>(v16) * v20) - (float)(v19 * v21);
          }
          goto LABEL_9;
        }
LABEL_14:
g4_m128_lane<int32_t>(*(self), 0) = 1;
g4_m128_lane<int32_t>(*(self), 1) = 1;
LABEL_15:
        *((float *)self + 72) = *((float *)self + 8) - *((float *)self + 40);
        *((float *)self + 73) = *((float *)self + 9) - *((float *)self + 41);
        *((float *)self + 74) = *((float *)self + 10) - *((float *)self + 42);
        *((float *)self + 75) = *((float *)self + 11) - *((float *)self + 43);
LABEL_9:
        *((uint32_t *)self + 92) =g4_m128_lane<int32_t>(*(self), 1);
        return 0;
      default:
        return 1;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpGsk::exitAndExportCacheImpl  (binary VA: 0x1790320)
// Original: hkpGsk::exitAndExportCacheImpl
// ----------------------------------------------------------------------------
int hkpGsk::exitAndExportCacheImpl(hkpGsk::Self *self, hkpGskCache::Self *a2)
{
  uint16_t v2; // si
  uint16_t v3;
  int v4;
  uint16_t v5; // di
  int v6;
  uint16_t v7; // si
  uint16_t v8;
  int v9;
  uint16_t v10; // di
  int result;
  uint16_t v12; // bp
  uint16_t v13; // bp
  uint16_t v14; // bp
  int v15;
  int v16;

  *((uint8_t *)a2 + 8) = *(uint32_t *)self;
  *((uint8_t *)a2 + 9) = *((uint32_t *)self + 1);
  v2 = *((uint16_t *)self + 22);
  v3 = v2;
  if ( *(int *)self > 1 )
  {
    v3 = *((uint16_t *)self + 30);
    if ( v2 < v3 )
    {
      v4 = 2;
      v15 = 1;
    }
    else
    {
      v15 = 0;
      v3 = *((uint16_t *)self + 22);
      v2 = *((uint16_t *)self + 30);
      v4 = 1;
    }
    if ( *(uint32_t *)self == 2 )
      goto LABEL_8;
    v5 = *((uint16_t *)self + 38);
    if ( v3 >= v5 )
    {
      v5 = v3;
      v3 = *((uint16_t *)self + 38);
      if ( v15 != 1 )
        goto LABEL_7;
    }
    else if ( v4 != 1 )
    {
LABEL_7:
      *((uint16_t *)a2 + 2) = v3;
      v3 = v5;
LABEL_8:
      *((uint16_t *)a2 + 1) = v2;
      goto LABEL_9;
    }
    v14 = v2;
    v2 = v3;
    v3 = v14;
    goto LABEL_7;
  }
LABEL_9:
  *(uint16_t *)a2 = v3;
  v6 = *((uint32_t *)self + 1);
  v7 = *((uint16_t *)self + 118);
  if ( v6 > 1 )
  {
    v8 = *((uint16_t *)self + 126);
    if ( v7 < v8 )
    {
      v16 = 2;
      v9 = 1;
    }
    else
    {
      v16 = 1;
      v8 = *((uint16_t *)self + 118);
      v7 = *((uint16_t *)self + 126);
      v9 = 0;
    }
    if ( v6 == 2 )
      goto LABEL_16;
    v10 = *((uint16_t *)self + 134);
    if ( v10 > v8 )
    {
      v12 = v8;
      v8 = *((uint16_t *)self + 134);
      v10 = v12;
      if ( v16 != 1 )
        goto LABEL_15;
    }
    else if ( v9 != 1 )
    {
LABEL_15:
      *((uint16_t *)a2 + *(uint32_t *)self + 2) = v10;
LABEL_16:
      *((uint16_t *)a2 + *(uint32_t *)self + 1) = v7;
      result = *(uint32_t *)self;
      *((uint16_t *)a2 + *(uint32_t *)self) = v8;
      return result;
    }
    v13 = v7;
    v7 = v10;
    v10 = v13;
    goto LABEL_15;
  }
  result = *(uint32_t *)self;
  *((uint16_t *)a2 + *(uint32_t *)self) = v7;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGsk::convertFeatureToClosestDistance  (binary VA: 0x1790470)
// Original: hkpGsk::convertFeatureToClosestDistance
// ----------------------------------------------------------------------------
float * hkpGsk::convertFeatureToClosestDistance(int a1, float *a2, float *a3)
{
  float *result;
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm0_4

  result = a3;
  a3[8] = a2[3];
  *a3 = *a2;
  a3[1] = a2[1];
  a3[2] = a2[2];
  a3[3] = a2[3];
  if ( *(uint32_t *)a1 == 1 )
  {
    a3[4] = *(float *)(a1 + 32);
    a3[5] = *(float *)(a1 + 36);
    a3[6] = *(float *)(a1 + 40);
    a3[7] = *(float *)(a1 + 44);
  }
  else if ( *(uint32_t *)(a1 + 4) == 1 )
  {
    v4 = a2[3];
    a3[4] = (float)(*a3 * v4) + *(float *)(a1 + 160);
    a3[5] = (float)(a3[1] * v4) + *(float *)(a1 + 164);
    v5 = a3[2] * v4;
    v6 = v4 * a3[3];
    a3[6] = v5 + *(float *)(a1 + 168);
    a3[7] = v6 + *(float *)(a1 + 172);
  }
  else
  {
    a3[4] = *(float *)(a1 + 304);
    a3[5] = *(float *)(a1 + 308);
    a3[6] = *(float *)(a1 + 312);
    a3[7] = *(float *)(a1 + 316);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGsk::codeEnd  (binary VA: 0x1790550)
// Original: hkpGsk::codeEnd
// ----------------------------------------------------------------------------
void hkpGsk::codeEnd()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpGsk::reduceDimensionExtended  (binary VA: 0x1790560)
// Original: hkpGsk::reduceDimensionExtended
// ----------------------------------------------------------------------------
int hkpGsk::reduceDimensionExtended(hkpGsk::Self *self)
{
  hkpGsk::Self *v1;
  int v2;
  int v3;
  const double *v4;
  hkpGsk::Self *v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  hkpGsk::Self *v13;
  int v14;
  char *v15;
  int v16;
  int v17;
  __m128 *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  typedef int _g4_t_v23;
  typedef __m128 *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef float _g4_t_v28;
  typedef int _g4_t_v29;
  typedef hkpGsk::Self *_g4_t_v30;
  typedef const double *_g4_t_v31;
  typedef const double *_g4_t_v32;
  typedef __m128 *_g4_t_v33;
  typedef hkpGsk::Self *_g4_t_v34;
  typedef hkpGsk::Self *_g4_t_v35;
  typedef __m128 _g4_t_v36;
  typedef __m128 _g4_t_v37;
  typedef float _g4_t_v38[15];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v23)) > _g4_s0 ? (12u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v24)) > _g4_s1 ? (16u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v25)) > _g4_s2 ? (20u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v26)) > _g4_s3 ? (24u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v27)) > _g4_s4 ? (40u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v28)) > _g4_s5 ? (44u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v29)) > _g4_s6 ? (64u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v30)) > _g4_s7 ? (68u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v31)) > _g4_s8 ? (72u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v32)) > _g4_s9 ? (72u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v33)) > _g4_s10 ? (76u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v34)) > _g4_s11 ? (76u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v35)) > _g4_s12 ? (76u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v36)) > _g4_s13 ? (80u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v37)) > _g4_s14 ? (96u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v38)) > _g4_s15 ? (112u + sizeof(_g4_t_v38)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 72u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 76u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 96u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 112u);

  v1 = self;
  v2 = *((uint32_t *)self + 1);
  if ( v2 == 3 )
  {
    if ( *(int *)self <= 0 )
    {
      v2 = 3;
      v24 = (__m128 *)((char *)self + 160);
      v31 = (const double *)((char *)self + 32);
      goto LABEL_4;
    }
    v13 = self;
    v24 = (__m128 *)((char *)self + 160);
    v14 = 0;
    v31 = (const double *)((char *)self + 32);
    v15 = (char *)self + 32;
    do
    {
      v34 = v13;
      v16 = hkpGsk::checkTriangleBoundaries((int)(uintptr_t)(v13), (float *)v15, (int)(uintptr_t)(v24), 0);
      v13 = v34;
      if ( v16 == 7 )
      {
        *((uint32_t *)v34 + 8) = *(uint32_t *)v15;
        *((uint32_t *)v34 + 9) = *((uint32_t *)v15 + 1);
        *((uint32_t *)v34 + 10) = *((uint32_t *)v15 + 2);
        result = *((uint32_t *)v15 + 3);
        *((uint32_t *)v34 + 11) = result;
        *(uint32_t *)v34 = 1;
        return result;
      }
      ++v14;
      v15 += 16;
    }
    while ( v14 < *(uint32_t *)v34 );
    v1 = v34;
    v3 = *(uint32_t *)v34;
    v2 = *((uint32_t *)v34 + 1);
  }
  else
  {
    v3 = *(uint32_t *)self;
    v24 = (__m128 *)((char *)self + 160);
    v31 = (const double *)((char *)self + 32);
  }
  if ( v3 != 3 )
  {
LABEL_4:
    v23 = 1;
LABEL_5:
    v27 = 2 * (v2 == 3) + 1;
    goto LABEL_6;
  }
  if ( v2 > 0 )
  {
    LOBYTE(v3) = 0;
    v17 = (int)(uintptr_t)(v1);
    v18 = v24;
    v19 = v3;
    do
    {
      v35 = (hkpGsk::Self *)v17;
      v20 = hkpGsk::checkTriangleBoundaries(v17,g4_m128_ptr<float>(*(v18)), (int)(uintptr_t)(v31), 0);
      v17 = (int)(uintptr_t)(v35);
      if ( v20 == 7 )
      {
        v21 = 16 * (v19 + 14);
        *((uint32_t *)v35 + 56) = *(uint32_t *)((char *)v35 + v21);
        *((uint32_t *)v35 + 57) = *(uint32_t *)((char *)v35 + v21 + 4);
        *((uint32_t *)v35 + 58) = *(uint32_t *)((char *)v35 + v21 + 8);
        *((uint32_t *)v35 + 59) = *(uint32_t *)((char *)v35 + v21 + 12);
        *((uint32_t *)v35 + 40) =g4_m128_lane<int32_t>(*(v18), 0);
        *((uint32_t *)v35 + 41) =g4_m128_lane<int32_t>(*(v18), 1);
        *((uint32_t *)v35 + 42) =g4_m128_lane<int32_t>(*(v18), 2);
        result =g4_m128_lane<int32_t>(*(v18), 3);
        *((uint32_t *)v35 + 43) = result;
        *((uint32_t *)v35 + 1) = 1;
        return result;
      }
      ++v19;
      ++v18;
    }
    while ( v19 < *((uint32_t *)v35 + 1) );
    v1 = v35;
    v2 = *((uint32_t *)v35 + 1);
    if ( *(uint32_t *)v35 == 3 )
    {
      v23 = 3;
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  v23 = 3;
  v27 = 1;
LABEL_6:
  v4 = v31;
  v29 = 0;
  v26 = 0;
  v25 = 0;
  v28 = 3.40282e38f;
  v5 = v1;
  do
  {
    v6 = 0;
    v33 = v24;
    do
    {
      v36 = _mm_sub_ps(
              _mm_loadh_ps((const double *)v5 + 2 * *((char *)&hkpCollideTriangleUtil::vertexToEdgeLut + v29 + 2) + 5),
              _mm_loadh_ps(v4 + 1));
      v30 = v5;
      v32 = v4;
      v37 = _mm_sub_ps(
              _mm_loadh_ps((const double *)v5 + 2 * *((char *)&hkpCollideTriangleUtil::vertexToEdgeLut + v6 + 2) + 21),
              *v33);
      hkLineSegmentUtil::closestLineSegLineSeg(v4, &v36, v33, &v37, v38);
      v4 = v32;
      v5 = v30;
      if ( v28 > v38[8] )
      {
        v26 = v6;
        v28 = v38[8];
        v25 = v29;
      }
      ++v6;
      ++v33;
    }
    while ( v27 > v6 );
    ++v29;
    v4 = v32 + 2;
    result = v23;
  }
  while ( v29 < v23 );
  if ( v23 == 3 )
  {
    v22 = 16 * ((*(uint32_t *)v30)-- + 1);
    result = 16 * (*((char *)&hkpCollideTriangleUtil::vertexToEdgeLut + v25) + 2);
    *(uint32_t *)((char *)v30 + result) = *(uint32_t *)((char *)v30 + v22);
    *(uint32_t *)((char *)v30 + result + 4) = *(uint32_t *)((char *)v30 + v22 + 4);
    *(uint32_t *)((char *)v30 + result + 8) = *(uint32_t *)((char *)v30 + v22 + 8);
    *(uint32_t *)((char *)v30 + result + 12) = *(uint32_t *)((char *)v30 + v22 + 12);
  }
  if ( v27 == 3 )
  {
    v8 = *((uint32_t *)v30 + 1);
    v9 = 16 * (v8 + 13);
    *((uint32_t *)v30 + 1) = v8 - 1;
    v10 = *((char *)&hkpCollideTriangleUtil::vertexToEdgeLut + v26);
    result = 16 * (v10 + 10);
    v11 = 16 * (v10 + 14);
    *(uint32_t *)((char *)v30 + v11) = *(uint32_t *)((char *)v30 + v9);
    *(uint32_t *)((char *)v30 + v11 + 4) = *(uint32_t *)((char *)v30 + v9 + 4);
    *(uint32_t *)((char *)v30 + v11 + 8) = *(uint32_t *)((char *)v30 + v9 + 8);
    *(uint32_t *)((char *)v30 + v11 + 12) = *(uint32_t *)((char *)v30 + v9 + 12);
    v12 = 16 * (*((uint32_t *)v30 + 1) + 10);
    *(uint32_t *)((char *)v30 + result) = *(uint32_t *)((char *)v30 + v12);
    *(uint32_t *)((char *)v30 + result + 4) = *(uint32_t *)((char *)v30 + v12 + 4);
    *(uint32_t *)((char *)v30 + result + 8) = *(uint32_t *)((char *)v30 + v12 + 8);
    *(uint32_t *)((char *)v30 + result + 12) = *(uint32_t *)((char *)v30 + v12 + 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGsk::handlePenetration  (binary VA: 0x1790980)
// Original: hkpGsk::handlePenetration
// ----------------------------------------------------------------------------
int hkpGsk::handlePenetration(__m128 *self, const hkpConvexShape::Self *a2, const hkpConvexShape::Self *a3, const hkTransformf::Self *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int32_t v9;
  int v10;
  float v11;
  float v12;
  int32_t v13;
  int v14;
  int32_t v15;
  int32_t v16;
  int32_t v17;
  int v18;
  int v19;
  int32_t v20;
  int32_t v21;
  int32_t v22;
  int v23;
  int v24;
  int v25;
  int i;
  int16_t v27;
  int16_t v28;
  int v29;
  int v30;
  int16_t v31;
  int16_t v32;
  int v33;
  int v34;
  int v35;
  float v36; // xmm6_4
  float v37; // xmm5_4
  float v38; // xmm4_4
  float *v39;
  float *v40;
  float v41; // xmm3_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  int32_t v44;
  int result;
  int v46;
  int v47;
  int v48;
  int v49;
  bool v50;
  int v51;
  int v52;
  int v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef int _g4_t_v63;
  typedef float _g4_t_v64;
  typedef int _g4_t_v65;
  typedef float _g4_t_v66;
  typedef int _g4_t_v67;
  typedef float _g4_t_v68;
  typedef int32_t _g4_t_v69;
  typedef int32_t _g4_t_v70;
  typedef float _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef float _g4_t_v74;
  typedef int32_t _g4_t_v75;
  typedef int32_t _g4_t_v76;
  typedef float _g4_t_v77;
  typedef __m128 _g4_t_v78;
  typedef float _g4_t_v79[3];
  typedef float _g4_t_v80;
  typedef int32_t _g4_t_v81;
  typedef int32_t _g4_t_v82;
  typedef int32_t _g4_t_v83;
  typedef int32_t _g4_t_v84;
  typedef uint32_t _g4_t_v85[3];
  typedef int32_t _g4_t_v86;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (12u + sizeof(_g4_t_v54)) > _g4_s0 ? (12u + sizeof(_g4_t_v54)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v55)) > _g4_s1 ? (16u + sizeof(_g4_t_v55)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v56)) > _g4_s2 ? (20u + sizeof(_g4_t_v56)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v57)) > _g4_s3 ? (24u + sizeof(_g4_t_v57)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v58)) > _g4_s4 ? (28u + sizeof(_g4_t_v58)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v59)) > _g4_s5 ? (32u + sizeof(_g4_t_v59)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v60)) > _g4_s6 ? (36u + sizeof(_g4_t_v60)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v61)) > _g4_s7 ? (40u + sizeof(_g4_t_v61)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v62)) > _g4_s8 ? (44u + sizeof(_g4_t_v62)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v63)) > _g4_s9 ? (44u + sizeof(_g4_t_v63)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v64)) > _g4_s10 ? (48u + sizeof(_g4_t_v64)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v65)) > _g4_s11 ? (48u + sizeof(_g4_t_v65)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v66)) > _g4_s12 ? (52u + sizeof(_g4_t_v66)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v67)) > _g4_s13 ? (52u + sizeof(_g4_t_v67)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v68)) > _g4_s14 ? (56u + sizeof(_g4_t_v68)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v69)) > _g4_s15 ? (56u + sizeof(_g4_t_v69)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v70)) > _g4_s16 ? (56u + sizeof(_g4_t_v70)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v71)) > _g4_s17 ? (56u + sizeof(_g4_t_v71)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v72)) > _g4_s18 ? (56u + sizeof(_g4_t_v72)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v73)) > _g4_s19 ? (60u + sizeof(_g4_t_v73)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v74)) > _g4_s20 ? (60u + sizeof(_g4_t_v74)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v75)) > _g4_s21 ? (60u + sizeof(_g4_t_v75)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v76)) > _g4_s22 ? (60u + sizeof(_g4_t_v76)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v77)) > _g4_s23 ? (60u + sizeof(_g4_t_v77)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v78)) > _g4_s24 ? (64u + sizeof(_g4_t_v78)) : _g4_s24,
    _g4_s26 = (80u + sizeof(_g4_t_v79)) > _g4_s25 ? (80u + sizeof(_g4_t_v79)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v80)) > _g4_s26 ? (92u + sizeof(_g4_t_v80)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v81)) > _g4_s27 ? (96u + sizeof(_g4_t_v81)) : _g4_s27,
    _g4_s29 = (100u + sizeof(_g4_t_v82)) > _g4_s28 ? (100u + sizeof(_g4_t_v82)) : _g4_s28,
    _g4_s30 = (104u + sizeof(_g4_t_v83)) > _g4_s29 ? (104u + sizeof(_g4_t_v83)) : _g4_s29,
    _g4_s31 = (108u + sizeof(_g4_t_v84)) > _g4_s30 ? (108u + sizeof(_g4_t_v84)) : _g4_s30,
    _g4_s32 = (144u + sizeof(_g4_t_v85)) > _g4_s31 ? (144u + sizeof(_g4_t_v85)) : _g4_s31,
    _g4_s33 = (156u + sizeof(_g4_t_v86)) > _g4_s32 ? (156u + sizeof(_g4_t_v86)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 12u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 16u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 20u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 24u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 28u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 32u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 36u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 40u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 44u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 48u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 52u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 52u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 56u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 56u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 56u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 56u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 56u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 60u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 60u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 60u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 60u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 64u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 80u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 92u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 96u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 100u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 104u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 108u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 144u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 156u);

  v4 =g4_m128_lane<int32_t>(*(self), 1);
  if ( v4 <= 2 )
  {
    v9 =g4_m128_lane<int32_t>(*(self), 0);
    if (g4_m128_lane<int32_t>(*(self), 0) > 2 )
    {
      if ( v9 == 3 )
      {
        if ( v4 == 2 )
        {
          v73 = 4;
          *((uint32_t *)self + 20) = *((uint32_t *)self + 8);
          *((uint32_t *)self + 21) = *((uint32_t *)self + 9);
          *((uint32_t *)self + 22) = *((uint32_t *)self + 10);
          *((uint32_t *)self + 23) = *((uint32_t *)self + 11);
          *((uint32_t *)self + 68) = *((uint32_t *)self + 60);
          *((uint32_t *)self + 69) = *((uint32_t *)self + 61);
          *((uint32_t *)self + 70) = *((uint32_t *)self + 62);
          *((uint32_t *)self + 71) = *((uint32_t *)self + 63);
          *((uint32_t *)self + 52) = *((uint32_t *)self + 44);
          *((uint32_t *)self + 53) = *((uint32_t *)self + 45);
          *((uint32_t *)self + 54) = *((uint32_t *)self + 46);
          *((uint32_t *)self + 55) = *((uint32_t *)self + 47);
        }
        else
        {
          v73 = 3;
        }
        v46 = *((uint32_t *)self + 56);
        v72 = *((uint32_t *)self + 58);
        v67 = *((uint32_t *)self + 59);
        v65 = *((uint32_t *)self + 40);
        v63 = *((uint32_t *)self + 41);
        v47 = *((uint32_t *)self + 57);
        v48 = *((uint32_t *)self + 42);
        v49 = *((uint32_t *)self + 43);
      }
      else
      {
        v46 = *((uint32_t *)self + 56);
        v72 = *((uint32_t *)self + 58);
        *((uint32_t *)self + 70) = v72;
        v47 = *((uint32_t *)self + 57);
        v67 = *((uint32_t *)self + 59);
        *((uint32_t *)self + 71) = v67;
        v48 = *((uint32_t *)self + 42);
        v65 = *((uint32_t *)self + 40);
        *((uint32_t *)self + 52) = v65;
        v53 = *((uint32_t *)self + 41);
        *((uint32_t *)self + 68) = v46;
        v63 = v53;
        *((uint32_t *)self + 53) = v53;
        v49 = *((uint32_t *)self + 43);
        *((uint32_t *)self + 69) = v47;
        *((uint32_t *)self + 54) = v48;
        *((uint32_t *)self + 55) = v49;
        v73 = 4;
      }
      *((uint32_t *)self + 61) = v47;
      *((uint32_t *)self + 62) = v72;
      *((uint32_t *)self + 65) = v47;
      *((uint32_t *)self + 63) = v67;
      *((uint32_t *)self + 66) = v72;
      *((uint32_t *)self + 44) = v65;
      *((uint32_t *)self + 67) = v67;
      *((uint32_t *)self + 45) = v63;
      *((uint32_t *)self + 48) = v65;
      *((uint32_t *)self + 60) = v46;
      *((uint32_t *)self + 46) = v48;
      *((uint32_t *)self + 47) = v49;
      *((uint32_t *)self + 64) = v46;
      *((uint32_t *)self + 49) = v63;
      *((uint32_t *)self + 50) = v48;
      *((uint32_t *)self + 51) = v49;
    }
    else
    {
      v10 = 4 * (v9 + 2);
      v74 = *((float *)self + 10);
      v79[2] = v74;
      v80 = *((float *)self + 11);
      v68 = v80;
      v11 = *((float *)self + 8);
      v12 = *((float *)self + 9);
g4_m128_lane<float>(*(self), v10 + 2) = v74;
g4_m128_lane<float>(*(self), v10) = v11;
g4_m128_lane<float>(*(self), v10 + 3) = v68;
g4_m128_lane<float>(*(self), v10 + 1) = v12;
      v13 =g4_m128_lane<int32_t>(*(self), 0);
      v79[0] = v11;
      v79[1] = v12;
      v14 = 4 * (v13 + 3);
g4_m128_lane<float>(*(self), v14) = v11;
g4_m128_lane<float>(*(self), v14 + 2) = v74;
g4_m128_lane<float>(*(self), v14 + 3) = v68;
g4_m128_lane<float>(*(self), v14 + 1) = v12;
      v15 = *((uint32_t *)self + 56);
      v81 = v15;
      v16 = *((uint32_t *)self + 57);
      v83 = *((uint32_t *)self + 58);
      v75 = v83;
      v17 = *((uint32_t *)self + 59);
      v82 = v16;
      v69 = v17;
      v84 = v17;
      v18 = 4 * (g4_m128_lane<int32_t>(*(self), 1) + 14);
g4_m128_lane<int32_t>(*(self), v18) = v15;
g4_m128_lane<int32_t>(*(self), v18 + 2) = v75;
g4_m128_lane<int32_t>(*(self), v18 + 1) = v16;
g4_m128_lane<int32_t>(*(self), v18 + 3) = v69;
      v19 = 4 * (g4_m128_lane<int32_t>(*(self), 1) + 15);
g4_m128_lane<int32_t>(*(self), v19) = v15;
g4_m128_lane<int32_t>(*(self), v19 + 2) = v75;
g4_m128_lane<int32_t>(*(self), v19 + 1) = v16;
g4_m128_lane<int32_t>(*(self), v19 + 3) = v69;
      v85[0] = *((uint32_t *)self + 40);
      v20 = v85[0];
      v21 = *((uint32_t *)self + 41);
      v76 = *((uint32_t *)self + 42);
      v85[2] = v76;
      v86 = *((uint32_t *)self + 43);
      v70 = v86;
      v22 =g4_m128_lane<int32_t>(*(self), 1);
      v85[1] = v21;
      v23 = 4 * (v22 + 10);
g4_m128_lane<int32_t>(*(self), v23 + 2) = v76;
g4_m128_lane<int32_t>(*(self), v23) = v20;
g4_m128_lane<int32_t>(*(self), v23 + 1) = v21;
g4_m128_lane<int32_t>(*(self), v23 + 3) = v70;
      v24 = 4 * (g4_m128_lane<int32_t>(*(self), 1) + 11);
g4_m128_lane<int32_t>(*(self), v24) = v20;
g4_m128_lane<int32_t>(*(self), v24 + 1) = v21;
g4_m128_lane<int32_t>(*(self), v24 + 2) = v76;
g4_m128_lane<int32_t>(*(self), v24 + 3) = v70;
      v73 = 1;
    }
  }
  else
  {
    if ( v4 == 3 )
    {
      if (g4_m128_lane<int32_t>(*(self), 0) <= 1 )
      {
        v73 = 3;
      }
      else
      {
        v73 = 4;
        *((uint32_t *)self + 20) = *((uint32_t *)self + 12);
        *((uint32_t *)self + 21) = *((uint32_t *)self + 13);
        *((uint32_t *)self + 22) = *((uint32_t *)self + 14);
        *((uint32_t *)self + 23) = *((uint32_t *)self + 15);
        *((uint32_t *)self + 68) = *((uint32_t *)self + 56);
        *((uint32_t *)self + 69) = *((uint32_t *)self + 57);
        *((uint32_t *)self + 70) = *((uint32_t *)self + 58);
        *((uint32_t *)self + 71) = *((uint32_t *)self + 59);
        *((uint32_t *)self + 52) = *((uint32_t *)self + 40);
        *((uint32_t *)self + 53) = *((uint32_t *)self + 41);
        *((uint32_t *)self + 54) = *((uint32_t *)self + 42);
        *((uint32_t *)self + 55) = *((uint32_t *)self + 43);
      }
      v5 = *((uint32_t *)self + 8);
      v6 = *((uint32_t *)self + 9);
      v7 = *((uint32_t *)self + 10);
      v8 = *((uint32_t *)self + 11);
    }
    else
    {
      v5 = *((uint32_t *)self + 8);
      v6 = *((uint32_t *)self + 9);
      v7 = *((uint32_t *)self + 10);
      v8 = *((uint32_t *)self + 11);
      *((uint32_t *)self + 20) = v5;
      *((uint32_t *)self + 21) = v6;
      *((uint32_t *)self + 22) = v7;
      *((uint32_t *)self + 23) = v8;
      v73 = 4;
    }
    *((uint32_t *)self + 12) = v5;
    *((uint32_t *)self + 13) = v6;
    *((uint32_t *)self + 14) = v7;
    *((uint32_t *)self + 15) = v8;
    *((uint32_t *)self + 16) = v5;
    *((uint32_t *)self + 17) = v6;
    *((uint32_t *)self + 18) = v7;
    *((uint32_t *)self + 19) = v8;
  }
  v25 = 0;
  for ( i = 0; i != v73; ++i )
  {
    *(__m128 *)&v85[v25] = _mm_sub_ps(
                             *(__m128 *)((char *)self + v25 * 4 + 32),
                             *(__m128 *)((char *)self + v25 * 4 + 160));
    v25 += 4;
  }
  if ( hkCalculatePenetrationDepth(a2, a3, a4, 953267991, self + 2, self + 14, v85, v73, &v81) == 1 )
  {
g4_m128_lane<int32_t>(*(self), 0) = 1;
g4_m128_lane<int32_t>(*(self), 1) = 1;
    goto LABEL_20;
  }
  v27 = *((uint16_t *)self + 30);
  v28 = *((uint16_t *)self + 38);
g4_m128_lane<int32_t>(*(self), 0) = 3;
g4_m128_lane<int32_t>(*(self), 1) = 3;
  if ( v27 == v28 || v28 == *((uint16_t *)self + 22) )
  {
    v50 = v27 == *((uint16_t *)self + 22);
g4_m128_lane<int32_t>(*(self), 0) = 2;
    v29 = 1;
    v30 = 1;
    if ( !v50 )
      goto LABEL_13;
LABEL_32:
g4_m128_lane<int32_t>(*(self), 0) = v30;
    v52 = 4 * (v29 + 2);
    *((uint32_t *)self + 8) =g4_m128_lane<int32_t>(*(self), v52);
    *((uint32_t *)self + 9) =g4_m128_lane<int32_t>(*(self), v52 + 1);
    *((uint32_t *)self + 10) =g4_m128_lane<int32_t>(*(self), v52 + 2);
    *((uint32_t *)self + 11) =g4_m128_lane<int32_t>(*(self), v52 + 3);
    goto LABEL_13;
  }
  v29 = 2;
  v30 = 2;
  if ( v27 == *((uint16_t *)self + 22) )
    goto LABEL_32;
LABEL_13:
  v31 = *((uint16_t *)self + 126);
  v32 = *((uint16_t *)self + 134);
  if ( v31 == v32 || v32 == *((uint16_t *)self + 118) )
  {
    v33 = 0;
    v50 = v31 == *((uint16_t *)self + 118);
g4_m128_lane<int32_t>(*(self), 1) = 2;
    v34 = 1;
    v35 = 1;
    if ( !v50 )
      goto LABEL_16;
LABEL_30:
g4_m128_lane<int32_t>(*(self), 1) = v35;
    v51 = 4 * (v34 + 14);
    *((uint32_t *)self + 56) =g4_m128_lane<int32_t>(*(self), v51);
    *((uint32_t *)self + 57) =g4_m128_lane<int32_t>(*(self), v51 + 1);
    *((uint32_t *)self + 58) =g4_m128_lane<int32_t>(*(self), v51 + 2);
    *((uint32_t *)self + 59) =g4_m128_lane<int32_t>(*(self), v51 + 3);
    v35 = v33;
    goto LABEL_16;
  }
  v33 = 1;
  v34 = 2;
  v35 = 2;
  if ( v31 == *((uint16_t *)self + 118) )
    goto LABEL_30;
LABEL_16:
  v62 = *(float *)a4;
  v77 = *((float *)a4 + 1);
  v56 = *((float *)a4 + 2);
  v58 = *((float *)a4 + 3);
  v57 = *((float *)a4 + 4);
  v59 = *((float *)a4 + 5);
  v60 = *((float *)a4 + 6);
  v55 = *((float *)a4 + 7);
  v54 = *((float *)a4 + 8);
  v61 = *((float *)a4 + 9);
  v71 = *((float *)a4 + 10);
  v66 = *((float *)a4 + 11);
  v64 = *((float *)a4 + 12);
  v36 = *((float *)a4 + 13);
  v37 = *((float *)a4 + 14);
  v38 = *((float *)a4 + 15);
  v39 = (float *)(self + v35 + 10);
  v40 = (float *)self + 4 * v35 + 57;
  do
  {
    v41 = *(v40 - 1);
    v39 -= 4;
    v42 = *v40;
    v40 -= 4;
    v43 = v40[5];
    v39[4] = (float)((float)((float)(v62 * v41) + (float)(v57 * v42)) + (float)(v54 * v43)) + v64;
    v39[5] = (float)((float)((float)(v77 * v41) + (float)(v59 * v42)) + (float)(v61 * v43)) + v36;
    v39[6] = (float)((float)((float)(v56 * v41) + (float)(v60 * v42)) + (float)(v71 * v43)) + v37;
    v39[7] = (float)((float)((float)(v41 * v58) + (float)(v42 * v55)) + (float)(v43 * v66)) + v38;
    --v35;
  }
  while ( v35 >= 0 );
  if (g4_m128_lane<int32_t>(*(self), 0) +g4_m128_lane<int32_t>(*(self), 1) > 4 )
  {
    hkpGsk::reduceDimensionExtended((hkpGsk::Self *)self);
    if (g4_m128_lane<int32_t>(*(self), 0) != 2 )
      goto LABEL_20;
  }
  else if (g4_m128_lane<int32_t>(*(self), 0) != 2 )
  {
    goto LABEL_20;
  }
  if (g4_m128_lane<int32_t>(*(self), 1) == 2 )
  {
    v78 = _mm_sub_ps(*(self + 3), *(self + 2));
    v79[0] = *((float *)self + 44) - *((float *)self + 40);
    v79[1] = *((float *)self + 45) - *((float *)self + 41);
    v79[2] = *((float *)self + 46) - *((float *)self + 42);
    v80 = *((float *)self + 47) - *((float *)self + 43);
    hkLineSegmentUtil::closestLineSegLineSeg(self + 2, &v78, self + 10, v79, self + 19);
  }
LABEL_20:
  v44 = v81;
  *((uint32_t *)self + 5) = 1;
  *((uint32_t *)self + 72) = v44;
  *((uint32_t *)self + 73) = v82;
  *((uint32_t *)self + 74) = v83;
  result = v84;
  *((uint32_t *)self + 75) = v84;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpGsk::getClosestFeature  (binary VA: 0x1791260)
// Original: hkpGsk::getClosestFeature
// ----------------------------------------------------------------------------
int hkpGsk::getClosestFeature(__m128 *self, const hkpConvexShape::Self *a2, const hkpConvexShape::Self *a3, const hkTransformf::Self *a4, hkVector4f::Self *a5)
{
  float v5; // xmm5_4
  float v6; // xmm6_4
  float v7; // xmm4_4
  int v8;
  float *v9;
  float *v10;
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  int32_t v14;
  int v15;
  float v16; // xmm4_4
  int v17;
  __m128i v18;
  int32_t v19;
  float v20; // xmm2_4
  int32_t v21;
  float v22; // xmm5_4
  float v23; // xmm0_4
  float v24; // xmm4_4
  float v25; // xmm1_4
  float v26; // xmm5_4
  float v27; // xmm0_4
  int32_t v28;
  float *v29;
  float v30; // xmm6_4
  float v31; // xmm5_4
  float v32; // xmm7_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  float v35; // xmm4_4
  float v36; // xmm1_4
  float v37; // xmm3_4
  float v38; // xmm2_4
  float v39; // xmm4_4
  int v40;
  int32_t v41;
  float *v42;
  float v43; // xmm6_4
  float v44; // xmm2_4
  float v45; // xmm7_4
  float v46; // xmm0_4
  float v47; // xmm0_4
  int32_t v48;
  float v49; // xmm0_4
  int32_t v50;
  float *v51;
  float v52; // xmm6_4
  float v53; // xmm5_4
  float v54; // xmm4_4
  float v55; // xmm0_4
  float v56; // xmm0_4
  float v57; // xmm0_4
  float *v58;
  float v59; // xmm3_4
  float v60; // xmm1_4
  float v61; // xmm0_4
  int result;
  __m128i v63;
  float v64; // xmm5_4
  float v65; // xmm6_4
  float v66; // xmm5_4
  float v67;
  __m128i v68;
  float v69; // xmm4_4
  float v70; // xmm6_4
  int v71;
  int v72;
  float v73; // xmm4_4
  float v74; // xmm3_4
  float v75; // xmm2_4
  float v76; // xmm0_4
  float v77; // xmm4_4
  float v78; // xmm6_4
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
  typedef char _g4_t_v90;
  typedef float _g4_t_v91;
  typedef int _g4_t_v92;
  typedef float _g4_t_v93;
  typedef int32_t _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97;
  typedef float _g4_t_v98;
  typedef float _g4_t_v99;
  typedef float _g4_t_v100;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v79)) > _g4_s0 ? (12u + sizeof(_g4_t_v79)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v80)) > _g4_s1 ? (16u + sizeof(_g4_t_v80)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v81)) > _g4_s2 ? (20u + sizeof(_g4_t_v81)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v82)) > _g4_s3 ? (24u + sizeof(_g4_t_v82)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v83)) > _g4_s4 ? (28u + sizeof(_g4_t_v83)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v84)) > _g4_s5 ? (32u + sizeof(_g4_t_v84)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v85)) > _g4_s6 ? (36u + sizeof(_g4_t_v85)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v86)) > _g4_s7 ? (40u + sizeof(_g4_t_v86)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v87)) > _g4_s8 ? (44u + sizeof(_g4_t_v87)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v88)) > _g4_s9 ? (44u + sizeof(_g4_t_v88)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v89)) > _g4_s10 ? (48u + sizeof(_g4_t_v89)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v90)) > _g4_s11 ? (48u + sizeof(_g4_t_v90)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v91)) > _g4_s12 ? (52u + sizeof(_g4_t_v91)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v92)) > _g4_s13 ? (52u + sizeof(_g4_t_v92)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v93)) > _g4_s14 ? (56u + sizeof(_g4_t_v93)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v94)) > _g4_s15 ? (56u + sizeof(_g4_t_v94)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v95)) > _g4_s16 ? (56u + sizeof(_g4_t_v95)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v96)) > _g4_s17 ? (60u + sizeof(_g4_t_v96)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v97)) > _g4_s18 ? (60u + sizeof(_g4_t_v97)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v98)) > _g4_s19 ? (60u + sizeof(_g4_t_v98)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v99)) > _g4_s20 ? (64u + sizeof(_g4_t_v99)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v100)) > _g4_s21 ? (68u + sizeof(_g4_t_v100)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v101)) > _g4_s22 ? (72u + sizeof(_g4_t_v101)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v102)) > _g4_s23 ? (76u + sizeof(_g4_t_v102)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 12u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 16u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 20u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 24u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 28u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 32u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 36u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 40u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 44u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 44u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 48u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 48u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 52u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 52u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 56u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 56u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 56u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 60u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 60u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 60u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 64u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 68u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 72u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 76u);

  v83 = *(float *)a4;
  v93 = *((float *)a4 + 1);
  v96 = *((float *)a4 + 2);
  v82 = *((float *)a4 + 3);
  v79 = *((float *)a4 + 4);
  v80 = *((float *)a4 + 5);
  v89 = *((float *)a4 + 6);
  v91 = *((float *)a4 + 7);
  v81 = *((float *)a4 + 8);
  v87 = *((float *)a4 + 9);
  v86 = *((float *)a4 + 10);
  v85 = *((float *)a4 + 11);
  v84 = *((float *)a4 + 12);
  v5 = *((float *)a4 + 14);
  v6 = *((float *)a4 + 13);
  v7 = *((float *)a4 + 15);
  v8 =g4_m128_lane<int32_t>(*(self), 1) - 1;
  v9 = (float *)self + 4 * v8 + 57;
  v10 = (float *)(self + v8 + 10);
  do
  {
    v11 = *(v9 - 1);
    v10 -= 4;
    v12 = *v9;
    v9 -= 4;
    v13 = v9[5];
    v10[4] = (float)((float)((float)(v83 * v11) + (float)(v79 * v12)) + (float)(v81 * v13)) + v84;
    v10[5] = (float)((float)((float)(v93 * v11) + (float)(v80 * v12)) + (float)(v87 * v13)) + v6;
    v10[6] = (float)((float)((float)(v96 * v11) + (float)(v89 * v12)) + (float)(v86 * v13)) + v5;
    v10[7] = (float)((float)((float)(v11 * v82) + (float)(v12 * v91)) + (float)(v13 * v85)) + v7;
    --v8;
  }
  while ( v8 >= 0 );
  v14 =g4_m128_lane<int32_t>(*(self), 0);
  v15 =g4_m128_lane<int32_t>(*(self), 1);
  v90 = 0;
  v16 = 1.192093e-10f;
  while ( 1 )
  {
    v94 = v14 + v15;
    v97 = v16 + v16;
    v17 = hkpGsk::reduceDimension(self);
g4_m128_raw(v18) = *((unsigned int *)self + 72);
    v19 =g4_m128_lane<int32_t>(*(self), 0);
    v20 = *((float *)self + 73);
    v21 =g4_m128_lane<int32_t>(*(self), 1);
    v92 = v21 +g4_m128_lane<int32_t>(*(self), 0);
    v22 = *((float *)self + 9) - *((float *)self + 41);
    *((uint32_t *)self + 5) |= v92 - v94;
    v23 = *((float *)self + 74);
    v24 = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v18) * *(float *)g4_m128_ptr<int32_t>(v18)) + (float)(v20 * v20)) + (float)(v23 * v23);
    v25 = (float)((float)((float)(*((float *)self + 8) - *((float *)self + 40)) * *(float *)g4_m128_ptr<int32_t>(v18))
                + (float)(v22 * v20))
        + (float)((float)(*((float *)self + 10) - *((float *)self + 42)) * v23);
    v26 = fabs(v25);
    if ( v17 != 0 )
      break;
    v95 = v97 * v24;
    if ( (float)(v97 * v24) >= (float)(v25 * v26) || v97 > v24 )
      break;
    if ( (++v90 & 1) == 0 || v19 ==g4_m128_lane<int32_t>(*(self), 2) || *((uint32_t *)self + 93) == 1 )
      goto LABEL_15;
    v101 = -v23;
    v27 = -*((float *)self + 75);
    v99 = -*(float *)g4_m128_ptr<int32_t>(v18);
    v100 = -v20;
    v102 = v27;
    G4_VCALL<void>(a2, 40, &v99, (char *)self + 16 * v19 + 32);
    v28 =g4_m128_lane<int32_t>(*(self), 0);
    v29 = (float *)(self +g4_m128_lane<int32_t>(*(self), 0) + 2);
    v30 = *v29;
    v31 = v29[1];
    v32 = v29[2];
    v33 = (float)((float)((float)(*v29 - *((float *)self + 8)) * v99)
                + (float)((float)(v31 - *((float *)self + 9)) * v100))
        + (float)((float)(v32 - *((float *)self + 10)) * v101);
    if ( (float)(fabs(v33) * v33) <= v95 )
    {
LABEL_14:
g4_m128_raw(v18) = *((unsigned int *)self + 72);
      v21 =g4_m128_lane<int32_t>(*(self), 1);
      v20 = *((float *)self + 73);
      v23 = *((float *)self + 74);
LABEL_15:
      if (g4_m128_lane<int32_t>(*(self), 3) == v21 || *((uint32_t *)self + 93) == -1 )
      {
LABEL_22:
        if ( (v90 & 1) != 0
          || (v48 =g4_m128_lane<int32_t>(*(self), 0),g4_m128_lane<int32_t>(*(self), 0) ==g4_m128_lane<int32_t>(*(self), 2))
          || *((uint32_t *)self + 93) == 1 )
        {
g4_m128_raw(v63) = *((unsigned int *)self + 8);
          v64 = *((float *)self + 9);
          v65 = *((float *)self + 10);
LABEL_39:
          *(float *)g4_m128_ptr<int32_t>(v63) = *(float *)g4_m128_ptr<int32_t>(v63) - *((float *)self + 40);
          v66 = v64 - *((float *)self + 41);
          v67 = COERCE_FLOAT(_mm_cvtsi128_si32(v63));
          v68 = v18;
          v98 = v65 - *((float *)self + 42);
          *(float *)g4_m128_ptr<int32_t>(v68) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v18) * *(float *)g4_m128_ptr<int32_t>(v18))
                                          + (float)(v20 * v20))
                                  + (float)(v23 * v23);
          v69 = 0.0;
          if ( *(float *)g4_m128_ptr<int32_t>(v68) > 0.0 )
          {
            v70 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v68);
            v71 = _mm_cvtsi128_si32(v68) >> 1;
            v72 = (_mm_cvtsi128_si32(v68) + 2139095040) >> 31;
            v73 = (float)(1.5 * COERCE_FLOAT(v72 & (1597463174 - v71)))
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v68)) * COERCE_FLOAT(v72 & (1597463174 - v71)))
                        * (float)(COERCE_FLOAT(v72 & (1597463174 - v71)) * COERCE_FLOAT(v72 & (1597463174 - v71))));
            v69 = (float)(1.5 * (float)((float)(1.5 * v73) - (float)((float)(v70 * v73) * (float)(v73 * v73))))
                - (float)((float)(v70 * (float)((float)(1.5 * v73) - (float)((float)(v70 * v73) * (float)(v73 * v73))))
                        * (float)((float)((float)(1.5 * v73) - (float)((float)(v70 * v73) * (float)(v73 * v73)))
                                * (float)((float)(1.5 * v73) - (float)((float)(v70 * v73) * (float)(v73 * v73)))));
          }
          v74 = *(float *)g4_m128_ptr<int32_t>(v18) * v69;
          v75 = v20 * v69;
          v76 = v23 * v69;
          v77 = v69 * *((float *)self + 75);
          *((float *)self + 73) = v75;
          *((float *)self + 74) = v76;
          *((float *)self + 72) = v74;
          *((float *)self + 75) = v77;
          *(float *)a5 = v74;
          *((uint32_t *)a5 + 1) = *((uint32_t *)self + 73);
          *((uint32_t *)a5 + 2) = *((uint32_t *)self + 74);
          *((float *)a5 + 3) = (float)((float)(v67 * v74) + (float)(v75 * v66)) + (float)(v76 * v98);
          *((uint32_t *)self + 72) = *(uint32_t *)a5;
          *((uint32_t *)self + 73) = *((uint32_t *)a5 + 1);
          *((uint32_t *)self + 74) = *((uint32_t *)a5 + 2);
          *((uint32_t *)self + 75) = *((uint32_t *)a5 + 3);
          return 0;
        }
        v101 = -v23;
        v49 = -*((float *)self + 75);
        v99 = -*(float *)g4_m128_ptr<int32_t>(v18);
        v100 = -v20;
        v102 = v49;
        G4_VCALL<void>(a2, 40, &v99, (char *)self + 16 * v48 + 32);
        v50 =g4_m128_lane<int32_t>(*(self), 0);
        v88 = *((float *)self + 8);
        v51 = (float *)(self +g4_m128_lane<int32_t>(*(self), 0) + 2);
        v52 = *v51;
        v53 = v51[1];
        v54 = v51[2];
        v55 = (float)((float)((float)(*v51 - v88) * v99) + (float)((float)(v53 - *((float *)self + 9)) * v100))
            + (float)((float)(v54 - *((float *)self + 10)) * v101);
        if ( (float)(fabs(v55) * v55) <= v95 )
          goto LABEL_44;
        if ( v50 != 2 )
        {
          if ( v50 != 3 )
            goto LABEL_30;
          v56 = (float)((float)((float)(v52 - *((float *)self + 16)) * v99)
                      + (float)((float)(v53 - *((float *)self + 17)) * v100))
              + (float)((float)(v54 - *((float *)self + 18)) * v101);
          if ( v95 > (float)(fabs(v56) * v56) )
            goto LABEL_44;
        }
        if ( v95 > (float)(fabs(
                             (float)((float)((float)(v52 - *((float *)self + 12)) * v99)
                                   + (float)((float)(v53 - *((float *)self + 13)) * v100))
                           + (float)((float)(v54 - *((float *)self + 14)) * v101))
                         * (float)((float)((float)((float)(v52 - *((float *)self + 12)) * v99)
                                         + (float)((float)(v53 - *((float *)self + 13)) * v100))
                                 + (float)((float)(v54 - *((float *)self + 14)) * v101))) )
        {
LABEL_44:
g4_m128_raw(v18) = *((unsigned int *)self + 72);
          v20 = *((float *)self + 73);
          v23 = *((float *)self + 74);
          v65 = *((float *)self + 10);
          v64 = *((float *)self + 9);
g4_m128_raw(v63) = LODWORD(v88);
          goto LABEL_39;
        }
LABEL_30:
        v14 = v50 + 1;
        *((uint32_t *)self + 5) = 1;
g4_m128_lane<int32_t>(*(self), 0) = v14;
        v15 =g4_m128_lane<int32_t>(*(self), 1);
        v16 = v97;
      }
      else
      {
        v35 = (float)(*(float *)a4 * *(float *)g4_m128_ptr<int32_t>(v18)) + (float)(*((float *)a4 + 1) * v20);
        v36 = (float)(*((float *)a4 + 4) * *(float *)g4_m128_ptr<int32_t>(v18)) + (float)(*((float *)a4 + 5) * v20);
        v37 = (float)(*(float *)g4_m128_ptr<int32_t>(v18) * *((float *)a4 + 8)) + (float)(v20 * *((float *)a4 + 9));
        v38 = *((float *)a4 + 10) * v23;
        v39 = v35 + (float)(v23 * *((float *)a4 + 2));
        v40 = *(uint32_t *)a3;
        v100 = v36 + (float)(*((float *)a4 + 6) * v23);
        v101 = v37 + v38;
        v99 = v39;
        v102 = v37 + v38;
        (*(void (**)(const hkpConvexShape::Self *, float *, char *))(v40 + 40))(
          a3,
          &v99,
          (char *)self + 16 * v21 + 224);
        v41 =g4_m128_lane<int32_t>(*(self), 1);
        v42 = (float *)(self + v41 + 14);
        v43 = *v42;
        v44 = v42[1];
        v45 = v42[2];
        v46 = (float)((float)((float)(*v42 - *((float *)self + 56)) * v99)
                    + (float)((float)(v44 - *((float *)self + 57)) * v100))
            + (float)((float)(v45 - *((float *)self + 58)) * v101);
        if ( (float)(fabs(v46) * v46) <= v95 )
          goto LABEL_21;
        if ( v41 != 2 )
        {
          if ( v41 != 3 )
            goto LABEL_32;
          v47 = (float)((float)((float)(v43 - *((float *)self + 64)) * v99)
                      + (float)((float)(v44 - *((float *)self + 65)) * v100))
              + (float)((float)(v45 - *((float *)self + 66)) * v101);
          if ( v95 > (float)(fabs(v47) * v47) )
            goto LABEL_21;
        }
        v57 = (float)((float)((float)(v43 - *((float *)self + 60)) * v99)
                    + (float)((float)(v44 - *((float *)self + 61)) * v100))
            + (float)((float)(v45 - *((float *)self + 62)) * v101);
        if ( v95 > (float)(fabs(v57) * v57) )
        {
LABEL_21:
g4_m128_raw(v18) = *((unsigned int *)self + 72);
          v20 = *((float *)self + 73);
          v23 = *((float *)self + 74);
          goto LABEL_22;
        }
LABEL_32:
        v58 = (float *)(self + v41 + 10);
        v59 = (float)((float)(*((float *)a4 + 1) * v43) + (float)(*((float *)a4 + 5) * v44))
            + (float)(*((float *)a4 + 9) * v45);
        v60 = (float)((float)(*((float *)a4 + 2) * v43) + (float)(*((float *)a4 + 6) * v44))
            + (float)(*((float *)a4 + 10) * v45);
        v61 = (float)((float)(*((float *)a4 + 3) * v43) + (float)(*((float *)a4 + 7) * v44))
            + (float)(*((float *)a4 + 11) * v45);
        v16 = v97;
        *v58 = (float)((float)((float)(v43 * *(float *)a4) + (float)(v44 * *((float *)a4 + 4)))
                     + (float)(v45 * *((float *)a4 + 8)))
             + *((float *)a4 + 12);
        v58[1] = v59 + *((float *)a4 + 13);
        v58[2] = v60 + *((float *)a4 + 14);
        v58[3] = v61 + *((float *)a4 + 15);
        v15 =g4_m128_lane<int32_t>(*(self), 1) + 1;
        *((uint32_t *)self + 5) = 1;
g4_m128_lane<int32_t>(*(self), 1) = v15;
        v14 =g4_m128_lane<int32_t>(*(self), 0);
      }
    }
    else
    {
      if ( v28 != 2 )
      {
        if ( v28 != 3 )
          goto LABEL_43;
        v34 = (float)((float)((float)(v30 - *((float *)self + 16)) * v99)
                    + (float)((float)(v31 - *((float *)self + 17)) * v100))
            + (float)((float)(v32 - *((float *)self + 18)) * v101);
        if ( v95 > (float)(fabs(v34) * v34) )
          goto LABEL_14;
      }
      v78 = (float)((float)((float)(v30 - *((float *)self + 12)) * v99)
                  + (float)((float)(v31 - *((float *)self + 13)) * v100))
          + (float)((float)(v32 - *((float *)self + 14)) * v101);
      if ( v95 > (float)(fabs(v78) * v78) )
        goto LABEL_14;
LABEL_43:
      v14 = v28 + 1;
      *((uint32_t *)self + 5) = 1;
g4_m128_lane<int32_t>(*(self), 0) = v28 + 1;
      v15 =g4_m128_lane<int32_t>(*(self), 1);
      v16 = v97;
    }
  }
  if ( *((uint32_t *)self + 4) == 0 )
  {
    hkpGsk::handlePenetration(self, a2, a3, a4);
g4_m128_raw(v63) = *((unsigned int *)self + 8);
    v64 = *((float *)self + 9);
    v65 = *((float *)self + 10);
g4_m128_raw(v18) = *((unsigned int *)self + 72);
    v20 = *((float *)self + 73);
    v23 = *((float *)self + 74);
    goto LABEL_39;
  }
  result = 4;
  if ( v92 > 4 )
  {
    if ( v21 >= v19 )
    {
g4_m128_lane<int32_t>(*(self), 0) = 1;
g4_m128_lane<int32_t>(*(self), 1) = 3;
    }
    else
    {
g4_m128_lane<int32_t>(*(self), 0) = 3;
g4_m128_lane<int32_t>(*(self), 1) = 1;
    }
  }
  return result;
}



// ============================================================================
// Address:   0x1791de0 (size: 961 bytes)
// Symbol:    _ZN6hkpGsk15getClosestPointERKNS_21GetClosesetPointInputER11hkpGskCacheR10hkVector4fS6_
// Demangled: hkpGsk::getClosestPoint(hkpGsk::GetClosesetPointInput const&,hkpGskCache &,hkVector4f &,hkVector4f &)
// ============================================================================

