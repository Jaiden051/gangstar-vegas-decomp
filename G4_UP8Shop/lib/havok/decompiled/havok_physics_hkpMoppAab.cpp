#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMoppAab.h"

// ----------------------------------------------------------------------------
// Function: hkpMoppAabbCastVirtualMachine::queryRayOnTree  (binary VA: 0x17df640)
// Original: hkpMoppAabbCastVirtualMachine::queryRayOnTree
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * hkpMoppAabbCastVirtualMachine::queryRayOnTree(int a1, float *a2, uint8_t *a3, __m128 *a4, int a5)
{
  __m128 *v5;
  uint8_t v6;
  hkLifoAllocator::Self *result;
  int v8;
  int *v9;
  int v10;
  int v11;
  bool v12;
  hkLifoAllocator::Self *v13;
  char *v14;
  bool v15; // cc
  void *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int32_t v22;
  int v23;
  char *v24;
  char v25;
  char v26; // si
  float v27; // xmm2_4
  float v28; // xmm3_4
  float v29; // xmm1_4
  int v30;
  float v31;
  float v32; // xmm0_4
  float v33;
  __m128i v34;
  float v35; // xmm4_4
  float v36; // xmm5_4
  float v37; // xmm6_4
  float v38;
  float v39; // xmm4_4
  float *v40;
  float v41; // xmm2_4
  float v42; // xmm1_4
  float v43; // xmm4_4
  float v44; // xmm1_4
  int v45;
  float v46; // xmm0_4
  int v47;
  int v48;
  float v49; // xmm0_4
  int v50;
  int v51;
  int v52;
  float v53; // xmm0_4
  int v54;
  int v55;
  float v56; // xmm0_4
  float v57; // xmm0_4
  int v58;
  float v59; // xmm0_4
  float v60; // xmm2_4
  __m128 v61;
  float v62; // xmm1_4
  __m128 v63;
  int v64;
  char *v65;
  float v66; // xmm2_4
  float v67; // xmm0_4
  float v68; // xmm0_4
  float v69; // xmm1_4
  float v70; // xmm2_4
  float v71; // xmm0_4
  float v72; // xmm0_4
  float v73; // xmm2_4
  float v74; // xmm0_4
  float v75; // xmm0_4
  float v76; // xmm1_4
  float v77; // xmm2_4
  float v78; // xmm0_4
  float v79; // xmm0_4
  float v80; // xmm2_4
  float v81; // xmm0_4
  float v82; // xmm0_4
  float v83; // xmm1_4
  float v84; // xmm2_4
  float v85; // xmm0_4
  float v86; // xmm0_4
  float v87; // xmm1_4
  float v88; // xmm0_4
  float v89; // xmm0_4
  float v90; // xmm0_4
  float v91; // xmm0_4
  int v92;
  float v93; // xmm0_4
  float v94; // xmm1_4
  float v95; // xmm0_4
  float v96; // xmm2_4
  __m128 v97;
  __m128 v98;
  __m128 v99;
  int v100;
  float v101; // xmm1_4
  int v102;
  float v103; // xmm0_4
  int v104;
  float *v105;
  float *v106;
  float v107; // xmm6_4
  float v108; // xmm4_4
  float v109; // xmm3_4
  float v110; // xmm2_4
  float v111; // xmm5_4
  float v112; // xmm5_4
  float v113; // xmm4_4
  float v114; // xmm3_4
  float v115; // xmm2_4
  float v116; // xmm0_4
  float v117; // xmm5_4
  float v118; // xmm4_4
  float v119; // xmm3_4
  float v120; // xmm2_4
  float v121; // xmm0_4
  char *v122;
  float v123; // xmm2_4
  float v124; // xmm1_4
  float v125; // xmm0_4
  __m128 v126;
  __m128 v127;
  int v128;
  int v129;
  __m128 v130;
  __m128 v131;
  unsigned int v132;
  unsigned int v133;
  float v134; // xmm6_4
  float v135; // xmm0_4
  __m128 v136;
  float v137; // xmm2_4
  uint8_t *v138;
  float v139; // xmm1_4
  float v140; // xmm0_4
  float v141; // xmm2_4
  float v142; // xmm1_4
  float *v143;
  float v144; // xmm0_4
  float v145; // xmm2_4
  float v146; // xmm0_4
  float v147; // xmm0_4
  uint8_t *v148;
  int v149;
  float v150;
  float v151; // xmm2_4
  int v152;
  float v153; // xmm0_4
  float *v154;
  float *v155;
  float v156; // xmm4_4
  float v157; // xmm3_4
  float v158; // xmm1_4
  float v159; // xmm5_4
  float v160; // xmm4_4
  float v161; // xmm3_4
  float v162; // xmm1_4
  float v163; // xmm0_4
  float v164; // xmm5_4
  float v165; // xmm4_4
  float v166; // xmm3_4
  float v167; // xmm1_4
  __m128 v168;
  __m128 v169;
  __m128 v170;
  __m128 v171;
  __m128 v172;
  __m128 v173;
  int v174;
  __m128 v175;
  __m128 v176;
  __m128 v177;
  __m128 v178;
  __m128 v179;
  __m128 v180;
  __m128 v181;
  __m128 v182;
  typedef uint32_t _g4_t_v183[60];
  typedef void *_g4_t_v184;
  typedef int _g4_t_v185;
  typedef void *_g4_t_v186;
  typedef int _g4_t_v187;
  typedef float _g4_t_v188;
  typedef double _g4_t_v189;
  typedef double _g4_t_v190;
  typedef float _g4_t_v191;
  typedef float _g4_t_v192;
  typedef int _g4_t_v193;
  typedef int _g4_t_v194;
  typedef float *_g4_t_v195;
  typedef float _g4_t_v196;
  typedef float _g4_t_v197;
  typedef float _g4_t_v198;
  typedef void *_g4_t_v199;
  typedef char _g4_t_v200;
  typedef float _g4_t_v201;
  typedef int _g4_t_v202;
  typedef int32_t _g4_t_v203;
  typedef int32_t _g4_t_v204;
  typedef __m128 _g4_t_v205;
  typedef float _g4_t_v206;
  typedef float _g4_t_v207;
  typedef float _g4_t_v208;
  typedef float _g4_t_v209;
  typedef float _g4_t_v210;
  typedef float _g4_t_v211;
  typedef float _g4_t_v212;
  typedef float _g4_t_v213;
  typedef float _g4_t_v214;
  typedef char *_g4_t_v215;
  typedef float _g4_t_v216;
  typedef int _g4_t_v217;
  typedef int _g4_t_v218;
  typedef int *_g4_t_v219;
  enum : size_t {
    _g4_s0 = 528u,
    _g4_s1 = (0u + sizeof(_g4_t_v183)) > _g4_s0 ? (0u + sizeof(_g4_t_v183)) : _g4_s0,
    _g4_s2 = (240u + sizeof(_g4_t_v184)) > _g4_s1 ? (240u + sizeof(_g4_t_v184)) : _g4_s1,
    _g4_s3 = (244u + sizeof(_g4_t_v185)) > _g4_s2 ? (244u + sizeof(_g4_t_v185)) : _g4_s2,
    _g4_s4 = (248u + sizeof(_g4_t_v186)) > _g4_s3 ? (248u + sizeof(_g4_t_v186)) : _g4_s3,
    _g4_s5 = (268u + sizeof(_g4_t_v187)) > _g4_s4 ? (268u + sizeof(_g4_t_v187)) : _g4_s4,
    _g4_s6 = (276u + sizeof(_g4_t_v188)) > _g4_s5 ? (276u + sizeof(_g4_t_v188)) : _g4_s5,
    _g4_s7 = (280u + sizeof(_g4_t_v189)) > _g4_s6 ? (280u + sizeof(_g4_t_v189)) : _g4_s6,
    _g4_s8 = (288u + sizeof(_g4_t_v190)) > _g4_s7 ? (288u + sizeof(_g4_t_v190)) : _g4_s7,
    _g4_s9 = (296u + sizeof(_g4_t_v191)) > _g4_s8 ? (296u + sizeof(_g4_t_v191)) : _g4_s8,
    _g4_s10 = (300u + sizeof(_g4_t_v192)) > _g4_s9 ? (300u + sizeof(_g4_t_v192)) : _g4_s9,
    _g4_s11 = (304u + sizeof(_g4_t_v193)) > _g4_s10 ? (304u + sizeof(_g4_t_v193)) : _g4_s10,
    _g4_s12 = (308u + sizeof(_g4_t_v194)) > _g4_s11 ? (308u + sizeof(_g4_t_v194)) : _g4_s11,
    _g4_s13 = (312u + sizeof(_g4_t_v195)) > _g4_s12 ? (312u + sizeof(_g4_t_v195)) : _g4_s12,
    _g4_s14 = (316u + sizeof(_g4_t_v196)) > _g4_s13 ? (316u + sizeof(_g4_t_v196)) : _g4_s13,
    _g4_s15 = (320u + sizeof(_g4_t_v197)) > _g4_s14 ? (320u + sizeof(_g4_t_v197)) : _g4_s14,
    _g4_s16 = (324u + sizeof(_g4_t_v198)) > _g4_s15 ? (324u + sizeof(_g4_t_v198)) : _g4_s15,
    _g4_s17 = (328u + sizeof(_g4_t_v199)) > _g4_s16 ? (328u + sizeof(_g4_t_v199)) : _g4_s16,
    _g4_s18 = (335u + sizeof(_g4_t_v200)) > _g4_s17 ? (335u + sizeof(_g4_t_v200)) : _g4_s17,
    _g4_s19 = (336u + sizeof(_g4_t_v201)) > _g4_s18 ? (336u + sizeof(_g4_t_v201)) : _g4_s18,
    _g4_s20 = (340u + sizeof(_g4_t_v202)) > _g4_s19 ? (340u + sizeof(_g4_t_v202)) : _g4_s19,
    _g4_s21 = (344u + sizeof(_g4_t_v203)) > _g4_s20 ? (344u + sizeof(_g4_t_v203)) : _g4_s20,
    _g4_s22 = (348u + sizeof(_g4_t_v204)) > _g4_s21 ? (348u + sizeof(_g4_t_v204)) : _g4_s21,
    _g4_s23 = (352u + sizeof(_g4_t_v205)) > _g4_s22 ? (352u + sizeof(_g4_t_v205)) : _g4_s22,
    _g4_s24 = (368u + sizeof(_g4_t_v206)) > _g4_s23 ? (368u + sizeof(_g4_t_v206)) : _g4_s23,
    _g4_s25 = (372u + sizeof(_g4_t_v207)) > _g4_s24 ? (372u + sizeof(_g4_t_v207)) : _g4_s24,
    _g4_s26 = (376u + sizeof(_g4_t_v208)) > _g4_s25 ? (376u + sizeof(_g4_t_v208)) : _g4_s25,
    _g4_s27 = (380u + sizeof(_g4_t_v209)) > _g4_s26 ? (380u + sizeof(_g4_t_v209)) : _g4_s26,
    _g4_s28 = (384u + sizeof(_g4_t_v210)) > _g4_s27 ? (384u + sizeof(_g4_t_v210)) : _g4_s27,
    _g4_s29 = (388u + sizeof(_g4_t_v211)) > _g4_s28 ? (388u + sizeof(_g4_t_v211)) : _g4_s28,
    _g4_s30 = (392u + sizeof(_g4_t_v212)) > _g4_s29 ? (392u + sizeof(_g4_t_v212)) : _g4_s29,
    _g4_s31 = (396u + sizeof(_g4_t_v213)) > _g4_s30 ? (396u + sizeof(_g4_t_v213)) : _g4_s30,
    _g4_s32 = (400u + sizeof(_g4_t_v214)) > _g4_s31 ? (400u + sizeof(_g4_t_v214)) : _g4_s31,
    _g4_s33 = (404u + sizeof(_g4_t_v215)) > _g4_s32 ? (404u + sizeof(_g4_t_v215)) : _g4_s32,
    _g4_s34 = (408u + sizeof(_g4_t_v216)) > _g4_s33 ? (408u + sizeof(_g4_t_v216)) : _g4_s33,
    _g4_s35 = (412u + sizeof(_g4_t_v217)) > _g4_s34 ? (412u + sizeof(_g4_t_v217)) : _g4_s34,
    _g4_s36 = (416u + sizeof(_g4_t_v218)) > _g4_s35 ? (416u + sizeof(_g4_t_v218)) : _g4_s35,
    _g4_s37 = (440u + sizeof(_g4_t_v219)) > _g4_s36 ? (440u + sizeof(_g4_t_v219)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 0u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 240u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 244u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 248u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 268u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 276u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 280u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 288u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 296u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 300u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 304u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 308u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 312u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 316u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 320u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 324u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 328u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 335u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 336u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 340u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 344u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 348u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 352u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 368u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 372u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 376u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 380u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 384u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 388u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 392u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 396u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 400u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 404u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 408u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 412u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 416u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 440u);

  v219 = &a1;
  v5 = a4;
  v194 = a1;
  v195 = a2;
  v193 = a5;
  v199 = a3;
  v6 = *a3;
  LOBYTE(v196) = a3[3];
  LOBYTE(v197) = a3[2];
  result = (hkLifoAllocator::Self *)v6;
  LOBYTE(v198) = a3[1];
  while ( 2 )
  {
    if ( v6 > 0x70u )
    {
LABEL_87:
      __builtin_debugtrap();
      v26 = LOBYTE(v197);
      v25 = LOBYTE(v198);
      goto LABEL_20;
    }
    switch ( (unsigned int)(uintptr_t)(result) )
    {
      case 0u:
        return result;
      case 1u:
      case 2u:
      case 3u:
      case 4u:
        v27 = (float)((float)0 * 65536.0) + (float)LOBYTE(v196);
        v28 = (float)((float)0 * 65536.0) + (float)LOBYTE(v197);
        v29 = (float)((float)0 * 65536.0) + (float)LOBYTE(v198);
        v30 = 1 << v6;
        v31 =g4_m128_lane<float>(*(v5), 0);
        v32 = (float)v30;
        v33 =g4_m128_lane<float>(v5[1], 3);
        v34 = _mm_cvtsi32_si128(g4_m128_lane<uint32_t>(*(v5), 1));
        *(float *)g4_m128_ptr<int32_t>(v34) = *(float *)g4_m128_ptr<int32_t>(v34) - v28;
        v35 =g4_m128_lane<float>(v5[1], 2) - v27;
        v198 =g4_m128_lane<float>(*(v5), 3);
        v36 =g4_m128_lane<float>(v5[1], 1);
        v37 =g4_m128_lane<float>(v5[1], 0);
        v38 = COERCE_FLOAT(_mm_cvtsi128_si32(v34));
        *(float *)g4_m128_ptr<int32_t>(v34) =g4_m128_lane<float>(*(v5), 2) - v27;
        v197 = v35;
        v39 = v31 - v29;
        v40 = v195;
g4_m128_lane<float>(v5[1], 0) = (float)(v37 - v29) * v32;
g4_m128_lane<float>(v5[1], 1) = (float)(v36 - v28) * v32;
g4_m128_lane<float>(*(v5), 2) = *(float *)g4_m128_ptr<int32_t>(v34) * v32;
        *(float *)g4_m128_ptr<int32_t>(v34) = v198 * v32;
g4_m128_lane<float>(*(v5), 0) = v39 * v32;
g4_m128_lane<int32_t>(*(v5), 3) =g4_m128_lane<int32_t>(v34, 0);
        *(float *)g4_m128_ptr<int32_t>(v34) = v197 * v32;
g4_m128_lane<float>(*(v5), 1) = v38 * v32;
g4_m128_lane<int32_t>(v5[1], 2) =g4_m128_lane<int32_t>(v34, 0);
g4_m128_lane<float>(v5[1], 3) = v33 * v32;
        v41 = (float)(v27 + v40[2]) * v32;
        v42 = (float)(v29 + *v40) * v32;
        v43 = (float)(v40[3] + 0.0) * v32;
        v207 = (float)(v28 + v40[1]) * v32;
        v206 = v42;
        v208 = v41;
        v44 = v40[10];
        v215 = (char *)result + *((uint32_t *)v40 + 9);
        v45 = *((uint32_t *)v40 + 12);
        v209 = v43;
        v216 = v44 * v32;
        v210 = v40[4] * v32;
        v211 = v40[5] * v32;
        v212 = v40[6] * v32;
        v213 = v40[7] * v32;
        v46 = v32 * v40[8];
        v218 = v45;
        v217 = *((uint32_t *)v40 + 11);
        v214 = v46;
        v6 = *((uint8_t *)v199 + 4);
        v25 = *((uint8_t *)v199 + 5);
        v26 = *((uint8_t *)v199 + 6);
        LOBYTE(v196) = *((uint8_t *)v199 + 7);
        v199 = (char *)v199 + 4;
        *(float *)&v195 = COERCE_FLOAT(&v206);
        result = (hkLifoAllocator::Self *)v6;
        goto LABEL_20;
      case 5u:
        v24 = (char *)v199 + LOBYTE(v198) + 2;
        v199 = v24;
        goto LABEL_23;
      case 6u:
        v24 = (char *)v199 + 256 * LOBYTE(v198) + LOBYTE(v197) + 3;
        v199 = v24;
        goto LABEL_23;
      case 7u:
        v24 = (char *)v199 + 0x10000 * LOBYTE(v198) + 256 * LOBYTE(v197) + LOBYTE(v196) + 4;
        v199 = v24;
        goto LABEL_23;
      case 8u:
        v24 = (char *)v199
            + 0x1000000 * LODWORD(v198)
            + 0x10000 * LOBYTE(v197)
            + 256 * LOBYTE(v196)
            + *((uint8_t *)v199 + 4)
            + 5;
        v199 = v24;
        goto LABEL_23;
      case 9u:
        v47 = LOBYTE(v198);
        v48 = v217;
        if ( v195 != &v206 )
        {
          v206 = *v195;
          v207 = v195[1];
          v208 = v195[2];
          v209 = v195[3];
          v210 = v195[4];
          v211 = v195[5];
          v212 = v195[6];
          v213 = v195[7];
          v49 = v195[8];
          v215 = *((char **)v195 + 9);
          v214 = v49;
          v48 = *((uint32_t *)v195 + 11);
          v50 = *((uint32_t *)v195 + 12);
          v216 = v195[10];
          v218 = v50;
        }
        v198 = COERCE_FLOAT(&v206);
        v217 = v47 + v48;
        v6 = *((uint8_t *)v199 + 2);
        v25 = *((uint8_t *)v199 + 3);
        v26 = *((uint8_t *)v199 + 4);
        LOBYTE(v196) = *((uint8_t *)v199 + 5);
        v199 = (char *)v199 + 2;
        *(float *)&v195 = COERCE_FLOAT(&v206);
        result = (hkLifoAllocator::Self *)v6;
        goto LABEL_20;
      case 0xAu:
        v51 = LOBYTE(v197) + (LOBYTE(v198) << 8);
        v52 = v217;
        if ( v195 != &v206 )
        {
          v206 = *v195;
          v207 = v195[1];
          v208 = v195[2];
          v209 = v195[3];
          v210 = v195[4];
          v211 = v195[5];
          v212 = v195[6];
          v213 = v195[7];
          v53 = v195[8];
          v215 = *((char **)v195 + 9);
          v214 = v53;
          v52 = *((uint32_t *)v195 + 11);
          v54 = *((uint32_t *)v195 + 12);
          v216 = v195[10];
          v218 = v54;
        }
        v198 = COERCE_FLOAT(&v206);
        v217 = v51 + v52;
        v6 = *((uint8_t *)v199 + 3);
        v25 = *((uint8_t *)v199 + 4);
        v26 = *((uint8_t *)v199 + 5);
        LOBYTE(v196) = *((uint8_t *)v199 + 6);
        v199 = (char *)v199 + 3;
        *(float *)&v195 = COERCE_FLOAT(&v206);
        result = (hkLifoAllocator::Self *)v6;
        goto LABEL_20;
      case 0xBu:
        v55 = *((uint8_t *)v199 + 4) + (LOBYTE(v196) << 8) + (LOBYTE(v197) << 16) + (LODWORD(v198) << 24);
        if ( v195 != &v206 )
        {
          v206 = *v195;
          v207 = v195[1];
          v208 = v195[2];
          v209 = v195[3];
          v210 = v195[4];
          v211 = v195[5];
          v212 = v195[6];
          v213 = v195[7];
          v56 = v195[8];
          v215 = *((char **)v195 + 9);
          v214 = v56;
          v57 = v195[10];
          v218 = *((uint32_t *)v195 + 12);
          v216 = v57;
        }
        v198 = COERCE_FLOAT(&v206);
        v217 = v55;
        v6 = *((uint8_t *)v199 + 5);
        v25 = *((uint8_t *)v199 + 6);
        v26 = *((uint8_t *)v199 + 7);
        LOBYTE(v196) = *((uint8_t *)v199 + 8);
        v199 = (char *)v199 + 5;
        *(float *)&v195 = COERCE_FLOAT(&v206);
        result = (hkLifoAllocator::Self *)v6;
        goto LABEL_20;
      case 0xCu:
        v193 = LOBYTE(v198) << 8;
        v193 |= LOBYTE(v197);
        v193 <<= 9;
        v23 = v193;
        goto LABEL_18;
      case 0xDu:
        v6 = *((uint8_t *)v199 + 5);
        v25 = *((uint8_t *)v199 + 6);
        v26 = *((uint8_t *)v199 + 7);
        LOBYTE(v196) = *((uint8_t *)v199 + 8);
        v199 = (char *)v199 + 5;
        result = (hkLifoAllocator::Self *)v6;
        goto LABEL_20;
      case 0xEu:
      case 0xFu:
      case 0x1Du:
      case 0x1Eu:
      case 0x1Fu:
      case 0x2Cu:
      case 0x2Du:
      case 0x2Eu:
      case 0x2Fu:
      case 0x54u:
      case 0x55u:
      case 0x56u:
      case 0x57u:
      case 0x58u:
      case 0x59u:
      case 0x5Au:
      case 0x5Bu:
      case 0x5Cu:
      case 0x5Du:
      case 0x5Eu:
      case 0x5Fu:
      case 0x6Cu:
      case 0x6Du:
      case 0x6Eu:
      case 0x6Fu:
        goto LABEL_87;
      case 0x10u:
      case 0x11u:
      case 0x12u:
        v58 = (int)(uintptr_t)(result) - 16;
        v59 = v195[(uint32_t)(uintptr_t)(result) - 16 + 4];
        v60 = (float)((float)((float)0 * 65536.0) + (float)LOBYTE(v198)) + v59;
g4_m128_raw(v61) =g4_m128_lane<uint32_t>(*(v5), (uint32_t)(uintptr_t)(result) - 16);
        v62 = (float)((float)((float)0 * 65536.0) + (float)LOBYTE(v197)) - v59;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v5[1], (uint32_t)(uintptr_t)(result) - 16);
        goto LABEL_39;
      case 0x13u:
        v58 = 999;
        v66 = (float)((float)0 * 65536.0) + (float)LOBYTE(v198);
g4_m128_raw(v61) =g4_m128_lane<uint32_t>(*(v5), 1);
        v67 = v195[5] + v195[6];
g4_m128_lane<float>(v61, 0) =g4_m128_lane<float>(v61, 0) +g4_m128_lane<float>(*(v5), 2);
        v68 = v67 + v67;
        v62 = (float)((float)((float)((float)0 * 65536.0) + (float)LOBYTE(v197))
                    + (float)((float)((float)0 * 65536.0) + (float)LOBYTE(v197)))
            - v68;
        v60 = (float)(v66 + v66) + v68;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v5[1], 1);
g4_m128_lane<float>(v63, 0) =g4_m128_lane<float>(v63, 0) +g4_m128_lane<float>(v5[1], 2);
        goto LABEL_39;
      case 0x14u:
        v58 = 999;
        v69 = (float)0 * 65536.0;
g4_m128_raw(v61) =g4_m128_lane<uint32_t>(*(v5), 1);
g4_m128_lane<float>(v61, 0) =g4_m128_lane<float>(v61, 0) -g4_m128_lane<float>(*(v5), 2);
        v70 = (float)((float)(v69 + (float)LOBYTE(v198)) + (float)(v69 + (float)LOBYTE(v198))) - 255.0;
        v71 = v195[5] + v195[6];
        v72 = v71 + v71;
        v62 = (float)((float)((float)(v69 + (float)LOBYTE(v197)) + (float)(v69 + (float)LOBYTE(v197))) - 255.0) - v72;
        v60 = v70 + v72;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v5[1], 1);
g4_m128_lane<float>(v63, 0) =g4_m128_lane<float>(v63, 0) -g4_m128_lane<float>(v5[1], 2);
        goto LABEL_39;
      case 0x15u:
        v58 = 999;
        v73 = (float)((float)0 * 65536.0) + (float)LOBYTE(v198);
g4_m128_raw(v61) =g4_m128_lane<uint32_t>(*(v5), 0);
        v74 = v195[4] + v195[6];
g4_m128_lane<float>(v61, 0) =g4_m128_lane<float>(v61, 0) +g4_m128_lane<float>(*(v5), 2);
        v75 = v74 + v74;
        v62 = (float)((float)((float)((float)0 * 65536.0) + (float)LOBYTE(v197))
                    + (float)((float)((float)0 * 65536.0) + (float)LOBYTE(v197)))
            - v75;
        v60 = (float)(v73 + v73) + v75;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v5[1], 0);
