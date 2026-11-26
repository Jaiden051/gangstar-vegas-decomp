#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpWheelDr.h"

// ----------------------------------------------------------------------------
// Function: hkpWheelDrawer::drawConstraint  (binary VA: 0x1af1ed0)
// Original: hkpWheelDrawer::drawConstraint
// ----------------------------------------------------------------------------
int hkpWheelDrawer::drawConstraint(hkpWheelDrawer::Self *self, const hkpWheelConstraintData::Self *a2, const hkTransformf::Self *a3, const hkTransformf::Self *a4, hkDebugDisplayHandler::Self *a5, int a6, int a7)
{
  float *v7;
  float *v8;
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm4_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm6_4
  float v16; // xmm3_4
  float v17; // xmm5_4
  float v18; // xmm4_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm6_4
  float v23; // xmm0_4
  float v24; // xmm4_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm7_4
  float v28; // xmm0_4
  float v29; // xmm5_4
  float v30; // xmm2_4
  float v31; // xmm4_4
  float v32; // xmm1_4
  float v33; // xmm2_4
  float v34; // xmm3_4
  float v35; // xmm1_4
  int v36;
  float v37; // xmm0_4
  float v38; // xmm5_4
  float v39; // xmm4_4
  float v40; // xmm3_4
  float v41; // xmm7_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  float v44; // xmm6_4
  float v45; // xmm0_4
  float v46; // xmm5_4
  float v47; // xmm0_4
  float v48; // xmm6_4
  float v49; // xmm3_4
  int v50;
  float v51; // xmm7_4
  int v52;
  float v53; // xmm3_4
  float v54; // xmm2_4
  float v55; // xmm4_4
  float v56; // xmm5_4
  float v57; // xmm0_4
  float v58; // xmm5_4
  int v59;
  float v60; // xmm4_4
  float v61; // xmm6_4
  float v62; // xmm3_4
  float v63; // xmm2_4
  float v64; // xmm1_4
  float v65; // xmm7_4
  float v66; // xmm0_4
  float v67; // xmm5_4
  float v68; // xmm0_4
  float v69; // xmm0_4
  float v70; // xmm5_4
  float v71; // xmm4_4
  float v72; // xmm7_4
  float v73; // xmm3_4
  float v74; // xmm2_4
  float v75; // xmm1_4
  float v76; // xmm6_4
  float v77; // xmm0_4
  float v78; // xmm5_4
  typedef const hkTransformf::Self *_g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float *_g4_t_v94;
  typedef float _g4_t_v95;
  typedef float *_g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef hkTransformf::Self *_g4_t_v99;
  typedef float *_g4_t_v100;
  typedef float _g4_t_v101;
  typedef hkDebugDisplayHandler::Self *_g4_t_v102;
  typedef uint8_t _g4_t_v103[4];
  typedef float _g4_t_v104;
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108;
  typedef float _g4_t_v109;
  typedef float _g4_t_v110;
  typedef float _g4_t_v111;
  typedef hkpWheelDrawer::Self **_g4_t_v112;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v80)) > _g4_s0 ? (8u + sizeof(_g4_t_v80)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v81)) > _g4_s1 ? (32u + sizeof(_g4_t_v81)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v82)) > _g4_s2 ? (36u + sizeof(_g4_t_v82)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v83)) > _g4_s3 ? (52u + sizeof(_g4_t_v83)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v84)) > _g4_s4 ? (56u + sizeof(_g4_t_v84)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v85)) > _g4_s5 ? (60u + sizeof(_g4_t_v85)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v86)) > _g4_s6 ? (64u + sizeof(_g4_t_v86)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v87)) > _g4_s7 ? (68u + sizeof(_g4_t_v87)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v88)) > _g4_s8 ? (72u + sizeof(_g4_t_v88)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v89)) > _g4_s9 ? (84u + sizeof(_g4_t_v89)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v90)) > _g4_s10 ? (88u + sizeof(_g4_t_v90)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v91)) > _g4_s11 ? (92u + sizeof(_g4_t_v91)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v92)) > _g4_s12 ? (96u + sizeof(_g4_t_v92)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v93)) > _g4_s13 ? (96u + sizeof(_g4_t_v93)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v94)) > _g4_s14 ? (100u + sizeof(_g4_t_v94)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v95)) > _g4_s15 ? (100u + sizeof(_g4_t_v95)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v96)) > _g4_s16 ? (104u + sizeof(_g4_t_v96)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v97)) > _g4_s17 ? (108u + sizeof(_g4_t_v97)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v98)) > _g4_s18 ? (112u + sizeof(_g4_t_v98)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v99)) > _g4_s19 ? (116u + sizeof(_g4_t_v99)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v100)) > _g4_s20 ? (116u + sizeof(_g4_t_v100)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v101)) > _g4_s21 ? (116u + sizeof(_g4_t_v101)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v102)) > _g4_s22 ? (120u + sizeof(_g4_t_v102)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v103)) > _g4_s23 ? (124u + sizeof(_g4_t_v103)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v104)) > _g4_s24 ? (128u + sizeof(_g4_t_v104)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v105)) > _g4_s25 ? (132u + sizeof(_g4_t_v105)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v106)) > _g4_s26 ? (136u + sizeof(_g4_t_v106)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v107)) > _g4_s27 ? (140u + sizeof(_g4_t_v107)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v108)) > _g4_s28 ? (144u + sizeof(_g4_t_v108)) : _g4_s28,
    _g4_s30 = (148u + sizeof(_g4_t_v109)) > _g4_s29 ? (148u + sizeof(_g4_t_v109)) : _g4_s29,
    _g4_s31 = (152u + sizeof(_g4_t_v110)) > _g4_s30 ? (152u + sizeof(_g4_t_v110)) : _g4_s30,
    _g4_s32 = (156u + sizeof(_g4_t_v111)) > _g4_s31 ? (156u + sizeof(_g4_t_v111)) : _g4_s31,
    _g4_s33 = (168u + sizeof(_g4_t_v112)) > _g4_s32 ? (168u + sizeof(_g4_t_v112)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 8u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 32u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 36u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 52u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 56u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 60u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 64u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 68u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 72u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 84u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 88u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 92u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 96u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 96u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 100u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 100u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 104u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 108u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 112u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 116u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 116u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 116u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 120u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 124u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 128u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 132u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 136u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 140u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 144u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 148u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 152u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 156u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 168u);

  v112 = &self;
  v7 = (float *)self;
  v8 = (float *)a2;
  v94 = (float *)a3;
  v99 = (hkTransformf::Self *)(a4);
  v97 = a7;
  v98 = a6;
  v102 = a5;
  hkpPrimitiveDrawer::setDisplayHandler((hkpWheelDrawer::Self *)((char *)self + 192), a5);
  v80 = v99;
  v96 = (float *)v99;
  v100 = v94;
  hkpConstraintDrawer::updateCommonParameters((hkpConstraintDrawer::Self *)v7, (const hkTransformf::Self *)v94, v80);
  v9 = v8[36];
  v10 = v8[37];
  v11 = v8[38];
  v12 = (float)((float)(v9 * v96[1]) + (float)(v96[5] * v10)) + (float)(v96[9] * v11);
  v13 = (float)((float)(v96[2] * v9) + (float)(v96[6] * v10)) + (float)(v96[10] * v11);
  v14 = (float)(v96[3] * v9) + (float)(v96[7] * v10);
  v15 = v96[11] * v11;
  v7[20] = (float)((float)((float)(v9 * *v96) + (float)(v10 * v96[4])) + (float)(v11 * v96[8])) + v96[12];
  v7[21] = v12 + v96[13];
  v7[22] = v13 + v96[14];
  v7[23] = (float)(v14 + v15) + v96[15];
  v16 = v8[20];
  v17 = v8[21];
  v18 = v8[22];
  v19 = (float)((float)(v16 * v100[1]) + (float)(v100[5] * v17)) + (float)(v100[9] * v18);
  v20 = (float)((float)(v100[2] * v16) + (float)(v100[6] * v17)) + (float)(v100[10] * v18);
  v21 = (float)(v100[3] * v16) + (float)(v100[7] * v17);
  v22 = v94[11] * v18;
  v7[16] = (float)((float)((float)(v16 * *v94) + (float)(v17 * v94[4])) + (float)(v18 * v94[8])) + v94[12];
  v7[17] = v19 + v94[13];
  v7[18] = v20 + v94[14];
  v7[19] = (float)(v21 + v22) + v94[15];
  hkpConstraintDrawer::drawBodyFrames((hkpConstraintDrawer::Self *)v7, v98, v97);
  hkpConstraintDrawer::drawPivots((hkpConstraintDrawer::Self *)v7, v98, v97);
  (*(void (**)(uint8_t *, hkDebugDisplayHandler::Self *, float *, float *, int, int, int))(*(uint32_t *)v102 + 72))(
    v103,
    v102,
    v7 + 16,
    v7 + 20,
    -65536,
    v98,
    v97);
  v23 = *v7 * v7[7];
  v24 = v8[24];
  v25 = v8[25];
  v88 = 0.1f * v23;
  v26 = v8[26];
  v27 = v23 * 0.5;
  v92 = (float)((float)(v7[40] * v25) + (float)(v7[36] * v24)) + (float)(v7[44] * v26);
  v91 = (float)((float)(v7[41] * v25) + (float)(v7[37] * v24)) + (float)(v7[45] * v26);
  v28 = (float)(v7[42] * v25) + (float)(v7[38] * v24);
  v29 = v7[46] * v26;
  v30 = (float)(v25 * v7[43]) + (float)(v24 * v7[39]);
  v31 = v7[20];
  v32 = (float)(v26 * v7[47]) + v30;
  v33 = v7[22];
  v90 = v29 + v28;
  v34 = v7[21];
  v89 = v32;
  v35 = v7[23];
  v104 = (float)((float)-v27 * v92) + v31;
  v105 = (float)(v91 * (float)-v27) + v34;
  v106 = (float)((float)(v29 + v28) * (float)-v27) + v33;
  v101 = -v27;
  v36 = *(uint32_t *)v102;
  v95 = v27;
  v107 = (float)(v89 * (float)-v27) + v35;
  v108 = (float)(v27 * v92) + v31;
  v109 = (float)(v91 * v27) + v34;
  v110 = (float)((float)(v29 + v28) * v27) + v33;
  v111 = (float)(v89 * v27) + v35;
  (*(void (**)(uint8_t *, hkDebugDisplayHandler::Self *, float *, float *, int, int, int))(v36 + 72))(
    v103,
    v102,
    &v104,
    &v108,
    -16744448,
    v98,
    v97);
  v37 = v8[28];
  v38 = v8[29];
  v39 = v8[30];
  v85 = v8[41];
  v40 = v8[42];
  v41 = (float)((float)(v7[36] * v37) + (float)(v7[40] * v38)) + (float)(v7[44] * v39);
  v42 = (float)((float)(v7[37] * v37) + (float)(v7[41] * v38)) + (float)(v7[45] * v39);
  v43 = v7[38] * v37;
  v44 = v7[42] * v38;
  v45 = (float)(v37 * v7[39]) + (float)(v38 * v7[43]);
  v46 = (float)(v90 * v40) + v7[22];
  v47 = v45 + (float)(v39 * v7[47]);
  v86 = (float)(v44 + v43) + (float)(v7[46] * v39);
  v87 = v88 * v41;
  v84 = (float)(v92 * v40) + v7[20];
  v104 = v84 + (float)(v88 * v41);
  v48 = (float)(v91 * v40) + v7[21];
  v49 = (float)(v40 * v89) + v7[23];
  v83 = v88 * v42;
  v105 = (float)(v88 * v42) + v48;
  v50 = *(uint32_t *)v102;
  v106 = (float)(v86 * v88) + v46;
  v107 = (float)(v88 * v47) + v49;
  v51 = v41 * (float)-v88;
  v81 = v42 * (float)-v88;
  v108 = v84 + v51;
  v109 = v48 + v81;
  v82 = v86 * (float)-v88;
  v111 = v49 + (float)(v47 * (float)-v88);
  v110 = v46 + v82;
  (*(void (**)(uint8_t *, hkDebugDisplayHandler::Self *, float *, float *, int, int, int))(v50 + 72))(
    v103,
    v102,
    &v104,
    &v108,
    -1,
    v98,
    v97);
  v52 = *(uint32_t *)v102;
  v53 = (float)(v90 * v85) + v7[22];
  v54 = (float)(v91 * v85) + v7[21];
  v55 = v7[23] + (float)(v85 * v89);
  v56 = (float)(v7[20] + (float)(v92 * v85)) + v51;
  v104 = (float)(v7[20] + (float)(v92 * v85)) + v87;
  v105 = v83 + v54;
  v108 = v56;
  v107 = (float)(v88 * v47) + v55;
  v110 = v82 + v53;
  v111 = (float)(v47 * (float)-v88) + v55;
  v106 = (float)(v86 * v88) + v53;
  v109 = v54 + v81;
  (*(void (**)(uint8_t *, hkDebugDisplayHandler::Self *, float *, float *, int, int, int))(v52 + 72))(
    v103,
    v102,
    &v104,
    &v108,
    -1,
    v98,
    v97);
  v57 = v8[76];
  v58 = v8[77];
  v59 = *(uint32_t *)v102;
  v60 = v8[78];
  v61 = v7[21];
  v62 = (float)((float)(v7[36] * v57) + (float)(v7[40] * v58)) + (float)(v7[44] * v60);
  v63 = (float)((float)(v7[37] * v57) + (float)(v7[41] * v58)) + (float)(v7[45] * v60);
  v64 = (float)((float)(v7[38] * v57) + (float)(v7[42] * v58)) + (float)(v7[46] * v60);
  v65 = v7[20];
  v66 = (float)((float)(v57 * v7[39]) + (float)(v58 * v7[43])) + (float)(v60 * v7[47]);
  v104 = (float)(v101 * v62) + v65;
  v67 = v7[22];
  v105 = (float)(v101 * v63) + v61;
  v106 = (float)(v101 * v64) + v67;
  v107 = (float)(v101 * v66) + v7[23];
  v68 = (float)(v66 * v95) + v7[23];
  v108 = (float)(v62 * v95) + v65;
  v109 = (float)(v63 * v95) + v61;
  v110 = (float)(v64 * v95) + v67;
  v111 = v68;
  (*(void (**)(uint8_t *, hkDebugDisplayHandler::Self *, float *, float *, int, int, int))(v59 + 72))(
    v103,
    v102,
    &v104,
    &v108,
    -256,
    v98,
    v97);
  v69 = v8[60];
  v70 = v8[61];
  v71 = v8[62];
  v72 = v7[16];
  v73 = (float)((float)(v7[24] * v69) + (float)(v7[28] * v70)) + (float)(v7[32] * v71);
  v74 = (float)((float)(v7[25] * v69) + (float)(v7[29] * v70)) + (float)(v7[33] * v71);
  v75 = (float)((float)(v7[26] * v69) + (float)(v7[30] * v70)) + (float)(v7[34] * v71);
  v76 = v7[17];
  v77 = (float)((float)(v69 * v7[27]) + (float)(v70 * v7[31])) + (float)(v71 * v7[35]);
  v104 = (float)(v101 * v73) + v72;
  v78 = v7[18];
  v105 = (float)(v101 * v74) + v76;
  v106 = (float)(v101 * v75) + v78;
  v93 = v7[19];
  v107 = (float)(v101 * v77) + v93;
  v108 = (float)(v73 * v95) + v72;
  v109 = (float)(v74 * v95) + v76;
  v110 = (float)(v75 * v95) + v78;
  v111 = (float)(v77 * v95) + v93;
  return (*(int (**)(uint8_t *, hkDebugDisplayHandler::Self *, float *, float *, int, int, int))(*(uint32_t *)v102 + 72))(
           v103,
           v102,
           &v104,
           &v108,
           -16776961,
           v98,
           v97);
}


