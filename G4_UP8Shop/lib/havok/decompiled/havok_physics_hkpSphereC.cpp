#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpSphereC.h"

// ----------------------------------------------------------------------------
// Function: hkpSphereCapsuleAgent::cleanup  (binary VA: 0x16bc050)
// Original: hkpSphereCapsuleAgent::cleanup
// ----------------------------------------------------------------------------
int hkpSphereCapsuleAgent::cleanup(hkpSphereCapsuleAgent::Self *self, hkpConstraintOwner::Self *a2)
{
  int v2;

  v2 = *((uint16_t *)self + 6);
  if ( (uint16_t)v2 != 0xFFFF )
    (*(void (**)(uint32_t, int, hkpConstraintOwner::Self *))(**((uint32_t **)self + 2) + 28))(
      *((uint32_t *)self + 2),
      v2,
      a2);
  return G4_VCALL<int>(self, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereCapsuleAgent::Destroy  (binary VA: 0x16bc090)
// Original: hkpSphereCapsuleAgent::~hkpSphereCapsuleAgent
// ----------------------------------------------------------------------------
void hkpSphereCapsuleAgent::Destroy(hkpSphereCapsuleAgent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereCapsuleAgent::Destroy_ea16bc260  (binary VA: 0x16bc260)
// Original: hkpSphereCapsuleAgent::~hkpSphereCapsuleAgent
// ----------------------------------------------------------------------------
void hkpSphereCapsuleAgent::Destroy_ea16bc260(hkpSphereCapsuleAgent::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereCapsuleAgent::createSphereCapsuleAgent  (binary VA: 0x16bc2c0)
// Original: hkpSphereCapsuleAgent::createSphereCapsuleAgent
// ----------------------------------------------------------------------------
int hkpSphereCapsuleAgent::createSphereCapsuleAgent(int a1, int a2, int a3, int a4)
{
  int address;
  int result;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  result = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
             *(uint32_t *)(*(uint32_t *)address + 44),
             16);
  *(uint32_t *)(result + 4) = -65535;
  *(uint32_t *)(result + 8) = a4;
  *(uint16_t *)(result + 12) = -1;
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_209A6C8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereCapsuleAgent::createCapsuleSphereAgent  (binary VA: 0x16bc320)
// Original: hkpSphereCapsuleAgent::createCapsuleSphereAgent
// ----------------------------------------------------------------------------
int hkpSphereCapsuleAgent::createCapsuleSphereAgent(int a1, int a2, int a3, int a4)
{
  int address;
  int result;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  result = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
             *(uint32_t *)(*(uint32_t *)address + 44),
             16);
  *(uint32_t *)(result + 4) = -65535;
  *(uint32_t *)(result + 8) = a4;
  *(uint16_t *)(result + 12) = -1;
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_209A668);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereCapsuleAgent::staticGetPenetrations  (binary VA: 0x16bcb80)
// Original: hkpSphereCapsuleAgent::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpSphereCapsuleAgent::staticGetPenetrations(int *a1, int *a2, int a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  int v9;
  float *v10;
  float v11; // xmm6_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  float *v14;
  float *v15;
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  uint64_t v19; // rax
  int v20;
  uint32_t *v21;
  typedef int *_g4_t_v23;
  typedef float *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
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
  typedef float _g4_t_v40[4];
  typedef uint8_t _g4_t_v41[16];
  typedef int _g4_t_v42;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v24)) > _g4_s1 ? (16u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v25)) > _g4_s2 ? (20u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v26)) > _g4_s3 ? (24u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v27)) > _g4_s4 ? (28u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v28)) > _g4_s5 ? (32u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v29)) > _g4_s6 ? (36u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v30)) > _g4_s7 ? (40u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v31)) > _g4_s8 ? (44u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v32)) > _g4_s9 ? (48u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v33)) > _g4_s10 ? (52u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v34)) > _g4_s11 ? (56u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v35)) > _g4_s12 ? (60u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v36)) > _g4_s13 ? (64u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v37)) > _g4_s14 ? (68u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v38)) > _g4_s15 ? (72u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v39)) > _g4_s16 ? (76u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v40)) > _g4_s17 ? (80u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v41)) > _g4_s18 ? (96u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v42)) > _g4_s19 ? (112u + sizeof(_g4_t_v42)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
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
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 96u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 112u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v23 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtSphereCapsule");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  v8 = 1;
  v26 = *a1;
  v24 = (float *)a1[2];
  v25 = *a2;
  v9 = *a2 + 32;
  v10 = (float *)a2[2];
  v27 = *v10;
  v39 = v10[1];
  v38 = v10[2];
  v37 = v10[3];
  v36 = v10[4];
  v35 = v10[5];
  v34 = v10[6];
  v33 = v10[7];
  v32 = v10[8];
  v31 = v10[9];
  v30 = v10[10];
  v29 = v10[11];
  v28 = v10[12];
  v11 = v10[13];
  v12 = v10[14];
  v13 = v10[15];
  while ( 1 )
  {
    v14 = (float *)(v9 + 16 * v8);
    v15 = (float *)&v41[16 * v8];
    v16 = *v14;
    v17 = v14[1];
    v18 = v14[2];
    *v15 = (float)((float)((float)(v27 * *v14) + (float)(v36 * v17)) + (float)(v32 * v18)) + v28;
    v15[1] = (float)((float)((float)(v39 * v16) + (float)(v35 * v17)) + (float)(v31 * v18)) + v11;
    v15[2] = (float)((float)((float)(v38 * v16) + (float)(v34 * v17)) + (float)(v30 * v18)) + v12;
    v15[3] = (float)((float)((float)(v16 * v37) + (float)(v17 * v33)) + (float)(v18 * v29)) + v13;
    if ( v8 != 1 )
      break;
    LOBYTE(v8) = 0;
  }
  hkLineSegmentUtil::closestPointLineSeg(v24 + 12, v41, &v42, v40);
  if ( (float)((float)(*(float *)(v26 + 16) + *(float *)(v25 + 16))
             * (float)(*(float *)(v26 + 16) + *(float *)(v25 + 16))) > (float)((float)((float)((float)(v40[0] - v24[12])
                                                                                             * (float)(v40[0] - v24[12]))
                                                                                     + (float)((float)(v40[1] - v24[13])
                                                                                             * (float)(v40[1] - v24[13])))
                                                                             + (float)((float)(v40[2] - v24[14])
                                                                                     * (float)(v40[2] - v24[14]))) )
    G4_VCALL<void>(a4, 8, a1, a2);
  LODWORD(v19) = (uint32_t)(uintptr_t)(v23);
  v20 = *v23;
  v21 = *(uint32_t **)(*v23 + 4);
  if ( (unsigned int)(uintptr_t)(v21) < *(uint32_t *)(*v23 + 12) )
  {
    *v21 = (uint32_t)(uintptr_t)("Et");
    v19 = __rdtsc();
    v21[1] = v19;
    *(uint32_t *)(v20 + 4) = (uint32_t)(uintptr_t)(v21 + 3);
  }
  return v19;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereCapsuleAgent::getPenetrations  (binary VA: 0x16bcea0)
// Original: hkpSphereCapsuleAgent::getPenetrations
// ----------------------------------------------------------------------------
int hkpSphereCapsuleAgent::getPenetrations(int a1, int *a2, int *a3, int a4, int a5)
{
  return hkpSphereCapsuleAgent::staticGetPenetrations(a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereCapsuleAgent::staticGetClosestPoints  (binary VA: 0x16bcf40)
// Original: hkpSphereCapsuleAgent::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpSphereCapsuleAgent::staticGetClosestPoints(uint32_t *a1, uint32_t *a2, int a3, int *a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  int v9;
  float *v10;
  float v11; // xmm5_4
  float v12; // xmm6_4
  float v13; // xmm4_4
  float *v14;
  float *v15;
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  __m128i v19;
  float v20; // xmm2_4
  float v21;
  __m128i v22;
  int v23; // xmm5_4
  float v24; // xmm4_4
  float v25; // xmm6_4
  float v26; // xmm3_4
  float v27; // xmm5_4
  int v28;
  float v29; // xmm4_4
  float v30; // xmm0_4
  float v31; // xmm4_4
  float v32; // xmm6_4
  int v33;
  uint64_t v34; // rax
  int v35;
  uint32_t *v36;
  float v37; // xmm3_4
  __m128 v38;
  float v39; // xmm5_4
  __m128 v40;
  __m128 v41;
  float v42; // xmm6_4
  int v43;
  int v44;
  __m128 v45;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int *_g4_t_v49;
  typedef float *_g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69[4];
  typedef unsigned int _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef unsigned int _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef uint32_t *_g4_t_v85;
  typedef uint32_t *_g4_t_v86;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v47)) > _g4_s0 ? (12u + sizeof(_g4_t_v47)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v48)) > _g4_s1 ? (16u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v49)) > _g4_s2 ? (20u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v50)) > _g4_s3 ? (24u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v51)) > _g4_s4 ? (28u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v52)) > _g4_s5 ? (32u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v53)) > _g4_s6 ? (36u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v54)) > _g4_s7 ? (40u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v55)) > _g4_s8 ? (44u + sizeof(_g4_t_v55)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v56)) > _g4_s9 ? (48u + sizeof(_g4_t_v56)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v57)) > _g4_s10 ? (52u + sizeof(_g4_t_v57)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v58)) > _g4_s11 ? (56u + sizeof(_g4_t_v58)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v59)) > _g4_s12 ? (60u + sizeof(_g4_t_v59)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v60)) > _g4_s13 ? (60u + sizeof(_g4_t_v60)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v61)) > _g4_s14 ? (64u + sizeof(_g4_t_v61)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v62)) > _g4_s15 ? (64u + sizeof(_g4_t_v62)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v63)) > _g4_s16 ? (68u + sizeof(_g4_t_v63)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v64)) > _g4_s17 ? (68u + sizeof(_g4_t_v64)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v65)) > _g4_s18 ? (72u + sizeof(_g4_t_v65)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v66)) > _g4_s19 ? (72u + sizeof(_g4_t_v66)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v67)) > _g4_s20 ? (76u + sizeof(_g4_t_v67)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v68)) > _g4_s21 ? (76u + sizeof(_g4_t_v68)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v69)) > _g4_s22 ? (80u + sizeof(_g4_t_v69)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v70)) > _g4_s23 ? (96u + sizeof(_g4_t_v70)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v71)) > _g4_s24 ? (100u + sizeof(_g4_t_v71)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v72)) > _g4_s25 ? (104u + sizeof(_g4_t_v72)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v73)) > _g4_s26 ? (112u + sizeof(_g4_t_v73)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v74)) > _g4_s27 ? (116u + sizeof(_g4_t_v74)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v75)) > _g4_s28 ? (120u + sizeof(_g4_t_v75)) : _g4_s28,
    _g4_s30 = (124u + sizeof(_g4_t_v76)) > _g4_s29 ? (124u + sizeof(_g4_t_v76)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v77)) > _g4_s30 ? (128u + sizeof(_g4_t_v77)) : _g4_s30,
    _g4_s32 = (132u + sizeof(_g4_t_v78)) > _g4_s31 ? (132u + sizeof(_g4_t_v78)) : _g4_s31,
    _g4_s33 = (136u + sizeof(_g4_t_v79)) > _g4_s32 ? (136u + sizeof(_g4_t_v79)) : _g4_s32,
    _g4_s34 = (140u + sizeof(_g4_t_v80)) > _g4_s33 ? (140u + sizeof(_g4_t_v80)) : _g4_s33,
    _g4_s35 = (144u + sizeof(_g4_t_v81)) > _g4_s34 ? (144u + sizeof(_g4_t_v81)) : _g4_s34,
    _g4_s36 = (148u + sizeof(_g4_t_v82)) > _g4_s35 ? (148u + sizeof(_g4_t_v82)) : _g4_s35,
    _g4_s37 = (152u + sizeof(_g4_t_v83)) > _g4_s36 ? (152u + sizeof(_g4_t_v83)) : _g4_s36,
    _g4_s38 = (156u + sizeof(_g4_t_v84)) > _g4_s37 ? (156u + sizeof(_g4_t_v84)) : _g4_s37,
    _g4_s39 = (160u + sizeof(_g4_t_v85)) > _g4_s38 ? (160u + sizeof(_g4_t_v85)) : _g4_s38,
    _g4_s40 = (164u + sizeof(_g4_t_v86)) > _g4_s39 ? (164u + sizeof(_g4_t_v86)) : _g4_s39
  };
  alignas(16) uint8_t _g4_sf[_g4_s40];
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 36u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 48u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 60u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 64u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 64u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 68u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 68u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 72u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 72u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 76u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 76u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 80u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 96u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 100u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 104u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 112u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 116u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 120u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 124u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 128u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 132u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 136u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 140u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 144u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 148u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 152u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 156u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 160u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 164u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v49 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtSphereCapsule");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  v8 = 1;
  v48 = *a1;
  v50 = (float *)a1[2];
  v47 = *a2;
  v9 = *a2 + 32;
  v10 = (float *)a2[2];
  v67 = *v10;
  v63 = v10[1];
  v65 = v10[2];
  v51 = v10[3];
  v52 = v10[4];
  v53 = v10[5];
  v54 = v10[6];
  v55 = v10[7];
  v56 = v10[8];
  v57 = v10[9];
  v58 = v10[10];
  v59 = v10[11];
  v61 = v10[12];
  v11 = v10[14];
  v12 = v10[13];
  v13 = v10[15];
  while ( 1 )
  {
    v14 = (float *)(v9 + 16 * v8);
    v15 = &v73 + 4 * v8;
    v16 = *v14;
    v17 = v14[1];
    v18 = v14[2];
    *v15 = (float)((float)((float)(v67 * *v14) + (float)(v52 * v17)) + (float)(v56 * v18)) + v61;
    v15[1] = (float)((float)((float)(v63 * v16) + (float)(v53 * v17)) + (float)(v57 * v18)) + v12;
    v15[2] = (float)((float)((float)(v65 * v16) + (float)(v54 * v17)) + (float)(v58 * v18)) + v11;
    v15[3] = (float)((float)((float)(v16 * v51) + (float)(v17 * v55)) + (float)(v18 * v59)) + v13;
    if ( v8 != 1 )
      break;
    LOBYTE(v8) = 0;
  }
  hkLineSegmentUtil::closestPointLineSeg(v50 + 12, &v73, &v77, v69);
