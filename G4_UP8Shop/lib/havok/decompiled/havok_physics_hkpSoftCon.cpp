#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpSoftCon.h"

// ----------------------------------------------------------------------------
// Function: hkpSoftContactModifierConstraintAtom::staticClass  (binary VA: 0x174af50)
// Original: hkpSoftContactModifierConstraintAtom::staticClass
// ----------------------------------------------------------------------------
void * hkpSoftContactModifierConstraintAtom::staticClass()
{
  return &hkpSoftContactModifierConstraintAtomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpSoftContactModifierConstraintAtom::collisionResponseBeginCallback  (binary VA: 0x1774e20)
// Original: hkpSoftContactModifierConstraintAtom::collisionResponseBeginCallback
// ----------------------------------------------------------------------------
int hkpSoftContactModifierConstraintAtom::collisionResponseBeginCallback(int a1, int a2, int a3, int *a4, int a5, int *a6)
{
  int result;

  dword_2129FE0 = *a4;
  dword_2129FE4 = a4[1];
  dword_2129FE8 = a4[2];
  dword_2129FEC = a4[3];
  dword_2129FF0 = a4[4];
  dword_2129FF4 = a4[5];
  dword_2129FF8 = a4[6];
  dword_2129FFC = a4[7];
  dword_212A000 = *a6;
  dword_212A004 = a6[1];
  dword_212A008 = a6[2];
  dword_212A00C = a6[3];
  dword_212A010 = a6[4];
  dword_212A014 = a6[5];
  dword_212A018 = a6[6];
  result = a6[7];
  dword_212A01C = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSoftContactModifierConstraintAtom::collisionResponseEndCallback  (binary VA: 0x1774ed0)
// Original: hkpSoftContactModifierConstraintAtom::collisionResponseEndCallback
// ----------------------------------------------------------------------------
float * hkpSoftContactModifierConstraintAtom::collisionResponseEndCallback(int a1, int a2, int a3, int a4, float *a5, int a6, float *a7)
{
  float v8; // xmm0_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm4_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm1_4

  v8 = *(float *)(a1 + 32);
  v9 = (float)(a5[1] - *(float *)&dword_2129FE4) * v8;
  v10 = (float)(a5[2] - *(float *)&dword_2129FE8) * v8;
  v11 = (float)(a5[3] - *(float *)&dword_2129FEC) * v8;
  *a5 = (float)((float)(*a5 - *(float *)&dword_2129FE0) * v8) + *(float *)&dword_2129FE0;
  v12 = a5[4];
  a5[1] = v9 + *(float *)&dword_2129FE4;
  v13 = a5[5];
  a5[2] = v10 + *(float *)&dword_2129FE8;
  v14 = a5[6];
  a5[3] = v11 + *(float *)&dword_2129FEC;
  v15 = (float)(v13 - *(float *)&dword_2129FF4) * v8;
  v16 = (float)(v14 - *(float *)&dword_2129FF8) * v8;
  v17 = (float)(a5[7] - *(float *)&dword_2129FFC) * v8;
  a5[4] = (float)((float)(v12 - *(float *)&dword_2129FF0) * v8) + *(float *)&dword_2129FF0;
  a5[5] = v15 + *(float *)&dword_2129FF4;
  a5[6] = v16 + *(float *)&dword_2129FF8;
  a5[7] = v17 + *(float *)&dword_2129FFC;
  v18 = (float)(a7[1] - *(float *)&dword_212A004) * v8;
  v19 = (float)(a7[2] - *(float *)&dword_212A008) * v8;
  v20 = (float)(a7[3] - *(float *)&dword_212A00C) * v8;
  *a7 = (float)((float)(*a7 - *(float *)&dword_212A000) * v8) + *(float *)&dword_212A000;
  v21 = a7[7];
  a7[1] = v18 + *(float *)&dword_212A004;
  v22 = a7[5];
  a7[2] = v19 + *(float *)&dword_212A008;
  v23 = a7[6];
  a7[3] = v20 + *(float *)&dword_212A00C;
  v24 = (float)(v22 - *(float *)&dword_212A014) * v8;
  v25 = (float)(v23 - *(float *)&dword_212A018) * v8;
  v26 = (float)(v21 - *(float *)&dword_212A01C) * v8;
  a7[4] = (float)((float)(a7[4] - *(float *)&dword_212A010) * v8) + *(float *)&dword_212A010;
  a7[5] = v24 + *(float *)&dword_212A014;
  a7[6] = v25 + *(float *)&dword_212A018;
  a7[7] = v26 + *(float *)&dword_212A01C;
  return a7;
}


