#include "Core/Utils/DecompTypes.h"
#include "havok_base_part09.h"

// ----------------------------------------------------------------------------
// Function: addTriangle  (binary VA: 0x1add6a0)
// Original: addTriangle
// ----------------------------------------------------------------------------
int * addTriangle(int a1, int a2, int a3, int a4, const hkVector4f::Self *a5, const hkVector4f::Self *a6, const hkVector4f::Self *a7, hkGeometry::Self *a8, hkArray<int, hkContainerHeapAllocator::Self> *a9)
{
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  int *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int *result;
  int v19;
  uint32_t *v20;
  int v21;
  uint32_t *v22;
  int v23;
  uint32_t *v24;
  int v25;
  int v26;
  int v27;
  int v28;

  v9 = a1;
  v10 = *(uint32_t *)a9;
  v11 = (uint32_t *)(*(uint32_t *)a9 + 4 * a1);
  if ( *v11 != -1 )
  {
    v12 = (uint32_t *)(v10 + 4 * a2);
    if ( *v12 != -1 )
      goto LABEL_3;
    goto LABEL_13;
  }
  *v11 = *((uint32_t *)a8 + 3);
  v21 = *((uint32_t *)a8 + 3);
  if ( v21 == (*((uint32_t *)a8 + 4) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkGeometry::Self *)((char *)a8 + 8), 16, a1);
    v21 = *((uint32_t *)a8 + 3);
    v9 = v28;
  }
  v22 = (uint32_t *)(*((uint32_t *)a8 + 2) + 16 * v21);
  *v22 = *(uint32_t *)a5;
  v22[1] = *((uint32_t *)a5 + 1);
  v22[2] = *((uint32_t *)a5 + 2);
  v22[3] = *((uint32_t *)a5 + 3);
  ++*((uint32_t *)a8 + 3);
  v10 = *(uint32_t *)a9;
  v12 = (uint32_t *)(*(uint32_t *)a9 + 4 * a2);
  if ( *v12 == -1 )
  {
LABEL_13:
    *v12 = *((uint32_t *)a8 + 3);
    v23 = *((uint32_t *)a8 + 3);
    if ( v23 == (*((uint32_t *)a8 + 4) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkGeometry::Self *)((char *)a8 + 8),
        16,
        v9);
      v23 = *((uint32_t *)a8 + 3);
      v9 = v27;
    }
    v24 = (uint32_t *)(*((uint32_t *)a8 + 2) + 16 * v23);
    *v24 = *(uint32_t *)a6;
    v24[1] = *((uint32_t *)a6 + 1);
    v24[2] = *((uint32_t *)a6 + 2);
    v24[3] = *((uint32_t *)a6 + 3);
    ++*((uint32_t *)a8 + 3);
    v10 = *(uint32_t *)a9;
  }
LABEL_3:
  v13 = (int *)(v10 + 4 * a3);
  v14 = *v13;
  if ( *v13 == -1 )
  {
    *v13 = *((uint32_t *)a8 + 3);
    v19 = *((uint32_t *)a8 + 3);
    if ( v19 == (*((uint32_t *)a8 + 4) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkGeometry::Self *)((char *)a8 + 8),
        16,
        v9);
      v19 = *((uint32_t *)a8 + 3);
      v9 = v26;
    }
    v20 = (uint32_t *)(*((uint32_t *)a8 + 2) + 16 * v19);
    *v20 = *(uint32_t *)a7;
    v20[1] = *((uint32_t *)a7 + 1);
    v20[2] = *((uint32_t *)a7 + 2);
    v20[3] = *((uint32_t *)a7 + 3);
    ++*((uint32_t *)a8 + 3);
    v10 = *(uint32_t *)a9;
    v14 = *(uint32_t *)(*(uint32_t *)a9 + 4 * a3);
  }
  v15 = *(uint32_t *)(v10 + 4 * v9);
  v16 = *(uint32_t *)(v10 + 4 * a2);
  v17 = *((uint32_t *)a8 + 6);
  if ( v17 == (*((uint32_t *)a8 + 7) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkGeometry::Self *)((char *)a8 + 20),
      16,
      v15);
    v17 = *((uint32_t *)a8 + 6);
    v15 = v25;
  }
  result = (int *)(*((uint32_t *)a8 + 5) + 16 * v17);
  *result = v15;
  result[1] = v16;
  result[2] = v14;
  result[3] = a4;
  ++*((uint32_t *)a8 + 6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVector4UtilImpl_float_id_0c2ad1::getFloatToInt16FloorCorrection  (binary VA: 0x1ae7520)
// Original: hkVector4UtilImpl<float>::getFloatToInt16FloorCorrection
// ----------------------------------------------------------------------------
hkVector4UtilImpl<float> * hkVector4UtilImpl_float_id_0c2ad1::getFloatToInt16FloorCorrection(hkVector4UtilImpl<float> *self)
{
  __m128i v1;
  int v2;
  __m128i v3;
  __m128i v4;
  __m128i v5;
  unsigned int v6;
  __m128i v7;
  unsigned int v8;

g4_m128_raw(v1) = 0x41300000u;
  v2 = 23;
g4_m128_raw(v3) = 0x41200000u;
  do
  {
    v4 = v3;
    *(float *)g4_m128_ptr<int32_t>(v4) = (float)(*(float *)g4_m128_ptr<int32_t>(v3) + *(float *)g4_m128_ptr<int32_t>(v1)) * 0.5;
    v5 = v4;
    *(float *)g4_m128_ptr<int32_t>(v5) = fmaxf(fminf((float)(*(float *)g4_m128_ptr<int32_t>(v4) + 0.0) * 1.0, 1.8446726e19f), 0.0) + 65536.0;
    v6 = _mm_cvtsi128_si32(v5);
    v7 = v3;
    v8 = v6 >> 7;
    if ( (uint16_t)v8 <= 0xAu )
      v7 = v4;
    v3 = v7;
    if ( (uint16_t)v8 <= 0xAu )
      v4 = v1;
    --v2;
    v1 = v4;
  }
  while ( v2 != 0 );
  *(float *)self = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v4) + *(float *)g4_m128_ptr<int32_t>(v7)) * 0.5) - 11.0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkTjunctionDetector::vertexCloseToTriangle  (binary VA: 0x1ae7b00)
// Original: hkTjunctionDetector::vertexCloseToTriangle
// ----------------------------------------------------------------------------
int32_t hkTjunctionDetector::vertexCloseToTriangle(hkTjunctionDetector::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5)
{
  float v5; // xmm1_4
  __m128i v6;
  __m128i v7;
  float v8; // xmm3_4
  float v9; // xmm4_4
  __m128i v10;
  int v11;
  float v12; // xmm2_4
  float v13; // xmm1_4
  __m128i v14;
  float v15; // xmm1_4
  int v16;
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm4_4
  __m128i v20;
  int v21;
  float v22; // xmm3_4
  float v23; // xmm2_4
  __m128i v24;
  int v25;
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v28; // xmm6_4
  __m128i v29;
  int v30;
  float v31; // xmm3_4
  float v32; // xmm2_4
  float v33; // xmm6_4
  __m128i v34;
  float v35; // xmm3_4
  int v36; // xmm1_4
  float v37; // xmm1_4
  float v38; // xmm5_4
  __m128i v39;
  float v40; // xmm2_4
  float v41; // xmm3_4
  __m128i v42;
  int v43;
  int v44;
  float v45; // xmm0_4
  float v46; // xmm4_4
  float v47; // xmm0_4
  float v48; // xmm3_4
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;

  v5 = *((float *)a3 + 1);
  v68 = *((float *)a2 + 1);
  v70 = *(float *)a2;
  v60 = *(float *)a3 - *(float *)a2;
  v59 = v5 - v68;
  v67 = *((float *)a2 + 2);
  v65 = *((float *)a3 + 2);
  v58 = v65 - v67;
  v64 = *((float *)a4 + 1);
  v63 = *((float *)a4 + 2);
  v62 = v64 - v5;
g4_m128_raw(v6) = *(unsigned int *)self;
  v57 = *(float *)a4 - *(float *)a3;
  v7 = v6;
  *(float *)g4_m128_ptr<int32_t>(v7) = *(float *)g4_m128_ptr<int32_t>(v6) - *(float *)a2;
  v61 = v63 - v65;
  v8 = *((float *)self + 2);
  v9 = *((float *)self + 1);
  v56 = v8 - v67;
  v55 = *(float *)g4_m128_ptr<int32_t>(v6) - *(float *)a3;
  v10 = v7;
  v53 = v8 - v65;
  v51 = v9 - v64;
  v50 = v9 - v68;
  v54 = v9 - v5;
  *(float *)g4_m128_ptr<int32_t>(v10) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v7) * *(float *)g4_m128_ptr<int32_t>(v7)) + (float)(v50 * v50))
                          + (float)(v56 * v56);
  v52 = v8 - v63;
  if ( *(float *)g4_m128_ptr<int32_t>(v10) <= 0.0 )
  {
    v66 = 0.0;
  }
  else
  {
    v11 = ((_mm_cvtsi128_si32(v10) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v10) >> 1));
    v12 = (float)(*(float *)&v11 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v10)) * *(float *)&v11)
                * (float)(*(float *)&v11 * *(float *)&v11));
    v13 = (float)(v12 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v10)) * v12) * (float)(v12 * v12));
    v66 = *(float *)g4_m128_ptr<int32_t>(v10)
        * (float)((float)(1.5 * v13)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v10)) * v13) * (float)(v13 * v13)));
  }
g4_m128_raw(v14) = LODWORD(v55);
  *(float *)g4_m128_ptr<int32_t>(v14) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)g4_m128_ptr<int32_t>(v14)) + (float)(v54 * v54))
                          + (float)(v53 * v53);
  v15 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v14) > 0.0 )
  {
    v16 = ((_mm_cvtsi128_si32(v14) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v14) >> 1));
    v17 = (float)(*(float *)&v16 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v14)) * *(float *)&v16)
                * (float)(*(float *)&v16 * *(float *)&v16));
    v18 = (float)(v17 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v14)) * v17) * (float)(v17 * v17));
    v15 = (float)((float)(1.5 * v18)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v14)) * v18) * (float)(v18 * v18)))
        * *(float *)g4_m128_ptr<int32_t>(v14);
  }
g4_m128_raw(v20) = COERCE_UNSIGNED_INT(*(float *)g4_m128_ptr<int32_t>(v6) - *(float *)a4);
  v19 = 0.0;
  *(float *)g4_m128_ptr<int32_t>(v20) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v20) * *(float *)g4_m128_ptr<int32_t>(v20)) + (float)(v51 * v51))
                          + (float)(v52 * v52);
  if ( *(float *)g4_m128_ptr<int32_t>(v20) > 0.0 )
  {
    v21 = ((_mm_cvtsi128_si32(v20) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v20) >> 1));
    v22 = (float)(*(float *)&v21 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v20)) * *(float *)&v21)
                * (float)(*(float *)&v21 * *(float *)&v21));
    v23 = (float)(v22 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v20)) * v22) * (float)(v22 * v22));
    v19 = (float)((float)(1.5 * v23)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v20)) * v23) * (float)(v23 * v23)))
        * *(float *)g4_m128_ptr<int32_t>(v20);
  }
g4_m128_raw(v24) = LODWORD(v60);
  *(float *)g4_m128_ptr<int32_t>(v24) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v24) * *(float *)g4_m128_ptr<int32_t>(v24)) + (float)(v59 * v59))
                          + (float)(v58 * v58);
  if ( *(float *)g4_m128_ptr<int32_t>(v24) <= 0.0 )
  {
    v28 = 0.0;
  }
  else
  {
    v25 = ((_mm_cvtsi128_si32(v24) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v24) >> 1));
    v26 = (float)(*(float *)&v25 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v24)) * *(float *)&v25)
                * (float)(*(float *)&v25 * *(float *)&v25));
    v27 = (float)(v26 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v24)) * v26) * (float)(v26 * v26));
    v28 = (float)((float)(1.5 * v27)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v24)) * v27) * (float)(v27 * v27)))
        * *(float *)g4_m128_ptr<int32_t>(v24);
  }
  if ( v28 <= v66
    || v28 <= v15
    || (*(float *)g4_m128_ptr<int32_t>(v29) = (float)(v66 + v15) - v28, *(float *)&a5 <= *(float *)g4_m128_ptr<int32_t>(v29)) )
  {
g4_m128_raw(v29) = LODWORD(v57);
    *(float *)g4_m128_ptr<int32_t>(v29) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v29) * *(float *)g4_m128_ptr<int32_t>(v29)) + (float)(v62 * v62))
                            + (float)(v61 * v61);
    if ( *(float *)g4_m128_ptr<int32_t>(v29) <= 0.0 )
    {
      v33 = 0.0;
      if ( v15 < 0.0 )
        goto LABEL_13;
    }
    else
    {
      v30 = ((_mm_cvtsi128_si32(v29) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v29) >> 1));
      v31 = (float)(*(float *)&v30 * 1.5)
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v29)) * *(float *)&v30)
                  * (float)(*(float *)&v30 * *(float *)&v30));
      v32 = (float)(v31 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v29)) * v31) * (float)(v31 * v31));
      v33 = (float)((float)(1.5 * v32)
                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v29)) * v32) * (float)(v32 * v32)))
          * *(float *)g4_m128_ptr<int32_t>(v29);
      if ( v33 > v15 )
      {
LABEL_13:
        if ( v33 > v19 && *(float *)&a5 > (float)((float)(v15 + v19) - v33) )
          return g4_m128_lane<int32_t>(v29, 0);
      }
    }
g4_m128_raw(v34) = LODWORD(v70);
    *(float *)g4_m128_ptr<int32_t>(v34) = v70 - *(float *)a4;
    v29 = v34;
    *(float *)g4_m128_ptr<int32_t>(v29) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v34) * *(float *)g4_m128_ptr<int32_t>(v34))
                                    + (float)((float)(v68 - v64) * (float)(v68 - v64)))
                            + (float)((float)(v67 - v63) * (float)(v67 - v63));
    if ( *(float *)g4_m128_ptr<int32_t>(v29) <= 0.0 )
    {
      v38 = 0.0;
    }
    else
    {
      v35 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v29);
      v36 = ((_mm_cvtsi128_si32(v29) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v29) >> 1));
      v37 = (float)(1.5
                  * (float)((float)(1.5 * *(float *)&v36)
                          - (float)((float)(v35 * *(float *)&v36) * (float)(*(float *)&v36 * *(float *)&v36))))
          - (float)((float)(v35
                          * (float)((float)(1.5 * *(float *)&v36)
                                  - (float)((float)(v35 * *(float *)&v36) * (float)(*(float *)&v36 * *(float *)&v36))))
                  * (float)((float)((float)(1.5 * *(float *)&v36)
                                  - (float)((float)(v35 * *(float *)&v36) * (float)(*(float *)&v36 * *(float *)&v36)))
                          * (float)((float)(1.5 * *(float *)&v36)
                                  - (float)((float)(v35 * *(float *)&v36) * (float)(*(float *)&v36 * *(float *)&v36)))));
      v38 = (float)((float)(1.5 * v37)
                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v29)) * v37) * (float)(v37 * v37)))
          * *(float *)g4_m128_ptr<int32_t>(v29);
    }
    if ( v38 <= v19 || v38 <= v66 || *(float *)&a5 <= (float)((float)(v19 + v66) - v38) )
    {
g4_m128_raw(v39) = LODWORD(v61);
      *(float *)g4_m128_ptr<int32_t>(v39) = (float)(v61 * v59) - (float)(v62 * v58);
      v40 = (float)(v58 * v57) - (float)(v61 * v60);
      v41 = (float)(v60 * v62) - (float)(v59 * v57);
      v42 = v39;
      *(float *)g4_m128_ptr<int32_t>(v42) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v39) * *(float *)g4_m128_ptr<int32_t>(v39)) + (float)(v40 * v40))
                              + (float)(v41 * v41);
      if ( *(float *)g4_m128_ptr<int32_t>(v42) <= 0.0 )
      {
        v47 = 0.0;
      }
      else
      {
        v43 = _mm_cvtsi128_si32(v42) >> 1;
        v44 = (_mm_cvtsi128_si32(v42) + 2139095040) >> 31;
        v69 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v42);
        v45 = (float)(1.5 * COERCE_FLOAT(v44 & (1597463174 - v43)))
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v42)) * COERCE_FLOAT(v44 & (1597463174 - v43)))
                    * (float)(COERCE_FLOAT(v44 & (1597463174 - v43)) * COERCE_FLOAT(v44 & (1597463174 - v43))));
        v46 = (float)(1.5 * v45) - (float)((float)(v69 * v45) * (float)(v45 * v45));
        v47 = (float)(1.5 * v46) - (float)((float)(v69 * v46) * (float)(v46 * v46));
      }
      v48 = v41 * v47;
g4_m128_lane<int32_t>(v29, 0) = fabs(
                           (float)((float)(*(float *)g4_m128_ptr<int32_t>(v7) * (float)(*(float *)g4_m128_ptr<int32_t>(v39) * v47))
                                 + (float)(v50 * (float)(v40 * v47)))
                         + (float)(v56 * v48));
      if ( *(float *)g4_m128_ptr<int32_t>(v29) <= *(float *)&a5 )
        *(float *)g4_m128_ptr<int32_t>(v29) = (float)((float)(v62 * v55) - (float)(v57 * v54)) * v48;
    }
  }
  return g4_m128_lane<int32_t>(v29, 0);
}

// ----------------------------------------------------------------------------
// Function: findTriangle  (binary VA: 0x1ae8480)
// Original: findTriangle
// ----------------------------------------------------------------------------
int findTriangle(hkpSimpleMeshShape::Self *a1, const hkArray<unsigned int, hkContainerHeapAllocator::Self> *a2, int a3, int a4, int a5)
{
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;

  if ( *((int *)a2 + 1) <= 0 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = (int *)(*((uint32_t *)a1 + 9) + 16 * *(uint32_t *)(*(uint32_t *)a2 + 4 * v5));
    v7 = *v6;
    if ( *v6 == a3 || v7 == a4 || v7 == a5 )
    {
      v8 = v6[1];
      if ( v8 == a3 || a4 == v8 || a5 == v8 )
      {
        v9 = v6[2];
        if ( v9 == a3 || a4 == v9 || a5 == v9 )
          break;
      }
    }
    if ( ++v5 == *((uint32_t *)a2 + 1) )
      return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkTjunctionDetector::detect  (binary VA: 0x1ae8520)
// Original: hkTjunctionDetector::detect
// ----------------------------------------------------------------------------
hkpSimpleMeshShape::Self * hkTjunctionDetector::detect(hkpSimpleMeshShape::Self *a1, int *a2, hkMemoryAllocator::Self *a3, hkMemoryAllocator::Self *a4, hkVector4f::Self *a5, int a6)
{
  hkpSimpleMeshShape::Self *result;
  float v7; // xmm6_4
  float v8; // xmm5_4
  float v9; // xmm0_4
  int v10;
  int v11;
  int *v12;
  int v13;
  char v14;
  int v15;
  char v16;
  int v17;
  char v18;
  int v19;
  int v20;
  int v21;
  int v22;
  void *v23;
  int v24;
  uint32_t *v25;
  char Triangle;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef char _g4_t_v31;
  typedef int _g4_t_v32;
  typedef float *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef float _g4_t_v46[4];
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef uint32_t _g4_t_v55[20];
  typedef int *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  enum : size_t {
    _g4_s0 = 816u,
    _g4_s1 = (12u + sizeof(_g4_t_v27)) > _g4_s0 ? (12u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v28)) > _g4_s1 ? (28u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v29)) > _g4_s2 ? (44u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v30)) > _g4_s3 ? (48u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (55u + sizeof(_g4_t_v31)) > _g4_s4 ? (55u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v32)) > _g4_s5 ? (56u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v33)) > _g4_s6 ? (60u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v34)) > _g4_s7 ? (64u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v35)) > _g4_s8 ? (64u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v36)) > _g4_s9 ? (68u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v37)) > _g4_s10 ? (68u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v38)) > _g4_s11 ? (68u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v39)) > _g4_s12 ? (68u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v40)) > _g4_s13 ? (72u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v41)) > _g4_s14 ? (76u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v42)) > _g4_s15 ? (76u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v43)) > _g4_s16 ? (76u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v44)) > _g4_s17 ? (76u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v45)) > _g4_s18 ? (76u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v46)) > _g4_s19 ? (80u + sizeof(_g4_t_v46)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v47)) > _g4_s20 ? (96u + sizeof(_g4_t_v47)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v48)) > _g4_s21 ? (100u + sizeof(_g4_t_v48)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v49)) > _g4_s22 ? (104u + sizeof(_g4_t_v49)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v50)) > _g4_s23 ? (108u + sizeof(_g4_t_v50)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v51)) > _g4_s24 ? (112u + sizeof(_g4_t_v51)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v52)) > _g4_s25 ? (116u + sizeof(_g4_t_v52)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v53)) > _g4_s26 ? (120u + sizeof(_g4_t_v53)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v54)) > _g4_s27 ? (124u + sizeof(_g4_t_v54)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v55)) > _g4_s28 ? (128u + sizeof(_g4_t_v55)) : _g4_s28,
    _g4_s30 = (208u + sizeof(_g4_t_v56)) > _g4_s29 ? (208u + sizeof(_g4_t_v56)) : _g4_s29,
    _g4_s31 = (212u + sizeof(_g4_t_v57)) > _g4_s30 ? (212u + sizeof(_g4_t_v57)) : _g4_s30,
    _g4_s32 = (216u + sizeof(_g4_t_v58)) > _g4_s31 ? (216u + sizeof(_g4_t_v58)) : _g4_s31,
    _g4_s33 = (220u + sizeof(_g4_t_v59)) > _g4_s32 ? (220u + sizeof(_g4_t_v59)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 55u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 64u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 68u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 68u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 68u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 72u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 76u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 76u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 76u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 76u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 76u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 80u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 96u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 100u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 104u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 108u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 112u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 116u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 120u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 124u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 128u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 208u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 212u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 216u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 220u);

  result = *((hkpSimpleMeshShape::Self **)a1 + 7);
  if ( (int)(uintptr_t)(result) <= 0 )
    return result;
  v40 = 0;
  do
  {
    v33 = (float *)(*((uint32_t *)a1 + 6) + 16 * v40);
    v47 = 3.40282e38f;
    v48 = 3.40282e38f;
    v49 = 3.40282e38f;
    v50 = 3.40282e38f;
    v51 = -3.40282e38f;
    v52 = -3.40282e38f;
    v53 = -3.40282e38f;
    v54 = -3.40282e38f;
    v47 = fminf(3.40282e38f, *v33);
    v48 = fminf(3.40282e38f, v33[1]);
    v49 = fminf(3.40282e38f, v33[2]);
    v50 = fminf(3.40282e38f, v33[3]);
    v51 = fmaxf(-3.40282e38f, *v33);
    v7 = fmaxf(-3.40282e38f, v33[1]);
    v57 = 0;
    v52 = v7;
    v8 = fmaxf(-3.40282e38f, v33[2]);
    v58 = -2147483520;
    v53 = v8;
    v9 = fmaxf(-3.40282e38f, v33[3]);
    v51 = v51 + *(float *)&a5;
    v52 = v7 + *(float *)&a5;
    v56 = &v59;
    v47 = v47 - *(float *)&a5;
    v53 = v8 + *(float *)&a5;
    v48 = v48 - *(float *)&a5;
    v49 = v49 - *(float *)&a5;
    v10 = *a2;
    v50 = v50 - *(float *)&a5;
    v54 = v9 + *(float *)&a5;
    (*(void (**)(int *, float *, int **))(v10 + 76))(a2, &v47, &v56);
    v11 = 0;
    v31 = 0;
    if ( v57 <= 0 )
      goto LABEL_12;
    v41 = v57;
    do
    {
      v36 = v56[v11];
      v12 = (int *)(*((uint32_t *)a1 + 9) + 16 * v36);
      v13 = *v12;
      if ( *v12 != v40 )
      {
        v34 = v12[1];
        if ( v34 != v40 )
        {
          v32 = v12[2];
          if ( v32 != v40 )
          {
            v42 = v11;
            LODWORD(v46[0]) = a6;
            v30 = *((uint32_t *)a1 + 6);
            v29 = v30 + 16 * v13;
            v14 = equalVertices(v33, (float *)v29, v46);
            v11 = v42;
            v15 = v36;
            if ( v14 == 0 )
            {
              v35 = v30 + 16 * v34;
              v37 = v42;
              v43 = v15;
              v16 = equalVertices(v33, (float *)v35, v46);
              v17 = v43;
              v11 = v37;
              if ( v16 == 0 )
              {
                v44 = v30 + 16 * v32;
                v28 = v37;
                v38 = v17;
                v18 = equalVertices(v33, (float *)v44, v46);
                v11 = v28;
                if ( v18 == 0 )
                {
                  hkTjunctionDetector::vertexCloseToTriangle(
                    (hkTjunctionDetector::Self *)v33,
                    (const hkVector4f::Self *)v29,
                    (const hkVector4f::Self *)v35,
                    (const hkVector4f::Self *)v44,
                    a5);
                  v20 = v19;
                  v21 = v38;
                  v11 = v28;
                  switch ( v19 )
                  {
                    case 0:
                      goto LABEL_25;
                    case 1:
                      Triangle = findTriangle(
                                   a1,
                                   (const hkArray<unsigned int, hkContainerHeapAllocator::Self> *)&v56,
                                   v40,
                                   *v12,
                                   v12[1]);
                      break;
                    case 2:
                      Triangle = findTriangle(
                                   a1,
                                   (const hkArray<unsigned int, hkContainerHeapAllocator::Self> *)&v56,
                                   v40,
                                   v12[1],
                                   v12[2]);
                      break;
                    case 3:
                      Triangle = findTriangle(
                                   a1,
                                   (const hkArray<unsigned int, hkContainerHeapAllocator::Self> *)&v56,
                                   v40,
                                   *v12,
                                   v12[2]);
                      break;
                    default:
                      goto LABEL_22;
                  }
                  v21 = v38;
                  v11 = v28;
                  if ( Triangle != 0 )
                  {
LABEL_25:
                    v41 = v57;
                    goto LABEL_10;
                  }
LABEL_22:
                  *(float *)v55 = *v33;
                  *(float *)&v55[1] = v33[1];
                  *(float *)&v55[2] = v33[2];
                  *(float *)&v55[3] = v33[3];
                  v55[8] = *(uint32_t *)v29;
                  v55[9] = *(uint32_t *)(v29 + 4);
                  v55[10] = *(uint32_t *)(v29 + 8);
                  v55[11] = *(uint32_t *)(v29 + 12);
                  v55[12] = *(uint32_t *)v35;
                  v55[13] = *(uint32_t *)(v35 + 4);
                  v55[14] = *(uint32_t *)(v35 + 8);
                  v55[15] = *(uint32_t *)(v35 + 12);
                  v55[16] = *(uint32_t *)v44;
                  v55[17] = *(uint32_t *)(v44 + 4);
                  v55[18] = *(uint32_t *)(v44 + 8);
                  v55[19] = *(uint32_t *)(v44 + 12);
                  v22 = *((uint32_t *)a3 + 1);
                  if ( v22 == (*((uint32_t *)a3 + 2) & 0x3FFFFFFF) )
                  {
                    v39 = v11;
                    v45 = v21;
                    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a3, 80, v27);
                    v11 = v39;
                    v21 = v45;
                    v22 = *((uint32_t *)a3 + 1);
                  }
                  v55[6] = v20;
                  v55[5] = v21;
                  v23 = (void *)(*(uint32_t *)a3 + 80 * v22);
                  v55[4] = v40;
                  std::memcpy(v23, v55, 80);
                  ++*((uint32_t *)a3 + 1);
                  goto LABEL_25;
                }
              }
            }
            v31 = 1;
            v41 = v57;
          }
        }
      }
LABEL_10:
      ++v11;
    }
    while ( v11 < v41 );
    if ( v31 != 0 )
    {
      v24 = *((uint32_t *)a4 + 1);
      if ( v24 == (*((uint32_t *)a4 + 2) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a4, 16, v27);
        v24 = *((uint32_t *)a4 + 1);
      }
      v25 = (uint32_t *)(*(uint32_t *)a4 + 16 * v24);
      *v25 = *(uint32_t *)v33;
      v25[1] = *((uint32_t *)v33 + 1);
      v25[2] = *((uint32_t *)v33 + 2);
      v25[3] = *((uint32_t *)v33 + 3);
      ++*((uint32_t *)a4 + 1);
    }
LABEL_12:
    v57 = 0;
    if ( v58 >= 0 )
      (*(void (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v56,
        4 * v58);
    result = a1;
    ++v40;
  }
  while ( *((uint32_t *)a1 + 7) > v40 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkTjunctionDetector::createSimpleMeshFromGeometry  (binary VA: 0x1ae8b20)
// Original: hkTjunctionDetector::createSimpleMeshFromGeometry
// ----------------------------------------------------------------------------
int * hkTjunctionDetector::createSimpleMeshFromGeometry(hkTjunctionDetector::Self *self)
{
  hkTjunctionDetector::Self *v1;
  uint32_t *address;
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
  int v13;
  int v15; // kr00_4
  int savedregs;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint32_t _g4_t_v25[6];
  typedef hkArrayUtil::Self *_g4_t_v26;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v19)) > _g4_s3 ? (16u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v20)) > _g4_s4 ? (16u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v21)) > _g4_s5 ? (20u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v22)) > _g4_s6 ? (20u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v23)) > _g4_s7 ? (20u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v24)) > _g4_s8 ? (24u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v25)) > _g4_s9 ? (28u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v26)) > _g4_s10 ? (52u + sizeof(_g4_t_v26)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);

  v26 = (hkArrayUtil::Self *)&self;
  v1 = self;
  address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v20 = (int *)(*(int (**)(uint32_t, int, int, int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(*address + 44) + 8))(
                 *(uint32_t *)(*address + 44),
                 68,
                 v16,
                 v17,
                 v18,
                 v19,
                 v21,
                 v24,
                 v25[0],
                 v25[1],
                 v25[2],
                 v25[3],
                 v25[4],
                 v25[5]);
  hkpSimpleMeshShape::Construct((hkpSimpleMeshShape::Self *)v20, hkConvexShapeDefaultRadius);
  v3 = v20[8];
  v4 = *((uint32_t *)v1 + 3);
  if ( (v3 & 0x3FFFFFFF) < v4 )
  {
    if ( v3 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v20[6],
        16 * v3);
    v25[0] = 16 * *((uint32_t *)v1 + 3);
    v5 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerHeapAllocator::s_alloc + 16))(
           (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
           v25);
    v15 = v25[0];
    v20[6] = v5;
    v20[8] = v15 / 16;
    v22 = *((uint32_t *)v1 + 3);
    v4 = v22;
  }
  else
  {
    v22 = *((uint32_t *)v1 + 3);
    v5 = v20[6];
  }
  v20[7] = v4;
  v6 = 0;
  v7 = 16 * v4;
  v8 = *((uint32_t *)v1 + 2);
  if ( v22 > 0 )
  {
    do
    {
      *(uint32_t *)(v5 + v6) = *(uint32_t *)(v8 + v6);
      *(uint32_t *)(v5 + v6 + 4) = *(uint32_t *)(v8 + v6 + 4);
      *(uint32_t *)(v5 + v6 + 8) = *(uint32_t *)(v8 + v6 + 8);
      *(uint32_t *)(v5 + v6 + 12) = *(uint32_t *)(v8 + v6 + 12);
      v6 += 16;
    }
    while ( v6 != v7 );
  }
  v9 = *((uint32_t *)v1 + 6);
  v10 = v20[11] & 0x3FFFFFFF;
  if ( v9 > v10 )
  {
    v11 = 2 * v10;
    savedregs = 16;
    v26 = (hkArrayUtil::Self *)&v24;
    if ( v11 < v9 )
      v11 = v9;
    hkArrayUtil::reserve(v26, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v20 + 9, v11, savedregs);
  }
  v20[10] = v9;
  if ( *((int *)v1 + 6) > 0 )
  {
    v23 = 0;
    v12 = 0;
    do
    {
      v13 = 16 * v12;
      ++v23;
      *(uint32_t *)(v20[9] + v13) = *(uint32_t *)(*((uint32_t *)v1 + 5) + v13);
      *(uint32_t *)(v20[9] + v13 + 4) = *(uint32_t *)(*((uint32_t *)v1 + 5) + v13 + 4);
      *(uint32_t *)(v20[9] + v13 + 8) = *(uint32_t *)(*((uint32_t *)v1 + 5) + v13 + 8);
      v12 = v23;
    }
    while ( *((uint32_t *)v1 + 6) > v23 );
  }
  return v20;
}

// ----------------------------------------------------------------------------
// Function: hkTjunctionDetector::detect  (binary VA: 0x1ae8d10)
// Original: hkTjunctionDetector::detect
// ----------------------------------------------------------------------------
hkpSimpleMeshShape::Self * hkTjunctionDetector::detect(hkTjunctionDetector::Self *a1, hkMemoryAllocator::Self *a2, hkMemoryAllocator::Self *a3, int64_t a4)
{
  hkpSimpleMeshShape::Self *result;
  int v5;
  uint32_t *v6;
  int v7;
  float *v8;
  hkpShapeContainer::Self *v9;
  int *SimpleMeshFromGeometry;
  int v11;
  uint32_t *address;
  int v13;
  int32_t v14; // kr00_4
  int32_t v15;
  int32_t v16; // ett
  int v17;
  int32_t v18; // kr04_4
  int32_t v19;
  int32_t v20; // ett
  int v21;
  int32_t v22; // kr08_4
  int32_t v23;
  int32_t v24; // ett
  typedef float *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef float _g4_t_v27[15];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v25)) > _g4_s0 ? (12u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v26)) > _g4_s1 ? (12u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v27)) > _g4_s2 ? (16u + sizeof(_g4_t_v27)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);

  result = *((hkpSimpleMeshShape::Self **)a1 + 6);
  if ( (int)(uintptr_t)(result) > 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = (uint32_t *)(*((uint32_t *)a1 + 5) + 16 * v5);
      v25 = (float *)(*((uint32_t *)a1 + 2) + 16 * v6[2]);
      v7 = 16 * v6[1];
      v8 = (float *)(*((uint32_t *)a1 + 2) + 16 * *v6);
      LODWORD(v27[0]) = hkDefaultTriangleDegeneracyTolerance;
      result = (hkpSimpleMeshShape::Self *)hkcdTriangleUtil::isDegenerate(v8, (float *)(*((uint32_t *)a1 + 2) + v7), v25, v27);
      if ( result == nullptr )
        break;
      if ( *((uint32_t *)a1 + 6) <= ++v5 )
        return result;
    }
    v9 = nullptr;
    SimpleMeshFromGeometry = hkTjunctionDetector::createSimpleMeshFromGeometry(a1);
    hkpMoppCompilerInput::Construct((hkpMoppCompilerInput::Self *)v27);
    BYTE2(v27[7]) = 1;
    if ( SimpleMeshFromGeometry != nullptr )
      v9 = (hkpShapeContainer::Self *)(SimpleMeshFromGeometry + 4);
    v11 = (int)(uintptr_t)(hkpMoppUtility::buildCode(v9, (int)(uintptr_t)(v27), 0));
    address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v26 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(*(uint32_t *)(*address + 44), 64);
    hkpMoppBvTreeShape::Construct(
      (hkpMoppBvTreeShape::Self *)v26,
      (const hkpShapeCollection::Self *)SimpleMeshFromGeometry,
      (const hkpMoppCode::Self *)v11);
    if ( *(uint16_t *)(v11 + 6) != 0 )
    {
      do
      {
        v14 = *(uint32_t *)(v11 + 4);
        HIWORD(v13) = HIWORD(v14);
        LOWORD(v13) = 0;
        v15 = v13 | (uint16_t)(v14 - 1);
        v16 = v14;
      }
      while ( v16 != __sync_val_compare_and_swap((volatile int32_t *)(v11 + 4), v16, v15) );
      if ( (uint16_t)v15 == 0 )
        G4_VCALL<void>(v11, 16);
    }
    if ( *((uint16_t *)SimpleMeshFromGeometry + 3) != 0 )
    {
      do
      {
        v18 = SimpleMeshFromGeometry[1];
        HIWORD(v17) = HIWORD(v18);
        LOWORD(v17) = 0;
        v19 = v17 | (uint16_t)(v18 - 1);
        v20 = v18;
      }
      while ( v20 != __sync_val_compare_and_swap(SimpleMeshFromGeometry + 1, v20, v19) );
      if ( (uint16_t)v19 == 0 )
        G4_VCALL<void>(SimpleMeshFromGeometry, 16);
    }
    result = hkTjunctionDetector::detect(
               (hkpSimpleMeshShape::Self *)SimpleMeshFromGeometry,
               (int *)v26,
               a2,
               a3,
               (hkVector4f::Self *)a4,
               SHIDWORD(a4));
    if ( *(uint16_t *)(v26 + 6) != 0 )
    {
      do
      {
        v22 = *(uint32_t *)(v26 + 4);
        HIWORD(v21) = HIWORD(v22);
        LOWORD(v21) = 0;
        v23 = v21 | (uint16_t)(v22 - 1);
        v24 = v22;
        result = (hkpSimpleMeshShape::Self *)__sync_val_compare_and_swap((volatile int32_t *)(v26 + 4), v24, v23);
      }
      while ( (hkpSimpleMeshShape::Self *)v24 != result );
      if ( (uint16_t)v23 == 0 )
        return (hkpSimpleMeshShape::Self *)G4_VCALL<int>(v26, 16);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVehicleFrictionDescriptionInitValues  (binary VA: 0x1af7340)
// Original: hkVehicleFrictionDescriptionInitValues
// ----------------------------------------------------------------------------
void hkVehicleFrictionDescriptionInitValues(int a1, int a2)
{
  float v3; // xmm3_4
  int v4;
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm4_4
  float v15; // xmm4_4
  float v16; // xmm6_4
  float v17; // xmm2_4
  float v18; // xmm3_4
  float v19; // xmm1_4
  float v20; // xmm4_4
  float v21; // xmm5_4
  float v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm5_4
  float v27; // xmm4_4
  float v28; // xmm5_4
  float v29; // xmm3_4
  float v30; // xmm1_4
  float v31; // xmm3_4
  float v32; // xmm2_4
  float v33; // xmm4_4
  float v34; // xmm1_4
  float v35; // xmm4_4
  float v36; // xmm3_4
  float v37; // xmm2_4
  int v38;
  float v39; // xmm1_4
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  int i;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57[7];

  v3 = *(float *)(a1 + 144);
  v4 = a2;
  *(float *)(a2 + 12) = v3;
  *(uint32_t *)(a2 + 100) = *(uint32_t *)(a1 + 156);
  *(uint32_t *)(a2 + 200) = *(uint32_t *)(a1 + 160);
  v5 = 1.0 / *(float *)(a1 + 156);
  v53 = v3;
  *(float *)(a2 + 104) = v5;
  v6 = 1.0 / *(float *)(a1 + 160);
  *(float *)(a2 + 204) = v6;
  v7 = v5 * *(float *)(a1 + 148);
  *(float *)(a2 + 88) = v7;
  v8 = v6 * *(float *)(a1 + 152);
  *(float *)(a2 + 188) = v8;
  *(float *)(a2 + 92) = 1.0 / v7;
  *(float *)(a2 + 192) = 1.0 / v8;
  v9 = *(float *)(a1 + 64);
  v10 = *(float *)(a1 + 68);
  v11 = *(float *)(a1 + 72);
  v12 = (float)((float)(*(float *)a1 * v9) + (float)(*(float *)(a1 + 4) * v10)) + (float)(*(float *)(a1 + 8) * v11);
  v13 = (float)((float)(v9 * *(float *)(a1 + 16)) + (float)(v10 * *(float *)(a1 + 20)))
      + (float)(v11 * *(float *)(a1 + 24));
  v14 = fabs(v12 - v13);
  *(float *)(a2 + 8) = v14;
  v15 = 1.0 / v14;
  *(float *)(a2 + 108) = 1.0 - *(float *)(a1 + 164);
  *(float *)(a2 + 112) = fabs((float)-v13 * v15) * *(float *)(a1 + 164);
  *(float *)(a2 + 208) = 1.0 - *(float *)(a1 + 164);
  *(float *)(a2 + 212) = fabs(v12 * v15) * *(float *)(a1 + 164);
  v54 = *(float *)(a1 + 48);
  v51 = *(float *)(a1 + 40);
  v49 = *(float *)(a1 + 88);
  v48 = *(float *)(a1 + 96);
  v55 = *(float *)(a1 + 52);
  v47 = *(float *)(a1 + 100);
  v46 = *(float *)(a1 + 104);
  v16 = *(float *)(a1 + 56);
  v45 = *(float *)(a1 + 112);
  v44 = *(float *)(a1 + 120);
  v43 = *(float *)(a1 + 128);
  v42 = *(float *)(a1 + 132);
  v40 = *(float *)(a1 + 136);
  v17 = -*(float *)(a1 + 156);
  v18 = (float)(*(float *)a1 - *(float *)(a1 + 32)) + (float)(*(float *)(a1 + 80) * v17);
  v41 = *(float *)(a1 + 116);
  v19 = (float)(*(float *)(a1 + 4) - *(float *)(a1 + 36)) + (float)(*(float *)(a1 + 84) * v17);
  v20 = (float)(*(float *)(a1 + 8) - v51) + (float)(v17 * v49);
  v21 = (float)(v19 * v16) - (float)(v55 * v20);
  v22 = (float)(v20 * v54) - (float)(v18 * v16);
  v23 = (float)(v18 * v55) - (float)(v19 * v54);
  v24 = (float)((float)((float)((float)(v48 * v21) + (float)(v45 * v22)) + (float)(v43 * v23)) * v21)
      + (float)((float)((float)((float)(v47 * v21) + (float)(v41 * v22)) + (float)(v42 * v23)) * v22);
  v25 = *(float *)(a1 + 20) - *(float *)(a1 + 36);
  v26 = (float)((float)(v21 * v46) + (float)(v22 * v44)) + (float)(v40 * v23);
  v27 = *(float *)(a1 + 80);
  v28 = v26 * v23;
  v29 = *(float *)(a1 + 16) - *(float *)(a1 + 32);
  v57[0] = (float)(v24 + v28) + v53;
  v30 = -*(float *)(a1 + 160);
  v31 = v29 + (float)(v27 * v30);
  v32 = v25 + (float)(*(float *)(a1 + 84) * v30);
  v33 = (float)(*(float *)(a1 + 24) - v51) + (float)(v30 * v49);
  v34 = (float)(v32 * v16) - (float)(v55 * v33);
  v35 = (float)(v33 * v54) - (float)(v16 * v31);
  v36 = (float)(v31 * v55) - (float)(v32 * v54);
  v57[1] = (float)((float)((float)((float)((float)((float)(v48 * v34) + (float)(v45 * v35)) + (float)(v43 * v36)) * v34)
                         + (float)((float)((float)((float)(v47 * v34) + (float)(v41 * v35)) + (float)(v42 * v36)) * v35))
                 + (float)((float)((float)((float)(v34 * v46) + (float)(v35 * v44)) + (float)(v40 * v36)) * v36))
         + v53;
  for ( i = 0; i != 2; ++i )
  {
    v37 = v57[i] * *(float *)(v4 + 88);
    v38 = 0;
    v39 = 0.0625 * v37;
    *(float *)(v4 + 96) = v37;
    *(float *)(v4 + 84) = 0.0625 * v37;
    v52 = powf(1.0 / (float)(0.0625 * v37), 0.06666667f);
    *(float *)(v4 + 80) = v52;
    do
    {
      v56 = powf(1.0 - v39, 1.0 / v37);
      v39 = v39 * v52;
      *(float *)(v4 + 4 * v38++ + 16) = 1.0 - v56;
    }
    while ( v38 != 15 );
    *(uint32_t *)(v4 + 76) = 1065353216;
    v4 += 100;
  }
}

// ----------------------------------------------------------------------------
// Function: hkVehicleFrictionApplyVehicleFriction  (binary VA: 0x1af7880)
// Original: hkVehicleFrictionApplyVehicleFriction
// ----------------------------------------------------------------------------
float * hkVehicleFrictionApplyVehicleFriction(float *a1, float *a2, int a3, int a4)
{
  float *v4;
  int v5;
  float v6; // xmm4_4
  float v7; // xmm7_4
  float v8; // xmm1_4
  float *v9;
  float v10; // xmm5_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm7_4
  float v14; // xmm4_4
  int v15;
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  float v22; // xmm5_4
  float v23; // xmm5_4
  float v24; // xmm4_4
  float v25; // xmm5_4
  float v26; // xmm3_4
  float v27; // xmm4_4
  float v28; // xmm2_4
  float v29; // xmm5_4
  float v30; // xmm2_4
  int v31;
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm5_4
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm2_4
  float v39; // xmm6_4
  float v40; // xmm2_4
  float v41; // xmm0_4
  __m128i v42;
  int v43;
  int v44; // xmm1_4
  float v45; // xmm6_4
  float v46; // xmm1_4
  float *v47;
  float v48; // xmm1_4
  float v49; // xmm6_4
  float v50; // xmm5_4
  float v51; // xmm4_4
  float v52; // xmm3_4
  float v53; // xmm2_4
  float v54; // xmm1_4
  int v55;
  float v56; // xmm6_4
  float v57; // xmm7_4
  float v58; // xmm6_4
  float v59; // xmm7_4
  float v60; // xmm5_4
  float v61; // xmm7_4
  float v62; // xmm5_4
  int v63;
  float v64; // xmm4_4
  float v65; // xmm7_4
  float v66; // xmm2_4
  float v67; // xmm1_4
  __m128i v68;
  float v69; // xmm6_4
  int v70;
  int v71; // xmm2_4
  float v72; // xmm2_4
  float v73; // xmm1_4
  __m128i v74;
  __m128i v75;
  float *v76;
  float v77; // xmm6_4
  float v78;
  int v79;
  float *v80;
  float v81; // xmm0_4
  float *v82;
  float *v83;
  float *v84;
  float v85; // xmm0_4
  float v86; // xmm1_4
  float v87; // xmm3_4
  float v88; // xmm1_4
  float v89; // xmm2_4
  float v90; // xmm3_4
  float v91; // xmm0_4
  float *v92;
  int v93;
  float *v94;
  float v95; // xmm5_4
  float v96; // xmm4_4
  float v97; // xmm2_4
  float v98; // xmm6_4
  float v99; // xmm0_4
  float v100; // xmm3_4
  float v101; // xmm5_4
  float v102; // xmm1_4
  float v103; // xmm4_4
  float v104; // xmm6_4
  float v105; // xmm2_4
  float v106; // xmm0_4
  bool v107;
  bool v108; // pf
  float v109; // xmm0_4
  float v110; // xmm2_4
  float v111; // xmm4_4
  float v112; // xmm3_4
  float v113; // xmm1_4
  float v114; // xmm0_4
  float v115; // xmm4_4
  float v116; // xmm1_4
  float *v117;
  float v118; // xmm3_4
  float v119; // xmm0_4
  float v120; // xmm1_4
  float v121; // xmm2_4
  float v122; // xmm2_4
  float v123; // xmm1_4
  float v124; // xmm0_4
  bool v125;
  float v126; // xmm3_4
  float v127; // xmm3_4
  float v128; // xmm0_4
  float v129; // xmm2_4
  __m128i v130;
  float v131; // xmm5_4
  float v132; // xmm1_4
  float v133; // xmm0_4
  float v134; // xmm2_4
  float v135; // xmm0_4
  float v136; // xmm1_4
  float v137; // xmm1_4
  int v138;
  bool v139;
  float *v140;
  float v141; // xmm4_4
  float *v142;
  float v143; // xmm2_4
  float v144; // xmm1_4
  float v145; // xmm3_4
  float v146; // xmm0_4
  float *v147;
  float v148; // xmm2_4
  float v149; // xmm0_4
  float v150; // xmm5_4
  float v151; // xmm1_4
  float v152; // xmm3_4
  float v153; // xmm0_4
  float v154; // xmm3_4
  float v155; // xmm0_4
  float v156; // xmm1_4
  float v157; // xmm3_4
  float v158; // xmm0_4
  float v159; // xmm1_4
  float v160; // xmm2_4
  float v161; // xmm2_4
  float v162; // xmm0_4
  float v163; // xmm3_4
  float v164; // xmm7_4
  float v165; // xmm5_4
  float v166; // xmm0_4
  float v167; // xmm1_4
  float v168; // xmm2_4
  float v169; // xmm0_4
  float v170; // xmm4_4
  float v171; // xmm0_4
  float v172; // xmm5_4
  float v173; // xmm0_4
  int v174;
  float v175; // xmm3_4
  float v176; // xmm2_4
  float v177; // xmm1_4
  float v178; // xmm0_4
  float *v179;
  float *v180;
  float *v181;
  float *result;
  float *v183;
  float v184; // xmm0_4
  float v185; // xmm1_4
  float v186; // xmm2_4
  float v187; // xmm6_4
  float v188; // xmm7_4
  float v189; // xmm5_4
  float v190; // xmm4_4
  float v191; // xmm0_4
  float v192; // xmm2_4
  float v193; // xmm7_4
  float v194; // xmm1_4
  float v195; // xmm2_4
  float v196; // xmm6_4
  float v197; // xmm5_4
  float v198; // xmm4_4
  float v199; // xmm3_4
  float v200; // xmm0_4
  float v201; // xmm7_4
  float v202; // xmm1_4
  float v203; // xmm3_4
  float v204; // xmm4_4
  float v205; // xmm0_4
  float v206; // xmm1_4
  float *v207;
  float v208; // xmm2_4
  float v209; // xmm7_4
  float v210; // xmm6_4
  float v211; // xmm5_4
  float v212; // xmm4_4
  float v213; // xmm0_4
  float v214; // xmm7_4
  float v215; // xmm1_4
  float v216; // xmm2_4
  float v217; // xmm6_4
  float v218; // xmm3_4
  float v219; // xmm5_4
  float v220; // xmm4_4
  float v221; // xmm0_4
  float v222; // xmm7_4
  float v223; // xmm1_4
  float v224; // xmm3_4
  float v225; // xmm5_4
  float v226; // xmm4_4
  float v227; // xmm0_4
  int v228;
  int v229;
  float v230; // xmm5_4
  float v231; // xmm7_4
  float v232; // xmm2_4
  float v233; // xmm6_4
  float v234; // xmm7_4
  float v235; // xmm3_4
  float v236; // xmm3_4
  float *v237;
  float *v238;
  int v239;
  float v240; // xmm3_4
  float v241; // xmm2_4
  float v242; // xmm0_4
  float v243; // xmm0_4
  float v244; // xmm2_4
  float v245; // xmm4_4
  float v246; // xmm0_4
  float v247; // xmm4_4
  float v248; // xmm3_4
  float v249; // xmm3_4
  float v250; // xmm4_4
  float v251; // xmm0_4
  float v252; // xmm1_4
  float v253; // xmm2_4
  float v254; // xmm0_4
  float v255; // xmm2_4
  float v256; // xmm0_4
  float v257; // xmm1_4
  float v258; // xmm2_4
  float v259; // xmm0_4
  float v260; // xmm1_4
  float v261; // xmm0_4
  float v262; // xmm2_4
  float v263; // xmm0_4
  float v264; // xmm1_4
  float v265; // xmm6_4
  float v266; // xmm4_4
  float v267; // xmm5_4
  float v268; // xmm2_4
  float v269; // xmm2_4
  float *v399;
  typedef int _g4_t_v270;
  typedef float _g4_t_v271;
  typedef float _g4_t_v272;
  typedef float _g4_t_v273;
  typedef float _g4_t_v274;
  typedef float _g4_t_v275;
  typedef uint8_t *_g4_t_v276;
  typedef uint8_t *_g4_t_v277;
  typedef float *_g4_t_v278;
  typedef float *_g4_t_v279;
  typedef float *_g4_t_v280;
  typedef float *_g4_t_v281;
  typedef float *_g4_t_v282;
  typedef int _g4_t_v283;
  typedef float *_g4_t_v284;
  typedef float _g4_t_v285;
  typedef float _g4_t_v286;
  typedef float _g4_t_v287;
  typedef float _g4_t_v288;
  typedef float _g4_t_v289;
  typedef float _g4_t_v290;
  typedef float _g4_t_v291;
  typedef int _g4_t_v292;
  typedef float _g4_t_v293;
  typedef float _g4_t_v294;
  typedef float _g4_t_v295;
  typedef float _g4_t_v296;
  typedef float _g4_t_v297;
  typedef float _g4_t_v298;
  typedef float _g4_t_v299;
  typedef float _g4_t_v300;
  typedef float _g4_t_v301;
  typedef float _g4_t_v302;
  typedef float _g4_t_v303;
  typedef float _g4_t_v304;
  typedef float _g4_t_v305;
  typedef float _g4_t_v306;
  typedef float *_g4_t_v307;
  typedef float _g4_t_v308;
  typedef float _g4_t_v309;
  typedef float *_g4_t_v310;
  typedef float *_g4_t_v311;
  typedef float *_g4_t_v312;
  typedef float _g4_t_v313;
  typedef float _g4_t_v314;
  typedef float *_g4_t_v315;
  typedef float _g4_t_v316;
  typedef uint8_t *_g4_t_v317;
  typedef float _g4_t_v318;
  typedef float *_g4_t_v319;
  typedef float *_g4_t_v320;
  typedef float *_g4_t_v321;
  typedef float *_g4_t_v322;
  typedef int _g4_t_v323;
  typedef uint8_t *_g4_t_v324;
  typedef float _g4_t_v325;
  typedef float _g4_t_v326;
  typedef float _g4_t_v327;
  typedef int _g4_t_v328;
  typedef int _g4_t_v329;
  typedef float _g4_t_v330;
  typedef float _g4_t_v331;
  typedef float _g4_t_v332;
  typedef float _g4_t_v333;
  typedef float _g4_t_v334;
  typedef bool _g4_t_v335;
  typedef float _g4_t_v336;
  typedef float _g4_t_v337;
  typedef float _g4_t_v338;
  typedef float _g4_t_v339;
  typedef float _g4_t_v340;
  typedef float _g4_t_v341;
  typedef float _g4_t_v342;
  typedef float *_g4_t_v343;
  typedef float _g4_t_v344;
  typedef float _g4_t_v345;
  typedef float _g4_t_v346;
  typedef int _g4_t_v347;
  typedef float *_g4_t_v348;
  typedef float _g4_t_v349;
  typedef float *_g4_t_v350;
  typedef float *_g4_t_v351;
  typedef int _g4_t_v352;
  typedef float _g4_t_v353;
  typedef float *_g4_t_v354;
  typedef float _g4_t_v355;
  typedef float _g4_t_v356;
  typedef float _g4_t_v357;
  typedef float _g4_t_v358;
  typedef float _g4_t_v359;
  typedef float _g4_t_v360;
  typedef uint8_t _g4_t_v361[16];
  typedef uint8_t _g4_t_v362[4];
  typedef uint8_t _g4_t_v363[12];
  typedef uint8_t _g4_t_v364[16];
  typedef float _g4_t_v365[4];
  typedef float _g4_t_v366;
  typedef float _g4_t_v367[3];
  typedef float _g4_t_v368[6];
  typedef float _g4_t_v369;
  typedef float _g4_t_v370;
  typedef float _g4_t_v371;
  typedef float _g4_t_v372;
  typedef float _g4_t_v373;
  typedef float _g4_t_v374;
  typedef float _g4_t_v375[3];
  typedef float _g4_t_v376;
  typedef float _g4_t_v377;
  typedef float _g4_t_v378;
  typedef float _g4_t_v379;
  typedef float _g4_t_v380;
  typedef float _g4_t_v381;
  typedef float _g4_t_v382;
  typedef float _g4_t_v383;
  typedef float _g4_t_v384;
  typedef float _g4_t_v385;
  typedef float _g4_t_v386;
  typedef float _g4_t_v387;
  typedef float _g4_t_v388;
  typedef float _g4_t_v389;
  typedef float _g4_t_v390;
  typedef float _g4_t_v391;
  typedef float _g4_t_v392;
  typedef float _g4_t_v393;
  typedef float _g4_t_v394;
  typedef float _g4_t_v395;
  typedef float _g4_t_v396;
  typedef float _g4_t_v397;
  typedef uint8_t _g4_t_v398[12];
  enum : size_t {
    _g4_s0 = 592u,
    _g4_s1 = (8u + sizeof(_g4_t_v270)) > _g4_s0 ? (8u + sizeof(_g4_t_v270)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v271)) > _g4_s1 ? (12u + sizeof(_g4_t_v271)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v272)) > _g4_s2 ? (16u + sizeof(_g4_t_v272)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v273)) > _g4_s3 ? (20u + sizeof(_g4_t_v273)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v274)) > _g4_s4 ? (24u + sizeof(_g4_t_v274)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v275)) > _g4_s5 ? (28u + sizeof(_g4_t_v275)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v276)) > _g4_s6 ? (32u + sizeof(_g4_t_v276)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v277)) > _g4_s7 ? (36u + sizeof(_g4_t_v277)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v278)) > _g4_s8 ? (40u + sizeof(_g4_t_v278)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v279)) > _g4_s9 ? (44u + sizeof(_g4_t_v279)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v280)) > _g4_s10 ? (48u + sizeof(_g4_t_v280)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v281)) > _g4_s11 ? (52u + sizeof(_g4_t_v281)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v282)) > _g4_s12 ? (56u + sizeof(_g4_t_v282)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v283)) > _g4_s13 ? (60u + sizeof(_g4_t_v283)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v284)) > _g4_s14 ? (64u + sizeof(_g4_t_v284)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v285)) > _g4_s15 ? (68u + sizeof(_g4_t_v285)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v286)) > _g4_s16 ? (72u + sizeof(_g4_t_v286)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v287)) > _g4_s17 ? (76u + sizeof(_g4_t_v287)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v288)) > _g4_s18 ? (80u + sizeof(_g4_t_v288)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v289)) > _g4_s19 ? (84u + sizeof(_g4_t_v289)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v290)) > _g4_s20 ? (88u + sizeof(_g4_t_v290)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v291)) > _g4_s21 ? (92u + sizeof(_g4_t_v291)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v292)) > _g4_s22 ? (92u + sizeof(_g4_t_v292)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v293)) > _g4_s23 ? (96u + sizeof(_g4_t_v293)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v294)) > _g4_s24 ? (96u + sizeof(_g4_t_v294)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v295)) > _g4_s25 ? (100u + sizeof(_g4_t_v295)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v296)) > _g4_s26 ? (100u + sizeof(_g4_t_v296)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v297)) > _g4_s27 ? (104u + sizeof(_g4_t_v297)) : _g4_s27,
    _g4_s29 = (104u + sizeof(_g4_t_v298)) > _g4_s28 ? (104u + sizeof(_g4_t_v298)) : _g4_s28,
    _g4_s30 = (108u + sizeof(_g4_t_v299)) > _g4_s29 ? (108u + sizeof(_g4_t_v299)) : _g4_s29,
    _g4_s31 = (112u + sizeof(_g4_t_v300)) > _g4_s30 ? (112u + sizeof(_g4_t_v300)) : _g4_s30,
    _g4_s32 = (116u + sizeof(_g4_t_v301)) > _g4_s31 ? (116u + sizeof(_g4_t_v301)) : _g4_s31,
    _g4_s33 = (120u + sizeof(_g4_t_v302)) > _g4_s32 ? (120u + sizeof(_g4_t_v302)) : _g4_s32,
    _g4_s34 = (120u + sizeof(_g4_t_v303)) > _g4_s33 ? (120u + sizeof(_g4_t_v303)) : _g4_s33,
    _g4_s35 = (120u + sizeof(_g4_t_v304)) > _g4_s34 ? (120u + sizeof(_g4_t_v304)) : _g4_s34,
    _g4_s36 = (124u + sizeof(_g4_t_v305)) > _g4_s35 ? (124u + sizeof(_g4_t_v305)) : _g4_s35,
    _g4_s37 = (124u + sizeof(_g4_t_v306)) > _g4_s36 ? (124u + sizeof(_g4_t_v306)) : _g4_s36,
    _g4_s38 = (124u + sizeof(_g4_t_v307)) > _g4_s37 ? (124u + sizeof(_g4_t_v307)) : _g4_s37,
    _g4_s39 = (128u + sizeof(_g4_t_v308)) > _g4_s38 ? (128u + sizeof(_g4_t_v308)) : _g4_s38,
    _g4_s40 = (128u + sizeof(_g4_t_v309)) > _g4_s39 ? (128u + sizeof(_g4_t_v309)) : _g4_s39,
    _g4_s41 = (128u + sizeof(_g4_t_v310)) > _g4_s40 ? (128u + sizeof(_g4_t_v310)) : _g4_s40,
    _g4_s42 = (144u + sizeof(_g4_t_v311)) > _g4_s41 ? (144u + sizeof(_g4_t_v311)) : _g4_s41,
    _g4_s43 = (144u + sizeof(_g4_t_v312)) > _g4_s42 ? (144u + sizeof(_g4_t_v312)) : _g4_s42,
    _g4_s44 = (148u + sizeof(_g4_t_v313)) > _g4_s43 ? (148u + sizeof(_g4_t_v313)) : _g4_s43,
    _g4_s45 = (148u + sizeof(_g4_t_v314)) > _g4_s44 ? (148u + sizeof(_g4_t_v314)) : _g4_s44,
    _g4_s46 = (148u + sizeof(_g4_t_v315)) > _g4_s45 ? (148u + sizeof(_g4_t_v315)) : _g4_s45,
    _g4_s47 = (152u + sizeof(_g4_t_v316)) > _g4_s46 ? (152u + sizeof(_g4_t_v316)) : _g4_s46,
    _g4_s48 = (152u + sizeof(_g4_t_v317)) > _g4_s47 ? (152u + sizeof(_g4_t_v317)) : _g4_s47,
    _g4_s49 = (152u + sizeof(_g4_t_v318)) > _g4_s48 ? (152u + sizeof(_g4_t_v318)) : _g4_s48,
    _g4_s50 = (152u + sizeof(_g4_t_v319)) > _g4_s49 ? (152u + sizeof(_g4_t_v319)) : _g4_s49,
    _g4_s51 = (152u + sizeof(_g4_t_v320)) > _g4_s50 ? (152u + sizeof(_g4_t_v320)) : _g4_s50,
    _g4_s52 = (152u + sizeof(_g4_t_v321)) > _g4_s51 ? (152u + sizeof(_g4_t_v321)) : _g4_s51,
    _g4_s53 = (152u + sizeof(_g4_t_v322)) > _g4_s52 ? (152u + sizeof(_g4_t_v322)) : _g4_s52,
    _g4_s54 = (160u + sizeof(_g4_t_v323)) > _g4_s53 ? (160u + sizeof(_g4_t_v323)) : _g4_s53,
    _g4_s55 = (160u + sizeof(_g4_t_v324)) > _g4_s54 ? (160u + sizeof(_g4_t_v324)) : _g4_s54,
    _g4_s56 = (160u + sizeof(_g4_t_v325)) > _g4_s55 ? (160u + sizeof(_g4_t_v325)) : _g4_s55,
    _g4_s57 = (160u + sizeof(_g4_t_v326)) > _g4_s56 ? (160u + sizeof(_g4_t_v326)) : _g4_s56,
    _g4_s58 = (160u + sizeof(_g4_t_v327)) > _g4_s57 ? (160u + sizeof(_g4_t_v327)) : _g4_s57,
    _g4_s59 = (160u + sizeof(_g4_t_v328)) > _g4_s58 ? (160u + sizeof(_g4_t_v328)) : _g4_s58,
    _g4_s60 = (160u + sizeof(_g4_t_v329)) > _g4_s59 ? (160u + sizeof(_g4_t_v329)) : _g4_s59,
    _g4_s61 = (164u + sizeof(_g4_t_v330)) > _g4_s60 ? (164u + sizeof(_g4_t_v330)) : _g4_s60,
    _g4_s62 = (164u + sizeof(_g4_t_v331)) > _g4_s61 ? (164u + sizeof(_g4_t_v331)) : _g4_s61,
    _g4_s63 = (164u + sizeof(_g4_t_v332)) > _g4_s62 ? (164u + sizeof(_g4_t_v332)) : _g4_s62,
    _g4_s64 = (168u + sizeof(_g4_t_v333)) > _g4_s63 ? (168u + sizeof(_g4_t_v333)) : _g4_s63,
    _g4_s65 = (168u + sizeof(_g4_t_v334)) > _g4_s64 ? (168u + sizeof(_g4_t_v334)) : _g4_s64,
    _g4_s66 = (168u + sizeof(_g4_t_v335)) > _g4_s65 ? (168u + sizeof(_g4_t_v335)) : _g4_s65,
    _g4_s67 = (168u + sizeof(_g4_t_v336)) > _g4_s66 ? (168u + sizeof(_g4_t_v336)) : _g4_s66,
    _g4_s68 = (172u + sizeof(_g4_t_v337)) > _g4_s67 ? (172u + sizeof(_g4_t_v337)) : _g4_s67,
    _g4_s69 = (172u + sizeof(_g4_t_v338)) > _g4_s68 ? (172u + sizeof(_g4_t_v338)) : _g4_s68,
    _g4_s70 = (176u + sizeof(_g4_t_v339)) > _g4_s69 ? (176u + sizeof(_g4_t_v339)) : _g4_s69,
    _g4_s71 = (176u + sizeof(_g4_t_v340)) > _g4_s70 ? (176u + sizeof(_g4_t_v340)) : _g4_s70,
    _g4_s72 = (176u + sizeof(_g4_t_v341)) > _g4_s71 ? (176u + sizeof(_g4_t_v341)) : _g4_s71,
    _g4_s73 = (176u + sizeof(_g4_t_v342)) > _g4_s72 ? (176u + sizeof(_g4_t_v342)) : _g4_s72,
    _g4_s74 = (180u + sizeof(_g4_t_v343)) > _g4_s73 ? (180u + sizeof(_g4_t_v343)) : _g4_s73,
    _g4_s75 = (180u + sizeof(_g4_t_v344)) > _g4_s74 ? (180u + sizeof(_g4_t_v344)) : _g4_s74,
    _g4_s76 = (180u + sizeof(_g4_t_v345)) > _g4_s75 ? (180u + sizeof(_g4_t_v345)) : _g4_s75,
    _g4_s77 = (180u + sizeof(_g4_t_v346)) > _g4_s76 ? (180u + sizeof(_g4_t_v346)) : _g4_s76,
    _g4_s78 = (180u + sizeof(_g4_t_v347)) > _g4_s77 ? (180u + sizeof(_g4_t_v347)) : _g4_s77,
    _g4_s79 = (180u + sizeof(_g4_t_v348)) > _g4_s78 ? (180u + sizeof(_g4_t_v348)) : _g4_s78,
    _g4_s80 = (180u + sizeof(_g4_t_v349)) > _g4_s79 ? (180u + sizeof(_g4_t_v349)) : _g4_s79,
    _g4_s81 = (180u + sizeof(_g4_t_v350)) > _g4_s80 ? (180u + sizeof(_g4_t_v350)) : _g4_s80,
    _g4_s82 = (184u + sizeof(_g4_t_v351)) > _g4_s81 ? (184u + sizeof(_g4_t_v351)) : _g4_s81,
    _g4_s83 = (184u + sizeof(_g4_t_v352)) > _g4_s82 ? (184u + sizeof(_g4_t_v352)) : _g4_s82,
    _g4_s84 = (184u + sizeof(_g4_t_v353)) > _g4_s83 ? (184u + sizeof(_g4_t_v353)) : _g4_s83,
    _g4_s85 = (184u + sizeof(_g4_t_v354)) > _g4_s84 ? (184u + sizeof(_g4_t_v354)) : _g4_s84,
    _g4_s86 = (184u + sizeof(_g4_t_v355)) > _g4_s85 ? (184u + sizeof(_g4_t_v355)) : _g4_s85,
    _g4_s87 = (184u + sizeof(_g4_t_v356)) > _g4_s86 ? (184u + sizeof(_g4_t_v356)) : _g4_s86,
    _g4_s88 = (184u + sizeof(_g4_t_v357)) > _g4_s87 ? (184u + sizeof(_g4_t_v357)) : _g4_s87,
    _g4_s89 = (184u + sizeof(_g4_t_v358)) > _g4_s88 ? (184u + sizeof(_g4_t_v358)) : _g4_s88,
    _g4_s90 = (184u + sizeof(_g4_t_v359)) > _g4_s89 ? (184u + sizeof(_g4_t_v359)) : _g4_s89,
    _g4_s91 = (184u + sizeof(_g4_t_v360)) > _g4_s90 ? (184u + sizeof(_g4_t_v360)) : _g4_s90,
    _g4_s92 = (192u + sizeof(_g4_t_v361)) > _g4_s91 ? (192u + sizeof(_g4_t_v361)) : _g4_s91,
    _g4_s93 = (208u + sizeof(_g4_t_v362)) > _g4_s92 ? (208u + sizeof(_g4_t_v362)) : _g4_s92,
    _g4_s94 = (212u + sizeof(_g4_t_v363)) > _g4_s93 ? (212u + sizeof(_g4_t_v363)) : _g4_s93,
    _g4_s95 = (224u + sizeof(_g4_t_v364)) > _g4_s94 ? (224u + sizeof(_g4_t_v364)) : _g4_s94,
    _g4_s96 = (240u + sizeof(_g4_t_v365)) > _g4_s95 ? (240u + sizeof(_g4_t_v365)) : _g4_s95,
    _g4_s97 = (256u + sizeof(_g4_t_v366)) > _g4_s96 ? (256u + sizeof(_g4_t_v366)) : _g4_s96,
    _g4_s98 = (260u + sizeof(_g4_t_v367)) > _g4_s97 ? (260u + sizeof(_g4_t_v367)) : _g4_s97,
    _g4_s99 = (272u + sizeof(_g4_t_v368)) > _g4_s98 ? (272u + sizeof(_g4_t_v368)) : _g4_s98,
    _g4_s100 = (296u + sizeof(_g4_t_v369)) > _g4_s99 ? (296u + sizeof(_g4_t_v369)) : _g4_s99,
    _g4_s101 = (300u + sizeof(_g4_t_v370)) > _g4_s100 ? (300u + sizeof(_g4_t_v370)) : _g4_s100,
    _g4_s102 = (304u + sizeof(_g4_t_v371)) > _g4_s101 ? (304u + sizeof(_g4_t_v371)) : _g4_s101,
    _g4_s103 = (308u + sizeof(_g4_t_v372)) > _g4_s102 ? (308u + sizeof(_g4_t_v372)) : _g4_s102,
    _g4_s104 = (316u + sizeof(_g4_t_v373)) > _g4_s103 ? (316u + sizeof(_g4_t_v373)) : _g4_s103,
    _g4_s105 = (320u + sizeof(_g4_t_v374)) > _g4_s104 ? (320u + sizeof(_g4_t_v374)) : _g4_s104,
    _g4_s106 = (324u + sizeof(_g4_t_v375)) > _g4_s105 ? (324u + sizeof(_g4_t_v375)) : _g4_s105,
    _g4_s107 = (336u + sizeof(_g4_t_v376)) > _g4_s106 ? (336u + sizeof(_g4_t_v376)) : _g4_s106,
    _g4_s108 = (340u + sizeof(_g4_t_v377)) > _g4_s107 ? (340u + sizeof(_g4_t_v377)) : _g4_s107,
    _g4_s109 = (344u + sizeof(_g4_t_v378)) > _g4_s108 ? (344u + sizeof(_g4_t_v378)) : _g4_s108,
    _g4_s110 = (400u + sizeof(_g4_t_v379)) > _g4_s109 ? (400u + sizeof(_g4_t_v379)) : _g4_s109,
    _g4_s111 = (404u + sizeof(_g4_t_v380)) > _g4_s110 ? (404u + sizeof(_g4_t_v380)) : _g4_s110,
    _g4_s112 = (408u + sizeof(_g4_t_v381)) > _g4_s111 ? (408u + sizeof(_g4_t_v381)) : _g4_s111,
    _g4_s113 = (416u + sizeof(_g4_t_v382)) > _g4_s112 ? (416u + sizeof(_g4_t_v382)) : _g4_s112,
    _g4_s114 = (420u + sizeof(_g4_t_v383)) > _g4_s113 ? (420u + sizeof(_g4_t_v383)) : _g4_s113,
    _g4_s115 = (424u + sizeof(_g4_t_v384)) > _g4_s114 ? (424u + sizeof(_g4_t_v384)) : _g4_s114,
    _g4_s116 = (432u + sizeof(_g4_t_v385)) > _g4_s115 ? (432u + sizeof(_g4_t_v385)) : _g4_s115,
    _g4_s117 = (436u + sizeof(_g4_t_v386)) > _g4_s116 ? (436u + sizeof(_g4_t_v386)) : _g4_s116,
    _g4_s118 = (440u + sizeof(_g4_t_v387)) > _g4_s117 ? (440u + sizeof(_g4_t_v387)) : _g4_s117,
    _g4_s119 = (456u + sizeof(_g4_t_v388)) > _g4_s118 ? (456u + sizeof(_g4_t_v388)) : _g4_s118,
    _g4_s120 = (460u + sizeof(_g4_t_v389)) > _g4_s119 ? (460u + sizeof(_g4_t_v389)) : _g4_s119,
    _g4_s121 = (464u + sizeof(_g4_t_v390)) > _g4_s120 ? (464u + sizeof(_g4_t_v390)) : _g4_s120,
    _g4_s122 = (468u + sizeof(_g4_t_v391)) > _g4_s121 ? (468u + sizeof(_g4_t_v391)) : _g4_s121,
    _g4_s123 = (476u + sizeof(_g4_t_v392)) > _g4_s122 ? (476u + sizeof(_g4_t_v392)) : _g4_s122,
    _g4_s124 = (480u + sizeof(_g4_t_v393)) > _g4_s123 ? (480u + sizeof(_g4_t_v393)) : _g4_s123,
    _g4_s125 = (484u + sizeof(_g4_t_v394)) > _g4_s124 ? (484u + sizeof(_g4_t_v394)) : _g4_s124,
    _g4_s126 = (496u + sizeof(_g4_t_v395)) > _g4_s125 ? (496u + sizeof(_g4_t_v395)) : _g4_s125,
    _g4_s127 = (500u + sizeof(_g4_t_v396)) > _g4_s126 ? (500u + sizeof(_g4_t_v396)) : _g4_s126,
    _g4_s128 = (504u + sizeof(_g4_t_v397)) > _g4_s127 ? (504u + sizeof(_g4_t_v397)) : _g4_s127,
    _g4_s129 = (512u + sizeof(_g4_t_v398)) > _g4_s128 ? (512u + sizeof(_g4_t_v398)) : _g4_s128
  };
  alignas(16) uint8_t _g4_sf[_g4_s129];
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 8u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 12u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 16u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 20u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 24u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 28u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 32u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 36u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 40u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 44u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 48u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 52u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 56u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 60u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 64u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 68u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 72u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 76u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 80u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 84u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 88u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 92u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 92u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 96u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 96u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 100u);
  _g4_t_v296 &v296 = *reinterpret_cast<_g4_t_v296 *>(_g4_sf + 100u);
  _g4_t_v297 &v297 = *reinterpret_cast<_g4_t_v297 *>(_g4_sf + 104u);
  _g4_t_v298 &v298 = *reinterpret_cast<_g4_t_v298 *>(_g4_sf + 104u);
  _g4_t_v299 &v299 = *reinterpret_cast<_g4_t_v299 *>(_g4_sf + 108u);
  _g4_t_v300 &v300 = *reinterpret_cast<_g4_t_v300 *>(_g4_sf + 112u);
  _g4_t_v301 &v301 = *reinterpret_cast<_g4_t_v301 *>(_g4_sf + 116u);
  _g4_t_v302 &v302 = *reinterpret_cast<_g4_t_v302 *>(_g4_sf + 120u);
  _g4_t_v303 &v303 = *reinterpret_cast<_g4_t_v303 *>(_g4_sf + 120u);
  _g4_t_v304 &v304 = *reinterpret_cast<_g4_t_v304 *>(_g4_sf + 120u);
  _g4_t_v305 &v305 = *reinterpret_cast<_g4_t_v305 *>(_g4_sf + 124u);
  _g4_t_v306 &v306 = *reinterpret_cast<_g4_t_v306 *>(_g4_sf + 124u);
  _g4_t_v307 &v307 = *reinterpret_cast<_g4_t_v307 *>(_g4_sf + 124u);
  _g4_t_v308 &v308 = *reinterpret_cast<_g4_t_v308 *>(_g4_sf + 128u);
  _g4_t_v309 &v309 = *reinterpret_cast<_g4_t_v309 *>(_g4_sf + 128u);
  _g4_t_v310 &v310 = *reinterpret_cast<_g4_t_v310 *>(_g4_sf + 128u);
  _g4_t_v311 &v311 = *reinterpret_cast<_g4_t_v311 *>(_g4_sf + 144u);
  _g4_t_v312 &v312 = *reinterpret_cast<_g4_t_v312 *>(_g4_sf + 144u);
  _g4_t_v313 &v313 = *reinterpret_cast<_g4_t_v313 *>(_g4_sf + 148u);
  _g4_t_v314 &v314 = *reinterpret_cast<_g4_t_v314 *>(_g4_sf + 148u);
  _g4_t_v315 &v315 = *reinterpret_cast<_g4_t_v315 *>(_g4_sf + 148u);
  _g4_t_v316 &v316 = *reinterpret_cast<_g4_t_v316 *>(_g4_sf + 152u);
  _g4_t_v317 &v317 = *reinterpret_cast<_g4_t_v317 *>(_g4_sf + 152u);
  _g4_t_v318 &v318 = *reinterpret_cast<_g4_t_v318 *>(_g4_sf + 152u);
  _g4_t_v319 &v319 = *reinterpret_cast<_g4_t_v319 *>(_g4_sf + 152u);
  _g4_t_v320 &v320 = *reinterpret_cast<_g4_t_v320 *>(_g4_sf + 152u);
  _g4_t_v321 &v321 = *reinterpret_cast<_g4_t_v321 *>(_g4_sf + 152u);
  _g4_t_v322 &v322 = *reinterpret_cast<_g4_t_v322 *>(_g4_sf + 152u);
  _g4_t_v323 &v323 = *reinterpret_cast<_g4_t_v323 *>(_g4_sf + 160u);
  _g4_t_v324 &v324 = *reinterpret_cast<_g4_t_v324 *>(_g4_sf + 160u);
  _g4_t_v325 &v325 = *reinterpret_cast<_g4_t_v325 *>(_g4_sf + 160u);
  _g4_t_v326 &v326 = *reinterpret_cast<_g4_t_v326 *>(_g4_sf + 160u);
  _g4_t_v327 &v327 = *reinterpret_cast<_g4_t_v327 *>(_g4_sf + 160u);
  _g4_t_v328 &v328 = *reinterpret_cast<_g4_t_v328 *>(_g4_sf + 160u);
  _g4_t_v329 &v329 = *reinterpret_cast<_g4_t_v329 *>(_g4_sf + 160u);
  _g4_t_v330 &v330 = *reinterpret_cast<_g4_t_v330 *>(_g4_sf + 164u);
  _g4_t_v331 &v331 = *reinterpret_cast<_g4_t_v331 *>(_g4_sf + 164u);
  _g4_t_v332 &v332 = *reinterpret_cast<_g4_t_v332 *>(_g4_sf + 164u);
  _g4_t_v333 &v333 = *reinterpret_cast<_g4_t_v333 *>(_g4_sf + 168u);
  _g4_t_v334 &v334 = *reinterpret_cast<_g4_t_v334 *>(_g4_sf + 168u);
  _g4_t_v335 &v335 = *reinterpret_cast<_g4_t_v335 *>(_g4_sf + 168u);
  _g4_t_v336 &v336 = *reinterpret_cast<_g4_t_v336 *>(_g4_sf + 168u);
  _g4_t_v337 &v337 = *reinterpret_cast<_g4_t_v337 *>(_g4_sf + 172u);
  _g4_t_v338 &v338 = *reinterpret_cast<_g4_t_v338 *>(_g4_sf + 172u);
  _g4_t_v339 &v339 = *reinterpret_cast<_g4_t_v339 *>(_g4_sf + 176u);
  _g4_t_v340 &v340 = *reinterpret_cast<_g4_t_v340 *>(_g4_sf + 176u);
  _g4_t_v341 &v341 = *reinterpret_cast<_g4_t_v341 *>(_g4_sf + 176u);
  _g4_t_v342 &v342 = *reinterpret_cast<_g4_t_v342 *>(_g4_sf + 176u);
  _g4_t_v343 &v343 = *reinterpret_cast<_g4_t_v343 *>(_g4_sf + 180u);
  _g4_t_v344 &v344 = *reinterpret_cast<_g4_t_v344 *>(_g4_sf + 180u);
  _g4_t_v345 &v345 = *reinterpret_cast<_g4_t_v345 *>(_g4_sf + 180u);
  _g4_t_v346 &v346 = *reinterpret_cast<_g4_t_v346 *>(_g4_sf + 180u);
  _g4_t_v347 &v347 = *reinterpret_cast<_g4_t_v347 *>(_g4_sf + 180u);
  _g4_t_v348 &v348 = *reinterpret_cast<_g4_t_v348 *>(_g4_sf + 180u);
  _g4_t_v349 &v349 = *reinterpret_cast<_g4_t_v349 *>(_g4_sf + 180u);
  _g4_t_v350 &v350 = *reinterpret_cast<_g4_t_v350 *>(_g4_sf + 180u);
  _g4_t_v351 &v351 = *reinterpret_cast<_g4_t_v351 *>(_g4_sf + 184u);
  _g4_t_v352 &v352 = *reinterpret_cast<_g4_t_v352 *>(_g4_sf + 184u);
  _g4_t_v353 &v353 = *reinterpret_cast<_g4_t_v353 *>(_g4_sf + 184u);
  _g4_t_v354 &v354 = *reinterpret_cast<_g4_t_v354 *>(_g4_sf + 184u);
  _g4_t_v355 &v355 = *reinterpret_cast<_g4_t_v355 *>(_g4_sf + 184u);
  _g4_t_v356 &v356 = *reinterpret_cast<_g4_t_v356 *>(_g4_sf + 184u);
  _g4_t_v357 &v357 = *reinterpret_cast<_g4_t_v357 *>(_g4_sf + 184u);
  _g4_t_v358 &v358 = *reinterpret_cast<_g4_t_v358 *>(_g4_sf + 184u);
  _g4_t_v359 &v359 = *reinterpret_cast<_g4_t_v359 *>(_g4_sf + 184u);
  _g4_t_v360 &v360 = *reinterpret_cast<_g4_t_v360 *>(_g4_sf + 184u);
  _g4_t_v361 &v361 = *reinterpret_cast<_g4_t_v361 *>(_g4_sf + 192u);
  _g4_t_v362 &v362 = *reinterpret_cast<_g4_t_v362 *>(_g4_sf + 208u);
  _g4_t_v363 &v363 = *reinterpret_cast<_g4_t_v363 *>(_g4_sf + 212u);
  _g4_t_v364 &v364 = *reinterpret_cast<_g4_t_v364 *>(_g4_sf + 224u);
  _g4_t_v365 &v365 = *reinterpret_cast<_g4_t_v365 *>(_g4_sf + 240u);
  _g4_t_v366 &v366 = *reinterpret_cast<_g4_t_v366 *>(_g4_sf + 256u);
  _g4_t_v367 &v367 = *reinterpret_cast<_g4_t_v367 *>(_g4_sf + 260u);
  _g4_t_v368 &v368 = *reinterpret_cast<_g4_t_v368 *>(_g4_sf + 272u);
  _g4_t_v369 &v369 = *reinterpret_cast<_g4_t_v369 *>(_g4_sf + 296u);
  _g4_t_v370 &v370 = *reinterpret_cast<_g4_t_v370 *>(_g4_sf + 300u);
  _g4_t_v371 &v371 = *reinterpret_cast<_g4_t_v371 *>(_g4_sf + 304u);
  _g4_t_v372 &v372 = *reinterpret_cast<_g4_t_v372 *>(_g4_sf + 308u);
  _g4_t_v373 &v373 = *reinterpret_cast<_g4_t_v373 *>(_g4_sf + 316u);
  _g4_t_v374 &v374 = *reinterpret_cast<_g4_t_v374 *>(_g4_sf + 320u);
  _g4_t_v375 &v375 = *reinterpret_cast<_g4_t_v375 *>(_g4_sf + 324u);
  _g4_t_v376 &v376 = *reinterpret_cast<_g4_t_v376 *>(_g4_sf + 336u);
  _g4_t_v377 &v377 = *reinterpret_cast<_g4_t_v377 *>(_g4_sf + 340u);
  _g4_t_v378 &v378 = *reinterpret_cast<_g4_t_v378 *>(_g4_sf + 344u);
  _g4_t_v379 &v379 = *reinterpret_cast<_g4_t_v379 *>(_g4_sf + 400u);
  _g4_t_v380 &v380 = *reinterpret_cast<_g4_t_v380 *>(_g4_sf + 404u);
  _g4_t_v381 &v381 = *reinterpret_cast<_g4_t_v381 *>(_g4_sf + 408u);
  _g4_t_v382 &v382 = *reinterpret_cast<_g4_t_v382 *>(_g4_sf + 416u);
  _g4_t_v383 &v383 = *reinterpret_cast<_g4_t_v383 *>(_g4_sf + 420u);
  _g4_t_v384 &v384 = *reinterpret_cast<_g4_t_v384 *>(_g4_sf + 424u);
  _g4_t_v385 &v385 = *reinterpret_cast<_g4_t_v385 *>(_g4_sf + 432u);
  _g4_t_v386 &v386 = *reinterpret_cast<_g4_t_v386 *>(_g4_sf + 436u);
  _g4_t_v387 &v387 = *reinterpret_cast<_g4_t_v387 *>(_g4_sf + 440u);
  _g4_t_v388 &v388 = *reinterpret_cast<_g4_t_v388 *>(_g4_sf + 456u);
  _g4_t_v389 &v389 = *reinterpret_cast<_g4_t_v389 *>(_g4_sf + 460u);
  _g4_t_v390 &v390 = *reinterpret_cast<_g4_t_v390 *>(_g4_sf + 464u);
  _g4_t_v391 &v391 = *reinterpret_cast<_g4_t_v391 *>(_g4_sf + 468u);
  _g4_t_v392 &v392 = *reinterpret_cast<_g4_t_v392 *>(_g4_sf + 476u);
  _g4_t_v393 &v393 = *reinterpret_cast<_g4_t_v393 *>(_g4_sf + 480u);
  _g4_t_v394 &v394 = *reinterpret_cast<_g4_t_v394 *>(_g4_sf + 484u);
  _g4_t_v395 &v395 = *reinterpret_cast<_g4_t_v395 *>(_g4_sf + 496u);
  _g4_t_v396 &v396 = *reinterpret_cast<_g4_t_v396 *>(_g4_sf + 500u);
  _g4_t_v397 &v397 = *reinterpret_cast<_g4_t_v397 *>(_g4_sf + 504u);
  _g4_t_v398 &v398 = *reinterpret_cast<_g4_t_v398 *>(_g4_sf + 512u);

  v4 = (float *)a3;
  v283 = a4;
  v282 = v365;
  v281 = v368;
  v280 = &v366;
  v279 = (float *)(a3 + 16);
  v276 = v362;
  v284 = (float *)(a3 + 32);
  v278 = a2;
  v277 = v364;
  v323 = 0;
  v5 = a3;
  v351 = (float *)v361;
  do
  {
    v343 = *(float **)(v5 + 48);
    v270 = v5;
    v6 = *(float *)v5;
    v7 = *(float *)(v5 + 4);
    v8 = *(float *)(v5 + 8);
    *v351 = *v284;
    v351[1] = v284[1];
    v351[2] = v284[2];
    v351[3] = v284[3];
    v9 = v343;
    v333 = v6 - v343[28];
    v10 = v7 - v343[29];
    v11 = v284[2];
    v12 = v6 - *(float *)(a3 + 320);
    v330 = v7 - *(float *)(a3 + 324);
    v13 = v8 - v343[30];
    v344 = v284[1];
    v274 = v8 - *(float *)(a3 + 328);
    v14 = (float)(v330 * v11) - (float)(v274 * v344);
    v15 = v276 - v361;
    v275 = v12;
    v313 = v10;
    v16 = (float)(v274 * *v284) - (float)(v12 * v11);
    v308 = v13;
    v17 = (float)(v12 * v344) - (float)(v330 * *v284);
    v18 = (float)(v344 * v13) - (float)(v10 * v11);
    v19 = (float)(v11 * v333) - (float)(v13 * *v284);
    v20 = v10;
    v21 = (float)(*v284 * v10) - (float)(v344 * v333);
    v22 = (float)((float)(*(float *)(a3 + 288) * v16) + (float)(*(float *)(a3 + 272) * v14))
        + (float)(*(float *)(a3 + 304) * v17);
    *(float *)&v362[v15 - 16] = v22;
    v345 = v22;
    v23 = (float)((float)(*(float *)(a3 + 292) * v16) + (float)(*(float *)(a3 + 276) * v14))
        + (float)(*(float *)(a3 + 308) * v17);
    *(float *)&v362[v15 - 12] = v23;
    v339 = v23;
    v337 = (float)(*(float *)(a3 + 296) * v16) + (float)(*(float *)(a3 + 280) * v14);
    v24 = (float)(v14 * *(float *)(a3 + 284)) + (float)(v16 * *(float *)(a3 + 300));
    v302 = v9[19];
    v25 = (float)(*(float *)(a3 + 312) * v17) + v337;
    v26 = v9[20];
    v27 = v24 + (float)(v17 * *(float *)(a3 + 316));
    v28 = v9[17];
    *(float *)&v362[v15 - 8] = v25;
    v338 = v25;
    v29 = v28;
    v30 = v9[18];
    *(float *)&v362[v15 - 4] = v27;
    v31 = v277 - v361;
    v305 = v30;
    v301 = v9[21];
    v273 = v9[16];
    v271 = v26;
    v300 = v9[22];
    v299 = v9[23];
    v297 = v9[24];
    v272 = v29;
    *(float *)&v364[v31 - 32] = (float)((float)(v26 * v19) + (float)(v273 * v18)) + (float)(v297 * v21);
    v32 = (float)((float)(v26 * v19) + (float)(v273 * v18)) + (float)(v297 * v21);
    v293 = v9[25];
    *(float *)&v364[v31 - 28] = (float)((float)(v301 * v19) + (float)(v29 * v18)) + (float)(v293 * v21);
    v33 = (float)((float)(v301 * v19) + (float)(v29 * v18)) + (float)(v293 * v21);
    v290 = v9[26];
    v295 = v32;
    v291 = v33;
    v34 = v30 * v18;
    v35 = v300 * v19;
    v36 = (float)(v18 * v302) + (float)(v19 * v299);
    v37 = v9[12];
    v38 = (float)(v35 + v34) + (float)(v290 * v21);
    v39 = v21 * v9[27];
    v289 = v9[27];
    *(float *)&v364[v31 - 24] = v38;
    v316 = v38;
    v40 = v37;
    v287 = v9[13];
    v41 = *(float *)(a3 + 268) + v9[15];
    *(float *)&v364[v31 - 20] = v36 + v39;
    v286 = v9[14];
    v288 = v40;
    v285 = fmaxf(v41, 1.4210855e-14f);
g4_m128_raw(v42) = *(unsigned int *)(a3 + 264);
    *(float *)g4_m128_ptr<int32_t>(v42) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v42) * (float)(v338 * v338))
                                            + (float)(v286 * (float)(v316 * v316)))
                                    + (float)((float)((float)(*(float *)(a3 + 260) * (float)(v339 * v339))
                                                    + (float)(v287 * (float)(v33 * v33)))
                                            + (float)((float)((float)(v345 * v345) * *(float *)(a3 + 256))
                                                    + (float)((float)(v32 * v32) * v40))))
                            + v285;
    v43 = _mm_cvtsi128_si32(v42);
    *(uint32_t *)&v364[v323 * 4 + 12] =g4_m128_lane<int32_t>(v42, 0);
    v44 = (2130706432 - v43) & ((v43 ^ (v43 + 2139095040)) >> 31);
    v45 = *(float *)g4_m128_ptr<int32_t>(v42);
    v46 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v42)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v42) * *(float *)&v44)) * *(float *)&v44)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v42) * *(float *)&v44)) * *(float *)&v44);
    *(float *)g4_m128_ptr<int32_t>(v42) = *(float *)g4_m128_ptr<int32_t>(v42) + v278[23];
    *(float *)&v363[v323 * 4 + 8] = (float)(2.0 - (float)(v45 * v46)) * v46;
    v47 = &v365[v323];
    v351[31] = *(float *)g4_m128_ptr<int32_t>(v42);
    v351[30] = 1.0 / *(float *)g4_m128_ptr<int32_t>(v42);
    v48 = v279[2];
    v49 = v279[1];
    *v47 = *v279;
    v47[1] = v279[1];
    v47[2] = v279[2];
    v50 = (float)(v330 * v48) - (float)(v274 * v49);
g4_m128_lane<int32_t>(v42, 0) = *(int32_t *)v279;
    v47[3] = v279[3];
    v51 = (float)(v274 * *(float *)g4_m128_ptr<int32_t>(v42)) - (float)(v275 * v48);
    v52 = (float)(v275 * v49) - (float)(v330 * *(float *)g4_m128_ptr<int32_t>(v42));
    v53 = (float)(v308 * v49) - (float)(v20 * v48);
    v54 = (float)(v48 * v333) - (float)(v308 * *(float *)g4_m128_ptr<int32_t>(v42));
    *(float *)g4_m128_ptr<int32_t>(v42) = (float)(*(float *)g4_m128_ptr<int32_t>(v42) * v313) - (float)(v49 * v333);
    v55 = (char *)v280 - (char *)(v361);
    v56 = *(float *)(a3 + 292) * v51;
    v57 = (float)((float)(*(float *)(a3 + 288) * v51) + (float)(*(float *)(a3 + 272) * v50))
        + (float)(*(float *)(a3 + 304) * v52);
    *(float *)((char *)&v367[-17] + v55) = v57;
    v334 = v57;
    v58 = (float)(v56 + (float)(*(float *)(a3 + 276) * v50)) + (float)(*(float *)(a3 + 308) * v52);
    v59 = *(float *)(a3 + 280) * v50;
    v60 = v50 * *(float *)(a3 + 284);
    *(float *)((char *)&v367[-16] + v55) = v58;
    v314 = v58;
    v61 = (float)((float)(*(float *)(a3 + 296) * v51) + v59) + (float)(*(float *)(a3 + 312) * v52);
    *(float *)((char *)&v367[-14] + v55) = (float)(v60 + (float)(v51 * *(float *)(a3 + 300)))
                                         + (float)(v52 * *(float *)(a3 + 316));
    *(float *)((char *)&v367[-15] + v55) = v61;
    v62 = (float)((float)(v273 * v53) + (float)(v271 * v54)) + (float)(v297 * *(float *)g4_m128_ptr<int32_t>(v42));
    v63 = (char *)v281 - (char *)(v361);
    v331 = v61;
    *(float *)((char *)&v368[-20] + v63) = v62;
    v64 = (float)((float)(v272 * v53) + (float)(v301 * v54)) + (float)(v293 * *(float *)g4_m128_ptr<int32_t>(v42));
    *(float *)((char *)&v368[-19] + v63) = v64;
    v65 = (float)((float)(v305 * v53) + (float)(v300 * v54)) + (float)(v290 * *(float *)g4_m128_ptr<int32_t>(v42));
    *(float *)((char *)&v368[-18] + v63) = v65;
    v66 = (float)((float)(v53 * v302) + (float)(v54 * v299)) + (float)(*(float *)g4_m128_ptr<int32_t>(v42) * v289);
    v67 = (float)(v334 * v334) * *(float *)(a3 + 256);
    *(float *)((char *)&v368[-17] + v63) = v66;
g4_m128_raw(v68) = LODWORD(v331);
    v69 = *(float *)(a3 + 352);
    *(float *)g4_m128_ptr<int32_t>(v68) = (float)((float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v68) * *(float *)g4_m128_ptr<int32_t>(v68))
                                                    * *(float *)(a3 + 264))
                                            + (float)((float)(v65 * v65) * v286))
                                    + (float)((float)((float)((float)(v314 * v314) * *(float *)(a3 + 260))
                                                    + (float)((float)(v64 * v64) * v287))
                                            + (float)(v67 + (float)((float)(v62 * v62) * v288))))
                            + v285;
    v368[v323 + 3] = *(float *)g4_m128_ptr<int32_t>(v68);
    v70 = _mm_cvtsi128_si32(v68);
    v71 = (2130706432 - v70) & ((v70 ^ (v70 + 2139095040)) >> 31);
    v5 += 96;
    v72 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v68)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v68) * *(float *)&v71)) * *(float *)&v71)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v68) * *(float *)&v71)) * *(float *)&v71);
    v73 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v68) * v72)) * v72;
g4_m128_raw(v74) = *(unsigned int *)(a3 + 356);
    v367[v323 + 2] = v73;
    v351[28] = v73;
    v75 = v74;
    v351[29] = *(float *)g4_m128_ptr<int32_t>(v68);
    v76 = *(float **)(v270 + 52);
    *(float *)g4_m128_ptr<int32_t>(v75) = *(float *)g4_m128_ptr<int32_t>(v74) - v76[5];
    v77 = v69 - v76[4];
    v78 = COERCE_FLOAT(_mm_cvtsi128_si32(v75));
    v309 = *(float *)(a3 + 360) - v76[6];
    v306 = v76[9];
    v303 = v76[10];
    *(float *)g4_m128_ptr<int32_t>(v68) = v345 * *(float *)(a3 + 368);
    v346 = v76[8];
    *(float *)g4_m128_ptr<int32_t>(v68) = (float)((float)((float)(v338 * *(float *)(a3 + 376)) + (float)(v316 * v303))
                                    + (float)(v309 * v351[2]))
                            + (float)((float)((float)((float)(v339 * *(float *)(a3 + 372)) + (float)(v291 * v306))
                                            + (float)(v78 * v351[1]))
                                    + (float)((float)(*(float *)g4_m128_ptr<int32_t>(v68) + (float)(v295 * v346))
                                            + (float)(v77 * *v351)));
    v79 = v283;
    *(float *)(v283 + 20) = (float)((float)((float)((float)(v331 * *(float *)(a3 + 376)) + (float)(v303 * v65))
                                          + (float)(v309 * *(float *)((char *)&v365[-10] + ((char *)v282 - (char *)v361))))
                                  + (float)((float)((float)((float)(v334 * *(float *)(a3 + 368)) + (float)(v346 * v62))
                                                  + (float)(*(float *)((char *)&v365[-12] + ((char *)v282 - (char *)v361)) * v77))
                                          + (float)((float)((float)(v314 * *(float *)(a3 + 372)) + (float)(v64 * v306))
                                                  + (float)(v78 * *(float *)((char *)&v365[-11] + ((char *)v282 - (char *)v361))))))
                          + *(float *)(v283 + 20);
    v284 += 24;
    *(float *)g4_m128_ptr<int32_t>(v68) = *(float *)g4_m128_ptr<int32_t>(v68) + *(float *)(v283 + 24);
    v323 += 40;
    v351 += 40;
    v276 += 160;
    v277 += 160;
    v278 += 25;
    v279 += 24;
    v280 += 40;
    v281 += 40;
    v282 += 40;
    v283 += 36;
    *(uint32_t *)(v79 + 24) =g4_m128_lane<int32_t>(v68, 0);
  }
  while ( v323 != 80 );
  v80 = *(float **)(a3 + 144);
  if ( v80 == *(float **)(a3 + 48) )
  {
    v247 = *(float *)(a3 + 268);
    v248 = v80[15];
    v81 = (float)((float)((float)((float)((float)(v366 * v382) * *(float *)(a3 + 256))
                                + (float)((float)(v368[0] * v385) * v80[12]))
                        + (float)((float)((float)(v365[0] * v379) * v247) + (float)((float)(v365[0] * v379) * v248)))
                + (float)((float)((float)((float)(v367[0] * v383) * *(float *)(a3 + 260))
                                + (float)((float)(v368[1] * v386) * v80[13]))
                        + (float)((float)(v247 * (float)(v365[1] * v380)) + (float)((float)(v365[1] * v380) * v248))))
        + (float)((float)((float)((float)(v367[1] * v384) * *(float *)(a3 + 264))
                        + (float)((float)(v368[2] * v387) * v80[14]))
                + (float)((float)((float)(v365[2] * v381) * v248) + (float)((float)(v365[2] * v381) * v247)));
  }
  else
  {
    v81 = (float)((float)((float)((float)(v365[1] * v380) * *(float *)(a3 + 268))
                        + (float)((float)(v367[0] * v383) * *(float *)(a3 + 260)))
                + (float)((float)((float)(v365[0] * v379) * *(float *)(a3 + 268))
                        + (float)((float)(v366 * v382) * *(float *)(a3 + 256))))
        + (float)((float)((float)(v367[1] * v384) * *(float *)(a3 + 264))
                + (float)((float)(v365[2] * v381) * *(float *)(a3 + 268)));
  }
  v332 = v81;
  v82 = (float *)v363;
  v83 = (float *)v364;
  v296 = v372;
  v84 = (float *)v361;
  v347 = a3;
  v294 = v391;
  v352 = a4;
  do
  {
    v85 = *(float *)(v352 + 16);
    if ( v85 != 0.0 )
    {
      v206 = *(float *)(a3 + 268) * v85;
      v207 = *(float **)(v347 + 48);
      v336 = *(float *)(a3 + 260) * v85;
      v208 = *(float *)(a3 + 256) * v85;
      v209 = *(float *)(a3 + 264) * v85;
      v210 = v207[12] * v85;
      v211 = v207[13] * v85;
      v212 = v207[14] * v85;
      v213 = v85 * v207[15];
      *(float *)(a3 + 224) = (float)(*v84 * v206) + *(float *)(a3 + 224);
      *(float *)(a3 + 228) = (float)(v84[1] * v206) + *(float *)(a3 + 228);
      *(float *)(a3 + 232) = (float)(v84[2] * v206) + *(float *)(a3 + 232);
      *(float *)(a3 + 236) = (float)(v84[3] * v206) + *(float *)(a3 + 236);
      v207[4] = v207[4] - (float)(*v84 * v213);
      v207[5] = v207[5] - (float)(v84[1] * v213);
      v214 = v209 * v82[1];
      v215 = v206 * v82[2];
      v216 = v208 * *(v82 - 1);
      v217 = v210 * *v83;
      v207[6] = v207[6] - (float)(v84[2] * v213);
      v218 = v84[3] * v213;
      v219 = v211 * v83[1];
      v220 = v212 * v83[2];
      v221 = v213 * v83[3];
      v207[7] = v207[7] - v218;
      v222 = v214 + *(float *)(a3 + 248);
      v223 = v215 + *(float *)(a3 + 252);
      v224 = (float)(v336 * *v82) + *(float *)(a3 + 244);
      *(float *)(a3 + 240) = v216 + *(float *)(a3 + 240);
      *(float *)(a3 + 248) = v222;
      *(float *)(a3 + 252) = v223;
      *(float *)(a3 + 244) = v224;
      v225 = v219 + v207[9];
      v226 = v220 + v207[10];
      v227 = v221 + v207[11];
      v207[8] = v217 + v207[8];
      v207[9] = v225;
      v207[10] = v226;
      v207[11] = v227;
    }
    v352 += 36;
    v347 += 96;
    v84 += 40;
    v82 += 40;
    v83 += 40;
  }
  while ( v84 != (float *)v398 );
  v86 = *(float *)(a3 + 164);
  v87 = *(float *)(a3 + 68) + v86;
  v88 = v86 * a2[52];
  v292 = 2;
  v89 = a2[28] * v87;
  v90 = v87 * a2[53];
  v91 = (float)(*(float *)(a3 + 68) * a2[27]) + v89;
  *(uint32_t *)(a4 + 8) = 0;
  *(uint32_t *)(a4 + 44) = 0;
  v298 = *a1;
  v348 = (float *)a4;
  v370 = v91;
  v307 = v365;
  v389 = v88 + v90;
  v310 = v368;
  v315 = &v366;
  v317 = v364;
  v324 = v362;
  v92 = (float *)v361;
  v93 = a3;
  while ( 1 )
  {
    v94 = *(float **)(v93 + 48);
    v95 = v4[57] - v94[5];
    v96 = v4[58] - v94[6];
    v97 = v4[56] - v94[4];
    v98 = v94[8];
    v340 = v94[10];
    v304 = v94[9];
    v99 = (float)((float)((float)(*(float *)(a3 + 248) * *(float *)&v362[v324 - v361 - 8])
                        + (float)(v340 * *(float *)&v364[v317 - v361 - 24]))
                + (float)(v92[2] * v96))
        + (float)((float)((float)((float)(*(float *)(a3 + 244) * *(float *)&v362[v324 - v361 - 12])
                                + (float)(v304 * *(float *)&v364[v317 - v361 - 28]))
                        + (float)(v92[1] * v95))
                + (float)((float)((float)(*(float *)(a3 + 240) * *(float *)&v362[v324 - v361 - 16])
                                + (float)(*(float *)&v364[v317 - v361 - 32] * v98))
                        + (float)(*v92 * v97)));
    v92[24] = v99;
    v100 = (float)((float)((float)((float)(*(float *)(a3 + 248) * *(float *)((char *)&v367[-15] + ((char *)v315 - (char *)v361)))
                                 + (float)(v340 * *(float *)((char *)&v368[-18] + ((char *)v310 - (char *)v361))))
                         + (float)(v96 * *(float *)((char *)&v365[-10] + ((char *)v307 - (char *)v361))))
                 + (float)((float)((float)((float)(*(float *)(a3 + 244)
                                                 * *(float *)((char *)&v367[-16] + ((char *)v315 - (char *)v361)))
                                         + (float)(v304 * *(float *)((char *)&v368[-19] + ((char *)v310 - (char *)v361))))
                                 + (float)(v95 * *(float *)((char *)&v365[-11] + ((char *)v307 - (char *)v361))))
                         + (float)((float)((float)(*(float *)(a3 + 240)
                                                 * *(float *)((char *)&v367[-17] + ((char *)v315 - (char *)v361)))
                                         + (float)(v98 * *(float *)((char *)&v368[-20] + ((char *)v310 - (char *)v361))))
                                 + (float)(v97 * *(float *)((char *)&v365[-12] + ((char *)v307 - (char *)v361))))))
         + (float)(0.25 * v348[5]);
    v92[26] = v100;
    v101 = *(float *)(v93 + 72);
    v102 = fabs(v92[27]) * v298;
    if ( *(uint8_t *)(v93 + 80) != 0 )
    {
      v103 = -v99;
      v104 = v92[31];
      v105 = (float)((float)((float)(0.5 * v348[6]) + v99) * (float)(v92[28] * v104)) * 0.5;
      v106 = (float)(*(float *)(v93 + 56) * v102) * v104;
      if ( fabs(v105) > v106 )
      {
        if ( v105 <= 0.0 )
          v105 = -v106;
        else
          v105 = (float)(*(float *)(v93 + 56) * v102) * v104;
      }
      v108 = __builtin_isnan(*(float *)(v93 + 60));
      v107 = *(float *)(v93 + 60) == 0.0;
      v109 = v103 - v105;
      v110 = *(float *)(v93 + 56);
      v101 = 0.0;
      v92[25] = v109;
      if ( !v108 )
      {
LABEL_19:
        if ( v107 )
          goto LABEL_20;
      }
    }
    else
    {
      v103 = *v348;
      v92[25] = *v348;
      v109 = v103;
      v348[6] = 0.0;
      v107 = *(float *)(v93 + 60) == 0.0;
      v110 = *(float *)(v93 + 56);
      if ( !__builtin_isnan(*(float *)(v93 + 60)) )
        goto LABEL_19;
    }
    v111 = (float)(v103 * v103) + (float)(v100 * v100);
    v112 = fsqrt(v111);
    if ( __builtin_isnan(v112) )
    {
      v357 = sqrtf(v111);
      v112 = v357;
    }
    v110 = fmaxf(0.0, fminf(v110 + (float)(v112 * *(float *)(v93 + 60)), *(float *)(v93 + 64)));
LABEL_20:
    v113 = v102 * v110;
    v93 += 96;
    v114 = v109 * v92[30];
    v324 += 160;
    v317 += 160;
    v92 += 40;
    *(v92 - 6) = v113;
    v315 += 40;
    *(v92 - 5) = v113;
    v310 += 40;
    v307 += 40;
    v348 += 9;
    v115 = 1.0 / (float)(v113 + 1.4210855e-14f);
    v116 = *a1;
    *(v92 - 8) = v114 + (float)(v101 * *a1);
    *(v92 - 4) = v115;
    *(v92 - 3) = v115;
    if ( --v292 == 0 )
      break;
    v298 = v116;
    v4 = (float *)a3;
  }
  v117 = (float *)a3;
  v118 = *(float *)(a3 + 76);
  if ( (float)(*(float *)(a3 + 172) + v118) > 0.0 )
  {
    v119 = (float)(fabs(*(float *)(a3 + 68)) + fabs(*(float *)(a3 + 164))) * a2[3];
    v120 = v116 * v119;
    if ( v120 == 0.0 )
    {
      v123 = 10000.0;
      goto LABEL_31;
    }
    v121 = fmaxf(v118, 0.0);
    if ( v120 >= v121 )
    {
      v122 = 1.0;
      goto LABEL_26;
    }
    v122 = v121 / v120;
    if ( v122 <= 10000.0 )
    {
LABEL_26:
      v123 = v122;
      v124 = v119 * *a1;
      v125 = v124 == 0.0;
      if ( !__builtin_isnan(v124) )
        goto LABEL_32;
    }
    else
    {
      v123 = 10000.0;
LABEL_31:
      v124 = v119 * *a1;
      v125 = v124 == 0.0;
      if ( !__builtin_isnan(v124) )
      {
LABEL_32:
        if ( v125 )
        {
          v128 = 10000.0;
          goto LABEL_34;
        }
      }
    }
    v126 = fmaxf(*(float *)(a3 + 172), 0.0);
    if ( v124 >= v126 )
    {
      v127 = 1.0;
LABEL_29:
      v128 = v127;
      goto LABEL_34;
    }
    v127 = v126 / v124;
    if ( v127 <= 10000.0 )
      goto LABEL_29;
    v128 = 10000.0;
LABEL_34:
    v129 = fsqrt(v123 * v128);
    v296 = v296 * v123;
    v294 = v294 * v128;
    if ( __builtin_isnan(v129) )
    {
      v356 = sqrtf(v123 * v128);
      v117 = (float *)a3;
      v129 = v356;
    }
    v332 = v129 * v332;
    v372 = v123 * v372;
    v391 = v128 * v391;
    v371 = v371 / v123;
    v390 = v390 / v128;
  }
g4_m128_raw(v130) = LODWORD(v294);
  *(float *)g4_m128_ptr<int32_t>(v130) = (float)(v294 * v296) - (float)(v332 * v332);
  if ( fabs(*(float *)g4_m128_ptr<int32_t>(v130)) > 0.0 )
  {
    v228 = _mm_cvtsi128_si32(v130);
    v229 = (2130706432 - v228) & ((v228 ^ (v228 + 2139095040)) >> 31);
    v230 = (float)(2.0
                 - (float)(*(float *)g4_m128_ptr<int32_t>(v130)
                         * (float)((float)(2.0
                                         - (float)(*(float *)g4_m128_ptr<int32_t>(v130)
                                                 * (float)((float)(2.0
                                                                 - (float)(*(float *)g4_m128_ptr<int32_t>(v130) * *(float *)&v229))
                                                         * *(float *)&v229)))
                                 * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v130) * *(float *)&v229))
                                         * *(float *)&v229))))
         * (float)((float)(2.0
                         - (float)(*(float *)g4_m128_ptr<int32_t>(v130)
                                 * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v130) * *(float *)&v229))
                                         * *(float *)&v229)))
                 * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v130) * *(float *)&v229)) * *(float *)&v229));
    v132 = (float)-v332 * v230;
    v133 = v294 * v230;
    v131 = v230 * v296;
  }
  else
  {
    v131 = 1.0;
    v132 = 0.0;
    v133 = 1.0;
  }
  v375[0] = -(float)((float)(v133 * v369) + (float)(v388 * v132));
  v394 = -(float)((float)(v132 * v369) + (float)(v388 * v131));
  v134 = (float)((float)(v374 * v376) * (float)(v374 * v376))
       + (float)((float)(v375[0] * v377) * (float)(v375[0] * v377));
  v135 = (float)((float)(v393 * v395) * (float)(v393 * v395)) + (float)((float)(v394 * v396) * (float)(v394 * v396));
  if ( fabs(v368[4]) >= v117[48] )
  {
    *(uint32_t *)(a4 + 20) = 0;
    *(uint32_t *)(a4 + 24) = 0;
    *(uint32_t *)(a4 + 56) = 0;
    *(uint32_t *)(a4 + 60) = 0;
  }
  if ( v134 > 1.0 )
  {
LABEL_42:
    v136 = (float)(1.0 / v134) * *(float *)(a4 + 24);
    *(float *)(a4 + 20) = *(float *)(a4 + 20) * (float)(1.0 / v134);
    *(float *)(a4 + 24) = v136;
    if ( v135 > 1.0 )
      goto LABEL_43;
    goto LABEL_44;
  }
  if ( v135 <= 1.0 )
  {
    v237 = a2;
    v238 = (float *)v361;
    v239 = 2;
    while ( 1 )
    {
      v240 = v238[33] * v238[37];
      v241 = v238[32] * v238[36];
      if ( (float)((float)(v240 * v240) + (float)(v241 * v241)) >= 1.0 )
        break;
      v242 = (float)-v238[26] * v238[28];
      v238[33] = v242;
LABEL_114:
      v237 += 25;
      --v239;
      v238 += 40;
      v388 = (float)(v242 * v332) + v388;
      if ( v239 == 0 )
      {
        v177 = v375[0];
        v174 = a4;
        v243 = v377 * v375[0];
        v175 = v374;
        v244 = v396;
        *(uint32_t *)a4 = 0;
        v245 = v395;
        *(uint32_t *)(a4 + 36) = 0;
        *(float *)(a4 + 28) = v243;
        *(uint32_t *)(a4 + 4) = 0;
        v246 = v376;
        *(uint32_t *)(a4 + 40) = 0;
        *(float *)(a4 + 32) = v246 * v175;
        v178 = v394;
        *(float *)(a4 + 64) = v244 * v394;
        v176 = v393;
        *(float *)(a4 + 68) = v245 * v393;
        goto LABEL_75;
      }
    }
    v249 = v240 * v237[21];
    v250 = 0.0;
    v251 = (float)(v249 * v249) + (float)((float)(v237[4] * v241) * (float)(v237[4] * v241));
    v252 = 0.0;
    if ( v251 <= 1.0 )
    {
      v265 = v237[20];
      v266 = v249 * v265;
      v355 = v249 * v265;
      v267 = (float)(v266 * v266) + (float)((float)(v237[5] * v241) * (float)(v237[5] * v241));
      if ( v267 <= 1.0 )
      {
        v250 = v266 * v265;
        v249 = v250;
        v252 = (float)(v250 * v250) + (float)((float)(v237[6] * v241) * (float)(v237[6] * v241));
        if ( v252 <= 1.0 )
        {
          v249 = v250 * v265;
          v251 = (float)(v249 * v249) + (float)((float)(v237[7] * v241) * (float)(v237[7] * v241));
          if ( v251 <= 1.0 )
          {
            v250 = v249 * v265;
            v252 = (float)(v250 * v250) + (float)((float)(v237[8] * v241) * (float)(v237[8] * v241));
            if ( v252 <= 1.0 )
            {
              v249 = v250 * v265;
              v251 = (float)(v249 * v249) + (float)((float)(v237[9] * v241) * (float)(v237[9] * v241));
              if ( v251 > 1.0 )
                goto LABEL_118;
              v250 = v249 * v265;
              v252 = (float)(v250 * v250) + (float)((float)(v237[10] * v241) * (float)(v237[10] * v241));
              if ( v252 <= 1.0 )
              {
                v249 = v250 * v265;
                v251 = (float)(v249 * v249) + (float)((float)(v237[11] * v241) * (float)(v237[11] * v241));
                if ( v251 > 1.0 )
                  goto LABEL_118;
                v250 = v249 * v265;
                v252 = (float)(v250 * v250) + (float)((float)(v237[12] * v241) * (float)(v237[12] * v241));
                if ( v252 <= 1.0 )
                {
                  v249 = v250 * v265;
                  v251 = (float)(v249 * v249) + (float)((float)(v237[13] * v241) * (float)(v237[13] * v241));
                  if ( v251 > 1.0 )
                    goto LABEL_118;
                  v250 = v249 * v265;
                  v252 = (float)(v250 * v250) + (float)((float)(v237[14] * v241) * (float)(v237[14] * v241));
                  if ( v252 <= 1.0 )
                  {
                    v249 = v250 * v265;
                    v251 = (float)(v249 * v249) + (float)((float)(v237[15] * v241) * (float)(v237[15] * v241));
                    if ( v251 > 1.0 )
                      goto LABEL_118;
                    v250 = v249 * v265;
                    v252 = (float)(v250 * v250) + (float)((float)(v237[16] * v241) * (float)(v237[16] * v241));
                    if ( v252 <= 1.0 )
                    {
                      v249 = v250 * v265;
                      v251 = (float)(v249 * v249) + (float)((float)(v237[17] * v241) * (float)(v237[17] * v241));
                      if ( v251 > 1.0 )
                        goto LABEL_118;
                      v250 = v249 * v265;
                      v252 = (float)(v250 * v250) + (float)((float)(v237[18] * v241) * (float)(v237[18] * v241));
                      if ( v252 <= 1.0 )
                      {
                        v249 = v265 * v250;
                        v251 = (float)(v249 * v249) + (float)((float)(v241 * v237[19]) * (float)(v241 * v237[19]));
                        goto LABEL_118;
                      }
                    }
                  }
                }
              }
            }
            v268 = v249;
            v249 = v250;
            v250 = v268;
            v269 = v252;
            v252 = v251;
            v251 = v269;
          }
        }
        else
        {
          v250 = v355;
          v251 = v252;
          v252 = v267;
        }
      }
      else
      {
        v250 = v249;
        v252 = (float)(v249 * v249) + (float)((float)(v237[4] * v241) * (float)(v237[4] * v241));
        v249 = v249 * v265;
        v251 = v267;
      }
    }
LABEL_118:
    v253 = fsqrt(v251);
    if ( __builtin_isnan(v253) )
    {
      v321 = v117;
      v328 = v239;
      v359 = sqrtf(v251);
      v117 = v321;
      v253 = v359;
      v239 = v328;
    }
    v254 = fsqrt(v252);
    v255 = v253 - 1.0;
    if ( __builtin_isnan(v254) )
    {
      v322 = v117;
      v329 = v239;
      v360 = sqrtf(v252);
      v117 = v322;
      v254 = v360;
      v239 = v329;
    }
    v256 = v254 - 1.0;
    if ( fabs(v255 - v256) <= 0.00000011920929f )
      v257 = 8388608.0;
    else
      v257 = 1.0 / (float)(v255 - v256);
    v258 = v255 * v257;
    v259 = (float)-v256 * v257;
    v260 = -1.1f;
    v261 = (float)(v259 * v249) + (float)(v258 * v250);
    if ( v261 >= -1.1f )
      v260 = fminf(1.1f, v261);
    v262 = v238[33];
    v263 = fabs(v260 * v238[35]);
    v264 = -v263;
    if ( (float)-v263 <= v262 )
      v264 = fminf(v263, v262);
    v238[33] = v264;
    v242 = v264;
    goto LABEL_114;
  }
  if ( v134 > 1.0 )
    goto LABEL_42;
LABEL_43:
  v137 = (float)(1.0 / v135) * *(float *)(a4 + 60);
  *(float *)(a4 + 56) = *(float *)(a4 + 56) * (float)(1.0 / v135);
  *(float *)(a4 + 60) = v137;
LABEL_44:
  v138 = 2;
  v399 = v117;
  v335 = v134 > v135;
  v139 = v134 <= v135;
  while ( 2 )
  {
    v140 = (float *)&v361[160 * v139];
    v141 = (float)-v140[26] * v140[28];
    v142 = (float *)(a4 + 36 * v139);
    v143 = v140[37] * v141;
    v140[33] = v141;
    if ( v143 < -1.8446726e19f )
    {
      v144 = 3.4028172e38f;
      v143 = -1.8446726e19f;
    }
    else if ( v143 <= 1.8446726e19f )
    {
      v144 = v143 * v143;
    }
    else
    {
      v144 = 3.4028172e38f;
      v143 = 1.8446726e19f;
    }
    v145 = v140[36] * v140[32];
    v341 = v140[32];
    if ( v145 < -1.8446726e19f )
    {
      v146 = 3.4028172e38f;
      v145 = -1.8446726e19f;
    }
    else if ( v145 <= 1.8446726e19f )
    {
      v146 = v145 * v145;
    }
    else
    {
      v146 = 3.4028172e38f;
      v145 = 1.8446726e19f;
    }
    v142[7] = v143;
    v142[8] = v145;
    if ( (float)(v146 + v144) < 1.0 )
    {
      v140[38] = 0.0;
      v168 = v141;
    }
    else
    {
      v147 = &a2[25 * v139 + 4];
      v148 = v143 * v147[17];
      v353 = *v147 * v145;
      v149 = (float)(v148 * v148) + (float)(v353 * v353);
      if ( v149 > 1.0 )
      {
        v150 = 0.0;
        v349 = 0.0;
        v151 = 0.0;
        goto LABEL_56;
      }
      v231 = v147[16];
      v150 = v148 * v231;
      v318 = v147[1] * v145;
      v325 = (float)(v318 * v318) + (float)(v150 * v150);
      if ( v325 > 1.0 )
      {
        v349 = *v147 * v145;
        v151 = (float)(v148 * v148) + (float)(v353 * v353);
        v150 = v148;
        v149 = v325;
        v148 = v148 * v231;
        v353 = v147[1] * v145;
        goto LABEL_56;
      }
      v232 = v147[2] * v145;
      v233 = v150 * v231;
      v349 = v232;
      v151 = (float)(v233 * v233) + (float)(v232 * v232);
      if ( v151 > 1.0 )
      {
        v149 = (float)(v233 * v233) + (float)(v232 * v232);
        v353 = v147[2] * v145;
        v148 = v150 * v231;
        v151 = (float)(v318 * v318) + (float)(v150 * v150);
        v349 = v147[1] * v145;
        goto LABEL_56;
      }
      v148 = v231 * v233;
      v353 = v147[3] * v145;
      v149 = (float)(v148 * v148) + (float)(v353 * v353);
      v150 = v150 * v231;
      if ( v149 <= 1.0 )
      {
        v150 = v148 * v231;
        v349 = v147[4] * v145;
        v151 = (float)(v150 * v150) + (float)(v349 * v349);
        if ( v151 > 1.0 )
          goto LABEL_91;
        v148 = v150 * v231;
        v353 = v147[5] * v145;
        v149 = (float)(v148 * v148) + (float)(v353 * v353);
        if ( v149 <= 1.0 )
        {
          v150 = v148 * v231;
          v349 = v147[6] * v145;
          v151 = (float)(v150 * v150) + (float)(v349 * v349);
          if ( v151 > 1.0 )
            goto LABEL_91;
          v148 = v150 * v231;
          v353 = v147[7] * v145;
          v149 = (float)(v148 * v148) + (float)(v353 * v353);
          if ( v149 > 1.0 )
            goto LABEL_56;
          v150 = v148 * v231;
          v349 = v147[8] * v145;
          v151 = (float)(v150 * v150) + (float)(v349 * v349);
          if ( v151 > 1.0 )
            goto LABEL_91;
          v148 = v150 * v231;
          v353 = v147[9] * v145;
          v149 = (float)(v148 * v148) + (float)(v353 * v353);
          if ( v149 > 1.0 )
            goto LABEL_56;
          v150 = v148 * v231;
          v349 = v147[10] * v145;
          v151 = (float)(v150 * v150) + (float)(v349 * v349);
          if ( v151 > 1.0 )
            goto LABEL_91;
          v148 = v150 * v231;
          v353 = v147[11] * v145;
          v149 = (float)(v148 * v148) + (float)(v353 * v353);
          if ( v149 > 1.0 )
            goto LABEL_56;
          v150 = v148 * v231;
          v349 = v147[12] * v145;
          v151 = (float)(v150 * v150) + (float)(v349 * v349);
          if ( v151 > 1.0 )
            goto LABEL_91;
          v148 = v150 * v231;
          v353 = v147[13] * v145;
          v149 = (float)(v148 * v148) + (float)(v353 * v353);
          if ( v149 > 1.0 )
            goto LABEL_56;
          v150 = v148 * v231;
          v349 = v147[14] * v145;
          v151 = (float)(v150 * v150) + (float)(v349 * v349);
          if ( v151 > 1.0 )
          {
LABEL_91:
            v234 = v353;
            v235 = v151;
            v151 = v149;
            v149 = v235;
            v353 = v349;
            v236 = v150;
            v349 = v234;
            v150 = v148;
            v148 = v236;
            goto LABEL_56;
          }
          v148 = v231 * v150;
          v353 = v145 * v147[15];
          v149 = (float)(v148 * v148) + (float)(v353 * v353);
        }
      }
LABEL_56:
      v152 = fsqrt(v149);
      if ( __builtin_isnan(v152) )
      {
        v312 = v142;
        v320 = v140;
        v327 = sqrtf(v149);
        v142 = v312;
        v152 = v327;
        v140 = v320;
      }
      v153 = fsqrt(v151);
      v154 = v152 - 1.0;
      if ( __builtin_isnan(v153) )
      {
        v311 = v142;
        v319 = v140;
        v326 = sqrtf(v151);
        v142 = v311;
        v153 = v326;
        v140 = v319;
      }
      v155 = v153 - 1.0;
      if ( fabs(v154 - v155) <= 0.00000011920929f )
        v156 = 8388608.0;
      else
        v156 = 1.0 / (float)(v154 - v155);
      v157 = v154 * v156;
      v158 = (float)-v155 * v156;
      v159 = -1.1f;
      v160 = (float)(v148 * v158) + (float)(v150 * v157);
      if ( v160 < -1.1f )
        v161 = -1.1f;
      else
        v161 = fminf(1.1f, v160);
      v162 = (float)(v158 * v353) + (float)(v157 * v349);
      if ( v162 >= -1.1f )
        v159 = fminf(1.1f, v162);
      v163 = v140[34];
      v164 = v140[26] * v140[26];
      v165 = v341 - (float)(v159 * v163);
      v140[32] = v159 * v163;
      v166 = v140[24];
      v167 = v140[35];
      v168 = v161 * v167;
      v140[38] = v165;
      v169 = (float)(v166 * v166) + v164;
      v170 = v141 - v168;
      v140[33] = v168;
      if ( fabs(v169) <= 0.00000011920929f )
        v171 = 8388608.0;
      else
        v171 = 1.0 / v169;
      v172 = (float)((float)((float)((float)(v165 * v140[31]) * v163) * (float)((float)(v165 * v140[31]) * v163))
                   + (float)((float)((float)(v170 * v140[29]) * v167) * (float)((float)(v170 * v140[29]) * v167)))
           * v171;
      v173 = fsqrt(v172);
      if ( __builtin_isnan(v173) )
      {
        v350 = v142;
        v358 = sqrtf(v172);
        v142 = v350;
        v173 = v358;
      }
      v142[2] = v173;
    }
    --v138;
    *(float *)&v398[160 * v335 - 216] = (float)(v168 * v332) + *(float *)&v398[160 * v335 - 216];
    if ( v138 != 0 )
    {
      v139 = v335;
      continue;
    }
    break;
  }
  v174 = a4;
  v117 = v399;
  v175 = v374;
  v176 = v393;
  v177 = v375[0];
  *(float *)a4 = v378 * v373;
  *(float *)(a4 + 36) = v397 * v392;
  *(float *)(a4 + 4) = v369;
  *(float *)(a4 + 40) = v388;
  v178 = v394;
LABEL_75:
  *(float *)(v174 + 16) = v175;
  v354 = v117;
  *(float *)(v174 + 52) = v176;
  v179 = v365;
  v180 = v367;
  v181 = v368;
  *(float *)(a4 + 12) = v177 * a1[1];
  *(float *)(a4 + 48) = v178 * a1[1];
  result = v117;
  do
  {
    v183 = *((float **)result + 12);
    v184 = *(float *)((char *)v375  + ((uintptr_t)((char *)v179) - (uintptr_t)(char *)(v365)));
    v185 = v117[67] * v184;
    v186 = v184;
    v179 += 40;
    v180 += 40;
    v181 += 40;
    v342 = v117[65] * v184;
    v187 = v183[12] * v184;
    v188 = v117[66] * v184;
    v189 = v183[13] * v184;
    v190 = v183[14] * v184;
    v191 = v184 * v183[15];
    v117[56] = (float)(v185 * *(v179 - 40)) + v117[56];
    v192 = v186 * v117[64];
    v117[57] = (float)(*(v179 - 39) * v185) + v117[57];
    v117[58] = (float)(*(v179 - 38) * v185) + v117[58];
    v117[59] = (float)(*(v179 - 37) * v185) + v117[59];
    v183[4] = v183[4] - (float)(*(v179 - 40) * v191);
    v193 = v188 * *(v180 - 39);
    v194 = v185 * *(v180 - 38);
    v195 = v192 * *(v180 - 41);
    v196 = v187 * *(v181 - 40);
    v197 = v189 * *(v181 - 39);
    v198 = v190 * *(v181 - 38);
    v183[5] = v183[5] - (float)(*(v179 - 39) * v191);
    v183[6] = v183[6] - (float)(*(v179 - 38) * v191);
    v199 = *(v179 - 37) * v191;
    v200 = v191 * *(v181 - 37);
    v183[7] = v183[7] - v199;
    v201 = v193 + v117[62];
    v202 = v194 + v117[63];
    v203 = (float)(v342 * *(v180 - 40)) + v117[61];
    v117[60] = v195 + v117[60];
    v117[62] = v201;
    v117[63] = v202;
    v117[61] = v203;
    v183[8] = v196 + v183[8];
    v354 += 24;
    v204 = v198 + v183[10];
    v205 = v200 + v183[11];
    v183[9] = v197 + v183[9];
    v183[10] = v204;
    v183[11] = v205;
    result = v354;
  }
  while ( v354 != v117 + 48 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkJacobianStiffSpringChainSchema_getJacobians  (binary VA: 0x1afa5d0)
// Original: hkJacobianStiffSpringChainSchema_getJacobians
// ----------------------------------------------------------------------------
int hkJacobianStiffSpringChainSchema_getJacobians(int a1)
{
  return a1 + 32;
}

// ----------------------------------------------------------------------------
// Function: hkJacobianBallSocketChainSchema_getJacobians  (binary VA: 0x1afa5e0)
// Original: hkJacobianBallSocketChainSchema_getJacobians
// ----------------------------------------------------------------------------
int hkJacobianBallSocketChainSchema_getJacobians(int a1)
{
  return a1 + 32;
}

// ----------------------------------------------------------------------------
// Function: hkJacobianStabilizedBallSocketChainSchema_getJacobians  (binary VA: 0x1afa5f0)
// Original: hkJacobianStabilizedBallSocketChainSchema_getJacobians
// ----------------------------------------------------------------------------
int hkJacobianStabilizedBallSocketChainSchema_getJacobians(int a1)
{
  return a1 + 32;
}

// ----------------------------------------------------------------------------
// Function: hkJacobianPoweredChainSchema_getLinearJacobians  (binary VA: 0x1afa600)
// Original: hkJacobianPoweredChainSchema_getLinearJacobians
// ----------------------------------------------------------------------------
int hkJacobianPoweredChainSchema_getLinearJacobians(int a1)
{
  return a1 + 32;
}

// ----------------------------------------------------------------------------
// Function: hkJacobianPoweredChainSchema_getAngularJacobians  (binary VA: 0x1afa610)
// Original: hkJacobianPoweredChainSchema_getAngularJacobians
// ----------------------------------------------------------------------------
int hkJacobianPoweredChainSchema_getAngularJacobians(int a1, int a2)
{
  return a1 + 144 * a2 + 32;
}

// ----------------------------------------------------------------------------
// Function: hkJacobianStabilizedBallSocketChainSchema_init  (binary VA: 0x1afa630)
// Original: hkJacobianStabilizedBallSocketChainSchema_init
// ----------------------------------------------------------------------------
int hkJacobianStabilizedBallSocketChainSchema_init(int a1, int a2, int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
  int result;
  __m128 v8;
  int v9;

  *(uint16_t *)(a1 + 4) = a2;
  result = a1 + 32;
g4_m128_lane<uint64_t>(v8, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(G4_BITCAST<__m128>(a4), G4_BITCAST<__m128>(a5)), 0);
  *(uint32_t *)(a1 + 8) = (16 * ((uint16_t)a2 + 1)
                       + ((uint16_t)a2 << 6)
                       + 32
                       + 4 * ((uint16_t)a2 + 1)
                       + 15)
                      & 0x3FFFFF0;
g4_m128_lane<uint64_t>(v8, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(G4_BITCAST<__m128>(a6), G4_BITCAST<__m128>(a7)), 0);
  _mm_storel_ps((double *)(a1 + 12), v8);
  _mm_storeh_ps((double *)(a1 + 20), v8);
  v9 = 0;
  if ( a2 >= 0 )
  {
    do
    {
      *(uint32_t *)(16 * ((uint16_t)a2 + 1) + a1 + 32 + ((uint16_t)a2 << 6) + 4 * v9) = *(uint32_t *)(a3 + 4 * v9);
      ++v9;
    }
    while ( v9 != a2 + 1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkPoweredChain_DisableMotorInMatrixRow_ThisConstraint  (binary VA: 0x1afa6d0)
// Original: hkPoweredChain_DisableMotorInMatrixRow_ThisConstraint
// ----------------------------------------------------------------------------
uint32_t * hkPoweredChain_DisableMotorInMatrixRow_ThisConstraint(char *a1, char a2, int a3, uint32_t *a4)
{
  uint32_t *result;
  char v5;
  g4_int128_t v6;
  g4_int128_t v7;
  g4_int128_t v8;
  g4_int128_t v9;
  g4_int128_t v10;
  g4_int128_t v11;

  result = a4;
  v5 = *a1;
  if ( *a1 != 0 )
  {
    LODWORD(v7) = a4[25];
    LODWORD(v6) = a4[24];
    DWORD1(v6) = a4[28];
    DWORD2(v6) = a4[32];
    DWORD1(v7) = a4[29];
    DWORD2(v7) = a4[33];
    LODWORD(v8) = a4[26];
    DWORD1(v8) = a4[30];
    DWORD2(v8) = a4[34];
    DWORD2(v9) = a4[44];
    LODWORD(v9) = a4[36];
    DWORD1(v9) = a4[40];
    LODWORD(v10) = a4[37];
    DWORD1(v10) = a4[41];
    DWORD2(v10) = a4[45];
    LODWORD(v11) = a4[38];
    DWORD1(v11) = a4[42];
    DWORD2(v11) = a4[46];
    if ( (*a1 & 3) != 0 )
    {
      v6 = 0;
      if ( a2 == 0 )
      {
        LODWORD(v9) = 1065353216;
        *(uint64_t *)((char *)&v9 + 4) = 0;
        if ( (v5 & 0xC) == 0 )
          goto LABEL_8;
        goto LABEL_6;
      }
      v9 = 0;
    }
    if ( (v5 & 0xC) != 0 )
    {
LABEL_6:
      v7 = 0;
      if ( a2 == 0 )
      {
        LODWORD(v10) = 0;
        *(uint64_t *)((char *)&v10 + 4) = 1065353216;
        if ( (v5 & 0x30) == 0 )
          goto LABEL_9;
        goto LABEL_11;
      }
      v10 = 0;
    }
LABEL_8:
    if ( (v5 & 0x30) == 0 )
    {
LABEL_9:
      a4[26] = (uint32_t)(uintptr_t)(v8);
      a4[27] = (uint32_t)(uintptr_t)(v8);
      a4[28] = DWORD1(v6);
      a4[24] = (uint32_t)(uintptr_t)(v6);
      a4[29] = DWORD1(v7);
      a4[30] = DWORD1(v8);
      a4[31] = DWORD1(v8);
      a4[25] = (uint32_t)(uintptr_t)(v7);
      a4[32] = DWORD2(v6);
      a4[38] = (uint32_t)(uintptr_t)(v11);
      a4[39] = (uint32_t)(uintptr_t)(v11);
      a4[33] = DWORD2(v7);
      a4[36] = (uint32_t)(uintptr_t)(v9);
      a4[40] = DWORD1(v9);
      a4[34] = DWORD2(v8);
      a4[35] = DWORD2(v8);
      a4[37] = (uint32_t)(uintptr_t)(v10);
      a4[41] = DWORD1(v10);
      a4[42] = DWORD1(v11);
      a4[43] = DWORD1(v11);
      a4[44] = DWORD2(v9);
      a4[45] = DWORD2(v10);
      a4[46] = DWORD2(v11);
      a4[47] = DWORD2(v11);
      return result;
    }
LABEL_11:
    v8 = 0;
    if ( a2 != 0 )
    {
      v11 = 0;
    }
    else
    {
      LODWORD(v11) = 0;
      *(uint64_t *)((char *)&v11 + 4) = 0x3F80000000000000LL;
    }
    goto LABEL_9;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkPoweredChain_DisableMotorInMatrixRow_NextConstraint  (binary VA: 0x1afa9f0)
// Original: hkPoweredChain_DisableMotorInMatrixRow_NextConstraint
// ----------------------------------------------------------------------------
uint32_t * hkPoweredChain_DisableMotorInMatrixRow_NextConstraint(char *a1, uint32_t *a2)
{
  uint32_t *result;
  char v3;

  result = a2;
  if ( *a1 != 0 )
  {
    if ( (*a1 & 3) != 0 )
    {
      a2[12] = 0;
      a2[13] = 0;
      a2[14] = 0;
      a2[15] = 0;
      a2[36] = 0;
      a2[37] = 0;
      a2[38] = 0;
      a2[39] = 0;
    }
    v3 = *a1;
    if ( (*a1 & 0xC) != 0 )
    {
      a2[16] = 0;
      a2[17] = 0;
      a2[18] = 0;
      a2[19] = 0;
      a2[40] = 0;
      a2[41] = 0;
      a2[42] = 0;
      a2[43] = 0;
      v3 = *a1;
    }
    if ( (v3 & 0x30) != 0 )
    {
      a2[20] = 0;
      a2[21] = 0;
      a2[22] = 0;
      a2[23] = 0;
      a2[44] = 0;
      a2[45] = 0;
      a2[46] = 0;
      a2[47] = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkPoweredChain_ComputeConstraintMatrixLuDecomposition_ForOneRow  (binary VA: 0x1afaaf0)
// Original: hkPoweredChain_ComputeConstraintMatrixLuDecomposition_ForOneRow
// ----------------------------------------------------------------------------
uint32_t * hkPoweredChain_ComputeConstraintMatrixLuDecomposition_ForOneRow(char a1, int a2, char *a3, hkMatrix3f::Self *a4, uint32_t *a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  int v16;
  float v17; // xmm0_4
  float v18; // xmm1_4
  int v19;
  int v20;
  typedef uint32_t _g4_t_v22[48];
  typedef uint32_t _g4_t_v23[48];
  typedef uint8_t _g4_t_v24[192];
  typedef uint32_t _g4_t_v25[51];
  enum : size_t {
    _g4_s0 = 848u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (192u + sizeof(_g4_t_v23)) > _g4_s1 ? (192u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (384u + sizeof(_g4_t_v24)) > _g4_s2 ? (384u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (576u + sizeof(_g4_t_v25)) > _g4_s3 ? (576u + sizeof(_g4_t_v25)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 192u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 384u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 576u);

  std::memcpy(v22, (const void *)(a2 + 576), sizeof(v22));
  std::memcpy(v23, (const void *)(a2 + 768), sizeof(v23));
  hkPoweredChain_DisableMotorInMatrixRow_ThisConstraint(a3, a1, (int)(uintptr_t)(v22), v23);
  hkPoweredChain_DisableMotorInMatrixRow_NextConstraint(a3, a4);
  hkMatrix6fSetTranspose((hkMatrix3f::Self *)a2, a4);
  hkMatrix6fSetMul(v24, a2, *a5);
  *(uint32_t *)(a2 + 192) = v22[0];
  *(uint32_t *)(a2 + 196) = v22[1];
  *(uint32_t *)(a2 + 200) = v22[2];
  *(uint32_t *)(a2 + 204) = v22[3];
  *(uint32_t *)(a2 + 208) = v22[4];
  *(uint32_t *)(a2 + 212) = v22[5];
  *(uint32_t *)(a2 + 216) = v22[6];
  *(uint32_t *)(a2 + 220) = v22[7];
  *(uint32_t *)(a2 + 224) = v22[8];
  *(uint32_t *)(a2 + 228) = v22[9];
  *(uint32_t *)(a2 + 232) = v22[10];
  *(uint32_t *)(a2 + 236) = v22[11];
  *(uint32_t *)(a2 + 240) = v22[12];
  *(uint32_t *)(a2 + 244) = v22[13];
  *(uint32_t *)(a2 + 248) = v22[14];
  *(uint32_t *)(a2 + 252) = v22[15];
  *(uint32_t *)(a2 + 256) = v22[16];
  *(uint32_t *)(a2 + 260) = v22[17];
  *(uint32_t *)(a2 + 264) = v22[18];
  *(uint32_t *)(a2 + 268) = v22[19];
  *(uint32_t *)(a2 + 272) = v22[20];
  *(uint32_t *)(a2 + 276) = v22[21];
  *(uint32_t *)(a2 + 280) = v22[22];
  *(uint32_t *)(a2 + 284) = v22[23];
  *(uint32_t *)(a2 + 288) = v22[24];
  *(uint32_t *)(a2 + 292) = v22[25];
  *(uint32_t *)(a2 + 296) = v22[26];
  *(uint32_t *)(a2 + 300) = v22[27];
  *(uint32_t *)(a2 + 304) = v22[28];
  *(uint32_t *)(a2 + 308) = v22[29];
  *(uint32_t *)(a2 + 312) = v22[30];
  *(uint32_t *)(a2 + 316) = v22[31];
  v5 = v22[33];
  *(uint32_t *)(a2 + 320) = v22[32];
  *(uint32_t *)(a2 + 324) = v5;
  v6 = v22[34];
  *(uint32_t *)(a2 + 332) = v22[35];
  v7 = v22[37];
  *(uint32_t *)(a2 + 328) = v6;
  *(uint32_t *)(a2 + 340) = v7;
  v8 = v22[39];
  *(uint32_t *)(a2 + 336) = v22[36];
  *(uint32_t *)(a2 + 348) = v8;
  v9 = v22[41];
  *(uint32_t *)(a2 + 344) = v22[38];
  *(uint32_t *)(a2 + 356) = v9;
  v10 = v22[43];
  *(uint32_t *)(a2 + 352) = v22[40];
  *(uint32_t *)(a2 + 364) = v10;
  v11 = v22[45];
  *(uint32_t *)(a2 + 360) = v22[42];
  *(uint32_t *)(a2 + 372) = v11;
  v12 = v22[47];
  *(uint32_t *)(a2 + 368) = v22[44];
  *(uint32_t *)(a2 + 380) = v12;
  *(uint32_t *)(a2 + 376) = v22[46];
  hkMatrix6fSub(a2 + 192, v24);
  v13 = fmaxf(*(float *)(a2 + 232), 0.00000011920929f);
  v14 = fmaxf(*(float *)(a2 + 212), 0.00000011920929f);
  *(float *)(a2 + 192) = fmaxf(*(float *)(a2 + 192), 0.00000011920929f);
  v15 = *(float *)(a2 + 336);
  v25[0] = *(uint32_t *)(a2 + 192);
  v16 = *(uint32_t *)(a2 + 196);
  *(float *)(a2 + 232) = v13;
  v25[1] = v16;
  *(float *)(a2 + 212) = v14;
  v17 = *(float *)(a2 + 376);
  v25[2] = *(uint32_t *)(a2 + 200);
  v18 = fmaxf(*(float *)(a2 + 356), 0.00000011920929f);
  v25[3] = *(uint32_t *)(a2 + 204);
  v19 = *(uint32_t *)(a2 + 208);
  *(float *)(a2 + 336) = fmaxf(v15, 0.00000011920929f);
  v25[4] = v19;
  v25[5] = *(uint32_t *)(a2 + 212);
  v20 = *(uint32_t *)(a2 + 216);
  *(float *)(a2 + 356) = v18;
  v25[6] = v20;
  *(float *)(a2 + 376) = fmaxf(v17, 0.00000011920929f);
  v25[7] = *(uint32_t *)(a2 + 220);
  v25[8] = *(uint32_t *)(a2 + 224);
  v25[9] = *(uint32_t *)(a2 + 228);
  v25[10] = *(uint32_t *)(a2 + 232);
  v25[11] = *(uint32_t *)(a2 + 236);
  v25[12] = *(uint32_t *)(a2 + 240);
  v25[13] = *(uint32_t *)(a2 + 244);
  v25[14] = *(uint32_t *)(a2 + 248);
  v25[15] = *(uint32_t *)(a2 + 252);
  v25[16] = *(uint32_t *)(a2 + 256);
  v25[17] = *(uint32_t *)(a2 + 260);
  v25[18] = *(uint32_t *)(a2 + 264);
  v25[19] = *(uint32_t *)(a2 + 268);
  v25[20] = *(uint32_t *)(a2 + 272);
  v25[21] = *(uint32_t *)(a2 + 276);
  v25[22] = *(uint32_t *)(a2 + 280);
  v25[23] = *(uint32_t *)(a2 + 284);
  v25[24] = *(uint32_t *)(a2 + 288);
  v25[25] = *(uint32_t *)(a2 + 292);
  v25[26] = *(uint32_t *)(a2 + 296);
  v25[27] = *(uint32_t *)(a2 + 300);
  v25[28] = *(uint32_t *)(a2 + 304);
  v25[29] = *(uint32_t *)(a2 + 308);
  v25[30] = *(uint32_t *)(a2 + 312);
  v25[31] = *(uint32_t *)(a2 + 316);
  v25[32] = *(uint32_t *)(a2 + 320);
  v25[33] = *(uint32_t *)(a2 + 324);
  v25[34] = *(uint32_t *)(a2 + 328);
  v25[35] = *(uint32_t *)(a2 + 332);
  v25[36] = *(uint32_t *)(a2 + 336);
  v25[37] = *(uint32_t *)(a2 + 340);
  v25[38] = *(uint32_t *)(a2 + 344);
  v25[39] = *(uint32_t *)(a2 + 348);
  v25[40] = *(uint32_t *)(a2 + 352);
  v25[41] = *(uint32_t *)(a2 + 356);
  v25[42] = *(uint32_t *)(a2 + 360);
  v25[43] = *(uint32_t *)(a2 + 364);
  v25[44] = *(uint32_t *)(a2 + 368);
  v25[45] = *(uint32_t *)(a2 + 372);
  v25[46] = *(uint32_t *)(a2 + 376);
  v25[47] = *(uint32_t *)(a2 + 380);
  hkMatrix6fSetInvert((hkMatrix6f::Self *)(a2 + 192), (hkMatrix6f::Self *)v25);
  hkMatrix6fSetMul(a2 + 384, a2 + 192, v23);
  *(uint32_t *)a4 = *(uint32_t *)(a2 + 768);
  *((uint32_t *)a4 + 1) = *(uint32_t *)(a2 + 772);
  *((uint32_t *)a4 + 2) = *(uint32_t *)(a2 + 776);
  *((uint32_t *)a4 + 3) = *(uint32_t *)(a2 + 780);
  *((uint32_t *)a4 + 4) = *(uint32_t *)(a2 + 784);
  *((uint32_t *)a4 + 5) = *(uint32_t *)(a2 + 788);
  *((uint32_t *)a4 + 6) = *(uint32_t *)(a2 + 792);
  *((uint32_t *)a4 + 7) = *(uint32_t *)(a2 + 796);
  *((uint32_t *)a4 + 8) = *(uint32_t *)(a2 + 800);
  *((uint32_t *)a4 + 9) = *(uint32_t *)(a2 + 804);
  *((uint32_t *)a4 + 10) = *(uint32_t *)(a2 + 808);
  *((uint32_t *)a4 + 11) = *(uint32_t *)(a2 + 812);
  *((uint32_t *)a4 + 12) = *(uint32_t *)(a2 + 816);
  *((uint32_t *)a4 + 13) = *(uint32_t *)(a2 + 820);
  *((uint32_t *)a4 + 14) = *(uint32_t *)(a2 + 824);
  *((uint32_t *)a4 + 15) = *(uint32_t *)(a2 + 828);
  *((uint32_t *)a4 + 16) = *(uint32_t *)(a2 + 832);
  *((uint32_t *)a4 + 17) = *(uint32_t *)(a2 + 836);
  *((uint32_t *)a4 + 18) = *(uint32_t *)(a2 + 840);
  *((uint32_t *)a4 + 19) = *(uint32_t *)(a2 + 844);
  *((uint32_t *)a4 + 20) = *(uint32_t *)(a2 + 848);
  *((uint32_t *)a4 + 21) = *(uint32_t *)(a2 + 852);
  *((uint32_t *)a4 + 22) = *(uint32_t *)(a2 + 856);
  *((uint32_t *)a4 + 23) = *(uint32_t *)(a2 + 860);
  *((uint32_t *)a4 + 24) = *(uint32_t *)(a2 + 864);
  *((uint32_t *)a4 + 25) = *(uint32_t *)(a2 + 868);
  *((uint32_t *)a4 + 26) = *(uint32_t *)(a2 + 872);
  *((uint32_t *)a4 + 27) = *(uint32_t *)(a2 + 876);
  *((uint32_t *)a4 + 28) = *(uint32_t *)(a2 + 880);
  *((uint32_t *)a4 + 29) = *(uint32_t *)(a2 + 884);
  *((uint32_t *)a4 + 30) = *(uint32_t *)(a2 + 888);
  *((uint32_t *)a4 + 31) = *(uint32_t *)(a2 + 892);
  *((uint32_t *)a4 + 32) = *(uint32_t *)(a2 + 896);
  *((uint32_t *)a4 + 33) = *(uint32_t *)(a2 + 900);
  *((uint32_t *)a4 + 34) = *(uint32_t *)(a2 + 904);
  *((uint32_t *)a4 + 35) = *(uint32_t *)(a2 + 908);
  *((uint32_t *)a4 + 36) = *(uint32_t *)(a2 + 912);
  *((uint32_t *)a4 + 37) = *(uint32_t *)(a2 + 916);
  *((uint32_t *)a4 + 38) = *(uint32_t *)(a2 + 920);
  *((uint32_t *)a4 + 39) = *(uint32_t *)(a2 + 924);
  *((uint32_t *)a4 + 40) = *(uint32_t *)(a2 + 928);
  *((uint32_t *)a4 + 41) = *(uint32_t *)(a2 + 932);
  *((uint32_t *)a4 + 42) = *(uint32_t *)(a2 + 936);
  *((uint32_t *)a4 + 43) = *(uint32_t *)(a2 + 940);
  *((uint32_t *)a4 + 44) = *(uint32_t *)(a2 + 944);
  *((uint32_t *)a4 + 45) = *(uint32_t *)(a2 + 948);
  *((uint32_t *)a4 + 46) = *(uint32_t *)(a2 + 952);
  *((uint32_t *)a4 + 47) = *(uint32_t *)(a2 + 956);
  *a5 = a2 + 384;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: hkPoweredChain_BuildConstraintMatrixAndLuDecomposition  (binary VA: 0x1afb340)
// Original: hkPoweredChain_BuildConstraintMatrixAndLuDecomposition
// ----------------------------------------------------------------------------
uint32_t * hkPoweredChain_BuildConstraintMatrixAndLuDecomposition(int a1, float *a2, char *a3, int a4, int a5, int a6, int a7, int a8)
{
  uint32_t *result;
  int v9;
  float *v10;
  int v11;
  float *v12;
  unsigned int v13;
  float v14; // xmm5_4
  float v15; // xmm0_4
  float v16; // xmm6_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  int v19;
  float v20; // xmm0_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float *v28;
  float *v29;
  float v30; // xmm6_4
  float v31; // xmm5_4
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  float *v36;
  int v37; // xmm2_4
  int v38; // xmm1_4
  int v39; // xmm0_4
  int v40; // xmm5_4
  int v41; // xmm3_4
  int v42; // xmm6_4
  int v43; // xmm4_4
  int v44; // xmm7_4
  float *v45;
  float *v46;
  float *v47;
  float v48; // xmm5_4
  float v49; // xmm6_4
  float v50; // xmm0_4
  float v51; // xmm4_4
  float v52; // xmm1_4
  float v53; // xmm2_4
  float *v54;
  float *v55;
  float v56; // xmm5_4
  float v57; // xmm6_4
  float v58; // xmm4_4
  float v59; // xmm3_4
  int v60;
  float v61; // xmm0_4
  float v62; // xmm2_4
  float v63; // xmm7_4
  float v64; // xmm1_4
  float v65; // xmm3_4
  int v66;
  float v67; // xmm7_4
  float v68; // xmm5_4
  float v69; // xmm3_4
  float v70; // xmm6_4
  float v71; // xmm4_4
  float v72; // xmm0_4
  float v73; // xmm2_4
  float v74; // xmm7_4
  float v75; // xmm1_4
  float v76; // xmm3_4
  float v77; // xmm5_4
  float v78; // xmm3_4
  float v79; // xmm6_4
  float v80; // xmm4_4
  float v81; // xmm0_4
  float v82; // xmm2_4
  float v83; // xmm7_4
  float v84; // xmm1_4
  float v85; // xmm3_4
  float *v86;
  float v87; // xmm5_4
  float v88; // xmm4_4
  float v89; // xmm7_4
  float v90; // xmm6_4
  float v91; // xmm0_4
  float v92; // xmm2_4
  float v93; // xmm1_4
  float v94; // xmm7_4
  float v95; // xmm6_4
  float v96; // xmm5_4
  float v97; // xmm4_4
  float v98; // xmm3_4
  float v99; // xmm0_4
  float v100; // xmm1_4
  float v101; // xmm7_4
  float v102; // xmm2_4
  float v103; // xmm1_4
  float v104; // xmm6_4
  float v105; // xmm6_4
  float v106; // xmm5_4
  float v107; // xmm4_4
  float v108; // xmm3_4
  float v109; // xmm0_4
  float v110; // xmm1_4
  float *v111;
  float v112; // xmm7_4
  float v113; // xmm6_4
  float v114; // xmm5_4
  float v115; // xmm4_4
  float v116; // xmm3_4
  float v117; // xmm0_4
  float v118; // xmm2_4
  float v119; // xmm7_4
  float v120; // xmm1_4
  float v121; // xmm2_4
  int v122;
  float v123; // xmm7_4
  float v124; // xmm6_4
  float v125; // xmm3_4
  float v126; // xmm5_4
  float v127; // xmm4_4
  float v128; // xmm0_4
  float v129; // xmm1_4
  float v130; // xmm7_4
  float v131; // xmm6_4
  float v132; // xmm2_4
  float *v133;
  float v134; // xmm7_4
  float v135; // xmm6_4
  float v136; // xmm5_4
  float v137; // xmm4_4
  float v138; // xmm3_4
  float v139; // xmm0_4
  float v140; // xmm1_4
  int v141;
  int i;
  typedef int _g4_t_v144;
  typedef uint32_t *_g4_t_v145;
  typedef int _g4_t_v146;
  typedef int _g4_t_v147;
  typedef int _g4_t_v148;
  typedef int _g4_t_v149;
  typedef float *_g4_t_v150;
  typedef int _g4_t_v151;
  typedef int _g4_t_v152;
  typedef float *_g4_t_v153;
  typedef float *_g4_t_v154;
  typedef float *_g4_t_v155;
  typedef int _g4_t_v156;
  typedef float *_g4_t_v157;
  typedef float *_g4_t_v158;
  typedef float *_g4_t_v159;
  typedef float *_g4_t_v160;
  typedef float *_g4_t_v161;
  typedef float *_g4_t_v162;
  typedef float *_g4_t_v163;
  typedef float *_g4_t_v164;
  typedef int _g4_t_v165;
  typedef int _g4_t_v166;
  typedef float *_g4_t_v167;
  typedef float *_g4_t_v168;
  typedef float *_g4_t_v169;
  typedef float *_g4_t_v170;
  typedef char *_g4_t_v171;
  typedef float *_g4_t_v172;
  typedef float *_g4_t_v173;
  typedef float *_g4_t_v174;
  typedef int _g4_t_v175;
  typedef float *_g4_t_v176;
  typedef float *_g4_t_v177;
  typedef float *_g4_t_v178;
  typedef float *_g4_t_v179;
  typedef float *_g4_t_v180;
  typedef float *_g4_t_v181;
  typedef float _g4_t_v182;
  typedef int _g4_t_v183;
  typedef uint64_t *_g4_t_v184;
  typedef uint64_t _g4_t_v185[26];
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (12u + sizeof(_g4_t_v144)) > _g4_s0 ? (12u + sizeof(_g4_t_v144)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v145)) > _g4_s1 ? (16u + sizeof(_g4_t_v145)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v146)) > _g4_s2 ? (20u + sizeof(_g4_t_v146)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v147)) > _g4_s3 ? (24u + sizeof(_g4_t_v147)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v148)) > _g4_s4 ? (28u + sizeof(_g4_t_v148)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v149)) > _g4_s5 ? (32u + sizeof(_g4_t_v149)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v150)) > _g4_s6 ? (36u + sizeof(_g4_t_v150)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v151)) > _g4_s7 ? (44u + sizeof(_g4_t_v151)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v152)) > _g4_s8 ? (48u + sizeof(_g4_t_v152)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v153)) > _g4_s9 ? (52u + sizeof(_g4_t_v153)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v154)) > _g4_s10 ? (56u + sizeof(_g4_t_v154)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v155)) > _g4_s11 ? (60u + sizeof(_g4_t_v155)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v156)) > _g4_s12 ? (64u + sizeof(_g4_t_v156)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v157)) > _g4_s13 ? (68u + sizeof(_g4_t_v157)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v158)) > _g4_s14 ? (72u + sizeof(_g4_t_v158)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v159)) > _g4_s15 ? (88u + sizeof(_g4_t_v159)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v160)) > _g4_s16 ? (100u + sizeof(_g4_t_v160)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v161)) > _g4_s17 ? (104u + sizeof(_g4_t_v161)) : _g4_s17,
    _g4_s19 = (116u + sizeof(_g4_t_v162)) > _g4_s18 ? (116u + sizeof(_g4_t_v162)) : _g4_s18,
    _g4_s20 = (120u + sizeof(_g4_t_v163)) > _g4_s19 ? (120u + sizeof(_g4_t_v163)) : _g4_s19,
    _g4_s21 = (124u + sizeof(_g4_t_v164)) > _g4_s20 ? (124u + sizeof(_g4_t_v164)) : _g4_s20,
    _g4_s22 = (128u + sizeof(_g4_t_v165)) > _g4_s21 ? (128u + sizeof(_g4_t_v165)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v166)) > _g4_s22 ? (128u + sizeof(_g4_t_v166)) : _g4_s22,
    _g4_s24 = (136u + sizeof(_g4_t_v167)) > _g4_s23 ? (136u + sizeof(_g4_t_v167)) : _g4_s23,
    _g4_s25 = (136u + sizeof(_g4_t_v168)) > _g4_s24 ? (136u + sizeof(_g4_t_v168)) : _g4_s24,
    _g4_s26 = (140u + sizeof(_g4_t_v169)) > _g4_s25 ? (140u + sizeof(_g4_t_v169)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v170)) > _g4_s26 ? (140u + sizeof(_g4_t_v170)) : _g4_s26,
    _g4_s28 = (144u + sizeof(_g4_t_v171)) > _g4_s27 ? (144u + sizeof(_g4_t_v171)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v172)) > _g4_s28 ? (144u + sizeof(_g4_t_v172)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v173)) > _g4_s29 ? (144u + sizeof(_g4_t_v173)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v174)) > _g4_s30 ? (144u + sizeof(_g4_t_v174)) : _g4_s30,
    _g4_s32 = (148u + sizeof(_g4_t_v175)) > _g4_s31 ? (148u + sizeof(_g4_t_v175)) : _g4_s31,
    _g4_s33 = (148u + sizeof(_g4_t_v176)) > _g4_s32 ? (148u + sizeof(_g4_t_v176)) : _g4_s32,
    _g4_s34 = (152u + sizeof(_g4_t_v177)) > _g4_s33 ? (152u + sizeof(_g4_t_v177)) : _g4_s33,
    _g4_s35 = (152u + sizeof(_g4_t_v178)) > _g4_s34 ? (152u + sizeof(_g4_t_v178)) : _g4_s34,
    _g4_s36 = (156u + sizeof(_g4_t_v179)) > _g4_s35 ? (156u + sizeof(_g4_t_v179)) : _g4_s35,
    _g4_s37 = (156u + sizeof(_g4_t_v180)) > _g4_s36 ? (156u + sizeof(_g4_t_v180)) : _g4_s36,
    _g4_s38 = (156u + sizeof(_g4_t_v181)) > _g4_s37 ? (156u + sizeof(_g4_t_v181)) : _g4_s37,
    _g4_s39 = (156u + sizeof(_g4_t_v182)) > _g4_s38 ? (156u + sizeof(_g4_t_v182)) : _g4_s38,
    _g4_s40 = (156u + sizeof(_g4_t_v183)) > _g4_s39 ? (156u + sizeof(_g4_t_v183)) : _g4_s39,
    _g4_s41 = (160u + sizeof(_g4_t_v184)) > _g4_s40 ? (160u + sizeof(_g4_t_v184)) : _g4_s40,
    _g4_s42 = (176u + sizeof(_g4_t_v185)) > _g4_s41 ? (176u + sizeof(_g4_t_v185)) : _g4_s41
  };
  alignas(16) uint8_t _g4_sf[_g4_s42];
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 12u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 16u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 20u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 24u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 28u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 32u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 36u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 44u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 48u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 52u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 56u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 60u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 64u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 68u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 72u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 88u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 100u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 104u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 116u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 120u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 124u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 128u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 128u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 136u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 136u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 140u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 140u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 144u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 144u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 144u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 144u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 148u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 148u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 152u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 152u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 156u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 156u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 156u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 156u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 156u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 160u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 176u);

  result = (uint32_t *)(v185);
  memset(v185, 0, 192);
  v184 = v185;
  if ( a1 > 0 )
  {
    v149 = 0;
    v146 = a1 - 1;
    do
    {
      v9 = a8 + 960 * v149;
      v10 = (float *)(*(uint32_t *)(a6 + 4 * v149) + a7);
      v145 = (uint32_t *)(a6 + 4 * v149 + 4);
      v151 = v9 + 576;
      v155 = (float *)(v9 + 720);
      v147 = 144 * v149;
      v148 = 3 * v149;
      v152 = 0;
      v150 = (float *)(a5 + 96 * v149);
      v161 = v150;
      v156 = 0;
      v154 = (float *)(a4 + 144 * v149);
      v160 = v154;
      v153 = v150 + 4;
      v11 = 0;
      v144 = v9;
      v12 = (float *)(*v145 + a7);
      do
      {
        v165 = 0;
        v175 = v156;
        v163 = v161;
        v164 = v160;
        v13 = 0;
        do
        {
          v14 = v160[2] * v164[2];
          v15 = v10[15];
          v16 = v12[15];
          v159 = v160 + 4;
          v169 = v160 + 8;
          v157 = v154 + 8;
          v158 = v154 + 4;
          v17 = (float)((float)((float)((float)(v158[v11 + 2] * v159[v165 + 2]) * v10[14])
                              + (float)((float)(v157[v11 + 2] * v169[v165 + 2]) * v12[14]))
                      + (float)((float)(v15 * v14) + (float)(v14 * v16)))
              + (float)((float)((float)((float)((float)(v158[v11 + 1] * v159[v165 + 1]) * v10[13])
                                      + (float)((float)(v157[v11 + 1] * v169[v165 + 1]) * v12[13]))
                              + (float)((float)((float)(v160[1] * v164[1]) * v15)
                                      + (float)((float)(v160[1] * v164[1]) * v16)))
                      + (float)((float)((float)((float)(v158[v11] * v159[v165]) * v10[12])
                                      + (float)((float)(v157[v11] * v169[v165]) * v12[12]))
                              + (float)((float)((float)(*v160 * *v164) * v15) + (float)((float)(*v160 * *v164) * v16))));
          *(float *)(v152 * 4 + v151 + v13) = v17;
          *(float *)(16 * v156 + v151 + 4 * v175) = v17;
          v162 = v161 + 4;
          v167 = v150 + 4;
          v171 = (char *)v153 - 96 * v149 - a5;
          v18 = (float)((float)((float)(v161[2] * v163[2]) * v10[14])
                      + (float)((float)(*(float *)((char *)v167 + (uint32_t)(uintptr_t)(v171) - 8) * v162[v13 / 2 + 2]) * v12[14]))
              + (float)((float)((float)((float)(v161[1] * v163[1]) * v10[13])
                              + (float)((float)(*(float *)((char *)v167 + (uint32_t)(uintptr_t)(v171) - 12) * v162[v13 / 2 + 1])
                                      * v12[13]))
                      + (float)((float)((float)(*v161 * *v163) * v10[12])
                              + (float)((float)(*(float *)((char *)v167 + (uint32_t)(uintptr_t)(v171) - 16) * v162[v13 / 2]) * v12[12])));
          v155[v152 + v13 / 4] = v18;
          v19 = v175++;
          v165 += 12;
          v164 += 12;
          v13 += 16;
          v163 += 8;
          v155[4 * v156 + v19] = v18;
        }
        while ( v175 <= 2 );
        ++v156;
        v160 += 12;
        v11 += 12;
        v161 += 8;
        v152 += 5;
        v153 += 8;
      }
      while ( v156 != 3 );
      v177 = v12;
      v20 = a2[1];
      v21 = *(float *)(v144 + 596) * v20;
      v22 = (float)(*(float *)(v144 + 616) * v20) + *a2;
      v23 = (float)(v20 * *(float *)(v144 + 576)) + *a2;
      *(float *)(v144 + 596) = v21 + *a2;
      *(float *)(v144 + 616) = v22;
      *(float *)(v144 + 576) = v23;
      v24 = a2[3];
      v25 = *(float *)(v144 + 740) * v24;
      v26 = *(float *)(v144 + 760) * v24;
      v27 = a2[2];
      v176 = (float *)(32 * (v148 + 2) + a5);
      v172 = v176 - 8;
      v28 = v154 + 8;
      *(float *)(v144 + 720) = (float)(v24 * *(float *)(v144 + 720)) + v27;
      *(float *)(v144 + 740) = v25 + v27;
      v179 = (float *)(v144 + 672);
      *(float *)(v144 + 760) = v26 + v27;
      v29 = v154 + 4;
      do
      {
        v30 = *v29;
        v28 += 12;
        v31 = *(v28 - 12);
        v29 += 12;
        v32 = *(v29 - 11);
        v33 = *(v28 - 11);
        v34 = (float)((float)((float)(*(v29 - 10) * v176[2]) * v10[14])
                    + (float)((float)(*(v28 - 10) * v176[6]) * v177[14]))
            + (float)((float)((float)((float)(v176[1] * v32) * v10[13]) + (float)((float)(v176[5] * v33) * v177[13]))
                    + (float)((float)((float)(*v176 * v30) * v10[12]) + (float)((float)(v176[4] * v31) * v177[12])));
        v35 = (float)((float)((float)(*(v29 - 10) * v172[2]) * v10[14])
                    + (float)((float)(*(v28 - 10) * v172[6]) * v177[14]))
            + (float)((float)((float)((float)(v172[1] * v32) * v10[13]) + (float)((float)(v172[5] * v33) * v177[13]))
                    + (float)((float)((float)(*v172 * v30) * v10[12]) + (float)((float)(v172[4] * v31) * v177[12])));
        v36 = v179;
        *v179 = (float)((float)((float)(*(v29 - 10) * v150[2]) * v10[14])
                      + (float)((float)(*(v28 - 10) * v150[6]) * v177[14]))
              + (float)((float)((float)((float)(v30 * *v150) * v10[12]) + (float)((float)(v31 * v150[4]) * v177[12]))
                      + (float)((float)((float)(v32 * v150[1]) * v10[13]) + (float)((float)(v33 * v150[5]) * v177[13])));
        v179 += 4;
        v36[1] = v35;
        v36[2] = v34;
        v36[3] = 0.0;
      }
      while ( v179 != v155 );
      v37 = *(uint32_t *)(v144 + 704);
      v38 = *(uint32_t *)(v144 + 708);
      v39 = *(uint32_t *)(v144 + 712);
      v40 = *(uint32_t *)(v144 + 676);
      v41 = *(uint32_t *)(v144 + 680);
      v42 = *(uint32_t *)(v144 + 688);
      v43 = *(uint32_t *)(v144 + 692);
      *(uint32_t *)(v144 + 624) = *(uint32_t *)(v144 + 672);
      v44 = *(uint32_t *)(v144 + 696);
      *(uint32_t *)(v144 + 628) = v42;
      *(uint32_t *)(v144 + 632) = v37;
      *(uint32_t *)(v144 + 636) = v37;
      *(uint32_t *)(v144 + 640) = v40;
      *(uint32_t *)(v144 + 644) = v43;
      *(uint32_t *)(v144 + 648) = v38;
      *(uint32_t *)(v144 + 652) = v38;
      *(uint32_t *)(v144 + 656) = v41;
      *(uint32_t *)(v144 + 660) = v44;
      *(uint32_t *)(v144 + 664) = v39;
      *(uint32_t *)(v144 + 668) = v39;
      if ( v149 >= v146 )
      {
        *(uint32_t *)(v144 + 768) = 0;
        *(uint32_t *)(v144 + 772) = 0;
        *(uint32_t *)(v144 + 776) = 0;
        *(uint32_t *)(v144 + 780) = 0;
        *(uint32_t *)(v144 + 784) = 0;
        *(uint32_t *)(v144 + 788) = 0;
        *(uint32_t *)(v144 + 792) = 0;
        *(uint32_t *)(v144 + 796) = 0;
        *(uint32_t *)(v144 + 800) = 0;
        *(uint32_t *)(v144 + 804) = 0;
        *(uint32_t *)(v144 + 808) = 0;
        *(uint32_t *)(v144 + 812) = 0;
        *(uint32_t *)(v144 + 816) = 0;
        *(uint32_t *)(v144 + 820) = 0;
        *(uint32_t *)(v144 + 824) = 0;
        *(uint32_t *)(v144 + 828) = 0;
        *(uint32_t *)(v144 + 832) = 0;
        *(uint32_t *)(v144 + 836) = 0;
        *(uint32_t *)(v144 + 840) = 0;
        *(uint32_t *)(v144 + 844) = 0;
        *(uint32_t *)(v144 + 848) = 0;
        *(uint32_t *)(v144 + 852) = 0;
        *(uint32_t *)(v144 + 856) = 0;
        *(uint32_t *)(v144 + 860) = 0;
        *(uint32_t *)(v144 + 864) = 0;
        *(uint32_t *)(v144 + 868) = 0;
        *(uint32_t *)(v144 + 872) = 0;
        *(uint32_t *)(v144 + 876) = 0;
        *(uint32_t *)(v144 + 880) = 0;
        *(uint32_t *)(v144 + 884) = 0;
        *(uint32_t *)(v144 + 888) = 0;
        *(uint32_t *)(v144 + 892) = 0;
        *(uint32_t *)(v144 + 896) = 0;
        *(uint32_t *)(v144 + 900) = 0;
        *(uint32_t *)(v144 + 904) = 0;
        *(uint32_t *)(v144 + 908) = 0;
        *(uint32_t *)(v144 + 912) = 0;
        *(uint32_t *)(v144 + 916) = 0;
        *(uint32_t *)(v144 + 920) = 0;
        *(uint32_t *)(v144 + 924) = 0;
        *(uint32_t *)(v144 + 928) = 0;
        *(uint32_t *)(v144 + 932) = 0;
        *(uint32_t *)(v144 + 936) = 0;
        *(uint32_t *)(v144 + 940) = 0;
        *(uint32_t *)(v144 + 944) = 0;
        *(uint32_t *)(v144 + 948) = 0;
        *(uint32_t *)(v144 + 952) = 0;
        *(uint32_t *)(v144 + 956) = 0;
      }
      else
      {
        v178 = (float *)(*v145 + a7);
        v166 = v148 + 3;
        v170 = (float *)(a4 + 48 * (v148 + 1));
        v180 = (float *)(v144 + 768);
        v45 = (float *)(a4 + 144 * v149);
        v46 = (float *)(a4 + v147 + 160);
        do
        {
          v48 = v45[36];
          v49 = *v46;
          v45 += 12;
          v46 += 12;
          v50 = v178[15];
          v51 = *(v46 - 11);
          v47 = (float *)(v147 + a4 + 96);
          v52 = (float)((float)((float)(*(v46 - 10) * v47[10]) * v178[14]) - (float)((float)(v45[26] * v47[2]) * v50))
              + (float)((float)((float)((float)(v47[9] * v51) * v178[13]) - (float)((float)(v45[25] * v47[1]) * v50))
                      + (float)((float)((float)(v47[8] * v49) * v178[12]) - (float)((float)(*v47 * v48) * v50)));
          v53 = (float)((float)((float)(*(v46 - 10) * v170[10]) * v178[14]) - (float)((float)(v45[26] * v170[2]) * v50))
              + (float)((float)((float)((float)(v170[9] * v51) * v178[13]) - (float)((float)(v45[25] * v170[1]) * v50))
                      + (float)((float)((float)(v170[8] * v49) * v178[12]) - (float)((float)(*v170 * v48) * v50)));
          v54 = v180;
          *v180 = (float)((float)((float)(*(v46 - 10) * v154[10]) * v178[14]) - (float)((float)(v45[26] * v154[2]) * v50))
                + (float)((float)((float)((float)(v51 * v154[9]) * v178[13]) - (float)((float)(v45[25] * v154[1]) * v50))
                        + (float)((float)((float)(v49 * v154[8]) * v178[12]) - (float)((float)(v48 * *v154) * v50)));
          v180 += 4;
          v54[1] = v53;
          v54[2] = v52;
          v54[3] = 0.0;
        }
        while ( v180 != (float *)(v144 + 816) );
        v55 = (float *)(a5 + 32 * v166);
        v56 = v55[1];
        v57 = v178[12];
        v58 = v178[13];
        v59 = v55[2];
        v60 = a5 + 96 * v149;
        v61 = (float)((float)((float)(v176[4] * *v55) * v57) + (float)((float)(v176[5] * v56) * v58))
            + (float)((float)(v176[6] * v59) * v178[14]);
        v62 = (float)((float)(v172[4] * *v55) * v57) + (float)((float)(v172[5] * v56) * v58);
        v63 = (float)((float)(*v55 * v150[4]) * v57) + (float)((float)(v56 * v150[5]) * v58);
        v64 = (float)(v172[6] * v59) * v178[14];
        v65 = (float)(v59 * v150[6]) * v178[14];
        *(float *)(v144 + 920) = v61;
        v66 = 32 * (v148 + 4);
        *(uint32_t *)(v144 + 924) = 0;
        *(float *)(v144 + 916) = v64 + v62;
        *(float *)(v144 + 912) = v65 + v63;
        v67 = *(float *)(a5 + v66);
        v68 = *(float *)(a5 + v66 + 4);
        v168 = (float *)(a5 + v66);
        v69 = *(float *)(a5 + v66 + 8);
        v70 = v178[12];
        v71 = v178[13];
        v72 = (float)((float)((float)(v176[4] * v67) * v70) + (float)((float)(v176[5] * v68) * v71))
            + (float)((float)(v176[6] * v69) * v178[14]);
        v73 = (float)((float)(v172[4] * v67) * v70) + (float)((float)(v172[5] * v68) * v71);
        v74 = (float)((float)(v67 * *(float *)(v60 + 16)) * v70) + (float)((float)(v68 * *(float *)(v60 + 20)) * v71);
        v75 = (float)(v172[6] * v69) * v178[14];
        v76 = (float)(v69 * v150[6]) * v178[14];
        *(float *)(v144 + 936) = v72;
        *(uint32_t *)(v144 + 940) = 0;
        v173 = (float *)(a5 + v66 + 32);
        *(float *)(v144 + 932) = v75 + v73;
        *(float *)(v144 + 928) = v76 + v74;
        v77 = *(float *)(a5 + v66 + 36);
        v78 = *(float *)(a5 + v66 + 40);
        v79 = v178[12];
        v80 = v178[13];
        v81 = (float)((float)((float)(v176[4] * *v173) * v79) + (float)((float)(v176[5] * v77) * v80))
            + (float)((float)(v176[6] * v78) * v178[14]);
        v181 = (float *)(32 * (v148 + 2) + a5 - 32);
        v82 = (float)((float)(v181[4] * *v173) * v79) + (float)((float)(v181[5] * v77) * v80);
        v83 = (float)((float)(*v173 * *(float *)(v60 + 16)) * v79) + (float)((float)(v77 * *(float *)(v60 + 20)) * v80);
        v84 = (float)(v181[6] * v78) * v178[14];
        v85 = (float)(v78 * v150[6]) * v178[14];
        v86 = (float *)(a5 + 32 * v166);
        *(float *)(v144 + 952) = v81;
        *(uint32_t *)(v144 + 956) = 0;
        *(float *)(v144 + 948) = v84 + v82;
        *(float *)(v144 + 944) = v85 + v83;
        v87 = v178[12];
        v88 = v178[13];
        v89 = v86[1];
        v90 = v86[2];
        v91 = (float)((float)((float)(*v86 * *(float *)(v147 + a4 + 128)) * v87)
                    + (float)((float)(*(float *)(v147 + a4 + 132) * v89) * v88))
            + (float)((float)(*(float *)(v147 + a4 + 136) * v90) * v178[14]);
        v92 = (float)((float)(v170[8] * *v86) * v87) + (float)((float)(v170[9] * v89) * v88);
        v93 = (float)(v170[10] * v90) * v178[14];
        *(float *)(v144 + 816) = (float)((float)((float)(*v86 * v154[8]) * v87) + (float)((float)(v89 * v154[9]) * v88))
                               + (float)((float)(v90 * v154[10]) * v178[14]);
        *(float *)(v144 + 820) = v93 + v92;
        *(float *)(v144 + 824) = v91;
        *(uint32_t *)(v144 + 828) = 0;
        v94 = v168[1];
        v95 = v168[2];
        v96 = v178[12];
        v97 = v178[13];
        v98 = *v168 * v154[8];
        v99 = (float)((float)((float)(*(float *)(v147 + a4 + 128) * *v168) * v96)
                    + (float)((float)(*(float *)(v147 + a4 + 132) * v94) * v97))
            + (float)((float)(*(float *)(v147 + a4 + 136) * v95) * v178[14]);
        v100 = v170[9] * v94;
        v101 = (float)(v94 * v154[9]) * v97;
        v102 = (float)((float)(v170[8] * *v168) * v96) + (float)(v100 * v97);
        v103 = (float)(v170[10] * v95) * v178[14];
        v104 = (float)(v95 * v154[10]) * v178[14];
        *(float *)(v144 + 840) = v99;
        *(float *)(v144 + 836) = v103 + v102;
        *(uint32_t *)(v144 + 844) = 0;
        *(float *)(v144 + 832) = (float)((float)(v98 * v96) + v101) + v104;
        v105 = v173[1];
        v106 = v178[12];
        v107 = v178[13];
        v108 = v173[2];
        v109 = (float)((float)((float)(*(float *)(v147 + a4 + 128) * *v173) * v106)
                     + (float)((float)(*(float *)(v147 + a4 + 132) * v105) * v107))
             + (float)((float)(*(float *)(v147 + a4 + 136) * v108) * v178[14]);
        v110 = (float)((float)((float)(v170[8] * *v173) * v106) + (float)((float)(v170[9] * v105) * v107))
             + (float)((float)(v170[10] * v108) * v178[14]);
        *(float *)(v144 + 848) = (float)((float)((float)(*v173 * v154[8]) * v106)
                                       + (float)((float)(v105 * v154[9]) * v107))
                               + (float)((float)(v108 * v154[10]) * v178[14]);
        *(float *)(v144 + 852) = v110;
        *(float *)(v144 + 856) = v109;
        *(uint32_t *)(v144 + 860) = 0;
        v111 = (float *)(a4 + 48 * v166);
        v112 = v111[4];
        v113 = v111[5];
        v114 = v178[12];
        v115 = v178[13];
        v116 = v111[6];
        v117 = (float)((float)((float)(v176[4] * v112) * v114) + (float)((float)(v176[5] * v113) * v115))
             + (float)((float)(v176[6] * v116) * v178[14]);
        v118 = (float)((float)(v181[4] * v112) * v114) + (float)((float)(v181[5] * v113) * v115);
        v119 = (float)((float)(v112 * *(float *)(v60 + 16)) * v114)
             + (float)((float)(v113 * *(float *)(v60 + 20)) * v115);
        v120 = (float)((float)(v181[6] * v116) * v178[14]) + v118;
        v121 = (float)(v116 * v150[6]) * v178[14];
        *(float *)(v144 + 872) = v117;
        v122 = 48 * (v148 + 4);
        *(float *)(v144 + 868) = v120;
        *(uint32_t *)(v144 + 876) = 0;
        *(float *)(v144 + 864) = v121 + v119;
        v123 = *(float *)(a4 + v122 + 16);
        v124 = *(float *)(a4 + v122 + 20);
        v125 = *(float *)(a4 + v122 + 24);
        v126 = v178[12];
        v127 = v178[13];
        v128 = (float)((float)((float)(v176[4] * v123) * v126) + (float)((float)(v176[5] * v124) * v127))
             + (float)((float)(v176[6] * v125) * v178[14]);
        v174 = v181;
        v129 = (float)((float)((float)(v174[4] * v123) * v126) + (float)((float)(v174[5] * v124) * v127))
             + (float)((float)(v181[6] * v125) * v178[14]);
        v130 = (float)(v123 * v150[4]) * v126;
        v131 = (float)(v124 * v150[5]) * v127;
        v132 = v178[14] * (float)(v125 * v150[6]);
        *(float *)(v144 + 888) = v128;
        *(float *)(v144 + 884) = v129;
        v133 = (float *)(a4 + v122 + 48);
        *(uint32_t *)(v144 + 892) = 0;
        *(float *)(v144 + 880) = (float)(v130 + v131) + v132;
        v134 = v133[4];
        v135 = v133[5];
        v136 = v178[12];
        v137 = v178[13];
        v138 = v133[6];
        v182 = v178[14];
        v139 = (float)((float)((float)(v176[4] * v134) * v136) + (float)((float)(v176[5] * v135) * v137))
             + (float)((float)(v176[6] * v138) * v182);
        v140 = (float)((float)((float)(v174[4] * v134) * v136) + (float)((float)(v174[5] * v135) * v137))
             + (float)((float)(v174[6] * v138) * v182);
        *(float *)(v144 + 896) = (float)((float)((float)(v134 * v150[4]) * v136)
                                       + (float)((float)(v135 * v150[5]) * v137))
                               + (float)(v182 * (float)(v138 * v150[6]));
        *(float *)(v144 + 900) = v140;
        *(float *)(v144 + 904) = v139;
        *(uint32_t *)(v144 + 908) = 0;
      }
      ++v149;
    }
    while ( a1 > v149 );
    v141 = a8;
    for ( i = 0; i != a1; ++i )
    {
      v183 = v141;
      result = hkPoweredChain_ComputeConstraintMatrixLuDecomposition_ForOneRow(
                 i != v146,
                 v141,
                 a3,
                 (hkMatrix3f::Self *)v185,
                 &v184);
      v141 = v183 + 960;
      a3 += 64;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkPoweredChainBuildJacobian  (binary VA: 0x1afc890)
// Original: hkPoweredChainBuildJacobian
// ----------------------------------------------------------------------------
int hkPoweredChainBuildJacobian(int a1, int a2, int *a3)
{
  int v3; // xmm0_4
  int v4; // xmm1_4
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int result;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;

  v17 = *(uint32_t *)a1;
  v18 = *a3;
  v20 = *(uint32_t *)(a1 + 36);
  v3 = *(uint32_t *)(a1 + 8);
  v4 = *(uint32_t *)(a1 + 4);
  v5 = *(uint32_t *)(a1 + 28);
  *(uint32_t *)(v18 + 8) = *(uint32_t *)(a1 + 44);
  *(uint16_t *)(v18 + 4) = v17;
  *(uint8_t *)v18 = 42;
  v19 = v18 + 32;
  *(uint32_t *)(v18 + 24) = v4;
  *(uint32_t *)(v18 + 28) = v3;
  *(uint32_t *)(v18 + 16) = (((uint16_t)v17 << 6)
                         + 32 * (uint16_t)v17
                         + 1088 * (uint16_t)v17
                         + 144 * (uint16_t)v17
                         + 32
                         + 32
                         + 4 * (uint16_t)v17
                         + 4
                         + 15)
                        & 0xFFFFFFF0;
  if ( v17 < 0 )
  {
    v7 = (uint16_t)v17;
  }
  else
  {
    v6 = 0;
    do
    {
      *(uint32_t *)(32 * (uint16_t)v17
                + 1088 * (uint16_t)v17
                + v18
                + 32
                + 144 * (uint16_t)v17
                + 32
                + 4 * v6) = *(uint32_t *)(v5 + 4 * v6);
      ++v6;
    }
    while ( v6 != v17 + 1 );
    v7 = *(uint16_t *)(v18 + 4);
  }
  v8 = 32 * v7;
  v9 = 960 * v7;
  v21 = 96 * v7;
  v10 = v19 + 144 * v7;
  v22 = 32 * v7 + 32;
  v11 = v10 + 1056 * v7 + (v7 << 6) + 32 + 4 * v7 + 4;
  if ( v17 > 0 )
  {
    v12 = 0;
    v13 = v20;
    do
    {
      v13 += 64;
      v11 += 64;
      *(uint32_t *)(v11 - 64) = *(uint32_t *)(v13 - 64);
      ++v12;
      *(uint32_t *)(v11 - 60) = *(uint32_t *)(v13 - 60);
      *(uint32_t *)(v11 - 56) = *(uint32_t *)(v13 - 56);
      *(uint32_t *)(v11 - 52) = *(uint32_t *)(v13 - 52);
      *(uint32_t *)(v11 - 48) = *(uint32_t *)(v13 - 48);
      *(uint32_t *)(v11 - 44) = *(uint32_t *)(v13 - 44);
      *(uint32_t *)(v11 - 40) = *(uint32_t *)(v13 - 40);
      *(uint32_t *)(v11 - 36) = *(uint32_t *)(v13 - 36);
      *(uint32_t *)(v11 - 32) = *(uint32_t *)(v13 - 32);
      *(uint32_t *)(v11 - 28) = *(uint32_t *)(v13 - 28);
      *(uint32_t *)(v11 - 24) = *(uint32_t *)(v13 - 24);
      *(uint32_t *)(v11 - 20) = *(uint32_t *)(v13 - 20);
      *(uint32_t *)(v11 - 16) = *(uint32_t *)(v13 - 16);
      *(uint32_t *)(v11 - 12) = *(uint32_t *)(v13 - 12);
      *(uint32_t *)(v11 - 8) = *(uint32_t *)(v13 - 8);
      *(uint32_t *)(v11 - 4) = *(uint32_t *)(v13 - 4);
    }
    while ( v12 != v17 );
    v14 = *(uint16_t *)(v18 + 4);
    v8 = 32 * v14;
    v15 = 144 * v14;
    v9 = 960 * v14;
    v21 = v8 + (*(uint16_t *)(v18 + 4) << 6);
    v10 = v19 + v15;
    v22 = v8 + 32;
  }
  *(uint32_t *)(v18 + 20) = *(uint32_t *)(a1 + 40);
  *(uint32_t *)(v18 + 8) = *(uint32_t *)(a1 + 44);
  hkPoweredChain_BuildConstraintMatrixAndLuDecomposition(
    *(uint32_t *)a1,
    (float *)(a1 + 12),
    *(char **)(a1 + 36),
    *a3 + 32,
    *a3 + 32 + 144 * v17,
    v8 + v22 + v9 + v21 + v10,
    *(uint32_t *)(a1 + 32),
    v21 + v10);
  result = *(uint32_t *)(v18 + 16);
  *a3 += result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkPoweredChain_UpdateLuDecomposition  (binary VA: 0x1afcb10)
// Original: hkPoweredChain_UpdateLuDecomposition
// ----------------------------------------------------------------------------
int hkPoweredChain_UpdateLuDecomposition(int a1, int a2, int a3, int a4)
{
  int result;
  uint8_t *v5;
  int v6;
  char *v7;
  int v8;
  typedef int _g4_t_v9;
  typedef uint8_t *_g4_t_v10;
  typedef uint8_t _g4_t_v11[204];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v11)) > _g4_s2 ? (32u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);

  if ( a1 <= 1 )
  {
    v5 = v11;
    memset(v11, 0, 192);
    result = 0;
  }
  else
  {
    result = a1 - 1;
    v5 = (uint8_t *)(a4 + 960 * (a1 - 1) - 960 + 384);
    std::memcpy(v11, (const void *)(a4 + 960 * (a1 - 1) - 960 + 768), 192);
  }
  v10 = v5;
  if ( result < a2 )
  {
    v6 = 960 * result + a4;
    v7 = (char *)((result << 6) + a3);
    v8 = result;
    do
    {
      v9 = v6;
      result = (int)(uintptr_t)hkPoweredChain_ComputeConstraintMatrixLuDecomposition_ForOneRow(
                      v8++ != a2 - 1,
                      v6,
                      v7,
                      (hkMatrix3f::Self *)v11,
                      &v10);
      v6 = v9 + 960;
      v7 += 64;
    }
    while ( v8 != a2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkPoweredChain_CalculateVelocities  (binary VA: 0x1afce80)
// Original: hkPoweredChain_CalculateVelocities
// ----------------------------------------------------------------------------
int hkPoweredChain_CalculateVelocities(int a1, int a2, int a3)
{
  int result;
  int v4;
  int v5;
  float *v6;
  float *v7;
  int v8;
  int v9;
  int v10;
  float v11; // xmm0_4
  float v12; // xmm7_4
  float v13; // xmm5_4
  float v14; // xmm2_4
  float v15; // xmm7_4
  float v16; // xmm3_4
  int v17;
  float v18;
  float v19;
  float *v20;
  float *v21;
  int v22;
  int v24;
  int v25;
  int v26;
  int v27;

  result = *(uint32_t *)(a2 + 20);
  if ( *(int *)(a2 + 4) > 0 )
  {
    v25 = result + 16;
    v22 = *(uint32_t *)(a2 + 16) + 16;
    v27 = 0;
    do
    {
      v4 = *(uint32_t *)(a2 + 24);
      v21 = (float *)(v25 - 16);
      v5 = *(uint32_t *)(a2 + 28);
      v6 = (float *)(v5 + *(uint32_t *)(v4 + 4 * v27));
      v7 = (float *)(*(uint32_t *)(v4 + 4 * v27 + 4) + v5);
      v8 = v22 - 16;
      v26 = v22 + 16;
      v9 = 0;
      v20 = (float *)(*(uint32_t *)(a2 + 36) + (v27 << 6));
      v10 = 0;
      do
      {
        v8 += 48;
        v18 = *(float *)(v26 + v9 + 8);
        v11 = *(float *)(a2 + 8) * *(float *)(*(uint32_t *)a2 + 64);
        v12 = *(float *)(a2 + 12);
        v24 = v9;
        v13 = (float)((float)((float)((float)((float)(v6[21] * *(float *)(v22 + v9 + 4))
                                            + (float)(*(float *)(v26 + v9 + 4) * v7[21]))
                                    + (float)((float)(v6[17] - v7[17]) * *(float *)(v8 - 44)))
                            * v11)
                    + (float)((float)((float)((float)((float)(v6[9] - v6[21]) * *(float *)(v22 + v9 + 4))
                                            + (float)((float)(v7[9] - v7[21]) * *(float *)(v26 + v9 + 4)))
                                    + (float)((float)((float)(v6[5] - v6[17]) - (float)(v7[5] - v7[17]))
                                            * *(float *)(v8 - 44)))
                            * v12))
            + (float)((float)((float)((float)((float)(v6[20] * *(float *)(v22 + v9))
                                            + (float)(*(float *)(v26 + v9) * v7[20]))
                                    + (float)((float)(v6[16] - v7[16]) * *(float *)(v8 - 48)))
                            * v11)
                    + (float)((float)((float)((float)((float)(v6[8] - v6[20]) * *(float *)(v22 + v9))
                                            + (float)((float)(v7[8] - v7[20]) * *(float *)(v26 + v9)))
                                    + (float)((float)((float)(v6[4] - v6[16]) - (float)(v7[4] - v7[16]))
                                            * *(float *)(v8 - 48)))
                            * v12));
        *(float *)(a3 + v10) = (float)(*(float *)(a2 + 8) * *(float *)(v22 - 16 + v9 + 12))
                             - (float)((float)((float)((float)((float)((float)(v6[22] * *(float *)(v22 + v9 + 8))
                                                                     + (float)(v18 * v7[22]))
                                                             + (float)((float)(v6[18] - v7[18]) * *(float *)(v8 - 40)))
                                                     * v11)
                                             + (float)((float)((float)((float)((float)(v6[10] - v6[22])
                                                                             * *(float *)(v22 + v9 + 8))
                                                                     + (float)((float)(v7[10] - v7[22]) * v18))
                                                             + (float)((float)((float)(v6[6] - v6[18])
                                                                             - (float)(v7[6] - v7[18]))
                                                                     * *(float *)(v8 - 40)))
                                                     * v12))
                                     + v13);
        v14 = v20[5];
        v15 = v20[4];
        v19 = v21[1];
        v16 = *(float *)(*(uint32_t *)a2 + 64) * v15;
        *(float *)(a3 + 16 + v10) = (float)((float)((float)(v20[3] * *(float *)(a1 + 4))
                                                  + *(float *)(v25 - 16 + 8 * v10 + 28))
                                          * v15)
                                  - (float)((float)((float)((float)((float)(v6[22] * v21[2])
                                                                  + (float)(v7[22] * *(float *)(v25 + 8 * v10 + 8)))
                                                          * v16)
                                                  + (float)((float)((float)((float)(v6[10] - v6[22]) * v21[2])
                                                                  + (float)((float)(v7[10] - v7[22])
                                                                          * *(float *)(v25 + 8 * v10 + 8)))
                                                          * v14))
                                          + (float)((float)((float)((float)((float)(v6[21] * v19)
                                                                          + (float)(*(float *)(v25 + 8 * v10 + 4)
                                                                                  * v7[21]))
                                                                  * v16)
                                                          + (float)((float)((float)((float)(v6[9] - v6[21]) * v19)
                                                                          + (float)((float)(v7[9] - v7[21])
                                                                                  * *(float *)(v25 + 8 * v10 + 4)))
                                                                  * v14))
                                                  + (float)((float)((float)((float)(*v21 * v6[20])
                                                                          + (float)(v7[20] * *(float *)(v25 + 8 * v10)))
                                                                  * v16)
                                                          + (float)((float)((float)((float)(v6[8] - v6[20]) * *v21)
                                                                          + (float)((float)(v7[8] - v7[20])
                                                                                  * *(float *)(v25 + 8 * v10)))
                                                                  * v14))));
        v9 += 48;
        v20 += 5;
        v10 += 4;
        v21 += 8;
      }
      while ( v24 != 96 );
      v17 = a3;
      ++v27;
      v22 += 144;
      a3 += 32;
      v25 += 96;
      *(uint32_t *)(v17 + 12) = 0;
      *(uint32_t *)(v17 + 28) = 0;
      result = v27;
    }
    while ( v27 < *(uint32_t *)(a2 + 4) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkPoweredChain_OverwriteVelocityWithExplicitImpulse  (binary VA: 0x1afd300)
// Original: hkPoweredChain_OverwriteVelocityWithExplicitImpulse
// ----------------------------------------------------------------------------
int hkPoweredChain_OverwriteVelocityWithExplicitImpulse(int a1, int a2, int a3, int a4)
{
  uint8_t *v4;
  int v5;
  uint8_t *v6;
  int result;

  v4 = (uint8_t *)(a3 + (a1 << 6));
  v5 = a4 + 32 * a1;
  v6 = &v4[20 * a2];
  result = ((int)*v4 >> (2 * a2)) & 3;
  if ( result == 1 )
    *(uint32_t *)(v5 + 4 * a2 + 16) = *((uint32_t *)v6 + 1);
  else
    *(uint32_t *)(v5 + 4 * a2 + 16) = *((uint32_t *)v6 + 2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkPoweredChain_RestoreVelocityValue  (binary VA: 0x1afd360)
// Original: hkPoweredChain_RestoreVelocityValue
// ----------------------------------------------------------------------------
int hkPoweredChain_RestoreVelocityValue(int a1, int a2, uint32_t *a3, int a4)
{
  int v4;
  int v5;
  float *v6;
  float *v7;
  int v8;
  float v9; // xmm2_4
  float v10; // xmm7_4
  float *v11;
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm5_4
  float v16;

  v4 = a3[6];
  v5 = a3[7];
  v6 = (float *)(v5 + *(uint32_t *)(v4 + 4 * a1));
  v7 = (float *)(*(uint32_t *)(v4 + 4 * a1 + 4) + v5);
  v16 = v7[22];
  v8 = a3[9] + (a1 << 6) + 20 * a2;
  v9 = *(float *)(v8 + 20);
  v10 = *(float *)(v8 + 16);
  v11 = (float *)(a3[5] + 32 * (a2 + 3 * a1));
  v12 = *(float *)(*a3 + 64) * v10;
  v13 = (float)((float)((float)((float)(v6[21] * v11[1]) + (float)(v7[21] * v11[5])) * v12)
              + (float)((float)((float)((float)(v6[9] - v6[21]) * v11[1]) + (float)((float)(v7[9] - v7[21]) * v11[5]))
                      * v9))
      + (float)((float)((float)((float)(v6[20] * *v11) + (float)(v7[20] * v11[4])) * v12)
              + (float)((float)((float)((float)(v6[8] - v6[20]) * *v11) + (float)((float)(v7[8] - v7[20]) * v11[4])) * v9));
  v14 = v7[10];
  *(float *)(a4 + 32 * a1 + 4 * a2 + 16) = (float)(v10 * v11[7])
                                         - (float)((float)((float)((float)((float)(v11[2] * v6[22])
                                                                         + (float)(v16 * v11[6]))
                                                                 * v12)
                                                         + (float)((float)((float)((float)(v6[10] - v6[22]) * v11[2])
                                                                         + (float)((float)(v14 - v16) * v11[6]))
                                                                 * v9))
                                                 + v13);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkPoweredChain_SolveConstraintMatrix_ComputeVectorG  (binary VA: 0x1afd4e0)
// Original: hkPoweredChain_SolveConstraintMatrix_ComputeVectorG
// ----------------------------------------------------------------------------
void hkPoweredChain_SolveConstraintMatrix_ComputeVectorG(uint32_t *a1, uint32_t *a2)
{
  int v2;
  float *v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef uint32_t *_g4_t_i;
  typedef float _g4_t_v8;
  typedef float _g4_t_v9;
  typedef float _g4_t_v10;
  typedef float _g4_t_v11;
  typedef float _g4_t_v12;
  typedef float _g4_t_v13;
  typedef float _g4_t_v14;
  typedef float _g4_t_v15;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v5)) > _g4_s1 ? (16u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v6)) > _g4_s2 ? (20u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_i)) > _g4_s3 ? (28u + sizeof(_g4_t_i)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v8)) > _g4_s4 ? (32u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v9)) > _g4_s5 ? (36u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v10)) > _g4_s6 ? (40u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v11)) > _g4_s7 ? (44u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v12)) > _g4_s8 ? (48u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v13)) > _g4_s9 ? (52u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v14)) > _g4_s10 ? (56u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v15)) > _g4_s11 ? (60u + sizeof(_g4_t_v15)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);

  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  a2[4] = 0;
  a2[5] = 0;
  a2[6] = 0;
  a2[7] = 0;
  if ( (int)a1[1] > 0 )
  {
    v2 = 0;
    for ( i = a2; ; i += 8 )
    {
      v5 = v2;
      v6 = 960 * v2;
      v3 = (float *)(a1[11] + 32 * v2);
      hkMatrix6fSetMulV(&v8, a1[8] + 960 * v2, i);
      v8 = *v3 - v8;
      v9 = v3[1] - v9;
      v10 = v3[2] - v10;
      v11 = v3[3] - v11;
      v12 = v3[4] - v12;
      v13 = v3[5] - v13;
      v14 = v3[6] - v14;
      v4 = a1[8] + v6 + 192;
      v15 = v3[7] - v15;
      hkMatrix6fSetMulV(i + 8, v4, &v8);
      v2 = v5 + 1;
      if ( v5 + 1 >= a1[1] )
        break;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkPoweredChain_ScanAndDisableMotors  (binary VA: 0x1afd660)
// Original: hkPoweredChain_ScanAndDisableMotors
// ----------------------------------------------------------------------------
int * hkPoweredChain_ScanAndDisableMotors(uint32_t *a1, int *a2, int *a3, float *a4)
{
  int *result;
  char *v5;
  float *v6;
  int v7;
  float *v8;
  float v9; // xmm4_4
  int v10;
  int v11;
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm5_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef char _g4_t_v22;
  typedef int _g4_t_v23;
  typedef g4_int128_t _g4_t_v24;
  typedef g4_int128_t _g4_t_v25;
  typedef float _g4_t_v26[12];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v20)) > _g4_s2 ? (20u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v21)) > _g4_s3 ? (24u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v22)) > _g4_s4 ? (24u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v23)) > _g4_s5 ? (28u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v24)) > _g4_s6 ? (32u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v25)) > _g4_s7 ? (48u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v26)) > _g4_s8 ? (64u + sizeof(_g4_t_v26)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);

  v24 = 0;
  v25 = 0;
  result = (int *)a1[1];
  v5 = (char *)result - 1;
  v23 = (int)(uintptr_t)(result) - 1;
  if ( (int)(uintptr_t)(result) - 1 >= 0 )
  {
    v6 = (float *)(32 * (uint32_t)(uintptr_t)(result) + a1[10]);
    v7 = (uint32_t)(uintptr_t)(v5) << 6;
    v20 = 960 * (uint32_t)(uintptr_t)(v5);
    v8 = v6 + 4;
    v19 = -1;
    v18 = -1;
    v9 = 0.0;
    do
    {
      v21 = v7;
      hkMatrix6fSetMulV(v26, a1[8] + v20 + 384, &v24);
      v10 = v21;
      v11 = a1[9];
      *(float *)&v24 = *v6 - v26[0];
      result = (int *)(v11 + v21);
      *((float *)&v24 + 1) = v6[1] - v26[1];
      *((float *)&v24 + 2) = v6[2] - v26[2];
      *((float *)&v24 + 3) = v6[3] - v26[3];
      v12 = *v8 - v26[4];
      *(float *)&v25 = v12;
      v13 = v8[1] - v26[5];
      *((float *)&v25 + 1) = v13;
      v14 = v8[2] - v26[6];
      *((float *)&v25 + 2) = v14;
      *((float *)&v25 + 3) = v8[3] - v26[7];
      v22 = *(uint8_t *)result;
      if ( (*(uint8_t *)result & 3) == 0 )
      {
        v15 = fmaxf(v12 - (float)(1.05f * *((float *)result + 1)), (float)(1.05f * *((float *)result + 2)) - v12);
        if ( v15 > v9 )
        {
          *a4 = v12;
          v9 = v15;
          v19 = 0;
          result = (int *)(a1[9] + v10);
          v22 = *(uint8_t *)result;
          v18 = v23;
        }
      }
      if ( (v22 & 0xC) == 0 )
      {
        v16 = fmaxf(v13 - (float)(1.05f * *((float *)result + 6)), (float)(*((float *)result + 7) * 1.05f) - v13);
        if ( v16 > v9 )
        {
          *a4 = v13;
          v9 = v16;
          v19 = 1;
          result = (int *)(a1[9] + v10);
          v22 = *(uint8_t *)result;
          v18 = v23;
        }
      }
      if ( (v22 & 0x30) == 0 )
      {
        v17 = fmaxf(v14 - (float)(1.05f * *((float *)result + 11)), (float)(*((float *)result + 12) * 1.05f) - v14);
        if ( v17 > v9 )
        {
          v9 = v17;
          *a4 = v14;
          result = (int *)v23;
          v18 = v23;
          v19 = 2;
        }
      }
      --v23;
      v20 -= 960;
      v6 -= 8;
      v8 -= 8;
      v7 = v10 - 64;
    }
    while ( v23 != -1 );
    if ( v18 != -1 )
    {
      *(uint8_t *)(a1[9] + (v18 << 6)) = ((2 * (*a4 <= *(float *)(a1[9] + (v18 << 6) + 20 * v19 + 4)) + 1) << (2 * v19))
                                     | *(uint8_t *)(a1[9] + (v18 << 6)) & ~(3 << (2 * v19));
      *a2 = v18;
      *a3 = v19;
      return a3;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkPoweredChain_ScanAndEnableMotors  (binary VA: 0x1afd950)
// Original: hkPoweredChain_ScanAndEnableMotors
// ----------------------------------------------------------------------------
int * hkPoweredChain_ScanAndEnableMotors(uint32_t *a1, int *a2, int *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int *result;
  int v8;
  int v9;
  int v10;
  int v11;
  float *v12;
  float *v13;
  float *v14;
  float v15; // xmm7_4
  float v16; // xmm2_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm5_4
  float v21; // xmm0_4
  typedef hkMatrix3f::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef float _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int *_g4_t_v27;
  typedef float *_g4_t_v28;
  typedef float *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef float _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef float _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef float _g4_t_v40;
  typedef g4_int128_t _g4_t_v41;
  typedef g4_int128_t _g4_t_v42;
  typedef g4_int128_t _g4_t_v43;
  typedef g4_int128_t _g4_t_v44;
  typedef g4_int128_t _g4_t_v45;
  typedef g4_int128_t _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
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
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  enum : size_t {
    _g4_s0 = 560u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v23)) > _g4_s1 ? (24u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v24)) > _g4_s2 ? (28u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v25)) > _g4_s3 ? (32u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v26)) > _g4_s4 ? (36u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v27)) > _g4_s5 ? (48u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v28)) > _g4_s6 ? (52u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v29)) > _g4_s7 ? (56u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v30)) > _g4_s8 ? (64u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v31)) > _g4_s9 ? (72u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v32)) > _g4_s10 ? (76u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v33)) > _g4_s11 ? (84u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v34)) > _g4_s12 ? (88u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v35)) > _g4_s13 ? (100u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v36)) > _g4_s14 ? (108u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v37)) > _g4_s15 ? (112u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v38)) > _g4_s16 ? (116u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v39)) > _g4_s17 ? (120u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v40)) > _g4_s18 ? (124u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v41)) > _g4_s19 ? (128u + sizeof(_g4_t_v41)) : _g4_s19,
    _g4_s21 = (144u + sizeof(_g4_t_v42)) > _g4_s20 ? (144u + sizeof(_g4_t_v42)) : _g4_s20,
    _g4_s22 = (160u + sizeof(_g4_t_v43)) > _g4_s21 ? (160u + sizeof(_g4_t_v43)) : _g4_s21,
    _g4_s23 = (176u + sizeof(_g4_t_v44)) > _g4_s22 ? (176u + sizeof(_g4_t_v44)) : _g4_s22,
    _g4_s24 = (192u + sizeof(_g4_t_v45)) > _g4_s23 ? (192u + sizeof(_g4_t_v45)) : _g4_s23,
    _g4_s25 = (208u + sizeof(_g4_t_v46)) > _g4_s24 ? (208u + sizeof(_g4_t_v46)) : _g4_s24,
    _g4_s26 = (224u + sizeof(_g4_t_v47)) > _g4_s25 ? (224u + sizeof(_g4_t_v47)) : _g4_s25,
    _g4_s27 = (228u + sizeof(_g4_t_v48)) > _g4_s26 ? (228u + sizeof(_g4_t_v48)) : _g4_s26,
    _g4_s28 = (232u + sizeof(_g4_t_v49)) > _g4_s27 ? (232u + sizeof(_g4_t_v49)) : _g4_s27,
    _g4_s29 = (236u + sizeof(_g4_t_v50)) > _g4_s28 ? (236u + sizeof(_g4_t_v50)) : _g4_s28,
    _g4_s30 = (240u + sizeof(_g4_t_v51)) > _g4_s29 ? (240u + sizeof(_g4_t_v51)) : _g4_s29,
    _g4_s31 = (244u + sizeof(_g4_t_v52)) > _g4_s30 ? (244u + sizeof(_g4_t_v52)) : _g4_s30,
    _g4_s32 = (248u + sizeof(_g4_t_v53)) > _g4_s31 ? (248u + sizeof(_g4_t_v53)) : _g4_s31,
    _g4_s33 = (252u + sizeof(_g4_t_v54)) > _g4_s32 ? (252u + sizeof(_g4_t_v54)) : _g4_s32,
    _g4_s34 = (256u + sizeof(_g4_t_v55)) > _g4_s33 ? (256u + sizeof(_g4_t_v55)) : _g4_s33,
    _g4_s35 = (260u + sizeof(_g4_t_v56)) > _g4_s34 ? (260u + sizeof(_g4_t_v56)) : _g4_s34,
    _g4_s36 = (264u + sizeof(_g4_t_v57)) > _g4_s35 ? (264u + sizeof(_g4_t_v57)) : _g4_s35,
    _g4_s37 = (268u + sizeof(_g4_t_v58)) > _g4_s36 ? (268u + sizeof(_g4_t_v58)) : _g4_s36,
    _g4_s38 = (272u + sizeof(_g4_t_v59)) > _g4_s37 ? (272u + sizeof(_g4_t_v59)) : _g4_s37,
    _g4_s39 = (276u + sizeof(_g4_t_v60)) > _g4_s38 ? (276u + sizeof(_g4_t_v60)) : _g4_s38,
    _g4_s40 = (280u + sizeof(_g4_t_v61)) > _g4_s39 ? (280u + sizeof(_g4_t_v61)) : _g4_s39,
    _g4_s41 = (284u + sizeof(_g4_t_v62)) > _g4_s40 ? (284u + sizeof(_g4_t_v62)) : _g4_s40,
    _g4_s42 = (288u + sizeof(_g4_t_v63)) > _g4_s41 ? (288u + sizeof(_g4_t_v63)) : _g4_s41,
    _g4_s43 = (292u + sizeof(_g4_t_v64)) > _g4_s42 ? (292u + sizeof(_g4_t_v64)) : _g4_s42,
    _g4_s44 = (296u + sizeof(_g4_t_v65)) > _g4_s43 ? (296u + sizeof(_g4_t_v65)) : _g4_s43,
    _g4_s45 = (300u + sizeof(_g4_t_v66)) > _g4_s44 ? (300u + sizeof(_g4_t_v66)) : _g4_s44,
    _g4_s46 = (304u + sizeof(_g4_t_v67)) > _g4_s45 ? (304u + sizeof(_g4_t_v67)) : _g4_s45,
    _g4_s47 = (308u + sizeof(_g4_t_v68)) > _g4_s46 ? (308u + sizeof(_g4_t_v68)) : _g4_s46,
    _g4_s48 = (312u + sizeof(_g4_t_v69)) > _g4_s47 ? (312u + sizeof(_g4_t_v69)) : _g4_s47,
    _g4_s49 = (316u + sizeof(_g4_t_v70)) > _g4_s48 ? (316u + sizeof(_g4_t_v70)) : _g4_s48,
    _g4_s50 = (320u + sizeof(_g4_t_v71)) > _g4_s49 ? (320u + sizeof(_g4_t_v71)) : _g4_s49,
    _g4_s51 = (324u + sizeof(_g4_t_v72)) > _g4_s50 ? (324u + sizeof(_g4_t_v72)) : _g4_s50,
    _g4_s52 = (328u + sizeof(_g4_t_v73)) > _g4_s51 ? (328u + sizeof(_g4_t_v73)) : _g4_s51,
    _g4_s53 = (332u + sizeof(_g4_t_v74)) > _g4_s52 ? (332u + sizeof(_g4_t_v74)) : _g4_s52,
    _g4_s54 = (336u + sizeof(_g4_t_v75)) > _g4_s53 ? (336u + sizeof(_g4_t_v75)) : _g4_s53,
    _g4_s55 = (340u + sizeof(_g4_t_v76)) > _g4_s54 ? (340u + sizeof(_g4_t_v76)) : _g4_s54,
    _g4_s56 = (344u + sizeof(_g4_t_v77)) > _g4_s55 ? (344u + sizeof(_g4_t_v77)) : _g4_s55,
    _g4_s57 = (348u + sizeof(_g4_t_v78)) > _g4_s56 ? (348u + sizeof(_g4_t_v78)) : _g4_s56,
    _g4_s58 = (352u + sizeof(_g4_t_v79)) > _g4_s57 ? (352u + sizeof(_g4_t_v79)) : _g4_s57,
    _g4_s59 = (356u + sizeof(_g4_t_v80)) > _g4_s58 ? (356u + sizeof(_g4_t_v80)) : _g4_s58,
    _g4_s60 = (360u + sizeof(_g4_t_v81)) > _g4_s59 ? (360u + sizeof(_g4_t_v81)) : _g4_s59,
    _g4_s61 = (364u + sizeof(_g4_t_v82)) > _g4_s60 ? (364u + sizeof(_g4_t_v82)) : _g4_s60,
    _g4_s62 = (368u + sizeof(_g4_t_v83)) > _g4_s61 ? (368u + sizeof(_g4_t_v83)) : _g4_s61,
    _g4_s63 = (372u + sizeof(_g4_t_v84)) > _g4_s62 ? (372u + sizeof(_g4_t_v84)) : _g4_s62,
    _g4_s64 = (376u + sizeof(_g4_t_v85)) > _g4_s63 ? (376u + sizeof(_g4_t_v85)) : _g4_s63,
    _g4_s65 = (380u + sizeof(_g4_t_v86)) > _g4_s64 ? (380u + sizeof(_g4_t_v86)) : _g4_s64,
    _g4_s66 = (384u + sizeof(_g4_t_v87)) > _g4_s65 ? (384u + sizeof(_g4_t_v87)) : _g4_s65,
    _g4_s67 = (388u + sizeof(_g4_t_v88)) > _g4_s66 ? (388u + sizeof(_g4_t_v88)) : _g4_s66,
    _g4_s68 = (392u + sizeof(_g4_t_v89)) > _g4_s67 ? (392u + sizeof(_g4_t_v89)) : _g4_s67,
    _g4_s69 = (396u + sizeof(_g4_t_v90)) > _g4_s68 ? (396u + sizeof(_g4_t_v90)) : _g4_s68,
    _g4_s70 = (400u + sizeof(_g4_t_v91)) > _g4_s69 ? (400u + sizeof(_g4_t_v91)) : _g4_s69,
    _g4_s71 = (404u + sizeof(_g4_t_v92)) > _g4_s70 ? (404u + sizeof(_g4_t_v92)) : _g4_s70,
    _g4_s72 = (408u + sizeof(_g4_t_v93)) > _g4_s71 ? (408u + sizeof(_g4_t_v93)) : _g4_s71,
    _g4_s73 = (412u + sizeof(_g4_t_v94)) > _g4_s72 ? (412u + sizeof(_g4_t_v94)) : _g4_s72,
    _g4_s74 = (416u + sizeof(_g4_t_v95)) > _g4_s73 ? (416u + sizeof(_g4_t_v95)) : _g4_s73,
    _g4_s75 = (420u + sizeof(_g4_t_v96)) > _g4_s74 ? (420u + sizeof(_g4_t_v96)) : _g4_s74,
    _g4_s76 = (424u + sizeof(_g4_t_v97)) > _g4_s75 ? (424u + sizeof(_g4_t_v97)) : _g4_s75,
    _g4_s77 = (428u + sizeof(_g4_t_v98)) > _g4_s76 ? (428u + sizeof(_g4_t_v98)) : _g4_s76,
    _g4_s78 = (432u + sizeof(_g4_t_v99)) > _g4_s77 ? (432u + sizeof(_g4_t_v99)) : _g4_s77,
    _g4_s79 = (436u + sizeof(_g4_t_v100)) > _g4_s78 ? (436u + sizeof(_g4_t_v100)) : _g4_s78,
    _g4_s80 = (440u + sizeof(_g4_t_v101)) > _g4_s79 ? (440u + sizeof(_g4_t_v101)) : _g4_s79,
    _g4_s81 = (444u + sizeof(_g4_t_v102)) > _g4_s80 ? (444u + sizeof(_g4_t_v102)) : _g4_s80,
    _g4_s82 = (448u + sizeof(_g4_t_v103)) > _g4_s81 ? (448u + sizeof(_g4_t_v103)) : _g4_s81,
    _g4_s83 = (452u + sizeof(_g4_t_v104)) > _g4_s82 ? (452u + sizeof(_g4_t_v104)) : _g4_s82,
    _g4_s84 = (456u + sizeof(_g4_t_v105)) > _g4_s83 ? (456u + sizeof(_g4_t_v105)) : _g4_s83,
    _g4_s85 = (460u + sizeof(_g4_t_v106)) > _g4_s84 ? (460u + sizeof(_g4_t_v106)) : _g4_s84,
    _g4_s86 = (464u + sizeof(_g4_t_v107)) > _g4_s85 ? (464u + sizeof(_g4_t_v107)) : _g4_s85,
    _g4_s87 = (468u + sizeof(_g4_t_v108)) > _g4_s86 ? (468u + sizeof(_g4_t_v108)) : _g4_s86,
    _g4_s88 = (472u + sizeof(_g4_t_v109)) > _g4_s87 ? (472u + sizeof(_g4_t_v109)) : _g4_s87,
    _g4_s89 = (476u + sizeof(_g4_t_v110)) > _g4_s88 ? (476u + sizeof(_g4_t_v110)) : _g4_s88
  };
  alignas(16) uint8_t _g4_sf[_g4_s89];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 84u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 88u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 100u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 108u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 116u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 120u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 124u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 128u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 144u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 160u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 176u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 192u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 208u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 224u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 228u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 232u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 236u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 240u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 244u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 248u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 252u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 256u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 260u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 264u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 268u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 272u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 276u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 280u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 284u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 288u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 292u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 296u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 300u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 304u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 308u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 312u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 316u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 320u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 324u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 328u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 332u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 336u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 340u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 344u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 348u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 352u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 356u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 360u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 364u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 368u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 372u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 376u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 380u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 384u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 388u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 392u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 396u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 400u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 404u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 408u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 412u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 416u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 420u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 424u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 428u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 432u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 436u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 440u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 444u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 448u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 452u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 456u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 460u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 464u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 468u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 472u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 476u);

  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v3 = a1[10];
  v45 = 0;
  v4 = v3;
  v46 = 0;
  hkMatrix6fSetMulV(&v63, a1[8] + 960 * a1[1] - 576, &v45);
  v5 = a1[1];
  v6 = 32 * (v5 + 0x7FFFFFF);
  *(float *)&v45 = *(float *)(v4 + v6 + 32) - v63;
  *((float *)&v45 + 1) = *(float *)(v4 + v6 + 36) - v64;
  *((float *)&v45 + 2) = *(float *)(v4 + v6 + 40) - v65;
  *((float *)&v45 + 3) = *(float *)(v4 + v6 + 44) - v66;
  *(float *)&v46 = *(float *)(v4 + v6 + 48) - v67;
  *((float *)&v46 + 1) = *(float *)(v4 + v6 + 52) - v68;
  *((float *)&v46 + 2) = *(float *)(v4 + v6 + 56) - v69;
  result = (int *)(v5 - 1);
  v32 = v5 - 1;
  *((float *)&v46 + 3) = *(float *)(v4 + v6 + 60) - v70;
  if ( v5 - 1 < 0 )
    return result;
  v24 = -1;
  v30 = (uint32_t)(uintptr_t)(result) << 6;
  v23 = -1;
  v29 = (float *)(v6 + v4);
  v28 = (float *)(v6 + v4 + 16);
  v35 = 4 * v5;
  v31 = 96 * (uint32_t)(uintptr_t)(result);
  v25 = 0.0;
  result = (int *)(v5 - 1);
  while ( 2 )
  {
    v27 = (int *)((char *)result - 1);
    v41 = v43;
    v42 = v44;
    v43 = v45;
    *(uint64_t *)&v44 = (uint64_t)(uintptr_t)(v46);
    v8 = a1[8] + 960 * (int16_t)((uint16_t)(uintptr_t)(result) - 1);
    *((uint64_t *)&v44 + 1) = *((uint64_t *)&v46 + 1);
    if ( result != nullptr )
    {
      hkMatrix6fSetMulV(&v63, v8 + 384, &v45);
      *(float *)&v45 = *v29 - v63;
      *((float *)&v45 + 1) = v29[1] - v64;
      *((float *)&v45 + 2) = v29[2] - v65;
      *((float *)&v45 + 3) = v29[3] - v66;
      *(float *)&v46 = *v28 - v67;
      *((float *)&v46 + 1) = v28[1] - v68;
      *((float *)&v46 + 2) = v28[2] - v69;
      *((float *)&v46 + 3) = v28[3] - v70;
      hkMatrix6fSetTranspose((hkMatrix3f::Self *)&v63, (hkMatrix3f::Self *)(v8 + 768));
    }
    else
    {
      v45 = 0;
      v46 = 0;
      v63 = 1.0;
      v64 = 0.0;
      v65 = 0.0;
      v67 = 0.0;
      v69 = 0.0;
      v68 = 1.0;
      v70 = 0.0;
      v66 = 0.0;
      v71 = 0;
      v72 = 0;
      v73 = 1065353216;
      v99 = 1065353216;
      v100 = 0;
      v101 = 0;
      v74 = 0;
      v75 = 0;
      v76 = 0;
      v77 = 0;
      v78 = 0;
      v79 = 0;
      v80 = 0;
      v81 = 0;
      v82 = 0;
      v83 = 0;
      v84 = 0;
      v85 = 0;
      v86 = 0;
      v87 = 0;
      v88 = 0;
      v89 = 0;
      v90 = 0;
      v91 = 0;
      v92 = 0;
      v93 = 0;
      v94 = 0;
      v95 = 0;
      v96 = 0;
      v97 = 0;
      v98 = 0;
      v102 = 0;
      v105 = 0;
      v106 = 0;
      v107 = 0;
      v108 = 0;
      v103 = 0;
      v104 = 1065353216;
      v109 = 1065353216;
      v110 = 0;
    }
    hkMatrix6fSetMulV(&v47, &v63, &v45);
    hkMatrix6fSetMulV(&v55, v8 + 1536, &v43);
    v22 = (hkMatrix3f::Self *)(v8 + 1728);
    v9 = 0;
    v47 = v47 + v55;
    v48 = v48 + v56;
    v49 = v49 + v57;
    v50 = v50 + v58;
    v51 = v51 + v59;
    v52 = v52 + v60;
    v53 = v53 + v61;
    v54 = v54 + v62;
    hkMatrix6fSetMulV(&v55, v22, &v41);
    v26 = a1[9];
    v38 = v30 + v26;
    v47 = v47 + v55;
    v48 = v48 + v56;
    v49 = v49 + v57;
    v50 = v50 + v58;
    v51 = v51 + v59;
    v52 = v52 + v60;
    v53 = v53 + v61;
    v54 = v54 + v62;
    v39 = v31;
    do
    {
      if ( (((int)*(uint8_t *)(v30 + v26) >> (2 * v9)) & 1) == 0 )
        goto LABEL_9;
      v36 = ((int)*(uint8_t *)(v30 + v26) >> (2 * v9)) & 3;
      v10 = a1[6];
      v33 = v9;
      v11 = a1[7];
      v12 = (float *)(v11 + *(uint32_t *)(v10 + v35 - 4));
      v13 = (float *)(*(uint32_t *)(v10 + v35) + v11);
      v14 = (float *)(a1[5] + v39);
      v40 = *(float *)(v38 + 20);
      v15 = v13[22];
      v34 = *(float *)(v38 + 16);
      v16 = v34 * *(float *)(*a1 + 64);
      v9 = v33;
      v37 = v12[22];
      v17 = v14[2];
      v18 = v14[6];
      v19 = *(&v51 + v33);
      v20 = (float)(v34 * v14[7])
          - (float)((float)((float)((float)((float)(v37 * v17) + (float)(v15 * v18)) * v16)
                          + (float)((float)((float)((float)(v12[10] - v37) * v17) + (float)((float)(v13[10] - v15) * v18))
                                  * v40))
                  + (float)((float)((float)((float)((float)(v12[21] * v14[1]) + (float)(v13[21] * v14[5])) * v16)
                                  + (float)((float)((float)((float)(v12[9] - v12[21]) * v14[1])
                                                  + (float)((float)(v13[9] - v13[21]) * v14[5]))
                                          * v40))
                          + (float)((float)((float)((float)(v12[20] * *v14) + (float)(v13[20] * v14[4])) * v16)
                                  + (float)((float)((float)((float)(v12[8] - v12[20]) * *v14)
                                                  + (float)((float)(v13[8] - v13[20]) * v14[4]))
                                          * v40))));
      if ( v36 == 3 )
      {
        if ( v20 < v19 )
          goto LABEL_9;
      }
      else if ( v36 != 1 || v19 < v20 )
      {
        goto LABEL_9;
      }
      v21 = fabs(v19 - v20);
      if ( v21 > v25 )
      {
        v24 = v33;
        v25 = v21;
        v23 = v32;
      }
LABEL_9:
      ++v9;
      v38 += 20;
      v39 += 32;
    }
    while ( v9 != 3 );
    v31 -= 96;
    v35 -= 4;
    result = v27;
    v30 -= 64;
    v29 -= 8;
    v28 -= 8;
    if ( v27 != (int *)-1 )
    {
      v32 = (int)(uintptr_t)(v27);
      continue;
    }
    break;
  }
  if ( v23 != -1 )
  {
    *(uint8_t *)(v26 + (v23 << 6)) &= ~(3 << (2 * v24));
    *a2 = v23;
    result = a3;
    *a3 = v24;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkInternalConstraintUtils_calcRelativeAngle  (binary VA: 0x1afe420)
// Original: hkInternalConstraintUtils_calcRelativeAngle
// ----------------------------------------------------------------------------
float * hkInternalConstraintUtils_calcRelativeAngle(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  float v6; // xmm7_4
  __m128i v7;
  __m128i v8;
  int v9;
  float v10; // xmm2_4
  float v11; // xmm1_4
  __m128i v12;
  float v13; // xmm4_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  int v18;
  int v19;
  float v20; // xmm0_4
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;

g4_m128_raw(v7) = *(unsigned int *)a2;
  v6 = a1[1] + a2[1];
  v21 = *(float *)g4_m128_ptr<int32_t>(v7);
  *(float *)g4_m128_ptr<int32_t>(v7) = *(float *)g4_m128_ptr<int32_t>(v7) + *a1;
  v23 = a2[2];
  v8 = v7;
  v24 = a2[3];
  v22 = a2[1];
  v25 = v23 + a1[2];
  *(float *)g4_m128_ptr<int32_t>(v8) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v7) * *(float *)g4_m128_ptr<int32_t>(v7)) + (float)(v6 * v6))
                         + (float)(v25 * v25);
  if ( *(float *)g4_m128_ptr<int32_t>(v8) > 0.0 )
  {
g4_m128_raw(v12) = 0x3FC00000u;
    v9 = ((_mm_cvtsi128_si32(v8) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v8) >> 1));
    v10 = (float)(*(float *)&v9 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v8)) * *(float *)&v9) * (float)(*(float *)&v9 * *(float *)&v9));
    v11 = (float)(v10 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v8)) * v10) * (float)(v10 * v10));
    *(float *)g4_m128_ptr<int32_t>(v12) = (float)((float)(1.5 * v11)
                                    - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v8)) * v11) * (float)(v11 * v11)))
                            * *(float *)g4_m128_ptr<int32_t>(v8);
    if ( *(float *)g4_m128_ptr<int32_t>(v12) > 1.0e-16f )
    {
      v18 = _mm_cvtsi128_si32(v12);
      v19 = (2130706432 - v18) & ((v18 ^ (v18 + 2139095040)) >> 31);
      v20 = (float)(2.0
                  - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                          * (float)((float)(2.0
                                          - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                                  * (float)((float)(2.0
                                                                  - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v19))
                                                          * *(float *)&v19)))
                                  * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v19))
                                          * *(float *)&v19))))
          * (float)((float)(2.0
                          - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                                  * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v19))
                                          * *(float *)&v19)))
                  * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v19)) * *(float *)&v19));
      v21 = *(float *)g4_m128_ptr<int32_t>(v7) * v20;
      v22 = v6 * v20;
      v23 = v25 * v20;
      v24 = v20 * (float)(v24 + a1[3]);
    }
  }
  v13 = a4[2];
  v14 = a4[1];
  v15 = (float)(v22 * v13) - (float)(v23 * v14);
  v16 = (float)(v23 * *a4) - (float)(v13 * v21);
  v26 = atan2f(
          (float)((float)(v15 * *a3) + (float)(v16 * a3[1]))
        + (float)((float)((float)(v14 * v21) - (float)(*a4 * v22)) * a3[2]),
          (float)((float)((float)((float)(v23 * v16) - (float)(v22 * (float)((float)(v14 * v21) - (float)(*a4 * v22))))
                        * *a3)
                + (float)((float)((float)(v21 * (float)((float)(v14 * v21) - (float)(*a4 * v22))) - (float)(v23 * v15))
                        * a3[1]))
        + (float)((float)((float)(v15 * v22) - (float)(v16 * v21)) * a3[2]));
  *a6 = v26;
  *a5 = v21;
  a5[1] = v22;
  a5[2] = v23;
  a5[3] = v24;
  return a6;
}

// ----------------------------------------------------------------------------
// Function: hkCalcMotorData  (binary VA: 0x1afe720)
// Original: hkCalcMotorData
// ----------------------------------------------------------------------------
int hkCalcMotorData(int a1, int a2, float *a3)
{
  int result;
  char v4;
  float v5; // xmm1_4
  float v6; // xmm5_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  float v15; // xmm1_4
  int v16;
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm4_4
  float v20; // xmm4_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm2_4

  result = a1;
  v4 = *(uint8_t *)(a1 + 8);
  switch ( v4 )
  {
    case 1:
      v15 = *(float *)(a2 + 20);
      v16 = *(uint32_t *)(a2 + 4);
      v17 = *(float *)(v16 + 12);
      v18 = (float)(*(float *)(a1 + 28) * v15) * v17;
      v19 = v17 * *(float *)(a1 + 32);
      if ( fabs(v15 - v18) > v19 )
      {
        if ( (float)(v15 - v18) <= 0.0 )
          v19 = -v19;
        v20 = v19 + v18;
      }
      else
      {
        v20 = *(float *)(a2 + 20);
      }
      v21 = fabs(v15);
      v8 = *(float *)(a2 + 12);
      v22 = (float)-v21 - v8;
      if ( v22 <= v20 )
        v22 = fminf(v21 - v8, v20);
      v23 = *(float *)(a2 + 16) + v22;
      v13 = *(float *)(a1 + 16);
      v10 = *(float *)(a1 + 20);
      v14 = -v13;
      v12 = *(float *)(a1 + 24);
      v7 = v23 * *(float *)(v16 + 16);
LABEL_12:
      a3[1] = v7;
      *a3 = v8;
      a3[2] = v13;
      a3[3] = v14;
      a3[4] = v10;
      a3[5] = v12;
      return result;
    case 2:
      if ( *(uint8_t *)(a1 + 28) != 0 )
        v7 = (float)(*(float *)(a2 + 16) + *(float *)(a2 + 20)) * *(float *)(*(uint32_t *)(a2 + 4) + 16);
      else
        v7 = *(float *)(a1 + 24);
      v10 = *(float *)(a1 + 20);
      v8 = *(float *)(a2 + 12);
      v12 = v10;
      v13 = *(float *)(a1 + 16);
      v14 = *(float *)(a1 + 12);
      goto LABEL_12;
    case 3:
      v5 = **(float **)(a2 + 4);
      v6 = 1.0 / *(float *)a2;
      v7 = 0.0;
      v8 = *(float *)(a2 + 16) + *(float *)(a2 + 20);
      v9 = (float)((float)(*(float *)(a1 + 20) * v5) * v5) * v6;
      if ( v9 < 0.0 )
        v10 = 0.0;
      else
        v10 = fminf(1.0, v9);
      v11 = (float)(v5 * *(float *)(a1 + 24)) * v6;
      if ( v11 < 0.0 )
        v12 = 0.0;
      else
        v12 = fminf(1.0, v11);
      v13 = *(float *)(a1 + 16);
      v14 = *(float *)(a1 + 12);
      goto LABEL_12;
    case 4:
      return (*(int (**)(int, int, float *))(a1 + 20))(a1, a2, a3);
    default:
      return result;
  }
}

// ----------------------------------------------------------------------------
// Function: hk1dLinearVelocityMotorBeginJacobian  (binary VA: 0x1afe920)
// Original: hk1dLinearVelocityMotorBeginJacobian
// ----------------------------------------------------------------------------
float * hk1dLinearVelocityMotorBeginJacobian(float *a1, float *a2, int a3, int a4, float *a5)
{
  int v5;
  float *v6;
  float v7; // xmm3_4
  float v8; // xmm0_4
  float v9; // xmm6_4
  float v10; // xmm2_4
  float v11; // xmm7_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  __m128i v14;
  float v15; // xmm5_4
  float v16;
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm4_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm2_4
  __m128i v26;
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm6_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm6_4
  float v34; // xmm5_4
  float v35; // xmm0_4
  int v36;
  int v37;
  float v38; // xmm0_4
  unsigned int v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;

  v5 = *(uint32_t *)(a3 + 48);
  v6 = *(float **)(a3 + 52);
  *(float *)a4 = *a1;
  *(float *)(a4 + 4) = a1[1];
  *(float *)(a4 + 8) = a1[2];
  *(float *)(a4 + 12) = a1[3];
  *(float *)&v40 = a2[1] - v6[29];
  v7 = a1[2];
  v42 = *a2 - v6[28];
  v8 = a1[1];
  v9 = *a2 - *(float *)(v5 + 112);
  v10 = (float)((float)(a2[1] - *(float *)(v5 + 116)) * v7) - (float)((float)(a2[2] - *(float *)(v5 + 120)) * v8);
  v44 = a2[2] - v6[30];
  v11 = v9 * v7;
  v12 = (float)(v9 * v8) - (float)((float)(a2[1] - *(float *)(v5 + 116)) * *a1);
  v45 = (float)((float)(a2[2] - *(float *)(v5 + 120)) * *a1) - v11;
  v13 = (float)(v44 * v8) - (float)(*(float *)&v40 * v7);
g4_m128_raw(v14) = v40;
  *(float *)g4_m128_ptr<int32_t>(v14) = (float)(*(float *)&v40 * *a1) - (float)(v8 * v42);
  v15 = (float)(a1[2] * v42) - (float)(v44 * *a1);
  v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
  *(float *)g4_m128_ptr<int32_t>(v14) = *(float *)(v5 + 64) * v10;
  *(uint32_t *)(a4 + 16) =g4_m128_lane<int32_t>(v14, 0);
  v17 = *(float *)(v5 + 68) * v10;
  *(float *)(a4 + 20) = v17;
  v18 = *(float *)(v5 + 72) * v10;
  *(float *)(a4 + 24) = v18;
  v19 = v10 * *(float *)(v5 + 76);
  *(float *)(a4 + 28) = v19;
  v20 = v19;
  v21 = (float)(*(float *)(v5 + 80) * v45) + *(float *)g4_m128_ptr<int32_t>(v14);
  *(float *)(a4 + 16) = v21;
  *(float *)g4_m128_ptr<int32_t>(v14) = (float)(*(float *)(v5 + 84) * v45) + v17;
  *(uint32_t *)(a4 + 20) =g4_m128_lane<int32_t>(v14, 0);
  v22 = (float)(*(float *)(v5 + 88) * v45) + v18;
  *(float *)(a4 + 24) = v22;
  v23 = (float)(*(float *)(v5 + 92) * v45) + v20;
  *(float *)(a4 + 28) = v23;
  v24 = v21 + (float)(*(float *)(v5 + 96) * v12);
  *(float *)(a4 + 16) = v24;
  v41 = v24;
  v25 = (float)(*(float *)(v5 + 100) * v12) + *(float *)g4_m128_ptr<int32_t>(v14);
  *(float *)(a4 + 20) = v25;
g4_m128_raw(v26) = *(unsigned int *)(v5 + 104);
  *(float *)g4_m128_ptr<int32_t>(v26) = (float)(*(float *)g4_m128_ptr<int32_t>(v26) * v12) + v22;
  *(uint32_t *)(a4 + 24) =g4_m128_lane<int32_t>(v26, 0);
  *(float *)(a4 + 28) = (float)(v12 * *(float *)(v5 + 108)) + v23;
  v27 = v6[16] * v13;
  *(float *)(a4 + 32) = v27;
  v28 = v6[17] * v13;
  *(float *)(a4 + 36) = v28;
  *(float *)g4_m128_ptr<int32_t>(v14) = v6[18] * v13;
  *(uint32_t *)(a4 + 40) =g4_m128_lane<int32_t>(v14, 0);
  v29 = v13 * v6[19];
  *(float *)(a4 + 44) = v29;
  v30 = v27 + (float)(v6[20] * v15);
  *(float *)(a4 + 32) = v30;
  v43 = v30;
  v31 = (float)(v6[21] * v15) + v28;
  *(float *)(a4 + 36) = v31;
  v32 = (float)(v6[22] * v15) + *(float *)g4_m128_ptr<int32_t>(v14);
  *(float *)(a4 + 40) = v32;
  *(float *)g4_m128_ptr<int32_t>(v14) = (float)(v15 * v6[23]) + v29;
  *(uint32_t *)(a4 + 44) =g4_m128_lane<int32_t>(v14, 0);
  v33 = (float)(v16 * v6[24]) + v43;
  *(float *)(a4 + 32) = v33;
  v34 = (float)(v16 * v6[25]) + v31;
  *(float *)(a4 + 36) = v34;
  v35 = (float)(v16 * v6[26]) + v32;
  *(float *)(a4 + 40) = v35;
  *(float *)(a4 + 44) = (float)(v16 * v6[27]) + *(float *)g4_m128_ptr<int32_t>(v14);
  *(float *)g4_m128_ptr<int32_t>(v26) = (float)((float)((float)((float)((float)(v25 * v25) * *(float *)(v5 + 52))
                                                  + (float)((float)(v34 * v34) * v6[13]))
                                          + (float)((float)((float)(v41 * v41) * *(float *)(v5 + 48))
                                                  + (float)((float)(v33 * v33) * v6[12])))
                                  + (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v26) * *(float *)g4_m128_ptr<int32_t>(v26))
                                                  * *(float *)(v5 + 56))
                                          + (float)((float)(v35 * v35) * v6[14])))
                          + fmaxf(*(float *)(v5 + 60) + v6[15], 1.4210855e-14f);
  v36 = _mm_cvtsi128_si32(v26);
  *(uint32_t *)(a4 + 44) =g4_m128_lane<int32_t>(v26, 0);
  v37 = (2130706432 - v36) & ((v36 ^ (v36 + 2139095040)) >> 31);
  v38 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v26)
                      * (float)((float)(2.0
                                      - (float)(*(float *)g4_m128_ptr<int32_t>(v26)
                                              * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v26) * *(float *)&v37))
                                                      * *(float *)&v37)))
                              * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v26) * *(float *)&v37)) * *(float *)&v37))))
      * (float)((float)(2.0
                      - (float)(*(float *)g4_m128_ptr<int32_t>(v26)
                              * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v26) * *(float *)&v37)) * *(float *)&v37)))
              * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v26) * *(float *)&v37)) * *(float *)&v37));
  *(float *)(a4 + 28) = v38;
  *a5 = v38;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: hk1dLinearVelocityMotorCommitJacobian  (binary VA: 0x1afecd0)
// Original: hk1dLinearVelocityMotorCommitJacobian
// ----------------------------------------------------------------------------
int hk1dLinearVelocityMotorCommitJacobian(int a1, int a2, int a3, int *a4)
{
  int result;

  *(float *)(a3 + 12) = *(float *)a1 * *(float *)(a2 + 8);
  result = *a4 + 80;
  *(uint8_t *)(result - 80) = 10;
  *(float *)(result - 32) = *(float *)(a1 + 8) * *(float *)(a2 + 4);
  *(float *)(result - 28) = *(float *)(a1 + 12) * *(float *)(a2 + 4);
  *(uint32_t *)(result - 24) = *(uint32_t *)(a1 + 4);
  *(uint32_t *)(result - 20) = *(uint32_t *)(a1 + 16);
  *(uint32_t *)(result - 16) = *(uint32_t *)(a1 + 20);
  *a4 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkBallSocketChainBuildJacobian  (binary VA: 0x1afffe0)
// Original: hkBallSocketChainBuildJacobian
// ----------------------------------------------------------------------------
int hkBallSocketChainBuildJacobian(int a1, int a2, int a3, float a4, int a5, int a6, int a7, int a8, int *a9)
{
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int result;

  v9 = a1;
  v10 = (uint16_t)a1 + 1;
  v11 = *a9;
  *(uint32_t *)(v11 + 12) = a2;
  *(uint8_t *)v11 = 40;
  *(uint16_t *)(v11 + 4) = a1;
  *(uint32_t *)(v11 + 16) = a3;
  *(uint32_t *)(v11 + 8) = (288 * (uint16_t)a1 + 16 * v10 + 32 + 4 * v10 + 15) & 0xFFFFFF0;
  if ( a1 < 0 )
  {
    v13 = (uint16_t)a1;
  }
  else
  {
    v12 = 0;
    do
    {
      *(uint32_t *)(288 * (uint16_t)a1 + v11 + 32 + 16 * v10 + 4 * v12) = *(uint32_t *)(a5 + 4 * v12);
      ++v12;
    }
    while ( v12 != a1 + 1 );
    v13 = *(uint16_t *)(v11 + 4);
    v9 = a1;
  }
  sub_1AFED40(
    v9,
    (float *)(*a9 + 32),
    a4,
    (uint32_t *)(16 * (v13 + 1) + 144 * v13 + v11 + 32 + 144 * v13),
    a6,
    (float *)(144 * v13 + v11 + 32));
  result = *(uint32_t *)(v11 + 8);
  *a9 += result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStabilizedBallSocketChainBuildJacobian  (binary VA: 0x1b000c0)
// Original: hkStabilizedBallSocketChainBuildJacobian
// ----------------------------------------------------------------------------
int * hkStabilizedBallSocketChainBuildJacobian(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int *a9)
{
  int v9;
  int v10; // xmm0_4
  int v11;
  int v12;
  unsigned int v13;
  int v14;

  v9 = *a9;
  v10 = *(uint32_t *)(a8 + 36);
  v11 = *a9 + 32;
  *(uint32_t *)(v9 + 12) = a2;
  *(uint16_t *)(v9 + 4) = a1;
  *(uint32_t *)(v9 + 16) = a3;
  v12 = ((uint16_t)a1 << 6) + v11 + 16 * ((uint16_t)a1 + 1);
  *(uint32_t *)(v9 + 20) = a4;
  *(uint32_t *)(v9 + 24) = v10;
  v13 = (v12 + 4 * ((uint16_t)a1 + 1) + 15 - v9) & 0xFFFFFFF0;
  *(uint32_t *)(v9 + 8) = v13;
  if ( a1 >= 0 )
  {
    v14 = 0;
    do
    {
      *(uint32_t *)(v12 + 4 * v14) = *(uint32_t *)(a5 + 4 * v14);
      ++v14;
    }
    while ( v14 != a1 + 1 );
    v13 = *(uint32_t *)(v9 + 8);
  }
  *a9 += v13;
  return a9;
}

// ----------------------------------------------------------------------------
// Function: hkStiffSpringChainBuildJacobian  (binary VA: 0x1b00160)
// Original: hkStiffSpringChainBuildJacobian
// ----------------------------------------------------------------------------
int hkStiffSpringChainBuildJacobian(int a1, int a2, int a3, float a4, int a5, int a6, int a7, int a8, uint32_t *a9)
{
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  float v14; // xmm3_4
  float *v15;
  float *i;
  float *v17;
  float *v18;
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm4_4
  __m128i v22;
  float v23; // xmm7_4
  int v24;
  int v25;
  float v26; // xmm2_4
  int result;
  int v28;
  float v29;
  int v30;
  float v31;
  float v32;
  float v33;
  uint32_t *v34;
  float *v35;
  int v36;
  int v37;
  float v38;
  int v39;
  float *v40;
  int v41;

  v9 = *a9;
  *(uint32_t *)(v9 + 12) = a2;
  v41 = v9;
  *(uint32_t *)(v9 + 16) = a3;
  *(uint16_t *)(v9 + 4) = a1;
  *(uint8_t *)v9 = 39;
  v10 = v9 + 32;
  *(uint32_t *)(v9 + 8) = (48 * (uint16_t)a1 + 32 + 12 * (uint16_t)a1 + 8 * (uint16_t)a1 + 23)
                      & 0x3FFFFF0;
  if ( a1 < 0 )
  {
LABEL_10:
    v12 = *a9;
    goto LABEL_11;
  }
  v11 = 0;
  do
  {
    *(uint32_t *)(v9 + 32 + 48 * (uint16_t)a1 + 12 * (uint16_t)a1 + 4 * (uint16_t)a1 + 4 + 4 * v11) = *(uint32_t *)(a5 + 4 * v11);
    ++v11;
  }
  while ( v11 != a1 + 1 );
  v12 = *a9;
  v28 = *a9 + 32;
  if ( a1 > 0 )
  {
    v34 = (uint32_t *)(v10
                   + 48 * *(uint16_t *)(v41 + 4)
                   + 12 * *(uint16_t *)(v41 + 4)
                   + 4 * *(uint16_t *)(v41 + 4)
                   + 4);
    v39 = v12 + 64;
    v13 = v12 + 64;
    v14 = 0.0;
    v40 = (float *)(v12 + 48);
    v15 = (float *)(*a9 + 32);
    v36 = v13;
    v35 = v40;
    v38 = 0.0;
    v30 = 0;
    v37 = v10 + 48 * *(uint16_t *)(v41 + 4);
    for ( i = v40; ; i = v40 )
    {
      v17 = (float *)(v34[1] + a6);
      v18 = (float *)(*v34 + a6);
      v31 = v17[12];
g4_m128_raw(v22) = *(unsigned int *)((char *)i + (uint32_t)(uintptr_t)(v35) - v28 - 8);
      v33 = v17[14];
      v19 = *(float *)(v36 - v28 + v39 - 32);
      v29 = *(float *)(v36 - v28 + v39 - 28);
      v32 = v17[13];
      v20 = *(float *)(v36 - v28 + v39 - 24);
      v21 = v17[15];
      *(float *)g4_m128_ptr<int32_t>(v22) = (float)((float)((float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v22) * *(float *)g4_m128_ptr<int32_t>(v22))
                                                              * v18[14])
                                                      + (float)((float)(v20 * v20) * v33))
                                              + (float)((float)((float)((float)(*(float *)((char *)i
                                                                                         + (uint32_t)(uintptr_t)(v35)
                                                                                         - v28
                                                                                         - 16)
                                                                              * *(float *)((char *)i
                                                                                         + (uint32_t)(uintptr_t)(v35)
                                                                                         - v28
                                                                                         - 16))
                                                                      * v18[12])
                                                              + (float)((float)(v19 * v19) * v31))
                                                      + (float)((float)((float)(*(float *)((char *)i
                                                                                         + (uint32_t)(uintptr_t)(v35)
                                                                                         - v28
                                                                                         - 12)
                                                                              * *(float *)((char *)i
                                                                                         + (uint32_t)(uintptr_t)(v35)
                                                                                         - v28
                                                                                         - 12))
                                                                      * v18[13])
                                                              + (float)((float)(v29 * v29) * v32))))
                                      + fmaxf(v18[15] + v21, 1.4210855e-14f))
                              + a4;
      v23 = v30 >= a1 - 1
          ? 0.0
          : (float)((float)((float)(v20 * v35[14]) * v33) - (float)((float)(v15[2] * v15[14]) * v21))
          + (float)((float)((float)((float)(v29 * v35[13]) * v32) - (float)((float)(v15[1] * v15[13]) * v21))
                  + (float)((float)((float)(v19 * v35[12]) * v31) - (float)((float)(*v15 * v15[12]) * v21)));
      v24 = v37;
      ++v30;
      ++v34;
      v35 += 12;
      v36 += 48;
      v37 += 12;
      v15 += 12;
      *(float *)v24 = v38;
      *(float *)g4_m128_ptr<int32_t>(v22) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v22) - (float)(v14 * v38), 0.00000011920929f);
      v25 = _mm_cvtsi128_si32(v22);
      *(uint32_t *)(v24 + 4) =g4_m128_lane<int32_t>(v22, 0);
      v26 = (float)(2.0
                  - (float)(*(float *)g4_m128_ptr<int32_t>(v22)
                          * COERCE_FLOAT((2130706432 - v25) & ((v25 ^ (v25 + 2139095040)) >> 31))))
          * COERCE_FLOAT((2130706432 - v25) & ((v25 ^ (v25 + 2139095040)) >> 31));
      v14 = (float)((float)(2.0
                          - (float)(*(float *)g4_m128_ptr<int32_t>(v22)
                                  * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v22) * v26)) * v26)))
                  * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v22) * v26)) * v26))
          * v23;
      *(float *)(v24 + 8) = v14;
      if ( v30 == a1 )
        break;
      v38 = v23;
    }
    goto LABEL_10;
  }
LABEL_11:
  result = *(uint32_t *)(v41 + 8) + v12;
  *a9 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkBallSocketConstraintBuildJacobian_noSchema_Proj  (binary VA: 0x1b004f0)
// Original: hkBallSocketConstraintBuildJacobian_noSchema_Proj
// ----------------------------------------------------------------------------
int hkBallSocketConstraintBuildJacobian_noSchema_Proj(float *a1, float *a2, int a3, int a4)
{
  float v4; // xmm2_4
  int v5;
  float *v6;
  float v7; // xmm1_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm3_4
  float v14; // xmm6_4
  float v15; // xmm2_4
  float v16; // xmm4_4
  float v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm5_4
  float v20; // xmm0_4
  float v21; // xmm7_4
  float v22; // xmm4_4
  __m128i v23;
  float v24;
  float v25; // xmm3_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm6_4
  float v29; // xmm6_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm5_4
  float v33; // xmm1_4
  __m128i v34;
  __m128i v35;
  float v36; // xmm7_4
  float v37; // xmm0_4
  float v38; // xmm7_4
  float v39; // xmm4_4
  float v40; // xmm0_4
  float v41; // xmm7_4
  float v42; // xmm4_4
  float v43; // xmm0_4
  float v44; // xmm0_4
  float v45; // xmm5_4
  float v46; // xmm4_4
  float v47; // xmm3_4
  float v48; // xmm0_4
  float v49; // xmm5_4
  float v50; // xmm7_4
  float v51; // xmm4_4
  __m128i v52;
  float v53; // xmm3_4
  float v54;
  float v55; // xmm0_4
  float v56; // xmm0_4
  float v57; // xmm5_4
  __m128i v58;
  float v59; // xmm0_4
  float v60; // xmm7_4
  float v61; // xmm4_4
  float v62; // xmm0_4
  float v63; // xmm7_4
  float v64; // xmm4_4
  float v65; // xmm0_4
  float v66; // xmm0_4
  float v67; // xmm4_4
  float v68; // xmm3_4
  float v69; // xmm5_4
  float v70; // xmm4_4
  float v71; // xmm5_4
  float v72; // xmm7_4
  float v73; // xmm4_4
  __m128i v74;
  __m128i v75;
  float v76;
  float v77; // xmm5_4
  float v78; // xmm7_4
  float v79; // xmm4_4
  float v80; // xmm7_4
  float v81; // xmm4_4
  __m128i v82;
  int v83;
  int v84;
  float v86;
  float v87;
  float v88;
  int v89;
  float v90;
  float v91;
  float v92;
  int v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;

  v4 = a1[1];
  v5 = *(uint32_t *)(a3 + 48);
  v6 = *(float **)(a3 + 52);
  v7 = a1[2];
  v8 = a2[2] - v7;
  v9 = *a1 + (float)((float)(*a2 - *a1) * 0.5);
  v10 = a2[1] - v4;
  v101 = *(float *)(a3 + 36);
  *(uint32_t *)a4 = 1065353216;
  *(uint32_t *)(a4 + 4) = 0;
  *(uint32_t *)(a4 + 8) = 0;
  *(uint32_t *)(a4 + 12) = 0;
  v11 = v7 + (float)(0.5 * v8);
  v12 = v9;
  v13 = v9 - *(float *)(v5 + 112);
  v14 = v4 + (float)(v10 * 0.5);
  v15 = v14 - *(float *)(v5 + 116);
  v16 = v11 - *(float *)(v5 + 120);
  v94 = v12;
  v95 = v14;
  v86 = v14 - v6[29];
  v17 = (float)(0.0 * v15) - (float)(0.0 * v16);
  v99 = v11;
  v18 = v11 - v6[30];
  v19 = (float)(1.0 * v16) - (float)(0.0 * v13);
  v20 = v12 - v6[28];
  v21 = (float)(0.0 * v13) - (float)(v15 * 1.0);
  v22 = (float)(0.0 * v18) - (float)(0.0 * v86);
g4_m128_raw(v23) = 0u;
  *(float *)g4_m128_ptr<int32_t>(v23) = (float)(0.0 * v20) - (float)(v18 * 1.0);
  v24 = COERCE_FLOAT(_mm_cvtsi128_si32(v23));
  v25 = (float)(v86 * 1.0) - (float)(0.0 * v20);
  *(float *)g4_m128_ptr<int32_t>(v23) = *(float *)(v5 + 64) * v17;
  *(uint32_t *)(a4 + 16) =g4_m128_lane<int32_t>(v23, 0);
  v26 = *(float *)g4_m128_ptr<int32_t>(v23);
  *(float *)g4_m128_ptr<int32_t>(v23) = *(float *)(v5 + 68) * v17;
  *(uint32_t *)(a4 + 20) =g4_m128_lane<int32_t>(v23, 0);
  v27 = *(float *)(v5 + 72) * v17;
  *(float *)(a4 + 24) = v27;
  v28 = v17 * *(float *)(v5 + 76);
  *(float *)(a4 + 28) = v28;
  v87 = v28;
  v29 = (float)(*(float *)(v5 + 80) * v19) + v26;
  *(float *)(a4 + 16) = v29;
  v30 = (float)(*(float *)(v5 + 84) * v19) + *(float *)g4_m128_ptr<int32_t>(v23);
  *(float *)(a4 + 20) = v30;
  *(float *)g4_m128_ptr<int32_t>(v23) = (float)(*(float *)(v5 + 88) * v19) + v27;
  *(uint32_t *)(a4 + 24) =g4_m128_lane<int32_t>(v23, 0);
  v31 = v87 + (float)(v19 * *(float *)(v5 + 92));
  *(float *)(a4 + 28) = v31;
  v32 = (float)(*(float *)(v5 + 96) * v21) + v29;
  *(float *)(a4 + 16) = v32;
  v33 = v30 + (float)(*(float *)(v5 + 100) * v21);
  *(float *)(a4 + 20) = v33;
g4_m128_raw(v34) = *(unsigned int *)(v5 + 104);
  *(float *)g4_m128_ptr<int32_t>(v34) = *(float *)g4_m128_ptr<int32_t>(v34) * v21;
  v88 = v33;
  v35 = v34;
  *(float *)(a4 + 24) = *(float *)g4_m128_ptr<int32_t>(v34) + *(float *)g4_m128_ptr<int32_t>(v23);
  *(float *)g4_m128_ptr<int32_t>(v35) = (float)(*(float *)g4_m128_ptr<int32_t>(v34) + *(float *)g4_m128_ptr<int32_t>(v23))
                          * (float)(*(float *)g4_m128_ptr<int32_t>(v34) + *(float *)g4_m128_ptr<int32_t>(v23));
  *(float *)(a4 + 28) = (float)(v21 * *(float *)(v5 + 108)) + v31;
  v36 = v6[16] * v22;
  *(float *)(a4 + 32) = v36;
  v37 = v36;
  v38 = v6[17] * v22;
  *(float *)(a4 + 36) = v38;
  *(float *)g4_m128_ptr<int32_t>(v23) = v6[18] * v22;
  *(uint32_t *)(a4 + 40) =g4_m128_lane<int32_t>(v23, 0);
g4_m128_lane<int32_t>(v34, 0) =g4_m128_lane<int32_t>(v23, 0);
  v39 = v22 * v6[19];
  *(float *)(a4 + 44) = v39;
  *(float *)g4_m128_ptr<int32_t>(v23) = (float)(v24 * v6[20]) + v37;
  *(uint32_t *)(a4 + 32) =g4_m128_lane<int32_t>(v23, 0);
  v40 = (float)(v24 * v6[21]) + v38;
  *(float *)(a4 + 36) = v40;
  v41 = (float)(v24 * v6[22]) + *(float *)g4_m128_ptr<int32_t>(v34);
  *(float *)(a4 + 40) = v41;
  *(float *)g4_m128_ptr<int32_t>(v34) = (float)(v24 * v6[23]) + v39;
  *(uint32_t *)(a4 + 44) =g4_m128_lane<int32_t>(v34, 0);
  v42 = (float)(v6[24] * v25) + *(float *)g4_m128_ptr<int32_t>(v23);
  *(float *)(a4 + 32) = v42;
  *(float *)g4_m128_ptr<int32_t>(v23) = (float)(v6[25] * v25) + v40;
  *(uint32_t *)(a4 + 36) =g4_m128_lane<int32_t>(v23, 0);
  v43 = (float)(v6[26] * v25) + v41;
  *(float *)(a4 + 40) = v43;
  *(float *)(a4 + 44) = (float)(v6[27] * v25) + *(float *)g4_m128_ptr<int32_t>(v34);
  *(float *)g4_m128_ptr<int32_t>(v35) = (float)((float)((float)((float)(*(float *)(v5 + 52) * (float)(v88 * v88))
                                                  + (float)((float)(*(float *)g4_m128_ptr<int32_t>(v23) * *(float *)g4_m128_ptr<int32_t>(v23))
                                                          * v6[13]))
                                          + (float)((float)((float)(v32 * v32) * *(float *)(v5 + 48))
                                                  + (float)((float)(v42 * v42) * v6[12])))
                                  + (float)((float)(*(float *)g4_m128_ptr<int32_t>(v35) * *(float *)(v5 + 56))
                                          + (float)((float)(v43 * v43) * v6[14])))
                          + fmaxf(*(float *)(v5 + 60) + v6[15], 1.4210855e-14f);
  *(uint32_t *)(a4 + 44) =g4_m128_lane<int32_t>(v35, 0);
  v89 = (2130706432 - _mm_cvtsi128_si32(v35)) & ((_mm_cvtsi128_si32(v35) ^ (_mm_cvtsi128_si32(v35) + 2139095040)) >> 31);
  v44 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v35)
                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v35) * *(float *)&v89)) * *(float *)&v89)))
      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v35) * *(float *)&v89)) * *(float *)&v89);
  *(float *)(a4 + 28) = v101 * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v35) * v44)) * v44);
  *(float *)(a4 + 12) = (float)((float)((float)((float)(*a2 - *a1) * 1.0) + (float)((float)(a2[1] - a1[1]) * 0.0))
                              + (float)((float)(a2[2] - a1[2]) * 0.0))
                      * *(float *)(a3 + 32);
  v45 = *(float *)(a3 + 36);
  *(uint32_t *)(a4 + 48) = 0;
  *(uint32_t *)(a4 + 52) = 1065353216;
  v102 = v45;
  *(uint32_t *)(a4 + 56) = 0;
  *(uint32_t *)(a4 + 60) = 0;
  *(float *)g4_m128_ptr<int32_t>(v23) = v95 - *(float *)(v5 + 116);
  v46 = v99 - *(float *)(v5 + 120);
  v47 = v94 - *(float *)(v5 + 112);
  v90 = v95 - v6[29];
  *(float *)g4_m128_ptr<int32_t>(v34) = (float)(0.0 * *(float *)g4_m128_ptr<int32_t>(v23)) - (float)(1.0 * v46);
  *(float *)g4_m128_ptr<int32_t>(v35) = v99 - v6[30];
  v48 = v94 - v6[28];
  v49 = (float)(v46 * 0.0) - (float)(0.0 * v47);
  v50 = (float)(v47 * 1.0) - (float)(*(float *)g4_m128_ptr<int32_t>(v23) * 0.0);
  v51 = (float)(1.0 * *(float *)g4_m128_ptr<int32_t>(v35)) - (float)(0.0 * v90);
g4_m128_raw(v52) = 0u;
  *(float *)g4_m128_ptr<int32_t>(v52) = (float)(0.0 * v48) - (float)(*(float *)g4_m128_ptr<int32_t>(v35) * 0.0);
  v53 = (float)(v90 * 0.0) - (float)(1.0 * v48);
  *(float *)g4_m128_ptr<int32_t>(v35) = *(float *)(v5 + 64) * *(float *)g4_m128_ptr<int32_t>(v34);
  v54 = COERCE_FLOAT(_mm_cvtsi128_si32(v52));
  *(uint32_t *)(a4 + 64) =g4_m128_lane<int32_t>(v35, 0);
  *(float *)g4_m128_ptr<int32_t>(v52) = *(float *)(v5 + 68) * *(float *)g4_m128_ptr<int32_t>(v34);
  *(uint32_t *)(a4 + 68) =g4_m128_lane<int32_t>(v52, 0);
  v55 = *(float *)(v5 + 72) * *(float *)g4_m128_ptr<int32_t>(v34);
  *(float *)(a4 + 72) = v55;
  *(float *)g4_m128_ptr<int32_t>(v34) = *(float *)g4_m128_ptr<int32_t>(v34) * *(float *)(v5 + 76);
  *(uint32_t *)(a4 + 76) =g4_m128_lane<int32_t>(v34, 0);
  v91 = *(float *)g4_m128_ptr<int32_t>(v34);
  *(float *)g4_m128_ptr<int32_t>(v34) = (float)(*(float *)(v5 + 80) * v49) + *(float *)g4_m128_ptr<int32_t>(v35);
  *(uint32_t *)(a4 + 64) =g4_m128_lane<int32_t>(v34, 0);
  *(float *)g4_m128_ptr<int32_t>(v35) = (float)(*(float *)(v5 + 84) * v49) + *(float *)g4_m128_ptr<int32_t>(v52);
  *(uint32_t *)(a4 + 68) =g4_m128_lane<int32_t>(v35, 0);
  *(float *)g4_m128_ptr<int32_t>(v52) = (float)(*(float *)(v5 + 88) * v49) + v55;
  *(uint32_t *)(a4 + 72) =g4_m128_lane<int32_t>(v52, 0);
  v56 = v91 + (float)(v49 * *(float *)(v5 + 92));
  *(float *)(a4 + 76) = v56;
  v57 = (float)(*(float *)(v5 + 96) * v50) + *(float *)g4_m128_ptr<int32_t>(v34);
  *(float *)(a4 + 64) = v57;
  *(float *)g4_m128_ptr<int32_t>(v34) = (float)(*(float *)(v5 + 100) * v50) + *(float *)g4_m128_ptr<int32_t>(v35);
  *(float *)(a4 + 68) = *(float *)g4_m128_ptr<int32_t>(v34);
g4_m128_raw(v58) = *(unsigned int *)(v5 + 104);
  v92 = *(float *)g4_m128_ptr<int32_t>(v34);
  *(float *)g4_m128_ptr<int32_t>(v58) = (float)(*(float *)g4_m128_ptr<int32_t>(v58) * v50) + *(float *)g4_m128_ptr<int32_t>(v52);
  *(uint32_t *)(a4 + 72) =g4_m128_lane<int32_t>(v58, 0);
  *(float *)(a4 + 76) = (float)(*(float *)(v5 + 108) * v50) + v56;
  *(float *)g4_m128_ptr<int32_t>(v52) = v6[16] * v51;
  *(uint32_t *)(a4 + 80) =g4_m128_lane<int32_t>(v52, 0);
  v59 = *(float *)g4_m128_ptr<int32_t>(v52);
  *(float *)g4_m128_ptr<int32_t>(v52) = v6[17] * v51;
  *(uint32_t *)(a4 + 84) =g4_m128_lane<int32_t>(v52, 0);
  v60 = *(float *)g4_m128_ptr<int32_t>(v52);
  *(float *)g4_m128_ptr<int32_t>(v52) = v6[18] * v51;
  *(uint32_t *)(a4 + 88) =g4_m128_lane<int32_t>(v52, 0);
g4_m128_lane<int32_t>(v34, 0) =g4_m128_lane<int32_t>(v52, 0);
  v61 = v51 * v6[19];
  *(float *)(a4 + 92) = v61;
  *(float *)g4_m128_ptr<int32_t>(v52) = (float)(v54 * v6[20]) + v59;
  *(uint32_t *)(a4 + 80) =g4_m128_lane<int32_t>(v52, 0);
  v62 = (float)(v54 * v6[21]) + v60;
  *(float *)(a4 + 84) = v62;
  v63 = (float)(v54 * v6[22]) + *(float *)g4_m128_ptr<int32_t>(v34);
  *(float *)(a4 + 88) = v63;
  *(float *)g4_m128_ptr<int32_t>(v34) = (float)(v54 * v6[23]) + v61;
  *(uint32_t *)(a4 + 92) =g4_m128_lane<int32_t>(v34, 0);
  v64 = (float)(v6[24] * v53) + *(float *)g4_m128_ptr<int32_t>(v52);
  *(float *)(a4 + 80) = v64;
  *(float *)g4_m128_ptr<int32_t>(v52) = (float)(v6[25] * v53) + v62;
  *(uint32_t *)(a4 + 84) =g4_m128_lane<int32_t>(v52, 0);
  v65 = (float)(v6[26] * v53) + v63;
  *(float *)(a4 + 88) = v65;
  *(float *)(a4 + 92) = (float)(v53 * v6[27]) + *(float *)g4_m128_ptr<int32_t>(v34);
  *(float *)g4_m128_ptr<int32_t>(v58) = (float)((float)((float)((float)((float)(v92 * v92) * *(float *)(v5 + 52))
                                                  + (float)((float)(*(float *)g4_m128_ptr<int32_t>(v52) * *(float *)g4_m128_ptr<int32_t>(v52))
                                                          * v6[13]))
                                          + (float)((float)((float)(v57 * v57) * *(float *)(v5 + 48))
                                                  + (float)((float)(v64 * v64) * v6[12])))
                                  + (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v58) * *(float *)g4_m128_ptr<int32_t>(v58))
                                                  * *(float *)(v5 + 56))
                                          + (float)((float)(v65 * v65) * v6[14])))
                          + fmaxf(*(float *)(v5 + 60) + v6[15], 1.4210855e-14f);
  *(uint32_t *)(a4 + 92) =g4_m128_lane<int32_t>(v58, 0);
  v93 = (2130706432 - _mm_cvtsi128_si32(v58)) & ((_mm_cvtsi128_si32(v58) ^ (_mm_cvtsi128_si32(v58) + 2139095040)) >> 31);
  v66 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v58)
                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v58) * *(float *)&v93)) * *(float *)&v93)))
      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v58) * *(float *)&v93)) * *(float *)&v93);
  *(float *)(a4 + 76) = v102 * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v58) * v66)) * v66);
  *(float *)(a4 + 60) = (float)((float)((float)((float)(*a2 - *a1) * 0.0) + (float)((float)(a2[1] - a1[1]) * 1.0))
                              + (float)((float)(a2[2] - a1[2]) * 0.0))
                      * *(float *)(a3 + 32);
  v67 = *(float *)(a3 + 36);
  *(uint32_t *)(a4 + 96) = 0;
  v103 = v67;
  *(uint32_t *)(a4 + 100) = 0;
  *(uint32_t *)(a4 + 104) = 1065353216;
  *(uint32_t *)(a4 + 108) = 0;
  v68 = v95 - *(float *)(v5 + 116);
  v69 = v99 - *(float *)(v5 + 120);
  v70 = v94 - *(float *)(v5 + 112);
  *(float *)g4_m128_ptr<int32_t>(v58) = v94 - v6[28];
  v96 = v95 - v6[29];
  *(float *)g4_m128_ptr<int32_t>(v52) = v99 - v6[30];
  *(float *)g4_m128_ptr<int32_t>(v34) = (float)(1.0 * v68) - (float)(0.0 * v69);
  v71 = (float)(v69 * 0.0) - (float)(1.0 * v70);
  v72 = (float)(v70 * 0.0) - (float)(v68 * 0.0);
  v73 = (float)(0.0 * *(float *)g4_m128_ptr<int32_t>(v52)) - (float)(v96 * 1.0);
g4_m128_raw(v74) = 0x3F800000u;
  *(float *)g4_m128_ptr<int32_t>(v74) = 1.0 * *(float *)g4_m128_ptr<int32_t>(v58);
  v75 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v74));
  *(float *)g4_m128_ptr<int32_t>(v75) = *(float *)g4_m128_ptr<int32_t>(v75) - (float)(*(float *)g4_m128_ptr<int32_t>(v52) * 0.0);
  v76 = COERCE_FLOAT(_mm_cvtsi128_si32(v75));
  *(float *)g4_m128_ptr<int32_t>(v75) = (float)(v96 * 0.0) - (float)(*(float *)g4_m128_ptr<int32_t>(v58) * 0.0);
  *(float *)g4_m128_ptr<int32_t>(v58) = *(float *)(v5 + 64) * *(float *)g4_m128_ptr<int32_t>(v34);
  *(uint32_t *)(a4 + 112) =g4_m128_lane<int32_t>(v58, 0);
  *(float *)g4_m128_ptr<int32_t>(v52) = *(float *)(v5 + 68) * *(float *)g4_m128_ptr<int32_t>(v34);
  v97 = *(float *)g4_m128_ptr<int32_t>(v58);
  *(uint32_t *)(a4 + 116) =g4_m128_lane<int32_t>(v52, 0);
  *(float *)g4_m128_ptr<int32_t>(v74) = *(float *)(v5 + 72) * *(float *)g4_m128_ptr<int32_t>(v34);
  *(uint32_t *)(a4 + 120) =g4_m128_lane<int32_t>(v74, 0);
g4_m128_lane<int32_t>(v58, 0) =g4_m128_lane<int32_t>(v74, 0);
  *(float *)g4_m128_ptr<int32_t>(v34) = *(float *)g4_m128_ptr<int32_t>(v34) * *(float *)(v5 + 76);
  *(uint32_t *)(a4 + 124) =g4_m128_lane<int32_t>(v34, 0);
  v100 = *(float *)g4_m128_ptr<int32_t>(v34);
  *(float *)g4_m128_ptr<int32_t>(v74) = (float)(*(float *)(v5 + 80) * v71) + v97;
  *(uint32_t *)(a4 + 112) =g4_m128_lane<int32_t>(v74, 0);
  *(float *)g4_m128_ptr<int32_t>(v34) = (float)(*(float *)(v5 + 84) * v71) + *(float *)g4_m128_ptr<int32_t>(v52);
  *(uint32_t *)(a4 + 116) =g4_m128_lane<int32_t>(v34, 0);
  *(float *)g4_m128_ptr<int32_t>(v52) = (float)(*(float *)(v5 + 88) * v71) + *(float *)g4_m128_ptr<int32_t>(v58);
  *(uint32_t *)(a4 + 120) =g4_m128_lane<int32_t>(v52, 0);
  *(float *)g4_m128_ptr<int32_t>(v58) = v100 + (float)(v71 * *(float *)(v5 + 92));
  *(uint32_t *)(a4 + 124) =g4_m128_lane<int32_t>(v58, 0);
  v77 = (float)(*(float *)(v5 + 96) * v72) + *(float *)g4_m128_ptr<int32_t>(v74);
  *(float *)(a4 + 112) = v77;
  *(float *)g4_m128_ptr<int32_t>(v74) = (float)(*(float *)(v5 + 100) * v72) + *(float *)g4_m128_ptr<int32_t>(v34);
  *(uint32_t *)(a4 + 116) =g4_m128_lane<int32_t>(v74, 0);
  *(float *)g4_m128_ptr<int32_t>(v34) = (float)(*(float *)(v5 + 104) * v72) + *(float *)g4_m128_ptr<int32_t>(v52);
  *(float *)(a4 + 120) = *(float *)g4_m128_ptr<int32_t>(v34);
  v98 = *(float *)g4_m128_ptr<int32_t>(v34);
  *(float *)(a4 + 124) = (float)(*(float *)(v5 + 108) * v72) + *(float *)g4_m128_ptr<int32_t>(v58);
  *(float *)g4_m128_ptr<int32_t>(v58) = v6[16] * v73;
  *(uint32_t *)(a4 + 128) =g4_m128_lane<int32_t>(v58, 0);
  v78 = v6[17] * v73;
  *(float *)(a4 + 132) = v78;
  *(float *)g4_m128_ptr<int32_t>(v52) = v6[18] * v73;
  *(uint32_t *)(a4 + 136) =g4_m128_lane<int32_t>(v52, 0);
g4_m128_lane<int32_t>(v34, 0) =g4_m128_lane<int32_t>(v52, 0);
  v79 = v73 * v6[19];
  *(float *)(a4 + 140) = v79;
  *(float *)g4_m128_ptr<int32_t>(v52) = (float)(v76 * v6[20]) + *(float *)g4_m128_ptr<int32_t>(v58);
  *(uint32_t *)(a4 + 128) =g4_m128_lane<int32_t>(v52, 0);
  *(float *)g4_m128_ptr<int32_t>(v58) = (float)(v76 * v6[21]) + v78;
  *(uint32_t *)(a4 + 132) =g4_m128_lane<int32_t>(v58, 0);
  v80 = (float)(v76 * v6[22]) + *(float *)g4_m128_ptr<int32_t>(v34);
  *(float *)(a4 + 136) = v80;
  *(float *)g4_m128_ptr<int32_t>(v34) = (float)(v76 * v6[23]) + v79;
  *(uint32_t *)(a4 + 140) =g4_m128_lane<int32_t>(v34, 0);
  v81 = (float)(v6[24] * *(float *)g4_m128_ptr<int32_t>(v75)) + *(float *)g4_m128_ptr<int32_t>(v52);
  *(float *)(a4 + 128) = v81;
  *(float *)g4_m128_ptr<int32_t>(v52) = (float)(v6[25] * *(float *)g4_m128_ptr<int32_t>(v75)) + *(float *)g4_m128_ptr<int32_t>(v58);
  *(uint32_t *)(a4 + 132) =g4_m128_lane<int32_t>(v52, 0);
  *(float *)g4_m128_ptr<int32_t>(v58) = (float)(v6[26] * *(float *)g4_m128_ptr<int32_t>(v75)) + v80;
  *(uint32_t *)(a4 + 136) =g4_m128_lane<int32_t>(v58, 0);
  *(float *)(a4 + 140) = (float)(*(float *)g4_m128_ptr<int32_t>(v75) * v6[27]) + *(float *)g4_m128_ptr<int32_t>(v34);
  *(float *)g4_m128_ptr<int32_t>(v74) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v74) * *(float *)g4_m128_ptr<int32_t>(v74)) * *(float *)(v5 + 52))
                          + (float)((float)(*(float *)g4_m128_ptr<int32_t>(v52) * *(float *)g4_m128_ptr<int32_t>(v52)) * v6[13]);
g4_m128_raw(v82) = *(unsigned int *)(v5 + 56);
  *(float *)g4_m128_ptr<int32_t>(v82) = (float)((float)((float)((float)((float)(v77 * v77) * *(float *)(v5 + 48))
                                                  + (float)((float)(v81 * v81) * v6[12]))
                                          + *(float *)g4_m128_ptr<int32_t>(v74))
                                  + (float)((float)(*(float *)g4_m128_ptr<int32_t>(v82) * (float)(v98 * v98))
                                          + (float)((float)(*(float *)g4_m128_ptr<int32_t>(v58) * *(float *)g4_m128_ptr<int32_t>(v58)) * v6[14])))
                          + fmaxf(*(float *)(v5 + 60) + v6[15], 1.4210855e-14f);
  v83 = _mm_cvtsi128_si32(v82);
  *(uint32_t *)(a4 + 140) =g4_m128_lane<int32_t>(v82, 0);
  v84 = (2130706432 - v83) & ((v83 ^ (v83 + 2139095040)) >> 31);
  *(float *)g4_m128_ptr<int32_t>(v58) = (float)(2.0
                                  - (float)(*(float *)g4_m128_ptr<int32_t>(v82)
                                          * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v82) * *(float *)&v84))
                                                  * *(float *)&v84)))
                          * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v82) * *(float *)&v84)) * *(float *)&v84);
  *(float *)(a4 + 124) = v103
                       * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v82) * *(float *)g4_m128_ptr<int32_t>(v58)))
                               * *(float *)g4_m128_ptr<int32_t>(v58));
  *(float *)(a4 + 108) = (float)((float)((float)((float)(*a2 - *a1) * 0.0) + (float)((float)(a2[1] - a1[1]) * 0.0))
                               + (float)((float)(a2[2] - a1[2]) * 1.0))
                       * *(float *)(a3 + 32);
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkBallSocketConstraintBuildJacobian_noSchema_noProj  (binary VA: 0x1b011a0)
// Original: hkBallSocketConstraintBuildJacobian_noSchema_noProj
// ----------------------------------------------------------------------------
int hkBallSocketConstraintBuildJacobian_noSchema_noProj(float *a1, float *a2, int a3, int a4)
{
  int v4;
  float *v5;
  float v6; // xmm4_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm6_4
  float v12; // xmm5_4
  float v13; // xmm7_4
  float v14; // xmm4_4
  float v15; // xmm1_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm6_4
  float v20; // xmm6_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm0_4
  float v24; // xmm5_4
  float v25; // xmm1_4
  __m128i v26;
  __m128i v27;
  float v28; // xmm0_4
  float v29; // xmm7_4
  float v30; // xmm4_4
  float v31; // xmm2_4
  float v32; // xmm0_4
  float v33; // xmm7_4
  float v34; // xmm4_4
  float v35; // xmm2_4
  float v36; // xmm0_4
  int v37;
  float v38; // xmm0_4
  float v39; // xmm4_4
  float v40; // xmm2_4
  float v41; // xmm3_4
  float v42; // xmm0_4
  float v43; // xmm5_4
  float v44; // xmm7_4
  float v45; // xmm4_4
  float v46; // xmm3_4
  float v47; // xmm3_4
  float v48; // xmm2_4
  float v49; // xmm0_4
  float v50; // xmm2_4
  float v51; // xmm0_4
  float v52; // xmm5_4
  __m128i v53;
  __m128i v54;
  float v55; // xmm0_4
  float v56; // xmm7_4
  float v57; // xmm4_4
  float v58; // xmm2_4
  float v59; // xmm0_4
  float v60; // xmm7_4
  float v61; // xmm4_4
  float v62; // xmm2_4
  float v63; // xmm0_4
  int v64;
  float v65; // xmm0_4
  float v66; // xmm3_4
  float v67; // xmm3_4
  float v68; // xmm5_4
  float v69; // xmm4_4
  float v70; // xmm2_4
  float v71; // xmm5_4
  float v72; // xmm7_4
  float v73; // xmm4_4
  __m128i v74;
  __m128i v75;
  float v76;
  float v77; // xmm2_4
  float v78; // xmm2_4
  float v79; // xmm5_4
  float v80; // xmm7_4
  float v81; // xmm2_4
  float v82; // xmm4_4
  float v83; // xmm2_4
  float v84; // xmm7_4
  float v85; // xmm4_4
  float v86; // xmm2_4
  __m128i v87;
  int v88;
  int v89;
  float v91;
  int v92;
  float v93;
  int v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;

  v101 = *(float *)(a3 + 36);
  v4 = *(uint32_t *)(a3 + 48);
  v5 = *(float **)(a3 + 52);
  *(uint32_t *)a4 = 1065353216;
  *(uint32_t *)(a4 + 4) = 0;
  *(uint32_t *)(a4 + 8) = 0;
  *(uint32_t *)(a4 + 12) = 0;
  v6 = a1[2] - *(float *)(v4 + 120);
  v7 = a1[1] - *(float *)(v4 + 116);
  v8 = *a1 - *(float *)(v4 + 112);
  v95 = a2[1] - v5[29];
  v9 = *a2 - v5[28];
  v10 = a2[2] - v5[30];
  v11 = (float)(0.0 * v7) - (float)(0.0 * v6);
  v12 = (float)(v6 * 1.0) - (float)(0.0 * v8);
  v13 = (float)(0.0 * v8) - (float)(v7 * 1.0);
  v91 = (float)(0.0 * v9) - (float)(v10 * 1.0);
  v14 = (float)(0.0 * v10) - (float)(v95 * 0.0);
  v15 = *(float *)(v4 + 64) * v11;
  *(float *)(a4 + 16) = v15;
  v16 = (float)(v95 * 1.0) - (float)(v9 * 0.0);
  v17 = *(float *)(v4 + 68) * v11;
  *(float *)(a4 + 20) = v17;
  v18 = *(float *)(v4 + 72) * v11;
  *(float *)(a4 + 24) = v18;
  v19 = v11 * *(float *)(v4 + 76);
  *(float *)(a4 + 28) = v19;
  v96 = v19;
  v20 = (float)(*(float *)(v4 + 80) * v12) + v15;
  *(float *)(a4 + 16) = v20;
  v21 = (float)(*(float *)(v4 + 84) * v12) + v17;
  *(float *)(a4 + 20) = v21;
  v22 = (float)(*(float *)(v4 + 88) * v12) + v18;
  *(float *)(a4 + 24) = v22;
  v23 = v96 + (float)(v12 * *(float *)(v4 + 92));
  *(float *)(a4 + 28) = v23;
  v24 = (float)(*(float *)(v4 + 96) * v13) + v20;
  *(float *)(a4 + 16) = v24;
  v25 = v21 + (float)(*(float *)(v4 + 100) * v13);
  *(float *)(a4 + 20) = v25;
g4_m128_raw(v26) = *(unsigned int *)(v4 + 104);
  *(float *)g4_m128_ptr<int32_t>(v26) = *(float *)g4_m128_ptr<int32_t>(v26) * v13;
  v97 = v25;
  v27 = v26;
  *(float *)(a4 + 24) = *(float *)g4_m128_ptr<int32_t>(v26) + v22;
  *(float *)g4_m128_ptr<int32_t>(v27) = (float)(*(float *)g4_m128_ptr<int32_t>(v26) + v22) * (float)(*(float *)g4_m128_ptr<int32_t>(v26) + v22);
  *(float *)(a4 + 28) = (float)(v13 * *(float *)(v4 + 108)) + v23;
  v28 = v5[16] * v14;
  *(float *)(a4 + 32) = v28;
  v29 = v5[17] * v14;
  *(float *)(a4 + 36) = v29;
  *(float *)g4_m128_ptr<int32_t>(v26) = v5[18] * v14;
  *(uint32_t *)(a4 + 40) =g4_m128_lane<int32_t>(v26, 0);
  v30 = v14 * v5[19];
  *(float *)(a4 + 44) = v30;
  v31 = (float)(v91 * v5[20]) + v28;
  *(float *)(a4 + 32) = v31;
  v32 = (float)(v91 * v5[21]) + v29;
  *(float *)(a4 + 36) = v32;
  v33 = (float)(v91 * v5[22]) + *(float *)g4_m128_ptr<int32_t>(v26);
  *(float *)(a4 + 40) = v33;
  *(float *)g4_m128_ptr<int32_t>(v26) = (float)(v91 * v5[23]) + v30;
  *(uint32_t *)(a4 + 44) =g4_m128_lane<int32_t>(v26, 0);
  v34 = (float)(v5[24] * v16) + v31;
  *(float *)(a4 + 32) = v34;
  v35 = (float)(v5[25] * v16) + v32;
  *(float *)(a4 + 36) = v35;
  v36 = (float)(v5[26] * v16) + v33;
  *(float *)(a4 + 40) = v36;
  *(float *)(a4 + 44) = (float)(v5[27] * v16) + *(float *)g4_m128_ptr<int32_t>(v26);
  *(float *)g4_m128_ptr<int32_t>(v27) = (float)((float)((float)((float)((float)(v97 * v97) * *(float *)(v4 + 52))
                                                  + (float)((float)(v35 * v35) * v5[13]))
                                          + (float)((float)((float)(v24 * v24) * *(float *)(v4 + 48))
                                                  + (float)((float)(v34 * v34) * v5[12])))
                                  + (float)((float)(*(float *)g4_m128_ptr<int32_t>(v27) * *(float *)(v4 + 56))
                                          + (float)((float)(v36 * v36) * v5[14])))
                          + fmaxf(*(float *)(v4 + 60) + v5[15], 1.4210855e-14f);
  v37 = _mm_cvtsi128_si32(v27);
  *(uint32_t *)(a4 + 44) =g4_m128_lane<int32_t>(v27, 0);
  v92 = (2130706432 - v37) & ((v37 ^ (v37 + 2139095040)) >> 31);
  v38 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v27)
                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v27) * *(float *)&v92)) * *(float *)&v92)))
      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v27) * *(float *)&v92)) * *(float *)&v92);
  *(float *)(a4 + 28) = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v27) * v38)) * v38) * v101;
  *(float *)(a4 + 12) = (float)((float)((float)((float)(*a2 - *a1) * 1.0) + (float)((float)(a2[1] - a1[1]) * 0.0))
                              + (float)((float)(a2[2] - a1[2]) * 0.0))
                      * *(float *)(a3 + 32);
  v102 = *(float *)(a3 + 36);
  *(uint32_t *)(a4 + 48) = 0;
  *(uint32_t *)(a4 + 52) = 1065353216;
  *(uint32_t *)(a4 + 56) = 0;
  *(uint32_t *)(a4 + 60) = 0;
  v39 = a1[2] - *(float *)(v4 + 120);
  v40 = a1[1] - *(float *)(v4 + 116);
  v41 = *a1 - *(float *)(v4 + 112);
  *(float *)g4_m128_ptr<int32_t>(v26) = (float)(0.0 * v40) - (float)(1.0 * v39);
  v98 = a2[1] - v5[29];
  *(float *)g4_m128_ptr<int32_t>(v27) = a2[2] - v5[30];
  v42 = *a2 - v5[28];
  v43 = (float)(0.0 * v39) - (float)(0.0 * v41);
  v44 = (float)(v41 * 1.0) - (float)(v40 * 0.0);
  v45 = (float)(1.0 * *(float *)g4_m128_ptr<int32_t>(v27)) - (float)(v98 * 0.0);
  v46 = (float)(0.0 * v42) - (float)(*(float *)g4_m128_ptr<int32_t>(v27) * 0.0);
  *(float *)g4_m128_ptr<int32_t>(v27) = *(float *)(v4 + 64) * *(float *)g4_m128_ptr<int32_t>(v26);
  v93 = v46;
  *(uint32_t *)(a4 + 64) =g4_m128_lane<int32_t>(v27, 0);
  v47 = (float)(v98 * 0.0) - (float)(v42 * 1.0);
  v48 = *(float *)(v4 + 68) * *(float *)g4_m128_ptr<int32_t>(v26);
  *(float *)(a4 + 68) = v48;
  v49 = *(float *)(v4 + 72) * *(float *)g4_m128_ptr<int32_t>(v26);
  *(float *)(a4 + 72) = v49;
  *(float *)g4_m128_ptr<int32_t>(v26) = *(float *)g4_m128_ptr<int32_t>(v26) * *(float *)(v4 + 76);
  *(uint32_t *)(a4 + 76) =g4_m128_lane<int32_t>(v26, 0);
  v99 = *(float *)g4_m128_ptr<int32_t>(v26);
  *(float *)g4_m128_ptr<int32_t>(v26) = (float)(*(float *)(v4 + 80) * v43) + *(float *)g4_m128_ptr<int32_t>(v27);
  *(uint32_t *)(a4 + 64) =g4_m128_lane<int32_t>(v26, 0);
  *(float *)g4_m128_ptr<int32_t>(v27) = (float)(*(float *)(v4 + 84) * v43) + v48;
  *(uint32_t *)(a4 + 68) =g4_m128_lane<int32_t>(v27, 0);
  v50 = (float)(*(float *)(v4 + 88) * v43) + v49;
  *(float *)(a4 + 72) = v50;
  v51 = v99 + (float)(v43 * *(float *)(v4 + 92));
  *(float *)(a4 + 76) = v51;
  v52 = (float)(*(float *)(v4 + 96) * v44) + *(float *)g4_m128_ptr<int32_t>(v26);
  *(float *)(a4 + 64) = v52;
  *(float *)g4_m128_ptr<int32_t>(v27) = *(float *)g4_m128_ptr<int32_t>(v27) + (float)(*(float *)(v4 + 100) * v44);
  *(uint32_t *)(a4 + 68) =g4_m128_lane<int32_t>(v27, 0);
g4_m128_raw(v53) = *(unsigned int *)(v4 + 104);
  *(float *)g4_m128_ptr<int32_t>(v53) = *(float *)g4_m128_ptr<int32_t>(v53) * v44;
  v100 = *(float *)g4_m128_ptr<int32_t>(v27);
  v54 = v53;
  *(float *)(a4 + 72) = *(float *)g4_m128_ptr<int32_t>(v53) + v50;
  *(float *)g4_m128_ptr<int32_t>(v54) = (float)(*(float *)g4_m128_ptr<int32_t>(v53) + v50) * (float)(*(float *)g4_m128_ptr<int32_t>(v53) + v50);
  *(float *)(a4 + 76) = (float)(v44 * *(float *)(v4 + 108)) + v51;
  v55 = v5[16] * v45;
  *(float *)(a4 + 80) = v55;
  v56 = v5[17] * v45;
  *(float *)(a4 + 84) = v56;
  *(float *)g4_m128_ptr<int32_t>(v53) = v5[18] * v45;
  *(uint32_t *)(a4 + 88) =g4_m128_lane<int32_t>(v53, 0);
  v57 = v45 * v5[19];
  *(float *)(a4 + 92) = v57;
  v58 = (float)(v93 * v5[20]) + v55;
  *(float *)(a4 + 80) = v58;
  v59 = (float)(v93 * v5[21]) + v56;
  *(float *)(a4 + 84) = v59;
  v60 = (float)(v93 * v5[22]) + *(float *)g4_m128_ptr<int32_t>(v53);
  *(float *)(a4 + 88) = v60;
  *(float *)g4_m128_ptr<int32_t>(v53) = (float)(v93 * v5[23]) + v57;
  *(uint32_t *)(a4 + 92) =g4_m128_lane<int32_t>(v53, 0);
  v61 = (float)(v5[24] * v47) + v58;
  *(float *)(a4 + 80) = v61;
  v62 = (float)(v5[25] * v47) + v59;
  *(float *)(a4 + 84) = v62;
  v63 = (float)(v5[26] * v47) + v60;
  *(float *)(a4 + 88) = v63;
  *(float *)(a4 + 92) = (float)(v47 * v5[27]) + *(float *)g4_m128_ptr<int32_t>(v53);
  *(float *)g4_m128_ptr<int32_t>(v54) = (float)((float)((float)((float)((float)(v100 * v100) * *(float *)(v4 + 52))
                                                  + (float)((float)(v62 * v62) * v5[13]))
                                          + (float)((float)((float)(v52 * v52) * *(float *)(v4 + 48))
                                                  + (float)((float)(v61 * v61) * v5[12])))
                                  + (float)((float)(*(float *)g4_m128_ptr<int32_t>(v54) * *(float *)(v4 + 56))
                                          + (float)((float)(v63 * v63) * v5[14])))
                          + fmaxf(*(float *)(v4 + 60) + v5[15], 1.4210855e-14f);
  v64 = _mm_cvtsi128_si32(v54);
  *(uint32_t *)(a4 + 92) =g4_m128_lane<int32_t>(v54, 0);
  v94 = (2130706432 - v64) & ((v64 ^ (v64 + 2139095040)) >> 31);
  v65 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v54)
                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v54) * *(float *)&v94)) * *(float *)&v94)))
      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v54) * *(float *)&v94)) * *(float *)&v94);
  *(float *)(a4 + 76) = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v54) * v65)) * v65) * v102;
  *(float *)(a4 + 60) = (float)((float)((float)((float)(*a2 - *a1) * 0.0) + (float)((float)(a2[1] - a1[1]) * 1.0))
                              + (float)((float)(a2[2] - a1[2]) * 0.0))
                      * *(float *)(a3 + 32);
  v66 = *(float *)(a3 + 36);
  *(uint32_t *)(a4 + 96) = 0;
  *(uint32_t *)(a4 + 100) = 0;
  *(uint32_t *)(a4 + 104) = 1065353216;
  *(uint32_t *)(a4 + 108) = 0;
  v107 = v66;
  v67 = a1[1] - *(float *)(v4 + 116);
  v68 = a1[2] - *(float *)(v4 + 120);
  v69 = *a1 - *(float *)(v4 + 112);
  *(float *)g4_m128_ptr<int32_t>(v54) = *a2 - v5[28];
  v103 = a2[1] - v5[29];
  v70 = a2[2] - v5[30];
  *(float *)g4_m128_ptr<int32_t>(v53) = (float)(1.0 * v67) - (float)(0.0 * v68);
  v71 = (float)(v68 * 0.0) - (float)(1.0 * v69);
  v72 = (float)(v69 * 0.0) - (float)(v67 * 0.0);
  v73 = (float)(0.0 * v70) - (float)(v103 * 1.0);
g4_m128_raw(v74) = 0x3F800000u;
  *(float *)g4_m128_ptr<int32_t>(v74) = 1.0 * *(float *)g4_m128_ptr<int32_t>(v54);
  v75 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v74));
  *(float *)g4_m128_ptr<int32_t>(v75) = *(float *)g4_m128_ptr<int32_t>(v75) - (float)(v70 * 0.0);
  v76 = COERCE_FLOAT(_mm_cvtsi128_si32(v75));
  *(float *)g4_m128_ptr<int32_t>(v75) = (float)(v103 * 0.0) - (float)(*(float *)g4_m128_ptr<int32_t>(v54) * 0.0);
  *(float *)g4_m128_ptr<int32_t>(v54) = *(float *)(v4 + 64) * *(float *)g4_m128_ptr<int32_t>(v53);
  *(uint32_t *)(a4 + 112) =g4_m128_lane<int32_t>(v54, 0);
  v77 = *(float *)(v4 + 68) * *(float *)g4_m128_ptr<int32_t>(v53);
  v104 = *(float *)g4_m128_ptr<int32_t>(v54);
  *(float *)(a4 + 116) = v77;
  *(float *)g4_m128_ptr<int32_t>(v74) = *(float *)(v4 + 72) * *(float *)g4_m128_ptr<int32_t>(v53);
  *(uint32_t *)(a4 + 120) =g4_m128_lane<int32_t>(v74, 0);
g4_m128_lane<int32_t>(v54, 0) =g4_m128_lane<int32_t>(v74, 0);
  *(float *)g4_m128_ptr<int32_t>(v53) = *(float *)g4_m128_ptr<int32_t>(v53) * *(float *)(v4 + 76);
  *(uint32_t *)(a4 + 124) =g4_m128_lane<int32_t>(v53, 0);
  v106 = *(float *)g4_m128_ptr<int32_t>(v53);
  *(float *)g4_m128_ptr<int32_t>(v74) = (float)(*(float *)(v4 + 80) * v71) + v104;
  *(uint32_t *)(a4 + 112) =g4_m128_lane<int32_t>(v74, 0);
  *(float *)g4_m128_ptr<int32_t>(v53) = (float)(*(float *)(v4 + 84) * v71) + v77;
  *(uint32_t *)(a4 + 116) =g4_m128_lane<int32_t>(v53, 0);
  v78 = (float)(*(float *)(v4 + 88) * v71) + *(float *)g4_m128_ptr<int32_t>(v54);
  *(float *)(a4 + 120) = v78;
  *(float *)g4_m128_ptr<int32_t>(v54) = v106 + (float)(v71 * *(float *)(v4 + 92));
  *(uint32_t *)(a4 + 124) =g4_m128_lane<int32_t>(v54, 0);
  v79 = (float)(*(float *)(v4 + 96) * v72) + *(float *)g4_m128_ptr<int32_t>(v74);
  *(float *)(a4 + 112) = v79;
  *(float *)g4_m128_ptr<int32_t>(v74) = (float)(*(float *)(v4 + 100) * v72) + *(float *)g4_m128_ptr<int32_t>(v53);
  *(uint32_t *)(a4 + 116) =g4_m128_lane<int32_t>(v74, 0);
  *(float *)g4_m128_ptr<int32_t>(v53) = (float)(*(float *)(v4 + 104) * v72) + v78;
  *(float *)(a4 + 120) = *(float *)g4_m128_ptr<int32_t>(v53);
  v105 = *(float *)g4_m128_ptr<int32_t>(v53);
  *(float *)(a4 + 124) = (float)(v72 * *(float *)(v4 + 108)) + *(float *)g4_m128_ptr<int32_t>(v54);
  *(float *)g4_m128_ptr<int32_t>(v54) = v5[16] * v73;
  *(uint32_t *)(a4 + 128) =g4_m128_lane<int32_t>(v54, 0);
  v80 = v5[17] * v73;
  *(float *)(a4 + 132) = v80;
  v81 = v5[18] * v73;
  *(float *)(a4 + 136) = v81;
  *(float *)g4_m128_ptr<int32_t>(v53) = v81;
  v82 = v73 * v5[19];
  *(float *)(a4 + 140) = v82;
  v83 = (float)(v76 * v5[20]) + *(float *)g4_m128_ptr<int32_t>(v54);
  *(float *)(a4 + 128) = v83;
  *(float *)g4_m128_ptr<int32_t>(v54) = (float)(v76 * v5[21]) + v80;
  *(uint32_t *)(a4 + 132) =g4_m128_lane<int32_t>(v54, 0);
  v84 = (float)(v76 * v5[22]) + *(float *)g4_m128_ptr<int32_t>(v53);
  *(float *)(a4 + 136) = v84;
  *(float *)g4_m128_ptr<int32_t>(v53) = (float)(v76 * v5[23]) + v82;
  *(uint32_t *)(a4 + 140) =g4_m128_lane<int32_t>(v53, 0);
  v85 = (float)(v5[24] * *(float *)g4_m128_ptr<int32_t>(v75)) + v83;
  *(float *)(a4 + 128) = v85;
  v86 = (float)(v5[25] * *(float *)g4_m128_ptr<int32_t>(v75)) + *(float *)g4_m128_ptr<int32_t>(v54);
  *(float *)(a4 + 132) = v86;
  *(float *)g4_m128_ptr<int32_t>(v54) = (float)(v5[26] * *(float *)g4_m128_ptr<int32_t>(v75)) + v84;
  *(uint32_t *)(a4 + 136) =g4_m128_lane<int32_t>(v54, 0);
  *(float *)(a4 + 140) = (float)(v5[27] * *(float *)g4_m128_ptr<int32_t>(v75)) + *(float *)g4_m128_ptr<int32_t>(v53);
  *(float *)g4_m128_ptr<int32_t>(v74) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v74) * *(float *)g4_m128_ptr<int32_t>(v74)) * *(float *)(v4 + 52))
                          + (float)((float)(v86 * v86) * v5[13]);
g4_m128_raw(v87) = *(unsigned int *)(v4 + 56);
  *(float *)g4_m128_ptr<int32_t>(v87) = (float)((float)((float)((float)((float)(v79 * v79) * *(float *)(v4 + 48))
                                                  + (float)((float)(v85 * v85) * v5[12]))
                                          + *(float *)g4_m128_ptr<int32_t>(v74))
                                  + (float)((float)(*(float *)g4_m128_ptr<int32_t>(v87) * (float)(v105 * v105))
                                          + (float)((float)(*(float *)g4_m128_ptr<int32_t>(v54) * *(float *)g4_m128_ptr<int32_t>(v54)) * v5[14])))
                          + fmaxf(*(float *)(v4 + 60) + v5[15], 1.4210855e-14f);
  v88 = _mm_cvtsi128_si32(v87);
  *(uint32_t *)(a4 + 140) =g4_m128_lane<int32_t>(v87, 0);
  v89 = (2130706432 - v88) & ((v88 ^ (v88 + 2139095040)) >> 31);
  *(float *)g4_m128_ptr<int32_t>(v54) = (float)(2.0
                                  - (float)(*(float *)g4_m128_ptr<int32_t>(v87)
                                          * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v87) * *(float *)&v89))
                                                  * *(float *)&v89)))
                          * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v87) * *(float *)&v89)) * *(float *)&v89);
  *(float *)(a4 + 124) = v107
                       * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v87) * *(float *)g4_m128_ptr<int32_t>(v54)))
                               * *(float *)g4_m128_ptr<int32_t>(v54));
  *(float *)(a4 + 108) = (float)((float)((float)((float)(*a2 - *a1) * 0.0) + (float)((float)(a2[1] - a1[1]) * 0.0))
                               + (float)((float)(a2[2] - a1[2]) * 1.0))
                       * *(float *)(a3 + 32);
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkStabilizedBallSocketConstraintBuildJacobian_noSchema  (binary VA: 0x1b01e00)
// Original: hkStabilizedBallSocketConstraintBuildJacobian_noSchema
// ----------------------------------------------------------------------------
int * hkStabilizedBallSocketConstraintBuildJacobian_noSchema(float *a1, float *a2, float a3, int a4, int a5)
{
  float *v5;
  float *v6;
  __m128i v7;
  int v8;
  float v9; // xmm2_4
  float v10; // xmm1_4
  __m128i v11;
  int *result;
  float v13; // xmm1_4
  int v14;
  int v15; // xmm2_4
  float v16; // xmm2_4
  __m128i v17;
  unsigned int v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  int v22;
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  float v27; // xmm1_4
  float v28; // xmm4_4
  float v29; // xmm7_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm4_4
  float v33; // xmm5_4
  float v34; // xmm0_4
  float v35; // xmm6_4
  float v36; // xmm4_4
  float v37; // xmm3_4
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm5_4
  __m128i v41;
  float v42; // xmm4_4
  float v43; // xmm0_4
  float v44;
  float v45; // xmm3_4
  float v46; // xmm6_4
  float v47; // xmm4_4
  float v48; // xmm3_4
  float v49; // xmm2_4
  float v50; // xmm6_4
  float v51; // xmm3_4
  float v52; // xmm2_4
  float v53; // xmm4_4
  float v54; // xmm2_4
  float v55; // xmm3_4
  float v56; // xmm2_4
  float v57; // xmm5_4
  float v58; // xmm1_4
  float v59; // xmm4_4
  float v60; // xmm3_4
  float v61; // xmm2_4
  float v62; // xmm5_4
  float v63; // xmm1_4
  float v64; // xmm4_4
  __m128i v65;
  int v66;
  float v67; // xmm5_4
  float v68; // xmm2_4
  float v69; // xmm4_4
  float v70; // xmm1_4
  float v71; // xmm6_4
  float v72; // xmm3_4
  float v73; // xmm2_4
  float v74; // xmm1_4
  float v75; // xmm5_4
  __m128i v76;
  float v77; // xmm4_4
  float v78;
  float v79; // xmm3_4
  float v80; // xmm6_4
  float v81; // xmm4_4
  float v82; // xmm3_4
  float v83; // xmm2_4
  float v84; // xmm6_4
  float v85; // xmm3_4
  float v86; // xmm4_4
  float v87; // xmm1_4
  float v88; // xmm3_4
  float v89; // xmm1_4
  float v90; // xmm2_4
  float v91; // xmm5_4
  float v92; // xmm1_4
  float v93; // xmm4_4
  float v94; // xmm3_4
  float v95; // xmm2_4
  float v96; // xmm5_4
  float v97; // xmm1_4
  float v98; // xmm4_4
  __m128i v99;
  int v100;
  float v101; // xmm1_4
  float v102; // xmm1_4
  float v103; // xmm5_4
  __m128i v104;
  float v105; // xmm3_4
  float v106; // xmm4_4
  float v107; // xmm6_4
  float v108; // xmm4_4
  float v109; // xmm1_4
  float v110;
  float v111; // xmm3_4
  float v112; // xmm5_4
  float v113; // xmm4_4
  float v114; // xmm3_4
  float v115; // xmm5_4
  float v116; // xmm3_4
  float v117; // xmm3_4
  float v118; // xmm6_4
  float v119; // xmm4_4
  float v120; // xmm3_4
  float v121; // xmm6_4
  float v122; // xmm4_4
  __m128i v123;
  int v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  int v134;
  float v135;
  float v136;
  int v137;
  float v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;
  float v145;
  float v146;
  float v147;
  float v148;
  float v149;

  v5 = *(float **)(a4 + 48);
  v6 = *(float **)(a4 + 52);
  hkBallSocketConstraintBuildJacobian_noSchema_noProj(a1, a2, a4, a5);
  v146 = *(float *)(a5 + 12);
g4_m128_raw(v7) = LODWORD(v146);
  v144 = *(float *)(a5 + 108);
  v145 = *(float *)(a5 + 60);
  *(float *)g4_m128_ptr<int32_t>(v7) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v7) * *(float *)g4_m128_ptr<int32_t>(v7)) + (float)(v145 * v145))
                         + (float)(v144 * v144);
  if ( *(float *)g4_m128_ptr<int32_t>(v7) <= 0.0 )
  {
g4_m128_raw(v11) = 0;
  }
  else
  {
    v8 = ((_mm_cvtsi128_si32(v7) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v7) >> 1));
g4_m128_raw(v11) = 0x3FC00000u;
    v9 = (float)(*(float *)&v8 * 1.5)
       - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v7)) * *(float *)&v8) * (float)(*(float *)&v8 * *(float *)&v8));
    v10 = (float)(v9 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v7)) * v9) * (float)(v9 * v9));
    *(float *)g4_m128_ptr<int32_t>(v11) = (float)((float)(1.5 * v10)
                                    - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v7)) * v10) * (float)(v10 * v10)))
                            * *(float *)g4_m128_ptr<int32_t>(v7);
  }
  result = (int *)a4;
  v13 = a3 * *(float *)(a4 + 32);
  if ( *(float *)g4_m128_ptr<int32_t>(v11) > v13 )
  {
    v14 = _mm_cvtsi128_si32(v11);
    v15 = (2130706432 - v14) & ((v14 ^ (v14 + 2139095040)) >> 31);
    v125 = 0.0;
    v16 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v11)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v11) * *(float *)&v15)) * *(float *)&v15)))
        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v11) * *(float *)&v15)) * *(float *)&v15);
g4_m128_raw(v17) = 0x40000000u;
    *(float *)g4_m128_ptr<int32_t>(v17) = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v11) * v16)) * v16) * v13;
    if ( *(float *)g4_m128_ptr<int32_t>(v17) > 0.0 )
    {
      v18 = ((_mm_cvtsi128_si32(v17) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v17) >> 1));
      v19 = _mm_cvtsi32_si128(v18);
      *(float *)g4_m128_ptr<int32_t>(v19) = (float)(*(float *)g4_m128_ptr<int32_t>(v19) * 1.5)
                              - (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v17) * 0.5) * *(float *)&v18)
                                      * (float)(*(float *)&v18 * *(float *)&v18));
      v20 = v19;
      *(float *)g4_m128_ptr<int32_t>(v20) = (float)(*(float *)g4_m128_ptr<int32_t>(v19) * 1.5)
                              - (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v17) * 0.5) * *(float *)g4_m128_ptr<int32_t>(v19))
                                      * (float)(*(float *)g4_m128_ptr<int32_t>(v19) * *(float *)g4_m128_ptr<int32_t>(v19)));
      v21 = v20;
      *(float *)g4_m128_ptr<int32_t>(v21) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v20) * 1.5)
                                      - (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v17) * 0.5) * *(float *)g4_m128_ptr<int32_t>(v20))
                                              * (float)(*(float *)g4_m128_ptr<int32_t>(v20) * *(float *)g4_m128_ptr<int32_t>(v20))))
                              * *(float *)g4_m128_ptr<int32_t>(v17);
      if ( *(float *)g4_m128_ptr<int32_t>(v21) > 0.0 )
      {
        v22 = ((_mm_cvtsi128_si32(v21) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v21) >> 1));
        v23 = (float)(*(float *)&v22 * 1.5)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v21)) * *(float *)&v22)
                    * (float)(*(float *)&v22 * *(float *)&v22));
        v24 = (float)(v23 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v21)) * v23) * (float)(v23 * v23));
        v125 = *(float *)g4_m128_ptr<int32_t>(v21)
             * (float)((float)(1.5 * v24)
                     - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v21)) * v24) * (float)(v24 * v24)));
      }
    }
    v139 = v5[28] + (float)((float)(*a1 - v5[28]) * v125);
    v126 = v5[29] + (float)((float)(a1[1] - v5[29]) * v125);
    v130 = v5[30] + (float)((float)(a1[2] - v5[30]) * v125);
    v25 = v6[30];
    v26 = v6[28] + (float)((float)(*a2 - v6[28]) * v125);
    v147 = *(float *)(a4 + 36);
    v27 = v6[29] + (float)((float)(a2[1] - v6[29]) * v125);
    v28 = (float)(a2[2] - v25) * v125;
    *(uint32_t *)a5 = 1065353216;
    *(uint32_t *)(a5 + 4) = 0;
    *(uint32_t *)(a5 + 8) = 0;
    *(uint32_t *)(a5 + 12) = 0;
    v29 = v27;
    v30 = v130 - v5[30];
    v31 = v139 - v5[28];
    v141 = v26;
    v32 = v25 + v28;
    v142 = v29;
    v33 = v126 - v5[29];
    v34 = v29 - v6[29];
    v143 = v32;
    v35 = (float)(v33 * 0.0) - (float)(0.0 * v30);
    v36 = v32 - v6[30];
    v37 = v26 - v6[28];
    v38 = (float)(v30 * 1.0) - (float)(0.0 * v31);
    v39 = (float)(v31 * 0.0) - (float)(v33 * 1.0);
    v40 = (float)(0.0 * v36) - (float)(0.0 * v34);
g4_m128_raw(v41) = 0u;
    *(float *)g4_m128_ptr<int32_t>(v41) = (float)(0.0 * v37) - (float)(v36 * 1.0);
    v42 = v5[16] * v35;
    v43 = (float)(v34 * 1.0) - (float)(v37 * 0.0);
    *(float *)(a5 + 16) = v42;
    v44 = COERCE_FLOAT(_mm_cvtsi128_si32(v41));
    *(float *)g4_m128_ptr<int32_t>(v41) = v5[17] * v35;
    *(uint32_t *)(a5 + 20) =g4_m128_lane<int32_t>(v41, 0);
    v45 = *(float *)g4_m128_ptr<int32_t>(v41);
    *(float *)g4_m128_ptr<int32_t>(v41) = v5[18] * v35;
    *(uint32_t *)(a5 + 24) =g4_m128_lane<int32_t>(v41, 0);
    v46 = v35 * v5[19];
    v132 = *(float *)g4_m128_ptr<int32_t>(v41);
    *(float *)(a5 + 28) = v46;
    *(float *)g4_m128_ptr<int32_t>(v41) = (float)(v5[20] * v38) + v42;
    *(uint32_t *)(a5 + 16) =g4_m128_lane<int32_t>(v41, 0);
    v47 = (float)(v5[21] * v38) + v45;
    *(float *)(a5 + 20) = v47;
    v48 = (float)(v5[22] * v38) + v132;
    *(float *)(a5 + 24) = v48;
    v49 = (float)(v38 * v5[23]) + v46;
    *(float *)(a5 + 28) = v49;
    v50 = (float)(v5[24] * v39) + *(float *)g4_m128_ptr<int32_t>(v41);
    *(float *)(a5 + 16) = v50;
    *(float *)g4_m128_ptr<int32_t>(v41) = (float)(v5[25] * v39) + v47;
    *(uint32_t *)(a5 + 20) =g4_m128_lane<int32_t>(v41, 0);
    v51 = v48 + (float)(v5[26] * v39);
    *(float *)(a5 + 24) = v51;
    v133 = v51;
    *(float *)(a5 + 28) = (float)(v39 * v5[27]) + v49;
    v52 = v6[16] * v40;
    *(float *)(a5 + 32) = v52;
    v53 = v52;
    v54 = v6[17] * v40;
    *(float *)(a5 + 36) = v54;
    v55 = v54;
    v56 = v6[18] * v40;
    *(float *)(a5 + 40) = v56;
    v57 = v40 * v6[19];
    *(float *)(a5 + 44) = v57;
    v58 = (float)(v44 * v6[20]) + v53;
    *(float *)(a5 + 32) = v58;
    v59 = (float)(v44 * v6[21]) + v55;
    *(float *)(a5 + 36) = v59;
    v60 = (float)(v44 * v6[22]) + v56;
    *(float *)(a5 + 40) = v60;
    v61 = (float)(v44 * v6[23]) + v57;
    *(float *)(a5 + 44) = v61;
    v62 = (float)(v6[24] * v43) + v58;
    *(float *)(a5 + 32) = v62;
    v63 = (float)(v6[25] * v43) + v59;
    *(float *)(a5 + 36) = v63;
    v64 = (float)(v6[26] * v43) + v60;
    *(float *)(a5 + 40) = v64;
    *(float *)(a5 + 44) = (float)(v43 * v6[27]) + v61;
g4_m128_raw(v65) = LODWORD(v133);
    *(float *)g4_m128_ptr<int32_t>(v65) = (float)((float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v65) * *(float *)g4_m128_ptr<int32_t>(v65)) * v5[14])
                                            + (float)((float)(v64 * v64) * v6[14]))
                                    + (float)((float)((float)((float)(v50 * v50) * v5[12])
                                                    + (float)((float)(v62 * v62) * v6[12]))
                                            + (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v41) * *(float *)g4_m128_ptr<int32_t>(v41))
                                                            * v5[13])
                                                    + (float)((float)(v63 * v63) * v6[13]))))
                            + fmaxf(v5[15] + v6[15], 1.4210855e-14f);
    v66 = _mm_cvtsi128_si32(v65);
    *(uint32_t *)(a5 + 44) =g4_m128_lane<int32_t>(v65, 0);
    v134 = (2130706432 - v66) & ((v66 ^ (v66 + 2139095040)) >> 31);
    *(float *)(a5 + 28) = (float)((float)(2.0
                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v65)
                                                * (float)((float)(2.0
                                                                - (float)(*(float *)g4_m128_ptr<int32_t>(v65)
                                                                        * (float)((float)(2.0
                                                                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v65)
                                                                                                * *(float *)&v134))
                                                                                * *(float *)&v134)))
                                                        * (float)((float)(2.0
                                                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v65)
                                                                                * *(float *)&v134))
                                                                * *(float *)&v134))))
                                * (float)((float)(2.0
                                                - (float)(*(float *)g4_m128_ptr<int32_t>(v65)
                                                        * (float)((float)(2.0
                                                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v65)
                                                                                * *(float *)&v134))
                                                                * *(float *)&v134)))
                                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v65) * *(float *)&v134))
                                                * *(float *)&v134)))
                        * v147;
    *(float *)(a5 + 12) = (float)((float)((float)(1.0 * (float)(v141 - v139)) + (float)((float)(v142 - v126) * 0.0))
                                + (float)((float)(v143 - v130) * 0.0))
                        * *(float *)(a4 + 32);
    v149 = *(float *)(a4 + 36);
    *(uint32_t *)(a5 + 48) = 0;
    *(uint32_t *)(a5 + 52) = 1065353216;
    *(uint32_t *)(a5 + 56) = 0;
    *(uint32_t *)(a5 + 60) = 0;
    v67 = v126 - v5[29];
    v68 = v130 - v5[30];
    v69 = v143 - v6[30];
    v70 = v139 - v5[28];
    *(float *)g4_m128_ptr<int32_t>(v65) = v142 - v6[29];
    v71 = (float)(0.0 * v67) - (float)(1.0 * v68);
    v72 = v141 - v6[28];
    v73 = (float)(v68 * 0.0) - (float)(0.0 * v70);
    v74 = (float)(v70 * 1.0) - (float)(v67 * 0.0);
    v75 = (float)(1.0 * v69) - (float)(0.0 * *(float *)g4_m128_ptr<int32_t>(v65));
g4_m128_raw(v76) = 0u;
    *(float *)g4_m128_ptr<int32_t>(v76) = (float)(0.0 * v72) - (float)(v69 * 0.0);
    v77 = v5[16] * v71;
    *(float *)g4_m128_ptr<int32_t>(v65) = (float)(*(float *)g4_m128_ptr<int32_t>(v65) * 0.0) - (float)(v72 * 1.0);
    *(float *)(a5 + 64) = v77;
    v78 = COERCE_FLOAT(_mm_cvtsi128_si32(v76));
    v79 = v5[17] * v71;
    *(float *)(a5 + 68) = v79;
    *(float *)g4_m128_ptr<int32_t>(v76) = v5[18] * v71;
    *(uint32_t *)(a5 + 72) =g4_m128_lane<int32_t>(v76, 0);
    v80 = v71 * v5[19];
    v135 = *(float *)g4_m128_ptr<int32_t>(v76);
    *(float *)(a5 + 76) = v80;
    *(float *)g4_m128_ptr<int32_t>(v76) = (float)(v5[20] * v73) + v77;
    *(uint32_t *)(a5 + 64) =g4_m128_lane<int32_t>(v76, 0);
    v81 = (float)(v5[21] * v73) + v79;
    *(float *)(a5 + 68) = v81;
    v82 = (float)(v5[22] * v73) + v135;
    *(float *)(a5 + 72) = v82;
    v83 = (float)(v73 * v5[23]) + v80;
    *(float *)(a5 + 76) = v83;
    v84 = (float)(v5[24] * v74) + *(float *)g4_m128_ptr<int32_t>(v76);
    *(float *)(a5 + 64) = v84;
    *(float *)g4_m128_ptr<int32_t>(v76) = (float)(v5[25] * v74) + v81;
    *(uint32_t *)(a5 + 68) =g4_m128_lane<int32_t>(v76, 0);
    v85 = v82 + (float)(v5[26] * v74);
    *(float *)(a5 + 72) = v85;
    v136 = v85;
    *(float *)(a5 + 76) = (float)(v74 * v5[27]) + v83;
    v86 = v6[16] * v75;
    *(float *)(a5 + 80) = v86;
    v87 = v6[17] * v75;
    *(float *)(a5 + 84) = v87;
    v88 = v87;
    v89 = v6[18] * v75;
    *(float *)(a5 + 88) = v89;
    v90 = v89;
    v91 = v75 * v6[19];
    *(float *)(a5 + 92) = v91;
    v92 = (float)(v78 * v6[20]) + v86;
    *(float *)(a5 + 80) = v92;
    v93 = (float)(v78 * v6[21]) + v88;
    *(float *)(a5 + 84) = v93;
    v94 = (float)(v78 * v6[22]) + v90;
    *(float *)(a5 + 88) = v94;
    v95 = (float)(v78 * v6[23]) + v91;
    *(float *)(a5 + 92) = v95;
    v96 = (float)(v6[24] * *(float *)g4_m128_ptr<int32_t>(v65)) + v92;
    *(float *)(a5 + 80) = v96;
    v97 = (float)(v6[25] * *(float *)g4_m128_ptr<int32_t>(v65)) + v93;
    *(float *)(a5 + 84) = v97;
    v98 = (float)(v6[26] * *(float *)g4_m128_ptr<int32_t>(v65)) + v94;
    *(float *)(a5 + 88) = v98;
    *(float *)(a5 + 92) = (float)(*(float *)g4_m128_ptr<int32_t>(v65) * v6[27]) + v95;
g4_m128_raw(v99) = LODWORD(v136);
    *(float *)g4_m128_ptr<int32_t>(v99) = (float)((float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v99) * *(float *)g4_m128_ptr<int32_t>(v99)) * v5[14])
                                            + (float)((float)(v98 * v98) * v6[14]))
                                    + (float)((float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v76) * *(float *)g4_m128_ptr<int32_t>(v76))
                                                            * v5[13])
                                                    + (float)((float)(v97 * v97) * v6[13]))
                                            + (float)((float)((float)(v84 * v84) * v5[12])
                                                    + (float)((float)(v96 * v96) * v6[12]))))
                            + fmaxf(v5[15] + v6[15], 1.4210855e-14f);
    v100 = _mm_cvtsi128_si32(v99);
    *(uint32_t *)(a5 + 92) =g4_m128_lane<int32_t>(v99, 0);
    v137 = (2130706432 - v100) & ((v100 ^ (v100 + 2139095040)) >> 31);
    v101 = (float)(2.0
                 - (float)(*(float *)g4_m128_ptr<int32_t>(v99)
                         * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v99) * *(float *)&v137)) * *(float *)&v137)))
         * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v99) * *(float *)&v137)) * *(float *)&v137);
    *(float *)(a5 + 76) = v149 * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v99) * v101)) * v101);
    *(float *)(a5 + 60) = (float)((float)((float)((float)(v141 - v139) * 0.0) + (float)((float)(v142 - v126) * 1.0))
                                + (float)((float)(v143 - v130) * 0.0))
                        * *(float *)(a4 + 32);
    v102 = *(float *)(a4 + 36);
    *(uint32_t *)(a5 + 96) = 0;
    *(uint32_t *)(a5 + 100) = 0;
    *(uint32_t *)(a5 + 104) = 1065353216;
    *(uint32_t *)(a5 + 108) = 0;
    v103 = v126 - v5[29];
    v148 = v102;
    *(float *)g4_m128_ptr<int32_t>(v76) = v130 - v5[30];
    v131 = v143 - v6[30];
g4_m128_raw(v104) = 0x3F800000u;
    v127 = v142 - v6[29];
    v138 = v141 - v6[28];
    v105 = (float)(v103 * 1.0) - (float)(*(float *)g4_m128_ptr<int32_t>(v76) * 0.0);
    v106 = v139 - v5[28];
    v107 = (float)(v106 * 0.0) - (float)(v103 * 0.0);
    *(float *)g4_m128_ptr<int32_t>(v76) = (float)(*(float *)g4_m128_ptr<int32_t>(v76) * 0.0) - (float)(v106 * 1.0);
    v140 = (float)(v131 * 0.0) - (float)(v127 * 1.0);
    *(float *)g4_m128_ptr<int32_t>(v104) = (float)(1.0 * v138) - (float)(v131 * 0.0);
    v108 = v5[16] * v105;
    v109 = (float)(0.0 * v127) - (float)(0.0 * v138);
    *(float *)(a5 + 112) = v108;
    v110 = COERCE_FLOAT(_mm_cvtsi128_si32(v104));
    *(float *)g4_m128_ptr<int32_t>(v99) = v5[17] * v105;
    *(uint32_t *)(a5 + 116) =g4_m128_lane<int32_t>(v99, 0);
    *(float *)g4_m128_ptr<int32_t>(v104) = v5[18] * v105;
    v128 = *(float *)g4_m128_ptr<int32_t>(v99);
    *(uint32_t *)(a5 + 120) =g4_m128_lane<int32_t>(v104, 0);
    v111 = v105 * v5[19];
    *(float *)(a5 + 124) = v111;
    v112 = v111;
    *(float *)g4_m128_ptr<int32_t>(v99) = (float)(v5[20] * *(float *)g4_m128_ptr<int32_t>(v76)) + v108;
    *(uint32_t *)(a5 + 112) =g4_m128_lane<int32_t>(v99, 0);
    v113 = v128 + (float)(v5[21] * *(float *)g4_m128_ptr<int32_t>(v76));
    *(float *)(a5 + 116) = v113;
    v114 = (float)(v5[22] * *(float *)g4_m128_ptr<int32_t>(v76)) + *(float *)g4_m128_ptr<int32_t>(v104);
    *(float *)(a5 + 120) = v114;
    *(float *)g4_m128_ptr<int32_t>(v76) = (float)(*(float *)g4_m128_ptr<int32_t>(v76) * v5[23]) + v112;
    *(uint32_t *)(a5 + 124) =g4_m128_lane<int32_t>(v76, 0);
    v115 = (float)(v5[24] * v107) + *(float *)g4_m128_ptr<int32_t>(v99);
    *(float *)(a5 + 112) = v115;
    *(float *)g4_m128_ptr<int32_t>(v104) = (float)(v5[25] * v107) + v113;
    *(uint32_t *)(a5 + 116) =g4_m128_lane<int32_t>(v104, 0);
    v116 = v114 + (float)(v5[26] * v107);
    *(float *)(a5 + 120) = v116;
    v129 = v116;
    *(float *)(a5 + 124) = (float)(v107 * v5[27]) + *(float *)g4_m128_ptr<int32_t>(v76);
    *(float *)g4_m128_ptr<int32_t>(v99) = v6[16] * v140;
    *(uint32_t *)(a5 + 128) =g4_m128_lane<int32_t>(v99, 0);
    v117 = v6[17] * v140;
    *(float *)(a5 + 132) = v117;
    *(float *)g4_m128_ptr<int32_t>(v76) = v6[18] * v140;
    *(uint32_t *)(a5 + 136) =g4_m128_lane<int32_t>(v76, 0);
    v118 = v140 * v6[19];
    *(float *)(a5 + 140) = v118;
    v119 = (float)(v110 * v6[20]) + *(float *)g4_m128_ptr<int32_t>(v99);
    *(float *)(a5 + 128) = v119;
    *(float *)g4_m128_ptr<int32_t>(v99) = (float)(v110 * v6[21]) + v117;
    *(uint32_t *)(a5 + 132) =g4_m128_lane<int32_t>(v99, 0);
    v120 = (float)(v110 * v6[22]) + *(float *)g4_m128_ptr<int32_t>(v76);
    *(float *)(a5 + 136) = v120;
    *(float *)g4_m128_ptr<int32_t>(v76) = (float)(v110 * v6[23]) + v118;
    *(uint32_t *)(a5 + 140) =g4_m128_lane<int32_t>(v76, 0);
    v121 = (float)(v6[24] * v109) + v119;
    *(float *)(a5 + 128) = v121;
    v122 = (float)(v6[25] * v109) + *(float *)g4_m128_ptr<int32_t>(v99);
    *(float *)(a5 + 132) = v122;
    *(float *)g4_m128_ptr<int32_t>(v99) = (float)(v6[26] * v109) + v120;
    *(uint32_t *)(a5 + 136) =g4_m128_lane<int32_t>(v99, 0);
    *(float *)(a5 + 140) = (float)(v109 * v6[27]) + *(float *)g4_m128_ptr<int32_t>(v76);
g4_m128_raw(v123) = LODWORD(v129);
    *(float *)g4_m128_ptr<int32_t>(v123) = (float)((float)((float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v104)
                                                                     * *(float *)g4_m128_ptr<int32_t>(v104))
                                                             * v5[13])
                                                     + (float)((float)(v122 * v122) * v6[13]))
                                             + (float)((float)((float)(v115 * v115) * v5[12])
                                                     + (float)((float)(v121 * v121) * v6[12])))
                                     + (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v123) * *(float *)g4_m128_ptr<int32_t>(v123))
                                                     * v5[14])
                                             + (float)((float)(*(float *)g4_m128_ptr<int32_t>(v99) * *(float *)g4_m128_ptr<int32_t>(v99))
                                                     * v6[14])))
                             + fmaxf(v5[15] + v6[15], 1.4210855e-14f);
    v124 = _mm_cvtsi128_si32(v123);
    *(uint32_t *)(a5 + 140) =g4_m128_lane<int32_t>(v123, 0);
g4_m128_lane<int32_t>(v99, 0) = (2130706432 - v124) & ((v124 ^ (v124 + 2139095040)) >> 31);
    *(float *)g4_m128_ptr<int32_t>(v99) = (float)(2.0
                                    - (float)(*(float *)g4_m128_ptr<int32_t>(v123)
                                            * (float)((float)(2.0
                                                            - (float)(*(float *)g4_m128_ptr<int32_t>(v123) * *(float *)g4_m128_ptr<int32_t>(v99)))
                                                    * *(float *)g4_m128_ptr<int32_t>(v99))))
                            * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v123) * *(float *)g4_m128_ptr<int32_t>(v99)))
                                    * *(float *)g4_m128_ptr<int32_t>(v99));
    *(float *)(a5 + 124) = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v123) * *(float *)g4_m128_ptr<int32_t>(v99)))
                                 * *(float *)g4_m128_ptr<int32_t>(v99))
                         * v148;
    *(float *)(a5 + 12) = v146 * v125;
    *(float *)(a5 + 60) = v145 * v125;
    *(float *)(a5 + 108) = v144 * v125;
    return (int *)(&dword_1C7B610);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix6fAdd  (binary VA: 0x1b131d0)
// Original: hkMatrix6fAdd
// ----------------------------------------------------------------------------
float * hkMatrix6fAdd(float *a1, float *a2)
{
  *a1 = *a1 + *a2;
  a1[1] = a1[1] + a2[1];
  a1[2] = a1[2] + a2[2];
  a1[3] = a1[3] + a2[3];
  a1[4] = a1[4] + a2[4];
  a1[5] = a1[5] + a2[5];
  a1[6] = a1[6] + a2[6];
  a1[7] = a1[7] + a2[7];
  a1[8] = a1[8] + a2[8];
  a1[9] = a1[9] + a2[9];
  a1[10] = a1[10] + a2[10];
  a1[11] = a1[11] + a2[11];
  a1[12] = a1[12] + a2[12];
  a1[13] = a1[13] + a2[13];
  a1[14] = a1[14] + a2[14];
  a1[15] = a1[15] + a2[15];
  a1[16] = a1[16] + a2[16];
  a1[17] = a1[17] + a2[17];
  a1[18] = a1[18] + a2[18];
  a1[19] = a1[19] + a2[19];
  a1[20] = a1[20] + a2[20];
  a1[21] = a1[21] + a2[21];
  a1[22] = a1[22] + a2[22];
  a1[23] = a1[23] + a2[23];
  a1[24] = a1[24] + a2[24];
  a1[25] = a1[25] + a2[25];
  a1[26] = a1[26] + a2[26];
  a1[27] = a1[27] + a2[27];
  a1[28] = a1[28] + a2[28];
  a1[29] = a1[29] + a2[29];
  a1[30] = a1[30] + a2[30];
  a1[31] = a1[31] + a2[31];
  a1[32] = a1[32] + a2[32];
  a1[33] = a1[33] + a2[33];
  a1[34] = a1[34] + a2[34];
  a1[35] = a1[35] + a2[35];
  a1[36] = a1[36] + a2[36];
  a1[37] = a1[37] + a2[37];
  a1[38] = a1[38] + a2[38];
  a1[39] = a1[39] + a2[39];
  a1[40] = a1[40] + a2[40];
  a1[41] = a1[41] + a2[41];
  a1[42] = a1[42] + a2[42];
  a1[43] = a1[43] + a2[43];
  a1[44] = a1[44] + a2[44];
  a1[45] = a1[45] + a2[45];
  a1[46] = a1[46] + a2[46];
  a1[47] = a1[47] + a2[47];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix6fSub  (binary VA: 0x1b13540)
// Original: hkMatrix6fSub
// ----------------------------------------------------------------------------
float * hkMatrix6fSub(float *a1, float *a2)
{
  *a1 = *a1 - *a2;
  a1[1] = a1[1] - a2[1];
  a1[2] = a1[2] - a2[2];
  a1[3] = a1[3] - a2[3];
  a1[4] = a1[4] - a2[4];
  a1[5] = a1[5] - a2[5];
  a1[6] = a1[6] - a2[6];
  a1[7] = a1[7] - a2[7];
  a1[8] = a1[8] - a2[8];
  a1[9] = a1[9] - a2[9];
  a1[10] = a1[10] - a2[10];
  a1[11] = a1[11] - a2[11];
  a1[12] = a1[12] - a2[12];
  a1[13] = a1[13] - a2[13];
  a1[14] = a1[14] - a2[14];
  a1[15] = a1[15] - a2[15];
  a1[16] = a1[16] - a2[16];
  a1[17] = a1[17] - a2[17];
  a1[18] = a1[18] - a2[18];
  a1[19] = a1[19] - a2[19];
  a1[20] = a1[20] - a2[20];
  a1[21] = a1[21] - a2[21];
  a1[22] = a1[22] - a2[22];
  a1[23] = a1[23] - a2[23];
  a1[24] = a1[24] - a2[24];
  a1[25] = a1[25] - a2[25];
  a1[26] = a1[26] - a2[26];
  a1[27] = a1[27] - a2[27];
  a1[28] = a1[28] - a2[28];
  a1[29] = a1[29] - a2[29];
  a1[30] = a1[30] - a2[30];
  a1[31] = a1[31] - a2[31];
  a1[32] = a1[32] - a2[32];
  a1[33] = a1[33] - a2[33];
  a1[34] = a1[34] - a2[34];
  a1[35] = a1[35] - a2[35];
  a1[36] = a1[36] - a2[36];
  a1[37] = a1[37] - a2[37];
  a1[38] = a1[38] - a2[38];
  a1[39] = a1[39] - a2[39];
  a1[40] = a1[40] - a2[40];
  a1[41] = a1[41] - a2[41];
  a1[42] = a1[42] - a2[42];
  a1[43] = a1[43] - a2[43];
  a1[44] = a1[44] - a2[44];
  a1[45] = a1[45] - a2[45];
  a1[46] = a1[46] - a2[46];
  a1[47] = a1[47] - a2[47];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix6fSetMul  (binary VA: 0x1b138b0)
// Original: hkMatrix6fSetMul
// ----------------------------------------------------------------------------
float * hkMatrix6fSetMul(int a1, float *a2, float *a3)
{
  int v3;
  float *v4;
  float *v5;
  int v6;
  char *v7;
  char *v8;
  float *v9;
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm4_4
  float v13; // xmm7_4
  float v14; // xmm5_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  float v22; // xmm5_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm4_4
  float v26; // xmm3_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm7_4
  float v30; // xmm5_4
  float v31; // xmm0_4
  float v32; // xmm2_4
  int v33;
  float v34; // xmm1_4
  float v35; // xmm6_4
  float v36; // xmm7_4
  float v37; // xmm6_4
  float v38; // xmm5_4
  float v39; // xmm1_4
  int v40;
  float v41; // xmm0_4
  float v42; // xmm7_4
  float v43; // xmm5_4
  float v44; // xmm1_4
  float v45; // xmm2_4
  float v46; // xmm1_4
  float v47; // xmm7_4
  float v48; // xmm5_4
  float v49; // xmm2_4
  int v50;
  float v51; // xmm6_4
  float v52; // xmm0_4
  float v53; // xmm1_4
  float v54; // xmm0_4
  float v55; // xmm7_4
  float v56; // xmm6_4
  float v57; // xmm5_4
  float v58; // xmm1_4
  float v59; // xmm0_4
  float v60; // xmm7_4
  int v61;
  int v62;
  float *result;
  float *v64;
  float *v65;
  float *v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float *v82;
  float *v83;
  float *v84;
  float *v85;
  float *v86;
  float *v87;
  float *v88;
  float *v89;
  float *v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  int v99;
  int v100;
  int v101;
  int v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float *v110;
  float *v111;
  int v112;
  int v113;
  float *v114;
  float *v115;
  float *v116;
  float *v117;

  v102 = a1 + 32;
  v115 = a2 + 4;
  v114 = a2 + 4;
  v65 = a2 + 16;
  v117 = a2 + 8;
  v64 = a2 + 20;
  v116 = a2 + 8;
  v112 = 0;
  v3 = a1 + 16;
  v4 = a2;
  do
  {
    v90 = a3;
    v89 = a3 + 1;
    v88 = a3 + 2;
    v87 = a3 + 4;
    v86 = a3 + 5;
    v85 = a3 + 6;
    v84 = a3 + 8;
    v83 = a3 + 9;
    v82 = a3 + 10;
    v99 = v102;
    v5 = (float *)(a1 - v112);
    v101 = v112 - a1;
    v66 = v4;
    v100 = v3;
    v6 = v3;
    v7 = (char *)((char *)v114 - (char *)a2);
    v113 = 2;
    v8 = (char *)((char *)v116 - (char *)a2);
    v9 = v66;
    do
    {
      v70 = *v88;
      v92 = *v9;
      v94 = v9[2];
      v71 = v9[3];
      v72 = *v114;
      v73 = *(float *)((char *)v115 + (uint32_t)(uintptr_t)(v7) - 12);
      v75 = *(float *)((char *)v115 + (uint32_t)(uintptr_t)(v7) - 4);
      v103 = *v90;
      v91 = *v89;
      v93 = v9[1];
      v74 = *(float *)((char *)v115 + (uint32_t)(uintptr_t)(v7) - 8);
      v76 = *v116;
      v77 = *(float *)((char *)v117 + (uint32_t)(uintptr_t)(v8) - 28);
      v78 = *(float *)((char *)v117 + (uint32_t)(uintptr_t)(v8) - 24);
      v79 = *(float *)((char *)v117 + (uint32_t)(uintptr_t)(v8) - 20);
      v10 = *v86;
      v11 = *v85;
      v12 = *v84;
      v67 = *v87;
      v13 = v90[24];
      v14 = v9[12] * v13;
      v96 = *v83;
      v15 = v89[24];
      v97 = *v82;
      v16 = v88[24];
      *v5 = v14;
      v68 = v10;
      v17 = v9[13] * v13;
      v69 = v11;
      v95 = v12;
      v5[1] = v17;
      v18 = v17;
      v19 = v9[14] * v13;
      v5[2] = v19;
      v20 = v13 * v9[15];
      v5[3] = v20;
      v21 = (float)(*(float *)((char *)v65 + (uint32_t)(uintptr_t)(v7) - 16) * v15) + v14;
      *v5 = v21;
      v111 = v5;
      v22 = (float)(*(float *)((char *)v65 + (uint32_t)(uintptr_t)(v7) - 12) * v15) + v18;
      v5[1] = v22;
      v23 = (float)(*(float *)((char *)v65 + (uint32_t)(uintptr_t)(v7) - 8) * v15) + v19;
      v5[2] = v23;
      v24 = (float)(*(float *)((char *)v65 + (uint32_t)(uintptr_t)(v7) - 4) * v15) + v20;
      v5[3] = v24;
      v25 = (float)(*(float *)((char *)v64 + (uint32_t)(uintptr_t)(v8) - 32) * v16) + v21;
      *v5 = v25;
      v26 = (float)(*(float *)((char *)v64 + (uint32_t)(uintptr_t)(v8) - 28) * v16) + v22;
      v5[1] = v26;
      v27 = v23 + (float)(*(float *)((char *)v64 + (uint32_t)(uintptr_t)(v8) - 24) * v16);
      v5[2] = v27;
      v104 = v27;
      v28 = v24 + (float)(v16 * *(float *)((char *)v64 + (uint32_t)(uintptr_t)(v8) - 20));
      v5[3] = v28;
      v29 = v87[24];
      v30 = v9[12] * v29;
      v105 = v28;
      v31 = v86[24];
      v32 = v85[24];
      v33 = v100 + v101;
      *(float *)(v33 + v6 - 16) = v30;
      v34 = v9[13] * v29;
      *(float *)(v33 + v6 - 12) = v34;
      v35 = v9[14] * v29;
      *(float *)(v33 + v6 - 8) = v35;
      v36 = v29 * v9[15];
      v80 = v35;
      *(float *)(v33 + v6 - 4) = v36;
      v37 = (float)(*(float *)((char *)v65 + (uint32_t)(uintptr_t)(v7) - 16) * v31) + v30;
      *(float *)(v33 + v6 - 16) = v37;
      v38 = (float)(*(float *)((char *)v65 + (uint32_t)(uintptr_t)(v7) - 12) * v31) + v34;
      *(float *)(v33 + v6 - 12) = v38;
      v39 = (float)(*(float *)((char *)v65 + (uint32_t)(uintptr_t)(v7) - 8) * v31) + v80;
      *(float *)(v33 + v6 - 8) = v39;
      v40 = v100 + v101;
      v41 = (float)(v31 * *(float *)((char *)v65 + (uint32_t)(uintptr_t)(v7) - 4)) + v36;
      *(float *)(v33 + v6 - 4) = v41;
      v42 = (float)(*(float *)((char *)v64 + (uint32_t)(uintptr_t)(v8) - 32) * v32) + v37;
      *(float *)(v40 + v6 - 16) = v42;
      v81 = v42;
      v43 = v38 + (float)(*(float *)((char *)v64 + (uint32_t)(uintptr_t)(v8) - 28) * v32);
      *(float *)(v40 + v6 - 12) = v43;
      v106 = v43;
      v44 = v39 + (float)(*(float *)((char *)v64 + (uint32_t)(uintptr_t)(v8) - 24) * v32);
      *(float *)(v40 + v6 - 8) = v44;
      v107 = v44;
      v45 = v41 + (float)(v32 * *(float *)((char *)v64 + (uint32_t)(uintptr_t)(v8) - 20));
      *(float *)(v40 + v6 - 4) = v45;
      v46 = v84[24];
      v47 = v9[12] * v46;
      v48 = v83[24];
      v108 = v45;
      v49 = v82[24];
      v50 = v99 + v101;
      *(float *)(v50 + v102 - 32) = v47;
      v110 = v9;
      v51 = v9[13] * v46;
      *(float *)(v50 + v102 - 28) = v51;
      v52 = v9[14] * v46;
      *(float *)(v50 + v102 - 24) = v52;
      v53 = v46 * v9[15];
      v98 = v52;
      *(float *)(v50 + v102 - 20) = v53;
      v54 = (float)(*(float *)((char *)v65 + (uint32_t)(uintptr_t)(v7) - 16) * v48) + v47;
      *(float *)(v50 + v102 - 32) = v54;
      v55 = (float)(*(float *)((char *)v65 + (uint32_t)(uintptr_t)(v7) - 12) * v48) + v51;
      *(float *)(v50 + v102 - 28) = v55;
      v56 = (float)(*(float *)((char *)v65 + (uint32_t)(uintptr_t)(v7) - 8) * v48) + v98;
      *(float *)(v50 + v102 - 24) = v56;
      v57 = (float)(v48 * *(float *)((char *)v65 + (uint32_t)(uintptr_t)(v7) - 4)) + v53;
      *(float *)(v50 + v102 - 20) = v57;
      v58 = (float)(*(float *)((char *)v64 + (uint32_t)(uintptr_t)(v8) - 32) * v49) + v54;
      *(float *)(v50 + v102 - 32) = v58;
      v59 = (float)(*(float *)((char *)v64 + (uint32_t)(uintptr_t)(v8) - 28) * v49) + v55;
      *(float *)(v50 + v102 - 28) = v59;
      v60 = (float)(*(float *)((char *)v64 + (uint32_t)(uintptr_t)(v8) - 24) * v49) + v56;
      *(float *)(v50 + v102 - 24) = v60;
      v5 = v111 + 12;
      v109 = v57 + (float)(v49 * *(float *)((char *)v64 + (uint32_t)(uintptr_t)(v8) - 20));
      *v111 = (float)((float)((float)(v92 * v103) + (float)(v91 * v72)) + (float)(v70 * v76)) + v25;
      v61 = v100 + v101;
      v111[1] = (float)((float)((float)(v93 * v103) + (float)(v73 * v91)) + (float)(v70 * v77)) + v26;
      v111[2] = (float)((float)((float)(v94 * v103) + (float)(v74 * v91)) + (float)(v78 * v70)) + v104;
      v111[3] = (float)((float)((float)(v103 * v71) + (float)(v91 * v75)) + (float)(v70 * v79)) + v105;
      *(float *)(v61 + v6 - 16) = (float)((float)((float)(v67 * v92) + (float)(v72 * v68)) + (float)(v76 * v69)) + v81;
      *(float *)(v61 + v6 - 12) = (float)((float)((float)(v67 * v93) + (float)(v73 * v68)) + (float)(v77 * v69)) + v106;
      *(float *)(v61 + v6 - 8) = (float)((float)((float)(v67 * v94) + (float)(v74 * v68)) + (float)(v78 * v69)) + v107;
      *(float *)(v61 + v6 - 4) = (float)((float)((float)(v67 * v71) + (float)(v68 * v75)) + (float)(v69 * v79)) + v108;
      v62 = v99 + v101;
      *(float *)(v62 + v102 - 32) = (float)((float)((float)(v95 * v92) + (float)(v72 * v96)) + (float)(v76 * v97)) + v58;
      *(float *)(v62 + v102 - 28) = (float)((float)((float)(v93 * v95) + (float)(v73 * v96)) + (float)(v77 * v97)) + v59;
      *(float *)(v62 + v102 - 24) = (float)((float)((float)(v94 * v95) + (float)(v74 * v96)) + (float)(v78 * v97)) + v60;
      *(float *)(v62 + v102 - 20) = (float)((float)((float)(v71 * v95) + (float)(v75 * v96)) + (float)(v79 * v97))
                                  + v109;
      v90 += 12;
      v89 += 12;
      v88 += 12;
      v87 += 12;
      v86 += 12;
      v85 += 12;
      v84 += 12;
      v83 += 12;
      v82 += 12;
      v100 += 48;
      v99 += 48;
      --v113;
    }
    while ( v113 != 0 );
    result = v9;
    v3 = v6 + 96;
    v102 += 96;
    v4 = v110 + 24;
    v114 += 24;
    v116 += 24;
    v112 -= 96;
  }
  while ( v112 != -192 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix6fSetMulV  (binary VA: 0x1b14270)
// Original: hkMatrix6fSetMulV
// ----------------------------------------------------------------------------
float * hkMatrix6fSetMulV(float *a1, float *a2, float *a3)
{
  float *result;
  float v4; // xmm4_4
  float v5; // xmm3_4
  float v6; // xmm7_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm5_4
  float v10; // xmm6_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  float v14; // xmm7_4
  float v15; // xmm7_4
  float v16; // xmm5_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm7_4
  float v20; // xmm0_4
  float v21; // xmm5_4
  float v22; // xmm4_4
  float v23; // xmm6_4
  float v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm5_4
  float v27; // xmm7_4
  float v28; // xmm6_4
  float v29;
  float v30; // xmm3_4
  float v31; // xmm7_4
  float v32; // xmm4_4
  float v33; // xmm5_4
  float v34; // xmm4_4
  float v35; // xmm3_4
  float v36; // xmm7_4
  float v37; // xmm6_4
  float v38; // xmm5_4
  float v39; // xmm4_4
  float v40; // xmm3_4
  float v41; // xmm7_4
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;

  result = a2;
  v4 = a3[1];
  v5 = a3[2];
  v6 = a3[4];
  v7 = (float)((float)(*a2 * *a3) + (float)(a2[4] * v4)) + (float)(a2[8] * v5);
  v8 = (float)((float)(a2[1] * *a3) + (float)(a2[5] * v4)) + (float)(a2[9] * v5);
  v9 = a2[12] * v6;
  v47 = (float)((float)(a2[6] * v4) + (float)(a2[2] * *a3)) + (float)(a2[10] * v5);
  v48 = (float)((float)(v4 * a2[7]) + (float)(*a3 * a2[3])) + (float)(v5 * a2[11]);
  v10 = a3[6];
  v11 = a3[5];
  *a1 = v9;
  v12 = a2[13] * v6;
  a1[1] = v12;
  v13 = a2[14] * v6;
  a1[2] = v13;
  v14 = v6 * a2[15];
  a1[3] = v14;
  v42 = v14;
  v15 = (float)(a2[16] * v11) + v9;
  *a1 = v15;
  v16 = (float)(a2[17] * v11) + v12;
  a1[1] = v16;
  v17 = (float)(a2[18] * v11) + v13;
  a1[2] = v17;
  v18 = (float)(v11 * a2[19]) + v42;
  a1[3] = v18;
  v19 = v15 + (float)(a2[20] * v10);
  *a1 = v19;
  v20 = v19;
  v21 = v16 + (float)(a2[21] * v10);
  a1[1] = v21;
  v43 = v21;
  v22 = v17 + (float)(a2[22] * v10);
  a1[2] = v22;
  v44 = v22;
  v23 = v18 + (float)(v10 * a2[23]);
  a1[3] = v23;
  v24 = a3[1];
  v45 = v23;
  v25 = a3[2];
  v49 = (float)((float)(result[28] * v24) + (float)(result[24] * *a3)) + (float)(result[32] * v25);
  v50 = (float)((float)(result[29] * v24) + (float)(a2[25] * *a3)) + (float)(result[33] * v25);
  v51 = (float)((float)(a2[30] * v24) + (float)(a2[26] * *a3)) + (float)(a2[34] * v25);
  v52 = (float)((float)(v24 * result[31]) + (float)(result[27] * *a3)) + (float)(v25 * a2[35]);
  v26 = a3[4];
  v27 = a2[36] * v26;
  v28 = a3[5];
  v29 = a3[6];
  a1[4] = v27;
  v30 = v27;
  v31 = a2[37] * v26;
  a1[5] = v31;
  v32 = a2[38] * v26;
  a1[6] = v32;
  v33 = v26 * a2[39];
  v46 = v32;
  a1[7] = v33;
  v34 = (float)(a2[40] * v28) + v30;
  a1[4] = v34;
  v35 = (float)(a2[41] * v28) + v31;
  a1[5] = v35;
  v36 = (float)(a2[42] * v28) + v46;
  a1[6] = v36;
  v37 = (float)(v28 * a2[43]) + v33;
  a1[7] = v37;
  v38 = (float)(v29 * a2[44]) + v34;
  a1[4] = v38;
  v39 = (float)(v29 * a2[45]) + v35;
  a1[5] = v39;
  v40 = (float)(v29 * a2[46]) + v36;
  a1[6] = v40;
  v41 = v29 * a2[47];
  a1[1] = v8 + v43;
  *a1 = v7 + v20;
  a1[2] = v47 + v44;
  a1[3] = v48 + v45;
  a1[4] = v38 + v49;
  a1[5] = v39 + v50;
  a1[7] = (float)(v41 + v37) + v52;
  a1[6] = v51 + v40;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix6fSetTranspose  (binary VA: 0x1b14630)
// Original: hkMatrix6fSetTranspose
// ----------------------------------------------------------------------------
hkMatrix3f::Self * hkMatrix6fSetTranspose(hkMatrix3f::Self *a1, hkMatrix3f::Self *a2)
{
  hkMatrix3f::setTranspose(a1, a2);
  hkMatrix3f::setTranspose((hkMatrix3f::Self *)((char *)a1 + 48), (hkMatrix3f::Self *)((char *)a2 + 96));
  hkMatrix3f::setTranspose((hkMatrix3f::Self *)((char *)a1 + 96), (hkMatrix3f::Self *)((char *)a2 + 48));
  return hkMatrix3f::setTranspose((hkMatrix3f::Self *)((char *)a1 + 144), (hkMatrix3f::Self *)((char *)a2 + 144));
}

// ----------------------------------------------------------------------------
// Function: hkMatrix6f::setInvert  (binary VA: 0x1b146a0)
// Original: hkMatrix6f::setInvert
// ----------------------------------------------------------------------------
float * hkMatrix6f::setInvert(hkMatrix6f::Self *self, const hkMatrix6f::Self *a2)
{
  float *v2;
  float *v3;
  float *v4;
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float *v8;
  int v9;
  float *result;
  float v11; // xmm0_4
  typedef float *_g4_t_v12;
  typedef float *_g4_t_v13;
  typedef float *_g4_t_v14;
  typedef float *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef float *_g4_t_v18;
  typedef hkMatrix6f::Self *_g4_t_v19;
  typedef float *_g4_t_v20;
  typedef float *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef float *_g4_t_v24;
  typedef uint8_t _g4_t_v25[204];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v15)) > _g4_s3 ? (16u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v16)) > _g4_s4 ? (20u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v17)) > _g4_s5 ? (24u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v18)) > _g4_s6 ? (28u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v19)) > _g4_s7 ? (36u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v20)) > _g4_s8 ? (40u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v21)) > _g4_s9 ? (44u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v22)) > _g4_s10 ? (52u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v23)) > _g4_s11 ? (56u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v24)) > _g4_s12 ? (60u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v25)) > _g4_s13 ? (64u + sizeof(_g4_t_v25)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);

  std::memcpy(v25, a2, 192);
  *(uint32_t *)self = 1065353216;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 1065353216;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 1065353216;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 36) = 1065353216;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 41) = 1065353216;
  *((uint32_t *)self + 42) = 0;
  *((uint32_t *)self + 43) = 0;
  *((uint32_t *)self + 44) = 0;
  *((uint32_t *)self + 47) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 45) = 0;
  *((uint32_t *)self + 46) = 1065353216;
  v12 = (float *)((char *)self + 96);
  v14 = (float *)v25;
  v13 = (float *)v25;
  v16 = 0;
  do
  {
    v23 = 0;
    v17 = 24 * v16;
    v21 = v12;
    v2 = v14;
    v15 = v13;
    v3 = v12 - 24;
    v4 = v14 + 24;
    do
    {
      v5 = 1.0 / *v15;
      *v2 = *v2 * v5;
      v2[1] = v2[1] * v5;
      v2[2] = v2[2] * v5;
      v2[3] = v2[3] * v5;
      *v4 = *v4 * v5;
      v4[1] = v4[1] * v5;
      v4[2] = v4[2] * v5;
      v4[3] = v4[3] * v5;
      *v3 = *v3 * v5;
      v3[1] = v3[1] * v5;
      v3[2] = v3[2] * v5;
      v3[3] = v3[3] * v5;
      *v21 = *v21 * v5;
      v21[1] = v21[1] * v5;
      v6 = v21[2] * v5;
      v7 = v5 * v21[3];
      v21[2] = v6;
      v21[3] = v7;
      v19 = self;
      v20 = (float *)v25;
      v22 = 0;
      v18 = v4;
      do
      {
        v24 = &v20[v17];
        v8 = (float *)v19;
        v9 = 0;
        result = v20;
        do
        {
          if ( v9 != v23 || (((uint8_t)v16 ^ (uint8_t)v22) & 1) != 0 )
          {
            v11 = -*v24;
            *result = (float)(*v2 * v11) + *result;
            result[1] = (float)(v2[1] * v11) + result[1];
            result[2] = (float)(v2[2] * v11) + result[2];
            result[3] = (float)(v2[3] * v11) + result[3];
            result[24] = (float)(*v18 * v11) + result[24];
            result[25] = (float)(v18[1] * v11) + result[25];
            result[26] = (float)(v18[2] * v11) + result[26];
            result[27] = (float)(v18[3] * v11) + result[27];
            *v8 = (float)(*v3 * v11) + *v8;
            v8[1] = (float)(v3[1] * v11) + v8[1];
            v8[2] = (float)(v3[2] * v11) + v8[2];
            v8[3] = (float)(v3[3] * v11) + v8[3];
            v8[24] = (float)(*v21 * v11) + v8[24];
            v8[25] = (float)(v21[1] * v11) + v8[25];
            v8[26] = (float)(v21[2] * v11) + v8[26];
            v8[27] = (float)(v11 * v21[3]) + v8[27];
          }
          ++v9;
          v24 += 4;
          result += 4;
          v8 += 4;
        }
        while ( v9 != 3 );
        ++v22;
        v20 += 12;
        v19 = (hkMatrix6f::Self *)((char *)v19 + 48);
      }
      while ( v22 != 2 );
      ++v23;
      v15 += 5;
      v2 += 4;
      v4 = v18 + 4;
      v3 += 4;
      v21 += 4;
      ++v17;
    }
    while ( v23 != 3 );
    ++v16;
    v13 += 36;
    v14 += 12;
    v12 += 12;
  }
  while ( v16 != 2 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMatrix6fSetInvert  (binary VA: 0x1b14c10)
// Original: hkMatrix6fSetInvert
// ----------------------------------------------------------------------------
float * hkMatrix6fSetInvert(hkMatrix6f::Self *a1, hkMatrix6f::Self *a2)
{
  return hkMatrix6f::setInvert(a1, a2);
}


