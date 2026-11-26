#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpSphereS.h"

// ----------------------------------------------------------------------------
// Function: hkpSphereShape::getSize  (binary VA: 0x1690b90)
// Original: hkpSphereShape::getSize
// ----------------------------------------------------------------------------
int hkpSphereShape::getSize()
{
  return 32;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereShape::calcSizeForSpu  (binary VA: 0x1690ba0)
// Original: hkpSphereShape::calcSizeForSpu
// ----------------------------------------------------------------------------
int hkpSphereShape::calcSizeForSpu()
{
  return 32;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereShape::getSupportingVertex  (binary VA: 0x1690bb0)
// Original: hkpSphereShape::getSupportingVertex
// ----------------------------------------------------------------------------
g4_int128_t * hkpSphereShape::getSupportingVertex(int a1, int a2, g4_int128_t *a3)
{
  *a3 = 0;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereShape::convertVertexIdsToVertices  (binary VA: 0x1690bc0)
// Original: hkpSphereShape::convertVertexIdsToVertices
// ----------------------------------------------------------------------------
uint32_t * hkpSphereShape::convertVertexIdsToVertices(int a1, int a2, int a3, int a4)
{
  int v4;
  uint32_t *result;

  v4 = a3 - 1;
  result = (uint32_t *)(a4 + 16 * (a3 - 1));
  if ( a3 - 1 >= 0 )
  {
    do
    {
      --v4;
      *result = 0;
      result[1] = 0;
      result[2] = 0;
      result[3] = 0;
      result -= 4;
    }
    while ( v4 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereShape::getCentre  (binary VA: 0x1690c10)
// Original: hkpSphereShape::getCentre
// ----------------------------------------------------------------------------
hkVector4f::Self * hkpSphereShape::getCentre(hkpSphereShape::Self *self, hkVector4f::Self *a2)
{
  *(g4_int128_t *)a2 = 0;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereShape::getNumCollisionSpheres  (binary VA: 0x1690c20)
// Original: hkpSphereShape::getNumCollisionSpheres
// ----------------------------------------------------------------------------
int hkpSphereShape::getNumCollisionSpheres()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereShape::getAabb  (binary VA: 0x1690c30)
// Original: hkpSphereShape::getAabb
// ----------------------------------------------------------------------------
hkAabb::Self * hkpSphereShape::getAabb(hkpSphereShape::Self *self, const hkTransformf::Self *a2, float a3, hkAabb::Self *a4)
{
  float v5; // xmm0_4

  v5 = a3 + *((float *)self + 4);
  *(float *)a4 = *((float *)a2 + 12) - v5;
  *((float *)a4 + 1) = *((float *)a2 + 13) - v5;
  *((float *)a4 + 2) = *((float *)a2 + 14) - v5;
  *((float *)a4 + 3) = *((float *)a2 + 15) - v5;
  *((float *)a4 + 4) = *((float *)a2 + 12) + v5;
  *((float *)a4 + 5) = *((float *)a2 + 13) + v5;
  *((float *)a4 + 6) = *((float *)a2 + 14) + v5;
  *((float *)a4 + 7) = v5 + *((float *)a2 + 15);
  return a4;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereShape::getCollisionSpheres  (binary VA: 0x1690cc0)
// Original: hkpSphereShape::getCollisionSpheres
// ----------------------------------------------------------------------------
hkSphere::Self * hkpSphereShape::getCollisionSpheres(hkpSphereShape::Self *self, hkSphere::Self *a2)
{
  int v3; // xmm0_4

  v3 = *((uint32_t *)self + 4);
  *(uint32_t *)a2 = 0;
  *((uint32_t *)a2 + 1) = 0;
  *((uint32_t *)a2 + 2) = 0;
  *((uint32_t *)a2 + 3) = v3;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereShape::getFirstVertex  (binary VA: 0x1690d10)
// Original: hkpSphereShape::getFirstVertex
// ----------------------------------------------------------------------------
hkVector4f::Self * hkpSphereShape::getFirstVertex(hkpSphereShape::Self *self, hkVector4f::Self *a2)
{
  *(g4_int128_t *)a2 = 0;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereShape::Destroy  (binary VA: 0x1690d20)
// Original: hkpSphereShape::~hkpSphereShape
// ----------------------------------------------------------------------------
void hkpSphereShape::Destroy(hkpSphereShape::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereShape::Destroy_ea1690d40  (binary VA: 0x1690d40)
// Original: hkpSphereShape::~hkpSphereShape
// ----------------------------------------------------------------------------
void hkpSphereShape::Destroy_ea1690d40(hkpSphereShape::Self *self)
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
// Function: hkpSphereShape::castRay  (binary VA: 0x1690e00)
// Original: hkpSphereShape::castRay
// ----------------------------------------------------------------------------
char * hkpSphereShape::castRay(char *a1, int a2, int a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  __m128i v8;
  bool v9;
  char v10; // si
  uint8_t v11; // si
  char v12; // di
  char v13;
  char v14;
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm7_4
  float v19; // xmm1_4
  __m128i v20;
  float v21; // xmm5_4
  int v22;
  int v23;
  float v24; // xmm6_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  char v27;
  uint32_t *v28;
  bool v29;
  uint64_t v30; // rax
  int v32;
  int v33;
  float v34; // xmm1_4
  float v35; // xmm7_4
  __m128i v36;
  float v37; // xmm1_4
  float v38; // xmm0_4
  __m128i v39;
  int v40;
  int v41;
  float v42; // xmm4_4
  float v43; // xmm5_4
  int v44;
  int v45;
  float v46; // xmm0_4
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtrcSphere");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  v51 = *(float *)(a2 + 16);
  v52 = 1.0;
  v50 = *(float *)a3;
g4_m128_raw(v8) = *(unsigned int *)(a3 + 16);
  *(float *)g4_m128_ptr<int32_t>(v8) = *(float *)g4_m128_ptr<int32_t>(v8) - *(float *)a3;
  v49 = *(float *)(a3 + 4);
  v54 = *(float *)(a3 + 20) - v49;
  v48 = *(float *)(a3 + 8);
  v47 = *(float *)(a3 + 12);
  v55 = *(float *)(a3 + 24) - v48;
  v9 = false;
  if ( *(float *)g4_m128_ptr<int32_t>(v8) == 0.0 )
    v9 = !__builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v8));
  if ( __builtin_isnan(v54) || (v10 = 2, v54 != 0.0) )
    v10 = 0;
  v11 = v9 | v10;
  if ( v55 == 0.0 )
  {
    v12 = 12;
    v13 = 4;
  }
  else
  {
    v12 = 8;
    v13 = 0;
  }
  if ( 0.0 != 1.0 )
    v12 = v13;
  v14 = v11 | v12;
  if ( ((v11 | (uint8_t)v12) & 1) != 0 )
  {
g4_m128_raw(v8) = 0;
    v15 = 0.0;
  }
  else
  {
    v15 = *(float *)g4_m128_ptr<int32_t>(v8) * *(float *)g4_m128_ptr<int32_t>(v8);
  }
  if ( (v14 & 2) != 0 )
  {
    v54 = 0.0;
    v16 = 0.0;
  }
  else
  {
    v16 = v54 * v54;
  }
  if ( (v14 & 4) != 0 )
  {
    v55 = 0.0;
    v17 = 0.0;
  }
  else
  {
    v17 = v55 * v55;
  }
  if ( ((v11 | (uint8_t)v12) & 8) != 0 )
    v52 = 0.0;
  v53 = (float)(v15 + v16) + v17;
  v18 = -(float)((float)((float)((float)(v50 - 0.0) * *(float *)g4_m128_ptr<int32_t>(v8)) + (float)(v54 * (float)(v49 - 0.0)))
               + (float)(v55 * (float)(v48 - 0.0)));
  if ( v53 == 0.0 )
  {
    v19 = -3.40282e38f;
    if ( v18 >= 0.0 )
      v19 = 3.40282e38f;
  }
  else
  {
    v44 = _mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v53)));
    v45 = (2130706432 - v44) & ((v44 ^ (v44 + 2139095040)) >> 31);
    v46 = (float)(2.0 - (float)(v53 * (float)((float)(2.0 - (float)(v53 * *(float *)&v45)) * *(float *)&v45)))
        * (float)((float)(2.0 - (float)(v53 * *(float *)&v45)) * *(float *)&v45);
    v19 = (float)((float)(2.0 - (float)(v53 * v46)) * v46) * v18;
  }
  v20 = v8;
  *(float *)g4_m128_ptr<int32_t>(v20) = (float)((float)((float)((float)((float)((float)(v50 - 0.0)
                                                                  + (float)(*(float *)g4_m128_ptr<int32_t>(v8) * v19))
                                                          * (float)((float)(v50 - 0.0)
                                                                  + (float)(*(float *)g4_m128_ptr<int32_t>(v8) * v19)))
                                                  + (float)((float)((float)(v49 - 0.0) + (float)(v54 * v19))
                                                          * (float)((float)(v49 - 0.0) + (float)(v54 * v19))))
                                          + (float)((float)((float)(v48 - 0.0) + (float)(v19 * v55))
                                                  * (float)((float)(v48 - 0.0) + (float)(v19 * v55))))
                                  - (float)(v51 * v51))
                          * (float)-v53;
  if ( *(float *)g4_m128_ptr<int32_t>(v20) < 0.0 )
    goto LABEL_26;
  v21 = 0.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v20) > 0.0 )
  {
    v22 = _mm_cvtsi128_si32(v20) >> 1;
    v23 = (_mm_cvtsi128_si32(v20) + 2139095040) >> 31;
    v24 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v20);
    v25 = (float)(1.5 * COERCE_FLOAT(v23 & (1597463174 - v22)))
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v20)) * COERCE_FLOAT(v23 & (1597463174 - v22)))
                * (float)(COERCE_FLOAT(v23 & (1597463174 - v22)) * COERCE_FLOAT(v23 & (1597463174 - v22))));
    v21 = (float)((float)(1.5 * (float)((float)(1.5 * v25) - (float)((float)(v24 * v25) * (float)(v25 * v25))))
                - (float)((float)(v24 * (float)((float)(1.5 * v25) - (float)((float)(v24 * v25) * (float)(v25 * v25))))
                        * (float)((float)((float)(1.5 * v25) - (float)((float)(v24 * v25) * (float)(v25 * v25)))
                                * (float)((float)(1.5 * v25) - (float)((float)(v24 * v25) * (float)(v25 * v25))))))
        * *(float *)g4_m128_ptr<int32_t>(v20);
  }
  v26 = v18 - v21;
  if ( (float)(v18 - v21) >= (float)(*(float *)(a4 + 16) * v53) || v26 < 0.0 )
  {
LABEL_26:
    v27 = 0;
  }
  else
  {
    v32 = _mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v53)));
    v33 = (2130706432 - v32) & ((v32 ^ (v32 + 2139095040)) >> 31);
    v34 = (float)(2.0 - (float)(v53 * (float)((float)(2.0 - (float)(v53 * *(float *)&v33)) * *(float *)&v33)))
        * (float)((float)(2.0 - (float)(v53 * *(float *)&v33)) * *(float *)&v33);
