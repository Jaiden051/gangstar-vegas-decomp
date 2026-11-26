#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpWorldLi.h"

// ----------------------------------------------------------------------------
// Function: hkpWorldLinearCaster::Destroy  (binary VA: 0x1ad2470)
// Original: hkpWorldLinearCaster::~hkpWorldLinearCaster
// ----------------------------------------------------------------------------
void hkpWorldLinearCaster::Destroy(hkpWorldLinearCaster::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2055238);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldLinearCaster::addBroadPhaseHandle  (binary VA: 0x1ad2490)
// Original: hkpWorldLinearCaster::addBroadPhaseHandle
// ----------------------------------------------------------------------------
long double hkpWorldLinearCaster::addBroadPhaseHandle(hkpWorldLinearCaster::Self *self, const hkpBroadPhaseHandle *a2)
{
  int *v2;
  typedef int _g4_t_v4;
  typedef uint8_t _g4_t_v5[9];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v5)) > _g4_s1 ? (15u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 15u);

  v2 = (int *)((char *)a2 + *((char *)a2 + 5));
  v4 = *v2;
  if ( *v2 != 0 && *((int **)self + 5) != v2 )
  {
    (*(void (**)(uint8_t *))(**((uint32_t **)self + 2) + 8))(v5);
    if ( v5[0] != 0 )
      (*(void (**)(uint32_t, int *, char *, uint32_t, uint32_t))(*((uint32_t *)self + 8)
                                                                 + 20
                                                                 * *(uint8_t *)(*(uint8_t *)(v4 + 8)
                                                                                      + 35 * *((uint32_t *)self + 6)
                                                                                      + *((uint32_t *)self + 8)
                                                                                      + 416)
                                                                 + 2880))(
        *((uint32_t *)self + 5),
        v2,
        (char *)self + 32,
        *((uint32_t *)self + 3),
        *((uint32_t *)self + 4));
  }
  return *(float *)(*((uint32_t *)self + 3) + 4);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldLinearCaster::Destroy_ea1ad2540  (binary VA: 0x1ad2540)
// Original: hkpWorldLinearCaster::~hkpWorldLinearCaster
// ----------------------------------------------------------------------------
void hkpWorldLinearCaster::Destroy_ea1ad2540(hkpWorldLinearCaster::Self *self)
{
  uint32_t *address;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2055238);
  address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  (*(void (**)(uint32_t, hkpWorldLinearCaster::Self *, int))(**(uint32_t **)(*address + 44) + 12))(
    *(uint32_t *)(*address + 44),
    self,
    144);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldLinearCaster::linearCast  (binary VA: 0x1ad2590)
// Original: hkpWorldLinearCaster::linearCast
// ----------------------------------------------------------------------------
int hkpWorldLinearCaster::linearCast(int a1, int a2, uint32_t *a3, float *a4, int a5, uint32_t *a6, int a7, int a8, int a9, int a10)
{
  float v10; // xmm5_4
  float *v11;
  float v12; // xmm6_4
  __m128i v13;
  __m128i v14;
  unsigned int v15; // xmm6_4
  int v16;
  float v17; // xmm3_4
  float v18; // xmm2_4
  unsigned int v19; // xmm0_4
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
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
  typedef int _g4_t_v44;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v22)) > _g4_s1 ? (8u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v23)) > _g4_s2 ? (12u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v24)) > _g4_s3 ? (16u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v25)) > _g4_s4 ? (20u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v26)) > _g4_s5 ? (24u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v27)) > _g4_s6 ? (28u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v28)) > _g4_s7 ? (32u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v29)) > _g4_s8 ? (36u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v30)) > _g4_s9 ? (40u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v31)) > _g4_s10 ? (44u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v32)) > _g4_s11 ? (48u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v33)) > _g4_s12 ? (52u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v34)) > _g4_s13 ? (56u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v35)) > _g4_s14 ? (60u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v36)) > _g4_s15 ? (64u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v37)) > _g4_s16 ? (68u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v38)) > _g4_s17 ? (72u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v39)) > _g4_s18 ? (76u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v40)) > _g4_s19 ? (80u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v41)) > _g4_s20 ? (84u + sizeof(_g4_t_v41)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v42)) > _g4_s21 ? (88u + sizeof(_g4_t_v42)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v43)) > _g4_s22 ? (92u + sizeof(_g4_t_v43)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v44)) > _g4_s23 ? (96u + sizeof(_g4_t_v44)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 72u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 76u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 80u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 84u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 88u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 92u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 96u);

  v10 = 0.0;
  *(uint32_t *)(a1 + 12) = a9;
  *(uint32_t *)(a1 + 16) = a10;
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(a4);
  *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(a3);
  *(uint32_t *)(a1 + 8) = a5;
  *(uint32_t *)(a1 + 24) = *(uint8_t *)(*a3 + 8);
  *(uint32_t *)(a1 + 32) = *a6;
  *(uint32_t *)(a1 + 36) = a6[1];
  *(uint32_t *)(a1 + 40) = a6[2];
  *(uint32_t *)(a1 + 44) = a6[3];
  *(uint32_t *)(a1 + 48) = a6[4];
  *(uint32_t *)(a1 + 52) = a6[5];
  *(uint32_t *)(a1 + 56) = a6[6];
  *(uint32_t *)(a1 + 64) = a6[8];
  *(uint32_t *)(a1 + 68) = a6[9];
  *(uint32_t *)(a1 + 72) = a6[10];
  *(uint32_t *)(a1 + 76) = a6[11];
  *(uint32_t *)(a1 + 80) = a6[12];
  *(uint32_t *)(a1 + 84) = a6[13];
  *(uint32_t *)(a1 + 88) = a6[14];
  *(uint32_t *)(a1 + 92) = a6[15];
  *(uint32_t *)(a1 + 96) = a6[16];
  *(uint32_t *)(a1 + 100) = a6[17];
  *(uint32_t *)(a1 + 104) = a6[18];
  *(uint32_t *)(a1 + 108) = a6[19];
  *(uint32_t *)(a1 + 136) = a7;
  v11 = (float *)a3[2];
  v12 = a4[1];
  v44 = 0;
