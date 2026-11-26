#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpCollect.h"

// ----------------------------------------------------------------------------
// Function: hkpCollectionCollectionAgent3::updateFilter  (binary VA: 0x16ca510)
// Original: hkpCollectionCollectionAgent3::updateFilter
// ----------------------------------------------------------------------------
int hkpCollectionCollectionAgent3::updateFilter(int a1, int a2, int *a3, int *a4, int a5, int a6, int a7)
{
  int v7;
  int v8;
  uint32_t v10[11];

  v10[1] = (uint32_t)(uintptr_t)(a4);
  v10[0] = (uint32_t)(uintptr_t)(a3);
  v7 = *a3;
  v8 = *a4;
  v10[4] = a5;
  v10[5] = a6;
  v10[6] = a7;
  v10[2] = G4_VCALL<int>(v7, 64);
  v10[3] = G4_VCALL<int>(v8, 64);
  return hkAgentNmMachine_UpdateShapeCollectionFilter(a2 + 4, v10);
}

// ----------------------------------------------------------------------------
// Function: hkpCollectionCollectionAgent3::invalidateTim  (binary VA: 0x16ca590)
// Original: hkpCollectionCollectionAgent3::invalidateTim
// ----------------------------------------------------------------------------
int hkpCollectionCollectionAgent3::invalidateTim(int a1, int a2, int a3)
{
  return hkAgent1nMachine_InvalidateTim(a2 + 4, a3);
}

// ----------------------------------------------------------------------------
// Function: hkpCollectionCollectionAgent3::warpTime  (binary VA: 0x16ca5c0)
// Original: hkpCollectionCollectionAgent3::warpTime
// ----------------------------------------------------------------------------
int hkpCollectionCollectionAgent3::warpTime(int a1, int a2, int64_t a3, int a4)
{
  return hkAgent1nMachine_WarpTime(a2 + 4, a3, HIDWORD(a3), a4);
}

