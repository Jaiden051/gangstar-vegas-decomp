#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpSampled.h"

// ----------------------------------------------------------------------------
// Function: hkpSampledHeightFieldShape::getAabb  (binary VA: 0x1ae67f0)
// Original: hkpSampledHeightFieldShape::getAabb
// ----------------------------------------------------------------------------
int hkpSampledHeightFieldShape::getAabb(hkpSampledHeightFieldShape::Self *self, const hkTransformf::Self *a2)
{
  long double v2; // fst7
  float v3; // xmm3_4
  float v4; // xmm1_4
  float v5; // xmm4_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm7_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm5_4
  float v13; // xmm6_4
  float v14; // xmm2_4
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm5_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm3_4
  float v22; // xmm5_4
  float v23; // xmm4_4
  int v25;
  int v26;
  float v27; // xmm2_4
  int v28;
  float v29; // xmm0_4
  float v30; // xmm3_4
  float v31; // xmm2_4
  float v32; // xmm0_4
  float v33; // xmm3_4
  float v34; // xmm4_4
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  float retaddr;
  float thisa;
  float v51;
  float v53;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  int i;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;

  v2 = ((long double (*)(hkpSampledHeightFieldShape::Self *, uint32_t, uint32_t, int, int, int, int, int, int, int, int, int, int, int, int, int))*(uint32_t *)(*(uint32_t *)self + 88))(
         self,
         0,
         0,
         v35,
         v36,
         v37,
         v38,
         v39,
         v40,
         v41,
         v42,
         v43,
         v44,
         v45,
         v46,
         v47);
  v3 = *((float *)self + 29);
  v63 = v2;
  v4 = v63;
  if ( v3 < 0.0 )
  {
    v25 = *((uint32_t *)self + 10);
    if ( v25 <= 0 )
    {
      v27 = v2;
    }
    else
    {
      v26 = *((uint32_t *)self + 11);
      v27 = v2;
      for ( i = 0; i < v25; ++i )
      {
        if ( v26 > 0 )
        {
          v28 = 0;
          do
          {
            v48 = v28++;
            v65 = ((long double (*)(hkpSampledHeightFieldShape::Self *, int, int))*(uint32_t *)(*(uint32_t *)self + 88))(
                    self,
                    i,
                    v48);
            v26 = *((uint32_t *)self + 11);
            v4 = fminf(v4, v65);
            v27 = fmaxf(v27, v65);
          }
          while ( v26 > v28 );
          v25 = *((uint32_t *)self + 10);
        }
      }
    }
    v29 = *((float *)self + 17);
    v30 = v4 * v29;
    *((float *)self + 9) = v27;
    v31 = v27 * v29;
    *((float *)self + 8) = v4;
    v32 = fminf(v4 * v29, v31);
    v33 = fmaxf(v30, v31);
    v34 = v32 + v33;
    v3 = v33 - v32;
    v5 = v34 * 0.5;
    *((float *)self + 29) = v3;
    *((float *)self + 12) = v5;
  }
  else
  {
    v5 = *((float *)self + 12);
  }
  v7 = *((float *)self + 28) * 0.5;
  v8 = v3 * 0.5;
  v9 = *(float *)a2 * v7;
  v10 = 0.5 * *((float *)self + 30);
  v11 = *((float *)a2 + 4);
  v12 = *((float *)a2 + 1) * v7;
  v13 = *((float *)a2 + 2) * v7;
  v14 = v7 * *((float *)a2 + 3);
  v51 = v9;
  v62 = v13;
  v61 = v14;
  v59 = *((float *)a2 + 5);
  v57 = *((float *)a2 + 7);
  v58 = *((float *)a2 + 6);
  v56 = *((float *)a2 + 9) * v10;
  v15 = *((float *)a2 + 8) * v10;
  retaddr = v11;
  v55 = *((float *)a2 + 10) * v10;
  v53 = v10 * *((float *)a2 + 11);
  v64 = (float)(fabs(v9) + fabs(v11 * v8)) + (float)(fabs(v15) + v53);
  thisa = v12;
  v16 = (float)(fabs(v56) + v53) + (float)(fabs(v12) + fabs(v59 * v8));
  v17 = fabs(v14) + fabs(v8 * v57);
  v18 = (float)(v53 + fabs(v55)) + (float)(fabs(v62) + fabs(v58 * v8));
  v19 = (float)(fabs(v53) + v53) + v17;
  v20 = (float)((float)((float)(retaddr * v5) + v51) + v15) + *((float *)a2 + 12);
  v21 = (float)((float)((float)(v59 * v5) + thisa) + v56) + *((float *)a2 + 13);
  v22 = (float)((float)((float)(v58 * v5) + v62) + v55) + *((float *)a2 + 14);
  v23 = (float)((float)((float)(v5 * v57) + v61) + v53) + *((float *)a2 + 15);
  *(float *)(LODWORD(v55) + 16) = v20 + v64;
  *(float *)LODWORD(v55) = v20 - v64;
  *(float *)(LODWORD(v55) + 20) = v16 + v21;
  *(float *)(LODWORD(v55) + 4) = v21 - v16;
  *(float *)(LODWORD(v55) + 24) = v18 + v22;
  *(float *)(LODWORD(v55) + 28) = v19 + v23;
  *(float *)(LODWORD(v55) + 8) = v22 - v18;
  *(float *)(LODWORD(v55) + 12) = v23 - v19;
  return LODWORD(v55);
}

