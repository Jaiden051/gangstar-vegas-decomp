#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMoppUsi.h"

// ----------------------------------------------------------------------------
// Function: hkpMoppUsingFloatAabbVirtualMachine_hkpMoppPlanesQueryInput_cdf53b::queryMoppTree  (binary VA: 0x17960f0)
// Original: hkpMoppUsingFloatAabbVirtualMachine<hkpMoppPlanesQueryInput,hkMoppPlanesQueryObject>::queryMoppTree
// ----------------------------------------------------------------------------
char hkpMoppUsingFloatAabbVirtualMachine_hkpMoppPlanesQueryInput_cdf53b::queryMoppTree(float *a1, int *a2, uint8_t *a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  hkMemoryAllocator::Self *v10;
  int v11;
  uint8_t *v12;
  uint8_t *v13;
  char v14;
  char v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uint8_t *v20;
  int v21;
  int v22;
  int *v23;
  int v24;
  uint8_t *v25;
  uint8_t *v26;
  int v27;
  int i;
  float v29; // xmm0_4
  uint8_t *v30;
  uint8_t *v31;
  unsigned int v32;
  float v33; // xmm1_4
  int v34;
  float *v35;
  int v36;
  float v37; // xmm0_4
  uint8_t *v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  float v44; // xmm1_4
  int v45;
  int v46;
  int *v47;
  int v48;
  uint32_t *v49;
  float *v50;
  float v51; // xmm0_4
  int v52;
  float *v53;
  uint8_t *v54;
  uint8_t *v55;
  int v56;
  int *v57;
  int v58;
  int v59;
  int v60;
  float v61; // xmm1_4
  float v62; // xmm0_4
  float *v63;
  int v64;
  float v65;
  int v66;
  float v67; // xmm2_4
  float v68; // xmm7_4
  float v69; // xmm6_4
  float v70; // xmm3_4
  float v71; // xmm6_4
  float v72; // xmm5_4
  float v73; // xmm3_4
  float v74; // xmm7_4
  float v75; // xmm4_4
  float v76; // xmm2_4
  float v77; // xmm6_4
  float v78; // xmm2_4
  float v79; // xmm5_4
  float v80; // xmm7_4
  float v81; // xmm2_4
  float v82; // xmm3_4
  int v83;
  float v84;
  float v85; // xmm5_4
  float v86; // xmm1_4
  float v87; // xmm2_4
  float v88; // xmm3_4
  float v89; // xmm5_4
  float v90; // xmm0_4
  float v91; // xmm1_4
  float v92;
  int v93;
  float v94; // xmm2_4
  float v95; // xmm3_4
  float v96; // xmm6_4
  float v97; // xmm0_4
  float v98; // xmm3_4
  float v99; // xmm6_4
  float v100; // xmm5_4
  float v101; // xmm3_4
  float v102; // xmm7_4
  float v103; // xmm0_4
  float v104; // xmm4_4
  float v105; // xmm5_4
  float v106; // xmm2_4
  float v107; // xmm7_4
  float v108; // xmm6_4
  float v109; // xmm2_4
  float v110; // xmm3_4
  int v111;
  float v112;
  float v113; // xmm5_4
  float v114; // xmm1_4
  float v115; // xmm2_4
  float v116; // xmm3_4
  float v117; // xmm5_4
  float v118; // xmm0_4
  float v119; // xmm1_4
  float *v120;
  int v121;
  float v122; // xmm7_4
  float v123; // xmm2_4
  float v124; // xmm1_4
  float v125; // xmm5_4
  float v126; // xmm7_4
  float v127; // xmm5_4
  float v128; // xmm4_4
  float v129; // xmm2_4
  float *v130; // xmm1_4
  float v131; // xmm7_4
  float v132; // xmm0_4
  float v133; // xmm3_4
  float v134; // xmm5_4
  float v135; // xmm3_4
  float v136; // xmm2_4
  int v137;
  typedef int _g4_t_v139[5];
  typedef uint8_t *_g4_t_v140;
  typedef int _g4_t_v141;
  typedef int _g4_t_v142;
  typedef int _g4_t_v143;
  typedef int _g4_t_v144;
  typedef float _g4_t_v145;
  typedef float _g4_t_v146;
  typedef float _g4_t_v147;
  typedef float _g4_t_v148;
  typedef float _g4_t_v149;
  typedef float _g4_t_v150;
  typedef float _g4_t_v151;
  typedef float _g4_t_v152;
  typedef int _g4_t_v153;
  typedef float *_g4_t_v154;
  typedef int _g4_t_v155;
  typedef float _g4_t_v156;
  typedef float _g4_t_v157;
  typedef float _g4_t_v158;
  typedef float _g4_t_v159;
  typedef int *_g4_t_v160;
  typedef float _g4_t_v161;
  typedef float *_g4_t_v162;
  typedef int _g4_t_v163;
  typedef int _g4_t_v164;
  typedef int _g4_t_v165;
  typedef int _g4_t_v166;
  typedef int _g4_t_v167;
  typedef int _g4_t_v168;
  typedef float _g4_t_v169;
  typedef float _g4_t_v170;
  typedef float _g4_t_v171;
  typedef int _g4_t_v172;
  typedef float _g4_t_v173;
  typedef float _g4_t_v174;
  typedef float _g4_t_v175;
  typedef int _g4_t_v176;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v139)) > _g4_s0 ? (0u + sizeof(_g4_t_v139)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v140)) > _g4_s1 ? (20u + sizeof(_g4_t_v140)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v141)) > _g4_s2 ? (24u + sizeof(_g4_t_v141)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v142)) > _g4_s3 ? (28u + sizeof(_g4_t_v142)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v143)) > _g4_s4 ? (32u + sizeof(_g4_t_v143)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v144)) > _g4_s5 ? (36u + sizeof(_g4_t_v144)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v145)) > _g4_s6 ? (40u + sizeof(_g4_t_v145)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v146)) > _g4_s7 ? (44u + sizeof(_g4_t_v146)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v147)) > _g4_s8 ? (48u + sizeof(_g4_t_v147)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v148)) > _g4_s9 ? (52u + sizeof(_g4_t_v148)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v149)) > _g4_s10 ? (56u + sizeof(_g4_t_v149)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v150)) > _g4_s11 ? (60u + sizeof(_g4_t_v150)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v151)) > _g4_s12 ? (64u + sizeof(_g4_t_v151)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v152)) > _g4_s13 ? (68u + sizeof(_g4_t_v152)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v153)) > _g4_s14 ? (72u + sizeof(_g4_t_v153)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v154)) > _g4_s15 ? (76u + sizeof(_g4_t_v154)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v155)) > _g4_s16 ? (80u + sizeof(_g4_t_v155)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v156)) > _g4_s17 ? (84u + sizeof(_g4_t_v156)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v157)) > _g4_s18 ? (88u + sizeof(_g4_t_v157)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v158)) > _g4_s19 ? (92u + sizeof(_g4_t_v158)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v159)) > _g4_s20 ? (96u + sizeof(_g4_t_v159)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v160)) > _g4_s21 ? (100u + sizeof(_g4_t_v160)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v161)) > _g4_s22 ? (104u + sizeof(_g4_t_v161)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v162)) > _g4_s23 ? (108u + sizeof(_g4_t_v162)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v163)) > _g4_s24 ? (112u + sizeof(_g4_t_v163)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v164)) > _g4_s25 ? (116u + sizeof(_g4_t_v164)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v165)) > _g4_s26 ? (120u + sizeof(_g4_t_v165)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v166)) > _g4_s27 ? (124u + sizeof(_g4_t_v166)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v167)) > _g4_s28 ? (128u + sizeof(_g4_t_v167)) : _g4_s28,
    _g4_s30 = (132u + sizeof(_g4_t_v168)) > _g4_s29 ? (132u + sizeof(_g4_t_v168)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v169)) > _g4_s30 ? (144u + sizeof(_g4_t_v169)) : _g4_s30,
    _g4_s32 = (148u + sizeof(_g4_t_v170)) > _g4_s31 ? (148u + sizeof(_g4_t_v170)) : _g4_s31,
    _g4_s33 = (152u + sizeof(_g4_t_v171)) > _g4_s32 ? (152u + sizeof(_g4_t_v171)) : _g4_s32,
    _g4_s34 = (156u + sizeof(_g4_t_v172)) > _g4_s33 ? (156u + sizeof(_g4_t_v172)) : _g4_s33,
    _g4_s35 = (160u + sizeof(_g4_t_v173)) > _g4_s34 ? (160u + sizeof(_g4_t_v173)) : _g4_s34,
    _g4_s36 = (164u + sizeof(_g4_t_v174)) > _g4_s35 ? (164u + sizeof(_g4_t_v174)) : _g4_s35,
    _g4_s37 = (168u + sizeof(_g4_t_v175)) > _g4_s36 ? (168u + sizeof(_g4_t_v175)) : _g4_s36,
    _g4_s38 = (172u + sizeof(_g4_t_v176)) > _g4_s37 ? (172u + sizeof(_g4_t_v176)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 0u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 20u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 24u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 28u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 32u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 36u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 40u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 44u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 48u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 52u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 56u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 60u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 64u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 68u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 72u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 76u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 80u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 84u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 88u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 92u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 96u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 100u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 104u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 108u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 112u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 116u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 120u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 124u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 128u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 132u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 144u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 148u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 152u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 156u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 160u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 164u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 168u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 172u);

  LOBYTE(v4) = *a3;
  LOBYTE(v161) = a3[3];
  v5 = (uint8_t)v4;
  v6 = (uint8_t)a3[1];
  LOBYTE(v162) = a3[2];
  v7 = v6;
  while ( 2 )
  {
    if ( (uint8_t)v4 > 0x6Bu )
    {
LABEL_51:
      __builtin_debugtrap();
      v15 = LOBYTE(v161);
      v14 = (char)(uintptr_t)v162;
      goto LABEL_15;
    }
    switch ( v5 )
    {
      case 0:
        return v4;
      case 1:
      case 2:
      case 3:
      case 4:
        v16 = a2[5];
        v165 = a2[2] + ((uint8_t)v7 << v16);
        v166 = a2[3] + ((uint8_t)(uintptr_t)v162 << v16);
        v17 = a2[4] + (LOBYTE(v161) << v16);
        v168 = v16 - v5;
        v167 = v17;
        v164 = a2[1];
        v7 = (uint8_t)a3[5];
        v163 = *a2;
        v4 = (int)(uintptr_t)(a3);
        a3 += 4;
        a2 = &v163;
        v13 = a3;
        LOBYTE(v4) = *(uint8_t *)(v4 + 4);
        goto LABEL_14;
      case 5:
        a3 += (uint8_t)v7 + 2;
        LOBYTE(v4) = *a3;
        v13 = a3;
        v7 = (uint8_t)a3[1];
        goto LABEL_14;
      case 6:
        a3 += 256 * (uint8_t)v7 + (uint8_t)(uintptr_t)v162 + 3;
        LOBYTE(v4) = *a3;
        v13 = a3;
        v7 = (uint8_t)a3[1];
        goto LABEL_14;
      case 7:
        a3 += 0x10000 * (uint8_t)v7 + 256 * (uint8_t)(uintptr_t)v162 + LOBYTE(v161) + 4;
        LOBYTE(v4) = *a3;
        v13 = a3;
        v7 = (uint8_t)a3[1];
        goto LABEL_14;
      case 8:
        a3 += 0x1000000 * v7 + 0x10000 * (uint8_t)(uintptr_t)v162 + 256 * LOBYTE(v161) + (uint8_t)a3[4] + 5;
        LOBYTE(v4) = *a3;
        v13 = a3;
        v7 = (uint8_t)a3[1];
        goto LABEL_14;
      case 9:
        if ( a2 != &v163 )
        {
          v163 = *a2;
          v164 = a2[1];
          v165 = a2[2];
          v166 = a2[3];
          v167 = a2[4];
          v168 = a2[5];
        }
        v163 += (uint8_t)v7;
        a3 += 2;
        v7 = LOBYTE(v161);
        a2 = &v163;
        LOBYTE(v4) = (uint8_t)(uintptr_t)v162;
        v13 = a3;
        goto LABEL_14;
      case 10:
        v18 = (uint8_t)(uintptr_t)v162 + ((uint8_t)v7 << 8);
        if ( a2 != &v163 )
        {
          v163 = *a2;
          v164 = a2[1];
          v165 = a2[2];
          v166 = a2[3];
          v167 = a2[4];
          v168 = a2[5];
        }
        v4 = (int)(uintptr_t)(a3);
        v163 += v18;
        a2 = &v163;
        a3 += 3;
        v13 = a3;
        v7 = *(uint8_t *)(v4 + 4);
        LOBYTE(v4) = LOBYTE(v161);
        goto LABEL_14;
      case 11:
        v19 = ((uint8_t)(uintptr_t)v162 << 16) + (v7 << 24) + (LOBYTE(v161) << 8) + (uint8_t)a3[4];
        if ( a2 != &v163 )
        {
          v163 = *a2;
          v164 = a2[1];
          v165 = a2[2];
          v166 = a2[3];
          v167 = a2[4];
          v168 = a2[5];
        }
        v20 = a3;
        v163 = v19;
        v4 = (int)(uintptr_t)(a3);
        a2 = &v163;
        a3 += 5;
        v13 = a3;
        v7 = (uint8_t)v20[6];
        LOBYTE(v4) = *(uint8_t *)(v4 + 5);
        goto LABEL_14;
      case 12:
      case 13:
      case 14:
      case 15:
      case 29:
      case 30:
      case 31:
      case 44:
      case 45:
      case 46:
      case 47:
      case 84:
      case 85:
      case 86:
      case 87:
      case 88:
      case 89:
      case 90:
      case 91:
      case 92:
      case 93:
      case 94:
      case 95:
        goto LABEL_51;
      case 16:
      case 17:
      case 18:
        v21 = v5 - 16;
        v169 = *(float *)a4;
        v22 = (uint8_t)v7 << a2[5];
        v170 = *(float *)(a4 + 4);
        v171 = *(float *)(a4 + 8);
        v172 = *(uint32_t *)(a4 + 12);
        v173 = *(float *)(a4 + 16);
        v174 = *(float *)(a4 + 20);
        v175 = *(float *)(a4 + 24);
        v176 = *(uint32_t *)(a4 + 28);
        v160 = a2 + 2;
        v23 = &a2[v21 + 2];
        *(float *)(a4 + 4 * v21 + 16) = (float)(*v23 + v22) * a1[4];
        *(&v169 + v21) = (float)(*v23 + ((uint8_t)(uintptr_t)v162 << a2[5])) * a1[4];
        v162 = (float *)LOBYTE(v161);
        v24 = 0;
        v25 = a3 + 4;
        goto LABEL_31;
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
        v169 = *(float *)a4;
        v170 = *(float *)(a4 + 4);
        v171 = *(float *)(a4 + 8);
        v172 = *(uint32_t *)(a4 + 12);
        v173 = *(float *)(a4 + 16);
        v174 = *(float *)(a4 + 20);
        v175 = *(float *)(a4 + 24);
        v176 = *(uint32_t *)(a4 + 28);
        hkpMoppUsingFloatAabbVirtualMachine_hkpMoppPlanesQueryInput_cdf53b::queryMoppTree(
          a1,
          a2,
          a3 + 4,
          (int)(uintptr_t)(&v169));
        a3 += LOBYTE(v161) + 4;
        LOBYTE(v4) = *a3;
        v13 = a3;
        v7 = (uint8_t)a3[1];
        goto LABEL_14;
      case 32:
      case 33:
      case 34:
        v41 = v5 - 32;
        v42 = a2[5];
        v169 = *(float *)a4;
        v160 = a2 + 2;
        v43 = a2[v41 + 2];
        v170 = *(float *)(a4 + 4);
        v171 = *(float *)(a4 + 8);
        v172 = *(uint32_t *)(a4 + 12);
        v173 = *(float *)(a4 + 16);
        v174 = *(float *)(a4 + 20);
        v175 = *(float *)(a4 + 24);
        v176 = *(uint32_t *)(a4 + 28);
        v44 = a1[4];
        *(&v169 + v41) = (float)(v43 + ((uint8_t)v7 << v42)) * v44;
        *(float *)(a4 + 4 * v41 + 16) = (float)(v43 + (((uint8_t)v7 + 1) << v42)) * v44;
        v162 = (float *)(uint8_t)(uintptr_t)v162;
        v24 = 0;
        v25 = a3 + 3;
        goto LABEL_31;
      case 35:
      case 36:
      case 37:
        v45 = v5 - 35;
        v169 = *(float *)a4;
        v46 = (uint8_t)v7 << a2[5];
        v170 = *(float *)(a4 + 4);
        v171 = *(float *)(a4 + 8);
        v172 = *(uint32_t *)(a4 + 12);
        v173 = *(float *)(a4 + 16);
        v174 = *(float *)(a4 + 20);
        v175 = *(float *)(a4 + 24);
        v176 = *(uint32_t *)(a4 + 28);
        v160 = a2 + 2;
        v47 = &a2[v45 + 2];
        *(float *)(a4 + 4 * v45 + 16) = (float)(*v47 + v46) * a1[4];
        *(&v169 + v45) = (float)(*v47 + ((uint8_t)(uintptr_t)v162 << a2[5])) * a1[4];
        v25 = a3 + 7;
        v24 = (LOBYTE(v161) << 8) + (uint8_t)a3[4];
        v162 = (float *)((uint8_t)a3[6] + ((uint8_t)a3[5] << 8));
LABEL_31:
        v26 = &v25[v24];
        v27 = (uint8_t)v25[v24];
        for ( i = v27 - 38; (unsigned int)(v27 - 38) <= 5; i = v27 - 38 )
        {
          if ( v27 <= 40 )
          {
            v56 = i;
            v57 = &v160[v56];
            LODWORD(v161) = a4 + v56 * 4;
            *(float *)(a4 + v56 * 4) = (float)(v160[v56] + ((uint8_t)v25[v24 + 1] << a2[5])) * a1[4];
            v58 = (uint8_t)v25[v24 + 2];
            v24 += 3;
            *(float *)(LODWORD(v161) + 16) = (float)(*v57 + (v58 << a2[5])) * a1[4];
            goto LABEL_31;
          }
          LODWORD(v161) = a4 + 4 * v27 - 164;
          v29 = (float)((uint8_t)v25[v24 + 3]
                      + ((uint8_t)v25[v24 + 1] << 16)
                      + ((uint8_t)v25[v24 + 2] << 8))
              * a1[4];
          v30 = &v25[v24 + 4];
          v24 += 7;
          *(float *)LODWORD(v161) = v29;
          *(float *)(LODWORD(v161) + 16) = (float)(v30[2] + (*v30 << 16) + (v30[1] << 8)) * a1[4];
          v26 = &v25[v24];
          v27 = (uint8_t)v25[v24];
        }
        v140 = v26;
        while ( 1 )
        {
          v31 = (uint8_t *)((char *)v162 + (uint32_t)(uintptr_t)(v25));
          v32 = *((uint8_t *)v162 + (uint32_t)(uintptr_t)(v25)) - 38;
          if ( v32 > 5 )
            break;
          if ( *((uint8_t *)v162 + (uint32_t)(uintptr_t)(v25)) <= 0x28u )
          {
            v59 = a2[5];
            v60 = v160[v32];
            v61 = a1[4];
            v62 = (float)(v60 + (*((uint8_t *)v162 + (uint32_t)(uintptr_t)(v25) + 1) << v59)) * v61;
            v63 = v162;
            v162 = (float *)((char *)v162 + 3);
            v64 = *((uint8_t *)v63 + (uint32_t)(uintptr_t)(v25) + 2) << v59;
            *(&v169 + v32) = v62;
            *(&v173 + v32) = (float)(v60 + v64) * v61;
          }
          else
          {
            v33 = a1[4];
            v34 = *((uint8_t *)v162 + (uint32_t)(uintptr_t)(v25)) - 41;
            v35 = v162;
            v36 = *((uint8_t *)v162 + (uint32_t)(uintptr_t)(v25) + 3)
                + (*((uint8_t *)v162 + (uint32_t)(uintptr_t)(v25) + 1) << 16)
                + (*((uint8_t *)v162 + (uint32_t)(uintptr_t)(v25) + 2) << 8);
            v162 = (float *)((char *)v162 + 7);
            v37 = (float)v36 * v33;
            v38 = (uint8_t *)((int)(uintptr_t)(v35) + (uint32_t)(uintptr_t)(v25) + 4);
            v39 = *v38 << 16;
            v40 = v38[1] << 8;
            *(&v169 + v34) = v37;
            *(&v173 + v34) = (float)(v38[2] + v39 + v40) * v33;
          }
        }
        LODWORD(v157) = (uint32_t)(uintptr_t)(a1 + 16);
        LODWORD(v156) = (uint32_t)(uintptr_t)(a1 + 144);
        *(float *)&v162 = v169 + v173;
        v147 = v173 - v169;
        a3 = v31;
        v149 = v170 + v174;
        v161 = a1[12];
        v146 = v174 - v170;
        v141 = LODWORD(v161) - 1;
        v148 = v171 + v175;
        v145 = v175 - v171;
        if ( LODWORD(v161) - 1 < 0 )
          goto LABEL_91;
        LODWORD(v151) = LODWORD(v161) - 1;
        v65 = v157;
        v154 = a1 + 148;
        v153 = (int)(uintptr_t)(a1 + 152);
        v142 = 15;
        v155 = (int)(uintptr_t)(a1 + 20);
        v158 = v156;
        v144 = (int)(uintptr_t)(a1 + 24);
        v143 = (int)(uintptr_t)(a1 + 28);
        do
        {
          v67 = *(float *)(LODWORD(v158) + 4) * v147;
          v161 = (float)((float)(*(float *)((char *)v154 + LODWORD(v158) - LODWORD(v156)) * v146)
                       + (float)(*(float *)LODWORD(v158) * v147))
               + (float)(*(float *)(LODWORD(v158) - LODWORD(v156) + v153) * v145);
          v68 = *(float *)(LODWORD(v158) + 8) * v147;
          v69 = v147 * *(float *)(LODWORD(v158) + 12);
          *(float *)&v160 = (float)((float)(*(float *)((char *)v154 + LODWORD(v158) - LODWORD(v156) + 4) * v146) + v67)
                          + (float)(*(float *)(LODWORD(v158) - LODWORD(v156) + v153 + 4) * v145);
          v70 = *(float *)(LODWORD(v65) + 4);
          v159 = (float)((float)(*(float *)((char *)v154 + LODWORD(v158) - LODWORD(v156) + 8) * v146) + v68)
               + (float)(*(float *)(LODWORD(v158) - LODWORD(v156) + v153 + 8) * v145);
          v71 = (float)(v69 + (float)(*(float *)((char *)v154 + LODWORD(v158) - LODWORD(v156) + 12) * v146))
              + (float)(*(float *)(LODWORD(v158) - LODWORD(v156) + v153 + 12) * v145);
          v72 = (float)((float)((float)(*(float *)LODWORD(v65) * *(float *)&v162)
                              + (float)(*(float *)(LODWORD(v65) - LODWORD(v157) + v155) * v149))
                      + (float)(*(float *)(LODWORD(v65) - LODWORD(v157) + v144) * v148))
              + *(float *)(LODWORD(v65) - LODWORD(v157) + v143);
          v73 = (float)((float)((float)(v70 * *(float *)&v162)
                              + (float)(*(float *)(LODWORD(v65) - LODWORD(v157) + v155 + 4) * v149))
                      + (float)(*(float *)(LODWORD(v65) - LODWORD(v157) + v144 + 4) * v148))
              + *(float *)(LODWORD(v65) - LODWORD(v157) + v143 + 4);
          v74 = (float)((float)((float)(*(float *)&v162 * *(float *)(LODWORD(v65) + 8))
                              + (float)(*(float *)(LODWORD(v65) - LODWORD(v157) + v155 + 8) * v149))
                      + (float)(*(float *)(LODWORD(v65) - LODWORD(v157) + v144 + 8) * v148))
              + *(float *)(LODWORD(v65) - LODWORD(v157) + v143 + 8);
          v75 = v74 - v159;
          v76 = (float)((float)((float)((float)(*(float *)&v162 * *(float *)(LODWORD(v65) + 12))
                                      + (float)(v149 * *(float *)(LODWORD(v65) - LODWORD(v157) + v155 + 12)))
                              + (float)(*(float *)(LODWORD(v65) - LODWORD(v157) + v144 + 12) * v148))
                      + *(float *)(LODWORD(v65) - LODWORD(v157) + v143 + 12))
              - v71;
          v77 = (float)((float)((float)((float)(*(float *)&v162 * *(float *)(LODWORD(v65) + 12))
                                      + (float)(v149 * *(float *)(LODWORD(v65) - LODWORD(v157) + v155 + 12)))
                              + (float)(*(float *)(LODWORD(v65) - LODWORD(v157) + v144 + 12) * v148))
                      + *(float *)(LODWORD(v65) - LODWORD(v157) + v143 + 12))
              + v71;
          v152 = v76;
          v78 = v161 + v72;
          v79 = v72 - v161;
          v80 = v74 + v159;
          v150 = v78;
          v81 = *(float *)&v160 + v73;
          v82 = v73 - *(float *)&v160;
          v83 = 4 * (v75 < 0.0);
          if ( v152 < 0.0 )
            v83 = 4 * (v75 < 0.0) + 8;
          if ( (v83 | (v79 < 0.0) | (2 * (v82 < 0.0))) != 0xF )
          {
            v84 = *(float *)&v141;
            *(float *)&v141 = 0.0;
            v152 = v84;
            goto LABEL_63;
          }
          v66 = 4 * (v80 < 0.0);
          if ( v77 < 0.0 )
            v66 = 4 * (v80 < 0.0) + 8;
          LODWORD(v65) += 64;
          LODWORD(v158) += 64;
          v142 &= v66 | (v150 < 0.0) | (2 * (v81 < 0.0));
          --LODWORD(v151);
        }
        while ( v151 != NAN );
        if ( v142 == 15 )
        {
LABEL_91:
          hkpMoppFindAllVirtualMachine::queryOnTree(a1 + 8, a2, a3);
          v141 = 1;
          v162 = *((float **)a1 + 12);
          LODWORD(v152) = (uint32_t)(uintptr_t)((char *)v162 - 1);
        }
        else
        {
          v112 = *(float *)&v141;
          v141 = 2;
          v152 = v112;
        }
LABEL_63:
        v85 = *(float *)(a4 + 16);
        v86 = *(float *)a4 + v85;
        v87 = *(float *)(a4 + 4);
        v88 = *(float *)(a4 + 20);
        v89 = v85 - *(float *)a4;
        v90 = *(float *)(a4 + 8);
        v161 = v86;
        v147 = v89;
        v149 = v87 + v88;
        v91 = *(float *)(a4 + 24);
        v146 = v88 - v87;
        v148 = v90 + v91;
        v145 = v91 - v90;
        if ( __builtin_signbit(v152) )
          goto LABEL_90;
        v142 = 15;
        v154 = (float *)(LODWORD(v156) + 16);
        *(float *)&v162 = v156;
        v153 = LODWORD(v156) + 32;
        v155 = LODWORD(v157) + 16;
        v144 = LODWORD(v157) + 32;
        v92 = v157;
        v143 = LODWORD(v157) + 48;
        do
        {
          v94 = v147 * v162[1];
          *(float *)&v160 = (float)((float)(*(float *)((char *)v154 + (uint32_t)(uintptr_t)(v162) - LODWORD(v156)) * v146)
                                  + (float)(v147 * *v162))
                          + (float)(*(float *)((char *)v162 + v153 - LODWORD(v156)) * v145);
          v95 = v162[2] * v147;
          v96 = v147 * v162[3];
          v159 = (float)((float)(*(float *)((char *)v154 + (uint32_t)(uintptr_t)(v162) - LODWORD(v156) + 4) * v146) + v94)
               + (float)(*(float *)((char *)v162 + v153 - LODWORD(v156) + 4) * v145);
          v97 = (float)((float)(*(float *)((char *)v154 + (uint32_t)(uintptr_t)(v162) - LODWORD(v156) + 8) * v146) + v95)
              + (float)(*(float *)((char *)v162 + v153 - LODWORD(v156) + 8) * v145);
          v98 = *(float *)(LODWORD(v92) + 4);
          v158 = v97;
          v99 = (float)(v96 + (float)(*(float *)((char *)v154 + (uint32_t)(uintptr_t)(v162) - LODWORD(v156) + 12) * v146))
              + (float)(*(float *)((char *)v162 + v153 - LODWORD(v156) + 12) * v145);
          v100 = (float)((float)((float)(*(float *)LODWORD(v92) * v161)
                               + (float)(*(float *)(LODWORD(v92) - LODWORD(v157) + v155) * v149))
                       + (float)(*(float *)(LODWORD(v92) - LODWORD(v157) + v144) * v148))
               + *(float *)(LODWORD(v92) - LODWORD(v157) + v143);
          v101 = (float)((float)((float)(v98 * v161)
                               + (float)(*(float *)(LODWORD(v92) - LODWORD(v157) + v155 + 4) * v149))
                       + (float)(*(float *)(LODWORD(v92) - LODWORD(v157) + v144 + 4) * v148))
               + *(float *)(LODWORD(v92) - LODWORD(v157) + v143 + 4);
          v102 = (float)((float)((float)(v161 * *(float *)(LODWORD(v92) + 8))
                               + (float)(*(float *)(LODWORD(v92) - LODWORD(v157) + v155 + 8) * v149))
                       + (float)(*(float *)(LODWORD(v92) - LODWORD(v157) + v144 + 8) * v148))
               + *(float *)(LODWORD(v92) - LODWORD(v157) + v143 + 8);
          v103 = (float)((float)((float)(v161 * *(float *)(LODWORD(v92) + 12))
                               + (float)(v149 * *(float *)(LODWORD(v92) - LODWORD(v157) + v155 + 12)))
                       + (float)(*(float *)(LODWORD(v92) - LODWORD(v157) + v144 + 12) * v148))
               + *(float *)(LODWORD(v92) - LODWORD(v157) + v143 + 12);
          v151 = v102 - v158;
          v104 = *(float *)&v160 + v100;
          v105 = v100 - *(float *)&v160;
          v106 = v103 - v99;
          v107 = v102 + v158;
          v108 = v99 + v103;
          v150 = v106;
          v109 = v159 + v101;
          v110 = v101 - v159;
          LOBYTE(v4) = v151 < 0.0;
          v111 = 4 * (v151 < 0.0);
          if ( v150 < 0.0 )
            v111 = 4 * (v151 < 0.0) + 8;
          if ( (v111 | (v105 < 0.0) | (2 * (v110 < 0.0))) != 0xF )
            goto LABEL_71;
          v93 = 4 * (v107 < 0.0);
          if ( v108 < 0.0 )
            v93 = 4 * (v107 < 0.0) + 8;
          LODWORD(v92) += 64;
          v162 += 16;
          v142 &= v93 | (v104 < 0.0) | (2 * (v109 < 0.0));
          --LODWORD(v152);
        }
        while ( v152 != NAN );
        if ( v142 == 15 )
        {
LABEL_90:
          LOBYTE(v4) = (uint8_t)(uintptr_t)(hkpMoppFindAllVirtualMachine::queryOnTree(a1 + 8, a2, v140));
LABEL_71:
          if ( v141 != 2 )
            return v4;
          *(float *)a4 = v169;
          *(float *)(a4 + 4) = v170;
          *(float *)(a4 + 8) = v171;
          *(uint32_t *)(a4 + 12) = v172;
          *(float *)(a4 + 16) = v173;
          *(float *)(a4 + 20) = v174;
          *(float *)(a4 + 24) = v175;
          *(uint32_t *)(a4 + 28) = v176;
          v13 = a3;
          LOBYTE(v4) = *a3;
          v7 = (uint8_t)a3[1];
        }
        else
        {
          if ( v141 == 2 )
            hkpMoppUsingFloatAabbVirtualMachine_hkpMoppPlanesQueryInput_cdf53b::queryMoppTree(
              a1,
              a2,
              a3,
              (int)(uintptr_t)(&v169));
          v13 = v140;
          a3 = v140;
          LOBYTE(v4) = *v140;
          v7 = (uint8_t)v140[1];
        }
        goto LABEL_14;
      case 38:
      case 39:
      case 40:
        v48 = 4 * v5 - 152;
        v49 = (uint32_t *)((int *)((char *)a2 + v48 + 8));
        v50 = (float *)(a4 + v48);
        a3 += 3;
        v51 = (float)(*v49 + ((uint8_t)v7 << a2[5])) * a1[4];
        v52 = (uint8_t)(uintptr_t)v162;
        *v50 = v51;
        v50[4] = (float)(*v49 + (v52 << a2[5])) * a1[4];
        goto LABEL_42;
      case 41:
      case 42:
      case 43:
        v53 = (float *)(a4 + 4 * v5 - 164);
        v54 = a3;
        v55 = a3;
        a3 += 7;
        *v53 = (float)(LOBYTE(v161) + ((uint8_t)(uintptr_t)v162 << 8) + ((uint8_t)v7 << 16)) * a1[4];
        v53[4] = (float)((uint8_t)v54[6] + ((uint8_t)v55[4] << 16) + ((uint8_t)v55[5] << 8))
               * a1[4];
LABEL_42:
        LOBYTE(v142) = *a3;
        if ( (uint8_t)(v142 - 38) <= 5u )
          goto LABEL_43;
        v155 = (int)(uintptr_t)(a1 + 16);
        v154 = a1 + 144;
        v113 = *(float *)(a4 + 16);
        v114 = *(float *)a4 + v113;
        v115 = *(float *)(a4 + 4);
        v116 = *(float *)(a4 + 20);
        v117 = v113 - *(float *)a4;
        v118 = *(float *)(a4 + 8);
        *(float *)&v162 = v114;
        v151 = v117;
        *(float *)&v153 = v115 + v116;
        v119 = *(float *)(a4 + 24);
        v150 = v116 - v115;
        v161 = a1[12];
        v152 = v118 + v119;
        LODWORD(v158) = LODWORD(v161) - 1;
        v149 = v119 - v118;
        if ( LODWORD(v161) - 1 < 0 )
          goto LABEL_89;
        v120 = (float *)v155;
        LODWORD(v147) = (uint32_t)(uintptr_t)(a1 + 148);
        v143 = 15;
        LODWORD(v145) = (uint32_t)(uintptr_t)(a1 + 152);
        v159 = *(float *)&v154;
        LODWORD(v148) = (uint32_t)(uintptr_t)(a1 + 20);
        LODWORD(v146) = (uint32_t)(uintptr_t)(a1 + 24);
        v144 = (int)(uintptr_t)(a1 + 28);
        do
        {
          v122 = *(float *)(LODWORD(v159) + 8);
          v123 = v120[1];
          v124 = *(float *)(LODWORD(v159) + 4) * v151;
          v125 = v151 * *(float *)(LODWORD(v159) + 12);
          v161 = (float)((float)(*(float *)(LODWORD(v159) - (uint32_t)(uintptr_t)(v154) + LODWORD(v147)) * v150)
                       + (float)(*(float *)LODWORD(v159) * v151))
               + (float)(*(float *)(LODWORD(v159) - (uint32_t)(uintptr_t)(v154) + LODWORD(v145)) * v149);
          *(float *)&v160 = (float)((float)(*(float *)(LODWORD(v159) - (uint32_t)(uintptr_t)(v154) + LODWORD(v147) + 4) * v150) + v124)
                          + (float)(*(float *)(LODWORD(v159) - (uint32_t)(uintptr_t)(v154) + LODWORD(v145) + 4) * v149);
          v126 = (float)((float)(v122 * v151)
                       + (float)(*(float *)(LODWORD(v159) - (uint32_t)(uintptr_t)(v154) + LODWORD(v147) + 8) * v150))
               + (float)(*(float *)(LODWORD(v159) - (uint32_t)(uintptr_t)(v154) + LODWORD(v145) + 8) * v149);
          v127 = (float)(v125 + (float)(*(float *)(LODWORD(v159) - (uint32_t)(uintptr_t)(v154) + LODWORD(v147) + 12) * v150))
               + (float)(*(float *)(LODWORD(v159) - (uint32_t)(uintptr_t)(v154) + LODWORD(v145) + 12) * v149);
          v128 = (float)((float)((float)(*v120 * *(float *)&v162)
                               + (float)(*(float *)((char *)v120 + LODWORD(v148) - v155) * *(float *)&v153))
                       + (float)(*(float *)((char *)v120 + LODWORD(v146) - v155) * v152))
               + *(float *)((char *)v120 + v144 - v155);
          v129 = (float)((float)((float)(v123 * *(float *)&v162)
                               + (float)(*(float *)((char *)v120 + LODWORD(v148) - v155 + 4) * *(float *)&v153))
                       + (float)(*(float *)((char *)v120 + LODWORD(v146) - v155 + 4) * v152))
               + *(float *)((char *)v120 + v144 - v155 + 4);
          *(float *)&v130 = (float)((float)((float)((float)(*(float *)&v162 * v120[2])
                                                  + (float)(*(float *)((char *)v120 + LODWORD(v148) - v155 + 8)
                                                          * *(float *)&v153))
                                          + (float)(*(float *)((char *)v120 + LODWORD(v146) - v155 + 8) * v152))
                                  + *(float *)((char *)v120 + v144 - v155 + 8))
                          - v126;
          v131 = (float)((float)((float)((float)(*(float *)&v162 * v120[2])
                                       + (float)(*(float *)((char *)v120 + LODWORD(v148) - v155 + 8) * *(float *)&v153))
                               + (float)(*(float *)((char *)v120 + LODWORD(v146) - v155 + 8) * v152))
                       + *(float *)((char *)v120 + v144 - v155 + 8))
               + v126;
          v132 = (float)((float)((float)(*(float *)&v162 * v120[3])
                               + (float)(*(float *)&v153 * *(float *)((char *)v120 + LODWORD(v148) - v155 + 12)))
                       + (float)(*(float *)((char *)v120 + LODWORD(v146) - v155 + 12) * v152))
               + *(float *)((char *)v120 + v144 - v155 + 12);
          v157 = *(float *)&v130;
          v133 = v132 - v127;
          v134 = v127 + v132;
          v156 = v133;
          v135 = *(float *)&v160 + v129;
          v136 = v129 - *(float *)&v160;
          v137 = 4 * (*(float *)&v130 < 0.0);
          if ( v156 < 0.0 )
            v137 = 4 * (v157 < 0.0) + 8;
          v4 = v137 | ((float)(v128 - v161) < 0.0) | (2 * (v136 < 0.0));
          if ( v4 != 15 )
            return v4;
          v121 = 4 * (v131 < 0.0);
          if ( v134 < 0.0 )
            v121 = 4 * (v131 < 0.0) + 8;
          v120 += 16;
          LODWORD(v159) += 64;
          v143 &= v121 | ((float)(v161 + v128) < 0.0) | (2 * (v135 < 0.0));
          --LODWORD(v158);
        }
        while ( v158 != NAN );
        if ( v143 != 15 )
        {
LABEL_43:
          v13 = a3;
          v7 = (uint8_t)a3[1];
          LOBYTE(v4) = v142;
LABEL_14:
          v14 = v13[2];
          v5 = (uint8_t)v4;
          v15 = v13[3];
LABEL_15:
          LOBYTE(v162) = v14;
          LOBYTE(v161) = v15;
          continue;
        }
LABEL_89:
        LOBYTE(v4) = (uint8_t)(uintptr_t)(hkpMoppFindAllVirtualMachine::queryOnTree(a1 + 8, a2, a3));
        return v4;
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
      case 58:
      case 59:
      case 60:
      case 61:
      case 62:
      case 63:
      case 64:
      case 65:
      case 66:
      case 67:
      case 68:
      case 69:
      case 70:
      case 71:
      case 72:
      case 73:
      case 74:
      case 75:
      case 76:
      case 77:
      case 78:
      case 79:
        v8 = v5 - 48;
        goto LABEL_6;
      case 80:
        v8 = (uint8_t)v7;
        goto LABEL_6;
      case 81:
        v8 = ((uint8_t)v7 << 8) + (uint8_t)(uintptr_t)v162;
        goto LABEL_6;
      case 82:
        v8 = ((uint8_t)v7 << 16) + ((uint8_t)(uintptr_t)v162 << 8) + LOBYTE(v161);
        goto LABEL_6;
      case 83:
        v8 = (LOBYTE(v161) << 8) + (v7 << 24) + ((uint8_t)(uintptr_t)v162 << 16) + (uint8_t)a3[4];
LABEL_6:
        v9 = *a2 + v8;
        v10 = *(hkMemoryAllocator::Self **)a1;
        v4 = *(uint32_t *)(*(uint32_t *)a1 + 4);
        if ( v4 == (*(uint32_t *)(*(uint32_t *)a1 + 8) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v10, 4, v139[3]);
          v4 = *((uint32_t *)v10 + 1);
        }
        v11 = *(uint32_t *)v10;
        *((uint32_t *)v10 + 1) = v4 + 1;
        *(uint32_t *)(v11 + 4 * v4) = v9;
        return v4;
      case 96:
      case 97:
      case 98:
      case 99:
        a3 += 2;
        v139[v5 - 67] = (uint8_t)v7;
        goto LABEL_11;
      case 100:
      case 101:
      case 102:
      case 103:
        a3 += 3;
        v139[v5 - 71] = (uint8_t)(uintptr_t)(v162) + ((uint8_t)v7 << 8);
        goto LABEL_11;
      case 104:
      case 105:
      case 106:
      case 107:
        v12 = a3;
        a3 += 5;
        v139[v5 - 75] = (uint8_t)v12[4] + ((uint8_t)(uintptr_t)(v162) << 16) + (v7 << 24) + (LOBYTE(v161) << 8);
LABEL_11:
        v4 = v164;
        if ( a2 != &v163 )
        {
          v163 = *a2;
          v164 = a2[1];
          v165 = a2[2];
          v166 = a2[3];
          v167 = a2[4];
          v168 = a2[5];
        }
        v164 = v4;
        a2 = &v163;
        v13 = a3;
        v7 = (uint8_t)a3[1];
        LOBYTE(v4) = *a3;
        goto LABEL_14;
      default:
        abort();
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpMoppUsingFloatAabbVirtualMachine_hkpMoppPlanesQueryInput_c86db8::queryMoppTree  (binary VA: 0x1797e90)
// Original: hkpMoppUsingFloatAabbVirtualMachine<hkpMoppPlanesQueryInput,hkMoppPlanesQueryObjectOptimized>::queryMoppTree
// ----------------------------------------------------------------------------
char hkpMoppUsingFloatAabbVirtualMachine_hkpMoppPlanesQueryInput_c86db8::queryMoppTree(int a1, int *a2, uint8_t *a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  hkMemoryAllocator::Self *v10;
  int v11;
  uint8_t *v12;
  uint8_t *v13;
  char v14;
  char v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int *v22;
  int v23;
  uint8_t *v24;
  uint8_t *v25;
  int v26;
  int i;
  int v28;
  float v29; // xmm0_4
  uint8_t *v30;
  unsigned int v31;
  float v32; // xmm1_4
  int v33;
  float v34;
  int v35;
  float v36; // xmm0_4
  uint8_t *v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  float v43; // xmm1_4
  int v44;
  int v45;
  int *v46;
  int v47;
  uint32_t *v48;
  float *v49;
  float v50; // xmm0_4
  int v51;
  float *v52;
  uint8_t *v53;
  uint8_t *v54;
  int v55;
  int *v56;
  int v57;
  int v58;
  int v59;
  float v60; // xmm1_4
  float v61; // xmm0_4
  float v62;
  int v63;
  int v64;
  float v65; // xmm4_4
  float v66; // xmm2_4
  float v67; // xmm6_4
  float v68; // xmm0_4
  float v69; // xmm6_4
  float v70; // xmm5_4
  float v71; // xmm3_4
  float v72; // xmm7_4
  float v73; // xmm0_4
  float v74; // xmm1_4
  float v75; // xmm6_4
  float v76; // xmm1_4
  float v77; // xmm3_4
  float v78; // xmm1_4
  int v79;
  float v80;
  float v81; // xmm5_4
  int *v82; // xmm2_4
  float v83; // xmm3_4
  float v84; // xmm0_4
  float v85; // xmm5_4
  float v86; // xmm1_4
  float v87; // xmm2_4
  int v88;
  float v89; // xmm4_4
  float v90; // xmm2_4
  float v91; // xmm5_4
  float v92; // xmm6_4
  float v93; // xmm0_4
  float v94; // xmm6_4
  float v95; // xmm5_4
  float v96; // xmm3_4
  float v97; // xmm7_4
  float v98; // xmm0_4
  float v99; // xmm1_4
  float v100; // xmm6_4
  float v101; // xmm1_4
  float v102; // xmm5_4
  float v103; // xmm1_4
  float v104; // xmm3_4
  float v105; // xmm1_4
  int v106;
  float v107;
  float v108; // xmm5_4
  float v109; // xmm2_4
  float v110; // xmm3_4
  float v111; // xmm0_4
  float v112; // xmm5_4
  float v113; // xmm1_4
  float v114; // xmm2_4
  int v115;
  float v116; // xmm7_4
  float v117; // xmm5_4
  float v118; // xmm0_4
  float v119; // xmm3_4
  float v120; // xmm7_4
  float v121; // xmm0_4
  float v122; // xmm7_4
  float v123; // xmm5_4
  float v124; // xmm4_4
  float v125; // xmm2_4
  float v126; // xmm1_4
  float v127; // xmm7_4
  float v128; // xmm0_4
  float v129; // xmm1_4
  float v130; // xmm4_4
  float v131; // xmm3_4
  float v132; // xmm5_4
  float v133; // xmm3_4
  float v134; // xmm2_4
  int v135;
  uint8_t *v136;
  typedef int _g4_t_v138[6];
  typedef uint8_t *_g4_t_v139;
  typedef int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef float _g4_t_v142;
  typedef int _g4_t_v143;
  typedef float _g4_t_v144;
  typedef float _g4_t_v145;
  typedef float _g4_t_v146;
  typedef float _g4_t_v147;
  typedef float _g4_t_v148;
  typedef float _g4_t_v149;
  typedef float _g4_t_v150;
  typedef float _g4_t_v151;
  typedef float _g4_t_v152;
  typedef float _g4_t_v153;
  typedef float _g4_t_v154;
  typedef float *_g4_t_v155;
  typedef float *_g4_t_v156;
  typedef float _g4_t_v157;
  typedef float _g4_t_v158;
  typedef float _g4_t_v159;
  typedef float *_g4_t_v160;
  typedef float _g4_t_v161;
  typedef int *_g4_t_v162;
  typedef float _g4_t_v163;
  typedef float _g4_t_v164;
  typedef int _g4_t_v165;
  typedef int _g4_t_v166;
  typedef int _g4_t_v167;
  typedef int _g4_t_v168;
  typedef int _g4_t_v169;
  typedef int _g4_t_v170;
  typedef float _g4_t_v171;
  typedef float _g4_t_v172;
  typedef float _g4_t_v173;
  typedef int _g4_t_v174;
  typedef float _g4_t_v175;
  typedef float _g4_t_v176;
  typedef float _g4_t_v177;
  typedef int _g4_t_v178;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v138)) > _g4_s0 ? (0u + sizeof(_g4_t_v138)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v139)) > _g4_s1 ? (24u + sizeof(_g4_t_v139)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v140)) > _g4_s2 ? (28u + sizeof(_g4_t_v140)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v141)) > _g4_s3 ? (32u + sizeof(_g4_t_v141)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v142)) > _g4_s4 ? (36u + sizeof(_g4_t_v142)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v143)) > _g4_s5 ? (40u + sizeof(_g4_t_v143)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v144)) > _g4_s6 ? (44u + sizeof(_g4_t_v144)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v145)) > _g4_s7 ? (48u + sizeof(_g4_t_v145)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v146)) > _g4_s8 ? (52u + sizeof(_g4_t_v146)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v147)) > _g4_s9 ? (56u + sizeof(_g4_t_v147)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v148)) > _g4_s10 ? (60u + sizeof(_g4_t_v148)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v149)) > _g4_s11 ? (64u + sizeof(_g4_t_v149)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v150)) > _g4_s12 ? (68u + sizeof(_g4_t_v150)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v151)) > _g4_s13 ? (72u + sizeof(_g4_t_v151)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v152)) > _g4_s14 ? (76u + sizeof(_g4_t_v152)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v153)) > _g4_s15 ? (80u + sizeof(_g4_t_v153)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v154)) > _g4_s16 ? (84u + sizeof(_g4_t_v154)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v155)) > _g4_s17 ? (88u + sizeof(_g4_t_v155)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v156)) > _g4_s18 ? (92u + sizeof(_g4_t_v156)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v157)) > _g4_s19 ? (96u + sizeof(_g4_t_v157)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v158)) > _g4_s20 ? (100u + sizeof(_g4_t_v158)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v159)) > _g4_s21 ? (104u + sizeof(_g4_t_v159)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v160)) > _g4_s22 ? (108u + sizeof(_g4_t_v160)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v161)) > _g4_s23 ? (112u + sizeof(_g4_t_v161)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v162)) > _g4_s24 ? (116u + sizeof(_g4_t_v162)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v163)) > _g4_s25 ? (120u + sizeof(_g4_t_v163)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v164)) > _g4_s26 ? (124u + sizeof(_g4_t_v164)) : _g4_s26,
    _g4_s28 = (128u + sizeof(_g4_t_v165)) > _g4_s27 ? (128u + sizeof(_g4_t_v165)) : _g4_s27,
    _g4_s29 = (132u + sizeof(_g4_t_v166)) > _g4_s28 ? (132u + sizeof(_g4_t_v166)) : _g4_s28,
    _g4_s30 = (136u + sizeof(_g4_t_v167)) > _g4_s29 ? (136u + sizeof(_g4_t_v167)) : _g4_s29,
    _g4_s31 = (140u + sizeof(_g4_t_v168)) > _g4_s30 ? (140u + sizeof(_g4_t_v168)) : _g4_s30,
    _g4_s32 = (144u + sizeof(_g4_t_v169)) > _g4_s31 ? (144u + sizeof(_g4_t_v169)) : _g4_s31,
    _g4_s33 = (148u + sizeof(_g4_t_v170)) > _g4_s32 ? (148u + sizeof(_g4_t_v170)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v171)) > _g4_s33 ? (160u + sizeof(_g4_t_v171)) : _g4_s33,
    _g4_s35 = (164u + sizeof(_g4_t_v172)) > _g4_s34 ? (164u + sizeof(_g4_t_v172)) : _g4_s34,
    _g4_s36 = (168u + sizeof(_g4_t_v173)) > _g4_s35 ? (168u + sizeof(_g4_t_v173)) : _g4_s35,
    _g4_s37 = (172u + sizeof(_g4_t_v174)) > _g4_s36 ? (172u + sizeof(_g4_t_v174)) : _g4_s36,
    _g4_s38 = (176u + sizeof(_g4_t_v175)) > _g4_s37 ? (176u + sizeof(_g4_t_v175)) : _g4_s37,
    _g4_s39 = (180u + sizeof(_g4_t_v176)) > _g4_s38 ? (180u + sizeof(_g4_t_v176)) : _g4_s38,
    _g4_s40 = (184u + sizeof(_g4_t_v177)) > _g4_s39 ? (184u + sizeof(_g4_t_v177)) : _g4_s39,
    _g4_s41 = (188u + sizeof(_g4_t_v178)) > _g4_s40 ? (188u + sizeof(_g4_t_v178)) : _g4_s40
  };
  alignas(16) uint8_t _g4_sf[_g4_s41];
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 0u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 24u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 28u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 32u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 36u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 40u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 44u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 48u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 52u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 56u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 60u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 64u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 68u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 72u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 76u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 80u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 84u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 88u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 92u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 96u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 100u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 104u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 108u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 112u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 116u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 120u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 124u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 128u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 132u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 136u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 140u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 144u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 148u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 160u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 164u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 168u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 172u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 176u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 180u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 184u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 188u);

  LOBYTE(v4) = *a3;
  LOBYTE(v163) = a3[3];
  v5 = (uint8_t)v4;
  v6 = (uint8_t)a3[1];
  LOBYTE(v164) = a3[2];
  v7 = v6;
  while ( 2 )
  {
    if ( (uint8_t)v4 > 0x6Bu )
    {
LABEL_51:
      __builtin_debugtrap();
      v15 = LOBYTE(v163);
      v14 = LOBYTE(v164);
      goto LABEL_15;
    }
    switch ( v5 )
    {
      case 0:
        return v4;
      case 1:
      case 2:
      case 3:
      case 4:
        v16 = a2[5];
        v167 = a2[2] + ((uint8_t)v7 << v16);
        v168 = a2[3] + (LOBYTE(v164) << v16);
        v17 = a2[4] + (LOBYTE(v163) << v16);
        v170 = v16 - v5;
        v169 = v17;
        v166 = a2[1];
        v7 = (uint8_t)a3[5];
        v165 = *a2;
        v4 = (int)(uintptr_t)(a3);
        a3 += 4;
        a2 = &v165;
        v13 = a3;
        LOBYTE(v4) = *(uint8_t *)(v4 + 4);
        goto LABEL_14;
      case 5:
        a3 += (uint8_t)v7 + 2;
        LOBYTE(v4) = *a3;
        v13 = a3;
        v7 = (uint8_t)a3[1];
        goto LABEL_14;
      case 6:
        a3 += 256 * (uint8_t)v7 + LOBYTE(v164) + 3;
        LOBYTE(v4) = *a3;
        v13 = a3;
        v7 = (uint8_t)a3[1];
        goto LABEL_14;
      case 7:
        a3 += 0x10000 * (uint8_t)v7 + 256 * LOBYTE(v164) + LOBYTE(v163) + 4;
        LOBYTE(v4) = *a3;
        v13 = a3;
        v7 = (uint8_t)a3[1];
        goto LABEL_14;
      case 8:
        a3 += 0x1000000 * v7 + 0x10000 * LOBYTE(v164) + 256 * LOBYTE(v163) + (uint8_t)a3[4] + 5;
        LOBYTE(v4) = *a3;
        v13 = a3;
        v7 = (uint8_t)a3[1];
        goto LABEL_14;
      case 9:
        if ( a2 != &v165 )
        {
          v165 = *a2;
          v166 = a2[1];
          v167 = a2[2];
          v168 = a2[3];
          v169 = a2[4];
          v170 = a2[5];
        }
        v165 += (uint8_t)v7;
        a3 += 2;
        v7 = LOBYTE(v163);
        a2 = &v165;
        LOBYTE(v4) = LOBYTE(v164);
        v13 = a3;
        goto LABEL_14;
      case 10:
        v18 = LOBYTE(v164) + ((uint8_t)v7 << 8);
        if ( a2 != &v165 )
        {
          v165 = *a2;
          v166 = a2[1];
          v167 = a2[2];
          v168 = a2[3];
          v169 = a2[4];
          v170 = a2[5];
        }
        v4 = (int)(uintptr_t)(a3);
        v165 += v18;
        a2 = &v165;
        a3 += 3;
        v13 = a3;
        v7 = *(uint8_t *)(v4 + 4);
        LOBYTE(v4) = LOBYTE(v163);
        goto LABEL_14;
      case 11:
        v19 = (LOBYTE(v164) << 16) + (v7 << 24) + (LOBYTE(v163) << 8) + (uint8_t)a3[4];
        if ( a2 != &v165 )
        {
          v165 = *a2;
          v166 = a2[1];
          v167 = a2[2];
          v168 = a2[3];
          v169 = a2[4];
          v170 = a2[5];
        }
        v165 = v19;
        v4 = (int)(uintptr_t)(a3);
        a2 = &v165;
        v7 = (uint8_t)a3[6];
        a3 += 5;
        LOBYTE(v4) = *(uint8_t *)(v4 + 5);
        v13 = a3;
        goto LABEL_14;
      case 12:
      case 13:
      case 14:
      case 15:
      case 29:
      case 30:
      case 31:
      case 44:
      case 45:
      case 46:
      case 47:
      case 84:
      case 85:
      case 86:
      case 87:
      case 88:
      case 89:
      case 90:
      case 91:
      case 92:
      case 93:
      case 94:
      case 95:
        goto LABEL_51;
      case 16:
      case 17:
      case 18:
        v20 = v5 - 16;
        v171 = *(float *)a4;
        v21 = (uint8_t)v7 << a2[5];
        v172 = *(float *)(a4 + 4);
        v173 = *(float *)(a4 + 8);
        v174 = *(uint32_t *)(a4 + 12);
        v175 = *(float *)(a4 + 16);
        v176 = *(float *)(a4 + 20);
        v177 = *(float *)(a4 + 24);
        v178 = *(uint32_t *)(a4 + 28);
        v162 = a2 + 2;
        v22 = &a2[v20 + 2];
        *(float *)(a4 + 4 * v20 + 16) = (float)(*v22 + v21) * *(float *)(a1 + 16);
        *(&v171 + v20) = (float)(*v22 + (LOBYTE(v164) << a2[5])) * *(float *)(a1 + 16);
        LODWORD(v164) = LOBYTE(v163);
        v23 = 0;
        v24 = a3 + 4;
        goto LABEL_31;
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
        v171 = *(float *)a4;
        v172 = *(float *)(a4 + 4);
        v173 = *(float *)(a4 + 8);
        v174 = *(uint32_t *)(a4 + 12);
        v175 = *(float *)(a4 + 16);
        v176 = *(float *)(a4 + 20);
        v177 = *(float *)(a4 + 24);
        v178 = *(uint32_t *)(a4 + 28);
        hkpMoppUsingFloatAabbVirtualMachine_hkpMoppPlanesQueryInput_c86db8::queryMoppTree(
          a1,
          a2,
          a3 + 4,
          (int)(uintptr_t)(&v171));
        a3 += LOBYTE(v163) + 4;
        LOBYTE(v4) = *a3;
        v13 = a3;
        v7 = (uint8_t)a3[1];
        goto LABEL_14;
      case 32:
      case 33:
      case 34:
        v40 = v5 - 32;
        v41 = a2[5];
        v171 = *(float *)a4;
        v162 = a2 + 2;
        v42 = a2[v40 + 2];
        v172 = *(float *)(a4 + 4);
        v173 = *(float *)(a4 + 8);
        v174 = *(uint32_t *)(a4 + 12);
        v175 = *(float *)(a4 + 16);
        v176 = *(float *)(a4 + 20);
        v177 = *(float *)(a4 + 24);
        v178 = *(uint32_t *)(a4 + 28);
        v43 = *(float *)(a1 + 16);
        *(&v171 + v40) = (float)(v42 + ((uint8_t)v7 << v41)) * v43;
        *(float *)(a4 + 4 * v40 + 16) = (float)(v42 + (((uint8_t)v7 + 1) << v41)) * v43;
        LODWORD(v164) = LOBYTE(v164);
        v23 = 0;
        v24 = a3 + 3;
        goto LABEL_31;
      case 35:
      case 36:
      case 37:
        v44 = v5 - 35;
        v171 = *(float *)a4;
        v45 = (uint8_t)v7 << a2[5];
        v172 = *(float *)(a4 + 4);
        v173 = *(float *)(a4 + 8);
        v174 = *(uint32_t *)(a4 + 12);
        v175 = *(float *)(a4 + 16);
        v176 = *(float *)(a4 + 20);
        v177 = *(float *)(a4 + 24);
        v178 = *(uint32_t *)(a4 + 28);
        v162 = a2 + 2;
        v46 = &a2[v44 + 2];
        *(float *)(a4 + 4 * v44 + 16) = (float)(*v46 + v45) * *(float *)(a1 + 16);
        *(&v171 + v44) = (float)(*v46 + (LOBYTE(v164) << a2[5])) * *(float *)(a1 + 16);
        v24 = a3 + 7;
        v23 = (LOBYTE(v163) << 8) + (uint8_t)a3[4];
        LODWORD(v164) = (uint8_t)a3[6] + ((uint8_t)a3[5] << 8);
LABEL_31:
        v25 = &v24[v23];
        v26 = (uint8_t)v24[v23];
        for ( i = v26 - 38; (unsigned int)(v26 - 38) <= 5; i = v26 - 38 )
        {
          if ( v26 <= 40 )
          {
            v55 = i;
            v56 = &v162[v55];
            LODWORD(v163) = a4 + v55 * 4;
            *(float *)(a4 + v55 * 4) = (float)(v162[v55] + ((uint8_t)v24[v23 + 1] << a2[5]))
                                     * *(float *)(a1 + 16);
            v57 = (uint8_t)v24[v23 + 2];
            v23 += 3;
            *(float *)(LODWORD(v163) + 16) = (float)(*v56 + (v57 << a2[5])) * *(float *)(a1 + 16);
            goto LABEL_31;
          }
          v28 = (uint8_t)v24[v23 + 1] << 16;
          LODWORD(v163) = a4 + 4 * v26 - 164;
          v29 = (float)((uint8_t)v24[v23 + 3] + v28 + ((uint8_t)v24[v23 + 2] << 8))
              * *(float *)(a1 + 16);
          v30 = &v24[v23 + 4];
          v23 += 7;
          *(float *)LODWORD(v163) = v29;
          v25 = &v24[v23];
          *(float *)(LODWORD(v163) + 16) = (float)(v30[2] + (*v30 << 16) + (v30[1] << 8)) * *(float *)(a1 + 16);
          v26 = (uint8_t)v24[v23];
        }
        v139 = v25;
        while ( 1 )
        {
          v31 = (uint8_t)v24[LODWORD(v164)] - 38;
          if ( v31 > 5 )
            break;
          if ( (uint8_t)v24[LODWORD(v164)] <= 0x28u )
          {
            v58 = a2[5];
            v59 = v162[v31];
            v60 = *(float *)(a1 + 16);
            v61 = (float)(v59 + ((uint8_t)v24[LODWORD(v164) + 1] << v58)) * v60;
            v62 = v164;
            LODWORD(v164) += 3;
            v63 = (uint8_t)v24[LODWORD(v62) + 2] << v58;
            *(&v171 + v31) = v61;
            *(&v175 + v31) = (float)(v59 + v63) * v60;
          }
          else
          {
            v32 = *(float *)(a1 + 16);
            v33 = (uint8_t)v24[LODWORD(v164)] - 41;
            v34 = v164;
            v35 = (uint8_t)v24[LODWORD(v164) + 3]
                + ((uint8_t)v24[LODWORD(v164) + 1] << 16)
                + ((uint8_t)v24[LODWORD(v164) + 2] << 8);
            LODWORD(v164) += 7;
            v36 = (float)v35 * v32;
            v37 = &v24[LODWORD(v34) + 4];
            v38 = *v37 << 16;
            v39 = v37[1] << 8;
            *(&v171 + v33) = v36;
            *(&v175 + v33) = (float)(v37[2] + v38 + v39) * v32;
          }
        }
        v160 = (float *)(a1 + 64);
        a3 = &v24[LODWORD(v164)];
        LODWORD(v159) = a1 + 576;
        *(float *)&v162 = v171 + v175;
        v146 = v175 - v171;
        v164 = *(float *)(a1 + 48);
        v140 = LODWORD(v164) - 1;
        v147 = v172 + v176;
        v145 = v176 - v172;
        v163 = v173 + v177;
        v144 = v177 - v173;
        if ( LODWORD(v164) - 1 < 0 )
          goto LABEL_91;
        LODWORD(v150) = LODWORD(v164) - 1;
        v141 = 15;
        LODWORD(v157) = a1 + 592;
        v164 = *(float *)&v160;
        v156 = (float *)(a1 + 608);
        v154 = v159;
        v155 = (float *)(a1 + 624);
        v153 = 0.0;
        LODWORD(v158) = a1 + 80;
        LODWORD(v142) = a1 + 112;
        v143 = a1 + 96;
        do
        {
          v65 = (float)((float)((float)(*(float *)LODWORD(v154) * v146)
                              + (float)(*(float *)(LODWORD(v154) - LODWORD(v159) + LODWORD(v157)) * v145))
                      + (float)(*(float *)((char *)v156 + LODWORD(v154) - LODWORD(v159)) * v144))
              + *(float *)((char *)v155 + LODWORD(v154) - LODWORD(v159));
          v66 = (float)((float)((float)(*(float *)(LODWORD(v154) + 4) * v146)
                              + (float)(*(float *)(LODWORD(v154) - LODWORD(v159) + LODWORD(v157) + 4) * v145))
                      + (float)(*(float *)((char *)v156 + LODWORD(v154) - LODWORD(v159) + 4) * v144))
              + *(float *)((char *)v155 + LODWORD(v154) - LODWORD(v159) + 4);
          v67 = (float)(v146 * *(float *)(LODWORD(v154) + 12))
              + (float)(*(float *)(LODWORD(v154) - LODWORD(v159) + LODWORD(v157) + 12) * v145);
          v68 = *(float *)((char *)v156 + LODWORD(v154) - LODWORD(v159) + 12) * v144;
          v161 = (float)((float)((float)(*(float *)(LODWORD(v154) - LODWORD(v159) + LODWORD(v157) + 8) * v145)
                               + (float)(*(float *)(LODWORD(v154) + 8) * v146))
                       + (float)(*(float *)((char *)v156 + LODWORD(v154) - LODWORD(v159) + 8) * v144))
               + *(float *)((char *)v155 + LODWORD(v154) - LODWORD(v159) + 8);
          v69 = (float)(v67 + v68) + *(float *)((char *)v155 + LODWORD(v154) - LODWORD(v159) + 12);
          v70 = (float)((float)((float)(*(float *)&v162 * *(float *)LODWORD(v164))
                              + (float)(*(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v160) + LODWORD(v158)) * v147))
                      + (float)(v163 * *(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v160) + v143)))
              + *(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v160) + LODWORD(v142));
          v71 = (float)((float)((float)(*(float *)&v162 * *(float *)(LODWORD(v164) + 4))
                              + (float)(*(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v160) + LODWORD(v158) + 4) * v147))
                      + (float)(v163 * *(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v160) + v143 + 4)))
              + *(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v160) + LODWORD(v142) + 4);
          v72 = (float)((float)((float)(*(float *)&v162 * *(float *)(LODWORD(v164) + 8))
                              + (float)(*(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v160) + LODWORD(v158) + 8) * v147))
                      + (float)(v163 * *(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v160) + v143 + 8)))
              + *(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v160) + LODWORD(v142) + 8);
          v73 = (float)((float)((float)(*(float *)&v162 * *(float *)(LODWORD(v164) + 12))
                              + (float)(v147 * *(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v160) + LODWORD(v158) + 12)))
                      + (float)(v163 * *(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v160) + v143 + 12)))
              + *(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v160) + LODWORD(v142) + 12);
          v152 = v72 - v161;
          v74 = v73 - v69;
          v75 = v69 + v73;
          v151 = v74;
          v149 = v65 + v70;
          v76 = v66 + v71;
          v77 = v71 - v66;
          v148 = v76;
          v78 = v161 + v72;
          v79 = 4 * (v153 > (float)(v72 - v161));
          if ( v153 > v151 )
            v79 = 4 * (v153 > v152) + 8;
          if ( (v79 | (v153 > (float)(v70 - v65)) | (2 * (v153 > v77))) != 0xF )
          {
            v80 = *(float *)&v140;
            *(float *)&v140 = 0.0;
            v154 = v80;
            goto LABEL_63;
          }
          v64 = 4 * (v153 > v78);
          if ( v153 > v75 )
            v64 = 4 * (v153 > v78) + 8;
          LODWORD(v164) += 64;
          LODWORD(v154) += 64;
          v141 &= v64 | (v153 > v149) | (2 * (v153 > v148));
          --LODWORD(v150);
        }
        while ( v150 != NAN );
        if ( v141 == 15 )
        {
LABEL_91:
          hkpMoppFindAllVirtualMachine::queryOnTreeLeft(a1 + 32, a2, a3);
          hkpMoppFindAllVirtualMachine::queryOnTreeRight(a1 + 32, a2, a3);
          v140 = 1;
          v164 = *(float *)(a1 + 48);
          LODWORD(v154) = LODWORD(v164) - 1;
        }
        else
        {
          v107 = *(float *)&v140;
          v140 = 2;
          v154 = v107;
        }