// ----------------------------------------------------------------------------
// Function: hkpCollectionCollectionAgent3::initAgentFunc  (binary VA: 0x16ca610)
// Original: hkpCollectionCollectionAgent3::initAgentFunc
// ----------------------------------------------------------------------------
int hkpCollectionCollectionAgent3::initAgentFunc(int a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(hkListAgent3::create);
  *(uint32_t *)(a1 + 40) = (uint32_t)(uintptr_t)(hkpCollectionCollectionAgent3::process);
  *(uint32_t *)(a1 + 24) = (uint32_t)(uintptr_t)(hkpCollectionCollectionAgent3::updateFilter);
  *(uint32_t *)(a1 + 28) = (uint32_t)(uintptr_t)(hkpCollectionCollectionAgent3::invalidateTim);
  *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(hkpCollectionCollectionAgent3::warpTime);
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(hkListAgent3::destroy);
  *(uint8_t *)(a1 + 44) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpCollectionCollectionAgent3::registerAgent3  (binary VA: 0x16ca680)
// Original: hkpCollectionCollectionAgent3::registerAgent3
// ----------------------------------------------------------------------------
uint8_t * hkpCollectionCollectionAgent3::registerAgent3(hkpCollectionCollectionAgent3::Self *self)
{
  typedef int _g4_t_v2[6];
  typedef __m128i _g4_t_v3;
  typedef char _g4_t_v4;
  typedef char _g4_t_v5;
  typedef char _g4_t_v6;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v2)) > _g4_s0 ? (8u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v3)) > _g4_s1 ? (32u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v4)) > _g4_s2 ? (52u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (53u + sizeof(_g4_t_v5)) > _g4_s3 ? (53u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (54u + sizeof(_g4_t_v6)) > _g4_s4 ? (54u + sizeof(_g4_t_v6)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 8u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 32u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 52u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 53u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 54u);

  v3 = g4_to_m128i(0);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  hkpCollectionCollectionAgent3::initAgentFunc((int)(uintptr_t)(v2));
  hkpCollisionDispatcher::registerAgent3((int)(uintptr_t)(self), v2, 22, 22);
  v5 = 1;
  v6 = 1;
  hkpCollisionDispatcher::registerAgent3((int)(uintptr_t)(self), v2, 18, 22);
  hkpCollisionDispatcher::registerAgent3((int)(uintptr_t)(self), v2, 22, 18);
  hkpCollisionDispatcher::registerAgent3((int)(uintptr_t)(self), v2, 18, 18);
  *((uint8_t *)self + 8402) = 1;
  hkpCollectionCollectionAgent3::g_agentRegistered[0] = 1;
  return (uint8_t *)(hkpCollectionCollectionAgent3::g_agentRegistered);
}

// ----------------------------------------------------------------------------
// Function: hkpCollectionCollectionAgent3::process_gatherShapeKeys  (binary VA: 0x16cbd20)
// Original: hkpCollectionCollectionAgent3::process_gatherShapeKeys
// ----------------------------------------------------------------------------
int hkpCollectionCollectionAgent3::process_gatherShapeKeys(int **a1, int a2, int a3, int a4)
{
  int address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int *v8;
  int *v9;
  int v10;
  char v11; // di
  char v12; // si
  int v13;
  uint32_t *v14;
  uint64_t v15; // rax
  float v16; // xmm0_4
  int v17;
  hkLifoAllocator::Self *v18;
  int *v19;
  int v20;
  uint32_t *v21;
  uint64_t v22; // rax
  int i;
  int v24;
  int v25;
  int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  int v32;
  unsigned int v33;
  int v34;
  __m128i v35;
  __m128i v36;
  __m128i v37;
  __m128i v38;
  int v39;
  int v40;
  int v41;
  int v42;
  unsigned int v43;
  int v44;
  unsigned int v45;
  int v46;
  unsigned int v47;
  int v48;
  unsigned int v49;
  int v50;
  int *v51;
  int v52;
  __m128i v53;
  __m128i v54;
  __m128i v55;
  __m128i v56;
  float v57; // xmm7_4
  float v58; // xmm6_4
  float *v59;
  float v60; // xmm5_4
  char v61;
  int ShapeCollectionIfBvTreeSupportsAabbQueries;
  int v63;
  int v64;
  int *v65;
  hkLifoAllocator::Self **v66;
  hkLifoAllocator::Self *v67;
  int v68;
  int v69;
  hkLifoAllocator::Self *v70;
  int v71;
  int *v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int *v77;
  int v78;
  char *v79;
  int v80;
  uint32_t *v81;
  uint64_t v82; // rax
  int v83;
  hkLifoAllocator::Self *v84;
  hkLifoAllocator::Self *v85;
  int v86;
  uint32_t *v87;
  uint64_t v88; // rax
  int v89;
  unsigned int v90;
  unsigned int v91;
  uint32_t *v92;
  int v93;
  uint32_t *v94;
  uint64_t v95; // rax
  float v97; // xmm2_4
  float v98; // xmm0_4
  float v99; // xmm3_4
  float v100; // xmm7_4
  float v101; // xmm6_4
  float v102; // xmm5_4
  int *v103;
  float *v104;
  float *v105;
  float *v106;
  int v107;
  float v108; // xmm6_4
  float v109; // xmm2_4
  float v110; // xmm1_4
  float v111; // xmm0_4
  float v112; // xmm5_4
  float v113; // xmm4_4
  float v114; // xmm3_4
  float v115; // xmm2_4
  __m128i v116;
  int v117;
  float v118; // xmm0_4
  float v119; // xmm2_4
  float v120; // xmm0_4
  float v121; // xmm2_4
  __m128i v122;
  __m128i v123;
  float v124; // xmm1_4
  float v125; // xmm4_4
  float v126; // xmm3_4
  float v127; // xmm5_4
  float v128; // xmm0_4
  float v129; // xmm2_4
  __m128i v130;
  int v131;
  uint32_t *v132;
  uint64_t v133; // rax
  hkLifoAllocator::Self *v134;
  char *v135;
  int v136;
  typedef int _g4_t_v137;
  typedef int _g4_t_v138;
  typedef hkLifoAllocator::Self **_g4_t_v139;
  typedef int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef int _g4_t_v142;
  typedef int _g4_t_v143;
  typedef signed int _g4_t_v144;
  typedef int _g4_t_v145;
  typedef int _g4_t_v146;
  typedef int _g4_t_v147;
  typedef int _g4_t_v148;
  typedef float _g4_t_v149;
  typedef int _g4_t_v150;
  typedef float _g4_t_v151;
  typedef int _g4_t_v152;
  typedef float _g4_t_v153;
  typedef int _g4_t_v154;
  typedef int *_g4_t_v155;
  typedef float *_g4_t_v156;
  typedef float _g4_t_v157;
  typedef int _g4_t_v158;
  typedef int _g4_t_v159;
  typedef int _g4_t_v160;
  typedef int _g4_t_v161;
  typedef uint32_t *_g4_t_v162;
  typedef float _g4_t_v163;
  typedef int _g4_t_Tree;
  typedef float _g4_t_v165;
  typedef int _g4_t_v166;
  typedef float _g4_t_v167;
  typedef int _g4_t_v168;
  typedef int _g4_t_v169;
  typedef int *_g4_t_v170;
  typedef int _g4_t_v171;
  typedef float _g4_t_v172;
  typedef int _g4_t_v173;
  typedef float _g4_t_v174;
  typedef float _g4_t_v175;
  typedef float _g4_t_v176;
  typedef float _g4_t_v177;
  typedef float _g4_t_v178;
  typedef int _g4_t_v179;
  typedef float _g4_t_v180;
  typedef int _g4_t_v181;
  typedef float _g4_t_v182;
  typedef float _g4_t_v183;
  typedef int _g4_t_v184;
  typedef float _g4_t_v185;
  typedef float _g4_t_v186;
  typedef float _g4_t_v187;
  typedef int _g4_t_v188;
  typedef int _g4_t_v189;
  typedef float _g4_t_v190;
  typedef float _g4_t_v191;
  typedef int _g4_t_v192;
  typedef int _g4_t_v193;
  typedef float _g4_t_v194;
  typedef int _g4_t_v195;
  typedef int _g4_t_v196;
  typedef unsigned int _g4_t_v197;
  typedef float _g4_t_v198;
  typedef unsigned int _g4_t_v199;
  typedef unsigned int _g4_t_v200;
  typedef int _g4_t_v201;
  typedef float _g4_t_v202;
  typedef float _g4_t_v203;
  typedef unsigned int _g4_t_v204;
  typedef unsigned int _g4_t_v205;
  typedef signed int _g4_t_v206;
  typedef float _g4_t_v207;
  typedef unsigned int _g4_t_v208;
  typedef unsigned int _g4_t_v209;
  typedef hkLifoAllocator::Self **_g4_t_v210;
  typedef float _g4_t_v211;
  typedef unsigned int _g4_t_v212;
  typedef unsigned int _g4_t_v213;
  typedef char *_g4_t_v214;
  typedef float _g4_t_v215;
  typedef int _g4_t_v216;
  typedef int _g4_t_v217;
  typedef int _g4_t_v218;
  typedef int _g4_t_v219;
  typedef int _g4_t_v220;
  typedef int _g4_t_v221;
  typedef unsigned int _g4_t_v222;
  typedef unsigned int _g4_t_v223;
  typedef unsigned int _g4_t_v224;
  typedef unsigned int _g4_t_v225;
  typedef unsigned int _g4_t_v226;
  typedef unsigned int _g4_t_v227;
  typedef unsigned int _g4_t_v228;
  typedef unsigned int _g4_t_v229;
  typedef int _g4_t_v230[9];
  typedef int _g4_t_v231;
  typedef int _g4_t_v232;
  typedef float _g4_t_v233[87];
  typedef float _g4_t_v234[128];
  typedef uint32_t _g4_t_v235[2051];
  enum : size_t {
    _g4_s0 = 9392u,
    _g4_s1 = (0u + sizeof(_g4_t_v137)) > _g4_s0 ? (0u + sizeof(_g4_t_v137)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v138)) > _g4_s1 ? (4u + sizeof(_g4_t_v138)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v139)) > _g4_s2 ? (4u + sizeof(_g4_t_v139)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v140)) > _g4_s3 ? (8u + sizeof(_g4_t_v140)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v141)) > _g4_s4 ? (12u + sizeof(_g4_t_v141)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v142)) > _g4_s5 ? (12u + sizeof(_g4_t_v142)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v143)) > _g4_s6 ? (16u + sizeof(_g4_t_v143)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v144)) > _g4_s7 ? (16u + sizeof(_g4_t_v144)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v145)) > _g4_s8 ? (20u + sizeof(_g4_t_v145)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v146)) > _g4_s9 ? (24u + sizeof(_g4_t_v146)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v147)) > _g4_s10 ? (28u + sizeof(_g4_t_v147)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v148)) > _g4_s11 ? (32u + sizeof(_g4_t_v148)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v149)) > _g4_s12 ? (32u + sizeof(_g4_t_v149)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v150)) > _g4_s13 ? (36u + sizeof(_g4_t_v150)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v151)) > _g4_s14 ? (36u + sizeof(_g4_t_v151)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v152)) > _g4_s15 ? (40u + sizeof(_g4_t_v152)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v153)) > _g4_s16 ? (40u + sizeof(_g4_t_v153)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v154)) > _g4_s17 ? (44u + sizeof(_g4_t_v154)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v155)) > _g4_s18 ? (44u + sizeof(_g4_t_v155)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v156)) > _g4_s19 ? (48u + sizeof(_g4_t_v156)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v157)) > _g4_s20 ? (52u + sizeof(_g4_t_v157)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v158)) > _g4_s21 ? (52u + sizeof(_g4_t_v158)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v159)) > _g4_s22 ? (56u + sizeof(_g4_t_v159)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v160)) > _g4_s23 ? (60u + sizeof(_g4_t_v160)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v161)) > _g4_s24 ? (60u + sizeof(_g4_t_v161)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v162)) > _g4_s25 ? (64u + sizeof(_g4_t_v162)) : _g4_s25,
    _g4_s27 = (68u + sizeof(_g4_t_v163)) > _g4_s26 ? (68u + sizeof(_g4_t_v163)) : _g4_s26,
    _g4_s28 = (68u + sizeof(_g4_t_Tree)) > _g4_s27 ? (68u + sizeof(_g4_t_Tree)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v165)) > _g4_s28 ? (72u + sizeof(_g4_t_v165)) : _g4_s28,
    _g4_s30 = (72u + sizeof(_g4_t_v166)) > _g4_s29 ? (72u + sizeof(_g4_t_v166)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v167)) > _g4_s30 ? (76u + sizeof(_g4_t_v167)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_v168)) > _g4_s31 ? (76u + sizeof(_g4_t_v168)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v169)) > _g4_s32 ? (80u + sizeof(_g4_t_v169)) : _g4_s32,
    _g4_s34 = (80u + sizeof(_g4_t_v170)) > _g4_s33 ? (80u + sizeof(_g4_t_v170)) : _g4_s33,
    _g4_s35 = (84u + sizeof(_g4_t_v171)) > _g4_s34 ? (84u + sizeof(_g4_t_v171)) : _g4_s34,
    _g4_s36 = (84u + sizeof(_g4_t_v172)) > _g4_s35 ? (84u + sizeof(_g4_t_v172)) : _g4_s35,
    _g4_s37 = (88u + sizeof(_g4_t_v173)) > _g4_s36 ? (88u + sizeof(_g4_t_v173)) : _g4_s36,
    _g4_s38 = (88u + sizeof(_g4_t_v174)) > _g4_s37 ? (88u + sizeof(_g4_t_v174)) : _g4_s37,
    _g4_s39 = (92u + sizeof(_g4_t_v175)) > _g4_s38 ? (92u + sizeof(_g4_t_v175)) : _g4_s38,
    _g4_s40 = (96u + sizeof(_g4_t_v176)) > _g4_s39 ? (96u + sizeof(_g4_t_v176)) : _g4_s39,
    _g4_s41 = (100u + sizeof(_g4_t_v177)) > _g4_s40 ? (100u + sizeof(_g4_t_v177)) : _g4_s40,
    _g4_s42 = (104u + sizeof(_g4_t_v178)) > _g4_s41 ? (104u + sizeof(_g4_t_v178)) : _g4_s41,
    _g4_s43 = (104u + sizeof(_g4_t_v179)) > _g4_s42 ? (104u + sizeof(_g4_t_v179)) : _g4_s42,
    _g4_s44 = (108u + sizeof(_g4_t_v180)) > _g4_s43 ? (108u + sizeof(_g4_t_v180)) : _g4_s43,
    _g4_s45 = (108u + sizeof(_g4_t_v181)) > _g4_s44 ? (108u + sizeof(_g4_t_v181)) : _g4_s44,
    _g4_s46 = (108u + sizeof(_g4_t_v182)) > _g4_s45 ? (108u + sizeof(_g4_t_v182)) : _g4_s45,
    _g4_s47 = (112u + sizeof(_g4_t_v183)) > _g4_s46 ? (112u + sizeof(_g4_t_v183)) : _g4_s46,
    _g4_s48 = (112u + sizeof(_g4_t_v184)) > _g4_s47 ? (112u + sizeof(_g4_t_v184)) : _g4_s47,
    _g4_s49 = (112u + sizeof(_g4_t_v185)) > _g4_s48 ? (112u + sizeof(_g4_t_v185)) : _g4_s48,
    _g4_s50 = (112u + sizeof(_g4_t_v186)) > _g4_s49 ? (112u + sizeof(_g4_t_v186)) : _g4_s49,
    _g4_s51 = (116u + sizeof(_g4_t_v187)) > _g4_s50 ? (116u + sizeof(_g4_t_v187)) : _g4_s50,
    _g4_s52 = (116u + sizeof(_g4_t_v188)) > _g4_s51 ? (116u + sizeof(_g4_t_v188)) : _g4_s51,
    _g4_s53 = (116u + sizeof(_g4_t_v189)) > _g4_s52 ? (116u + sizeof(_g4_t_v189)) : _g4_s52,
    _g4_s54 = (116u + sizeof(_g4_t_v190)) > _g4_s53 ? (116u + sizeof(_g4_t_v190)) : _g4_s53,
    _g4_s55 = (120u + sizeof(_g4_t_v191)) > _g4_s54 ? (120u + sizeof(_g4_t_v191)) : _g4_s54,
    _g4_s56 = (120u + sizeof(_g4_t_v192)) > _g4_s55 ? (120u + sizeof(_g4_t_v192)) : _g4_s55,
    _g4_s57 = (120u + sizeof(_g4_t_v193)) > _g4_s56 ? (120u + sizeof(_g4_t_v193)) : _g4_s56,
    _g4_s58 = (120u + sizeof(_g4_t_v194)) > _g4_s57 ? (120u + sizeof(_g4_t_v194)) : _g4_s57,
    _g4_s59 = (124u + sizeof(_g4_t_v195)) > _g4_s58 ? (124u + sizeof(_g4_t_v195)) : _g4_s58,
    _g4_s60 = (124u + sizeof(_g4_t_v196)) > _g4_s59 ? (124u + sizeof(_g4_t_v196)) : _g4_s59,
    _g4_s61 = (124u + sizeof(_g4_t_v197)) > _g4_s60 ? (124u + sizeof(_g4_t_v197)) : _g4_s60,
    _g4_s62 = (124u + sizeof(_g4_t_v198)) > _g4_s61 ? (124u + sizeof(_g4_t_v198)) : _g4_s61,
    _g4_s63 = (128u + sizeof(_g4_t_v199)) > _g4_s62 ? (128u + sizeof(_g4_t_v199)) : _g4_s62,
    _g4_s64 = (128u + sizeof(_g4_t_v200)) > _g4_s63 ? (128u + sizeof(_g4_t_v200)) : _g4_s63,
    _g4_s65 = (128u + sizeof(_g4_t_v201)) > _g4_s64 ? (128u + sizeof(_g4_t_v201)) : _g4_s64,
    _g4_s66 = (128u + sizeof(_g4_t_v202)) > _g4_s65 ? (128u + sizeof(_g4_t_v202)) : _g4_s65,
    _g4_s67 = (128u + sizeof(_g4_t_v203)) > _g4_s66 ? (128u + sizeof(_g4_t_v203)) : _g4_s66,
    _g4_s68 = (132u + sizeof(_g4_t_v204)) > _g4_s67 ? (132u + sizeof(_g4_t_v204)) : _g4_s67,
    _g4_s69 = (132u + sizeof(_g4_t_v205)) > _g4_s68 ? (132u + sizeof(_g4_t_v205)) : _g4_s68,
    _g4_s70 = (132u + sizeof(_g4_t_v206)) > _g4_s69 ? (132u + sizeof(_g4_t_v206)) : _g4_s69,
    _g4_s71 = (132u + sizeof(_g4_t_v207)) > _g4_s70 ? (132u + sizeof(_g4_t_v207)) : _g4_s70,
    _g4_s72 = (136u + sizeof(_g4_t_v208)) > _g4_s71 ? (136u + sizeof(_g4_t_v208)) : _g4_s71,
    _g4_s73 = (136u + sizeof(_g4_t_v209)) > _g4_s72 ? (136u + sizeof(_g4_t_v209)) : _g4_s72,
    _g4_s74 = (136u + sizeof(_g4_t_v210)) > _g4_s73 ? (136u + sizeof(_g4_t_v210)) : _g4_s73,
    _g4_s75 = (136u + sizeof(_g4_t_v211)) > _g4_s74 ? (136u + sizeof(_g4_t_v211)) : _g4_s74,
    _g4_s76 = (140u + sizeof(_g4_t_v212)) > _g4_s75 ? (140u + sizeof(_g4_t_v212)) : _g4_s75,
    _g4_s77 = (140u + sizeof(_g4_t_v213)) > _g4_s76 ? (140u + sizeof(_g4_t_v213)) : _g4_s76,
    _g4_s78 = (140u + sizeof(_g4_t_v214)) > _g4_s77 ? (140u + sizeof(_g4_t_v214)) : _g4_s77,
    _g4_s79 = (140u + sizeof(_g4_t_v215)) > _g4_s78 ? (140u + sizeof(_g4_t_v215)) : _g4_s78,
    _g4_s80 = (144u + sizeof(_g4_t_v216)) > _g4_s79 ? (144u + sizeof(_g4_t_v216)) : _g4_s79,
    _g4_s81 = (144u + sizeof(_g4_t_v217)) > _g4_s80 ? (144u + sizeof(_g4_t_v217)) : _g4_s80,
    _g4_s82 = (148u + sizeof(_g4_t_v218)) > _g4_s81 ? (148u + sizeof(_g4_t_v218)) : _g4_s81,
    _g4_s83 = (148u + sizeof(_g4_t_v219)) > _g4_s82 ? (148u + sizeof(_g4_t_v219)) : _g4_s82,
    _g4_s84 = (152u + sizeof(_g4_t_v220)) > _g4_s83 ? (152u + sizeof(_g4_t_v220)) : _g4_s83,
    _g4_s85 = (152u + sizeof(_g4_t_v221)) > _g4_s84 ? (152u + sizeof(_g4_t_v221)) : _g4_s84,
    _g4_s86 = (160u + sizeof(_g4_t_v222)) > _g4_s85 ? (160u + sizeof(_g4_t_v222)) : _g4_s85,
    _g4_s87 = (164u + sizeof(_g4_t_v223)) > _g4_s86 ? (164u + sizeof(_g4_t_v223)) : _g4_s86,
    _g4_s88 = (168u + sizeof(_g4_t_v224)) > _g4_s87 ? (168u + sizeof(_g4_t_v224)) : _g4_s87,
    _g4_s89 = (172u + sizeof(_g4_t_v225)) > _g4_s88 ? (172u + sizeof(_g4_t_v225)) : _g4_s88,
    _g4_s90 = (176u + sizeof(_g4_t_v226)) > _g4_s89 ? (176u + sizeof(_g4_t_v226)) : _g4_s89,
    _g4_s91 = (180u + sizeof(_g4_t_v227)) > _g4_s90 ? (180u + sizeof(_g4_t_v227)) : _g4_s90,
    _g4_s92 = (184u + sizeof(_g4_t_v228)) > _g4_s91 ? (184u + sizeof(_g4_t_v228)) : _g4_s91,
    _g4_s93 = (188u + sizeof(_g4_t_v229)) > _g4_s92 ? (188u + sizeof(_g4_t_v229)) : _g4_s92,
    _g4_s94 = (192u + sizeof(_g4_t_v230)) > _g4_s93 ? (192u + sizeof(_g4_t_v230)) : _g4_s93,
    _g4_s95 = (228u + sizeof(_g4_t_v231)) > _g4_s94 ? (228u + sizeof(_g4_t_v231)) : _g4_s94,
    _g4_s96 = (248u + sizeof(_g4_t_v232)) > _g4_s95 ? (248u + sizeof(_g4_t_v232)) : _g4_s95,
    _g4_s97 = (260u + sizeof(_g4_t_v233)) > _g4_s96 ? (260u + sizeof(_g4_t_v233)) : _g4_s96,
    _g4_s98 = (608u + sizeof(_g4_t_v234)) > _g4_s97 ? (608u + sizeof(_g4_t_v234)) : _g4_s97,
    _g4_s99 = (1120u + sizeof(_g4_t_v235)) > _g4_s98 ? (1120u + sizeof(_g4_t_v235)) : _g4_s98
  };
  alignas(16) uint8_t _g4_sf[_g4_s99];
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 0u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 4u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 4u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 8u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 12u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 12u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 16u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 16u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 20u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 24u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 28u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 32u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 32u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 36u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 36u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 40u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 40u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 44u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 44u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 48u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 52u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 52u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 56u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 60u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 60u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 64u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 68u);
  _g4_t_Tree &Tree = *reinterpret_cast<_g4_t_Tree *>(_g4_sf + 68u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 72u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 72u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 76u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 76u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 80u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 80u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 84u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 84u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 88u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 88u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 92u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 96u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 100u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 104u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 104u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 108u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 108u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 108u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 112u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 112u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 112u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 112u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 116u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 116u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 116u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 116u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 120u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 120u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 120u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 120u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 124u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 124u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 124u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 124u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 128u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 128u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 128u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 128u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 128u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 132u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 132u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 132u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 132u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 136u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 136u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 136u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 136u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 140u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 140u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 140u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 140u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 144u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 144u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 148u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 148u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 152u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 152u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 160u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 164u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 168u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 172u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 176u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 180u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 184u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 188u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 192u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 228u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 248u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 260u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 608u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 1120u);

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance));
  v5 = *(uint32_t *)address;
  v147 = address;
  v6 = *(uint32_t **)(*(uint32_t *)address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*(uint32_t *)address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("LtCollColl3");
    v6[3] = (uint32_t)(uintptr_t)("StInit");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 4);
  }
  v8 = *a1;
  v9 = a1[1];
  v10 = *a1[3];
  v11 = ((*(uint32_t *)(v10 + 4 * *(uint8_t *)(**a1 + 8) + 272) >> 22) ^ 1) & 1;
  v12 = ((*(uint32_t *)(v10 + 4 * *(uint8_t *)(*v9 + 8) + 272) >> 22) ^ 1) & 1;
  if ( v12 == 0 && v11 == 0 )
  {
    v11 = 0;
    if ( v8[3] == 0 )
      v11 = v8[17] != 0;
    v61 = 0;
    if ( v9[3] == 0 )
      v61 = v9[17] != 0;
    if ( v11 == v61 )
    {
      ShapeCollectionIfBvTreeSupportsAabbQueries = hkBvTreeAgent3::getShapeCollectionIfBvTreeSupportsAabbQueries(v8);
      v63 = hkBvTreeAgent3::getShapeCollectionIfBvTreeSupportsAabbQueries(a1[1]);
      v11 = ShapeCollectionIfBvTreeSupportsAabbQueries != 0
         && *(uint8_t *)(ShapeCollectionIfBvTreeSupportsAabbQueries + 8) == 8;
      if ( v63 != 0 && *(uint8_t *)(v63 + 8) == 8 )
      {
        if ( v11 != 0 )
          v11 = *(uint32_t *)(ShapeCollectionIfBvTreeSupportsAabbQueries + 28)
              - *(uint16_t *)(ShapeCollectionIfBvTreeSupportsAabbQueries + 38) <= *(uint32_t *)(v63 + 28)
                                                                                        - *(uint16_t *)(v63 + 38);
      }
      else if ( v11 == 0 )
      {
        v11 = *(float *)(a1[1][2] + 160) >= *(float *)((*a1)[2] + 160);
      }
    }
  }
  else if ( v12 != 0 && v11 != 0 )
  {
    v64 = G4_VCALL<int>(a2, 8);
    v65 = *a1;
    if ( (*a1)[3] == 0 && v65[17] != 0 && v65[8] <= (unsigned int)v65[12] )
    {
      v136 = *((uint16_t *)v65 + 32);
      if ( v64 < v136 )
        v64 = v136;
    }
    v66 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v67 = *v66;
    v144 = (32 * v64 + 255) & 0xFFFFFF80;
    v155 = *((int **)*v66 + 3);
    if ( v144 <= *((uint32_t *)*v66 + 2) && (unsigned int)(v68 = v144 + *((uint32_t *)*v66 + 3)) <= *((uint32_t *)v67 + 4) )
      *((uint32_t *)v67 + 3) = v68;
    else
      v155 = (int *)hkLifoAllocator::allocateFromNewSlab(v67, v144);
    Tree = sub_16CA950((int)(uintptr_t)(*a1), (int)(uintptr_t)(a1[2]), a2, (int)(uintptr_t)(a1[3]), v155);
    v210 = v66;
    v197 = v144;
    v161 = (int)(uintptr_t)(*a1);
    v142 = (int)(uintptr_t)(a1[1]);
    a2 = a3;
    v162 = v235;
    if ( Tree == 0 )
      goto LABEL_157;
LABEL_91:
    v69 = G4_VCALL<int>(a2, 8);
    if ( *(uint32_t *)(v142 + 12) == 0
      && *(uint32_t *)(v142 + 68) != 0
      && *(uint32_t *)(v142 + 32) <= *(uint32_t *)(v142 + 48)
      && v69 < *(uint16_t *)(v142 + 64) )
    {
      v69 = *(uint16_t *)(v142 + 64);
    }
    v206 = (32 * v69 + 255) & 0xFFFFFF80;
    v70 = *v210;
    v214 = *((char **)*v210 + 3);
    if ( v206 <= *((uint32_t *)*v210 + 2) && (unsigned int)(v71 = v206 + *((uint32_t *)*v210 + 3)) <= *((uint32_t *)v70 + 4) )
    {
      *((uint32_t *)v70 + 3) = v71;
      v72 = (int *)v214;
    }
    else
    {
      v72 = (int *)hkLifoAllocator::allocateFromNewSlab(v70, v206);
      v214 = (char *)v72;
    }
    v73 = sub_16CA950(v142, 0, a2, (int)(uintptr_t)(a1[3]), v72);
    v74 = Tree;
    v201 = v206;
    v75 = Tree + 3;
    v76 = v73 + 3;
LABEL_96:
    v77 = &v155[8 * v74];
    do
    {
      ++v74;
      *v77 = -1;
      v77 += 8;
    }
    while ( v74 <= v75 );
    v78 = v73;
    v79 = &v214[32 * v73];
    do
    {
      ++v78;
      *(uint32_t *)v79 = -1;
      v79 += 32;
    }
    while ( v78 <= v76 );
    v80 = *(uint32_t *)v147;
    v81 = *(uint32_t **)(*(uint32_t *)v147 + 4);
    if ( (unsigned int)(uintptr_t)(v81) < *(uint32_t *)(*(uint32_t *)v147 + 12) )
    {
      *v81 = (uint32_t)(uintptr_t)("St1-Axis");
      v82 = __rdtsc();
      v81[1] = v82;
      *(uint32_t *)(v80 + 4) = (uint32_t)(uintptr_t)(v81 + 3);
    }
    v235[0] = 0;
    if ( (int *)v161 == *a1 )
      v83 = hk1AxisSweep::collide(v155, Tree, v214, v73, a4, 2047, v162);
    else
      v83 = hk1AxisSweep::collide(v214, v73, v155, Tree, a4, 2047, v162);
    v84 = *v210;
    if ( v206 > *((uint32_t *)*v210 + 2) || *((char **)v84 + 3) != &v214[v201] || *((char **)v84 + 5) == v214 )
      hkLifoAllocator::slowBlockFree(*v210, v214, v201);
    else
      *((uint32_t *)v84 + 3) = (uint32_t)(uintptr_t)(v214);
    v85 = *v210;
    if ( v144 > *((uint32_t *)*v210 + 2)
      || *((int **)v85 + 3) != (int *)((char *)v155 + v197)
      || v155 == *((int **)v85 + 5) )
    {
      hkLifoAllocator::slowBlockFree(*v210, (char *)v155, v197);
    }
    else
    {
      *((uint32_t *)v85 + 3) = (uint32_t)(uintptr_t)(v155);
    }
    if ( v83 != 0 )
    {
      v86 = *(uint32_t *)v147;
      v87 = *(uint32_t **)(*(uint32_t *)v147 + 4);
      if ( (unsigned int)(uintptr_t)(v87) < *(uint32_t *)(*(uint32_t *)v147 + 12) )
      {
        *v87 = (uint32_t)(uintptr_t)("StSortKeyPairs");
        v88 = __rdtsc();
        v87[1] = v88;
        *(uint32_t *)(v86 + 4) = (uint32_t)(uintptr_t)(v87 + 3);
        v89 = *(uint32_t *)v147;
        v90 = *(uint32_t *)(*(uint32_t *)v147 + 4);
        if ( v90 < *(uint32_t *)(*(uint32_t *)v147 + 12) )
        {
          v91 = v90 + 8;
          *(float *)(v91 - 4) = (float)v83;
          *(uint32_t *)(v91 - 8) = (uint32_t)(uintptr_t)("MiNumKeyPairs");
          *(uint32_t *)(v89 + 4) = v91;
        }
      }
      if ( v83 > 1 )
        hkAlgorithm::quickSortRecursive_4671dd(a4, 0, v83 - 1);
    }
    v92 = (uint32_t *)(a4 + 8 * v83);
    *v92 = -1;
    v92[1] = -1;
    v93 = *(uint32_t *)v147;
    v94 = *(uint32_t **)(*(uint32_t *)v147 + 4);
    if ( (unsigned int)(uintptr_t)(v94) < *(uint32_t *)(*(uint32_t *)v147 + 12) )
    {
      *v94 = (uint32_t)(uintptr_t)("lt");
      v95 = __rdtsc();
      v94[1] = v95;
      *(uint32_t *)(v93 + 4) = (uint32_t)(uintptr_t)(v94 + 3);
    }
    return v83;
  }
  v13 = *(uint32_t *)v147;
  v14 = *(uint32_t **)(*(uint32_t *)v147 + 4);
  if ( (unsigned int)(uintptr_t)(v14) < *(uint32_t *)(*(uint32_t *)v147 + 12) )
  {
    *v14 = (uint32_t)(uintptr_t)("StQueryTree");
    v15 = __rdtsc();
    v14[1] = v15;
    *(uint32_t *)(v13 + 4) = (uint32_t)(uintptr_t)(v14 + 3);
  }
  if ( v11 != 0 )
  {
    hkTransformf::setInverse((hkTransformf::Self *)v234, (const hkTransformf::Self *)(a1 + 8));
    Tree = hkBvTreeAgent3::calcAabbAndQueryTree(
             (uint32_t *)(uintptr_t)*a1,
             (uint32_t *)a1[1],
             (int)(uintptr_t)(v234),
             (float *)a1 + 28,
             (int)(uintptr_t)(a1[3]),
             nullptr,
             COERCE_FLOAT(v235),
             COERCE_FLOAT(2048),
             v137,
             v138,
             v140,
             v141,
             v143,
             v145,
             v146,
             v147,
             v148,
             v150,
             v152,
             v154,
             v156,
             v157,
             COERCE_FLOAT(v234),
             v160,
             COERCE_FLOAT(v235),
             v163,
             v165,
             v167,
             v169,
             v171,
             v173,
             v175,
             v176,
             v177,
             v178,
             v180,
             v183,
             v187,
             v191);
    v161 = (int)(uintptr_t)(a1[1]);
    v142 = (int)(uintptr_t)(*a1);
  }
  else
  {
    v234[0] = -*((float *)a1 + 28);
    v234[1] = -*((float *)a1 + 29);
    v16 = *((float *)a1 + 31);
    v234[2] = -*((float *)a1 + 30);
    v234[3] = v16;
    Tree = hkBvTreeAgent3::calcAabbAndQueryTree(
             (uint32_t *)(uintptr_t)a1[1],
             (uint32_t *)*a1,
             (int)(uintptr_t)(a1 + 8),
             v234,
             (int)(uintptr_t)(a1[3]),
             nullptr,
             COERCE_FLOAT(v235),
             COERCE_FLOAT(2048),
             v137,
             v138,
             v140,
             v141,
             v143,
             v145,
             v146,
             v147,
             v148,
             v150,
             v152,
             v154,
             v156,
             v157,
             COERCE_FLOAT(v234),
             v160,
             COERCE_FLOAT(v235),
             v163,
             v165,
             v167,
             v169,
             v171,
             v173,
             v175,
             v176,
             v177,
             v178,
             v180,
             v183,
             v187,
             v191);
    v17 = a3;
    v161 = (int)(uintptr_t)(*a1);
    v142 = (int)(uintptr_t)(a1[1]);
    a3 = a2;
    a2 = v17;
  }
  v139 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v18 = *v139;
  v144 = (32 * Tree + 255) & 0xFFFFFF80;
  v19 = *((int **)*v139 + 3);
  v155 = v19;
  if ( v144 <= *((uint32_t *)*v139 + 2) && (unsigned int)(uintptr_t)(v19) + v144 <= *((uint32_t *)v18 + 4) )
    *((uint32_t *)v18 + 3) = (uint32_t)(uintptr_t)((char *)v19 + v144);
  else
    v155 = (int *)hkLifoAllocator::allocateFromNewSlab(v18, (32 * Tree + 255) & 0xFFFFFF80);
  v20 = *(uint32_t *)v147;
  v21 = *(uint32_t **)(*(uint32_t *)v147 + 4);
  if ( (unsigned int)(uintptr_t)(v21) < *(uint32_t *)(*(uint32_t *)v147 + 12) )
  {
    *v21 = (uint32_t)(uintptr_t)("StCalcAABBs");
    v22 = __rdtsc();
    v21[1] = v22;
    *(uint32_t *)(v20 + 4) = (uint32_t)(uintptr_t)(v21 + 3);
  }
  v158 = *(uint32_t *)(a1[3][24] + 16);
  if ( v158 != 0 )
  {
    for ( i = v161; *(uint32_t *)(i + 12) != 0; i = *(uint32_t *)(i + 12) )
      ;
    hkAabbUtil::initOffsetAabbInput(*(hkTransformf::Self **)(i + 8), (int)(uintptr_t)(v230));
  }
  if ( Tree <= 0 )
  {
LABEL_152:
    v131 = *(uint32_t *)v147;
    v132 = *(uint32_t **)(*(uint32_t *)v147 + 4);
    if ( (unsigned int)(uintptr_t)(v132) < *(uint32_t *)(*(uint32_t *)v147 + 12) )
    {
      *v132 = (uint32_t)(uintptr_t)("StSortAABBs");
      v133 = __rdtsc();
      v132[1] = v133;
      *(uint32_t *)(v131 + 4) = (uint32_t)(uintptr_t)(v132 + 3);
    }
    if ( Tree > 1 )
      hkAlgorithm::quickSortRecursive_e29bcb(
        (int)(uintptr_t)(v155),
        0,
        Tree - 1);
    v197 = (32 * Tree + 255) & 0xFFFFFF80;
    v210 = v139;
    if ( Tree != 0 )
      goto LABEL_91;
LABEL_157:
    v134 = *v210;
    v135 = *((char **)*v210 + 3);
    v214 = v135;
    if ( *((int *)*v210 + 2) > 127 && (unsigned int)(uintptr_t)(v135 + 128) <= *((uint32_t *)v134 + 4) )
      *((uint32_t *)v134 + 3) = (uint32_t)(uintptr_t)(v135 + 128);
    else
      v214 = (char *)hkLifoAllocator::allocateFromNewSlab(v134, 128);
    v201 = 128;
    v206 = 128;
    v76 = 3;
    v75 = 3;
    v73 = 0;
    v74 = Tree;
    goto LABEL_96;
  }
  v168 = 0;
  v170 = v155;
  while ( 1 )
  {
    v166 = v162[v168];
    v52 = G4_VCALL<int>(a3, 24, v166, v159);
    G4_VCALL<void>(v52, 24, *(uint32_t *)(v161 + 8), a1[3][3], &v222);
    if ( v158 != 0 )
    {
      v153 = (float)(*(float *)&v226 - *(float *)&v222) * 0.5;
      v97 = (float)((float)(*(float *)&v222 - *(float *)&v226) * 0.5) + *(float *)&v226;
      v151 = (float)(*(float *)&v227 - *(float *)&v223) * 0.5;
      v149 = (float)(*(float *)&v228 - *(float *)&v224) * 0.5;
      v182 = *(float *)&v227 + (float)((float)(*(float *)&v223 - *(float *)&v227) * 0.5);
      v98 = (float)((float)(*(float *)&v224 - *(float *)&v228) * 0.5) + *(float *)&v228;
      v99 = (float)((float)(*(float *)&v225 - *(float *)&v229) * 0.5) + *(float *)&v229;
      v100 = (float)((float)((float)(v233[71] * v97) + (float)(v233[75] * v182)) + (float)(v233[79] * v98)) + v233[83];
      v101 = (float)((float)((float)(v233[72] * v97) + (float)(v233[76] * v182)) + (float)(v233[80] * v98)) + v233[84];
      v102 = (float)((float)((float)(v233[73] * v97) + (float)(v233[77] * v182)) + (float)(v233[81] * v98)) + v233[85];
      v202 = (float)((float)((float)(v233[59] * v101) + (float)(v233[55] * v100)) + (float)(v233[63] * v102)) + v233[67];
      v198 = fminf(v97, v202);
      v203 = fmaxf(v97, v202);
      v194 = fminf(
               v182,
               (float)((float)((float)(v233[60] * v101) + (float)(v233[56] * v100)) + (float)(v233[64] * v102))
             + v233[68]);
      v190 = fminf(
               v98,
               (float)((float)((float)(v233[61] * v101) + (float)(v233[57] * v100)) + (float)(v233[65] * v102))
             + v233[69]);
      v211 = fmaxf(
               v98,
               (float)((float)((float)(v233[61] * v101) + (float)(v233[57] * v100)) + (float)(v233[65] * v102))
             + v233[69]);
      v186 = fminf(
               v99,
               (float)((float)((float)(v233[62] * v101) + (float)(v233[58] * v100)) + (float)(v233[66] * v102))
             + v233[70]);
      v207 = fmaxf(
               v99,
               (float)((float)((float)(v233[62] * v101) + (float)(v233[58] * v100)) + (float)(v233[66] * v102))
             + v233[70]);
      v215 = fmaxf(
               v182,
               (float)((float)((float)(v233[60] * v101) + (float)(v233[56] * v100)) + (float)(v233[64] * v102))
             + v233[68]);
      if ( SLODWORD(v233[51]) > 0 )
      {
        v103 = v230;
        v104 = (float *)&v231;
        v105 = (float *)&v232;
        v106 = v233;
        v107 = 0;
        v174 = v101 - *(float *)(v230[0] + 132);
        v172 = v102 - *(float *)(v230[0] + 136);
        do
        {
          v108 = *((float *)v103 + 19);
          ++v107;
          v104 += 16;
          v105 += 16;
          v106 += 16;
          v103 += 16;
          v109 = (float)((float)(v100 - *(float *)(v230[0] + 128)) * v108) + *(float *)(v230[0] + 128);
          v110 = (float)(v174 * v108) + *(float *)(v230[0] + 132);
          v111 = (float)(v172 * v108) + *(float *)(v230[0] + 136);
          v112 = (float)((float)((float)(*((float *)v103 - 12) * v109) + (float)(*(v104 - 17) * v110))
                       + (float)(*(v105 - 18) * v111))
               + *(v106 - 17);
          v113 = (float)((float)((float)(*((float *)v103 - 11) * v109) + (float)(*(v104 - 16) * v110))
                       + (float)(*(v105 - 17) * v111))
               + *(v106 - 16);
          v114 = (float)((float)((float)(*((float *)v103 - 10) * v109) + (float)(*(v104 - 15) * v110))
                       + (float)(*(v105 - 16) * v111))
               + *(v106 - 15);
          v115 = (float)((float)((float)(v109 * *((float *)v103 - 9)) + (float)(v110 * *(v104 - 14)))
                       + (float)(v111 * *(v105 - 15)))
               + v108;
          v203 = fmaxf(v203, v112);
          v198 = fminf(v198, v112);
          v194 = fminf(v194, v113);
          v190 = fminf(v190, v114);
          v186 = fminf(v186, v115);
          v215 = fmaxf(v215, v113);
          v211 = fmaxf(v211, v114);
          v207 = fmaxf(v207, v115);
        }
        while ( v107 != LODWORD(v233[51]) );
      }
g4_m128_raw(v116) = LODWORD(v153);
      *(float *)g4_m128_ptr<int32_t>(v116) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v116) * *(float *)g4_m128_ptr<int32_t>(v116))
                                       + (float)(v151 * v151))
                               + (float)(v149 * v149);
      if ( *(float *)g4_m128_ptr<int32_t>(v116) <= 0.0 )
      {
        v121 = 0.0;
        v120 = 0.0;
      }
      else
      {
        v117 = ((_mm_cvtsi128_si32(v116) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v116) >> 1));
        v118 = (float)(*(float *)&v117 * 1.5)
             - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v116)) * *(float *)&v117)
                     * (float)(*(float *)&v117 * *(float *)&v117));
        v119 = (float)(v118 * 1.5)
             - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v116)) * v118) * (float)(v118 * v118));
        v120 = (float)((float)(1.5 * v119)
                     - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v116)) * v119) * (float)(v119 * v119)))
             * *(float *)g4_m128_ptr<int32_t>(v116);
        v121 = 0.73205084f * v120;
      }
