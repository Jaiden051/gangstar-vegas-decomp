#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpSpringA.h"

// ----------------------------------------------------------------------------
// Function: hkpSpringAction::staticClass  (binary VA: 0x182a910)
// Original: hkpSpringAction::staticClass
// ----------------------------------------------------------------------------
void * hkpSpringAction::staticClass()
{
  return &hkpSpringActionClass;
}

// ----------------------------------------------------------------------------
// Function: hkpSpringAction::Destroy  (binary VA: 0x182adc0)
// Original: hkpSpringAction::~hkpSpringAction
// ----------------------------------------------------------------------------
void hkpSpringAction::Destroy(hkpSpringAction::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;
  int32_t v8; // kr04_4
  int32_t v9;
  int32_t v10; // ett

  v1 = *((uint32_t *)self + 6);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B2188);
  if ( v1 != 0 )
  {
    if ( *(uint16_t *)(v1 + 6) != 0 )
    {
      do
      {
        v3 = *(uint32_t *)(v1 + 4);
        HIWORD(v2) = HIWORD(v3);
        LOWORD(v2) = 0;
        v4 = v2 | (uint16_t)(v3 - 1);
        v5 = v3;
      }
      while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)(v1 + 4), v5, v4) );
      if ( (uint16_t)v4 == 0 )
        G4_VCALL<void>(v1, 16);
    }
    *((uint32_t *)self + 6) = 0;
  }
  v6 = *((uint32_t *)self + 7);
  if ( v6 != 0 )
  {
    if ( *(uint16_t *)(v6 + 6) != 0 )
    {
      do
      {
        v8 = *(uint32_t *)(v6 + 4);
        HIWORD(v7) = HIWORD(v8);
        LOWORD(v7) = 0;
        v9 = v7 | (uint16_t)(v8 - 1);
        v10 = v8;
      }
      while ( v10 != __sync_val_compare_and_swap((volatile int32_t *)(v6 + 4), v10, v9) );
      if ( (uint16_t)v9 == 0 )
        G4_VCALL<void>(v6, 16);
    }
    *((uint32_t *)self + 7) = 0;
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20553A8);
  hkStringPtr::Destroy((hkpSpringAction::Self *)((char *)self + 20));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSpringAction::Destroy_ea182aea0  (binary VA: 0x182aea0)
// Original: hkpSpringAction::~hkpSpringAction
// ----------------------------------------------------------------------------
void hkpSpringAction::Destroy_ea182aea0(hkpSpringAction::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;
  int32_t v8; // kr04_4
  int32_t v9;
  int32_t v10; // ett
  int v11;
  int v12;

  v1 = *((uint32_t *)self + 6);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B2188);
  if ( v1 != 0 )
  {
    if ( *(uint16_t *)(v1 + 6) != 0 )
    {
      do
      {
        v3 = *(uint32_t *)(v1 + 4);
        HIWORD(v2) = HIWORD(v3);
        LOWORD(v2) = 0;
        v4 = v2 | (uint16_t)(v3 - 1);
        v5 = v3;
      }
      while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)(v1 + 4), v5, v4) );
      if ( (uint16_t)v4 == 0 )
        G4_VCALL<void>(v1, 16);
    }
    *((uint32_t *)self + 6) = 0;
  }
  v6 = *((uint32_t *)self + 7);
  if ( v6 != 0 )
  {
    if ( *(uint16_t *)(v6 + 6) != 0 )
    {
      do
      {
        v8 = *(uint32_t *)(v6 + 4);
        HIWORD(v7) = HIWORD(v8);
        LOWORD(v7) = 0;
        v9 = v7 | (uint16_t)(v8 - 1);
        v10 = v8;
      }
      while ( v10 != __sync_val_compare_and_swap((volatile int32_t *)(v6 + 4), v10, v9) );
      if ( (uint16_t)v9 == 0 )
        G4_VCALL<void>(v6, 16);
    }
    *((uint32_t *)self + 7) = 0;
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20553A8);
  hkStringPtr::Destroy((hkpSpringAction::Self *)((char *)self + 20));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v11 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v12 = 96;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v12 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v11, 12, self, v12);
}

