#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMoppLon.h"

// ----------------------------------------------------------------------------
// Function: hkpMoppLongRayVirtualMachine::queryRayOnTree  (binary VA: 0x178c3b0)
// Original: hkpMoppLongRayVirtualMachine::queryRayOnTree
// ----------------------------------------------------------------------------
int hkpMoppLongRayVirtualMachine::queryRayOnTree(float a1, float *a2, uint8_t *a3, __m128 *a4, int a5)
{
  uint8_t *v5;
  __m128 *v6;
  char v7;
  uint8_t v8;
  char v9;
  __m128 *v10;
  char v11;
  int result;
  int v13;
  int (***v14)(char *);
  int v15;
  int (**v16)(char *);
  int v17;
  int v18;
  hkLifoAllocator::Self *v19;
  char *v20;
  bool v21; // cc
  void *v22;
  int v23;
  float v24;
  int v25;
  int v26;
  int v27;
  float v28;
  char v29;
  int v30;
  int v31;
  char *v32;
  char v33;
  char v34; // si
  float v35; // xmm2_4
  float v36; // xmm3_4
  float v37; // xmm1_4
  int v38;
  float v39;
  float v40; // xmm0_4
  float v41;
  __m128i v42;
  float v43; // xmm4_4
  float v44; // xmm5_4
  float v45; // xmm6_4
  float v46;
  float v47; // xmm4_4
  float *v48;
  float v49; // xmm2_4
  float v50; // xmm4_4
  float v51; // xmm1_4
  float v52; // xmm0_4
  int v53;
  int v54;
  float v55; // xmm0_4
  int v56;
  int v57;
  float v58; // xmm0_4
  int v59;
  float v60; // xmm0_4
  int v61;
  float v62; // xmm2_4
  __m128 v63;
  float v64; // xmm1_4
  __m128 v65;
  int v66;
  int v67;
  char *v68;
  float v69; // xmm2_4
  float v70; // xmm1_4
  float v71; // xmm2_4
  float v72; // xmm1_4
  float v73; // xmm2_4
  float v74; // xmm1_4
  float v75; // xmm1_4
  __m128 v76;
  __m128 v77;
  __m128 v78;
  int v79;
  float v80; // xmm1_4
  float v81; // xmm0_4
  float v82; // xmm4_4
  float v83; // xmm3_4
  float *v84;
  float v85; // xmm2_4
  float v86; // xmm5_4
  float v87; // xmm4_4
  float v88; // xmm3_4
  float v89; // xmm2_4
  float v90; // xmm0_4
  float v91; // xmm5_4
  float v92; // xmm4_4
  float v93; // xmm3_4
  float v94; // xmm2_4
  int v95;
  float v96; // xmm1_4
  float v97; // xmm0_4
  __m128 v98;
  __m128 v99;
  int v100;
  int v101;
  __m128 v102;
  __m128 v103;
  unsigned int v104;
  unsigned int v105;
  float v106; // xmm6_4
  float v107; // xmm0_4
  __m128 v108;
  float v109; // xmm2_4
  uint8_t *v110;
  float v111; // xmm1_4
  float v112; // xmm0_4
  float v113; // xmm2_4
  float v114; // xmm1_4
  float v115; // xmm0_4
  float v116; // xmm2_4
  float v117; // xmm0_4
  uint8_t *v118;
  int v119;
  float v120;
  float v121; // xmm2_4
  float v122; // xmm0_4
  float v123; // xmm3_4
  float v124; // xmm5_4
  float v125; // xmm6_4
  float v126; // xmm4_4
  float v127; // xmm3_4
  float v128; // xmm1_4
  float v129; // xmm1_4
  float *v130;
  float v131; // xmm5_4
  float v132; // xmm4_4
  float v133; // xmm3_4
  float v134; // xmm1_4
  float v135; // xmm0_4
  float v136; // xmm5_4
  float v137; // xmm4_4
  float v138; // xmm3_4
  float v139; // xmm1_4
  __m128 v140;
  __m128 v141;
  __m128 v142;
  __m128 v143;
  int32_t v144;
  float v145;
  __m128 v146;
  __m128 v147;
  int v148;
  __m128 v149;
  __m128 v150;
  __m128 v151;
  __m128 v152;
  int v153;
  __m128 v154;
  __m128 v155;
  __m128 v156;
  __m128 v157;
  typedef uint32_t _g4_t_v158[78];
  typedef int (***_g4_t_v159)(char *);
  typedef int _g4_t_v160;
  typedef int _g4_t_v161;
  typedef int _g4_t_v162;
  typedef float _g4_t_v163;
  typedef double _g4_t_v164;
  typedef double _g4_t_v165;
  typedef float _g4_t_v166;
  typedef float _g4_t_v167;
  typedef int _g4_t_v168;
  typedef float *_g4_t_v169;
  typedef float _g4_t_v170;
  typedef float _g4_t_v171;
  typedef float _g4_t_v172;
  typedef float _g4_t_v173;
  typedef void *_g4_t_v174;
  typedef char _g4_t_v175;
  typedef float _g4_t_v176;
  typedef float _g4_t_v177;
  typedef float _g4_t_v178;
  typedef float _g4_t_v179;
  typedef int _g4_t_v180;
  typedef float _g4_t_v181;
  typedef int _g4_t_v182;
  typedef int _g4_t_v183;
  typedef float _g4_t_v184;
  typedef int _g4_t_v185;
  typedef int32_t _g4_t_v186;
  typedef int32_t _g4_t_v187;
  typedef __m128 _g4_t_v188;
  typedef float *_g4_t_v189;
  enum : size_t {
    _g4_s0 = 560u,
    _g4_s1 = (12u + sizeof(_g4_t_v158)) > _g4_s0 ? (12u + sizeof(_g4_t_v158)) : _g4_s0,
    _g4_s2 = (324u + sizeof(_g4_t_v159)) > _g4_s1 ? (324u + sizeof(_g4_t_v159)) : _g4_s1,
    _g4_s3 = (328u + sizeof(_g4_t_v160)) > _g4_s2 ? (328u + sizeof(_g4_t_v160)) : _g4_s2,
    _g4_s4 = (332u + sizeof(_g4_t_v161)) > _g4_s3 ? (332u + sizeof(_g4_t_v161)) : _g4_s3,
    _g4_s5 = (336u + sizeof(_g4_t_v162)) > _g4_s4 ? (336u + sizeof(_g4_t_v162)) : _g4_s4,
    _g4_s6 = (340u + sizeof(_g4_t_v163)) > _g4_s5 ? (340u + sizeof(_g4_t_v163)) : _g4_s5,
    _g4_s7 = (344u + sizeof(_g4_t_v164)) > _g4_s6 ? (344u + sizeof(_g4_t_v164)) : _g4_s6,
    _g4_s8 = (352u + sizeof(_g4_t_v165)) > _g4_s7 ? (352u + sizeof(_g4_t_v165)) : _g4_s7,
    _g4_s9 = (360u + sizeof(_g4_t_v166)) > _g4_s8 ? (360u + sizeof(_g4_t_v166)) : _g4_s8,
    _g4_s10 = (364u + sizeof(_g4_t_v167)) > _g4_s9 ? (364u + sizeof(_g4_t_v167)) : _g4_s9,
    _g4_s11 = (368u + sizeof(_g4_t_v168)) > _g4_s10 ? (368u + sizeof(_g4_t_v168)) : _g4_s10,
    _g4_s12 = (372u + sizeof(_g4_t_v169)) > _g4_s11 ? (372u + sizeof(_g4_t_v169)) : _g4_s11,
    _g4_s13 = (376u + sizeof(_g4_t_v170)) > _g4_s12 ? (376u + sizeof(_g4_t_v170)) : _g4_s12,
    _g4_s14 = (380u + sizeof(_g4_t_v171)) > _g4_s13 ? (380u + sizeof(_g4_t_v171)) : _g4_s13,
    _g4_s15 = (384u + sizeof(_g4_t_v172)) > _g4_s14 ? (384u + sizeof(_g4_t_v172)) : _g4_s14,
    _g4_s16 = (388u + sizeof(_g4_t_v173)) > _g4_s15 ? (388u + sizeof(_g4_t_v173)) : _g4_s15,
    _g4_s17 = (392u + sizeof(_g4_t_v174)) > _g4_s16 ? (392u + sizeof(_g4_t_v174)) : _g4_s16,
    _g4_s18 = (399u + sizeof(_g4_t_v175)) > _g4_s17 ? (399u + sizeof(_g4_t_v175)) : _g4_s17,
    _g4_s19 = (400u + sizeof(_g4_t_v176)) > _g4_s18 ? (400u + sizeof(_g4_t_v176)) : _g4_s18,
    _g4_s20 = (404u + sizeof(_g4_t_v177)) > _g4_s19 ? (404u + sizeof(_g4_t_v177)) : _g4_s19,
    _g4_s21 = (408u + sizeof(_g4_t_v178)) > _g4_s20 ? (408u + sizeof(_g4_t_v178)) : _g4_s20,
    _g4_s22 = (412u + sizeof(_g4_t_v179)) > _g4_s21 ? (412u + sizeof(_g4_t_v179)) : _g4_s21,
    _g4_s23 = (416u + sizeof(_g4_t_v180)) > _g4_s22 ? (416u + sizeof(_g4_t_v180)) : _g4_s22,
    _g4_s24 = (420u + sizeof(_g4_t_v181)) > _g4_s23 ? (420u + sizeof(_g4_t_v181)) : _g4_s23,
    _g4_s25 = (424u + sizeof(_g4_t_v182)) > _g4_s24 ? (424u + sizeof(_g4_t_v182)) : _g4_s24,
    _g4_s26 = (428u + sizeof(_g4_t_v183)) > _g4_s25 ? (428u + sizeof(_g4_t_v183)) : _g4_s25,
    _g4_s27 = (432u + sizeof(_g4_t_v184)) > _g4_s26 ? (432u + sizeof(_g4_t_v184)) : _g4_s26,
    _g4_s28 = (436u + sizeof(_g4_t_v185)) > _g4_s27 ? (436u + sizeof(_g4_t_v185)) : _g4_s27,
    _g4_s29 = (440u + sizeof(_g4_t_v186)) > _g4_s28 ? (440u + sizeof(_g4_t_v186)) : _g4_s28,
    _g4_s30 = (444u + sizeof(_g4_t_v187)) > _g4_s29 ? (444u + sizeof(_g4_t_v187)) : _g4_s29,
    _g4_s31 = (448u + sizeof(_g4_t_v188)) > _g4_s30 ? (448u + sizeof(_g4_t_v188)) : _g4_s30,
    _g4_s32 = (472u + sizeof(_g4_t_v189)) > _g4_s31 ? (472u + sizeof(_g4_t_v189)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 12u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 324u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 328u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 332u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 336u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 340u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 344u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 352u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 360u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 364u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 368u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 372u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 376u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 380u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 384u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 388u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 392u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 399u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 400u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 404u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 408u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 412u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 416u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 420u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 424u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 428u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 432u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 436u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 440u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 444u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 448u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 472u);

  v189 = &a1;
  v170 = a1;
  v169 = a2;
  v5 = a3;
  v6 = a4;
  v168 = a5;
  if ( byte_212A0F0 != 0 || (hkpCheckKeycode(), result = hkpProcessFlyingColors(&byte_212A0F0), byte_212A0F0 != 0) )
  {
    v7 = v5[3];
    v174 = v5;
    v8 = *v5;
    LOBYTE(v171) = v7;
    LOBYTE(v172) = v5[2];
    v9 = v5[1];
    v10 = v6;
    v11 = v9;
    result = v8;
    LOBYTE(v173) = v11;
    while ( 1 )
    {
      if ( v8 > 0x70u )
      {
LABEL_91:
        __builtin_debugtrap();
        v34 = LOBYTE(v172);
        v33 = LOBYTE(v173);
      }
      else
      {
        switch ( result )
        {
          case 0:
            return result;
          case 1:
          case 2:
          case 3:
          case 4:
            v35 = (float)((float)0 * 65536.0) + (float)LOBYTE(v171);
            v36 = (float)((float)0 * 65536.0) + (float)LOBYTE(v172);
            v37 = (float)((float)0 * 65536.0) + (float)LOBYTE(v173);
            v38 = 1 << v8;
            v39 =g4_m128_lane<float>(*(v10), 0);
            v40 = (float)v38;
            v41 =g4_m128_lane<float>(v10[1], 3);
            v42 = _mm_cvtsi32_si128(g4_m128_lane<uint32_t>(*(v10), 1));
            *(float *)g4_m128_ptr<int32_t>(v42) = *(float *)g4_m128_ptr<int32_t>(v42) - v36;
            v43 =g4_m128_lane<float>(v10[1], 2) - v35;
            v173 =g4_m128_lane<float>(*(v10), 3);
            v44 =g4_m128_lane<float>(v10[1], 1);
            v45 =g4_m128_lane<float>(v10[1], 0);
            v46 = COERCE_FLOAT(_mm_cvtsi128_si32(v42));
            *(float *)g4_m128_ptr<int32_t>(v42) =g4_m128_lane<float>(*(v10), 2) - v35;
            v172 = v43;
            v47 = v39 - v37;
            v48 = v169;
g4_m128_lane<float>(v10[1], 0) = (float)(v45 - v37) * v40;
g4_m128_lane<float>(v10[1], 1) = (float)(v44 - v36) * v40;
g4_m128_lane<float>(*(v10), 2) = *(float *)g4_m128_ptr<int32_t>(v42) * v40;
            *(float *)g4_m128_ptr<int32_t>(v42) = v173 * v40;
g4_m128_lane<float>(*(v10), 0) = v47 * v40;
g4_m128_lane<int32_t>(*(v10), 3) =g4_m128_lane<int32_t>(v42, 0);
            *(float *)g4_m128_ptr<int32_t>(v42) = v172 * v40;
g4_m128_lane<float>(*(v10), 1) = v46 * v40;
g4_m128_lane<int32_t>(v10[1], 2) =g4_m128_lane<int32_t>(v42, 0);
g4_m128_lane<float>(v10[1], 3) = v41 * v40;
            v49 = (float)(v35 + v48[2]) * v40;
            v50 = (float)(v48[3] + 0.0) * v40;
            v51 = (float)(v37 + *v48) * v40;
            v177 = (float)(v36 + v48[1]) * v40;
            v176 = v51;
            v178 = v49;
            v179 = v50;
            v52 = v40 * v48[5];
            v180 = *((uint32_t *)v48 + 4) + result;
            v183 = *((uint32_t *)v48 + 7);
            v182 = *((uint32_t *)v48 + 6);
            v181 = v52;
            v8 = *((uint8_t *)v174 + 4);
            v33 = *((uint8_t *)v174 + 5);
            v34 = *((uint8_t *)v174 + 6);
            LOBYTE(v171) = *((uint8_t *)v174 + 7);
            v174 = (char *)v174 + 4;
            v169 = &v176;
            result = v8;
            break;
          case 5:
            v32 = (char *)v174 + LOBYTE(v173) + 2;
            v174 = v32;
            goto LABEL_27;
          case 6:
            v32 = (char *)v174 + 256 * LOBYTE(v173) + LOBYTE(v172) + 3;
            v174 = v32;
            goto LABEL_27;
          case 7:
            v32 = (char *)v174 + 0x10000 * LOBYTE(v173) + 256 * LOBYTE(v172) + LOBYTE(v171) + 4;
            v174 = v32;
            goto LABEL_27;
          case 8:
            v32 = (char *)v174
                + 0x1000000 * LODWORD(v173)
                + 0x10000 * LOBYTE(v172)
                + 256 * LOBYTE(v171)
                + *((uint8_t *)v174 + 4)
                + 5;
            v174 = v32;
            goto LABEL_27;
          case 9:
            v53 = LOBYTE(v173);
            v54 = v182;
            if ( v169 != &v176 )
            {
              v176 = *v169;
              v177 = v169[1];
              v178 = v169[2];
              v179 = v169[3];
              v55 = v169[5];
              v180 = *((uint32_t *)v169 + 4);
              v181 = v55;
              v54 = *((uint32_t *)v169 + 6);
              v183 = *((uint32_t *)v169 + 7);
            }
            v173 = COERCE_FLOAT(&v176);
            v182 = v53 + v54;
            v8 = *((uint8_t *)v174 + 2);
            v33 = *((uint8_t *)v174 + 3);
            v34 = *((uint8_t *)v174 + 4);
            LOBYTE(v171) = *((uint8_t *)v174 + 5);
            v174 = (char *)v174 + 2;
            v169 = &v176;
            result = v8;
            break;
          case 10:
            v56 = (LOBYTE(v173) << 8) + LOBYTE(v172);
            v57 = v182;
            if ( v169 != &v176 )
            {
              v176 = *v169;
              v177 = v169[1];
              v178 = v169[2];
              v179 = v169[3];
              v58 = v169[5];
              v180 = *((uint32_t *)v169 + 4);
              v181 = v58;
              v57 = *((uint32_t *)v169 + 6);
              v183 = *((uint32_t *)v169 + 7);
            }
            v173 = COERCE_FLOAT(&v176);
            v182 = v56 + v57;
            v8 = *((uint8_t *)v174 + 3);
            v33 = *((uint8_t *)v174 + 4);
            v34 = *((uint8_t *)v174 + 5);
            LOBYTE(v171) = *((uint8_t *)v174 + 6);
            v174 = (char *)v174 + 3;
            v169 = &v176;
            result = v8;
            break;
          case 11:
            v59 = *((uint8_t *)v174 + 4) + (LOBYTE(v171) << 8) + (LOBYTE(v172) << 16) + (LODWORD(v173) << 24);
            if ( v169 != &v176 )
            {
              v176 = *v169;
              v177 = v169[1];
              v178 = v169[2];
              v179 = v169[3];
              v60 = v169[5];
              v180 = *((uint32_t *)v169 + 4);
              v181 = v60;
              v183 = *((uint32_t *)v169 + 7);
            }
            v173 = COERCE_FLOAT(&v176);
            v182 = v59;
            v8 = *((uint8_t *)v174 + 5);
            v33 = *((uint8_t *)v174 + 6);
            v34 = *((uint8_t *)v174 + 7);
            LOBYTE(v171) = *((uint8_t *)v174 + 8);
            v174 = (char *)v174 + 5;
            v169 = &v176;
            result = v8;
            break;
          case 12:
            v168 = LOBYTE(v173) << 8;
            v168 |= LOBYTE(v172);
            v168 <<= 9;
            v31 = v168;
            goto LABEL_22;
          case 13:
            v8 = *((uint8_t *)v174 + 5);
            v33 = *((uint8_t *)v174 + 6);
            v34 = *((uint8_t *)v174 + 7);
            LOBYTE(v171) = *((uint8_t *)v174 + 8);
            v174 = (char *)v174 + 5;
            result = v8;
            break;
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
          case 108:
          case 109:
          case 110:
          case 111:
            goto LABEL_91;
          case 16:
          case 17:
          case 18:
            v61 = result - 16;
            v62 = (float)((float)0 * 65536.0) + (float)LOBYTE(v173);
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v10[-3], result);
            v64 = (float)((float)0 * 65536.0) + (float)LOBYTE(v172);
g4_m128_raw(v65) =g4_m128_lane<uint32_t>(v10[-4], result);
            goto LABEL_43;
          case 19:
            v61 = 999;
            v69 = (float)((float)0 * 65536.0) + (float)LOBYTE(v173);
            v62 = v69 + v69;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v10[1], 1);
g4_m128_lane<float>(v63, 0) =g4_m128_lane<float>(v63, 0) +g4_m128_lane<float>(v10[1], 2);
g4_m128_raw(v65) =g4_m128_lane<uint32_t>(*(v10), 1);
g4_m128_lane<float>(v65, 0) =g4_m128_lane<float>(v65, 0) +g4_m128_lane<float>(*(v10), 2);
            v64 = (float)((float)((float)0 * 65536.0) + (float)LOBYTE(v172))
                + (float)((float)((float)0 * 65536.0) + (float)LOBYTE(v172));
            goto LABEL_43;
          case 20:
            v61 = 999;
            v70 = (float)0 * 65536.0;
g4_m128_raw(v65) =g4_m128_lane<uint32_t>(*(v10), 1);
g4_m128_lane<float>(v65, 0) =g4_m128_lane<float>(v65, 0) -g4_m128_lane<float>(*(v10), 2);
            v62 = (float)((float)(v70 + (float)LOBYTE(v173)) + (float)(v70 + (float)LOBYTE(v173))) - 255.0;
            v64 = (float)((float)(v70 + (float)LOBYTE(v172)) + (float)(v70 + (float)LOBYTE(v172))) - 255.0;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v10[1], 1);
g4_m128_lane<float>(v63, 0) =g4_m128_lane<float>(v63, 0) -g4_m128_lane<float>(v10[1], 2);
            goto LABEL_43;
          case 21:
            v61 = 999;
            v71 = (float)((float)0 * 65536.0) + (float)LOBYTE(v173);
            v62 = v71 + v71;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v10[1], 0);
g4_m128_lane<float>(v63, 0) =g4_m128_lane<float>(v63, 0) +g4_m128_lane<float>(v10[1], 2);
g4_m128_raw(v65) =g4_m128_lane<uint32_t>(*(v10), 0);
g4_m128_lane<float>(v65, 0) =g4_m128_lane<float>(v65, 0) +g4_m128_lane<float>(*(v10), 2);
            v64 = (float)((float)((float)0 * 65536.0) + (float)LOBYTE(v172))
                + (float)((float)((float)0 * 65536.0) + (float)LOBYTE(v172));
            goto LABEL_43;
          case 22:
            v61 = 999;
            v72 = (float)0 * 65536.0;
g4_m128_raw(v65) =g4_m128_lane<uint32_t>(*(v10), 0);
g4_m128_lane<float>(v65, 0) =g4_m128_lane<float>(v65, 0) -g4_m128_lane<float>(*(v10), 2);
            v62 = (float)((float)(v72 + (float)LOBYTE(v173)) + (float)(v72 + (float)LOBYTE(v173))) - 255.0;
            v64 = (float)((float)(v72 + (float)LOBYTE(v172)) + (float)(v72 + (float)LOBYTE(v172))) - 255.0;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v10[1], 0);
g4_m128_lane<float>(v63, 0) =g4_m128_lane<float>(v63, 0) -g4_m128_lane<float>(v10[1], 2);
            goto LABEL_43;
          case 23:
            v61 = 999;
            v73 = (float)((float)0 * 65536.0) + (float)LOBYTE(v173);
            v62 = v73 + v73;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v10[1], 0);