g4_m128_lane<float>(v63, 0) =g4_m128_lane<float>(v63, 0) +g4_m128_lane<float>(v5[1], 2);
        goto LABEL_39;
      case 0x16u:
        v58 = 999;
        v76 = (float)0 * 65536.0;
g4_m128_raw(v61) =g4_m128_lane<uint32_t>(*(v5), 0);
g4_m128_lane<float>(v61, 0) =g4_m128_lane<float>(v61, 0) -g4_m128_lane<float>(*(v5), 2);
        v77 = (float)((float)(v76 + (float)LOBYTE(v198)) + (float)(v76 + (float)LOBYTE(v198))) - 255.0;
        v78 = v195[4] + v195[6];
        v79 = v78 + v78;
        v62 = (float)((float)((float)(v76 + (float)LOBYTE(v197)) + (float)(v76 + (float)LOBYTE(v197))) - 255.0) - v79;
        v60 = v77 + v79;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v5[1], 0);
g4_m128_lane<float>(v63, 0) =g4_m128_lane<float>(v63, 0) -g4_m128_lane<float>(v5[1], 2);
        goto LABEL_39;
      case 0x17u:
        v58 = 999;
        v80 = (float)((float)0 * 65536.0) + (float)LOBYTE(v198);
g4_m128_raw(v61) =g4_m128_lane<uint32_t>(*(v5), 0);
        v81 = v195[4] + v195[5];