LABEL_63:
        v81 = *(float *)(a4 + 16);
        *(float *)&v82 = *(float *)a4 + v81;
        v83 = *(float *)(a4 + 20);
        v84 = *(float *)(a4 + 8);
        v85 = v81 - *(float *)a4;
        v86 = *(float *)(a4 + 24);
        v162 = v82;
        v87 = *(float *)(a4 + 4);
        v147 = v85;
        v148 = v87 + v83;
        v146 = v83 - v87;
        v163 = v84 + v86;
        v145 = v86 - v84;
        if ( __builtin_signbit(v154) )
          goto LABEL_90;
        v141 = 15;
        v164 = v159;
        v142 = 0.0;
        v153 = *(float *)&v160;
        LODWORD(v157) = LODWORD(v159) + 16;
        v156 = (float *)(LODWORD(v159) + 32);
        v155 = (float *)(LODWORD(v159) + 48);
        LODWORD(v144) = (uint32_t)(uintptr_t)(v160 + 8);
        LODWORD(v158) = (uint32_t)(uintptr_t)(v160 + 4);
        v143 = (int)(uintptr_t)(v160 + 12);
        do
        {
          v89 = (float)((float)((float)(v147 * *(float *)LODWORD(v164))
                              + (float)(*(float *)(LODWORD(v164) - LODWORD(v159) + LODWORD(v157)) * v146))
                      + (float)(*(float *)((char *)v156 + LODWORD(v164) - LODWORD(v159)) * v145))
              + *(float *)((char *)v155 + LODWORD(v164) - LODWORD(v159));
          v90 = (float)((float)((float)(v147 * *(float *)(LODWORD(v164) + 4))
                              + (float)(*(float *)(LODWORD(v164) - LODWORD(v159) + LODWORD(v157) + 4) * v146))
                      + (float)(*(float *)((char *)v156 + LODWORD(v164) - LODWORD(v159) + 4) * v145))
              + *(float *)((char *)v155 + LODWORD(v164) - LODWORD(v159) + 4);
          v91 = *(float *)LODWORD(v153);
          v92 = (float)(v147 * *(float *)(LODWORD(v164) + 12))
              + (float)(*(float *)(LODWORD(v164) - LODWORD(v159) + LODWORD(v157) + 12) * v146);
          v93 = *(float *)((char *)v156 + LODWORD(v164) - LODWORD(v159) + 12) * v145;
          v161 = (float)((float)((float)(*(float *)(LODWORD(v164) - LODWORD(v159) + LODWORD(v157) + 8) * v146)
                               + (float)(*(float *)(LODWORD(v164) + 8) * v147))
                       + (float)(*(float *)((char *)v156 + LODWORD(v164) - LODWORD(v159) + 8) * v145))
               + *(float *)((char *)v155 + LODWORD(v164) - LODWORD(v159) + 8);
          v94 = (float)(v92 + v93) + *(float *)((char *)v155 + LODWORD(v164) - LODWORD(v159) + 12);
          v95 = (float)((float)((float)(v91 * *(float *)&v162)
                              + (float)(*(float *)(LODWORD(v153) - (uint32_t)(uintptr_t)(v160) + LODWORD(v158)) * v148))
                      + (float)(v163 * *(float *)(LODWORD(v153) - (uint32_t)(uintptr_t)(v160) + LODWORD(v144))))
              + *(float *)(LODWORD(v153) - (uint32_t)(uintptr_t)(v160) + v143);
          v96 = (float)((float)((float)(*(float *)(LODWORD(v153) + 4) * *(float *)&v162)
                              + (float)(*(float *)(LODWORD(v153) - (uint32_t)(uintptr_t)(v160) + LODWORD(v158) + 4) * v148))
                      + (float)(v163 * *(float *)(LODWORD(v153) - (uint32_t)(uintptr_t)(v160) + LODWORD(v144) + 4)))
              + *(float *)(LODWORD(v153) - (uint32_t)(uintptr_t)(v160) + v143 + 4);
          v97 = (float)((float)((float)(*(float *)&v162 * *(float *)(LODWORD(v153) + 8))
                              + (float)(*(float *)(LODWORD(v153) - (uint32_t)(uintptr_t)(v160) + LODWORD(v158) + 8) * v148))
                      + (float)(v163 * *(float *)(LODWORD(v153) - (uint32_t)(uintptr_t)(v160) + LODWORD(v144) + 8)))
              + *(float *)(LODWORD(v153) - (uint32_t)(uintptr_t)(v160) + v143 + 8);
          v98 = (float)((float)((float)(*(float *)&v162 * *(float *)(LODWORD(v153) + 12))
                              + (float)(v148 * *(float *)(LODWORD(v153) - (uint32_t)(uintptr_t)(v160) + LODWORD(v158) + 12)))
                      + (float)(v163 * *(float *)(LODWORD(v153) - (uint32_t)(uintptr_t)(v160) + LODWORD(v144) + 12)))
              + *(float *)(LODWORD(v153) - (uint32_t)(uintptr_t)(v160) + v143 + 12);
          v152 = v97 - v161;
          v99 = v98 - v94;
          v100 = v94 + v98;
          v151 = v99;
          v101 = v89 + v95;
          v102 = v95 - v89;
          v150 = v101;
          v103 = v90 + v96;
          v104 = v96 - v90;
          v149 = v103;
          v105 = v161 + v97;
          LOBYTE(v4) = v142 > (float)(v97 - v161);
          v106 = 4 * (uint8_t)v4;
          if ( v142 > v151 )
            v106 = 4 * (v142 > v152) + 8;
          if ( (v106 | (v142 > v102) | (2 * (v142 > v104))) != 0xF )
            goto LABEL_71;
          v88 = 4 * (v142 > v105);
          if ( v142 > v100 )
            v88 = 4 * (v142 > v105) + 8;
          LODWORD(v153) += 64;
          LODWORD(v164) += 64;
          v141 &= v88 | (v142 > v150) | (2 * (v142 > v149));
          --LODWORD(v154);
        }
        while ( v154 != NAN );
        if ( v141 == 15 )
        {
LABEL_90:
          v136 = v139;
          hkpMoppFindAllVirtualMachine::queryOnTreeLeft(a1 + 32, a2, v139);
          LOBYTE(v4) = (uint8_t)(uintptr_t)(hkpMoppFindAllVirtualMachine::queryOnTreeRight(a1 + 32, a2, v136));
LABEL_71:
          if ( v140 != 2 )
            return v4;
          *(float *)a4 = v171;
          *(float *)(a4 + 4) = v172;
          *(float *)(a4 + 8) = v173;
          *(uint32_t *)(a4 + 12) = v174;
          *(float *)(a4 + 16) = v175;
          *(float *)(a4 + 20) = v176;
          *(float *)(a4 + 24) = v177;
          *(uint32_t *)(a4 + 28) = v178;
          v13 = a3;
          LOBYTE(v4) = *a3;
          v7 = (uint8_t)a3[1];
        }
        else
        {
          if ( v140 == 2 )
            hkpMoppUsingFloatAabbVirtualMachine_hkpMoppPlanesQueryInput_c86db8::queryMoppTree(
              a1,
              a2,
              a3,
              (int)(uintptr_t)(&v171));
          v13 = v139;
          a3 = v139;
          LOBYTE(v4) = *v139;
          v7 = (uint8_t)v139[1];
        }
        goto LABEL_14;
      case 38:
      case 39:
      case 40:
        v47 = 4 * v5 - 152;
        v48 = (uint32_t *)((int *)((char *)a2 + v47 + 8));
        v49 = (float *)(a4 + v47);
        a3 += 3;
        v50 = (float)(*v48 + ((uint8_t)v7 << a2[5])) * *(float *)(a1 + 16);
        v51 = LOBYTE(v164);
        *v49 = v50;
        v49[4] = (float)(*v48 + (v51 << a2[5])) * *(float *)(a1 + 16);
        goto LABEL_42;
      case 41:
      case 42:
      case 43:
        v52 = (float *)(a4 + 4 * v5 - 164);
        v53 = a3;
        v54 = a3;
        a3 += 7;
        *v52 = (float)(LOBYTE(v163) + (LOBYTE(v164) << 8) + ((uint8_t)v7 << 16)) * *(float *)(a1 + 16);
        v52[4] = (float)((uint8_t)v53[6] + ((uint8_t)v54[4] << 16) + ((uint8_t)v54[5] << 8))
               * *(float *)(a1 + 16);