g4_m128_lane<float>(v63, 0) =g4_m128_lane<float>(v63, 0) +g4_m128_lane<float>(v10[1], 1);
g4_m128_raw(v65) =g4_m128_lane<uint32_t>(*(v10), 0);
g4_m128_lane<float>(v65, 0) =g4_m128_lane<float>(v65, 0) +g4_m128_lane<float>(*(v10), 1);
            v64 = (float)((float)((float)0 * 65536.0) + (float)LOBYTE(v172))
                + (float)((float)((float)0 * 65536.0) + (float)LOBYTE(v172));
            goto LABEL_43;
          case 24:
            v61 = 999;
            v74 = (float)0 * 65536.0;
g4_m128_raw(v65) =g4_m128_lane<uint32_t>(*(v10), 0);
g4_m128_lane<float>(v65, 0) =g4_m128_lane<float>(v65, 0) -g4_m128_lane<float>(*(v10), 1);
            v62 = (float)((float)(v74 + (float)LOBYTE(v173)) + (float)(v74 + (float)LOBYTE(v173))) - 255.0;
            v64 = (float)((float)(v74 + (float)LOBYTE(v172)) + (float)(v74 + (float)LOBYTE(v172))) - 255.0;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v10[1], 0);
g4_m128_lane<float>(v63, 0) =g4_m128_lane<float>(v63, 0) -g4_m128_lane<float>(v10[1], 1);
            goto LABEL_43;
          case 25:
            v61 = 999;
            v75 = (float)0 * 65536.0;