g4_m128_raw(v19) = *((unsigned int *)v50 + 12);
  *(float *)g4_m128_ptr<int32_t>(v19) = *(float *)g4_m128_ptr<int32_t>(v19) - v69[0];
  v20 = v50[13] - v69[1];
  v68 = v50[12];
  v66 = v50[13];
  v64 = v50[14];
  v22 = v19;
  v21 = *(float *)(v47 + 16);
  v62 = v21 + *(float *)(v48 + 16);
  *(float *)g4_m128_ptr<int32_t>(v22) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v19) * *(float *)g4_m128_ptr<int32_t>(v19)) + (float)(v20 * v20))
                          + (float)((float)(v64 - v69[2]) * (float)(v64 - v69[2]));
  if ( *(float *)g4_m128_ptr<int32_t>(v22) < (float)((float)(v62 + *(float *)(a3 + 12)) * (float)(v62 + *(float *)(a3 + 12))) )
  {
    if ( *(float *)g4_m128_ptr<int32_t>(v22) <= 0.0 )
    {
      v37 = v77 - v73;
g4_m128_raw(v38) = v79;
g4_m128_lane<float>(v38, 0) = *(float *)&v79 - v75;
      v39 = fabs(v77 - v73);
g4_m128_lane<int32_t>(v40, 0) = fabs(v78 - v74);
      v41 = _mm_and_ps(g4_m128_u32(0x7FFFFFFFu), v38);
      if ( v39 >g4_m128_lane<float>(v40, 0) )
      {
        v42 = v78 - v74;
        v43 = 0;
        v44 = 1;
      }
      else
      {
        v42 = v77 - v73;
g4_m128_lane<float>(v40, 0) = v39;
        v37 = v78 - v74;
        v43 = 1;
        v44 = 0;
      }
      v45 = _mm_cmplt_ss(v41, v40);
      if (g4_m128_lane<float>(v40, 0) <=g4_m128_lane<float>(v41, 0) )
        v44 = 2;
      v70 = 0;
      v71 = 0.0;
      v72 = 0.0;
      *(&v70 + v43) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v45, v38), 0)) | LODWORD(v42) &g4_m128_lane<int32_t>(v45, 0);
      *((float *)&v70 + v44) = -v37;
