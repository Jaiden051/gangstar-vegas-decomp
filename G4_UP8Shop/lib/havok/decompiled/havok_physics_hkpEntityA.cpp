#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpEntityA.h"

// ----------------------------------------------------------------------------
// Function: hkpEntityAabbUtil::entityBatchInvalidateAabb  (binary VA: 0x1753490)
// Original: hkpEntityAabbUtil::entityBatchInvalidateAabb
// ----------------------------------------------------------------------------
hkpEntityAabbUtil::Self * hkpEntityAabbUtil::entityBatchInvalidateAabb(hkpEntityAabbUtil::Self *self, hkpEntity::Self *const *a2)
{
  hkpEntityAabbUtil::Self *result;
  int v3;

  result = self;
  if ( (int)(uintptr_t)(a2) > 0 )
  {
    do
    {
      v3 = *(uint32_t *)result;
      result = (hkpEntityAabbUtil::Self *)((char *)result + 4);
      *(uint32_t *)(v3 + 48) = 1;
      *(uint32_t *)(v3 + 64) = 0;
    }
    while ( result != (hkpEntityAabbUtil::Self *)((char *)self + 4 * (uint32_t)(uintptr_t)(a2)) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpEntityAabbUtil::entityBatchRecalcAabb  (binary VA: 0x1753e80)
// Original: hkpEntityAabbUtil::entityBatchRecalcAabb
// ----------------------------------------------------------------------------
int hkpEntityAabbUtil::entityBatchRecalcAabb(int a1, int a2, int a3)
{
  int result;
  int v4;
  uint8_t *v5;
  hkLifoAllocator::Self *v6;
  char *v7;
  hkLifoAllocator::Self *v8;
  int v9;
  int v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  float v15;
  float v16;
  __m128i v17;
  float v18;
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm5_4
  float v23; // xmm7_4
  float v24; // xmm6_4
  float *v25;
  float *v26;
  float *v27;
  float *v28;
  int v29;
  float v30; // xmm3_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm0_4
  float v34; // xmm6_4
  float v35; // xmm4_4
  float v36; // xmm7_4
  float v37; // xmm5_4
  float v38; // xmm2_4
  float v39; // xmm0_4
  float v40; // xmm4_4
  float v41; // xmm2_4
  float v42; // xmm3_4
  __m128i v43;
  float v44; // xmm4_4
  int v45;
  float v46; // xmm2_4
  float v47; // xmm7_4
  float v48; // xmm1_4
  float v49; // xmm0_4
  float v50; // xmm4_4
  float v51; // xmm2_4
  float v52; // xmm5_4
  float v53; // xmm7_4
  float v54; // xmm3_4
  float v55; // xmm1_4
  float v56; // xmm5_4
  float v57; // xmm0_4
  float v58; // xmm4_4
  float v59; // xmm1_4
  float v60; // xmm3_4
  float v61; // xmm2_4
  float v62; // xmm1_4
  __m128i v63;
  __m128i v64;
  __m128i v65;
  __m128i v66;
  int v67;
  int v68;
  int v69;
  int v70;
  unsigned int v71;
  int v72;
  unsigned int v73;
  int v74;
  unsigned int v75;
  int v76;
  unsigned int v77;
  int v78;
  float v79;
  __m128i v81;
  __m128i v82;
  __m128i v83;
  __m128i v84;
  int v85;
  int v86;
  int v87;
  int v88;
  unsigned int v89;
  int v90;
  unsigned int v91;
  int v92;
  unsigned int v93;
  int v94;
  unsigned int v95;
  int v96;
  float v97;
  float v98;
  float v99; // xmm7_4
  __m128i v100;
  __m128i v101;
  float v102; // xmm6_4
  float v103; // xmm5_4
  __m128i v104;
  __m128i v105;
  int v106;
  int v107;
  int v108;
  int v109;
  unsigned int v110;
  int v111;
  unsigned int v112;
  int v113;
  unsigned int v114;
  int v115;
  unsigned int v116;
  int v117;
  __m128i v118;
  __m128i v119;
  __m128i v120;
  __m128i v121;
  int v122;
  int v123;
  int v124;
  int v125;
  unsigned int v126;
  int v127;
  unsigned int v128;
  int v129;
  unsigned int v130;
  int v131;
  unsigned int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  char v138;
  int v139;
  char *v140;
  int *v141;
  float v142; // xmm4_4
  unsigned int v143;
  char v144;
  char v145;
  int v146;
  int v147;
  int v148;
  int v149;
  float v150; // xmm5_4
  float v151; // xmm2_4
  float v152; // xmm4_4
  float v153; // xmm3_4
  __m128i v154;
  __m128i v155;
  __m128i v156;
  __m128i v157;
  int v158;
  int v159;
  int v160;
  int v161;
  int v162;
  unsigned int v163;
  int v164;
  unsigned int v165;
  int v166;
  unsigned int v167;
  int v168;
  unsigned int v169;
  int v170;
  float v171;
  __m128i v173;
  __m128i v174;
  __m128i v175;
  __m128i v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  unsigned int v182;
  int v183;
  unsigned int v184;
  int v185;
  unsigned int v186;
  int v187;
  unsigned int v188;
  int v189;
  float v190;
  __m128i v191;
  __m128i v192;
  __m128i v193;
  __m128i v194;
  int v195;
  int v196;
  int v197;
  int v198;
  int v199;
  unsigned int v200;
  float v201;
  unsigned int v202;
  float v203;
  unsigned int v204;
  float v205;
  unsigned int v206;
  float v207;
  __m128i v208;
  __m128i v209;
  __m128i v210;
  __m128i v211;
  int v212;
  int v213;
  int v214;
  int v215;
  int v216;
  unsigned int v217;
  float v218;
  unsigned int v219;
  float v220;
  unsigned int v221;
  float v222;
  unsigned int v223;
  float v224;
  int v225;
  int v226;
  int v227;
  int v228;
  char v229;
  hkLifoAllocator::Self *v230;
  hkLifoAllocator::Self *v231;
  float v232; // xmm0_4
  float v233; // xmm1_4
  float v234; // xmm0_4
  float v235; // xmm2_4
  float v236; // xmm6_4
  float v237; // xmm4_4
  float v238; // xmm5_4
  float v239; // xmm7_4
  float v240; // xmm3_4
  float v241; // xmm0_4
  float v242; // xmm2_4
  float v243; // xmm0_4
  float v244; // xmm1_4
  float v245; // xmm7_4
  float v246; // xmm6_4
  float v247; // xmm4_4
  float v248; // xmm5_4
  float v249; // xmm5_4
  __m128i v250;
  __m128i v251;
  __m128i v252;
  __m128i v253;
  int v254;
  int v255;
  int v256;
  int v257;
  int v258;
  unsigned int v259;
  int v260;
  unsigned int v261;
  int v262;
  unsigned int v263;
  int v264;
  unsigned int v265;
  int v266;
  float v267;
  int v268;
  __m128i v270;
  __m128i v271;
  __m128i v272;
  __m128i v273;
  int v274;
  int v275;
  int v276;
  int v277;
  int v278;
  unsigned int v279;
  int v280;
  unsigned int v281;
  int v282;
  unsigned int v283;
  int v284;
  unsigned int v285;
  int v286;
  float v287;
  int v288;
  __m128i v289;
  __m128i v290;
  __m128i v291;
  __m128i v292;
  int v293;
  int v294;
  int v295;
  int v296;
  int v297;
  unsigned int v298;
  int v299;
  unsigned int v300;
  int v301;
  unsigned int v302;
  int v303;
  unsigned int v304;
  int v305;
  __m128i v306;
  __m128i v307;
  __m128i v308;
  __m128i v309;
  int v310;
  int v311;
  int v312;
  int v313;
  int v314;
  unsigned int v315;
  int v316;
  unsigned int v317;
  int v318;
  unsigned int v319;
  int v320;
  unsigned int v321;
  int v322;
  int v323;
  int v324;
  int v325;
  int v326;
  char v327;
  hkLifoAllocator::Self *v328;
  int v329;
  int v330;
  bool v331;
  char *v332;
  uint32_t *v333;
  int v334;
  int v335;
  int v336;
  int v337;
  int v338;
  char *v339;
  int v340;
  int v341;
  int v342;
  int v343;
  int v344;
  hkLifoAllocator::Self *v345;
  typedef int _g4_t_v346;
  typedef signed int _g4_t_v347;
  typedef signed int _g4_t_v348;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef int _g4_t_i;
  typedef int _g4_t_v351;
  typedef char *_g4_t_v352;
  typedef char *_g4_t_v353;
  typedef float _g4_t_v354;
  typedef int _g4_t_v355;
  typedef char *_g4_t_v356;
  typedef int _g4_t_v357;
  typedef float _g4_t_v358;
  typedef float _g4_t_v359;
  typedef float _g4_t_v360;
  typedef float _g4_t_v361;
  typedef float _g4_t_v362;
  typedef float _g4_t_v363;
  typedef float _g4_t_v364;
  typedef float _g4_t_v365;
  typedef float _g4_t_v366;
  typedef float _g4_t_v367;
  typedef float _g4_t_v368;
  typedef float _g4_t_v369;
  typedef float _g4_t_v370;
  typedef float _g4_t_v371;
  typedef float _g4_t_v372;
  typedef float _g4_t_v373;
  typedef float _g4_t_v374;
  typedef float _g4_t_v375;
  typedef float _g4_t_v376;
  typedef float _g4_t_v377;
  typedef int _g4_t_v378;
  typedef int _g4_t_v379;
  typedef int _g4_t_v380;
  typedef int _g4_t_v381;
  typedef int _g4_t_v382;
  typedef int _g4_t_v383;
  typedef int _g4_t_v384;
  typedef unsigned int _g4_t_v385;
  typedef int _g4_t_v386;
  typedef float _g4_t_v387;
  typedef char *_g4_t_v388;
  typedef float _g4_t_v389;
  typedef unsigned int _g4_t_v390;
  typedef int _g4_t_v391;
  typedef float _g4_t_v392;
  typedef float _g4_t_v393;
  typedef float _g4_t_v394;
  typedef float _g4_t_v395;
  typedef unsigned int _g4_t_v396;
  typedef int _g4_t_v397;
  typedef float _g4_t_v398;
  typedef float _g4_t_v399;
  typedef float _g4_t_v400;
  typedef int _g4_t_v401;
  typedef unsigned int _g4_t_v402;
  typedef int _g4_t_v403;
  typedef float _g4_t_v404;
  typedef float _g4_t_v405;
  typedef int _g4_t_v406;
  typedef int _g4_t_v407;
  typedef float _g4_t_v408;
  typedef float _g4_t_v409;
  typedef float _g4_t_v410;
  typedef unsigned int _g4_t_v411;
  typedef int _g4_t_v412;
  typedef float _g4_t_v413;
  typedef int _g4_t_v414;
  typedef float _g4_t_v415;
  typedef float _g4_t_v416;
  typedef unsigned int _g4_t_v417;
  typedef int _g4_t_v418;
  typedef float _g4_t_v419;
  typedef int _g4_t_v420;
  typedef int _g4_t_v421;
  typedef float _g4_t_v422;
  typedef float _g4_t_v423;
  typedef unsigned int _g4_t_v424;
  typedef int _g4_t_v425;
  typedef int _g4_t_v426;
  typedef int _g4_t_v427;
  typedef unsigned int _g4_t_v428;
  typedef float _g4_t_v429;
  typedef float _g4_t_v430;
  typedef int _g4_t_v431;
  typedef int _g4_t_v432;
  typedef int _g4_t_v433;
  typedef unsigned int _g4_t_v434;
  typedef int _g4_t_v435;
  typedef int _g4_t_v436;
  typedef int _g4_t_v437;
  typedef float _g4_t_v438;
  typedef float _g4_t_v439;
  typedef float _g4_t_v440;
  typedef unsigned int _g4_t_v441;
  typedef unsigned int _g4_t_v442;
  typedef unsigned int _g4_t_v443;
  typedef int _g4_t_v444;
  typedef int _g4_t_v445;
  typedef int _g4_t_v446;
  typedef int _g4_t_v447;
  typedef int _g4_t_v448;
  typedef float _g4_t_v449;
  typedef unsigned int _g4_t_v450;
  typedef unsigned int _g4_t_v451;
  typedef int _g4_t_v452;
  typedef float _g4_t_v453;
  typedef unsigned int _g4_t_v454;
  typedef unsigned int _g4_t_v455;
  typedef int _g4_t_v456;
  typedef int _g4_t_v457;
  typedef int _g4_t_v458;
  typedef int _g4_t_v459;
  typedef int _g4_t_v460;
  typedef float _g4_t_v461;
  typedef float _g4_t_v462;
  typedef int _g4_t_v463;
  typedef float _g4_t_v464;
  typedef unsigned int _g4_t_v465;
  typedef unsigned int _g4_t_v466;
  typedef float _g4_t_v467;
  typedef int _g4_t_v468;
  typedef int _g4_t_v469;
  typedef int _g4_t_v470;
  typedef int _g4_t_v471;
  typedef int _g4_t_v472;
  typedef float _g4_t_v473;
  typedef float _g4_t_v474;
  typedef int _g4_t_v475;
  typedef float _g4_t_v476;
  typedef unsigned int _g4_t_v477;
  typedef unsigned int _g4_t_v478;
  typedef float _g4_t_v479;
  typedef int _g4_t_v480;
  typedef unsigned int _g4_t_v481;
  typedef unsigned int _g4_t_v482;
  typedef unsigned int _g4_t_v483;
  typedef int _g4_t_v484;
  typedef float _g4_t_v485;
  typedef float _g4_t_v486;
  typedef int _g4_t_v487;
  typedef float _g4_t_v488;
  typedef float _g4_t_v489;
  typedef unsigned int _g4_t_v490;
  typedef unsigned int _g4_t_v491;
  typedef unsigned int _g4_t_v492;
  typedef unsigned int _g4_t_v493;
  typedef unsigned int _g4_t_v494;
  typedef float _g4_t_v495;
  typedef float _g4_t_v496;
  typedef unsigned int _g4_t_v497;
  typedef float _g4_t_v498;
  typedef float _g4_t_v499;
  typedef unsigned int _g4_t_v500;
  typedef int _g4_t_v501;
  typedef unsigned int _g4_t_v502;
  typedef unsigned int _g4_t_v503;
  typedef unsigned int _g4_t_v504;
  typedef unsigned int _g4_t_v505;
  typedef int _g4_t_v506;
  typedef float _g4_t_v507;
  typedef float _g4_t_v508;
  typedef unsigned int _g4_t_v509;
  typedef unsigned int _g4_t_v510;
  typedef int _g4_t_v511;
  typedef signed int _g4_t_v512;
  typedef float _g4_t_v513;
  typedef float _g4_t_v514;
  typedef unsigned int _g4_t_v515;
  typedef unsigned int _g4_t_v516;
  typedef int _g4_t_v517;
  typedef unsigned int _g4_t_v518;
  typedef unsigned int _g4_t_v519;
  typedef unsigned int _g4_t_v520;
  typedef unsigned int _g4_t_v521;
  typedef int _g4_t_v522;
  typedef float _g4_t_v523;
  typedef float _g4_t_v524;
  typedef unsigned int _g4_t_v525;
  typedef unsigned int _g4_t_v526;
  typedef int _g4_t_v527;
  typedef int _g4_t_v528;
  typedef float _g4_t_v529;
  typedef float _g4_t_v530;
  typedef float _g4_t_v531;
  typedef unsigned int _g4_t_v532;
  typedef int _g4_t_v533;
  typedef unsigned int _g4_t_v534;
  typedef int _g4_t_v535;
  typedef float _g4_t_v536;
  typedef float _g4_t_v537;
  typedef unsigned int _g4_t_v538;
  typedef unsigned int _g4_t_v539;
  typedef int _g4_t_v540;
  typedef int _g4_t_v541;
  typedef int _g4_t_v542;
  typedef float _g4_t_v543;
  typedef float _g4_t_v544;
  typedef float _g4_t_v545;
  typedef float _g4_t_v546;
  typedef float _g4_t_v547;
  typedef float _g4_t_v548;
  typedef float _g4_t_v549;
  typedef float _g4_t_v550;
  typedef float _g4_t_v551;
  typedef float _g4_t_v552;
  typedef float _g4_t_v553;
  typedef float _g4_t_v554;
  typedef float _g4_t_v555;
  typedef float _g4_t_v556;
  typedef float _g4_t_v557;
  typedef float _g4_t_v558;
  typedef float _g4_t_v559;
  typedef float _g4_t_v560;
  typedef float _g4_t_v561;
  typedef float _g4_t_v562;
  typedef float _g4_t_v563;
  typedef float _g4_t_v564;
  typedef float _g4_t_v565[9];
  typedef int _g4_t_v566;
  typedef int _g4_t_v567;
  typedef float _g4_t_v568[87];
  typedef float _g4_t_v569;
  typedef float _g4_t_v570;
  typedef float _g4_t_v571;
  typedef int _g4_t_v572;
  typedef float _g4_t_v573;
  typedef float _g4_t_v574;
  typedef float _g4_t_v575;
  typedef int _g4_t_v576;
  enum : size_t {
    _g4_s0 = 1360u,
    _g4_s1 = (12u + sizeof(_g4_t_v346)) > _g4_s0 ? (12u + sizeof(_g4_t_v346)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v347)) > _g4_s1 ? (24u + sizeof(_g4_t_v347)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v348)) > _g4_s2 ? (28u + sizeof(_g4_t_v348)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_address)) > _g4_s3 ? (32u + sizeof(_g4_t_address)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_i)) > _g4_s4 ? (36u + sizeof(_g4_t_i)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v351)) > _g4_s5 ? (40u + sizeof(_g4_t_v351)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v352)) > _g4_s6 ? (44u + sizeof(_g4_t_v352)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v353)) > _g4_s7 ? (48u + sizeof(_g4_t_v353)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v354)) > _g4_s8 ? (72u + sizeof(_g4_t_v354)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v355)) > _g4_s9 ? (84u + sizeof(_g4_t_v355)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v356)) > _g4_s10 ? (88u + sizeof(_g4_t_v356)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v357)) > _g4_s11 ? (92u + sizeof(_g4_t_v357)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v358)) > _g4_s12 ? (96u + sizeof(_g4_t_v358)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v359)) > _g4_s13 ? (100u + sizeof(_g4_t_v359)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v360)) > _g4_s14 ? (104u + sizeof(_g4_t_v360)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v361)) > _g4_s15 ? (108u + sizeof(_g4_t_v361)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v362)) > _g4_s16 ? (112u + sizeof(_g4_t_v362)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v363)) > _g4_s17 ? (116u + sizeof(_g4_t_v363)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v364)) > _g4_s18 ? (120u + sizeof(_g4_t_v364)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v365)) > _g4_s19 ? (124u + sizeof(_g4_t_v365)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v366)) > _g4_s20 ? (128u + sizeof(_g4_t_v366)) : _g4_s20,
    _g4_s22 = (132u + sizeof(_g4_t_v367)) > _g4_s21 ? (132u + sizeof(_g4_t_v367)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v368)) > _g4_s22 ? (136u + sizeof(_g4_t_v368)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v369)) > _g4_s23 ? (140u + sizeof(_g4_t_v369)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v370)) > _g4_s24 ? (144u + sizeof(_g4_t_v370)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v371)) > _g4_s25 ? (148u + sizeof(_g4_t_v371)) : _g4_s25,
    _g4_s27 = (152u + sizeof(_g4_t_v372)) > _g4_s26 ? (152u + sizeof(_g4_t_v372)) : _g4_s26,
    _g4_s28 = (156u + sizeof(_g4_t_v373)) > _g4_s27 ? (156u + sizeof(_g4_t_v373)) : _g4_s27,
    _g4_s29 = (160u + sizeof(_g4_t_v374)) > _g4_s28 ? (160u + sizeof(_g4_t_v374)) : _g4_s28,
    _g4_s30 = (164u + sizeof(_g4_t_v375)) > _g4_s29 ? (164u + sizeof(_g4_t_v375)) : _g4_s29,
    _g4_s31 = (168u + sizeof(_g4_t_v376)) > _g4_s30 ? (168u + sizeof(_g4_t_v376)) : _g4_s30,
    _g4_s32 = (168u + sizeof(_g4_t_v377)) > _g4_s31 ? (168u + sizeof(_g4_t_v377)) : _g4_s31,
    _g4_s33 = (184u + sizeof(_g4_t_v378)) > _g4_s32 ? (184u + sizeof(_g4_t_v378)) : _g4_s32,
    _g4_s34 = (188u + sizeof(_g4_t_v379)) > _g4_s33 ? (188u + sizeof(_g4_t_v379)) : _g4_s33,
    _g4_s35 = (192u + sizeof(_g4_t_v380)) > _g4_s34 ? (192u + sizeof(_g4_t_v380)) : _g4_s34,
    _g4_s36 = (196u + sizeof(_g4_t_v381)) > _g4_s35 ? (196u + sizeof(_g4_t_v381)) : _g4_s35,
    _g4_s37 = (200u + sizeof(_g4_t_v382)) > _g4_s36 ? (200u + sizeof(_g4_t_v382)) : _g4_s36,
    _g4_s38 = (204u + sizeof(_g4_t_v383)) > _g4_s37 ? (204u + sizeof(_g4_t_v383)) : _g4_s37,
    _g4_s39 = (204u + sizeof(_g4_t_v384)) > _g4_s38 ? (204u + sizeof(_g4_t_v384)) : _g4_s38,
    _g4_s40 = (204u + sizeof(_g4_t_v385)) > _g4_s39 ? (204u + sizeof(_g4_t_v385)) : _g4_s39,
    _g4_s41 = (204u + sizeof(_g4_t_v386)) > _g4_s40 ? (204u + sizeof(_g4_t_v386)) : _g4_s40,
    _g4_s42 = (204u + sizeof(_g4_t_v387)) > _g4_s41 ? (204u + sizeof(_g4_t_v387)) : _g4_s41,
    _g4_s43 = (208u + sizeof(_g4_t_v388)) > _g4_s42 ? (208u + sizeof(_g4_t_v388)) : _g4_s42,
    _g4_s44 = (208u + sizeof(_g4_t_v389)) > _g4_s43 ? (208u + sizeof(_g4_t_v389)) : _g4_s43,
    _g4_s45 = (208u + sizeof(_g4_t_v390)) > _g4_s44 ? (208u + sizeof(_g4_t_v390)) : _g4_s44,
    _g4_s46 = (208u + sizeof(_g4_t_v391)) > _g4_s45 ? (208u + sizeof(_g4_t_v391)) : _g4_s45,
    _g4_s47 = (208u + sizeof(_g4_t_v392)) > _g4_s46 ? (208u + sizeof(_g4_t_v392)) : _g4_s46,
    _g4_s48 = (212u + sizeof(_g4_t_v393)) > _g4_s47 ? (212u + sizeof(_g4_t_v393)) : _g4_s47,
    _g4_s49 = (212u + sizeof(_g4_t_v394)) > _g4_s48 ? (212u + sizeof(_g4_t_v394)) : _g4_s48,
    _g4_s50 = (212u + sizeof(_g4_t_v395)) > _g4_s49 ? (212u + sizeof(_g4_t_v395)) : _g4_s49,
    _g4_s51 = (212u + sizeof(_g4_t_v396)) > _g4_s50 ? (212u + sizeof(_g4_t_v396)) : _g4_s50,
    _g4_s52 = (212u + sizeof(_g4_t_v397)) > _g4_s51 ? (212u + sizeof(_g4_t_v397)) : _g4_s51,
    _g4_s53 = (212u + sizeof(_g4_t_v398)) > _g4_s52 ? (212u + sizeof(_g4_t_v398)) : _g4_s52,
    _g4_s54 = (216u + sizeof(_g4_t_v399)) > _g4_s53 ? (216u + sizeof(_g4_t_v399)) : _g4_s53,
    _g4_s55 = (216u + sizeof(_g4_t_v400)) > _g4_s54 ? (216u + sizeof(_g4_t_v400)) : _g4_s54,
    _g4_s56 = (216u + sizeof(_g4_t_v401)) > _g4_s55 ? (216u + sizeof(_g4_t_v401)) : _g4_s55,
    _g4_s57 = (216u + sizeof(_g4_t_v402)) > _g4_s56 ? (216u + sizeof(_g4_t_v402)) : _g4_s56,
    _g4_s58 = (216u + sizeof(_g4_t_v403)) > _g4_s57 ? (216u + sizeof(_g4_t_v403)) : _g4_s57,
    _g4_s59 = (216u + sizeof(_g4_t_v404)) > _g4_s58 ? (216u + sizeof(_g4_t_v404)) : _g4_s58,
    _g4_s60 = (220u + sizeof(_g4_t_v405)) > _g4_s59 ? (220u + sizeof(_g4_t_v405)) : _g4_s59,
    _g4_s61 = (220u + sizeof(_g4_t_v406)) > _g4_s60 ? (220u + sizeof(_g4_t_v406)) : _g4_s60,
    _g4_s62 = (220u + sizeof(_g4_t_v407)) > _g4_s61 ? (220u + sizeof(_g4_t_v407)) : _g4_s61,
    _g4_s63 = (220u + sizeof(_g4_t_v408)) > _g4_s62 ? (220u + sizeof(_g4_t_v408)) : _g4_s62,
    _g4_s64 = (220u + sizeof(_g4_t_v409)) > _g4_s63 ? (220u + sizeof(_g4_t_v409)) : _g4_s63,
    _g4_s65 = (220u + sizeof(_g4_t_v410)) > _g4_s64 ? (220u + sizeof(_g4_t_v410)) : _g4_s64,
    _g4_s66 = (220u + sizeof(_g4_t_v411)) > _g4_s65 ? (220u + sizeof(_g4_t_v411)) : _g4_s65,
    _g4_s67 = (220u + sizeof(_g4_t_v412)) > _g4_s66 ? (220u + sizeof(_g4_t_v412)) : _g4_s66,
    _g4_s68 = (224u + sizeof(_g4_t_v413)) > _g4_s67 ? (224u + sizeof(_g4_t_v413)) : _g4_s67,
    _g4_s69 = (224u + sizeof(_g4_t_v414)) > _g4_s68 ? (224u + sizeof(_g4_t_v414)) : _g4_s68,
    _g4_s70 = (224u + sizeof(_g4_t_v415)) > _g4_s69 ? (224u + sizeof(_g4_t_v415)) : _g4_s69,
    _g4_s71 = (224u + sizeof(_g4_t_v416)) > _g4_s70 ? (224u + sizeof(_g4_t_v416)) : _g4_s70,
    _g4_s72 = (224u + sizeof(_g4_t_v417)) > _g4_s71 ? (224u + sizeof(_g4_t_v417)) : _g4_s71,
    _g4_s73 = (224u + sizeof(_g4_t_v418)) > _g4_s72 ? (224u + sizeof(_g4_t_v418)) : _g4_s72,
    _g4_s74 = (228u + sizeof(_g4_t_v419)) > _g4_s73 ? (228u + sizeof(_g4_t_v419)) : _g4_s73,
    _g4_s75 = (228u + sizeof(_g4_t_v420)) > _g4_s74 ? (228u + sizeof(_g4_t_v420)) : _g4_s74,
    _g4_s76 = (228u + sizeof(_g4_t_v421)) > _g4_s75 ? (228u + sizeof(_g4_t_v421)) : _g4_s75,
    _g4_s77 = (228u + sizeof(_g4_t_v422)) > _g4_s76 ? (228u + sizeof(_g4_t_v422)) : _g4_s76,
    _g4_s78 = (228u + sizeof(_g4_t_v423)) > _g4_s77 ? (228u + sizeof(_g4_t_v423)) : _g4_s77,
    _g4_s79 = (228u + sizeof(_g4_t_v424)) > _g4_s78 ? (228u + sizeof(_g4_t_v424)) : _g4_s78,
    _g4_s80 = (228u + sizeof(_g4_t_v425)) > _g4_s79 ? (228u + sizeof(_g4_t_v425)) : _g4_s79,
    _g4_s81 = (232u + sizeof(_g4_t_v426)) > _g4_s80 ? (232u + sizeof(_g4_t_v426)) : _g4_s80,
    _g4_s82 = (232u + sizeof(_g4_t_v427)) > _g4_s81 ? (232u + sizeof(_g4_t_v427)) : _g4_s81,
    _g4_s83 = (232u + sizeof(_g4_t_v428)) > _g4_s82 ? (232u + sizeof(_g4_t_v428)) : _g4_s82,
    _g4_s84 = (232u + sizeof(_g4_t_v429)) > _g4_s83 ? (232u + sizeof(_g4_t_v429)) : _g4_s83,
    _g4_s85 = (232u + sizeof(_g4_t_v430)) > _g4_s84 ? (232u + sizeof(_g4_t_v430)) : _g4_s84,
    _g4_s86 = (232u + sizeof(_g4_t_v431)) > _g4_s85 ? (232u + sizeof(_g4_t_v431)) : _g4_s85,
    _g4_s87 = (236u + sizeof(_g4_t_v432)) > _g4_s86 ? (236u + sizeof(_g4_t_v432)) : _g4_s86,
    _g4_s88 = (236u + sizeof(_g4_t_v433)) > _g4_s87 ? (236u + sizeof(_g4_t_v433)) : _g4_s87,
    _g4_s89 = (236u + sizeof(_g4_t_v434)) > _g4_s88 ? (236u + sizeof(_g4_t_v434)) : _g4_s88,
    _g4_s90 = (236u + sizeof(_g4_t_v435)) > _g4_s89 ? (236u + sizeof(_g4_t_v435)) : _g4_s89,
    _g4_s91 = (236u + sizeof(_g4_t_v436)) > _g4_s90 ? (236u + sizeof(_g4_t_v436)) : _g4_s90,
    _g4_s92 = (236u + sizeof(_g4_t_v437)) > _g4_s91 ? (236u + sizeof(_g4_t_v437)) : _g4_s91,
    _g4_s93 = (236u + sizeof(_g4_t_v438)) > _g4_s92 ? (236u + sizeof(_g4_t_v438)) : _g4_s92,
    _g4_s94 = (236u + sizeof(_g4_t_v439)) > _g4_s93 ? (236u + sizeof(_g4_t_v439)) : _g4_s93,
    _g4_s95 = (240u + sizeof(_g4_t_v440)) > _g4_s94 ? (240u + sizeof(_g4_t_v440)) : _g4_s94,
    _g4_s96 = (240u + sizeof(_g4_t_v441)) > _g4_s95 ? (240u + sizeof(_g4_t_v441)) : _g4_s95,
    _g4_s97 = (240u + sizeof(_g4_t_v442)) > _g4_s96 ? (240u + sizeof(_g4_t_v442)) : _g4_s96,
    _g4_s98 = (240u + sizeof(_g4_t_v443)) > _g4_s97 ? (240u + sizeof(_g4_t_v443)) : _g4_s97,
    _g4_s99 = (240u + sizeof(_g4_t_v444)) > _g4_s98 ? (240u + sizeof(_g4_t_v444)) : _g4_s98,
    _g4_s100 = (240u + sizeof(_g4_t_v445)) > _g4_s99 ? (240u + sizeof(_g4_t_v445)) : _g4_s99,
    _g4_s101 = (240u + sizeof(_g4_t_v446)) > _g4_s100 ? (240u + sizeof(_g4_t_v446)) : _g4_s100,
    _g4_s102 = (240u + sizeof(_g4_t_v447)) > _g4_s101 ? (240u + sizeof(_g4_t_v447)) : _g4_s101,
    _g4_s103 = (240u + sizeof(_g4_t_v448)) > _g4_s102 ? (240u + sizeof(_g4_t_v448)) : _g4_s102,
    _g4_s104 = (240u + sizeof(_g4_t_v449)) > _g4_s103 ? (240u + sizeof(_g4_t_v449)) : _g4_s103,
    _g4_s105 = (240u + sizeof(_g4_t_v450)) > _g4_s104 ? (240u + sizeof(_g4_t_v450)) : _g4_s104,
    _g4_s106 = (240u + sizeof(_g4_t_v451)) > _g4_s105 ? (240u + sizeof(_g4_t_v451)) : _g4_s105,
    _g4_s107 = (240u + sizeof(_g4_t_v452)) > _g4_s106 ? (240u + sizeof(_g4_t_v452)) : _g4_s106,
    _g4_s108 = (244u + sizeof(_g4_t_v453)) > _g4_s107 ? (244u + sizeof(_g4_t_v453)) : _g4_s107,
    _g4_s109 = (244u + sizeof(_g4_t_v454)) > _g4_s108 ? (244u + sizeof(_g4_t_v454)) : _g4_s108,
    _g4_s110 = (244u + sizeof(_g4_t_v455)) > _g4_s109 ? (244u + sizeof(_g4_t_v455)) : _g4_s109,
    _g4_s111 = (244u + sizeof(_g4_t_v456)) > _g4_s110 ? (244u + sizeof(_g4_t_v456)) : _g4_s110,
    _g4_s112 = (244u + sizeof(_g4_t_v457)) > _g4_s111 ? (244u + sizeof(_g4_t_v457)) : _g4_s111,
    _g4_s113 = (244u + sizeof(_g4_t_v458)) > _g4_s112 ? (244u + sizeof(_g4_t_v458)) : _g4_s112,
    _g4_s114 = (244u + sizeof(_g4_t_v459)) > _g4_s113 ? (244u + sizeof(_g4_t_v459)) : _g4_s113,
    _g4_s115 = (244u + sizeof(_g4_t_v460)) > _g4_s114 ? (244u + sizeof(_g4_t_v460)) : _g4_s114,
    _g4_s116 = (244u + sizeof(_g4_t_v461)) > _g4_s115 ? (244u + sizeof(_g4_t_v461)) : _g4_s115,
    _g4_s117 = (244u + sizeof(_g4_t_v462)) > _g4_s116 ? (244u + sizeof(_g4_t_v462)) : _g4_s116,
    _g4_s118 = (244u + sizeof(_g4_t_v463)) > _g4_s117 ? (244u + sizeof(_g4_t_v463)) : _g4_s117,
    _g4_s119 = (248u + sizeof(_g4_t_v464)) > _g4_s118 ? (248u + sizeof(_g4_t_v464)) : _g4_s118,
    _g4_s120 = (248u + sizeof(_g4_t_v465)) > _g4_s119 ? (248u + sizeof(_g4_t_v465)) : _g4_s119,
    _g4_s121 = (248u + sizeof(_g4_t_v466)) > _g4_s120 ? (248u + sizeof(_g4_t_v466)) : _g4_s120,
    _g4_s122 = (248u + sizeof(_g4_t_v467)) > _g4_s121 ? (248u + sizeof(_g4_t_v467)) : _g4_s121,
    _g4_s123 = (248u + sizeof(_g4_t_v468)) > _g4_s122 ? (248u + sizeof(_g4_t_v468)) : _g4_s122,
    _g4_s124 = (248u + sizeof(_g4_t_v469)) > _g4_s123 ? (248u + sizeof(_g4_t_v469)) : _g4_s123,
    _g4_s125 = (248u + sizeof(_g4_t_v470)) > _g4_s124 ? (248u + sizeof(_g4_t_v470)) : _g4_s124,
    _g4_s126 = (248u + sizeof(_g4_t_v471)) > _g4_s125 ? (248u + sizeof(_g4_t_v471)) : _g4_s125,
    _g4_s127 = (248u + sizeof(_g4_t_v472)) > _g4_s126 ? (248u + sizeof(_g4_t_v472)) : _g4_s126,
    _g4_s128 = (248u + sizeof(_g4_t_v473)) > _g4_s127 ? (248u + sizeof(_g4_t_v473)) : _g4_s127,
    _g4_s129 = (248u + sizeof(_g4_t_v474)) > _g4_s128 ? (248u + sizeof(_g4_t_v474)) : _g4_s128,
    _g4_s130 = (248u + sizeof(_g4_t_v475)) > _g4_s129 ? (248u + sizeof(_g4_t_v475)) : _g4_s129,
    _g4_s131 = (252u + sizeof(_g4_t_v476)) > _g4_s130 ? (252u + sizeof(_g4_t_v476)) : _g4_s130,
    _g4_s132 = (252u + sizeof(_g4_t_v477)) > _g4_s131 ? (252u + sizeof(_g4_t_v477)) : _g4_s131,
    _g4_s133 = (252u + sizeof(_g4_t_v478)) > _g4_s132 ? (252u + sizeof(_g4_t_v478)) : _g4_s132,
    _g4_s134 = (252u + sizeof(_g4_t_v479)) > _g4_s133 ? (252u + sizeof(_g4_t_v479)) : _g4_s133,
    _g4_s135 = (252u + sizeof(_g4_t_v480)) > _g4_s134 ? (252u + sizeof(_g4_t_v480)) : _g4_s134,
    _g4_s136 = (252u + sizeof(_g4_t_v481)) > _g4_s135 ? (252u + sizeof(_g4_t_v481)) : _g4_s135,
    _g4_s137 = (252u + sizeof(_g4_t_v482)) > _g4_s136 ? (252u + sizeof(_g4_t_v482)) : _g4_s136,
    _g4_s138 = (252u + sizeof(_g4_t_v483)) > _g4_s137 ? (252u + sizeof(_g4_t_v483)) : _g4_s137,
    _g4_s139 = (252u + sizeof(_g4_t_v484)) > _g4_s138 ? (252u + sizeof(_g4_t_v484)) : _g4_s138,
    _g4_s140 = (252u + sizeof(_g4_t_v485)) > _g4_s139 ? (252u + sizeof(_g4_t_v485)) : _g4_s139,
    _g4_s141 = (252u + sizeof(_g4_t_v486)) > _g4_s140 ? (252u + sizeof(_g4_t_v486)) : _g4_s140,
    _g4_s142 = (252u + sizeof(_g4_t_v487)) > _g4_s141 ? (252u + sizeof(_g4_t_v487)) : _g4_s141,
    _g4_s143 = (256u + sizeof(_g4_t_v488)) > _g4_s142 ? (256u + sizeof(_g4_t_v488)) : _g4_s142,
    _g4_s144 = (256u + sizeof(_g4_t_v489)) > _g4_s143 ? (256u + sizeof(_g4_t_v489)) : _g4_s143,
    _g4_s145 = (256u + sizeof(_g4_t_v490)) > _g4_s144 ? (256u + sizeof(_g4_t_v490)) : _g4_s144,
    _g4_s146 = (256u + sizeof(_g4_t_v491)) > _g4_s145 ? (256u + sizeof(_g4_t_v491)) : _g4_s145,
    _g4_s147 = (256u + sizeof(_g4_t_v492)) > _g4_s146 ? (256u + sizeof(_g4_t_v492)) : _g4_s146,
    _g4_s148 = (256u + sizeof(_g4_t_v493)) > _g4_s147 ? (256u + sizeof(_g4_t_v493)) : _g4_s147,
    _g4_s149 = (256u + sizeof(_g4_t_v494)) > _g4_s148 ? (256u + sizeof(_g4_t_v494)) : _g4_s148,
    _g4_s150 = (256u + sizeof(_g4_t_v495)) > _g4_s149 ? (256u + sizeof(_g4_t_v495)) : _g4_s149,
    _g4_s151 = (256u + sizeof(_g4_t_v496)) > _g4_s150 ? (256u + sizeof(_g4_t_v496)) : _g4_s150,
    _g4_s152 = (256u + sizeof(_g4_t_v497)) > _g4_s151 ? (256u + sizeof(_g4_t_v497)) : _g4_s151,
    _g4_s153 = (260u + sizeof(_g4_t_v498)) > _g4_s152 ? (260u + sizeof(_g4_t_v498)) : _g4_s152,
    _g4_s154 = (260u + sizeof(_g4_t_v499)) > _g4_s153 ? (260u + sizeof(_g4_t_v499)) : _g4_s153,
    _g4_s155 = (260u + sizeof(_g4_t_v500)) > _g4_s154 ? (260u + sizeof(_g4_t_v500)) : _g4_s154,
    _g4_s156 = (260u + sizeof(_g4_t_v501)) > _g4_s155 ? (260u + sizeof(_g4_t_v501)) : _g4_s155,
    _g4_s157 = (260u + sizeof(_g4_t_v502)) > _g4_s156 ? (260u + sizeof(_g4_t_v502)) : _g4_s156,
    _g4_s158 = (260u + sizeof(_g4_t_v503)) > _g4_s157 ? (260u + sizeof(_g4_t_v503)) : _g4_s157,
    _g4_s159 = (260u + sizeof(_g4_t_v504)) > _g4_s158 ? (260u + sizeof(_g4_t_v504)) : _g4_s158,
    _g4_s160 = (260u + sizeof(_g4_t_v505)) > _g4_s159 ? (260u + sizeof(_g4_t_v505)) : _g4_s159,
    _g4_s161 = (260u + sizeof(_g4_t_v506)) > _g4_s160 ? (260u + sizeof(_g4_t_v506)) : _g4_s160,
    _g4_s162 = (260u + sizeof(_g4_t_v507)) > _g4_s161 ? (260u + sizeof(_g4_t_v507)) : _g4_s161,
    _g4_s163 = (260u + sizeof(_g4_t_v508)) > _g4_s162 ? (260u + sizeof(_g4_t_v508)) : _g4_s162,
    _g4_s164 = (260u + sizeof(_g4_t_v509)) > _g4_s163 ? (260u + sizeof(_g4_t_v509)) : _g4_s163,
    _g4_s165 = (260u + sizeof(_g4_t_v510)) > _g4_s164 ? (260u + sizeof(_g4_t_v510)) : _g4_s164,
    _g4_s166 = (260u + sizeof(_g4_t_v511)) > _g4_s165 ? (260u + sizeof(_g4_t_v511)) : _g4_s165,
    _g4_s167 = (260u + sizeof(_g4_t_v512)) > _g4_s166 ? (260u + sizeof(_g4_t_v512)) : _g4_s166,
    _g4_s168 = (264u + sizeof(_g4_t_v513)) > _g4_s167 ? (264u + sizeof(_g4_t_v513)) : _g4_s167,
    _g4_s169 = (264u + sizeof(_g4_t_v514)) > _g4_s168 ? (264u + sizeof(_g4_t_v514)) : _g4_s168,
    _g4_s170 = (264u + sizeof(_g4_t_v515)) > _g4_s169 ? (264u + sizeof(_g4_t_v515)) : _g4_s169,
    _g4_s171 = (264u + sizeof(_g4_t_v516)) > _g4_s170 ? (264u + sizeof(_g4_t_v516)) : _g4_s170,
    _g4_s172 = (264u + sizeof(_g4_t_v517)) > _g4_s171 ? (264u + sizeof(_g4_t_v517)) : _g4_s171,
    _g4_s173 = (264u + sizeof(_g4_t_v518)) > _g4_s172 ? (264u + sizeof(_g4_t_v518)) : _g4_s172,
    _g4_s174 = (264u + sizeof(_g4_t_v519)) > _g4_s173 ? (264u + sizeof(_g4_t_v519)) : _g4_s173,
    _g4_s175 = (264u + sizeof(_g4_t_v520)) > _g4_s174 ? (264u + sizeof(_g4_t_v520)) : _g4_s174,
    _g4_s176 = (264u + sizeof(_g4_t_v521)) > _g4_s175 ? (264u + sizeof(_g4_t_v521)) : _g4_s175,
    _g4_s177 = (264u + sizeof(_g4_t_v522)) > _g4_s176 ? (264u + sizeof(_g4_t_v522)) : _g4_s176,
    _g4_s178 = (264u + sizeof(_g4_t_v523)) > _g4_s177 ? (264u + sizeof(_g4_t_v523)) : _g4_s177,
    _g4_s179 = (264u + sizeof(_g4_t_v524)) > _g4_s178 ? (264u + sizeof(_g4_t_v524)) : _g4_s178,
    _g4_s180 = (264u + sizeof(_g4_t_v525)) > _g4_s179 ? (264u + sizeof(_g4_t_v525)) : _g4_s179,
    _g4_s181 = (264u + sizeof(_g4_t_v526)) > _g4_s180 ? (264u + sizeof(_g4_t_v526)) : _g4_s180,
    _g4_s182 = (264u + sizeof(_g4_t_v527)) > _g4_s181 ? (264u + sizeof(_g4_t_v527)) : _g4_s181,
    _g4_s183 = (264u + sizeof(_g4_t_v528)) > _g4_s182 ? (264u + sizeof(_g4_t_v528)) : _g4_s182,
    _g4_s184 = (268u + sizeof(_g4_t_v529)) > _g4_s183 ? (268u + sizeof(_g4_t_v529)) : _g4_s183,
    _g4_s185 = (268u + sizeof(_g4_t_v530)) > _g4_s184 ? (268u + sizeof(_g4_t_v530)) : _g4_s184,
    _g4_s186 = (268u + sizeof(_g4_t_v531)) > _g4_s185 ? (268u + sizeof(_g4_t_v531)) : _g4_s185,
    _g4_s187 = (268u + sizeof(_g4_t_v532)) > _g4_s186 ? (268u + sizeof(_g4_t_v532)) : _g4_s186,
    _g4_s188 = (268u + sizeof(_g4_t_v533)) > _g4_s187 ? (268u + sizeof(_g4_t_v533)) : _g4_s187,
    _g4_s189 = (268u + sizeof(_g4_t_v534)) > _g4_s188 ? (268u + sizeof(_g4_t_v534)) : _g4_s188,
    _g4_s190 = (268u + sizeof(_g4_t_v535)) > _g4_s189 ? (268u + sizeof(_g4_t_v535)) : _g4_s189,
    _g4_s191 = (268u + sizeof(_g4_t_v536)) > _g4_s190 ? (268u + sizeof(_g4_t_v536)) : _g4_s190,
    _g4_s192 = (268u + sizeof(_g4_t_v537)) > _g4_s191 ? (268u + sizeof(_g4_t_v537)) : _g4_s191,
    _g4_s193 = (268u + sizeof(_g4_t_v538)) > _g4_s192 ? (268u + sizeof(_g4_t_v538)) : _g4_s192,
    _g4_s194 = (268u + sizeof(_g4_t_v539)) > _g4_s193 ? (268u + sizeof(_g4_t_v539)) : _g4_s193,
    _g4_s195 = (268u + sizeof(_g4_t_v540)) > _g4_s194 ? (268u + sizeof(_g4_t_v540)) : _g4_s194,
    _g4_s196 = (268u + sizeof(_g4_t_v541)) > _g4_s195 ? (268u + sizeof(_g4_t_v541)) : _g4_s195,
    _g4_s197 = (268u + sizeof(_g4_t_v542)) > _g4_s196 ? (268u + sizeof(_g4_t_v542)) : _g4_s196,
    _g4_s198 = (272u + sizeof(_g4_t_v543)) > _g4_s197 ? (272u + sizeof(_g4_t_v543)) : _g4_s197,
    _g4_s199 = (272u + sizeof(_g4_t_v544)) > _g4_s198 ? (272u + sizeof(_g4_t_v544)) : _g4_s198,
    _g4_s200 = (276u + sizeof(_g4_t_v545)) > _g4_s199 ? (276u + sizeof(_g4_t_v545)) : _g4_s199,
    _g4_s201 = (276u + sizeof(_g4_t_v546)) > _g4_s200 ? (276u + sizeof(_g4_t_v546)) : _g4_s200,
    _g4_s202 = (280u + sizeof(_g4_t_v547)) > _g4_s201 ? (280u + sizeof(_g4_t_v547)) : _g4_s201,
    _g4_s203 = (280u + sizeof(_g4_t_v548)) > _g4_s202 ? (280u + sizeof(_g4_t_v548)) : _g4_s202,
    _g4_s204 = (288u + sizeof(_g4_t_v549)) > _g4_s203 ? (288u + sizeof(_g4_t_v549)) : _g4_s203,
    _g4_s205 = (292u + sizeof(_g4_t_v550)) > _g4_s204 ? (292u + sizeof(_g4_t_v550)) : _g4_s204,
    _g4_s206 = (296u + sizeof(_g4_t_v551)) > _g4_s205 ? (296u + sizeof(_g4_t_v551)) : _g4_s205,
    _g4_s207 = (300u + sizeof(_g4_t_v552)) > _g4_s206 ? (300u + sizeof(_g4_t_v552)) : _g4_s206,
    _g4_s208 = (304u + sizeof(_g4_t_v553)) > _g4_s207 ? (304u + sizeof(_g4_t_v553)) : _g4_s207,
    _g4_s209 = (308u + sizeof(_g4_t_v554)) > _g4_s208 ? (308u + sizeof(_g4_t_v554)) : _g4_s208,
    _g4_s210 = (312u + sizeof(_g4_t_v555)) > _g4_s209 ? (312u + sizeof(_g4_t_v555)) : _g4_s209,
    _g4_s211 = (316u + sizeof(_g4_t_v556)) > _g4_s210 ? (316u + sizeof(_g4_t_v556)) : _g4_s210,
    _g4_s212 = (320u + sizeof(_g4_t_v557)) > _g4_s211 ? (320u + sizeof(_g4_t_v557)) : _g4_s211,
    _g4_s213 = (324u + sizeof(_g4_t_v558)) > _g4_s212 ? (324u + sizeof(_g4_t_v558)) : _g4_s212,
    _g4_s214 = (328u + sizeof(_g4_t_v559)) > _g4_s213 ? (328u + sizeof(_g4_t_v559)) : _g4_s213,
    _g4_s215 = (332u + sizeof(_g4_t_v560)) > _g4_s214 ? (332u + sizeof(_g4_t_v560)) : _g4_s214,
    _g4_s216 = (336u + sizeof(_g4_t_v561)) > _g4_s215 ? (336u + sizeof(_g4_t_v561)) : _g4_s215,
    _g4_s217 = (340u + sizeof(_g4_t_v562)) > _g4_s216 ? (340u + sizeof(_g4_t_v562)) : _g4_s216,
    _g4_s218 = (344u + sizeof(_g4_t_v563)) > _g4_s217 ? (344u + sizeof(_g4_t_v563)) : _g4_s217,
    _g4_s219 = (348u + sizeof(_g4_t_v564)) > _g4_s218 ? (348u + sizeof(_g4_t_v564)) : _g4_s218,
    _g4_s220 = (352u + sizeof(_g4_t_v565)) > _g4_s219 ? (352u + sizeof(_g4_t_v565)) : _g4_s219,
    _g4_s221 = (388u + sizeof(_g4_t_v566)) > _g4_s220 ? (388u + sizeof(_g4_t_v566)) : _g4_s220,
    _g4_s222 = (408u + sizeof(_g4_t_v567)) > _g4_s221 ? (408u + sizeof(_g4_t_v567)) : _g4_s221,
    _g4_s223 = (420u + sizeof(_g4_t_v568)) > _g4_s222 ? (420u + sizeof(_g4_t_v568)) : _g4_s222,
    _g4_s224 = (768u + sizeof(_g4_t_v569)) > _g4_s223 ? (768u + sizeof(_g4_t_v569)) : _g4_s223,
    _g4_s225 = (772u + sizeof(_g4_t_v570)) > _g4_s224 ? (772u + sizeof(_g4_t_v570)) : _g4_s224,
    _g4_s226 = (776u + sizeof(_g4_t_v571)) > _g4_s225 ? (776u + sizeof(_g4_t_v571)) : _g4_s225,
    _g4_s227 = (780u + sizeof(_g4_t_v572)) > _g4_s226 ? (780u + sizeof(_g4_t_v572)) : _g4_s226,
    _g4_s228 = (784u + sizeof(_g4_t_v573)) > _g4_s227 ? (784u + sizeof(_g4_t_v573)) : _g4_s227,
    _g4_s229 = (788u + sizeof(_g4_t_v574)) > _g4_s228 ? (788u + sizeof(_g4_t_v574)) : _g4_s228,
    _g4_s230 = (792u + sizeof(_g4_t_v575)) > _g4_s229 ? (792u + sizeof(_g4_t_v575)) : _g4_s229,
    _g4_s231 = (796u + sizeof(_g4_t_v576)) > _g4_s230 ? (796u + sizeof(_g4_t_v576)) : _g4_s230
  };
  alignas(16) uint8_t _g4_sf[_g4_s231];
  _g4_t_v346 &v346 = *reinterpret_cast<_g4_t_v346 *>(_g4_sf + 12u);
  _g4_t_v347 &v347 = *reinterpret_cast<_g4_t_v347 *>(_g4_sf + 24u);
  _g4_t_v348 &v348 = *reinterpret_cast<_g4_t_v348 *>(_g4_sf + 28u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 32u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 36u);
  _g4_t_v351 &v351 = *reinterpret_cast<_g4_t_v351 *>(_g4_sf + 40u);
  _g4_t_v352 &v352 = *reinterpret_cast<_g4_t_v352 *>(_g4_sf + 44u);
  _g4_t_v353 &v353 = *reinterpret_cast<_g4_t_v353 *>(_g4_sf + 48u);
  _g4_t_v354 &v354 = *reinterpret_cast<_g4_t_v354 *>(_g4_sf + 72u);
  _g4_t_v355 &v355 = *reinterpret_cast<_g4_t_v355 *>(_g4_sf + 84u);
  _g4_t_v356 &v356 = *reinterpret_cast<_g4_t_v356 *>(_g4_sf + 88u);
  _g4_t_v357 &v357 = *reinterpret_cast<_g4_t_v357 *>(_g4_sf + 92u);
  _g4_t_v358 &v358 = *reinterpret_cast<_g4_t_v358 *>(_g4_sf + 96u);
  _g4_t_v359 &v359 = *reinterpret_cast<_g4_t_v359 *>(_g4_sf + 100u);
  _g4_t_v360 &v360 = *reinterpret_cast<_g4_t_v360 *>(_g4_sf + 104u);
  _g4_t_v361 &v361 = *reinterpret_cast<_g4_t_v361 *>(_g4_sf + 108u);
  _g4_t_v362 &v362 = *reinterpret_cast<_g4_t_v362 *>(_g4_sf + 112u);
  _g4_t_v363 &v363 = *reinterpret_cast<_g4_t_v363 *>(_g4_sf + 116u);
  _g4_t_v364 &v364 = *reinterpret_cast<_g4_t_v364 *>(_g4_sf + 120u);
  _g4_t_v365 &v365 = *reinterpret_cast<_g4_t_v365 *>(_g4_sf + 124u);
  _g4_t_v366 &v366 = *reinterpret_cast<_g4_t_v366 *>(_g4_sf + 128u);
  _g4_t_v367 &v367 = *reinterpret_cast<_g4_t_v367 *>(_g4_sf + 132u);
  _g4_t_v368 &v368 = *reinterpret_cast<_g4_t_v368 *>(_g4_sf + 136u);
  _g4_t_v369 &v369 = *reinterpret_cast<_g4_t_v369 *>(_g4_sf + 140u);
  _g4_t_v370 &v370 = *reinterpret_cast<_g4_t_v370 *>(_g4_sf + 144u);
  _g4_t_v371 &v371 = *reinterpret_cast<_g4_t_v371 *>(_g4_sf + 148u);
  _g4_t_v372 &v372 = *reinterpret_cast<_g4_t_v372 *>(_g4_sf + 152u);
  _g4_t_v373 &v373 = *reinterpret_cast<_g4_t_v373 *>(_g4_sf + 156u);
  _g4_t_v374 &v374 = *reinterpret_cast<_g4_t_v374 *>(_g4_sf + 160u);
  _g4_t_v375 &v375 = *reinterpret_cast<_g4_t_v375 *>(_g4_sf + 164u);
  _g4_t_v376 &v376 = *reinterpret_cast<_g4_t_v376 *>(_g4_sf + 168u);
  _g4_t_v377 &v377 = *reinterpret_cast<_g4_t_v377 *>(_g4_sf + 168u);
  _g4_t_v378 &v378 = *reinterpret_cast<_g4_t_v378 *>(_g4_sf + 184u);
  _g4_t_v379 &v379 = *reinterpret_cast<_g4_t_v379 *>(_g4_sf + 188u);
  _g4_t_v380 &v380 = *reinterpret_cast<_g4_t_v380 *>(_g4_sf + 192u);
  _g4_t_v381 &v381 = *reinterpret_cast<_g4_t_v381 *>(_g4_sf + 196u);
  _g4_t_v382 &v382 = *reinterpret_cast<_g4_t_v382 *>(_g4_sf + 200u);
  _g4_t_v383 &v383 = *reinterpret_cast<_g4_t_v383 *>(_g4_sf + 204u);
  _g4_t_v384 &v384 = *reinterpret_cast<_g4_t_v384 *>(_g4_sf + 204u);
  _g4_t_v385 &v385 = *reinterpret_cast<_g4_t_v385 *>(_g4_sf + 204u);
  _g4_t_v386 &v386 = *reinterpret_cast<_g4_t_v386 *>(_g4_sf + 204u);
  _g4_t_v387 &v387 = *reinterpret_cast<_g4_t_v387 *>(_g4_sf + 204u);
  _g4_t_v388 &v388 = *reinterpret_cast<_g4_t_v388 *>(_g4_sf + 208u);
  _g4_t_v389 &v389 = *reinterpret_cast<_g4_t_v389 *>(_g4_sf + 208u);
  _g4_t_v390 &v390 = *reinterpret_cast<_g4_t_v390 *>(_g4_sf + 208u);
  _g4_t_v391 &v391 = *reinterpret_cast<_g4_t_v391 *>(_g4_sf + 208u);
  _g4_t_v392 &v392 = *reinterpret_cast<_g4_t_v392 *>(_g4_sf + 208u);
  _g4_t_v393 &v393 = *reinterpret_cast<_g4_t_v393 *>(_g4_sf + 212u);
  _g4_t_v394 &v394 = *reinterpret_cast<_g4_t_v394 *>(_g4_sf + 212u);
  _g4_t_v395 &v395 = *reinterpret_cast<_g4_t_v395 *>(_g4_sf + 212u);
  _g4_t_v396 &v396 = *reinterpret_cast<_g4_t_v396 *>(_g4_sf + 212u);
  _g4_t_v397 &v397 = *reinterpret_cast<_g4_t_v397 *>(_g4_sf + 212u);
  _g4_t_v398 &v398 = *reinterpret_cast<_g4_t_v398 *>(_g4_sf + 212u);
  _g4_t_v399 &v399 = *reinterpret_cast<_g4_t_v399 *>(_g4_sf + 216u);
  _g4_t_v400 &v400 = *reinterpret_cast<_g4_t_v400 *>(_g4_sf + 216u);
  _g4_t_v401 &v401 = *reinterpret_cast<_g4_t_v401 *>(_g4_sf + 216u);
  _g4_t_v402 &v402 = *reinterpret_cast<_g4_t_v402 *>(_g4_sf + 216u);
  _g4_t_v403 &v403 = *reinterpret_cast<_g4_t_v403 *>(_g4_sf + 216u);
  _g4_t_v404 &v404 = *reinterpret_cast<_g4_t_v404 *>(_g4_sf + 216u);
  _g4_t_v405 &v405 = *reinterpret_cast<_g4_t_v405 *>(_g4_sf + 220u);
  _g4_t_v406 &v406 = *reinterpret_cast<_g4_t_v406 *>(_g4_sf + 220u);
  _g4_t_v407 &v407 = *reinterpret_cast<_g4_t_v407 *>(_g4_sf + 220u);
  _g4_t_v408 &v408 = *reinterpret_cast<_g4_t_v408 *>(_g4_sf + 220u);
  _g4_t_v409 &v409 = *reinterpret_cast<_g4_t_v409 *>(_g4_sf + 220u);
  _g4_t_v410 &v410 = *reinterpret_cast<_g4_t_v410 *>(_g4_sf + 220u);
  _g4_t_v411 &v411 = *reinterpret_cast<_g4_t_v411 *>(_g4_sf + 220u);
  _g4_t_v412 &v412 = *reinterpret_cast<_g4_t_v412 *>(_g4_sf + 220u);
  _g4_t_v413 &v413 = *reinterpret_cast<_g4_t_v413 *>(_g4_sf + 224u);
  _g4_t_v414 &v414 = *reinterpret_cast<_g4_t_v414 *>(_g4_sf + 224u);
  _g4_t_v415 &v415 = *reinterpret_cast<_g4_t_v415 *>(_g4_sf + 224u);
  _g4_t_v416 &v416 = *reinterpret_cast<_g4_t_v416 *>(_g4_sf + 224u);
  _g4_t_v417 &v417 = *reinterpret_cast<_g4_t_v417 *>(_g4_sf + 224u);
  _g4_t_v418 &v418 = *reinterpret_cast<_g4_t_v418 *>(_g4_sf + 224u);
  _g4_t_v419 &v419 = *reinterpret_cast<_g4_t_v419 *>(_g4_sf + 228u);
  _g4_t_v420 &v420 = *reinterpret_cast<_g4_t_v420 *>(_g4_sf + 228u);
  _g4_t_v421 &v421 = *reinterpret_cast<_g4_t_v421 *>(_g4_sf + 228u);
  _g4_t_v422 &v422 = *reinterpret_cast<_g4_t_v422 *>(_g4_sf + 228u);
  _g4_t_v423 &v423 = *reinterpret_cast<_g4_t_v423 *>(_g4_sf + 228u);
  _g4_t_v424 &v424 = *reinterpret_cast<_g4_t_v424 *>(_g4_sf + 228u);
  _g4_t_v425 &v425 = *reinterpret_cast<_g4_t_v425 *>(_g4_sf + 228u);
  _g4_t_v426 &v426 = *reinterpret_cast<_g4_t_v426 *>(_g4_sf + 232u);
  _g4_t_v427 &v427 = *reinterpret_cast<_g4_t_v427 *>(_g4_sf + 232u);
  _g4_t_v428 &v428 = *reinterpret_cast<_g4_t_v428 *>(_g4_sf + 232u);
  _g4_t_v429 &v429 = *reinterpret_cast<_g4_t_v429 *>(_g4_sf + 232u);
  _g4_t_v430 &v430 = *reinterpret_cast<_g4_t_v430 *>(_g4_sf + 232u);
  _g4_t_v431 &v431 = *reinterpret_cast<_g4_t_v431 *>(_g4_sf + 232u);
  _g4_t_v432 &v432 = *reinterpret_cast<_g4_t_v432 *>(_g4_sf + 236u);
  _g4_t_v433 &v433 = *reinterpret_cast<_g4_t_v433 *>(_g4_sf + 236u);
  _g4_t_v434 &v434 = *reinterpret_cast<_g4_t_v434 *>(_g4_sf + 236u);
  _g4_t_v435 &v435 = *reinterpret_cast<_g4_t_v435 *>(_g4_sf + 236u);
  _g4_t_v436 &v436 = *reinterpret_cast<_g4_t_v436 *>(_g4_sf + 236u);
  _g4_t_v437 &v437 = *reinterpret_cast<_g4_t_v437 *>(_g4_sf + 236u);
  _g4_t_v438 &v438 = *reinterpret_cast<_g4_t_v438 *>(_g4_sf + 236u);
  _g4_t_v439 &v439 = *reinterpret_cast<_g4_t_v439 *>(_g4_sf + 236u);
  _g4_t_v440 &v440 = *reinterpret_cast<_g4_t_v440 *>(_g4_sf + 240u);
  _g4_t_v441 &v441 = *reinterpret_cast<_g4_t_v441 *>(_g4_sf + 240u);
  _g4_t_v442 &v442 = *reinterpret_cast<_g4_t_v442 *>(_g4_sf + 240u);
  _g4_t_v443 &v443 = *reinterpret_cast<_g4_t_v443 *>(_g4_sf + 240u);
  _g4_t_v444 &v444 = *reinterpret_cast<_g4_t_v444 *>(_g4_sf + 240u);
  _g4_t_v445 &v445 = *reinterpret_cast<_g4_t_v445 *>(_g4_sf + 240u);
  _g4_t_v446 &v446 = *reinterpret_cast<_g4_t_v446 *>(_g4_sf + 240u);
  _g4_t_v447 &v447 = *reinterpret_cast<_g4_t_v447 *>(_g4_sf + 240u);
  _g4_t_v448 &v448 = *reinterpret_cast<_g4_t_v448 *>(_g4_sf + 240u);
  _g4_t_v449 &v449 = *reinterpret_cast<_g4_t_v449 *>(_g4_sf + 240u);
  _g4_t_v450 &v450 = *reinterpret_cast<_g4_t_v450 *>(_g4_sf + 240u);
  _g4_t_v451 &v451 = *reinterpret_cast<_g4_t_v451 *>(_g4_sf + 240u);
  _g4_t_v452 &v452 = *reinterpret_cast<_g4_t_v452 *>(_g4_sf + 240u);
  _g4_t_v453 &v453 = *reinterpret_cast<_g4_t_v453 *>(_g4_sf + 244u);
  _g4_t_v454 &v454 = *reinterpret_cast<_g4_t_v454 *>(_g4_sf + 244u);
  _g4_t_v455 &v455 = *reinterpret_cast<_g4_t_v455 *>(_g4_sf + 244u);
  _g4_t_v456 &v456 = *reinterpret_cast<_g4_t_v456 *>(_g4_sf + 244u);
  _g4_t_v457 &v457 = *reinterpret_cast<_g4_t_v457 *>(_g4_sf + 244u);
  _g4_t_v458 &v458 = *reinterpret_cast<_g4_t_v458 *>(_g4_sf + 244u);
  _g4_t_v459 &v459 = *reinterpret_cast<_g4_t_v459 *>(_g4_sf + 244u);
  _g4_t_v460 &v460 = *reinterpret_cast<_g4_t_v460 *>(_g4_sf + 244u);
  _g4_t_v461 &v461 = *reinterpret_cast<_g4_t_v461 *>(_g4_sf + 244u);
  _g4_t_v462 &v462 = *reinterpret_cast<_g4_t_v462 *>(_g4_sf + 244u);
  _g4_t_v463 &v463 = *reinterpret_cast<_g4_t_v463 *>(_g4_sf + 244u);
  _g4_t_v464 &v464 = *reinterpret_cast<_g4_t_v464 *>(_g4_sf + 248u);
  _g4_t_v465 &v465 = *reinterpret_cast<_g4_t_v465 *>(_g4_sf + 248u);
  _g4_t_v466 &v466 = *reinterpret_cast<_g4_t_v466 *>(_g4_sf + 248u);
  _g4_t_v467 &v467 = *reinterpret_cast<_g4_t_v467 *>(_g4_sf + 248u);
  _g4_t_v468 &v468 = *reinterpret_cast<_g4_t_v468 *>(_g4_sf + 248u);
  _g4_t_v469 &v469 = *reinterpret_cast<_g4_t_v469 *>(_g4_sf + 248u);
  _g4_t_v470 &v470 = *reinterpret_cast<_g4_t_v470 *>(_g4_sf + 248u);
  _g4_t_v471 &v471 = *reinterpret_cast<_g4_t_v471 *>(_g4_sf + 248u);
  _g4_t_v472 &v472 = *reinterpret_cast<_g4_t_v472 *>(_g4_sf + 248u);
  _g4_t_v473 &v473 = *reinterpret_cast<_g4_t_v473 *>(_g4_sf + 248u);
  _g4_t_v474 &v474 = *reinterpret_cast<_g4_t_v474 *>(_g4_sf + 248u);
  _g4_t_v475 &v475 = *reinterpret_cast<_g4_t_v475 *>(_g4_sf + 248u);
  _g4_t_v476 &v476 = *reinterpret_cast<_g4_t_v476 *>(_g4_sf + 252u);
  _g4_t_v477 &v477 = *reinterpret_cast<_g4_t_v477 *>(_g4_sf + 252u);
  _g4_t_v478 &v478 = *reinterpret_cast<_g4_t_v478 *>(_g4_sf + 252u);
  _g4_t_v479 &v479 = *reinterpret_cast<_g4_t_v479 *>(_g4_sf + 252u);
  _g4_t_v480 &v480 = *reinterpret_cast<_g4_t_v480 *>(_g4_sf + 252u);
  _g4_t_v481 &v481 = *reinterpret_cast<_g4_t_v481 *>(_g4_sf + 252u);
  _g4_t_v482 &v482 = *reinterpret_cast<_g4_t_v482 *>(_g4_sf + 252u);
  _g4_t_v483 &v483 = *reinterpret_cast<_g4_t_v483 *>(_g4_sf + 252u);
  _g4_t_v484 &v484 = *reinterpret_cast<_g4_t_v484 *>(_g4_sf + 252u);
  _g4_t_v485 &v485 = *reinterpret_cast<_g4_t_v485 *>(_g4_sf + 252u);
  _g4_t_v486 &v486 = *reinterpret_cast<_g4_t_v486 *>(_g4_sf + 252u);
  _g4_t_v487 &v487 = *reinterpret_cast<_g4_t_v487 *>(_g4_sf + 252u);
  _g4_t_v488 &v488 = *reinterpret_cast<_g4_t_v488 *>(_g4_sf + 256u);
  _g4_t_v489 &v489 = *reinterpret_cast<_g4_t_v489 *>(_g4_sf + 256u);
  _g4_t_v490 &v490 = *reinterpret_cast<_g4_t_v490 *>(_g4_sf + 256u);
  _g4_t_v491 &v491 = *reinterpret_cast<_g4_t_v491 *>(_g4_sf + 256u);
  _g4_t_v492 &v492 = *reinterpret_cast<_g4_t_v492 *>(_g4_sf + 256u);
  _g4_t_v493 &v493 = *reinterpret_cast<_g4_t_v493 *>(_g4_sf + 256u);
  _g4_t_v494 &v494 = *reinterpret_cast<_g4_t_v494 *>(_g4_sf + 256u);
  _g4_t_v495 &v495 = *reinterpret_cast<_g4_t_v495 *>(_g4_sf + 256u);
  _g4_t_v496 &v496 = *reinterpret_cast<_g4_t_v496 *>(_g4_sf + 256u);
  _g4_t_v497 &v497 = *reinterpret_cast<_g4_t_v497 *>(_g4_sf + 256u);
  _g4_t_v498 &v498 = *reinterpret_cast<_g4_t_v498 *>(_g4_sf + 260u);
  _g4_t_v499 &v499 = *reinterpret_cast<_g4_t_v499 *>(_g4_sf + 260u);
  _g4_t_v500 &v500 = *reinterpret_cast<_g4_t_v500 *>(_g4_sf + 260u);
  _g4_t_v501 &v501 = *reinterpret_cast<_g4_t_v501 *>(_g4_sf + 260u);
  _g4_t_v502 &v502 = *reinterpret_cast<_g4_t_v502 *>(_g4_sf + 260u);
  _g4_t_v503 &v503 = *reinterpret_cast<_g4_t_v503 *>(_g4_sf + 260u);
  _g4_t_v504 &v504 = *reinterpret_cast<_g4_t_v504 *>(_g4_sf + 260u);
  _g4_t_v505 &v505 = *reinterpret_cast<_g4_t_v505 *>(_g4_sf + 260u);
  _g4_t_v506 &v506 = *reinterpret_cast<_g4_t_v506 *>(_g4_sf + 260u);
  _g4_t_v507 &v507 = *reinterpret_cast<_g4_t_v507 *>(_g4_sf + 260u);
  _g4_t_v508 &v508 = *reinterpret_cast<_g4_t_v508 *>(_g4_sf + 260u);
  _g4_t_v509 &v509 = *reinterpret_cast<_g4_t_v509 *>(_g4_sf + 260u);
  _g4_t_v510 &v510 = *reinterpret_cast<_g4_t_v510 *>(_g4_sf + 260u);
  _g4_t_v511 &v511 = *reinterpret_cast<_g4_t_v511 *>(_g4_sf + 260u);
  _g4_t_v512 &v512 = *reinterpret_cast<_g4_t_v512 *>(_g4_sf + 260u);
  _g4_t_v513 &v513 = *reinterpret_cast<_g4_t_v513 *>(_g4_sf + 264u);
  _g4_t_v514 &v514 = *reinterpret_cast<_g4_t_v514 *>(_g4_sf + 264u);
  _g4_t_v515 &v515 = *reinterpret_cast<_g4_t_v515 *>(_g4_sf + 264u);
  _g4_t_v516 &v516 = *reinterpret_cast<_g4_t_v516 *>(_g4_sf + 264u);
  _g4_t_v517 &v517 = *reinterpret_cast<_g4_t_v517 *>(_g4_sf + 264u);
  _g4_t_v518 &v518 = *reinterpret_cast<_g4_t_v518 *>(_g4_sf + 264u);
  _g4_t_v519 &v519 = *reinterpret_cast<_g4_t_v519 *>(_g4_sf + 264u);
  _g4_t_v520 &v520 = *reinterpret_cast<_g4_t_v520 *>(_g4_sf + 264u);
  _g4_t_v521 &v521 = *reinterpret_cast<_g4_t_v521 *>(_g4_sf + 264u);
  _g4_t_v522 &v522 = *reinterpret_cast<_g4_t_v522 *>(_g4_sf + 264u);
  _g4_t_v523 &v523 = *reinterpret_cast<_g4_t_v523 *>(_g4_sf + 264u);
  _g4_t_v524 &v524 = *reinterpret_cast<_g4_t_v524 *>(_g4_sf + 264u);
  _g4_t_v525 &v525 = *reinterpret_cast<_g4_t_v525 *>(_g4_sf + 264u);
  _g4_t_v526 &v526 = *reinterpret_cast<_g4_t_v526 *>(_g4_sf + 264u);
  _g4_t_v527 &v527 = *reinterpret_cast<_g4_t_v527 *>(_g4_sf + 264u);
  _g4_t_v528 &v528 = *reinterpret_cast<_g4_t_v528 *>(_g4_sf + 264u);
  _g4_t_v529 &v529 = *reinterpret_cast<_g4_t_v529 *>(_g4_sf + 268u);
  _g4_t_v530 &v530 = *reinterpret_cast<_g4_t_v530 *>(_g4_sf + 268u);
  _g4_t_v531 &v531 = *reinterpret_cast<_g4_t_v531 *>(_g4_sf + 268u);
  _g4_t_v532 &v532 = *reinterpret_cast<_g4_t_v532 *>(_g4_sf + 268u);
  _g4_t_v533 &v533 = *reinterpret_cast<_g4_t_v533 *>(_g4_sf + 268u);
  _g4_t_v534 &v534 = *reinterpret_cast<_g4_t_v534 *>(_g4_sf + 268u);
  _g4_t_v535 &v535 = *reinterpret_cast<_g4_t_v535 *>(_g4_sf + 268u);
  _g4_t_v536 &v536 = *reinterpret_cast<_g4_t_v536 *>(_g4_sf + 268u);
  _g4_t_v537 &v537 = *reinterpret_cast<_g4_t_v537 *>(_g4_sf + 268u);
  _g4_t_v538 &v538 = *reinterpret_cast<_g4_t_v538 *>(_g4_sf + 268u);
  _g4_t_v539 &v539 = *reinterpret_cast<_g4_t_v539 *>(_g4_sf + 268u);
  _g4_t_v540 &v540 = *reinterpret_cast<_g4_t_v540 *>(_g4_sf + 268u);
  _g4_t_v541 &v541 = *reinterpret_cast<_g4_t_v541 *>(_g4_sf + 268u);
  _g4_t_v542 &v542 = *reinterpret_cast<_g4_t_v542 *>(_g4_sf + 268u);
  _g4_t_v543 &v543 = *reinterpret_cast<_g4_t_v543 *>(_g4_sf + 272u);
  _g4_t_v544 &v544 = *reinterpret_cast<_g4_t_v544 *>(_g4_sf + 272u);
  _g4_t_v545 &v545 = *reinterpret_cast<_g4_t_v545 *>(_g4_sf + 276u);
  _g4_t_v546 &v546 = *reinterpret_cast<_g4_t_v546 *>(_g4_sf + 276u);
  _g4_t_v547 &v547 = *reinterpret_cast<_g4_t_v547 *>(_g4_sf + 280u);
  _g4_t_v548 &v548 = *reinterpret_cast<_g4_t_v548 *>(_g4_sf + 280u);
  _g4_t_v549 &v549 = *reinterpret_cast<_g4_t_v549 *>(_g4_sf + 288u);
  _g4_t_v550 &v550 = *reinterpret_cast<_g4_t_v550 *>(_g4_sf + 292u);
  _g4_t_v551 &v551 = *reinterpret_cast<_g4_t_v551 *>(_g4_sf + 296u);
  _g4_t_v552 &v552 = *reinterpret_cast<_g4_t_v552 *>(_g4_sf + 300u);
  _g4_t_v553 &v553 = *reinterpret_cast<_g4_t_v553 *>(_g4_sf + 304u);
  _g4_t_v554 &v554 = *reinterpret_cast<_g4_t_v554 *>(_g4_sf + 308u);
  _g4_t_v555 &v555 = *reinterpret_cast<_g4_t_v555 *>(_g4_sf + 312u);
  _g4_t_v556 &v556 = *reinterpret_cast<_g4_t_v556 *>(_g4_sf + 316u);
  _g4_t_v557 &v557 = *reinterpret_cast<_g4_t_v557 *>(_g4_sf + 320u);
  _g4_t_v558 &v558 = *reinterpret_cast<_g4_t_v558 *>(_g4_sf + 324u);
  _g4_t_v559 &v559 = *reinterpret_cast<_g4_t_v559 *>(_g4_sf + 328u);
  _g4_t_v560 &v560 = *reinterpret_cast<_g4_t_v560 *>(_g4_sf + 332u);
  _g4_t_v561 &v561 = *reinterpret_cast<_g4_t_v561 *>(_g4_sf + 336u);
  _g4_t_v562 &v562 = *reinterpret_cast<_g4_t_v562 *>(_g4_sf + 340u);
  _g4_t_v563 &v563 = *reinterpret_cast<_g4_t_v563 *>(_g4_sf + 344u);
  _g4_t_v564 &v564 = *reinterpret_cast<_g4_t_v564 *>(_g4_sf + 348u);
  _g4_t_v565 &v565 = *reinterpret_cast<_g4_t_v565 *>(_g4_sf + 352u);
  _g4_t_v566 &v566 = *reinterpret_cast<_g4_t_v566 *>(_g4_sf + 388u);
  _g4_t_v567 &v567 = *reinterpret_cast<_g4_t_v567 *>(_g4_sf + 408u);
  _g4_t_v568 &v568 = *reinterpret_cast<_g4_t_v568 *>(_g4_sf + 420u);
  _g4_t_v569 &v569 = *reinterpret_cast<_g4_t_v569 *>(_g4_sf + 768u);
  _g4_t_v570 &v570 = *reinterpret_cast<_g4_t_v570 *>(_g4_sf + 772u);
  _g4_t_v571 &v571 = *reinterpret_cast<_g4_t_v571 *>(_g4_sf + 776u);
  _g4_t_v572 &v572 = *reinterpret_cast<_g4_t_v572 *>(_g4_sf + 780u);
  _g4_t_v573 &v573 = *reinterpret_cast<_g4_t_v573 *>(_g4_sf + 784u);
  _g4_t_v574 &v574 = *reinterpret_cast<_g4_t_v574 *>(_g4_sf + 788u);
  _g4_t_v575 &v575 = *reinterpret_cast<_g4_t_v575 *>(_g4_sf + 792u);
  _g4_t_v576 &v576 = *reinterpret_cast<_g4_t_v576 *>(_g4_sf + 796u);

  result = a1;
  v354 = 0.5 * *(float *)(a1 + 12);
  if ( a3 > 0 )
  {
    for ( i = 0; i != a3; result = ++i )
    {
      v4 = *(uint32_t *)(a2 + 4 * i);
      v355 = v4;
      v5 = *(uint8_t **)(v4 + 16);
      if ( *(uint16_t *)(v4 + 82) != 0 && v5[8] != 16 )
      {
        v357 = (*(int (**)(uint32_t))(*(uint32_t *)v5 + 64))(*(uint32_t *)(v4 + 16));
        v351 = G4_VCALL<int>(v357, 8);
        address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
        v6 = *address;
        v348 = (32 * v351 + 127) & 0xFFFFFF80;
        v7 = *((char **)*address + 3);
        v352 = v7;
        if ( v348 <= *((uint32_t *)*address + 2) && (unsigned int)(uintptr_t)(&v7[v348]) <= *((uint32_t *)v6 + 4) )
          *((uint32_t *)v6 + 3) = (uint32_t)(uintptr_t)(&v7[v348]);
        else
          v352 = (char *)hkLifoAllocator::allocateFromNewSlab(v6, v348);
        v8 = *address;
        v347 = (4 * v351 + 127) & 0xFFFFFF80;
        v353 = *((char **)*address + 3);
        if ( v347 <= *((uint32_t *)*address + 2)
          && (unsigned int)(v9 = v347 + *((uint32_t *)*address + 3)) <= *((uint32_t *)v8 + 4) )
        {
          *((uint32_t *)v8 + 3) = v9;
        }
        else
        {
          v353 = (char *)hkLifoAllocator::allocateFromNewSlab(v8, v347);
        }
        hkAabbUtil::initOffsetAabbInput((hkTransformf::Self *)(v355 + 240), (int)(uintptr_t)(v565));
        v373 = 3.40282e38f;
        v362 = 3.40282e38f;
        v370 = 3.40282e38f;
        v363 = 3.40282e38f;
        v361 = -3.40282e38f;
        v360 = -3.40282e38f;
        v359 = -3.40282e38f;
        v369 = -3.40282e38f;
        v378 = G4_VCALL<int>(v357, 12);
        if ( v378 != -1 )
        {
          v356 = v353;
          v358 = 3.40282e38f;
          v388 = v352;
          v371 = -3.40282e38f;
          v364 = -3.40282e38f;
          v365 = -3.40282e38f;
          v366 = -3.40282e38f;
          v372 = 3.40282e38f;
          v367 = 3.40282e38f;
          v368 = 3.40282e38f;
          while ( 1 )
          {
            v10 = G4_VCALL<int>(v357, 24, v378, &v569, v346);
            G4_VCALL<void>(v10, 24, v355 + 240, COERCE_FLOAT(LODWORD(v354)), &v549);
g4_m128_raw(v11) = LODWORD(v550);
            v376 = (float)(v553 - v549) * 0.5;
            *(float *)g4_m128_ptr<int32_t>(v11) = v550 - v554;
            v375 = (float)(v554 - v550) * 0.5;
            v374 = (float)(v555 - v551) * 0.5;
g4_m128_raw(v12) = LODWORD(v549);
            *(float *)g4_m128_ptr<int32_t>(v12) = (float)((float)(v549 - v553) * 0.5) + v553;
            v13 = v11;
            *(float *)g4_m128_ptr<int32_t>(v13) = (float)(v550 - v554) * 0.5;
            v14 = v13;
            v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
            *(float *)g4_m128_ptr<int32_t>(v14) = *(float *)g4_m128_ptr<int32_t>(v13) + v554;
            v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
g4_m128_raw(v17) = LODWORD(v552);
            *(float *)g4_m128_ptr<int32_t>(v13) = (float)((float)(v551 - v555) * 0.5) + v555;
            *(float *)g4_m128_ptr<int32_t>(v17) = (float)((float)(v552 - v556) * 0.5) + v556;
            v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
            v19 = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v12) * v568[71]) + (float)(v16 * v568[75]))
                        + (float)(v568[79] * *(float *)g4_m128_ptr<int32_t>(v13)))
                + v568[83];
            v20 = (float)((float)((float)(v15 * v568[72]) + (float)(v16 * v568[76]))
                        + (float)(v568[80] * *(float *)g4_m128_ptr<int32_t>(v13)))
                + v568[84];
            v21 = (float)((float)((float)(v15 * v568[73]) + (float)(v16 * v568[77]))
                        + (float)(v568[81] * *(float *)g4_m128_ptr<int32_t>(v13)))
                + v568[85];
            *(float *)g4_m128_ptr<int32_t>(v17) = (float)((float)((float)(v568[56] * v19) + (float)(v568[60] * v20))
                                            + (float)(v568[64] * v21))
                                    + v568[68];
            v498 = fminf(
                     v15,
                     (float)((float)((float)(v568[59] * v20) + (float)(v568[55] * v19)) + (float)(v568[63] * v21))
                   + v568[67]);
            v22 = (float)((float)((float)(v568[61] * v20) + (float)(v568[57] * v19)) + (float)(v568[65] * v21))
                + v568[69];
            v476 = fminf(v16, *(float *)g4_m128_ptr<int32_t>(v17));
            v464 = fminf(*(float *)g4_m128_ptr<int32_t>(v13), v22);
            v513 = fmaxf(*(float *)g4_m128_ptr<int32_t>(v13), v22);
            v529 = fmaxf(
                     v18,
                     (float)((float)((float)(v568[62] * v20) + (float)(v568[58] * v19)) + (float)(v568[66] * v21))
                   + v568[70]);
            v488 = fminf(
                     v18,
                     (float)((float)((float)(v568[62] * v20) + (float)(v568[58] * v19)) + (float)(v568[66] * v21))
                   + v568[70]);
            v453 = fmaxf(
                     v15,
                     (float)((float)((float)(v568[59] * v20) + (float)(v568[55] * v19)) + (float)(v568[63] * v21))
                   + v568[67]);
            v23 = fmaxf(v16, *(float *)g4_m128_ptr<int32_t>(v17));
            v24 = v23;
            if ( SLODWORD(v568[51]) > 0 )
            {
              v25 = v565;
              v26 = (float *)&v566;
              v27 = (float *)&v567;
              v28 = v568;
              v29 = 0;
              v440 = v23;
              v405 = v19 - *(float *)(LODWORD(v565[0]) + 128);
              v393 = v20 - *(float *)(LODWORD(v565[0]) + 132);
              v399 = v21 - *(float *)(LODWORD(v565[0]) + 136);
              do
              {
                v30 = v25[19];
                ++v29;
                v26 += 16;
                v27 += 16;
                v28 += 16;
                v25 += 16;
                v31 = (float)(v405 * v30) + *(float *)(LODWORD(v565[0]) + 128);
                v32 = (float)(v393 * v30) + *(float *)(LODWORD(v565[0]) + 132);
                v33 = (float)(v399 * v30) + *(float *)(LODWORD(v565[0]) + 136);
                v34 = (float)((float)((float)(*(v25 - 12) * v31) + (float)(*(v26 - 17) * v32))
                            + (float)(*(v27 - 18) * v33))
                    + *(v28 - 17);
                v35 = (float)(*(v25 - 10) * v31) + (float)(*(v26 - 15) * v32);
                v36 = *(v27 - 16) * v33;
                v37 = (float)((float)((float)(*(v25 - 11) * v31) + (float)(*(v26 - 16) * v32))
                            + (float)(*(v27 - 17) * v33))
                    + *(v28 - 16);
                v38 = (float)((float)(v31 * *(v25 - 9)) + (float)(v32 * *(v26 - 14))) + (float)(v33 * *(v27 - 15));
                v39 = fmaxf(v453, v34);
                v40 = (float)(v35 + v36) + *(v28 - 15);
                v41 = v38 + v30;
                v42 = fminf(v498, v34);
                v24 = fmaxf(v440, v37);
                v453 = v39;
                v498 = v42;
                v488 = fminf(v488, v41);
                v476 = fminf(v476, v37);
                v464 = fminf(v464, v40);
                v440 = v24;
                v513 = fmaxf(v513, v40);
                v529 = fmaxf(v529, v41);
              }
              while ( v29 != LODWORD(v568[51]) );
            }
g4_m128_raw(v43) = LODWORD(v376);
            *(float *)g4_m128_ptr<int32_t>(v43) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v43) * *(float *)g4_m128_ptr<int32_t>(v43))
                                            + (float)(v375 * v375))
                                    + (float)(v374 * v374);
            if ( *(float *)g4_m128_ptr<int32_t>(v43) <= 0.0 )
            {
              v48 = 0.0;
              v47 = 0.0;
            }
            else
            {
              v44 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v43);
              v45 = ((_mm_cvtsi128_si32(v43) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v43) >> 1));
              v46 = (float)(1.5 * *(float *)&v45)
                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v43)) * *(float *)&v45)
                          * (float)(*(float *)&v45 * *(float *)&v45));
              v47 = (float)((float)(1.5 * (float)((float)(1.5 * v46) - (float)((float)(v44 * v46) * (float)(v46 * v46))))
                          - (float)((float)(v44
                                          * (float)((float)(1.5 * v46) - (float)((float)(v44 * v46) * (float)(v46 * v46))))
                                  * (float)((float)((float)(1.5 * v46) - (float)((float)(v44 * v46) * (float)(v46 * v46)))
                                          * (float)((float)(1.5 * v46) - (float)((float)(v44 * v46) * (float)(v46 * v46))))))
                  * *(float *)g4_m128_ptr<int32_t>(v43);
              v48 = 0.73205084f * v47;
            }
            v49 = fminf(*(float *)(LODWORD(v565[0]) + 156), v48) * v47;
            v50 = fminf(v47, v376 + v49);
            v51 = fminf(v47, v375 + v49);
            v52 = fminf(v47, v374 + v49);
            v53 = fminf(v47, v49 + (float)((float)(v556 - v552) * 0.5));
            v54 = v50;
            v55 = v52;
            v56 = v498 - v50;
            v57 = v53 + v529;
            v58 = v464 - v55;
            v59 = v55 + v513;
            v400 = fminf(v550, v476 - v51);
            v530 = fminf(v551, v58);
            v514 = fminf(v552, v488 - v53);
            v413 = fminf(v549, v56);
            v499 = fmaxf(v553, v453 + v54);
            v394 = fmaxf(v554, v51 + v24);
            v489 = fmaxf(v556, v57);
            v377 = fmaxf(v555, v59);