g4_m128_raw(v122) = LODWORD(v190);
g4_m128_raw(v123) = LODWORD(v186);
      v124 = fminf(*(float *)(v230[0] + 156), v121) * v120;
      v125 = fminf(v120, v153 + v124);
      v126 = fminf(v120, v151 + v124);
      v127 = fminf(v120, v149 + v124);
      v128 = fminf(v120, v124 + (float)((float)(*(float *)&v229 - *(float *)&v225) * 0.5));
g4_m128_raw(v53) = LODWORD(v198);
      *(float *)g4_m128_ptr<int32_t>(v53) = v198 - v125;
      v129 = v127;
g4_m128_raw(v130) = LODWORD(v194);
      *(float *)g4_m128_ptr<int32_t>(v122) = v190 - v129;
      *(float *)g4_m128_ptr<int32_t>(v130) = v194 - v126;
      *(float *)&v222 = v198 - v125;
      *(float *)g4_m128_ptr<int32_t>(v123) = v186 - v128;
      *(float *)&v226 = v125 + v203;
      *(float *)&v223 = v194 - v126;
      *(float *)&v224 = v190 - v129;
      *(float *)&v227 = v126 + v215;
      v54 = v130;
      *(float *)&v228 = v129 + v211;
      v56 = v123;
      *(float *)&v229 = v128 + v207;
      v55 = v122;
      v225 =g4_m128_lane<uint32_t>(v123, 0);
    }
    else
    {
g4_m128_raw(v53) = v222;
g4_m128_raw(v54) = v223;
g4_m128_raw(v55) = v224;
g4_m128_raw(v56) = v225;
    }
    v57 = hkAabbUtil::hkAabbUint32MaxVal[0];
    v185 = hkAabbUtil::hkAabbUint32MaxVal[3];
    v58 = hkAabbUtil::hkAabbUint32MaxVal[1];
    v59 = (float *)a1[3];
    v60 = hkAabbUtil::hkAabbUint32MaxVal[2];
    *(float *)g4_m128_ptr<int32_t>(v53) = fminf(
                                (float)(*(float *)g4_m128_ptr<int32_t>(v53) + v59[8]) * v59[16],
                                hkAabbUtil::hkAabbUint32MaxVal[0]);
    *(float *)g4_m128_ptr<int32_t>(v56) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v56) + v59[11]) * v59[19], v185);
    *(float *)g4_m128_ptr<int32_t>(v54) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v54) + v59[9]) * v59[17], v58);
    *(float *)g4_m128_ptr<int32_t>(v55) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v55) + v59[10]) * v59[18], v60);
    if ( *(float *)g4_m128_ptr<int32_t>(v53) > 0.0 )
    {
      v24 = _mm_cvtsi128_si32(v53);
      v212 = (v24 & 0x7F800000u) >> 23;
      v25 = v212 - 127;
      if ( *(float *)g4_m128_ptr<int32_t>(v54) > 0.0 )
        goto LABEL_23;
    }
    else
    {
      v24 = 0;
      v25 = -127;
      LOBYTE(v212) = 0;
      if ( *(float *)g4_m128_ptr<int32_t>(v54) > 0.0 )
      {
LABEL_23:
        v26 = _mm_cvtsi128_si32(v54);
        v208 = (v26 & 0x7F800000u) >> 23;
        v195 = v208 - 127;
        if ( *(float *)g4_m128_ptr<int32_t>(v55) > 0.0 )
          goto LABEL_24;
        goto LABEL_70;
      }
    }
    v26 = 0;
    v195 = -127;
    LOBYTE(v208) = 0;
    if ( *(float *)g4_m128_ptr<int32_t>(v55) > 0.0 )
    {
LABEL_24:
      v181 = _mm_cvtsi128_si32(v55);
      v204 = (v181 & 0x7F800000u) >> 23;
      v192 = v204 - 127;
      if ( *(float *)g4_m128_ptr<int32_t>(v56) > 0.0 )
        goto LABEL_25;
      goto LABEL_71;
    }
