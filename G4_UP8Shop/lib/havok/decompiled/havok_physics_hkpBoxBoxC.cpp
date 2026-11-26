#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpBoxBoxC.h"

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxCollisionDetection::checkCompleteness  (binary VA: 0x16f9000)
// Original: hkpBoxBoxCollisionDetection::checkCompleteness
// ----------------------------------------------------------------------------
hkpBoxBoxManifold::Self * hkpBoxBoxCollisionDetection::checkCompleteness(hkpBoxBoxCollisionDetection::Self *self, hkpBoxBoxManifold::Self *a2, int a3, int a4)
{
  hkpBoxBoxManifold::Self *result;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  bool v9;
  char v10; // si
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint8_t v17;
  int v18;
  bool v19;
  char v20;
  int v21;
  int v22;
  int v23;
  int v24;
  bool v25;
  bool v26;
  char v27;
  int v28;
  int v29;
  int v30;
  int v31;
  bool v32;
  char v33; // si
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  bool v39;
  bool v40;
  char v41;
  char v42;
  hkpBoxBoxManifold::Self *i;
  int v44;
  unsigned int v45;
  int v46;
  bool v47;
  bool v48;
  bool v49;
  int v50;

  result = a2;
  v5 = *((uint8_t *)a2 + 33);
  if ( v5 > 2 )
  {
    if ( *((uint8_t *)a2 + 32) > 3u )
    {
      *((uint8_t *)a2 + 34) = 1;
      return result;
    }
    v44 = 1;
    v6 = 0;
    v46 = hkVector4Comparison_maskToFirstIndex[a3 >> 4];
    v45 = v5 + 1;
    v7 = 0;
    v50 = hkVector4Comparison_maskToFirstIndex[a4 >> 4];
    for ( i = a2; ; i = (hkpBoxBoxManifold::Self *)((char *)i + 4) )
    {
      v17 = *(uint8_t *)i;
      if ( *(uint8_t *)i <= 2u )
      {
        v31 = (int)*((uint8_t *)i + 1) >> 4;
        v32 = !(v31 & 1);
        v49 = (v31 & 2) == 0;
        v33 = 2 * ((v31 & 4) == 0);
        if ( hkVector4Comparison_maskToFirstIndex[a4 >> 4] == 0 )
          goto LABEL_36;
        v34 = 1 << (2 * (v33 + ((v31 & 2) == 0)));
        v35 = 2 * v34;
        v36 = v6 + v34;
        if ( (v6 & v35) == 0 )
          v6 = v36;
        if ( v50 != 1 )
        {
LABEL_36:
          v38 = 1 << (2 * (v32 + v33 + 4));
          if ( (v6 & (2 * v38)) == 0 )
            v6 += v38;
          if ( v50 == 2 )
            goto LABEL_10;
        }
        v27 = v32 + 2 * v49 + 8;
        goto LABEL_19;
      }
      if ( v17 <= 6u )
      {
        v8 = (int)*((uint8_t *)i + 1) >> 4;
        v9 = !(v8 & 1);
        v47 = (v8 & 2) == 0;
        v10 = 2 * ((v8 & 4) == 0);
        if ( hkVector4Comparison_maskToFirstIndex[a3 >> 4] != 0 )
        {
          v11 = 1 << (2 * (v10 + ((v8 & 2) == 0)));
          v12 = 2 * v11;
          v13 = v7 + v11;
          if ( (v7 & v12) == 0 )
            v7 = v13;
          if ( v46 == 1 )
            goto LABEL_8;
        }
        v37 = 1 << (2 * (v9 + v10 + 4));
        if ( (v7 & (2 * v37)) == 0 )
          v7 += v37;
        if ( v46 != 2 )
        {
LABEL_8:
          v14 = 1 << (2 * (v9 + 2 * v47 + 8));
          v15 = 2 * v14;
          v16 = v7 + v14;
          if ( (v15 & v7) == 0 )
            v7 = v16;
        }
        goto LABEL_10;
      }
      v18 = (int)v17 >> 4;
      v48 = (v18 & 2) == 0;
      v19 = (v18 & 4) == 0;
      if ( (v17 & 0xF) == 0 )
        break;
      v40 = !(v18 & 1);
      if ( (v17 & 0xF) != 1 )
      {
        v20 = v40 + 2 * v48 + 8;
LABEL_15:
        v21 = 1 << (2 * v20);
        v22 = 2 * v21;
        v23 = v7 + v21;
        if ( (v7 & v22) == 0 )
          v7 = v23;
        goto LABEL_17;
      }
      v42 = 2 * (v40 + 2 * v19 + 4);
      if ( (v7 & (2 * (1 << v42))) == 0 )
        v7 += 1 << v42;
LABEL_17:
      v24 = (int)*((uint8_t *)i + 1) >> 4;
      v25 = (v24 & 2) == 0;
      v26 = (v24 & 4) == 0;
      if ( (*((uint8_t *)i + 1) & 0xF) != 0 )
      {
        v39 = !(v24 & 1);
        if ( (*((uint8_t *)i + 1) & 0xF) == 1 )
        {
          v41 = 2 * (v39 + 2 * v26 + 4);
          if ( (v6 & (2 * (1 << v41))) == 0 )
            v6 += 1 << v41;
          goto LABEL_10;
        }
        v27 = v39 + 2 * v25 + 8;
      }
      else
      {
        v27 = v26 + v26 + v25;
      }
LABEL_19:
      v28 = 1 << (2 * v27);
      v29 = 2 * v28;
      v30 = v6 + v28;
      if ( (v6 & v29) == 0 )
        v6 = v30;
LABEL_10:
      if ( ++v44 == v45 )
      {
        result = a2;
        *((uint8_t *)a2 + 34) = ((v6 | v7) & 0x555555) == 0;
        return result;
      }
    }
    v20 = v48 + 2 * v19;
    goto LABEL_15;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxCollisionDetection::addPoint  (binary VA: 0x16f92f0)
// Original: hkpBoxBoxCollisionDetection::addPoint
// ----------------------------------------------------------------------------
uint32_t * hkpBoxBoxCollisionDetection::addPoint(uint32_t *a1, float *a2, hkpBoxBoxManifold::Self *a3, int a4, uint8_t *a5)
{
  uint8_t v5;
  float *v7;
  float v8; // xmm5_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  float v13; // xmm5_4
  int v14;
  int v15;
  int v16;
  float v17; // xmm2_4
  float v18; // xmm1_4
  int v19;
  int v20;
  float *v21;
  float v22; // xmm5_4
  float v23; // xmm4_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  float *v27;
  float v28; // xmm2_4
  float v29; // xmm4_4
  float v30; // xmm3_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm2_4
  float v34; // xmm5_4
  float v35; // xmm3_4
  float v36; // xmm1_4
  float v37; // xmm2_4
  int16_t v38;
  char *v39;
  float *v40;
  float v41; // xmm5_4
  float v42; // xmm4_4
  float v43; // xmm1_4
  float v44; // xmm0_4
  float v45; // xmm3_4
  float *v46;
  float v47; // xmm3_4
  float v48; // xmm5_4
  float v49; // xmm4_4
  float v50; // xmm2_4
  float v51; // xmm1_4
  float v52; // xmm0_4
  float v53; // xmm3_4
  int64_t v54;
  int v55;
  int v56;
  int v57;
  float *v58;
  int v59;
  float *v60;
  int v61;
  int v62;

  if ( *a5 <= 6u )
  {
    if ( *a5 <= 2u )
    {
      v7 = *((float **)a2 + 6);
      v8 = *(float *)(a4 + 16);
      v9 = *(float *)(a4 + 20);
      v10 = *(float *)(a4 + 24);
    }
    else
    {
      v7 = *((float **)a2 + 5);
      v8 = *(float *)a4;
      v9 = *(float *)(a4 + 4);
      v10 = *(float *)(a4 + 8);
    }
    v11 = (float)((float)((float)(*v7 * v8) + (float)(v7[4] * v9)) + (float)(v7[8] * v10)) + v7[12];
    v12 = (float)((float)((float)(v7[1] * v8) + (float)(v7[5] * v9)) + (float)(v7[9] * v10)) + v7[13];
    v13 = (float)((float)((float)(v8 * v7[2]) + (float)(v9 * v7[6])) + (float)(v10 * v7[10])) + v7[14];
    v5 = *((uint8_t *)a3 + 33);
    v14 = v5;
    if ( v5 != 0 )
    {
      v15 = 0;
      v61 = v14;
      while ( 1 )
      {
        if ( *((uint8_t *)a3 + 4 * v15) <= 6u )
        {
          v16 = *((uint32_t *)a2 + 4);
          v17 = v12 - *(float *)(v16 + 48 * v15 + 20);
          v18 = v13 - *(float *)(v16 + 48 * v15 + 24);
          if ( (float)((float)(a2[32] * a2[32]) + 0.00000011920929f) >= (float)((float)((float)((float)(v11 - *(float *)(v16 + 48 * v15 + 16))
                                                                                              * (float)(v11 - *(float *)(v16 + 48 * v15 + 16)))
                                                                                      + (float)(v17 * v17))
                                                                              + (float)(v18 * v18)) )
            goto LABEL_4;
        }
        if ( ++v15 >= v61 )
        {
          if ( *((uint8_t *)a3 + 33) > 7u )
            goto LABEL_4;
          goto LABEL_13;
        }
      }
    }
  }
  else
  {
    v5 = *((uint8_t *)a3 + 33);
  }
  if ( v5 > 7u )
  {
LABEL_4:
    *a1 = 1;
    return a1;
  }
LABEL_13:
  HIDWORD(v54) = (uint32_t)(uintptr_t)(a5);
  *(float *)&v54 = a2[1];
  v62 = hkpBoxBoxManifold::addPoint((int)(uintptr_t)(a3), *(uint32_t *)a2, v54);
  if ( v62 >= 0 )
  {
    v19 = **((uint32_t **)a2 + 4);
    v20 = *(uint32_t *)(a4 + 56);
    if ( v20 <= 2 )
    {
      v59 = 16 * *a5;
      *(uint32_t *)(v19 + 32) = *((uint16_t *)a5 + 1);
      v46 = *((float **)a2 + 6);
      v47 = *(float *)(a4 + 16);
      v48 = *(float *)(a4 + 20);
      v49 = *(float *)(a4 + 24);
      v50 = (float)((float)(v46[1] * v47) + (float)(v46[5] * v48)) + (float)(v46[9] * v49);
      v51 = (float)((float)((float)(v46[2] * v47) + (float)(v46[6] * v48)) + (float)(v46[10] * v49)) + v46[14];
      v52 = (float)((float)((float)(v46[3] * v47) + (float)(v46[7] * v48)) + (float)(v46[11] * v49)) + v46[15];
      v53 = (float)((float)((float)(v47 * *v46) + (float)(v48 * v46[4])) + (float)(v49 * v46[8])) + v46[12];
      *(float *)(v19 + 4) = v50 + v46[13];
      *(float *)(v19 + 8) = v51;
      *(float *)(v19 + 12) = v52;
      *(float *)v19 = v53;
      v60 = (float *)(*((uint32_t *)a2 + 5) + v59);
      v31 = *v60;
      if ( (*(uint32_t *)(a4 + 48) & 1) == 0 )
        v31 = -v31;
      v36 = v60[1];
      if ( (~(uint8_t)*(uint32_t *)(a4 + 48) & 2) != 0 )
        v36 = -v36;
      v37 = v60[2];
      if ( (~(uint8_t)*(uint32_t *)(a4 + 48) & 4) == 0 )
        goto LABEL_31;
    }
    else
    {
      if ( v20 > 6 )
      {
        *(uint32_t *)(v19 + 32) = *((uint16_t *)a5 + 1);
        v21 = *((float **)a2 + 5);
        v22 = *(float *)(a4 + 4);
        v23 = *(float *)(a4 + 8);
        v24 = (float)((float)((float)(v21[2] * *(float *)a4) + (float)(v21[6] * v22)) + (float)(v21[10] * v23))
            + v21[14];
        v25 = (float)((float)((float)(v21[3] * *(float *)a4) + (float)(v21[7] * v22)) + (float)(v21[11] * v23))
            + v21[15];
        v26 = (float)((float)((float)(*(float *)a4 * *v21) + (float)(v22 * v21[4])) + (float)(v23 * v21[8])) + v21[12];
        *(float *)(v19 + 4) = (float)((float)((float)(v21[1] * *(float *)a4) + (float)(v21[5] * v22))
                                    + (float)(v21[9] * v23))
                            + v21[13];
        *(float *)(v19 + 8) = v24;
        *(float *)(v19 + 12) = v25;
        *(float *)v19 = v26;
        v27 = *((float **)a2 + 5);
        v28 = *(float *)(a4 + 32);
        v29 = *(float *)(a4 + 36);
        v30 = *(float *)(a4 + 40);
        v31 = (float)((float)(*v27 * v28) + (float)(v27[4] * v29)) + (float)(v27[8] * v30);
        v32 = (float)(v27[1] * v28) + (float)(v27[5] * v29);
        v33 = (float)(v28 * v27[2]) + (float)(v29 * v27[6]);
        v34 = v27[9] * v30;
        v35 = v30 * v27[10];
        *(float *)(v19 + 16) = v31;
        v36 = v32 + v34;
        v37 = v33 + v35;
        *(float *)(v19 + 20) = v36;
        *(float *)(v19 + 24) = v37;
        *(uint32_t *)(v19 + 28) = *(uint32_t *)(a4 + 52);
LABEL_17:
        if ( *((uint8_t *)a3 + 33) <= 1u )
        {
          v56 = *((uint32_t *)a2 + 4);
        }
        else
        {
          if ( (float)((float)((float)(v31 * *(float *)(**((uint32_t **)a2 + 4) - 32))
                             + (float)(v36 * *(float *)(**((uint32_t **)a2 + 4) - 28)))
                     + (float)(v37 * *(float *)(**((uint32_t **)a2 + 4) - 24))) <= 0.0 )
          {
            hkpBoxBoxManifold::removePoint(a3, v62);
            goto LABEL_4;
          }
          v56 = *((uint32_t *)a2 + 4);
        }
        v55 = v19;
        v38 = (*(int (**)(uint32_t, uint32_t, uint32_t, uint32_t, int, uint32_t, int))(**((uint32_t **)a2 + 3) + 20))(
                *((uint32_t *)a2 + 3),
                *(uint32_t *)a2,
                *((uint32_t *)a2 + 1),
                *((uint32_t *)a2 + 2),
                v56,
                0,
                v19);
        v39 = (char *)a3 + 4 * v62;
        *((uint16_t *)v39 + 1) = v38;
        if ( v38 == -1 )
        {
          hkpBoxBoxManifold::removePoint(a3, v62);
        }
        else
        {
          **((uint32_t **)a2 + 4) += 48;
          *((uint16_t *)a5 + 1) = *((uint16_t *)v39 + 1);
          *(uint32_t *)(v55 + 32) = *((uint16_t *)v39 + 1);
          if ( *a5 <= 6u )
            ++*((uint8_t *)a3 + 32);
        }
        goto LABEL_23;
      }
      v57 = 16 * (*a5 - 4);
      *(uint32_t *)(v19 + 32) = *((uint16_t *)a5 + 1);
      v40 = *((float **)a2 + 5);
      v41 = *(float *)(a4 + 4);
      v42 = *(float *)(a4 + 8);
      v43 = (float)((float)((float)(v40[2] * *(float *)a4) + (float)(v40[6] * v41)) + (float)(v40[10] * v42)) + v40[14];
      v44 = (float)((float)((float)(v40[3] * *(float *)a4) + (float)(v40[7] * v41)) + (float)(v40[11] * v42)) + v40[15];
      v45 = (float)((float)((float)(*(float *)a4 * *v40) + (float)(v41 * v40[4])) + (float)(v42 * v40[8])) + v40[12];
      *(float *)(v19 + 4) = (float)((float)((float)(v40[1] * *(float *)a4) + (float)(v40[5] * v41))
                                  + (float)(v40[9] * v42))
                          + v40[13];
      *(float *)(v19 + 8) = v43;
      *(float *)(v19 + 12) = v44;
      *(float *)v19 = v45;
      v58 = (float *)(*((uint32_t *)a2 + 6) + v57);
      v31 = *v58;
      if ( (*(uint32_t *)(a4 + 48) & 1) == 0 )
        v31 = -v31;
      v36 = v58[1];
      if ( (~(uint8_t)*(uint32_t *)(a4 + 48) & 2) != 0 )
        v36 = -v36;
      v37 = v58[2];
      if ( (~(uint8_t)*(uint32_t *)(a4 + 48) & 4) == 0 )
      {
LABEL_31:
        *(float *)(v19 + 16) = v31;
        *(float *)(v19 + 20) = v36;
        *(float *)(v19 + 24) = v37;
        *(uint32_t *)(v19 + 28) = *(uint32_t *)(a4 + 52);
        goto LABEL_17;
      }
    }
    v37 = -v37;
    goto LABEL_31;
  }
LABEL_23:
  *a1 = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxCollisionDetection::findAdditionalManifoldPoints  (binary VA: 0x16f9990)
// Original: hkpBoxBoxCollisionDetection::findAdditionalManifoldPoints
// ----------------------------------------------------------------------------
const int16_t * hkpBoxBoxCollisionDetection::findAdditionalManifoldPoints(float *a1, hkpBoxBoxManifold::Self *a2, unsigned int a3)
{
  hkpBoxBoxManifold::Self *v3;
  float *v4;
  const int16_t *result;
  int v6;
  __m128 v7;
  float v8; // xmm4_4
  float v9; // xmm0_4
  float v10; // xmm5_4
  float *v11;
  float v12; // xmm1_4
  __m128 v13;
  float v14; // xmm6_4
  __m128 v15;
  float v16; // xmm0_4
  float v17; // xmm1_4
  __m128 v18;
  float v19; // xmm5_4
  float v20;
  float v21; // xmm4_4
  int v22;
  int v23;
  int v24;
  char v25;
  char v26;
  char v27;
  char v28;
  char v29;
  char v30;
  float v31; // xmm0_4
  int v32;
  int v33;
  int16_t v34;
  int v35;
  uint8_t *v36;
  uint8_t *v37;
  uint8_t *v38;
  uint8_t *v39;
  uint8_t *v40;
  uint8_t *v41;
  uint8_t *v42;
  int v43;
  uint8_t *v44;
  float v45; // xmm3_4
  int v46;
  int v47;
  float v48; // xmm5_4
  float v49; // xmm4_4
  float v50; // xmm3_4
  float v51; // xmm5_4
  float v52; // xmm2_4
  float v53; // xmm4_4
  float v54; // xmm1_4
  float v55; // xmm2_4
  float v56; // xmm0_4
  float v57; // xmm6_4
  float v58; // xmm2_4
  float v59; // xmm0_4
  float v60; // xmm5_4
  float v61; // xmm2_4
  float v62; // xmm1_4
  float v63; // xmm0_4
  float v64; // xmm3_4
  float v65; // xmm0_4
  float v66; // xmm6_4
  float v67; // xmm1_4
  float v68; // xmm3_4
  float v69; // xmm3_4
  float v70; // xmm4_4
  float v71; // xmm0_4
  bool v72;
  bool v73;
  uint8_t v74;
  uint8_t v75;
  int v76;
  int16_t v77;
  char v78;
  int v79;
  uint8_t *v80;
  uint8_t *v81;
  uint8_t *v82;
  uint8_t *v83;
  uint8_t *v84;
  uint8_t *v85;
  uint8_t *v86;
  int v87;
  uint8_t *v88;
  float v89; // xmm0_4
  int v90;
  int v91;
  float v92; // xmm4_4
  float v93; // xmm3_4
  float v94; // xmm4_4
  float v95; // xmm1_4
  float v96; // xmm0_4
  float v97; // xmm4_4
  float v98; // xmm3_4
  float v99; // xmm2_4
  float v100; // xmm1_4
  float v101; // xmm3_4
  float v102; // xmm2_4
  float v103; // xmm1_4
  float v104; // xmm5_4
  float v105; // xmm0_4
  float v106; // xmm3_4
  float v107; // xmm1_4
  bool v108;
  float v109; // xmm0_4
  float v110; // xmm4_4
  bool v111;
  bool v112;
  float v113; // xmm4_4
  bool v114;
  uint8_t v115;
  uint8_t v116;
  float v117; // xmm3_4
  float v118; // xmm0_4
  float v119; // xmm2_4
  float v120; // xmm3_4
  float v121; // xmm0_4
  float v122; // xmm3_4
  float v123; // xmm2_4
  typedef float _g4_t_v124;
  typedef bool _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef uint32_t *_g4_t_v130;
  typedef unsigned int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef float _g4_t_v134;
  typedef char _g4_t_v135;
  typedef char _g4_t_v136;
  typedef float _g4_t_v137;
  typedef char _g4_t_v138;
  typedef char _g4_t_v139;
  typedef float *_g4_t_v140;
  typedef int _g4_t_v141;
  typedef char _g4_t_v142;
  typedef uint8_t _g4_t_v143;
  typedef char _g4_t_v144;
  typedef uint8_t _g4_t_v145;
  typedef int _g4_t_v146;
  typedef const int16_t *_g4_t_v147;
  typedef const int16_t *_g4_t_v148;
  typedef int _g4_t_v149;
  typedef const int16_t *_g4_t_v150;
  typedef int _g4_t_v151;
  typedef uint8_t _g4_t_v152;
  typedef char _g4_t_v153;
  typedef int16_t _g4_t_v154;
  typedef float _g4_t_v155;
  typedef float _g4_t_v156;
  typedef float _g4_t_v157;
  typedef float _g4_t_v158;
  typedef float _g4_t_v159;
  typedef float _g4_t_v160;
  typedef float _g4_t_v161;
  typedef float _g4_t_v162;
  typedef float _g4_t_v163;
  typedef float _g4_t_v164;
  typedef float _g4_t_v165;
  typedef float _g4_t_v166;
  typedef g4_int128_t _g4_t_v167;
  typedef int _g4_t_v168;
  typedef float _g4_t_v169;
  typedef int _g4_t_v170;
  typedef float **_g4_t_v171;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v124)) > _g4_s0 ? (0u + sizeof(_g4_t_v124)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v125)) > _g4_s1 ? (4u + sizeof(_g4_t_v125)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v126)) > _g4_s2 ? (8u + sizeof(_g4_t_v126)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v127)) > _g4_s3 ? (12u + sizeof(_g4_t_v127)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v128)) > _g4_s4 ? (16u + sizeof(_g4_t_v128)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v129)) > _g4_s5 ? (20u + sizeof(_g4_t_v129)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v130)) > _g4_s6 ? (24u + sizeof(_g4_t_v130)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v131)) > _g4_s7 ? (24u + sizeof(_g4_t_v131)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v132)) > _g4_s8 ? (32u + sizeof(_g4_t_v132)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v133)) > _g4_s9 ? (36u + sizeof(_g4_t_v133)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v134)) > _g4_s10 ? (40u + sizeof(_g4_t_v134)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v135)) > _g4_s11 ? (40u + sizeof(_g4_t_v135)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v136)) > _g4_s12 ? (40u + sizeof(_g4_t_v136)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v137)) > _g4_s13 ? (44u + sizeof(_g4_t_v137)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v138)) > _g4_s14 ? (44u + sizeof(_g4_t_v138)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v139)) > _g4_s15 ? (44u + sizeof(_g4_t_v139)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v140)) > _g4_s16 ? (44u + sizeof(_g4_t_v140)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v141)) > _g4_s17 ? (48u + sizeof(_g4_t_v141)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v142)) > _g4_s18 ? (48u + sizeof(_g4_t_v142)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v143)) > _g4_s19 ? (48u + sizeof(_g4_t_v143)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v144)) > _g4_s20 ? (48u + sizeof(_g4_t_v144)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v145)) > _g4_s21 ? (48u + sizeof(_g4_t_v145)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v146)) > _g4_s22 ? (64u + sizeof(_g4_t_v146)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v147)) > _g4_s23 ? (68u + sizeof(_g4_t_v147)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v148)) > _g4_s24 ? (68u + sizeof(_g4_t_v148)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v149)) > _g4_s25 ? (72u + sizeof(_g4_t_v149)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v150)) > _g4_s26 ? (72u + sizeof(_g4_t_v150)) : _g4_s26,
    _g4_s28 = (76u + sizeof(_g4_t_v151)) > _g4_s27 ? (76u + sizeof(_g4_t_v151)) : _g4_s27,
    _g4_s29 = (80u + sizeof(_g4_t_v152)) > _g4_s28 ? (80u + sizeof(_g4_t_v152)) : _g4_s28,
    _g4_s30 = (81u + sizeof(_g4_t_v153)) > _g4_s29 ? (81u + sizeof(_g4_t_v153)) : _g4_s29,
    _g4_s31 = (82u + sizeof(_g4_t_v154)) > _g4_s30 ? (82u + sizeof(_g4_t_v154)) : _g4_s30,
    _g4_s32 = (96u + sizeof(_g4_t_v155)) > _g4_s31 ? (96u + sizeof(_g4_t_v155)) : _g4_s31,
    _g4_s33 = (100u + sizeof(_g4_t_v156)) > _g4_s32 ? (100u + sizeof(_g4_t_v156)) : _g4_s32,
    _g4_s34 = (104u + sizeof(_g4_t_v157)) > _g4_s33 ? (104u + sizeof(_g4_t_v157)) : _g4_s33,
    _g4_s35 = (108u + sizeof(_g4_t_v158)) > _g4_s34 ? (108u + sizeof(_g4_t_v158)) : _g4_s34,
    _g4_s36 = (112u + sizeof(_g4_t_v159)) > _g4_s35 ? (112u + sizeof(_g4_t_v159)) : _g4_s35,
    _g4_s37 = (116u + sizeof(_g4_t_v160)) > _g4_s36 ? (116u + sizeof(_g4_t_v160)) : _g4_s36,
    _g4_s38 = (120u + sizeof(_g4_t_v161)) > _g4_s37 ? (120u + sizeof(_g4_t_v161)) : _g4_s37,
    _g4_s39 = (124u + sizeof(_g4_t_v162)) > _g4_s38 ? (124u + sizeof(_g4_t_v162)) : _g4_s38,
    _g4_s40 = (128u + sizeof(_g4_t_v163)) > _g4_s39 ? (128u + sizeof(_g4_t_v163)) : _g4_s39,
    _g4_s41 = (132u + sizeof(_g4_t_v164)) > _g4_s40 ? (132u + sizeof(_g4_t_v164)) : _g4_s40,
    _g4_s42 = (136u + sizeof(_g4_t_v165)) > _g4_s41 ? (136u + sizeof(_g4_t_v165)) : _g4_s41,
    _g4_s43 = (140u + sizeof(_g4_t_v166)) > _g4_s42 ? (140u + sizeof(_g4_t_v166)) : _g4_s42,
    _g4_s44 = (144u + sizeof(_g4_t_v167)) > _g4_s43 ? (144u + sizeof(_g4_t_v167)) : _g4_s43,
    _g4_s45 = (160u + sizeof(_g4_t_v168)) > _g4_s44 ? (160u + sizeof(_g4_t_v168)) : _g4_s44,
    _g4_s46 = (164u + sizeof(_g4_t_v169)) > _g4_s45 ? (164u + sizeof(_g4_t_v169)) : _g4_s45,
    _g4_s47 = (168u + sizeof(_g4_t_v170)) > _g4_s46 ? (168u + sizeof(_g4_t_v170)) : _g4_s46,
    _g4_s48 = (184u + sizeof(_g4_t_v171)) > _g4_s47 ? (184u + sizeof(_g4_t_v171)) : _g4_s47
  };
  alignas(16) uint8_t _g4_sf[_g4_s48];
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 0u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 4u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 8u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 12u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 16u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 20u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 24u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 24u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 32u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 36u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 40u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 40u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 40u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 44u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 44u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 44u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 44u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 48u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 48u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 48u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 48u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 48u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 64u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 68u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 68u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 72u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 72u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 76u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 80u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 81u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 82u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 96u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 100u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 104u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 108u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 112u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 116u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 120u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 124u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 128u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 132u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 136u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 140u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 144u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 160u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 164u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 168u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 184u);

  v171 = &a1;
  v3 = a2;
  v4 = a1;
  result = (const int16_t *)*((uint8_t *)a2 + 33);
  v147 = result;
  if ( *((uint8_t *)a2 + 33) != 0 )
  {
    v130 = *((uint32_t **)a1 + 4);
    v141 = -1431655765 * ((*v130 - (int)(uintptr_t)(v130 + 4)) >> 4) - (uint32_t)(uintptr_t)(result);
    v6 = *((uint32_t *)a1 + 5);
g4_m128_raw(v7) = (unsigned int)v130[12 * v141 + 8];
    v8 = *(float *)&v130[12 * v141 + 9];
    v9 = (float)(*(float *)v6 *g4_m128_lane<float>(v7, 0)) + (float)(*(float *)(v6 + 4) * v8);
    v10 = *(float *)&v130[12 * v141 + 10];
    v11 = *((float **)a1 + 6);
    v12 = (float)(*(float *)(v6 + 16) *g4_m128_lane<float>(v7, 0)) + (float)(*(float *)(v6 + 20) * v8);
g4_m128_raw(v13) = *(unsigned int *)(v6 + 32);
g4_m128_lane<float>(v13, 0) = (float)(g4_m128_lane<float>(v13, 0) *g4_m128_lane<float>(v7, 0)) + (float)(*(float *)(v6 + 36) * v8);
    v137 = (float)((float)(v11[1] * v8) + (float)(*v11 *g4_m128_lane<float>(v7, 0))) + (float)(v11[2] * v10);
    v14 = v11[4] *g4_m128_lane<float>(v7, 0);
g4_m128_lane<float>(v7, 0) =g4_m128_lane<float>(v7, 0) * v11[8];
    v134 = (float)((float)(v11[5] * v8) + v14) + (float)(v11[6] * v10);
    v15 = v7;
g4_m128_lane<float>(v15, 0) = (float)(g4_m128_lane<float>(v7, 0) + (float)(v8 * v11[9])) + (float)(v11[10] * v10);
    v16 = -(float)(v9 + (float)(*(float *)(v6 + 8) * v10));
g4_m128_lane<float>(v13, 0) =g4_m128_lane<float>(v13, 0) + (float)(v10 * *(float *)(v6 + 40));
    v17 = -(float)(v12 + (float)(*(float *)(v6 + 24) * v10));
    v18 = _mm_xor_ps(v13, *(__m128 *)&dword_1C7C1B0);
    v19 = fabs(v17);
    v20 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_m128_from<__m128i>(_mm_and_ps(v18, g4_m128_u32(0x7FFFFFFFu)))));
    v21 = fabs(v134);
    *(float *)&result = COERCE_FLOAT(_mm_cvtsi128_si32(g4_m128_from<__m128i>(_mm_and_ps(v15, g4_m128_u32(0x7FFFFFFFu)))));
    if ( v19 >= fabs(v16) )
    {
      v128 = 32;
      v132 = 1;
    }
    else
    {
      v19 = fabs(v16);
      v128 = 16;
      v132 = 0;
    }
    if ( v20 >= v19 )
    {
      v19 = v20;
      v128 = 64;
      v132 = 2;
    }
    if ( v21 >= fabs(v137) )
    {
      v129 = 32;
      v146 = 1;
    }
    else
    {
      v21 = fabs(v137);
      v129 = 16;
      v146 = 0;
    }
    if ( *(float *)&result >= v21 )
    {
      v21 = *(float *)&result;
      v129 = 64;
      v146 = 2;
    }
    if ( v21 >= 0.98f && v19 >= 0.98f )
    {
      v22 = 0;
      v23 = 0;
      if ( a1[v132 + 48] < 0.0 )
        v23 = 15;
      v149 = v23;
      if ( a1[v146 + 52] < 0.0 )
        v22 = 15;
      v24 = v22;
      v25 = (v137 < 0.0) | (2 * (v134 < 0.0));
      if (g4_m128_lane<float>(v15, 0) < 0.0 )
      {
        v25 |= 4u;
        v26 = 8;
      }
      else
      {
        v26 = 8 * (g4_m128_lane<float>(v15, 0) < 0.0);
      }
      v138 = 16 * ((v26 | v25) & 7);
      v27 = v138 | 8;
      if ( v149 == 0 )
        v27 = v138;
      v139 = v27;
      v28 = (v16 < 0.0) | (2 * (v17 < 0.0));
      if (g4_m128_lane<float>(v18, 0) < 0.0 )
      {
        v28 |= 4u;
        v29 = 8;
      }
      else
      {
        v29 = 8 * (g4_m128_lane<float>(v18, 0) < 0.0);
      }
      v135 = 16 * ((v29 | v28) & 7);
      v30 = v135 | 8;
      if ( v24 == 0 )
        v30 = v135;
      v136 = v30;
      v31 = 1.0;
      v32 = 1;
      v33 = (int)(uintptr_t)(&v130[12 * v141 + 11]);
      do
      {
        ++v32;
        v33 += 48;
        v31 = fminf(v31, *(float *)(v33 - 48));
      }
      while ( (const int16_t *)v32 != (const int16_t *)((char *)v147 + 1) );
      v124 = v31;
      v131 = HIWORD(a3);
      v148 = (const int16_t *)(aP0_0 /* "P0`" */);
      do
      {
        v34 = *v148;
        if ( (*v148 & (uint16_t)v129) == 0 )
        {
          v154 = v131;
          v152 = v132;
          v142 = v139 ^ v34 | v139 & 0xF;
          v153 = v142;
          v35 = *((uint8_t *)v3 + 33);
          if ( *((uint8_t *)v3 + 33) == 0 )
            goto LABEL_46;
          v36 = (uint8_t *)((char *)v3 + 4 * *((uint8_t *)v3 + 33) - 4);
          if ( (uint8_t)v132 != *v36 || v142 != v36[1] )
          {
            if ( v35 - 2 < 0 )
              goto LABEL_46;
            v37 = (uint8_t *)((char *)v3 + 4 * v35 - 8);
            if ( (uint8_t)v132 != *v37 || v142 != v37[1] )
            {
              if ( v35 - 3 < 0
                || ((v38 = (uint8_t *)((char *)v3 + 4 * v35 - 12), (uint8_t)v132 != *v38) || v142 != v38[1])
                && (v35 - 4 < 0
                 || ((v39 = (uint8_t *)((char *)v3 + 4 * v35 - 16), (uint8_t)v132 != *v39) || v142 != v39[1])
                 && (v35 - 5 < 0
                  || ((v40 = (uint8_t *)((char *)v3 + 4 * v35 - 20), (uint8_t)v132 != *v40) || v142 != v40[1])
                  && (v35 - 6 < 0
                   || ((v41 = (uint8_t *)((char *)v3 + 4 * v35 - 24), (uint8_t)v132 != *v41) || v142 != v41[1])
                   && (v35 - 7 < 0
                    || ((v42 = (uint8_t *)((char *)v3 + 4 * v35 - 28), (uint8_t)v132 != *v42) || v142 != v42[1])
                    && ((v43 = v35 - 8) < 0 || (v44 = (uint8_t *)v3 + 4 * v43, (uint8_t)v132 != *v44) || v142 != v44[1]))))) )
              {
LABEL_46:
                v167 = 0;
                v170 = v132;
                v45 = 1.0;
                v46 = (v142 & 8) != 0 ? 8 : 0;
                v47 = (v142 & 0x70) >> 4;
                v127 = (v142 & 8) != 0 ? 4 : 0;
                v126 = (v142 & 8) != 0 ? 2 : 0;
                v125 = (v142 & 8) != 0;
                v168 = (v142 & 8) != 0 ? 0xF : 0;
                if ( (v47 & 1) != 0 )
                  v45 = -1.0;
                v48 = 1.0;
                if ( (v47 & 2) != 0 )
                  v48 = -1.0;
                v49 = 1.0;
                if ( (v47 & 4) != 0 )
                  v49 = -1.0;
                v50 = v45 * v4[28];
                v51 = v48 * v4[29];
                v52 = v4[9];
                v166 = 1.0 * v4[31];
                v53 = v49 * v4[30];
                v54 = v4[10];
                v55 = (float)(v52 * v50) + (float)(v4[13] * v51);
                v56 = v4[17] * v53;
                v57 = v4[15] * v51;
                v163 = v50;
                v58 = v55 + v56;
                v59 = v4[14] * v51;
                v164 = v51;
                v60 = v51 * v4[12];
                v165 = v53;
                v61 = v58 + v4[21];
                v62 = (float)((float)(v54 * v50) + v59) + (float)(v4[18] * v53);
                v63 = v4[11] * v50;
                v64 = v50 * v4[8];
                v160 = v61;
                v65 = v63 + v57;
                v66 = v4[19] * v53;
                v67 = v62 + v4[22];
                v68 = (float)(v64 + v60) + (float)(v53 * v4[16]);
                v161 = v67;
                v69 = v68 + v4[20];
                v70 = v4[36];
                v71 = (float)(v65 + v66) + v4[23];
                v159 = v69;
                v72 = v4[37] > fabs(v61);
                v162 = v71;
                v143 = (v70 > fabs(v69)) | (2 * v72);
                v73 = v4[38] > fabs(v67);
                v74 = 4 * v73 + 8;
                v75 = 4 * v73;
                if ( v4[39] > fabs(v71) )
                  v75 = v74;
                if ( ((v75 | v143) & 7) == 7 )
                {
                  if ( v125 )
                    v69 = -v69;
                  if ( v126 != 0 )
                    v61 = -v61;
                  if ( v127 != 0 )
                    v67 = -v67;
                  if ( v46 != 0 )
                    v71 = -v71;
                  v121 = v71 - v4[27];
                  v122 = v69 - v4[24];
                  v123 = v61 - v4[25];
                  v157 = v67 - v4[26];
                  v158 = v121;
                  v155 = v122;
                  v156 = v123;
                  v169 = *(&v155 + v132);
                  if ( v169 >= (float)(v124 - 0.00000011920929f) )
                    hkpBoxBoxCollisionDetection::addPoint((uint32_t *)(&v151), v4, v3, (int)(uintptr_t)(&v159), &v152);
                }
              }
            }
          }
        }
        ++v148;
      }
      while ( v148 != (const int16_t *)&unk_1D16E8A );
      v140 = v4;
      v76 = (uint8_t)(v146 + 4);
      v150 = (const int16_t *)(aP0_0 /* "P0`" */);
      result = (const int16_t *)(aP0_0 /* "P0`" */);
      do
      {
        v77 = *result;
        if ( ((uint16_t)v77 & (uint16_t)v128) == 0 )
        {
          v152 = v76;
          v154 = 0;
          v78 = v136 ^ v77 | v136 & 0xF;
          v79 = *((uint8_t *)v3 + 33);
          v153 = v78;
          if ( v79 == 0 )
            goto LABEL_74;
          v80 = (uint8_t *)((char *)v3 + 4 * v79 - 4);
          if ( (uint8_t)v76 != *v80 || v78 != v80[1] )
          {
            if ( v79 - 2 < 0 )
              goto LABEL_74;
            v81 = (uint8_t *)((char *)v3 + 4 * v79 - 8);
            if ( (uint8_t)v76 != *v81 || v78 != v81[1] )
            {
              if ( v79 - 3 < 0
                || ((v82 = (uint8_t *)((char *)v3 + 4 * v79 - 12), (uint8_t)v76 != *v82) || v78 != v82[1])
                && (v79 - 4 < 0
                 || ((v83 = (uint8_t *)((char *)v3 + 4 * v79 - 16), (uint8_t)v76 != *v83) || v78 != v83[1])
                 && (v79 - 5 < 0
                  || ((v84 = (uint8_t *)((char *)v3 + 4 * v79 - 20), (uint8_t)v76 != *v84) || v78 != v84[1])
                  && (v79 - 6 < 0
                   || ((v85 = (uint8_t *)((char *)v3 + 4 * v79 - 24), (uint8_t)v76 != *v85) || v78 != v85[1])
                   && (v79 - 7 < 0
                    || ((v86 = (uint8_t *)((char *)v3 + 4 * v79 - 28), (uint8_t)v76 != *v86) || v78 != v86[1])
                    && ((v87 = v79 - 8) < 0 || (v88 = (uint8_t *)v3 + 4 * v87, (uint8_t)v76 != *v88) || v78 != v88[1]))))) )
              {
LABEL_74:
                v170 = (uint8_t)v76;
                v167 = 0;
                v89 = 1.0;
                v90 = -((v78 & 8) == 0);
                v91 = (v78 & 0x70) >> 4;
                v168 = ~(uint8_t)v90 & 0xF;
                if ( (v91 & 1) != 0 )
                  v89 = -1.0;
                v92 = 1.0;
                if ( (v91 & 2) != 0 )
                  v92 = -1.0;
                v93 = 1.0;
                if ( (v91 & 4) != 0 )
                  v93 = -1.0;
                v94 = v92 * v140[25];
                v95 = 1.0 * v140[27];
                v159 = v89 * v140[24];
                v160 = v94;
                v96 = v159 - v140[20];
                v97 = v94 - v140[21];
                v98 = v93 * v140[26];
                v162 = v95;
                v99 = v140[8];
                v100 = v140[9] * v97;
                v161 = v98;
                v101 = v98 - v140[22];
                v102 = (float)((float)(v99 * v96) + v100) + (float)(v140[10] * v101);
                v103 = (float)(v140[12] * v96) + (float)(v140[13] * v97);
                v104 = v140[14] * v101;
                v105 = (float)(v96 * v140[16]) + (float)(v97 * v140[17]);
                v106 = v101 * v140[18];
                v163 = v102;
                v107 = v103 + v104;
                v108 = v140[40] > fabs(v102);
                v109 = v105 + v106;
                v110 = v140[42];
                v144 = 2 * (v140[41] > fabs(v107));
                v164 = v107;
                v145 = v108 | v144;
                v111 = v110 < fabs(v109);
                v112 = v110 == fabs(v109);
                v113 = v140[43];
                v114 = !v111 && !v112;
                v115 = 4 * v114 + 8;
                v116 = 4 * v114;
                v165 = v109;
                if ( v113 > fabs(v109) )
                  v116 = v115;
                v166 = v109;
                if ( ((v116 | v145) & 7) == 7 )
                {
                  if ( (v90 & 1) != 0 )
                    v102 = -v102;
                  if ( (v90 & 2) != 0 )
                    v107 = -v107;
                  v117 = v109;
                  if ( (v90 & 4) != 0 )
                    v117 = -v109;
                  if ( (v90 & 8) != 0 )
                    v109 = -v109;
                  v118 = v109 - v140[31];
                  v119 = v102 - v140[28];
                  v120 = v117 - v140[30];
                  v156 = v107 - v140[29];
                  v158 = v118;
                  v155 = v119;
                  v157 = v120;
                  v169 = *(&v155 + (uint8_t)v76 - 4);
                  if ( v169 >= (float)(v124 - 0.00000011920929f) )
                  {
                    v133 = v76;
                    hkpBoxBoxCollisionDetection::addPoint((uint32_t *)(&v151), v140, v3, (int)(uintptr_t)(&v159), &v152);
                    v76 = v133;
                  }
                }
              }
            }
          }
        }
        result = ++v150;
      }
      while ( &unk_1D16E8A != (void *)v150 );
      if ( *((uint8_t *)v3 + 32) <= 3u )
        *(float *)&result = COERCE_FLOAT(
                              hkpBoxBoxCollisionDetection::checkCompleteness(
                                (hkpBoxBoxCollisionDetection::Self *)v140,
                                v3,
                                v128,
                                v129));
      else
        *((uint8_t *)v3 + 34) = 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxCollisionDetection::checkIntersection  (binary VA: 0x16fa850)
// Original: hkpBoxBoxCollisionDetection::checkIntersection
// ----------------------------------------------------------------------------
hkpBoxBoxCollisionDetection::Self * hkpBoxBoxCollisionDetection::checkIntersection(hkpBoxBoxCollisionDetection::Self *self, const hkVector4f::Self *a2, float *a3)
{
  float v3; // xmm1_4
  __m128 v4;
  int v5;
  __m128 v6;
  g4_int128_t v8;
  __m128 v9;
  __m128 v10;
  __m128 v11;
  __m128 v12;
  int v13;
  int v14;
  g4_int128_t v15;
  float v16; // xmm3_4
  __m128i v17;
  __m128i v18;
  unsigned int v19;
  __m128i v20;
  __m128i v21;
  float v22;
  int v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm1_4
  int v26; // xmm1_4
  float v27; // xmm1_4
  int v28; // xmm1_4
  float v29; // xmm2_4
  float v30; // xmm1_4
  int v31; // xmm1_4
  float v32; // xmm4_4
  float v33; // xmm2_4
  int v34;
  float v35; // xmm0_4
  float v36; // xmm2_4
  float v37; // xmm6_4
  float v38; // xmm3_4
  int v39;
  int v40;
  char v41;
  float v42; // xmm3_4
  __m128i v43;
  __m128i v44;
  int v45;
  float v46; // xmm1_4
  float v47; // xmm4_4
  __m128i v48;
  __m128i v49;
  float v50;
  __m128i v51;
  float v52;
  float v53; // xmm1_4
  float v54; // xmm1_4
  float v55; // xmm1_4
  float v56; // xmm4_4
  int v57;
  float v58; // xmm1_4
  float v59; // xmm1_4
  float v60; // xmm1_4
  float v61; // xmm3_4
  float v62; // xmm1_4
  float v63; // xmm5_4
  char v65;
  __m128i v66;
  __m128i v67;
  float v68;
  __m128i v69;
  unsigned int v70;
  __m128i v71;
  float v72; // xmm5_4
  __m128i v73;
  __m128i v74;
  float v75; // xmm2_4
  float v76; // xmm1_4
  float v77; // xmm1_4
  float v78; // xmm2_4
  float v79; // xmm1_4
  float v80; // xmm2_4
  float v81; // xmm7_4
  float v82; // xmm2_4
  float v83; // xmm5_4
  float v84; // xmm1_4
  int v85;
  bool v86;
  float v87; // xmm1_4
  float v88; // xmm3_4
  bool v89;
  int v90;
  int v91;
  int v92;
  float v93;
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
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
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
  int v132;
  float v133;
  float v134;
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
  float v150;
  float v151;
  uint64_t v152; // 0:edx.4,4:ecx.4

  v107 = *((float *)a2 + 8);
  v115 = *((float *)a2 + 9);
  v118 = *((float *)a2 + 10);
  *(float *)&v132 = fabs(v118);
  v106 = *((float *)a2 + 12);
  v114 = *((float *)a2 + 13);
  v117 = *((float *)a2 + 14);
  v105 = *((float *)a2 + 16);
  v113 = *((float *)a2 + 17);
  v116 = *((float *)a2 + 18);
  v144 = *((float *)a2 + 28);
  v3 = *((float *)a2 + 29);
  v146 = *((float *)a2 + 30);
  v109 = fabs(v106) * v3;
  v124 = fabs(v114) * v3;
  v108 = *((float *)a2 + 48);
  v112 = *((float *)a2 + 49);
  v133 = *((float *)a2 + 24);
  v149 = v3;
  v120 = *((float *)a2 + 50);
  v4 = _mm_and_ps(g4_m128_from<__m128>(LODWORD(v120)), g4_m128_u32(0x7FFFFFFFu));
  v123 = *((float *)a2 + 25);
  v6 = _mm_and_ps(g4_m128_u32(*((unsigned int *)a2 + 51)), g4_m128_u32(0x7FFFFFFFu));
  v140 = fabs(v108) - (float)((float)((float)((float)(fabs(v107) * v144) + v109) + (float)(fabs(v105) * v146)) + v133);
  v127 = *((float *)a2 + 26);
  v134 = fabs(v112) - (float)((float)((float)((float)(fabs(v115) * v144) + v124) + (float)(fabs(v113) * v146)) + v123);
g4_m128_lane<float>(v4, 0) =g4_m128_lane<float>(v4, 0)
                 - (float)((float)((float)((float)(fabs(v118) * v144) + (float)(fabs(v117) * v149))
                                 + (float)(fabs(v116) * v146))
                         + v127);
  v5 = 4 * (g4_m128_lane<float>(v4, 0) > a3[2]);
g4_m128_lane<float>(v6, 0) =g4_m128_lane<float>(v6, 0)
                 - (float)((float)((float)((float)(fabs(*((float *)a2 + 11)) * v144)
                                         + (float)(fabs(*((float *)a2 + 15)) * *((float *)a2 + 29)))
                                 + (float)(fabs(*((float *)a2 + 19)) * v146))
                         + *((float *)a2 + 27));
  if (g4_m128_lane<float>(v6, 0) > a3[3] )
    v5 = 4 * (g4_m128_lane<float>(v4, 0) > a3[2]) + 8;
  if ( ((v140 > *a3) | (2 * (v134 > a3[1])) | v5) != 0 )
    goto LABEL_4;
  *(uint64_t *)&v8 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v140)), g4_m128_from<__m128>(LODWORD(v134))), 0);
  *((uint64_t *)&v8 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v4, v6), 0);
  v104 = *((float *)a2 + 31);
  v9 = _mm_and_ps(g4_m128_u32(*((unsigned int *)a2 + 52)), g4_m128_u32(0x7FFFFFFFu));
  *((g4_int128_t *)a2 + 14) = v8;
  v10 = _mm_and_ps(g4_m128_u32(*((unsigned int *)a2 + 53)), g4_m128_u32(0x7FFFFFFFu));
  v12 = _mm_and_ps(g4_m128_u32(*((unsigned int *)a2 + 55)), g4_m128_u32(0x7FFFFFFFu));