g4_m128_raw(v64) = LODWORD(v549);
            v368 = fminf(v368, v549);
g4_m128_raw(v66) = LODWORD(v550);
            v373 = fminf(v373, v550);
            v367 = fminf(v367, v551);
            v372 = fminf(v372, v552);
            v366 = fmaxf(v366, v553);
            v365 = fmaxf(v365, v554);
            v364 = fmaxf(v364, v555);
            v371 = fmaxf(v371, v556);
            v363 = fminf(v363, v413);
            v358 = fminf(v358, v400);
            v362 = fminf(v362, v530);
            v370 = fminf(v370, v514);
            v361 = fmaxf(v361, v499);
            v60 = hkAabbUtil::hkAabbUint32MaxVal[0];
            v61 = hkAabbUtil::hkAabbUint32MaxVal[1];
            v360 = fmaxf(v360, v394);
            v62 = hkAabbUtil::hkAabbUint32MaxVal[2];
            v359 = fmaxf(v359, v377);
            v369 = fmaxf(v369, v489);
            v419 = hkAabbUtil::hkAabbUint32MaxVal[3];
g4_m128_raw(v63) = *(unsigned int *)(a1 + 40);
g4_m128_raw(v65) = LODWORD(v552);
            *(float *)g4_m128_ptr<int32_t>(v63) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v63) + v551) * *(float *)(a1 + 72), v62);
            *(float *)g4_m128_ptr<int32_t>(v64) = fminf(
                                        (float)(v549 + *(float *)(a1 + 32)) * *(float *)(a1 + 64),
                                        hkAabbUtil::hkAabbUint32MaxVal[0]);
            *(float *)g4_m128_ptr<int32_t>(v65) = fminf((float)(v552 + *(float *)(a1 + 44)) * *(float *)(a1 + 76), v419);
            *(float *)g4_m128_ptr<int32_t>(v66) = fminf((float)(v550 + *(float *)(a1 + 36)) * *(float *)(a1 + 68), v61);
            if ( *(float *)g4_m128_ptr<int32_t>(v64) <= 0.0 )
            {
              v68 = -127;
              LOBYTE(v465) = 0;
              v67 = 0;
            }
            else
            {
              v67 = _mm_cvtsi128_si32(v64);
              v465 = (v67 & 0x7F800000u) >> 23;
              v68 = v465 - 127;
            }
            if ( *(float *)g4_m128_ptr<int32_t>(v66) <= 0.0 )
            {
              v70 = -127;
              LOBYTE(v441) = 0;
              v69 = 0;
            }
            else
            {
              v69 = _mm_cvtsi128_si32(v66);
              v441 = (v69 & 0x7F800000u) >> 23;
              v70 = v441 - 127;
            }
            if ( *(float *)g4_m128_ptr<int32_t>(v63) <= 0.0 )
            {
              v432 = -127;
              LOBYTE(v477) = 0;
              v406 = 0;
            }
            else
            {
              v406 = _mm_cvtsi128_si32(v63);
              v477 = (v406 & 0x7F800000u) >> 23;
              v432 = v477 - 127;
            }
            if ( *(float *)g4_m128_ptr<int32_t>(v65) <= 0.0 )
            {
              v426 = -127;
              LOBYTE(v454) = 0;
              v383 = 0;
              if ( v68 < 0 )
              {
LABEL_273:
                v557 = 0.0;
                if ( v70 < 0 )
                  goto LABEL_274;
                goto LABEL_30;
              }
            }
            else
            {
              v383 = _mm_cvtsi128_si32(v65);
              v454 = (v383 & 0x7F800000u) >> 23;
              v426 = v454 - 127;
              if ( v68 < 0 )
                goto LABEL_273;
            }
            if ( v67 < 0 )
              goto LABEL_273;
            v71 = v67 & 0x7FFFFF | 0x800000;
            if ( v68 > 23 )
            {
              *(float *)&v72 = NAN;
              if ( v68 <= 31 )
                v72 = v71 << (v465 + 106);
            }
            else
            {
              v72 = v71 >> (-106 - v465);
            }
            v557 = *(float *)&v72;
            if ( v70 < 0 )
            {
LABEL_274:
              *(float *)&v74 = 0.0;
              goto LABEL_33;
            }
