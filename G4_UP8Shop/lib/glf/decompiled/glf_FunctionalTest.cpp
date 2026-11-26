#include "Core/Utils/DecompTypes.h"
#include "glf_FunctionalTest.h"

// ----------------------------------------------------------------------------
// Function: glf::FunctionalTest::SetEnabled  (binary VA: 0xc8b430)
// Original: glf::FunctionalTest::SetEnabled
// ----------------------------------------------------------------------------
uint8_t * glf::FunctionalTest::SetEnabled(glf::FunctionalTest::Self *self)
{
  glf::FunctionalTest::sEnabled[0] = (uint8_t)(uintptr_t)self;
  return (uint8_t *)(glf::FunctionalTest::sEnabled);
}

// ----------------------------------------------------------------------------
// Function: glf::FunctionalTest::SetPerfCountersEnabled  (binary VA: 0xc8b450)
// Original: glf::FunctionalTest::SetPerfCountersEnabled
// ----------------------------------------------------------------------------
uint8_t * glf::FunctionalTest::SetPerfCountersEnabled(glf::FunctionalTest::Self *self)
{
  glf::FunctionalTest::sPerfCountersEnabled[0] = (uint8_t)(uintptr_t)self;
  return (uint8_t *)(glf::FunctionalTest::sPerfCountersEnabled);
}

