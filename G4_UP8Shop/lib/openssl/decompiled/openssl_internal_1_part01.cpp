#include "Core/Utils/DecompTypes.h"
#include "openssl_internal_1_part01.h"

// ----------------------------------------------------------------------------
// Function: RIPEMD160_Init  (binary VA: 0x19ce400)
// Original: RIPEMD160_Init
// ----------------------------------------------------------------------------
int RIPEMD160_Init(int a1)
{
  unsigned int v1;
  uint16_t *v2;
  uint16_t *v3;

  v1 = 96;
  v2 = (uint16_t *)a1;
  if ( (a1 & 1) != 0 )
  {
    v2 = (uint16_t *)(a1 + 1);
    *(uint8_t *)a1 = 0;
    LOWORD(v1) = 95;
    if ( ((a1 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (a1 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v2 = 0;
  v1 -= 2;
  ++v2;
LABEL_3:
  memset(v2, 0, 4 * (v1 >> 2));
  v3 = &v2[2 * (v1 >> 2)];
  if ( (v1 & 2) != 0 )
    *v3++ = 0;
  if ( (v1 & 1) != 0 )
    *(uint8_t *)v3 = 0;
  *(uint32_t *)a1 = 1732584193;
  *(uint32_t *)(a1 + 4) = -271733879;
  *(uint32_t *)(a1 + 8) = -1732584194;
  *(uint32_t *)(a1 + 12) = 271733878;
  *(uint32_t *)(a1 + 16) = -1009589776;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ripemd160_block_data_order  (binary VA: 0x19ce490)
// Original: ripemd160_block_data_order
// ----------------------------------------------------------------------------
uint32_t * ripemd160_block_data_order(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *result;
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
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  uint32_t *v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
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
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  int v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  int v191;
  int v192;
  int v193;
  int v194;
  int v195;
  int v196;
  int v197;
  int v198;
  int v199;
  int v200;
  int v201;
  int v202;
  int v203;
  int v204;
  int v205;
  int v206;
  int v207;
  int v208;
  int v209;
  int v210;
  int v211;
  int v212;
  int v213;
  int v214;
  int v215;
  int v216;
  int v217;
  int v218;
  int v219;
  int v220;
  int v221;
  int v222;
  int v223;
  int v224;
  int v225;
  int v226;
  int v227;
  int v228;
  int v229;
  int v230;
  int v231;
  int v232;
  int v233;
  int v234;
  int v235;
  int v236;
  int v237;
  int v238;
  int v239;
  int v240;
  int v241;
  int v242;
  int v243;
  int v244;
  int v245;
  int v246;
  int v247;
  int v248;
  int v249;
  int v250;
  int v251;
  int v252;
  int v253;
  int v254;
  int v255;
  int v256;
  int v257;
  int v258;
  int v259;
  int v260;
  int v261;
  int v262;
  int v263;
  int v264;
  int v265;
  int v266;
  int v267;
  int v268;
  int v269;
  int v270;
  int v271;
  int v272;
  int v273;
  int v274;
  int v275;
  int v276;
  int v277;
  int v278;
  int v279;
  int v280;
  int v281;
  int v282;
  int v283;
  int v284;
  int v285;
  int v286;
  int v287;
  int v288;
  int v289;
  int v290;
  int v291;
  int v292;
  int v293;
  int v294;
  int v295;
  int v296;
  int v297;
  int v298;
  int v299;
  int v300;
  int v301;
  int v302;
  int v303;
  int v304;
  int v305;
  int v306;
  int v307;
  int v308;
  int v309;
  int v310;
  int v311;
  int v312;
  int v313;
  int v314;
  int v315;
  int v316;
  int v317;
  int v318;
  int v319;
  int v320;
  int v321;
  int v322;
  int v323;
  int v324;
  int v325;
  int v326;
  int v327;
  int v328;
  int v329;
  int v330;
  int v331;
  int v332;
  int v333;
  int v334;
  int v335;
  int v336;
  int v337;
  int v338;
  int v339;
  int v340;
  int v341;
  int v342;
  int v343;
  int v344;
  int v345;
  int v346;
  int v347;
  int v348;
  int v349;
  int v350;
  int v351;
  int v352;
  int v353;
  int v354;
  int v355;
  int v356;
  int v357;
  int v358;
  int v359;
  int v360;
  int v361;
  int v362;
  int v363;
  int v364;
  int v365;
  int v366;
  int v367;
  int v368;
  bool v369;
  int v371;
  int v372;
  int v373;
  int v374;
  int v375;
  int v376;
  int v377;
  int v378;
  int v379;
  int v380;
  int v381;
  int v382;
  int v383;
  int v384;
  int v385;
  int v386;
  int v387;
  int v388;
  int v389;
  int v390;
  int v391;
  int v392;
  int v393;
  int v394;
  int v395;
  int v396;
  int v397;
  int v398;
  int v399;

  result = a3;
  if ( a3 != nullptr )
  {
    v396 = *a1;
    v389 = a1[1];
    v393 = a1[2];
    v388 = a1[3];
    v390 = a1[4];
    while ( 1 )
    {
      v372 = a2[1];
      v371 = *a2;
      v4 = v390 + __builtin_rotateleft32((v388 ^ v389 ^ v393) + *a2 + v396, 11);
      v391 = __builtin_rotateright32(v393, 22);
      v392 = __builtin_rotateright32(v389, 22);
      v5 = v388 + __builtin_rotateleft32(v390 + v372 + (v4 ^ v391 ^ v389), 14);
      v6 = (v5 ^ v4 ^ v392) + a2[2] + v388;
      v7 = __builtin_rotateleft32(v4, 10);
      v375 = a2[3];
      v8 = v391 + __builtin_rotateleft32(v6, 15);
      v373 = a2[2];
      v9 = v391 + v375 + (v8 ^ v7 ^ v5);
      v10 = __builtin_rotateleft32(v5, 10);
      v11 = v392 + __builtin_rotateleft32(v9, 12);
      v376 = a2[4];
      v377 = a2[5];
      v12 = v7 + __builtin_rotateleft32(v392 + v376 + (v11 ^ v10 ^ v8), 5);
      v13 = __builtin_rotateleft32(v8, 10);
      v378 = a2[6];
      v14 = (v12 ^ v13 ^ v11) + v377 + v7;
      v15 = __builtin_rotateleft32(v11, 10);
      v16 = v10 + __builtin_rotateleft32(v14, 8);
      v379 = a2[7];
      v17 = (v16 ^ v15 ^ v12) + v378 + v10;
      v18 = __builtin_rotateleft32(v12, 10);
      v19 = v13 + __builtin_rotateleft32(v17, 7);
      v380 = a2[8];
      v20 = (v19 ^ v18 ^ v16) + v379 + v13;
      v21 = __builtin_rotateleft32(v16, 10);
      v22 = v15 + __builtin_rotateleft32(v20, 9);
      v381 = a2[9];
      v23 = (v22 ^ v21 ^ v19) + v380 + v15;
      v24 = __builtin_rotateleft32(v19, 10);
      v25 = v18 + __builtin_rotateleft32(v23, 11);
      v382 = a2[10];
      v26 = (v25 ^ v24 ^ v22) + v381 + v18;
      v27 = __builtin_rotateleft32(v22, 10);
      v28 = v21 + __builtin_rotateleft32(v26, 13);
      v383 = a2[11];
      v29 = (v28 ^ v27 ^ v25) + v382 + v21;
      v30 = __builtin_rotateleft32(v25, 10);
      v31 = v24 + __builtin_rotateleft32(v29, 14);
      v384 = a2[12];
      v32 = (v31 ^ v30 ^ v28) + v383 + v24;
      v33 = __builtin_rotateleft32(v28, 10);
      v34 = v27 + __builtin_rotateleft32(v32, 15);
      v385 = a2[13];
      v35 = (v34 ^ v33 ^ v31) + v384 + v27;
      v36 = __builtin_rotateleft32(v31, 10);
      v37 = v30 + __builtin_rotateleft32(v35, 6);
      v386 = a2[14];
      v38 = (v37 ^ v36 ^ v34) + v385 + v30;
      v39 = a2;
      v40 = __builtin_rotateleft32(v34, 10);
      a2 += 16;
      v41 = v33 + __builtin_rotateleft32(v38, 7);
      v387 = v39[15];
      v42 = (v41 ^ v40 ^ v37) + v386 + v33;
      v43 = __builtin_rotateleft32(v37, 10);
      v44 = v36 + __builtin_rotateleft32(v42, 9);
      v45 = v40 + __builtin_rotateleft32((v44 ^ v43 ^ v41) + v387 + v36, 8);
      v46 = __builtin_rotateleft32(v41, 10);
      v47 = v43 + __builtin_rotateleft32((v46 ^ v45 & (v46 ^ v44)) + v379 + v40 + 1518500249, 7);
      v48 = __builtin_rotateleft32(v44, 10);
      v49 = v46 + __builtin_rotateleft32((v48 ^ v47 & (v48 ^ v45)) + v376 + v43 + 1518500249, 6);
      v50 = __builtin_rotateleft32(v45, 10);
      v51 = v48 + __builtin_rotateleft32((v50 ^ v49 & (v50 ^ v47)) + v385 + v46 + 1518500249, 8);
      v52 = __builtin_rotateleft32(v47, 10);
      v53 = v50 + __builtin_rotateleft32((v52 ^ v51 & (v52 ^ v49)) + v372 + v48 + 1518500249, 13);
      v54 = __builtin_rotateleft32(v49, 10);
      v55 = v52 + __builtin_rotateleft32((v54 ^ v53 & (v54 ^ v51)) + v382 + v50 + 1518500249, 11);
      v56 = __builtin_rotateleft32(v51, 10);
      v57 = v54 + __builtin_rotateleft32((v56 ^ v55 & (v56 ^ v53)) + v378 + v52 + 1518500249, 9);
      v58 = __builtin_rotateleft32(v53, 10);
      v59 = v56 + __builtin_rotateleft32((v58 ^ v57 & (v58 ^ v55)) + v387 + v54 + 1518500249, 7);
      v60 = __builtin_rotateleft32(v55, 10);
      v61 = v58 + __builtin_rotateleft32((v60 ^ v59 & (v60 ^ v57)) + v375 + v56 + 1518500249, 15);
      v62 = __builtin_rotateleft32(v57, 10);
      v63 = v60 + __builtin_rotateleft32((v62 ^ v61 & (v62 ^ v59)) + v384 + v58 + 1518500249, 7);
      v64 = __builtin_rotateleft32(v59, 10);
      v65 = v62 + __builtin_rotateleft32((v64 ^ v63 & (v64 ^ v61)) + v371 + v60 + 1518500249, 12);
      v66 = __builtin_rotateleft32(v61, 10);
      v67 = v64 + __builtin_rotateleft32((v66 ^ v65 & (v66 ^ v63)) + v381 + v62 + 1518500249, 15);
      v68 = __builtin_rotateleft32(v63, 10);
      v69 = __builtin_rotateleft32((v68 ^ v67 & (v68 ^ v65)) + v377 + v64 + 1518500249, 9);
      v70 = __builtin_rotateleft32(v65, 10);
      v71 = v66 + v69;
      v72 = v68 + __builtin_rotateleft32((v70 ^ v71 & (v70 ^ v67)) + v373 + v66 + 1518500249, 11);
      v73 = __builtin_rotateleft32(v67, 10);
      v74 = v70 + __builtin_rotateleft32((v73 ^ v72 & (v73 ^ v71)) + v386 + v68 + 1518500249, 7);
      v75 = __builtin_rotateleft32(v71, 10);
      v76 = v73 + __builtin_rotateleft32((v75 ^ v74 & (v75 ^ v72)) + v383 + v70 + 1518500249, 13);
      v77 = __builtin_rotateleft32(v72, 10);
      v78 = v75 + __builtin_rotateleft32((v77 ^ v76 & (v77 ^ v74)) + v380 + v73 + 1518500249, 12);
      v79 = __builtin_rotateleft32(v74, 10);
      v80 = v77 + __builtin_rotateleft32((v79 ^ (v78 | ~v76)) + v375 + v75 + 1859775393, 11);
      v81 = __builtin_rotateleft32(v76, 10);
      v82 = v79 + __builtin_rotateleft32((v81 ^ (v80 | ~v78)) + v382 + v77 + 1859775393, 13);
      v83 = __builtin_rotateleft32(v78, 10);
      v84 = v81 + __builtin_rotateleft32((v83 ^ (v82 | ~v80)) + v386 + v79 + 1859775393, 6);
      v85 = __builtin_rotateleft32(v80, 10);
      v86 = v83 + __builtin_rotateleft32((v85 ^ (v84 | ~v82)) + v376 + v81 + 1859775393, 7);
      v87 = __builtin_rotateleft32(v82, 10);
      v88 = v85 + __builtin_rotateleft32((v87 ^ (v86 | ~v84)) + v381 + v83 + 1859775393, 14);
      v89 = __builtin_rotateleft32(v84, 10);
      v90 = v87 + __builtin_rotateleft32((v89 ^ (v88 | ~v86)) + v387 + v85 + 1859775393, 9);
      v91 = __builtin_rotateleft32(v86, 10);
      v92 = v89 + __builtin_rotateleft32((v91 ^ (v90 | ~v88)) + v380 + v87 + 1859775393, 13);
      v93 = __builtin_rotateleft32(v88, 10);
      v94 = v91 + __builtin_rotateleft32((v93 ^ (v92 | ~v90)) + v372 + v89 + 1859775393, 15);
      v95 = __builtin_rotateleft32(v90, 10);
      v96 = v93 + __builtin_rotateleft32((v95 ^ (v94 | ~v92)) + v373 + v91 + 1859775393, 14);
      v97 = __builtin_rotateleft32(v92, 10);
      v98 = v95 + __builtin_rotateleft32((v97 ^ (v96 | ~v94)) + v379 + v93 + 1859775393, 8);
      v99 = __builtin_rotateleft32(v94, 10);
      v100 = v97 + __builtin_rotateleft32((v99 ^ (v98 | ~v96)) + v371 + v95 + 1859775393, 13);
      v101 = __builtin_rotateleft32(v96, 10);
      v102 = v99 + __builtin_rotateleft32((v101 ^ (v100 | ~v98)) + v378 + v97 + 1859775393, 6);
      v103 = __builtin_rotateleft32(v98, 10);
      v104 = v101 + __builtin_rotateleft32((v103 ^ (v102 | ~v100)) + v385 + v99 + 1859775393, 5);
      v105 = __builtin_rotateleft32(v100, 10);
      v106 = v103 + __builtin_rotateleft32((v105 ^ (v104 | ~v102)) + v383 + v101 + 1859775393, 12);
      v107 = __builtin_rotateleft32(v102, 10);
      v108 = v105 + __builtin_rotateleft32((v107 ^ (v106 | ~v104)) + v377 + v103 + 1859775393, 7);
      v109 = __builtin_rotateleft32(v104, 10);
      v110 = v107 + __builtin_rotateleft32((v109 ^ (v108 | ~v106)) + v384 + v105 + 1859775393, 5);
      v111 = __builtin_rotateleft32(v106, 10);
      v112 = v109 + __builtin_rotateleft32((v108 ^ v111 & (v108 ^ v110)) + v372 + v107 - 1894007588, 11);
      v113 = __builtin_rotateleft32(v108, 10);
      v114 = v111 + __builtin_rotateleft32((v110 ^ v113 & (v110 ^ v112)) + v381 + v109 - 1894007588, 12);
      v115 = __builtin_rotateleft32(v110, 10);
      v116 = v113 + __builtin_rotateleft32((v112 ^ v115 & (v112 ^ v114)) + v383 + v111 - 1894007588, 14);
      v117 = __builtin_rotateleft32(v112, 10);
      v118 = v115 + __builtin_rotateleft32((v114 ^ v117 & (v114 ^ v116)) + v382 + v113 - 1894007588, 15);
      v119 = __builtin_rotateleft32(v114, 10);
      v120 = v117 + __builtin_rotateleft32((v116 ^ v119 & (v116 ^ v118)) + v371 + v115 - 1894007588, 14);
      v121 = __builtin_rotateleft32(v116, 10);
      v122 = v119 + __builtin_rotateleft32((v118 ^ v121 & (v118 ^ v120)) + v380 + v117 - 1894007588, 15);
      v123 = __builtin_rotateleft32(v118, 10);
      v124 = v121 + __builtin_rotateleft32((v120 ^ v123 & (v120 ^ v122)) + v384 + v119 - 1894007588, 9);
      v125 = __builtin_rotateleft32(v120, 10);
      v126 = v123 + __builtin_rotateleft32((v122 ^ v125 & (v122 ^ v124)) + v376 + v121 - 1894007588, 8);
      v127 = __builtin_rotateleft32(v122, 10);
      v128 = v125 + __builtin_rotateleft32((v124 ^ v127 & (v124 ^ v126)) + v385 + v123 - 1894007588, 9);
      v129 = __builtin_rotateleft32(v124, 10);
      v130 = v127 + __builtin_rotateleft32((v126 ^ v129 & (v126 ^ v128)) + v375 + v125 - 1894007588, 14);
      v131 = __builtin_rotateleft32(v126, 10);
      v132 = v129 + __builtin_rotateleft32((v128 ^ v131 & (v128 ^ v130)) + v379 + v127 - 1894007588, 5);
      v133 = __builtin_rotateleft32(v128, 10);
      v134 = v131 + __builtin_rotateleft32((v130 ^ v133 & (v130 ^ v132)) + v387 + v129 - 1894007588, 6);
      v135 = __builtin_rotateleft32(v130, 10);
      v136 = v133 + __builtin_rotateleft32((v132 ^ v135 & (v132 ^ v134)) + v386 + v131 - 1894007588, 8);
      v137 = __builtin_rotateleft32(v132, 10);
      v138 = v135 + __builtin_rotateleft32((v134 ^ v137 & (v134 ^ v136)) + v377 + v133 - 1894007588, 6);
      v139 = __builtin_rotateleft32(v134, 10);
      v140 = v137 + __builtin_rotateleft32((v136 ^ v139 & (v136 ^ v138)) + v378 + v135 - 1894007588, 5);
      v141 = __builtin_rotateleft32(v136, 10);
      v142 = (v138 ^ v141 & (v138 ^ v140)) + v373 + v137 - 1894007588;
      v143 = __builtin_rotateleft32(v138, 10);
      v144 = v139 + __builtin_rotateleft32(v142, 12);
      v145 = (v144 ^ (v140 | ~v143)) + v376 + v139 - 1454113458;
      v146 = __builtin_rotateleft32(v140, 10);
      v147 = v141 + __builtin_rotateleft32(v145, 9);
      v148 = (v147 ^ (v144 | ~v146)) + v371 + v141 - 1454113458;
      v149 = __builtin_rotateleft32(v144, 10);
      v150 = v143 + __builtin_rotateleft32(v148, 15);
      v151 = (v150 ^ (v147 | ~v149)) + v377 + v143 - 1454113458;
      v152 = __builtin_rotateleft32(v147, 10);
      v153 = v146 + __builtin_rotateleft32(v151, 5);
      v154 = (v153 ^ (v150 | ~v152)) + v381 + v146 - 1454113458;
      v155 = __builtin_rotateleft32(v150, 10);
      v156 = v149 + __builtin_rotateleft32(v154, 11);
      v157 = v152 + __builtin_rotateleft32((v156 ^ (v153 | ~v155)) + v379 + v149 - 1454113458, 6);
      v158 = __builtin_rotateleft32(v153, 10);
      v159 = (v157 ^ (v156 | ~v158)) + v384 + v152 - 1454113458;
      v160 = __builtin_rotateleft32(v156, 10);
      v161 = v155 + __builtin_rotateleft32(v159, 8);
      v162 = (v161 ^ (v157 | ~v160)) + v373 + v155 - 1454113458;
      v163 = __builtin_rotateleft32(v157, 10);
      v164 = v158 + __builtin_rotateleft32(v162, 13);
      v165 = (v164 ^ (v161 | ~v163)) + v382 + v158 - 1454113458;
      v166 = __builtin_rotateleft32(v161, 10);
      v167 = v160 + __builtin_rotateleft32(v165, 12);
      v168 = (v167 ^ (v164 | ~v166)) + v386 + v160 - 1454113458;
      v169 = __builtin_rotateleft32(v164, 10);
      v170 = v163 + __builtin_rotateleft32(v168, 5);
      v171 = (v170 ^ (v167 | ~v169)) + v372 + v163 - 1454113458;
      v172 = __builtin_rotateleft32(v167, 10);
      v173 = v166 + __builtin_rotateleft32(v171, 12);
      v174 = (v173 ^ (v170 | ~v172)) + v375 + v166 - 1454113458;
      v175 = __builtin_rotateleft32(v170, 10);
      v176 = v169 + __builtin_rotateleft32(v174, 13);
      v177 = (v176 ^ (v173 | ~v175)) + v380 + v169 - 1454113458;
      v178 = __builtin_rotateleft32(v173, 10);
      v179 = v172 + __builtin_rotateleft32(v177, 14);
      v180 = (v179 ^ (v176 | ~v178)) + v383 + v172 - 1454113458;
      v181 = __builtin_rotateleft32(v176, 10);
      v182 = v175 + __builtin_rotateleft32(v180, 11);
      v183 = __builtin_rotateleft32(v378 + v175 - 1454113458 + (v182 ^ (v179 | ~v181)), 8);
      v394 = v178 + v183;
      v395 = __builtin_rotateleft32(v179, 10);
      v397 = v181 + __builtin_rotateleft32(v387 + v178 - 1454113458 + ((v178 + v183) ^ (v182 | ~v395)), 5);
      v398 = __builtin_rotateleft32(v182, 10);
      v399 = v385 + v181 - 1454113458;
      v184 = v390 + __builtin_rotateleft32((v389 ^ (v393 | ~v388)) + v377 + v396 + 1352829926, 8);
      v185 = v388 + __builtin_rotateleft32((v184 ^ (v389 | ~v391)) + v386 + v390 + 1352829926, 9);
      v186 = (v185 ^ (v184 | ~v392)) + v379 + v388 + 1352829926;
      v187 = __builtin_rotateleft32(v184, 10);
      v188 = v391 + __builtin_rotateleft32(v186, 9);
      v189 = (v188 ^ (v185 | ~v187)) + v371 + v391 + 1352829926;
      v190 = __builtin_rotateleft32(v185, 10);
      v191 = v392 + __builtin_rotateleft32(v189, 11);
      v192 = (v191 ^ (v188 | ~v190)) + v392 + v381 + 1352829926;
      v193 = __builtin_rotateleft32(v188, 10);
      v194 = v187 + __builtin_rotateleft32(v192, 13);
      v195 = (v194 ^ (v191 | ~v193)) + v373 + v187 + 1352829926;
      v196 = __builtin_rotateleft32(v191, 10);
      v197 = v190 + __builtin_rotateleft32(v195, 15);
      v198 = v193 + __builtin_rotateleft32((v197 ^ (v194 | ~v196)) + v383 + v190 + 1352829926, 15);
      v199 = __builtin_rotateleft32(v194, 10);
      v200 = (v198 ^ (v197 | ~v199)) + v376 + v193 + 1352829926;
      v201 = __builtin_rotateleft32(v197, 10);
      v202 = v196 + __builtin_rotateleft32(v200, 5);
      v203 = (v202 ^ (v198 | ~v201)) + v385 + v196 + 1352829926;
      v204 = __builtin_rotateleft32(v198, 10);
      v205 = v199 + __builtin_rotateleft32(v203, 7);
      v206 = (v205 ^ (v202 | ~v204)) + v378 + v199 + 1352829926;
      v207 = __builtin_rotateleft32(v202, 10);
      v208 = v201 + __builtin_rotateleft32(v206, 7);
      v209 = (v208 ^ (v205 | ~v207)) + v387 + v201 + 1352829926;
      v210 = __builtin_rotateleft32(v205, 10);
      v211 = v204 + __builtin_rotateleft32(v209, 8);
      v212 = (v211 ^ (v208 | ~v210)) + v380 + v204 + 1352829926;
      v213 = __builtin_rotateleft32(v208, 10);
      v214 = v207 + __builtin_rotateleft32(v212, 11);
      v215 = (v214 ^ (v211 | ~v213)) + v372 + v207 + 1352829926;
      v216 = __builtin_rotateleft32(v211, 10);
      v217 = v210 + __builtin_rotateleft32(v215, 14);
      v218 = (v217 ^ (v214 | ~v216)) + v382 + v210 + 1352829926;
      v219 = __builtin_rotateleft32(v214, 10);
      v220 = v213 + __builtin_rotateleft32(v218, 14);
      v221 = (v220 ^ (v217 | ~v219)) + v375 + v213 + 1352829926;
      v222 = __builtin_rotateleft32(v217, 10);
      v223 = v216 + __builtin_rotateleft32(v221, 12);
      v224 = v219 + __builtin_rotateleft32((v223 ^ (v220 | ~v222)) + v384 + v216 + 1352829926, 6);
      v225 = __builtin_rotateleft32(v220, 10);
      v226 = v222 + __builtin_rotateleft32((v223 ^ v225 & (v223 ^ v224)) + v378 + v219 + 1548603684, 9);
      v227 = __builtin_rotateleft32(v223, 10);
      v228 = v225 + __builtin_rotateleft32((v224 ^ v227 & (v224 ^ v226)) + v383 + v222 + 1548603684, 13);
      v229 = __builtin_rotateleft32(v224, 10);
      v230 = v227 + __builtin_rotateleft32((v226 ^ v229 & (v226 ^ v228)) + v375 + v225 + 1548603684, 15);
      v231 = __builtin_rotateleft32(v226, 10);
      v232 = v229 + __builtin_rotateleft32((v228 ^ v231 & (v228 ^ v230)) + v379 + v227 + 1548603684, 7);
      v233 = __builtin_rotateleft32(v228, 10);
      v234 = v231 + __builtin_rotateleft32((v230 ^ v233 & (v230 ^ v232)) + v371 + v229 + 1548603684, 12);
      v235 = __builtin_rotateleft32(v230, 10);
      v236 = v233 + __builtin_rotateleft32((v232 ^ v235 & (v232 ^ v234)) + v385 + v231 + 1548603684, 8);
      v237 = __builtin_rotateleft32(v232, 10);
      v238 = v235 + __builtin_rotateleft32((v234 ^ v237 & (v234 ^ v236)) + v377 + v233 + 1548603684, 9);
      v239 = __builtin_rotateleft32(v234, 10);
      v240 = v237 + __builtin_rotateleft32((v236 ^ v239 & (v236 ^ v238)) + v382 + v235 + 1548603684, 11);
      v241 = __builtin_rotateleft32(v236, 10);
      v242 = v239 + __builtin_rotateleft32((v238 ^ v241 & (v238 ^ v240)) + v386 + v237 + 1548603684, 7);
      v243 = __builtin_rotateleft32(v238, 10);
      v244 = v241 + __builtin_rotateleft32((v240 ^ v243 & (v240 ^ v242)) + v387 + v239 + 1548603684, 7);
      v245 = __builtin_rotateleft32(v240, 10);
      v246 = v243 + __builtin_rotateleft32((v242 ^ v245 & (v242 ^ v244)) + v380 + v241 + 1548603684, 12);
      v247 = __builtin_rotateleft32(v242, 10);
      v248 = v245 + __builtin_rotateleft32((v244 ^ v247 & (v244 ^ v246)) + v384 + v243 + 1548603684, 7);
      v249 = __builtin_rotateleft32(v244, 10);
      v250 = v247 + __builtin_rotateleft32((v246 ^ v249 & (v246 ^ v248)) + v376 + v245 + 1548603684, 6);
      v251 = __builtin_rotateleft32(v246, 10);
      v252 = v249 + __builtin_rotateleft32((v248 ^ v251 & (v248 ^ v250)) + v381 + v247 + 1548603684, 15);
      v253 = __builtin_rotateleft32(v248, 10);
      v254 = v251 + __builtin_rotateleft32((v250 ^ v253 & (v250 ^ v252)) + v372 + v249 + 1548603684, 13);
      v255 = __builtin_rotateleft32(v250, 10);
      v256 = v253 + __builtin_rotateleft32((v252 ^ v255 & (v252 ^ v254)) + v373 + v251 + 1548603684, 11);
      v257 = __builtin_rotateleft32(v252, 10);
      v258 = v255 + __builtin_rotateleft32((v257 ^ (v256 | ~v254)) + v387 + v253 + 1836072691, 9);
      v259 = __builtin_rotateleft32(v254, 10);
      v260 = v257 + __builtin_rotateleft32((v259 ^ (v258 | ~v256)) + v377 + v255 + 1836072691, 7);
      v261 = __builtin_rotateleft32(v256, 10);
      v262 = v259 + __builtin_rotateleft32((v261 ^ (v260 | ~v258)) + v372 + v257 + 1836072691, 15);
      v263 = __builtin_rotateleft32(v258, 10);
      v264 = v261 + __builtin_rotateleft32((v263 ^ (v262 | ~v260)) + v375 + v259 + 1836072691, 11);
      v265 = __builtin_rotateleft32(v260, 10);
      v266 = v263 + __builtin_rotateleft32((v265 ^ (v264 | ~v262)) + v379 + v261 + 1836072691, 8);
      v267 = __builtin_rotateleft32(v262, 10);
      v268 = v265 + __builtin_rotateleft32((v267 ^ (v266 | ~v264)) + v386 + v263 + 1836072691, 6);
      v269 = __builtin_rotateleft32(v264, 10);
      v270 = v267 + __builtin_rotateleft32((v269 ^ (v268 | ~v266)) + v378 + v265 + 1836072691, 6);
      v271 = __builtin_rotateleft32(v266, 10);
      v272 = v269 + __builtin_rotateleft32((v271 ^ (v270 | ~v268)) + v381 + v267 + 1836072691, 14);
      v273 = __builtin_rotateleft32(v268, 10);
      v274 = v271 + __builtin_rotateleft32((v273 ^ (v272 | ~v270)) + v383 + v269 + 1836072691, 12);
      v275 = __builtin_rotateleft32(v270, 10);
      v276 = v273 + __builtin_rotateleft32((v275 ^ (v274 | ~v272)) + v380 + v271 + 1836072691, 13);
      v277 = __builtin_rotateleft32(v272, 10);
      v278 = v275 + __builtin_rotateleft32((v277 ^ (v276 | ~v274)) + v384 + v273 + 1836072691, 5);
      v279 = __builtin_rotateleft32(v274, 10);
      v280 = v277 + __builtin_rotateleft32((v279 ^ (v278 | ~v276)) + v373 + v275 + 1836072691, 14);
      v281 = __builtin_rotateleft32(v276, 10);
      v282 = v279 + __builtin_rotateleft32((v281 ^ (v280 | ~v278)) + v382 + v277 + 1836072691, 13);
      v283 = __builtin_rotateleft32(v278, 10);
      v284 = v281 + __builtin_rotateleft32((v283 ^ (v282 | ~v280)) + v371 + v279 + 1836072691, 13);
      v285 = __builtin_rotateleft32(v280, 10);
      v286 = v283 + __builtin_rotateleft32((v285 ^ (v284 | ~v282)) + v376 + v281 + 1836072691, 7);
      v287 = __builtin_rotateleft32(v282, 10);
      v288 = v285 + __builtin_rotateleft32((v287 ^ (v286 | ~v284)) + v385 + v283 + 1836072691, 5);
      v289 = __builtin_rotateleft32(v284, 10);
      v290 = v287 + __builtin_rotateleft32((v289 ^ v288 & (v289 ^ v286)) + v380 + v285 + 2053994217, 15);
      v291 = __builtin_rotateleft32(v286, 10);
      v292 = v289 + __builtin_rotateleft32((v291 ^ v290 & (v291 ^ v288)) + v378 + v287 + 2053994217, 5);
      v293 = __builtin_rotateleft32(v288, 10);
      v294 = v291 + __builtin_rotateleft32((v293 ^ v292 & (v293 ^ v290)) + v376 + v289 + 2053994217, 8);
      v295 = __builtin_rotateleft32(v290, 10);
      v296 = v293 + __builtin_rotateleft32((v295 ^ v294 & (v295 ^ v292)) + v372 + v291 + 2053994217, 11);
      v297 = __builtin_rotateleft32(v292, 10);
      v298 = v295 + __builtin_rotateleft32((v297 ^ v296 & (v297 ^ v294)) + v375 + v293 + 2053994217, 14);
      v299 = __builtin_rotateleft32(v294, 10);
      v300 = v297 + __builtin_rotateleft32((v299 ^ v298 & (v299 ^ v296)) + v383 + v295 + 2053994217, 14);
      v301 = __builtin_rotateleft32(v296, 10);
      v302 = v299 + __builtin_rotateleft32((v301 ^ v300 & (v301 ^ v298)) + v387 + v297 + 2053994217, 6);
      v303 = __builtin_rotateleft32(v298, 10);
      v304 = v301 + __builtin_rotateleft32((v303 ^ v302 & (v303 ^ v300)) + v371 + v299 + 2053994217, 14);
      v305 = __builtin_rotateleft32(v300, 10);
      v306 = v303 + __builtin_rotateleft32((v305 ^ v304 & (v305 ^ v302)) + v377 + v301 + 2053994217, 6);
      v307 = __builtin_rotateleft32(v302, 10);
      v308 = v305 + __builtin_rotateleft32((v307 ^ v306 & (v307 ^ v304)) + v384 + v303 + 2053994217, 9);
      v309 = __builtin_rotateleft32(v304, 10);
      v310 = v307 + __builtin_rotateleft32((v309 ^ v308 & (v309 ^ v306)) + v373 + v305 + 2053994217, 12);
      v311 = __builtin_rotateleft32(v306, 10);
      v312 = v309 + __builtin_rotateleft32((v311 ^ v310 & (v311 ^ v308)) + v385 + v307 + 2053994217, 9);
      v313 = __builtin_rotateleft32(v308, 10);
      v314 = v311 + __builtin_rotateleft32((v313 ^ v312 & (v313 ^ v310)) + v381 + v309 + 2053994217, 12);
      v315 = __builtin_rotateleft32(v310, 10);
      v316 = __builtin_rotateleft32((v315 ^ v314 & (v315 ^ v312)) + v379 + v311 + 2053994217, 5);
      v317 = __builtin_rotateleft32(v312, 10);
      v318 = v313 + v316;
      v319 = v315 + __builtin_rotateleft32((v317 ^ v318 & (v317 ^ v314)) + v382 + v313 + 2053994217, 15);
      v320 = __builtin_rotateleft32(v314, 10);
      v321 = (v320 ^ v319 & (v320 ^ v318)) + v386 + v315 + 2053994217;
      v322 = __builtin_rotateleft32(v318, 10);
      v323 = v317 + __builtin_rotateleft32(v321, 8);
      v324 = (v323 ^ v322 ^ v319) + v384 + v317;
      v325 = __builtin_rotateleft32(v319, 10);
      v326 = v320 + __builtin_rotateleft32(v324, 8);
      v327 = (v326 ^ v325 ^ v323) + v387 + v320;
      v328 = __builtin_rotateleft32(v323, 10);
      v329 = v322 + __builtin_rotateleft32(v327, 5);
      v330 = v325 + __builtin_rotateleft32((v329 ^ v328 ^ v326) + v382 + v322, 12);
      v331 = __builtin_rotateleft32(v326, 10);
      v332 = v376 + v325 + (v330 ^ v331 ^ v329);
      v333 = __builtin_rotateleft32(v329, 10);
      v334 = v328 + __builtin_rotateleft32(v332, 9);
      v335 = (v334 ^ v333 ^ v330) + v372 + v328;
      v336 = __builtin_rotateleft32(v330, 10);
      v337 = v331 + __builtin_rotateleft32(v335, 12);
      v338 = (v337 ^ v336 ^ v334) + v377 + v331;
      v339 = __builtin_rotateleft32(v334, 10);
      v340 = v333 + __builtin_rotateleft32(v338, 5);
      v341 = (v340 ^ v339 ^ v337) + v380 + v333;
      v342 = __builtin_rotateleft32(v337, 10);
      v343 = v336 + __builtin_rotateleft32(v341, 14);
      v344 = __builtin_rotateleft32((v343 ^ v342 ^ v340) + v379 + v336, 6);
      v345 = __builtin_rotateleft32(v340, 10);
      v346 = v339 + v344;
      v347 = (v346 ^ v345 ^ v343) + v378 + v339;
      v348 = __builtin_rotateleft32(v343, 10);
      v349 = v342 + __builtin_rotateleft32(v347, 8);
      v350 = (v349 ^ v348 ^ v346) + v373 + v342;
      v351 = __builtin_rotateleft32(v346, 10);
      v352 = v345 + __builtin_rotateleft32(v350, 13);
      v353 = (v352 ^ v351 ^ v349) + v385 + v345;
      v354 = __builtin_rotateleft32(v349, 10);
      v355 = v348 + __builtin_rotateleft32(v353, 6);
      v356 = (v355 ^ v354 ^ v352) + v386 + v348;
      v357 = __builtin_rotateleft32(v352, 10);
      v358 = v351 + __builtin_rotateleft32(v356, 5);
      v359 = (v358 ^ v357 ^ v355) + v371 + v351;
      v360 = __builtin_rotateleft32(v355, 10);
      v361 = v354 + __builtin_rotateleft32(v359, 15);
      v362 = (v361 ^ v360 ^ v358) + v375 + v354;
      v363 = __builtin_rotateleft32(v358, 10);
      v364 = v357 + __builtin_rotateleft32(v362, 13);
      v374 = v360 + __builtin_rotateleft32((v364 ^ v363 ^ v361) + v381 + v357, 11);
      v365 = __builtin_rotateleft32(v361, 10);
      v366 = v389 + __builtin_rotateleft32(v364, 10);
      v389 = __builtin_rotateleft32(v394, 10) + v365 + v393;
      a1[1] = v389;
      v367 = v397 + v366;
      v393 = v398 + v363 + v388;
      a1[2] = v393;
      v368 = v390 + v395 + v363 + __builtin_rotateleft32(v383 + v360 + (v374 ^ v365 ^ v364), 11);
      a1[3] = v368;
      v388 = v368;
      result = a1;
      v369 = a3 == (uint32_t *)((int *)((char *)&dword_0 + 1));
      a3 = (uint32_t *)((char *)a3 - 1);
      v390 = v396 + v395 + v374 + __builtin_rotateleft32(v399 + (v397 ^ (v394 | ~v398)), 6);
      a1[4] = v390;
      *a1 = v367;
      if ( v369 )
        break;
      v396 = v367;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: RIPEMD160_Final  (binary VA: 0x19cf7a0)
// Original: RIPEMD160_Final
// ----------------------------------------------------------------------------
int RIPEMD160_Final(uint32_t *a1, uint32_t *a2)
{
  int v2;
  uint16_t *v3;
  size_t n;
  int v5;
  unsigned int v6;
  uint16_t *v7;

  v2 = a2[23];
  v3 = (uint16_t *)(a2 + 7);
  n = 55 - v2;
  v5 = v2 + 1;
  *((uint8_t *)a2 + v2 + 28) = 0x80;
  if ( (unsigned int)(v2 + 1) > 0x38 )
  {
    memset((char *)v3 + v5, 0, 63 - v2);
    ripemd160_block_data_order(a2, a2 + 7, (int *)((char *)&dword_0 + 1));
    n = 56;
    v5 = 0;
  }
  memset((char *)v3 + v5, 0, n);
  a2[21] = a2[5];
  a2[22] = a2[6];
  ripemd160_block_data_order(a2, a2 + 7, (int *)((char *)&dword_0 + 1));
  a2[23] = 0;
  v6 = 64;
  if ( ((uint8_t)(uintptr_t)v3 & 1) != 0 )
  {
    v3 = (uint16_t *)((char *)a2 + 29);
    *((uint8_t *)a2 + 28) = 0;
    LOBYTE(v6) = 63;
    if ( (((unsigned int)(uintptr_t)(a2) + 29) & 2) == 0 )
      goto LABEL_5;
  }
  else if ( ((uint8_t)(uintptr_t)v3 & 2) == 0 )
  {
    goto LABEL_5;
  }
  *v3 = 0;
  v6 -= 2;
  ++v3;
LABEL_5:
  memset(v3, 0, 4 * (v6 >> 2));
  v7 = &v3[2 * (v6 >> 2)];
  if ( (v6 & 2) != 0 )
    *v7++ = 0;
  if ( (v6 & 1) != 0 )
    *(uint8_t *)v7 = 0;
  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = a2[2];
  a1[3] = a2[3];
  a1[4] = a2[4];
  return 1;
}

// ----------------------------------------------------------------------------
// Function: RIPEMD160_Transform  (binary VA: 0x19cf8f0)
// Original: RIPEMD160_Transform
// ----------------------------------------------------------------------------
uint32_t * RIPEMD160_Transform(uint32_t *a1, uint32_t *a2)
{
  return ripemd160_block_data_order(a1, a2, (int *)((char *)&dword_0 + 1));
}

// ----------------------------------------------------------------------------
// Function: RIPEMD160_Update  (binary VA: 0x19cf930)
// Original: RIPEMD160_Update
// ----------------------------------------------------------------------------
int RIPEMD160_Update(int a1, char *src, size_t a3)
{
  size_t v3;
  size_t v4;
  size_t v5;
  bool v6; // cc
  int v7;
  int v8;
  int v9;
  char *v10;
  uint16_t *v11;
  unsigned int v12;
  uint8_t *v13;
  size_t v14;
  size_t v16;
  uint32_t *n;
  char *v18;
  uint32_t *v19;

  v3 = a3;
  if ( a3 != 0 )
  {
    v4 = *(uint32_t *)(a1 + 20);
    v5 = v4 + 8 * a3;
    v6 = v4 <= v5;
    v7 = *(uint32_t *)(a1 + 24);
    if ( !v6 )
      ++v7;
    *(uint32_t *)(a1 + 20) = v5;
    v8 = *(uint32_t *)(a1 + 92);
    *(uint32_t *)(a1 + 24) = (a3 >> 29) + v7;
    v18 = src;
    if ( v8 != 0 )
    {
      v19 = (uint32_t *)(a1 + 28);
      if ( a3 <= 0x3F && a3 + v8 <= 0x3F )
      {
        memcpy((char *)v19 + v8, src, a3);
        *(uint32_t *)(a1 + 92) += a3;
        return 1;
      }
      v9 = 64 - v8;
      v3 = a3 - (64 - v8);
      memcpy((char *)v19 + v8, src, 64 - v8);
      ripemd160_block_data_order((uint32_t *)a1, v19, (int *)((char *)&dword_0 + 1));
      *(uint32_t *)(a1 + 92) = 0;
      v10 = &src[v9];
      v11 = (uint16_t *)(a1 + 28);
      v18 = v10;
      v12 = 64;
      if ( ((uint8_t)(uintptr_t)v19 & 1) != 0 )
      {
        *(uint8_t *)(a1 + 28) = 0;
        v11 = (uint16_t *)(a1 + 29);
        LOBYTE(v12) = 63;
      }
      if ( ((uint8_t)(uintptr_t)v11 & 2) != 0 )
      {
        *v11 = 0;
        v12 -= 2;
        ++v11;
      }
      memset(v11, 0, 4 * (v12 >> 2));
      v13 = (uint8_t *)(&v11[2 * (v12 >> 2)]);
      if ( (v12 & 2) == 0 )
      {
        if ( (v12 & 1) == 0 )
          goto LABEL_13;
LABEL_20:
        *v13 = 0;
        v14 = v3 >> 6;
        if ( v3 >> 6 == 0 )
        {
LABEL_14:
          if ( v3 == 0 )
            return 1;
LABEL_16:
          *(uint32_t *)(a1 + 92) = v3;
          memcpy((void *)(a1 + 28), v18, v3);
          return 1;
        }
LABEL_17:
        n = (uint32_t *)v14;
        v16 = v14 << 6;
        v3 -= v16;
        ripemd160_block_data_order((uint32_t *)a1, v18, n);
        v18 += v16;
        if ( v3 == 0 )
          return 1;
        goto LABEL_16;
      }
      *(uint16_t *)v13 = 0;
      v13 += 2;
      if ( (v12 & 1) != 0 )
        goto LABEL_20;
    }
LABEL_13:
    v14 = v3 >> 6;
    if ( v3 >> 6 == 0 )
      goto LABEL_14;
    goto LABEL_17;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19CFB00  (binary VA: 0x19cfb00)
// Original: sub_19CFB00
// ----------------------------------------------------------------------------
int sub_19CFB00(int a1, int a2)
{
  return i2d_RSAPrivateKey(*(uint32_t *)(a1 + 20), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_19CFB30  (binary VA: 0x19cfb30)
// Original: sub_19CFB30
// ----------------------------------------------------------------------------
int sub_19CFB30(int a1, int a2, int a3, uint32_t *a4)
{
  int result;
  char **v5;
  int v6[4];

  v6[0] = 0;
  switch ( a2 )
  {
    case 1:
      result = 1;
      if ( a3 == 0 )
      {
        PKCS7_SIGNER_INFO_get0_algs(a4, nullptr, nullptr, v6);
        goto LABEL_14;
      }
      break;
    case 2:
      result = 1;
      if ( a3 == 0 )
      {
        PKCS7_RECIP_INFO_get0_alg((int)(uintptr_t)(a4), v6);
        goto LABEL_14;
      }
      break;
    case 3:
      *a4 = 64;
      result = 1;
      break;
    case 5:
      result = 1;
      if ( a3 == 0 )
      {
        CMS_SignerInfo_get0_algs(a4, 0, 0, 0, v6);
        goto LABEL_14;
      }
      break;
    case 7:
      result = 1;
      if ( a3 == 0 )
      {
        CMS_RecipientInfo_ktri_get0_algs(a4, 0, 0, v6);
LABEL_14:
        if ( v6[0] != 0 )
        {
          v5 = OBJ_nid2obj(6u);
          X509_ALGOR_set0(v6[0], (int)(uintptr_t)(v5), 5, 0);
        }
        result = 1;
      }
      break;
    default:
      result = -2;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19CFC90  (binary VA: 0x19cfc90)
// Original: sub_19CFC90
// ----------------------------------------------------------------------------
int sub_19CFC90(int a1)
{
  { RSA_free(*(void **)(a1 + 20)); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_19CFCC0  (binary VA: 0x19cfcc0)
// Original: sub_19CFCC0
// ----------------------------------------------------------------------------
int sub_19CFCC0(int a1)
{
  return BN_num_bits(*(uint32_t **)(*(uint32_t *)(a1 + 20) + 16));
}

// ----------------------------------------------------------------------------
// Function: sub_19CFCF0  (binary VA: 0x19cfcf0)
// Original: sub_19CFCF0
// ----------------------------------------------------------------------------
unsigned int sub_19CFCF0(unsigned int result, unsigned int *a2)
{
  unsigned int v3;
  int v4;
  int v5;
  int v6;

  if ( result != 0 )
  {
    v3 = *a2;
    v4 = BN_num_bits((uint32_t *)result);
    v5 = v4 + 14;
    v6 = v4 + 7;
    if ( v6 < 0 )
      v6 = v5;
    result = v6 >> 3;
    if ( v3 < result )
      *a2 = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19CFD40  (binary VA: 0x19cfd40)
// Original: sub_19CFD40
// ----------------------------------------------------------------------------
int sub_19CFD40(int a1)
{
  return RSA_size(*(uint32_t *)(a1 + 20));
}

// ----------------------------------------------------------------------------
// Function: sub_19CFD70  (binary VA: 0x19cfd70)
// Original: sub_19CFD70
// ----------------------------------------------------------------------------
bool sub_19CFD70(uint32_t *a1, uint32_t *a2, int a3, int a4)
{
  unsigned int v6;
  uint8_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
  const char *v11;
  typedef int _g4_t_v13;
  typedef bool _g4_t_v14;
  typedef const char *_g4_t_v15;
  typedef unsigned int _g4_t_v16[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v16)) > _g4_s3 ? (28u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);

  v6 = a2[4];
  v16[0] = 0;
  sub_19CFCF0(v6, v16);
  sub_19CFCF0(a2[5], v16);
  if ( a4 != 0 )
  {
    sub_19CFCF0(a2[6], v16);
    sub_19CFCF0(a2[7], v16);
    sub_19CFCF0(a2[8], v16);
    sub_19CFCF0(a2[9], v16);
    sub_19CFCF0(a2[10], v16);
    sub_19CFCF0(a2[11], v16);
  }
  v7 = CRYPTO_malloc(v16[0] + 10, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v7 == nullptr )
  {
    ERR_put_error(4, 146, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return false;
  }
  v8 = (uint32_t *)a2[4];
  v9 = 0;
  if ( v8 != nullptr )
    v9 = BN_num_bits(v8);
  v13 = v9;
  v14 = false;
  if ( BIO_indent(a1, a3, 128) != 0 )
  {
    if ( a4 != 0 && (v10 = a2[6]) != 0 )
    {
      if ( BIO_printf(v13, v10, (int)(uintptr_t)(a1), "Private-Key: (%d bit)\n", v13) > 0 )
      {
        v11 = "modulus:";
        v15 = "publicExponent:";
LABEL_13:
        v14 = false;
        if ( ASN1_bn_print(a1, v11, a2[4], v7, a3) != 0 && ASN1_bn_print(a1, v15, a2[5], v7, a3) != 0 )
        {
          v14 = true;
          if ( a4 != 0 )
          {
            v14 = false;
            if ( ASN1_bn_print(a1, "privateExponent:", a2[6], v7, a3) != 0
              && ASN1_bn_print(a1, "prime1:", a2[7], v7, a3) != 0
              && ASN1_bn_print(a1, "prime2:", a2[8], v7, a3) != 0
              && ASN1_bn_print(a1, "exponent1:", a2[9], v7, a3) != 0
              && ASN1_bn_print(a1, "exponent2:", a2[10], v7, a3) != 0 )
            {
              v14 = ASN1_bn_print(a1, "coefficient:", a2[11], v7, a3) != 0;
            }
          }
        }
      }
    }
    else
    {
      v14 = false;
      if ( BIO_printf(v13, v10, (int)(uintptr_t)(a1), "Public-Key: (%d bit)\n", v13) > 0 )
      {
        v11 = "Modulus:";
        v15 = "Exponent:";
        goto LABEL_13;
      }
    }
  }
  CRYPTO_free(v7);
  return v14;
}

// ----------------------------------------------------------------------------
// Function: sub_19D00C0  (binary VA: 0x19d00c0)
// Original: sub_19D00C0
// ----------------------------------------------------------------------------
bool sub_19D00C0(uint32_t *a1, int a2, int a3)
{
  return sub_19CFD70(a1, *(uint32_t **)(a2 + 20), a3, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_19D00E0  (binary VA: 0x19d00e0)
// Original: sub_19D00E0
// ----------------------------------------------------------------------------
bool sub_19D00E0(uint32_t *a1, int a2, int a3)
{
  return sub_19CFD70(a1, *(uint32_t **)(a2 + 20), a3, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_19D0100  (binary VA: 0x19d0100)
// Original: sub_19D0100
// ----------------------------------------------------------------------------
int sub_19D0100(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  void *v5;
  char **v6;
  int v7;
  typedef void *_g4_t_v9;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  v9 = nullptr;
  v2 = i2d_RSAPublicKey(*(uint32_t *)(a2 + 20), (int)(uintptr_t)(&v9));
  v3 = 0;
  v4 = v2;
  if ( v2 > 0 )
  {
    v5 = v9;
    v6 = OBJ_nid2obj(6u);
    v7 = X509_PUBKEY_set0_param(a1, v6, 5, 0, v5, v4);
    v3 = 1;
    if ( v7 == 0 )
    {
      CRYPTO_free(v9);
      return 0;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_19D01B0  (binary VA: 0x19d01b0)
// Original: sub_19D01B0
// ----------------------------------------------------------------------------
int sub_19D01B0(char *a1, int a2, int a3)
{
  int v3;

  v3 = d2i_RSAPrivateKey(0, a2, a3);
  if ( v3 != 0 )
  {
    EVP_PKEY_assign(a1, 6u, v3);
    return 1;
  }
  else
  {
    ERR_put_error(4, 147, 4, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_19D0240  (binary VA: 0x19d0240)
// Original: sub_19D0240
// ----------------------------------------------------------------------------
int sub_19D0240(char *a1, int a2)
{
  int v2;
  int v3;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v2 = PKCS8_pkey_get0(nullptr, &v5, &v6, nullptr, a2);
  v3 = 0;
  if ( v2 != 0 )
    return sub_19D01B0(a1, (int)(uintptr_t)(&v5), v6);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_19D02C0  (binary VA: 0x19d02c0)
// Original: sub_19D02C0
// ----------------------------------------------------------------------------
int sub_19D02C0(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  char **v4;
  int v5;
  int v6;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v8 = 0;
  v2 = i2d_RSAPrivateKey(*(uint32_t *)(a2 + 20), (int)(uintptr_t)(&v8));
  if ( v2 <= 0 || (v3 = v8, v4 = OBJ_nid2obj(6u), v5 = PKCS8_pkey_set0(a1, (int)(uintptr_t)(v4), 0, 5, 0, v3, v2), v6 = 1, v5 == 0) )
  {
    ERR_put_error(4, 138, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: sub_19D03A0  (binary VA: 0x19d03a0)
// Original: sub_19D03A0
// ----------------------------------------------------------------------------
bool sub_19D03A0(int a1, int a2)
{
  int v2;
  int v3;

  v2 = BN_cmp(*(int **)(*(uint32_t *)(a2 + 20) + 16), *(uint32_t **)(*(uint32_t *)(a1 + 20) + 16));
  v3 = 0;
  if ( v2 == 0 )
    return BN_cmp(*(int **)(*(uint32_t *)(a2 + 20) + 20), *(uint32_t **)(*(uint32_t *)(a1 + 20) + 20)) == 0;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_19D0420  (binary VA: 0x19d0420)
// Original: sub_19D0420
// ----------------------------------------------------------------------------
int sub_19D0420(char *a1, int a2)
{
  int v2;
  int v4;
  typedef uint8_t _g4_t_v5[4];
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v2 = 0;
  if ( X509_PUBKEY_get0_param(0, v5, &v6, 0, a2) != 0 )
  {
    v4 = d2i_RSAPublicKey(0, (int)(uintptr_t)(v5), v6);
    if ( v4 != 0 )
    {
      v2 = 1;
      EVP_PKEY_assign(a1, 6u, v4);
    }
    else
    {
      ERR_put_error(4, 139, 4, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_19D0500  (binary VA: 0x19d0500)
// Original: sub_19D0500
// ----------------------------------------------------------------------------
int sub_19D0500(int a1, void **a2)
{
  int result;
  int v3;

  if ( a1 != 0 )
  {
    result = 1;
    if ( a1 == 2 )
    {
      RSA_free(*a2);
      *a2 = nullptr;
      return 2;
    }
  }
  else
  {
    v3 = (int)(uintptr_t)(RSA_new());
    *a2 = (void *)v3;
    return v3 != 0 ? 2 : 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: RSAPublicKey_dup  (binary VA: 0x19d0690)
// Original: RSAPublicKey_dup
// ----------------------------------------------------------------------------
int RSAPublicKey_dup(int a1)
{
  return ASN1_item_dup(&RSAPublicKey_it, a1);
}

// ----------------------------------------------------------------------------
// Function: RSAPrivateKey_dup  (binary VA: 0x19d06c0)
// Original: RSAPrivateKey_dup
// ----------------------------------------------------------------------------
int RSAPrivateKey_dup(int a1)
{
  return ASN1_item_dup(&RSAPrivateKey_it, a1);
}

// ----------------------------------------------------------------------------
// Function: sub_19D13F0  (binary VA: 0x19d13f0)
// Original: sub_19D13F0
// ----------------------------------------------------------------------------
int sub_19D13F0(int a1, int a2, int *a3, int a4, int a5)
{
  int result;

  result = RSA_private_decrypt(
             a5,
             a4,
             a2,
             *(uint32_t *)(*(uint32_t *)(a1 + 8) + 20),
             *(uint32_t *)(*(uint32_t *)(a1 + 20) + 16));
  if ( result >= 0 )
  {
    *a3 = result;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19D1450  (binary VA: 0x19d1450)
// Original: sub_19D1450
// ----------------------------------------------------------------------------
int sub_19D1450(int a1, int a2, int *a3, int a4, int a5)
{
  int result;

  result = RSA_public_encrypt(a5, a4, a2, *(uint32_t *)(*(uint32_t *)(a1 + 8) + 20), *(uint32_t *)(*(uint32_t *)(a1 + 20) + 16));
  if ( result >= 0 )
  {
    *a3 = result;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19D14B0  (binary VA: 0x19d14b0)
// Original: sub_19D14B0
// ----------------------------------------------------------------------------
char sub_19D14B0(uint32_t *a1)
{
  uint32_t *v1;
  char result;

  v1 = (uint32_t *)(CRYPTO_malloc(32, (int)(uintptr_t)(&unk_1B15112), 0));
  result = 0;
  if ( v1 != nullptr )
  {
    *v1 = 1024;
    v1[1] = 0;
    v1[4] = 1;
    v1[5] = 0;
    v1[7] = 0;
    v1[6] = -2;
    a1[5] = (uint32_t)(uintptr_t)(v1);
    a1[8] = (uint32_t)(uintptr_t)(v1 + 2);
    a1[9] = 2;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19D1530  (binary VA: 0x19d1530)
// Original: sub_19D1530
// ----------------------------------------------------------------------------
int sub_19D1530(int a1, char *a2)
{
  int v2;
  uint32_t *v3;
  int key;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v8;
  int v9;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v11)) > _g4_s1 ? (20u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);

  v2 = a1;
  v3 = *(uint32_t **)(a1 + 20);
  if ( v3[1] != 0
    || (key = 0, v8 = BN_new(), v3[1] = (uint32_t)(uintptr_t)(v8), v8 != nullptr) && (v9 = BN_set_word(v8, 65537), v2 = a1, v9 != 0) )
  {
    v10 = v2;
    key = 0;
    v5 = RSA_new();
    if ( v5 != nullptr )
    {
      v6 = nullptr;
      if ( *(uint32_t *)(v10 + 28) != 0 )
      {
        evp_pkey_set_cb_translate(v11, v10);
        v6 = v11;
      }
      key = RSA_generate_key_ex(v5, *v3, v3[1], v6);
      if ( key <= 0 )
        RSA_free(v5);
      else
        EVP_PKEY_assign(a2, 6u, (int)(uintptr_t)(v5));
    }
  }
  return key;
}

// ----------------------------------------------------------------------------
// Function: sub_19D1620  (binary VA: 0x19d1620)
// Original: sub_19D1620
// ----------------------------------------------------------------------------
int sub_19D1620(int a1)
{
  int result;
  int v2;

  result = a1;
  v2 = *(uint32_t *)(a1 + 20);
  if ( v2 != 0 )
  {
    if ( *(uint32_t *)(v2 + 4) != 0 )
      BN_free(*(void ***)(v2 + 4));
    if ( *(uint32_t *)(v2 + 28) != 0 )
      CRYPTO_free(*(void **)(v2 + 28));
    return CRYPTO_free((void *)v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19D1680  (binary VA: 0x19d1680)
// Original: sub_19D1680
// ----------------------------------------------------------------------------
int sub_19D1680(int a1, const char *a2, char *nptr)
{
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  typedef int _g4_t_v8;
  typedef void *_g4_t_v9;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v9)) > _g4_s1 ? (28u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  if ( nptr == nullptr )
  {
    ERR_put_error(4, 144, 147, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  if ( strcmp(a2, "rsa_padding_mode") == 0 )
  {
    if ( strcmp(nptr, "pkcs1") == 0 )
    {
      v5 = 1;
    }
    else if ( strcmp(nptr, "sslv23") == 0 )
    {
      v5 = 2;
    }
    else if ( strcmp(nptr, "none") == 0 )
    {
      v5 = 3;
    }
    else if ( strcmp(nptr, "oeap") == 0 )
    {
      v5 = 4;
    }
    else if ( strcmp(nptr, "x931") == 0 )
    {
      v5 = 5;
    }
    else
    {
      if ( strcmp(nptr, (const char *)&off_1B8786B) != 0 )
      {
        ERR_put_error(4, 144, 118, (int)(uintptr_t)(&unk_1B15112), 0);
        return -2;
      }
      v5 = 6;
    }
    return EVP_PKEY_CTX_ctrl(a1, 6, -1, 4097, v5, 0);
  }
  if ( strcmp(a2, "rsa_pss_saltlen") == 0 )
  {
    v6 = atoi(nptr);
    return EVP_PKEY_CTX_ctrl(a1, 6, 24, 4098, v6, 0);
  }
  else if ( strcmp(a2, "rsa_keygen_bits") == 0 )
  {
    v7 = atoi(nptr);
    return EVP_PKEY_CTX_ctrl(a1, 6, 4, 4099, v7, 0);
  }
  else
  {
    result = -2;
    if ( strcmp(a2, "rsa_keygen_pubexp") == 0 )
    {
      v9 = nullptr;
      v4 = BN_asc2bn(&v9, nptr);
      result = 0;
      if ( v4 != 0 )
      {
        result = EVP_PKEY_CTX_ctrl(a1, 6, 4, 4100, 0, (int)(uintptr_t)(v9));
        if ( result <= 0 )
        {
          v8 = result;
          BN_free((void **)v9);
          return v8;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19D19C0  (binary VA: 0x19d19c0)
// Original: sub_19D19C0
// ----------------------------------------------------------------------------
int sub_19D19C0(int a1, int a2)
{
  int v2;
  int v4;

  v2 = 1;
  if ( a1 != 0 )
  {
    if ( a2 == 3 )
    {
      LOWORD(v2) = 0;
      ERR_put_error(4, 140, 141, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    else if ( a2 == 5 )
    {
      v4 = EVP_MD_type(a1);
      if ( RSA_X931_hash_id(v4) == -1 )
      {
        v2 = 0;
        ERR_put_error(4, 140, 142, (int)(uintptr_t)(&unk_1B15112), 0);
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_19D1A80  (binary VA: 0x19d1a80)
// Original: sub_19D1A80
// ----------------------------------------------------------------------------
char sub_19D1A80(int a1, int a2, int a3, int a4)
{
  int *v4;
  char result;
  int v6;
  int v7;

  v4 = *(int **)(a1 + 20);
  if ( a2 > 11 )
  {
    if ( a2 == 4098 )
    {
      result = -2;
      if ( a3 >= -2 )
      {
        if ( v4[4] == 6 )
        {
          v4[6] = a3;
          return 1;
        }
        else
        {
          ERR_put_error(4, 143, 146, (int)(uintptr_t)(&unk_1B15112), 0);
          return -2;
        }
      }
      return result;
    }
    if ( a2 > 4098 )
    {
      if ( a2 == 4099 )
      {
        if ( a3 <= 255 )
        {
          ERR_put_error(4, 143, 145, (int)(uintptr_t)(&unk_1B15112), 0);
          return -2;
        }
        else
        {
          *v4 = a3;
          return 1;
        }
      }
      if ( a2 == 4100 && a4 != 0 )
      {
        v4[1] = a4;
        return 1;
      }
      return -2;
    }
    if ( a2 != 4097 )
      return -2;
    if ( (unsigned int)(a3 - 1) <= 5 )
    {
      v7 = sub_19D19C0(v4[5], a3);
      result = 0;
      if ( v7 == 0 )
        return result;
      if ( a3 == 6 )
      {
        if ( (*(uint8_t *)(a1 + 16) & 0x18) != 0 )
          goto LABEL_32;
      }
      else
      {
        if ( a3 != 4 )
        {
LABEL_34:
          v4[4] = a3;
          return 1;
        }
        if ( (*(uint32_t *)(a1 + 16) & 0x300) != 0 )
        {
LABEL_32:
          if ( v4[5] == 0 )
            v4[5] = (int)(uintptr_t)(EVP_sha1());
          goto LABEL_34;
        }
      }
    }
    ERR_put_error(4, 143, 144, (int)(uintptr_t)(&unk_1B15112), 0);
    return -2;
  }
  if ( a2 >= 9 )
    return 1;
  if ( a2 > 5 )
  {
    if ( a2 == 7 )
      return 1;
    return -2;
  }
  if ( a2 >= 3 )
    return 1;
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      ERR_put_error(4, 143, 148, (int)(uintptr_t)(&unk_1B15112), 0);
      return -2;
    }
    return -2;
  }
  v6 = sub_19D19C0(a4, v4[4]);
  result = 0;
  if ( v6 != 0 )
  {
    v4[5] = a4;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19D1D00  (binary VA: 0x19d1d00)
// Original: sub_19D1D00
// ----------------------------------------------------------------------------
int sub_19D1D00(int a1, void *dest, signed int *a3, int a4, size_t a5)
{
  int v5;
  int v6;
  signed int n;
  int v8;
  int v9;
  int v10;
  uint8_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v18)) > _g4_s1 ? (28u + sizeof(_g4_t_v18)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);

  v5 = *(uint32_t *)(a1 + 20);
  v6 = *(uint32_t *)(v5 + 16);
  if ( *(uint32_t *)(v5 + 20) == 0 )
  {
    n = RSA_public_decrypt(a5, a4, (int)(uintptr_t)(dest), *(uint32_t *)(*(uint32_t *)(a1 + 8) + 20), *(uint32_t *)(v5 + 16));
LABEL_6:
    if ( n >= 0 )
    {
LABEL_7:
      *a3 = n;
      return 1;
    }
    return n;
  }
  if ( v6 != 5 )
  {
    n = -1;
    if ( v6 != 1 )
      return n;
    v8 = *(uint32_t *)(*(uint32_t *)(a1 + 8) + 20);
    v9 = EVP_MD_type(*(uint32_t *)(v5 + 20));
    v10 = int_rsa_verify(v9, nullptr, 0, dest, (int)(uintptr_t)(v18), a4, a5, v8);
    n = 0;
    if ( v10 <= 0 )
      return n;
    n = v18[0];
    goto LABEL_6;
  }
  v12 = *(uint8_t **)(v5 + 28);
  if ( v12 != nullptr
    || (n = -1,
        v16 = EVP_PKEY_size(*(uint32_t *)(a1 + 8)),
        v12 = CRYPTO_malloc(v16, (int)(uintptr_t)(&unk_1B15112), 0),
        *(uint32_t *)(v5 + 28) = (uint32_t)(uintptr_t)(v12),
        v12 != nullptr) )
  {
    n = 0;
    v13 = RSA_public_decrypt(a5, a4, (int)(uintptr_t)(v12), *(uint32_t *)(*(uint32_t *)(a1 + 8) + 20), 5);
    if ( v13 > 0 )
    {
      v17 = v13 - 1;
      v14 = *(uint8_t *)(*(uint32_t *)(v5 + 28) + v13 - 1);
      v15 = EVP_MD_type(*(uint32_t *)(v5 + 20));
      if ( v14 != RSA_X931_hash_id(v15) )
      {
        ERR_put_error(4, 141, 100, (int)(uintptr_t)(&unk_1B15112), 0);
        return n;
      }
      n = EVP_MD_size(*(uint32_t *)(v5 + 20));
      if ( n != v17 )
      {
        n = 0;
        ERR_put_error(4, 141, 143, (int)(uintptr_t)(&unk_1B15112), 0);
        return n;
      }
      if ( dest != nullptr )
        memcpy(dest, *(const void **)(v5 + 28), n);
      goto LABEL_7;
    }
  }
  return n;
}

// ----------------------------------------------------------------------------
// Function: sub_19D1F50  (binary VA: 0x19d1f50)
// Original: sub_19D1F50
// ----------------------------------------------------------------------------
int sub_19D1F50(int a1, int a2, size_t a3, void *s1, size_t n)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint8_t *v10;
  int v11;
  uint8_t *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  signed int v19[4];

  v5 = *(uint32_t *)(a1 + 20);
  v6 = *(uint32_t *)(a1 + 8);
  v7 = *(uint32_t *)(v6 + 20);
  if ( *(uint32_t *)(v5 + 20) != 0 )
  {
    v8 = *(uint32_t *)(v5 + 16);
    if ( v8 == 1 )
    {
      v16 = EVP_MD_type(*(uint32_t *)(v5 + 20));
      return RSA_verify(v16, (int)(uintptr_t)(s1), n, a2, a3, v7);
    }
    if ( v8 != 5 )
    {
      v9 = -1;
      if ( v8 == 6 )
      {
        v10 = *(uint8_t **)(v5 + 28);
        if ( v10 != nullptr
          || (v17 = EVP_PKEY_size(v6),
              v10 = CRYPTO_malloc(v17, (int)(uintptr_t)(&unk_1B15112), 0),
              *(uint32_t *)(v5 + 28) = (uint32_t)(uintptr_t)(v10),
              v9 = -1,
              v10 != nullptr) )
        {
          v11 = RSA_public_decrypt(a3, a2, (int)(uintptr_t)(v10), v7, 3);
          v9 = 0;
          if ( v11 > 0 )
            return (int)(uintptr_t)RSA_verify_PKCS1_PSS(v7, s1, *(uint32_t *)(v5 + 20), *(uint32_t *)(v5 + 28), *(uint32_t *)(v5 + 24)) > 0;
        }
      }
      return v9;
    }
    v15 = sub_19D1D00(a1, nullptr, v19, a2, a3);
    v9 = 0;
    if ( v15 <= 0 )
      return v9;
    v14 = v19[0];
  }
  else
  {
    v13 = *(uint8_t **)(v5 + 28);
    if ( v13 == nullptr )
    {
      v18 = EVP_PKEY_size(*(uint32_t *)(a1 + 8));
      v13 = CRYPTO_malloc(v18, (int)(uintptr_t)(&unk_1B15112), 0);
      *(uint32_t *)(v5 + 28) = (uint32_t)(uintptr_t)(v13);
      v9 = -1;
      if ( v13 == nullptr )
        return v9;
    }
    v14 = RSA_public_decrypt(a3, a2, (int)(uintptr_t)(v13), v7, *(uint32_t *)(v5 + 16));
    v9 = 0;
    v19[0] = v14;
    if ( v14 == 0 )
      return v9;
  }
  v9 = 0;
  if ( n == v14 )
    return memcmp(s1, *(const void **)(v5 + 28), n) == 0;
  return v9;
}

// ----------------------------------------------------------------------------
// Function: sub_19D2180  (binary VA: 0x19d2180)
// Original: sub_19D2180
// ----------------------------------------------------------------------------
int sub_19D2180(int a1, int a2, int *a3, void *src, int a5)
{
  int v5;
  size_t n;
  int v7;
  int v8;
  uint8_t *v9;
  int v10;
  int v11;
  uint8_t *dest;
  uint8_t *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  typedef size_t _g4_t_v19;
  typedef size_t _g4_t_v20;
  typedef size_t _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v19)) > _g4_s0 ? (8u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v20)) > _g4_s1 ? (8u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v21)) > _g4_s2 ? (8u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v22)) > _g4_s3 ? (12u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v23)) > _g4_s4 ? (28u + sizeof(_g4_t_v23)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);

  v5 = *(uint32_t *)(a1 + 20);
  v22 = *(uint32_t *)(*(uint32_t *)(a1 + 8) + 20);
  if ( *(uint32_t *)(v5 + 20) == 0 )
  {
    v8 = RSA_private_encrypt(a5, (int)(uintptr_t)(src), a2, v22, *(uint32_t *)(v5 + 16));
LABEL_9:
    if ( v8 >= 0 )
    {
      *a3 = v8;
      return 1;
    }
    return v8;
  }
  n = EVP_MD_size(*(uint32_t *)(v5 + 20));
  if ( n != a5 )
  {
    v8 = -1;
    ERR_put_error(4, 142, 143, (int)(uintptr_t)(&unk_1B15112), 0);
    return v8;
  }
  v7 = *(uint32_t *)(v5 + 16);
  if ( v7 == 5 )
  {
    dest = *(uint8_t **)(v5 + 28);
    if ( dest == nullptr )
    {
      v21 = n;
      v8 = -1;
      v18 = EVP_PKEY_size(*(uint32_t *)(a1 + 8));
      dest = CRYPTO_malloc(v18, (int)(uintptr_t)(&unk_1B15112), 0);
      *(uint32_t *)(v5 + 28) = (uint32_t)(uintptr_t)(dest);
      n = v21;
      if ( dest == nullptr )
        return v8;
    }
    v19 = n;
    memcpy(dest, src, n);
    v14 = (uint8_t *)(v19 + *(uint32_t *)(v5 + 28));
    v15 = EVP_MD_type(*(uint32_t *)(v5 + 20));
    *v14 = RSA_X931_hash_id(v15);
    v8 = RSA_private_encrypt(v19 + 1, *(uint32_t *)(v5 + 28), a2, v22, 5);
    goto LABEL_9;
  }
  if ( v7 == 1 )
  {
    v20 = n;
    v16 = EVP_MD_type(*(uint32_t *)(v5 + 20));
    v8 = RSA_sign(v16, src, v20, a2, v23, v22);
    if ( v8 <= 0 )
      return v8;
    v8 = v23[0];
    goto LABEL_9;
  }
  v8 = -1;
  if ( v7 == 6 )
  {
    v9 = *(uint8_t **)(v5 + 28);
    if ( v9 != nullptr
      || (v17 = EVP_PKEY_size(*(uint32_t *)(a1 + 8)),
          v9 = CRYPTO_malloc(v17, (int)(uintptr_t)(&unk_1B15112), 0),
          *(uint32_t *)(v5 + 28) = (uint32_t)(uintptr_t)(v9),
          v9 != nullptr) )
    {
      v8 = -1;
      if ( RSA_padding_add_PKCS1_PSS(v22, (int)(uintptr_t)(v9), (int)(uintptr_t)(src), *(uint32_t *)(v5 + 20), *(uint32_t *)(v5 + 24)) != 0 )
      {
        v10 = *(uint32_t *)(v5 + 28);
        v11 = RSA_size(v22);
        v8 = RSA_private_encrypt(v11, v10, a2, v22, 3);
        goto LABEL_9;
      }
    }
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: sub_19D2440  (binary VA: 0x19d2440)
// Original: sub_19D2440
// ----------------------------------------------------------------------------
int sub_19D2440(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  void **v6;

  LOBYTE(v2) = sub_19D14B0(a1);
  v3 = 0;
  if ( v2 != 0 )
  {
    v4 = (uint32_t *)a1[5];
    v5 = *(uint32_t **)(a2 + 20);
    *v4 = *v5;
    if ( v5[1] == 0 || (v6 = BN_dup((uint32_t *)v5[1]), v4[1] = (uint32_t)(uintptr_t)(v6), v6 != nullptr) )
    {
      v3 = 1;
      v4[4] = v5[4];
      v4[5] = v5[5];
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: int_rsa_verify  (binary VA: 0x19d33d0)
// Original: int_rsa_verify
// ----------------------------------------------------------------------------
int int_rsa_verify(unsigned int a1, void *s2, size_t a3, void *dest, int *a5, int a6, size_t a7, int a8)
{
  int v8;
  int v9;
  int v10;
  int v11;
  int **v12;
  int **v13;
  int v14;
  int *v16;
  int v17;
  char *v18;
  int digestbyname;
  int v20;
  int *v21;
  size_t n;
  int *v23;
  typedef uint8_t *_g4_t_s1;
  typedef uint8_t *_g4_t_v25;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_s1)) > _g4_s0 ? (4u + sizeof(_g4_t_s1)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v25)) > _g4_s1 ? (28u + sizeof(_g4_t_v25)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);

  v8 = RSA_size(a8);
  v9 = v8;
  if ( v8 != a7 )
  {
    v11 = 0;
    ERR_put_error(4, 145, 119, (int)(uintptr_t)(&unk_1B15112), 0);
    return v11;
  }
  if ( dest == nullptr || a1 != 114 )
  {
    s1 = CRYPTO_malloc(v8, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( s1 == nullptr )
    {
      v11 = 0;
      ERR_put_error(4, 145, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return v11;
    }
    if ( a3 != 36 && a1 == 114 )
    {
      v11 = 0;
      ERR_put_error(4, 145, 131, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_11;
    }
    v10 = RSA_public_decrypt(v9, a6, (int)(uintptr_t)(s1), a8, 1);
    v11 = v10;
    if ( v10 > 0 )
    {
      if ( a1 == 114 )
      {
        if ( v10 != 36 || (LOWORD(v11) = 1, memcmp(s1, s2, 0x24u) != 0) )
        {
          v11 = 0;
          ERR_put_error(4, 145, 104, (int)(uintptr_t)(&unk_1B15112), 0);
        }
        goto LABEL_11;
      }
      v25 = s1;
      v12 = (int **)d2i_X509_SIG(0, &v25, v10);
      v13 = v12;
      if ( v12 != nullptr )
      {
        if ( v25 != &s1[v11] )
          goto LABEL_9;
        v16 = *v12;
        if ( v16[1] != 0 )
        {
          if ( ASN1_TYPE_get(v16[1]) != 5 )
            goto LABEL_9;
          v16 = *v13;
        }
        v17 = OBJ_obj2nid(*v16);
        if ( v17 != a1 )
        {
          if ( (v17 != 8 || a1 != 4) && (v17 != 7 || a1 != 3) )
          {
            v11 = 0;
            ERR_put_error(4, 145, 100, (int)(uintptr_t)(&unk_1B15112), 0);
            goto LABEL_10;
          }
          fwrite("signature has problems, re-make with post SSLeay045\n", 1u, 0x34u, stderr);
        }
        if ( dest != nullptr )
        {
          v18 = OBJ_nid2sn(a1);
          digestbyname = EVP_get_digestbyname((int)(uintptr_t)(v18));
          if ( digestbyname != 0 )
          {
            v20 = EVP_MD_size(digestbyname);
            v21 = v13[1];
            n = *v21;
            if ( v20 != *v21 )
            {
              v11 = 0;
              ERR_put_error(4, 145, 143, (int)(uintptr_t)(&unk_1B15112), 0);
              goto LABEL_10;
            }
          }
          else
          {
            v21 = v13[1];
            n = *v21;
          }
          v11 = 1;
          memcpy(dest, (const void *)v21[2], n);
          *a5 = *v13[1];
          goto LABEL_10;
        }
        v23 = v13[1];
        if ( *v23 == a3 )
        {
          v11 = 1;
          if ( memcmp(s2, (const void *)v23[2], a3) == 0 )
            goto LABEL_10;
        }
LABEL_9:
        v11 = 0;
        ERR_put_error(4, 145, 104, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_10:
        X509_SIG_free(v13);
LABEL_11:
        OPENSSL_cleanse(s1, a7);
        CRYPTO_free(s1);
        return v11;
      }
    }
    v11 = 0;
    goto LABEL_11;
  }
  v11 = 0;
  v14 = RSA_public_decrypt(v8, a6, (int)(uintptr_t)(dest), a8, 1);
  if ( v14 > 0 )
  {
    LOWORD(v11) = 1;
    *a5 = v14;
  }
  return v11;
}

// ----------------------------------------------------------------------------
// Function: SEED_set_key  (binary VA: 0x19d3b90)
// Original: SEED_set_key
// ----------------------------------------------------------------------------
int SEED_set_key(unsigned int *a1, int *a2)
{
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  uint64_t v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  int result;
  int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  int v38;

  v2 = __builtin_bswap32(*a1);
  v34 = __builtin_bswap32(a1[1]);
  v3 = __builtin_bswap32(a1[2]);
  v4 = __builtin_bswap32(a1[3]);
  *a2 = dword_1D2B3C0[(v2 + v3 + 1640531527) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v2 + v3 + 71)]
      ^ dword_1D2AFC0[(uint8_t)((v2 + v3 + 1640531527) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v2 + v3 - 31161) >> 8)];
  a2[1] = dword_1D2B3C0[(v34 - 1640531527 - v4) >> 24]
        ^ dword_1D2A7C0[(uint8_t)(v34 - 71 - v4)]
        ^ dword_1D2AFC0[(uint8_t)((v34 - 1640531527 - v4) >> 16)]
        ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v34 + 31161 - v4) >> 8)];
  v29 = (v2 >> 8) ^ (v34 << 24);
  v5 = (v34 >> 8) ^ (v2 << 24);
  a2[2] = dword_1D2B3C0[(v3 + v29 - 1013904243) >> 24]
        ^ dword_1D2A7C0[(uint8_t)(v3 + v29 - 115)]
        ^ dword_1D2AFC0[(uint8_t)((v3 + v29 - 1013904243) >> 16)]
        ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v3 + v29 + 3213) >> 8)];
  a2[3] = dword_1D2B3C0[(v5 - v4 + 1013904243) >> 24]
        ^ dword_1D2A7C0[(uint8_t)(v5 - v4 + 115)]
        ^ dword_1D2AFC0[(uint8_t)((v5 - v4 + 1013904243) >> 16)]
        ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v5 - v4 - 3213) >> 8)];
  v6 = (v3 << 8) ^ HIBYTE(v4);
  v24 = (v4 << 8) ^ HIBYTE(v3);
  a2[4] = dword_1D2B3C0[(v29 + v6 - 2027808486) >> 24]
        ^ dword_1D2A7C0[(uint8_t)(v29 + v6 + 26)]
        ^ dword_1D2AFC0[(uint8_t)((v29 + v6 - 2027808486) >> 16)]
        ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v29 + v6 + 6426) >> 8)];
  a2[5] = dword_1D2B3C0[(v5 + 2027808486 - v24) >> 24]
        ^ dword_1D2A7C0[(uint8_t)(v5 - 26 - v24)]
        ^ dword_1D2AFC0[(uint8_t)((v5 + 2027808486 - v24) >> 16)]
        ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v5 - 6426 - v24) >> 8)];
  v35 = (v29 >> 8) ^ (v5 << 24);
  v7 = (v5 >> 8) ^ (v29 << 24);
  a2[6] = dword_1D2B3C0[(v6 + v35 + 239350324) >> 24]
        ^ dword_1D2A7C0[(uint8_t)(v6 + v35 + 52)]
        ^ dword_1D2AFC0[(uint8_t)((v6 + v35 + 239350324) >> 16)]
        ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v6 + v35 + 12852) >> 8)];
  a2[7] = dword_1D2B3C0[(v7 - v24 - 239350324) >> 24]
        ^ dword_1D2A7C0[(uint8_t)(v7 - v24 - 52)]
        ^ dword_1D2AFC0[(uint8_t)((v7 - v24 - 239350324) >> 16)]
        ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v7 - v24 - 12852) >> 8)];
  v30 = (v6 << 8) ^ HIBYTE(v24);
  v25 = (v24 << 8) ^ HIBYTE(v6);
  a2[8] = dword_1D2B3C0[(v35 + v30 + 478700647) >> 24]
        ^ dword_1D2A7C0[(uint8_t)(v35 + v30 + 103)]
        ^ dword_1D2AFC0[(uint8_t)((v35 + v30 + 478700647) >> 16)]
        ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v35 + v30 + 25703) >> 8)];
  a2[9] = dword_1D2B3C0[(v7 - 478700647 - v25) >> 24]
        ^ dword_1D2A7C0[(uint8_t)(v7 - 103 - v25)]
        ^ dword_1D2AFC0[(uint8_t)((v7 - 478700647 - v25) >> 16)]
        ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v7 - 25703 - v25) >> 8)];
  v8 = (v35 >> 8) ^ (v7 << 24);
  v9 = (v7 >> 8) ^ (v35 << 24);
  a2[10] = dword_1D2B3C0[(v30 + v8 + 957401293) >> 24]
         ^ dword_1D2A7C0[(uint8_t)(v30 + v8 - 51)]
         ^ dword_1D2AFC0[(uint8_t)((v30 + v8 + 957401293) >> 16)]
         ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v30 + v8 - 14131) >> 8)];
  a2[11] = dword_1D2B3C0[(v9 - v25 - 957401293) >> 24]
         ^ dword_1D2A7C0[(uint8_t)(v9 - v25 + 51)]
         ^ dword_1D2AFC0[(uint8_t)((v9 - v25 - 957401293) >> 16)]
         ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v9 - v25 + 14131) >> 8)];
  v10 = (v30 << 8) ^ HIBYTE(v25);
  v31 = (v25 << 8) ^ HIBYTE(v30);
  a2[12] = dword_1D2B3C0[(v8 + v10 + 1914802585) >> 24]
         ^ dword_1D2A7C0[(uint8_t)(v8 + v10 - 103)]
         ^ dword_1D2AFC0[(uint8_t)((v8 + v10 + 1914802585) >> 16)]
         ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v8 + v10 - 28263) >> 8)];
  a2[13] = dword_1D2B3C0[(v9 - 1914802585 - v31) >> 24]
         ^ dword_1D2A7C0[(uint8_t)(v9 + 103 - v31)]
         ^ dword_1D2AFC0[(uint8_t)((v9 - 1914802585 - v31) >> 16)]
         ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v9 + 28263 - v31) >> 8)];
  v26 = (v8 >> 8) ^ (v9 << 24);
  v11 = (v9 >> 8) ^ (v8 << 24);
  a2[14] = dword_1D2B3C0[(v10 + v26 - 465362127) >> 24]
         ^ dword_1D2A7C0[(uint8_t)(v10 + v26 + 49)]
         ^ dword_1D2AFC0[(uint8_t)((v10 + v26 - 465362127) >> 16)]
         ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v10 + v26 + 9009) >> 8)];
  a2[15] = dword_1D2B3C0[(v11 - v31 + 465362127) >> 24]
         ^ dword_1D2A7C0[(uint8_t)(v11 - v31 - 49)]
         ^ dword_1D2AFC0[(uint8_t)((v11 - v31 + 465362127) >> 16)]
         ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v11 - v31 - 9009) >> 8)];
  v12 = (v10 << 8) ^ HIBYTE(v31);
  v36 = (v31 << 8) ^ HIBYTE(v10);
  a2[16] = dword_1D2B3C0[(v26 + v12 - 930724254) >> 24]
         ^ dword_1D2A7C0[(uint8_t)(v26 + HIBYTE(v31) + 98)]
         ^ dword_1D2AFC0[(uint8_t)((v26 + v12 - 930724254) >> 16)]
         ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v26 + v12 + 18018) >> 8)];
  a2[17] = dword_1D2B3C0[(v11 + 930724254 - v36) >> 24]
         ^ dword_1D2A7C0[(uint8_t)(v11 - 98 - v36)]
         ^ dword_1D2AFC0[(uint8_t)((v11 + 930724254 - v36) >> 16)]
         ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v11 - 18018 - v36) >> 8)];
  v13 = (v26 >> 8) ^ (v11 << 24);
  v23 = (v11 >> 8) ^ (v26 << 24);
  a2[18] = dword_1D2B3C0[(v12 + v13 - 1861448508) >> 24]
         ^ dword_1D2A7C0[(uint8_t)(v12 + BYTE1(v26) - 60)]
         ^ dword_1D2AFC0[(uint8_t)((v12 + v13 - 1861448508) >> 16)]
         ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v12 + (v26 >> 8) - 29500) >> 8)];
  a2[19] = dword_1D2B3C0[(v23 - v36 + 1861448508) >> 24]
         ^ dword_1D2A7C0[(uint8_t)(v23 - v36 + 60)]
         ^ dword_1D2AFC0[(uint8_t)((v23 - v36 + 1861448508) >> 16)]
         ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v23 - v36 + 29500) >> 8)];
  v32 = (v12 << 8) ^ HIBYTE(v36);
  v27 = (v36 << 8) ^ HIBYTE(v12);
  a2[20] = dword_1D2B3C0[(v13 + v32 + 572070280) >> 24]
         ^ dword_1D2A7C0[(uint8_t)(v13 + v32 - 120)]
         ^ dword_1D2AFC0[(uint8_t)((v13 + v32 + 572070280) >> 16)]
         ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v13 + v32 + 6536) >> 8)];
  v14 = (uint64_t)(unsigned int)v23 << 24;
  a2[21] = dword_1D2B3C0[(v23 - 572070280 - v27) >> 24]
         ^ dword_1D2A7C0[(uint8_t)(v23 + 120 - v27)]
         ^ dword_1D2AFC0[(uint8_t)((v23 - 572070280 - v27) >> 16)]
         ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v23 - 6536 - v27) >> 8)];
  v37 = HIDWORD(v14) ^ (v13 << 24);
  v15 = (v13 >> 8) ^ v14;
  a2[22] = dword_1D2B3C0[(v32 + v15 + 1144140559) >> 24]
         ^ dword_1D2A7C0[(uint8_t)(v32 + v15 + 15)]
         ^ dword_1D2AFC0[(uint8_t)((v32 + v15 + 1144140559) >> 16)]
         ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v32 + v15 + 13071) >> 8)];
  a2[23] = dword_1D2B3C0[(v37 - v27 - 1144140559) >> 24]
         ^ dword_1D2A7C0[(uint8_t)(v37 - v27 - 15)]
         ^ dword_1D2AFC0[(uint8_t)((v37 - v27 - 1144140559) >> 16)]
         ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v37 - v27 - 13071) >> 8)];
  v16 = (v32 << 8) ^ HIBYTE(v27);
  v17 = v37 + 2006686179 - ((v27 << 8) ^ HIBYTE(v32));
  v33 = (v27 << 8) ^ HIBYTE(v32);
  a2[24] = dword_1D2B3C0[(v15 + v16 - 2006686179) >> 24]
         ^ dword_1D2A7C0[(uint8_t)(v15 + v16 + 29)]
         ^ dword_1D2AFC0[(uint8_t)((v15 + v16 - 2006686179) >> 16)]
         ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v15 + v16 + 26141) >> 8)];
  a2[25] = dword_1D2B3C0[HIBYTE(v17)]
         ^ dword_1D2A7C0[(uint8_t)v17]
         ^ dword_1D2AFC0[BYTE2(v17)]
         ^ dword_1D2ABC0[BYTE1(v17)];
  v28 = (v15 >> 8) ^ (v37 << 24);
  v18 = (v37 >> 8) ^ (v15 << 24);
  a2[26] = dword_1D2B3C0[(v16 + v28 + 281594938) >> 24]
         ^ dword_1D2A7C0[(uint8_t)(v16 + v28 + 58)]
         ^ dword_1D2AFC0[(uint8_t)((v16 + v28 + 281594938) >> 16)]
         ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v16 + v28 - 13254) >> 8)];
  a2[27] = dword_1D2B3C0[(v18 - v33 - 281594938) >> 24]
         ^ dword_1D2A7C0[(uint8_t)(v18 - v33 - 58)]
         ^ dword_1D2AFC0[(uint8_t)((v18 - v33 - 281594938) >> 16)]
         ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v18 - v33 + 13254) >> 8)];
  v38 = (v16 << 8) ^ HIBYTE(v33);
  v19 = (v33 << 8) ^ HIBYTE(v16);
  a2[28] = dword_1D2B3C0[(v28 + v38 + 563189875) >> 24]
         ^ dword_1D2A7C0[(uint8_t)(v28 + v38 + 115)]
         ^ dword_1D2AFC0[(uint8_t)((v28 + v38 + 563189875) >> 16)]
         ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v28 + v38 - 26509) >> 8)];
  a2[29] = dword_1D2B3C0[(v18 - 563189875 - v19) >> 24]
         ^ dword_1D2A7C0[(uint8_t)(v18 - 115 - v19)]
         ^ dword_1D2AFC0[(uint8_t)((v18 - 563189875 - v19) >> 16)]
         ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v18 + 26509 - v19) >> 8)];
  v20 = v38 + ((v28 >> 8) ^ (v18 << 24)) + 1126379749;
  v21 = -1126379749 - v19 + ((v18 >> 8) ^ (v28 << 24));
  a2[30] = dword_1D2B3C0[HIBYTE(v20)]
         ^ dword_1D2A7C0[(uint8_t)v20]
         ^ dword_1D2AFC0[BYTE2(v20)]
         ^ dword_1D2ABC0[BYTE1(v20)];
  result = dword_1D2B3C0[HIBYTE(v21)]
         ^ dword_1D2A7C0[(uint8_t)v21]
         ^ dword_1D2AFC0[BYTE2(v21)]
         ^ dword_1D2ABC0[BYTE1(v21)];
  a2[31] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: SEED_encrypt  (binary VA: 0x19d46b0)
// Original: SEED_encrypt
// ----------------------------------------------------------------------------
int SEED_encrypt(unsigned int *a1, uint8_t *a2, uint32_t *a3)
{
  int v3;
  unsigned int v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  unsigned int v35;
  int v36;
  int v37;
  int v38;
  unsigned int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  unsigned int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  unsigned int v51;
  int v52;
  int v53;
  unsigned int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  unsigned int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  unsigned int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  unsigned int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  unsigned int v77;
  int v78;
  int v79;
  int v80;
  unsigned int v81;
  int v82;
  unsigned int v83;
  unsigned int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  unsigned int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  unsigned int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;

  v102 = __builtin_bswap32(a1[2]);
  v3 = *a3 ^ v102;
  v94 = __builtin_bswap32(a1[3]);
  v4 = v3 ^ a3[1] ^ v94;
  v5 = dword_1D2B3C0[HIBYTE(v4)]
     ^ dword_1D2A7C0[(uint8_t)v4]
     ^ dword_1D2AFC0[BYTE2(v4)]
     ^ dword_1D2ABC0[BYTE1(v4)];
  v6 = dword_1D2B3C0[(unsigned int)(v5 + v3) >> 24]
     ^ dword_1D2A7C0[(uint8_t)(v5 + v3)]
     ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v5 + v3) >> 16)]
     ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v5 + v3) >> 8)];
  v7 = dword_1D2B3C0[(unsigned int)(v6 + v5) >> 24]
     ^ dword_1D2A7C0[(uint8_t)(v6 + v5)]
     ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v6 + v5) >> 16)]
     ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v6 + v5) >> 8)];
  v8 = v7 ^ __builtin_bswap32(a1[1]);
  v9 = __builtin_bswap32(*a1) ^ (v7 + v6);
  v10 = v9 ^ a3[2];
  v85 = v9;
  v111 = dword_1D2B3C0[(v10 ^ v8 ^ a3[3]) >> 24]
       ^ dword_1D2A7C0[(uint8_t)(v10 ^ v8 ^ *((uint8_t *)a3 + 12))]
       ^ dword_1D2AFC0[(uint8_t)((v10 ^ v8 ^ a3[3]) >> 16)]
       ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v10 ^ v8 ^ *((uint16_t *)a3 + 6)) >> 8)];
  v11 = dword_1D2B3C0[(unsigned int)(v111 + v10) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v111 + v10)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v111 + v10) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v111 + v10) >> 8)];
  v122 = dword_1D2B3C0[(unsigned int)(v11 + v111) >> 24]
       ^ dword_1D2A7C0[(uint8_t)(v11 + v111)]
       ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v11 + v111) >> 16)]
       ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v11 + v111) >> 8)];
  v112 = v102 ^ (v122 + v11);
  v95 = v94 ^ v122;
  v12 = a3[4] ^ v112;
  v103 = dword_1D2B3C0[(v12 ^ a3[5] ^ (unsigned int)v95) >> 24]
       ^ dword_1D2A7C0[(uint8_t)(v12 ^ *((uint8_t *)a3 + 20) ^ v95)]
       ^ dword_1D2AFC0[(uint8_t)((v12 ^ a3[5] ^ (unsigned int)v95) >> 16)]
       ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v12 ^ *((uint16_t *)a3 + 10) ^ v95) >> 8)];
  v13 = dword_1D2B3C0[(unsigned int)(v103 + v12) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v103 + v12)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v103 + v12) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v103 + v12) >> 8)];
  v104 = dword_1D2B3C0[(unsigned int)(v13 + v103) >> 24]
       ^ dword_1D2A7C0[(uint8_t)(v13 + v103)]
       ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v13 + v103) >> 16)]
       ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v13 + v103) >> 8)];
  v123 = v85 ^ (v104 + v13);
  v14 = a3[6] ^ v123;
  v105 = v104 ^ v8;
  v15 = v14 ^ v105 ^ a3[7];
  v16 = dword_1D2B3C0[HIBYTE(v15)]
      ^ dword_1D2A7C0[(uint8_t)v15]
      ^ dword_1D2AFC0[BYTE2(v15)]
      ^ dword_1D2ABC0[BYTE1(v15)];
  v17 = dword_1D2B3C0[(unsigned int)(v16 + v14) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v16 + v14)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v16 + v14) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v16 + v14) >> 8)];
  v18 = dword_1D2B3C0[(unsigned int)(v17 + v16) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v17 + v16)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v17 + v16) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v17 + v16) >> 8)];
  v19 = v112 ^ (v18 + v17);
  v96 = v95 ^ v18;
  v20 = v19 ^ a3[8];
  v21 = v20 ^ a3[9] ^ v96;
  v86 = dword_1D2B3C0[HIBYTE(v21)]
      ^ dword_1D2A7C0[(uint8_t)v21]
      ^ dword_1D2AFC0[BYTE2(v21)]
      ^ dword_1D2ABC0[BYTE1(v21)];
  v113 = dword_1D2B3C0[(unsigned int)(v86 + v20) >> 24]
       ^ dword_1D2A7C0[(uint8_t)(v86 + v20)]
       ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v86 + v20) >> 16)]
       ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v86 + v20) >> 8)];
  v22 = dword_1D2B3C0[(unsigned int)(v86 + v113) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v86 + v113)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v86 + v113) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v86 + v113) >> 8)];
  v87 = v123 ^ (v22 + v113);
  v106 = v105 ^ v22;
  v23 = a3[10] ^ v87;
  v24 = v23 ^ a3[11] ^ v106;
  v25 = dword_1D2B3C0[HIBYTE(v24)]
      ^ dword_1D2A7C0[(uint8_t)v24]
      ^ dword_1D2AFC0[BYTE2(v24)]
      ^ dword_1D2ABC0[BYTE1(v24)];
  v114 = dword_1D2B3C0[(unsigned int)(v25 + v23) >> 24]
       ^ dword_1D2A7C0[(uint8_t)(v25 + v23)]
       ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v25 + v23) >> 16)]
       ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v25 + v23) >> 8)];
  v26 = dword_1D2B3C0[(unsigned int)(v25 + v114) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v25 + v114)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v25 + v114) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v25 + v114) >> 8)];
  v27 = v19 ^ (v26 + v114);
  v28 = v27 ^ a3[12];
  v97 = v96 ^ v26;
  v115 = v27;
  v29 = v28 ^ a3[13] ^ v97;
  v30 = dword_1D2B3C0[HIBYTE(v29)]
      ^ dword_1D2A7C0[(uint8_t)v29]
      ^ dword_1D2AFC0[BYTE2(v29)]
      ^ dword_1D2ABC0[BYTE1(v29)];
  v31 = dword_1D2B3C0[(unsigned int)(v30 + v28) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v30 + v28)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v30 + v28) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v30 + v28) >> 8)];
  v32 = dword_1D2B3C0[(unsigned int)(v31 + v30) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v31 + v30)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v31 + v30) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v31 + v30) >> 8)];
  v33 = v87 ^ (v32 + v31);
  v107 = v106 ^ v32;
  v34 = v33 ^ a3[14];
  v35 = v34 ^ a3[15] ^ v107;
  v36 = dword_1D2B3C0[HIBYTE(v35)]
      ^ dword_1D2A7C0[(uint8_t)v35]
      ^ dword_1D2AFC0[BYTE2(v35)]
      ^ dword_1D2ABC0[BYTE1(v35)];
  v88 = dword_1D2B3C0[(unsigned int)(v36 + v34) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v36 + v34)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v36 + v34) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v36 + v34) >> 8)];
  v37 = dword_1D2B3C0[(unsigned int)(v36 + v88) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v36 + v88)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v36 + v88) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v36 + v88) >> 8)];
  v98 = v97 ^ v37;
  v89 = v115 ^ (v37 + v88);
  v38 = a3[16] ^ v89;
  v39 = v38 ^ a3[17] ^ v98;
  v116 = dword_1D2B3C0[HIBYTE(v39)]
       ^ dword_1D2A7C0[(uint8_t)v39]
       ^ dword_1D2AFC0[BYTE2(v39)]
       ^ dword_1D2ABC0[BYTE1(v39)];
  v124 = dword_1D2B3C0[(unsigned int)(v116 + v38) >> 24]
       ^ dword_1D2A7C0[(uint8_t)(v116 + v38)]
       ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v116 + v38) >> 16)]
       ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v116 + v38) >> 8)];
  v40 = dword_1D2B3C0[(unsigned int)(v116 + v124) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v116 + v124)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v116 + v124) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v116 + v124) >> 8)];
  v41 = v40 + v124;
  v42 = v107 ^ v40;
  v43 = v33 ^ v41;
  v44 = v43 ^ a3[18];
  v45 = v44 ^ v42 ^ a3[19];
  v117 = v43;
  v108 = v42;
  v46 = dword_1D2B3C0[HIBYTE(v45)]
      ^ dword_1D2A7C0[(uint8_t)v45]
      ^ dword_1D2AFC0[BYTE2(v45)]
      ^ dword_1D2ABC0[BYTE1(v45)];
  v47 = dword_1D2B3C0[(unsigned int)(v46 + v44) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v46 + v44)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v46 + v44) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v46 + v44) >> 8)];
  v48 = dword_1D2B3C0[(unsigned int)(v47 + v46) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v47 + v46)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v47 + v46) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v47 + v46) >> 8)];
  v49 = v89 ^ (v48 + v47);
  v99 = v98 ^ v48;
  v50 = v49 ^ a3[20];
  v51 = v50 ^ a3[21] ^ v99;
  v90 = dword_1D2B3C0[HIBYTE(v51)]
      ^ dword_1D2A7C0[(uint8_t)v51]
      ^ dword_1D2AFC0[BYTE2(v51)]
      ^ dword_1D2ABC0[BYTE1(v51)];
  v125 = dword_1D2B3C0[(unsigned int)(v90 + v50) >> 24]
       ^ dword_1D2A7C0[(uint8_t)(v90 + v50)]
       ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v90 + v50) >> 16)]
       ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v90 + v50) >> 8)];
  v52 = dword_1D2B3C0[(unsigned int)(v90 + v125) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v90 + v125)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v90 + v125) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v90 + v125) >> 8)];
  v91 = v117 ^ (v52 + v125);
  v109 = v108 ^ v52;
  v53 = a3[22] ^ v91;
  v54 = v53 ^ a3[23] ^ v109;
  v55 = dword_1D2B3C0[HIBYTE(v54)]
      ^ dword_1D2A7C0[(uint8_t)v54]
      ^ dword_1D2AFC0[BYTE2(v54)]
      ^ dword_1D2ABC0[BYTE1(v54)];
  v118 = dword_1D2B3C0[(unsigned int)(v55 + v53) >> 24]
       ^ dword_1D2A7C0[(uint8_t)(v55 + v53)]
       ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v55 + v53) >> 16)]
       ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v55 + v53) >> 8)];
  v56 = dword_1D2B3C0[(unsigned int)(v55 + v118) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v55 + v118)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v55 + v118) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v55 + v118) >> 8)];
  v57 = v49 ^ (v56 + v118);
  v100 = v99 ^ v56;
  v58 = v57 ^ a3[24];
  v59 = v58 ^ a3[25] ^ v100;
  v119 = v57;
  v60 = dword_1D2B3C0[HIBYTE(v59)]
      ^ dword_1D2A7C0[(uint8_t)v59]
      ^ dword_1D2AFC0[BYTE2(v59)]
      ^ dword_1D2ABC0[BYTE1(v59)];
  v61 = dword_1D2B3C0[(unsigned int)(v60 + v58) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v60 + v58)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v60 + v58) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v60 + v58) >> 8)];
  v62 = dword_1D2B3C0[(unsigned int)(v61 + v60) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v61 + v60)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v61 + v60) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v61 + v60) >> 8)];
  v63 = v91 ^ (v62 + v61);
  v110 = v109 ^ v62;
  v64 = v63 ^ a3[26];
  v65 = v64 ^ a3[27] ^ v110;
  v66 = dword_1D2B3C0[HIBYTE(v65)]
      ^ dword_1D2A7C0[(uint8_t)v65]
      ^ dword_1D2AFC0[BYTE2(v65)]
      ^ dword_1D2ABC0[BYTE1(v65)];
  v92 = dword_1D2B3C0[(unsigned int)(v66 + v64) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v66 + v64)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v66 + v64) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v66 + v64) >> 8)];
  v67 = dword_1D2B3C0[(unsigned int)(v66 + v92) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v66 + v92)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v66 + v92) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v66 + v92) >> 8)];
  v68 = v67 + v92;
  v69 = v100 ^ v67;
  v93 = v119 ^ v68;
  v70 = a3[28] ^ v119 ^ v68;
  v71 = v70 ^ v69 ^ a3[29];
  v101 = v69;
  v72 = dword_1D2B3C0[HIBYTE(v71)]
      ^ dword_1D2A7C0[(uint8_t)v71]
      ^ dword_1D2AFC0[BYTE2(v71)]
      ^ dword_1D2ABC0[BYTE1(v71)];
  v120 = dword_1D2B3C0[(unsigned int)(v72 + v70) >> 24]
       ^ dword_1D2A7C0[(uint8_t)(v72 + v70)]
       ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v72 + v70) >> 16)]
       ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v72 + v70) >> 8)];
  v73 = dword_1D2B3C0[(unsigned int)(v72 + v120) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v72 + v120)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v72 + v120) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v72 + v120) >> 8)];
  v74 = v63 ^ (v73 + v120);
  v75 = v73 ^ v110;
  v121 = v74;
  v76 = a3[30] ^ v74;
  v77 = v76 ^ v73 ^ v110 ^ a3[31];
  v78 = dword_1D2B3C0[HIBYTE(v77)]
      ^ dword_1D2A7C0[(uint8_t)v77]
      ^ dword_1D2AFC0[BYTE2(v77)]
      ^ dword_1D2ABC0[BYTE1(v77)];
  v79 = dword_1D2B3C0[(unsigned int)(v78 + v76) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v78 + v76)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v78 + v76) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v78 + v76) >> 8)];
  v80 = dword_1D2B3C0[(unsigned int)(v79 + v78) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v79 + v78)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v79 + v78) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v79 + v78) >> 8)];
  v81 = v93 ^ (v80 + v79);
  v82 = v101 ^ v80;
  *a2 = HIBYTE(v81);
  a2[3] = v81;
  a2[1] = BYTE2(v81);
  a2[7] = v82;
  a2[4] = HIBYTE(v82);
  a2[5] = BYTE2(v82);
  a2[6] = BYTE1(v82);
  a2[8] = HIBYTE(v121);
  a2[9] = BYTE2(v121);
  a2[10] = BYTE1(v121);
  a2[12] = HIBYTE(v75);
  a2[13] = BYTE2(v75);
  v83 = v81 >> 8;
  a2[14] = BYTE1(v75);
  a2[2] = v83;
  a2[11] = v121;
  a2[15] = v75;
  return v75;
}

// ----------------------------------------------------------------------------
// Function: SEED_decrypt  (binary VA: 0x19d5470)
// Original: SEED_decrypt
// ----------------------------------------------------------------------------
int SEED_decrypt(unsigned int *a1, uint8_t *a2, uint32_t *a3)
{
  int v3;
  unsigned int v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  unsigned int v35;
  int v36;
  int v37;
  int v38;
  unsigned int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  unsigned int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  unsigned int v51;
  int v52;
  int v53;
  unsigned int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  unsigned int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  unsigned int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  unsigned int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  unsigned int v77;
  int v78;
  int v79;
  int v80;
  unsigned int v81;
  int v82;
  unsigned int v83;
  unsigned int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  unsigned int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  unsigned int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;

  v102 = __builtin_bswap32(a1[2]);
  v3 = a3[30] ^ v102;
  v94 = __builtin_bswap32(a1[3]);
  v4 = v3 ^ a3[31] ^ v94;
  v5 = dword_1D2B3C0[HIBYTE(v4)]
     ^ dword_1D2A7C0[(uint8_t)v4]
     ^ dword_1D2AFC0[BYTE2(v4)]
     ^ dword_1D2ABC0[BYTE1(v4)];
  v6 = dword_1D2B3C0[(unsigned int)(v5 + v3) >> 24]
     ^ dword_1D2A7C0[(uint8_t)(v5 + v3)]
     ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v5 + v3) >> 16)]
     ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v5 + v3) >> 8)];
  v7 = dword_1D2B3C0[(unsigned int)(v6 + v5) >> 24]
     ^ dword_1D2A7C0[(uint8_t)(v6 + v5)]
     ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v6 + v5) >> 16)]
     ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v6 + v5) >> 8)];
  v8 = v7 ^ __builtin_bswap32(a1[1]);
  v9 = __builtin_bswap32(*a1) ^ (v7 + v6);
  v10 = v9 ^ a3[28];
  v85 = v9;
  v111 = dword_1D2B3C0[(v10 ^ v8 ^ a3[29]) >> 24]
       ^ dword_1D2A7C0[(uint8_t)(v10 ^ v8 ^ *((uint8_t *)a3 + 116))]
       ^ dword_1D2AFC0[(uint8_t)((v10 ^ v8 ^ a3[29]) >> 16)]
       ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v10 ^ v8 ^ *((uint16_t *)a3 + 58)) >> 8)];
  v11 = dword_1D2B3C0[(unsigned int)(v111 + v10) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v111 + v10)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v111 + v10) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v111 + v10) >> 8)];
  v122 = dword_1D2B3C0[(unsigned int)(v11 + v111) >> 24]
       ^ dword_1D2A7C0[(uint8_t)(v11 + v111)]
       ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v11 + v111) >> 16)]
       ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v11 + v111) >> 8)];
  v112 = v102 ^ (v122 + v11);
  v95 = v94 ^ v122;
  v12 = a3[26] ^ v112;
  v103 = dword_1D2B3C0[(v12 ^ a3[27] ^ (unsigned int)v95) >> 24]
       ^ dword_1D2A7C0[(uint8_t)(v12 ^ *((uint8_t *)a3 + 108) ^ v95)]
       ^ dword_1D2AFC0[(uint8_t)((v12 ^ a3[27] ^ (unsigned int)v95) >> 16)]
       ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v12 ^ *((uint16_t *)a3 + 54) ^ v95) >> 8)];
  v13 = dword_1D2B3C0[(unsigned int)(v103 + v12) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v103 + v12)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v103 + v12) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v103 + v12) >> 8)];
  v104 = dword_1D2B3C0[(unsigned int)(v13 + v103) >> 24]
       ^ dword_1D2A7C0[(uint8_t)(v13 + v103)]
       ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v13 + v103) >> 16)]
       ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v13 + v103) >> 8)];
  v123 = v85 ^ (v104 + v13);
  v14 = a3[24] ^ v123;
  v105 = v104 ^ v8;
  v15 = v14 ^ v105 ^ a3[25];
  v16 = dword_1D2B3C0[HIBYTE(v15)]
      ^ dword_1D2A7C0[(uint8_t)v15]
      ^ dword_1D2AFC0[BYTE2(v15)]
      ^ dword_1D2ABC0[BYTE1(v15)];
  v17 = dword_1D2B3C0[(unsigned int)(v16 + v14) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v16 + v14)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v16 + v14) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v16 + v14) >> 8)];
  v18 = dword_1D2B3C0[(unsigned int)(v17 + v16) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v17 + v16)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v17 + v16) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v17 + v16) >> 8)];
  v19 = v112 ^ (v18 + v17);
  v96 = v95 ^ v18;
  v20 = v19 ^ a3[22];
  v21 = v20 ^ a3[23] ^ v96;
  v86 = dword_1D2B3C0[HIBYTE(v21)]
      ^ dword_1D2A7C0[(uint8_t)v21]
      ^ dword_1D2AFC0[BYTE2(v21)]
      ^ dword_1D2ABC0[BYTE1(v21)];
  v113 = dword_1D2B3C0[(unsigned int)(v86 + v20) >> 24]
       ^ dword_1D2A7C0[(uint8_t)(v86 + v20)]
       ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v86 + v20) >> 16)]
       ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v86 + v20) >> 8)];
  v22 = dword_1D2B3C0[(unsigned int)(v86 + v113) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v86 + v113)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v86 + v113) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v86 + v113) >> 8)];
  v87 = v123 ^ (v22 + v113);
  v106 = v105 ^ v22;
  v23 = a3[20] ^ v87;
  v24 = v23 ^ a3[21] ^ v106;
  v25 = dword_1D2B3C0[HIBYTE(v24)]
      ^ dword_1D2A7C0[(uint8_t)v24]
      ^ dword_1D2AFC0[BYTE2(v24)]
      ^ dword_1D2ABC0[BYTE1(v24)];
  v114 = dword_1D2B3C0[(unsigned int)(v25 + v23) >> 24]
       ^ dword_1D2A7C0[(uint8_t)(v25 + v23)]
       ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v25 + v23) >> 16)]
       ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v25 + v23) >> 8)];
  v26 = dword_1D2B3C0[(unsigned int)(v25 + v114) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v25 + v114)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v25 + v114) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v25 + v114) >> 8)];
  v27 = v19 ^ (v26 + v114);
  v28 = v27 ^ a3[18];
  v97 = v96 ^ v26;
  v115 = v27;
  v29 = v28 ^ a3[19] ^ v97;
  v30 = dword_1D2B3C0[HIBYTE(v29)]
      ^ dword_1D2A7C0[(uint8_t)v29]
      ^ dword_1D2AFC0[BYTE2(v29)]
      ^ dword_1D2ABC0[BYTE1(v29)];
  v31 = dword_1D2B3C0[(unsigned int)(v30 + v28) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v30 + v28)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v30 + v28) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v30 + v28) >> 8)];
  v32 = dword_1D2B3C0[(unsigned int)(v31 + v30) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v31 + v30)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v31 + v30) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v31 + v30) >> 8)];
  v33 = v87 ^ (v32 + v31);
  v107 = v106 ^ v32;
  v34 = v33 ^ a3[16];
  v35 = v34 ^ a3[17] ^ v107;
  v36 = dword_1D2B3C0[HIBYTE(v35)]
      ^ dword_1D2A7C0[(uint8_t)v35]
      ^ dword_1D2AFC0[BYTE2(v35)]
      ^ dword_1D2ABC0[BYTE1(v35)];
  v88 = dword_1D2B3C0[(unsigned int)(v36 + v34) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v36 + v34)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v36 + v34) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v36 + v34) >> 8)];
  v37 = dword_1D2B3C0[(unsigned int)(v36 + v88) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v36 + v88)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v36 + v88) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v36 + v88) >> 8)];
  v98 = v97 ^ v37;
  v89 = v115 ^ (v37 + v88);
  v38 = a3[14] ^ v89;
  v39 = v38 ^ a3[15] ^ v98;
  v116 = dword_1D2B3C0[HIBYTE(v39)]
       ^ dword_1D2A7C0[(uint8_t)v39]
       ^ dword_1D2AFC0[BYTE2(v39)]
       ^ dword_1D2ABC0[BYTE1(v39)];
  v124 = dword_1D2B3C0[(unsigned int)(v116 + v38) >> 24]
       ^ dword_1D2A7C0[(uint8_t)(v116 + v38)]
       ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v116 + v38) >> 16)]
       ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v116 + v38) >> 8)];
  v40 = dword_1D2B3C0[(unsigned int)(v116 + v124) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v116 + v124)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v116 + v124) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v116 + v124) >> 8)];
  v41 = v40 + v124;
  v42 = v107 ^ v40;
  v43 = v33 ^ v41;
  v44 = v43 ^ a3[12];
  v45 = v44 ^ v42 ^ a3[13];
  v117 = v43;
  v108 = v42;
  v46 = dword_1D2B3C0[HIBYTE(v45)]
      ^ dword_1D2A7C0[(uint8_t)v45]
      ^ dword_1D2AFC0[BYTE2(v45)]
      ^ dword_1D2ABC0[BYTE1(v45)];
  v47 = dword_1D2B3C0[(unsigned int)(v46 + v44) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v46 + v44)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v46 + v44) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v46 + v44) >> 8)];
  v48 = dword_1D2B3C0[(unsigned int)(v47 + v46) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v47 + v46)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v47 + v46) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v47 + v46) >> 8)];
  v49 = v89 ^ (v48 + v47);
  v99 = v98 ^ v48;
  v50 = v49 ^ a3[10];
  v51 = v50 ^ a3[11] ^ v99;
  v90 = dword_1D2B3C0[HIBYTE(v51)]
      ^ dword_1D2A7C0[(uint8_t)v51]
      ^ dword_1D2AFC0[BYTE2(v51)]
      ^ dword_1D2ABC0[BYTE1(v51)];
  v125 = dword_1D2B3C0[(unsigned int)(v90 + v50) >> 24]
       ^ dword_1D2A7C0[(uint8_t)(v90 + v50)]
       ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v90 + v50) >> 16)]
       ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v90 + v50) >> 8)];
  v52 = dword_1D2B3C0[(unsigned int)(v90 + v125) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v90 + v125)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v90 + v125) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v90 + v125) >> 8)];
  v91 = v117 ^ (v52 + v125);
  v109 = v108 ^ v52;
  v53 = a3[8] ^ v91;
  v54 = v53 ^ a3[9] ^ v109;
  v55 = dword_1D2B3C0[HIBYTE(v54)]
      ^ dword_1D2A7C0[(uint8_t)v54]
      ^ dword_1D2AFC0[BYTE2(v54)]
      ^ dword_1D2ABC0[BYTE1(v54)];
  v118 = dword_1D2B3C0[(unsigned int)(v55 + v53) >> 24]
       ^ dword_1D2A7C0[(uint8_t)(v55 + v53)]
       ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v55 + v53) >> 16)]
       ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v55 + v53) >> 8)];
  v56 = dword_1D2B3C0[(unsigned int)(v55 + v118) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v55 + v118)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v55 + v118) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v55 + v118) >> 8)];
  v57 = v49 ^ (v56 + v118);
  v100 = v99 ^ v56;
  v58 = v57 ^ a3[6];
  v59 = v58 ^ a3[7] ^ v100;
  v119 = v57;
  v60 = dword_1D2B3C0[HIBYTE(v59)]
      ^ dword_1D2A7C0[(uint8_t)v59]
      ^ dword_1D2AFC0[BYTE2(v59)]
      ^ dword_1D2ABC0[BYTE1(v59)];
  v61 = dword_1D2B3C0[(unsigned int)(v60 + v58) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v60 + v58)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v60 + v58) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v60 + v58) >> 8)];
  v62 = dword_1D2B3C0[(unsigned int)(v61 + v60) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v61 + v60)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v61 + v60) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v61 + v60) >> 8)];
  v63 = v91 ^ (v62 + v61);
  v110 = v109 ^ v62;
  v64 = v63 ^ a3[4];
  v65 = v64 ^ a3[5] ^ v110;
  v66 = dword_1D2B3C0[HIBYTE(v65)]
      ^ dword_1D2A7C0[(uint8_t)v65]
      ^ dword_1D2AFC0[BYTE2(v65)]
      ^ dword_1D2ABC0[BYTE1(v65)];
  v92 = dword_1D2B3C0[(unsigned int)(v66 + v64) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v66 + v64)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v66 + v64) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v66 + v64) >> 8)];
  v67 = dword_1D2B3C0[(unsigned int)(v66 + v92) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v66 + v92)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v66 + v92) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v66 + v92) >> 8)];
  v68 = v67 + v92;
  v69 = v100 ^ v67;
  v93 = v119 ^ v68;
  v70 = a3[2] ^ v119 ^ v68;
  v71 = v70 ^ v69 ^ a3[3];
  v101 = v69;
  v72 = dword_1D2B3C0[HIBYTE(v71)]
      ^ dword_1D2A7C0[(uint8_t)v71]
      ^ dword_1D2AFC0[BYTE2(v71)]
      ^ dword_1D2ABC0[BYTE1(v71)];
  v120 = dword_1D2B3C0[(unsigned int)(v72 + v70) >> 24]
       ^ dword_1D2A7C0[(uint8_t)(v72 + v70)]
       ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v72 + v70) >> 16)]
       ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v72 + v70) >> 8)];
  v73 = dword_1D2B3C0[(unsigned int)(v72 + v120) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v72 + v120)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v72 + v120) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v72 + v120) >> 8)];
  v74 = v63 ^ (v73 + v120);
  v75 = v73 ^ v110;
  v121 = v74;
  v76 = *a3 ^ v74;
  v77 = v76 ^ v73 ^ v110 ^ a3[1];
  v78 = dword_1D2B3C0[HIBYTE(v77)]
      ^ dword_1D2A7C0[(uint8_t)v77]
      ^ dword_1D2AFC0[BYTE2(v77)]
      ^ dword_1D2ABC0[BYTE1(v77)];
  v79 = dword_1D2B3C0[(unsigned int)(v78 + v76) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v78 + v76)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v78 + v76) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v78 + v76) >> 8)];
  v80 = dword_1D2B3C0[(unsigned int)(v79 + v78) >> 24]
      ^ dword_1D2A7C0[(uint8_t)(v79 + v78)]
      ^ dword_1D2AFC0[(uint8_t)((unsigned int)(v79 + v78) >> 16)]
      ^ dword_1D2ABC0[(uint8_t)((uint16_t)(v79 + v78) >> 8)];
  v81 = v93 ^ (v80 + v79);
  v82 = v101 ^ v80;
  *a2 = HIBYTE(v81);
  a2[3] = v81;
  a2[1] = BYTE2(v81);
  a2[7] = v82;
  a2[4] = HIBYTE(v82);
  a2[5] = BYTE2(v82);
  a2[6] = BYTE1(v82);
  a2[8] = HIBYTE(v121);
  a2[9] = BYTE2(v121);
  a2[10] = BYTE1(v121);
  a2[12] = HIBYTE(v75);
  a2[13] = BYTE2(v75);
  v83 = v81 >> 8;
  a2[14] = BYTE1(v75);
  a2[2] = v83;
  a2[11] = v121;
  a2[15] = v75;
  return v75;
}

// ----------------------------------------------------------------------------
// Function: SEED_cbc_encrypt  (binary VA: 0x19d6230)
// Original: SEED_cbc_encrypt
// ----------------------------------------------------------------------------
int SEED_cbc_encrypt(int a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( a6 != 0 )
    return CRYPTO_cbc128_encrypt(a1, a2, a3, a4, a5, SEED_encrypt);
  else
    return CRYPTO_cbc128_decrypt(a1, a2, a3, a4, a5, SEED_decrypt);
}

// ----------------------------------------------------------------------------
// Function: SEED_cfb128_encrypt  (binary VA: 0x19d62d0)
// Original: SEED_cfb128_encrypt
// ----------------------------------------------------------------------------
int SEED_cfb128_encrypt(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return CRYPTO_cfb128_encrypt(a1, a2, a3, a4, a5, a6, a7, SEED_encrypt);
}

// ----------------------------------------------------------------------------
// Function: SEED_ecb_encrypt  (binary VA: 0x19d6330)
// Original: SEED_ecb_encrypt
// ----------------------------------------------------------------------------
int SEED_ecb_encrypt(unsigned int *a1, uint8_t *a2, uint32_t *a3, int a4)
{
  if ( a4 != 0 )
    return SEED_encrypt(a1, a2, a3);
  else
    return SEED_decrypt(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: SEED_ofb128_encrypt  (binary VA: 0x19d6380)
// Original: SEED_ofb128_encrypt
// ----------------------------------------------------------------------------
int SEED_ofb128_encrypt(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return (int)(uintptr_t)(CRYPTO_ofb128_encrypt(a1, a2, a3, a4, a5, a6, SEED_encrypt));
}

// ----------------------------------------------------------------------------
// Function: sub_19D63E0  (binary VA: 0x19d63e0)
// Original: sub_19D63E0
// ----------------------------------------------------------------------------
int sub_19D63E0(int *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
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
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
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
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137; // et0
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  bool v148;
  int v149;
  int v150;
  int v151;
  unsigned int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  unsigned int v159;
  int v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v168;
  unsigned int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  unsigned int v174;
  int v175;
  unsigned int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  unsigned int v182;
  int v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  int v191;
  int v192;
  int v193;
  int v194;
  int v195;
  int v196;
  unsigned int v197;
  int v198;
  int v199;
  int v200;
  int v201;
  unsigned int v202;
  int v203;
  int v204;
  int v205;
  int v206;
  unsigned int v207;
  int v208;
  int v209;
  int v210;
  int v211;
  unsigned int v212;
  int v213;
  int v214;
  int v215;
  int v216;
  int v217;
  unsigned int v218;
  int v219;
  int v220;
  int v221;
  int v222;
  int v223;
  unsigned int v224;
  int v225;
  int v226;
  int v227;
  int v228;
  int v229;
  unsigned int v230;
  int v231;
  int v232;
  int v233;
  int v234;
  unsigned int v235;
  int v236;
  int v237;
  int v238;
  int v239;
  unsigned int v240;
  int v241;
  int v242;
  int v243;
  int v244;
  int v245;
  int v246;
  int v247;
  int v248;
  unsigned int v249;
  int v250;
  int v251;
  int v252;
  int v254;

  v254 = *a1;
  v3 = *a1;
  v4 = a1[1];
  v5 = a1[4];
  v6 = a1[3];
  result = a1[2];
  v151 = v5;
  while ( 1 )
  {
    v197 = __builtin_bswap32(*(uint32_t *)a2);
    v202 = __builtin_bswap32(*(uint32_t *)(a2 + 4));
    v174 = v197 + v151 + __builtin_rotateleft32(v3, 5) + 1518500249 + (v6 ^ v4 & (result ^ v6));
    v8 = __builtin_rotateleft32(v4, 30);
    v152 = __builtin_bswap32(*(uint32_t *)(a2 + 8));
    v9 = result ^ v3 & (result ^ v8);
    v10 = __builtin_rotateleft32(v3, 30);
    v168 = v202 + v6 + v9 + 1518500249 + __builtin_rotateleft32(v174, 5);
    v159 = __builtin_bswap32(*(uint32_t *)(a2 + 12));
    v11 = __builtin_rotateleft32(v168, 5) + (v8 ^ v174 & (v8 ^ v10)) + result + v152 + 1518500249;
    v12 = __builtin_rotateleft32(v174, 30);
    v212 = __builtin_bswap32(*(uint32_t *)(a2 + 16));
    v175 = v8 + v159 + 1518500249 + (v10 ^ v168 & (v10 ^ v12)) + __builtin_rotateleft32(v11, 5);
    v13 = __builtin_rotateleft32(v168, 30);
    v169 = __builtin_bswap32(*(uint32_t *)(a2 + 20));
    v14 = __builtin_rotateleft32(v175, 5) + v10 + v212 + 1518500249 + (v12 ^ v11 & (v12 ^ v13));
    v15 = __builtin_rotateleft32(v11, 30);
    v218 = __builtin_bswap32(*(uint32_t *)(a2 + 24));
    v188 = v12 + v169 + 1518500249 + (v13 ^ v175 & (v13 ^ v15)) + __builtin_rotateleft32(v14, 5);
    v16 = __builtin_rotateleft32(v175, 30);
    v224 = __builtin_bswap32(*(uint32_t *)(a2 + 28));
    v17 = v13 + v218 + 1518500249 + (v15 ^ v14 & (v15 ^ v16)) + __builtin_rotateleft32(v188, 5);
    v18 = __builtin_rotateleft32(v14, 30);
    v182 = __builtin_bswap32(*(uint32_t *)(a2 + 32));
    v234 = v15 + v224 + 1518500249 + (v16 ^ v188 & (v16 ^ v18)) + __builtin_rotateleft32(v17, 5);
    v19 = __builtin_rotateleft32(v188, 30);
    v176 = __builtin_bswap32(*(uint32_t *)(a2 + 36));
    v20 = __builtin_rotateleft32(v234, 5) + v16 + v182 + 1518500249 + (v18 ^ v17 & (v18 ^ v19));
    v21 = __builtin_rotateleft32(v17, 30);
    v207 = __builtin_bswap32(*(uint32_t *)(a2 + 40));
    v229 = v18 + v176 + 1518500249 + (v19 ^ v234 & (v19 ^ v21)) + __builtin_rotateleft32(v20, 5);
    v22 = __builtin_rotateleft32(v234, 30);
    v235 = __builtin_bswap32(*(uint32_t *)(a2 + 44));
    v189 = v19 + v207 + 1518500249 + (v21 ^ v20 & (v21 ^ v22)) + __builtin_rotateleft32(v229, 5);
    v23 = __builtin_rotateleft32(v20, 30);
    v249 = __builtin_bswap32(*(uint32_t *)(a2 + 48));
    v24 = __builtin_rotateleft32(v189, 5) + (v22 ^ v229 & (v22 ^ v23)) + v21 + v235 + 1518500249;
    v25 = __builtin_rotateleft32(v229, 30);
    v230 = __builtin_bswap32(*(uint32_t *)(a2 + 52));
    v149 = v22 + v249 + 1518500249 + (v23 ^ v189 & (v23 ^ v25)) + __builtin_rotateleft32(v24, 5);
    v26 = __builtin_rotateleft32(v189, 30);
    v240 = __builtin_bswap32(*(uint32_t *)(a2 + 56));
    v27 = __builtin_rotateleft32(v149, 5) + v23 + v230 + 1518500249 + (v25 ^ v24 & (v25 ^ v26));
    v28 = __builtin_rotateleft32(v24, 30);
    v244 = *(uint8_t *)(a2 + 63) | (*(uint8_t *)(a2 + 61) << 16) | (*(uint8_t *)(a2 + 60) << 24);
    v29 = *(uint8_t *)(a2 + 62);
    a2 += 64;
    v245 = (v29 << 8) | v244;
    v30 = __builtin_rotateleft32(v27, 5) + v25 + v240 + 1518500249 + (v26 ^ v149 & (v26 ^ v28));
    v31 = __builtin_rotateleft32(v149, 30);
    v32 = __builtin_rotateleft32(v30, 5) + v26 + v245 + 1518500249 + (v28 ^ v27 & (v28 ^ v31));
    v33 = __builtin_rotateleft32(v27, 30);
    v198 = __builtin_rotateleft32(v230 ^ v182 ^ v197 ^ v152, 1);
    v190 = v198 + (v31 ^ v30 & (v33 ^ v31)) + v28 + __builtin_rotateleft32(v32, 5) + 1518500249;
    v34 = __builtin_rotateleft32(v30, 30);
    v203 = __builtin_rotateleft32(v240 ^ v176 ^ v202 ^ v159, 1);
    v35 = __builtin_rotateleft32(v190, 5) + v31 + v203 + 1518500249 + (v33 ^ v32 & (v33 ^ v34));
    v36 = __builtin_rotateleft32(v32, 30);
    v153 = __builtin_rotateleft32(v245 ^ v207 ^ v152 ^ v212, 1);
    v37 = __builtin_rotateleft32(v35, 5) + (v34 ^ v190 & (v34 ^ v36)) + v33 + v153 + 1518500249;
    v160 = __builtin_rotateleft32(v198 ^ v235 ^ v159 ^ v169, 1);
    v38 = __builtin_rotateleft32(v190, 30);
    v191 = v34 + v160 + 1518500249 + (v36 ^ v35 & (v36 ^ v38)) + __builtin_rotateleft32(v37, 5);
    v39 = __builtin_rotateleft32(v35, 30);
    v213 = __builtin_rotateleft32(v203 ^ v249 ^ v212 ^ v218, 1);
    v40 = __builtin_rotateleft32(v191, 5) + (v37 ^ v38 ^ v39) + v36 + v213 + 1859775393;
    v41 = __builtin_rotateleft32(v37, 30);
    v170 = __builtin_rotateleft32(v153 ^ v230 ^ v169 ^ v224, 1);
    v219 = __builtin_rotateleft32(v160 ^ v240 ^ v218 ^ v182, 1);
    v42 = __builtin_rotateleft32(v40, 5) + v38 + v170 + 1859775393 + (v191 ^ v39 ^ v41);
    v43 = __builtin_rotateleft32(v191, 30);
    v44 = __builtin_rotateleft32(v42, 5) + v39 + v219 + 1859775393 + (v40 ^ v41 ^ v43);
    v225 = __builtin_rotateleft32(v213 ^ v245 ^ v224 ^ v176, 1);
    v45 = __builtin_rotateleft32(v40, 30);
    v46 = __builtin_rotateleft32(v44, 5) + v41 + v225 + 1859775393 + (v42 ^ v43 ^ v45);
    v183 = __builtin_rotateleft32(v170 ^ v198 ^ v182 ^ v207, 1);
    v47 = __builtin_rotateleft32(v42, 30);
    v48 = __builtin_rotateleft32(v46, 5) + v43 + v183 + 1859775393 + (v44 ^ v45 ^ v47);
    v177 = __builtin_rotateleft32(v219 ^ v203 ^ v176 ^ v235, 1);
    v49 = __builtin_rotateleft32(v44, 30);
    v50 = __builtin_rotateleft32(v48, 5) + v45 + v177 + 1859775393 + (v46 ^ v47 ^ v49);
    v208 = __builtin_rotateleft32(v225 ^ v153 ^ v207 ^ v249, 1);
    v51 = __builtin_rotateleft32(v46, 30);
    v52 = __builtin_rotateleft32(v50, 5) + v47 + v208 + 1859775393 + (v48 ^ v49 ^ v51);
    v236 = __builtin_rotateleft32(v183 ^ v160 ^ v235 ^ v230, 1);
    v53 = __builtin_rotateleft32(v48, 30);
    v54 = __builtin_rotateleft32(v52, 5) + v49 + v236 + 1859775393 + (v50 ^ v51 ^ v53);
    v250 = __builtin_rotateleft32(v177 ^ v213 ^ v249 ^ v240, 1);
    v55 = __builtin_rotateleft32(v50, 30);
    v56 = __builtin_rotateleft32(v54, 5) + v51 + v250 + 1859775393 + (v52 ^ v53 ^ v55);
    v231 = __builtin_rotateleft32(v208 ^ v170 ^ v230 ^ v245, 1);
    v57 = __builtin_rotateleft32(v52, 30);
    v58 = __builtin_rotateleft32(v56, 5) + v53 + v231 + 1859775393 + (v54 ^ v55 ^ v57);
    v241 = __builtin_rotateleft32(v236 ^ v219 ^ v240 ^ v198, 1);
    v59 = __builtin_rotateleft32(v54, 30);
    v60 = __builtin_rotateleft32(v58, 5) + v55 + v241 + 1859775393 + (v56 ^ v57 ^ v59);
    v61 = __builtin_rotateleft32(v56, 30);
    v246 = __builtin_rotateleft32(v250 ^ v225 ^ v245 ^ v203, 1);
    v62 = __builtin_rotateleft32(v60, 5) + v57 + v246 + 1859775393 + (v58 ^ v59 ^ v61);
    v199 = __builtin_rotateleft32(v231 ^ v183 ^ v198 ^ v153, 1);
    v63 = __builtin_rotateleft32(v58, 30);
    v64 = __builtin_rotateleft32(v62, 5) + v59 + v199 + 1859775393 + (v60 ^ v61 ^ v63);
    v204 = __builtin_rotateleft32(v241 ^ v177 ^ v203 ^ v160, 1);
    v65 = __builtin_rotateleft32(v60, 30);
    v66 = __builtin_rotateleft32(v64, 5) + v61 + v204 + 1859775393 + (v62 ^ v63 ^ v65);
    v67 = __builtin_rotateleft32(v62, 30);
    v154 = __builtin_rotateleft32(v246 ^ v208 ^ v153 ^ v213, 1);
    v68 = __builtin_rotateleft32(v66, 5) + v63 + v154 + 1859775393 + (v64 ^ v65 ^ v67);
    v161 = __builtin_rotateleft32(v199 ^ v236 ^ v160 ^ v170, 1);
    v69 = __builtin_rotateleft32(v64, 30);
    v70 = __builtin_rotateleft32(v68, 5) + v65 + v161 + 1859775393 + (v66 ^ v67 ^ v69);
    v214 = __builtin_rotateleft32(v204 ^ v250 ^ v213 ^ v219, 1);
    v71 = __builtin_rotateleft32(v66, 30);
    v72 = __builtin_rotateleft32(v70, 5) + v67 + v214 + 1859775393 + (v68 ^ v69 ^ v71);
    v171 = __builtin_rotateleft32(v154 ^ v231 ^ v170 ^ v225, 1);
    v73 = __builtin_rotateleft32(v68, 30);
    v74 = __builtin_rotateleft32(v72, 5) + v69 + v171 + 1859775393 + (v70 ^ v71 ^ v73);
    v220 = __builtin_rotateleft32(v161 ^ v241 ^ v219 ^ v183, 1);
    v75 = __builtin_rotateleft32(v70, 30);
    v76 = __builtin_rotateleft32(v74, 5) + v71 + v220 + 1859775393 + (v72 ^ v73 ^ v75);
    v226 = __builtin_rotateleft32(v214 ^ v246 ^ v225 ^ v177, 1);
    v77 = __builtin_rotateleft32(v72, 30);
    v78 = __builtin_rotateleft32(v76, 5) + v73 + v226 + 1859775393 + (v74 ^ v75 ^ v77);
    v184 = __builtin_rotateleft32(v171 ^ v199 ^ v183 ^ v208, 1);
    v79 = __builtin_rotateleft32(v74, 30);
    v80 = v75 + v184 - 1894007588 + __builtin_rotateleft32(v78, 5) + (v79 & v76 | v77 & (v79 | v76));
    v178 = __builtin_rotateleft32(v220 ^ v204 ^ v177 ^ v236, 1);
    v81 = __builtin_rotateleft32(v76, 30);
    v82 = __builtin_rotateleft32(v80, 5) + v77 + v178 - 1894007588 + (v81 & v78 | v79 & (v81 | v78));
    v209 = __builtin_rotateleft32(v226 ^ v154 ^ v208 ^ v250, 1);
    v83 = __builtin_rotateleft32(v78, 30);
    v84 = v79 + v209 - 1894007588 + __builtin_rotateleft32(v82, 5) + (v83 & v80 | v81 & (v83 | v80));
    v237 = __builtin_rotateleft32(v184 ^ v161 ^ v236 ^ v231, 1);
    v85 = __builtin_rotateleft32(v80, 30);
    v86 = __builtin_rotateleft32(v84, 5) + v81 + v237 - 1894007588 + (v85 & v82 | v83 & (v85 | v82));
    v251 = __builtin_rotateleft32(v178 ^ v214 ^ v250 ^ v241, 1);
    v87 = __builtin_rotateleft32(v82, 30);
    v88 = v83 + v251 - 1894007588 + __builtin_rotateleft32(v86, 5) + (v87 & v84 | v85 & (v87 | v84));
    v232 = __builtin_rotateleft32(v209 ^ v171 ^ v231 ^ v246, 1);
    v89 = __builtin_rotateleft32(v84, 30);
    v90 = __builtin_rotateleft32(v88, 5) + v85 + v232 - 1894007588 + (v89 & v86 | v87 & (v89 | v86));
    v91 = __builtin_rotateleft32(v86, 30);
    v242 = __builtin_rotateleft32(v237 ^ v220 ^ v241 ^ v199, 1);
    v92 = v87 + v242 - 1894007588 + __builtin_rotateleft32(v90, 5) + (v91 & v88 | v89 & (v91 | v88));
    v247 = __builtin_rotateleft32(v251 ^ v226 ^ v246 ^ v204, 1);
    v93 = __builtin_rotateleft32(v88, 30);
    v94 = __builtin_rotateleft32(v92, 5) + v89 + v247 - 1894007588 + (v93 & v90 | v91 & (v93 | v90));
    v200 = __builtin_rotateleft32(v232 ^ v184 ^ v199 ^ v154, 1);
    v95 = __builtin_rotateleft32(v90, 30);
    v192 = v91 + v200 - 1894007588 + __builtin_rotateleft32(v94, 5);
    v96 = v95 & v92;
    v97 = v93 & (v95 | v92);
    v98 = __builtin_rotateleft32(v92, 30);
    v99 = v192 + (v96 | v97);
    v205 = __builtin_rotateleft32(v242 ^ v178 ^ v204 ^ v161, 1);
    v100 = __builtin_rotateleft32(v99, 5) + v93 + v205 - 1894007588 + (v98 & v94 | v95 & (v98 | v94));
    v155 = __builtin_rotateleft32(v247 ^ v209 ^ v154 ^ v214, 1);
    v101 = __builtin_rotateleft32(v94, 30);
    v102 = v95 + v155 - 1894007588 + __builtin_rotateleft32(v100, 5) + (v101 & v99 | v98 & (v101 | v99));
    v162 = __builtin_rotateleft32(v200 ^ v237 ^ v161 ^ v171, 1);
    v103 = __builtin_rotateleft32(v99, 30);
    v104 = __builtin_rotateleft32(v102, 5) + v98 + v162 - 1894007588 + (v103 & v100 | v101 & (v103 | v100));
    v215 = __builtin_rotateleft32(v205 ^ v251 ^ v214 ^ v220, 1);
    v105 = __builtin_rotateleft32(v100, 30);
    v106 = v101 + v215 - 1894007588 + __builtin_rotateleft32(v104, 5) + (v105 & v102 | v103 & (v105 | v102));
    v172 = __builtin_rotateleft32(v155 ^ v232 ^ v171 ^ v226, 1);
    v107 = __builtin_rotateleft32(v102, 30);
    v108 = __builtin_rotateleft32(v106, 5) + v103 + v172 - 1894007588 + (v107 & v104 | v105 & (v107 | v104));
    v221 = __builtin_rotateleft32(v162 ^ v242 ^ v220 ^ v184, 1);
    v109 = __builtin_rotateleft32(v104, 30);
    v110 = v105 + v221 - 1894007588 + __builtin_rotateleft32(v108, 5) + (v109 & v106 | v107 & (v109 | v106));
    v227 = __builtin_rotateleft32(v215 ^ v247 ^ v226 ^ v178, 1);
    v111 = __builtin_rotateleft32(v106, 30);
    v112 = __builtin_rotateleft32(v110, 5) + v107 + v227 - 1894007588 + (v111 & v108 | v109 & (v111 | v108));
    v185 = __builtin_rotateleft32(v172 ^ v200 ^ v184 ^ v209, 1);
    v113 = __builtin_rotateleft32(v108, 30);
    v114 = v109 + v185 - 1894007588 + __builtin_rotateleft32(v112, 5) + (v113 & v110 | v111 & (v113 | v110));
    v115 = __builtin_rotateleft32(v110, 30);
    v179 = __builtin_rotateleft32(v221 ^ v205 ^ v178 ^ v237, 1);
    v116 = __builtin_rotateleft32(v114, 5) + v111 + v179 - 1894007588 + (v115 & v112 | v113 & (v115 | v112));
    v210 = __builtin_rotateleft32(v227 ^ v155 ^ v209 ^ v251, 1);
    v117 = __builtin_rotateleft32(v112, 30);
    v193 = v113 + v210 - 1894007588 + __builtin_rotateleft32(v116, 5) + (v117 & v114 | v115 & (v117 | v114));
    v118 = __builtin_rotateleft32(v114, 30);
    v238 = __builtin_rotateleft32(v185 ^ v162 ^ v237 ^ v232, 1);
    v119 = __builtin_rotateleft32(v193, 5) + v115 + v238 - 1894007588 + (v118 & v116 | v117 & (v118 | v116));
    v120 = __builtin_rotateleft32(v116, 30);
    v252 = __builtin_rotateleft32(v179 ^ v215 ^ v251 ^ v242, 1);
    v233 = __builtin_rotateleft32(v210 ^ v172 ^ v232 ^ v247, 1);
    v121 = __builtin_rotateleft32(v119, 5) + (v193 ^ v118 ^ v120) + v117 + v252 - 899497514;
    v122 = __builtin_rotateleft32(v193, 30);
    v123 = v118 + v233 - 899497514 + (v119 ^ v120 ^ v122) + __builtin_rotateleft32(v121, 5);
    v243 = __builtin_rotateleft32(v238 ^ v221 ^ v242 ^ v200, 1);
    v124 = __builtin_rotateleft32(v119, 30);
    v125 = __builtin_rotateleft32(v123, 5) + (v121 ^ v122 ^ v124) + v120 + v243 - 899497514;
    v126 = __builtin_rotateleft32(v121, 30);
    v248 = __builtin_rotateleft32(v252 ^ v227 ^ v247 ^ v205, 1);
    v127 = __builtin_rotateleft32(v125, 5) + (v123 ^ v124 ^ v126) + v122 + v248 - 899497514;
    v201 = __builtin_rotateleft32(v233 ^ v185 ^ v200 ^ v155, 1);
    v128 = __builtin_rotateleft32(v123, 30);
    v129 = __builtin_rotateleft32(v127, 5) + v124 + v201 - 899497514 + (v125 ^ v126 ^ v128);
    v206 = __builtin_rotateleft32(v243 ^ v179 ^ v205 ^ v162, 1);
    v130 = __builtin_rotateleft32(v125, 30);
    v131 = __builtin_rotateleft32(v129, 5) + v126 + v206 - 899497514 + (v127 ^ v128 ^ v130);
    v156 = __builtin_rotateleft32(v248 ^ v210 ^ v155 ^ v215, 1);
    v132 = __builtin_rotateleft32(v127, 30);
    v194 = (v129 ^ v130 ^ v132) + v128 + v156 - 899497514 + __builtin_rotateleft32(v131, 5);
    v133 = __builtin_rotateleft32(v201 ^ v238 ^ v162 ^ v172, 1);
    v134 = __builtin_rotateleft32(v129, 30);
    v163 = v130 + v133 - 899497514 + (v131 ^ v132 ^ v134) + __builtin_rotateleft32(v194, 5);
    v135 = __builtin_rotateleft32(v206 ^ v252 ^ v215 ^ v221, 1);
    v136 = __builtin_rotateleft32(v131, 30);
    v216 = v132 + v135 - 899497514 + (v194 ^ v134 ^ v136) + __builtin_rotateleft32(v163, 5);
    v137 = __builtin_rotateleft32(v156 ^ v233 ^ v172 ^ v227, 1);
    v138 = __builtin_rotateleft32(v194, 30);
    v195 = v134 + v137 - 899497514 + (v163 ^ v136 ^ v138) + __builtin_rotateleft32(v216, 5);
    v164 = __builtin_rotateleft32(v163, 30);
    v139 = __builtin_rotateleft32(v133 ^ v243 ^ v221 ^ v185, 1);
    v222 = v136 + v139 - 899497514 + (v216 ^ v138 ^ v164) + __builtin_rotateleft32(v195, 5);
    v140 = __builtin_rotateleft32(v135 ^ v248 ^ v227 ^ v179, 1);
    v217 = __builtin_rotateleft32(v216, 30);
    v141 = v138 + v140 - 899497514 + (v195 ^ v164 ^ v217) + __builtin_rotateleft32(v222, 5);
    v196 = __builtin_rotateleft32(v195, 30);
    v150 = __builtin_rotateleft32(v137 ^ v201 ^ v185 ^ v210, 1);
    v186 = __builtin_rotateleft32(v141, 5) + v164 + v150 - 899497514 + (v222 ^ v217 ^ v196);
    v223 = __builtin_rotateleft32(v222, 30);
    v180 = __builtin_rotateleft32(v139 ^ v206 ^ v179 ^ v238, 1);
    v165 = __builtin_rotateleft32(v186, 5) + (v141 ^ v196 ^ v223) + v217 + v180 - 899497514;
    v228 = __builtin_rotateleft32(v141, 30);
    v211 = __builtin_rotateleft32(v140 ^ v156 ^ v210 ^ v252, 1);
    v157 = __builtin_rotateleft32(v165, 5) + (v186 ^ v223 ^ v228) + v196 + v211 - 899497514;
    v187 = __builtin_rotateleft32(v186, 30);
    v142 = __builtin_rotateleft32(v150 ^ v133 ^ v238 ^ v233, 1);
    v239 = (v165 ^ v228 ^ v187) + v223 + v142 - 899497514 + __builtin_rotateleft32(v157, 5);
    v166 = __builtin_rotateleft32(v165, 30);
    v143 = __builtin_rotateleft32(v180 ^ v135 ^ v252 ^ v243, 1);
    v181 = v228 + v143 - 899497514 + (v157 ^ v187 ^ v166) + __builtin_rotateleft32(v239, 5);
    v158 = __builtin_rotateleft32(v157, 30);
    v173 = v187
         + __builtin_rotateleft32(v211 ^ v137 ^ v233 ^ v248, 1)
         - 899497514
         + (v239 ^ v166 ^ v158)
         + __builtin_rotateleft32(v181, 5);
    v144 = __builtin_rotateleft32(v239, 30);
    v145 = __builtin_rotateleft32(v173, 5)
         + v166
         + __builtin_rotateleft32(v142 ^ v139 ^ v243 ^ v201, 1)
         - 899497514
         + (v181 ^ v144 ^ v158);
    v146 = __builtin_rotateleft32(v181, 30);
    v3 = __builtin_rotateleft32(v145, 5)
       + (v173 ^ v144 ^ v146)
       + v158
       + __builtin_rotateleft32(v143 ^ v140 ^ v248 ^ v206, 1)
       + v254
       - 899497514;
    v4 = a1[1] + v145;
    *a1 = v3;
    a1[1] = v4;
    v147 = a1[4] + v144;
    v6 = a1[3] + v146;
    result = a1[2] + __builtin_rotateleft32(v173, 30);
    v148 = a3-- == 1;
    a1[2] = result;
    a1[3] = v6;
    v151 = v147;
    a1[4] = v147;
    if ( v148 )
      break;
    v254 = v3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19D7F00  (binary VA: 0x19d7f00)
// Original: sub_19D7F00
// ----------------------------------------------------------------------------
signed int sub_19D7F00(signed int result, int a2, int a3)
{
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  unsigned int v29;
  int v30;
  char v31;
  unsigned int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
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
  bool v65;
  int v66;
  unsigned int v67;
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
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  unsigned int v107;
  unsigned int v108;
  unsigned int v109;
  int v111;
  char v112;
  int v113;
  int v114;
  char v115;
  int *v116;
  unsigned int v117;
  unsigned int v118;
  unsigned int v119;
  unsigned int v120;
  unsigned int v121;
  unsigned int v122;
  unsigned int v123;
  unsigned int v124;
  unsigned int v125;
  unsigned int v126;
  unsigned int v127;
  unsigned int v128;
  unsigned int v129;
  unsigned int v130;
  unsigned int v131;
  unsigned int v132;
  unsigned int v133;
  int v134;

  v116 = (int *)result;
  if ( a3 != 0 )
  {
    v82 = *(uint32_t *)result;
    v76 = *(uint32_t *)(result + 20);
    v86 = *(uint32_t *)(result + 4);
    v3 = *(uint32_t *)(result + 28);
    v99 = *(uint32_t *)(result + 8);
    v66 = *(uint32_t *)(result + 12);
    result = *(uint32_t *)(result + 16);
    v4 = v116[6];
    do
    {
      v119 = __builtin_bswap32(*(uint32_t *)a2);
      v5 = v119
         + (result & v76 ^ v4 & ~result)
         + v3
         + (__builtin_rotateright32(result, 25)
          ^ __builtin_rotateright32(result, 6)
          ^ __builtin_rotateright32(result, 11))
         + 1116352408;
      v6 = v5 + v66;
      v67 = v5
          + (v86 & v99 ^ v82 & v86 ^ v82 & v99)
          + (__builtin_rotateright32(v82, 22) ^ __builtin_rotateright32(v82, 2) ^ __builtin_rotateright32(v82, 13));
      v120 = __builtin_bswap32(*(uint32_t *)(a2 + 4));
      v7 = (result & v6 ^ v76 & ~v6)
         + (__builtin_rotateleft32(v6, 7) ^ __builtin_rotateleft32(v6, 26) ^ __builtin_rotateleft32(v6, 21))
         + v4
         + v120
         + 1899447441;
      v8 = v7 + v99;
      v91 = v7
          + (__builtin_rotateleft32(v67, 10) ^ __builtin_rotateleft32(v67, 30) ^ __builtin_rotateleft32(v67, 19))
          + (v82 & v86 ^ v82 & v67 ^ v86 & v67);
      v121 = __builtin_bswap32(*(uint32_t *)(a2 + 8));
      v77 = (__builtin_rotateleft32(v7 + v99, 7)
           ^ __builtin_rotateleft32(v7 + v99, 26)
           ^ __builtin_rotateleft32(v7 + v99, 21))
          + v121
          + v76
          - 1245643825
          + (v6 & v8 ^ result & ~v8);
      v72 = v77 + v86;
      v78 = v77
          + (v82 & v67 ^ v67 & v91 ^ v82 & v91)
          + (__builtin_rotateleft32(v91, 10) ^ __builtin_rotateleft32(v91, 30) ^ __builtin_rotateleft32(v91, 19));
      v122 = __builtin_bswap32(*(uint32_t *)(a2 + 12));
      v9 = ((v7 + v99) & v72 ^ v6 & ~v72)
         + (__builtin_rotateleft32(v72, 7) ^ __builtin_rotateleft32(v72, 26) ^ __builtin_rotateleft32(v72, 21))
         + v122
         + result
         - 373957723;
      v10 = v9 + v82;
      v87 = v9
          + (v67 & v91 ^ v91 & v78 ^ v67 & v78)
          + (__builtin_rotateleft32(v78, 10) ^ __builtin_rotateleft32(v78, 30) ^ __builtin_rotateleft32(v78, 19));
      v123 = __builtin_bswap32(*(uint32_t *)(a2 + 16));
      v11 = ((v9 + v82) & v72 ^ (v7 + v99) & ~(v9 + v82))
          + (__builtin_rotateleft32(v9 + v82, 7)
           ^ __builtin_rotateleft32(v9 + v82, 26)
           ^ __builtin_rotateleft32(v9 + v82, 21))
          + v6
          + v123
          + 961987163;
      v12 = v11 + v67;
      v68 = v11
          + (v91 & v78 ^ v78 & v87 ^ v91 & v87)
          + (__builtin_rotateleft32(v87, 10) ^ __builtin_rotateleft32(v87, 30) ^ __builtin_rotateleft32(v87, 19));
      v124 = __builtin_bswap32(*(uint32_t *)(a2 + 20));
      v13 = ((v9 + v82) & v12 ^ v72 & ~v12)
          + (__builtin_rotateleft32(v12, 7) ^ __builtin_rotateleft32(v12, 26) ^ __builtin_rotateleft32(v12, 21))
          + v8
          + v124
          + 1508970993;
      v14 = v13 + v91;
      v92 = v13
          + (v78 & v87 ^ v87 & v68 ^ v78 & v68)
          + (__builtin_rotateleft32(v68, 10) ^ __builtin_rotateleft32(v68, 30) ^ __builtin_rotateleft32(v68, 19));
      v125 = __builtin_bswap32(*(uint32_t *)(a2 + 24));
      v95 = (__builtin_rotateleft32(v14, 7) ^ __builtin_rotateleft32(v14, 26) ^ __builtin_rotateleft32(v14, 21))
          + v72
          + v125
          - 1841331548
          + (v12 & v14 ^ v10 & ~v14);
      v73 = v95 + v78;
      v79 = v95
          + (v87 & v68 ^ v68 & v92 ^ v87 & v92)
          + (__builtin_rotateleft32(v92, 10) ^ __builtin_rotateleft32(v92, 30) ^ __builtin_rotateleft32(v92, 19));
      v126 = __builtin_bswap32(*(uint32_t *)(a2 + 28));
      v15 = (v14 & v73 ^ v12 & ~v73)
          + (__builtin_rotateleft32(v73, 7) ^ __builtin_rotateleft32(v73, 26) ^ __builtin_rotateleft32(v73, 21))
          + v10
          + v126
          - 1424204075;
      v16 = v15 + v87;
      v88 = v15
          + (v68 & v92 ^ v92 & v79 ^ v68 & v79)
          + (__builtin_rotateleft32(v79, 10) ^ __builtin_rotateleft32(v79, 30) ^ __builtin_rotateleft32(v79, 19));
      v127 = __builtin_bswap32(*(uint32_t *)(a2 + 32));
      v17 = (v16 & v73 ^ v14 & ~v16)
          + (__builtin_rotateleft32(v16, 7) ^ __builtin_rotateleft32(v16, 26) ^ __builtin_rotateleft32(v16, 21))
          + v12
          + v127
          - 670586216;
      v83 = v17
          + (v92 & v79 ^ v79 & v88 ^ v92 & v88)
          + (__builtin_rotateleft32(v88, 10) ^ __builtin_rotateleft32(v88, 30) ^ __builtin_rotateleft32(v88, 19));
      v69 = v17 + v68;
      v18 = __builtin_bswap32(*(uint32_t *)(a2 + 36));
      v128 = v18;
      v19 = (v16 & v69 ^ v73 & ~v69)
          + (__builtin_rotateleft32(v69, 7) ^ __builtin_rotateleft32(v69, 26) ^ __builtin_rotateleft32(v69, 21))
          + v14
          + v18
          + 310598401;
      v20 = v19 + v92;
      v103 = v19
           + (__builtin_rotateleft32(v83, 10) ^ __builtin_rotateleft32(v83, 30) ^ __builtin_rotateleft32(v83, 19))
           + (v79 & v88 ^ v88 & v83 ^ v79 & v83);
      v129 = __builtin_bswap32(*(uint32_t *)(a2 + 40));
      v96 = (__builtin_rotateleft32(v20, 7)
           ^ __builtin_rotateleft32(v19 + v92, 26)
           ^ __builtin_rotateleft32(v19 + v92, 21))
          + v73
          + v129
          + 607225278
          + (v20 & v69 ^ v16 & ~v20);
      v80 = v96 + v79;
      v100 = v96
           + (v88 & v83 ^ v83 & v103 ^ v88 & v103)
           + (__builtin_rotateleft32(v103, 10) ^ __builtin_rotateleft32(v103, 30) ^ __builtin_rotateleft32(v103, 19));
      v130 = __builtin_bswap32(*(uint32_t *)(a2 + 44));
      v21 = ((v19 + v92) & v80 ^ v69 & ~v80)
          + (__builtin_rotateleft32(v80, 7) ^ __builtin_rotateleft32(v80, 26) ^ __builtin_rotateleft32(v80, 21))
          + v16
          + v130
          + 1426881987;
      v113 = v21 + v88;
      v97 = v21
          + (v83 & v103 ^ v103 & v100 ^ v83 & v100)
          + (__builtin_rotateleft32(v100, 10) ^ __builtin_rotateleft32(v100, 30) ^ __builtin_rotateleft32(v100, 19));
      v131 = __builtin_bswap32(*(uint32_t *)(a2 + 48));
      v22 = (v80 & v113 ^ (v19 + v92) & ~v113)
          + (__builtin_rotateleft32(v21 + v88, 7)
           ^ __builtin_rotateleft32(v21 + v88, 26)
           ^ __builtin_rotateleft32(v21 + v88, 21))
          + v69
          + v131
          + 1925078388;
      v74 = v22 + v83;
      v93 = v22
          + (v103 & v100 ^ v100 & v97 ^ v103 & v97)
          + (__builtin_rotateleft32(v97, 10) ^ __builtin_rotateleft32(v97, 30) ^ __builtin_rotateleft32(v97, 19));
      v132 = __builtin_bswap32(*(uint32_t *)(a2 + 52));
      v23 = (v74 & (v21 + v88) ^ v80 & ~v74)
          + (__builtin_rotateleft32(v74, 7) ^ __builtin_rotateleft32(v74, 26) ^ __builtin_rotateleft32(v74, 21))
          + v20
          + v132
          - 2132889090;
      v24 = v23 + v103;
      v70 = v23
          + (v100 & v97 ^ v97 & v93 ^ v100 & v93)
          + (__builtin_rotateleft32(v93, 10) ^ __builtin_rotateleft32(v93, 30) ^ __builtin_rotateleft32(v93, 19));
      v25 = __builtin_bswap32(*(uint32_t *)(a2 + 56));
      v133 = v25;
      v104 = (__builtin_rotateleft32(v23 + v103, 7)
            ^ __builtin_rotateleft32(v23 + v103, 26)
            ^ __builtin_rotateleft32(v23 + v103, 21))
           + v80
           + v25
           - 1680079193
           + (v24 & v74 ^ v113 & ~v24);
      v81 = v104 + v100;
      v112 = 29;
      v89 = v104
          + (__builtin_rotateleft32(v70, 10) ^ __builtin_rotateleft32(v70, 30) ^ __builtin_rotateleft32(v70, 19))
          + (v97 & v93 ^ v93 & v70 ^ v97 & v70);
      v115 = 30;
      v26 = *(uint8_t *)(a2 + 63)
          | (*(uint8_t *)(a2 + 61) << 16)
          | (*(uint8_t *)(a2 + 60) << 24);
      v27 = *(uint8_t *)(a2 + 62) << 8;
      a2 += 64;
      v134 = v27 | v26;
      v28 = (__builtin_rotateleft32(v104 + v100, 7)
           ^ __builtin_rotateleft32(v104 + v100, 26)
           ^ __builtin_rotateleft32(v104 + v100, 21))
          + v113
          + (v27 | v26)
          - 1046744716
          + (v24 & (v104 + v100) ^ v74 & ~(v104 + v100));
      v29 = v119;
      v84 = v28
          + (__builtin_rotateleft32(v89, 10) ^ __builtin_rotateleft32(v89, 30) ^ __builtin_rotateleft32(v89, 19))
          + (v93 & v70 ^ v89 & (v70 ^ v93));
      v105 = v28 + v97;
      v101 = v24;
      v30 = 16;
      v31 = 17;
      v32 = v120;
      while ( 1 )
      {
        v98 = v31 & 0xF;
        v114 = v30 & 0xF;
        v33 = ((v25 >> 10) ^ __builtin_rotateright32(v25, 17) ^ __builtin_rotateright32(v25, 19))
            + ((v32 >> 3) ^ __builtin_rotateright32(v32, 7) ^ __builtin_rotateright32(v32, 18))
            + v29
            + v18;
        *(&v119 + v114) = v33;
        v34 = v33
            + dword_1D2B840[v30]
            + v74
            + (__builtin_rotateleft32(v105, 7) ^ __builtin_rotateleft32(v105, 26) ^ __builtin_rotateleft32(v105, 21))
            + (v105 & v81 ^ v101 & ~v105);
        v94 = v34 + v93;
        v75 = v34
            + (v89 & v70 ^ v84 & v89 ^ v84 & v70)
            + (__builtin_rotateleft32(v84, 10) ^ __builtin_rotateleft32(v84, 30) ^ __builtin_rotateleft32(v84, 19));
        v35 = ((uint8_t)v30 + 2) & 0xF;
        v111 = ((uint8_t)v30 + 15) & 0xF;
        v36 = ((*(&v119 + v111) >> 10)
             ^ __builtin_rotateleft32(*(&v119 + v111), 15)
             ^ __builtin_rotateleft32(*(&v119 + v111), 13))
            + *(&v119 + v98)
            + *(&v119 + (((uint8_t)v30 + 10) & 0xF))
            + ((*(&v119 + v35) >> 3)
             ^ __builtin_rotateleft32(*(&v119 + v35), 25)
             ^ __builtin_rotateleft32(*(&v119 + v35), 14));
        *(&v119 + v98) = v36;
        v37 = (v105 & v94 ^ v81 & ~v94)
            + (__builtin_rotateleft32(v94, 7) ^ __builtin_rotateleft32(v94, 26) ^ __builtin_rotateleft32(v94, 21))
            + v36
            + dword_1D2B844[v30]
            + v101;
        v38 = v37 + v70;
        v39 = v37
            + (v84 & v89 ^ v84 & v75 ^ v89 & v75)
            + (__builtin_rotateleft32(v75, 10) ^ __builtin_rotateleft32(v75, 30) ^ __builtin_rotateleft32(v75, 19));
        v40 = ((uint8_t)v30 + 3) & 0xF;
        v71 = v38;
        v102 = v39;
        v41 = ((*(&v119 + v40) >> 3)
             ^ __builtin_rotateleft32(*(&v119 + v40), 25)
             ^ __builtin_rotateleft32(*(&v119 + v40), 14))
            + *(&v119 + (((uint8_t)v30 + 11) & 0xF))
            + *(&v119 + v35)
            + ((*(&v119 + v114) >> 10)
             ^ __builtin_rotateleft32(*(&v119 + v114), 15)
             ^ __builtin_rotateleft32(*(&v119 + v114), 13));
        *(&v119 + v35) = v41;
        v42 = (v94 & v71 ^ v105 & ~v71)
            + (__builtin_rotateleft32(v71, 7) ^ __builtin_rotateleft32(v71, 26) ^ __builtin_rotateleft32(v71, 21))
            + v41
            + dword_1D2B848[v30]
            + v81;
        v43 = v42 + v89;
        v90 = v42
            + (v84 & v75 ^ v75 & v102 ^ v84 & v102)
            + (__builtin_rotateleft32(v102, 10) ^ __builtin_rotateleft32(v102, 30) ^ __builtin_rotateleft32(v102, 19));
        v44 = ((uint8_t)v30 + 4) & 0xF;
        v117 = *(&v119 + (((uint8_t)v30 + 17) & 0xF));
        v45 = ((v117 >> 10) ^ __builtin_rotateleft32(v117, 15) ^ __builtin_rotateleft32(v117, 13))
            + *(&v119 + v40)
            + *(&v119 + (((uint8_t)v30 + 12) & 0xF))
            + ((*(&v119 + v44) >> 3)
             ^ __builtin_rotateleft32(*(&v119 + v44), 25)
             ^ __builtin_rotateleft32(*(&v119 + v44), 14));
        *(&v119 + v40) = v45;
        v46 = (v71 & v43 ^ v94 & ~v43)
            + (__builtin_rotateleft32(v43, 7) ^ __builtin_rotateleft32(v43, 26) ^ __builtin_rotateleft32(v43, 21))
            + v45
            + dword_1D2B84C[v30]
            + v105;
        v85 = v46 + v84;
        v106 = v46
             + (v75 & v102 ^ v102 & v90 ^ v75 & v90)
             + (__builtin_rotateleft32(v90, 10) ^ __builtin_rotateleft32(v90, 30) ^ __builtin_rotateleft32(v90, 19));
        v47 = ((uint8_t)v30 + 5) & 0xF;
        v118 = *(&v119 + (((uint8_t)v30 + 18) & 0xF));
        v48 = ((v118 >> 10) ^ __builtin_rotateleft32(v118, 15) ^ __builtin_rotateleft32(v118, 13))
            + *(&v119 + v44)
            + *(&v119 + (v112 & 0xF))
            + ((*(&v119 + v47) >> 3)
             ^ __builtin_rotateleft32(*(&v119 + v47), 25)
             ^ __builtin_rotateleft32(*(&v119 + v47), 14));
        *(&v119 + v44) = v48;
        v49 = (v43 & v85 ^ v71 & ~v85)
            + (__builtin_rotateleft32(v85, 7) ^ __builtin_rotateleft32(v85, 26) ^ __builtin_rotateleft32(v85, 21))
            + v48
            + dword_1D2B850[v30]
            + v94;
        v93 = v49
            + (v102 & v90 ^ v90 & v106 ^ v102 & v106)
            + (__builtin_rotateleft32(v106, 10) ^ __builtin_rotateleft32(v106, 30) ^ __builtin_rotateleft32(v106, 19));
        v50 = ((uint8_t)v30 + 6) & 0xF;
        v74 = v49 + v75;
        v108 = *(&v119 + (((uint8_t)v30 + 19) & 0xF));
        v51 = ((v108 >> 10) ^ __builtin_rotateleft32(v108, 15) ^ __builtin_rotateleft32(v108, 13))
            + *(&v119 + v47)
            + *(&v119 + (v115 & 0xF))
            + ((*(&v119 + v50) >> 3)
             ^ __builtin_rotateleft32(*(&v119 + v50), 25)
             ^ __builtin_rotateleft32(*(&v119 + v50), 14));
        *(&v119 + v47) = v51;
        v52 = (v85 & v74 ^ v43 & ~v74)
            + (__builtin_rotateleft32(v74, 7) ^ __builtin_rotateleft32(v74, 26) ^ __builtin_rotateleft32(v74, 21))
            + v71
            + dword_1D2B854[v30]
            + v51;
        v70 = v52
            + (v90 & v106 ^ v106 & v93 ^ v90 & v93)
            + (__builtin_rotateleft32(v93, 10) ^ __builtin_rotateleft32(v93, 30) ^ __builtin_rotateleft32(v93, 19));
        v53 = ((uint8_t)v30 + 7) & 0xF;
        v101 = v52 + v102;
        v109 = *(&v119 + (((uint8_t)v30 + 20) & 0xF));
        v54 = ((v109 >> 10) ^ __builtin_rotateleft32(v109, 15) ^ __builtin_rotateleft32(v109, 13))
            + *(&v119 + v50)
            + *(&v119 + v111)
            + ((*(&v119 + v53) >> 3)
             ^ __builtin_rotateleft32(*(&v119 + v53), 25)
             ^ __builtin_rotateleft32(*(&v119 + v53), 14));
        *(&v119 + v50) = v54;
        v55 = (v74 & v101 ^ v85 & ~v101)
            + (__builtin_rotateleft32(v101, 7) ^ __builtin_rotateleft32(v101, 26) ^ __builtin_rotateleft32(v101, 21))
            + v43
            + dword_1D2B858[v30]
            + v54;
        v30 += 8;
        v81 = v55 + v90;
        v56 = v30 & 0xF;
        v89 = v55
            + (v106 & v93 ^ v93 & v70 ^ v106 & v70)
            + (__builtin_rotateleft32(v70, 10) ^ __builtin_rotateleft32(v70, 30) ^ __builtin_rotateleft32(v70, 19));
        v112 = v30 + 13;
        v107 = *(&v119 + ((v30 + 13) & 0xF));
        v57 = *(&v119 + v114)
            + *(&v119 + v53)
            + ((*(&v119 + v56) >> 3)
             ^ __builtin_rotateleft32(*(&v119 + v56), 25)
             ^ __builtin_rotateleft32(*(&v119 + v56), 14))
            + ((v107 >> 10) ^ __builtin_rotateleft32(v107, 15) ^ __builtin_rotateleft32(v107, 13));
        *(&v119 + v53) = v57;
        v58 = (v101 & v81 ^ v74 & ~v81)
            + (__builtin_rotateleft32(v81, 7) ^ __builtin_rotateleft32(v81, 26) ^ __builtin_rotateleft32(v81, 21))
            + v85
            + dword_1D2B83C[v30]
            + v57;
        v105 = v58 + v106;
        v84 = v58
            + (v93 & v70 ^ v89 & (v70 ^ v93))
            + (__builtin_rotateleft32(v89, 10) ^ __builtin_rotateleft32(v89, 30) ^ __builtin_rotateleft32(v89, 19));
        if ( v30 == 64 )
          break;
        v31 = v30 + 1;
        v115 = v30 + 14;
        v29 = *(&v119 + v56);
        v32 = *(&v119 + (((uint8_t)v30 + 1) & 0xF));
        v25 = *(&v119 + ((v30 + 14) & 0xF));
        v18 = *(&v119 + (((uint8_t)v30 + 9) & 0xF));
      }
      v59 = v101;
      v60 = *v116 + v84;
      v61 = v116[1] + v89;
      *v116 = v60;
      v82 = v60;
      v62 = v116[2] + v70;
      v63 = v116[3] + v93;
      v116[1] = v61;
      v116[2] = v62;
      v116[3] = v63;
      v86 = v61;
      v99 = v62;
      v4 = v116[6] + v59;
      v64 = v116[5] + v81;
      result = v116[4] + v105;
      v3 = v116[7] + v74;
      v65 = a3-- == 1;
      v66 = v63;
      v116[4] = result;
      v76 = v64;
      v116[5] = v64;
      v116[6] = v4;
      v116[7] = v3;
    }
    while ( !v65 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SHA224_Init  (binary VA: 0x19d91a0)
// Original: SHA224_Init
// ----------------------------------------------------------------------------
int SHA224_Init(int a1)
{
  unsigned int v1;
  uint16_t *v2;
  uint16_t *v3;

  v1 = 112;
  v2 = (uint16_t *)a1;
  if ( (a1 & 1) != 0 )
  {
    v2 = (uint16_t *)(a1 + 1);
    *(uint8_t *)a1 = 0;
    LOWORD(v1) = 111;
    if ( ((a1 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (a1 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v2 = 0;
  v1 -= 2;
  ++v2;
LABEL_3:
  memset(v2, 0, 4 * (v1 >> 2));
  v3 = &v2[2 * (v1 >> 2)];
  if ( (v1 & 2) != 0 )
    *v3++ = 0;
  if ( (v1 & 1) != 0 )
    *(uint8_t *)v3 = 0;
  *(uint32_t *)a1 = -1056596264;
  *(uint32_t *)(a1 + 4) = 914150663;
  *(uint32_t *)(a1 + 8) = 812702999;
  *(uint32_t *)(a1 + 12) = -150054599;
  *(uint32_t *)(a1 + 16) = -4191439;
  *(uint32_t *)(a1 + 20) = 1750603025;
  *(uint32_t *)(a1 + 24) = 1694076839;
  *(uint32_t *)(a1 + 28) = -1090891868;
  *(uint32_t *)(a1 + 108) = 28;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: SHA224_Update  (binary VA: 0x19d94b0)
// Original: SHA224_Update
// ----------------------------------------------------------------------------
int SHA224_Update(int a1, char *a2, size_t a3)
{
  return SHA256_Update(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: SHA224_Final  (binary VA: 0x19d9730)
// Original: SHA224_Final
// ----------------------------------------------------------------------------
char SHA224_Final(uint8_t *a1, signed int a2)
{
  return SHA256_Final(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: SHA224  (binary VA: 0x19d9800)
// Original: SHA224
// ----------------------------------------------------------------------------
uint8_t * SHA224(char *a1, size_t a2, uint8_t *a3)
{
  uint8_t *v3;
  uint8_t v5[112];

  v3 = a3;
  if ( a3 == nullptr )
    v3 = (uint8_t *)(&unk_2141D20);
  SHA224_Init((int)(uintptr_t)(v5));
  SHA256_Update((int)(uintptr_t)(v5), a1, a2);
  SHA256_Final(v3, (signed int)(uintptr_t)(v5));
  OPENSSL_cleanse(v5, 0x70u);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_19D98A0  (binary VA: 0x19d98a0)
// Original: sub_19D98A0
// ----------------------------------------------------------------------------
int64_t * sub_19D98A0(int64_t *result, int a2, int a3)
{
  int v3;
  unsigned int i;
  int v5;
  int v6;
  int64_t v7; // rax
  uint64_t *v8;
  uint64_t v9; // rax
  int v10;
  bool v11;
  int v12;
  int v13;
  unsigned int v14;
  bool v15;
  uint64_t v73; // 0:ebp.4,4:^38.4
  int64_t v74; // 0:esi.4,4:edi.4
  typedef uint64_t _g4_t_v16;
  typedef int64_t _g4_t_v17;
  typedef uint64_t _g4_t_v18;
  typedef int64_t _g4_t_v19;
  typedef int64_t _g4_t_v20;
  typedef uint64_t _g4_t_v21;
  typedef uint64_t _g4_t_v22;
  typedef uint64_t _g4_t_v23;
  typedef uint64_t _g4_t_v24;
  typedef unsigned int _g4_t_v26;
  typedef uint64_t _g4_t_v27;
  typedef int64_t _g4_t_v28;
  typedef int64_t _g4_t_v29;
  typedef int64_t _g4_t_v30;
  typedef int64_t _g4_t_v31;
  typedef unsigned int _g4_t_v32;
  typedef uint64_t *_g4_t_v33;
  typedef unsigned int _g4_t_v34;
  typedef int64_t _g4_t_v35;
  typedef int64_t _g4_t_v36;
  typedef uint64_t _g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef int64_t *_g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef unsigned int _g4_t_v41;
  typedef unsigned int _g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef uint64_t _g4_t_v44;
  typedef uint64_t _g4_t_v45;
  typedef uint64_t _g4_t_v46;
  typedef uint64_t _g4_t_v47;
  typedef uint64_t _g4_t_v48;
  typedef uint64_t _g4_t_v49;
  typedef char _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int64_t _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef unsigned int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef int64_t _g4_t_v61;
  typedef uint8_t _g4_t_v62[136];
  typedef unsigned int _g4_t_v63;
  typedef unsigned int _g4_t_v64;
  typedef uint64_t _g4_t_v65;
  typedef uint64_t _g4_t_v66;
  typedef uint32_t _g4_t_v67[2];
  typedef unsigned int _g4_t_v68;
  typedef unsigned int _g4_t_v69;
  typedef uint64_t _g4_t_v70;
  typedef uint64_t _g4_t_v71;
  typedef uint32_t _g4_t_v72[6];
  enum : size_t {
    _g4_s0 = 1056u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v17)) > _g4_s1 ? (0u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v18)) > _g4_s2 ? (0u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v19)) > _g4_s3 ? (0u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v20)) > _g4_s4 ? (0u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v21)) > _g4_s5 ? (8u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v22)) > _g4_s6 ? (16u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v23)) > _g4_s7 ? (24u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v24)) > _g4_s8 ? (32u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v26)) > _g4_s9 ? (48u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v27)) > _g4_s10 ? (48u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v28)) > _g4_s11 ? (56u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v29)) > _g4_s12 ? (64u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v30)) > _g4_s13 ? (72u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v31)) > _g4_s14 ? (96u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v32)) > _g4_s15 ? (104u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v33)) > _g4_s16 ? (104u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v34)) > _g4_s17 ? (108u + sizeof(_g4_t_v34)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v35)) > _g4_s18 ? (112u + sizeof(_g4_t_v35)) : _g4_s18,
    _g4_s20 = (144u + sizeof(_g4_t_v36)) > _g4_s19 ? (144u + sizeof(_g4_t_v36)) : _g4_s19,
    _g4_s21 = (152u + sizeof(_g4_t_v37)) > _g4_s20 ? (152u + sizeof(_g4_t_v37)) : _g4_s20,
    _g4_s22 = (160u + sizeof(_g4_t_v38)) > _g4_s21 ? (160u + sizeof(_g4_t_v38)) : _g4_s21,
    _g4_s23 = (164u + sizeof(_g4_t_v39)) > _g4_s22 ? (164u + sizeof(_g4_t_v39)) : _g4_s22,
    _g4_s24 = (168u + sizeof(_g4_t_v40)) > _g4_s23 ? (168u + sizeof(_g4_t_v40)) : _g4_s23,
    _g4_s25 = (172u + sizeof(_g4_t_v41)) > _g4_s24 ? (172u + sizeof(_g4_t_v41)) : _g4_s24,
    _g4_s26 = (176u + sizeof(_g4_t_v42)) > _g4_s25 ? (176u + sizeof(_g4_t_v42)) : _g4_s25,
    _g4_s27 = (180u + sizeof(_g4_t_v43)) > _g4_s26 ? (180u + sizeof(_g4_t_v43)) : _g4_s26,
    _g4_s28 = (184u + sizeof(_g4_t_v44)) > _g4_s27 ? (184u + sizeof(_g4_t_v44)) : _g4_s27,
    _g4_s29 = (192u + sizeof(_g4_t_v45)) > _g4_s28 ? (192u + sizeof(_g4_t_v45)) : _g4_s28,
    _g4_s30 = (200u + sizeof(_g4_t_v46)) > _g4_s29 ? (200u + sizeof(_g4_t_v46)) : _g4_s29,
    _g4_s31 = (208u + sizeof(_g4_t_v47)) > _g4_s30 ? (208u + sizeof(_g4_t_v47)) : _g4_s30,
    _g4_s32 = (216u + sizeof(_g4_t_v48)) > _g4_s31 ? (216u + sizeof(_g4_t_v48)) : _g4_s31,
    _g4_s33 = (224u + sizeof(_g4_t_v49)) > _g4_s32 ? (224u + sizeof(_g4_t_v49)) : _g4_s32,
    _g4_s34 = (248u + sizeof(_g4_t_v51)) > _g4_s33 ? (248u + sizeof(_g4_t_v51)) : _g4_s33,
    _g4_s35 = (256u + sizeof(_g4_t_v52)) > _g4_s34 ? (256u + sizeof(_g4_t_v52)) : _g4_s34,
    _g4_s36 = (260u + sizeof(_g4_t_v53)) > _g4_s35 ? (260u + sizeof(_g4_t_v53)) : _g4_s35,
    _g4_s37 = (264u + sizeof(_g4_t_v54)) > _g4_s36 ? (264u + sizeof(_g4_t_v54)) : _g4_s36,
    _g4_s38 = (268u + sizeof(_g4_t_v55)) > _g4_s37 ? (268u + sizeof(_g4_t_v55)) : _g4_s37,
    _g4_s39 = (272u + sizeof(_g4_t_v56)) > _g4_s38 ? (272u + sizeof(_g4_t_v56)) : _g4_s38,
    _g4_s40 = (288u + sizeof(_g4_t_v57)) > _g4_s39 ? (288u + sizeof(_g4_t_v57)) : _g4_s39,
    _g4_s41 = (292u + sizeof(_g4_t_v58)) > _g4_s40 ? (292u + sizeof(_g4_t_v58)) : _g4_s40,
    _g4_s42 = (296u + sizeof(_g4_t_v59)) > _g4_s41 ? (296u + sizeof(_g4_t_v59)) : _g4_s41,
    _g4_s43 = (300u + sizeof(_g4_t_v60)) > _g4_s42 ? (300u + sizeof(_g4_t_v60)) : _g4_s42,
    _g4_s44 = (304u + sizeof(_g4_t_v61)) > _g4_s43 ? (304u + sizeof(_g4_t_v61)) : _g4_s43,
    _g4_s45 = (760u + sizeof(_g4_t_v62)) > _g4_s44 ? (760u + sizeof(_g4_t_v62)) : _g4_s44,
    _g4_s46 = (896u + sizeof(_g4_t_v63)) > _g4_s45 ? (896u + sizeof(_g4_t_v63)) : _g4_s45,
    _g4_s47 = (900u + sizeof(_g4_t_v64)) > _g4_s46 ? (900u + sizeof(_g4_t_v64)) : _g4_s46,
    _g4_s48 = (904u + sizeof(_g4_t_v65)) > _g4_s47 ? (904u + sizeof(_g4_t_v65)) : _g4_s47,
    _g4_s49 = (912u + sizeof(_g4_t_v66)) > _g4_s48 ? (912u + sizeof(_g4_t_v66)) : _g4_s48,
    _g4_s50 = (920u + sizeof(_g4_t_v67)) > _g4_s49 ? (920u + sizeof(_g4_t_v67)) : _g4_s49,
    _g4_s51 = (928u + sizeof(_g4_t_v68)) > _g4_s50 ? (928u + sizeof(_g4_t_v68)) : _g4_s50,
    _g4_s52 = (932u + sizeof(_g4_t_v69)) > _g4_s51 ? (932u + sizeof(_g4_t_v69)) : _g4_s51,
    _g4_s53 = (936u + sizeof(_g4_t_v70)) > _g4_s52 ? (936u + sizeof(_g4_t_v70)) : _g4_s52,
    _g4_s54 = (944u + sizeof(_g4_t_v71)) > _g4_s53 ? (944u + sizeof(_g4_t_v71)) : _g4_s53,
    _g4_s55 = (952u + sizeof(_g4_t_v72)) > _g4_s54 ? (952u + sizeof(_g4_t_v72)) : _g4_s54
  };
  alignas(16) uint8_t _g4_sf[_g4_s55];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 104u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 104u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 108u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 112u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 144u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 152u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 160u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 164u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 168u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 172u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 176u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 180u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 184u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 192u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 200u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 208u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 216u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 224u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 248u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 256u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 260u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 264u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 268u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 272u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 288u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 292u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 296u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 300u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 304u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 760u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 896u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 900u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 904u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 912u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 920u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 928u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 932u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 936u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 944u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 952u);

  v39 = result;
  if ( a3 != 0 )
  {
    v48 = *result;
    v40 = *((uint32_t *)result + 2);
    v41 = *((uint32_t *)result + 3);
    v44 = result[2];
    v45 = result[3];
    v49 = result[4];
    v42 = *((uint32_t *)result + 10);
    v43 = *((uint32_t *)result + 11);
    v46 = result[6];
    v47 = result[7];
    do
    {
      v63 = v40;
      v69 = v43;
      v70 = v46;
      v64 = v41;
      v68 = v42;
      v65 = v44;
      v66 = v45;
      v24 = v44;
      v26 = v40;
      v71 = v47;
      v32 = v41;
      v3 = a2;
      v37 = v45;
      v21 = v46;
      v34 = v42;
      v16 = v47;
      v22 = v49;
      v38 = v43;
      v23 = v48;
      for ( i = 0; ; v38 = *(unsigned int *)((char *)&v69 + i) )
      {
        v5 = (*(uint8_t *)(v3 + 5) << 16) | (*(uint8_t *)(v3 + 4) << 24) | *(uint8_t *)(v3 + 7);
        v6 = *(uint8_t *)(v3 + 6);
        HIDWORD(v35) = __builtin_bswap32(*(uint32_t *)v3);
        *(uint32_t *)&v62[i + 128] = v23;
        *(uint32_t *)&v62[i + 132] = HIDWORD(v23);
        LODWORD(v35) = (v6 << 8) | v5;
        v67[i / 4] = v22;
        v67[i / 4 + 1] = HIDWORD(v22);
        v72[i / 4] = v35;
        v72[i / 4 + 1] = HIDWORD(v35);
        v17 = v35
            + __PAIR64__(HIDWORD(v22) & v38 ^ HIDWORD(v21) & ~HIDWORD(v22), v22 & v34 ^ v21 & ~(uint32_t)v22)
            + __PAIR64__(
                (v22 >> 9) ^ (__PAIR64__(v22, HIDWORD(v22)) >> 18) ^ (__PAIR64__(v22, HIDWORD(v22)) >> 14),
                (__PAIR64__(v22, HIDWORD(v22)) >> 9) ^ (v22 >> 18) ^ (v22 >> 14))
            + __PAIR64__(dword_1D2B984[i / 0xFFFFFFFC], dword_1D2B980[i / 0xFFFFFFFC])
            + v16;
        v22 = v37 + v17;
        LODWORD(v7) = v26 & v24 ^ v23 & (v24 ^ v26);
        LODWORD(v36) = (__PAIR64__(v23, HIDWORD(v23)) >> 7) ^ (__PAIR64__(v23, HIDWORD(v23)) >> 2) ^ (v23 >> 28);
        HIDWORD(v36) = (v23 >> 7) ^ (v23 >> 2) ^ (__PAIR64__(v23, HIDWORD(v23)) >> 28);
        HIDWORD(v7) = v32 & HIDWORD(v24) ^ HIDWORD(v23) & (HIDWORD(v24) ^ v32);
        v23 = v17 + v36 + v7;
        i -= 8;
        v3 += 8;
        if ( i == -128 )
          break;
        v16 = v21;
        v37 = v24;
        v24 = __PAIR64__(v32, v26);
        v26 = *(unsigned int *)((char *)&v63 + i);
        v32 = *(unsigned int *)((char *)&v64 + i);
        v21 = __PAIR64__(v38, v34);
        v34 = *(unsigned int *)((char *)&v68 + i);
      }
      v33 = (uint64_t *)(&unk_1D2BA00);
      v18 = *(uint64_t *)v72;
      v8 = (uint64_t *)v62;
      while ( 1 )
      {
        v27 = v8[23];
        v9 = v8[10];
        LODWORD(v28) = (v27 >> 7) ^ (v27 >> 8) ^ (v27 >> 1);
        HIDWORD(v28) = (HIDWORD(v27) >> 7) ^ (__PAIR64__(v27, HIDWORD(v27)) >> 1) ^ (__PAIR64__(v27, HIDWORD(v27)) >> 8);
        v19 = v28 + v8[15] + v18;
        LODWORD(v29) = (v9 >> 6) ^ (v9 >> 19) ^ (__PAIR64__(v9, HIDWORD(v9)) >> 29);
        *v8 = v23;
        HIDWORD(v29) = (HIDWORD(v9) >> 6) ^ (v9 >> 29) ^ (__PAIR64__(v9, HIDWORD(v9)) >> 19);
        v20 = v29 + v19;
        LODWORD(v9) = *((uint32_t *)v8 + 13);
        *((uint32_t *)v8 + 9) = HIDWORD(v22);
        *((uint32_t *)v8 + 17) = HIDWORD(v20);
        LODWORD(v73) = *((uint32_t *)v8 + 12);
        HIDWORD(v73) = v9;
        *((uint32_t *)v8 + 8) = v22;
        *((uint32_t *)v8 + 16) = v20;
        LODWORD(v30) = (__PAIR64__(v22, HIDWORD(v22)) >> 9) ^ (v22 >> 18) ^ (v22 >> 14);
        HIDWORD(v30) = (v22 >> 9) ^ (__PAIR64__(v22, HIDWORD(v22)) >> 18) ^ (__PAIR64__(v22, HIDWORD(v22)) >> 14);
        HIDWORD(v9) = *((uint32_t *)v8 + 11) & HIDWORD(v22) ^ v9 & ~HIDWORD(v22);
        LODWORD(v9) = v8[5] & v22 ^ v73 & ~(uint32_t)v22;
        v74 = v20 + v9 + v30 + *v33 + v21;
        v22 = v74 + v24;
        v24 = v8[2];
        LODWORD(v31) = (__PAIR64__(v23, HIDWORD(v23)) >> 7) ^ (__PAIR64__(v23, HIDWORD(v23)) >> 2) ^ (v23 >> 28);
        HIDWORD(v31) = (v23 >> 7) ^ (v23 >> 2) ^ (__PAIR64__(v23, HIDWORD(v23)) >> 28);
        v23 = v74 + v31 + (v8[1] & v24 ^ v23 & (v24 ^ v8[1]));
        --v8;
        ++v33;
        if ( v8 == (uint64_t *)&v51 )
          break;
        v21 = v73;
        v18 = v27;
      }
      result = v39;
      v48 += v23;
      v10 = v53;
      v11 = __CFADD__(v52, v40);
      v40 += v52;
      *v39 = v48;
      v41 += v10 + v11;
      v12 = v55;
      v11 = __CFADD__(v54, (uint32_t)v44);
      LODWORD(v44) = v54 + v44;
      *((uint32_t *)v39 + 2) = v40;
      HIDWORD(v44) += v12 + v11;
      *((uint32_t *)v39 + 3) = v41;
      v39[2] = v44;
      v45 += v56;
      v49 += v22;
      v39[3] = v45;
      v13 = v58;
      v11 = __CFADD__(v57, v42);
      v42 += v57;
      v39[4] = v49;
      v43 += v13 + v11;
      v14 = v60;
      *((uint32_t *)v39 + 10) = v42;
      *((uint32_t *)v39 + 11) = v43;
      v46 += __PAIR64__(v14, v59);
      v39[6] = v46;
      v47 += v61;
      a2 += 128;
      v15 = a3-- == 1;
      v39[7] = v47;
    }
    while ( !v15 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SHA384_Init  (binary VA: 0x19da320)
// Original: SHA384_Init
// ----------------------------------------------------------------------------
int SHA384_Init(uint32_t *a1)
{
  *a1 = -1056596264;
  a1[1] = -876896931;
  a1[2] = 914150663;
  a1[3] = 1654270250;
  a1[4] = 812702999;
  a1[5] = -1856437926;
  a1[6] = -150054599;
  a1[7] = 355462360;
  a1[8] = -4191439;
  a1[9] = 1731405415;
  a1[10] = 1750603025;
  a1[11] = -1900787065;
  a1[12] = 1694076839;
  a1[13] = -619958771;
  a1[14] = -1090891868;
  a1[15] = 1203062813;
  a1[16] = 0;
  a1[17] = 0;
  a1[18] = 0;
  a1[19] = 0;
  a1[52] = 0;
  a1[53] = 48;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: SHA384_Final  (binary VA: 0x19da700)
// Original: SHA384_Final
// ----------------------------------------------------------------------------
int SHA384_Final(uint8_t *a1, int a2)
{
  return SHA512_Final(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: SHA384_Update  (binary VA: 0x19da8a0)
// Original: SHA384_Update
// ----------------------------------------------------------------------------
int SHA384_Update(int a1, char *a2, size_t a3)
{
  return SHA512_Update(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: SHA384  (binary VA: 0x19da900)
// Original: SHA384
// ----------------------------------------------------------------------------
uint8_t * SHA384(char *a1, size_t a2, uint8_t *a3)
{
  uint8_t *v3;
  uint8_t v5[216];

  v3 = a3;
  if ( a3 == nullptr )
    v3 = (uint8_t *)(&unk_2141D60);
  SHA384_Init(v5);
  SHA512_Update((int)(uintptr_t)(v5), a1, a2);
  SHA512_Final(v3, (int)(uintptr_t)(v5));
  OPENSSL_cleanse(v5, 0xD8u);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_19DAA40  (binary VA: 0x19daa40)
// Original: sub_19DAA40
// ----------------------------------------------------------------------------
int sub_19DAA40(int *a1, unsigned int *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
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
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
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
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  int v162;
  int v163;
  int v164;
  bool v165;
  int v167;
  unsigned int v168;
  int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  unsigned int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  unsigned int v182;
  int v183;
  unsigned int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  unsigned int v190;
  int v191;
  int v192;
  int v193;
  int v194;
  unsigned int v195;
  int v196;
  int v197;
  int v198;
  int v199;
  unsigned int v200;
  int v201;
  int v202;
  int v203;
  int v204;
  unsigned int v205;
  int v206;
  int v207;
  int v208;
  int v209;
  int v210;
  unsigned int v211;
  int v212;
  int v213;
  int v214;
  int v215;
  unsigned int v216;
  int v217;
  int v218;
  int v219;
  int v220;
  int v221;
  unsigned int v222;
  int v223;
  int v224;
  int v225;
  int v226;
  int v227;
  unsigned int v228;
  int v229;
  int v230;
  int v231;
  int v232;
  unsigned int v233;
  int v234;
  int v235;
  int v236;
  int v237;
  unsigned int v238;
  int v239;
  int v240;
  int v241;
  int v242;
  int v243;
  int v244;
  int v245;
  int v246;
  unsigned int v247;
  int v248;
  int v249;
  int v250;
  unsigned int v251;
  int v252;
  int v253;
  int v254;
  unsigned int v255;
  int v256;
  int v257;
  int v258;
  int v260;

  v260 = *a1;
  v3 = *a1;
  v4 = a1[4];
  v5 = a1[1];
  v6 = a1[3];
  result = a1[2];
  v167 = v4;
  while ( 1 )
  {
    v190 = __builtin_bswap32(*a2);
    v195 = __builtin_bswap32(a2[1]);
    v182 = v190 + (v6 ^ v5 & (result ^ v6)) + v167 + __builtin_rotateleft32(v3, 5) + 1518500249;
    v8 = __builtin_rotateleft32(v5, 30);
    v168 = __builtin_bswap32(a2[2]);
    v9 = result ^ v3 & (result ^ v8);
    v10 = __builtin_rotateleft32(v3, 30);
    v11 = __builtin_rotateleft32(v182, 5) + v195 + v6 + v9 + 1518500249;
    v175 = __builtin_bswap32(a2[3]);
    v210 = result + v168 + 1518500249 + (v8 ^ v182 & (v8 ^ v10)) + __builtin_rotateleft32(v11, 5);
    v12 = __builtin_rotateleft32(v182, 30);
    v200 = __builtin_bswap32(a2[4]);
    v13 = __builtin_rotateleft32(v210, 5) + v8 + v175 + 1518500249 + (v10 ^ v11 & (v10 ^ v12));
    v14 = __builtin_rotateleft32(v11, 30);
    v205 = __builtin_bswap32(a2[5]);
    v183 = v10 + v200 + 1518500249 + (v12 ^ v210 & (v12 ^ v14)) + __builtin_rotateleft32(v13, 5);
    v15 = __builtin_rotateleft32(v210, 30);
    v211 = __builtin_bswap32(a2[6]);
    v221 = v12 + v205 + 1518500249 + (v14 ^ v13 & (v14 ^ v15)) + __builtin_rotateleft32(v183, 5);
    v16 = __builtin_rotateleft32(v13, 30);
    v216 = __builtin_bswap32(a2[7]);
    v17 = __builtin_rotateleft32(v221, 5) + v14 + v211 + 1518500249 + (v15 ^ v183 & (v15 ^ v16));
    v18 = __builtin_rotateleft32(v183, 30);
    v184 = __builtin_bswap32(a2[8]);
    v227 = v15 + v216 + 1518500249 + (v16 ^ v221 & (v16 ^ v18)) + __builtin_rotateleft32(v17, 5);
    v19 = __builtin_rotateleft32(v221, 30);
    v222 = __builtin_bswap32(a2[9]);
    v20 = __builtin_rotateleft32(v227, 5) + v16 + v184 + 1518500249 + (v18 ^ v17 & (v18 ^ v19));
    v21 = __builtin_rotateleft32(v17, 30);
    v247 = __builtin_bswap32(a2[10]);
    v232 = v18 + v222 + 1518500249 + (v19 ^ v227 & (v19 ^ v21)) + __builtin_rotateleft32(v20, 5);
    v22 = __builtin_rotateleft32(v227, 30);
    v251 = __builtin_bswap32(a2[11]);
    v237 = v19 + v247 + 1518500249 + (v21 ^ v20 & (v21 ^ v22)) + __builtin_rotateleft32(v232, 5);
    v23 = __builtin_rotateleft32(v20, 30);
    v255 = __builtin_bswap32(a2[12]);
    v24 = __builtin_rotateleft32(v237, 5) + v21 + v251 + 1518500249 + (v22 ^ v232 & (v22 ^ v23));
    v25 = __builtin_rotateleft32(v232, 30);
    v228 = __builtin_bswap32(a2[13]);
    v242 = v22 + v255 + 1518500249 + (v23 ^ v237 & (v23 ^ v25)) + __builtin_rotateleft32(v24, 5);
    v26 = __builtin_rotateleft32(v237, 30);
    v233 = __builtin_bswap32(a2[14]);
    v27 = __builtin_rotateleft32(v242, 5) + v23 + v228 + 1518500249 + (v25 ^ v24 & (v25 ^ v26));
    v28 = __builtin_rotateleft32(v24, 30);
    v238 = __builtin_bswap32(a2[15]);
    a2 += 16;
    v29 = __builtin_rotateleft32(v27, 5) + v25 + v233 + 1518500249 + (v26 ^ v242 & (v26 ^ v28));
    v30 = __builtin_rotateleft32(v242, 30);
    v31 = __builtin_rotateleft32(v29, 5) + v26 + v238 + 1518500249 + (v28 ^ v27 & (v28 ^ v30));
    v191 = v228 ^ v184 ^ v190 ^ v168;
    v32 = __builtin_rotateleft32(v27, 30);
    v33 = (v30 ^ v29 & (v32 ^ v30)) + v191 + v28 + __builtin_rotateleft32(v31, 5) + 1518500249;
    v196 = v233 ^ v222 ^ v195 ^ v175;
    v34 = __builtin_rotateleft32(v29, 30);
    v35 = __builtin_rotateleft32(v33, 5) + v30 + v196 + 1518500249 + (v32 ^ v31 & (v32 ^ v34));
    v36 = __builtin_rotateleft32(v31, 30);
    v169 = v238 ^ v247 ^ v168 ^ v200;
    v37 = v32 + v169 + 1518500249 + (v34 ^ v33 & (v34 ^ v36)) + __builtin_rotateleft32(v35, 5);
    v176 = v191 ^ v251 ^ v175 ^ v205;
    v38 = __builtin_rotateleft32(v33, 30);
    v39 = v34 + v176 + 1518500249 + (v36 ^ v35 & (v36 ^ v38)) + __builtin_rotateleft32(v37, 5);
    v201 = v196 ^ v255 ^ v200 ^ v211;
    v40 = __builtin_rotateleft32(v35, 30);
    v41 = v36 + v201 + 1859775393 + (v37 ^ v38 ^ v40) + __builtin_rotateleft32(v39, 5);
    v206 = v169 ^ v228 ^ v205 ^ v216;
    v42 = __builtin_rotateleft32(v37, 30);
    v43 = __builtin_rotateleft32(v41, 5) + v38 + v206 + 1859775393 + (v39 ^ v40 ^ v42);
    v212 = v176 ^ v233 ^ v211 ^ v184;
    v44 = __builtin_rotateleft32(v39, 30);
    v45 = __builtin_rotateleft32(v43, 5) + v40 + v212 + 1859775393 + (v41 ^ v42 ^ v44);
    v217 = v201 ^ v238 ^ v216 ^ v222;
    v46 = __builtin_rotateleft32(v41, 30);
    v47 = __builtin_rotateleft32(v45, 5) + v42 + v217 + 1859775393 + (v43 ^ v44 ^ v46);
    v185 = v206 ^ v191 ^ v184 ^ v247;
    v48 = __builtin_rotateleft32(v43, 30);
    v49 = __builtin_rotateleft32(v47, 5) + v44 + v185 + 1859775393 + (v45 ^ v46 ^ v48);
    v223 = v212 ^ v196 ^ v222 ^ v251;
    v50 = __builtin_rotateleft32(v45, 30);
    v51 = __builtin_rotateleft32(v49, 5) + v46 + v223 + 1859775393 + (v47 ^ v48 ^ v50);
    v248 = v217 ^ v169 ^ v247 ^ v255;
    v52 = __builtin_rotateleft32(v47, 30);
    v53 = __builtin_rotateleft32(v51, 5) + v48 + v248 + 1859775393 + (v49 ^ v50 ^ v52);
    v252 = v185 ^ v176 ^ v251 ^ v228;
    v54 = __builtin_rotateleft32(v49, 30);
    v55 = __builtin_rotateleft32(v53, 5) + v50 + v252 + 1859775393 + (v51 ^ v52 ^ v54);
    v256 = v223 ^ v201 ^ v255 ^ v233;
    v56 = __builtin_rotateleft32(v51, 30);
    v57 = __builtin_rotateleft32(v55, 5) + v52 + v256 + 1859775393 + (v53 ^ v54 ^ v56);
    v58 = __builtin_rotateleft32(v53, 30);
    v229 = v248 ^ v206 ^ v228 ^ v238;
    v59 = __builtin_rotateleft32(v57, 5) + v54 + v229 + 1859775393 + (v55 ^ v56 ^ v58);
    v234 = v252 ^ v212 ^ v233 ^ v191;
    v60 = __builtin_rotateleft32(v55, 30);
    v61 = __builtin_rotateleft32(v59, 5) + v56 + v234 + 1859775393 + (v57 ^ v58 ^ v60);
    v239 = v256 ^ v217 ^ v238 ^ v196;
    v62 = __builtin_rotateleft32(v57, 30);
    v63 = __builtin_rotateleft32(v61, 5) + v58 + v239 + 1859775393 + (v59 ^ v60 ^ v62);
    v192 = v229 ^ v185 ^ v191 ^ v169;
    v64 = __builtin_rotateleft32(v59, 30);
    v65 = __builtin_rotateleft32(v63, 5) + v60 + v192 + 1859775393 + (v61 ^ v62 ^ v64);
    v197 = v234 ^ v223 ^ v196 ^ v176;
    v66 = __builtin_rotateleft32(v61, 30);
    v67 = __builtin_rotateleft32(v65, 5) + v62 + v197 + 1859775393 + (v63 ^ v64 ^ v66);
    v170 = v239 ^ v248 ^ v169 ^ v201;
    v68 = __builtin_rotateleft32(v63, 30);
    v69 = __builtin_rotateleft32(v67, 5) + v64 + v170 + 1859775393 + (v65 ^ v66 ^ v68);
    v177 = v192 ^ v252 ^ v176 ^ v206;
    v70 = __builtin_rotateleft32(v65, 30);
    v71 = __builtin_rotateleft32(v69, 5) + v66 + v177 + 1859775393 + (v67 ^ v68 ^ v70);
    v202 = v197 ^ v256 ^ v201 ^ v212;
    v72 = __builtin_rotateleft32(v67, 30);
    v73 = __builtin_rotateleft32(v71, 5) + v68 + v202 + 1859775393 + (v69 ^ v70 ^ v72);
    v207 = v170 ^ v229 ^ v206 ^ v217;
    v74 = __builtin_rotateleft32(v69, 30);
    v75 = __builtin_rotateleft32(v73, 5) + v70 + v207 + 1859775393 + (v71 ^ v72 ^ v74);
    v213 = v177 ^ v234 ^ v212 ^ v185;
    v76 = __builtin_rotateleft32(v71, 30);
    v77 = __builtin_rotateleft32(v75, 5) + v72 + v213 + 1859775393 + (v73 ^ v74 ^ v76);
    v218 = v202 ^ v239 ^ v217 ^ v223;
    v78 = __builtin_rotateleft32(v73, 30);
    v79 = __builtin_rotateleft32(v77, 5) + v74 + v218 + 1859775393 + (v75 ^ v76 ^ v78);
    v80 = __builtin_rotateleft32(v75, 30);
    v186 = v207 ^ v192 ^ v185 ^ v248;
    v81 = v76 + v186 - 1894007588 + __builtin_rotateleft32(v79, 5) + (v80 & v77 | v78 & (v80 | v77));
    v224 = v213 ^ v197 ^ v223 ^ v252;
    v82 = __builtin_rotateleft32(v77, 30);
    v83 = __builtin_rotateleft32(v81, 5) + v78 + v224 - 1894007588 + (v82 & v79 | v80 & (v82 | v79));
    v249 = v218 ^ v170 ^ v248 ^ v256;
    v84 = __builtin_rotateleft32(v79, 30);
    v243 = v80 + v249 - 1894007588 + __builtin_rotateleft32(v83, 5);
    v85 = v84 & v81;
    v86 = v82 & (v84 | v81);
    v87 = __builtin_rotateleft32(v81, 30);
    v88 = v243 + (v85 | v86);
    v253 = v186 ^ v177 ^ v252 ^ v229;
    v89 = __builtin_rotateleft32(v88, 5) + v82 + v253 - 1894007588 + (v87 & v83 | v84 & (v87 | v83));
    v257 = v224 ^ v202 ^ v256 ^ v234;
    v90 = __builtin_rotateleft32(v83, 30);
    v91 = v84 + v257 - 1894007588 + __builtin_rotateleft32(v89, 5) + (v90 & v88 | v87 & (v90 | v88));
    v230 = v249 ^ v207 ^ v229 ^ v239;
    v92 = __builtin_rotateleft32(v88, 30);
    v93 = __builtin_rotateleft32(v91, 5) + v87 + v230 - 1894007588 + (v92 & v89 | v90 & (v92 | v89));
    v94 = __builtin_rotateleft32(v89, 30);
    v235 = v253 ^ v213 ^ v234 ^ v192;
    v95 = v90 + v235 - 1894007588 + __builtin_rotateleft32(v93, 5) + (v94 & v91 | v92 & (v94 | v91));
    v240 = v257 ^ v218 ^ v239 ^ v197;
    v96 = __builtin_rotateleft32(v91, 30);
    v97 = __builtin_rotateleft32(v95, 5) + v92 + v240 - 1894007588 + (v96 & v93 | v94 & (v96 | v93));
    v193 = v230 ^ v186 ^ v192 ^ v170;
    v98 = __builtin_rotateleft32(v93, 30);
    v244 = v94 + v193 - 1894007588 + __builtin_rotateleft32(v97, 5);
    v99 = v98 & v95;
    v100 = v96 & (v98 | v95);
    v101 = __builtin_rotateleft32(v95, 30);
    v102 = v244 + (v99 | v100);
    v198 = v235 ^ v224 ^ v197 ^ v177;
    v103 = __builtin_rotateleft32(v102, 5) + v96 + v198 - 1894007588 + (v101 & v97 | v98 & (v101 | v97));
    v171 = v240 ^ v249 ^ v170 ^ v202;
    v104 = __builtin_rotateleft32(v97, 30);
    v105 = v98 + v171 - 1894007588 + __builtin_rotateleft32(v103, 5) + (v104 & v102 | v101 & (v104 | v102));
    v178 = v193 ^ v253 ^ v177 ^ v207;
    v106 = __builtin_rotateleft32(v102, 30);
    v107 = __builtin_rotateleft32(v105, 5) + v101 + v178 - 1894007588 + (v106 & v103 | v104 & (v106 | v103));
    v108 = __builtin_rotateleft32(v103, 30);
    v203 = v198 ^ v257 ^ v202 ^ v213;
    v109 = v104 + v203 - 1894007588 + __builtin_rotateleft32(v107, 5) + (v108 & v105 | v106 & (v108 | v105));
    v208 = v171 ^ v230 ^ v207 ^ v218;
    v110 = __builtin_rotateleft32(v105, 30);
    v111 = __builtin_rotateleft32(v109, 5) + v106 + v208 - 1894007588 + (v110 & v107 | v108 & (v110 | v107));
    v214 = v178 ^ v235 ^ v213 ^ v186;
    v112 = __builtin_rotateleft32(v107, 30);
    v245 = v108 + v214 - 1894007588 + __builtin_rotateleft32(v111, 5);
    v113 = v112 & v109;
    v114 = v110 & (v112 | v109);
    v115 = __builtin_rotateleft32(v109, 30);
    v116 = v245 + (v113 | v114);
    v219 = v203 ^ v240 ^ v218 ^ v224;
    v117 = __builtin_rotateleft32(v116, 5) + v110 + v219 - 1894007588 + (v115 & v111 | v112 & (v115 | v111));
    v187 = v208 ^ v193 ^ v186 ^ v249;
    v118 = __builtin_rotateleft32(v111, 30);
    v119 = v112 + v187 - 1894007588 + __builtin_rotateleft32(v117, 5) + (v118 & v116 | v115 & (v118 | v116));
    v225 = v214 ^ v198 ^ v224 ^ v253;
    v120 = __builtin_rotateleft32(v116, 30);
    v121 = __builtin_rotateleft32(v119, 5) + v115 + v225 - 1894007588 + (v120 & v117 | v118 & (v120 | v117));
    v122 = __builtin_rotateleft32(v117, 30);
    v250 = v219 ^ v171 ^ v249 ^ v257;
    v123 = v118 + v250 - 1894007588 + __builtin_rotateleft32(v121, 5) + (v122 & v119 | v120 & (v122 | v119));
    v254 = v187 ^ v178 ^ v253 ^ v230;
    v124 = __builtin_rotateleft32(v119, 30);
    v125 = __builtin_rotateleft32(v123, 5) + (v124 & v121 | v122 & (v124 | v121)) + v120 + v254 - 1894007588;
    v258 = v225 ^ v203 ^ v257 ^ v235;
    v126 = __builtin_rotateleft32(v121, 30);
    v127 = v122 + v258 - 899497514 + (v123 ^ v124 ^ v126) + __builtin_rotateleft32(v125, 5);
    v128 = __builtin_rotateleft32(v123, 30);
    v231 = v250 ^ v208 ^ v230 ^ v240;
    v129 = v124 + v231 - 899497514 + (v125 ^ v126 ^ v128) + __builtin_rotateleft32(v127, 5);
    v236 = v254 ^ v214 ^ v235 ^ v193;
    v130 = __builtin_rotateleft32(v125, 30);
    v131 = v126 + v236 - 899497514 + (v127 ^ v128 ^ v130) + __builtin_rotateleft32(v129, 5);
    v241 = v258 ^ v219 ^ v240 ^ v198;
    v132 = __builtin_rotateleft32(v127, 30);
    v133 = __builtin_rotateleft32(v131, 5) + v128 + v241 - 899497514 + (v129 ^ v130 ^ v132);
    v194 = v231 ^ v187 ^ v193 ^ v171;
    v134 = __builtin_rotateleft32(v129, 30);
    v135 = __builtin_rotateleft32(v133, 5) + v130 + v194 - 899497514 + (v131 ^ v132 ^ v134);
    v136 = __builtin_rotateleft32(v131, 30);
    v199 = v236 ^ v225 ^ v198 ^ v178;
    v137 = __builtin_rotateleft32(v135, 5) + v132 + v199 - 899497514 + (v133 ^ v134 ^ v136);
    v172 = v241 ^ v250 ^ v171 ^ v203;
    v138 = __builtin_rotateleft32(v133, 30);
    v139 = __builtin_rotateleft32(v137, 5) + v134 + v172 - 899497514 + (v135 ^ v136 ^ v138);
    v179 = v194 ^ v254 ^ v178 ^ v208;
    v140 = __builtin_rotateleft32(v135, 30);
    v141 = __builtin_rotateleft32(v139, 5) + v136 + v179 - 899497514 + (v137 ^ v138 ^ v140);
    v204 = v199 ^ v258 ^ v203 ^ v214;
    v142 = __builtin_rotateleft32(v137, 30);
    v143 = __builtin_rotateleft32(v141, 5) + v138 + v204 - 899497514 + (v139 ^ v140 ^ v142);
    v209 = v172 ^ v231 ^ v208 ^ v219;
    v144 = __builtin_rotateleft32(v139, 30);
    v145 = v140 + v209 - 899497514 + (v141 ^ v142 ^ v144) + __builtin_rotateleft32(v143, 5);
    v215 = v179 ^ v236 ^ v214 ^ v187;
    v146 = __builtin_rotateleft32(v141, 30);
    v147 = v142 + v215 - 899497514 + (v143 ^ v144 ^ v146) + __builtin_rotateleft32(v145, 5);
    v220 = v204 ^ v241 ^ v219 ^ v225;
    v148 = __builtin_rotateleft32(v143, 30);
    v149 = v144 + v220 - 899497514 + (v145 ^ v146 ^ v148) + __builtin_rotateleft32(v147, 5);
    v150 = __builtin_rotateleft32(v145, 30);
    v151 = v209 ^ v194 ^ v187 ^ v250;
    v246 = v149;
    v188 = v146 + v151 - 899497514 + (v147 ^ v148 ^ v150) + __builtin_rotateleft32(v149, 5);
    v152 = v215 ^ v199 ^ v225 ^ v254;
    v153 = __builtin_rotateleft32(v147, 30);
    v154 = v148 + v152 - 899497514 + (v149 ^ v150 ^ v153) + __builtin_rotateleft32(v188, 5);
    v155 = v220 ^ v172 ^ v250 ^ v258;
    v226 = v154;
    v156 = __builtin_rotateleft32(v246, 30);
    v173 = __builtin_rotateleft32(v226, 5) + (v188 ^ v153 ^ v156) + v150 + v155 - 899497514;
    v189 = __builtin_rotateleft32(v188, 30);
    v157 = v151 ^ v179 ^ v254 ^ v231;
    v180 = v153 + v157 - 899497514 + (v226 ^ v156 ^ v189) + __builtin_rotateleft32(v173, 5);
    v158 = __builtin_rotateleft32(v226, 30);
    v159 = v152 ^ v204 ^ v258 ^ v236;
    v160 = v156 + v159 - 899497514 + (v173 ^ v158 ^ v189) + __builtin_rotateleft32(v180, 5);
    v174 = __builtin_rotateleft32(v173, 30);
    v161 = __builtin_rotateleft32(v160, 5) + v189 + (v155 ^ v209 ^ v231 ^ v241) - 899497514 + (v180 ^ v158 ^ v174);
    v181 = __builtin_rotateleft32(v180, 30);
    v162 = __builtin_rotateleft32(v161, 5) + v158 + (v157 ^ v215 ^ v236 ^ v194) - 899497514 + (v160 ^ v174 ^ v181);
    v163 = __builtin_rotateleft32(v160, 30);
    v3 = __builtin_rotateleft32(v162, 5) + (v161 ^ v163 ^ v181) + v174 + (v159 ^ v220 ^ v241 ^ v199) + v260 - 899497514;
    *a1 = v3;
    result = a1[2] + __builtin_rotateleft32(v161, 30);
    v5 = a1[1] + v162;
    a1[1] = v5;
    a1[2] = result;
    v6 = a1[3] + v163;
    v164 = a1[4] + v181;
    v165 = a3-- == 1;
    a1[3] = v6;
    v167 = v164;
    a1[4] = v164;
    if ( v165 )
      break;
    v260 = v3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SHA_Update  (binary VA: 0x19dc030)
// Original: SHA_Update
// ----------------------------------------------------------------------------
int SHA_Update(int a1, char *src, size_t a3)
{
  size_t n;
  size_t v4;
  size_t v5;
  bool v6; // cc
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  char *v11;
  uint16_t *v12;
  uint8_t *v13;
  size_t v14;
  size_t v16;
  void *dest;
  char *v18;
  unsigned int *v19;

  n = a3;
  if ( a3 != 0 )
  {
    v4 = *(uint32_t *)(a1 + 20);
    v5 = v4 + 8 * a3;
    v6 = v4 <= v5;
    v7 = *(uint32_t *)(a1 + 24);
    if ( !v6 )
      ++v7;
    *(uint32_t *)(a1 + 20) = v5;
    v8 = *(uint32_t *)(a1 + 92);
    *(uint32_t *)(a1 + 24) = (a3 >> 29) + v7;
    v18 = src;
    if ( v8 != 0 )
    {
      v19 = (unsigned int *)(a1 + 28);
      if ( a3 <= 0x3F && a3 + v8 <= 0x3F )
      {
        memcpy((char *)v19 + v8, src, a3);
        *(uint32_t *)(a1 + 92) += a3;
        return 1;
      }
      v9 = 64 - v8;
      n = a3 - (64 - v8);
      memcpy((char *)v19 + v8, src, 64 - v8);
      sub_19DAA40((int *)a1, v19, 1);
      v10 = 64;
      v11 = &src[v9];
      v12 = (uint16_t *)(a1 + 28);
      v18 = v11;
      *(uint32_t *)(a1 + 92) = 0;
      if ( ((uint8_t)(uintptr_t)(v19) & 1) != 0 )
      {
        *(uint8_t *)(a1 + 28) = 0;
        v12 = (uint16_t *)(a1 + 29);
        LOBYTE(v10) = 63;
      }
      if ( ((uint8_t)(uintptr_t)(v12) & 2) != 0 )
      {
        *v12 = 0;
        v10 -= 2;
        ++v12;
      }
      memset(v12, 0, 4 * (v10 >> 2));
      v13 = (uint8_t *)(&v12[2 * (v10 >> 2)]);
      if ( (v10 & 2) == 0 )
      {
        if ( (v10 & 1) == 0 )
          goto LABEL_13;
LABEL_20:
        *v13 = 0;
        v14 = n >> 6;
        if ( n >> 6 == 0 )
        {
LABEL_14:
          if ( n == 0 )
            return 1;
LABEL_16:
          *(uint32_t *)(a1 + 92) = n;
          memcpy((void *)(a1 + 28), v18, n);
          return 1;
        }
LABEL_17:
        dest = (void *)v14;
        v16 = v14 << 6;
        n -= v16;
        sub_19DAA40((int *)a1, (unsigned int *)v18, (int)(uintptr_t)(dest));
        v18 += v16;
        if ( n == 0 )
          return 1;
        goto LABEL_16;
      }
      *(uint16_t *)v13 = 0;
      v13 += 2;
      if ( (v10 & 1) != 0 )
        goto LABEL_20;
    }
LABEL_13:
    v14 = n >> 6;
    if ( n >> 6 == 0 )
      goto LABEL_14;
    goto LABEL_17;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: SHA_Transform  (binary VA: 0x19dc1f0)
// Original: SHA_Transform
// ----------------------------------------------------------------------------
int SHA_Transform(int *a1, unsigned int *a2)
{
  return sub_19DAA40(a1, a2, 1);
}

// ----------------------------------------------------------------------------
// Function: SHA_Final  (binary VA: 0x19dc210)
// Original: SHA_Final
// ----------------------------------------------------------------------------
int SHA_Final(uint8_t *a1, int a2)
{
  int v2;
  unsigned int *v3;
  size_t n;
  int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  unsigned int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v2 = *(uint32_t *)(a2 + 92);
  v3 = (unsigned int *)(a2 + 28);
  n = 55 - v2;
  v5 = v2 + 1;
  *(uint8_t *)(a2 + v2 + 28) = 0x80;
  if ( (unsigned int)(v2 + 1) > 0x38 )
  {
    memset((char *)v3 + v5, 0, 63 - v2);
    sub_19DAA40((int *)a2, v3, 1);
    n = 56;
    v5 = 0;
  }
  memset((char *)v3 + v5, 0, n);
  v6 = *(uint32_t *)(a2 + 24);
  *(uint8_t *)(a2 + 87) = v6;
  *(uint8_t *)(a2 + 84) = HIBYTE(v6);
  *(uint8_t *)(a2 + 85) = BYTE2(v6);
  v7 = v6 >> 8;
  v8 = *(uint32_t *)(a2 + 20);
  *(uint8_t *)(a2 + 86) = v7;
  *(uint8_t *)(a2 + 91) = v8;
  *(uint8_t *)(a2 + 88) = HIBYTE(v8);
  *(uint8_t *)(a2 + 89) = BYTE2(v8);
  *(uint8_t *)(a2 + 90) = BYTE1(v8);
  sub_19DAA40((int *)a2, v3, 1);
  *(uint32_t *)(a2 + 92) = 0;
  v9 = 64;
  if ( ((uint8_t)(uintptr_t)(v3) & 1) != 0 )
  {
    v3 = (unsigned int *)(a2 + 29);
    *(uint8_t *)(a2 + 28) = 0;
    LOBYTE(v9) = 63;
    if ( ((a2 + 29) & 2) == 0 )
      goto LABEL_5;
  }
  else if ( ((uint8_t)(uintptr_t)(v3) & 2) == 0 )
  {
    goto LABEL_5;
  }
  *(uint16_t *)v3 = 0;
  v9 -= 2;
  v3 = (unsigned int *)((char *)v3 + 2);
LABEL_5:
  memset(v3, 0, 4 * (v9 >> 2));
  v10 = &v3[v9 >> 2];
  if ( (v9 & 2) != 0 )
  {
    *(uint16_t *)v10 = 0;
    v10 = (unsigned int *)((char *)v10 + 2);
  }
  if ( (v9 & 1) != 0 )
    *(uint8_t *)v10 = 0;
  v11 = *(uint32_t *)a2;
  a1[3] = *(uint32_t *)a2;
  *a1 = HIBYTE(v11);
  a1[1] = BYTE2(v11);
  a1[2] = BYTE1(v11);
  v12 = *(uint32_t *)(a2 + 4);
  a1[7] = v12;
  a1[4] = HIBYTE(v12);
  a1[5] = BYTE2(v12);
  a1[6] = BYTE1(v12);
  v13 = *(uint32_t *)(a2 + 8);
  a1[11] = v13;
  a1[8] = HIBYTE(v13);
  a1[9] = BYTE2(v13);
  a1[10] = BYTE1(v13);
  v14 = *(uint32_t *)(a2 + 12);
  a1[15] = v14;
  a1[12] = HIBYTE(v14);
  a1[13] = BYTE2(v14);
  a1[14] = BYTE1(v14);
  v15 = *(uint32_t *)(a2 + 16);
  a1[19] = v15;
  a1[16] = HIBYTE(v15);
  a1[17] = BYTE2(v15);
  a1[18] = BYTE1(v15);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: SHA_Init  (binary VA: 0x19dc3f0)
// Original: SHA_Init
// ----------------------------------------------------------------------------
int SHA_Init(int a1)
{
  unsigned int v1;
  uint16_t *v2;
  uint16_t *v3;

  v1 = 96;
  v2 = (uint16_t *)a1;
  if ( (a1 & 1) != 0 )
  {
    v2 = (uint16_t *)(a1 + 1);
    *(uint8_t *)a1 = 0;
    LOWORD(v1) = 95;
    if ( ((a1 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (a1 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v2 = 0;
  v1 -= 2;
  ++v2;
LABEL_3:
  memset(v2, 0, 4 * (v1 >> 2));
  v3 = &v2[2 * (v1 >> 2)];
  if ( (v1 & 2) != 0 )
    *v3++ = 0;
  if ( (v1 & 1) != 0 )
    *(uint8_t *)v3 = 0;
  *(uint32_t *)a1 = 1732584193;
  *(uint32_t *)(a1 + 4) = -271733879;
  *(uint32_t *)(a1 + 8) = -1732584194;
  *(uint32_t *)(a1 + 12) = 271733878;
  *(uint32_t *)(a1 + 16) = -1009589776;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sk_set_cmp_func  (binary VA: 0x19dc480)
// Original: sk_set_cmp_func
// ----------------------------------------------------------------------------
int sk_set_cmp_func(int a1, int a2)
{
  int result;

  result = *(uint32_t *)(a1 + 16);
  if ( result != a2 )
    *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 16) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sk_new  (binary VA: 0x19dc4a0)
// Original: sk_new
// ----------------------------------------------------------------------------
uint32_t * sk_new(int a1)
{
  uint32_t *v1;
  uint8_t *v2;
  void *v4;

  v1 = (uint32_t *)(CRYPTO_malloc(20, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( v1 != nullptr )
  {
    v2 = CRYPTO_malloc(16, (int)(uintptr_t)(&unk_1B15112), 0);
    v1[1] = (uint32_t)(uintptr_t)(v2);
    if ( v2 != nullptr )
    {
      *(uint32_t *)v2 = 0;
      *(uint32_t *)(v1[1] + 4) = 0;
      *(uint32_t *)(v1[1] + 8) = 0;
      *(uint32_t *)(v1[1] + 12) = 0;
      v1[4] = a1;
      v1[3] = 4;
      *v1 = 0;
      v1[2] = 0;
    }
    else
    {
      v4 = v1;
      v1 = nullptr;
      CRYPTO_free(v4);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sk_new_null  (binary VA: 0x19dc560)
// Original: sk_new_null
// ----------------------------------------------------------------------------
uint32_t * sk_new_null()
{
  return sk_new(0);
}

// ----------------------------------------------------------------------------
// Function: sk_insert  (binary VA: 0x19dc590)
// Original: sk_insert
// ----------------------------------------------------------------------------
int sk_insert(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint8_t *v6;
  int v7;

  v3 = 0;
  if ( a1 != 0 )
  {
    v4 = *(uint32_t *)a1;
    v5 = *(uint32_t *)(a1 + 12);
    if ( v5 <= *(uint32_t *)a1 + 1 )
    {
      v6 = CRYPTO_realloc(*(void **)(a1 + 4), 8 * v5, (int)(uintptr_t)(&unk_1B15112), 0);
      if ( v6 == nullptr )
        return v3;
      *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v6);
      v4 = *(uint32_t *)a1;
      *(uint32_t *)(a1 + 12) *= 2;
    }
    else
    {
      v6 = *(uint8_t **)(a1 + 4);
    }
    if ( v4 > a3 && a3 >= 0 )
    {
      do
      {
        *(uint32_t *)&v6[4 * v4 + 4] = *(uint32_t *)&v6[4 * v4];
        --v4;
      }
      while ( a3 <= v4 );
      *(uint32_t *)(*(uint32_t *)(a1 + 4) + 4 * a3) = a2;
    }
    else
    {
      *(uint32_t *)&v6[4 * v4] = a2;
    }
    v7 = *(uint32_t *)a1;
    *(uint32_t *)(a1 + 8) = 0;
    v3 = v7 + 1;
    *(uint32_t *)a1 = v3;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sk_delete  (binary VA: 0x19dc660)
// Original: sk_delete
// ----------------------------------------------------------------------------
int sk_delete(int *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v10;

  v2 = a2;
  if ( a2 < 0 || a1 == nullptr )
    return 0;
  v3 = *a1;
  v10 = 0;
  if ( a2 < *a1 )
  {
    v4 = a1[1];
    v5 = 4 * a2;
    v10 = *(uint32_t *)(v4 + 4 * a2);
    v6 = v3 - 1;
    if ( v3 - 1 != a2 && a2 < v6 )
    {
      v7 = v3 - 2;
      while ( 1 )
      {
        v8 = (uint32_t *)(v4 + v5);
        v5 += 4;
        *v8 = *(uint32_t *)(v4 + v5);
        if ( v2 == v7 )
          break;
        v4 = a1[1];
        ++v2;
      }
      v6 = *a1 - 1;
    }
    *a1 = v6;
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: sk_delete_ptr  (binary VA: 0x19dc6f0)
// Original: sk_delete_ptr
// ----------------------------------------------------------------------------
int sk_delete_ptr(int *a1, int a2)
{
  int result;
  uint32_t *v3;

  result = 0;
  if ( *a1 > 0 )
  {
    v3 = (uint32_t *)a1[1];
    if ( *v3 == a2 )
    {
      result = 0;
      return sk_delete(a1, result);
    }
    else
    {
      while ( ++result != *a1 )
      {
        if ( v3[result] == a2 )
          return sk_delete(a1, result);
      }
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sk_push  (binary VA: 0x19dc750)
// Original: sk_push
// ----------------------------------------------------------------------------
int sk_push(int *a1, int a2)
{
  return sk_insert((int)(uintptr_t)(a1), a2, *a1);
}

// ----------------------------------------------------------------------------
// Function: sk_unshift  (binary VA: 0x19dc780)
// Original: sk_unshift
// ----------------------------------------------------------------------------
int sk_unshift(int a1, int a2)
{
  return sk_insert(a1, a2, 0);
}

// ----------------------------------------------------------------------------
// Function: sk_shift  (binary VA: 0x19dc7c0)
// Original: sk_shift
// ----------------------------------------------------------------------------
int sk_shift(int *a1)
{
  int result;

  result = 0;
  if ( a1 != nullptr && *a1 > 0 )
    return sk_delete(a1, 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sk_pop  (binary VA: 0x19dc800)
// Original: sk_pop
// ----------------------------------------------------------------------------
int sk_pop(int *a1)
{
  int result;

  if ( a1 == nullptr )
    return 0;
  result = 0;
  if ( *a1 > 0 )
    return sk_delete(a1, *a1 - 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sk_zero  (binary VA: 0x19dc840)
// Original: sk_zero
// ----------------------------------------------------------------------------
void sk_zero(int a1)
{
  if ( a1 != 0 && *(int *)a1 > 0 )
  {
    memset(*(void **)(a1 + 4), 0, 4 * *(uint32_t *)a1);
    *(uint32_t *)a1 = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sk_free  (binary VA: 0x19dc8a0)
// Original: sk_free
// ----------------------------------------------------------------------------
int sk_free(void **a1)
{
  int result;

  if ( a1 != nullptr )
  {
    if ( a1[1] != nullptr )
      CRYPTO_free(a1[1]);
    return CRYPTO_free(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sk_pop_free  (binary VA: 0x19dc8f0)
// Original: sk_pop_free
// ----------------------------------------------------------------------------
int sk_pop_free(void **a1, void (*a2)(uint32_t))
{
  int v2;
  int result;

  if ( a1 != nullptr )
  {
    if ( (int)(uintptr_t)(*a1) > 0 )
    {
      v2 = 0;
      do
      {
        if ( *((uint32_t *)a1[1] + v2) != 0 )
          a2(*((uint32_t *)a1[1] + v2));
        ++v2;
      }
      while ( (int)(uintptr_t)(*a1) > v2 );
    }
    return sk_free(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sk_dup  (binary VA: 0x19dc940)
// Original: sk_dup
// ----------------------------------------------------------------------------
void ** sk_dup(int a1)
{
  void **v1;
  uint8_t *v2;
  void **dest;

  v1 = (void **)sk_new(*(uint32_t *)(a1 + 16));
  if ( v1 != nullptr )
  {
    v2 = CRYPTO_realloc(v1[1], 4 * *(uint32_t *)(a1 + 12), (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v2 != nullptr )
    {
      v1[1] = v2;
      *v1 = *(void **)a1;
      memcpy(v2, *(const void **)(a1 + 4), 4 * *(uint32_t *)a1);
      v1[2] = *(void **)(a1 + 8);
      v1[3] = *(void **)(a1 + 12);
      v1[4] = *(void **)(a1 + 16);
    }
    else
    {
      dest = v1;
      v1 = nullptr;
      sk_free(dest);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sk_num  (binary VA: 0x19dc9f0)
// Original: sk_num
// ----------------------------------------------------------------------------
int sk_num(int a1)
{
  if ( a1 != 0 )
    return *(uint32_t *)a1;
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: sk_value  (binary VA: 0x19dca10)
// Original: sk_value
// ----------------------------------------------------------------------------
int sk_value(int *a1, int a2)
{
  int result;

  result = 0;
  if ( a2 >= 0 && a1 != nullptr && a2 < *a1 )
    return *(uint32_t *)(a1[1] + 4 * a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sk_set  (binary VA: 0x19dca40)
// Original: sk_set
// ----------------------------------------------------------------------------
int sk_set(int *a1, int a2, int a3)
{
  int result;

  result = a3;
  if ( a2 < 0 || a1 == nullptr || a2 >= *a1 )
    return 0;
  *(uint32_t *)(a1[1] + 4 * a2) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sk_sort  (binary VA: 0x19dca70)
// Original: sk_sort
// ----------------------------------------------------------------------------
void sk_sort(int a1)
{
  if ( a1 != 0 && *(uint32_t *)(a1 + 8) == 0 )
  {
    qsort(*(void **)(a1 + 4), *(uint32_t *)a1, 4u, *(__compar_fn_t *)(a1 + 16));
    *(uint32_t *)(a1 + 8) = 1;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_19DCAD0  (binary VA: 0x19dcad0)
// Original: sub_19DCAD0
// ----------------------------------------------------------------------------
int sub_19DCAD0(int a1, int a2, char a3)
{
  int v4;
  int result;
  int v6;
  uint32_t *v7;
  uint32_t v8[4];

  v8[0] = a2;
  if ( a1 == 0 )
    return -1;
  if ( *(uint32_t *)(a1 + 16) != 0 )
  {
    sk_sort(a1);
    if ( v8[0] != 0 )
    {
      v4 = OBJ_bsearch_ex((int)(uintptr_t)(v8), *(uint32_t *)(a1 + 4), *(uint32_t *)a1, 4, *(int (**)(int, int))(a1 + 16), a3);
      if ( v4 != 0 )
        return (v4 - *(uint32_t *)(a1 + 4)) >> 2;
    }
    return -1;
  }
  v6 = *(uint32_t *)a1;
  result = -1;
  if ( *(int *)a1 > 0 )
  {
    v7 = *(uint32_t **)(a1 + 4);
    result = 0;
    if ( *v7 != v8[0] )
    {
      while ( ++result != v6 )
      {
        if ( v7[result] == v8[0] )
          return result;
      }
      return -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sk_find_ex  (binary VA: 0x19dcb80)
// Original: sk_find_ex
// ----------------------------------------------------------------------------
int sk_find_ex(int a1, int a2)
{
  return sub_19DCAD0(a1, a2, 1);
}

// ----------------------------------------------------------------------------
// Function: sk_find  (binary VA: 0x19dcba0)
// Original: sk_find
// ----------------------------------------------------------------------------
int sk_find(int a1, int a2)
{
  return sub_19DCAD0(a1, a2, 2);
}

// ----------------------------------------------------------------------------
// Function: sk_is_sorted  (binary VA: 0x19dcbc0)
// Original: sk_is_sorted
// ----------------------------------------------------------------------------
int sk_is_sorted(int a1)
{
  int result;

  result = 1;
  if ( a1 != 0 )
    return *(uint32_t *)(a1 + 8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: WHIRLPOOL_Init  (binary VA: 0x19dcca0)
// Original: WHIRLPOOL_Init
// ----------------------------------------------------------------------------
int WHIRLPOOL_Init(uint8_t *a1)
{
  uint16_t *v1;
  unsigned int v2;
  uint16_t *v3;

  v1 = (uint16_t *)(a1);
  v2 = 164;
  if ( ((uint8_t)(uintptr_t)(a1) & 1) != 0 )
  {
    *a1 = 0;
    v1 = (uint16_t *)(a1 + 1);
    LOBYTE(v2) = -93;
    if ( ((unsigned int)(uintptr_t)(a1 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(a1) & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v1 = 0;
  v2 -= 2;
  ++v1;
LABEL_3:
  memset(v1, 0, 4 * (v2 >> 2));
  v3 = &v1[2 * (v2 >> 2)];
  if ( (v2 & 2) != 0 )
    *v3++ = 0;
  if ( (v2 & 1) != 0 )
    *(uint8_t *)v3 = 0;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: WHIRLPOOL_BitUpdate  (binary VA: 0x19dcd00)
// Original: WHIRLPOOL_BitUpdate
// ----------------------------------------------------------------------------
unsigned int WHIRLPOOL_BitUpdate(int a1, uint8_t *a2, unsigned int a3)
{
  char *v3;
  unsigned int v4;
  unsigned int result;
  int v6;
  int v7;
  unsigned int v8;
  int v9;
  uint8_t v10; // di
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  size_t n;
  unsigned int v18;
  int v19;
  char *src;
  int v21;
  uint8_t v22;
  int v23;

  v3 = (char *)a2;
  v23 = -a3 & 7;
  v4 = *(uint32_t *)(a1 + 128);
  result = *(uint32_t *)(a1 + 132) + a3;
  *(uint32_t *)(a1 + 132) = result;
  v19 = v4 & 7;
  if ( a3 > result )
  {
    for ( result = 1; result != 8; ++result )
    {
      v6 = *(uint32_t *)(a1 + 4 * result + 132) + 1;
      *(uint32_t *)(a1 + 4 * result + 132) = v6;
      if ( v6 != 0 )
        break;
    }
  }
  if ( (v19 | v23) == 0 )
    goto LABEL_29;
  result = a3;
  if ( a3 == 0 )
    return result;
  result = v4 >> 3;
  if ( v19 == v23 )
  {
    *(uint8_t *)(a1 + result + 64) |= *a2 & (255 >> v19);
    result = 8 - v19;
    v3 = (char *)(a2 + 1);
    v4 += 8 - v19;
    a3 -= 8 - v19;
    if ( v4 == 512 )
    {
      LOWORD(v4) = 0;
      result = whirlpool_block(a1, a1 + 64, 1);
    }
    *(uint32_t *)(a1 + 128) = v4;
LABEL_29:
    if ( a3 != 0 )
    {
      src = v3;
      v13 = a3;
      do
      {
        if ( v4 == 0 && v13 >> 9 != 0 )
        {
          n = v13 >> 9;
          v18 = v13 >> 9;
          v13 &= 0x1FFu;
          whirlpool_block(a1, src, n);
          result = v18 << 6;
          src += 64 * v18;
        }
        else
        {
          v15 = 512 - v4;
          v16 = v4 >> 3;
          if ( 512 - v4 <= v13 )
          {
            v13 -= v15;
            v14 = v15 >> 3;
            memcpy((void *)(a1 + v16 + 64), src, v15 >> 3);
            src += v14;
            v4 = 0;
            result = whirlpool_block(a1, a1 + 64, 1);
          }
          else
          {
            v4 += v13;
            result = (unsigned int)(uintptr_t)(memcpy((void *)(a1 + v16 + 64), src, v13 >> 3));
            v13 = 0;
          }
          *(uint32_t *)(a1 + 128) = v4;
        }
      }
      while ( v13 != 0 );
    }
    return result;
  }
  while ( a3 > 7 )
  {
    v21 = (int)(uint8_t)v3[1] >> (8 - v23);
    v7 = ((uint8_t)*v3 << v23) | (uint8_t)v21;
    v22 = (*v3 << v23) | v21;
    if ( v19 != 0 )
    {
      v4 += 8;
      a3 -= 8;
      *(uint8_t *)(a1 + result + 64) |= (int)(uint8_t)v7 >> v19;
      v8 = result + 1;
      if ( v4 <= 0x1FF )
        goto LABEL_11;
    }
    else
    {
      v4 += 8;
      *(uint8_t *)(a1 + result + 64) = v22;
      a3 -= 8;
      v8 = result + 1;
      if ( v4 <= 0x1FF )
        goto LABEL_11;
    }
    v4 &= 0x1FFu;
    whirlpool_block(a1, a1 + 64, 1);
    v8 = 0;
LABEL_11:
    if ( v19 != 0 )
      *(uint8_t *)(a1 + v8 + 64) = v22 << (8 - v19);
    result = a3;
    *(uint32_t *)(a1 + 128) = v4;
    if ( a3 == 0 )
      return result;
    ++v3;
    result = v4 >> 3;
  }
  v9 = (uint8_t)*v3 << v23;
  v10 = v9;
  if ( v19 != 0 )
  {
    v11 = a3 + v4;
    *(uint8_t *)(a1 + result + 64) |= (int)(uint8_t)v9 >> v19;
    v12 = result + 1;
    if ( v11 != 512 )
      goto LABEL_18;
LABEL_25:
    LOWORD(v11) = 0;
    result = whirlpool_block(a1, a1 + 64, 1);
    v12 = 0;
  }
  else
  {
    v11 = a3 + v4;
    *(uint8_t *)(a1 + result + 64) = v9;
    v12 = result + 1;
    if ( v11 == 512 )
      goto LABEL_25;
  }
LABEL_18:
  if ( v19 != 0 )
  {
    result = v10 << (8 - v19);
    *(uint8_t *)(a1 + v12 + 64) = result;
  }
  *(uint32_t *)(a1 + 128) = v11;
  return result;
}

// ----------------------------------------------------------------------------
// Function: WHIRLPOOL_Update  (binary VA: 0x19dd060)
// Original: WHIRLPOOL_Update
// ----------------------------------------------------------------------------
int WHIRLPOOL_Update(int a1, uint8_t *a2, unsigned int a3)
{
  int v3;
  uint8_t *v4;
  uint8_t *v5;
  unsigned int v6;
  uint8_t *v8;

  v3 = a3;
  v4 = a2;
  if ( a3 > 0xFFFFFFF )
  {
    v5 = a2;
    v6 = a3;
    do
    {
      v6 -= 0x10000000;
      v8 = v5;
      v5 += 0x10000000;
      WHIRLPOOL_BitUpdate(a1, v8, 0x80000000);
    }
    while ( v6 > 0xFFFFFFF );
    v3 = a3 & 0xFFFFFFF;
    v4 = &a2[((a3 - 0x10000000) & 0xF0000000) + 0x10000000];
  }
  if ( v3 != 0 )
    WHIRLPOOL_BitUpdate(a1, v4, 8 * v3);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: WHIRLPOOL_Final  (binary VA: 0x19dd100)
// Original: WHIRLPOOL_Final
// ----------------------------------------------------------------------------
int WHIRLPOOL_Final(uint32_t *a1, uint32_t *a2)
{
  uint16_t *v2;
  int v3;
  int v4;
  unsigned int v5;
  size_t n;
  char *v7;
  int i;
  unsigned int v9;
  int j;
  int result;
  unsigned int v12;
  uint16_t *v13;
  uint32_t *v14;

  v2 = (uint16_t *)(a2);
  v3 = a2[32] >> 3;
  v4 = a2[32] & 7;
  if ( v4 != 0 )
    *((uint8_t *)a2 + v3 + 64) |= 128 >> v4;
  else
    *((uint8_t *)a2 + v3 + 64) = 0x80;
  v5 = v3 + 1;
  if ( (unsigned int)(v3 + 1) <= 0x20 )
  {
    if ( v3 == 31 )
    {
      v14 = a2 + 16;
      goto LABEL_8;
    }
    n = 31 - v3;
    v14 = a2 + 16;
  }
  else
  {
    if ( v5 <= 0x3F )
      memset((char *)a2 + v3 + 65, 0, 63 - v3);
    v14 = a2 + 16;
    whirlpool_block(a2, a2 + 16, 1);
    n = 32;
    v5 = 0;
  }
  memset((char *)a2 + v5 + 64, 0, n);
LABEL_8:
  v7 = (char *)a2 + 127;
  for ( i = 0; i != 8; ++i )
  {
    v9 = a2[i + 33];
    for ( j = 4; j != 0; --j )
    {
      v7[j - 4] = v9;
      v9 >>= 8;
    }
    v7 -= 4;
  }
  whirlpool_block(a2, v14, 1);
  result = 0;
  if ( a1 != nullptr )
  {
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    a1[3] = a2[3];
    a1[4] = a2[4];
    a1[5] = a2[5];
    a1[6] = a2[6];
    a1[7] = a2[7];
    a1[8] = a2[8];
    a1[9] = a2[9];
    a1[10] = a2[10];
    a1[11] = a2[11];
    a1[12] = a2[12];
    a1[13] = a2[13];
    a1[14] = a2[14];
    a1[15] = a2[15];
    v12 = 164;
    if ( ((uint8_t)(uintptr_t)(a2) & 1) != 0 )
    {
      *(uint8_t *)a2 = 0;
      LOBYTE(v12) = -93;
      v2 = (uint16_t *)((char *)a2 + 1);
    }
    if ( ((uint8_t)(uintptr_t)(v2) & 2) != 0 )
    {
      *v2 = 0;
      v12 -= 2;
      ++v2;
    }
    memset(v2, 0, 4 * (v12 >> 2));
    v13 = &v2[2 * (v12 >> 2)];
    if ( (v12 & 2) != 0 )
    {
      *v13++ = 0;
      if ( (v12 & 1) == 0 )
        return 1;
    }
    else if ( (v12 & 1) == 0 )
    {
      return 1;
    }
    *(uint8_t *)v13 = 0;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: WHIRLPOOL  (binary VA: 0x19dd310)
// Original: WHIRLPOOL
// ----------------------------------------------------------------------------
uint32_t * WHIRLPOOL(uint8_t *a1, unsigned int a2, uint32_t *a3)
{
  uint32_t *v3;
  uint32_t v5[41];

  v3 = a3;
  if ( a3 == nullptr )
    v3 = (uint32_t *)(&unk_2141DE0);
  WHIRLPOOL_Init(v5);
  WHIRLPOOL_Update((int)(uintptr_t)(v5), a1, a2);
  WHIRLPOOL_Final(v3, v5);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: X509at_get_attr_count  (binary VA: 0x19dd3a0)
// Original: X509at_get_attr_count
// ----------------------------------------------------------------------------
int X509at_get_attr_count(int a1)
{
  return sk_num(a1);
}

// ----------------------------------------------------------------------------
// Function: X509at_get_attr_by_OBJ  (binary VA: 0x19dd3d0)
// Original: X509at_get_attr_by_OBJ
// ----------------------------------------------------------------------------
int X509at_get_attr_by_OBJ(int *a1, int a2, int a3)
{
  int v3;
  int v4;
  int *v5;

  if ( a1 == nullptr )
    return -1;
  v3 = 0;
  if ( a3 + 1 >= 0 )
    v3 = a3 + 1;
  v4 = sk_num((int)(uintptr_t)(a1));
  if ( v4 <= v3 )
    return -1;
  while ( 1 )
  {
    v5 = (int *)sk_value(a1, v3);
    if ( OBJ_cmp(*v5, a2) == 0 )
      break;
    if ( ++v3 == v4 )
      return -1;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: X509at_get_attr_by_NID  (binary VA: 0x19dd450)
// Original: X509at_get_attr_by_NID
// ----------------------------------------------------------------------------
int X509at_get_attr_by_NID(int *a1, unsigned int a2, int a3)
{
  char **v3;

  v3 = OBJ_nid2obj(a2);
  if ( v3 != nullptr )
    return X509at_get_attr_by_OBJ(a1, (int)(uintptr_t)(v3), a3);
  else
    return -2;
}

// ----------------------------------------------------------------------------
// Function: X509at_get_attr  (binary VA: 0x19dd4a0)
// Original: X509at_get_attr
// ----------------------------------------------------------------------------
int X509at_get_attr(int *a1, int a2)
{
  int v2;

  v2 = 0;
  if ( a1 != nullptr && sk_num((int)(uintptr_t)(a1)) > a2 && a2 >= 0 )
    return sk_value(a1, a2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: X509at_delete_attr  (binary VA: 0x19dd510)
// Original: X509at_delete_attr
// ----------------------------------------------------------------------------
int X509at_delete_attr(int *a1, int a2)
{
  int v2;

  v2 = 0;
  if ( a1 != nullptr && sk_num((int)(uintptr_t)(a1)) > a2 && a2 >= 0 )
    return sk_delete(a1, a2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: X509at_add1_attr  (binary VA: 0x19dd580)
// Original: X509at_add1_attr
// ----------------------------------------------------------------------------
int * X509at_add1_attr(int **a1, int a2)
{
  int *v2;
  int v3;
  int v4;
  void **v6;

  if ( a1 == nullptr )
  {
    v2 = nullptr;
    ERR_put_error(11, 135, 67, (int)(uintptr_t)(&unk_1B15112), 0);
    return v2;
  }
  v2 = *a1;
  if ( *a1 == nullptr )
  {
    v2 = (int *)(sk_new_null());
    if ( v2 == nullptr )
    {
      v4 = 0;
      goto LABEL_5;
    }
  }
  v3 = X509_ATTRIBUTE_dup(a2);
  v4 = v3;
  if ( v3 == 0 )
  {
LABEL_7:
    if ( v2 != nullptr )
    {
      v6 = (void **)v2;
      v2 = nullptr;
      sk_free(v6);
    }
    return v2;
  }
  if ( sk_push(v2, v3) == 0 )
  {
LABEL_5:
    ERR_put_error(11, 135, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v4 != 0 )
      X509_ATTRIBUTE_free(v4);
    goto LABEL_7;
  }
  if ( *a1 == nullptr )
    *a1 = v2;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: X509at_add1_attr_by_txt  (binary VA: 0x19ddac0)
// Original: X509at_add1_attr_by_txt
// ----------------------------------------------------------------------------
int * X509at_add1_attr_by_txt(int **a1, char *a2, int a3, char *a4, size_t a5)
{
  void **v5;
  int *v6;
  char v7; // si

  v5 = X509_ATTRIBUTE_create_by_txt(nullptr, a2, a3, a4, a5);
  v6 = nullptr;
  v7 = (char)(uintptr_t)(v5);
  if ( v5 != nullptr )
  {
    v6 = X509at_add1_attr(a1, (int)(uintptr_t)(v5));
    X509_ATTRIBUTE_free(v7);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: X509at_add1_attr_by_NID  (binary VA: 0x19ddbf0)
// Original: X509at_add1_attr_by_NID
// ----------------------------------------------------------------------------
int * X509at_add1_attr_by_NID(int **a1, unsigned int a2, int a3, char *a4, size_t a5)
{
  void **v5;
  int *v6;
  char v7; // si

  v5 = X509_ATTRIBUTE_create_by_NID(nullptr, a2, a3, a4, a5);
  v6 = nullptr;
  v7 = (char)(uintptr_t)(v5);
  if ( v5 != nullptr )
  {
    v6 = X509at_add1_attr(a1, (int)(uintptr_t)(v5));
    X509_ATTRIBUTE_free(v7);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: X509at_add1_attr_by_OBJ  (binary VA: 0x19ddc70)
// Original: X509at_add1_attr_by_OBJ
// ----------------------------------------------------------------------------
int * X509at_add1_attr_by_OBJ(int **a1, int a2, int a3, char *a4, size_t a5)
{
  void **v5;
  int *v6;
  char v7; // si

  v5 = X509_ATTRIBUTE_create_by_OBJ(nullptr, a2, a3, a4, a5);
  v6 = nullptr;
  v7 = (char)(uintptr_t)(v5);
  if ( v5 != nullptr )
  {
    v6 = X509at_add1_attr(a1, (int)(uintptr_t)(v5));
    X509_ATTRIBUTE_free(v7);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: X509at_get0_data_by_OBJ  (binary VA: 0x19dde70)
// Original: X509at_get0_data_by_OBJ
// ----------------------------------------------------------------------------
int X509at_get0_data_by_OBJ(int *a1, int a2, int a3, int a4)
{
  int attr_by_OBJ;
  int v5;
  int v6;
  int attr;
  int v9;
  int v10;
  int v11;

  attr_by_OBJ = X509at_get_attr_by_OBJ(a1, a2, a3);
  v5 = 0;
  v6 = attr_by_OBJ;
  if ( attr_by_OBJ != -1 )
  {
    if ( a3 >= -1 )
    {
      attr = X509at_get_attr(a1, attr_by_OBJ);
      return X509_ATTRIBUTE_get0_data(attr, 0, a4);
    }
    v9 = X509at_get_attr_by_OBJ(a1, a2, attr_by_OBJ);
    v5 = 0;
    if ( v9 == -1 )
    {
      v10 = X509at_get_attr(a1, v6);
      attr = v10;
      if ( a3 == -2 )
        return X509_ATTRIBUTE_get0_data(attr, 0, a4);
      v11 = X509_ATTRIBUTE_count(v10);
      v5 = 0;
      if ( v11 == 1 )
        return X509_ATTRIBUTE_get0_data(attr, 0, a4);
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_19DEA50  (binary VA: 0x19dea50)
// Original: sub_19DEA50
// ----------------------------------------------------------------------------
int sub_19DEA50(uint32_t *a1)
{
  if ( *a1 == 1 )
  {
    X509_free(a1[1]);
  }
  else if ( *a1 == 2 )
  {
    X509_CRL_free(a1[1]);
  }
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_19DEAB0  (binary VA: 0x19deab0)
// Original: sub_19DEAB0
// ----------------------------------------------------------------------------
int sub_19DEAB0(int **a1, uint32_t *a2)
{
  int *v2;
  uint32_t *v3;
  int v4;
  int result;

  v2 = *a1;
  v3 = (uint32_t *)*a2;
  v4 = **a1;
  result = v4 - *(uint32_t *)*a2;
  if ( result == 0 )
  {
    if ( v4 == 1 )
    {
      return X509_subject_name_cmp(v2[1], v3[1]);
    }
    else if ( v4 == 2 )
    {
      return X509_CRL_cmp(v2[1], v3[1]);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19DEB40  (binary VA: 0x19deb40)
// Original: sub_19DEB40
// ----------------------------------------------------------------------------
int sub_19DEB40(int *a1, int a2, int a3, uint32_t *a4)
{
  int i;
  typedef int _g4_t_v7;
  typedef int *_g4_t_v8;
  typedef int *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef char **_g4_t_v11;
  typedef char _g4_t_v12;
  typedef int _g4_t_v13;
  typedef char _g4_t_v14;
  typedef int _g4_t_v15;
  typedef char *_g4_t_v16;
  typedef char *_g4_t_v17;
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v12)) > _g4_s5 ? (32u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v13)) > _g4_s6 ? (40u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v14)) > _g4_s7 ? (72u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v15)) > _g4_s8 ? (92u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (124u + sizeof(_g4_t_v16)) > _g4_s9 ? (124u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (200u + sizeof(_g4_t_v17)) > _g4_s10 ? (200u + sizeof(_g4_t_v17)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 92u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 124u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 200u);

  v10 = a2;
  if ( a2 == 1 )
  {
    v15 = a3;
    v11 = &v17;
    v17 = &v14;
  }
  else
  {
    if ( a2 != 2 )
      return -1;
    v13 = a3;
    v11 = &v16;
    v16 = &v12;
  }
  v7 = sk_find((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10));
  if ( v7 < 0 || a4 == nullptr )
    return v7;
  v9 = &v10;
  *a4 = 1;
  for ( i = v7 + 1; i < sk_num((int)(uintptr_t)(a1)); ++i )
  {
    v8 = (int *)sk_value(a1, i);
    if ( sub_19DEAB0(&v8, &v9) != 0 )
      return v7;
    ++*a4;
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: sub_19E04B0  (binary VA: 0x19e04b0)
// Original: sub_19E04B0
// ----------------------------------------------------------------------------
int sub_19E04B0(int a1)
{
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19E04C0  (binary VA: 0x19e04c0)
// Original: sub_19E04C0
// ----------------------------------------------------------------------------
int sub_19E04C0(int *a1, int a2, int a3)
{
  int v3;
  int *v4;
  int v6;

  v3 = 0;
  v4 = *(int **)(a2 + 24);
  while ( 1 )
  {
    if ( v3 >= sk_num((int)(uintptr_t)(v4)) )
    {
      *a1 = 0;
      return 0;
    }
    v6 = sk_value(v4, v3);
    if ( (*(int (**)(int, int, int))(a2 + 40))(a2, a3, v6) != 0 )
      break;
    ++v3;
  }
  *a1 = v6;
  if ( v6 == 0 )
    return 0;
  CRYPTO_add_lock((uint32_t *)(v6 + 16), 1, 3, (int)(uintptr_t)(&unk_1B15112), 0);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19E0580  (binary VA: 0x19e0580)
// Original: sub_19E0580
// ----------------------------------------------------------------------------
bool sub_19E0580(int a1, int a2, int a3)
{
  int ext_by_NID;
  int v5;
  int v6;
  int v7;
  int data;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  bool v15;
  int ext;

  ext_by_NID = X509_CRL_get_ext_by_NID(a1, a3, 0);
  v5 = ext_by_NID;
  if ( ext_by_NID < 0 )
  {
    data = 0;
  }
  else
  {
    v6 = X509_CRL_get_ext_by_NID(a1, a3, ext_by_NID);
    v7 = 0;
    if ( v6 != -1 )
      return v7;
    ext = X509_CRL_get_ext(a1, v5);
    data = X509_EXTENSION_get_data(ext);
  }
  v10 = X509_CRL_get_ext_by_NID(a2, a3, 0);
  v11 = v10;
  if ( v10 < 0 )
  {
    v15 = true;
    v14 = 0;
  }
  else
  {
    v12 = X509_CRL_get_ext_by_NID(a2, a3, v10);
    v7 = 0;
    if ( v12 != -1 )
      return v7;
    v13 = X509_CRL_get_ext(a2, v11);
    v14 = X509_EXTENSION_get_data(v13);
    v15 = v14 == 0;
  }
  if ( v15 )
    return data == 0;
  if ( data != 0 )
    return ASN1_OCTET_STRING_cmp(data, v14) == 0;
  return false;
}

// ----------------------------------------------------------------------------
// Function: sub_19E06D0  (binary VA: 0x19e06d0)
// Original: sub_19E06D0
// ----------------------------------------------------------------------------
int sub_19E06D0(int a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = X509_check_issued(a3, a2);
  v4 = 1;
  if ( v3 != 0 )
  {
    LOBYTE(v4) = 0;
    if ( (*(uint8_t *)(*(uint32_t *)(a1 + 20) + 12) & 1) != 0 )
    {
      *(uint32_t *)(a1 + 100) = v3;
      *(uint32_t *)(a1 + 104) = a2;
      *(uint32_t *)(a1 + 108) = a3;
      return (*(int (**)(uint32_t, int))(a1 + 32))(0, a1);
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_19E0760  (binary VA: 0x19e0760)
// Original: sub_19E0760
// ----------------------------------------------------------------------------
int sub_19E0760(int a1)
{
  int v1;
  int v3;
  int i;
  int v5;

  v1 = 1;
  if ( *(uint32_t *)(a1 + 124) == 0 )
  {
    v3 = X509_policy_check(
           a1 + 88,
           a1 + 92,
           *(uint32_t *)(a1 + 84),
           *(uint32_t *)(*(uint32_t *)(a1 + 20) + 28),
           *(uint32_t *)(*(uint32_t *)(a1 + 20) + 12));
    if ( v3 != 0 )
    {
      if ( v3 == -1 )
      {
        for ( i = 1; i < sk_num(*(uint32_t *)(a1 + 84)); ++i )
        {
          v5 = sk_value(*(int **)(a1 + 84), i);
          if ( (*(uint8_t *)(v5 + 41) & 8) != 0 )
          {
            *(uint32_t *)(a1 + 104) = v5;
            *(uint32_t *)(a1 + 100) = 42;
            if ( (*(int (**)(uint32_t, int))(a1 + 32))(0, a1) == 0 )
              return 0;
          }
        }
        return 1;
      }
      else if ( v3 == -2 )
      {
        *(uint32_t *)(a1 + 104) = 0;
        *(uint32_t *)(a1 + 100) = 43;
        return (*(int (**)(uint32_t, int))(a1 + 32))(0, a1);
      }
      else if ( (*(uint8_t *)(*(uint32_t *)(a1 + 20) + 13) & 8) != 0 )
      {
        *(uint32_t *)(a1 + 104) = 0;
        *(uint32_t *)(a1 + 100) = 0;
        return (*(int (**)(int, int))(a1 + 32))(2, a1) != 0;
      }
    }
    else
    {
      LOWORD(v1) = 0;
      ERR_put_error(11, 145, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_19E08E0  (binary VA: 0x19e08e0)
// Original: sub_19E08E0
// ----------------------------------------------------------------------------
bool sub_19E08E0(int a1, int a2, int a3)
{
  int v3;
  int v5;
  int v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  if ( (*(uint8_t *)(a2 + 17) & 2) == 0
    || (v3 = 1, (*(uint8_t *)(*(uint32_t *)(a1 + 20) + 12) & 0x10) == 0)
    && (*(uint32_t *)(a1 + 100) = 36, v5 = (*(int (**)(uint32_t, int))(a1 + 32))(0, a1), v3 = 0, v5 != 0) )
  {
    v6 = X509_CRL_get0_by_cert(a2, &v7, a3);
    v3 = 1;
    if ( v6 != 0 )
    {
      LOBYTE(v3) = 2;
      if ( *(uint32_t *)(v7 + 16) != 8 )
      {
        *(uint32_t *)(a1 + 100) = 23;
        return (*(int (**)(uint32_t, int))(a1 + 32))(0, a1) != 0;
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_19E0D50  (binary VA: 0x19e0d50)
// Original: sub_19E0D50
// ----------------------------------------------------------------------------
int sub_19E0D50(int a1, int a2, int a3)
{
  int v4;
  time_t *v5;
  int v6;
  int v7;
  int v8;
  int v10;
  int *v11;
  int v12;
  int v13;
  int v14;

  if ( a3 != 0 )
    *(uint32_t *)(a1 + 112) = a2;
  v4 = *(uint32_t *)(a1 + 20);
  v5 = nullptr;
  if ( (*(uint8_t *)(v4 + 12) & 2) != 0 )
    v5 = (time_t *)(v4 + 4);
  v6 = X509_cmp_time(*(int **)(*(uint32_t *)a2 + 12), v5);
  v7 = a2;
  if ( v6 != 0 )
  {
    if ( v6 > 0 )
    {
      v8 = 0;
      if ( a3 == 0 )
        return v8;
      *(uint32_t *)(a1 + 100) = 11;
      v14 = a1;
LABEL_12:
      v10 = (*(int (**)(uint32_t, int))(a1 + 32))(0, v14);
      v7 = a2;
      v8 = 0;
      if ( v10 == 0 )
        return v8;
    }
    v11 = *(int **)(*(uint32_t *)v7 + 16);
    if ( v11 != nullptr )
    {
      v12 = X509_cmp_time(v11, v5);
      if ( v12 == 0 )
      {
        v8 = 0;
        if ( a3 == 0 )
          return v8;
        *(uint32_t *)(a1 + 100) = 16;
        goto LABEL_17;
      }
      if ( v12 < 0 && (*(uint8_t *)(a1 + 116) & 2) == 0 )
      {
        v8 = 0;
        if ( a3 == 0 )
          return v8;
        *(uint32_t *)(a1 + 100) = 12;
LABEL_17:
        v13 = (*(int (**)(uint32_t, int))(a1 + 32))(0, a1);
        v8 = 0;
        if ( v13 == 0 )
          return v8;
        goto LABEL_21;
      }
    }
    v8 = 1;
    if ( a3 == 0 )
      return v8;
LABEL_21:
    *(uint32_t *)(a1 + 112) = 0;
    return 1;
  }
  v8 = 0;
  if ( a3 != 0 )
  {
    *(uint32_t *)(a1 + 100) = 15;
    v14 = a1;
    goto LABEL_12;
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: sub_19E0EA0  (binary VA: 0x19e0ea0)
// Original: sub_19E0EA0
// ----------------------------------------------------------------------------
bool sub_19E0EA0(int a1, int *a2, uint32_t *a3, int *a4, int *a5, int *a6, int *a7)
{
  int v7;
  int v8;
  int issuer_name;
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
  int subject_name;
  int v21;
  int v22;
  int v23;
  int **v24;
  int v25;
  int v26;
  int v27;
  int v28;
  uint32_t *v29;
  uint32_t **v30;
  uint32_t *v31;
  uint32_t *v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int i;
  uint32_t *v41;
  uint32_t *v42;
  uint32_t *v44;
  int v45;
  int *v46;
  int v47;
  int v48;
  int *v49;
  uint32_t *v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  uint32_t *v58;
  int **v59;
  uint32_t *v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v70;
  int v71;
  int v72;
  int **v73;
  int v74;

  v7 = a1;
  v64 = 0;
  v66 = 0;
  v63 = 0;
  v65 = 0;
  v56 = 0;
  v61 = *a5;
  v67 = *(uint32_t *)(a1 + 104);
  while ( v56 < sk_num((int)(uintptr_t)(a7)) )
  {
    v15 = sk_value(a7, v56);
    v16 = *(uint32_t *)(v15 + 28);
    v54 = 0;
    v62 = *a6;
    if ( (v16 & 2) != 0 )
      goto LABEL_14;
    if ( (*(uint8_t *)(*(uint32_t *)(v7 + 20) + 13) & 0x10) != 0 )
    {
      if ( (v16 & 0x40) != 0 )
      {
        if ( (~v62 & *(uint32_t *)(v15 + 32)) == 0 )
          goto LABEL_14;
      }
      else if ( *(uint32_t *)(v15 + 40) != 0 )
      {
        goto LABEL_14;
      }
    }
    else if ( (v16 & 0x60) != 0 )
    {
      goto LABEL_14;
    }
    v8 = *(uint32_t *)(*(uint32_t *)v15 + 8);
    issuer_name = X509_get_issuer_name(v67);
    v54 = 32;
    if ( X509_NAME_cmp(issuer_name, v8) != 0 )
    {
      v54 = 0;
      if ( (*(uint8_t *)(v15 + 28) & 0x20) == 0 )
        goto LABEL_14;
    }
    v10 = v54;
    BYTE1(v10) = BYTE1(v54) | 1;
    if ( (*(uint8_t *)(v15 + 17) & 2) != 0 )
      v10 = v54;
    v55 = v10;
    v11 = sub_19E0D50(v7, v15, 0);
    v13 = v55 | 0x40;
    if ( v11 == 0 )
      v13 = v55;
    v54 = v13;
    v52 = *(uint32_t *)(*(uint32_t *)v15 + 8);
    v12 = *(uint32_t *)(v7 + 96);
    v14 = (v12 != sk_num(*(uint32_t *)(v7 + 84)) - 1) + v12;
    v51 = sk_value(*(int **)(v7 + 84), v14);
    if ( X509_check_akid(v51, *(uint32_t *)(v15 + 20)) != 0 || (v54 & 0x20) == 0 )
    {
      v57 = v15;
      v17 = v14 + 1;
      v18 = v7;
      while ( v17 < sk_num(*(uint32_t *)(v18 + 84)) )
      {
        v19 = sk_value(*(int **)(v18 + 84), v17);
        subject_name = X509_get_subject_name(v19);
        if ( X509_NAME_cmp(subject_name, v52) == 0 && X509_check_akid(v19, *(uint32_t *)(v57 + 20)) == 0 )
        {
          v21 = v19;
          v54 |= 0xCu;
          v7 = v18;
          v64 = v21;
          v15 = v57;
          if ( (v54 & 4) == 0 )
            goto LABEL_13;
          goto LABEL_29;
        }
        ++v17;
      }
      v7 = v18;
      v36 = 0;
      v15 = v57;
      if ( (*(uint8_t *)(*(uint32_t *)(v7 + 20) + 13) & 0x10) != 0 )
      {
        while ( v36 < sk_num(*(uint32_t *)(v7 + 12)) )
        {
          v37 = sk_value(*(int **)(v7 + 12), v36);
          v38 = X509_get_subject_name(v37);
          if ( X509_NAME_cmp(v38, v52) == 0 && X509_check_akid(v37, *(uint32_t *)(v57 + 20)) == 0 )
          {
            v39 = v37;
            v54 |= 4u;
            v15 = v57;
            v64 = v39;
            goto LABEL_12;
          }
          ++v36;
        }
        v15 = v57;
      }
    }
    else
    {
      v54 |= 0x1Cu;
      v64 = v51;
    }
LABEL_12:
    if ( (v54 & 4) == 0 )
      goto LABEL_13;
LABEL_29:
    v22 = *(uint32_t *)(v15 + 28);
    if ( (v22 & 0x10) != 0 )
      goto LABEL_14;
    if ( (*(uint8_t *)(v67 + 40) & 0x10) != 0 )
    {
      if ( (v22 & 4) != 0 )
        goto LABEL_14;
    }
    else if ( (v22 & 8) != 0 )
    {
      goto LABEL_14;
    }
    v23 = *(uint32_t *)(v15 + 32);
    v58 = (uint32_t *)v15;
    v24 = (int **)(v67 + 68);
    v72 = v23;
    v53 = 0;
    v68 = v7;
    if ( sk_num(*(uint32_t *)(v67 + 68)) > 0 )
    {
      while ( 1 )
      {
        v25 = 0;
        v26 = sk_value(*v24, v53);
        v27 = *(uint32_t *)(v26 + 8);
        if ( v27 != 0 )
          break;
        if ( (v54 & 0x20) == 0 )
          goto LABEL_86;
LABEL_40:
        v30 = (uint32_t **)v58[6];
        if ( v30 == nullptr
          || (v31 = *v30, v32 = *(uint32_t **)v26, v60 = *(uint32_t **)v26, *v30 == nullptr)
          || v32 == nullptr )
        {
LABEL_94:
          v15 = (int)(uintptr_t)(v58);
          v7 = v68;
          goto LABEL_95;
        }
        if ( *v32 == 1 )
        {
          v45 = v32[2];
          if ( v45 == 0 )
            goto LABEL_86;
          if ( *v31 != 1 )
          {
            v46 = (int *)v31[1];
            goto LABEL_102;
          }
          if ( v31[2] != 0 && X509_NAME_cmp(v45, v31[2]) == 0 )
            goto LABEL_94;
        }
        else
        {
          v70 = 0;
          if ( *v31 == 1 )
          {
            v45 = v31[2];
            if ( v45 == 0 )
              goto LABEL_86;
            v46 = (int *)v60[1];
LABEL_102:
            v59 = v24;
            v71 = v26;
            v47 = 0;
            v48 = v45;
            v49 = v46;
            while ( v47 < sk_num((int)(uintptr_t)(v49)) )
            {
              v50 = (uint32_t *)sk_value(v49, v47);
              if ( *v50 == 4 && X509_NAME_cmp(v48, v50[1]) == 0 )
              {
                v15 = (int)(uintptr_t)(v58);
                v26 = v71;
                v7 = v68;
                goto LABEL_95;
              }
              ++v47;
            }
LABEL_85:
            v24 = v59;
            goto LABEL_86;
          }
          v73 = v24;
          v74 = v26;
LABEL_46:
          if ( v70 < sk_num(v60[1]) )
          {
            v33 = 0;
            v34 = sk_value((int *)v60[1], v70);
            while ( 1 )
            {
              if ( v33 >= sk_num(v31[1]) )
              {
                ++v70;
                goto LABEL_46;
              }
              v35 = sk_value((int *)v31[1], v33);
              if ( GENERAL_NAME_cmp(v34, v35) == 0 )
                break;
              ++v33;
            }
            v15 = (int)(uintptr_t)(v58);
            v26 = v74;
            v7 = v68;
LABEL_95:
            v72 &= *(uint32_t *)(v26 + 12);
            if ( (~v62 & v72) == 0 )
            {
LABEL_13:
              v54 = 0;
              goto LABEL_14;
            }
LABEL_91:
            v54 |= 0x80u;
            v62 |= v72;
            goto LABEL_14;
          }
          v24 = v73;
        }
LABEL_86:
        if ( ++v53 >= sk_num((int)(uintptr_t)(*v24)) )
          goto LABEL_87;
      }
      v59 = v24;
      v28 = *(uint32_t *)(*v58 + 8);
      while ( v25 < sk_num(v27) )
      {
        v29 = (uint32_t *)sk_value(*(int **)(v26 + 8), v25);
        if ( *v29 == 4 && X509_NAME_cmp(v29[1], v28) == 0 )
        {
          v24 = v59;
          goto LABEL_40;
        }
        ++v25;
        v27 = *(uint32_t *)(v26 + 8);
      }
      goto LABEL_85;
    }
LABEL_87:
    v15 = (int)(uintptr_t)(v58);
    v7 = v68;
    v44 = (uint32_t *)v58[6];
    if ( (v44 == nullptr || *v44 == 0) && (v54 & 0x20) != 0 )
    {
      if ( (~v62 & v72) == 0 )
        goto LABEL_13;
      goto LABEL_91;
    }
LABEL_14:
    if ( v61 < v54 )
    {
      v63 = v15;
      v66 = v64;
      v65 = v62;
      v61 = v54;
    }
    ++v56;
  }
  if ( v63 != 0 )
  {
    if ( *a2 != 0 )
      X509_CRL_free(*a2);
    *a2 = v63;
    *a4 = v66;
    *a5 = v61;
    *a6 = v65;
    CRYPTO_add_lock((uint32_t *)(v63 + 12), 1, 6, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( *a3 != 0 )
    {
      X509_CRL_free(*a3);
      *a3 = 0;
    }
    if ( (*(uint8_t *)(*(uint32_t *)(v7 + 20) + 13) & 0x20) != 0
      && ((*(uint16_t *)(*(uint32_t *)(v7 + 104) + 40) | *(uint16_t *)(v63 + 16)) & 0x1000) != 0 )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= sk_num((int)(uintptr_t)(a7)) )
        {
          *a3 = 0;
          return v61 > 447;
        }
        v41 = (uint32_t *)sk_value(a7, i);
        v42 = v41;
        if ( v41[10] != 0
          && *(uint32_t *)(v63 + 36) != 0
          && X509_NAME_cmp(*(uint32_t *)(*(uint32_t *)v63 + 8), *(uint32_t *)(*v41 + 8)) == 0
          && sub_19E0580((int)(uintptr_t)(v42), v63, 90)
          && sub_19E0580((int)(uintptr_t)(v42), v63, 770)
          && ASN1_INTEGER_cmp(v42[10], *(uint32_t *)(v63 + 36)) <= 0
          && ASN1_INTEGER_cmp(v42[9], *(uint32_t *)(v63 + 36)) > 0 )
        {
          break;
        }
      }
      if ( sub_19E0D50(v7, (int)(uintptr_t)(v42), 0) != 0 )
        *a5 |= 2u;
      CRYPTO_add_lock(v42 + 3, 1, 6, (int)(uintptr_t)(&unk_1B15112), 0);
      *a3 = (uint32_t)(uintptr_t)(v42);
    }
  }
  return v61 > 447;
}

// ----------------------------------------------------------------------------
// Function: sub_19E16D0  (binary VA: 0x19e16d0)
// Original: sub_19E16D0
// ----------------------------------------------------------------------------
int sub_19E16D0(int a1)
{
  int v1;
  int v2;
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  int (*v11)(int, int *, int);
  int *v12;
  int v13;
  typedef void **_g4_t_v14;
  typedef int _g4_t_issuer_name;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_issuer_name)) > _g4_s1 ? (4u + sizeof(_g4_t_issuer_name)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v17)) > _g4_s3 ? (12u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v18)) > _g4_s4 ? (24u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v19)) > _g4_s5 ? (28u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v20)) > _g4_s6 ? (32u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v21)) > _g4_s7 ? (36u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v22)) > _g4_s8 ? (40u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v23)) > _g4_s9 ? (44u + sizeof(_g4_t_v23)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_issuer_name &issuer_name = *reinterpret_cast<_g4_t_issuer_name *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);

  v1 = 1;
  v2 = *(uint32_t *)(*(uint32_t *)(a1 + 20) + 12);
  if ( (v2 & 4) == 0 )
    return v1;
  if ( (v2 & 8) != 0 )
  {
    v17 = sk_num(*(uint32_t *)(a1 + 84)) - 1;
    if ( v17 < 0 )
      return v1;
    goto LABEL_6;
  }
  if ( *(uint32_t *)(a1 + 124) == 0 )
  {
    v17 = 0;
LABEL_6:
    v4 = 0;
    while ( 1 )
    {
      *(uint32_t *)(a1 + 96) = v4;
      v5 = *(int **)(a1 + 84);
      v18 = 0;
      v6 = sk_value(v5, v4);
      *(uint32_t *)(a1 + 104) = v6;
      *(uint32_t *)(a1 + 108) = 0;
      *(uint32_t *)(a1 + 120) = 0;
      v16 = v4;
      while ( 1 )
      {
        v11 = *(int (**)(int, int *, int))(a1 + 48);
        if ( v11 == nullptr )
          break;
        if ( v11(a1, &v18, v6) == 0 )
          goto LABEL_25;
        v7 = v18;
        v8 = 0;
LABEL_10:
        *(uint32_t *)(a1 + 112) = v7;
        if ( (*(int (**)(int, int))(a1 + 52))(a1, v7) == 0 )
          goto LABEL_22;
        if ( v8 == 0 )
          goto LABEL_15;
        if ( (*(int (**)(int, int))(a1 + 52))(a1, v8) == 0
          || (v9 = (*(int (**)(int, int, int))(a1 + 56))(a1, v8, v6)) == 0 )
        {
LABEL_22:
          X509_CRL_free(v18);
          X509_CRL_free(v8);
          *(uint32_t *)(a1 + 112) = 0;
          return 0;
        }
        if ( v9 != 2 )
        {
LABEL_15:
          if ( (*(int (**)(int, int, int))(a1 + 56))(a1, v18, v6) == 0 )
            goto LABEL_22;
        }
        X509_CRL_free(v18);
        X509_CRL_free(v8);
        v10 = *(uint32_t *)(a1 + 120) == 32895;
        v18 = 0;
        if ( v10 )
        {
          v13 = v16;
          X509_CRL_free(0);
          X509_CRL_free(0);
          *(uint32_t *)(a1 + 112) = 0;
          goto LABEL_26;
        }
      }
      v19 = 0;
      v20 = 0;
      v22 = 0;
      v23[0] = 0;
      issuer_name = X509_get_issuer_name(v6);
      v21 = *(uint32_t *)(a1 + 120);
      if ( sub_19E0EA0(a1, &v22, v23, &v19, &v20, &v21, *(int **)(a1 + 16)) )
        break;
      v12 = (int *)(*(int (**)(int, int))(a1 + 68))(a1, issuer_name);
      if ( v12 == nullptr )
      {
        v7 = v22;
        if ( v22 != 0 )
          goto LABEL_20;
      }
      v14 = (void **)v12;
      sub_19E0EA0(a1, &v22, v23, &v19, &v20, &v21, v12);
      sk_pop_free(v14, (void (*)(uint32_t))X509_CRL_free);
      v7 = v22;
      if ( v22 != 0 )
        goto LABEL_20;
LABEL_25:
      *(uint32_t *)(a1 + 100) = 3;
      v13 = v16;
      v1 = (*(int (**)(uint32_t, int))(a1 + 32))(0, a1);
      X509_CRL_free(v18);
      X509_CRL_free(0);
      *(uint32_t *)(a1 + 112) = 0;
      if ( v1 == 0 )
        return v1;
LABEL_26:
      v4 = v13 + 1;
      if ( v17 < v4 )
        return 1;
    }
    v7 = v22;
    if ( v22 == 0 )
      goto LABEL_25;
LABEL_20:
    v18 = v7;
    *(uint32_t *)(a1 + 108) = v19;
    *(uint32_t *)(a1 + 116) = v20;
    *(uint32_t *)(a1 + 120) = v21;
    v8 = v23[0];
    goto LABEL_10;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_19E19F0  (binary VA: 0x19e19f0)
// Original: sub_19E19F0
// ----------------------------------------------------------------------------
int sub_19E19F0(int a1)
{
  int v1;
  int v2;
  int v3;
  uint32_t *v4;
  int result;
  int pubkey;
  void *v7;
  int v8;
  time_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int (*v15)(int, int);

  v15 = *(int (**)(int, int))(a1 + 32);
  v1 = sk_num(*(uint32_t *)(a1 + 84));
  v2 = v1 - 1;
  *(uint32_t *)(a1 + 96) = v1 - 1;
  v12 = v1;
  v3 = v1 - 1;
  v14 = sk_value(*(int **)(a1 + 84), v1 - 1);
  if ( (*(int (**)(int, int, int))(a1 + 40))(a1, v14, v14) != 0 )
  {
    result = 1;
    if ( v2 < 0 )
      return result;
    v4 = (uint32_t *)v14;
    v13 = v3;
  }
  else
  {
    if ( v2 <= 0 )
    {
      *(uint32_t *)(a1 + 100) = 21;
      *(uint32_t *)(a1 + 104) = v14;
      return v15(0, a1);
    }
    *(uint32_t *)(a1 + 96) = v12 - 2;
    v4 = (uint32_t *)sk_value(*(int **)(a1 + 84), v12 - 2);
    v13 = v12 - 2;
  }
  *(uint32_t *)(a1 + 96) = v13;
  if ( v4[3] != 0 )
    goto LABEL_11;
  if ( v4 == (uint32_t *)v14 )
    goto LABEL_23;
LABEL_8:
  pubkey = X509_get_pubkey(v14);
  v7 = (void *)pubkey;
  if ( pubkey != 0 )
  {
    if ( (int)X509_verify(v4, pubkey) <= 0 )
    {
      *(uint32_t *)(a1 + 100) = 7;
      *(uint32_t *)(a1 + 104) = (uint32_t)(uintptr_t)(v4);
      if ( v15(0, a1) == 0 )
      {
        EVP_PKEY_free(v7);
        return 0;
      }
    }
    goto LABEL_10;
  }
  *(uint32_t *)(a1 + 100) = 6;
  *(uint32_t *)(a1 + 104) = v14;
  result = v15(0, a1);
  if ( result != 0 )
  {
LABEL_10:
    EVP_PKEY_free(v7);
    while ( 1 )
    {
LABEL_11:
      v4[3] = 1;
      v8 = *(uint32_t *)(a1 + 20);
      v9 = nullptr;
      if ( (*(uint8_t *)(v8 + 12) & 2) != 0 )
        v9 = (time_t *)(v8 + 4);
      v10 = X509_cmp_time(**(int ***)(*v4 + 16), v9);
      if ( v10 != 0 )
      {
        if ( v10 <= 0 )
          goto LABEL_17;
        *(uint32_t *)(a1 + 100) = 9;
      }
      else
      {
        *(uint32_t *)(a1 + 100) = 13;
      }
      *(uint32_t *)(a1 + 104) = (uint32_t)(uintptr_t)(v4);
      if ( (*(int (**)(uint32_t, int))(a1 + 32))(0, a1) == 0 )
        return 0;
LABEL_17:
      v11 = X509_cmp_time(*(int **)(*(uint32_t *)(*v4 + 16) + 4), v9);
      if ( v11 != 0 )
      {
        if ( v11 >= 0 )
          goto LABEL_19;
        *(uint32_t *)(a1 + 100) = 10;
      }
      else
      {
        *(uint32_t *)(a1 + 100) = 14;
      }
      *(uint32_t *)(a1 + 104) = (uint32_t)(uintptr_t)(v4);
      if ( (*(int (**)(uint32_t, int))(a1 + 32))(0, a1) == 0 )
        return 0;
LABEL_19:
      *(uint32_t *)(a1 + 104) = (uint32_t)(uintptr_t)(v4);
      *(uint32_t *)(a1 + 108) = v14;
      result = v15(1, a1);
      if ( result == 0 )
        return result;
      if ( --v13 == -1 )
        return 1;
      v14 = (int)(uintptr_t)(v4);
      v4 = (uint32_t *)sk_value(*(int **)(a1 + 84), v13);
      *(uint32_t *)(a1 + 96) = v13;
      if ( v4[3] == 0 )
      {
        if ( v4 != (uint32_t *)v14 )
          goto LABEL_8;
LABEL_23:
        if ( (*(uint8_t *)(*(uint32_t *)(a1 + 20) + 13) & 0x40) != 0 )
          goto LABEL_8;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19E3360  (binary VA: 0x19e3360)
// Original: sub_19E3360
// ----------------------------------------------------------------------------
void * sub_19E3360(int a1, int a2)
{
  int v2;
  int v3;
  int pubkey;
  void *v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  typedef void *_g4_t_v16;
  typedef void *_g4_t_v17;
  typedef void *_g4_t_v18;
  typedef int *_g4_t_v19;
  typedef void *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int *_g4_t_v22;
  typedef uint32_t _g4_t_v23[37];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v18)) > _g4_s2 ? (8u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v19)) > _g4_s3 ? (8u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v20)) > _g4_s4 ? (8u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v21)) > _g4_s5 ? (12u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v22)) > _g4_s6 ? (12u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v23)) > _g4_s7 ? (24u + sizeof(_g4_t_v23)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);

  v21 = *(uint32_t *)(a1 + 96);
  v2 = sk_num(*(uint32_t *)(a1 + 84));
  v3 = *(uint32_t *)(a1 + 108);
  if ( v3 == 0 )
  {
    v10 = v2 - 1;
    if ( v21 >= v10 )
    {
      v3 = sk_value(*(int **)(a1 + 84), v10);
      if ( (*(int (**)(int, int, int))(a1 + 40))(a1, v3, v3) == 0 )
      {
        *(uint32_t *)(a1 + 100) = 33;
        v7 = (*(int (**)(uint32_t, int))(a1 + 32))(0, a1);
        v5 = nullptr;
        if ( v7 == 0 )
          goto LABEL_6;
      }
    }
    else
    {
      v3 = sk_value(*(int **)(a1 + 84), v21 + 1);
    }
    v5 = nullptr;
    v7 = 1;
    if ( v3 == 0 )
      goto LABEL_6;
  }
  if ( *(uint32_t *)(a2 + 40) != 0 )
    goto LABEL_3;
  if ( (*(uint8_t *)(v3 + 40) & 2) == 0
    || (*(uint8_t *)(v3 + 44) & 2) != 0
    || (*(uint32_t *)(a1 + 100) = 35, v7 = (*(int (**)(uint32_t, int))(a1 + 32))(0, a1), v5 = nullptr, v7 != 0) )
  {
    v11 = *(uint32_t *)(a1 + 116);
    if ( (v11 & 0x80u) == 0 )
    {
      *(uint32_t *)(a1 + 100) = 44;
      v7 = (*(int (**)(uint32_t, int))(a1 + 32))(0, a1);
      v5 = nullptr;
      if ( v7 == 0 )
        goto LABEL_6;
      v11 = *(uint32_t *)(a1 + 116);
    }
    if ( (v11 & 8) == 0 )
    {
      if ( *(uint32_t *)(a1 + 124) == 0
        && X509_STORE_CTX_init(v23, *(uint32_t **)a1, *(uint32_t *)(a1 + 108), *(uint32_t *)(a1 + 12)) != 0 )
      {
        v23[4] = *(uint32_t *)(a1 + 16);
        X509_STORE_CTX_set0_param((int)(uintptr_t)(v23), *(uint32_t *)(a1 + 20));
        v12 = *(uint32_t *)(a1 + 32);
        v23[31] = a1;
        v23[8] = v12;
        if ( X509_verify_cert((int)(uintptr_t)(v23)) > 0 )
        {
          v19 = *(int **)(a1 + 84);
          v22 = (int *)v23[21];
          v13 = sk_num((int)(uintptr_t)(v19));
          v20 = (void *)sk_value(v19, v13 - 1);
          v14 = sk_num((int)(uintptr_t)(v22));
          v15 = sk_value(v22, v14 - 1);
          if ( X509_cmp((int)(uintptr_t)(v20), v15) == 0 )
          {
            X509_STORE_CTX_cleanup((int)(uintptr_t)(v23));
            goto LABEL_22;
          }
        }
        X509_STORE_CTX_cleanup((int)(uintptr_t)(v23));
      }
      *(uint32_t *)(a1 + 100) = 54;
      v7 = (*(int (**)(uint32_t, int))(a1 + 32))(0, a1);
      v5 = nullptr;
      if ( v7 == 0 )
        goto LABEL_6;
    }
LABEL_22:
    if ( (*(uint8_t *)(a2 + 28) & 2) == 0
      || (*(uint32_t *)(a1 + 100) = 41, v7 = (*(int (**)(uint32_t, int))(a1 + 32))(0, a1), v5 = nullptr, v7 != 0) )
    {
LABEL_3:
      if ( (*(uint8_t *)(a1 + 116) & 0x40) != 0 )
      {
        pubkey = X509_get_pubkey(v3);
        v5 = (void *)pubkey;
        if ( pubkey != 0 )
        {
LABEL_5:
          v16 = (void *)pubkey;
          v6 = X509_CRL_verify(a2, pubkey);
          v5 = v16;
          v7 = 1;
          if ( v6 > 0 )
            goto LABEL_6;
          *(uint32_t *)(a1 + 100) = 8;
LABEL_11:
          v18 = v5;
          v9 = (*(int (**)(uint32_t, int))(a1 + 32))(0, a1);
          v5 = v18;
          v7 = v9 != 0;
          goto LABEL_6;
        }
      }
      else
      {
        v7 = sub_19E0D50(a1, a2, 1);
        v5 = nullptr;
        if ( v7 == 0 )
          goto LABEL_6;
        pubkey = X509_get_pubkey(v3);
        v5 = (void *)pubkey;
        if ( pubkey != 0 )
          goto LABEL_5;
      }
      *(uint32_t *)(a1 + 100) = 6;
      goto LABEL_11;
    }
  }
LABEL_6:
  v17 = (void *)v7;
  EVP_PKEY_free(v5);
  return v17;
}

// ----------------------------------------------------------------------------
// Function: sub_19E36E0  (binary VA: 0x19e36e0)
// Original: sub_19E36E0
// ----------------------------------------------------------------------------
int sub_19E36E0(const char **a1, const char **a2)
{
  return strcmp(*a1, *a2);
}

// ----------------------------------------------------------------------------
// Function: sub_19E3710  (binary VA: 0x19e3710)
// Original: sub_19E3710
// ----------------------------------------------------------------------------
int sub_19E3710(const char ***a1, const char ***a2)
{
  return strcmp(**a1, **a2);
}

// ----------------------------------------------------------------------------
// Function: NETSCAPE_SPKI_verify  (binary VA: 0x19e40b0)
// Original: NETSCAPE_SPKI_verify
// ----------------------------------------------------------------------------
int NETSCAPE_SPKI_verify(uint32_t *a1, int a2)
{
  return ASN1_item_verify(&NETSCAPE_SPKAC_it, a1[1], a1[2], *a1, a2);
}

// ----------------------------------------------------------------------------
// Function: NETSCAPE_SPKI_sign  (binary VA: 0x19e4220)
// Original: NETSCAPE_SPKI_sign
// ----------------------------------------------------------------------------
int NETSCAPE_SPKI_sign(uint32_t *a1, int a2, int a3)
{
  return ASN1_item_sign(&NETSCAPE_SPKAC_it, a1[1], 0, a1[2], *a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: sub_19E5430  (binary VA: 0x19e5430)
// Original: sub_19E5430
// ----------------------------------------------------------------------------
int sub_19E5430(int a1, int a2)
{
  return OBJ_cmp(*(uint32_t *)(*(uint32_t *)a1 + 4), *(uint32_t *)(*(uint32_t *)a2 + 4));
}

// ----------------------------------------------------------------------------
// Function: policy_cache_free  (binary VA: 0x19e5470)
// Original: policy_cache_free
// ----------------------------------------------------------------------------
int policy_cache_free(void *a1)
{
  int result;

  if ( a1 != nullptr )
  {
    if ( *(uint32_t *)a1 != 0 )
      policy_data_free(*(void **)a1);
    if ( *((uint32_t *)a1 + 1) != 0 )
      sk_pop_free(*((void ***)a1 + 1), (void (*)(uint32_t))policy_data_free);
    return CRYPTO_free(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: policy_cache_set  (binary VA: 0x19e54d0)
// Original: policy_cache_set
// ----------------------------------------------------------------------------
int policy_cache_set(int a1)
{
  int v1;
  int result;
  uint32_t *v3;
  uint32_t *v4;
  int *v5;
  void *v6;
  int *v7;
  int *v8;
  uint32_t *v9;
  int i;
  int v11;
  int v12;
  int v13;
  void *v14;
  typedef int *_g4_t_v15;
  typedef int *_g4_t_v16;
  typedef int **_g4_t_ext_d2i;
  typedef int *_g4_t_v18;
  typedef int *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t _g4_t_v23[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v16)) > _g4_s1 ? (0u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_ext_d2i)) > _g4_s2 ? (4u + sizeof(_g4_t_ext_d2i)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v18)) > _g4_s3 ? (8u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v19)) > _g4_s4 ? (12u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v20)) > _g4_s5 ? (16u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v21)) > _g4_s6 ? (20u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v22)) > _g4_s7 ? (20u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v23)) > _g4_s8 ? (44u + sizeof(_g4_t_v23)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_ext_d2i &ext_d2i = *reinterpret_cast<_g4_t_ext_d2i *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);

  v1 = a1;
  result = *(uint32_t *)(a1 + 64);
  if ( result == 0 )
  {
    CRYPTO_lock(9, 3, (int)(uintptr_t)(&unk_1B15112), 0);
    v3 = (uint32_t *)(CRYPTO_malloc(20, (int)(uintptr_t)(&unk_1B15112), 0));
    v4 = v3;
    if ( v3 == nullptr )
      goto LABEL_19;
    *v3 = 0;
    v3[1] = 0;
    v3[2] = -1;
    v3[3] = -1;
    v3[4] = -1;
    *(uint32_t *)(a1 + 64) = (uint32_t)(uintptr_t)(v3);
    ext_d2i = (int **)X509_get_ext_d2i(a1, 401, v23, 0);
    if ( ext_d2i == nullptr )
    {
      v8 = nullptr;
      if ( v23[0] != -1 )
        goto LABEL_22;
      goto LABEL_7;
    }
    if ( *ext_d2i != nullptr )
    {
      if ( (*ext_d2i)[1] == 258 )
        goto LABEL_21;
      v4[3] = ASN1_INTEGER_get(*ext_d2i);
      v5 = ext_d2i[1];
      if ( v5 == nullptr )
      {
LABEL_7:
        v19 = (int *)X509_get_ext_d2i(a1, 89, v23, 0);
        if ( v19 != nullptr )
        {
          v20 = v23[0];
          v18 = *(int **)(a1 + 64);
          v21 = 0;
          if ( sk_num((int)(uintptr_t)(v19)) != 0 )
          {
            v9 = sk_new((int)(uintptr_t)(sub_19E5430));
            v18[1] = (int)(uintptr_t)(v9);
            if ( v9 != nullptr )
            {
              v22 = v4;
              for ( i = 0; i < sk_num((int)(uintptr_t)(v19)); ++i )
              {
                v11 = sk_value(v19, i);
                v12 = (int)(uintptr_t)(policy_data_new(v11, 0, v20));
                v13 = v12;
                if ( v12 == 0 )
                {
                  v4 = v22;
                  v1 = a1;
                  v21 = 0;
                  goto LABEL_9;
                }
                if ( OBJ_obj2nid(*(uint32_t *)(v12 + 4)) == 746 )
                {
                  if ( *v18 != 0 )
                    goto LABEL_46;
                  *v18 = v13;
                }
                else
                {
                  if ( sk_find(v18[1], v13) != -1 )
                  {
LABEL_46:
                    v14 = (void *)v13;
                    v1 = a1;
                    v4 = v22;
                    v21 = -1;
                    *(uint32_t *)(a1 + 40) |= 0x800u;
                    goto LABEL_40;
                  }
                  if ( sk_push((int *)v18[1], v13) == 0 )
                  {
                    v4 = v22;
                    v14 = (void *)v13;
                    v1 = a1;
                    v21 = 0;
LABEL_40:
                    policy_data_free(v14);
                    goto LABEL_9;
                  }
                }
              }
              v4 = v22;
              v1 = a1;
              v21 = 1;
            }
          }
LABEL_9:
          sk_pop_free((void **)v19, (void (*)(uint32_t))POLICYINFO_free);
          if ( v21 == 1 )
          {
            v23[0] = 1;
            v6 = (void *)X509_get_ext_d2i(v1, 747, v23, 0);
            if ( v6 == nullptr )
            {
              v8 = nullptr;
              if ( v23[0] != -1 )
                goto LABEL_22;
              goto LABEL_12;
            }
            v23[0] = policy_cache_set_mapping(v1, v6);
            if ( v23[0] > 0 )
            {
LABEL_12:
              v7 = (int *)X509_get_ext_d2i(v1, 748, v23, 0);
              v8 = v7;
              if ( v7 != nullptr )
              {
                if ( v7[1] != 258 )
                {
                  v15 = v7;
                  v4[2] = ASN1_INTEGER_get(v7);
                  v8 = v15;
LABEL_15:
                  if ( ext_d2i != nullptr )
                  {
                    v16 = v8;
                    POLICY_CONSTRAINTS_free(ext_d2i);
                    v8 = v16;
                  }
                  if ( v8 != nullptr )
                    ASN1_INTEGER_free((char)(uintptr_t)(v8));
                  goto LABEL_19;
                }
              }
              else if ( v23[0] == -1 )
              {
                goto LABEL_15;
              }
LABEL_22:
              *(uint32_t *)(v1 + 40) |= 0x800u;
              goto LABEL_15;
            }
LABEL_21:
            v8 = nullptr;
            goto LABEL_22;
          }
          sk_pop_free((void **)v18[1], (void (*)(uint32_t))policy_data_free);
          v18[1] = 0;
          v23[0] = v21;
        }
        else
        {
          v8 = nullptr;
          if ( v23[0] != -1 )
            goto LABEL_22;
        }
LABEL_19:
        CRYPTO_lock(10, 3, (int)(uintptr_t)(&unk_1B15112), 0);
        return *(uint32_t *)(v1 + 64);
      }
    }
    else
    {
      v5 = ext_d2i[1];
      if ( v5 == nullptr )
        goto LABEL_21;
    }
    if ( v5[1] == 258 )
      goto LABEL_21;
    v4[4] = ASN1_INTEGER_get(v5);
    goto LABEL_7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: policy_cache_find_data  (binary VA: 0x19e5920)
// Original: policy_cache_find_data
// ----------------------------------------------------------------------------
int policy_cache_find_data(int a1, int a2)
{
  int v2;
  int result;
  typedef uint8_t _g4_t_v4[4];
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);

  v5 = a2;
  v2 = sk_find(*(uint32_t *)(a1 + 4), (int)(uintptr_t)(v4));
  result = 0;
  if ( v2 != -1 )
    return sk_value(*(int **)(a1 + 4), v2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: policy_data_free  (binary VA: 0x19e5980)
// Original: policy_data_free
// ----------------------------------------------------------------------------
int policy_data_free(void *a1)
{
  ASN1_OBJECT_free(*((void **)a1 + 1));
  if ( (*(uint8_t *)a1 & 4) == 0 )
    sk_pop_free(*((void ***)a1 + 2), (void (*)(uint32_t))POLICYQUALINFO_free);
  sk_pop_free(*((void ***)a1 + 3), (void (*)(uint32_t))ASN1_OBJECT_free);
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: policy_data_new  (binary VA: 0x19e59f0)
// Original: policy_data_new
// ----------------------------------------------------------------------------
uint32_t * policy_data_new(uint32_t *a1, int a2, int a3)
{
  size_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  void *v7;

  if ( a2 != 0 || (v4 = nullptr, a1 != nullptr) )
  {
    if ( a2 != 0 )
    {
      v3 = OBJ_dup(a2);
      if ( v3 == nullptr )
        return nullptr;
    }
    else
    {
      v3 = nullptr;
    }
    v4 = (uint32_t *)(CRYPTO_malloc(16, (int)(uintptr_t)(&unk_1B15112), 0));
    if ( v4 != nullptr )
    {
      v5 = sk_new_null();
      v4[3] = (uint32_t)(uintptr_t)(v5);
      if ( v5 != nullptr )
      {
        *v4 = a3 != 0 ? 0x10 : 0;
        if ( v3 != nullptr )
        {
          v4[1] = (uint32_t)(uintptr_t)(v3);
        }
        else
        {
          v4[1] = *a1;
          *a1 = 0;
        }
        if ( a1 != nullptr )
        {
          v4[2] = a1[1];
          a1[1] = 0;
        }
        else
        {
          v4[2] = 0;
        }
      }
      else
      {
        v7 = v4;
        v4 = nullptr;
        CRYPTO_free(v7);
        if ( v3 != nullptr )
          ASN1_OBJECT_free(v3);
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: policy_cache_set_mapping  (binary VA: 0x19e5b00)
// Original: policy_cache_set_mapping
// ----------------------------------------------------------------------------
int policy_cache_set_mapping(int a1, int *a2)
{
  int v2;
  int *v3;
  uint32_t *data;
  uint32_t *v5;
  int v6;
  int v7;
  int **v9;

  v2 = 0;
  v9 = *(int ***)(a1 + 64);
  if ( sk_num((int)(uintptr_t)(a2)) == 0 )
  {
LABEL_18:
    v7 = -1;
    *(uint32_t *)(a1 + 40) |= 0x800u;
    goto LABEL_16;
  }
  while ( 1 )
  {
    if ( v2 >= sk_num((int)(uintptr_t)(a2)) )
    {
      v7 = 1;
      goto LABEL_16;
    }
    v3 = (int *)sk_value(a2, v2);
    if ( OBJ_obj2nid(v3[1]) == 746 || OBJ_obj2nid(*v3) == 746 )
      goto LABEL_18;
    data = (uint32_t *)policy_cache_find_data((int)(uintptr_t)(v9), *v3);
    v5 = data;
    if ( data == nullptr )
      break;
    *data |= 1u;
LABEL_4:
    if ( sk_push((int *)v5[3], v3[1]) == 0 )
      goto LABEL_17;
    v3[1] = 0;
LABEL_6:
    ++v2;
  }
  if ( *v9 == nullptr )
    goto LABEL_6;
  v5 = policy_data_new(nullptr, *v3, **v9 & 0x10);
  if ( v5 != nullptr )
  {
    v6 = (*v9)[2];
    *v5 |= 6u;
    v5[2] = v6;
    if ( sk_push(v9[1], (int)(uintptr_t)(v5)) == 0 )
    {
      v7 = 0;
      policy_data_free(v5);
      goto LABEL_16;
    }
    goto LABEL_4;
  }
LABEL_17:
  v7 = 0;
LABEL_16:
  sk_pop_free((void **)a2, (void (*)(uint32_t))POLICY_MAPPING_free);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: sub_19E5C80  (binary VA: 0x19e5c80)
// Original: sub_19E5C80
// ----------------------------------------------------------------------------
uint8_t * sub_19E5C80(int *a1)
{
  uint8_t *result;

  result = (uint8_t *)*a1;
  if ( *a1 != 0 && (*result & 8) != 0 )
    return (uint8_t *)CRYPTO_free(a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19E5CB0  (binary VA: 0x19e5cb0)
// Original: sub_19E5CB0
// ----------------------------------------------------------------------------
int sub_19E5CB0(int a1, int a2, int a3, uint32_t **a4, int a5)
{
  int v5;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;

  v5 = a3;
  v7 = *a4;
  if ( a3 == 0 )
    v5 = v7[1];
  v8 = policy_data_new(nullptr, v5, *v7 & 0x10);
  v9 = 0;
  v10 = v8;
  if ( v8 != nullptr )
  {
    v11 = *(uint32_t *)(*(uint32_t *)a2 + 8);
    *v10 |= 4u;
    v10[2] = v11;
    v12 = level_add_node(a1, v10, a4, a5);
    v9 = 1;
    if ( v12 == 0 )
    {
      policy_data_free(v10);
      return 0;
    }
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: AUTHORITY_KEYID_new  (binary VA: 0x19e6a80)
// Original: AUTHORITY_KEYID_new
// ----------------------------------------------------------------------------
int AUTHORITY_KEYID_new()
{
  return ASN1_item_new((int)(uintptr_t)(&AUTHORITY_KEYID_it));
}

// ----------------------------------------------------------------------------
// Function: AUTHORITY_KEYID_free  (binary VA: 0x19e6ab0)
// Original: AUTHORITY_KEYID_free
// ----------------------------------------------------------------------------
int AUTHORITY_KEYID_free(char a1)
{
  return ASN1_item_free(a1, AUTHORITY_KEYID_it);
}

// ----------------------------------------------------------------------------
// Function: sub_19E6AE0  (binary VA: 0x19e6ae0)
// Original: sub_19E6AE0
// ----------------------------------------------------------------------------
int sub_19E6AE0(uint32_t *a1, int *a2, int a3)
{
  int result;
  int *v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  const char *v11;
  int v12;
  void *v13;
  int v14;
  int v15;
  int v17;
  int v19;
  int v20;

  v17 = 0;
  for ( result = sk_num((int)(uintptr_t)(a2)); v17 < result; result = sk_num((int)(uintptr_t)(a2)) )
  {
    v4 = (int *)sk_value(a2, v17);
    v5 = OBJ_obj2nid(*v4);
    if ( v5 == 164 )
    {
      BIO_printf(a3, v6, (int)(uintptr_t)(a1), "%*sCPS: %s\n", a3, &unk_1B15112, *(uint32_t *)(v4[1] + 8));
    }
    else if ( v5 == 165 )
    {
      BIO_printf(a3, v6, (int)(uintptr_t)(a1), "%*sUser Notice:\n", a3, &unk_1B15112);
      v20 = v4[1];
      v19 = a3 + 2;
      v8 = *(int **)v20;
      if ( *(uint32_t *)v20 != 0 )
      {
        BIO_printf(v19, v7, (int)(uintptr_t)(a1), "%*sOrganization: %s\n", v19, &unk_1B15112, *(uint32_t *)(*v8 + 8));
        v9 = sk_num(v8[1]);
        v11 = "s";
        if ( v9 < 2 )
          v11 = (const char *)&unk_1B15112;
        v12 = 0;
        BIO_printf(v19, v10, (int)(uintptr_t)(a1), "%*sNumber%s: ", v19, &unk_1B15112, v11);
        while ( v12 < sk_num(v8[1]) )
        {
          v14 = sk_value((int *)v8[1], v12);
          if ( v12 != 0 )
            BIO_puts(a1, (int)(uintptr_t)(", "));
          v13 = (void *)i2s_ASN1_INTEGER(0, v14);
          ++v12;
          BIO_puts(a1, (int)(uintptr_t)(v13));
          CRYPTO_free(v13);
        }
        BIO_puts(a1, (int)(uintptr_t)(&a0[1]));
      }
      v15 = *(uint32_t *)(v20 + 4);
      if ( v15 != 0 )
        BIO_printf(v19, v7, (int)(uintptr_t)(a1), "%*sExplicit Text: %s\n", v19, &unk_1B15112, *(uint32_t *)(v15 + 8));
    }
    else
    {
      BIO_printf((int)(uintptr_t)(&unk_1B15112), v6, (int)(uintptr_t)(a1), "%*sUnknown Qualifier: ", a3 + 2, &unk_1B15112);
      i2a_ASN1_OBJECT(a1, *v4);
      BIO_puts(a1, (int)(uintptr_t)(&a0[1]));
    }
    ++v17;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19E6D80  (binary VA: 0x19e6d80)
// Original: sub_19E6D80
// ----------------------------------------------------------------------------
int sub_19E6D80(int a1, int *a2, uint32_t *a3, int a4)
{
  int i;
  int v5;
  int *v6;
  uint32_t *v8;

  for ( i = 0; i < sk_num((int)(uintptr_t)(a2)); ++i )
  {
    v8 = (uint32_t *)sk_value(a2, i);
    BIO_printf((int)(uintptr_t)(v8), v5, (int)(uintptr_t)(a3), "%*sPolicy: ", a4, &unk_1B15112);
    i2a_ASN1_OBJECT(a3, *v8);
    BIO_puts(a3, (int)(uintptr_t)(&a0[1]));
    v6 = (int *)v8[1];
    if ( v6 != nullptr )
      sub_19E6AE0(a3, v6, a4 + 2);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: POLICYINFO_free  (binary VA: 0x19e6e50)
// Original: POLICYINFO_free
// ----------------------------------------------------------------------------
int POLICYINFO_free(char a1)
{
  return ASN1_item_free(a1, POLICYINFO_it);
}

// ----------------------------------------------------------------------------
// Function: CERTIFICATEPOLICIES_new  (binary VA: 0x19e6f00)
// Original: CERTIFICATEPOLICIES_new
// ----------------------------------------------------------------------------
int CERTIFICATEPOLICIES_new()
{
  return ASN1_item_new((int)(uintptr_t)(&CERTIFICATEPOLICIES_it));
}

// ----------------------------------------------------------------------------
// Function: CERTIFICATEPOLICIES_free  (binary VA: 0x19e6f30)
// Original: CERTIFICATEPOLICIES_free
// ----------------------------------------------------------------------------
int CERTIFICATEPOLICIES_free(char a1)
{
  return ASN1_item_free(a1, CERTIFICATEPOLICIES_it);
}

// ----------------------------------------------------------------------------
// Function: POLICYINFO_new  (binary VA: 0x19e6fe0)
// Original: POLICYINFO_new
// ----------------------------------------------------------------------------
int POLICYINFO_new()
{
  return ASN1_item_new((int)POLICYINFO_it);
}

// ----------------------------------------------------------------------------
// Function: POLICYQUALINFO_new  (binary VA: 0x19e7090)
// Original: POLICYQUALINFO_new
// ----------------------------------------------------------------------------
int POLICYQUALINFO_new()
{
  return ASN1_item_new((int)(uintptr_t)(&POLICYQUALINFO_it));
}

// ----------------------------------------------------------------------------
// Function: POLICYQUALINFO_free  (binary VA: 0x19e70c0)
// Original: POLICYQUALINFO_free
// ----------------------------------------------------------------------------
int POLICYQUALINFO_free(char a1)
{
  return ASN1_item_free(a1, POLICYQUALINFO_it);
}

// ----------------------------------------------------------------------------
// Function: USERNOTICE_new  (binary VA: 0x19e7170)
// Original: USERNOTICE_new
// ----------------------------------------------------------------------------
int USERNOTICE_new()
{
  return ASN1_item_new((int)(uintptr_t)(&USERNOTICE_it));
}

// ----------------------------------------------------------------------------
// Function: USERNOTICE_free  (binary VA: 0x19e71a0)
// Original: USERNOTICE_free
// ----------------------------------------------------------------------------
int USERNOTICE_free(char a1)
{
  return ASN1_item_free(a1, USERNOTICE_it);
}

// ----------------------------------------------------------------------------
// Function: NOTICEREF_new  (binary VA: 0x19e7250)
// Original: NOTICEREF_new
// ----------------------------------------------------------------------------
int NOTICEREF_new()
{
  return ASN1_item_new((int)(uintptr_t)(&NOTICEREF_it));
}

// ----------------------------------------------------------------------------
// Function: sub_19E7280  (binary VA: 0x19e7280)
// Original: sub_19E7280
// ----------------------------------------------------------------------------
int * sub_19E7280(int a1, int a2, char *a3)
{
  char **v3;
  int v4;
  char *v5;
  char **v6;
  int v7;
  int v8;
  char ***v9;
  char **v10;
  char *s;
  int v12;
  size_t v13;
  uint8_t *v15;
  int v16;
  int *v17;
  int v18;
  char *v19;
  size_t v20;
  int v21;
  int v22;
  int v23;
  void **v24;
  int *v25;
  int j;
  int v27;
  int v28;
  uint32_t *v29;
  char *v30;
  size_t v31;
  int *v32;
  int *v33;
  int v34;
  int *v35;
  int v36;
  int v37;
  int *section;
  int i;
  int v40;
  void **v41;
  int v42;
  char ***v43;
  int *v44;

  v44 = (int *)(sk_new_null());
  if ( v44 == nullptr )
  {
    ERR_put_error(34, 130, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return nullptr;
  }
  v41 = (void **)X509V3_parse_list(a3);
  if ( v41 == nullptr )
  {
    ERR_put_error(34, 130, 34, (int)(uintptr_t)(&unk_1B15112), 0);
    sk_pop_free(nullptr, (void (*)(uint32_t))X509V3_conf_free);
    goto LABEL_31;
  }
  v42 = 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= sk_num((int)(uintptr_t)(v41)) )
    {
      sk_pop_free(v41, (void (*)(uint32_t))X509V3_conf_free);
      return v44;
    }
    v4 = sk_value((int *)v41, i);
    if ( *(uint32_t *)(v4 + 8) != 0 || (v5 = *(char **)(v4 + 4)) == nullptr )
    {
      ERR_put_error(34, 130, 134, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_80;
    }
    if ( strcmp(*(const char **)(v4 + 4), "ia5org") == 0 )
    {
      v42 = 1;
      continue;
    }
    if ( *v5 != 64 )
    {
      v3 = OBJ_txt2obj(v5, 0);
      if ( v3 != nullptr )
      {
        v40 = POLICYINFO_new();
        *(uint32_t *)v40 = (uint32_t)(uintptr_t)(v3);
        goto LABEL_7;
      }
      ERR_put_error(34, 130, 110, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_80:
      ERR_add_error_data(6, "section:", *(uint32_t *)v4, ",name:", *(uint32_t *)(v4 + 4), ",value:", *(uint32_t *)(v4 + 8));
      goto LABEL_30;
    }
    section = (int *)X509V3_get_section(a2, v5 + 1);
    if ( section == nullptr )
    {
      ERR_put_error(34, 130, 135, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_80;
    }
    v40 = POLICYINFO_new();
    if ( v40 == 0 )
    {
LABEL_28:
      ERR_put_error(34, 131, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_29;
    }
    v36 = 0;
LABEL_20:
    if ( v36 < sk_num((int)(uintptr_t)(section)) )
      break;
    if ( *(uint32_t *)v40 == 0 )
    {
      ERR_put_error(34, 131, 139, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_29;
    }
    X509V3_section_free(a2, section);
LABEL_7:
    if ( sk_push(v44, v40) == 0 )
    {
      POLICYINFO_free(v40);
      ERR_put_error(34, 130, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_30;
    }
  }
  v7 = sk_value(section, v36);
  if ( strcmp(*(const char **)(v7 + 4), "policyIdentifier") == 0 )
  {
    v6 = OBJ_txt2obj(*(char **)(v7 + 8), 0);
    if ( v6 != nullptr )
    {
      *(uint32_t *)v40 = (uint32_t)(uintptr_t)(v6);
      goto LABEL_19;
    }
    ERR_put_error(34, 131, 110, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_84:
    ERR_add_error_data(6, "section:", *(uint32_t *)v7, ",name:", *(uint32_t *)(v7 + 4), ",value:", *(uint32_t *)(v7 + 8));
    goto LABEL_29;
  }
  if ( name_cmp(*(char **)(v7 + 4), "CPS") == 0 )
  {
    if ( *(uint32_t *)(v40 + 4) == 0 )
      *(uint32_t *)(v40 + 4) = (uint32_t)(uintptr_t)(sk_new_null());
    v8 = POLICYQUALINFO_new();
    v9 = (char ***)v8;
    if ( v8 == 0 )
      goto LABEL_28;
    if ( sk_push(*(int **)(v40 + 4), v8) == 0 )
      goto LABEL_28;
    *v9 = OBJ_nid2obj(0xA4u);
    v10 = (char **)ASN1_STRING_type_new(22);
    v9[1] = v10;
    s = *(char **)(v7 + 8);
    v12 = (int)(uintptr_t)(v10);
    v13 = strlen(s);
    if ( ASN1_STRING_set(v12, s, v13) == 0 )
      goto LABEL_28;
    goto LABEL_19;
  }
  if ( name_cmp(*(char **)(v7 + 4), "userNotice") != 0 )
  {
    ERR_put_error(34, 131, 138, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_84;
  }
  v15 = *(uint8_t **)(v7 + 8);
  if ( *v15 != 64 )
  {
    ERR_put_error(34, 131, 137, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_84;
  }
  v35 = (int *)X509V3_get_section(a2, v15 + 1);
  if ( v35 == nullptr )
  {
    ERR_put_error(34, 131, 135, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_84;
  }
  v43 = (char ***)POLICYQUALINFO_new();
  if ( v43 == nullptr || (*v43 = OBJ_nid2obj(0xA5u), v16 = USERNOTICE_new(), v37 = v16, v16 == 0) )
  {
LABEL_58:
    ERR_put_error(34, 132, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_59;
  }
  v34 = 0;
  v43[1] = (char **)v16;
  while ( 1 )
  {
    if ( v34 >= sk_num((int)(uintptr_t)(v35)) )
    {
      v32 = *(int **)v37;
      if ( *(uint32_t *)v37 != 0 && (v32[1] == 0 || *v32 == 0) )
      {
        ERR_put_error(34, 132, 142, (int)(uintptr_t)(&unk_1B15112), 0);
        goto LABEL_59;
      }
      X509V3_section_free(a2, v35);
      v33 = *(int **)(v40 + 4);
      if ( v33 == nullptr )
      {
        v33 = (int *)(sk_new_null());
        *(uint32_t *)(v40 + 4) = (uint32_t)(uintptr_t)(v33);
      }
      if ( sk_push(v33, (int)(uintptr_t)(v43)) == 0 )
        goto LABEL_28;
LABEL_19:
      ++v36;
      goto LABEL_20;
    }
    v21 = sk_value(v35, v34);
    if ( strcmp(*(const char **)(v21 + 4), "explicitText") == 0 )
    {
      v29 = ASN1_STRING_type_new(26);
      *(uint32_t *)(v37 + 4) = (uint32_t)(uintptr_t)(v29);
      v30 = *(char **)(v21 + 8);
      v31 = strlen(v30);
      if ( ASN1_STRING_set((int)(uintptr_t)(v29), v30, v31) == 0 )
        goto LABEL_58;
      goto LABEL_43;
    }
    if ( strcmp(*(const char **)(v21 + 4), "organization") != 0 )
      break;
    v17 = *(int **)v37;
    if ( *(uint32_t *)v37 == 0 )
    {
      v17 = (int *)NOTICEREF_new();
      if ( v17 == nullptr )
        goto LABEL_58;
      *(uint32_t *)v37 = (uint32_t)(uintptr_t)(v17);
    }
    v18 = *v17;
    if ( v42 != 0 )
      *(uint32_t *)(v18 + 4) = 22;
    else
      *(uint32_t *)(v18 + 4) = 26;
    v19 = *(char **)(v21 + 8);
    v20 = strlen(v19);
    if ( ASN1_STRING_set(*v17, v19, v20) == 0 )
      goto LABEL_58;
LABEL_43:
    ++v34;
  }
  if ( strcmp(*(const char **)(v21 + 4), "noticeNumbers") != 0 )
  {
    ERR_put_error(34, 132, 138, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_76;
  }
  v22 = *(uint32_t *)v37;
  if ( *(uint32_t *)v37 == 0 )
  {
    v22 = NOTICEREF_new();
    if ( v22 == 0 )
      goto LABEL_58;
    *(uint32_t *)v37 = v22;
  }
  v23 = (int)(uintptr_t)(X509V3_parse_list(*(char **)(v21 + 8)));
  v24 = (void **)v23;
  if ( v23 == 0 || sk_num(v23) == 0 )
  {
    ERR_put_error(34, 132, 141, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_76:
    ERR_add_error_data(6, "section:", *(uint32_t *)v21, ",name:", *(uint32_t *)(v21 + 4), ",value:", *(uint32_t *)(v21 + 8));
    goto LABEL_59;
  }
  v25 = *(int **)(v22 + 4);
  for ( j = 0; ; ++j )
  {
    if ( j >= sk_num((int)(uintptr_t)(v24)) )
    {
      sk_pop_free(v24, (void (*)(uint32_t))X509V3_conf_free);
      goto LABEL_43;
    }
    v27 = sk_value((int *)v24, j);
    v28 = (int)(uintptr_t)(s2i_ASN1_INTEGER(0, *(uint32_t *)(v27 + 4)));
    if ( v28 == 0 )
    {
      ERR_put_error(34, 133, 140, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_62;
    }
    if ( sk_push(v25, v28) == 0 )
      break;
  }
  ERR_put_error(34, 133, 65, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_62:
  sk_pop_free((void **)v25, (void (*)(uint32_t))((int (*)(void **))ASN1_STRING_free));
  sk_pop_free(v24, (void (*)(uint32_t))X509V3_conf_free);
LABEL_59:
  POLICYQUALINFO_free((char)(uintptr_t)(v43));
  X509V3_section_free(a2, v35);
LABEL_29:
  POLICYINFO_free(v40);
  X509V3_section_free(a2, section);
LABEL_30:
  sk_pop_free(v41, (void (*)(uint32_t))X509V3_conf_free);
LABEL_31:
  sk_pop_free((void **)v44, (void (*)(uint32_t))POLICYINFO_free);
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: NOTICEREF_free  (binary VA: 0x19e7ca0)
// Original: NOTICEREF_free
// ----------------------------------------------------------------------------
int NOTICEREF_free(char a1)
{
  return ASN1_item_free(a1, NOTICEREF_it);
}

// ----------------------------------------------------------------------------
// Function: sub_19E7DE0  (binary VA: 0x19e7de0)
// Original: sub_19E7DE0
// ----------------------------------------------------------------------------
int sub_19E7DE0(int a1, int *a2)
{
  int v2;

  v2 = *a2;
  if ( a1 == 1 )
  {
    *(uint32_t *)(v2 + 8) = 0;
    return 1;
  }
  else if ( a1 == 3 && *(uint32_t *)(v2 + 8) != 0 )
  {
    X509_NAME_free(*(uint32_t *)(v2 + 8));
    return 1;
  }
  else
  {
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_19E7E50  (binary VA: 0x19e7e50)
// Original: sub_19E7E50
// ----------------------------------------------------------------------------
int sub_19E7E50(uint32_t *a1, int *a2, int a3)
{
  int i;
  int v6;
  int v7;
  int v8;

  for ( i = 0; i < sk_num((int)(uintptr_t)(a2)); ++i )
  {
    BIO_printf(v7, v8, (int)(uintptr_t)(a1), "%*s", a3 + 2, &unk_1B15112);
    v6 = sk_value(a2, i);
    GENERAL_NAME_print(a1, v6);
    BIO_puts(a1, (int)(uintptr_t)(&a0[1]));
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19E7EF0  (binary VA: 0x19e7ef0)
// Original: sub_19E7EF0
// ----------------------------------------------------------------------------
int sub_19E7EF0(int *a1, char *a2)
{
  int result;
  char *v3;
  const char *s2;
  const char **v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  char *v10;
  int v11;
  int *v12;

  v12 = (int *)X509V3_parse_list(a2);
  result = 0;
  if ( v12 != nullptr && *a1 == 0 )
  {
    v11 = 0;
    v3 = (char *)&unk_2045780;
    while ( v11 < sk_num((int)(uintptr_t)(v12)) )
    {
      s2 = *(const char **)(sk_value(v12, v11) + 4);
      if ( *a1 == 0 )
      {
        v7 = ASN1_BIT_STRING_new();
        *a1 = v7;
        if ( v7 == 0 )
          goto LABEL_14;
      }
      v5 = (const char **)v3;
      v10 = v3;
      v6 = v3 + 12;
      while ( strcmp(v5[2], s2) != 0 )
      {
        v5 += 3;
        if ( *(uint32_t *)&v6[(char *)v5 - v10 - 8] == 0 )
          goto LABEL_14;
      }
      v3 = v10;
      if ( ASN1_BIT_STRING_set_bit(*a1, *v5, 1) == 0 || v5[1] == nullptr )
      {
LABEL_14:
        v8 = 0;
        goto LABEL_15;
      }
      ++v11;
    }
    v8 = 1;
LABEL_15:
    v9 = v8;
    sk_pop_free((void **)v12, (void (*)(uint32_t))X509V3_conf_free);
    return v9;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: DIST_POINT_free  (binary VA: 0x19e8020)
// Original: DIST_POINT_free
// ----------------------------------------------------------------------------
int DIST_POINT_free(char a1)
{
  return ASN1_item_free(a1, DIST_POINT_it);
}

// ----------------------------------------------------------------------------
// Function: sub_19E8050  (binary VA: 0x19e8050)
// Original: sub_19E8050
// ----------------------------------------------------------------------------
int sub_19E8050(uint32_t *a1, int a2, int a3, int **a4, int a5)
{
  typedef int *_g4_t_v7;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  if ( a2 != 0 )
  {
    v7 = *a4;
    BIO_printf(a5 + 2, a3, (int)(uintptr_t)(a1), "%*sRelative Name:\n%*s", a5, &unk_1B15112, a5 + 2, &unk_1B15112);
    X509_NAME_print_ex(a1, &v7, 0, ((uint8_t *)(uintptr_t)0x82031Fu));
    BIO_puts(a1, (int)(uintptr_t)(&a0[1]));
  }
  else
  {
    BIO_printf(0, a3, (int)(uintptr_t)(a1), "%*sFull Name:\n", a5, &unk_1B15112);
    sub_19E7E50(a1, *a4, a5);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19E8130  (binary VA: 0x19e8130)
// Original: sub_19E8130
// ----------------------------------------------------------------------------
int sub_19E8130(uint32_t *a1, const char *a2, int a3, int a4)
{
  int v4;
  uint32_t *v6;

  v4 = 1;
  v6 = (uint32_t *)(&unk_2045780);
  BIO_printf(
    (int)(uintptr_t)(a2),
    (int)(uintptr_t)(&unk_1B15112),
    (int)(uintptr_t)(a1),
    "%*s%s:\n%*s",
    a4,
    (const char *)&unk_1B15112,
    a2,
    a4 + 2,
    (const char *)&unk_1B15112);
  do
  {
    if ( ASN1_BIT_STRING_get_bit(a3, *v6) != 0 )
    {
      if ( v4 == 0 )
        BIO_puts(a1, (int)(uintptr_t)(", "));
      v4 = 0;
      BIO_puts(a1, v6[1]);
    }
    v6 += 3;
  }
  while ( v6[1] != 0 );
  if ( v4 != 0 )
    BIO_puts(a1, (int)(uintptr_t)("<EMPTY>\n"));
  else
    BIO_puts(a1, (int)(uintptr_t)(&a0[1]));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19E8220  (binary VA: 0x19e8220)
// Original: sub_19E8220
// ----------------------------------------------------------------------------
int sub_19E8220(int a1, int *a2, uint32_t *a3, int a4)
{
  int i;
  int v5;
  int v6;
  int v7;

  for ( i = 0; i < sk_num((int)(uintptr_t)(a2)); ++i )
  {
    BIO_puts(a3, (int)(uintptr_t)(&a0[1]));
    v7 = sk_value(a2, i);
    if ( *(uint32_t *)v7 != 0 )
      sub_19E8050(a3, **(uint32_t **)v7, v6, (int **)(*(uint32_t *)v7 + 4), a4);
    if ( *(uint32_t *)(v7 + 4) != 0 )
      sub_19E8130(a3, "Reasons", *(uint32_t *)(v7 + 4), a4);
    if ( *(uint32_t *)(v7 + 8) != 0 )
    {
      BIO_printf(v5, v6, (int)(uintptr_t)(a3), "%*sCRL Issuer:\n", a4, &unk_1B15112);
      sub_19E7E50(a3, *(int **)(v7 + 8), a4);
    }
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19E8310  (binary VA: 0x19e8310)
// Original: sub_19E8310
// ----------------------------------------------------------------------------
int sub_19E8310(int a1, int a2, int a3, int a4, uint32_t *a5, int a6)
{
  int v7;

  if ( *(uint32_t *)a4 != 0 )
    sub_19E8050(a5, **(uint32_t **)a4, a1, (int **)(*(uint32_t *)a4 + 4), a6);
  if ( *(int *)(a4 + 4) > 0 )
    BIO_printf(a2, a1, (int)(uintptr_t)(a5), "%*sOnly User Certificates\n", a6, &unk_1B15112);
  if ( *(int *)(a4 + 8) > 0 )
    BIO_printf(a2, a1, (int)(uintptr_t)(a5), "%*sOnly CA Certificates\n", a6, &unk_1B15112);
  if ( *(int *)(a4 + 16) > 0 )
    BIO_printf(a2, a1, (int)(uintptr_t)(a5), "%*sIndirect CRL\n", a6, &unk_1B15112);
  if ( *(uint32_t *)(a4 + 12) != 0 )
    sub_19E8130(a5, "Only Some Reasons", *(uint32_t *)(a4 + 12), a6);
  if ( *(int *)(a4 + 20) > 0 )
    BIO_printf(a2, a1, (int)(uintptr_t)(a5), "%*sOnly Attribute Certificates\n", a6, &unk_1B15112);
  if ( *(uint32_t *)a4 == 0 )
  {
    v7 = *(uint32_t *)(a4 + 4);
    if ( v7 <= 0
      && *(int *)(a4 + 8) <= 0
      && *(int *)(a4 + 16) <= 0
      && *(uint32_t *)(a4 + 12) == 0
      && *(int *)(a4 + 20) <= 0 )
    {
      BIO_printf(v7, 0, (int)(uintptr_t)(a5), "%*s<EMPTY>\n", a6, &unk_1B15112);
    }
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19E8480  (binary VA: 0x19e8480)
// Original: sub_19E8480
// ----------------------------------------------------------------------------
int sub_19E8480(int a1, char *a2)
{
  void **section;
  int v6;

  if ( *a2 == 64 )
    section = (void **)X509V3_get_section(a1, a2 + 1);
  else
    section = (void **)X509V3_parse_list(a2);
  if ( section != nullptr )
  {
    v6 = (int)(uintptr_t)(v2i_GENERAL_NAMES(0, a1, section));
    if ( *a2 == 64 )
      X509V3_section_free(a1, section);
    else
      sk_pop_free(section, (void (*)(uint32_t))X509V3_conf_free);
    return v6;
  }
  else
  {
    ERR_put_error(34, 156, 150, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: DIST_POINT_NAME_new  (binary VA: 0x19e85f0)
// Original: DIST_POINT_NAME_new
// ----------------------------------------------------------------------------
int DIST_POINT_NAME_new()
{
  return ASN1_item_new((int)(uintptr_t)(&DIST_POINT_NAME_it));
}

// ----------------------------------------------------------------------------
// Function: sub_19E8620  (binary VA: 0x19e8620)
// Original: sub_19E8620
// ----------------------------------------------------------------------------
int sub_19E8620(int a1, int a2, const char *a3, char **a4)
{
  int result;
  void ***v6;
  int section;
  int v8;
  void **v9;
  void **v10;
  int v11;
  uint32_t *v12;
  int v13;

  if ( strcmp(a3, "fullname") == 0 )
  {
    v9 = nullptr;
    v10 = (void **)sub_19E8480(a2, *a4);
    if ( v10 == nullptr )
      return -1;
  }
  else
  {
    result = 0;
    if ( strcmp(a3, "relativename") != 0 )
      return result;
    v6 = (void ***)X509_NAME_new();
    if ( v6 == nullptr )
      return -1;
    section = X509V3_get_section(a2, *a4);
    v8 = section;
    if ( section == 0 )
    {
      ERR_put_error(34, 158, 150, (int)(uintptr_t)(&unk_1B15112), 0);
      return -1;
    }
    v13 = X509V3_NAME_from_section(v6, section, 4097);
    X509V3_section_free(a2, v8);
    v9 = *v6;
    *v6 = nullptr;
    X509_NAME_free((char)(uintptr_t)(v6));
    if ( v13 == 0 || sk_num((int)(uintptr_t)(v9)) <= 0 )
    {
LABEL_6:
      if ( v9 != nullptr )
      {
LABEL_7:
        sk_pop_free(v9, (void (*)(uint32_t))X509_NAME_ENTRY_free);
        return -1;
      }
      return -1;
    }
    v10 = nullptr;
    v11 = sk_num((int)(uintptr_t)(v9));
    if ( *(uint32_t *)(sk_value((int *)v9, v11 - 1) + 8) != 0 )
    {
      ERR_put_error(34, 158, 161, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_6;
    }
  }
  if ( *(uint32_t *)a1 != 0 )
  {
    ERR_put_error(34, 158, 160, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_11:
    if ( v10 == nullptr )
      goto LABEL_6;
    sk_pop_free(v10, (void (*)(uint32_t))GENERAL_NAME_free);
    if ( v9 != nullptr )
      goto LABEL_7;
    return -1;
  }
  v12 = (uint32_t *)DIST_POINT_NAME_new();
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v12);
  if ( v12 == nullptr )
    goto LABEL_11;
  if ( v10 != nullptr )
  {
    *v12 = 0;
    *(uint32_t *)(*(uint32_t *)a1 + 4) = (uint32_t)(uintptr_t)(v10);
  }
  else
  {
    *v12 = 1;
    *(uint32_t *)(*(uint32_t *)a1 + 4) = (uint32_t)(uintptr_t)(v9);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: DIST_POINT_NAME_free  (binary VA: 0x19e8890)
// Original: DIST_POINT_NAME_free
// ----------------------------------------------------------------------------
int DIST_POINT_NAME_free(char a1)
{
  return ASN1_item_free(a1, DIST_POINT_NAME_it);
}

// ----------------------------------------------------------------------------
// Function: DIST_POINT_new  (binary VA: 0x19e8940)
// Original: DIST_POINT_new
// ----------------------------------------------------------------------------
int DIST_POINT_new()
{
  return ASN1_item_new((int)DIST_POINT_it);
}

// ----------------------------------------------------------------------------
// Function: sub_19E8970  (binary VA: 0x19e8970)
// Original: sub_19E8970
// ----------------------------------------------------------------------------
int * sub_19E8970(int a1, int a2, int *a3)
{
  int v3;
  int *v4;
  int *v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char v15;
  int v16;
  int *section;
  int v18;
  int i;
  int *v20;
  int *v21;

  v20 = (int *)(sk_new_null());
  if ( v20 != nullptr )
  {
    for ( i = 0; i < sk_num((int)(uintptr_t)(a3)); ++i )
    {
      v9 = sk_value(a3, i);
      if ( *(uint32_t *)(v9 + 8) != 0 )
      {
        v3 = (int)(uintptr_t)(v2i_GENERAL_NAME(a1, a2, v9));
        if ( v3 == 0 )
        {
          v5 = nullptr;
          goto LABEL_30;
        }
        v4 = (int *)GENERAL_NAMES_new();
        v5 = v4;
        if ( v4 == nullptr || sk_push(v4, v3) == 0 )
          goto LABEL_29;
        v6 = DIST_POINT_new();
        v7 = (int *)v6;
        if ( v6 == 0 )
        {
LABEL_34:
          v3 = 0;
          goto LABEL_29;
        }
        if ( sk_push(v20, v6) == 0 )
        {
          v15 = (char)(uintptr_t)(v7);
          v3 = 0;
          DIST_POINT_free(v15);
          goto LABEL_29;
        }
        v8 = DIST_POINT_NAME_new();
        *v7 = v8;
        if ( v8 == 0 )
          goto LABEL_34;
        *(uint32_t *)(v8 + 4) = (uint32_t)(uintptr_t)(v5);
        *(uint32_t *)*v7 = 0;
      }
      else
      {
        section = (int *)X509V3_get_section(a2, *(uint32_t *)(v9 + 4));
        if ( section == nullptr )
          goto LABEL_25;
        v10 = DIST_POINT_new();
        v18 = v10;
        if ( v10 == 0 )
        {
LABEL_24:
          X509V3_section_free(a2, section);
LABEL_25:
          v3 = 0;
          v5 = nullptr;
          goto LABEL_30;
        }
        v16 = 0;
        v21 = (int *)(v10 + 4);
        while ( v16 < sk_num((int)(uintptr_t)(section)) )
        {
          v11 = sk_value(section, v16);
          v12 = sub_19E8620(v18, a2, *(const char **)(v11 + 4), (char **)(v11 + 8));
          if ( v12 <= 0 )
          {
            if ( v12 != 0 )
              goto LABEL_23;
            if ( strcmp(*(const char **)(v11 + 4), "reasons") == 0 )
            {
              if ( sub_19E7EF0(v21, *(char **)(v11 + 8)) == 0 )
                goto LABEL_23;
            }
            else if ( strcmp(*(const char **)(v11 + 4), "CRLissuer") == 0 )
            {
              v13 = sub_19E8480(a2, *(char **)(v11 + 8));
              *(uint32_t *)(v18 + 8) = v13;
              if ( v13 == 0 )
              {
LABEL_23:
                DIST_POINT_free(v18);
                goto LABEL_24;
              }
            }
          }
          ++v16;
        }
        X509V3_section_free(a2, section);
        if ( sk_push(v20, v18) == 0 )
        {
          v3 = 0;
          v5 = nullptr;
          DIST_POINT_free(v18);
          goto LABEL_29;
        }
      }
    }
  }
  else
  {
    v3 = 0;
    v5 = nullptr;
LABEL_29:
    ERR_put_error(34, 134, 65, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_30:
    GENERAL_NAME_free(v3);
    GENERAL_NAMES_free(v5);
    sk_pop_free((void **)v20, (void (*)(uint32_t))DIST_POINT_free);
    return nullptr;
  }
  return v20;
}

// ----------------------------------------------------------------------------
// Function: CRL_DIST_POINTS_new  (binary VA: 0x19e8cf0)
// Original: CRL_DIST_POINTS_new
// ----------------------------------------------------------------------------
int CRL_DIST_POINTS_new()
{
  return ASN1_item_new((int)(uintptr_t)(&CRL_DIST_POINTS_it));
}

// ----------------------------------------------------------------------------
// Function: CRL_DIST_POINTS_free  (binary VA: 0x19e8d20)
// Original: CRL_DIST_POINTS_free
// ----------------------------------------------------------------------------
int CRL_DIST_POINTS_free(char a1)
{
  return ASN1_item_free(a1, CRL_DIST_POINTS_it);
}

// ----------------------------------------------------------------------------
// Function: ISSUING_DIST_POINT_new  (binary VA: 0x19e8dd0)
// Original: ISSUING_DIST_POINT_new
// ----------------------------------------------------------------------------
int ISSUING_DIST_POINT_new()
{
  return ASN1_item_new((int)(uintptr_t)(&ISSUING_DIST_POINT_it));
}

// ----------------------------------------------------------------------------
// Function: ISSUING_DIST_POINT_free  (binary VA: 0x19e8e00)
// Original: ISSUING_DIST_POINT_free
// ----------------------------------------------------------------------------
int ISSUING_DIST_POINT_free(char a1)
{
  return ASN1_item_free(a1, ISSUING_DIST_POINT_it);
}

// ----------------------------------------------------------------------------
// Function: sub_19E8E30  (binary VA: 0x19e8e30)
// Original: sub_19E8E30
// ----------------------------------------------------------------------------
int sub_19E8E30(int a1, int a2, int *a3)
{
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;
  const char *v9;
  int v10;
  char *v11;
  int *v12;

  v3 = ISSUING_DIST_POINT_new();
  v10 = v3;
  if ( v3 != 0 )
  {
    v8 = 0;
    v12 = (int *)(v3 + 12);
    while ( 1 )
    {
      if ( v8 >= sk_num((int)(uintptr_t)(a3)) )
        return v10;
      v4 = sk_value(a3, v8);
      v9 = *(const char **)(v4 + 4);
      v11 = *(char **)(v4 + 8);
      v5 = sub_19E8620(v10, a2, v9, (char **)(v4 + 8));
      if ( v5 <= 0 )
      {
        if ( v5 != 0 )
          goto LABEL_13;
        if ( strcmp(v9, "onlyuser") == 0 )
        {
          v7 = v10 + 4;
          goto LABEL_16;
        }
        if ( strcmp(v9, "onlyCA") == 0 )
        {
          v7 = v10 + 8;
          goto LABEL_16;
        }
        if ( strcmp(v9, "onlyAA") == 0 )
        {
          v7 = v10 + 20;
          goto LABEL_16;
        }
        if ( strcmp(v9, "indirectCRL") == 0 )
        {
          v7 = v10 + 16;
LABEL_16:
          if ( X509V3_get_value_bool(v4, v7) == 0 )
            goto LABEL_13;
          goto LABEL_3;
        }
        if ( strcmp(v9, "onlysomereasons") != 0 )
        {
          ERR_put_error(34, 157, 106, (int)(uintptr_t)(&unk_1B15112), 0);
          ERR_add_error_data(
            6,
            "section:",
            *(uint32_t *)v4,
            ",name:",
            *(uint32_t *)(v4 + 4),
            ",value:",
            *(uint32_t *)(v4 + 8));
          goto LABEL_13;
        }
        if ( sub_19E7EF0(v12, v11) == 0 )
          goto LABEL_13;
      }
LABEL_3:
      ++v8;
    }
  }
  ERR_put_error(34, 157, 65, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_13:
  ISSUING_DIST_POINT_free(v10);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: DIST_POINT_set_dpname  (binary VA: 0x19e9070)
// Original: DIST_POINT_set_dpname
// ----------------------------------------------------------------------------
int DIST_POINT_set_dpname(uint32_t *a1, int a2)
{
  int result;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;

  result = 1;
  if ( a1 != nullptr && *a1 == 1 )
  {
    v3 = (int *)a1[1];
    v4 = 0;
    v5 = X509_NAME_dup(a2);
    a1[2] = v5;
    result = 0;
    if ( v5 != 0 )
    {
      while ( v4 < sk_num((int)(uintptr_t)(v3)) )
      {
        v6 = sk_value(v3, v4);
        if ( X509_NAME_add_entry(a1[2], v6, -1, v4 == 0) == 0 )
          goto LABEL_10;
        ++v4;
      }
      v7 = i2d_X509_NAME(a1[2], nullptr);
      result = 1;
      if ( v7 >= 0 )
        return result;
LABEL_10:
      X509_NAME_free(a1[2]);
      a1[2] = 0;
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OTHERNAME_new  (binary VA: 0x19e9260)
// Original: OTHERNAME_new
// ----------------------------------------------------------------------------
int OTHERNAME_new()
{
  return ASN1_item_new((int)(uintptr_t)(&OTHERNAME_it));
}

// ----------------------------------------------------------------------------
// Function: OTHERNAME_free  (binary VA: 0x19e9290)
// Original: OTHERNAME_free
// ----------------------------------------------------------------------------
int OTHERNAME_free(char a1)
{
  return ASN1_item_free(a1, OTHERNAME_it);
}

// ----------------------------------------------------------------------------
// Function: EDIPARTYNAME_new  (binary VA: 0x19e9340)
// Original: EDIPARTYNAME_new
// ----------------------------------------------------------------------------
int EDIPARTYNAME_new()
{
  return ASN1_item_new((int)(uintptr_t)(&EDIPARTYNAME_it));
}

// ----------------------------------------------------------------------------
// Function: EDIPARTYNAME_free  (binary VA: 0x19e9370)
// Original: EDIPARTYNAME_free
// ----------------------------------------------------------------------------
int EDIPARTYNAME_free(char a1)
{
  return ASN1_item_free(a1, EDIPARTYNAME_it);
}

// ----------------------------------------------------------------------------
// Function: GENERAL_NAME_new  (binary VA: 0x19e93a0)
// Original: GENERAL_NAME_new
// ----------------------------------------------------------------------------
int GENERAL_NAME_new()
{
  return ASN1_item_new((int)(uintptr_t)(&GENERAL_NAME_it));
}

// ----------------------------------------------------------------------------
// Function: GENERAL_NAME_free  (binary VA: 0x19e93d0)
// Original: GENERAL_NAME_free
// ----------------------------------------------------------------------------
int GENERAL_NAME_free(char a1)
{
  return ASN1_item_free(a1, GENERAL_NAME_it);
}

// ----------------------------------------------------------------------------
// Function: GENERAL_NAMES_new  (binary VA: 0x19e9480)
// Original: GENERAL_NAMES_new
// ----------------------------------------------------------------------------
int GENERAL_NAMES_new()
{
  return ASN1_item_new((int)(uintptr_t)(&GENERAL_NAMES_it));
}

// ----------------------------------------------------------------------------
// Function: GENERAL_NAMES_free  (binary VA: 0x19e94b0)
// Original: GENERAL_NAMES_free
// ----------------------------------------------------------------------------
int GENERAL_NAMES_free(char a1)
{
  return ASN1_item_free(a1, GENERAL_NAMES_it);
}

// ----------------------------------------------------------------------------
// Function: GENERAL_NAME_dup  (binary VA: 0x19e94e0)
// Original: GENERAL_NAME_dup
// ----------------------------------------------------------------------------
int GENERAL_NAME_dup(int a1)
{
  return ASN1_dup(i2d_GENERAL_NAME, d2i_GENERAL_NAME, a1);
}

// ----------------------------------------------------------------------------
// Function: OTHERNAME_cmp  (binary VA: 0x19e9520)
// Original: OTHERNAME_cmp
// ----------------------------------------------------------------------------
int OTHERNAME_cmp(int *a1, int *a2)
{
  int result;

  if ( a2 == nullptr || a1 == nullptr )
    return -1;
  result = OBJ_cmp(*a1, *a2);
  if ( result == 0 )
    return ASN1_TYPE_cmp(a1[1], a2[1]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GENERAL_NAME_cmp  (binary VA: 0x19e9590)
// Original: GENERAL_NAME_cmp
// ----------------------------------------------------------------------------
int GENERAL_NAME_cmp(int a1, int a2)
{
  int result;

  if ( a2 == 0 || a1 == 0 )
    return -1;
  result = -1;
  if ( *(uint32_t *)a1 == *(uint32_t *)a2 )
  {
    switch ( *(uint32_t *)a1 )
    {
      case 0:
        result = OTHERNAME_cmp(*(int **)(a1 + 4), *(int **)(a2 + 4));
        break;
      case 1:
      case 2:
      case 6:
        result = ASN1_STRING_cmp(*(uint32_t *)(a1 + 4), *(uint32_t *)(a2 + 4));
        break;
      case 3:
      case 5:
        result = ASN1_TYPE_cmp(*(uint32_t *)(a1 + 4), *(uint32_t *)(a2 + 4));
        break;
      case 4:
        result = X509_NAME_cmp(*(uint32_t *)(a1 + 4), *(uint32_t *)(a2 + 4));
        break;
      case 7:
        result = ASN1_OCTET_STRING_cmp(*(uint32_t *)(a1 + 4), *(uint32_t *)(a2 + 4));
        break;
      case 8:
        result = OBJ_cmp(*(uint32_t *)(a1 + 4), *(uint32_t *)(a2 + 4));
        break;
      default:
        result = -1;
        break;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: GENERAL_NAME_set0_value  (binary VA: 0x19e96c0)
// Original: GENERAL_NAME_set0_value
// ----------------------------------------------------------------------------
int GENERAL_NAME_set0_value(uint32_t *a1, int a2, int a3)
{
  a1[1] = a3;
  *a1 = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: GENERAL_NAME_get0_value  (binary VA: 0x19e9710)
// Original: GENERAL_NAME_get0_value
// ----------------------------------------------------------------------------
int GENERAL_NAME_get0_value(uint32_t *a1, uint32_t *a2)
{
  int result;

  if ( a2 != nullptr )
    *a2 = *a1;
  switch ( *a1 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      result = a1[1];
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: GENERAL_NAME_set0_othername  (binary VA: 0x19e9750)
// Original: GENERAL_NAME_set0_othername
// ----------------------------------------------------------------------------
int GENERAL_NAME_set0_othername(uint32_t *a1, int a2, int a3)
{
  uint32_t *v3;
  int result;

  v3 = (uint32_t *)OTHERNAME_new();
  result = 0;
  if ( v3 != nullptr )
  {
    *v3 = a2;
    v3[1] = a3;
    GENERAL_NAME_set0_value(a1, 0, (int)(uintptr_t)(v3));
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: GENERAL_NAME_get0_otherName  (binary VA: 0x19e97a0)
// Original: GENERAL_NAME_get0_otherName
// ----------------------------------------------------------------------------
int GENERAL_NAME_get0_otherName(int a1, uint32_t *a2, uint32_t *a3)
{
  int result;

  result = 0;
  if ( *(uint32_t *)a1 == 0 )
  {
    if ( a2 != nullptr )
      *a2 = **(uint32_t **)(a1 + 4);
    result = 1;
    if ( a3 != nullptr )
      *a3 = *(uint32_t *)(*(uint32_t *)(a1 + 4) + 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ACCESS_DESCRIPTION_free  (binary VA: 0x19e97e0)
// Original: ACCESS_DESCRIPTION_free
// ----------------------------------------------------------------------------
int ACCESS_DESCRIPTION_free(char a1)
{
  return ASN1_item_free(a1, ACCESS_DESCRIPTION_it);
}

// ----------------------------------------------------------------------------
// Function: sub_19E9810  (binary VA: 0x19e9810)
// Original: sub_19E9810
// ----------------------------------------------------------------------------
int * sub_19E9810(int a1, int *a2, int *a3)
{
  int v3;
  uint32_t *v4;
  int *v5;
  char *v6;
  char *v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef char _g4_t_v11[108];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);

  v3 = 0;
  while ( v3 < sk_num((int)(uintptr_t)(a2)) )
  {
    v4 = (uint32_t *)sk_value(a2, v3);
    v5 = (int *)i2v_GENERAL_NAME(a1, v4[1], a3);
    a3 = v5;
    if ( v5 == nullptr )
      return (int *)(sk_new_null());
    v9 = sk_value(v5, v3);
    i2t_ASN1_OBJECT(v11, 80, *v4);
    v10 = strlen(v11) + strlen(*(const char **)(v9 + 4)) + 5;
    v6 = (char *)(CRYPTO_malloc(v10, (int)(uintptr_t)(&unk_1B15112), 0));
    v7 = v6;
    if ( v6 == nullptr )
    {
      ERR_put_error(34, 138, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return nullptr;
    }
    BUF_strlcpy(v6, v11, v10);
    ++v3;
    BUF_strlcat(v7, " - ", v10);
    BUF_strlcat(v7, *(char **)(v9 + 4), v10);
    CRYPTO_free(*(void **)(v9 + 4));
    *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(v7);
  }
  if ( a3 != nullptr )
    return a3;
  return (int *)(sk_new_null());
}

// ----------------------------------------------------------------------------
// Function: ACCESS_DESCRIPTION_new  (binary VA: 0x19e9a80)
// Original: ACCESS_DESCRIPTION_new
// ----------------------------------------------------------------------------
int ACCESS_DESCRIPTION_new()
{
  return ASN1_item_new((int)ACCESS_DESCRIPTION_it);
}

// ----------------------------------------------------------------------------
// Function: sub_19E9AB0  (binary VA: 0x19e9ab0)
// Original: sub_19E9AB0
// ----------------------------------------------------------------------------
int * sub_19E9AB0(int a1, int a2, int *a3)
{
  int v3;
  int v4;
  char ***v5;
  char *v6;
  char *v7;
  char *v8;
  char **v9;
  typedef const char *_g4_t_s;
  typedef size_t _g4_t_n;
  typedef int _g4_t_i;
  typedef int *_g4_t_v14;
  typedef uint8_t _g4_t_v15[4];
  typedef int _g4_t_v17;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_s)) > _g4_s0 ? (0u + sizeof(_g4_t_s)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_n)) > _g4_s1 ? (0u + sizeof(_g4_t_n)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_i)) > _g4_s2 ? (4u + sizeof(_g4_t_i)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v14)) > _g4_s3 ? (8u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v15)) > _g4_s4 ? (20u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v17)) > _g4_s5 ? (28u + sizeof(_g4_t_v17)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 0u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 0u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);

  v14 = (int *)(sk_new_null());
  if ( v14 != nullptr )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= sk_num((int)(uintptr_t)(a3)) )
        return v14;
      v3 = sk_value(a3, i);
      v4 = ACCESS_DESCRIPTION_new();
      v5 = (char ***)v4;
      if ( v4 == 0 || sk_push(v14, v4) == 0 )
        goto LABEL_12;
      s = *(const char **)(v3 + 4);
      v6 = (char *)(strchr(s, 59));
      v7 = v6;
      if ( v6 == nullptr )
        break;
      v17 = *(uint32_t *)(v3 + 8);
      if ( v2i_GENERAL_NAME_ex(v5[1], a1, a2, v15, 0) == 0 )
        goto LABEL_13;
      n = v7 - s;
      v8 = (char *)(CRYPTO_malloc(n + 1, (int)(uintptr_t)(&unk_1B15112), 0));
      if ( v8 == nullptr )
      {
LABEL_12:
        ERR_put_error(34, 139, 65, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_13:
        sk_pop_free((void **)v14, (void (*)(uint32_t))ACCESS_DESCRIPTION_free);
        return nullptr;
      }
      strncpy(v8, *(const char **)(v3 + 4), n);
      v8[n] = 0;
      v9 = OBJ_txt2obj(v8, 0);
      *v5 = v9;
      if ( v9 == nullptr )
      {
        ERR_put_error(34, 139, 119, (int)(uintptr_t)(&unk_1B15112), 0);
        ERR_add_error_data(2, "value=", v8);
        CRYPTO_free(v8);
        goto LABEL_13;
      }
      CRYPTO_free(v8);
    }
    ERR_put_error(34, 139, 143, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_13;
  }
  ERR_put_error(34, 139, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  return v14;
}

// ----------------------------------------------------------------------------
// Function: AUTHORITY_INFO_ACCESS_new  (binary VA: 0x19e9de0)
// Original: AUTHORITY_INFO_ACCESS_new
// ----------------------------------------------------------------------------
int AUTHORITY_INFO_ACCESS_new()
{
  return ASN1_item_new((int)(uintptr_t)(&AUTHORITY_INFO_ACCESS_it));
}

// ----------------------------------------------------------------------------
// Function: AUTHORITY_INFO_ACCESS_free  (binary VA: 0x19e9e10)
// Original: AUTHORITY_INFO_ACCESS_free
// ----------------------------------------------------------------------------
int AUTHORITY_INFO_ACCESS_free(char a1)
{
  return ASN1_item_free(a1, AUTHORITY_INFO_ACCESS_it);
}

// ----------------------------------------------------------------------------
// Function: i2a_ACCESS_DESCRIPTION  (binary VA: 0x19e9e40)
// Original: i2a_ACCESS_DESCRIPTION
// ----------------------------------------------------------------------------
int i2a_ACCESS_DESCRIPTION(int a1, uint32_t *a2)
{
  i2a_ASN1_OBJECT(a1, *a2);
  return 2;
}

// ----------------------------------------------------------------------------
// Function: sub_19E9E80  (binary VA: 0x19e9e80)
// Original: sub_19E9E80
// ----------------------------------------------------------------------------
int sub_19E9E80(int *a1, uint32_t *a2, int a3, int a4)
{
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  uint8_t *v12;
  int v13;
  int v14;
  int j;
  int v16;
  int v17;
  int i;

  if ( sk_num((int)(uintptr_t)(a1)) > 0 )
    BIO_printf(v5, v6, (int)(uintptr_t)(a2), "%*s%s:\n", a3, &unk_1B15112, a4);
  for ( i = 0; i < sk_num((int)(uintptr_t)(a1)); ++i )
  {
    v7 = (uint32_t *)sk_value(a1, i);
    BIO_printf(v8, v9, (int)(uintptr_t)(a2), "%*s", a3 + 2, &unk_1B15112);
    if ( *(uint32_t *)*v7 == 7 )
    {
      v10 = *(int **)(*v7 + 4);
      v11 = *v10;
      v12 = (uint8_t *)v10[2];
      BIO_puts(a2, (int)(uintptr_t)("IP:"));
      if ( v11 == 8 )
      {
        BIO_printf(
          v13,
          v14,
          (int)(uintptr_t)(a2),
          "%d.%d.%d.%d/%d.%d.%d.%d",
          *v12,
          v12[1],
          v12[2],
          v12[3],
          v12[4],
          v12[5],
          v12[6],
          v12[7]);
      }
      else
      {
        if ( v11 == 32 )
        {
          for ( j = 1; ; ++j )
          {
            v16 = *v12;
            v17 = v12[1];
            v12 += 2;
            BIO_printf(v17, v14, (int)(uintptr_t)(a2), "%X", v17 | (v16 << 8));
            if ( j == 8 )
            {
              BIO_puts(a2, (int)(uintptr_t)("/"));
            }
            else
            {
              if ( j == 16 )
                goto LABEL_5;
              BIO_puts(a2, (int)(uintptr_t)(":"));
            }
          }
        }
        BIO_printf(v13, v14, (int)(uintptr_t)(a2), "IP Address:<invalid>");
      }
    }
    else
    {
      GENERAL_NAME_print(a2, *v7);
    }
LABEL_5:
    BIO_puts(a2, (int)(uintptr_t)(&a0[1]));
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19EA0A0  (binary VA: 0x19ea0a0)
// Original: sub_19EA0A0
// ----------------------------------------------------------------------------
int sub_19EA0A0(int a1, int **a2, uint32_t *a3, int a4)
{
  sub_19E9E80(*a2, a3, a4, (int)(uintptr_t)("Permitted"));
  sub_19E9E80(a2[1], a3, a4, (int)(uintptr_t)("Excluded"));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19EA120  (binary VA: 0x19ea120)
// Original: sub_19EA120
// ----------------------------------------------------------------------------
int sub_19EA120(int *a1, int *a2)
{
  int v2;
  int v3;
  signed int *v5;
  signed int n;
  const char *v7;
  char *v8;
  char *v9;
  const char *v10;
  signed int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  int *v16;
  int v17;
  const char *v18;
  const char *v19;
  int v20;
  int v21;
  int *v22;
  int *v23;
  const char *s;
  char *v25;
  char *v26;
  int v27;
  const char *c;
  char *s1;
  char *s1a;
  char *s2;
  int v32;
  int v33;

  v2 = *a2;
  if ( *a2 == 2 )
  {
    v15 = (int *)*a1;
    v16 = (int *)a2[1];
    v3 = 0;
    v17 = *v15;
    v18 = (const char *)v15[2];
    v19 = (const char *)v16[2];
    v20 = *v16;
    if ( *v19 != 0 )
    {
      if ( v17 <= v20 || (LOWORD(v3) = 47, v18 += v17 - v20, *(v18 - 1) == 46) )
      {
        v21 = strcasecmp(v19, v18);
        return v21 != 0 ? 0x2F : 0;
      }
    }
  }
  else
  {
    switch ( v2 )
    {
      case 1:
        v22 = (int *)a2[1];
        v23 = (int *)*a1;
        v3 = 53;
        s = (const char *)v22[2];
        v32 = *v23;
        v33 = *v22;
        s2 = (char *)v23[2];
        v25 = (char *)(strchr(s, 64));
        v26 = strchr(s2, 64);
        if ( v26 == nullptr )
          return v3;
        if ( v25 == nullptr )
        {
          if ( *s == 46 )
          {
            LOWORD(v3) = 47;
            if ( v32 <= v33 )
              return v3;
            c = &s2[v32 - v33];
            goto LABEL_34;
          }
LABEL_33:
          c = v26 + 1;
LABEL_34:
          v21 = strcasecmp(s, c);
          return v21 != 0 ? 0x2F : 0;
        }
        if ( s == v25
          || (v3 = 47, v25 - s == v26 - s2) && (s1a = v26, v27 = strncmp(s, s2, v25 - s), v26 = s1a, v27 == 0) )
        {
          s = v25 + 1;
          goto LABEL_33;
        }
        break;
      case 4:
        v13 = *a1;
        v14 = a2[1];
        if ( *(uint32_t *)(*a1 + 4) == 0 || (v3 = 17, i2d_X509_NAME(v13, nullptr) >= 0) )
        {
          if ( *(uint32_t *)(v14 + 4) == 0 || (v3 = 17, i2d_X509_NAME(v14, nullptr) >= 0) )
          {
            v3 = 47;
            if ( *(uint32_t *)(v14 + 16) <= *(uint32_t *)(v13 + 16) )
              return memcmp(*(const void **)(v14 + 12), *(const void **)(v13 + 12), *(uint32_t *)(v14 + 16)) != 0
                   ? 0x2F
                   : 0;
          }
        }
        break;
      case 6:
        v5 = (signed int *)a2[1];
        v3 = 53;
        n = *v5;
        v7 = (const char *)v5[2];
        v8 = (char *)(strchr(*(const char **)(*a1 + 8), 58));
        if ( v8 != nullptr && v8[1] == 47 && v8[2] == 47 )
        {
          s1 = v8 + 3;
          v9 = strchr(v8 + 3, 58);
          v10 = s1;
          if ( v9 != nullptr || (v9 = strchr(s1, 47), v10 = s1, v9 != nullptr) )
          {
            v11 = v9 - v10;
          }
          else
          {
            v11 = strlen(s1);
            v10 = s1;
          }
          v3 = 53;
          if ( v11 != 0 )
          {
            if ( *v7 == 46 )
            {
              LOWORD(v3) = 47;
              if ( n >= v11 )
                return v3;
              v12 = strncasecmp(&v10[v11 - n], v7, n);
            }
            else
            {
              v3 = 47;
              if ( n != v11 )
                return v3;
              v12 = strncasecmp(v10, v7, n);
            }
            return v12 != 0 ? 0x2F : 0;
          }
        }
        break;
      default:
        return 51;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_19EA440  (binary VA: 0x19ea440)
// Original: sub_19EA440
// ----------------------------------------------------------------------------
int sub_19EA440(uint32_t *a1, int a2)
{
  int v4;
  int v5;
  int *v6;
  int v7;
  int result;
  int i;
  int v10;
  int v11;
  int *v12;

  v4 = 0;
  v11 = 0;
  v12 = (int *)(a1 + 1);
  while ( v4 < sk_num(*(uint32_t *)a2) )
  {
    v5 = sk_value(*(int **)a2, v4);
    v6 = *(int **)v5;
    if ( *a1 == **(uint32_t **)v5 )
    {
      if ( *(uint32_t *)(v5 + 4) != 0 || *(uint32_t *)(v5 + 8) != 0 )
        return 49;
      if ( v11 != 2 )
      {
        v7 = 1;
        if ( v11 != 0 )
          v7 = v11;
        v11 = v7;
        result = sub_19EA120(v12, v6);
        if ( result != 0 )
        {
          if ( result != 47 )
            return result;
        }
        else
        {
          v11 = 2;
        }
      }
    }
    ++v4;
  }
  result = 47;
  if ( v11 != 1 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= sk_num(*(uint32_t *)(a2 + 4)) )
        return 0;
      v10 = sk_value(*(int **)(a2 + 4), i);
      if ( *a1 == **(uint32_t **)v10 )
      {
        if ( *(uint32_t *)(v10 + 4) != 0 || *(uint32_t *)(v10 + 8) != 0 )
          return 49;
        result = sub_19EA120(a1 + 1, *(int **)v10);
        if ( result == 0 )
          return 48;
        if ( result != 47 )
          return result;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: GENERAL_SUBTREE_new  (binary VA: 0x19ea590)
// Original: GENERAL_SUBTREE_new
// ----------------------------------------------------------------------------
int GENERAL_SUBTREE_new()
{
  return ASN1_item_new((int)(uintptr_t)(&GENERAL_SUBTREE_it));
}

// ----------------------------------------------------------------------------
// Function: GENERAL_SUBTREE_free  (binary VA: 0x19ea5c0)
// Original: GENERAL_SUBTREE_free
// ----------------------------------------------------------------------------
int GENERAL_SUBTREE_free(char a1)
{
  return ASN1_item_free(a1, GENERAL_SUBTREE_it);
}

// ----------------------------------------------------------------------------
// Function: NAME_CONSTRAINTS_new  (binary VA: 0x19ea5f0)
// Original: NAME_CONSTRAINTS_new
// ----------------------------------------------------------------------------
int NAME_CONSTRAINTS_new()
{
  return ASN1_item_new((int)(uintptr_t)(&NAME_CONSTRAINTS_it));
}

// ----------------------------------------------------------------------------
// Function: NAME_CONSTRAINTS_free  (binary VA: 0x19ea620)
// Original: NAME_CONSTRAINTS_free
// ----------------------------------------------------------------------------
int NAME_CONSTRAINTS_free(char a1)
{
  return ASN1_item_free(a1, NAME_CONSTRAINTS_it);
}

// ----------------------------------------------------------------------------
// Function: sub_19EA650  (binary VA: 0x19ea650)
// Original: sub_19EA650
// ----------------------------------------------------------------------------
int sub_19EA650(int a1, int a2, int *a3)
{
  int v3;
  int **v4;
  int *v5;
  uint8_t *v6;
  uint32_t *v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[4];
  typedef uint8_t *_g4_t_v12;
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v13)) > _g4_s4 ? (28u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v3 = 0;
  v10 = NAME_CONSTRAINTS_new();
  if ( v10 != 0 )
  {
    while ( v3 < sk_num((int)(uintptr_t)(a3)) )
    {
      v9 = sk_value(a3, v3);
      v6 = *(uint8_t **)(v9 + 4);
      if ( memcmp(v6, "permitted", 9u) == 0 && v6[9] != 0 )
      {
        v4 = (int **)v10;
        v12 = v6 + 10;
      }
      else
      {
        if ( memcmp(*(const void **)(v9 + 4), "excluded", 8u) != 0 || v6[8] == 0 )
        {
          v8 = nullptr;
          ERR_put_error(34, 147, 143, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_15;
        }
        v4 = (int **)(v10 + 4);
        v12 = v6 + 9;
      }
      v13 = *(uint32_t *)(v9 + 8);
      v8 = (uint32_t *)GENERAL_SUBTREE_new();
      if ( v2i_GENERAL_NAME_ex(*v8, a1, a2, v11, 1) == 0 )
        goto LABEL_15;
      v5 = *v4;
      if ( *v4 == nullptr )
      {
        v5 = (int *)(sk_new_null());
        *v4 = v5;
        if ( v5 == nullptr )
          goto LABEL_20;
      }
      if ( sk_push(v5, (int)(uintptr_t)(v8)) == 0 )
        goto LABEL_20;
      ++v3;
    }
  }
  else
  {
    v8 = nullptr;
LABEL_20:
    ERR_put_error(34, 147, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v10 != 0 )
LABEL_15:
      NAME_CONSTRAINTS_free(v10);
    v10 = 0;
    if ( v8 != nullptr )
      GENERAL_SUBTREE_free((char)(uintptr_t)(v8));
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: NAME_CONSTRAINTS_check  (binary VA: 0x19ea820)
// Original: NAME_CONSTRAINTS_check
// ----------------------------------------------------------------------------
int NAME_CONSTRAINTS_check(int a1, int a2)
{
  int subject_name;
  int result;
  int v4;
  int index_by_NID;
  int entry;
  int i;
  uint32_t *v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_data;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_data)) > _g4_s1 ? (12u + sizeof(_g4_t_data)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_data &data = *reinterpret_cast<_g4_t_data *>(_g4_sf + 12u);

  subject_name = X509_get_subject_name(a1);
  if ( (int)X509_NAME_entry_count(subject_name) > 0 )
  {
    v9 = 4;
    data = subject_name;
    result = sub_19EA440(&v9, a2);
    if ( result != 0 )
      return result;
    v9 = 1;
    v4 = -1;
    while ( 1 )
    {
      index_by_NID = X509_NAME_get_index_by_NID(subject_name, 48, v4);
      v4 = index_by_NID;
      if ( index_by_NID == -1 )
        break;
      entry = X509_NAME_get_entry(subject_name, index_by_NID);
      data = X509_NAME_ENTRY_get_data(entry);
      if ( *(uint32_t *)(data + 4) != 22 )
        return 53;
      result = sub_19EA440(&v9, a2);
      if ( result != 0 )
        return result;
    }
  }
  for ( i = 0; i < sk_num(*(uint32_t *)(a1 + 72)); ++i )
  {
    v8 = (uint32_t *)sk_value(*(int **)(a1 + 72), i);
    result = sub_19EA440(v8, a2);
    if ( result != 0 )
      return result;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_19EA920  (binary VA: 0x19ea920)
// Original: sub_19EA920
// ----------------------------------------------------------------------------
int sub_19EA920(int a1, uint32_t *a2, int a3)
{
  X509V3_add_value_int("Require Explicit Policy", *a2, &a3);
  X509V3_add_value_int("Inhibit Policy Mapping", a2[1], &a3);
  return a3;
}

// ----------------------------------------------------------------------------
// Function: POLICY_CONSTRAINTS_new  (binary VA: 0x19ea990)
// Original: POLICY_CONSTRAINTS_new
// ----------------------------------------------------------------------------
int POLICY_CONSTRAINTS_new()
{
  return ASN1_item_new((int)(uintptr_t)(&POLICY_CONSTRAINTS_it));
}

// ----------------------------------------------------------------------------
// Function: POLICY_CONSTRAINTS_free  (binary VA: 0x19ea9c0)
// Original: POLICY_CONSTRAINTS_free
// ----------------------------------------------------------------------------
int POLICY_CONSTRAINTS_free(char a1)
{
  return ASN1_item_free(a1, POLICY_CONSTRAINTS_it);
}

// ----------------------------------------------------------------------------
// Function: sub_19EA9F0  (binary VA: 0x19ea9f0)
// Original: sub_19EA9F0
// ----------------------------------------------------------------------------
uint32_t * sub_19EA9F0(int a1, int a2, int *a3)
{
  int i;
  int v4;
  uint32_t *v6;
  uint32_t *v7;

  v7 = (uint32_t *)POLICY_CONSTRAINTS_new();
  if ( v7 != nullptr )
  {
    for ( i = 0; i < sk_num((int)(uintptr_t)(a3)); ++i )
    {
      v4 = sk_value(a3, i);
      if ( strcmp(*(const char **)(v4 + 4), "requireExplicitPolicy") == 0 )
      {
        if ( X509V3_get_value_int(v4, v7) == 0 )
          goto LABEL_9;
      }
      else
      {
        if ( strcmp(*(const char **)(v4 + 4), "inhibitPolicyMapping") != 0 )
        {
          v6 = (uint32_t *)v4;
          ERR_put_error(34, 146, 106, (int)(uintptr_t)(&unk_1B15112), 0);
          ERR_add_error_data(6, "section:", *v6, ",name:", v6[1], ",value:", v6[2]);
          goto LABEL_9;
        }
        if ( X509V3_get_value_int(v4, v7 + 1) == 0 )
          goto LABEL_9;
      }
    }
    if ( v7[1] == 0 && *v7 == 0 )
    {
      ERR_put_error(34, 146, 151, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_9:
      POLICY_CONSTRAINTS_free((char)(uintptr_t)(v7));
      return nullptr;
    }
  }
  else
  {
    ERR_put_error(34, 146, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: sub_19EABD0  (binary VA: 0x19eabd0)
// Original: sub_19EABD0
// ----------------------------------------------------------------------------
int sub_19EABD0(int a1, int *a2, int a3)
{
  int i;
  uint32_t *v4;
  typedef int _g4_t_v6[20];
  typedef char _g4_t_v7[108];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (80u + sizeof(_g4_t_v7)) > _g4_s1 ? (80u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 80u);

  for ( i = 0; i < sk_num((int)(uintptr_t)(a2)); ++i )
  {
    v4 = (uint32_t *)sk_value(a2, i);
    i2t_ASN1_OBJECT(v6, 80, *v4);
    i2t_ASN1_OBJECT(v7, 80, v4[1]);
    X509V3_add_value((int)(uintptr_t)(v6), v7, (int)(uintptr_t)(&a3));
  }
  return a3;
}

// ----------------------------------------------------------------------------
// Function: POLICY_MAPPING_free  (binary VA: 0x19eac80)
// Original: POLICY_MAPPING_free
// ----------------------------------------------------------------------------
int POLICY_MAPPING_free(char a1)
{
  return ASN1_item_free(a1, POLICY_MAPPING_it);
}

// ----------------------------------------------------------------------------
// Function: POLICY_MAPPING_new  (binary VA: 0x19eacb0)
// Original: POLICY_MAPPING_new
// ----------------------------------------------------------------------------
int POLICY_MAPPING_new()
{
  return ASN1_item_new((int)POLICY_MAPPING_it);
}

// ----------------------------------------------------------------------------
// Function: sub_19EACE0  (binary VA: 0x19eace0)
// Original: sub_19EACE0
// ----------------------------------------------------------------------------
void ** sub_19EACE0(int a1, int a2, int *a3)
{
  int i;
  int v4;
  int v5;
  char *v6;
  char **v7;
  char ***v8;
  char **v10;
  void **v11;

  v11 = (void **)sk_new_null();
  if ( v11 != nullptr )
  {
    for ( i = 0; i < sk_num((int)(uintptr_t)(a3)); ++i )
    {
      v4 = sk_value(a3, i);
      v5 = v4;
      if ( *(uint32_t *)(v4 + 8) == 0
        || (v6 = *(char **)(v4 + 4)) == nullptr
        || (v10 = OBJ_txt2obj(v6, 0), (v7 = OBJ_txt2obj(*(char **)(v5 + 8), 0)) == nullptr)
        || v10 == nullptr )
      {
        sk_pop_free(v11, (void (*)(uint32_t))POLICY_MAPPING_free);
        ERR_put_error(34, 145, 110, (int)(uintptr_t)(&unk_1B15112), 0);
        ERR_add_error_data(6, "section:", *(uint32_t *)v5, ",name:", *(uint32_t *)(v5 + 4), ",value:", *(uint32_t *)(v5 + 8));
        return nullptr;
      }
      v8 = (char ***)POLICY_MAPPING_new();
      if ( v8 == nullptr )
      {
        sk_pop_free(v11, (void (*)(uint32_t))POLICY_MAPPING_free);
        ERR_put_error(34, 145, 65, (int)(uintptr_t)(&unk_1B15112), 0);
        return nullptr;
      }
      v8[1] = v7;
      *v8 = v10;
      sk_push((int *)v11, (int)(uintptr_t)(v8));
    }
  }
  else
  {
    ERR_put_error(34, 145, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v11;
}

// ----------------------------------------------------------------------------
// Function: sub_19EAEE0  (binary VA: 0x19eaee0)
// Original: sub_19EAEE0
// ----------------------------------------------------------------------------
int sub_19EAEE0(uint32_t **a1, uint32_t **a2)
{
  return **a1 - **a2;
}

// ----------------------------------------------------------------------------
// Function: sub_19EAF00  (binary VA: 0x19eaf00)
// Original: sub_19EAF00
// ----------------------------------------------------------------------------
int sub_19EAF00(uint32_t *a1, uint32_t *a2)
{
  return *a1 - *a2;
}

// ----------------------------------------------------------------------------
// Function: sub_19EAF10  (binary VA: 0x19eaf10)
// Original: sub_19EAF10
// ----------------------------------------------------------------------------
int sub_19EAF10()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19EAF20  (binary VA: 0x19eaf20)
// Original: sub_19EAF20
// ----------------------------------------------------------------------------
int sub_19EAF20(int a1)
{
  int v1;
  int v2;

  v1 = *(uint32_t *)(a1 + 40);
  if ( (v1 & 2) != 0 )
  {
    v2 = 0;
    if ( (*(uint8_t *)(a1 + 44) & 4) == 0 )
      return v2;
  }
  if ( (v1 & 1) == 0 )
  {
    v2 = 3;
    if ( (v1 & 0x60) != 0x60 )
    {
      LOBYTE(v2) = 4;
      if ( (*(uint32_t *)(a1 + 40) & 2) == 0 )
      {
        LOBYTE(v2) = 0;
        if ( (v1 & 8) != 0 )
          return (*(uint32_t *)(a1 + 52) & 7) != 0 ? 5 : 0;
      }
    }
    return v2;
  }
  return (v1 & 0x10) != 0;
}

// ----------------------------------------------------------------------------
// Function: sub_19EAFA0  (binary VA: 0x19eafa0)
// Original: sub_19EAFA0
// ----------------------------------------------------------------------------
int sub_19EAFA0(int a1, int a2, int a3)
{
  if ( a3 != 0 )
    return sub_19EAF20(a2);
  else
    return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19EAFC0  (binary VA: 0x19eafc0)
// Original: sub_19EAFC0
// ----------------------------------------------------------------------------
int sub_19EAFC0(int a1, int a2, int a3)
{
  int v3;
  int result;

  v3 = *(uint32_t *)(a2 + 40);
  if ( (v3 & 4) == 0 || (result = 0, (*(uint8_t *)(a2 + 48) & 2) != 0) )
  {
    if ( a3 != 0 )
    {
      result = sub_19EAF20(a2);
      if ( result == 5 && (*(uint8_t *)(a2 + 52) & 4) == 0 )
        return 0;
    }
    else if ( (v3 & 2) == 0 || (result = 0, *(char *)(a2 + 44) < 0) )
    {
      result = 1;
      if ( (v3 & 8) != 0 )
        return *(char *)(a2 + 52) < 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19EB030  (binary VA: 0x19eb030)
// Original: sub_19EB030
// ----------------------------------------------------------------------------
int sub_19EB030(int a1, int a2, int a3)
{
  int v3;
  int result;

  v3 = *(uint32_t *)(a2 + 40);
  if ( (v3 & 4) == 0 || (result = 0, (*(uint8_t *)(a2 + 48) & 0x11) != 0) )
  {
    if ( a3 != 0 )
    {
      result = sub_19EAF20(a2);
      if ( result == 5 && (*(uint8_t *)(a2 + 52) & 4) == 0 )
        return 0;
    }
    else if ( (v3 & 8) == 0 || (result = 0, (*(uint8_t *)(a2 + 52) & 0x40) != 0) )
    {
      result = 1;
      if ( (v3 & 2) != 0 )
        return (*(uint8_t *)(a2 + 44) & 0xA0) != 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19EB0A0  (binary VA: 0x19eb0a0)
// Original: sub_19EB0A0
// ----------------------------------------------------------------------------
int sub_19EB0A0(int a1, int a2, int a3)
{
  int result;

  result = sub_19EB030(a1, a2, a3);
  if ( result != 0 && a3 == 0 && (*(uint8_t *)(a2 + 40) & 2) != 0 && (*(uint8_t *)(a2 + 44) & 0x20) == 0 )
    return 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19EB0F0  (binary VA: 0x19eb0f0)
// Original: sub_19EB0F0
// ----------------------------------------------------------------------------
int sub_19EB0F0(int a1, int a2)
{
  int v2;
  int result;
  unsigned int v5;

  v2 = *(uint32_t *)(a1 + 40);
  if ( (v2 & 4) == 0 || (result = 0, (*(uint8_t *)(a1 + 48) & 4) != 0) )
  {
    if ( a2 != 0 )
    {
      result = sub_19EAF20(a1);
      if ( result == 5 && (*(uint8_t *)(a1 + 52) & 2) == 0 )
        return 0;
    }
    else
    {
      result = 1;
      if ( (v2 & 8) != 0 )
      {
        v5 = *(uint32_t *)(a1 + 52);
        if ( (v5 & 0x20) == 0 )
          return (v5 >> 6) & 2;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19EB150  (binary VA: 0x19eb150)
// Original: sub_19EB150
// ----------------------------------------------------------------------------
int sub_19EB150(int a1, int a2, int a3)
{
  int result;

  result = sub_19EB0F0(a2, a3);
  if ( result != 0 && a3 == 0 && (*(uint8_t *)(a2 + 40) & 2) != 0 && (*(uint8_t *)(a2 + 44) & 0xC0) == 0 )
    return 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19EB1A0  (binary VA: 0x19eb1a0)
// Original: sub_19EB1A0
// ----------------------------------------------------------------------------
int sub_19EB1A0(int a1, int a2, int a3)
{
  int result;

  result = sub_19EB0F0(a2, a3);
  if ( result != 0 && a3 == 0 && (*(uint8_t *)(a2 + 40) & 2) != 0 && (*(uint8_t *)(a2 + 44) & 0x20) == 0 )
    return 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19EB1F0  (binary VA: 0x19eb1f0)
// Original: sub_19EB1F0
// ----------------------------------------------------------------------------
int sub_19EB1F0(int a1, int a2, int a3)
{
  int result;

  if ( a3 != 0 )
  {
    result = sub_19EAF20(a2);
    if ( result == 2 )
      return 0;
  }
  else
  {
    result = 1;
    if ( (*(uint8_t *)(a2 + 40) & 2) != 0 )
      return (*(uint8_t *)(a2 + 44) & 2) != 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19EB230  (binary VA: 0x19eb230)
// Original: sub_19EB230
// ----------------------------------------------------------------------------
int sub_19EB230(int a1, uint32_t *a2, int a3)
{
  int v3;
  int result;
  int v5;
  int ext_by_NID;
  int ext;

  if ( a3 != 0 )
    return sub_19EAF20((int)(uintptr_t)(a2));
  v3 = a2[10];
  if ( (v3 & 2) == 0 || (v5 = a2[11], result = 0, (v5 & 0xFFFFFF3F) == 0) && (v5 & 0xC0) != 0 )
  {
    result = 0;
    if ( (v3 & 4) != 0 && a2[12] == 64 )
    {
      ext_by_NID = X509_get_ext_by_NID(a2, 126, 0);
      result = 1;
      if ( ext_by_NID >= 0 )
      {
        ext = X509_get_ext(a2, ext_by_NID);
        return X509_EXTENSION_get_critical(ext) != 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19EB2F0  (binary VA: 0x19eb2f0)
// Original: sub_19EB2F0
// ----------------------------------------------------------------------------
void sub_19EB2F0(void *a1)
{
  int v1;

  if ( a1 != nullptr )
  {
    v1 = *((uint32_t *)a1 + 2);
    if ( (v1 & 1) != 0 )
    {
      if ( (v1 & 2) != 0 )
      {
        CRYPTO_free(*((void **)a1 + 4));
        CRYPTO_free(*((void **)a1 + 5));
      }
      CRYPTO_free(a1);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_19EB7D0  (binary VA: 0x19eb7d0)
// Original: sub_19EB7D0
// ----------------------------------------------------------------------------
int16_t sub_19EB7D0(int a1)
{
  void *v2;
  int issuer_name;
  int subject_name;
  uint32_t *ext_d2i;
  uint32_t *v6;
  int *v7;
  int **v8;
  int v9;
  int v10;
  int v11;
  void **v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint32_t *v22;
  int v23;
  int ext_count;
  int ext;
  int object;
  int v27;
  typedef int _g4_t_i;
  typedef int _g4_t_v30[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_i)) > _g4_s0 ? (12u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v30)) > _g4_s1 ? (28u + sizeof(_g4_t_v30)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);

  v2 = EVP_sha1();
  X509_digest(a1, (int)(uintptr_t)(v2), a1 + 80, 0);
  issuer_name = X509_get_issuer_name(a1);
  subject_name = X509_get_subject_name(a1);
  if ( X509_NAME_cmp(subject_name, issuer_name) == 0 )
    *(uint32_t *)(a1 + 40) |= 0x20u;
  if ( ASN1_INTEGER_get(**(int ***)a1) == 0 )
    *(uint32_t *)(a1 + 40) |= 0x40u;
  ext_d2i = (uint32_t *)X509_get_ext_d2i(a1, 87, 0, 0);
  v6 = ext_d2i;
  if ( ext_d2i != nullptr )
  {
    if ( *ext_d2i != 0 )
    {
      *(uint32_t *)(a1 + 40) |= 0x10u;
      v7 = (int *)ext_d2i[1];
      if ( v7 != nullptr )
        goto LABEL_8;
    }
    else
    {
      v7 = (int *)ext_d2i[1];
      if ( v7 != nullptr )
      {
LABEL_8:
        if ( v7[1] != 258 && *v6 != 0 )
        {
          *(uint32_t *)(a1 + 32) = ASN1_INTEGER_get(v7);
        }
        else
        {
          *(uint32_t *)(a1 + 40) |= 0x80u;
          *(uint32_t *)(a1 + 32) = 0;
        }
        goto LABEL_11;
      }
    }
    *(uint32_t *)(a1 + 32) = -1;
LABEL_11:
    BASIC_CONSTRAINTS_free(v6);
    *(uint32_t *)(a1 + 40) |= 1u;
  }
  v8 = (int **)X509_get_ext_d2i(a1, 663, 0, 0);
  if ( v8 != nullptr )
  {
    v9 = *(uint32_t *)(a1 + 40);
    if ( (v9 & 0x10) != 0 )
      goto LABEL_14;
    if ( (int)X509_get_ext_by_NID(a1, 85, 0) >= 0 || (int)X509_get_ext_by_NID(a1, 86, 0) >= 0 )
    {
      v9 = *(uint32_t *)(a1 + 40);
LABEL_14:
      LOBYTE(v9) = v9 | 0x80;
      *(uint32_t *)(a1 + 40) = v9;
    }
    if ( *v8 != nullptr )
      *(uint32_t *)(a1 + 36) = ASN1_INTEGER_get(*v8);
    else
      *(uint32_t *)(a1 + 36) = -1;
    PROXY_CERT_INFO_EXTENSION_free(v8);
    *(uint32_t *)(a1 + 40) |= 0x400u;
  }
  v10 = X509_get_ext_d2i(a1, 83, 0, 0);
  if ( v10 != 0 )
  {
    if ( *(int *)v10 <= 0 )
    {
      *(uint32_t *)(a1 + 44) = 0;
    }
    else
    {
      v11 = **(uint8_t **)(v10 + 8);
      *(uint32_t *)(a1 + 44) = v11;
      if ( *(int *)v10 > 1 )
        *(uint32_t *)(a1 + 44) = v11 | (*(uint8_t *)(*(uint32_t *)(v10 + 8) + 1) << 8);
    }
    *(uint32_t *)(a1 + 40) |= 2u;
    ASN1_BIT_STRING_free(v10);
  }
  *(uint32_t *)(a1 + 48) = 0;
  v12 = (void **)X509_get_ext_d2i(a1, 126, 0, 0);
  if ( v12 != nullptr )
  {
    *(uint32_t *)(a1 + 40) |= 4u;
    for ( v30[0] = 0; ; ++v30[0] )
    {
      if ( sk_num((int)(uintptr_t)(v12)) <= v30[0] )
      {
        sk_pop_free(v12, (void (*)(uint32_t))ASN1_OBJECT_free);
        break;
      }
      v13 = sk_value((int *)v12, v30[0]);
      v14 = OBJ_obj2nid(v13);
      if ( v14 == 133 )
      {
        *(uint32_t *)(a1 + 48) |= 0x40u;
      }
      else if ( v14 <= 133 )
      {
        if ( v14 == 130 )
        {
          *(uint32_t *)(a1 + 48) |= 2u;
        }
        else if ( v14 > 130 )
        {
          if ( v14 == 131 )
            *(uint32_t *)(a1 + 48) |= 8u;
          else
            *(uint32_t *)(a1 + 48) |= 4u;
        }
        else if ( v14 == 129 )
        {
          *(uint32_t *)(a1 + 48) |= 1u;
        }
      }
      else
      {
        if ( v14 == 139 )
          goto LABEL_36;
        if ( v14 <= 139 )
        {
          if ( v14 != 137 )
            continue;
LABEL_36:
          *(uint32_t *)(a1 + 48) |= 0x10u;
          continue;
        }
        if ( v14 == 180 )
        {
          *(uint32_t *)(a1 + 48) |= 0x20u;
        }
        else if ( v14 == 297 )
        {
          *(uint32_t *)(a1 + 48) |= 0x80u;
        }
      }
    }
  }
  v15 = X509_get_ext_d2i(a1, 71, 0, 0);
  if ( v15 != 0 )
  {
    if ( *(int *)v15 <= 0 )
      *(uint32_t *)(a1 + 52) = 0;
    else
      *(uint32_t *)(a1 + 52) = **(uint8_t **)(v15 + 8);
    *(uint32_t *)(a1 + 40) |= 8u;
    ASN1_BIT_STRING_free(v15);
  }
  *(uint32_t *)(a1 + 56) = X509_get_ext_d2i(a1, 82, 0, 0);
  *(uint32_t *)(a1 + 60) = X509_get_ext_d2i(a1, 90, 0, 0);
  *(uint32_t *)(a1 + 72) = X509_get_ext_d2i(a1, 85, 0, 0);
  v16 = X509_get_ext_d2i(a1, 666, v30, 0);
  *(uint32_t *)(a1 + 76) = v16;
  if ( v16 == 0 && v30[0] != -1 )
    *(uint32_t *)(a1 + 40) |= 0x80u;
  v17 = X509_get_ext_d2i(a1, 103, 0, 0);
  *(uint32_t *)(a1 + 68) = v17;
  for ( i = 0; i < sk_num(v17); ++i )
  {
    v18 = sk_value(*(int **)(a1 + 68), i);
    v19 = *(uint32_t *)(v18 + 4);
    if ( v19 != 0 )
    {
      if ( *(int *)v19 <= 0 )
      {
        v20 = *(uint32_t *)(v18 + 12);
      }
      else
      {
        v20 = **(uint8_t **)(v19 + 8);
        *(uint32_t *)(v18 + 12) = v20;
        if ( *(int *)v19 > 1 )
          LOWORD(v20) = (*(uint8_t *)(*(uint32_t *)(v19 + 8) + 1) << 8) | v20;
      }
      *(uint32_t *)(v18 + 12) = v20 & 0x807F;
    }
    else
    {
      *(uint32_t *)(v18 + 12) = 32895;
    }
    if ( *(uint32_t *)v18 != 0 )
    {
      v21 = 0;
      if ( **(uint32_t **)v18 == 1 )
      {
        if ( sk_num(*(uint32_t *)(v18 + 8)) <= 0 )
          goto LABEL_61;
        while ( 1 )
        {
          v22 = (uint32_t *)sk_value(*(int **)(v18 + 8), v21);
          if ( *v22 == 4 )
            break;
          if ( ++v21 >= sk_num(*(uint32_t *)(v18 + 8)) )
            goto LABEL_61;
        }
        v23 = v22[1];
        if ( v23 == 0 )
LABEL_61:
          v23 = X509_get_issuer_name(a1);
        DIST_POINT_set_dpname(*(uint32_t **)v18, v23);
      }
    }
    v17 = *(uint32_t *)(a1 + 68);
  }
  for ( v30[0] = 0; ; ++v30[0] )
  {
    ext_count = X509_get_ext_count(a1);
    if ( ext_count <= v30[0] )
      break;
    ext = X509_get_ext(a1, v30[0]);
    if ( X509_EXTENSION_get_critical(ext) != 0 )
    {
      object = X509_EXTENSION_get_object(ext);
      if ( OBJ_obj2nid(object) == 857 )
        *(uint32_t *)(a1 + 40) |= 0x1000u;
      if ( !X509_supported_extension(ext) )
      {
        v27 = *(uint32_t *)(a1 + 40);
        BYTE1(v27) |= 3u;
        *(uint32_t *)(a1 + 40) = v27;
        return v27;
      }
    }
  }
  v27 = *(uint32_t *)(a1 + 40);
  BYTE1(v27) |= 1u;
  *(uint32_t *)(a1 + 40) = v27;
  return v27;
}

// ----------------------------------------------------------------------------
// Function: sub_19EC150  (binary VA: 0x19ec150)
// Original: sub_19EC150
// ----------------------------------------------------------------------------
int sub_19EC150(uint8_t *a1, const char *s)
{
  int v3;
  int v4;
  char v6;
  char v7; // di
  char v8; // bp
  typedef unsigned int _g4_t_v9;
  typedef unsigned int _g4_t_v10;
  typedef unsigned int _g4_t_v11;
  typedef unsigned int _g4_t_v12;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v12)) > _g4_s3 ? (12u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);

  v3 = sscanf(s, "%d.%d.%d.%d", &v9, &v10, &v11, &v12);
  v4 = 0;
  if ( v3 == 4 && v9 <= 0xFF )
  {
    v6 = v10;
    if ( v10 < 0x100 )
    {
      v7 = v11;
      if ( v11 < 0x100 )
      {
        v8 = v12;
        if ( v12 < 0x100 )
        {
          *a1 = v9;
          a1[2] = v7;
          a1[1] = v6;
          a1[3] = v8;
          LOBYTE(v4) = 1;
        }
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_19EC220  (binary VA: 0x19ec220)
// Original: sub_19EC220
// ----------------------------------------------------------------------------
int sub_19EC220(void *a1)
{
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: X509V3_conf_free  (binary VA: 0x19ec250)
// Original: X509V3_conf_free
// ----------------------------------------------------------------------------
int X509V3_conf_free(void **a1)
{
  int result;

  if ( a1 != nullptr )
  {
    if ( a1[1] != nullptr )
      CRYPTO_free(a1[1]);
    if ( a1[2] != nullptr )
      CRYPTO_free(a1[2]);
    if ( *a1 != nullptr )
      CRYPTO_free(*a1);
    return CRYPTO_free(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19EC2B0  (binary VA: 0x19ec2b0)
// Original: sub_19EC2B0
// ----------------------------------------------------------------------------
int sub_19EC2B0(const char **a1, const char **a2)
{
  return strcmp(*a1, *a2);
}

// ----------------------------------------------------------------------------
// Function: sub_19EC2E0  (binary VA: 0x19ec2e0)
// Original: sub_19EC2E0
// ----------------------------------------------------------------------------
const char * sub_19EC2E0(const char *a1)
{
  const char *s;
  uint8_t v2;
  const char *v3;

  s = a1;
  v2 = *a1;
  if ( *a1 == 0 )
    return nullptr;
  while ( isspace(v2) != 0 )
  {
    v2 = *++s;
    if ( *s == 0 )
      return nullptr;
  }
  v3 = &s[strlen(s) - 1];
  if ( v3 != s )
  {
    while ( isspace(*(uint8_t *)v3) != 0 )
    {
      if ( --v3 == s )
        goto LABEL_11;
    }
    if ( v3 != s )
      *((uint8_t *)v3 + 1) = 0;
  }
LABEL_11:
  if ( *s == 0 )
    return nullptr;
  return s;
}

// ----------------------------------------------------------------------------
// Function: sub_19EC380  (binary VA: 0x19ec380)
// Original: sub_19EC380
// ----------------------------------------------------------------------------
int sub_19EC380(const char *a1, int a2, uint32_t *a3)
{
  int v3;
  const char *v4;
  int v5;
  int v6;
  int v8;
  int v9;
  uint8_t v10;
  int v11;

  v3 = 0;
  v4 = a1;
  v5 = a3[4];
  if ( v5 == 16 )
    return v3;
  if ( a2 != 0 )
  {
    v8 = 0;
    v9 = a2;
    if ( a2 <= 4 )
    {
      while ( 1 )
      {
        v10 = *v4++;
        v11 = 16 * v8;
        if ( (uint8_t)(v10 - 48) <= 9u )
        {
          v8 = v11 | (v10 - 48);
        }
        else if ( (uint8_t)(v10 - 65) > 5u )
        {
          if ( (uint8_t)(v10 - 97) > 5u )
            return 0;
          v8 = v11 | (v10 - 87);
        }
        else
        {
          v8 = v11 | (v10 - 55);
        }
        if ( --v9 == 0 )
        {
          v3 = 1;
          *((uint8_t *)a3 + v5) = BYTE1(v8);
          *((uint8_t *)a3 + v5 + 1) = v8;
          a3[4] += 2;
          return v3;
        }
      }
    }
    if ( v5 <= 12 && a1[a2] == 0 && sub_19EC150((uint8_t *)a3 + v5, a1) != 0 )
    {
      v3 = 1;
      a3[4] += 4;
    }
    return v3;
  }
  v6 = a3[5];
  if ( v6 == -1 )
  {
    a3[5] = v5;
  }
  else if ( v5 != v6 )
  {
    return v3;
  }
  ++a3[6];
  return 1;
}

// ----------------------------------------------------------------------------
// Function: X509V3_add_value  (binary VA: 0x19ec480)
// Original: X509V3_add_value
// ----------------------------------------------------------------------------
int X509V3_add_value(char *a1, char *a2, int **a3)
{
  char *v3;
  char *v4;
  uint32_t *v5;
  int v6;
  int *v8;

  if ( a1 == nullptr )
  {
    v3 = nullptr;
    if ( a2 != nullptr )
      goto LABEL_4;
LABEL_16:
    v4 = nullptr;
    goto LABEL_5;
  }
  v3 = BUF_strdup(a1);
  if ( v3 == nullptr )
  {
    v4 = nullptr;
    goto LABEL_18;
  }
  if ( a2 == nullptr )
    goto LABEL_16;
LABEL_4:
  v4 = BUF_strdup(a2);
  if ( v4 == nullptr )
  {
LABEL_18:
    ERR_put_error(34, 105, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_9;
  }
LABEL_5:
  v5 = (uint32_t *)(CRYPTO_malloc(12, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( v5 == nullptr )
    goto LABEL_18;
  if ( *a3 != nullptr || (v8 = (int *)(sk_new_null()), *a3 = v8, v8 != nullptr) )
  {
    *v5 = 0;
    v5[1] = (uint32_t)(uintptr_t)(v3);
    v5[2] = (uint32_t)(uintptr_t)(v4);
    if ( sk_push(*a3, (int)(uintptr_t)(v5)) != 0 )
      return 1;
  }
  ERR_put_error(34, 105, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  CRYPTO_free(v5);
LABEL_9:
  if ( v3 != nullptr )
    CRYPTO_free(v3);
  v6 = 0;
  if ( v4 != nullptr )
    CRYPTO_free(v4);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: X509V3_add_value_uchar  (binary VA: 0x19ec620)
// Original: X509V3_add_value_uchar
// ----------------------------------------------------------------------------
int X509V3_add_value_uchar(char *a1, char *a2, int **a3)
{
  return X509V3_add_value(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: X509V3_add_value_bool  (binary VA: 0x19ec660)
// Original: X509V3_add_value_bool
// ----------------------------------------------------------------------------
int X509V3_add_value_bool(char *a1, int a2, int **a3)
{
  if ( a2 != 0 )
    return X509V3_add_value(a1, "TRUE", a3);
  else
    return X509V3_add_value(a1, "FALSE", a3);
}

// ----------------------------------------------------------------------------
// Function: X509V3_add_value_bool_nf  (binary VA: 0x19ec6c0)
// Original: X509V3_add_value_bool_nf
// ----------------------------------------------------------------------------
int X509V3_add_value_bool_nf(char *a1, int a2, int **a3)
{
  int result;

  result = 1;
  if ( a2 != 0 )
    return X509V3_add_value(a1, "TRUE", a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: i2s_ASN1_ENUMERATED  (binary VA: 0x19ec710)
// Original: i2s_ASN1_ENUMERATED
// ----------------------------------------------------------------------------
int i2s_ASN1_ENUMERATED(int a1, int a2)
{
  int v2;
  void **v3;
  void **v4;

  v2 = 0;
  if ( a2 != 0 )
  {
    v3 = (void **)ASN1_ENUMERATED_to_BN(a2, 0);
    v4 = v3;
    if ( v3 == nullptr || (v2 = (int)(uintptr_t)(BN_bn2dec(v3))) == 0 )
    {
      v2 = 0;
      ERR_put_error(34, 121, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    BN_free(v4);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: i2s_ASN1_INTEGER  (binary VA: 0x19ec7b0)
// Original: i2s_ASN1_INTEGER
// ----------------------------------------------------------------------------
int i2s_ASN1_INTEGER(int a1, uint32_t *a2)
{
  int v2;
  int v3;
  void **v4;

  v2 = 0;
  if ( a2 != nullptr )
  {
    v3 = ASN1_INTEGER_to_BN(a2, 0);
    v4 = (void **)v3;
    if ( v3 == 0 || (v2 = (int)(uintptr_t)(BN_bn2dec(v3))) == 0 )
    {
      v2 = 0;
      ERR_put_error(34, 120, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    BN_free(v4);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: s2i_ASN1_INTEGER  (binary VA: 0x19ec850)
// Original: s2i_ASN1_INTEGER
// ----------------------------------------------------------------------------
int * s2i_ASN1_INTEGER(int a1, int *a2)
{
  int *v2;
  bool v3;
  char v4;
  int v5;
  char v7;
  void *v8[4];

  v2 = a2;
  v8[0] = nullptr;
  if ( a2 == nullptr )
  {
    ERR_put_error(34, 108, 109, (int)(uintptr_t)(&unk_1B15112), 0);
    return v2;
  }
  v8[0] = BN_new();
  v3 = false;
  v4 = *(uint8_t *)a2;
  if ( *(uint8_t *)a2 == 45 )
  {
    v4 = *((uint8_t *)a2 + 1);
    LOWORD(v3) = 1;
    v2 = (int *)((char *)a2 + 1);
  }
  if ( v4 == 48 && ((v7 = *((uint8_t *)v2 + 1)) == 88 || v7 == 120) )
  {
    v2 = (int *)((char *)v2 + 2);
    v5 = BN_hex2bn(v8, v2);
  }
  else
  {
    v5 = BN_dec2bn(v8, v2);
  }
  if ( v5 != 0 && *((uint8_t *)v2 + v5) == 0 )
  {
    if ( v3 )
      v3 = *((uint32_t *)v8[0] + 1) != 0;
    v2 = BN_to_ASN1_INTEGER((int)(uintptr_t)(v8[0]), nullptr);
    BN_free((void **)v8[0]);
    if ( v2 != nullptr )
    {
      if ( v3 )
        v2[1] |= 0x100u;
    }
    else
    {
      ERR_put_error(34, 108, 101, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    return v2;
  }
  BN_free((void **)v8[0]);
  ERR_put_error(34, 108, 100, (int)(uintptr_t)(&unk_1B15112), 0);
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: X509V3_add_value_int  (binary VA: 0x19ec9f0)
// Original: X509V3_add_value_int
// ----------------------------------------------------------------------------
int X509V3_add_value_int(char *a1, uint32_t *a2, int **a3)
{
  int v3;
  char *v4;
  char *v5;

  v3 = 1;
  if ( a2 != nullptr )
  {
    v4 = (char *)i2s_ASN1_INTEGER(0, a2);
    LOWORD(v3) = 0;
    v5 = v4;
    if ( v4 != nullptr )
    {
      v3 = X509V3_add_value(a1, v4, a3);
      CRYPTO_free(v5);
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: X509V3_get_value_bool  (binary VA: 0x19eca70)
// Original: X509V3_get_value_bool
// ----------------------------------------------------------------------------
int X509V3_get_value_bool(int a1, uint32_t *a2)
{
  if ( *(uint32_t *)(a1 + 8) != 0 )
  {
    if ( strcmp(*(const char **)(a1 + 8), "TRUE") == 0
      || strcmp(*(const char **)(a1 + 8), "true") == 0
      || strcmp(*(const char **)(a1 + 8), (const char *)&aXyz /* "XYZ" */[1]) == 0
      || strcmp(*(const char **)(a1 + 8), "y") == 0
      || strcmp(*(const char **)(a1 + 8), (const char *)&off_1B3BA10) == 0
      || strcmp(*(const char **)(a1 + 8), "yes") == 0 )
    {
      *a2 = 255;
      return 1;
    }
    if ( strcmp(*(const char **)(a1 + 8), "FALSE") == 0
      || strcmp(*(const char **)(a1 + 8), "false") == 0
      || strcmp(*(const char **)(a1 + 8), "N") == 0
      || strcmp(*(const char **)(a1 + 8), "n") == 0
      || strcmp(*(const char **)(a1 + 8), "NO") == 0
      || strcmp(*(const char **)(a1 + 8), "no") == 0 )
    {
      *a2 = 0;
      return 1;
    }
  }
  ERR_put_error(34, 110, 104, (int)(uintptr_t)(&unk_1B15112), 0);
  ERR_add_error_data(6, "section:", *(uint32_t *)a1, ",name:", *(uint32_t *)(a1 + 4), ",value:", *(uint32_t *)(a1 + 8));
  return 0;
}

// ----------------------------------------------------------------------------
// Function: X509V3_get_value_int  (binary VA: 0x19eccb0)
// Original: X509V3_get_value_int
// ----------------------------------------------------------------------------
int X509V3_get_value_int(int a1, int **a2)
{
  int *v2;

  v2 = s2i_ASN1_INTEGER(0, *(int **)(a1 + 8));
  if ( v2 != nullptr )
  {
    *a2 = v2;
    return 1;
  }
  else
  {
    ERR_add_error_data(6, "section:", *(uint32_t *)a1, ",name:", *(uint32_t *)(a1 + 4), ",value:", *(uint32_t *)(a1 + 8));
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: X509V3_parse_list  (binary VA: 0x19ecd50)
// Original: X509V3_parse_list
// ----------------------------------------------------------------------------
void * X509V3_parse_list(char *a1)
{
  char *v1;
  char v2;
  int v3;
  char *v4;
  char *v5;
  char *v6;
  char *v7;
  char *v9;
  typedef char *_g4_t_v10;
  typedef void *_g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v11)) > _g4_s1 ? (28u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v11[0] = nullptr;
  v1 = BUF_strdup(a1);
  v2 = *v1;
  v10 = v1;
  if ( *v1 != 0 && v2 != 10 && v2 != 13 )
  {
    v3 = 1;
    v4 = v1 + 1;
    v5 = nullptr;
    while ( v3 == 2 )
    {
      if ( v2 != 44 )
        goto LABEL_7;
      *(v4 - 1) = 0;
      v6 = (char *)sub_19EC2E0(v1);
      if ( v6 == nullptr )
        goto LABEL_27;
      X509V3_add_value(v5, v6, (int **)v11);
      v2 = *v4;
      v5 = nullptr;
      v1 = v4;
      v3 = 1;
      if ( *v4 == 0 )
      {
LABEL_14:
        if ( v3 != 2 )
          goto LABEL_15;
        v9 = (char *)sub_19EC2E0(v1);
        if ( v9 != nullptr )
        {
          X509V3_add_value(v5, v9, (int **)v11);
          goto LABEL_17;
        }
LABEL_27:
        ERR_put_error(34, 109, 109, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_25:
        CRYPTO_free(v10);
        sk_pop_free((void **)v11[0], (void (*)(uint32_t))X509V3_conf_free);
        return nullptr;
      }
LABEL_8:
      ++v4;
      if ( v2 == 10 || v2 == 13 )
        goto LABEL_14;
    }
    if ( v2 == 58 )
    {
      *(v4 - 1) = 0;
      v5 = (char *)sub_19EC2E0(v1);
      if ( v5 == nullptr )
        goto LABEL_24;
      v1 = v4;
      v3 = 2;
    }
    else
    {
      v3 = 1;
      if ( v2 == 44 )
      {
        *(v4 - 1) = 0;
        v5 = (char *)sub_19EC2E0(v1);
        if ( v5 == nullptr )
          goto LABEL_24;
        X509V3_add_value(v5, nullptr, (int **)v11);
        v1 = v4;
      }
    }
LABEL_7:
    v2 = *v4;
    if ( *v4 == 0 )
      goto LABEL_14;
    goto LABEL_8;
  }
LABEL_15:
  v7 = (char *)sub_19EC2E0(v1);
  if ( v7 == nullptr )
  {
LABEL_24:
    ERR_put_error(34, 109, 108, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_25;
  }
  X509V3_add_value(v7, nullptr, (int **)v11);
LABEL_17:
  CRYPTO_free(v10);
  return v11[0];
}

// ----------------------------------------------------------------------------
// Function: hex_to_string  (binary VA: 0x19ecf70)
// Original: hex_to_string
// ----------------------------------------------------------------------------
uint8_t * hex_to_string(char *a1, int a2)
{
  uint8_t *v2;
  char *v3;
  char v4;
  uint8_t *v6;

  if ( a2 == 0 || a1 == nullptr )
    return nullptr;
  v2 = CRYPTO_malloc(3 * a2 + 1, (int)(uintptr_t)(&unk_1B15112), 0);
  v6 = v2;
  if ( v2 != nullptr )
  {
    if ( a2 > 0 )
    {
      v3 = a1;
      do
      {
        *v2 = a0123456789abcd_2 /* "0123456789ABCDEF" */[(uint8_t)*v3 >> 4];
        v4 = *v3++;
        v2[2] = 58;
        v2[1] = a0123456789abcd_2 /* "0123456789ABCDEF" */[v4 & 0xF];
        v2 += 3;
      }
      while ( v3 != &a1[a2] );
      v2 = &v6[3 * a2];
    }
    *(v2 - 1) = 0;
  }
  else
  {
    ERR_put_error(34, 111, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: string_to_hex  (binary VA: 0x19ed060)
// Original: string_to_hex
// ----------------------------------------------------------------------------
uint8_t * string_to_hex(char *s, uint32_t *a2)
{
  char *v2;
  signed int v3;
  uint8_t *v4;
  uint8_t *v5;
  uint8_t v6;
  uint8_t v7; // di
  int v8;
  char v9;
  int v10;
  char v11;
  char v12;
  char v13;
  uint8_t v15;
  char v16;
  int c;
  uint8_t *v18;

  v2 = s;
  if ( s == nullptr )
  {
    ERR_put_error(34, 113, 107, (int)(uintptr_t)(&unk_1B15112), 0);
    return nullptr;
  }
  v3 = strlen(s);
  v4 = CRYPTO_malloc(v3 >> 1, (int)(uintptr_t)(&unk_1B15112), 0);
  v18 = v4;
  if ( v4 == nullptr )
  {
    ERR_put_error(34, 113, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return v18;
  }
  v5 = v4;
LABEL_4:
  v6 = *v2;
  if ( *v2 == 0 )
  {
LABEL_18:
    if ( a2 != nullptr )
      *a2 = v5 - v18;
    return v18;
  }
  while ( 1 )
  {
    if ( v6 == 58 )
    {
      ++v2;
      goto LABEL_4;
    }
    v7 = v2[1];
    if ( v7 == 0 )
    {
      ERR_put_error(34, 113, 112, (int)(uintptr_t)(&unk_1B15112), 0);
      CRYPTO_free(v18);
      return nullptr;
    }
    v15 = v6;
    c = v6;
    v8 = isupper(v6);
    v9 = v15;
    if ( v8 != 0 )
      v9 = tolower(c);
    v16 = v9;
    v10 = isupper(v7);
    v11 = v16;
    if ( v10 != 0 )
    {
      v7 = tolower(v7);
      v11 = v16;
    }
    v12 = v11 - 48;
    if ( (uint8_t)(v11 - 48) > 9u )
    {
      if ( (uint8_t)(v11 - 97) > 5u )
        goto LABEL_23;
      v12 = v11 - 87;
    }
    v13 = v7 - 48;
    if ( (uint8_t)(v7 - 48) > 9u )
      break;
LABEL_17:
    v2 += 2;
    *v5++ = v13 | (16 * v12);
    v6 = *v2;
    if ( *v2 == 0 )
      goto LABEL_18;
  }
  if ( (uint8_t)(v7 - 97) <= 5u )
  {
    v13 = v7 - 87;
    goto LABEL_17;
  }
LABEL_23:
  CRYPTO_free(v18);
  ERR_put_error(34, 113, 113, (int)(uintptr_t)(&unk_1B15112), 0);
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: name_cmp  (binary VA: 0x19ed2c0)
// Original: name_cmp
// ----------------------------------------------------------------------------
int name_cmp(char *s1, char *s)
{
  size_t n;
  int result;

  n = strlen(s);
  result = strncmp(s1, s, n);
  if ( result == 0 )
    return s1[n] != 0 && s1[n] != 46;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19ED370  (binary VA: 0x19ed370)
// Original: sub_19ED370
// ----------------------------------------------------------------------------
int sub_19ED370(void ***a1, uint32_t *a2)
{
  int v3;
  int v5;
  void **v6;
  char *v7;
  uint32_t *v8;
  uint32_t *v9;

  v3 = 1;
  if ( a2[1] == 22 )
  {
    v5 = a2[2];
    if ( v5 != 0 && *a2 != 0 )
    {
      v6 = *a1;
      if ( *a1 == nullptr )
      {
        v9 = a2;
        v6 = (void **)sk_new((int)(uintptr_t)(sub_19EC2B0));
        *a1 = v6;
        a2 = v9;
        if ( v6 == nullptr )
          return 0;
        v5 = v9[2];
      }
      v8 = a2;
      v3 = 1;
      if ( sk_find((int)(uintptr_t)(v6), v5) == -1 )
      {
        v7 = BUF_strdup((char *)v8[2]);
        if ( v7 == nullptr || sk_push((int *)*a1, (int)(uintptr_t)(v7)) == 0 )
        {
          v3 = 0;
          X509_email_free(*a1);
          *a1 = nullptr;
        }
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_19ED440  (binary VA: 0x19ed440)
// Original: sub_19ED440
// ----------------------------------------------------------------------------
void ** sub_19ED440(int a1, int *a2)
{
  int v4;
  int index_by_NID;
  int entry;
  uint32_t *data;
  int i;
  int v10;
  void **v11[8];

  v4 = -1;
  v11[0] = nullptr;
  while ( 1 )
  {
    index_by_NID = X509_NAME_get_index_by_NID(a1, 48, v4);
    v4 = index_by_NID;
    if ( index_by_NID < 0 )
      break;
    entry = X509_NAME_get_entry(a1, index_by_NID);
    data = (uint32_t *)X509_NAME_ENTRY_get_data(entry);
    if ( sub_19ED370(v11, data) == 0 )
      return nullptr;
  }
  for ( i = 0; i < sk_num((int)(uintptr_t)(a2)); ++i )
  {
    v10 = sk_value(a2, i);
    if ( *(uint32_t *)v10 == 1 && sub_19ED370(v11, *(uint32_t **)(v10 + 4)) == 0 )
      return nullptr;
  }
  return v11[0];
}

// ----------------------------------------------------------------------------
// Function: a2i_ipadd  (binary VA: 0x19ed6e0)
// Original: a2i_ipadd
// ----------------------------------------------------------------------------
int a2i_ipadd(char *dest, char *s)
{
  int v2;
  size_t v3;
  typedef int _g4_t_v5;
  typedef g4_int128_t _g4_t_src;
  typedef int _g4_t_v7;
  typedef size_t _g4_t_n;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_src)) > _g4_s1 ? (16u + sizeof(_g4_t_src)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v7)) > _g4_s2 ? (32u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_n)) > _g4_s3 ? (36u + sizeof(_g4_t_n)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v9)) > _g4_s4 ? (40u + sizeof(_g4_t_v9)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 36u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 40u);

  if ( strchr(s, 58) == nullptr )
    return sub_19EC150(dest, s) != 0 ? 4 : 0;
  v7 = 0;
  n = 0xFFFFFFFF;
  v9 = 0;
  v2 = 0;
  if ( CONF_parse_list(s, 58, 0, (int (*)(char *, int, int))sub_19EC380, (int)(uintptr_t)(&src)) != 0 )
  {
    v3 = n;
    if ( n == -1 )
    {
      if ( v7 != 16 )
        return v2;
    }
    else
    {
      if ( v7 == 16 || v9 > 3 )
        return v2;
      if ( v9 == 3 )
      {
        if ( v7 > 0 )
          return v2;
      }
      else if ( v9 == 2 )
      {
        if ( n == 0 )
        {
LABEL_11:
          v5 = v7;
          v2 = 16;
          memcpy(dest, &src, n);
          memset(&dest[v3], 0, 16 - v5);
          if ( v3 != v5 )
            memcpy(&dest[v3 + 16 - v5], (char *)&src + v3, v5 - v3);
          return v2;
        }
        if ( n != v7 )
          return v2;
      }
      else if ( n == 0 || n == v7 )
      {
        return v2;
      }
      if ( (n & 0x80000000) == 0 )
        goto LABEL_11;
    }
    v2 = 16;
    *(g4_int128_t *)dest = src;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: a2i_IPADDRESS_NC  (binary VA: 0x19ed8b0)
// Original: a2i_IPADDRESS_NC
// ----------------------------------------------------------------------------
int a2i_IPADDRESS_NC(char *a1)
{
  int v1;
  char *v2;
  char *v3;
  char *v4;
  int v5;
  typedef char _g4_t_s;
  typedef char *_g4_t_v8;
  typedef char *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef char _g4_t_dest[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_s)) > _g4_s0 ? (0u + sizeof(_g4_t_s)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v8)) > _g4_s1 ? (24u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v9)) > _g4_s2 ? (28u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v10)) > _g4_s3 ? (28u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_dest)) > _g4_s4 ? (32u + sizeof(_g4_t_dest)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 32u);

  v1 = 0;
  v2 = strchr(a1, 47);
  if ( v2 != nullptr )
  {
    v8 = v2;
    v3 = BUF_strdup(a1);
    v4 = v3;
    if ( v3 != nullptr )
    {
      v9 = &v3[v8 - a1];
      *v9 = 0;
      v5 = a2i_ipadd(dest, v3);
      if ( v5 != 0 )
      {
        v10 = a2i_ipadd(&dest[v5], v9 + 1);
        CRYPTO_free(v4);
        if ( v5 == v10 && v10 != 0 )
        {
          v1 = ASN1_OCTET_STRING_new();
          if ( v1 != 0 && ASN1_OCTET_STRING_set(v1, dest, v10 + v5) == 0 )
          {
            s = v1;
            v1 = 0;
            ASN1_OCTET_STRING_free(s);
          }
        }
        else
        {
          return 0;
        }
      }
      else
      {
        CRYPTO_free(v4);
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: a2i_IPADDRESS  (binary VA: 0x19ed9b0)
// Original: a2i_IPADDRESS
// ----------------------------------------------------------------------------
int a2i_IPADDRESS(char *a1)
{
  int v1;
  size_t v2;
  int v3;
  typedef char _g4_t_dest;
  typedef char _g4_t_v6[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_dest)) > _g4_s0 ? (0u + sizeof(_g4_t_dest)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  v1 = 0;
  v2 = a2i_ipadd(v6, a1);
  if ( v2 != 0 )
  {
    v3 = ASN1_OCTET_STRING_new();
    v1 = v3;
    if ( v3 != 0 && ASN1_OCTET_STRING_set(v3, v6, v2) == 0 )
    {
      dest = v1;
      v1 = 0;
      ASN1_OCTET_STRING_free(dest);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: X509V3_NAME_from_section  (binary VA: 0x19eda40)
// Original: X509V3_NAME_from_section
// ----------------------------------------------------------------------------
int X509V3_NAME_from_section(int a1, int *a2, int a3)
{
  int result;
  int v4;
  int v5;
  uint8_t *v6;
  int v7;
  int v8;
  char v9;
  uint8_t *v10;
  char v11;

  result = 0;
  v4 = 0;
  if ( a1 != 0 )
  {
    if ( sk_num((int)(uintptr_t)(a2)) > 0 )
    {
      do
      {
        v5 = sk_value(a2, v4);
        v6 = *(uint8_t **)(v5 + 4);
        v7 = v5;
        v8 = 0;
        v9 = *v6;
        if ( *v6 == 0 )
          goto LABEL_13;
        v10 = v6;
        if ( v9 == 58 || v9 == 44 || v9 == 46 )
        {
LABEL_17:
          if ( v10[1] != 0 )
          {
            v8 = 0;
            v6 = v10 + 1;
            if ( v10[1] != 43 )
              goto LABEL_13;
            goto LABEL_19;
          }
        }
        else
        {
          while ( 1 )
          {
            v11 = v10[1];
            if ( v11 == 0 )
              break;
            ++v10;
            if ( v11 == 44 || v11 == 58 || v11 == 46 )
              goto LABEL_17;
          }
        }
        v8 = 0;
        if ( v9 == 43 )
        {
LABEL_19:
          ++v6;
          v8 = -1;
        }
LABEL_13:
        if ( X509_NAME_add_entry_by_txt(a1, (int)(uintptr_t)(v6), a3, *(char **)(v7 + 8), -1, -1, v8) == 0 )
          return 0;
        ++v4;
      }
      while ( v4 < sk_num((int)(uintptr_t)(a2)) );
    }
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: i2c_ASN1_BIT_STRING  (binary VA: 0x19eefc0)
// Original: i2c_ASN1_BIT_STRING
// ----------------------------------------------------------------------------
int i2c_ASN1_BIT_STRING(int a1, uint8_t **a2)
{
  int v2;
  signed int n;
  int v4;
  int v5;
  char v6;
  uint8_t *v7;
  uint8_t *v8;
  uint8_t *v10;
  char v11;

  v2 = 0;
  if ( a1 != 0 )
  {
    n = *(uint32_t *)a1;
    LOBYTE(v4) = 0;
    v2 = *(uint32_t *)a1 + 1;
    if ( *(int *)a1 > 0 )
    {
      v4 = *(uint32_t *)(a1 + 12);
      if ( (v4 & 8) != 0 )
      {
        LOBYTE(v4) = v4 & 7;
        v2 = n + 1;
      }
      else
      {
        v5 = *(uint32_t *)(a1 + 8);
        while ( 1 )
        {
          v6 = *(uint8_t *)(v5 + n - 1);
          if ( v6 != 0 )
            break;
          if ( --n == 0 )
          {
            v6 = *(uint8_t *)(v5 - 1);
            v2 = 1;
            goto LABEL_8;
          }
        }
        v2 = n + 1;
LABEL_8:
        LOBYTE(v4) = 0;
        if ( (v6 & 1) == 0 )
        {
          LOBYTE(v4) = 1;
          if ( (v6 & 2) == 0 )
          {
            LOBYTE(v4) = 2;
            if ( (v6 & 4) == 0 )
            {
              LOBYTE(v4) = 3;
              if ( (v6 & 8) == 0 )
              {
                LOBYTE(v4) = 4;
                if ( (v6 & 0x10) == 0 )
                {
                  LOBYTE(v4) = 5;
                  if ( (v6 & 0x20) == 0 )
                  {
                    LOBYTE(v4) = 6;
                    if ( (v6 & 0x40) == 0 )
                      v4 = (v6 >> 7) & 7;
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( a2 != nullptr )
    {
      v7 = *a2;
      *v7 = v4;
      v10 = v7 + 1;
      v11 = v4;
      memcpy(v7 + 1, *(const void **)(a1 + 8), n);
      v8 = &v10[n];
      if ( n > 0 )
        *(v8 - 1) &= 255 << v11;
      *a2 = v8;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: c2i_ASN1_BIT_STRING  (binary VA: 0x19ef0e0)
// Original: c2i_ASN1_BIT_STRING
// ----------------------------------------------------------------------------
void ** c2i_ASN1_BIT_STRING(void ***a1, char **a2, int a3)
{
  void **v3;
  char v4;
  uint8_t *v5;
  void *v6;
  void **dest;
  char v9;
  uint8_t *v10;
  size_t n;
  char *src;

  if ( a3 <= 0 )
  {
    v3 = nullptr;
    ERR_put_error(13, 189, 152, (int)(uintptr_t)(&unk_1B15112), 0);
    return v3;
  }
  if ( a1 != nullptr && (v3 = *a1, *a1 != nullptr) || (v3 = (void **)ASN1_STRING_type_new(3)) != nullptr )
  {
    v4 = **a2;
    src = *a2 + 1;
    v3[3] = (void *)(v4 & 7 | (unsigned int)(uintptr_t)(v3[3]) & 0xFFFFFFF0 | 8);
    n = a3 - 1;
    if ( a3 == 1 )
    {
      v10 = nullptr;
    }
    else
    {
      v9 = v4;
      v5 = CRYPTO_malloc(n, (int)(uintptr_t)(&unk_1B15112), 0);
      v10 = v5;
      if ( v5 == nullptr )
      {
        ERR_put_error(13, 189, 65, (int)(uintptr_t)(&unk_1B15112), 0);
        if ( a1 != nullptr && v3 == *a1 )
          return nullptr;
        dest = v3;
        v3 = nullptr;
        ASN1_STRING_free(dest);
        return v3;
      }
      memcpy(v5, src, n);
      v10[a3 - 2] &= 255 << v9;
      src += n;
    }
    v6 = v3[2];
    *v3 = (void *)n;
    if ( v6 != nullptr )
      CRYPTO_free(v6);
    v3[2] = v10;
    v3[1] = &dword_0 + 3;
    if ( a1 != nullptr )
      *a1 = v3;
    *a2 = src;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_19EF510  (binary VA: 0x19ef510)
// Original: sub_19EF510
// ----------------------------------------------------------------------------
int sub_19EF510(uint32_t *a1, size_t **a2)
{
  size_t *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int object;
  int v8;
  int v9;
  int v10;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint8_t *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint8_t *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23[12];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v15)) > _g4_s3 ? (16u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v16)) > _g4_s4 ? (20u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v19)) > _g4_s5 ? (36u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v20)) > _g4_s6 ? (48u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v21)) > _g4_s7 ? (52u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v22)) > _g4_s8 ? (56u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v23)) > _g4_s9 ? (60u + sizeof(_g4_t_v23)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);

  v2 = (size_t *)(BUF_MEM_new());
  if ( v2 != nullptr )
  {
    ERR_clear_error();
    v3 = 0;
    v4 = 0;
    v16 = 0;
    while ( 1 )
    {
      v5 = v3 - v4;
      if ( v3 - v4 > 8 )
        goto LABEL_8;
LABEL_4:
      v12 = v5;
      if ( BUF_MEM_grow_clean(v2, v4 + 8) == 0 )
        break;
      v6 = BIO_read(a1, v3 + v2[1], v4 - v3 + 8);
      v5 = v12;
      if ( v6 < 0 && v3 == v4 )
        goto LABEL_27;
      if ( v6 > 0 )
      {
        v3 += v6;
        v5 = v3 - v4;
      }
      while ( 1 )
      {
LABEL_8:
        v14 = (uint8_t *)(v4 + v2[1]);
        v19 = v14;
        object = ASN1_get_object(&v19, v23, &v21, &v22, v5);
        v20 = object;
        if ( (object & 0x80u) != 0 )
        {
          if ( (ERR_peek_error() & 0xFFF) != 0x9B )
            goto LABEL_28;
          ERR_clear_error();
          LOBYTE(object) = v20;
        }
        v4 += v19 - v14;
        if ( (object & 1) == 0 )
          break;
        ++v16;
        v5 = v3 - v4;
        if ( v3 - v4 <= 8 )
          goto LABEL_4;
      }
      v8 = v23[0];
      if ( v16 == 0 || v23[0] != 0 || v21 != 0 )
      {
        if ( v3 - v4 < v23[0] )
        {
          v13 = v23[0] + v4 - v3;
          if ( BUF_MEM_grow_clean(v2, v23[0] + v4) == 0 )
            break;
          if ( v13 > 0 )
          {
            v15 = v4;
            v9 = v13;
            while ( 1 )
            {
              v10 = BIO_read(a1, v3 + v2[1], v9);
              if ( v10 <= 0 )
                break;
              v9 -= v10;
              v3 += v10;
              if ( v9 <= 0 )
              {
                v4 = v15;
                goto LABEL_31;
              }
            }
LABEL_27:
            ERR_put_error(13, 107, 142, (int)(uintptr_t)(&unk_1B15112), 0);
            goto LABEL_28;
          }
LABEL_31:
          v8 = v23[0];
        }
        v4 += v8;
        if ( v16 == 0 )
        {
LABEL_16:
          *a2 = v2;
          return v4;
        }
      }
      else if ( --v16 == 0 )
      {
        goto LABEL_16;
      }
    }
    ERR_put_error(13, 107, 65, (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_28:
    v4 = -1;
    BUF_MEM_free(v2);
  }
  else
  {
    v4 = -1;
    ERR_put_error(13, 107, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: a2d_ASN1_OBJECT  (binary VA: 0x19f0a30)
// Original: a2d_ASN1_OBJECT
// ----------------------------------------------------------------------------
int a2d_ASN1_OBJECT(int a1, int a2, char *s, size_t a4)
{
  size_t v4;
  size_t v5;
  char v6;
  char *v7;
  char *v8;
  unsigned int v9;
  size_t v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  char *v16;
  unsigned int v17;
  int v18;
  char v19;
  int v20;
  uint8_t *v21;
  char v22;
  uint8_t *v24;
  int i;
  typedef size_t _g4_t_v26;
  typedef size_t _g4_t_v27;
  typedef size_t _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef size_t _g4_t_v33;
  typedef void **_g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint8_t *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef signed int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint8_t _g4_t_v42[52];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v26)) > _g4_s0 ? (8u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v27)) > _g4_s1 ? (8u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v28)) > _g4_s2 ? (8u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v29)) > _g4_s3 ? (12u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v30)) > _g4_s4 ? (12u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v31)) > _g4_s5 ? (16u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v32)) > _g4_s6 ? (16u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v33)) > _g4_s7 ? (16u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v34)) > _g4_s8 ? (20u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v35)) > _g4_s9 ? (24u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v36)) > _g4_s10 ? (28u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v37)) > _g4_s11 ? (32u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v38)) > _g4_s12 ? (36u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v39)) > _g4_s13 ? (44u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v40)) > _g4_s14 ? (48u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v41)) > _g4_s15 ? (56u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v42)) > _g4_s16 ? (72u + sizeof(_g4_t_v42)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 72u);

  v4 = a4;
  v35 = 0;
  if ( a4 == 0 )
    return v35;
  if ( a4 != -1 )
  {
    v37 = *s - 48;
    if ( (unsigned int)v37 <= 2 )
      goto LABEL_4;
LABEL_47:
    ERR_put_error(13, 100, 122, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  v4 = strlen(s);
  v37 = *s - 48;
  if ( (unsigned int)v37 > 2 )
    goto LABEL_47;
LABEL_4:
  if ( (int)(v4 - 1) <= 0 )
  {
    ERR_put_error(13, 100, 138, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  v5 = v4 - 2;
  v6 = s[1];
  if ( v5 == 0 )
    return 0;
  if ( v6 != 46 && v6 != 32 )
  {
    v34 = nullptr;
    v36 = v42;
LABEL_37:
    ERR_put_error(13, 100, 131, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_38;
  }
  v7 = s + 2;
  v40 = 24;
  v35 = 0;
  v34 = nullptr;
  v36 = v42;
  v39 = 40 * v37;
  while ( 2 )
  {
    v8 = v7;
    v31 = 0;
    v9 = 0;
    v10 = v5;
    v11 = v8;
    while ( 1 )
    {
      v15 = *v11;
      --v10;
      ++v11;
      if ( v15 == 46 || v15 == 32 )
        break;
      v13 = v15 - 48;
      if ( (unsigned int)(v15 - 48) > 9 )
      {
        ERR_put_error(13, 100, 130, (int)(uintptr_t)(&unk_1B15112), 0);
        goto LABEL_38;
      }
      if ( v9 > 0x19999999 && v31 == 0 )
      {
        if ( v34 == nullptr )
        {
          v28 = v10;
          v34 = (void **)BN_new();
          v10 = v28;
          v13 = v15 - 48;
          if ( v34 == nullptr )
            goto LABEL_38;
        }
        v26 = v10;
        v29 = v13;
        v12 = BN_set_word(v34, v9);
        v10 = v26;
        v13 = v29;
        if ( v12 == 0 )
          goto LABEL_38;
        v31 = 1;
        goto LABEL_13;
      }
      if ( v31 != 0 )
      {
LABEL_13:
        v30 = v13;
        v27 = v10;
        if ( BN_mul_word(v34, 10) == 0 )
          goto LABEL_38;
        v14 = BN_add_word(v34, v30);
        v10 = v27;
        if ( v14 == 0 )
          goto LABEL_38;
        if ( v27 == 0 )
          break;
      }
      else
      {
        v9 = v15 + 10 * v9 - 48;
        if ( v10 == 0 )
          break;
      }
    }
    v16 = v11;
    v5 = v10;
    v17 = v9;
    v7 = v16;
    if ( v35 != 0 )
    {
      if ( v31 == 0 )
        goto LABEL_25;
LABEL_51:
      v38 = (BN_num_bits(v34) + 6) / 7;
      if ( v38 > v40 )
      {
        if ( v36 != v42 )
          CRYPTO_free(v36);
        v40 = v38 + 32;
        v36 = CRYPTO_malloc(v38 + 32, (int)(uintptr_t)(&unk_1B15112), 0);
        if ( v36 == nullptr )
        {
LABEL_39:
          CRYPTO_free(v36);
          goto LABEL_40;
        }
      }
      v32 = 0;
      if ( v38 != 0 )
      {
        v33 = v5;
        v41 = v15;
        v24 = v36;
        for ( i = v38; i != 0; --i )
          *v24++ = BN_div_word(v34, 128);
        v5 = v33;
        v15 = v41;
        v32 = v38;
      }
LABEL_28:
      if ( a1 != 0 )
      {
        if ( v32 + v35 > a2 )
        {
          ERR_put_error(13, 100, 107, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_38;
        }
        v20 = v32 - 1;
        v21 = (uint8_t *)(v35 + a1);
        if ( v32 - 1 > 0 )
        {
          do
          {
            v22 = v36[v20--] | 0x80;
            *v21++ = v22;
          }
          while ( v20 != 0 );
          v35 = v32 + v35 - 1;
        }
        *(uint8_t *)(a1 + v35++) = *v36;
      }
      else
      {
        v35 += v32;
      }
      if ( v5 != 0 )
      {
        if ( v15 != 32 && v15 != 46 )
          goto LABEL_37;
        continue;
      }
      if ( v36 != v42 )
        CRYPTO_free(v36);
      if ( v34 != nullptr )
        BN_free(v34);
      return v35;
    }
    break;
  }
  if ( v17 > 0x27 && v37 <= 1 )
  {
    ERR_put_error(13, 100, 147, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_38;
  }
  v17 += v39;
  if ( v31 == 0 )
  {
LABEL_25:
    v18 = 0;
    do
    {
      v19 = v17 & 0x7F;
      v17 >>= 7;
      v36[v18++] = v19;
    }
    while ( v17 != 0 );
    v32 = v18;
    goto LABEL_28;
  }
  if ( BN_add_word(v34, v39) != 0 )
    goto LABEL_51;
LABEL_38:
  if ( v36 != v42 )
    goto LABEL_39;
LABEL_40:
  if ( v34 != nullptr )
  {
    BN_free(v34);
    return 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: i2t_ASN1_OBJECT  (binary VA: 0x19f1030)
// Original: i2t_ASN1_OBJECT
// ----------------------------------------------------------------------------
size_t i2t_ASN1_OBJECT(char *a1, signed int a2, int a3)
{
  return OBJ_obj2txt(a1, a2, a3, 0);
}

// ----------------------------------------------------------------------------
// Function: i2a_ASN1_OBJECT  (binary VA: 0x19f1070)
// Original: i2a_ASN1_OBJECT
// ----------------------------------------------------------------------------
int i2a_ASN1_OBJECT(uint32_t *a1, int a2)
{
  signed int v2;
  int v3;
  char *v6;
  typedef signed int _g4_t_v7;
  typedef void *_g4_t_v8;
  typedef char *_g4_t_v9;
  typedef char _g4_t_v10[92];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v9)) > _g4_s2 ? (28u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v10)) > _g4_s3 ? (32u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);

  if ( a2 == 0 || *(uint32_t *)(a2 + 16) == 0 )
    return BIO_write(a1, (int)(uintptr_t)("NULL"), 4);
  v2 = i2t_ASN1_OBJECT(v10, 80, a2);
  v3 = v2;
  if ( v2 <= 79 )
  {
    if ( v2 > 0 )
    {
      BIO_write(a1, (int)(uintptr_t)(v10), v2);
      return v3;
    }
    return BIO_write(a1, (int)(uintptr_t)("<INVALID>"), 9);
  }
  v8 = (void *)(v2 + 1);
  v6 = (char *)(CRYPTO_malloc(v2 + 1, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( v6 == nullptr )
    return -1;
  v7 = (signed int)(uintptr_t)(v8);
  v9 = v6;
  i2t_ASN1_OBJECT(v6, v7, a2);
  BIO_write(a1, (int)(uintptr_t)(v9), v3);
  if ( v9 != v10 )
    CRYPTO_free(v9);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: c2i_ASN1_OBJECT  (binary VA: 0x19f1310)
// Original: c2i_ASN1_OBJECT
// ----------------------------------------------------------------------------
uint32_t * c2i_ASN1_OBJECT(uint32_t **a1, uint32_t *a2, signed int n)
{
  uint32_t *v3;
  void *v4;
  int v5;
  uint32_t *v6;
  uint8_t *v7;
  int v8;
  size_t v9;
  void *dest;
  void *src;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint8_t *v16;

  v3 = a2;
  v4 = (void *)*a2;
  if ( n - 1 <= 0 )
  {
LABEL_5:
    if ( a1 == nullptr || (v6 = *a1, *a1 == nullptr) || (v6[5] & 1) == 0 )
    {
      v6 = ASN1_OBJECT_new();
      v3 = a2;
      if ( v6 == nullptr )
        return v6;
      v4 = (void *)*a2;
    }
    v7 = (uint8_t *)v6[4];
    v6[4] = 0;
    if ( v7 != nullptr )
    {
      if ( n <= v6[3] )
      {
LABEL_17:
        src = v4;
        v15 = v3;
        v16 = v7;
        v9 = (size_t)v4 + n;
        memcpy(v7, src, n);
        v6[4] = (uint32_t)(uintptr_t)(v16);
        v6[3] = n;
        *v6 = 0;
        v6[1] = 0;
        if ( a1 != nullptr )
          *a1 = v6;
        *v15 = v9;
        return v6;
      }
      v6[3] = 0;
      v13 = v3;
      CRYPTO_free(v7);
      v3 = v13;
    }
    else
    {
      v6[3] = 0;
    }
    v8 = 1;
    v14 = v3;
    if ( n != 0 )
      v8 = n;
    v7 = CRYPTO_malloc(v8, (int)(uintptr_t)(&unk_1B15112), 0);
    v3 = v14;
    if ( v7 == nullptr )
    {
      ERR_put_error(13, 196, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      if ( a1 != nullptr && *a1 == v6 )
        return nullptr;
      dest = v6;
      v6 = nullptr;
      ASN1_OBJECT_free(dest);
      return v6;
    }
    v6[5] |= 8u;
    goto LABEL_17;
  }
  v5 = 0;
  while ( *((uint8_t *)v4 + v5 + 1) != 0x80 || v5 != 0 && *((char *)v4 + v5) < 0 )
  {
    if ( ++v5 >= n - 1 )
      goto LABEL_5;
  }
  v6 = nullptr;
  ERR_put_error(13, 196, 216, (int)(uintptr_t)(&unk_1B15112), 0);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: sub_19F1D50  (binary VA: 0x19f1d50)
// Original: sub_19F1D50
// ----------------------------------------------------------------------------
bool sub_19F1D50(FILE *s, void *ptr, size_t n)
{
  bool result;

  result = true;
  if ( s != nullptr )
    return n == fwrite(ptr, 1u, n, s);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19F1DB0  (binary VA: 0x19f1db0)
// Original: sub_19F1DB0
// ----------------------------------------------------------------------------
bool sub_19F1DB0(uint32_t *a1, int a2, int a3)
{
  bool result;

  result = true;
  if ( a1 != nullptr )
    return a3 == BIO_write(a1, a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19F1E10  (binary VA: 0x19f1e10)
// Original: sub_19F1E10
// ----------------------------------------------------------------------------
int sub_19F1E10(unsigned int a1, char a2, uint8_t *a3, int (*a4)(int, char *, int), int a5)
{
  uint8_t v5;
  char v6;
  int result;
  int v8;
  int v9;
  typedef char _g4_t_v10;
  typedef uint8_t _g4_t_v11[23];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (5u + sizeof(_g4_t_v11)) > _g4_s1 ? (5u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 5u);

  if ( a1 > 0xFFFF )
  {
    BIO_snprintf(v11, 11, "\\W%08lX", a1);
    return a4(a5, (char *)(v11), 10) == 0 ? -1 : 0xA;
  }
  else
  {
    if ( a1 > 0xFF )
    {
      BIO_snprintf(v11, 11, "\\U%04lX", a1);
      return a4(a5, (char *)(v11), 6) == 0 ? -1 : 6;
    }
    v5 = a1;
    v10 = a1;
    v6 = a2 & 4;
    if ( (v5 & 0x80u) == 0 )
      v6 = a2 & byte_1D2DF40[v5];
    if ( (v6 & 0x61) == 0 )
    {
      if ( (v6 & 6) != 0 )
      {
        BIO_snprintf(v11, 11, "\\%02X", v5);
        return a4(a5, (char *)(v11), 3) == 0 ? -1 : 3;
      }
      if ( v5 != 92 || (a2 & 0xF) == 0 )
        return a4(a5, &v10, 1) == 0 ? -1 : 1;
      v8 = a4(a5, (char *)(uintptr_t)((&byte_1B69B69)), 2);
      return v8 == 0 ? -1 : 2;
    }
    if ( (v6 & 8) != 0 )
    {
      if ( a3 != nullptr )
        *a3 = 1;
      return a4(a5, &v10, 1) == 0 ? -1 : 1;
    }
    v9 = a4(a5, "\\", 1);
    result = -1;
    if ( v9 != 0 )
    {
      v8 = a4(a5, &v10, 1);
      return v8 == 0 ? -1 : 2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19F1FF0  (binary VA: 0x19f1ff0)
// Original: sub_19F1FF0
// ----------------------------------------------------------------------------
int sub_19F1FF0(uint8_t *a1, int a2, char a3, char a4, uint8_t *a5, int (*a6)(int, char *, int), int a7)
{
  int v7;
  unsigned int v9;
  int v10;
  int v11;
  char v12; // si
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  typedef uint8_t *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef char _g4_t_v21;
  typedef int _g4_t_v23;
  typedef uint8_t *_g4_t_v24;
  typedef unsigned int _g4_t_v26;
  typedef uint8_t _g4_t_v27[34];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v20)) > _g4_s1 ? (16u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v21)) > _g4_s2 ? (20u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v23)) > _g4_s3 ? (28u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v24)) > _g4_s4 ? (32u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v26)) > _g4_s5 ? (52u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (58u + sizeof(_g4_t_v27)) > _g4_s6 ? (58u + sizeof(_g4_t_v27)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 58u);

  v24 = &a1[a2];
  if ( a1 == &a1[a2] )
    return 0;
  v19 = a1;
  v23 = a3 & 7;
  v7 = 0;
LABEL_18:
  v12 = -(a4 & 1) & 0x20;
  while ( 1 )
  {
    if ( v23 == 1 )
    {
      v9 = *v19;
      v26 = v9;
      ++v19;
      goto LABEL_10;
    }
    if ( (a3 & 7u) <= 1 )
    {
      v18 = UTF8_getc(v19, a2, &v26);
      if ( v18 < 0 )
        return -1;
      v19 += v18;
      v9 = v26;
LABEL_10:
      if ( v19 != v24 )
        goto LABEL_11;
LABEL_23:
      if ( (a4 & 1) != 0 )
        v12 = 64;
      goto LABEL_11;
    }
    if ( v23 == 2 )
    {
      v16 = v19[1];
      v17 = *v19 << 8;
      v19 += 2;
      v9 = v16 | v17;
      v26 = v9;
      goto LABEL_10;
    }
    if ( v23 != 4 )
      return -1;
    v14 = v19[3] | (v19[1] << 16) | (*v19 << 24);
    v15 = v19[2] << 8;
    v19 += 4;
    v9 = v15 | v14;
    v26 = v9;
    if ( v19 == v24 )
      goto LABEL_23;
LABEL_11:
    if ( (a3 & 8) != 0 )
      break;
    v13 = sub_19F1E10(v9, a4 | v12, a5, a6, a7);
    if ( v13 < 0 )
      return -1;
    v7 += v13;
    if ( v19 == v24 )
      return v7;
LABEL_17:
    v12 = 0;
    if ( v19 == a1 )
      goto LABEL_18;
  }
  v20 = UTF8_putc(v27, 6, v9);
  if ( v20 <= 0 )
  {
LABEL_16:
    if ( v19 == v24 )
      return v7;
    goto LABEL_17;
  }
  v21 = a4 | v12;
  v10 = 0;
  while ( 1 )
  {
    v11 = sub_19F1E10((uint8_t)v27[v10], v21, a5, a6, a7);
    if ( v11 < 0 )
      return -1;
    v7 += v11;
    if ( ++v10 == v20 )
      goto LABEL_16;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_19F2260  (binary VA: 0x19f2260)
// Original: sub_19F2260
// ----------------------------------------------------------------------------
int sub_19F2260(int (*a1)(int, char *, int), int a2, int16_t a3, int a4)
{
  int16_t v5;
  int v6;
  int v7;
  uint8_t *v8;
  int v9;
  char v10;
  bool v11;
  int v12;
  char v13;
  int v14;
  const char *s;
  int v17;
  int v18;
  int v19;
  uint8_t *v20;
  uint8_t *v21;
  int v22;
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef int _g4_t_v25;
  typedef char _g4_t_v26;
  typedef size_t _g4_t_v28;
  typedef size_t _g4_t_v29;
  typedef uint8_t *_g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef uint8_t *_g4_t_v32;
  typedef size_t _g4_t_v33;
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef void *_g4_t_v37;
  typedef uint32_t _g4_t_v38[9];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v23)) > _g4_s0 ? (4u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (5u + sizeof(_g4_t_v24)) > _g4_s1 ? (5u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v25)) > _g4_s2 ? (8u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v26)) > _g4_s3 ? (8u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v28)) > _g4_s4 ? (16u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v29)) > _g4_s5 ? (16u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v30)) > _g4_s6 ? (20u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v31)) > _g4_s7 ? (24u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v32)) > _g4_s8 ? (24u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v33)) > _g4_s9 ? (28u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (33u + sizeof(_g4_t_v34)) > _g4_s10 ? (33u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (34u + sizeof(_g4_t_v35)) > _g4_s11 ? (34u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (35u + sizeof(_g4_t_v36)) > _g4_s12 ? (35u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v37)) > _g4_s13 ? (36u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v38)) > _g4_s14 ? (40u + sizeof(_g4_t_v38)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 5u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 33u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 34u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 35u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);

  v5 = a3;
  v34 = 0;
  v28 = 0;
  v25 = *(uint32_t *)(a4 + 4);
  if ( (a3 & 0x40) != 0 )
  {
    s = (const char *)ASN1_tag2str(*(uint32_t *)(a4 + 4));
    v29 = strlen(s);
    v17 = a1(a2, (char *)s, v29);
    v6 = -1;
    if ( v17 == 0 )
      return v6;
    v18 = a1(a2, ":", 1);
    v5 = a3;
    if ( v18 == 0 )
      return v6;
    v28 = v29 + 1;
  }
  if ( (v5 & 0x80u) != 0
    || (v9 = 1, (v5 & 0x20) == 0)
    && ((unsigned int)(v25 - 1) > 0x1D || (v9 = byte_1D2DF20[v25]) == -1)
    && (v9 = 1, (v5 & 0x100) != 0) )
  {
    v24 = HIBYTE(v5);
    v6 = -1;
    if ( a1(a2, (char *)&off_1B5AAE7, 1) == 0 )
      return v6;
    if ( (v24 & 2) != 0 )
    {
      v19 = *(uint32_t *)(a4 + 4);
      v38[1] = a4;
      v38[0] = v19;
      v33 = i2d_ASN1_TYPE((int)(uintptr_t)(v38), nullptr);
      v20 = CRYPTO_malloc(v33, (int)(uintptr_t)(&unk_1B15112), 0);
      v32 = v20;
      if ( v20 == nullptr )
        return v6;
      v37 = v20;
      i2d_ASN1_TYPE((int)(uintptr_t)(v38), &v37);
      if ( a2 != 0 && v32 != &v32[v33] )
      {
        v21 = v32;
        while ( 1 )
        {
          v35 = a0123456789abcd /* "0123456789ABCDEF" */[*v21 >> 4];
          v36 = a0123456789abcd /* "0123456789ABCDEF" */[*v21 & 0xF];
          if ( a1(a2, &v35, 2) == 0 )
            break;
          if ( &v32[v33] == ++v21 )
            goto LABEL_43;
        }
        v6 = -1;
        CRYPTO_free(v32);
        return v6;
      }
LABEL_43:
      v22 = 2 * v33;
      CRYPTO_free(v32);
      if ( (v33 & 0x40000000) != 0 )
        return -1;
    }
    else
    {
      v7 = *(uint32_t *)a4;
      v31 = *(uint32_t *)a4;
      v8 = *(uint8_t **)(a4 + 8);
      if ( a2 != 0 )
      {
        v30 = &v8[v7];
        if ( v8 != &v8[v7] )
        {
          do
          {
            v35 = a0123456789abcd /* "0123456789ABCDEF" */[*v8 >> 4];
            v36 = a0123456789abcd /* "0123456789ABCDEF" */[*v8 & 0xF];
            if ( a1(a2, &v35, 2) == 0 )
              return -1;
          }
          while ( v30 != ++v8 );
        }
      }
      v22 = 2 * v31;
      if ( (v31 & 0x40000000) != 0 )
        return -1;
    }
    return v28 + v22 + 1;
  }
  if ( (v5 & 0x10) != 0 )
  {
    v10 = v9 | 8;
    v11 = v9 == 0;
    LOBYTE(v9) = 1;
    if ( !v11 )
      LOBYTE(v9) = v10;
  }
  v26 = v5 & 0xF;
  v23 = v9;
  v12 = sub_19F1FF0(*(uint8_t **)(a4 + 8), *(uint32_t *)a4, v9, v5 & 0xF, &v34, a1, 0);
  v13 = v23;
  if ( v12 < 0 )
    return -1;
  v6 = v12 + v28;
  if ( v34 != 0 )
    v6 += 2;
  if ( a2 == 0 )
    return v6;
  if ( v34 != 0 )
  {
    v14 = a1(a2, "\"", 1);
    v13 = v23;
    if ( v14 == 0 )
      return -1;
  }
  if ( sub_19F1FF0(*(uint8_t **)(a4 + 8), *(uint32_t *)a4, v13, v26, nullptr, a1, a2) < 0 )
    return -1;
  if ( v34 == 0 )
    return v6;
  if ( a1(a2, "\"", 1) == 0 )
    return -1;
  return v6;
}

// ----------------------------------------------------------------------------
// Function: sub_19F2660  (binary VA: 0x19f2660)
// Original: sub_19F2660
// ----------------------------------------------------------------------------
int sub_19F2660(int (*a1)(int, const char *, int), int a2, int a3, int a4, unsigned int a5)
{
  int v5;
  int v7;
  int v8;
  int i;
  int v11;
  int j;
  int v13;
  int (*v14)(int, const char *, int);
  int v15;
  int k;
  int object;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  int (*v22)(int, const char *, int);
  int v23;
  int m;
  int v25;
  int v26;
  typedef char *_g4_t_s;
  typedef char *_g4_t_v28;
  typedef int _g4_t_entry;
  typedef signed int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef unsigned int _g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef int _g4_t_data;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef const char *_g4_t_v42;
  typedef const char *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef const char *_g4_t_v45;
  typedef char _g4_t_v46[108];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_s)) > _g4_s0 ? (4u + sizeof(_g4_t_s)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v28)) > _g4_s1 ? (4u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_entry)) > _g4_s2 ? (12u + sizeof(_g4_t_entry)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v30)) > _g4_s3 ? (12u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v31)) > _g4_s4 ? (16u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v32)) > _g4_s5 ? (20u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v33)) > _g4_s6 ? (24u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v34)) > _g4_s7 ? (28u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v35)) > _g4_s8 ? (32u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v36)) > _g4_s9 ? (36u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v37)) > _g4_s10 ? (40u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_data)) > _g4_s11 ? (44u + sizeof(_g4_t_data)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v39)) > _g4_s12 ? (48u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v40)) > _g4_s13 ? (52u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v41)) > _g4_s14 ? (60u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v42)) > _g4_s15 ? (64u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v43)) > _g4_s16 ? (68u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v44)) > _g4_s17 ? (72u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v45)) > _g4_s18 ? (76u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v46)) > _g4_s19 ? (80u + sizeof(_g4_t_v46)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_entry &entry = *reinterpret_cast<_g4_t_entry *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_data &data = *reinterpret_cast<_g4_t_data *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 52u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 60u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 64u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 68u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 72u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 76u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 80u);

  v5 = a2;
  v7 = a4;
  if ( a4 < 0 )
    v7 = 0;
  v32 = v7;
  if ( v7 != 0 )
  {
    v8 = 0;
    for ( i = a1(a2, " ", 1); ; i = a1(v5, " ", 1) )
    {
      if ( i == 0 )
        return -1;
      if ( ++v8 == v32 )
        break;
    }
  }
  v11 = a5 & 0xF0000;
  if ( (a5 & 0xF0000) == 0x20000 )
  {
    v44 = 3;
    v41 = 2;
    v45 = " + ";
    v43 = ", ";
    v31 = 0;
  }
  else if ( (a5 & 0xF0000) > 0x20000 )
  {
    if ( v11 == 196608 )
    {
      v44 = 3;
      v41 = 2;
      v45 = " + ";
      v43 = "; ";
      v31 = 0;
    }
    else
    {
      if ( v11 != 0x40000 )
        return -1;
      v31 = v32;
      v44 = 3;
      v41 = 1;
      v45 = " + ";
      v43 = (const char *)&a0[1];
    }
  }
  else
  {
    if ( v11 != 0x10000 )
      return -1;
    v44 = 1;
    v41 = 1;
    v45 = "+";
    v43 = ",";
    v31 = 0;
  }
  v40 = 1;
  v42 = "=";
  if ( (a5 & 0x800000) != 0 )
  {
    v40 = 3;
    v42 = " = ";
  }
  v37 = (uint32_t *)(a5 & 0x600000);
  v39 = X509_NAME_entry_count(a3);
  if ( v39 > 0 )
  {
    v35 = -1;
    v33 = 0;
    if ( (a5 & 0x100000) == 0 )
      goto LABEL_58;
LABEL_18:
    for ( j = v39 - 1 - v33; ; j = v33 )
    {
      entry = X509_NAME_get_entry(a3, j);
      if ( v35 != -1 )
      {
        if ( *(uint32_t *)(entry + 8) == v35 )
        {
          if ( a1(v5, v45, v44) == 0 )
            return -1;
          v32 += v44;
        }
        else
        {
          if ( a1(v5, v43, v41) == 0 )
            return -1;
          if ( v31 != 0 )
          {
            v13 = v5;
            v14 = a1;
            v15 = 0;
            for ( k = v14(v13, " ", 1); k != 0; k = v14(v13, " ", 1) )
            {
              if ( ++v15 == v31 )
              {
                a1 = v14;
                v5 = v13;
                goto LABEL_60;
              }
            }
            return -1;
          }
LABEL_60:
          v32 += v31 + v41;
        }
      }
      v35 = *(uint32_t *)(entry + 8);
      object = X509_NAME_ENTRY_get_object(entry);
      data = X509_NAME_ENTRY_get_data(entry);
      v18 = OBJ_obj2nid(object);
      v36 = v18;
      if ( v37 != (uint32_t *)((uint8_t *)(uintptr_t)0x600000u) )
      {
        if ( v18 == 0 || v37 == &stru_3FFFFC.r_info )
        {
          OBJ_obj2txt(v46, 80, object, 1);
          v19 = 0;
          v30 = strlen(v46);
          v20 = a1(v5, v46, v30);
        }
        else if ( v37 != nullptr )
        {
          if ( v37 == (uint32_t *)"E0EEEEEESD_RNS0_11SAtlasArrayEPNS_5video12IVideoDriverE" )
          {
            v19 = 25;
            v28 = OBJ_nid2ln(v18);
            v30 = strlen(v28);
            v20 = a1(v5, v28, v30);
          }
          else
          {
            v30 = 0;
            v19 = 0;
            v20 = a1(v5, (const char *)&unk_1B15112, 0);
          }
        }
        else
        {
          v19 = 10;
          s = OBJ_nid2sn(v18);
          v30 = strlen(s);
          v20 = a1(v5, s, v30);
        }
        if ( v20 == 0 )
          return -1;
        if ( v30 < v19 && (a5 & 0x2000000) != 0 )
        {
          v34 = v19 - v30;
          if ( v19 - v30 > 0 )
          {
            v21 = v5;
            v22 = a1;
            v23 = 0;
            for ( m = v22(v21, " ", 1); m != 0; m = v22(v21, " ", 1) )
            {
              if ( ++v23 == v34 )
              {
                a1 = v22;
                v5 = v21;
                goto LABEL_50;
              }
            }
            return -1;
          }
LABEL_50:
          v32 += v34;
        }
        if ( a1(v5, v42, v40) == 0 )
          return -1;
        v32 += v40 + v30;
      }
      LOWORD(v25) = 0;
      if ( v36 == 0 )
        v25 = (a5 >> 17) & 0x80;
      v26 = sub_19F2260((int (*)(int, char *, int))a1, v5, a5 | v25, data);
      if ( v26 < 0 )
        return -1;
      v32 += v26;
      if ( ++v33 == v39 )
        return v32;
      if ( (a5 & 0x100000) != 0 )
        goto LABEL_18;
LABEL_58:
      ;
    }
  }
  return v32;
}

// ----------------------------------------------------------------------------
// Function: sub_19F2DF0  (binary VA: 0x19f2df0)
// Original: sub_19F2DF0
// ----------------------------------------------------------------------------
int sub_19F2DF0(uint32_t **a1, uint32_t **a2)
{
  return **a1 - **a2;
}

// ----------------------------------------------------------------------------
// Function: sub_19F2E10  (binary VA: 0x19f2e10)
// Original: sub_19F2E10
// ----------------------------------------------------------------------------
int sub_19F2E10(uint32_t *a1, uint32_t *a2)
{
  return *a1 - *a2;
}

// ----------------------------------------------------------------------------
// Function: sub_19F2E20  (binary VA: 0x19f2e20)
// Original: sub_19F2E20
// ----------------------------------------------------------------------------
void * sub_19F2E20(void *a1)
{
  void *result;

  result = a1;
  if ( (*((uint8_t *)a1 + 16) & 1) != 0 )
    return (void *)CRYPTO_free(a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: UTF8_getc  (binary VA: 0x19f3eb0)
// Original: UTF8_getc
// ----------------------------------------------------------------------------
char UTF8_getc(uint8_t *a1, int a2, unsigned int *a3)
{
  char result;
  unsigned int v4;
  int v5;
  int v6;
  uint8_t v7; // si
  uint8_t v8; // bp
  uint8_t v9; // bp
  uint8_t v10;
  uint8_t v11; // si
  uint8_t v12;
  uint8_t v13;

  result = 0;
  if ( a2 > 0 )
  {
    v4 = *a1;
    if ( (v4 & 0x80u) == 0 )
    {
      result = 1;
LABEL_4:
      *a3 = v4;
      return result;
    }
    if ( (v4 & 0xE0) == 0xC0 )
    {
      if ( a2 == 1 )
        return -1;
      result = -3;
      if ( (a1[1] & 0xC0) == 0x80 )
      {
        result = -4;
        v4 = a1[1] & 0x3F | ((v4 & 0x1F) << 6);
        if ( v4 > 0x7F )
        {
          result = 2;
          goto LABEL_4;
        }
      }
    }
    else if ( (v4 & 0xF0) == 0xE0 )
    {
      result = -1;
      if ( a2 > 2 )
      {
        result = -3;
        if ( (a1[1] & 0xC0) == 0x80 && (a1[2] & 0xC0) == 0x80 )
        {
          v4 = a1[2] & 0x3F | ((a1[1] & 0x3F) << 6) | (uint16_t)((uint8_t)v4 << 12);
          result = -4;
          if ( v4 > 0x7FF )
          {
            result = 3;
            goto LABEL_4;
          }
        }
      }
    }
    else if ( (v4 & 0xF8) == 0xF0 )
    {
      result = -1;
      if ( a2 > 3 )
      {
        result = -3;
        if ( (a1[1] & 0xC0) == 0x80 && (a1[2] & 0xC0) == 0x80 )
        {
          v9 = a1[3];
          if ( (v9 & 0xC0) == 0x80 )
          {
            v4 = ((a1[2] & 0x3F) << 6) | ((a1[1] & 0x3F) << 12) | v9 & 0x3F | ((v4 & 7) << 18);
            result = -4;
            if ( v4 > 0xFFFF )
            {
              result = 4;
              goto LABEL_4;
            }
          }
        }
      }
    }
    else if ( (v4 & 0xFC) == 0xF8 )
    {
      result = -1;
      if ( a2 > 4 )
      {
        v10 = a1[1];
        result = -3;
        if ( (v10 & 0xC0) == 0x80 )
        {
          v11 = a1[2];
          if ( (v11 & 0xC0) == 0x80 )
          {
            v13 = a1[3];
            if ( (v13 & 0xC0) == 0x80 && (a1[4] & 0xC0) == 0x80 )
            {
              v4 = ((v13 & 0x3F) << 6) | ((v11 & 0x3F) << 12) | a1[4] & 0x3F | ((v10 & 0x3F) << 18) | ((v4 & 3) << 24);
              result = -4;
              if ( v4 > 0x1FFFFF )
              {
                result = 5;
                goto LABEL_4;
              }
            }
          }
        }
      }
    }
    else
    {
      v5 = v4 & 0xFE;
      result = -2;
      if ( v5 == 252 )
      {
        result = -1;
        if ( a2 > 5 )
        {
          v6 = a1[1];
          LOWORD(v5) = 192;
          result = -3;
          if ( (v6 & v5) == 0x80 )
          {
            v7 = a1[2];
            if ( (v7 & 0xC0) == 0x80 )
            {
              result = -3;
              if ( (a1[3] & 0xC0) == 0x80 )
              {
                v12 = a1[4];
                if ( (v12 & 0xC0) == 0x80 )
                {
                  v8 = a1[5];
                  if ( (v8 & 0xC0) == 0x80 )
                  {
                    v4 = ((v12 & 0x3F) << 6)
                       | ((a1[3] & 0x3F) << 12)
                       | ((v7 & 0x3F) << 18)
                       | v8 & 0x3F
                       | ((v6 & 0x3F) << 24)
                       | ((v4 & 1) << 30);
                    result = -4;
                    if ( v4 > 0x3FFFFFF )
                    {
                      result = 6;
                      goto LABEL_4;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: UTF8_putc  (binary VA: 0x19f4220)
// Original: UTF8_putc
// ----------------------------------------------------------------------------
int UTF8_putc(uint8_t *a1, int a2, unsigned int a3)
{
  int v3;
  int result;

  v3 = a2;
  if ( a1 != nullptr )
  {
    if ( a2 <= 0 )
      return -1;
  }
  else
  {
    v3 = 6;
  }
  if ( a3 <= 0x7F )
  {
    result = 1;
    if ( a1 != nullptr )
      *a1 = a3;
  }
  else
  {
    if ( a3 <= 0x7FF )
    {
      if ( v3 != 1 )
      {
        result = 2;
        if ( a1 != nullptr )
        {
          *a1 = (a3 >> 6) | 0xC0;
          a1[1] = a3 & 0x3F | 0x80;
        }
        return result;
      }
      return -1;
    }
    result = -1;
    if ( a3 <= 0xFFFF )
    {
      if ( v3 > 2 )
      {
        result = 3;
        if ( a1 != nullptr )
        {
          *a1 = (a3 >> 12) | 0xE0;
          a1[1] = (a3 >> 6) & 0x3F | 0x80;
          a1[2] = a3 & 0x3F | 0x80;
        }
      }
    }
    else if ( a3 > 0x1FFFFF )
    {
      if ( a3 > 0x3FFFFFF )
      {
        if ( v3 > 5 )
        {
          result = 6;
          if ( a1 != nullptr )
          {
            *a1 = ((a3 & 0x40000000) != 0) | 0xFC;
            a1[1] = HIBYTE(a3) & 0x3F | 0x80;
            a1[2] = (a3 >> 18) & 0x3F | 0x80;
            a1[3] = (a3 >> 12) & 0x3F | 0x80;
            a1[4] = (a3 >> 6) & 0x3F | 0x80;
            a1[5] = a3 & 0x3F | 0x80;
          }
        }
      }
      else if ( v3 > 4 )
      {
        result = 5;
        if ( a1 != nullptr )
        {
          *a1 = HIBYTE(a3) | 0xF8;
          a1[1] = (a3 >> 18) & 0x3F | 0x80;
          a1[2] = (a3 >> 12) & 0x3F | 0x80;
          a1[3] = (a3 >> 6) & 0x3F | 0x80;
          a1[4] = a3 & 0x3F | 0x80;
        }
      }
    }
    else if ( v3 > 3 )
    {
      result = 4;
      if ( a1 != nullptr )
      {
        *a1 = (a3 >> 18) | 0xF0;
        a1[1] = (a3 >> 12) & 0x3F | 0x80;
        a1[2] = (a3 >> 6) & 0x3F | 0x80;
        a1[3] = a3 & 0x3F | 0x80;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19F4920  (binary VA: 0x19f4920)
// Original: sub_19F4920
// ----------------------------------------------------------------------------
int sub_19F4920(uint32_t *a1, uint32_t *a2, int a3, int a4, int a5, int a6, int a7)
{
  uint8_t *v8;
  uint8_t *v9;
  int v10;
  int v11;
  int v12;
  const char *v13;
  void *v14;
  void **v15;
  int v16;
  char *v18;
  int v19;
  int v20;
  const char *v21;
  int v22;
  int v23;
  uint8_t *v24;
  uint8_t *v25;
  int v26;
  int v27;
  uint8_t *v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int *v33;
  char *v34;
  int v35;
  int v36;
  char v37;
  int v38;
  int v39;
  const char *v40;
  void **v41;
  int v42;
  void *v43;
  int v44;
  const char *v45;
  void **v46;
  int v47;
  int v48;
  const char *v49;
  int v50;
  const char *v51;
  int v52;
  int v53;
  int v54;
  typedef uint32_t *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef signed int _g4_t_v57;
  typedef void **_g4_t_v58;
  typedef void **_g4_t_v59;
  typedef void **_g4_t_v60;
  typedef int _g4_t_object;
  typedef int _g4_t_v62;
  typedef char *_g4_t_v64;
  typedef int *_g4_t_v65;
  typedef uint8_t *_g4_t_v66;
  typedef char _g4_t_v67;
  typedef unsigned int _g4_t_v68;
  typedef signed int _g4_t_v69;
  typedef uint8_t *_g4_t_v70;
  typedef char *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef void *_g4_t_v75;
  typedef uint8_t _g4_t_v76[156];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_v55)) > _g4_s0 ? (0u + sizeof(_g4_t_v55)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v56)) > _g4_s1 ? (8u + sizeof(_g4_t_v56)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v57)) > _g4_s2 ? (12u + sizeof(_g4_t_v57)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v58)) > _g4_s3 ? (40u + sizeof(_g4_t_v58)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v59)) > _g4_s4 ? (40u + sizeof(_g4_t_v59)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v60)) > _g4_s5 ? (40u + sizeof(_g4_t_v60)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_object)) > _g4_s6 ? (44u + sizeof(_g4_t_object)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v62)) > _g4_s7 ? (48u + sizeof(_g4_t_v62)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v64)) > _g4_s8 ? (56u + sizeof(_g4_t_v64)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v65)) > _g4_s9 ? (56u + sizeof(_g4_t_v65)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v66)) > _g4_s10 ? (56u + sizeof(_g4_t_v66)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v67)) > _g4_s11 ? (60u + sizeof(_g4_t_v67)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v68)) > _g4_s12 ? (64u + sizeof(_g4_t_v68)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v69)) > _g4_s13 ? (68u + sizeof(_g4_t_v69)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v70)) > _g4_s14 ? (88u + sizeof(_g4_t_v70)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v71)) > _g4_s15 ? (92u + sizeof(_g4_t_v71)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v72)) > _g4_s16 ? (96u + sizeof(_g4_t_v72)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v73)) > _g4_s17 ? (100u + sizeof(_g4_t_v73)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v74)) > _g4_s18 ? (104u + sizeof(_g4_t_v74)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v75)) > _g4_s19 ? (108u + sizeof(_g4_t_v75)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v76)) > _g4_s20 ? (112u + sizeof(_g4_t_v76)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 0u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 40u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 40u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 40u);
  _g4_t_object &object = *reinterpret_cast<_g4_t_object *>(_g4_sf + 44u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 56u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 56u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 56u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 60u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 64u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 68u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 88u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 92u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 96u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 100u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 104u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 108u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 112u);

  v8 = (uint8_t *)*a2;
  v75 = nullptr;
  v70 = v8;
  v68 = (unsigned int)(uintptr_t)(&v8[a3]);
  if ( v8 >= &v8[a3] )
  {
    v16 = 1;
    goto LABEL_16;
  }
  while ( 1 )
  {
    object = ASN1_get_object(&v70, &v72, &v73, &v74, a3);
    if ( (object & 0x80u) != 0 )
    {
      v55 = a1;
      v15 = nullptr;
      v16 = 0;
      BIO_write(v55, (int)(uintptr_t)("Error in encoding\n"), 18);
      v14 = v75;
      goto LABEL_12;
    }
    v9 = v70;
    if ( BIO_printf((int)(uintptr_t)(a2), (int)(uintptr_t)("%5ld:"), (int)(uintptr_t)(a1), "%5ld:", &v8[a4 - *a2]) <= 0 )
      goto LABEL_11;
    v11 = v9 - v8;
    v64 = (char *)v11;
    if ( object == 33 )
    {
      if ( BIO_printf(v11, a5, (int)(uintptr_t)(a1), "d=%-2d hl=%ld l=inf  ", a5, v11) <= 0 )
        goto LABEL_11;
    }
    else if ( BIO_printf(v10, a5, (int)(uintptr_t)(a1), "d=%-2d hl=%ld l=%4ld ", a5, v11, v72) <= 0 )
    {
      goto LABEL_11;
    }
    v67 = v74;
    v12 = 0;
    if ( a6 != 0 )
      v12 = a5;
    v13 = "cons: ";
    if ( (object & 0x20) == 0 )
      v13 = "prim: ";
    v69 = v73;
    if ( BIO_write(a1, (int)(uintptr_t)(v13), 6) <= 5 )
      goto LABEL_11;
    BIO_indent(a1, v12, 128);
    if ( (v67 & 0xC0) == 0xC0 )
    {
      v18 = "priv [ %d ] ";
      v57 = v69;
      goto LABEL_25;
    }
    if ( v67 < 0 )
    {
      v18 = "cont [ %d ]";
      v57 = v69;
      goto LABEL_25;
    }
    if ( (v67 & 0x40) != 0 )
    {
      v18 = "appl [ %d ]";
      v57 = v69;
      goto LABEL_25;
    }
    if ( v69 > 30 )
    {
      v18 = "<ASN1 %d>";
      v57 = v69;
LABEL_25:
      BIO_snprintf(v76, 128, v18, v57);
      v21 = (const char *)(v76);
      goto LABEL_26;
    }
    v21 = ASN1_tag2str(v69);
LABEL_26:
    if ( BIO_printf(v19, v20, (int)(uintptr_t)(a1), "%-18s", v21) <= 0 )
      goto LABEL_11;
    v62 = a3 - (uint32_t)(uintptr_t)(v64);
    if ( (object & 0x20) != 0 )
    {
      v25 = &v70[v72];
      if ( BIO_write(a1, (int)(uintptr_t)(&a0[1]), 1) <= 0 )
        goto LABEL_11;
      v23 = v72;
      if ( v62 < v72 )
      {
        v15 = nullptr;
        BIO_printf(v26, v62, (int)(uintptr_t)(a1), "length is greater than %ld\n", v62);
        v16 = 0;
        v14 = v75;
        goto LABEL_12;
      }
      if ( object != 33 || v72 != 0 )
      {
        while ( 1 )
        {
          v24 = v70;
          if ( v25 <= v70 )
            break;
          if ( sub_19F4920(v23, &v70[a4 - *a2], a5 + 1, a6, a7) == 0 )
            goto LABEL_11;
          v23 = v72;
        }
      }
      else
      {
        v28 = v70;
        while ( 1 )
        {
          v29 = sub_19F4920(v68 - (uint32_t)(uintptr_t)(v28), &v28[a4 - *a2], a5 + 1, a6, a7);
          if ( v29 == 0 )
            goto LABEL_11;
          if ( v29 == 2 )
            break;
          v28 = v70;
          if ( v68 <= (unsigned int)(uintptr_t)(v70) )
            goto LABEL_75;
        }
        v24 = v70;
        v23 = v72;
      }
      goto LABEL_55;
    }
    if ( v74 == 0 )
      break;
    v70 += v72;
    if ( BIO_write(a1, (int)(uintptr_t)(&a0[1]), 1) <= 0 )
      goto LABEL_11;
    v24 = v70;
    v23 = v72;
LABEL_55:
    a3 = v62 - v23;
    if ( v8 >= v24 || v68 <= (unsigned int)(uintptr_t)(v24) )
    {
LABEL_75:
      v14 = v75;
      v15 = nullptr;
      v16 = 1;
      goto LABEL_12;
    }
    v8 = v24;
  }
  if ( (unsigned int)(v73 - 19) <= 1 || v73 == 22 || v73 == 26 || v73 == 18 || v73 == 12 || v73 == 23 || v73 == 24 )
  {
    if ( BIO_write(a1, (int)(uintptr_t)(":"), 1) <= 0 )
      goto LABEL_11;
    if ( v72 > 0 )
    {
      v27 = BIO_write(a1, (int)(uintptr_t)(v70), v72);
      if ( v27 != v72 )
        goto LABEL_11;
    }
    goto LABEL_52;
  }
  switch ( v73 )
  {
    case 6:
      v71 = (char *)(v8);
      if ( d2i_ASN1_OBJECT((uint32_t **)&v75, (int *)&v71, (int)(uintptr_t)(&v64[v72])) != nullptr )
      {
        if ( BIO_write(a1, (int)(uintptr_t)(":"), 1) <= 0 )
          goto LABEL_11;
        i2a_ASN1_OBJECT(a1, (int)(uintptr_t)(v75));
      }
      else if ( BIO_write(a1, (int)(uintptr_t)(":BAD OBJECT"), 11) <= 0 )
      {
        goto LABEL_11;
      }
      goto LABEL_52;
    case 1:
      v71 = (char *)(v8);
      v32 = d2i_ASN1_BOOLEAN(0, &v71, &v64[v72]);
      if ( v32 < 0 && BIO_write(a1, (int)(uintptr_t)("Bad boolean\n"), 12) <= 0 )
        goto LABEL_11;
      BIO_printf(v30, v31, (int)(uintptr_t)(a1), (char *)&off_1B8E677, v32);
      goto LABEL_52;
    case 30:
      goto LABEL_52;
    default:
      break;
  }
  if ( v73 != 4 )
  {
    if ( v73 == 2 )
    {
      v71 = (char *)(v8);
      v41 = (void **)d2i_ASN1_INTEGER(nullptr, &v71, (int)(uintptr_t)(&v64[v72]));
      if ( v41 == nullptr )
      {
        v56 = 11;
        v51 = "BAD INTEGER";
        goto LABEL_140;
      }
      v58 = v41;
      v42 = BIO_write(a1, (int)(uintptr_t)(":"), 1);
      v41 = v58;
      if ( v42 <= 0 )
        goto LABEL_11;
      if ( v58[1] == (char *)&dword_100 + 2 )
      {
        v53 = BIO_write(a1, (int)(uintptr_t)("-"), 1);
        v41 = v58;
        if ( v53 <= 0 )
          goto LABEL_11;
      }
      v43 = *v41;
      v44 = 0;
      v45 = "%02X";
      if ( (int)(uintptr_t)(*v41) > 0 )
      {
        v66 = v8;
        v46 = v41;
        while ( BIO_printf((int)(uintptr_t)("%02X"), (int)(uintptr_t)(v45), (int)(uintptr_t)(a1), "%02X", *((uint8_t *)v46[2] + v44)) > 0 )
        {
          ++v44;
          v43 = *v46;
          if ( (int)(uintptr_t)(*v46) <= v44 )
          {
LABEL_113:
            v41 = v46;
            v8 = v66;
            goto LABEL_114;
          }
        }
        goto LABEL_11;
      }
LABEL_114:
      if ( v43 == nullptr )
      {
        v56 = 2;
        v51 = "00";
        goto LABEL_140;
      }
    }
    else
    {
      if ( v73 != 10 )
      {
        if ( a7 != 0 && v72 > 0 )
        {
          if ( BIO_write(a1, (int)(uintptr_t)(&a0[1]), 1) <= 0 )
            goto LABEL_11;
          v22 = v72;
          if ( a7 != -1 && a7 <= v72 )
            v22 = a7;
          if ( (int)BIO_dump_indent(a1, v70, v22, 6) <= 0 )
            goto LABEL_11;
          goto LABEL_53;
        }
LABEL_52:
        if ( BIO_write(a1, (int)(uintptr_t)(&a0[1]), 1) <= 0 )
          goto LABEL_11;
LABEL_53:
        v23 = v72;
        v24 = &v70[v72];
        v70 += v72;
        if ( v73 == 0 && v74 == 0 )
        {
          v14 = v75;
          v15 = nullptr;
          v16 = 2;
          goto LABEL_12;
        }
        goto LABEL_55;
      }
      v71 = (char *)(v8);
      v41 = (void **)d2i_ASN1_ENUMERATED(nullptr, &v71, (int)(uintptr_t)(&v64[v72]));
      if ( v41 != nullptr )
      {
        v59 = v41;
        v47 = BIO_write(a1, (int)(uintptr_t)(":"), 1);
        v41 = v59;
        if ( v47 <= 0 )
          goto LABEL_11;
        if ( v59[1] == (char *)&dword_108 + 2 )
        {
          v54 = BIO_write(a1, (int)(uintptr_t)("-"), 1);
          v41 = v59;
          if ( v54 <= 0 )
            goto LABEL_11;
        }
        v43 = *v41;
        v48 = 0;
        v49 = "%02X";
        if ( (int)(uintptr_t)(*v41) > 0 )
        {
          v66 = v8;
          v46 = v41;
          while ( BIO_printf((int)(uintptr_t)("%02X"), (int)(uintptr_t)(v49), (int)(uintptr_t)(a1), "%02X", *((uint8_t *)v46[2] + v48)) > 0 )
          {
            ++v48;
            v43 = *v46;
            if ( (int)(uintptr_t)(*v46) <= v48 )
              goto LABEL_113;
          }
LABEL_11:
          v14 = v75;
          v15 = nullptr;
          v16 = 0;
          goto LABEL_12;
        }
        goto LABEL_114;
      }
      v56 = 11;
      v51 = "BAD ENUMERATED";
LABEL_140:
      v60 = v41;
      v52 = BIO_write(a1, (int)(uintptr_t)(v51), v56);
      v41 = v60;
      if ( v52 <= 0 )
        goto LABEL_11;
    }
    ASN1_STRING_free(v41);
    goto LABEL_52;
  }
  v71 = (char *)(v8);
  v33 = (int *)d2i_ASN1_OCTET_STRING(nullptr, &v71, (int)(uintptr_t)(&v64[v72]));
  v65 = v33;
  if ( v33 == nullptr )
    goto LABEL_52;
  if ( *v33 <= 0 )
    goto LABEL_136;
  v34 = (char *)v33[2];
  v71 = v34;
  v35 = *v33;
  if ( *v33 <= 0 )
  {
LABEL_134:
    if ( BIO_write(a1, (int)(uintptr_t)(":"), 1) <= 0 || BIO_write(a1, (int)(uintptr_t)(v71), *v65) <= 0 )
      goto LABEL_104;
LABEL_136:
    v39 = 0;
    goto LABEL_130;
  }
  v36 = 0;
  while ( 1 )
  {
    v37 = v34[v36];
    if ( v37 != 10 && (uint8_t)v37 <= 0x1Fu )
      break;
    if ( (uint8_t)v37 > 0x7Eu )
      goto LABEL_98;
LABEL_95:
    if ( ++v36 == v35 )
      goto LABEL_134;
  }
  if ( v37 == 13 || v37 == 9 )
    goto LABEL_95;
LABEL_98:
  if ( a7 != 0 )
  {
    if ( BIO_write(a1, (int)(uintptr_t)(&a0[1]), 1) <= 0 )
      goto LABEL_104;
    if ( a7 == -1 )
    {
      v50 = *v65;
    }
    else
    {
      v50 = *v65;
      if ( a7 <= *v65 )
        v50 = a7;
    }
    if ( (int)BIO_dump_indent(a1, v71, v50, 6) <= 0 )
      goto LABEL_104;
    v39 = 1;
    goto LABEL_130;
  }
  if ( BIO_write(a1, (int)(uintptr_t)("[HEX DUMP]:"), 11) > 0 )
  {
    v39 = 0;
    if ( *v65 <= 0 )
    {
LABEL_130:
      ASN1_STRING_free((void **)v65);
      if ( v39 == 0 )
        goto LABEL_52;
      goto LABEL_53;
    }
    v40 = "%02X";
    while ( BIO_printf((int)(uintptr_t)(v40), v38, (int)(uintptr_t)(a1), "%02X", (uint8_t)v71[v39]) > 0 )
    {
      if ( *v65 <= ++v39 )
      {
        v39 = 0;
        goto LABEL_130;
      }
    }
  }
LABEL_104:
  v15 = (void **)v65;
  v14 = v75;
  v16 = 0;
LABEL_12:
  if ( v14 != nullptr )
    ASN1_OBJECT_free(v14);
  if ( v15 != nullptr )
    ASN1_STRING_free(v15);
LABEL_16:
  *a2 = (uint32_t)(uintptr_t)(v70);
  return v16;
}

// ----------------------------------------------------------------------------
// Function: sub_19F5AE0  (binary VA: 0x19f5ae0)
// Original: sub_19F5AE0
// ----------------------------------------------------------------------------
int sub_19F5AE0(int a1, char ****a2)
{
  char ***v3;

  if ( a1 == 1 )
  {
    v3 = *a2;
    *v3 = OBJ_nid2obj(0x4Fu);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: NETSCAPE_CERT_SEQUENCE_new  (binary VA: 0x19f5bb0)
// Original: NETSCAPE_CERT_SEQUENCE_new
// ----------------------------------------------------------------------------
int NETSCAPE_CERT_SEQUENCE_new()
{
  return ASN1_item_new((int)(uintptr_t)(&NETSCAPE_CERT_SEQUENCE_it));
}

// ----------------------------------------------------------------------------
// Function: NETSCAPE_CERT_SEQUENCE_free  (binary VA: 0x19f5be0)
// Original: NETSCAPE_CERT_SEQUENCE_free
// ----------------------------------------------------------------------------
int NETSCAPE_CERT_SEQUENCE_free(char a1)
{
  return ASN1_item_free(a1, NETSCAPE_CERT_SEQUENCE_it);
}

// ----------------------------------------------------------------------------
// Function: sub_19F7450  (binary VA: 0x19f7450)
// Original: sub_19F7450
// ----------------------------------------------------------------------------
bool sub_19F7450(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  int v7;
  int v9;
  bool v10;
  int v11;
  int v12;
  int v13;

  v5 = a2;
  if ( a2 > 20 )
  {
    while ( BIO_write(a1, (int)(uintptr_t)(asc_20CDEC4), 20) == 20 )
    {
      v5 -= 20;
      if ( v5 <= 20 )
        goto LABEL_7;
    }
    return false;
  }
LABEL_7:
  v9 = BIO_write(a1, (int)(uintptr_t)(asc_20CDEC4), v5);
  v7 = 0;
  if ( v5 != v9 )
    return v7;
  if ( (*a5 & 0x100) != 0 )
  {
    v10 = true;
    a4 = 0;
  }
  else
  {
    v10 = a4 == 0;
  }
  if ( (*a5 & 0x40) != 0 )
  {
    a3 = 0;
LABEL_19:
    v7 = 1;
    if ( v10 )
      return v7;
    goto LABEL_12;
  }
  if ( a3 == 0 )
    goto LABEL_19;
LABEL_12:
  if ( a3 == 0 || (v11 = BIO_puts(a1, a3), v7 = 0, v11 > 0) )
  {
    if ( a4 == 0 )
      return BIO_write(a1, (int)(uintptr_t)(": "), 2) == 2;
    if ( a3 == 0 )
    {
      v13 = BIO_puts(a1, a4);
      v7 = 0;
      if ( v13 <= 0 )
        return v7;
      return BIO_write(a1, (int)(uintptr_t)(": "), 2) == 2;
    }
    v12 = BIO_printf(a3, a4, (int)(uintptr_t)(a1), " (%s)", a4);
    v7 = 0;
    if ( v12 > 0 )
      return BIO_write(a1, (int)(uintptr_t)(": "), 2) == 2;
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: asn1_template_print_ctx  (binary VA: 0x19f7720)
// Original: asn1_template_print_ctx
// ----------------------------------------------------------------------------
int asn1_template_print_ctx(uint32_t *a1, int **a2, int a3, int *a4, int *a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  const char *v10;
  int v11;
  int result;
  int *v13;
  int i;
  int v15;
  int v16;
  int v17;
  int v18;

  v5 = 0;
  v6 = *a5;
  v7 = *a4;
  if ( (*a5 & 0x80u) != 0 )
    v5 = *(uint32_t *)(a4[4] + 24);
  v8 = 0;
  if ( (v6 & 0x40) == 0 )
    v8 = a4[3];
  if ( (v7 & 6) == 0 )
    return sub_19F7980(a3, a4[4], v8, v5, 0, a5);
  if ( v8 != 0 )
  {
    if ( (v6 & 4) != 0 )
    {
      v9 = *a4 & 2;
      v10 = "SET";
      if ( v9 == 0 )
        v10 = "SEQUENCE";
      v11 = BIO_printf(a4[3], v9, (int)(uintptr_t)(a1), "%*s%s OF %s {\n", a3, &unk_1B15112, v10, a4[3]);
      result = 0;
      if ( v11 <= 0 )
        return result;
    }
    else
    {
      v17 = BIO_printf(a3, v7, (int)(uintptr_t)(a1), "%*s%s:\n", a3, &unk_1B15112, v8);
      result = 0;
      if ( v17 <= 0 )
        return result;
    }
  }
  v13 = *a2;
  for ( i = 0; i < sk_num((int)(uintptr_t)(v13)); ++i )
  {
    if ( i <= 0 || BIO_puts(a1, (int)(uintptr_t)(&a0[1])) > 0 )
    {
      sk_value(v13, i);
      if ( sub_19F7980(a3 + 2, a4[4], 0, 0, 1, a5) != 0 )
        continue;
    }
    return 0;
  }
  if ( i != 0 || (v18 = BIO_printf(v15, v16, (int)(uintptr_t)(a1), "%*s<EMPTY>\n", a3 + 2, &unk_1B15112), result = 0, v18 > 0) )
  {
    result = 1;
    if ( (*(uint8_t *)a5 & 2) != 0 )
      return BIO_printf((int)(uintptr_t)(a5), v16, (int)(uintptr_t)(a1), "%*s}\n", a3, &unk_1B15112) > 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19F7980  (binary VA: 0x19f7980)
// Original: sub_19F7980
// ----------------------------------------------------------------------------
bool sub_19F7980(uint32_t *a1, int **a2, int a3, int a4, int a5, int a6, int a7, int *a8)
{
  uint32_t *v8;
  int **v9;
  int v10;
  int v11;
  char v12;
  int v13;
  bool result;
  int *v15;
  int v16;
  bool v17;
  int (*v18)(uint32_t *, int **, int, int, int *);
  int (*v19)(uint32_t *, int **, int, void *, int *);
  int v20;
  const char *v21;
  int v22;
  int v23;
  uint32_t *v24;
  int *v25;
  int *v26;
  int **field_ptr;
  int choice_selector;
  int v29;
  int v30;
  int v31;
  int16_t *v32;
  int v33;
  unsigned int v34;
  const char *v35;
  int v36;
  int v37;
  int v38;
  int v39;
  bool v40;
  bool v41;
  bool v42;
  int **v43;
  int *v44;
  unsigned int v45;
  char *v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  void *v52;
  int *v53;
  const char *v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  typedef int _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef int *_g4_t_v63;
  typedef bool _g4_t_v64;
  typedef int **_g4_t_v65;
  typedef int (*_g4_t_v66)(int, int **, int, uint32_t *);
  typedef int *_g4_t_v67;
  typedef uint32_t *_g4_t_v68;
  typedef uint32_t _g4_t_v69[3];
  typedef char _g4_t_v70[108];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v60)) > _g4_s0 ? (4u + sizeof(_g4_t_v60)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v61)) > _g4_s1 ? (4u + sizeof(_g4_t_v61)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v62)) > _g4_s2 ? (4u + sizeof(_g4_t_v62)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v63)) > _g4_s3 ? (8u + sizeof(_g4_t_v63)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v64)) > _g4_s4 ? (8u + sizeof(_g4_t_v64)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v65)) > _g4_s5 ? (12u + sizeof(_g4_t_v65)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v66)) > _g4_s6 ? (16u + sizeof(_g4_t_v66)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v67)) > _g4_s7 ? (16u + sizeof(_g4_t_v67)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v68)) > _g4_s8 ? (20u + sizeof(_g4_t_v68)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v69)) > _g4_s9 ? (36u + sizeof(_g4_t_v69)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v70)) > _g4_s10 ? (48u + sizeof(_g4_t_v70)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 4u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 4u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 4u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 8u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 8u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 12u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 16u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 16u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 20u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 36u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 48u);

  v8 = a1;
  v9 = a2;
  v10 = a4;
  v66 = nullptr;
  v11 = *(uint32_t *)(a4 + 16);
  if ( v11 != 0 )
  {
    v66 = *(int (**)(int, int **, int, uint32_t *))(v11 + 16);
    if ( v66 != nullptr )
    {
      v69[0] = (uint32_t)(uintptr_t)(a1);
      v69[1] = a3;
      v69[2] = (uint32_t)(uintptr_t)(a8);
    }
  }
  if ( *a2 != nullptr )
  {
    v12 = *(uint8_t *)a4;
    switch ( v12 )
    {
      case 0:
        v15 = *(int **)(a4 + 8);
        if ( v15 != nullptr )
        {
          v16 = asn1_template_print_ctx(v8, v9, a3, v15, a8);
          v13 = 0;
          if ( v16 == 0 )
            return v13;
          v11 = *(uint32_t *)(a4 + 16);
        }
LABEL_12:
        v60 = v11;
        v17 = sub_19F7450(v8, a3, a5, a6, a8);
        v13 = 0;
        if ( !v17 )
          return v13;
        if ( v60 != 0 )
        {
          v18 = *(int (**)(uint32_t *, int **, int, int, int *))(v60 + 28);
          if ( v18 != nullptr )
            return v18(v8, v9, a4, a3, a8) != 0;
        }
        v67 = *v9;
        if ( *(uint8_t *)a4 == 5 )
        {
          v34 = (*v9)[1];
          BYTE1(v34) &= ~1u;
        }
        else
        {
          v34 = *(uint32_t *)(a4 + 4);
        }
        if ( v34 == -4 )
        {
          v35 = nullptr;
          v9 = (int **)(v67 + 1);
          v34 = *v67;
          v67 = (int *)v67[1];
          if ( (*(uint8_t *)a8 & 0x10) != 0 )
            goto LABEL_50;
        }
        else
        {
          v35 = nullptr;
          if ( (*(uint8_t *)a8 & 8) == 0 )
            goto LABEL_50;
        }
        v62 = v34;
        v35 = ASN1_tag2str(v34);
        v34 = v62;
LABEL_50:
        if ( v34 == 5 )
        {
          v21 = "NULL\n";
          return BIO_puts(v8, (int)(uintptr_t)(v21)) > 0;
        }
        if ( v35 == nullptr
          || (v61 = v34, v36 = BIO_puts(v8, (int)(uintptr_t)(v35)), v13 = 0, v36 > 0)
          && (v37 = BIO_puts(v8, (int)(uintptr_t)(":")), v13 = 0, v34 = v61, v37 > 0) )
        {
          v38 = v34 + 3;
          switch ( v34 )
          {
            case 0xFFFFFFFD:
            case 0x10u:
            case 0x11u:
              v56 = BIO_puts(v8, (int)(uintptr_t)(&a0[1]));
              v13 = 0;
              if ( v56 <= 0 )
                return v13;
              v57 = ASN1_parse_dump(v8, v67[2], *v67, a3, 0);
              v13 = 0;
              if ( v57 <= 0 )
                return v13;
              goto LABEL_84;
            case 1u:
              v53 = *v9;
              if ( *v9 == (int *)-1 && (v53 = *(int **)(a4 + 20)) == (int *)-1 )
              {
                v54 = "BOOL ABSENT";
              }
              else
              {
                v54 = "TRUE";
                if ( v53 == nullptr )
                  v54 = "FALSE";
              }
              v55 = BIO_puts(v8, (int)(uintptr_t)(v54));
              v13 = 0;
              if ( v55 <= 0 )
                return v13;
              goto LABEL_21;
            case 2u:
            case 0xAu:
              v52 = (void *)i2s_ASN1_INTEGER(0, v67);
              v64 = BIO_puts(v8, (int)(uintptr_t)(v52)) > 0;
              CRYPTO_free(v52);
              v39 = v64;
              goto LABEL_56;
            case 3u:
            case 4u:
              if ( v67[1] == 3 )
              {
                v59 = BIO_printf((int)(uintptr_t)(v67), v38, (int)(uintptr_t)(v8), " (%ld unused bits)\n", v67[3] & 7);
                v13 = 0;
                if ( v59 <= 0 )
                  return v13;
              }
              else
              {
                v50 = BIO_puts(v8, (int)(uintptr_t)(&a0[1]));
                v13 = 0;
                if ( v50 <= 0 )
                  return v13;
              }
              if ( *v67 <= 0 || (v51 = BIO_dump_indent(v8, v67[2], *v67, a3 + 2), v13 = 0, v51 > 0) )
LABEL_84:
                v13 = 1;
              break;
            case 6u:
              v44 = *v9;
              v45 = OBJ_obj2nid((int)(uintptr_t)(*v9));
              v46 = OBJ_nid2ln(v45);
              if ( v46 == nullptr )
                v46 = (char *)&unk_1B15112;
              OBJ_obj2txt(v70, 80, (int)(uintptr_t)(v44), 1);
              v49 = BIO_printf(v47, v48, (int)(uintptr_t)(v8), "%s (%s)", v46, v70);
              v13 = 0;
              if ( v49 <= 0 )
                return v13;
              goto LABEL_21;
            case 0x17u:
              v39 = ASN1_UTCTIME_print(v8, v67);
              goto LABEL_56;
            case 0x18u:
              v39 = ASN1_GENERALIZEDTIME_print(v8, v67);
              goto LABEL_56;
            default:
              v39 = ASN1_STRING_print_ex((int)(uintptr_t)(v8), (int)(uintptr_t)(v67), a8[4]);
LABEL_56:
              v13 = 0;
              if ( v39 == 0 )
                return v13;
              goto LABEL_21;
          }
        }
        return v13;
      case 1:
      case 6:
        if ( a7 == 0 )
        {
          v42 = sub_19F7450(a1, a3, a5, a6, a8);
          v13 = 0;
          if ( !v42 )
            return v13;
        }
        if ( a6 != 0 || a5 != 0 )
        {
          v32 = (int16_t *)" {\n";
          if ( (*(uint8_t *)a8 & 2) == 0 )
            v32 = (int16_t *)(&a0[1]);
          v33 = BIO_puts(v8, (int)(uintptr_t)(v32));
          v13 = 0;
          if ( v33 <= 0 )
            return v13;
        }
        if ( v66 != nullptr )
        {
          v22 = v66(8, v9, a4, v69);
          v13 = 0;
          if ( v22 == 0 )
            return v13;
          LOBYTE(v13) = 1;
          if ( v22 == 2 )
            return v13;
        }
        if ( *(int *)(a4 + 12) <= 0 )
          goto LABEL_69;
        v65 = v9;
        v68 = v8;
        v23 = 0;
        v24 = *(uint32_t **)(a4 + 8);
        v25 = (int *)(asn1_do_adb(v65, v24, 1));
        while ( 2 )
        {
          v26 = v25;
          field_ptr = (int **)asn1_get_field_ptr(v65, v25);
          if ( asn1_template_print_ctx(v68, field_ptr, a3 + 2, v26, a8) == 0 )
            return false;
          ++v23;
          v24 += 5;
          if ( *(uint32_t *)(a4 + 12) > v23 )
          {
            v25 = (int *)(asn1_do_adb(v65, v24, 1));
            continue;
          }
          break;
        }
        v8 = v68;
        v9 = v65;
        v10 = a4;
LABEL_69:
        if ( (*(uint8_t *)a8 & 2) == 0
          || (v58 = BIO_printf(a3, (int)(uintptr_t)(a8), (int)(uintptr_t)(v8), "%*s}\n", a3, &unk_1B15112), v13 = 0, v58 >= 0) )
        {
          v13 = 1;
          if ( v66 != nullptr )
            return v66(9, v9, v10, v69) != 0;
        }
        return v13;
      case 2:
        choice_selector = asn1_get_choice_selector(v9, a4);
        if ( choice_selector < 0 || choice_selector >= *(uint32_t *)(a4 + 12) )
        {
          v31 = BIO_printf(v29, v30, (int)(uintptr_t)(v8), "ERROR: selector [%d] invalid\n", choice_selector);
          goto LABEL_37;
        }
        v63 = (int *)(*(uint32_t *)(a4 + 8) + 20 * choice_selector);
        v43 = (int **)asn1_get_field_ptr(v9, v63);
        return asn1_template_print_ctx(v8, v43, a3, v63, a8) != 0;
      case 4:
        if ( a7 == 0 )
        {
          v41 = sub_19F7450(a1, a3, a5, a6, a8);
          v13 = 0;
          if ( !v41 )
            return v13;
          v11 = *(uint32_t *)(a4 + 16);
        }
        if ( v11 != 0 )
        {
          v19 = *(int (**)(uint32_t *, int **, int, void *, int *))(v11 + 24);
          if ( v19 != nullptr )
          {
            v20 = v19(v8, v9, a3, &unk_1B15112, a8);
            v13 = 0;
            if ( v20 != 0 )
            {
              LOBYTE(v13) = 1;
              if ( v20 == 2 )
              {
LABEL_21:
                v21 = (const char *)&a0[1];
                return BIO_puts(v8, (int)(uintptr_t)(v21)) > 0;
              }
            }
            return v13;
          }
        }
        v13 = 1;
        if ( a6 == 0 )
          return v13;
        v31 = BIO_printf(1, a6, (int)(uintptr_t)(v8), ":EXTERNAL TYPE %s\n", a6);
LABEL_37:
        result = v31 > 0;
        break;
      case 5:
        goto LABEL_12;
      default:
        BIO_printf(v12, v11, (int)(uintptr_t)(a1), "Unprocessed type %d\n", v12);
        return false;
    }
  }
  else
  {
    v13 = 1;
    if ( (*(uint8_t *)a8 & 1) != 0 && (a7 != 0 || (v40 = sub_19F7450(a1, a3, a5, a6, a8), v13 = 0, v40)) )
    {
      v21 = "<ABSENT>\n";
      return BIO_puts(v8, (int)(uintptr_t)(v21)) > 0;
    }
    else
    {
      return v13;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19F82A0  (binary VA: 0x19f82a0)
// Original: sub_19F82A0
// ----------------------------------------------------------------------------
int sub_19F82A0(uint32_t **a1, uint8_t *a2)
{
  uint8_t *v2;
  uint32_t *v3;
  bool v4;
  bool v5;
  int v6;
  int v7;
  int v8;

  v2 = a2;
  v3 = *a1;
  if ( *a1 == nullptr )
    return -1;
  v4 = (BN_num_bits(*a1) & 7) == 0;
  v5 = v4;
  if ( a2 != nullptr )
  {
    if ( v4 )
    {
      *a2 = 0;
      v2 = a2 + 1;
    }
    BN_bn2bin(v3, v2);
  }
  v6 = BN_num_bits(v3);
  v7 = v6 + 14;
  v8 = v6 + 7;
  if ( v8 < 0 )
    v8 = v7;
  return v5 + (v8 >> 3);
}

// ----------------------------------------------------------------------------
// Function: sub_19F8330  (binary VA: 0x19f8330)
// Original: sub_19F8330
// ----------------------------------------------------------------------------
void sub_19F8330(uint8_t ***a1, int a2)
{
  uint8_t **v2;

  if ( *a1 != nullptr )
  {
    v2 = *a1;
    if ( (*(uint8_t *)(a2 + 20) & 1) != 0 )
      BN_clear_free(v2);
    else
      BN_free((void **)v2);
    *a1 = nullptr;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_19F8380  (binary VA: 0x19f8380)
// Original: sub_19F8380
// ----------------------------------------------------------------------------
bool sub_19F8380(uint32_t *a1)
{
  uint32_t *v1;

  v1 = BN_new();
  *a1 = (uint32_t)(uintptr_t)(v1);
  return v1 != nullptr;
}

// ----------------------------------------------------------------------------
// Function: sub_19F83B0  (binary VA: 0x19f83b0)
// Original: sub_19F83B0
// ----------------------------------------------------------------------------
int sub_19F83B0(void ***a1, uint8_t *a2, int a3, int a4, int a5, int a6)
{
  void **v6;
  void **v7;
  int v8;

  v6 = *a1;
  if ( *a1 == nullptr )
  {
    sub_19F8380(a1);
    v6 = *a1;
  }
  v7 = BN_bin2bn(a2, a3, v6);
  v8 = 1;
  if ( v7 == nullptr )
  {
    sub_19F8330((uint8_t ***)a1, a6);
    return 0;
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: sub_19F8430  (binary VA: 0x19f8430)
// Original: sub_19F8430
// ----------------------------------------------------------------------------
int sub_19F8430(int a1, int a2)
{
  return ASN1_item_verify((int)(uintptr_t)(&X509_CRL_INFO_it), *(int **)(a1 + 4), *(int **)(a1 + 8), *(uint32_t *)a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_19F8480  (binary VA: 0x19f8480)
// Original: sub_19F8480
// ----------------------------------------------------------------------------
int sub_19F8480(int a1, int *a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[13];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v13)) > _g4_s1 ? (24u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);

  v13[0] = a3;
  if ( sk_is_sorted(*(uint32_t *)(*(uint32_t *)a1 + 20)) == 0 )
  {
    CRYPTO_lock(9, 6, (int)(uintptr_t)(&unk_1B15112), 0);
    sk_sort(*(uint32_t *)(*(uint32_t *)a1 + 20));
    CRYPTO_lock(10, 6, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  v4 = sk_find(*(uint32_t *)(*(uint32_t *)a1 + 20), (int)(uintptr_t)(v13));
  result = 0;
  if ( v4 >= 0 )
  {
    while ( 1 )
    {
      if ( v4 >= sk_num(*(uint32_t *)(*(uint32_t *)a1 + 20)) )
        return 0;
      v6 = sk_value(*(int **)(*(uint32_t *)a1 + 20), v4);
      if ( ASN1_INTEGER_cmp(*(uint32_t *)v6, a3) != 0 )
        return 0;
      v7 = *(uint32_t *)(v6 + 12);
      if ( v7 != 0 )
      {
        v8 = a4;
        if ( a4 == 0 )
          v8 = *(uint32_t *)(*(uint32_t *)a1 + 8);
        v12 = v4;
        v9 = 0;
        v10 = v8;
        while ( v9 < sk_num(v7) )
        {
          v11 = (uint32_t *)sk_value(*(int **)(v6 + 12), v9);
          if ( *v11 == 4 && X509_NAME_cmp(v10, v11[1]) == 0 )
            goto LABEL_14;
          ++v9;
          v7 = *(uint32_t *)(v6 + 12);
        }
        v4 = v12;
      }
      else if ( a4 == 0 || X509_NAME_cmp(a4, *(uint32_t *)(*(uint32_t *)a1 + 8)) == 0 )
      {
LABEL_14:
        if ( a2 != nullptr )
          *a2 = v6;
        return (*(uint32_t *)(v6 + 16) == 8) + 1;
      }
      ++v4;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19F8660  (binary VA: 0x19f8660)
// Original: sub_19F8660
// ----------------------------------------------------------------------------
bool sub_19F8660(int a1, int *a2)
{
  int v2;
  bool result;
  void *v4;
  void *v5;
  int ext_d2i;
  int v7;
  int v8;
  int v9;
  int v10;
  int *v11;
  int v12;
  int v13;
  int *v14;
  int *v15;
  int v16;
  int v17;
  int (*v18)(int);
  int v19;
  int v20;
  int v21;
  uint32_t *v22;
  int v23;
  int *v24;
  int *v25;
  int *v26;
  int v27;
  int *v28;
  int v29;
  int (*v30)(int);
  typedef char _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v31)) > _g4_s0 ? (0u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v32)) > _g4_s1 ? (4u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v33)) > _g4_s2 ? (4u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v34)) > _g4_s3 ? (8u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v35)) > _g4_s4 ? (12u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v36)) > _g4_s5 ? (28u + sizeof(_g4_t_v36)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);

  v2 = *a2;
  switch ( a1 )
  {
    case 1:
      v4 = (void *)(uintptr_t)(off_20CDF00);
      *(uint32_t *)(v2 + 24) = 0;
      *(uint32_t *)(v2 + 68) = (uint32_t)(uintptr_t)(v4);
      *(uint32_t *)(v2 + 20) = 0;
      *(uint32_t *)(v2 + 16) = 0;
      *(uint32_t *)(v2 + 28) = 0;
      *(uint32_t *)(v2 + 32) = 32895;
      *(uint32_t *)(v2 + 72) = 0;
      *(uint32_t *)(v2 + 64) = 0;
      *(uint32_t *)(v2 + 36) = 0;
      *(uint32_t *)(v2 + 40) = 0;
      return true;
    case 3:
      v18 = *(int (**)(int))(*(uint32_t *)(v2 + 68) + 8);
      if ( v18 == nullptr || (v19 = v18(*a2), result = false, v19 != 0) )
      {
        if ( *(uint32_t *)(v2 + 20) != 0 )
          AUTHORITY_KEYID_free(*(uint32_t *)(v2 + 20));
        if ( *(uint32_t *)(v2 + 24) != 0 )
          ISSUING_DIST_POINT_free(*(uint32_t *)(v2 + 24));
        ASN1_INTEGER_free(*(uint32_t *)(v2 + 36));
        ASN1_INTEGER_free(*(uint32_t *)(v2 + 40));
        sk_pop_free(*(void ***)(v2 + 64), (void (*)(uint32_t))((int (*)(char))GENERAL_NAMES_free));
        return true;
      }
      return result;
    case 5:
      v5 = EVP_sha1();
      X509_CRL_digest(v2, (int)(uintptr_t)(v5), v2 + 44, 0);
      ext_d2i = X509_CRL_get_ext_d2i(v2, 770, 0, 0);
      *(uint32_t *)(v2 + 24) = ext_d2i;
      if ( ext_d2i != 0 )
      {
        v7 = *(uint32_t *)(v2 + 28);
        *(uint32_t *)(v2 + 28) = v7 | 1;
        v8 = 0;
        if ( *(int *)(ext_d2i + 4) > 0 )
        {
          LOBYTE(v8) = 1;
          *(uint32_t *)(v2 + 28) = v7 | 5;
        }
        if ( *(int *)(ext_d2i + 8) > 0 )
        {
          ++v8;
          *(uint32_t *)(v2 + 28) |= 8u;
        }
        if ( *(int *)(ext_d2i + 20) > 0 )
        {
          ++v8;
          *(uint32_t *)(v2 + 28) |= 0x10u;
        }
        if ( v8 > 1 )
          *(uint32_t *)(v2 + 28) |= 2u;
        if ( *(int *)(ext_d2i + 16) > 0 )
          *(uint32_t *)(v2 + 28) |= 0x20u;
        if ( *(uint32_t *)(ext_d2i + 12) != 0 )
        {
          *(uint32_t *)(v2 + 28) |= 0x40u;
          v9 = *(uint32_t *)(ext_d2i + 12);
          if ( *(int *)v9 <= 0 )
          {
            v10 = *(uint32_t *)(v2 + 32);
          }
          else
          {
            v10 = **(uint8_t **)(v9 + 8);
            *(uint32_t *)(v2 + 32) = v10;
            v11 = *(int **)(ext_d2i + 12);
            if ( *v11 > 1 )
              LOWORD(v10) = (*(uint8_t *)(v11[2] + 1) << 8) | v10;
          }
          *(uint32_t *)(v2 + 32) = v10 & 0x807F;
        }
        DIST_POINT_set_dpname(*(uint32_t **)ext_d2i, *(uint32_t *)(*(uint32_t *)v2 + 8));
      }
      *(uint32_t *)(v2 + 20) = X509_CRL_get_ext_d2i(v2, 90, 0, 0);
      *(uint32_t *)(v2 + 36) = X509_CRL_get_ext_d2i(v2, 88, 0, 0);
      v12 = X509_CRL_get_ext_d2i(v2, 140, 0, 0);
      *(uint32_t *)(v2 + 40) = v12;
      if ( v12 != 0 && *(uint32_t *)(v2 + 36) == 0 )
        *(uint32_t *)(v2 + 16) |= 0x80u;
      v32 = v2;
      v13 = 0;
      v14 = *(int **)(*(uint32_t *)v2 + 24);
      while ( 1 )
      {
        if ( v13 >= sk_num((int)(uintptr_t)(v14)) )
        {
          v17 = v32;
          goto LABEL_44;
        }
        v15 = (int *)sk_value(v14, v13);
        v16 = OBJ_obj2nid(*v15);
        if ( v16 == 857 )
          break;
        if ( v15[1] > 0 )
          goto LABEL_33;
LABEL_29:
        ++v13;
      }
      *(uint32_t *)(v32 + 16) |= 0x1000u;
      if ( v15[1] <= 0 )
        goto LABEL_29;
LABEL_33:
      v17 = v32;
      if ( v16 != 140 && v16 != 770 )
        *(uint32_t *)(v32 + 16) |= 0x200u;
LABEL_44:
      v35 = 0;
      v33 = v17;
      v34 = *(int **)(*(uint32_t *)v17 + 20);
      v20 = 0;
      v21 = sk_num((int)(uintptr_t)(v34));
      while ( 2 )
      {
        if ( v20 >= v21 )
        {
          v29 = v33;
          goto LABEL_65;
        }
        v22 = (uint32_t *)sk_value(v34, v20);
        v23 = X509_REVOKED_get_ext_d2i(v22, 771, v36, 0);
        if ( v23 != 0 )
        {
          v24 = *(int **)(v33 + 64);
          if ( v24 == nullptr )
          {
            v24 = (int *)(sk_new_null());
            *(uint32_t *)(v33 + 64) = (uint32_t)(uintptr_t)(v24);
            if ( v24 == nullptr )
              return false;
          }
          if ( sk_push(v24, v23) == 0 )
            return false;
        }
        else
        {
          if ( v36[0] != -1 )
            break;
          v23 = v35;
        }
        v22[3] = v23;
        v25 = (int *)X509_REVOKED_get_ext_d2i(v22, 141, v36, 0);
        if ( v25 != nullptr )
        {
          v31 = (char)(uintptr_t)(v25);
          v22[4] = ASN1_ENUMERATED_get(v25);
          ASN1_ENUMERATED_free(v31);
          goto LABEL_54;
        }
        if ( v36[0] == -1 )
        {
          v22[4] = -1;
LABEL_54:
          v26 = (int *)v22[2];
          for ( v36[0] = 0; ; ++v36[0] )
          {
            v27 = sk_num((int)(uintptr_t)(v26));
            if ( v27 <= v36[0] )
              break;
            v28 = (int *)sk_value(v26, v36[0]);
            if ( v28[1] > 0 && OBJ_obj2nid(*v28) != 771 )
            {
              *(uint32_t *)(v33 + 16) |= 0x200u;
              break;
            }
          }
          ++v20;
          v35 = v23;
          v21 = sk_num((int)(uintptr_t)(v34));
          continue;
        }
        break;
      }
      v29 = v33;
      *(uint32_t *)(v33 + 16) |= 0x80u;
LABEL_65:
      v30 = *(int (**)(int))(*(uint32_t *)(v29 + 68) + 4);
      result = true;
      if ( v30 != nullptr )
        return v30(v29) != 0;
      return result;
    default:
      return true;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_19F8B20  (binary VA: 0x19f8b20)
// Original: sub_19F8B20
// ----------------------------------------------------------------------------
int sub_19F8B20(int a1, int a2)
{
  int v2;

  if ( *(uint32_t *)a2 != 0 )
  {
    v2 = *(uint32_t *)(*(uint32_t *)a2 + 20);
    if ( v2 != 0 && a1 == 5 )
      sk_set_cmp_func(v2, (int)(uintptr_t)(sub_19F8B70));
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19F8B70  (binary VA: 0x19f8b70)
// Original: sub_19F8B70
// ----------------------------------------------------------------------------
int sub_19F8B70(int **a1, int **a2)
{
  return ASN1_STRING_cmp(**a1, **a2);
}

// ----------------------------------------------------------------------------
// Function: sub_19F9100  (binary VA: 0x19f9100)
// Original: sub_19F9100
// ----------------------------------------------------------------------------
int sub_19F9100(uint32_t *a1, int a2)
{
  *a1 = *(uint32_t *)(a2 + 20);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19F9120  (binary VA: 0x19f9120)
// Original: sub_19F9120
// ----------------------------------------------------------------------------
uint32_t * sub_19F9120(uint32_t *a1, int a2)
{
  *a1 = *(uint32_t *)(a2 + 20);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_19F9130  (binary VA: 0x19f9130)
// Original: sub_19F9130
// ----------------------------------------------------------------------------
int sub_19F9130(int a1, int a2, int a3, uint32_t *a4)
{
  return BIO_printf(a2, a1, a3, "%ld\n", *a4);
}

// ----------------------------------------------------------------------------
// Function: sub_19F9170  (binary VA: 0x19f9170)
// Original: sub_19F9170
// ----------------------------------------------------------------------------
int sub_19F9170(int *a1, uint8_t *a2, int a3, int a4)
{
  uint8_t *v4;
  int v5;
  int v6;
  bool v7;
  int v8;
  unsigned int v9;
  int v10;
  bool v12;

  v4 = a2;
  v5 = *a1;
  if ( *a1 == *(uint32_t *)(a4 + 20) )
    return -1;
  v6 = BN_num_bits_word(v5 ^ (v5 >> 31));
  v7 = (v6 & 7) == 0;
  v8 = (v6 + 7) >> 3;
  v12 = v7;
  v9 = v5 ^ (v5 >> 31);
  if ( a2 != nullptr )
  {
    if ( v7 )
    {
      *a2 = v5 >> 31;
      v4 = a2 + 1;
    }
    v10 = v8 - 1;
    if ( v8 - 1 >= 0 )
    {
      do
      {
        while ( 1 )
        {
          v4[v10] = v9;
          if ( v5 < 0 )
            break;
          --v10;
          v9 >>= 8;
          if ( v10 == -1 )
            return v12 + v8;
        }
        v4[v10--] = ~(uint8_t)v9;
        v9 >>= 8;
      }
      while ( v10 != -1 );
    }
  }
  return v12 + v8;
}

// ----------------------------------------------------------------------------
// Function: sub_19F9230  (binary VA: 0x19f9230)
// Original: sub_19F9230
// ----------------------------------------------------------------------------
int sub_19F9230(int *a1, char *a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int i;
  char v8;
  int v9;
  int v10;

  if ( a3 > 4 )
    goto LABEL_12;
  v6 = 0;
  if ( a3 != 0 )
  {
    if ( a3 > 0 )
    {
      for ( i = 0; i != a3; ++i )
      {
        while ( 1 )
        {
          v9 = v6 << 8;
          if ( *a2 >= 0 )
            break;
          v8 = a2[i++];
          v6 = v9 | (uint8_t)~v8;
          if ( i == a3 )
            goto LABEL_8;
        }
        v10 = (uint8_t)a2[i];
        v6 = v9 | v10;
      }
    }
LABEL_8:
    if ( *a2 < 0 )
      v6 = ~v6;
  }
  if ( *(uint32_t *)(a6 + 20) == v6 )
  {
LABEL_12:
    ERR_put_error(13, 166, 128, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  else
  {
    *a1 = v6;
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_19F9300  (binary VA: 0x19f9300)
// Original: sub_19F9300
// ----------------------------------------------------------------------------
int sub_19F9300(int a1, int a2)
{
  if ( a1 == 3 )
    EVP_PKEY_free(*(void **)(*(uint32_t *)a2 + 8));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19F9D70  (binary VA: 0x19f9d70)
// Original: sub_19F9D70
// ----------------------------------------------------------------------------
bool sub_19F9D70(int a1, int *a2)
{
  int v2;
  bool result;
  uint32_t *v4;

  v2 = *a2;
  result = true;
  if ( a1 == 1 )
  {
    v4 = sk_new_null();
    *(uint32_t *)(v2 + 24) = (uint32_t)(uintptr_t)(v4);
    return v4 != nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: NETSCAPE_SPKAC_new  (binary VA: 0x19fa120)
// Original: NETSCAPE_SPKAC_new
// ----------------------------------------------------------------------------
int NETSCAPE_SPKAC_new()
{
  return ASN1_item_new((int)(uintptr_t)(&NETSCAPE_SPKAC_it));
}

// ----------------------------------------------------------------------------
// Function: NETSCAPE_SPKAC_free  (binary VA: 0x19fa150)
// Original: NETSCAPE_SPKAC_free
// ----------------------------------------------------------------------------
int NETSCAPE_SPKAC_free(char a1)
{
  return ASN1_item_free(a1, NETSCAPE_SPKAC_it);
}

// ----------------------------------------------------------------------------
// Function: NETSCAPE_SPKI_new  (binary VA: 0x19fa200)
// Original: NETSCAPE_SPKI_new
// ----------------------------------------------------------------------------
int NETSCAPE_SPKI_new()
{
  return ASN1_item_new((int)(uintptr_t)(&NETSCAPE_SPKI_it));
}

// ----------------------------------------------------------------------------
// Function: NETSCAPE_SPKI_free  (binary VA: 0x19fa230)
// Original: NETSCAPE_SPKI_free
// ----------------------------------------------------------------------------
int NETSCAPE_SPKI_free(char a1)
{
  return ASN1_item_free(a1, NETSCAPE_SPKI_it);
}

// ----------------------------------------------------------------------------
// Function: BF_cfb64_encrypt  (binary VA: 0x19fa340)
// Original: BF_cfb64_encrypt
// ----------------------------------------------------------------------------
int * BF_cfb64_encrypt(char *a1, uint8_t *a2, int a3, int a4, int a5, int *a6, int a7)
{
  uint8_t *v8;
  int v9;
  char v10;
  char v11;
  bool v12;
  unsigned int v13;
  char v14; // ecx^3
  unsigned int v15;
  unsigned int v16;
  uint8_t *v18;
  char v19;
  unsigned int v20;
  char v21; // ecx^3
  unsigned int v22;
  unsigned int v23;
  typedef uint8_t *_g4_t_v24;
  typedef uint8_t *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef unsigned int _g4_t_v29;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v25)) > _g4_s1 ? (4u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v26)) > _g4_s2 ? (8u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v27)) > _g4_s3 ? (8u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v28)) > _g4_s4 ? (24u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v29)) > _g4_s5 ? (28u + sizeof(_g4_t_v29)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);

  v8 = a2;
  v9 = *a6;
  if ( a7 != 0 )
  {
    if ( a3 != 0 )
    {
      v27 = a3;
      do
      {
        if ( v9 == 0 )
        {
          v28 = __builtin_bswap32(*(uint32_t *)a5);
          v25 = v8;
          v29 = __builtin_bswap32(*(uint32_t *)(a5 + 4));
          BF_encrypt(&v28, a4);
          v20 = v28;
          v21 = HIBYTE(v28);
          *(uint8_t *)(a5 + 3) = v28;
          *(uint8_t *)a5 = v21;
          *(uint8_t *)(a5 + 1) = BYTE2(v20);
          v22 = v20 >> 8;
          v23 = v29;
          *(uint8_t *)(a5 + 2) = v22;
          *(uint8_t *)(a5 + 7) = v23;
          *(uint8_t *)(a5 + 4) = HIBYTE(v23);
          *(uint8_t *)(a5 + 5) = BYTE2(v23);
          *(uint8_t *)(a5 + 6) = BYTE1(v23);
          v8 = v25;
        }
        v18 = (uint8_t *)(a5 + v9);
        v19 = *a1 ^ *(uint8_t *)(a5 + v9);
        *v8 = v19;
        ++a1;
        ++v8;
        v9 = ((uint8_t)v9 + 1) & 7;
        v12 = v27-- == 1;
        *v18 = v19;
      }
      while ( !v12 );
    }
  }
  else
  {
    v26 = a3;
    if ( a3 != 0 )
    {
      v24 = a2;
      do
      {
        if ( v9 == 0 )
        {
          v28 = __builtin_bswap32(*(uint32_t *)a5);
          v29 = __builtin_bswap32(*(uint32_t *)(a5 + 4));
          BF_encrypt(&v28, a4);
          v13 = v28;
          v14 = HIBYTE(v28);
          *(uint8_t *)(a5 + 3) = v28;
          *(uint8_t *)a5 = v14;
          *(uint8_t *)(a5 + 1) = BYTE2(v13);
          v15 = v13 >> 8;
          v16 = v29;
          *(uint8_t *)(a5 + 2) = v15;
          *(uint8_t *)(a5 + 7) = v16;
          *(uint8_t *)(a5 + 4) = HIBYTE(v16);
          *(uint8_t *)(a5 + 5) = BYTE2(v16);
          *(uint8_t *)(a5 + 6) = BYTE1(v16);
        }
        v10 = *a1++;
        v11 = *(uint8_t *)(a5 + v9);
        *(uint8_t *)(a5 + v9) = v10;
        v9 = ((uint8_t)v9 + 1) & 7;
        *v24 = v10 ^ v11;
        v12 = v26-- == 1;
        ++v24;
      }
      while ( !v12 );
    }
  }
  *a6 = v9;
  return a6;
}

// ----------------------------------------------------------------------------
// Function: BF_options  (binary VA: 0x19fa550)
// Original: BF_options
// ----------------------------------------------------------------------------
const char * BF_options()
{
  return "blowfish(ptr)";
}

// ----------------------------------------------------------------------------
// Function: BF_ecb_encrypt  (binary VA: 0x19fa570)
// Original: BF_ecb_encrypt
// ----------------------------------------------------------------------------
unsigned int BF_ecb_encrypt(unsigned int *a1, uint8_t *a2, int a3, int a4)
{
  unsigned int v4;
  char v5; // edx^3
  unsigned int v6;
  unsigned int result;
  typedef unsigned int _g4_t_v8;
  typedef unsigned int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  v8 = __builtin_bswap32(*a1);
  v9 = __builtin_bswap32(a1[1]);
  if ( a4 != 0 )
    BF_encrypt(&v8, a3);
  else
    BF_decrypt(&v8, a3);
  v4 = v8;
  v5 = HIBYTE(v8);
  a2[3] = v8;
  *a2 = v5;
  a2[1] = BYTE2(v4);
  v6 = v4 >> 8;
  result = v9;
  a2[2] = v6;
  a2[7] = result;
  a2[4] = HIBYTE(result);
  a2[5] = BYTE2(result);
  a2[6] = BYTE1(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: BF_encrypt  (binary VA: 0x19fa640)
// Original: BF_encrypt
// ----------------------------------------------------------------------------
int BF_encrypt(int *a1, uint32_t *a2)
{
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  int result;

  v2 = *a2 ^ *a1;
  v3 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v2) + 3144)
      + (*(uint32_t *)((char *)a2 + ((v2 >> 6) & 0x3FC) + 2120)
       ^ (*(uint32_t *)((char *)a2 + ((v2 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v2 >> 14) & 0x3FC) + 1096))))
     ^ a2[1]
     ^ a1[1];
  v4 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v3) + 3144)
      + (*(uint32_t *)((char *)a2 + ((v3 >> 6) & 0x3FC) + 2120)
       ^ (*(uint32_t *)((char *)a2 + ((v3 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v3 >> 14) & 0x3FC) + 1096))))
     ^ a2[2]
     ^ v2;
  v5 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v4) + 3144)
      + (*(uint32_t *)((char *)a2 + ((v4 >> 6) & 0x3FC) + 2120)
       ^ (*(uint32_t *)((char *)a2 + ((v4 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v4 >> 14) & 0x3FC) + 1096))))
     ^ v3
     ^ a2[3];
  v6 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v5) + 3144)
      + (*(uint32_t *)((char *)a2 + ((v5 >> 6) & 0x3FC) + 2120)
       ^ (*(uint32_t *)((char *)a2 + ((v5 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v5 >> 14) & 0x3FC) + 1096))))
     ^ a2[4]
     ^ v4;
  v7 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v6) + 3144)
      + (*(uint32_t *)((char *)a2 + ((v6 >> 6) & 0x3FC) + 2120)
       ^ (*(uint32_t *)((char *)a2 + ((v6 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v6 >> 14) & 0x3FC) + 1096))))
     ^ a2[5]
     ^ v5;
  v8 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v7) + 3144)
      + (*(uint32_t *)((char *)a2 + ((v7 >> 6) & 0x3FC) + 2120)
       ^ (*(uint32_t *)((char *)a2 + ((v7 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v7 >> 14) & 0x3FC) + 1096))))
     ^ a2[6]
     ^ v6;
  v9 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v8) + 3144)
      + (*(uint32_t *)((char *)a2 + ((v8 >> 6) & 0x3FC) + 2120)
       ^ (*(uint32_t *)((char *)a2 + ((v8 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v8 >> 14) & 0x3FC) + 1096))))
     ^ a2[7]
     ^ v7;
  v10 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v9) + 3144)
       + (*(uint32_t *)((char *)a2 + ((v9 >> 6) & 0x3FC) + 2120)
        ^ (*(uint32_t *)((char *)a2 + ((v9 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v9 >> 14) & 0x3FC) + 1096))))
      ^ a2[8]
      ^ v8;
  v11 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v10) + 3144)
       + (*(uint32_t *)((char *)a2 + ((v10 >> 6) & 0x3FC) + 2120)
        ^ (*(uint32_t *)((char *)a2 + ((v10 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v10 >> 14) & 0x3FC) + 1096))))
      ^ a2[9]
      ^ v9;
  v12 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v11) + 3144)
       + (*(uint32_t *)((char *)a2 + ((v11 >> 6) & 0x3FC) + 2120)
        ^ (*(uint32_t *)((char *)a2 + ((v11 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v11 >> 14) & 0x3FC) + 1096))))
      ^ a2[10]
      ^ v10;
  v13 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v12) + 3144)
       + (*(uint32_t *)((char *)a2 + ((v12 >> 6) & 0x3FC) + 2120)
        ^ (*(uint32_t *)((char *)a2 + ((v12 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v12 >> 14) & 0x3FC) + 1096))))
      ^ a2[11]
      ^ v11;
  v14 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v13) + 3144)
       + (*(uint32_t *)((char *)a2 + ((v13 >> 6) & 0x3FC) + 2120)
        ^ (*(uint32_t *)((char *)a2 + ((v13 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v13 >> 14) & 0x3FC) + 1096))))
      ^ a2[12]
      ^ v12;
  v15 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v14) + 3144)
       + (*(uint32_t *)((char *)a2 + ((v14 >> 6) & 0x3FC) + 2120)
        ^ (*(uint32_t *)((char *)a2 + ((v14 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v14 >> 14) & 0x3FC) + 1096))))
      ^ a2[13]
      ^ v13;
  v16 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v15) + 3144)
       + (*(uint32_t *)((char *)a2 + ((v15 >> 6) & 0x3FC) + 2120)
        ^ (*(uint32_t *)((char *)a2 + ((v15 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v15 >> 14) & 0x3FC) + 1096))))
      ^ a2[14]
      ^ v14;
  v17 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v16) + 3144)
       + (*(uint32_t *)((char *)a2 + ((v16 >> 6) & 0x3FC) + 2120)
        ^ (*(uint32_t *)((char *)a2 + ((v16 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v16 >> 14) & 0x3FC) + 1096))))
      ^ a2[15]
      ^ v15;
  result = v17 ^ a2[17];
  a1[1] = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v17) + 3144)
         + (*(uint32_t *)((char *)a2 + ((v17 >> 6) & 0x3FC) + 2120)
          ^ (*(uint32_t *)((char *)a2 + ((v17 >> 22) & 0x3FC) + 72)
           + *(uint32_t *)((char *)a2 + ((v17 >> 14) & 0x3FC) + 1096))))
        ^ a2[16]
        ^ v16;
  *a1 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: BF_decrypt  (binary VA: 0x19fab40)
// Original: BF_decrypt
// ----------------------------------------------------------------------------
int BF_decrypt(int *a1, uint32_t *a2)
{
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  int result;

  v2 = a2[17] ^ *a1;
  v3 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v2) + 3144)
      + (*(uint32_t *)((char *)a2 + ((v2 >> 6) & 0x3FC) + 2120)
       ^ (*(uint32_t *)((char *)a2 + ((v2 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v2 >> 14) & 0x3FC) + 1096))))
     ^ a2[16]
     ^ a1[1];
  v4 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v3) + 3144)
      + (*(uint32_t *)((char *)a2 + ((v3 >> 6) & 0x3FC) + 2120)
       ^ (*(uint32_t *)((char *)a2 + ((v3 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v3 >> 14) & 0x3FC) + 1096))))
     ^ a2[15]
     ^ v2;
  v5 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v4) + 3144)
      + (*(uint32_t *)((char *)a2 + ((v4 >> 6) & 0x3FC) + 2120)
       ^ (*(uint32_t *)((char *)a2 + ((v4 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v4 >> 14) & 0x3FC) + 1096))))
     ^ v3
     ^ a2[14];
  v6 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v5) + 3144)
      + (*(uint32_t *)((char *)a2 + ((v5 >> 6) & 0x3FC) + 2120)
       ^ (*(uint32_t *)((char *)a2 + ((v5 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v5 >> 14) & 0x3FC) + 1096))))
     ^ a2[13]
     ^ v4;
  v7 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v6) + 3144)
      + (*(uint32_t *)((char *)a2 + ((v6 >> 6) & 0x3FC) + 2120)
       ^ (*(uint32_t *)((char *)a2 + ((v6 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v6 >> 14) & 0x3FC) + 1096))))
     ^ a2[12]
     ^ v5;
  v8 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v7) + 3144)
      + (*(uint32_t *)((char *)a2 + ((v7 >> 6) & 0x3FC) + 2120)
       ^ (*(uint32_t *)((char *)a2 + ((v7 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v7 >> 14) & 0x3FC) + 1096))))
     ^ a2[11]
     ^ v6;
  v9 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v8) + 3144)
      + (*(uint32_t *)((char *)a2 + ((v8 >> 6) & 0x3FC) + 2120)
       ^ (*(uint32_t *)((char *)a2 + ((v8 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v8 >> 14) & 0x3FC) + 1096))))
     ^ a2[10]
     ^ v7;
  v10 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v9) + 3144)
       + (*(uint32_t *)((char *)a2 + ((v9 >> 6) & 0x3FC) + 2120)
        ^ (*(uint32_t *)((char *)a2 + ((v9 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v9 >> 14) & 0x3FC) + 1096))))
      ^ a2[9]
      ^ v8;
  v11 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v10) + 3144)
       + (*(uint32_t *)((char *)a2 + ((v10 >> 6) & 0x3FC) + 2120)
        ^ (*(uint32_t *)((char *)a2 + ((v10 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v10 >> 14) & 0x3FC) + 1096))))
      ^ a2[8]
      ^ v9;
  v12 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v11) + 3144)
       + (*(uint32_t *)((char *)a2 + ((v11 >> 6) & 0x3FC) + 2120)
        ^ (*(uint32_t *)((char *)a2 + ((v11 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v11 >> 14) & 0x3FC) + 1096))))
      ^ a2[7]
      ^ v10;
  v13 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v12) + 3144)
       + (*(uint32_t *)((char *)a2 + ((v12 >> 6) & 0x3FC) + 2120)
        ^ (*(uint32_t *)((char *)a2 + ((v12 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v12 >> 14) & 0x3FC) + 1096))))
      ^ a2[6]
      ^ v11;
  v14 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v13) + 3144)
       + (*(uint32_t *)((char *)a2 + ((v13 >> 6) & 0x3FC) + 2120)
        ^ (*(uint32_t *)((char *)a2 + ((v13 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v13 >> 14) & 0x3FC) + 1096))))
      ^ a2[5]
      ^ v12;
  v15 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v14) + 3144)
       + (*(uint32_t *)((char *)a2 + ((v14 >> 6) & 0x3FC) + 2120)
        ^ (*(uint32_t *)((char *)a2 + ((v14 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v14 >> 14) & 0x3FC) + 1096))))
      ^ a2[4]
      ^ v13;
  v16 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v15) + 3144)
       + (*(uint32_t *)((char *)a2 + ((v15 >> 6) & 0x3FC) + 2120)
        ^ (*(uint32_t *)((char *)a2 + ((v15 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v15 >> 14) & 0x3FC) + 1096))))
      ^ a2[3]
      ^ v14;
  v17 = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v16) + 3144)
       + (*(uint32_t *)((char *)a2 + ((v16 >> 6) & 0x3FC) + 2120)
        ^ (*(uint32_t *)((char *)a2 + ((v16 >> 22) & 0x3FC) + 72) + *(uint32_t *)((char *)a2 + ((v16 >> 14) & 0x3FC) + 1096))))
      ^ a2[2]
      ^ v15;
  result = v17 ^ *a2;
  a1[1] = (*(uint32_t *)((char *)a2 + (uint16_t)(4 * (uint8_t)v17) + 3144)
         + (*(uint32_t *)((char *)a2 + ((v17 >> 6) & 0x3FC) + 2120)
          ^ (*(uint32_t *)((char *)a2 + ((v17 >> 22) & 0x3FC) + 72)
           + *(uint32_t *)((char *)a2 + ((v17 >> 14) & 0x3FC) + 1096))))
        ^ a2[1]
        ^ v16;
  *a1 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: BF_cbc_encrypt  (binary VA: 0x19fb040)
// Original: BF_cbc_encrypt
// ----------------------------------------------------------------------------
unsigned int BF_cbc_encrypt(int a1, uint8_t *a2, int a3, uint32_t *a4, int a5, int a6)
{
  unsigned int v6;
  uint8_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  int16_t v20; // kr00_2
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v25;
  uint8_t *v26;
  int v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  int v34;
  int v35;
  unsigned int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  uint8_t *v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  uint8_t *v51;
  typedef int _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef uint8_t *_g4_t_v55;
  typedef char _g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef unsigned int _g4_t_v58;
  typedef uint8_t *_g4_t_v59;
  typedef uint8_t *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef char _g4_t_v62;
  typedef int _g4_t_v63;
  typedef uint8_t *_g4_t_v64;
  typedef unsigned int _g4_t_v65;
  typedef char _g4_t_v66;
  typedef unsigned int _g4_t_v67;
  typedef unsigned int _g4_t_v68;
  typedef int _g4_t_v69;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v52)) > _g4_s0 ? (4u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v53)) > _g4_s1 ? (8u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v54)) > _g4_s2 ? (8u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v55)) > _g4_s3 ? (12u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v56)) > _g4_s4 ? (16u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v57)) > _g4_s5 ? (52u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v58)) > _g4_s6 ? (52u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v59)) > _g4_s7 ? (52u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v60)) > _g4_s8 ? (52u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v61)) > _g4_s9 ? (56u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v62)) > _g4_s10 ? (56u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v63)) > _g4_s11 ? (56u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v64)) > _g4_s12 ? (56u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v65)) > _g4_s13 ? (60u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v66)) > _g4_s14 ? (60u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v67)) > _g4_s15 ? (60u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v68)) > _g4_s16 ? (72u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v69)) > _g4_s17 ? (76u + sizeof(_g4_t_v69)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 4u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 8u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 8u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 12u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 52u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 52u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 56u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 56u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 56u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 56u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 60u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 60u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 60u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 72u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 76u);

  if ( a6 != 0 )
  {
    v6 = __builtin_bswap32(*(uint32_t *)a5);
    v57 = __builtin_bswap32(*(uint32_t *)(a5 + 4));
    v65 = a3 - 8;
    v61 = a3 - 8;
    if ( a3 - 8 >= 0 )
    {
      v7 = a2;
      v8 = a1;
      do
      {
        v9 = *(uint8_t *)(v8 + 4);
        v10 = *(uint8_t *)(v8 + 5) << 16;
        v68 = v6 ^ __builtin_bswap32(*(uint32_t *)v8);
        v11 = *(uint8_t *)(v8 + 7) | v10 | (v9 << 24);
        v12 = *(uint8_t *)(v8 + 6) << 8;
        v8 += 8;
        v69 = v57 ^ (v12 | v11);
        BF_encrypt((int *)&v68, a4);
        v6 = v68;
        v57 = v69;
        v13 = HIBYTE(v68);
        v7[3] = v68;
        *v7 = v13;
        v7[1] = BYTE2(v6);
        v7[2] = BYTE1(v6);
        v7[4] = HIBYTE(v57);
        v7[5] = BYTE2(v57);
        v7[6] = BYTE1(v57);
        v7[7] = v57;
        v7 += 8;
        v61 -= 8;
      }
      while ( v61 >= 0 );
      v14 = 8 * (v65 >> 3) + 8;
      a1 += v14;
      a2 += v14;
      v61 = a3 - 8 * (v65 >> 3) - 16;
    }
    if ( v61 == -8 )
    {
      v56 = BYTE2(v6);
      v62 = HIBYTE(v6);
      v66 = HIBYTE(v57);
      v21 = HIWORD(v57);
      v22 = v57 >> 8;
      v23 = (uint8_t)v57;
      v20 = v6;
    }
    else
    {
      v15 = v61 + 8 + a1;
      switch ( v61 )
      {
        case -7:
          v49 = v61 + 8 + a1;
          v16 = 0;
          v50 = 0;
          goto LABEL_29;
        case -6:
          v16 = 0;
          v48 = 0;
          goto LABEL_28;
        case -5:
          v46 = v61 + 8 + a1;
          v16 = 0;
          v47 = 0;
          goto LABEL_27;
        case -4:
          v16 = 0;
          goto LABEL_26;
        case -3:
          v44 = v61 + 8 + a1;
          v45 = 0;
          goto LABEL_25;
        case -2:
          v43 = 0;
          goto LABEL_24;
        case -1:
          v42 = *(uint8_t *)--v15;
          v43 = v42 << 8;
LABEL_24:
          v44 = v15 - 1;
          v45 = v43 | (*(uint8_t *)(v15 - 1) << 16);
LABEL_25:
          v15 = v44 - 1;
          v16 = v45 | (*(uint8_t *)(v44 - 1) << 24);
LABEL_26:
          v46 = v15 - 1;
          v47 = *(uint8_t *)(v15 - 1);
LABEL_27:
          v15 = v46 - 1;
          v48 = v47 | (*(uint8_t *)(v46 - 1) << 8);
LABEL_28:
          v49 = v15 - 1;
          v50 = v48 | (*(uint8_t *)(v15 - 1) << 16);
LABEL_29:
          v17 = v50 | (*(uint8_t *)(v49 - 1) << 24);
          break;
        default:
          v16 = 0;
          v17 = 0;
          break;
      }
      v68 = v17 ^ v6;
      v69 = v57 ^ v16;
      BF_encrypt((int *)&v68, a4);
      v18 = v68;
      v19 = v69;
      v62 = HIBYTE(v68);
      *a2 = HIBYTE(v68);
      a2[1] = BYTE2(v18);
      v56 = BYTE2(v18);
      a2[2] = BYTE1(v18);
      a2[3] = v18;
      v20 = v18;
      a2[4] = HIBYTE(v19);
      v66 = HIBYTE(v19);
      v21 = HIWORD(v19);
      a2[5] = BYTE2(v19);
      v22 = v19 >> 8;
      a2[6] = BYTE1(v19);
      v23 = v19;
      a2[7] = v19;
    }
    *(uint8_t *)a5 = v62;
    *(uint8_t *)(a5 + 5) = v21;
    *(uint8_t *)(a5 + 1) = v56;
    *(uint8_t *)(a5 + 6) = v22;
    *(uint8_t *)(a5 + 2) = HIBYTE(v20);
    *(uint8_t *)(a5 + 3) = v20;
    *(uint8_t *)(a5 + 4) = v66;
    *(uint8_t *)(a5 + 7) = v23;
    return v23;
  }
  else
  {
    v25 = __builtin_bswap32(*(uint32_t *)a5);
    v58 = __builtin_bswap32(*(uint32_t *)(a5 + 4));
    v67 = a3 - 8;
    v63 = a3 - 8;
    if ( a3 - 8 >= 0 )
    {
      v26 = a2;
      v27 = a1;
      while ( 1 )
      {
        v28 = *(uint8_t *)(v27 + 4);
        v29 = __builtin_bswap32(*(uint32_t *)v27);
        v30 = *(uint8_t *)(v27 + 5);
        v68 = v29;
        v55 = v26;
        v53 = v25;
        v31 = (*(uint8_t *)(v27 + 6) << 8) | *(uint8_t *)(v27 + 7) | (v30 << 16) | (v28 << 24);
        v69 = v31;
        BF_decrypt((int *)&v68, a4);
        v32 = v68 ^ v53;
        v27 += 8;
        v52 = v69 ^ v58;
        v33 = (v68 ^ v53) >> 24;
        v55[3] = v68 ^ v53;
        *v55 = v33;
        v55[1] = BYTE2(v32);
        v55[4] = HIBYTE(v52);
        v55[5] = BYTE2(v52);
        v55[6] = BYTE1(v52);
        v55[2] = BYTE1(v32);
        v55[7] = v52;
        v26 = v55 + 8;
        v63 -= 8;
        if ( v63 < 0 )
          break;
        v58 = v31;
        v25 = v29;
      }
      v58 = v31;
      v25 = v29;
      v34 = 8 * (v67 >> 3) + 8;
      a1 += v34;
      a2 += v34;
      v63 = a3 - 8 * (v67 >> 3) - 16;
    }
    if ( v63 != -8 )
    {
      v35 = *(uint8_t *)(a1 + 4);
      v36 = __builtin_bswap32(*(uint32_t *)a1);
      v37 = *(uint8_t *)(a1 + 5);
      v68 = v36;
      v54 = v25;
      v38 = (*(uint8_t *)(a1 + 6) << 8) | *(uint8_t *)(a1 + 7) | (v37 << 16) | (v35 << 24);
      v69 = v38;
      BF_decrypt((int *)&v68, a4);
      v39 = v68 ^ v54;
      v40 = v69 ^ v58;
      v41 = &a2[v63 + 8];
      switch ( v63 )
      {
        case -7:
          v60 = &a2[v63 + 8];
          goto LABEL_36;
        case -6:
          goto LABEL_35;
        case -5:
          v59 = &a2[v63 + 8];
          goto LABEL_34;
        case -4:
          goto LABEL_33;
        case -3:
          v64 = &a2[v63 + 8];
          goto LABEL_32;
        case -2:
          goto LABEL_31;
        case -1:
          *--v41 = BYTE1(v40);
LABEL_31:
          v64 = v41 - 1;
          *(v41 - 1) = BYTE2(v40);
LABEL_32:
          v41 = v64 - 1;
          *(v64 - 1) = HIBYTE(v40);
LABEL_33:
          *(v41 - 1) = v39;
          v59 = v41 - 1;
LABEL_34:
          v41 = v59 - 1;
          *(v59 - 1) = BYTE1(v39);
LABEL_35:
          v60 = v41 - 1;
          *(v41 - 1) = BYTE2(v39);
LABEL_36:
          v51 = v60;
          v58 = v38;
          *(v51 - 1) = HIBYTE(v39);
          v25 = v36;
          break;
        default:
          v58 = v38;
          v25 = v36;
          break;
      }
    }
    *(uint8_t *)a5 = HIBYTE(v25);
    *(uint8_t *)(a5 + 3) = v25;
    *(uint8_t *)(a5 + 1) = BYTE2(v25);
    *(uint8_t *)(a5 + 2) = BYTE1(v25);
    *(uint8_t *)(a5 + 4) = HIBYTE(v58);
    *(uint8_t *)(a5 + 5) = BYTE2(v58);
    *(uint8_t *)(a5 + 6) = BYTE1(v58);
    *(uint8_t *)(a5 + 7) = v58;
    return (uint8_t)v58;
  }
}

// ----------------------------------------------------------------------------
// Function: BF_ofb64_encrypt  (binary VA: 0x19fb6f0)
// Original: BF_ofb64_encrypt
// ----------------------------------------------------------------------------
int * BF_ofb64_encrypt(uint8_t *a1, uint8_t *a2, int a3, uint32_t *a4, int a5, int *a6)
{
  int v6;
  int v7;
  int i;
  char v11;
  unsigned int v12;
  int v13;
  char v14; // edi^3
  typedef uint8_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef char _g4_t_v25;
  typedef char _g4_t_v26;
  typedef char _g4_t_v27;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v19)) > _g4_s3 ? (20u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v20)) > _g4_s4 ? (24u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (25u + sizeof(_g4_t_v21)) > _g4_s5 ? (25u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (26u + sizeof(_g4_t_v22)) > _g4_s6 ? (26u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (27u + sizeof(_g4_t_v23)) > _g4_s7 ? (27u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v24)) > _g4_s8 ? (28u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (29u + sizeof(_g4_t_v25)) > _g4_s9 ? (29u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (30u + sizeof(_g4_t_v26)) > _g4_s10 ? (30u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (31u + sizeof(_g4_t_v27)) > _g4_s11 ? (31u + sizeof(_g4_t_v27)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 25u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 26u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 27u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 29u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 30u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 31u);

  v6 = *a6;
  v7 = *(uint8_t *)(a5 + 4);
  v18 = __builtin_bswap32(*(uint32_t *)a5);
  v23 = v18;
  v19 = (*(uint8_t *)(a5 + 6) << 8)
      | *(uint8_t *)(a5 + 7)
      | (*(uint8_t *)(a5 + 5) << 16)
      | (v7 << 24);
  v20 = HIBYTE(v18);
  v21 = BYTE2(v18);
  v22 = BYTE1(v18);
  v24 = HIBYTE(v19);
  v25 = BYTE2(v19);
  v26 = BYTE1(v19);
  v27 = v19;
  if ( a3 != 0 )
  {
    v17 = 0;
    for ( i = a3; i != 0; --i )
    {
      if ( v6 == 0 )
      {
        v16 = a2;
        BF_encrypt((int *)&v18, a4);
        ++v17;
        v23 = v18;
        a2 = v16;
        v20 = HIBYTE(v18);
        v21 = BYTE2(v18);
        v22 = BYTE1(v18);
        v27 = v19;
        v24 = HIBYTE(v19);
        v25 = BYTE2(v19);
        v26 = BYTE1(v19);
      }
      v11 = *a1 ^ *(&v20 + v6);
      v6 = ((uint8_t)v6 + 1) & 7;
      *a2 = v11;
      ++a1;
      ++a2;
    }
    if ( v17 != 0 )
    {
      v12 = v18;
      v13 = v19;
      v14 = HIBYTE(v18);
      *(uint8_t *)(a5 + 3) = v18;
      *(uint8_t *)a5 = v14;
      *(uint8_t *)(a5 + 1) = BYTE2(v12);
      *(uint8_t *)(a5 + 4) = HIBYTE(v13);
      *(uint8_t *)(a5 + 5) = BYTE2(v13);
      *(uint8_t *)(a5 + 6) = BYTE1(v13);
      *(uint8_t *)(a5 + 2) = BYTE1(v12);
      *(uint8_t *)(a5 + 7) = v13;
    }
  }
  *a6 = v6;
  return a6;
}

// ----------------------------------------------------------------------------
// Function: BF_set_key  (binary VA: 0x19fb8d0)
// Original: BF_set_key
// ----------------------------------------------------------------------------
int BF_set_key(uint32_t *a1, int a2, uint8_t *a3)
{
  unsigned int v3;
  char *v4;
  uint16_t *v5;
  int v6;
  uint16_t *v7;
  char *v8;
  uint8_t *v9;
  int v10;
  unsigned int v11;
  int i;
  int v13;
  uint8_t *v14;
  int v15;
  uint8_t *v16;
  int v17;
  int v18;
  uint8_t *v19;
  int v20;
  int v21;
  int v22;
  uint32_t *v23;
  int result;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v25)) > _g4_s0 ? (8u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v26)) > _g4_s1 ? (12u + sizeof(_g4_t_v26)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);

  v3 = 4168;
  v4 = (char *)(&byte_1D2E2C0);
  v5 = (uint16_t *)(a1);
  if ( ((uint8_t)(uintptr_t)(a1) & 1) != 0 )
  {
    v5 = (uint16_t *)((char *)a1 + 1);
    v4 = (char *)&unk_1D2E2C1;
    *(uint8_t *)a1 = -120;
    v3 = 4167;
    if ( (((unsigned int)(uintptr_t)(a1) + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(a1) & 2) == 0 )
  {
    goto LABEL_3;
  }
  v3 -= 2;
  *v5 = *(uint16_t *)v4;
  v4 += 2;
  ++v5;
LABEL_3:
  v6 = 0;
  std::memcpy(v5, v4, 4 * (v3 >> 2));
  v8 = &v4[4 * (v3 >> 2)];
  v7 = &v5[2 * (v3 >> 2)];
  if ( (v3 & 2) != 0 )
  {
    *v7 = *(uint16_t *)v8;
    v6 = 1;
  }
  if ( (v3 & 1) != 0 )
    LOBYTE(v7[v6]) = v8[v6 * 2];
  v9 = a3;
  v10 = 72;
  if ( a2 <= 72 )
    v10 = a2;
  v11 = (unsigned int)(uintptr_t)(&a3[v10]);
  for ( i = 0; i != 18; ++i )
  {
    v13 = *v9;
    v14 = v9 + 1;
    if ( v11 <= (unsigned int)(uintptr_t)(v14) )
      v14 = a3;
    v15 = *v14;
    v16 = v14 + 1;
    v17 = (v13 << 8) | v15;
    if ( v11 <= (unsigned int)(uintptr_t)(v16) )
      v16 = a3;
    v18 = *v16;
    v19 = v16 + 1;
    v20 = (v17 << 8) | v18;
    if ( v11 <= (unsigned int)(uintptr_t)(v19) )
      v19 = a3;
    v21 = *v19;
    v9 = v19 + 1;
    v22 = (v20 << 8) | v21;
    if ( v11 <= (unsigned int)(uintptr_t)(v9) )
      v9 = a3;
    a1[i] ^= v22;
  }
  v25 = 0;
  v26 = 0;
  v23 = a1;
  do
  {
    BF_encrypt(&v25, a1);
    *v23 = v25;
    v23[1] = v26;
    v23 += 2;
  }
  while ( v23 != a1 + 18 );
  do
  {
    BF_encrypt(&v25, a1);
    *v23 = v25;
    result = v26;
    v23[1] = v26;
    v23 += 2;
  }
  while ( v23 != a1 + 1042 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19FBA50  (binary VA: 0x19fba50)
// Original: sub_19FBA50
// ----------------------------------------------------------------------------
int sub_19FBA50(int a1, int a2, uint32_t *a3)
{
  return BIO_write(a3, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_19FBA90  (binary VA: 0x19fba90)
// Original: sub_19FBA90
// ----------------------------------------------------------------------------
size_t sub_19FBA90(void *ptr, size_t size, FILE *s)
{
  return fwrite(ptr, size, 1u, s);
}

// ----------------------------------------------------------------------------
// Function: sub_19FC100  (binary VA: 0x19fc100)
// Original: sub_19FC100
// ----------------------------------------------------------------------------
int sub_19FC100(uint32_t *a1)
{
  a1[3] = 1;
  a1[7] = 0;
  a1[8] = 0;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_19FC120  (binary VA: 0x19fc120)
// Original: sub_19FC120
// ----------------------------------------------------------------------------
bool sub_19FC120(int a1)
{
  return a1 != 0;
}

// ----------------------------------------------------------------------------
// Function: sub_19FC130  (binary VA: 0x19fc130)
// Original: sub_19FC130
// ----------------------------------------------------------------------------
int sub_19FC130()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_19FC140  (binary VA: 0x19fc140)
// Original: sub_19FC140
// ----------------------------------------------------------------------------
int sub_19FC140(int a1, int a2, int a3)
{
  return a3;
}

// ----------------------------------------------------------------------------
// Function: sub_19FC150  (binary VA: 0x19fc150)
// Original: sub_19FC150
// ----------------------------------------------------------------------------
int sub_19FC150(int a1, unsigned int a2)
{
  int result;

  if ( a2 > 0xC )
    return 0;
  result = 1;
  if ( ((1 << a2) & 0x1A16) == 0 )
    return 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_19FC180  (binary VA: 0x19fc180)
// Original: sub_19FC180
// ----------------------------------------------------------------------------
int sub_19FC180()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_19FC190  (binary VA: 0x19fc190)
// Original: sub_19FC190
// ----------------------------------------------------------------------------
size_t sub_19FC190(int a1, const char *s)
{
  size_t result;

  result = 0;
  if ( s != nullptr )
    return strlen(s);
  return result;
}

// ----------------------------------------------------------------------------
// Function: bn_mul_add_words  (binary VA: 0x19fc730)
// Original: bn_mul_add_words
// ----------------------------------------------------------------------------
unsigned int bn_mul_add_words(unsigned int *a1, unsigned int *a2, int a3, unsigned int a4)
{
  unsigned int result;
  unsigned int v6; // kr00_4
  unsigned int v7;
  uint64_t v8; // rax
  unsigned int v9; // kr04_4
  int v10; // kr08_4
  uint64_t v11; // rax
  unsigned int v12; // kr18_4
  unsigned int *v13;
  unsigned int v14; // kr0C_4
  unsigned int v15;
  uint64_t v16; // rax
  unsigned int v17; // kr10_4
  bool v18;
  uint64_t v19;
  uint64_t v20;

  result = 0;
  if ( a3 > 0 )
  {
    if ( (a3 & 0xFFFFFFFC) == 0 )
    {
      v13 = a2;
      do
      {
LABEL_5:
        v14 = result;
        v15 = (result + (uint64_t)*a1) >> 32;
        v16 = *v13++ * (uint64_t)a4;
        v17 = v14 + *a1;
        *a1++ = v16 + v17;
        v18 = a3-- == 1;
        result = (v16 + __PAIR64__(v15, v17)) >> 32;
      }
      while ( !v18 );
      return result;
    }
    do
    {
      v6 = result;
      v7 = (result + (uint64_t)*a1) >> 32;
      v8 = *a2 * (uint64_t)a4;
      v9 = v6 + *a1;
      v10 = *a2 * a4;
      *a1 = v10 + v9;
      v19 = ((__PAIR64__(v7, v10) + __PAIR64__(HIDWORD(v8), v9)) >> 32) + a1[1] + a2[1] * (uint64_t)a4;
      a1[1] = v19;
      v20 = HIDWORD(v19) + a2[2] * (uint64_t)a4 + a1[2];
      a1[2] = v20;
      v11 = a2[3] * (uint64_t)a4;
      v12 = a1[3];
      v13 = a2 + 4;
      a3 -= 4;
      a1[3] = HIDWORD(v20) + v11 + v12;
      result = (HIDWORD(v20) + v11 + v12) >> 32;
      a2 += 4;
      a1 += 4;
    }
    while ( (a3 & 0xFFFFFFFC) != 0 );
    if ( a3 != 0 )
      goto LABEL_5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: bn_mul_words  (binary VA: 0x19fc860)
// Original: bn_mul_words
// ----------------------------------------------------------------------------
unsigned int bn_mul_words(uint32_t *a1, unsigned int *a2, int a3, unsigned int a4)
{
  unsigned int v4;
  uint64_t v6; // kr08_8
  uint64_t v7; // kr10_8
  uint64_t v8; // kr18_8
  uint64_t v9; // rax
  uint64_t v10; // rax
  int v11; // kr28_4
  bool v12;

  v4 = 0;
  if ( a3 > 0 )
  {
    if ( (a3 & 0xFFFFFFFC) == 0 )
      goto LABEL_9;
    do
    {
      v6 = v4 + *a2 * (uint64_t)a4;
      *a1 = v6;
      v7 = a2[1] * (uint64_t)a4 + HIDWORD(v6);
      a1[1] = v7;
      v8 = HIDWORD(v7) + a2[2] * (uint64_t)a4;
      a1[2] = v8;
      v9 = a2[3] * (uint64_t)a4;
      a2 += 4;
      a3 -= 4;
      v4 = (v9 + HIDWORD(v8)) >> 32;
      a1[3] = v9 + HIDWORD(v8);
      a1 += 4;
    }
    while ( (a3 & 0xFFFFFFFC) != 0 );
    if ( a3 != 0 )
    {
LABEL_9:
      do
      {
        v10 = *a2++ * (uint64_t)a4;
        v11 = v4 + v10;
        v4 = (v4 + v10) >> 32;
        *a1 = v11;
        v12 = a3-- == 1;
        ++a1;
      }
      while ( !v12 );
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: bn_sqr_words  (binary VA: 0x19fc950)
// Original: bn_sqr_words
// ----------------------------------------------------------------------------
uint64_t bn_sqr_words(uint64_t *a1, unsigned int *a2, int a3)
{
  int v3;
  unsigned int v6;
  uint64_t result; // rax
  unsigned int v8;

  v3 = a3;
  if ( a3 > 0 )
  {
    if ( (a3 & 0xFFFFFFFC) == 0 )
      goto LABEL_8;
    do
    {
      v3 -= 4;
      *a1 = *a2 * (uint64_t)*a2;
      a1[1] = a2[1] * (uint64_t)a2[1];
      a1[2] = a2[2] * (uint64_t)a2[2];
      v6 = a2[3];
      a2 += 4;
      result = v6 * (uint64_t)v6;
      a1[3] = result;
      a1 += 4;
    }
    while ( (v3 & 0xFFFFFFFC) != 0 );
    if ( v3 != 0 )
    {
LABEL_8:
      do
      {
        v8 = *a2++;
        result = v8 * (uint64_t)v8;
        --v3;
        *a1++ = result;
      }
      while ( v3 != 0 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: bn_div_words  (binary VA: 0x19fc9d0)
// Original: bn_div_words
// ----------------------------------------------------------------------------
uint64_t bn_div_words(unsigned int a1, unsigned int a2, unsigned int a3)
{
  return __PAIR64__(a1, a2) / a3;
}

// ----------------------------------------------------------------------------
// Function: bn_add_words  (binary VA: 0x19fca10)
// Original: bn_add_words
// ----------------------------------------------------------------------------
unsigned int bn_add_words(uint32_t *a1, unsigned int *a2, unsigned int *a3, int a4)
{
  unsigned int v4;
  uint64_t v7; // rax
  uint64_t v8; // rax
  uint64_t v9; // rax
  uint32_t *v10;
  uint64_t v11; // rax
  int64_t v12; // rax
  unsigned int v13; // kr10_4
  uint32_t *v14;
  uint64_t v15; // rax
  bool v16;
  uint64_t v18;
  uint64_t v19;

  v4 = 0;
  if ( a4 > 0 )
  {
    v4 = 0;
    if ( (a4 & 0xFFFFFFFC) == 0 )
      goto LABEL_9;
    do
    {
      v7 = v4 +g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(*a3), 0) + *a2;
      *a1 = v7;
      v8 = HIDWORD(v7) +g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(a2[1]), 0) + a3[1];
      a1[1] = v8;
      v9 = HIDWORD(v8) +g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(a2[2]), 0) + a3[2];
      a1[2] = v9;
      LODWORD(v9) = a3[3];
      v18 =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(a2[3]), 0);
      v10 = a1;
      a2 += 4;
      a3 += 4;
      v11 = HIDWORD(v9) + v18 + (unsigned int)v9;
      a1 += 4;
      v10[3] = v11;
      a4 -= 4;
      v4 = HIDWORD(v11);
    }
    while ( (a4 & 0xFFFFFFFC) != 0 );
    if ( a4 != 0 )
    {
LABEL_9:
      do
      {
        v12 = *a2++;
        v19 =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(*a3), 0);
        v13 = v4;
        v14 = a1;
        ++a3;
        v15 = v13 + v19 + v12;
        ++a1;
        v16 = a4-- == 1;
        *v14 = v15;
        v4 = HIDWORD(v15);
      }
      while ( !v16 );
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: bn_sub_words  (binary VA: 0x19fcb40)
// Original: bn_sub_words
// ----------------------------------------------------------------------------
int bn_sub_words(uint32_t *a1, uint32_t *a2, uint32_t *a3, int a4)
{
  bool v7;
  bool v8;
  bool v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  bool v13;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;

  v18 = 0;
  if ( a4 > 0 )
  {
    v7 = false;
    if ( (a4 & 0xFFFFFFFC) == 0 )
      goto LABEL_19;
    do
    {
      v18 = v7;
      v8 = *a2 < *a3;
      v9 = *a2 == *a3;
      *a1 = *a2 - *a3 - v7;
      if ( !v9 )
      {
        v7 = v8;
        v18 = v8;
      }
      v10 = a2[1];
      v15 = a3[1];
      a1[1] = v10 - v15 - v7;
      if ( v10 != v15 )
      {
        v7 = v10 < v15;
        v18 = v7;
      }
      v11 = a2[2];
      v16 = a3[2];
      a1[2] = v11 - v16 - v7;
      if ( v11 != v16 )
      {
        v7 = v11 < v16;
        v18 = v7;
      }
      v12 = a2[3];
      v17 = a3[3];
      a1[3] = v12 - v17 - v7;
      if ( v12 != v17 )
      {
        v7 = v12 < v17;
        v18 = v7;
      }
      a2 += 4;
      a3 += 4;
      a1 += 4;
      a4 -= 4;
    }
    while ( (a4 & 0xFFFFFFFC) != 0 );
    if ( a4 != 0 )
    {
LABEL_19:
      do
      {
        v18 = v7;
        v13 = *a2 < *a3;
        v9 = *a2 == *a3;
        *a1 = *a2 - *a3 - v7;
        if ( !v9 )
        {
          v7 = v13;
          v18 = v13;
        }
        ++a2;
        ++a3;
        ++a1;
        --a4;
      }
      while ( a4 != 0 );
    }
  }
  return v18;
}

// ----------------------------------------------------------------------------
// Function: bn_mul_comba8  (binary VA: 0x19fcc70)
// Original: bn_mul_comba8
// ----------------------------------------------------------------------------
int bn_mul_comba8(uint32_t *a1, unsigned int *a2, unsigned int *a3)
{
  uint64_t v3; // rax
  int64_t v4; // rdi
  int64_t v5; // rdi
  uint64_t v6; // rax
  bool v7;
  unsigned int v8; // kr2C_4
  unsigned int v9; // kr44_4
  uint64_t v10; // rax
  int64_t v11; // rdi
  uint64_t v12; // kr48_8
  int v13;
  unsigned int v14; // kr30_4
  unsigned int v15; // kr60_4
  uint64_t v16; // kr78_8
  unsigned int v17; // kr58_4
  unsigned int v18; // kr68_4
  uint64_t v19; // rdi
  uint64_t v20; // kr80_8
  int v21;
  unsigned int v22; // kr90_4
  unsigned int v23; // krA0_4
  unsigned int v24; // krB0_4
  unsigned int v25; // kr98_4
  uint64_t v26; // krA8_8
  unsigned int v27; // krD8_4
  unsigned int v28; // krE8_4
  unsigned int v29; // krF8_4
  unsigned int v30; // kr108_4
  uint64_t v31; // rdi
  uint64_t v32; // krC0_8
  int v33;
  unsigned int v34; // kr130_4
  unsigned int v35; // kr140_4
  unsigned int v36; // kr150_4
  unsigned int v37; // kr160_4
  unsigned int v38; // kr170_4
  unsigned int v39; // krE0_4
  uint64_t v40; // krF0_8
  uint64_t v41; // kr100_8
  unsigned int v42; // kr198_4
  unsigned int v43; // kr1A8_4
  unsigned int v44; // kr1B8_4
  unsigned int v45; // kr1C8_4
  uint64_t v46; // kr128_8
  uint64_t v47; // kr138_8
  int v48; // kr1E0_4
  unsigned int v49; // kr1F0_4
  unsigned int v50; // kr200_4
  unsigned int v51; // kr210_4
  uint64_t v52; // rdi
  unsigned int v53;
  uint64_t v54; // kr158_8
  unsigned int v55; // kr238_4
  unsigned int v56; // kr248_4
  unsigned int v57; // kr180_4
  uint64_t v58; // kr188_8
  uint64_t v59; // kr190_8
  int v60; // kr260_4
  unsigned int v61; // kr270_4
  uint64_t v62; // rdi
  uint64_t v63; // kr1A0_8
  uint64_t v64; // kr1B0_8
  unsigned int v65; // kr1C0_4
  unsigned int v66;
  uint64_t v67; // kr1F8_8
  uint64_t v68; // rax
  unsigned int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;

  v3 = *a2 * (uint64_t)*a3;
  *a1 = v3;
  LODWORD(v4) = HIDWORD(v3);
  HIDWORD(v4) = (*a2 * (uint64_t)a3[1]) >> 32;
  v5 = v4 + *a2 * a3[1];
  v6 = (unsigned int)v5 + a2[1] * (uint64_t)*a3;
  a1[1] = v6;
  v7 = __CFADD__(HIDWORD(v6), HIDWORD(v5));
  v8 = HIDWORD(v6);
  v9 = HIDWORD(v5);
  HIDWORD(v5) += HIDWORD(v6);
  v10 = a2[2] * (uint64_t)*a3;
  v70 = v10 + HIDWORD(v5);
  HIDWORD(v10) = (v10 + HIDWORD(v5)) >> 32;
  LODWORD(v5) = (__PAIR64__(HIDWORD(v10), v8) + v9) >> 32;
  HIDWORD(v5) = __CFADD__(HIDWORD(v10), v7);
  v11 = v5 + ((a2[1] * (uint64_t)a3[1] + v70) >> 32);
  v12 = __PAIR64__(v11, v70 + a2[1] * a3[1]) + *a2 * (uint64_t)a3[2];
  a1[2] = v12;
  v71 = *a2 * a3[3] + HIDWORD(v12);
  v13 = (*a2 * (uint64_t)a3[3] + HIDWORD(v12)) >> 32;
  v14 = v71 + a2[1] * a3[2];
  v15 = ((a2[1] * (uint64_t)a3[2] + (unsigned int)v71) >> 32)
      + __CFADD__((uint32_t)v11, HIDWORD(v12))
      + HIDWORD(v11)
      + v13
      + ((a2[2] * (uint64_t)a3[1] + v14) >> 32);
  v16 = __PAIR64__(v15, v14 + a2[2] * a3[1]) + a2[3] * (uint64_t)*a3;
  HIDWORD(v11) = __CFADD__(v15, HIDWORD(v16))
               + ((__PAIR64__(
                     __CFADD__(__CFADD__((uint32_t)v11, HIDWORD(v12)) + HIDWORD(v11), v13),
                     (a2[1] * (uint64_t)a3[2] + (unsigned int)v71) >> 32)
                 + (unsigned int)__CFADD__((uint32_t)v11, HIDWORD(v12))
                 + HIDWORD(v11)
                 + v13
                 + ((a2[2] * (uint64_t)a3[1] + v14) >> 32)) >> 32);
  a1[3] = v16;
  v72 = a2[4] * *a3 + HIDWORD(v16);
  LODWORD(v11) = (a2[4] * (uint64_t)*a3 + HIDWORD(v16)) >> 32;
  v7 = __CFADD__(HIDWORD(v11), (uint32_t)v11);
  LODWORD(v11) = HIDWORD(v11) + v11;
  HIDWORD(v11) = v7;
  v17 = v72 + a2[3] * a3[1];
  v18 = v17 + a2[2] * a3[2];
  v19 = v11
      + ((a2[3] * (uint64_t)a3[1] + (unsigned int)v72) >> 32)
      + ((a2[2] * (uint64_t)a3[2] + v17) >> 32)
      + ((a2[1] * (uint64_t)a3[3] + v18) >> 32);
  v20 = __PAIR64__(v19, v18 + a2[1] * a3[3]) + *a2 * (uint64_t)a3[4];
  a1[4] = v20;
  v73 = *a2 * a3[5] + HIDWORD(v20);
  v21 = (*a2 * (uint64_t)a3[5] + HIDWORD(v20)) >> 32;
  v22 = v73 + a2[1] * a3[4];
  v23 = v22 + a2[2] * a3[3];
  v24 = v23 + a2[3] * a3[2];
  v25 = ((a2[1] * (uint64_t)a3[4] + (unsigned int)v73) >> 32)
      + __CFADD__((uint32_t)v19, HIDWORD(v20))
      + HIDWORD(v19)
      + v21
      + ((a2[2] * (uint64_t)a3[3] + v22) >> 32)
      + ((a2[3] * (uint64_t)a3[2] + v23) >> 32)
      + ((a2[4] * (uint64_t)a3[1] + v24) >> 32);
  v26 = __PAIR64__(v25, v24 + a2[4] * a3[1]) + a2[5] * (uint64_t)*a3;
  HIDWORD(v19) = __CFADD__(v25, HIDWORD(v26))
               + ((__PAIR64__(
                     __CFADD__(__CFADD__((uint32_t)v19, HIDWORD(v20)) + HIDWORD(v19), v21),
                     (a2[1] * (uint64_t)a3[4] + (unsigned int)v73) >> 32)
                 + (unsigned int)__CFADD__((uint32_t)v19, HIDWORD(v20))
                 + HIDWORD(v19)
                 + v21
                 + ((a2[2] * (uint64_t)a3[3] + v22) >> 32)
                 + ((a2[3] * (uint64_t)a3[2] + v23) >> 32)
                 + ((a2[4] * (uint64_t)a3[1] + v24) >> 32)) >> 32);
  a1[5] = v26;
  v74 = a2[6] * *a3 + HIDWORD(v26);
  LODWORD(v19) = (a2[6] * (uint64_t)*a3 + HIDWORD(v26)) >> 32;
  v7 = __CFADD__(HIDWORD(v19), (uint32_t)v19);
  LODWORD(v19) = HIDWORD(v19) + v19;
  HIDWORD(v19) = v7;
  v27 = v74 + a2[5] * a3[1];
  v28 = v27 + a2[4] * a3[2];
  v29 = v28 + a2[3] * a3[3];
  v30 = v29 + a2[2] * a3[4];
  v31 = v19
      + ((a2[5] * (uint64_t)a3[1] + (unsigned int)v74) >> 32)
      + ((a2[4] * (uint64_t)a3[2] + v27) >> 32)
      + ((a2[3] * (uint64_t)a3[3] + v28) >> 32)
      + ((a2[2] * (uint64_t)a3[4] + v29) >> 32)
      + ((a2[1] * (uint64_t)a3[5] + v30) >> 32);
  v32 = __PAIR64__(v31, v30 + a2[1] * a3[5]) + *a2 * (uint64_t)a3[6];
  a1[6] = v32;
  v75 = *a2 * a3[7] + HIDWORD(v32);
  v33 = (*a2 * (uint64_t)a3[7] + HIDWORD(v32)) >> 32;
  v34 = v75 + a2[1] * a3[6];
  v35 = v34 + a2[2] * a3[5];
  v36 = v35 + a2[3] * a3[4];
  v37 = v36 + a2[4] * a3[3];
  v38 = v37 + a2[5] * a3[2];
  v39 = ((a2[5] * (uint64_t)a3[2] + v37) >> 32)
      + ((a2[1] * (uint64_t)a3[6] + (unsigned int)v75) >> 32)
      + __CFADD__((uint32_t)v31, HIDWORD(v32))
      + HIDWORD(v31)
      + v33
      + ((a2[2] * (uint64_t)a3[5] + v34) >> 32)
      + ((a2[3] * (uint64_t)a3[4] + v35) >> 32)
      + ((a2[4] * (uint64_t)a3[3] + v36) >> 32)
      + ((a2[6] * (uint64_t)a3[1] + v38) >> 32);
  v40 = __PAIR64__(v39, v38 + a2[6] * a3[1]) + a2[7] * (uint64_t)*a3;
  HIDWORD(v31) = __CFADD__(v39, HIDWORD(v40))
               + ((__PAIR64__(
                     __CFADD__(__CFADD__((uint32_t)v31, HIDWORD(v32)) + HIDWORD(v31), v33),
                     (a2[1] * (uint64_t)a3[6] + (unsigned int)v75) >> 32)
                 + (unsigned int)__CFADD__((uint32_t)v31, HIDWORD(v32))
                 + HIDWORD(v31)
                 + v33
                 + ((a2[2] * (uint64_t)a3[5] + v34) >> 32)
                 + ((a2[3] * (uint64_t)a3[4] + v35) >> 32)
                 + ((a2[4] * (uint64_t)a3[3] + v36) >> 32)
                 + ((a2[5] * (uint64_t)a3[2] + v37) >> 32)
                 + ((a2[6] * (uint64_t)a3[1] + v38) >> 32)) >> 32);
  a1[7] = v40;
  v76 = a2[7] * a3[1] + HIDWORD(v40);
  v41 = a2[7] * (uint64_t)a3[1] + HIDWORD(v40);
  v42 = v76 + a2[6] * a3[2];
  v43 = v42 + a2[5] * a3[3];
  v44 = v43 + a2[4] * a3[4];
  v45 = v44 + a2[3] * a3[5];
  LODWORD(v31) = (__PAIR64__(
                    __CFADD__(HIDWORD(v41), HIDWORD(v31)),
                    (a2[6] * (uint64_t)a3[2] + (unsigned int)v76) >> 32)
                + (unsigned int)(HIDWORD(v41) + HIDWORD(v31))
                + ((a2[5] * (uint64_t)a3[3] + v42) >> 32)
                + ((a2[4] * (uint64_t)a3[4] + v43) >> 32)
                + ((a2[3] * (uint64_t)a3[5] + v44) >> 32)
                + ((a2[2] * (uint64_t)a3[6] + v45) >> 32)) >> 32;
  HIDWORD(v31) += ((a2[6] * (uint64_t)a3[2] + (unsigned int)v76) >> 32)
                + HIDWORD(v41)
                + ((a2[5] * (uint64_t)a3[3] + v42) >> 32)
                + ((a2[4] * (uint64_t)a3[4] + v43) >> 32)
                + ((a2[3] * (uint64_t)a3[5] + v44) >> 32)
                + ((a2[2] * (uint64_t)a3[6] + v45) >> 32);
  v46 = __PAIR64__(HIDWORD(v31), v45 + a2[2] * a3[6]) + a2[1] * (uint64_t)a3[7];
  LODWORD(v31) = __CFADD__(HIDWORD(v31), HIDWORD(v46)) + (uint32_t)v31;
  a1[8] = v46;
  v47 = a2[2] * (uint64_t)a3[7] + HIDWORD(v46);
  v7 = __CFADD__(HIDWORD(v47), (uint32_t)v31);
  LODWORD(v31) = HIDWORD(v47) + v31;
  HIDWORD(v31) = v7;
  v48 = a2[2] * a3[7] + HIDWORD(v46);
  v49 = v48 + a2[3] * a3[6];
  v50 = v49 + a2[4] * a3[5];
  v51 = v50 + a2[5] * a3[4];
  v52 = v31
      + ((a2[3] * (uint64_t)a3[6] + (unsigned int)v48) >> 32)
      + ((a2[4] * (uint64_t)a3[5] + v49) >> 32)
      + ((a2[5] * (uint64_t)a3[4] + v50) >> 32)
      + ((a2[6] * (uint64_t)a3[3] + v51) >> 32);
  v53 = (__PAIR64__(v52, v51 + a2[6] * a3[3]) + a2[7] * (uint64_t)a3[2]) >> 32;
  HIDWORD(v52) += __CFADD__((uint32_t)v52, v53);
  a1[9] = v51 + a2[6] * a3[3] + a2[7] * a3[2];
  LODWORD(v52) = a2[7] * a3[3];
  v54 = a2[7] * (uint64_t)a3[3] + v53;
  v55 = v52 + v53 + a2[6] * a3[4];
  v56 = v55 + a2[5] * a3[5];
  v57 = ((a2[6] * (uint64_t)a3[4] + (unsigned int)v52 + v53) >> 32)
      + HIDWORD(v54)
      + HIDWORD(v52)
      + ((a2[5] * (uint64_t)a3[5] + v55) >> 32)
      + ((a2[4] * (uint64_t)a3[6] + v56) >> 32);
  v58 = __PAIR64__(v57, v56 + a2[4] * a3[6]) + a2[3] * (uint64_t)a3[7];
  LODWORD(v52) = __CFADD__(v57, HIDWORD(v58))
               + ((__PAIR64__(
                     __CFADD__(HIDWORD(v54), HIDWORD(v52)),
                     (a2[6] * (uint64_t)a3[4] + (unsigned int)v52 + v53) >> 32)
                 + (unsigned int)(HIDWORD(v54) + HIDWORD(v52))
                 + ((a2[5] * (uint64_t)a3[5] + v55) >> 32)
                 + ((a2[4] * (uint64_t)a3[6] + v56) >> 32)) >> 32);
  a1[10] = v58;
  v59 = a2[4] * (uint64_t)a3[7] + HIDWORD(v58);
  v7 = __CFADD__(HIDWORD(v59), (uint32_t)v52);
  LODWORD(v52) = HIDWORD(v59) + v52;
  HIDWORD(v52) = v7;
  v60 = a2[4] * a3[7] + HIDWORD(v58);
  v61 = v60 + a2[5] * a3[6];
  v62 = v52
      + ((a2[5] * (uint64_t)a3[6] + (unsigned int)v60) >> 32)
      + ((a2[6] * (uint64_t)a3[5] + v61) >> 32);
  v63 = __PAIR64__(v62, v61 + a2[6] * a3[5]) + a2[7] * (uint64_t)a3[4];
  HIDWORD(v62) += __CFADD__((uint32_t)v62, HIDWORD(v63));
  a1[11] = v63;
  LODWORD(v62) = a2[7] * a3[5];
  v64 = a2[7] * (uint64_t)a3[5] + HIDWORD(v63);
  v77 = v62 + HIDWORD(v63) + a2[6] * a3[6];
  v65 = ((a2[6] * (uint64_t)a3[6] + (unsigned int)(v62 + HIDWORD(v63))) >> 32) + HIDWORD(v64) + HIDWORD(v62);
  v66 = (__PAIR64__(v65, v77) + a2[5] * (uint64_t)a3[7]) >> 32;
  LODWORD(v62) = __CFADD__(v65, v66)
               + ((__PAIR64__(
                     __CFADD__(HIDWORD(v64), HIDWORD(v62)),
                     (a2[6] * (uint64_t)a3[6] + (unsigned int)(v62 + HIDWORD(v63))) >> 32)
                 + (unsigned int)(HIDWORD(v64) + HIDWORD(v62))) >> 32);
  a1[12] = v77 + a2[5] * a3[7];
  v78 = a2[6] * a3[7] + v66;
  v79 = (a2[6] * (uint64_t)a3[7] + __PAIR64__(v62, v66)) >> 32;
  v67 = v79 + __PAIR64__(__CFADD__((uint32_t)v62, v79), (a2[7] * (uint64_t)a3[6] + v78) >> 32);
  a1[13] = a2[7] * a3[6] + v78;
  v68 = a2[7] * (uint64_t)a3[7];
  a1[14] = v68 + v67;
  a1[15] = ((v68 + (unsigned int)v67) >> 32) + HIDWORD(v67);
  return v68;
}

// ----------------------------------------------------------------------------
// Function: bn_mul_comba4  (binary VA: 0x19fd3c0)
// Original: bn_mul_comba4
// ----------------------------------------------------------------------------
int bn_mul_comba4(uint32_t *a1, unsigned int *a2, unsigned int *a3)
{
  uint64_t v3; // rax
  int64_t v4; // rdi
  int64_t v5; // rdi
  uint64_t v6; // rax
  bool v7;
  unsigned int v8; // kr2C_4
  unsigned int v9; // kr44_4
  uint64_t v10; // rax
  int64_t v11; // rdi
  uint64_t v12; // kr48_8
  int v13;
  unsigned int v14; // kr30_4
  unsigned int v15; // kr68_4
  uint64_t v16; // kr70_8
  uint64_t v17; // kr78_8
  unsigned int v18;
  uint64_t v19; // kr98_8
  uint64_t v20; // rax
  unsigned int v22;
  int v23;
  int v24;
  unsigned int v25;
  unsigned int v26;

  v3 = *a2 * (uint64_t)*a3;
  *a1 = v3;
  LODWORD(v4) = HIDWORD(v3);
  HIDWORD(v4) = (*a2 * (uint64_t)a3[1]) >> 32;
  v5 = v4 + *a2 * a3[1];
  v6 = (unsigned int)v5 + a2[1] * (uint64_t)*a3;
  a1[1] = v6;
  v7 = __CFADD__(HIDWORD(v6), HIDWORD(v5));
  v8 = HIDWORD(v6);
  v9 = HIDWORD(v5);
  HIDWORD(v5) += HIDWORD(v6);
  v10 = a2[2] * (uint64_t)*a3;
  v22 = v10 + HIDWORD(v5);
  HIDWORD(v10) = (v10 + HIDWORD(v5)) >> 32;
  LODWORD(v5) = (__PAIR64__(HIDWORD(v10), v8) + v9) >> 32;
  HIDWORD(v5) = __CFADD__(HIDWORD(v10), v7);
  v11 = v5 + ((a2[1] * (uint64_t)a3[1] + v22) >> 32);
  v12 = __PAIR64__(v11, v22 + a2[1] * a3[1]) + *a2 * (uint64_t)a3[2];
  a1[2] = v12;
  v23 = *a2 * a3[3] + HIDWORD(v12);
  v13 = (*a2 * (uint64_t)a3[3] + HIDWORD(v12)) >> 32;
  v14 = v23 + a2[1] * a3[2];
  v15 = ((a2[1] * (uint64_t)a3[2] + (unsigned int)v23) >> 32)
      + __CFADD__((uint32_t)v11, HIDWORD(v12))
      + HIDWORD(v11)
      + v13
      + ((a2[2] * (uint64_t)a3[1] + v14) >> 32);
  v16 = __PAIR64__(v15, v14 + a2[2] * a3[1]) + a2[3] * (uint64_t)*a3;
  HIDWORD(v11) = __CFADD__(v15, HIDWORD(v16))
               + ((__PAIR64__(
                     __CFADD__(__CFADD__((uint32_t)v11, HIDWORD(v12)) + HIDWORD(v11), v13),
                     (a2[1] * (uint64_t)a3[2] + (unsigned int)v23) >> 32)
                 + (unsigned int)__CFADD__((uint32_t)v11, HIDWORD(v12))
                 + HIDWORD(v11)
                 + v13
                 + ((a2[2] * (uint64_t)a3[1] + v14) >> 32)) >> 32);
  a1[3] = v16;
  v24 = a2[3] * a3[1] + HIDWORD(v16);
  v17 = a2[3] * (uint64_t)a3[1] + HIDWORD(v16);
  LODWORD(v11) = (__PAIR64__(
                    __CFADD__(HIDWORD(v17), HIDWORD(v11)),
                    (a2[2] * (uint64_t)a3[2] + (unsigned int)v24) >> 32)
                + (unsigned int)(HIDWORD(v17) + HIDWORD(v11))) >> 32;
  HIDWORD(v11) += ((a2[2] * (uint64_t)a3[2] + (unsigned int)v24) >> 32) + HIDWORD(v17);
  v18 = (__PAIR64__(HIDWORD(v11), v24 + a2[2] * a3[2]) + a2[1] * (uint64_t)a3[3]) >> 32;
  LODWORD(v11) = __CFADD__(HIDWORD(v11), v18) + (uint32_t)v11;
  a1[4] = v24 + a2[2] * a3[2] + a2[1] * a3[3];
  v25 = a2[2] * a3[3] + v18;
  v26 = (a2[2] * (uint64_t)a3[3] + __PAIR64__(v11, v18)) >> 32;
  v19 = v26 + __PAIR64__(__CFADD__((uint32_t)v11, v26), (a2[3] * (uint64_t)a3[2] + v25) >> 32);
  a1[5] = a2[3] * a3[2] + v25;
  v20 = a2[3] * (uint64_t)a3[3];
  a1[6] = v20 + v19;
  a1[7] = ((v20 + (unsigned int)v19) >> 32) + HIDWORD(v19);
  return v20;
}

// ----------------------------------------------------------------------------
// Function: bn_sqr_comba8  (binary VA: 0x19fd5a0)
// Original: bn_sqr_comba8
// ----------------------------------------------------------------------------
int bn_sqr_comba8(uint32_t *a1, unsigned int *a2)
{
  int v2;
  uint64_t v3; // rax
  unsigned int v4;
  int v5;
  unsigned int v6;
  int v7;
  uint64_t v8; // rax
  int v9;
  int v10;
  int64_t v11; // rdi
  int v12;
  int v13;
  int64_t v14; // kr38_8
  unsigned int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  int64_t v20; // rdi
  int v21;
  int v22;
  int v23;
  int64_t v24; // kr50_8
  unsigned int v25;
  int v26;
  int v27;
  unsigned int v28;
  int v29;
  int v30;
  unsigned int v31;
  int v32;
  int64_t v33; // rdi
  int v34;
  int v35;
  int v36;
  int v37;
  uint64_t v38; // rax
  uint64_t v39; // kr70_8
  int v41;
  uint64_t v43; // kr80_8
  int v45;
  uint64_t v47; // kr90_8
  int v49;
  uint64_t v50; // rax
  unsigned int v51;
  bool v52;
  bool v53; // cc
  int v55;
  int v57;
  int v59;
  uint64_t v61; // krA0_8
  int v62;
  int v63;
  int v65;
  int64_t v66; // rdi
  int v67;
  int v68;
  uint64_t v69; // rax
  uint64_t v70; // krB8_8
  int v72;
  uint64_t v73; // rax
  unsigned int v74;
  bool v75;
  int v77;
  int v78;
  uint64_t v79; // rax
  uint64_t v80; // krD0_8
  uint64_t v82;
  uint64_t v83;
  uint64_t v84;
  uint64_t v85;
  uint64_t v86;
  uint64_t v87;
  uint64_t v88;
  uint64_t v89;
  uint64_t v90;
  uint64_t v91;
  uint64_t v92;
  uint64_t v93;
  uint64_t v94;
  uint64_t v95;
  uint64_t v96;
  uint64_t v97;
  uint64_t v98;
  uint64_t v99;
  uint64_t v100;
  uint64_t v101;
  uint64_t v102;
  int64_t v103;
  int64_t v104;
  int64_t v105;
  int64_t v106;
  int64_t v107;
  int64_t v108;
  int64_t v109;
  int64_t v110;
  int64_t v111;
  int64_t v112;
  int64_t v113;
  int64_t v114;
  int64_t v115;
  int64_t v116;
  int64_t v117;
  int v118;
  int v119;
  int v120;
  int64_t v121;
  int64_t v122;
  int64_t v123;
  int64_t v124;
  int64_t v125;
  int64_t v126;
  int64_t v127;
  int v128;
  int64_t v129;
  uint64_t v130;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v141;
  int v142;
  int v144;
  uint64_t v146; // 0:kr10_8.8
  uint64_t v147; // 0:kr18_8.8
  uint64_t v148; // 0:kr20_8.8
  uint64_t v149; // 0:^10.4,4:ebp.4
  uint64_t v150; // 0:^10.4,4:ebp.4
  uint64_t v151; // 0:^10.4,4:edi.4
  uint64_t v152; // 0:^10.4,4:edi.4
  uint64_t v153; // 0:ebp.4,4:edi.4
  uint64_t v154; // 0:ebp.4,4:edi.4
  uint64_t v155; // 0:esi.4,4:edi.4
  uint64_t v156; // 0:esi.4,4:edi.4
  uint64_t v157; // 0:esi.4,4:edi.4
  uint64_t v158; // 0:esi.4,4:edi.4

  v2 = 1;
  v130 = *a2 * (uint64_t)*a2;
  *a1 = v130;
  v3 = a2[1] * (uint64_t)*a2;
  v4 = v3 >> 31;
  if ( HIDWORD(v3) <= v4 )
    v2 = HIDWORD(v3) >= v4 && (unsigned int)v3 > 2 * (int)v3;
  v5 = 2 * v3;
  v6 = (a2[1] * (uint64_t)*a2) >> 31;
  v52 = __CFADD__(HIDWORD(v130), v5);
  v7 = HIDWORD(v130) + v5;
  if ( v52 && (++v6, v6 == 0) )
  {
    ++v2;
    a1[1] = v7;
    v8 = a2[1] * (uint64_t)a2[1];
    v9 = a2[1] * a2[1];
  }
  else
  {
    a1[1] = v7;
    HIDWORD(v8) = (a2[1] * (uint64_t)a2[1] + v6) >> 32;
    v9 = a2[1] * a2[1] + v6;
  }
  LODWORD(v151) = HIDWORD(v8) + v2;
  HIDWORD(v151) = __CFADD__(HIDWORD(v8), v2);
  v82 = a2[2] * (uint64_t)*a2;
  v103 = 2 * v82;
  if ( v82 > 2 * v82 )
    ++HIDWORD(v151);
  v10 = v82 >> 31;
  if ( __CFADD__(v9, (uint32_t)v103) && (v10 = HIDWORD(v103) + 1, HIDWORD(v103) == -1) )
  {
    LODWORD(v11) = HIDWORD(v151) + 1;
  }
  else
  {
    LODWORD(v11) = ((unsigned int)v10 + v151) >> 32;
    LODWORD(v151) = v10 + v151;
  }
  a1[2] = v9 + v103;
  HIDWORD(v11) = 1;
  v83 = a2[3] * (uint64_t)*a2;
  v104 = 2 * v83;
  if ( HIDWORD(v83) <= (unsigned int)(v83 >> 31) )
    HIDWORD(v11) = HIDWORD(v83) >= (unsigned int)(v83 >> 31) && (unsigned int)v83 > 2 * (int)v83;
  v52 = __CFADD__((uint32_t)v151, (uint32_t)v104);
  v12 = v83 >> 31;
  v132 = v151 + v104;
  if ( v52 && (v12 = HIDWORD(v104) + 1, HIDWORD(v104) == -1) )
    ++HIDWORD(v11);
  else
    v11 += (unsigned int)v12;
  v84 = a2[2] * (uint64_t)a2[1];
  v105 = 2 * v84;
  if ( v84 > 2 * v84 )
    ++HIDWORD(v11);
  v13 = v84 >> 31;
  if ( __CFADD__(v132, (uint32_t)v105) && (v13 = HIDWORD(v105) + 1, HIDWORD(v105) == -1) )
    ++HIDWORD(v11);
  else
    v11 += (unsigned int)v13;
  a1[3] = v132 + v105;
  v14 = v11 + a2[2] * (uint64_t)a2[2];
  v133 = HIDWORD(v14);
  v15 = __CFADD__(HIDWORD(v11), HIDWORD(v14));
  v85 = a2[3] * (uint64_t)a2[1];
  v106 = 2 * v85;
  if ( v85 > 2 * v85 )
    ++v15;
  v16 = v106 + v14;
  v17 = v85 >> 31;
  if ( __CFADD__((uint32_t)v106, (uint32_t)v14) && (v17 = HIDWORD(v106) + 1, HIDWORD(v106) == -1) )
  {
    v18 = v15 + 1;
  }
  else
  {
    v18 = ((unsigned int)v17 + __PAIR64__(v15, HIDWORD(v14))) >> 32;
    v133 = v17 + HIDWORD(v14);
  }
  v86 = a2[4] * (uint64_t)*a2;
  v107 = 2 * v86;
  if ( v86 > 2 * v86 )
    ++v18;
  v19 = v86 >> 31;
  if ( __CFADD__(v16, (uint32_t)v107) && (v19 = HIDWORD(v107) + 1, HIDWORD(v107) == -1) )
  {
    LODWORD(v20) = v18 + 1;
  }
  else
  {
    LODWORD(v146) = v133;
    HIDWORD(v146) = v18;
    LODWORD(v20) = ((unsigned int)v19 + v146) >> 32;
    v133 += v19;
  }
  a1[4] = v16 + v107;
  HIDWORD(v20) = 1;
  v87 = a2[5] * (uint64_t)*a2;
  v108 = 2 * v87;
  if ( HIDWORD(v87) <= (unsigned int)(v87 >> 31) )
    HIDWORD(v20) = HIDWORD(v87) >= (unsigned int)(v87 >> 31) && (unsigned int)v87 > 2 * (int)v87;
  v52 = __CFADD__(v133, (uint32_t)v108);
  v21 = v87 >> 31;
  v134 = v133 + v108;
  if ( v52 && (v21 = HIDWORD(v108) + 1, HIDWORD(v108) == -1) )
    ++HIDWORD(v20);
  else
    v20 += (unsigned int)v21;
  v88 = a2[4] * (uint64_t)a2[1];
  v109 = 2 * v88;
  if ( v88 > 2 * v88 )
    ++HIDWORD(v20);
  v52 = __CFADD__(v134, (uint32_t)v109);
  v22 = v88 >> 31;
  v135 = v134 + v109;
  if ( v52 && (v22 = HIDWORD(v109) + 1, HIDWORD(v109) == -1) )
    ++HIDWORD(v20);
  else
    v20 += (unsigned int)v22;
  v89 = a2[3] * (uint64_t)a2[2];
  v110 = 2 * v89;
  if ( v89 > 2 * v89 )
    ++HIDWORD(v20);
  v23 = v89 >> 31;
  if ( __CFADD__(v135, (uint32_t)v110) && (v23 = HIDWORD(v110) + 1, HIDWORD(v110) == -1) )
    ++HIDWORD(v20);
  else
    v20 += (unsigned int)v23;
  a1[5] = v135 + v110;
  v24 = v20 + a2[3] * (uint64_t)a2[3];
  v136 = HIDWORD(v24);
  v25 = __CFADD__(HIDWORD(v20), HIDWORD(v24));
  v90 = a2[4] * (uint64_t)a2[2];
  v111 = 2 * v90;
  if ( v90 > 2 * v90 )
    ++v25;
  v26 = v111 + v24;
  v27 = v90 >> 31;
  if ( __CFADD__((uint32_t)v111, (uint32_t)v24) && (v27 = HIDWORD(v111) + 1, HIDWORD(v111) == -1) )
  {
    v28 = v25 + 1;
  }
  else
  {
    v28 = ((unsigned int)v27 + __PAIR64__(v25, HIDWORD(v24))) >> 32;
    v136 = v27 + HIDWORD(v24);
  }
  v91 = a2[5] * (uint64_t)a2[1];
  v112 = 2 * v91;
  if ( v91 > 2 * v91 )
    ++v28;
  v52 = __CFADD__((uint32_t)v112, v26);
  v29 = v112 + v26;
  v30 = v91 >> 31;
  if ( v52 && (v30 = HIDWORD(v112) + 1, HIDWORD(v112) == -1) )
  {
    v31 = v28 + 1;
  }
  else
  {
    LODWORD(v147) = v136;
    HIDWORD(v147) = v28;
    v31 = ((unsigned int)v30 + v147) >> 32;
    v136 += v30;
  }
  v92 = a2[6] * (uint64_t)*a2;
  v113 = 2 * v92;
  if ( v92 > 2 * v92 )
    ++v31;
  v32 = v92 >> 31;
  if ( __CFADD__(v29, (uint32_t)v113) && (v32 = HIDWORD(v113) + 1, HIDWORD(v113) == -1) )
  {
    LODWORD(v33) = v31 + 1;
  }
  else
  {
    LODWORD(v148) = v136;
    HIDWORD(v148) = v31;
    LODWORD(v33) = ((unsigned int)v32 + v148) >> 32;
    v136 += v32;
  }
  a1[6] = v29 + v113;
  HIDWORD(v33) = 1;
  v93 = a2[7] * (uint64_t)*a2;
  v114 = 2 * v93;
  if ( HIDWORD(v93) <= (unsigned int)(v93 >> 31) )
    HIDWORD(v33) = HIDWORD(v93) >= (unsigned int)(v93 >> 31) && (unsigned int)v93 > 2 * (int)v93;
  v52 = __CFADD__(v136, (uint32_t)v114);
  v34 = v93 >> 31;
  v137 = v136 + v114;
  if ( v52 && (v34 = HIDWORD(v114) + 1, HIDWORD(v114) == -1) )
    ++HIDWORD(v33);
  else
    v33 += (unsigned int)v34;
  v94 = a2[6] * (uint64_t)a2[1];
  v115 = 2 * v94;
  if ( v94 > 2 * v94 )
    ++HIDWORD(v33);
  v52 = __CFADD__(v137, (uint32_t)v115);
  v35 = v94 >> 31;
  v138 = v137 + v115;
  if ( v52 && (v35 = HIDWORD(v115) + 1, HIDWORD(v115) == -1) )
    ++HIDWORD(v33);
  else
    v33 += (unsigned int)v35;
  v95 = a2[5] * (uint64_t)a2[2];
  v116 = 2 * v95;
  if ( v95 > 2 * v95 )
    ++HIDWORD(v33);
  v52 = __CFADD__(v138, (uint32_t)v116);
  v36 = v95 >> 31;
  v139 = v138 + v116;
  if ( v52 && (v36 = HIDWORD(v116) + 1, HIDWORD(v116) == -1) )
    ++HIDWORD(v33);
  else
    v33 += (unsigned int)v36;
  v96 = a2[4] * (uint64_t)a2[3];
  v117 = 2 * v96;
  if ( v96 > 2 * v96 )
    ++HIDWORD(v33);
  v37 = v96 >> 31;
  if ( __CFADD__(v139, (uint32_t)v117) && (v37 = HIDWORD(v117) + 1, HIDWORD(v117) == -1) )
    ++HIDWORD(v33);
  else
    v33 += (unsigned int)v37;
  a1[7] = v139 + v117;
  v38 = a2[4] * (uint64_t)a2[4];
  v118 = v38 + v33;
  LODWORD(v149) = (v38 + v33) >> 32;
  HIDWORD(v149) = __CFADD__(HIDWORD(v33), (uint32_t)v149);
  v39 = a2[5] * (uint64_t)a2[3];
  HIDWORD(v155) = v39 >> 31;
  LODWORD(v155) = 2 * v39;
  if ( a2[5] * (uint64_t)a2[3] > v155 )
    ++HIDWORD(v149);
  v52 = __CFADD__(v118, (uint32_t)v155);
  v41 = v39 >> 31;
  v119 = v118 + v155;
  if ( v52 && (v41 = HIDWORD(v155) + 1, HIDWORD(v155) == -1) )
  {
    ++HIDWORD(v149);
  }
  else
  {
    HIDWORD(v149) = ((unsigned int)v41 + v149) >> 32;
    LODWORD(v149) = v41 + v149;
  }
  v43 = a2[6] * (uint64_t)a2[2];
  HIDWORD(v156) = v43 >> 31;
  LODWORD(v156) = 2 * v43;
  if ( a2[6] * (uint64_t)a2[2] > v156 )
    ++HIDWORD(v149);
  v52 = __CFADD__(v119, (uint32_t)v156);
  v45 = v43 >> 31;
  v120 = v119 + v156;
  if ( v52 && (v45 = HIDWORD(v156) + 1, HIDWORD(v156) == -1) )
  {
    ++HIDWORD(v149);
  }
  else
  {
    HIDWORD(v149) = ((unsigned int)v45 + v149) >> 32;
    LODWORD(v149) = v45 + v149;
  }
  v47 = a2[7] * (uint64_t)a2[1];
  HIDWORD(v157) = v47 >> 31;
  LODWORD(v157) = 2 * v47;
  if ( a2[7] * (uint64_t)a2[1] > v157 )
    ++HIDWORD(v149);
  v49 = v47 >> 31;
  if ( __CFADD__(v120, (uint32_t)v157) && (v49 = HIDWORD(v157) + 1, HIDWORD(v157) == -1) )
  {
    LODWORD(v153) = HIDWORD(v149) + 1;
  }
  else
  {
    LODWORD(v153) = ((unsigned int)v49 + v149) >> 32;
    LODWORD(v149) = v49 + v149;
  }
  a1[8] = v120 + v157;
  v50 = a2[7] * (uint64_t)a2[2];
  v51 = v50 >> 31;
  v52 = HIDWORD(v50) < v51;
  v53 = HIDWORD(v50) <= v51;
  v121 = 2 * v50;
  HIDWORD(v153) = 1;
  if ( v53 )
    HIDWORD(v153) = !v52 && (unsigned int)v50 > 2 * (int)v50;
  v52 = __CFADD__((uint32_t)v149, (uint32_t)v121);
  v55 = v50 >> 31;
  v141 = v149 + v121;
  if ( v52 && (v55 = HIDWORD(v121) + 1, HIDWORD(v121) == -1) )
    ++HIDWORD(v153);
  else
    v153 += (unsigned int)v55;
  v97 = a2[6] * (uint64_t)a2[3];
  v122 = 2 * v97;
  if ( v97 > 2 * v97 )
    ++HIDWORD(v153);
  v52 = __CFADD__(v141, (uint32_t)v122);
  v57 = v97 >> 31;
  v142 = v141 + v122;
  if ( v52 && (v57 = HIDWORD(v122) + 1, HIDWORD(v122) == -1) )
    ++HIDWORD(v153);
  else
    v153 += (unsigned int)v57;
  v98 = a2[5] * (uint64_t)a2[4];
  v123 = 2 * v98;
  if ( v98 > 2 * v98 )
    ++HIDWORD(v153);
  v59 = v98 >> 31;
  if ( __CFADD__(v142, (uint32_t)v123) && (v59 = HIDWORD(v123) + 1, HIDWORD(v123) == -1) )
    ++HIDWORD(v153);
  else
    v153 += (unsigned int)v59;
  a1[9] = v142 + v123;
  v61 = v153 + a2[5] * (uint64_t)a2[5];
  LODWORD(v152) = HIDWORD(v61);
  HIDWORD(v152) = __CFADD__(HIDWORD(v153), HIDWORD(v61));
  v99 = a2[6] * (uint64_t)a2[4];
  v124 = 2 * v99;
  if ( v99 > 2 * v99 )
    ++HIDWORD(v152);
  v62 = v124 + v61;
  v63 = v99 >> 31;
  if ( __CFADD__((uint32_t)v124, (uint32_t)v61) && (v63 = HIDWORD(v124) + 1, HIDWORD(v124) == -1) )
  {
    ++HIDWORD(v152);
  }
  else
  {
    HIDWORD(v152) = ((unsigned int)v63 + v152) >> 32;
    LODWORD(v152) = v63 + HIDWORD(v61);
  }
  v100 = a2[7] * (uint64_t)a2[3];
  v125 = 2 * v100;
  if ( v100 > 2 * v100 )
    ++HIDWORD(v152);
  v65 = v100 >> 31;
  if ( __CFADD__(v62, (uint32_t)v125) && (v65 = HIDWORD(v125) + 1, HIDWORD(v125) == -1) )
  {
    LODWORD(v66) = HIDWORD(v152) + 1;
  }
  else
  {
    LODWORD(v66) = ((unsigned int)v65 + v152) >> 32;
    LODWORD(v152) = v65 + v152;
  }
  a1[10] = v62 + v125;
  HIDWORD(v66) = 1;
  v101 = a2[7] * (uint64_t)a2[4];
  v126 = 2 * v101;
  if ( HIDWORD(v101) <= (unsigned int)(v101 >> 31) )
    HIDWORD(v66) = HIDWORD(v101) >= (unsigned int)(v101 >> 31) && (unsigned int)v101 > 2 * (int)v101;
  v52 = __CFADD__((uint32_t)v152, (uint32_t)v126);
  v67 = v101 >> 31;
  v144 = v152 + v126;
  if ( v52 && (v67 = HIDWORD(v126) + 1, HIDWORD(v126) == -1) )
    ++HIDWORD(v66);
  else
    v66 += (unsigned int)v67;
  v102 = a2[6] * (uint64_t)a2[5];
  v127 = 2 * v102;
  if ( v102 > 2 * v102 )
    ++HIDWORD(v66);
  v68 = v102 >> 31;
  if ( __CFADD__(v144, (uint32_t)v127) && (v68 = HIDWORD(v127) + 1, HIDWORD(v127) == -1) )
    ++HIDWORD(v66);
  else
    v66 += (unsigned int)v68;
  a1[11] = v144 + v127;
  v69 = a2[6] * (uint64_t)a2[6];
  v128 = v69 + v66;
  LODWORD(v150) = (v69 + v66) >> 32;
  HIDWORD(v150) = __CFADD__(HIDWORD(v66), (uint32_t)v150);
  v70 = a2[7] * (uint64_t)a2[5];
  HIDWORD(v158) = v70 >> 31;
  LODWORD(v158) = 2 * v70;
  if ( a2[7] * (uint64_t)a2[5] > v158 )
    ++HIDWORD(v150);
  v72 = v70 >> 31;
  if ( __CFADD__(v128, (uint32_t)v158) && (v72 = HIDWORD(v158) + 1, HIDWORD(v158) == -1) )
  {
    LODWORD(v154) = HIDWORD(v150) + 1;
  }
  else
  {
    LODWORD(v154) = ((unsigned int)v72 + v150) >> 32;
    LODWORD(v150) = v72 + v150;
  }
  a1[12] = v128 + v158;
  v73 = a2[7] * (uint64_t)a2[6];
  v74 = v73 >> 31;
  v75 = HIDWORD(v73) < v74;
  v53 = HIDWORD(v73) <= v74;
  v129 = 2 * v73;
  HIDWORD(v154) = 1;
  if ( v53 )
    HIDWORD(v154) = !v75 && (unsigned int)v73 > 2 * (int)v73;
  v77 = v73 >> 31;
  if ( __CFADD__((uint32_t)v150, (uint32_t)v129) && (v77 = HIDWORD(v129) + 1, HIDWORD(v129) == -1) )
  {
    v78 = HIDWORD(v154) + 1;
  }
  else
  {
    v78 = ((unsigned int)v77 + v154) >> 32;
    LODWORD(v154) = v77 + v154;
  }
  a1[13] = v150 + v129;
  v79 = a2[7] * (uint64_t)a2[7];
  v80 = v79 + (unsigned int)v154;
  a1[14] = v80;
  a1[15] = HIDWORD(v80) + v78;
  return v79;
}

// ----------------------------------------------------------------------------
// Function: bn_sqr_comba4  (binary VA: 0x19fe240)
// Original: bn_sqr_comba4
// ----------------------------------------------------------------------------
int bn_sqr_comba4(uint32_t *a1, unsigned int *a2)
{
  int v2;
  uint64_t v3; // rax
  unsigned int v4;
  int v5;
  unsigned int v6;
  int v7;
  uint64_t v8; // rax
  int v9;
  int v10;
  int64_t v11; // rdi
  int v12;
  int v13;
  uint64_t v14; // rax
  uint64_t v15; // kr18_8
  int v17;
  int v18;
  uint64_t v19; // rax
  unsigned int v20;
  bool v21;
  bool v22; // cc
  bool v23;
  int v24;
  int v25;
  uint64_t v26; // rax
  uint64_t v27; // kr30_8
  uint64_t v29;
  uint64_t v30;
  uint64_t v31;
  uint64_t v32;
  int v34;
  int64_t v36;
  int64_t v37;
  int64_t v38;
  int v39;
  int64_t v40;
  uint64_t v41; // 0:^8.4,4:ebp.4
  uint64_t v42; // 0:^8.4,4:edi.4
  uint64_t v43; // 0:esi.4,4:edi.4

  v2 = 1;
  v32 = *a2 * (uint64_t)*a2;
  *a1 = v32;
  v3 = a2[1] * (uint64_t)*a2;
  v4 = v3 >> 31;
  if ( HIDWORD(v3) <= v4 )
    v2 = HIDWORD(v3) >= v4 && (unsigned int)v3 > 2 * (int)v3;
  v5 = 2 * v3;
  v6 = (a2[1] * (uint64_t)*a2) >> 31;
  v21 = __CFADD__(HIDWORD(v32), v5);
  v7 = HIDWORD(v32) + v5;
  if ( v21 && (++v6, v6 == 0) )
  {
    ++v2;
    a1[1] = v7;
    v8 = a2[1] * (uint64_t)a2[1];
    v9 = a2[1] * a2[1];
  }
  else
  {
    a1[1] = v7;
    HIDWORD(v8) = (a2[1] * (uint64_t)a2[1] + v6) >> 32;
    v9 = a2[1] * a2[1] + v6;
  }
  LODWORD(v42) = HIDWORD(v8) + v2;
  HIDWORD(v42) = __CFADD__(HIDWORD(v8), v2);
  v29 = a2[2] * (uint64_t)*a2;
  v36 = 2 * v29;
  if ( v29 > 2 * v29 )
    ++HIDWORD(v42);
  v10 = v29 >> 31;
  if ( __CFADD__(v9, (uint32_t)v36) && (v10 = HIDWORD(v36) + 1, HIDWORD(v36) == -1) )
  {
    LODWORD(v11) = HIDWORD(v42) + 1;
  }
  else
  {
    LODWORD(v11) = ((unsigned int)v10 + v42) >> 32;
    LODWORD(v42) = v10 + v42;
  }
  a1[2] = v9 + v36;
  HIDWORD(v11) = 1;
  v30 = a2[3] * (uint64_t)*a2;
  v37 = 2 * v30;
  if ( HIDWORD(v30) <= (unsigned int)(v30 >> 31) )
    HIDWORD(v11) = HIDWORD(v30) >= (unsigned int)(v30 >> 31) && (unsigned int)v30 > 2 * (int)v30;
  v21 = __CFADD__((uint32_t)v42, (uint32_t)v37);
  v12 = v30 >> 31;
  v34 = v42 + v37;
  if ( v21 && (v12 = HIDWORD(v37) + 1, HIDWORD(v37) == -1) )
    ++HIDWORD(v11);
  else
    v11 += (unsigned int)v12;
  v31 = a2[2] * (uint64_t)a2[1];
  v38 = 2 * v31;
  if ( v31 > 2 * v31 )
    ++HIDWORD(v11);
  v13 = v31 >> 31;
  if ( __CFADD__(v34, (uint32_t)v38) && (v13 = HIDWORD(v38) + 1, HIDWORD(v38) == -1) )
    ++HIDWORD(v11);
  else
    v11 += (unsigned int)v13;
  a1[3] = v34 + v38;
  v14 = a2[2] * (uint64_t)a2[2];
  v39 = v14 + v11;
  LODWORD(v41) = (v14 + v11) >> 32;
  HIDWORD(v41) = __CFADD__(HIDWORD(v11), (uint32_t)v41);
  v15 = a2[3] * (uint64_t)a2[1];
  HIDWORD(v43) = v15 >> 31;
  LODWORD(v43) = 2 * v15;
  if ( a2[3] * (uint64_t)a2[1] > v43 )
    ++HIDWORD(v41);
  v17 = v15 >> 31;
  if ( __CFADD__(v39, (uint32_t)v43) && (v17 = HIDWORD(v43) + 1, HIDWORD(v43) == -1) )
  {
    v18 = HIDWORD(v41) + 1;
  }
  else
  {
    v18 = ((unsigned int)v17 + v41) >> 32;
    LODWORD(v41) = v17 + v41;
  }
  a1[4] = v39 + v43;
  v19 = a2[3] * (uint64_t)a2[2];
  v20 = v19 >> 31;
  v21 = HIDWORD(v19) < v20;
  v22 = HIDWORD(v19) <= v20;
  v40 = 2 * v19;
  v23 = true;
  if ( v22 )
    v23 = !v21 && (unsigned int)v19 > 2 * (int)v19;
  v24 = v19 >> 31;
  if ( __CFADD__((uint32_t)v41, (uint32_t)v40) && (v24 = HIDWORD(v40) + 1, HIDWORD(v40) == -1) )
  {
    v25 = v23 + 1;
  }
  else
  {
    v25 = ((unsigned int)v24 + __PAIR64__(v23, v18)) >> 32;
    v18 += v24;
  }
  a1[5] = v41 + v40;
  v26 = a2[3] * (uint64_t)a2[3];
  v27 = v26 + (unsigned int)v18;
  a1[6] = v27;
  a1[7] = HIDWORD(v27) + v25;
  return v26;
}

// ----------------------------------------------------------------------------
// Function: bn_mul_mont  (binary VA: 0x19fe540)
// Original: bn_mul_mont
// ----------------------------------------------------------------------------
int bn_mul_mont()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_19FFAB0  (binary VA: 0x19ffab0)
// Original: sub_19FFAB0
// ----------------------------------------------------------------------------
int sub_19FFAB0(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  int v6;
  int v7;
  int v8;
  int v9;
  uint8_t *v10;
  char v11;
  int v12;
  int result;
  int v14;
  int v15;
  int v16;

  if ( a1[2] < a2 )
  {
    v16 = a2;
    v15 = bn_expand2((int)(uintptr_t)(a1), a2);
    a2 = v16;
    if ( v15 == 0 )
      return 0;
  }
  v6 = a1[1];
  if ( a2 > v6 )
  {
    v7 = 4 * v6;
    do
    {
      ++v6;
      *(uint32_t *)(*a1 + v7) = 0;
      a1[1] = v6;
      v7 += 4;
    }
    while ( v6 != a2 );
  }
  v8 = 4 * a2;
  if ( 4 * a2 != 0 )
  {
    v9 = 0;
    v10 = (uint8_t *)(a4 + a3);
    do
    {
      v11 = *(uint8_t *)(*a1 + v9++);
      *v10 = v11;
      v10 += a5;
    }
    while ( v9 != v8 );
  }
  v12 = a1[1];
  result = 1;
  if ( v12 > 0 )
  {
    v14 = *a1 + 4 * v12 - 4 - 4 * v12;
    do
    {
      if ( *(uint32_t *)(v14 + 4 * v12) != 0 )
        break;
      --v12;
    }
    while ( v12 != 0 );
    a1[1] = v12;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A03880  (binary VA: 0x1a03880)
// Original: sub_1A03880
// ----------------------------------------------------------------------------
int sub_1A03880(unsigned int *a1, unsigned int **a2, uint32_t *a3)
{
  int v3;
  int v4;
  unsigned int *v5;
  unsigned int *v6;
  int v7;
  int v8;
  unsigned int *v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  unsigned int *v16;
  int v17;
  int i;
  unsigned int v19;
  int v20;
  int v21;
  int v22;
  signed int v23;
  int *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int result;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  unsigned int *v39;
  int v40;
  unsigned int *v41;
  int v43;
  int v45;
  int v46;

  v3 = a3[7];
  v43 = *a3 / 32;
  if ( v43 == 0 || v3 == 0 )
    goto LABEL_42;
  v38 = v3 + v43;
  v35 = v3 + v43 + 1;
  if ( v35 > (int)(uintptr_t)(a2[2]) )
  {
    v34 = a3[7];
    v32 = bn_expand2((int)(uintptr_t)(a2), v3 + v43 + 1);
    v3 = v34;
    if ( v32 == 0 )
      return 0;
  }
  a2[3] = (unsigned int *)(a3[9] ^ (unsigned int)(uintptr_t)(a2[3]));
  v41 = (unsigned int *)a3[6];
  v4 = (int)(uintptr_t)(a2[1]);
  v5 = *a2;
  if ( v35 > v4 )
  {
    v6 = *a2;
    v45 = v3;
    v7 = v4;
    v8 = v38;
    v39 = *a2;
    while ( 1 )
    {
      v6[v7++] = 0;
      if ( v4 == v8 )
        break;
      v6 = *a2;
      ++v4;
    }
    v3 = v45;
    v5 = v39;
  }
  a2[1] = (unsigned int *)v35;
  v40 = a3[16];
  if ( v3 > 0 )
  {
    v9 = &v5[v3];
    v10 = 0;
    v36 = v3;
    do
    {
      v11 = bn_mul_add_words(v5, v41, v36, *v5 * v40);
      ++v5;
      v12 = v11 + *v9;
      *v9 = v12;
      if ( v11 > v12 )
      {
        v13 = v9[1] + 1;
        v9[1] = v13;
        if ( v13 == 0 )
        {
          v14 = v9[2] + 1;
          v9[2] = v14;
          if ( v14 == 0 )
          {
            v15 = v9[3] + 1;
            v9[3] = v15;
            if ( v15 == 0 )
            {
              v16 = v9;
              do
              {
                v17 = v16[4] + 1;
                v16[4] = v17;
                ++v16;
              }
              while ( v17 == 0 );
            }
          }
        }
      }
      ++v10;
      ++v9;
    }
    while ( v10 != v36 );
    v35 = (int)(uintptr_t)(a2[1]);
  }
  if ( v35 > 0 )
  {
    for ( i = v35; i != 0; --i )
    {
      if ( (*a2)[v35 - 1 - v35 + i] != 0 )
        break;
    }
    v35 = i;
    a2[1] = (unsigned int *)i;
  }
  if ( v43 < v35 )
  {
    if ( v43 <= (int)a1[2] || bn_expand2((int)(uintptr_t)(a1), v43) != 0 )
    {
      a1[1] = (v35 - v43) & ((v35 - v43 - v43) >> 31) | v43 & ~((v35 - v43 - v43) >> 31);
      v19 = *a1;
      a1[3] = (unsigned int)(uintptr_t)(a2[3]);
      v20 = (int)(uintptr_t)(&(*a2)[v43]);
      v21 = bn_sub_words((uint32_t *)v19, (uint32_t *)v20, v41, v43);
      v22 = v20 & ~((v43 - (v35 - v43)) >> 31) & (-v21 | ((v43 - (v35 - v43)) >> 31) | ((v35 - v43 - v43) >> 31))
          | v19 & ~(~((v43 - (v35 - v43)) >> 31) & (-v21 | ((v43 - (v35 - v43)) >> 31) | ((v35 - v43 - v43) >> 31)));
      v23 = 0;
      if ( v43 - 4 > 0 )
      {
        v24 = (int *)v22;
        v46 = v22;
        do
        {
          v25 = *v24;
          v33 = v24[1];
          v37 = v24[2];
          *(uint32_t *)(v20 + 4 * v23) = 0;
          v26 = v24[3];
          *(uint32_t *)(v20 + 4 * v23 + 4) = 0;
          *(uint32_t *)(v19 + 4 * v23) = v25;
          *(uint32_t *)(v20 + 4 * v23 + 8) = 0;
          *(uint32_t *)(v19 + 4 * v23 + 4) = v33;
          *(uint32_t *)(v20 + 4 * v23 + 12) = 0;
          *(uint32_t *)(v19 + 4 * v23 + 8) = v37;
          v24 += 4;
          *(uint32_t *)(v19 + 4 * v23 + 12) = v26;
          v23 += 4;
        }
        while ( v43 - 4 > v23 );
        v22 = v46;
        v23 = 4 * ((unsigned int)(v43 - 5) >> 2) + 4;
      }
      if ( v43 > v23 )
      {
        do
        {
          *(uint32_t *)(v19 + 4 * v23) = *(uint32_t *)(v22 + 4 * v23);
          *(uint32_t *)(v20 + 4 * v23++) = 0;
        }
        while ( v23 != v43 );
      }
      v27 = (int)(uintptr_t)(a2[1]);
      if ( v27 > 0 )
      {
        v28 = (int)(uintptr_t)(&(*a2)[v27 - 1 - v27]);
        do
        {
          if ( *(uint32_t *)(v28 + 4 * v27) != 0 )
            break;
          --v27;
        }
        while ( v27 != 0 );
        a2[1] = (unsigned int *)v27;
      }
      v29 = a1[1];
      result = 1;
      if ( v29 > 0 )
      {
        v31 = *a1 + 4 * v29 - 4 - 4 * v29;
        do
        {
          if ( *(uint32_t *)(v31 + 4 * v29) != 0 )
            break;
          --v29;
        }
        while ( v29 != 0 );
        a1[1] = v29;
        return 1;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
LABEL_42:
    a1[1] = 0;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: bn_sub_part_words  (binary VA: 0x1a042f0)
// Original: bn_sub_part_words
// ----------------------------------------------------------------------------
int bn_sub_part_words(uint32_t *a1, uint32_t *a2, uint32_t *a3, int a4, int a5)
{
  int v5;
  int result;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  bool v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;

  v5 = a5;
  result = bn_sub_words(a1, a2, a3, a4);
  if ( a5 != 0 )
  {
    v7 = &a1[a4];
    v8 = &a3[a4];
    if ( a5 < 0 )
    {
      while ( 1 )
      {
        v11 = *v8 == 0;
        *v7 = -(*v8 + result);
        if ( !v11 )
          result = 1;
        if ( v5 >= -1 )
          break;
        v13 = v8[1];
        v7[1] = -(result + v13);
        if ( v13 != 0 )
          result = 1;
        if ( v5 == -2 )
          break;
        v14 = v8[2];
        v7[2] = -(result + v14);
        if ( v14 != 0 )
          result = 1;
        if ( v5 == -3 )
          break;
        v15 = v8[3];
        v7[3] = -(result + v15);
        if ( v15 != 0 )
          result = 1;
        v5 += 4;
        if ( v5 == 0 )
          break;
        v8 += 4;
        v7 += 4;
      }
    }
    else
    {
      v9 = &a2[a4];
      if ( result != 0 )
      {
        while ( 1 )
        {
          v11 = *v9 == 0;
          *v7 = *v9 - result;
          if ( !v11 )
            result = 0;
          if ( v5 == a5 - ((a5 + 2) & 0xFFFFFFFC) )
            break;
          v10 = v9[1];
          v7[1] = v10 - result;
          if ( v10 != 0 )
            result = 0;
          if ( v5 == 2 )
            break;
          v11 = v9[2] == 0;
          v7[2] = v9[2] - result;
          if ( !v11 )
            result = 0;
          if ( v5 == 3 )
            break;
          v12 = v9[3];
          v7[3] = v12 - result;
          if ( v12 != 0 )
            result = 0;
          v5 -= 4;
          if ( v5 == 0 )
            break;
          v9 += 4;
          v7 += 4;
          if ( result == 0 )
          {
            if ( v5 <= 0 )
              return result;
            goto LABEL_34;
          }
        }
      }
      else
      {
LABEL_34:
        *v7 = *v9;
        result = 0;
        if ( v5 != 1 )
        {
          v7[1] = v9[1];
          if ( v5 != 2 )
          {
            v7[2] = v9[2];
            if ( v5 != 3 )
            {
              v16 = v5 - 4;
              v7[3] = v9[3];
              if ( v16 != 0 )
              {
                do
                {
                  v9 += 4;
                  v7 += 4;
                  *v7 = *v9;
                  if ( v16 <= 1 )
                    break;
                  v7[1] = v9[1];
                  if ( v16 == 2 )
                    break;
                  v7[2] = v9[2];
                  if ( v16 == 3 )
                    break;
                  v16 -= 4;
                  v7[3] = v9[3];
                }
                while ( v16 != 0 );
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: bn_add_part_words  (binary VA: 0x1a044f0)
// Original: bn_add_part_words
// ----------------------------------------------------------------------------
unsigned int bn_add_part_words(uint32_t *a1, unsigned int *a2, unsigned int *a3, int a4, int a5)
{
  int v5;
  unsigned int result;
  int v7;
  unsigned int *v8;
  unsigned int *v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  unsigned int *v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  bool v21;
  unsigned int v22;
  unsigned int v23;
  int v24;

  v5 = a5;
  result = bn_add_words(a1, a2, a3, a4);
  if ( a5 != 0 )
  {
    v7 = a4;
    v8 = &a1[a4];
    if ( a5 < 0 )
    {
      v17 = &a3[v7];
      if ( result != 0 )
      {
        v18 = *v17 + result;
        result = __CFADD__(*v17, result);
        *v8 = v18;
        if ( a5 != -1 )
        {
          v19 = v17[1] + result;
          result = __CFADD__(v17[1], result);
          v8[1] = v19;
          if ( a5 != -2 )
          {
            do
            {
              v23 = v17[2] + result;
              result = __CFADD__(v17[2], result);
              v8[2] = v23;
              if ( v5 >= -3 )
                break;
              v20 = v17[3] + result;
              v21 = v5 == -4;
              v5 += 4;
              result = __CFADD__(v17[3], result);
              v8[3] = v20;
              if ( v21 )
                break;
              v17 += 4;
              v8 += 4;
              if ( result == 0 )
                goto LABEL_34;
              result = *v17 == -1;
              *v8 = *v17 + 1;
              if ( v5 == a5 + 4 + ((-2 - a5) & 0xFFFFFFFC) )
                break;
              v22 = v17[1] + result;
              result = __CFADD__(v17[1], result);
              v8[1] = v22;
            }
            while ( v5 != a5 + 4 + ((-3 - a5) & 0xFFFFFFFC) );
          }
        }
      }
      else
      {
LABEL_34:
        *v8 = *v17;
        result = 0;
        if ( v5 != -1 )
        {
          v8[1] = v17[1];
          if ( v5 != -2 )
          {
            v8[2] = v17[2];
            if ( v5 != -3 )
            {
              v21 = v5 == -4;
              v24 = v5 + 4;
              v8[3] = v17[3];
              if ( !v21 )
              {
                while ( 1 )
                {
                  v17 += 4;
                  v8 += 4;
                  *v8 = *v17;
                  if ( v24 >= -1 )
                    break;
                  v8[1] = v17[1];
                  if ( v24 != -2 )
                  {
                    v8[2] = v17[2];
                    if ( v24 != -3 )
                    {
                      v21 = v24 == -4;
                      v24 += 4;
                      v8[3] = v17[3];
                      if ( !v21 )
                        continue;
                    }
                  }
                  return 0;
                }
                return 0;
              }
            }
          }
        }
      }
    }
    else
    {
      v9 = &a2[v7];
      if ( result != 0 )
      {
        v10 = *v9 + result;
        result = __CFADD__(*v9, result);
        *v8 = v10;
        if ( a5 != 1 )
        {
          v11 = v9[1] + result;
          result = __CFADD__(v9[1], result);
          v8[1] = v11;
          if ( a5 != 2 )
          {
            v12 = a5 - 4;
            while ( 1 )
            {
              v15 = v9[2] + result;
              result = __CFADD__(v9[2], result);
              v8[2] = v15;
              if ( v12 == -1 )
                break;
              v13 = v9[3] + result;
              LOBYTE(result) = __CFADD__(v9[3], result);
              v8[3] = v13;
              v5 = v12;
              result = (uint8_t)result;
              if ( v12 == 0 )
                break;
              v9 += 4;
              v8 += 4;
              if ( (uint8_t)result == 0 )
              {
                if ( v12 <= 0 )
                  return result;
                goto LABEL_14;
              }
              result = *v9 == -1;
              *v8 = *v9 + 1;
              if ( v12 != a5 - 4 - ((a5 - 2) & 0xFFFFFFFC) )
              {
                v14 = v9[1] + result;
                LOBYTE(result) = __CFADD__(v9[1], result);
                v12 -= 4;
                v8[1] = v14;
                result = (uint8_t)result;
                if ( v12 != -2 )
                  continue;
              }
              return result;
            }
          }
        }
      }
      else
      {
LABEL_14:
        *v8 = *v9;
        result = 0;
        if ( v5 != 1 )
        {
          v8[1] = v9[1];
          if ( v5 != 2 )
          {
            v8[2] = v9[2];
            if ( v5 != 3 )
            {
              v16 = v5 - 4;
              v8[3] = v9[3];
              if ( v16 != 0 )
              {
                do
                {
                  v9 += 4;
                  v8 += 4;
                  *v8 = *v9;
                  if ( v16 <= 1 )
                    break;
                  v8[1] = v9[1];
                  if ( v16 == 2 )
                    break;
                  v8[2] = v9[2];
                  if ( v16 == 3 )
                    break;
                  v16 -= 4;
                  v8[3] = v9[3];
                }
                while ( v16 != 0 );
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: bn_mul_normal  (binary VA: 0x1a047c0)
// Original: bn_mul_normal
// ----------------------------------------------------------------------------
unsigned int bn_mul_normal(unsigned int *a1, unsigned int *a2, int a3, unsigned int *a4, int a5)
{
  int v5;
  unsigned int *v6;
  int v7;
  unsigned int *v8;
  unsigned int *v9;
  unsigned int result;
  unsigned int *v11;
  unsigned int *v12;
  int v13;
  int v14;
  unsigned int *v15;
  unsigned int v16;

  v5 = a5;
  v6 = a4;
  if ( a3 < a5 )
  {
    v7 = a3;
    a3 = a5;
    v5 = v7;
    v8 = a2;
    a2 = a4;
    v6 = v8;
  }
  if ( v5 <= 0 )
    return bn_mul_words(a1, a2, a3, 0);
  v9 = &a1[a3];
  v14 = v5;
  result = bn_mul_words(a1, a2, a3, *v6);
  *v9 = result;
  if ( v14 != 1 )
  {
    v11 = v6;
    v16 = v14 - 6 - ((v14 - 2) & 0xFFFFFFFC);
    v12 = a1;
    v13 = v14 - 2;
    do
    {
      v15 = v11;
      result = bn_mul_add_words(v12 + 1, a2, a3, v11[1]);
      v9[1] = result;
      if ( v13 == 0 )
        break;
      result = bn_mul_add_words(v12 + 2, a2, a3, v15[2]);
      v9[2] = result;
      if ( v13 == 1 )
        break;
      result = bn_mul_add_words(v12 + 3, a2, a3, v15[3]);
      v9[3] = result;
      if ( v13 == 2 )
        break;
      v12 += 4;
      result = bn_mul_add_words(v12, a2, a3, v15[4]);
      v9[4] = result;
      v9 += 4;
      v11 = v15 + 4;
      v13 -= 4;
    }
    while ( v13 != v16 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: bn_mul_recursive  (binary VA: 0x1a04960)
// Original: bn_mul_recursive
// ----------------------------------------------------------------------------
unsigned int bn_mul_recursive(unsigned int *a1, unsigned int *a2, unsigned int *a3, int a4, int a5, int a6, unsigned int *a7)
{
  unsigned int result;
  int v8;
  unsigned int *v9;
  unsigned int *v10;
  unsigned int *v11;
  unsigned int *v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  unsigned int *v23;
  int v24;
  unsigned int *v25;
  unsigned int *v26;
  int v27;
  int v28;
  int v29;

  if ( a5 == 0 && a4 == 8 )
  {
    if ( a6 == 0 )
      return bn_mul_comba8(a1, a2, a3);
  }
  else if ( a4 > 15 )
  {
    v21 = a4 >> 1;
    v28 = a6 + (a4 >> 1);
    v29 = -a5;
    v20 = a5 + (a4 >> 1);
    v24 = a4 >> 1;
    v25 = &a2[v24];
    v18 = bn_cmp_part_words((int)(uintptr_t)(a2), (int)(uintptr_t)(&a2[v24]), v20, -a5);
    v26 = &a3[v24];
    v27 = 0;
    switch ( bn_cmp_part_words((int)(uintptr_t)(&a3[v24]), (int)(uintptr_t)(a3), v28, a6) + 3 * v18 )
    {
      case -4:
        bn_sub_part_words(a7, v25, a2, v20, a5);
        bn_sub_part_words(&a7[v24], a3, v26, v28, -a6);
        goto LABEL_37;
      case -3:
      case -1:
      case 0:
      case 1:
      case 3:
        v17 = 1;
        v27 = 0;
        break;
      case -2:
        bn_sub_part_words(a7, v25, a2, v20, a5);
        bn_sub_part_words(&a7[v24], v26, a3, v28, a6);
        goto LABEL_10;
      case 2:
        bn_sub_part_words(a7, a2, v25, v20, v29);
        bn_sub_part_words(&a7[v24], a3, v26, v28, -a6);
LABEL_10:
        v17 = 0;
        v27 = 1;
        break;
      case 4:
        bn_sub_part_words(a7, a2, v25, v20, v29);
        bn_sub_part_words(&a7[v24], v26, a3, v28, a6);
LABEL_37:
        v17 = 0;
        v27 = 0;
        break;
      default:
        v17 = 0;
        break;
    }
    if ( v21 != 8 || a5 != 0 || a6 != 0 )
    {
      v23 = &a7[2 * a4];
      if ( v17 != 0 )
        memset(&a7[a4], 0, 4 * a4);
      else
        bn_mul_recursive(&a7[a4], a7, &a7[v24], v21, 0, 0, &a7[2 * a4]);
      bn_mul_recursive(a1, a2, a3, v21, 0, 0, v23);
      bn_mul_recursive(&a1[a4], v25, v26, v21, a5, a6, v23);
      v12 = &a1[a4];
      v9 = &a7[a4];
    }
    else
    {
      v8 = a4;
      if ( v17 != 0 )
      {
        v22 = 64;
        v9 = &a7[v8];
        v10 = &a7[v8];
        if ( ((unsigned int)(uintptr_t)(&a7[v8]) & 1) != 0 )
        {
          *(uint8_t *)v9 = 0;
          v10 = (unsigned int *)((char *)v9 + 1);
          v22 = 63;
        }
        if ( ((uint8_t)(uintptr_t)(v10) & 2) != 0 )
        {
          *(uint16_t *)v10 = 0;
          v10 = (unsigned int *)((char *)v10 + 2);
          v22 -= 2;
        }
        memset(v10, 0, 4 * (v22 >> 2));
        v11 = &v10[v22 >> 2];
        if ( (v22 & 2) != 0 )
        {
          *(uint16_t *)v11 = 0;
          v11 = (unsigned int *)((char *)v11 + 2);
        }
        if ( (v22 & 1) != 0 )
          *(uint8_t *)v11 = 0;
      }
      else
      {
        v9 = &a7[v8];
        bn_mul_comba8(&a7[v8], a7, &a7[v24]);
        v8 = a4;
      }
      v19 = v8 * 4;
      bn_mul_comba8(a1, a2, a3);
      bn_mul_comba8((unsigned int *)((char *)a1 + v19), v25, v26);
      v12 = (unsigned int *)((char *)a1 + v19);
    }
    v13 = bn_add_words(a7, a1, v12, a4);
    if ( v27 != 0 )
      v14 = v13 - bn_sub_words(v9, a7, v9, a4);
    else
      v14 = bn_add_words(v9, v9, a7, a4) + v13;
    result = bn_add_words(&a1[v24], &a1[v24], v9, a4);
    v15 = result + v14;
    if ( v15 != 0 )
    {
      v16 = &a1[v21 + a4];
      result = v15 + *v16;
      *v16 = result;
      if ( v15 > result )
      {
        do
        {
          result = *++v16 + 1;
          *v16 = result;
        }
        while ( result == 0 );
      }
    }
    return result;
  }
  bn_mul_normal(a1, a2, a4 + a5, a3, a4 + a6);
  result = a6 + a5;
  if ( a6 + a5 < 0 )
    return (unsigned int)(uintptr_t)(memset(&a1[2 * a4 + a5 + a6], 0, -4 * result));
  return result;
}

// ----------------------------------------------------------------------------
// Function: bn_mul_high  (binary VA: 0x1a04f70)
// Original: bn_mul_high
// ----------------------------------------------------------------------------
int bn_mul_high(unsigned int *a1, uint32_t *a2, uint32_t *a3, unsigned int *a4, int a5, unsigned int *a6)
{
  int v6;
  unsigned int *v7;
  int v8;
  int v9;
  unsigned int *v10;
  int v11;
  unsigned int *v12;
  unsigned int *v13;
  int v14;
  int result;
  unsigned int v16;
  unsigned int v17;
  unsigned int *v18;
  unsigned int v19;
  int i;
  unsigned int *v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int *v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int *v32;
  int v33;
  int v34;
  unsigned int *v35;
  unsigned int *v36;
  unsigned int *v37;

  v6 = a5 / 2;
  v7 = a1;
  v34 = a5 / 2;
  v36 = &a2[v34];
  v37 = &a3[v34];
  v8 = bn_cmp_words((int)(uintptr_t)(a2), (int)(uintptr_t)(&a2[v34]), a5 / 2);
  v9 = bn_cmp_words((int)(uintptr_t)(&a3[v34]), (int)(uintptr_t)(a3), a5 / 2) + 3 * v8;
  switch ( v9 )
  {
    case 2:
      bn_sub_words(a1, a2, v36, v6);
      v35 = &a1[v34];
      bn_sub_words(&a1[v34], a3, v37, v6);
      v33 = 1;
LABEL_5:
      if ( v6 != 8 )
        goto LABEL_6;
LABEL_25:
      bn_mul_comba8(a6, a1, v35);
      bn_mul_comba8(a1, v36, v37);
      v11 = v6 + a5;
      v10 = &a6[a5];
      if ( a4 != nullptr )
        goto LABEL_7;
      goto LABEL_26;
    case 4:
      bn_sub_words(a1, a2, v36, v6);
      v35 = &a1[v34];
      bn_sub_words(&a1[v34], v37, a3, v6);
      goto LABEL_24;
    case -4:
      bn_sub_words(a1, v36, a2, v6);
      v35 = &a1[v34];
      bn_sub_words(&a1[v34], a3, v37, v6);
LABEL_24:
      v33 = 0;
      if ( v6 == 8 )
        goto LABEL_25;
LABEL_6:
      v10 = &a6[a5];
      bn_mul_recursive(a6, a1, v35, v6, 0, 0, v10);
      bn_mul_recursive(a1, v36, v37, v6, 0, 0, v10);
      v11 = v6 + a5;
      if ( a4 != nullptr )
      {
LABEL_7:
        v25 = &a6[v11];
        bn_add_words(v25, a1, a4, v6);
        v12 = v25;
        v32 = v25;
        goto LABEL_8;
      }
LABEL_26:
      v12 = a1;
      v32 = &a6[v11];
LABEL_8:
      if ( v33 != 0 )
      {
        bn_sub_words(v10, v12, a6, v6);
        if ( a4 != nullptr )
        {
LABEL_10:
          bn_sub_words(v32, &a4[v34], v10, v6);
          v26 = bn_add_words(v10, v32, a4, v6);
          v13 = v10;
          goto LABEL_11;
        }
      }
      else
      {
        bn_add_words(v10, v12, a6, v6);
        if ( a4 != nullptr )
          goto LABEL_10;
      }
      if ( v6 > 0 )
      {
        for ( i = 0; i != v6; ++i )
          v32[i] = -v10[i];
      }
      v13 = v32;
      v26 = 0;
LABEL_11:
      v27 = v26 + bn_add_words(v10, v13, a1, v6);
      if ( v33 != 0 )
      {
        v14 = v27 - bn_sub_words(v10, v10, a6, v6);
        v28 = bn_add_words(a1, a1, v32, v6);
        v29 = v28 + bn_add_words(a1, a1, v35, v6);
        result = v29 - bn_sub_words(a1, a1, &a6[v34], v6);
      }
      else
      {
        v14 = bn_add_words(v10, v10, a6, v6) + v27;
        v30 = bn_add_words(a1, a1, v32, v6);
        v31 = v30 + bn_add_words(a1, a1, v35, v6);
        result = v31 + bn_add_words(a1, a1, &a6[v34], v6);
      }
      if ( v14 != 0 )
      {
        v16 = v14;
        if ( v14 <= 0 )
        {
          v23 = -v14;
          do
          {
            v24 = *v7 - v23;
            LOBYTE(v23) = v23 > *v7;
            *v7 = v24;
            v23 = (uint8_t)v23;
            ++v7;
          }
          while ( (uint8_t)v23 != 0 );
        }
        else
        {
          do
          {
            v17 = v16 + *v7;
            *v7++ = v17;
            v16 = v16 > v17;
          }
          while ( v16 != 0 );
        }
      }
      if ( result != 0 )
      {
        if ( result <= 0 )
        {
          result = -result;
          v21 = v35;
          do
          {
            v22 = *v21 - result;
            LOBYTE(result) = result > *v21;
            *v21 = v22;
            result = (uint8_t)result;
            ++v21;
          }
          while ( (uint8_t)result != 0 );
        }
        else
        {
          v18 = v35;
          do
          {
            v19 = result + *v18;
            *v18++ = v19;
            result = result > v19;
          }
          while ( result != 0 );
        }
      }
      return result;
    case -2:
      bn_sub_words(a1, v36, a2, v6);
      v35 = &a1[v34];
      bn_sub_words(&a1[v34], v37, a3, v6);
      v33 = 1;
      goto LABEL_5;
    default:
      v33 = 0;
      v35 = &a1[v34];
      goto LABEL_5;
  }
}

// ----------------------------------------------------------------------------
// Function: bn_mul_part_recursive  (binary VA: 0x1a054e0)
// Original: bn_mul_part_recursive
// ----------------------------------------------------------------------------
unsigned int bn_mul_part_recursive(unsigned int *a1, unsigned int *a2, unsigned int *a3, int a4, int a5, int a6, unsigned int *a7)
{
  int v7;
  unsigned int *v8;
  int v9;
  unsigned int *v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int result;
  unsigned int v14;
  unsigned int *v15;
  unsigned int *v16;
  unsigned int *v17;
  unsigned int *v18;
  unsigned int *v19;
  int v20;
  int v21;
  unsigned int *n;
  unsigned int *na;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  unsigned int *v29;
  unsigned int *v30;
  unsigned int *v31;
  unsigned int *v32;
  int v33;
  int v34;
  int v35;
  int v36;
  unsigned int *v37;
  int v38;
  unsigned int *v39;
  unsigned int *v40;
  unsigned int *v41;
  int v42;
  int v43;

  if ( a4 <= 7 )
    return bn_mul_normal(a1, a2, a5 + a4, a3, a4 + a6);
  v33 = a4 - a5;
  v38 = a4;
  v39 = &a2[a4];
  v28 = bn_cmp_part_words((int)(uintptr_t)(a2), (int)(uintptr_t)(v39), a5, a4 - a5);
  v40 = &a3[a4];
  v42 = 0;
  v7 = bn_cmp_part_words((int)(uintptr_t)(v40), (int)(uintptr_t)(a3), a6, a6 - a4) + 3 * v28 + 4;
  v8 = &a7[a4];
  switch ( v7 )
  {
    case 0:
      bn_sub_part_words(a7, v39, a2, a5, a5 - a4);
      v18 = &a7[v38];
      v27 = a4 - a6;
      na = &a3[a4];
      v25 = a6;
      v19 = a3;
      goto LABEL_25;
    case 1:
    case 2:
      bn_sub_part_words(a7, v39, a2, a5, a5 - a4);
      v26 = a6 - a4;
      n = a3;
      v16 = &a7[v38];
      v24 = a6;
      v17 = &a3[a4];
      goto LABEL_21;
    case 3:
    case 4:
    case 5:
    case 6:
      bn_sub_part_words(a7, a2, v39, a5, v33);
      v16 = &a7[v38];
      v26 = a4 - a6;
      n = &a3[a4];
      v24 = a6;
      v17 = a3;
LABEL_21:
      v29 = v16;
      bn_sub_part_words(v16, v17, n, v24, v26);
      v42 = 1;
      v8 = v29;
      v34 = 2 * a4;
      if ( a4 == 8 )
        goto LABEL_19;
      goto LABEL_4;
    case 7:
    case 8:
      bn_sub_part_words(a7, a2, v39, a5, v33);
      v27 = a6 - a4;
      na = a3;
      v18 = &a7[v38];
      v25 = a6;
      v19 = &a3[a4];
LABEL_25:
      v30 = v18;
      bn_sub_part_words(v18, v19, na, v25, v27);
      v42 = 0;
      v8 = v30;
      v34 = 2 * a4;
      if ( a4 == 8 )
        goto LABEL_19;
      goto LABEL_4;
    default:
      v34 = 2 * a4;
      if ( a4 == 8 )
      {
LABEL_19:
        v37 = a7 + 16;
        bn_mul_comba8(a7 + 16, a7, v8);
        bn_mul_comba8(a1, a2, a3);
        v31 = a1 + 16;
        bn_mul_normal(a1 + 16, v39, a5, v40, a6);
        goto LABEL_9;
      }
LABEL_4:
      v41 = &a7[4 * a4];
      v43 = 2 * a4;
      v37 = &a7[2 * a4];
      bn_mul_recursive(v37, a7, v8, a4, 0, 0, v41);
      bn_mul_recursive(a1, a2, a3, a4, 0, 0, v41);
      v35 = a5 - (a4 >> 1);
      v36 = a6 - (a4 >> 1);
      v9 = v35;
      if ( a6 >= a5 )
        v9 = a6 - (a4 >> 1);
      if ( v9 != 0 )
      {
        if ( v9 > 0 )
        {
          v31 = &a1[v43];
          bn_mul_part_recursive(&a1[v43], v39, v40, a4 >> 1, v35, v36, v41);
LABEL_9:
          memset(&a1[a5 + v34 + a6], 0, 4 * (v34 - a5 - a6));
          v10 = v31;
          goto LABEL_10;
        }
        v32 = &a1[v43];
        memset(&a1[v43], 0, v43 * 4);
        v20 = a4 >> 1;
        if ( a6 > 15 || a5 > 15 )
        {
          while ( 1 )
          {
            v21 = v20 / 2;
            v20 /= 2;
            if ( v20 < a6 || v21 < a5 )
              break;
            if ( v21 == a6 || v21 == a5 )
            {
              bn_mul_recursive(v32, v39, v40, v21, a5 - v21, a6 - v21, v41);
              v10 = &a1[v43];
              goto LABEL_10;
            }
          }
          bn_mul_part_recursive(v32, v39, v40, v21, a5 - v21, a6 - v21, v41);
          v10 = &a1[v43];
        }
        else
        {
          bn_mul_normal(v32, v39, a5, v40, a6);
          v10 = &a1[v43];
        }
      }
      else
      {
        bn_mul_recursive(&a1[v43], v39, v40, a4 >> 1, v35, v36, v41);
        memset(&a1[2 * (a4 >> 1) + v34], 0, 4 * (v34 - 2 * (a4 >> 1)));
        v10 = &a1[v43];
      }
LABEL_10:
      v11 = bn_add_words(a7, a1, v10, v34);
      if ( v42 != 0 )
        v12 = v11 - bn_sub_words(v37, a7, v37, v34);
      else
        v12 = bn_add_words(v37, v37, a7, v34) + v11;
      result = bn_add_words(&a1[v38], &a1[v38], v37, v34);
      v14 = result + v12;
      if ( v14 != 0 )
      {
        v15 = &a1[v34 + a4];
        result = v14 + *v15;
        *v15 = result;
        if ( v14 > result )
        {
          do
          {
            result = *++v15 + 1;
            *v15 = result;
          }
          while ( result == 0 );
        }
      }
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: bn_mul_low_normal  (binary VA: 0x1a05fd0)
// Original: bn_mul_low_normal
// ----------------------------------------------------------------------------
unsigned int bn_mul_low_normal(unsigned int *a1, unsigned int *a2, unsigned int *a3, int a4)
{
  unsigned int *v4;
  unsigned int *v5;
  unsigned int result;
  int v7;
  unsigned int v8;

  v4 = a3;
  v5 = a1;
  result = bn_mul_words(a1, a2, a4, *a3);
  if ( a4 > 1 )
  {
    v7 = a4 - 2;
    do
    {
      result = bn_mul_add_words(v5 + 1, a2, v7 + 1, v4[1]);
      if ( v7 == 0 )
        break;
      bn_mul_add_words(v5 + 2, a2, v7, v4[2]);
      result = v7 - 1;
      if ( v7 == 1 )
        break;
      bn_mul_add_words(v5 + 3, a2, v7 - 1, v4[3]);
      result = v7 - 2;
      if ( v7 == 2 )
        break;
      v5 += 4;
      v8 = v4[4];
      v4 += 4;
      result = bn_mul_add_words(v5, a2, v7 - 2, v8);
      v7 -= 4;
    }
    while ( v7 != a4 - 6 - ((a4 - 2) & 0xFFFFFFFC) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: bn_mul_low_recursive  (binary VA: 0x1a060e0)
// Original: bn_mul_low_recursive
// ----------------------------------------------------------------------------
unsigned int bn_mul_low_recursive(unsigned int *a1, unsigned int *a2, unsigned int *a3, int a4, unsigned int *a5)
{
  int v5;
  int v7;
  int v8;

  v5 = a4 / 2;
  bn_mul_recursive(a1, a2, a3, a4 / 2, 0, 0, a5);
  if ( a4 / 2 > 31 )
  {
    v8 = v5;
    bn_mul_low_recursive(a5, a2, &a3[v5], v5, &a5[a4]);
    bn_add_words(&a1[v8], &a1[v8], a5, v5);
    bn_mul_low_recursive(a5, &a2[v5], a3, v5, &a5[a4]);
    return bn_add_words(&a1[v8], &a1[v8], a5, v5);
  }
  else
  {
    v7 = v5;
    bn_mul_low_normal(a5, a2, &a3[v5], v5);
    bn_mul_low_normal(&a5[v7], &a2[v7], a3, v5);
    bn_add_words(&a1[v7], &a1[v7], a5, v5);
    return bn_add_words(&a1[v5], &a1[v5], &a5[v5], v5);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1A08520  (binary VA: 0x1a08520)
// Original: sub_1A08520
// ----------------------------------------------------------------------------
int sub_1A08520(int a1, int *a2, int *a3)
{
  int (*v4)(int, int, int, int);
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v4 = (int (*)(int, int, int, int))(uintptr_t)(((int (*)(void **, int, int, int))BN_rand));
  if ( a1 != 0 )
    v4 = (int (*)(int, int, int, int))(uintptr_t)(BN_pseudo_rand);
  if ( a3[3] == 0 && a3[1] != 0 )
  {
    v10 = BN_num_bits(a3);
    if ( v10 == 1 )
    {
      BN_set_word(a2, 0);
      return 1;
    }
    else
    {
      if ( BN_is_bit_set(a3, v10 - 2) != 0 || BN_is_bit_set(a3, v10 - 3) != 0 )
      {
        v8 = 100;
        while ( v4((int)(uintptr_t)(a2), v10, -1, 0) != 0 )
        {
          if ( --v8 == 0 )
          {
LABEL_26:
            ERR_put_error(3, 122, 113, (int)(uintptr_t)(&unk_1B15112), 0);
            return 0;
          }
          if ( BN_cmp(a2, a3) < 0 )
            return 1;
        }
      }
      else
      {
        v9 = 100;
        v11 = v10 + 1;
        while ( v4((int)(uintptr_t)(a2), v11, -1, 0) != 0 )
        {
          if ( BN_cmp(a2, a3) >= 0 )
          {
            LOBYTE(v6) = BN_sub((int)(uintptr_t)(a2), a2, a3);
            if ( v6 == 0 )
              break;
            if ( BN_cmp(a2, a3) >= 0 )
            {
              LOBYTE(v7) = BN_sub((int)(uintptr_t)(a2), a2, a3);
              if ( v7 == 0 )
                break;
            }
          }
          if ( --v9 == 0 )
            goto LABEL_26;
          if ( BN_cmp(a2, a3) < 0 )
            return 1;
        }
      }
      return 0;
    }
  }
  else
  {
    ERR_put_error(3, 122, 115, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1A08750  (binary VA: 0x1a08750)
// Original: sub_1A08750
// ----------------------------------------------------------------------------
int sub_1A08750(int a1, void **a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  uint8_t *v8;
  int v9;
  bool v10;
  int v11;
  uint8_t *v12;
  int i;
  int v14;
  char v15;
  typedef bool _g4_t_v17;
  typedef char _g4_t_v20;
  typedef time_t _g4_t_timer[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v20)) > _g4_s1 ? (27u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_timer)) > _g4_s2 ? (28u + sizeof(_g4_t_timer)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 27u);
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 28u);

  v5 = a3;
  if ( a3 == 0 )
  {
    BN_set_word(a2, 0);
    return 1;
  }
  v6 = a3 + 14;
  if ( a3 + 7 >= 0 )
    v6 = a3 + 7;
  v7 = v6 >> 3;
  v8 = CRYPTO_malloc(v7, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v8 == nullptr )
  {
    ERR_put_error(3, 127, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  time(timer);
  RAND_add((int)(uintptr_t)(timer), 4, 0);
  if ( a1 != 0 )
  {
    v9 = RAND_pseudo_bytes((int)(uintptr_t)(v8), v7);
    v10 = false;
    if ( v9 != -1 )
    {
      if ( a1 == 2 && v7 > 0 )
      {
        v11 = v7;
        v12 = v8;
        for ( i = 0; i != v11; ++i )
        {
          RAND_pseudo_bytes((int)(uintptr_t)(&v20), 1);
          if ( i <= 0 || v20 >= 0 )
          {
            if ( (uint8_t)v20 > 0x29u )
            {
              if ( (uint8_t)v20 <= 0x53u )
                v12[i] = 0xFFu;
            }
            else
            {
              v12[i] = 0;
            }
          }
          else
          {
            v12[i] = v12[i - 1];
          }
        }
        v8 = v12;
        v7 = v11;
        v5 = a3;
      }
      goto LABEL_17;
    }
  }
  else
  {
    if ( RAND_bytes((int)(uintptr_t)(v8), v7) > 0 )
    {
LABEL_17:
      v14 = (v5 - 1) % 8;
      if ( a4 == -1 )
      {
        v15 = *v8;
      }
      else if ( a4 != 0 )
      {
        if ( v14 != 0 )
        {
          v15 = *v8 | (3 << (v14 - 1));
        }
        else
        {
          v8[1] |= 0x80u;
          v15 = 1;
        }
      }
      else
      {
        v15 = *v8 | (1 << v14);
      }
      *v8 = v15 & ~(-1 << (v14 + 1));
      if ( a5 != 0 )
        v8[v7 - 1] |= 1u;
      v10 = BN_bin2bn(v8, v7, a2) != nullptr;
      goto LABEL_23;
    }
    v10 = false;
  }
LABEL_23:
  v17 = v10;
  OPENSSL_cleanse(v8, v7);
  CRYPTO_free(v8);
  return v17;
}

// ----------------------------------------------------------------------------
// Function: bn_sqr_normal  (binary VA: 0x1a096a0)
// Original: bn_sqr_normal
// ----------------------------------------------------------------------------
unsigned int bn_sqr_normal(unsigned int *a1, unsigned int *a2, int a3, uint64_t *a4)
{
  unsigned int *v4;
  unsigned int *v5;
  int v6;
  unsigned int *v7;
  unsigned int v8;
  unsigned int *v10;
  int v11;

  v4 = a1 + 1;
  v11 = 2 * a3;
  v5 = a2;
  a1[2 * a3 - 1] = 0;
  *a1 = 0;
  if ( a3 - 1 > 0 )
  {
    v5 = a2 + 1;
    v4[a3 - 1] = bn_mul_words(v4, a2 + 1, a3 - 1, *a2);
    v4 = a1 + 3;
  }
  v6 = a3 - 2;
  if ( a3 - 2 > 0 )
  {
    v7 = &v4[v6];
    do
    {
      ++v5;
      v10 = v7;
      v8 = bn_mul_add_words(v4, v5, v6, *(v5 - 1));
      v4 += 2;
      *v10 = v8;
      v7 = v10 + 1;
      --v6;
    }
    while ( v6 != 0 );
  }
  bn_add_words(a1, a1, a1, v11);
  bn_sqr_words(a4, a2, a3);
  return bn_add_words(a1, a1, (unsigned int *)a4, v11);
}

// ----------------------------------------------------------------------------
// Function: bn_sqr_recursive  (binary VA: 0x1a097b0)
// Original: bn_sqr_recursive
// ----------------------------------------------------------------------------
unsigned int bn_sqr_recursive(unsigned int *a1, unsigned int *a2, int a3, uint64_t *a4)
{
  int v4;
  unsigned int result;
  unsigned int *v6;
  unsigned int v7;
  unsigned int *v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  unsigned int *v12;
  uint64_t *v13;

  if ( a3 == 4 )
    return bn_sqr_comba4(a1, a2);
  if ( a3 == 8 )
    return bn_sqr_comba8(a1, a2);
  if ( a3 <= 15 )
    return bn_sqr_normal(a1, a2, a3, a4);
  v11 = a3 >> 1;
  v12 = &a2[a3 >> 1];
  v4 = bn_cmp_words((int)(uintptr_t)(a2), (int)(uintptr_t)(v12), a3 >> 1);
  if ( v4 <= 0 )
  {
    if ( v4 == 0 )
    {
      v13 = &a4[a3];
      memset((char *)a4 + 4 * a3, 0, 4 * a3);
      goto LABEL_7;
    }
    bn_sub_words(a4, v12, a2, v11);
  }
  else
  {
    bn_sub_words(a4, a2, v12, v11);
  }
  v13 = &a4[a3];
  bn_sqr_recursive((char *)a4 + 4 * a3, a4, v11, v13);
LABEL_7:
  bn_sqr_recursive(a1, a2, v11, v13);
  bn_sqr_recursive(&a1[a3], v12, v11, v13);
  v9 = bn_add_words(a4, a1, &a1[a3], a3);
  v8 = (unsigned int *)a4 + a3;
  v10 = v9 - bn_sub_words(v8, a4, v8, a3);
  result = v10 + bn_add_words(&a1[a3 >> 1], &a1[a3 >> 1], v8, a3);
  if ( result != 0 )
  {
    v6 = &a1[v11 + a3];
    v7 = result + *v6;
    *v6 = v7;
    if ( result > v7 )
    {
      do
      {
        result = *++v6 + 1;
        *v6 = result;
      }
      while ( result == 0 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Camellia_cbc_encrypt  (binary VA: 0x1a0ac70)
// Original: Camellia_cbc_encrypt
// ----------------------------------------------------------------------------
int Camellia_cbc_encrypt(int a1, int a2, int a3, int a4, int a5, int a6)
{
  if ( a6 != 0 )
    return CRYPTO_cbc128_encrypt(a1, a2, a3, a4, a5, Camellia_encrypt);
  else
    return CRYPTO_cbc128_decrypt(a1, a2, a3, a4, a5, Camellia_decrypt);
}

// ----------------------------------------------------------------------------
// Function: Camellia_cfb128_encrypt  (binary VA: 0x1a0ad10)
// Original: Camellia_cfb128_encrypt
// ----------------------------------------------------------------------------
int Camellia_cfb128_encrypt(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return CRYPTO_cfb128_encrypt(a1, a2, a3, a4, a5, a6, a7, Camellia_encrypt);
}

// ----------------------------------------------------------------------------
// Function: Camellia_cfb1_encrypt  (binary VA: 0x1a0ad70)
// Original: Camellia_cfb1_encrypt
// ----------------------------------------------------------------------------
int Camellia_cfb1_encrypt(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return CRYPTO_cfb128_1_encrypt(a1, a2, a3, a4, a5, a6, a7, Camellia_encrypt);
}

// ----------------------------------------------------------------------------
// Function: Camellia_cfb8_encrypt  (binary VA: 0x1a0add0)
// Original: Camellia_cfb8_encrypt
// ----------------------------------------------------------------------------
int Camellia_cfb8_encrypt(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return CRYPTO_cfb128_8_encrypt(a1, a2, a3, a4, a5, a6, a7, Camellia_encrypt);
}

// ----------------------------------------------------------------------------
// Function: Camellia_ecb_encrypt  (binary VA: 0x1a0ae30)
// Original: Camellia_ecb_encrypt
// ----------------------------------------------------------------------------
int Camellia_ecb_encrypt(int a1, int a2, int a3, int a4)
{
  if ( a4 == 1 )
    return Camellia_encrypt(a1, a2, a3);
  else
    return Camellia_decrypt(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: Camellia_set_key  (binary VA: 0x1a0ae80)
// Original: Camellia_set_key
// ----------------------------------------------------------------------------
int Camellia_set_key(int a1, int a2, int a3)
{
  int result;

  if ( a3 == 0 || a1 == 0 )
    return -1;
  if ( a2 == 192 || a2 == 128 || (result = -2, a2 == 256) )
  {
    *(uint32_t *)(a3 + 272) = Camellia_Ekeygen(a2, a1, a3);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Camellia_encrypt  (binary VA: 0x1a0aef0)
// Original: Camellia_encrypt
// ----------------------------------------------------------------------------
int Camellia_encrypt(int a1, int a2, int a3)
{
  return Camellia_EncryptBlock_Rounds(*(uint32_t *)(a3 + 272), a1, a3, a2);
}

// ----------------------------------------------------------------------------
// Function: Camellia_decrypt  (binary VA: 0x1a0af30)
// Original: Camellia_decrypt
// ----------------------------------------------------------------------------
int Camellia_decrypt(int a1, int a2, int a3)
{
  return Camellia_DecryptBlock_Rounds(*(uint32_t *)(a3 + 272), a1, a3, a2);
}

// ----------------------------------------------------------------------------
// Function: Camellia_ofb128_encrypt  (binary VA: 0x1a0af70)
// Original: Camellia_ofb128_encrypt
// ----------------------------------------------------------------------------
int Camellia_ofb128_encrypt(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return (int)(uintptr_t)(CRYPTO_ofb128_encrypt(a1, a2, a3, a4, a5, a6, Camellia_encrypt));
}

// ----------------------------------------------------------------------------
// Function: CAST_cfb64_encrypt  (binary VA: 0x1a0afd0)
// Original: CAST_cfb64_encrypt
// ----------------------------------------------------------------------------
int * CAST_cfb64_encrypt(char *a1, uint8_t *a2, int a3, int a4, int a5, int *a6, int a7)
{
  uint8_t *v8;
  int v9;
  char v10;
  char v11;
  bool v12;
  unsigned int v13;
  char v14; // ecx^3
  unsigned int v15;
  unsigned int v16;
  uint8_t *v18;
  char v19;
  unsigned int v20;
  char v21; // ecx^3
  unsigned int v22;
  unsigned int v23;
  typedef uint8_t *_g4_t_v24;
  typedef uint8_t *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef unsigned int _g4_t_v29;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v25)) > _g4_s1 ? (4u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v26)) > _g4_s2 ? (8u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v27)) > _g4_s3 ? (8u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v28)) > _g4_s4 ? (24u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v29)) > _g4_s5 ? (28u + sizeof(_g4_t_v29)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);

  v8 = a2;
  v9 = *a6;
  if ( a7 != 0 )
  {
    if ( a3 != 0 )
    {
      v27 = a3;
      do
      {
        if ( v9 == 0 )
        {
          v28 = __builtin_bswap32(*(uint32_t *)a5);
          v25 = v8;
          v29 = __builtin_bswap32(*(uint32_t *)(a5 + 4));
          CAST_encrypt(&v28, a4);
          v20 = v28;
          v21 = HIBYTE(v28);
          *(uint8_t *)(a5 + 3) = v28;
          *(uint8_t *)a5 = v21;
          *(uint8_t *)(a5 + 1) = BYTE2(v20);
          v22 = v20 >> 8;
          v23 = v29;
          *(uint8_t *)(a5 + 2) = v22;
          *(uint8_t *)(a5 + 7) = v23;
          *(uint8_t *)(a5 + 4) = HIBYTE(v23);
          *(uint8_t *)(a5 + 5) = BYTE2(v23);
          *(uint8_t *)(a5 + 6) = BYTE1(v23);
          v8 = v25;
        }
        v18 = (uint8_t *)(a5 + v9);
        v19 = *a1 ^ *(uint8_t *)(a5 + v9);
        *v8 = v19;
        ++a1;
        ++v8;
        v9 = ((uint8_t)v9 + 1) & 7;
        v12 = v27-- == 1;
        *v18 = v19;
      }
      while ( !v12 );
    }
  }
  else
  {
    v26 = a3;
    if ( a3 != 0 )
    {
      v24 = a2;
      do
      {
        if ( v9 == 0 )
        {
          v28 = __builtin_bswap32(*(uint32_t *)a5);
          v29 = __builtin_bswap32(*(uint32_t *)(a5 + 4));
          CAST_encrypt(&v28, a4);
          v13 = v28;
          v14 = HIBYTE(v28);
          *(uint8_t *)(a5 + 3) = v28;
          *(uint8_t *)a5 = v14;
          *(uint8_t *)(a5 + 1) = BYTE2(v13);
          v15 = v13 >> 8;
          v16 = v29;
          *(uint8_t *)(a5 + 2) = v15;
          *(uint8_t *)(a5 + 7) = v16;
          *(uint8_t *)(a5 + 4) = HIBYTE(v16);
          *(uint8_t *)(a5 + 5) = BYTE2(v16);
          *(uint8_t *)(a5 + 6) = BYTE1(v16);
        }
        v10 = *a1++;
        v11 = *(uint8_t *)(a5 + v9);
        *(uint8_t *)(a5 + v9) = v10;
        v9 = ((uint8_t)v9 + 1) & 7;
        *v24 = v10 ^ v11;
        v12 = v26-- == 1;
        ++v24;
      }
      while ( !v12 );
    }
  }
  *a6 = v9;
  return a6;
}

// ----------------------------------------------------------------------------
// Function: CAST_ecb_encrypt  (binary VA: 0x1a0b1e0)
// Original: CAST_ecb_encrypt
// ----------------------------------------------------------------------------
unsigned int CAST_ecb_encrypt(unsigned int *a1, uint8_t *a2, int a3, int a4)
{
  unsigned int v4;
  char v5; // edx^3
  unsigned int v6;
  unsigned int result;
  typedef unsigned int _g4_t_v8;
  typedef unsigned int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  v8 = __builtin_bswap32(*a1);
  v9 = __builtin_bswap32(a1[1]);
  if ( a4 != 0 )
    CAST_encrypt(&v8, a3);
  else
    CAST_decrypt(&v8, a3);
  v4 = v8;
  v5 = HIBYTE(v8);
  a2[3] = v8;
  *a2 = v5;
  a2[1] = BYTE2(v4);
  v6 = v4 >> 8;
  result = v9;
  a2[2] = v6;
  a2[7] = result;
  a2[4] = HIBYTE(result);
  a2[5] = BYTE2(result);
  a2[6] = BYTE1(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: CAST_encrypt  (binary VA: 0x1a0b2b0)
// Original: CAST_encrypt
// ----------------------------------------------------------------------------
uint32_t * CAST_encrypt(int *a1, uint32_t *a2)
{
  uint32_t *result;
  int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  unsigned int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;

  result = a2;
  v3 = a1[1];
  v4 = __builtin_rotateleft32(v3 + *a2, a2[1]);
  v5 = *a1
     ^ (CAST_S_table3[BYTE2(v4)]
      - CAST_S_table2[HIBYTE(v4)]
      + (CAST_S_table1[(uint8_t)v4] ^ CAST_S_table0[BYTE1(v4)]));
  v6 = __builtin_rotateleft32(v5 ^ a2[2], a2[3]);
  v29 = (CAST_S_table2[HIBYTE(v6)] + CAST_S_table0[BYTE1(v6)] - CAST_S_table1[(uint8_t)v6])
      ^ CAST_S_table3[BYTE2(v6)]
      ^ v3;
  v7 = __builtin_rotateleft32(a2[4] - v29, a2[5]);
  v8 = v5
     ^ ((CAST_S_table2[HIBYTE(v7)] ^ (CAST_S_table1[(uint8_t)v7] + CAST_S_table0[BYTE1(v7)]))
      - CAST_S_table3[BYTE2(v7)]);
  v9 = __builtin_rotateleft32(v8 + a2[6], a2[7]);
  v10 = v29
      ^ (CAST_S_table3[BYTE2(v9)]
       - CAST_S_table2[HIBYTE(v9)]
       + (CAST_S_table1[(uint8_t)v9] ^ CAST_S_table0[BYTE1(v9)]));
  v11 = __builtin_rotateleft32(v10 ^ a2[8], a2[9]);
  v30 = (CAST_S_table2[HIBYTE(v11)] + CAST_S_table0[BYTE1(v11)] - CAST_S_table1[(uint8_t)v11])
      ^ CAST_S_table3[BYTE2(v11)]
      ^ v8;
  v12 = __builtin_rotateleft32(a2[10] - v30, a2[11]);
  v13 = v10
      ^ ((CAST_S_table2[HIBYTE(v12)] ^ (CAST_S_table1[(uint8_t)v12] + CAST_S_table0[BYTE1(v12)]))
       - CAST_S_table3[BYTE2(v12)]);
  v14 = __builtin_rotateleft32(v13 + a2[12], a2[13]);
  v15 = v30
      ^ (CAST_S_table3[BYTE2(v14)]
       - CAST_S_table2[HIBYTE(v14)]
       + (CAST_S_table1[(uint8_t)v14] ^ CAST_S_table0[BYTE1(v14)]));
  v16 = __builtin_rotateleft32(v15 ^ a2[14], a2[15]);
  v31 = (CAST_S_table2[HIBYTE(v16)] + CAST_S_table0[BYTE1(v16)] - CAST_S_table1[(uint8_t)v16])
      ^ CAST_S_table3[BYTE2(v16)]
      ^ v13;
  v17 = __builtin_rotateleft32(a2[16] - v31, a2[17]);
  v18 = v15
      ^ ((CAST_S_table2[HIBYTE(v17)] ^ (CAST_S_table1[(uint8_t)v17] + CAST_S_table0[BYTE1(v17)]))
       - CAST_S_table3[BYTE2(v17)]);
  v19 = __builtin_rotateleft32(v18 + a2[18], a2[19]);
  v33 = v31
      ^ (CAST_S_table3[BYTE2(v19)]
       - CAST_S_table2[HIBYTE(v19)]
       + (CAST_S_table1[(uint8_t)v19] ^ CAST_S_table0[BYTE1(v19)]));
  v26 = __builtin_rotateleft32(v33 ^ a2[20], a2[21]);
  v20 = (CAST_S_table2[HIBYTE(v26)] + CAST_S_table0[BYTE1(v26)] - CAST_S_table1[(uint8_t)v26])
      ^ CAST_S_table3[BYTE2(v26)]
      ^ v18;
  v28 = __builtin_rotateleft32(a2[22] - v20, a2[23]);
  v21 = v33
      ^ ((CAST_S_table2[HIBYTE(v28)] ^ (CAST_S_table1[(uint8_t)v28] + CAST_S_table0[BYTE1(v28)]))
       - CAST_S_table3[BYTE2(v28)]);
  if ( a2[32] == 0 )
  {
    v22 = __builtin_rotateleft32(v21 + a2[24], a2[25]);
    v27 = v20
        ^ ((CAST_S_table1[(uint8_t)v22] ^ CAST_S_table0[BYTE1(v22)])
         + CAST_S_table3[BYTE2(v22)]
         - CAST_S_table2[HIBYTE(v22)]);
    v23 = __builtin_rotateleft32(v27 ^ a2[26], a2[27]);
    v32 = (CAST_S_table2[HIBYTE(v23)] + CAST_S_table0[BYTE1(v23)] - CAST_S_table1[(uint8_t)v23])
        ^ CAST_S_table3[BYTE2(v23)]
        ^ v21;
    v24 = __builtin_rotateleft32(a2[28] - v32, a2[29]);
    v20 = v27
        ^ ((CAST_S_table2[HIBYTE(v24)] ^ (CAST_S_table1[(uint8_t)v24] + CAST_S_table0[BYTE1(v24)]))
         - CAST_S_table3[BYTE2(v24)]);
    v25 = __builtin_rotateleft32(v20 + a2[30], a2[31]);
    result = CAST_S_table1;
    v21 = v32
        ^ (CAST_S_table3[BYTE2(v25)]
         - CAST_S_table2[HIBYTE(v25)]
         + (CAST_S_table1[(uint8_t)v25] ^ CAST_S_table0[BYTE1(v25)]));
  }
  a1[1] = v20;
  *a1 = v21;
  return result;
}

// ----------------------------------------------------------------------------
// Function: CAST_decrypt  (binary VA: 0x1a0b840)
// Original: CAST_decrypt
// ----------------------------------------------------------------------------
int CAST_decrypt(int *a1, uint32_t *a2)
{
  unsigned int v2;
  unsigned int v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  int result;
  int v25;
  unsigned int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  unsigned int v34;

  v29 = *a1;
  v27 = a1[1];
  if ( a2[32] == 0 )
  {
    v2 = __builtin_rotateleft32(a2[30] + v27, a2[31]);
    v33 = v29
        ^ (CAST_S_table3[BYTE2(v2)]
         - CAST_S_table2[HIBYTE(v2)]
         + (CAST_S_table1[(uint8_t)v2] ^ CAST_S_table0[BYTE1(v2)]));
    v3 = __builtin_rotateleft32(a2[28] - v33, a2[29]);
    v4 = v27
       ^ ((CAST_S_table2[HIBYTE(v3)] ^ (CAST_S_table1[(uint8_t)v3] + CAST_S_table0[BYTE1(v3)]))
        - CAST_S_table3[BYTE2(v3)]);
    v5 = __builtin_rotateleft32(v4 ^ a2[26], a2[27]);
    v29 = (CAST_S_table2[HIBYTE(v5)] + CAST_S_table0[BYTE1(v5)] - CAST_S_table1[(uint8_t)v5])
        ^ CAST_S_table3[BYTE2(v5)]
        ^ v33;
    v6 = __builtin_rotateleft32(a2[24] + v29, a2[25]);
    v27 = v4
        ^ (CAST_S_table3[BYTE2(v6)]
         - CAST_S_table2[HIBYTE(v6)]
         + (CAST_S_table1[(uint8_t)v6] ^ CAST_S_table0[BYTE1(v6)]));
  }
  v7 = __builtin_rotateleft32(a2[22] - v27, a2[23]);
  v8 = v29
     ^ ((CAST_S_table2[HIBYTE(v7)] ^ (CAST_S_table1[(uint8_t)v7] + CAST_S_table0[BYTE1(v7)]))
      - CAST_S_table3[BYTE2(v7)]);
  v9 = __builtin_rotateleft32(v8 ^ a2[20], a2[21]);
  v30 = (CAST_S_table2[HIBYTE(v9)] + CAST_S_table0[BYTE1(v9)] - CAST_S_table1[(uint8_t)v9])
      ^ CAST_S_table3[BYTE2(v9)]
      ^ v27;
  v10 = __builtin_rotateleft32(a2[18] + v30, a2[19]);
  v11 = v8
      ^ (CAST_S_table3[BYTE2(v10)]
       - CAST_S_table2[HIBYTE(v10)]
       + (CAST_S_table1[(uint8_t)v10] ^ CAST_S_table0[BYTE1(v10)]));
  v12 = __builtin_rotateleft32(a2[16] - v11, a2[17]);
  v13 = v30
      ^ ((CAST_S_table2[HIBYTE(v12)] ^ (CAST_S_table1[(uint8_t)v12] + CAST_S_table0[BYTE1(v12)]))
       - CAST_S_table3[BYTE2(v12)]);
  v14 = __builtin_rotateleft32(v13 ^ a2[14], a2[15]);
  v31 = (CAST_S_table2[HIBYTE(v14)] + CAST_S_table0[BYTE1(v14)] - CAST_S_table1[(uint8_t)v14])
      ^ CAST_S_table3[BYTE2(v14)]
      ^ v11;
  v15 = __builtin_rotateleft32(a2[12] + v31, a2[13]);
  v16 = v13
      ^ (CAST_S_table3[BYTE2(v15)]
       - CAST_S_table2[HIBYTE(v15)]
       + (CAST_S_table1[(uint8_t)v15] ^ CAST_S_table0[BYTE1(v15)]));
  v17 = __builtin_rotateleft32(a2[10] - v16, a2[11]);
  v18 = v31
      ^ ((CAST_S_table2[HIBYTE(v17)] ^ (CAST_S_table1[(uint8_t)v17] + CAST_S_table0[BYTE1(v17)]))
       - CAST_S_table3[BYTE2(v17)]);
  v26 = __builtin_rotateleft32(v18 ^ a2[8], a2[9]);
  v32 = (CAST_S_table2[HIBYTE(v26)] + CAST_S_table0[BYTE1(v26)] - CAST_S_table1[(uint8_t)v26])
      ^ CAST_S_table3[BYTE2(v26)]
      ^ v16;
  v19 = __builtin_rotateleft32(a2[6] + v32, a2[7]);
  v20 = v18
      ^ (CAST_S_table3[BYTE2(v19)]
       - CAST_S_table2[HIBYTE(v19)]
       + (CAST_S_table1[(uint8_t)v19] ^ CAST_S_table0[BYTE1(v19)]));
  v21 = __builtin_rotateleft32(a2[4] - v20, a2[5]);
  v22 = v32
      ^ ((CAST_S_table2[HIBYTE(v21)] ^ (CAST_S_table1[(uint8_t)v21] + CAST_S_table0[BYTE1(v21)]))
       - CAST_S_table3[BYTE2(v21)]);
  v34 = __builtin_rotateleft32(v22 ^ a2[2], a2[3]);
  v28 = (CAST_S_table2[HIBYTE(v34)] + CAST_S_table0[BYTE1(v34)] - CAST_S_table1[(uint8_t)v34])
      ^ CAST_S_table3[BYTE2(v34)]
      ^ v20;
  v23 = __builtin_rotateleft32(*a2 + v28, a2[1]);
  result = CAST_S_table1[(uint8_t)v23] ^ CAST_S_table0[BYTE1(v23)];
  v25 = v22 ^ (result + CAST_S_table3[BYTE2(v23)] - CAST_S_table2[HIBYTE(v23)]);
  a1[1] = v28;
  *a1 = v25;
  return result;
}

// ----------------------------------------------------------------------------
// Function: CAST_cbc_encrypt  (binary VA: 0x1a0bda0)
// Original: CAST_cbc_encrypt
// ----------------------------------------------------------------------------
unsigned int CAST_cbc_encrypt(int a1, uint8_t *a2, int a3, uint32_t *a4, int a5, int a6)
{
  unsigned int v6;
  uint8_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  int16_t v20; // kr00_2
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v25;
  uint8_t *v26;
  int v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  int v34;
  int v35;
  unsigned int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  uint8_t *v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  uint8_t *v51;
  typedef int _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef uint8_t *_g4_t_v55;
  typedef char _g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef unsigned int _g4_t_v58;
  typedef uint8_t *_g4_t_v59;
  typedef uint8_t *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef char _g4_t_v62;
  typedef int _g4_t_v63;
  typedef uint8_t *_g4_t_v64;
  typedef unsigned int _g4_t_v65;
  typedef char _g4_t_v66;
  typedef unsigned int _g4_t_v67;
  typedef unsigned int _g4_t_v68;
  typedef int _g4_t_v69;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v52)) > _g4_s0 ? (4u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v53)) > _g4_s1 ? (8u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v54)) > _g4_s2 ? (8u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v55)) > _g4_s3 ? (12u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v56)) > _g4_s4 ? (16u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v57)) > _g4_s5 ? (52u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v58)) > _g4_s6 ? (52u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v59)) > _g4_s7 ? (52u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v60)) > _g4_s8 ? (52u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v61)) > _g4_s9 ? (56u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v62)) > _g4_s10 ? (56u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v63)) > _g4_s11 ? (56u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v64)) > _g4_s12 ? (56u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v65)) > _g4_s13 ? (60u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v66)) > _g4_s14 ? (60u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v67)) > _g4_s15 ? (60u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v68)) > _g4_s16 ? (72u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v69)) > _g4_s17 ? (76u + sizeof(_g4_t_v69)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 4u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 8u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 8u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 12u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 52u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 52u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 56u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 56u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 56u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 56u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 60u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 60u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 60u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 72u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 76u);

  if ( a6 != 0 )
  {
    v6 = __builtin_bswap32(*(uint32_t *)a5);
    v57 = __builtin_bswap32(*(uint32_t *)(a5 + 4));
    v65 = a3 - 8;
    v61 = a3 - 8;
    if ( a3 - 8 >= 0 )
    {
      v7 = a2;
      v8 = a1;
      do
      {
        v9 = *(uint8_t *)(v8 + 4);
        v10 = *(uint8_t *)(v8 + 5) << 16;
        v68 = v6 ^ __builtin_bswap32(*(uint32_t *)v8);
        v11 = *(uint8_t *)(v8 + 7) | v10 | (v9 << 24);
        v12 = *(uint8_t *)(v8 + 6) << 8;
        v8 += 8;
        v69 = v57 ^ (v12 | v11);
        CAST_encrypt((int *)&v68, a4);
        v6 = v68;
        v57 = v69;
        v13 = HIBYTE(v68);
        v7[3] = v68;
        *v7 = v13;
        v7[1] = BYTE2(v6);
        v7[2] = BYTE1(v6);
        v7[4] = HIBYTE(v57);
        v7[5] = BYTE2(v57);
        v7[6] = BYTE1(v57);
        v7[7] = v57;
        v7 += 8;
        v61 -= 8;
      }
      while ( v61 >= 0 );
      v14 = 8 * (v65 >> 3) + 8;
      a1 += v14;
      a2 += v14;
      v61 = a3 - 8 * (v65 >> 3) - 16;
    }
    if ( v61 == -8 )
    {
      v56 = BYTE2(v6);
      v62 = HIBYTE(v6);
      v66 = HIBYTE(v57);
      v21 = HIWORD(v57);
      v22 = v57 >> 8;
      v23 = (uint8_t)v57;
      v20 = v6;
    }
    else
    {
      v15 = v61 + 8 + a1;
      switch ( v61 )
      {
        case -7:
          v49 = v61 + 8 + a1;
          v16 = 0;
          v50 = 0;
          goto LABEL_29;
        case -6:
          v16 = 0;
          v48 = 0;
          goto LABEL_28;
        case -5:
          v46 = v61 + 8 + a1;
          v16 = 0;
          v47 = 0;
          goto LABEL_27;
        case -4:
          v16 = 0;
          goto LABEL_26;
        case -3:
          v44 = v61 + 8 + a1;
          v45 = 0;
          goto LABEL_25;
        case -2:
          v43 = 0;
          goto LABEL_24;
        case -1:
          v42 = *(uint8_t *)--v15;
          v43 = v42 << 8;
LABEL_24:
          v44 = v15 - 1;
          v45 = v43 | (*(uint8_t *)(v15 - 1) << 16);
LABEL_25:
          v15 = v44 - 1;
          v16 = v45 | (*(uint8_t *)(v44 - 1) << 24);
LABEL_26:
          v46 = v15 - 1;
          v47 = *(uint8_t *)(v15 - 1);
LABEL_27:
          v15 = v46 - 1;
          v48 = v47 | (*(uint8_t *)(v46 - 1) << 8);
LABEL_28:
          v49 = v15 - 1;
          v50 = v48 | (*(uint8_t *)(v15 - 1) << 16);
LABEL_29:
          v17 = v50 | (*(uint8_t *)(v49 - 1) << 24);
          break;
        default:
          v16 = 0;
          v17 = 0;
          break;
      }
      v68 = v17 ^ v6;
      v69 = v57 ^ v16;
      CAST_encrypt((int *)&v68, a4);
      v18 = v68;
      v19 = v69;
      v62 = HIBYTE(v68);
      *a2 = HIBYTE(v68);
      a2[1] = BYTE2(v18);
      v56 = BYTE2(v18);
      a2[2] = BYTE1(v18);
      a2[3] = v18;
      v20 = v18;
      a2[4] = HIBYTE(v19);
      v66 = HIBYTE(v19);
      v21 = HIWORD(v19);
      a2[5] = BYTE2(v19);
      v22 = v19 >> 8;
      a2[6] = BYTE1(v19);
      v23 = v19;
      a2[7] = v19;
    }
    *(uint8_t *)a5 = v62;
    *(uint8_t *)(a5 + 5) = v21;
    *(uint8_t *)(a5 + 1) = v56;
    *(uint8_t *)(a5 + 6) = v22;
    *(uint8_t *)(a5 + 2) = HIBYTE(v20);
    *(uint8_t *)(a5 + 3) = v20;
    *(uint8_t *)(a5 + 4) = v66;
    *(uint8_t *)(a5 + 7) = v23;
    return v23;
  }
  else
  {
    v25 = __builtin_bswap32(*(uint32_t *)a5);
    v58 = __builtin_bswap32(*(uint32_t *)(a5 + 4));
    v67 = a3 - 8;
    v63 = a3 - 8;
    if ( a3 - 8 >= 0 )
    {
      v26 = a2;
      v27 = a1;
      while ( 1 )
      {
        v28 = *(uint8_t *)(v27 + 4);
        v29 = __builtin_bswap32(*(uint32_t *)v27);
        v30 = *(uint8_t *)(v27 + 5);
        v68 = v29;
        v55 = v26;
        v53 = v25;
        v31 = (*(uint8_t *)(v27 + 6) << 8) | *(uint8_t *)(v27 + 7) | (v30 << 16) | (v28 << 24);
        v69 = v31;
        CAST_decrypt((int *)&v68, a4);
        v32 = v68 ^ v53;
        v27 += 8;
        v52 = v69 ^ v58;
        v33 = (v68 ^ v53) >> 24;
        v55[3] = v68 ^ v53;
        *v55 = v33;
        v55[1] = BYTE2(v32);
        v55[4] = HIBYTE(v52);
        v55[5] = BYTE2(v52);
        v55[6] = BYTE1(v52);
        v55[2] = BYTE1(v32);
        v55[7] = v52;
        v26 = v55 + 8;
        v63 -= 8;
        if ( v63 < 0 )
          break;
        v58 = v31;
        v25 = v29;
      }
      v58 = v31;
      v25 = v29;
      v34 = 8 * (v67 >> 3) + 8;
      a1 += v34;
      a2 += v34;
      v63 = a3 - 8 * (v67 >> 3) - 16;
    }
    if ( v63 != -8 )
    {
      v35 = *(uint8_t *)(a1 + 4);
      v36 = __builtin_bswap32(*(uint32_t *)a1);
      v37 = *(uint8_t *)(a1 + 5);
      v68 = v36;
      v54 = v25;
      v38 = (*(uint8_t *)(a1 + 6) << 8) | *(uint8_t *)(a1 + 7) | (v37 << 16) | (v35 << 24);
      v69 = v38;
      CAST_decrypt((int *)&v68, a4);
      v39 = v68 ^ v54;
      v40 = v69 ^ v58;
      v41 = &a2[v63 + 8];
      switch ( v63 )
      {
        case -7:
          v60 = &a2[v63 + 8];
          goto LABEL_36;
        case -6:
          goto LABEL_35;
        case -5:
          v59 = &a2[v63 + 8];
          goto LABEL_34;
        case -4:
          goto LABEL_33;
        case -3:
          v64 = &a2[v63 + 8];
          goto LABEL_32;
        case -2:
          goto LABEL_31;
        case -1:
          *--v41 = BYTE1(v40);
LABEL_31:
          v64 = v41 - 1;
          *(v41 - 1) = BYTE2(v40);
LABEL_32:
          v41 = v64 - 1;
          *(v64 - 1) = HIBYTE(v40);
LABEL_33:
          *(v41 - 1) = v39;
          v59 = v41 - 1;
LABEL_34:
          v41 = v59 - 1;
          *(v59 - 1) = BYTE1(v39);
LABEL_35:
          v60 = v41 - 1;
          *(v41 - 1) = BYTE2(v39);
LABEL_36:
          v51 = v60;
          v58 = v38;
          *(v51 - 1) = HIBYTE(v39);
          v25 = v36;
          break;
        default:
          v58 = v38;
          v25 = v36;
          break;
      }
    }
    *(uint8_t *)a5 = HIBYTE(v25);
    *(uint8_t *)(a5 + 3) = v25;
    *(uint8_t *)(a5 + 1) = BYTE2(v25);
    *(uint8_t *)(a5 + 2) = BYTE1(v25);
    *(uint8_t *)(a5 + 4) = HIBYTE(v58);
    *(uint8_t *)(a5 + 5) = BYTE2(v58);
    *(uint8_t *)(a5 + 6) = BYTE1(v58);
    *(uint8_t *)(a5 + 7) = v58;
    return (uint8_t)v58;
  }
}

// ----------------------------------------------------------------------------
// Function: CAST_ofb64_encrypt  (binary VA: 0x1a0c450)
// Original: CAST_ofb64_encrypt
// ----------------------------------------------------------------------------
int * CAST_ofb64_encrypt(uint8_t *a1, uint8_t *a2, int a3, uint32_t *a4, int a5, int *a6)
{
  int v6;
  int v7;
  int i;
  char v11;
  unsigned int v12;
  int v13;
  char v14; // edi^3
  typedef uint8_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef char _g4_t_v25;
  typedef char _g4_t_v26;
  typedef char _g4_t_v27;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v19)) > _g4_s3 ? (20u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v20)) > _g4_s4 ? (24u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (25u + sizeof(_g4_t_v21)) > _g4_s5 ? (25u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (26u + sizeof(_g4_t_v22)) > _g4_s6 ? (26u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (27u + sizeof(_g4_t_v23)) > _g4_s7 ? (27u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v24)) > _g4_s8 ? (28u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (29u + sizeof(_g4_t_v25)) > _g4_s9 ? (29u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (30u + sizeof(_g4_t_v26)) > _g4_s10 ? (30u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (31u + sizeof(_g4_t_v27)) > _g4_s11 ? (31u + sizeof(_g4_t_v27)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 25u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 26u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 27u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 29u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 30u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 31u);

  v6 = *a6;
  v7 = *(uint8_t *)(a5 + 4);
  v18 = __builtin_bswap32(*(uint32_t *)a5);
  v23 = v18;
  v19 = (*(uint8_t *)(a5 + 6) << 8)
      | *(uint8_t *)(a5 + 7)
      | (*(uint8_t *)(a5 + 5) << 16)
      | (v7 << 24);
  v20 = HIBYTE(v18);
  v21 = BYTE2(v18);
  v22 = BYTE1(v18);
  v24 = HIBYTE(v19);
  v25 = BYTE2(v19);
  v26 = BYTE1(v19);
  v27 = v19;
  if ( a3 != 0 )
  {
    v17 = 0;
    for ( i = a3; i != 0; --i )
    {
      if ( v6 == 0 )
      {
        v16 = a2;
        CAST_encrypt((int *)&v18, a4);
        ++v17;
        v23 = v18;
        a2 = v16;
        v20 = HIBYTE(v18);
        v21 = BYTE2(v18);
        v22 = BYTE1(v18);
        v27 = v19;
        v24 = HIBYTE(v19);
        v25 = BYTE2(v19);
        v26 = BYTE1(v19);
      }
      v11 = *a1 ^ *(&v20 + v6);
      v6 = ((uint8_t)v6 + 1) & 7;
      *a2 = v11;
      ++a1;
      ++a2;
    }
    if ( v17 != 0 )
    {
      v12 = v18;
      v13 = v19;
      v14 = HIBYTE(v18);
      *(uint8_t *)(a5 + 3) = v18;
      *(uint8_t *)a5 = v14;
      *(uint8_t *)(a5 + 1) = BYTE2(v12);
      *(uint8_t *)(a5 + 4) = HIBYTE(v13);
      *(uint8_t *)(a5 + 5) = BYTE2(v13);
      *(uint8_t *)(a5 + 6) = BYTE1(v13);
      *(uint8_t *)(a5 + 2) = BYTE1(v12);
      *(uint8_t *)(a5 + 7) = v13;
    }
  }
  *a6 = v6;
  return a6;
}

// ----------------------------------------------------------------------------
// Function: CAST_set_key  (binary VA: 0x1a0c630)
// Original: CAST_set_key
// ----------------------------------------------------------------------------
int CAST_set_key(int a1, int a2, int a3)
{
  uint32_t *v3;
  int v4;
  int i;
  bool v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int result;
  typedef unsigned int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef unsigned int _g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef unsigned int _g4_t_v29;
  typedef unsigned int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef unsigned int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef unsigned int _g4_t_v34;
  typedef unsigned int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef unsigned int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int *_g4_t_j;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef unsigned int _g4_t_v66;
  typedef unsigned int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef uint32_t _g4_t_v69[10];
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef unsigned int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef uint32_t _g4_t_v76[16];
  typedef uint32_t _g4_t_v77[20];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v18)) > _g4_s3 ? (12u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v19)) > _g4_s4 ? (16u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v20)) > _g4_s5 ? (20u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v21)) > _g4_s6 ? (24u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v22)) > _g4_s7 ? (28u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v23)) > _g4_s8 ? (32u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v24)) > _g4_s9 ? (36u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v25)) > _g4_s10 ? (40u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v26)) > _g4_s11 ? (48u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v27)) > _g4_s12 ? (48u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v28)) > _g4_s13 ? (48u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v29)) > _g4_s14 ? (48u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v30)) > _g4_s15 ? (52u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v31)) > _g4_s16 ? (52u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v32)) > _g4_s17 ? (52u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v33)) > _g4_s18 ? (56u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v34)) > _g4_s19 ? (56u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v35)) > _g4_s20 ? (56u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v36)) > _g4_s21 ? (56u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v37)) > _g4_s22 ? (60u + sizeof(_g4_t_v37)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v38)) > _g4_s23 ? (60u + sizeof(_g4_t_v38)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v39)) > _g4_s24 ? (60u + sizeof(_g4_t_v39)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v40)) > _g4_s25 ? (60u + sizeof(_g4_t_v40)) : _g4_s25,
    _g4_s27 = (60u + sizeof(_g4_t_v41)) > _g4_s26 ? (60u + sizeof(_g4_t_v41)) : _g4_s26,
    _g4_s28 = (64u + sizeof(_g4_t_v42)) > _g4_s27 ? (64u + sizeof(_g4_t_v42)) : _g4_s27,
    _g4_s29 = (64u + sizeof(_g4_t_v43)) > _g4_s28 ? (64u + sizeof(_g4_t_v43)) : _g4_s28,
    _g4_s30 = (64u + sizeof(_g4_t_v44)) > _g4_s29 ? (64u + sizeof(_g4_t_v44)) : _g4_s29,
    _g4_s31 = (64u + sizeof(_g4_t_v45)) > _g4_s30 ? (64u + sizeof(_g4_t_v45)) : _g4_s30,
    _g4_s32 = (64u + sizeof(_g4_t_v46)) > _g4_s31 ? (64u + sizeof(_g4_t_v46)) : _g4_s31,
    _g4_s33 = (68u + sizeof(_g4_t_v47)) > _g4_s32 ? (68u + sizeof(_g4_t_v47)) : _g4_s32,
    _g4_s34 = (72u + sizeof(_g4_t_j)) > _g4_s33 ? (72u + sizeof(_g4_t_j)) : _g4_s33,
    _g4_s35 = (76u + sizeof(_g4_t_v49)) > _g4_s34 ? (76u + sizeof(_g4_t_v49)) : _g4_s34,
    _g4_s36 = (76u + sizeof(_g4_t_v50)) > _g4_s35 ? (76u + sizeof(_g4_t_v50)) : _g4_s35,
    _g4_s37 = (76u + sizeof(_g4_t_v51)) > _g4_s36 ? (76u + sizeof(_g4_t_v51)) : _g4_s36,
    _g4_s38 = (84u + sizeof(_g4_t_v52)) > _g4_s37 ? (84u + sizeof(_g4_t_v52)) : _g4_s37,
    _g4_s39 = (84u + sizeof(_g4_t_v53)) > _g4_s38 ? (84u + sizeof(_g4_t_v53)) : _g4_s38,
    _g4_s40 = (88u + sizeof(_g4_t_v54)) > _g4_s39 ? (88u + sizeof(_g4_t_v54)) : _g4_s39,
    _g4_s41 = (92u + sizeof(_g4_t_v55)) > _g4_s40 ? (92u + sizeof(_g4_t_v55)) : _g4_s40,
    _g4_s42 = (92u + sizeof(_g4_t_v56)) > _g4_s41 ? (92u + sizeof(_g4_t_v56)) : _g4_s41,
    _g4_s43 = (96u + sizeof(_g4_t_v57)) > _g4_s42 ? (96u + sizeof(_g4_t_v57)) : _g4_s42,
    _g4_s44 = (100u + sizeof(_g4_t_v58)) > _g4_s43 ? (100u + sizeof(_g4_t_v58)) : _g4_s43,
    _g4_s45 = (108u + sizeof(_g4_t_v59)) > _g4_s44 ? (108u + sizeof(_g4_t_v59)) : _g4_s44,
    _g4_s46 = (108u + sizeof(_g4_t_v60)) > _g4_s45 ? (108u + sizeof(_g4_t_v60)) : _g4_s45,
    _g4_s47 = (108u + sizeof(_g4_t_v61)) > _g4_s46 ? (108u + sizeof(_g4_t_v61)) : _g4_s46,
    _g4_s48 = (112u + sizeof(_g4_t_v62)) > _g4_s47 ? (112u + sizeof(_g4_t_v62)) : _g4_s47,
    _g4_s49 = (116u + sizeof(_g4_t_v63)) > _g4_s48 ? (116u + sizeof(_g4_t_v63)) : _g4_s48,
    _g4_s50 = (116u + sizeof(_g4_t_v64)) > _g4_s49 ? (116u + sizeof(_g4_t_v64)) : _g4_s49,
    _g4_s51 = (116u + sizeof(_g4_t_v65)) > _g4_s50 ? (116u + sizeof(_g4_t_v65)) : _g4_s50,
    _g4_s52 = (120u + sizeof(_g4_t_v66)) > _g4_s51 ? (120u + sizeof(_g4_t_v66)) : _g4_s51,
    _g4_s53 = (124u + sizeof(_g4_t_v67)) > _g4_s52 ? (124u + sizeof(_g4_t_v67)) : _g4_s52,
    _g4_s54 = (124u + sizeof(_g4_t_v68)) > _g4_s53 ? (124u + sizeof(_g4_t_v68)) : _g4_s53,
    _g4_s55 = (128u + sizeof(_g4_t_v69)) > _g4_s54 ? (128u + sizeof(_g4_t_v69)) : _g4_s54,
    _g4_s56 = (168u + sizeof(_g4_t_v70)) > _g4_s55 ? (168u + sizeof(_g4_t_v70)) : _g4_s55,
    _g4_s57 = (172u + sizeof(_g4_t_v71)) > _g4_s56 ? (172u + sizeof(_g4_t_v71)) : _g4_s56,
    _g4_s58 = (176u + sizeof(_g4_t_v72)) > _g4_s57 ? (176u + sizeof(_g4_t_v72)) : _g4_s57,
    _g4_s59 = (180u + sizeof(_g4_t_v73)) > _g4_s58 ? (180u + sizeof(_g4_t_v73)) : _g4_s58,
    _g4_s60 = (184u + sizeof(_g4_t_v74)) > _g4_s59 ? (184u + sizeof(_g4_t_v74)) : _g4_s59,
    _g4_s61 = (188u + sizeof(_g4_t_v75)) > _g4_s60 ? (188u + sizeof(_g4_t_v75)) : _g4_s60,
    _g4_s62 = (192u + sizeof(_g4_t_v76)) > _g4_s61 ? (192u + sizeof(_g4_t_v76)) : _g4_s61,
    _g4_s63 = (256u + sizeof(_g4_t_v77)) > _g4_s62 ? (256u + sizeof(_g4_t_v77)) : _g4_s62
  };
  alignas(16) uint8_t _g4_sf[_g4_s63];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 56u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 60u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 60u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 64u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 64u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 64u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 64u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 64u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 68u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 72u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 76u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 76u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 76u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 84u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 84u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 88u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 92u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 92u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 96u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 100u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 108u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 108u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 108u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 112u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 116u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 116u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 116u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 120u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 124u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 124u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 128u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 168u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 172u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 176u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 180u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 184u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 188u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 192u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 256u);

  v3 = v69;
  do
    *v3++ = 0;
  while ( v3 != v76 );
  v4 = 16;
  if ( a2 <= 16 )
    v4 = a2;
  if ( v4 > 0 )
  {
    for ( i = 0; i != v4; ++i )
      v69[i] = *(uint8_t *)(a3 + i);
  }
  v6 = v4 <= 10;
  v7 = v69[9];
  v8 = v69[0] << 24;
  v9 = v69[8];
  *(uint32_t *)(a1 + 128) = v6;
  v52 = v70;
  v10 = (v69[2] << 8) | v69[3] | (v69[1] << 16) | v8;
  v30 = (v69[6] << 8) | v69[7] | (v69[5] << 16) | (v69[4] << 24);
  v49 = v73;
  v57 = v7;
  v54 = v74;
  v55 = v72;
  v26 = (v70 << 8) | v71 | (v7 << 16) | (v9 << 24);
  v37 = (v74 << 8) | v75 | (v73 << 16) | (v72 << 24);
  v42 = CAST_S_table5[v75];
  v33 = CAST_S_table5[v71];
  v47 = CAST_S_table6[v9];
  for ( j = (int *)(v76); ; j = (int *)(v77) )
  {
    v43 = CAST_S_table7[v54] ^ CAST_S_table6[v55] ^ CAST_S_table4[v49] ^ v47 ^ v10 ^ v42;
    v50 = (uint8_t)v43;
    v25 = CAST_S_table6[BYTE2(v43)];
    v27 = v25
        ^ CAST_S_table5[BYTE1(v43)]
        ^ CAST_S_table7[(uint8_t)v43]
        ^ CAST_S_table4[HIBYTE(v43)]
        ^ CAST_S_table7[v52]
        ^ v26;
    v59 = CAST_S_table5[BYTE1(v27)];
    v24 = CAST_S_table6[BYTE2(v27)];
    v23 = CAST_S_table7[HIBYTE(v27)];
    v67 = v24 ^ v59 ^ v23 ^ CAST_S_table4[(uint8_t)v27] ^ CAST_S_table4[v57] ^ v37;
    v38 = (uint8_t)(v24
                          ^ v59
                          ^ v23
                          ^ LOBYTE(CAST_S_table4[(uint8_t)v27])
                          ^ LOBYTE(CAST_S_table4[v57])
                          ^ v37);
    v63 = CAST_S_table4[BYTE1(v67)];
    v22 = CAST_S_table5[BYTE2(v67)];
    v56 = CAST_S_table7[BYTE1(v27)];
    v34 = v22 ^ v63 ^ CAST_S_table7[HIBYTE(v67)] ^ CAST_S_table6[(uint8_t)v67] ^ v30 ^ v33;
    *j = v22 ^ CAST_S_table4[HIBYTE(v67)] ^ v56 ^ CAST_S_table4[BYTE1(v43)] ^ CAST_S_table6[(uint8_t)v27];
    j[1] = v63 ^ CAST_S_table5[v38] ^ v23 ^ v24 ^ v59;
    v39 = CAST_S_table7[BYTE1(v43)];
    j[2] = CAST_S_table5[BYTE2(v34)]
         ^ CAST_S_table4[HIBYTE(v34)]
         ^ CAST_S_table6[BYTE2(v67)]
         ^ CAST_S_table6[(uint8_t)v43]
         ^ v39;
    v11 = CAST_S_table5[(uint8_t)v27];
    j[3] = CAST_S_table4[BYTE1(v34)]
         ^ CAST_S_table7[HIBYTE(v34)]
         ^ CAST_S_table5[(uint8_t)v34]
         ^ CAST_S_table7[HIBYTE(v43)]
         ^ v25;
    v15 = v67 ^ CAST_S_table4[BYTE2(v27)] ^ v56 ^ CAST_S_table6[HIBYTE(v43)] ^ CAST_S_table6[HIBYTE(v27)] ^ v11;
    v58 = CAST_S_table5[BYTE1(v15)];
    v40 = CAST_S_table6[BYTE2(v15)] ^ v58 ^ CAST_S_table7[(uint8_t)v15] ^ CAST_S_table4[HIBYTE(v15)] ^ v43 ^ v39;
    v21 = CAST_S_table4[(uint8_t)v40];
    v64 = CAST_S_table5[BYTE1(v40)];
    v28 = CAST_S_table6[BYTE2(v40)] ^ v64 ^ CAST_S_table7[HIBYTE(v40)] ^ v21 ^ CAST_S_table4[BYTE2(v43)] ^ v27;
    v44 = (uint8_t)v28;
    v53 = BYTE2(v28);
    v35 = CAST_S_table5[BYTE2(v28)]
        ^ CAST_S_table4[BYTE1(v28)]
        ^ CAST_S_table7[HIBYTE(v28)]
        ^ CAST_S_table6[(uint8_t)v28]
        ^ CAST_S_table5[v50]
        ^ v34;
    v12 = CAST_S_table4[BYTE2(v15)];
    v68 = CAST_S_table6[HIBYTE(v35)];
    j[4] = CAST_S_table7[BYTE2(v35)] ^ v68 ^ CAST_S_table4[HIBYTE(v28)] ^ CAST_S_table4[(uint8_t)v15] ^ v58;
    j[5] = CAST_S_table5[BYTE2(v35)]
         ^ CAST_S_table6[BYTE1(v35)]
         ^ CAST_S_table7[(uint8_t)v35]
         ^ CAST_S_table5[HIBYTE(v15)]
         ^ v12;
    v31 = CAST_S_table6[HIBYTE(v28)];
    j[6] = CAST_S_table7[BYTE2(v28)] ^ v31 ^ v64 ^ CAST_S_table6[(uint8_t)v15] ^ v21;
    j[7] = CAST_S_table6[BYTE1(v28)]
         ^ CAST_S_table7[(uint8_t)v28]
         ^ CAST_S_table4[BYTE2(v40)]
         ^ CAST_S_table5[HIBYTE(v40)]
         ^ CAST_S_table7[(uint8_t)v40];
    v32 = CAST_S_table7[BYTE1(v35)] ^ CAST_S_table4[BYTE2(v35)] ^ CAST_S_table5[(uint8_t)v35] ^ v68 ^ v15 ^ v31;
    v51 = (uint8_t)v32;
    v20 = CAST_S_table5[BYTE1(v32)];
    v29 = CAST_S_table6[BYTE2(v32)]
        ^ v20
        ^ CAST_S_table7[(uint8_t)v32]
        ^ CAST_S_table4[HIBYTE(v32)]
        ^ CAST_S_table7[BYTE1(v28)]
        ^ v28;
    v18 = CAST_S_table5[BYTE1(v29)];
    v19 = CAST_S_table4[(uint8_t)v29];
    v66 = CAST_S_table6[BYTE2(v29)] ^ v18 ^ CAST_S_table7[HIBYTE(v29)] ^ v19 ^ CAST_S_table4[v53] ^ v35;
    v60 = (uint8_t)(LOBYTE(CAST_S_table6[BYTE2(v29)])
                          ^ v18
                          ^ LOBYTE(CAST_S_table7[HIBYTE(v29)])
                          ^ v19
                          ^ LOBYTE(CAST_S_table4[v53])
                          ^ v35);
    v41 = CAST_S_table5[BYTE2(v66)]
        ^ CAST_S_table4[BYTE1(v66)]
        ^ CAST_S_table7[HIBYTE(v66)]
        ^ CAST_S_table6[(uint8_t)v66]
        ^ CAST_S_table5[v44]
        ^ v40;
    v13 = CAST_S_table4[BYTE2(v32)];
    j[8] = CAST_S_table7[BYTE2(v41)]
         ^ CAST_S_table6[HIBYTE(v41)]
         ^ CAST_S_table4[BYTE2(v66)]
         ^ CAST_S_table4[(uint8_t)v32]
         ^ v20;
    j[9] = CAST_S_table6[BYTE1(v41)]
         ^ CAST_S_table5[HIBYTE(v41)]
         ^ CAST_S_table7[(uint8_t)v41]
         ^ CAST_S_table5[HIBYTE(v32)]
         ^ v13;
    j[10] = CAST_S_table7[BYTE2(v66)] ^ CAST_S_table6[HIBYTE(v66)] ^ v18 ^ CAST_S_table6[BYTE1(v32)] ^ v19;
    v36 = CAST_S_table4[BYTE2(v29)];
    v45 = CAST_S_table7[BYTE1(v29)];
    j[11] = CAST_S_table6[BYTE1(v66)] ^ CAST_S_table7[v60] ^ CAST_S_table5[HIBYTE(v29)] ^ v36 ^ v45;
    v10 = v66
        ^ v45
        ^ v36
        ^ CAST_S_table6[HIBYTE(v32)]
        ^ CAST_S_table6[HIBYTE(v29)]
        ^ CAST_S_table5[(uint8_t)v29];
    v46 = (uint8_t)(v66
                          ^ v45
                          ^ v36
                          ^ LOBYTE(CAST_S_table6[HIBYTE(v32)])
                          ^ LOBYTE(CAST_S_table6[HIBYTE(v29)])
                          ^ LOBYTE(CAST_S_table5[(uint8_t)v29]));
    v61 = CAST_S_table6[BYTE2(v10)];
    v30 = v61
        ^ CAST_S_table5[BYTE1(v10)]
        ^ CAST_S_table7[v46]
        ^ CAST_S_table4[HIBYTE(v10)]
        ^ CAST_S_table7[BYTE1(v32)]
        ^ v32;
    v62 = CAST_S_table6[BYTE2(v30)];
    v65 = CAST_S_table7[HIBYTE(v30)];
    v26 = v62 ^ CAST_S_table5[BYTE1(v30)] ^ v65 ^ CAST_S_table4[(uint8_t)v30] ^ v13 ^ v29;
    v57 = BYTE2(v26);
    v52 = BYTE1(v26);
    v16 = CAST_S_table5[BYTE2(v26)];
    v17 = CAST_S_table4[BYTE1(v26)];
    v37 = v16 ^ v17 ^ CAST_S_table7[HIBYTE(v26)] ^ CAST_S_table6[(uint8_t)v26] ^ CAST_S_table5[v51] ^ v41;
    v54 = BYTE1(v37);
    v49 = BYTE2(v37);
    v55 = HIBYTE(v37);
    j[12] = v16
          ^ CAST_S_table4[HIBYTE(v26)]
          ^ CAST_S_table7[BYTE1(v30)]
          ^ CAST_S_table4[v46]
          ^ CAST_S_table6[(uint8_t)v30];
    v33 = CAST_S_table5[(uint8_t)v26];
    j[13] = v17 ^ v33 ^ v62 ^ CAST_S_table5[(uint8_t)v30] ^ v65;
    v47 = CAST_S_table6[HIBYTE(v26)];
    j[14] = CAST_S_table5[BYTE2(v37)]
          ^ CAST_S_table4[HIBYTE(v37)]
          ^ v47
          ^ CAST_S_table6[v46]
          ^ CAST_S_table7[BYTE1(v10)];
    v42 = CAST_S_table5[(uint8_t)v37];
    j[15] = CAST_S_table7[BYTE2(v37)] ^ CAST_S_table4[BYTE1(v37)] ^ v42 ^ CAST_S_table7[HIBYTE(v10)] ^ v61;
    if ( j != (int *)(uintptr_t)(v76) )
      break;
  }
  for ( result = 0; result != 16; ++result )
  {
    *(uint32_t *)(a1 + 8 * result) = v76[result];
    *(uint32_t *)(a1 + 8 * result + 4) = ((uint8_t)v77[result] + 16) & 0x1F;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A0D1C0  (binary VA: 0x1a0d1c0)
// Original: sub_1A0D1C0
// ----------------------------------------------------------------------------
int sub_1A0D1C0(int *a1)
{
  if ( OBJ_obj2nid(*a1) == 23 )
    return a1[1];
  ERR_put_error(46, 131, 107, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: cms_EnvelopedData_init_bio  (binary VA: 0x1a0e1d0)
// Original: cms_EnvelopedData_init_bio
// ----------------------------------------------------------------------------
uint32_t * cms_EnvelopedData_init_bio(int a1)
{
  int v1;
  int v2;
  int *v3;
  uint32_t *v4;
  int *v5;
  int v6;
  void **v7;
  int v8;
  uint8_t *v9;
  int v10;
  int v11;
  int v12;
  uint8_t *v13;
  uint32_t *v15;
  uint8_t *v16;
  uint8_t *v17;
  int v18;
  int v19;
  typedef int _g4_t_v20;
  typedef int16_t _g4_t_v21;
  typedef int *_g4_t_v22;
  typedef void *_g4_t_v23;
  typedef void *_g4_t_v24;
  typedef void *_g4_t_v25;
  typedef uint32_t *_g4_t_inited;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef size_t _g4_t_v30;
  typedef int _g4_t_v31[68];
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (8u + sizeof(_g4_t_v20)) > _g4_s0 ? (8u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v21)) > _g4_s1 ? (8u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v22)) > _g4_s2 ? (48u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v23)) > _g4_s3 ? (48u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v24)) > _g4_s4 ? (52u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v25)) > _g4_s5 ? (52u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_inited)) > _g4_s6 ? (56u + sizeof(_g4_t_inited)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v27)) > _g4_s7 ? (60u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v28)) > _g4_s8 ? (68u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v29)) > _g4_s9 ? (72u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v30)) > _g4_s10 ? (88u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v31)) > _g4_s11 ? (92u + sizeof(_g4_t_v31)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_inited &inited = *reinterpret_cast<_g4_t_inited *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 88u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 92u);

  v1 = *(uint32_t *)(*(uint32_t *)(a1 + 4) + 12);
  inited = (uint32_t *)cms_EncryptedContent_init_bio(v1);
  if ( inited == nullptr || *(uint32_t *)(v1 + 12) == 0 )
    return inited;
  v2 = 0;
  v27 = v1;
  v3 = *(int **)(*(uint32_t *)(a1 + 4) + 8);
  while ( v2 < sk_num((int)(uintptr_t)(v3)) )
  {
    v4 = (uint32_t *)sk_value(v3, v2);
    if ( *v4 == 0 )
    {
      v28 = v4[1];
      v29 = *(uint32_t *)(*(uint32_t *)(a1 + 4) + 12);
      v5 = (int *)EVP_PKEY_CTX_new(*(uint32_t **)(v28 + 20), nullptr);
      if ( v5 == nullptr )
        goto LABEL_31;
      v22 = v5;
      v6 = EVP_PKEY_encrypt_init(v5);
      v7 = (void **)v22;
      if ( v6 <= 0 )
        goto LABEL_29;
      if ( EVP_PKEY_CTX_ctrl((int)(uintptr_t)(v22), -1, 256, 9, 0, (int)(uintptr_t)(v4)) <= 0 )
      {
        v21 = 110;
        goto LABEL_38;
      }
      v8 = EVP_PKEY_encrypt(v22, 0, &v30, *(uint32_t *)(v29 + 16), *(uint32_t *)(v29 + 20));
      v7 = (void **)v22;
      if ( v8 <= 0 )
      {
LABEL_29:
        v10 = 0;
      }
      else
      {
        v9 = CRYPTO_malloc(v30, (int)(uintptr_t)(&unk_1B15112), 0);
        if ( v9 != nullptr )
        {
          v24 = v9;
          if ( EVP_PKEY_encrypt(v22, (int)(uintptr_t)(v9), &v30, *(uint32_t *)(v29 + 16), *(uint32_t *)(v29 + 20)) <= 0 )
          {
            v11 = v27;
            EVP_PKEY_CTX_free((void **)v22);
            CRYPTO_free(v24);
            goto LABEL_32;
          }
          v10 = 1;
          ASN1_STRING_set0(*(uint32_t *)(v28 + 12), (int)(uintptr_t)(v24), v30);
          v7 = (void **)v22;
          goto LABEL_30;
        }
        v21 = 65;
LABEL_38:
        v10 = 0;
        ERR_put_error(46, 141, v21, (int)(uintptr_t)(&unk_1B15112), 0);
        v7 = (void **)v22;
      }
LABEL_30:
      EVP_PKEY_CTX_free(v7);
      goto LABEL_24;
    }
    if ( *v4 != 2 )
    {
      v11 = v27;
      v12 = 0;
      ERR_put_error(46, 125, 154, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_15;
    }
    v15 = (uint32_t *)v4[1];
    v16 = (uint8_t *)v15[4];
    if ( v16 == nullptr )
    {
      v11 = v27;
      ERR_put_error(46, 136, 130, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_32;
    }
    v23 = *(void **)(*(uint32_t *)(a1 + 4) + 12);
    if ( AES_set_encrypt_key(v16, 8 * v15[5], v31) != 0 )
    {
      v10 = 0;
      ERR_put_error(46, 136, 115, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    else
    {
      v17 = CRYPTO_malloc(*((uint32_t *)v23 + 5) + 8, (int)(uintptr_t)(&unk_1B15112), 0);
      if ( v17 != nullptr )
      {
        v25 = v17;
        v18 = AES_wrap_key((int)(uintptr_t)(v31), 0, (int)(uintptr_t)(v17), *((void **)v23 + 4), *((uint32_t *)v23 + 5));
        if ( v18 <= 0 )
        {
          ERR_put_error(46, 136, 159, (int)(uintptr_t)(&unk_1B15112), 0);
          v10 = 0;
          CRYPTO_free(v25);
        }
        else
        {
          v20 = v18;
          v19 = v15[3];
          v10 = 1;
          ASN1_STRING_set0(v19, (int)(uintptr_t)(v25), v20);
        }
      }
      else
      {
        v10 = 0;
        ERR_put_error(46, 136, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      }
    }
    OPENSSL_cleanse((uint8_t *)v31, 0xF4u);
LABEL_24:
    if ( v10 == 0 )
    {
LABEL_31:
      v11 = v27;
LABEL_32:
      v12 = 0;
      ERR_put_error(46, 125, 116, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_15;
    }
    ++v2;
  }
  v11 = v27;
  v12 = 1;
LABEL_15:
  v13 = *(uint8_t **)(v11 + 16);
  *(uint32_t *)(v11 + 12) = 0;
  if ( v13 != nullptr )
  {
    OPENSSL_cleanse(v13, *(uint32_t *)(v11 + 20));
    CRYPTO_free(*(void **)(v11 + 16));
    *(uint32_t *)(v11 + 16) = 0;
    *(uint32_t *)(v11 + 20) = 0;
  }
  if ( v12 == 0 )
  {
    BIO_free(inited);
    return nullptr;
  }
  return inited;
}

// ----------------------------------------------------------------------------
// Function: sub_1A0E760  (binary VA: 0x1a0e760)
// Original: sub_1A0E760
// ----------------------------------------------------------------------------
int sub_1A0E760(int *a1)
{
  int v2;

  v2 = OBJ_obj2nid(*a1);
  if ( v2 == 22 )
    return a1[1] + 12;
  if ( v2 == 23 )
    return *(uint32_t *)(a1[1] + 4);
  ERR_put_error(46, 128, 152, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1A0E800  (binary VA: 0x1a0e800)
// Original: sub_1A0E800
// ----------------------------------------------------------------------------
int sub_1A0E800(int *a1)
{
  int v2;

  v2 = OBJ_obj2nid(*a1);
  switch ( v2 )
  {
    case 22:
    case 25:
      return *(uint32_t *)(a1[1] + 8);
    case 23:
    case 786:
      return *(uint32_t *)(a1[1] + 12);
    case 26:
      return *(uint32_t *)(a1[1] + 4);
    case 205:
      return *(uint32_t *)(a1[1] + 20);
    default:
      ERR_put_error(46, 130, 152, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: cms_content_bio  (binary VA: 0x1a0ed40)
// Original: cms_content_bio
// ----------------------------------------------------------------------------
uint8_t * cms_content_bio(int *a1)
{
  int *v1;
  int v2;
  void *v4;
  void *v5;

  v1 = (int *)CMS_get0_content(a1);
  if ( v1 == nullptr )
    return nullptr;
  v2 = *v1;
  if ( v2 != 0 )
  {
    if ( *(uint32_t *)(v2 + 12) == 32 )
    {
      v4 = BIO_s_mem();
      return BIO_new((int)(uintptr_t)(v4));
    }
    else
    {
      return (uint8_t *)(BIO_new_mem_buf(*(char **)(v2 + 8), *(uint32_t *)v2));
    }
  }
  else
  {
    v5 = BIO_s_null();
    return BIO_new((int)(uintptr_t)(v5));
  }
}

// ----------------------------------------------------------------------------
// Function: cms_Data_create  (binary VA: 0x1a0f0d0)
// Original: cms_Data_create
// ----------------------------------------------------------------------------
int * cms_Data_create()
{
  int *v0;

  v0 = (int *)CMS_ContentInfo_new();
  if ( v0 != nullptr )
  {
    *v0 = (int)(uintptr_t)(OBJ_nid2obj(0x15u));
    CMS_set_detached(v0, 0);
  }
  return v0;
}

// ----------------------------------------------------------------------------
// Function: cms_DigestAlgorithm_set  (binary VA: 0x1a0f120)
// Original: cms_DigestAlgorithm_set
// ----------------------------------------------------------------------------
int cms_DigestAlgorithm_set(int a1, int a2)
{
  int v2;
  unsigned int v3;
  char **v4;

  v2 = -((*(uint32_t *)(a2 + 12) & 8) == 0);
  v3 = EVP_MD_type(a2);
  v4 = OBJ_nid2obj(v3);
  return X509_ALGOR_set0(a1, (int)(uintptr_t)(v4), (v2 & 6) - 1, 0);
}

// ----------------------------------------------------------------------------
// Function: cms_DigestAlgorithm_init_bio  (binary VA: 0x1a0f190)
// Original: cms_DigestAlgorithm_init_bio
// ----------------------------------------------------------------------------
uint32_t * cms_DigestAlgorithm_init_bio(uint32_t *a1)
{
  unsigned int v1;
  char *v2;
  int digestbyname;
  int v4;
  uint8_t *v5;
  uint32_t *v6;
  typedef uint32_t *_g4_t_v8;
  typedef int _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v9)) > _g4_s1 ? (44u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);

  X509_ALGOR_get0(v9, nullptr, nullptr, a1);
  v1 = OBJ_obj2nid(v9[0]);
  v2 = OBJ_nid2sn(v1);
  digestbyname = EVP_get_digestbyname((int)(uintptr_t)(v2));
  if ( digestbyname != 0 )
  {
    v4 = (int)(uintptr_t)(BIO_f_md());
    v5 = BIO_new(v4);
    v6 = (uint32_t *)(v5);
    if ( v5 == nullptr || BIO_ctrl(v5, 111, 0, digestbyname) == 0 )
    {
      ERR_put_error(46, 116, 119, (int)(uintptr_t)(&unk_1B15112), 0);
      if ( v6 != nullptr )
      {
        v8 = v6;
        v6 = nullptr;
        BIO_free(v8);
      }
    }
    return v6;
  }
  else
  {
    ERR_put_error(46, 116, 149, (int)(uintptr_t)(&unk_1B15112), 0);
    return nullptr;
  }
}

// ----------------------------------------------------------------------------
// Function: cms_DigestAlgorithm_find_ctx  (binary VA: 0x1a0f2b0)
// Original: cms_DigestAlgorithm_find_ctx
// ----------------------------------------------------------------------------
int cms_DigestAlgorithm_find_ctx(int *a1, int **a2, uint32_t *a3)
{
  int v4;
  int v5;
  int v6;
  int *type;
  int v8;
  typedef int _g4_t_v10;
  typedef int *_g4_t_v11;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);

  X509_ALGOR_get0(&v10, nullptr, nullptr, a3);
  v4 = OBJ_obj2nid(v10);
  while ( 1 )
  {
    type = BIO_find_type(a2, 520);
    v8 = (int)(uintptr_t)(type);
    if ( type == nullptr )
    {
      ERR_put_error(46, 115, 131, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    BIO_ctrl(type, 120, 0, (int)(uintptr_t)(&v11));
    v5 = EVP_MD_CTX_md((int)(uintptr_t)(v11));
    if ( EVP_MD_type(v5) == v4 )
      break;
    v6 = EVP_MD_CTX_md((int)(uintptr_t)(v11));
    if ( EVP_MD_pkey_type(v6) == v4 )
      break;
    a2 = (int **)BIO_next(v8);
  }
  EVP_MD_CTX_copy_ex(a1, v11);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A0FA20  (binary VA: 0x1a0fa20)
// Original: sub_1A0FA20
// ----------------------------------------------------------------------------
int sub_1A0FA20(int *a1)
{
  if ( OBJ_obj2nid(*a1) == 22 )
    return a1[1];
  ERR_put_error(46, 133, 108, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_1A0FAA0  (binary VA: 0x1a0faa0)
// Original: sub_1A0FAA0
// ----------------------------------------------------------------------------
int sub_1A0FAA0(int *a1)
{
  uint32_t *v3;
  char ***v4;

  if ( a1[1] != 0 )
    return sub_1A0FA20(a1);
  v3 = (uint32_t *)ASN1_item_new((int)(uintptr_t)(&CMS_SignedData_it));
  a1[1] = (int)(uintptr_t)(v3);
  if ( v3 != nullptr )
  {
    *v3 = 1;
    v4 = *(char ****)(a1[1] + 8);
    *v4 = OBJ_nid2obj(0x15u);
    *(uint32_t *)(*(uint32_t *)(a1[1] + 8) + 8) = 1;
    ASN1_OBJECT_free((void *)*a1);
    *a1 = (int)(uintptr_t)(OBJ_nid2obj(0x16u));
    return a1[1];
  }
  else
  {
    ERR_put_error(46, 149, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: cms_set1_SignerIdentifier  (binary VA: 0x1a0fba0)
// Original: cms_set1_SignerIdentifier
// ----------------------------------------------------------------------------
int cms_set1_SignerIdentifier(int a1, int a2, int a3)
{
  int v3;
  int issuer_name;
  void **v6;
  int serialNumber;

  if ( a3 == 0 )
  {
    v3 = ASN1_item_new((int)(uintptr_t)(&CMS_IssuerAndSerialNumber_it));
    *(uint32_t *)(a1 + 4) = v3;
    if ( v3 != 0 )
    {
      issuer_name = X509_get_issuer_name(a2);
      if ( X509_NAME_set(*(int **)(a1 + 4), issuer_name) )
      {
        serialNumber = X509_get_serialNumber(a2);
        if ( ASN1_STRING_copy(*(uint32_t *)(*(uint32_t *)(a1 + 4) + 4), serialNumber) != 0 )
          goto LABEL_10;
      }
    }
    goto LABEL_4;
  }
  if ( a3 == 1 )
  {
    if ( *(uint32_t *)(a2 + 56) != 0 )
    {
      v6 = ASN1_STRING_dup(*(uint32_t *)(a2 + 56));
      *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v6);
      if ( v6 != nullptr )
      {
LABEL_10:
        *(uint32_t *)a1 = a3;
        return 1;
      }
LABEL_4:
      ERR_put_error(46, 146, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    ERR_put_error(46, 146, 160, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  else
  {
    ERR_put_error(46, 146, 150, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: cms_SignerIdentifier_get0_signer_id  (binary VA: 0x1a0fd10)
// Original: cms_SignerIdentifier_get0_signer_id
// ----------------------------------------------------------------------------
char cms_SignerIdentifier_get0_signer_id(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  char result;

  if ( *a1 != 0 )
  {
    result = 0;
    if ( *a1 == 1 )
    {
      result = 1;
      if ( a2 != nullptr )
        *a2 = a1[1];
    }
  }
  else
  {
    if ( a3 != nullptr )
      *a3 = *(uint32_t *)a1[1];
    result = 1;
    if ( a4 != nullptr )
      *a4 = *(uint32_t *)(a1[1] + 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: cms_SignerIdentifier_cert_cmp  (binary VA: 0x1a0fd80)
// Original: cms_SignerIdentifier_cert_cmp
// ----------------------------------------------------------------------------
int cms_SignerIdentifier_cert_cmp(uint32_t *a1, int a2)
{
  int v2;
  int issuer_name;
  int serialNumber;

  if ( *a1 != 0 )
  {
    v2 = -1;
    if ( *a1 == 1 )
    {
      X509_check_purpose(a2, -1, -1);
      if ( *(uint32_t *)(a2 + 56) != 0 )
        return ASN1_OCTET_STRING_cmp(a1[1], *(uint32_t *)(a2 + 56));
    }
  }
  else
  {
    issuer_name = X509_get_issuer_name(a2);
    v2 = X509_NAME_cmp(*(uint32_t *)a1[1], issuer_name);
    if ( v2 == 0 )
    {
      serialNumber = X509_get_serialNumber(a2);
      return ASN1_INTEGER_cmp(*(uint32_t *)(a1[1] + 4), serialNumber);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: cms_SignedData_final  (binary VA: 0x1a10540)
// Original: cms_SignedData_final
// ----------------------------------------------------------------------------
int cms_SignedData_final(int *a1, int **a2)
{
  int v2;
  int v3;
  int v5;
  char *v6;
  typedef char *_g4_t_v7;
  typedef int *_g4_t_v8;
  typedef char *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef void *_g4_t_v11[6];
  typedef char _g4_t_v12[92];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v10)) > _g4_s3 ? (20u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v11)) > _g4_s4 ? (24u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v12)) > _g4_s5 ? (48u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);

  v2 = 0;
  v8 = (int *)CMS_get0_SignerInfos(a1);
  if ( sk_num((int)(uintptr_t)(v8)) <= 0 )
  {
LABEL_15:
    *(uint32_t *)(*(uint32_t *)(a1[1] + 8) + 8) = 0;
    return 1;
  }
  else
  {
    while ( 1 )
    {
      v3 = sk_value(v8, v2);
      EVP_MD_CTX_init(v11);
      if ( *(uint32_t *)(v3 + 32) == 0 )
        break;
      if ( cms_DigestAlgorithm_find_ctx((int *)v11, a2, *(uint32_t **)(v3 + 8)) == 0 )
        goto LABEL_4;
      if ( (int)CMS_signed_get_attr_count(v3) < 0 )
      {
        v5 = EVP_PKEY_size(*(uint32_t *)(v3 + 32));
        v6 = (char *)(CRYPTO_malloc(v5, (int)(uintptr_t)(&unk_1B15112), 0));
        if ( v6 == nullptr )
        {
          ERR_put_error(46, 150, 65, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_4;
        }
        v7 = v6;
        if ( EVP_SignFinal((int *)v11, (int)(uintptr_t)(v6), &v10, *(uint32_t **)(v3 + 32)) == 0 )
        {
          ERR_put_error(46, 150, 139, (int)(uintptr_t)(&unk_1B15112), 0);
          CRYPTO_free(v7);
LABEL_4:
          EVP_MD_CTX_cleanup((int)(uintptr_t)(v11));
          return 0;
        }
        ASN1_STRING_set0(*(uint32_t *)(v3 + 20), (int)(uintptr_t)(v7), v10);
      }
      else
      {
        v9 = **(char ***)(a1[1] + 8);
        EVP_DigestFinal_ex(v11, (int)(uintptr_t)(v12), &v10);
        if ( CMS_signed_add1_attr_by_NID(v3, 51, 4, v12, v10) == 0
          || CMS_signed_add1_attr_by_NID(v3, 50, 6, v9, -1) <= 0
          || CMS_SignerInfo_sign(v3) == 0 )
        {
          goto LABEL_4;
        }
      }
      ++v2;
      EVP_MD_CTX_cleanup((int)(uintptr_t)(v11));
      if ( v2 >= sk_num((int)(uintptr_t)(v8)) )
        goto LABEL_15;
    }
    ERR_put_error(46, 150, 133, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: cms_SignedData_init_bio  (binary VA: 0x1a10990)
// Original: cms_SignedData_init_bio
// ----------------------------------------------------------------------------
uint32_t * cms_SignedData_init_bio(int *a1)
{
  int v1;
  int v2;
  uint32_t *v3;
  int k;
  uint32_t *v5;
  uint32_t *inited;
  int v7;
  int i;
  int j;
  int v11;
  uint32_t *v12;

  v1 = sub_1A0FA20(a1);
  if ( v1 == 0 )
    return nullptr;
  v2 = 0;
  if ( *(uint32_t *)(*(uint32_t *)(a1[1] + 8) + 8) != 0 )
  {
    while ( v2 < sk_num(*(uint32_t *)(v1 + 12)) )
    {
      v7 = *(uint32_t *)sk_value(*(int **)(v1 + 12), v2);
      if ( v7 == 4 )
      {
        if ( *(int *)v1 <= 4 )
          *(uint32_t *)v1 = 5;
      }
      else if ( v7 == 3 )
      {
        if ( *(int *)v1 <= 3 )
          *(uint32_t *)v1 = 4;
      }
      else if ( v7 == 2 && *(int *)v1 <= 2 )
      {
        *(uint32_t *)v1 = 3;
      }
      ++v2;
    }
    for ( i = 0; i < sk_num(*(uint32_t *)(v1 + 16)); ++i )
    {
      if ( *(uint32_t *)sk_value(*(int **)(v1 + 16), i) == 1 && *(int *)v1 <= 4 )
        *(uint32_t *)v1 = 5;
    }
    if ( OBJ_obj2nid(**(uint32_t **)(v1 + 8)) != 21 && *(int *)v1 <= 2 )
      *(uint32_t *)v1 = 3;
    for ( j = 0; j < sk_num(*(uint32_t *)(v1 + 20)); ++j )
    {
      v11 = sk_value(*(int **)(v1 + 20), j);
      if ( **(uint32_t **)(v11 + 4) == 1 )
      {
        if ( *(int *)v11 <= 2 )
          *(uint32_t *)v11 = 3;
        if ( *(int *)v1 <= 2 )
          *(uint32_t *)v1 = 3;
      }
      else
      {
        *(uint32_t *)v1 = 1;
      }
    }
    if ( *(int *)v1 <= 0 )
      *(uint32_t *)v1 = 1;
  }
  v3 = nullptr;
  for ( k = 0; k < sk_num(*(uint32_t *)(v1 + 4)); ++k )
  {
    v5 = (uint32_t *)sk_value(*(int **)(v1 + 4), k);
    inited = cms_DigestAlgorithm_init_bio(v5);
    if ( inited == nullptr )
    {
      if ( v3 != nullptr )
      {
        v12 = v3;
        v3 = nullptr;
        BIO_free_all(v12);
      }
      return v3;
    }
    if ( v3 != nullptr )
      BIO_push(v3, inited);
    else
      v3 = inited;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1A10F30  (binary VA: 0x1a10f30)
// Original: sub_1A10F30
// ----------------------------------------------------------------------------
int sub_1A10F30(int **a1, unsigned int a2, int a3)
{
  char *v5;
  int cipherbyname;
  int result;

  v5 = OBJ_nid2sn(a2);
  cipherbyname = EVP_get_cipherbyname((int)(uintptr_t)(v5));
  result = 1;
  if ( cipherbyname != 0 )
    return CMS_add_simple_smimecap(a1, a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: NCONF_new  (binary VA: 0x1a11870)
// Original: NCONF_new
// ----------------------------------------------------------------------------
int NCONF_new(int a1)
{
  int v1;
  int result;

  v1 = a1;
  if ( a1 == 0 )
    v1 = (int)(uintptr_t)(NCONF_default());
  result = (*(int (**)(int))(v1 + 4))(v1);
  if ( result == 0 )
  {
    ERR_put_error(14, 111, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: NCONF_free  (binary VA: 0x1a118e0)
// Original: NCONF_free
// ----------------------------------------------------------------------------
int NCONF_free(int a1)
{
  int result;

  result = a1;
  if ( a1 != 0 )
    return G4_VCALL<int>(a1, 12);
  return result;
}

// ----------------------------------------------------------------------------
// Function: NCONF_free_data  (binary VA: 0x1a11900)
// Original: NCONF_free_data
// ----------------------------------------------------------------------------
int NCONF_free_data(int a1)
{
  int result;

  result = a1;
  if ( a1 != 0 )
    return G4_VCALL<int>(a1, 16);
  return result;
}

// ----------------------------------------------------------------------------
// Function: NCONF_load  (binary VA: 0x1a11960)
// Original: NCONF_load
// ----------------------------------------------------------------------------
int NCONF_load(int a1, int a2, int a3)
{
  if ( a1 != 0 )
    return G4_VCALL<int>(a1, 36, a2, a3);
  ERR_put_error(14, 113, 105, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: NCONF_load_bio  (binary VA: 0x1a119d0)
// Original: NCONF_load_bio
// ----------------------------------------------------------------------------
int NCONF_load_bio(int a1, int a2, int a3)
{
  if ( a1 != 0 )
    return G4_VCALL<int>(a1, 20, a2, a3);
  ERR_put_error(14, 110, 105, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: NCONF_load_fp  (binary VA: 0x1a11a40)
// Original: NCONF_load_fp
// ----------------------------------------------------------------------------
int NCONF_load_fp(int a1, int a2, int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int bio;

  v3 = BIO_new_fp(a2, 0);
  v4 = v3;
  if ( v3 != nullptr )
  {
    bio = NCONF_load_bio(a1, (int)(uintptr_t)(v3), a3);
    BIO_free(v4);
  }
  else
  {
    bio = 0;
    ERR_put_error(14, 114, 7, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return bio;
}

// ----------------------------------------------------------------------------
// Function: NCONF_get_section  (binary VA: 0x1a11cb0)
// Original: NCONF_get_section
// ----------------------------------------------------------------------------
int NCONF_get_section(int a1, int a2)
{
  if ( a1 != 0 )
  {
    if ( a2 != 0 )
    {
      return CONF_get_section_values(a1, a2);
    }
    else
    {
      ERR_put_error(14, 108, 107, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
  }
  else
  {
    ERR_put_error(14, 108, 105, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: NCONF_get_string  (binary VA: 0x1a11da0)
// Original: NCONF_get_string
// ----------------------------------------------------------------------------
int NCONF_get_string(int a1, int a2, int a3)
{
  int result;

  result = CONF_get_string(a1, a2, a3);
  if ( result == 0 )
  {
    if ( a1 != 0 )
    {
      ERR_put_error(14, 109, 108, (int)(uintptr_t)(&unk_1B15112), 0);
      ERR_add_error_data(4, "group=", a2, " name=", a3);
    }
    else
    {
      ERR_put_error(14, 109, 106, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: NCONF_get_number_e  (binary VA: 0x1a11f10)
// Original: NCONF_get_number_e
// ----------------------------------------------------------------------------
int NCONF_get_number_e(int a1, int a2, int a3, uint32_t *a4)
{
  char *string;
  int result;
  int v6;
  int v7;

  if ( a4 != nullptr )
  {
    string = (char *)NCONF_get_string(a1, a2, a3);
    result = 0;
    if ( string != nullptr )
    {
      *a4 = 0;
      while ( G4_VCALL<int>(a1, 28, *string) != 0 )
      {
        v6 = *string++;
        v7 = 10 * *a4;
        *a4 = v7 + G4_VCALL<int>(a1, 32, v6);
      }
      return 1;
    }
  }
  else
  {
    ERR_put_error(14, 112, 67, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: NCONF_dump_bio  (binary VA: 0x1a12090)
// Original: NCONF_dump_bio
// ----------------------------------------------------------------------------
int NCONF_dump_bio(int a1, int a2)
{
  if ( a1 != 0 )
    return G4_VCALL<int>(a1, 24, a2);
  ERR_put_error(14, 105, 105, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: NCONF_dump_fp  (binary VA: 0x1a12100)
// Original: NCONF_dump_fp
// ----------------------------------------------------------------------------
int NCONF_dump_fp(int a1, int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  int v4;

  v2 = BIO_new_fp(a2, 0);
  v3 = v2;
  if ( v2 != nullptr )
  {
    v4 = NCONF_dump_bio(a1, (int)(uintptr_t)(v2));
    BIO_free(v3);
  }
  else
  {
    v4 = 0;
    ERR_put_error(14, 106, 7, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_1A17980  (binary VA: 0x1a17980)
// Original: sub_1A17980
// ----------------------------------------------------------------------------
int sub_1A17980(int a1, int a2, int a3)
{
  int *v3;
  int result;

  v3 = *(int **)(a1 + 20);
  if ( a2 == 4097 )
  {
    result = -2;
    if ( a3 > 255 )
    {
      *v3 = a3;
      return 1;
    }
  }
  else if ( a2 == 4098 )
  {
    v3[1] = a3;
    return 1;
  }
  else
  {
    return 3 * (a2 == 2) - 2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A179E0  (binary VA: 0x1a179e0)
// Original: sub_1A179E0
// ----------------------------------------------------------------------------
int sub_1A179E0(int a1, char *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  int parameters;
  uint32_t *v5;
  typedef uint32_t *_g4_t_v7;
  typedef uint32_t _g4_t_v8[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v8)) > _g4_s1 ? (20u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);

  v2 = nullptr;
  v3 = *(uint32_t **)(a1 + 20);
  if ( *(uint32_t *)(a1 + 28) != 0 )
  {
    evp_pkey_set_cb_translate(v8, a1);
    v2 = v8;
  }
  v7 = v2;
  parameters = 0;
  v5 = DH_new();
  if ( v5 != nullptr )
  {
    parameters = DH_generate_parameters_ex(v5, *v3, v3[1], v7);
    if ( parameters != 0 )
      EVP_PKEY_assign(a2, 0x1Cu, (int)(uintptr_t)(v5));
    else
      DH_free(v5);
  }
  return parameters;
}

// ----------------------------------------------------------------------------
// Function: sub_1A17AA0  (binary VA: 0x1a17aa0)
// Original: sub_1A17AA0
// ----------------------------------------------------------------------------
int sub_1A17AA0(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 20);
  if ( result != 0 )
    return CRYPTO_free(*(void **)(a1 + 20));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A17AD0  (binary VA: 0x1a17ad0)
// Original: sub_1A17AD0
// ----------------------------------------------------------------------------
char sub_1A17AD0(uint32_t *a1)
{
  uint32_t *v1;
  char result;

  v1 = (uint32_t *)(CRYPTO_malloc(20, (int)(uintptr_t)(&unk_1B15112), 0));
  result = 0;
  if ( v1 != nullptr )
  {
    *v1 = 1024;
    v1[1] = 2;
    v1[2] = 0;
    a1[5] = (uint32_t)(uintptr_t)(v1);
    a1[9] = 2;
    a1[8] = (uint32_t)(uintptr_t)(v1 + 3);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A17B50  (binary VA: 0x1a17b50)
// Original: sub_1A17B50
// ----------------------------------------------------------------------------
int sub_1A17B50(int a1, const char *a2, char *nptr)
{
  int result;
  int v4;
  int v5;

  if ( strcmp(a2, "dh_paramgen_prime_len") == 0 )
  {
    v5 = atoi(nptr);
    return EVP_PKEY_CTX_ctrl(a1, 28, 2, 4097, v5, 0);
  }
  else
  {
    result = -2;
    if ( strcmp(a2, "dh_paramgen_generator") == 0 )
    {
      v4 = atoi(nptr);
      return EVP_PKEY_CTX_ctrl(a1, 28, 2, 4098, v4, 0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A17C40  (binary VA: 0x1a17c40)
// Original: sub_1A17C40
// ----------------------------------------------------------------------------
int sub_1A17C40(int a1, int a2, int *a3)
{
  int v3;
  int v4;
  int result;

  v3 = *(uint32_t *)(a1 + 8);
  if ( v3 != 0 && (v4 = *(uint32_t *)(a1 + 12)) != 0 )
  {
    result = DH_compute_key(a2, *(uint32_t *)(*(uint32_t *)(v4 + 20) + 20), *(uint32_t *)(v3 + 20));
    if ( result >= 0 )
    {
      *a3 = result;
      return 1;
    }
  }
  else
  {
    ERR_put_error(5, 112, 108, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A17CD0  (binary VA: 0x1a17cd0)
// Original: sub_1A17CD0
// ----------------------------------------------------------------------------
int sub_1A17CD0(int a1, char *a2)
{
  uint32_t *v2;
  int v3;

  if ( *(uint32_t *)(a1 + 8) != 0 )
  {
    v2 = DH_new();
    v3 = 0;
    if ( v2 != nullptr )
    {
      EVP_PKEY_assign(a2, 0x1Cu, (int)(uintptr_t)(v2));
      if ( EVP_PKEY_copy_parameters(a2, *(uint32_t **)(a1 + 8)) != 0 )
        return DH_generate_key(*((uint32_t *)a2 + 5));
    }
  }
  else
  {
    v3 = 0;
    ERR_put_error(5, 113, 107, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1A17D90  (binary VA: 0x1a17d90)
// Original: sub_1A17D90
// ----------------------------------------------------------------------------
int sub_1A17D90(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  uint32_t *v5;

  LOBYTE(v2) = sub_1A17AD0(a1);
  v3 = 0;
  if ( v2 != 0 )
  {
    v4 = *(uint32_t **)(a2 + 20);
    v5 = (uint32_t *)a1[5];
    *v5 = *v4;
    v5[1] = v4[1];
    v5[2] = v4[2];
    return 1;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1A17E30  (binary VA: 0x1a17e30)
// Original: sub_1A17E30
// ----------------------------------------------------------------------------
int sub_1A17E30(int a1, char *a2, int a3, int a4, int a5)
{
  int v5;
  int v6;

  v5 = *(uint32_t *)(*(uint32_t *)(a1 + 8) + 20);
  v6 = 64;
  if ( *(uint32_t *)(*(uint32_t *)(a1 + 20) + 20) != 0 )
    v6 = EVP_MD_type(*(uint32_t *)(*(uint32_t *)(a1 + 20) + 20));
  return DSA_verify(v6, a4, a5, a2, a3, v5);
}

// ----------------------------------------------------------------------------
// Function: sub_1A17EA0  (binary VA: 0x1a17ea0)
// Original: sub_1A17EA0
// ----------------------------------------------------------------------------
int sub_1A17EA0(int a1, void *a2, uint32_t *a3, int a4, int a5)
{
  int v5;
  int v6;
  int result;
  int v8[4];

  v5 = *(uint32_t *)(*(uint32_t *)(a1 + 8) + 20);
  v6 = 64;
  if ( *(uint32_t *)(*(uint32_t *)(a1 + 20) + 20) != 0 )
    v6 = EVP_MD_type(*(uint32_t *)(*(uint32_t *)(a1 + 20) + 20));
  result = DSA_sign(v6, a4, a5, a2, v8, v5);
  if ( result > 0 )
  {
    *a3 = v8[0];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A17F20  (binary VA: 0x1a17f20)
// Original: sub_1A17F20
// ----------------------------------------------------------------------------
int sub_1A17F20(int a1, char *a2)
{
  uint32_t *v2;
  int *v3;
  int v4;
  uint32_t *v5;
  typedef int _g4_t_v7;
  typedef uint32_t _g4_t_v8[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v8)) > _g4_s1 ? (20u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);

  v2 = nullptr;
  v3 = *(int **)(a1 + 20);
  if ( *(uint32_t *)(a1 + 28) != 0 )
  {
    evp_pkey_set_cb_translate(v8, a1);
    v2 = v8;
  }
  v7 = (int)(uintptr_t)(v2);
  v4 = 0;
  v5 = DSA_new();
  if ( v5 != nullptr )
  {
    v4 = dsa_builtin_paramgen((int)(uintptr_t)(v5), *v3, v3[1], v3[2], nullptr, 0, 0, 0, v7);
    if ( v4 != 0 )
      EVP_PKEY_assign(a2, 0x74u, (int)(uintptr_t)(v5));
    else
      DSA_free(v5);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_1A18000  (binary VA: 0x1a18000)
// Original: sub_1A18000
// ----------------------------------------------------------------------------
int sub_1A18000(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 20);
  if ( result != 0 )
    return CRYPTO_free(*(void **)(a1 + 20));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A18030  (binary VA: 0x1a18030)
// Original: sub_1A18030
// ----------------------------------------------------------------------------
char sub_1A18030(uint32_t *a1)
{
  uint32_t *v1;
  char result;

  v1 = (uint32_t *)(CRYPTO_malloc(24, (int)(uintptr_t)(&unk_1B15112), 0));
  result = 0;
  if ( v1 != nullptr )
  {
    *v1 = 1024;
    v1[1] = 160;
    v1[2] = 0;
    v1[5] = 0;
    a1[5] = (uint32_t)(uintptr_t)(v1);
    a1[8] = (uint32_t)(uintptr_t)(v1 + 3);
    a1[9] = 2;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A180A0  (binary VA: 0x1a180a0)
// Original: sub_1A180A0
// ----------------------------------------------------------------------------
int sub_1A180A0(int a1, const char *a2, char *nptr)
{
  int result;
  int digestbyname;
  int v5;
  int v6;

  if ( strcmp(a2, "dsa_paramgen_bits") == 0 )
  {
    v5 = atoi(nptr);
    return EVP_PKEY_CTX_ctrl(a1, 116, 2, 4097, v5, 0);
  }
  else if ( strcmp(a2, "dsa_paramgen_q_bits") == 0 )
  {
    v6 = atoi(nptr);
    return EVP_PKEY_CTX_ctrl(a1, 116, 2, 4098, v6, 0);
  }
  else
  {
    result = -2;
    if ( strcmp(a2, "dsa_paramgen_md") == 0 )
    {
      digestbyname = EVP_get_digestbyname((int)(uintptr_t)(nptr));
      return EVP_PKEY_CTX_ctrl(a1, 116, 2, 4099, 0, digestbyname);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A181E0  (binary VA: 0x1a181e0)
// Original: sub_1A181E0
// ----------------------------------------------------------------------------
int sub_1A181E0(int a1, int a2, int a3, int a4)
{
  int *v4;
  int result;

  v4 = *(int **)(a1 + 20);
  switch ( a2 )
  {
    case 1:
      if ( EVP_MD_type(a4) != 64 && EVP_MD_type(a4) != 116 )
      {
LABEL_8:
        if ( EVP_MD_type(a4) != 675 && EVP_MD_type(a4) != 672 )
        {
          ERR_put_error(10, 120, 106, (int)(uintptr_t)(&unk_1B15112), 0);
          return 0;
        }
      }
LABEL_23:
      v4[5] = a4;
      return 1;
    case 2:
      ERR_put_error(10, 120, 150, (int)(uintptr_t)(&unk_1B15112), 0);
      return -2;
    case 5:
    case 7:
    case 11:
      return 1;
    case 4097:
      result = -2;
      if ( a3 <= 255 )
        return result;
      *v4 = a3;
      return 1;
    case 4098:
      if ( a3 == 224 || a3 == 160 || a3 == 256 || (result = -2, a3 == 0) )
      {
        v4[1] = a3;
        return 1;
      }
      return result;
    case 4099:
      if ( EVP_MD_type(a4) != 64 )
        goto LABEL_8;
      goto LABEL_23;
    default:
      return -2;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1A183A0  (binary VA: 0x1a183a0)
// Original: sub_1A183A0
// ----------------------------------------------------------------------------
int sub_1A183A0(int a1, char *a2)
{
  uint32_t *v2;
  int v3;

  if ( *(uint32_t *)(a1 + 8) != 0 )
  {
    v2 = DSA_new();
    v3 = 0;
    if ( v2 != nullptr )
    {
      EVP_PKEY_assign(a2, 0x74u, (int)(uintptr_t)(v2));
      if ( EVP_PKEY_copy_parameters(a2, *(uint32_t **)(a1 + 8)) != 0 )
        return DSA_generate_key(*((uint32_t *)a2 + 5));
    }
  }
  else
  {
    v3 = 0;
    ERR_put_error(10, 121, 107, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1A18460  (binary VA: 0x1a18460)
// Original: sub_1A18460
// ----------------------------------------------------------------------------
int sub_1A18460(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  uint32_t *v5;

  LOBYTE(v2) = sub_1A18030(a1);
  v3 = 0;
  if ( v2 != 0 )
  {
    v4 = *(uint32_t **)(a2 + 20);
    v5 = (uint32_t *)a1[5];
    *v5 = *v4;
    v5[1] = v4[1];
    v5[2] = v4[2];
    v5[5] = v4[5];
    return 1;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1A184B0  (binary VA: 0x1a184b0)
// Original: sub_1A184B0
// ----------------------------------------------------------------------------
void * sub_1A184B0(char *name)
{
  void *v1;
  void *v2;

  v1 = nullptr;
  v2 = dlopen(nullptr, 1);
  if ( v2 != nullptr )
  {
    v1 = dlsym(v2, name);
    dlclose(v2);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A18520  (binary VA: 0x1a18520)
// Original: sub_1A18520
// ----------------------------------------------------------------------------
int sub_1A18520(int a1)
{
  char *file;
  char *v2;
  void *v3;
  void *v4;
  char *v6;

  file = DSO_convert_filename(a1, nullptr);
  v2 = file;
  if ( file != nullptr )
  {
    v3 = dlopen(file, 0);
    v4 = v3;
    if ( v3 != nullptr )
    {
      if ( sk_push(*(int **)(a1 + 4), (int)(uintptr_t)(v3)) != 0 )
      {
        *(uint32_t *)(a1 + 36) = (uint32_t)(uintptr_t)(v2);
        return 1;
      }
      ERR_put_error(37, 102, 105, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    else
    {
      ERR_put_error(37, 102, 103, (int)(uintptr_t)(&unk_1B15112), 0);
      v6 = dlerror();
      ERR_add_error_data(4, "filename(", v2, "): ", v6);
    }
    CRYPTO_free(v2);
    if ( v4 != nullptr )
      dlclose(v4);
    return 0;
  }
  else
  {
    ERR_put_error(37, 102, 111, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1A186A0  (binary VA: 0x1a186a0)
// Original: sub_1A186A0
// ----------------------------------------------------------------------------
int sub_1A186A0(int (*a1)(int, void *dest, int), void *dest, int a3)
{
  int (*v3)(int, void *, int);
  char *src;
  signed int v5;
  size_t n;
  char *v8;
  typedef char *_g4_t_s;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_s)) > _g4_s0 ? (0u + sizeof(_g4_t_s)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 0u);

  v3 = a1;
  if ( a1 == nullptr )
    v3 = (int (*)(int, void *, int))(uintptr_t)(sub_1A186A0);
  if ( dladdr((const void *)v3, (Dl_info *)&s) != 0 )
  {
    src = s;
    v5 = strlen(s);
    if ( a3 <= 0 )
    {
      return v5 + 1;
    }
    else
    {
      n = v5;
      if ( v5 >= a3 )
        n = a3 - 1;
      memcpy(dest, src, n);
      *((uint8_t *)dest + n) = 0;
      return n + 1;
    }
  }
  else
  {
    v8 = dlerror();
    ERR_add_error_data(4, "dlfcn_pathbyaddr(): ", v8);
    return -1;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1A18770  (binary VA: 0x1a18770)
// Original: sub_1A18770
// ----------------------------------------------------------------------------
char * sub_1A18770(int a1, char *src, char *s)
{
  size_t v3;
  char *v4;
  char *v5;
  size_t v7;
  char *v8;
  size_t v9;
  char *v10;
  size_t v11;

  if ( s == nullptr )
  {
    if ( src == nullptr )
    {
      v5 = nullptr;
      ERR_put_error(37, 130, 67, (int)(uintptr_t)(&unk_1B15112), 0);
      return v5;
    }
LABEL_10:
    v7 = strlen(src);
    v8 = (char *)(CRYPTO_malloc(v7 + 1, (int)(uintptr_t)(&unk_1B15112), 0));
    v5 = v8;
    if ( v8 != nullptr )
    {
      strcpy(v8, src);
      return v5;
    }
LABEL_16:
    ERR_put_error(37, 130, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return v5;
  }
  if ( src != nullptr && *src == 47 )
    goto LABEL_10;
  if ( src == nullptr )
  {
    v9 = strlen(s);
    v10 = (char *)(CRYPTO_malloc(v9 + 1, (int)(uintptr_t)(&unk_1B15112), 0));
    v5 = v10;
    if ( v10 != nullptr )
    {
      strcpy(v10, s);
      return v5;
    }
    goto LABEL_16;
  }
  v11 = strlen(s);
  v3 = v11 + strlen(src);
  if ( s[v11 - 1] == 47 )
  {
    --v3;
    --v11;
  }
  v4 = (char *)(CRYPTO_malloc(v3 + 2, (int)(uintptr_t)(&unk_1B15112), 0));
  v5 = v4;
  if ( v4 == nullptr )
    goto LABEL_16;
  strcpy(v4, s);
  v5[v11] = 47;
  strcpy(&v5[v11 + 1], src);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_1A189B0  (binary VA: 0x1a189b0)
// Original: sub_1A189B0
// ----------------------------------------------------------------------------
char * sub_1A189B0(int a1, char *src)
{
  size_t v2;
  char *v3;
  int v4;
  char *s;
  char v7;
  int v8;
  bool v9;

  v2 = strlen(src);
  v3 = strchr(src, 47);
  v9 = v3 == nullptr;
  if ( v3 != nullptr )
  {
    v4 = v2 + 1;
  }
  else
  {
    v7 = DSO_flags(a1);
    v4 = v2 + 4;
    v8 = v2 + 7;
    if ( (v7 & 2) == 0 )
      v4 = v8;
  }
  s = (char *)(CRYPTO_malloc(v4, (int)(uintptr_t)(&unk_1B15112), 0));
  if ( s != nullptr )
  {
    if ( v9 )
    {
      if ( (DSO_flags(a1) & 2) != 0 )
        sprintf(s, "%s.so", src);
      else
        sprintf(s, "lib%s.so", src);
    }
    else
    {
      strcpy(s, src);
    }
  }
  else
  {
    ERR_put_error(37, 123, 109, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return s;
}

// ----------------------------------------------------------------------------
// Function: sub_1A18AE0  (binary VA: 0x1a18ae0)
// Original: sub_1A18AE0
// ----------------------------------------------------------------------------
void * sub_1A18AE0(int a1, char *name)
{
  int v2;
  void *handle;
  void *result;
  char *v5;

  if ( name != nullptr && a1 != 0 )
  {
    if ( sk_num(*(uint32_t *)(a1 + 4)) <= 0 )
    {
      ERR_put_error(37, 100, 105, (int)(uintptr_t)(&unk_1B15112), 0);
      return nullptr;
    }
    else
    {
      v2 = sk_num(*(uint32_t *)(a1 + 4));
      handle = (void *)sk_value(*(int **)(a1 + 4), v2 - 1);
      if ( handle != nullptr )
      {
        result = dlsym(handle, name);
        if ( result == nullptr )
        {
          ERR_put_error(37, 100, 106, (int)(uintptr_t)(&unk_1B15112), 0);
          v5 = dlerror();
          ERR_add_error_data(4, "symname(", name, "): ", v5);
          return nullptr;
        }
      }
      else
      {
        ERR_put_error(37, 100, 104, (int)(uintptr_t)(&unk_1B15112), 0);
        return nullptr;
      }
    }
  }
  else
  {
    ERR_put_error(37, 100, 67, (int)(uintptr_t)(&unk_1B15112), 0);
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A18C70  (binary VA: 0x1a18c70)
// Original: sub_1A18C70
// ----------------------------------------------------------------------------
void * sub_1A18C70(int a1, char *name)
{
  int v2;
  void *handle;
  void *v4;
  char *v6;

  if ( name != nullptr && a1 != 0 )
  {
    if ( sk_num(*(uint32_t *)(a1 + 4)) <= 0 )
    {
      v4 = nullptr;
      ERR_put_error(37, 101, 105, (int)(uintptr_t)(&unk_1B15112), 0);
    }
    else
    {
      v2 = sk_num(*(uint32_t *)(a1 + 4));
      handle = (void *)sk_value(*(int **)(a1 + 4), v2 - 1);
      if ( handle != nullptr )
      {
        v4 = dlsym(handle, name);
        if ( v4 == nullptr )
        {
          ERR_put_error(37, 101, 106, (int)(uintptr_t)(&unk_1B15112), 0);
          v6 = dlerror();
          ERR_add_error_data(4, "symname(", name, "): ", v6);
        }
      }
      else
      {
        v4 = nullptr;
        ERR_put_error(37, 101, 104, (int)(uintptr_t)(&unk_1B15112), 0);
      }
    }
  }
  else
  {
    v4 = nullptr;
    ERR_put_error(37, 101, 67, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_1A18E10  (binary VA: 0x1a18e10)
// Original: sub_1A18E10
// ----------------------------------------------------------------------------
int sub_1A18E10(int a1)
{
  int v1;
  void *handle;

  if ( a1 != 0 )
  {
    v1 = 1;
    if ( sk_num(*(uint32_t *)(a1 + 4)) > 0 )
    {
      handle = (void *)sk_pop(*(int **)(a1 + 4));
      if ( handle != nullptr )
      {
        dlclose(handle);
      }
      else
      {
        ERR_put_error(37, 103, 104, (int)(uintptr_t)(&unk_1B15112), 0);
        LOWORD(v1) = 0;
        sk_push(*(int **)(a1 + 4), 0);
      }
    }
  }
  else
  {
    v1 = 0;
    ERR_put_error(37, 103, 67, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: DSO_METHOD_dlfcn  (binary VA: 0x1a18f00)
// Original: DSO_METHOD_dlfcn
// ----------------------------------------------------------------------------
char ** DSO_METHOD_dlfcn()
{
  return (char **)(&off_20CEC40);
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_is_at_infinity  (binary VA: 0x1a18f80)
// Original: ec_GF2m_simple_is_at_infinity
// ----------------------------------------------------------------------------
bool ec_GF2m_simple_is_at_infinity(int a1, int a2)
{
  return *(uint32_t *)(a2 + 48) == 0;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_points_make_affine  (binary VA: 0x1a18f90)
// Original: ec_GF2m_simple_points_make_affine
// ----------------------------------------------------------------------------
int ec_GF2m_simple_points_make_affine(int a1, int a2, int a3, int a4)
{
  int result;
  int i;

  result = 1;
  if ( a2 != 0 )
  {
    for ( i = 0; i != a2; ++i )
    {
      if ( G4_VCALL<int>(a1, 108, *(uint32_t *)(a3 + 4 * i), a4) == 0 )
        return 0;
    }
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_field_div  (binary VA: 0x1a18ff0)
// Original: ec_GF2m_simple_field_div
// ----------------------------------------------------------------------------
int ec_GF2m_simple_field_div(int a1, int a2, int a3, int a4, int a5)
{
  return BN_GF2m_mod_div(a2, a3, a4, a1 + 72, a5);
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_field_sqr  (binary VA: 0x1a19040)
// Original: ec_GF2m_simple_field_sqr
// ----------------------------------------------------------------------------
int ec_GF2m_simple_field_sqr(int a1, int a2, int a3, int a4)
{
  return BN_GF2m_mod_sqr_arr(a2, a3, a1 + 92, a4);
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_field_mul  (binary VA: 0x1a19080)
// Original: ec_GF2m_simple_field_mul
// ----------------------------------------------------------------------------
int ec_GF2m_simple_field_mul(int a1, int a2, int a3, int a4, int a5)
{
  return BN_GF2m_mod_mul_arr(a2, a3, a4, a1 + 92, a5);
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_group_get_curve  (binary VA: 0x1a190d0)
// Original: ec_GF2m_simple_group_get_curve
// ----------------------------------------------------------------------------
bool ec_GF2m_simple_group_get_curve(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  uint32_t *v4;
  int v5;
  uint32_t *v6;

  if ( a2 == nullptr || (v4 = BN_copy(a2, a1 + 18), v5 = 0, v4 != nullptr) )
  {
    if ( a3 == nullptr || (v6 = BN_copy(a3, a1 + 29), v5 = 0, v6 != nullptr) )
    {
      v5 = 1;
      if ( a4 != nullptr )
        return BN_copy(a4, a1 + 34) != nullptr;
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_point_set_to_infinity  (binary VA: 0x1a19170)
// Original: ec_GF2m_simple_point_set_to_infinity
// ----------------------------------------------------------------------------
int ec_GF2m_simple_point_set_to_infinity(int a1, int a2)
{
  *(uint32_t *)(a2 + 64) = 0;
  BN_set_word((uint32_t *)(a2 + 44), 0);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_oct2point  (binary VA: 0x1a191b0)
// Original: ec_GF2m_simple_oct2point
// ----------------------------------------------------------------------------
int ec_GF2m_simple_oct2point(uint32_t *a1, uint32_t *a2, uint8_t *a3, int a4, int *a5)
{
  int v5;
  int v6;
  int v7;
  int degree;
  int v10;
  bool v11;
  int v12;
  uint8_t *v13;
  int v14;
  int v15;
  void **v16;
  int v17;
  uint8_t *v18;
  int v19;
  int v20;
  void **v21;
  void **v22;
  int *v23;
  void **v24;

  v5 = a4;
  if ( a4 == 0 )
  {
    ERR_put_error(16, 160, 100, (int)(uintptr_t)(&unk_1B15112), 0);
    return v5;
  }
  v6 = *a3 & 0xFE;
  if ( v6 != 2 && (*a3 & 0xFE) != 0 && v6 != 6 && v6 != 4 )
    goto LABEL_7;
  v7 = *a3 & 1;
  if ( v6 == 4 || (*a3 & 0xFE) == 0 )
  {
    if ( (*a3 & 1) != 0 )
    {
LABEL_7:
      v5 = 0;
      ERR_put_error(16, 160, 102, (int)(uintptr_t)(&unk_1B15112), 0);
      return v5;
    }
    if ( (*a3 & 0xFE) == 0 )
    {
      if ( a4 == 1 )
        return EC_POINT_set_to_infinity((int)(uintptr_t)(a1), a2);
      goto LABEL_7;
    }
  }
  degree = EC_GROUP_get_degree((int)(uintptr_t)(a1));
  v10 = degree + 14;
  v11 = degree + 7 < 0;
  v12 = degree + 7;
  v13 = a3;
  if ( !v11 )
    v10 = v12;
  v14 = v10 >> 3;
  v15 = v14 + 1;
  if ( v6 != 2 )
    v15 = 2 * v14 + 1;
  if ( v15 != a4 )
    goto LABEL_7;
  v21 = nullptr;
  if ( a5 == nullptr )
  {
    v20 = v14;
    v16 = (void **)BN_CTX_new();
    v5 = 0;
    v21 = v16;
    v14 = v20;
    v13 = a3;
    if ( v16 == nullptr )
      return v5;
    a5 = (int *)v16;
  }
  v19 = v14;
  v18 = v13;
  BN_CTX_start((int)(uintptr_t)(a5));
  v5 = 0;
  v22 = (void **)BN_CTX_get(a5);
  v24 = (void **)BN_CTX_get(a5);
  v23 = (int *)BN_CTX_get(a5);
  if ( v23 == nullptr || BN_bin2bn(v18 + 1, v19, v22) == nullptr )
    goto LABEL_24;
  if ( BN_ucmp(v22, a1 + 18) >= 0 )
    goto LABEL_23;
  if ( v6 == 2 )
  {
    if ( EC_POINT_set_compressed_coordinates_GF2m((int)(uintptr_t)(a1), a2, (int)(uintptr_t)(v22), v7, (int)(uintptr_t)(a5)) != 0 )
    {
LABEL_33:
      v5 = 1;
      if ( EC_POINT_is_on_curve((int)(uintptr_t)(a1), a2, (int)(uintptr_t)(a5)) == 0 )
      {
        LOWORD(v5) = 0;
        ERR_put_error(16, 160, 107, (int)(uintptr_t)(&unk_1B15112), 0);
      }
    }
  }
  else
  {
    if ( BN_bin2bn(&v18[v19 + 1], v19, v24) == nullptr )
      goto LABEL_24;
    if ( BN_ucmp(v24, a1 + 18) >= 0 )
    {
LABEL_23:
      ERR_put_error(16, 160, 102, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_24;
    }
    if ( v6 != 6 )
      goto LABEL_32;
    if ( G4_VCALL<int>(a1, 136, v23, v24, v22, a5) == 0 )
      goto LABEL_24;
    v17 = 0;
    if ( v23[1] > 0 )
      v17 = (*(uint8_t *)*v23 & 1) != 0;
    if ( v17 == v7 )
    {
LABEL_32:
      v5 = 0;
      if ( EC_POINT_set_affine_coordinates_GF2m((int)(uintptr_t)(a1), a2, (int)(uintptr_t)(v22), (int)(uintptr_t)(v24), (int)(uintptr_t)(a5)) != 0 )
        goto LABEL_33;
    }
    else
    {
      v5 = 0;
      ERR_put_error(16, 160, 102, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
LABEL_24:
  BN_CTX_end(a5);
  if ( v21 != nullptr )
    BN_CTX_free(v21);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_group_get_degree  (binary VA: 0x1a195e0)
// Original: ec_GF2m_simple_group_get_degree
// ----------------------------------------------------------------------------
int ec_GF2m_simple_group_get_degree(int a1)
{
  return BN_num_bits((uint32_t *)(a1 + 72)) - 1;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_point2oct  (binary VA: 0x1a19610)
// Original: ec_GF2m_simple_point2oct
// ----------------------------------------------------------------------------
unsigned int ec_GF2m_simple_point2oct(int a1, uint32_t *a2, int a3, uint8_t *a4, unsigned int a5, int *a6)
{
  unsigned int v6;
  int degree;
  int v9;
  int v10;
  int v11;
  int affine_coordinates_GF2m;
  int v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  uint8_t *v19;
  int v20;
  void **v21;
  int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  uint8_t *v28;
  unsigned int v29;
  int *v30;
  int v31;
  unsigned int v32;
  int v33;
  void **v34;
  unsigned int v35;
  unsigned int v36;
  uint32_t *v37;
  uint8_t *v38;

  if ( a3 != 4 && a3 != 2 && a3 != 6 )
  {
    v6 = 0;
    ERR_put_error(16, 161, 104, (int)(uintptr_t)(&unk_1B15112), 0);
    return v6;
  }
  if ( EC_POINT_is_at_infinity(a1, a2) != 0 )
  {
    v6 = 1;
    if ( a4 != nullptr )
    {
      if ( a5 != 0 )
      {
        *a4 = 0;
      }
      else
      {
        LOWORD(v6) = 0;
        ERR_put_error(16, 161, 100, (int)(uintptr_t)(&unk_1B15112), 0);
      }
    }
    return v6;
  }
  degree = EC_GROUP_get_degree(a1);
  v9 = degree + 14;
  v10 = degree + 7;
  if ( v10 >= 0 )
    v9 = v10;
  v11 = v9 >> 3;
  v6 = v11 + 1;
  if ( a3 != 2 )
    v6 = 2 * v11 + 1;
  if ( a4 != nullptr )
  {
    if ( v6 > a5 )
    {
      v6 = 0;
      ERR_put_error(16, 161, 100, (int)(uintptr_t)(&unk_1B15112), 0);
      return v6;
    }
    v34 = nullptr;
    if ( a6 == nullptr )
    {
      v33 = v11;
      v21 = (void **)BN_CTX_new();
      v34 = v21;
      v11 = v33;
      if ( v21 == nullptr )
        return 0;
      a6 = (int *)v21;
    }
    v31 = v11;
    BN_CTX_start((int)(uintptr_t)(a6));
    v37 = (uint32_t *)(BN_CTX_get(a6));
    v38 = BN_CTX_get(a6);
    v30 = (int *)BN_CTX_get(a6);
    if ( v30 != nullptr )
    {
      affine_coordinates_GF2m = EC_POINT_get_affine_coordinates_GF2m(a1, a2, (int)(uintptr_t)(v37), (int)(uintptr_t)(v38), (int)(uintptr_t)(a6));
      v13 = v31;
      if ( affine_coordinates_GF2m != 0 )
      {
        *a4 = a3;
        if ( a3 == 4 || v37[1] == 0 )
          goto LABEL_21;
        v22 = G4_VCALL<int>(a1, 136, v30, v38, v37, a6);
        v13 = v31;
        if ( v22 != 0 )
        {
          if ( v30[1] > 0 && (*(uint8_t *)*v30 & 1) != 0 )
            ++*a4;
LABEL_21:
          v32 = v13;
          v14 = BN_num_bits(v37);
          v15 = v14 + 14;
          v16 = v14 + 7;
          if ( v16 < 0 )
            v16 = v15;
          v17 = v16 >> 3;
          v18 = v32 - v17;
          v35 = v32 - v17;
          if ( v32 >= v17 )
          {
            v19 = a4;
            if ( v18 != 0 )
            {
              do
              {
                --v18;
                *++v19 = 0;
              }
              while ( v18 != 0 );
              v20 = v35 + 1;
            }
            else
            {
              v20 = 1;
            }
            v36 = v32 + 1;
            if ( v32 + 1 == v20 + BN_bn2bin(v37, &a4[v20]) )
            {
              if ( a3 != 6 && a3 != 4 )
                goto LABEL_30;
              v23 = BN_num_bits(v38);
              v24 = v23 + 14;
              v25 = v23 + 7;
              if ( v25 < 0 )
                v25 = v24;
              v26 = v25 >> 3;
              v27 = v32 - v26;
              if ( v32 >= v26 )
              {
                v28 = &a4[v32];
                v29 = v32 - v26;
                if ( v27 != 0 )
                {
                  do
                  {
                    --v29;
                    *++v28 = 0;
                  }
                  while ( v29 != 0 );
                  v36 += v27;
                }
                v36 += BN_bn2bin(v38, &a4[v36]);
LABEL_30:
                if ( v36 == v6 )
                {
                  BN_CTX_end(a6);
                  if ( v34 != nullptr )
                    BN_CTX_free(v34);
                  return v6;
                }
              }
            }
          }
          ERR_put_error(16, 161, 68, (int)(uintptr_t)(&unk_1B15112), 0);
        }
      }
    }
    BN_CTX_end(a6);
    if ( v34 != nullptr )
    {
      v6 = 0;
      BN_CTX_free(v34);
      return v6;
    }
    return 0;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_group_check_discriminant  (binary VA: 0x1a19a50)
// Original: ec_GF2m_simple_group_check_discriminant
// ----------------------------------------------------------------------------
bool ec_GF2m_simple_group_check_discriminant(int a1, int *a2)
{
  int *v2;
  void **v3;
  uint8_t *v4;
  uint8_t *v5;
  bool v7;

  v2 = a2;
  v3 = nullptr;
  if ( a2 != nullptr || (v3 = (void **)BN_CTX_new(), v2 = (int *)v3, v3 != nullptr) )
  {
    BN_CTX_start((int)(uintptr_t)(v2));
    v4 = BN_CTX_get(v2);
    v5 = v4;
    v7 = false;
    if ( v4 != nullptr && BN_GF2m_mod_arr(v4, a1 + 136, a1 + 92) != 0 )
      v7 = *((uint32_t *)v5 + 1) != 0;
    BN_CTX_end(v2);
    if ( v3 != nullptr )
      BN_CTX_free(v3);
  }
  else
  {
    ERR_put_error(16, 159, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    return false;
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_set_compressed_coordinates  (binary VA: 0x1a19b50)
// Original: ec_GF2m_simple_set_compressed_coordinates
// ----------------------------------------------------------------------------
bool ec_GF2m_simple_set_compressed_coordinates(int a1, uint32_t *a2, int a3, int a4, int *a5)
{
  int *v5;
  void **v6;
  uint8_t *v7;
  int *v8;
  bool v10;
  void **v11;
  unsigned int error;
  int *v13;
  int *v14;
  bool v15;
  bool v16;
  int v17;
  uint8_t *v18;
  uint8_t *v19;

  v5 = a5;
  v6 = nullptr;
  ERR_clear_error();
  if ( a5 == nullptr )
  {
    v11 = (void **)BN_CTX_new();
    v6 = v11;
    v16 = false;
    if ( v11 == nullptr )
      return v16;
    v5 = (int *)v11;
  }
  BN_CTX_start((int)(uintptr_t)(v5));
  v18 = BN_CTX_get(v5);
  v7 = BN_CTX_get(v5);
  v19 = BN_CTX_get(v5);
  v8 = (int *)BN_CTX_get(v5);
  v16 = false;
  if ( v8 != nullptr )
  {
    v14 = v8;
    v17 = a1 + 92;
    if ( BN_GF2m_mod_arr(v7, a3, a1 + 92) != 0 )
    {
      if ( *((uint32_t *)v7 + 1) != 0 )
      {
        if ( G4_VCALL<int>(a1, 132, v18, v7, v5) == 0
          || G4_VCALL<int>(a1, 136, v18, a1 + 136, v18, v5) == 0
          || BN_GF2m_add(v18, a1 + 116, v18) == 0
          || BN_GF2m_add(v18, v7, v18) == 0 )
        {
          goto LABEL_4;
        }
        if ( BN_GF2m_mod_solve_quad_arr(v14, v18, v17, v5) == 0 )
        {
          error = ERR_peek_last_error();
          if ( HIBYTE(error) == 3 && (error & 0xFFF) == 0x74 )
          {
            ERR_clear_error();
            ERR_put_error(16, 164, 110, (int)(uintptr_t)(&unk_1B15112), 0);
            v16 = false;
          }
          else
          {
            ERR_put_error(16, 164, 3, (int)(uintptr_t)(&unk_1B15112), 0);
            v16 = false;
          }
          goto LABEL_4;
        }
        v10 = false;
        if ( v14[1] > 0 )
          v10 = (*(uint8_t *)*v14 & 1) != 0;
        v13 = v14;
        v15 = v10;
        v16 = false;
        if ( G4_VCALL<int>(a1, 128, v19, v7, v13, v5) == 0
          || v15 != (a4 != 0) && BN_GF2m_add(v19, v19, v7) == 0 )
        {
          goto LABEL_4;
        }
      }
      else if ( BN_GF2m_mod_sqrt_arr(v19, a1 + 136, v17, v5) == 0 )
      {
        goto LABEL_4;
      }
      v16 = EC_POINT_set_affine_coordinates_GF2m(a1, a2, (int)(uintptr_t)(v7), (int)(uintptr_t)(v19), (int)(uintptr_t)(v5)) != 0;
    }
  }
LABEL_4:
  BN_CTX_end(v5);
  if ( v6 != nullptr )
    BN_CTX_free(v6);
  return v16;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_point_clear_finish  (binary VA: 0x1a19eb0)
// Original: ec_GF2m_simple_point_clear_finish
// ----------------------------------------------------------------------------
void * ec_GF2m_simple_point_clear_finish(int a1)
{
  void *result;

  BN_clear_free((uint8_t **)(a1 + 4));
  BN_clear_free((uint8_t **)(a1 + 24));
  result = BN_clear_free((uint8_t **)(a1 + 44));
  *(uint32_t *)(a1 + 64) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_group_clear_finish  (binary VA: 0x1a19f00)
// Original: ec_GF2m_simple_group_clear_finish
// ----------------------------------------------------------------------------
void * ec_GF2m_simple_group_clear_finish(int a1)
{
  void *result;

  BN_clear_free((uint8_t **)(a1 + 72));
  BN_clear_free((uint8_t **)(a1 + 116));
  result = BN_clear_free((uint8_t **)(a1 + 136));
  *(uint32_t *)(a1 + 92) = 0;
  *(uint32_t *)(a1 + 96) = 0;
  *(uint32_t *)(a1 + 100) = 0;
  *(uint32_t *)(a1 + 104) = 0;
  *(uint32_t *)(a1 + 108) = 0;
  *(uint32_t *)(a1 + 112) = -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_point_finish  (binary VA: 0x1a19f80)
// Original: ec_GF2m_simple_point_finish
// ----------------------------------------------------------------------------
void ec_GF2m_simple_point_finish(void **a1)
{
  BN_free(a1 + 1);
  BN_free(a1 + 6);
  BN_free(a1 + 11);
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_group_finish  (binary VA: 0x1a19fd0)
// Original: ec_GF2m_simple_group_finish
// ----------------------------------------------------------------------------
void ec_GF2m_simple_group_finish(void **a1)
{
  BN_free(a1 + 18);
  BN_free(a1 + 29);
  BN_free(a1 + 34);
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_point_init  (binary VA: 0x1a1a020)
// Original: ec_GF2m_simple_point_init
// ----------------------------------------------------------------------------
int ec_GF2m_simple_point_init(uint32_t *a1)
{
  BN_init(a1 + 1);
  BN_init(a1 + 6);
  BN_init(a1 + 11);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_group_init  (binary VA: 0x1a1a070)
// Original: ec_GF2m_simple_group_init
// ----------------------------------------------------------------------------
int ec_GF2m_simple_group_init(uint32_t *a1)
{
  BN_init(a1 + 18);
  BN_init(a1 + 29);
  BN_init(a1 + 34);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_point_copy  (binary VA: 0x1a1a0d0)
// Original: ec_GF2m_simple_point_copy
// ----------------------------------------------------------------------------
int ec_GF2m_simple_point_copy(uint32_t *a1, uint32_t *a2)
{
  int v2;

  v2 = 0;
  if ( BN_copy(a1 + 1, a2 + 1) != nullptr && BN_copy(a1 + 6, a2 + 6) != nullptr && BN_copy(a1 + 11, a2 + 11) != nullptr )
  {
    LOWORD(v2) = 1;
    a1[16] = a2[16];
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_make_affine  (binary VA: 0x1a1a160)
// Original: ec_GF2m_simple_make_affine
// ----------------------------------------------------------------------------
bool ec_GF2m_simple_make_affine(int a1, uint32_t *a2, int *a3)
{
  int *v3;
  bool v4;
  uint8_t *v6;
  int *v7;
  uint32_t *v8;
  void **v9;
  uint8_t *v10;

  v3 = a3;
  v4 = true;
  if ( a2[16] == 0 && EC_POINT_is_at_infinity(a1, a2) == 0 )
  {
    v9 = nullptr;
    if ( a3 == nullptr )
    {
      v7 = (int *)(BN_CTX_new());
      LOWORD(v4) = 0;
      v3 = v7;
      if ( v7 == nullptr )
        return v4;
      v9 = (void **)v7;
    }
    v4 = false;
    BN_CTX_start((int)(uintptr_t)(v3));
    v10 = BN_CTX_get(v3);
    v6 = BN_CTX_get(v3);
    if ( v6 != nullptr )
    {
      v8 = (uint32_t *)(v6);
      if ( EC_POINT_get_affine_coordinates_GF2m(a1, a2, (int)(uintptr_t)(v10), (int)(uintptr_t)(v6), (int)(uintptr_t)(v3)) != 0
        && BN_copy(a2 + 1, v10) != nullptr
        && BN_copy(a2 + 6, v8) != nullptr )
      {
        v4 = BN_set_word(a2 + 11, 1) != 0;
      }
    }
    BN_CTX_end(v3);
    if ( v9 != nullptr )
      BN_CTX_free(v9);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_cmp  (binary VA: 0x1a1a2c0)
// Original: ec_GF2m_simple_cmp
// ----------------------------------------------------------------------------
int ec_GF2m_simple_cmp(int a1, uint32_t *a2, uint32_t *a3, int *a4)
{
  int *v4;
  int v5;
  int v6;
  uint8_t *v7;
  int v8;
  int affine_coordinates_GF2m;
  int v11;
  int v12;
  int v13;
  void **v14;
  int v15;
  uint32_t *v16;
  void **v17;
  int *v18;
  int *v19;
  uint8_t *v20;

  v4 = a4;
  if ( EC_POINT_is_at_infinity(a1, a2) != 0 )
    return EC_POINT_is_at_infinity(a1, a3) == 0;
  v5 = EC_POINT_is_at_infinity(a1, a3);
  v6 = 1;
  if ( v5 == 0 )
  {
    if ( a2[16] != 0 && a3[16] != 0 )
    {
      v11 = BN_cmp(a2 + 1, a3 + 1);
      v6 = 1;
      if ( v11 == 0 )
        return BN_cmp(a2 + 6, a3 + 6) != 0;
    }
    else
    {
      v17 = nullptr;
      if ( a4 == nullptr )
      {
        v14 = (void **)BN_CTX_new();
        v17 = v14;
        if ( v14 == nullptr )
          return -1;
        v4 = (int *)v14;
      }
      BN_CTX_start((int)(uintptr_t)(v4));
      v18 = (int *)BN_CTX_get(v4);
      v19 = (int *)BN_CTX_get(v4);
      v20 = BN_CTX_get(v4);
      v7 = BN_CTX_get(v4);
      v8 = -1;
      if ( v7 != nullptr )
      {
        v16 = (uint32_t *)(v7);
        affine_coordinates_GF2m = EC_POINT_get_affine_coordinates_GF2m(a1, a2, (int)(uintptr_t)(v18), (int)(uintptr_t)(v19), (int)(uintptr_t)(v4));
        v8 = -1;
        if ( affine_coordinates_GF2m != 0 )
        {
          v12 = EC_POINT_get_affine_coordinates_GF2m(a1, a3, (int)(uintptr_t)(v20), (int)(uintptr_t)(v16), (int)(uintptr_t)(v4));
          v8 = -1;
          if ( v12 != 0 )
          {
            v13 = BN_cmp(v18, v20);
            v8 = 1;
            if ( v13 == 0 )
              v8 = BN_cmp(v19, v16) != 0;
          }
        }
      }
      v15 = v8;
      BN_CTX_end(v4);
      v6 = v15;
      if ( v17 != nullptr )
      {
        BN_CTX_free(v17);
        return v15;
      }
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_is_on_curve  (binary VA: 0x1a1a4e0)
// Original: ec_GF2m_simple_is_on_curve
// ----------------------------------------------------------------------------
int ec_GF2m_simple_is_on_curve(int a1, uint32_t *a2, int *a3)
{
  int *v3;
  int v4;
  uint8_t *v5;
  int *v7;
  uint8_t *v8;
  void **v9;
  int (*v10)(int, uint8_t *, uint8_t *, uint32_t *, int *);
  int (*v11)(int, uint8_t *, uint32_t *, int *);
  uint32_t *v12;
  uint8_t *v13;

  v3 = a3;
  v4 = 1;
  if ( EC_POINT_is_at_infinity(a1, a2) == 0 )
  {
    v9 = nullptr;
    v4 = -1;
    v10 = *(int (**)(int, uint8_t *, uint8_t *, uint32_t *, int *))(*(uint32_t *)a1 + 128);
    v11 = *(int (**)(int, uint8_t *, uint32_t *, int *))(*(uint32_t *)a1 + 132);
    if ( a2[16] != 0 )
    {
      if ( a3 == nullptr )
      {
        v7 = (int *)(BN_CTX_new());
        v3 = v7;
        if ( v7 == nullptr )
          return v4;
        v9 = (void **)v7;
      }
      v4 = -1;
      BN_CTX_start((int)(uintptr_t)(v3));
      v13 = BN_CTX_get(v3);
      v5 = BN_CTX_get(v3);
      if ( v5 != nullptr )
      {
        v8 = v5;
        v12 = a2 + 1;
        if ( BN_GF2m_add(v5, a2 + 1, a1 + 116) != 0
          && v10(a1, v8, v8, v12, v3) != 0
          && BN_GF2m_add(v8, v8, a2 + 6) != 0
          && v10(a1, v8, v8, v12, v3) != 0
          && BN_GF2m_add(v8, v8, a1 + 136) != 0
          && v11(a1, v13, a2 + 6, v3) != 0
          && BN_GF2m_add(v8, v8, v13) != 0 )
        {
          v4 = *((uint32_t *)v8 + 1) == 0;
        }
      }
    }
    if ( v3 != nullptr )
      BN_CTX_end(v3);
    if ( v9 != nullptr )
      BN_CTX_free(v9);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_invert  (binary VA: 0x1a1a6f0)
// Original: ec_GF2m_simple_invert
// ----------------------------------------------------------------------------
int ec_GF2m_simple_invert(int a1, uint32_t *a2, int a3)
{
  int v3;
  int v4;
  int affine;

  v3 = EC_POINT_is_at_infinity(a1, a2);
  v4 = 1;
  if ( v3 == 0 && a2[7] != 0 )
  {
    affine = EC_POINT_make_affine(a1, a2, a3);
    v4 = 0;
    if ( affine != 0 )
      return BN_GF2m_add(a2 + 6, a2 + 1, a2 + 6);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_add  (binary VA: 0x1a1a780)
// Original: ec_GF2m_simple_add
// ----------------------------------------------------------------------------
bool ec_GF2m_simple_add(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int *a5)
{
  int *v5;
  int v6;
  uint8_t *v7;
  int *v9;
  uint32_t *v10;
  bool v11;
  void **v12;
  uint8_t *v13;
  uint8_t *v14;
  uint32_t *v15;
  uint8_t *v16;
  uint8_t *v17;
  uint8_t *v18;
  uint8_t *v19;
  uint8_t *v20;

  v5 = a5;
  v6 = EC_POINT_is_at_infinity(a1, a3);
  v10 = a4;
  if ( v6 != 0 )
    return EC_POINT_copy(a2, v10) != 0;
  if ( EC_POINT_is_at_infinity(a1, a4) != 0 )
  {
    v10 = a3;
    return EC_POINT_copy(a2, v10) != 0;
  }
  v12 = nullptr;
  if ( a5 == nullptr )
  {
    v9 = (int *)(BN_CTX_new());
    v5 = v9;
    v11 = false;
    if ( v9 == nullptr )
      return v11;
    v12 = (void **)v9;
  }
  BN_CTX_start((int)(uintptr_t)(v5));
  v13 = BN_CTX_get(v5);
  v16 = BN_CTX_get(v5);
  v15 = (uint32_t *)(BN_CTX_get(v5));
  v17 = BN_CTX_get(v5);
  v19 = BN_CTX_get(v5);
  v20 = BN_CTX_get(v5);
  v18 = BN_CTX_get(v5);
  v14 = BN_CTX_get(v5);
  v11 = false;
  if ( v14 == nullptr )
    goto LABEL_24;
  if ( a3[16] != 0 )
  {
    if ( BN_copy(v13, a3 + 1) == nullptr || BN_copy(v16, a3 + 6) == nullptr )
      goto LABEL_24;
  }
  else if ( EC_POINT_get_affine_coordinates_GF2m(a1, a3, (int)(uintptr_t)(v13), (int)(uintptr_t)(v16), (int)(uintptr_t)(v5)) == 0 )
  {
    goto LABEL_24;
  }
  if ( a4[16] != 0 )
  {
    v11 = false;
    if ( BN_copy(v15, a4 + 1) == nullptr || BN_copy(v17, a4 + 6) == nullptr )
      goto LABEL_24;
  }
  else
  {
    v11 = false;
    if ( EC_POINT_get_affine_coordinates_GF2m(a1, a4, (int)(uintptr_t)(v15), (int)(uintptr_t)(v17), (int)(uintptr_t)(v5)) == 0 )
      goto LABEL_24;
  }
  if ( BN_ucmp(v13, v15) != 0 )
  {
    v11 = false;
    if ( BN_GF2m_add(v14, v13, v15) != 0
      && BN_GF2m_add(v18, v16, v17) != 0
      && G4_VCALL<int>(a1, 136, v18, v18, v14, v5) != 0
      && G4_VCALL<int>(a1, 132, v19, v18, v5) != 0
      && BN_GF2m_add(v19, v19, a1 + 116) != 0
      && BN_GF2m_add(v19, v19, v18) != 0 )
    {
      v7 = v14;
LABEL_18:
      if ( BN_GF2m_add(v19, v19, v7) != 0 )
      {
        v11 = false;
        if ( BN_GF2m_add(v20, v15, v19) != 0
          && G4_VCALL<int>(a1, 128, v20, v20, v18, v5) != 0
          && BN_GF2m_add(v20, v20, v19) != 0
          && BN_GF2m_add(v20, v20, v17) != 0 )
        {
          v11 = EC_POINT_set_affine_coordinates_GF2m(a1, a2, (int)(uintptr_t)(v19), (int)(uintptr_t)(v20), (int)(uintptr_t)(v5)) != 0;
        }
      }
    }
  }
  else if ( BN_ucmp(v16, v17) == 0 && v15[1] != 0 )
  {
    v11 = false;
    if ( G4_VCALL<int>(a1, 136, v18, v17, v15, v5) != 0
      && BN_GF2m_add(v18, v18, v15) != 0
      && G4_VCALL<int>(a1, 132, v19, v18, v5) != 0
      && BN_GF2m_add(v19, v19, v18) != 0 )
    {
      v7 = (uint8_t *)(a1 + 116);
      goto LABEL_18;
    }
  }
  else
  {
    v11 = EC_POINT_set_to_infinity(a1, a2) != 0;
  }
LABEL_24:
  BN_CTX_end(v5);
  if ( v12 != nullptr )
    BN_CTX_free(v12);
  return v11;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_dbl  (binary VA: 0x1a1acb0)
// Original: ec_GF2m_simple_dbl
// ----------------------------------------------------------------------------
bool ec_GF2m_simple_dbl(int a1, uint32_t *a2, uint32_t *a3, int *a4)
{
  return ec_GF2m_simple_add(a1, a2, a3, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_point_get_affine_coordinates  (binary VA: 0x1a1acf0)
// Original: ec_GF2m_simple_point_get_affine_coordinates
// ----------------------------------------------------------------------------
int ec_GF2m_simple_point_get_affine_coordinates(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;

  if ( EC_POINT_is_at_infinity(a1, a2) != 0 )
  {
    ERR_put_error(16, 162, 106, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  v4 = (uint32_t *)(BN_value_one());
  if ( BN_cmp(a2 + 11, v4) != 0 )
  {
    ERR_put_error(16, 162, 66, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  if ( a3 != nullptr )
  {
    v5 = BN_copy(a3, a2 + 1);
    v6 = 0;
    if ( v5 == nullptr )
      return v6;
    BN_set_negative((unsigned int)(uintptr_t)(a3), 0);
  }
  v6 = 1;
  if ( a4 != nullptr )
  {
    v7 = BN_copy(a4, a2 + 6);
    v6 = 0;
    if ( v7 != nullptr )
    {
      BN_set_negative((unsigned int)(uintptr_t)(a4), 0);
      return 1;
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_point_set_affine_coordinates  (binary VA: 0x1a1ae40)
// Original: ec_GF2m_simple_point_set_affine_coordinates
// ----------------------------------------------------------------------------
int ec_GF2m_simple_point_set_affine_coordinates(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  int v4;
  uint32_t *v5;

  if ( a4 != nullptr && a3 != nullptr )
  {
    v4 = 0;
    if ( BN_copy(a2 + 1, a3) != nullptr )
    {
      BN_set_negative((unsigned int)(uintptr_t)(a2 + 1), 0);
      if ( BN_copy(a2 + 6, a4) != nullptr )
      {
        BN_set_negative((unsigned int)(uintptr_t)(a2 + 6), 0);
        v5 = (uint32_t *)(BN_value_one());
        if ( BN_copy(a2 + 11, v5) != nullptr )
        {
          LOWORD(v4) = 1;
          BN_set_negative((unsigned int)(uintptr_t)(a2 + 11), 0);
          a2[16] = 1;
        }
      }
    }
  }
  else
  {
    v4 = 0;
    ERR_put_error(16, 163, 67, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_group_set_curve  (binary VA: 0x1a1af60)
// Original: ec_GF2m_simple_group_set_curve
// ----------------------------------------------------------------------------
int ec_GF2m_simple_group_set_curve(uint32_t *a1, uint32_t *a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uint32_t *v21;

  v4 = 0;
  if ( BN_copy(a1 + 18, a2) != nullptr )
  {
    v21 = a1 + 23;
    v5 = BN_GF2m_poly2arr(a1 + 18, a1 + 23, 6) - 1;
    if ( v5 == 3 || v5 == 5 )
    {
      v4 = 0;
      if ( BN_GF2m_mod_arr(a1 + 29, a3, v21) != 0 )
      {
        v6 = a1[23];
        v7 = v6 + 62;
        v8 = v6 + 31;
        if ( v8 < 0 )
          v8 = v7;
        v9 = v8 >> 5;
        v10 = v9 > a1[31] ? bn_expand2((int)(uintptr_t)(a1 + 29), v9) == 0 : a1 + 29 == nullptr;
        v4 = 0;
        if ( !v10 )
        {
          v11 = a1[30];
          if ( v11 < a1[31] )
          {
            v12 = 4 * v11;
            do
            {
              ++v11;
              *(uint32_t *)(a1[29] + v12) = 0;
              v12 += 4;
            }
            while ( a1[31] > v11 );
          }
          v4 = 0;
          if ( BN_GF2m_mod_arr(a1 + 34, a4, v21) != 0 )
          {
            v13 = a1[23];
            v14 = v13 + 62;
            v15 = v13 + 31;
            if ( v15 < 0 )
              v15 = v14;
            v16 = a1[36];
            v17 = v15 >> 5;
            if ( v17 > v16 )
            {
              if ( bn_expand2((int)(uintptr_t)(a1 + 34), v17) == 0 )
                return v4;
              v16 = a1[36];
            }
            v18 = a1[35];
            v4 = 1;
            if ( v16 > v18 )
            {
              v19 = 4 * v18;
              do
              {
                ++v18;
                *(uint32_t *)(a1[34] + v19) = 0;
                v19 += 4;
              }
              while ( v18 < a1[36] );
              return 1;
            }
          }
        }
      }
    }
    else
    {
      ERR_put_error(16, 195, 131, (int)(uintptr_t)(&unk_1B15112), 0);
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: ec_GF2m_simple_group_copy  (binary VA: 0x1a1b150)
// Original: ec_GF2m_simple_group_copy
// ----------------------------------------------------------------------------
int ec_GF2m_simple_group_copy(uint32_t *a1, uint32_t *a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  bool v9;
  int v10;
  int v11;
  int v12;
  int v13;
  bool v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v20;
  int v21;

  v2 = 0;
  if ( BN_copy(a1 + 18, a2 + 18) != nullptr )
  {
    v21 = (int)(uintptr_t)(a1 + 29);
    if ( BN_copy(a1 + 29, a2 + 29) != nullptr )
    {
      v3 = BN_copy(a1 + 34, a2 + 34);
      v4 = (int)(uintptr_t)(a1 + 34);
      if ( v3 != nullptr )
      {
        v5 = a2[23];
        a1[23] = v5;
        a1[24] = a2[24];
        a1[25] = a2[25];
        a1[26] = a2[26];
        a1[27] = a2[27];
        a1[28] = a2[28];
        v6 = v5 + 62;
        v7 = v5 + 31;
        if ( v7 < 0 )
          v7 = v6;
        v8 = v7 >> 5;
        if ( v8 > a1[31] )
        {
          v20 = bn_expand2(v21, v8);
          v4 = (int)(uintptr_t)(a1 + 34);
          v9 = v20 == 0;
        }
        else
        {
          v9 = v21 == 0;
        }
        v2 = 0;
        if ( !v9 )
        {
          v10 = a1[23];
          v11 = v10 + 62;
          v12 = v10 + 31;
          if ( v12 < 0 )
            v12 = v11;
          v13 = v12 >> 5;
          if ( v13 > a1[36] )
            v14 = bn_expand2(v4, v13) == 0;
          else
            v14 = v4 == 0;
          v2 = 0;
          if ( !v14 )
          {
            v15 = a1[30];
            if ( a1[31] > v15 )
            {
              v16 = 4 * v15;
              do
              {
                ++v15;
                *(uint32_t *)(a1[29] + v16) = 0;
                v16 += 4;
              }
              while ( v15 < a1[31] );
            }
            v17 = a1[35];
            v2 = 1;
            if ( a1[36] > v17 )
            {
              v18 = 4 * v17;
              do
              {
                ++v17;
                *(uint32_t *)(a1[34] + v18) = 0;
                v18 += 4;
              }
              while ( v17 < a1[36] );
              return 1;
            }
          }
        }
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1B380  (binary VA: 0x1a1b380)
// Original: sub_1A1B380
// ----------------------------------------------------------------------------
int sub_1A1B380(int a1, char a2, int a3, int a4, int a5)
{
  int v5;
  int v6;

  v5 = *(uint32_t *)(*(uint32_t *)(a1 + 8) + 20);
  v6 = 64;
  if ( *(uint32_t *)(*(uint32_t *)(a1 + 20) + 4) != 0 )
    v6 = EVP_MD_type(*(uint32_t *)(*(uint32_t *)(a1 + 20) + 4));
  return ECDSA_verify(v6, a4, a5, a2, a3, v5);
}

// ----------------------------------------------------------------------------
// Function: sub_1A1B3F0  (binary VA: 0x1a1b3f0)
// Original: sub_1A1B3F0
// ----------------------------------------------------------------------------
int sub_1A1B3F0(int a1)
{
  int result;
  void ***v2;

  result = a1;
  v2 = *(void ****)(a1 + 20);
  if ( v2 != nullptr )
  {
    if ( *v2 != nullptr )
      EC_GROUP_free(*v2);
    return CRYPTO_free(v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1B440  (binary VA: 0x1a1b440)
// Original: sub_1A1B440
// ----------------------------------------------------------------------------
int sub_1A1B440(int a1)
{
  uint32_t *v1;
  int result;

  v1 = (uint32_t *)(CRYPTO_malloc(8, (int)(uintptr_t)(&unk_1B15112), 0));
  result = 0;
  if ( v1 != nullptr )
  {
    *v1 = 0;
    v1[1] = 0;
    *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(v1);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1B4A0  (binary VA: 0x1a1b4a0)
// Original: sub_1A1B4A0
// ----------------------------------------------------------------------------
int sub_1A1B4A0(int a1, const char *a2, int a3)
{
  int result;
  int v4;

  result = -2;
  if ( strcmp(a2, "ec_paramgen_curve") == 0 )
  {
    v4 = OBJ_sn2nid(a3);
    if ( v4 != 0 )
      return EVP_PKEY_CTX_ctrl(a1, 408, 2, 4097, v4, 0);
    v4 = OBJ_ln2nid(a3);
    if ( v4 != 0 )
    {
      return EVP_PKEY_CTX_ctrl(a1, 408, 2, 4097, v4, 0);
    }
    else
    {
      ERR_put_error(16, 198, 141, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1B580  (binary VA: 0x1a1b580)
// Original: sub_1A1B580
// ----------------------------------------------------------------------------
int sub_1A1B580(int a1, int a2, int a3, int a4)
{
  int v4;
  void *v6;

  v4 = *(uint32_t *)(a1 + 20);
  switch ( a2 )
  {
    case 1:
      if ( EVP_MD_type(a4) == 64
        || EVP_MD_type(a4) == 675
        || EVP_MD_type(a4) == 672
        || EVP_MD_type(a4) == 673
        || EVP_MD_type(a4) == 674 )
      {
        *(uint32_t *)(v4 + 4) = a4;
        return 1;
      }
      else
      {
        ERR_put_error(16, 197, 138, (int)(uintptr_t)(&unk_1B15112), 0);
        return 0;
      }
    case 2:
    case 5:
    case 7:
    case 11:
      return 1;
    case 4097:
      v6 = EC_GROUP_new_by_curve_name(a3);
      if ( v6 != nullptr )
      {
        if ( *(uint32_t *)v4 != 0 )
          EC_GROUP_free(*(void ***)v4);
        *(uint32_t *)v4 = (uint32_t)(uintptr_t)(v6);
        return 1;
      }
      else
      {
        ERR_put_error(16, 197, 141, (int)(uintptr_t)(&unk_1B15112), 0);
        return 0;
      }
    default:
      return -2;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1A1B6F0  (binary VA: 0x1a1b6f0)
// Original: sub_1A1B6F0
// ----------------------------------------------------------------------------
int sub_1A1B6F0(int a1, int a2, int *a3)
{
  int v3;
  int v4;
  int v5;
  int result;
  int v7;
  int degree;
  int v9;
  int v10;

  v3 = *(uint32_t *)(a1 + 8);
  if ( v3 != 0 && (v4 = *(uint32_t *)(a1 + 12)) != 0 )
  {
    if ( a2 != 0 )
    {
      v5 = EC_KEY_get0_public_key(*(uint32_t *)(v4 + 20));
      result = ECDH_compute_key(a2, *a3, v5, *(uint32_t *)(*(uint32_t *)(a1 + 8) + 20), 0);
      if ( result >= 0 )
      {
        *a3 = result;
        return 1;
      }
    }
    else
    {
      v7 = EC_KEY_get0_group(*(uint32_t *)(v3 + 20));
      degree = EC_GROUP_get_degree(v7);
      v9 = degree + 14;
      v10 = degree + 7;
      if ( v10 < 0 )
        v10 = v9;
      *a3 = v10 >> 3;
      return 1;
    }
  }
  else
  {
    ERR_put_error(16, 217, 140, (int)(uintptr_t)(&unk_1B15112), 0);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1B7F0  (binary VA: 0x1a1b7f0)
// Original: sub_1A1B7F0
// ----------------------------------------------------------------------------
int sub_1A1B7F0(int a1, int a2, int *a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int result;
  typedef unsigned int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v5 = *(uint32_t *)(a1 + 8);
  v10 = *(uint32_t *)(a1 + 20);
  v6 = *(uint32_t *)(v5 + 20);
  if ( a2 != 0 )
  {
    v9 = *a3;
    if ( v9 < ECDSA_size(*(uint32_t *)(v5 + 20)) )
    {
      ERR_put_error(16, 218, 100, (int)(uintptr_t)(&unk_1B15112), 0);
      return 0;
    }
    else
    {
      v7 = 64;
      if ( *(uint32_t *)(v10 + 4) != 0 )
        v7 = EVP_MD_type(*(uint32_t *)(v10 + 4));
      result = ECDSA_sign(v7, a4, a5, a2, v11, v6);
      if ( result > 0 )
      {
        *a3 = v11[0];
        return 1;
      }
    }
  }
  else
  {
    *a3 = ECDSA_size(*(uint32_t *)(v5 + 20));
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1B900  (binary VA: 0x1a1b900)
// Original: sub_1A1B900
// ----------------------------------------------------------------------------
int sub_1A1B900(int a1, char *a2)
{
  uint32_t *v2;
  int v3;

  if ( *(uint32_t *)(a1 + 8) != 0 )
  {
    v2 = EC_KEY_new();
    v3 = 0;
    if ( v2 != nullptr )
    {
      EVP_PKEY_assign(a2, 0x198u, (int)(uintptr_t)(v2));
      if ( EVP_PKEY_copy_parameters(a2, *(uint32_t **)(a1 + 8)) != 0 )
        return EC_KEY_generate_key(*((uint32_t **)a2 + 5));
    }
  }
  else
  {
    v3 = 0;
    ERR_put_error(16, 199, 139, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1B9C0  (binary VA: 0x1a1b9c0)
// Original: sub_1A1B9C0
// ----------------------------------------------------------------------------
bool sub_1A1B9C0(int a1, char *a2)
{
  int *v2;
  bool v3;
  char *v4;

  v2 = *(int **)(a1 + 20);
  if ( *v2 != 0 )
  {
    v3 = false;
    v4 = (char *)EC_KEY_new();
    if ( v4 != nullptr )
    {
      v3 = EC_KEY_set_group((int)(uintptr_t)(v4), *v2);
      if ( v3 )
        EVP_PKEY_assign(a2, 0x198u, (int)(uintptr_t)(v4));
      else
        EC_KEY_free(v4);
    }
  }
  else
  {
    v3 = false;
    ERR_put_error(16, 219, 139, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1BA90  (binary VA: 0x1a1ba90)
// Original: sub_1A1BA90
// ----------------------------------------------------------------------------
int sub_1A1BA90(int a1, int a2)
{
  int v2;
  void ***v3;
  int v4;
  void **v5;

  v2 = 0;
  if ( sub_1A1B440(a1) != 0 )
  {
    v3 = *(void ****)(a1 + 20);
    v4 = *(uint32_t *)(a2 + 20);
    if ( *(uint32_t *)v4 == 0 || (v5 = EC_GROUP_dup(*(int **)v4), *v3 = v5, v5 != nullptr) )
    {
      v2 = 1;
      v3[1] = *(void ***)(v4 + 4);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1C3B0  (binary VA: 0x1a1c3b0)
// Original: sub_1A1C3B0
// ----------------------------------------------------------------------------
uint32_t * sub_1A1C3B0()
{
  uint32_t *result;

  for ( result = (uint32_t *)dword_2141E38; dword_2141E38 != 0; result = (uint32_t *)dword_2141E38 )
    ENGINE_remove(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1C750  (binary VA: 0x1a1c750)
// Original: sub_1A1C750
// ----------------------------------------------------------------------------
int sub_1A1C750(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1C760  (binary VA: 0x1a1c760)
// Original: sub_1A1C760
// ----------------------------------------------------------------------------
int sub_1A1C760(uint32_t *a1, uint32_t *a2)
{
  return *a1 - *a2;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1C770  (binary VA: 0x1a1c770)
// Original: sub_1A1C770
// ----------------------------------------------------------------------------
int sub_1A1C770(uint32_t *a1, int a2)
{
  return (*(int (**)(uint32_t, uint32_t, uint32_t, uint32_t))a2)(*a1, a1[1], a1[2], *(uint32_t *)(a2 + 4));
}

// ----------------------------------------------------------------------------
// Function: sub_1A1C7A0  (binary VA: 0x1a1c7a0)
// Original: sub_1A1C7A0
// ----------------------------------------------------------------------------
int sub_1A1C7A0(void ***a1)
{
  void **v1;

  sk_free(a1[1]);
  v1 = a1[2];
  if ( v1 != nullptr )
    engine_unlocked_finish(v1, 0);
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1A1C800  (binary VA: 0x1a1c800)
// Original: sub_1A1C800
// ----------------------------------------------------------------------------
int sub_1A1C800(int *a1, uint32_t *a2)
{
  int result;

  while ( 1 )
  {
    result = sk_find(a1[1], (int)(uintptr_t)(a2));
    if ( result < 0 )
      break;
    sk_delete((int *)a1[1], result);
    a1[3] = 0;
  }
  if ( a2 == (uint32_t *)a1[2] )
  {
    result = engine_unlocked_finish(a2, 0);
    a1[2] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: engine_table_register  (binary VA: 0x1a1c8c0)
// Original: engine_table_register
// ----------------------------------------------------------------------------
int engine_table_register(uint32_t **a1, int a2, uint32_t *a3, uint32_t *a4, int a5, int a6)
{
  uint32_t *v7;
  uint32_t *v8;
  bool v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v14;
  typedef void *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v16)) > _g4_s1 ? (40u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v17)) > _g4_s2 ? (48u + sizeof(_g4_t_v17)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);

  CRYPTO_lock(9, 30, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( *a1 == nullptr )
  {
    v14 = lh_new((int (*)(char *))sub_1A1C750, (int (**)(const char *, const char *))sub_1A1C760);
    v10 = 0;
    if ( v14 == nullptr )
      goto LABEL_17;
    *a1 = v14;
    engine_cleanup_add_first(a2);
  }
  if ( a5 != 0 )
  {
    v16 = a5;
    while ( 1 )
    {
      v17[0] = *a4;
      v7 = lh_retrieve(*a1, (int)(uintptr_t)(v17));
      if ( v7 == nullptr )
      {
        v11 = (uint32_t *)(CRYPTO_malloc(16, (int)(uintptr_t)(&unk_1B15112), 0));
        v7 = v11;
        if ( v11 == nullptr )
        {
LABEL_16:
          v10 = 0;
          goto LABEL_17;
        }
        v11[3] = 1;
        *v11 = *a4;
        v12 = sk_new_null();
        v7[1] = (uint32_t)(uintptr_t)(v12);
        if ( v12 == nullptr )
        {
          v15 = v7;
          v10 = 0;
          CRYPTO_free(v15);
          goto LABEL_17;
        }
        v7[2] = 0;
        lh_insert(*a1, (int)(uintptr_t)(v7));
      }
      sk_delete_ptr((int *)v7[1], (int)(uintptr_t)(a3));
      if ( sk_push((int *)v7[1], (int)(uintptr_t)(a3)) == 0 )
        goto LABEL_16;
      v7[3] = 0;
      if ( a6 != 0 )
      {
        if ( engine_unlocked_init(a3) == 0 )
        {
          v10 = 0;
          ERR_put_error(38, 184, 109, (int)(uintptr_t)(&unk_1B15112), 0);
          goto LABEL_17;
        }
        v8 = (uint32_t *)v7[2];
        if ( v8 != nullptr )
          engine_unlocked_finish(v8, 0);
        ++a4;
        v9 = v16-- == 1;
        v7[2] = (uint32_t)(uintptr_t)(a3);
        v7[3] = 1;
        if ( v9 )
          break;
      }
      else
      {
        ++a4;
        if ( --v16 == 0 )
          break;
      }
    }
  }
  v10 = 1;
LABEL_17:
  CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: engine_table_unregister  (binary VA: 0x1a1caf0)
// Original: engine_table_unregister
// ----------------------------------------------------------------------------
void engine_table_unregister(uint32_t **a1, int a2)
{
  CRYPTO_lock(9, 30, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( *a1 != nullptr )
    lh_doall_arg(*a1, (void (*)(uint32_t, int))sub_1A1C800, a2);
  CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
}

// ----------------------------------------------------------------------------
// Function: engine_table_cleanup  (binary VA: 0x1a1cb80)
// Original: engine_table_cleanup
// ----------------------------------------------------------------------------
void engine_table_cleanup(void ***a1)
{
  CRYPTO_lock(9, 30, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( *a1 != nullptr )
  {
    lh_doall(*a1, (void (*)(uint32_t))sub_1A1C7A0);
    lh_free(*a1);
    *a1 = nullptr;
  }
  CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
}

// ----------------------------------------------------------------------------
// Function: engine_table_select  (binary VA: 0x1a1cc20)
// Original: engine_table_select
// ----------------------------------------------------------------------------
uint32_t * engine_table_select(uint32_t *a1, int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v8;
  uint32_t *v9;
  typedef uint32_t *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v11)) > _g4_s1 ? (28u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v12)) > _g4_s2 ? (32u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);

  v2 = nullptr;
  if ( *a1 != 0 )
  {
    ERR_set_mark();
    CRYPTO_lock(9, 30, (int)(uintptr_t)(&unk_1B15112), 0);
    if ( *a1 != 0 && (v10 = (uint32_t *)*a1, v12[0] = a2, v3 = lh_retrieve(v10, (int)(uintptr_t)(v12)), v4 = v3, v3 != nullptr) )
    {
      v5 = (uint32_t *)v3[2];
      if ( v5 != nullptr && engine_unlocked_init(v5) != 0 || (v6 = 0, v4[3] != 0) )
      {
        v2 = (uint32_t *)v4[2];
      }
      else
      {
        while ( 1 )
        {
          v11 = v6 + 1;
          v8 = (uint32_t *)sk_value((int *)v4[1], v6);
          v2 = v8;
          if ( v8 == nullptr )
            break;
          if ( ((int)v8[23] > 0 || (dword_2141E40 & 1) == 0) && engine_unlocked_init(v8) != 0 )
          {
            if ( v2 != (uint32_t *)v4[2] && engine_unlocked_init(v2) != 0 )
            {
              v9 = (uint32_t *)v4[2];
              if ( v9 != nullptr )
                engine_unlocked_finish(v9, 0);
              v4[2] = (uint32_t)(uintptr_t)(v2);
            }
            break;
          }
          v6 = v11;
        }
      }
      v4[3] = 1;
    }
    else
    {
      v2 = nullptr;
    }
    CRYPTO_lock(10, 30, (int)(uintptr_t)(&unk_1B15112), 0);
    ERR_pop_to_mark();
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: engine_table_doall  (binary VA: 0x1a1cd90)
// Original: engine_table_doall
// ----------------------------------------------------------------------------
void engine_table_doall(uint32_t *a1, int a2, int a3)
{
  uint32_t v3[5];

  v3[0] = a2;
  v3[1] = a3;
  lh_doall_arg(a1, (void (*)(uint32_t, int))sub_1A1C770, (int)(uintptr_t)(v3));
}

// ----------------------------------------------------------------------------
// Function: sub_1A1CDE0  (binary VA: 0x1a1cde0)
// Original: sub_1A1CDE0
// ----------------------------------------------------------------------------
void sub_1A1CDE0()
{
  engine_table_cleanup(&dword_2141E44);
}

// ----------------------------------------------------------------------------
// Function: sub_1A1D0C0  (binary VA: 0x1a1d0c0)
// Original: sub_1A1D0C0
// ----------------------------------------------------------------------------
void sub_1A1D0C0()
{
  engine_table_cleanup(&dword_2141E48);
}

// ----------------------------------------------------------------------------
// Function: sub_1A1D3A0  (binary VA: 0x1a1d3a0)
// Original: sub_1A1D3A0
// ----------------------------------------------------------------------------
void sub_1A1D3A0()
{
  engine_table_cleanup(&dword_2141E4C);
}

// ----------------------------------------------------------------------------
// Function: sub_1A1D560  (binary VA: 0x1a1d560)
// Original: sub_1A1D560
// ----------------------------------------------------------------------------
void sub_1A1D560()
{
  engine_table_cleanup((void ***)&unk_2141E50);
}

// ----------------------------------------------------------------------------
// Function: sub_1A1D720  (binary VA: 0x1a1d720)
// Original: sub_1A1D720
// ----------------------------------------------------------------------------
int sub_1A1D720(int a1, int a2, uint32_t *a3)
{
  return BIO_write(a3, a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_1A1D760  (binary VA: 0x1a1d760)
// Original: sub_1A1D760
// ----------------------------------------------------------------------------
int sub_1A1D760(int a1, int a2, int a3)
{
  void *v3;
  int v4;
  int v5;
  uint32_t v7[19];

  v3 = BIO_s_file();
  BIO_set(v7, (int)(uintptr_t)(v3));
  BIO_ctrl(v7, 106, 0, a3);
  return BIO_printf(v4, v5, (int)(uintptr_t)(v7), "%s", a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1A1D960  (binary VA: 0x1a1d960)
// Original: sub_1A1D960
// ----------------------------------------------------------------------------
int sub_1A1D960(int a1, int a2, int a3)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 36) != 0 )
    return BIO_callback_ctrl(*(uint32_t **)(a1 + 36), a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1D9A0  (binary VA: 0x1a1d9a0)
// Original: sub_1A1D9A0
// ----------------------------------------------------------------------------
int sub_1A1D9A0(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
  {
    EVP_CIPHER_CTX_cleanup(*(uint32_t *)(a1 + 32) + 20);
    OPENSSL_cleanse(*(uint8_t **)(a1 + 32), 0x10E4u);
    CRYPTO_free(*(void **)(a1 + 32));
    *(uint32_t *)(a1 + 32) = 0;
    *(uint32_t *)(a1 + 12) = 0;
    *(uint32_t *)(a1 + 20) = 0;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1DA20  (binary VA: 0x1a1da20)
// Original: sub_1A1DA20
// ----------------------------------------------------------------------------
int sub_1A1DA20(uint32_t *a1)
{
  uint8_t *v1;
  int result;

  v1 = CRYPTO_malloc(4324, (int)(uintptr_t)(&unk_1B15112), 0);
  result = 0;
  if ( v1 != nullptr )
  {
    EVP_CIPHER_CTX_init(v1 + 20);
    *(uint32_t *)v1 = 0;
    *((uint32_t *)v1 + 1) = 0;
    *((uint32_t *)v1 + 2) = 1;
    *((uint32_t *)v1 + 3) = 0;
    *((uint32_t *)v1 + 4) = 1;
    a1[3] = 0;
    a1[8] = (uint32_t)(uintptr_t)(v1);
    a1[5] = 0;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1DAC0  (binary VA: 0x1a1dac0)
// Original: sub_1A1DAC0
// ----------------------------------------------------------------------------
int sub_1A1DAC0(int a1, char *dest, signed int a3)
{
  int v3;
  int *v4;
  int v5;
  signed int n;
  int v7;
  bool v8;
  signed int i;
  signed int v10;
  signed int v11;
  char *v13;
  char *src;
  signed int v15;

  v3 = a3;
  v15 = 0;
  if ( dest == nullptr )
    return v15;
  v4 = *(int **)(a1 + 32);
  if ( v4 == nullptr || *(uint32_t *)(a1 + 36) == 0 )
    return v15;
  if ( *v4 > 0 )
  {
    v5 = v4[1];
    n = *v4 - v5;
    if ( a3 <= n )
      n = a3;
    memcpy(dest, (char *)v4 + v5 + 160, n);
    dest += n;
    v7 = n + v4[1];
    v3 = a3 - n;
    v8 = v7 == *v4;
    v4[1] = v7;
    v15 = n;
    if ( v8 )
    {
      *v4 = 0;
      v4[1] = 0;
    }
  }
  if ( v3 <= 0 || v4[2] <= 0 )
  {
LABEL_26:
    BIO_clear_flags(a1, 15);
    BIO_copy_next_retry(a1);
    if ( v15 == 0 )
      return v4[2];
    return v15;
  }
  v13 = (char *)(v4 + 56);
  src = (char *)(v4 + 40);
  for ( i = BIO_read(*(uint32_t **)(a1 + 36), (int)(uintptr_t)(v4 + 56), 4096); ; i = BIO_read(*(uint32_t **)(a1 + 36), (int)(uintptr_t)(v13), 4096) )
  {
    v10 = i;
    if ( i > 0 )
    {
      EVP_CipherUpdate(v4 + 5, src, v4, v13, i);
      v11 = *v4;
      v4[2] = 1;
      if ( v11 == 0 )
        goto LABEL_15;
      goto LABEL_20;
    }
    if ( BIO_test_flags(*(uint32_t *)(a1 + 36), 8) != 0 )
      break;
    v4[2] = v10;
    v4[4] = EVP_CipherFinal_ex((int)(uintptr_t)(v4 + 5), (int)(uintptr_t)(src), (unsigned int *)v4);
    v4[1] = 0;
    v11 = *v4;
LABEL_20:
    if ( v11 <= v3 )
    {
      if ( v11 <= 0 )
        goto LABEL_26;
      v3 -= v11;
    }
    else
    {
      v11 = v3;
      v3 = 0;
    }
    memcpy(dest, src, v11);
    v15 += v11;
    v4[1] = v11;
    dest += v11;
LABEL_15:
    if ( v3 <= 0 || v4[2] <= 0 )
      goto LABEL_26;
  }
  if ( v15 == 0 )
  {
    v15 = v10;
    goto LABEL_26;
  }
  BIO_clear_flags(a1, 15);
  BIO_copy_next_retry(a1);
  return v15;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1DCF0  (binary VA: 0x1a1dcf0)
// Original: sub_1A1DCF0
// ----------------------------------------------------------------------------
int sub_1A1DCF0(int a1, char *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  size_t v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  signed int v14;

  v3 = *(uint32_t *)(a1 + 32);
  BIO_clear_flags(a1, 15);
  v4 = *(uint32_t *)(v3 + 4);
  v5 = *(uint32_t *)v3 - v4;
  if ( v5 > 0 )
  {
    while ( 1 )
    {
      v6 = BIO_write(*(uint32_t **)(a1 + 36), v3 + v4 + 160, v5);
      if ( v6 <= 0 )
        break;
      v5 -= v6;
      v4 = v6 + *(uint32_t *)(v3 + 4);
      *(uint32_t *)(v3 + 4) = v4;
      if ( v5 <= 0 )
        goto LABEL_6;
    }
    v12 = v6;
    BIO_copy_next_retry(a1);
    return v12;
  }
  else
  {
LABEL_6:
    if ( a3 > 0 && a2 != nullptr )
    {
      *(uint32_t *)(v3 + 4) = 0;
      v14 = a3;
      while ( 1 )
      {
        v8 = 4096;
        if ( v14 <= 4096 )
          v8 = v14;
        EVP_CipherUpdate((uint32_t *)(v3 + 20), (char *)(v3 + 160), (int *)v3, a2, v8);
        v14 -= v8;
        a2 += v8;
        v9 = *(uint32_t *)v3;
        *(uint32_t *)(v3 + 4) = 0;
        if ( v9 > 0 )
          break;
LABEL_19:
        *(uint32_t *)v3 = 0;
        *(uint32_t *)(v3 + 4) = 0;
        if ( v14 <= 0 )
        {
          BIO_copy_next_retry(a1);
          return a3;
        }
      }
      v10 = 0;
      while ( 1 )
      {
        v11 = BIO_write(*(uint32_t **)(a1 + 36), v3 + v10 + 160, v9);
        if ( v11 <= 0 )
          break;
        v9 -= v11;
        v10 = *(uint32_t *)(v3 + 4) + v11;
        *(uint32_t *)(v3 + 4) = v10;
        if ( v9 <= 0 )
          goto LABEL_19;
      }
      v13 = v11;
      BIO_copy_next_retry(a1);
      result = v13;
      if ( v14 != a3 )
        return a3 - v14;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1DE90  (binary VA: 0x1a1de90)
// Original: sub_1A1DE90
// ----------------------------------------------------------------------------
int sub_1A1DE90(int a1, int a2, int a3, uint32_t *a4)
{
  uint32_t *v4;
  int result;
  int v6;
  uint8_t *v7;
  int v8;

  v4 = *(uint32_t **)(a1 + 32);
  switch ( a2 )
  {
    case 1:
      v4[4] = 1;
      v4[3] = 0;
      EVP_CipherInit_ex(v4 + 5, nullptr, nullptr, 0, nullptr, v4[7]);
      return BIO_ctrl(*(uint32_t **)(a1 + 36), 1, a3, (int)(uintptr_t)(a4));
    case 2:
      result = 1;
      if ( (int)v4[2] > 0 )
        return BIO_ctrl(*(uint32_t **)(a1 + 36), 2, a3, (int)(uintptr_t)(a4));
      break;
    case 10:
      result = *v4 - v4[1];
      if ( result <= 0 )
        return BIO_ctrl(*(uint32_t **)(a1 + 36), 10, a3, (int)(uintptr_t)(a4));
      break;
    case 11:
      while ( *v4 != v4[1] )
      {
LABEL_16:
        result = sub_1A1DCF0(a1, nullptr, 0);
        if ( result < 0 )
          return result;
      }
      while ( v4[3] == 0 )
      {
        v4[3] = 1;
        v4[1] = 0;
        result = EVP_CipherFinal_ex((int)(uintptr_t)(v4 + 5), (int)(uintptr_t)(v4 + 40), v4);
        v4[4] = result;
        if ( result <= 0 )
          return result;
        if ( *v4 != v4[1] )
          goto LABEL_16;
      }
      return BIO_ctrl(*(uint32_t **)(a1 + 36), 11, a3, (int)(uintptr_t)(a4));
    case 12:
      v7 = (uint8_t *)(a4[8] + 20);
      EVP_CIPHER_CTX_init(v7);
      v8 = EVP_CIPHER_CTX_copy((int)(uintptr_t)(v7), v4 + 5);
      result = 0;
      if ( v8 != 0 )
      {
        a4[3] = 1;
        return v8;
      }
      break;
    case 13:
      result = *v4 - v4[1];
      if ( result <= 0 )
        return BIO_ctrl(*(uint32_t **)(a1 + 36), 13, a3, (int)(uintptr_t)(a4));
      break;
    case 101:
      BIO_clear_flags(a1, 15);
      v6 = BIO_ctrl(*(uint32_t **)(a1 + 36), 101, a3, (int)(uintptr_t)(a4));
      BIO_copy_next_retry(a1);
      return v6;
    case 113:
      return v4[4];
    case 129:
      *a4 = (uint32_t)(uintptr_t)(v4 + 5);
      *(uint32_t *)(a1 + 12) = 1;
      return 1;
    default:
      return BIO_ctrl(*(uint32_t **)(a1 + 36), a2, a3, (int)(uintptr_t)(a4));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1E2B0  (binary VA: 0x1a1e2b0)
// Original: sub_1A1E2B0
// ----------------------------------------------------------------------------
int sub_1A1E2B0(int a1, int a2, int a3)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 36) != 0 )
    return BIO_callback_ctrl(*(uint32_t **)(a1 + 36), a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1E2F0  (binary VA: 0x1a1e2f0)
// Original: sub_1A1E2F0
// ----------------------------------------------------------------------------
int sub_1A1E2F0(int a1)
{
  int result;

  result = 0;
  if ( a1 != 0 )
  {
    EVP_MD_CTX_destroy(*(void **)(a1 + 32));
    *(uint32_t *)(a1 + 32) = 0;
    *(uint32_t *)(a1 + 12) = 0;
    *(uint32_t *)(a1 + 20) = 0;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1E350  (binary VA: 0x1a1e350)
// Original: sub_1A1E350
// ----------------------------------------------------------------------------
int sub_1A1E350(uint32_t *a1)
{
  uint8_t *v1;
  int v2;

  v1 = EVP_MD_CTX_create();
  v2 = 0;
  if ( v1 != nullptr )
  {
    a1[3] = 0;
    a1[8] = (uint32_t)(uintptr_t)(v1);
    a1[5] = 0;
    LOBYTE(v2) = 1;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1E3A0  (binary VA: 0x1a1e3a0)
// Original: sub_1A1E3A0
// ----------------------------------------------------------------------------
int sub_1A1E3A0(int a1, int a2, int a3)
{
  void **v3;
  int result;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v3 = *(void ***)(a1 + 32);
  result = 0;
  if ( *((uint32_t *)*v3 + 2) <= a3 )
  {
    if ( EVP_DigestFinal_ex(v3, a2, &v5) <= 0 )
      return -1;
    else
      return v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1E410  (binary VA: 0x1a1e410)
// Original: sub_1A1E410
// ----------------------------------------------------------------------------
int sub_1A1E410(uint32_t *a1, int a2, int a3)
{
  int v3;
  uint32_t *v4;
  int v6;

  v3 = 0;
  if ( a2 != 0 && a1[8] != 0 )
  {
    v4 = (uint32_t *)a1[9];
    if ( v4 != nullptr )
    {
      v6 = a1[8];
      v3 = BIO_read(v4, a2, a3);
      if ( a1[3] != 0 && v3 > 0 && EVP_DigestUpdate(v6, a2, v3) <= 0 )
      {
        return -1;
      }
      else
      {
        BIO_clear_flags((int)(uintptr_t)(a1), 15);
        BIO_copy_next_retry((int)(uintptr_t)(a1));
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1E4C0  (binary VA: 0x1a1e4c0)
// Original: sub_1A1E4C0
// ----------------------------------------------------------------------------
char sub_1A1E4C0(int a1, int a2, int a3, int a4)
{
  uint32_t **v4;
  int v5;
  char v7;

  v4 = *(uint32_t ***)(a1 + 32);
  switch ( a2 )
  {
    case 1:
      LOBYTE(v5) = 0;
      if ( *(uint32_t *)(a1 + 12) != 0 )
      {
        v5 = EVP_DigestInit_ex((int)(uintptr_t)(v4), *v4, nullptr);
        if ( v5 > 0 )
          LOBYTE(v5) = BIO_ctrl(*(uint32_t **)(a1 + 36), 1, a3, a4);
      }
      break;
    case 12:
      EVP_MD_CTX_copy_ex(*(int **)(a4 + 32), *(int **)(a1 + 32));
      *(uint32_t *)(a1 + 12) = 1;
      LOBYTE(v5) = 1;
      break;
    case 101:
      BIO_clear_flags(a1, 15);
      v7 = BIO_ctrl(*(uint32_t **)(a1 + 36), 101, a3, a4);
      BIO_copy_next_retry(a1);
      LOBYTE(v5) = v7;
      break;
    case 111:
      v5 = EVP_DigestInit_ex((int)(uintptr_t)(v4), (uint32_t *)a4, nullptr);
      if ( v5 > 0 )
        *(uint32_t *)(a1 + 12) = 1;
      break;
    case 112:
      LOBYTE(v5) = 0;
      if ( *(uint32_t *)(a1 + 12) != 0 )
      {
        *(uint32_t *)a4 = (uint32_t)(uintptr_t)(*v4);
        LOBYTE(v5) = 1;
      }
      break;
    case 120:
      *(uint32_t *)a4 = (uint32_t)(uintptr_t)(v4);
      *(uint32_t *)(a1 + 12) = 1;
      LOBYTE(v5) = 1;
      break;
    case 148:
      LOBYTE(v5) = 0;
      if ( *(uint32_t *)(a1 + 12) != 0 )
      {
        *(uint32_t *)(a1 + 32) = a4;
        LOBYTE(v5) = 1;
      }
      break;
    default:
      LOBYTE(v5) = BIO_ctrl(*(uint32_t **)(a1 + 36), a2, a3, a4);
      return v5;
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1E680  (binary VA: 0x1a1e680)
// Original: sub_1A1E680
// ----------------------------------------------------------------------------
int sub_1A1E680(uint32_t *a1, int a2, int a3)
{
  int v3;
  int v4;
  uint32_t *v5;
  int v7;

  if ( a3 <= 0 || a2 == 0 )
    return 0;
  v3 = a1[8];
  v4 = 0;
  if ( v3 != 0 )
  {
    v5 = (uint32_t *)a1[9];
    if ( v5 != nullptr )
    {
      v7 = a1[8];
      v4 = BIO_write(v5, a2, a3);
      v3 = v7;
    }
  }
  if ( a1[3] != 0 && v4 > 0 )
    EVP_DigestUpdate(v3, a2, v4);
  if ( a1[9] != 0 )
  {
    BIO_clear_flags((int)(uintptr_t)(a1), 15);
    BIO_copy_next_retry((int)(uintptr_t)(a1));
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1F590  (binary VA: 0x1a1f590)
// Original: sub_1A1F590
// ----------------------------------------------------------------------------
int sub_1A1F590(uint32_t *a1, uint32_t *a2)
{
  int result;

  result = *a1 - *a2;
  if ( *a1 == *a2 )
    return a1[1] - a2[1];
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A1F5B0  (binary VA: 0x1a1f5b0)
// Original: sub_1A1F5B0
// ----------------------------------------------------------------------------
int sub_1A1F5B0(void *a1)
{
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1A1F5E0  (binary VA: 0x1a1f5e0)
// Original: sub_1A1F5E0
// ----------------------------------------------------------------------------
int sub_1A1F5E0(int a1, int a2)
{
  int result;

  result = **(uint32_t **)a1 - **(uint32_t **)a2;
  if ( result == 0 )
    return *(uint32_t *)(*(uint32_t *)a1 + 4) - *(uint32_t *)(*(uint32_t *)a2 + 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A20980  (binary VA: 0x1a20980)
// Original: sub_1A20980
// ----------------------------------------------------------------------------
int sub_1A20980(int a1, int a2, int a3, int a4, uint32_t *a5, int a6, void (*a7)(uint32_t *, uint32_t *, int))
{
  int v9;
  int v10;
  char v11;
  int v12;
  int result;
  int i;
  char v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[11];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v17)) > _g4_s1 ? (31u + sizeof(_g4_t_v17)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 31u);

  v17[0] = *a5;
  v17[1] = a5[1];
  v17[2] = a5[2];
  v17[3] = a5[3];
  a7(a5, a5, a4);
  v9 = a3 + 14;
  if ( a3 + 7 >= 0 )
    v9 = a3 + 7;
  v16 = v9 >> 3;
  if ( a6 != 0 )
  {
    if ( v16 > 0 )
    {
      for ( i = 0; i != v16; ++i )
      {
        v15 = *(uint8_t *)(a1 + i) ^ *((uint8_t *)a5 + i);
        *((uint8_t *)&v17[4] + i) = v15;
        *(uint8_t *)(a2 + i) = v15;
      }
    }
  }
  else
  {
    v10 = 0;
    if ( v16 > 0 )
    {
      do
      {
        v11 = *(uint8_t *)(a1 + v10);
        *((uint8_t *)&v17[4] + v10) = v11;
        *(uint8_t *)(a2 + v10) = *((uint8_t *)a5 + v10) ^ v11;
        ++v10;
      }
      while ( v10 != v16 );
    }
  }
  v12 = a3 / 8;
  if ( a3 % 8 != 0 )
  {
    for ( result = 0; result != 16; ++result )
      *((uint8_t *)a5 + result) = ((int)*((uint8_t *)v17 + v12 + result + 1) >> (8 - a3 % 8))
                              | (*((uint8_t *)v17 + v12 + result) << (a3 % 8));
  }
  else
  {
    *a5 = *(uint32_t *)((char *)v17 + v12);
    a5[1] = *(uint32_t *)((char *)&v17[1] + v12);
    a5[2] = *(uint32_t *)((char *)&v17[2] + v12);
    result = *(uint32_t *)((char *)&v17[3] + v12);
    a5[3] = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A21500  (binary VA: 0x1a21500)
// Original: sub_1A21500
// ----------------------------------------------------------------------------
int sub_1A21500(uint32_t *a1, int a2, int a3, int a4, int a5, char *a6, int a7, int (*a8)(uint8_t *, int, int, char *), char *a9)
{
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v15;
  typedef size_t _g4_t_v16;
  typedef uint8_t _g4_t_dest[1036];
  enum : size_t {
    _g4_s0 = 1136u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_dest)) > _g4_s1 ? (16u + sizeof(_g4_t_dest)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 16u);

  v10 = EVP_PKEY2PKCS8(a2);
  v11 = (int)(uintptr_t)(v10);
  if ( v10 != nullptr )
  {
    if ( a5 == 0 && a4 == -1 )
    {
      if ( a3 != 0 )
        v13 = i2d_PKCS8_PRIV_KEY_INFO_bio((int)(uintptr_t)(a1), (int)(uintptr_t)(v10));
      else
        v13 = PEM_write_bio_PKCS8_PRIV_KEY_INFO(a1, (int)(uintptr_t)(v10));
      PKCS8_PRIV_KEY_INFO_free(v11);
    }
    else
    {
      if ( a6 != nullptr )
      {
        v12 = (int)(uintptr_t)(PKCS8_encrypt(a4, a5, a6, a7, 0, 0, 0, (int)(uintptr_t)(v10)));
      }
      else
      {
        if ( a8 != nullptr )
          v15 = a8(dest, 1024, 1, a9);
        else
          v15 = PEM_def_callback(dest, 1024, 1, a9);
        if ( v15 <= 0 )
        {
          v13 = 0;
          ERR_put_error(9, 126, 111, (int)(uintptr_t)(&unk_1B15112), 0);
          PKCS8_PRIV_KEY_INFO_free(v11);
          return v13;
        }
        v16 = v15;
        v12 = (int)(uintptr_t)(PKCS8_encrypt(a4, a5, (char *)dest, v15, 0, 0, 0, v11));
        OPENSSL_cleanse(dest, v16);
      }
      PKCS8_PRIV_KEY_INFO_free(v11);
      if ( a3 != 0 )
        v13 = i2d_PKCS8_bio((int)(uintptr_t)(a1), v12);
      else
        v13 = PEM_write_bio_PKCS8(a1, v12);
      X509_SIG_free(v12);
    }
  }
  else
  {
    v13 = 0;
    ERR_put_error(9, 126, 115, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v13;
}

// ----------------------------------------------------------------------------
// Function: sub_1A21780  (binary VA: 0x1a21780)
// Original: sub_1A21780
// ----------------------------------------------------------------------------
int sub_1A21780(int a1, int a2, int a3, int a4, int a5, char *a6, int a7, int (*a8)(uint8_t *, int, int, char *), char *a9)
{
  uint32_t *v10;
  uint32_t *v11;
  int v12;

  v10 = BIO_new_fp(a1, 0);
  v11 = v10;
  if ( v10 != nullptr )
  {
    v12 = sub_1A21500(v10, a2, a3, a4, a5, a6, a7, a8, a9);
    BIO_free(v11);
  }
  else
  {
    v12 = 0;
    ERR_put_error(9, 125, 7, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  return v12;
}

// ----------------------------------------------------------------------------
// Function: OPENSSL_asc2uni  (binary VA: 0x1a22d70)
// Original: OPENSSL_asc2uni
// ----------------------------------------------------------------------------
uint8_t * OPENSSL_asc2uni(char *s, size_t a2, uint32_t *a3, int *a4)
{
  size_t v4;
  int v5;
  uint8_t *result;
  int v7;

  v4 = a2;
  if ( a2 == -1 )
    v4 = strlen(s);
  v5 = 2 * v4 + 2;
  result = CRYPTO_malloc(v5, (int)(uintptr_t)(&unk_1B15112), 0);
  if ( result != nullptr )
  {
    if ( v5 - 2 > 0 )
    {
      v7 = 0;
      do
      {
        result[v7] = 0;
        result[v7 + 1] = s[v7 >> 1];
        v7 += 2;
      }
      while ( v5 - 2 > v7 );
    }
    result[v5 - 2] = 0;
    result[v5 - 1] = 0;
    if ( a4 != nullptr )
      *a4 = v5;
    if ( a3 != nullptr )
      *a3 = (uint32_t)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: OPENSSL_uni2asc  (binary VA: 0x1a22e20)
// Original: OPENSSL_uni2asc
// ----------------------------------------------------------------------------
uint8_t * OPENSSL_uni2asc(int a1, int a2)
{
  int v2;
  uint8_t *v3;
  uint8_t *v4;
  int i;
  int v6;
  char v7;
  size_t v9;

  v2 = a2 / 2;
  v9 = a2 / 2;
  if ( a2 == 0 || *(uint8_t *)(a1 + a2 - 1) != 0 )
  {
    v9 = v2 + 1;
    v3 = CRYPTO_malloc(v2 + 1, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  else
  {
    v3 = CRYPTO_malloc(v9, (int)(uintptr_t)(&unk_1B15112), 0);
  }
  v4 = v3;
  if ( v3 != nullptr )
  {
    if ( a2 > 0 )
    {
      for ( i = 0; i < a2; i += 2 )
      {
        v6 = i >> 1;
        v7 = *(uint8_t *)(a1 + i + 1);
        v4[v6] = v7;
      }
    }
    v4[v9 - 1] = 0;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_1A23140  (binary VA: 0x1a23140)
// Original: sub_1A23140
// ----------------------------------------------------------------------------
void sub_1A23140(int a1, int a2, int a3, double a4)
{
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  int j;
  int k;
  int v10;
  typedef int _g4_t_i;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint8_t _g4_t_v15[8];
  typedef uint32_t _g4_t_v16[5];
  typedef void *_g4_t_v17[13];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_i)) > _g4_s0 ? (8u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v13)) > _g4_s2 ? (36u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v14)) > _g4_s3 ? (40u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v15)) > _g4_s4 ? (44u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v16)) > _g4_s5 ? (52u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v17)) > _g4_s6 ? (72u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);

  if ( dword_2141EC4 == 0
    || (CRYPTO_THREADID_current((int)(uintptr_t)(&unk_1B15112), a1, v15),
        CRYPTO_lock(5, 19, (int)(uintptr_t)(&unk_1B15112), 0),
        v10 = CRYPTO_THREADID_cmp(&unk_2141EC8, v15),
        CRYPTO_lock(6, 19, (int)(uintptr_t)(&unk_1B15112), 0),
        v10 != 0) )
  {
    CRYPTO_lock(9, 18, (int)(uintptr_t)(&unk_1B15112), 0);
    v12 = 0;
  }
  else
  {
    v12 = 1;
  }
  v4 = dword_2141EE0;
  v13 = dword_2141EE4;
  std::memcpy(v16, byte_2141EEC, sizeof(v16));
  v5 = dword_2141EE0 + a3;
  v14 = dword_2141EE8;
  dword_2141EE0 = v5;
  if ( v5 <= 1022 )
  {
    if ( dword_2141F00 <= 1022 && v5 > dword_2141F00 )
      dword_2141F00 = v5;
  }
  else
  {
    dword_2141F00 = 1023;
    dword_2141EE0 = v5 % 1023;
  }
  dword_2141EE8 += a3 / 20 + (a3 % 20 > 0);
  if ( v12 == 0 )
    CRYPTO_lock(10, 18, (int)(uintptr_t)(&unk_1B15112), 0);
  EVP_MD_CTX_init(v17);
  if ( a3 > 0 )
  {
    for ( i = 0; i < a3; i += 20 )
    {
      v6 = a3 - i;
      if ( a3 - i > 20 )
        v6 = 20;
      v7 = (uint32_t *)(EVP_sha1());
      EVP_DigestInit_ex((int)(uintptr_t)(v17), v7, nullptr);
      EVP_DigestUpdate((int)(uintptr_t)(v17), (int)(uintptr_t)(v16), 20);
      if ( v4 + v6 - 1023 <= 0 )
      {
        EVP_DigestUpdate((int)(uintptr_t)(v17), (int)(uintptr_t)(&byte_2141F20[v4]), v6);
      }
      else
      {
        EVP_DigestUpdate((int)(uintptr_t)(v17), (int)(uintptr_t)(&byte_2141F20[v4]), 1023 - v4);
        EVP_DigestUpdate((int)(uintptr_t)(v17), (int)(uintptr_t)(byte_2141F20), v4 + v6 - 1023);
      }
      EVP_DigestUpdate((int)(uintptr_t)(v17), a2, v6);
      EVP_DigestUpdate((int)(uintptr_t)(v17), (int)(uintptr_t)(&v13), 8);
      EVP_DigestFinal_ex(v17, (int)(uintptr_t)(v16), nullptr);
      ++v14;
      a2 += v6;
      if ( v6 > 0 )
      {
        for ( j = 0; j != v6; ++j )
        {
          byte_2141F20[v4] ^= *((uint8_t *)v16 + j);
          if ( ++v4 >= 1023 )
            v4 = 0;
        }
      }
    }
  }
  EVP_MD_CTX_cleanup((int)(uintptr_t)(v17));
  if ( v12 == 0 )
    CRYPTO_lock(9, 18, (int)(uintptr_t)(&unk_1B15112), 0);
  for ( k = 0; k != 20; ++k )
    byte_2141EEC[k] ^= *((uint8_t *)v16 + k);
  if ( *(double *)&qword_2141ED8 < 32.0 )
    *(double *)&qword_2141ED8 = *(double *)&qword_2141ED8 + a4;
  if ( v12 == 0 )
    CRYPTO_lock(10, 18, (int)(uintptr_t)(&unk_1B15112), 0);
}

// ----------------------------------------------------------------------------
// Function: sub_1A23590  (binary VA: 0x1a23590)
// Original: sub_1A23590
// ----------------------------------------------------------------------------
void sub_1A23590(int a1, int a2, int a3)
{
  sub_1A23140(a1, a2, a3, (double)a3);
}

// ----------------------------------------------------------------------------
// Function: sub_1A235C0  (binary VA: 0x1a235c0)
// Original: sub_1A235C0
// ----------------------------------------------------------------------------
void * sub_1A235C0()
{
  void *result;

  OPENSSL_cleanse((uint8_t *)byte_2141F20, 0x413u);
  dword_2141F00 = 0;
  dword_2141EE0 = 0;
  result = OPENSSL_cleanse((uint8_t *)byte_2141EEC, 0x14u);
  dword_2141EE4 = 0;
  dword_2141EE8 = 0;
  dword_2141ED0 = 0;
  qword_2141ED8 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A23640  (binary VA: 0x1a23640)
// Original: sub_1A23640
// ----------------------------------------------------------------------------
int sub_1A23640(uint8_t *a1, int a2)
{
  int result;
  int i;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef bool _g4_t_v16;
  typedef __pid_t _g4_t_v17;
  typedef uint32_t _g4_t_v18[2];
  typedef uint32_t _g4_t_v19[2];
  typedef uint32_t _g4_t_v20[3];
  typedef uint8_t _g4_t_v21[52];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v16)) > _g4_s3 ? (28u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v17)) > _g4_s4 ? (40u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v18)) > _g4_s5 ? (44u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v19)) > _g4_s6 ? (52u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v20)) > _g4_s7 ? (60u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v21)) > _g4_s8 ? (72u + sizeof(_g4_t_v21)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);

  v17 = getpid();
  result = 1;
  if ( a2 > 0 )
  {
    EVP_MD_CTX_init(v21);
    CRYPTO_lock(9, 18, &unk_1B15112, 0);
    CRYPTO_lock(9, 19, &unk_1B15112, 0);
    CRYPTO_THREADID_current(&unk_2141EC8);
    CRYPTO_lock(10, 19, &unk_1B15112, 0);
    dword_2141EC4 = 1;
    if ( dword_2141ED0 == 0 )
    {
      RAND_poll();
      dword_2141ED0 = 1;
    }
    v16 = *(double *)&qword_2141ED8 >= 32.0;
    if ( *(double *)&qword_2141ED8 < 32.0 )
    {
      *(double *)&qword_2141ED8 = *(double *)&qword_2141ED8 - (double)a2;
      if ( *(double *)&qword_2141ED8 < 0.0 )
        qword_2141ED8 = 0;
    }
    if ( dword_2141EC0 == 0 )
    {
      for ( i = 52; i != 0; --i )
        sub_1A23140("....................", 20, 0);
      if ( v16 )
        dword_2141EC0 = 1;
    }
    v5 = dword_2141EE0;
    v15 = dword_2141F00;
    v18[1] = dword_2141EE8;
    v19[0] = byte_2141EEC[0];
    v19[1] = byte_2141EEC[1];
    v20[0] = byte_2141EEC[2];
    v20[1] = byte_2141EEC[3];
    v20[2] = byte_2141EEC[4];
    v6 = dword_2141EE0 + 2 * (5 * ((a2 - 1) / 10) + 5);
    v18[0] = dword_2141EE4;
    dword_2141EE0 = v6;
    if ( dword_2141F00 < v6 )
      dword_2141EE0 = v6 % dword_2141F00;
    ++dword_2141EE4;
    dword_2141EC4 = 0;
    CRYPTO_lock(10, 18, &unk_1B15112, 0);
    v7 = v19;
    do
    {
      v13 = v7;
      v8 = 10;
      if ( a2 <= 10 )
        v8 = a2;
      a2 -= v8;
      v9 = (int)(uintptr_t)(EVP_sha1());
      EVP_DigestInit_ex(v21, v9, 0);
      v10 = v13;
      if ( v17 != 0 )
      {
        EVP_DigestUpdate(v21, &v17, 4);
        v17 = 0;
        v10 = v13;
      }
      v14 = v10;
      EVP_DigestUpdate(v21, v10, 20);
      EVP_DigestUpdate(v21, v18, 8);
      EVP_DigestUpdate(v21, a1, v8);
      if ( v5 + 10 - v15 <= 0 )
      {
        EVP_DigestUpdate(v21, &byte_2141F20[v5], 10);
      }
      else
      {
        EVP_DigestUpdate(v21, &byte_2141F20[v5], v15 - v5);
        EVP_DigestUpdate(v21, byte_2141F20, v5 + 10 - v15);
      }
      EVP_DigestFinal_ex(v21, v14, 0);
      v11 = 0;
      v7 = v14;
      do
      {
        byte_2141F20[v5] ^= *((uint8_t *)v14 + v11);
        if ( v15 <= ++v5 )
          v5 = 0;
        if ( v8 > v11 )
          *a1++ = *((uint8_t *)v20 + v11 + 2);
        ++v11;
      }
      while ( v11 != 10 );
    }
    while ( a2 > 0 );
    v12 = (int)(uintptr_t)(EVP_sha1());
    EVP_DigestInit_ex(v21, v12, 0);
    EVP_DigestUpdate(v21, v18, 8);
    EVP_DigestUpdate(v21, v14, 20);
    CRYPTO_lock(9, 18, &unk_1B15112, 0);
    EVP_DigestUpdate(v21, &byte_2141EEC, 20);
    EVP_DigestFinal_ex(v21, &byte_2141EEC, 0);
    CRYPTO_lock(10, 18, &unk_1B15112, 0);
    EVP_MD_CTX_cleanup(v21);
    result = 1;
    if ( !v16 )
    {
      ERR_put_error(36, 100, 100, &unk_1B15112, 0);
      ERR_add_error_data(1, (uint8_t)(uintptr_t)(&(aYouNeedToReadT[-34316276])) /* "You need to read the OpenSSL FAQ, http://www...." */ + (uint8_t)(uintptr_t)(&dword_20B9FF4));
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A23BC0  (binary VA: 0x1a23bc0)
// Original: sub_1A23BC0
// ----------------------------------------------------------------------------
bool sub_1A23BC0(int a1, int a2)
{
  int v2;
  double v3; // xmm0_8
  bool result;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v6)) > _g4_s1 ? (24u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);

  CRYPTO_THREADID_current(a1, a2, v6);
  if ( dword_2141EC4 == 0
    || (CRYPTO_lock(5, 19, (int)(uintptr_t)(&unk_1B15112), 0),
        v5 = CRYPTO_THREADID_cmp((&dword_2141EC8), v6),
        CRYPTO_lock(6, 19, (int)(uintptr_t)(&unk_1B15112), 0),
        v5 != 0) )
  {
    CRYPTO_lock(9, 18, (int)(uintptr_t)(&unk_1B15112), 0);
    CRYPTO_lock(9, 19, (int)(uintptr_t)(&unk_1B15112), 0);
    v2 = 0;
    CRYPTO_THREADID_cpy((&dword_2141EC8), v6);
    CRYPTO_lock(10, 19, (int)(uintptr_t)(&unk_1B15112), 0);
    dword_2141EC4 = 1;
  }
  else
  {
    v2 = 1;
  }
  if ( dword_2141ED0 == 0 )
  {
    RAND_poll();
    dword_2141ED0 = 1;
  }
  v3 = *(double *)&qword_2141ED8;
  result = *(double *)&qword_2141ED8 >= 32.0;
  if ( v2 == 0 )
  {
    dword_2141EC4 = 0;
    CRYPTO_lock(10, 18, (int)(uintptr_t)(&unk_1B15112), 0);
    return v3 >= 32.0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A23D70  (binary VA: 0x1a23d70)
// Original: sub_1A23D70
// ----------------------------------------------------------------------------
int sub_1A23D70(int a1, int a2)
{
  int v2;
  unsigned int v4;

  v2 = RAND_bytes(a1, a2);
  if ( v2 == 0 )
  {
    v4 = ERR_peek_error();
    if ( HIBYTE(v4) == 36 && (v4 & 0xFFF) == 0x64 )
      ERR_clear_error();
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_1A240B0  (binary VA: 0x1a240b0)
// Original: sub_1A240B0
// ----------------------------------------------------------------------------
int sub_1A240B0(int a1)
{
  *(uint32_t *)(a1 + 60) |= 6u;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A240C0  (binary VA: 0x1a240c0)
// Original: sub_1A240C0
// ----------------------------------------------------------------------------
int sub_1A240C0(void ***a1)
{
  if ( a1[16] != nullptr )
    BN_MONT_CTX_free(a1[16]);
  if ( a1[17] != nullptr )
    BN_MONT_CTX_free(a1[17]);
  if ( a1[18] != nullptr )
    BN_MONT_CTX_free(a1[18]);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_1A24120  (binary VA: 0x1a24120)
// Original: sub_1A24120
// ----------------------------------------------------------------------------
bool sub_1A24120(int *a1, int *a2, int a3, int *a4)
{
  int v4;
  int **v5;
  int **v6;
  g4_int128_t *v7;
  unsigned int v8;
  g4_int128_t *v9;
  unsigned int v10;
  int v11;
  g4_int128_t *v12;
  int v13;
  int v14;
  int *v15;
  int *v16;
  int v18;
  g4_int128_t *v19;
  int *v20;
  unsigned int v21;
  int v22;
  typedef int64_t _g4_t_v23;
  typedef int64_t _g4_t_v24;
  typedef int64_t _g4_t_v25;
  typedef int64_t _g4_t_v26;
  typedef int **_g4_t_v27;
  typedef bool _g4_t_v28;
  typedef g4_int128_t *_g4_t_v29;
  typedef int *_g4_t_v30;
  typedef int *_g4_t_v31;
  typedef g4_int128_t _g4_t_v32;
  typedef int _g4_t_v33;
  typedef g4_int128_t _g4_t_v34 __attribute__((aligned(1)));
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef g4_int128_t _g4_t_v41 __attribute__((aligned(1)));
  typedef unsigned int _g4_t_v42;
  typedef g4_int128_t _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef unsigned int _g4_t_v49;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v24)) > _g4_s1 ? (0u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v25)) > _g4_s2 ? (0u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v26)) > _g4_s3 ? (0u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v27)) > _g4_s4 ? (36u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v28)) > _g4_s5 ? (40u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v29)) > _g4_s6 ? (44u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v30)) > _g4_s7 ? (48u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v31)) > _g4_s8 ? (52u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v32)) > _g4_s9 ? (64u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v33)) > _g4_s10 ? (80u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v34)) > _g4_s11 ? (84u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v35)) > _g4_s12 ? (100u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v36)) > _g4_s13 ? (104u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v37)) > _g4_s14 ? (108u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v38)) > _g4_s15 ? (112u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v39)) > _g4_s16 ? (116u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v40)) > _g4_s17 ? (120u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v41)) > _g4_s18 ? (124u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (140u + sizeof(_g4_t_v42)) > _g4_s19 ? (140u + sizeof(_g4_t_v42)) : _g4_s19,
    _g4_s21 = (144u + sizeof(_g4_t_v43)) > _g4_s20 ? (144u + sizeof(_g4_t_v43)) : _g4_s20,
    _g4_s22 = (160u + sizeof(_g4_t_v44)) > _g4_s21 ? (160u + sizeof(_g4_t_v44)) : _g4_s21,
    _g4_s23 = (164u + sizeof(_g4_t_v45)) > _g4_s22 ? (164u + sizeof(_g4_t_v45)) : _g4_s22,
    _g4_s24 = (168u + sizeof(_g4_t_v46)) > _g4_s23 ? (168u + sizeof(_g4_t_v46)) : _g4_s23,
    _g4_s25 = (172u + sizeof(_g4_t_v47)) > _g4_s24 ? (172u + sizeof(_g4_t_v47)) : _g4_s24,
    _g4_s26 = (176u + sizeof(_g4_t_v48)) > _g4_s25 ? (176u + sizeof(_g4_t_v48)) : _g4_s25,
    _g4_s27 = (180u + sizeof(_g4_t_v49)) > _g4_s26 ? (180u + sizeof(_g4_t_v49)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 80u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 84u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 100u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 104u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 108u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 112u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 116u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 120u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 124u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 140u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 144u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 160u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 164u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 168u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 172u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 176u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 180u);

  BN_CTX_start((int)(uintptr_t)(a4));
  v29 = (g4_int128_t *)BN_CTX_get(a4);
  v30 = (int *)BN_CTX_get(a4);
  v31 = (int *)BN_CTX_get(a4);
  v4 = *(uint32_t *)(a3 + 60);
  if ( (v4 & 0x100) != 0 )
  {
    v5 = *(int ***)(a3 + 28);
    v6 = *(int ***)(a3 + 32);
  }
  else
  {
    BN_init(&v43);
    v19 = *(g4_int128_t **)(a3 + 28);
    v43 = *v19;
    v44 = v19[1] & 0xFFFFFFFE | v44 & 1 | 6;
    BN_init(&v45);
    v20 = *(int **)(a3 + 32);
    v6 = (int **)&v45;
    v45 = *v20;
    v46 = v20[1];
    v47 = v20[2];
    v48 = v20[3];
    v21 = v20[4] & 0xFFFFFFFE | v49 & 1;
    v5 = (int **)&v43;
    v49 = v21 | 6;
    v4 = *(uint32_t *)(a3 + 60);
  }
  if ( (v4 & 4) == 0 )
  {
    if ( (v4 & 2) == 0 )
      goto LABEL_5;
LABEL_43:
    v28 = false;
    if ( BN_MONT_CTX_set_locked((void ***)(a3 + 64), 9, *(int ***)(a3 + 16), a4) == nullptr )
      goto LABEL_38;
    v4 = *(uint32_t *)(a3 + 60);
    goto LABEL_5;
  }
  v27 = v6;
  v28 = false;
  if ( BN_MONT_CTX_set_locked((void ***)(a3 + 68), 9, v5, a4) == nullptr
    || BN_MONT_CTX_set_locked((void ***)(a3 + 72), 9, v27, a4) == nullptr )
  {
    goto LABEL_38;
  }
  v4 = *(uint32_t *)(a3 + 60);
  if ( (v4 & 2) != 0 )
    goto LABEL_43;
LABEL_5:
  if ( (v4 & 0x100) != 0 )
  {
    HIDWORD(v23) = *(uint32_t *)(a3 + 32);
    LODWORD(v23) = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
    v18 = a2[4];
    v36 = *a2;
    v37 = a2[1];
    v38 = a2[2];
    v39 = a2[3];
    v40 = v18 & 0xFFFFFFFE | v40 & 1 | 6;
    HIDWORD(v23) = *(uint32_t *)(a3 + 32);
    LODWORD(v23) = (uint32_t)(uintptr_t)(&v36);
  }
  v28 = false;
  if ( BN_div(nullptr, v29, v23, a4) != 0 )
  {
    v7 = *(g4_int128_t **)(a3 + 40);
    if ( (*(uint8_t *)(a3 + 61) & 1) == 0 )
    {
      v34 = *v7;
      v8 = v7[1] & 0xFFFFFFFE | v35 & 1;
      v7 = &v34;
      v35 = v8 | 6;
    }
    v28 = false;
    if ( (*(int (**)(int *, g4_int128_t *, g4_int128_t *, uint32_t, int *, uint32_t))(*(uint32_t *)(a3 + 8) + 24))(
           v30,
           v29,
           v7,
           *(uint32_t *)(a3 + 32),
           a4,
           *(uint32_t *)(a3 + 72)) != 0 )
    {
      if ( (*(uint8_t *)(a3 + 61) & 1) != 0 )
      {
        HIDWORD(v24) = *(uint32_t *)(a3 + 28);
        LODWORD(v24) = (uint32_t)(uintptr_t)(a2);
      }
      else
      {
        v22 = a2[4];
        v36 = *a2;
        v37 = a2[1];
        v38 = a2[2];
        v39 = a2[3];
        v40 = v22 & 0xFFFFFFFE | v40 & 1 | 6;
        HIDWORD(v24) = *(uint32_t *)(a3 + 28);
        LODWORD(v24) = (uint32_t)(uintptr_t)(&v36);
      }
      if ( BN_div(nullptr, v29, v24, a4) != 0 )
      {
        v9 = *(g4_int128_t **)(a3 + 36);
        if ( (*(uint8_t *)(a3 + 61) & 1) == 0 )
        {
          v32 = *v9;
          v10 = v9[1] & 0xFFFFFFFE | v33 & 1;
          v9 = &v32;
          v33 = v10 | 6;
        }
        v28 = false;
        if ( (*(int (**)(int *, g4_int128_t *, g4_int128_t *, uint32_t, int *, uint32_t))(*(uint32_t *)(a3 + 8) + 24))(
               a1,
               v29,
               v9,
               *(uint32_t *)(a3 + 28),
               a4,
               *(uint32_t *)(a3 + 68)) != 0 )
        {
          LOBYTE(v11) = BN_sub((int)(uintptr_t)(a1), a1, v30);
          if ( v11 != 0 && (a1[3] == 0 || BN_add((int)(uintptr_t)(a1), a1, *(int **)(a3 + 28)) != 0) )
          {
            v28 = false;
            if ( BN_mul(v29, (int)(uintptr_t)(a1), *(uint32_t *)(a3 + 44), a4) != 0 )
            {
              v12 = v29;
              if ( (*(uint8_t *)(a3 + 61) & 1) == 0 )
              {
                v41 = *v29;
                v42 = v29[1] & 0xFFFFFFFE | v42 & 1 | 6;
                v12 = &v41;
              }
              HIDWORD(v25) = *(uint32_t *)(a3 + 28);
              LODWORD(v25) = (uint32_t)(uintptr_t)(v12);
              v28 = false;
              if ( BN_div(nullptr, a1, v25, a4) != 0 && (a1[3] == 0 || BN_add((int)(uintptr_t)(a1), a1, *(int **)(a3 + 28)) != 0) )
              {
                v28 = false;
                if ( BN_mul(v29, (int)(uintptr_t)(a1), *(uint32_t *)(a3 + 32), a4) != 0 && BN_add((int)(uintptr_t)(a1), (int *)v29, v30) != 0 )
                {
                  v13 = *(uint32_t *)(a3 + 20);
                  v28 = true;
                  if ( v13 != 0 && *(uint32_t *)(a3 + 16) != 0 )
                  {
                    v28 = false;
                    if ( (*(int (**)(int *, int *, int, uint32_t, int *, uint32_t))(*(uint32_t *)(a3 + 8) + 24))(
                           v31,
                           a1,
                           v13,
                           *(uint32_t *)(a3 + 16),
                           a4,
                           *(uint32_t *)(a3 + 64)) != 0 )
                    {
                      LOBYTE(v14) = BN_sub((int)(uintptr_t)(v31), v31, a2);
                      if ( v14 != 0 )
                      {
                        HIDWORD(v26) = *(uint32_t *)(a3 + 16);
                        LODWORD(v26) = (uint32_t)(uintptr_t)(v31);
                        if ( BN_div(nullptr, v31, v26, a4) != 0
                          && (v31[3] == 0 || BN_add((int)(uintptr_t)(v31), v31, *(int **)(a3 + 16)) != 0) )
                        {
                          v28 = true;
                          if ( v31[1] != 0 )
                          {
                            if ( (*(uint8_t *)(a3 + 61) & 1) != 0 )
                            {
                              v16 = *(int **)(a3 + 24);
                            }
                            else
                            {
                              v15 = *(int **)(a3 + 24);
                              v45 = *v15;
                              v46 = v15[1];
                              v47 = v15[2];
                              v48 = v15[3];
                              v49 = v15[4] & 0xFFFFFFFE | v49 & 1 | 6;
                              v16 = &v45;
                            }
                            v28 = (*(int (**)(int *, int *, int *, uint32_t, int *, uint32_t))(*(uint32_t *)(a3 + 8)
                                                                                                 + 24))(
                                    a1,
                                    a2,
                                    v16,
                                    *(uint32_t *)(a3 + 16),
                                    a4,
                                    *(uint32_t *)(a3 + 64)) != 0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_38:
  BN_CTX_end(a4);
  return v28;
}

// ----------------------------------------------------------------------------
// Function: sub_1A24830  (binary VA: 0x1a24830)
// Original: sub_1A24830
// ----------------------------------------------------------------------------
int sub_1A24830(int a1, uint8_t *a2, void *a3, int a4, int a5)
{
  int *v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  uint8_t *v10;
  int v12;
  int v13;
  int v14;
  uint8_t *src;
  signed int v16;
  void **v17;
  int *v18;

  if ( BN_num_bits(*(uint32_t **)(a4 + 16)) > 0x4000 )
  {
    ERR_put_error(4, 103, 105, (int)(uintptr_t)(&unk_1B15112), 0);
    return -1;
  }
  if ( BN_ucmp(*(uint32_t **)(a4 + 16), *(uint32_t **)(a4 + 20)) <= 0
    || BN_num_bits(*(uint32_t **)(a4 + 16)) > 3072 && BN_num_bits(*(uint32_t **)(a4 + 20)) > 64 )
  {
    ERR_put_error(4, 103, 101, (int)(uintptr_t)(&unk_1B15112), 0);
    return -1;
  }
  v5 = (int *)(BN_CTX_new());
  v6 = v5;
  v16 = -1;
  if ( v5 != nullptr )
  {
    BN_CTX_start((int)(uintptr_t)(v5));
    v17 = (void **)BN_CTX_get(v6);
    v18 = (int *)BN_CTX_get(v6);
    v7 = BN_num_bits(*(uint32_t **)(a4 + 16));
    v8 = v7 + 7;
    if ( v7 + 7 < 0 )
      v8 = v7 + 14;
    v9 = v8 >> 3;
    v10 = CRYPTO_malloc(v9, (int)(uintptr_t)(&unk_1B15112), 0);
    src = v10;
    if ( v18 == nullptr || v17 == nullptr || v10 == nullptr )
    {
      ERR_put_error(4, 103, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      v16 = -1;
      goto LABEL_15;
    }
    if ( v9 < a1 )
    {
      ERR_put_error(4, 103, 108, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_15;
    }
    if ( BN_bin2bn(a2, a1, v17) == nullptr )
      goto LABEL_15;
    if ( BN_ucmp(v17, *(uint32_t **)(a4 + 16)) >= 0 )
    {
      ERR_put_error(4, 103, 132, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_15;
    }
    if ( (*(uint8_t *)(a4 + 60) & 2) != 0
      && BN_MONT_CTX_set_locked((void ***)(a4 + 64), 9, *(int ***)(a4 + 16), v6) == nullptr )
    {
      goto LABEL_15;
    }
    v16 = -1;
    if ( (*(int (**)(int *, void **, uint32_t, uint32_t, int *, uint32_t))(*(uint32_t *)(a4 + 8) + 24))(
           v18,
           v17,
           *(uint32_t *)(a4 + 20),
           *(uint32_t *)(a4 + 16),
           v6,
           *(uint32_t *)(a4 + 64)) == 0 )
      goto LABEL_15;
    if ( a5 == 5 )
    {
      if ( (*(uint32_t *)*v18 & 0xF) == 0xC || (LOBYTE(v12) = BN_sub((int)(uintptr_t)(v18), *(int **)(a4 + 16), v18), v12 != 0) )
      {
        v13 = BN_bn2bin(v18, src);
        v16 = RSA_padding_check_X931(a3, v9, src, v13, v9);
        goto LABEL_28;
      }
LABEL_15:
      BN_CTX_end(v6);
      BN_CTX_free((void **)v6);
      if ( src != nullptr )
      {
        OPENSSL_cleanse(src, v9);
        CRYPTO_free(src);
      }
      return v16;
    }
    v14 = BN_bn2bin(v18, src);
    if ( a5 == 3 )
    {
      v16 = RSA_padding_check_none(a3, v9, src, v14);
    }
    else
    {
      if ( a5 != 1 )
      {
        ERR_put_error(4, 103, 118, (int)(uintptr_t)(&unk_1B15112), 0);
        goto LABEL_15;
      }
      v16 = RSA_padding_check_PKCS1_type_1(a3, v9, (int)(uintptr_t)(src), v14, v9);
    }
LABEL_28:
    if ( v16 < 0 )
      ERR_put_error(4, 103, 114, (int)(uintptr_t)(&unk_1B15112), 0);
    goto LABEL_15;
  }
  return v16;
}

// ----------------------------------------------------------------------------
// Function: sub_1A24CA0  (binary VA: 0x1a24ca0)
// Original: sub_1A24CA0
// ----------------------------------------------------------------------------
int sub_1A24CA0(size_t a1, void *src, int a3, int a4, int a5)
{
  int *v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  uint8_t *v10;
  int v11;
  int v13;
  int v14;
  int v15;
  int v16;
  int i;
  uint8_t *v18;
  int v19;
  void **v20;
  uint8_t *v21;

  if ( BN_num_bits(*(uint32_t **)(a4 + 16)) > 0x4000 )
  {
    ERR_put_error(4, 104, 105, (int)(uintptr_t)(&unk_1B15112), 0);
    return -1;
  }
  if ( BN_ucmp(*(uint32_t **)(a4 + 16), *(uint32_t **)(a4 + 20)) <= 0
    || BN_num_bits(*(uint32_t **)(a4 + 16)) > 3072 && BN_num_bits(*(uint32_t **)(a4 + 20)) > 64 )
  {
    ERR_put_error(4, 104, 101, (int)(uintptr_t)(&unk_1B15112), 0);
    return -1;
  }
  v5 = (int *)(BN_CTX_new());
  v6 = v5;
  v19 = -1;
  if ( v5 != nullptr )
  {
    BN_CTX_start((int)(uintptr_t)(v5));
    v20 = (void **)BN_CTX_get(v6);
    v21 = BN_CTX_get(v6);
    v7 = BN_num_bits(*(uint32_t **)(a4 + 16));
    v8 = v7 + 7;
    if ( v7 + 7 < 0 )
      v8 = v7 + 14;
    v9 = v8 >> 3;
    v10 = CRYPTO_malloc(v9, (int)(uintptr_t)(&unk_1B15112), 0);
    v18 = v10;
    if ( v21 != nullptr && v20 != nullptr && v10 != nullptr )
    {
      if ( a5 == 2 )
      {
        v11 = RSA_padding_add_SSLv23((int)(uintptr_t)(v10), v9, src, a1);
        goto LABEL_15;
      }
      if ( a5 <= 2 )
      {
        if ( a5 == 1 )
        {
          v11 = RSA_padding_add_PKCS1_type_2((int)(uintptr_t)(v10), v9, src, a1);
          goto LABEL_15;
        }
      }
      else
      {
        if ( a5 == 3 )
        {
          v11 = RSA_padding_add_none(v10, v9, src, a1);
          goto LABEL_15;
        }
        if ( a5 == 4 )
        {
          v11 = RSA_padding_add_PKCS1_OAEP((int)(uintptr_t)(v10), v9, src, a1, 0, 0);
LABEL_15:
          v19 = -1;
          if ( v11 > 0 && BN_bin2bn(v18, v9, v20) != nullptr )
          {
            if ( BN_ucmp(v20, *(uint32_t **)(a4 + 16)) < 0 )
            {
              if ( (*(uint8_t *)(a4 + 60) & 2) == 0
                || BN_MONT_CTX_set_locked((void ***)(a4 + 64), 9, *(int ***)(a4 + 16), v6) != nullptr )
              {
                v19 = -1;
                if ( (*(int (**)(uint8_t *, void **, uint32_t, uint32_t, int *, uint32_t))(*(uint32_t *)(a4 + 8) + 24))(
                       v21,
                       v20,
                       *(uint32_t *)(a4 + 20),
                       *(uint32_t *)(a4 + 16),
                       v6,
                       *(uint32_t *)(a4 + 64)) != 0 )
                {
                  v13 = BN_num_bits(v21);
                  v14 = v13 + 14;
                  v15 = v13 + 7;
                  if ( v15 < 0 )
                    v15 = v14;
                  v19 = v9;
                  v16 = v9 - BN_bn2bin(v21, (uint8_t *)(v9 - (v15 >> 3) + a3));
                  if ( v16 > 0 )
                  {
                    for ( i = 0; i != v16; ++i )
                      *(uint8_t *)(a3 + i) = 0;
                    v19 = v9;
                  }
                }
              }
            }
            else
            {
              ERR_put_error(4, 104, 132, (int)(uintptr_t)(&unk_1B15112), 0);
            }
          }
          goto LABEL_20;
        }
      }
      ERR_put_error(4, 104, 118, (int)(uintptr_t)(&unk_1B15112), 0);
      v19 = -1;
    }
    else
    {
      ERR_put_error(4, 104, 65, (int)(uintptr_t)(&unk_1B15112), 0);
      v19 = -1;
    }
LABEL_20:
    BN_CTX_end(v6);
    BN_CTX_free((void **)v6);
    if ( v18 != nullptr )
    {
      OPENSSL_cleanse(v18, v9);
      CRYPTO_free(v18);
    }
  }
  return v19;
}

// ----------------------------------------------------------------------------
// Function: sub_1A25100  (binary VA: 0x1a25100)
// Original: sub_1A25100
// ----------------------------------------------------------------------------
int sub_1A25100(int a1, uint32_t *a2, int *a3)
{
  int v4;
  int v5;
  void *v6;
  typedef int _g4_t_v8;
  typedef uint32_t _g4_t_v10[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v10)) > _g4_s1 ? (24u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);

  CRYPTO_lock(5, 9, (int)(uintptr_t)(&unk_1B15112), 0);
  v4 = *(uint32_t *)(a1 + 80);
  v5 = 0;
  if ( v4 == 0 )
  {
    CRYPTO_lock(6, 9, (int)(uintptr_t)(&unk_1B15112), 0);
    CRYPTO_lock(9, 9, (int)(uintptr_t)(&unk_1B15112), 0);
    v4 = *(uint32_t *)(a1 + 80);
    v5 = 1;
    if ( v4 == 0 )
    {
      v4 = RSA_setup_blinding(a1, a3);
      *(uint32_t *)(a1 + 80) = v4;
      v5 = 1;
      if ( v4 == 0 )
        goto LABEL_8;
    }
  }
  v8 = v5;
  CRYPTO_THREADID_current((int)(uintptr_t)(v10), v5, v10);
  v6 = (void *)BN_BLINDING_thread_id(v4);
  if ( CRYPTO_THREADID_cmp(v10, v6) == 0 )
  {
    *a2 = 1;
    if ( v8 == 0 )
      goto LABEL_5;
    goto LABEL_8;
  }
  *a2 = 0;
  v4 = *(uint32_t *)(a1 + 84);
  if ( v4 == 0 )
  {
    if ( v8 != 0
      || (CRYPTO_lock(6, 9, (int)(uintptr_t)(&unk_1B15112), 0),
          CRYPTO_lock(9, 9, (int)(uintptr_t)(&unk_1B15112), 0),
          (v4 = *(uint32_t *)(a1 + 84)) == 0) )
    {
      v4 = RSA_setup_blinding(a1, a3);
      *(uint32_t *)(a1 + 84) = v4;
    }
    goto LABEL_8;
  }
  if ( v8 != 0 )
  {
LABEL_8:
    CRYPTO_lock(10, 9, (int)(uintptr_t)(&unk_1B15112), 0);
    return v4;
  }
LABEL_5:
  CRYPTO_lock(6, 9, (int)(uintptr_t)(&unk_1B15112), 0);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_1A25300  (binary VA: 0x1a25300)
// Original: sub_1A25300
// ----------------------------------------------------------------------------
bool sub_1A25300(int *a1, int a2, int a3, uint32_t *a4, int a5)
{
  bool v7;

  if ( a2 != 0 )
    return BN_BLINDING_convert_ex(a3, nullptr, a1, a5);
  CRYPTO_lock(5, 25, (int)(uintptr_t)(&unk_1B15112), 0);
  v7 = BN_BLINDING_convert_ex(a3, a4, a1, a5);
  CRYPTO_lock(6, 25, (int)(uintptr_t)(&unk_1B15112), 0);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: sub_1A253D0  (binary VA: 0x1a253d0)
// Original: sub_1A253D0
// ----------------------------------------------------------------------------
int sub_1A253D0(int *a1, int a2, int a3, int a4, int a5)
{
  int v7;

  if ( a2 != 0 )
    return BN_BLINDING_invert_ex(a3, 0, a1, a5);
  CRYPTO_lock(9, 25, (int)(uintptr_t)(&unk_1B15112), 0);
  v7 = BN_BLINDING_invert_ex(a3, a4, a1, a5);
  CRYPTO_lock(10, 25, (int)(uintptr_t)(&unk_1B15112), 0);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: sub_1A254A0  (binary VA: 0x1a254a0)
// Original: sub_1A254A0
// ----------------------------------------------------------------------------
int sub_1A254A0(int a1, uint8_t *a2, void *dest, int a4, int a5)
{
  int *v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  uint8_t *v10;
  int v11;
  int *v12;
  int v13;
  bool v14;
  int v15;
  int v16;
  int v17;
  int result;
  void **v19;
  int *v20;
  bool v21;
  typedef int *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int *_g4_t_v25;
  typedef int *_g4_t_v26;
  typedef g4_int128_t *_g4_t_v27;
  typedef uint8_t *_g4_t_src;
  typedef void **_g4_t_v29;
  typedef uint8_t *_g4_t_v30;
  typedef uint8_t *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef g4_int128_t _g4_t_v33;
  typedef unsigned int _g4_t_v34;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v22)) > _g4_s0 ? (8u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v24)) > _g4_s2 ? (8u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v25)) > _g4_s3 ? (8u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v26)) > _g4_s4 ? (8u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v27)) > _g4_s5 ? (12u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_src)) > _g4_s6 ? (16u + sizeof(_g4_t_src)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v29)) > _g4_s7 ? (20u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v30)) > _g4_s8 ? (24u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v31)) > _g4_s9 ? (32u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v32)) > _g4_s10 ? (44u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v33)) > _g4_s11 ? (48u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v34)) > _g4_s12 ? (64u + sizeof(_g4_t_v34)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);

  v32 = 0;
  v5 = (int *)(BN_CTX_new());
  v6 = v5;
  if ( v5 == nullptr )
    return -1;
  BN_CTX_start((int)(uintptr_t)(v5));
  v29 = (void **)BN_CTX_get(v6);
  v31 = BN_CTX_get(v6);
  v30 = BN_CTX_get(v6);
  v7 = BN_num_bits(*(uint32_t **)(a4 + 16));
  v8 = v7 + 7;
  if ( v7 + 7 < 0 )
    v8 = v7 + 14;
  v9 = v8 >> 3;
  v10 = CRYPTO_malloc(v9, (int)(uintptr_t)(&unk_1B15112), 0);
  src = v10;
  if ( v30 == nullptr || v29 == nullptr || v10 == nullptr )
  {
    ERR_put_error(4, 101, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    v15 = -1;
    goto LABEL_26;
  }
  if ( v9 < a1 )
  {
    ERR_put_error(4, 101, 108, (int)(uintptr_t)(&unk_1B15112), 0);
    v15 = -1;
    goto LABEL_26;
  }
  if ( BN_bin2bn(a2, a1, v29) == nullptr )
    goto LABEL_49;
  if ( BN_ucmp(v29, *(uint32_t **)(a4 + 16)) >= 0 )
  {
    ERR_put_error(4, 101, 132, (int)(uintptr_t)(&unk_1B15112), 0);
    v15 = -1;
    goto LABEL_26;
  }
  v11 = *(uint32_t *)(a4 + 60);
  v12 = nullptr;
  if ( (v11 & 0x80u) != 0 )
  {
LABEL_11:
    if ( (v11 & 0x20) != 0
      || *(uint32_t *)(a4 + 28) != 0
      && *(uint32_t *)(a4 + 32) != 0
      && *(uint32_t *)(a4 + 36) != 0
      && *(uint32_t *)(a4 + 40) != 0
      && *(uint32_t *)(a4 + 44) != 0 )
    {
      v22 = v12;
      v13 = (*(int (**)(uint8_t *, void **, int, int *))(*(uint32_t *)(a4 + 8) + 20))(v30, v29, a4, v6);
LABEL_18:
      v14 = v13 == 0;
      v15 = -1;
      if ( v14 )
        goto LABEL_26;
      if ( v22 != nullptr )
      {
        v16 = sub_1A253D0(v22, v32, (int)(uintptr_t)(v30), (int)(uintptr_t)(v31), (int)(uintptr_t)(v6));
        v15 = -1;
        if ( v16 == 0 )
          goto LABEL_26;
      }
      v17 = BN_bn2bin(v30, src);
      switch ( a5 )
      {
        case 1:
          v15 = RSA_padding_check_PKCS1_type_2(dest, v9, (int)(uintptr_t)(src), v17, v9);
          break;
        case 2:
          v15 = RSA_padding_check_SSLv23(dest, v9, (int)(uintptr_t)(src), v17, v9);
          break;
        case 3:
          v15 = RSA_padding_check_none(dest, v9, src, v17);
          break;
        case 4:
          v15 = RSA_padding_check_PKCS1_OAEP(dest, v9, src, v17, v9, 0, 0);
          break;
        default:
          ERR_put_error(4, 101, 118, (int)(uintptr_t)(&unk_1B15112), 0);
          v15 = -1;
          goto LABEL_26;
      }
      if ( v15 < 0 )
      {
        v24 = v15;
        ERR_put_error(4, 101, 114, (int)(uintptr_t)(&unk_1B15112), 0);
        v15 = v24;
      }
      goto LABEL_26;
    }
    if ( (v11 & 0x100) != 0 )
    {
      v27 = *(g4_int128_t **)(a4 + 24);
    }
    else
    {
      v33 = *(g4_int128_t *)*(uint32_t *)(a4 + 24);
      v34 = *(uint32_t *)(*(uint32_t *)(a4 + 24) + 16) & 0xFFFFFFFE | v34 & 1 | 6;
      v27 = &v33;
    }
    if ( (v11 & 2) == 0
      || (v25 = v12,
          v19 = BN_MONT_CTX_set_locked((void ***)(a4 + 64), 9, *(int ***)(a4 + 16), v6),
          v12 = v25,
          v19 != nullptr) )
    {
      v22 = v12;
      v13 = (*(int (**)(uint8_t *, void **, g4_int128_t *, uint32_t, int *, uint32_t))(*(uint32_t *)(a4 + 8) + 24))(
              v30,
              v29,
              v27,
              *(uint32_t *)(a4 + 16),
              v6,
              *(uint32_t *)(a4 + 64));
      goto LABEL_18;
    }
LABEL_49:
    v15 = -1;
    goto LABEL_26;
  }
  v20 = (int *)sub_1A25100(a4, &v32, v6);
  if ( v20 != nullptr )
  {
    v26 = v20;
    v21 = sub_1A25300(v20, v32, (int)(uintptr_t)(v29), v31, (int)(uintptr_t)(v6));
    v12 = v26;
    v14 = !v21;
    v15 = -1;
    if ( v14 )
      goto LABEL_26;
    v11 = *(uint32_t *)(a4 + 60);
    goto LABEL_11;
  }
  ERR_put_error(4, 101, 68, (int)(uintptr_t)(&unk_1B15112), 0);
  v15 = -1;
LABEL_26:
  v23 = v15;
  BN_CTX_end(v6);
  BN_CTX_free((void **)v6);
  result = v23;
  if ( src != nullptr )
  {
    OPENSSL_cleanse(src, v9);
    CRYPTO_free(src);
    return v23;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A25A50  (binary VA: 0x1a25a50)
// Original: sub_1A25A50
// ----------------------------------------------------------------------------
int sub_1A25A50(size_t a1, void *src, int a3, int a4, int a5)
{
  int *v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  uint8_t *v10;
  int v12;
  int v13;
  int *v14;
  int v15;
  int *v16;
  int *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int i;
  g4_int128_t *v23;
  void **v24;
  int v25;
  g4_int128_t *v26;
  unsigned int v27;
  int *v28;
  bool v29;
  int v30;
  typedef int *_g4_t_v31;
  typedef int *_g4_t_v32;
  typedef int *_g4_t_v33;
  typedef int *_g4_t_v34;
  typedef int *_g4_t_v35;
  typedef int *_g4_t_v36;
  typedef g4_int128_t *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint8_t *_g4_t_v39;
  typedef int *_g4_t_v40;
  typedef int *_g4_t_v41;
  typedef uint8_t *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef g4_int128_t _g4_t_v44;
  typedef int _g4_t_v45;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v31)) > _g4_s0 ? (4u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v32)) > _g4_s1 ? (4u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v33)) > _g4_s2 ? (4u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v34)) > _g4_s3 ? (4u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v35)) > _g4_s4 ? (4u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v36)) > _g4_s5 ? (8u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v37)) > _g4_s6 ? (8u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v38)) > _g4_s7 ? (12u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v39)) > _g4_s8 ? (16u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v40)) > _g4_s9 ? (20u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v41)) > _g4_s10 ? (24u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v42)) > _g4_s11 ? (32u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v43)) > _g4_s12 ? (44u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v44)) > _g4_s13 ? (48u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v45)) > _g4_s14 ? (64u + sizeof(_g4_t_v45)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 24u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 48u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 64u);

  v43 = 0;
  v5 = (int *)(BN_CTX_new());
  v6 = v5;
  if ( v5 == nullptr )
    return -1;
  BN_CTX_start((int)(uintptr_t)(v5));
  v40 = (int *)BN_CTX_get(v6);
  v42 = BN_CTX_get(v6);
  v41 = (int *)BN_CTX_get(v6);
  v7 = BN_num_bits(*(uint32_t **)(a4 + 16));
  v8 = v7 + 7;
  if ( v7 + 7 < 0 )
    v8 = v7 + 14;
  v9 = v8 >> 3;
  v10 = CRYPTO_malloc(v9, (int)(uintptr_t)(&unk_1B15112), 0);
  v39 = v10;
  if ( v41 == nullptr || v40 == nullptr || v10 == nullptr )
  {
    ERR_put_error(4, 102, 65, (int)(uintptr_t)(&unk_1B15112), 0);
    v38 = -1;
    goto LABEL_11;
  }
  switch ( a5 )
  {
    case 3:
      v12 = RSA_padding_add_none(v10, v9, src, a1);
      break;
    case 5:
      v12 = RSA_padding_add_X931(v10, v9, src, a1);
      break;
    case 1:
      v12 = RSA_padding_add_PKCS1_type_1((int)(uintptr_t)(v10), v9, src, a1);
      break;
    default:
      ERR_put_error(4, 102, 118, (int)(uintptr_t)(&unk_1B15112), 0);
      v38 = -1;
      goto LABEL_11;
  }
  v38 = -1;
  if ( v12 > 0 && BN_bin2bn(v39, v9, (void **)v40) != nullptr )
  {
    if ( BN_ucmp(v40, *(uint32_t **)(a4 + 16)) >= 0 )
    {
      ERR_put_error(4, 102, 132, (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_11;
    }
    v13 = *(uint32_t *)(a4 + 60);
    v14 = nullptr;
    if ( (v13 & 0x80u) == 0 )
    {
      v28 = (int *)sub_1A25100(a4, &v43, v6);
      if ( v28 == nullptr )
      {
        ERR_put_error(4, 102, 68, (int)(uintptr_t)(&unk_1B15112), 0);
        goto LABEL_11;
      }
      v35 = v28;
      v29 = sub_1A25300(v28, v43, (int)(uintptr_t)(v40), v42, (int)(uintptr_t)(v6));
      v14 = v35;
      if ( !v29 )
        goto LABEL_11;
      v13 = *(uint32_t *)(a4 + 60);
    }
    if ( (v13 & 0x20) != 0
      || *(uint32_t *)(a4 + 28) != 0
      && *(uint32_t *)(a4 + 32) != 0
      && *(uint32_t *)(a4 + 36) != 0
      && *(uint32_t *)(a4 + 40) != 0
      && *(uint32_t *)(a4 + 44) != 0 )
    {
      v31 = v14;
      v15 = (*(int (**)(int *, int *, int, int *))(*(uint32_t *)(a4 + 8) + 20))(v41, v40, a4, v6);
      v38 = -1;
      v16 = v31;
      if ( v15 != 0 )
      {
LABEL_26:
        if ( v16 == nullptr || (v38 = -1, sub_1A253D0(v16, v43, (int)(uintptr_t)(v41), (int)(uintptr_t)(v42), (int)(uintptr_t)(v6)) != 0) )
        {
          v17 = v41;
          if ( a5 == 5 )
          {
            BN_sub((int)(uintptr_t)(v40), *(int **)(a4 + 16), v41);
            v30 = BN_cmp(v41, v40);
            v17 = v41;
            if ( v30 != 0 )
              v17 = v40;
          }
          v36 = v17;
          v18 = BN_num_bits(v17);
          v19 = v18 + 14;
          v20 = v18 + 7;
          if ( v20 < 0 )
            v20 = v19;
          v38 = v9;
          v21 = v9 - BN_bn2bin(v36, (uint8_t *)(v9 - (v20 >> 3) + a3));
          if ( v21 > 0 )
          {
            for ( i = 0; i != v21; ++i )
              *(uint8_t *)(a3 + i) = 0;
            v38 = v9;
          }
        }
      }
    }
    else
    {
      if ( (v13 & 0x100) != 0 )
      {
        v23 = *(g4_int128_t **)(a4 + 24);
      }
      else
      {
        v34 = v14;
        BN_init(&v44);
        v26 = *(g4_int128_t **)(a4 + 24);
        v14 = v34;
        v44 = *v26;
        v27 = v26[1] & 0xFFFFFFFE | v45 & 1;
        v13 = *(uint32_t *)(a4 + 60);
        v45 = v27 | 6;
        v23 = &v44;
      }
      if ( (v13 & 2) != 0
        && (v37 = v23,
            v32 = v14,
            v24 = BN_MONT_CTX_set_locked((void ***)(a4 + 64), 9, *(int ***)(a4 + 16), v6),
            v23 = v37,
            v14 = v32,
            v24 == nullptr) )
      {
        v38 = -1;
      }
      else
      {
        v33 = v14;
        v25 = (*(int (**)(int *, int *, g4_int128_t *, uint32_t, int *, uint32_t))(*(uint32_t *)(a4 + 8) + 24))(
                v41,
                v40,
                v23,
                *(uint32_t *)(a4 + 16),
                v6,
                *(uint32_t *)(a4 + 64));
        v38 = -1;
        v16 = v33;
        if ( v25 != 0 )
          goto LABEL_26;
      }
    }
  }
LABEL_11:
  BN_CTX_end(v6);
  BN_CTX_free((void **)v6);
  if ( v39 != nullptr )
  {
    OPENSSL_cleanse(v39, v9);
    CRYPTO_free(v39);
  }
  return v38;
}

// ----------------------------------------------------------------------------
// Function: sub_1A27880  (binary VA: 0x1a27880)
// Original: sub_1A27880
// ----------------------------------------------------------------------------
int sub_1A27880(void **a1)
{
  if ( ((uint8_t)(uintptr_t)(a1)[7] & 1) != 0 )
  {
    CRYPTO_free(a1[1]);
    if ( *a1 == (char *)&dword_0 + 3 )
    {
      CRYPTO_free(a1[4]);
      CRYPTO_free(a1[5]);
      CRYPTO_free(a1[6]);
    }
  }
  return CRYPTO_free(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_1A278F0  (binary VA: 0x1a278f0)
// Original: sub_1A278F0
// ----------------------------------------------------------------------------
int sub_1A278F0(int a1, int a2, int a3)
{
  int (*v3)(int, uint32_t *);
  int result;
  uint32_t v5[9];

  memset(v5, 0, 0x20u);
  v5[0] = 5;
  v5[1] = a1;
  v3 = *(int (**)(int, uint32_t *))(*(uint32_t *)a3 + 8);
  result = 0;
  if ( v3 != nullptr )
    return -(v3(a3, v5) == 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A27950  (binary VA: 0x1a27950)
// Original: sub_1A27950
// ----------------------------------------------------------------------------
uint32_t * sub_1A27950(int a1, int a2, int a3, int a4, int a5)
{
  uint32_t *result;

  if ( a1 != 0 )
  {
    if ( a5 != 0 || (unsigned int)(a3 - 1) > 2 )
    {
      result = (uint32_t *)(CRYPTO_malloc(32, (int)(uintptr_t)(&unk_1B15112), 0));
      if ( result != nullptr )
      {
        result[1] = a1;
        *result = a3;
        result[3] = a5;
        result[7] = a2 != 0;
        result[2] = a4;
      }
    }
    else
    {
      ERR_put_error(40, 109, 105, (int)(uintptr_t)(&unk_1B15112), 0);
      return nullptr;
    }
  }
  else
  {
    ERR_put_error(40, 109, 67, (int)(uintptr_t)(&unk_1B15112), 0);
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1A27A50  (binary VA: 0x1a27a50)
// Original: sub_1A27A50
// ----------------------------------------------------------------------------
int sub_1A27A50(int a1, int a2, int a3, int a4, int a5, int a6, void *a7, void *a8, void *a9)
{
  void **v10;
  int v11;
  uint32_t *v13;

  v10 = (void **)sub_1A27950(a2, a3, a4, a5, a6);
  if ( v10 == nullptr )
    return -1;
  if ( *(uint32_t *)(a1 + 4) != 0 || (v13 = sk_new_null(), *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v13), v13 != nullptr) )
  {
    v10[4] = a7;
    v10[5] = a8;
    v10[6] = a9;
    v11 = sk_push(*(int **)(a1 + 4), (int)(uintptr_t)(v10));
    return v11 - (v11 <= 0);
  }
  else
  {
    sub_1A27880(v10);
    return -1;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_1A27B10  (binary VA: 0x1a27b10)
// Original: sub_1A27B10
// ----------------------------------------------------------------------------
int sub_1A27B10(int a1, int a2, void *a3, char *a4, const char *s, int a6, int a7, int a8)
{
  char *v9;
  char i;
  void **v11;
  int v12;
  uint32_t *v14;

  if ( a4 != nullptr && s != nullptr )
  {
    v9 = a4;
    for ( i = *a4; *v9 != 0; i = *v9 )
    {
      if ( strchr(s, i) != nullptr )
        ERR_put_error(40, 108, 104, (int)(uintptr_t)(&unk_1B15112), 0);
      ++v9;
    }
    v11 = (void **)sub_1A27950(a2, a6, 3, a7, a8);
    if ( v11 != nullptr )
    {
      if ( *(uint32_t *)(a1 + 4) != 0 || (v14 = sk_new_null(), *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v14), v14 != nullptr) )
      {
        v11[6] = (void *)s;
        v11[4] = a3;
        v11[5] = a4;
        v12 = sk_push(*(int **)(a1 + 4), (int)(uintptr_t)(v11));
        return v12 - (v12 <= 0);
      }
      else
      {
        sub_1A27880(v11);
        return -1;
      }
    }
    else
    {
      return -1;
    }
  }
  else
  {
    ERR_put_error(40, 108, 67, (int)(uintptr_t)(&unk_1B15112), 0);
    return -1;
  }
}

// ----------------------------------------------------------------------------
// Function: UI_free  (binary VA: 0x1a27c70)
// Original: UI_free
// ----------------------------------------------------------------------------
int UI_free(void ***a1)
{
  int result;

  if ( a1 != nullptr )
  {
    sk_pop_free(a1[1], (void (*)(uint32_t))sub_1A27880);
    CRYPTO_free_ex_data(11, (int)(uintptr_t)(a1), (int)(uintptr_t)(a1 + 3));
    return CRYPTO_free(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: UI_add_input_string  (binary VA: 0x1a27cd0)
// Original: UI_add_input_string
// ----------------------------------------------------------------------------
int UI_add_input_string(int a1, int a2, int a3, int a4, void *a5, void *a6)
{
  return sub_1A27A50(a1, a2, 0, 1, a3, a4, a5, a6, nullptr);
}

// ----------------------------------------------------------------------------
// Function: UI_dup_input_string  (binary VA: 0x1a27d20)
// Original: UI_dup_input_string
// ----------------------------------------------------------------------------
int UI_dup_input_string(int a1, char *a2, int a3, int a4, void *a5, void *a6)
{
  char *v6;

  if ( a2 == nullptr )
  {
    v6 = nullptr;
    return sub_1A27A50(a1, (int)(uintptr_t)(v6), 1, 1, a3, a4, a5, a6, nullptr);
  }
  v6 = BUF_strdup(a2);
  if ( v6 != nullptr )
    return sub_1A27A50(a1, (int)(uintptr_t)(v6), 1, 1, a3, a4, a5, a6, nullptr);
  ERR_put_error(40, 103, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: UI_add_verify_string  (binary VA: 0x1a27dd0)
// Original: UI_add_verify_string
// ----------------------------------------------------------------------------
int UI_add_verify_string(int a1, int a2, int a3, int a4, void *a5, void *a6, void *a7)
{
  return sub_1A27A50(a1, a2, 0, 2, a3, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: UI_dup_verify_string  (binary VA: 0x1a27df0)
// Original: UI_dup_verify_string
// ----------------------------------------------------------------------------
int UI_dup_verify_string(int a1, char *a2, int a3, int a4, void *a5, void *a6, void *a7)
{
  void *v7;
  char *v8;

  v7 = a7;
  if ( a2 == nullptr )
  {
    v8 = nullptr;
    return sub_1A27A50(a1, (int)(uintptr_t)(v8), 1, 2, a3, a4, a5, a6, v7);
  }
  v8 = BUF_strdup(a2);
  v7 = a7;
  if ( v8 != nullptr )
    return sub_1A27A50(a1, (int)(uintptr_t)(v8), 1, 2, a3, a4, a5, a6, v7);
  ERR_put_error(40, 106, 65, (int)(uintptr_t)(&unk_1B15112), 0);
  return -1;
}

// ----------------------------------------------------------------------------
// Function: UI_add_input_boolean  (binary VA: 0x1a27ef0)
// Original: UI_add_input_boolean
// ----------------------------------------------------------------------------
int UI_add_input_boolean(int a1, int a2, void *a3, char *a4, const char *a5, int a6, int a7)
{
  return sub_1A27B10(a1, a2, a3, a4, a5, 0, a6, a7);
}