g4_m128_lane<float>(v61, 0) =g4_m128_lane<float>(v61, 0) +g4_m128_lane<float>(*(v5), 1);
        v82 = v81 + v81;
        v62 = (float)((float)((float)((float)0 * 65536.0) + (float)LOBYTE(v197))
                    + (float)((float)((float)0 * 65536.0) + (float)LOBYTE(v197)))
            - v82;
        v60 = (float)(v80 + v80) + v82;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v5[1], 0);
g4_m128_lane<float>(v63, 0) =g4_m128_lane<float>(v63, 0) +g4_m128_lane<float>(v5[1], 1);
        goto LABEL_39;
      case 0x18u:
        v58 = 999;
        v83 = (float)0 * 65536.0;
g4_m128_raw(v61) =g4_m128_lane<uint32_t>(*(v5), 0);
g4_m128_lane<float>(v61, 0) =g4_m128_lane<float>(v61, 0) -g4_m128_lane<float>(*(v5), 1);
        v84 = (float)((float)(v83 + (float)LOBYTE(v198)) + (float)(v83 + (float)LOBYTE(v198))) - 255.0;
        v85 = v195[4] + v195[5];
        v86 = v85 + v85;
        v62 = (float)((float)((float)(v83 + (float)LOBYTE(v197)) + (float)(v83 + (float)LOBYTE(v197))) - 255.0) - v86;
        v60 = v84 + v86;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v5[1], 0);