// ----------------------------------------------------------------------------
// Function: hkpSampledHeightFieldShape::getCoarseMinMax  (binary VA: 0x1ae6b60)
// Original: hkpSampledHeightFieldShape::getCoarseMinMax
// ----------------------------------------------------------------------------
uint32_t * hkpSampledHeightFieldShape::getCoarseMinMax(hkpSampledHeightFieldShape::Self *self, int a2, int a3, int a4, hkVector4f::Self *a5, hkVector4f::Self *a6)
{
  uint32_t *result;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;

  result = (uint32_t *)(*((uint32_t *)self + 4) + 20 * (a2 - *((uint32_t *)self + 7)));
  if ( result[3] > a3 )
  {
    v7 = result[4];
    if ( v7 > a4 )
    {
      v8 = a4 + v7 * a3;
      v9 = (uint32_t *)(*result + 32 * v8);
      *(uint32_t *)a5 = *v9;
      *((uint32_t *)a5 + 1) = v9[1];
      *((uint32_t *)a5 + 2) = v9[2];
      *((uint32_t *)a5 + 3) = v9[3];
      v10 = (uint32_t *)(*result + 16 * (2 * v8 + 1));
      *(uint32_t *)a6 = *v10;
      *((uint32_t *)a6 + 1) = v10[1];
      *((uint32_t *)a6 + 2) = v10[2];
      result = (uint32_t *)v10[3];
      *((uint32_t *)a6 + 3) = (uint32_t)(uintptr_t)(result);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSampledHeightFieldShape::castRay  (binary VA: 0x1ae6c40)
// Original: hkpSampledHeightFieldShape::castRay
// ----------------------------------------------------------------------------
uint8_t * hkpSampledHeightFieldShape::castRay(uint8_t *a1, int a2, int a3, int a4)
{
  int v4; // xmm0_4
  void (*v5)(int, int, uint32_t, uint32_t *);
  uint32_t v7[6];

  v7[0] = (uint32_t)(uintptr_t)(&off_2047358);
  v4 = *(uint32_t *)(a4 + 16);
  v7[3] = a4;
  v7[1] = v4;
  LOBYTE(v7[2]) = 0;
  v5 = (void (*)(int, int, uint32_t, uint32_t *))hkpSampledHeightFieldShape::s_rayCastFunc[0];
  if ( (uintptr_t)hkpSampledHeightFieldShape::s_rayCastFunc[0] < 0x10000u && (hkpSampledHeightFieldShape::s_rayCastFunc[0] & 1) != 0 )
    v5 = *(void (**)(int, int, uint32_t, uint32_t *))(*(uint32_t *)(hkpSampledHeightFieldShape::s_rayCastFunc[1] + a2)
                                                          + hkpSampledHeightFieldShape::s_rayCastFunc[0]
                                                          - 1);
  v5(hkpSampledHeightFieldShape::s_rayCastFunc[1] + a2, a3, 0, v7);
  *a1 = a3;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpSampledHeightFieldShape::castRayWithCollector  (binary VA: 0x1ae6cd0)
// Original: hkpSampledHeightFieldShape::castRayWithCollector
// ----------------------------------------------------------------------------
int hkpSampledHeightFieldShape::castRayWithCollector(int a1, int a2, int a3, int a4)
{
  int v4; // xmm0_4
  int (*v5)(int, int, int, uint32_t *);
  uint32_t v7[4];

  v7[0] = (uint32_t)(uintptr_t)(&off_2047370);
  v4 = *(uint32_t *)(a4 + 4);
  v7[2] = a4;
  v7[1] = v4;
  v5 = (int (*)(int, int, int, uint32_t *))hkpSampledHeightFieldShape::s_rayCastFunc[0];
  if ( (uintptr_t)hkpSampledHeightFieldShape::s_rayCastFunc[0] < 0x10000u && (hkpSampledHeightFieldShape::s_rayCastFunc[0] & 1) != 0 )
    v5 = *(int (**)(int, int, int, uint32_t *))(*(uint32_t *)(hkpSampledHeightFieldShape::s_rayCastFunc[1] + a1)
                                                      + hkpSampledHeightFieldShape::s_rayCastFunc[0]
                                                      - 1);
  return v5(hkpSampledHeightFieldShape::s_rayCastFunc[1] + a1, a2, a3, v7);
}

// ----------------------------------------------------------------------------
// Function: hkpSampledHeightFieldShape::castSphere  (binary VA: 0x1ae6d40)
// Original: hkpSampledHeightFieldShape::castSphere
// ----------------------------------------------------------------------------
int hkpSampledHeightFieldShape::castSphere(int a1, int a2, int a3, int a4)
{
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm2_4
  int v7;
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  uint32_t *v11;
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  int (*v16)(uint32_t *, uint32_t *, int, int);
  uint32_t v18[16];

  v4 = *(float *)(a2 + 48);
  if ( *(int *)(a1 + 68) < 0 )
  {
    v5 = -0.0;
  }
  else
  {
    v4 = -v4;
    v5 = 0.0;
  }
  v6 = *(float *)a2 + v5;
  v18[8] = *(uint32_t *)(a2 + 32);
  v18[9] = *(uint32_t *)(a2 + 36);
  v18[10] = *(uint32_t *)(a2 + 40);
  v18[11] = *(uint32_t *)(a2 + 44);
  v7 = *(uint32_t *)(a2 + 48);
  *(float *)v18 = v6;
  v18[12] = v7;
  v8 = *(float *)(a2 + 4) + v4;
  v18[13] = *(uint32_t *)(a2 + 52);
  v9 = v4 + *(float *)(a2 + 20);
  v18[14] = *(uint32_t *)(a2 + 56);
  v18[15] = *(uint32_t *)(a2 + 60);
  *(float *)&v18[1] = v8;
  v10 = *(float *)(a2 + 8) + v5;
  *(float *)&v18[5] = v9;
  v11 = (uint32_t *)(hkpSampledHeightFieldShape::s_sphereCastFunc[1] + a1);
  v12 = *(float *)(a2 + 24) + v5;
  *(float *)&v18[2] = v10;
  v13 = *(float *)(a2 + 12) + v5;
  *(float *)&v18[6] = v12;
  *(float *)&v18[3] = v13;
  v14 = *(float *)(a2 + 16) + v5;
  v15 = v5 + *(float *)(a2 + 28);
  v16 = (int (*)(uint32_t *, uint32_t *, int, int))hkpSampledHeightFieldShape::s_sphereCastFunc[0];
  *(float *)&v18[4] = v14;
  *(float *)&v18[7] = v15;
  if ( (uintptr_t)hkpSampledHeightFieldShape::s_sphereCastFunc[0] < 0x10000u && (hkpSampledHeightFieldShape::s_sphereCastFunc[0] & 1) != 0 )
    v16 = *(int (**)(uint32_t *, uint32_t *, int, int))(*v11 + hkpSampledHeightFieldShape::s_sphereCastFunc[0] - 1);
  return v16(v11, v18, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: hkpSampledHeightFieldShape::Destroy  (binary VA: 0x1ae6f10)
// Original: hkpSampledHeightFieldShape::~hkpSampledHeightFieldShape
// ----------------------------------------------------------------------------
void hkpSampledHeightFieldShape::Destroy(hkpSampledHeightFieldShape::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1C28);
  v1 = *((uint32_t *)self + 5);
  v2 = v1 - 1;
  if ( v1 - 1 >= 0 )
  {
    v3 = *((uint32_t *)self + 4) + 20 * v1;
    do
    {
      v4 = *(uint32_t *)(v3 - 12);
      *(uint32_t *)(v3 - 16) = 0;
      if ( v4 >= 0 )
        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          *(uint32_t *)(v3 - 20),
          16 * v4);
      --v2;
      *(uint32_t *)(v3 - 20) = 0;
      *(uint32_t *)(v3 - 12) = 0x80000000;
      v3 -= 20;
    }
    while ( v2 != -1 );
  }
  *((uint32_t *)self + 5) = 0;
  v5 = *((uint32_t *)self + 6);
  if ( v5 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      20 * v5);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSampledHeightFieldShape::Destroy_ea1ae6ff0  (binary VA: 0x1ae6ff0)
// Original: hkpSampledHeightFieldShape::~hkpSampledHeightFieldShape
// ----------------------------------------------------------------------------
void hkpSampledHeightFieldShape::Destroy_ea1ae6ff0(hkpSampledHeightFieldShape::Self *self)
{
  int v1;
  int v2;

  hkpSampledHeightFieldShape::Destroy(self);
  v1 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 128;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}



// ============================================================================
// Address:   0x1ae7170 (size: 69 bytes)
// Symbol:    _ZN26hkpSampledHeightFieldShapeC2E24hkFinishLoadedObjectFlag
// Demangled: hkpSampledHeightFieldShape::hkpSampledHeightFieldShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN26hkpSampledHeightFieldShapeC1E24hkFinishLoadedObjectFlag'
void (**hkpSampledHeightFieldShape::Construct(
        int a1,
        int a2))(hkpSampledHeightFieldShape::Self * self)
{
  void (**result)(hkpSampledHeightFieldShape::Self *);

  hkpShape::hkpShape(a1, a2);
  result = (void (**)(hkpSampledHeightFieldShape::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20B1C28));
  *(uint8_t *)(a1 + 8) = 28;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20B1C28);
  if ( a2 != 0 )
    *(uint8_t *)(a1 + 8) = 12;
  return result;
}
// ----------------------------------------------------------------------------
// Function: hkpSampledHeightFieldShape::getCinfo  (binary VA: 0x1ae71c0)
// Original: hkpSampledHeightFieldShape::getCinfo
// ----------------------------------------------------------------------------
void hkpSampledHeightFieldShape::getCinfo()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpSampledHeightFieldShape::getHeightAndNormalAt  (binary VA: 0x1ae71d0)
// Original: hkpSampledHeightFieldShape::getHeightAndNormalAt
// ----------------------------------------------------------------------------
uint32_t * hkpSampledHeightFieldShape::getHeightAndNormalAt(hkpSampledHeightFieldShape::Self *self, int a2, int a3, float a4, float a5, hkVector4f::Self *a6, float *a7, int *a8)
{
  hkVector4f::Self *v8;
  hkpSampledHeightFieldShape::Self *v9;
  float v10; // xmm4_4
  float v11; // xmm5_4
  int *v12;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  typedef int _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef float *_g4_t_v26;
  typedef float *_g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef uint32_t _g4_t_v38[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v16)) > _g4_s2 ? (12u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v17)) > _g4_s3 ? (16u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v18)) > _g4_s4 ? (20u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v19)) > _g4_s5 ? (24u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v20)) > _g4_s6 ? (24u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v21)) > _g4_s7 ? (24u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v22)) > _g4_s8 ? (28u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v23)) > _g4_s9 ? (28u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v24)) > _g4_s10 ? (28u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v25)) > _g4_s11 ? (32u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v26)) > _g4_s12 ? (36u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v27)) > _g4_s13 ? (36u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v28)) > _g4_s14 ? (40u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v29)) > _g4_s15 ? (44u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v30)) > _g4_s16 ? (48u + sizeof(_g4_t_v30)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v31)) > _g4_s17 ? (48u + sizeof(_g4_t_v31)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v32)) > _g4_s18 ? (52u + sizeof(_g4_t_v32)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v33)) > _g4_s19 ? (52u + sizeof(_g4_t_v33)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v34)) > _g4_s20 ? (52u + sizeof(_g4_t_v34)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v35)) > _g4_s21 ? (52u + sizeof(_g4_t_v35)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v36)) > _g4_s22 ? (52u + sizeof(_g4_t_v36)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v37)) > _g4_s23 ? (52u + sizeof(_g4_t_v37)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v38)) > _g4_s24 ? (56u + sizeof(_g4_t_v38)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);

  v38[3] = (uint32_t)(uintptr_t)(&self);
  v8 = a6;
  v9 = self;
  v10 = a4;
  v32 = a2;
  v11 = a5;
  v30 = a3;
  v26 = a7;
  v12 = a8;
  *(uint32_t *)a6 = 1065353216;
  *((uint32_t *)v8 + 1) = 1065353216;
  *((uint32_t *)v8 + 2) = 1065353216;
  (*(void (**)(char *, hkpSampledHeightFieldShape::Self *, int, int, int, int, int, int, int, int *, float *, float, float, int, int, uint32_t))(*(uint32_t *)v9 + 92))(
    (char *)v38 + 3,
    v9,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v22,
    v12,
    v26,
    COERCE_FLOAT(LODWORD(v11)),
    COERCE_FLOAT(LODWORD(v10)),
    v30,
    v32,
    v38[0]);
  if ( HIBYTE(v38[0]) != 0 )
  {
    v23 = ((long double (*)(hkpSampledHeightFieldShape::Self *, int, int))*(uint32_t *)(*(uint32_t *)v9 + 88))(
            v9,
            v33,
            v31);
    v20 = ((long double (*)(hkpSampledHeightFieldShape::Self *, int, int))*(uint32_t *)(*(uint32_t *)v9 + 88))(
            v9,
            v33 + 1,
            v31 + 1);
    if ( v29 <= v28 )
    {
      v36 = ((long double (*)(hkpSampledHeightFieldShape::Self *, int, int))*(uint32_t *)(*(uint32_t *)v9 + 88))(
              v9,
              v33,
              v31 + 1);
      *v27 = (float)((float)(v28 * (float)(v36 - v23)) + v23) + (float)(v29 * (float)(v20 - v36));
      *(float *)v8 = -(float)(v20 - v36);
      *((float *)v8 + 2) = -(float)(v36 - v23);
      *v25 = 0;
    }
    else
    {
      v34 = ((long double (*)(hkpSampledHeightFieldShape::Self *, int, int))*(uint32_t *)(*(uint32_t *)v9 + 88))(
              v9,
              v33 + 1,
              v31);
      *v27 = (float)((float)(v28 * (float)(v20 - v34)) + v23) + (float)(v29 * (float)(v34 - v23));
      *(float *)v8 = -(float)(v34 - v23);
      *((float *)v8 + 2) = -(float)(v20 - v34);
      *v25 = 1;
    }
    return v25;
  }
  else
  {
    v24 = ((long double (*)(hkpSampledHeightFieldShape::Self *, int, int))*(uint32_t *)(*(uint32_t *)v9 + 88))(
            v9,
            v33 + 1,
            v31);
    v21 = ((long double (*)(hkpSampledHeightFieldShape::Self *, int, int))*(uint32_t *)(*(uint32_t *)v9 + 88))(
            v9,
            v33,
            v31 + 1);
    if ( (float)(v29 + v28) <= 1.0 )
    {
      v37 = ((long double (*)(hkpSampledHeightFieldShape::Self *, int, int))*(uint32_t *)(*(uint32_t *)v9 + 88))(
              v9,
              v33,
              v31);
      *v27 = (float)((float)(v28 * (float)(v21 - v37)) + v37) + (float)(v29 * (float)(v24 - v37));
      *(float *)v8 = -(float)(v24 - v37);
      *((float *)v8 + 2) = -(float)(v21 - v37);
      *v25 = 0;
    }
    else
    {
      v35 = ((long double (*)(hkpSampledHeightFieldShape::Self *, int, int))*(uint32_t *)(*(uint32_t *)v9 + 88))(
              v9,
              v33 + 1,
              v31 + 1);
      *v27 = (float)((float)(v28 * (float)(v35 - v24)) + v24) + (float)((float)(v29 - 1.0) * (float)(v35 - v21));
      *(float *)v8 = -(float)(v35 - v21);
      *((float *)v8 + 2) = -(float)(v35 - v24);
      *v25 = 1;
    }
    return v25;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpSampledHeightFieldShape::Construct  (binary VA: 0x1ae75e0)
// Original: hkpSampledHeightFieldShape::hkpSampledHeightFieldShape
// ----------------------------------------------------------------------------
hkVector4UtilImpl<float> * hkpSampledHeightFieldShape::Construct(int a1, unsigned int *a2, char a3)
{
  float v3; // xmm2_4
  float v4; // xmm3_4
  float v5; // xmm4_4
  float v6; // xmm2_4
  __m128i v7;
  __m128i v8;
  __m128i v9;
  int v10;
  int v11; // xmm7_4
  int v12;
  int v13;
  float v14; // xmm5_4
  float v15; // xmm4_4
  float v16; // xmm1_4
  hkVector4UtilImpl<float> *result;
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23[4];

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20B1C28);
  *(uint32_t *)(a1 + 4) = -65535;
  *(uint8_t *)(a1 + 8) = 12;
  *(uint8_t *)(a1 + 9) = 4;
  *(uint8_t *)(a1 + 10) = 0;
  *(uint8_t *)(a1 + 11) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0x80000000;
  *(uint8_t *)(a1 + 53) = a3;
  *(uint32_t *)(a1 + 40) = a2[4];
  *(uint32_t *)(a1 + 44) = a2[5];
  *(uint8_t *)(a1 + 52) = *((uint8_t *)a2 + 32);
  v3 = (float)(int)a2[5] - 1.0;
  v4 = *((float *)a2 + 7) - *((float *)a2 + 6);
  v5 = (float)(int)a2[4] - 1.0;
  *(float *)(a1 + 120) = v3;
  *(float *)(a1 + 116) = v4;
  *(float *)(a1 + 112) = v5;
  *(uint32_t *)(a1 + 124) = 0;
  *(float *)(a1 + 112) = v5 * *(float *)a2;
  *(float *)(a1 + 116) = v4 * *((float *)a2 + 1);
  *(float *)(a1 + 120) = v3 * *((float *)a2 + 2);
  *(float *)(a1 + 124) = *((float *)a2 + 3) * 0.0;
  v6 = *((float *)a2 + 6);
  if ( v6 > *((float *)a2 + 7) )
  {
    *(uint32_t *)(a1 + 32) = -8388626;
    *(uint32_t *)(a1 + 36) = 2139095022;
    *(uint32_t *)(a1 + 48) = -1082130432;
    *(uint32_t *)(a1 + 116) = -1082130432;
  }
  else
  {
    *(float *)(a1 + 32) = v6;
    *(uint32_t *)(a1 + 36) = a2[7];
    *(float *)(a1 + 48) = (float)((float)(*((float *)a2 + 6) + *((float *)a2 + 7)) * 0.5) * *((float *)a2 + 1);
  }
  *(uint32_t *)(a1 + 64) = *a2;
  *(uint32_t *)(a1 + 68) = a2[1];
  *(uint32_t *)(a1 + 72) = a2[2];
  *(uint32_t *)(a1 + 76) = a2[3];
g4_m128_raw(v7) = *a2;
g4_m128_raw(v8) = a2[1];
g4_m128_raw(v9) = a2[2];
  *(float *)&v10 = 3.40282e38f;
  if ( _mm_cvtsi128_si32(v7) < 0 )
    *(float *)&v10 = -3.40282e38f;
  *(float *)&v11 = 3.40282e38f;
  if ( _mm_cvtsi128_si32(v8) < 0 )
    *(float *)&v11 = -3.40282e38f;
  v12 = 2139095022;
  if ( _mm_cvtsi128_si32(v9) < 0 )
    v12 = -8388626;
  *(float *)&v13 = 3.40282e38f;
  if ( _mm_cvtsi128_si32(g4_to_m128i(0x3F800000u)) < 0 )
    *(float *)&v13 = -3.40282e38f;
  if ( *(float *)g4_m128_ptr<int32_t>(v7) == 0.0 )
    v14 = *(float *)&v10;
  else
    v14 = 1.0 / *(float *)g4_m128_ptr<int32_t>(v7);
  *(float *)(a1 + 80) = v14;
  if ( *(float *)g4_m128_ptr<int32_t>(v8) == 0.0 )
    v15 = *(float *)&v11;
  else
    v15 = 1.0 / *(float *)g4_m128_ptr<int32_t>(v8);
  *(float *)(a1 + 84) = v15;
  if ( *(float *)g4_m128_ptr<int32_t>(v9) == 0.0 )
    *(uint32_t *)(a1 + 88) = v12;
  else
    *(float *)(a1 + 88) = 1.0 / *(float *)g4_m128_ptr<int32_t>(v9);
  if ( 0.0 == 1.0 )
    v16 = *(float *)&v13;
  else
    v16 = 1.0 / 1.0;
  *(float *)(a1 + 92) = v16;
  result = hkVector4UtilImpl_float_id_0c2ad1::getFloatToInt16FloorCorrection((hkVector4UtilImpl<float> *)v23);
  v18 = v23[0];
  *(uint32_t *)(a1 + 100) = 0;
  v19 = *(float *)(a1 + 72);
  *(uint32_t *)(a1 + 28) = 0;
  v20 = v19 * v18;
  v21 = *(float *)(a1 + 76) * v18;
  v22 = v18 * *(float *)(a1 + 64);
  *(float *)(a1 + 104) = v20;
  *(float *)(a1 + 108) = v21;
  *(float *)(a1 + 96) = v22;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSampledHeightFieldShape::collideSpheres  (binary VA: 0x1ae78b0)
// Original: hkpSampledHeightFieldShape::collideSpheres
// ----------------------------------------------------------------------------
void hkpSampledHeightFieldShape::collideSpheres()
{
  typedef int _g4_t_v0;
  typedef int _g4_t_v1[3];
  typedef int _g4_t_v2[131];
  enum : size_t {
    _g4_s0 = 608u,
    _g4_s1 = (0u + sizeof(_g4_t_v0)) > _g4_s0 ? (0u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v1)) > _g4_s1 ? (4u + sizeof(_g4_t_v1)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v2)) > _g4_s2 ? (16u + sizeof(_g4_t_v2)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 0u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 4u);
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 16u);

  hkErrStream::Construct((hkErrStream::Self *)v1, (hkString::Self *)v2, 512);
  hkOstream::opShl((int)(uintptr_t)(v1), (hkString::Self *)"You must implement collideSpheres!");
  hkError::messageWarning(
    (hkError::Self *)0x4B50036A,
    (int)(uintptr_t)(v2),
    "Shape/HeightField/SampledHeightField/hkpSampledHeightFieldShape.cpp",
    (const char *)&dword_60,
    v0);
  hkErrStream::Destroy((hkErrStream::Self *)v1);
}