LABEL_30:
            if ( v69 < 0 )
              goto LABEL_274;
            v73 = v69 & 0x7FFFFF | 0x800000;
            if ( v70 > 23 )
            {
              *(float *)&v74 = NAN;
              if ( v70 <= 31 )
                v74 = v73 << (v441 + 106);
            }
            else
            {
              v74 = v73 >> (-106 - v441);
            }
LABEL_33:
            v558 = *(float *)&v74;
            if ( v432 < 0 || v406 < 0 )
            {
              *(float *)&v76 = 0.0;
            }
            else
            {
              v75 = v406 & 0x7FFFFF | 0x800000;
              if ( v432 > 23 )
              {
                *(float *)&v76 = NAN;
                if ( v432 <= 31 )
                  v76 = v75 << (v477 + 106);
              }
              else
              {
                v76 = v75 >> (-106 - v477);
              }
            }
            v559 = *(float *)&v76;
            if ( v426 < 0 || v383 < 0 )
            {
              *(float *)&v78 = 0.0;
            }
            else
            {
              v77 = v383 & 0x7FFFFF | 0x800000;
              if ( v426 > 23 )
              {
                *(float *)&v78 = NAN;
                if ( v426 <= 31 )
                  v78 = v77 << (v454 + 106);
              }
              else
              {
                v78 = v77 >> (-106 - v454);
              }
            }
            v560 = *(float *)&v78;
            v79 = v558;
            *(float *)v388 = v557;
            *((float *)v388 + 2) = v559;
            *((float *)v388 + 1) = v79;
            *((float *)v388 + 3) = v560;