g4_m128_raw(v36) = LODWORD(v50);
    v35 = (float)((float)(2.0 - (float)(v53 * v34)) * v34) * v26;
    *(float *)g4_m128_ptr<int32_t>(v36) = (float)(v50 + (float)(*(float *)g4_m128_ptr<int32_t>(v8) * v35)) - 0.0;
    v37 = (float)((float)(v54 * v35) + v49) - 0.0;
    v38 = (float)(v48 + (float)(v55 * v35)) - 0.0;
    v39 = v36;
    *(float *)g4_m128_ptr<int32_t>(v39) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v36) * *(float *)g4_m128_ptr<int32_t>(v36)) + (float)(v37 * v37))
                            + (float)(v38 * v38);
    if ( *(float *)g4_m128_ptr<int32_t>(v39) <= 0.0 )
    {
      v43 = 0.0;
    }
    else
    {
      v40 = _mm_cvtsi128_si32(v39) >> 1;
      v41 = (_mm_cvtsi128_si32(v39) + 2139095040) >> 31;
      v56 = (float)(1.5 * COERCE_FLOAT(v41 & (1597463174 - v40)))
          - (float)((float)(COERCE_FLOAT(v41 & (1597463174 - v40)) * COERCE_FLOAT(v41 & (1597463174 - v40)))
                  * (float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v39)) * COERCE_FLOAT(v41 & (1597463174 - v40))));
      v42 = (float)(1.5 * v56) - (float)((float)(v56 * v56) * (float)(v56 * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v39))));
      v43 = (float)(1.5 * v42) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v39)) * v42) * (float)(v42 * v42));
    }
    *(float *)a4 = *(float *)g4_m128_ptr<int32_t>(v36) * v43;
    *(float *)(a4 + 4) = v37 * v43;
    *(float *)(a4 + 8) = v38 * v43;
    *(float *)(a4 + 12) = (float)((float)((float)(v52 * v35) + v47) - v51) * v43;
    *(float *)(a4 + 16) = v35;
    *(uint32_t *)(a4 + 4 * *(uint32_t *)(a4 + 64) + 32) = -1;
    v27 = 1;
  }
  v28 = *(uint32_t **)(v5 + 4);
  v29 = (unsigned int)(uintptr_t)(v28) < *(uint32_t *)(v5 + 12);
  *a1 = v27;
  if ( v29 )
  {
    *v28 = (uint32_t)(uintptr_t)("Et");
    v30 = __rdtsc();
    v28[1] = v30;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v28 + 3);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereShape::castRayBundle  (binary VA: 0x1691410)