g4_m128_raw(v65) =g4_m128_lane<uint32_t>(*(v10), 0);
g4_m128_lane<float>(v65, 0) = (float)(g4_m128_lane<float>(v65, 0) +g4_m128_lane<float>(*(v10), 1)) +g4_m128_lane<float>(*(v10), 2);
            v62 = (float)(v75 + (float)LOBYTE(v173)) * 3.0;
            v64 = (float)(v75 + (float)LOBYTE(v172)) * 3.0;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v10[1], 0);
g4_m128_lane<float>(v63, 0) = (float)(g4_m128_lane<float>(v63, 0) +g4_m128_lane<float>(v10[1], 1)) +g4_m128_lane<float>(v10[1], 2);
            goto LABEL_43;
          case 26:
            v61 = 999;
g4_m128_raw(v65) =g4_m128_lane<uint32_t>(*(v10), 0);
            v62 = (float)((float)((float)((float)0 * 65536.0) + (float)LOBYTE(v173)) * 3.0) - 255.0;
            v64 = (float)((float)((float)((float)0 * 65536.0) + (float)LOBYTE(v172)) * 3.0) - 255.0;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v10[1], 0);
g4_m128_lane<float>(v65, 0) = (float)(g4_m128_lane<float>(v65, 0) +g4_m128_lane<float>(*(v10), 1)) -g4_m128_lane<float>(*(v10), 2);
g4_m128_lane<float>(v63, 0) = (float)(g4_m128_lane<float>(v63, 0) +g4_m128_lane<float>(v10[1], 1)) -g4_m128_lane<float>(v10[1], 2);
            goto LABEL_43;
          case 27:
            v61 = 999;