// ----------------------------------------------------------------------------
// Function: hkpSampledHeightFieldShape::getHeightAtImpl  (binary VA: 0x1ae7930)
// Original: hkpSampledHeightFieldShape::getHeightAtImpl
// ----------------------------------------------------------------------------
long double hkpSampledHeightFieldShape::getHeightAtImpl()
{
  typedef int _g4_t_v1;
  typedef int _g4_t_v2[3];
  typedef int _g4_t_v3[131];
  enum : size_t {
    _g4_s0 = 608u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v2)) > _g4_s1 ? (4u + sizeof(_g4_t_v2)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v3)) > _g4_s2 ? (16u + sizeof(_g4_t_v3)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 4u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 16u);

  hkErrStream::Construct((hkErrStream::Self *)v2, (hkString::Self *)v3, 512);
  hkOstream::opShl((int)(uintptr_t)(v2), (hkString::Self *)"You must implement getHeightAtImpl!");
  hkError::messageWarning(
    (hkError::Self *)0x4B50036B,
    (int)(uintptr_t)(v3),
    "Shape/HeightField/SampledHeightField/hkpSampledHeightFieldShape.cpp",
    (const char *)&dword_64 + 1,
    v1);
  hkErrStream::Destroy((hkErrStream::Self *)v2);
  return 0.0;
}