g4_m128_raw(v81) = LODWORD(v553);
g4_m128_raw(v82) = LODWORD(v555);
g4_m128_raw(v83) = LODWORD(v554);
g4_m128_raw(v84) = LODWORD(v556);
            *(float *)g4_m128_ptr<int32_t>(v81) = fminf((float)(v553 + *(float *)(a1 + 48)) * *(float *)(a1 + 64), v60);
            *(float *)g4_m128_ptr<int32_t>(v82) = fminf((float)(v555 + *(float *)(a1 + 56)) * *(float *)(a1 + 72), v62);
            *(float *)g4_m128_ptr<int32_t>(v83) = fminf((float)(v554 + *(float *)(a1 + 52)) * *(float *)(a1 + 68), v61);
            *(float *)g4_m128_ptr<int32_t>(v84) = fminf((float)(v556 + *(float *)(a1 + 60)) * *(float *)(a1 + 76), v419);
            if ( *(float *)g4_m128_ptr<int32_t>(v81) <= 0.0 )
            {
              v86 = -127;
              LOBYTE(v478) = 0;
              v85 = 0;
            }
            else
            {
              v85 = _mm_cvtsi128_si32(v81);
              v478 = (v85 & 0x7F800000u) >> 23;
              v86 = v478 - 127;
            }
            if ( *(float *)g4_m128_ptr<int32_t>(v83) <= 0.0 )
            {
              v88 = -127;
              LOBYTE(v442) = 0;
              v87 = 0;
            }
            else
            {
              v87 = _mm_cvtsi128_si32(v83);
              v442 = (v87 & 0x7F800000u) >> 23;
              v88 = v442 - 127;
            }
            if ( *(float *)g4_m128_ptr<int32_t>(v82) <= 0.0 )
            {
              v433 = -127;
              LOBYTE(v455) = 0;
              v407 = 0;
            }
            else
            {
              v407 = _mm_cvtsi128_si32(v82);
              v455 = (v407 & 0x7F800000u) >> 23;
              v433 = v455 - 127;
            }
            if ( *(float *)g4_m128_ptr<int32_t>(v84) <= 0.0 )
            {
              v427 = -127;
              LOBYTE(v466) = 0;
              v420 = 0;
              if ( v86 < 0 )
              {
LABEL_267:
                v557 = 0.0;
                if ( v88 < 0 )
                  goto LABEL_268;
                goto LABEL_53;
              }
            }
            else
            {
              v420 = _mm_cvtsi128_si32(v84);
              v466 = (v420 & 0x7F800000u) >> 23;
              v427 = v466 - 127;
              if ( v86 < 0 )
                goto LABEL_267;
            }
            if ( v85 < 0 )
              goto LABEL_267;
            v89 = v85 & 0x7FFFFF | 0x800000;
            if ( v86 > 23 )
            {
              *(float *)&v90 = NAN;
              if ( v86 <= 31 )
                v90 = v89 << (v478 + 106);
            }
            else
            {
              v90 = v89 >> (-106 - v478);
            }
            v557 = *(float *)&v90;
            if ( v88 < 0 )
            {
LABEL_268:
              *(float *)&v92 = 0.0;
              goto LABEL_56;
            }