g4_m128_raw(v65) =g4_m128_lane<uint32_t>(*(v10), 0);
            v62 = (float)((float)((float)((float)0 * 65536.0) + (float)LOBYTE(v173)) * 3.0) - 255.0;
            v64 = (float)((float)((float)((float)0 * 65536.0) + (float)LOBYTE(v172)) * 3.0) - 255.0;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v10[1], 0);
g4_m128_lane<float>(v65, 0) = (float)(g4_m128_lane<float>(v65, 0) -g4_m128_lane<float>(*(v10), 1)) +g4_m128_lane<float>(*(v10), 2);
g4_m128_lane<float>(v63, 0) = (float)(g4_m128_lane<float>(v63, 0) -g4_m128_lane<float>(v10[1], 1)) +g4_m128_lane<float>(v10[1], 2);
            goto LABEL_43;
          case 28:
            v61 = 999;
g4_m128_raw(v65) =g4_m128_lane<uint32_t>(*(v10), 0);
            v62 = (float)((float)((float)((float)0 * 65536.0) + (float)LOBYTE(v173)) * 3.0) - 510.0;
            v64 = (float)((float)((float)((float)0 * 65536.0) + (float)LOBYTE(v172)) * 3.0) - 510.0;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v10[1], 0);
g4_m128_lane<float>(v65, 0) = (float)(g4_m128_lane<float>(v65, 0) -g4_m128_lane<float>(*(v10), 1)) -g4_m128_lane<float>(*(v10), 2);
g4_m128_lane<float>(v63, 0) = (float)(g4_m128_lane<float>(v63, 0) -g4_m128_lane<float>(v10[1], 1)) -g4_m128_lane<float>(v10[1], 2);
LABEL_43:
            v66 = 0;
            v67 = LOBYTE(v171);
            v68 = (char *)v174 + 4;
            goto LABEL_44;
          case 32:
          case 33:
          case 34:
            v61 = result - 32;
            v66 = 0;
            v68 = (char *)v174 + 3;
g4_m128_raw(v65) =g4_m128_lane<uint32_t>(*(v10), v61);
            v67 = LOBYTE(v172);
            v64 = (float)((float)0 * 65536.0) + (float)LOBYTE(v173);
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v10[1], v61);
            v62 = v64 + 1.0;
            if ( v64 <=g4_m128_lane<float>(v63, 0) )
              goto LABEL_58;
            goto LABEL_45;
          case 35:
          case 36:
          case 37:
            v61 = result - 35;
            v62 = (float)((float)0 * 65536.0) + (float)LOBYTE(v173);
g4_m128_raw(v63) = *((unsigned int *)&v10[-7] + result - 3);
            v66 = (LOBYTE(v171) << 8) + *((uint8_t *)v174 + 4);
            v64 = (float)((float)0 * 65536.0) + (float)LOBYTE(v172);
g4_m128_raw(v65) = *((unsigned int *)&v10[-8] + result - 3);
            v67 = (*((uint8_t *)v174 + 5) << 8) + *((uint8_t *)v174 + 6);
            v68 = (char *)v174 + 7;
LABEL_44:
            if ( v64 <=g4_m128_lane<float>(v63, 0) )
              goto LABEL_58;