g4_m128_lane<float>(v63, 0) =g4_m128_lane<float>(v63, 0) -g4_m128_lane<float>(v5[1], 1);
        goto LABEL_39;
      case 0x19u:
        v58 = 999;
        v87 = (float)0 * 65536.0;
g4_m128_raw(v61) =g4_m128_lane<uint32_t>(*(v5), 0);
g4_m128_lane<float>(v61, 0) = (float)(g4_m128_lane<float>(v61, 0) +g4_m128_lane<float>(*(v5), 1)) +g4_m128_lane<float>(*(v5), 2);
        v88 = v195[8];
        v60 = (float)((float)(v87 + (float)LOBYTE(v198)) * 3.0) + v88;
        v62 = (float)((float)(v87 + (float)LOBYTE(v197)) * 3.0) - v88;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v5[1], 0);
g4_m128_lane<float>(v63, 0) = (float)(g4_m128_lane<float>(v63, 0) +g4_m128_lane<float>(v5[1], 1)) +g4_m128_lane<float>(v5[1], 2);
        goto LABEL_39;
      case 0x1Au:
        v58 = 999;
g4_m128_raw(v61) =g4_m128_lane<uint32_t>(*(v5), 0);
        v89 = v195[8];
g4_m128_lane<float>(v61, 0) = (float)(g4_m128_lane<float>(v61, 0) +g4_m128_lane<float>(*(v5), 1)) -g4_m128_lane<float>(*(v5), 2);
        v60 = (float)((float)((float)((float)((float)0 * 65536.0) + (float)LOBYTE(v198)) * 3.0) - 255.0) + v89;
        v62 = (float)((float)((float)((float)((float)0 * 65536.0) + (float)LOBYTE(v197)) * 3.0) - 255.0) - v89;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v5[1], 0);
g4_m128_lane<float>(v63, 0) = (float)(g4_m128_lane<float>(v63, 0) +g4_m128_lane<float>(v5[1], 1)) -g4_m128_lane<float>(v5[1], 2);
        goto LABEL_39;
      case 0x1Bu:
        v58 = 999;
g4_m128_raw(v61) =g4_m128_lane<uint32_t>(*(v5), 0);
        v90 = v195[8];