LABEL_53:
            if ( v87 < 0 )
              goto LABEL_268;
            v91 = v87 & 0x7FFFFF | 0x800000;
            if ( v88 > 23 )
            {
              *(float *)&v92 = NAN;
              if ( v88 <= 31 )
                v92 = v91 << (v442 + 106);
            }
            else
            {
              v92 = v91 >> (-106 - v442);
            }
LABEL_56:
            v558 = *(float *)&v92;
            if ( v433 < 0 || v407 < 0 )
            {
              *(float *)&v94 = 0.0;
            }
            else
            {
              v93 = v407 & 0x7FFFFF | 0x800000;
              if ( v433 > 23 )
              {
                *(float *)&v94 = NAN;
                if ( v433 <= 31 )
                  v94 = v93 << (v455 + 106);
              }
              else
              {
                v94 = v93 >> (-106 - v455);
              }
            }
            v559 = *(float *)&v94;
            if ( v427 < 0 || v420 < 0 )
            {
              *(float *)&v96 = 0.0;
            }
            else
            {
              v95 = v420 & 0x7FFFFF | 0x800000;
              if ( v427 > 23 )
              {
                *(float *)&v96 = NAN;
                if ( v427 <= 31 )
                  v96 = v95 << (v466 + 106);
              }
              else
              {
                v96 = v95 >> (-106 - v466);
              }
            }
            v560 = *(float *)&v96;
            v97 = v558;