// Original: hkpSphereShape::castRayBundle
// ----------------------------------------------------------------------------
int * hkpSphereShape::castRayBundle(int *a1, int a2, float *a3, int a4, int *a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  float v9; // xmm4_4
  float v10; // xmm7_4
  float v11; // xmm2_4
  float v12; // xmm7_4
  float v13; // xmm5_4
  float v14; // xmm3_4
  float v15; // xmm1_4
  bool v16;
  char v17;
  char v18;
  char v19;
  int v20;
  __m128i v21;
  int v22;
  int v23;
  int v24;
  float v25;
  int v26;
  int v27; // xmm0_4
  int v28;
  int v29;
  float v30; // xmm0_4
  int v31;
  float v32; // xmm0_4
  float v33; // xmm3_4
  int v34; // xmm0_4
  int v35;
  float v36; // xmm0_4
  int v37; // xmm0_4
  float v38; // xmm0_4
  float v39; // xmm5_4
  float v40; // xmm2_4
  float v41; // xmm3_4
  float v42; // xmm0_4
  float v43; // xmm2_4
  __m128i v44;
  __m128i v45;
  bool v46;
  bool v47;
  __m128i v48;
  float v49; // xmm5_4
  int v50;
  int v51;
  __m128i v52;
  float v53; // xmm2_4
  int v54; // xmm1_4
  float v55; // xmm4_4
  __m128i v56;
  float v57; // xmm0_4
  int v58;
  int v59;
  __m128i v60;
  int v61; // xmm0_4
  float v62; // xmm1_4
  float v63; // xmm0_4
  int v64;
  int v65;
  float v66; // xmm2_4
  float v67; // xmm2_4
  __m128i v68;
  int v69; // xmm0_4
  float v70; // xmm1_4
  int v71;
  int v72;
  __m128i v73;
  int v74;
  float v75; // xmm1_4
  float v76; // xmm0_4
  int v77;
  int v78;
  float v79; // xmm5_4
  float v80; // xmm1_4
  float v81; // xmm0_4
  float v82; // xmm3_4
  float v83; // xmm4_4
  float v84; // xmm2_4
  float v85; // xmm1_4
  float v86; // xmm0_4
  float v87; // xmm3_4
  float v88; // xmm4_4
  __m128i v89;
  bool v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  float v97; // xmm5_4
  float v98; // xmm2_4
  float v99; // xmm1_4
  int v100;
  float v101; // xmm0_4
  int v102;
  float v103; // xmm3_4
  int v104;
  float v105; // xmm4_4
  int v106;
  int v107;
  uint32_t *v108;
  uint64_t v109; // rax
  float v111;
  float v112;
  float v113;
  int *v114;
  float v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float v137;
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
  float v150;
  float v151;
  float v152;
  float v153;
  float v154;
  float v155;
  float v156;
  float v157;
  float v158;
  float v159;
  float v160;
  float v161;
  float v162;
  float v163;
  float v164;
  int v165;
  float v166;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v114 = address;
  v7 = *(uint32_t **)(*address + 4);
  v165 = *(uint32_t *)(v6 + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(v6 + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtrcSphereBundle");
    v8 = __rdtsc();
    *(uint32_t *)(v165 + 4) = v8;
    *(uint32_t *)(v6 + 4) = v165 + 12;
  }
  v130 = a3[16];
  v9 = *a3;
  v10 = a3[12];
  v11 = a3[1];
  *a1 = *a5;
  v134 = v10;
  v115 = *(float *)(a2 + 16);
  v159 = v9;
  v133 = a3[13];
  v158 = v11;
  v160 = v115 * v115;
  v132 = a3[14];
  v157 = a3[2];
  v155 = a3[4];
  v131 = a3[15];
  v129 = a3[17];
  v156 = a3[3];
  v154 = a3[5];
  v128 = a3[18];
  v153 = a3[6];
  v127 = a3[19];
  v152 = a3[7];
  v126 = a3[20];
  v151 = a3[8];
  v150 = a3[9];
  v142 = v127 - v152;
  v125 = a3[21];
  v149 = a3[10];
  v148 = a3[11];
  v124 = a3[22];
  v123 = a3[23];
  v163 = (float)((float)((float)(v130 - v155) * (float)(v130 - v155)) + (float)((float)(v10 - v9) * (float)(v10 - v9)))
       + (float)((float)(v126 - v151) * (float)(v126 - v151));
  v166 = (float)((float)((float)(v129 - v154) * (float)(v129 - v154))
               + (float)((float)(v133 - v11) * (float)(v133 - v11)))
       + (float)((float)(v125 - v150) * (float)(v125 - v150));
  v164 = (float)((float)((float)(v128 - v153) * (float)(v128 - v153))
               + (float)((float)(v132 - v157) * (float)(v132 - v157)))
       + (float)((float)(v124 - v149) * (float)(v124 - v149));
  v162 = (float)((float)((float)(v131 - v156) * (float)(v131 - v156)) + (float)(v142 * v142))
       + (float)((float)(v123 - v148) * (float)(v123 - v148));
  v12 = (float)((float)((float)(v10 - v9) * v9) + (float)((float)(v130 - v155) * v155))
      + (float)((float)(v126 - v151) * v151);
  v13 = (float)((float)((float)(v133 - v11) * v11) + (float)((float)(v129 - v154) * v154))
      + (float)((float)(v125 - v150) * v150);
  v14 = (float)((float)((float)(v132 - v157) * v157) + (float)((float)(v128 - v153) * v153))
      + (float)((float)(v124 - v149) * v149);
  v15 = (float)((float)((float)(v131 - v156) * v156) + (float)((float)(v127 - v152) * v152))
      + (float)((float)(v123 - v148) * v148);
  v116 = v15 * v15;
  v16 = (float)(v14 * v14) > (float)(100.0 * (float)(v164 * (float)(v115 * v115)));
  v17 = 4 * v16 + 8;
  v18 = 4 * v16;
  if ( (float)(v15 * v15) > (float)(100.0 * (float)(v162 * (float)(v115 * v115))) )
    v18 = v17;
  v19 = v18
      | ((float)(v12 * v12) > (float)((float)(v160 * v163) * 100.0))
      | (2 * ((float)(v13 * v13) > (float)((float)(v160 * v166) * 100.0)));
  v20 = v18 & 1 | ((float)(v12 * v12) > (float)((float)(v160 * v163) * 100.0));
  if ( (v18 & 1 | ((float)(v12 * v12) > (float)((float)(v160 * v163) * 100.0))) != 0 )
  {
    v136 = -v12;
g4_m128_raw(v21) = 0;
  }
  else
  {
g4_m128_raw(v21) = 0;
    v136 = 0.0;
  }
  v140 = *(float *)g4_m128_ptr<int32_t>(v21);
  v22 = v18 & 2 | (uint8_t)(2 * ((float)(v13 * v13) > (float)((float)(v160 * v166) * 100.0)));
  if ( (v19 & 2) != 0 )
    v140 = -v13;
  v139 = *(float *)g4_m128_ptr<int32_t>(v21);
  v23 = v19 & 4;
  if ( (v19 & 4) != 0 )
    v139 = -v14;
  v141 = *(float *)g4_m128_ptr<int32_t>(v21);
  v24 = v19 & 8;
  if ( v24 != 0 )
    v141 = -v15;
  v122 = *(float *)g4_m128_ptr<int32_t>(v21);
  if ( v20 == 0 )
    v122 = v12;
  v121 = *(float *)g4_m128_ptr<int32_t>(v21);
  if ( v22 == 0 )
    v121 = (float)((float)((float)(v133 - v11) * v11) + (float)((float)(v129 - v154) * v154))
         + (float)((float)(v125 - v150) * v150);
  v120 = *(float *)g4_m128_ptr<int32_t>(v21);
  if ( v23 == 0 )
    v120 = (float)((float)((float)(v132 - v157) * v157) + (float)((float)(v128 - v153) * v153))
         + (float)((float)(v124 - v149) * v149);
  v135 = *(float *)g4_m128_ptr<int32_t>(v21);
  if ( v24 == 0 )
    v135 = (float)((float)((float)(v131 - v156) * v156) + (float)(v142 * v152)) + (float)((float)(v123 - v148) * v148);
  v119 = v12 * v12;
  if ( v20 != 0 )
    v119 = *(float *)g4_m128_ptr<int32_t>(v21);
  v25 = v13 * v13;
  if ( v22 != 0 )
    v25 = COERCE_FLOAT(_mm_cvtsi128_si32(v21));
  v118 = v14 * v14;
  if ( v23 != 0 )
    v118 = *(float *)g4_m128_ptr<int32_t>(v21);
  if ( v24 != 0 )
    v116 = *(float *)g4_m128_ptr<int32_t>(v21);
  v26 = _mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v163)));
  v27 = (2130706432 - v26) & ((v26 ^ (v26 + 2139095040)) >> 31);
  v28 = _mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v166)));
  v29 = (2130706432 - v28) & ((v28 ^ (v28 + 2139095040)) >> 31);
  v30 = (float)(2.0 - (float)(v163 * (float)((float)(2.0 - (float)(v163 * *(float *)&v27)) * *(float *)&v27)))
      * (float)((float)(2.0 - (float)(v163 * *(float *)&v27)) * *(float *)&v27);
  v31 = _mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v164)));
  v117 = v30 * (float)(2.0 - (float)(v163 * v30));
  v32 = (float)(2.0 - (float)(v166 * (float)((float)(2.0 - (float)(v166 * *(float *)&v29)) * *(float *)&v29)))
      * (float)((float)(2.0 - (float)(v166 * *(float *)&v29)) * *(float *)&v29);
  v33 = v32 * (float)(2.0 - (float)(v166 * v32));
  v34 = (2130706432 - v31) & ((v31 ^ (v31 + 2139095040)) >> 31);
  v113 = v33;
  v35 = _mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v162)));
  v36 = (float)(2.0 - (float)(v164 * (float)((float)(2.0 - (float)(v164 * *(float *)&v34)) * *(float *)&v34)))
      * (float)((float)(2.0 - (float)(v164 * *(float *)&v34)) * *(float *)&v34);
  v112 = v36 * (float)(2.0 - (float)(v164 * v36));
  v37 = (2130706432 - v35) & ((v35 ^ (v35 + 2139095040)) >> 31);
  v38 = (float)(2.0 - (float)(v162 * (float)((float)(2.0 - (float)(v162 * *(float *)&v37)) * *(float *)&v37)))
      * (float)((float)(2.0 - (float)(v162 * *(float *)&v37)) * *(float *)&v37);
  v111 = v38 * (float)(2.0 - (float)(v162 * v38));
  v146 = v140 * v33;
  v143 = v141 * v111;
  v138 = 1.0 - (float)(v140 * v33);
  v39 = 1.0 - (float)(v141 * v111);
  v40 = (float)((float)(1.0 - (float)(v136 * v117)) * v9) + (float)(v134 * (float)(v136 * v117));
  v137 = 1.0 - (float)(v139 * v112);
  v41 = (float)(v130 * (float)(v136 * v117)) + (float)((float)(1.0 - (float)(v136 * v117)) * v155);
  v42 = (float)((float)(v136 * v117) * v126) + (float)((float)(1.0 - (float)(v136 * v117)) * v151);
  v43 = (float)((float)(v40 * v40) + (float)(v41 * v41)) + (float)(v42 * v42);