LABEL_42:
        LOBYTE(v142) = *a3;
        if ( (uint8_t)(LOBYTE(v142) - 38) <= 5u )
          goto LABEL_43;
        v156 = (float *)(a1 + 64);
        v155 = (float *)(a1 + 576);
        v108 = *(float *)(a4 + 16);
        v109 = *(float *)a4 + v108;
        v110 = *(float *)(a4 + 20);
        v111 = *(float *)(a4 + 8);
        v112 = v108 - *(float *)a4;
        v113 = *(float *)(a4 + 24);
        v163 = v109;
        v114 = *(float *)(a4 + 4);
        v152 = v112;
        v164 = *(float *)(a1 + 48);
        LODWORD(v159) = LODWORD(v164) - 1;
        v154 = v114 + v110;
        v151 = v110 - v114;
        v153 = v111 + v113;
        v150 = v113 - v111;
        if ( LODWORD(v164) - 1 < 0 )
          goto LABEL_89;
        LODWORD(v148) = a1 + 592;
        v143 = 15;
        LODWORD(v146) = a1 + 608;
        v164 = *(float *)&v156;
        LODWORD(v144) = a1 + 624;
        v160 = v155;
        LODWORD(v149) = a1 + 80;
        LODWORD(v147) = a1 + 96;
        LODWORD(v145) = a1 + 112;
        do
        {
          v116 = v160[2];
          v117 = v152 * v160[3];
          v118 = (float)(*(float *)((char *)v160 - (char *)v155 + LODWORD(v148) + 4) * v151) + (float)(v160[1] * v152);
          *(float *)&v162 = (float)((float)((float)(*(float *)((char *)v160 - (char *)v155 + LODWORD(v148)) * v151)
                                          + (float)(*v160 * v152))
                                  + (float)(*(float *)((char *)v160 - (char *)v155 + LODWORD(v146)) * v150))
                          + *(float *)((char *)v160 - (char *)v155 + LODWORD(v144));
          v119 = (float)((float)(*(float *)((char *)v160 - (char *)v155 + LODWORD(v146) + 4) * v150) + v118)
               + *(float *)((char *)v160 - (char *)v155 + LODWORD(v144) + 4);
          v120 = (float)(v116 * v152) + (float)(*(float *)((char *)v160 - (char *)v155 + LODWORD(v148) + 8) * v151);
          v121 = *(float *)((char *)v160 - (char *)v155 + LODWORD(v146) + 8) * v150;
          v161 = v119;
          v122 = (float)(v120 + v121) + *(float *)((char *)v160 - (char *)v155 + LODWORD(v144) + 8);
          v123 = (float)((float)(v117 + (float)(*(float *)((char *)v160 - (char *)v155 + LODWORD(v148) + 12) * v151))
                       + (float)(*(float *)((char *)v160 - (char *)v155 + LODWORD(v146) + 12) * v150))
               + *(float *)((char *)v160 - (char *)v155 + LODWORD(v144) + 12);
          v124 = (float)((float)((float)(v163 * *(float *)LODWORD(v164))
                               + (float)(*(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v156) + LODWORD(v149)) * v154))
                       + (float)(*(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v156) + LODWORD(v147)) * v153))
               + *(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v156) + LODWORD(v145));
          v125 = (float)((float)((float)(v163 * *(float *)(LODWORD(v164) + 4))
                               + (float)(*(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v156) + LODWORD(v149) + 4) * v154))
                       + (float)(*(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v156) + LODWORD(v147) + 4) * v153))
               + *(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v156) + LODWORD(v145) + 4);
          v126 = (float)((float)((float)((float)(v163 * *(float *)(LODWORD(v164) + 8))
                                       + (float)(*(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v156) + LODWORD(v149) + 8) * v154))
                               + (float)(*(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v156) + LODWORD(v147) + 8) * v153))
                       + *(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v156) + LODWORD(v145) + 8))
               - v122;
          v127 = (float)((float)((float)((float)(v163 * *(float *)(LODWORD(v164) + 8))
                                       + (float)(*(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v156) + LODWORD(v149) + 8) * v154))
                               + (float)(*(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v156) + LODWORD(v147) + 8) * v153))
                       + *(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v156) + LODWORD(v145) + 8))
               + v122;
          v128 = (float)((float)((float)(v163 * *(float *)(LODWORD(v164) + 12))
                               + (float)(v154 * *(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v156) + LODWORD(v149) + 12)))
                       + (float)(*(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v156) + LODWORD(v147) + 12) * v153))
               + *(float *)(LODWORD(v164) - (uint32_t)(uintptr_t)(v156) + LODWORD(v145) + 12);
          v158 = v126;
          v129 = *(float *)&v162 + v124;
          v130 = v124 - *(float *)&v162;
          v131 = v128 - v123;
          v132 = v123 + v128;
          v157 = v131;
          v133 = v161 + v125;
          v134 = v125 - v161;
          v135 = 4 * (v158 < 0.0);
          if ( v157 < 0.0 )
            v135 = 4 * (v158 < 0.0) + 8;
          v4 = v135 | (v130 < 0.0) | (2 * (v134 < 0.0));
          if ( v4 != 15 )
            return v4;
          v115 = 4 * (v127 < 0.0);
          if ( v132 < 0.0 )
            v115 = 4 * (v127 < 0.0) + 8;
          LODWORD(v164) += 64;
          v160 += 16;
          v143 &= v115 | (v129 < 0.0) | (2 * (v133 < 0.0));
          --LODWORD(v159);
        }
        while ( v159 != NAN );
        if ( v143 != 15 )
        {
LABEL_43:
          v13 = a3;
          v7 = (uint8_t)a3[1];
          LOBYTE(v4) = LOBYTE(v142);
LABEL_14:
          v14 = v13[2];
          v5 = (uint8_t)v4;
          v15 = v13[3];
LABEL_15:
          LOBYTE(v164) = v14;
          LOBYTE(v163) = v15;
          continue;
        }