// ----------------------------------------------------------------------------
// Function: hkpSpringAction::applyAction  (binary VA: 0x182afc0)
// Original: hkpSpringAction::applyAction
// ----------------------------------------------------------------------------
const hkTransformf::Self * hkpSpringAction::applyAction(float a1, float a2, float a3, int a4, int a5, int a6, int a7, float a8, int a9, int a10, int a11, float a12, int a13, int a14)
{
  int v14;
  const hkTransformf::Self *result;
  __m128i v16;
  float v17; // xmm4_4
  float v18; // xmm7_4
  __m128i v19;
  int v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm3_4
  __m128i v24;
  int v25;
  int v26;
  float *v27;
  float v28; // xmm1_4
  float v29; // xmm0_4
  float v30; // xmm5_4
  float v31; // xmm4_4
  int v32;
  typedef int _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef int _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float *_g4_t_v47;
  typedef float _g4_t_v48;
  typedef float *_g4_t_v49;
  typedef float _g4_t_v50[4];
  typedef unsigned int _g4_t_v51[7];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v33)) > _g4_s0 ? (0u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v34)) > _g4_s1 ? (8u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v35)) > _g4_s2 ? (12u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v36)) > _g4_s3 ? (16u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v37)) > _g4_s4 ? (28u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v38)) > _g4_s5 ? (32u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v39)) > _g4_s6 ? (36u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v40)) > _g4_s7 ? (40u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v41)) > _g4_s8 ? (44u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v42)) > _g4_s9 ? (48u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v43)) > _g4_s10 ? (48u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v44)) > _g4_s11 ? (52u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v45)) > _g4_s12 ? (52u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v46)) > _g4_s13 ? (56u + sizeof(_g4_t_v46)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v47)) > _g4_s14 ? (60u + sizeof(_g4_t_v47)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v48)) > _g4_s15 ? (60u + sizeof(_g4_t_v48)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v49)) > _g4_s16 ? (60u + sizeof(_g4_t_v49)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v50)) > _g4_s17 ? (64u + sizeof(_g4_t_v50)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v51)) > _g4_s18 ? (80u + sizeof(_g4_t_v51)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 40u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 44u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 52u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 56u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 60u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 60u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 60u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 64u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 80u);

  v14 = *(uint32_t *)(LODWORD(a1) + 24);
  v47 = *(float **)(LODWORD(a1) + 28);
  hkVector4f::setTransformedPos(
    (hkVector4f::Self *)v50,
    (const hkTransformf::Self *)(v14 + 240),
    (const hkVector4f::Self *)(LODWORD(a1) + 48));
  result = hkVector4f::setTransformedPos(
             (hkVector4f::Self *)v51,
             (const hkTransformf::Self *)(v47 + 60),
             (const hkVector4f::Self *)(LODWORD(a1) + 64));
g4_m128_raw(v16) = v51[0];
  *(float *)g4_m128_ptr<int32_t>(v16) = *(float *)v51 - v50[0];
  v17 = *(float *)&v51[1] - v50[1];
  v18 = *(float *)&v51[2] - v50[2];
  v19 = v16;
  v40 = *(float *)&v51[2];
  v39 = v50[2];
  v37 = v50[3];
  *(float *)g4_m128_ptr<int32_t>(v19) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v16) * *(float *)g4_m128_ptr<int32_t>(v16)) + (float)(v17 * v17))
                          + (float)(v18 * v18);
  if ( *(float *)g4_m128_ptr<int32_t>(v19) > 0.0 )
  {
    v20 = ((_mm_cvtsi128_si32(v19) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v19) >> 1));
    result = (const hkTransformf::Self *)&dword_1C7B664;
    v21 = (float)(1.5 * *(float *)&v20)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v19)) * *(float *)&v20)
                * (float)(*(float *)&v20 * *(float *)&v20));
    v22 = 1.5 * v21;
    v23 = (float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v19)) * v21) * (float)(v21 * v21);