g4_m128_lane<float>(v9, 0) =g4_m128_lane<float>(v9, 0)
                 - (float)((float)((float)((float)(fabs(v115) * v123) + (float)(fabs(v107) * v133))
                                 + (float)(fabs(v118) * v127))
                         + v144);
  v11 = _mm_and_ps(g4_m128_u32(*((unsigned int *)a2 + 54)), g4_m128_u32(0x7FFFFFFFu));
g4_m128_lane<float>(v10, 0) =g4_m128_lane<float>(v10, 0)
                  - (float)((float)((float)((float)(fabs(v106) * v133) + (float)(fabs(v114) * v123))
                                  + (float)(fabs(v117) * v127))
                          + v149);
g4_m128_lane<float>(v11, 0) =g4_m128_lane<float>(v11, 0)
                  - (float)((float)((float)((float)(fabs(v105) * v133) + (float)(fabs(v113) * v123))
                                  + (float)(fabs(v116) * v127))
                          + v146);
g4_m128_lane<float>(v12, 0) =g4_m128_lane<float>(v12, 0)
                  - (float)((float)((float)((float)(fabs(v105) * v133) + (float)(fabs(v113) * v123))
                                  + (float)(fabs(v116) * v127))
                          + v104);
  v13 = 4;
  if (g4_m128_lane<float>(v11, 0) <= a3[2] )
    v13 = 0;
  v14 = 4 * (g4_m128_lane<float>(v11, 0) > a3[2]) + 8;
  if (g4_m128_lane<float>(v12, 0) <= a3[3] )
    v14 = v13;
  if ( (v14 | (g4_m128_lane<float>(v9, 0) > *a3) | (2 * (g4_m128_lane<float>(v10, 0) > a3[1]))) != 0 )
    goto LABEL_4;
  *(uint64_t *)&v15 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v9, v10), 0);
  *((uint64_t *)&v15 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v11, v12), 0);
  v94 = v113 * v113;
  *((g4_int128_t *)a2 + 15) = v15;
  v100 = v118 * v118;
  v99 = v116 * v116;
  v16 = fabs((float)(v113 * v120) - (float)(v116 * v112));
  v96 = (float)((float)((float)(fabs(v116) * v123) + (float)(fabs(v113) * v127)) + v109) + v109;