g4_m128_lane<float>(v61, 0) = (float)(g4_m128_lane<float>(v61, 0) -g4_m128_lane<float>(*(v5), 1)) +g4_m128_lane<float>(*(v5), 2);
        v60 = (float)((float)((float)((float)((float)0 * 65536.0) + (float)LOBYTE(v198)) * 3.0) - 255.0) + v90;
        v62 = (float)((float)((float)((float)((float)0 * 65536.0) + (float)LOBYTE(v197)) * 3.0) - 255.0) - v90;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v5[1], 0);
g4_m128_lane<float>(v63, 0) = (float)(g4_m128_lane<float>(v63, 0) -g4_m128_lane<float>(v5[1], 1)) +g4_m128_lane<float>(v5[1], 2);
        goto LABEL_39;
      case 0x1Cu:
        v58 = 999;
g4_m128_raw(v61) =g4_m128_lane<uint32_t>(*(v5), 0);
        v91 = v195[8];
g4_m128_lane<float>(v61, 0) = (float)(g4_m128_lane<float>(v61, 0) -g4_m128_lane<float>(*(v5), 1)) -g4_m128_lane<float>(*(v5), 2);
        v60 = (float)((float)((float)((float)((float)0 * 65536.0) + (float)LOBYTE(v198)) * 3.0) - 510.0) + v91;
        v62 = (float)((float)((float)((float)((float)0 * 65536.0) + (float)LOBYTE(v197)) * 3.0) - 510.0) - v91;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v5[1], 0);
g4_m128_lane<float>(v63, 0) = (float)(g4_m128_lane<float>(v63, 0) -g4_m128_lane<float>(v5[1], 1)) -g4_m128_lane<float>(v5[1], 2);
LABEL_39:
        v198 = 0.0;
        v64 = LOBYTE(v196);
        v65 = (char *)v199 + 4;
        goto LABEL_40;
      case 0x20u:
      case 0x21u:
      case 0x22u:
        v92 = LOBYTE(v198);
        v58 = (int)(uintptr_t)(result) - 32;
        v198 = 0.0;
        v93 = (float)v92;
g4_m128_raw(v61) =g4_m128_lane<uint32_t>(*(v5), (uint32_t)(uintptr_t)(result) - 32);
        v64 = LOBYTE(v197);
        v94 = (float)((float)0 * 65536.0) + v93;
        v95 = v195[(uint32_t)(uintptr_t)(result) - 32 + 4];
        v65 = (char *)v199 + 3;
        v96 = v94 + 1.0;
        v62 = v94 - v95;
        v60 = v96 + v95;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v5[1], v58);
        if ( v62 <=g4_m128_lane<float>(v63, 0) )
          goto LABEL_54;
        goto LABEL_41;
      case 0x23u:
      case 0x24u:
      case 0x25u:
        v58 = (int)(uintptr_t)(result) - 35;
        v121 = v195[(uint32_t)(uintptr_t)(result) - 35 + 4];
        v60 = (float)((float)((float)0 * 65536.0) + (float)LOBYTE(v198)) + v121;
g4_m128_raw(v61) =g4_m128_lane<uint32_t>(*(v5), (uint32_t)(uintptr_t)(result) - 35);
        LODWORD(v198) = *((uint8_t *)v199 + 4) + (LOBYTE(v196) << 8);
        v62 = (float)((float)((float)0 * 65536.0) + (float)LOBYTE(v197)) - v121;
g4_m128_raw(v63) =g4_m128_lane<uint32_t>(v5[1], (uint32_t)(uintptr_t)(result) - 35);
        v64 = (*((uint8_t *)v199 + 5) << 8) + *((uint8_t *)v199 + 6);
        v65 = (char *)v199 + 7;
LABEL_40:
        if ( v62 >g4_m128_lane<float>(v63, 0) )
        {
LABEL_41:
          if ( v62 >g4_m128_lane<float>(v61, 0) )
          {
            v24 = &v65[LODWORD(v198)];
            v199 = v24;
            goto LABEL_23;
          }
        }
LABEL_54:
        v199 = &v65[v64];
        if (g4_m128_lane<float>(v61, 0) > v60 &&g4_m128_lane<float>(v63, 0) > v60 )
          goto LABEL_75;
        v97 = v61;
        v98 = v63;
g4_m128_lane<float>(v97, 0) =g4_m128_lane<float>(v61, 0) - v60;
g4_m128_lane<float>(v98, 0) =g4_m128_lane<float>(v63, 0) - v60;
        v201 =g4_m128_lane<float>(*(v5), 0);
        v99 = v63;
        v202 =g4_m128_lane<int32_t>(*(v5), 1);
        v203 =g4_m128_lane<int32_t>(*(v5), 2);
        v204 =g4_m128_lane<int32_t>(*(v5), 3);
        v15 = (float)(g4_m128_lane<float>(v63, 0) - v60) <= (float)(g4_m128_lane<float>(v61, 0) - v60);
        v205 = v5[1];