g4_m128_raw(v19) = v70;
      v20 = v71;
      v22 = v19;
      v60 = v72;
      v25 = 0.0;
      *(float *)g4_m128_ptr<int32_t>(v22) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v19) * *(float *)g4_m128_ptr<int32_t>(v19)) + (float)(v20 * v20))
                              + (float)(v72 * v72);
    }
    else
    {
      v23 = ((_mm_cvtsi128_si32(v22) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v22) >> 1));
      v24 = (float)(*(float *)&v23 * 1.5)
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v22)) * *(float *)&v23)
                  * (float)(*(float *)&v23 * *(float *)&v23));
      v60 = v50[14] - v69[2];
      v25 = (float)((float)(1.5
                          * (float)((float)(v24 * 1.5)
                                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v22)) * v24) * (float)(v24 * v24))))
                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v22))
                                  * (float)((float)(v24 * 1.5)
                                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v22)) * v24)
                                                  * (float)(v24 * v24))))
                          * (float)((float)((float)(v24 * 1.5)
                                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v22)) * v24)
                                                  * (float)(v24 * v24)))
                                  * (float)((float)(v24 * 1.5)
                                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v22)) * v24)
                                                  * (float)(v24 * v24))))))
          * *(float *)g4_m128_ptr<int32_t>(v22);
    }
    v26 = 0.0;
    if ( *(float *)g4_m128_ptr<int32_t>(v22) > 0.0 )
    {
      v27 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v22);
      v28 = ((_mm_cvtsi128_si32(v22) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v22) >> 1));
      v29 = (float)(*(float *)&v28 * 1.5)
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v22)) * *(float *)&v28)
                  * (float)(*(float *)&v28 * *(float *)&v28));
      v26 = (float)(1.5 * (float)((float)(v29 * 1.5) - (float)((float)(v27 * v29) * (float)(v29 * v29))))
          - (float)((float)(v27 * (float)((float)(v29 * 1.5) - (float)((float)(v27 * v29) * (float)(v29 * v29))))
                  * (float)((float)((float)(v29 * 1.5) - (float)((float)(v27 * v29) * (float)(v29 * v29)))
                          * (float)((float)(v29 * 1.5) - (float)((float)(v27 * v29) * (float)(v29 * v29)))));
    }
    v30 = v21 - v25;
    v31 = v25 - v62;
    v32 = (float)((float)(v25 - v62) * (float)(v21 - v25)) + v50[15];
    v77 = *(float *)g4_m128_ptr<int32_t>(v19) * v26;
    v78 = v20 * v26;
    v85 = a1;
    *(float *)&v79 = v26 * v60;
    v73 = (float)(v30 * (float)(*(float *)g4_m128_ptr<int32_t>(v19) * v26)) + v68;
    v86 = a2;
    v76 = v32;
    v80 = v31;
    v81 = *(float *)g4_m128_ptr<int32_t>(v19) * v26;
    v33 = *a4;
    v82 = v20 * v26;
    v83 = v26 * v60;
    v74 = (float)(v30 * (float)(v20 * v26)) + v66;
    v75 = (float)(v30 * (float)(v26 * v60)) + v64;
    v84 = v31;
    (*(void (**)(int *, float *))(v33 + 8))(a4, &v73);
  }
  LODWORD(v34) = (uint32_t)(uintptr_t)(v49);
  v35 = *v49;
  v36 = *(uint32_t **)(*v49 + 4);
  if ( (unsigned int)(uintptr_t)(v36) < *(uint32_t *)(*v49 + 12) )
  {
    *v36 = (uint32_t)(uintptr_t)("Et");
    v34 = __rdtsc();
    v36[1] = v34;
    *(uint32_t *)(v35 + 4) = (uint32_t)(uintptr_t)(v36 + 3);
  }
  return v34;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereCapsuleAgent::processCollision  (binary VA: 0x16bd590)
