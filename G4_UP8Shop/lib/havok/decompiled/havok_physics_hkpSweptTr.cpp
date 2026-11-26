#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpSweptTr.h"

// ----------------------------------------------------------------------------
// Function: hkpSweptTransformDisplayViewer::getProcessTag  (binary VA: 0x183bc90)
// Original: hkpSweptTransformDisplayViewer::getProcessTag
// ----------------------------------------------------------------------------
int hkpSweptTransformDisplayViewer::getProcessTag()
{
  return hkpSweptTransformDisplayViewer::m_tag;
}

// ----------------------------------------------------------------------------
// Function: hkpSweptTransformDisplayViewer::inactiveEntityMovedCallback  (binary VA: 0x183be70)
// Original: hkpSweptTransformDisplayViewer::inactiveEntityMovedCallback
// ----------------------------------------------------------------------------
int hkpSweptTransformDisplayViewer::inactiveEntityMovedCallback(hkpSweptTransformDisplayViewer::Self *self, hkpEntity::Self *a2)
{
  float *v2;
  float v3; // xmm3_4
  float v4; // xmm5_4
  int v5;
  float v6; // xmm4_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm5_4
  int v16;
  float v17; // xmm4_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  typedef hkpSweptTransformDisplayViewer::Self *_g4_t_v26;
  typedef uint8_t _g4_t_v27[4];
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
  typedef hkpSweptTransformDisplayViewer::Self **_g4_t_v44;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v26)) > _g4_s0 ? (4u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v27)) > _g4_s1 ? (8u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v28)) > _g4_s2 ? (12u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v29)) > _g4_s3 ? (16u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v30)) > _g4_s4 ? (20u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v31)) > _g4_s5 ? (24u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v32)) > _g4_s6 ? (28u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v33)) > _g4_s7 ? (32u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v34)) > _g4_s8 ? (36u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v35)) > _g4_s9 ? (40u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v36)) > _g4_s10 ? (44u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v37)) > _g4_s11 ? (48u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v38)) > _g4_s12 ? (52u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v39)) > _g4_s13 ? (56u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v40)) > _g4_s14 ? (60u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v41)) > _g4_s15 ? (64u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v42)) > _g4_s16 ? (68u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v43)) > _g4_s17 ? (72u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v44)) > _g4_s18 ? (84u + sizeof(_g4_t_v44)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 68u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 72u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 84u);

  v44 = &self;
  v2 = (float *)a2;
  v26 = self;
  hkRotationf::set((hkRotationf::Self *)&v28, (hkpEntity::Self *)((char *)a2 + 336));
  v3 = v2[92];
  v4 = v2[93];
  v5 = *((uint32_t *)v26 + 6);
  v6 = v2[94];
  v7 = (float)((float)(v29 * v3) + (float)(v33 * v4)) + (float)(v37 * v6);
  v8 = (float)((float)(v30 * v3) + (float)(v34 * v4)) + (float)(v38 * v6);
  v9 = (float)((float)(v31 * v3) + (float)(v35 * v4)) + (float)(v39 * v6);
  v10 = v2[76] - (float)((float)((float)(v3 * v28) + (float)(v4 * v32)) + (float)(v6 * v36));
  v11 = v2[77] - v7;
  v12 = v2[78] - v8;
  v13 = v2[79] - v9;
  v40 = v10;
  v41 = v11;
  v42 = v12;
  v43 = v13;
  (*(void (**)(uint8_t *, int, float *, int, uint32_t))(*(uint32_t *)v5 + 36))(
    v27,
    v5,
    &v28,
    (int)(uintptr_t)(v2) + 17,
    hkpSweptTransformDisplayViewer::m_tag);
  hkRotationf::set((hkRotationf::Self *)&v28, (const hkQuaternionf::Self *)(v2 + 88));
  v14 = v2[92];
  v15 = v2[93];
  v16 = *((uint32_t *)v26 + 6);
  v17 = v2[94];
  v18 = (float)((float)(v29 * v14) + (float)(v33 * v15)) + (float)(v37 * v17);
  v19 = (float)((float)(v30 * v14) + (float)(v34 * v15)) + (float)(v38 * v17);
  v20 = (float)((float)(v31 * v14) + (float)(v35 * v15)) + (float)(v39 * v17);
  v21 = v2[80] - (float)((float)((float)(v14 * v28) + (float)(v15 * v32)) + (float)(v17 * v36));
  v22 = v2[81] - v18;
  v23 = v2[82] - v19;
  v24 = v2[83] - v20;
  v40 = v21;
  v41 = v22;
  v42 = v23;
  v43 = v24;
  return (*(int (**)(uint8_t *, int, float *, int, uint32_t))(*(uint32_t *)v16 + 36))(
           v27,
           v16,
           &v28,
           (int)(uintptr_t)(v2) + 18,
           hkpSweptTransformDisplayViewer::m_tag);
}