LABEL_70:
    v192 = -127;
    LOBYTE(v204) = 0;
    v181 = 0;
    if ( *(float *)g4_m128_ptr<int32_t>(v56) > 0.0 )
    {
LABEL_25:
      v179 = _mm_cvtsi128_si32(v56);
      v199 = (v179 & 0x7F800000u) >> 23;
      v188 = v199 - 127;
      if ( v25 < 0 )
        goto LABEL_72;
      goto LABEL_26;
    }
LABEL_71:
    v188 = -127;
    LOBYTE(v199) = 0;
    v179 = 0;
    if ( v25 < 0 )
    {
LABEL_72:
      v28 = 0;
      goto LABEL_29;
    }
LABEL_26:
    if ( v24 < 0 )
      goto LABEL_72;
    v27 = v24 & 0x7FFFFF | 0x800000;
    if ( v25 > 23 )
    {
      v28 = -1;
      if ( v25 <= 31 )
        v28 = v27 << (v212 + 106);
    }
    else
    {
      v28 = v27 >> (-106 - v212);
    }
LABEL_29:
    v216 = v28;
    if ( v195 < 0 || v26 < 0 )
    {
      v30 = 0;
    }
    else
    {
      v29 = v26 & 0x7FFFFF | 0x800000;
      if ( v195 > 23 )
      {
        v30 = -1;
        if ( v195 <= 31 )
          v30 = v29 << (v208 + 106);
      }
      else
      {
        v30 = v29 >> (-106 - v208);
      }
    }
    v218 = v30;
    if ( v192 < 0 || v181 < 0 )
    {
      v32 = 0;
    }
    else
    {
      v31 = v181 & 0x7FFFFF | 0x800000;
      if ( v192 > 23 )
      {
        v32 = -1;
        if ( v192 <= 31 )
          v32 = v31 << (v204 + 106);
      }
      else
      {
        v32 = v31 >> (-106 - v204);
      }
    }
    v220 = v32;
    if ( v188 < 0 || v179 < 0 )
    {
      v34 = 0;
    }
    else
    {
      v33 = v179 & 0x7FFFFF | 0x800000;
      if ( v188 > 23 )
      {
        v34 = -1;
        if ( v188 <= 31 )
          v34 = v33 << (v199 + 106);
      }
      else
      {
        v34 = v33 >> (-106 - v199);
      }
    }
    *v170 = v216;
    v170[1] = v218;
    v170[2] = v220;
    v170[3] = v34;