LABEL_89:
        hkpMoppFindAllVirtualMachine::queryOnTreeLeft(a1 + 32, a2, a3);
        LOBYTE(v4) = (uint8_t)(uintptr_t)(hkpMoppFindAllVirtualMachine::queryOnTreeRight(a1 + 32, a2, a3));
        return v4;
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
      case 58:
      case 59:
      case 60:
      case 61:
      case 62:
      case 63:
      case 64:
      case 65:
      case 66:
      case 67:
      case 68:
      case 69:
      case 70:
      case 71:
      case 72:
      case 73:
      case 74:
      case 75:
      case 76:
      case 77:
      case 78:
      case 79:
        v8 = v5 - 48;
        goto LABEL_6;
      case 80:
        v8 = (uint8_t)v7;
        goto LABEL_6;
      case 81:
        v8 = ((uint8_t)v7 << 8) + LOBYTE(v164);
        goto LABEL_6;
      case 82:
        v8 = ((uint8_t)v7 << 16) + (LOBYTE(v164) << 8) + LOBYTE(v163);
        goto LABEL_6;
      case 83:
        v8 = (LOBYTE(v163) << 8) + (v7 << 24) + (LOBYTE(v164) << 16) + (uint8_t)a3[4];
LABEL_6:
        v9 = *a2 + v8;
        v10 = *(hkMemoryAllocator::Self **)a1;
        v4 = *(uint32_t *)(*(uint32_t *)a1 + 4);
        if ( v4 == (*(uint32_t *)(*(uint32_t *)a1 + 8) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v10, 4, v138[3]);
          v4 = *((uint32_t *)v10 + 1);
        }
        v11 = *(uint32_t *)v10;
        *((uint32_t *)v10 + 1) = v4 + 1;
        *(uint32_t *)(v11 + 4 * v4) = v9;
        return v4;
      case 96:
      case 97:
      case 98:
      case 99:
        a3 += 2;
        v138[v5 - 63] = (uint8_t)v7;
        goto LABEL_11;
      case 100:
      case 101:
      case 102:
      case 103:
        a3 += 3;
        v138[v5 - 67] = LOBYTE(v164) + ((uint8_t)v7 << 8);
        goto LABEL_11;
      case 104:
      case 105:
      case 106:
      case 107:
        v12 = a3;
        a3 += 5;
        v138[v5 - 71] = (uint8_t)v12[4] + (LOBYTE(v164) << 16) + (v7 << 24) + (LOBYTE(v163) << 8);
