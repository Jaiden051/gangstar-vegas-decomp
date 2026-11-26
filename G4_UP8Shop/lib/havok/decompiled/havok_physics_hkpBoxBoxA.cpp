#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpBoxBoxA.h"

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxAgent::cleanup  (binary VA: 0x16a0210)
// Original: hkpBoxBoxAgent::cleanup
// ----------------------------------------------------------------------------
int hkpBoxBoxAgent::cleanup(hkpBoxBoxAgent::Self *self, hkpConstraintOwner::Self *a2)
{
  int v2;
  int v4;

  v2 = 0;
  if ( *((uint8_t *)self + 49) != 0 )
  {
    do
    {
      v4 = *((uint16_t *)self + 2 * v2++ + 9);
      (*(void (**)(uint32_t, int, hkpConstraintOwner::Self *))(**((uint32_t **)self + 2) + 28))(
        *((uint32_t *)self + 2),
        v4,
        a2);
    }
    while ( v2 < *((uint8_t *)self + 49) );
  }
  return G4_VCALL<int>(self, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxAgent::Destroy  (binary VA: 0x16a0270)
// Original: hkpBoxBoxAgent::~hkpBoxBoxAgent
// ----------------------------------------------------------------------------
void hkpBoxBoxAgent::Destroy(hkpBoxBoxAgent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxAgent::createBoxBoxAgent  (binary VA: 0x16a0290)
// Original: hkpBoxBoxAgent::createBoxBoxAgent
// ----------------------------------------------------------------------------
uint32_t * hkpBoxBoxAgent::createBoxBoxAgent(hkpCdBody::Self *a1, hkpCdBody::Self *a2, int a3, hkpContactMgr::Self *a4)
{
  float v4; // xmm0_4
  int address;
  uint32_t *v7;

  v4 = *(float *)(a3 + 12);
  if ( v4 >= (float)(*(float *)(*(uint32_t *)a1 + 44) * 1.999f)
    || (v4 >= (float)(1.999f * *(float *)(*(uint32_t *)a2 + 44)) ? 0xF : 0) != 0 )
  {
    return (uint32_t *)hkpGskfAgent::createGskfAgent(a1, a2, a3, a4);
  }
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v7 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   80);
  v7[1] = -65535;
  v7[2] = (uint32_t)(uintptr_t)(a4);
  *v7 = ((uint32_t)(uintptr_t)&off_2099E68);
  hkpBoxBoxManifold::Construct((hkpBoxBoxManifold::Self *)(v7 + 4));
  return v7;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxAgent::Destroy_ea16a0360  (binary VA: 0x16a0360)
// Original: hkpBoxBoxAgent::~hkpBoxBoxAgent
// ----------------------------------------------------------------------------
void hkpBoxBoxAgent::Destroy_ea16a0360(hkpBoxBoxAgent::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 80;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxAgent::processCollision  (binary VA: 0x16a03c0)
// Original: hkpBoxBoxAgent::processCollision
// ----------------------------------------------------------------------------
int hkpBoxBoxAgent::processCollision(int a1, const hkTransformf::Self **a2, const hkTransformf::Self **a3, int a4, int a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  float v9; // xmm6_4
  float v10; // xmm2_4
  const hkTransformf::Self *v11;
  const hkTransformf::Self *v12;
  int v13;
  uint64_t v14; // rax
  int v15;
  uint32_t *v16;
  typedef float _g4_t_v18;
  typedef float _g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef int *_g4_t_v25;
  typedef float _g4_t_v26;
  typedef int _g4_t_v27;
  typedef float _g4_t_v28;
  typedef uint8_t _g4_t_v29[64];
  typedef uint32_t _g4_t_v30[8];
  typedef uint8_t _g4_t_v31[64];
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
  typedef int _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef int _g4_t_v52;
  enum : size_t {
    _g4_s0 = 496u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v20)) > _g4_s2 ? (16u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v21)) > _g4_s3 ? (20u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v22)) > _g4_s4 ? (24u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v23)) > _g4_s5 ? (28u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v24)) > _g4_s6 ? (32u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v25)) > _g4_s7 ? (36u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v26)) > _g4_s8 ? (40u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v27)) > _g4_s9 ? (44u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v28)) > _g4_s10 ? (44u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v29)) > _g4_s11 ? (48u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (112u + sizeof(_g4_t_v30)) > _g4_s12 ? (112u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (144u + sizeof(_g4_t_v31)) > _g4_s13 ? (144u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (208u + sizeof(_g4_t_v32)) > _g4_s14 ? (208u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (212u + sizeof(_g4_t_v33)) > _g4_s15 ? (212u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (216u + sizeof(_g4_t_v34)) > _g4_s16 ? (216u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (220u + sizeof(_g4_t_v35)) > _g4_s17 ? (220u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (224u + sizeof(_g4_t_v36)) > _g4_s18 ? (224u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (228u + sizeof(_g4_t_v37)) > _g4_s19 ? (228u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (232u + sizeof(_g4_t_v38)) > _g4_s20 ? (232u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (236u + sizeof(_g4_t_v39)) > _g4_s21 ? (236u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (240u + sizeof(_g4_t_v40)) > _g4_s22 ? (240u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (244u + sizeof(_g4_t_v41)) > _g4_s23 ? (244u + sizeof(_g4_t_v41)) : _g4_s23,
    _g4_s25 = (248u + sizeof(_g4_t_v42)) > _g4_s24 ? (248u + sizeof(_g4_t_v42)) : _g4_s24,
    _g4_s26 = (252u + sizeof(_g4_t_v43)) > _g4_s25 ? (252u + sizeof(_g4_t_v43)) : _g4_s25,
    _g4_s27 = (256u + sizeof(_g4_t_v44)) > _g4_s26 ? (256u + sizeof(_g4_t_v44)) : _g4_s26,
    _g4_s28 = (260u + sizeof(_g4_t_v45)) > _g4_s27 ? (260u + sizeof(_g4_t_v45)) : _g4_s27,
    _g4_s29 = (264u + sizeof(_g4_t_v46)) > _g4_s28 ? (264u + sizeof(_g4_t_v46)) : _g4_s28,
    _g4_s30 = (268u + sizeof(_g4_t_v47)) > _g4_s29 ? (268u + sizeof(_g4_t_v47)) : _g4_s29,
    _g4_s31 = (272u + sizeof(_g4_t_v48)) > _g4_s30 ? (272u + sizeof(_g4_t_v48)) : _g4_s30,
    _g4_s32 = (276u + sizeof(_g4_t_v49)) > _g4_s31 ? (276u + sizeof(_g4_t_v49)) : _g4_s31,
    _g4_s33 = (280u + sizeof(_g4_t_v50)) > _g4_s32 ? (280u + sizeof(_g4_t_v50)) : _g4_s32,
    _g4_s34 = (284u + sizeof(_g4_t_v51)) > _g4_s33 ? (284u + sizeof(_g4_t_v51)) : _g4_s33,
    _g4_s35 = (288u + sizeof(_g4_t_v52)) > _g4_s34 ? (288u + sizeof(_g4_t_v52)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 112u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 144u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 208u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 212u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 216u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 220u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 224u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 228u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 232u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 236u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 240u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 244u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 248u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 252u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 256u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 260u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 264u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 268u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 272u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 276u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 280u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 284u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 288u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v25 = address;
  v7 = *(uint32_t **)(*address + 4);
  v27 = *(uint32_t *)(v6 + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(v6 + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtBoxBox");
    v8 = __rdtsc();
    *(uint32_t *)(v27 + 4) = v8;
    *(uint32_t *)(v6 + 4) = v27 + 12;
  }
  v9 = *((float *)*a2 + 4);
  v10 = *((float *)*a3 + 4);
  v19 = *((float *)*a2 + 10) + v9;
  v18 = *((float *)*a2 + 8) + v9;
  v28 = *((float *)*a2 + 9) + v9;
  v20 = v9 + *((float *)*a2 + 11);
  v21 = *((float *)*a3 + 8) + v10;
  v22 = *((float *)*a3 + 9) + v10;
  v26 = *((float *)*a3 + 10) + v10;
  v23 = v10 + *((float *)*a3 + 11);
  v24 = *(float *)(a4 + 12);
  hkTransformf::setMulInverseMul((hkTransformf::Self *)v29, a2[2], a3[2]);
  v11 = a3[2];
  v12 = a2[2];
  v30[1] = (uint32_t)(uintptr_t)(a3);
  v30[6] = (uint32_t)(uintptr_t)(v11);
  v30[0] = (uint32_t)(uintptr_t)(a2);
  v30[5] = (uint32_t)(uintptr_t)(v12);
  v13 = *(uint32_t *)(a1 + 8);
  v30[2] = a4;
  v30[3] = v13;
  v30[4] = a5;
  std::memcpy(v31, v29, sizeof(v31));
  v32 = v18;
  v52 = 1008981770;
  v33 = v28;
  v38 = v26;
  v34 = v19;
  v35 = v20;
  v36 = v21;
  v37 = v22;
  v39 = v23;
  v40 = v24;
  v41 = v24;
  v42 = v24;
  v43 = 2139095022;
  v44 = v18 + v24;
  v46 = v19 + v24;
  v47 = v20 + 3.40282e38f;
  v48 = v21 + v24;
  v45 = v28 + v24;
  v49 = v22 + v24;
  v50 = v24 + v26;
  v51 = v23 + 3.40282e38f;
  hkpBoxBoxCollisionDetection::calcManifold((hkpBoxBoxCollisionDetection::Self *)v30, (hkpBoxBoxManifold::Self *)(a1 + 16));
  LODWORD(v14) = (uint32_t)(uintptr_t)(v25);
  v15 = *v25;
  v16 = *(uint32_t **)(*v25 + 4);
  if ( (unsigned int)(uintptr_t)(v16) < *(uint32_t *)(*v25 + 12) )
  {
    *v16 = (uint32_t)(uintptr_t)("Et");
    v14 = __rdtsc();
    v16[1] = v14;
    *(uint32_t *)(v15 + 4) = (uint32_t)(uintptr_t)(v16 + 3);
  }
  return v14;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxAgent::staticGetPenetrations  (binary VA: 0x16a0730)
// Original: hkpBoxBoxAgent::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpBoxBoxAgent::staticGetPenetrations(const hkTransformf::Self **a1, const hkTransformf::Self **a2, int a3, int a4)
{
  const hkTransformf::Self **v4;
  const hkTransformf::Self **v5;
  int *address;
  int v7;
  uint32_t *v8;
  uint64_t v9; // rax
  float v10; // xmm4_4
  float v11; // xmm2_4
  const hkTransformf::Self *v12;
  uint64_t v13; // rax
  int v14;
  uint32_t *v15;
  typedef int _g4_t_v17;
  typedef float _g4_t_v18;
  typedef int64_t _g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef int _g4_t_v23;
  typedef float _g4_t_v24;
  typedef int *_g4_t_v25;
  typedef float _g4_t_v26;
  typedef int _g4_t_v27;
  typedef float _g4_t_v28;
  typedef int _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef int _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef int _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef int _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef int _g4_t_v45;
  typedef uint32_t _g4_t_v46[25];
  typedef int64_t _g4_t_v47 __attribute__((aligned(1)));
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef int _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef int _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef int _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef const hkTransformf::Self ***_g4_t_v74;
  enum : size_t {
    _g4_s0 = 512u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v18)) > _g4_s1 ? (4u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v19)) > _g4_s2 ? (8u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v20)) > _g4_s3 ? (16u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v21)) > _g4_s4 ? (20u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v22)) > _g4_s5 ? (24u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v23)) > _g4_s6 ? (28u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v24)) > _g4_s7 ? (28u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v25)) > _g4_s8 ? (32u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v26)) > _g4_s9 ? (36u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v27)) > _g4_s10 ? (40u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v28)) > _g4_s11 ? (40u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v29)) > _g4_s12 ? (44u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v30)) > _g4_s13 ? (48u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v31)) > _g4_s14 ? (52u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v32)) > _g4_s15 ? (56u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v33)) > _g4_s16 ? (60u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v34)) > _g4_s17 ? (64u + sizeof(_g4_t_v34)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v35)) > _g4_s18 ? (68u + sizeof(_g4_t_v35)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v36)) > _g4_s19 ? (72u + sizeof(_g4_t_v36)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v37)) > _g4_s20 ? (76u + sizeof(_g4_t_v37)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v38)) > _g4_s21 ? (80u + sizeof(_g4_t_v38)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v39)) > _g4_s22 ? (84u + sizeof(_g4_t_v39)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v40)) > _g4_s23 ? (88u + sizeof(_g4_t_v40)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v41)) > _g4_s24 ? (92u + sizeof(_g4_t_v41)) : _g4_s24,
    _g4_s26 = (96u + sizeof(_g4_t_v42)) > _g4_s25 ? (96u + sizeof(_g4_t_v42)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v43)) > _g4_s26 ? (100u + sizeof(_g4_t_v43)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v44)) > _g4_s27 ? (104u + sizeof(_g4_t_v44)) : _g4_s27,
    _g4_s29 = (108u + sizeof(_g4_t_v45)) > _g4_s28 ? (108u + sizeof(_g4_t_v45)) : _g4_s28,
    _g4_s30 = (112u + sizeof(_g4_t_v46)) > _g4_s29 ? (112u + sizeof(_g4_t_v46)) : _g4_s29,
    _g4_s31 = (212u + sizeof(_g4_t_v47)) > _g4_s30 ? (212u + sizeof(_g4_t_v47)) : _g4_s30,
    _g4_s32 = (220u + sizeof(_g4_t_v48)) > _g4_s31 ? (220u + sizeof(_g4_t_v48)) : _g4_s31,
    _g4_s33 = (224u + sizeof(_g4_t_v49)) > _g4_s32 ? (224u + sizeof(_g4_t_v49)) : _g4_s32,
    _g4_s34 = (228u + sizeof(_g4_t_v50)) > _g4_s33 ? (228u + sizeof(_g4_t_v50)) : _g4_s33,
    _g4_s35 = (232u + sizeof(_g4_t_v51)) > _g4_s34 ? (232u + sizeof(_g4_t_v51)) : _g4_s34,
    _g4_s36 = (236u + sizeof(_g4_t_v52)) > _g4_s35 ? (236u + sizeof(_g4_t_v52)) : _g4_s35,
    _g4_s37 = (240u + sizeof(_g4_t_v53)) > _g4_s36 ? (240u + sizeof(_g4_t_v53)) : _g4_s36,
    _g4_s38 = (244u + sizeof(_g4_t_v54)) > _g4_s37 ? (244u + sizeof(_g4_t_v54)) : _g4_s37,
    _g4_s39 = (248u + sizeof(_g4_t_v55)) > _g4_s38 ? (248u + sizeof(_g4_t_v55)) : _g4_s38,
    _g4_s40 = (252u + sizeof(_g4_t_v56)) > _g4_s39 ? (252u + sizeof(_g4_t_v56)) : _g4_s39,
    _g4_s41 = (256u + sizeof(_g4_t_v57)) > _g4_s40 ? (256u + sizeof(_g4_t_v57)) : _g4_s40,
    _g4_s42 = (260u + sizeof(_g4_t_v58)) > _g4_s41 ? (260u + sizeof(_g4_t_v58)) : _g4_s41,
    _g4_s43 = (264u + sizeof(_g4_t_v59)) > _g4_s42 ? (264u + sizeof(_g4_t_v59)) : _g4_s42,
    _g4_s44 = (268u + sizeof(_g4_t_v60)) > _g4_s43 ? (268u + sizeof(_g4_t_v60)) : _g4_s43,
    _g4_s45 = (272u + sizeof(_g4_t_v61)) > _g4_s44 ? (272u + sizeof(_g4_t_v61)) : _g4_s44,
    _g4_s46 = (276u + sizeof(_g4_t_v62)) > _g4_s45 ? (276u + sizeof(_g4_t_v62)) : _g4_s45,
    _g4_s47 = (280u + sizeof(_g4_t_v63)) > _g4_s46 ? (280u + sizeof(_g4_t_v63)) : _g4_s46,
    _g4_s48 = (284u + sizeof(_g4_t_v64)) > _g4_s47 ? (284u + sizeof(_g4_t_v64)) : _g4_s47,
    _g4_s49 = (288u + sizeof(_g4_t_v65)) > _g4_s48 ? (288u + sizeof(_g4_t_v65)) : _g4_s48,
    _g4_s50 = (304u + sizeof(_g4_t_v66)) > _g4_s49 ? (304u + sizeof(_g4_t_v66)) : _g4_s49,
    _g4_s51 = (308u + sizeof(_g4_t_v67)) > _g4_s50 ? (308u + sizeof(_g4_t_v67)) : _g4_s50,
    _g4_s52 = (312u + sizeof(_g4_t_v68)) > _g4_s51 ? (312u + sizeof(_g4_t_v68)) : _g4_s51,
    _g4_s53 = (316u + sizeof(_g4_t_v69)) > _g4_s52 ? (316u + sizeof(_g4_t_v69)) : _g4_s52,
    _g4_s54 = (320u + sizeof(_g4_t_v70)) > _g4_s53 ? (320u + sizeof(_g4_t_v70)) : _g4_s53,
    _g4_s55 = (324u + sizeof(_g4_t_v71)) > _g4_s54 ? (324u + sizeof(_g4_t_v71)) : _g4_s54,
    _g4_s56 = (328u + sizeof(_g4_t_v72)) > _g4_s55 ? (328u + sizeof(_g4_t_v72)) : _g4_s55,
    _g4_s57 = (332u + sizeof(_g4_t_v73)) > _g4_s56 ? (332u + sizeof(_g4_t_v73)) : _g4_s56,
    _g4_s58 = (424u + sizeof(_g4_t_v74)) > _g4_s57 ? (424u + sizeof(_g4_t_v74)) : _g4_s57
  };
  alignas(16) uint8_t _g4_sf[_g4_s58];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 72u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 76u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 80u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 84u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 88u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 96u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 100u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 104u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 108u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 112u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 212u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 220u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 224u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 228u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 232u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 236u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 240u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 244u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 248u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 252u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 256u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 260u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 264u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 268u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 272u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 276u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 280u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 284u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 288u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 304u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 308u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 312u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 316u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 320u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 324u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 328u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 332u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 424u);

  v74 = &a1;
  v23 = a3;
  v17 = a4;
  v4 = a1;
  v5 = a2;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v7 = *address;
  v25 = address;
  v8 = *(uint32_t **)(*address + 4);
  v27 = *(uint32_t *)(v7 + 4);
  if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(v7 + 12) )
  {
    *v8 = (uint32_t)(uintptr_t)("TtBoxBox");
    v9 = __rdtsc();
    *(uint32_t *)(v27 + 4) = v9;
    *(uint32_t *)(v7 + 4) = v27 + 12;
  }
  v10 = *((float *)*v4 + 4);
  v11 = *((float *)*v5 + 4);
  v18 = *((float *)*v4 + 8) + v10;
  *(float *)&v19 = *((float *)*v4 + 9) + v10;
  *((float *)&v19 + 1) = *((float *)*v4 + 10) + v10;
  v21 = *((float *)*v5 + 9) + v11;
  v20 = v10 + *((float *)*v4 + 11);
  v28 = *((float *)*v5 + 8) + v11;
  v26 = *((float *)*v5 + 10) + v11;
  v22 = v11 + *((float *)*v5 + 11);
  v24 = *(float *)(v23 + 12);
  hkTransformf::setMulInverseMul((hkTransformf::Self *)&v30, v4[2], v5[2]);
  v12 = v5[2];
  v46[5] = (uint32_t)(uintptr_t)(v4[2]);
  *(float *)&v46[8] = v30;
  *(float *)&v46[9] = v31;
  *(float *)&v46[10] = v32;
  v46[11] = v33;
  *(float *)&v46[12] = v34;
  *(float *)&v46[13] = v35;
  *(float *)&v46[14] = v36;
  v46[15] = v37;
  *(float *)&v46[16] = v38;
  *(float *)&v46[17] = v39;
  *(float *)&v46[18] = v40;
  v46[19] = v41;
  v46[6] = (uint32_t)(uintptr_t)(v12);
  v46[0] = (uint32_t)(uintptr_t)(v4);
  v46[1] = (uint32_t)(uintptr_t)(v5);
  memset(&v46[2], 0, 12);
  *(float *)&v46[20] = v42;
  v46[23] = v45;
  *(float *)&v46[21] = v43;
  *(float *)&v46[22] = v44;
  v65 = 1008981770;
  v51 = v26;
  *(float *)&v46[24] = v18;
  v47 = v19;
  v48 = v20;
  v49 = v28;
  v50 = v21;
  v52 = v22;
  v53 = v24;
  v54 = v24;
  v55 = v24;
  v56 = 2139095022;
  v57 = v18 + v24;
  v58 = *(float *)&v19 + v24;
  v59 = *((float *)&v19 + 1) + v24;
  v60 = v20 + 3.40282e38f;
  v66 = v42;
  v67 = v43;
  v64 = v22 + 3.40282e38f;
  v68 = v44;
  v69 = v45;
  v61 = v28 + v24;
  v63 = v24 + v26;
  v62 = v21 + v24;
  v71 = (float)((float)(v34 * v42) + (float)(v35 * v43)) + (float)(v36 * v44);
  v72 = (float)((float)(v42 * v38) + (float)(v43 * v39)) + (float)(v40 * v44);
  v70 = (float)((float)(v30 * v42) + (float)(v31 * v43)) + (float)(v44 * v32);
  v73 = v72;
  hkpBoxBoxCollisionDetection::checkIntersection((hkpBoxBoxCollisionDetection::Self *)&v29, (const hkVector4f::Self *)v46);
  if ( v29 == 0 )
    G4_VCALL<void>(v17, 8, v4, v5);
  LODWORD(v13) = (uint32_t)(uintptr_t)(v25);
  v14 = *v25;
  v15 = *(uint32_t **)(*v25 + 4);
  if ( (unsigned int)(uintptr_t)(v15) < *(uint32_t *)(*v25 + 12) )
  {
    *v15 = (uint32_t)(uintptr_t)("Et");
    v13 = __rdtsc();
    v15[1] = v13;
    *(uint32_t *)(v14 + 4) = (uint32_t)(uintptr_t)(v15 + 3);
  }
  return v13;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxAgent::getPenetrations  (binary VA: 0x16a0bd0)