g4_m128_raw(v35) = v226;
g4_m128_raw(v36) = v228;
g4_m128_raw(v37) = v227;
g4_m128_raw(v38) = v229;
    *(float *)g4_m128_ptr<int32_t>(v35) = fminf((float)(*(float *)&v226 + v59[12]) * v59[16], v57);
    *(float *)g4_m128_ptr<int32_t>(v36) = fminf((float)(*(float *)&v228 + v59[14]) * v59[18], v60);
    *(float *)g4_m128_ptr<int32_t>(v37) = fminf((float)(*(float *)&v227 + v59[13]) * v59[17], v58);
    *(float *)g4_m128_ptr<int32_t>(v38) = fminf((float)(*(float *)&v229 + v59[15]) * v59[19], v185);
    if ( *(float *)g4_m128_ptr<int32_t>(v35) <= 0.0 )
    {
      v40 = -127;
      LOBYTE(v213) = 0;
      v39 = 0;
    }
    else
    {
      v39 = _mm_cvtsi128_si32(v35);
      v213 = (v39 & 0x7F800000u) >> 23;
      v40 = v213 - 127;
    }
    if ( *(float *)g4_m128_ptr<int32_t>(v37) <= 0.0 )
    {
      v42 = -127;
      LOBYTE(v209) = 0;
      v41 = 0;
    }
    else
    {
      v41 = _mm_cvtsi128_si32(v37);
      v209 = (v41 & 0x7F800000u) >> 23;
      v42 = v209 - 127;
    }
    if ( *(float *)g4_m128_ptr<int32_t>(v36) <= 0.0 )
    {
      v196 = -127;
      LOBYTE(v205) = 0;
      v189 = 0;
    }
    else
    {
      v189 = _mm_cvtsi128_si32(v36);
      v205 = (v189 & 0x7F800000u) >> 23;
      v196 = v205 - 127;
    }
    if ( *(float *)g4_m128_ptr<int32_t>(v38) <= 0.0 )
    {
      v193 = -127;
      LOBYTE(v200) = 0;
      v184 = 0;
      if ( v40 < 0 )
      {
LABEL_120:
        v217 = 0;
        if ( v42 < 0 )
          goto LABEL_121;
        goto LABEL_53;
      }
    }
    else
    {
      v184 = _mm_cvtsi128_si32(v38);
      v200 = (v184 & 0x7F800000u) >> 23;
      v193 = v200 - 127;
      if ( v40 < 0 )
        goto LABEL_120;
    }
    if ( v39 < 0 )
      goto LABEL_120;
    v43 = v39 & 0x7FFFFF | 0x800000;
    if ( v40 > 23 )
    {
      v44 = -1;
      if ( v40 <= 31 )
        v44 = v43 << (v213 + 106);
    }
    else
    {
      v44 = v43 >> (-106 - v213);
    }
    v217 = v44;
    if ( v42 >= 0 )
    {
LABEL_53:
      if ( v41 >= 0 )
      {
        v45 = v41 & 0x7FFFFF | 0x800000;
        if ( v42 > 23 )
        {
          v46 = -1;
          if ( v42 <= 31 )
            v46 = v45 << (v209 + 106);
        }
        else
        {
          v46 = v45 >> (-106 - v209);
        }
        goto LABEL_56;
      }
    }