LABEL_45:
            if ( v64 <=g4_m128_lane<float>(v65, 0) )
            {
LABEL_58:
              v174 = &v68[v67];
              if (g4_m128_lane<float>(v65, 0) <= v62 ||g4_m128_lane<float>(v63, 0) <= v62 )
              {
                v76 = v65;
                v77 = v63;
g4_m128_lane<float>(v76, 0) =g4_m128_lane<float>(v65, 0) - v62;
g4_m128_lane<float>(v77, 0) =g4_m128_lane<float>(v63, 0) - v62;
                v184 =g4_m128_lane<float>(*(v10), 0);
                v78 = v63;
                v185 =g4_m128_lane<int32_t>(*(v10), 1);
                v186 =g4_m128_lane<int32_t>(*(v10), 2);
                v187 =g4_m128_lane<int32_t>(*(v10), 3);
                v21 = (float)(g4_m128_lane<float>(v63, 0) - v62) <= (float)(g4_m128_lane<float>(v65, 0) - v62);
                v188 = v10[1];
g4_m128_lane<float>(v65, 0) =g4_m128_lane<float>(v65, 0) - v64;
g4_m128_lane<float>(v78, 0) =g4_m128_lane<float>(v63, 0) - v64;
                if ( v21 )
                {
                  if ( (float)(g4_m128_lane<float>(v65, 0) *g4_m128_lane<float>(v78, 0)) < 0.0 )
                  {
                    v143 = _mm_shuffle_ps(v65, v65, 0);
                    v188 = _mm_add_ps(
                             _mm_mul_ps(
                               _mm_div_ps(v143, _mm_sub_ps(v143, _mm_shuffle_ps(v78, v78, 0))),
                               _mm_sub_ps(v10[1], *v10)),
                             *v10);
                  }
                  v172 = *(float *)&v67;
                  v173 = *(float *)&v61;
                  LODWORD(v165) = 0;
                  v166 =g4_m128_lane<float>(v63, 0) - v62;
                  v167 =g4_m128_lane<float>(v76, 0);
                  v171 = v62;
                  hkpMoppLongRayVirtualMachine::queryRayOnTree(LODWORD(v170), v169, (uint8_t *)(v174), (__m128 *)(&v184), v168);
                  v119 = LODWORD(v173);
                  v120 = v172;
                  v121 = v171;
                  if ( *(float *)&v165 > (float)(v167 * v166) )
                  {
                    v142 = _mm_shuffle_ps(g4_m128_from<__m128>(LODWORD(v167)), g4_m128_from<__m128>(LODWORD(v167)), 0);
                    *v10 = _mm_add_ps(
                             _mm_mul_ps(
                               _mm_div_ps(
                                 v142,
                                 _mm_sub_ps(v142, _mm_shuffle_ps(g4_m128_from<__m128>(LODWORD(v166)), g4_m128_from<__m128>(LODWORD(v166)), 0))),
                               _mm_sub_ps(v10[1], *v10)),
                             *v10);
                  }
                  v122 = *(float *)(LODWORD(v170) + 84);
                  if ( v122 < 1.0 )
                  {
                    v123 = *(float *)(LODWORD(v170) + 36);
                    v173 = v170;
                    v124 = *(float *)(LODWORD(v170) + 44);
                    v125 = *(float *)(LODWORD(v170) + 32);
                    v126 = (float)((float)(*(float *)(LODWORD(v170) + 52) - v123) * v122) + v123;
                    v127 = (float)((float)(*(float *)(LODWORD(v170) + 56) - *(float *)(LODWORD(v170) + 40)) * v122)
                         + *(float *)(LODWORD(v170) + 40);
                    v128 = *(float *)(LODWORD(v170) + 60);
                    v172 = *(float *)(LODWORD(v170) + 16);
                    v129 = (float)((float)(v128 - v124) * v122) + v124;
                    v130 = (float *)LODWORD(v172);
                    v131 = (float)((float)((float)(*(float *)(LODWORD(v170) + 48) - v125) * v122) + v125)
                         - *(float *)(LODWORD(v172) + 16);
g4_m128_lane<float>(v10[1], 0) = v131;
                    v132 = v126 - v130[5];
g4_m128_lane<float>(v10[1], 1) = v132;
                    v133 = v127 - v130[6];
g4_m128_lane<float>(v10[1], 2) = v133;
                    v134 = v129 - v130[7];
                    result = (int)(uintptr_t)(v169);
g4_m128_lane<float>(v10[1], 3) = v134;
                    v135 = *(float *)(result + 20);
                    v136 = v131 * v135;
                    v137 = v132 * v135;
                    v138 = v133 * v135;
                    v139 = v134 * v135;
g4_m128_lane<float>(v10[1], 0) = v136;
g4_m128_lane<float>(v10[1], 1) = v137;
g4_m128_lane<float>(v10[1], 2) = v138;
g4_m128_lane<float>(v10[1], 3) = v139;
g4_m128_lane<float>(v10[1], 0) = v136 - *(float *)result;
g4_m128_lane<float>(v10[1], 1) = v137 - *(float *)(result + 4);
g4_m128_lane<float>(v10[1], 2) = v138 - *(float *)(result + 8);
g4_m128_lane<float>(v10[1], 3) = v139 - *(float *)(result + 12);
                    if ( v119 <= 2 &&g4_m128_lane<float>(v10[1], v119) > v121 )
                      return result;
                  }
                  v174 = (char *)v174 + v66 - LODWORD(v120);
                }
                else
                {
                  if ( (float)(g4_m128_lane<float>(v76, 0) *g4_m128_lane<float>(v77, 0)) < 0.0 )
                  {
                    v141 = _mm_shuffle_ps(v76, v76, 0);
                    v188 = _mm_add_ps(
                             _mm_mul_ps(
                               _mm_div_ps(v141, _mm_sub_ps(v141, _mm_shuffle_ps(v77, v77, 0))),
                               _mm_sub_ps(v10[1], *v10)),
                             *v10);
                  }
                  v173 = *(float *)&v61;
                  v166 = 0.0;
                  v167 =g4_m128_lane<float>(v63, 0) - v64;
                  v171 =g4_m128_lane<float>(v65, 0);
                  v172 = v64;
                  hkpMoppLongRayVirtualMachine::queryRayOnTree(
                    LODWORD(v170),
                    v169,
                    (uint8_t *)((char *)v174 + v66 - v67),
                    (__m128 *)(&v184),
                    v168);
                  v79 = LODWORD(v173);
                  v80 = v172;
                  if ( v166 > (float)(v171 * v167) )
                  {
                    v140 = _mm_shuffle_ps(g4_m128_from<__m128>(LODWORD(v171)), g4_m128_from<__m128>(LODWORD(v171)), 0);
                    *v10 = _mm_add_ps(
                             _mm_mul_ps(
                               _mm_div_ps(
                                 v140,
                                 _mm_sub_ps(v140, _mm_shuffle_ps(g4_m128_from<__m128>(LODWORD(v167)), g4_m128_from<__m128>(LODWORD(v167)), 0))),
                               _mm_sub_ps(v10[1], *v10)),
                             *v10);
                  }
                  v81 = *(float *)(LODWORD(v170) + 84);
                  if ( v81 < 1.0 )
                  {
                    v82 = (float)((float)(*(float *)(LODWORD(v170) + 52) - *(float *)(LODWORD(v170) + 36)) * v81)
                        + *(float *)(LODWORD(v170) + 36);
                    v83 = (float)((float)(*(float *)(LODWORD(v170) + 56) - *(float *)(LODWORD(v170) + 40)) * v81)
                        + *(float *)(LODWORD(v170) + 40);
                    v84 = *(float **)(LODWORD(v170) + 16);
                    v85 = (float)((float)(*(float *)(LODWORD(v170) + 60) - *(float *)(LODWORD(v170) + 44)) * v81)
                        + *(float *)(LODWORD(v170) + 44);
                    v86 = (float)((float)((float)(*(float *)(LODWORD(v170) + 48) - *(float *)(LODWORD(v170) + 32)) * v81)
                                + *(float *)(LODWORD(v170) + 32))
                        - v84[4];
g4_m128_lane<float>(v10[1], 0) = v86;
                    v87 = v82 - v84[5];
g4_m128_lane<float>(v10[1], 1) = v87;
                    v88 = v83 - v84[6];
g4_m128_lane<float>(v10[1], 2) = v88;
                    v89 = v85 - v84[7];
                    result = (int)(uintptr_t)(v169);
g4_m128_lane<float>(v10[1], 3) = v89;
                    v90 = *(float *)(result + 20);
                    v91 = v86 * v90;
                    v92 = v87 * v90;
                    v93 = v88 * v90;
                    v94 = v89 * v90;
g4_m128_lane<float>(v10[1], 0) = v91;
g4_m128_lane<float>(v10[1], 1) = v92;
g4_m128_lane<float>(v10[1], 2) = v93;
g4_m128_lane<float>(v10[1], 3) = v94;
g4_m128_lane<float>(v10[1], 0) = v91 - *(float *)result;
g4_m128_lane<float>(v10[1], 1) = v92 - *(float *)(result + 4);
g4_m128_lane<float>(v10[1], 2) = v93 - *(float *)(result + 8);
g4_m128_lane<float>(v10[1], 3) = v94 - *(float *)(result + 12);
                    if ( v79 <= 2 && v80 >g4_m128_lane<float>(v10[1], v79) )
                      return result;
                  }
                }
              }
LABEL_79:
              v32 = (char *)v174;
            }
            else
            {
              v32 = &v68[v66];
              v174 = v32;
            }