// Original: hkpSphereCapsuleAgent::processCollision
// ----------------------------------------------------------------------------
int hkpSphereCapsuleAgent::processCollision(int a1, int *a2, int *a3, int a4, int *a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  int v10;
  float *v11;
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm4_4
  float *v15;
  float *v16;
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  __m128i v20;
  float v21; // xmm5_4
  float v22; // xmm0_4
  __m128i v23;
  int v24;
  int v25;
  float v26; // xmm1_4
  float v27; // xmm1_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  int v30;
  int v31;
  float v32; // xmm3_4
  float v33; // xmm2_4
  float v34; // xmm6_4
  float v35; // xmm5_4
  float v36; // xmm3_4
  float v37; // xmm0_4
  float v38; // xmm3_4
  float v39; // xmm1_4
  float v40; // xmm6_4
  uint16_t v41;
  uint64_t v42; // rax
  int v43;
  uint32_t *v44;
  float v45; // xmm6_4
  __m128 v46;
  float v47; // xmm7_4
  __m128 v48;
  __m128 v49;
  float v50; // xmm1_4
  int v51;
  int v52;
  __m128 v53;
  uint32_t v54; // xmm1_4
  typedef int _g4_t_v56;
  typedef int *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75[4];
  typedef unsigned int _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79[4];
  typedef float _g4_t_v80[7];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v56)) > _g4_s0 ? (8u + sizeof(_g4_t_v56)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v57)) > _g4_s1 ? (12u + sizeof(_g4_t_v57)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v58)) > _g4_s2 ? (16u + sizeof(_g4_t_v58)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v59)) > _g4_s3 ? (20u + sizeof(_g4_t_v59)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v60)) > _g4_s4 ? (24u + sizeof(_g4_t_v60)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v61)) > _g4_s5 ? (28u + sizeof(_g4_t_v61)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v62)) > _g4_s6 ? (32u + sizeof(_g4_t_v62)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v63)) > _g4_s7 ? (36u + sizeof(_g4_t_v63)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v64)) > _g4_s8 ? (40u + sizeof(_g4_t_v64)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v65)) > _g4_s9 ? (44u + sizeof(_g4_t_v65)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v66)) > _g4_s10 ? (48u + sizeof(_g4_t_v66)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v67)) > _g4_s11 ? (52u + sizeof(_g4_t_v67)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v68)) > _g4_s12 ? (56u + sizeof(_g4_t_v68)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v69)) > _g4_s13 ? (60u + sizeof(_g4_t_v69)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v70)) > _g4_s14 ? (64u + sizeof(_g4_t_v70)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v71)) > _g4_s15 ? (68u + sizeof(_g4_t_v71)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v72)) > _g4_s16 ? (72u + sizeof(_g4_t_v72)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v73)) > _g4_s17 ? (76u + sizeof(_g4_t_v73)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v74)) > _g4_s18 ? (76u + sizeof(_g4_t_v74)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v75)) > _g4_s19 ? (80u + sizeof(_g4_t_v75)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v76)) > _g4_s20 ? (96u + sizeof(_g4_t_v76)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v77)) > _g4_s21 ? (100u + sizeof(_g4_t_v77)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v78)) > _g4_s22 ? (104u + sizeof(_g4_t_v78)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v79)) > _g4_s23 ? (112u + sizeof(_g4_t_v79)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v80)) > _g4_s24 ? (128u + sizeof(_g4_t_v80)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 20u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 24u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 32u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 36u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 40u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 44u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 48u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 52u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 56u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 60u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 64u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 68u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 72u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 76u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 76u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 80u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 96u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 100u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 104u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 112u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 128u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v57 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtSphereCapsule");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v9 = 1;
  v58 = *a5;
  v59 = a2[2];
  v56 = *a2;
  v60 = *a3;
  v10 = *a3 + 32;
  v11 = (float *)a3[2];
  v61 = *v11;
  v73 = v11[1];
  v70 = v11[2];
  v71 = v11[3];
  v72 = v11[4];
  v69 = v11[5];
  v68 = v11[6];
  v67 = v11[7];
  v66 = v11[8];
  v65 = v11[9];
  v64 = v11[10];
  v63 = v11[11];
  v62 = v11[12];
  v12 = v11[13];
  v13 = v11[14];
  v14 = v11[15];
  while ( 1 )
  {
    v15 = (float *)(v10 + 16 * v9);
    v16 = &v79[4 * v9];
    v17 = *v15;
    v18 = v15[1];
    v19 = v15[2];
    *v16 = (float)((float)((float)(v61 * *v15) + (float)(v72 * v18)) + (float)(v66 * v19)) + v62;
    v16[1] = (float)((float)((float)(v73 * v17) + (float)(v69 * v18)) + (float)(v65 * v19)) + v12;
    v16[2] = (float)((float)((float)(v70 * v17) + (float)(v68 * v18)) + (float)(v64 * v19)) + v13;
    v16[3] = (float)((float)((float)(v17 * v71) + (float)(v18 * v67)) + (float)(v19 * v63)) + v14;
    if ( v9 != 1 )
      break;
    LOBYTE(v9) = 0;
  }
  hkLineSegmentUtil::closestPointLineSeg(v59 + 48, v79, v80, v75);
g4_m128_raw(v20) = *(unsigned int *)(v59 + 48);
  *(float *)g4_m128_ptr<int32_t>(v20) = *(float *)g4_m128_ptr<int32_t>(v20) - v75[0];
  v21 = *(float *)(v59 + 52) - v75[1];
  v23 = v20;
  v22 = *(float *)(v56 + 16) + *(float *)(v60 + 16);
  *(float *)g4_m128_ptr<int32_t>(v23) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v20) * *(float *)g4_m128_ptr<int32_t>(v20)) + (float)(v21 * v21))
                          + (float)((float)(*(float *)(v59 + 56) - v75[2]) * (float)(*(float *)(v59 + 56) - v75[2]));
  if ( *(float *)g4_m128_ptr<int32_t>(v23) >= (float)((float)(*(float *)(a4 + 12) + v22) * (float)(*(float *)(a4 + 12) + v22)) )
  {
    if ( *(uint16_t *)(a1 + 12) != 0xFFFF )
    {
      (*(void (**)(uint32_t, uint32_t, int))(**(uint32_t **)(a1 + 8) + 28))(
        *(uint32_t *)(a1 + 8),
        *(uint16_t *)(a1 + 12),
        a5[1]);
      *(uint16_t *)(a1 + 12) = -1;
    }
  }
  else
  {
    if ( *(float *)g4_m128_ptr<int32_t>(v23) <= 0.0 )
    {
      v45 = v80[1] - v79[1];
g4_m128_raw(v46) = LODWORD(v80[2]);
g4_m128_lane<float>(v46, 0) = v80[2] - v79[2];
      v47 = fabs(v80[0] - v79[0]);
g4_m128_lane<int32_t>(v48, 0) = fabs(v80[1] - v79[1]);
      v49 = _mm_and_ps(g4_m128_u32(0x7FFFFFFFu), v46);
      if ( v47 >g4_m128_lane<float>(v48, 0) )
      {
        v50 = v80[1] - v79[1];
        v51 = 0;
        v45 = v80[0] - v79[0];
        v52 = 1;
      }
      else
      {
        v50 = v80[0] - v79[0];
g4_m128_lane<float>(v48, 0) = v47;
        v51 = 1;
        v52 = 0;
      }
      v53 = _mm_cmplt_ss(v49, v48);
      v76 = 0;
      v54 =g4_m128_lane<uint32_t>(_mm_andnot_ps(v53, v46), 0) | LODWORD(v50) &g4_m128_lane<int32_t>(v53, 0);
      v77 = 0.0;
      v78 = 0.0;
      if (g4_m128_lane<float>(v48, 0) <=g4_m128_lane<float>(v49, 0) )
        v52 = 2;
      *(&v76 + v51) = v54;
      *((float *)&v76 + v52) = -v45;
g4_m128_raw(v20) = v76;
      v21 = v77;
      v23 = v20;
      v74 = v78;
      *(float *)g4_m128_ptr<int32_t>(v23) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v20) * *(float *)g4_m128_ptr<int32_t>(v20)) + (float)(v21 * v21))
                              + (float)(v78 * v78);
      v27 = 0.0;
    }
    else
    {
      v24 = _mm_cvtsi128_si32(v23) >> 1;
      v25 = (_mm_cvtsi128_si32(v23) + 2139095040) >> 31;
      v26 = (float)(1.5 * COERCE_FLOAT(v25 & (1597463174 - v24)))
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23)) * COERCE_FLOAT(v25 & (1597463174 - v24)))
                  * (float)(COERCE_FLOAT(v25 & (1597463174 - v24)) * COERCE_FLOAT(v25 & (1597463174 - v24))));
      v74 = *(float *)(v59 + 56) - v75[2];
      v27 = (float)((float)(1.5
                          * (float)((float)(1.5 * v26)
                                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23)) * v26) * (float)(v26 * v26))))
                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23))
                                  * (float)((float)(1.5 * v26)
                                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23)) * v26)
                                                  * (float)(v26 * v26))))
                          * (float)((float)((float)(1.5 * v26)
                                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23)) * v26)
                                                  * (float)(v26 * v26)))
                                  * (float)((float)(1.5 * v26)
                                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23)) * v26)
                                                  * (float)(v26 * v26))))))
          * *(float *)g4_m128_ptr<int32_t>(v23);
    }
    v28 = 0.0;
    if ( *(float *)g4_m128_ptr<int32_t>(v23) > 0.0 )
    {
      v29 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v23);
      v30 = _mm_cvtsi128_si32(v23) >> 1;
      v31 = (_mm_cvtsi128_si32(v23) + 2139095040) >> 31;
      v32 = (float)(1.5 * COERCE_FLOAT(v31 & (1597463174 - v30)))
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23)) * COERCE_FLOAT(v31 & (1597463174 - v30)))
                  * (float)(COERCE_FLOAT(v31 & (1597463174 - v30)) * COERCE_FLOAT(v31 & (1597463174 - v30))));
      v28 = (float)(1.5 * (float)((float)(1.5 * v32) - (float)((float)(v29 * v32) * (float)(v32 * v32))))
          - (float)((float)(v29 * (float)((float)(1.5 * v32) - (float)((float)(v29 * v32) * (float)(v32 * v32))))
                  * (float)((float)((float)(1.5 * v32) - (float)((float)(v29 * v32) * (float)(v32 * v32)))
                          * (float)((float)(1.5 * v32) - (float)((float)(v29 * v32) * (float)(v32 * v32)))));
    }
    v33 = v27 - v22;
    v34 = *(float *)g4_m128_ptr<int32_t>(v20) * v28;
    v35 = v21 * v28;
    v36 = v28 * v74;
    *(float *)(v58 + 16) = v34;
    *(float *)(v58 + 20) = v35;
    *(float *)(v58 + 24) = v36;
    *(float *)(v58 + 28) = v27 - v22;
    v37 = *(float *)(v60 + 16) - v27;
    v38 = (float)(v36 * v37) + *(float *)(v59 + 56);
    v39 = (float)(v33 * v37) + *(float *)(v59 + 60);
    v40 = (float)(v34 * v37) + *(float *)(v59 + 48);
    *(float *)(v58 + 4) = (float)(v35 * v37) + *(float *)(v59 + 52);
    *(float *)(v58 + 8) = v38;
    *(float *)(v58 + 12) = v39;
    *(float *)v58 = v40;
    v41 = *(uint16_t *)(a1 + 12);
    if ( v41 != 0xFFFF
      || (v41 = (*(int (**)(uint32_t, int *, int *, int, int *, uint32_t, int))(**(uint32_t **)(a1 + 8) + 20))(
                  *(uint32_t *)(a1 + 8),
                  a2,
                  a3,
                  a4,
                  a5,
                  0,
                  v58),
          *(uint16_t *)(a1 + 12) = v41,
          v41 != 0xFFFF) )
    {
      *(uint32_t *)(v58 + 32) = v41;
      *a5 += 48;
    }
  }
  LODWORD(v42) = (uint32_t)(uintptr_t)(v57);
  v43 = *v57;
  v44 = *(uint32_t **)(*v57 + 4);
  if ( (unsigned int)(uintptr_t)(v44) < *(uint32_t *)(*v57 + 12) )
  {
    *v44 = (uint32_t)(uintptr_t)("Et");
    v42 = __rdtsc();
    v44[1] = v42;
    *(uint32_t *)(v43 + 4) = (uint32_t)(uintptr_t)(v44 + 3);
  }
  return v42;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereCapsuleAgent::getClosestPoints  (binary VA: 0x16bdbd0)