// ----------------------------------------------------------------------------
// Function: hkpSweptTransformDisplayViewer::postSimulationCallback  (binary VA: 0x183c100)
// Original: hkpSweptTransformDisplayViewer::postSimulationCallback
// ----------------------------------------------------------------------------
int hkpSweptTransformDisplayViewer::postSimulationCallback(hkpSweptTransformDisplayViewer::Self *self, hkpWorld::Self *a2)
{
  int *address;
  int v3;
  uint32_t *v4;
  uint64_t v5; // rax
  int v6;
  int v7;
  int v8;
  float *v9;
  float v10; // xmm3_4
  float v11; // xmm5_4
  int v12;
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm5_4
  int v16;
  float v17; // xmm4_4
  uint64_t v18; // rax
  int v19;
  uint32_t *v20;
  typedef int *_g4_t_v22;
  typedef hkpWorld::Self *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef hkpSweptTransformDisplayViewer::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint8_t _g4_t_v28[4];
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
  typedef float _g4_t_v44;
  typedef hkpSweptTransformDisplayViewer::Self **_g4_t_v45;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v23)) > _g4_s1 ? (4u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v24)) > _g4_s2 ? (8u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v25)) > _g4_s3 ? (12u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v26)) > _g4_s4 ? (20u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v27)) > _g4_s5 ? (24u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v28)) > _g4_s6 ? (28u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v29)) > _g4_s7 ? (32u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v30)) > _g4_s8 ? (36u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v31)) > _g4_s9 ? (40u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v32)) > _g4_s10 ? (44u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v33)) > _g4_s11 ? (48u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v34)) > _g4_s12 ? (52u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v35)) > _g4_s13 ? (56u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v36)) > _g4_s14 ? (60u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v37)) > _g4_s15 ? (64u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v38)) > _g4_s16 ? (68u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v39)) > _g4_s17 ? (72u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v40)) > _g4_s18 ? (76u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v41)) > _g4_s19 ? (80u + sizeof(_g4_t_v41)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v42)) > _g4_s20 ? (84u + sizeof(_g4_t_v42)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v43)) > _g4_s21 ? (88u + sizeof(_g4_t_v43)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v44)) > _g4_s22 ? (92u + sizeof(_g4_t_v44)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v45)) > _g4_s23 ? (104u + sizeof(_g4_t_v45)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 64u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 68u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 72u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 76u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 80u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 84u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 88u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 92u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 104u);

  v45 = &self;
  v25 = self;
  v23 = a2;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v3 = *address;
  v22 = address;
  v4 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v4) < *(uint32_t *)(*address + 12) )
  {
    *v4 = (uint32_t)(uintptr_t)("TthkpSweptTransformDisplayViewer");
    v5 = __rdtsc();
    v4[1] = v5;
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v4 + 3);
  }
  v24 = 0;
  v6 = *((uint32_t *)v23 + 11);
  if ( v6 > 0 )
  {
    do
    {
      v26 = *(uint32_t *)(*((uint32_t *)v23 + 10) + 4 * v24);
      if ( *(int *)(v26 + 80) > 0 )
      {
        v27 = 0;
        v7 = *(uint32_t *)(*((uint32_t *)v23 + 10) + 4 * v24);
        v8 = 0;
        do
        {
          v9 = *(float **)(*(uint32_t *)(v7 + 76) + 4 * v8);
          hkRotationf::set((hkRotationf::Self *)&v29, (const hkQuaternionf::Self *)(v9 + 84));
          v10 = v9[92];
          v11 = v9[93];
          v12 = *((uint32_t *)v25 + 6);
          v13 = v9[94];
          v41 = v9[76] - (float)((float)((float)(v10 * v29) + (float)(v11 * v33)) + (float)(v13 * v37));
          v42 = v9[77] - (float)((float)((float)(v30 * v10) + (float)(v34 * v11)) + (float)(v38 * v13));
          v43 = v9[78] - (float)((float)((float)(v31 * v10) + (float)(v35 * v11)) + (float)(v39 * v13));
          v44 = v9[79] - (float)((float)((float)(v32 * v10) + (float)(v36 * v11)) + (float)(v40 * v13));
          (*(void (**)(uint8_t *))(*(uint32_t *)v12 + 36))(v28);
          hkRotationf::set((hkRotationf::Self *)&v29, (const hkQuaternionf::Self *)(v9 + 88));
          v14 = v9[92];
          v15 = v9[93];
          v9 = (float *)((char *)v9 + 18);
          v16 = *((uint32_t *)v25 + 6);
          v17 = *(float *)((char *)v9 + 358);
          v41 = *(float *)((char *)v9 + 302)
              - (float)((float)((float)(v14 * v29) + (float)(v15 * v33)) + (float)(v17 * v37));
          v42 = *(float *)((char *)v9 + 306)
              - (float)((float)((float)(v30 * v14) + (float)(v34 * v15)) + (float)(v38 * v17));
          v43 = *(float *)((char *)v9 + 310)
              - (float)((float)((float)(v31 * v14) + (float)(v35 * v15)) + (float)(v39 * v17));
          v44 = *(float *)((char *)v9 + 314)
              - (float)((float)((float)(v32 * v14) + (float)(v36 * v15)) + (float)(v40 * v17));
          (*(void (**)(uint8_t *))(*(uint32_t *)v16 + 36))(v28);
          v7 = v26;
          v8 = ++v27;
        }
        while ( *(uint32_t *)(v26 + 80) > v27 );
        v6 = *((uint32_t *)v23 + 11);
      }
      ++v24;
    }
    while ( v24 < v6 );
  }
  LODWORD(v18) = (uint32_t)(uintptr_t)(v22);
  v19 = *v22;
  v20 = *(uint32_t **)(*v22 + 4);
  if ( (unsigned int)(uintptr_t)(v20) < *(uint32_t *)(*v22 + 12) )
  {
    *v20 = (uint32_t)(uintptr_t)("Et");
    v18 = __rdtsc();
    v20[1] = v18;
    *(uint32_t *)(v19 + 4) = (uint32_t)(uintptr_t)(v20 + 3);
  }
  return v18;
}