// ----------------------------------------------------------------------------
// Function: hkpSampledHeightFieldShape::getTriangleFlipImpl  (binary VA: 0x1ae79b0)
// Original: hkpSampledHeightFieldShape::getTriangleFlipImpl
// ----------------------------------------------------------------------------
hkpSampledHeightFieldShape::Self * hkpSampledHeightFieldShape::getTriangleFlipImpl(hkpSampledHeightFieldShape::Self *self)
{
  typedef int _g4_t_v2[3];
  typedef int _g4_t_v3[135];
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (4u + sizeof(_g4_t_v2)) > _g4_s0 ? (4u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v3)) > _g4_s1 ? (16u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 4u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 16u);

  hkErrStream::Construct((hkErrStream::Self *)v2, (hkString::Self *)v3, 512);
  hkOstream::opShl((int)(uintptr_t)(v2), (hkString::Self *)"You must implement getTriangleFlipImpl!");
  hkError::messageWarning(
    (hkError::Self *)0x4B50036C,
    (int)(uintptr_t)(v3),
    "Shape/HeightField/SampledHeightField/hkpSampledHeightFieldShape.cpp",
    (const char *)&dword_68 + 3);
  hkErrStream::Destroy((hkErrStream::Self *)v2);
  *(uint8_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpSampledHeightFieldShape::CoarseMinMaxLevel::staticClass  (binary VA: 0x1ae8fd0)
// Original: hkpSampledHeightFieldShape::CoarseMinMaxLevel::staticClass
// ----------------------------------------------------------------------------
void * hkpSampledHeightFieldShape::CoarseMinMaxLevel::staticClass()
{
  return &hkpSampledHeightFieldShapeCoarseMinMaxLevelClass;
}

// ----------------------------------------------------------------------------
// Function: hkpSampledHeightFieldShape::staticClass  (binary VA: 0x1ae8ff0)
// Original: hkpSampledHeightFieldShape::staticClass
// ----------------------------------------------------------------------------
void * hkpSampledHeightFieldShape::staticClass()
{
  return &hkpSampledHeightFieldShapeClass;
}