// Original: hkpSphereCapsuleAgent::getClosestPoints
// ----------------------------------------------------------------------------
int hkpSphereCapsuleAgent::getClosestPoints(int a1, uint32_t *a2, uint32_t *a3, int a4, int *a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  int v10;
  float *v11;
  float v12; // xmm5_4
  float v13; // xmm6_4
  float v14; // xmm4_4
  float *v15;
  float *v16;
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  __m128i v20;
  float v21; // xmm2_4
  float v22;
  __m128i v23;
  int v24; // xmm5_4
  float v25; // xmm4_4
  float v26; // xmm6_4
  float v27; // xmm3_4
  float v28; // xmm5_4
  int v29;
  float v30; // xmm4_4
  float v31; // xmm0_4
  float v32; // xmm4_4
  float v33; // xmm6_4
  int v34;
  uint64_t v35; // rax
  int v36;
  uint32_t *v37;
  float v38; // xmm3_4
  __m128 v39;
  float v40; // xmm5_4
  __m128 v41;
  __m128 v42;
  float v43; // xmm6_4
  int v44;
  int v45;
  __m128 v46;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int *_g4_t_v50;
  typedef float *_g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70[4];
  typedef unsigned int _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef unsigned int _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef uint32_t *_g4_t_v86;
  typedef uint32_t *_g4_t_v87;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v48)) > _g4_s0 ? (12u + sizeof(_g4_t_v48)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v49)) > _g4_s1 ? (16u + sizeof(_g4_t_v49)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v50)) > _g4_s2 ? (20u + sizeof(_g4_t_v50)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v51)) > _g4_s3 ? (24u + sizeof(_g4_t_v51)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v52)) > _g4_s4 ? (28u + sizeof(_g4_t_v52)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v53)) > _g4_s5 ? (32u + sizeof(_g4_t_v53)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v54)) > _g4_s6 ? (36u + sizeof(_g4_t_v54)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v55)) > _g4_s7 ? (40u + sizeof(_g4_t_v55)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v56)) > _g4_s8 ? (44u + sizeof(_g4_t_v56)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v57)) > _g4_s9 ? (48u + sizeof(_g4_t_v57)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v58)) > _g4_s10 ? (52u + sizeof(_g4_t_v58)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v59)) > _g4_s11 ? (56u + sizeof(_g4_t_v59)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v60)) > _g4_s12 ? (60u + sizeof(_g4_t_v60)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v61)) > _g4_s13 ? (60u + sizeof(_g4_t_v61)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v62)) > _g4_s14 ? (64u + sizeof(_g4_t_v62)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v63)) > _g4_s15 ? (64u + sizeof(_g4_t_v63)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v64)) > _g4_s16 ? (68u + sizeof(_g4_t_v64)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v65)) > _g4_s17 ? (68u + sizeof(_g4_t_v65)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v66)) > _g4_s18 ? (72u + sizeof(_g4_t_v66)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v67)) > _g4_s19 ? (72u + sizeof(_g4_t_v67)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v68)) > _g4_s20 ? (76u + sizeof(_g4_t_v68)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v69)) > _g4_s21 ? (76u + sizeof(_g4_t_v69)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v70)) > _g4_s22 ? (80u + sizeof(_g4_t_v70)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v71)) > _g4_s23 ? (96u + sizeof(_g4_t_v71)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v72)) > _g4_s24 ? (100u + sizeof(_g4_t_v72)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v73)) > _g4_s25 ? (104u + sizeof(_g4_t_v73)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v74)) > _g4_s26 ? (112u + sizeof(_g4_t_v74)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v75)) > _g4_s27 ? (116u + sizeof(_g4_t_v75)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v76)) > _g4_s28 ? (120u + sizeof(_g4_t_v76)) : _g4_s28,
    _g4_s30 = (124u + sizeof(_g4_t_v77)) > _g4_s29 ? (124u + sizeof(_g4_t_v77)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v78)) > _g4_s30 ? (128u + sizeof(_g4_t_v78)) : _g4_s30,
    _g4_s32 = (132u + sizeof(_g4_t_v79)) > _g4_s31 ? (132u + sizeof(_g4_t_v79)) : _g4_s31,
    _g4_s33 = (136u + sizeof(_g4_t_v80)) > _g4_s32 ? (136u + sizeof(_g4_t_v80)) : _g4_s32,
    _g4_s34 = (140u + sizeof(_g4_t_v81)) > _g4_s33 ? (140u + sizeof(_g4_t_v81)) : _g4_s33,
    _g4_s35 = (144u + sizeof(_g4_t_v82)) > _g4_s34 ? (144u + sizeof(_g4_t_v82)) : _g4_s34,
    _g4_s36 = (148u + sizeof(_g4_t_v83)) > _g4_s35 ? (148u + sizeof(_g4_t_v83)) : _g4_s35,
    _g4_s37 = (152u + sizeof(_g4_t_v84)) > _g4_s36 ? (152u + sizeof(_g4_t_v84)) : _g4_s36,
    _g4_s38 = (156u + sizeof(_g4_t_v85)) > _g4_s37 ? (156u + sizeof(_g4_t_v85)) : _g4_s37,
    _g4_s39 = (160u + sizeof(_g4_t_v86)) > _g4_s38 ? (160u + sizeof(_g4_t_v86)) : _g4_s38,
    _g4_s40 = (164u + sizeof(_g4_t_v87)) > _g4_s39 ? (164u + sizeof(_g4_t_v87)) : _g4_s39
  };
  alignas(16) uint8_t _g4_sf[_g4_s40];
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 12u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 20u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 24u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 36u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 40u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 44u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 48u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 52u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 56u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 60u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 64u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 64u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 68u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 68u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 72u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 72u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 76u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 76u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 80u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 96u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 100u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 104u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 112u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 116u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 120u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 124u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 128u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 132u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 136u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 140u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 144u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 148u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 152u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 156u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 160u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 164u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v50 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtSphereCapsule");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v9 = 1;
  v49 = *a2;
  v51 = (float *)a2[2];
  v48 = *a3;
  v10 = *a3 + 32;
  v11 = (float *)a3[2];
  v68 = *v11;
  v64 = v11[1];
  v66 = v11[2];
  v52 = v11[3];
  v53 = v11[4];
  v54 = v11[5];
  v55 = v11[6];
  v56 = v11[7];
  v57 = v11[8];
  v58 = v11[9];
  v59 = v11[10];
  v60 = v11[11];
  v62 = v11[12];
  v12 = v11[14];
  v13 = v11[13];
  v14 = v11[15];
  while ( 1 )
  {
    v15 = (float *)(v10 + 16 * v9);
    v16 = &v74 + 4 * v9;
    v17 = *v15;
    v18 = v15[1];
    v19 = v15[2];
    *v16 = (float)((float)((float)(v68 * *v15) + (float)(v53 * v18)) + (float)(v57 * v19)) + v62;
    v16[1] = (float)((float)((float)(v64 * v17) + (float)(v54 * v18)) + (float)(v58 * v19)) + v13;
    v16[2] = (float)((float)((float)(v66 * v17) + (float)(v55 * v18)) + (float)(v59 * v19)) + v12;
    v16[3] = (float)((float)((float)(v17 * v52) + (float)(v18 * v56)) + (float)(v19 * v60)) + v14;
    if ( v9 != 1 )
      break;
    LOBYTE(v9) = 0;
  }
  hkLineSegmentUtil::closestPointLineSeg(v51 + 12, &v74, &v78, v70);