LABEL_27:
            v8 = *v32;
LABEL_23:
            v33 = v32[1];
            v34 = v32[2];
            LOBYTE(v171) = v32[3];
            result = v8;
            break;
          case 38:
          case 39:
          case 40:
            v95 = result - 38;
            v174 = (char *)v174 + 3;
            v96 = (float)((float)0 * 65536.0) + (float)LOBYTE(v173);
            v97 = (float)((float)0 * 65536.0) + (float)LOBYTE(v172);
            goto LABEL_71;
          case 41:
          case 42:
          case 43:
            v95 = result - 41;
            v109 = *(float *)(LODWORD(v170) + 20);
            v110 = (uint8_t *)v174;
            v174 = (char *)v174 + 7;
            v111 = (float)(LOBYTE(v171) + (LOBYTE(v172) << 8) + (LOBYTE(v173) << 16)) * v109;
            v112 = (float)(v110[6] + (v110[4] << 16) + (v110[5] << 8)) * v109;
            v113 = v169[5];
            v114 = v111 * v113;
            v115 = v112 * v113;
            v116 = v169[v95];
            v96 = v114 - v116;
            v97 = v115 - v116;
LABEL_71:
            result = (int)(uintptr_t)(g4_m128_lane<int32_t>(*(v10), v95));
g4_m128_raw(v98) = *(unsigned int *)result;
g4_m128_raw(v99) = *(unsigned int *)(result + 16);
            if (g4_m128_lane<float>(v99, 0) <=g4_m128_lane<float>(v98, 0) )
            {
              if ( v96 >g4_m128_lane<float>(v98, 0) ||g4_m128_lane<float>(v99, 0) > v97 )
                return result;
              v100 = 0;
              v101 = 1;
            }
            else
            {
              if ( v96 >g4_m128_lane<float>(v99, 0) ||g4_m128_lane<float>(v98, 0) > v97 )
                return result;
              v100 = 1;
              v101 = 0;
            }
            v102 = v98;
            v103 = v99;
g4_m128_lane<float>(v102, 0) =g4_m128_lane<float>(v98, 0) - v97;
g4_m128_lane<float>(v103, 0) =g4_m128_lane<float>(v99, 0) - v97;
            v166 =g4_m128_lane<float>(v10[1], 0);
            v104 =g4_m128_lane<uint32_t>(*(v10), 2);
            v172 =g4_m128_lane<float>(v10[1], 1);
            v105 =g4_m128_lane<uint32_t>(*(v10), 3);
            v167 =g4_m128_lane<float>(v10[1], 2);
            v171 =g4_m128_lane<float>(v10[1], 3);
            v106 = (float)(g4_m128_lane<float>(v98, 0) - v97) * (float)(g4_m128_lane<float>(v99, 0) - v97);
            v107 = 0.0;
            v173 =g4_m128_lane<float>(*(v10), 0);
g4_m128_raw(v108) =g4_m128_lane<uint32_t>(*(v10), 1);
            if ( v106 < 0.0 )
            {
              v163 = 0.0;
              _mm_storel_ps(&v164, _mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v173)), v108));
              v151 = _mm_shuffle_ps(v102, v102, 0);
g4_m128_lane<uint64_t>(v152, 0) =g4_m128_lane<uint64_t>(_mm_loadl_ps(&v164), 0);
              v153 = v100;
g4_m128_lane<uint64_t>(v152, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(v104)), g4_m128_from<__m128>(_mm_cvtsi32_si128(v105))), 0);
              v154 = _mm_div_ps(v151, _mm_sub_ps(v151, _mm_shuffle_ps(v103, v103, 0)));
              _mm_storel_ps(&v164, _mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v166)), g4_m128_from<__m128>(LODWORD(v172))));
              v155 = _mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v167)), g4_m128_from<__m128>(LODWORD(v171)));
g4_m128_lane<uint64_t>(v156, 0) =g4_m128_lane<uint64_t>(_mm_loadl_ps(&v164), 0);
              _mm_storel_ps(&v165, v155);
g4_m128_lane<uint64_t>(v156, 1) =g4_m128_lane<uint64_t>(v155, 0);
              v107 = v163;
              v157 = _mm_add_ps(_mm_mul_ps(v154, _mm_sub_ps(v156, v152)), v152);
              _mm_storel_ps((double *)g4_m128_ptr<uint64_t>(v10[v153]), v157);
              _mm_storeh_ps((double *)&g4_m128_lane<uint64_t>(v10[v153], 1), v157);
            }
g4_m128_lane<float>(v98, 0) =g4_m128_lane<float>(v98, 0) - v96;
g4_m128_lane<float>(v99, 0) =g4_m128_lane<float>(v99, 0) - v96;
            if ( v107 > (float)(g4_m128_lane<float>(v98, 0) *g4_m128_lane<float>(v99, 0)) )
            {
              v146 = _mm_shuffle_ps(v98, v98, 0);
g4_m128_lane<uint64_t>(v147, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v173)), v108), 0);
g4_m128_lane<uint64_t>(v147, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(v104)), g4_m128_from<__m128>(_mm_cvtsi32_si128(v105))), 0);
              v148 = v101;
g4_m128_lane<uint64_t>(v149, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v166)), g4_m128_from<__m128>(LODWORD(v172))), 0);
g4_m128_lane<uint64_t>(v149, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v167)), g4_m128_from<__m128>(LODWORD(v171))), 0);
              v150 = _mm_add_ps(
                       _mm_mul_ps(
                         _mm_div_ps(v146, _mm_sub_ps(v146, _mm_shuffle_ps(v99, v99, 0))),
                         _mm_sub_ps(v149, v147)),
                       v147);
              _mm_storel_ps((double *)g4_m128_ptr<uint64_t>(v10[v148]), v150);
              _mm_storeh_ps((double *)&g4_m128_lane<uint64_t>(v10[v148], 1), v150);
            }
            goto LABEL_79;
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
            v13 = result - 48;
            goto LABEL_7;
          case 80:
            v13 = LOBYTE(v173);
            goto LABEL_7;
          case 81:
            v13 = LOBYTE(v172) + (LOBYTE(v173) << 8);
            goto LABEL_7;
          case 82:
            v13 = (LOBYTE(v172) << 8) + LOBYTE(v171) + (LOBYTE(v173) << 16);
            goto LABEL_7;
          case 83:
            v13 = (LOBYTE(v171) << 8) + *((uint8_t *)v174 + 4) + (LOBYTE(v172) << 16) + (LOBYTE(v173) << 24);