g4_m128_raw(v100) = LODWORD(v413);
g4_m128_raw(v104) = LODWORD(v400);
            *((float *)v388 + 4) = v557;
            *((float *)v388 + 5) = v97;
            v98 = v560;
            *((float *)v388 + 6) = v559;
            *((float *)v388 + 7) = v98;
            v467 = hkAabbUtil::hkAabbUint32MaxVal[2];
g4_m128_raw(v105) = LODWORD(v530);
            v531 = *(float *)(a1 + 76);
g4_m128_raw(v101) = LODWORD(v514);
            v99 = *(float *)(a1 + 64);
            *(float *)g4_m128_ptr<int32_t>(v100) = fminf(
                                         (float)(v413 + *(float *)(a1 + 32)) * v99,
                                         hkAabbUtil::hkAabbUint32MaxVal[0]);
            v479 = hkAabbUtil::hkAabbUint32MaxVal[1];
            v408 = hkAabbUtil::hkAabbUint32MaxVal[3];
            *(float *)g4_m128_ptr<int32_t>(v101) = fminf((float)(v514 + *(float *)(a1 + 44)) * v531, v408);
            v102 = *(float *)(a1 + 68);
            v103 = *(float *)(a1 + 72);
            *(float *)g4_m128_ptr<int32_t>(v104) = fminf((float)(v400 + *(float *)(a1 + 36)) * v102, v479);
            *(float *)g4_m128_ptr<int32_t>(v105) = fminf((float)(*(float *)g4_m128_ptr<int32_t>(v105) + *(float *)(a1 + 40)) * v103, v467);
            if ( *(float *)g4_m128_ptr<int32_t>(v100) <= 0.0 )
            {
              v107 = -127;
              LOBYTE(v443) = 0;
              v106 = 0;
            }
            else
            {
              v106 = _mm_cvtsi128_si32(v100);
              v443 = (v106 & 0x7F800000u) >> 23;
              v107 = v443 - 127;
            }
            if ( *(float *)g4_m128_ptr<int32_t>(v104) <= 0.0 )
            {
              v109 = -127;
              LOBYTE(v428) = 0;
              v108 = 0;
            }
            else
            {
              v108 = _mm_cvtsi128_si32(v104);
              v428 = (v108 & 0x7F800000u) >> 23;
              v109 = v428 - 127;
            }
            if ( *(float *)g4_m128_ptr<int32_t>(v105) <= 0.0 )
            {
              v414 = -127;
              LOBYTE(v515) = 0;
              v384 = 0;
            }
            else
            {
              v384 = _mm_cvtsi128_si32(v105);
              v515 = (v384 & 0x7F800000u) >> 23;
              v414 = v515 - 127;
            }
            if ( *(float *)g4_m128_ptr<int32_t>(v101) <= 0.0 )
            {
              v421 = -127;
              LOBYTE(v434) = 0;
              v401 = 0;
              if ( v107 < 0 )
              {
LABEL_261:
                v543 = 0.0;
                if ( v109 < 0 )
                  goto LABEL_262;
                goto LABEL_76;
              }
            }
            else
            {
              v401 = _mm_cvtsi128_si32(v101);
              v434 = (v401 & 0x7F800000u) >> 23;
              v421 = v434 - 127;
              if ( v107 < 0 )
                goto LABEL_261;
            }
            if ( v106 < 0 )
              goto LABEL_261;
            v110 = v106 & 0x7FFFFF | 0x800000;
            if ( v107 > 23 )
            {
              *(float *)&v111 = NAN;
              if ( v107 <= 31 )
                v111 = v110 << (v443 + 106);
            }
            else
            {
              v111 = v110 >> (-106 - v443);
            }
            v543 = *(float *)&v111;
            if ( v109 < 0 )
            {
LABEL_262:
              *(float *)&v113 = 0.0;
              goto LABEL_79;
            }
LABEL_76:
            if ( v108 < 0 )
              goto LABEL_262;
            v112 = v108 & 0x7FFFFF | 0x800000;
            if ( v109 > 23 )
            {
              *(float *)&v113 = NAN;
              if ( v109 <= 31 )
                v113 = v112 << (v428 + 106);
            }
            else
            {
              v113 = v112 >> (-106 - v428);
            }
LABEL_79:
            v545 = *(float *)&v113;
            if ( v414 < 0 || v384 < 0 )
            {
              *(float *)&v115 = 0.0;
            }
            else
            {
              v114 = v384 & 0x7FFFFF | 0x800000;
              if ( v414 > 23 )
              {
                *(float *)&v115 = NAN;
                if ( v414 <= 31 )
                  v115 = v114 << (v515 + 106);
              }
              else
              {
                v115 = v114 >> (-106 - v515);
              }
            }
            v547 = *(float *)&v115;
            if ( v421 < 0 || v401 < 0 )
            {
              *(float *)&v117 = 0.0;
            }
            else
            {
              v116 = v401 & 0x7FFFFF | 0x800000;
              if ( v421 > 23 )
              {
                *(float *)&v117 = NAN;
                if ( v421 <= 31 )
                  v117 = v116 << (v434 + 106);
              }
              else
              {
                v117 = v116 >> (-106 - v434);
              }
            }
            v557 = v543;
            v559 = v547;
g4_m128_raw(v118) = LODWORD(v499);
g4_m128_raw(v119) = LODWORD(v377);
            v558 = v545;
            *(float *)g4_m128_ptr<int32_t>(v118) = v499 + *(float *)(a1 + 48);
            *(float *)g4_m128_ptr<int32_t>(v119) = v377 + *(float *)(a1 + 56);
g4_m128_raw(v120) = LODWORD(v394);
            v560 = *(float *)&v117;
            *(float *)g4_m128_ptr<int32_t>(v119) = *(float *)g4_m128_ptr<int32_t>(v119) * v103;
g4_m128_raw(v121) = LODWORD(v489);
            *(float *)g4_m128_ptr<int32_t>(v118) = fminf(*(float *)g4_m128_ptr<int32_t>(v118) * v99, hkAabbUtil::hkAabbUint32MaxVal[0]);
            *(float *)g4_m128_ptr<int32_t>(v119) = fminf(*(float *)g4_m128_ptr<int32_t>(v119), v467);
            *(float *)g4_m128_ptr<int32_t>(v120) = fminf((float)(v394 + *(float *)(a1 + 52)) * v102, v479);
            *(float *)g4_m128_ptr<int32_t>(v121) = fminf((float)(v489 + *(float *)(a1 + 60)) * v531, v408);
            if ( *(float *)g4_m128_ptr<int32_t>(v118) <= 0.0 )
            {
              v123 = -127;
              LOBYTE(v516) = 0;
              v122 = 0;
            }
            else
            {
              v122 = _mm_cvtsi128_si32(v118);
              v516 = (v122 & 0x7F800000u) >> 23;
              v123 = v516 - 127;
            }
            if ( *(float *)g4_m128_ptr<int32_t>(v120) <= 0.0 )
            {
              v125 = -127;
              LOBYTE(v500) = 0;
              v124 = 0;
            }
            else
            {
              v124 = _mm_cvtsi128_si32(v120);
              v500 = (v124 & 0x7F800000u) >> 23;
              v125 = v500 - 127;
            }
            if ( *(float *)g4_m128_ptr<int32_t>(v119) <= 0.0 )
            {
              v480 = -127;
              LOBYTE(v490) = 0;
              v444 = 0;
            }
            else
            {
              v444 = _mm_cvtsi128_si32(v119);
              v490 = (v444 & 0x7F800000u) >> 23;
              v480 = v490 - 127;
            }
            if ( *(float *)g4_m128_ptr<int32_t>(v121) <= 0.0 )
            {
              v468 = -127;
              LOBYTE(v532) = 0;
              v456 = 0;
              if ( v123 < 0 )
              {
LABEL_255:
                v544 = 0.0;
                if ( v125 < 0 )
                  goto LABEL_256;
                goto LABEL_99;
              }
            }
            else
            {
              v456 = _mm_cvtsi128_si32(v121);
              v532 = (v456 & 0x7F800000u) >> 23;
              v468 = v532 - 127;
              if ( v123 < 0 )
                goto LABEL_255;
            }
            if ( v122 < 0 )
              goto LABEL_255;
            v126 = v122 & 0x7FFFFF | 0x800000;
            if ( v123 > 23 )
            {
              *(float *)&v127 = NAN;
              if ( v123 <= 31 )
                v127 = v126 << (v516 + 106);
            }
            else
            {
              v127 = v126 >> (-106 - v516);
            }
            v544 = *(float *)&v127;
            if ( v125 < 0 )
            {
LABEL_256:
              *(float *)&v129 = 0.0;
              goto LABEL_102;
            }
LABEL_99:
            if ( v124 < 0 )
              goto LABEL_256;
            v128 = v124 & 0x7FFFFF | 0x800000;
            if ( v125 > 23 )
            {
              *(float *)&v129 = NAN;
              if ( v125 <= 31 )
                v129 = v128 << (v500 + 106);
            }
            else
            {
              v129 = v128 >> (-106 - v500);
            }
LABEL_102:
            v546 = *(float *)&v129;
            if ( v480 < 0 || v444 < 0 )
            {
              *(float *)&v131 = 0.0;
            }
            else
            {
              v130 = v444 & 0x7FFFFF | 0x800000;
              if ( v480 > 23 )
              {
                *(float *)&v131 = NAN;
                if ( v480 <= 31 )
                  v131 = v130 << (v490 + 106);
              }
              else
              {
                v131 = v130 >> (-106 - v490);
              }
            }
            v548 = *(float *)&v131;
            if ( v468 < 0 || v456 < 0 )
            {
              *(float *)&v133 = 0.0;
            }
            else
            {
              v132 = v456 & 0x7FFFFF | 0x800000;
              if ( v468 > 23 )
              {
                *(float *)&v133 = NAN;
                if ( v468 <= 31 )
                  v133 = v132 << (v532 + 106);
              }
              else
              {
                v133 = v132 >> (-106 - v532);
              }
            }
            v561 = v544;
            v564 = *(float *)&v133;
            v562 = v546;
            v563 = v548;
            v517 = LODWORD(v544) - *((uint32_t *)v388 + 4);
            v134 = *(uint32_t *)v388 - LODWORD(v557);
            v533 = *((uint32_t *)v388 + 1) - LODWORD(v558);
            v135 = LODWORD(v546) - *((uint32_t *)v388 + 5);
            v136 = *((uint32_t *)v388 + 2) - LODWORD(v559);
            v501 = LODWORD(v548) - *((uint32_t *)v388 + 6);
            v137 = v135 | v501 | v136 | v517 | v134 | v533;
            v138 = 0;
            if ( v137 > 2047 )
            {
              do
              {
                v137 = (unsigned int)v137 >> 4;
                v138 += 4;
              }
              while ( (unsigned int)v137 > 0x7FF );
              if ( v137 <= 255 )
                goto LABEL_115;
              goto LABEL_113;
            }
            while ( v137 > 255 )
            {
LABEL_113:
              v137 = (unsigned int)v137 >> 1;
              ++v138;
            }
LABEL_115:
            v388[15] = v138;
            v139 = v134 >> v138;
            v140 = v388;
            v388 += 32;
            v140[12] = v139;
            v140[29] = v135 >> v138;
            v140[13] = v533 >> v138;
            v140[14] = v136 >> v138;
            v140[28] = v517 >> v138;
            v140[30] = v501 >> v138;
            v140[31] = v378;
            v141 = (int *)v356;
            v356 += 4;
            *v141 = v378;
            v378 = G4_VCALL<int>(v357, 16, v378);
            if ( v378 == -1 )
            {
              v142 = v367;
              v143 = (unsigned int)(v356 - v353) >> 2;
              goto LABEL_117;
            }
          }
        }
        LOWORD(v143) = 0;
        v358 = 3.40282e38f;
        v371 = -3.40282e38f;
        v364 = -3.40282e38f;
        v365 = -3.40282e38f;
        v366 = -3.40282e38f;
        v372 = 3.40282e38f;
        v142 = 3.40282e38f;
        v367 = 3.40282e38f;
        v368 = 3.40282e38f;
LABEL_117:
        *(uint16_t *)(v355 + 80) = v143;
        v144 = v364 < v142 ? 0 : 4;
        if ( v371 >= v372 )
          v144 = v364 < v142 ? 8 : 12;
        v145 = v144 | (v366 >= v368) | (v365 < v373 ? 0 : 2);
        v146 = v144 & 1 | (v366 >= v368);
        if ( (v144 & 1 | (v366 >= v368)) == 0 )
          v366 = *(float *)(v355 + 320);
        v147 = v145 & 2;
        if ( (v145 & 2) == 0 )
          v365 = *(float *)(v355 + 324);
        v148 = v145 & 4;
        if ( (v145 & 4) == 0 )
          v364 = *(float *)(v355 + 328);
        v149 = v145 & 8;
        if ( v149 == 0 )
          v371 = *(float *)(v355 + 332);
        if ( v146 == 0 )
          v368 = *(float *)(v355 + 320);
        if ( v147 == 0 )
          v373 = *(float *)(v355 + 324);
        if ( v148 == 0 )
          v367 = *(float *)(v355 + 328);
        if ( v149 == 0 )
          v372 = *(float *)(v355 + 332);
        if ( v146 == 0 )
          v361 = *(float *)(v355 + 320);
        if ( v147 == 0 )
          v360 = *(float *)(v355 + 324);
        if ( v148 == 0 )
          v359 = *(float *)(v355 + 328);
        if ( v149 == 0 )
          v369 = *(float *)(v355 + 332);
        if ( v146 == 0 )
          v363 = *(float *)(v355 + 320);
        if ( v147 == 0 )
          v358 = *(float *)(v355 + 324);
        if ( v148 == 0 )
          v362 = *(float *)(v355 + 328);
        if ( v149 == 0 )
          v370 = *(float *)(v355 + 332);
g4_m128_raw(v154) = LODWORD(v368);
        v150 = hkAabbUtil::hkAabbUint32MaxVal[0];
        v151 = hkAabbUtil::hkAabbUint32MaxVal[3];
        v152 = hkAabbUtil::hkAabbUint32MaxVal[1];
        v153 = hkAabbUtil::hkAabbUint32MaxVal[2];
g4_m128_raw(v155) = LODWORD(v372);
g4_m128_raw(v157) = LODWORD(v367);
g4_m128_raw(v156) = LODWORD(v373);
        *(float *)g4_m128_ptr<int32_t>(v154) = fminf(
                                     (float)(v368 + *(float *)(a1 + 32)) * *(float *)(a1 + 64),
                                     hkAabbUtil::hkAabbUint32MaxVal[0]);
        *(float *)g4_m128_ptr<int32_t>(v155) = fminf((float)(v372 + *(float *)(a1 + 44)) * *(float *)(a1 + 76), v151);
        *(float *)g4_m128_ptr<int32_t>(v156) = fminf((float)(v373 + *(float *)(a1 + 36)) * *(float *)(a1 + 68), v152);
        *(float *)g4_m128_ptr<int32_t>(v157) = fminf((float)(v367 + *(float *)(a1 + 40)) * *(float *)(a1 + 72), v153);
        if ( *(float *)g4_m128_ptr<int32_t>(v154) <= 0.0 )
        {
          v158 = 0;
          v435 = -127;
          LOBYTE(v518) = 0;
          if ( *(float *)g4_m128_ptr<int32_t>(v156) <= 0.0 )
            goto LABEL_438;
LABEL_153:
          v159 = _mm_cvtsi128_si32(v156);
          v481 = (v159 & 0x7F800000u) >> 23;
          v457 = v481 - 127;
          if ( *(float *)g4_m128_ptr<int32_t>(v157) > 0.0 )
            goto LABEL_154;
LABEL_439:
          v160 = 0;
          v445 = -127;
          LOBYTE(v491) = 0;
          if ( *(float *)g4_m128_ptr<int32_t>(v155) <= 0.0 )
            goto LABEL_440;
LABEL_155:
          v161 = _mm_cvtsi128_si32(v155);
          v502 = (v161 & 0x7F800000u) >> 23;
          v469 = v502 - 127;
          v162 = v435;
          if ( v435 >= 0 )
            goto LABEL_156;
LABEL_441:
          *(float *)&v164 = 0.0;
        }
        else
        {
          v158 = _mm_cvtsi128_si32(v154);
          v518 = (v158 & 0x7F800000u) >> 23;
          v435 = v518 - 127;
          if ( *(float *)g4_m128_ptr<int32_t>(v156) > 0.0 )
            goto LABEL_153;
LABEL_438:
          v159 = 0;
          v457 = -127;
          LOBYTE(v481) = 0;
          if ( *(float *)g4_m128_ptr<int32_t>(v157) <= 0.0 )
            goto LABEL_439;
LABEL_154:
          v160 = _mm_cvtsi128_si32(v157);
          v491 = (v160 & 0x7F800000u) >> 23;
          v445 = v491 - 127;
          if ( *(float *)g4_m128_ptr<int32_t>(v155) > 0.0 )
            goto LABEL_155;
LABEL_440:
          v162 = v435;
          v161 = 0;
          v469 = -127;
          LOBYTE(v502) = 0;
          if ( v435 < 0 )
            goto LABEL_441;
LABEL_156:
          if ( v158 < 0 )
            goto LABEL_441;
          v163 = v158 & 0x7FFFFF | 0x800000;
          if ( v162 > 23 )
          {
            *(float *)&v164 = NAN;
            if ( v435 <= 31 )
              v164 = v163 << (v518 + 106);
          }
          else
          {
            v164 = v163 >> (-106 - v518);
          }
        }
        v557 = *(float *)&v164;
        if ( v457 < 0 || v159 < 0 )
        {
          *(float *)&v166 = 0.0;
        }
        else
        {
          v165 = v159 & 0x7FFFFF | 0x800000;
          if ( v457 > 23 )
          {
            *(float *)&v166 = NAN;
            if ( v457 <= 31 )
              v166 = v165 << (v481 + 106);
          }
          else
          {
            v166 = v165 >> (-106 - v481);
          }
        }
        v558 = *(float *)&v166;
        if ( v445 < 0 || v160 < 0 )
        {
          *(float *)&v168 = 0.0;
        }
        else
        {
          v167 = v160 & 0x7FFFFF | 0x800000;
          if ( v445 > 23 )
          {
            *(float *)&v168 = NAN;
            if ( v445 <= 31 )
              v168 = v167 << (v491 + 106);
          }
          else
          {
            v168 = v167 >> (-106 - v491);
          }
        }
        v559 = *(float *)&v168;
        if ( v469 < 0 || v161 < 0 )
        {
          *(float *)&v170 = 0.0;
        }
        else
        {
          v169 = v161 & 0x7FFFFF | 0x800000;
          if ( v469 > 23 )
          {
            *(float *)&v170 = NAN;
            if ( v469 <= 31 )
              v170 = v169 << (v502 + 106);
          }
          else
          {
            v170 = v169 >> (-106 - v502);
          }
        }
        v560 = *(float *)&v170;
        v171 = v558;
g4_m128_raw(v173) = LODWORD(v366);
        *(float *)(v355 + 48) = v557;
        *(float *)(v355 + 56) = v559;
g4_m128_raw(v174) = LODWORD(v365);
        *(float *)(v355 + 52) = v171;
