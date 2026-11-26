#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpPredGsk.h"

// ----------------------------------------------------------------------------
// Function: hkpPredGskfAgent::Destroy  (binary VA: 0x16d6de0)
// Original: hkpPredGskfAgent::~hkpPredGskfAgent
// ----------------------------------------------------------------------------
void hkpPredGskfAgent::Destroy(hkpPredGskfAgent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpPredGskfAgent::Destroy_ea16d6e00  (binary VA: 0x16d6e00)
// Original: hkpPredGskfAgent::~hkpPredGskfAgent
// ----------------------------------------------------------------------------
void hkpPredGskfAgent::Destroy_ea16d6e00(hkpPredGskfAgent::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 128;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpPredGskfAgent::createPredGskfAgent  (binary VA: 0x16d6e60)
// Original: hkpPredGskfAgent::createPredGskfAgent
// ----------------------------------------------------------------------------
hkpGskfAgent::Self * hkpPredGskfAgent::createPredGskfAgent(const hkTransformf::Self **a1, const hkTransformf::Self **a2, int a3, hkpContactMgr::Self *a4)
{
  int address;
  hkpGskfAgent::Self *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  if ( a4 != nullptr )
  {
    v5 = (hkpGskfAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                           *(uint32_t *)(*(uint32_t *)address + 44),
                           128);
    hkpGskfAgent::Construct(v5, a1, a2, a4);
    *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_209B248);
  }
  else
  {
    v5 = (hkpGskfAgent::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                           *(uint32_t *)(*(uint32_t *)address + 44),
                           48);
    hkpGskBaseAgent::Construct(v5, a1, a2, nullptr);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpPredGskfAgent::processCollision  (binary VA: 0x16d6f20)
// Original: hkpPredGskfAgent::processCollision
// ----------------------------------------------------------------------------
int hkpPredGskfAgent::processCollision(int a1, const hkTransformf::Self *a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  int *address;
  uint32_t *v7;
  uint64_t v8; // rax
  float v9; // xmm0_4
  uint64_t v10; // rax
  int v11;
  uint32_t *v12;
  float v13; // xmm3_4
  float *v14;
  float v15; // xmm5_4
  float v16; // xmm3_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm6_4
  float v20; // xmm2_4
  float v21; // xmm5_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  float v26; // xmm5_4
  float v27; // xmm7_4
  float v28; // xmm4_4
  const hkTransformf::Self *v29;
  int v30;
  const hkTransformf::Self *v31;
  const hkTransformf::Self *v32;
  int v33;
  int v34;
  float *v35;
  float v36; // xmm5_4
  float v37; // xmm6_4
  float v38; // xmm4_4
  int v39;
  float *v40;
  float v41; // xmm3_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  int v44;
  float *v45;
  float v46; // xmm5_4
  float v47; // xmm6_4
  float v48; // xmm4_4
  float *v49;
  float v50; // xmm3_4
  float v51; // xmm2_4
  float v52; // xmm1_4
  typedef hkTransformf::Self *_g4_t_v54;
  typedef hkTransformf::Self *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef const hkTransformf::Self *_g4_t_v58;
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
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74;
  typedef float _g4_t_v75;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef float _g4_t_v78;
  typedef const hkTransformf::Self *_g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef const hkTransformf::Self *_g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86;
  typedef int _g4_t_v87;
  typedef const hkTransformf::Self *_g4_t_v88[4];
  typedef const hkTransformf::Self *_g4_t_v89[4];
  typedef float _g4_t_v90[16];
  typedef uint32_t _g4_t_v91[16];
  typedef const hkTransformf::Self *_g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef float _g4_t_v98[48];
  typedef uint32_t _g4_t_v99[12];
  typedef float _g4_t_v100;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef float _g4_t_v103[28];
  enum : size_t {
    _g4_s0 = 736u,
    _g4_s1 = (12u + sizeof(_g4_t_v54)) > _g4_s0 ? (12u + sizeof(_g4_t_v54)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v55)) > _g4_s1 ? (12u + sizeof(_g4_t_v55)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v56)) > _g4_s2 ? (36u + sizeof(_g4_t_v56)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v57)) > _g4_s3 ? (40u + sizeof(_g4_t_v57)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v58)) > _g4_s4 ? (44u + sizeof(_g4_t_v58)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v59)) > _g4_s5 ? (52u + sizeof(_g4_t_v59)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v60)) > _g4_s6 ? (52u + sizeof(_g4_t_v60)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v61)) > _g4_s7 ? (56u + sizeof(_g4_t_v61)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v62)) > _g4_s8 ? (56u + sizeof(_g4_t_v62)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v63)) > _g4_s9 ? (60u + sizeof(_g4_t_v63)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v64)) > _g4_s10 ? (60u + sizeof(_g4_t_v64)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v65)) > _g4_s11 ? (64u + sizeof(_g4_t_v65)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v66)) > _g4_s12 ? (64u + sizeof(_g4_t_v66)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v67)) > _g4_s13 ? (68u + sizeof(_g4_t_v67)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v68)) > _g4_s14 ? (68u + sizeof(_g4_t_v68)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v69)) > _g4_s15 ? (72u + sizeof(_g4_t_v69)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v70)) > _g4_s16 ? (72u + sizeof(_g4_t_v70)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v71)) > _g4_s17 ? (76u + sizeof(_g4_t_v71)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v72)) > _g4_s18 ? (76u + sizeof(_g4_t_v72)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v73)) > _g4_s19 ? (80u + sizeof(_g4_t_v73)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v74)) > _g4_s20 ? (80u + sizeof(_g4_t_v74)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v75)) > _g4_s21 ? (84u + sizeof(_g4_t_v75)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v76)) > _g4_s22 ? (84u + sizeof(_g4_t_v76)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v77)) > _g4_s23 ? (88u + sizeof(_g4_t_v77)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v78)) > _g4_s24 ? (88u + sizeof(_g4_t_v78)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v79)) > _g4_s25 ? (92u + sizeof(_g4_t_v79)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v80)) > _g4_s26 ? (92u + sizeof(_g4_t_v80)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v81)) > _g4_s27 ? (92u + sizeof(_g4_t_v81)) : _g4_s27,
    _g4_s29 = (96u + sizeof(_g4_t_v82)) > _g4_s28 ? (96u + sizeof(_g4_t_v82)) : _g4_s28,
    _g4_s30 = (96u + sizeof(_g4_t_v83)) > _g4_s29 ? (96u + sizeof(_g4_t_v83)) : _g4_s29,
    _g4_s31 = (96u + sizeof(_g4_t_v84)) > _g4_s30 ? (96u + sizeof(_g4_t_v84)) : _g4_s30,
    _g4_s32 = (104u + sizeof(_g4_t_v85)) > _g4_s31 ? (104u + sizeof(_g4_t_v85)) : _g4_s31,
    _g4_s33 = (104u + sizeof(_g4_t_v86)) > _g4_s32 ? (104u + sizeof(_g4_t_v86)) : _g4_s32,
    _g4_s34 = (108u + sizeof(_g4_t_v87)) > _g4_s33 ? (108u + sizeof(_g4_t_v87)) : _g4_s33,
    _g4_s35 = (112u + sizeof(_g4_t_v88)) > _g4_s34 ? (112u + sizeof(_g4_t_v88)) : _g4_s34,
    _g4_s36 = (128u + sizeof(_g4_t_v89)) > _g4_s35 ? (128u + sizeof(_g4_t_v89)) : _g4_s35,
    _g4_s37 = (144u + sizeof(_g4_t_v90)) > _g4_s36 ? (144u + sizeof(_g4_t_v90)) : _g4_s36,
    _g4_s38 = (208u + sizeof(_g4_t_v91)) > _g4_s37 ? (208u + sizeof(_g4_t_v91)) : _g4_s37,
    _g4_s39 = (272u + sizeof(_g4_t_v92)) > _g4_s38 ? (272u + sizeof(_g4_t_v92)) : _g4_s38,
    _g4_s40 = (276u + sizeof(_g4_t_v93)) > _g4_s39 ? (276u + sizeof(_g4_t_v93)) : _g4_s39,
    _g4_s41 = (280u + sizeof(_g4_t_v94)) > _g4_s40 ? (280u + sizeof(_g4_t_v94)) : _g4_s40,
    _g4_s42 = (284u + sizeof(_g4_t_v95)) > _g4_s41 ? (284u + sizeof(_g4_t_v95)) : _g4_s41,
    _g4_s43 = (288u + sizeof(_g4_t_v96)) > _g4_s42 ? (288u + sizeof(_g4_t_v96)) : _g4_s42,
    _g4_s44 = (292u + sizeof(_g4_t_v97)) > _g4_s43 ? (292u + sizeof(_g4_t_v97)) : _g4_s43,
    _g4_s45 = (304u + sizeof(_g4_t_v98)) > _g4_s44 ? (304u + sizeof(_g4_t_v98)) : _g4_s44,
    _g4_s46 = (496u + sizeof(_g4_t_v99)) > _g4_s45 ? (496u + sizeof(_g4_t_v99)) : _g4_s45,
    _g4_s47 = (544u + sizeof(_g4_t_v100)) > _g4_s46 ? (544u + sizeof(_g4_t_v100)) : _g4_s46,
    _g4_s48 = (548u + sizeof(_g4_t_v101)) > _g4_s47 ? (548u + sizeof(_g4_t_v101)) : _g4_s47,
    _g4_s49 = (552u + sizeof(_g4_t_v102)) > _g4_s48 ? (552u + sizeof(_g4_t_v102)) : _g4_s48,
    _g4_s50 = (556u + sizeof(_g4_t_v103)) > _g4_s49 ? (556u + sizeof(_g4_t_v103)) : _g4_s49
  };
  alignas(16) uint8_t _g4_sf[_g4_s50];
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 12u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 12u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 36u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 40u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 44u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 52u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 56u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 56u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 60u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 60u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 64u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 64u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 68u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 68u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 72u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 72u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 76u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 76u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 80u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 80u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 84u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 84u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 88u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 88u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 92u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 92u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 92u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 96u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 96u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 96u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 104u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 104u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 108u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 112u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 128u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 144u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 208u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 272u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 276u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 280u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 284u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 288u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 292u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 304u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 496u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 544u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 548u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 552u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 556u);

  v5 = a1;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v87 = *address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtGsk");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v87 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v9 = *(float *)(a4 + 80);
  if ( v9 != *(float *)(a1 + 24) )
  {
    if ( *(uint32_t *)(*(uint32_t *)(a4 + 96) + 16) == 0 )
    {
      LODWORD(v10) = 0;
      *(uint32_t *)(a1 + 24) = *(uint32_t *)(a4 + 84);
      v11 = (int)(uintptr_t)(a5);
LABEL_6:
      LODWORD(v10) = hkpGskfAgent::processCollisionNoTim(v5, (int)(uintptr_t)(a2), a3, a4, v10, v11);
      goto LABEL_7;
    }
    v88[3] = a2;
    v88[2] = (const hkTransformf::Self *)v90;
    v29 = *((const hkTransformf::Self **)a2 + 1);
    v88[0] = *(const hkTransformf::Self **)a2;
    v88[1] = v29;
    v89[3] = (const hkTransformf::Self *)a3;
    v89[2] = (const hkTransformf::Self *)v91;
    v89[0] = *(const hkTransformf::Self **)a3;
    v89[1] = *(const hkTransformf::Self **)(a3 + 4);
    hkSweptTransformUtil::lerp2(
      (hkSweptTransformUtil::Self *)(*((uint32_t *)a2 + 2) + 64),
      (const hkSweptTransformf::Self *)LODWORD(v9),
      COERCE_FLOAT(v90),
      v54);
    hkSweptTransformUtil::lerp2(
      (hkSweptTransformUtil::Self *)(*(uint32_t *)(a3 + 8) + 64),
      *(const hkSweptTransformf::Self **)(a4 + 80),
      COERCE_FLOAT(v91),
      v55);
    v30 = *(uint8_t *)(a1 + 21);
    v96 = 0;
    v93 = v30;
    v97 = 0;
    LOBYTE(v30) = *(uint8_t *)(a1 + 22);
    v79 = *(const hkTransformf::Self **)a3;
    v82 = *(const hkTransformf::Self **)a2;
    v95 = (uint8_t)v30 >> 4;
    v31 = (const hkTransformf::Self *)*(uint8_t *)(a1 + 20);
    v94 = v30 & 0xF;
    v92 = v31;
    G4_VCALL<void>(v82, 44, a1 + 12, v31, v98);
    G4_VCALL<void>(v79, 44, a1 + 12 + 2 * (uint32_t)(uintptr_t)(v92), v93, v99);
    hkpGskBaseAgent::calcSeparatingNormal(
      v88,
      v89,
      **(const hkpCdBody::Self ***)(a4 + 96),
      (hkpGsk::Self *)&v92,
      (hkpGsk::Self *)(a1 + 32));
    if ( v97 != 0 )
      hkpGsk::exitAndExportCacheImpl((hkpGsk::Self *)&v92, (hkpGskCache::Self *)(a1 + 12));
  }
  *(uint32_t *)(a1 + 24) = *(uint32_t *)(a4 + 84);
  v13 = *(float *)(a4 + 88);
  v14 = *((float **)a2 + 2);
  HIDWORD(v10) = *(uint32_t *)(a3 + 8);
  v15 = v14[23] * v13;
  v16 = v13 * *(float *)(HIDWORD(v10) + 92);
  v17 = (float)(v14[17] - v14[21]) * v15;
  v18 = (float)((float)(v14[16] - v14[20]) * v15)
      + (float)((float)(*(float *)(HIDWORD(v10) + 80) - *(float *)(HIDWORD(v10) + 64)) * v16);
  v19 = *(float *)(a1 + 44);
  v20 = (float)(v14[18] - v14[22]) * v15;
  v21 = (float)(v15 * v14[39]) * v14[40];
  LODWORD(v10) = *(uint32_t *)(a4 + 96);
  v22 = v17 + (float)((float)(*(float *)(HIDWORD(v10) + 84) - *(float *)(HIDWORD(v10) + 68)) * v16);
  v23 = v20 + (float)((float)(*(float *)(HIDWORD(v10) + 88) - *(float *)(HIDWORD(v10) + 72)) * v16);
  v24 = (float)((float)(v16 * *(float *)(HIDWORD(v10) + 156)) * *(float *)(HIDWORD(v10) + 160)) + v21;
  v25 = (float)((float)(*(float *)(a1 + 32) * v18) + (float)(*(float *)(a1 + 36) * v22))
      + (float)(*(float *)(a1 + 40) * v23);
  v26 = *(float *)(a1 + 28);
  v89[0] = (const hkTransformf::Self *)LODWORD(v26);
  v27 = v19 - v25;
  v28 = v27 - v24;
  if ( (float)(v27 - v24) <= *(float *)v10 || v28 <= (float)(0.5 * v26) )
  {
    if ( *(uint32_t *)(v10 + 16) != 0 )
    {
      v94 = 0;
      v92 = a2;
      v93 = a3;
      HIDWORD(v10) = *(uint32_t *)(a1 + 8);
      v95 = a4;
      v96 = HIDWORD(v10);
      v98[16] = v27 - v24;
      v98[20] = v18;
      v98[21] = v22;
      v98[22] = v23;
      v98[23] = v24;
      v90[0] = fminf(*(float *)(v10 + 24) * v26, (float)(*(float *)(v10 + 28) * v26) + v19);
      if ( v28 < v90[0] )
      {
        v91[0] = fminf(v26 * *(float *)(v10 + 40), (float)(*(float *)(v10 + 44) * v26) + v19);
        hk4dGskCollideCalcToi(&v92, v89, v90, v91, a1 + 12, a1 + 32, a5);
        LODWORD(v10) = 0;
        v11 = (int)(uintptr_t)(a5);
        goto LABEL_6;
      }
    }
    if ( v28 <= *(float *)(v10 + 12) )
    {
      LODWORD(v10) = 0;
      v11 = (int)(uintptr_t)(a5);
      goto LABEL_6;
    }
    *(float *)(a1 + 44) = v28;
    v102 = *(float *)(a4 + 12);
    v32 = *(const hkTransformf::Self **)a2;
    v100 = *(float *)(*(uint32_t *)a2 + 16);
    v58 = *(const hkTransformf::Self **)a3;
    v101 = *(float *)(*(uint32_t *)a3 + 16);
    v99[8] = *(uint32_t *)(a1 + 32);
    v99[9] = *(uint32_t *)(a1 + 36);
    v99[10] = *(uint32_t *)(a1 + 40);
    v99[11] = *(uint32_t *)(a1 + 44);
    v33 = *(uint8_t *)(a1 + 50);
    v103[0] = (float)((float)(v100 + v102) + v101) * (float)((float)(v100 + v102) + v101);
    if ( (uint8_t)v33 != 0 )
    {
      v57 = a1 + 8 * v33 + 52;
      G4_VCALL<void>(v32, 44, v57, *(uint8_t *)(a1 + 48), &v92);
      v56 = *(uint8_t *)(a1 + 48);
      v34 = v56 - 1;
      v35 = *((float **)a2 + 2);
      v80 = *v35;
      v85 = v35[1];
      v59 = v35[2];
      v83 = v35[3];
      v77 = v35[4];
      v75 = v35[5];
      v73 = v35[6];
      v71 = v35[7];
      v69 = v35[8];
      v67 = v35[9];
      v65 = v35[10];
      v63 = v35[11];
      v61 = v35[12];
      v36 = v35[14];
      v37 = v35[13];
      v38 = v35[15];
      v39 = 16 * (v56 - 1);
      do
      {
        v40 = (float *)((char *)&v92 + v39);
        v41 = *(float *)((char *)&v92 + v39);
        v39 -= 16;
        v42 = v40[1];
        --v34;
        v43 = v40[2];
        *v40 = (float)((float)((float)(v80 * v41) + (float)(v77 * v42)) + (float)(v69 * v43)) + v61;
        v40[1] = (float)((float)((float)(v85 * v41) + (float)(v75 * v42)) + (float)(v67 * v43)) + v37;
        v40[2] = (float)((float)((float)(v59 * v41) + (float)(v73 * v42)) + (float)(v65 * v43)) + v36;
        v40[3] = (float)((float)((float)(v41 * v83) + (float)(v42 * v71)) + (float)(v43 * v63)) + v38;
      }
      while ( v34 >= 0 );
      v5 = a1;
      G4_VCALL<void>(v58, 44, v56 + v56 + v57, *(uint8_t *)(a1 + 49), &v92 + 4 * v56);
      v44 = *(uint8_t *)(a1 + 49) - 1;
      v45 = *(float **)(a3 + 8);
      v84 = *v45;
      v81 = v45[1];
      v78 = v45[2];
      v76 = v45[3];
      v74 = v45[4];
      v72 = v45[5];
      v70 = v45[6];
      v68 = v45[7];
      v66 = v45[8];
      v64 = v45[9];
      v62 = v45[10];
      v60 = v45[11];
      v46 = v45[14];
      v47 = v45[12];
      v48 = v45[15];
      v86 = v45[13];
      v49 = (float *)(&v92 + 4 * v56 + 4 * v44);
      do
      {
        v50 = *v49;
        --v44;
        v51 = v49[1];
        v49 -= 4;
        v52 = v49[6];
        v49[4] = (float)((float)((float)(v84 * v50) + (float)(v74 * v51)) + (float)(v66 * v52)) + v47;
        v49[5] = (float)((float)((float)(v81 * v50) + (float)(v72 * v51)) + (float)(v64 * v52)) + v86;
        v49[6] = (float)((float)((float)(v78 * v50) + (float)(v70 * v51)) + (float)(v62 * v52)) + v46;
        v49[7] = (float)((float)((float)(v50 * v76) + (float)(v51 * v68)) + (float)(v52 * v60)) + v48;
      }
      while ( v44 >= 0 );
    }
    LODWORD(v10) = hkGskManifold_verifyAndGetPoints(a1 + 48, &v92, 0, a5, *(uint32_t *)(v5 + 8));
    if ( (uint32_t)v10 != 0 && *(char *)(v5 + 23) < 0 )
    {
      v11 = (int)(uintptr_t)(a5);
      *a5 -= 48 * *(uint8_t *)(v5 + 50);
      goto LABEL_6;
    }
  }
  else
  {
    *(float *)(a1 + 44) = v28;
    if ( *(uint8_t *)(a1 + 50) != 0 )
      hkGskManifold_cleanup(a1 + 48, *(uint32_t *)(a1 + 8), a5[1]);
  }