LABEL_7:
            v14 = *(int (****)(char *))(LODWORD(v170) + 68);
            v15 = (*((uint32_t *)v169 + 6) + v13) | *(uint32_t *)(LODWORD(v170) + 104) & (v168 >> 9 << 8);
            if ( v14 != nullptr )
            {
              v16 = *v14;
              v162 = v15;
              v17 = *(uint32_t *)(LODWORD(v170) + 100);
              v159 = v14;
              v161 = v17;
              v18 = LODWORD(v170) + 32;
              v158[77] = (uint32_t)(uintptr_t)(&v175);
              v160 = LODWORD(v170) + 32;
              result = (*v16)(&v175);
              if ( v175 == 0 )
                return result;
            }
            else
            {
              v18 = LODWORD(v170) + 32;
            }
            v173 = COERCE_FLOAT(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
            v19 = *(hkLifoAllocator::Self **)LODWORD(v173);
            v20 = *(char **)(*(uint32_t *)LODWORD(v173) + 12);
            v21 = *(uint32_t *)(*(uint32_t *)LODWORD(v173) + 8) <= 511;
            v174 = v20;
            if ( v21 || (unsigned int)(uintptr_t)(v20 + 512) > *((uint32_t *)v19 + 4) )
            {
              v174 = (void *)hkLifoAllocator::allocateFromNewSlab(v19, 512);
              v22 = v174;
            }
            else
            {
              *((uint32_t *)v19 + 3) = (uint32_t)(uintptr_t)(v20 + 512);
              v22 = v174;
            }
            *(float *)&v23 = COERCE_FLOAT(
                               (*(int (**)(uint32_t, int, void *))(**(uint32_t **)(LODWORD(v170) + 100) + 24))(
                                 *(uint32_t *)(LODWORD(v170) + 100),
                                 v15,
                                 v22));
            v24 = v170;
            v25 = *(uint32_t *)(LODWORD(v170) + 88);
            if ( v25 != 0 )
            {
              ++*(uint32_t *)(v25 + 64);
              v26 = *(uint32_t *)(LODWORD(v24) + 88);
              v172 = COERCE_FLOAT(&v175);
              v27 = *(uint32_t *)v23;
              v159 = (int (***)(char *))v23;
              v161 = v26;
              v160 = v18;
              (*(void (**)(char *))(v27 + 28))(&v175);
              v28 = v170;
              v29 = v175;
              --*(uint32_t *)(*(uint32_t *)(LODWORD(v170) + 88) + 64);
              if ( v29 != 0 )
              {
                v30 = *(uint32_t *)(LODWORD(v28) + 88);
                *(uint8_t *)(LODWORD(v28) + 80) = 1;
                *(uint32_t *)(LODWORD(v28) + 84) = *(uint32_t *)(v30 + 16);
                *(uint32_t *)(v30 + 4 * *(uint32_t *)(v30 + 64) + 32) = v15;
              }
            }
            else
            {
              v187 = *(uint32_t *)(LODWORD(v170) + 96);
              v144 = *(uint32_t *)(v187 + 8);
              v185 = v15;
              v145 = v170;
              v186 = v144;
              v184 = *(float *)&v23;
              G4_VCALL<void>(v23, 32, v18, &v184, *(uint32_t *)(LODWORD(v170) + 92));
              *(uint32_t *)(LODWORD(v145) + 84) = *(uint32_t *)(*(uint32_t *)(LODWORD(v145) + 92) + 4);
            }
            result = *(uint32_t *)LODWORD(v173);
            if ( *(int *)(*(uint32_t *)LODWORD(v173) + 8) <= 511
              || *(void **)(result + 12) != (char *)v174 + 512
              || v174 == *(void **)(result + 20) )
            {
              return (int)(uintptr_t)(hkLifoAllocator::slowBlockFree((hkLifoAllocator::Self *)result, (char *)v174, 512));
            }
            *(uint32_t *)(result + 12) = (uint32_t)(uintptr_t)(v174);
            return result;
          case 96:
          case 97:
          case 98:
          case 99:
            v174 = (char *)v174 + 2;
            v158[result + 8] = LOBYTE(v173);
            goto LABEL_86;
          case 100:
          case 101:
          case 102:
          case 103:
            v174 = (char *)v174 + 3;
            v158[result + 4] = LOBYTE(v172) + (LOBYTE(v173) << 8);
            goto LABEL_86;
          case 104:
          case 105:
          case 106:
          case 107:
            v118 = (uint8_t *)v174;
            v174 = (char *)v174 + 5;
            v158[result] = v118[4] + (LOBYTE(v171) << 8) + (LOBYTE(v172) << 16) + (LODWORD(v173) << 24);
LABEL_86:
            if ( v169 != &v176 )
            {
              v176 = *v169;
              v177 = v169[1];
              v178 = v169[2];
              v179 = v169[3];
              v117 = v169[5];
              v180 = *((uint32_t *)v169 + 4);
              v181 = v117;
              v182 = *((uint32_t *)v169 + 6);
            }
            v173 = COERCE_FLOAT(&v176);
            v8 = *(uint8_t *)v174;
            v33 = *((uint8_t *)v174 + 1);
            v34 = *((uint8_t *)v174 + 2);
            LOBYTE(v171) = *((uint8_t *)v174 + 3);
            v169 = &v176;
            result = v8;
            break;
          case 112:
            v168 = (LOBYTE(v171) << 8) + (LOBYTE(v172) << 16) + (LODWORD(v173) << 24) + *((uint8_t *)v174 + 4);
            v31 = v168;
LABEL_22:
            v32 = (char *)(*(uint32_t *)(*(uint32_t *)(LODWORD(v170) + 16) + 32) + v31);
            v174 = v32;
            v8 = *v32;
            goto LABEL_23;
          default:
            abort();
        }
      }
      LOBYTE(v173) = v33;
      LOBYTE(v172) = v34;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppLongRayVirtualMachine::queryLongRay  (binary VA: 0x178d830)
// Original: hkpMoppLongRayVirtualMachine::queryLongRay
// ----------------------------------------------------------------------------
uint8_t * hkpMoppLongRayVirtualMachine::queryLongRay(uint8_t *a1, float a2, int a3, int a4, int a5, int a6)
{
  float v6; // xmm1_4
  uint8_t *v7;
  float v8; // xmm7_4
  __m128i v9;
  float v10; // xmm1_4
  float v11; // xmm5_4
  float v12; // xmm6_4
  float v13;
  float v14; // xmm4_4
  float v15; // xmm2_4
  float v16; // xmm7_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm5_4
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  typedef float _g4_t_v26;
  typedef __m128 _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32[12];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v26)) > _g4_s0 ? (12u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v27)) > _g4_s1 ? (16u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v28)) > _g4_s2 ? (32u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v29)) > _g4_s3 ? (36u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v30)) > _g4_s4 ? (40u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v31)) > _g4_s5 ? (44u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v32)) > _g4_s6 ? (48u + sizeof(_g4_t_v32)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);

  *(uint32_t *)(LODWORD(a2) + 84) = 1065353216;
  *(uint32_t *)(LODWORD(a2) + 100) = a3;
  *(uint32_t *)(LODWORD(a2) + 16) = a4;
  *(uint32_t *)(LODWORD(a2) + 88) = a6;
  v6 = 1.0 / *(float *)(a4 + 28);
  memset(v32, 0, 16);
  v7 = *(uint8_t **)(a4 + 32);
  *(float *)(LODWORD(a2) + 20) = v6;
  v8 = *(float *)(a4 + 20);
  v9 = _mm_cvtsi32_si128(*(uint32_t *)(a5 + 4));
  *(float *)g4_m128_ptr<int32_t>(v9) = *(float *)g4_m128_ptr<int32_t>(v9) - v8;
  v26 = *(float *)(a4 + 16);
  v10 = *(float *)(a4 + 24);
  v11 = *(float *)(a4 + 28);
  v12 = *(float *)(a5 + 8) - v10;
  v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