g4_m128_raw(v24) = 0x3FC00000u;
    *(float *)g4_m128_ptr<int32_t>(v24) = (float)((float)(1.5 * (float)(v22 - v23))
                                    - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v19)) * (float)(v22 - v23))
                                            * (float)((float)(v22 - v23) * (float)(v22 - v23))))
                            * *(float *)g4_m128_ptr<int32_t>(v19);
    if ( *(float *)g4_m128_ptr<int32_t>(v24) >= 0.001f )
    {
      v36 = *(float *)(LODWORD(a1) + 80);
      if ( (*(uint8_t *)(LODWORD(a1) + 92) != 0 || *(float *)(LODWORD(a1) + 80) <= *(float *)g4_m128_ptr<int32_t>(v24))
        && (*(uint8_t *)(LODWORD(a1) + 93) != 0 || *(float *)g4_m128_ptr<int32_t>(v24) <= v36) )
      {
        v25 = _mm_cvtsi128_si32(v24);
        v26 = (2130706432 - v25) & ((v25 ^ (v25 + 2139095040)) >> 31);
        v27 = v47;
        v28 = (float)(2.0
                    - (float)(*(float *)g4_m128_ptr<int32_t>(v24)
                            * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v24) * *(float *)&v26)) * *(float *)&v26)))
            * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v24) * *(float *)&v26)) * *(float *)&v26);
        v29 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v24) * v28)) * v28;
        v35 = *(float *)g4_m128_ptr<int32_t>(v16) * v29;
        v30 = *(float *)&v51[1] - v47[81];
        v38 = v29 * (float)(*(float *)&v51[3] - v50[3]);
        v34 = v17 * v29;
        v31 = *(float *)&v51[2] - v47[82];
        v48 = *(float *)v51 - v47[80];
        v44 = v50[0] - *(float *)(v14 + 320);
        v46 = v27[112];
        v41 = v27[113];
        v42 = v50[1] - *(float *)(v14 + 324);
        v43 = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v24) - v36) * *(float *)(LODWORD(a1) + 84))
            + (float)((float)((float)((float)((float)((float)((float)((float)(v41 * v31) - (float)(v30 * v27[114]))
                                                            + v27[108])
                                                    - (float)((float)((float)(*(float *)(v14 + 452)
                                                                            * (float)(v50[2] - *(float *)(v14 + 328)))
                                                                    - (float)(v42 * *(float *)(v14 + 456)))
                                                            + *(float *)(v14 + 432)))
                                            * v35)
                                    + (float)((float)((float)((float)((float)(v27[114] * v48) - (float)(v31 * v46))
                                                            + v27[109])
                                                    - (float)((float)((float)(*(float *)(v14 + 456) * v44)
                                                                    - (float)((float)(v50[2] - *(float *)(v14 + 328))
                                                                            * *(float *)(v14 + 448)))
                                                            + *(float *)(v14 + 436)))
                                            * v34))
                            + (float)((float)((float)((float)((float)(v30 * v46) - (float)(v48 * v41)) + v27[110])
                                            - (float)((float)((float)(v42 * *(float *)(v14 + 448))
                                                            - (float)(*(float *)(v14 + 452) * v44))
                                                    + *(float *)(v14 + 440)))
                                    * (float)(v18 * v29)))
                    * *(float *)(LODWORD(a1) + 88));
        v49 = v27;
        *(float *)(LODWORD(a1) + 32) = v35 * (float)-v43;
        *(float *)(LODWORD(a1) + 36) = v34 * (float)-v43;
        *(float *)(LODWORD(a1) + 40) = (float)(v18 * v29) * (float)-v43;
        *(float *)(LODWORD(a1) + 44) = (float)-v43 * v38;
        v45 = *(uint32_t *)(LODWORD(a2) + 8);
        hkpEntity::activate((hkpEntity::Self *)v27);
        (*(void (**)(float *, int, int, unsigned int *, int, uint32_t, uint32_t, uint32_t, float, float *, unsigned int *, float, uint32_t, float, float, float, uint32_t, int, int, float *, uint32_t, uint32_t, uint32_t, uint32_t, unsigned int, unsigned int, unsigned int, unsigned int))(*((uint32_t *)v49 + 56) + 112))(
          v49 + 56,
          v45,
          LODWORD(a1) + 32,
          v51,
          v33,
          v18 * v29,
          LODWORD(v34),
          LODWORD(v35),
          COERCE_FLOAT(LODWORD(v36)),
          v50,
          v51,
          COERCE_FLOAT(LODWORD(v37)),
          LODWORD(v38),
          COERCE_FLOAT(LODWORD(v39)),
          COERCE_FLOAT(LODWORD(v40)),
          COERCE_FLOAT(LODWORD(v41)),
          LODWORD(v43),
          v45,
          LODWORD(a1) + 32,
          v49,
          LODWORD(v50[0]),
          LODWORD(v50[1]),
          LODWORD(v50[2]),
          LODWORD(v50[3]),
          v51[0],
          v51[1],
          v51[2],
          v51[3]);
        *(float *)(LODWORD(a1) + 32) = a3 * a12;
        *(float *)(LODWORD(a1) + 36) = a2 * a12;
        *(float *)(LODWORD(a1) + 40) = a1 * a12;
        *(float *)(LODWORD(a1) + 44) = a12 * a8;
        v32 = *(uint32_t *)(LODWORD(a2) + 8);
        hkpEntity::activate((hkpEntity::Self *)v14);
        return (const hkTransformf::Self *)G4_VCALL<int>(v14 + 224, 112, v32, a14, a5);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSpringAction::Construct  (binary VA: 0x182b4d0)