g4_m128_raw(v20) = *((unsigned int *)v51 + 12);
  *(float *)g4_m128_ptr<int32_t>(v20) = *(float *)g4_m128_ptr<int32_t>(v20) - v70[0];
  v21 = v51[13] - v70[1];
  v69 = v51[12];
  v67 = v51[13];
  v65 = v51[14];
  v23 = v20;
  v22 = *(float *)(v48 + 16);
  v63 = v22 + *(float *)(v49 + 16);
  *(float *)g4_m128_ptr<int32_t>(v23) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v20) * *(float *)g4_m128_ptr<int32_t>(v20)) + (float)(v21 * v21))
                          + (float)((float)(v65 - v70[2]) * (float)(v65 - v70[2]));
  if ( *(float *)g4_m128_ptr<int32_t>(v23) < (float)((float)(v63 + *(float *)(a4 + 12)) * (float)(v63 + *(float *)(a4 + 12))) )
  {
    if ( *(float *)g4_m128_ptr<int32_t>(v23) <= 0.0 )
    {
      v38 = v78 - v74;
g4_m128_raw(v39) = v80;
g4_m128_lane<float>(v39, 0) = *(float *)&v80 - v76;
      v40 = fabs(v78 - v74);
g4_m128_lane<int32_t>(v41, 0) = fabs(v79 - v75);
      v42 = _mm_and_ps(g4_m128_u32(0x7FFFFFFFu), v39);
      if ( v40 >g4_m128_lane<float>(v41, 0) )
      {
        v43 = v79 - v75;
        v44 = 0;
        v45 = 1;
      }
      else
      {
        v43 = v78 - v74;
g4_m128_lane<float>(v41, 0) = v40;
        v38 = v79 - v75;
        v44 = 1;
        v45 = 0;
      }
      v46 = _mm_cmplt_ss(v42, v41);
      if (g4_m128_lane<float>(v41, 0) <=g4_m128_lane<float>(v42, 0) )
        v45 = 2;
      v71 = 0;
      v72 = 0.0;
      v73 = 0.0;
      *(&v71 + v44) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v46, v39), 0)) | LODWORD(v43) &g4_m128_lane<int32_t>(v46, 0);
      *((float *)&v71 + v45) = -v38;