LABEL_11:
        v4 = v166;
        if ( a2 != &v165 )
        {
          v165 = *a2;
          v166 = a2[1];
          v167 = a2[2];
          v168 = a2[3];
          v169 = a2[4];
          v170 = a2[5];
        }
        v166 = v4;
        a2 = &v165;
        v13 = a3;
        v7 = (uint8_t)a3[1];
        LOBYTE(v4) = *a3;
        goto LABEL_14;
      default:
        abort();
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpMoppUsingFloatAabbVirtualMachine_hkSphere_hkMoppSphereQue_5b0381::queryMoppTree  (binary VA: 0x1799d70)
// Original: hkpMoppUsingFloatAabbVirtualMachine<hkSphere,hkMoppSphereQueryObject>::queryMoppTree
// ----------------------------------------------------------------------------
int hkpMoppUsingFloatAabbVirtualMachine_hkSphere_hkMoppSphereQue_5b0381::queryMoppTree(float *a1, int *a2, uint8_t *a3, int a4)
{
  g4_int128_t v4;
  int result;
  int v6;
  int v7;
  int v8;
  uint8_t *v9;
  int v10;
  int v11;
  hkMemoryAllocator::Self *v12;
  int v13;
  int v14;
  uint8_t v15;
  uint8_t v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint8_t v21;
  int v22;
  uint8_t v23;
  int v24;
  float v25; // xmm0_4
  uint8_t *v26;
  int v27;
  uint8_t *v28;
  int v29;
  int i;
  uint8_t *v31;
  float v32; // xmm0_4
  unsigned int v33;
  float v34; // xmm1_4
  int v35;
  int v36;
  int v37;
  float v38; // xmm0_4
  uint8_t *v39;
  int v40;
  int v41;
  uint8_t *v42;
  int v43;
  int v44;
  int v45;
  int v46;
  float v47; // xmm1_4
  float v48; // xmm0_4
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  uint32_t *v56;
  int v57;
  int v58;
  int v59;
  uint32_t *v60;
  int v61;
  int v62;
  int v63;
  float v64; // xmm0_4
  int v65;
  int v66;
  float v67; // xmm3_4
  float v68; // xmm2_4
  float v69; // xmm0_4
  float v70; // xmm5_4
  float v71; // xmm6_4
  float v72; // xmm1_4
  float v73; // xmm4_4
  float v74; // xmm4_4
  float v75; // xmm5_4
  float v76; // xmm3_4
  float v77; // xmm0_4
  float v78; // xmm2_4
  float v79; // xmm1_4
  float v80; // xmm2_4
  float v81; // xmm3_4
  float v82; // xmm1_4
  float v83; // xmm5_4
  float v84; // xmm0_4
  float v85; // xmm4_4
  float v86; // xmm2_4
  float v87; // xmm4_4
  float v88; // xmm3_4
  float v89; // xmm0_4
  float v90; // xmm1_4
  float v91; // xmm3_4
  float v92; // xmm6_4
  float v93; // xmm1_4
  float v94; // xmm6_4
  float v95; // xmm3_4
  float v96; // xmm0_4
  float v97; // xmm2_4
  float v98; // xmm5_4
  float v99; // xmm1_4
  float v100; // xmm4_4
  typedef int _g4_t_v101[6];
  typedef uint8_t *_g4_t_v102;
  typedef float _g4_t_v103;
  typedef float _g4_t_v104;
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef g4_int128_t _g4_t_v108;
  typedef g4_int128_t _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef float _g4_t_v116;
  typedef float _g4_t_v117;
  typedef float _g4_t_v118;
  typedef int _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef float _g4_t_v122;
  typedef int _g4_t_v123;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v101)) > _g4_s0 ? (0u + sizeof(_g4_t_v101)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v102)) > _g4_s1 ? (24u + sizeof(_g4_t_v102)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v103)) > _g4_s2 ? (28u + sizeof(_g4_t_v103)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v104)) > _g4_s3 ? (32u + sizeof(_g4_t_v104)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v105)) > _g4_s4 ? (36u + sizeof(_g4_t_v105)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v106)) > _g4_s5 ? (40u + sizeof(_g4_t_v106)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v107)) > _g4_s6 ? (44u + sizeof(_g4_t_v107)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v108)) > _g4_s7 ? (48u + sizeof(_g4_t_v108)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v109)) > _g4_s8 ? (64u + sizeof(_g4_t_v109)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v110)) > _g4_s9 ? (80u + sizeof(_g4_t_v110)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v111)) > _g4_s10 ? (84u + sizeof(_g4_t_v111)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v112)) > _g4_s11 ? (88u + sizeof(_g4_t_v112)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v113)) > _g4_s12 ? (92u + sizeof(_g4_t_v113)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v114)) > _g4_s13 ? (96u + sizeof(_g4_t_v114)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v115)) > _g4_s14 ? (100u + sizeof(_g4_t_v115)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v116)) > _g4_s15 ? (112u + sizeof(_g4_t_v116)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v117)) > _g4_s16 ? (116u + sizeof(_g4_t_v117)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v118)) > _g4_s17 ? (120u + sizeof(_g4_t_v118)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v119)) > _g4_s18 ? (124u + sizeof(_g4_t_v119)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v120)) > _g4_s19 ? (128u + sizeof(_g4_t_v120)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v121)) > _g4_s20 ? (132u + sizeof(_g4_t_v121)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v122)) > _g4_s21 ? (136u + sizeof(_g4_t_v122)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v123)) > _g4_s22 ? (140u + sizeof(_g4_t_v123)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 0u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 24u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 28u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 32u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 36u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 40u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 44u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 48u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 64u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 80u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 84u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 88u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 92u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 96u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 100u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 112u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 116u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 120u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 124u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 128u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 132u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 136u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 140u);

  v4 = 0x7FFFFFFFu;
  result = *a3;
  v6 = a3[2];
  LOBYTE(v108) = a3[3];
  v7 = a3[1];
  LODWORD(v109) = (uint8_t)result;
  v8 = v6;
  v9 = a3;
  while ( 2 )
  {
    if ( (uint8_t)result > 0x6Bu )
    {
LABEL_51:
      __builtin_debugtrap();
      v16 = (uint8_t)(uintptr_t)(v108);
      LOBYTE(v107) = v7;
      goto LABEL_15;
    }
    switch ( (int)v109 )
    {
      case 0:
        return result;
      case 1:
      case 2:
      case 3:
      case 4:
        v9 += 4;
        v17 = a2[5];
        v112 = a2[2] + ((uint8_t)v7 << v17);
        v18 = v17;
        v113 = a2[3] + ((uint8_t)v8 << v17);
        LOBYTE(v107) = v9[1];
        v19 = a2[4] + ((uint8_t)v108 << v17);
        v115 = v18 - v109;
        v114 = v19;
        v111 = a2[1];
        v110 = *a2;
        result = *v9;
        a2 = &v110;
        goto LABEL_14;
      case 5:
        v9 += v7 + 2;
        result = *v9;
        LOBYTE(v107) = v9[1];
        goto LABEL_14;
      case 6:
        v9 += 256 * v7 + (uint8_t)v8 + 3;
        result = *v9;
        LOBYTE(v107) = v9[1];
        goto LABEL_14;
      case 7:
        v9 += 0x10000 * v7 + 256 * (uint8_t)v8 + (uint8_t)v108 + 4;
        result = *v9;
        LOBYTE(v107) = v9[1];
        goto LABEL_14;
      case 8:
        v9 += 0x1000000 * v7 + 0x10000 * (uint8_t)v8 + 256 * (uint8_t)v108 + v9[4] + 5;
        result = *v9;
        LOBYTE(v107) = v9[1];
        goto LABEL_14;
      case 9:
        if ( a2 != &v110 )
        {
          v110 = *a2;
          v111 = a2[1];
          v112 = a2[2];
          v113 = a2[3];
          v114 = a2[4];
          v115 = a2[5];
        }
        v110 += v7;
        LOBYTE(v107) = (uint8_t)(uintptr_t)(v108);
        v9 += 2;
        result = v8;
        a2 = &v110;
        goto LABEL_14;
      case 10:
        v20 = (uint8_t)v8 + (v7 << 8);
        if ( a2 != &v110 )
        {
          v110 = *a2;
          v111 = a2[1];
          v112 = a2[2];
          v113 = a2[3];
          v114 = a2[4];
          v115 = a2[5];
        }
        v21 = v9[4];
        v110 += v20;
        LOBYTE(v107) = v21;
        v9 += 3;
        result = (uint8_t)v108;
        a2 = &v110;
        goto LABEL_14;
      case 11:
        v22 = (v7 << 24) + ((uint8_t)v8 << 16) + ((uint8_t)v108 << 8) + v9[4];
        if ( a2 != &v110 )
        {
          v110 = *a2;
          v111 = a2[1];
          v112 = a2[2];
          v113 = a2[3];
          v114 = a2[4];
          v115 = a2[5];
        }
        v23 = v9[6];
        v110 = v22;
        LOBYTE(v107) = v23;
        v9 += 5;
        result = *v9;
        a2 = &v110;
        goto LABEL_14;
      case 12:
      case 13:
      case 14:
      case 15:
      case 29:
      case 30:
      case 31:
      case 44:
      case 45:
      case 46:
      case 47:
      case 84:
      case 85:
      case 86:
      case 87:
      case 88:
      case 89:
      case 90:
      case 91:
      case 92:
      case 93:
      case 94:
      case 95:
        goto LABEL_51;
      case 16:
      case 17:
      case 18:
        v24 = v109 - 16;
        v116 = *(float *)a4;
        v117 = *(float *)(a4 + 4);
        v118 = *(float *)(a4 + 8);
        v119 = *(uint32_t *)(a4 + 12);
        v120 = *(float *)(a4 + 16);
        v121 = *(float *)(a4 + 20);
        v122 = *(float *)(a4 + 24);
        v123 = *(uint32_t *)(a4 + 28);
        LODWORD(v107) = (uint32_t)(uintptr_t)(a2 + 2);
        LODWORD(v109) = (uint32_t)(uintptr_t)(&a2[v109 - 14]);
        *(float *)(a4 + 4 * v24 + 16) = (float)(*(uint32_t *)(uintptr_t)v109 + ((uint8_t)v7 << a2[5])) * a1[4];
        v25 = (float)(*(uint32_t *)(uintptr_t)v109 + ((uint8_t)v8 << a2[5])) * a1[4];
        v26 = v9 + 4;
        LODWORD(v109) = (uint8_t)v108;
        v27 = 0;
        *(&v116 + v24) = v25;
        goto LABEL_31;
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
        v42 = v9 + 4;
        v109 = v4;
        v116 = *(float *)a4;
        v117 = *(float *)(a4 + 4);
        v118 = *(float *)(a4 + 8);
        v119 = *(uint32_t *)(a4 + 12);
        v120 = *(float *)(a4 + 16);
        v121 = *(float *)(a4 + 20);
        v122 = *(float *)(a4 + 24);
        v123 = *(uint32_t *)(a4 + 28);
        hkpMoppUsingFloatAabbVirtualMachine_hkSphere_hkMoppSphereQue_5b0381::queryMoppTree(a1, a2, v42, (int)(uintptr_t)(&v116));
        v4 = v109;
        v9 = &v42[(uint8_t)v108];
        result = *v9;
        LOBYTE(v107) = v9[1];
        goto LABEL_14;
      case 32:
      case 33:
      case 34:
        LODWORD(v109) = v109 - 32;
        v116 = *(float *)a4;
        v117 = *(float *)(a4 + 4);
        v118 = *(float *)(a4 + 8);
        v119 = *(uint32_t *)(a4 + 12);
        v120 = *(float *)(a4 + 16);
        v121 = *(float *)(a4 + 20);
        v122 = *(float *)(a4 + 24);
        v123 = *(uint32_t *)(a4 + 28);
        v43 = (uint8_t)v7;
        LODWORD(v108) = (uint8_t)v7 + 1;
        v44 = a2[5];
        LODWORD(v108) = (uint32_t)v108 << v44;
        v45 = v43 << v44;
        LODWORD(v107) = (uint32_t)(uintptr_t)(a2 + 2);
        v46 = a2[(uint32_t)v109 + 2];
        v47 = a1[4];
        v48 = (float)(v46 + v45) * v47;
        v49 = (int)(uintptr_t)(v109);
        v50 = v46 + v108;
        *(&v116 + (int)v109) = v48;
        *(float *)(a4 + 4 * v49 + 16) = (float)v50 * v47;
        v51 = (uint8_t)v8;
        v26 = v9 + 3;
        LODWORD(v109) = v51;
        v27 = 0;
        goto LABEL_31;
      case 35:
      case 36:
      case 37:
        v52 = v109 - 35;
        v116 = *(float *)a4;
        v117 = *(float *)(a4 + 4);
        v118 = *(float *)(a4 + 8);
        v119 = *(uint32_t *)(a4 + 12);
        v120 = *(float *)(a4 + 16);
        v121 = *(float *)(a4 + 20);
        v122 = *(float *)(a4 + 24);
        v123 = *(uint32_t *)(a4 + 28);
        LODWORD(v107) = (uint32_t)(uintptr_t)(a2 + 2);
        LODWORD(v109) = (uint32_t)(uintptr_t)(&a2[v109 - 33]);
        *(float *)(a4 + 4 * v52 + 16) = (float)(*(uint32_t *)(uintptr_t)v109 + ((uint8_t)v7 << a2[5])) * a1[4];
        v53 = v9[4];
        v54 = v9[6];
        *(&v116 + v52) = (float)(*(uint32_t *)(uintptr_t)v109 + ((uint8_t)v8 << a2[5])) * a1[4];
        v27 = ((uint8_t)v108 << 8) + v53;
        LODWORD(v109) = v54 + (v9[5] << 8);
        v26 = v9 + 7;
LABEL_31:
        v28 = &v26[v27];
        v29 = v26[v27];
        for ( i = v29 - 38; (unsigned int)(v29 - 38) <= 5; i = v29 - 38 )
        {
          if ( v29 <= 40 )
          {
            v59 = 4 * i;
            v60 = (uint32_t *)(v59 + LODWORD(v107));
            LODWORD(v108) = a4 + v59;
            *(float *)(a4 + v59) = (float)(*(uint32_t *)(v59 + LODWORD(v107)) + (v26[v27 + 1] << a2[5])) * a1[4];
            v61 = v26[v27 + 2];
            v27 += 3;
            *(float *)(v108 + 16) = (float)(*v60 + (v61 << a2[5])) * a1[4];
            goto LABEL_31;
          }
          LODWORD(v108) = a4 + 4 * v29 - 164;
          v31 = &v26[v27 + 4];
          v32 = (float)(v26[v27 + 3] + (v26[v27 + 1] << 16) + (v26[v27 + 2] << 8));
          v27 += 7;
          *(float *)(uintptr_t)v108 = v32 * a1[4];
          *(float *)(v108 + 16) = (float)(v31[2] + (*v31 << 16) + (v31[1] << 8)) * a1[4];
          v28 = &v26[v27];
          v29 = v26[v27];
        }
        v102 = v28;
        while ( 1 )
        {
          v9 = &v26[(int)v109];
          v33 = v26[(int)v109] - 38;
          if ( v33 > 5 )
            break;
          v34 = a1[4];
          if ( v26[(int)v109] <= 0x28u )
          {
            v62 = a2[5];
            v63 = *(uint32_t *)(LODWORD(v107) + 4 * v33);
            v64 = (float)(v63 + (v26[(uint32_t)v109 + 1] << v62)) * v34;
            v65 = (int)(uintptr_t)(v109);
            LODWORD(v109) = v109 + 3;
            v66 = v26[v65 + 2] << v62;
            *(&v116 + v33) = v64;
            *(&v120 + v33) = (float)(v63 + v66) * v34;
          }
          else
          {
            v35 = v26[(int)v109] - 41;
            v36 = (int)(uintptr_t)(v109);
            v37 = v26[(uint32_t)v109 + 3] + (v26[(uint32_t)v109 + 1] << 16) + (v26[(uint32_t)v109 + 2] << 8);
            LODWORD(v109) = v109 + 7;
            v38 = (float)v37 * v34;
            v39 = &v26[v36 + 4];
            v40 = *v39 << 16;
            v41 = v39[1] << 8;
            *(&v116 + v35) = v38;
            *(&v120 + v35) = (float)(v39[2] + v40 + v41) * v34;
          }
        }
        v106 = v120 - v116;
        v105 = v121 - v117;
        v104 = v122 - v118;
        *(float *)&v109 = a1[12];
        *(float *)&v108 = a1[13];
        v107 = a1[14];
        LODWORD(v67) = COERCE_UNSIGNED_INT((float)(v120 + v116) - *(float *)&v109) & v4;
        LODWORD(v68) = COERCE_UNSIGNED_INT((float)(v121 + v117) - *(float *)&v108) & v4;
        v69 = fminf(v67, v120 - v116);
        v70 = fminf(v68, v121 - v117);
        v71 = a1[15] * a1[15];
        LODWORD(v72) = COERCE_UNSIGNED_INT((float)(v118 + v122) - v107) & v4;
        v73 = fminf(v72, v122 - v118);
        if ( (float)((float)((float)((float)(v69 - v67) * (float)(v69 - v67))
                           + (float)((float)(v70 - v68) * (float)(v70 - v68)))
                   + (float)((float)(v73 - v72) * (float)(v73 - v72))) > v71 )
        {
          v74 = v107;
          result = 0;
          v75 = *(float *)&v108;
          v76 = *(float *)&v109;
        }
        else if ( v71 > (float)((float)((float)((float)(v67 + v106) * (float)(v67 + v106))
                                      + (float)((float)(v68 + v105) * (float)(v68 + v105)))
                              + (float)((float)(v72 + v104) * (float)(v72 + v104))) )
        {
          v109 = v4;
          hkpMoppFindAllVirtualMachine::queryOnTree(a1 + 8, a2, v9);
          v4 = v109;
          v76 = a1[12];
          v75 = a1[13];
          v74 = a1[14];
          result = 1;
          v71 = a1[15] * a1[15];
        }
        else
        {
          v74 = v107;
          result = 2;
          v75 = *(float *)&v108;
          v76 = *(float *)&v109;
        }
        v77 = *(float *)(a4 + 8);
        LODWORD(v109) = *(uint32_t *)a4;
        v107 = v77;
        v78 = *(float *)(a4 + 16);
        v106 = *(float *)(a4 + 24);
        LODWORD(v108) = *(uint32_t *)(a4 + 4);
        v79 = *(float *)(a4 + 20);
        v105 = v78 - *(float *)&v109;
        v104 = v79 - *(float *)&v108;
        LODWORD(v80) = COERCE_UNSIGNED_INT((float)(v78 + *(float *)&v109) - v76) & v4;
        v81 = fminf(v80, v105);
        LODWORD(v82) = COERCE_UNSIGNED_INT((float)(v79 + *(float *)&v108) - v75) & v4;
        v103 = v106 - v77;
        v83 = fminf(v82, v104);
        LODWORD(v84) = COERCE_UNSIGNED_INT((float)(v106 + v77) - v74) & v4;
        v85 = fminf(v84, v106 - v107);
        if ( (float)((float)((float)((float)(v81 - v80) * (float)(v81 - v80))
                           + (float)((float)(v83 - v82) * (float)(v83 - v82)))
                   + (float)((float)(v85 - v84) * (float)(v85 - v84))) > v71 )
          goto LABEL_67;
        if ( v71 > (float)((float)((float)((float)(v80 + v105) * (float)(v80 + v105))
                                 + (float)((float)(v82 + v104) * (float)(v82 + v104)))
                         + (float)((float)(v84 + v103) * (float)(v84 + v103))) )
        {
          v108 = v4;
          LODWORD(v109) = result;
          hkpMoppFindAllVirtualMachine::queryOnTree(a1 + 8, a2, v102);
          v4 = v108;
          result = (int)(uintptr_t)(v109);
LABEL_67:
          if ( result != 2 )
            return result;
          *(float *)a4 = v116;
          *(float *)(a4 + 4) = v117;
          *(float *)(a4 + 8) = v118;
          *(uint32_t *)(a4 + 12) = v119;
          *(float *)(a4 + 16) = v120;
          *(float *)(a4 + 20) = v121;
          *(float *)(a4 + 24) = v122;
          *(uint32_t *)(a4 + 28) = v123;
          result = *v9;
          LOBYTE(v107) = v9[1];
        }
        else
        {
          if ( result == 2 )
          {
            v109 = v4;
            hkpMoppUsingFloatAabbVirtualMachine_hkSphere_hkMoppSphereQue_5b0381::queryMoppTree(a1, a2, v9, (int)(uintptr_t)(&v116));
            v4 = v109;
          }
          v9 = v102;
          result = *v102;
          LOBYTE(v107) = v102[1];
        }
        goto LABEL_14;
      case 38:
      case 39:
      case 40:
        v9 += 3;
        v55 = 4 * v109 - 152;
        LODWORD(v109) = a4 + v55;
        v56 = (uint32_t *)((int *)((char *)a2 + v55 + 8));
        *(float *)(a4 + v55) = (float)(*v56 + ((uint8_t)v7 << a2[5])) * a1[4];
        *(float *)(v109 + 16) = (float)(*v56 + ((uint8_t)v8 << a2[5])) * a1[4];
        goto LABEL_42;
      case 41:
      case 42:
      case 43:
        v9 += 7;
        LODWORD(v109) = a4 + 4 * v109 - 164;
        v57 = ((uint8_t)v8 << 8) + (v7 << 16);
        v58 = (int)(uintptr_t)(v109);
        *(float *)(uintptr_t)v109 = (float)((uint8_t)v108 + v57) * a1[4];
        *(float *)(v58 + 16) = (float)(*(v9 - 1) + (*(v9 - 3) << 16) + (*(v9 - 2) << 8)) * a1[4];
LABEL_42:
        result = *v9;
        if ( (uint8_t)(*v9 - 38) <= 5u )
          goto LABEL_43;
        v86 = *(float *)(a4 + 20);
        v87 = *(float *)(a4 + 4);
        v88 = *(float *)(a4 + 16) + *(float *)a4;
        v89 = *(float *)(a4 + 24);
        v90 = *(float *)(a4 + 8);
        *(float *)&v109 = *(float *)(a4 + 16) - *(float *)a4;
        v91 = v88 - a1[12];
        *(float *)&v108 = v86 - v87;
        v92 = v89 - v90;
        v93 = v90 + v89;
        v107 = v92;
        v94 = a1[15] * a1[15];
        v95 = fabs(v91);
        v96 = fminf(v95, *(float *)&v109);
        v97 = fabs((float)(v86 + v87) - a1[13]);
        v98 = fminf(v97, *(float *)&v108);
        v99 = fabs(v93 - a1[14]);
        v100 = fminf(v99, v107);
        if ( (float)((float)((float)((float)(v96 - v95) * (float)(v96 - v95))
                           + (float)((float)(v98 - v97) * (float)(v98 - v97)))
                   + (float)((float)(v100 - v99) * (float)(v100 - v99))) > v94 )
          return result;
        if ( v94 <= (float)((float)((float)((float)(v95 + *(float *)&v109) * (float)(v95 + *(float *)&v109))
                                  + (float)((float)(v97 + *(float *)&v108) * (float)(v97 + *(float *)&v108)))
                          + (float)((float)(v99 + v107) * (float)(v99 + v107))) )
        {
LABEL_43:
          LOBYTE(v107) = v9[1];
LABEL_14:
          v8 = v9[2];
          LODWORD(v109) = (uint8_t)result;
          v16 = v9[3];
          v7 = LOBYTE(v107);
LABEL_15:
          LOBYTE(v108) = v16;
          continue;
        }
        return (int)(uintptr_t)(hkpMoppFindAllVirtualMachine::queryOnTree(a1 + 8, a2, v9));
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
      case 58:
      case 59:
      case 60:
      case 61:
      case 62:
      case 63:
      case 64:
      case 65:
      case 66:
      case 67:
      case 68:
      case 69:
      case 70:
      case 71:
      case 72:
      case 73:
      case 74:
      case 75:
      case 76:
      case 77:
      case 78:
      case 79:
        v10 = v109 - 48;
        goto LABEL_6;
      case 80:
        v10 = (uint8_t)v7;
        goto LABEL_6;
      case 81:
        v10 = ((uint8_t)v7 << 8) + (uint8_t)v8;
        goto LABEL_6;
      case 82:
        v10 = (v7 << 16) + ((uint8_t)v8 << 8) + (uint8_t)v108;
        goto LABEL_6;
      case 83:
        v10 = ((uint8_t)v108 << 8) + (v7 << 24) + ((uint8_t)v8 << 16) + v9[4];
LABEL_6:
        v11 = *a2 + v10;
        v12 = *(hkMemoryAllocator::Self **)a1;
        result = *(uint32_t *)(*(uint32_t *)a1 + 4);
        if ( result == (*(uint32_t *)(*(uint32_t *)a1 + 8) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v12, 4, v101[3]);
          result = *((uint32_t *)v12 + 1);
        }
        v13 = *(uint32_t *)v12;
        *((uint32_t *)v12 + 1) = result + 1;
        *(uint32_t *)(v13 + 4 * result) = v11;
        return result;
      case 96:
      case 97:
      case 98:
      case 99:
        v9 += 2;
        v101[(uint32_t)v109 - 75] = v7;
        goto LABEL_11;
      case 100:
      case 101:
      case 102:
      case 103:
        v9 += 3;
        v101[(uint32_t)v109 - 79] = (uint8_t)v8 + (v7 << 8);
        goto LABEL_11;
      case 104:
      case 105:
      case 106:
      case 107:
        v9 += 5;
        v101[(uint32_t)v109 - 83] = *(v9 - 1) + (v7 << 24) + ((uint8_t)v8 << 16) + ((uint8_t)v108 << 8);
LABEL_11:
        v14 = v111;
        if ( a2 != &v110 )
        {
          v110 = *a2;
          v111 = a2[1];
          v112 = a2[2];
          v113 = a2[3];
          v114 = a2[4];
          v115 = a2[5];
        }
        v15 = v9[1];
        v111 = v14;
        LOBYTE(v107) = v15;
        a2 = &v110;
        result = *v9;
        goto LABEL_14;
      default:
        abort();
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpMoppUsingFloatAabbVirtualMachine_hkSphere_hkMoppSphereQue_28e2a9::queryMoppTree  (binary VA: 0x179adc0)
// Original: hkpMoppUsingFloatAabbVirtualMachine<hkSphere,hkMoppSphereQueryObjectOptimized>::queryMoppTree
// ----------------------------------------------------------------------------
int hkpMoppUsingFloatAabbVirtualMachine_hkSphere_hkMoppSphereQue_28e2a9::queryMoppTree(float *a1, int *a2, uint8_t *a3, int a4)
{
  g4_int128_t v4;
  int result;
  int v6;
  int v7;
  float v8;
  int v9;
  int v10;
  int v11;
  int v12;
  hkMemoryAllocator::Self *v13;
  int v14;
  int *v15;
  int v16;
  char v17;
  char v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int *v24;
  char v25;
  int v26;
  float v27; // xmm0_4
  int v28;
  int v29;
  uint8_t *v30;
  int v31;
  int i;
  uint8_t *v33;
  float v34; // xmm0_4
  unsigned int v35;
  float v36; // xmm1_4
  int v37;
  int v38;
  int v39;
  float v40; // xmm0_4
  uint8_t *v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  float v48; // xmm1_4
  float v49; // xmm0_4
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  float v55; // xmm0_4
  int v56;
  int v57;
  char *v58;
  float *v59;
  float *v60;
  int v61;
  uint32_t *v62;
  int v63;
  int v64;
  int v65;
  float v66; // xmm0_4
  int v67;
  int v68;
  float v69; // xmm3_4
  float v70; // xmm2_4
  float v71; // xmm0_4
  float v72; // xmm5_4
  float v73; // xmm6_4
  float v74; // xmm1_4
  float v75; // xmm4_4
  float v76; // xmm4_4
  int v77;
  float v78; // xmm5_4
  float v79; // xmm3_4
  float v80; // xmm0_4
  float v81; // xmm2_4
  float v82; // xmm1_4
  float v83; // xmm2_4
  float v84; // xmm3_4
  float v85; // xmm1_4
  float v86; // xmm5_4
  float v87; // xmm0_4
  float v88; // xmm4_4
  float v89; // xmm2_4
  float v90; // xmm4_4
  float v91; // xmm3_4
  float v92; // xmm0_4
  float v93; // xmm1_4
  float v94; // xmm3_4
  float v95; // xmm6_4
  float v96; // xmm1_4
  float v97; // xmm6_4
  float v98; // xmm3_4
  float v99; // xmm0_4
  float v100; // xmm2_4
  float v101; // xmm5_4
  float v102; // xmm1_4
  float v103; // xmm4_4
  float v104;
  uint8_t *v105;
  typedef int _g4_t_v106[6];
  typedef uint8_t *_g4_t_v107;
  typedef float _g4_t_v108;
  typedef float _g4_t_v109;
  typedef float _g4_t_v110;
  typedef float _g4_t_v111;
  typedef float _g4_t_v112;
  typedef g4_int128_t _g4_t_v113;
  typedef g4_int128_t _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef float _g4_t_v121;
  typedef float _g4_t_v122;
  typedef float _g4_t_v123;
  typedef int _g4_t_v124;
  typedef float _g4_t_v125;
  typedef float _g4_t_v126;
  typedef float _g4_t_v127;
  typedef int _g4_t_v128;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v106)) > _g4_s0 ? (0u + sizeof(_g4_t_v106)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v107)) > _g4_s1 ? (24u + sizeof(_g4_t_v107)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v108)) > _g4_s2 ? (28u + sizeof(_g4_t_v108)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v109)) > _g4_s3 ? (32u + sizeof(_g4_t_v109)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v110)) > _g4_s4 ? (36u + sizeof(_g4_t_v110)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v111)) > _g4_s5 ? (40u + sizeof(_g4_t_v111)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v112)) > _g4_s6 ? (44u + sizeof(_g4_t_v112)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v113)) > _g4_s7 ? (48u + sizeof(_g4_t_v113)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v114)) > _g4_s8 ? (64u + sizeof(_g4_t_v114)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v115)) > _g4_s9 ? (80u + sizeof(_g4_t_v115)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v116)) > _g4_s10 ? (84u + sizeof(_g4_t_v116)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v117)) > _g4_s11 ? (88u + sizeof(_g4_t_v117)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v118)) > _g4_s12 ? (92u + sizeof(_g4_t_v118)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v119)) > _g4_s13 ? (96u + sizeof(_g4_t_v119)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v120)) > _g4_s14 ? (100u + sizeof(_g4_t_v120)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v121)) > _g4_s15 ? (112u + sizeof(_g4_t_v121)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v122)) > _g4_s16 ? (116u + sizeof(_g4_t_v122)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v123)) > _g4_s17 ? (120u + sizeof(_g4_t_v123)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v124)) > _g4_s18 ? (124u + sizeof(_g4_t_v124)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v125)) > _g4_s19 ? (128u + sizeof(_g4_t_v125)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v126)) > _g4_s20 ? (132u + sizeof(_g4_t_v126)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v127)) > _g4_s21 ? (136u + sizeof(_g4_t_v127)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v128)) > _g4_s22 ? (140u + sizeof(_g4_t_v128)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 0u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 24u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 28u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 32u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 36u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 40u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 44u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 48u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 64u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 80u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 84u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 88u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 92u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 96u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 100u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 112u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 116u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 120u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 124u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 128u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 132u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 136u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 140u);

  v4 = 0x7FFFFFFFu;
  result = *a3;
  LOBYTE(v113) = a3[3];
  v6 = a3[2];
  v7 = a3[1];
  LODWORD(v114) = (uint8_t)result;
  v8 = *(float *)&a3;
  v9 = v6;
  v10 = v7;
  while ( 2 )
  {
    while ( (uint8_t)result > 0x6Bu )
    {
LABEL_50:
      __builtin_debugtrap();
      LOBYTE(v112) = v10;
    }
    switch ( (int)v114 )
    {
      case 0:
        return result;
      case 1:
      case 2:
      case 3:
      case 4:
        LODWORD(v8) += 4;
        v19 = a2[5];
        v117 = a2[2] + ((uint8_t)v10 << v19);
        v118 = a2[3] + ((uint8_t)v9 << v19);
        v20 = a2[4] + ((uint8_t)v113 << v19);
        v120 = v19 - v114;
        LOBYTE(v19) = *(uint8_t *)(LODWORD(v8) + 1);
        v119 = v20;
        v21 = a2[1];
        LOBYTE(v112) = v19;
        v116 = v21;
        v115 = *a2;
        result = (uint8_t)*(uint8_t *)LODWORD(v8);
        a2 = &v115;
        goto LABEL_14;
      case 5:
        LODWORD(v8) += (uint8_t)v10 + 2;
        result = (uint8_t)*(uint8_t *)LODWORD(v8);
        LOBYTE(v112) = *(uint8_t *)(LODWORD(v8) + 1);
        goto LABEL_14;
      case 6:
        LODWORD(v8) += (uint8_t)v9 + ((uint8_t)v10 << 8) + 3;
        result = (uint8_t)*(uint8_t *)LODWORD(v8);
        LOBYTE(v112) = *(uint8_t *)(LODWORD(v8) + 1);
        goto LABEL_14;
      case 7:
        LODWORD(v8) += ((uint8_t)v10 << 16) + ((uint8_t)v9 << 8) + (uint8_t)v113 + 4;
        result = (uint8_t)*(uint8_t *)LODWORD(v8);
        LOBYTE(v112) = *(uint8_t *)(LODWORD(v8) + 1);
        goto LABEL_14;
      case 8:
        LODWORD(v8) += *(uint8_t *)(LODWORD(v8) + 4)
                     + (v10 << 24)
                     + ((uint8_t)v9 << 16)
                     + ((uint8_t)v113 << 8)
                     + 5;
        result = (uint8_t)*(uint8_t *)LODWORD(v8);
        LOBYTE(v112) = *(uint8_t *)(LODWORD(v8) + 1);
        goto LABEL_14;
      case 9:
        LODWORD(v114) = (uint32_t)(uintptr_t)(&v115);
        if ( a2 != &v115 )
        {
          v115 = *a2;
          v116 = a2[1];
          v117 = a2[2];
          v118 = a2[3];
          v119 = a2[4];
          v120 = a2[5];
        }
        v115 += (uint8_t)v10;
        LOBYTE(v112) = (uint8_t)(uintptr_t)(v113);
        result = v9;
        LODWORD(v8) += 2;
        a2 = (int *)(uintptr_t)v114;
        goto LABEL_14;
      case 10:
        v22 = (uint8_t)v9 + ((uint8_t)v10 << 8);
        LODWORD(v114) = (uint32_t)(uintptr_t)(&v115);
        if ( a2 != &v115 )
        {
          v115 = *a2;
          v116 = a2[1];
          v117 = a2[2];
          v118 = a2[3];
          v119 = a2[4];
          v120 = a2[5];
        }
        LOBYTE(v112) = *(uint8_t *)(LODWORD(v8) + 4);
        v115 += v22;
        result = (uint8_t)v113;
        LODWORD(v8) += 3;
        a2 = (int *)(uintptr_t)v114;
        goto LABEL_14;
      case 11:
        v23 = *(uint8_t *)(LODWORD(v8) + 4)
            + (v10 << 24)
            + ((uint8_t)v9 << 16)
            + ((uint8_t)v113 << 8);
        v24 = &v115;
        LODWORD(v114) = (uint32_t)(uintptr_t)(&v115);
        if ( a2 != &v115 )
        {
          v115 = *a2;
          v116 = a2[1];
          v117 = a2[2];
          v118 = a2[3];
          v119 = a2[4];
          v120 = a2[5];
          v24 = (int *)(uintptr_t)v114;
        }
        v25 = *(uint8_t *)(LODWORD(v8) + 6);
        v115 = v23;
        LOBYTE(v112) = v25;
        LODWORD(v8) += 5;
        result = (uint8_t)*(uint8_t *)LODWORD(v8);
        a2 = v24;
        goto LABEL_14;
      case 12:
      case 13:
      case 14:
      case 15:
      case 29:
      case 30:
      case 31:
      case 44:
      case 45:
      case 46:
      case 47:
      case 84:
      case 85:
      case 86:
      case 87:
      case 88:
      case 89:
      case 90:
      case 91:
      case 92:
      case 93:
      case 94:
      case 95:
        goto LABEL_50;
      case 16:
      case 17:
      case 18:
        v26 = v114 - 16;
        v121 = *(float *)a4;
        v122 = *(float *)(a4 + 4);
        v123 = *(float *)(a4 + 8);
        v124 = *(uint32_t *)(a4 + 12);
        v125 = *(float *)(a4 + 16);
        v126 = *(float *)(a4 + 20);
        v127 = *(float *)(a4 + 24);
        v128 = *(uint32_t *)(a4 + 28);
        LODWORD(v112) = (uint32_t)(uintptr_t)(a2 + 2);
        LODWORD(v114) = (uint32_t)(uintptr_t)(&a2[v114 - 14]);
        *(float *)(a4 + 4 * v26 + 16) = (float)(*(uint32_t *)(uintptr_t)v114 + ((uint8_t)v10 << a2[5])) * a1[4];
        v27 = (float)(*(uint32_t *)(uintptr_t)v114 + ((uint8_t)v9 << a2[5])) * a1[4];
        v28 = LODWORD(v8) + 4;
        *(&v121 + v26) = v27;
        LODWORD(v114) = (uint8_t)v113;
        v29 = 0;
        goto LABEL_30;
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
        v44 = LODWORD(v8) + 4;
        v114 = v4;
        v121 = *(float *)a4;
        v122 = *(float *)(a4 + 4);
        v123 = *(float *)(a4 + 8);
        v124 = *(uint32_t *)(a4 + 12);
        v125 = *(float *)(a4 + 16);
        v126 = *(float *)(a4 + 20);
        v127 = *(float *)(a4 + 24);
        v128 = *(uint32_t *)(a4 + 28);
        hkpMoppUsingFloatAabbVirtualMachine_hkSphere_hkMoppSphereQue_28e2a9::queryMoppTree(
          a1,
          a2,
          (uint8_t *)(uintptr_t)(LODWORD(v8) + 4),
          (int)(uintptr_t)(&v121));
        v4 = v114;
        LODWORD(v8) = v44 + (uint8_t)v113;
        result = (uint8_t)*(uint8_t *)LODWORD(v8);
        LOBYTE(v112) = *(uint8_t *)(LODWORD(v8) + 1);
        goto LABEL_14;
      case 32:
      case 33:
      case 34:
        LODWORD(v114) = v114 - 32;
        v121 = *(float *)a4;
        v122 = *(float *)(a4 + 4);
        v123 = *(float *)(a4 + 8);
        v124 = *(uint32_t *)(a4 + 12);
        v125 = *(float *)(a4 + 16);
        v126 = *(float *)(a4 + 20);
        v127 = *(float *)(a4 + 24);
        v128 = *(uint32_t *)(a4 + 28);
        v45 = a2[5];
        LODWORD(v113) = (uint8_t)v10 + 1;
        v46 = (uint8_t)v10 << v45;
        LODWORD(v113) = (uint32_t)v113 << v45;
        LODWORD(v112) = (uint32_t)(uintptr_t)(a2 + 2);
        v47 = a2[(uint32_t)v114 + 2];
        v48 = a1[4];
        v49 = (float)(v47 + v46) * v48;
        v50 = (int)(uintptr_t)(v114);
        v51 = v47 + v113;
        *(&v121 + (int)v114) = v49;
        *(float *)(a4 + 4 * v50 + 16) = (float)v51 * v48;
        v52 = (uint8_t)v9;
        v28 = LODWORD(v8) + 3;
        LODWORD(v114) = v52;
        v29 = 0;
        goto LABEL_30;
      case 35:
      case 36:
      case 37:
        v53 = v114 - 35;
        v121 = *(float *)a4;
        v122 = *(float *)(a4 + 4);
        v123 = *(float *)(a4 + 8);
        v124 = *(uint32_t *)(a4 + 12);
        v125 = *(float *)(a4 + 16);
        v126 = *(float *)(a4 + 20);
        v127 = *(float *)(a4 + 24);
        v128 = *(uint32_t *)(a4 + 28);
        LODWORD(v112) = (uint32_t)(uintptr_t)(a2 + 2);
        LODWORD(v114) = (uint32_t)(uintptr_t)(&a2[v114 - 33]);
        *(float *)(a4 + 4 * v53 + 16) = (float)(*(uint32_t *)(uintptr_t)v114 + ((uint8_t)v10 << a2[5])) * a1[4];
        v54 = *(uint8_t *)(LODWORD(v8) + 4);
        v55 = (float)(*(uint32_t *)(uintptr_t)v114 + ((uint8_t)v9 << a2[5])) * a1[4];
        v56 = *(uint8_t *)(LODWORD(v8) + 5) << 8;
        *(&v121 + v53) = v55;
        v29 = v54 + ((uint8_t)v113 << 8);
        LODWORD(v114) = *(uint8_t *)(LODWORD(v8) + 6) + v56;
        v28 = LODWORD(v8) + 7;
LABEL_30:
        v30 = (uint8_t *)(v28 + v29);
        v31 = *(uint8_t *)(v28 + v29);
        for ( i = v31 - 38; (unsigned int)(v31 - 38) <= 5; i = v31 - 38 )
        {
          if ( v31 <= 40 )
          {
            v61 = 4 * i;
            v62 = (uint32_t *)(v61 + LODWORD(v112));
            LODWORD(v113) = a4 + v61;
            *(float *)(a4 + v61) = (float)(*(uint32_t *)(v61 + LODWORD(v112))
                                         + (*(uint8_t *)(v28 + v29 + 1) << a2[5]))
                                 * a1[4];
            v63 = *(uint8_t *)(v28 + v29 + 2);
            v29 += 3;
            *(float *)(v113 + 16) = (float)(*v62 + (v63 << a2[5])) * a1[4];
            goto LABEL_30;
          }
          LODWORD(v113) = a4 + 4 * v31 - 164;
          v33 = (uint8_t *)(v28 + v29 + 4);
          v34 = (float)(*(uint8_t *)(v28 + v29 + 3)
                      + (*(uint8_t *)(v28 + v29 + 1) << 16)
                      + (*(uint8_t *)(v28 + v29 + 2) << 8));
          v29 += 7;
          *(float *)(uintptr_t)v113 = v34 * a1[4];
          *(float *)(v113 + 16) = (float)(v33[2] + (*v33 << 16) + (v33[1] << 8)) * a1[4];
          v30 = (uint8_t *)(v28 + v29);
          v31 = *(uint8_t *)(v28 + v29);
        }
        v107 = v30;
        while ( 1 )
        {
          LODWORD(v8) = v28 + v114;
          v35 = *(uint8_t *)(v28 + v114) - 38;
          if ( v35 > 5 )
            break;
          v36 = a1[4];
          if ( *(uint8_t *)(v28 + v114) <= 0x28u )
          {
            v64 = a2[5];
            v65 = *(uint32_t *)(LODWORD(v112) + 4 * v35);
            v66 = (float)(v65 + (*(uint8_t *)(v28 + v114 + 1) << v64)) * v36;
            v67 = (int)(uintptr_t)(v114);
            LODWORD(v114) = v114 + 3;
            v68 = *(uint8_t *)(v28 + v67 + 2) << v64;
            *(&v121 + v35) = v66;
            *(&v125 + v35) = (float)(v65 + v68) * v36;
          }
          else
          {
            v37 = *(uint8_t *)(v28 + v114) - 41;
            v38 = (int)(uintptr_t)(v114);
            v39 = *(uint8_t *)(v28 + v114 + 3)
                + (*(uint8_t *)(v28 + v114 + 1) << 16)
                + (*(uint8_t *)(v28 + v114 + 2) << 8);
            LODWORD(v114) = v114 + 7;
            v40 = (float)v39 * v36;
            v41 = (uint8_t *)(v28 + v38 + 4);
            v42 = *v41 << 16;
            v43 = v41[1] << 8;
            *(&v121 + v37) = v40;
            *(&v125 + v37) = (float)(v41[2] + v42 + v43) * v36;
          }
        }
        v111 = v125 - v121;
        v110 = v126 - v122;
        v109 = v127 - v123;
        *(float *)&v114 = a1[12];
        *(float *)&v113 = a1[13];
        v112 = a1[14];
        LODWORD(v69) = COERCE_UNSIGNED_INT((float)(v125 + v121) - *(float *)&v114) & v4;
        LODWORD(v70) = COERCE_UNSIGNED_INT((float)(v126 + v122) - *(float *)&v113) & v4;
        v71 = fminf(v69, v125 - v121);
        v72 = fminf(v70, v126 - v122);
        v73 = a1[15] * a1[15];
        LODWORD(v74) = COERCE_UNSIGNED_INT((float)(v123 + v127) - v112) & v4;
        v75 = fminf(v74, v127 - v123);
        if ( (float)((float)((float)((float)(v71 - v69) * (float)(v71 - v69))
                           + (float)((float)(v72 - v70) * (float)(v72 - v70)))
                   + (float)((float)(v75 - v74) * (float)(v75 - v74))) > v73 )
        {
          v76 = v112;
          v77 = 0;
          v78 = *(float *)&v113;
          v79 = *(float *)&v114;
        }
        else if ( v73 > (float)((float)((float)((float)(v69 + v111) * (float)(v69 + v111))
                                      + (float)((float)(v70 + v110) * (float)(v70 + v110)))
                              + (float)((float)(v74 + v109) * (float)(v74 + v109))) )
        {
          *(float *)&v114 = v8;
          v113 = v4;
          hkpMoppFindAllVirtualMachine::queryOnTreeLeft(a1 + 8, a2, LODWORD(v8));
          v77 = 1;
          hkpMoppFindAllVirtualMachine::queryOnTreeRight(a1 + 8, a2, v114);
          v8 = *(float *)&v114;
          v79 = a1[12];
          v78 = a1[13];
          v76 = a1[14];
          v73 = a1[15] * a1[15];
          v4 = v113;
        }
        else
        {
          v76 = v112;
          v77 = 2;
          v78 = *(float *)&v113;
          v79 = *(float *)&v114;
        }
        result = a4;
        v80 = *(float *)(a4 + 8);
        LODWORD(v114) = *(uint32_t *)a4;
        v112 = v80;
        v81 = *(float *)(a4 + 16);
        v111 = *(float *)(a4 + 24);
        LODWORD(v113) = *(uint32_t *)(a4 + 4);
        v82 = *(float *)(a4 + 20);
        v110 = v81 - *(float *)&v114;
        v109 = v82 - *(float *)&v113;
        LODWORD(v83) = COERCE_UNSIGNED_INT((float)(v81 + *(float *)&v114) - v79) & v4;
        v84 = fminf(v83, v110);
        LODWORD(v85) = COERCE_UNSIGNED_INT((float)(v82 + *(float *)&v113) - v78) & v4;
        v108 = v111 - v80;
        v86 = fminf(v85, v109);
        LODWORD(v87) = COERCE_UNSIGNED_INT((float)(v111 + v80) - v76) & v4;
        v88 = fminf(v87, v111 - v112);
        if ( (float)((float)((float)((float)(v84 - v83) * (float)(v84 - v83))
                           + (float)((float)(v86 - v85) * (float)(v86 - v85)))
                   + (float)((float)(v88 - v87) * (float)(v88 - v87))) > v73 )
          goto LABEL_65;
        if ( v73 > (float)((float)((float)((float)(v83 + v110) * (float)(v83 + v110))
                                 + (float)((float)(v85 + v109) * (float)(v85 + v109)))
                         + (float)((float)(v87 + v108) * (float)(v87 + v108))) )
        {
          v105 = v107;
          v112 = v8;
          v113 = v4;
          LODWORD(v114) = (uint32_t)(uintptr_t)(a1 + 8);
          hkpMoppFindAllVirtualMachine::queryOnTreeLeft(a1 + 8, a2, v107);
          result = (int)(uintptr_t)(hkpMoppFindAllVirtualMachine::queryOnTreeRight(v114, a2, v105));
          v4 = v113;
          v8 = v112;
LABEL_65:
          if ( v77 != 2 )
            return result;
          *(float *)a4 = v121;
          *(float *)(a4 + 4) = v122;
          *(float *)(a4 + 8) = v123;
          *(uint32_t *)(a4 + 12) = v124;
          *(float *)(a4 + 16) = v125;
          *(float *)(a4 + 20) = v126;
          *(float *)(a4 + 24) = v127;
          *(uint32_t *)(a4 + 28) = v128;
          result = (uint8_t)*(uint8_t *)LODWORD(v8);
          LOBYTE(v112) = *(uint8_t *)(LODWORD(v8) + 1);
        }
        else if ( v77 == 2 )
        {
          v114 = v4;
          hkpMoppUsingFloatAabbVirtualMachine_hkSphere_hkMoppSphereQue_28e2a9::queryMoppTree(
            a1,
            a2,
            (uint8_t *)(uintptr_t)(LODWORD(v8)),
            (int)(uintptr_t)(&v121));
          v4 = v114;
          result = *v107;
          LOBYTE(v112) = v107[1];
          v8 = *(float *)&v107;
        }
        else
        {
          v8 = *(float *)&v107;
          result = *v107;
          LOBYTE(v112) = v107[1];
        }
        goto LABEL_14;
      case 38:
      case 39:
      case 40:
        LODWORD(v8) += 3;
        v57 = 4 * v114 - 152;
        v58 = (char *)a2 + v57;
        v59 = (float *)(a4 + v57);
        LODWORD(v114) = (uint32_t)(uintptr_t)(v58 + 8);
        *v59 = (float)(*((uint32_t *)v58 + 2) + ((uint8_t)v10 << a2[5])) * a1[4];
        v59[4] = (float)(*(uint32_t *)(uintptr_t)v114 + ((uint8_t)v9 << a2[5])) * a1[4];
        goto LABEL_41;
      case 41:
      case 42:
      case 43:
        LODWORD(v8) += 7;
        v60 = (float *)(a4 + 4 * v114 - 164);
        *v60 = (float)((uint8_t)v113 + ((uint8_t)v9 << 8) + ((uint8_t)v10 << 16)) * a1[4];
        v60[4] = (float)(*(uint8_t *)(LODWORD(v8) - 1)
                       + (*(uint8_t *)(LODWORD(v8) - 3) << 16)
                       + (*(uint8_t *)(LODWORD(v8) - 2) << 8))
               * a1[4];
LABEL_41:
        result = (uint8_t)*(uint8_t *)LODWORD(v8);
        if ( (uint8_t)(*(uint8_t *)LODWORD(v8) - 38) <= 5u )
          goto LABEL_42;
        v89 = *(float *)(a4 + 20);
        v90 = *(float *)(a4 + 4);
        v91 = *(float *)(a4 + 16) + *(float *)a4;
        v92 = *(float *)(a4 + 24);
        v93 = *(float *)(a4 + 8);
        *(float *)&v114 = *(float *)(a4 + 16) - *(float *)a4;
        v94 = v91 - a1[12];
        *(float *)&v113 = v89 - v90;
        v95 = v92 - v93;
        v96 = v93 + v92;
        v112 = v95;
        v97 = a1[15] * a1[15];
        v98 = fabs(v94);
        v99 = fminf(v98, *(float *)&v114);
        v100 = fabs((float)(v89 + v90) - a1[13]);
        v101 = fminf(v100, *(float *)&v113);
        v102 = fabs(v96 - a1[14]);
        v103 = fminf(v102, v112);
        if ( (float)((float)((float)((float)(v99 - v98) * (float)(v99 - v98))
                           + (float)((float)(v101 - v100) * (float)(v101 - v100)))
                   + (float)((float)(v103 - v102) * (float)(v103 - v102))) > v97 )
          return result;
        if ( v97 <= (float)((float)((float)((float)(v98 + *(float *)&v114) * (float)(v98 + *(float *)&v114))
                                  + (float)((float)(v100 + *(float *)&v113) * (float)(v100 + *(float *)&v113)))
                          + (float)((float)(v102 + v112) * (float)(v102 + v112))) )
        {
LABEL_42:
          LOBYTE(v112) = *(uint8_t *)(LODWORD(v8) + 1);
LABEL_14:
          v18 = *(uint8_t *)(LODWORD(v8) + 3);
          LODWORD(v114) = (uint8_t)result;
          v9 = *(uint8_t *)(LODWORD(v8) + 2);
          LOBYTE(v113) = v18;
          v10 = LOBYTE(v112);
          continue;
        }
        v104 = v8;
        hkpMoppFindAllVirtualMachine::queryOnTreeLeft(a1 + 8, a2, LODWORD(v8));
        return (int)(uintptr_t)(hkpMoppFindAllVirtualMachine::queryOnTreeRight(a1 + 8, a2, LODWORD(v104)));
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
      case 58:
      case 59:
      case 60:
      case 61:
      case 62:
      case 63:
      case 64:
      case 65:
      case 66:
      case 67:
      case 68:
      case 69:
      case 70:
      case 71:
      case 72:
      case 73:
      case 74:
      case 75:
      case 76:
      case 77:
      case 78:
      case 79:
        v11 = v114 - 48;
        goto LABEL_6;
      case 80:
        v11 = (uint8_t)v10;
        goto LABEL_6;
      case 81:
        v11 = ((uint8_t)v10 << 8) + (uint8_t)v9;
        goto LABEL_6;
      case 82:
        v11 = ((uint8_t)v10 << 16) + ((uint8_t)v9 << 8) + (uint8_t)v113;
        goto LABEL_6;
      case 83:
        v11 = ((uint8_t)v113 << 8)
            + (v10 << 24)
            + ((uint8_t)v9 << 16)
            + *(uint8_t *)(LODWORD(v8) + 4);
LABEL_6:
        v12 = *a2 + v11;
        v13 = *(hkMemoryAllocator::Self **)a1;
        result = *(uint32_t *)(*(uint32_t *)a1 + 4);
        if ( result == (*(uint32_t *)(*(uint32_t *)a1 + 8) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v13, 4, v106[3]);
          result = *((uint32_t *)v13 + 1);
        }
        v14 = *(uint32_t *)v13;
        *((uint32_t *)v13 + 1) = result + 1;
        *(uint32_t *)(v14 + 4 * result) = v12;
        return result;
      case 96:
      case 97:
      case 98:
      case 99:
        LODWORD(v8) += 2;
        v106[(uint32_t)v114 - 75] = (uint8_t)v10;
        goto LABEL_11;
      case 100:
      case 101:
      case 102:
      case 103:
        LODWORD(v8) += 3;
        v106[(uint32_t)v114 - 79] = (uint8_t)v9 + ((uint8_t)v10 << 8);
        goto LABEL_11;
      case 104:
      case 105:
      case 106:
      case 107:
        LODWORD(v8) += 5;
        v106[(uint32_t)v114 - 83] = *(uint8_t *)(LODWORD(v8) - 1)
                                + (v10 << 24)
                                + ((uint8_t)v9 << 16)
                                + ((uint8_t)v113 << 8);
LABEL_11:
        v15 = &v115;
        v16 = v116;
        LODWORD(v114) = (uint32_t)(uintptr_t)(&v115);
        if ( a2 != &v115 )
        {
          v115 = *a2;
          v116 = a2[1];
          v117 = a2[2];
          v118 = a2[3];
          v119 = a2[4];
          v120 = a2[5];
          v15 = (int *)(uintptr_t)v114;
        }
        v17 = *(uint8_t *)(LODWORD(v8) + 1);
        v116 = v16;
        LOBYTE(v112) = v17;
        a2 = v15;
        result = (uint8_t)*(uint8_t *)LODWORD(v8);
        goto LABEL_14;
      default:
        abort();
    }
  }
}