// ----------------------------------------------------------------------------
// Function: hkpSweptTransformDisplayViewer::registerViewer  (binary VA: 0x183c460)
// Original: hkpSweptTransformDisplayViewer::registerViewer
// ----------------------------------------------------------------------------
int hkpSweptTransformDisplayViewer::registerViewer()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "Swept Transforms",
             hkpSweptTransformDisplayViewer::create);
  hkpSweptTransformDisplayViewer::m_tag = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSweptTransformDisplayViewer::Construct  (binary VA: 0x183c4b0)
// Original: hkpSweptTransformDisplayViewer::hkpSweptTransformDisplayViewer
// ----------------------------------------------------------------------------
void hkpSweptTransformDisplayViewer::Construct(uint32_t *a1, int a2)
{
  int address;
  hkpShapeDisplayBuilder::Self *v3;
  uint8_t v4[32];

  hkpWorldViewerBase::Construct(a1, a2);
  a1[12] = 0;
  a1[13] = 0;
  *a1 = ((uint32_t)(uintptr_t)&off_20A3328);
  a1[14] = 0x80000000;
  a1[2] = ((uint32_t)(uintptr_t)&off_20A3370);
  a1[8] = ((uint32_t)(uintptr_t)&off_20A339C);
  a1[10] = ((uint32_t)(uintptr_t)&off_20A33B4);
  a1[11] = ((uint32_t)(uintptr_t)&off_20A33D8);
  hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Construct((hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Self *)v4);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v3 = (hkpShapeDisplayBuilder::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                   *(uint32_t *)(*(uint32_t *)address + 44),
                                   16);
  hkpShapeDisplayBuilder::Construct(
    v3,
    (const hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Self *)v4);
  a1[15] = (uint32_t)(uintptr_t)(v3);
}

// ----------------------------------------------------------------------------
// Function: hkpSweptTransformDisplayViewer::create  (binary VA: 0x183c560)
// Original: hkpSweptTransformDisplayViewer::create
// ----------------------------------------------------------------------------
uint32_t * hkpSweptTransformDisplayViewer::create(int a1)
{
  int address;
  uint32_t *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   64);
  hkpSweptTransformDisplayViewer::Construct(v2, a1);
  if ( v2 != nullptr )
    return v2 + 2;
  else
    return nullptr;
}