g4_m128_raw(v17) = COERCE_UNSIGNED_INT(v115 * v115);
  *(float *)g4_m128_ptr<int32_t>(v17) = (float)(v115 * v115) + (float)(v118 * v118);
g4_m128_raw(v18) = COERCE_UNSIGNED_INT(v113 * v113);
  *(float *)g4_m128_ptr<int32_t>(v18) = (float)(v113 * v113) + (float)(v116 * v116);
  v19 = _mm_cvtsi128_si32(v17);
g4_m128_raw(v20) = COERCE_UNSIGNED_INT(v114 * v114);
  v21 = _mm_cvtsi32_si128(v19);
  *(float *)g4_m128_ptr<int32_t>(v21) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v21), 1.4210855e-14f);
  *(float *)g4_m128_ptr<int32_t>(v20) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v20) + (float)(v117 * v117), 1.4210855e-14f);
  v22 = COERCE_FLOAT(_mm_cvtsi128_si32(v21));
  *(float *)&v15 = v22 * 0.5;
  v110 = v16
       - (float)((float)((float)((float)(fabs(v116) * v123) + (float)(fabs(v113) * v127)) + (float)(fabs(v106) * v144))
               + (float)(fabs(v107) * v149));
  v23 = ((LODWORD(v22) + 2139095040) >> 31) & (1597463174 - (SLODWORD(v22) >> 1));
  v101 = fmaxf(COERCE_FLOAT(_mm_cvtsi128_si32(v18)), 1.4210855e-14f);
  v24 = v16 - v96;
  v25 = (float)(1.5
              * (float)((float)(1.5 * *(float *)&v23)
                      - (float)((float)(*(float *)&v15 * *(float *)&v23) * (float)(*(float *)&v23 * *(float *)&v23))))
      - (float)((float)(*(float *)&v15
                      * (float)((float)(1.5 * *(float *)&v23)
                              - (float)((float)(*(float *)&v15 * *(float *)&v23)
                                      * (float)(*(float *)&v23 * *(float *)&v23))))
              * (float)((float)((float)(1.5 * *(float *)&v23)
                              - (float)((float)(*(float *)&v15 * *(float *)&v23)
                                      * (float)(*(float *)&v23 * *(float *)&v23)))
                      * (float)((float)(1.5 * *(float *)&v23)
                              - (float)((float)(*(float *)&v15 * *(float *)&v23)
                                      * (float)(*(float *)&v23 * *(float *)&v23)))));
  *(float *)g4_m128_ptr<int32_t>(v18) = 1.5 * v25;
  *(float *)&v15 = (float)((float)(v22 * 0.5) * v25) * (float)(v25 * v25);
  v26 = ((_mm_cvtsi128_si32(v20) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v20) >> 1));
  *(float *)g4_m128_ptr<int32_t>(v18) = *(float *)g4_m128_ptr<int32_t>(v18) - *(float *)&v15;
  *(float *)&v15 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v20);
  v97 = *(float *)g4_m128_ptr<int32_t>(v18);
  v27 = (float)(1.5
              * (float)((float)(1.5 * *(float *)&v26)
                      - (float)((float)(*(float *)&v15 * *(float *)&v26) * (float)(*(float *)&v26 * *(float *)&v26))))
      - (float)((float)(*(float *)&v15
                      * (float)((float)(1.5 * *(float *)&v26)
                              - (float)((float)(*(float *)&v15 * *(float *)&v26)
                                      * (float)(*(float *)&v26 * *(float *)&v26))))
              * (float)((float)((float)(1.5 * *(float *)&v26)
                              - (float)((float)(*(float *)&v15 * *(float *)&v26)
                                      * (float)(*(float *)&v26 * *(float *)&v26)))
                      * (float)((float)(1.5 * *(float *)&v26)
                              - (float)((float)(*(float *)&v15 * *(float *)&v26)
                                      * (float)(*(float *)&v26 * *(float *)&v26)))));
  *(float *)g4_m128_ptr<int32_t>(v20) = 1.5 * v27;
  *(float *)&v15 = (float)(*(float *)&v15 * v27) * (float)(v27 * v27);
  v28 = ((LODWORD(v101) + 2139095040) >> 31) & (1597463174 - (SLODWORD(v101) >> 1));
  v95 = *(float *)g4_m128_ptr<int32_t>(v20) - *(float *)&v15;
  v29 = (float)(1.5 * *(float *)&v28)
      - (float)((float)((float)(0.5 * v101) * *(float *)&v28) * (float)(*(float *)&v28 * *(float *)&v28));
  v30 = (float)(1.5 * v29) - (float)((float)((float)(0.5 * v101) * v29) * (float)(v29 * v29));
  *(float *)&v15 = 1.5 * v30;
  *(float *)g4_m128_ptr<int32_t>(v20) = (float)((float)(0.5 * v101) * v30) * (float)(v30 * v30);
  v31 = ((LODWORD(v101) + 2139095040) >> 31) & (1597463174 - (SLODWORD(v101) >> 1));
  v32 = *(float *)&v15 - *(float *)g4_m128_ptr<int32_t>(v20);
  *(float *)g4_m128_ptr<int32_t>(v20) = 0.5 * v101;
  v33 = (float)(1.5 * *(float *)&v31)
      - (float)((float)((float)(0.5 * v101) * *(float *)&v31) * (float)(*(float *)&v31 * *(float *)&v31));
  v34 = 4;
  v35 = (float)(fabs((float)(v115 * v120) - (float)(v118 * v112))
              - (float)((float)((float)((float)(fabs(v118) * v123) + (float)(fabs(v115) * v127))
                              + (float)(v149 * fabs(v105)))
                      + (float)(fabs(v106) * v146)))
      * *(float *)g4_m128_ptr<int32_t>(v18);
  v141 = v35;
  v135 = (float)(fabs((float)(v114 * v120) - (float)(v117 * v112))
               - (float)((float)((float)((float)(fabs(v117) * v123) + (float)(fabs(v114) * v127))
                               + (float)(fabs(v105) * v144))
                       + (float)(v146 * fabs(v107))))
       * v95;
  v36 = (float)(1.5 * (float)((float)(1.5 * v33) - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v20) * v33) * (float)(v33 * v33))))
      - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v20)
                      * (float)((float)(1.5 * v33) - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v20) * v33) * (float)(v33 * v33))))
              * (float)((float)((float)(1.5 * v33) - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v20) * v33) * (float)(v33 * v33)))
                      * (float)((float)(1.5 * v33) - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v20) * v33) * (float)(v33 * v33)))));
  v103 = *((float *)a2 + 32);
  v37 = *((float *)a2 + 34);
  v38 = v24 * v36;
  v102 = *((float *)a2 + 33);
  v39 = 0;
  if ( (float)(v110 * v32) <= v37 )
    v34 = 0;
  LOBYTE(v39) = (float)(v110 * v32) > v37;
  v40 = 4 * v39 + 8;
  v111 = v110 * v32;
  if ( v38 <= *((float *)a2 + 35) )
    v40 = v34;
  v122 = *((float *)a2 + 35);
  if ( __PAIR64__((v35 > v103) | (2 * (unsigned int)(v135 > v102)), v40) != 0 )
    goto LABEL_4;
  v41 = 4 * (v32 > 999.99994f);
  if ( v36 > 999.99994f )
    v41 = 4 * (v32 > 999.99994f) + 8;
  if ( (v41 & 1 | (v97 > 999.99994f)) != 0 )
    v141 = -99999998430674944.0;
  if ( (v41 & 2 | (uint8_t)(2 * (v95 > 999.99994f))) != 0 )
    v135 = -99999998430674944.0;
  if ( (v41 & 4) != 0 )
    v111 = -99999998430674944.0;
  if ( (v41 & 8) != 0 )
    v38 = -99999998430674944.0;
  *((float *)a2 + 65) = v135;
  v98 = v107 * v107;
  *((float *)a2 + 66) = v111;
  v93 = v105 * v105;
  *((float *)a2 + 64) = v141;
  *((float *)a2 + 67) = v38;
  v42 = (float)(v118 * v108) - (float)(v107 * v120);
g4_m128_raw(v43) = LODWORD(v116);
  *(float *)g4_m128_ptr<int32_t>(v43) = v116 * v108;
  v44 = v43;
  *(float *)g4_m128_ptr<int32_t>(v44) = (float)(v116 * v108) - (float)(v120 * v105);
  v45 = _mm_cvtsi128_si32(v44) & 0x7FFFFFFF;
  v46 = (float)((float)((float)(fabs(v118) * v133) + (float)(fabs(v107) * v127)) + (float)(v149 * fabs(v113)))
      + (float)(fabs(v114) * v146);
  v47 = fabs((float)(v117 * v108) - (float)(v106 * v120))
      - (float)((float)((float)((float)(v127 * fabs(v106)) + (float)(fabs(v117) * v133)) + (float)(fabs(v113) * v144))
              + (float)(v146 * fabs(v115)));
  *(float *)g4_m128_ptr<int32_t>(v44) = (float)((float)((float)(fabs(v116) * v133) + (float)(fabs(v105) * v127))
                                  + (float)(fabs(v114) * v144))
                          + (float)(fabs(v115) * v149);
g4_m128_raw(v48) = LODWORD(v100);
  *(float *)g4_m128_ptr<int32_t>(v48) = v100 + (float)(v107 * v107);
g4_m128_raw(v49) = LODWORD(v99);
  *(float *)g4_m128_ptr<int32_t>(v49) = v99 + (float)(v105 * v105);
  v50 = COERCE_FLOAT(_mm_cvtsi128_si32(v49));
  v51 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v48));
  *(float *)g4_m128_ptr<int32_t>(v51) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v51), 1.4210855e-14f);
  v52 = COERCE_FLOAT(_mm_cvtsi128_si32(v51));
  *(float *)g4_m128_ptr<int32_t>(v51) = *(float *)&v45
                          - (float)((float)((float)((float)(fabs(v116) * v133) + (float)(fabs(v105) * v127)) + v124)
                                  + v124);
  v128 = fmaxf((float)(v117 * v117) + (float)(v106 * v106), 1.4210855e-14f);
  v125 = fmaxf(v50, 1.4210855e-14f);
  v121 = v125;
  v142 = fabs(v42) - v46;
  v136 = *(float *)&v45 - *(float *)g4_m128_ptr<int32_t>(v44);
g4_m128_lane<int32_t>(v48, 0) = ((LODWORD(v52) + 2139095040) >> 31) & (1597463174 - (SLODWORD(v52) >> 1));
  v53 = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v48))
      - (float)((float)((float)(v52 * 0.5) * *(float *)g4_m128_ptr<int32_t>(v48))
              * (float)(*(float *)g4_m128_ptr<int32_t>(v48) * *(float *)g4_m128_ptr<int32_t>(v48)));
  *(float *)g4_m128_ptr<int32_t>(v48) = (float)(1.5 * v53) - (float)((float)((float)(v52 * 0.5) * v53) * (float)(v53 * v53));
  v54 = 1.5 * *(float *)g4_m128_ptr<int32_t>(v48);
  *(float *)g4_m128_ptr<int32_t>(v44) = (float)((float)(v52 * 0.5) * *(float *)g4_m128_ptr<int32_t>(v48))
                          * (float)(*(float *)g4_m128_ptr<int32_t>(v48) * *(float *)g4_m128_ptr<int32_t>(v48));
g4_m128_lane<int32_t>(v48, 0) = ((LODWORD(v128) + 2139095040) >> 31) & (1597463174 - (SLODWORD(v128) >> 1));
  v55 = v54 - *(float *)g4_m128_ptr<int32_t>(v44);
  *(float *)g4_m128_ptr<int32_t>(v44) = 0.5 * v128;
  v119 = v55;
  *(float *)g4_m128_ptr<int32_t>(v48) = (float)(1.5
                                  * (float)((float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v48))
                                          - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v44) * *(float *)g4_m128_ptr<int32_t>(v48))
                                                  * (float)(*(float *)g4_m128_ptr<int32_t>(v48) * *(float *)g4_m128_ptr<int32_t>(v48)))))
                          - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v44)
                                          * (float)((float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v48))
                                                  - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v44) * *(float *)g4_m128_ptr<int32_t>(v48))
                                                          * (float)(*(float *)g4_m128_ptr<int32_t>(v48) * *(float *)g4_m128_ptr<int32_t>(v48)))))
                                  * (float)((float)((float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v48))
                                                  - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v44) * *(float *)g4_m128_ptr<int32_t>(v48))
                                                          * (float)(*(float *)g4_m128_ptr<int32_t>(v48) * *(float *)g4_m128_ptr<int32_t>(v48))))
                                          * (float)((float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v48))
                                                  - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v44) * *(float *)g4_m128_ptr<int32_t>(v48))
                                                          * (float)(*(float *)g4_m128_ptr<int32_t>(v48) * *(float *)g4_m128_ptr<int32_t>(v48))))));
  v129 = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v48))
       - (float)((float)((float)(0.5 * v128) * *(float *)g4_m128_ptr<int32_t>(v48))
               * (float)(*(float *)g4_m128_ptr<int32_t>(v48) * *(float *)g4_m128_ptr<int32_t>(v48)));