// Original: hkpSpringAction::hkpSpringAction
// ----------------------------------------------------------------------------
void hkpSpringAction::Construct(hkpSpringAction::Self *self, hkpRigidBody::Self *a2, hkpRigidBody::Self *a3, unsigned int a4)
{
  hkpBinaryAction::Construct(self, a2, a3, a4);
  *((uint32_t *)self + 20) = 1065353216;
  *((uint32_t *)self + 21) = 1148846080;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1AC8);
  *((uint32_t *)self + 22) = 1036831949;
  *((uint8_t *)self + 92) = 1;
  *((uint8_t *)self + 93) = 1;
}

// ----------------------------------------------------------------------------
// Function: hkpSpringAction::clone  (binary VA: 0x182b540)
// Original: hkpSpringAction::clone
// ----------------------------------------------------------------------------
int hkpSpringAction::clone(int a1, int a2, int a3)
{
  int result;
  hkpRigidBody::Self *v4;
  int address;
  int v6;
  hkpRigidBody::Self *v7;

  result = 0;
  if ( *(uint32_t *)(a2 + 4) == 2 && *(uint32_t *)(a3 + 4) == 0 )
  {
    v4 = **(hkpRigidBody::Self ***)a2;
    v7 = *(hkpRigidBody::Self **)(*(uint32_t *)a2 + 4);
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v6 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           96);
    hkpSpringAction::Construct((hkpSpringAction::Self *)v6, v4, v7, *(uint32_t *)(a1 + 16));
    *(uint32_t *)(v6 + 48) = *(uint32_t *)(a1 + 48);
    *(uint32_t *)(v6 + 52) = *(uint32_t *)(a1 + 52);
    *(uint32_t *)(v6 + 56) = *(uint32_t *)(a1 + 56);
    *(uint32_t *)(v6 + 60) = *(uint32_t *)(a1 + 60);
    *(uint32_t *)(v6 + 64) = *(uint32_t *)(a1 + 64);
    *(uint32_t *)(v6 + 68) = *(uint32_t *)(a1 + 68);
    *(uint32_t *)(v6 + 72) = *(uint32_t *)(a1 + 72);
    *(uint32_t *)(v6 + 76) = *(uint32_t *)(a1 + 76);
    *(uint32_t *)(v6 + 80) = *(uint32_t *)(a1 + 80);
    *(uint32_t *)(v6 + 84) = *(uint32_t *)(a1 + 84);
    *(uint32_t *)(v6 + 88) = *(uint32_t *)(a1 + 88);
    *(uint8_t *)(v6 + 92) = *(uint8_t *)(a1 + 92);
    *(uint8_t *)(v6 + 93) = *(uint8_t *)(a1 + 93);
    return v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSpringAction::setPositionsInWorldSpace  (binary VA: 0x182b630)
// Original: hkpSpringAction::setPositionsInWorldSpace
// ----------------------------------------------------------------------------
const hkVector4f::Self * hkpSpringAction::setPositionsInWorldSpace(hkpSpringAction::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3)
{
  const hkTransformf::Self *v4;
  const hkVector4f::Self *result;
  float v6; // xmm2_4
  float v7; // xmm2_4
  __m128i v8;
  float v9; // xmm2_4
  float v10; // xmm1_4

  v4 = (const hkTransformf::Self *)(*((uint32_t *)self + 7) + 240);
  hkVector4f::setTransformedInversePos(
    (hkpSpringAction::Self *)((char *)self + 48),
    (const hkTransformf::Self *)(*((uint32_t *)self + 6) + 240),
    a2);
  hkVector4f::setTransformedInversePos((hkpSpringAction::Self *)((char *)self + 64), v4, a3);
  result = a2;
g4_m128_raw(v8) = *(unsigned int *)a2;
  v6 = *((float *)a2 + 1) - *((float *)a3 + 1);
  *(float *)g4_m128_ptr<int32_t>(v8) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v8) - *(float *)a3)
                                 * (float)(*(float *)g4_m128_ptr<int32_t>(v8) - *(float *)a3))
                         + (float)(v6 * v6);
  v7 = 0.0;
  *(float *)g4_m128_ptr<int32_t>(v8) = *(float *)g4_m128_ptr<int32_t>(v8)
                         + (float)((float)(*((float *)result + 2) - *((float *)a3 + 2))
                                 * (float)(*((float *)result + 2) - *((float *)a3 + 2)));
  if ( *(float *)g4_m128_ptr<int32_t>(v8) > 0.0 )
  {
    result = (const hkVector4f::Self *)(((_mm_cvtsi128_si32(v8) + 2139095040) >> 31)
                                & (1597463174 - (_mm_cvtsi128_si32(v8) >> 1)));
    v9 = (float)(*(float *)&result * 1.5)
       - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v8)) * *(float *)&result)
               * (float)(*(float *)&result * *(float *)&result));
    v10 = (float)(v9 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v8)) * v9) * (float)(v9 * v9));
    v7 = (float)((float)(1.5 * v10) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v8)) * v10) * (float)(v10 * v10)))
       * *(float *)g4_m128_ptr<int32_t>(v8);
  }
  *((float *)self + 20) = v7;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSpringAction::setPositionsInBodySpace  (binary VA: 0x182b760)
