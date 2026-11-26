#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpAtomSol.h"

// ----------------------------------------------------------------------------
// Function: hkpAtomSolverFunctions::computeInverseVirtualMass3D  (binary VA: 0x17a8cb0)
// Original: hkpAtomSolverFunctions::computeInverseVirtualMass3D
// ----------------------------------------------------------------------------
int hkpAtomSolverFunctions::computeInverseVirtualMass3D(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, int a7, float *a8, float *a9)
{
  float v9; // xmm0_4
  float v10; // xmm4_4
  float v11; // xmm6_4
  float v12; // xmm3_4
  float v13; // xmm1_4
  float v14; // xmm7_4
  float v15; // xmm4_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm7_4
  float v22; // xmm2_4
  float v23; // xmm6_4
  float v24; // xmm0_4
  float v25; // xmm3_4
  float v26; // xmm5_4
  float v27; // xmm4_4
  float v28; // xmm6_4
  float v29; // xmm4_4
  float v30; // xmm3_4
  float v31; // xmm1_4
  float v32; // xmm6_4
  float v33; // xmm4_4
  float v34; // xmm2_4
  float v35; // xmm3_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm5_4
  float v39; // xmm6_4
  float v40; // xmm4_4
  float v41; // xmm7_4
  __m128i v42;
  float v43; // xmm1_4
  float v44; // xmm3_4
  int result;
  float v46; // xmm7_4
  float v47; // xmm2_4
  float v48; // xmm5_4
  float v49; // xmm4_4
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
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef unsigned int _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef float _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_v90[11];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v50)) > _g4_s0 ? (8u + sizeof(_g4_t_v50)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v51)) > _g4_s1 ? (12u + sizeof(_g4_t_v51)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v52)) > _g4_s2 ? (16u + sizeof(_g4_t_v52)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v53)) > _g4_s3 ? (20u + sizeof(_g4_t_v53)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v54)) > _g4_s4 ? (24u + sizeof(_g4_t_v54)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v55)) > _g4_s5 ? (24u + sizeof(_g4_t_v55)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v56)) > _g4_s6 ? (28u + sizeof(_g4_t_v56)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v57)) > _g4_s7 ? (32u + sizeof(_g4_t_v57)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v58)) > _g4_s8 ? (36u + sizeof(_g4_t_v58)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v59)) > _g4_s9 ? (40u + sizeof(_g4_t_v59)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v60)) > _g4_s10 ? (40u + sizeof(_g4_t_v60)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v61)) > _g4_s11 ? (44u + sizeof(_g4_t_v61)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v62)) > _g4_s12 ? (44u + sizeof(_g4_t_v62)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v63)) > _g4_s13 ? (44u + sizeof(_g4_t_v63)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v64)) > _g4_s14 ? (48u + sizeof(_g4_t_v64)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v65)) > _g4_s15 ? (48u + sizeof(_g4_t_v65)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v66)) > _g4_s16 ? (48u + sizeof(_g4_t_v66)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v67)) > _g4_s17 ? (52u + sizeof(_g4_t_v67)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v68)) > _g4_s18 ? (56u + sizeof(_g4_t_v68)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v69)) > _g4_s19 ? (56u + sizeof(_g4_t_v69)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v70)) > _g4_s20 ? (60u + sizeof(_g4_t_v70)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v71)) > _g4_s21 ? (60u + sizeof(_g4_t_v71)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v72)) > _g4_s22 ? (60u + sizeof(_g4_t_v72)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v73)) > _g4_s23 ? (60u + sizeof(_g4_t_v73)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v74)) > _g4_s24 ? (64u + sizeof(_g4_t_v74)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v75)) > _g4_s25 ? (64u + sizeof(_g4_t_v75)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v76)) > _g4_s26 ? (64u + sizeof(_g4_t_v76)) : _g4_s26,
    _g4_s28 = (68u + sizeof(_g4_t_v77)) > _g4_s27 ? (68u + sizeof(_g4_t_v77)) : _g4_s27,
    _g4_s29 = (68u + sizeof(_g4_t_v78)) > _g4_s28 ? (68u + sizeof(_g4_t_v78)) : _g4_s28,
    _g4_s30 = (68u + sizeof(_g4_t_v79)) > _g4_s29 ? (68u + sizeof(_g4_t_v79)) : _g4_s29,
    _g4_s31 = (68u + sizeof(_g4_t_v80)) > _g4_s30 ? (68u + sizeof(_g4_t_v80)) : _g4_s30,
    _g4_s32 = (68u + sizeof(_g4_t_v81)) > _g4_s31 ? (68u + sizeof(_g4_t_v81)) : _g4_s31,
    _g4_s33 = (72u + sizeof(_g4_t_v82)) > _g4_s32 ? (72u + sizeof(_g4_t_v82)) : _g4_s32,
    _g4_s34 = (72u + sizeof(_g4_t_v83)) > _g4_s33 ? (72u + sizeof(_g4_t_v83)) : _g4_s33,
    _g4_s35 = (72u + sizeof(_g4_t_v84)) > _g4_s34 ? (72u + sizeof(_g4_t_v84)) : _g4_s34,
    _g4_s36 = (72u + sizeof(_g4_t_v85)) > _g4_s35 ? (72u + sizeof(_g4_t_v85)) : _g4_s35,
    _g4_s37 = (76u + sizeof(_g4_t_v86)) > _g4_s36 ? (76u + sizeof(_g4_t_v86)) : _g4_s36,
    _g4_s38 = (76u + sizeof(_g4_t_v87)) > _g4_s37 ? (76u + sizeof(_g4_t_v87)) : _g4_s37,
    _g4_s39 = (76u + sizeof(_g4_t_v88)) > _g4_s38 ? (76u + sizeof(_g4_t_v88)) : _g4_s38,
    _g4_s40 = (76u + sizeof(_g4_t_v89)) > _g4_s39 ? (76u + sizeof(_g4_t_v89)) : _g4_s39,
    _g4_s41 = (80u + sizeof(_g4_t_v90)) > _g4_s40 ? (80u + sizeof(_g4_t_v90)) : _g4_s40
  };
  alignas(16) uint8_t _g4_sf[_g4_s41];
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 8u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 36u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 40u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 40u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 44u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 44u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 48u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 48u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 52u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 56u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 56u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 60u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 60u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 60u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 60u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 64u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 64u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 64u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 68u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 68u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 68u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 68u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 68u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 72u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 72u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 72u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 72u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 76u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 76u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 76u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 76u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 80u);

  v70 = a1[3];
  v9 = -*a2;
  v82 = a2[3];
  v10 = (float)-a1[2] - a1[2];
  v61 = (float)-*a1 * (float)((float)-*a1 - *a1);
  v11 = -*a1;
  v12 = (float)-a1[2] * v10;
  v77 = v11 * v10;
  v13 = (float)-a1[1] * (float)((float)-a1[1] - a1[1]);
  v74 = (float)-a1[1] * v10;
  v14 = (float)(v11 - *a1) * v70;
  v15 = v10 * v70;
  v71 = (float)((float)-a1[1] - a1[1]) * v70;
  v68 = v77 - v71;
  v59 = v11 * (float)((float)-a1[1] - a1[1]);
  v51 = v59 + v15;
  v67 = 1.0 - (float)(v13 + v12);
  v64 = v74 + v14;
  v16 = 1.0 - (float)(v12 + v61);
  v17 = v59 - v15;
  v18 = 1.0 - (float)(v13 + v61);
  v62 = v16;
  v60 = v17;
  v58 = v18;
  v75 = v74 - v14;
  v50 = v77 + v71;
  v19 = (float)(v9 - *a2) * v82;
  v78 = v9 * (float)(v9 - *a2);
  v20 = v9 * (float)((float)-a2[1] - a2[1]);
  v21 = v9 * (float)((float)-a2[2] - a2[2]);
  v22 = (float)((float)-a2[1] - a2[1]) * v82;
  v72 = (float)-a2[1] * (float)((float)-a2[2] - a2[2]);
  v23 = (float)-a2[2] * (float)((float)-a2[2] - a2[2]);
  v86 = (float)((float)-a2[2] - a2[2]) * v82;
  v83 = v86 + v20;
  v57 = 1.0 - (float)((float)((float)-a2[1] * (float)((float)-a2[1] - a2[1])) + v23);
  v56 = v72 + v19;
  v54 = 1.0 - (float)(v23 + v78);
  v24 = *a3;
  v87 = v20 - v86;
  v25 = a3[1];
  v52 = 0.0 * *a3;
  v79 = 1.0 - (float)((float)((float)-a2[1] * (float)((float)-a2[1] - a2[1])) + v78);
  v26 = v72 - v19;
  v27 = a3[2];
  v28 = v50 * *a3;
  *a8 = (float)(v60 * v27) - (float)(v50 * v25);
  a8[1] = (float)(v62 * v27) - (float)(v75 * v25);
  a8[2] = (float)(v64 * v27) - (float)(v58 * v25);
  a8[4] = v28 - (float)(v67 * v27);
  a8[3] = (float)(0.0 * v27) - (float)(0.0 * v25);
  a8[5] = (float)(v75 * v24) - (float)(v51 * v27);
  a8[6] = (float)(v58 * v24) - (float)(v27 * v68);
  a8[7] = v52 - (float)(0.0 * v27);
  a8[8] = (float)(v67 * v25) - (float)(v60 * v24);
  a8[11] = (float)(0.0 * v25) - v52;
  a8[9] = (float)(v51 * v25) - (float)(v62 * v24);
  a8[10] = (float)(v25 * v68) - (float)(v24 * v64);
  v29 = a4[1];
  v30 = a4[2];
  v31 = *a4;
  v32 = 0.0 * *a4;
  *a9 = (float)(v87 * v30) - (float)((float)(v21 + v22) * v29);
  a9[1] = (float)(v54 * v30) - (float)(v26 * v29);
  a9[2] = (float)(v56 * v30) - (float)(v79 * v29);
  a9[3] = (float)(0.0 * v30) - (float)(0.0 * v29);
  a9[4] = (float)((float)(v21 + v22) * v31) - (float)(v57 * v30);
  a9[5] = (float)(v26 * v31) - (float)(v83 * v30);
  a9[6] = (float)(v79 * v31) - (float)(v30 * (float)(v21 - v22));
  a9[7] = v32 - (float)(0.0 * v30);
  a9[8] = (float)(v57 * v29) - (float)(v87 * v31);
  a9[11] = (float)(0.0 * v29) - v32;
  a9[9] = (float)(v83 * v29) - (float)(v54 * v31);
  a9[10] = (float)(v29 * (float)(v21 - v22)) - (float)(v31 * v56);
  v80 = a8[9];
  v76 = a8[8];
  v84 = a8[10];
  v69 = a8[1];
  v65 = *a8 * *a5;
  v33 = a5[1];
  v34 = a8[4];
  v73 = a8[2];
  v63 = v69 * v33;
  v35 = a5[2];
  v36 = a8[5];
  v37 = a8[6];
  v38 = *a5 * v76;
  v88 = v34 * *a5;
  v39 = v36 * v33;
  v40 = v33 * v80;
  v53 = (float)((float)(*a8 * v65) + (float)(v69 * v63)) + (float)(v73 * (float)(v73 * v35));
  v55 = (float)((float)(v88 * v34) + (float)(v39 * v36)) + (float)((float)(v37 * v35) * v37);
  v66 = (float)((float)(v34 * v65) + (float)(v36 * v63)) + (float)(v37 * (float)(v73 * v35));
  v41 = (float)((float)(v80 * v40) + (float)(v76 * v38)) + (float)((float)(v35 * v84) * v84);
  *(float *)&v81 = (float)((float)(v76 * v88) + (float)(v39 * v80)) + (float)((float)(v37 * v35) * v84);
  v89 = v41;
  v85 = (float)((float)(v38 * *a8) + (float)(v40 * v69)) + (float)(v73 * (float)(v35 * v84));
  hkSymmetricMatrixUtilImpl_float_id_22ffc7::computeInverseBasisTransform(a9, a6, (int)(uintptr_t)(v90));
g4_m128_raw(v42) = v81;
  *(float *)g4_m128_ptr<int32_t>(v42) = *(float *)&v81 + v90[5];
  v43 = a6[3] + a5[3];
  v44 = v90[3] + 0.0;
  result = _mm_cvtsi128_si32(v42);
  v46 = (float)(v55 + v90[1]) + v43;
  v47 = v66 + v90[4];
  v48 = v85 + v90[6];
  *(float *)g4_m128_ptr<int32_t>(v42) = v90[7] + 0.0;
  v49 = (float)(v89 + v90[2]) + v43;
  *(float *)a7 = (float)(v53 + v90[0]) + v43;
  *(float *)(a7 + 4) = v46;
  *(float *)(a7 + 16) = v47;
  *(uint32_t *)(a7 + 20) = result;
  *(float *)(a7 + 24) = v48;
  *(uint32_t *)(a7 + 28) =g4_m128_lane<int32_t>(v42, 0);
  *(float *)(a7 + 8) = v49;
  *(float *)(a7 + 12) = v44 + v43;
  return result;
}