g4_m128_lane<int32_t>(v48, 0) = ((LODWORD(v125) + 2139095040) >> 31) & (1597463174 - (SLODWORD(v125) >> 1));
  v56 = v47 * v129;
  v57 = 4;
  v58 = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v48))
      - (float)((float)((float)(0.5 * v125) * *(float *)g4_m128_ptr<int32_t>(v48))
              * (float)(*(float *)g4_m128_ptr<int32_t>(v48) * *(float *)g4_m128_ptr<int32_t>(v48)));
  *(float *)g4_m128_ptr<int32_t>(v48) = (float)(1.5 * v58) - (float)((float)((float)(0.5 * v125) * v58) * (float)(v58 * v58));
  v59 = 1.5 * *(float *)g4_m128_ptr<int32_t>(v48);
  *(float *)g4_m128_ptr<int32_t>(v44) = (float)((float)(0.5 * v125) * *(float *)g4_m128_ptr<int32_t>(v48))
                          * (float)(*(float *)g4_m128_ptr<int32_t>(v48) * *(float *)g4_m128_ptr<int32_t>(v48));
g4_m128_lane<int32_t>(v48, 0) = ((LODWORD(v121) + 2139095040) >> 31) & (1597463174 - (SLODWORD(v121) >> 1));
  v126 = v59 - *(float *)g4_m128_ptr<int32_t>(v44);
  v60 = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v48))
      - (float)((float)((float)(0.5 * v121) * *(float *)g4_m128_ptr<int32_t>(v48))
              * (float)(*(float *)g4_m128_ptr<int32_t>(v48) * *(float *)g4_m128_ptr<int32_t>(v48)));
  *(float *)g4_m128_ptr<int32_t>(v48) = (float)(1.5 * v60) - (float)((float)((float)(0.5 * v121) * v60) * (float)(v60 * v60));
  v61 = v136 * v126;
  v137 = LODWORD(v61);
  v62 = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v48))
      - (float)((float)((float)(0.5 * v121) * *(float *)g4_m128_ptr<int32_t>(v48))
              * (float)(*(float *)g4_m128_ptr<int32_t>(v48) * *(float *)g4_m128_ptr<int32_t>(v48)));
  v63 = *(float *)g4_m128_ptr<int32_t>(v51) * v62;
  LODWORD(v152) = (float)(v142 * v119) > v103;
  v143 = v142 * v119;
  HIDWORD(v152) = v152 | (2 * (v56 > v102));
  if ( v61 <= v37 )
    v57 = 0;
  LODWORD(v152) = 4 * (v61 > v37) + 8;
  if ( v63 <= v122 )
    LODWORD(v152) = v57;
  if ( v152 != 0 )
    goto LABEL_4;
  v65 = 4 * (v126 > 999.99994f);
  if ( v62 > 999.99994f )
    v65 = 4 * (v126 > 999.99994f) + 8;
  if ( (v65 & 1 | (v119 > 999.99994f)) != 0 )
    v143 = -99999998430674944.0;
  if ( (v65 & 2 | (uint8_t)(2 * (v129 > 999.99994f))) != 0 )
    v56 = -99999998430674944.0;
  if ( (v65 & 4) != 0 )
    v137 = -609115460;
  if ( (v65 & 8) != 0 )
    v63 = -99999998430674944.0;
  *((float *)a2 + 69) = v56;
  *((uint32_t *)a2 + 70) = v137;
  *((float *)a2 + 71) = v63;
  *((float *)a2 + 68) = v143;
g4_m128_raw(v66) = LODWORD(v105);
  *(float *)g4_m128_ptr<int32_t>(v66) = v105 * v112;
  v67 = v66;
  *(float *)g4_m128_ptr<int32_t>(v67) = (float)(v105 * v112) - (float)(v113 * v108);
  v68 = COERCE_FLOAT(_mm_cvtsi128_si32(v67));
g4_m128_raw(v69) = LODWORD(v93);
  *(float *)g4_m128_ptr<int32_t>(v69) = v93 + v94;
  v138 = fabs((float)(v107 * v112) - (float)(v115 * v108))
       - (float)((float)((float)((float)(fabs(v115) * v133) + (float)(fabs(v107) * v123)) + (float)(v149 * fabs(v116)))
               + (float)(fabs(v117) * v146));
  v70 = _mm_cvtsi128_si32(v69);
  *(float *)g4_m128_ptr<int32_t>(v69) = fmaxf(v93 + v94, 1.4210855e-14f);
g4_m128_raw(v71) = LODWORD(v98);
  v130 = fabs((float)(v106 * v112) - (float)(v114 * v108))
       - (float)((float)((float)((float)(fabs(v106) * v123) + (float)(fabs(v114) * v133))
                       + (float)(v146 * *(float *)&v132))
               + (float)(fabs(v116) * v144));
  v72 = fabs(v68)
      - (float)((float)((float)((float)(fabs(v113) * v133) + (float)(fabs(v105) * v123)) + (float)(fabs(v117) * v144))
              + (float)(v149 * *(float *)&v132));
  *(float *)g4_m128_ptr<int32_t>(v71) = fmaxf(v98 + (float)(v115 * v115), 1.4210855e-14f);
  v150 = fabs(v68)
       - (float)((float)((float)((float)(fabs(v113) * v133) + (float)(fabs(v105) * v123)) + (float)(v104 * fabs(v116)))
               + (float)(v104 * fabs(v116)));
  v147 = fmaxf((float)(v106 * v106) + (float)(v114 * v114), 1.4210855e-14f);
  v73 = v69;
  v74 = _mm_cvtsi32_si128(v70);
  v75 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v71);
g4_m128_lane<int32_t>(v71, 0) = ((_mm_cvtsi128_si32(v71) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v71) >> 1));
  *(float *)g4_m128_ptr<int32_t>(v74) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v74), 1.4210855e-14f);
  v76 = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v71))
      - (float)((float)(v75 * *(float *)g4_m128_ptr<int32_t>(v71)) * (float)(*(float *)g4_m128_ptr<int32_t>(v71) * *(float *)g4_m128_ptr<int32_t>(v71)));
g4_m128_lane<int32_t>(v71, 0) = ((LODWORD(v147) + 2139095040) >> 31) & (1597463174 - (SLODWORD(v147) >> 1));
  v145 = (float)(1.5 * (float)((float)(1.5 * v76) - (float)((float)(v75 * v76) * (float)(v76 * v76))))
       - (float)((float)(v75 * (float)((float)(1.5 * v76) - (float)((float)(v75 * v76) * (float)(v76 * v76))))
               * (float)((float)((float)(1.5 * v76) - (float)((float)(v75 * v76) * (float)(v76 * v76)))
                       * (float)((float)(1.5 * v76) - (float)((float)(v75 * v76) * (float)(v76 * v76)))));
  v77 = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v71))
      - (float)((float)((float)(0.5 * v147) * *(float *)g4_m128_ptr<int32_t>(v71))
              * (float)(*(float *)g4_m128_ptr<int32_t>(v71) * *(float *)g4_m128_ptr<int32_t>(v71)));
  v148 = (float)(1.5 * (float)((float)(1.5 * v77) - (float)((float)((float)(0.5 * v147) * v77) * (float)(v77 * v77))))
       - (float)((float)((float)(0.5 * v147)
                       * (float)((float)(1.5 * v77) - (float)((float)((float)(0.5 * v147) * v77) * (float)(v77 * v77))))
               * (float)((float)((float)(1.5 * v77) - (float)((float)((float)(0.5 * v147) * v77) * (float)(v77 * v77)))
                       * (float)((float)(1.5 * v77) - (float)((float)((float)(0.5 * v147) * v77) * (float)(v77 * v77)))));
g4_m128_lane<int32_t>(v71, 0) = ((_mm_cvtsi128_si32(v73) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v73) >> 1));
  v78 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v73);
  v79 = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v71))
      - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v73)) * *(float *)g4_m128_ptr<int32_t>(v71))
              * (float)(*(float *)g4_m128_ptr<int32_t>(v71) * *(float *)g4_m128_ptr<int32_t>(v71)));
  *(float *)g4_m128_ptr<int32_t>(v71) = (float)(1.5 * v79)
                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v73)) * v79) * (float)(v79 * v79));
  *(float *)g4_m128_ptr<int32_t>(v73) = 1.5 * *(float *)g4_m128_ptr<int32_t>(v71);
  v80 = (float)(v78 * *(float *)g4_m128_ptr<int32_t>(v71)) * (float)(*(float *)g4_m128_ptr<int32_t>(v71) * *(float *)g4_m128_ptr<int32_t>(v71));
g4_m128_lane<int32_t>(v71, 0) = ((_mm_cvtsi128_si32(v74) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v74) >> 1));
  v81 = *(float *)g4_m128_ptr<int32_t>(v73) - v80;
  v82 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v74);
  v83 = v72 * v81;
  v84 = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v71))
      - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v74)) * *(float *)g4_m128_ptr<int32_t>(v71))
              * (float)(*(float *)g4_m128_ptr<int32_t>(v71) * *(float *)g4_m128_ptr<int32_t>(v71)));
  v85 = 0;
  v86 = (float)(v138 * v145) > v103;
  v139 = v138 * v145;
  v87 = (float)(1.5 * (float)((float)(1.5 * v84) - (float)((float)(v82 * v84) * (float)(v84 * v84))))
      - (float)((float)(v82 * (float)((float)(1.5 * v84) - (float)((float)(v82 * v84) * (float)(v84 * v84))))
              * (float)((float)((float)(1.5 * v84) - (float)((float)(v82 * v84) * (float)(v84 * v84)))
                      * (float)((float)(1.5 * v84) - (float)((float)(v82 * v84) * (float)(v84 * v84)))));
  v88 = v150 * v87;
  v89 = (float)(v130 * v148) > v102;
  v131 = v130 * v148;
  v90 = v86 | (2 * v89);
  if ( v83 > v37 )
    v85 = 4;
  v151 = v150 * v87;
  v91 = 4 * (v83 > v37) + 8;
  if ( v88 <= v122 )
    v91 = v85;
  v92 = v91 | v90;
  if ( v92 != 0 )
  {
LABEL_4:
    *(uint32_t *)self = 1;
    return self;
  }
  else
  {
    if ( v81 > 999.99994f )
      LOBYTE(v92) = 4;
    if ( v87 > 999.99994f )
      LOBYTE(v92) = 4 * (v81 > 999.99994f) + 8;
    if ( (v92 & 1 | (v145 > 999.99994f)) != 0 )
      v139 = -99999998430674944.0;
    if ( (v92 & 2 | (uint8_t)(2 * (v148 > 999.99994f))) != 0 )
      v131 = -99999998430674944.0;
    if ( (v92 & 4) != 0 )
      v83 = -99999998430674944.0;
    if ( (v92 & 8) != 0 )
      v151 = -99999998430674944.0;
    *((float *)a2 + 72) = v139;
    *((float *)a2 + 73) = v131;
    *((float *)a2 + 74) = v83;
    *((float *)a2 + 75) = v151;
    *(uint32_t *)self = 0;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxCollisionDetection::isValidEdgeEdge  (binary VA: 0x16fbfc0)
// Original: hkpBoxBoxCollisionDetection::isValidEdgeEdge
// ----------------------------------------------------------------------------
bool hkpBoxBoxCollisionDetection::isValidEdgeEdge(float *a1, int a2)
{
  int v2;
  int v3;
  float v4;
  float v5; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm3_4
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm4_4
  int v12;
  int v13;
  float v14; // xmm2_4
  float v15; // xmm5_4
  float *v16;
  float v17; // xmm3_4
  float v18; // xmm7_4
  float v19; // xmm4_4
  float v20; // xmm6_4
  float v21; // xmm0_4
  float v22; // xmm3_4
  float v23; // xmm0_4
  float v24; // xmm6_4
  float v25; // xmm3_4
  float v26; // xmm4_4
  __m128 v27;
  float v28; // xmm0_4
  float v29; // xmm4_4
  float v30; // xmm7_4
  __m128 v31;
  __m128 v32;
  float v33; // xmm2_4
  bool result;
  int v35;
  float v36; // xmm2_4
  float v37; // xmm7_4
  float v38; // xmm1_4
  float v39; // xmm2_4
  float v40; // xmm0_4
  __m128i v41;
  float v42; // xmm7_4
  __m128i v43;
  int v44;
  float v45; // xmm0_4
  float v46; // xmm1_4
  float v47; // xmm2_4
  float v48; // xmm0_4
  __m128i v49;
  float v50; // xmm2_4
  int v51;
  float v52; // xmm5_4
  float v53; // xmm1_4
  float v54; // xmm2_4
  float v55; // xmm7_4
  int32_t v56; // xmm5_4
  float v57; // xmm4_4
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
  __m128 v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80[4];
  float v81[4];
  float v82;
  float v83;
  float v84;

  v2 = (*(uint32_t *)(a2 + 56) & 0x70) >> 4;
  v3 = *(uint32_t *)(a2 + 56) & 0xF;
  if ( (v2 & 1) != 0 )
  {
g4_m128_raw(v70) = 0x80000000;
    v68 = -1.0;
    v4 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_to_m128i(0x3F800000u)));
  }
  else
  {
    v68 = 1.0;
    v4 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_to_m128i(0x3F800000u)));
g4_m128_raw(v70) = 0x80000000;
  }
  if ( (v2 & 2) != 0 )
  {
    v5 = 1.0;
    LODWORD(v67) =g4_m128_lane<int32_t>(v70, 0) ^ 0x3F800000;
  }
  else
  {
    v67 = 1.0;
    v5 = 1.0;
  }
  v6 = 1.0;
  if ( (v2 & 4) != 0 )
  {
    LODWORD(v66) =g4_m128_lane<int32_t>(v70, 0) ^ 0x3F800000;
    LODWORD(v7) =g4_m128_lane<int32_t>(v70, 0) ^ 0x3F800000;
  }
  else
  {
    v7 = 1.0;
    v66 = 1.0;
  }
  v8 = v4;
  v9 = v7 * a1[26];
  v10 = 1.0 * a1[27];
  v64 = v68 * a1[24];
  v76 = v64;
  v11 = v67 * a1[25];
  v12 = (*(uint32_t *)(a2 + 60) & 0x70) >> 4;
  v13 = *(uint32_t *)(a2 + 60) & 0xF;
  v61 = v9;
  v78 = v9;
  v63 = v11;
  v77 = v11;
  v79 = v10;
  if ( (v12 & 1) != 0 )
    LODWORD(v8) = LODWORD(v4) ^g4_m128_lane<int32_t>(v70, 0);
  if ( (v12 & 2) != 0 )
    LODWORD(v5) =g4_m128_lane<int32_t>(v70, 0) ^ 0x3F800000;
  if ( (v12 & 4) != 0 )
    LODWORD(v6) =g4_m128_lane<int32_t>(v70, 0) ^ 0x3F800000;
  v14 = a1[v13 + 28];
  v15 = a1[28] * v8;
  v16 = &a1[4 * v13];
  v17 = v16[8];
  v16 += 8;
  v18 = v6 * a1[30];
  v19 = v5 * a1[29];
  v20 = v16[1];
  v72 = v17 * (float)(v14 * 2.0);
  v80[0] = v72;
  v71 = v20 * (float)(v14 * 2.0);
  v69 = v16[2] * (float)(v14 * 2.0);
  v80[3] = (float)(v14 * 2.0) * v16[3];
  v21 = a1[9] * v15;
  v80[2] = v69;
  v80[1] = v71;
  v22 = (float)((float)(v21 + (float)(a1[13] * v19)) + (float)(a1[17] * v18)) + a1[21];
  v74 = (float)((float)((float)(a1[14] * v19) + (float)(a1[10] * v15)) + (float)(a1[18] * v18)) + a1[22];
  v23 = (float)((float)((float)((float)(a1[11] * v15) + (float)(a1[15] * v19)) + (float)(a1[19] * v18)) + a1[23]) - v10;
  v24 = (float)((float)((float)((float)(v15 * a1[8]) + (float)(v19 * a1[12])) + (float)(v18 * a1[16])) + a1[20]) - v64;
  v81[0] = v24;
  v25 = v22 - v63;
  v81[3] = v23;
  v26 = v80[v3];
  v27 = _mm_xor_ps(g4_m128_u32(0x40000000u), v70);
g4_m128_lane<float>(v27, 0) =g4_m128_lane<float>(v27, 0) * a1[v3 + 24];
  v28 = v69 * (float)(v74 - v61);
  v81[2] = v74 - v61;
  v29 = v26 *g4_m128_lane<float>(v27, 0);
  v75 = v74 - v61;
  v30 = (float)((float)(v72 * v24) + (float)(v71 * v25)) + v28;
  v31 = v27;
  v65 = 4.0 * (float)(v14 * v14);
  v81[1] = v25;
g4_m128_lane<float>(v31, 0) = (float)((float)(g4_m128_lane<float>(v27, 0) *g4_m128_lane<float>(v27, 0)) * v65) - (float)(v29 * v29);
  v32 = _mm_and_ps(v31, g4_m128_u32(0x7FFFFFFFu));
  v33 = (float)((float)(v81[v3] *g4_m128_lane<float>(v27, 0)) * v65) - (float)(v29 * v30);
  if ( v33 >= (float)((float)(v4 - 0.00000011920929f) *g4_m128_lane<float>(v32, 0)) )
    return false;
  if ( (float)(0.00000011920929f *g4_m128_lane<float>(v32, 0)) >= v33 )
    return false;
  v35 = _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v32)));
  v62 = COERCE_FLOAT((2130706432 - v35) & ((v35 ^ (v35 + 2139095040)) >> 31))
      * (float)(2.0 - (float)(g4_m128_lane<float>(v32, 0) * COERCE_FLOAT((2130706432 - v35) & ((v35 ^ (v35 + 2139095040)) >> 31))));
  v36 = v33
      * (float)((float)(v62 * (float)(2.0 - (float)(v62 *g4_m128_lane<float>(v32, 0))))
              * (float)(2.0 - (float)(g4_m128_lane<float>(v32, 0) * (float)(v62 * (float)(2.0 - (float)(v62 *g4_m128_lane<float>(v32, 0)))))));
  result = (float)((float)(v29 * v36) - v30) >= (float)((float)(v4 - 0.00000011920929f) * v65)
        || (float)(0.00000011920929f * v65) >= (float)((float)(v29 * v36) - v30);
  if ( result )
    return false;
  v82 = 0.0;
  v83 = 0.0;
  v84 = 0.0;
g4_m128_raw(v41) = LODWORD(v69);
  v37 = (float)(v36 *g4_m128_lane<float>(v27, 0)) + *(&v76 + v3);
  *(&v82 + v3) =g4_m128_lane<float>(v27, 0) * 0.5;
  v38 = v84;
  v39 = v83;
  v40 = v71 * v84;
  *(float *)g4_m128_ptr<int32_t>(v41) = v69 * v83;
  *(&v76 + v3) = v37;
  *(float *)g4_m128_ptr<int32_t>(v41) = *(float *)g4_m128_ptr<int32_t>(v41) - v40;
  v42 = (float)(v72 * v38) - (float)(v69 * v82);
  v43 = v41;
  v73 = (float)(v82 * v71) - (float)(v39 * v72);
  *(float *)g4_m128_ptr<int32_t>(v43) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v41) * *(float *)g4_m128_ptr<int32_t>(v41)) + (float)(v42 * v42))
                          + (float)(v73 * v73);
  if ( *(float *)g4_m128_ptr<int32_t>(v43) <= 0.0 )
  {
    v50 = 0.0;
    v51 = 0;
  }
  else
  {
    v44 = ((_mm_cvtsi128_si32(v43) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v43) >> 1));
    v45 = (float)(1.5 * *(float *)&v44)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v43)) * *(float *)&v44)
                * (float)(*(float *)&v44 * *(float *)&v44));
    v46 = (float)(1.5 * v45) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v43)) * v45) * (float)(v45 * v45));
    v47 = 1.5 * v46;
    v48 = (float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v43)) * v46) * (float)(v46 * v46);