g4_m128_raw(v44) = LODWORD(v119);
  *(float *)g4_m128_ptr<int32_t>(v44) = v119 - (float)((float)(v43 - v160) * v163);
  v45 = v44;
  v46 = *(float *)g4_m128_ptr<int32_t>(v44) < *(float *)g4_m128_ptr<int32_t>(v21);
  v47 = *(float *)g4_m128_ptr<int32_t>(v44) == *(float *)g4_m128_ptr<int32_t>(v21);
  *(float *)g4_m128_ptr<int32_t>(v44) = *(float *)(a2 + 16) * *(float *)(a2 + 16);
  v161 = v25
       - (float)((float)((float)((float)((float)((float)((float)(v138 * v158) + (float)(v146 * v133))
                                               * (float)((float)(v138 * v158) + (float)(v146 * v133)))
                                       + (float)((float)((float)(v138 * v154) + (float)(v146 * v129))
                                               * (float)((float)(v138 * v154) + (float)(v146 * v129))))
                               + (float)((float)((float)(v146 * v125) + (float)(v138 * v150))
                                       * (float)((float)(v146 * v125) + (float)(v138 * v150))))
                       - v160)
               * v166);
  v147 = v118
       - (float)((float)((float)((float)((float)((float)((float)((float)(v139 * v112) * v132) + (float)(v157 * v137))
                                               * (float)((float)((float)(v139 * v112) * v132) + (float)(v157 * v137)))
                                       + (float)((float)((float)(v137 * v153) + (float)((float)(v139 * v112) * v128))
                                               * (float)((float)(v137 * v153) + (float)((float)(v139 * v112) * v128))))
                               + (float)((float)((float)(v137 * v149) + (float)((float)(v139 * v112) * v124))
                                       * (float)((float)(v137 * v149) + (float)((float)(v139 * v112) * v124))))
                       - *(float *)g4_m128_ptr<int32_t>(v44))
               * v164);
g4_m128_raw(v48) = LODWORD(v116);
  v49 = (float)((float)((float)((float)((float)((float)(v39 * v156) + (float)(v143 * v131))
                                      * (float)((float)(v39 * v156) + (float)(v143 * v131)))
                              + (float)((float)((float)(v39 * v152) + (float)(v143 * v127))
                                      * (float)((float)(v39 * v152) + (float)(v143 * v127))))
                      + (float)((float)((float)(v39 * v148) + (float)(v143 * v123))
                              * (float)((float)(v39 * v148) + (float)(v143 * v123))))
              - *(float *)g4_m128_ptr<int32_t>(v44))
      * v162;
  v50 = 4 * (v147 > *(float *)g4_m128_ptr<int32_t>(v21)) + 8;
  if ( (float)(v116 - v49) <= *(float *)g4_m128_ptr<int32_t>(v21) )
    v50 = 4 * (v147 > *(float *)g4_m128_ptr<int32_t>(v21));
  v51 = v50 | (!v46 && !v47) | (2 * (v161 > *(float *)g4_m128_ptr<int32_t>(v21)));
  *(float *)g4_m128_ptr<int32_t>(v48) = v116 - v49;
  v52 = v48;
  v145 = *(float *)g4_m128_ptr<int32_t>(v21);
  if ( *(float *)g4_m128_ptr<int32_t>(v21) < *(float *)g4_m128_ptr<int32_t>(v45) )
  {
    v53 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v45);
    v54 = ((_mm_cvtsi128_si32(v45) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v45) >> 1));
    v55 = (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v45)) * *(float *)&v54;