// ----------------------------------------------------------------------------
// Function: hkpSweptTransformDisplayViewer::addWorld  (binary VA: 0x183c5c0)
// Original: hkpSweptTransformDisplayViewer::addWorld
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpSweptTransformDisplayViewer::addWorld(hkpSweptTransformDisplayViewer::Self *self, hkpWorld::Self *a2)
{
  int address;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  hkpWorld::Self *result;
  int v12;
  int v13;
  hkpWorldPostSimulationListener::Self *v14;
  hkpWorldPostSimulationListener::Self *v15;
  hkpWorldPostSimulationListener::Self *v16;
  int v17;
  int v18;
  uint32_t *v19;

  hkpWorld::addEntityListener(a2, (int)(uintptr_t)(self) + 40);
  hkpWorld::addWorldPostSimulationListener(a2, (hkpSweptTransformDisplayViewer::Self *)((char *)self + 44));
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v3 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   16);
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0x80000000;
  *v3 = (uint32_t)(uintptr_t)(a2);
  v4 = *((uint32_t *)self + 13);
  if ( v4 == (*((uint32_t *)self + 14) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpSweptTransformDisplayViewer::Self *)((char *)self + 48),
      4,
      (int)(uintptr_t)(v3));
    v4 = *((uint32_t *)self + 13);
    v3 = v19;
  }
  v17 = 0;
  *(uint32_t *)(*((uint32_t *)self + 12) + 4 * v4) = (uint32_t)(uintptr_t)(v3);
  ++*((uint32_t *)self + 13);
  v5 = *((uint32_t *)a2 + 11);
  if ( v5 > 0 )
  {
    do
    {
      v6 = *(uint32_t *)(*((uint32_t *)a2 + 10) + 4 * v17);
      if ( *(int *)(v6 + 80) > 0 )
      {
        v7 = 0;
        do
        {
          v14 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v6 + 76) + 4 * v7++);
          G4_VCALL<void>(self, 48, v14);
        }
        while ( *(uint32_t *)(v6 + 80) > v7 );
        v5 = *((uint32_t *)a2 + 11);
      }
      ++v17;
    }
    while ( v17 < v5 );
  }
  v18 = 0;
  v8 = *((uint32_t *)a2 + 14);
  if ( v8 > 0 )
  {
    do
    {
      v9 = *(uint32_t *)(*((uint32_t *)a2 + 13) + 4 * v18);
      if ( *(int *)(v9 + 80) > 0 )
      {
        v10 = 0;
        do
        {
          v15 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v9 + 76) + 4 * v10++);
          G4_VCALL<void>(self, 48, v15);
        }
        while ( *(uint32_t *)(v9 + 80) > v10 );
        v8 = *((uint32_t *)a2 + 14);
      }
      ++v18;
    }
    while ( v18 < v8 );
  }
  result = a2;
  v12 = 0;
  v13 = *((uint32_t *)a2 + 8);
  if ( *(int *)(v13 + 80) > 0 )
  {
    do
    {
      v16 = *(hkpWorldPostSimulationListener::Self **)(*(uint32_t *)(v13 + 76) + 4 * v12++);
      result = (hkpWorld::Self *)G4_VCALL<int>(self, 48, v16);
    }
    while ( *(uint32_t *)(v13 + 80) > v12 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSweptTransformDisplayViewer::init  (binary VA: 0x183c780)
// Original: hkpSweptTransformDisplayViewer::init
// ----------------------------------------------------------------------------
int hkpSweptTransformDisplayViewer::init(hkpSweptTransformDisplayViewer::Self *self)
{
  int result;
  int v2;
  hkpWorld::Self *v3;

  result = *((uint32_t *)self + 9);
  if ( result != 0 && *(int *)(result + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(hkpWorld::Self **)(*(uint32_t *)(result + 108) + 4 * v2++);
      hkpSweptTransformDisplayViewer::addWorld(self, v3);
      result = *((uint32_t *)self + 9);
    }
    while ( v2 < *(uint32_t *)(result + 112) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSweptTransformDisplayViewer::worldAddedCallback  (binary VA: 0x183c7f0)
// Original: hkpSweptTransformDisplayViewer::worldAddedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpSweptTransformDisplayViewer::worldAddedCallback(hkpSweptTransformDisplayViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpSweptTransformDisplayViewer::addWorld(self, a2);
}

// ----------------------------------------------------------------------------
// Function: hkpSweptTransformDisplayViewer::removeAllGeometries  (binary VA: 0x183c830)
// Original: hkpSweptTransformDisplayViewer::removeAllGeometries
// ----------------------------------------------------------------------------
int hkpSweptTransformDisplayViewer::removeAllGeometries(hkpSweptTransformDisplayViewer::Self *self, int a2)
{
  int result;
  int v3;
  int v4;
  uint8_t v5[28];

  result = *((uint32_t *)self + 12);
  v3 = *(uint32_t *)(result + 4 * a2);
  if ( *(int *)(v3 + 8) > 0 )
  {
    v4 = 0;
    do
    {
      ++v4;
      result = (*(int (**)(uint8_t *))(**((uint32_t **)self + 6) + 60))(v5);
    }
    while ( *(uint32_t *)(v3 + 8) > v4 );
  }
  *(uint32_t *)(v3 + 8) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSweptTransformDisplayViewer::findWorld  (binary VA: 0x183c8b0)
// Original: hkpSweptTransformDisplayViewer::findWorld
// ----------------------------------------------------------------------------
int hkpSweptTransformDisplayViewer::findWorld(hkpSweptTransformDisplayViewer::Self *self, const hkpWorld::Self *a2)
{
  int v2;
  const hkpWorld::Self ***v3;
  int result;

  v2 = *((uint32_t *)self + 13);
  if ( v2 <= 0 )
    return -1;
  v3 = *((const hkpWorld::Self ****)self + 12);
  result = 0;
  if ( **v3 != a2 )
  {
    while ( ++result != v2 )
    {
      if ( *v3[result] == a2 )
        return result;
    }
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSweptTransformDisplayViewer::entityRemovedCallback  (binary VA: 0x183c8f0)
// Original: hkpSweptTransformDisplayViewer::entityRemovedCallback
// ----------------------------------------------------------------------------
void hkpSweptTransformDisplayViewer::entityRemovedCallback(hkpSweptTransformDisplayViewer::Self *self, const hkpWorld::Self **a2)
{
  int World;
  int v3;
  char *v4;
  int v5;
  char **v6;
  int v7;
  int v8;
  char *v9;
  int v10;
  char **v11;
  int v12;
  int v13;
  int v14;
  int v15;
  typedef int _g4_t_v16;
  typedef uint8_t _g4_t_v17[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);

  if ( a2[4] != nullptr )
  {
    World = hkpSweptTransformDisplayViewer::findWorld(self, a2[2]);
    if ( World >= 0 )
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 12) + 4 * World);
      v16 = v3;
      v4 = (char *)a2 + 17;
      (*(void (**)(uint8_t *, uint32_t))(**((uint32_t **)self + 6) + 60))(v17, *((uint32_t *)self + 6));
      v5 = *(uint32_t *)(v3 + 8);
      if ( v5 > 0 )
      {
        v6 = *(char ***)(v3 + 4);
        if ( v4 == *v6 )
        {
          v8 = 0;
          v7 = 0;
LABEL_15:
          v14 = v5 - 1;
          *(uint32_t *)(v16 + 8) = v14;
          if ( v7 != v14 )
            v6[v8] = v6[v14];
        }
        else
        {
          v7 = 0;
          while ( ++v7 != v5 )
          {
            v8 = v7;
            if ( v4 == v6[v7] )
              goto LABEL_15;
          }
        }
      }
      v9 = (char *)a2 + 18;
      (*(void (**)(uint8_t *, uint32_t, char *, uint32_t, uint32_t))(**((uint32_t **)self + 6) + 60))(
        v17,
        *((uint32_t *)self + 6),
        (char *)a2 + 18,
        hkpSweptTransformDisplayViewer::m_tag,
        0);
      v10 = *(uint32_t *)(v16 + 8);
      if ( v10 > 0 )
      {
        v11 = *(char ***)(v16 + 4);
        if ( v9 == *v11 )
        {
          v13 = 0;
          v12 = 0;
LABEL_18:
          v15 = v10 - 1;
          *(uint32_t *)(v16 + 8) = v15;
          if ( v12 != v15 )
            v11[v13] = v11[v15];
        }
        else
        {
          v12 = 0;
          while ( ++v12 != v10 )
          {
            v13 = v12;
            if ( v9 == v11[v12] )
              goto LABEL_18;
          }
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpSweptTransformDisplayViewer::removeWorld  (binary VA: 0x183ca60)
// Original: hkpSweptTransformDisplayViewer::removeWorld
// ----------------------------------------------------------------------------
int hkpSweptTransformDisplayViewer::removeWorld(hkpSweptTransformDisplayViewer::Self *self, int a2)
{
  int result;
  uint32_t *v3;
  int v4;
  int address;
  int v6;

  hkpWorld::removeEntityListener(**(uint32_t ***)(*((uint32_t *)self + 12) + 4 * a2), (int)(uintptr_t)(self) + 40);
  hkpWorld::removeWorldPostSimulationListener(
    **(hkpWorld::Self ***)(*((uint32_t *)self + 12) + 4 * a2),
    (hkpSweptTransformDisplayViewer::Self *)((char *)self + 44));
  hkpSweptTransformDisplayViewer::removeAllGeometries(self, a2);
  result = *((uint32_t *)self + 12);
  v3 = *(uint32_t **)(result + 4 * a2);
  if ( v3 != nullptr )
  {
    v4 = v3[3];
    v3[2] = 0;
    if ( v4 >= 0 )
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v3[1],
        4 * v4);
    v3[1] = 0;
    v3[3] = 0x80000000;
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      v3,
      16);
    result = *((uint32_t *)self + 12);
  }
  v6 = *((uint32_t *)self + 13) - 1;
  *((uint32_t *)self + 13) = v6;
  if ( a2 != v6 )
    *(uint32_t *)(result + 4 * a2) = *(uint32_t *)(result + 4 * v6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSweptTransformDisplayViewer::Destroy  (binary VA: 0x183cb50)
// Original: hkpSweptTransformDisplayViewer::~hkpSweptTransformDisplayViewer
// ----------------------------------------------------------------------------
void hkpSweptTransformDisplayViewer::Destroy(hkpSweptTransformDisplayViewer::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;
  int v8;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3328);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A3370);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A339C);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A33B4);
  v1 = *((uint32_t *)self + 15);
  *((uint32_t *)self + 11) = ((uint32_t)(uintptr_t)&off_20A33D8);
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
  v6 = *((uint32_t *)self + 13) - 1;
  if ( v6 >= 0 )
  {
    do
    {
      v8 = v6--;
      hkpSweptTransformDisplayViewer::removeWorld(self, v8);
    }
    while ( v6 != -1 );
  }
  v7 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 13) = 0;
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 12),
      4 * v7);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  *((uint32_t *)self + 11) = ((uint32_t)(uintptr_t)&off_209E868);
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(&off_2054DE8);
  hkpWorldViewerBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpSweptTransformDisplayViewer::Destroy_ea183cca0  (binary VA: 0x183cca0)
// Original: hkpSweptTransformDisplayViewer::~hkpSweptTransformDisplayViewer
// ----------------------------------------------------------------------------
void hkpSweptTransformDisplayViewer::Destroy_ea183cca0(hkpSweptTransformDisplayViewer::Self *self)
{
  int v1;
  int v2;

  hkpSweptTransformDisplayViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 64;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSweptTransformDisplayViewer::worldRemovedCallback  (binary VA: 0x183cd40)
// Original: hkpSweptTransformDisplayViewer::worldRemovedCallback
// ----------------------------------------------------------------------------
int hkpSweptTransformDisplayViewer::worldRemovedCallback(hkpSweptTransformDisplayViewer::Self *self, hkpWorld::Self *a2)
{
  int result;

  result = hkpSweptTransformDisplayViewer::findWorld(self, a2);
  if ( result >= 0 )
    return hkpSweptTransformDisplayViewer::removeWorld(self, result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSweptTransformDisplayViewer::entityAddedCallback  (binary VA: 0x183ce00)
// Original: hkpSweptTransformDisplayViewer::entityAddedCallback
// ----------------------------------------------------------------------------
int hkpSweptTransformDisplayViewer::entityAddedCallback(hkpSweptTransformDisplayViewer::Self *self, const hkpWorld::Self **a2, float *a3, char *a4, int a5)
{
  hkpEntity::Self *v5;
  int result;
  hkpSweptTransformDisplayViewer::Self *v7;
  int v8;
  uint32_t *v9;
  int v10;
  int64_t v11; // rax
  char v12; // di
  hkReferencedObject::Self **v13;
  int v14;
  int v15;
  float v16; // xmm3_4
  float v17; // xmm5_4
  float v18; // xmm4_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm3_4
  float v27; // xmm5_4
  float v28; // xmm4_4
  float v29; // xmm2_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm2_4
  float v35; // xmm1_4
  char *v36;
  int v37;
  int v38;
  char *v39;
  bool v40;
  int v41;
  uint32_t *v42;
  int v43;
  char *v44;
  int v45;
  int v46;
  int *v47;
  uint32_t *v48;
  int v49;
  int v50;
  int v51;
  char *savedregs;
  int64_t *retaddr;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef char *_g4_t_v54;
  typedef char *_g4_t_v55;
  typedef uint64_t _g4_t_v56;
  typedef uint64_t _g4_t_v57;
  typedef uint64_t _g4_t_v58;
  typedef uint64_t _g4_t_v59;
  typedef uint64_t _g4_t_v60;
  typedef uint64_t _g4_t_v61;
  typedef hkString::Self *_g4_t_v62;
  typedef const hkpWorld::Self *_g4_t_v63;
  typedef uint32_t *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef hkpSweptTransformDisplayViewer::Self *_g4_t_v66;
  typedef char _g4_t_v67;
  typedef char _g4_t_v68[4];
  typedef uint8_t _g4_t_v69[16];
  typedef int64_t _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef hkReferencedObject::Self *_g4_t_v73;
  typedef hkReferencedObject::Self **_g4_t_v74;
  typedef int _g4_t_v75;
  typedef uint8_t _g4_t_v76[12];
  typedef uint8_t _g4_t_v77[16];
  typedef float _g4_t_v78[16];
  typedef float _g4_t_v79[16];
  typedef uint32_t _g4_t_v80[2];
  typedef int64_t _g4_t_v81;
  typedef char _g4_t_v82;
  typedef hkpSweptTransformDisplayViewer::Self **_g4_t_v83;
  typedef uint32_t *_g4_t_v84;
  typedef int _g4_t_v85;
  enum : size_t {
    _g4_s0 = 912u,
    _g4_s1 = (4u + sizeof(_g4_t_v52)) > _g4_s0 ? (4u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v53)) > _g4_s1 ? (8u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v54)) > _g4_s2 ? (48u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v55)) > _g4_s3 ? (56u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v56)) > _g4_s4 ? (56u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v57)) > _g4_s5 ? (56u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v58)) > _g4_s6 ? (56u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v59)) > _g4_s7 ? (56u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v60)) > _g4_s8 ? (56u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v61)) > _g4_s9 ? (56u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v62)) > _g4_s10 ? (64u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v63)) > _g4_s11 ? (68u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v64)) > _g4_s12 ? (72u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v65)) > _g4_s13 ? (72u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v66)) > _g4_s14 ? (76u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (83u + sizeof(_g4_t_v67)) > _g4_s15 ? (83u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v68)) > _g4_s16 ? (84u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v69)) > _g4_s17 ? (88u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v70)) > _g4_s18 ? (104u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v71)) > _g4_s19 ? (112u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v72)) > _g4_s20 ? (116u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v73)) > _g4_s21 ? (120u + sizeof(_g4_t_v73)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v74)) > _g4_s22 ? (124u + sizeof(_g4_t_v74)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v75)) > _g4_s23 ? (128u + sizeof(_g4_t_v75)) : _g4_s23,
    _g4_s25 = (140u + sizeof(_g4_t_v76)) > _g4_s24 ? (140u + sizeof(_g4_t_v76)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v77)) > _g4_s25 ? (152u + sizeof(_g4_t_v77)) : _g4_s25,
    _g4_s27 = (168u + sizeof(_g4_t_v78)) > _g4_s26 ? (168u + sizeof(_g4_t_v78)) : _g4_s26,
    _g4_s28 = (232u + sizeof(_g4_t_v79)) > _g4_s27 ? (232u + sizeof(_g4_t_v79)) : _g4_s27,
    _g4_s29 = (296u + sizeof(_g4_t_v80)) > _g4_s28 ? (296u + sizeof(_g4_t_v80)) : _g4_s28,
    _g4_s30 = (304u + sizeof(_g4_t_v81)) > _g4_s29 ? (304u + sizeof(_g4_t_v81)) : _g4_s29,
    _g4_s31 = (312u + sizeof(_g4_t_v82)) > _g4_s30 ? (312u + sizeof(_g4_t_v82)) : _g4_s30,
    _g4_s32 = (816u + sizeof(_g4_t_v83)) > _g4_s31 ? (816u + sizeof(_g4_t_v83)) : _g4_s31,
    _g4_s33 = (824u + sizeof(_g4_t_v84)) > _g4_s32 ? (824u + sizeof(_g4_t_v84)) : _g4_s32,
    _g4_s34 = (828u + sizeof(_g4_t_v85)) > _g4_s33 ? (828u + sizeof(_g4_t_v85)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 4u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 8u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 56u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 56u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 56u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 56u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 56u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 56u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 64u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 68u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 72u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 72u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 76u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 83u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 84u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 88u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 104u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 112u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 116u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 120u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 124u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 128u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 140u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 152u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 168u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 232u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 296u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 304u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 312u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 816u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 824u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 828u);

  v83 = &self;
  v5 = (hkpEntity::Self *)a2;
  result = (int)(uintptr_t)(self);
  v7 = self;
  v66 = self;
  if ( a2[4] == nullptr )
    return result;
  v63 = a2[2];
  result = hkpSweptTransformDisplayViewer::findWorld(self, v63);
  if ( result < 0 )
    return result;
  result = *(uint32_t *)(*((uint32_t *)v7 + 12) + 4 * result);
  v64 = (uint32_t *)result;
  if ( *((uint8_t *)v5 + 232) == 5 )
    return result;
  result = *((uint32_t *)v5 + 4);
  v62 = (hkString::Self *)result;
  if ( result == 0 )
    return result;
  if ( *((uint32_t *)v66 + 5) != 0 || *((uint32_t *)v66 + 4) != 0 )
  {
    (*(void (**)(char *))(**((uint32_t **)v66 + 6) + 140))(&v67);
    if ( v67 != 0 )
    {
      v8 = *((uint32_t *)v5 + 32);
      v80[1] = -65535;
      v81 = 0x7547D6FD1675600ALL;
      v80[0] = ((uint32_t)(uintptr_t)&off_20A32E8);
      v82 = 1;
      if ( v8 > 0 )
      {
        v9 = *((uint32_t **)v5 + 31);
        if ( *v9 == 4662 )
        {
LABEL_44:
          v50 = v9[2];
          v51 = v9[3];
LABEL_43:
          v71 = v50;
          v72 = v51;
          v56 = hkCrc64StreamWriter::g_crc64lookupTable[BYTE1(v50)
                                                      ^ LOBYTE(hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)v50 ^ 0xA])
                                                      ^ 0x60]
              ^ ((hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)v50 ^ 0xA] ^ 0x7547D6FD167560uLL) >> 8);
          v57 = hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)(v56 ^ BYTE2(v50))] ^ (v56 >> 8);
          v58 = hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)(v57 ^ HIBYTE(v50))] ^ (v57 >> 8);
          v59 = hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)(v58 ^ v51)] ^ (v58 >> 8);
          v60 = hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)(v59 ^ BYTE1(v51))] ^ (v59 >> 8);
          v61 = hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)(v60 ^ BYTE2(v51))] ^ (v60 >> 8);
          v11 = hkCrc64StreamWriter::g_crc64lookupTable[(uint8_t)(v61 ^ HIBYTE(v51))] ^ (v61 >> 8);
          v12 = 1;
          goto LABEL_13;
        }
        v10 = 0;
        while ( ++v10 != v8 )
        {
          if ( v9[4 * v10] == 4662 )
          {
            v48 = v9 + 4;
            v49 = 0;
            while ( ++v49 != v8 )
            {
              v9 = v48;
              v48 += 4;
              if ( *(v48 - 4) == 4662 )
                goto LABEL_44;
            }
            v50 = 0;
            v51 = 0;
            goto LABEL_43;
          }
        }
      }
      hkpShapeHashUtil::writeShape(v80, v62, 0);
      v11 = v81;
      v12 = v82;