g4_m128_raw(v49) = 0;
    v50 = v47 - v48;
    *(float *)g4_m128_ptr<int32_t>(v49) = 0.0 * v50;
    v51 = _mm_cvtsi128_si32(v49);
  }
  if ( a1[44] <= (float)(*(float *)g4_m128_ptr<int32_t>(v43) * v50) )
  {
    v52 = *(float *)g4_m128_ptr<int32_t>(v41) * v50;
    v53 = v42 * v50;
    v54 = v50 * v73;
    v55 = v52;
    if ( (float)((float)((float)(v68 * v52) + (float)(v67 * v53)) + (float)(v66 * v54)) < 0.0 )
    {
      LODWORD(v55) = LODWORD(v52) ^g4_m128_lane<int32_t>(v70, 0);
      LODWORD(v53) ^=g4_m128_lane<int32_t>(v70, 0);
      LODWORD(v54) ^=g4_m128_lane<int32_t>(v70, 0);
      v56 = v51 ^g4_m128_lane<int32_t>(v70, 0);
    }
    else
    {
      v56 = v51;
    }
    v57 = (float)((float)(v24 * v55) + (float)(v25 * v53)) + (float)(v75 * v54);
    if ( v57 <= a1[32] )
    {
      v58 = v76;
      *(uint32_t *)(a2 + 32) = LODWORD(v55) ^g4_m128_lane<int32_t>(v70, 0);
      *(float *)a2 = v58;
      *(uint32_t *)(a2 + 36) = LODWORD(v53) ^g4_m128_lane<int32_t>(v70, 0);
      v59 = v77;
      *(uint32_t *)(a2 + 40) = LODWORD(v54) ^g4_m128_lane<int32_t>(v70, 0);
      *(float *)(a2 + 4) = v59;
      *(uint32_t *)(a2 + 44) = v56 ^g4_m128_lane<int32_t>(v70, 0);
      v60 = v78;
      *(float *)(a2 + 52) = v57;
      *(float *)(a2 + 8) = v60;
      *(float *)(a2 + 12) = v79;
      return true;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxCollisionDetection::addAdditionalEdgeHelper  (binary VA: 0x16fc690)
// Original: hkpBoxBoxCollisionDetection::addAdditionalEdgeHelper
// ----------------------------------------------------------------------------
char hkpBoxBoxCollisionDetection::addAdditionalEdgeHelper(float *a1, uint8_t *a2, uint8_t *a3, float *a4)
{
  hkpBoxBoxManifold::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  typedef uint8_t *_g4_t_v10;
  typedef float *_g4_t_v11;
  typedef float *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint64_t _g4_t_v14[6];
  typedef int _g4_t_v15;
  typedef float _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef float **_g4_t_v19;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v13)) > _g4_s3 ? (12u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v14)) > _g4_s4 ? (16u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v15)) > _g4_s5 ? (64u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v16)) > _g4_s6 ? (68u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v17)) > _g4_s7 ? (72u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v18)) > _g4_s8 ? (76u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v19)) > _g4_s9 ? (88u + sizeof(_g4_t_v19)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 68u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 88u);

  v19 = &a1;
  v4 = (hkpBoxBoxManifold::Self *)a2;
  v11 = a4;
  v12 = a1;
  v5 = a2[33];
  v10 = a3;
  if ( a2[33] != 0 )
  {
    v6 = *a3;
    v7 = a3[1];
    if ( *(uint16_t *)&a2[4 * v5 - 4] == __PAIR16__(v7, v6) )
      return v6;
    if ( v5 != 1 )
    {
      if ( *(uint16_t *)&a2[4 * v5 - 8] == __PAIR16__(v7, v6) )
        return v6;
      if ( v5 != 2 )
      {
        if ( *(uint16_t *)&a2[4 * v5 - 12] == __PAIR16__(v7, v6) )
          return v6;
        if ( v5 != 3 )
        {
          if ( *(uint16_t *)&a2[4 * v5 - 16] == __PAIR16__(v7, v6) )
            return v6;
          if ( v5 != 4 )
          {
            if ( *(uint16_t *)&a2[4 * v5 - 20] == __PAIR16__(v7, v6) )
              return v6;
            if ( v5 != 5 )
            {
              if ( *(uint16_t *)&a2[4 * v5 - 24] == __PAIR16__(v7, v6) )
                return v6;
              if ( v5 != 6 )
              {
                if ( *(uint16_t *)&a2[4 * v5 - 28] == __PAIR16__(v7, v6) )
                  return v6;
                v8 = v5 - 8;
                if ( v8 != -1 && *(uint16_t *)&a2[4 * v8] == __PAIR16__(v7, v6) )
                  return v6;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v6 = *a3;
    v7 = a3[1];
  }
  v17 = v6;
  memset(v14, 0, 32);
  v15 = 0;
  v18 = v7;
  LOBYTE(v6) = hkpBoxBoxCollisionDetection::isValidEdgeEdge(a1, (int)(uintptr_t)(v14));
  if ( (uint8_t)v6 != 0 )
  {
    LOBYTE(v6) = (uint8_t)(uintptr_t)(v11);
    if ( v16 >= (float)(0.999f * *v11) )
      LOBYTE(v6) = (uint8_t)(uintptr_t)hkpBoxBoxCollisionDetection::addPoint((uint32_t *)(&v13), v12, v4, (int)(uintptr_t)(v14), v10);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxCollisionDetection::tryToAddPointOnEdge  (binary VA: 0x16fc8a0)
// Original: hkpBoxBoxCollisionDetection::tryToAddPointOnEdge
// ----------------------------------------------------------------------------
char hkpBoxBoxCollisionDetection::tryToAddPointOnEdge(float *a1, uint8_t *a2, int a3, int a4, char a5, char a6, float *a7, float *a8, float *a9)
{
  float v9;
  float v10;
  char v11;
  char v12;
  typedef uint8_t _g4_t_v14;
  typedef char _g4_t_v15;
  typedef int16_t _g4_t_v16;
  typedef float _g4_t_v17;
  typedef float _g4_t_v18;
  typedef float _g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (1u + sizeof(_g4_t_v15)) > _g4_s1 ? (1u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (2u + sizeof(_g4_t_v16)) > _g4_s2 ? (2u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v17)) > _g4_s3 ? (16u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v18)) > _g4_s4 ? (20u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v19)) > _g4_s5 ? (24u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v20)) > _g4_s6 ? (28u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v21)) > _g4_s7 ? (32u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v22)) > _g4_s8 ? (36u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v23)) > _g4_s9 ? (40u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v24)) > _g4_s10 ? (44u + sizeof(_g4_t_v24)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 1u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 2u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);

  v16 = 0;
  v17 = *a7;
  v18 = a7[1];
  v9 = a7[3];
  v19 = a7[2];
  v20 = v9;
  v21 = *a8;
  v22 = a8[1];
  v10 = a8[3];
  v23 = a8[2];
  v24 = v10;
  *(&v17 + a3) = 0.0;
  *(&v21 + a4) = 0.0;
  v11 = 4 * (v19 < 0.0);
  if ( v20 < 0.0 )
    v11 = 4 * (v19 < 0.0) + 8;
  v12 = 4 * (v23 < 0.0);
  if ( v24 < 0.0 )
    v12 = 4 * (v23 < 0.0) + 8;
  v14 = (16 * (v11 & 7 | (v17 < 0.0) | (2 * (v18 < 0.0)))) | a3 | 0x80;
  v15 = a4 + 16 * ((v12 & 7 | (v21 < 0.0) | (2 * (v22 < 0.0))) ^ 7);
  hkpBoxBoxCollisionDetection::addAdditionalEdgeHelper(a1, a2, &v14, a9);
  v14 ^= 1 << (a5 + 4);
  hkpBoxBoxCollisionDetection::addAdditionalEdgeHelper(a1, a2, &v14, a9);
  v15 ^= 1 << (a6 + 4);
  hkpBoxBoxCollisionDetection::addAdditionalEdgeHelper(a1, a2, &v14, a9);
  v14 ^= 1 << (a5 + 4);
  return hkpBoxBoxCollisionDetection::addAdditionalEdgeHelper(a1, a2, &v14, a9);
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxCollisionDetection::findClosestPoint  (binary VA: 0x16fca60)
// Original: hkpBoxBoxCollisionDetection::findClosestPoint
// ----------------------------------------------------------------------------
int hkpBoxBoxCollisionDetection::findClosestPoint(float *a1, int a2, uint8_t *a3, int a4)
{
  __m128i v4;
  float v5; // xmm0_4
  int v6;
  float v7; // xmm1_4
  int v8;
  float v9; // xmm1_4
  int v10;
  float v11; // xmm1_4
  int v12;
  float v13; // xmm1_4
  unsigned int v14;
  float *v15;
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm5_4
  float *v19;
  float v20; // xmm0_4
  float v21; // xmm4_4
  float v22; // xmm6_4
  float v23; // xmm5_4
  float v24; // xmm0_4
  int v25;
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm4_4
  float v30;
  float v31; // xmm1_4
  float v32;
  float v33;
  char v34;
  char v35;
  char v36;
  char v37;
  uint8_t v38;
  uint8_t v39;
  uint8_t *v40;
  uint8_t *v41;
  uint8_t *v42;
  uint8_t *v43;
  uint8_t *v44;
  uint8_t *v45;
  uint8_t *v46;
  int v47;
  float v48; // xmm1_4
  float *v49;
  int v50;
  int v51;
  float v52; // xmm5_4
  __m128 v53;
  float v54; // xmm4_4
  float v55; // xmm3_4
  float v56; // xmm1_4
  int v57;
  __m128i m128_i128;
  __m128i v59;
  int v60;
  __m128i v61;
  float v62; // xmm6_4
  float v63; // xmm1_4
  char v64;
  uint8_t v65;
  float v66; // xmm2_4
  uint8_t *v67;
  uint8_t v68;
  uint8_t *v69;
  uint8_t *v70;
  uint8_t *v71;
  uint8_t *v72;
  uint8_t *v73;
  uint8_t *v74;
  uint8_t *v75;
  float v76; // xmm0_4
  float v77; // xmm1_4
  float v78; // xmm2_4
  float v79; // xmm4_4
  float v80; // xmm3_4
  bool v81;
  bool v82;
  float v83; // xmm4_4
  uint8_t v84;
  uint8_t v85;
  float *v86;
  __m128 v87;
  int v88;
  float v89; // xmm4_4
  int v90;
  float v91; // xmm3_4
  float v92; // xmm0_4
  __m128 v93;
  __m128 v94;
  __m128 v95;
  __m128 v96;
  int v97;
  __m128 v98;
  __m128i v99;
  __m128i v100;
  float v101; // xmm6_4
  float v102;
  float v103; // xmm1_4
  char v104;
  uint8_t v105;
  uint8_t *v106;
  uint8_t v107;
  uint8_t *v108;
  uint8_t *v109;
  uint8_t *v110;
  uint8_t *v111;
  uint8_t *v112;
  uint8_t *v113;
  uint8_t *v114;
  float v115; // xmm0_4
  float v116; // xmm1_4
  float v117; // xmm2_4
  float v118; // xmm4_4
  float v119; // xmm3_4
  float v120; // xmm4_4
  uint8_t v121;
  uint8_t v122;
  float v124; // xmm3_4
  float v125;
  float v126; // xmm7_4
  float v127; // xmm1_4
  float v128; // xmm7_4
  float v129; // xmm2_4
  float v130;
  int v131;
  int v132;
  float v133; // xmm7_4
  float v134; // xmm1_4
  float v135; // xmm7_4
  float v136; // xmm2_4
  typedef int _g4_t_v137;
  typedef int _g4_t_v138;
  typedef int _g4_t_v139;
  typedef float _g4_t_v140;
  typedef float _g4_t_v141;
  typedef int _g4_t_v142;
  typedef int _g4_t_v143;
  typedef float _g4_t_v144;
  typedef float _g4_t_v145;
  typedef char _g4_t_v146;
  typedef float _g4_t_v147;
  typedef float _g4_t_v148;
  typedef int _g4_t_v149;
  typedef hkMatrix3f::Self *_g4_t_v150;
  typedef float _g4_t_v151;
  typedef uint8_t _g4_t_v152;
  typedef float _g4_t_v153;
  typedef uint8_t _g4_t_v154;
  typedef char _g4_t_v155;
  typedef int _g4_t_v156;
  typedef int _g4_t_v157;
  typedef float _g4_t_v158;
  typedef float _g4_t_v159;
  typedef int _g4_t_v160;
  typedef float _g4_t_v161;
  typedef float _g4_t_v162;
  typedef float _g4_t_v163;
  typedef int _g4_t_v164;
  typedef float _g4_t_v165;
  typedef unsigned int _g4_t_v166;
  typedef int _g4_t_v167;
  typedef float _g4_t_v168;
  typedef float _g4_t_v169;
  typedef float _g4_t_v170;
  typedef float _g4_t_v171;
  typedef float _g4_t_v172;
  typedef float _g4_t_v173;
  typedef float _g4_t_v174;
  typedef float _g4_t_v175;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v137)) > _g4_s0 ? (4u + sizeof(_g4_t_v137)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v138)) > _g4_s1 ? (8u + sizeof(_g4_t_v138)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v139)) > _g4_s2 ? (12u + sizeof(_g4_t_v139)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v140)) > _g4_s3 ? (12u + sizeof(_g4_t_v140)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v141)) > _g4_s4 ? (16u + sizeof(_g4_t_v141)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v142)) > _g4_s5 ? (16u + sizeof(_g4_t_v142)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v143)) > _g4_s6 ? (20u + sizeof(_g4_t_v143)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v144)) > _g4_s7 ? (20u + sizeof(_g4_t_v144)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v145)) > _g4_s8 ? (20u + sizeof(_g4_t_v145)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v146)) > _g4_s9 ? (24u + sizeof(_g4_t_v146)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v147)) > _g4_s10 ? (24u + sizeof(_g4_t_v147)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v148)) > _g4_s11 ? (24u + sizeof(_g4_t_v148)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v149)) > _g4_s12 ? (28u + sizeof(_g4_t_v149)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v150)) > _g4_s13 ? (32u + sizeof(_g4_t_v150)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v151)) > _g4_s14 ? (36u + sizeof(_g4_t_v151)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v152)) > _g4_s15 ? (36u + sizeof(_g4_t_v152)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v153)) > _g4_s16 ? (36u + sizeof(_g4_t_v153)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v154)) > _g4_s17 ? (36u + sizeof(_g4_t_v154)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v155)) > _g4_s18 ? (40u + sizeof(_g4_t_v155)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v156)) > _g4_s19 ? (40u + sizeof(_g4_t_v156)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v157)) > _g4_s20 ? (40u + sizeof(_g4_t_v157)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v158)) > _g4_s21 ? (40u + sizeof(_g4_t_v158)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v159)) > _g4_s22 ? (40u + sizeof(_g4_t_v159)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v160)) > _g4_s23 ? (40u + sizeof(_g4_t_v160)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v161)) > _g4_s24 ? (40u + sizeof(_g4_t_v161)) : _g4_s24,
    _g4_s26 = (40u + sizeof(_g4_t_v162)) > _g4_s25 ? (40u + sizeof(_g4_t_v162)) : _g4_s25,
    _g4_s27 = (40u + sizeof(_g4_t_v163)) > _g4_s26 ? (40u + sizeof(_g4_t_v163)) : _g4_s26,
    _g4_s28 = (40u + sizeof(_g4_t_v164)) > _g4_s27 ? (40u + sizeof(_g4_t_v164)) : _g4_s27,
    _g4_s29 = (40u + sizeof(_g4_t_v165)) > _g4_s28 ? (40u + sizeof(_g4_t_v165)) : _g4_s28,
    _g4_s30 = (44u + sizeof(_g4_t_v166)) > _g4_s29 ? (44u + sizeof(_g4_t_v166)) : _g4_s29,
    _g4_s31 = (44u + sizeof(_g4_t_v167)) > _g4_s30 ? (44u + sizeof(_g4_t_v167)) : _g4_s30,
    _g4_s32 = (48u + sizeof(_g4_t_v168)) > _g4_s31 ? (48u + sizeof(_g4_t_v168)) : _g4_s31,
    _g4_s33 = (52u + sizeof(_g4_t_v169)) > _g4_s32 ? (52u + sizeof(_g4_t_v169)) : _g4_s32,
    _g4_s34 = (56u + sizeof(_g4_t_v170)) > _g4_s33 ? (56u + sizeof(_g4_t_v170)) : _g4_s33,
    _g4_s35 = (60u + sizeof(_g4_t_v171)) > _g4_s34 ? (60u + sizeof(_g4_t_v171)) : _g4_s34,
    _g4_s36 = (64u + sizeof(_g4_t_v172)) > _g4_s35 ? (64u + sizeof(_g4_t_v172)) : _g4_s35,
    _g4_s37 = (68u + sizeof(_g4_t_v173)) > _g4_s36 ? (68u + sizeof(_g4_t_v173)) : _g4_s36,
    _g4_s38 = (72u + sizeof(_g4_t_v174)) > _g4_s37 ? (72u + sizeof(_g4_t_v174)) : _g4_s37,
    _g4_s39 = (76u + sizeof(_g4_t_v175)) > _g4_s38 ? (76u + sizeof(_g4_t_v175)) : _g4_s38
  };
  alignas(16) uint8_t _g4_sf[_g4_s39];
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 4u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 8u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 12u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 12u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 16u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 16u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 20u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 20u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 20u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 24u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 24u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 24u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 28u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 32u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 36u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 36u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 36u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 36u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 40u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 40u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 40u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 40u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 40u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 40u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 40u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 40u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 40u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 40u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 40u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 44u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 44u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 48u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 52u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 56u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 60u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 64u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 68u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 72u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 76u);

g4_m128_raw(v4) = 0;
  v149 = 8;
  v150 = (hkMatrix3f::Self *)(a1 + 8);
  while ( 1 )
  {
    v47 = 1;
    v48 = a1[57];
    if ( v48 < a1[56] )
    {
      v48 = a1[56];
      LOBYTE(v47) = 0;
    }
    v5 = a1[58];
    if ( v5 < v48 )
    {
      v5 = v48;
      v166 = v47;
    }
    else
    {
      v166 = 2;
    }
    v6 = 1;
    v7 = a1[61];
    if ( v7 < a1[60] )
    {
      v7 = a1[60];
      LOBYTE(v6) = 0;
    }
    if ( a1[62] >= v7 )
    {
      v7 = a1[62];
      v6 = 2;
    }
    if ( v7 > v5 )
    {
      v5 = v7;
      v166 = v6 + 4;
    }
    v8 = 1;
    v9 = a1[65];
    if ( v9 < a1[64] )
    {
      v9 = a1[64];
      LOBYTE(v8) = 0;
    }
    if ( a1[66] >= v9 )
    {
      v9 = a1[66];
      v8 = 2;
    }
    if ( v9 > v5 )
    {
      v5 = v9;
      v166 = v8 + 8;
    }
    v10 = 1;
    v11 = a1[69];
    if ( v11 < a1[68] )
    {
      v11 = a1[68];
      LOBYTE(v10) = 0;
    }
    if ( a1[70] >= v11 )
    {
      v11 = a1[70];
      v10 = 2;
    }
    if ( v11 > v5 )
    {
      v5 = v11;
      v166 = v10 + 12;
    }
    v12 = 1;
    v13 = a1[73];
    if ( v13 < a1[72] )
    {
      v13 = a1[72];
      LOBYTE(v12) = 0;
    }
    if ( a1[74] >= v13 )
    {
      v13 = a1[74];
      v12 = 2;
    }
    if ( v13 > v5 )
    {
      v166 = v12 + 16;
      goto LABEL_27;
    }
    if ( v166 > 2 )
      break;
    *a3 = v166;
    *(uint32_t *)(a4 + 56) = v166;
    hkMatrix3f::setTranspose((hkMatrix3f::Self *)&v172, v150);
g4_m128_raw(v4) = 0u;
    v49 = &v172 + 4 * v166;
    v144 = *v49;
    v141 = v49[1];
    v147 = v49[2];
    v151 = v49[3];
    if ( a1[v166 + 48] < 0.0 )
    {
      *(uint32_t *)(a4 + 48) = 15;
      v50 = 0;
      v51 = 0;
      v157 = 0;
g4_m128_raw(v53) = 0xB727C5AC;
      v139 = 15;
      v52 = a1[28];
    }
    else
    {
      *(uint32_t *)(a4 + 48) = 0;
      v50 = 4;
      v51 = 8;
      v157 = 2;
      v139 = 0;
      v52 = -a1[28];
g4_m128_raw(v53) = 0x3727C5ACu;
    }
    *(float *)(a4 + 16) = v52;
    v54 = a1[29];
    if ( v157 != 0 )
      v54 = -v54;
    *(float *)(a4 + 20) = v54;
    v55 = a1[30];
    if ( v50 != 0 )
      v55 = -v55;
    *(float *)(a4 + 24) = v55;
    v56 = a1[31];
    if ( v51 != 0 )
      v56 = -v56;
    *(float *)(a4 + 28) = v56;
    v158 =g4_m128_lane<float>(v53, 0);
    LOBYTE(v57) = a1[54] <= 0.0 ? 4 : 0;
    if ( a1[55] <= 0.0 )
      v57 = a1[54] > 0.0 ? 8 : 12;
    if ( (v57 & 1 | (a1[52] <= 0.0)) != 0 )
      v158 = -g4_m128_lane<float>(v53, 0);
    m128_i128 =g4_m128_raw(G4_BITCAST<__m128i>(v53));
    if ( (v57 & 2 | (a1[53] <= 0.0 ? 2 : 0)) != 0 )
g4_m128_raw(m128_i128) = (g4_int128_t)_mm_xor_ps(v53, *(__m128 *)&dword_1C7C1B0);
    v59 =g4_m128_raw(G4_BITCAST<__m128i>(v53));
    if ( (v57 & 4) != 0 )
g4_m128_raw(v59) = (g4_int128_t)_mm_xor_ps(v53, *(__m128 *)&dword_1C7C1B0);
    if ( (v57 & 8) != 0 )
      v53 = _mm_xor_ps(v53, *(__m128 *)&dword_1C7C1B0);
g4_m128_lane<float>(v53, 0) =g4_m128_lane<float>(v53, 0) + v151;
    *(float *)g4_m128_ptr<int32_t>(m128_i128) = *(float *)g4_m128_ptr<int32_t>(m128_i128) + v141;
    *(float *)g4_m128_ptr<int32_t>(v59) = *(float *)g4_m128_ptr<int32_t>(v59) + v147;
    v60 = _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v53)));
g4_m128_raw(v61) = LODWORD(v158);
    *(float *)g4_m128_ptr<int32_t>(v61) = v158 + v144;
    if ( _mm_cvtsi128_si32(v61) < 0 )
      v52 = -v52;
    *(float *)(a4 + 16) = v52;
    if ( _mm_cvtsi128_si32(m128_i128) < 0 )
      v54 = -v54;
    *(float *)(a4 + 20) = v54;
    if ( _mm_cvtsi128_si32(v59) < 0 )
    {
      v159 = v56;
      v55 = -v55;
      *(float *)(a4 + 24) = v55;
      if ( v60 >= 0 )
        goto LABEL_80;
    }
    else
    {
      *(float *)(a4 + 24) = v55;
      v159 = v56;
      if ( v60 >= 0 )
        goto LABEL_80;
    }
    v159 = -v56;