g4_m128_raw(v56) = 0x3FC00000u;
    v57 = (float)((float)((float)(*(float *)&v54 * 1.5) - (float)(v55 * (float)(*(float *)&v54 * *(float *)&v54))) * 1.5)
        - (float)((float)(v53
                        * (float)((float)(*(float *)&v54 * 1.5) - (float)(v55 * (float)(*(float *)&v54 * *(float *)&v54))))
                * (float)((float)((float)(*(float *)&v54 * 1.5) - (float)(v55 * (float)(*(float *)&v54 * *(float *)&v54)))
                        * (float)((float)(*(float *)&v54 * 1.5) - (float)(v55 * (float)(*(float *)&v54 * *(float *)&v54)))));
    *(float *)g4_m128_ptr<int32_t>(v56) = (float)(1.5 * v57) - (float)((float)(v53 * v57) * (float)(v57 * v57));
    v58 = _mm_cvtsi128_si32(v56);
    v59 = (2130706432 - v58) & ((v58 ^ (v58 + 2139095040)) >> 31);
    v145 = (float)((float)(2.0
                         - (float)((float)((float)(2.0 - (float)(*(float *)&v59 * *(float *)g4_m128_ptr<int32_t>(v56)))
                                         * *(float *)&v59)
                                 * *(float *)g4_m128_ptr<int32_t>(v56)))
                 * (float)((float)(2.0 - (float)(*(float *)&v59 * *(float *)g4_m128_ptr<int32_t>(v56))) * *(float *)&v59))
         * (float)(2.0
                 - (float)(*(float *)g4_m128_ptr<int32_t>(v56)
                         * (float)((float)(2.0
                                         - (float)((float)((float)(2.0
                                                                 - (float)(*(float *)&v59 * *(float *)g4_m128_ptr<int32_t>(v56)))
                                                         * *(float *)&v59)
                                                 * *(float *)g4_m128_ptr<int32_t>(v56)))
                                 * (float)((float)(2.0 - (float)(*(float *)&v59 * *(float *)g4_m128_ptr<int32_t>(v56)))
                                         * *(float *)&v59))));
  }
  v144 = *(float *)g4_m128_ptr<int32_t>(v21);
  if ( *(float *)g4_m128_ptr<int32_t>(v21) < v161 )
  {
g4_m128_raw(v60) = 0x3FC00000u;
    v61 = ((_mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v161))) + 2139095040) >> 31)
        & (1597463174 - (_mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v161))) >> 1));
    v62 = (float)(*(float *)&v61 * 1.5)
        - (float)((float)((float)(0.5 * v161) * *(float *)&v61) * (float)(*(float *)&v61 * *(float *)&v61));
    v63 = (float)(v62 * 1.5) - (float)((float)((float)(0.5 * v161) * v62) * (float)(v62 * v62));
    *(float *)g4_m128_ptr<int32_t>(v60) = (float)(1.5 * v63) - (float)((float)((float)(0.5 * v161) * v63) * (float)(v63 * v63));
    v64 = _mm_cvtsi128_si32(v60);
    v65 = (2130706432 - v64) & ((v64 ^ (v64 + 2139095040)) >> 31);
    v144 = (float)((float)(2.0
                         - (float)((float)((float)(2.0 - (float)(*(float *)&v65 * *(float *)g4_m128_ptr<int32_t>(v60)))
                                         * *(float *)&v65)
                                 * *(float *)g4_m128_ptr<int32_t>(v60)))
                 * (float)((float)(2.0 - (float)(*(float *)&v65 * *(float *)g4_m128_ptr<int32_t>(v60))) * *(float *)&v65))
         * (float)(2.0
                 - (float)(*(float *)g4_m128_ptr<int32_t>(v60)
                         * (float)((float)(2.0
                                         - (float)((float)((float)(2.0
                                                                 - (float)(*(float *)&v65 * *(float *)g4_m128_ptr<int32_t>(v60)))
                                                         * *(float *)&v65)
                                                 * *(float *)g4_m128_ptr<int32_t>(v60)))
                                 * (float)((float)(2.0 - (float)(*(float *)&v65 * *(float *)g4_m128_ptr<int32_t>(v60)))
                                         * *(float *)&v65))));
  }
  v66 = *(float *)g4_m128_ptr<int32_t>(v21);
  if ( *(float *)g4_m128_ptr<int32_t>(v21) < v147 )
  {
    v67 = 0.5 * v147;
g4_m128_raw(v68) = 0x3FC00000u;
    v69 = ((_mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v147))) + 2139095040) >> 31)
        & (1597463174 - (_mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v147))) >> 1));
    v70 = (float)(*(float *)&v69 * 1.5)
        - (float)((float)((float)(0.5 * v147) * *(float *)&v69) * (float)(*(float *)&v69 * *(float *)&v69));
    *(float *)g4_m128_ptr<int32_t>(v68) = (float)(1.5
                                    * (float)((float)(v70 * 1.5) - (float)((float)(v67 * v70) * (float)(v70 * v70))))
                            - (float)((float)(v67
                                            * (float)((float)(v70 * 1.5)
                                                    - (float)((float)(v67 * v70) * (float)(v70 * v70))))
                                    * (float)((float)((float)(v70 * 1.5)
                                                    - (float)((float)(v67 * v70) * (float)(v70 * v70)))
                                            * (float)((float)(v70 * 1.5)
                                                    - (float)((float)(v67 * v70) * (float)(v70 * v70)))));
    v71 = _mm_cvtsi128_si32(v68);
    v72 = (2130706432 - v71) & ((v71 ^ (v71 + 2139095040)) >> 31);
    v66 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v68)
                        * (float)((float)(2.0
                                        - (float)((float)((float)(2.0 - (float)(*(float *)&v72 * *(float *)g4_m128_ptr<int32_t>(v68)))
                                                        * *(float *)&v72)
                                                * *(float *)g4_m128_ptr<int32_t>(v68)))
                                * (float)((float)(2.0 - (float)(*(float *)&v72 * *(float *)g4_m128_ptr<int32_t>(v68)))
                                        * *(float *)&v72))))
        * (float)((float)(2.0
                        - (float)((float)((float)(2.0 - (float)(*(float *)&v72 * *(float *)g4_m128_ptr<int32_t>(v68)))
                                        * *(float *)&v72)
                                * *(float *)g4_m128_ptr<int32_t>(v68)))
                * (float)((float)(2.0 - (float)(*(float *)&v72 * *(float *)g4_m128_ptr<int32_t>(v68))) * *(float *)&v72));
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v21) >= *(float *)g4_m128_ptr<int32_t>(v52) )
  {
    v80 = *(float *)g4_m128_ptr<int32_t>(v21);
  }
  else
  {
g4_m128_raw(v73) = 0x3FC00000u;
    v74 = ((_mm_cvtsi128_si32(v52) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v52) >> 1));
    v75 = (float)(*(float *)&v74 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v52)) * *(float *)&v74)
                * (float)(*(float *)&v74 * *(float *)&v74));
    v76 = (float)(v75 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v52)) * v75) * (float)(v75 * v75));
    *(float *)g4_m128_ptr<int32_t>(v73) = (float)(1.5 * v76)
                            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v52)) * v76) * (float)(v76 * v76));
    v77 = _mm_cvtsi128_si32(v73);
    v78 = (2130706432 - v77) & ((v77 ^ (v77 + 2139095040)) >> 31);
    v79 = 2.0
        - (float)((float)((float)(2.0 - (float)(*(float *)&v78 * *(float *)g4_m128_ptr<int32_t>(v73))) * *(float *)&v78)
                * *(float *)g4_m128_ptr<int32_t>(v73));
    v80 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v73)
                        * (float)(v79
                                * (float)((float)(2.0 - (float)(*(float *)&v78 * *(float *)g4_m128_ptr<int32_t>(v73)))
                                        * *(float *)&v78))))
        * (float)(v79 * (float)((float)(2.0 - (float)(*(float *)&v78 * *(float *)g4_m128_ptr<int32_t>(v73))) * *(float *)&v78));
  }
  v81 = *(float *)g4_m128_ptr<int32_t>(v21);
  if ( (v51 & 1) != 0 )
    v81 = v145;
  v82 = *(float *)g4_m128_ptr<int32_t>(v21);
  if ( (v51 & 2) != 0 )
    v82 = v144;
  v83 = *(float *)g4_m128_ptr<int32_t>(v21);
  if ( (v51 & 4) != 0 )
    v83 = v66;
  v84 = *(float *)g4_m128_ptr<int32_t>(v21);
  if ( (v51 & 8) != 0 )
    v84 = v80;
  v85 = (float)(v136 - v122) - v81;
  v86 = (float)(v140 - v121) - v82;
  v87 = (float)(v139 - v120) - v83;
  v88 = (float)(v141 - v135) - v84;