// ----------------------------------------------------------------------------
// Function: glf::FunctionalTest::Terminate  (binary VA: 0xc8b470)
// Original: glf::FunctionalTest::Terminate
// ----------------------------------------------------------------------------
uint8_t * glf::FunctionalTest::Terminate()
{
  uint8_t *result;

  result = (uint8_t *)(glf::FunctionalTest::sEnabled);
  if ( glf::FunctionalTest::sEnabled[0] != 0 )
    return (uint8_t *)puts("#ios_device_testing_terminate \n");
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::FunctionalTest::StartProfiler  (binary VA: 0xc8b4a0)
// Original: glf::FunctionalTest::StartProfiler
// ----------------------------------------------------------------------------
void glf::FunctionalTest::StartProfiler()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::FunctionalTest::StopProfiler  (binary VA: 0xc8b4b0)
// Original: glf::FunctionalTest::StopProfiler
// ----------------------------------------------------------------------------
void glf::FunctionalTest::StopProfiler()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::FunctionalTest::CheckPoint  (binary VA: 0xc8e870)
// Original: glf::FunctionalTest::CheckPoint
// ----------------------------------------------------------------------------
int glf::FunctionalTest::CheckPoint(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  void *v6;
  void *v7;
  int v8;
  int v9;
  void *v10;
  void *v11;
  void *v12;
  glf::FpsTracker::Self *Instance;
  int v14;
  int v15;
  void *v16;
  void *v17;
  void *v18;
  int v19;
  int v20;
  void *v21;
  void *v22;
  void *v23;
  void *v24;
  void *v25;
  int v26;
  int v27;
  void *v28;
  void *v29;
  void *v30;
  void *v31;
  void *v32;
  int v33;
  int v34;
  void *v35;
  void *v36;
  void *v37;
  void *v38;
  void *v39;
  int v40;
  int v41;
  void *v42;
  uint32_t *v43;
  void *v44;
  void *v45;
  void *v46;
  char *v47;
  void *v48;
  void *v49;
  void *v50;
  void *v51;
  char *v52;
  void *v53;
  char *v54;
  void *v55;
  void *v56;
  void *v57;
  void *v58;
  char *v59;
  void *v60;
  char *v61;
  void *v62;
  void *v63;
  void *v64;
  char *v65;
  void *v66;
  char *v67;
  void *v68;
  void *v69;
  void *v70;
  char *v71;
  void *v72;
  char *v73;
  void *v74;
  void *v75;
  void *v76;
  char *v77;
  void *v78;
  char *v79;
  void *v80;
  void *v81;
  void *v82;
  char *v83;
  void *v84;
  char *v85;
  void *v86;
  void *v87;
  void *v88;
  char *v89;
  void *v90;
  char *v91;
  void *v92;
  void *v93;
  void *v94;
  void *v95;
  char *v96;
  void *v97;
  char *v98;
  void *v99;
  void *v100;
  void *v101;
  void *v102;
  char *v103;
  void *v104;
  void *v105;
  void *v106;
  void *v107;
  void *v108;
  void *v109;
  void *v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int result;
  void *v118;
  void *retaddr;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef void *_g4_t_v132;
  typedef void *_g4_t_v133;
  typedef void *_g4_t_v134;
  typedef void *_g4_t_v135;
  typedef void *_g4_t_v136;
  typedef const char *_g4_t_v137;
  typedef int64_t *_g4_t_v138;
  typedef uint64_t *_g4_t_v139;
  typedef uint64_t *_g4_t_v140;
  typedef uint64_t *_g4_t_v141;
  typedef uint64_t *_g4_t_v142;
  typedef int _g4_t_v143;
  typedef uint8_t _g4_t_v144[3];
  typedef int _g4_t_v145;
  typedef int _g4_t_v146;
  typedef int _g4_t_v147;
  typedef int _g4_t_v148;
  typedef int _g4_t_v149;
  typedef int _g4_t_v150;
  typedef int _g4_t_v151;
  typedef int _g4_t_v152;
  typedef uint32_t _g4_t_v153[4];
  typedef uint32_t _g4_t_v154[4];
  typedef uint32_t _g4_t_v155[4];
  typedef void *_g4_t_v156[4];
  typedef uint32_t _g4_t_v157[4];
  typedef uint32_t _g4_t_v158[4];
  typedef void *_g4_t_v159[4];
  typedef uint32_t _g4_t_v160[4];
  typedef uint32_t _g4_t_v161[4];
  typedef void *_g4_t_v162[4];
  typedef uint32_t _g4_t_v163[4];
  typedef uint32_t _g4_t_v164[4];
  typedef void *_g4_t_v165[4];
  typedef uint32_t _g4_t_v166[4];
  typedef uint32_t _g4_t_v167[4];
  typedef void *_g4_t_v168[4];
  typedef uint32_t _g4_t_v169[4];
  typedef uint32_t _g4_t_v170[4];
  typedef void *_g4_t_v171[4];
  typedef uint32_t _g4_t_v172[4];
  typedef uint32_t _g4_t_v173[4];
  typedef void *_g4_t_v174[4];
  typedef uint32_t _g4_t_v175[4];
  typedef uint32_t _g4_t_v176[4];
  typedef void *_g4_t_v177[4];
  typedef uint32_t _g4_t_v178[4];
  typedef uint32_t _g4_t_v179[4];
  typedef void *_g4_t_v180[4];
  typedef uint32_t _g4_t_v181[4];
  typedef uint32_t _g4_t_v182[4];
  typedef uint32_t _g4_t_v183[4];
  typedef uint32_t _g4_t_v184[4];
  typedef uint32_t _g4_t_v185[4];
  typedef uint32_t *_g4_t_v186;
  typedef int _g4_t_v187;
  typedef int _g4_t_v188;
  typedef int _g4_t_v189;
  typedef int _g4_t_v190;
  typedef int _g4_t_v191;
  typedef int _g4_t_v192;
  typedef int _g4_t_v193;
  typedef uint32_t _g4_t_v194[4];
  typedef uint32_t _g4_t_v195[4];
  typedef int _g4_t_v196;
  typedef uint32_t *_g4_t_v197;
  typedef int _g4_t_v198;
  typedef uint32_t *_g4_t_v199;
  typedef int _g4_t_v200;
  typedef uint32_t *_g4_t_v201;
  typedef int _g4_t_v202;
  typedef uint32_t *_g4_t_v203;
  typedef int _g4_t_v204;
  typedef uint32_t *_g4_t_v205;
  typedef int _g4_t_v206;
  typedef uint32_t *_g4_t_v207;
  typedef int _g4_t_v208;
  typedef uint32_t *_g4_t_v209;
  typedef int _g4_t_v210;
  typedef uint32_t *_g4_t_v211;
  typedef int _g4_t_v212;
  typedef uint32_t *_g4_t_v213;
  typedef int _g4_t_v214;
  typedef uint64_t *_g4_t_v215;
  typedef int _g4_t_v216;
  typedef uint64_t *_g4_t_v217;
  typedef int _g4_t_v218;
  typedef uint64_t *_g4_t_v219;
  typedef int _g4_t_v220;
  typedef uint64_t *_g4_t_v221;
  typedef int _g4_t_v222;
  typedef int64_t *_g4_t_v223;
  typedef int _g4_t_v224;
  typedef const char *_g4_t_v225;
  typedef int _g4_t_v226;
  typedef int _g4_t_v227;
  typedef uint32_t _g4_t_v228[4];
  typedef uint32_t _g4_t_v229[4];
  typedef uint32_t _g4_t_v230[4];
  typedef uint32_t _g4_t_v231[4];
  typedef uint64_t _g4_t_v232;
  typedef int64_t _g4_t_v233;
  typedef uint64_t _g4_t_v234;
  typedef uint64_t _g4_t_v235;
  typedef int64_t _g4_t_v236;
  typedef uint32_t _g4_t_v237[2];
  typedef uint32_t _g4_t_v238[2];
  typedef uint32_t _g4_t_v239[2];
  typedef uint32_t _g4_t_v240[2];
  typedef uint32_t _g4_t_v241[2];
  typedef uint32_t _g4_t_v242[2];
  typedef uint32_t _g4_t_v243[2];
  typedef uint32_t _g4_t_v244[2];
  typedef uint32_t _g4_t_v245[2];
  typedef uint32_t _g4_t_v246[2];
  typedef uint32_t _g4_t_v247[2];
  typedef uint32_t _g4_t_s[8];
  typedef uint64_t _g4_t_v249;
  typedef g4_int128_t _g4_t_v250;
  typedef uint64_t _g4_t_v251;
  typedef int *_g4_t_v252;
  typedef void *_g4_t_v253;
  typedef int _g4_t_v254;
  typedef int _g4_t_v255;
  typedef int _g4_t_v256;
  typedef void *_g4_t_v257;
  enum : size_t {
    _g4_s0 = 1408u,
    _g4_s1 = (8u + sizeof(_g4_t_v119)) > _g4_s0 ? (8u + sizeof(_g4_t_v119)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v120)) > _g4_s1 ? (8u + sizeof(_g4_t_v120)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v121)) > _g4_s2 ? (8u + sizeof(_g4_t_v121)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v122)) > _g4_s3 ? (8u + sizeof(_g4_t_v122)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v123)) > _g4_s4 ? (8u + sizeof(_g4_t_v123)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v124)) > _g4_s5 ? (8u + sizeof(_g4_t_v124)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v125)) > _g4_s6 ? (8u + sizeof(_g4_t_v125)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v126)) > _g4_s7 ? (8u + sizeof(_g4_t_v126)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v127)) > _g4_s8 ? (8u + sizeof(_g4_t_v127)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v128)) > _g4_s9 ? (8u + sizeof(_g4_t_v128)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v129)) > _g4_s10 ? (8u + sizeof(_g4_t_v129)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v130)) > _g4_s11 ? (8u + sizeof(_g4_t_v130)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v131)) > _g4_s12 ? (16u + sizeof(_g4_t_v131)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v132)) > _g4_s13 ? (32u + sizeof(_g4_t_v132)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v133)) > _g4_s14 ? (32u + sizeof(_g4_t_v133)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v134)) > _g4_s15 ? (32u + sizeof(_g4_t_v134)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v135)) > _g4_s16 ? (32u + sizeof(_g4_t_v135)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v136)) > _g4_s17 ? (32u + sizeof(_g4_t_v136)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v137)) > _g4_s18 ? (36u + sizeof(_g4_t_v137)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_v138)) > _g4_s19 ? (36u + sizeof(_g4_t_v138)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v139)) > _g4_s20 ? (36u + sizeof(_g4_t_v139)) : _g4_s20,
    _g4_s22 = (36u + sizeof(_g4_t_v140)) > _g4_s21 ? (36u + sizeof(_g4_t_v140)) : _g4_s21,
    _g4_s23 = (36u + sizeof(_g4_t_v141)) > _g4_s22 ? (36u + sizeof(_g4_t_v141)) : _g4_s22,
    _g4_s24 = (36u + sizeof(_g4_t_v142)) > _g4_s23 ? (36u + sizeof(_g4_t_v142)) : _g4_s23,
    _g4_s25 = (36u + sizeof(_g4_t_v143)) > _g4_s24 ? (36u + sizeof(_g4_t_v143)) : _g4_s24,
    _g4_s26 = (45u + sizeof(_g4_t_v144)) > _g4_s25 ? (45u + sizeof(_g4_t_v144)) : _g4_s25,
    _g4_s27 = (48u + sizeof(_g4_t_v145)) > _g4_s26 ? (48u + sizeof(_g4_t_v145)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v146)) > _g4_s27 ? (52u + sizeof(_g4_t_v146)) : _g4_s27,
    _g4_s29 = (56u + sizeof(_g4_t_v147)) > _g4_s28 ? (56u + sizeof(_g4_t_v147)) : _g4_s28,
    _g4_s30 = (60u + sizeof(_g4_t_v148)) > _g4_s29 ? (60u + sizeof(_g4_t_v148)) : _g4_s29,
    _g4_s31 = (64u + sizeof(_g4_t_v149)) > _g4_s30 ? (64u + sizeof(_g4_t_v149)) : _g4_s30,
    _g4_s32 = (68u + sizeof(_g4_t_v150)) > _g4_s31 ? (68u + sizeof(_g4_t_v150)) : _g4_s31,
    _g4_s33 = (72u + sizeof(_g4_t_v151)) > _g4_s32 ? (72u + sizeof(_g4_t_v151)) : _g4_s32,
    _g4_s34 = (76u + sizeof(_g4_t_v152)) > _g4_s33 ? (76u + sizeof(_g4_t_v152)) : _g4_s33,
    _g4_s35 = (168u + sizeof(_g4_t_v153)) > _g4_s34 ? (168u + sizeof(_g4_t_v153)) : _g4_s34,
    _g4_s36 = (184u + sizeof(_g4_t_v154)) > _g4_s35 ? (184u + sizeof(_g4_t_v154)) : _g4_s35,
    _g4_s37 = (200u + sizeof(_g4_t_v155)) > _g4_s36 ? (200u + sizeof(_g4_t_v155)) : _g4_s36,
    _g4_s38 = (216u + sizeof(_g4_t_v156)) > _g4_s37 ? (216u + sizeof(_g4_t_v156)) : _g4_s37,
    _g4_s39 = (232u + sizeof(_g4_t_v157)) > _g4_s38 ? (232u + sizeof(_g4_t_v157)) : _g4_s38,
    _g4_s40 = (248u + sizeof(_g4_t_v158)) > _g4_s39 ? (248u + sizeof(_g4_t_v158)) : _g4_s39,
    _g4_s41 = (264u + sizeof(_g4_t_v159)) > _g4_s40 ? (264u + sizeof(_g4_t_v159)) : _g4_s40,
    _g4_s42 = (280u + sizeof(_g4_t_v160)) > _g4_s41 ? (280u + sizeof(_g4_t_v160)) : _g4_s41,
    _g4_s43 = (296u + sizeof(_g4_t_v161)) > _g4_s42 ? (296u + sizeof(_g4_t_v161)) : _g4_s42,
    _g4_s44 = (312u + sizeof(_g4_t_v162)) > _g4_s43 ? (312u + sizeof(_g4_t_v162)) : _g4_s43,
    _g4_s45 = (328u + sizeof(_g4_t_v163)) > _g4_s44 ? (328u + sizeof(_g4_t_v163)) : _g4_s44,
    _g4_s46 = (344u + sizeof(_g4_t_v164)) > _g4_s45 ? (344u + sizeof(_g4_t_v164)) : _g4_s45,
    _g4_s47 = (360u + sizeof(_g4_t_v165)) > _g4_s46 ? (360u + sizeof(_g4_t_v165)) : _g4_s46,
    _g4_s48 = (376u + sizeof(_g4_t_v166)) > _g4_s47 ? (376u + sizeof(_g4_t_v166)) : _g4_s47,
    _g4_s49 = (392u + sizeof(_g4_t_v167)) > _g4_s48 ? (392u + sizeof(_g4_t_v167)) : _g4_s48,
    _g4_s50 = (408u + sizeof(_g4_t_v168)) > _g4_s49 ? (408u + sizeof(_g4_t_v168)) : _g4_s49,
    _g4_s51 = (424u + sizeof(_g4_t_v169)) > _g4_s50 ? (424u + sizeof(_g4_t_v169)) : _g4_s50,
    _g4_s52 = (440u + sizeof(_g4_t_v170)) > _g4_s51 ? (440u + sizeof(_g4_t_v170)) : _g4_s51,
    _g4_s53 = (456u + sizeof(_g4_t_v171)) > _g4_s52 ? (456u + sizeof(_g4_t_v171)) : _g4_s52,
    _g4_s54 = (472u + sizeof(_g4_t_v172)) > _g4_s53 ? (472u + sizeof(_g4_t_v172)) : _g4_s53,
    _g4_s55 = (488u + sizeof(_g4_t_v173)) > _g4_s54 ? (488u + sizeof(_g4_t_v173)) : _g4_s54,
    _g4_s56 = (504u + sizeof(_g4_t_v174)) > _g4_s55 ? (504u + sizeof(_g4_t_v174)) : _g4_s55,
    _g4_s57 = (520u + sizeof(_g4_t_v175)) > _g4_s56 ? (520u + sizeof(_g4_t_v175)) : _g4_s56,
    _g4_s58 = (536u + sizeof(_g4_t_v176)) > _g4_s57 ? (536u + sizeof(_g4_t_v176)) : _g4_s57,
    _g4_s59 = (552u + sizeof(_g4_t_v177)) > _g4_s58 ? (552u + sizeof(_g4_t_v177)) : _g4_s58,
    _g4_s60 = (568u + sizeof(_g4_t_v178)) > _g4_s59 ? (568u + sizeof(_g4_t_v178)) : _g4_s59,
    _g4_s61 = (584u + sizeof(_g4_t_v179)) > _g4_s60 ? (584u + sizeof(_g4_t_v179)) : _g4_s60,
    _g4_s62 = (600u + sizeof(_g4_t_v180)) > _g4_s61 ? (600u + sizeof(_g4_t_v180)) : _g4_s61,
    _g4_s63 = (616u + sizeof(_g4_t_v181)) > _g4_s62 ? (616u + sizeof(_g4_t_v181)) : _g4_s62,
    _g4_s64 = (632u + sizeof(_g4_t_v182)) > _g4_s63 ? (632u + sizeof(_g4_t_v182)) : _g4_s63,
    _g4_s65 = (648u + sizeof(_g4_t_v183)) > _g4_s64 ? (648u + sizeof(_g4_t_v183)) : _g4_s64,
    _g4_s66 = (664u + sizeof(_g4_t_v184)) > _g4_s65 ? (664u + sizeof(_g4_t_v184)) : _g4_s65,
    _g4_s67 = (680u + sizeof(_g4_t_v185)) > _g4_s66 ? (680u + sizeof(_g4_t_v185)) : _g4_s66,
    _g4_s68 = (696u + sizeof(_g4_t_v186)) > _g4_s67 ? (696u + sizeof(_g4_t_v186)) : _g4_s67,
    _g4_s69 = (700u + sizeof(_g4_t_v187)) > _g4_s68 ? (700u + sizeof(_g4_t_v187)) : _g4_s68,
    _g4_s70 = (704u + sizeof(_g4_t_v188)) > _g4_s69 ? (704u + sizeof(_g4_t_v188)) : _g4_s69,
    _g4_s71 = (708u + sizeof(_g4_t_v189)) > _g4_s70 ? (708u + sizeof(_g4_t_v189)) : _g4_s70,
    _g4_s72 = (712u + sizeof(_g4_t_v190)) > _g4_s71 ? (712u + sizeof(_g4_t_v190)) : _g4_s71,
    _g4_s73 = (716u + sizeof(_g4_t_v191)) > _g4_s72 ? (716u + sizeof(_g4_t_v191)) : _g4_s72,
    _g4_s74 = (720u + sizeof(_g4_t_v192)) > _g4_s73 ? (720u + sizeof(_g4_t_v192)) : _g4_s73,
    _g4_s75 = (724u + sizeof(_g4_t_v193)) > _g4_s74 ? (724u + sizeof(_g4_t_v193)) : _g4_s74,
    _g4_s76 = (728u + sizeof(_g4_t_v194)) > _g4_s75 ? (728u + sizeof(_g4_t_v194)) : _g4_s75,
    _g4_s77 = (744u + sizeof(_g4_t_v195)) > _g4_s76 ? (744u + sizeof(_g4_t_v195)) : _g4_s76,
    _g4_s78 = (760u + sizeof(_g4_t_v196)) > _g4_s77 ? (760u + sizeof(_g4_t_v196)) : _g4_s77,
    _g4_s79 = (764u + sizeof(_g4_t_v197)) > _g4_s78 ? (764u + sizeof(_g4_t_v197)) : _g4_s78,
    _g4_s80 = (776u + sizeof(_g4_t_v198)) > _g4_s79 ? (776u + sizeof(_g4_t_v198)) : _g4_s79,
    _g4_s81 = (780u + sizeof(_g4_t_v199)) > _g4_s80 ? (780u + sizeof(_g4_t_v199)) : _g4_s80,
    _g4_s82 = (792u + sizeof(_g4_t_v200)) > _g4_s81 ? (792u + sizeof(_g4_t_v200)) : _g4_s81,
    _g4_s83 = (796u + sizeof(_g4_t_v201)) > _g4_s82 ? (796u + sizeof(_g4_t_v201)) : _g4_s82,
    _g4_s84 = (808u + sizeof(_g4_t_v202)) > _g4_s83 ? (808u + sizeof(_g4_t_v202)) : _g4_s83,
    _g4_s85 = (812u + sizeof(_g4_t_v203)) > _g4_s84 ? (812u + sizeof(_g4_t_v203)) : _g4_s84,
    _g4_s86 = (824u + sizeof(_g4_t_v204)) > _g4_s85 ? (824u + sizeof(_g4_t_v204)) : _g4_s85,
    _g4_s87 = (828u + sizeof(_g4_t_v205)) > _g4_s86 ? (828u + sizeof(_g4_t_v205)) : _g4_s86,
    _g4_s88 = (840u + sizeof(_g4_t_v206)) > _g4_s87 ? (840u + sizeof(_g4_t_v206)) : _g4_s87,
    _g4_s89 = (844u + sizeof(_g4_t_v207)) > _g4_s88 ? (844u + sizeof(_g4_t_v207)) : _g4_s88,
    _g4_s90 = (856u + sizeof(_g4_t_v208)) > _g4_s89 ? (856u + sizeof(_g4_t_v208)) : _g4_s89,
    _g4_s91 = (860u + sizeof(_g4_t_v209)) > _g4_s90 ? (860u + sizeof(_g4_t_v209)) : _g4_s90,
    _g4_s92 = (872u + sizeof(_g4_t_v210)) > _g4_s91 ? (872u + sizeof(_g4_t_v210)) : _g4_s91,
    _g4_s93 = (876u + sizeof(_g4_t_v211)) > _g4_s92 ? (876u + sizeof(_g4_t_v211)) : _g4_s92,
    _g4_s94 = (888u + sizeof(_g4_t_v212)) > _g4_s93 ? (888u + sizeof(_g4_t_v212)) : _g4_s93,
    _g4_s95 = (892u + sizeof(_g4_t_v213)) > _g4_s94 ? (892u + sizeof(_g4_t_v213)) : _g4_s94,
    _g4_s96 = (904u + sizeof(_g4_t_v214)) > _g4_s95 ? (904u + sizeof(_g4_t_v214)) : _g4_s95,
    _g4_s97 = (908u + sizeof(_g4_t_v215)) > _g4_s96 ? (908u + sizeof(_g4_t_v215)) : _g4_s96,
    _g4_s98 = (920u + sizeof(_g4_t_v216)) > _g4_s97 ? (920u + sizeof(_g4_t_v216)) : _g4_s97,
    _g4_s99 = (924u + sizeof(_g4_t_v217)) > _g4_s98 ? (924u + sizeof(_g4_t_v217)) : _g4_s98,
    _g4_s100 = (936u + sizeof(_g4_t_v218)) > _g4_s99 ? (936u + sizeof(_g4_t_v218)) : _g4_s99,
    _g4_s101 = (940u + sizeof(_g4_t_v219)) > _g4_s100 ? (940u + sizeof(_g4_t_v219)) : _g4_s100,
    _g4_s102 = (952u + sizeof(_g4_t_v220)) > _g4_s101 ? (952u + sizeof(_g4_t_v220)) : _g4_s101,
    _g4_s103 = (956u + sizeof(_g4_t_v221)) > _g4_s102 ? (956u + sizeof(_g4_t_v221)) : _g4_s102,
    _g4_s104 = (968u + sizeof(_g4_t_v222)) > _g4_s103 ? (968u + sizeof(_g4_t_v222)) : _g4_s103,
    _g4_s105 = (972u + sizeof(_g4_t_v223)) > _g4_s104 ? (972u + sizeof(_g4_t_v223)) : _g4_s104,
    _g4_s106 = (984u + sizeof(_g4_t_v224)) > _g4_s105 ? (984u + sizeof(_g4_t_v224)) : _g4_s105,
    _g4_s107 = (988u + sizeof(_g4_t_v225)) > _g4_s106 ? (988u + sizeof(_g4_t_v225)) : _g4_s106,
    _g4_s108 = (1000u + sizeof(_g4_t_v226)) > _g4_s107 ? (1000u + sizeof(_g4_t_v226)) : _g4_s107,
    _g4_s109 = (1004u + sizeof(_g4_t_v227)) > _g4_s108 ? (1004u + sizeof(_g4_t_v227)) : _g4_s108,
    _g4_s110 = (1016u + sizeof(_g4_t_v228)) > _g4_s109 ? (1016u + sizeof(_g4_t_v228)) : _g4_s109,
    _g4_s111 = (1032u + sizeof(_g4_t_v229)) > _g4_s110 ? (1032u + sizeof(_g4_t_v229)) : _g4_s110,
    _g4_s112 = (1048u + sizeof(_g4_t_v230)) > _g4_s111 ? (1048u + sizeof(_g4_t_v230)) : _g4_s111,
    _g4_s113 = (1064u + sizeof(_g4_t_v231)) > _g4_s112 ? (1064u + sizeof(_g4_t_v231)) : _g4_s112,
    _g4_s114 = (1080u + sizeof(_g4_t_v232)) > _g4_s113 ? (1080u + sizeof(_g4_t_v232)) : _g4_s113,
    _g4_s115 = (1088u + sizeof(_g4_t_v233)) > _g4_s114 ? (1088u + sizeof(_g4_t_v233)) : _g4_s114,
    _g4_s116 = (1096u + sizeof(_g4_t_v234)) > _g4_s115 ? (1096u + sizeof(_g4_t_v234)) : _g4_s115,
    _g4_s117 = (1104u + sizeof(_g4_t_v235)) > _g4_s116 ? (1104u + sizeof(_g4_t_v235)) : _g4_s116,
    _g4_s118 = (1112u + sizeof(_g4_t_v236)) > _g4_s117 ? (1112u + sizeof(_g4_t_v236)) : _g4_s117,
    _g4_s119 = (1120u + sizeof(_g4_t_v237)) > _g4_s118 ? (1120u + sizeof(_g4_t_v237)) : _g4_s118,
    _g4_s120 = (1128u + sizeof(_g4_t_v238)) > _g4_s119 ? (1128u + sizeof(_g4_t_v238)) : _g4_s119,
    _g4_s121 = (1136u + sizeof(_g4_t_v239)) > _g4_s120 ? (1136u + sizeof(_g4_t_v239)) : _g4_s120,
    _g4_s122 = (1144u + sizeof(_g4_t_v240)) > _g4_s121 ? (1144u + sizeof(_g4_t_v240)) : _g4_s121,
    _g4_s123 = (1152u + sizeof(_g4_t_v241)) > _g4_s122 ? (1152u + sizeof(_g4_t_v241)) : _g4_s122,
    _g4_s124 = (1160u + sizeof(_g4_t_v242)) > _g4_s123 ? (1160u + sizeof(_g4_t_v242)) : _g4_s123,
    _g4_s125 = (1168u + sizeof(_g4_t_v243)) > _g4_s124 ? (1168u + sizeof(_g4_t_v243)) : _g4_s124,
    _g4_s126 = (1176u + sizeof(_g4_t_v244)) > _g4_s125 ? (1176u + sizeof(_g4_t_v244)) : _g4_s125,
    _g4_s127 = (1184u + sizeof(_g4_t_v245)) > _g4_s126 ? (1184u + sizeof(_g4_t_v245)) : _g4_s126,
    _g4_s128 = (1192u + sizeof(_g4_t_v246)) > _g4_s127 ? (1192u + sizeof(_g4_t_v246)) : _g4_s127,
    _g4_s129 = (1200u + sizeof(_g4_t_v247)) > _g4_s128 ? (1200u + sizeof(_g4_t_v247)) : _g4_s128,
    _g4_s130 = (1208u + sizeof(_g4_t_s)) > _g4_s129 ? (1208u + sizeof(_g4_t_s)) : _g4_s129,
    _g4_s131 = (1240u + sizeof(_g4_t_v249)) > _g4_s130 ? (1240u + sizeof(_g4_t_v249)) : _g4_s130,
    _g4_s132 = (1248u + sizeof(_g4_t_v250)) > _g4_s131 ? (1248u + sizeof(_g4_t_v250)) : _g4_s131,
    _g4_s133 = (1264u + sizeof(_g4_t_v251)) > _g4_s132 ? (1264u + sizeof(_g4_t_v251)) : _g4_s132,
    _g4_s134 = (1296u + sizeof(_g4_t_v252)) > _g4_s133 ? (1296u + sizeof(_g4_t_v252)) : _g4_s133,
    _g4_s135 = (1300u + sizeof(_g4_t_v253)) > _g4_s134 ? (1300u + sizeof(_g4_t_v253)) : _g4_s134,
    _g4_s136 = (1304u + sizeof(_g4_t_v254)) > _g4_s135 ? (1304u + sizeof(_g4_t_v254)) : _g4_s135,
    _g4_s137 = (1308u + sizeof(_g4_t_v255)) > _g4_s136 ? (1308u + sizeof(_g4_t_v255)) : _g4_s136,
    _g4_s138 = (1312u + sizeof(_g4_t_v256)) > _g4_s137 ? (1312u + sizeof(_g4_t_v256)) : _g4_s137,
    _g4_s139 = (1316u + sizeof(_g4_t_v257)) > _g4_s138 ? (1316u + sizeof(_g4_t_v257)) : _g4_s138
  };
  alignas(16) uint8_t _g4_sf[_g4_s139];
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 8u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 8u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 8u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 8u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 8u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 8u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 8u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 8u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 8u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 8u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 8u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 8u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 16u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 32u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 32u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 32u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 32u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 32u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 36u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 36u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 36u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 36u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 36u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 36u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 36u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 45u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 48u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 52u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 56u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 60u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 64u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 68u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 72u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 76u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 168u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 184u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 200u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 216u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 232u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 248u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 264u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 280u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 296u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 312u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 328u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 344u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 360u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 376u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 392u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 408u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 424u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 440u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 456u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 472u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 488u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 504u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 520u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 536u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 552u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 568u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 584u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 600u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 616u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 632u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 648u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 664u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 680u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 696u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 700u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 704u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 708u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 712u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 716u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 720u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 724u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 728u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 744u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 760u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 764u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 776u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 780u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 792u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 796u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 808u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 812u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 824u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 828u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 840u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 844u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 856u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 860u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 872u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 876u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 888u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 892u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 904u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 908u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 920u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 924u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 936u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 940u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 952u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 956u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 968u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 972u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 984u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 988u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 1000u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 1004u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 1016u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 1032u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 1048u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 1064u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 1080u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 1088u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 1096u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 1104u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 1112u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 1120u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 1128u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 1136u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 1144u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 1152u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 1160u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 1168u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 1176u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 1184u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 1192u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 1200u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 1208u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 1240u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 1248u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 1264u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 1296u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 1300u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 1304u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 1308u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 1312u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 1316u);

  result = a4;
  if ( glf::FunctionalTest::sEnabled[0] != 0 )
  {
    v118 = v257;
    v257 = retaddr;
    v256 = a1;
    v255 = a2;
    v254 = a3;
    v5 = a4;
    v253 = v118;
    v252 = &a4;
    v131 = a5;
    glf::debugger::JsonWriter::JsonWriter((glf::debugger::JsonWriter::Self *)&v187);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v226), "tag", (int)(uintptr_t)(&v148) + 1);
    v227 = v5;
    g4_std::string::construct_copy(v238, &v226);
    v238[1] = v227;
    glf::debugger::JsonWriter::Insert_string_b32a05(&v187, v238, v227);
    v6 = (void *)(v238[0] - 12);
    if ( (uint32_t *)(v238[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v238[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = (void *)(v226 - 12);
    if ( (uint32_t *)(v226 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v226 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    glf::GetCalendar((int *)&v249);
    sprintf(
      (char *)s,
      "%04d-%02d-%02dT%02d:%02d:%02d",
      (uint32_t)v249,
      v251,
      (uint32_t)v250,
      *(uint64_t *)((char *)&v250 + 4));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v224), "timestamp", (int)(uintptr_t)(&v148));
    v225 = (const char *)s;
    g4_std::string::construct_copy(v195, &v224);
    v8 = v187;
    v137 = v225;
    v195[1] = (uint32_t)(uintptr_t)(v225);
    v9 = *(uint32_t *)(v187 - 12);
    if ( v9 == 0 )
      goto LABEL_8;
    if ( *(int *)(v187 - 4) >= 0 )
    {
      v119 = *(uint32_t *)(v187 - 12);
      sub_19397C0(&v187);
      v8 = v187;
      v9 = v119;
    }
    if ( *(uint8_t *)(v8 + v9 - 1) == 125 )
    {
      v114 = *(uint32_t *)(v8 - 12) - 1;
      if ( *(int *)(v8 - 4) >= 0 )
      {
        v128 = *(uint32_t *)(v8 - 12) - 1;
        sub_19397C0(&v187);
        v8 = v187;
        v114 = v128;
      }
      *(uint8_t *)(v8 + v114) = 44;
    }
    else
    {
LABEL_8:
      g4_std_compat::string_assign((int)(uintptr_t)(&v187), "{", 1u);
    }
    glf::debugger::JsonWriter::JsonWriter((glf::debugger::JsonWriter::Self *)v153);
    if ( glf::debugger::JsonWriter::Write((glf::debugger::JsonWriter::Self *)v153, v137) == 0 )
    {
      v155[0] = (uint32_t)(uintptr_t)(&dword_213B814);
      sub_1939B80(v155, *(uint32_t *)(v195[0] - 12) + 1);
      g4_std::string::append((int)(uintptr_t)(v155), "\"", 1u);
      g4_std::string::append_str(v155, v195);
      g4_std::string::construct_copy(&v189, v155);
      g4_std::string::append((int)(uintptr_t)(&v189), "\":", 2u);
      g4_std::string::append_str(&v187, &v189);
      v108 = (void *)(v189 - 12);
      if ( (uint32_t *)(v189 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v189 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v108);
      }
      v109 = (void *)(v155[0] - 12);
      if ( (uint32_t *)(v155[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v155[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v109);
      }
      g4_std::string::append_str(&v187, v153);
      g4_std::string::append((int)(uintptr_t)(&v187), "}", 1u);
    }
    v10 = (void *)(v153[0] - 12);
    if ( (uint32_t *)(v153[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v153[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    v11 = (void *)(v195[0] - 12);
    if ( (uint32_t *)(v195[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v195[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
    v12 = (void *)(v224 - 12);
    if ( (uint32_t *)(v224 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v224 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    Instance = (glf::FpsTracker::Self *)glf::FpsTracker::GetInstance();
    v236 = glf::FpsTracker::Fps(Instance);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v222), (char *)&off_1B5BAE6, (int)(uintptr_t)(&v147) + 3);
    v223 = &v236;
    g4_std::string::construct_copy(v194, &v222);
    v14 = v187;
    v138 = v223;
    v194[1] = (uint32_t)(uintptr_t)(v223);
    v15 = *(uint32_t *)(v187 - 12);
    if ( v15 == 0 )
      goto LABEL_17;
    if ( *(int *)(v187 - 4) >= 0 )
    {
      v120 = *(uint32_t *)(v187 - 12);
      sub_19397C0(&v187);
      v14 = v187;
      v15 = v120;
    }
    if ( *(uint8_t *)(v14 + v15 - 1) == 125 )
    {
      v115 = *(uint32_t *)(v14 - 12) - 1;
      if ( *(int *)(v14 - 4) >= 0 )
      {
        v129 = *(uint32_t *)(v14 - 12) - 1;
        sub_19397C0(&v187);
        v14 = v187;
        v115 = v129;
      }
      *(uint8_t *)(v14 + v115) = 44;
    }
    else
    {
LABEL_17:
      g4_std_compat::string_assign((int)(uintptr_t)(&v187), "{", 1u);
    }
    glf::debugger::JsonWriter::JsonWriter((glf::debugger::JsonWriter::Self *)&v249);
    if ( glf::debugger::JsonWriter::Write((glf::debugger::JsonWriter::Self *)&v249, *v138) == 0 )
    {
      v154[0] = (uint32_t)(uintptr_t)(&dword_213B814);
      sub_1939B80(v154, *(uint32_t *)(v194[0] - 12) + 1);
      g4_std::string::append((int)(uintptr_t)(v154), "\"", 1u);
      g4_std::string::append_str(v154, v194);
      g4_std::string::construct_copy(&v188, v154);
      g4_std::string::append((int)(uintptr_t)(&v188), "\":", 2u);
      g4_std::string::append_str(&v187, &v188);
      v106 = (void *)(v188 - 12);
      if ( (uint32_t *)(v188 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v188 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v106);
      }
      v107 = (void *)(v154[0] - 12);
      if ( (uint32_t *)(v154[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v154[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v107);
      }
      g4_std::string::append_str(&v187, &v249);
      g4_std::string::append((int)(uintptr_t)(&v187), "}", 1u);
    }
    v16 = (void *)(v249 - 12);
    if ( (uint32_t *)(v249 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v249 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    v17 = (void *)(v194[0] - 12);
    if ( (uint32_t *)(v194[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v194[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v17);
    }
    v18 = (void *)(v222 - 12);
    if ( (uint32_t *)(v222 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v222 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v18);
    }
    glf::GetRuntimeInfos();
    v235 = v249 >> 10;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v220), "taskResidentSize", (int)(uintptr_t)(&v147) + 2);
    v221 = &v235;
    g4_std::string::construct_copy(v228, &v220);
    v19 = v187;
    v139 = v221;
    v228[1] = (uint32_t)(uintptr_t)(v221);
    v20 = *(uint32_t *)(v187 - 12);
    if ( v20 == 0 )
      goto LABEL_26;
    if ( *(int *)(v187 - 4) >= 0 )
    {
      v121 = *(uint32_t *)(v187 - 12);
      sub_19397C0(&v187);
      v19 = v187;
      v20 = v121;
    }
    if ( *(uint8_t *)(v19 + v20 - 1) == 125 )
    {
      v113 = *(uint32_t *)(v19 - 12) - 1;
      if ( *(int *)(v19 - 4) >= 0 )
      {
        v127 = *(uint32_t *)(v19 - 12) - 1;
        sub_19397C0(&v187);
        v19 = v187;
        v113 = v127;
      }
      *(uint8_t *)(v19 + v113) = 44;
    }
    else
    {
LABEL_26:
      g4_std_compat::string_assign((int)(uintptr_t)(&v187), "{", 1u);
    }
    glf::debugger::JsonWriter::JsonWriter((glf::debugger::JsonWriter::Self *)s);
    if ( glf::debugger::JsonWriter::Write((glf::debugger::JsonWriter::Self *)s, *v139) == 0 )
    {
      v183[0] = (uint32_t)(uintptr_t)(&dword_213B814);
      sub_1939B80(v183, *(uint32_t *)(v228[0] - 12) + 1);
      g4_std::string::append((int)(uintptr_t)(v183), "\"", 1u);
      g4_std::string::append_str(v183, v228);
      g4_std::string::construct_copy(&v190, v183);
      g4_std::string::append((int)(uintptr_t)(&v190), "\":", 2u);
      g4_std::string::append_str(&v187, &v190);
      v21 = (void *)(v190 - 12);
      if ( (uint32_t *)(v190 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v190 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v21);
      }
      v22 = (void *)(v183[0] - 12);
      if ( (uint32_t *)(v183[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v183[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v22);
      }
      g4_std::string::append_str(&v187, s);
      g4_std::string::append((int)(uintptr_t)(&v187), "}", 1u);
    }
    v23 = (void *)(s[0] - 12);
    if ( (uint32_t *)(s[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(s[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v23);
    }
    v24 = (void *)(v228[0] - 12);
    if ( (uint32_t *)(v228[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v228[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v24);
    }
    v25 = (void *)(v220 - 12);
    if ( (uint32_t *)(v220 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v220 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v25);
    }
    v234 = (uint64_t)v250 >> 10;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v218), "taskVirtualSize", (int)(uintptr_t)(&v147) + 1);
    v219 = &v234;
    g4_std::string::construct_copy(v229, &v218);
    v26 = v187;
    v229[1] = (uint32_t)(uintptr_t)(v219);
    v140 = v219;
    v27 = *(uint32_t *)(v187 - 12);
    if ( v27 == 0 )
      goto LABEL_38;
    if ( *(int *)(v187 - 4) >= 0 )
    {
      v122 = *(uint32_t *)(v187 - 12);
      sub_19397C0(&v187);
      v26 = v187;
      v27 = v122;
    }
    if ( *(uint8_t *)(v26 + v27 - 1) == 125 )
    {
      v111 = *(uint32_t *)(v26 - 12) - 1;
      if ( *(int *)(v26 - 4) >= 0 )
      {
        v125 = *(uint32_t *)(v26 - 12) - 1;
        sub_19397C0(&v187);
        v26 = v187;
        v111 = v125;
      }
      *(uint8_t *)(v26 + v111) = 44;
    }
    else
    {
LABEL_38:
      g4_std_compat::string_assign((int)(uintptr_t)(&v187), "{", 1u);
    }
    glf::debugger::JsonWriter::JsonWriter((glf::debugger::JsonWriter::Self *)s);
    if ( glf::debugger::JsonWriter::Write((glf::debugger::JsonWriter::Self *)s, *v140) == 0 )
    {
      v184[0] = (uint32_t)(uintptr_t)(&dword_213B814);
      sub_1939B80(v184, *(uint32_t *)(v229[0] - 12) + 1);
      g4_std::string::append((int)(uintptr_t)(v184), "\"", 1u);
      g4_std::string::append_str(v184, v229);
      g4_std::string::construct_copy(&v191, v184);
      g4_std::string::append((int)(uintptr_t)(&v191), "\":", 2u);
      g4_std::string::append_str(&v187, &v191);
      v28 = (void *)(v191 - 12);
      if ( (uint32_t *)(v191 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v191 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v28);
      }
      v29 = (void *)(v184[0] - 12);
      if ( (uint32_t *)(v184[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v184[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v29);
      }
      g4_std::string::append_str(&v187, s);
      g4_std::string::append((int)(uintptr_t)(&v187), "}", 1u);
    }
    v30 = (void *)(s[0] - 12);
    if ( (uint32_t *)(s[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(s[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v30);
    }
    v31 = (void *)(v229[0] - 12);
    if ( (uint32_t *)(v229[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v229[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v31);
    }
    v32 = (void *)(v218 - 12);
    if ( (uint32_t *)(v218 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v218 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v32);
    }
    v233 = *((uint64_t *)&v250 + 1) >> 10;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v216), "freeMemory", (int)(uintptr_t)(&v147));
    v217 = (uint64_t *)&v233;
    g4_std::string::construct_copy(v230, &v216);
    v33 = v187;
    v230[1] = (uint32_t)(uintptr_t)(v217);
    v141 = v217;
    v34 = *(uint32_t *)(v187 - 12);
    if ( v34 == 0 )
      goto LABEL_50;
    if ( *(int *)(v187 - 4) >= 0 )
    {
      v123 = *(uint32_t *)(v187 - 12);
      sub_19397C0(&v187);
      v33 = v187;
      v34 = v123;
    }
    if ( *(uint8_t *)(v33 + v34 - 1) == 125 )
    {
      v116 = *(uint32_t *)(v33 - 12) - 1;
      if ( *(int *)(v33 - 4) >= 0 )
      {
        v130 = *(uint32_t *)(v33 - 12) - 1;
        sub_19397C0(&v187);
        v33 = v187;
        v116 = v130;
      }
      *(uint8_t *)(v33 + v116) = 44;
    }
    else
    {
LABEL_50:
      g4_std_compat::string_assign((int)(uintptr_t)(&v187), "{", 1u);
    }
    glf::debugger::JsonWriter::JsonWriter((glf::debugger::JsonWriter::Self *)s);
    if ( glf::debugger::JsonWriter::Write((glf::debugger::JsonWriter::Self *)s, *v141) == 0 )
    {
      v185[0] = (uint32_t)(uintptr_t)(&dword_213B814);
      sub_1939B80(v185, *(uint32_t *)(v230[0] - 12) + 1);
      g4_std::string::append((int)(uintptr_t)(v185), "\"", 1u);
      g4_std::string::append_str(v185, v230);
      g4_std::string::construct_copy(&v192, v185);
      g4_std::string::append((int)(uintptr_t)(&v192), "\":", 2u);
      g4_std::string::append_str(&v187, &v192);
      v35 = (void *)(v192 - 12);
      if ( (uint32_t *)(v192 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v192 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v35);
      }
      v36 = (void *)(v185[0] - 12);
      if ( (uint32_t *)(v185[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v185[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v36);
      }
      g4_std::string::append_str(&v187, s);
      g4_std::string::append((int)(uintptr_t)(&v187), "}", 1u);
    }
    v37 = (void *)(s[0] - 12);
    if ( (uint32_t *)(s[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(s[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v37);
    }
    v38 = (void *)(v230[0] - 12);
    if ( (uint32_t *)(v230[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v230[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v38);
    }
    v39 = (void *)(v216 - 12);
    if ( (uint32_t *)(v216 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v216 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v39);
    }
    v232 = v251 >> 10;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v214), "usedMemory", (int)(uintptr_t)(&v146) + 3);
    v215 = &v232;
    g4_std::string::construct_copy(v231, &v214);
    v40 = v187;
    v231[1] = (uint32_t)(uintptr_t)(v215);
    v142 = v215;
    v41 = *(uint32_t *)(v187 - 12);
    if ( v41 == 0 )
      goto LABEL_62;
    if ( *(int *)(v187 - 4) >= 0 )
    {
      v124 = *(uint32_t *)(v187 - 12);
      sub_19397C0(&v187);
      v40 = v187;
      v41 = v124;
    }
    if ( *(uint8_t *)(v40 + v41 - 1) == 125 )
    {
      v112 = *(uint32_t *)(v40 - 12) - 1;
      if ( *(int *)(v40 - 4) >= 0 )
      {
        v126 = *(uint32_t *)(v40 - 12) - 1;
        sub_19397C0(&v187);
        v40 = v187;
        v112 = v126;
      }
      *(uint8_t *)(v40 + v112) = 44;
    }
    else
    {
LABEL_62:
      g4_std_compat::string_assign((int)(uintptr_t)(&v187), "{", 1u);
    }
    glf::debugger::JsonWriter::JsonWriter((glf::debugger::JsonWriter::Self *)s);
    if ( glf::debugger::JsonWriter::Write((glf::debugger::JsonWriter::Self *)s, *v142) == 0 )
    {
      v186 = &dword_213B814;
      sub_1939B80(&v186, *(uint32_t *)(v231[0] - 12) + 1);
      g4_std::string::append((int)(uintptr_t)(&v186), "\"", 1u);
      g4_std::string::append_str(&v186, v231);
      g4_std::string::construct_copy(&v193, &v186);
      g4_std::string::append((int)(uintptr_t)(&v193), "\":", 2u);
      g4_std::string::append_str(&v187, &v193);
      v42 = (void *)(v193 - 12);
      if ( (uint32_t *)(v193 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v193 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v42);
      }
      v43 = v186 - 3;
      if ( v186 - 3 != dword_213B808 && __sync_fetch_and_add(v186 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v43);
      g4_std::string::append_str(&v187, s);
      g4_std::string::append((int)(uintptr_t)(&v187), "}", 1u);
    }
    v44 = (void *)(s[0] - 12);
    if ( (uint32_t *)(s[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(s[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v44);
    }
    v45 = (void *)(v231[0] - 12);
    if ( (uint32_t *)(v231[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v231[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v45);
    }
    v46 = (void *)(v214 - 12);
    if ( (uint32_t *)(v214 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v214 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v46);
    }
    v143 = glf::PropertyMap::sThis;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v181), (char *)&unk_1B15112, (int)(uintptr_t)(&v152) + 3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v180), "session.launchUid", (int)(uintptr_t)(&v152) + 2);
    glf::PropertyMap::GetPropertyEx(&v249, v143, v180, 5);
    v47 = (char *)&v250 + 12;
    if ( (uint32_t)v249 != 0 )
      v47 = (char *)v181;
    g4_std::string::construct_copy(v182, v47);
    v48 = (void *)(HIDWORD(v250) - 12);
    if ( (uint32_t *)(HIDWORD(v250) - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(HIDWORD(v250) - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v48);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v212), "session.launchUid", (int)(uintptr_t)(&v146) + 2);
    v213 = v182;
    g4_std::string::construct_copy(v239, &v212);
    v239[1] = (uint32_t)(uintptr_t)(v213);
    glf::debugger::JsonWriter::Insert_string_b32a05(&v187, v239, v213);
    v49 = (void *)(v239[0] - 12);
    if ( (uint32_t *)(v239[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v239[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v49);
    }
    v50 = (void *)(v212 - 12);
    if ( (uint32_t *)(v212 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v212 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v50);
    }
    v51 = (void *)(v182[0] - 12);
    if ( (uint32_t *)(v182[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v182[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v51);
    }
    v52 = (char *)v180[0] - 12;
    if ( (char *)v180[0] - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v180[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v52);
    }
    v53 = (void *)(v181[0] - 12);
    if ( (uint32_t *)(v181[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v181[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v53);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v178), (char *)&unk_1B15112, (int)(uintptr_t)(&v152) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v177), "build.uuid", (int)(uintptr_t)(&v152));
    glf::PropertyMap::GetPropertyEx(&v249, v143, v177, 5);
    v54 = (char *)&v250 + 12;
    if ( (uint32_t)v249 != 0 )
      v54 = (char *)v178;
    g4_std::string::construct_copy(v179, v54);
    v55 = (void *)(HIDWORD(v250) - 12);
    if ( (uint32_t *)(HIDWORD(v250) - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(HIDWORD(v250) - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v55);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v210), "build.uuid", (int)(uintptr_t)(&v146) + 1);
    v211 = v179;
    g4_std::string::construct_copy(v240, &v210);
    v240[1] = (uint32_t)(uintptr_t)(v211);
    glf::debugger::JsonWriter::Insert_string_b32a05(&v187, v240, v211);
    v56 = (void *)(v240[0] - 12);
    if ( (uint32_t *)(v240[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v240[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v56);
    }
    v57 = (void *)(v210 - 12);
    if ( (uint32_t *)(v210 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v210 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v57);
    }
    v58 = (void *)(v179[0] - 12);
    if ( (uint32_t *)(v179[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v179[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v58);
    }
    v59 = (char *)v177[0] - 12;
    if ( (char *)v177[0] - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v177[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v59);
    }
    v60 = (void *)(v178[0] - 12);
    if ( (uint32_t *)(v178[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v178[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v60);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v175), (char *)&unk_1B15112, (int)(uintptr_t)(&v151) + 3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v174), "device.name", (int)(uintptr_t)(&v151) + 2);
    glf::PropertyMap::GetPropertyEx(&v249, v143, v174, 5);
    v61 = (char *)&v250 + 12;
    if ( (uint32_t)v249 != 0 )
      v61 = (char *)v175;
    g4_std::string::construct_copy(v176, v61);
    v132 = (void *)(HIDWORD(v250) - 12);
    if ( (uint32_t *)(HIDWORD(v250) - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(HIDWORD(v250) - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v132);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v208), "device.name", (int)(uintptr_t)(&v146));
    v209 = v176;
    g4_std::string::construct_copy(v241, &v208);
    v241[1] = (uint32_t)(uintptr_t)(v209);
    glf::debugger::JsonWriter::Insert_string_b32a05(&v187, v241, v209);
    v62 = (void *)(v241[0] - 12);
    if ( (uint32_t *)(v241[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v241[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v62);
    }
    v63 = (void *)(v208 - 12);
    if ( (uint32_t *)(v208 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v208 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v63);
    }
    v64 = (void *)(v176[0] - 12);
    if ( (uint32_t *)(v176[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v176[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v64);
    }
    v65 = (char *)v174[0] - 12;
    if ( (char *)v174[0] - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v174[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v65);
    }
    v66 = (void *)(v175[0] - 12);
    if ( (uint32_t *)(v175[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v175[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v66);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v172), (char *)&unk_1B15112, (int)(uintptr_t)(&v151) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v171), "device.machine", (int)(uintptr_t)(&v151));
    glf::PropertyMap::GetPropertyEx(&v249, v143, v171, 5);
    v67 = (char *)&v250 + 12;
    if ( (uint32_t)v249 != 0 )
      v67 = (char *)v172;
    g4_std::string::construct_copy(v173, v67);
    v133 = (void *)(HIDWORD(v250) - 12);
    if ( (uint32_t *)(HIDWORD(v250) - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(HIDWORD(v250) - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v133);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v206), "device.machine", (int)(uintptr_t)(&v145) + 3);
    v207 = v173;
    g4_std::string::construct_copy(v242, &v206);
    v242[1] = (uint32_t)(uintptr_t)(v207);
    glf::debugger::JsonWriter::Insert_string_b32a05(&v187, v242, v207);
    v68 = (void *)(v242[0] - 12);
    if ( (uint32_t *)(v242[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v242[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v68);
    }
    v69 = (void *)(v206 - 12);
    if ( (uint32_t *)(v206 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v206 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v69);
    }
    v70 = (void *)(v173[0] - 12);
    if ( (uint32_t *)(v173[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v173[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v70);
    }
    v71 = (char *)v171[0] - 12;
    if ( (char *)v171[0] - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v171[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v71);
    }
    v72 = (void *)(v172[0] - 12);
    if ( (uint32_t *)(v172[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v172[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v72);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v169), (char *)&unk_1B15112, (int)(uintptr_t)(&v150) + 3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v168), "device.systemVersion", (int)(uintptr_t)(&v150) + 2);
    glf::PropertyMap::GetPropertyEx(&v249, v143, v168, 5);
    v73 = (char *)&v250 + 12;
    if ( (uint32_t)v249 != 0 )
      v73 = (char *)v169;
    g4_std::string::construct_copy(v170, v73);
    v134 = (void *)(HIDWORD(v250) - 12);
    if ( (uint32_t *)(HIDWORD(v250) - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(HIDWORD(v250) - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v134);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v204), "device.systemVersion", (int)(uintptr_t)(&v145) + 2);
    v205 = v170;
    g4_std::string::construct_copy(v243, &v204);
    v243[1] = (uint32_t)(uintptr_t)(v205);
    glf::debugger::JsonWriter::Insert_string_b32a05(&v187, v243, v205);
    v74 = (void *)(v243[0] - 12);
    if ( (uint32_t *)(v243[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v243[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v74);
    }
    v75 = (void *)(v204 - 12);
    if ( (uint32_t *)(v204 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v204 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v75);
    }
    v76 = (void *)(v170[0] - 12);
    if ( (uint32_t *)(v170[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v170[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v76);
    }
    v77 = (char *)v168[0] - 12;
    if ( (char *)v168[0] - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v168[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v77);
    }
    v78 = (void *)(v169[0] - 12);
    if ( (uint32_t *)(v169[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v169[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v78);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v166), (char *)&unk_1B15112, (int)(uintptr_t)(&v150) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v165), "game.name", (int)(uintptr_t)(&v150));
    glf::PropertyMap::GetPropertyEx(&v249, v143, v165, 5);
    v79 = (char *)&v250 + 12;
    if ( (uint32_t)v249 != 0 )
      v79 = (char *)v166;
    g4_std::string::construct_copy(v167, v79);
    v135 = (void *)(HIDWORD(v250) - 12);
    if ( (uint32_t *)(HIDWORD(v250) - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(HIDWORD(v250) - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v135);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v202), "game.name", (int)(uintptr_t)(&v145) + 1);
    v203 = v167;
    g4_std::string::construct_copy(v244, &v202);
    v244[1] = (uint32_t)(uintptr_t)(v203);
    glf::debugger::JsonWriter::Insert_string_b32a05(&v187, v244, v203);
    v80 = (void *)(v244[0] - 12);
    if ( (uint32_t *)(v244[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v244[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v80);
    }
    v81 = (void *)(v202 - 12);
    if ( (uint32_t *)(v202 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v202 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v81);
    }
    v82 = (void *)(v167[0] - 12);
    if ( (uint32_t *)(v167[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v167[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v82);
    }
    v83 = (char *)v165[0] - 12;
    if ( (char *)v165[0] - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v165[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v83);
    }
    v84 = (void *)(v166[0] - 12);
    if ( (uint32_t *)(v166[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v166[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v84);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v163), (char *)&unk_1B15112, (int)(uintptr_t)(&v149) + 3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v162), "game.version", (int)(uintptr_t)(&v149) + 2);
    glf::PropertyMap::GetPropertyEx(&v249, v143, v162, 5);
    v85 = (char *)&v250 + 12;
    if ( (uint32_t)v249 != 0 )
      v85 = (char *)v163;
    g4_std::string::construct_copy(v164, v85);
    v136 = (void *)(HIDWORD(v250) - 12);
    if ( (uint32_t *)(HIDWORD(v250) - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(HIDWORD(v250) - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v136);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v200), "game.version", (int)(uintptr_t)(&v145));
    v201 = v164;
    g4_std::string::construct_copy(v245, &v200);
    v245[1] = (uint32_t)(uintptr_t)(v201);
    glf::debugger::JsonWriter::Insert_string_b32a05(&v187, v245, v201);
    v86 = (void *)(v245[0] - 12);
    if ( (uint32_t *)(v245[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v245[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v86);
    }
    v87 = (void *)(v200 - 12);
    if ( (uint32_t *)(v200 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v200 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v87);
    }
    v88 = (void *)(v164[0] - 12);
    if ( (uint32_t *)(v164[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v164[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v88);
    }
    v89 = (char *)v162[0] - 12;
    if ( (char *)v162[0] - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v162[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v89);
    }
    v90 = (void *)(v163[0] - 12);
    if ( (uint32_t *)(v163[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v163[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v90);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v160), (char *)&unk_1B15112, (int)(uintptr_t)(&v149) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v159), "build.uuid", (int)(uintptr_t)(&v149));
    glf::PropertyMap::GetPropertyEx(&v249, v143, v159, 5);
    v91 = (char *)&v250 + 12;
    if ( (uint32_t)v249 != 0 )
      v91 = (char *)v160;
    g4_std::string::construct_copy(v161, v91);
    v92 = (void *)(HIDWORD(v250) - 12);
    if ( (uint32_t *)(HIDWORD(v250) - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(HIDWORD(v250) - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v92);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v198), "build.uuid", (int)(uintptr_t)(&v144[2]));
    v199 = v161;
    g4_std::string::construct_copy(v246, &v198);
    v246[1] = (uint32_t)(uintptr_t)(v199);
    glf::debugger::JsonWriter::Insert_string_b32a05(&v187, v246, v199);
    v93 = (void *)(v246[0] - 12);
    if ( (uint32_t *)(v246[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v246[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v93);
    }
    v94 = (void *)(v198 - 12);
    if ( (uint32_t *)(v198 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v198 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v94);
    }
    v95 = (void *)(v161[0] - 12);
    if ( (uint32_t *)(v161[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v161[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v95);
    }
    v96 = (char *)v159[0] - 12;
    if ( (char *)v159[0] - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v159[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v96);
    }
    v97 = (void *)(v160[0] - 12);
    if ( (uint32_t *)(v160[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v160[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v97);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v157), (char *)&unk_1B15112, (int)(uintptr_t)(&v148) + 3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v156), "session.launchUid", (int)(uintptr_t)(&v148) + 2);
    glf::PropertyMap::GetPropertyEx(&v249, v143, v156, 5);
    v98 = (char *)&v250 + 12;
    if ( (uint32_t)v249 != 0 )
      v98 = (char *)v157;
    g4_std::string::construct_copy(v158, v98);
    v99 = (void *)(HIDWORD(v250) - 12);
    if ( (uint32_t *)(HIDWORD(v250) - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(HIDWORD(v250) - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v99);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v196), "session.launchUid", (int)(uintptr_t)(&v144[1]));
    v197 = v158;
    g4_std::string::construct_copy(v247, &v196);
    v247[1] = (uint32_t)(uintptr_t)(v197);
    glf::debugger::JsonWriter::Insert_string_b32a05(&v187, v247, v197);
    v100 = (void *)(v247[0] - 12);
    if ( (uint32_t *)(v247[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v247[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v100);
    }
    v101 = (void *)(v196 - 12);
    if ( (uint32_t *)(v196 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v196 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v101);
    }
    v102 = (void *)(v158[0] - 12);
    if ( (uint32_t *)(v158[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v158[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v102);
    }
    v103 = (char *)v156[0] - 12;
    if ( (char *)v156[0] - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v156[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v103);
    }
    v104 = (void *)(v157[0] - 12);
    if ( (uint32_t *)(v157[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v157[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v104);
    }
    if ( *(uint32_t *)(v131 + 20) != 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v237), "custom", (int)(uintptr_t)(v144));
      v237[1] = v131;
      glf::debugger::op_std_map_std_string_std_string_const(&v187, v237);
      v110 = (void *)(v237[0] - 12);
      if ( (uint32_t *)(v237[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v237[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v110);
      }
    }
    printf("#ios_device_testing %s\n\n", v187);
    result = v187;
    v105 = (void *)(v187 - 12);
    if ( (uint32_t *)(v187 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v187 - 4), 0xFFFFFFFF) <= 0 )
    {
      return ((g4_std::string::Rep::M_destroy(v105)), (int)0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::FunctionalTest::CheckPoint  (binary VA: 0xc8e8a0)
// Original: glf::FunctionalTest::CheckPoint
// ----------------------------------------------------------------------------
void glf::FunctionalTest::CheckPoint(int a1, int a2, int a3)
{
  int v3;
  typedef uint8_t _g4_t_v4[4];
  typedef int _g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef int *_g4_t_v7;
  typedef int *_g4_t_v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v6)) > _g4_s2 ? (16u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v7)) > _g4_s3 ? (20u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v8)) > _g4_s4 ? (24u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v9)) > _g4_s5 ? (28u + sizeof(_g4_t_v9)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  v7 = &v5;
  v8 = &v5;
  v5 = 0;
  v6 = nullptr;
  v9 = 0;
  glf::FunctionalTest::CheckPoint(a1, a2, (int)(uintptr_t)(v4), a3, (int)(uintptr_t)(v4));
  sub_C89770(v3, v6);
}

// ----------------------------------------------------------------------------
// Function: glf::FunctionalTest::TakeScreenshot::Screenshot  (binary VA: 0xc8fdd0)
// Original: glf::FunctionalTest::TakeScreenshot::Screenshot
// ----------------------------------------------------------------------------
void glf::FunctionalTest::TakeScreenshot::Screenshot()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::FunctionalTest::TakeScreenshot::Destroy  (binary VA: 0xc8fde0)
// Original: glf::FunctionalTest::TakeScreenshot::~TakeScreenshot
// ----------------------------------------------------------------------------
void glf::FunctionalTest::TakeScreenshot::Destroy(glf::FunctionalTest::TakeScreenshot::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206DA98);
  glf::FunctionalTest::TakeScreenshot::sTakeScreenshotRef = (uintptr_t)(uintptr_t)(nullptr);
}

// ----------------------------------------------------------------------------
// Function: glf::FunctionalTest::TakeScreenshot::Destroy_eac8fe10  (binary VA: 0xc8fe10)
// Original: glf::FunctionalTest::TakeScreenshot::~TakeScreenshot
// ----------------------------------------------------------------------------
void glf::FunctionalTest::TakeScreenshot::Destroy_eac8fe10(glf::FunctionalTest::TakeScreenshot::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206DA98);
  glf::FunctionalTest::TakeScreenshot::sTakeScreenshotRef = (uintptr_t)(uintptr_t)(nullptr);
  opDelete(self);
}