g4_m128_raw(v13) = *(unsigned int *)a4;
  *(float *)g4_m128_ptr<int32_t>(v13) = *(float *)g4_m128_ptr<int32_t>(v13) - v11[12];
  v23 = v12 - v11[13];
  v14 = v13;
  v22 = a4[2] - v11[14];
  v21 = a4[3] - v11[15];
  *(float *)g4_m128_ptr<int32_t>(v14) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v13) * *(float *)g4_m128_ptr<int32_t>(v13)) + (float)(v23 * v23))
                          + (float)(v22 * v22);
  v15 = *((uint32_t *)a4 + 5);
  *(uint32_t *)(a1 + 112) =g4_m128_lane<int32_t>(v13, 0);
  *(float *)(a1 + 116) = v23;
  *(float *)(a1 + 120) = v22;
  *(float *)(a1 + 124) = v21;
  if ( *(float *)g4_m128_ptr<int32_t>(v14) > 0.0 )
  {
    v16 = ((_mm_cvtsi128_si32(v14) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v14) >> 1));
    v17 = (float)(*(float *)&v16 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v14)) * *(float *)&v16)
                * (float)(*(float *)&v16 * *(float *)&v16));
    v18 = (float)(v17 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v14)) * v17) * (float)(v17 * v17));
    v10 = (float)((float)(1.5 * v18)
                - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v14)) * v18) * (float)(v18 * v18)))
        * *(float *)g4_m128_ptr<int32_t>(v14);
  }
  *(float *)(a1 + 132) = v10;
  *(uint32_t *)(a1 + 44) = v15;
  G4_VCALL<void>(*a3, 24, a3[2], *((uint32_t *)a4 + 5), &v24);
  v44 = a8;
  v40 = (float)(v28 - v24) * 0.5;
  v43 = (float)(v31 - v27) * 0.5;
  v19 = *((uint32_t *)a4 + 4);
  v33 = v25 + (float)((float)(v29 - v25) * 0.5);
  v34 = v26 + (float)((float)(v30 - v26) * 0.5);
  v32 = v24 + v40;
  v35 = v27 + v43;
  v36 = (float)(v24 + v40) + *(float *)g4_m128_ptr<int32_t>(v13);
  v37 = v33 + v23;
  v38 = v34 + v22;
  v41 = (float)(v29 - v25) * 0.5;
  v39 = (float)(v27 + v43) + v21;
  v42 = (float)(v30 - v26) * 0.5;
  *(uint32_t *)(a1 + 128) = v19;
  return G4_VCALL<int>(a2, 124, &v32, a1);
}

// ----------------------------------------------------------------------------
// Function: hkpWorldLinearCastJob::setRunsOnSpuOrPpu  (binary VA: 0x1aea430)
// Original: hkpWorldLinearCastJob::setRunsOnSpuOrPpu
// ----------------------------------------------------------------------------
void hkpWorldLinearCastJob::setRunsOnSpuOrPpu()
{
  ;
}