LABEL_121:
    v46 = 0;
LABEL_56:
    v219 = v46;
    if ( v196 < 0 || v189 < 0 )
    {
      v48 = 0;
    }
    else
    {
      v47 = v189 & 0x7FFFFF | 0x800000;
      if ( v196 > 23 )
      {
        v48 = -1;
        if ( v196 <= 31 )
          v48 = v47 << (v205 + 106);
      }
      else
      {
        v48 = v47 >> (-106 - v205);
      }
    }
    v221 = v48;
    if ( v193 < 0 || v184 < 0 )
    {
      v50 = 0;
    }
    else
    {
      v49 = v184 & 0x7FFFFF | 0x800000;
      if ( v193 > 23 )
      {
        v50 = -1;
        if ( v193 <= 31 )
          v50 = v49 << (v200 + 106);
      }
      else
      {
        v50 = v49 >> (-106 - v200);
      }
    }
    v51 = v170;
    ++v168;
    v170 += 8;
    v51[4] = v217;
    v51[6] = v221;
    v51[5] = v219;
    v51[3] = v166;
    v51[7] = v50;
    if ( v168 == Tree )
      goto LABEL_152;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpCollectionCollectionAgent3::process  (binary VA: 0x16cd640)
// Original: hkpCollectionCollectionAgent3::process
// ----------------------------------------------------------------------------
int hkpCollectionCollectionAgent3::process(int **a1, int a2, int a3, int a4, char *a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, g4_int128_t a16)
{
  int *address;
  uint32_t *v17;
  uint64_t v18; // rax
  int v19;
  hkLifoAllocator::Self *v20;
  char *v21;
  uint32_t *v22;
  uint64_t v23; // rax
  uint32_t *v24;
  unsigned int v25;
  hkLifoAllocator::Self *v26;
  int v27;
  unsigned int v28;
  __m128 *v29;
  int v30;
  unsigned int v31;
  __m128 v32;
  int v33;
  int *v34;
  uint32_t *v35;
  uint64_t v36; // rax
  hkLifoAllocator::Self *v37;
  hkLifoAllocator::Self *v38;
  uint32_t *v39;
  uint64_t v40; // rax
  uint64_t v42; // rax
  int v43;
  hkLifoAllocator::Self *v44;
  uint64_t v45; // rax
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  char *retaddr;
  int v97;
  int v98;
  signed int v99;
  hkLifoAllocator::Self **v100;
  char *v101;
  int v102;
  unsigned int v103;
  char *v104;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v63 = *address;
  v17 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v17) < *(uint32_t *)(*address + 12) )
  {
    *v17 = (uint32_t)(uintptr_t)("LtProcessCollColl");
    v17[3] = (uint32_t)(uintptr_t)("StInit");
    v18 = __rdtsc();
    v17[1] = v18;
    *(uint32_t *)(v63 + 4) = (uint32_t)(uintptr_t)(v17 + 4);
  }
  v19 = G4_VCALL<int>(**a1, 64, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, a3 + 4, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, v92, v93, v94, v95);
  v98 = G4_VCALL<int>(*a1[1], 64);
  v100 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v20 = *v100;
  v21 = *((char **)*v100 + 3);
  v104 = v21;
  if ( *((int *)*v100 + 2) > 0x3FFF && (unsigned int)(uintptr_t)(v21 + 0x4000) <= *((uint32_t *)v20 + 4) )
    *((uint32_t *)v20 + 3) = (uint32_t)(uintptr_t)(v21 + 0x4000);
  else
    v104 = (char *)hkLifoAllocator::allocateFromNewSlab(v20, 0x4000);
  v22 = *(uint32_t **)(a15 + 4);
  if ( (unsigned int)(uintptr_t)(v22) < *(uint32_t *)(a15 + 12) )
  {
    *v22 = (uint32_t)(uintptr_t)("Stquery");
    v23 = __rdtsc();
    v22[1] = v23;
    *(uint32_t *)(a15 + 4) = (uint32_t)(uintptr_t)(v22 + 3);
  }
  v102 = hkpCollectionCollectionAgent3::process_gatherShapeKeys(a1, v19, v98, (int)(uintptr_t)(v104));
  if ( v102 < 0 )
  {
    v44 = *v100;
    if ( *((int *)*v100 + 2) <= 0x3FFF || *((char **)v44 + 3) != v104 + 0x4000 || v104 == *((char **)v44 + 5) )
      hkLifoAllocator::slowBlockFree(v44, v104, 0x4000);
    else
      *((uint32_t *)v44 + 3) = (uint32_t)(uintptr_t)(v104);
    v39 = *(uint32_t **)(a15 + 4);
    if ( (unsigned int)(uintptr_t)(v39) < *(uint32_t *)(a15 + 12) )
    {
LABEL_36:
      *v39 = (uint32_t)(uintptr_t)("lt");
      v40 = __rdtsc();
      v39[1] = v40;
      *(uint32_t *)(a15 + 4) = (uint32_t)(uintptr_t)(v39 + 3);
    }
  }
  else
  {
    v24 = *(uint32_t **)(a15 + 4);
    if ( a1[2] != nullptr )
    {
      if ( (unsigned int)(uintptr_t)(v24) < *(uint32_t *)(a15 + 12) )
      {
        *v24 = (uint32_t)(uintptr_t)("Stshrink");
        v42 = __rdtsc();
        v24[1] = v42;
        *(uint32_t *)(a15 + 4) = (uint32_t)(uintptr_t)(v24 + 3);
      }
      v25 = v102 + 1;
      v26 = *v100;
      v99 = (4 * (v102 + 1) + 127) & 0xFFFFFF80;
      v101 = *((char **)*v100 + 3);
      if ( v99 <= *((uint32_t *)*v100 + 2) && (unsigned int)(v27 = v99 + *((uint32_t *)*v100 + 3)) <= *((uint32_t *)v26 + 4) )
      {
        *((uint32_t *)v26 + 3) = v27;
        v28 = (unsigned int)(uintptr_t)(v101);
      }
      else
      {
        v101 = (char *)hkLifoAllocator::allocateFromNewSlab(v26, v99);
        v28 = (unsigned int)(uintptr_t)(v101);
      }
      v29 = (__m128 *)(v104 + 4);
      if ( (v28 >= (unsigned int)(uintptr_t)(&v104[8 * v25 + 4]) || (unsigned int)(uintptr_t)(v104 + 4) >= v28 + 4 * v25) && v25 > 0x14 )
      {
        v30 = v102;
        a5 = (char *)(v102 + 1);
        v103 = (unsigned int)v102 >> 2;
        v31 = 0;
        v97 = 4 * v103;
        do
        {
          v32 = _mm_shuffle_ps(*v29, v29[1], 136);
          v33 = 16 * v31++;
          v29 += 2;
          *(g4_int128_t *)&v101[v33] =g4_m128_raw(v32);
        }
        while ( v103 > v31 );
        if ( a5 != (char *)v97 )
        {
          *(uint32_t *)&v101[16 * v103] = *(uint32_t *)&v104[32 * v103 + 4];
          if ( v30 >= v97 + 1 )
          {
            *(uint32_t *)&v101[4 * v97 + 4] = *(uint32_t *)&v104[8 * v97 + 12];
            if ( v30 >= v97 + 2 )
            {
              *(uint32_t *)&v101[4 * v97 + 8] = *(uint32_t *)&v104[8 * v97 + 20];
              if ( v30 >= v97 + 3 )
              {
                *(uint32_t *)&v101[4 * v97 + 12] = *(uint32_t *)&v104[8 * v97 + 28];
                if ( v30 >= v97 + 4 )
                {
                  *(uint32_t *)&v101[4 * v97 + 16] = *(uint32_t *)&v104[8 * v97 + 36];
                  if ( v30 >= v97 + 5 )
                  {
                    *(uint32_t *)&v101[4 * v97 + 20] = *(uint32_t *)&v104[8 * v97 + 44];
                    if ( v30 >= v97 + 6 )
                      *(uint32_t *)&v101[4 * v97 + 24] = *(uint32_t *)&v104[8 * v97 + 52];
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        v43 = 0;
        do
        {
          *(uint32_t *)&v101[4 * v43] = *(uint32_t *)&v104[8 * v43 + 4];
          ++v43;
        }
        while ( v43 != v25 );
      }
      std::memcpy(&a16, a1, 128);
      v34 = a1[2];
      DWORD2(a16) = 0;
      LODWORD(a16) = (uint32_t)(uintptr_t)(v34);
      v35 = *(uint32_t **)(a15 + 4);
      if ( (unsigned int)(uintptr_t)(v35) < *(uint32_t *)(a15 + 12) )
      {
        *v35 = (uint32_t)(uintptr_t)("Stprocess");
        v36 = __rdtsc();
        v35[1] = v36;
        *(uint32_t *)(a15 + 4) = (uint32_t)(uintptr_t)(v35 + 3);
      }
      retaddr = a5;
      hkAgent1nMachine_Process(a7, &a16, v98, v101);
      v37 = *v100;
      if ( v99 > *((uint32_t *)*v100 + 2) || *((char **)v37 + 3) != &v101[v99] || v101 == *((char **)v37 + 5) )
        hkLifoAllocator::slowBlockFree(*v100, v101, v99);
      else
        *((uint32_t *)v37 + 3) = (uint32_t)(uintptr_t)(v101);
    }
    else
    {
      if ( (unsigned int)(uintptr_t)(v24) < *(uint32_t *)(a15 + 12) )
      {
        *v24 = (uint32_t)(uintptr_t)("Stprocess");
        v45 = __rdtsc();
        v24[1] = v45;
        *(uint32_t *)(a15 + 4) = (uint32_t)(uintptr_t)(v24 + 3);
      }
      retaddr = v104;
      hkAgentNmMachine_Process(a7, a5, v19, v98);
    }
    v38 = *v100;
    if ( *((int *)*v100 + 2) <= 0x3FFF || *((char **)v38 + 3) != v104 + 0x4000 || v104 == *((char **)v38 + 5) )
      hkLifoAllocator::slowBlockFree(v38, v104, 0x4000);
    else
      *((uint32_t *)v38 + 3) = (uint32_t)(uintptr_t)(v104);
    v39 = *(uint32_t **)(a15 + 4);
    if ( (unsigned int)(uintptr_t)(v39) < *(uint32_t *)(a15 + 12) )
      goto LABEL_36;
  }
  return a3 + 16;
}

// ----------------------------------------------------------------------------
// Function: hkpCollectionAgent3::process  (binary VA: 0x170a5a0)
// Original: hkpCollectionAgent3::process
// ----------------------------------------------------------------------------
int hkpCollectionAgent3::process(int **a1, int a2, int a3, int a4, char *a5)
{
  int address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  uint64_t v15; // rax
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[2];
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef g4_int128_t _g4_t_v26;
  typedef uint32_t _g4_t_v27[12];
  typedef uint32_t _g4_t_v28[28];
  typedef int *_g4_t_v29[35];
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v20)) > _g4_s3 ? (20u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v21)) > _g4_s4 ? (24u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v22)) > _g4_s5 ? (28u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v23)) > _g4_s6 ? (32u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v24)) > _g4_s7 ? (40u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v25)) > _g4_s8 ? (44u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v26)) > _g4_s9 ? (48u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v27)) > _g4_s10 ? (64u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v28)) > _g4_s11 ? (112u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (224u + sizeof(_g4_t_v29)) > _g4_s12 ? (224u + sizeof(_g4_t_v29)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 112u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 224u);

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance));
  v6 = *(uint32_t *)address;
  v18 = address;
  v7 = *(uint32_t **)(*(uint32_t *)address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*(uint32_t *)address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtColl3");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  std::memcpy(v29, a1, 128);
  v9 = **a1;
  v23[0] = 0;
  v22 = v9;
  v24 = 0;
  v25 = 0;
  v23[1] = -1;
  *(uint64_t *)&v26 = 2048;
  BYTE8(v26) = 0;
  HIDWORD(v26) = 0;
  hkpCollidable::BoundingVolumeData::BoundingVolumeData((hkpCollidable::BoundingVolumeData::Self *)v27);
  v27[11] = -1082130432;
  *(uint16_t *)((char *)&v26 + 9) = -20;
  hkpListShape::Construct((int)(uintptr_t)(v28), (int)(uintptr_t)(&v22), 1, 0);
  v10 = *a1;
  v11 = (*a1)[3];
  if ( v11 == 0 )
  {
    std::memcpy(v27, v10 + 8, 44);
    v11 = v10[3];
  }
  v24 = v10[2];
  v25 = v11;
  v23[0] = (uint32_t)(uintptr_t)(v28);
  v23[1] = -1;
  v29[2] = *a1;
  v29[0] = (int *)(v23);
  v12 = hkpCollectionCollectionAgent3::process(
          v29,
          a2,
          a3,
          a4,
          a5,
          v17,
          (int)(uintptr_t)(v29),
          v18,
          v19,
          v20,
          v21,
          v22,
          (int)(uintptr_t)(v28),
          -1,
          v24,
          v26);
  v28[7] = 0;
  (*(void (**)(uint32_t *))v28[0])(v28);
  v13 = *(uint32_t *)a3;
  v14 = *(uint32_t **)(*(uint32_t *)a3 + 4);
  if ( (unsigned int)(uintptr_t)(v14) < *(uint32_t *)(*(uint32_t *)a3 + 12) )
  {
    *v14 = (uint32_t)(uintptr_t)("Et");
    v15 = __rdtsc();
    v14[1] = v15;
    *(uint32_t *)(v13 + 4) = (uint32_t)(uintptr_t)(v14 + 3);
  }
  return v12;
}