g4_m128_raw(v89) = LODWORD(v162);
  *(float *)g4_m128_ptr<int32_t>(v89) = v162 * *(float *)(a4 + 256);
  v90 = (float)(v164 * *(float *)(a4 + 176)) > v87;
  v91 = 4 * v90 + 8;
  v92 = 4 * v90;
  if ( COERCE_FLOAT(_mm_cvtsi128_si32(v89)) > v88 )
    v92 = v91;
  v93 = v87 < *(float *)g4_m128_ptr<int32_t>(v21) ? 8 : 12;
  if ( v88 < *(float *)g4_m128_ptr<int32_t>(v21) )
    v93 = v87 >= *(float *)g4_m128_ptr<int32_t>(v21) ? 4 : 0;
  v94 = v51
      & *a1
      & (v92 | ((float)(v163 * *(float *)(a4 + 16)) > v85) | (2 * ((float)(v166 * *(float *)(a4 + 96)) > v86)))
      & (v93 | (v85 >= *(float *)g4_m128_ptr<int32_t>(v21)) | (v86 >= *(float *)g4_m128_ptr<int32_t>(v21) ? 2 : 0));
  *a1 = v94;
  v95 = _mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v115)));
  v96 = (2130706432 - v95) & ((v95 ^ (v95 + 2139095040)) >> 31);
  v97 = (float)((float)(2.0 - (float)(v115 * *(float *)&v96)) * *(float *)&v96)
      * (float)(2.0 - (float)(v115 * (float)((float)(2.0 - (float)(v115 * *(float *)&v96)) * *(float *)&v96)));
  v98 = (float)(2.0 - (float)(v115 * v97)) * v97;
  if ( (v94 & 1) != 0 )
  {
    v99 = v85 * v117;
    v100 = *(uint32_t *)(a4 + 64);
    *(uint32_t *)(a4 + 12) = 0;
    *(float *)(a4 + 16) = v99;
    *(float *)a4 = (float)((float)(v159 * (float)(1.0 - v99)) + (float)(v134 * v99)) * v98;
    *(float *)(a4 + 4) = (float)((float)(v155 * (float)(1.0 - v99)) + (float)(v130 * v99)) * v98;
    *(float *)(a4 + 8) = (float)((float)((float)(1.0 - v99) * v151) + (float)(v99 * v126)) * v98;
    *(uint32_t *)(a4 + 4 * v100 + 32) = -1;
  }
  if ( (v94 & 2) != 0 )
  {
    v101 = v86 * v113;
    v102 = *(uint32_t *)(a4 + 144);
    *(uint32_t *)(a4 + 92) = 0;
    *(float *)(a4 + 96) = v101;
    *(float *)(a4 + 80) = (float)((float)(v158 * (float)(1.0 - v101)) + (float)(v133 * v101)) * v98;
    *(float *)(a4 + 84) = (float)((float)(v154 * (float)(1.0 - v101)) + (float)(v129 * v101)) * v98;
    *(float *)(a4 + 88) = (float)((float)((float)(1.0 - v101) * v150) + (float)(v101 * v125)) * v98;
    *(uint32_t *)(a4 + 4 * v102 + 112) = -1;
  }
  if ( (v94 & 4) != 0 )
  {
    v103 = v87 * v112;
    v104 = *(uint32_t *)(a4 + 224);
    *(uint32_t *)(a4 + 172) = 0;
    *(float *)(a4 + 176) = v103;
    *(float *)(a4 + 160) = (float)((float)(v157 * (float)(1.0 - v103)) + (float)(v132 * v103)) * v98;
    *(float *)(a4 + 164) = (float)((float)(v153 * (float)(1.0 - v103)) + (float)(v128 * v103)) * v98;
    *(float *)(a4 + 168) = (float)((float)((float)(1.0 - v103) * v149) + (float)(v103 * v124)) * v98;
    *(uint32_t *)(a4 + 4 * v104 + 192) = -1;
  }
  if ( (v94 & 8) != 0 )
  {
    v105 = v88 * v111;
    v106 = *(uint32_t *)(a4 + 304);
    *(uint32_t *)(a4 + 252) = 0;
    *(float *)(a4 + 256) = v105;
    *(float *)(a4 + 240) = (float)((float)(v156 * (float)(1.0 - v105)) + (float)(v131 * v105)) * v98;
    *(float *)(a4 + 244) = (float)((float)(v152 * (float)(1.0 - v105)) + (float)(v127 * v105)) * v98;
    *(float *)(a4 + 248) = (float)((float)((float)(1.0 - v105) * v148) + (float)(v105 * v123)) * v98;
    *(uint32_t *)(a4 + 4 * v106 + 272) = -1;
  }
  v107 = *v114;
  v108 = *(uint32_t **)(*v114 + 4);
  if ( (unsigned int)(uintptr_t)(v108) < *(uint32_t *)(*v114 + 12) )
  {
    *v108 = (uint32_t)(uintptr_t)("Et");
    v109 = __rdtsc();
    v108[1] = v109;
    *(uint32_t *)(v107 + 4) = (uint32_t)(uintptr_t)(v108 + 3);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereShape::Construct  (binary VA: 0x1692870)
// Original: hkpSphereShape::hkpSphereShape
// ----------------------------------------------------------------------------
void hkpSphereShape::Construct(hkpSphereShape::Self *self, float a2)
{
  *((float *)self + 4) = a2;
  *((uint32_t *)self + 1) = -65535;
  *((uint8_t *)self + 8) = 0;
  *((uint8_t *)self + 9) = 4;
  *((uint8_t *)self + 10) = 0;
  *((uint8_t *)self + 11) = 0;
  *((uint32_t *)self + 3) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2099128);
}



// ============================================================================
// Address:   0x16928c0 (size: 59 bytes)
// Symbol:    _ZN14hkpSphereShapeC2E24hkFinishLoadedObjectFlag
// Demangled: hkpSphereShape::hkpSphereShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN14hkpSphereShapeC1E24hkFinishLoadedObjectFlag'
void (**hkpSphereShape::Construct(int a1, int a2))(hkpSphereShape::Self * self)
{
  hkpConvexShape::hkpConvexShape(a1, a2);
  *(uint8_t *)(a1 + 8) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2099128);
  return (void (**)(hkpSphereShape::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2099128));
}
// ----------------------------------------------------------------------------
// Function: hkpSphereShape::staticClass  (binary VA: 0x1699a90)
// Original: hkpSphereShape::staticClass
// ----------------------------------------------------------------------------
void * hkpSphereShape::staticClass()
{
  return &hkpSphereShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereSphereAgent::cleanup  (binary VA: 0x16e4010)
// Original: hkpSphereSphereAgent::cleanup
// ----------------------------------------------------------------------------
int hkpSphereSphereAgent::cleanup(hkpSphereSphereAgent::Self *self, hkpConstraintOwner::Self *a2)
{
  int v2;

  v2 = *((uint16_t *)self + 6);
  if ( (uint16_t)v2 != 0xFFFF )
  {
    (*(void (**)(uint32_t, int, hkpConstraintOwner::Self *))(**((uint32_t **)self + 2) + 28))(
      *((uint32_t *)self + 2),
      v2,
      a2);
    *((uint16_t *)self + 6) = -1;
  }
  return G4_VCALL<int>(self, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereSphereAgent::Destroy  (binary VA: 0x16e4050)
// Original: hkpSphereSphereAgent::~hkpSphereSphereAgent
// ----------------------------------------------------------------------------
void hkpSphereSphereAgent::Destroy(hkpSphereSphereAgent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereSphereAgent::Destroy_ea16e4070  (binary VA: 0x16e4070)
// Original: hkpSphereSphereAgent::~hkpSphereSphereAgent
// ----------------------------------------------------------------------------
void hkpSphereSphereAgent::Destroy_ea16e4070(hkpSphereSphereAgent::Self *self)
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
// Function: hkpSphereSphereAgent::staticGetPenetrations  (binary VA: 0x16e40d0)
// Original: hkpSphereSphereAgent::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpSphereSphereAgent::staticGetPenetrations(uint32_t *a1, uint32_t *a2, int a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  float *v8;
  float *v9;
  uint64_t v10; // rax
  int v11;
  uint32_t *v12;
  int *v14;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v14 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtSphereSphere");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  v8 = (float *)a1[2];
  v9 = (float *)a2[2];
  if ( (float)((float)(*(float *)(*a1 + 16) + *(float *)(*a2 + 16))
             * (float)(*(float *)(*a1 + 16) + *(float *)(*a2 + 16))) > (float)((float)((float)((float)(v9[12] - v8[12])
                                                                                             * (float)(v9[12] - v8[12]))
                                                                                     + (float)((float)(v9[13] - v8[13])
                                                                                             * (float)(v9[13] - v8[13])))
                                                                             + (float)((float)(v9[14] - v8[14])
                                                                                     * (float)(v9[14] - v8[14]))) )
    G4_VCALL<void>(a4, 8, a1, a2);
  LODWORD(v10) = (uint32_t)(uintptr_t)(v14);
  v11 = *v14;
  v12 = *(uint32_t **)(*v14 + 4);
  if ( (unsigned int)(uintptr_t)(v12) < *(uint32_t *)(*v14 + 12) )
  {
    *v12 = (uint32_t)(uintptr_t)("Et");
    v10 = __rdtsc();
    v12[1] = v10;
    *(uint32_t *)(v11 + 4) = (uint32_t)(uintptr_t)(v12 + 3);
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereSphereAgent::getPenetrations  (binary VA: 0x16e41c0)
// Original: hkpSphereSphereAgent::getPenetrations
// ----------------------------------------------------------------------------
int hkpSphereSphereAgent::getPenetrations(int a1, uint32_t *a2, uint32_t *a3, int a4, int a5)
{
  return hkpSphereSphereAgent::staticGetPenetrations(a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereSphereAgent::processCollision  (binary VA: 0x16e4200)
// Original: hkpSphereSphereAgent::processCollision
// ----------------------------------------------------------------------------
int hkpSphereSphereAgent::processCollision(int a1, uint32_t *a2, uint32_t *a3, int a4, int *a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  int v10;
  float *v11;
  __m128i v12;
  float v13; // xmm2_4
  float v14; // xmm1_4
  __m128i v15;
  float v16; // xmm4_4
  int v17;
  int v18; // xmm5_4
  float v19; // xmm6_4
  float v20; // xmm5_4
  float v21; // xmm6_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm4_4
  float v27; // xmm5_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm4_4
  float v31; // xmm5_4
  uint16_t v32;
  uint64_t v33; // rax
  int v34;
  uint32_t *v35;
  int v36;
  int *v38;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v38 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtSphereSphere");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v9 = a2[2];
g4_m128_raw(v12) = *(unsigned int *)(v9 + 48);
  v10 = *a3;
  v11 = (float *)a3[2];
  *(float *)g4_m128_ptr<int32_t>(v12) = *(float *)g4_m128_ptr<int32_t>(v12) - v11[12];
  v13 = *(float *)(v9 + 52) - v11[13];
  v14 = *(float *)(v9 + 56) - v11[14];
  v15 = v12;
  *(float *)g4_m128_ptr<int32_t>(v15) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)g4_m128_ptr<int32_t>(v12)) + (float)(v13 * v13))
                          + (float)(v14 * v14);
  v16 = *(float *)(*a2 + 16) + *(float *)(*a3 + 16);
  if ( (float)((float)(*(float *)(a4 + 12) + v16) * (float)(*(float *)(a4 + 12) + v16)) <= *(float *)g4_m128_ptr<int32_t>(v15) )
  {
    v36 = *(uint16_t *)(a1 + 12);
    if ( (uint16_t)v36 != 0xFFFF )
    {
      (*(void (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 8) + 28))(*(uint32_t *)(a1 + 8), v36, a5[1]);
      *(uint16_t *)(a1 + 12) = -1;
    }
  }
  else
  {
    v17 = *a5;
    if ( *(float *)g4_m128_ptr<int32_t>(v15) <= 0.0 )
    {
      v22 = 1.0;
      v26 = -v16;
      v23 = 0.0;
      v24 = 0.0;
      *(uint32_t *)(v17 + 16) = 1065353216;
      *(uint32_t *)(v17 + 20) = 0;
      *(uint32_t *)(v17 + 24) = 0;
      *(float *)(v17 + 28) = v26;
    }
    else
    {
      v18 = ((_mm_cvtsi128_si32(v15) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v15) >> 1));
      v19 = (float)(1.5 * *(float *)&v18)
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v15)) * *(float *)&v18)
                  * (float)(*(float *)&v18 * *(float *)&v18));
      v20 = (float)(1.5 * v19) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v15)) * v19) * (float)(v19 * v19));
      v21 = (float)(1.5 * v20) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v15)) * v20) * (float)(v20 * v20));
      v22 = *(float *)g4_m128_ptr<int32_t>(v12) * v21;
      v23 = v13 * v21;
      v24 = v14 * v21;
      v25 = (float)(*(float *)g4_m128_ptr<int32_t>(v15) * v21) - v16;
      *(float *)(v17 + 16) = v22;
      *(float *)(v17 + 20) = v23;
      *(float *)(v17 + 24) = v24;
      *(float *)(v17 + 28) = v25;
      v26 = v25;
    }
    v27 = *(float *)(v10 + 16);
    v28 = (float)(v23 * v27) + v11[13];
    v29 = (float)(v24 * v27) + v11[14];
    v30 = (float)(v26 * v27) + v11[15];
    v31 = (float)(v27 * v22) + v11[12];
    *(float *)(v17 + 4) = v28;
    *(float *)(v17 + 8) = v29;
    *(float *)(v17 + 12) = v30;
    *(float *)v17 = v31;
    v32 = *(uint16_t *)(a1 + 12);
    if ( v32 != 0xFFFF
      || (v32 = (*(int (**)(uint32_t, uint32_t *, uint32_t *, int, int *, uint32_t, int))(**(uint32_t **)(a1 + 8) + 20))(
                  *(uint32_t *)(a1 + 8),
                  a2,
                  a3,
                  a4,
                  a5,
                  0,
                  v17),
          *(uint16_t *)(a1 + 12) = v32,
          v32 != 0xFFFF) )
    {
      *(uint32_t *)(v17 + 32) = v32;
      *a5 += 48;
    }
  }
  LODWORD(v33) = (uint32_t)(uintptr_t)(v38);
  v34 = *v38;
  v35 = *(uint32_t **)(*v38 + 4);
  if ( (unsigned int)(uintptr_t)(v35) < *(uint32_t *)(*v38 + 12) )
  {
    *v35 = (uint32_t)(uintptr_t)("Et");
    v33 = __rdtsc();
    v35[1] = v33;
    *(uint32_t *)(v34 + 4) = (uint32_t)(uintptr_t)(v35 + 3);
  }
  return v33;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereSphereAgent::createSphereSphereAgent  (binary VA: 0x16e44f0)