g4_m128_lane<float>(v61, 0) =g4_m128_lane<float>(v61, 0) - v62;
g4_m128_lane<float>(v99, 0) =g4_m128_lane<float>(v63, 0) - v62;
        if ( !v15 )
        {
          if ( (float)(g4_m128_lane<float>(v97, 0) *g4_m128_lane<float>(v98, 0)) < 0.0 )
          {
            v169 = _mm_shuffle_ps(v97, v97, 0);
            v205 = _mm_add_ps(
                     _mm_mul_ps(_mm_div_ps(v169, _mm_sub_ps(v169, _mm_shuffle_ps(v98, v98, 0))), _mm_sub_ps(v5[1], *v5)),
                     *v5);
          }
          LODWORD(v190) = 0;
          v197 = *(float *)&v58;
          v191 =g4_m128_lane<float>(v63, 0) - v62;
          v192 =g4_m128_lane<float>(v61, 0);
          v196 = v62;
          hkpMoppAabbCastVirtualMachine::queryRayOnTree(v194, v195, (uint8_t *)((char *)v199 + LODWORD(v198) - v64), (__m128 *)(&v201), v193);
          v100 = LODWORD(v197);
          v101 = v196;
          if ( *(float *)&v190 > (float)(v192 * v191) )
          {
            v168 = _mm_shuffle_ps(g4_m128_from<__m128>(LODWORD(v192)), g4_m128_from<__m128>(LODWORD(v192)), 0);
            *v5 = _mm_add_ps(
                    _mm_mul_ps(
                      _mm_div_ps(
                        v168,
                        _mm_sub_ps(v168, _mm_shuffle_ps(g4_m128_from<__m128>(LODWORD(v191)), g4_m128_from<__m128>(LODWORD(v191)), 0))),
                      _mm_sub_ps(v5[1], *v5)),
                    *v5);
          }
          v102 = v194;
          v103 = *(float *)(v194 + 28);
          if ( *(float *)(v194 + 32) > v103 )
          {
            *(float *)(v194 + 32) = v103;
            v104 = v102;
            v105 = *(float **)(v102 + 44);
            v106 = *(float **)(v104 + 16);
            v107 = *v105;
            v108 = (float)((float)(v105[5] - v105[1]) * v103) + v105[1];
            v109 = (float)((float)(v105[6] - v105[2]) * v103) + v105[2];
            v110 = (float)((float)(v105[7] - v105[3]) * v103) + v105[3];
            v111 = v105[4];
            result = (hkLifoAllocator::Self *)v195;
            v112 = (float)((float)((float)(v111 - v107) * v103) + v107) - v106[4];
g4_m128_lane<float>(v5[1], 0) = v112;
            v113 = v108 - v106[5];
g4_m128_lane<float>(v5[1], 1) = v113;
            v114 = v109 - v106[6];
g4_m128_lane<float>(v5[1], 2) = v114;
            v115 = v110 - v106[7];
g4_m128_lane<float>(v5[1], 3) = v115;
            v116 = *((float *)result + 10);
            v117 = v112 * v116;
            v118 = v113 * v116;
            v119 = v114 * v116;
            v120 = v115 * v116;
g4_m128_lane<float>(v5[1], 0) = v117;
g4_m128_lane<float>(v5[1], 1) = v118;
g4_m128_lane<float>(v5[1], 2) = v119;
g4_m128_lane<float>(v5[1], 3) = v120;
g4_m128_lane<float>(v5[1], 0) = v117 - *(float *)result;
g4_m128_lane<float>(v5[1], 1) = v118 - *((float *)result + 1);
g4_m128_lane<float>(v5[1], 2) = v119 - *((float *)result + 2);
g4_m128_lane<float>(v5[1], 3) = v120 - *((float *)result + 3);
            if ( v100 <= 2 && v101 >g4_m128_lane<float>(v5[1], v100) )
              return result;
          }
          goto LABEL_75;
        }
        if ( (float)(g4_m128_lane<float>(v61, 0) *g4_m128_lane<float>(v99, 0)) < 0.0 )
        {
          v171 = _mm_shuffle_ps(v61, v61, 0);
          v205 = _mm_add_ps(
                   _mm_mul_ps(_mm_div_ps(v171, _mm_sub_ps(v171, _mm_shuffle_ps(v99, v99, 0))), _mm_sub_ps(v5[1], *v5)),
                   *v5);
        }
        v196 = *(float *)&v64;
        v197 = *(float *)&v58;
        LODWORD(v189) = 0;
        *(float *)&v190 =g4_m128_lane<float>(v63, 0) - v60;
        v191 =g4_m128_lane<float>(v97, 0);
        v192 = v60;
        hkpMoppAabbCastVirtualMachine::queryRayOnTree(v194, v195, (uint8_t *)(v199), (__m128 *)(&v201), v193);
        v149 = LODWORD(v197);
        v150 = v196;
        v151 = v192;
        if ( *(float *)&v189 > (float)(v191 * *(float *)&v190) )
        {
          v170 = _mm_shuffle_ps(g4_m128_from<__m128>(LODWORD(v191)), g4_m128_from<__m128>(LODWORD(v191)), 0);
          *v5 = _mm_add_ps(
                  _mm_mul_ps(
                    _mm_div_ps(v170, _mm_sub_ps(v170, _mm_shuffle_ps(g4_m128_from<__m128>(LODWORD(v190)), g4_m128_from<__m128>(LODWORD(v190)), 0))),
                    _mm_sub_ps(v5[1], *v5)),
                  *v5);
        }
        v152 = v194;
        v153 = *(float *)(v194 + 28);
        if ( *(float *)(v194 + 32) > v153 )
        {
          *(float *)(v194 + 32) = v153;
          v154 = *(float **)(v152 + 44);
          v155 = *(float **)(v152 + 16);
          v156 = (float)((float)(v154[5] - v154[1]) * v153) + v154[1];
          v157 = (float)((float)(v154[6] - v154[2]) * v153) + v154[2];
          v158 = (float)((float)(v154[7] - v154[3]) * v153) + v154[3];
          v159 = (float)((float)((float)(v154[4] - *v154) * v153) + *v154) - v155[4];
g4_m128_lane<float>(v5[1], 0) = v159;
          v160 = v156 - v155[5];
g4_m128_lane<float>(v5[1], 1) = v160;
          v161 = v157 - v155[6];
g4_m128_lane<float>(v5[1], 2) = v161;
          v162 = v158 - v155[7];
          result = (hkLifoAllocator::Self *)v195;
g4_m128_lane<float>(v5[1], 3) = v162;
          v163 = *((float *)result + 10);
          v164 = v159 * v163;
          v165 = v160 * v163;
          v166 = v161 * v163;
          v167 = v162 * v163;
g4_m128_lane<float>(v5[1], 0) = v164;
g4_m128_lane<float>(v5[1], 1) = v165;
g4_m128_lane<float>(v5[1], 2) = v166;
g4_m128_lane<float>(v5[1], 3) = v167;
g4_m128_lane<float>(v5[1], 0) = v164 - *(float *)result;
g4_m128_lane<float>(v5[1], 1) = v165 - *((float *)result + 1);
g4_m128_lane<float>(v5[1], 2) = v166 - *((float *)result + 2);
g4_m128_lane<float>(v5[1], 3) = v167 - *((float *)result + 3);
          if ( v149 <= 2 &&g4_m128_lane<float>(v5[1], v149) > v151 )
            return result;
        }
        v199 = (char *)v199 + LODWORD(v198) - LODWORD(v150);
LABEL_75:
        v24 = (char *)v199;
LABEL_23:
        v6 = *v24;
LABEL_19:
        v25 = v24[1];
        v26 = v24[2];
        LOBYTE(v196) = v24[3];
        result = (hkLifoAllocator::Self *)v6;
LABEL_20:
        LOBYTE(v198) = v25;
        LOBYTE(v197) = v26;
        continue;
      case 0x26u:
      case 0x27u:
      case 0x28u:
        v122 = (char *)result - 38;
        v199 = (char *)v199 + 3;
        v123 = v195[(uint32_t)(uintptr_t)(result) - 38 + 4];
        v124 = (float)((float)((float)0 * 65536.0) + (float)LOBYTE(v198)) - v123;
        v125 = (float)((float)((float)0 * 65536.0) + (float)LOBYTE(v197)) + v123;
        goto LABEL_67;
      case 0x29u:
      case 0x2Au:
      case 0x2Bu:
        v122 = (char *)result - 41;
        v137 = *(float *)(v194 + 20);
        v138 = (uint8_t *)v199;
        v199 = (char *)v199 + 7;
        v139 = (float)(LOBYTE(v196) + (LOBYTE(v197) << 8) + (LOBYTE(v198) << 16)) * v137;
        v140 = (float)(v138[6] + (v138[4] << 16) + (v138[5] << 8)) * v137;
        v141 = v195[10];
        v142 = v139 * v141;
        v143 = &v195[(uint32_t)(uintptr_t)(result) - 41];
        v144 = (float)(v140 * v141) - *v143;
        v145 = v143[4];
        v124 = (float)(v142 - *v143) - v145;
        v125 = v144 + v145;
LABEL_67:
        result = (hkLifoAllocator::Self *)&g4_m128_lane<float>(*(v5), (uint32_t)(uintptr_t)(v122));
g4_m128_raw(v126) = *(unsigned int *)result;
g4_m128_raw(v127) = *((unsigned int *)result + 4);
        if (g4_m128_lane<float>(v127, 0) <=g4_m128_lane<float>(v126, 0) )
        {
          if ( v124 >g4_m128_lane<float>(v126, 0) ||g4_m128_lane<float>(v127, 0) > v125 )
            return result;
          v128 = 0;
          v129 = 1;
        }
        else
        {
          if ( v124 >g4_m128_lane<float>(v127, 0) ||g4_m128_lane<float>(v126, 0) > v125 )
            return result;
          v128 = 1;
          v129 = 0;
        }
        v130 = v126;
        v131 = v127;
g4_m128_lane<float>(v130, 0) =g4_m128_lane<float>(v126, 0) - v125;
g4_m128_lane<float>(v131, 0) =g4_m128_lane<float>(v127, 0) - v125;
        v196 =g4_m128_lane<float>(v5[1], 0);
        v132 =g4_m128_lane<uint32_t>(*(v5), 2);
        v192 =g4_m128_lane<float>(v5[1], 1);
        v133 =g4_m128_lane<uint32_t>(*(v5), 3);
        v191 =g4_m128_lane<float>(v5[1], 2);
        v197 =g4_m128_lane<float>(v5[1], 3);
        v134 = (float)(g4_m128_lane<float>(v126, 0) - v125) * (float)(g4_m128_lane<float>(v127, 0) - v125);
        v135 = 0.0;
        v198 =g4_m128_lane<float>(*(v5), 0);
