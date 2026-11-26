#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMovingS.h"

// ----------------------------------------------------------------------------
// Function: hkpMovingSurfaceModifierConstraintAtom::staticClass  (binary VA: 0x174af30)
// Original: hkpMovingSurfaceModifierConstraintAtom::staticClass
// ----------------------------------------------------------------------------
void * hkpMovingSurfaceModifierConstraintAtom::staticClass()
{
  return &hkpMovingSurfaceModifierConstraintAtomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpMovingSurfaceModifierConstraintAtom::collisionResponseBeginCallback  (binary VA: 0x17750d0)
// Original: hkpMovingSurfaceModifierConstraintAtom::collisionResponseBeginCallback
// ----------------------------------------------------------------------------
float * hkpMovingSurfaceModifierConstraintAtom::collisionResponseBeginCallback(float *a1, float *a2, int a3, int a4, int a5, float *a6)
{
  float v6; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm4_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm0_4

  v6 = a1[8];
  v8 = a1[9];
  v9 = a1[10];
  v10 = a1[11];
  v11 = (float)((float)(a2[4] * v6) + (float)(a2[5] * v8)) + (float)(a2[6] * v9);
  *a6 = (float)(v6 - (float)(v6 * v11)) + *a6;
  a6[1] = (float)(v8 - (float)(v8 * v11)) + a6[1];
  v12 = v11 * v9;
  v13 = (float)(v10 - (float)(v11 * v10)) + a6[3];
  a6[2] = (float)(v9 - v12) + a6[2];
  a6[3] = v13;
  return a6;
}

// ----------------------------------------------------------------------------
// Function: hkpMovingSurfaceModifierConstraintAtom::collisionResponseEndCallback  (binary VA: 0x1775170)
// Original: hkpMovingSurfaceModifierConstraintAtom::collisionResponseEndCallback
// ----------------------------------------------------------------------------
float * hkpMovingSurfaceModifierConstraintAtom::collisionResponseEndCallback(float *a1, float *a2, int a3, int a4, int a5, int a6, float *a7)
{
  float v7; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm5_4
  float v12; // xmm0_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm3_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm5_4
  float v19; // xmm0_4

  v7 = a1[8];
  v9 = a1[9];
  v10 = a1[10];
  v11 = a1[11];
  v12 = (float)((float)(a2[4] * v7) + (float)(a2[5] * v9)) + (float)(a2[6] * v10);
  v13 = *a7 - (float)(v7 - (float)(v7 * v12));
  v14 = a7[1];
  *a7 = v13;
  v15 = v14 - (float)(v9 - (float)(v9 * v12));
  v16 = v10 - (float)(v12 * v10);
  v17 = a7[2];
  v18 = v11 - (float)(v12 * v11);
  v19 = a7[3];
  a7[1] = v15;
  a7[2] = v17 - v16;
  a7[3] = v19 - v18;
  return a7;
}


