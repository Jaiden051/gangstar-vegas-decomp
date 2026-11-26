#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkp1Lin2An.h"

// ----------------------------------------------------------------------------
// Function: hkp1Lin2AngJacobian::computeDiag_hkpVelocityAccumulator_c_10116f  (binary VA: 0x17a18d0)
// Original: hkp1Lin2AngJacobian::computeDiag<hkpVelocityAccumulator const*>
// ----------------------------------------------------------------------------
float * hkp1Lin2AngJacobian::computeDiag_hkpVelocityAccumulator_c_10116f(float *a1, int a2, float *a3, float *a4, int a5, int a6)
{
  float v7; // xmm4_4

  v7 = a4[1];
  *a1 = (float)((float)((float)((float)((float)(*a3 * *a3) * *(float *)(*(uint32_t *)a5 + 48))
                              + (float)((float)(*a4 * *a4) * *(float *)(*(uint32_t *)a6 + 48)))
                      + (float)((float)((float)(a3[1] * a3[1]) * *(float *)(*(uint32_t *)a5 + 52))
                              + (float)((float)(v7 * v7) * *(float *)(*(uint32_t *)a6 + 52))))
              + (float)((float)((float)(a3[2] * a3[2]) * *(float *)(*(uint32_t *)a5 + 56))
                      + (float)((float)(a4[2] * a4[2]) * *(float *)(*(uint32_t *)a6 + 56))))
      + fmaxf(*(float *)(*(uint32_t *)a5 + 60) + *(float *)(*(uint32_t *)a6 + 60), 1.4210855e-14f);
  return a1;
}