g4_m128_raw(v136) =g4_m128_lane<uint32_t>(*(v5), 1);
        if ( v134 < 0.0 )
        {
          v188 = 0.0;
          _mm_storel_ps(&v189, _mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v198)), v136));
          v172 = _mm_shuffle_ps(v130, v130, 0);
g4_m128_lane<uint64_t>(v173, 0) =g4_m128_lane<uint64_t>(_mm_loadl_ps(&v189), 0);
          v174 = v128;
g4_m128_lane<uint64_t>(v173, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(v132)), g4_m128_from<__m128>(_mm_cvtsi32_si128(v133))), 0);
          v175 = _mm_div_ps(v172, _mm_sub_ps(v172, _mm_shuffle_ps(v131, v131, 0)));
          _mm_storel_ps(&v189, _mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v196)), g4_m128_from<__m128>(LODWORD(v192))));
          v176 = _mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v191)), g4_m128_from<__m128>(LODWORD(v197)));
g4_m128_lane<uint64_t>(v177, 0) =g4_m128_lane<uint64_t>(_mm_loadl_ps(&v189), 0);
          _mm_storel_ps(&v190, v176);
g4_m128_lane<uint64_t>(v177, 1) =g4_m128_lane<uint64_t>(v176, 0);
          v135 = v188;
          v178 = _mm_add_ps(_mm_mul_ps(v175, _mm_sub_ps(v177, v173)), v173);
          _mm_storel_ps((double *)g4_m128_ptr<uint64_t>(v5[v174]), v178);
          _mm_storeh_ps((double *)&g4_m128_lane<uint64_t>(v5[v174], 1), v178);
        }
g4_m128_lane<float>(v126, 0) =g4_m128_lane<float>(v126, 0) - v124;
g4_m128_lane<float>(v127, 0) =g4_m128_lane<float>(v127, 0) - v124;
        if ( v135 > (float)(g4_m128_lane<float>(v126, 0) *g4_m128_lane<float>(v127, 0)) )
        {
          v179 = _mm_shuffle_ps(v126, v126, 0);
g4_m128_lane<uint64_t>(v180, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v198)), v136), 0);
g4_m128_lane<uint64_t>(v180, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(v132)), g4_m128_from<__m128>(_mm_cvtsi32_si128(v133))), 0);
g4_m128_lane<uint64_t>(v181, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v196)), g4_m128_from<__m128>(LODWORD(v192))), 0);
g4_m128_lane<uint64_t>(v181, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v191)), g4_m128_from<__m128>(LODWORD(v197))), 0);
          v182 = _mm_add_ps(
                   _mm_mul_ps(_mm_div_ps(v179, _mm_sub_ps(v179, _mm_shuffle_ps(v127, v127, 0))), _mm_sub_ps(v181, v180)),
                   v180);
          _mm_storel_ps((double *)g4_m128_ptr<uint64_t>(v5[v129]), v182);
          _mm_storeh_ps((double *)&g4_m128_lane<uint64_t>(v5[v129], 1), v182);
        }
        goto LABEL_75;
      case 0x30u:
      case 0x31u:
      case 0x32u:
      case 0x33u:
      case 0x34u:
      case 0x35u:
      case 0x36u:
      case 0x37u:
      case 0x38u:
      case 0x39u:
      case 0x3Au:
      case 0x3Bu:
      case 0x3Cu:
      case 0x3Du:
      case 0x3Eu:
      case 0x3Fu:
      case 0x40u:
      case 0x41u:
      case 0x42u:
      case 0x43u:
      case 0x44u:
      case 0x45u:
      case 0x46u:
      case 0x47u:
      case 0x48u:
      case 0x49u:
      case 0x4Au:
      case 0x4Bu:
      case 0x4Cu:
      case 0x4Du:
      case 0x4Eu:
      case 0x4Fu:
        v8 = (int)(uintptr_t)(result) - 48;
        goto LABEL_6;
      case 0x50u:
        v8 = LOBYTE(v198);
        goto LABEL_6;
      case 0x51u:
        v8 = LOBYTE(v197) + (LOBYTE(v198) << 8);
        goto LABEL_6;
      case 0x52u:
        v8 = (LOBYTE(v197) << 8) + LOBYTE(v196) + (LOBYTE(v198) << 16);
        goto LABEL_6;
      case 0x53u:
        v8 = (LOBYTE(v196) << 8) + *((uint8_t *)v199 + 4) + (LOBYTE(v197) << 16) + (LOBYTE(v198) << 24);