LABEL_13:
      v70 = ~v11;
      goto LABEL_26;
    }
  }
  v12 = 0;
LABEL_26:
  v55 = (char *)v5 + 17;
  hkRotationf::set((hkRotationf::Self *)v78, (hkpEntity::Self *)((char *)v5 + 336));
  v16 = *((float *)v5 + 92);
  v17 = *((float *)v5 + 93);
  v54 = (char *)v5 + 18;
  v18 = *((float *)v5 + 94);
  v19 = (float)((float)(v78[1] * v16) + (float)(v78[5] * v17)) + (float)(v78[9] * v18);
  v20 = (float)((float)(v78[2] * v16) + (float)(v78[6] * v17)) + (float)(v78[10] * v18);
  v21 = (float)((float)(v78[3] * v16) + (float)(v78[7] * v17)) + (float)(v78[11] * v18);
  v22 = *((float *)v5 + 76) - (float)((float)((float)(v16 * v78[0]) + (float)(v17 * v78[4])) + (float)(v18 * v78[8]));
  v23 = *((float *)v5 + 77) - v19;
  v24 = *((float *)v5 + 78) - v20;
  v25 = *((float *)v5 + 79) - v21;
  v78[12] = v22;
  v78[13] = v23;
  v78[14] = v24;
  v78[15] = v25;
  hkRotationf::set((hkRotationf::Self *)v79, (hkpEntity::Self *)((char *)v5 + 352));
  v26 = *((float *)v5 + 92);
  v27 = *((float *)v5 + 93);
  v28 = *((float *)v5 + 94);
  v29 = (float)((float)(v79[1] * v26) + (float)(v79[5] * v27)) + (float)(v79[9] * v28);
  v30 = (float)((float)(v79[2] * v26) + (float)(v79[6] * v27)) + (float)(v79[10] * v28);
  v31 = (float)((float)(v79[3] * v26) + (float)(v79[7] * v27)) + (float)(v79[11] * v28);
  v32 = *((float *)v5 + 80) - (float)((float)((float)(v26 * v79[0]) + (float)(v27 * v79[4])) + (float)(v28 * v79[8]));
  v33 = *((float *)v5 + 81) - v29;
  v34 = *((float *)v5 + 82) - v30;
  v35 = *((float *)v5 + 83) - v31;
  v79[12] = v32;
  v79[13] = v33;
  v79[14] = v34;
  v79[15] = v35;
  if ( v12 != 0 )
  {
    (*(void (**)(uint32_t *, int, uint32_t *))(**((uint32_t **)v63 + 22) + 72))(
      *((uint32_t **)v63 + 22),
      (int)(uintptr_t)(v5) + 36,
      v80);
    v41 = v64[2];
    if ( v41 == (v64[3] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkMemoryAllocator::Self *)(v64 + 1),
        &loc_4,
        savedregs);
      v41 = v64[2];
    }
    *(uint32_t *)(v64[1] + 4 * v41) = (uint32_t)(uintptr_t)(v55);
    ++v64[2];
    v42 = *((uint32_t **)v66 + 6);
    v43 = *v42;
    a5 = hkpSweptTransformDisplayViewer::m_tag;
    a4 = (char *)v5 + 17;
    a3 = v78;
    a2 = (const hkpWorld::Self **)dword_2137658;
    self = (hkpSweptTransformDisplayViewer::Self *)v80;
    v44 = *((char **)v66 + 15);
    v84 = v42;
    savedregs = v44;
    v85 = (int)(uintptr_t)(v62);
    (*(void (**)(char *))(v43 + 144))(v68);
    v45 = **((uint32_t **)v66 + 6);
    retaddr = (int64_t *)hkpSweptTransformDisplayViewer::m_tag;
    v84 = *((uint32_t **)v66 + 6);
    savedregs = (char *)v5 + 17;
    v85 = dword_2137658;
    (*(void (**)(char *))(v45 + 28))(v68);
    v46 = v64[2];
    if ( v46 == (v64[3] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkMemoryAllocator::Self *)(v64 + 1),
        &loc_4,
        savedregs);
      v46 = v64[2];
    }
    *(uint32_t *)(v64[1] + 4 * v46) = (uint32_t)(uintptr_t)(v54);
    ++v64[2];
    v47 = *((int **)v66 + 6);
    v65 = *v47;
    a4 = (char *)v5 + 18;
    retaddr = &v70;
    a5 = hkpSweptTransformDisplayViewer::m_tag;
    a3 = v79;
    a2 = (const hkpWorld::Self **)dword_2137654;
    self = (hkpSweptTransformDisplayViewer::Self *)v80;
    (*(void (**)(char *, int *, hkString::Self *, uint32_t))(v65 + 144))(v68, v47, v62, *((uint32_t *)v66 + 15));
    return (*(int (**)(char *, uint32_t, int, char *, uint32_t))(**((uint32_t **)v66 + 6) + 28))(
             v68,
             *((uint32_t *)v66 + 6),
             dword_2137654,
             v54,
             hkpSweptTransformDisplayViewer::m_tag);
  }
  else
  {
    v73 = nullptr;
    v74 = nullptr;
    v75 = 0x80000000;
    hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Construct((hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Self *)v69);
    hkpShapeDisplayBuilder::Construct(
      (hkpShapeDisplayBuilder::Self *)v77,
      (const hkpShapeDisplayBuilder::hkpShapeDisplayBuilderEnvironment::Self *)v69);
    hkpShapeDisplayBuilder::buildDisplayGeometries(v77, *((uint32_t *)v5 + 4), &v73);
    v13 = v74;
    v36 = (char *)v74 - 1;
    if ( (int)(uintptr_t)(v74) - 1 >= 0 )
    {
      v37 = 4 * (uint32_t)(uintptr_t)(v36);
      do
      {
        v38 = *(uint32_t *)((char *)v73 + v37);
        if ( *(uint32_t *)(v38 + 80) == 6 && *(uint32_t *)(v38 + 8) == 0 )
        {
          hkErrStream::Construct((hkErrStream::Self *)v76, (hkString::Self *)v80, 512);
          hkOstream::opShl((int)(uintptr_t)(v76), (hkString::Self *)"Unable to build display geometry from hkpShape geometry data");
          hkError::messageReport(
            (hkError::Self *)0xFFFFFFFF,
            (int)(uintptr_t)(v80),
            "VisualDebugger/Viewer/Dynamics/hkpSweptTransformDisplayViewer.cpp",
            &dword_DC[1],
            v53);
          hkErrStream::Destroy((hkErrStream::Self *)v76);
          v39 = (char *)v74 - 1;
          v40 = v36 == (char *)v74 - 1;
          v74 = (hkReferencedObject::Self **)((char *)v74 - 1);
          if ( !v40 )
            *(uint32_t *)((char *)v73 + v37) = *((uint32_t *)v73 + (uint32_t)(uintptr_t)(v39));
        }
        --v36;
        v37 -= 4;
      }
      while ( v36 != (char *)-1 );
      v13 = v74;
    }
    if ( (int)(uintptr_t)(v13) > 0 )
    {
      v14 = v64[2];
      if ( v14 == (v64[3] & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)(v64 + 1),
          &loc_4,
          v52);
        v14 = v64[2];
      }
      *(uint32_t *)(v64[1] + 4 * v14) = (uint32_t)(uintptr_t)(v55);
      ++v64[2];
      (*(void (**)(char *, uint32_t, hkReferencedObject::Self **))(**((uint32_t **)v66 + 6) + 12))(
        v68,
        *((uint32_t *)v66 + 6),
        &v73);
      (*(void (**)(char *))(**((uint32_t **)v66 + 6) + 28))(v68);
      v15 = v64[2];
      if ( v15 == (v64[3] & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)(v64 + 1),
          &loc_4,
          v55);
        v15 = v64[2];
      }
      *(uint32_t *)(v64[1] + 4 * v15) = (uint32_t)(uintptr_t)(v54);
      ++v64[2];
      (*(void (**)(char *, uint32_t, hkReferencedObject::Self **, float *, char *, uint32_t, uint32_t, uint32_t))(**((uint32_t **)v66 + 6) + 12))(
        v68,
        *((uint32_t *)v66 + 6),
        &v73,
        v79,
        v54,
        hkpSweptTransformDisplayViewer::m_tag,
        0,
        0);
      v52 = dword_2137654;
      (*(void (**)(char *, uint32_t))(**((uint32_t **)v66 + 6) + 28))(v68, *((uint32_t *)v66 + 6));
      v13 = v74;
    }
    hkReferencedObject::removeReferences(v73, v13, 4, v52);
    result = v75;
    v74 = nullptr;
    if ( v75 >= 0 )
      return (*(int (**)(uint32_t *, hkReferencedObject::Self *, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               v73,
               4 * v75);
  }
  return result;
}