g4_m128_raw(v20) = v71;
      v21 = v72;
      v23 = v20;
      v61 = v73;
      v26 = 0.0;
      *(float *)g4_m128_ptr<int32_t>(v23) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v20) * *(float *)g4_m128_ptr<int32_t>(v20)) + (float)(v21 * v21))
                              + (float)(v73 * v73);
    }
    else
    {
      v24 = ((_mm_cvtsi128_si32(v23) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v23) >> 1));
      v25 = (float)(*(float *)&v24 * 1.5)
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23)) * *(float *)&v24)
                  * (float)(*(float *)&v24 * *(float *)&v24));
      v61 = v51[14] - v70[2];
      v26 = (float)((float)(1.5
                          * (float)((float)(v25 * 1.5)
                                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23)) * v25) * (float)(v25 * v25))))
                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23))
                                  * (float)((float)(v25 * 1.5)
                                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23)) * v25)
                                                  * (float)(v25 * v25))))
                          * (float)((float)((float)(v25 * 1.5)
                                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23)) * v25)
                                                  * (float)(v25 * v25)))
                                  * (float)((float)(v25 * 1.5)
                                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23)) * v25)
                                                  * (float)(v25 * v25))))))
          * *(float *)g4_m128_ptr<int32_t>(v23);
    }
    v27 = 0.0;
    if ( *(float *)g4_m128_ptr<int32_t>(v23) > 0.0 )
    {
      v28 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v23);
      v29 = ((_mm_cvtsi128_si32(v23) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v23) >> 1));
      v30 = (float)(*(float *)&v29 * 1.5)
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23)) * *(float *)&v29)
                  * (float)(*(float *)&v29 * *(float *)&v29));
      v27 = (float)(1.5 * (float)((float)(v30 * 1.5) - (float)((float)(v28 * v30) * (float)(v30 * v30))))
          - (float)((float)(v28 * (float)((float)(v30 * 1.5) - (float)((float)(v28 * v30) * (float)(v30 * v30))))
                  * (float)((float)((float)(v30 * 1.5) - (float)((float)(v28 * v30) * (float)(v30 * v30)))
                          * (float)((float)(v30 * 1.5) - (float)((float)(v28 * v30) * (float)(v30 * v30)))));
    }
    v31 = v22 - v26;
    v32 = v26 - v63;
    v33 = (float)((float)(v26 - v63) * (float)(v22 - v26)) + v51[15];
    v78 = *(float *)g4_m128_ptr<int32_t>(v20) * v27;
    v79 = v21 * v27;
    v86 = a2;
    *(float *)&v80 = v27 * v61;
    v74 = (float)(v31 * (float)(*(float *)g4_m128_ptr<int32_t>(v20) * v27)) + v69;
    v87 = a3;
    v77 = v33;
    v81 = v32;
    v82 = *(float *)g4_m128_ptr<int32_t>(v20) * v27;
    v34 = *a5;
    v83 = v21 * v27;
    v84 = v27 * v61;
    v75 = (float)(v31 * (float)(v21 * v27)) + v67;
    v76 = (float)(v31 * (float)(v27 * v61)) + v65;
    v85 = v32;
    (*(void (**)(int *, float *))(v34 + 8))(a5, &v74);
  }
  LODWORD(v35) = (uint32_t)(uintptr_t)(v50);
  v36 = *v50;
  v37 = *(uint32_t **)(*v50 + 4);
  if ( (unsigned int)(uintptr_t)(v37) < *(uint32_t *)(*v50 + 12) )
  {
    *v37 = (uint32_t)(uintptr_t)("Et");
    v35 = __rdtsc();
    v37[1] = v35;
    *(uint32_t *)(v36 + 4) = (uint32_t)(uintptr_t)(v37 + 3);
  }
  return v35;
}

// ----------------------------------------------------------------------------
// Function: hkpSphereCapsuleAgent::registerAgent  (binary VA: 0x16be220)
// Original: hkpSphereCapsuleAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpSphereCapsuleAgent::registerAgent(hkpSphereCapsuleAgent::Self *self)
{
  uint32_t v2[11];

  v2[0] = (uint32_t)(uintptr_t)(hkpSphereCapsuleAgent::createCapsuleSphereAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpSphereCapsuleAgent_5d9101::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpSphereCapsuleAgent_5d9101::staticGetClosestPoints);
  v2[3] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpSphereCapsuleAgent_5d9101::staticLinearCast);
  LOWORD(v2[4]) = 1;
  hkpCollisionDispatcher::registerCollisionAgent(self, v2, 4, 0);
  v2[0] = (uint32_t)(uintptr_t)(hkpSphereCapsuleAgent::createSphereCapsuleAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpSphereCapsuleAgent::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpSphereCapsuleAgent::staticGetClosestPoints);
  LOWORD(v2[4]) = 0;
  v2[3] = (uint32_t)(uintptr_t)(((int * (*)(unsigned int, float *, float *, float *, int, int, int, int, int, int, int, unsigned int, int, int, int, int, int, int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, g4_int128_t, float, int, int, int, int, int, int, int, int, int, int, int, float, float, float, float, unsigned int, unsigned int, unsigned int, unsigned int, g4_int128_t, int32_t, unsigned int, int32_t, int32_t, unsigned int, float *, int, int, int, int, int, int, unsigned int))hkpIterativeLinearCastAgent::staticLinearCast));
  return hkpCollisionDispatcher::registerCollisionAgent(self, v2, 0, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpSphereCapsuleAgent::getClosestPoint  (binary VA: 0x16be2f0)
// Original: hkpSphereCapsuleAgent::getClosestPoint
// ----------------------------------------------------------------------------
int hkpSphereCapsuleAgent::getClosestPoint(int *a1, int *a2, int a3, float *a4)
{
  int v4;
  float *v5;
  int v6;
  float v7; // xmm6_4
  float v8; // xmm5_4
  float v9; // xmm4_4
  float *v10;
  float *v11;
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  __m128i v15;
  float v16; // xmm5_4
  float v17; // xmm0_4
  int result;
  __m128i v19;
  int v20;
  int v21;
  float v22; // xmm1_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  int v26;
  int v27;
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm6_4
  float v31; // xmm5_4
  float v32; // xmm3_4
  float v33; // xmm0_4
  float v34; // xmm3_4
  float v35; // xmm1_4
  float v36; // xmm6_4
  float v37; // xmm6_4
  __m128 v38;
  float v39; // xmm7_4
  __m128 v40;
  __m128 v41;
  float v42; // xmm1_4
  int v43;
  int v44;
  __m128 v45;
  uint32_t v46; // xmm1_4
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64[4];
  typedef unsigned int _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68[4];
  typedef float _g4_t_v69[7];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v47)) > _g4_s0 ? (0u + sizeof(_g4_t_v47)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v48)) > _g4_s1 ? (4u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v49)) > _g4_s2 ? (8u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v50)) > _g4_s3 ? (12u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v51)) > _g4_s4 ? (16u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v52)) > _g4_s5 ? (20u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v53)) > _g4_s6 ? (24u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v54)) > _g4_s7 ? (28u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v55)) > _g4_s8 ? (32u + sizeof(_g4_t_v55)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v56)) > _g4_s9 ? (36u + sizeof(_g4_t_v56)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v57)) > _g4_s10 ? (40u + sizeof(_g4_t_v57)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v58)) > _g4_s11 ? (44u + sizeof(_g4_t_v58)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v59)) > _g4_s12 ? (48u + sizeof(_g4_t_v59)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v60)) > _g4_s13 ? (52u + sizeof(_g4_t_v60)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v61)) > _g4_s14 ? (56u + sizeof(_g4_t_v61)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v62)) > _g4_s15 ? (60u + sizeof(_g4_t_v62)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v63)) > _g4_s16 ? (60u + sizeof(_g4_t_v63)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v64)) > _g4_s17 ? (64u + sizeof(_g4_t_v64)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v65)) > _g4_s18 ? (80u + sizeof(_g4_t_v65)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v66)) > _g4_s19 ? (84u + sizeof(_g4_t_v66)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v67)) > _g4_s20 ? (88u + sizeof(_g4_t_v67)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v68)) > _g4_s21 ? (96u + sizeof(_g4_t_v68)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v69)) > _g4_s22 ? (112u + sizeof(_g4_t_v69)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 0u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 4u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 12u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 32u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 36u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 40u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 44u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 48u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 56u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 60u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 60u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 64u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 80u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 84u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 88u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 96u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 112u);

  v4 = 1;
  v47 = *a1;
  v5 = (float *)a2[2];
  v48 = a1[2];
  v49 = *a2;
  v50 = *v5;
  v6 = *a2 + 32;
  v62 = v5[1];
  v61 = v5[2];
  v60 = v5[3];
  v59 = v5[4];
  v58 = v5[5];
  v57 = v5[6];
  v56 = v5[7];
  v55 = v5[8];
  v54 = v5[9];
  v53 = v5[10];
  v52 = v5[11];
  v51 = v5[12];
  v7 = v5[13];
  v8 = v5[14];
  v9 = v5[15];
  while ( 1 )
  {
    v10 = (float *)(v6 + 16 * v4);
    v11 = &v68[4 * v4];
    v12 = *v10;
    v13 = v10[1];
    v14 = v10[2];
    *v11 = (float)((float)((float)(v50 * *v10) + (float)(v59 * v13)) + (float)(v55 * v14)) + v51;
    v11[1] = (float)((float)((float)(v62 * v12) + (float)(v58 * v13)) + (float)(v54 * v14)) + v7;
    v11[2] = (float)((float)((float)(v61 * v12) + (float)(v57 * v13)) + (float)(v53 * v14)) + v8;
    v11[3] = (float)((float)((float)(v12 * v60) + (float)(v13 * v56)) + (float)(v14 * v52)) + v9;
    if ( v4 != 1 )
      break;
    LOBYTE(v4) = 0;
  }
  hkLineSegmentUtil::closestPointLineSeg(v48 + 48, v68, v69, v64);