g4_m128_lane<int32_t>(v9, 0) = *(uint32_t *)(a5 + 16);
  v14 = *(float *)(a5 + 12) - v11;
  v15 = *(float *)(a5 + 20) - v8;
  v16 = *(float *)(a5 + 24) - v10;
  v17 = 0.000015258789f * v11;
  v18 = *(float *)(a5 + 28) - v11;
  v19 = *(float *)a5 - v26;
  v32[5] = v17;
g4_m128_lane<float>(v27, 0) = v19 * v17;
  *(uint32_t *)(LODWORD(a2) + 32) = *(uint32_t *)a5;
  *(uint32_t *)(LODWORD(a2) + 36) = *(uint32_t *)(a5 + 4);
  *(uint32_t *)(LODWORD(a2) + 40) = *(uint32_t *)(a5 + 8);
  *(uint32_t *)(LODWORD(a2) + 44) = *(uint32_t *)(a5 + 12);
  *(uint32_t *)(LODWORD(a2) + 48) = *(uint32_t *)(a5 + 16);
  *(uint32_t *)(LODWORD(a2) + 52) = *(uint32_t *)(a5 + 20);
  *(uint32_t *)(LODWORD(a2) + 56) = *(uint32_t *)(a5 + 24);
  v20 = *(uint32_t *)(a5 + 28);
  v32[6] = 0.0;
  *(uint32_t *)(LODWORD(a2) + 60) = v20;
  v21 = *(uint32_t *)(a5 + 32);
g4_m128_lane<float>(v27, 2) = v12 * v17;
  *(uint32_t *)(LODWORD(a2) + 64) = v21;
g4_m128_lane<float>(v27, 3) = v14 * v17;
  v22 = *(uint32_t *)(a5 + 36);
g4_m128_lane<float>(v27, 1) = v13 * v17;
  *(uint32_t *)(LODWORD(a2) + 68) = v22;
  v28 = (float)(*(float *)g4_m128_ptr<int32_t>(v9) - v26) * v17;
  v23 = *(uint32_t *)(a5 + 40);
  v29 = v15 * v17;
  *(uint32_t *)(LODWORD(a2) + 72) = v23;
  v30 = v16 * v17;
  v24 = *(uint32_t *)(a5 + 44);
  v31 = v18 * v17;
  *(uint32_t *)(LODWORD(a2) + 76) = v24;
  *(uint8_t *)(LODWORD(a2) + 80) = 0;
  v32[4] = 0.0;
  v32[7] = 0.0;
  *(uint32_t *)(LODWORD(a2) + 104) = -(*v7 == 13);
  hkpMoppLongRayVirtualMachine::queryRayOnTree(a2, v32, v7, &v27, 0);
  *a1 = *(uint8_t *)(LODWORD(a2) + 80);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppLongRayVirtualMachine::queryLongRay  (binary VA: 0x178da10)
// Original: hkpMoppLongRayVirtualMachine::queryLongRay
// ----------------------------------------------------------------------------
int hkpMoppLongRayVirtualMachine::queryLongRay(float a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // xmm0_4
  uint8_t *v7;
  float v8; // xmm7_4
  float v9; // xmm5_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm6_4
  float v15; // xmm7_4
  float v16; // xmm4_4
  float v17; // xmm1_4
  float v18; // xmm5_4
  float v19; // xmm3_4
  int v20;
  int v21;
  int v22;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef __m128 _g4_t_v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v24)) > _g4_s0 ? (8u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v26)) > _g4_s2 ? (16u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v27)) > _g4_s3 ? (32u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v28)) > _g4_s4 ? (36u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v29)) > _g4_s5 ? (40u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v30)) > _g4_s6 ? (44u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v31)) > _g4_s7 ? (48u + sizeof(_g4_t_v31)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);

  *(uint32_t *)(LODWORD(a1) + 100) = a2;
  *(uint32_t *)(LODWORD(a1) + 96) = a5;
  *(uint32_t *)(LODWORD(a1) + 88) = 0;
  *(uint32_t *)(LODWORD(a1) + 92) = a6;
  v6 = *(uint32_t *)(a6 + 4);
  *(uint32_t *)(LODWORD(a1) + 16) = a3;
  *(uint32_t *)(LODWORD(a1) + 84) = v6;
  v7 = *(uint8_t **)(a3 + 32);
  memset(v31, 0, 16);
  *(float *)(LODWORD(a1) + 20) = 1.0 / *(float *)(a3 + 28);
  v8 = *(float *)(a3 + 20);
  v9 = *(float *)(a3 + 28);
  v10 = *(float *)(a4 + 4) - v8;
  v11 = 0.000015258789f * v9;
  v25 = *(float *)(a3 + 16);
  v31[5] = 0.000015258789f * v9;
  v24 = v10;
  v12 = *(float *)(a3 + 24);
  v13 = *(float *)(a4 + 20) - v8;
  v14 = *(float *)(a4 + 8) - v12;
  v15 = *(float *)(a4 + 24) - v12;
  v16 = *(float *)(a4 + 12) - v9;
  v17 = *(float *)(a4 + 28) - v9;
  v18 = *(float *)a4 - v25;
  v19 = *(float *)(a4 + 16);
  *(uint32_t *)(LODWORD(a1) + 32) = *(uint32_t *)a4;
  *(uint32_t *)(LODWORD(a1) + 36) = *(uint32_t *)(a4 + 4);
  *(uint32_t *)(LODWORD(a1) + 40) = *(uint32_t *)(a4 + 8);
  *(uint32_t *)(LODWORD(a1) + 44) = *(uint32_t *)(a4 + 12);
g4_m128_lane<float>(v26, 0) = v18 * v11;
  *(uint32_t *)(LODWORD(a1) + 48) = *(uint32_t *)(a4 + 16);
  *(uint32_t *)(LODWORD(a1) + 52) = *(uint32_t *)(a4 + 20);
g4_m128_lane<float>(v26, 2) = v14 * v11;
  v20 = *(uint32_t *)(a4 + 24);
g4_m128_lane<float>(v26, 3) = v16 * v11;
  *(uint32_t *)(LODWORD(a1) + 56) = v20;
g4_m128_lane<float>(v26, 1) = v24 * v11;
  v21 = *(uint32_t *)(a4 + 28);
  v27 = (float)(v19 - v25) * v11;
  v28 = v13 * v11;
  v29 = v15 * v11;
  v30 = v17 * v11;
  *(uint32_t *)(LODWORD(a1) + 60) = v21;
  v22 = *(uint32_t *)(a4 + 32);
  v31[6] = 0.0;
  *(uint32_t *)(LODWORD(a1) + 64) = v22;
  *(uint32_t *)(LODWORD(a1) + 68) = *(uint32_t *)(a4 + 36);
  *(uint32_t *)(LODWORD(a1) + 72) = *(uint32_t *)(a4 + 40);
  *(uint32_t *)(LODWORD(a1) + 76) = *(uint32_t *)(a4 + 44);
  *(uint8_t *)(LODWORD(a1) + 80) = 0;
  v31[4] = 0.0;
  v31[7] = 0.0;
  *(uint32_t *)(LODWORD(a1) + 104) = -(*v7 == 13);
  return hkpMoppLongRayVirtualMachine::queryRayOnTree(a1, v31, v7, &v26, 0);
}


