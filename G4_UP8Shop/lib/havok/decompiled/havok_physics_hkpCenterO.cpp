#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpCenterO.h"

// ----------------------------------------------------------------------------
// Function: hkpCenterOfMassChangerModifierConstraintAtom::staticClass  (binary VA: 0x174aeb0)
// Original: hkpCenterOfMassChangerModifierConstraintAtom::staticClass
// ----------------------------------------------------------------------------
void * hkpCenterOfMassChangerModifierConstraintAtom::staticClass()
{
  return &hkpCenterOfMassChangerModifierConstraintAtomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpCenterOfMassChangerModifierConstraintAtom::collisionResponseBeginCallback  (binary VA: 0x1774970)
// Original: hkpCenterOfMassChangerModifierConstraintAtom::collisionResponseBeginCallback
// ----------------------------------------------------------------------------
float * hkpCenterOfMassChangerModifierConstraintAtom::collisionResponseBeginCallback(float *a1, int a2, int a3, float *a4, int a5, float *a6)
{
  float v6; // xmm6_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm7_4
  float *v10;
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm4_4
  float v14; // xmm6_4
  float v15; // xmm5_4
  float v16; // xmm0_4
  float *result;
  float v18; // xmm4_4
  float v19; // xmm5_4
  float v20;
  float v21; // xmm1_4
  float v22; // xmm5_4
  float v23; // xmm7_4
  float v24; // xmm5_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28;
  float v29;
  float v30;
  float v31;

  v6 = a1[8];
  v7 = a1[9];
  v8 = a1[10];
  v9 = a1[13];
  v10 = *(float **)(a3 + 80);
  v11 = (float)((float)(*v10 * v6) + (float)(v10[4] * v7)) + (float)(v10[8] * v8);
  v12 = (float)((float)(v10[1] * v6) + (float)(v10[5] * v7)) + (float)(v10[9] * v8);
  v13 = (float)(v10[2] * v6) + (float)(v10[6] * v7);
  v14 = (float)(v6 * v10[3]) + (float)(v7 * v10[7]);
  v15 = v10[10] * v8;
  v16 = v8 * v10[11];
  result = *(float **)(a5 + 80);
  v18 = v13 + v15;
  v19 = a1[12];
  v20 = a1[14];
  v28 = (float)((float)(result[4] * v9) + (float)(*result * v19)) + (float)(v20 * result[8]);
  v29 = (float)((float)(result[5] * v9) + (float)(result[1] * v19)) + (float)(v20 * result[9]);
  v21 = (float)((float)(result[2] * v19) + (float)(result[6] * v9)) + (float)(v20 * result[10]);
  v22 = (float)((float)(v19 * result[3]) + (float)(v9 * result[7])) + (float)(v20 * result[11]);
  *(float *)a3 = *(float *)a3 - v11;
  *(float *)(a3 + 4) = *(float *)(a3 + 4) - v12;
  *(float *)(a3 + 8) = *(float *)(a3 + 8) - v18;
  *(float *)(a3 + 12) = *(float *)(a3 + 12) - (float)(v14 + v16);
  *(float *)a5 = *(float *)a5 - v28;
  *(float *)(a5 + 4) = *(float *)(a5 + 4) - v29;
  *(float *)(a5 + 8) = *(float *)(a5 + 8) - v21;
  *(float *)(a5 + 12) = *(float *)(a5 + 12) - v22;
  v30 = a6[5];
  v31 = a6[4];
  v23 = a6[6];
  v24 = a4[1] - (float)((float)(v18 * a4[4]) - (float)(a4[6] * v11));
  *a4 = *a4 - (float)((float)(a4[6] * v12) - (float)(a4[5] * v18));
  a4[1] = v24;
  a4[2] = a4[2] - (float)((float)(v11 * a4[5]) - (float)(v12 * a4[4]));
  v25 = *a6 - (float)((float)(v29 * v23) - (float)(v30 * v21));
  v26 = a6[1] - (float)((float)(v21 * v31) - (float)(v23 * v28));
  v27 = a6[2];
  *a6 = v25;
  a6[1] = v26;
  a6[2] = v27 - (float)((float)(v28 * v30) - (float)(v31 * v29));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpCenterOfMassChangerModifierConstraintAtom::collisionResponseEndCallback  (binary VA: 0x1774c30)
// Original: hkpCenterOfMassChangerModifierConstraintAtom::collisionResponseEndCallback
// ----------------------------------------------------------------------------
float * hkpCenterOfMassChangerModifierConstraintAtom::collisionResponseEndCallback(float *a1, int a2, int a3, int a4, float *a5, int a6, float *a7)
{
  float v7; // xmm5_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm6_4
  float *v12;
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm7_4
  float *v20;
  float v21; // xmm5_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm2_4
  float v26; // xmm7_4
  float v27; // xmm0_4
  float v28; // xmm2_4
  float v29; // xmm3_4
  float v30; // xmm5_4
  float v31; // xmm6_4
  float v32; // xmm3_4
  float v33; // xmm5_4
  float v34; // xmm4_4
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37;
  float v38;
  float v39;

  v7 = a1[8];
  v9 = a1[9];
  v10 = a1[10];
  v11 = a1[14];
  v12 = *(float **)(a4 + 80);
  v13 = v12[1] * v7;
  v14 = (float)((float)(*v12 * v7) + (float)(v12[4] * v9)) + (float)(v12[8] * v10);
  v15 = (float)(v7 * v12[2]) + (float)(v9 * v12[6]);
  v16 = v12[9] * v10;
  v17 = v10 * v12[10];
  v18 = (float)((float)(v12[5] * v9) + v13) + v16;
  v19 = a1[13];
  v20 = *(float **)(a6 + 80);
  v21 = v15 + v17;
  v37 = v18;
  v22 = a1[12];
  v23 = (float)((float)(*v20 * v22) + (float)(v20[4] * v19)) + (float)(v20[8] * v11);
  v24 = (float)(v20[1] * v22) + (float)(v20[5] * v19);
  v25 = (float)(v22 * v20[2]) + (float)(v19 * v20[6]);
  v26 = a7[6];
  v27 = v24 + (float)(v20[9] * v11);
  v28 = v25 + (float)(v11 * v20[10]);
  v38 = a7[5];
  v39 = a7[4];
  v29 = a5[5] * v21;
  v30 = v21 * a5[4];
  v31 = (float)(v37 * a5[6]) - v29;
  v32 = v37 * a5[4];
  *a5 = v31 + *a5;
  v33 = v30 - (float)(a5[6] * v14);
  v34 = (float)((float)(v14 * a5[5]) - v32) + a5[2];
  a5[1] = v33 + a5[1];
  a5[2] = v34;
  a5[3] = a5[3] + 0.0;
  a7[3] = a7[3] + 0.0;
  *a7 = (float)((float)(v26 * v27) - (float)(v38 * v28)) + *a7;
  v35 = (float)((float)(v28 * v39) - (float)(v26 * v23)) + a7[1];
  v36 = (float)((float)(v23 * v38) - (float)(v27 * v39)) + a7[2];
  a7[1] = v35;
  a7[2] = v36;
  return a7;
}