g4_m128_raw(v15) = *(unsigned int *)(v48 + 48);
  *(float *)g4_m128_ptr<int32_t>(v15) = *(float *)g4_m128_ptr<int32_t>(v15) - v64[0];
  v16 = *(float *)(v48 + 52) - v64[1];
  v19 = v15;
  v17 = *(float *)(v47 + 16) + *(float *)(v49 + 16);
  result = 0;
  *(float *)g4_m128_ptr<int32_t>(v19) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)g4_m128_ptr<int32_t>(v15)) + (float)(v16 * v16))
                          + (float)((float)(*(float *)(v48 + 56) - v64[2]) * (float)(*(float *)(v48 + 56) - v64[2]));
  if ( *(float *)g4_m128_ptr<int32_t>(v19) < (float)((float)(*(float *)(a3 + 12) + v17) * (float)(*(float *)(a3 + 12) + v17)) )
  {
    if ( *(float *)g4_m128_ptr<int32_t>(v19) <= 0.0 )
    {
      v37 = v69[1] - v68[1];
g4_m128_raw(v38) = LODWORD(v69[2]);
g4_m128_lane<float>(v38, 0) = v69[2] - v68[2];
      v39 = fabs(v69[0] - v68[0]);
g4_m128_lane<int32_t>(v40, 0) = fabs(v69[1] - v68[1]);
      v41 = _mm_and_ps(g4_m128_u32(0x7FFFFFFFu), v38);
      if ( v39 >g4_m128_lane<float>(v40, 0) )
      {
        v42 = v69[1] - v68[1];
        v43 = 0;
        v37 = v69[0] - v68[0];
        v44 = 1;
      }
      else
      {
        v42 = v69[0] - v68[0];
g4_m128_lane<float>(v40, 0) = v39;
        v43 = 1;
        v44 = 0;
      }
      v45 = _mm_cmplt_ss(v41, v40);
      v65 = 0;
      v46 =g4_m128_lane<uint32_t>(_mm_andnot_ps(v45, v38), 0) | LODWORD(v42) &g4_m128_lane<int32_t>(v45, 0);
      v66 = 0.0;
      v67 = 0.0;
      if (g4_m128_lane<float>(v40, 0) <=g4_m128_lane<float>(v41, 0) )
        v44 = 2;
      *(&v65 + v43) = v46;
      *((float *)&v65 + v44) = -v37;
g4_m128_raw(v15) = v65;
      v16 = v66;
      v19 = v15;
      v63 = v67;
      *(float *)g4_m128_ptr<int32_t>(v19) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)g4_m128_ptr<int32_t>(v15)) + (float)(v16 * v16))
                              + (float)(v67 * v67);
      v23 = 0.0;
    }
    else
    {
      v20 = _mm_cvtsi128_si32(v19) >> 1;
      v21 = (_mm_cvtsi128_si32(v19) + 2139095040) >> 31;
      v22 = (float)(1.5 * COERCE_FLOAT(v21 & (1597463174 - v20)))
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v19)) * COERCE_FLOAT(v21 & (1597463174 - v20)))
                  * (float)(COERCE_FLOAT(v21 & (1597463174 - v20)) * COERCE_FLOAT(v21 & (1597463174 - v20))));
      v63 = *(float *)(v48 + 56) - v64[2];
      v23 = (float)((float)(1.5
                          * (float)((float)(1.5 * v22)
                                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v19)) * v22) * (float)(v22 * v22))))
                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v19))
                                  * (float)((float)(1.5 * v22)
                                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v19)) * v22)
                                                  * (float)(v22 * v22))))
                          * (float)((float)((float)(1.5 * v22)
                                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v19)) * v22)
                                                  * (float)(v22 * v22)))
                                  * (float)((float)(1.5 * v22)
                                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v19)) * v22)
                                                  * (float)(v22 * v22))))))
          * *(float *)g4_m128_ptr<int32_t>(v19);
    }
    v24 = 0.0;
    if ( *(float *)g4_m128_ptr<int32_t>(v19) > 0.0 )
    {
      v25 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v19);
      v26 = _mm_cvtsi128_si32(v19) >> 1;
      v27 = (_mm_cvtsi128_si32(v19) + 2139095040) >> 31;
      v28 = (float)(1.5 * COERCE_FLOAT(v27 & (1597463174 - v26)))
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v19)) * COERCE_FLOAT(v27 & (1597463174 - v26)))
                  * (float)(COERCE_FLOAT(v27 & (1597463174 - v26)) * COERCE_FLOAT(v27 & (1597463174 - v26))));
      v24 = (float)(1.5 * (float)((float)(1.5 * v28) - (float)((float)(v25 * v28) * (float)(v28 * v28))))
          - (float)((float)(v25 * (float)((float)(1.5 * v28) - (float)((float)(v25 * v28) * (float)(v28 * v28))))
                  * (float)((float)((float)(1.5 * v28) - (float)((float)(v25 * v28) * (float)(v28 * v28)))
                          * (float)((float)(1.5 * v28) - (float)((float)(v25 * v28) * (float)(v28 * v28)))));
    }
    v29 = v23 - v17;
    v30 = *(float *)g4_m128_ptr<int32_t>(v15) * v24;
    v31 = v16 * v24;
    v32 = v24 * v63;
    a4[4] = v30;
    a4[5] = v31;
    a4[6] = v32;
    a4[7] = v23 - v17;
    v33 = *(float *)(v49 + 16) - v23;
    v34 = (float)(v32 * v33) + *(float *)(v48 + 56);
    v35 = (float)(v29 * v33) + *(float *)(v48 + 60);
    v36 = (float)(v30 * v33) + *(float *)(v48 + 48);
    a4[1] = (float)(v31 * v33) + *(float *)(v48 + 52);
    a4[2] = v34;
    a4[3] = v35;
    *a4 = v36;
    return 1;
  }
  return result;
}