// Original: hkpSphereSphereAgent::createSphereSphereAgent
// ----------------------------------------------------------------------------
int hkpSphereSphereAgent::createSphereSphereAgent(int a1, int a2, int a3, int a4)
{
  int address;
  int result;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  result = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
             *(uint32_t *)(*(uint32_t *)address + 44),
             16);
  *(uint32_t *)(result + 4) = -65535;
  *(uint32_t *)(result + 8) = a4;
  *(uint16_t *)(result + 12) = -1;
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_209B528);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereSphereAgent::getClosestPoints  (binary VA: 0x16e4550)
// Original: hkpSphereSphereAgent::getClosestPoints
// ----------------------------------------------------------------------------
int hkpSphereSphereAgent::getClosestPoints(int a1, uint32_t *a2, uint32_t *a3, int a4, int *a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  float *v10;
  __m128i v11;
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm7_4
  __m128i v15;
  int v16;
  float v17; // xmm5_4
  float v18; // xmm6_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm6_4
  float v23; // xmm4_4
  int v24;
  uint64_t v25; // rax
  int v26;
  uint32_t *v27;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef int *_g4_t_v33;
  typedef float _g4_t_v34[19];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v29)) > _g4_s0 ? (12u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v30)) > _g4_s1 ? (16u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v31)) > _g4_s2 ? (20u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v32)) > _g4_s3 ? (24u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v33)) > _g4_s4 ? (28u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v34)) > _g4_s5 ? (32u + sizeof(_g4_t_v34)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v33 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtSphereSphere");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v9 = a2[2];
g4_m128_raw(v11) = *(unsigned int *)(v9 + 48);
  v10 = (float *)a3[2];
  *(float *)g4_m128_ptr<int32_t>(v11) = *(float *)g4_m128_ptr<int32_t>(v11) - v10[12];
  v12 = *(float *)(v9 + 52) - v10[13];
  v31 = v10[13];
  v13 = *(float *)(v9 + 56) - v10[14];
  v32 = v10[12];
  v14 = *(float *)(*a3 + 16);
  v15 = v11;
  v30 = v10[14];
  v29 = *(float *)(*a2 + 16) + v14;
  *(float *)g4_m128_ptr<int32_t>(v15) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v11) * *(float *)g4_m128_ptr<int32_t>(v11)) + (float)(v12 * v12))
                          + (float)(v13 * v13);
  if ( (float)((float)(v29 + *(float *)(a4 + 12)) * (float)(v29 + *(float *)(a4 + 12))) > *(float *)g4_m128_ptr<int32_t>(v15) )
  {
    if ( *(float *)g4_m128_ptr<int32_t>(v15) <= 0.0 )
    {
      v19 = 1.0;
      v21 = 0.0;
      v22 = -v29;
      v20 = 0.0;
    }
    else
    {
      v16 = ((_mm_cvtsi128_si32(v15) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v15) >> 1));
      v17 = (float)(1.5 * *(float *)&v16)
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v15)) * *(float *)&v16)
                  * (float)(*(float *)&v16 * *(float *)&v16));
      v18 = (float)(1.5
                  * (float)((float)(1.5 * v17)
                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v15)) * v17) * (float)(v17 * v17))))
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v15))
                          * (float)((float)(1.5 * v17)
                                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v15)) * v17) * (float)(v17 * v17))))
                  * (float)((float)((float)(1.5 * v17)
                                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v15)) * v17) * (float)(v17 * v17)))
                          * (float)((float)(1.5 * v17)
                                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v15)) * v17) * (float)(v17 * v17)))));
      v19 = *(float *)g4_m128_ptr<int32_t>(v11) * v18;
      v20 = v12 * v18;
      v21 = v13 * v18;
      v22 = (float)(v18 * *(float *)g4_m128_ptr<int32_t>(v15)) - v29;
    }
    LODWORD(v34[12]) = (uint32_t)(uintptr_t)(a2);
    v34[4] = v19;
    v34[5] = v20;
    v23 = (float)(v14 * v22) + v10[15];
    v34[6] = v21;
    v34[7] = v22;
    LODWORD(v34[13]) = (uint32_t)(uintptr_t)(a3);
    v34[8] = v19;
    v34[0] = (float)(v14 * v19) + v32;
    v34[3] = v23;
    v24 = *a5;
    v34[9] = v20;
    v34[10] = v21;
    v34[11] = v22;
    v34[1] = (float)(v14 * v20) + v31;
    v34[2] = v30 + (float)(v14 * v21);
    (*(void (**)(int *, float *))(v24 + 8))(a5, v34);
  }
  LODWORD(v25) = (uint32_t)(uintptr_t)(v33);
  v26 = *v33;
  v27 = *(uint32_t **)(*v33 + 4);
  if ( (unsigned int)(uintptr_t)(v27) < *(uint32_t *)(*v33 + 12) )
  {
    *v27 = (uint32_t)(uintptr_t)("Et");
    v25 = __rdtsc();
    v27[1] = v25;
    *(uint32_t *)(v26 + 4) = (uint32_t)(uintptr_t)(v27 + 3);
  }
  return v25;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereSphereAgent::staticGetClosestPoints  (binary VA: 0x16e47f0)