// Original: hkpSpringAction::setPositionsInBodySpace
// ----------------------------------------------------------------------------
int hkpSpringAction::setPositionsInBodySpace(hkpSpringAction::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3)
{
  int v3;
  int result;
  float v5; // xmm2_4
  __m128i v6;
  float v7; // xmm2_4
  float v8; // xmm1_4
  typedef int _g4_t_v9;
  typedef unsigned int _g4_t_v10[4];
  typedef float _g4_t_v11[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v11)) > _g4_s2 ? (32u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);

  *((uint32_t *)self + 12) = *(uint32_t *)a2;
  *((uint32_t *)self + 13) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 14) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 15) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 16) = *(uint32_t *)a3;
  *((uint32_t *)self + 17) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 18) = *((uint32_t *)a3 + 2);
  v3 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 19) = *((uint32_t *)a3 + 3);
  v9 = v3;
  hkVector4f::setTransformedPos((hkVector4f::Self *)v10, (const hkTransformf::Self *)(*((uint32_t *)self + 6) + 240), a2);
  *(float *)&result = COERCE_FLOAT(hkVector4f::setTransformedPos((hkVector4f::Self *)v11, (const hkTransformf::Self *)(v9 + 240), a3));
g4_m128_raw(v6) = v10[0];
  v5 = 0.0;
  *(float *)g4_m128_ptr<int32_t>(v6) = (float)((float)((float)(*(float *)v10 - v11[0]) * (float)(*(float *)v10 - v11[0]))
                                 + (float)((float)(*(float *)&v10[1] - v11[1]) * (float)(*(float *)&v10[1] - v11[1])))
                         + (float)((float)(*(float *)&v10[2] - v11[2]) * (float)(*(float *)&v10[2] - v11[2]));
  if ( *(float *)g4_m128_ptr<int32_t>(v6) > 0.0 )
  {
    result = ((_mm_cvtsi128_si32(v6) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v6) >> 1));
    v7 = (float)(*(float *)&result * 1.5)
       - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v6)) * *(float *)&result)
               * (float)(*(float *)&result * *(float *)&result));
    v8 = (float)(v7 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v6)) * v7) * (float)(v7 * v7));
    v5 = (float)((float)(1.5 * v8) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v6)) * v8) * (float)(v8 * v8)))
       * *(float *)g4_m128_ptr<int32_t>(v6);
  }
  *((float *)self + 20) = v5;
  return result;
}