// Original: hkpBoxBoxAgent::getPenetrations
// ----------------------------------------------------------------------------
int hkpBoxBoxAgent::getPenetrations(int a1, const hkTransformf::Self **a2, const hkTransformf::Self **a3, int a4, int a5)
{
  return hkpBoxBoxAgent::staticGetPenetrations(a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxAgent::initAgentFunc  (binary VA: 0x16a0c10)
// Original: hkpBoxBoxAgent::initAgentFunc
// ----------------------------------------------------------------------------
int hkpBoxBoxAgent::initAgentFunc(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(hkpBoxBoxAgent::createBoxBoxAgent);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(hkpBoxBoxAgent::staticGetPenetrations);
  *(uint32_t *)(a1 + 8) = hkpGskBaseAgent::staticGetClosestPoints;
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(((int * (*)(unsigned int, float *, float *, float *, int, int, int, int, int, int, int, unsigned int, int, int, int, int, int, int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, g4_int128_t, float, int, int, int, int, int, int, int, int, int, int, int, float, float, float, float, unsigned int, unsigned int, unsigned int, unsigned int, g4_int128_t, int32_t, unsigned int, int32_t, int32_t, unsigned int, float *, int, int, int, int, int, int, unsigned int))hkpIterativeLinearCastAgent::staticLinearCast));
  *(uint8_t *)(a1 + 16) = 0;
  *(uint8_t *)(a1 + 17) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxAgent::registerAgent  (binary VA: 0x16a0c50)
// Original: hkpBoxBoxAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpBoxBoxAgent::registerAgent(hkpBoxBoxAgent::Self *self)
{
  uint8_t v2[40];

  v2[16] = 0;
  v2[17] = 0;
  hkpBoxBoxAgent::initAgentFunc((int)(uintptr_t)(v2));
  return hkpCollisionDispatcher::registerCollisionAgent(self, v2, 3, 3);
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxAgent::staticGetClosestPoints  (binary VA: 0x16a0cb0)
// Original: hkpBoxBoxAgent::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpBoxBoxAgent::staticGetClosestPoints(const hkTransformf::Self **a1, const hkTransformf::Self **a2, int a3, int *a4)
{
  const hkTransformf::Self **v4;
  const hkTransformf::Self **v5;
  int *address;
  int v7;
  uint32_t *v8;
  uint64_t v9; // rax
  float v10; // xmm2_4
  float v11; // xmm0_4
  const hkTransformf::Self *v12;
  uint64_t v13; // rax
  int v14;
  uint32_t *v15;
  int v16;
  typedef int *_g4_t_v18;
  typedef float _g4_t_v19;
  typedef int64_t _g4_t_v20;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef int _g4_t_v24;
  typedef float _g4_t_v25;
  typedef int *_g4_t_v26;
  typedef float _g4_t_v27;
  typedef int _g4_t_v28;
  typedef float _g4_t_v29;
  typedef char _g4_t_v30;
  typedef uint32_t _g4_t_v31[4];
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint32_t _g4_t_v36[16];
  typedef uint32_t _g4_t_v37[16];
  typedef uint32_t _g4_t_v38[8];
  typedef float _g4_t_v39[74];
  enum : size_t {
    _g4_s0 = 608u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v21)) > _g4_s3 ? (16u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v22)) > _g4_s4 ? (20u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v23)) > _g4_s5 ? (24u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v24)) > _g4_s6 ? (28u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v25)) > _g4_s7 ? (28u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v26)) > _g4_s8 ? (32u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v27)) > _g4_s9 ? (36u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v28)) > _g4_s10 ? (40u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v29)) > _g4_s11 ? (40u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (47u + sizeof(_g4_t_v30)) > _g4_s12 ? (47u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v31)) > _g4_s13 ? (48u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v32)) > _g4_s14 ? (64u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v33)) > _g4_s15 ? (68u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v34)) > _g4_s16 ? (72u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v35)) > _g4_s17 ? (76u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v36)) > _g4_s18 ? (80u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (144u + sizeof(_g4_t_v37)) > _g4_s19 ? (144u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (208u + sizeof(_g4_t_v38)) > _g4_s20 ? (208u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (240u + sizeof(_g4_t_v39)) > _g4_s21 ? (240u + sizeof(_g4_t_v39)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 47u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 68u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 72u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 76u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 144u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 208u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 240u);

  LODWORD(v39[70]) = (uint32_t)(uintptr_t)(&a1);
  v24 = a3;
  v18 = a4;
  v4 = a1;
  v5 = a2;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v7 = *address;
  v26 = address;
  v8 = *(uint32_t **)(*address + 4);
  v28 = *(uint32_t *)(v7 + 4);
  if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(v7 + 12) )
  {
    *v8 = (uint32_t)(uintptr_t)("TtBoxBox");
    v9 = __rdtsc();
    *(uint32_t *)(v28 + 4) = v9;
    *(uint32_t *)(v7 + 4) = v28 + 12;
  }
  v10 = *((float *)*v5 + 4);
  v11 = *((float *)*v4 + 4);
  v21 = *((float *)*v5 + 8) + v10;
  v19 = *((float *)*v4 + 8) + v11;
  v29 = v11 + *((float *)*v4 + 11);
  *(float *)&v20 = *((float *)*v4 + 9) + v11;
  *((float *)&v20 + 1) = *((float *)*v4 + 10) + v11;
  v22 = *((float *)*v5 + 9) + v10;
  v27 = *((float *)*v5 + 10) + v10;
  v23 = v10 + *((float *)*v5 + 11);
  v25 = *(float *)(v24 + 12);
  hkTransformf::setMulInverseMul((hkTransformf::Self *)v36, v4[2], v5[2]);
  v12 = v5[2];
  v38[5] = (uint32_t)(uintptr_t)(v4[2]);
  std::memcpy(v39, v36, 64);
  v38[6] = (uint32_t)(uintptr_t)(v12);
  v38[0] = (uint32_t)(uintptr_t)(v4);
  v38[1] = (uint32_t)(uintptr_t)(v5);
  memset(&v38[2], 0, 12);
  v39[19] = v29;
  v39[36] = 0.01f;
  v39[22] = v27;
  v39[30] = *((float *)&v20 + 1) + v25;
  v39[16] = v19;
  *(uint64_t *)&v39[17] = v20;
  v39[20] = v21;
  v39[21] = v22;
  v39[23] = v23;
  v39[24] = v25;
  v39[25] = v25;
  v39[26] = v25;
  v39[27] = 3.40282e38f;
  v39[28] = v19 + v25;
  v39[29] = *(float *)&v20 + v25;
  v39[31] = v29 + 3.40282e38f;
  v39[33] = v22 + v25;
  v39[35] = v23 + 3.40282e38f;
  v39[32] = v21 + v25;
  v39[34] = v25 + v27;
  hkpBoxBoxCollisionDetection::calculateClosestPoint((hkpBoxBoxCollisionDetection::Self *)&v30, (hkContactPoint::Self *)v38);
  if ( v30 != 0 )
  {
    v37[13] = (uint32_t)(uintptr_t)(v5);
    v37[0] = v31[0];
    v37[10] = v34;
    v37[1] = v31[1];
    v37[2] = v31[2];
    v37[3] = v31[3];
    v37[6] = v34;
    v37[7] = v35;
    v37[11] = v35;
    v16 = *v18;
    v37[5] = v33;
    v37[9] = v33;
    v37[4] = v32;
    v37[12] = (uint32_t)(uintptr_t)(v4);
    v37[8] = v32;
    (*(void (**)(int *, uint32_t *, uint32_t *))(v16 + 8))(v18, v37, v31);
  }
  LODWORD(v13) = (uint32_t)(uintptr_t)(v26);
  v14 = *v26;
  v15 = *(uint32_t **)(*v26 + 4);
  if ( (unsigned int)(uintptr_t)(v15) < *(uint32_t *)(*v26 + 12) )
  {
    *v15 = (uint32_t)(uintptr_t)("Et");
    v13 = __rdtsc();
    v15[1] = v13;
    *(uint32_t *)(v14 + 4) = (uint32_t)(uintptr_t)(v15 + 3);
  }
  return v13;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxBoxAgent::getClosestPoints  (binary VA: 0x16a1120)
// Original: hkpBoxBoxAgent::getClosestPoints
// ----------------------------------------------------------------------------
int hkpBoxBoxAgent::getClosestPoints(int a1, const hkTransformf::Self **a2, const hkTransformf::Self **a3, int a4, int *a5)
{
  return hkpBoxBoxAgent::staticGetClosestPoints(a2, a3, a4, a5);
}


