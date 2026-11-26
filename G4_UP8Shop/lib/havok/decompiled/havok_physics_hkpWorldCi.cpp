#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpWorldCi.h"

// ----------------------------------------------------------------------------
// Function: hkpWorldCinfo::Construct  (binary VA: 0x174b5b0)
// Original: hkpWorldCinfo::hkpWorldCinfo
// ----------------------------------------------------------------------------
void hkpWorldCinfo::Construct(hkpWorldCinfo::Self *self)
{
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 7) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20550C8);
  *((uint32_t *)self + 12) = -1007026176;
  *((uint32_t *)self + 5) = -1055077171;
  *((uint32_t *)self + 13) = -1007026176;
  *((uint8_t *)self + 218) = 1;
  *((uint32_t *)self + 14) = -1007026176;
  *((uint32_t *)self + 8) = 1024;
  *((uint8_t *)self + 42) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 30) = 1065353216;
  *((uint32_t *)self + 24) = 250;
  *((uint32_t *)self + 9) = 1065353216;
  *((uint32_t *)self + 29) = 1058642330;
  *((uint32_t *)self + 16) = 1140457472;
  *((uint32_t *)self + 31) = 4;
  *((uint32_t *)self + 17) = 1140457472;
  *((uint32_t *)self + 32) = 1;
  *((uint32_t *)self + 18) = 1140457472;
  *((uint32_t *)self + 33) = 1602224112;
  *((uint8_t *)self + 136) = 0;
  *((uint32_t *)self + 35) = 1057367261;
  *((uint32_t *)self + 36) = 1060286497;
  *((uint8_t *)self + 148) = 0;
  *((uint32_t *)self + 20) = 1036831949;
  *((uint8_t *)self + 40) = 0;
  *((uint8_t *)self + 41) = 0;
  *((uint32_t *)self + 42) = 1045220557;
  *((uint8_t *)self + 172) = 0;
  *((uint8_t *)self + 184) = 1;
  *((uint32_t *)self + 44) = 2;
  *((uint32_t *)self + 45) = 4;
  *((uint32_t *)self + 47) = 4;
  *((uint32_t *)self + 48) = 12;
  *((uint32_t *)self + 49) = 0;
  *((uint32_t *)self + 50) = 1077936128;
  *((uint32_t *)self + 52) = 1082130432;
  *((uint32_t *)self + 51) = 1077936128;
  *((uint32_t *)self + 53) = 1101004800;
  *((uint32_t *)self + 41) = 1017370378;
  *((uint32_t *)self + 23) = 1128792064;
  *((uint32_t *)self + 25) = 1023969417;
  *((uint32_t *)self + 38) = 1008981770;
  *((uint8_t *)self + 149) = 0;
  *((uint32_t *)self + 39) = 20;
  *((uint8_t *)self + 216) = 1;
  *((uint8_t *)self + 163) = 1;
  *((uint32_t *)self + 55) = 64;
  *((uint8_t *)self + 160) = 0;
  *((uint8_t *)self + 161) = 0;
  *((uint8_t *)self + 162) = 0;
  *((uint8_t *)self + 112) = 2;
  *((uint8_t *)self + 113) = 0;
  *((uint8_t *)self + 217) = 2;
  *((uint32_t *)self + 57) = 953267991;
  *((uint32_t *)self + 26) = 0;
  *((uint8_t *)self + 224) = 1;
  *((uint8_t *)self + 225) = 0;
  *((uint8_t *)self + 232) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCinfo::setBroadPhaseWorldSize  (binary VA: 0x174b7d0)
// Original: hkpWorldCinfo::setBroadPhaseWorldSize
// ----------------------------------------------------------------------------
hkpWorldCinfo::Self * hkpWorldCinfo::setBroadPhaseWorldSize(hkpWorldCinfo::Self *self, unsigned int a2)
{
  __m128 v2;
  v2 = _mm_shuffle_ps(G4_BITCAST<__m128>(a2), G4_BITCAST<__m128>(a2), 0);
  *((__m128 *)self + 3) = _mm_mul_ps(G4_BITCAST<__m128>(xmmword_1C7CC90), v2);
  *((__m128 *)self + 4) = _mm_mul_ps(v2, G4_BITCAST<__m128>(xmmword_1C7CCA0));
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCinfo::setupSolverInfo  (binary VA: 0x174b810)
// Original: hkpWorldCinfo::setupSolverInfo
// ----------------------------------------------------------------------------
uint32_t * hkpWorldCinfo::setupSolverInfo(uint32_t *a1, int a2)
{
  uint32_t *result;

  result = a1;
  switch ( a2 )
  {
    case 1:
      a1[29] = 1050253722;
      a1[30] = 1063675494;
      a1[31] = 2;
      break;
    case 2:
      a1[29] = 1058642330;
      a1[30] = 1065353216;
      a1[31] = 2;
      break;
    case 3:
      a1[29] = 1063675494;
      a1[30] = 1066192077;
      a1[31] = 2;
      break;
    case 4:
      a1[29] = 1050253722;
      a1[30] = 1063675494;
      a1[31] = 4;
      break;
    case 5:
      a1[29] = 1058642330;
      a1[30] = 1065353216;
      a1[31] = 4;
      break;
    case 6:
      a1[29] = 1063675494;
      a1[30] = 1066192077;
      a1[31] = 4;
      break;
    case 7:
      a1[29] = 1050253722;
      a1[30] = 1063675494;
      a1[31] = 8;
      break;
    case 8:
      a1[29] = 1058642330;
      a1[30] = 1065353216;
      a1[31] = 8;
      break;
    case 9:
      a1[29] = 1063675494;
      a1[30] = 1066192077;
      a1[31] = 8;
      break;
    default:
      return result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCinfo::Construct  (binary VA: 0x174b910)
// Original: hkpWorldCinfo::hkpWorldCinfo
// ----------------------------------------------------------------------------
float * hkpWorldCinfo::Construct(float *a1, int a2)
{
  float *result;
  bool v3;

  result = a1;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20550C8);
  if ( a2 != 0 )
  {
    if ( a1[9] == 0.0 )
    {
      v3 = *((uint32_t *)a1 + 47) == -1;
      a1[9] = 1.0;
      if ( !v3 )
      {
LABEL_4:
        if ( *((uint32_t *)a1 + 48) != -1 )
          return result;
LABEL_8:
        *((uint32_t *)a1 + 48) = 12;
        return result;
      }
    }
    else if ( *((uint32_t *)a1 + 47) != -1 )
    {
      goto LABEL_4;
    }
    v3 = *((uint32_t *)a1 + 48) == -1;
    *((uint32_t *)a1 + 47) = 4;
    if ( v3 )
      goto LABEL_8;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCinfo::staticClass  (binary VA: 0x175f4d0)
// Original: hkpWorldCinfo::staticClass
// ----------------------------------------------------------------------------
void * hkpWorldCinfo::staticClass()
{
  return &hkpWorldCinfoClass;
}