g4_m128_raw(v175) = LODWORD(v364);
g4_m128_raw(v176) = LODWORD(v371);
        *(float *)(v355 + 60) = v560;
        *(float *)g4_m128_ptr<int32_t>(v173) = fminf((float)(v366 + *(float *)(a1 + 48)) * *(float *)(a1 + 64), v150);
        *(float *)g4_m128_ptr<int32_t>(v174) = fminf((float)(v365 + *(float *)(a1 + 52)) * *(float *)(a1 + 68), v152);
        *(float *)g4_m128_ptr<int32_t>(v175) = fminf((float)(v364 + *(float *)(a1 + 56)) * *(float *)(a1 + 72), v153);
        *(float *)g4_m128_ptr<int32_t>(v176) = fminf((float)(v371 + *(float *)(a1 + 60)) * *(float *)(a1 + 76), v151);
        if ( *(float *)g4_m128_ptr<int32_t>(v173) <= 0.0 )
        {
          v446 = -127;
          LOBYTE(v482) = 0;
          v177 = 0;
        }
        else
        {
          v177 = _mm_cvtsi128_si32(v173);
          v482 = (v177 & 0x7F800000u) >> 23;
          v446 = v482 - 127;
        }
        if ( *(float *)g4_m128_ptr<int32_t>(v174) <= 0.0 )
        {
          v436 = -127;
          LOBYTE(v519) = 0;
          v178 = 0;
        }
        else
        {
          v178 = _mm_cvtsi128_si32(v174);
          v519 = (v178 & 0x7F800000u) >> 23;
          v436 = v519 - 127;
        }
        if ( *(float *)g4_m128_ptr<int32_t>(v175) <= 0.0 )
        {
          v470 = -127;
          LOBYTE(v503) = 0;
          v179 = 0;
        }
        else
        {
          v179 = _mm_cvtsi128_si32(v175);
          v503 = (v179 & 0x7F800000u) >> 23;
          v470 = v503 - 127;
        }
        if ( *(float *)g4_m128_ptr<int32_t>(v176) <= 0.0 )
        {
          v181 = v446;
          v180 = 0;
          v458 = -127;
          LOBYTE(v492) = 0;
          if ( v446 < 0 )
            goto LABEL_453;
LABEL_179:
          if ( v177 < 0 )
            goto LABEL_453;
          v182 = v177 & 0x7FFFFF | 0x800000;
          if ( v181 > 23 )
          {
            *(float *)&v183 = NAN;
            if ( v446 <= 31 )
              v183 = v182 << (v482 + 106);
          }
          else
          {
            v183 = v182 >> (-106 - v482);
          }
        }
        else
        {
          v180 = _mm_cvtsi128_si32(v176);
          v492 = (v180 & 0x7F800000u) >> 23;
          v458 = v492 - 127;
          v181 = v446;
          if ( v446 >= 0 )
            goto LABEL_179;
LABEL_453:
          *(float *)&v183 = 0.0;
        }
        v557 = *(float *)&v183;
        if ( v436 < 0 || v178 < 0 )
        {
          *(float *)&v185 = 0.0;
        }
        else
        {
          v184 = v178 & 0x7FFFFF | 0x800000;
          if ( v436 > 23 )
          {
            *(float *)&v185 = NAN;
            if ( v436 <= 31 )
              v185 = v184 << (v519 + 106);
          }
          else
          {
            v185 = v184 >> (-106 - v519);
          }
        }
        v558 = *(float *)&v185;
        if ( v470 < 0 || v179 < 0 )
        {
          *(float *)&v187 = 0.0;
        }
        else
        {
          v186 = v179 & 0x7FFFFF | 0x800000;
          if ( v470 > 23 )
          {
            *(float *)&v187 = NAN;
            if ( v470 <= 31 )
              v187 = v186 << (v503 + 106);
          }
          else
          {
            v187 = v186 >> (-106 - v503);
          }
        }
        v559 = *(float *)&v187;
        if ( v458 < 0 || v180 < 0 )
        {
          *(float *)&v189 = 0.0;
        }
        else
        {
          v188 = v180 & 0x7FFFFF | 0x800000;
          if ( v458 > 23 )
          {
            *(float *)&v189 = NAN;
            if ( v458 <= 31 )
              v189 = v188 << (v492 + 106);
          }
          else
          {
            v189 = v188 >> (-106 - v492);
          }
        }
        v560 = *(float *)&v189;
        v190 = v558;
g4_m128_raw(v191) = LODWORD(v363);
        *(float *)(v355 + 64) = v557;
        *(float *)(v355 + 72) = v559;
        *(float *)(v355 + 68) = v190;
        *(float *)(v355 + 76) = v560;
        v429 = *(float *)(a1 + 64);
        v422 = *(float *)(a1 + 68);
g4_m128_raw(v192) = LODWORD(v358);
        *(float *)g4_m128_ptr<int32_t>(v191) = fminf((float)(v363 + *(float *)(a1 + 32)) * v429, v150);
        v415 = *(float *)(a1 + 72);
g4_m128_raw(v193) = LODWORD(v362);
        *(float *)g4_m128_ptr<int32_t>(v192) = fminf((float)(v358 + *(float *)(a1 + 36)) * v422, v152);
        v409 = *(float *)(a1 + 76);
g4_m128_raw(v194) = LODWORD(v370);
        *(float *)g4_m128_ptr<int32_t>(v193) = fminf((float)(v362 + *(float *)(a1 + 40)) * v415, v153);
        *(float *)g4_m128_ptr<int32_t>(v194) = fminf((float)(v370 + *(float *)(a1 + 44)) * v409, v151);
        if ( *(float *)g4_m128_ptr<int32_t>(v191) <= 0.0 )
        {
          v459 = -127;
          LOBYTE(v520) = 0;
          v195 = 0;
        }
        else
        {
          v195 = _mm_cvtsi128_si32(v191);
          v520 = (v195 & 0x7F800000u) >> 23;
          v459 = v520 - 127;
        }
        if ( *(float *)g4_m128_ptr<int32_t>(v192) <= 0.0 )
        {
          v471 = -127;
          LOBYTE(v504) = 0;
          v196 = 0;
        }
        else
        {
          v196 = _mm_cvtsi128_si32(v192);
          v504 = (v196 & 0x7F800000u) >> 23;
          v471 = v504 - 127;
        }
        if ( *(float *)g4_m128_ptr<int32_t>(v193) <= 0.0 )
        {
          v447 = -127;
          LOBYTE(v493) = 0;
          v197 = 0;
        }
        else
        {
          v197 = _mm_cvtsi128_si32(v193);
          v493 = (v197 & 0x7F800000u) >> 23;
          v447 = v493 - 127;
        }
        if ( *(float *)g4_m128_ptr<int32_t>(v194) <= 0.0 )
        {
          v199 = v459;
          v198 = 0;
          v437 = -127;
          LOBYTE(v483) = 0;
          if ( v459 < 0 )
            goto LABEL_448;
LABEL_202:
          if ( v195 < 0 )
            goto LABEL_448;
          v200 = v195 & 0x7FFFFF | 0x800000;
          if ( v199 > 23 )
          {
            v201 = NAN;
            if ( v459 <= 31 )
              LODWORD(v201) = v200 << (v520 + 106);
          }
          else
          {
            LODWORD(v201) = v200 >> (-106 - v520);
          }
        }
        else
        {
          v198 = _mm_cvtsi128_si32(v194);
          v483 = (v198 & 0x7F800000u) >> 23;
          v437 = v483 - 127;
          v199 = v459;
          if ( v459 >= 0 )
            goto LABEL_202;
LABEL_448:
          v201 = 0.0;
        }
        v549 = v201;
        if ( v471 < 0 || v196 < 0 )
        {
          v203 = 0.0;
        }
        else
        {
          v202 = v196 & 0x7FFFFF | 0x800000;
          if ( v471 > 23 )
          {
            v203 = NAN;
            if ( v471 <= 31 )
              LODWORD(v203) = v202 << (v504 + 106);
          }
          else
          {
            LODWORD(v203) = v202 >> (-106 - v504);
          }
        }
        v550 = v203;
        if ( v447 < 0 || v197 < 0 )
        {
          v205 = 0.0;
        }
        else
        {
          v204 = v197 & 0x7FFFFF | 0x800000;
          if ( v447 > 23 )
          {
            v205 = NAN;
            if ( v447 <= 31 )
              LODWORD(v205) = v204 << (v493 + 106);
          }
          else
          {
            LODWORD(v205) = v204 >> (-106 - v493);
          }
        }
        v551 = v205;
        if ( v437 < 0 || v198 < 0 )
        {
          v207 = 0.0;
        }
        else
        {
          v206 = v198 & 0x7FFFFF | 0x800000;
          if ( v437 > 23 )
          {
            v207 = NAN;
            if ( v437 <= 31 )
              LODWORD(v207) = v206 << (v483 + 106);
          }
          else
          {
            LODWORD(v207) = v206 >> (-106 - v483);
          }
        }
        v552 = v207;
        v557 = v549;
        v559 = v551;
g4_m128_raw(v208) = LODWORD(v361);
g4_m128_raw(v209) = LODWORD(v360);
        v558 = v550;
g4_m128_raw(v210) = LODWORD(v359);
        *(float *)g4_m128_ptr<int32_t>(v208) = v361 + *(float *)(a1 + 48);
g4_m128_raw(v211) = LODWORD(v369);
        v560 = v207;
        *(float *)g4_m128_ptr<int32_t>(v208) = fminf(*(float *)g4_m128_ptr<int32_t>(v208) * v429, v150);
        *(float *)g4_m128_ptr<int32_t>(v209) = fminf((float)(v360 + *(float *)(a1 + 52)) * v422, v152);
        *(float *)g4_m128_ptr<int32_t>(v210) = fminf((float)(v359 + *(float *)(a1 + 56)) * v415, v153);
        *(float *)g4_m128_ptr<int32_t>(v211) = fminf((float)(v369 + *(float *)(a1 + 60)) * v409, v151);
        if ( *(float *)g4_m128_ptr<int32_t>(v208) <= 0.0 )
        {
          v460 = -127;
          LOBYTE(v494) = 0;
          v212 = 0;
        }
        else
        {
          v212 = _mm_cvtsi128_si32(v208);
          v494 = (v212 & 0x7F800000u) >> 23;
          v460 = v494 - 127;
        }
        if ( *(float *)g4_m128_ptr<int32_t>(v209) <= 0.0 )
        {
          v448 = -127;
          LOBYTE(v521) = 0;
          v213 = 0;
        }
        else
        {
          v213 = _mm_cvtsi128_si32(v209);
          v521 = (v213 & 0x7F800000u) >> 23;
          v448 = v521 - 127;
        }
        if ( *(float *)g4_m128_ptr<int32_t>(v210) <= 0.0 )
        {
          v472 = -127;
          LOBYTE(v505) = 0;
          v214 = 0;
        }
        else
        {
          v214 = _mm_cvtsi128_si32(v210);
          v505 = (v214 & 0x7F800000u) >> 23;
          v472 = v505 - 127;
        }
        if ( *(float *)g4_m128_ptr<int32_t>(v211) <= 0.0 )
        {
          v216 = v460;
          v215 = 0;
          v484 = -127;
          LOBYTE(v534) = 0;
          if ( v460 < 0 )
            goto LABEL_443;
LABEL_225:
          if ( v212 < 0 )
            goto LABEL_443;
          v217 = v212 & 0x7FFFFF | 0x800000;
          if ( v216 > 23 )
          {
            v218 = NAN;
            if ( v460 <= 31 )
              LODWORD(v218) = v217 << (v494 + 106);
          }
          else
          {
            LODWORD(v218) = v217 >> (-106 - v494);
          }
        }
        else
        {
          v215 = _mm_cvtsi128_si32(v211);
          v534 = (v215 & 0x7F800000u) >> 23;
          v484 = v534 - 127;
          v216 = v460;
          if ( v460 >= 0 )
            goto LABEL_225;
LABEL_443:
          v218 = 0.0;
        }
        v549 = v218;
        if ( v448 < 0 || v213 < 0 )
        {
          v220 = 0.0;
        }
        else
        {
          v219 = v213 & 0x7FFFFF | 0x800000;
          if ( v448 > 23 )
          {
            v220 = NAN;
            if ( v448 <= 31 )
              LODWORD(v220) = v219 << (v521 + 106);
          }
          else
          {
            LODWORD(v220) = v219 >> (-106 - v521);
          }
        }
        v550 = v220;
        if ( v472 < 0 || v214 < 0 )
        {
          v222 = 0.0;
        }
        else
        {
          v221 = v214 & 0x7FFFFF | 0x800000;
          if ( v472 > 23 )
          {
            v222 = NAN;
            if ( v472 <= 31 )
              LODWORD(v222) = v221 << (v505 + 106);
          }
          else
          {
            LODWORD(v222) = v221 >> (-106 - v505);
          }
        }
        v551 = v222;
        if ( v484 < 0 || v215 < 0 )
        {
          v224 = 0.0;
        }
        else
        {
          v223 = v215 & 0x7FFFFF | 0x800000;
          if ( v484 > 23 )
          {
            v224 = NAN;
            if ( v484 <= 31 )
              LODWORD(v224) = v223 << (v534 + 106);
          }
          else
          {
            LODWORD(v224) = v223 >> (-106 - v534);
          }
        }
        v552 = v224;
        v561 = v549;
        v562 = v550;
        v563 = v551;
        v564 = v224;
        v535 = LODWORD(v549) - *(uint32_t *)(v355 + 64);
        v225 = *(uint32_t *)(v355 + 52) - LODWORD(v558);
        v226 = *(uint32_t *)(v355 + 48) - LODWORD(v557);
        v522 = LODWORD(v550) - *(uint32_t *)(v355 + 68);
        v227 = *(uint32_t *)(v355 + 56) - LODWORD(v559);
        v506 = LODWORD(v551) - *(uint32_t *)(v355 + 72);
        v228 = v522 | v506 | v227 | v535 | v226 | v225;
        v229 = 0;
        if ( v228 <= 2047 )
          goto LABEL_244;
        do
        {
          v228 = (unsigned int)v228 >> 4;
          v229 += 4;
        }
        while ( (unsigned int)v228 > 0x7FF );
        while ( v228 > 255 )
        {
          v228 = (unsigned int)v228 >> 1;
          ++v229;
LABEL_244:
          ;
        }
        *(uint8_t *)(v355 + 63) = v229;
        *(uint8_t *)(v355 + 60) = v226 >> v229;
        *(uint8_t *)(v355 + 62) = v227 >> v229;
        *(uint8_t *)(v355 + 61) = v225 >> v229;
        *(uint8_t *)(v355 + 76) = v535 >> v229;
        *(uint8_t *)(v355 + 77) = v522 >> v229;
        *(uint8_t *)(v355 + 78) = v506 >> v229;
        if ( v351 == 0 )
        {
LABEL_246:
          v230 = *address;
          if ( v347 > *((uint32_t *)*address + 2) || *((char **)v230 + 3) != &v353[v347] || v353 == *((char **)v230 + 5) )
            hkLifoAllocator::slowBlockFree(v230, v353, v347);
          else
            *((uint32_t *)v230 + 3) = (uint32_t)(uintptr_t)(v353);
          v231 = *address;
          if ( v348 > *((uint32_t *)*address + 2) || *((char **)v231 + 3) != &v352[v348] || v352 == *((char **)v231 + 5) )
            hkLifoAllocator::slowBlockFree(v231, v352, v348);
          else
            *((uint32_t *)v231 + 3) = (uint32_t)(uintptr_t)(v352);
          continue;
        }
        v512 = (8 * v351 + 127) & 0xFFFFFF80;
        v328 = *address;
        v329 = *((uint32_t *)*address + 3);
        if ( v512 <= *((uint32_t *)*address + 2) && (unsigned int)(v329 + v512) <= *((uint32_t *)v328 + 4) )
        {
          v330 = v351;
          *((uint32_t *)v328 + 3) = v329 + v512;
          v331 = v351 == 1;
          if ( v351 > 1 )
            goto LABEL_548;
        }
        else
        {
          v330 = v351;
          v329 = hkLifoAllocator::allocateFromNewSlab(v328, v512);
          v331 = v351 == 1;
          if ( v351 > 1 )
          {
LABEL_548:
            v332 = v352;
            v333 = (uint32_t *)v329;
            v334 = 0;
            v541 = v329;
            do
            {
              v333[1] = v334++;
              v335 = *(uint32_t *)v332;
              v332 += 32;
              *v333 = v335;
              v333 += 2;
            }
            while ( v334 != v330 );
            v329 = v541;
            LOBYTE(v346) = 0;
            hkAlgorithm::quickSortRecursive_e1a0a5(v541, 0, v351 - 1);
            v336 = *(uint32_t *)(v355 + 84);
            v337 = *(uint32_t *)(v355 + 88);
            goto LABEL_551;
          }
        }
        if ( v331 )
        {
          *(uint32_t *)(v329 + 4) = 0;
          v336 = *(uint32_t *)(v355 + 84);
          v337 = *(uint32_t *)(v355 + 88);
          goto LABEL_551;
        }
        v336 = *(uint32_t *)(v355 + 84);
        v337 = *(uint32_t *)(v355 + 88);
        if ( v351 > 0 )
        {
LABEL_551:
          v338 = 0;
          v528 = v337;
          v542 = v329;
          do
          {
            v528 += 4;
            v336 += 32;
            v339 = &v352[32 * *(uint32_t *)(v542 + 8 * v338 + 4)];
            v340 = *(uint32_t *)v339;
            *(uint32_t *)(v336 - 28) = *((uint32_t *)v339 + 1);
            *(uint32_t *)(v336 - 32) = v340;
            v341 = *((uint32_t *)v339 + 2);
            *(uint32_t *)(v336 - 20) = *((uint32_t *)v339 + 3);
            *(uint32_t *)(v336 - 24) = v341;
            v342 = *((uint32_t *)v339 + 4);
            *(uint32_t *)(v336 - 12) = *((uint32_t *)v339 + 5);
            *(uint32_t *)(v336 - 16) = v342;
            v343 = *((uint32_t *)v339 + 7);
            *(uint32_t *)(v336 - 8) = *((uint32_t *)v339 + 6);
            *(uint32_t *)(v336 - 4) = v343;
            v344 = *(uint32_t *)(v542 + 8 * v338++ + 4);
            *(uint32_t *)(v528 - 4) = *(uint32_t *)&v353[4 * v344];
          }
          while ( v351 > v338 );
          v329 = v542;
        }
        v345 = *address;
        if ( v512 > *((uint32_t *)*address + 2) || *((uint32_t *)v345 + 3) != v512 + v329 || v329 == *((uint32_t *)v345 + 5) )
          hkLifoAllocator::slowBlockFree(v345, (char *)v329, v512);
        else
          *((uint32_t *)v345 + 3) = v329;
        goto LABEL_246;
      }
      G4_VCALL<void>(v5, 24, v4 + 240, COERCE_FLOAT(LODWORD(v354)), v565);
      v232 = *(float *)(v4 + 400);
      v233 = *(float *)(v4 + 396) * v232;
      v416 = v565[5];
      v234 = v232 + v354;
      v410 = v565[6];
      v449 = v565[7];
      v423 = v565[4];
      v235 = *(float *)(v4 + 320);
      v438 = *(float *)(v4 + 324);
      v236 = *(float *)(v4 + 328);
      v473 = v565[6] + v233;
      v461 = v233 + v565[7];
      v395 = v234 + v236;
      v237 = *(float *)(v4 + 332);
      v389 = v234 + v237;
      v238 = fmaxf(v565[3] - v233, v237 - v234);
      v536 = fminf(fmaxf(v565[1] - v233, v438 - v234), v565[1]);
      v239 = fminf(v565[5] + v233, v234 + v438);
      v523 = fminf(fmaxf(v565[0] - v233, v235 - v234), v565[0]);
      v507 = fminf(fmaxf(v565[2] - v233, v236 - v234), v565[2]);
      v240 = *(float *)(v4 + 304) - v235;
      v241 = fmaxf(fminf(v565[4] + v233, v234 + v235), v565[4]);
      v242 = *(float *)(v4 + 308) - v438;
      v495 = v241;
      v243 = *(float *)(v4 + 316) - v237;
      v244 = *(float *)(v4 + 312) - v236;
      v485 = fmaxf(v239, v565[5]);
      v524 = v523 + fminf(0.0, v240);
      v245 = hkAabbUtil::hkAabbUint32MaxVal[2];
      v537 = v536 + fminf(0.0, v242);
      v508 = v507 + fminf(0.0, v244);
      v430 = fminf(0.0, v243) + fminf(v238, v565[3]);
      v246 = hkAabbUtil::hkAabbUint32MaxVal[1];
      v247 = hkAabbUtil::hkAabbUint32MaxVal[0];
      v486 = fmaxf(0.0, v242) + v485;
      v496 = v495 + fmaxf(0.0, v240);
      v248 = fmaxf(fminf(v473, v395), v565[6]) + fmaxf(0.0, v244);
