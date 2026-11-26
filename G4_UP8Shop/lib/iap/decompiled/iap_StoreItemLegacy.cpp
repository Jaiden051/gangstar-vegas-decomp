#include "Core/Utils/DecompTypes.h"
#include "iap_StoreItemLegacy.h"

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::write  (binary VA: 0x150a180)
// Original: iap::StoreItemLegacy::write
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::write(iap::StoreItemLegacy::Self *self, glwebtools::JsonWriter::Self *a2, void *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63, int a64)
{
  uint8_t STACK[1048] = {0};
  char v64;
  int v65;
  int v66;
  void *v67;
  void *v68;
  char v69;
  int v70;
  int v71;
  void *v72;
  void *v73;
  void *v74;
  void *v75;
  char isObject;
  int v77;
  int v78;
  void *v79;
  void *v80;
  void *v81;
  void *v82;
  void *v83;
  void *v84;
  char v85;
  char *v86;
  int v87;
  void *v88;
  void *v89;
  void *v90;
  void *v91;
  void *v92;
  void *v93;
  char v94;
  int v95;
  int v96;
  void *v97;
  void *v98;
  void *v99;
  void *v100;
  void *v101;
  void *v102;
  glwebtools::Json::Value::Self *v103;
  glwebtools::Self *v104;
  void *v105;
  void *v106;
  glwebtools::Json::Value::Self *v108;
  glwebtools::Json::Value::Self *v109;
  glwebtools::Json::Value::Self *v110;
  char v111;
  char *v112;
  glwebtools::Self *v113;
  char v114;
  int v115;
  glwebtools::Self *v116;
  char v117;
  char *v118;
  glwebtools::Self *v119;
  char v120;
  int v121;
  glwebtools::Self *v122;
  char v123;
  int v124;
  glwebtools::Self *v125;
  char v126;
  int v127;
  glwebtools::Self *v128;
  char v129;
  char *v130;
  glwebtools::Self *v131;
  glwebtools::Json::Value::Self *v132;
  glwebtools::Json::Value::Self *v133;
  glwebtools::Json::Value::Self *v134;
  glwebtools::Json::Value::Self *v135;
  glwebtools::Json::Value::Self *v136;
  glwebtools::Json::Value::Self *v137;
  glwebtools::Json::Value::Self *v138;
  glwebtools::Json::Value::Self *v139;
  glwebtools::Json::Value::Self *v140;
  glwebtools::Json::Value::Self *v141;
  glwebtools::Json::Value::Self *Root;
  glwebtools::Json::Value::Self *v143;
  glwebtools::Json::Value::Self *v144;
  glwebtools::Json::Value::Self *v145;
  glwebtools::Json::Value::Self *v146;
  glwebtools::Json::Value::Self *v147;
  glwebtools::Json::Value::Self *v148;
  glwebtools::Json::Value::Self *v149;
  glwebtools::Json::Value::Self *v150;
  glwebtools::Json::Value::Self *v151;
  glwebtools::Json::Value::Self *v152;
  glwebtools::Json::Value::Self *v153;
  glwebtools::Json::Value::Self *v154;
  glwebtools::Json::Value::Self *v155;
  glwebtools::Json::Value::Self *v156;
  glwebtools::Json::Value::Self *v157;
  glwebtools::Json::Value::Self *v158;
  glwebtools::Json::Value::Self *v159;
  glwebtools::Json::Value::Self *v160;
  glwebtools::Json::Value::Self *v161;
  glwebtools::Json::Value::Self *v162;
  glwebtools::Json::Value::Self *v163;
  glwebtools::Json::Value::Self *v164;
  glwebtools::Json::Value::Self *v165;
  glwebtools::Json::Value::Self *v166;
  glwebtools::Json::Value::Self *v167;
  const glwebtools::Json::Value::Self *retaddr;
  typedef char *_g4_t_v168;
  typedef int _g4_t_v169;
  typedef char *_g4_t_v170;
  typedef int _g4_t_v171;
  typedef char *_g4_t_v172;
  typedef int _g4_t_v173;
  typedef char *_g4_t_v174;
  typedef char *_g4_t_v175;
  typedef char *_g4_t_v176;
  typedef int _g4_t_v177;
  typedef char *_g4_t_v178;
  typedef char *_g4_t_v179;
  typedef char *_g4_t_v180;
  typedef int _g4_t_v181;
  typedef char *_g4_t_v182;
  typedef char *_g4_t_v183;
  typedef char *_g4_t_v184;
  typedef int _g4_t_v185;
  typedef char *_g4_t_v186;
  typedef int _g4_t_v187;
  typedef char *_g4_t_v188;
  typedef int _g4_t_v189;
  typedef char *_g4_t_v190;
  typedef char *_g4_t_v191;
  typedef const glwebtools::Json::Value::Self *_g4_t_v192;
  typedef const glwebtools::Json::Value::Self *_g4_t_v193;
  typedef const glwebtools::Json::Value::Self *_g4_t_v194;
  typedef const glwebtools::Json::Value::Self *_g4_t_v195;
  typedef const glwebtools::Json::Value::Self *_g4_t_v196;
  typedef const glwebtools::Json::Value::Self *_g4_t_v197;
  typedef const glwebtools::Json::Value::Self *_g4_t_v198;
  typedef const glwebtools::Json::Value::Self *_g4_t_v199;
  typedef const glwebtools::Json::Value::Self *_g4_t_v200;
  typedef const glwebtools::Json::Value::Self *_g4_t_v201;
  typedef const glwebtools::Json::Value::Self *_g4_t_v202;
  typedef const glwebtools::Json::Value::Self *_g4_t_v203;
  typedef char *_g4_t_v204;
  typedef int _g4_t_v205;
  typedef int _g4_t_v206;
  typedef int _g4_t_v207;
  typedef int _g4_t_v208;
  typedef int _g4_t_v209;
  typedef char *_g4_t_v210;
  typedef int _g4_t_v211;
  typedef char *_g4_t_v212;
  typedef int _g4_t_v213;
  typedef char *_g4_t_v214;
  typedef int _g4_t_v215;
  typedef char *_g4_t_v216;
  typedef int _g4_t_v217;
  typedef char *_g4_t_v218;
  typedef int _g4_t_v219;
  typedef char *_g4_t_v220;
  typedef int _g4_t_v221;
  typedef char *_g4_t_v222;
  typedef int _g4_t_v223;
  typedef char *_g4_t_v224;
  typedef int _g4_t_v225;
  typedef char *_g4_t_v226;
  typedef int _g4_t_v227;
  typedef char *_g4_t_v228;
  typedef int _g4_t_v229;
  typedef char *_g4_t_v230;
  typedef int _g4_t_v231;
  typedef char *_g4_t_v232;
  typedef int _g4_t_v233;
  typedef char *_g4_t_v234;
  typedef uint32_t _g4_t_v235[4];
  typedef int _g4_t_v236[4];
  typedef int _g4_t_v237[4];
  typedef int _g4_t_v238[4];
  typedef int _g4_t_v239[4];
  typedef int _g4_t_v240[4];
  typedef int _g4_t_v241[4];
  typedef int _g4_t_v242[4];
  typedef int _g4_t_v243[4];
  typedef int _g4_t_v244[4];
  typedef int _g4_t_v245[4];
  typedef int _g4_t_v246[4];
  typedef int _g4_t_v247[3];
  typedef uint8_t _g4_t_v248[16];
  typedef uint8_t _g4_t_v249[16];
  typedef uint8_t _g4_t_v250[16];
  typedef uint8_t _g4_t_v251[16];
  typedef uint8_t _g4_t_v252[16];
  typedef uint8_t _g4_t_v253[16];
  typedef uint8_t _g4_t_v254[16];
  typedef uint8_t _g4_t_v255[16];
  typedef uint8_t _g4_t_v256[16];
  typedef uint8_t _g4_t_v257[16];
  typedef uint8_t _g4_t_v258[16];
  typedef uint8_t _g4_t_v259[16];
  typedef uint8_t _g4_t_v260[16];
  typedef uint8_t _g4_t_v261[16];
  typedef uint32_t _g4_t_v262[8];
  enum : size_t {
    _g4_s0 = 816u,
    _g4_s1 = (8u + sizeof(_g4_t_v168)) > _g4_s0 ? (8u + sizeof(_g4_t_v168)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v169)) > _g4_s1 ? (8u + sizeof(_g4_t_v169)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v170)) > _g4_s2 ? (8u + sizeof(_g4_t_v170)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v171)) > _g4_s3 ? (8u + sizeof(_g4_t_v171)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v172)) > _g4_s4 ? (8u + sizeof(_g4_t_v172)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v173)) > _g4_s5 ? (8u + sizeof(_g4_t_v173)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v174)) > _g4_s6 ? (8u + sizeof(_g4_t_v174)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v175)) > _g4_s7 ? (8u + sizeof(_g4_t_v175)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v176)) > _g4_s8 ? (8u + sizeof(_g4_t_v176)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v177)) > _g4_s9 ? (8u + sizeof(_g4_t_v177)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v178)) > _g4_s10 ? (8u + sizeof(_g4_t_v178)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v179)) > _g4_s11 ? (8u + sizeof(_g4_t_v179)) : _g4_s11,
    _g4_s13 = (8u + sizeof(_g4_t_v180)) > _g4_s12 ? (8u + sizeof(_g4_t_v180)) : _g4_s12,
    _g4_s14 = (8u + sizeof(_g4_t_v181)) > _g4_s13 ? (8u + sizeof(_g4_t_v181)) : _g4_s13,
    _g4_s15 = (8u + sizeof(_g4_t_v182)) > _g4_s14 ? (8u + sizeof(_g4_t_v182)) : _g4_s14,
    _g4_s16 = (8u + sizeof(_g4_t_v183)) > _g4_s15 ? (8u + sizeof(_g4_t_v183)) : _g4_s15,
    _g4_s17 = (8u + sizeof(_g4_t_v184)) > _g4_s16 ? (8u + sizeof(_g4_t_v184)) : _g4_s16,
    _g4_s18 = (8u + sizeof(_g4_t_v185)) > _g4_s17 ? (8u + sizeof(_g4_t_v185)) : _g4_s17,
    _g4_s19 = (8u + sizeof(_g4_t_v186)) > _g4_s18 ? (8u + sizeof(_g4_t_v186)) : _g4_s18,
    _g4_s20 = (8u + sizeof(_g4_t_v187)) > _g4_s19 ? (8u + sizeof(_g4_t_v187)) : _g4_s19,
    _g4_s21 = (8u + sizeof(_g4_t_v188)) > _g4_s20 ? (8u + sizeof(_g4_t_v188)) : _g4_s20,
    _g4_s22 = (8u + sizeof(_g4_t_v189)) > _g4_s21 ? (8u + sizeof(_g4_t_v189)) : _g4_s21,
    _g4_s23 = (8u + sizeof(_g4_t_v190)) > _g4_s22 ? (8u + sizeof(_g4_t_v190)) : _g4_s22,
    _g4_s24 = (8u + sizeof(_g4_t_v191)) > _g4_s23 ? (8u + sizeof(_g4_t_v191)) : _g4_s23,
    _g4_s25 = (8u + sizeof(_g4_t_v192)) > _g4_s24 ? (8u + sizeof(_g4_t_v192)) : _g4_s24,
    _g4_s26 = (8u + sizeof(_g4_t_v193)) > _g4_s25 ? (8u + sizeof(_g4_t_v193)) : _g4_s25,
    _g4_s27 = (8u + sizeof(_g4_t_v194)) > _g4_s26 ? (8u + sizeof(_g4_t_v194)) : _g4_s26,
    _g4_s28 = (8u + sizeof(_g4_t_v195)) > _g4_s27 ? (8u + sizeof(_g4_t_v195)) : _g4_s27,
    _g4_s29 = (8u + sizeof(_g4_t_v196)) > _g4_s28 ? (8u + sizeof(_g4_t_v196)) : _g4_s28,
    _g4_s30 = (8u + sizeof(_g4_t_v197)) > _g4_s29 ? (8u + sizeof(_g4_t_v197)) : _g4_s29,
    _g4_s31 = (8u + sizeof(_g4_t_v198)) > _g4_s30 ? (8u + sizeof(_g4_t_v198)) : _g4_s30,
    _g4_s32 = (8u + sizeof(_g4_t_v199)) > _g4_s31 ? (8u + sizeof(_g4_t_v199)) : _g4_s31,
    _g4_s33 = (8u + sizeof(_g4_t_v200)) > _g4_s32 ? (8u + sizeof(_g4_t_v200)) : _g4_s32,
    _g4_s34 = (8u + sizeof(_g4_t_v201)) > _g4_s33 ? (8u + sizeof(_g4_t_v201)) : _g4_s33,
    _g4_s35 = (8u + sizeof(_g4_t_v202)) > _g4_s34 ? (8u + sizeof(_g4_t_v202)) : _g4_s34,
    _g4_s36 = (8u + sizeof(_g4_t_v203)) > _g4_s35 ? (8u + sizeof(_g4_t_v203)) : _g4_s35,
    _g4_s37 = (16u + sizeof(_g4_t_v204)) > _g4_s36 ? (16u + sizeof(_g4_t_v204)) : _g4_s36,
    _g4_s38 = (33u + sizeof(_g4_t_v205)) > _g4_s37 ? (33u + sizeof(_g4_t_v205)) : _g4_s37,
    _g4_s39 = (36u + sizeof(_g4_t_v206)) > _g4_s38 ? (36u + sizeof(_g4_t_v206)) : _g4_s38,
    _g4_s40 = (40u + sizeof(_g4_t_v207)) > _g4_s39 ? (40u + sizeof(_g4_t_v207)) : _g4_s39,
    _g4_s41 = (44u + sizeof(_g4_t_v208)) > _g4_s40 ? (44u + sizeof(_g4_t_v208)) : _g4_s40,
    _g4_s42 = (72u + sizeof(_g4_t_v209)) > _g4_s41 ? (72u + sizeof(_g4_t_v209)) : _g4_s41,
    _g4_s43 = (76u + sizeof(_g4_t_v210)) > _g4_s42 ? (76u + sizeof(_g4_t_v210)) : _g4_s42,
    _g4_s44 = (88u + sizeof(_g4_t_v211)) > _g4_s43 ? (88u + sizeof(_g4_t_v211)) : _g4_s43,
    _g4_s45 = (92u + sizeof(_g4_t_v212)) > _g4_s44 ? (92u + sizeof(_g4_t_v212)) : _g4_s44,
    _g4_s46 = (104u + sizeof(_g4_t_v213)) > _g4_s45 ? (104u + sizeof(_g4_t_v213)) : _g4_s45,
    _g4_s47 = (108u + sizeof(_g4_t_v214)) > _g4_s46 ? (108u + sizeof(_g4_t_v214)) : _g4_s46,
    _g4_s48 = (120u + sizeof(_g4_t_v215)) > _g4_s47 ? (120u + sizeof(_g4_t_v215)) : _g4_s47,
    _g4_s49 = (124u + sizeof(_g4_t_v216)) > _g4_s48 ? (124u + sizeof(_g4_t_v216)) : _g4_s48,
    _g4_s50 = (136u + sizeof(_g4_t_v217)) > _g4_s49 ? (136u + sizeof(_g4_t_v217)) : _g4_s49,
    _g4_s51 = (140u + sizeof(_g4_t_v218)) > _g4_s50 ? (140u + sizeof(_g4_t_v218)) : _g4_s50,
    _g4_s52 = (152u + sizeof(_g4_t_v219)) > _g4_s51 ? (152u + sizeof(_g4_t_v219)) : _g4_s51,
    _g4_s53 = (156u + sizeof(_g4_t_v220)) > _g4_s52 ? (156u + sizeof(_g4_t_v220)) : _g4_s52,
    _g4_s54 = (168u + sizeof(_g4_t_v221)) > _g4_s53 ? (168u + sizeof(_g4_t_v221)) : _g4_s53,
    _g4_s55 = (172u + sizeof(_g4_t_v222)) > _g4_s54 ? (172u + sizeof(_g4_t_v222)) : _g4_s54,
    _g4_s56 = (184u + sizeof(_g4_t_v223)) > _g4_s55 ? (184u + sizeof(_g4_t_v223)) : _g4_s55,
    _g4_s57 = (188u + sizeof(_g4_t_v224)) > _g4_s56 ? (188u + sizeof(_g4_t_v224)) : _g4_s56,
    _g4_s58 = (200u + sizeof(_g4_t_v225)) > _g4_s57 ? (200u + sizeof(_g4_t_v225)) : _g4_s57,
    _g4_s59 = (204u + sizeof(_g4_t_v226)) > _g4_s58 ? (204u + sizeof(_g4_t_v226)) : _g4_s58,
    _g4_s60 = (216u + sizeof(_g4_t_v227)) > _g4_s59 ? (216u + sizeof(_g4_t_v227)) : _g4_s59,
    _g4_s61 = (220u + sizeof(_g4_t_v228)) > _g4_s60 ? (220u + sizeof(_g4_t_v228)) : _g4_s60,
    _g4_s62 = (232u + sizeof(_g4_t_v229)) > _g4_s61 ? (232u + sizeof(_g4_t_v229)) : _g4_s61,
    _g4_s63 = (236u + sizeof(_g4_t_v230)) > _g4_s62 ? (236u + sizeof(_g4_t_v230)) : _g4_s62,
    _g4_s64 = (248u + sizeof(_g4_t_v231)) > _g4_s63 ? (248u + sizeof(_g4_t_v231)) : _g4_s63,
    _g4_s65 = (252u + sizeof(_g4_t_v232)) > _g4_s64 ? (252u + sizeof(_g4_t_v232)) : _g4_s64,
    _g4_s66 = (264u + sizeof(_g4_t_v233)) > _g4_s65 ? (264u + sizeof(_g4_t_v233)) : _g4_s65,
    _g4_s67 = (268u + sizeof(_g4_t_v234)) > _g4_s66 ? (268u + sizeof(_g4_t_v234)) : _g4_s66,
    _g4_s68 = (280u + sizeof(_g4_t_v235)) > _g4_s67 ? (280u + sizeof(_g4_t_v235)) : _g4_s67,
    _g4_s69 = (296u + sizeof(_g4_t_v236)) > _g4_s68 ? (296u + sizeof(_g4_t_v236)) : _g4_s68,
    _g4_s70 = (312u + sizeof(_g4_t_v237)) > _g4_s69 ? (312u + sizeof(_g4_t_v237)) : _g4_s69,
    _g4_s71 = (328u + sizeof(_g4_t_v238)) > _g4_s70 ? (328u + sizeof(_g4_t_v238)) : _g4_s70,
    _g4_s72 = (344u + sizeof(_g4_t_v239)) > _g4_s71 ? (344u + sizeof(_g4_t_v239)) : _g4_s71,
    _g4_s73 = (360u + sizeof(_g4_t_v240)) > _g4_s72 ? (360u + sizeof(_g4_t_v240)) : _g4_s72,
    _g4_s74 = (376u + sizeof(_g4_t_v241)) > _g4_s73 ? (376u + sizeof(_g4_t_v241)) : _g4_s73,
    _g4_s75 = (392u + sizeof(_g4_t_v242)) > _g4_s74 ? (392u + sizeof(_g4_t_v242)) : _g4_s74,
    _g4_s76 = (408u + sizeof(_g4_t_v243)) > _g4_s75 ? (408u + sizeof(_g4_t_v243)) : _g4_s75,
    _g4_s77 = (424u + sizeof(_g4_t_v244)) > _g4_s76 ? (424u + sizeof(_g4_t_v244)) : _g4_s76,
    _g4_s78 = (440u + sizeof(_g4_t_v245)) > _g4_s77 ? (440u + sizeof(_g4_t_v245)) : _g4_s77,
    _g4_s79 = (456u + sizeof(_g4_t_v246)) > _g4_s78 ? (456u + sizeof(_g4_t_v246)) : _g4_s78,
    _g4_s80 = (472u + sizeof(_g4_t_v247)) > _g4_s79 ? (472u + sizeof(_g4_t_v247)) : _g4_s79,
    _g4_s81 = (484u + sizeof(_g4_t_v248)) > _g4_s80 ? (484u + sizeof(_g4_t_v248)) : _g4_s80,
    _g4_s82 = (500u + sizeof(_g4_t_v249)) > _g4_s81 ? (500u + sizeof(_g4_t_v249)) : _g4_s81,
    _g4_s83 = (516u + sizeof(_g4_t_v250)) > _g4_s82 ? (516u + sizeof(_g4_t_v250)) : _g4_s82,
    _g4_s84 = (532u + sizeof(_g4_t_v251)) > _g4_s83 ? (532u + sizeof(_g4_t_v251)) : _g4_s83,
    _g4_s85 = (548u + sizeof(_g4_t_v252)) > _g4_s84 ? (548u + sizeof(_g4_t_v252)) : _g4_s84,
    _g4_s86 = (564u + sizeof(_g4_t_v253)) > _g4_s85 ? (564u + sizeof(_g4_t_v253)) : _g4_s85,
    _g4_s87 = (580u + sizeof(_g4_t_v254)) > _g4_s86 ? (580u + sizeof(_g4_t_v254)) : _g4_s86,
    _g4_s88 = (596u + sizeof(_g4_t_v255)) > _g4_s87 ? (596u + sizeof(_g4_t_v255)) : _g4_s87,
    _g4_s89 = (612u + sizeof(_g4_t_v256)) > _g4_s88 ? (612u + sizeof(_g4_t_v256)) : _g4_s88,
    _g4_s90 = (628u + sizeof(_g4_t_v257)) > _g4_s89 ? (628u + sizeof(_g4_t_v257)) : _g4_s89,
    _g4_s91 = (644u + sizeof(_g4_t_v258)) > _g4_s90 ? (644u + sizeof(_g4_t_v258)) : _g4_s90,
    _g4_s92 = (660u + sizeof(_g4_t_v259)) > _g4_s91 ? (660u + sizeof(_g4_t_v259)) : _g4_s91,
    _g4_s93 = (676u + sizeof(_g4_t_v260)) > _g4_s92 ? (676u + sizeof(_g4_t_v260)) : _g4_s92,
    _g4_s94 = (692u + sizeof(_g4_t_v261)) > _g4_s93 ? (692u + sizeof(_g4_t_v261)) : _g4_s93,
    _g4_s95 = (708u + sizeof(_g4_t_v262)) > _g4_s94 ? (708u + sizeof(_g4_t_v262)) : _g4_s94
  };
  alignas(16) uint8_t _g4_sf[_g4_s95];
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 8u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 8u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 8u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 8u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 8u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 8u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 8u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 8u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 8u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 8u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 8u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 8u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 8u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 8u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 8u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 8u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 8u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 8u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 8u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 8u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 8u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 8u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 8u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 8u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 8u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 8u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 8u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 8u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 8u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 8u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 8u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 8u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 8u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 8u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 8u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 8u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 16u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 33u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 36u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 40u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 44u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 72u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 76u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 88u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 92u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 104u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 108u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 120u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 124u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 136u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 140u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 152u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 156u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 168u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 172u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 184u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 188u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 200u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 204u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 216u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 220u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 232u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 236u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 248u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 252u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 264u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 268u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 280u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 296u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 312u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 328u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 344u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 360u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 376u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 392u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 408u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 424u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 440u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 456u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 472u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 484u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 500u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 516u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 532u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 548u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 564u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 580u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 596u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 612u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 628u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 644u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 660u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 676u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 692u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 708u);

  if ( *((uint8_t *)self + 10) != 0 && *(uint32_t *)(*((uint32_t *)self + 1) - 12) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v209), "title", (int)(uintptr_t)(&v205));
    v210 = (char *)self + 4;
    g4_std::string::construct_copy(v236, &v209);
    v236[1] = (int)(uintptr_t)(v210);
    if ( v210[6] != 0 )
    {
      v172 = v210;
      isObject = glwebtools::JsonWriter::isObject(a2);
      v77 = (int)(uintptr_t)(v172);
      if ( isObject == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v248), (char *)&loc_6 + 1);
        Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v248);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v248);
        v77 = (int)(uintptr_t)(v172);
      }
      v173 = v77;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v262);
      v78 = -2147483646;
      if ( *(uint8_t *)(v173 + 6) != 0 )
        v78 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v262, v173);
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v78) )
      {
        v196 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v262);
        v145 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v146 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v145, (char **)v236);
        glwebtools::Json::Value::opAssign(v146, v196);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v262);
    }
    v79 = (void *)(v236[0] - 12);
    if ( (uint32_t *)(v236[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v236[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v79);
    }
    v80 = (void *)(v209 - 12);
    if ( (uint32_t *)(v209 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v209 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v80);
    }
  }
  if ( *((uint8_t *)self + 18) != 0 && *(uint32_t *)(*((uint32_t *)self + 3) - 12) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v211), "id", (int)(uintptr_t)(&v205) + 1);
    v212 = (char *)self + 12;
    g4_std::string::construct_copy(v237, &v211);
    v237[1] = (int)(uintptr_t)(v212);
    if ( v212[6] != 0 )
    {
      v168 = v212;
      v64 = glwebtools::JsonWriter::isObject(a2);
      v65 = (int)(uintptr_t)(v168);
      if ( v64 == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v249), (char *)&loc_6 + 1);
        v140 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(v140, (const glwebtools::Json::Value::Self *)v249);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v249);
        v65 = (int)(uintptr_t)(v168);
      }
      v169 = v65;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v262);
      v66 = -2147483646;
      if ( *(uint8_t *)(v169 + 6) != 0 )
        v66 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v262, v169);
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v66) )
      {
        v194 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v262);
        v136 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v137 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v136, (char **)v237);
        glwebtools::Json::Value::opAssign(v137, v194);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v262);
    }
    v67 = (void *)(v237[0] - 12);
    if ( (uint32_t *)(v237[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v237[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v67);
    }
    v68 = (void *)(v211 - 12);
    if ( (uint32_t *)(v211 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v211 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v68);
    }
  }
  if ( *((uint8_t *)self + 26) != 0 && *(uint32_t *)(*((uint32_t *)self + 5) - 12) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v213), "description", (int)(uintptr_t)(&v205) + 2);
    v214 = (char *)self + 20;
    g4_std::string::construct_copy(v238, &v213);
    v238[1] = (int)(uintptr_t)(v214);
    if ( v214[6] != 0 )
    {
      v170 = v214;
      v69 = glwebtools::JsonWriter::isObject(a2);
      v70 = (int)(uintptr_t)(v170);
      if ( v69 == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v250), (char *)&loc_6 + 1);
        v141 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(v141, (const glwebtools::Json::Value::Self *)v250);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v250);
        v70 = (int)(uintptr_t)(v170);
      }
      v171 = v70;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v262);
      v71 = -2147483646;
      if ( *(uint8_t *)(v171 + 6) != 0 )
        v71 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v262, v171);
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v71) )
      {
        v195 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v262);
        v138 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v139 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v138, (char **)v238);
        glwebtools::Json::Value::opAssign(v139, v195);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v262);
    }
    v72 = (void *)(v238[0] - 12);
    if ( (uint32_t *)(v238[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v238[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v72);
    }
    v73 = (void *)(v213 - 12);
    if ( (uint32_t *)(v213 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v213 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v73);
    }
  }
  if ( *((uint8_t *)self + 34) == 0 || *(uint32_t *)(*((uint32_t *)self + 7) - 12) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v215), "preview", (int)(uintptr_t)(&v206));
    v216 = (char *)self + 28;
    g4_std::string::construct_copy(v239, &v215);
    v239[1] = (int)(uintptr_t)(v216);
    if ( v216[6] != 0 )
    {
      v188 = v216;
      v126 = glwebtools::JsonWriter::isObject(a2);
      v127 = (int)(uintptr_t)(v188);
      if ( v126 == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v251), (char *)&loc_6 + 1);
        v160 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(v160, (const glwebtools::Json::Value::Self *)v251);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v251);
        v127 = (int)(uintptr_t)(v188);
      }
      v189 = v127;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v262);
      v128 = nullptr;
      if ( *(uint8_t *)(v189 + 6) != 0 )
        v128 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v262, v189);
      if ( glwebtools::IsOperationSuccess(v128) )
      {
        v201 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v262);
        v158 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v159 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v158, (char **)v239);
        glwebtools::Json::Value::opAssign(v159, v201);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v262);
    }
    v74 = (void *)(v239[0] - 12);
    if ( (uint32_t *)(v239[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v239[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v74);
    }
    v75 = (void *)(v215 - 12);
    if ( (uint32_t *)(v215 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v215 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v75);
    }
  }
  if ( *((uint8_t *)self + 42) == 0 || *(uint32_t *)(*((uint32_t *)self + 9) - 12) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v217), "tracking_uid", (int)(uintptr_t)(&v206) + 1);
    v218 = (char *)self + 36;
    g4_std::string::construct_copy(v240, &v217);
    v240[1] = (int)(uintptr_t)(v218);
    if ( v218[6] != 0 )
    {
      v184 = v218;
      v120 = glwebtools::JsonWriter::isObject(a2);
      v121 = (int)(uintptr_t)(v184);
      if ( v120 == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v252), (char *)&loc_6 + 1);
        v154 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(v154, (const glwebtools::Json::Value::Self *)v252);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v252);
        v121 = (int)(uintptr_t)(v184);
      }
      v185 = v121;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v262);
      v122 = nullptr;
      if ( *(uint8_t *)(v185 + 6) != 0 )
        v122 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v262, v185);
      if ( glwebtools::IsOperationSuccess(v122) )
      {
        v199 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v262);
        v152 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v153 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v152, (char **)v240);
        glwebtools::Json::Value::opAssign(v153, v199);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v262);
    }
    v81 = (void *)(v240[0] - 12);
    if ( (uint32_t *)(v240[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v240[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v81);
    }
    v82 = (void *)(v217 - 12);
    if ( (uint32_t *)(v217 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v217 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v82);
    }
  }
  if ( *((uint8_t *)self + 50) == 0 || *((int *)self + 11) > 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v219), "offline_items_bonus", (int)(uintptr_t)(&v206) + 2);
    v220 = (char *)self + 44;
    g4_std::string::construct_copy(v241, &v219);
    v241[1] = (int)(uintptr_t)(v220);
    if ( v220[6] != 0 )
    {
      v182 = v220;
      v117 = glwebtools::JsonWriter::isObject(a2);
      v118 = v182;
      if ( v117 == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v253), (char *)&loc_6 + 1);
        v161 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(v161, (const glwebtools::Json::Value::Self *)v253);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v253);
        v118 = v182;
      }
      v183 = v118;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v262);
      v119 = nullptr;
      if ( v183[6] != 0 )
        v119 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v262, *(uint32_t *)v183);
      if ( glwebtools::IsOperationSuccess(v119) )
      {
        v200 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v262);
        v155 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v156 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v155, (char **)v241);
        glwebtools::Json::Value::opAssign(v156, v200);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v262);
    }
    v83 = (void *)(v241[0] - 12);
    if ( (uint32_t *)(v241[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v241[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v83);
    }
    v84 = (void *)(v219 - 12);
    if ( (uint32_t *)(v219 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v219 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v84);
    }
  }
  if ( *((uint8_t *)self + 58) != 0 && *((int *)self + 13) > 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v221), "amount", (int)(uintptr_t)(&v206) + 3);
    v222 = (char *)self + 52;
    g4_std::string::construct_copy(v242, &v221);
    v242[1] = (int)(uintptr_t)(v222);
    if ( v222[6] != 0 )
    {
      v174 = v222;
      v85 = glwebtools::JsonWriter::isObject(a2);
      v86 = v174;
      if ( v85 == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v254), (char *)&loc_6 + 1);
        v143 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(v143, (const glwebtools::Json::Value::Self *)v254);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v254);
        v86 = v174;
      }
      v175 = v86;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v262);
      v87 = -2147483646;
      if ( v175[6] != 0 )
        v87 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v262, *(uint32_t *)v175);
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v87) )
      {
        v193 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v262);
        v134 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v135 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v134, (char **)v242);
        glwebtools::Json::Value::opAssign(v135, v193);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v262);
    }
    v88 = (void *)(v242[0] - 12);
    if ( (uint32_t *)(v242[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v242[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v88);
    }
    v89 = (void *)(v221 - 12);
    if ( (uint32_t *)(v221 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v221 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v89);
    }
  }
  if ( *((uint8_t *)self + 66) == 0 || *((int *)self + 15) > 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v223), "base_amount", (int)(uintptr_t)(&v207));
    v224 = (char *)self + 60;
    g4_std::string::construct_copy(v243, &v223);
    v243[1] = (int)(uintptr_t)(v224);
    if ( v224[6] != 0 )
    {
      v178 = v224;
      v111 = glwebtools::JsonWriter::isObject(a2);
      v112 = v178;
      if ( v111 == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v255), (char *)&loc_6 + 1);
        v167 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(v167, (const glwebtools::Json::Value::Self *)v255);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v255);
        v112 = v178;
      }
      v179 = v112;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v262);
      v113 = nullptr;
      if ( v179[6] != 0 )
        v113 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v262, *(uint32_t *)v179);
      if ( glwebtools::IsOperationSuccess(v113) )
      {
        v203 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v262);
        v165 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v166 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v165, (char **)v243);
        glwebtools::Json::Value::opAssign(v166, v203);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v262);
    }
    v90 = (void *)(v243[0] - 12);
    if ( (uint32_t *)(v243[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v243[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v90);
    }
    v91 = (void *)(v223 - 12);
    if ( (uint32_t *)(v223 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v223 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v91);
    }
  }
  if ( *((uint8_t *)self + 74) == 0 || *((int *)self + 17) > 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v225), "promo_amount", (int)(uintptr_t)(&v207) + 1);
    v226 = (char *)self + 68;
    g4_std::string::construct_copy(v244, &v225);
    v244[1] = (int)(uintptr_t)(v226);
    if ( v226[6] != 0 )
    {
      v190 = v226;
      v129 = glwebtools::JsonWriter::isObject(a2);
      v130 = v190;
      if ( v129 == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v256), (char *)&loc_6 + 1);
        v157 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(v157, (const glwebtools::Json::Value::Self *)v256);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v256);
        v130 = v190;
      }
      v191 = v130;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v262);
      v131 = nullptr;
      if ( v191[6] != 0 )
        v131 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v262, *(uint32_t *)v191);
      if ( glwebtools::IsOperationSuccess(v131) )
      {
        v197 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v262);
        v147 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v148 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v147, (char **)v244);
        glwebtools::Json::Value::opAssign(v148, v197);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v262);
    }
    v92 = (void *)(v244[0] - 12);
    if ( (uint32_t *)(v244[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v244[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v92);
    }
    v93 = (void *)(v225 - 12);
    if ( (uint32_t *)(v225 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v225 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v93);
    }
  }
  if ( *((uint8_t *)self + 82) != 0 && *(uint32_t *)(*((uint32_t *)self + 19) - 12) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v227), "type", (int)(uintptr_t)(&v207) + 2);
    v228 = (char *)self + 76;
    g4_std::string::construct_copy(v245, &v227);
    v245[1] = (int)(uintptr_t)(v228);
    if ( v228[6] != 0 )
    {
      v176 = v228;
      v94 = glwebtools::JsonWriter::isObject(a2);
      v95 = (int)(uintptr_t)(v176);
      if ( v94 == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v257), (char *)&loc_6 + 1);
        v144 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(v144, (const glwebtools::Json::Value::Self *)v257);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v257);
        v95 = (int)(uintptr_t)(v176);
      }
      v177 = v95;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v262);
      v96 = -2147483646;
      if ( *(uint8_t *)(v177 + 6) != 0 )
        v96 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v262, v177);
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v96) )
      {
        v192 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v262);
        v132 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v133 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v132, (char **)v245);
        glwebtools::Json::Value::opAssign(v133, v192);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v262);
    }
    v97 = (void *)(v245[0] - 12);
    if ( (uint32_t *)(v245[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v245[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v97);
    }
    v98 = (void *)(v227 - 12);
    if ( (uint32_t *)(v227 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v227 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v98);
    }
  }
  if ( *((uint8_t *)self + 90) == 0 || *(uint32_t *)(*((uint32_t *)self + 21) - 12) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v229), "virtual_cash_type", (int)(uintptr_t)(&v207) + 3);
    v230 = (char *)self + 84;
    g4_std::string::construct_copy(v246, &v229);
    v246[1] = (int)(uintptr_t)(v230);
    if ( v230[6] != 0 )
    {
      v186 = v230;
      v123 = glwebtools::JsonWriter::isObject(a2);
      v124 = (int)(uintptr_t)(v186);
      if ( v123 == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v258), (char *)&loc_6 + 1);
        v151 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(v151, (const glwebtools::Json::Value::Self *)v258);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v258);
        v124 = (int)(uintptr_t)(v186);
      }
      v187 = v124;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v262);
      v125 = nullptr;
      if ( *(uint8_t *)(v187 + 6) != 0 )
        v125 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v262, v187);
      if ( glwebtools::IsOperationSuccess(v125) )
      {
        v198 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v262);
        v149 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v150 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v149, (char **)v246);
        glwebtools::Json::Value::opAssign(v150, v198);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v262);
    }
    v99 = (void *)(v246[0] - 12);
    if ( (uint32_t *)(v246[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v246[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v99);
    }
    v100 = (void *)(v229 - 12);
    if ( (uint32_t *)(v229 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v229 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v100);
    }
  }
  if ( *((uint8_t *)self + 98) == 0 || *(uint32_t *)(*((uint32_t *)self + 23) - 12) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v231), "locale", (int)(uintptr_t)(&v208));
    v232 = (char *)self + 92;
    g4_std::string::construct_copy(v247, &v231);
    v247[1] = (int)(uintptr_t)(v232);
    if ( v232[6] != 0 )
    {
      v180 = v232;
      v114 = glwebtools::JsonWriter::isObject(a2);
      v115 = (int)(uintptr_t)(v180);
      if ( v114 == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v259), (char *)&loc_6 + 1);
        v164 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(v164, (const glwebtools::Json::Value::Self *)v259);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v259);
        v115 = (int)(uintptr_t)(v180);
      }
      v181 = v115;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v262);
      v116 = nullptr;
      if ( *(uint8_t *)(v181 + 6) != 0 )
        v116 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v262, v181);
      if ( glwebtools::IsOperationSuccess(v116) )
      {
        v202 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v262);
        v162 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v163 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v162, (char **)v247);
        glwebtools::Json::Value::opAssign(v163, v202);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v262);
    }
    v101 = (void *)(v247[0] - 12);
    if ( (uint32_t *)(v247[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v247[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v101);
    }
    v102 = (void *)(v231 - 12);
    if ( (uint32_t *)(v231 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v231 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v102);
    }
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v233), "billing_methods", (int)(uintptr_t)(&v208) + 1);
  v234 = (char *)self + 100;
  g4_std::string::construct_copy(v235, &v233);
  v204 = v234;
  v235[1] = (uint32_t)(uintptr_t)(v234);
  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v261), (char *)&loc_6 + 1);
    v110 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(v110, (const glwebtools::Json::Value::Self *)v261);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v261);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v262);
  glwebtools::Json::Value::Construct((int)(uintptr_t)(v260), nullptr);
  v103 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v262);
  glwebtools::Json::Value::opAssign(v103, (const glwebtools::Json::Value::Self *)v260);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v260);
  v104 = (glwebtools::Self *)G4_VCALL<int>(v204, 8, v262);
  if ( glwebtools::IsOperationSuccess(v104) )
  {
    retaddr = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v262);
    v108 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v109 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v108, (char **)&STACK[0x3D8]);
    glwebtools::Json::Value::opAssign(v109, retaddr);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v262);
  v105 = (void *)(STACK[0x3D8] - 12);
  if ( v105 != a3 && __sync_fetch_and_add((volatile int32_t *)(STACK[0x3D8] - 4), 0xFFFFFFFF) <= 0 )
  {
    v262[6] = (uint32_t)(uintptr_t)((char *)&a15 + 2);
    g4_std::string::Rep::M_destroy(v105);
  }
  v106 = (void *)(a64 - 12);
  if ( (void *)(a64 - 12) != a3 && __sync_fetch_and_add((volatile int32_t *)(a64 - 4), 0xFFFFFFFF) <= 0 )
  {
    v262[6] = (uint32_t)(uintptr_t)((char *)&a15 + 3);
    g4_std::string::Rep::M_destroy(v106);
  }
  glwebtools::JsonWriter::write(a2, (iap::StoreItemLegacy::Self *)((char *)self + 116));
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::Clear  (binary VA: 0x150ba70)
// Original: iap::StoreItemLegacy::Clear
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::Clear(iap::StoreItemLegacy::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  int result;
  uint32_t *v9;
  typedef uint32_t *_g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v12)) > _g4_s2 ? (32u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v13)) > _g4_s3 ? (48u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v14)) > _g4_s4 ? (64u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v15)) > _g4_s5 ? (80u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (96u + sizeof(_g4_t_v16)) > _g4_s6 ? (96u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (112u + sizeof(_g4_t_v17)) > _g4_s7 ? (112u + sizeof(_g4_t_v17)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 80u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 96u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 112u);

  v10 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 4, &v10);
  v1 = v10 - 3;
  if ( v10 - 3 != dword_213B808 && __sync_fetch_and_add(v10 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v1);
  *((uint8_t *)self + 10) = 0;
  v11 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 12, &v11);
  v2 = v11 - 3;
  if ( v11 - 3 != dword_213B808 && __sync_fetch_and_add(v11 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v2);
  *((uint8_t *)self + 18) = 0;
  v12 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 20, &v12);
  v3 = v12 - 3;
  if ( v12 - 3 != dword_213B808 && __sync_fetch_and_add(v12 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3);
  *((uint8_t *)self + 26) = 0;
  v13 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 28, &v13);
  v4 = v13 - 3;
  if ( v13 - 3 != dword_213B808 && __sync_fetch_and_add(v13 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  *((uint8_t *)self + 34) = 0;
  v14 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 36, &v14);
  v5 = v14 - 3;
  if ( v14 - 3 != dword_213B808 && __sync_fetch_and_add(v14 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v5);
  *((uint8_t *)self + 42) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint8_t *)self + 50) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint8_t *)self + 58) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint8_t *)self + 66) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint8_t *)self + 74) = 0;
  v15 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 76, &v15);
  v6 = v15 - 3;
  if ( v15 - 3 != dword_213B808 && __sync_fetch_and_add(v15 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v6);
  *((uint8_t *)self + 82) = 0;
  v16 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 84, &v16);
  v7 = v16 - 3;
  if ( v16 - 3 != dword_213B808 && __sync_fetch_and_add(v16 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v7);
  *((uint8_t *)self + 90) = 0;
  v17 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 92, &v17);
  result = (int)(uintptr_t)(v17);
  v9 = v17 - 3;
  if ( v17 - 3 != dword_213B808 && __sync_fetch_and_add(v17 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v9);
  *((uint8_t *)self + 98) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::read  (binary VA: 0x150bd60)
// Original: iap::StoreItemLegacy::read
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::read(long double a1, iap::StoreItemLegacy::Self *self, const glwebtools::JsonReader::Self *a3)
{
  const glwebtools::Json::Value::Self *v3;
  bool IsOperationSuccess;
  glwebtools::Self *v5;
  int v6;
  int v7;
  const glwebtools::Json::Value::Self *v8;
  void *v9;
  void *v10;
  void *v11;
  const glwebtools::Json::Value::Self *v12;
  void *v13;
  void *v14;
  void *v15;
  void *v16;
  void *v17;
  void *v18;
  void *v19;
  void *v20;
  void *v21;
  char IsValid;
  iap::StoreItemLegacy::Self *v23;
  char v24;
  char v25;
  const glwebtools::Json::Value::Self *v26;
  void *v27;
  void *v28;
  void *v29;
  void *v30;
  void *v31;
  void *v32;
  void *v33;
  char v34;
  int v35;
  const glwebtools::Json::Value::Self *v37;
  void *v38;
  const glwebtools::Json::Value::Self *v39;
  void *v40;
  const glwebtools::Json::Value::Self *v41;
  char isObject;
  bool isMember;
  const glwebtools::Json::Value::Self *v44;
  char v45;
  bool v46;
  const glwebtools::Json::Value::Self *v47;
  char v48;
  glwebtools::Self *v49;
  char v50;
  bool v51;
  const glwebtools::Json::Value::Self *v52;
  char v53;
  glwebtools::Self *v54;
  const glwebtools::Json::Value::Self *v55;
  void *v56;
  const glwebtools::Json::Value::Self *v57;
  void *v58;
  char v59;
  bool v60;
  const glwebtools::Json::Value::Self *v61;
  char v62;
  int v63;
  bool v64;
  bool v65;
  typedef glwebtools::Self *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef char *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef glwebtools::Self *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef glwebtools::Self *_g4_t_v85;
  typedef glwebtools::Self *_g4_t_v86;
  typedef int (***_g4_t_v87)(uint32_t, int *);
  typedef glwebtools::Self *_g4_t_v88;
  typedef glwebtools::Self *_g4_t_v89;
  typedef char *_g4_t_v90;
  typedef char *_g4_t_v91;
  typedef char *_g4_t_v92;
  typedef char *_g4_t_v93;
  typedef void *_g4_t_v94;
  typedef void *_g4_t_v95;
  typedef char *_g4_t_v96;
  typedef char *_g4_t_v97;
  typedef char *_g4_t_v98;
  typedef char *_g4_t_v99;
  typedef char *_g4_t_v100;
  typedef void *_g4_t_v101;
  typedef int _g4_t_v102;
  typedef glwebtools::Self *_g4_t_v103;
  typedef void *_g4_t_v104;
  typedef void *_g4_t_v105;
  typedef void *_g4_t_v106;
  typedef void *_g4_t_v107;
  typedef void *_g4_t_v108;
  typedef void *_g4_t_v109;
  typedef void *_g4_t_v110;
  typedef void *_g4_t_v111;
  typedef int _g4_t_v112;
  typedef glwebtools::Self *_g4_t_v113;
  typedef char *_g4_t_v114;
  typedef char *_g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120[3];
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef char *_g4_t_v123;
  typedef int _g4_t_v124;
  typedef char *_g4_t_v125;
  typedef int _g4_t_v126;
  typedef char *_g4_t_v127;
  typedef int _g4_t_v128;
  typedef char *_g4_t_v129;
  typedef int _g4_t_v130;
  typedef char *_g4_t_v131;
  typedef int _g4_t_v132;
  typedef char *_g4_t_v133;
  typedef int _g4_t_v134;
  typedef char *_g4_t_v135;
  typedef int _g4_t_v136;
  typedef char *_g4_t_v137;
  typedef int _g4_t_v138;
  typedef char *_g4_t_v139;
  typedef int _g4_t_v140;
  typedef char *_g4_t_v141;
  typedef int _g4_t_v142;
  typedef char *_g4_t_v143;
  typedef int _g4_t_v144;
  typedef char *_g4_t_v145;
  typedef int _g4_t_v146;
  typedef char *_g4_t_v147;
  typedef int _g4_t_v148;
  typedef char *_g4_t_v149;
  typedef int _g4_t_v150;
  typedef char *_g4_t_v151;
  typedef int _g4_t_v152;
  typedef char *_g4_t_v153;
  typedef int _g4_t_v154;
  typedef char *_g4_t_v155;
  typedef int _g4_t_v156;
  typedef char *_g4_t_v157;
  typedef int _g4_t_v158;
  typedef char *_g4_t_v159;
  typedef int _g4_t_v160;
  typedef char *_g4_t_v161;
  typedef int _g4_t_v162;
  typedef char *_g4_t_v163;
  typedef int _g4_t_v164;
  typedef char *_g4_t_v165;
  typedef int _g4_t_v166;
  typedef char *_g4_t_v167;
  typedef int _g4_t_v168;
  typedef char *_g4_t_v169;
  typedef int _g4_t_v170;
  typedef char *_g4_t_v171;
  typedef int _g4_t_v172;
  typedef char *_g4_t_v173;
  typedef int _g4_t_v174[7];
  typedef const char *_g4_t_v175[13];
  typedef char *_g4_t_v176;
  enum : size_t {
    _g4_s0 = 720u,
    _g4_s1 = (8u + sizeof(_g4_t_v66)) > _g4_s0 ? (8u + sizeof(_g4_t_v66)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v67)) > _g4_s1 ? (8u + sizeof(_g4_t_v67)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v68)) > _g4_s2 ? (8u + sizeof(_g4_t_v68)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v69)) > _g4_s3 ? (8u + sizeof(_g4_t_v69)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v70)) > _g4_s4 ? (8u + sizeof(_g4_t_v70)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v71)) > _g4_s5 ? (8u + sizeof(_g4_t_v71)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v72)) > _g4_s6 ? (8u + sizeof(_g4_t_v72)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v73)) > _g4_s7 ? (8u + sizeof(_g4_t_v73)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v74)) > _g4_s8 ? (8u + sizeof(_g4_t_v74)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v75)) > _g4_s9 ? (8u + sizeof(_g4_t_v75)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v76)) > _g4_s10 ? (8u + sizeof(_g4_t_v76)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v77)) > _g4_s11 ? (8u + sizeof(_g4_t_v77)) : _g4_s11,
    _g4_s13 = (8u + sizeof(_g4_t_v78)) > _g4_s12 ? (8u + sizeof(_g4_t_v78)) : _g4_s12,
    _g4_s14 = (8u + sizeof(_g4_t_v79)) > _g4_s13 ? (8u + sizeof(_g4_t_v79)) : _g4_s13,
    _g4_s15 = (8u + sizeof(_g4_t_v80)) > _g4_s14 ? (8u + sizeof(_g4_t_v80)) : _g4_s14,
    _g4_s16 = (8u + sizeof(_g4_t_v81)) > _g4_s15 ? (8u + sizeof(_g4_t_v81)) : _g4_s15,
    _g4_s17 = (8u + sizeof(_g4_t_v82)) > _g4_s16 ? (8u + sizeof(_g4_t_v82)) : _g4_s16,
    _g4_s18 = (8u + sizeof(_g4_t_v83)) > _g4_s17 ? (8u + sizeof(_g4_t_v83)) : _g4_s17,
    _g4_s19 = (8u + sizeof(_g4_t_v84)) > _g4_s18 ? (8u + sizeof(_g4_t_v84)) : _g4_s18,
    _g4_s20 = (16u + sizeof(_g4_t_v85)) > _g4_s19 ? (16u + sizeof(_g4_t_v85)) : _g4_s19,
    _g4_s21 = (16u + sizeof(_g4_t_v86)) > _g4_s20 ? (16u + sizeof(_g4_t_v86)) : _g4_s20,
    _g4_s22 = (16u + sizeof(_g4_t_v87)) > _g4_s21 ? (16u + sizeof(_g4_t_v87)) : _g4_s21,
    _g4_s23 = (16u + sizeof(_g4_t_v88)) > _g4_s22 ? (16u + sizeof(_g4_t_v88)) : _g4_s22,
    _g4_s24 = (16u + sizeof(_g4_t_v89)) > _g4_s23 ? (16u + sizeof(_g4_t_v89)) : _g4_s23,
    _g4_s25 = (20u + sizeof(_g4_t_v90)) > _g4_s24 ? (20u + sizeof(_g4_t_v90)) : _g4_s24,
    _g4_s26 = (24u + sizeof(_g4_t_v91)) > _g4_s25 ? (24u + sizeof(_g4_t_v91)) : _g4_s25,
    _g4_s27 = (32u + sizeof(_g4_t_v92)) > _g4_s26 ? (32u + sizeof(_g4_t_v92)) : _g4_s26,
    _g4_s28 = (40u + sizeof(_g4_t_v93)) > _g4_s27 ? (40u + sizeof(_g4_t_v93)) : _g4_s27,
    _g4_s29 = (44u + sizeof(_g4_t_v94)) > _g4_s28 ? (44u + sizeof(_g4_t_v94)) : _g4_s28,
    _g4_s30 = (44u + sizeof(_g4_t_v95)) > _g4_s29 ? (44u + sizeof(_g4_t_v95)) : _g4_s29,
    _g4_s31 = (48u + sizeof(_g4_t_v96)) > _g4_s30 ? (48u + sizeof(_g4_t_v96)) : _g4_s30,
    _g4_s32 = (52u + sizeof(_g4_t_v97)) > _g4_s31 ? (52u + sizeof(_g4_t_v97)) : _g4_s31,
    _g4_s33 = (56u + sizeof(_g4_t_v98)) > _g4_s32 ? (56u + sizeof(_g4_t_v98)) : _g4_s32,
    _g4_s34 = (64u + sizeof(_g4_t_v99)) > _g4_s33 ? (64u + sizeof(_g4_t_v99)) : _g4_s33,
    _g4_s35 = (72u + sizeof(_g4_t_v100)) > _g4_s34 ? (72u + sizeof(_g4_t_v100)) : _g4_s34,
    _g4_s36 = (72u + sizeof(_g4_t_v101)) > _g4_s35 ? (72u + sizeof(_g4_t_v101)) : _g4_s35,
    _g4_s37 = (72u + sizeof(_g4_t_v102)) > _g4_s36 ? (72u + sizeof(_g4_t_v102)) : _g4_s36,
    _g4_s38 = (72u + sizeof(_g4_t_v103)) > _g4_s37 ? (72u + sizeof(_g4_t_v103)) : _g4_s37,
    _g4_s39 = (76u + sizeof(_g4_t_v104)) > _g4_s38 ? (76u + sizeof(_g4_t_v104)) : _g4_s38,
    _g4_s40 = (76u + sizeof(_g4_t_v105)) > _g4_s39 ? (76u + sizeof(_g4_t_v105)) : _g4_s39,
    _g4_s41 = (76u + sizeof(_g4_t_v106)) > _g4_s40 ? (76u + sizeof(_g4_t_v106)) : _g4_s40,
    _g4_s42 = (76u + sizeof(_g4_t_v107)) > _g4_s41 ? (76u + sizeof(_g4_t_v107)) : _g4_s41,
    _g4_s43 = (76u + sizeof(_g4_t_v108)) > _g4_s42 ? (76u + sizeof(_g4_t_v108)) : _g4_s42,
    _g4_s44 = (76u + sizeof(_g4_t_v109)) > _g4_s43 ? (76u + sizeof(_g4_t_v109)) : _g4_s43,
    _g4_s45 = (76u + sizeof(_g4_t_v110)) > _g4_s44 ? (76u + sizeof(_g4_t_v110)) : _g4_s44,
    _g4_s46 = (76u + sizeof(_g4_t_v111)) > _g4_s45 ? (76u + sizeof(_g4_t_v111)) : _g4_s45,
    _g4_s47 = (76u + sizeof(_g4_t_v112)) > _g4_s46 ? (76u + sizeof(_g4_t_v112)) : _g4_s46,
    _g4_s48 = (76u + sizeof(_g4_t_v113)) > _g4_s47 ? (76u + sizeof(_g4_t_v113)) : _g4_s47,
    _g4_s49 = (76u + sizeof(_g4_t_v114)) > _g4_s48 ? (76u + sizeof(_g4_t_v114)) : _g4_s48,
    _g4_s50 = (76u + sizeof(_g4_t_v115)) > _g4_s49 ? (76u + sizeof(_g4_t_v115)) : _g4_s49,
    _g4_s51 = (81u + sizeof(_g4_t_v116)) > _g4_s50 ? (81u + sizeof(_g4_t_v116)) : _g4_s50,
    _g4_s52 = (84u + sizeof(_g4_t_v117)) > _g4_s51 ? (84u + sizeof(_g4_t_v117)) : _g4_s51,
    _g4_s53 = (104u + sizeof(_g4_t_v118)) > _g4_s52 ? (104u + sizeof(_g4_t_v118)) : _g4_s52,
    _g4_s54 = (108u + sizeof(_g4_t_v119)) > _g4_s53 ? (108u + sizeof(_g4_t_v119)) : _g4_s53,
    _g4_s55 = (128u + sizeof(_g4_t_v120)) > _g4_s54 ? (128u + sizeof(_g4_t_v120)) : _g4_s54,
    _g4_s56 = (140u + sizeof(_g4_t_v121)) > _g4_s55 ? (140u + sizeof(_g4_t_v121)) : _g4_s55,
    _g4_s57 = (144u + sizeof(_g4_t_v122)) > _g4_s56 ? (144u + sizeof(_g4_t_v122)) : _g4_s56,
    _g4_s58 = (148u + sizeof(_g4_t_v123)) > _g4_s57 ? (148u + sizeof(_g4_t_v123)) : _g4_s57,
    _g4_s59 = (160u + sizeof(_g4_t_v124)) > _g4_s58 ? (160u + sizeof(_g4_t_v124)) : _g4_s58,
    _g4_s60 = (164u + sizeof(_g4_t_v125)) > _g4_s59 ? (164u + sizeof(_g4_t_v125)) : _g4_s59,
    _g4_s61 = (176u + sizeof(_g4_t_v126)) > _g4_s60 ? (176u + sizeof(_g4_t_v126)) : _g4_s60,
    _g4_s62 = (180u + sizeof(_g4_t_v127)) > _g4_s61 ? (180u + sizeof(_g4_t_v127)) : _g4_s61,
    _g4_s63 = (192u + sizeof(_g4_t_v128)) > _g4_s62 ? (192u + sizeof(_g4_t_v128)) : _g4_s62,
    _g4_s64 = (196u + sizeof(_g4_t_v129)) > _g4_s63 ? (196u + sizeof(_g4_t_v129)) : _g4_s63,
    _g4_s65 = (208u + sizeof(_g4_t_v130)) > _g4_s64 ? (208u + sizeof(_g4_t_v130)) : _g4_s64,
    _g4_s66 = (212u + sizeof(_g4_t_v131)) > _g4_s65 ? (212u + sizeof(_g4_t_v131)) : _g4_s65,
    _g4_s67 = (224u + sizeof(_g4_t_v132)) > _g4_s66 ? (224u + sizeof(_g4_t_v132)) : _g4_s66,
    _g4_s68 = (228u + sizeof(_g4_t_v133)) > _g4_s67 ? (228u + sizeof(_g4_t_v133)) : _g4_s67,
    _g4_s69 = (240u + sizeof(_g4_t_v134)) > _g4_s68 ? (240u + sizeof(_g4_t_v134)) : _g4_s68,
    _g4_s70 = (244u + sizeof(_g4_t_v135)) > _g4_s69 ? (244u + sizeof(_g4_t_v135)) : _g4_s69,
    _g4_s71 = (256u + sizeof(_g4_t_v136)) > _g4_s70 ? (256u + sizeof(_g4_t_v136)) : _g4_s70,
    _g4_s72 = (260u + sizeof(_g4_t_v137)) > _g4_s71 ? (260u + sizeof(_g4_t_v137)) : _g4_s71,
    _g4_s73 = (272u + sizeof(_g4_t_v138)) > _g4_s72 ? (272u + sizeof(_g4_t_v138)) : _g4_s72,
    _g4_s74 = (276u + sizeof(_g4_t_v139)) > _g4_s73 ? (276u + sizeof(_g4_t_v139)) : _g4_s73,
    _g4_s75 = (288u + sizeof(_g4_t_v140)) > _g4_s74 ? (288u + sizeof(_g4_t_v140)) : _g4_s74,
    _g4_s76 = (292u + sizeof(_g4_t_v141)) > _g4_s75 ? (292u + sizeof(_g4_t_v141)) : _g4_s75,
    _g4_s77 = (304u + sizeof(_g4_t_v142)) > _g4_s76 ? (304u + sizeof(_g4_t_v142)) : _g4_s76,
    _g4_s78 = (308u + sizeof(_g4_t_v143)) > _g4_s77 ? (308u + sizeof(_g4_t_v143)) : _g4_s77,
    _g4_s79 = (320u + sizeof(_g4_t_v144)) > _g4_s78 ? (320u + sizeof(_g4_t_v144)) : _g4_s78,
    _g4_s80 = (324u + sizeof(_g4_t_v145)) > _g4_s79 ? (324u + sizeof(_g4_t_v145)) : _g4_s79,
    _g4_s81 = (336u + sizeof(_g4_t_v146)) > _g4_s80 ? (336u + sizeof(_g4_t_v146)) : _g4_s80,
    _g4_s82 = (340u + sizeof(_g4_t_v147)) > _g4_s81 ? (340u + sizeof(_g4_t_v147)) : _g4_s81,
    _g4_s83 = (352u + sizeof(_g4_t_v148)) > _g4_s82 ? (352u + sizeof(_g4_t_v148)) : _g4_s82,
    _g4_s84 = (356u + sizeof(_g4_t_v149)) > _g4_s83 ? (356u + sizeof(_g4_t_v149)) : _g4_s83,
    _g4_s85 = (368u + sizeof(_g4_t_v150)) > _g4_s84 ? (368u + sizeof(_g4_t_v150)) : _g4_s84,
    _g4_s86 = (372u + sizeof(_g4_t_v151)) > _g4_s85 ? (372u + sizeof(_g4_t_v151)) : _g4_s85,
    _g4_s87 = (384u + sizeof(_g4_t_v152)) > _g4_s86 ? (384u + sizeof(_g4_t_v152)) : _g4_s86,
    _g4_s88 = (388u + sizeof(_g4_t_v153)) > _g4_s87 ? (388u + sizeof(_g4_t_v153)) : _g4_s87,
    _g4_s89 = (400u + sizeof(_g4_t_v154)) > _g4_s88 ? (400u + sizeof(_g4_t_v154)) : _g4_s88,
    _g4_s90 = (404u + sizeof(_g4_t_v155)) > _g4_s89 ? (404u + sizeof(_g4_t_v155)) : _g4_s89,
    _g4_s91 = (416u + sizeof(_g4_t_v156)) > _g4_s90 ? (416u + sizeof(_g4_t_v156)) : _g4_s90,
    _g4_s92 = (420u + sizeof(_g4_t_v157)) > _g4_s91 ? (420u + sizeof(_g4_t_v157)) : _g4_s91,
    _g4_s93 = (432u + sizeof(_g4_t_v158)) > _g4_s92 ? (432u + sizeof(_g4_t_v158)) : _g4_s92,
    _g4_s94 = (436u + sizeof(_g4_t_v159)) > _g4_s93 ? (436u + sizeof(_g4_t_v159)) : _g4_s93,
    _g4_s95 = (448u + sizeof(_g4_t_v160)) > _g4_s94 ? (448u + sizeof(_g4_t_v160)) : _g4_s94,
    _g4_s96 = (452u + sizeof(_g4_t_v161)) > _g4_s95 ? (452u + sizeof(_g4_t_v161)) : _g4_s95,
    _g4_s97 = (464u + sizeof(_g4_t_v162)) > _g4_s96 ? (464u + sizeof(_g4_t_v162)) : _g4_s96,
    _g4_s98 = (468u + sizeof(_g4_t_v163)) > _g4_s97 ? (468u + sizeof(_g4_t_v163)) : _g4_s97,
    _g4_s99 = (480u + sizeof(_g4_t_v164)) > _g4_s98 ? (480u + sizeof(_g4_t_v164)) : _g4_s98,
    _g4_s100 = (484u + sizeof(_g4_t_v165)) > _g4_s99 ? (484u + sizeof(_g4_t_v165)) : _g4_s99,
    _g4_s101 = (496u + sizeof(_g4_t_v166)) > _g4_s100 ? (496u + sizeof(_g4_t_v166)) : _g4_s100,
    _g4_s102 = (500u + sizeof(_g4_t_v167)) > _g4_s101 ? (500u + sizeof(_g4_t_v167)) : _g4_s101,
    _g4_s103 = (512u + sizeof(_g4_t_v168)) > _g4_s102 ? (512u + sizeof(_g4_t_v168)) : _g4_s102,
    _g4_s104 = (516u + sizeof(_g4_t_v169)) > _g4_s103 ? (516u + sizeof(_g4_t_v169)) : _g4_s103,
    _g4_s105 = (528u + sizeof(_g4_t_v170)) > _g4_s104 ? (528u + sizeof(_g4_t_v170)) : _g4_s104,
    _g4_s106 = (532u + sizeof(_g4_t_v171)) > _g4_s105 ? (532u + sizeof(_g4_t_v171)) : _g4_s105,
    _g4_s107 = (544u + sizeof(_g4_t_v172)) > _g4_s106 ? (544u + sizeof(_g4_t_v172)) : _g4_s106,
    _g4_s108 = (548u + sizeof(_g4_t_v173)) > _g4_s107 ? (548u + sizeof(_g4_t_v173)) : _g4_s107,
    _g4_s109 = (560u + sizeof(_g4_t_v174)) > _g4_s108 ? (560u + sizeof(_g4_t_v174)) : _g4_s108,
    _g4_s110 = (588u + sizeof(_g4_t_v175)) > _g4_s109 ? (588u + sizeof(_g4_t_v175)) : _g4_s109,
    _g4_s111 = (640u + sizeof(_g4_t_v176)) > _g4_s110 ? (640u + sizeof(_g4_t_v176)) : _g4_s110
  };
  alignas(16) uint8_t _g4_sf[_g4_s111];
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 8u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 8u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 8u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 8u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 8u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 8u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 8u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 8u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 8u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 8u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 8u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 8u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 8u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 8u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 8u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 8u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 8u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 8u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 8u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 16u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 16u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 16u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 16u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 16u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 20u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 24u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 32u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 40u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 44u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 44u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 48u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 52u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 56u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 64u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 72u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 72u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 72u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 72u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 76u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 76u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 76u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 76u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 76u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 76u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 76u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 76u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 76u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 76u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 76u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 76u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 81u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 84u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 104u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 108u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 128u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 140u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 144u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 148u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 160u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 164u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 176u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 180u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 192u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 196u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 208u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 212u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 224u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 228u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 240u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 244u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 256u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 260u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 272u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 276u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 288u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 292u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 304u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 308u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 320u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 324u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 336u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 340u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 352u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 356u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 368u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 372u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 384u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 388u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 400u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 404u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 416u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 420u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 432u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 436u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 448u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 452u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 464u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 468u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 480u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 484u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 496u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 500u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 512u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 516u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 528u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 532u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 544u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 548u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 560u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 588u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 640u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v122), "title", (int)(uintptr_t)(&v116));
  v123 = (char *)self + 4;
  g4_std::string::construct_copy(&v134, &v122);
  v135 = v123;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a3) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a3) != 0 )
  {
    if ( glwebtools::Json::Value::isMember(a3, (char **)&v134) )
    {
      v3 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, (const char **)&v134);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v175, v3);
      v100 = v135;
      v174[0] = (int)(uintptr_t)(&dword_213B814);
      v66 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v175, (int)(uintptr_t)(v174));
      IsOperationSuccess = glwebtools::IsOperationSuccess(v66);
      v5 = v66;
      if ( IsOperationSuccess )
      {
        g4_std::string::assign_str(v100, v174);
        v100[6] = 1;
        v5 = nullptr;
      }
      v101 = (void *)(v174[0] - 12);
      if ( (uint32_t *)(v174[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v174[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        v76 = v5;
        g4_std::string::Rep::M_destroy(v101);
        v5 = v76;
      }
      v67 = (int)(uintptr_t)(v5);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v175);
      v6 = v67;
    }
    else
    {
      v6 = -2147483646;
    }
  }
  else
  {
    v6 = -2147483645;
  }
  v104 = (void *)(v134 - 12);
  if ( (uint32_t *)(v134 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v134 - 4), 0xFFFFFFFF) <= 0 )
  {
    v75 = v6;
    g4_std::string::Rep::M_destroy(v104);
    v6 = v75;
  }
  v105 = (void *)(v122 - 12);
  if ( (uint32_t *)(v122 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v122 - 4), 0xFFFFFFFF) <= 0 )
  {
    v74 = v6;
    g4_std::string::Rep::M_destroy(v105);
    v6 = v74;
  }
  if ( v6 != 0 )
  {
LABEL_104:
    v23 = self;
    goto LABEL_105;
  }
  v7 = -2147483646;
  if ( *((uint8_t *)self + 10) == 0 || *(uint32_t *)(*((uint32_t *)self + 1) - 12) == 0 )
    return v7;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v124), "id", (int)(uintptr_t)(&v116) + 1);
  v125 = (char *)self + 12;
  g4_std::string::construct_copy(&v136, &v124);
  v137 = v125;
  v102 = -2147483645;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a3) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a3) != 0 )
  {
    v102 = -2147483646;
    if ( glwebtools::Json::Value::isMember(a3, (char **)&v136) )
    {
      v8 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, (const char **)&v136);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v175, v8);
      v99 = v137;
      v174[0] = (int)(uintptr_t)(&dword_213B814);
      v102 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v175, (int)(uintptr_t)(v174));
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v102) )
      {
        g4_std::string::assign_str(v99, v174);
        v102 = 0;
        v99[6] = 1;
      }
      v9 = (void *)(v174[0] - 12);
      if ( (uint32_t *)(v174[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v174[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v9);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v175);
    }
  }
  v10 = (void *)(v136 - 12);
  if ( (uint32_t *)(v136 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v136 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  v11 = (void *)(v124 - 12);
  if ( (uint32_t *)(v124 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v124 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  if ( v102 == 0 )
  {
    v7 = -2147483646;
    if ( *((uint8_t *)self + 18) == 0 || *(uint32_t *)(*((uint32_t *)self + 3) - 12) == 0 )
      return v7;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v126), "description", (int)(uintptr_t)(&v116) + 2);
    v127 = (char *)self + 20;
    g4_std::string::construct_copy(&v138, &v126);
    v139 = v127;
    v102 = -2147483645;
    if ( (uint8_t)glwebtools::JsonReader::IsValid(a3) != 0
      && (uint8_t)glwebtools::JsonReader::isObject(a3) != 0 )
    {
      v102 = -2147483646;
      if ( glwebtools::Json::Value::isMember(a3, (char **)&v138) )
      {
        v12 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, (const char **)&v138);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v175, v12);
        v98 = v139;
        v174[0] = (int)(uintptr_t)(&dword_213B814);
        v102 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v175, (int)(uintptr_t)(v174));
        if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v102) )
        {
          g4_std::string::assign_str(v98, v174);
          v102 = 0;
          v98[6] = 1;
        }
        v13 = (void *)(v174[0] - 12);
        if ( (uint32_t *)(v174[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v174[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v13);
        }
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v175);
      }
    }
    v14 = (void *)(v138 - 12);
    if ( (uint32_t *)(v138 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v138 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    v15 = (void *)(v126 - 12);
    if ( (uint32_t *)(v126 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v126 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    if ( v102 == 0 )
    {
      v7 = -2147483646;
      if ( *((uint8_t *)self + 26) == 0 || *(uint32_t *)(*((uint32_t *)self + 5) - 12) == 0 )
        return v7;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v128), "preview", (int)(uintptr_t)(&v117));
      v129 = (char *)self + 28;
      g4_std::string::construct_copy(&v140, &v128);
      v141 = v129;
      v102 = 0;
      if ( (uint8_t)glwebtools::JsonReader::IsValid(a3) != 0
        && (uint8_t)glwebtools::JsonReader::isObject(a3) != 0
        && glwebtools::Json::Value::isMember(a3, (char **)&v140) )
      {
        v39 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, (const char **)&v140);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v175, v39);
        v97 = v141;
        if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v175) != 0 )
        {
          v174[0] = (int)(uintptr_t)(&dword_213B814);
          v102 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v175, (int)(uintptr_t)(v174));
          if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v102) )
          {
            g4_std::string::assign_str(v97, v174);
            v102 = 0;
            v97[6] = 1;
          }
          v40 = (void *)(v174[0] - 12);
          if ( (uint32_t *)(v174[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v174[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v40);
          }
        }
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v175);
      }
      v16 = (void *)(v140 - 12);
      if ( (uint32_t *)(v140 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v140 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v16);
      }
      v17 = (void *)(v128 - 12);
      if ( (uint32_t *)(v128 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v128 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v17);
      }
      if ( v102 == 0 )
      {
        if ( *((uint8_t *)self + 34) != 0 )
        {
          v7 = -2147483646;
          if ( *(uint32_t *)(*((uint32_t *)self + 7) - 12) == 0 )
            return v7;
        }
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v130), "tracking_uid", (int)(uintptr_t)(&v117) + 1);
        v131 = (char *)self + 36;
        g4_std::string::construct_copy(&v142, &v130);
        v143 = v131;
        v102 = 0;
        if ( (uint8_t)glwebtools::JsonReader::IsValid(a3) != 0
          && (uint8_t)glwebtools::JsonReader::isObject(a3) != 0
          && glwebtools::Json::Value::isMember(a3, (char **)&v142) )
        {
          v37 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, (const char **)&v142);
          glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v175, v37);
          v96 = v143;
          if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v175) != 0 )
          {
            v174[0] = (int)(uintptr_t)(&dword_213B814);
            v102 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v175, (int)(uintptr_t)(v174));
            if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v102) )
            {
              g4_std::string::assign_str(v96, v174);
              v102 = 0;
              v96[6] = 1;
            }
            v38 = (void *)(v174[0] - 12);
            if ( (uint32_t *)(v174[0] - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v174[0] - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v38);
            }
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v175);
        }
        v18 = (void *)(v142 - 12);
        if ( (uint32_t *)(v142 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v142 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v18);
        }
        v19 = (void *)(v130 - 12);
        if ( (uint32_t *)(v130 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v130 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v19);
        }
        if ( v102 == 0 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v132), "offline_items_bonus", (int)(uintptr_t)(&v117) + 2);
          v133 = (char *)self + 44;
          g4_std::string::construct_copy(&v144, &v132);
          v145 = v133;
          v103 = nullptr;
          if ( (uint8_t)glwebtools::JsonReader::IsValid(a3) != 0
            && (uint8_t)glwebtools::JsonReader::isObject(a3) != 0
            && glwebtools::Json::Value::isMember(a3, (char **)&v144) )
          {
            v41 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, (const char **)&v144);
            glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v175, v41);
            v93 = v145;
            if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v175) != 0 )
            {
              v103 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v175, &v121);
              if ( glwebtools::IsOperationSuccess(v103) )
              {
                v103 = nullptr;
                *(uint32_t *)v93 = v121;
                v93[6] = 1;
              }
            }
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v175);
          }
          v20 = (void *)(v144 - 12);
          if ( (uint32_t *)(v144 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v144 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v20);
          }
          v21 = (void *)(v132 - 12);
          if ( (uint32_t *)(v132 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v132 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v21);
          }
          if ( v103 != nullptr )
          {
            iap::StoreItemLegacy::Clear(self);
            return (int)(uintptr_t)(v103);
          }
          if ( *((uint8_t *)self + 50) != 0 )
          {
            v7 = -2147483646;
            if ( *((int *)self + 11) <= 0 )
              return v7;
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v146), "amount", (int)(uintptr_t)(&v118));
          v147 = (char *)self + 52;
          g4_std::string::construct_copy(&v160, &v146);
          v161 = v147;
          IsValid = glwebtools::JsonReader::IsValid(a3);
          v6 = -2147483645;
          if ( IsValid != 0 )
          {
            isObject = glwebtools::JsonReader::isObject(a3);
            v6 = -2147483645;
            if ( isObject != 0 )
            {
              isMember = glwebtools::Json::Value::isMember(a3, (char **)&v160);
              v6 = -2147483646;
              if ( isMember )
              {
                v44 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, (const char **)&v160);
                glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v174, v44);
                v70 = v161;
                v113 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v174, &v121);
                if ( glwebtools::IsOperationSuccess(v113) )
                {
                  v113 = nullptr;
                  *(uint32_t *)v70 = v121;
                  v70[6] = 1;
                }
                glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v174);
                v6 = (int)(uintptr_t)(v113);
              }
            }
          }
          v106 = (void *)(v160 - 12);
          if ( (uint32_t *)(v160 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v160 - 4), 0xFFFFFFFF) <= 0 )
          {
            v78 = v6;
            g4_std::string::Rep::M_destroy(v106);
            v6 = v78;
          }
          v107 = (void *)(v146 - 12);
          if ( (uint32_t *)(v146 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v146 - 4), 0xFFFFFFFF) <= 0 )
          {
            v77 = v6;
            g4_std::string::Rep::M_destroy(v107);
            v6 = v77;
          }
          v23 = self;
          if ( v6 == 0 )
          {
            if ( *((uint8_t *)self + 58) != 0 && *((int *)self + 13) > 0 )
            {
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v148), "base_amount", (int)(uintptr_t)(&v118) + 1);
              v149 = (char *)self + 60;
              g4_std::string::construct_copy(&v164, &v148);
              v165 = v149;
              v24 = glwebtools::JsonReader::IsValid(a3);
              v6 = 0;
              if ( v24 != 0 )
              {
                v45 = glwebtools::JsonReader::isObject(a3);
                v6 = 0;
                if ( v45 != 0 )
                {
                  v46 = glwebtools::Json::Value::isMember(a3, (char **)&v164);
                  v6 = 0;
                  if ( v46 )
                  {
                    v47 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a3, (const char **)&v164);
                    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v174, v47);
                    v114 = v165;
                    v48 = glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v174);
                    v49 = nullptr;
                    if ( v48 != 0 )
                    {
                      v88 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v174, &v121);
                      v64 = glwebtools::IsOperationSuccess(v88);
                      v49 = nullptr;
                      if ( v64 )
                      {
                        *(uint32_t *)v114 = v121;
                        v114[6] = 1;
                      }
                      else
                      {
                        v49 = v88;
                      }
                    }
                    v71 = (int)(uintptr_t)(v49);
                    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v174);
                    v6 = v71;
                  }
                }
              }
              v108 = (void *)(v164 - 12);
              if ( (uint32_t *)(v164 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v164 - 4), 0xFFFFFFFF) <= 0 )
              {
                v81 = v6;
                g4_std::string::Rep::M_destroy(v108);
                v6 = v81;
              }
              v109 = (void *)(v148 - 12);
              if ( (uint32_t *)(v148 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v148 - 4), 0xFFFFFFFF) <= 0 )
              {
                v82 = v6;
                g4_std::string::Rep::M_destroy(v109);
                v6 = v82;
              }
              v23 = self;
              if ( v6 != 0 )
                goto LABEL_105;
              if ( *((uint8_t *)self + 66) == 0 || *((int *)self + 15) > 0 )
              {
                g4_std::string::construct_from_cstr((int)(uintptr_t)(&v150), "promo_amount", (int)(uintptr_t)(&v118) + 2);
                v151 = (char *)self + 68;
                g4_std::string::construct_copy(&v166, &v150);
                v167 = v151;
                v25 = glwebtools::JsonReader::IsValid(a3);
                v6 = 0;
                if ( v25 != 0 )
                {
                  v50 = glwebtools::JsonReader::isObject(a3);
                  v6 = 0;
                  if ( v50 != 0 )
                  {
                    v51 = glwebtools::Json::Value::isMember(a3, (char **)&v166);
                    v6 = 0;
                    if ( v51 )
                    {
                      v52 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                                               a3,
                                                               (const char **)&v166);
                      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v174, v52);
                      v115 = v167;
                      v53 = glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v174);
                      v54 = nullptr;
                      if ( v53 != 0 )
                      {
                        v89 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v174, &v121);
                        v65 = glwebtools::IsOperationSuccess(v89);
                        v54 = nullptr;
                        if ( v65 )
                        {
                          *(uint32_t *)v115 = v121;
                          v115[6] = 1;
                        }
                        else
                        {
                          v54 = v89;
                        }
                      }
                      v72 = (int)(uintptr_t)(v54);
                      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v174);
                      v6 = v72;
                    }
                  }
                }
                v110 = (void *)(v166 - 12);
                if ( (uint32_t *)(v166 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v166 - 4), 0xFFFFFFFF) <= 0 )
                {
                  v84 = v6;
                  g4_std::string::Rep::M_destroy(v110);
                  v6 = v84;
                }
                v111 = (void *)(v150 - 12);
                if ( (uint32_t *)(v150 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v150 - 4), 0xFFFFFFFF) <= 0 )
                {
                  v83 = v6;
                  g4_std::string::Rep::M_destroy(v111);
                  v6 = v83;
                }
                if ( v6 == 0 )
                {
                  if ( *((uint8_t *)self + 74) != 0 )
                  {
                    v7 = -2147483646;
                    if ( *((int *)self + 17) <= 0 )
                      return v7;
                  }
                  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v152), "type", (int)(uintptr_t)(&v118) + 3);
                  v153 = (char *)self + 76;
                  g4_std::string::construct_copy(&v168, &v152);
                  v169 = v153;
                  v112 = -2147483645;
                  if ( (uint8_t)glwebtools::JsonReader::IsValid(a3) != 0
                    && (uint8_t)glwebtools::JsonReader::isObject(a3) != 0 )
                  {
                    v112 = -2147483646;
                    if ( glwebtools::Json::Value::isMember(a3, (char **)&v168) )
                    {
                      v26 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                                               a3,
                                                               (const char **)&v168);
                      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v174, v26);
                      v92 = v169;
                      v120[0] = (int)(uintptr_t)(&dword_213B814);
                      v112 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v174, (int)(uintptr_t)(v120));
                      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v112) )
                      {
                        g4_std::string::assign_str(v92, v120);
                        v112 = 0;
                        v92[6] = 1;
                      }
                      v27 = (void *)(v120[0] - 12);
                      if ( (uint32_t *)(v120[0] - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v120[0] - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy(v27);
                      }
                      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v174);
                    }
                  }
                  v28 = (void *)(v168 - 12);
                  if ( (uint32_t *)(v168 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v168 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy(v28);
                  }
                  v29 = (void *)(v152 - 12);
                  if ( (uint32_t *)(v152 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v152 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy(v29);
                  }
                  if ( v112 == 0 )
                  {
                    v7 = -2147483646;
                    if ( *((uint8_t *)self + 82) == 0 || *(uint32_t *)(*((uint32_t *)self + 19) - 12) == 0 )
                      return v7;
                    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v154), "virtual_cash_type", (int)(uintptr_t)(&v119));
                    v155 = (char *)self + 84;
                    g4_std::string::construct_copy(&v170, &v154);
                    v171 = v155;
                    if ( (uint8_t)glwebtools::JsonReader::IsValid(a3) != 0
                      && (uint8_t)glwebtools::JsonReader::isObject(a3) != 0
                      && glwebtools::Json::Value::isMember(a3, (char **)&v170) )
                    {
                      v55 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                                               a3,
                                                               (const char **)&v170);
                      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v174, v55);
                      v91 = v171;
                      if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v174) != 0 )
                      {
                        v120[0] = (int)(uintptr_t)(&dword_213B814);
                        v85 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v174, (int)(uintptr_t)(v120));
                        if ( glwebtools::IsOperationSuccess(v85) )
                        {
                          g4_std::string::assign_str(v91, v120);
                          v91[6] = 1;
                        }
                        else
                        {
                          v112 = (int)(uintptr_t)(v85);
                        }
                        v56 = (void *)(v120[0] - 12);
                        if ( (uint32_t *)(v120[0] - 12) != dword_213B808
                          && __sync_fetch_and_add((volatile int32_t *)(v120[0] - 4), 0xFFFFFFFF) <= 0 )
                        {
                          g4_std::string::Rep::M_destroy(v56);
                        }
                      }
                      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v174);
                    }
                    v30 = (void *)(v170 - 12);
                    if ( (uint32_t *)(v170 - 12) != dword_213B808
                      && __sync_fetch_and_add((volatile int32_t *)(v170 - 4), 0xFFFFFFFF) <= 0 )
                    {
                      g4_std::string::Rep::M_destroy(v30);
                    }
                    v31 = (void *)(v154 - 12);
                    if ( (uint32_t *)(v154 - 12) != dword_213B808
                      && __sync_fetch_and_add((volatile int32_t *)(v154 - 4), 0xFFFFFFFF) <= 0 )
                    {
                      g4_std::string::Rep::M_destroy(v31);
                    }
                    if ( v112 == 0 )
                    {
                      if ( *((uint8_t *)self + 90) != 0 )
                      {
                        v7 = -2147483646;
                        if ( *(uint32_t *)(*((uint32_t *)self + 21) - 12) == 0 )
                          return v7;
                      }
                      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v156), "locale", (int)(uintptr_t)(&v119) + 1);
                      v157 = (char *)self + 92;
                      g4_std::string::construct_copy(&v172, &v156);
                      v173 = v157;
                      if ( (uint8_t)glwebtools::JsonReader::IsValid(a3) != 0
                        && (uint8_t)glwebtools::JsonReader::isObject(a3) != 0
                        && glwebtools::Json::Value::isMember(a3, (char **)&v172) )
                      {
                        v57 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                                                 a3,
                                                                 (const char **)&v172);
                        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v174, v57);
                        v90 = v173;
                        if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v174) != 0 )
                        {
                          v120[0] = (int)(uintptr_t)(&dword_213B814);
                          v86 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v174, (int)(uintptr_t)(v120));
                          if ( glwebtools::IsOperationSuccess(v86) )
                          {
                            g4_std::string::assign_str(v90, v120);
                            v90[6] = 1;
                          }
                          else
                          {
                            v112 = (int)(uintptr_t)(v86);
                          }
                          v58 = (void *)(v120[0] - 12);
                          if ( (uint32_t *)(v120[0] - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v120[0] - 4), 0xFFFFFFFF) <= 0 )
                          {
                            g4_std::string::Rep::M_destroy(v58);
                          }
                        }
                        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v174);
                      }
                      v32 = (void *)(v172 - 12);
                      if ( (uint32_t *)(v172 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v172 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy(v32);
                      }
                      v33 = (void *)(v156 - 12);
                      if ( (uint32_t *)(v156 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v156 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy(v33);
                      }
                      if ( v112 == 0 )
                      {
                        if ( *((uint8_t *)self + 98) == 0
                          || (v7 = -2147483646, *(uint32_t *)(*((uint32_t *)self + 23) - 12) != 0) )
                        {
                          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v158), "billing_methods", (int)(uintptr_t)(&v119) + 2);
                          v159 = (char *)self + 100;
                          g4_std::string::construct_copy(&v162, &v158);
                          v163 = v159;
                          v34 = glwebtools::JsonReader::IsValid(a3);
                          v7 = -2147483645;
                          if ( v34 != 0 )
                          {
                            v59 = glwebtools::JsonReader::isObject(a3);
                            v7 = -2147483645;
                            if ( v59 != 0 )
                            {
                              v60 = glwebtools::Json::Value::isMember(a3, (char **)&v162);
                              v7 = -2147483646;
                              if ( v60 )
                              {
                                v61 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                                                         a3,
                                                                         (const char **)&v162);
                                glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v174, v61);
                                v87 = (int (***)(uint32_t, int *))v163;
                                v62 = glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v174);
                                v63 = -2147483645;
                                if ( v62 != 0 )
                                  v63 = (**v87)((uint32_t)(uintptr_t)(v87), v174);
                                v73 = v63;
                                glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v174);
                                v7 = v73;
                              }
                            }
                          }
                          v94 = (void *)(v162 - 12);
                          if ( (uint32_t *)(v162 - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v162 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            v80 = v7;
                            g4_std::string::Rep::M_destroy(v94);
                            v7 = v80;
                          }
                          v95 = (void *)(v158 - 12);
                          if ( (uint32_t *)(v158 - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v158 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            v79 = v7;
                            g4_std::string::Rep::M_destroy(v95);
                            v7 = v79;
                          }
                          if ( v7 != 0 )
                            goto LABEL_101;
                          v35 = iap::BillingMethodArray::Size((iap::StoreItemLegacy::Self *)((char *)self + 100));
                          v7 = -2147483646;
                          if ( v35 != 0 )
                          {
                            v175[0] = "title";
                            v175[1] = "id";
                            v175[2] = "description";
                            v175[3] = "preview";
                            v175[4] = "amount";
                            v175[5] = "base_amount";
                            v175[6] = "promo_amount";
                            v175[7] = "type";
                            v175[8] = "virtual_cash_type";
                            v175[9] = "locale";
                            v175[10] = "billing_methods";
                            v175[11] = "tracking_uid";
                            v175[12] = "offline_items_bonus";
                            v7 = glwebtools::JsonReader::exclude(
                                   a1,
                                   a3,
                                   v175,
                                   (const char **)&v176,
                                   (iap::StoreItemLegacy::Self *)((char *)self + 116));
                            if ( v7 != 0 )
                            {
LABEL_101:
                              v68 = v7;
                              iap::StoreItemLegacy::Clear(self);
                              return v68;
                            }
                          }
                        }
                        return v7;
                      }
                    }
                  }
                  iap::StoreItemLegacy::Clear(self);
                  return v112;
                }
                goto LABEL_104;
              }
            }
            return -2147483646;
          }