LABEL_6:
        v9 = nullptr;
        v10 = (*((uint32_t *)v195 + 11) + v8) | *(uint32_t *)(v194 + 48) & (v193 >> 9 << 8);
        v11 = *(uint32_t *)(**(uint32_t **)(*(uint32_t *)(v194 + 44) + 56) + 52) + 16;
        v12 = *(uint32_t *)(**(uint32_t **)(*(uint32_t *)(v194 + 44) + 56) + 52) == 0;
        v184 = &g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE;
        if ( !v12 )
          v9 = (int *)v11;
        v198 = COERCE_FLOAT(_emutls_get_address(v184));
        v13 = *(hkLifoAllocator::Self **)LODWORD(v198);
        v14 = *(char **)(*(uint32_t *)LODWORD(v198) + 12);
        v15 = *(uint32_t *)(*(uint32_t *)LODWORD(v198) + 8) <= 511;
        v199 = v14;
        if ( v15 || (unsigned int)(uintptr_t)(v14 + 512) > *((uint32_t *)v13 + 4) )
        {
          v199 = (void *)hkLifoAllocator::allocateFromNewSlab(v13, 512);
          v16 = v199;
        }
        else
        {
          *((uint32_t *)v13 + 3) = (uint32_t)(uintptr_t)(v14 + 512);
          v16 = v199;
        }
        v17 = *v9;
        v186 = v16;
        v185 = v10;
        *(float *)&v195 = COERCE_FLOAT((*(int (**)(int *))(v17 + 24))(v9));
        v18 = *(uint32_t *)(v194 + 44);
        v197 = *(float *)(v18 + 48);
        v196 = *(float *)(LODWORD(v197) + 16);
        v19 = *(uint32_t *)LODWORD(v196);
        v187 = v10;
        (*(void (**)(char *, float, float, uint32_t, uint32_t, int *, int))(v19 + 28))(
          &v200,
          COERCE_FLOAT(LODWORD(v196)),
          COERCE_FLOAT(LODWORD(v197)),
          *(uint32_t *)(v18 + 52),
          *(uint32_t *)(v18 + 56),
          v9,
          v10);
        if ( v200 != 0 )
        {
          v20 = *(uint32_t *)(v194 + 44);
          v21 = 35 * *(uint32_t *)(v194 + 24);
          v204 = *(uint32_t *)(v20 + 56);
          v22 = *(uint32_t *)(v204 + 8);
          v202 = v10;
          v203 = v22;
          v201 = *(float *)&v195;
          (*(void (**)(uint32_t, float *, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(v20 + 48)
                                                                       + 20
                                                                       * *(uint8_t *)(*((uint8_t *)v195
                                                                                              + 8)
                                                                                            + v21
                                                                                            + **(uint32_t **)(v20 + 48)
                                                                                            + 416)
                                                                       + 2880))(
            *(uint32_t *)(v20 + 52),
            &v201,
            *(uint32_t *)(v20 + 48),
            *(uint32_t *)(v194 + 36),
            *(uint32_t *)(v194 + 40));
          *(float *)(v194 + 28) = fminf(*(float *)(v194 + 28), *(float *)(*(uint32_t *)(v194 + 36) + 4));
        }
        result = *(hkLifoAllocator::Self **)LODWORD(v198);
        if ( *(int *)(*(uint32_t *)LODWORD(v198) + 8) <= 511
          || *((void **)result + 3) != (char *)v199 + 512
          || v199 == *((void **)result + 5) )
        {
          return hkLifoAllocator::slowBlockFree(result, (char *)v199, 512);
        }
        *((uint32_t *)result + 3) = (uint32_t)(uintptr_t)(v199);
        return result;
      case 0x60u:
      case 0x61u:
      case 0x62u:
      case 0x63u:
        v199 = (char *)v199 + 2;
        v183[(uint32_t)(uintptr_t)(result) + 8] = LOBYTE(v198);
        goto LABEL_82;
      case 0x64u:
      case 0x65u:
      case 0x66u:
      case 0x67u:
        v199 = (char *)v199 + 3;
        v183[(uint32_t)(uintptr_t)(result) + 4] = LOBYTE(v197) + (LOBYTE(v198) << 8);
        goto LABEL_82;
      case 0x68u:
      case 0x69u:
      case 0x6Au:
      case 0x6Bu:
        v148 = (uint8_t *)v199;
        v199 = (char *)v199 + 5;
        v183[(uint32_t)(uintptr_t)(result)] = (LOBYTE(v196) << 8) + (LODWORD(v198) << 24) + (LOBYTE(v197) << 16) + v148[4];
LABEL_82:
        if ( v195 != &v206 )
        {
          v206 = *v195;
          v207 = v195[1];
          v208 = v195[2];
          v209 = v195[3];
          v210 = v195[4];
          v211 = v195[5];
          v212 = v195[6];
          v213 = v195[7];
          v146 = v195[8];
          v215 = *((char **)v195 + 9);
          v214 = v146;
          v147 = v195[10];
          v217 = *((uint32_t *)v195 + 11);
          v216 = v147;
        }
        v198 = COERCE_FLOAT(&v206);
        v6 = *(uint8_t *)v199;
        v25 = *((uint8_t *)v199 + 1);
        v26 = *((uint8_t *)v199 + 2);
        LOBYTE(v196) = *((uint8_t *)v199 + 3);
        *(float *)&v195 = COERCE_FLOAT(&v206);
        result = (hkLifoAllocator::Self *)v6;
        goto LABEL_20;
      case 0x70u:
        v193 = (LOBYTE(v196) << 8) + (LOBYTE(v197) << 16) + (LODWORD(v198) << 24) + *((uint8_t *)v199 + 4);
        v23 = v193;
LABEL_18:
        v24 = (char *)(*(uint32_t *)(*(uint32_t *)(v194 + 16) + 32) + v23);
        v199 = v24;
        v6 = *v24;
        goto LABEL_19;
      default:
        abort();
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkpMoppAabbCastVirtualMachine::aabbCast  (binary VA: 0x17e0f20)
// Original: hkpMoppAabbCastVirtualMachine::aabbCast
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * hkpMoppAabbCastVirtualMachine::aabbCast(int a1, int a2, int a3, int a4)
{
  hkLifoAllocator::Self *result;
  int v5;
  int v6;
  uint8_t *v7;
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm4_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  unsigned int v16;
  float v17; // xmm7_4
  __m128i v18;
  float v19; // xmm3_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm4_4
  float v23; // xmm6_4
  float v24; // xmm7_4
  float v25;
  float v26; // xmm1_4
  float v27; // xmm6_4
  typedef float _g4_t_v28;
  typedef __m128 _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34[5];
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef int _g4_t_v39;
  typedef float _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v28)) > _g4_s0 ? (12u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v29)) > _g4_s1 ? (16u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v30)) > _g4_s2 ? (32u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v31)) > _g4_s3 ? (36u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v32)) > _g4_s4 ? (40u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v33)) > _g4_s5 ? (44u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v34)) > _g4_s6 ? (48u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v35)) > _g4_s7 ? (68u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v36)) > _g4_s8 ? (72u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v37)) > _g4_s9 ? (76u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v38)) > _g4_s10 ? (80u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v39)) > _g4_s11 ? (84u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v40)) > _g4_s12 ? (88u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v41)) > _g4_s13 ? (92u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v42)) > _g4_s14 ? (96u + sizeof(_g4_t_v42)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 72u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 76u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 80u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 84u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 88u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 96u);

  if ( byte_2136310 != 0
    || (hkpCheckKeycode(), result = (hkLifoAllocator::Self *)hkpProcessFlyingColors(&byte_2136310), byte_2136310 != 0) )
  {
    *(uint32_t *)(a1 + 44) = a2;
    v5 = *(uint32_t *)(**(uint32_t **)(a2 + 56) + 20);
    *(uint32_t *)(a1 + 36) = a3;
    *(uint32_t *)(a1 + 16) = v5;
    *(uint32_t *)(a1 + 40) = a4;
    v6 = *(uint8_t *)(**(uint32_t **)(a2 + 52) + 8);
    v34[0] = 0.0;
    *(uint32_t *)(a1 + 24) = v6;
    v34[1] = 0.0;
    *(uint32_t *)(a1 + 28) = 1065353216;
    v34[2] = 0.0;
    *(uint32_t *)(a1 + 32) = 1065353216;
    v7 = *(uint8_t **)(v5 + 32);
    v8 = 1.0 / *(float *)(v5 + 28);
    v34[3] = 0.0;
    *(float *)(a1 + 20) = v8;
    v9 = 0.000015258789f * *(float *)(v5 + 28);
    v10 = *(float *)(a2 + 32) * v9;
    v11 = *(float *)(a2 + 40) * v9;
    v12 = *(float *)(a2 + 44) * v9;
    v35 = *(float *)(a2 + 36) * v9;
    v40 = v9;
    v34[4] = v10;
    v36 = v11;
    v37 = v12;
    v13 = (float)(v35 + v10) + v11;
    v14 = *(float *)(a2 + 16);
    v15 = *(float *)(a2 + 8);
    v16 = *(uint32_t *)(a2 + 4);
    v38 = v13 * 3.0;
    v17 = *(float *)(v5 + 20);
    v18 = _mm_cvtsi32_si128(v16);
    v19 = v14 - *(float *)(v5 + 16);
    *(float *)g4_m128_ptr<int32_t>(v18) = *(float *)g4_m128_ptr<int32_t>(v18) - v17;
    v28 = *(float *)(v5 + 16);
    v20 = *(float *)(v5 + 24);
    v21 = *(float *)(a2 + 20) - v17;
    v22 = v15 - v20;
    v23 = *(float *)(v5 + 28);
    v24 = *(float *)(a2 + 24) - v20;
    v25 = COERCE_FLOAT(_mm_cvtsi128_si32(v18));
    v41 = 0;
g4_m128_lane<int32_t>(v18, 0) = *(uint32_t *)(a2 + 12);
    v39 = 0;
    *(float *)g4_m128_ptr<int32_t>(v18) = *(float *)g4_m128_ptr<int32_t>(v18) - v23;
    v26 = *(float *)(a2 + 28) - v23;
    v27 = *(float *)a2 - v28;
    v42 = 0;
g4_m128_lane<float>(v29, 2) = v22 * v9;
g4_m128_lane<float>(v29, 0) = v27 * v9;
g4_m128_lane<float>(v29, 3) = *(float *)g4_m128_ptr<int32_t>(v18) * v9;
    v30 = v19 * v9;
    v31 = v21 * v9;
g4_m128_lane<float>(v29, 1) = v25 * v9;
    v32 = v24 * v9;
    v33 = v26 * v9;
    *(uint32_t *)(a1 + 48) = -(*v7 == 13);
    return hkpMoppAabbCastVirtualMachine::queryRayOnTree(a1, v34, v7, &v29, 0);
  }
  return result;
}