// Original: hkpSphereSphereAgent::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpSphereSphereAgent::staticGetClosestPoints(uint32_t *a1, uint32_t *a2, int a3, int *a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  float *v9;
  __m128i v10;
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm7_4
  __m128i v14;
  int v15;
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm6_4
  float v22; // xmm4_4
  int v23;
  uint64_t v24; // rax
  int v25;
  uint32_t *v26;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef int *_g4_t_v32;
  typedef float _g4_t_v33[19];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v28)) > _g4_s0 ? (12u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v29)) > _g4_s1 ? (16u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v30)) > _g4_s2 ? (20u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v31)) > _g4_s3 ? (24u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v32)) > _g4_s4 ? (28u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v33)) > _g4_s5 ? (32u + sizeof(_g4_t_v33)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v32 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtSphereSphere");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  v8 = a1[2];
g4_m128_raw(v10) = *(unsigned int *)(v8 + 48);
  v9 = (float *)a2[2];
  *(float *)g4_m128_ptr<int32_t>(v10) = *(float *)g4_m128_ptr<int32_t>(v10) - v9[12];
  v11 = *(float *)(v8 + 52) - v9[13];
  v30 = v9[13];
  v12 = *(float *)(v8 + 56) - v9[14];
  v31 = v9[12];
  v13 = *(float *)(*a2 + 16);
  v14 = v10;
  v29 = v9[14];
  v28 = *(float *)(*a1 + 16) + v13;
  *(float *)g4_m128_ptr<int32_t>(v14) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v10) * *(float *)g4_m128_ptr<int32_t>(v10)) + (float)(v11 * v11))
                          + (float)(v12 * v12);
  if ( (float)((float)(v28 + *(float *)(a3 + 12)) * (float)(v28 + *(float *)(a3 + 12))) > *(float *)g4_m128_ptr<int32_t>(v14) )
  {
    if ( *(float *)g4_m128_ptr<int32_t>(v14) <= 0.0 )
    {
      v18 = 1.0;
      v20 = 0.0;
      v21 = -v28;
      v19 = 0.0;
    }
    else
    {
      v15 = ((_mm_cvtsi128_si32(v14) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v14) >> 1));
      v16 = (float)(1.5 * *(float *)&v15)
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v14)) * *(float *)&v15)
                  * (float)(*(float *)&v15 * *(float *)&v15));
      v17 = (float)(1.5
                  * (float)((float)(1.5 * v16)
                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v14)) * v16) * (float)(v16 * v16))))
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v14))
                          * (float)((float)(1.5 * v16)
                                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v14)) * v16) * (float)(v16 * v16))))
                  * (float)((float)((float)(1.5 * v16)
                                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v14)) * v16) * (float)(v16 * v16)))
                          * (float)((float)(1.5 * v16)
                                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v14)) * v16) * (float)(v16 * v16)))));
      v18 = *(float *)g4_m128_ptr<int32_t>(v10) * v17;
      v19 = v11 * v17;
      v20 = v12 * v17;
      v21 = (float)(v17 * *(float *)g4_m128_ptr<int32_t>(v14)) - v28;
    }
    LODWORD(v33[12]) = (uint32_t)(uintptr_t)(a1);
    v33[4] = v18;
    v33[5] = v19;
    v22 = (float)(v13 * v21) + v9[15];
    v33[6] = v20;
    v33[7] = v21;
    LODWORD(v33[13]) = (uint32_t)(uintptr_t)(a2);
    v33[8] = v18;
    v33[0] = (float)(v13 * v18) + v31;
    v33[3] = v22;
    v23 = *a4;
    v33[9] = v19;
    v33[10] = v20;
    v33[11] = v21;
    v33[1] = (float)(v13 * v19) + v30;
    v33[2] = v29 + (float)(v13 * v20);
    (*(void (**)(int *, float *))(v23 + 8))(a4, v33);
  }
  LODWORD(v24) = (uint32_t)(uintptr_t)(v32);
  v25 = *v32;
  v26 = *(uint32_t **)(*v32 + 4);
  if ( (unsigned int)(uintptr_t)(v26) < *(uint32_t *)(*v32 + 12) )
  {
    *v26 = (uint32_t)(uintptr_t)("Et");
    v24 = __rdtsc();
    v26[1] = v24;
    *(uint32_t *)(v25 + 4) = (uint32_t)(uintptr_t)(v26 + 3);
  }
  return v24;
}



// ============================================================================
// Address:   0x16e4a90 (size: 51 bytes)
// Symbol:    _ZN20hkpSphereSphereAgent13initAgentFuncERN22hkpCollisionDispatcher10AgentFuncsE
// Demangled: hkpSphereSphereAgent::initAgentFunc(hkpCollisionDispatcher::AgentFuncs &)
// ============================================================================
int (**hkpSphereSphereAgent::initAgentFunc(
        int (**a1)(int a1, int a2, int a3, int a4)))(int a1, int a2, int a3, int a4)
{
  *a1 = hkpSphereSphereAgent::createSphereSphereAgent;
  a1[1] = (int (*)(int, int, int, int))hkpSphereSphereAgent::staticGetPenetrations;
  a1[2] = (int (*)(int, int, int, int))hkpSphereSphereAgent::staticGetClosestPoints;
  a1[3] = (int (*)(int, int, int, int))((int * (*)(unsigned int, float *, float *, float *, int, int, int, int, int, int, int, unsigned int, int, int, int, int, int, int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, g4_int128_t, float, int, int, int, int, int, int, int, int, int, int, int, float, float, float, float, unsigned int, unsigned int, unsigned int, unsigned int, g4_int128_t, int32_t, unsigned int, int32_t, int32_t, unsigned int, float *, int, int, int, int, int, int, unsigned int))hkpIterativeLinearCastAgent::staticLinearCast);
  return a1;
}
// ----------------------------------------------------------------------------
// Function: hkpSphereSphereAgent::registerAgent  (binary VA: 0x16e4ad0)
// Original: hkpSphereSphereAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpSphereSphereAgent::registerAgent(hkpSphereSphereAgent::Self *self)
{
  int (*v2[10])(int, int, int, int);

  LOWORD(v2[4]) = 0;
  hkpSphereSphereAgent::initAgentFunc(v2);
  return hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 0, 0);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereSphereAgent::registerAgent2  (binary VA: 0x16e4b30)
// Original: hkpSphereSphereAgent::registerAgent2
// ----------------------------------------------------------------------------
int hkpSphereSphereAgent::registerAgent2(hkpSphereSphereAgent::Self *self)
{
  int (*v2[10])(int, int, int, int);

  LOWORD(v2[4]) = 0;
  hkpSphereSphereAgent::initAgentFunc(v2);
  return hkpCollisionDispatcher::registerCollisionAgent2((int *)self, (int)(uintptr_t)(v2), 0, 0);
}