LABEL_80:
    *(float *)(a4 + 28) = v159;
    v62 = (float)((float)(a1[9] * v52) + (float)(a1[13] * v54)) + (float)(a1[17] * v55);
    v63 = (float)((float)(a1[10] * v52) + (float)(a1[14] * v54)) + (float)(a1[18] * v55);
    v64 = 4 * (v55 < 0.0);
    if ( v159 < 0.0 )
      v64 = 4 * (v55 < 0.0) + 8;
    v65 = 16 * (v64 & 7 | (v52 < 0.0) | (2 * (v54 < 0.0)));
    v66 = (float)((float)(a1[15] * v54) + (float)(a1[11] * v52)) + (float)(a1[19] * v55);
    if ( v139 != 0 )
      v65 |= 8u;
    *(float *)a4 = (float)((float)((float)(a1[8] * v52) + (float)(a1[12] * v54)) + (float)(a1[16] * v55)) + a1[20];
    *(float *)(a4 + 4) = v62 + a1[21];
    v152 = v65;
    *(float *)(a4 + 8) = v63 + a1[22];
    *(float *)(a4 + 12) = v66 + a1[23];
    a3[1] = v65;
    v160 = *(uint8_t *)(a2 + 33);
    if ( *(uint8_t *)(a2 + 33) != 0 )
    {
      v67 = (uint8_t *)(a2 + 4 * (*(uint8_t *)(a2 + 33) - 1));
      v68 = *a3;
      if ( *v67 == *a3 && v65 == v67[1] )
        return 1;
      if ( v160 - 2 >= 0 )
      {
        v69 = (uint8_t *)(a2 + 4 * (v160 - 2));
        if ( v68 == *v69 && v65 == v69[1] )
          return 1;
        if ( v160 - 3 >= 0 )
        {
          v70 = (uint8_t *)(a2 + 4 * (v160 - 3));
          if ( v68 == *v70 && v65 == v70[1] )
            return 1;
          if ( v160 - 4 >= 0 )
          {
            v71 = (uint8_t *)(a2 + 4 * (v160 - 4));
            if ( v68 == *v71 && v65 == v71[1] )
              return 1;
            if ( v160 - 5 >= 0 )
            {
              v72 = (uint8_t *)(a2 + 4 * (v160 - 5));
              if ( v68 == *v72 && v65 == v72[1] )
                return 1;
              if ( v160 - 6 >= 0 )
              {
                v73 = (uint8_t *)(a2 + 4 * (v160 - 6));
                if ( v68 == *v73 && v65 == v73[1] )
                  return 1;
                if ( v160 - 7 >= 0 )
                {
                  v74 = (uint8_t *)(a2 + 4 * (v160 - 7));
                  if ( v68 == *v74 && v65 == v74[1] )
                    return 1;
                  if ( v160 - 8 >= 0 )
                  {
                    v75 = (uint8_t *)(a2 + 4 * (v160 - 8));
                    if ( v68 == *v75 && v152 == v75[1] )
                      return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    v76 = *(float *)a4;
    v161 = fabs(*(float *)(a4 + 8));
    v77 = *(float *)(a4 + 4);
    v78 = *(float *)(a4 + 12);
    v79 = fabs(v77);
    v80 = a1[37];
    v81 = v80 < v79;
    v82 = v80 == v79;
    v83 = a1[38];
    v84 = (a1[36] > fabs(*(float *)a4)) | (2 * (!v81 && !v82));
    v85 = 4 * (v83 > v161);
    if ( a1[39] > fabs(v78) )
      v85 = 4 * (v83 > v161) + 8;
    if ( ((v85 | v84) & 7) == 7 )
    {
      v130 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_to_m128i(*(unsigned int *)(a4 + 8))));
      v131 = *(uint32_t *)(a4 + 56);
      v132 = *(uint32_t *)(a4 + 48);
      if ( (v132 & 1) != 0 )
        v76 = -v76;
      if ( (v132 & 2) != 0 )
        v77 = -v77;
      v133 = v130;
      if ( (v132 & 4) != 0 )
        v133 = -v130;
      if ( (v132 & 8) != 0 )
        v78 = -v78;
      v134 = v77 - a1[25];
      v135 = v133 - a1[26];
      v136 = v78 - a1[27];
      v172 = v76 - a1[24];
      v173 = v134;
      v174 = v135;
      v175 = v136;
      *(float *)(a4 + 52) = *(&v172 + v131);
      return 2;
    }
LABEL_50:
    a1[4 * (v166 >> 2) + 56 + (v166 & 3)] = -3.40282e38f;
    if ( --v149 == 0 )
      return 0;
  }
  if ( v166 > 6 )
  {
LABEL_27:
    v14 = (v166 - 8) >> 2;
    *(uint32_t *)(a4 + 60) = (v166 - 8) & 3;
    v143 = (v166 - 8) & 3;
    *(uint32_t *)(a4 + 56) = v14;
    v146 = v14;
    v15 = (float *)((char *)&g_vectorfConstants + 16 * v14 + 464);
    v16 = v15[1];
    v17 = *v15;
    v18 = v15[2];
    v19 = (float *)((char *)v150 + 16 * v143);
    v20 = v19[1];
    v21 = v19[2];
    v22 = (float)(v16 * v21) - (float)(v18 * v20);
    v23 = (float)(v18 * *v19) - (float)(v21 * v17);
    v24 = (float)(v20 * v17) - (float)(*v19 * v16);
    if ( (float)((float)((float)(a1[48] * v22) + (float)(a1[49] * v23)) + (float)(a1[50] * v24)) < 0.0 )
    {
      v22 = -v22;
      v23 = -v23;
      v24 = -v24;
      v25 = 0x80000000;
    }
    else
    {
      v25 = _mm_cvtsi128_si32(v4);
    }
    v26 = (float)((float)(a1[8] * v22) + (float)(a1[9] * v23)) + (float)(a1[10] * v24);
    v27 = (float)((float)(a1[12] * v22) + (float)(a1[13] * v23)) + (float)(a1[14] * v24);
    v28 = (float)(a1[16] * v22) + (float)(a1[17] * v23);
    v29 = a1[18] * v24;
    *(uint32_t *)(a4 + 12) = v25;
    *(float *)a4 = v22;
    v30 = *(float *)a4;
    *(float *)(a4 + 4) = v23;
    v168 = v30;
    *(float *)(a4 + 8) = v24;
    v31 = v28 + v29;
    v169 = *(float *)(a4 + 4);
    *(float *)(a4 + 16) = v26;
    v32 = *(float *)(a4 + 8);
    *(float *)(a4 + 20) = v27;
    v170 = v32;
    v171 = *(float *)(a4 + 12);
    v33 = *(float *)(a4 + 16);
    *(float *)(a4 + 24) = v31;
    v172 = v33;
    *(float *)(a4 + 28) = v31;
    v173 = *(float *)(a4 + 20);
    v174 = *(float *)(a4 + 24);
    v175 = *(float *)(a4 + 28);
    *(&v168 + v14) = 0.0;
    v34 = (v168 < 0.0) | (2 * (v169 < 0.0));
    *(&v172 + v143) = 0.0;
    v35 = 4 * (v170 < 0.0);
    if ( v171 < 0.0 )
      v35 = 4 * (v170 < 0.0) + 8;
    v36 = (v35 | v34) & 7;
    v37 = 4 * (v174 < 0.0) + 8;
    if ( v175 >= 0.0 )
      v37 = 4 * (v174 < 0.0);
    v155 = v37;
    v38 = (16 * v36) | v146 | 0x80;
    a3[1] = v143 + 16 * ((v155 & 7 | (v172 < 0.0) | (2 * (v173 < 0.0))) ^ 7);
    *a3 = v38;
    *(uint32_t *)(a4 + 56) = v38;
    *(uint32_t *)(a4 + 60) = a3[1];
    v156 = *(uint8_t *)(a2 + 33);
    if ( *(uint8_t *)(a2 + 33) != 0 )
    {
      v39 = *a3;
      if ( *(uint16_t *)(a2 + 4 * (*(uint8_t *)(a2 + 33) - 1)) == *(uint16_t *)a3 )
        return 1;
      if ( v156 - 2 >= 0 )
      {
        v40 = (uint8_t *)(a2 + 4 * (v156 - 2));
        if ( v39 == *v40 && v40[1] == a3[1] )
          return 1;
        if ( v156 - 3 >= 0 )
        {
          v41 = (uint8_t *)(a2 + 4 * (v156 - 3));
          if ( v39 == *v41 && v41[1] == a3[1] )
            return 1;
          if ( v156 - 4 >= 0 )
          {
            v42 = (uint8_t *)(a2 + 4 * (v156 - 4));
            if ( v39 == *v42 && v42[1] == a3[1] )
              return 1;
            if ( v156 - 5 >= 0 )
            {
              v43 = (uint8_t *)(a2 + 4 * (v156 - 5));
              if ( v39 == *v43 && v43[1] == a3[1] )
                return 1;
              if ( v156 - 6 >= 0 )
              {
                v44 = (uint8_t *)(a2 + 4 * (v156 - 6));
                if ( v39 == *v44 && v44[1] == a3[1] )
                  return 1;
                if ( v156 - 7 >= 0 )
                {
                  v45 = (uint8_t *)(a2 + 4 * (v156 - 7));
                  if ( v39 == *v45 && v45[1] == a3[1] )
                    return 1;
                  if ( v156 - 8 >= 0 )
                  {
                    v46 = (uint8_t *)(a2 + 4 * (v156 - 8));
                    if ( v39 == *v46 && v46[1] == a3[1] )
                      return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
g4_m128_raw(v4) = 0u;
    if ( hkpBoxBoxCollisionDetection::isValidEdgeEdge(a1, a4) )
      return 2;
    goto LABEL_50;
  }
  *a3 = v166;
  *(uint32_t *)(a4 + 56) = v166;
  v86 = (float *)((char *)v150 + 16 * v166 - 64);
  v145 = *v86;
  v148 = v86[1];
  v153 = v86[2];
  v162 = v86[3];
  if ( a1[v166 + 48] < 0.0 )
  {
    *(uint32_t *)(a4 + 48) = 15;
    v142 = 15;
    v87 = _mm_xor_ps(g4_m128_u32(*((unsigned int *)a1 + 24)), *(__m128 *)&dword_1C7C1B0);
    v137 = 1;
    *(uint32_t *)a4 =g4_m128_lane<int32_t>(v87, 0);
    v88 = 2;
    v90 = 4;
    v89 = -a1[25];
    v138 = 8;
    *(float *)(a4 + 4) = v89;
    v124 = -a1[26];
    *(float *)(a4 + 8) = v124;
    v140 = v124;
    v92 = -a1[27];
  }
  else
  {
    *(uint32_t *)(a4 + 48) = 0;
    v142 = 0;
g4_m128_raw(v87) = *((unsigned int *)a1 + 24);
    v137 = 0;
    *(uint32_t *)a4 =g4_m128_lane<int32_t>(v87, 0);
    v88 = 0;
    v89 = a1[25];
    v90 = 0;
    *(float *)(a4 + 4) = v89;
    v138 = 0;
    v91 = a1[26];
    *(float *)(a4 + 8) = v91;
    v140 = v91;
    v92 = a1[27];
  }
  *(float *)(a4 + 12) = v92;
g4_m128_raw(v93) = 0xB727C5AC;
  if ( v137 != 0 )
g4_m128_raw(v93) = 0x3727C5ACu;
g4_m128_raw(v94) = 0xB727C5AC;
  if ( v88 != 0 )
g4_m128_raw(v94) = 0x3727C5ACu;
g4_m128_raw(v95) = 0xB727C5AC;
  if ( v90 != 0 )
g4_m128_raw(v95) = 0x3727C5ACu;
g4_m128_raw(v96) = 0xB727C5AC;
  if ( v138 != 0 )
g4_m128_raw(v96) = 0x3727C5ACu;
  LOBYTE(v97) = a1[54] <= 0.0 ? 4 : 0;
  if ( a1[55] <= 0.0 )
    v97 = a1[54] > 0.0 ? 8 : 12;
  if ( (v97 & 1 | (a1[52] <= 0.0)) != 0 )
    v93 = _mm_xor_ps(v93, *(__m128 *)&dword_1C7C1B0);
  if ( (v97 & 2 | (a1[53] <= 0.0 ? 2 : 0)) != 0 )
    v94 = _mm_xor_ps(v94, *(__m128 *)&dword_1C7C1B0);
  if ( (v97 & 4) != 0 )
    v95 = _mm_xor_ps(v95, *(__m128 *)&dword_1C7C1B0);
  if ( (v97 & 8) != 0 )
    v96 = _mm_xor_ps(v96, *(__m128 *)&dword_1C7C1B0);
g4_m128_lane<float>(v93, 0) =g4_m128_lane<float>(v93, 0) + v145;
g4_m128_lane<float>(v94, 0) =g4_m128_lane<float>(v94, 0) + v148;
g4_m128_lane<float>(v95, 0) =g4_m128_lane<float>(v95, 0) + v153;
g4_m128_lane<float>(v96, 0) =g4_m128_lane<float>(v96, 0) + v162;
  if ( _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v93))) < 0 )
    v87 = _mm_xor_ps(v87, *(__m128 *)&dword_1C7C1B0);
  *(uint32_t *)a4 =g4_m128_lane<int32_t>(v87, 0);
  if ( _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v94))) < 0 )
    v89 = -v89;
  *(float *)(a4 + 4) = v89;
g4_m128_raw(v98) = LODWORD(v140);
  if ( _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v95))) < 0 )
    v98 = _mm_xor_ps(g4_m128_from<__m128>(LODWORD(v140)), *(__m128 *)&dword_1C7C1B0);
  *(uint32_t *)(a4 + 8) =g4_m128_lane<int32_t>(v98, 0);
  v163 = v92;
  if ( _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v96))) < 0 )
    v163 = -v92;
  v99 =g4_m128_raw(G4_BITCAST<__m128i>(v87));
  *(float *)(a4 + 12) = v163;
  v100 =g4_m128_raw(G4_BITCAST<__m128i>(v98));
  *(float *)g4_m128_ptr<int32_t>(v99) =g4_m128_lane<float>(v87, 0) - a1[20];
  *(float *)g4_m128_ptr<int32_t>(v100) =g4_m128_lane<float>(v98, 0) - a1[22];
  v101 = v89 - a1[21];
  v102 = COERCE_FLOAT(_mm_cvtsi128_si32(v100));
  *(float *)g4_m128_ptr<int32_t>(v100) = (float)(*(float *)g4_m128_ptr<int32_t>(v99) * a1[8]) + (float)(a1[9] * v101);
  v103 = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v99) * a1[12]) + (float)(a1[13] * v101)) + (float)(v102 * a1[14]);
  *(float *)g4_m128_ptr<int32_t>(v99) = (float)((float)(COERCE_FLOAT(_mm_cvtsi128_si32(v99)) * a1[16]) + (float)(v101 * a1[17]))
                          + (float)(v102 * a1[18]);
  *(float *)g4_m128_ptr<int32_t>(v100) = *(float *)g4_m128_ptr<int32_t>(v100) + (float)(v102 * a1[10]);
  *(float *)(a4 + 20) = v103;
  *(uint32_t *)(a4 + 24) =g4_m128_lane<int32_t>(v99, 0);
  *(uint32_t *)(a4 + 16) =g4_m128_lane<int32_t>(v100, 0);
  v104 = 4 * (g4_m128_lane<float>(v98, 0) < 0.0);
  *(uint32_t *)(a4 + 28) =g4_m128_lane<int32_t>(v99, 0);
  if ( v163 < 0.0 )
    v104 = 4 * (g4_m128_lane<float>(v98, 0) < 0.0) + 8;
  v105 = 16 * (v104 & 7 | (g4_m128_lane<float>(v87, 0) < 0.0) | (2 * (v89 < 0.0)));
  if ( v142 != 0 )
    v105 |= 8u;
  v154 = v105;
  a3[1] = v105;
  v164 = *(uint8_t *)(a2 + 33);
  if ( *(uint8_t *)(a2 + 33) != 0 )
  {
    v106 = (uint8_t *)(a2 + 4 * (*(uint8_t *)(a2 + 33) - 1));
    v107 = *a3;
    if ( *v106 == *a3 && v105 == v106[1] )
      return 1;
    if ( v164 - 2 >= 0 )
    {
      v108 = (uint8_t *)(a2 + 4 * (v164 - 2));
      if ( v107 == *v108 && v105 == v108[1] )
        return 1;
      if ( v164 - 3 >= 0 )
      {
        v109 = (uint8_t *)(a2 + 4 * (v164 - 3));
        if ( v107 == *v109 && v105 == v109[1] )
          return 1;
        if ( v164 - 4 >= 0 )
        {
          v110 = (uint8_t *)(a2 + 4 * (v164 - 4));
          if ( v107 == *v110 && v105 == v110[1] )
            return 1;
          if ( v164 - 5 >= 0 )
          {
            v111 = (uint8_t *)(a2 + 4 * (v164 - 5));
            if ( v107 == *v111 && v105 == v111[1] )
              return 1;
            if ( v164 - 6 >= 0 )
            {
              v112 = (uint8_t *)(a2 + 4 * (v164 - 6));
              if ( v107 == *v112 && v105 == v112[1] )
                return 1;
              if ( v164 - 7 >= 0 )
              {
                v113 = (uint8_t *)(a2 + 4 * (v164 - 7));
                if ( v107 == *v113 && v105 == v113[1] )
                  return 1;
                if ( v164 - 8 >= 0 )
                {
                  v114 = (uint8_t *)(a2 + 4 * (v164 - 8));
                  if ( v107 == *v114 && v154 == v114[1] )
                    return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  v115 = *(float *)(a4 + 16);
  v165 = fabs(*(float *)(a4 + 24));
  v116 = *(float *)(a4 + 20);
  v117 = *(float *)(a4 + 28);
  v118 = fabs(v116);
  v119 = a1[41];
  v81 = v119 < v118;
  v82 = v119 == v118;
  v120 = a1[42];
  v121 = (a1[40] > fabs(v115)) | (2 * (!v81 && !v82));
  v122 = 4 * (v120 > v165);
  if ( a1[43] > fabs(v117) )
    v122 = 4 * (v120 > v165) + 8;
  if ( ((v122 | v121) & 7) != 7 )
    goto LABEL_50;
  v125 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_to_m128i(*(unsigned int *)(a4 + 24))));
  v167 = *(uint32_t *)(a4 + 56);
  if ( (*(uint8_t *)(a4 + 48) & 1) == 0 )
    v115 = -v115;
  if ( (~*(uint8_t *)(a4 + 48) & 2) != 0 )
    v116 = -v116;
  v126 = v125;
  if ( (~*(uint8_t *)(a4 + 48) & 4) != 0 )
    v126 = -v125;
  if ( (~*(uint8_t *)(a4 + 48) & 8) != 0 )
    v117 = -v117;
  v127 = v116 - a1[29];
  v128 = v126 - a1[30];
  v129 = v117 - a1[31];
  v172 = v115 - a1[28];
  v173 = v127;
  v174 = v128;
  v175 = v129;
  *(float *)(a4 + 52) = *(&v172 + v167 - 4);
  return 2;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxCollisionDetection::refreshManifold  (binary VA: 0x16fdd70)
// Original: hkpBoxBoxCollisionDetection::refreshManifold
// ----------------------------------------------------------------------------
int hkpBoxBoxCollisionDetection::refreshManifold(int a1, hkpBoxBoxManifold::Self *a2, float *a3)
{
  int v3;
  int result;
  char v5;
  int v6;
  float v7; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm0_4
  float v13; // xmm6_4
  float v14; // xmm5_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm5_4
  char v19;
  bool v20;
  char v21;
  char v22;
  char v23;
  uint8_t v24;
  int *v25;
  int v26;
  float *v27;
  float v28; // xmm1_4
  float v29; // xmm0_4
  float v30; // xmm3_4
  float *v31;
  float v32; // xmm0_4
  float v33; // xmm2_4
  float v34; // xmm5_4
  float v35; // xmm3_4
  int v36;
  int v37;
  float v38; // xmm3_4
  float v39; // xmm2_4
  float v40; // xmm1_4
  float v41; // xmm3_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  __m128i v44;
  float v45; // xmm5_4
  float v46; // xmm7_4
  float v47; // xmm0_4
  char v48;
  char v49;
  char v50;
  int *v51;
  int v52;
  float v53;
  float v54; // xmm6_4
  float v55; // xmm4_4
  float v56; // xmm0_4
  float v57; // xmm6_4
  float v58; // xmm4_4
  float v59; // xmm0_4
  __m128 v60;
  int v61;
  float *v62;
  float v63; // xmm5_4
  float v64; // xmm4_4
  float v65; // xmm0_4
  unsigned int *v66;
  __m128 v67;
  __m128 v68;
  __m128 v69;
  g4_int128_t v70;
  int *v71;
  int v72;
  float v73; // xmm5_4
  float v74; // xmm1_4
  float v75; // xmm5_4
  float v76; // xmm0_4
  __m128 v77;
  int v78;
  float *v79;
  float v80; // xmm2_4
  float v81; // xmm1_4
  float v82; // xmm0_4
  unsigned int *v83;
  __m128 v84;
  __m128 v85;
  __m128 v86;
  g4_int128_t v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef bool _g4_t_v90;
  typedef int _g4_t_v91;
  typedef float _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef bool _g4_t_v100;
  typedef int _g4_t_v101;
  typedef unsigned int _g4_t_v102;
  typedef uint8_t *_g4_t_v103;
  typedef float _g4_t_v104;
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108;
  typedef float _g4_t_v109;
  typedef float _g4_t_v110;
  typedef float _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v88)) > _g4_s0 ? (8u + sizeof(_g4_t_v88)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v89)) > _g4_s1 ? (16u + sizeof(_g4_t_v89)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v90)) > _g4_s2 ? (20u + sizeof(_g4_t_v90)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v91)) > _g4_s3 ? (24u + sizeof(_g4_t_v91)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v92)) > _g4_s4 ? (28u + sizeof(_g4_t_v92)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v93)) > _g4_s5 ? (28u + sizeof(_g4_t_v93)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v94)) > _g4_s6 ? (32u + sizeof(_g4_t_v94)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v95)) > _g4_s7 ? (32u + sizeof(_g4_t_v95)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v96)) > _g4_s8 ? (36u + sizeof(_g4_t_v96)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v97)) > _g4_s9 ? (36u + sizeof(_g4_t_v97)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v98)) > _g4_s10 ? (40u + sizeof(_g4_t_v98)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v99)) > _g4_s11 ? (40u + sizeof(_g4_t_v99)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v100)) > _g4_s12 ? (44u + sizeof(_g4_t_v100)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v101)) > _g4_s13 ? (44u + sizeof(_g4_t_v101)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v102)) > _g4_s14 ? (56u + sizeof(_g4_t_v102)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v103)) > _g4_s15 ? (60u + sizeof(_g4_t_v103)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v104)) > _g4_s16 ? (64u + sizeof(_g4_t_v104)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v105)) > _g4_s17 ? (68u + sizeof(_g4_t_v105)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v106)) > _g4_s18 ? (72u + sizeof(_g4_t_v106)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v107)) > _g4_s19 ? (76u + sizeof(_g4_t_v107)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v108)) > _g4_s20 ? (96u + sizeof(_g4_t_v108)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v109)) > _g4_s21 ? (100u + sizeof(_g4_t_v109)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v110)) > _g4_s22 ? (104u + sizeof(_g4_t_v110)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v111)) > _g4_s23 ? (116u + sizeof(_g4_t_v111)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v112)) > _g4_s24 ? (120u + sizeof(_g4_t_v112)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v113)) > _g4_s25 ? (124u + sizeof(_g4_t_v113)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 8u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 16u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 20u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 24u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 28u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 28u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 32u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 32u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 36u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 36u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 40u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 40u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 44u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 44u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 56u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 60u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 64u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 68u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 72u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 76u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 96u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 100u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 104u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 116u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 120u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 124u);

  v3 = 0;