LABEL_105:
          v69 = v6;
          iap::StoreItemLegacy::Clear(v23);
          return v69;
        }
      }
    }
  }
  iap::StoreItemLegacy::Clear(self);
  return v102;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::opEq  (binary VA: 0x150da30)
// Original: iap::StoreItemLegacy::operator==
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::opEq(iap::StoreItemLegacy::Self *self, char *a2)
{
  int v2;
  int v3;
  const void *s1;
  int v6;
  uint16_t s2[3];

  v2 = 0;
  if ( a2 != nullptr )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&s2[1]), a2, (int)(uintptr_t)(s2));
    v3 = *(uint32_t *)&s2[1];
    s1 = *((const void **)self + 3);
    if ( *((uint32_t *)s1 - 3) == *(uint32_t *)(*(uint32_t *)&s2[1] - 12) )
    {
      v6 = memcmp(s1, *(const void **)&s2[1], *((uint32_t *)s1 - 3));
      LOBYTE(v6) = v6 == 0;
      v2 = v6;
    }
    if ( (uint32_t *)(v3 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy((void *)(v3 - 12));
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::Print  (binary VA: 0x150dae0)
// Original: iap::StoreItemLegacy::Print
// ----------------------------------------------------------------------------
unsigned int iap::StoreItemLegacy::Print(iap::StoreItemLegacy::Self *self)
{
  int i;
  unsigned int j;
  iap::BillingMethod::Self *v3;
  unsigned int result;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  glwebtools::CustomAttributeList::begin((glwebtools::CustomAttributeList::Self *)v6, (int)(uintptr_t)(self) + 116);
  for ( i = v6[0]; ; i = sub_19048E0(v5) )
  {
    v5 = i;
    glwebtools::CustomAttributeList::end((glwebtools::CustomAttributeList::Self *)v6, (int)(uintptr_t)(self) + 116);
    if ( v5 == v6[0] )
      break;
  }
  for ( j = 0; ; ++j )
  {
    result = iap::BillingMethodArray::Size((iap::StoreItemLegacy::Self *)((char *)self + 100));
    if ( j >= result )
      break;
    v3 = (iap::BillingMethod::Self *)iap::BillingMethodArray::opIndex((iap::StoreItemLegacy::Self *)((char *)self + 100), j);
    iap::BillingMethod::Print(v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::ToJsonString  (binary VA: 0x150db80)
// Original: iap::StoreItemLegacy::ToJsonString
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::ToJsonString(int a1, int a2)
{
  void *v2;
  typedef int _g4_t_v4;
  typedef uint8_t _g4_t_v5[20];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v5);
  G4_VCALL<void>(a1, 4, v5);
  glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)&v4, (glwebtools::JsonWriter::Self *)v5);
  g4_std::string::assign_str(a2, &v4);
  v2 = (void *)(v4 - 12);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v5);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::GetName  (binary VA: 0x150dc30)
// Original: iap::StoreItemLegacy::GetName
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::GetName(iap::StoreItemLegacy::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 10) != 0 )
  {
    result = *((uint32_t *)self + 1);
    if ( *(uint32_t *)(result - 12) == 0 )
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::GetUid  (binary VA: 0x150dc50)
// Original: iap::StoreItemLegacy::GetUid
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::GetUid(iap::StoreItemLegacy::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 18) != 0 )
  {
    result = *((uint32_t *)self + 3);
    if ( *(uint32_t *)(result - 12) == 0 )
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::GetDescription  (binary VA: 0x150dc70)
// Original: iap::StoreItemLegacy::GetDescription
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::GetDescription(iap::StoreItemLegacy::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 26) != 0 )
  {
    result = *((uint32_t *)self + 5);
    if ( *(uint32_t *)(result - 12) == 0 )
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::GetPreviewPath  (binary VA: 0x150dc90)
// Original: iap::StoreItemLegacy::GetPreviewPath
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::GetPreviewPath(iap::StoreItemLegacy::Self *self)
{
  int result;

  result = *((uint32_t *)self + 7);
  if ( *((uint8_t *)self + 34) != 0 && *(uint32_t *)(result - 12) == 0 )
    return 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::GetTrackingUID  (binary VA: 0x150dcb0)
// Original: iap::StoreItemLegacy::GetTrackingUID
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::GetTrackingUID(iap::StoreItemLegacy::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 42) != 0 )
  {
    result = *((uint32_t *)self + 9);
    if ( *(uint32_t *)(result - 12) == 0 )
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::GetOfflineItemsBonus  (binary VA: 0x150dcd0)
// Original: iap::StoreItemLegacy::GetOfflineItemsBonus
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::GetOfflineItemsBonus(iap::StoreItemLegacy::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 50) != 0 && *((int *)self + 11) > 0 )
    return *((uint32_t *)self + 11);
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::GetPrice  (binary VA: 0x150dcf0)
// Original: iap::StoreItemLegacy::GetPrice
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::GetPrice(iap::StoreItemLegacy::Self *self)
{
  iap::BillingMethod::Self *v1;

  v1 = (iap::BillingMethod::Self *)iap::BillingMethodArray::opIndex((iap::StoreItemLegacy::Self *)((char *)self + 100), 0);
  return iap::BillingMethod::GetDisplayPrice(v1);
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::GetRegularPrice  (binary VA: 0x150dd30)
// Original: iap::StoreItemLegacy::GetRegularPrice
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::GetRegularPrice(iap::StoreItemLegacy::Self *self)
{
  iap::BillingMethod::Self *v1;

  v1 = (iap::BillingMethod::Self *)iap::BillingMethodArray::opIndex((iap::StoreItemLegacy::Self *)((char *)self + 100), 0);
  return iap::BillingMethod::GetReplacedDisplayPrice(v1);
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::HasPricePromotion  (binary VA: 0x150dd70)
// Original: iap::StoreItemLegacy::HasPricePromotion
// ----------------------------------------------------------------------------
bool iap::StoreItemLegacy::HasPricePromotion(iap::StoreItemLegacy::Self *self)
{
  iap::BillingMethod::Self *v1;

  v1 = (iap::BillingMethod::Self *)iap::BillingMethodArray::opIndex((iap::StoreItemLegacy::Self *)((char *)self + 100), 0);
  return iap::BillingMethod::HasPricePromotion(v1);
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::GetReductionPercent  (binary VA: 0x150ddb0)
// Original: iap::StoreItemLegacy::GetReductionPercent
// ----------------------------------------------------------------------------
void iap::StoreItemLegacy::GetReductionPercent(iap::StoreItemLegacy::Self *self)
{
  iap::BillingMethod::Self *v1;

  v1 = (iap::BillingMethod::Self *)iap::BillingMethodArray::opIndex((iap::StoreItemLegacy::Self *)((char *)self + 100), 0);
  iap::BillingMethod::GetReductionPercent(v1);
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::GetAmount  (binary VA: 0x150ddf0)
// Original: iap::StoreItemLegacy::GetAmount
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::GetAmount(iap::StoreItemLegacy::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 58) != 0 && *((int *)self + 13) > 0 )
    return *((uint32_t *)self + 13);
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::HasAmountPromotion  (binary VA: 0x150de10)
// Original: iap::StoreItemLegacy::HasAmountPromotion
// ----------------------------------------------------------------------------
bool iap::StoreItemLegacy::HasAmountPromotion(iap::StoreItemLegacy::Self *self)
{
  bool result;
  int v2;

  result = false;
  if ( *((uint8_t *)self + 74) != 0 )
  {
    v2 = *((uint32_t *)self + 17);
    if ( v2 > 0 )
      return *((uint32_t *)self + 13) < v2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::GetBonusAmountPercent  (binary VA: 0x150de30)
// Original: iap::StoreItemLegacy::GetBonusAmountPercent
// ----------------------------------------------------------------------------
long double iap::StoreItemLegacy::GetBonusAmountPercent(iap::StoreItemLegacy::Self *self)
{
  double v1; // xmm0_8

  v1 = 0.0;
  if ( iap::StoreItemLegacy::HasAmountPromotion(self) )
    return (double)(*((uint32_t *)self + 17) - *((uint32_t *)self + 13)) * 100.0 / (double)*((int *)self + 13);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::GetBonusAmount  (binary VA: 0x150de90)
// Original: iap::StoreItemLegacy::GetBonusAmount
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::GetBonusAmount(iap::StoreItemLegacy::Self *self)
{
  bool HasAmountPromotion;
  int v2;

  HasAmountPromotion = iap::StoreItemLegacy::HasAmountPromotion(self);
  v2 = 0;
  if ( HasAmountPromotion )
    return *((uint32_t *)self + 17) - *((uint32_t *)self + 13);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::GetType  (binary VA: 0x150ded0)
// Original: iap::StoreItemLegacy::GetType
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::GetType(iap::StoreItemLegacy::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 82) != 0 )
  {
    result = *((uint32_t *)self + 19);
    if ( *(uint32_t *)(result - 12) == 0 )
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::GetSubType  (binary VA: 0x150def0)
// Original: iap::StoreItemLegacy::GetSubType
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::GetSubType(iap::StoreItemLegacy::Self *self)
{
  int result;

  result = *((uint32_t *)self + 21);
  if ( *((uint8_t *)self + 90) != 0 && *(uint32_t *)(result - 12) == 0 )
    return 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::GetLocale  (binary VA: 0x150df10)
// Original: iap::StoreItemLegacy::GetLocale
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::GetLocale(iap::StoreItemLegacy::Self *self)
{
  int result;

  result = *((uint32_t *)self + 23);
  if ( *((uint8_t *)self + 98) != 0 && *(uint32_t *)(result - 12) == 0 )
    return 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::GetBillingMethodCount  (binary VA: 0x150df30)
// Original: iap::StoreItemLegacy::GetBillingMethodCount
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::GetBillingMethodCount(iap::StoreItemLegacy::Self *self)
{
  return iap::BillingMethodArray::Size((iap::StoreItemLegacy::Self *)((char *)self + 100));
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::GetBillingMethod  (binary VA: 0x150df60)
// Original: iap::StoreItemLegacy::GetBillingMethod
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::GetBillingMethod(iap::StoreItemLegacy::Self *self, unsigned int a2)
{
  return iap::BillingMethodArray::GetBillingMethod((iap::StoreItemLegacy::Self *)((char *)self + 100), a2);
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::GetBillingMethod  (binary VA: 0x150df90)
// Original: iap::StoreItemLegacy::GetBillingMethod
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::GetBillingMethod(iap::StoreItemLegacy::Self *self, char *a2, char *a3)
{
  return iap::BillingMethodArray::GetBillingMethod((iap::StoreItemLegacy::Self *)((char *)self + 100), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::opLt  (binary VA: 0x150dfd0)
// Original: iap::StoreItemLegacy::operator<
// ----------------------------------------------------------------------------
char iap::StoreItemLegacy::opLt(iap::StoreItemLegacy::Self *self, const iap::StoreItemLegacy::Self *a2)
{
  const char *s2;
  const char *s1;
  unsigned int v4;
  int v5;
  const char *SubType;
  int v7;
  const char *v8;
  int v9;

  s2 = (const char *)iap::StoreItemLegacy::GetType((iap::StoreItemLegacy::Self *)(a2));
  s1 = (const char *)iap::StoreItemLegacy::GetType(self);
  v4 = strcmp(s1, s2);
  if ( v4 != 0 )
    return v4 >> 31;
  SubType = (const char *)&unk_1B15112;
  if ( iap::StoreItemLegacy::GetSubType(self) != 0 )
    SubType = (const char *)iap::StoreItemLegacy::GetSubType(self);
  v7 = iap::StoreItemLegacy::GetSubType((iap::StoreItemLegacy::Self *)(a2));
  v8 = (const char *)&unk_1B15112;
  if ( v7 != 0 )
    v8 = (const char *)iap::StoreItemLegacy::GetSubType((iap::StoreItemLegacy::Self *)(a2));
  v4 = strcmp(SubType, v8);
  if ( v4 != 0 )
  {
    return v4 >> 31;
  }
  else
  {
    if ( iap::StoreItemLegacy::HasAmountPromotion(self) )
      v9 = *((uint32_t *)self + 17);
    else
      v9 = *((uint32_t *)self + 13);
    if ( iap::StoreItemLegacy::HasAmountPromotion((iap::StoreItemLegacy::Self *)(a2)) )
      v5 = *((uint32_t *)a2 + 17);
    else
      v5 = *((uint32_t *)a2 + 13);
    LOBYTE(v5) = v9 < v5;
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::GetExtendedField  (binary VA: 0x150e0f0)
// Original: iap::StoreItemLegacy::GetExtendedField
// ----------------------------------------------------------------------------
iap::StoreItemLegacy::Self * iap::StoreItemLegacy::GetExtendedField(iap::StoreItemLegacy::Self *self, const char *a2, char *a3)
{
  char *v3;
  void *v4;
  uint16_t v6[3];

  if ( a3 != nullptr )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6[1]), a3, (int)(uintptr_t)(v6));
    v3 = glwebtools::CustomAttributeList::opIndex((glwebtools::CustomAttribute::Self *)(a2 + 116), (int)(uintptr_t)(&v6[1]));
    glwebtools::CustomArgument::Construct(self, (const glwebtools::CustomArgument::Self *)v3);
    v4 = (void *)(*(uint32_t *)&v6[1] - 12);
    if ( (uint32_t *)(*(uint32_t *)&v6[1] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v6[1] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
  }
  else
  {
    glwebtools::CustomArgument::Construct(self);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::setIconSavePath  (binary VA: 0x150e1a0)
// Original: iap::StoreItemLegacy::setIconSavePath
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::setIconSavePath(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 140, a2));
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::getIconSavePath  (binary VA: 0x150e1d0)
// Original: iap::StoreItemLegacy::getIconSavePath
// ----------------------------------------------------------------------------
int iap::StoreItemLegacy::getIconSavePath(iap::StoreItemLegacy::Self *self)
{
  return *((uint32_t *)self + 35);
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::Destroy  (binary VA: 0x150e450)
// Original: iap::StoreItemLegacy::~StoreItemLegacy
// ----------------------------------------------------------------------------
void iap::StoreItemLegacy::Destroy(iap::StoreItemLegacy::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096148);
  v1 = *((uint32_t *)self + 35);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_erase(
    (int)(uintptr_t)(self) + 116,
    *((uint32_t **)self + 31));
  iap::BillingMethodArray::Destroy((iap::StoreItemLegacy::Self *)((char *)self + 100));
  v2 = *((uint32_t *)self + 23);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = *((uint32_t *)self + 21);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  v4 = *((uint32_t *)self + 19);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
  v5 = *((uint32_t *)self + 9);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
  }
  v6 = *((uint32_t *)self + 7);
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
  }
  v7 = *((uint32_t *)self + 5);
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
  }
  v8 = *((uint32_t *)self + 3);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v8 - 12));
  }
  v9 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v9 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::Destroy_ea150e650  (binary VA: 0x150e650)
// Original: iap::StoreItemLegacy::~StoreItemLegacy
// ----------------------------------------------------------------------------
void iap::StoreItemLegacy::Destroy_ea150e650(iap::StoreItemLegacy::Self *self)
{
  iap::StoreItemLegacy::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::Construct  (binary VA: 0x150ed20)
// Original: iap::StoreItemLegacy::StoreItemLegacy
// ----------------------------------------------------------------------------
iap::StoreItemLegacy::Self * iap::StoreItemLegacy::Construct(iap::StoreItemLegacy::Self *self, const iap::StoreItemLegacy::Self *a2)
{
  char v2;
  char v3;
  char v4;
  char v5;
  char v6;
  char v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *i;
  uint32_t *v16;
  uint32_t *v17;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096148);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::assign_str((char *)self + 4, (char *)a2 + 4);
  v2 = *((uint8_t *)a2 + 10);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 10) = v2;
  g4_std::string::assign_str((char *)self + 12, (char *)a2 + 12);
  v3 = *((uint8_t *)a2 + 18);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 18) = v3;
  g4_std::string::assign_str((char *)self + 20, (char *)a2 + 20);
  v4 = *((uint8_t *)a2 + 26);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 26) = v4;
  g4_std::string::assign_str((char *)self + 28, (char *)a2 + 28);
  v5 = *((uint8_t *)a2 + 34);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 34) = v5;
  g4_std::string::assign_str((char *)self + 36, (char *)a2 + 36);
  *((uint8_t *)self + 42) = *((uint8_t *)a2 + 42);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 11);
  *((uint8_t *)self + 50) = *((uint8_t *)a2 + 50);
  *((uint32_t *)self + 13) = *((uint32_t *)a2 + 13);
  *((uint8_t *)self + 58) = *((uint8_t *)a2 + 58);
  *((uint32_t *)self + 15) = *((uint32_t *)a2 + 15);
  *((uint8_t *)self + 66) = *((uint8_t *)a2 + 66);
  *((uint32_t *)self + 17) = *((uint32_t *)a2 + 17);
  v6 = *((uint8_t *)a2 + 74);
  *((uint32_t *)self + 19) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 74) = v6;
  g4_std::string::assign_str((char *)self + 76, (char *)a2 + 76);
  v7 = *((uint8_t *)a2 + 82);
  *((uint32_t *)self + 21) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 82) = v7;
  g4_std::string::assign_str((char *)self + 84, (char *)a2 + 84);
  v8 = *((uint8_t *)a2 + 90);
  *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 90) = v8;
  g4_std::string::assign_str((char *)self + 92, (char *)a2 + 92);
  v22 = 0;
  *((uint8_t *)self + 98) = *((uint8_t *)a2 + 98);
  *((uint32_t *)self + 25) = (uint32_t)(uintptr_t)(&off_2096068);
  v9 = 0;
  v10 = (*((uint32_t *)a2 + 27) - *((uint32_t *)a2 + 26)) >> 2;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  if ( 1749801491 * v10 != 0 )
  {
    v9 = 4 * v10;
    v22 = sub_4EBE70(4 * v10, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  }
  *((uint32_t *)self + 27) = v22;
  *((uint32_t *)self + 28) = v22 + v9;
  *((uint32_t *)self + 26) = v22;
  v11 = v22;
  v23 = *((uint32_t *)a2 + 27);
  if ( v23 != *((uint32_t *)a2 + 26) )
  {
    v19 = *((uint32_t *)a2 + 26);
    do
    {
      if ( v11 != 0 )
      {
        v20 = v11 - v22;
        *(uint32_t *)v11 = ((uint32_t)(uintptr_t)&off_2096048);
        *(uint32_t *)(v11 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v11 + 4, v19 + 4);
        *(uint8_t *)(v20 + v22 + 4 + 6) = *(uint8_t *)(v19 + 10);
        *(uint32_t *)(v11 + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v11 + 12, v19 + 12);
        *(uint8_t *)(v20 + v22 + 12 + 6) = *(uint8_t *)(v19 + 18);
        *(uint32_t *)(v11 + 20) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v11 + 20, v19 + 20);
        *(uint8_t *)(v20 + v22 + 20 + 6) = *(uint8_t *)(v19 + 26);
        *(uint32_t *)(v11 + 28) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v11 + 28, v19 + 28);
        *(uint8_t *)(v20 + v22 + 28 + 6) = *(uint8_t *)(v19 + 34);
        *(uint64_t *)(v11 + 36) = *(uint64_t *)(v19 + 36);
        *(uint8_t *)(v22 + v20 + 46) = *(uint8_t *)(v19 + 46);
        *(uint32_t *)(v11 + 48) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v11 + 48, v19 + 48);
        *(uint8_t *)(v20 + v22 + 48 + 6) = *(uint8_t *)(v19 + 54);
        *(uint64_t *)(v11 + 56) = *(uint64_t *)(v19 + 56);
        *(uint8_t *)(v22 + v20 + 66) = *(uint8_t *)(v19 + 66);
        *(uint32_t *)(v11 + 68) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v11 + 68, v19 + 68);
        *(uint8_t *)(v20 + v22 + 68 + 6) = *(uint8_t *)(v19 + 74);
        g4_std::string::construct_copy(v11 + 76, v19 + 76);
        g4_std::string::construct_copy(v11 + 80, v19 + 80);
        v21 = v22 + 84;
        v12 = v22 + 84;
        *(uint32_t *)(v20 + v21 + 4) = 0;
        *(uint32_t *)(v20 + v21 + 8) = 0;
        *(uint32_t *)(v20 + v21 + 20) = 0;
        *(uint32_t *)(v20 + v12 + 12) = v11 + 88;
        *(uint32_t *)(v20 + v12 + 16) = v11 + 88;
        v13 = *(uint32_t **)(v19 + 92);
        if ( v13 != nullptr )
        {
          v14 = g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
                  v11 + 84,
                  v13,
                  v11 + 88);
          *(uint32_t *)(v11 + 92) = (uint32_t)(uintptr_t)(v14);
          for ( i = v14; i[2] != 0; i = (uint32_t *)i[2] )
            ;
          *(uint32_t *)(v11 + 96) = (uint32_t)(uintptr_t)(i);
          while ( v14[3] != 0 )
            v14 = (uint32_t *)v14[3];
          *(uint32_t *)(v11 + 100) = (uint32_t)(uintptr_t)(v14);
          *(uint32_t *)(v20 + v21 + 20) = *(uint32_t *)(v19 + 104);
        }
      }
      v19 += 108;
      v11 += 108;
    }
    while ( v23 != v19 );
  }
  *((uint32_t *)self + 27) = v11;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 32) = (uint32_t)(uintptr_t)((char *)self + 120);
  *((uint32_t *)self + 33) = (uint32_t)(uintptr_t)((char *)self + 120);
  if ( *((uint32_t *)a2 + 31) != 0 )
  {
    v16 = g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
            (int)(uintptr_t)(self) + 116,
            *((uint32_t **)a2 + 31),
            (int)(uintptr_t)(self) + 120);
    v17 = v16;
    *((uint32_t *)self + 31) = (uint32_t)(uintptr_t)(v16);
    while ( v17[2] != 0 )
      v17 = (uint32_t *)v17[2];
    *((uint32_t *)self + 32) = (uint32_t)(uintptr_t)(v17);
    while ( v16[3] != 0 )
      v16 = (uint32_t *)v16[3];
    *((uint32_t *)self + 33) = (uint32_t)(uintptr_t)(v16);
    *((uint32_t *)self + 34) = *((uint32_t *)a2 + 34);
  }
  return (iap::StoreItemLegacy::Self *)g4_std::string::construct_copy((char *)self + 140, (char *)a2 + 140);
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacy::opAssign  (binary VA: 0x150f2c0)
// Original: iap::StoreItemLegacy::operator=
// ----------------------------------------------------------------------------
iap::StoreItemLegacy::Self * iap::StoreItemLegacy::opAssign(iap::StoreItemLegacy::Self *self, const iap::StoreItemLegacy::Self *a2)
{
  int v2;
  int v3;
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *i;
  int *v8;
  int *v9;
  int v10;
  int v11;
  iap::StoreItemLegacy::Self *v12;
  uint32_t *v13;
  uint32_t *v14;
  int v16;
  int v17;
  int v18;
  uint32_t *v19;
  uint32_t *m;
  char *v21;
  int v22;
  unsigned int v23;
  int v24;
  int v25;
  uint32_t *v26;
  uint32_t *j;
  char *v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *k;
  size_t v32;
  size_t v33;
  int v34;
  int v35;
  int v36;
  unsigned int v37;
  char *v38;
  int v39;
  int v40;
  int v41;
  int v42;
  uint32_t *v43;
  int v44;
  char *v45;
  size_t v46;
  size_t v47;
  size_t v48;
  int v49;
  int v50;

  g4_std::string::assign_str((char *)self + 4, (char *)a2 + 4);
  *((uint8_t *)self + 10) = *((uint8_t *)a2 + 10);
  g4_std::string::assign_str((char *)self + 12, (char *)a2 + 12);
  *((uint8_t *)self + 18) = *((uint8_t *)a2 + 18);
  g4_std::string::assign_str((char *)self + 20, (char *)a2 + 20);
  *((uint8_t *)self + 26) = *((uint8_t *)a2 + 26);
  g4_std::string::assign_str((char *)self + 28, (char *)a2 + 28);
  *((uint8_t *)self + 34) = *((uint8_t *)a2 + 34);
  g4_std::string::assign_str((char *)self + 36, (char *)a2 + 36);
  *((uint8_t *)self + 42) = *((uint8_t *)a2 + 42);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 11);
  *((uint8_t *)self + 50) = *((uint8_t *)a2 + 50);
  *((uint32_t *)self + 13) = *((uint32_t *)a2 + 13);
  *((uint8_t *)self + 58) = *((uint8_t *)a2 + 58);
  *((uint32_t *)self + 15) = *((uint32_t *)a2 + 15);
  *((uint8_t *)self + 66) = *((uint8_t *)a2 + 66);
  *((uint32_t *)self + 17) = *((uint32_t *)a2 + 17);
  *((uint8_t *)self + 74) = *((uint8_t *)a2 + 74);
  g4_std::string::assign_str((char *)self + 76, (char *)a2 + 76);
  *((uint8_t *)self + 82) = *((uint8_t *)a2 + 82);
  g4_std::string::assign_str((char *)self + 84, (char *)a2 + 84);
  *((uint8_t *)self + 90) = *((uint8_t *)a2 + 90);
  g4_std::string::assign_str((char *)self + 92, (char *)a2 + 92);
  *((uint8_t *)self + 98) = *((uint8_t *)a2 + 98);
  if ( a2 != self )
  {
    v41 = *((uint32_t *)a2 + 26);
    v49 = *((uint32_t *)a2 + 27);
    v2 = (v49 - v41) >> 2;
    v38 = *((char **)self + 26);
    v50 = 1749801491 * v2;
    v46 = 1749801491 * v2;
    if ( 1749801491 * v2 > (unsigned int)(1749801491 * ((*((uint32_t *)self + 28) - (int)(uintptr_t)(v38)) >> 2)) )
    {
      v47 = 0;
      v44 = 0;
      if ( v50 != 0 )
      {
        v47 = 4 * v2;
        v44 = sub_4EBE70(4 * v2, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
      }
      if ( v41 != v49 )
      {
        v3 = v44;
        v34 = v41;
        do
        {
          if ( v3 != 0 )
          {
            v39 = v3 - v44;
            *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_2096048);
            *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
            g4_std::string::assign_str(v3 + 4, v34 + 4);
            *(uint8_t *)(v39 + v44 + 4 + 6) = *(uint8_t *)(v34 + 10);
            *(uint32_t *)(v3 + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
            g4_std::string::assign_str(v3 + 12, v34 + 12);
            *(uint8_t *)(v39 + v44 + 12 + 6) = *(uint8_t *)(v34 + 18);
            *(uint32_t *)(v3 + 20) = (uint32_t)(uintptr_t)(&dword_213B814);
            g4_std::string::assign_str(v3 + 20, v34 + 20);
            *(uint8_t *)(v39 + v44 + 20 + 6) = *(uint8_t *)(v34 + 26);
            *(uint32_t *)(v3 + 28) = (uint32_t)(uintptr_t)(&dword_213B814);
            g4_std::string::assign_str(v3 + 28, v34 + 28);
            *(uint8_t *)(v39 + v44 + 28 + 6) = *(uint8_t *)(v34 + 34);
            *(uint64_t *)(v3 + 36) = *(uint64_t *)(v34 + 36);
            *(uint8_t *)(v44 + v39 + 46) = *(uint8_t *)(v34 + 46);
            *(uint32_t *)(v3 + 48) = (uint32_t)(uintptr_t)(&dword_213B814);
            g4_std::string::assign_str(v3 + 48, v34 + 48);
            *(uint8_t *)(v39 + v44 + 48 + 6) = *(uint8_t *)(v34 + 54);
            *(uint64_t *)(v3 + 56) = *(uint64_t *)(v34 + 56);
            *(uint8_t *)(v44 + v39 + 66) = *(uint8_t *)(v34 + 66);
            *(uint32_t *)(v3 + 68) = (uint32_t)(uintptr_t)(&dword_213B814);
            g4_std::string::assign_str(v3 + 68, v34 + 68);
            *(uint8_t *)(v39 + v44 + 68 + 6) = *(uint8_t *)(v34 + 74);
            g4_std::string::construct_copy(v3 + 76, v34 + 76);
            g4_std::string::construct_copy(v3 + 80, v34 + 80);
            v42 = v44 + 84;
            v4 = v44 + 84;
            *(uint32_t *)(v39 + v42 + 4) = 0;
            *(uint32_t *)(v39 + v42 + 8) = 0;
            *(uint32_t *)(v39 + v42 + 20) = 0;
            *(uint32_t *)(v39 + v4 + 12) = v3 + 88;
            *(uint32_t *)(v39 + v4 + 16) = v3 + 88;
            v5 = *(uint32_t **)(v34 + 92);
            if ( v5 != nullptr )
            {
              v6 = g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
                     v3 + 84,
                     v5,
                     v3 + 88);
              *(uint32_t *)(v3 + 92) = (uint32_t)(uintptr_t)(v6);
              for ( i = v6; i[2] != 0; i = (uint32_t *)i[2] )
                ;
              *(uint32_t *)(v3 + 96) = (uint32_t)(uintptr_t)(i);
              while ( v6[3] != 0 )
                v6 = (uint32_t *)v6[3];
              *(uint32_t *)(v3 + 100) = (uint32_t)(uintptr_t)(v6);
              *(uint32_t *)(v39 + v42 + 20) = *(uint32_t *)(v34 + 104);
            }
          }
          v34 += 108;
          v3 += 108;
        }
        while ( v49 != v34 );
      }
      v8 = *((int **)self + 27);
      v9 = *((int **)self + 26);
      if ( v8 != v9 )
      {
        do
        {
          v10 = *v9;
          v32 = (size_t)v9;
          v9 += 27;
          (*(void (**)(size_t))(v10 + 16))(v32);
        }
        while ( v8 != v9 );
        v9 = *((int **)self + 26);
      }
      if ( v9 != nullptr )
        sub_4EBEE0((int)(uintptr_t)(v9));
      *((uint32_t *)self + 26) = v44;
      v11 = v44 + v47;
      v12 = self;
      *((uint32_t *)self + 28) = v44 + v47;
      goto LABEL_23;
    }
    v45 = *((char **)self + 27);
    v16 = (v45 - v38) >> 2;
    if ( v50 > (unsigned int)(1749801491 * v16) )
    {
      v23 = v41 + 4 * v16;
      v48 = 1749801491 * v16;
      if ( 1749801491 * v16 > 0 )
      {
        v24 = *((uint32_t *)self + 26);
        v25 = *((uint32_t *)a2 + 26);
        do
        {
          g4_std::string::assign_str(v24 + 4, v25 + 4);
          v36 = v24 - (uint32_t)(uintptr_t)(v38);
          *(uint8_t *)(v24 + 10) = *(uint8_t *)(v25 + 10);
          g4_std::string::assign_str(v24 + 12, v25 + 12);
          v38[v36 + 18] = *(uint8_t *)(v25 + 18);
          g4_std::string::assign_str(v24 + 20, v25 + 20);
          v38[v36 + 26] = *(uint8_t *)(v25 + 26);
          g4_std::string::assign_str(v24 + 28, v25 + 28);
          v38[v36 + 34] = *(uint8_t *)(v25 + 34);
          *(uint64_t *)(v24 + 36) = *(uint64_t *)(v25 + 36);
          v38[v36 + 46] = *(uint8_t *)(v25 + 46);
          g4_std::string::assign_str(v24 + 48, v25 + 48);
          v38[v36 + 54] = *(uint8_t *)(v25 + 54);
          *(uint64_t *)(v24 + 56) = *(uint64_t *)(v25 + 56);
          v38[v36 + 66] = *(uint8_t *)(v25 + 66);
          g4_std::string::assign_str(v24 + 68, v25 + 68);
          v38[v36 + 74] = *(uint8_t *)(v25 + 74);
          g4_std::string::assign_str(v24 + 76, v25 + 76);
          g4_std::string::assign_str(v24 + 80, v25 + 80);
          if ( v24 + 84 != v25 + 84 )
          {
            g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_erase(
              v24 + 84,
              *(uint32_t **)(v24 + 92));
            *(uint32_t *)(v24 + 96) = v24 + 88;
            *(uint32_t *)(v24 + 100) = v24 + 88;
            *(uint32_t *)(v24 + 92) = 0;
            *(uint32_t *)(v24 + 104) = 0;
            if ( *(uint32_t *)(v25 + 92) != 0 )
            {
              v26 = g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
                      v24 + 84,
                      *(uint32_t **)(v25 + 92),
                      v24 + 88);
              *(uint32_t *)(v24 + 92) = (uint32_t)(uintptr_t)(v26);
              for ( j = v26; j[2] != 0; j = (uint32_t *)j[2] )
                ;
              *(uint32_t *)(v24 + 96) = (uint32_t)(uintptr_t)(j);
              while ( v26[3] != 0 )
                v26 = (uint32_t *)v26[3];
              *(uint32_t *)(v24 + 100) = (uint32_t)(uintptr_t)(v26);
              *(uint32_t *)(v24 + 104) = *(uint32_t *)(v25 + 104);
            }
          }
          v25 += 108;
          v24 += 108;
          --v48;
        }
        while ( v48 != 0 );
        v45 = *((char **)self + 27);
        v49 = *((uint32_t *)a2 + 27);
        v38 = *((char **)self + 26);
        v23 = *((uint32_t *)a2 + 26) + ((v45 - v38) & 0xFFFFFFFC);
      }
      v37 = v23;
      v28 = v45;
      if ( v49 == v23 )
      {
        v12 = self;
        v11 = (int)(uintptr_t)(&v38[108 * v50]);
        goto LABEL_23;
      }
      do
      {
        if ( v28 != nullptr )
        {
          v40 = v28 - v45;
          *(uint32_t *)v28 = ((uint32_t)(uintptr_t)&off_2096048);
          *((uint32_t *)v28 + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
          g4_std::string::assign_str(v28 + 4, v37 + 4);
          v45[v40 + 10] = *(uint8_t *)(v37 + 10);
          *((uint32_t *)v28 + 3) = (uint32_t)(uintptr_t)(&dword_213B814);
          g4_std::string::assign_str(v28 + 12, v37 + 12);
          v45[v40 + 18] = *(uint8_t *)(v37 + 18);
          *((uint32_t *)v28 + 5) = (uint32_t)(uintptr_t)(&dword_213B814);
          g4_std::string::assign_str(v28 + 20, v37 + 20);
          v45[v40 + 26] = *(uint8_t *)(v37 + 26);
          *((uint32_t *)v28 + 7) = (uint32_t)(uintptr_t)(&dword_213B814);
          g4_std::string::assign_str(v28 + 28, v37 + 28);
          v45[v40 + 34] = *(uint8_t *)(v37 + 34);
          *(uint64_t *)(v28 + 36) = *(uint64_t *)(v37 + 36);
          v45[v40 + 46] = *(uint8_t *)(v37 + 46);
          *((uint32_t *)v28 + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
          g4_std::string::assign_str(v28 + 48, v37 + 48);
          v45[v40 + 54] = *(uint8_t *)(v37 + 54);
          *((uint64_t *)v28 + 7) = *(uint64_t *)(v37 + 56);
          v45[v40 + 66] = *(uint8_t *)(v37 + 66);
          *((uint32_t *)v28 + 17) = (uint32_t)(uintptr_t)(&dword_213B814);
          g4_std::string::assign_str(v28 + 68, v37 + 68);
          v45[v40 + 74] = *(uint8_t *)(v37 + 74);
          g4_std::string::construct_copy(v28 + 76, v37 + 76);
          g4_std::string::construct_copy(v28 + 80, v37 + 80);
          v43 = (uint32_t *)(v45 + 84);
          *(uint32_t *)((char *)v43 + v40 + 4) = 0;
          *(uint32_t *)((char *)v43 + v40 + 8) = 0;
          *(uint32_t *)((char *)v43 + v40 + 20) = 0;
          *(uint32_t *)((char *)v43 + v40 + 12) = (uint32_t)(uintptr_t)(v28 + 88);
          *(uint32_t *)((char *)v43 + v40 + 16) = (uint32_t)(uintptr_t)(v28 + 88);
          v29 = *(uint32_t **)(v37 + 92);
          if ( v29 != nullptr )
          {
            v30 = g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
                    (int)(uintptr_t)(v28 + 84),
                    v29,
                    (int)(uintptr_t)(v28 + 88));
            *((uint32_t *)v28 + 23) = (uint32_t)(uintptr_t)(v30);
            for ( k = v30; k[2] != 0; k = (uint32_t *)k[2] )
              ;
            *((uint32_t *)v28 + 24) = (uint32_t)(uintptr_t)(k);
            while ( v30[3] != 0 )
              v30 = (uint32_t *)v30[3];
            *((uint32_t *)v28 + 25) = (uint32_t)(uintptr_t)(v30);
            *(uint32_t *)((char *)v43 + v40 + 20) = *(uint32_t *)(v37 + 104);
          }
        }
        v37 += 108;
        v28 += 108;
      }
      while ( v49 != v37 );
    }
    else
    {
      if ( v50 > 0 )
      {
        v17 = *((uint32_t *)a2 + 26);
        v18 = *((uint32_t *)self + 26);
        do
        {
          g4_std::string::assign_str(v18 + 4, v17 + 4);
          v35 = v18 - (uint32_t)(uintptr_t)(v38);
          *(uint8_t *)(v18 + 10) = *(uint8_t *)(v17 + 10);
          g4_std::string::assign_str(v18 + 12, v17 + 12);
          v38[v35 + 18] = *(uint8_t *)(v17 + 18);
          g4_std::string::assign_str(v18 + 20, v17 + 20);
          v38[v35 + 26] = *(uint8_t *)(v17 + 26);
          g4_std::string::assign_str(v18 + 28, v17 + 28);
          v38[v35 + 34] = *(uint8_t *)(v17 + 34);
          *(uint64_t *)(v18 + 36) = *(uint64_t *)(v17 + 36);
          v38[v35 + 46] = *(uint8_t *)(v17 + 46);
          g4_std::string::assign_str(v18 + 48, v17 + 48);
          v38[v35 + 54] = *(uint8_t *)(v17 + 54);
          *(uint64_t *)(v18 + 56) = *(uint64_t *)(v17 + 56);
          v38[v35 + 66] = *(uint8_t *)(v17 + 66);
          g4_std::string::assign_str(v18 + 68, v17 + 68);
          v38[v35 + 74] = *(uint8_t *)(v17 + 74);
          g4_std::string::assign_str(v18 + 76, v17 + 76);
          g4_std::string::assign_str(v18 + 80, v17 + 80);
          if ( v18 + 84 != v17 + 84 )
          {
            g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_erase(
              v18 + 84,
              *(uint32_t **)(v18 + 92));
            *(uint32_t *)(v18 + 96) = v18 + 88;
            *(uint32_t *)(v18 + 100) = v18 + 88;
            *(uint32_t *)(v18 + 92) = 0;
            *(uint32_t *)(v18 + 104) = 0;
            if ( *(uint32_t *)(v17 + 92) != 0 )
            {
              v19 = g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
                      v18 + 84,
                      *(uint32_t **)(v17 + 92),
                      v18 + 88);
              *(uint32_t *)(v18 + 92) = (uint32_t)(uintptr_t)(v19);
              for ( m = v19; m[2] != 0; m = (uint32_t *)m[2] )
                ;
              *(uint32_t *)(v18 + 96) = (uint32_t)(uintptr_t)(m);
              while ( v19[3] != 0 )
                v19 = (uint32_t *)v19[3];
              *(uint32_t *)(v18 + 100) = (uint32_t)(uintptr_t)(v19);
              *(uint32_t *)(v18 + 104) = *(uint32_t *)(v17 + 104);
            }
          }
          v17 += 108;
          v18 += 108;
          --v46;
        }
        while ( v46 != 0 );
        v38 += 108 * v50;
      }
      if ( v45 != v38 )
      {
        v21 = v38;
        do
        {
          v22 = *(uint32_t *)v21;
          v33 = (size_t)v21;
          v21 += 108;
          (*(void (**)(size_t))(v22 + 16))(v33);
        }
        while ( v45 != v21 );
        v12 = self;
        v11 = *((uint32_t *)self + 26) + 108 * v50;
        goto LABEL_23;
      }
    }
    v12 = self;
    v11 = *((uint32_t *)self + 26) + 108 * v50;
