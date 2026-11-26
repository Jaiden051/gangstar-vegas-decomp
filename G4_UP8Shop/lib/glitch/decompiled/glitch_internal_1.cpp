#include "Core/Utils/DecompTypes.h"
#include "glitch_internal_1.h"

// ----------------------------------------------------------------------------
// Function: sub_D622F0  (binary VA: 0xd622f0)
// Original: sub_D622F0
// ----------------------------------------------------------------------------
char * sub_D622F0(int *a1, int a2)
{
  int *v2;
  const glitch::collada::SAnimationClipID::Self *v3;
  const glitch::collada::SAnimationClipID::Self *v4;
  const glitch::collada::SAnimationClipID::Self *v5;
  glitch::collada::SAnimationClipID::Self *v6;
  glitch::collada::SAnimationClipID::Self *v8;
  int v9;
  int v10;
  int *v11;

  v2 = a1;
  v3 = (const glitch::collada::SAnimationClipID::Self *)a1[1];
  v4 = (const glitch::collada::SAnimationClipID::Self *)*a1;
  v10 = 0;
  v9 = ((int)(uintptr_t)(v3) - *a1) >> 3;
  v8 = nullptr;
  if ( a2 != 0 )
  {
    v10 = 8 * a2;
    v8 = (glitch::collada::SAnimationClipID::Self *)sub_4EBDC0(8 * a2);
  }
  if ( v4 != v3 )
  {
    v11 = v2;
    v5 = v3;
    v6 = v8;
    do
    {
      if ( v6 != nullptr )
        glitch::collada::SAnimationClipID::Construct(v6, v4);
      v4 = (const glitch::collada::SAnimationClipID::Self *)((char *)v4 + 8);
      v6 = (glitch::collada::SAnimationClipID::Self *)((char *)v6 + 8);
    }
    while ( v5 != v4 );
    v2 = v11;
  }
  if ( *v2 != 0 )
    gll_operator_delete_arr(*v2);
  *v2 = (int)(uintptr_t)(v8);
  v2[1] = (int)(uintptr_t)(v8) + 8 * v9;
  v2[2] = (int)(uintptr_t)(v8) + v10;
  return (char *)v8 + v10;
}

// ----------------------------------------------------------------------------
// Function: sub_D623B0  (binary VA: 0xd623b0)
// Original: sub_D623B0
// ----------------------------------------------------------------------------
char * sub_D623B0(int *a1, const glitch::collada::SAnimationClipID::Self *a2, glitch::collada::SAnimationClipID::Self *a3)
{
  const glitch::collada::SAnimationClipID::Self *v4;
  int *v5;
  glitch::collada::SAnimationClipID::Self *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  char *result;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  int v16;
  glitch::collada::SAnimationClipID::Self *v17;
  glitch::collada::SAnimationClipID::Self *v18;
  const glitch::collada::SAnimationClipID::Self *v19;
  glitch::collada::SAnimationClipID::Self *v20;
  glitch::collada::SAnimationClipID::Self *v21;
  const glitch::collada::SAnimationClipID::Self *v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef const glitch::collada::SAnimationClipID::Self *_g4_t_v26;
  typedef int *_g4_t_v27;
  typedef glitch::collada::SAnimationClipID::Self *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef char *_g4_t_v32;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v23)) > _g4_s0 ? (12u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v24)) > _g4_s1 ? (12u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v25)) > _g4_s2 ? (12u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v26)) > _g4_s3 ? (16u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v27)) > _g4_s4 ? (16u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v28)) > _g4_s5 ? (20u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v29)) > _g4_s6 ? (24u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v30)) > _g4_s7 ? (28u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v31)) > _g4_s8 ? (40u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v32)) > _g4_s9 ? (44u + sizeof(_g4_t_v32)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);

  v4 = a2;
  v5 = a1;
  v6 = (glitch::collada::SAnimationClipID::Self *)a1[1];
  if ( v6 != (glitch::collada::SAnimationClipID::Self *)a1[2] )
  {
    v7 = 0;
    if ( v6 != nullptr )
    {
      glitch::collada::SAnimationClipID::Construct(v6, (glitch::collada::SAnimationClipID::Self *)((char *)v6 - 8));
      v7 = v5[1];
    }
    v5[1] = v7 + 8;
    glitch::collada::SAnimationClipID::Construct((glitch::collada::SAnimationClipID::Self *)&v31, a3);
    v8 = v5[1];
    v9 = (v8 - 16 - (int)(uintptr_t)(a2)) >> 3;
    if ( v9 > 0 )
    {
      v10 = v8 - 8 * v9;
      do
      {
        *(uint32_t *)(v10 + 8 * v9 - 16) = *(uint32_t *)(v10 + 8 * v9 - 24);
        *(uint32_t *)(v10 + 8 * v9 - 12) = *(uint32_t *)(v10 + 8 * v9 - 20);
        --v9;
      }
      while ( v9 != 0 );
    }
    *(uint32_t *)a2 = v31;
    result = v32;
    *((uint32_t *)a2 + 1) = (uint32_t)(uintptr_t)(v32);
    return result;
  }
  v12 = *a1;
  v13 = ((int)(uintptr_t)(v6) - v12) >> 3;
  if ( v13 != 0 )
  {
    v14 = 2 * v13;
    if ( v13 > 2 * v13 || v14 > 0x1FFFFFFF )
    {
      v29 = -8;
      v15 = ((int)(uintptr_t)(a2) - v12) >> 3;
    }
    else
    {
      v29 = 16 * v13;
      v15 = ((int)(uintptr_t)(a2) - v12) >> 3;
      if ( v14 == 0 )
      {
        v16 = 8;
        v28 = nullptr;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v29 = 8;
    v15 = ((int)(uintptr_t)(a2) - v12) >> 3;
  }
  v23 = v15;
  v28 = (glitch::collada::SAnimationClipID::Self *)sub_4EBDC0(v29);
  v15 = v23;
  v16 = (int)(uintptr_t)(v28) + 8;
LABEL_12:
  v17 = (glitch::collada::SAnimationClipID::Self *)((char *)v28 + 8 * v15);
  if ( v17 != nullptr )
  {
    v24 = v16;
    glitch::collada::SAnimationClipID::Construct(v17, a3);
    v16 = v24;
  }
  if ( a2 != (const glitch::collada::SAnimationClipID::Self *)*v5 )
  {
    v26 = v4;
    v30 = v5;
    v18 = v28;
    v19 = (const glitch::collada::SAnimationClipID::Self *)*v5;
    do
    {
      if ( v18 != nullptr )
        glitch::collada::SAnimationClipID::Construct(v18, v19);
      v19 = (const glitch::collada::SAnimationClipID::Self *)((char *)v19 + 8);
      v18 = (glitch::collada::SAnimationClipID::Self *)((char *)v18 + 8);
    }
    while ( a2 != v19 );
    v20 = v18;
    v5 = v30;
    v4 = v26;
    v16 = (int)(uintptr_t)(v20) + 8;
  }
  if ( a2 != (const glitch::collada::SAnimationClipID::Self *)v5[1] )
  {
    v27 = v5;
    v21 = (glitch::collada::SAnimationClipID::Self *)v16;
    v22 = (const glitch::collada::SAnimationClipID::Self *)v5[1];
    do
    {
      if ( v21 != nullptr )
        glitch::collada::SAnimationClipID::Construct(v21, v4);
      v4 = (const glitch::collada::SAnimationClipID::Self *)((char *)v4 + 8);
      v21 = (glitch::collada::SAnimationClipID::Self *)((char *)v21 + 8);
    }
    while ( v22 != v4 );
    v16 = (int)(uintptr_t)(v21);
    v5 = v27;
  }
  if ( *v5 != 0 )
  {
    v25 = v16;
    gll_operator_delete_arr(*v5);
    v16 = v25;
  }
  v5[1] = v16;
  *v5 = (int)(uintptr_t)(v28);
  v5[2] = (int)(uintptr_t)(v28) + v29;
  return (char *)v28 + v29;
}

// ----------------------------------------------------------------------------
// Function: sub_D67BC0  (binary VA: 0xd67bc0)
// Original: sub_D67BC0
// ----------------------------------------------------------------------------
int sub_D67BC0(int a1, int a2, int a3, glitch::collada::CBillboardSceneNode *a4, g4_int128_t a5, g4_int128_t a6, g4_int128_t a7, g4_int128_t a8, g4_int128_t a9, g4_int128_t a10, g4_int128_t a11, g4_int128_t a12, g4_int128_t a13, g4_int128_t a14, g4_int128_t a15, g4_int128_t a16, g4_int128_t a17, g4_int128_t a18, g4_int128_t a19, g4_int128_t a20)
{
  uint8_t STACK[828] = {0};
  int v20;
  int *v21;
  int v22;
  float *v23;
  glitch::collada::CBillboardSceneNode *v24;
  int *v25;
  bool v26;
  int *v27;
  int v28;
  float *v29;
  glitch::collada::CBillboardSceneNode *v30;
  int v31;
  float v32; // xmm3_4
  float v33; // xmm4_4
  float v34; // xmm5_4
  float v35; // xmm6_4
  float v36; // xmm7_4
  float v37; // xmm0_4
  float v38; // xmm1_4
  int v39;
  int v40;
  int v41;
  float *v42;
  float v43; // xmm6_4
  float v44; // xmm0_4
  float v45; // xmm3_4
  float v46; // xmm5_4
  float v47; // xmm2_4
  float v48; // xmm1_4
  float v49; // xmm0_4
  float v50; // xmm5_4
  float v51; // xmm6_4
  float v52; // xmm5_4
  float *v53;
  float *v54;
  float v55; // xmm5_4
  float v56; // xmm6_4
  float v57; // xmm3_4
  float v58; // xmm4_4
  float v59; // xmm6_4
  float v60; // xmm5_4
  float v61; // xmm7_4
  float v62; // xmm5_4
  float v63; // xmm5_4
  float v64; // xmm7_4
  float v65; // xmm5_4
  float v66; // xmm5_4
  float v67; // xmm7_4
  float v68; // xmm5_4
  int v69;
  int v70;
  int v71;
  int v72;
  float v73; // xmm4_4
  float v74; // xmm5_4
  float v75; // xmm4_4
  float v76; // xmm4_4
  float v77; // xmm5_4
  float v78; // xmm6_4
  float v79; // xmm7_4
  float v80; // xmm7_4
  float v81; // xmm7_4
  char v82;
  glitch::collada::CBillboardSceneNode *v83;
  unsigned int v84;
  float *v86;
  float *v87;
  const glitch::core::detail::CMatrix4Base<float> *RelativeTransformation;
  float v89; // xmm2_4
  float v90; // xmm7_4
  float v91; // xmm0_4
  float v92; // xmm1_4
  float v93; // xmm0_4
  float v94; // xmm5_4
  float v95; // xmm2_4
  float v96; // xmm0_4
  float v97; // xmm7_4
  float v98; // xmm0_4
  float v99; // xmm1_4
  float v100; // xmm0_4
  float v101; // xmm0_4
  float v102; // xmm2_4
  float v103; // xmm5_4
  float v104; // xmm1_4
  float v105; // xmm7_4
  float v106; // xmm1_4
  float v107; // xmm0_4
  float v108; // xmm6_4
  float v109; // xmm2_4
  float v110; // xmm3_4
  float v111; // xmm5_4
  float v112; // xmm7_4
  float v113; // xmm6_4
  float v114; // xmm4_4
  float v115;
  float v116;
  glitch::collada::CBillboardSceneNode *v117;
  glitch::collada::CBillboardSceneNode *v118;
  glitch::collada::CBillboardSceneNode *v119;
  glitch::collada::CBillboardSceneNode *v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;
  float v145;
  float v146;
  float v147;
  float v148;
  float v149;
  float v150;
  float v151;
  int *v152;
  float v153;
  float v154;
  float v155;
  float v156;
  float v157;
  float v158;
  float *v159;
  float v160;
  float v161;
  float v162;
  float v163;

  v20 = (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 208) + 72))(*(uint32_t *)(a1 + 208));
  v21 = *((int **)a4 + 52);
  v22 = *v21;
  if ( (*((uint8_t *)v21 + 245) & 8) != 0 )
  {
    v87 = (float *)(*(int (**)(int *))(v22 + 64))(v21);
    v24 = a4;
    v134 = (float)(v87[3] + *v87) * 0.5;
    v135 = (float)(v87[4] + v87[1]) * 0.5;
    v136 = 0.5 * (float)(v87[5] + v87[2]);
  }
  else
  {
    v23 = (float *)(*(int (**)(int *))(v22 + 72))(v21);
    v24 = a4;
    v136 = v23[14];
    v135 = v23[13];
    v134 = v23[12];
  }
  v25 = *(int **)(*((uint32_t *)v24 + 58) + 228);
  v152 = v25;
  if ( v25 != nullptr )
  {
    v117 = v24;
    sub_8B1B00((int *)((char *)v25 + *(uint32_t *)(*v25 - 16) + 4));
    v24 = v117;
    v25 = v152;
  }
  v26 = (*((uint8_t *)v25 + 245) & 8) == 0;
  v27 = v25;
  v28 = *v25;
  v118 = v24;
  if ( v26 )
  {
    v29 = (float *)(*(int (**)(int *))(v28 + 72))(v27);
    v30 = v118;
    v139 = v29[14];
    v142 = v29[13];
    v133 = v29[12];
  }
  else
  {
    v86 = (float *)(*(int (**)(int *))(v28 + 64))(v27);
    v30 = v118;
    v133 = (float)(v86[3] + *v86) * 0.5;
    v142 = (float)(v86[4] + v86[1]) * 0.5;
    v139 = 0.5 * (float)(v86[5] + v86[2]);
  }
  v119 = v30;
  v31 = G4_VCALL<int>(v152, 292);
  v32 = *(float *)(v31 + 8);
  v33 = *(float *)(v31 + 16);
  v34 = *(float *)(v31 + 20);
  v35 = *(float *)(v31 + 24);
  v36 = *(float *)(v31 + 32);
  v125 = *(float *)v31;
  v145 = *(float *)(v31 + 4);
  v37 = *(float *)(v31 + 36);
  v38 = *(float *)(v31 + 40);
  v39 = *((uint32_t *)v119 + 77);
  v130 = v35;
  v137 = v37;
  v129 = v38;
  v40 = *(uint32_t *)(v39 + 76);
  v41 = v39 + 76;
  v156 = *(float *)(v20 + 32);
  v128 = v32;
  v159 = (float *)(v39 + 76 + v40);
  v42 = nullptr;
  if ( v40 != 0 )
    v42 = v159;
  v43 = v42[2];
  v44 = v42[3];
  v127 = v33;
  v45 = *(float *)(v20 + 16);
  v138 = v34;
  v46 = v42[4];
  v126 = v36;
  v148 = *(float *)(v20 + 4);
  v47 = (float)((float)(v44 * v45) + (float)(v43 * *(float *)v20)) + (float)(v156 * v46);
  v153 = *(float *)(v20 + 20);
  v150 = *(float *)(v20 + 36);
  v48 = (float)((float)(v153 * v44) + (float)(v148 * v43)) + (float)(v150 * v46);
  v146 = *(float *)(v20 + 8);
  v132 = *(float *)(v20 + 24);
  v131 = *(float *)(v20 + 40);
  v49 = (float)((float)(v44 * v132) + (float)(v43 * v146)) + (float)(v46 * v131);
  v50 = (float)((float)(v48 * v48) + (float)(v47 * v47)) + (float)(v49 * v49);
  if ( v50 != 0.0 )
  {
    v51 = 1.0 / fsqrt(v50);
    v52 = (float)((float)((float)(v50 * v51) * v51) + -3.0) * (float)(v51 * -0.5);
    v47 = v47 * v52;
    v48 = v48 * v52;
    v49 = v49 * v52;
  }
  v53 = (float *)(v40 + v41);
  v54 = nullptr;
  if ( v40 != 0 )
    v54 = v53;
  v55 = v54[5];
  v56 = v54[6];
  v160 = v54[7];
  v57 = (float)((float)(v45 * v56) + (float)(*(float *)v20 * v55)) + (float)(v156 * v160);
  v58 = (float)((float)(v153 * v56) + (float)(v148 * v55)) + (float)(v160 * v150);
  v59 = (float)((float)(v56 * v132) + (float)(v55 * v146)) + (float)(v160 * v131);
  v60 = (float)((float)(v58 * v58) + (float)(v57 * v57)) + (float)(v59 * v59);
  if ( v60 != 0.0 )
  {
    v61 = 1.0 / fsqrt(v60);
    v62 = (float)((float)((float)(v60 * v61) * v61) + -3.0) * (float)(v61 * -0.5);
    v57 = v57 * v62;
    v58 = v58 * v62;
    v59 = v59 * v62;
  }
  v161 = (float)(v57 * v48) - (float)(v58 * v47);
  v157 = (float)(v59 * v47) - (float)(v57 * v49);
  v149 = (float)(v58 * v49) - (float)(v59 * v48);
  v63 = (float)((float)(v157 * v157) + (float)(v149 * v149)) + (float)(v161 * v161);
  if ( v63 != 0.0 )
  {
    v64 = fsqrt(v63);
    v65 = (float)((float)((float)(v63 * (float)(1.0 / v64)) * (float)(1.0 / v64)) + -3.0)
        * (float)((float)(1.0 / v64) * -0.5);
    v149 = v149 * v65;
    v157 = v157 * v65;
    v161 = v65 * v161;
  }
  v154 = (float)(v157 * v47) - (float)(v149 * v48);
  v151 = (float)(v149 * v49) - (float)(v161 * v47);
  v147 = (float)(v161 * v48) - (float)(v157 * v49);
  v66 = (float)((float)(v151 * v151) + (float)(v147 * v147)) + (float)(v154 * v154);
  if ( v66 != 0.0 )
  {
    v67 = fsqrt(v66);
    v68 = (float)((float)((float)(v66 * (float)(1.0 / v67)) * (float)(1.0 / v67)) + -3.0)
        * (float)((float)(1.0 / v67) * -0.5);
    v147 = v147 * v68;
    v151 = v151 * v68;
    v154 = v68 * v154;
  }
  memset(&a19, 0, 0x40u);
  LODWORD(a19) = 1065353216;
  STACK[0x114] = 1065353216;
  STACK[0x128] = 1065353216;
  STACK[0x13C] = 1065353216;
  v123 = v57;
  v122 = v58;
  v121 = v59;
  if ( glitch::collada::CBillboardSceneNode::getBillboardType(v119) == 2 )
  {
    if ( glitch::collada::CBillboardSceneNode::getBillboardOrientation(v119) == 2 )
    {
      v90 = v129;
      v89 = v128;
    }
    else
    {
      v89 = v133 - v134;
      v90 = v139 - v136;
      v130 = v142 - v135;
      v91 = (float)((float)(v130 * v130) + (float)(v89 * v89)) + (float)(v90 * v90);
      if ( v91 != 0.0 )
      {
        v92 = 1.0 / fsqrt(v91);
        v93 = (float)((float)((float)(v91 * v92) * v92) + -3.0) * (float)(v92 * -0.5);
        v89 = v89 * v93;
        v90 = v90 * v93;
        v130 = v130 * v93;
      }
    }
    v94 = (float)(v130 * v57) - (float)(v89 * v58);
    v95 = (float)(v89 * v59) - (float)(v90 * v57);
    v96 = (float)(v90 * v58) - (float)(v130 * v59);
    v144 = (float)(v96 * v58) - (float)(v95 * v57);
    v97 = (float)(v95 * v59) - (float)(v94 * v58);
    v141 = (float)(v94 * v57) - (float)(v96 * v59);
    v155 = v97;
    v98 = (float)((float)(v141 * v141) + (float)(v97 * v97)) + (float)(v144 * v144);
    if ( v98 != 0.0 )
    {
      v99 = 1.0 / fsqrt(v98);
      v100 = (float)((float)((float)(v98 * v99) * v99) + -3.0) * (float)(v99 * -0.5);
      v155 = v97 * v100;
      v141 = v141 * v100;
      v144 = v100 * v144;
    }
    v101 = (float)(v149 * v58) - (float)(v157 * v57);
    v102 = (float)(v161 * v57) - (float)(v149 * v59);
    v103 = (float)(v157 * v59) - (float)(v161 * v58);
    v104 = (float)((float)(v102 * v102) + (float)(v103 * v103)) + (float)(v101 * v101);
    if ( v104 != 0.0 )
    {
      v105 = 1.0 / fsqrt(v104);
      v106 = (float)((float)((float)(v104 * v105) * v105) + -3.0) * (float)(v105 * -0.5);
      v103 = v103 * v106;
      v102 = v102 * v106;
      v101 = v101 * v106;
    }
    v162 = acosf(fminf(fmaxf((float)((float)(v141 * v102) + (float)(v155 * v103)) + (float)(v144 * v101), -1.0), 1.0));
    if ( (float)((float)((float)((float)((float)(v155 * v101) - (float)(v144 * v103)) * v58)
                       + (float)((float)((float)(v144 * v102) - (float)(v101 * v141)) * v57))
               + (float)((float)((float)(v103 * v141) - (float)(v102 * v155)) * v59)) < 0.0 )
      v107 = -v162;
    else
      v107 = v162;
    v115 = sinf(v107 * 0.5);
    v124 = v115;
    v116 = cosf(v107 * 0.5);
    HIDWORD(a19) = 0;
    STACK[0x11C] = 0;
    v108 = v59 * v124;
    v109 = v124 * v57;
    v110 = (float)((float)(v58 * v124) * v109) + (float)((float)(v58 * v124) * v109);
    v111 = (float)(v108 * v109) + (float)(v108 * v109);
    v163 = (float)(v124 * v123) * (float)(v116 + v116);
    v112 = (float)(v108 * v108) + (float)(v108 * v108);
    v113 = (float)(v121 * v124) * (float)(v116 + v116);
    v158 = (float)(v58 * v124) * (float)(v116 + v116);
    v114 = -(float)((float)((float)(v58 * v124) * (float)(v58 * v124))
                  + (float)((float)(v58 * v124) * (float)(v58 * v124)));
    *(float *)&a19 = (float)(v114 - v112) + 1.0;
    *((float *)&a19 + 1) = v110 + v113;
    *(float *)&a20 = v110 - v113;
    *((float *)&a19 + 2) = v111 - v158;
    *(float *)&STACK[0x120] = v111 + v158;
    *(float *)&STACK[0x114] = 1.0
                            - (float)((float)((float)((float)(v124 * v123) * (float)(v124 * v123))
                                            + (float)((float)(v124 * v123) * (float)(v124 * v123)))
                                    + v112);
    *(float *)&STACK[0x118] = (float)((float)((float)(v122 * v124) * (float)(v121 * v124))
                                    + (float)((float)(v122 * v124) * (float)(v121 * v124)))
                            + v163;
    *(float *)&STACK[0x124] = (float)((float)((float)(v122 * v124) * (float)(v121 * v124))
                                    + (float)((float)(v122 * v124) * (float)(v121 * v124)))
                            - v163;
    STACK[0x12C] = 0;
    STACK[0x130] = 0;
    STACK[0x134] = 0;
    STACK[0x138] = 0;
    STACK[0x13C] = 1065353216;
    v83 = v119;
    *(float *)&STACK[0x128] = (float)(v114
                                    - (float)((float)((float)(v124 * v123) * (float)(v124 * v123))
                                            + (float)((float)(v124 * v123) * (float)(v124 * v123))))
                            + 1.0;
  }
  else
  {
    v69 = *((uint32_t *)v119 + 77);
    v70 = 0;
    v71 = *(uint32_t *)(v69 + 76);
    v72 = v69 + v71 + 76;
    if ( v71 != 0 )
      v70 = v72;
    if ( *(uint32_t *)(v70 + 4) == 2 )
    {
      v76 = v126;
      v77 = v127;
      v78 = v125;
      v140 = v129;
      v143 = v130;
    }
    else
    {
      v128 = v133 - v134;
      v140 = v139 - v136;
      v143 = v142 - v135;
      v73 = (float)((float)(v143 * v143) + (float)((float)(v133 - v134) * (float)(v133 - v134))) + (float)(v140 * v140);
      if ( v73 != 0.0 )
      {
        v74 = fsqrt(v73);
        v75 = (float)((float)((float)(v73 * (float)(1.0 / v74)) * (float)(1.0 / v74)) + -3.0)
            * (float)((float)(1.0 / v74) * -0.5);
        v128 = (float)(v133 - v134) * v75;
        v143 = v143 * v75;
        v140 = v75 * v140;
      }
      v76 = (float)(v143 * v145) - (float)(v138 * v128);
      v77 = (float)(v137 * v128) - (float)(v140 * v145);
      v78 = (float)(v140 * v138) - (float)(v143 * v137);
      v79 = (float)((float)(v78 * v78) + (float)(v77 * v77)) + (float)(v76 * v76);
      if ( v79 != 0.0 )
      {
        v80 = 1.0 / fsqrt(v79);
        v81 = (float)(v80 * -0.5)
            * (float)((float)((float)((float)((float)((float)(v78 * v78) + (float)(v77 * v77)) + (float)(v76 * v76))
                                    * v80)
                            * v80)
                    + -3.0);
        v78 = v78 * v81;
        v77 = v77 * v81;
        v76 = v76 * v81;
      }
      v137 = (float)(v128 * v77) - (float)(v143 * v78);
      v138 = (float)(v140 * v78) - (float)(v128 * v76);
      v145 = (float)(v143 * v76) - (float)(v140 * v77);
    }
    HIDWORD(a19) = 0;
    memset(&STACK[0x240], 0, 0x40u);
    *(float *)&STACK[0x248] = v76;
    STACK[0x27C] = 1065353216;
    STACK[0x11C] = 0;
    *(float *)&STACK[0x240] = v78;
    *(float *)&STACK[0x244] = v77;
    *(float *)&STACK[0x250] = v145;
    *(float *)&STACK[0x254] = v138;
    *(float *)&STACK[0x258] = v137;
    *(float *)&STACK[0x260] = v128;
    *(float *)&STACK[0x264] = v143;
    *(float *)&STACK[0x268] = v140;
    *(uint64_t *)&a19 = __PAIR64__(LODWORD(v157), LODWORD(v149));
    *((float *)&a19 + 2) = v161;
    *(float *)&a20 = v147;
    *(float *)&STACK[0x114] = v151;
    *(float *)&STACK[0x118] = v154;
    *(float *)&STACK[0x120] = v47;
    *(float *)&STACK[0x124] = v48;
    STACK[0x12C] = 0;
    *(float *)&STACK[0x128] = v49;
    v82 = sub_5F6220((float *)&a19, (float *)&STACK[0x280]);
    v83 = v119;
    if ( v82 != 0 )
    {
      LODWORD(a19) = STACK[0x280];
      DWORD1(a19) = STACK[0x284];
      DWORD2(a19) = STACK[0x288];
      HIDWORD(a19) = STACK[0x28C];
      LODWORD(a20) = STACK[0x290];
      STACK[0x114] = STACK[0x294];
      STACK[0x118] = STACK[0x298];
      STACK[0x11C] = STACK[0x29C];
      STACK[0x120] = STACK[0x2A0];
      STACK[0x124] = STACK[0x2A4];
      STACK[0x128] = STACK[0x2A8];
      STACK[0x12C] = STACK[0x2AC];
      STACK[0x130] = STACK[0x2B0];
      STACK[0x134] = STACK[0x2B4];
      STACK[0x138] = STACK[0x2B8];
      STACK[0x13C] = STACK[0x2BC];
      glitch::core::detail::CMatrix4Base_float_id_159183::mult34(
        (glitch::core::detail::CMatrix4Base<float> *)&STACK[0x240],
        (const glitch::core::detail::CMatrix4Base<float> *)&a19,
        (glitch::core::detail::CMatrix4Base<float> *)&STACK[0x2C0]);
      v83 = v119;
      LODWORD(a19) = STACK[0x2C0];
      DWORD1(a19) = STACK[0x2C4];
      DWORD2(a19) = STACK[0x2C8];
      HIDWORD(a19) = STACK[0x2CC];
      LODWORD(a20) = STACK[0x2D0];
      STACK[0x114] = STACK[0x2D4];
      STACK[0x118] = STACK[0x2D8];
      STACK[0x11C] = STACK[0x2DC];
      STACK[0x120] = STACK[0x2E0];
      STACK[0x124] = STACK[0x2E4];
      STACK[0x128] = STACK[0x2E8];
      STACK[0x12C] = STACK[0x2EC];
      STACK[0x130] = STACK[0x2F0];
      STACK[0x134] = STACK[0x2F4];
      STACK[0x138] = STACK[0x2F8];
      STACK[0x13C] = STACK[0x2FC];
    }
    else
    {
      a19 = 0;
      a20 = 0;
      *(g4_int128_t *)&STACK[0x120] = 0;
      *(g4_int128_t *)&STACK[0x130] = 0;
    }
  }
  memset(&STACK[0x140], 0, 0x40u);
  STACK[0x140] = 1065353216;
  memset(&STACK[0x180], 0, 0x40u);
  v120 = v83;
  *(float *)&STACK[0x170] = v134;
  *(float *)&STACK[0x174] = v135;
  *(float *)&STACK[0x178] = v136;
  STACK[0x154] = 1065353216;
  STACK[0x168] = 1065353216;
  STACK[0x17C] = 1065353216;
  STACK[0x180] = 1065353216;
  STACK[0x194] = 1065353216;
  STACK[0x1A8] = 1065353216;
  STACK[0x1BC] = 1065353216;
  glitch::core::detail::CMatrix4Base_float_id_159183::mult34(
    (glitch::core::detail::CMatrix4Base<float> *)&STACK[0x140],
    (const glitch::core::detail::CMatrix4Base<float> *)&a19,
    (glitch::core::detail::CMatrix4Base<float> *)&STACK[0x180]);
  memset(&STACK[0x1C0], 0, 0x40u);
  STACK[0x1FC] = 1065353216;
  STACK[0x1E8] = 1065353216;
  STACK[0x1D4] = 1065353216;
  STACK[0x1C0] = 1065353216;
  STACK[0x200] = *(uint32_t *)v20;
  STACK[0x204] = *(uint32_t *)(v20 + 4);
  STACK[0x208] = *(uint32_t *)(v20 + 8);
  STACK[0x20C] = *(uint32_t *)(v20 + 12);
  STACK[0x210] = *(uint32_t *)(v20 + 16);
  STACK[0x214] = *(uint32_t *)(v20 + 20);
  STACK[0x218] = *(uint32_t *)(v20 + 24);
  STACK[0x21C] = *(uint32_t *)(v20 + 28);
  STACK[0x220] = *(uint32_t *)(v20 + 32);
  STACK[0x224] = *(uint32_t *)(v20 + 36);
  STACK[0x228] = *(uint32_t *)(v20 + 40);
  STACK[0x22C] = *(uint32_t *)(v20 + 44);
  STACK[0x230] = *(uint32_t *)(v20 + 48);
  STACK[0x234] = *(uint32_t *)(v20 + 52);
  STACK[0x238] = *(uint32_t *)(v20 + 56);
  STACK[0x23C] = *(uint32_t *)(v20 + 60);
  STACK[0x230] = 0;
  STACK[0x234] = 0;
  STACK[0x238] = 0;
  glitch::core::detail::CMatrix4Base_float_id_159183::mult34(
    (glitch::core::detail::CMatrix4Base<float> *)&STACK[0x180],
    (const glitch::core::detail::CMatrix4Base<float> *)&STACK[0x200],
    (glitch::core::detail::CMatrix4Base<float> *)&STACK[0x1C0]);
  if ( (uint8_t)glitch::scene::ISceneNode::definitelyHaveRelativeTransformation(v120) != 0 )
  {
    RelativeTransformation = (const glitch::core::detail::CMatrix4Base<float> *)glitch::scene::ISceneNode::getRelativeTransformation(v120);
    glitch::core::detail::CMatrix4Base_float_id_159183::mult34(
      (glitch::core::detail::CMatrix4Base<float> *)&STACK[0x1C0],
      RelativeTransformation,
      (glitch::collada::CBillboardSceneNode *)((char *)v120 + 16));
  }
  else
  {
    v84 = STACK[0x1C0];
    *((uint32_t *)v120 + 61) &= ~0x100000u;
    *((uint32_t *)v120 + 4) = v84;
    *((uint32_t *)v120 + 5) = STACK[0x1C4];
    *((uint32_t *)v120 + 6) = STACK[0x1C8];
    *((uint32_t *)v120 + 7) = STACK[0x1CC];
    *((uint32_t *)v120 + 8) = STACK[0x1D0];
    *((uint32_t *)v120 + 9) = STACK[0x1D4];
    *((uint32_t *)v120 + 10) = STACK[0x1D8];
    *((uint32_t *)v120 + 11) = STACK[0x1DC];
    *((uint32_t *)v120 + 12) = STACK[0x1E0];
    *((uint32_t *)v120 + 13) = STACK[0x1E4];
    *((uint32_t *)v120 + 14) = STACK[0x1E8];
    *((uint32_t *)v120 + 15) = STACK[0x1EC];
    *((uint32_t *)v120 + 16) = STACK[0x1F0];
    *((uint32_t *)v120 + 17) = STACK[0x1F4];
    *((uint32_t *)v120 + 18) = STACK[0x1F8];
    *((uint32_t *)v120 + 19) = STACK[0x1FC];
  }
  sub_5459C0((int *)((char *)v152 + *(uint32_t *)(*v152 - 16)));
  return 1;
}



// ============================================================================
// Address:   0xd83a40 (size: 668 bytes)
// Symbol:    _ZStplIcSt11char_traitsIcEN6glitch4core10SAllocatorIcLNS2_6memory13E_MEMORY_HINTE0EEEESbIT_T0_T1_ERKSB_PKS8_
// Demangled: std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> std::operator+<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&,char const*)
// ============================================================================
int *g4_std_compat::glitch_string_op_plus(
        int *a1,
        uint32_t *a2,
        char *s)
{
  uint8_t *v3;
  char *src;
  unsigned int n;
  int v6;
  char *v7;
  int v8;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  int *v14;
  size_t v15;
  char *v16;
  uint8_t *v17;
  int *v18;
  uint8_t *dest;
  void *desta;
  unsigned int v21;
  int v22;

  v3 = (uint8_t *)*a2;
  src = s;
  if ( *(int *)(*a2 - 4) < 0 )
  {
    v10 = *((uint32_t *)v3 - 3);
    v11 = *((uint32_t *)v3 - 2);
    if ( v10 > 0x3FFFFFFC )
      sub_1900180("basic_string::_S_create");
    if ( v10 > v11 && v10 < 2 * v11 )
      v10 = 2 * v11;
    if ( v10 + 29 > 0x1000 && v11 < v10 )
    {
      v12 = v10 + 4096 - (((uint16_t)v10 + 29) & 0xFFF);
      v10 = 1073741820;
      if ( v12 <= 0x3FFFFFFC )
        v10 = v12;
    }
    v17 = (uint8_t *)*a2;
    v13 = sub_4EBDC0(v10 + 13);
    *(uint32_t *)(v13 + 4) = v10;
    *(uint32_t *)(v13 + 8) = 0;
    v14 = (int *)v13;
    v22 = 0;
    desta = (void *)(v13 + 12);
    v15 = *((uint32_t *)v17 - 3);
    if ( v15 != 0 )
    {
      if ( v15 == 1 )
      {
        *(uint8_t *)(v13 + 12) = *v17;
      }
      else
      {
        v18 = (int *)v13;
        memcpy(desta, v17, v15);
        v14 = v18;
      }
      v22 = *((uint32_t *)v17 - 3);
    }
    if ( v14 != (int *)(&dword_20D3E6C) )
    {
      v14[2] = 0;
      *v14 = v22;
      *((uint8_t *)v14 + v22 + 12) = 0;
    }
    v3 = (uint8_t *)(desta);
  }
  else if ( v3 - 12 != (uint8_t *)&dword_20D3E6C )
  {
    __sync_add_and_fetch((volatile int32_t *)v3 - 1, 1u);
  }
  *a1 = (int)(uintptr_t)(v3);
  v16 = (char *)(v3);
  n = strlen(s);
  if ( n != 0 )
  {
    v6 = *((uint32_t *)v16 - 3);
    if ( n > 1073741820 - v6 )
      sub_1900180("basic_string::append");
    dest = (uint8_t *)(n + v6);
    v21 = *((uint32_t *)v16 - 2);
    if ( n + v6 <= v21 && *((int *)v16 - 1) <= 0 )
      goto LABEL_34;
    if ( s >= v16 )
    {
      v7 = &v16[v6];
      if ( s <= &v16[v6] )
      {
        if ( dest == (uint8_t *)v21 && *((int *)v16 - 1) <= 0 )
        {
          src = s;
        }
        else
        {
          sub_D42200(a1, (unsigned int)(uintptr_t)(dest));
          src = (char *)(*a1 + s - v16);
          v7 = (char *)(*a1 + *(uint32_t *)(*a1 - 12));
        }
        if ( n == 1 )
          goto LABEL_20;
        goto LABEL_12;
      }
    }
    if ( dest == (uint8_t *)v21 && *((int *)v16 - 1) <= 0 )
    {
LABEL_34:
      v7 = &v16[v6];
    }
    else
    {
      sub_D42200(a1, (unsigned int)(uintptr_t)(dest));
      v7 = (char *)(*(uint32_t *)(*a1 - 12) + *a1);
    }
    if ( n == 1 )
    {
LABEL_20:
      *v7 = *src;
LABEL_13:
      v8 = *a1;
      if ( (int *)(*a1 - 12) != (int *)(&dword_20D3E6C) )
      {
        *(uint32_t *)(v8 - 4) = 0;
        *(uint32_t *)(v8 - 12) = (uint32_t)(uintptr_t)(dest);
        dest[v8] = 0;
      }
      return a1;
    }
LABEL_12:
    memcpy(v7, src, n);
    goto LABEL_13;
  }
  return a1;
}
// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_unsigned_short_pair_unsi_5ddac5::M_erase  (binary VA: 0xd83ff0)
// Original: std::_Rb_tree<unsigned short,std::pair<unsigned short const,glitch::collada::detail::CHardwareMatrixSkinTechnique::SHardwareData>,std::_Select1st<std::pair<unsigned short const,glitch::collada::detail::CHardwareMatrixSkinTechnique::SHardwareData>>,std::less<unsigned short>,glitch::core::SAllocator<std::pair<unsigned short const,glitch::collada::detail::CHardwareMatrixSkinTechnique::SHardwareData>,(glitch::memory::E_MEMORY_HINT)0>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_unsigned_short_pair_unsi_5ddac5::M_erase(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;

  if ( a2 != 0 )
  {
    while ( 1 )
    {
      v2 = *(uint32_t *)(a2 + 12);
      v21 = v2;
      if ( v2 != 0 )
      {
        while ( 1 )
        {
          v3 = *(uint32_t *)(v2 + 12);
          v22 = v3;
          if ( v3 != 0 )
          {
            while ( 1 )
            {
              v4 = *(uint32_t *)(v3 + 12);
              v23 = v4;
              if ( v4 != 0 )
              {
                while ( 1 )
                {
                  v5 = *(uint32_t *)(v4 + 12);
                  v24 = v5;
                  if ( v5 != 0 )
                  {
                    while ( 1 )
                    {
                      v6 = *(uint32_t *)(v5 + 12);
                      v25 = v6;
                      if ( v6 != 0 )
                      {
                        while ( 1 )
                        {
                          v7 = *(uint32_t *)(v6 + 12);
                          v20 = v7;
                          if ( v7 != 0 )
                          {
                            while ( 1 )
                            {
                              v8 = *(uint32_t *)(v7 + 12);
                              v19 = v8;
                              if ( v8 != 0 )
                              {
                                while ( 1 )
                                {
                                  v9 = *(uint32_t *)(v8 + 12);
                                  if ( v9 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_unsigned_short_pair_unsi_5ddac5::M_erase(
                                        a1,
                                        *(uint32_t *)(v9 + 12));
                                      v10 = *(uint32_t *)(v9 + 8);
                                      gll_operator_delete_arr(v9);
                                      if ( v10 == 0 )
                                        break;
                                      v9 = v10;
                                    }
                                  }
                                  v11 = *(uint32_t *)(v19 + 8);
                                  gll_operator_delete_arr(v19);
                                  if ( v11 == 0 )
                                    break;
                                  v19 = v11;
                                  v8 = v11;
                                }
                              }
                              v12 = *(uint32_t *)(v20 + 8);
                              gll_operator_delete_arr(v20);
                              if ( v12 == 0 )
                                break;
                              v20 = v12;
                              v7 = v12;
                            }
                          }
                          v13 = *(uint32_t *)(v25 + 8);
                          gll_operator_delete_arr(v25);
                          if ( v13 == 0 )
                            break;
                          v25 = v13;
                          v6 = v13;
                        }
                      }
                      v14 = *(uint32_t *)(v24 + 8);
                      gll_operator_delete_arr(v24);
                      if ( v14 == 0 )
                        break;
                      v24 = v14;
                      v5 = v14;
                    }
                  }
                  v15 = *(uint32_t *)(v23 + 8);
                  gll_operator_delete_arr(v23);
                  if ( v15 == 0 )
                    break;
                  v23 = v15;
                  v4 = v15;
                }
              }
              v16 = *(uint32_t *)(v22 + 8);
              gll_operator_delete_arr(v22);
              if ( v16 == 0 )
                break;
              v22 = v16;
              v3 = v16;
            }
          }
          v17 = *(uint32_t *)(v21 + 8);
          gll_operator_delete_arr(v21);
          if ( v17 == 0 )
            break;
          v21 = v17;
          v2 = v17;
        }
      }
      v18 = *(uint32_t *)(a2 + 8);
      gll_operator_delete_arr(a2);
      if ( v18 == 0 )
        break;
      a2 = v18;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_unsigned_long_long_pair_57e384::M_erase  (binary VA: 0xd841a0)
// Original: std::_Rb_tree<unsigned long long,std::pair<unsigned long long const,glitch::collada::detail::CSoftwareSkinTechnique::SSoftwareColorGenData>,std::_Select1st<std::pair<unsigned long long const,glitch::collada::detail::CSoftwareSkinTechnique::SSoftwareColorGenData>>,std::less<unsigned long long>,glitch::core::SAllocator<std::pair<unsigned long long const,glitch::collada::detail::CSoftwareSkinTechnique::SSoftwareColorGenData>,(glitch::memory::E_MEMORY_HINT)0>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_unsigned_long_long_pair_57e384::M_erase(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;

  if ( a2 != 0 )
  {
    while ( 1 )
    {
      v2 = *(uint32_t *)(a2 + 12);
      v21 = v2;
      if ( v2 != 0 )
      {
        while ( 1 )
        {
          v3 = *(uint32_t *)(v2 + 12);
          v22 = v3;
          if ( v3 != 0 )
          {
            while ( 1 )
            {
              v4 = *(uint32_t *)(v3 + 12);
              v23 = v4;
              if ( v4 != 0 )
              {
                while ( 1 )
                {
                  v5 = *(uint32_t *)(v4 + 12);
                  v24 = v5;
                  if ( v5 != 0 )
                  {
                    while ( 1 )
                    {
                      v6 = *(uint32_t *)(v5 + 12);
                      v25 = v6;
                      if ( v6 != 0 )
                      {
                        while ( 1 )
                        {
                          v7 = *(uint32_t *)(v6 + 12);
                          v20 = v7;
                          if ( v7 != 0 )
                          {
                            while ( 1 )
                            {
                              v8 = *(uint32_t *)(v7 + 12);
                              v19 = v8;
                              if ( v8 != 0 )
                              {
                                while ( 1 )
                                {
                                  v9 = *(uint32_t *)(v8 + 12);
                                  if ( v9 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_unsigned_long_long_pair_57e384::M_erase(
                                        a1,
                                        *(uint32_t *)(v9 + 12));
                                      v10 = *(uint32_t *)(v9 + 8);
                                      gll_operator_delete_arr(v9);
                                      if ( v10 == 0 )
                                        break;
                                      v9 = v10;
                                    }
                                  }
                                  v11 = *(uint32_t *)(v19 + 8);
                                  gll_operator_delete_arr(v19);
                                  if ( v11 == 0 )
                                    break;
                                  v19 = v11;
                                  v8 = v11;
                                }
                              }
                              v12 = *(uint32_t *)(v20 + 8);
                              gll_operator_delete_arr(v20);
                              if ( v12 == 0 )
                                break;
                              v20 = v12;
                              v7 = v12;
                            }
                          }
                          v13 = *(uint32_t *)(v25 + 8);
                          gll_operator_delete_arr(v25);
                          if ( v13 == 0 )
                            break;
                          v25 = v13;
                          v6 = v13;
                        }
                      }
                      v14 = *(uint32_t *)(v24 + 8);
                      gll_operator_delete_arr(v24);
                      if ( v14 == 0 )
                        break;
                      v24 = v14;
                      v5 = v14;
                    }
                  }
                  v15 = *(uint32_t *)(v23 + 8);
                  gll_operator_delete_arr(v23);
                  if ( v15 == 0 )
                    break;
                  v23 = v15;
                  v4 = v15;
                }
              }
              v16 = *(uint32_t *)(v22 + 8);
              gll_operator_delete_arr(v22);
              if ( v16 == 0 )
                break;
              v22 = v16;
              v3 = v16;
            }
          }
          v17 = *(uint32_t *)(v21 + 8);
          gll_operator_delete_arr(v21);
          if ( v17 == 0 )
            break;
          v21 = v17;
          v2 = v17;
        }
      }
      v18 = *(uint32_t *)(a2 + 8);
      gll_operator_delete_arr(a2);
      if ( v18 == 0 )
        break;
      a2 = v18;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_char_const_pair_char_con_38ba9c::M_erase  (binary VA: 0xd84350)
// Original: std::_Rb_tree<char const*,std::pair<char const* const,boost::intrusive_ptr<glitch::scene::ILODSelector>>,std::_Select1st<std::pair<char const* const,boost::intrusive_ptr<glitch::scene::ILODSelector>>>,std::less<char const*>,std::allocator<std::pair<char const* const,boost::intrusive_ptr<glitch::scene::ILODSelector>>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_char_const_pair_char_con_38ba9c::M_erase(int a1, void *a2)
{
  int v2;
  int v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  void *v9;
  void *v10;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  void *v15;
  void *v16;
  void *v17;
  void *v18;

  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v14 = *((void **)a2 + 3);
      if ( v14 != nullptr )
      {
        while ( 1 )
        {
          v15 = *((void **)v14 + 3);
          if ( v15 != nullptr )
          {
            while ( 1 )
            {
              v16 = *((void **)v15 + 3);
              if ( v16 != nullptr )
              {
                while ( 1 )
                {
                  v17 = *((void **)v16 + 3);
                  if ( v17 != nullptr )
                  {
                    while ( 1 )
                    {
                      v18 = *((void **)v17 + 3);
                      if ( v18 != nullptr )
                      {
                        while ( 1 )
                        {
                          v13 = *((void **)v18 + 3);
                          if ( v13 != nullptr )
                          {
                            while ( 1 )
                            {
                              v12 = *((void **)v13 + 3);
                              if ( v12 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v2 = *((uint32_t *)v12 + 3);
                                  if ( v2 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_char_const_pair_char_con_38ba9c::M_erase(
                                        a1,
                                        *(void **)(v2 + 12));
                                      v3 = *(uint32_t *)(v2 + 8);
                                      if ( *(uint32_t *)(v2 + 20) != 0 )
                                        sub_5459C0(*(volatile int32_t **)(v2 + 20));
                                      opDelete((void *)v2);
                                      if ( v3 == 0 )
                                        break;
                                      v2 = v3;
                                    }
                                  }
                                  v4 = *((void **)v12 + 2);
                                  if ( *((uint32_t *)v12 + 5) != 0 )
                                    sub_5459C0(*((volatile int32_t **)v12 + 5));
                                  opDelete(v12);
                                  if ( v4 == nullptr )
                                    break;
                                  v12 = v4;
                                }
                              }
                              v5 = *((void **)v13 + 2);
                              if ( *((uint32_t *)v13 + 5) != 0 )
                                sub_5459C0(*((volatile int32_t **)v13 + 5));
                              opDelete(v13);
                              if ( v5 == nullptr )
                                break;
                              v13 = v5;
                            }
                          }
                          v6 = *((void **)v18 + 2);
                          if ( *((uint32_t *)v18 + 5) != 0 )
                            sub_5459C0(*((volatile int32_t **)v18 + 5));
                          opDelete(v18);
                          if ( v6 == nullptr )
                            break;
                          v18 = v6;
                        }
                      }
                      v7 = *((void **)v17 + 2);
                      if ( *((uint32_t *)v17 + 5) != 0 )
                        sub_5459C0(*((volatile int32_t **)v17 + 5));
                      opDelete(v17);
                      if ( v7 == nullptr )
                        break;
                      v17 = v7;
                    }
                  }
                  v8 = *((void **)v16 + 2);
                  if ( *((uint32_t *)v16 + 5) != 0 )
                    sub_5459C0(*((volatile int32_t **)v16 + 5));
                  opDelete(v16);
                  if ( v8 == nullptr )
                    break;
                  v16 = v8;
                }
              }
              v9 = *((void **)v15 + 2);
              if ( *((uint32_t *)v15 + 5) != 0 )
                sub_5459C0(*((volatile int32_t **)v15 + 5));
              opDelete(v15);
              if ( v9 == nullptr )
                break;
              v15 = v9;
            }
          }
          v10 = *((void **)v14 + 2);
          if ( *((uint32_t *)v14 + 5) != 0 )
            sub_5459C0(*((volatile int32_t **)v14 + 5));
          opDelete(v14);
          if ( v10 == nullptr )
            break;
          v14 = v10;
        }
      }
      v11 = *((void **)a2 + 2);
      if ( *((uint32_t *)a2 + 5) != 0 )
        sub_5459C0(*((volatile int32_t **)a2 + 5));
      opDelete(a2);
      if ( v11 == nullptr )
        break;
      a2 = v11;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::introsort_loop_gnu_cxx_normal_iterator_e86e2a  (binary VA: 0xd84d90)
// Original: std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::collada::SAnimationClip const**,std::vector<glitch::collada::SAnimationClip const*,glitch::core::SAllocator<glitch::collada::SAnimationClip const*,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::collada::SAnimationClipRangeCompare>
// ----------------------------------------------------------------------------
int g4_std::introsort_loop_gnu_cxx_normal_iterator_e86e2a(char *a1, char *a2, int a3)
{
  char *j;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int k;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char *v17;
  int v18;
  char *m;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  char *v25;
  int v26;
  int v27;
  int *v28;
  int v29;
  int v30;
  int v31;
  int v32;
  char *v33;
  int *v34;
  char *v35;
  char *v36;
  char *v37;
  char *i;
  int v39;
  char *v40;
  char *v41;
  int v42;
  int v43;
  int v44;
  char *v45;
  char *v46;
  int v47;
  int v48;
  int v49;
  int v50;

  j = a2;
  result = a2 - a1;
  if ( a2 - a1 > 67 )
  {
    if ( a3 != 0 )
    {
      for ( i = a2; ; i = j )
      {
        v5 = *(uint32_t *)a1;
        --a3;
        v33 = &a1[4 * (result >> 3)];
        v6 = *(uint32_t *)v33;
        v7 = *(uint32_t *)(*(uint32_t *)a1 + 4);
        v39 = *(uint32_t *)(*(uint32_t *)v33 + 4);
        v8 = *((uint32_t *)i - 1);
        v9 = *(uint32_t *)(v8 + 4);
        v31 = v9;
        if ( v7 >= v39 )
        {
          if ( v7 >= v9 )
          {
            if ( v39 >= v9 )
            {
              *(uint32_t *)a1 = v6;
              *(uint32_t *)v33 = v5;
              v8 = *((uint32_t *)i - 1);
              v7 = *(uint32_t *)(*(uint32_t *)a1 + 4);
              v31 = *(uint32_t *)(v8 + 4);
              goto LABEL_7;
            }
            *(uint32_t *)a1 = v8;
            *((uint32_t *)i - 1) = v5;
LABEL_20:
            v7 = *(uint32_t *)(*(uint32_t *)a1 + 4);
            v31 = *(uint32_t *)(v5 + 4);
            v8 = v5;
          }
        }
        else
        {
          if ( v39 >= v9 )
          {
            if ( v7 >= v9 )
              goto LABEL_7;
            *(uint32_t *)a1 = v8;
            *((uint32_t *)i - 1) = v5;
            goto LABEL_20;
          }
          *(uint32_t *)a1 = v6;
          *(uint32_t *)v33 = v5;
          v8 = *((uint32_t *)i - 1);
          v7 = *(uint32_t *)(*(uint32_t *)a1 + 4);
          v31 = *(uint32_t *)(v8 + 4);
        }
LABEL_7:
        v10 = (unsigned int)(uintptr_t)(i);
        for ( j = a1 + 4; ; j += 4 )
        {
          for ( k = *(uint32_t *)j; *(uint32_t *)(*(uint32_t *)j + 4) < v7; k = *(uint32_t *)j )
            j += 4;
          v10 -= 4;
          if ( v31 > v7 )
          {
            do
            {
              v10 -= 4;
              v8 = *(uint32_t *)v10;
            }
            while ( *(uint32_t *)(*(uint32_t *)v10 + 4) > v7 );
          }
          if ( v10 <= (unsigned int)(uintptr_t)(j) )
            break;
          *(uint32_t *)j = v8;
          v8 = *(uint32_t *)(v10 - 4);
          *(uint32_t *)v10 = k;
          v7 = *(uint32_t *)(*(uint32_t *)a1 + 4);
          v31 = *(uint32_t *)(v8 + 4);
        }
        g4_std::introsort_loop_gnu_cxx_normal_iterator_e86e2a(
          j,
          i,
          a3);
        result = j - a1;
        if ( j - a1 <= 67 )
          return result;
        if ( a3 == 0 )
          break;
      }
    }
    v18 = result >> 2;
    v45 = j;
    v50 = v18 & 1;
    v42 = (v18 - 1) >> 1;
    v48 = (v18 - 2) >> 1;
    v44 = v48;
    v46 = &a1[4 * v48];
    for ( m = v46; ; m = v46 )
    {
      v20 = *(uint32_t *)m;
      v36 = m;
      v21 = v44;
      v49 = v20;
      v22 = v44;
      if ( v44 < v42 )
      {
        while ( 1 )
        {
          v41 = &a1[8 * v22 + 8];
          v23 = *(uint32_t *)v41;
          v37 = &a1[8 * v22 + 4];
          v24 = 2 * (v22 + 1);
          if ( *(uint32_t *)(*(uint32_t *)v41 + 4) < *(uint32_t *)(*(uint32_t *)v37 + 4) )
          {
            v23 = *(uint32_t *)v37;
            v24 = 2 * (v22 + 1) - 1;
          }
          v25 = &a1[8 * v22 + 8];
          if ( *(uint32_t *)(*(uint32_t *)v41 + 4) < *(uint32_t *)(*(uint32_t *)v37 + 4) )
            v25 = &a1[8 * v22 + 4];
          v36 = v25;
          *(uint32_t *)&a1[4 * v22] = v23;
          if ( v24 >= v42 )
            break;
          v22 = v24;
        }
        v21 = v24;
      }
      if ( v50 == 0 && v48 == v21 )
      {
        v36 = &a1[8 * v48 + 4];
        v21 = 2 * v48 + 1;
        *(uint32_t *)&a1[4 * v48] = *(uint32_t *)v36;
      }
      if ( v44 < v21 )
      {
        v26 = (v21 - 1) / 2;
        v27 = *(uint32_t *)&a1[4 * v26];
        if ( *(uint32_t *)(v27 + 4) < *(uint32_t *)(v49 + 4) )
        {
          while ( 1 )
          {
            *(uint32_t *)&a1[4 * v21] = v27;
            v36 = &a1[4 * v26];
            if ( v44 >= v26 )
              break;
            v27 = *(uint32_t *)&a1[4 * ((v26 - 1) / 2)];
            if ( *(uint32_t *)(v27 + 4) >= *(uint32_t *)(v49 + 4) )
              break;
            v21 = v26;
            v26 = (v26 - 1) / 2;
          }
        }
      }
      v46 -= 4;
      *(uint32_t *)v36 = v49;
      if ( v44 == 0 )
        break;
      --v44;
    }
    while ( 1 )
    {
      v45 -= 4;
      v12 = 0;
      v13 = 0;
      v34 = (int *)a1;
      v14 = *(uint32_t *)v45;
      *(uint32_t *)v45 = *(uint32_t *)a1;
      v47 = v14;
      v43 = (v45 - a1) >> 2;
      if ( (v43 - 1) / 2 > 0 )
      {
        while ( 1 )
        {
          v32 = 2 * (v13 + 1);
          v40 = &a1[8 * v13 + 8];
          v15 = *(uint32_t *)v40;
          v35 = &a1[4 * v32 - 4];
          v16 = v32;
          if ( *(uint32_t *)(*(uint32_t *)v40 + 4) < *(uint32_t *)(*(uint32_t *)v35 + 4) )
          {
            v15 = *(uint32_t *)v35;
            v16 = v32 - 1;
          }
          v17 = &a1[8 * v13 + 8];
          if ( *(uint32_t *)(*(uint32_t *)v40 + 4) < *(uint32_t *)(*(uint32_t *)v35 + 4) )
            v17 = &a1[4 * v32 - 4];
          v34 = (int *)v17;
          *(uint32_t *)&a1[4 * v13] = v15;
          if ( (v43 - 1) / 2 <= v16 )
            break;
          v13 = v16;
        }
        v12 = v16;
      }
      if ( (v43 & 1) == 0 && v12 == (v43 - 2) / 2 )
        break;
      if ( v12 > 0 )
        goto LABEL_59;
LABEL_36:
      result = v47;
      *v34 = v47;
      if ( v45 - a1 <= 7 )
        return result;
    }
    v28 = v34;
    v12 = 2 * v12 + 1;
    v34 = (int *)&a1[4 * v12];
    *v28 = *v34;
LABEL_59:
    v29 = (v12 - 1) >> 1;
    v30 = *(uint32_t *)&a1[4 * v29];
    if ( *(uint32_t *)(v30 + 4) < *(uint32_t *)(v47 + 4) )
    {
      while ( 1 )
      {
        *(uint32_t *)&a1[4 * v12] = v30;
        v34 = (int *)&a1[4 * v29];
        if ( v29 == 0 )
          break;
        v30 = *(uint32_t *)&a1[4 * ((v29 - 1) >> 1)];
        if ( *(uint32_t *)(v30 + 4) >= *(uint32_t *)(v47 + 4) )
          break;
        v12 = v29;
        v29 = (v29 - 1) >> 1;
      }
    }
    goto LABEL_36;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::lower_bound_gnu_cxx_normal_iterator_29f226  (binary VA: 0xd856f0)
// Original: std::lower_bound<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<glitch::collada::CAnimationIOParam> *,std::vector<boost::intrusive_ptr<glitch::collada::CAnimationIOParam>,glitch::core::SAllocator<boost::intrusive_ptr<glitch::collada::CAnimationIOParam>,(glitch::memory::E_MEMORY_HINT)0>>>,char const*>
// ----------------------------------------------------------------------------
volatile int32_t *** g4_std::lower_bound_gnu_cxx_normal_iterator_29f226(volatile int32_t ***a1, volatile int32_t **a2, int a3, const char **a4)
{
  const char *s;
  volatile int32_t *v5;
  size_t v6;
  size_t n;
  int v8;
  int v9;
  int v10;
  char *Name;
  uint8_t *src;
  int v13;
  size_t v14;
  size_t v15;
  int v16;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  size_t v21;
  int v22;
  uint8_t *v23;
  int v24;
  int *v25;
  int v26;
  int v27;
  size_t v28;
  int v29;
  int v30;
  int v31;
  char *dest;
  volatile int32_t **v33;
  volatile int32_t **v34;
  int v35;

  v34 = a2;
  v35 = (a3 - (int)(uintptr_t)(a2)) >> 2;
LABEL_2:
  if ( v35 > 0 )
  {
    while ( 1 )
    {
      v33 = &v34[v35 >> 1];
      s = *a4;
      v5 = *v33;
      if ( *v33 != nullptr )
        sub_8B1B00(v5 + 1);
      if ( s == nullptr )
        sub_18FFFD0("basic_string::_S_construct null not valid");
      v6 = strlen(s);
      if ( s == &s[v6] )
      {
        dest = (char *)(uintptr_t)(byte_20D3E78);
        goto LABEL_16;
      }
      n = v6;
      if ( v6 > 0x3FFFFFFC )
        goto LABEL_53;
      if ( v6 + 29 > 0x1000 && v6 != 0 )
        break;
      v10 = sub_4EBDC0(v6 + 13);
      *(uint32_t *)(v10 + 4) = n;
      *(uint32_t *)(v10 + 8) = 0;
      dest = (char *)(v10 + 12);
      if ( n != 1 )
        goto LABEL_13;
      *(uint8_t *)(v10 + 12) = *s;
LABEL_14:
      if ( (int *)v10 != (int *)(uintptr_t)(&dword_20D3E6C) )
      {
        *(uint32_t *)(v10 + 8) = 0;
        *(uint32_t *)v10 = n;
        dest[n] = 0;
      }
LABEL_16:
      Name = (char *)(glitch::collada::CAnimationIOParam::getName((glitch::collada::CAnimationIOParam::Self *)v5));
      src = *(uint8_t **)Name;
      if ( *(int *)(*(uint32_t *)Name - 4) < 0 )
      {
        v18 = *((uint32_t *)src - 3);
        v19 = *((uint32_t *)src - 2);
        if ( v18 > 0x3FFFFFFC )
LABEL_53:
          sub_1900180("basic_string::_S_create");
        if ( v18 > v19 && v18 < 2 * v19 )
          v18 = 2 * v19;
        if ( v18 + 29 > 0x1000 && v19 < v18 )
        {
          v20 = v18 + 4096 - (((uint16_t)v18 + 29) & 0xFFF);
          v18 = 1073741820;
          if ( v20 <= 0x3FFFFFFC )
            v18 = v20;
        }
        v13 = sub_4EBDC0(v18 + 13);
        *(uint32_t *)(v13 + 4) = v18;
        *(uint32_t *)(v13 + 8) = 0;
        v21 = *((uint32_t *)src - 3);
        v22 = 0;
        v23 = (uint8_t *)(v13 + 12);
        if ( v21 != 0 )
        {
          if ( v21 == 1 )
          {
            *(uint8_t *)(v13 + 12) = *src;
            v22 = *((uint32_t *)src - 3);
          }
          else
          {
            v26 = v13;
            memcpy((void *)(v13 + 12), src, v21);
            v22 = *((uint32_t *)src - 3);
            v13 = v26;
          }
        }
        if ( (int *)v13 == (int *)(uintptr_t)(&dword_20D3E6C) )
        {
          src = v23;
        }
        else
        {
          *(uint32_t *)(v13 + 8) = 0;
          *(uint32_t *)v13 = v22;
          src = v23;
          *(uint8_t *)(v13 + v22 + 12) = 0;
        }
      }
      else
      {
        v13 = (int)(uintptr_t)(src - 12);
        if ( src - 12 != (uint8_t *)&dword_20D3E6C )
          __sync_add_and_fetch((volatile int32_t *)src - 1, 1u);
      }
      v14 = *((uint32_t *)dest - 3);
      v15 = *((uint32_t *)src - 3);
      v28 = v15;
      v25 = (int *)v13;
      if ( v14 <= v15 )
        v15 = *((uint32_t *)dest - 3);
      v16 = memcmp(src, dest, v15);
      if ( v16 == 0 )
        v16 = v28 - v14;
      if ( v25 != (int *)(uintptr_t)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)src - 1, 0xFFFFFFFF) <= 0 )
      {
        v30 = v16;
        gll_operator_delete_arr((int)(uintptr_t)(v25));
        v16 = v30;
      }
      if ( dest - 12 != (char *)&dword_20D3E6C
        && __sync_fetch_and_add((volatile int32_t *)dest - 1, 0xFFFFFFFF) <= 0 )
      {
        v31 = v16;
        gll_operator_delete_arr((int)(uintptr_t)(dest - 12));
        v16 = v31;
      }
      if ( v5 != nullptr )
      {
        v29 = v16;
        sub_5459C0(v5);
        v16 = v29;
      }
      if ( v16 >= 0 )
      {
        v35 >>= 1;
        goto LABEL_2;
      }
      v35 = v35 - (v35 >> 1) - 1;
      v34 = v33 + 1;
      if ( v35 <= 0 )
        goto LABEL_29;
    }
    v8 = ((uint16_t)v6 + 29) & 0xFFF;
    v9 = 1073741820;
    if ( v6 + 4096 - v8 <= 0x3FFFFFFC )
      v9 = v6 + 4096 - v8;
    v24 = v9;
    v10 = sub_4EBDC0(v9 + 13);
    *(uint32_t *)(v10 + 4) = v24;
    *(uint32_t *)(v10 + 8) = 0;
    dest = (char *)(v10 + 12);
LABEL_13:
    v27 = v10;
    memcpy(dest, s, n);
    v10 = v27;
    goto LABEL_14;
  }
LABEL_29:
  *a1 = v34;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::lower_bound_gnu_cxx_normal_iterator_398d8d  (binary VA: 0xd85aa0)
// Original: std::lower_bound<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<glitch::collada::CAnimationIOParam> const*,std::vector<boost::intrusive_ptr<glitch::collada::CAnimationIOParam>,glitch::core::SAllocator<boost::intrusive_ptr<glitch::collada::CAnimationIOParam>,(glitch::memory::E_MEMORY_HINT)0>>>,char const*>
// ----------------------------------------------------------------------------
volatile int32_t *** g4_std::lower_bound_gnu_cxx_normal_iterator_398d8d(volatile int32_t ***a1, volatile int32_t **a2, int a3, const char **a4)
{
  const char *s;
  volatile int32_t *v5;
  size_t v6;
  size_t n;
  int v8;
  int v9;
  int v10;
  char *Name;
  uint8_t *src;
  int v13;
  size_t v14;
  size_t v15;
  int v16;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  size_t v21;
  int v22;
  uint8_t *v23;
  int v24;
  int *v25;
  int v26;
  int v27;
  size_t v28;
  int v29;
  int v30;
  int v31;
  char *dest;
  volatile int32_t **v33;
  volatile int32_t **v34;
  int v35;

  v34 = a2;
  v35 = (a3 - (int)(uintptr_t)(a2)) >> 2;
LABEL_2:
  if ( v35 > 0 )
  {
    while ( 1 )
    {
      v33 = &v34[v35 >> 1];
      s = *a4;
      v5 = *v33;
      if ( *v33 != nullptr )
        sub_8B1B00(v5 + 1);
      if ( s == nullptr )
        sub_18FFFD0("basic_string::_S_construct null not valid");
      v6 = strlen(s);
      if ( s == &s[v6] )
      {
        dest = (char *)(uintptr_t)(byte_20D3E78);
        goto LABEL_16;
      }
      n = v6;
      if ( v6 > 0x3FFFFFFC )
        goto LABEL_53;
      if ( v6 + 29 > 0x1000 && v6 != 0 )
        break;
      v10 = sub_4EBDC0(v6 + 13);
      *(uint32_t *)(v10 + 4) = n;
      *(uint32_t *)(v10 + 8) = 0;
      dest = (char *)(v10 + 12);
      if ( n != 1 )
        goto LABEL_13;
      *(uint8_t *)(v10 + 12) = *s;
LABEL_14:
      if ( (int *)v10 != (int *)(uintptr_t)(&dword_20D3E6C) )
      {
        *(uint32_t *)(v10 + 8) = 0;
        *(uint32_t *)v10 = n;
        dest[n] = 0;
      }
LABEL_16:
      Name = (char *)(glitch::collada::CAnimationIOParam::getName((glitch::collada::CAnimationIOParam::Self *)v5));
      src = *(uint8_t **)Name;
      if ( *(int *)(*(uint32_t *)Name - 4) < 0 )
      {
        v18 = *((uint32_t *)src - 3);
        v19 = *((uint32_t *)src - 2);
        if ( v18 > 0x3FFFFFFC )
LABEL_53:
          sub_1900180("basic_string::_S_create");
        if ( v18 > v19 && v18 < 2 * v19 )
          v18 = 2 * v19;
        if ( v18 + 29 > 0x1000 && v19 < v18 )
        {
          v20 = v18 + 4096 - (((uint16_t)v18 + 29) & 0xFFF);
          v18 = 1073741820;
          if ( v20 <= 0x3FFFFFFC )
            v18 = v20;
        }
        v13 = sub_4EBDC0(v18 + 13);
        *(uint32_t *)(v13 + 4) = v18;
        *(uint32_t *)(v13 + 8) = 0;
        v21 = *((uint32_t *)src - 3);
        v22 = 0;
        v23 = (uint8_t *)(v13 + 12);
        if ( v21 != 0 )
        {
          if ( v21 == 1 )
          {
            *(uint8_t *)(v13 + 12) = *src;
            v22 = *((uint32_t *)src - 3);
          }
          else
          {
            v26 = v13;
            memcpy((void *)(v13 + 12), src, v21);
            v22 = *((uint32_t *)src - 3);
            v13 = v26;
          }
        }
        if ( (int *)v13 == (int *)(uintptr_t)(&dword_20D3E6C) )
        {
          src = v23;
        }
        else
        {
          *(uint32_t *)(v13 + 8) = 0;
          *(uint32_t *)v13 = v22;
          src = v23;
          *(uint8_t *)(v13 + v22 + 12) = 0;
        }
      }
      else
      {
        v13 = (int)(uintptr_t)(src - 12);
        if ( src - 12 != (uint8_t *)&dword_20D3E6C )
          __sync_add_and_fetch((volatile int32_t *)src - 1, 1u);
      }
      v14 = *((uint32_t *)dest - 3);
      v15 = *((uint32_t *)src - 3);
      v28 = v15;
      v25 = (int *)v13;
      if ( v14 <= v15 )
        v15 = *((uint32_t *)dest - 3);
      v16 = memcmp(src, dest, v15);
      if ( v16 == 0 )
        v16 = v28 - v14;
      if ( v25 != (int *)(uintptr_t)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)src - 1, 0xFFFFFFFF) <= 0 )
      {
        v30 = v16;
        gll_operator_delete_arr((int)(uintptr_t)(v25));
        v16 = v30;
      }
      if ( dest - 12 != (char *)&dword_20D3E6C
        && __sync_fetch_and_add((volatile int32_t *)dest - 1, 0xFFFFFFFF) <= 0 )
      {
        v31 = v16;
        gll_operator_delete_arr((int)(uintptr_t)(dest - 12));
        v16 = v31;
      }
      if ( v5 != nullptr )
      {
        v29 = v16;
        sub_5459C0(v5);
        v16 = v29;
      }
      if ( v16 >= 0 )
      {
        v35 >>= 1;
        goto LABEL_2;
      }
      v35 = v35 - (v35 >> 1) - 1;
      v34 = v33 + 1;
      if ( v35 <= 0 )
        goto LABEL_29;
    }
    v8 = ((uint16_t)v6 + 29) & 0xFFF;
    v9 = 1073741820;
    if ( v6 + 4096 - v8 <= 0x3FFFFFFC )
      v9 = v6 + 4096 - v8;
    v24 = v9;
    v10 = sub_4EBDC0(v9 + 13);
    *(uint32_t *)(v10 + 4) = v24;
    *(uint32_t *)(v10 + 8) = 0;
    dest = (char *)(v10 + 12);
LABEL_13:
    v27 = v10;
    memcpy(dest, s, n);
    v10 = v27;
    goto LABEL_14;
  }
LABEL_29:
  *a1 = v34;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_D89BF0  (binary VA: 0xd89bf0)
// Original: sub_D89BF0
// ----------------------------------------------------------------------------
uint8_t * sub_D89BF0()
{
  uint8_t *result;

  sub_1900D70(&unk_20E04A0);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20E04A0, &unk_20D1280);
  dword_20E04A4 = 1056964608;
  dword_20E04A8 = 1056964608;
  dword_20E04AC = 1056964608;
  glitch::collada::detail::ISceneNodeAnimatorChannelType::CompatibilityTable = (uintptr_t)glitch::collada::detail::constructCompatibilityTable();
  glf::SpinLock::Construct((glf::SpinLock::Self *)&glitch::collada::detail::ISkinTechnique::ResFileSharedContentLock);
  __cxa_atexit(
    (void (*)(void *))glf::SpinLock::Destroy,
    &glitch::collada::detail::ISkinTechnique::ResFileSharedContentLock,
    &unk_20D1280);
  glitch::collada::CAnimationTrackEx::Construct(
    (int)(uintptr_t)(glitch::collada::animation_track::CFloatEx::s_Instance),
    6u,
    1u);
  glitch::collada::animation_track::CFloatEx::s_Instance[0] = ((uint32_t)(uintptr_t)&off_2079A08);
  __cxa_atexit(
    (void (*)(void *))glitch::collada::animation_track::CFloatEx::Destroy,
    glitch::collada::animation_track::CFloatEx::s_Instance,
    &unk_20D1280);
  glitch::collada::CAnimationTrackEx::Construct(
    (int)(uintptr_t)(glitch::collada::animation_track::CTextureTransformEx::Instance),
    6u,
    5u);
  glitch::collada::animation_track::CTextureTransformEx::Instance[0] = ((uint32_t)(uintptr_t)&off_2077EC8);
  __cxa_atexit(
    (void (*)(void *))glitch::collada::animation_track::CTextureTransformEx::Destroy,
    glitch::collada::animation_track::CTextureTransformEx::Instance,
    &unk_20D1280);
  glitch::collada::CAnimationTrackEx::Construct(
    (int)(uintptr_t)(glitch::collada::animation_track::CVector3dEx::s_Instance),
    6u,
    3u);
  glitch::collada::animation_track::CVector3dEx::s_Instance[0] = ((uint32_t)(uintptr_t)&off_2079A88);
  __cxa_atexit(
    (void (*)(void *))glitch::collada::animation_track::CVector3dEx::Destroy,
    glitch::collada::animation_track::CVector3dEx::s_Instance,
    &unk_20D1280);
  glitch::collada::CAnimationTrackEx::Construct(
    (int)(uintptr_t)(glitch::collada::animation_track::CVisibilityEx::s_Instance),
    4u,
    1u);
  glitch::collada::animation_track::CVisibilityEx::s_Instance[0] = ((uint32_t)(uintptr_t)&off_2079B08);
  __cxa_atexit(
    (void (*)(void *))glitch::collada::animation_track::CVisibilityEx::Destroy,
    glitch::collada::animation_track::CVisibilityEx::s_Instance,
    &unk_20D1280);
  glitch::collada::CAnimationTrackEx::Construct(
    (int)(uintptr_t)(glitch::collada::animation_track::CWeightEx::s_Instance),
    6u,
    1u);
  glitch::collada::animation_track::CWeightEx::s_Instance[0] = ((uint32_t)(uintptr_t)&off_2079B88);
  __cxa_atexit(
    (void (*)(void *))glitch::collada::animation_track::CWeightEx::Destroy,
    glitch::collada::animation_track::CWeightEx::s_Instance,
    &unk_20D1280);
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  glitch::collada::IParametricController::EPSILON_NEAR_ZERO = 927465472;
  if ( g4_guard_83b5c90d56[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_933df89ab5) = (uintptr_t)(1);
    boost::detail::sp_typeid_<boost::_bi::bind_t<void,boost::_mfi::mf2<void,glitch::collada::CAnimationGraph::Self,glitch::collada::CSceneNodeAnimatorSet::Self *,int>,boost::_bi::list3<boost::_bi::value<glitch::collada::CAnimationGraph::Self*>,boost::_bi::value<glitch::collada::CSceneNodeAnimatorSet::Self *>,boost::arg<1>>>>::ti_ = (void *)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::_bi::bind_t<void, boost::_mfi::mf2<void, glitch::collada::CAnimationGraph::Self, glitch::collada::CSceneNodeAnimatorSet::Self*, int>, boost::_bi::list3<boost::_bi::value<glitch::collada::CAnimationGraph::Self*>, boost::_bi::value<glitch::collada::CSceneNodeAnimatorSet::Self*>, boost::arg<1> > >]");
  }

  if ( g4_guard_53d6e49e71[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_841264bb56) = (uintptr_t)(1);
    boost::detail::sp_typeid_<boost::_bi::bind_t<void,boost::_mfi::mf2<void,glitch::collada::CSceneNodeAnimatorBlenderBase::Self,int,float>,boost::_bi::list3<boost::_bi::value<glitch::collada::CSceneNodeAnimatorBlender::Self *>,boost::_bi::value<int>,boost::arg<1>>>>::ti_ = (void *)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::_bi::bind_t<void, boost::_mfi::mf2<void, glitch::collada::CSceneNodeAnimatorBlenderBase::Self, int, float>, boost::_bi::list3<boost::_bi::value<glitch::collada::CSceneNodeAnimatorBlender*>, boost::_bi::value<int>, boost::arg<1> > >]");
  }
  if ( g4_guard_3420c1cd04[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_e411eb98ee) = (uintptr_t)(1);
    boost::detail::sp_typeid_<boost::_bi::bind_t<void,boost::_mfi::mf2<void,glitch::collada::CSceneNodeAnimatorSynchronizedBlender::Self,int,float>,boost::_bi::list3<boost::_bi::value<glitch::collada::CSceneNodeAnimatorSynchronizedBlender::Self*>,boost::_bi::value<int>,boost::arg<1>>>>::ti_ = (void *)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::_bi::bind_t<void, boost::_mfi::mf2<void, glitch::collada::CSceneNodeAnimatorSynchronizedBlender::Self, int, float>, boost::_bi::list3<boost::_bi::value<glitch::collada::CSceneNodeAnimatorSynchronizedBlender*>, boost::_bi::value<int>, boost::arg<1> > >]");
  }
  if ( g4_guard_ec433c039b[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_04bf169a26) = (uintptr_t)(1);
    boost::detail::sp_typeid_<boost::_bi::bind_t<void,boost::_mfi::mf3<void,glitch::collada::CAnimationGraph::Self,glitch::collada::CSceneNodeAnimatorSynchronizedBlender::Self *,int,int>,boost::_bi::list4<boost::_bi::value<glitch::collada::CAnimationGraph::Self*>,boost::_bi::value<glitch::collada::CSceneNodeAnimatorSynchronizedBlender::Self *>,boost::_bi::value<int>,boost::arg<1>>>>::ti_ = (void *)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::_bi::bind_t<void, boost::_mfi::mf3<void, glitch::collada::CAnimationGraph::Self, glitch::collada::CSceneNodeAnimatorSynchronizedBlender*, int, int>, boost::_bi::list4<boost::_bi::value<glitch::collada::CAnimationGraph::Self*>, boost::_bi::value<glitch::collada::CSceneNodeAnimatorSynchronizedBlender*>, boost::_bi::value<int>, boost::arg<1> > >]");
  }
  if ( g4_guard_412debfe5f[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_412debfe5f) = (uintptr_t)(1);
    boost::detail::sp_typeid_<boost::_bi::bind_t<void,boost::_mfi::mf2<void,glitch::collada::CAnimationGraph::Self,int,glitch::core::vector3d<float> const&>,boost::_bi::list3<boost::_bi::value<glitch::collada::CAnimationGraph::Self*>,boost::_bi::value<unsigned short>,boost::arg<1>>>>::ti_ = (void *)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::_bi::bind_t<void, boost::_mfi::mf2<void, glitch::collada::CAnimationGraph::Self, int, const glitch::core::vector3d<float>&>, boost::_bi::list3<boost::_bi::value<glitch::collada::CAnimationGraph::Self*>, boost::_bi::value<short unsigned int>, boost::arg<1> > >]");
  }
  if ( g4_guard_8bf78cbc93[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_8bf78cbc93) = (uintptr_t)(1);
    boost::detail::sp_typeid_<boost::_bi::bind_t<void,boost::_mfi::mf2<void,glitch::collada::CAnimationGraph::Self,int,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&>,boost::_bi::list3<boost::_bi::value<glitch::collada::CAnimationGraph::Self*>,boost::_bi::value<unsigned short>,boost::arg<1>>>>::ti_ = (void *)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::_bi::bind_t<void, boost::_mfi::mf2<void, glitch::collada::CAnimationGraph::Self, int, const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char> >&>, boost::_bi::list3<boost::_bi::value<glitch::collada::CAnimationGraph::Self*>, boost::_bi::value<short unsigned int>, boost::arg<1> > >]");
  }
  if ( g4_guard_f4ba11c0f7[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_5117fefee1) = (uintptr_t)(1);
    boost::detail::sp_typeid_<boost::_bi::bind_t<void,boost::_mfi::mf2<void,glitch::collada::CParametricControllerBlender::Self,int,float>,boost::_bi::list3<boost::_bi::value<glitch::collada::CParametricControllerBlender::Self*>,boost::_bi::value<int>,boost::arg<1>>>>::ti_ = (void *)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::_bi::bind_t<void, boost::_mfi::mf2<void, glitch::collada::CParametricControllerBlender::Self, int, float>, boost::_bi::list3<boost::_bi::value<glitch::collada::CParametricControllerBlender*>, boost::_bi::value<int>, boost::arg<1> > >]");
  }
  result = (uint8_t *)(g4_guard_bb779befaf);
  if ( g4_guard_55221c00ad[0] == 0 )
  {
    g4_guard_55221c00ad[0] = 1;
    boost::detail::sp_typeid_<boost::_bi::bind_t<void,boost::_mfi::mf2<void,glitch::collada::CParametricControllerBlender::Self,int,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&>,boost::_bi::list3<boost::_bi::value<glitch::collada::CParametricControllerBlender::Self*>,boost::_bi::value<int>,boost::arg<1>>>>::ti_ = (void *)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::_bi::bind_t<void, boost::_mfi::mf2<void, glitch::collada::CParametricControllerBlender::Self, int, const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char> >&>, boost::_bi::list3<boost::_bi::value<glitch::collada::CParametricControllerBlender*>, boost::_bi::value<int>, boost::arg<1> > >]");
    return (uint8_t *)(boost::detail::sp_typeid_<boost::_bi::bind_t<void,boost::_mfi::mf2<void,glitch::collada::CParametricControllerBlender::Self,int,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&>,boost::_bi::list3<boost::_bi::value<glitch::collada::CParametricControllerBlender::Self*>,boost::_bi::value<int>,boost::arg<1>>>>::ti_);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_D89ED0  (binary VA: 0xd89ed0)
// Original: sub_D89ED0
// ----------------------------------------------------------------------------
uint8_t * sub_D89ED0(uint8_t *a1, void (*a2)(const char *))
{
  uint8_t v3;
  bool v4; // si
  uint8_t *result;
  uint8_t i;

  v3 = *a1;
  if ( v3 != 0 )
  {
    v4 = false;
    if ( v3 != 0xFF )
      v4 = (*(uint8_t *)(ctype_ + v3 + 1) & 3) != 0;
    if ( v3 == 95 || v4 )
    {
      result = a1 + 1;
      for ( i = a1[1]; i != 0xFF && (*(uint8_t *)(ctype_ + i + 1) & 7) != 0 || i == 95; i = *result )
        ++result;
    }
    else
    {
      a2("invalid identifier");
      return nullptr;
    }
  }
  else
  {
    a2("unexpected end-of-file when parsing macro arguments");
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D8AB70  (binary VA: 0xd8ab70)
// Original: sub_D8AB70
// ----------------------------------------------------------------------------
uint32_t * sub_D8AB70(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_204AB80);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_D8AB90  (binary VA: 0xd8ab90)
// Original: sub_D8AB90
// ----------------------------------------------------------------------------
uint32_t * sub_D8AB90(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_204AB80);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_D8ABF0  (binary VA: 0xd8abf0)
// Original: sub_D8ABF0
// ----------------------------------------------------------------------------
void sub_D8ABF0(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_204AB80);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_D8AC20  (binary VA: 0xd8ac20)
// Original: sub_D8AC20
// ----------------------------------------------------------------------------
void sub_D8AC20(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_204AB80);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_D8AD40  (binary VA: 0xd8ad40)
// Original: sub_D8AD40
// ----------------------------------------------------------------------------
void sub_D8AD40(glf::Task::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20313A0);
  glf::Task::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_D8AD70  (binary VA: 0xd8ad70)
// Original: sub_D8AD70
// ----------------------------------------------------------------------------
void sub_D8AD70(int a1)
{
  glDeleteTextures(1, (const GLuint *)(a1 + 36));
}

// ----------------------------------------------------------------------------
// Function: sub_D8ADA0  (binary VA: 0xd8ada0)
// Original: sub_D8ADA0
// ----------------------------------------------------------------------------
int sub_D8ADA0(int a1)
{
  return glitch::video::ITexture::bind(*(glitch::video::ITexture::Self **)(a1 + 36), *(uint32_t *)(a1 + 40), 0);
}

// ----------------------------------------------------------------------------
// Function: sub_D8ADE0  (binary VA: 0xd8ade0)
// Original: sub_D8ADE0
// ----------------------------------------------------------------------------
int sub_D8ADE0(int a1)
{
  return glitch::os::Printer::log(a1, 3);
}

// ----------------------------------------------------------------------------
// Function: sub_D8AE10  (binary VA: 0xd8ae10)
// Original: sub_D8AE10
// ----------------------------------------------------------------------------
int sub_D8AE10(int a1, size_t a2)
{
  int v3;

  return glitch::core::allocProcessBuffer(a2, v3);
}

// ----------------------------------------------------------------------------
// Function: sub_D8AE80  (binary VA: 0xd8ae80)
// Original: sub_D8AE80
// ----------------------------------------------------------------------------
int sub_D8AE80(int a1)
{
  return glitch::video::IBuffer::bind(*(glitch::video::IBuffer::Self **)(a1 + 36), *(uint32_t *)(a1 + 40), 0);
}

// ----------------------------------------------------------------------------
// Function: sub_D8B1F0  (binary VA: 0xd8b1f0)
// Original: sub_D8B1F0
// ----------------------------------------------------------------------------
int sub_D8B1F0(uint32_t *a1, int a2, int a3, int a4, uint8_t a5)
{
  int v5;
  int v6;
  void *v8;
  void *v9;

  v5 = glitch::core::allocProcessBuffer(0x18u, (int)(uintptr_t)(v8));
  if ( v5 != -8 )
  {
    *(uint32_t *)(v5 + 16) = 0;
    *(uint32_t *)(v5 + 8) = a2;
    *(uint32_t *)(v5 + 12) = a3;
    *(uint8_t *)(v5 + 20) = 0;
  }
  sub_1901920(v5, a1);
  v6 = a1[1];
  if ( *(uint32_t *)(v6 + 16) != 0 && *(uint8_t *)(v6 + 20) != 0 )
    glitch::core::releaseProcessBuffer(*(glitch::core::Self **)(v6 + 16), v9);
  *(uint32_t *)(v6 + 16) = a4;
  *(uint8_t *)(v6 + 20) = a5;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_D8C010  (binary VA: 0xd8c010)
// Original: sub_D8C010
// ----------------------------------------------------------------------------
size_t sub_D8C010(int *a1, uint32_t *a2)
{
  char *src;
  int v4;
  size_t result;
  int v6;
  unsigned int v7;
  uint32_t *v8;
  int v9;
  char *v10;
  uint32_t *v11;
  char *v12;
  char *v13;
  uint32_t *v14;
  int v15;
  unsigned int v17;
  int v18;
  size_t v19;

  src = (char *)a1[1];
  if ( src == (char *)a1[2] )
  {
    v7 = (int)(uintptr_t)(&src[-*a1]) >> 2;
    v19 = 4;
    if ( v7 != 0 )
    {
      v19 = 0xFFFFFFFC;
      if ( v7 <= 2 * v7 )
      {
        v15 = 8 * v7;
        if ( 2 * v7 > 0x3FFFFFFF )
          v15 = -4;
        v19 = v15;
      }
    }
    v18 = sub_4EBDC0(v19);
    v17 = v18 + 4;
    v8 = (uint32_t *)(v18 + 4 * v7);
    if ( v8 != nullptr )
      *v8 = *a2;
    v9 = *a1;
    if ( src != (char *)*a1 )
    {
      v10 = (char *)*a1;
      v11 = (uint32_t *)v18;
      do
      {
        if ( v11 != nullptr )
          *v11 = *(uint32_t *)v10;
        v10 += 4;
        ++v11;
      }
      while ( src != v10 );
      v17 = v18 + 4 * ((unsigned int)(uintptr_t)(&src[-v9 - 4]) >> 2) + 8;
    }
    v12 = (char *)a1[1];
    if ( src != v12 )
    {
      v13 = src;
      v14 = (uint32_t *)v17;
      do
      {
        if ( v14 != nullptr )
          *v14 = *(uint32_t *)v13;
        v13 += 4;
        ++v14;
      }
      while ( v12 != v13 );
      v17 += 4 * ((unsigned int)(v12 - (src + 4)) >> 2) + 4;
    }
    if ( *a1 != 0 )
      gll_operator_delete_arr(*a1);
    *a1 = v18;
    a1[1] = v17;
    a1[2] = v19 + v18;
    return v19 + v18;
  }
  else
  {
    v4 = 0;
    if ( src != nullptr )
    {
      *(uint32_t *)src = *((uint32_t *)src - 1);
      v4 = a1[1];
    }
    a1[1] = v4 + 4;
    result = (v4 - 4 - (int)(uintptr_t)(src)) >> 2;
    v6 = *a2;
    if ( result != 0 )
      result = (size_t)memmove((void *)(v4 - 4 * result), src, 4 * result);
    *(uint32_t *)src = v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D8C1A0  (binary VA: 0xd8c1a0)
// Original: sub_D8C1A0
// ----------------------------------------------------------------------------
int sub_D8C1A0(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = a1 + *(uint32_t *)(a1 + 8) + 8;
  v4 = a2 + *(uint32_t *)(a2 + 4) + 4 + 8 * *(uint32_t *)(a1 + *(uint32_t *)(a1 + 8) + 32);
  return *(uint32_t *)(v4 + 4) + v4 + *(uint16_t *)(v3 + 28) + a3 * *(uint16_t *)(v3 + 30) + 4;
}

// ----------------------------------------------------------------------------
// Function: sub_D8C1D0  (binary VA: 0xd8c1d0)
// Original: sub_D8C1D0
// ----------------------------------------------------------------------------
void sub_D8C1D0(glf::Task::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20313A0);
  glf::Task::Destroy(a1);
  glf::Task::opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_D8C210  (binary VA: 0xd8c210)
// Original: sub_D8C210
// ----------------------------------------------------------------------------
int sub_D8C210(int a1)
{
  int v2;

  v2 = a1 + 52;
  sub_1900810(a1 + 52);
  *(uint32_t *)(a1 + 164) = 0;
  *(uint8_t *)(a1 + 168) = 0;
  *(uint8_t *)(a1 + 169) = 0;
  *(uint32_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)(a1 + 180) = 0;
  *(uint32_t *)(a1 + 184) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_204C04C);
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&off_204C060);
  *(uint32_t *)(a1 + 4) = 0;
  sub_19119D0(v2, 0);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_204C08C);
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(&off_204C0A0);
  sub_19119D0(v2, 0);
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_204BF8C);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_204BFA0);
  *(uint32_t *)(a1 + 52) = ((uint32_t)(uintptr_t)&off_204BFB4);
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(a1 + 40);
  *(uint32_t *)(a1 + 44) = 24;
  *(uint32_t *)(a1 + 12) = ((uint32_t)(uintptr_t)&off_204BFC8);
  *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(byte_20D3E78);
  return sub_19119D0(v2, a1 + 12);
}

// ----------------------------------------------------------------------------
// Function: sub_D8C370  (binary VA: 0xd8c370)
// Original: sub_D8C370
// ----------------------------------------------------------------------------
int sub_D8C370(int a1, int *a2, int a3, int *a4)
{
  int v5;
  int v6;
  int v7;
  int v8;
  const char *v9;
  int v10;
  int result;
  int v12;
  int v13;
  const char *v14;
  int v15;
  int v16;
  int v17;
  const char *v18;
  const char *v19;
  int StringsInternal;
  int v21;
  unsigned int v22;
  bool v23; // cc
  const char *v24;
  const char *v25;
  int v26;
  const char *v27;
  int v28;
  int v29;
  int v30;
  int v31;
  bool v32;

  *a2 = *a4;
  a2[1] = a4[1];
  a2[2] = a4[2];
  a2[3] = a4[3];
  v5 = a4[4];
  a2[4] = v5;
  v6 = a4[5];
  a2[5] = v6;
  v31 = a4[6];
  a2[6] = v31;
  *((uint16_t *)a2 + 14) = *((uint16_t *)a4 + 14);
  *((uint8_t *)a2 + 30) = *((uint8_t *)a4 + 30);
  v32 = false;
  if ( (v5 & (v5 - 1)) == 0 && (v6 & (v6 - 1)) == 0 )
  {
    v32 = true;
    if ( *a2 == 2 )
      v32 = ((v31 - 1) & v31) == 0;
  }
  if ( (*(uint8_t *)(a1 + 2861) & 1) != 0 )
  {
    v7 = *a2;
    if ( *a2 != 1 && v7 != 4 && !v32 )
    {
      v8 = a2[6];
      v9 = "unknown";
      v10 = a2[5];
      if ( (uint16_t)v7 != 255 )
        v9 = *(const char **)(glitch::video::getStringsInternal(0) + 4 * v7);
      glitch::os::Printer::logf(3, (int)(uintptr_t)("creating %s: %s NPOT (%dx%dx%u) texture not supported"), a3, v9, v5, v10, v8);
      return 0;
    }
  }
  v12 = a2[1];
  v13 = *(uint32_t *)&glitch::video::pixel_format::detail::PFDTable[40 * v12];
  if ( (v13 & 0x30) != 0 && *a2 != 1 && *a2 != 3 )
  {
    v14 = "unknown";
    if ( (uint16_t)v12 != 54 )
      v14 = *(const char **)(glitch::video::getStringsInternal(0) + 4 * v12);
    glitch::os::Printer::logf(3, (int)(uintptr_t)("creating %s: %s formats can only be used with 2D textures"), a3, v14);
    return 0;
  }
  if ( *((uint8_t *)a2 + 29) == 0 || (v13 & 0x10) != 0 )
    v15 = *(uint16_t *)(a1 + 24 * v12 + 1504);
  else
    v15 = *(uint16_t *)(a1 + 24 * v12 + 1506);
  a2[1] = v15;
  v16 = a4[1];
  if ( v15 == v16 )
    goto LABEL_33;
  if ( v15 != 54 )
  {
    v17 = *(uint32_t *)(glitch::video::getStringsInternal(0) + 4 * v15);
    v18 = "render target";
    if ( *((uint8_t *)a2 + 29) == 0 )
      v18 = "texture";
    v19 = "unknown";
    if ( (uint16_t)a4[1] != 54 )
    {
      v28 = a4[1];
      v30 = v17;
      StringsInternal = (int)(uintptr_t)(glitch::video::getStringsInternal(0));
      v17 = v30;
      v19 = *(const char **)(StringsInternal + 4 * v28);
    }
    glitch::os::Printer::logf(
      2,
      (int)(uintptr_t)("creating %s: %s is not a supported %s pixel format; using %s instead"),
      a3,
      v19,
      v18,
      v17);
    if ( (unsigned int)(a4[1] - 23) <= 7 )
    {
      v21 = 0;
      v22 = a2[1] - 23;
      a2[2] = 0;
      v23 = v22 <= 7;
      result = 1;
      if ( !v23 )
      {
LABEL_27:
        if ( v21 != 0 )
        {
          v24 = "unknown";
          if ( (uint16_t)v21 != 255 )
            v24 = *(const char **)(glitch::video::getStringsInternal(0) + 4 * v21);
          glitch::os::Printer::logf(2, (int)(uintptr_t)("creating %s: %s layout not supported (will convert to linear)"), a3, v24);
          a2[2] = 0;
          return 1;
        }
        return result;
      }
      goto LABEL_37;
    }
LABEL_33:
    v21 = a2[2];
    if ( v21 == 2 )
    {
      v26 = (int)(uintptr_t)(glitch::video::getStringsInternal(0));
      glitch::os::Printer::logf(3, (int)(uintptr_t)("creating %s: %s layout not supported"), a3, *(uint32_t *)(v26 + 8));
      return 0;
    }
    if ( v21 == 3 && !v32 )
    {
      glitch::os::Printer::logf(
        3,
        (int)(uintptr_t)("creating %s: swizzled textures must have power-of-two size (provided: %dx%dx%u)"),
        a3,
        a2[4],
        a2[5],
        a2[6]);
      return 0;
    }
    result = 1;
    if ( (unsigned int)(a2[1] - 23) > 7 )
      goto LABEL_27;
LABEL_37:
    if ( v21 != 3 )
    {
      v25 = "unknown";
      if ( (uint16_t)v21 != 255 )
        v25 = *(const char **)(glitch::video::getStringsInternal(0) + 4 * v21);
      glitch::os::Printer::logf(
        2,
        (int)(uintptr_t)("creating %s: Compressed PVR texture should be loaded as swizzled (is currently %s)"),
        a3,
        v25);
      a2[2] = 3;
      return 1;
    }
    return result;
  }
  v27 = "unknown";
  if ( (uint16_t)v16 != 54 )
  {
    v29 = a4[1];
    v27 = *(const char **)(glitch::video::getStringsInternal(0) + 4 * v29);
  }
  glitch::os::Printer::logf(3, (int)(uintptr_t)("creating %s: pixel format %s not supported"), a3, v27);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_D8C7A0  (binary VA: 0xd8c7a0)
// Original: sub_D8C7A0
// ----------------------------------------------------------------------------
uint32_t * sub_D8C7A0(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  char *dest;
  unsigned int v10;
  const void *src;
  int v12;
  int v13;
  int v15;
  char v18;

  v18 = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v18 = *a5 < *(uint32_t *)(a4 + 16);
  v5 = opNew(0x20u);
  v7 = (uint32_t *)v5;
  if ( v5 != -16 )
  {
    v8 = 0;
    *(uint32_t *)(v5 + 16) = *a5;
    dest = nullptr;
    v10 = (a5[2] - a5[1]) >> 2;
    v7[5] = 0;
    v7[6] = 0;
    v7[7] = 0;
    if ( v10 != 0 )
    {
      if ( v10 > 0x3FFFFFFF )
        sub_18FFEE0(v6, 0);
      v15 = 4 * v10;
      dest = (char *)opNew(4 * v10);
      v8 = v15;
    }
    v7[5] = (uint32_t)(uintptr_t)(dest);
    v7[6] = (uint32_t)(uintptr_t)(dest);
    v7[7] = (uint32_t)(uintptr_t)(&dest[v8]);
    src = (const void *)a5[1];
    v12 = 0;
    v13 = (a5[2] - (int)(uintptr_t)(src)) >> 2;
    if ( v13 != 0 )
    {
      v12 = 4 * v13;
      memmove(dest, src, 4 * v13);
    }
    v7[6] = (uint32_t)(uintptr_t)(&dest[v12]);
  }
  sub_1904970(v18, v7, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = (uint32_t)(uintptr_t)(v7);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_D8C8F0  (binary VA: 0xd8c8f0)
// Original: sub_D8C8F0
// ----------------------------------------------------------------------------
int sub_D8C8F0(int a1, int a2, unsigned int *a3)
{
  uint32_t *v4;
  unsigned int v5;
  uint32_t *v6;
  char v7; // bp
  unsigned int v8;
  int v10;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);

  v4 = *(uint32_t **)(a2 + 8);
  if ( v4 == nullptr )
  {
    v4 = (uint32_t *)(a2 + 4);
    goto LABEL_11;
  }
  v5 = *a3;
  while ( 1 )
  {
    v8 = v4[4];
    if ( v8 <= v5 )
      break;
    v6 = (uint32_t *)v4[2];
    v7 = 1;
    if ( v6 == nullptr )
      goto LABEL_7;
LABEL_4:
    v4 = v6;
  }
  v6 = (uint32_t *)v4[3];
  v7 = 0;
  if ( v6 != nullptr )
    goto LABEL_4;
LABEL_7:
  v12 = (int)(uintptr_t)(v4);
  if ( v7 == 0 )
  {
    if ( v5 <= v8 )
      goto LABEL_9;
LABEL_13:
    sub_D8C7A0(v13, a2, 0, v12, a3);
LABEL_14:
    v10 = v13[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v10;
    return a1;
  }
LABEL_11:
  if ( *(uint32_t **)(a2 + 12) == v4 )
  {
    sub_D8C7A0(v13, a2, 0, (int)(uintptr_t)(v4), a3);
    goto LABEL_14;
  }
  v12 = (int)(uintptr_t)(v4);
  v4 = (uint32_t *)sub_19048F0(v4);
  if ( *a3 > v4[4] )
    goto LABEL_13;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_D8D4D0  (binary VA: 0xd8d4d0)
// Original: sub_D8D4D0
// ----------------------------------------------------------------------------
uint32_t * sub_D8D4D0(uint32_t *a1, int a2, void **a3)
{
  int v3;
  size_t v4;
  size_t v5;
  size_t n;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  int v12;
  int v13;
  void *s2;
  int v16;
  int v17;

  v3 = *(uint32_t *)(a2 + 8);
  v17 = a2 + 4;
  if ( v3 != 0 )
  {
    v16 = a2 + 4;
    s2 = *a3;
    v4 = *((uint32_t *)*a3 - 3);
    do
    {
      while ( 1 )
      {
        v5 = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
        n = v5;
        if ( v4 <= v5 )
          n = v4;
        v7 = v5 - v4;
        v8 = memcmp(*(const void **)(v3 + 16), s2, n);
        if ( v8 != 0 )
          v7 = v8;
        if ( v7 < 0 )
          break;
        v16 = v3;
        v3 = *(uint32_t *)(v3 + 8);
        if ( v3 == 0 )
          goto LABEL_10;
      }
      v3 = *(uint32_t *)(v3 + 12);
    }
    while ( v3 != 0 );
LABEL_10:
    if ( v17 != v16 )
    {
      v9 = *(uint32_t *)(*(uint32_t *)(v16 + 16) - 12);
      v10 = v9;
      if ( v4 <= v9 )
        v10 = v4;
      v11 = v4 - v9;
      v12 = memcmp(s2, *(const void **)(v16 + 16), v10);
      v13 = v16;
      if ( v12 == 0 )
        v12 = v11;
      if ( v12 < 0 )
        v13 = v17;
      v17 = v13;
    }
  }
  *a1 = v17;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_D8D5B0  (binary VA: 0xd8d5b0)
// Original: sub_D8D5B0
// ----------------------------------------------------------------------------
int * sub_D8D5B0(uint32_t *a1, unsigned int a2)
{
  uint8_t *v2;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int *v7;
  int v8;
  size_t n;
  int *result;
  int *v11;
  unsigned int v12;
  uint8_t *src;

  v2 = (uint8_t *)*a1;
  v4 = *(uint32_t *)(*a1 - 12);
  v5 = *(uint32_t *)(*a1 - 8);
  if ( a2 >= *((uint32_t *)v2 - 3) )
    v4 = a2;
  if ( v4 > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  if ( v5 < v4 )
  {
    if ( v4 < 2 * v5 )
      v4 = 2 * v5;
    if ( v4 + 29 > 0x1000 && v4 > v5 )
    {
      v12 = v4 + 4096 - (((uint16_t)v4 + 29) & 0xFFF);
      v4 = 1073741820;
      if ( v12 <= 0x3FFFFFFC )
        v4 = v12;
    }
  }
  src = v2;
  v6 = sub_4EBDC0(v4 + 13);
  *(uint32_t *)(v6 + 4) = v4;
  *(uint32_t *)(v6 + 8) = 0;
  v7 = (int *)v6;
  v8 = 0;
  n = *((uint32_t *)src - 3);
  if ( n != 0 )
  {
    if ( n == 1 )
      *((uint8_t *)v7 + 12) = *src;
    else
      memcpy(v7 + 3, src, n);
    v8 = *((uint32_t *)src - 3);
  }
  result = (int *)(&dword_20D3E6C);
  if ( v7 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    v7[2] = 0;
    *v7 = v8;
    *((uint8_t *)v7 + v8 + 12) = 0;
  }
  v11 = (int *)(*a1 - 12);
  if ( v11 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    result = (int *)__sync_fetch_and_add((volatile int32_t *)(*a1 - 4), 0xFFFFFFFF);
    if ( (int)(uintptr_t)(result) <= 0 )
      result = (int *)gll_operator_delete_arr((int)(uintptr_t)(v11));
  }
  *a1 = (uint32_t)(uintptr_t)(v7 + 3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D8D710  (binary VA: 0xd8d710)
// Original: sub_D8D710
// ----------------------------------------------------------------------------
unsigned int sub_D8D710(unsigned int *a1, uint8_t *a2, size_t n)
{
  unsigned int v4;
  uint8_t *src;
  int v6;
  unsigned int v7;
  uint8_t *dest;
  unsigned int result;
  uint8_t *v10;
  unsigned int v11;

  v4 = *a1;
  src = a2;
  v6 = *(uint32_t *)(v4 - 12);
  v7 = *(uint32_t *)(v4 - 8);
  v11 = v6 + n;
  if ( v6 + n <= v7 && *(int *)(v4 - 4) <= 0 )
    goto LABEL_17;
  if ( v4 <= (unsigned int)(uintptr_t)(a2) )
  {
    dest = (uint8_t *)(v4 + v6);
    if ( (unsigned int)(uintptr_t)(src) <= v4 + v6 )
    {
      v10 = &src[-v4];
      if ( v11 == v7 && *(int *)(v4 - 4) <= 0 )
      {
        src = &v10[v4];
      }
      else
      {
        sub_D8D5B0(a1, v11);
        src = &v10[*a1];
        dest = (uint8_t *)(*a1 + *(uint32_t *)(*a1 - 12));
      }
      if ( n == 1 )
        goto LABEL_15;
LABEL_7:
      memcpy(dest, src, n);
      goto LABEL_8;
    }
  }
  if ( v11 == v7 && *(int *)(v4 - 4) <= 0 )
  {
LABEL_17:
    dest = (uint8_t *)(v4 + v6);
  }
  else
  {
    sub_D8D5B0(a1, v11);
    dest = (uint8_t *)(*(uint32_t *)(*a1 - 12) + *a1);
  }
  if ( n != 1 )
    goto LABEL_7;
LABEL_15:
  *dest = *src;
LABEL_8:
  result = *a1;
  if ( (int *)(*a1 - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    *(uint32_t *)(result - 4) = 0;
    *(uint32_t *)(result - 12) = v11;
    *(uint8_t *)(result + v11) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D8D830  (binary VA: 0xd8d830)
// Original: sub_D8D830
// ----------------------------------------------------------------------------
int sub_D8D830(int a1)
{
  unsigned int v1;
  unsigned int v3;
  unsigned int v4;
  int v5;
  size_t v6;

  v1 = *(uint32_t *)a1;
  v3 = *(uint32_t *)(a1 + 4);
  if ( v1 > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  if ( v1 > v3 && v1 < 2 * v3 )
    v1 = 2 * v3;
  if ( v1 + 29 > 0x1000 && v3 < v1 )
  {
    v4 = v1 + 4096 - (((uint16_t)v1 + 29) & 0xFFF);
    v1 = 1073741820;
    if ( v4 <= 0x3FFFFFFC )
      v1 = v4;
  }
  v5 = sub_4EBDC0(v1 + 13);
  *(uint32_t *)(v5 + 4) = v1;
  *(uint32_t *)(v5 + 8) = 0;
  v6 = 0;
  if ( *(uint32_t *)a1 != 0 )
  {
    if ( *(uint32_t *)a1 == 1 )
      *(uint8_t *)(v5 + 12) = *(uint8_t *)(a1 + 12);
    else
      memcpy((void *)(v5 + 12), (const void *)(a1 + 12), *(uint32_t *)a1);
    v6 = *(uint32_t *)a1;
  }
  if ( (int *)v5 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v5 + 8) = 0;
    *(uint32_t *)v5 = v6;
    *(uint8_t *)(v5 + v6 + 12) = 0;
  }
  return v5 + 12;
}

// ----------------------------------------------------------------------------
// Function: sub_D8D940  (binary VA: 0xd8d940)
// Original: sub_D8D940
// ----------------------------------------------------------------------------
char ** sub_D8D940(char **a1, const char *s)
{
  size_t v3;
  size_t n;
  unsigned int v5;
  int v6;
  int v7;
  char *v8;
  int v10;
  char *v11;

  if ( s == nullptr )
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v3 = strlen(s);
  if ( s == &s[v3] )
  {
    v8 = (char *)(uintptr_t)(byte_20D3E78);
    goto LABEL_12;
  }
  n = v3;
  if ( v3 > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  if ( v3 + 29 > 0x1000 && v3 != 0 )
  {
    v5 = v3 + 4096 - (((uint16_t)v3 + 29) & 0xFFF);
    v6 = 1073741820;
    if ( v5 <= 0x3FFFFFFC )
      v6 = v5;
    v10 = v6;
    v7 = sub_4EBDC0(v6 + 13);
    *(uint32_t *)(v7 + 4) = v10;
    *(uint32_t *)(v7 + 8) = 0;
    v8 = (char *)(v7 + 12);
    goto LABEL_9;
  }
  v7 = sub_4EBDC0(v3 + 13);
  *(uint32_t *)(v7 + 4) = n;
  *(uint32_t *)(v7 + 8) = 0;
  v8 = (char *)(v7 + 12);
  if ( n != 1 )
  {
LABEL_9:
    v11 = v8;
    memcpy(v8, s, n);
    v8 = v11;
    goto LABEL_10;
  }
  *(uint8_t *)(v7 + 12) = *s;
LABEL_10:
  if ( (int *)v7 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v7 + 8) = 0;
    *(uint32_t *)v7 = n;
    v8[n] = 0;
  }
LABEL_12:
  *a1 = v8;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_D8DAA0  (binary VA: 0xd8daa0)
// Original: sub_D8DAA0
// ----------------------------------------------------------------------------
int sub_D8DAA0(int *a1, int a2, int a3)
{
  int v3;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  int result;
  uint8_t *src;
  uint8_t *dest;
  size_t n;

  v3 = *a1;
  v5 = *(uint32_t *)(*a1 - 12);
  v6 = *(uint32_t *)(*a1 - 8);
  v7 = v5 + a3 - a2;
  n = v5 - a2;
  if ( v7 <= v6 && *(int *)(v3 - 4) <= 0 )
  {
    if ( a3 != a2 && n != 0 )
    {
      src = (uint8_t *)(v3 + a2);
      dest = (uint8_t *)(a3 + v3);
      if ( n == 1 )
        *dest = *src;
      else
        memmove(dest, src, n);
      v3 = *a1;
    }
  }
  else
  {
    if ( v7 > 0x3FFFFFFC )
      sub_1900180("basic_string::_S_create");
    v8 = v5 + a3 - a2;
    if ( v7 > v6 )
    {
      v8 = 2 * v6;
      if ( v7 >= 2 * v6 )
        v8 = v5 + a3 - a2;
    }
    if ( v8 + 29 > 0x1000 && v6 < v8 )
    {
      v9 = v8 + 4096 - (((uint16_t)v8 + 29) & 0xFFF);
      v8 = 1073741820;
      if ( v9 <= 0x3FFFFFFC )
        v8 = v9;
    }
    v10 = sub_4EBDC0(v8 + 13);
    *(uint32_t *)(v10 + 4) = v8;
    *(uint32_t *)(v10 + 8) = 0;
    v3 = v10 + 12;
    if ( n != 0 )
    {
      if ( n == 1 )
        *(uint8_t *)(v3 + a3) = *(uint8_t *)(*a1 + a2);
      else
        memcpy((void *)(v3 + a3), (const void *)(*a1 + a2), n);
    }
    v11 = *a1;
    if ( (int *)(*a1 - 12) != (int *)(uintptr_t)(&dword_20D3E6C
)      && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
    {
      gll_operator_delete_arr(v11 - 12);
    }
    *a1 = v3;
  }
  result = v3 - 12;
  if ( (int *)(v3 - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v3 - 4) = 0;
    *(uint32_t *)(v3 - 12) = v7;
    *(uint8_t *)(v3 + v7) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D8DC70  (binary VA: 0xd8dc70)
// Original: sub_D8DC70
// ----------------------------------------------------------------------------
uint32_t * sub_D8DC70(int a1)
{
  glf::TaskManager::Self *v2;
  uint32_t *result;
  bool v4;

  *(uint32_t *)(a1 + 32) = glf::task_detail::GrabGroup();
  v2 = (glf::TaskManager::Self *)dword_20D5400;
  if ( dword_20D5400 == 0 )
  {
    while ( __sync_val_compare_and_swap(&dword_20D5410, (int32_t)(uintptr_t)(v2), 1) != 0 )
      glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
    v2 = (glf::TaskManager::Self *)dword_20D5400;
    if ( dword_20D5400 == 0 )
    {
      v2 = (glf::TaskManager::Self *)opNew(0xE8u);
      glf::TaskManager::Construct(v2);
      _mm_mfence();
      dword_20D5400 = (int)(uintptr_t)(v2);
    }
    v4 = *((uint8_t *)v2 + 228) == 0;
    dword_20D5410 = 0;
    if ( !v4 )
      goto LABEL_3;
    return glf::TaskManager::Push(v2, (glf::Task::Self *)a1, true);
  }
  if ( *(uint8_t *)(dword_20D5400 + 228) == 0 )
    return glf::TaskManager::Push(v2, (glf::Task::Self *)a1, true);
LABEL_3:
  result = (uint32_t *)glf::Task::Start((glf::task_detail::Self **)a1);
  if ( *(uint8_t *)(a1 + 24) != 0 )
    return (uint32_t *)G4_VCALL<int>(a1, 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D8DD50  (binary VA: 0xd8dd50)
// Original: sub_D8DD50
// ----------------------------------------------------------------------------
int sub_D8DD50(int result, int a2, double *a3)
{
  float v3; // xmm3_4
  float v4; // xmm4_4
  __m128 v5;
  __m128 v6;
  __m128 v7;
  __m128 v8;
  __m128 v9;
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm7_4
  float v13; // xmm5_4
  float v14;
  unsigned int v15;
  float v16;
  float v17;

  v8 = _mm_xor_ps(g4_m128_u32(*(unsigned int *)(result + 16)), g4_m128_from<__m128>(0x80000000));
g4_m128_raw(v5) = *(unsigned int *)(result + 12);
  v3 = -*(float *)(result + 20);
  v4 = -*(float *)(result + 24);
  v6 = v5;
g4_m128_lane<float>(v5, 0) = (float)((float)((float)(g4_m128_lane<float>(v5, 0) * *(float *)(result + 28))
                                 - (float)(*(float *)result *g4_m128_lane<float>(v8, 0)))
                         - (float)(*(float *)(result + 4) * v3))
                 - (float)(*(float *)(result + 8) * v4);
g4_m128_lane<float>(v6, 0) = (float)((float)((float)(g4_m128_lane<float>(v6, 0) * v4) + (float)(*(float *)result * v3))
                         + (float)(*(float *)(result + 8) * *(float *)(result + 28)))
                 - (float)(*(float *)(result + 4) *g4_m128_lane<float>(v8, 0));
g4_m128_raw(v7) = *(unsigned int *)(result + 12);
g4_m128_lane<float>(v7, 0) = (float)((float)((float)(g4_m128_lane<float>(v7, 0) * v3) + (float)(*(float *)(result + 8) *g4_m128_lane<float>(v8, 0)))
                         + (float)(*(float *)(result + 4) * *(float *)(result + 28)))
                 - (float)(*(float *)result * v4);
g4_m128_lane<float>(v8, 0) = (float)((float)((float)(g4_m128_lane<float>(v8, 0) * *(float *)(result + 12))
                                 + (float)(v4 * *(float *)(result + 4)))
                         + (float)(*(float *)result * *(float *)(result + 28)))
                 - (float)(v3 * *(float *)(result + 8));
  if ( a2 == 4 )
  {
    v10 = (float)((float)((float)(*(float *)(result + 44) *g4_m128_lane<float>(v5, 0))
                        - (float)(*(float *)(result + 32) *g4_m128_lane<float>(v8, 0)))
                - (float)(*(float *)(result + 36) *g4_m128_lane<float>(v7, 0)))
        - (float)(*(float *)(result + 40) *g4_m128_lane<float>(v6, 0));
    *(float *)&v15 = (float)((float)((float)(*(float *)(result + 40) *g4_m128_lane<float>(v5, 0))
                                   + (float)(*(float *)(result + 44) *g4_m128_lane<float>(v6, 0)))
                           + (float)(*(float *)(result + 36) *g4_m128_lane<float>(v8, 0)))
                   - (float)(*(float *)(result + 32) *g4_m128_lane<float>(v7, 0));
    v11 = (float)((float)((float)(*(float *)(result + 44) *g4_m128_lane<float>(v7, 0))
                        + (float)(*(float *)(result + 36) *g4_m128_lane<float>(v5, 0)))
                + (float)(*(float *)(result + 32) *g4_m128_lane<float>(v6, 0)))
        - (float)(*(float *)(result + 40) *g4_m128_lane<float>(v8, 0));
    v12 = -*(float *)(result + 48);
    v14 = *(float *)(result + 60);
    v17 = -*(float *)(result + 52);
    v13 = (float)((float)((float)(g4_m128_lane<float>(v8, 0) * *(float *)(result + 44))
                        + (float)(g4_m128_lane<float>(v5, 0) * *(float *)(result + 32)))
                + (float)(g4_m128_lane<float>(v7, 0) * *(float *)(result + 40)))
        - (float)(g4_m128_lane<float>(v6, 0) * *(float *)(result + 36));
    v16 = -*(float *)(result + 56);
g4_m128_raw(v5) = LODWORD(v14);
g4_m128_raw(v6) = v15;
g4_m128_lane<float>(v5, 0) = (float)((float)((float)(v14 * v10) - (float)(v13 * v12)) - (float)(v17 * v11))
                   - (float)(*(float *)&v15 * v16);
g4_m128_lane<float>(v6, 0) = (float)((float)((float)(*(float *)&v15 * v14) + (float)(v16 * v10)) + (float)(v17 * v13))
                   - (float)(v11 * v12);
g4_m128_raw(v7) = LODWORD(v14);
g4_m128_lane<float>(v7, 0) = (float)((float)((float)(v14 * v11) + (float)(v17 * v10)) + (float)(*(float *)&v15 * v12))
                   - (float)(v16 * v13);
g4_m128_lane<float>(v8, 0) = (float)((float)((float)(v13 * v14) + (float)(v10 * v12)) + (float)(v11 * v16))
                   - (float)(*(float *)&v15 * v17);
  }
g4_m128_lane<uint64_t>(v9, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v8, v7), 0);
g4_m128_lane<uint64_t>(v9, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v6, v5), 0);
  _mm_storel_ps(a3, v9);
  _mm_storeh_ps(a3 + 1, v9);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D8E030  (binary VA: 0xd8e030)
// Original: sub_D8E030
// ----------------------------------------------------------------------------
int * sub_D8E030(int *a1, int *a2, char *s)
{
  int v3;
  char *src;
  int *v6;
  unsigned int n;
  int v8;
  char *v9;
  int v10;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;

  v3 = *a2;
  src = s;
  v6 = (int *)(v3 - 12);
  if ( *(int *)(v3 - 4) < 0 )
  {
    v3 = sub_D8D830((int)(uintptr_t)(v6));
  }
  else if ( v6 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    __sync_add_and_fetch((volatile int32_t *)(v3 - 4), 1u);
  }
  *a1 = v3;
  v12 = v3;
  n = strlen(s);
  if ( n != 0 )
  {
    v8 = *(uint32_t *)(v12 - 12);
    if ( n > 1073741820 - v8 )
      sub_1900180("basic_string::append");
    v13 = n + v8;
    v14 = *(uint32_t *)(v12 - 8);
    if ( n + v8 <= v14 && *(int *)(v12 - 4) <= 0 )
      goto LABEL_23;
    if ( (unsigned int)(uintptr_t)(s) >= v12 )
    {
      v9 = (char *)(v12 + v8);
      if ( (unsigned int)(uintptr_t)(s) <= v12 + v8 )
      {
        if ( v13 == v14 && *(int *)(v12 - 4) <= 0 )
        {
          src = s;
        }
        else
        {
          sub_D8D5B0(a1, v13);
          src = &s[*a1 - v12];
          v9 = (char *)(*a1 + *(uint32_t *)(*a1 - 12));
        }
        if ( n == 1 )
          goto LABEL_20;
        goto LABEL_12;
      }
    }
    if ( v13 == v14 && *(int *)(v12 - 4) <= 0 )
    {
LABEL_23:
      v9 = (char *)(v12 + v8);
    }
    else
    {
      sub_D8D5B0(a1, v13);
      v9 = (char *)(*(uint32_t *)(*a1 - 12) + *a1);
    }
    if ( n == 1 )
    {
LABEL_20:
      *v9 = *src;
LABEL_13:
      v10 = *a1;
      if ( (int *)(*a1 - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
      {
        *(uint32_t *)(v10 - 4) = 0;
        *(uint32_t *)(v10 - 12) = v13;
        *(uint8_t *)(v10 + v13) = 0;
      }
      return a1;
    }
LABEL_12:
    memcpy(v9, src, n);
    goto LABEL_13;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_D8E1C0  (binary VA: 0xd8e1c0)
// Original: sub_D8E1C0
// ----------------------------------------------------------------------------
int * sub_D8E1C0(int *a1, uint32_t *a2)
{
  char *v4;
  uint8_t *v5;
  uint8_t *v6;
  uint8_t *src;
  unsigned int v8;
  int v9;
  char *dest;
  size_t n;
  int *v12;
  int v14;
  int v15;
  int *v16;
  int *v17;
  size_t v18;
  size_t v19;
  size_t v20;
  int v21;
  char *v22;
  char *v23;
  char *v24;
  int *v25;
  char *v26;
  int v27;

  v4 = (char *)(uintptr_t)(byte_20D3E78);
  *a1 = (int)(uintptr_t)(byte_20D3E78);
  v5 = (uint8_t *)a2[8];
  if ( v5 != nullptr )
  {
    v6 = (uint8_t *)a2[6];
    src = (uint8_t *)a2[7];
    if ( v5 > v6 )
    {
      if ( v5 != src )
      {
        if ( src != nullptr )
        {
LABEL_6:
          v8 = v5 - src;
          if ( v8 > 0x3FFFFFFC )
            sub_1900180("basic_string::_S_create");
          if ( v8 + 29 > 0x1000 && v8 != 0 )
          {
            v9 = 1073741820;
            v18 = v8;
            if ( v8 + 4096 - (((uint16_t)v8 + 29) & 0xFFF) <= 0x3FFFFFFC )
              v9 = v8 + 4096 - (((uint16_t)v8 + 29) & 0xFFF);
            v21 = v9;
            v25 = (int *)sub_4EBDC0(v9 + 13);
            v25[1] = v21;
            v25[2] = 0;
            dest = (char *)(v25 + 3);
            n = v18;
          }
          else
          {
            v20 = v8;
            v14 = sub_4EBDC0(v8 + 13);
            n = v20;
            dest = (char *)(v14 + 12);
            v25 = (int *)v14;
            *(uint32_t *)(v14 + 4) = v20;
            *(uint32_t *)(v14 + 8) = 0;
            if ( v20 == 1 )
            {
              *(uint8_t *)(v14 + 12) = *src;
              goto LABEL_13;
            }
          }
LABEL_12:
          v22 = dest;
          v19 = n;
          memcpy(dest, src, n);
          n = v19;
          dest = v22;
LABEL_13:
          if ( v25 != (int *)(uintptr_t)(&dword_20D3E6C) )
          {
            v25[2] = 0;
            *v25 = n;
            dest[n] = 0;
          }
          v26 = (char *)*a1;
          v4 = (char *)*a1;
          goto LABEL_16;
        }
LABEL_26:
        sub_18FFFD0("basic_string::_S_construct null not valid");
      }
    }
    else if ( v6 != src )
    {
      if ( src != nullptr )
      {
        v5 = v6;
        goto LABEL_6;
      }
      if ( v6 == nullptr )
      {
        v25 = (int *)sub_4EBDC0(0xDu);
        v25[1] = 0;
        v25[2] = 0;
        dest = (char *)(v25 + 3);
        n = 0;
        goto LABEL_12;
      }
      goto LABEL_26;
    }
    v26 = (char *)(uintptr_t)(byte_20D3E78);
    dest = (char *)(uintptr_t)(byte_20D3E78);
LABEL_16:
    v12 = (int *)(dest - 12);
    v17 = (int *)(v4 - 12);
    if ( dest - 12 != v4 - 12 )
    {
      if ( *((int *)dest - 1) < 0 )
      {
        v23 = dest;
        v27 = sub_D8D830((int)(uintptr_t)(dest - 12));
        v26 = (char *)*a1;
        dest = v23;
        v17 = (int *)(*a1 - 12);
      }
      else if ( v12 == (int *)(uintptr_t)(&dword_20D3E6C) )
      {
        v27 = (int)(uintptr_t)(dest);
      }
      else
      {
        __sync_add_and_fetch((volatile int32_t *)dest - 1, 1u);
        v27 = (int)(uintptr_t)(dest);
        v26 = (char *)*a1;
        v17 = (int *)(*a1 - 12);
      }
      if ( v17 != (int *)(uintptr_t)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)v26 - 1, 0xFFFFFFFF) <= 0 )
      {
        v24 = dest;
        gll_operator_delete_arr((int)(uintptr_t)(v17));
        dest = v24;
      }
      *a1 = v27;
    }
    if ( v12 != (int *)(uintptr_t)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)dest - 1, 0xFFFFFFFF) <= 0 )
      gll_operator_delete_arr((int)(uintptr_t)(v12));
    return a1;
  }
  v15 = a2[12];
  if ( (int *)(v15 - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    if ( *(int *)(v15 - 4) < 0 )
      v15 = sub_D8D830(v15 - 12);
    else
      __sync_add_and_fetch((volatile int32_t *)(v15 - 4), 1u);
    v16 = (int *)(*a1 - 12);
    if ( v16 == (int *)(uintptr_t)(&dword_20D3E6C) || __sync_fetch_and_add((volatile int32_t *)(*a1 - 4), 0xFFFFFFFF) > 0 )
    {
      *a1 = v15;
    }
    else
    {
      gll_operator_delete_arr((int)(uintptr_t)(v16));
      *a1 = v15;
    }
  }
  return a1;
}



// ============================================================================
// Address:   0xd8e4e0 (size: 138 bytes)
// Symbol:    sub_D8E4E0
// Demangled: sub_D8E4E0
// ============================================================================
int (**sub_D8E4E0(uint32_t *a1))(int)
{
  glitch::video::CMaterial::Self *v1;
  bool v2;

  v1 = (glitch::video::CMaterial::Self *)a1[1];
  *a1 = (uint32_t)(uintptr_t)(&off_2031670);
  if ( v1 != nullptr )
  {
    v2 = *(uint32_t *)v1 == 2;
    _mm_mfence();
    if ( v2 )
      glitch::video::CMaterial::removeFromRootSceneNode(v1);
    if ( __sync_fetch_and_add((volatile int32_t *)v1, 0xFFFFFFFF) == 1 )
    {
      glitch::video::CMaterial::Destroy(v1);
      gll_operator_delete_arr((int)(uintptr_t)(v1));
    }
  }
  *a1 = (uint32_t)(uintptr_t)(&off_204AB80);
  return (int (**)(int))(uintptr_t)(&off_204AB80);
}
// ----------------------------------------------------------------------------
// Function: sub_D8E760  (binary VA: 0xd8e760)
// Original: sub_D8E760
// ----------------------------------------------------------------------------
int * sub_D8E760(int *a1, int a2, int a3, int a4, int a5)
{
  int v7;
  int v8;
  volatile int32_t *v9;
  int v10;
  size_t v12;
  size_t n;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  size_t v17;
  int v18;

  LOBYTE(v16) = 1;
  v7 = a2 + 4;
  v18 = v7;
  if ( a3 == 0 && a4 != v7 )
  {
    v12 = *(uint32_t *)(*(uint32_t *)a5 - 12);
    n = *(uint32_t *)(*(uint32_t *)(a4 + 16) - 12);
    v17 = n;
    if ( n > v12 )
      n = *(uint32_t *)(*(uint32_t *)a5 - 12);
    v14 = memcmp(*(const void **)a5, *(const void **)(a4 + 16), n);
    v15 = v12 - v17;
    if ( v14 == 0 )
      v14 = v15;
    v16 = v14 >> 31;
  }
  v8 = sub_4EBDC0(0x18u);
  if ( v8 != -16 )
  {
    v9 = *(volatile int32_t **)a5;
    if ( *(int *)(*(uint32_t *)a5 - 4) < 0 )
    {
      v9 = (volatile int32_t *)sub_D8D830(*(uint32_t *)a5 - 12);
    }
    else if ( (int *)(*(uint32_t *)a5 - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
    {
      __sync_add_and_fetch(v9 - 1, 1u);
    }
    *(uint32_t *)(v8 + 16) = (uint32_t)(uintptr_t)(v9);
    v10 = *(uint32_t *)(a5 + 4);
    *(uint32_t *)(v8 + 20) = v10;
    if ( v10 != 0 )
      sub_8B1B00((volatile int32_t *)(v10 + 4));
  }
  sub_1904970(v16, v8, a4, v18);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v8;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_D8E8A0  (binary VA: 0xd8e8a0)
// Original: sub_D8E8A0
// ----------------------------------------------------------------------------
int sub_D8E8A0(int a1, int a2, void **a3)
{
  size_t v3;
  size_t i;
  size_t v5;
  uint32_t *v6;
  size_t v7;
  size_t n;
  int v9;
  uint32_t *v10;
  int v11;
  size_t v12;
  uint32_t *v13;
  int v14;
  int v15;
  int v17;
  typedef size_t _g4_t_v18;
  typedef char _g4_t_v19;
  typedef void *_g4_t_s1;
  typedef size_t _g4_t_v23;
  typedef size_t _g4_t_v24;
  typedef int _g4_t_v25[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_s1)) > _g4_s2 ? (12u + sizeof(_g4_t_s1)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v23)) > _g4_s3 ? (24u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v24)) > _g4_s4 ? (24u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v25)) > _g4_s5 ? (28u + sizeof(_g4_t_v25)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);

  if ( *(uint32_t *)(a2 + 8) == 0 )
  {
    v11 = a2 + 4;
    goto LABEL_17;
  }
  s1 = *a3;
  v3 = *((uint32_t *)*a3 - 3);
  for ( i = *(uint32_t *)(a2 + 8); ; i = v5 )
  {
    v6 = *(uint32_t **)(i + 16);
    v7 = *(v6 - 3);
    n = v7;
    v18 = i;
    if ( v3 <= v7 )
      n = v3;
    v23 = n;
    v9 = memcmp(s1, *(const void **)(i + 16), n);
    if ( v9 == 0 )
      v9 = v3 - v7;
    if ( v9 >= 0 )
      break;
    v5 = *(uint32_t *)(v18 + 8);
    v19 = 1;
    if ( v5 == 0 )
      goto LABEL_11;
LABEL_4:
    ;
  }
  v5 = *(uint32_t *)(v18 + 12);
  v19 = 0;
  if ( v5 != 0 )
    goto LABEL_4;
LABEL_11:
  v10 = v6;
  v11 = v18;
  v12 = v23;
  v13 = v10;
  v24 = v18;
  if ( v19 == 0 )
    goto LABEL_12;
LABEL_17:
  if ( *(uint32_t *)(a2 + 12) == v11 )
  {
    sub_D8E760(v25, a2, 0, v11, (int)(uintptr_t)(a3));
  }
  else
  {
    v17 = sub_19048F0(v11);
    v13 = *(uint32_t **)(v17 + 16);
    v24 = v11;
    v11 = v17;
    v7 = *(v13 - 3);
    s1 = *a3;
    v3 = *((uint32_t *)*a3 - 3);
    v12 = v7;
    if ( v3 <= v7 )
      v12 = *((uint32_t *)s1 - 3);
LABEL_12:
    v14 = memcmp(v13, s1, v12);
    v15 = v7 - v3;
    if ( v14 != 0 )
      v15 = v14;
    if ( v15 >= 0 )
    {
      *(uint32_t *)a1 = v11;
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
    sub_D8E760(v25, a2, 0, v24, (int)(uintptr_t)(a3));
  }
  *(uint32_t *)a1 = v25[0];
  *(uint8_t *)(a1 + 4) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_D8EB30  (binary VA: 0xd8eb30)
// Original: sub_D8EB30
// ----------------------------------------------------------------------------
int sub_D8EB30(glitch::video::CMaterial::Self *a1, int a2)
{
  char v2; // si
  volatile int32_t *v4;
  uint64_t v5; // rax
  typedef char _g4_t_v7[4];
  typedef volatile int32_t *_g4_t_v8;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v2 = a2;
  *(uint32_t *)v7 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)a1 + 1) + 24) + 12 * a2 + 4) + 32);
  glitch::video::IShader::getBatchBaker((glitch::video::IShader::Self *)&v8);
  v4 = v8;
  if ( v8 == nullptr )
    return glitch::video::CMaterial::updateParametersHashCode(a1, v2, 0x22000u);
  sub_8B1B00(v8 + 1);
  if ( v8 != nullptr )
    sub_5459C0(v8);
  v5 = ((int64_t (*)(volatile int32_t *, uint32_t))*(uint32_t *)(*v4 + 40))(v4, *(uint32_t *)v7);
  glitch::video::CMaterial::updateParametersHashCode(a1, v2, v5);
  return sub_5459C0(v4);
}

// ----------------------------------------------------------------------------
// Function: sub_D8ECD0  (binary VA: 0xd8ecd0)
// Original: sub_D8ECD0
// ----------------------------------------------------------------------------
int sub_D8ECD0(volatile int32_t ***a1, volatile int32_t **a2, volatile int32_t **a3)
{
  volatile int32_t **v3;
  volatile int32_t ***v4;
  volatile int32_t **v5;
  volatile int32_t **v6;
  volatile int32_t *v7;
  volatile int32_t **v8;
  int v9;
  int v10;
  volatile int32_t *v11;
  volatile int32_t *v12;
  volatile int32_t *v13;
  int result;
  volatile int32_t **v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  int v19;
  volatile int32_t **v20;
  volatile int32_t *v21;
  bool v22;
  volatile int32_t **v23;
  volatile int32_t **v24;
  volatile int32_t *v25;
  volatile int32_t **v26;
  volatile int32_t **v27;
  volatile int32_t **v28;
  volatile int32_t **v29;
  volatile int32_t *v30;
  volatile int32_t **v31;
  int v32;
  int v33;
  int v34;
  int v35;
  volatile int32_t **v36;
  int v37;
  size_t v38;
  int v39;
  volatile int32_t *v40;
  volatile int32_t ***v41;
  volatile int32_t ***v42;
  volatile int32_t ***v44;

  v3 = a2;
  v4 = a1;
  v5 = a1[1];
  if ( v5 != a1[2] )
  {
    v6 = nullptr;
    if ( v5 != nullptr )
    {
      v7 = *(v5 - 1);
      *v5 = v7;
      if ( v7 != nullptr )
        sub_8B1B00(v7 + 1);
      v6 = v4[1];
    }
    v8 = v6 + 1;
    v4[1] = v8;
    v40 = *a3;
    if ( *a3 != nullptr )
    {
      sub_8B1B00(*a3 + 1);
      v8 = v4[1];
    }
    v9 = v8 - 2 - a2;
    if ( v9 > 0 )
    {
      v38 = (size_t)(v8 - 3);
      v36 = v8 - 2;
      v10 = -1 * v9;
      do
      {
        v11 = *(volatile int32_t **)(v38 + v10 * 4 + 4 * v9);
        if ( v11 != nullptr )
          sub_8B1B00(v11 + 1);
        v12 = (&v36[v10])[v9];
        (&v36[v10])[v9] = v11;
        if ( v12 != nullptr )
          sub_5459C0(v12);
        --v9;
      }
      while ( v9 != 0 );
    }
    if ( v40 != nullptr )
      sub_8B1B00(v40 + 1);
    v13 = *a2;
    *a2 = v40;
    if ( v13 != nullptr )
      sub_5459C0(v13);
    result = (int)(uintptr_t)(v40);
    if ( v40 != nullptr )
      return sub_5459C0(v40);
    return result;
  }
  v15 = *a1;
  v16 = v5 - v15;
  if ( v16 == 0 )
  {
    v39 = 4;
    v18 = a2 - v15;
    goto LABEL_25;
  }
  v17 = 2 * v16;
  if ( v16 > 2 * v16 || v17 > 0x3FFFFFFF )
  {
    v39 = -4;
    v18 = a2 - v15;
LABEL_25:
    v33 = v18;
    v37 = sub_4EBDC0(v39);
    v18 = v33;
    v19 = v37 + 4;
    goto LABEL_26;
  }
  v39 = 8 * v16;
  v18 = a2 - v15;
  if ( v17 != 0 )
    goto LABEL_25;
  v19 = 4;
  v37 = 0;
LABEL_26:
  v20 = (volatile int32_t **)(v37 + 4 * v18);
  if ( v20 != nullptr )
  {
    v21 = *a3;
    v22 = *a3 == nullptr;
    *v20 = *a3;
    if ( !v22 )
    {
      v34 = v19;
      sub_8B1B00(v21 + 1);
      v19 = v34;
    }
  }
  v23 = *v4;
  if ( a2 != *v4 )
  {
    v44 = v4;
    v24 = (volatile int32_t **)v37;
    do
    {
      if ( v24 != nullptr )
      {
        v25 = *v23;
        v22 = *v23 == nullptr;
        *v24 = *v23;
        if ( !v22 )
          sub_8B1B00(v25 + 1);
      }
      ++v23;
      ++v24;
    }
    while ( a2 != v23 );
    v26 = v24;
    v4 = v44;
    v19 = (int)(uintptr_t)(v26 + 1);
  }
  v27 = v4[1];
  if ( a2 != v27 )
  {
    v41 = v4;
    v28 = v4[1];
    v29 = (volatile int32_t **)v19;
    do
    {
      if ( v29 != nullptr )
      {
        v30 = *v3;
        v22 = *v3 == nullptr;
        *v29 = *v3;
        if ( !v22 )
          sub_8B1B00(v30 + 1);
      }
      ++v3;
      ++v29;
    }
    while ( v28 != v3 );
    v4 = v41;
    v19 = (int)(uintptr_t)(v29);
    v27 = v41[1];
  }
  v31 = *v4;
  if ( *v4 != v27 )
  {
    v42 = v4;
    v32 = v19;
    do
    {
      if ( *v31 != nullptr )
        sub_5459C0(*v31);
      ++v31;
    }
    while ( v31 != v27 );
    v19 = v32;
    v4 = v42;
    v31 = *v42;
  }
  if ( v31 != nullptr )
  {
    v35 = v19;
    gll_operator_delete_arr((int)(uintptr_t)(v31));
    v19 = v35;
  }
  v4[1] = (volatile int32_t **)v19;
  *v4 = (volatile int32_t **)v37;
  v4[2] = (volatile int32_t **)(v37 + v39);
  return v37 + v39;
}



// ============================================================================
// Address:   0xd8ef90 (size: 89 bytes)
// Symbol:    sub_D8EF90
// Demangled: sub_D8EF90
// ============================================================================
int (**sub_D8EF90(int a1))(int)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2031F80);
  if ( *(uint32_t *)(a1 + 16) != 0 )
    sub_5459C0(*(volatile int32_t **)(a1 + 16));
  if ( *(uint32_t *)(a1 + 12) != 0 )
    sub_5459C0(*(volatile int32_t **)(a1 + 12));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_204AB80);
  return (int (**)(int))(uintptr_t)(&off_204AB80);
}
// ----------------------------------------------------------------------------
// Function: sub_D8EFF0  (binary VA: 0xd8eff0)
// Original: sub_D8EFF0
// ----------------------------------------------------------------------------
void sub_D8EFF0(volatile int32_t **a1)
{
  *a1 = (volatile int32_t *)&off_2031F80;
  if ( a1[4] != nullptr )
    sub_5459C0(a1[4]);
  if ( a1[3] != nullptr )
    sub_5459C0(a1[3]);
  *a1 = (volatile int32_t *)&off_204AB80;
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_D8F0F0  (binary VA: 0xd8f0f0)
// Original: sub_D8F0F0
// ----------------------------------------------------------------------------
char * sub_D8F0F0(uint32_t *a1, int *a2)
{
  char *v2;
  int v3;
  int v4;
  int v5;
  char *result;
  char *v7;
  int v8;
  int v9;
  bool v10;
  int v11;
  size_t v12;
  int v13;
  uint32_t *v14;
  int *v15;
  int v16;
  char *v17;
  uint32_t *v18;
  int v19;
  uint32_t *v20;
  char *v21;
  char *v22;
  int v23;
  volatile int32_t **v24;
  char *v25;
  char *v26;
  char *v27;
  unsigned int v30;
  uint32_t *v31;

  v27 = (char *)a1[16];
  v2 = (char *)a1[15];
  v3 = (v27 - v2) >> 4;
  v4 = (v27 - v2) >> 2;
  v30 = v4;
  if ( v3 > 0 )
  {
    v5 = *a2;
    if ( *(uint32_t *)v2 == *a2 )
    {
      result = (char *)a1[15];
    }
    else if ( v5 == *((uint32_t *)v2 + 1) )
    {
      result = v2 + 4;
    }
    else if ( v5 == *((uint32_t *)v2 + 2) )
    {
      result = v2 + 8;
    }
    else if ( v5 == *((uint32_t *)v2 + 3) )
    {
      result = v2 + 12;
    }
    else
    {
      result = (char *)a1[15];
      do
      {
        result += 16;
        if ( --v3 == 0 )
        {
          v4 = (v27 - result) >> 2;
          goto LABEL_13;
        }
        if ( *(uint32_t *)result == v5 )
          goto LABEL_23;
        v7 = result + 4;
        if ( *((uint32_t *)result + 1) == v5 )
          break;
        v7 = result + 8;
        if ( *((uint32_t *)result + 2) == v5 )
          break;
        v7 = result + 12;
      }
      while ( *((uint32_t *)result + 3) != v5 );
      result = v7;
    }
LABEL_23:
    if ( v27 != result )
      return result;
    goto LABEL_16;
  }
  result = (char *)a1[15];
LABEL_13:
  switch ( v4 )
  {
    case 2:
      v11 = *a2;
LABEL_32:
      if ( *(uint32_t *)result == v11 )
        goto LABEL_23;
      result += 4;
      goto LABEL_27;
    case 3:
      v11 = *a2;
      if ( *(uint32_t *)result == *a2 )
        goto LABEL_23;
      result += 4;
      goto LABEL_32;
    case 1:
      v11 = *a2;
LABEL_27:
      if ( *(uint32_t *)result == v11 )
        goto LABEL_23;
      break;
    default:
      break;
  }
LABEL_16:
  if ( v27 == (char *)a1[17] )
  {
    v12 = 1;
    if ( v30 != 0 )
    {
      if ( v30 > 2 * v30 || 2 * v30 > 0x3FFFFFFF )
        v12 = 0xFFFFFFFF;
      else
        v12 = 2 * v30;
    }
    v13 = opNew(v12 * 4);
    v14 = (uint32_t *)(v13 + 4);
    v31 = (uint32_t *)v13;
    v15 = (int *)(v13 + 4 * v30);
    if ( v15 != nullptr )
    {
      v16 = *a2;
      v10 = *a2 == 0;
      *v15 = *a2;
      if ( !v10 )
        sub_8B1B00((volatile int32_t *)(v16 + 4));
    }
    v17 = (char *)a1[15];
    if ( v27 != v17 )
    {
      v18 = v31;
      do
      {
        if ( v18 != nullptr )
        {
          v19 = *(uint32_t *)v17;
          v10 = *(uint32_t *)v17 == 0;
          *v18 = *(uint32_t *)v17;
          if ( !v10 )
            sub_8B1B00((volatile int32_t *)(v19 + 4));
        }
        v17 += 4;
        ++v18;
      }
      while ( v27 != v17 );
      v14 = v18 + 1;
    }
    v20 = a1;
    v21 = (char *)a1[16];
    if ( v27 != v21 )
    {
      v22 = v27;
      do
      {
        if ( v14 != nullptr )
        {
          v23 = *(uint32_t *)v22;
          v10 = *(uint32_t *)v22 == 0;
          *v14 = *(uint32_t *)v22;
          if ( !v10 )
          {
            v25 = v21;
            sub_8B1B00((volatile int32_t *)(v23 + 4));
            v21 = v25;
          }
        }
        v22 += 4;
        ++v14;
      }
      while ( v21 != v22 );
      v20 = a1;
      v21 = (char *)a1[16];
    }
    v24 = (volatile int32_t **)v20[15];
    if ( v21 != (char *)v24 )
    {
      do
      {
        if ( *v24 != nullptr )
        {
          v26 = v21;
          sub_5459C0(*v24);
          v21 = v26;
        }
        ++v24;
      }
      while ( v21 != (char *)v24 );
      v24 = (volatile int32_t **)a1[15];
    }
    if ( v24 != nullptr )
      opDelete(v24);
    a1[15] = (uint32_t)(uintptr_t)(v31);
    a1[16] = (uint32_t)(uintptr_t)(v14);
    a1[17] = (uint32_t)(uintptr_t)(&v31[v12]);
    return (char *)a1;
  }
  else
  {
    v8 = 0;
    if ( v27 != nullptr )
    {
      v9 = *a2;
      v10 = *a2 == 0;
      *(uint32_t *)v27 = *a2;
      if ( !v10 )
        sub_8B1B00((volatile int32_t *)(v9 + 4));
      v8 = a1[16];
    }
    result = (char *)(v8 + 4);
    a1[16] = (uint32_t)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_D8F3A0  (binary VA: 0xd8f3a0)
// Original: sub_D8F3A0
// ----------------------------------------------------------------------------
int sub_D8F3A0(uint32_t *a1, const void **a2)
{
  char *v2;
  int v3;
  size_t v4;
  size_t v5;
  size_t v6;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  int *v12;
  uint32_t *v13;
  size_t v14;
  int v15;
  int v16;
  uint32_t *v17;
  size_t v18;
  size_t v19;
  int v20;
  int v21;
  volatile int32_t *v22;
  volatile int32_t *v23;
  int v25;
  int v26;
  uint32_t *v27;
  size_t v28;
  size_t v29;
  int v30;
  int v31;
  size_t v32;
  size_t v33;
  size_t v34;
  int v35;
  int v36;
  typedef size_t _g4_t_v37;
  typedef size_t _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint32_t *_g4_t_v41;
  typedef size_t _g4_t_v42;
  typedef int _g4_t_v43;
  typedef char *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef volatile int32_t *_g4_t_v47;
  typedef volatile int32_t *_g4_t_v48;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v37)) > _g4_s0 ? (8u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v38)) > _g4_s1 ? (8u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v39)) > _g4_s2 ? (8u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v41)) > _g4_s3 ? (20u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v42)) > _g4_s4 ? (20u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v43)) > _g4_s5 ? (24u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v44)) > _g4_s6 ? (28u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v45)) > _g4_s7 ? (32u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v46)) > _g4_s8 ? (44u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v47)) > _g4_s9 ? (48u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v48)) > _g4_s10 ? (52u + sizeof(_g4_t_v48)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 20u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);

  v2 = (char *)*a2;
  v41 = a1 + 1;
  v44 = v2;
  v3 = a1[2];
  if ( v3 == 0 )
  {
    v43 = (int)(uintptr_t)(a1 + 1);
    goto LABEL_16;
  }
  v4 = *((uint32_t *)v2 - 3);
  v43 = (int)(uintptr_t)(a1 + 1);
  do
  {
    while ( 1 )
    {
      v5 = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
      v6 = v5;
      v37 = v4;
      if ( v4 <= v5 )
        v6 = v4;
      v7 = memcmp(*(const void **)(v3 + 16), v44, v6);
      v4 = v37;
      v8 = v5 - v37;
      if ( v7 == 0 )
        v7 = v8;
      if ( v7 < 0 )
        break;
      v43 = v3;
      v3 = *(uint32_t *)(v3 + 8);
      if ( v3 == 0 )
        goto LABEL_10;
    }
    v3 = *(uint32_t *)(v3 + 12);
  }
  while ( v3 != 0 );
LABEL_10:
  if ( v41 == (uint32_t *)v43 )
    goto LABEL_16;
  v9 = *(uint32_t *)(*(uint32_t *)(v43 + 16) - 12);
  v10 = v9;
  if ( v37 <= v9 )
    v10 = v37;
  v11 = memcmp(v44, *(const void **)(v43 + 16), v10);
  if ( v11 == 0 )
    v11 = v37 - v9;
  if ( v11 < 0 )
  {
LABEL_16:
    v12 = (int *)(v44 - 12);
    if ( *((int *)v44 - 1) < 0 )
    {
      v44 = (char *)sub_D8D830((int)(uintptr_t)(v12));
    }
    else if ( v12 != (int *)(uintptr_t)(&dword_20D3E6C) )
    {
      __sync_add_and_fetch((volatile int32_t *)v44 - 1, 1u);
    }
    v47 = (volatile int32_t *)v44;
    v48 = nullptr;
    if ( v41 == (uint32_t *)v43 )
    {
      if ( a1[5] != 0 )
      {
        v31 = a1[4];
        v32 = *((uint32_t *)v44 - 3);
        v33 = *(uint32_t *)(*(uint32_t *)(v31 + 16) - 12);
        v34 = v33;
        v39 = v31;
        if ( v32 <= v33 )
          v34 = *((uint32_t *)v44 - 3);
        v35 = v33 - v32;
        v36 = memcmp(*(const void **)(v31 + 16), v44, v34);
        if ( v36 == 0 )
          v36 = v35;
        if ( v36 < 0 )
        {
          sub_D8E760(&v46, (int)(uintptr_t)(a1), 0, v39, (int)(uintptr_t)(&v47));
          goto LABEL_57;
        }
      }
    }
    else
    {
      v13 = *(uint32_t **)(v43 + 16);
      v14 = *((uint32_t *)v44 - 3);
      v42 = v14;
      v38 = *(v13 - 3);
      if ( v38 <= v14 )
        v14 = *(v13 - 3);
      v15 = memcmp(v44, *(const void **)(v43 + 16), v14);
      if ( v15 == 0 )
        v15 = v42 - v38;
      if ( v15 < 0 )
      {
        if ( a1[3] != v43 )
        {
          v16 = sub_1904940(v43);
          v17 = *(uint32_t **)(v16 + 16);
          v18 = v42;
          v19 = *(v17 - 3);
          if ( v19 <= v42 )
            v18 = *(v17 - 3);
          v20 = memcmp(v17, v44, v18);
          v21 = v19 - v42;
          if ( v20 == 0 )
            v20 = v21;
          if ( v20 < 0 )
          {
            if ( *(uint32_t *)(v16 + 12) != 0 )
              sub_D8E760(&v46, (int)(uintptr_t)(a1), v43, v43, (int)(uintptr_t)(&v47));
            else
              sub_D8E760(&v46, (int)(uintptr_t)(a1), 0, v16, (int)(uintptr_t)(&v47));
            goto LABEL_33;
          }
          goto LABEL_59;
        }
        sub_D8E760(&v46, (int)(uintptr_t)(a1), v43, v43, (int)(uintptr_t)(&v47));
LABEL_57:
        v22 = v48;
        v43 = v46;
        goto LABEL_34;
      }
      v25 = memcmp(v13, v44, v14);
      if ( v25 == 0 )
        v25 = v38 - v42;
      if ( v25 >= 0 )
        goto LABEL_36;
      if ( a1[4] == v43 )
      {
LABEL_62:
        sub_D8E760(&v46, (int)(uintptr_t)(a1), 0, v43, (int)(uintptr_t)(&v47));
        goto LABEL_57;
      }
      v26 = sub_19048E0(v43);
      v27 = *(uint32_t **)(v26 + 16);
      v28 = v42;
      v29 = *(v27 - 3);
      if ( v29 <= v42 )
        v28 = *(v27 - 3);
      v30 = memcmp(v44, v27, v28);
      if ( v30 == 0 )
        v30 = v42 - v29;
      if ( v30 < 0 )
      {
        if ( *(uint32_t *)(v43 + 12) != 0 )
        {
          sub_D8E760(&v46, (int)(uintptr_t)(a1), v26, v26, (int)(uintptr_t)(&v47));
LABEL_33:
          v22 = v48;
          v43 = v46;
          goto LABEL_34;
        }
        goto LABEL_62;
      }
    }
LABEL_59:
    sub_D8E8A0((int)(uintptr_t)(&v45), (int)(uintptr_t)(a1), (void **)&v47);
    v22 = v48;
    v43 = v45;
LABEL_34:
    if ( v22 != nullptr )
      sub_5459C0(v22);
LABEL_36:
    v23 = v47 - 3;
    if ( v47 - 3 != (volatile int32_t *)(uintptr_t)(&dword_20D3E6C) && __sync_fetch_and_add(v47 - 1, 0xFFFFFFFF) <= 0 )
      gll_operator_delete_arr((int)(uintptr_t)(v23));
  }
  return v43 + 20;
}

// ----------------------------------------------------------------------------
// Function: sub_D8FBA0  (binary VA: 0xd8fba0)
// Original: sub_D8FBA0
// ----------------------------------------------------------------------------
void sub_D8FBA0(volatile int32_t **a1)
{
  *a1 = (volatile int32_t *)((uint32_t)(uintptr_t)&off_20316A0);
  if ( a1[9] != nullptr )
    sub_5459C0(a1[9]);
  glf::Task::Destroy((glf::Task::Self *)a1);
}

// ----------------------------------------------------------------------------
// Function: sub_D90420  (binary VA: 0xd90420)
// Original: sub_D90420
// ----------------------------------------------------------------------------
void sub_D90420(volatile int32_t **a1)
{
  *a1 = (volatile int32_t *)((uint32_t)(uintptr_t)&off_20316A0);
  if ( a1[9] != nullptr )
    sub_5459C0(a1[9]);
  glf::Task::Destroy((glf::Task::Self *)a1);
  glf::Task::opDelete((glf::Self *)a1);
}

// ----------------------------------------------------------------------------
// Function: sub_D90470  (binary VA: 0xd90470)
// Original: sub_D90470
// ----------------------------------------------------------------------------
int sub_D90470(volatile int32_t ***a1, volatile int32_t **a2, volatile int32_t **a3)
{
  volatile int32_t **v3;
  volatile int32_t ***v4;
  volatile int32_t **v5;
  volatile int32_t **v6;
  volatile int32_t *v7;
  volatile int32_t **v8;
  int v9;
  int v10;
  volatile int32_t *v11;
  volatile int32_t *v12;
  volatile int32_t *v13;
  int result;
  volatile int32_t **v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  int v19;
  volatile int32_t **v20;
  volatile int32_t *v21;
  bool v22;
  volatile int32_t **v23;
  volatile int32_t **v24;
  volatile int32_t *v25;
  volatile int32_t **v26;
  volatile int32_t **v27;
  volatile int32_t **v28;
  volatile int32_t **v29;
  volatile int32_t *v30;
  volatile int32_t **v31;
  int v32;
  int v33;
  int v34;
  int v35;
  volatile int32_t **v36;
  int v37;
  size_t v38;
  int v39;
  volatile int32_t *v40;
  volatile int32_t ***v41;
  volatile int32_t ***v42;
  volatile int32_t ***v44;

  v3 = a2;
  v4 = a1;
  v5 = a1[1];
  if ( v5 != a1[2] )
  {
    v6 = nullptr;
    if ( v5 != nullptr )
    {
      v7 = *(v5 - 1);
      *v5 = v7;
      if ( v7 != nullptr )
        sub_8B1B00(v7 + 1);
      v6 = v4[1];
    }
    v8 = v6 + 1;
    v4[1] = v8;
    v40 = *a3;
    if ( *a3 != nullptr )
    {
      sub_8B1B00(*a3 + 1);
      v8 = v4[1];
    }
    v9 = v8 - 2 - a2;
    if ( v9 > 0 )
    {
      v38 = (size_t)(v8 - 3);
      v36 = v8 - 2;
      v10 = -1 * v9;
      do
      {
        v11 = *(volatile int32_t **)(v38 + v10 * 4 + 4 * v9);
        if ( v11 != nullptr )
          sub_8B1B00(v11 + 1);
        v12 = (&v36[v10])[v9];
        (&v36[v10])[v9] = v11;
        if ( v12 != nullptr )
          sub_5459C0(v12);
        --v9;
      }
      while ( v9 != 0 );
    }
    if ( v40 != nullptr )
      sub_8B1B00(v40 + 1);
    v13 = *a2;
    *a2 = v40;
    if ( v13 != nullptr )
      sub_5459C0(v13);
    result = (int)(uintptr_t)(v40);
    if ( v40 != nullptr )
      return sub_5459C0(v40);
    return result;
  }
  v15 = *a1;
  v16 = v5 - v15;
  if ( v16 == 0 )
  {
    v39 = 4;
    v18 = a2 - v15;
    goto LABEL_25;
  }
  v17 = 2 * v16;
  if ( v16 > 2 * v16 || v17 > 0x3FFFFFFF )
  {
    v39 = -4;
    v18 = a2 - v15;
LABEL_25:
    v33 = v18;
    v37 = sub_4EBDC0(v39);
    v18 = v33;
    v19 = v37 + 4;
    goto LABEL_26;
  }
  v39 = 8 * v16;
  v18 = a2 - v15;
  if ( v17 != 0 )
    goto LABEL_25;
  v19 = 4;
  v37 = 0;
LABEL_26:
  v20 = (volatile int32_t **)(v37 + 4 * v18);
  if ( v20 != nullptr )
  {
    v21 = *a3;
    v22 = *a3 == nullptr;
    *v20 = *a3;
    if ( !v22 )
    {
      v34 = v19;
      sub_8B1B00(v21 + 1);
      v19 = v34;
    }
  }
  v23 = *v4;
  if ( a2 != *v4 )
  {
    v44 = v4;
    v24 = (volatile int32_t **)v37;
    do
    {
      if ( v24 != nullptr )
      {
        v25 = *v23;
        v22 = *v23 == nullptr;
        *v24 = *v23;
        if ( !v22 )
          sub_8B1B00(v25 + 1);
      }
      ++v23;
      ++v24;
    }
    while ( a2 != v23 );
    v26 = v24;
    v4 = v44;
    v19 = (int)(uintptr_t)(v26 + 1);
  }
  v27 = v4[1];
  if ( a2 != v27 )
  {
    v41 = v4;
    v28 = v4[1];
    v29 = (volatile int32_t **)v19;
    do
    {
      if ( v29 != nullptr )
      {
        v30 = *v3;
        v22 = *v3 == nullptr;
        *v29 = *v3;
        if ( !v22 )
          sub_8B1B00(v30 + 1);
      }
      ++v3;
      ++v29;
    }
    while ( v28 != v3 );
    v4 = v41;
    v19 = (int)(uintptr_t)(v29);
    v27 = v41[1];
  }
  v31 = *v4;
  if ( *v4 != v27 )
  {
    v42 = v4;
    v32 = v19;
    do
    {
      if ( *v31 != nullptr )
        sub_5459C0(*v31);
      ++v31;
    }
    while ( v31 != v27 );
    v19 = v32;
    v4 = v42;
    v31 = *v42;
  }
  if ( v31 != nullptr )
  {
    v35 = v19;
    gll_operator_delete_arr((int)(uintptr_t)(v31));
    v19 = v35;
  }
  v4[1] = (volatile int32_t **)v19;
  *v4 = (volatile int32_t **)v37;
  v4[2] = (volatile int32_t **)(v37 + v39);
  return v37 + v39;
}

// ----------------------------------------------------------------------------
// Function: sub_D90DA0  (binary VA: 0xd90da0)
// Original: sub_D90DA0
// ----------------------------------------------------------------------------
void sub_D90DA0(glitch::video::Self **a1)
{
  const glitch::video::CMaterial::Self *v1;

  *a1 = (glitch::video::Self *)&off_2031670;
  if ( a1[1] != nullptr )
    glitch::video::intrusive_ptr_release(a1[1], v1);
  *a1 = (glitch::video::Self *)&off_204AB80;
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_D971D0  (binary VA: 0xd971d0)
// Original: sub_D971D0
// ----------------------------------------------------------------------------
void sub_D971D0(int a1)
{
  glf::Thread::sIsMain();
  glitch::video::IVideoDriver::forceCommitShader(
    *(glf::Thread::Self **)(*(uint32_t *)(*(uint32_t *)(a1 + 4) + 4) + 4),
    (glitch::video::CMaterial::Self **)(a1 + 4));
}

// ----------------------------------------------------------------------------
// Function: sub_DAD560  (binary VA: 0xdad560)
// Original: sub_DAD560
// ----------------------------------------------------------------------------
void sub_DAD560(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v7;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v8;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v9;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v10;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v11;
  uint8_t v12;
  char v13;
  int i;
  int v15;
  volatile int32_t *v16;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v17;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v18;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v19;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v20;
  int v21;
  int v22;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v23;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v24;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v25;
  int v26;
  int v27;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self **_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v33;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v34;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v35;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v36;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v37;
  typedef uint8_t _g4_t_v38;
  typedef char _g4_t_v39;
  typedef int16_t _g4_t_v40;
  typedef int16_t _g4_t_v41;
  typedef int16_t _g4_t_v42;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v28)) > _g4_s0 ? (8u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v29)) > _g4_s1 ? (8u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v30)) > _g4_s2 ? (8u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v33)) > _g4_s3 ? (32u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v34)) > _g4_s4 ? (48u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v35)) > _g4_s5 ? (56u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v36)) > _g4_s6 ? (60u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v37)) > _g4_s7 ? (64u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v38)) > _g4_s8 ? (68u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (69u + sizeof(_g4_t_v39)) > _g4_s9 ? (69u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (70u + sizeof(_g4_t_v40)) > _g4_s10 ? (70u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v41)) > _g4_s11 ? (72u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (74u + sizeof(_g4_t_v42)) > _g4_s12 ? (74u + sizeof(_g4_t_v42)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 64u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 68u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 69u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 70u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 72u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 74u);

  v4 = a2;
  if ( a2 < (a3 - 1) / 2 )
  {
    while ( 1 )
    {
      v5 = v4 + 1;
      v26 = 2 * (v4 + 1);
      v6 = 3 * v4;
      v27 = a1 + 4 * (v26 + 4 * v5);
      if ( *(uint8_t *)(v27 + 4) < (int)*(uint8_t *)(a1 + 12 * (v26 - 1) + 4) )
        v27 = a1 + 12 * --v26;
      v7 = nullptr;
      v8 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(a1 + 4 * v6);
      v9 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v27;
      v35 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v27;
      if ( v35 != nullptr )
      {
        __sync_add_and_fetch((volatile int32_t *)v9, 1u);
        v7 = v35;
      }
      v10 = *v8;
      *v8 = v7;
      v35 = v10;
      v28 = v8;
      boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v35);
      *((uint8_t *)v28 + 4) = *(uint8_t *)(v27 + 4);
      *((uint8_t *)v28 + 5) = *(uint8_t *)(v27 + 5);
      *((uint16_t *)v28 + 3) = *(uint16_t *)(v27 + 6);
      *((uint16_t *)v28 + 4) = *(uint16_t *)(v27 + 8);
      *((uint16_t *)v28 + 5) = *(uint16_t *)(v27 + 10);
      if ( v26 >= (a3 - 1) / 2 )
        break;
      v4 = v26;
    }
  }
  else
  {
    v26 = a2;
    v27 = a1 + 12 * a2;
  }
  if ( (a3 & 1) == 0 && v26 == (a3 - 2) / 2 )
  {
    v21 = 2 * v26 + 1;
    v22 = a1 + 12 * v21;
    v23 = nullptr;
    v24 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v22;
    v33 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v22;
    if ( v33 != nullptr )
    {
      __sync_add_and_fetch((volatile int32_t *)v24, 1u);
      v23 = v33;
    }
    v25 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v27;
    *(uint32_t *)v27 = (uint32_t)(uintptr_t)(v23);
    v33 = v25;
    v30 = v21;
    boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v33);
    *(uint8_t *)(v27 + 4) = *(uint8_t *)(v22 + 4);
    *(uint8_t *)(v27 + 5) = *(uint8_t *)(v22 + 5);
    *(uint16_t *)(v27 + 6) = *(uint16_t *)(v22 + 6);
    *(uint16_t *)(v27 + 8) = *(uint16_t *)(v22 + 8);
    *(uint16_t *)(v27 + 10) = *(uint16_t *)(v22 + 10);
    v26 = v30;
    v27 = a1 + 12 * v30;
  }
  v11 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)a4;
  v37 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)a4;
  if ( v37 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v11, 1u);
  v12 = *(uint8_t *)(a4 + 4);
  v13 = *(uint8_t *)(a4 + 5);
  v38 = v12;
  v39 = v13;
  v40 = *(uint16_t *)(a4 + 6);
  v41 = *(uint16_t *)(a4 + 8);
  v42 = *(uint16_t *)(a4 + 10);
  if ( v26 > a2 && v12 > *(uint8_t *)(a1 + 12 * ((v26 - 1) / 2) + 4) )
  {
    for ( i = (v26 - 1) / 2; ; i = (v29 - 1) / 2 )
    {
      v27 = a1 + 12 * i;
      v15 = a1 + 12 * v26;
      v16 = *(volatile int32_t **)v27;
      v17 = nullptr;
      v36 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v27;
      if ( v36 != nullptr )
      {
        __sync_add_and_fetch(v16, 1u);
        v17 = v36;
      }
      v18 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v15;
      *(uint32_t *)v15 = (uint32_t)(uintptr_t)(v17);
      v36 = v18;
      v29 = i;
      boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v36);
      *(uint8_t *)(v15 + 4) = *(uint8_t *)(v27 + 4);
      *(uint8_t *)(v15 + 5) = *(uint8_t *)(v27 + 5);
      *(uint16_t *)(v15 + 6) = *(uint16_t *)(v27 + 6);
      *(uint16_t *)(v15 + 8) = *(uint16_t *)(v27 + 8);
      *(uint16_t *)(v15 + 10) = *(uint16_t *)(v27 + 10);
      if ( a2 >= v29 || v38 <= *(uint8_t *)(a1 + 12 * ((v29 - 1) / 2) + 4) )
        break;
      v26 = v29;
    }
  }
  v19 = nullptr;
  v34 = v37;
  if ( v37 != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)v37, 1u);
    v19 = v34;
  }
  v20 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v27;
  *(uint32_t *)v27 = (uint32_t)(uintptr_t)(v19);
  v34 = v20;
  boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v34);
  *(uint8_t *)(v27 + 4) = v38;
  *(uint8_t *)(v27 + 5) = v39;
  *(uint16_t *)(v27 + 6) = v40;
  *(uint16_t *)(v27 + 8) = v41;
  *(uint16_t *)(v27 + 10) = v42;
  boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v37);
}

// ----------------------------------------------------------------------------
// Function: sub_DAD860  (binary VA: 0xdad860)
// Original: sub_DAD860
// ----------------------------------------------------------------------------
int sub_DAD860(int result, int a2)
{
  int v2;
  uint8_t v3;
  int v4;
  bool v5; // cc
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v6;
  char v7;
  int v8;
  int v9;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v10;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v11;
  bool v12;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v13;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v14;
  int v15;
  int v16;
  int v17;
  char v18;
  int v19;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v20;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v21;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v22;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v23;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v39;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v40;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v41;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v42;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint8_t _g4_t_v45;
  typedef char _g4_t_v46;
  typedef char _g4_t_v47;
  typedef char _g4_t_v48;
  typedef int16_t _g4_t_v49;
  typedef int16_t _g4_t_v50;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v25)) > _g4_s0 ? (0u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v26)) > _g4_s1 ? (0u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v27)) > _g4_s2 ? (0u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v28)) > _g4_s3 ? (4u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v29)) > _g4_s4 ? (4u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v31)) > _g4_s5 ? (12u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v32)) > _g4_s6 ? (16u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v33)) > _g4_s7 ? (20u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v34)) > _g4_s8 ? (24u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v35)) > _g4_s9 ? (24u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v36)) > _g4_s10 ? (28u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v37)) > _g4_s11 ? (28u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v38)) > _g4_s12 ? (28u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v39)) > _g4_s13 ? (32u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v40)) > _g4_s14 ? (48u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v41)) > _g4_s15 ? (64u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v42)) > _g4_s16 ? (80u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v43)) > _g4_s17 ? (96u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v44)) > _g4_s18 ? (100u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v45)) > _g4_s19 ? (104u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (105u + sizeof(_g4_t_v46)) > _g4_s20 ? (105u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (106u + sizeof(_g4_t_v47)) > _g4_s21 ? (106u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (107u + sizeof(_g4_t_v48)) > _g4_s22 ? (107u + sizeof(_g4_t_v48)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v49)) > _g4_s23 ? (108u + sizeof(_g4_t_v49)) : _g4_s23,
    _g4_s25 = (110u + sizeof(_g4_t_v50)) > _g4_s24 ? (110u + sizeof(_g4_t_v50)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 96u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 100u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 104u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 105u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 106u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 107u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 108u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 110u);

  v32 = result;
  if ( result != a2 )
  {
    result += 16;
    if ( a2 != result )
    {
      v2 = v32;
      v33 = -result;
      do
      {
        v3 = *(uint8_t *)(result + 8);
        v4 = result;
        v36 = v3;
        v5 = *(uint8_t *)(v32 + 8) <= v3;
        v6 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)result;
        v43 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)result;
        if ( v5 )
        {
          if ( v6 != nullptr )
          {
            __sync_add_and_fetch((volatile int32_t *)v6, 1u);
            v3 = *(uint8_t *)(result + 8);
            v36 = v3;
          }
          v45 = v3;
          v18 = *(uint8_t *)(result + 9);
          v44 = *(uint32_t *)(result + 4);
          v46 = v18;
          v19 = result;
          v47 = *(uint8_t *)(result + 10);
          v48 = *(uint8_t *)(result + 11);
          v49 = *(uint16_t *)(result + 12);
          v50 = *(uint16_t *)(result + 14);
          if ( *(uint8_t *)(result - 8) > v36 )
          {
            v19 = v2;
            v38 = v2;
            v35 = result;
            while ( 1 )
            {
              v20 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v19;
              v21 = nullptr;
              v41 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v19;
              if ( v41 != nullptr )
              {
                __sync_add_and_fetch((volatile int32_t *)v20, 1u);
                v21 = v41;
              }
              v22 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v4;
              *(uint32_t *)v4 = (uint32_t)(uintptr_t)(v21);
              v41 = v22;
              boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v41);
              *(uint32_t *)(v4 + 4) = *(uint32_t *)(v19 + 4);
              *(uint8_t *)(v4 + 8) = *(uint8_t *)(v19 + 8);
              *(uint8_t *)(v4 + 9) = *(uint8_t *)(v19 + 9);
              *(uint8_t *)(v4 + 10) = *(uint8_t *)(v19 + 10);
              *(uint8_t *)(v4 + 11) = *(uint8_t *)(v19 + 11);
              *(uint16_t *)(v4 + 12) = *(uint16_t *)(v19 + 12);
              *(uint16_t *)(v4 + 14) = *(uint16_t *)(v19 + 14);
              if ( *(uint8_t *)(v19 - 16 + 8) <= v45 )
                break;
              v4 = v19;
              v19 -= 16;
            }
            v2 = v38;
            result = v35;
          }
          v23 = nullptr;
          v42 = v43;
          if ( v43 != nullptr )
          {
            __sync_add_and_fetch((volatile int32_t *)v43, 1u);
            v23 = v42;
          }
          v24 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v19;
          *(uint32_t *)v19 = (uint32_t)(uintptr_t)(v23);
          v42 = v24;
          v29 = result;
          v27 = v2;
          boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v42);
          *(uint32_t *)(v19 + 4) = v44;
          *(uint8_t *)(v19 + 8) = v45;
          *(uint8_t *)(v19 + 9) = v46;
          *(uint8_t *)(v19 + 10) = v47;
          *(uint8_t *)(v19 + 11) = v48;
          *(uint16_t *)(v19 + 12) = v49;
          *(uint16_t *)(v19 + 14) = v50;
          boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v43);
          v16 = v27;
          v15 = v29;
          v17 = v27 + 32;
        }
        else
        {
          if ( v6 != nullptr )
          {
            __sync_add_and_fetch((volatile int32_t *)v6, 1u);
            v3 = *(uint8_t *)(result + 8);
          }
          v45 = v3;
          v7 = *(uint8_t *)(result + 9);
          v44 = *(uint32_t *)(result + 4);
          v46 = v7;
          v47 = *(uint8_t *)(result + 10);
          v48 = *(uint8_t *)(result + 11);
          v49 = *(uint16_t *)(result + 12);
          v50 = *(uint16_t *)(result + 14);
          v37 = (result - v32) >> 4;
          v31 = v2 + 32;
          if ( v37 > 0 )
          {
            v34 = result;
            v8 = result;
            do
            {
              v34 -= 16;
              v9 = v33 + v34;
              v10 = nullptr;
              v39 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v33 + v34 + v2 + 16);
              if ( v39 != nullptr )
              {
                __sync_add_and_fetch((volatile int32_t *)v39, 1u);
                v10 = v39;
              }
              v11 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v9 + v8 + 16);
              *(uint32_t *)(v9 + v8 + 16) = (uint32_t)(uintptr_t)(v10);
              v39 = v11;
              v25 = v2;
              boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v39);
              v2 = v25;
              v12 = v37-- == 1;
              *(uint32_t *)(v9 + v8 + 20) = *(uint32_t *)(v9 + v25 + 20);
              *(uint8_t *)(v9 + v8 + 24) = *(uint8_t *)(v9 + v25 + 24);
              *(uint8_t *)(v9 + v8 + 25) = *(uint8_t *)(v9 + v25 + 25);
              *(uint8_t *)(v9 + v8 + 26) = *(uint8_t *)(v9 + v25 + 26);
              *(uint8_t *)(v9 + v8 + 27) = *(uint8_t *)(v9 + v25 + 27);
              *(uint16_t *)(v9 + v8 + 28) = *(uint16_t *)(v9 + v25 + 28);
              *(uint16_t *)(v9 + v8 + 30) = *(uint16_t *)(v9 + v25 + 30);
            }
            while ( !v12 );
            result = v8;
          }
          v13 = nullptr;
          v40 = v43;
          if ( v43 != nullptr )
          {
            __sync_add_and_fetch((volatile int32_t *)v43, 1u);
            v13 = v40;
          }
          v14 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v32;
          *(uint32_t *)v32 = (uint32_t)(uintptr_t)(v13);
          v40 = v14;
          v28 = result;
          v26 = v2;
          boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v40);
          *(uint32_t *)(v32 + 4) = v44;
          *(uint8_t *)(v32 + 8) = v45;
          *(uint8_t *)(v32 + 9) = v46;
          *(uint8_t *)(v32 + 10) = v47;
          *(uint8_t *)(v32 + 11) = v48;
          *(uint16_t *)(v32 + 12) = v49;
          *(uint16_t *)(v32 + 14) = v50;
          boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v43);
          v15 = v28;
          v16 = v26;
          v17 = v31;
        }
        v2 = v16 + 16;
        result = v15 + 16;
        v33 -= 16;
      }
      while ( a2 != v17 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_DADBC0  (binary VA: 0xdadbc0)
// Original: sub_DADBC0
// ----------------------------------------------------------------------------
void sub_DADBC0(int a1, int a2, int a3, int a4)
{
  int v4;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v5;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v6;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v7;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v8;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v9;
  uint8_t v10;
  int16_t v11;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v12;
  int v13;
  volatile int32_t *v14;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v15;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v16;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v17;
  int v18;
  int v19;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v20;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v21;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v22;
  int v23;
  int v24;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self **_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v29;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v30;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v31;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v32;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v33;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint8_t _g4_t_v36;
  typedef char _g4_t_v37;
  typedef char _g4_t_v38;
  typedef char _g4_t_v39;
  typedef int16_t _g4_t_v40;
  typedef int16_t _g4_t_v41;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v25)) > _g4_s0 ? (8u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v29)) > _g4_s2 ? (28u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v30)) > _g4_s3 ? (32u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v31)) > _g4_s4 ? (48u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v32)) > _g4_s5 ? (56u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v33)) > _g4_s6 ? (60u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v34)) > _g4_s7 ? (64u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v35)) > _g4_s8 ? (68u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v36)) > _g4_s9 ? (72u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (73u + sizeof(_g4_t_v37)) > _g4_s10 ? (73u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (74u + sizeof(_g4_t_v38)) > _g4_s11 ? (74u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (75u + sizeof(_g4_t_v39)) > _g4_s12 ? (75u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v40)) > _g4_s13 ? (76u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (78u + sizeof(_g4_t_v41)) > _g4_s14 ? (78u + sizeof(_g4_t_v41)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 72u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 73u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 74u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 75u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 76u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 78u);

  v4 = a2;
  if ( a2 < (a3 - 1) / 2 )
  {
    while ( 1 )
    {
      v23 = 2 * (v4 + 1);
      v24 = a1 + 32 * (v4 + 1);
      if ( *(uint8_t *)(v24 + 8) < (unsigned int)*(uint8_t *)(a1 + 16 * (v23 - 1) + 8) )
        v24 = a1 + 16 * --v23;
      v5 = nullptr;
      v6 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(a1 + 16 * v4);
      v7 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v24;
      v32 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v24;
      if ( v32 != nullptr )
      {
        __sync_add_and_fetch((volatile int32_t *)v7, 1u);
        v5 = v32;
      }
      v8 = *v6;
      *v6 = v5;
      v32 = v8;
      v25 = v6;
      boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v32);
      v25[1] = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v24 + 4);
      *((uint8_t *)v25 + 8) = *(uint8_t *)(v24 + 8);
      *((uint8_t *)v25 + 9) = *(uint8_t *)(v24 + 9);
      *((uint8_t *)v25 + 10) = *(uint8_t *)(v24 + 10);
      *((uint8_t *)v25 + 11) = *(uint8_t *)(v24 + 11);
      *((uint16_t *)v25 + 6) = *(uint16_t *)(v24 + 12);
      *((uint16_t *)v25 + 7) = *(uint16_t *)(v24 + 14);
      if ( v23 >= (a3 - 1) / 2 )
        break;
      v4 = v23;
    }
  }
  else
  {
    v23 = a2;
    v24 = a1 + 16 * a2;
  }
  if ( (a3 & 1) == 0 && v23 == (a3 - 2) / 2 )
  {
    v18 = 2 * v23 + 1;
    v19 = a1 + 16 * v18;
    v20 = nullptr;
    v21 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v19;
    v30 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v19;
    if ( v30 != nullptr )
    {
      __sync_add_and_fetch((volatile int32_t *)v21, 1u);
      v20 = v30;
    }
    v22 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v24;
    *(uint32_t *)v24 = (uint32_t)(uintptr_t)(v20);
    v30 = v22;
    v26 = v18;
    boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v30);
    *(uint32_t *)(v24 + 4) = *(uint32_t *)(v19 + 4);
    *(uint8_t *)(v24 + 8) = *(uint8_t *)(v19 + 8);
    *(uint8_t *)(v24 + 9) = *(uint8_t *)(v19 + 9);
    *(uint8_t *)(v24 + 10) = *(uint8_t *)(v19 + 10);
    *(uint8_t *)(v24 + 11) = *(uint8_t *)(v19 + 11);
    *(uint16_t *)(v24 + 12) = *(uint16_t *)(v19 + 12);
    *(uint16_t *)(v24 + 14) = *(uint16_t *)(v19 + 14);
    v23 = v26;
    v24 = a1 + 16 * v26;
  }
  v9 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)a4;
  v34 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)a4;
  if ( v34 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v9, 1u);
  v35 = *(uint32_t *)(a4 + 4);
  v37 = *(uint8_t *)(a4 + 9);
  v38 = *(uint8_t *)(a4 + 10);
  v39 = *(uint8_t *)(a4 + 11);
  v10 = *(uint8_t *)(a4 + 8);
  v40 = *(uint16_t *)(a4 + 12);
  v11 = *(uint16_t *)(a4 + 14);
  v36 = v10;
  v41 = v11;
  if ( v23 > a2 )
  {
    v29 = (v23 - 1) / 2;
    if ( v10 > *(uint8_t *)(a1 + 16 * v29 + 8) )
    {
      while ( 1 )
      {
        v12 = nullptr;
        v24 = a1 + 16 * v29;
        v13 = a1 + 16 * v23;
        v14 = *(volatile int32_t **)v24;
        v33 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v24;
        if ( v33 != nullptr )
        {
          __sync_add_and_fetch(v14, 1u);
          v12 = v33;
        }
        v15 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v13;
        *(uint32_t *)v13 = (uint32_t)(uintptr_t)(v12);
        v33 = v15;
        boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v33);
        *(uint32_t *)(v13 + 4) = *(uint32_t *)(v24 + 4);
        *(uint8_t *)(v13 + 8) = *(uint8_t *)(v24 + 8);
        *(uint8_t *)(v13 + 9) = *(uint8_t *)(v24 + 9);
        *(uint8_t *)(v13 + 10) = *(uint8_t *)(v24 + 10);
        *(uint8_t *)(v13 + 11) = *(uint8_t *)(v24 + 11);
        *(uint16_t *)(v13 + 12) = *(uint16_t *)(v24 + 12);
        *(uint16_t *)(v13 + 14) = *(uint16_t *)(v24 + 14);
        if ( a2 >= v29 || v36 <= *(uint8_t *)(a1 + 16 * ((v29 - 1) / 2) + 8) )
          break;
        v23 = v29;
        v29 = (v29 - 1) / 2;
      }
    }
  }
  v16 = nullptr;
  v31 = v34;
  if ( v34 != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)v34, 1u);
    v16 = v31;
  }
  v17 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v24;
  *(uint32_t *)v24 = (uint32_t)(uintptr_t)(v16);
  v31 = v17;
  boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v31);
  *(uint32_t *)(v24 + 4) = v35;
  *(uint8_t *)(v24 + 8) = v36;
  *(uint8_t *)(v24 + 9) = v37;
  *(uint8_t *)(v24 + 10) = v38;
  *(uint8_t *)(v24 + 11) = v39;
  *(uint16_t *)(v24 + 12) = v40;
  *(uint16_t *)(v24 + 14) = v41;
  boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v34);
}

// ----------------------------------------------------------------------------
// Function: sub_DADF00  (binary VA: 0xdadf00)
// Original: sub_DADF00
// ----------------------------------------------------------------------------
void sub_DADF00(int a1, unsigned int a2, int a3)
{
  int v3;
  int v4;
  uint8_t v5;
  int v6;
  uint8_t v7;
  unsigned int v8;
  unsigned int v9;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v10;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v11;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v12;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v13;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v14;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v15;
  unsigned int v16;
  bool v17; // cc
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v18;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v19;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v20;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v21;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v22;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v23;
  volatile int32_t *v24;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v25;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v26;
  volatile int32_t *v27;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v28;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v29;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v30;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v31;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v32;
  char v33;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v34;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v35;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v36;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v37;
  volatile int32_t *v38;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v39;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v40;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v41;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v42;
  int v43;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v44;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v45;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v46;
  uint8_t v47;
  uint8_t v48;
  uint8_t v49;
  int16_t v50;
  int16_t v51;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v52; // kr00_4
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v53;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v54;
  typedef unsigned int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef unsigned int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef uint8_t _g4_t_v60;
  typedef uint8_t _g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef uint8_t _g4_t_v63;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef uint8_t _g4_t_v67;
  typedef uint8_t _g4_t_v68;
  typedef int _g4_t_v69;
  typedef unsigned int _g4_t_v70;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v71;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v72;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v73;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v74;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v75;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v76;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v77;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v78;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v79;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v80;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v81;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v82[3];
  typedef int16_t _g4_t_v83;
  typedef int16_t _g4_t_v84;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v85[4];
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v86;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v87;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v88;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v89;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v55)) > _g4_s0 ? (8u + sizeof(_g4_t_v55)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v56)) > _g4_s1 ? (12u + sizeof(_g4_t_v56)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v57)) > _g4_s2 ? (16u + sizeof(_g4_t_v57)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v58)) > _g4_s3 ? (16u + sizeof(_g4_t_v58)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v59)) > _g4_s4 ? (24u + sizeof(_g4_t_v59)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v60)) > _g4_s5 ? (24u + sizeof(_g4_t_v60)) : _g4_s5,
    _g4_s7 = (31u + sizeof(_g4_t_v61)) > _g4_s6 ? (31u + sizeof(_g4_t_v61)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v62)) > _g4_s7 ? (32u + sizeof(_g4_t_v62)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v63)) > _g4_s8 ? (32u + sizeof(_g4_t_v63)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v64)) > _g4_s9 ? (32u + sizeof(_g4_t_v64)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v65)) > _g4_s10 ? (36u + sizeof(_g4_t_v65)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v66)) > _g4_s11 ? (36u + sizeof(_g4_t_v66)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v67)) > _g4_s12 ? (36u + sizeof(_g4_t_v67)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v68)) > _g4_s13 ? (40u + sizeof(_g4_t_v68)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v69)) > _g4_s14 ? (40u + sizeof(_g4_t_v69)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v70)) > _g4_s15 ? (40u + sizeof(_g4_t_v70)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v71)) > _g4_s16 ? (48u + sizeof(_g4_t_v71)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v72)) > _g4_s17 ? (52u + sizeof(_g4_t_v72)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v73)) > _g4_s18 ? (56u + sizeof(_g4_t_v73)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v74)) > _g4_s19 ? (60u + sizeof(_g4_t_v74)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v75)) > _g4_s20 ? (64u + sizeof(_g4_t_v75)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v76)) > _g4_s21 ? (68u + sizeof(_g4_t_v76)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v77)) > _g4_s22 ? (72u + sizeof(_g4_t_v77)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v78)) > _g4_s23 ? (76u + sizeof(_g4_t_v78)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_v79)) > _g4_s24 ? (80u + sizeof(_g4_t_v79)) : _g4_s24,
    _g4_s26 = (84u + sizeof(_g4_t_v80)) > _g4_s25 ? (84u + sizeof(_g4_t_v80)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v81)) > _g4_s26 ? (88u + sizeof(_g4_t_v81)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v82)) > _g4_s27 ? (92u + sizeof(_g4_t_v82)) : _g4_s27,
    _g4_s29 = (104u + sizeof(_g4_t_v83)) > _g4_s28 ? (104u + sizeof(_g4_t_v83)) : _g4_s28,
    _g4_s30 = (106u + sizeof(_g4_t_v84)) > _g4_s29 ? (106u + sizeof(_g4_t_v84)) : _g4_s29,
    _g4_s31 = (108u + sizeof(_g4_t_v85)) > _g4_s30 ? (108u + sizeof(_g4_t_v85)) : _g4_s30,
    _g4_s32 = (124u + sizeof(_g4_t_v86)) > _g4_s31 ? (124u + sizeof(_g4_t_v86)) : _g4_s31,
    _g4_s33 = (128u + sizeof(_g4_t_v87)) > _g4_s32 ? (128u + sizeof(_g4_t_v87)) : _g4_s32,
    _g4_s34 = (132u + sizeof(_g4_t_v88)) > _g4_s33 ? (132u + sizeof(_g4_t_v88)) : _g4_s33,
    _g4_s35 = (136u + sizeof(_g4_t_v89)) > _g4_s34 ? (136u + sizeof(_g4_t_v89)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 8u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 12u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 24u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 24u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 31u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 32u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 36u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 36u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 36u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 40u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 40u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 40u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 48u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 52u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 56u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 64u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 68u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 72u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 76u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 80u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 84u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 88u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 92u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 104u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 106u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 108u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 124u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 128u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 132u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 136u);

  v3 = a1;
  v4 = a2 - a1;
  v62 = a2;
  if ( v4 > 271 )
  {
    if ( a3 != 0 )
    {
      v59 = v3 + 16;
      while ( 1 )
      {
        --a3;
        v5 = *(uint8_t *)(v3 + 8);
        v65 = v3 + 16 * (v4 >> 5);
        v6 = *(uint8_t *)(v65 + 8);
        v7 = *(uint8_t *)(v62 - 8);
        v68 = v7;
        if ( v5 >= (unsigned int)v6 )
        {
          if ( v5 >= (int)v7 )
          {
            v17 = v6 < v7;
            v18 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v3;
            v86 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v3;
            if ( !v17 )
            {
              if ( v18 != nullptr )
              {
                __sync_add_and_fetch((volatile int32_t *)v18, 1u);
                v5 = *(uint8_t *)(v3 + 8);
              }
              v87 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v3 + 4);
              v32 = nullptr;
              v33 = *(uint8_t *)(v3 + 9);
              LOBYTE(v88) = v5;
              BYTE1(v88) = v33;
              HIWORD(v88) = *(uint16_t *)(v3 + 10);
              v89 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v3 + 12);
              v34 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v65;
              v78 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v65;
              if ( v78 != nullptr )
              {
                __sync_add_and_fetch((volatile int32_t *)v34, 1u);
                v32 = v78;
              }
              v35 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v3;
              *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v32);
              v78 = v35;
              boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v78);
              *(uint32_t *)(v3 + 4) = *(uint32_t *)(v65 + 4);
              *(uint8_t *)(v3 + 8) = *(uint8_t *)(v65 + 8);
              *(uint8_t *)(v3 + 9) = *(uint8_t *)(v65 + 9);
              *(uint8_t *)(v3 + 10) = *(uint8_t *)(v65 + 10);
              *(uint8_t *)(v3 + 11) = *(uint8_t *)(v65 + 11);
              *(uint16_t *)(v3 + 12) = *(uint16_t *)(v65 + 12);
              *(uint16_t *)(v3 + 14) = *(uint16_t *)(v65 + 14);
              v36 = nullptr;
              v79 = v86;
              if ( v86 != nullptr )
              {
                __sync_add_and_fetch((volatile int32_t *)v86, 1u);
                v36 = v79;
              }
              v37 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v65;
              *(uint32_t *)v65 = (uint32_t)(uintptr_t)(v36);
              v79 = v37;
              v31 = &v79;
              goto LABEL_40;
            }
            if ( v18 != nullptr )
            {
              __sync_add_and_fetch((volatile int32_t *)v18, 1u);
              v5 = *(uint8_t *)(v3 + 8);
            }
            v87 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v3 + 4);
            LOBYTE(v88) = v5;
            *(uint16_t *)((char *)&v88 + 1) = *(uint16_t *)(v3 + 9);
            HIBYTE(v88) = *(uint8_t *)(v3 + 11);
            v89 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v3 + 12);
            v19 = nullptr;
            v76 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v62 - 16);
            if ( v76 != nullptr )
            {
              __sync_add_and_fetch((volatile int32_t *)v76, 1u);
              v19 = v76;
            }
            v20 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v3;
            *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v19);
            v76 = v20;
            boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v76);
            *(uint32_t *)(v3 + 4) = *(uint32_t *)(v62 - 12);
            *(uint8_t *)(v3 + 8) = *(uint8_t *)(v62 - 8);
            *(uint8_t *)(v3 + 9) = *(uint8_t *)(v62 - 7);
            *(uint8_t *)(v3 + 10) = *(uint8_t *)(v62 - 6);
            *(uint8_t *)(v3 + 11) = *(uint8_t *)(v62 - 5);
            *(uint16_t *)(v3 + 12) = *(uint16_t *)(v62 - 4);
            *(uint16_t *)(v3 + 14) = *(uint16_t *)(v62 - 2);
            v21 = nullptr;
            v77 = v86;
            if ( v86 != nullptr )
            {
              __sync_add_and_fetch((volatile int32_t *)v86, 1u);
              v21 = v77;
            }
            v22 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v62 - 16);
            *(uint32_t *)(v62 - 16) = (uint32_t)(uintptr_t)(v21);
            v77 = v22;
            v23 = &v77;
            goto LABEL_32;
          }
        }
        else
        {
          if ( v6 < v7 )
          {
            v24 = *(volatile int32_t **)v3;
            v86 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v3;
            if ( v86 != nullptr )
            {
              __sync_add_and_fetch(v24, 1u);
              v5 = *(uint8_t *)(v3 + 8);
            }
            v25 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v3 + 4);
            LOBYTE(v88) = v5;
            v87 = v25;
            v26 = nullptr;
            *(uint16_t *)((char *)&v88 + 1) = *(uint16_t *)(v3 + 9);
            HIBYTE(v88) = *(uint8_t *)(v3 + 11);
            v89 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v3 + 12);
            v27 = *(volatile int32_t **)v65;
            v72 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v65;
            if ( v72 != nullptr )
            {
              __sync_add_and_fetch(v27, 1u);
              v26 = v72;
            }
            v28 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v3;
            *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v26);
            v72 = v28;
            boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v72);
            v29 = nullptr;
            *(uint32_t *)(v3 + 4) = *(uint32_t *)(v65 + 4);
            *(uint8_t *)(v3 + 8) = *(uint8_t *)(v65 + 8);
            *(uint8_t *)(v3 + 9) = *(uint8_t *)(v65 + 9);
            *(uint8_t *)(v3 + 10) = *(uint8_t *)(v65 + 10);
            *(uint8_t *)(v3 + 11) = *(uint8_t *)(v65 + 11);
            *(uint16_t *)(v3 + 12) = *(uint16_t *)(v65 + 12);
            *(uint16_t *)(v3 + 14) = *(uint16_t *)(v65 + 14);
            v73 = v86;
            if ( v86 != nullptr )
            {
              __sync_add_and_fetch((volatile int32_t *)v86, 1u);
              v29 = v73;
            }
            v30 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v65;
            *(uint32_t *)v65 = (uint32_t)(uintptr_t)(v29);
            v73 = v30;
            v31 = &v73;
LABEL_40:
            boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v31);
            *(uint32_t *)(v65 + 4) = (uint32_t)(uintptr_t)(v87);
            *(uint32_t *)(v65 + 8) = (uint32_t)(uintptr_t)(v88);
            *(uint32_t *)(v65 + 12) = (uint32_t)(uintptr_t)(v89);
            boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v86);
            v5 = *(uint8_t *)(v3 + 8);
            v68 = *(uint8_t *)(v62 - 8);
            goto LABEL_7;
          }
          if ( v5 < (int)v7 )
          {
            v38 = *(volatile int32_t **)v3;
            v86 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v3;
            if ( v86 != nullptr )
            {
              __sync_add_and_fetch(v38, 1u);
              v5 = *(uint8_t *)(v3 + 8);
            }
            v87 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v3 + 4);
            LOBYTE(v88) = v5;
            *(uint16_t *)((char *)&v88 + 1) = *(uint16_t *)(v3 + 9);
            HIBYTE(v88) = *(uint8_t *)(v3 + 11);
            v89 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v3 + 12);
            v39 = nullptr;
            v74 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v62 - 16);
            if ( v74 != nullptr )
            {
              __sync_add_and_fetch((volatile int32_t *)v74, 1u);
              v39 = v74;
            }
            v40 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v3;
            *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v39);
            v74 = v40;
            boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v74);
            *(uint32_t *)(v3 + 4) = *(uint32_t *)(v62 - 12);
            *(uint8_t *)(v3 + 8) = *(uint8_t *)(v62 - 8);
            *(uint8_t *)(v3 + 9) = *(uint8_t *)(v62 - 7);
            *(uint8_t *)(v3 + 10) = *(uint8_t *)(v62 - 6);
            *(uint8_t *)(v3 + 11) = *(uint8_t *)(v62 - 5);
            *(uint16_t *)(v3 + 12) = *(uint16_t *)(v62 - 4);
            *(uint16_t *)(v3 + 14) = *(uint16_t *)(v62 - 2);
            v41 = nullptr;
            v75 = v86;
            if ( v86 != nullptr )
            {
              __sync_add_and_fetch((volatile int32_t *)v86, 1u);
              v41 = v75;
            }
            v42 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v62 - 16);
            *(uint32_t *)(v62 - 16) = (uint32_t)(uintptr_t)(v41);
            v75 = v42;
            v23 = &v75;
LABEL_32:
            boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v23);
            *(uint32_t *)(v62 - 12) = (uint32_t)(uintptr_t)(v87);
            *(uint32_t *)(v62 - 8) = (uint32_t)(uintptr_t)(v88);
            *(uint32_t *)(v62 - 4) = (uint32_t)(uintptr_t)(v89);
            boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v86);
            v68 = *(uint8_t *)(v62 - 8);
            v5 = *(uint8_t *)(v3 + 8);
          }
        }
LABEL_7:
        v66 = v3;
        v8 = v59;
        v9 = v62;
        while ( 1 )
        {
          if ( *(uint8_t *)(v8 + 8) < v5 )
          {
            do
              v8 += 16;
            while ( *(uint8_t *)(v8 + 8) < (int)v5 );
          }
          v9 -= 16;
          if ( v68 > (int)v5 )
          {
            do
              v9 -= 16;
            while ( *(uint8_t *)(v9 + 8) > (int)v5 );
          }
          if ( v9 <= v8 )
            break;
          v10 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v8;
          v86 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v8;
          if ( v86 != nullptr )
            __sync_add_and_fetch((volatile int32_t *)v10, 1u);
          v11 = nullptr;
          v87 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v8 + 4);
          v88 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v8 + 8);
          v89 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v8 + 12);
          v12 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v9;
          v80 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v9;
          if ( v80 != nullptr )
          {
            __sync_add_and_fetch((volatile int32_t *)v12, 1u);
            v11 = v80;
          }
          v13 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v8;
          *(uint32_t *)v8 = (uint32_t)(uintptr_t)(v11);
          v80 = v13;
          boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v80);
          v14 = nullptr;
          *(uint32_t *)(v8 + 4) = *(uint32_t *)(v9 + 4);
          *(uint8_t *)(v8 + 8) = *(uint8_t *)(v9 + 8);
          *(uint8_t *)(v8 + 9) = *(uint8_t *)(v9 + 9);
          *(uint8_t *)(v8 + 10) = *(uint8_t *)(v9 + 10);
          *(uint8_t *)(v8 + 11) = *(uint8_t *)(v9 + 11);
          *(uint16_t *)(v8 + 12) = *(uint16_t *)(v9 + 12);
          *(uint16_t *)(v8 + 14) = *(uint16_t *)(v9 + 14);
          v81 = v86;
          if ( v86 != nullptr )
          {
            __sync_add_and_fetch((volatile int32_t *)v86, 1u);
            v14 = v81;
          }
          v15 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v9;
          *(uint32_t *)v9 = (uint32_t)(uintptr_t)(v14);
          v81 = v15;
          v8 += 16;
          boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v81);
          *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(v87);
          *(uint32_t *)(v9 + 8) = (uint32_t)(uintptr_t)(v88);
          *(uint32_t *)(v9 + 12) = (uint32_t)(uintptr_t)(v89);
          boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v86);
          v68 = *(uint8_t *)(v9 - 8);
          v5 = *(uint8_t *)(v66 + 8);
        }
        v16 = v8;
        v3 = v66;
        sub_DADF00(a3);
        v4 = v16 - v66;
        if ( (int)(v16 - v66) <= 271 )
          return;
        if ( a3 == 0 )
          goto LABEL_56;
        v62 = v16;
      }
    }
    v16 = a2;
LABEL_56:
    v55 = v16;
    v57 = v4 >> 4;
    v56 = v3;
    v69 = ((v4 >> 4) - 2) >> 1;
    v43 = v3 + 16 * v69;
    while ( 1 )
    {
      v44 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v43;
      v45 = nullptr;
      v86 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v43;
      if ( v86 != nullptr )
      {
        __sync_add_and_fetch((volatile int32_t *)v44, 1u);
        v45 = v86;
      }
      v46 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v43 + 4);
      v47 = *(uint8_t *)(v43 + 9);
      v67 = *(uint8_t *)(v43 + 8);
      LOBYTE(v88) = v67;
      v63 = v47;
      v48 = *(uint8_t *)(v43 + 10);
      BYTE1(v88) = v47;
      v49 = *(uint8_t *)(v43 + 11);
      v61 = v48;
      BYTE2(v88) = v48;
      v60 = v49;
      HIBYTE(v88) = v49;
      v50 = *(uint16_t *)(v43 + 14);
      v51 = *(uint16_t *)(v43 + 12);
      v87 = v46;
      LOWORD(v89) = v51;
      HIWORD(v89) = v50;
      v82[0] = v45;
      LOWORD(v52) = __PAIR16__(v63, v67);
      HIWORD(v52) = __PAIR16__(v60, v61);
      if ( v45 != nullptr )
      {
        __sync_add_and_fetch((volatile int32_t *)v45, 1u);
        v46 = v87;
        v52 = v88;
        v51 = (int16_t)(uintptr_t)(v89);
        v50 = HIWORD(v89);
      }
      v83 = v51;
      v82[2] = v52;
      v84 = v50;
      v82[1] = v46;
      v43 -= 16;
      sub_DADBC0(v56, v69, v57, (int)(uintptr_t)(v82));
      boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v82);
      if ( v69 == 0 )
        break;
      --v69;
      boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v86);
    }
    boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v86);
    v70 = v55;
    v58 = v55 - 12;
    v53 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v55 - 12);
    do
    {
      v70 -= 16;
      v86 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v58 - 4);
      if ( v86 != nullptr )
        __sync_add_and_fetch((volatile int32_t *)v86, 1u);
      v64 = nullptr;
      v87 = *v53;
      v88 = v53[1];
      v89 = v53[2];
      v54 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v56;
      v71 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v56;
      if ( v71 != nullptr )
      {
        __sync_add_and_fetch((volatile int32_t *)v54, 1u);
        v64 = v71;
      }
      v71 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v58 - 4);
      *(uint32_t *)(v58 - 4) = (uint32_t)(uintptr_t)(v64);
      boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v71);
      *(uint32_t *)v58 = *(uint32_t *)(v56 + 4);
      *(uint8_t *)(v58 + 4) = *(uint8_t *)(v56 + 8);
      *(uint8_t *)(v58 + 5) = *(uint8_t *)(v56 + 9);
      *(uint8_t *)(v58 + 6) = *(uint8_t *)(v56 + 10);
      *(uint8_t *)(v58 + 7) = *(uint8_t *)(v56 + 11);
      *(uint16_t *)(v58 + 8) = *(uint16_t *)(v56 + 12);
      *(uint16_t *)(v58 + 10) = *(uint16_t *)(v56 + 14);
      v85[0] = v86;
      if ( v86 != nullptr )
        __sync_add_and_fetch((volatile int32_t *)v86, 1u);
      v85[1] = v87;
      v85[2] = v88;
      v53 -= 4;
      v85[3] = v89;
      sub_DADBC0(v56, 0, (int)(v70 - v56) >> 4, (int)(uintptr_t)(v85));
      boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v85);
      boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v86);
      v58 -= 16;
    }
    while ( (int)(v70 - v56) > 31 );
  }
}

// ----------------------------------------------------------------------------
// Function: sub_DAEE50  (binary VA: 0xdaee50)
// Original: sub_DAEE50
// ----------------------------------------------------------------------------
void sub_DAEE50(glf::Task::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20316B8);
  sub_5ED480((int *)a1 + 9);
  glf::Task::Destroy(a1);
}



// ============================================================================
// Address:   0xdaeea0 (size: 70 bytes)
// Symbol:    sub_DAEEA0
// Demangled: sub_DAEEA0
// ============================================================================
int (**sub_DAEEA0(uint32_t *a1))(int)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2031688);
  sub_5ED480(a1 + 1);
  *a1 = (uint32_t)(uintptr_t)(&off_204AB80);
  return (int (**)(int))(uintptr_t)(&off_204AB80);
}
// ----------------------------------------------------------------------------
// Function: sub_DB1B40  (binary VA: 0xdb1b40)
// Original: sub_DB1B40
// ----------------------------------------------------------------------------
void sub_DB1B40(int *a1)
{
  *a1 = (int)(uintptr_t)(&off_2031688);
  sub_5ED480(a1 + 1);
  *a1 = (int)(uintptr_t)(&off_204AB80);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_DB1B90  (binary VA: 0xdb1b90)
// Original: sub_DB1B90
// ----------------------------------------------------------------------------
void sub_DB1B90(glf::Task::Self *a1)
{
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20316B8);
  sub_5ED480((int *)a1 + 9);
  glf::Task::Destroy(a1);
  glf::Task::opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_DB4D50  (binary VA: 0xdb4d50)
// Original: sub_DB4D50
// ----------------------------------------------------------------------------
void sub_DB4D50(int a1)
{
  glf::Thread::sIsMain();
  glitch::video::IVideoDriver::forceCommitTexture(
    *(glitch::video::IVideoDriver::Self **)(*(uint32_t *)(*(uint32_t *)(a1 + 4) + 16) + 24),
    (const boost::intrusive_ptr<glitch::video::ITexture::Self> *)(a1 + 4));
}

// ----------------------------------------------------------------------------
// Function: sub_DB9F50  (binary VA: 0xdb9f50)
// Original: sub_DB9F50
// ----------------------------------------------------------------------------
uint32_t * sub_DB9F50(uint32_t *result, uint32_t *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  result[7] = a2[7];
  result[8] = a2[8];
  result[9] = a2[9];
  result[10] = a2[10];
  result[11] = a2[11];
  result[12] = a2[12];
  result[13] = a2[13];
  result[14] = a2[14];
  result[15] = a2[15];
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_DBB5C0  (binary VA: 0xdbb5c0)
// Original: sub_DBB5C0
// ----------------------------------------------------------------------------
glitch::video::CGLSLShaderCode::Self * sub_DBB5C0(int a1)
{
  int v1;
  volatile int32_t **v2;
  glitch::video::CGLSLShaderCode::Self *v3;
  volatile int32_t *v4;
  glitch::video::CGLSLShaderCode::Self *result;
  glitch::video::CGLSLShaderCode::Self *v6[7];

  v1 = a1;
  v6[6] = (glitch::video::CGLSLShaderCode::Self *)&a1;
  glitch::video::CGLSLShaderManager::createShaderCode(
    v6,
    *(glitch::video::ICodeShaderManager::Self **)(a1 + 4),
    *(char **)(a1 + 8),
    *(uint32_t *)(a1 + 16),
    *(char **)(a1 + 12),
    *(uint32_t *)(a1 + 20));
  v2 = *(volatile int32_t ***)(v1 + 24);
  v3 = v6[0];
  if ( v6[0] != nullptr )
    sub_8B1B00((volatile int32_t *)v6[0] + 1);
  v4 = *v2;
  *v2 = (volatile int32_t *)v3;
  if ( v4 != nullptr )
    sub_5459C0(v4);
  result = v6[0];
  if ( v6[0] != nullptr )
    return (glitch::video::CGLSLShaderCode::Self *)sub_5459C0((volatile int32_t *)v6[0]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_DBDE90  (binary VA: 0xdbde90)
// Original: sub_DBDE90
// ----------------------------------------------------------------------------
int sub_DBDE90(glitch::video::CTextureManager::Self **a1, int a2, glitch::video::ITexture::Self *a3, uint16_t a4)
{
  glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler::Self>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture *v5;
  glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler::Self>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture *v6;
  glf::App::Self *Instance;
  glf::App::Self *v10;

  v5 = (glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler::Self>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture *)glitch::video::CTextureManager::applyUsagePolicy(a1[114], a3);
  v6 = *((glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler::Self>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture **)v5
       + 2);
  if ( v6 == nullptr )
    v6 = v5;
  v10 = *(glf::App::Self **)(a2 + 4);
  glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler::Self>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::setTexture(
    (glf::Thread::Self *)a1,
    a4,
    v6,
    *(uint32_t *)(*((uint32_t *)v6 + 4) + 36) & 7);
  glUniform1i(v10, a4);
  Instance = (glf::App::Self *)glf::App::GetInstance();
  glf::App::HasContext(Instance);
  return a4 + 1;
}

// ----------------------------------------------------------------------------
// Function: sub_DBDF40  (binary VA: 0xdbdf40)
// Original: sub_DBDF40
// ----------------------------------------------------------------------------
int sub_DBDF40(glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler::Self> *a1, glitch::video::CTextureManager::Self **a2, glitch::video::CGLSLShader::Self *a3, int a4, uint16_t *a5, uint16_t *a6, int a7, int a8)
{
  uint16_t *v8;
  int v9;
  uint16_t v10;
  int v11;
  int v12;
  int v13;
  uint8_t v14;
  unsigned int v15;
  float *v16;
  float *v17;
  float v18; // xmm7_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  glf::App::Self *v22;
  glf::App::Self *v24;
  glf::App::Self *v25;
  unsigned int v26;
  uint16_t v27; // di
  glitch::video::ITexture::Self *v28;
  glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler::Self>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture *v29;
  glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler::Self>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture *v30;
  glf::App::Self *v31;
  glitch::core::Self *v32;
  unsigned int v33;
  uint32_t *v34;
  glf::App::Self *v35;
  int v36;
  uint8_t v37;
  unsigned int v38;
  uint8_t v39;
  unsigned int v40;
  glf::App::Self *v41;
  glf::App::Self *v42;
  glf::App::Self *v43;
  glf::App::Self *v44;
  glf::App::Self *Instance;
  uint8_t v46;
  int v47;
  float *v48;
  float v49; // xmm7_4
  float v50; // xmm0_4
  float v51; // xmm0_4
  float v52; // xmm1_4
  float *v53;
  float *v54;
  float v55; // xmm0_4
  float v56; // xmm1_4
  glitch::video::ITexture::Self *PlaceHolder;
  unsigned int v58;
  uint8_t *v59;
  unsigned int v60;
  float *v61;
  float v62; // xmm1_4
  float v63; // xmm0_4
  float v64; // xmm3_4
  float *v65;
  float *v66;
  float v67; // xmm1_4
  int v68;
  glitch::video::ITexture::Self *v69;
  float v70; // xmm1_4
  float v71; // xmm1_4
  float *v72;
  float *v73;
  float v74; // xmm1_4
  float v75; // xmm0_4
  float v76; // xmm2_4
  float *v77;
  float v78; // xmm0_4
  float v79; // xmm2_4
  typedef float _g4_t_v80;
  typedef float *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef uint16_t *_g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef uint16_t _g4_t_v93;
  typedef float _g4_t_v95;
  typedef int _g4_t_v96;
  typedef float *_g4_t_v97;
  typedef glitch::core::Self *_g4_t_v98;
  typedef int _g4_t_v99;
  typedef glitch::core::Self *_g4_t_v100;
  typedef unsigned int _g4_t_v101;
  typedef unsigned int _g4_t_v102;
  typedef float _g4_t_v103;
  typedef float *_g4_t_v104;
  typedef float *_g4_t_v105;
  typedef float *_g4_t_v106;
  typedef int _g4_t_v107;
  typedef uint32_t _g4_t_v108[3];
  typedef uint32_t _g4_t_v109[3];
  typedef uint32_t _g4_t_v110[9];
  typedef float _g4_t_v111;
  typedef float _g4_t_v112;
  typedef float _g4_t_v113;
  typedef float _g4_t_v114;
  typedef float _g4_t_v115;
  typedef float _g4_t_v116;
  typedef float _g4_t_v117;
  typedef float _g4_t_v118;
  typedef float _g4_t_v119;
  typedef float _g4_t_v120;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (4u + sizeof(_g4_t_v80)) > _g4_s0 ? (4u + sizeof(_g4_t_v80)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v81)) > _g4_s1 ? (12u + sizeof(_g4_t_v81)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v82)) > _g4_s2 ? (36u + sizeof(_g4_t_v82)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v83)) > _g4_s3 ? (36u + sizeof(_g4_t_v83)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v84)) > _g4_s4 ? (36u + sizeof(_g4_t_v84)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v85)) > _g4_s5 ? (36u + sizeof(_g4_t_v85)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v86)) > _g4_s6 ? (40u + sizeof(_g4_t_v86)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v87)) > _g4_s7 ? (44u + sizeof(_g4_t_v87)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v89)) > _g4_s8 ? (52u + sizeof(_g4_t_v89)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v90)) > _g4_s9 ? (56u + sizeof(_g4_t_v90)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v91)) > _g4_s10 ? (56u + sizeof(_g4_t_v91)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v92)) > _g4_s11 ? (56u + sizeof(_g4_t_v92)) : _g4_s11,
    _g4_s13 = (62u + sizeof(_g4_t_v93)) > _g4_s12 ? (62u + sizeof(_g4_t_v93)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v95)) > _g4_s13 ? (68u + sizeof(_g4_t_v95)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v96)) > _g4_s14 ? (68u + sizeof(_g4_t_v96)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v97)) > _g4_s15 ? (68u + sizeof(_g4_t_v97)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v98)) > _g4_s16 ? (68u + sizeof(_g4_t_v98)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v99)) > _g4_s17 ? (72u + sizeof(_g4_t_v99)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v100)) > _g4_s18 ? (76u + sizeof(_g4_t_v100)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v101)) > _g4_s19 ? (76u + sizeof(_g4_t_v101)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v102)) > _g4_s20 ? (76u + sizeof(_g4_t_v102)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v103)) > _g4_s21 ? (76u + sizeof(_g4_t_v103)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v104)) > _g4_s22 ? (76u + sizeof(_g4_t_v104)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v105)) > _g4_s23 ? (76u + sizeof(_g4_t_v105)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v106)) > _g4_s24 ? (76u + sizeof(_g4_t_v106)) : _g4_s24,
    _g4_s26 = (80u + sizeof(_g4_t_v107)) > _g4_s25 ? (80u + sizeof(_g4_t_v107)) : _g4_s25,
    _g4_s27 = (84u + sizeof(_g4_t_v108)) > _g4_s26 ? (84u + sizeof(_g4_t_v108)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v109)) > _g4_s27 ? (96u + sizeof(_g4_t_v109)) : _g4_s27,
    _g4_s29 = (108u + sizeof(_g4_t_v110)) > _g4_s28 ? (108u + sizeof(_g4_t_v110)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v111)) > _g4_s29 ? (144u + sizeof(_g4_t_v111)) : _g4_s29,
    _g4_s31 = (148u + sizeof(_g4_t_v112)) > _g4_s30 ? (148u + sizeof(_g4_t_v112)) : _g4_s30,
    _g4_s32 = (152u + sizeof(_g4_t_v113)) > _g4_s31 ? (152u + sizeof(_g4_t_v113)) : _g4_s31,
    _g4_s33 = (156u + sizeof(_g4_t_v114)) > _g4_s32 ? (156u + sizeof(_g4_t_v114)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v115)) > _g4_s33 ? (160u + sizeof(_g4_t_v115)) : _g4_s33,
    _g4_s35 = (164u + sizeof(_g4_t_v116)) > _g4_s34 ? (164u + sizeof(_g4_t_v116)) : _g4_s34,
    _g4_s36 = (168u + sizeof(_g4_t_v117)) > _g4_s35 ? (168u + sizeof(_g4_t_v117)) : _g4_s35,
    _g4_s37 = (172u + sizeof(_g4_t_v118)) > _g4_s36 ? (172u + sizeof(_g4_t_v118)) : _g4_s36,
    _g4_s38 = (176u + sizeof(_g4_t_v119)) > _g4_s37 ? (176u + sizeof(_g4_t_v119)) : _g4_s37,
    _g4_s39 = (180u + sizeof(_g4_t_v120)) > _g4_s38 ? (180u + sizeof(_g4_t_v120)) : _g4_s38
  };
  alignas(16) uint8_t _g4_sf[_g4_s39];
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 4u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 12u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 36u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 36u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 36u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 36u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 40u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 44u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 52u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 56u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 56u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 56u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 62u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 68u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 68u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 68u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 68u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 72u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 76u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 76u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 76u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 76u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 76u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 76u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 76u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 80u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 84u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 96u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 108u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 144u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 148u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 152u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 156u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 160u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 164u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 168u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 172u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 176u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 180u);

  v8 = a5;
  memset(v110, 205, sizeof(v110));
  v107 = 0;
  v99 = a4 + 48;
  v93 = 0;
  if ( a6 != a5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = *((uint32_t *)a3 + 2 * ((int)*v8 >> 14) + 5) + 16 * (*v8 & 0x3FFF);
        if ( *(uint8_t *)(v9 + 9) != 255 )
          break;
LABEL_11:
        v8 += 2;
        if ( v8 == a6 )
          return v93;
      }
      v10 = v8[1];
      v11 = *(uint32_t *)(a4 + 4);
      v12 = 0;
      if ( v10 < *(uint16_t *)(v11 + 14) )
        v12 = *(uint32_t *)(v11 + 32) + 16 * v10;
      v13 = *(uint8_t *)(v12 + 9);
      switch ( *(uint8_t *)(v12 + 9) )
      {
        case 1:
          v8 += 2;
          LODWORD(v80) = *(uint16_t *)(v9 + 12);
          glUniform1iv(*(uint32_t *)(v9 + 4));
          Instance = (glf::App::Self *)glf::App::GetInstance();
          glf::App::HasContext(Instance);
          if ( v8 != a6 )
            continue;
          return v93;
        case 2:
          v8 += 2;
          LODWORD(v80) = *(uint16_t *)(v9 + 12);
          glUniform2iv(*(uint32_t *)(v9 + 4));
          v44 = (glf::App::Self *)glf::App::GetInstance();
          glf::App::HasContext(v44);
          if ( v8 != a6 )
            continue;
          return v93;
        case 3:
          v8 += 2;
          LODWORD(v80) = *(uint16_t *)(v9 + 12);
          glUniform3iv(*(uint32_t *)(v9 + 4));
          v43 = (glf::App::Self *)glf::App::GetInstance();
          glf::App::HasContext(v43);
          if ( v8 != a6 )
            continue;
          return v93;
        case 4:
          v8 += 2;
          LODWORD(v80) = *(uint16_t *)(v9 + 12);
          glUniform4iv(*(uint32_t *)(v9 + 4));
          v42 = (glf::App::Self *)glf::App::GetInstance();
          glf::App::HasContext(v42);
          if ( v8 != a6 )
            continue;
          return v93;
        case 5:
          v8 += 2;
          LODWORD(v80) = *(uint16_t *)(v9 + 12);
          glUniform1fv(*(uint32_t *)(v9 + 4));
          v41 = (glf::App::Self *)glf::App::GetInstance();
          glf::App::HasContext(v41);
          if ( v8 != a6 )
            continue;
          return v93;
        case 6:
          v105 = (float *)(*(uint32_t *)(v12 + 4) + v99);
          if ( a7 == 0 || (unsigned int)*(uint8_t *)(v9 + 8) - 55 > 2 )
          {
            LODWORD(v80) = *(uint16_t *)(v9 + 12);
            glUniform2fv(*(uint32_t *)(v9 + 4));
            goto LABEL_16;
          }
          v39 = *(uint8_t *)(a8 + *(uint8_t *)(v9 + 10));
          if ( v39 != 0xFF )
          {
            v40 = *(uint16_t *)(a7 + 16 * v39 + 28);
            if ( v40 <= *(uint8_t *)(a7 + 12) && ((4 << v40) & *(uint16_t *)(a7 + 14)) != 0 )
            {
              if ( *(uint8_t *)(v9 + 8) == 56 )
              {
                v110[v40] = (uint32_t)(uintptr_t)(v105);
                v107 |= 1 << v40;
                v66 = (float *)(*(uint32_t *)(a7 + 16) + 24 * v40);
                v67 = *v105 * *v66;
                v112 = v105[1] * v66[1];
                v111 = v67;
              }
              else if ( *(uint8_t *)(v9 + 8) == 57 )
              {
                v53 = (float *)(*(uint32_t *)(a7 + 16) + 24 * v40 + 12);
                if ( ((1 << v40) & v107) != 0 )
                {
                  v54 = (float *)v110[v40];
                  v55 = (float)(v53[1] * v54[1]) + v105[1];
                  v56 = (float)(*v53 * *v54) + *v105;
                }
                else
                {
                  v55 = v105[1] + v53[1];
                  v56 = *v105 + *v53;
                }
                v112 = v55;
                v111 = v56;
              }
            }
          }
          goto LABEL_66;
        case 7:
          v104 = (float *)(*(uint32_t *)(v12 + 4) + v99);
          if ( a7 != 0 && (unsigned int)*(uint8_t *)(v9 + 8) - 55 <= 2 )
          {
            v37 = *(uint8_t *)(a8 + *(uint8_t *)(v9 + 10));
            if ( v37 != 0xFF )
            {
              v38 = *(uint16_t *)(a7 + 16 * v37 + 28);
              if ( v38 <= *(uint8_t *)(a7 + 12) && ((4 << v38) & *(uint16_t *)(a7 + 14)) != 0 )
              {
                if ( *(uint8_t *)(v9 + 8) == 56 )
                {
                  v110[v38] = (uint32_t)(uintptr_t)(v104);
                  v107 |= 1 << v38;
                  v77 = (float *)(*(uint32_t *)(a7 + 16) + 24 * v38);
                  v78 = v77[2] * v104[2];
                  v79 = *v77 * *v104;
                  v112 = v77[1] * v104[1];
                  v113 = v78;
                  v111 = v79;
                }
                else if ( *(uint8_t *)(v9 + 8) == 57 )
                {
                  v72 = (float *)(*(uint32_t *)(a7 + 16) + 24 * v38 + 12);
                  if ( ((1 << v38) & v107) != 0 )
                  {
                    v73 = (float *)v110[v38];
                    v74 = (float)(v72[1] * v73[1]) + v104[1];
                    v75 = (float)(v72[2] * v73[2]) + v104[2];
                    v76 = (float)(*v72 * *v73) + *v104;
                  }
                  else
                  {
                    v74 = v72[1] + v104[1];
                    v75 = v72[2] + v104[2];
                    v76 = *v72 + *v104;
                  }
                  v112 = v74;
                  v113 = v75;
                  v111 = v76;
                }
              }
            }
            LODWORD(v80) = 1;
            glUniform3fv(*(uint32_t *)(v9 + 4));
          }
          else if ( *(uint8_t *)(v9 + 9) == 6 )
          {
LABEL_66:
            LODWORD(v80) = 1;
            glUniform2fv(*(uint32_t *)(v9 + 4));
          }
          else
          {
            LODWORD(v80) = *(uint16_t *)(v9 + 12);
            glUniform3fv(*(uint32_t *)(v9 + 4));
          }
          goto LABEL_16;
        case 8:
          v36 = v99 + *(uint32_t *)(v12 + 4);
          if ( a7 == 0 || (unsigned int)*(uint8_t *)(v9 + 8) - 55 > 2 )
            goto LABEL_15;
          glitch::video::CProgrammableShaderHandlerBase_video_CGLSLShaderHandler_e01c81::applyTexCoordScaleOffset_vector4d_float_1bb30a(
            a1,
            a3,
            v9,
            a7,
            a8,
            v36,
            v110,
            &v107);
          goto LABEL_16;
        case 9:
          v81 = (float *)(*(uint32_t *)(v12 + 4) + v99);
          v8 += 2;
          LODWORD(v80) = *(uint16_t *)(v9 + 12);
          glUniformMatrix2fv(*(uint32_t *)(v9 + 4));
          v35 = (glf::App::Self *)glf::App::GetInstance();
          glf::App::HasContext(v35);
          if ( v8 != a6 )
            continue;
          return v93;
        case 0xA:
          v97 = (float *)(*(uint32_t *)(v12 + 4) + v99);
          if ( *(uint16_t *)(v9 + 12) == 1
            && *(uint8_t *)(v9 + 8) == 3
            && a7 != 0
            && (v46 = *(uint8_t *)(a8 + *(uint8_t *)(v9 + 10))) != 0xFF
            && (v47 = *(uint16_t *)(a7 + 16 * v46 + 28)) <= (unsigned int)*(uint8_t *)(a7 + 12)
            && ((4 << v47) & *(uint16_t *)(a7 + 14)) != 0 )
          {
            v111 = *v97;
            v112 = v97[1];
            v113 = v97[2];
            v114 = v97[3];
            v115 = v97[4];
            v116 = v97[5];
            v117 = v97[6];
            v118 = v97[7];
            v119 = v97[8];
            v87 = *(uint32_t *)(a7 + 16);
            v48 = (float *)(v87 + 24 * v47 + 12);
            v49 = *(float *)(v87 + 24 * v47 + 16);
            v50 = *v48;
            v117 = (float)((float)(*v48 * v111) + (float)(v49 * v114)) + v117;
            v118 = (float)((float)(v50 * v112) + (float)(v49 * v115)) + v118;
            v51 = *(float *)(v87 + 24 * v47 + 4);
            v52 = *(float *)(v87 + 24 * v47);
            v111 = v111 * v52;
            v81 = &v111;
            v114 = v114 * v51;
            v112 = v52 * v112;
            LODWORD(v80) = 1;
            v115 = v51 * v115;
          }
          else
          {
            v81 = (float *)(*(uint32_t *)(v12 + 4) + v99);
            LODWORD(v80) = *(uint16_t *)(v9 + 12);
          }
          glUniformMatrix3fv(*(uint32_t *)(v9 + 4));
          goto LABEL_16;
        case 0xB:
          LODWORD(v103) = *(uint16_t *)(v9 + 12);
          if ( LODWORD(v103) == 1 )
          {
            v65 = *(float **)(v99 + *(uint32_t *)(v12 + 4));
            if ( v65 == nullptr )
              v65 = (float *)glitch::core::IdentityMatrix;
            v106 = v65;
            if ( *(uint8_t *)(v9 + 8) == 3 && a7 != 0 )
            {
              v14 = *(uint8_t *)(a8 + *(uint8_t *)(v9 + 10));
              if ( v14 != 0xFF )
              {
                v15 = *(uint16_t *)(a7 + 16 * v14 + 28);
                if ( v15 <= *(uint8_t *)(a7 + 12) && ((4 << v15) & *(uint16_t *)(a7 + 14)) != 0 )
                {
                  v82 = *(uint16_t *)(a7 + 16 * v14 + 28);
                  sub_DB9F50(&v111, v106);
                  v86 = *(uint32_t *)(a7 + 16);
                  v16 = (float *)(v86 + 24 * v82 + 12);
                  v17 = (float *)(24 * v82 + v86);
                  v18 = v17[4];
                  v19 = (float)((float)(*v16 * v111) + (float)(v18 * v115)) + v119;
                  v120 = (float)((float)(*v16 * v112) + (float)(v18 * v116)) + v120;
                  v119 = v19;
                  v20 = v17[1];
                  v21 = *v17;
                  v81 = &v111;
                  LODWORD(v80) = 1;
                  v111 = v111 * *v17;
                  v115 = v115 * v20;
                  v112 = v21 * v112;
                  v116 = v20 * v116;
                  glUniformMatrix4fv(*(uint32_t *)(v9 + 4));
                  v22 = (glf::App::Self *)glf::App::GetInstance();
                  glf::App::HasContext(v22);
                  goto LABEL_11;
                }
              }
            }
            v81 = v106;
            LODWORD(v80) = 1;
            glUniformMatrix4fv(*(uint32_t *)(v9 + 4));
          }
          else
          {
            v98 = nullptr;
            if ( *(uint16_t *)(v9 + 12) != 0 )
            {
              v85 = v12;
              v98 = (glitch::core::Self *)glitch::core::allocProcessBuffer(LODWORD(v103) << 6, SLODWORD(v80));
              v91 = v9;
              v32 = v98;
              v33 = 0;
              do
              {
                v34 = *(uint32_t **)(*(uint32_t *)(v85 + 4) + v99 + 4 * v33);
                if ( v34 == nullptr )
                  v34 = (uint32_t *)(glitch::core::IdentityMatrix);
                ++v33;
                *(uint32_t *)v32 = *v34;
                *((uint32_t *)v32 + 1) = v34[1];
                *((uint32_t *)v32 + 2) = v34[2];
                *((uint32_t *)v32 + 3) = v34[3];
                *((uint32_t *)v32 + 4) = v34[4];
                *((uint32_t *)v32 + 5) = v34[5];
                *((uint32_t *)v32 + 6) = v34[6];
                *((uint32_t *)v32 + 7) = v34[7];
                *((uint32_t *)v32 + 8) = v34[8];
                *((uint32_t *)v32 + 9) = v34[9];
                *((uint32_t *)v32 + 10) = v34[10];
                *((uint32_t *)v32 + 11) = v34[11];
                *((uint32_t *)v32 + 12) = v34[12];
                *((uint32_t *)v32 + 13) = v34[13];
                *((uint32_t *)v32 + 14) = v34[14];
                *((uint32_t *)v32 + 15) = v34[15];
                v32 = (glitch::core::Self *)((char *)v32 + 64);
              }
              while ( LODWORD(v103) > v33 );
              v9 = v91;
            }
            v81 = (float *)v98;
            v80 = v103;
            glUniformMatrix4fv(*(uint32_t *)(v9 + 4));
            if ( v98 != nullptr )
              glitch::core::releaseProcessBuffer(v98, (void *)LODWORD(v103));
          }
LABEL_16:
          v24 = (glf::App::Self *)glf::App::GetInstance();
          v8 += 2;
          glf::App::HasContext(v24);
          if ( v8 == a6 )
            return v93;
          continue;
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
        case 0x10:
          v101 = *(uint8_t *)(v9 + 8) - 59;
          if ( v101 <= 0xF )
          {
            PlaceHolder = *(glitch::video::ITexture::Self **)(v99 + *(uint32_t *)(v12 + 4));
            if ( PlaceHolder == nullptr || (*(uint8_t *)(*((uint32_t *)PlaceHolder + 4) + 44) & 0x10) != 0 )
            {
              PlaceHolder = (glitch::video::ITexture::Self *)glitch::video::CTextureManager::getPlaceHolder(
                                                         a2[114],
                                                         PlaceHolder != nullptr,
                                                         v13 - 12,
                                                         v81);
              v101 = *(uint8_t *)(v9 + 8) - 59;
            }
            switch ( v101 )
            {
              case 0u:
                v80 = *(float *)(*((uint32_t *)PlaceHolder + 4) + 52);
                glUniform1f(*(uint32_t *)(v9 + 4));
                goto LABEL_11;
              case 1u:
                v111 = (float)*((int *)PlaceHolder + 5);
                v112 = (float)*((int *)PlaceHolder + 6);
                if ( (*(uint32_t *)(*((uint32_t *)PlaceHolder + 4) + 36) & 7) != 2 )
                  goto LABEL_123;
                v113 = (float)((float)HIWORD(*((uint32_t *)PlaceHolder + 7)) * 65536.0)
                     + (float)(uint16_t)*((uint32_t *)PlaceHolder + 7);
                goto LABEL_106;
              case 2u:
                v111 = 1.0 / (float)*((int *)PlaceHolder + 5);
                v112 = 1.0 / (float)*((int *)PlaceHolder + 6);
                if ( (*(uint32_t *)(*((uint32_t *)PlaceHolder + 4) + 36) & 7) == 2 )
                {
                  v113 = 1.0
                       / (float)((float)((float)HIWORD(*((uint32_t *)PlaceHolder + 7)) * 65536.0)
                               + (float)(uint16_t)*((uint32_t *)PlaceHolder + 7));
LABEL_106:
                  LODWORD(v80) = 1;
                  glUniform3fv(*(uint32_t *)(v9 + 4));
                }
                else
                {
LABEL_123:
                  LODWORD(v80) = 1;
                  glUniform2fv(*(uint32_t *)(v9 + 4));
                }
                break;
              case 3u:
                v111 = (float)*((int *)PlaceHolder + 5);
                v71 = 1.0 / (float)*((int *)PlaceHolder + 6);
                v112 = (float)*((int *)PlaceHolder + 6);
                v113 = 1.0 / v111;
                v114 = v71;
                goto LABEL_109;
              case 4u:
                v80 = (float)*((int *)PlaceHolder + 5);
                glUniform1f(*(uint32_t *)(v9 + 4));
                goto LABEL_11;
              case 5u:
                v70 = (float)*((int *)PlaceHolder + 5);
                goto LABEL_117;
              case 6u:
                v80 = (float)*((int *)PlaceHolder + 6);
                glUniform1f(*(uint32_t *)(v9 + 4));
                goto LABEL_11;
              case 7u:
                v70 = (float)*((int *)PlaceHolder + 6);
LABEL_117:
                v80 = 1.0 / v70;
                glUniform1f(*(uint32_t *)(v9 + 4));
                goto LABEL_11;
              case 8u:
                v80 = (float)((float)HIWORD(*((uint32_t *)PlaceHolder + 7)) * 65536.0)
                    + (float)(uint16_t)*((uint32_t *)PlaceHolder + 7);
                glUniform1f(*(uint32_t *)(v9 + 4));
                goto LABEL_11;
              case 9u:
                v80 = 1.0
                    / (float)((float)((float)HIWORD(*((uint32_t *)PlaceHolder + 7)) * 65536.0)
                            + (float)(uint16_t)*((uint32_t *)PlaceHolder + 7));
                glUniform1f(*(uint32_t *)(v9 + 4));
                goto LABEL_11;
              case 0xAu:
                v69 = *(glitch::video::ITexture::Self **)(*((uint32_t *)PlaceHolder + 4) + 32);
                if ( v69 == nullptr )
                  v69 = PlaceHolder;
                v93 = sub_DBDE90(a2, v9, v69, v93);
                goto LABEL_11;
              case 0xBu:
                glUniform1i(*(uint32_t *)(v9 + 4), (int)*(uint16_t *)(*((uint32_t *)PlaceHolder + 4) + 40) >> 14);
                goto LABEL_11;
              case 0xCu:
                v68 = *(uint16_t *)(*((uint32_t *)PlaceHolder + 4) + 40);
                v111 = 0.0;
                v112 = 0.0;
                v113 = 0.0;
                v114 = 0.0;
                *(&v111 + (v68 >> 14)) = 1.0;
                goto LABEL_109;
              case 0xDu:
                G4_VCALL<void>(PlaceHolder, 56, v109, &v111);
                LODWORD(v80) = 1;
                glUniform3fv(*(uint32_t *)(v9 + 4));
                goto LABEL_11;
              case 0xEu:
                G4_VCALL<void>(PlaceHolder, 56, v109, &v111);
                goto LABEL_106;
              case 0xFu:
                G4_VCALL<void>(PlaceHolder, 56, v108, v109);
                v111 = *(float *)v108;
                v112 = *(float *)&v108[1];
                v113 = *(float *)v109;
                v114 = *(float *)&v109[1];
LABEL_109:
                LODWORD(v80) = 1;
                glUniform4fv(*(uint32_t *)(v9 + 4));
                break;
              default:
                goto LABEL_11;
            }
            goto LABEL_11;
          }
          v102 = *(uint16_t *)(v9 + 12);
          if ( *(uint16_t *)(v9 + 12) == 0 )
            goto LABEL_11;
          v90 = *((uint32_t *)a3 + 2 * ((int)*v8 >> 14) + 5) + 16 * (*v8 & 0x3FFF);
          v96 = v12;
          v26 = 0;
          v89 = v8;
          do
          {
            v27 = v26 + v93;
            v28 = *(glitch::video::ITexture::Self **)(v99 + *(uint32_t *)(v96 + 4));
            if ( v28 == nullptr || (*(uint8_t *)(*((uint32_t *)v28 + 4) + 44) & 0x10) != 0 )
              v28 = (glitch::video::ITexture::Self *)glitch::video::CTextureManager::getPlaceHolder(
                                                 a2[114],
                                                 v28 != nullptr,
                                                 *(uint8_t *)(v96 + 9) - 12,
                                                 v81);
            v29 = (glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler::Self>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture *)glitch::video::CTextureManager::applyUsagePolicy(a2[114], v28);
            v30 = *((glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler::Self>>, glitch::video::detail::CProgrammableGLFunctionPointerSet>::CTexture **)v29
                  + 2);
            if ( v30 == nullptr )
              v30 = v29;
            ++v26;
            v83 = *(uint32_t *)(v90 + 4);
            glitch::video::CCommonGLDriver<glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler::Self>>,glitch::video::detail::CProgrammableGLFunctionPointerSet>::setTexture(
              (glf::Thread::Self *)a2,
              v27,
              v30,
              *(uint32_t *)(*((uint32_t *)v30 + 4) + 36) & 7);
            glUniform1i(v83, v27);
            v31 = (glf::App::Self *)glf::App::GetInstance();
            glf::App::HasContext(v31);
          }
          while ( v102 > v26 );
          v8 = v89 + 2;
          v93 += v102;
          if ( v89 + 2 == a6 )
            return v93;
          break;
        case 0x11:
          v100 = nullptr;
          LODWORD(v95) = *(uint16_t *)(v9 + 12);
          if ( *(uint16_t *)(v9 + 12) != 0 )
          {
            v84 = v12;
            v100 = (glitch::core::Self *)glitch::core::allocProcessBuffer(16 * *(uint16_t *)(v9 + 12), SLODWORD(v80));
            v92 = v9;
            v58 = 0;
            do
            {
              v59 = (uint8_t *)(*(uint32_t *)(v84 + 4) + v99);
              v60 = v58++;
              v61 = (float *)((char *)v100 + 16 * v60);
              v62 = (float)v59[2] * 0.003921569f;
              v63 = (float)v59[3] * 0.003921569f;
              v64 = (float)*v59 * 0.003921569f;
              v61[1] = (float)v59[1] * 0.003921569f;
              v61[2] = v62;
              v61[3] = v63;
              *v61 = v64;
            }
            while ( LODWORD(v95) > v58 );
            v9 = v92;
          }
          v80 = v95;
          glUniform4fv(*(uint32_t *)(v9 + 4));
          v25 = (glf::App::Self *)glf::App::GetInstance();
          glf::App::HasContext(v25);
          if ( v100 == nullptr )
            goto LABEL_11;
          v8 += 2;
          glitch::core::releaseProcessBuffer(v100, (void *)LODWORD(v95));
          if ( v8 == a6 )
            return v93;
          continue;
        case 0x12:
LABEL_15:
          LODWORD(v80) = *(uint16_t *)(v9 + 12);
          glUniform4fv(*(uint32_t *)(v9 + 4));
          goto LABEL_16;
        case 0x13:
          v8 += 2;
          glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler::Self>::commitLightParameter(
            a1,
            (glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler::Self>> *)a2,
            a3,
            *(const glitch::video::CLight::Self **)(v99 + *(uint32_t *)(v12 + 4)),
            (const glitch::video::SShaderParameterDef::Self *)v9);
          if ( v8 != a6 )
            continue;
          return v93;
        default:
          goto LABEL_11;
      }
    }
  }
  return v93;
}

// ----------------------------------------------------------------------------
// Function: sub_DBF1D0  (binary VA: 0xdbf1d0)
// Original: sub_DBF1D0
// ----------------------------------------------------------------------------
int sub_DBF1D0(int a1, int a2, int a3)
{
  const char *i;
  int v4;
  int v5;
  const char *v6;
  char *String;
  int v8;
  GLint v9;
  glf::App::Self *v10;
  glf::App::Self *v11;
  int v12;
  int v13;
  bool v14; // cc
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  int v26;
  char v27;
  char v28; // di
  bool v29;
  char v30;
  char v31;
  int v32;
  int v33;
  unsigned int v34;
  unsigned int v35;
  int v36;
  int v37;
  int v38;
  int16_t v39;
  int v40;
  int16_t v41;
  int16_t v42;
  int v43;
  char v44; // di
  int v45;
  int16_t v46;
  char v47;
  int v48;
  int16_t v49;
  int v50;
  int v51;
  int v52;
  int16_t v53;
  int v54;
  int16_t v55;
  int16_t v56;
  int v57;
  int v58;
  int v59;
  int16_t v60;
  int v61;
  int16_t v62;
  int16_t v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int16_t v68;
  int v69;
  int16_t v70;
  int v71;
  int v72;
  int16_t v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int16_t v81;
  uint64_t v82; // xmm0_8
  uint64_t v83; // xmm3_8
  uint64_t v84; // xmm1_8
  g4_int128_t v85;
  int16_t v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  const char *v93;
  unsigned int v94;
  char *v95;
  int v96;
  int v97;
  glf::App::Self *Instance;
  glf::App::Self *v100;
  char v101;
  int v102;
  int16_t v103; // si
  unsigned int v104;
  char *v105;
  unsigned int v106;
  uint8_t *v107;
  size_t v108;
  unsigned int v109;
  uint8_t *v110;
  int *v111;
  unsigned int v112;
  int v113;
  unsigned int v114;
  int v115;
  int *v116;
  unsigned int v117;
  const GLubyte *v118;
  unsigned int v119;
  char *v120;
  int v121;
  const GLubyte *v122;
  const char *v123;
  unsigned int v124;
  char *v125;
  int v126;
  int16_t MaxLightCount;
  char v128;
  glf::App::Self *v129;
  glf::App::Self *v130;
  int16_t v131;
  int16_t v132;
  GLint v133;
  char *v134;
  char *v135;
  char *v136;
  typedef int16_t _g4_t_v137;
  typedef int _g4_t_v138;
  typedef int _g4_t_v139;
  typedef char _g4_t_n;
  typedef size_t _g4_t_na;
  typedef size_t _g4_t_nb;
  typedef size_t _g4_t_nc;
  typedef size_t _g4_t_nd;
  typedef int _g4_t_v145;
  typedef int _g4_t_v146;
  typedef int _g4_t_v147;
  typedef int _g4_t_v149;
  typedef int _g4_t_v150;
  typedef int _g4_t_v151;
  typedef int _g4_t_v152;
  typedef int _g4_t_v153;
  typedef int _g4_t_v154;
  typedef int _g4_t_v155;
  typedef int _g4_t_v156;
  typedef int16_t _g4_t_v157;
  typedef int _g4_t_v158;
  typedef int _g4_t_v159;
  typedef unsigned int _g4_t_v160;
  typedef int _g4_t_v161;
  typedef int16_t _g4_t_v162;
  typedef int _g4_t_v163;
  typedef int _g4_t_v164;
  typedef char _g4_t_s2;
  typedef unsigned int _g4_t_s2a;
  typedef uint8_t *_g4_t_s2b;
  typedef const char *_g4_t_s2c;
  typedef GLint _g4_t_params[4];
  typedef volatile int32_t *_g4_t_v171[4];
  typedef int _g4_t_v172;
  typedef unsigned int _g4_t_v173[3];
  typedef GLint _g4_t_v174;
  typedef uint16_t _g4_t_v175[2];
  typedef char _g4_t_v176;
  typedef char _g4_t_v177;
  typedef char _g4_t_v178;
  typedef char _g4_t_v179;
  typedef unsigned int _g4_t_v180;
  typedef GLint _g4_t_v181;
  typedef GLint _g4_t_v182;
  typedef int *_g4_t_v183;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v137)) > _g4_s0 ? (0u + sizeof(_g4_t_v137)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v138)) > _g4_s1 ? (28u + sizeof(_g4_t_v138)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v139)) > _g4_s2 ? (28u + sizeof(_g4_t_v139)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_n)) > _g4_s3 ? (32u + sizeof(_g4_t_n)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_na)) > _g4_s4 ? (32u + sizeof(_g4_t_na)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_nb)) > _g4_s5 ? (32u + sizeof(_g4_t_nb)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_nc)) > _g4_s6 ? (32u + sizeof(_g4_t_nc)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_nd)) > _g4_s7 ? (32u + sizeof(_g4_t_nd)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v145)) > _g4_s8 ? (36u + sizeof(_g4_t_v145)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v146)) > _g4_s9 ? (40u + sizeof(_g4_t_v146)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v147)) > _g4_s10 ? (44u + sizeof(_g4_t_v147)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v149)) > _g4_s11 ? (52u + sizeof(_g4_t_v149)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v150)) > _g4_s12 ? (52u + sizeof(_g4_t_v150)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v151)) > _g4_s13 ? (52u + sizeof(_g4_t_v151)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v152)) > _g4_s14 ? (56u + sizeof(_g4_t_v152)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v153)) > _g4_s15 ? (56u + sizeof(_g4_t_v153)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v154)) > _g4_s16 ? (60u + sizeof(_g4_t_v154)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v155)) > _g4_s17 ? (60u + sizeof(_g4_t_v155)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v156)) > _g4_s18 ? (60u + sizeof(_g4_t_v156)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v157)) > _g4_s19 ? (60u + sizeof(_g4_t_v157)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v158)) > _g4_s20 ? (60u + sizeof(_g4_t_v158)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v159)) > _g4_s21 ? (64u + sizeof(_g4_t_v159)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v160)) > _g4_s22 ? (64u + sizeof(_g4_t_v160)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v161)) > _g4_s23 ? (68u + sizeof(_g4_t_v161)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v162)) > _g4_s24 ? (68u + sizeof(_g4_t_v162)) : _g4_s24,
    _g4_s26 = (68u + sizeof(_g4_t_v163)) > _g4_s25 ? (68u + sizeof(_g4_t_v163)) : _g4_s25,
    _g4_s27 = (68u + sizeof(_g4_t_v164)) > _g4_s26 ? (68u + sizeof(_g4_t_v164)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_s2)) > _g4_s27 ? (72u + sizeof(_g4_t_s2)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_s2a)) > _g4_s28 ? (72u + sizeof(_g4_t_s2a)) : _g4_s28,
    _g4_s30 = (72u + sizeof(_g4_t_s2b)) > _g4_s29 ? (72u + sizeof(_g4_t_s2b)) : _g4_s29,
    _g4_s31 = (72u + sizeof(_g4_t_s2c)) > _g4_s30 ? (72u + sizeof(_g4_t_s2c)) : _g4_s30,
    _g4_s32 = (80u + sizeof(_g4_t_params)) > _g4_s31 ? (80u + sizeof(_g4_t_params)) : _g4_s31,
    _g4_s33 = (96u + sizeof(_g4_t_v171)) > _g4_s32 ? (96u + sizeof(_g4_t_v171)) : _g4_s32,
    _g4_s34 = (112u + sizeof(_g4_t_v172)) > _g4_s33 ? (112u + sizeof(_g4_t_v172)) : _g4_s33,
    _g4_s35 = (128u + sizeof(_g4_t_v173)) > _g4_s34 ? (128u + sizeof(_g4_t_v173)) : _g4_s34,
    _g4_s36 = (140u + sizeof(_g4_t_v174)) > _g4_s35 ? (140u + sizeof(_g4_t_v174)) : _g4_s35,
    _g4_s37 = (144u + sizeof(_g4_t_v175)) > _g4_s36 ? (144u + sizeof(_g4_t_v175)) : _g4_s36,
    _g4_s38 = (148u + sizeof(_g4_t_v176)) > _g4_s37 ? (148u + sizeof(_g4_t_v176)) : _g4_s37,
    _g4_s39 = (149u + sizeof(_g4_t_v177)) > _g4_s38 ? (149u + sizeof(_g4_t_v177)) : _g4_s38,
    _g4_s40 = (150u + sizeof(_g4_t_v178)) > _g4_s39 ? (150u + sizeof(_g4_t_v178)) : _g4_s39,
    _g4_s41 = (151u + sizeof(_g4_t_v179)) > _g4_s40 ? (151u + sizeof(_g4_t_v179)) : _g4_s40,
    _g4_s42 = (152u + sizeof(_g4_t_v180)) > _g4_s41 ? (152u + sizeof(_g4_t_v180)) : _g4_s41,
    _g4_s43 = (156u + sizeof(_g4_t_v181)) > _g4_s42 ? (156u + sizeof(_g4_t_v181)) : _g4_s42,
    _g4_s44 = (160u + sizeof(_g4_t_v182)) > _g4_s43 ? (160u + sizeof(_g4_t_v182)) : _g4_s43,
    _g4_s45 = (184u + sizeof(_g4_t_v183)) > _g4_s44 ? (184u + sizeof(_g4_t_v183)) : _g4_s44
  };
  alignas(16) uint8_t _g4_sf[_g4_s45];
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 0u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 28u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 28u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 32u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 32u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 32u);
  _g4_t_nc &nc = *reinterpret_cast<_g4_t_nc *>(_g4_sf + 32u);
  _g4_t_nd &nd = *reinterpret_cast<_g4_t_nd *>(_g4_sf + 32u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 36u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 40u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 44u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 52u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 52u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 52u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 56u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 56u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 60u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 60u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 60u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 60u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 60u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 64u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 64u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 68u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 68u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 68u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 68u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 72u);
  _g4_t_s2a &s2a = *reinterpret_cast<_g4_t_s2a *>(_g4_sf + 72u);
  _g4_t_s2b &s2b = *reinterpret_cast<_g4_t_s2b *>(_g4_sf + 72u);
  _g4_t_s2c &s2c = *reinterpret_cast<_g4_t_s2c *>(_g4_sf + 72u);
  _g4_t_params &params = *reinterpret_cast<_g4_t_params *>(_g4_sf + 80u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 96u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 112u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 128u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 140u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 144u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 148u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 149u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 150u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 151u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 152u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 156u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 160u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 184u);

  v183 = &a3;
  glitch::video::IVideoDriver::SConfig::Construct((glitch::video::IVideoDriver::SConfig *)v175);
  for ( i = (const char *)glGetString(0x1F02u); ; ++i )
  {
    v4 = *i;
    if ( v4 != -1 && (*(uint8_t *)(ctype_ + (uint8_t)v4 + 1) & 4) != 0 )
      break;
  }
  v172 = 0;
  v174 = 0;
  if ( sscanf(i, "%u.%u", &v172, &v174) <= 0 )
  {
    v5 = v172;
  }
  else
  {
    v5 = 100 * v172;
    v172 *= 100;
  }
  *(uint32_t *)(a1 + 1492) = v174 + v5;
  if ( (uint8_t)glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler::Self>>::doVersionCheck((glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler::Self>> *)a1) == 0 )
    return 0;
  v6 = "    OpenGL|ES driver version is 1.1 or better.";
  if ( *(uint32_t *)(a1 + 1492) < 0x65u )
    v6 = "    Warning: OpenGL|ES driver version is not 1.1 or better.";
  glitch::os::Printer::logf(1, (int)(uintptr_t)(v6));
  String = (char *)glGetString(0x1F03u);
  glitch::video::CCommonGLDriverBase::initExtensions((glitch::video::CCommonGLDriverBase::Self *)a1, String);
  v8 = a1;
  if ( (*(uint8_t *)(a1 + 2830) & 0x20) != 0 )
  {
    glGetFloatv(0x84FFu, (GLfloat *)(a1 + 1496));
    Instance = (glf::App::Self *)glf::App::GetInstance();
    glf::App::HasContext(Instance);
    v8 = a1;
  }
  glitch::video::detail::CCommonGLFunctionPointerSet_516154_6404d8::init(
    (glitch::video::detail::CCommonGLFunctionPointerSet<516154> *)(v8 + 2876),
    (const glitch::video::CCommonGLDriverBase::Self *)v8);
  params[0] = 0;
  glGetIntegerv(0x8872u, params);
  v9 = params[0];
  if ( params[0] >= 8u )
    v9 = 8;
  v180 = v9;
  v10 = (glf::App::Self *)glf::App::GetInstance();
  glf::App::HasContext(v10);
  params[0] = 0;
  glGetIntegerv(0xD33u, params);
  v181 = params[0];
  v182 = params[0];
  v11 = (glf::App::Self *)glf::App::GetInstance();
  glf::App::HasContext(v11);
  s2 = G4_VCALL<int>(a1, 64);
  params[0] = 0;
  *(uint32_t *)(a1 + 252) |= 2u;
  glGetIntegerv(0xD57u, params);
  v12 = *(uint32_t *)(a1 + 252);
  v13 = v12 | 1;
  v14 = v180 <= 1;
  *(uint32_t *)(a1 + 252) = v12 | 1;
  v176 = params[0];
  if ( !v14 )
  {
    v13 = v12 | 5;
    *(uint32_t *)(a1 + 252) = v12 | 5;
  }
  if ( *(char *)(a1 + 2816) >= 0 )
  {
    v15 = *(uint32_t *)(a1 + 2856);
    if ( (v15 & 0x20000) == 0 )
      goto LABEL_19;
  }
  else
  {
    v15 = *(uint32_t *)(a1 + 2856);
  }
  v13 |= 0x20u;
LABEL_19:
  v16 = v13 | 0x40;
  *(uint32_t *)(a1 + 252) = v16;
  v17 = *(uint32_t *)(a1 + 2800);
  if ( (v17 & 0x40000000) != 0 || *(char *)(a1 + 2834) < 0 )
    LOBYTE(v16) = v16 | 0x80;
  BYTE1(v16) |= 0x18u;
  *(uint32_t *)(a1 + 252) = v16;
  if ( (v15 & 0x400000) != 0 || (*(uint8_t *)(a1 + 2868) & 0x10) != 0 )
  {
    v16 |= 0x82000u;
    *(uint32_t *)(a1 + 252) = v16;
  }
  if ( (*(uint8_t *)(a1 + 2830) & 0x20) != 0 )
    v16 |= 0x40000u;
  v18 = v16 | 0x100000;
  *(uint32_t *)(a1 + 252) = v18;
  if ( (v15 & 0x8000000) != 0 || (v17 & 0x4000) != 0 )
  {
    v18 |= 0x200000u;
    *(uint32_t *)(a1 + 252) = v18;
  }
  if ( (s2 & 0xF5) != 0 && (v19 = a1, *(uint32_t *)(a1 + 1492) > 0x12Bu) || (v19 = a1, (*(uint8_t *)(a1 + 2844) & 2) != 0) )
  {
    v18 |= 0x400000u;
    *(uint32_t *)(v19 + 252) = v18;
  }
  if ( (s2 & 0xF5) != 0 && *(uint32_t *)(a1 + 1492) > 0x12Bu || (v15 & 0x300000) != 0 || (*(uint8_t *)(a1 + 2804) & 2) != 0 )
    v18 |= 0x800000u;
  v20 = v18 | 0x14000000;
  v21 = *(uint32_t *)(a1 + 2864);
  *(uint32_t *)(a1 + 252) = v20;
  if ( v21 < 0 )
  {
    v22 = a1;
    v23 = *(uint32_t *)(a1 + 256) | 0x3C0;
  }
  else
  {
    v22 = a1;
    if ( (v15 & 0x1000) != 0 )
      v23 = *(uint32_t *)(a1 + 256) | 0x40;
    else
      v23 = *(uint32_t *)(a1 + 256);
  }
  v24 = v20 | 0xC0000000;
  *(uint32_t *)(v22 + 256) = v23 | 0x32;
  v25 = *(uint32_t *)(v22 + 2860);
  *(uint32_t *)(v22 + 252) = v24;
  if ( (v25 & 0x40000) != 0 )
  {
    glGetIntegerv(0x8ED3u, &v174);
    v133 = v174;
    glGetIntegerv(0x8ED4u, &v174);
    if ( v133 * v174 > 0 )
      *(uint32_t *)(a1 + 256) |= 0x400u;
    else
      *(uint32_t *)(a1 + 256) &= ~0x400u;
    v22 = a1;
    v25 = *(uint32_t *)(a1 + 2860);
    v24 = *(uint32_t *)(a1 + 252);
  }
  *(uint32_t *)(v22 + 256) |= 0x800u;
  *(uint32_t *)(v22 + 252) = v24 | 0x1000000;
  if ( (v25 & 0x20800000) != 0
    || ((v26 = *(uint32_t *)(v22 + 2864)) & 0x20000) != 0
    || (v25 & 0x100000) != 0
    || (*(uint8_t *)(v22 + 2843) & 1) != 0
    || (s2 & 0xA) == 0 && *(uint32_t *)(v22 + 1492) > 0x12Bu )
  {
    glGetIntegerv(0x8D57u, &v174);
    v27 = v174;
    if ( v174 > 1 )
      *(uint32_t *)(a1 + 256) |= 0x1000u;
    else
      *(uint32_t *)(a1 + 256) &= ~0x1000u;
    v178 = v27;
    v26 = *(uint32_t *)(a1 + 2864);
    if ( (v26 & 0x20000) == 0 && (*(uint8_t *)(a1 + 2862) & 0x10) == 0 )
      *(uint32_t *)(a1 + 1500) = 1;
  }
  if ( (*(uint8_t *)(a1 + 2857) & 4) != 0 )
    *(uint32_t *)(a1 + 256) |= 0x4000u;
  v28 = 0;
  if ( (v26 & 0x2000) != 0 )
  {
    v28 = 1;
    *(uint32_t *)(a1 + 256) |= 0x40000u;
  }
  v29 = v28;
  if ( (*(uint8_t *)(a1 + 2802) & 0x20) != 0 )
  {
    v28 = 1;
    v29 = (*(uint8_t *)(a1 + 2808) & 0x10) != 0;
    *(uint32_t *)(a1 + 256) |= 0x10000u;
  }
  n = v29;
  v30 = G4_VCALL<int>(a1, 64);
  v31 = n;
  if ( (v30 & 0xA) != 0 || *(uint32_t *)(a1 + 1492) <= 0x149u )
  {
    v32 = *(uint32_t *)(a1 + 256);
    if ( v28 == 0 )
    {
      BYTE1(v32) &= ~0x80u;
      *(uint32_t *)(a1 + 256) = v32;
      if ( n == 0 )
        goto LABEL_56;
      goto LABEL_178;
    }
    v33 = a1;
  }
  else
  {
    v31 = 1;
    v32 = *(uint32_t *)(a1 + 256) | 0x380000;
    v33 = a1;
  }
  BYTE1(v32) |= 0x80u;
  *(uint32_t *)(v33 + 256) = v32;
  if ( v31 == 0 )
  {
LABEL_56:
    v34 = v32 & 0xFFFDFFFF;
    *(uint32_t *)(a1 + 256) = v34;
    goto LABEL_57;
  }
LABEL_178:
  v34 = v32 | 0x20000;
  *(uint32_t *)(a1 + 256) = v34;
LABEL_57:
  if ( s2 != 0 && *(uint32_t *)(a1 + 1492) > 0x13Fu
    || (s2 & 0xA) != 0 && *(uint32_t *)(a1 + 1492) > 0x12Bu
    || (*(uint8_t *)(a1 + 2807) & 1) != 0
    || (*(uint8_t *)(a1 + 2868) & 4) != 0
    || (*(uint8_t *)(a1 + 2862) & 0x20) != 0
    || (*(uint8_t *)(a1 + 2834) & 1) != 0
    || (*(uint8_t *)(a1 + 2838) & 0x20) != 0 )
  {
    v35 = v34 | 0x400000;
    *(uint32_t *)(a1 + 256) = v35;
  }
  else
  {
    v35 = v34 & 0xFFBFFFFF;
    *(uint32_t *)(a1 + 256) = v35;
  }
  if ( s2 != 0 && *(uint32_t *)(a1 + 1492) > 0x18Fu )
  {
    *(uint32_t *)(a1 + 256) = v35 | 0x800000;
    v36 = a1;
    if ( (*(uint8_t *)(a1 + 2864) & 0x20) == 0 )
      goto LABEL_63;
LABEL_163:
    glGetIntegerv(0x8CDFu, &v174);
    v100 = (glf::App::Self *)glf::App::GetInstance();
    glf::App::HasContext(v100);
    v101 = v174;
    if ( (uint8_t)v174 > 4u )
    {
      v101 = 4;
    }
    else if ( (uint8_t)v174 == 0 )
    {
      v101 = 1;
    }
    v177 = v101;
    s2a = *(uint32_t *)(a1 + 2856);
    v37 = s2a & 0x2000;
    if ( (s2a & 0x2000) == 0 )
      goto LABEL_64;
LABEL_167:
    v39 = 15;
    v38 = a1;
    v102 = *(uint32_t *)(a1 + 2860);
    *(uint16_t *)(a1 + 1504) = 0;
    *(uint16_t *)(a1 + 1506) = 15;
    *(uint32_t *)(a1 + 1508) = 6409;
    *(uint32_t *)(a1 + 1512) = 32832;
    *(uint32_t *)(a1 + 1516) = 6409;
    *(uint32_t *)(a1 + 1520) = 5121;
    *(uint32_t *)(a1 + 1524) = 0;
    v159 = v102;
    goto LABEL_66;
  }
  *(uint32_t *)(a1 + 256) = v35 & 0xFF7FFFFF;
  v36 = a1;
  if ( (*(uint8_t *)(a1 + 2864) & 0x20) != 0 )
    goto LABEL_163;
LABEL_63:
  s2a = *(uint32_t *)(v36 + 2856);
  v37 = s2a & 0x2000;
  if ( (s2a & 0x2000) != 0 )
    goto LABEL_167;
LABEL_64:
  v159 = *(uint32_t *)(a1 + 2860);
  v38 = a1;
  *(uint16_t *)(a1 + 1504) = 0;
  if ( (v159 & 0x8000000) != 0 )
  {
    *(uint16_t *)(a1 + 1506) = 15;
    *(uint32_t *)(a1 + 1508) = 6409;
    *(uint32_t *)(a1 + 1512) = 32832;
    *(uint32_t *)(a1 + 1516) = 6409;
    *(uint32_t *)(a1 + 1520) = 5121;
    *(uint32_t *)(a1 + 1524) = 0;
    v39 = 15;
  }
  else
  {
    *(uint16_t *)(a1 + 1506) = 5;
    *(uint32_t *)(a1 + 1508) = 6409;
    *(uint32_t *)(a1 + 1512) = 32832;
    *(uint32_t *)(a1 + 1516) = 6409;
    *(uint32_t *)(a1 + 1520) = 5121;
    *(uint32_t *)(a1 + 1524) = 0;
    v39 = 5;
  }
LABEL_66:
  *(uint16_t *)(v38 + 1528) = 0;
  *(uint16_t *)(v38 + 1530) = v39;
  *(uint32_t *)(v38 + 1532) = 0;
  *(uint32_t *)(v38 + 1536) = 0;
  *(uint32_t *)(v38 + 1540) = 0;
  *(uint32_t *)(v38 + 1544) = 0;
  *(uint32_t *)(v38 + 1548) = 0;
  *(uint16_t *)(v38 + 1552) = 2;
  *(uint16_t *)(v38 + 1554) = 15;
  *(uint32_t *)(v38 + 1556) = 6406;
  *(uint32_t *)(v38 + 1560) = 32828;
  *(uint32_t *)(v38 + 1564) = 6406;
  *(uint32_t *)(v38 + 1568) = 5121;
  *(uint32_t *)(v38 + 1572) = 0;
  if ( v37 != 0 )
  {
    *(uint16_t *)(v38 + 1576) = 4;
    *(uint16_t *)(v38 + 1578) = 15;
    *(uint32_t *)(v38 + 1580) = -1;
    *(uint32_t *)(v38 + 1584) = -1;
    *(uint32_t *)(v38 + 1588) = -1;
    *(uint32_t *)(v38 + 1592) = -1;
    *(uint32_t *)(v38 + 1596) = 0;
    v41 = 15;
    v40 = a1;
  }
  else
  {
    v40 = a1;
    if ( (v159 & 0x8000000) != 0 )
    {
      v41 = 15;
      *(uint16_t *)(a1 + 1576) = 4;
      *(uint16_t *)(a1 + 1578) = 15;
    }
    else
    {
      v41 = 7;
      *(uint16_t *)(a1 + 1576) = 4;
      *(uint16_t *)(a1 + 1578) = 7;
    }
    *(uint32_t *)(a1 + 1580) = -1;
    *(uint32_t *)(a1 + 1584) = -1;
    *(uint32_t *)(a1 + 1588) = -1;
    *(uint32_t *)(a1 + 1592) = -1;
    *(uint32_t *)(a1 + 1596) = 0;
  }
  *(uint16_t *)(v40 + 1600) = 4;
  *(uint16_t *)(v40 + 1602) = v41;
  *(uint32_t *)(v40 + 1604) = 6410;
  *(uint32_t *)(v40 + 1608) = 32837;
  *(uint32_t *)(v40 + 1612) = 6410;
  *(uint32_t *)(v40 + 1616) = 5121;
  *(uint32_t *)(v40 + 1620) = 0;
  *(uint16_t *)(v40 + 1624) = 5;
  *(uint16_t *)(v40 + 1626) = 5;
  *(uint32_t *)(v40 + 1628) = 6407;
  *(uint32_t *)(v40 + 1632) = 36194;
  *(uint32_t *)(v40 + 1636) = 6407;
  *(uint32_t *)(v40 + 1640) = 33635;
  *(uint32_t *)(v40 + 1644) = 36194;
  *(uint16_t *)(v40 + 1648) = 7;
  *(uint16_t *)(v40 + 1650) = 7;
  *(uint32_t *)(v40 + 1652) = 0;
  *(uint32_t *)(v40 + 1656) = 0;
  *(uint32_t *)(v40 + 1660) = 0;
  *(uint32_t *)(v40 + 1664) = 0;
  *(uint32_t *)(v40 + 1668) = 0;
  *(uint16_t *)(v40 + 1672) = 7;
  *(uint16_t *)(v40 + 1674) = 7;
  *(uint32_t *)(v40 + 1676) = 6408;
  *(uint32_t *)(v40 + 1680) = 32854;
  *(uint32_t *)(v40 + 1684) = 6408;
  *(uint32_t *)(v40 + 1688) = 32819;
  *(uint32_t *)(v40 + 1692) = 32854;
  *(uint16_t *)(v40 + 1720) = 10;
  *(uint16_t *)(v40 + 1722) = 10;
  *(uint32_t *)(v40 + 1724) = 0;
  *(uint32_t *)(v40 + 1728) = 0;
  *(uint32_t *)(v40 + 1732) = 0;
  *(uint32_t *)(v40 + 1736) = 0;
  *(uint32_t *)(v40 + 1740) = 0;
  *(uint16_t *)(v40 + 1744) = 10;
  *(uint16_t *)(v40 + 1746) = 10;
  *(uint32_t *)(v40 + 1748) = 6408;
  *(uint32_t *)(v40 + 1752) = 32855;
  *(uint32_t *)(v40 + 1756) = 6408;
  *(uint32_t *)(v40 + 1760) = 32820;
  *(uint32_t *)(v40 + 1764) = 32855;
  if ( v37 != 0 )
  {
    *(uint16_t *)(v40 + 1768) = 11;
    *(g4_int128_t *)(v40 + 1772) = xmmword_1C7C4D0;
    *(uint16_t *)(v40 + 1770) = 11;
    *(uint32_t *)(v40 + 1788) = 32849;
    v42 = 11;
    v43 = a1;
  }
  else
  {
    v43 = v40;
    *(uint16_t *)(v40 + 1768) = 11;
    *(uint32_t *)(v40 + 1788) = 0;
    *(uint16_t *)(v40 + 1770) = (v159 & 0x8000000) == 0 ? 5 : 15;
    *(g4_int128_t *)(v40 + 1772) = xmmword_1C7C4D0;
    v42 = (v159 & 0x8000000) == 0 ? 5 : 15;
  }
  *(uint16_t *)(v43 + 1792) = 11;
  *(uint16_t *)(v43 + 1794) = v42;
  *(uint32_t *)(v43 + 1796) = 0;
  *(uint32_t *)(v43 + 1800) = 0;
  *(uint32_t *)(v43 + 1804) = 0;
  *(uint32_t *)(v43 + 1808) = 0;
  *(uint32_t *)(v43 + 1812) = 0;
  *(uint16_t *)(v43 + 1816) = 15;
  *(uint16_t *)(v43 + 1818) = 15;
  *(uint32_t *)(v43 + 1820) = 0;
  *(uint32_t *)(v43 + 1824) = 0;
  *(uint32_t *)(v43 + 1828) = 0;
  *(uint32_t *)(v43 + 1832) = 0;
  *(uint32_t *)(v43 + 1836) = 0;
  if ( (v159 & 0x1000002) != 0 || (*(uint8_t *)(v43 + 2868) & 8) != 0 )
  {
    v152 = 5121;
    v161 = 32993;
    v44 = 1;
    v149 = 37793;
    v45 = (v159 & 0x1000000) == 0 ? 32993 : 6408;
  }
  else
  {
    v152 = 0;
    v161 = 0;
    v44 = 0;
    v149 = 0;
    v45 = 0;
  }
  v46 = 15;
  if ( v37 == 0 )
    v46 = (v159 & 0x8000000) == 0 ? 6 : 15;
  v47 = v44;
  v48 = a1;
  *(uint16_t *)(a1 + 1842) = v46;
  *(uint32_t *)(a1 + 1844) = v45;
  *(uint16_t *)(a1 + 1840) = 15 - (v47 != 0);
  *(uint32_t *)(a1 + 1848) = v149;
  *(uint32_t *)(a1 + 1852) = v161;
  *(uint32_t *)(a1 + 1856) = v152;
  *(uint32_t *)(a1 + 1860) = 0;
  if ( v37 != 0 )
  {
    *(uint16_t *)(a1 + 1864) = 15;
    *(g4_int128_t *)(a1 + 1868) = xmmword_1C7C4E0;
    *(uint16_t *)(a1 + 1866) = 15;
  }
  else
  {
    if ( (v159 & 0x8000000) == 0 )
    {
      *(uint16_t *)(a1 + 1864) = 15;
      *(g4_int128_t *)(a1 + 1868) = xmmword_1C7C4E0;
      *(uint16_t *)(a1 + 1866) = 7;
      *(uint32_t *)(a1 + 1884) = 0;
      v49 = 7;
      goto LABEL_80;
    }
    v48 = a1;
    *(g4_int128_t *)(a1 + 1868) = xmmword_1C7C4E0;
    *(uint16_t *)(a1 + 1864) = 15;
    *(uint16_t *)(a1 + 1866) = 15;
  }
  *(uint32_t *)(v48 + 1884) = 32856;
  v49 = 15;
  if ( v37 == 0 )
    v49 = (v159 & 0x8000000) == 0 ? 7 : 15;
LABEL_80:
  v162 = 15;
  *(uint16_t *)(a1 + 1890) = v49;
  *(uint16_t *)(a1 + 1888) = 15;
  *(uint32_t *)(a1 + 1892) = 0;
  *(uint32_t *)(a1 + 1896) = 0;
  *(uint32_t *)(a1 + 1900) = 0;
  *(uint32_t *)(a1 + 1904) = 0;
  *(uint32_t *)(a1 + 1908) = 0;
  if ( v37 == 0 )
    v162 = (v159 & 0x8000000) == 0 ? 10 : 15;
  *(uint32_t *)(a1 + 1940) = (s2a & 0x4000000) != 0 ? 0x1908 : 0;
  v50 = *(uint32_t *)(a1 + 2840);
  *(uint16_t *)(a1 + 1936) = (s2a & 0x4000000) == 0 ? 15 : 18;
  *(uint32_t *)(a1 + 1944) = (s2a & 0x4000000) != 0 ? 0x8059 : 0;
  v145 = v50;
  *(uint16_t *)(a1 + 1938) = v162;
  *(uint32_t *)(a1 + 1948) = 6408;
  *(uint32_t *)(a1 + 1952) = (s2a & 0x4000000) != 0 ? 0x8368 : 0;
  *(uint32_t *)(a1 + 1956) = 0;
  if ( (v50 & 0x20000) != 0 )
  {
    v52 = 0;
    v146 = *(uint32_t *)(a1 + 2832);
    v51 = v146 & 1;
    *(uint16_t *)(a1 + 1960) = 19;
    *(uint16_t *)(a1 + 1962) = 5;
    *(uint32_t *)(a1 + 1964) = 33776;
    *(uint32_t *)(a1 + 1968) = 33776;
    *(uint32_t *)(a1 + 1972) = 0;
    *(uint32_t *)(a1 + 1976) = 0;
    *(uint32_t *)(a1 + 1980) = 0;
    *(uint16_t *)(a1 + 1984) = 20;
    *(uint16_t *)(a1 + 1986) = 10;
    *(uint32_t *)(a1 + 1988) = 33777;
    *(uint32_t *)(a1 + 1992) = 33777;
    *(uint32_t *)(a1 + 1996) = 0;
    *(uint32_t *)(a1 + 2000) = 0;
    *(uint32_t *)(a1 + 2004) = 0;
    if ( (v146 & 1) != 0 )
      goto LABEL_85;
  }
  else
  {
    v146 = *(uint32_t *)(a1 + 2832);
    if ( (v146 & 1) != 0 )
    {
      v51 = 1;
      *(uint16_t *)(a1 + 1960) = 19;
      *(uint16_t *)(a1 + 1962) = 5;
      *(uint32_t *)(a1 + 1964) = 33776;
      *(uint32_t *)(a1 + 1968) = 33776;
      *(uint32_t *)(a1 + 1972) = 0;
      *(uint32_t *)(a1 + 1976) = 0;
      *(uint32_t *)(a1 + 1980) = 0;
      *(uint16_t *)(a1 + 1984) = 20;
      *(uint16_t *)(a1 + 1986) = 10;
      *(uint32_t *)(a1 + 1988) = 33777;
      *(uint32_t *)(a1 + 1992) = 33777;
      *(uint32_t *)(a1 + 1996) = 0;
      *(uint32_t *)(a1 + 2000) = 0;
      *(uint32_t *)(a1 + 2004) = 0;
LABEL_85:
      v52 = 33778;
      goto LABEL_86;
    }
    v51 = 0;
    v52 = 0;
    *(uint16_t *)(a1 + 1960) = 5;
    *(uint16_t *)(a1 + 1962) = 5;
    *(uint32_t *)(a1 + 1964) = 0;
    *(uint32_t *)(a1 + 1968) = 0;
    *(uint32_t *)(a1 + 1972) = 0;
    *(uint32_t *)(a1 + 1976) = 0;
    *(uint32_t *)(a1 + 1980) = 0;
    *(uint16_t *)(a1 + 1984) = 10;
    *(uint16_t *)(a1 + 1986) = 10;
    *(uint32_t *)(a1 + 1988) = 0;
    *(uint32_t *)(a1 + 1992) = 0;
    *(uint32_t *)(a1 + 1996) = 0;
    *(uint32_t *)(a1 + 2000) = 0;
    *(uint32_t *)(a1 + 2004) = 0;
  }
LABEL_86:
  v53 = 15;
  if ( v37 == 0 )
    v53 = (v159 & 0x8000000) == 0 ? 7 : 15;
  *(uint32_t *)(a1 + 2012) = v52;
  *(uint32_t *)(a1 + 2016) = v52;
  if ( v51 != 0 )
  {
    *(uint16_t *)(a1 + 2008) = 21;
    *(uint16_t *)(a1 + 2010) = v53;
    *(uint32_t *)(a1 + 2020) = 0;
    *(uint32_t *)(a1 + 2024) = 0;
    *(uint32_t *)(a1 + 2028) = 0;
    v54 = 33779;
  }
  else
  {
    *(uint16_t *)(a1 + 2008) = 15;
    *(uint16_t *)(a1 + 2010) = v53;
    *(uint32_t *)(a1 + 2020) = 0;
    *(uint32_t *)(a1 + 2024) = 0;
    *(uint32_t *)(a1 + 2028) = 0;
    v54 = 0;
  }
  v55 = 15;
  if ( v37 == 0 )
    v55 = (v159 & 0x8000000) == 0 ? 7 : 15;
  *(uint16_t *)(a1 + 2032) = v51 == 0 ? 15 : 22;
  *(uint16_t *)(a1 + 2034) = v55;
  *(uint32_t *)(a1 + 2036) = v54;
  *(uint32_t *)(a1 + 2040) = v54;
  *(uint32_t *)(a1 + 2044) = 0;
  *(uint32_t *)(a1 + 2048) = 0;
  *(uint32_t *)(a1 + 2052) = 0;
  if ( (v159 & 8) != 0 )
  {
    *(uint16_t *)(a1 + 2056) = 23;
    *(uint16_t *)(a1 + 2058) = 5;
    *(uint32_t *)(a1 + 2060) = 35841;
    *(uint32_t *)(a1 + 2064) = 35841;
    *(uint32_t *)(a1 + 2068) = 0;
    *(uint32_t *)(a1 + 2072) = 0;
    *(uint32_t *)(a1 + 2076) = 0;
    *(uint16_t *)(a1 + 2080) = 24;
    *(uint16_t *)(a1 + 2082) = 7;
    *(uint32_t *)(a1 + 2084) = 35843;
    *(uint32_t *)(a1 + 2088) = 35843;
    *(uint32_t *)(a1 + 2092) = 0;
    *(uint32_t *)(a1 + 2096) = 0;
    *(uint32_t *)(a1 + 2100) = 0;
    *(uint16_t *)(a1 + 2104) = 25;
    *(uint16_t *)(a1 + 2106) = 5;
    *(uint32_t *)(a1 + 2108) = 35840;
    *(uint32_t *)(a1 + 2112) = 35840;
    *(uint32_t *)(a1 + 2116) = 0;
    *(uint32_t *)(a1 + 2120) = 0;
    *(uint32_t *)(a1 + 2124) = 0;
    v56 = 26;
    v57 = 35842;
  }
  else
  {
    *(uint16_t *)(a1 + 2056) = 15;
    *(uint16_t *)(a1 + 2058) = 5;
    *(uint32_t *)(a1 + 2060) = 0;
    *(uint32_t *)(a1 + 2064) = 0;
    *(uint32_t *)(a1 + 2068) = 0;
    *(uint32_t *)(a1 + 2072) = 0;
    *(uint32_t *)(a1 + 2076) = 0;
    *(uint16_t *)(a1 + 2080) = 15;
    *(uint16_t *)(a1 + 2082) = 7;
    *(uint32_t *)(a1 + 2084) = 0;
    *(uint32_t *)(a1 + 2088) = 0;
    *(uint32_t *)(a1 + 2092) = 0;
    *(uint32_t *)(a1 + 2096) = 0;
    *(uint32_t *)(a1 + 2100) = 0;
    *(uint16_t *)(a1 + 2104) = 15;
    *(uint16_t *)(a1 + 2106) = 5;
    *(uint32_t *)(a1 + 2108) = 0;
    *(uint32_t *)(a1 + 2112) = 0;
    *(uint32_t *)(a1 + 2116) = 0;
    *(uint32_t *)(a1 + 2120) = 0;
    *(uint32_t *)(a1 + 2124) = 0;
    v56 = 15;
    v57 = 0;
  }
  *(uint32_t *)(a1 + 2132) = v57;
  *(uint32_t *)(a1 + 2136) = v57;
  v58 = *(uint32_t *)(a1 + 2852);
  *(uint16_t *)(a1 + 2128) = v56;
  *(uint16_t *)(a1 + 2130) = 7;
  *(uint32_t *)(a1 + 2140) = 0;
  *(uint32_t *)(a1 + 2144) = 0;
  *(uint32_t *)(a1 + 2148) = 0;
  *(uint16_t *)(a1 + 2250) = 7;
  *(uint32_t *)(a1 + 2260) = 0;
  *(uint16_t *)(a1 + 2248) = (v58 & 0x200000) == 0 ? 11 : 31;
  *(uint32_t *)(a1 + 2264) = 0;
  *(uint32_t *)(a1 + 2268) = 0;
  *(uint16_t *)(a1 + 2272) = 54;
  v59 = (v58 & 0x200000) != 0 ? 0x8D64 : 0;
  *(uint32_t *)(a1 + 2252) = v59;
  *(uint32_t *)(a1 + 2256) = v59;
  *(uint16_t *)(a1 + 2274) = 5;
  *(uint32_t *)(a1 + 2276) = 0;
  *(uint32_t *)(a1 + 2280) = 0;
  *(uint32_t *)(a1 + 2284) = 0;
  *(uint32_t *)(a1 + 2288) = 0;
  *(uint32_t *)(a1 + 2292) = 0;
  *(uint16_t *)(a1 + 2296) = 54;
  *(uint16_t *)(a1 + 2298) = 7;
  *(uint32_t *)(a1 + 2300) = 0;
  *(uint32_t *)(a1 + 2304) = 0;
  *(uint32_t *)(a1 + 2308) = 0;
  *(uint32_t *)(a1 + 2312) = 0;
  *(uint32_t *)(a1 + 2316) = 0;
  if ( (s2a & 0x2000000) != 0 )
  {
    *(uint16_t *)(a1 + 2320) = 34;
    *(uint16_t *)(a1 + 2322) = 5;
    *(uint32_t *)(a1 + 2324) = 0;
    *(uint32_t *)(a1 + 2328) = 0;
    *(uint32_t *)(a1 + 2332) = 0;
    *(uint32_t *)(a1 + 2336) = 0;
    *(uint32_t *)(a1 + 2340) = 0;
    *(uint16_t *)(a1 + 2344) = 35;
    *(uint16_t *)(a1 + 2346) = 7;
    *(uint32_t *)(a1 + 2348) = 35987;
    *(uint32_t *)(a1 + 2352) = 35987;
    *(uint32_t *)(a1 + 2356) = 0;
    *(uint32_t *)(a1 + 2360) = 0;
    *(uint32_t *)(a1 + 2364) = 0;
    v60 = 36;
    v61 = 34798;
  }
  else
  {
    *(uint16_t *)(a1 + 2320) = 54;
    *(uint16_t *)(a1 + 2322) = 5;
    *(uint32_t *)(a1 + 2324) = 0;
    *(uint32_t *)(a1 + 2328) = 0;
    *(uint32_t *)(a1 + 2332) = 0;
    *(uint32_t *)(a1 + 2336) = 0;
    *(uint32_t *)(a1 + 2340) = 0;
    *(uint16_t *)(a1 + 2344) = 54;
    *(uint16_t *)(a1 + 2346) = 7;
    *(uint32_t *)(a1 + 2348) = 0;
    *(uint32_t *)(a1 + 2352) = 0;
    *(uint32_t *)(a1 + 2356) = 0;
    *(uint32_t *)(a1 + 2360) = 0;
    *(uint32_t *)(a1 + 2364) = 0;
    v60 = 54;
    v61 = 0;
  }
  *(uint16_t *)(a1 + 2368) = v60;
  *(uint16_t *)(a1 + 2370) = 7;
  *(uint32_t *)(a1 + 2372) = v61;
  *(uint32_t *)(a1 + 2376) = v61;
  *(uint32_t *)(a1 + 2380) = 0;
  *(uint32_t *)(a1 + 2384) = 0;
  *(uint32_t *)(a1 + 2388) = 0;
  if ( (s2a & 0x1000000) != 0 )
  {
    *(uint16_t *)(a1 + 2392) = 37;
    *(uint16_t *)(a1 + 2394) = 5;
    *(uint32_t *)(a1 + 2396) = 0;
    *(uint32_t *)(a1 + 2400) = 0;
    *(uint32_t *)(a1 + 2404) = 0;
    *(uint32_t *)(a1 + 2408) = 0;
    *(uint32_t *)(a1 + 2412) = 0;
    v62 = 38;
  }
  else
  {
    *(uint16_t *)(a1 + 2392) = 54;
    *(uint16_t *)(a1 + 2394) = 5;
    *(uint32_t *)(a1 + 2396) = 0;
    *(uint32_t *)(a1 + 2400) = 0;
    *(uint32_t *)(a1 + 2404) = 0;
    *(uint32_t *)(a1 + 2408) = 0;
    *(uint32_t *)(a1 + 2412) = 0;
    v62 = 54;
  }
  *(uint16_t *)(a1 + 2416) = v62;
  *(uint16_t *)(a1 + 2418) = 5;
  *(uint32_t *)(a1 + 2420) = 0;
  *(uint32_t *)(a1 + 2424) = 0;
  *(uint32_t *)(a1 + 2428) = 0;
  *(uint32_t *)(a1 + 2432) = 0;
  *(uint32_t *)(a1 + 2436) = 0;
  v63 = 15;
  if ( v37 == 0 )
    v63 = (v159 & 0x8000000) == 0 ? 7 : 15;
  v64 = a1;
  v137 = 11;
  v163 = s2a & 0x200000;
  *(uint16_t *)(a1 + 2442) = v63;
  *(uint16_t *)(a1 + 2440) = 15;
  v154 = (s2a & 0x200000) == 0 ? 0 : 0x8D61;
  *(uint32_t *)(a1 + 2444) = 0;
  *(uint32_t *)(a1 + 2448) = 0;
  *(uint32_t *)(a1 + 2452) = 0;
  v65 = (s2a & 0x200000) != 0 ? 0x1907 : 0;
  *(uint32_t *)(a1 + 2456) = 0;
  *(uint32_t *)(a1 + 2460) = 0;
  v66 = (s2a & 0x200000) != 0 ? 0x881B : 0;
  if ( v37 == 0 )
  {
    v64 = a1;
    v137 = (v159 & 0x8000000) == 0 ? 5 : 15;
  }
  v150 = *(uint32_t *)(v64 + 2804);
  v153 = v150 & 2;
  if ( (v150 & 2) != 0 && ((v150 & 1) != 0 || *(int *)(a1 + 2836) < 0) )
  {
    *(uint32_t *)(a1 + 2468) = v66;
    *(uint32_t *)(a1 + 2472) = v66;
    *(uint32_t *)(a1 + 2476) = v65;
    *(uint16_t *)(a1 + 2464) = 40;
    *(uint16_t *)(a1 + 2466) = v137;
    *(uint32_t *)(a1 + 2480) = v154;
    *(uint32_t *)(a1 + 2484) = 0;
    if ( v163 == 0 )
    {
      v147 = s2a & 0x100000;
LABEL_107:
      v155 = 0;
      v138 = 0;
      v67 = 0;
      goto LABEL_108;
    }
  }
  else
  {
    if ( v163 == 0 )
    {
      v147 = s2a & 0x100000;
      *(uint16_t *)(a1 + 2464) = (s2a & 0x100000) == 0 ? 15 : 42;
      *(uint32_t *)(a1 + 2476) = v65;
      *(uint16_t *)(a1 + 2466) = v137;
      *(uint32_t *)(a1 + 2468) = v66;
      *(uint32_t *)(a1 + 2472) = v66;
      *(uint32_t *)(a1 + 2480) = v154;
      *(uint32_t *)(a1 + 2484) = 0;
      goto LABEL_107;
    }
    *(uint32_t *)(a1 + 2476) = v65;
    *(uint16_t *)(a1 + 2464) = 40;
    *(uint16_t *)(a1 + 2466) = v137;
    *(uint32_t *)(a1 + 2468) = v66;
    *(uint32_t *)(a1 + 2472) = v66;
    *(uint32_t *)(a1 + 2480) = v154;
    *(uint32_t *)(a1 + 2484) = 0;
  }
  v155 = 36193;
  v138 = 6408;
  v147 = s2a & 0x100000;
  v67 = 34842;
LABEL_108:
  v68 = 11;
  if ( v37 == 0 )
    v68 = (v159 & 0x8000000) == 0 ? 7 : 15;
  if ( (v150 & 2) != 0 && ((v150 & 1) != 0 || *(int *)(a1 + 2836) < 0) )
  {
    *(uint16_t *)(a1 + 2490) = v68;
    *(uint16_t *)(a1 + 2488) = 41;
    *(uint32_t *)(a1 + 2492) = v67;
    *(uint32_t *)(a1 + 2496) = v67;
    *(uint32_t *)(a1 + 2500) = v138;
    *(uint32_t *)(a1 + 2504) = v155;
    *(uint32_t *)(a1 + 2508) = 0;
    goto LABEL_114;
  }
  v103 = 41;
  if ( v163 == 0 )
    v103 = v147 == 0 ? 15 : 43;
  *(uint16_t *)(a1 + 2488) = v103;
  *(uint16_t *)(a1 + 2490) = v68;
  *(uint32_t *)(a1 + 2492) = v67;
  *(uint32_t *)(a1 + 2496) = v67;
  *(uint32_t *)(a1 + 2500) = v138;
  *(uint32_t *)(a1 + 2504) = v155;
  *(uint32_t *)(a1 + 2508) = 0;
  if ( (v150 & 2) != 0 )
  {
LABEL_114:
    if ( v147 == 0 )
    {
      v156 = 5126;
      v139 = 6407;
      v69 = 0;
      goto LABEL_116;
    }
    goto LABEL_195;
  }
  if ( v147 == 0 )
  {
    v156 = 0;
    v139 = 0;
    v69 = 0;
    goto LABEL_116;
  }
LABEL_195:
  v156 = 5126;
  v139 = 6407;
  v69 = 34837;
LABEL_116:
  v70 = 11;
  if ( v37 == 0 )
    v70 = (v159 & 0x8000000) == 0 ? 5 : 15;
  if ( (v150 & 2) != 0 || v147 != 0 )
  {
    v151 = 5126;
    *(uint16_t *)(a1 + 2514) = v70;
    *(uint32_t *)(a1 + 2516) = v69;
    *(uint32_t *)(a1 + 2520) = v69;
    *(uint32_t *)(a1 + 2524) = v139;
    *(uint16_t *)(a1 + 2512) = 43;
    *(uint32_t *)(a1 + 2528) = v156;
    *(uint32_t *)(a1 + 2532) = 0;
    v72 = 6408;
    v71 = 34836;
  }
  else
  {
    v151 = 0;
    *(uint16_t *)(a1 + 2514) = v70;
    *(uint32_t *)(a1 + 2516) = v69;
    *(uint32_t *)(a1 + 2520) = v69;
    *(uint16_t *)(a1 + 2512) = v163 == 0 ? 15 : 41;
    *(uint32_t *)(a1 + 2528) = v156;
    *(uint32_t *)(a1 + 2524) = v139;
    *(uint32_t *)(a1 + 2532) = 0;
    v71 = 0;
    v72 = 0;
  }
  v73 = 15;
  if ( v37 == 0 )
    v73 = (v159 & 0x8000000) == 0 ? 7 : 15;
  if ( v153 != 0 )
  {
    *(uint16_t *)(a1 + 2538) = v73;
    *(uint32_t *)(a1 + 2552) = v151;
    *(uint16_t *)(a1 + 2536) = 43;
    *(uint32_t *)(a1 + 2540) = v71;
    *(uint32_t *)(a1 + 2544) = v71;
    *(uint32_t *)(a1 + 2548) = v72;
    *(uint32_t *)(a1 + 2556) = 0;
    v74 = 5126;
    v75 = 6409;
  }
  else
  {
    v157 = 43;
    if ( v147 == 0 )
      v157 = v163 == 0 ? 15 : 41;
    *(uint32_t *)(a1 + 2548) = v72;
    *(uint16_t *)(a1 + 2538) = v73;
    *(uint16_t *)(a1 + 2536) = v157;
    *(uint32_t *)(a1 + 2540) = v71;
    *(uint32_t *)(a1 + 2544) = v71;
    *(uint32_t *)(a1 + 2552) = v151;
    *(uint32_t *)(a1 + 2556) = 0;
    v74 = 0;
    v75 = 0;
  }
  v76 = s2a & 0x8000000;
  *(uint32_t *)(a1 + 2572) = v75;
  *(uint32_t *)(a1 + 2576) = v74;
  *(uint16_t *)(a1 + 2560) = 54;
  *(uint16_t *)(a1 + 2562) = 54;
  *(uint32_t *)(a1 + 2564) = 0;
  *(uint32_t *)(a1 + 2568) = 0;
  *(uint32_t *)(a1 + 2580) = 0;
  *(uint32_t *)(a1 + 2592) = (s2a & 0x8000000) != 0 ? 0x81A5 : 0;
  *(uint16_t *)(a1 + 2584) = (s2a & 0x8000000) == 0 ? 54 : 45;
  *(uint32_t *)(a1 + 2600) = (s2a & 0x8000000) != 0 ? 0x1403 : 0;
  v77 = (s2a & 0x8000000) != 0 ? 0x1902 : 0;
  *(uint16_t *)(a1 + 2586) = 45;
  *(uint32_t *)(a1 + 2588) = v77;
  *(uint32_t *)(a1 + 2596) = v77;
  *(uint32_t *)(a1 + 2604) = 33189;
  *(__m128i *)(a1 + 2636) = g4_m128_from<__m128i>(0LL);
  *(uint32_t *)(a1 + 2612) = 0;
  *(uint16_t *)(a1 + 2610) = 46 - ((v159 & 0x80000) == 0);
  *(uint32_t *)(a1 + 2616) = 0;
  *(uint32_t *)(a1 + 2620) = 0;
  *(uint32_t *)(a1 + 2624) = 0;
  *(uint32_t *)(a1 + 2628) = 36396;
  *(uint16_t *)(a1 + 2608) = (s2a & 0x8000000) == 0 ? 54 : 45;
  v78 = s2a & 0x80;
  v158 = v78;
  *(uint16_t *)(a1 + 2634) = v78 == 0 ? 45 : 47;
  v79 = v78 == 0 ? -1 : 0x81A6;
  *(uint16_t *)(a1 + 2632) = (s2a & 0x8000000) == 0 ? 54 : 45;
  if ( v79 == -1 )
    v79 = 0;
  *(uint32_t *)(a1 + 2652) = v79;
  v80 = (s2a & 0x100) == 0 ? -1 : 0x81A7;
  v81 = 48;
  v160 = v76 != 0 ? 0x1902 : 0;
  if ( (s2a & 0x100) == 0 )
    v81 = v158 == 0 ? 45 : 47;
  v82 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v160), _mm_cvtsi32_si128(v76 != 0 ? 0x1405 : 0)), 0);
  *(uint16_t *)(a1 + 2656) = v76 == 0 ? 54 : 48;
  v83 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v160), _mm_cvtsi32_si128((uint16_t)-(v76 != 0) & 0x81A7)), 0);
  if ( v80 == -1 )
    v80 = 0;
  v84 = v82;
  *(uint64_t *)&v85 = v83;
  *((uint64_t *)&v85 + 1) = v84;
  *(uint32_t *)(a1 + 2676) = v80;
  *(uint16_t *)(a1 + 2658) = v81;
  v86 = 48;
  *(g4_int128_t *)(a1 + 2660) = v85;
  if ( (s2a & 0x100) == 0 )
    v86 = v158 == 0 ? 45 : 47;
  *(uint16_t *)(a1 + 2682) = v86;
  *(uint16_t *)(a1 + 2680) = v76 == 0 ? 54 : 48;
  *(uint32_t *)(a1 + 2684) = 0;
  *(uint32_t *)(a1 + 2688) = 0;
  *(uint32_t *)(a1 + 2692) = 6402;
  *(uint32_t *)(a1 + 2696) = 5126;
  *(uint32_t *)(a1 + 2700) = 0;
  if ( ((v145 | v146) & 0x100000) != 0 || (s2a & 0x10000000) != 0 )
  {
    *(uint16_t *)(a1 + 2704) = 50;
    *(uint16_t *)(a1 + 2706) = 50;
    *(g4_int128_t *)(a1 + 2708) = xmmword_1C7C4F0;
    v87 = 35056;
  }
  else
  {
    *(uint16_t *)(a1 + 2704) = 54;
    *(uint16_t *)(a1 + 2706) = 54;
    *(__m128i *)(a1 + 2708) = g4_m128_from<__m128i>(0LL);
    v87 = 0;
  }
  *(uint32_t *)(a1 + 2724) = v87;
  if ( (s2a & 0x4000) != 0 )
  {
    *(uint16_t *)(a1 + 2728) = 54;
    *(uint16_t *)(a1 + 2730) = 51;
    v88 = 36166;
    *(__m128i *)(a1 + 2732) = g4_m128_from<__m128i>(0LL);
    v89 = a1;
    v90 = s2a & 0x8000;
  }
  else
  {
    v132 = 52;
    v90 = s2a & 0x8000;
    if ( (s2a & 0x8000) == 0 )
      v132 = 54 - ((s2a & 0x10000) != 0);
    v89 = a1;
    *(__m128i *)(a1 + 2732) = g4_m128_from<__m128i>(0LL);
    *(uint16_t *)(a1 + 2730) = v132;
    *(uint16_t *)(a1 + 2728) = 54;
    v88 = 0;
  }
  *(uint32_t *)(v89 + 2748) = v88;
  if ( v90 != 0 )
  {
    *(uint16_t *)(v89 + 2752) = 54;
    *(__m128i *)(v89 + 2756) = g4_m128_from<__m128i>(0LL);
    *(uint16_t *)(v89 + 2754) = 52;
    v91 = 36167;
    v92 = a1;
  }
  else
  {
    v131 = 53;
    if ( (s2a & 0x10000) == 0 )
      v131 = (s2a & 0x4000) == 0 ? 54 : 51;
    v92 = a1;
    *(__m128i *)(a1 + 2756) = g4_m128_from<__m128i>(0LL);
    *(uint16_t *)(a1 + 2754) = v131;
    *(uint16_t *)(a1 + 2752) = 54;
    v91 = 0;
  }
  *(uint32_t *)(v92 + 2772) = v91;
  *(uint16_t *)(v92 + 2776) = 54;
  *(uint16_t *)(v92 + 2778) = 53;
  *(uint32_t *)(v92 + 2780) = 0;
  *(uint32_t *)(v92 + 2784) = 0;
  *(uint32_t *)(v92 + 2788) = 6401;
  *(uint32_t *)(v92 + 2792) = 5121;
  *(uint32_t *)(v92 + 2796) = 36168;
  glitch::os::Printer::log((int)(uintptr_t)("Driver informations:"), 1);
  v93 = (const char *)glGetString(0x1F02u);
  v94 = strlen(v93);
  v95 = *(char **)(a1 + 72);
  v96 = *((uint32_t *)v95 - 3);
  if ( v94 > 0x3FFFFFFC )
    goto LABEL_325;
  if ( v93 >= v95 && v93 <= &v95[v96] && *((int *)v95 - 1) <= 0 )
  {
    if ( v94 <= v93 - v95 )
    {
      if ( v94 != 1 )
      {
        nd = v94;
        memcpy(v95, v93, v94);
        v94 = nd;
        v95 = *(char **)(a1 + 72);
        goto LABEL_208;
      }
    }
    else
    {
      if ( v93 == v95 )
      {
LABEL_208:
        if ( v95 - 12 == (char *)&dword_20D3E6C )
          goto LABEL_209;
        *((uint32_t *)v95 - 1) = 0;
        *((uint32_t *)v95 - 3) = v94;
        v95[v94] = 0;
LABEL_144:
        v95 = *(char **)(a1 + 72);
        goto LABEL_209;
      }
      if ( v94 != 1 )
      {
        nb = v94;
        memmove(v95, v93, v94);
        v94 = nb;
        v95 = *(char **)(a1 + 72);
        goto LABEL_208;
      }
    }
    *v95 = *v93;
    v95 = *(char **)(a1 + 72);
    goto LABEL_208;
  }
  na = v94;
  sub_D8DAA0((int *)(a1 + 72), v96, v94);
  if ( na == 0 )
    goto LABEL_144;
  v134 = *(char **)(a1 + 72);
  if ( na == 1 )
    *v134 = *v93;
  else
    memcpy(v134, v93, na);
  v95 = *(char **)(a1 + 72);
LABEL_209:
  v104 = *((uint32_t *)v95 - 3);
  if ( v104 > 6 )
  {
    v112 = v104 - 7;
    v113 = 1;
    do
    {
      v114 = v113;
      if ( v95[v113 - 1] == 79 )
      {
        nc = v112;
        v115 = memcmp(&v95[v113], "penGL ", 6u);
        v112 = nc;
        if ( v115 == 0 )
          goto LABEL_237;
        v114 = v113;
      }
      ++v113;
    }
    while ( v114 <= v112 );
  }
  v105 = (char *)(uintptr_t)(byte_20D3E78);
  v173[0] = (unsigned int)(uintptr_t)(byte_20D3E78);
  v106 = *((uint32_t *)v95 - 3) + 7;
  if ( (uint32_t)(v106) != (*(uint32_t *)unk_20D3E70) || (intptr_t)(*(int32_t *)unk_20D3E74) > 0 )
  {
    sub_D8D5B0(v173, v106);
    v105 = (char *)v173[0];
  }
  if ( (unsigned int)(1073741820 - *((uint32_t *)v105 - 3)) <= 6 )
    sub_1900180("basic_string::append");
  sub_D8D710(v173, "OpenGL ", 7u);
  v107 = *(uint8_t **)(a1 + 72);
  v108 = *((uint32_t *)v107 - 3);
  if ( v108 == 0 )
    goto LABEL_226;
  v109 = v173[0];
  v164 = *(uint32_t *)(v173[0] - 12);
  s2b = (uint8_t *)(v108 + v164);
  if ( v108 + v164 > *(uint32_t *)(v173[0] - 8) || *(int *)(v173[0] - 4) > 0 )
  {
    g4_std::basic_string_char_char_traits_char_SA_77cf59::reserve(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v173,
      (unsigned int)(uintptr_t)(s2b));
    v107 = *(uint8_t **)(a1 + 72);
    v109 = v173[0];
    v164 = *(uint32_t *)(v173[0] - 12);
  }
  v110 = (uint8_t *)(v164 + v109);
  if ( v108 == 1 )
    *v110 = *v107;
  else
    memcpy(v110, v107, v108);
  v95 = (char *)v173[0];
  v111 = (int *)(v173[0] - 12);
  if ( (int *)(v173[0] - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v173[0] - 4) = 0;
    *((uint32_t *)v95 - 3) = (uint32_t)(uintptr_t)(s2b);
    s2b[(uint32_t)(uintptr_t)(v95)] = 0;
    v107 = *(uint8_t **)(a1 + 72);
LABEL_226:
    v95 = (char *)v173[0];
    v111 = (int *)(v173[0] - 12);
    goto LABEL_227;
  }
  v107 = *(uint8_t **)(a1 + 72);
LABEL_227:
  v116 = (int *)(v107 - 12);
  if ( v111 == (int *)(v107 - 12) )
  {
    v117 = (unsigned int)(uintptr_t)(v95);
    v95 = (char *)(v107);
  }
  else
  {
    if ( *((int *)v95 - 1) < 0 )
    {
      v95 = (char *)sub_D8D830((int)(uintptr_t)(v111));
      v107 = *(uint8_t **)(a1 + 72);
      v116 = (int *)(v107 - 12);
    }
    else if ( v111 != (int *)(uintptr_t)(&dword_20D3E6C) )
    {
      __sync_add_and_fetch((volatile int32_t *)v95 - 1, 1u);
      v107 = *(uint8_t **)(a1 + 72);
      v116 = (int *)(v107 - 12);
    }
    if ( v116 != (int *)(uintptr_t)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)v107 - 1, 0xFFFFFFFF) <= 0 )
      gll_operator_delete_arr((int)(uintptr_t)(v116));
    *(uint32_t *)(a1 + 72) = (uint32_t)(uintptr_t)(v95);
    v117 = v173[0];
  }
  if ( (int *)(v117 - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v117 - 4), 0xFFFFFFFF) <= 0 )
      gll_operator_delete_arr(v117 - 12);
    v95 = *(char **)(a1 + 72);
  }
LABEL_237:
  glitch::os::Printer::logf(1, (int)(uintptr_t)("    Driver : %s"), v95);
  v118 = glGetString(0x1F01u);
  s2c = (const char *)v118;
  if ( v118 != nullptr )
  {
    glitch::os::Printer::logf(1, (int)(uintptr_t)("    Renderer : %s"), v118);
    v119 = strlen(s2c);
    v120 = *(char **)(a1 + 76);
    v121 = *((uint32_t *)v120 - 3);
    if ( v119 > 0x3FFFFFFC )
      goto LABEL_325;
    if ( s2c < v120 || s2c > &v120[v121] || *((int *)v120 - 1) > 0 )
    {
      sub_D8DAA0((int *)(a1 + 76), v121, v119);
      if ( v119 != 0 )
      {
        v136 = *(char **)(a1 + 76);
        if ( v119 == 1 )
          *v136 = *s2c;
        else
          memcpy(v136, s2c, v119);
      }
    }
    else
    {
      if ( v119 <= s2c - v120 )
      {
        if ( v119 == 1 )
          *v120 = *s2c;
        else
          memcpy(v120, s2c, v119);
        v120 = *(char **)(a1 + 76);
      }
      else if ( s2c != v120 )
      {
        if ( v119 == 1 )
          *v120 = *s2c;
        else
          memmove(v120, s2c, v119);
        v120 = *(char **)(a1 + 76);
      }
      if ( v120 - 12 != (char *)&dword_20D3E6C )
      {
        *((uint32_t *)v120 - 1) = 0;
        *((uint32_t *)v120 - 3) = v119;
        v120[v119] = 0;
      }
    }
  }
  v122 = glGetString(0x1F00u);
  v123 = (const char *)v122;
  if ( v122 == nullptr )
    goto LABEL_245;
  glitch::os::Printer::logf(1, (int)(uintptr_t)("    Vendor  %s"), v122);
  v124 = strlen(v123);
  v125 = *(char **)(a1 + 80);
  v126 = *((uint32_t *)v125 - 3);
  if ( v124 > 0x3FFFFFFC )
LABEL_325:
    sub_1900180("basic_string::assign");
  if ( v123 < v125 || v123 > &v125[v126] || *((int *)v125 - 1) > 0 )
  {
    sub_D8DAA0((int *)(a1 + 80), v126, v124);
    if ( v124 != 0 )
    {
      v135 = *(char **)(a1 + 80);
      if ( v124 == 1 )
        *v135 = *v123;
      else
        memcpy(v135, v123, v124);
    }
  }
  else
  {
    if ( v124 <= v123 - v125 )
    {
      if ( v124 == 1 )
        *v125 = *v123;
      else
        memcpy(v125, v123, v124);
      v125 = *(char **)(a1 + 80);
    }
    else if ( v123 != v125 )
    {
      if ( v124 == 1 )
        *v125 = *v123;
      else
        memmove(v125, v123, v124);
      v125 = *(char **)(a1 + 80);
    }
    if ( v125 - 12 != (char *)&dword_20D3E6C )
    {
      *((uint32_t *)v125 - 1) = 0;
      *((uint32_t *)v125 - 3) = v124;
      v125[v124] = 0;
    }
  }
LABEL_245:
  if ( memcmp(s2c, "Mali-400 MP", 0xBu) == 0 )
  {
    *(uint32_t *)(a1 + 252) &= ~0x8000000u;
    glitch::os::Printer::log((int)(uintptr_t)("Sparse vertex buffer feature disabled"), 1);
    *(uint8_t *)(a1 + 2872) = 1;
    glitch::os::Printer::log((int)(uintptr_t)("Vertex attrib array enable shadow state disabled"), 1);
  }
  if ( strstr(s2c, "PowerVR") != nullptr )
    *(uint32_t *)(a1 + 252) &= ~0x20000000u;
  MaxLightCount = glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler::Self>>::queryMaxLightCount((glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler::Self>> *)a1);
  v175[0] = MaxLightCount;
  if ( (uint16_t)MaxLightCount >= 8u )
    MaxLightCount = 8;
  v128 = 0;
  v175[1] = MaxLightCount;
  if ( (*(uint8_t *)(a1 + 257) & 8) != 0 )
    v128 = v180;
  v179 = v128;
  (*(void (**)(volatile int32_t **, int, int, uint32_t))(*(uint32_t *)a1 + 96))(v171, a1, a2, 0);
  v129 = (glf::App::Self *)glf::App::GetInstance();
  glf::App::HasContext(v129);
  v97 = 0;
  glitch::video::IVideoDriver::init(
    (glitch::video::IVideoDriver::Self *)a1,
    (const boost::intrusive_ptr<glitch::video::IVideoDriver::IFramebuffer::Self> *)v171,
    (const glitch::video::IVideoDriver::SConfig *)v175);
  glPixelStorei(0xD05u, 1);
  v130 = (glf::App::Self *)glf::App::GetInstance();
  glf::App::HasContext(v130);
  if ( (uint8_t)glitch::video::CProgrammableGLDriver<glitch::video::CProgrammableShaderHandlerBase<glitch::video::CGLSLShaderHandler::Self>>::driverInit((uint32_t *)a1) != 0 )
  {
    v97 = 1;
    G4_VCALL<void>(a1, 84, a2);
    glitch::video::IVideoDriver::clearBuffers((glitch::video::IVideoDriver::Self *)a1, 1);
    glitch::video::IVideoDriver::initImplementationDependentData((glitch::video::IVideoDriver::Self *)a1);
  }
  if ( v171[0] == nullptr )
    return v97;
  sub_5459C0(v171[0]);
  return v97;
}

// ----------------------------------------------------------------------------
// Function: sub_DC5580  (binary VA: 0xdc5580)
// Original: sub_DC5580
// ----------------------------------------------------------------------------
uint32_t * sub_DC5580(uint32_t *a1)
{
  uint32_t *v1;

  v1 = (uint32_t *)*a1;
  if ( *a1 != 0 )
  {
    *a1 = *v1;
  }
  else
  {
    v1 = sub_609270((int)(uintptr_t)(a1));
    if ( v1 == nullptr )
      return v1;
  }
  *v1 = 0;
  v1[1] = 0;
  v1[2] = 0;
  v1[4] = 0;
  v1[5] = 0;
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_DC55E0  (binary VA: 0xdc55e0)
// Original: sub_DC55E0
// ----------------------------------------------------------------------------
uint32_t * sub_DC55E0(int a1, int a2, int a3, int a4, float *a5)
{
  int v6;
  float v7; // xmm0_4
  float v8; // xmm2_4
  float v9; // xmm4_4
  float v10;
  bool v11; // cc
  int v12;
  uint32_t *result;
  int v14;
  uint32_t *v15;
  float v16; // xmm0_4
  float v17; // xmm2_4
  uint32_t *v18;
  float v19; // xmm0_4
  float v20; // xmm2_4
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef float _g4_t_v25[3];
  typedef float _g4_t_v26[3];
  typedef float _g4_t_v27[3];
  typedef uint32_t _g4_t_v28[3];
  typedef uint32_t _g4_t_v29[6];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v22)) > _g4_s1 ? (0u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v23)) > _g4_s2 ? (8u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v25)) > _g4_s3 ? (20u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v26)) > _g4_s4 ? (32u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v27)) > _g4_s5 ? (44u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v28)) > _g4_s6 ? (56u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v29)) > _g4_s7 ? (68u + sizeof(_g4_t_v29)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);

  if ( a4 != 0 )
  {
    v6 = *(char *)(a3 + 24);
    v7 = (float)(*(float *)(a2 + 24) + *(float *)(a2 + 12)) * 0.5;
    v8 = (float)(*(float *)(a2 + 16) + *(float *)(a2 + 4)) * 0.5;
    v9 = *(float *)(a3 + 12);
    v27[1] = (float)(*(float *)(a2 + 20) + *(float *)(a2 + 8)) * 0.5;
    v10 = *a5;
    v27[0] = v8;
    *(float *)v28 = v10;
    v27[2] = v7;
    v11 = v9 <= v27[v6];
    *(float *)&v28[1] = a5[1];
    *(float *)&v28[2] = a5[2];
    *(float *)v29 = a5[3];
    *(float *)&v29[1] = a5[4];
    v23 = (v6 + 1) % 3;
    *(float *)&v29[2] = a5[5];
    if ( v11 )
    {
      v12 = *(uint32_t *)(a3 + 20);
      if ( v12 == 0 )
      {
        v22 = v6;
        v18 = sub_DC5580((uint32_t *)(a1 + 28));
        *(uint32_t *)(a3 + 20) = (uint32_t)(uintptr_t)(v18);
        v19 = (float)(a5[5] + a5[2]) * 0.5;
        v20 = (float)(a5[3] + *a5) * 0.5;
        v25[1] = (float)(a5[4] + a5[1]) * 0.5;
        v25[2] = v19;
        v25[0] = v20;
        v18[3] = LODWORD(v25[(char)v23]);
        *(uint8_t *)(*(uint32_t *)(a3 + 20) + 24) = v23;
        v12 = *(uint32_t *)(a3 + 20);
        v9 = *(float *)(a3 + 12);
        v6 = v22;
      }
      *(float *)&v28[v6] = v9;
    }
    else
    {
      v12 = *(uint32_t *)(a3 + 16);
      if ( v12 == 0 )
      {
        v21 = v6;
        v15 = sub_DC5580((uint32_t *)(a1 + 28));
        *(uint32_t *)(a3 + 16) = (uint32_t)(uintptr_t)(v15);
        v16 = (float)(a5[5] + a5[2]) * 0.5;
        v17 = (float)(a5[3] + *a5) * 0.5;
        v26[1] = (float)(a5[4] + a5[1]) * 0.5;
        v26[2] = v16;
        v26[0] = v17;
        v15[3] = LODWORD(v26[(char)v23]);
        *(uint8_t *)(*(uint32_t *)(a3 + 16) + 24) = v23;
        v12 = *(uint32_t *)(a3 + 16);
        v9 = *(float *)(a3 + 12);
        v6 = v21;
      }
      *(float *)&v29[v6] = v9;
    }
    return (uint32_t *)sub_DC55E0(v12, a4 - 1, v28);
  }
  else
  {
    result = *(uint32_t **)(a3 + 4);
    if ( result == *(uint32_t **)(a3 + 8) )
    {
      return (uint32_t *)g4_std::vector_pair_unsigned_int_aabbox_cc69f3::M_insert_aux(
                         a3,
                         result,
                         a2);
    }
    else
    {
      v14 = 0;
      if ( result != nullptr )
      {
        *result = *(uint32_t *)a2;
        result[1] = *(uint32_t *)(a2 + 4);
        result[2] = *(uint32_t *)(a2 + 8);
        result[3] = *(uint32_t *)(a2 + 12);
        result[4] = *(uint32_t *)(a2 + 16);
        result[5] = *(uint32_t *)(a2 + 20);
        result[6] = *(uint32_t *)(a2 + 24);
        v14 = *(uint32_t *)(a3 + 4);
      }
      *(uint32_t *)(a3 + 4) = v14 + 28;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_DC58C0  (binary VA: 0xdc58c0)
// Original: sub_DC58C0
// ----------------------------------------------------------------------------
int sub_DC58C0(int result, int *a2, float *a3, int a4, int a5, float *a6)
{
  int v6;
  float v7; // xmm4_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  int v10;
  bool v11;
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  float *v20;
  int v21;
  float v22; // xmm3_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  int *v26;
  int v27;
  int v28;
  int v29;
  int v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef float *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef float _g4_t_v41[3];
  typedef float _g4_t_v42[6];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v31)) > _g4_s0 ? (0u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v32)) > _g4_s1 ? (4u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v33)) > _g4_s2 ? (8u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v34)) > _g4_s3 ? (12u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v35)) > _g4_s4 ? (20u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v36)) > _g4_s5 ? (24u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v37)) > _g4_s6 ? (24u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v39)) > _g4_s7 ? (32u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v40)) > _g4_s8 ? (36u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v41)) > _g4_s9 ? (40u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v42)) > _g4_s10 ? (52u + sizeof(_g4_t_v42)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 52u);

  if ( a5 != 0 )
  {
    v6 = *(uint32_t *)(a5 + 16);
    v36 = *(uint32_t *)(a5 + 20);
    if ( v6 != 0 || *(uint32_t *)(a5 + 20) != 0 )
    {
      v7 = *(float *)(a5 + 12);
      v8 = (float)(a3[6] + a3[3]) * 0.5;
      v9 = (float)(a3[4] + a3[1]) * 0.5;
      v10 = *(char *)(a5 + 24);
      v42[1] = (float)(a3[5] + a3[2]) * 0.5;
      v42[2] = v8;
      v42[0] = v9;
      if ( v7 <= v42[v10] )
      {
        v15 = v6;
        v6 = v36;
        v36 = v15;
      }
      sub_DC58C0(a3, a4, v6, a6);
      result = *a2;
      v11 = *a2 == 0;
      v12 = (float)(a3[6] + a3[3]) * 0.5;
      v13 = (float)(a3[4] + a3[1]) * 0.5;
      v14 = *(float *)(a5 + 12);
      v41[1] = (float)(a3[5] + a3[2]) * 0.5;
      v41[2] = v12;
      v41[0] = v13;
      if ( !v11 || (float)((float)(v41[v10] - v14) * (float)(v41[v10] - v14)) < *a6 )
        return sub_DC58C0(a3, a4, v36, a6);
    }
    else
    {
      v16 = *(uint32_t *)a5;
      result = -1227133513 * ((*(uint32_t *)(a5 + 4) - *(uint32_t *)a5) >> 2);
      if ( result != 0 )
      {
        v35 = 0;
        v37 = 0;
        v17 = *(uint32_t *)(a5 + 4);
        v34 = *a2;
        for ( result = *(uint32_t *)a5; ; v16 = result )
        {
          v40 = v35 + v16;
          v22 = (float)(a3[4] + a3[1]) - (float)(*(float *)(v35 + v16 + 16) + *(float *)(v35 + v16 + 4));
          v23 = (float)(a3[5] + a3[2]) - (float)(*(float *)(v35 + v16 + 20) + *(float *)(v35 + v16 + 8));
          v24 = (float)((float)(a3[6] + a3[3]) - (float)(*(float *)(v35 + v16 + 24) + *(float *)(v35 + v16 + 12))) * 0.5;
          v25 = (float)((float)((float)(v23 * 0.5) * (float)(v23 * 0.5))
                      + (float)((float)(v22 * 0.5) * (float)(v22 * 0.5)))
              + (float)(v24 * v24);
          v39 = LODWORD(v25);
          if ( v34 == 0 )
          {
            v33 = *(float **)a4;
            if ( v25 >= **(float **)a4 )
              goto LABEL_15;
            v18 = *(uint32_t *)(a4 + 4);
            v32 = *(uint32_t *)(v18 - 4);
            v31 = *(uint32_t *)(v18 - 8);
            v19 = *(uint32_t *)v33;
            *(float *)(v18 - 4) = v33[1];
            *(uint32_t *)(v18 - 8) = v19;
            g4_std::adjust_heap_gnu_cxx_normal_iterator_e2c9b6(
              v33,
              0,
              (v18 - 8 - (int)(uintptr_t)(v33)) >> 3,
              v31,
              v32);
            v20 = *(float **)a4;
            *(uint32_t *)(a4 + 4) -= 8;
            *a6 = *v20;
            v21 = *a2 + 1;
            *a2 = v21;
            if ( v21 == 0 )
            {
              result = *(uint32_t *)a5;
              v17 = *(uint32_t *)(a5 + 4);
              goto LABEL_15;
            }
            v25 = *(float *)&v39;
          }
          if ( v25 > *a6 )
            *a6 = v25;
          v26 = *(int **)(a4 + 4);
          if ( v26 == *(int **)(a4 + 8) )
          {
            g4_std::vector_CKdTree_pair_unsigned_in_6b1645::M_insert_aux(
              a4,
              *(void **)(a4 + 4),
              (int)(uintptr_t)(&v39));
            v29 = *(uint32_t *)(a4 + 4);
          }
          else
          {
            v27 = 0;
            if ( v26 != nullptr )
            {
              v28 = v39;
              v26[1] = v40;
              *v26 = v28;
              v27 = *(uint32_t *)(a4 + 4);
            }
            v29 = v27 + 8;
            *(uint32_t *)(a4 + 4) = v29;
          }
          g4_std::push_heap_gnu_cxx_normal_iterator_65c2c1(
            *(uint32_t *)a4,
            ((v29 - *(uint32_t *)a4) >> 3) - 1,
            0,
            *(uint32_t *)(v29 - 8),
            *(uint32_t *)(v29 - 4));
          v30 = *a2 - 1;
          *a2 = v30;
          v34 = v30;
          result = *(uint32_t *)a5;
          v17 = *(uint32_t *)(a5 + 4);
LABEL_15:
          ++v37;
          v35 += 28;
          if ( v37 >= -1227133513 * ((v17 - result) >> 2) )
            return result;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_DCB430  (binary VA: 0xdcb430)
// Original: sub_DCB430
// ----------------------------------------------------------------------------
volatile int32_t * sub_DCB430(int a1)
{
  int v1;
  volatile int32_t **v2;
  volatile int32_t *v3;
  volatile int32_t *v4;
  volatile int32_t *result;
  volatile int32_t *v6[7];

  v1 = a1;
  v6[6] = &a1;
  glitch::video::CGLSLShaderManager::createShader(
    v6,
    *(uint32_t **)(a1 + 4),
    *(char **)(a1 + 8),
    *(char **)(a1 + 12),
    *(char **)(a1 + 16),
    *(char **)(a1 + 20),
    *(char **)(a1 + 24),
    *(uint32_t *)(a1 + 28),
    *(uint32_t *)(a1 + 32));
  v2 = *(volatile int32_t ***)(v1 + 36);
  v3 = v6[0];
  if ( v6[0] != nullptr )
    sub_8B1B00(v6[0] + 1);
  v4 = *v2;
  *v2 = v3;
  if ( v4 != nullptr )
    sub_5459C0(v4);
  result = v6[0];
  if ( v6[0] != nullptr )
    return (volatile int32_t *)sub_5459C0(v6[0]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_DCB740  (binary VA: 0xdcb740)
// Original: sub_DCB740
// ----------------------------------------------------------------------------
volatile int32_t * sub_DCB740(int a1)
{
  int v1;
  volatile int32_t **v2;
  volatile int32_t *v3;
  volatile int32_t *v4;
  volatile int32_t *result;
  volatile int32_t *v6[7];

  v1 = a1;
  v6[6] = &a1;
  glitch::video::CGLSLShaderManager::createShader(
    v6,
    *(uint32_t *)(a1 + 4),
    *(char **)(a1 + 8),
    (int *)(a1 + 12),
    (int *)(a1 + 16));
  v2 = *(volatile int32_t ***)(v1 + 20);
  v3 = v6[0];
  if ( v6[0] != nullptr )
    sub_8B1B00(v6[0] + 1);
  v4 = *v2;
  *v2 = v3;
  if ( v4 != nullptr )
    sub_5459C0(v4);
  result = v6[0];
  if ( v6[0] != nullptr )
    return (volatile int32_t *)sub_5459C0(v6[0]);
  return result;
}