g4_m128_raw(v250) = LODWORD(v565[0]);
g4_m128_raw(v251) = LODWORD(v565[3]);
g4_m128_raw(v252) = LODWORD(v565[1]);
      v474 = v248;
      v249 = hkAabbUtil::hkAabbUint32MaxVal[3];
      v439 = v249;
      v462 = fmaxf(0.0, v243) + fmaxf(fminf(v461, v389), v565[7]);
g4_m128_raw(v253) = LODWORD(v565[2]);
      *(float *)g4_m128_ptr<int32_t>(v250) = fminf(
                                   (float)(v565[0] + *(float *)(a1 + 32)) * *(float *)(a1 + 64),
                                   hkAabbUtil::hkAabbUint32MaxVal[0]);
      *(float *)g4_m128_ptr<int32_t>(v251) = fminf((float)(v565[3] + *(float *)(a1 + 44)) * *(float *)(a1 + 76), v249);
      *(float *)g4_m128_ptr<int32_t>(v252) = fminf((float)(v565[1] + *(float *)(a1 + 36)) * *(float *)(a1 + 68), v246);
      *(float *)g4_m128_ptr<int32_t>(v253) = fminf((float)(v565[2] + *(float *)(a1 + 40)) * *(float *)(a1 + 72), v245);
      if ( *(float *)g4_m128_ptr<int32_t>(v250) <= 0.0 )
      {
        v380 = -127;
        LOBYTE(v402) = 0;
        v254 = 0;
      }
      else
      {
        v254 = _mm_cvtsi128_si32(v250);
        v402 = (v254 & 0x7F800000u) >> 23;
        v380 = v402 - 127;
      }
      if ( *(float *)g4_m128_ptr<int32_t>(v252) <= 0.0 )
      {
        v379 = -127;
        LOBYTE(v396) = 0;
        v255 = 0;
      }
      else
      {
        v255 = _mm_cvtsi128_si32(v252);
        v396 = (v255 & 0x7F800000u) >> 23;
        v379 = v396 - 127;
      }
      if ( *(float *)g4_m128_ptr<int32_t>(v253) <= 0.0 )
      {
        v382 = -127;
        LOBYTE(v390) = 0;
        v256 = 0;
      }
      else
      {
        v256 = _mm_cvtsi128_si32(v253);
        v390 = (v256 & 0x7F800000u) >> 23;
        v382 = v390 - 127;
      }
      if ( *(float *)g4_m128_ptr<int32_t>(v251) <= 0.0 )
      {
        v258 = v380;
        v257 = 0;
        v381 = -127;
        LOBYTE(v385) = 0;
        if ( v380 < 0 )
        {
LABEL_433:
          *(float *)&v260 = 0.0;
          goto LABEL_330;
        }
      }
      else
      {
        v257 = _mm_cvtsi128_si32(v251);
        v385 = (v257 & 0x7F800000u) >> 23;
        v381 = v385 - 127;
        v258 = v380;
        if ( v380 < 0 )
          goto LABEL_433;
      }
      if ( v254 < 0 )
        goto LABEL_433;
      v259 = v254 & 0x7FFFFF | 0x800000;
      if ( v258 > 23 )
      {
        *(float *)&v260 = NAN;
        if ( v380 <= 31 )
          v260 = v259 << (v402 + 106);
      }
      else
      {
        v260 = v259 >> (-106 - v402);
      }
LABEL_330:
      v569 = *(float *)&v260;
      if ( v379 < 0 || v255 < 0 )
      {
        *(float *)&v262 = 0.0;
      }
      else
      {
        v261 = v255 & 0x7FFFFF | 0x800000;
        if ( v379 > 23 )
        {
          *(float *)&v262 = NAN;
          if ( v379 <= 31 )
            v262 = v261 << (v396 + 106);
        }
        else
        {
          v262 = v261 >> (-106 - v396);
        }
      }
      v570 = *(float *)&v262;
      if ( v382 < 0 || v256 < 0 )
      {
        *(float *)&v264 = 0.0;
      }
      else
      {
        v263 = v256 & 0x7FFFFF | 0x800000;
        if ( v382 > 23 )
        {
          *(float *)&v264 = NAN;
          if ( v382 <= 31 )
            v264 = v263 << (v390 + 106);
        }
        else
        {
          v264 = v263 >> (-106 - v390);
        }
      }
      v571 = *(float *)&v264;
      if ( v381 < 0 || v257 < 0 )
      {
        v266 = 0;
      }
      else
      {
        v265 = v257 & 0x7FFFFF | 0x800000;
        if ( v381 > 23 )
        {
          v266 = -1;
          if ( v381 <= 31 )
            v266 = v265 << (v385 + 106);
        }
        else
        {
          v266 = v265 >> (-106 - v385);
        }
      }
      v572 = v266;
      v267 = v570;
g4_m128_raw(v270) = LODWORD(v565[4]);
      *(float *)(v355 + 48) = v569;
      *(float *)(v355 + 52) = v267;
      v268 = v572;
      *(float *)(v355 + 56) = v571;
g4_m128_raw(v271) = LODWORD(v416);
      *(uint32_t *)(v355 + 60) = v268;
g4_m128_raw(v272) = LODWORD(v410);
g4_m128_raw(v273) = LODWORD(v449);
      *(float *)g4_m128_ptr<int32_t>(v270) = fminf((float)(v423 + *(float *)(a1 + 48)) * *(float *)(a1 + 64), v247);
      *(float *)g4_m128_ptr<int32_t>(v271) = fminf((float)(v416 + *(float *)(a1 + 52)) * *(float *)(a1 + 68), v246);
      *(float *)g4_m128_ptr<int32_t>(v272) = fminf((float)(v410 + *(float *)(a1 + 56)) * *(float *)(a1 + 72), v245);
      *(float *)g4_m128_ptr<int32_t>(v273) = fminf((float)(v449 + *(float *)(a1 + 60)) * *(float *)(a1 + 76), v249);
      if ( *(float *)g4_m128_ptr<int32_t>(v270) <= 0.0 )
      {
        v391 = -127;
        LOBYTE(v411) = 0;
        v274 = 0;
      }
      else
      {
        v274 = _mm_cvtsi128_si32(v270);
        v411 = (v274 & 0x7F800000u) >> 23;
        v391 = v411 - 127;
      }
      if ( *(float *)g4_m128_ptr<int32_t>(v271) <= 0.0 )
      {
        v386 = -127;
        LOBYTE(v450) = 0;
        v275 = 0;
      }
      else
      {
        v275 = _mm_cvtsi128_si32(v271);
        v450 = (v275 & 0x7F800000u) >> 23;
        v386 = v450 - 127;
      }
      if ( *(float *)g4_m128_ptr<int32_t>(v272) <= 0.0 )
      {
        v397 = -127;
        LOBYTE(v424) = 0;
        v276 = 0;
      }
      else
      {
        v276 = _mm_cvtsi128_si32(v272);
        v424 = (v276 & 0x7F800000u) >> 23;
        v397 = v424 - 127;
      }
      if ( *(float *)g4_m128_ptr<int32_t>(v273) <= 0.0 )
      {
        v278 = v391;
        v277 = 0;
        v403 = -127;
        LOBYTE(v417) = 0;
        if ( v391 < 0 )
        {
LABEL_428:
          *(float *)&v280 = 0.0;
          goto LABEL_353;
        }
      }
      else
      {
        v277 = _mm_cvtsi128_si32(v273);
        v417 = (v277 & 0x7F800000u) >> 23;
        v403 = v417 - 127;
        v278 = v391;
        if ( v391 < 0 )
          goto LABEL_428;
      }
      if ( v274 < 0 )
        goto LABEL_428;
      v279 = v274 & 0x7FFFFF | 0x800000;
      if ( v278 > 23 )
      {
        *(float *)&v280 = NAN;
        if ( v391 <= 31 )
          v280 = v279 << (v411 + 106);
      }
      else
      {
        v280 = v279 >> (-106 - v411);
      }
LABEL_353:
      v569 = *(float *)&v280;
      if ( v386 < 0 || v275 < 0 )
      {
        *(float *)&v282 = 0.0;
      }
      else
      {
        v281 = v275 & 0x7FFFFF | 0x800000;
        if ( v386 > 23 )
        {
          *(float *)&v282 = NAN;
          if ( v386 <= 31 )
            v282 = v281 << (v450 + 106);
        }
        else
        {
          v282 = v281 >> (-106 - v450);
        }
      }
      v570 = *(float *)&v282;
      if ( v397 < 0 || v276 < 0 )
      {
        *(float *)&v284 = 0.0;
      }
      else
      {
        v283 = v276 & 0x7FFFFF | 0x800000;
        if ( v397 > 23 )
        {
          *(float *)&v284 = NAN;
          if ( v397 <= 31 )
            v284 = v283 << (v424 + 106);
        }
        else
        {
          v284 = v283 >> (-106 - v424);
        }
      }
      v571 = *(float *)&v284;
      if ( v403 < 0 || v277 < 0 )
      {
        v286 = 0;
      }
      else
      {
        v285 = v277 & 0x7FFFFF | 0x800000;
        if ( v403 > 23 )
        {
          v286 = -1;
          if ( v403 <= 31 )
            v286 = v285 << (v417 + 106);
        }
        else
        {
          v286 = v285 >> (-106 - v417);
        }
      }
      v572 = v286;
      v287 = v570;
g4_m128_raw(v289) = LODWORD(v524);
g4_m128_raw(v290) = LODWORD(v537);
      *(float *)(v355 + 64) = v569;
      *(float *)(v355 + 68) = v287;
      v288 = v572;
      *(float *)(v355 + 72) = v571;
g4_m128_raw(v291) = LODWORD(v508);
      *(uint32_t *)(v355 + 76) = v288;
      v404 = *(float *)(a1 + 64);
      v398 = *(float *)(a1 + 68);
      *(float *)g4_m128_ptr<int32_t>(v289) = fminf((float)(v524 + *(float *)(a1 + 32)) * v404, v247);
      v392 = *(float *)(a1 + 72);
      *(float *)g4_m128_ptr<int32_t>(v290) = fminf((float)(v537 + *(float *)(a1 + 36)) * v398, v246);
      v387 = *(float *)(a1 + 76);
g4_m128_raw(v292) = LODWORD(v430);
      *(float *)g4_m128_ptr<int32_t>(v291) = fminf((float)(v508 + *(float *)(a1 + 40)) * v392, v245);
      *(float *)g4_m128_ptr<int32_t>(v292) = fminf((float)(v430 + *(float *)(a1 + 44)) * v387, v439);
      if ( *(float *)g4_m128_ptr<int32_t>(v289) <= 0.0 )
      {
        v431 = -127;
        LOBYTE(v538) = 0;
        v293 = 0;
      }
      else
      {
        v293 = _mm_cvtsi128_si32(v289);
        v538 = (v293 & 0x7F800000u) >> 23;
        v431 = v538 - 127;
      }
      if ( *(float *)g4_m128_ptr<int32_t>(v290) <= 0.0 )
      {
        v425 = -127;
        LOBYTE(v525) = 0;
        v294 = 0;
      }
      else
      {
        v294 = _mm_cvtsi128_si32(v290);
        v525 = (v294 & 0x7F800000u) >> 23;
        v425 = v525 - 127;
      }
      if ( *(float *)g4_m128_ptr<int32_t>(v291) <= 0.0 )
      {
        v418 = -127;
        LOBYTE(v509) = 0;
        v295 = 0;
      }
      else
      {
        v295 = _mm_cvtsi128_si32(v291);
        v509 = (v295 & 0x7F800000u) >> 23;
        v418 = v509 - 127;
      }
      if ( *(float *)g4_m128_ptr<int32_t>(v292) <= 0.0 )
      {
        v297 = v431;
        v296 = 0;
        v412 = -127;
        LOBYTE(v451) = 0;
        if ( v431 < 0 )
        {
LABEL_423:
          *(float *)&v299 = 0.0;
          goto LABEL_376;
        }
      }
      else
      {
        v296 = _mm_cvtsi128_si32(v292);
        v451 = (v296 & 0x7F800000u) >> 23;
        v412 = v451 - 127;
        v297 = v431;
        if ( v431 < 0 )
          goto LABEL_423;
      }
      if ( v293 < 0 )
        goto LABEL_423;
      v298 = v293 & 0x7FFFFF | 0x800000;
      if ( v297 > 23 )
      {
        *(float *)&v299 = NAN;
        if ( v431 <= 31 )
          v299 = v298 << (v538 + 106);
      }
      else
      {
        v299 = v298 >> (-106 - v538);
      }
LABEL_376:
      v557 = *(float *)&v299;
      if ( v425 < 0 || v294 < 0 )
      {
        *(float *)&v301 = 0.0;
      }
      else
      {
        v300 = v294 & 0x7FFFFF | 0x800000;
        if ( v425 > 23 )
        {
          *(float *)&v301 = NAN;
          if ( v425 <= 31 )
            v301 = v300 << (v525 + 106);
        }
        else
        {
          v301 = v300 >> (-106 - v525);
        }
      }
      v558 = *(float *)&v301;
      if ( v418 < 0 || v295 < 0 )
      {
        *(float *)&v303 = 0.0;
      }
      else
      {
        v302 = v295 & 0x7FFFFF | 0x800000;
        if ( v418 > 23 )
        {
          *(float *)&v303 = NAN;
          if ( v418 <= 31 )
            v303 = v302 << (v509 + 106);
        }
        else
        {
          v303 = v302 >> (-106 - v509);
        }
      }
      v559 = *(float *)&v303;
      if ( v412 < 0 || v296 < 0 )
      {
        *(float *)&v305 = 0.0;
      }
      else
      {
        v304 = v296 & 0x7FFFFF | 0x800000;
        if ( v412 > 23 )
        {
          *(float *)&v305 = NAN;
          if ( v412 <= 31 )
            v305 = v304 << (v451 + 106);
        }
        else
        {
          v305 = v304 >> (-106 - v451);
        }
      }
      v560 = *(float *)&v305;
      v569 = v557;
      v571 = v559;
g4_m128_raw(v306) = LODWORD(v496);
g4_m128_raw(v307) = LODWORD(v486);
      v570 = v558;
g4_m128_raw(v308) = LODWORD(v474);
      *(float *)g4_m128_ptr<int32_t>(v306) = v496 + *(float *)(a1 + 48);
g4_m128_raw(v309) = LODWORD(v462);
      v572 = v305;
      *(float *)g4_m128_ptr<int32_t>(v306) = fminf(*(float *)g4_m128_ptr<int32_t>(v306) * v404, v247);
      *(float *)g4_m128_ptr<int32_t>(v307) = fminf((float)(v486 + *(float *)(a1 + 52)) * v398, v246);
      *(float *)g4_m128_ptr<int32_t>(v308) = fminf((float)(v474 + *(float *)(a1 + 56)) * v392, v245);
      *(float *)g4_m128_ptr<int32_t>(v309) = fminf((float)(v462 + *(float *)(a1 + 60)) * v387, v439);
      if ( *(float *)g4_m128_ptr<int32_t>(v306) <= 0.0 )
      {
        v452 = -127;
        LOBYTE(v539) = 0;
        v310 = 0;
      }
      else
      {
        v310 = _mm_cvtsi128_si32(v306);
        v539 = (v310 & 0x7F800000u) >> 23;
        v452 = v539 - 127;
      }
      if ( *(float *)g4_m128_ptr<int32_t>(v307) <= 0.0 )
      {
        v487 = -127;
        LOBYTE(v510) = 0;
        v311 = 0;
      }
      else
      {
        v311 = _mm_cvtsi128_si32(v307);
        v510 = (v311 & 0x7F800000u) >> 23;
        v487 = v510 - 127;
      }
      if ( *(float *)g4_m128_ptr<int32_t>(v308) <= 0.0 )
      {
        v475 = -127;
        LOBYTE(v497) = 0;
        v312 = 0;
      }
      else
      {
        v312 = _mm_cvtsi128_si32(v308);
        v497 = (v312 & 0x7F800000u) >> 23;
        v475 = v497 - 127;
      }
      if ( *(float *)g4_m128_ptr<int32_t>(v309) <= 0.0 )
      {
        v314 = v452;
        v313 = 0;
        v463 = -127;
        LOBYTE(v526) = 0;
        if ( v452 < 0 )
        {
LABEL_418:
          *(float *)&v316 = 0.0;
          goto LABEL_399;
        }
      }
      else
      {
        v313 = _mm_cvtsi128_si32(v309);
        v526 = (v313 & 0x7F800000u) >> 23;
        v463 = v526 - 127;
        v314 = v452;
        if ( v452 < 0 )
          goto LABEL_418;
      }
      if ( v310 < 0 )
        goto LABEL_418;
      v315 = v310 & 0x7FFFFF | 0x800000;
      if ( v314 > 23 )
      {
        *(float *)&v316 = NAN;
        if ( v452 <= 31 )
          v316 = v315 << (v539 + 106);
      }
      else
      {
        v316 = v315 >> (-106 - v539);
      }
LABEL_399:
      v557 = *(float *)&v316;
      if ( v487 < 0 || v311 < 0 )
      {
        *(float *)&v318 = 0.0;
      }
      else
      {
        v317 = v311 & 0x7FFFFF | 0x800000;
        if ( v487 > 23 )
        {
          *(float *)&v318 = NAN;
          if ( v487 <= 31 )
            v318 = v317 << (v510 + 106);
        }
        else
        {
          v318 = v317 >> (-106 - v510);
        }
      }
      v558 = *(float *)&v318;
      if ( v475 < 0 || v312 < 0 )
      {
        *(float *)&v320 = 0.0;
      }
      else
      {
        v319 = v312 & 0x7FFFFF | 0x800000;
        if ( v475 > 23 )
        {
          *(float *)&v320 = NAN;
          if ( v475 <= 31 )
            v320 = v319 << (v497 + 106);
        }
        else
        {
          v320 = v319 >> (-106 - v497);
        }
      }
      v559 = *(float *)&v320;
      if ( v463 < 0 || v313 < 0 )
      {
        *(float *)&v322 = 0.0;
      }
      else
      {
        v321 = v313 & 0x7FFFFF | 0x800000;
        if ( v463 > 23 )
        {
          *(float *)&v322 = NAN;
          if ( v463 <= 31 )
            v322 = v321 << (v526 + 106);
        }
        else
        {
          v322 = v321 >> (-106 - v526);
        }
      }
      v560 = *(float *)&v322;
      v573 = v557;
      v575 = v559;
      v574 = v558;
      v576 = v322;
      v540 = LODWORD(v557) - *(uint32_t *)(v355 + 64);
      v323 = *(uint32_t *)(v355 + 52) - LODWORD(v570);
      v527 = LODWORD(v558) - *(uint32_t *)(v355 + 68);
      v324 = *(uint32_t *)(v355 + 48) - LODWORD(v569);
      v325 = *(uint32_t *)(v355 + 56) - LODWORD(v571);
      v511 = LODWORD(v559) - *(uint32_t *)(v355 + 72);
      v326 = v527 | v511 | v325 | v540 | v324 | v323;
      v327 = 0;
      if ( v326 > 2047 )
      {
        do
        {
          v326 = (unsigned int)v326 >> 4;
          v327 += 4;
        }
        while ( (unsigned int)v326 > 0x7FF );
        if ( v326 <= 255 )
          goto LABEL_416;
        goto LABEL_414;
      }
      while ( v326 > 255 )
      {
LABEL_414:
        v326 = (unsigned int)v326 >> 1;
        ++v327;
      }
LABEL_416:
      *(uint8_t *)(v355 + 63) = v327;
      *(uint8_t *)(v355 + 60) = v324 >> v327;
      *(uint8_t *)(v355 + 61) = v323 >> v327;
      *(uint8_t *)(v355 + 62) = v325 >> v327;
      *(uint8_t *)(v355 + 76) = v540 >> v327;
      *(uint8_t *)(v355 + 77) = v527 >> v327;
      *(uint8_t *)(v355 + 78) = v511 >> v327;
    }
  }
  return result;
}