LABEL_2:
  while ( 1 )
  {
    result = *((uint8_t *)a2 + 33);
    if ( v3 >= result )
      return result;
    while ( 1 )
    {
      v103 = (uint8_t *)a2 + 4 * v3;
      v102 = *v103;
      if ( v102 <= 2 )
        break;
      if ( *v103 > 6u )
      {
        v112 = *v103;
        v113 = v103[1];
        if ( hkpBoxBoxCollisionDetection::isValidEdgeEdge((float *)a1, (int)(uintptr_t)(&v104)) )
        {
          *a3 = fminf(*a3, v111);
          v25 = *(int **)(a1 + 16);
          v26 = *v25;
          *v25 += 48;
          *(uint32_t *)(v26 + 32) = *((uint16_t *)v103 + 1);
          v27 = *(float **)(a1 + 20);
          v28 = (float)((float)((float)(v27[2] * v104) + (float)(v27[6] * v105)) + (float)(v27[10] * v106)) + v27[14];
          v29 = (float)((float)((float)(v27[3] * v104) + (float)(v27[7] * v105)) + (float)(v27[11] * v106)) + v27[15];
          v30 = (float)((float)((float)(v104 * *v27) + (float)(v105 * v27[4])) + (float)(v106 * v27[8])) + v27[12];
          *(float *)(v26 + 4) = (float)((float)((float)(v27[1] * v104) + (float)(v27[5] * v105)) + (float)(v27[9] * v106))
                              + v27[13];
          *(float *)(v26 + 8) = v28;
          *(float *)v26 = v30;
          *(float *)(v26 + 12) = v29;
          v31 = *(float **)(a1 + 20);
          ++v3;
          v32 = (float)(v31[2] * v108) + (float)(v31[6] * v109);
          v33 = (float)(v108 * *v31) + (float)(v109 * v31[4]);
          v34 = v31[10] * v110;
          v35 = v110 * v31[8];
          *(float *)(v26 + 20) = (float)((float)(v31[1] * v108) + (float)(v31[5] * v109)) + (float)(v31[9] * v110);
          *(float *)(v26 + 24) = v32 + v34;
          *(float *)(v26 + 16) = v33 + v35;
          *(float *)(v26 + 28) = v111;
          goto LABEL_2;
        }
        v24 = *v103;
      }
      else
      {
        v5 = v103[1] & 8;
        v6 = (v103[1] & 0x70) >> 4;
        v94 = v5 == 0 ? 8 : 0;
        v96 = v5 == 0 ? 4 : 0;
        v98 = v5 == 0 ? 2 : 0;
        v100 = v5 == 0;
        if ( (v6 & 1) != 0 )
          v7 = -1.0;
        else
          v7 = 1.0;
        v8 = 1.0;
        if ( (v6 & 2) != 0 )
          v8 = -1.0;
        v9 = 1.0;
        if ( (v6 & 4) != 0 )
          v9 = -1.0;
        v10 = v7 * *(float *)(a1 + 96);
        v11 = v8 * *(float *)(a1 + 100);
        v92 = v9 * *(float *)(a1 + 104);
        v12 = v10 - *(float *)(a1 + 80);
        v13 = v11 - *(float *)(a1 + 84);
        v14 = v92 - *(float *)(a1 + 88);
        v15 = (float)((float)(*(float *)(a1 + 32) * v12) + (float)(*(float *)(a1 + 36) * v13))
            + (float)(*(float *)(a1 + 40) * v14);
        v16 = (float)((float)(*(float *)(a1 + 48) * v12) + (float)(*(float *)(a1 + 52) * v13))
            + (float)(*(float *)(a1 + 56) * v14);
        v17 = (float)((float)(v12 * *(float *)(a1 + 64)) + (float)(v13 * *(float *)(a1 + 68)))
            + (float)(v14 * *(float *)(a1 + 72));
        v18 = fabs(v17);
        v19 = (*(float *)(a1 + 160) > fabs(v15)) | (2 * (*(float *)(a1 + 164) > fabs(v16)));
        v20 = *(float *)(a1 + 168) > v18;
        v21 = 4 * v20 + 8;
        v22 = 4 * v20;
        if ( *(float *)(a1 + 172) > v18 )
          v22 = v21;
        v23 = v22 | v19;
        v24 = *v103;
        if ( (v23 & 7) == 7 )
        {
          v71 = *(int **)(a1 + 16);
          v72 = *v71;
          *v71 += 48;
          if ( v100 )
            v15 = -v15;
          if ( v98 != 0 )
            v16 = -v16;
          v73 = v17;
          if ( v96 != 0 )
            v73 = -v17;
          if ( v94 != 0 )
            v17 = -v17;
          v74 = v16 - *(float *)(a1 + 116);
          v75 = v73 - *(float *)(a1 + 120);
          v76 = v17 - *(float *)(a1 + 124);
          v104 = v15 - *(float *)(a1 + 112);
          v105 = v74;
          v106 = v75;
          v107 = v76;
g4_m128_raw(v77) = *((unsigned int *)&v104 + v102 - 4);
          *a3 = fminf(*a3,g4_m128_lane<float>(v77, 0));
          v78 = 16 * (*v103 - 4);
          *(uint32_t *)(v72 + 32) = *((uint16_t *)v103 + 1);
          v79 = *(float **)(a1 + 20);
          v80 = (float)((float)((float)(v79[1] * v10) + (float)(v79[5] * v11)) + (float)(v79[9] * v92)) + v79[13];
          v81 = (float)((float)((float)(v79[2] * v10) + (float)(v79[6] * v11)) + (float)(v79[10] * v92)) + v79[14];
          v82 = (float)((float)((float)(v79[3] * v10) + (float)(v79[7] * v11)) + (float)(v79[11] * v92)) + v79[15];
          *(float *)v72 = (float)((float)((float)(v10 * *v79) + (float)(v11 * v79[4])) + (float)(v79[8] * v92))
                        + v79[12];
          *(float *)(v72 + 4) = v80;
          *(float *)(v72 + 8) = v81;
          *(float *)(v72 + 12) = v82;
          v83 = (unsigned int *)(*(uint32_t *)(a1 + 24) + v78);
g4_m128_raw(v84) = *v83;
          if ( v100 )
            v84 = _mm_xor_ps(v84, *(__m128 *)&dword_1C7C1B0);
g4_m128_raw(v85) = v83[1];
          if ( v98 != 0 )
            v85 = _mm_xor_ps(v85, *(__m128 *)&dword_1C7C1B0);
g4_m128_raw(v86) = v83[2];
          if ( v96 != 0 )
            v86 = _mm_xor_ps(v86, *(__m128 *)&dword_1C7C1B0);
          *(uint64_t *)&v87 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v84, v85), 0);
          *((uint64_t *)&v87 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v86, v77), 0);
          *(g4_int128_t *)(v72 + 16) = v87;
          ++v3;
          goto LABEL_2;
        }
      }
LABEL_14:
      if ( v24 <= 6u )
        --*((uint8_t *)a2 + 32);
      (*(void (**)(uint32_t, uint32_t, uint32_t))(**(uint32_t **)(a1 + 12) + 28))(
        *(uint32_t *)(a1 + 12),
        *((uint16_t *)a2 + 2 * v3 + 1),
        *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4));
      hkpBoxBoxManifold::removePoint(a2, v3);
      result = *((uint8_t *)a2 + 33);
      if ( v3 >= result )
        return result;
    }
    v36 = -((v103[1] & 8) == 0);
    v37 = (v103[1] & 0x70) >> 4;
    v91 = v36 & 4;
    v93 = v36 & 2;
    v95 = v36 & 1;
    v101 = (v103[1] & 8) != 0 ? 8 : 0;
    v97 = (v103[1] & 8) != 0 ? 4 : 0;
    v99 = (v103[1] & 8) != 0 ? 2 : 0;
    v90 = (v103[1] & 8) != 0;
    if ( (v37 & 1) != 0 )
      v38 = -1.0;
    else
      v38 = 1.0;
    v39 = 1.0;
    if ( (v37 & 2) != 0 )
      v39 = -1.0;
    v40 = 1.0;
    if ( (v37 & 4) != 0 )
      v40 = -1.0;
    v41 = v38 * *(float *)(a1 + 112);
    v42 = v39 * *(float *)(a1 + 116);
g4_m128_raw(v44) = *(unsigned int *)(a1 + 32);
    v43 = v40 * *(float *)(a1 + 120);
    *(float *)g4_m128_ptr<int32_t>(v44) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v44) * v41) + (float)(*(float *)(a1 + 48) * v42))
                                    + (float)(*(float *)(a1 + 64) * v43))
                            + *(float *)(a1 + 80);
    v45 = (float)((float)((float)(*(float *)(a1 + 36) * v41) + (float)(*(float *)(a1 + 52) * v42))
                + (float)(*(float *)(a1 + 68) * v43))
        + *(float *)(a1 + 84);
    v46 = (float)((float)((float)(*(float *)(a1 + 40) * v41) + (float)(*(float *)(a1 + 56) * v42))
                + (float)(*(float *)(a1 + 72) * v43))
        + *(float *)(a1 + 88);
    v88 = (float)((float)((float)(*(float *)(a1 + 60) * v42) + (float)(*(float *)(a1 + 44) * v41))
                + (float)(*(float *)(a1 + 76) * v43))
        + *(float *)(a1 + 92);
    v89 = fabs(v46);
    v47 = *(float *)(a1 + 152);
    v48 = (*(float *)(a1 + 144) > fabs(*(float *)g4_m128_ptr<int32_t>(v44))) | (2 * (*(float *)(a1 + 148) > fabs(v45)));
    v49 = 4 * (v47 > v89);
    if ( *(float *)(a1 + 156) > fabs(v88) )
      v49 = 4 * (v47 > v89) + 8;
    v50 = v49 | v48;
    v24 = *v103;
    if ( (v50 & 7) != 7 )
      goto LABEL_14;
    v51 = *(int **)(a1 + 16);
    v52 = *v51;
    *v51 += 48;
    v53 = COERCE_FLOAT(_mm_cvtsi128_si32(v44));
    if ( v90 )
      v53 = -v53;
    v54 = v45;
    if ( v99 != 0 )
      v54 = -v45;
    v55 = v46;
    if ( v97 != 0 )
      v55 = -v46;
    v56 = v88;
    if ( v101 != 0 )
      v56 = -v88;
    v57 = v54 - *(float *)(a1 + 100);
    v58 = v55 - *(float *)(a1 + 104);
    v59 = v56 - *(float *)(a1 + 108);
    v104 = v53 - *(float *)(a1 + 96);
    v105 = v57;
    v106 = v58;
    v107 = v59;
g4_m128_raw(v60) = *((unsigned int *)&v104 + v102);
    *a3 = fminf(*a3,g4_m128_lane<float>(v60, 0));
    v61 = 16 * *v103;
    *(uint32_t *)(v52 + 32) = *((uint16_t *)v103 + 1);
    v62 = *(float **)(a1 + 24);
    v63 = (float)((float)((float)(v62[1] * v41) + (float)(v62[5] * v42)) + (float)(v62[9] * v43)) + v62[13];
    v64 = (float)((float)((float)(v62[2] * v41) + (float)(v62[6] * v42)) + (float)(v62[10] * v43)) + v62[14];
    v65 = (float)((float)((float)(v62[3] * v41) + (float)(v62[7] * v42)) + (float)(v62[11] * v43)) + v62[15];
    *(float *)v52 = (float)((float)((float)(v41 * *v62) + (float)(v42 * v62[4])) + (float)(v43 * v62[8])) + v62[12];
    *(float *)(v52 + 4) = v63;
    *(float *)(v52 + 8) = v64;
    *(float *)(v52 + 12) = v65;
    v66 = (unsigned int *)(*(uint32_t *)(a1 + 20) + v61);
g4_m128_raw(v67) = *v66;
    if ( v95 != 0 )
      v67 = _mm_xor_ps(v67, *(__m128 *)&dword_1C7C1B0);
g4_m128_raw(v68) = v66[1];
    if ( v93 != 0 )
      v68 = _mm_xor_ps(v68, *(__m128 *)&dword_1C7C1B0);
g4_m128_raw(v69) = v66[2];
    if ( v91 != 0 )
      v69 = _mm_xor_ps(v69, *(__m128 *)&dword_1C7C1B0);
    *(uint64_t *)&v70 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v67, v68), 0);
    *((uint64_t *)&v70 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v69, v60), 0);
    *(g4_int128_t *)(v52 + 16) = v70;
    ++v3;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxCollisionDetection::calculateClosestPoint  (binary VA: 0x16fe720)