LABEL_23:
    *((uint32_t *)v12 + 27) = v11;
  }
  if ( (char *)self + 116 != (char *)a2 + 116 )
  {
    g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_erase(
      (int)(uintptr_t)(self) + 116,
      *((uint32_t **)self + 31));
    *((uint32_t *)self + 32) = (uint32_t)(uintptr_t)((char *)self + 120);
    *((uint32_t *)self + 31) = 0;
    *((uint32_t *)self + 33) = (uint32_t)(uintptr_t)((char *)self + 120);
    *((uint32_t *)self + 34) = 0;
    if ( *((uint32_t *)a2 + 31) != 0 )
    {
      v13 = g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
              (int)(uintptr_t)(self) + 116,
              *((uint32_t **)a2 + 31),
              (int)(uintptr_t)(self) + 120);
      v14 = v13;
      *((uint32_t *)self + 31) = (uint32_t)(uintptr_t)(v13);
      while ( v14[2] != 0 )
        v14 = (uint32_t *)v14[2];
      *((uint32_t *)self + 32) = (uint32_t)(uintptr_t)(v14);
      while ( v13[3] != 0 )
        v13 = (uint32_t *)v13[3];
      *((uint32_t *)self + 33) = (uint32_t)(uintptr_t)(v13);
      *((uint32_t *)self + 34) = *((uint32_t *)a2 + 34);
    }
  }
  g4_std::string::assign_str((char *)self + 140, (char *)a2 + 140);
  return self;
}