// ============================================================================
// Address:   0x170a7a0 (size: 45 bytes)
// Symbol:    _ZN19hkpCollectionAgent313initAgentFuncERN22hkpCollisionDispatcher11Agent3FuncsE
// Demangled: hkpCollectionAgent3::initAgentFunc(hkpCollisionDispatcher::Agent3Funcs &)
// ============================================================================
int (*hkpCollectionAgent3::initAgentFunc(int a1))(int **a1, int a2, int a3, int a4, char *a5)
{
  hkListAgent3::initAgentFunc(a1);
  *(uint32_t *)(a1 + 40) = (uint32_t)(uintptr_t)(((int (*)(int **, int, int, int, char *))hkpCollectionAgent3::process));
  return hkpCollectionAgent3::process;
}
// ----------------------------------------------------------------------------
// Function: hkpCollectionAgent3::registerAgent3  (binary VA: 0x170a7d0)
// Original: hkpCollectionAgent3::registerAgent3
// ----------------------------------------------------------------------------
int hkpCollectionAgent3::registerAgent3(hkpCollectionAgent3::Self *self)
{
  typedef int _g4_t_v2[6];
  typedef __m128i _g4_t_v3;
  typedef char _g4_t_v4;
  typedef char _g4_t_v5;
  typedef char _g4_t_v6;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v2)) > _g4_s0 ? (8u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v3)) > _g4_s1 ? (32u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v4)) > _g4_s2 ? (52u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (53u + sizeof(_g4_t_v5)) > _g4_s3 ? (53u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (54u + sizeof(_g4_t_v6)) > _g4_s4 ? (54u + sizeof(_g4_t_v6)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 8u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 32u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 52u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 53u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 54u);

  v3 = g4_to_m128i(0);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  hkpCollectionAgent3::initAgentFunc((int)(uintptr_t)(v2));
  return hkpCollisionDispatcher::registerAgent3((int)(uintptr_t)(self), v2, 23, 18);
}