// Original: hkpBoxBoxCollisionDetection::calculateClosestPoint
// ----------------------------------------------------------------------------
hkpBoxBoxCollisionDetection::Self * hkpBoxBoxCollisionDetection::calculateClosestPoint(hkpBoxBoxCollisionDetection::Self *self, hkContactPoint::Self *a2, g4_int128_t *a3)
{
  hkContactPoint::Self *v3;
  hkpBoxBoxCollisionDetection::Self *v4;
  float v5; // xmm0_4
  float v6; // xmm4_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm5_4
  float v10; // xmm5_4
  float v11; // xmm4_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  float *v19;
  float v20; // xmm7_4
  __m128 v21;
  __m128 v22;
  __m128 v23;
  __m128 v24;
  __m128 v25;
  __m128 v26;
  __m128 v27;
  uint8_t v28;
  g4_int128_t v29;
  g4_int128_t v30;
  float *v31;
  uint8_t v32;
  float *v33;
  float v34; // xmm7_4
  float *v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef g4_int128_t *_g4_t_v43;
  typedef float _g4_t_v44;
  typedef int _g4_t_v45;
  typedef uint8_t _g4_t_v46[2];
  typedef int16_t _g4_t_v47;
  typedef uint8_t _g4_t_v48[64];
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef hkpBoxBoxCollisionDetection::Self **_g4_t_v62;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v36)) > _g4_s0 ? (0u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v37)) > _g4_s1 ? (4u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v38)) > _g4_s2 ? (8u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v39)) > _g4_s3 ? (12u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v40)) > _g4_s4 ? (16u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v41)) > _g4_s5 ? (20u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v42)) > _g4_s6 ? (24u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v43)) > _g4_s7 ? (28u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v44)) > _g4_s8 ? (32u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v45)) > _g4_s9 ? (36u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v46)) > _g4_s10 ? (40u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (42u + sizeof(_g4_t_v47)) > _g4_s11 ? (42u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v48)) > _g4_s12 ? (56u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (120u + sizeof(_g4_t_v49)) > _g4_s13 ? (120u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (124u + sizeof(_g4_t_v50)) > _g4_s14 ? (124u + sizeof(_g4_t_v50)) : _g4_s14,
    _g4_s16 = (128u + sizeof(_g4_t_v51)) > _g4_s15 ? (128u + sizeof(_g4_t_v51)) : _g4_s15,
    _g4_s17 = (136u + sizeof(_g4_t_v52)) > _g4_s16 ? (136u + sizeof(_g4_t_v52)) : _g4_s16,
    _g4_s18 = (140u + sizeof(_g4_t_v53)) > _g4_s17 ? (140u + sizeof(_g4_t_v53)) : _g4_s17,
    _g4_s19 = (144u + sizeof(_g4_t_v54)) > _g4_s18 ? (144u + sizeof(_g4_t_v54)) : _g4_s18,
    _g4_s20 = (152u + sizeof(_g4_t_v55)) > _g4_s19 ? (152u + sizeof(_g4_t_v55)) : _g4_s19,
    _g4_s21 = (156u + sizeof(_g4_t_v56)) > _g4_s20 ? (156u + sizeof(_g4_t_v56)) : _g4_s20,
    _g4_s22 = (160u + sizeof(_g4_t_v57)) > _g4_s21 ? (160u + sizeof(_g4_t_v57)) : _g4_s21,
    _g4_s23 = (164u + sizeof(_g4_t_v58)) > _g4_s22 ? (164u + sizeof(_g4_t_v58)) : _g4_s22,
    _g4_s24 = (168u + sizeof(_g4_t_v59)) > _g4_s23 ? (168u + sizeof(_g4_t_v59)) : _g4_s23,
    _g4_s25 = (172u + sizeof(_g4_t_v60)) > _g4_s24 ? (172u + sizeof(_g4_t_v60)) : _g4_s24,
    _g4_s26 = (176u + sizeof(_g4_t_v61)) > _g4_s25 ? (176u + sizeof(_g4_t_v61)) : _g4_s25,
    _g4_s27 = (192u + sizeof(_g4_t_v62)) > _g4_s26 ? (192u + sizeof(_g4_t_v62)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 0u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 4u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 42u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 56u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 120u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 124u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 128u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 136u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 140u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 144u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 152u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 156u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 160u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 164u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 168u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 172u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 176u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 192u);

  v62 = &self;
  v3 = a2;
  v4 = self;
  v43 = a3;
  hkpBoxBoxManifold::Construct((hkpBoxBoxManifold::Self *)v48);
  *((uint32_t *)v3 + 48) = *((uint32_t *)v3 + 20);
  *((uint32_t *)v3 + 49) = *((uint32_t *)v3 + 21);
  v5 = *((float *)v3 + 48);
  *((uint32_t *)v3 + 50) = *((uint32_t *)v3 + 22);
  v6 = *((float *)v3 + 49);
  v7 = *((float *)v3 + 8);
  *((uint32_t *)v3 + 51) = *((uint32_t *)v3 + 23);
  v8 = *((float *)v3 + 9) * v6;
  v47 = 0;
  v55 = 0.0;
  v9 = *((float *)v3 + 13);
  v56 = 0.0;
  v10 = v9 * v6;
  v57 = 0.0;
  v11 = v6 * *((float *)v3 + 17);
  v58 = 0;
  v12 = (float)(v7 * v5) + v8;
  v13 = *((float *)v3 + 12);
  v59 = 0;
  v14 = *((float *)v3 + 50);
  v15 = (float)(v13 * v5) + v10;
  v16 = (float)((float)(v5 * *((float *)v3 + 16)) + v11) + (float)(*((float *)v3 + 18) * v14);
  v17 = v12 + (float)(v14 * *((float *)v3 + 10));
  *((float *)v3 + 53) = v15 + (float)(*((float *)v3 + 14) * v14);
  *((float *)v3 + 54) = v16;
  *((float *)v3 + 52) = v17;
  *((float *)v3 + 55) = v16;
  hkpBoxBoxCollisionDetection::checkIntersection((hkpBoxBoxCollisionDetection::Self *)&v45, v3, (float *)v3 + 32);
  if ( v45 != 0 || hkpBoxBoxCollisionDetection::findClosestPoint((float *)v3, (int)(uintptr_t)(v48), v46, (int)(uintptr_t)(&v49)) != 2 )
  {
    *(uint8_t *)v4 = 0;
    return v4;
  }
  if ( v61 <= 2 )
  {
g4_m128_raw(v24) = LODWORD(v52);
    v35 = *((float **)v3 + 6);
g4_m128_raw(v21) = *(unsigned int *)v35;
g4_m128_raw(v22) = *((unsigned int *)v35 + 1);
    v32 = v46[0];
g4_m128_lane<float>(v21, 0) = (float)((float)((float)(g4_m128_lane<float>(v21, 0) * v52) + (float)(v35[4] * v53)) + (float)(v35[8] * v54))
                    + v35[12];
g4_m128_raw(v23) = *((unsigned int *)v35 + 2);
g4_m128_lane<float>(v22, 0) = (float)((float)((float)(g4_m128_lane<float>(v22, 0) * v52) + (float)(v35[5] * v53)) + (float)(v35[9] * v54))
                    + v35[13];
g4_m128_lane<float>(v23, 0) = (float)((float)((float)(g4_m128_lane<float>(v23, 0) * v52) + (float)(v35[6] * v53)) + (float)(v35[10] * v54))
                    + v35[14];
g4_m128_lane<float>(v24, 0) = (float)((float)((float)(v52 * v35[3]) + (float)(v53 * v35[7])) + (float)(v54 * v35[11])) + v35[15];
    v33 = (float *)(*((uint32_t *)v3 + 5) + 16 * v46[0]);
    goto LABEL_12;
  }
  if ( v61 <= 6 )
  {
g4_m128_raw(v24) = LODWORD(v49);
    v31 = *((float **)v3 + 5);
g4_m128_raw(v21) = *(unsigned int *)v31;
g4_m128_raw(v22) = *((unsigned int *)v31 + 1);
    v32 = v46[0];
g4_m128_lane<float>(v21, 0) = (float)((float)((float)(g4_m128_lane<float>(v21, 0) * v49) + (float)(v31[4] * v50)) + (float)(v31[8] * v51))
                    + v31[12];
g4_m128_raw(v23) = *((unsigned int *)v31 + 2);
g4_m128_lane<float>(v22, 0) = (float)((float)((float)(g4_m128_lane<float>(v22, 0) * v49) + (float)(v31[5] * v50)) + (float)(v31[9] * v51))
                    + v31[13];
g4_m128_lane<float>(v23, 0) = (float)((float)((float)(g4_m128_lane<float>(v23, 0) * v49) + (float)(v31[6] * v50)) + (float)(v31[10] * v51))
                    + v31[14];
g4_m128_lane<float>(v24, 0) = (float)((float)((float)(v49 * v31[3]) + (float)(v50 * v31[7])) + (float)(v51 * v31[11])) + v31[15];
    v33 = (float *)(*((uint32_t *)v3 + 6) + 16 * (v46[0] - 4));
LABEL_12:
g4_m128_raw(v25) = *(unsigned int *)v33;
    if ( (v59 & 1) == 0 )
      v25 = _mm_xor_ps(v25, g4_m128_from<__m128>(0x80000000));
g4_m128_raw(v26) = *((unsigned int *)v33 + 1);
    if ( (~(uint8_t)v59 & 2) != 0 )
      v26 = _mm_xor_ps(v26, g4_m128_from<__m128>(0x80000000));
    v34 = v33[2];
    if ( (~(uint8_t)v59 & 4) != 0 )
      v34 = -v34;
    v44 = v34;
g4_m128_raw(v27) = v60;
    v28 = v32;
    goto LABEL_8;
  }
  v19 = *((float **)v3 + 5);
  v42 = v19[2];
  v41 = v19[5];
  v40 = v19[8];
  v20 = v19[4];
  v39 = v19[9];
g4_m128_raw(v21) = LODWORD(v49);
  v38 = v19[1];
  v37 = v19[6];
  v36 = v19[10];
g4_m128_raw(v22) = LODWORD(v49);
g4_m128_lane<float>(v21, 0) = (float)((float)((float)(v49 * *v19) + (float)(v50 * v20)) + (float)(v40 * v51)) + v19[12];
g4_m128_raw(v23) = LODWORD(v42);
g4_m128_raw(v24) = LODWORD(v49);
g4_m128_lane<float>(v22, 0) = (float)((float)((float)(v49 * v38) + (float)(v41 * v50)) + (float)(v39 * v51)) + v19[13];
g4_m128_raw(v25) = *(unsigned int *)v19;
g4_m128_lane<float>(v23, 0) = (float)((float)((float)(v42 * v49) + (float)(v37 * v50)) + (float)(v36 * v51)) + v19[14];
g4_m128_lane<float>(v24, 0) = (float)((float)((float)(v49 * v19[3]) + (float)(v50 * v19[7])) + (float)(v51 * v19[11])) + v19[15];
g4_m128_lane<float>(v25, 0) = (float)((float)(*v19 * v55) + (float)(v20 * v56)) + (float)(v40 * v57);
g4_m128_raw(v26) = LODWORD(v38);
g4_m128_lane<float>(v26, 0) = (float)((float)(v38 * v55) + (float)(v41 * v56)) + (float)(v39 * v57);
  v44 = (float)((float)(v56 * v37) + (float)(v42 * v55)) + (float)(v36 * v57);
g4_m128_raw(v27) = v60;
  v28 = v46[0];
LABEL_8:
  if ( v28 > 2u )
  {
g4_m128_lane<float>(v21, 0) =g4_m128_lane<float>(v21, 0) - (float)(g4_m128_lane<float>(v27, 0) *g4_m128_lane<float>(v25, 0));
g4_m128_lane<float>(v22, 0) =g4_m128_lane<float>(v22, 0) - (float)(g4_m128_lane<float>(v27, 0) *g4_m128_lane<float>(v26, 0));
g4_m128_lane<float>(v23, 0) =g4_m128_lane<float>(v23, 0) - (float)(v44 *g4_m128_lane<float>(v27, 0));
g4_m128_lane<float>(v24, 0) =g4_m128_lane<float>(v24, 0) - (float)(g4_m128_lane<float>(v27, 0) *g4_m128_lane<float>(v27, 0));
  }
  *(uint8_t *)v4 = 1;
  *(uint64_t *)&v29 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v21, v22), 0);
  *(uint64_t *)&v30 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v25, v26), 0);
  *((uint64_t *)&v29 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v23, v24), 0);
  *v43 = v29;
  *((uint64_t *)&v30 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v44)), v27), 0);
  v43[1] = v30;
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxCollisionDetection::calcManifold  (binary VA: 0x16ff1d0)
// Original: hkpBoxBoxCollisionDetection::calcManifold
// ----------------------------------------------------------------------------
int16_t * hkpBoxBoxCollisionDetection::calcManifold(hkpBoxBoxCollisionDetection::Self *self, hkpBoxBoxManifold::Self *a2)
{
  hkpBoxBoxCollisionDetection::Self *v2;
  float v3; // xmm2_4
  hkpBoxBoxManifold::Self *v4;
  float v5; // xmm1_4
  float v6; // xmm5_4
  float v7; // xmm0_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  int16_t *result;
  float v15; // xmm0_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm1_4
  float v19; // xmm5_4
  float v20; // xmm2_4
  float *v21;
  float v22; // xmm1_4
  int v23;
  float v24; // xmm1_4
  float v25; // xmm4_4
  float v26; // xmm3_4
  int16_t *v27;
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  float *v32;
  float v33; // xmm4_4
  float v34; // xmm3_4
  float v35; // xmm2_4
  int i;
  int *v37;
  float v38; // xmm0_4
  float v39; // xmm4_4
  float v40; // xmm2_4
  float v41; // xmm3_4
  float v42; // xmm1_4
  float v43; // xmm0_4
  float v44; // xmm4_4
  float v45; // xmm2_4
  float *v46;
  int v47;
  typedef int16_t *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int16_t *_g4_t_v52;
  typedef float _g4_t_v53[4];
  typedef unsigned int _g4_t_v54[4];
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
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef hkpBoxBoxCollisionDetection::Self **_g4_t_v70;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v48)) > _g4_s0 ? (0u + sizeof(_g4_t_v48)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v49)) > _g4_s1 ? (20u + sizeof(_g4_t_v49)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v50)) > _g4_s2 ? (32u + sizeof(_g4_t_v50)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v51)) > _g4_s3 ? (32u + sizeof(_g4_t_v51)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v52)) > _g4_s4 ? (40u + sizeof(_g4_t_v52)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v53)) > _g4_s5 ? (44u + sizeof(_g4_t_v53)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v54)) > _g4_s6 ? (60u + sizeof(_g4_t_v54)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v55)) > _g4_s7 ? (76u + sizeof(_g4_t_v55)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v56)) > _g4_s8 ? (80u + sizeof(_g4_t_v56)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v57)) > _g4_s9 ? (84u + sizeof(_g4_t_v57)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v58)) > _g4_s10 ? (88u + sizeof(_g4_t_v58)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v59)) > _g4_s11 ? (92u + sizeof(_g4_t_v59)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v60)) > _g4_s12 ? (96u + sizeof(_g4_t_v60)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v61)) > _g4_s13 ? (100u + sizeof(_g4_t_v61)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v62)) > _g4_s14 ? (104u + sizeof(_g4_t_v62)) : _g4_s14,
    _g4_s16 = (124u + sizeof(_g4_t_v63)) > _g4_s15 ? (124u + sizeof(_g4_t_v63)) : _g4_s15,
    _g4_s17 = (128u + sizeof(_g4_t_v64)) > _g4_s16 ? (128u + sizeof(_g4_t_v64)) : _g4_s16,
    _g4_s18 = (132u + sizeof(_g4_t_v65)) > _g4_s17 ? (132u + sizeof(_g4_t_v65)) : _g4_s17,
    _g4_s19 = (136u + sizeof(_g4_t_v66)) > _g4_s18 ? (136u + sizeof(_g4_t_v66)) : _g4_s18,
    _g4_s20 = (140u + sizeof(_g4_t_v67)) > _g4_s19 ? (140u + sizeof(_g4_t_v67)) : _g4_s19,
    _g4_s21 = (144u + sizeof(_g4_t_v68)) > _g4_s20 ? (144u + sizeof(_g4_t_v68)) : _g4_s20,
    _g4_s22 = (148u + sizeof(_g4_t_v69)) > _g4_s21 ? (148u + sizeof(_g4_t_v69)) : _g4_s21,
    _g4_s23 = (164u + sizeof(_g4_t_v70)) > _g4_s22 ? (164u + sizeof(_g4_t_v70)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 0u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 40u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 60u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 76u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 80u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 84u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 88u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 92u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 96u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 100u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 104u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 124u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 128u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 132u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 136u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 140u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 144u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 148u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 164u);

  v70 = &self;
  v2 = self;
  v3 = *((float *)self + 8);
  v4 = a2;
  v5 = *((float *)self + 9);
  v6 = *((float *)self + 13);
  *((uint32_t *)self + 48) = *((uint32_t *)self + 20);
  v7 = *((float *)v2 + 48);
  *((uint32_t *)v2 + 49) = *((uint32_t *)v2 + 21);
  v8 = *((float *)v2 + 49);
  *((uint32_t *)v2 + 50) = *((uint32_t *)v2 + 22);
  *((uint32_t *)v2 + 51) = *((uint32_t *)v2 + 23);
  v9 = *((float *)v2 + 50);
  v10 = (float)(v3 * v7) + (float)(v5 * v8);
  v11 = (float)(*((float *)v2 + 12) * v7) + (float)(v6 * v8);
  v12 = (float)((float)(v7 * *((float *)v2 + 16)) + (float)(v8 * *((float *)v2 + 17)))
      + (float)(*((float *)v2 + 18) * v9);
  v13 = v10 + (float)(v9 * *((float *)v2 + 10));
  *((float *)v2 + 53) = v11 + (float)(*((float *)v2 + 14) * v9);
  *((float *)v2 + 54) = v12;
  *((float *)v2 + 52) = v13;
  *((float *)v2 + 55) = v12;
  v53[0] = 3.40282e38f;
  hkpBoxBoxCollisionDetection::refreshManifold((int)(uintptr_t)(v2), v4, v53);
  result = (int16_t *)*((uint8_t *)v4 + 33);
  if ( (uint8_t)(uintptr_t)(result) <= 1u )
  {
    *((uint32_t *)v4 + 15) = 0;
    goto LABEL_4;
  }
  if ( *((float *)v4 + 15) >= 0.0 )
  {
    v15 = *((float *)v4 + 12);
    v16 = *((float *)v4 + 13);
    v17 = *((float *)v4 + 14);
    v18 = (float)(*((float *)v2 + 12) * v15) + (float)(*((float *)v2 + 13) * v16);
    v19 = *((float *)v2 + 14) * v17;
    v20 = (float)((float)(*((float *)v2 + 8) * v15) + (float)(*((float *)v2 + 9) * v16))
        + (float)(v17 * *((float *)v2 + 10));
    v61 = (float)((float)(v15 * *((float *)v2 + 16)) + (float)(v16 * *((float *)v2 + 17)))
        + (float)(*((float *)v2 + 18) * v17);
    v62 = v61;
    *((uint32_t *)v4 + 15) = -1082130432;
    v59 = v20;
    v60 = v18 + v19;
    *((uint32_t *)v4 + 9) = hkVector4UtilImpl_float_id_0c2ad1::packQuaternionIntoInt32((hkVector4UtilImpl<float> *)&v59);
    LOBYTE(result) = *((uint8_t *)v4 + 33);
LABEL_4:
    v50 = 1;
    goto LABEL_5;
  }
  v23 = *((uint32_t *)v4 + 9);
  LOWORD(v59) = (uint8_t)v23;
  LOWORD(v60) = BYTE2(v23);
  HIWORD(v59) = BYTE1(v23);
  v54[1] = BYTE1(v23);
  v54[0] = (uint8_t)v23;
  v54[2] = BYTE2(v23);
  v55 = 0.0;
  v56 = 0.0;
  v24 = (float)((uint8_t)v23 - 128) * 0.00859375f;
  v25 = (float)(BYTE1(v23) - 128) * 0.00859375f;
  v26 = (float)(BYTE2(v23) - 128) * 0.00859375f;
  if ( (float)((float)((float)((float)((float)((float)(*((float *)v2 + 8) * v24) + (float)(*((float *)v2 + 12) * v25))
                                     + (float)(*((float *)v2 + 16) * v26))
                             * *((float *)v4 + 12))
                     + (float)((float)((float)((float)(*((float *)v2 + 9) * v24) + (float)(*((float *)v2 + 13) * v25))
                                     + (float)(*((float *)v2 + 17) * v26))
                             * *((float *)v4 + 13)))
             + (float)((float)((float)((float)(v24 * *((float *)v2 + 10)) + (float)(v25 * *((float *)v2 + 14)))
                             + (float)(v26 * *((float *)v2 + 18)))
                     * *((float *)v4 + 14))) < 0.95f )
    goto LABEL_4;
  if ( *((uint8_t *)v4 + 34) != 0 )
    return result;
  v50 = 0;
LABEL_5:
  if ( (uint8_t)(uintptr_t)(result) != 0 )
  {
    v22 = 0.05f * *((float *)v2 + 32);
    v62 = 3.40282e38f;
    v21 = &v59;
    v59 = v53[0] - v22;
    v60 = v53[0] - v22;
    v61 = v53[0] - v22;
  }
  else
  {
    v21 = (float *)((char *)v2 + 128);
  }
  hkpBoxBoxCollisionDetection::checkIntersection((hkpBoxBoxCollisionDetection::Self *)&v52, v2, v21);
  result = v52;
  if ( v52 == nullptr )
  {
    HIWORD(v54[0]) = 0;
    v63 = 0.0;
    v64 = 0.0;
    v65 = 0.0;
    v66 = 0;
    v68 = 0;
    v67 = 0;
    result = (int16_t *)hkpBoxBoxCollisionDetection::findClosestPoint(
                          (float *)v2,
                          (int)(uintptr_t)(v4),
                          (uint8_t *)v54,
                          (int)(uintptr_t)(&v59));
    v27 = result;
    if ( result == nullptr || v50 == 0 )
    {
LABEL_14:
      if ( v27 == (int16_t *)(uintptr_t)(uint16_t *)&dword_0 + 1 )
      {
        result = (int16_t *)hkpBoxBoxCollisionDetection::addPoint(
                              (uint32_t *)(&v52),
                              (float *)v2,
                              v4,
                              (int)(uintptr_t)(&v59),
                              (uint8_t *)v54);
        if ( v52 == nullptr )
          return (int16_t *)hkpBoxBoxCollisionDetection::findAdditionalManifoldPoints((float *)v2, v4, v54[0]);
      }
      return result;
    }
    v28 = *((float *)v4 + 15);
    v29 = *((float *)v4 + 12);
    v30 = *((float *)v4 + 13);
    v31 = *((float *)v4 + 14);
    result = (int16_t *)~v67;
    if ( v69 <= 2 )
    {
      v46 = (float *)((char *)&g_vectorfConstants + 16 * LOBYTE(v54[0]) + 464);
      v29 = *v46;
      v30 = v46[1];
      v31 = v46[2];
      if ( (v67 & 1) == 0 )
        v29 = -v29;
      if ( (~(uint8_t)v67 & 2) != 0 )
        v30 = -v30;
    }
    else
    {
      if ( v69 > 6 )
      {
        if ( v27 == (int16_t *)(uintptr_t)(uint16_t *)&dword_0 + 1 )
        {
          v29 = v63;
          v30 = v64;
          v31 = v65;
        }
        goto LABEL_23;
      }
      v29 = *((float *)v2 + 4 * LOBYTE(v54[0]) - 8);
      if ( (v67 & 1) == 0 )
        v29 = -v29;
      v30 = *((float *)v2 + 4 * LOBYTE(v54[0]) - 7);
      if ( (~(uint8_t)v67 & 2) != 0 )
        v30 = -v30;
      v31 = *((float *)v2 + 4 * LOBYTE(v54[0]) - 6);
    }
    if ( (~(uint8_t)v67 & 4) != 0 )
      v31 = -v31;
LABEL_23:
    *((float *)v4 + 12) = v29;
    *((float *)v4 + 13) = v30;
    *((float *)v4 + 14) = v31;
    if ( v28 < 0.0 )
    {
      v32 = *((float **)v2 + 5);
      v51 = 0;
      v48 = v27;
      v33 = (float)((float)(*v32 * v29) + (float)(v32[4] * v30)) + (float)(v32[8] * v31);
      v34 = (float)((float)(v32[1] * v29) + (float)(v32[5] * v30)) + (float)(v32[9] * v31);
      v35 = (float)((float)(v29 * v32[2]) + (float)(v30 * v32[6])) + (float)(v31 * v32[10]);
      result = (int16_t *)*((uint8_t *)v4 + 33);
      v49 = -1431655765 * ((**((uint32_t **)v2 + 4) - (*((uint32_t *)v2 + 4) + 16)) >> 4) - (uint32_t)(uintptr_t)(result);
      for ( i = (int)(uintptr_t)(result); v51 < i; i = (int)(uintptr_t)(result) )
      {
        while ( 1 )
        {
          v37 = *((int **)v2 + 4);
          result = (int16_t *)&v37[12 * v49 + 4];
          if ( (float)((float)((float)(*(float *)&v37[12 * v49 + 8] * v33) + (float)(*(float *)&v37[12 * v49 + 9] * v34))
                     + (float)(*(float *)&v37[12 * v49 + 10] * v35)) < 0.95f )
            break;
          ++v51;
          ++v49;
          if ( v51 >= i )
            goto LABEL_28;
        }
        v47 = *v37;
        *(uint32_t *)result = *(uint32_t *)(v47 - 48);
        *((uint32_t *)result + 1) = *(uint32_t *)(v47 - 44);
        *((uint32_t *)result + 2) = *(uint32_t *)(v47 - 40);
        *((uint32_t *)result + 3) = *(uint32_t *)(v47 - 36);
        *((uint32_t *)result + 4) = *(uint32_t *)(v47 - 32);
        *((uint32_t *)result + 5) = *(uint32_t *)(v47 - 28);
        *((uint32_t *)result + 6) = *(uint32_t *)(v47 - 24);
        *((uint32_t *)result + 7) = *(uint32_t *)(v47 - 20);
        *((uint32_t *)result + 8) = *(uint32_t *)(v47 - 16);
        *((uint32_t *)result + 9) = *(uint32_t *)(v47 - 12);
        *((uint32_t *)result + 10) = *(uint32_t *)(v47 - 8);
        *((uint32_t *)result + 11) = *(uint32_t *)(v47 - 4);
        if ( *((uint8_t *)v4 + 4 * v51) <= 6u )
          --*((uint8_t *)v4 + 32);
        (*(void (**)(uint32_t, uint32_t, uint32_t))(**((uint32_t **)v2 + 3) + 28))(
          *((uint32_t *)v2 + 3),
          *((uint16_t *)v4 + 2 * v51 + 1),
          *(uint32_t *)(*((uint32_t *)v2 + 4) + 4));
        hkpBoxBoxManifold::removePoint(v4, v51);
        **((uint32_t **)v2 + 4) -= 48;
        result = (int16_t *)*((uint8_t *)v4 + 33);
      }
LABEL_28:
      v27 = v48;
      if ( i <= 1 )
      {
        *((uint32_t *)v4 + 15) = 0;
      }
      else
      {
        v38 = *((float *)v4 + 12);
        v39 = *((float *)v4 + 13);
        v40 = (float)(*((float *)v2 + 8) * v38) + (float)(*((float *)v2 + 9) * v39);
        v41 = *((float *)v4 + 14);
        v42 = (float)(*((float *)v2 + 12) * v38) + (float)(*((float *)v2 + 13) * v39);
        v43 = (float)(v38 * *((float *)v2 + 16)) + (float)(v39 * *((float *)v2 + 17));
        v44 = *((float *)v2 + 18) * v41;
        v45 = v40 + (float)(v41 * *((float *)v2 + 10));
        v56 = v42 + (float)(*((float *)v2 + 14) * v41);
        v57 = v43 + v44;
        v58 = v43 + v44;
        v55 = v45;
        *((uint32_t *)v4 + 9) = hkVector4UtilImpl_float_id_0c2ad1::packQuaternionIntoInt32((hkVector4UtilImpl<float> *)&v55);
        result = (int16_t *)&g_vectorfConstants;
        v27 = v48;
        *((uint32_t *)v4 + 15) = -1082130432;
      }
    }
    goto LABEL_14;
  }
  return result;
}