LABEL_7:
  v12 = *(uint32_t **)(v87 + 4);
  if ( (unsigned int)(uintptr_t)(v12) < *(uint32_t *)(v87 + 12) )
  {
    *v12 = (uint32_t)(uintptr_t)("Et");
    v10 = __rdtsc();
    v12[1] = v10;
    *(uint32_t *)(v87 + 4) = (uint32_t)(uintptr_t)(v12 + 3);
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: hkpPredGskfAgent::registerAgent  (binary VA: 0x16d78a0)
// Original: hkpPredGskfAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpPredGskfAgent::registerAgent(hkpPredGskfAgent::Self *self)
{
  uint32_t v2[8];

  v2[0] = (uint32_t)(uintptr_t)(hkpPredGskfAgent::createPredGskfAgent);
  v2[1] = hkpGskBaseAgent::staticGetPenetrations;
  v2[2] = hkpGskBaseAgent::staticGetClosestPoints;
  v2[3] = (uint32_t)(uintptr_t)(((int * (*)(unsigned int, float *, float *, float *, int, int, int, int, int, int, int, unsigned int, int, int, int, int, int, int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, g4_int128_t, float, int, int, int, int, int, int, int, int, int, int, int, float, float, float, float, unsigned int, unsigned int, unsigned int, unsigned int, g4_int128_t, int32_t, unsigned int, int32_t, int32_t, unsigned int, float *, int, int, int, int, int, int, unsigned int))hkpIterativeLinearCastAgent::staticLinearCast));
  LOWORD(v2[4]) = 256;
  return hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 23, 23);
}


