// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd974c):
//   ../../../../../lib/glitch/include/boost/uuid/sha1.hpp
// Referenced by 6 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x132d7c0 .. 0x132d85d (157 bytes)
// Symbol:               sub_132D7C0
// Demangled:            sub_132D7C0
// ============================================================================
/*
void __noreturn sub_132D7C0()
{
  int v0;
  uint8_t v1[4];
  uint8_t v2[4];
  void (**v3)(boost::exception_detail::error_info_injector<std::runtime_error> *__hidden);
  uint8_t v4[4];
  void (**v5)(boost::exception_detail::error_info_injector<std::runtime_error> *__hidden);
  int v6;
  const char *v7;
  const char *v8;
  int v9;

  std::string::__construct_from_cstr((int)&v0 + 1, "sha1 too many bytes", (int)&v0);
  sub_19042E0(v1, (char *)&v0 + 1);
  v3 = (void (**)(boost::exception_detail::error_info_injector<std::runtime_error> *__hidden))off_20A9AA8;
  std::string::__construct_copy(v4, v2);
  v6 = 0;
  v9 = 104;
  v5 = off_209383C;
  v3 = off_2093828;
  v7 = "void boost::uuids::detail::sha1::process_byte(unsigned char)";
  v8 = "../../../../../lib/glitch/include/boost/uuid/sha1.hpp";
  std::terminate();
}

*/

// ============================================================================
// Referencing Function: 0x132e1a0 .. 0x1330963 (10179 bytes)
// Symbol:               _ZN5boost5uuids6detail8seed_rng19sha1_random_digest_Ev
// Demangled:            boost::uuids::detail::seed_rng::sha1_random_digest_(void)
// ============================================================================
/*
int boost::uuids::detail::seed_rng::sha1_random_digest_(FILE **this)
{
  unsigned int v1;
  void *v2;
  unsigned int v3;
  uint64_t v4;
  int *v5;
  unsigned int v6;
  __m128i *v7;
  __m128i *v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  int *v13;
  unsigned int v14;
  int8_t *v15;
  int8_t *v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  __m128i *v23;
  int v24;
  __m128i v25; // xmm0
  int result;
  FILE **v27;
  int32_t v28;
  bool v29;
  __m128i v30; // xmm5
  __m128i v31; // xmm2
  __m128i v32; // xmm1
  __m128i v33; // xmm5
  __m128i v34; // xmm4
  __m128i v35; // xmm1
  __m128i v36; // xmm5
  __m128i v37; // xmm4
  __m128i v38; // xmm1
  __m128i v39; // xmm7
  __m128i v40; // xmm2
  __m128i v41; // xmm1
  __m128i v42; // xmm3
  __m128i v43; // xmm2
  __m128i v44; // xmm1
  __m128i v45; // xmm3
  __m128i v46; // xmm2
  __m128i v47; // xmm7
  __m128i v48; // xmm2
  __m128i v49; // xmm5
  __m128i v50; // xmm7
  __m128i v51; // xmm1
  __m128i v52; // xmm2
  __m128i v53; // xmm5
  __m128i v54; // xmm7
  __m128i v55; // xmm1
  __m128i v56; // xmm7
  __m128i v57; // xmm4
  __m128i v58; // xmm3
  __m128i v59; // xmm1
  __m128i v60; // xmm4
  __m128i v61; // xmm2
  __m128i v62; // xmm4
  __m128i v63; // xmm1
  __m128i v64; // xmm5
  __m128i v65; // xmm3
  __m128i v66; // xmm2
  int v67;
  uint64_t v68; // kr08_8
  int v69;
  int v70;
  int32_t v71;
  int32_t v72;
  uint32_t *v73;
  int v74;
  unsigned int v75;
  int v76;
  int32_t v77;
  int v78;
  int v79;
  int v80;
  __m128i v81; // xmm5
  __m128i v82; // xmm2
  __m128i v83; // xmm1
  __m128i v84; // xmm5
  __m128i v85; // xmm4
  __m128i v86; // xmm1
  __m128i v87; // xmm5
  __m128i v88; // xmm4
  __m128i v89; // xmm1
  __m128i v90; // xmm7
  __m128i v91; // xmm2
  __m128i v92; // xmm1
  __m128i v93; // xmm3
  __m128i v94; // xmm2
  __m128i v95; // xmm1
  __m128i v96; // xmm3
  __m128i v97; // xmm2
  __m128i v98; // xmm7
  __m128i v99; // xmm2
  __m128i v100; // xmm5
  __m128i v101; // xmm7
  __m128i v102; // xmm1
  __m128i v103; // xmm2
  __m128i v104; // xmm5
  __m128i v105; // xmm7
  __m128i v106; // xmm1
  __m128i v107; // xmm7
  __m128i v108; // xmm4
  __m128i v109; // xmm3
  __m128i v110; // xmm1
  __m128i v111; // xmm4
  __m128i v112; // xmm2
  __m128i v113; // xmm4
  __m128i v114; // xmm1
  __m128i v115; // xmm5
  __m128i v116; // xmm3
  __m128i v117; // xmm2
  int v118;
  uint64_t v119; // kr10_8
  int v120;
  int32_t v121;
  int32_t v122;
  uint32_t *v123;
  int v124;
  unsigned int v125;
  int v126;
  int32_t v127;
  int v128;
  int v129;
  int v130;
  __m128i v131; // xmm5
  __m128i v132; // xmm2
  __m128i v133; // xmm1
  __m128i v134; // xmm5
  __m128i v135; // xmm4
  __m128i v136; // xmm1
  __m128i v137; // xmm5
  __m128i v138; // xmm4
  __m128i v139; // xmm1
  __m128i v140; // xmm7
  __m128i v141; // xmm2
  __m128i v142; // xmm1
  __m128i v143; // xmm3
  __m128i v144; // xmm2
  __m128i v145; // xmm1
  __m128i v146; // xmm3
  __m128i v147; // xmm2
  __m128i v148; // xmm7
  __m128i v149; // xmm2
  __m128i v150; // xmm5
  __m128i v151; // xmm7
  __m128i v152; // xmm1
  __m128i v153; // xmm2
  __m128i v154; // xmm5
  __m128i v155; // xmm7
  __m128i v156; // xmm1
  __m128i v157; // xmm7
  __m128i v158; // xmm4
  __m128i v159; // xmm3
  __m128i v160; // xmm1
  __m128i v161; // xmm4
  __m128i v162; // xmm2
  __m128i v163; // xmm4
  __m128i v164; // xmm1
  __m128i v165; // xmm5
  __m128i v166; // xmm3
  __m128i v167; // xmm2
  int v168;
  uint64_t v169; // kr18_8
  int v170;
  int v171;
  int32_t v172;
  int32_t v173;
  uint32_t *v174;
  int v175;
  unsigned int v176;
  int v177;
  int32_t v178;
  int v179;
  int v180;
  int v181;
  __m128i v182; // xmm5
  __m128i v183; // xmm2
  __m128i v184; // xmm1
  __m128i v185; // xmm5
  __m128i v186; // xmm4
  __m128i v187; // xmm1
  __m128i v188; // xmm5
  __m128i v189; // xmm4
  __m128i v190; // xmm1
  __m128i v191; // xmm7
  __m128i v192; // xmm2
  __m128i v193; // xmm1
  __m128i v194; // xmm3
  __m128i v195; // xmm2
  __m128i v196; // xmm1
  __m128i v197; // xmm3
  __m128i v198; // xmm2
  __m128i v199; // xmm7
  __m128i v200; // xmm2
  __m128i v201; // xmm5
  __m128i v202; // xmm7
  __m128i v203; // xmm1
  __m128i v204; // xmm2
  __m128i v205; // xmm5
  __m128i v206; // xmm7
  __m128i v207; // xmm1
  __m128i v208; // xmm7
  __m128i v209; // xmm4
  __m128i v210; // xmm3
  __m128i v211; // xmm1
  __m128i v212; // xmm4
  __m128i v213; // xmm2
  __m128i v214; // xmm4
  __m128i v215; // xmm1
  __m128i v216; // xmm5
  __m128i v217; // xmm3
  __m128i v218; // xmm2
  int v219;
  uint64_t v220; // kr20_8
  int v221;
  int v222;
  int32_t v223;
  int32_t v224;
  uint32_t *v225;
  int v226;
  unsigned int v227;
  int v228;
  int32_t v229;
  int v230;
  int v231;
  int v232;
  __m128i v233; // xmm5
  __m128i v234; // xmm2
  __m128i v235; // xmm1
  __m128i v236; // xmm5
  __m128i v237; // xmm4
  __m128i v238; // xmm1
  __m128i v239; // xmm5
  __m128i v240; // xmm4
  __m128i v241; // xmm1
  __m128i v242; // xmm7
  __m128i v243; // xmm2
  __m128i v244; // xmm1
  __m128i v245; // xmm3
  __m128i v246; // xmm2
  __m128i v247; // xmm1
  __m128i v248; // xmm3
  __m128i v249; // xmm2
  __m128i v250; // xmm7
  __m128i v251; // xmm2
  __m128i v252; // xmm5
  __m128i v253; // xmm7
  __m128i v254; // xmm2
  __m128i v255; // xmm5
  __m128i v256; // xmm7
  __m128i v257; // xmm1
  __m128i v258; // xmm7
  __m128i v259; // xmm1
  __m128i v260; // xmm4
  __m128i v261; // xmm3
  __m128i v262; // xmm4
  __m128i v263; // xmm2
  __m128i v264; // xmm1
  __m128i v265; // xmm4
  __m128i v266; // xmm5
  __m128i v267; // xmm3
  __m128i v268; // xmm2
  int v269;
  uint64_t v270; // kr28_8
  int v271;
  int v272;
  int32_t v273;
  int32_t v274;
  uint32_t *v275;
  int32_t v276;
  unsigned int v277;
  int v278;
  int32_t v279;
  int32_t v280;
  int32_t v281;
  int32_t v282;
  unsigned int v283;
  unsigned int v284;
  unsigned int v285;
  unsigned int v286;
  __m128i *v287;
  unsigned int v288;
  int v289;
  int v290;
  int v291;
  int v292;
  int v293;
  int64_t v294;
  int v295;
  int64_t v296;
  int v297;
  int64_t v298;
  int v299;
  void *v300;
  int *v301;
  int8_t *v302;
  unsigned int v303;
  unsigned int v304;
  unsigned int v305;
  unsigned int v306;
  int *v307;
  uint32_t *v308;
  int v309;
  int v310;
  __m128i v311;
  int32_t v312;
  int v313;
  __m128i v314;
  int32_t v315;
  int v316;
  __m128i v317;
  int32_t v318;
  int v319;
  __m128i v320;
  int32_t v321;
  int v322;
  __m128i v323;
  int32_t v324;
  int v325;
  __m128i *v326;
  unsigned int v327;
  __m128i v328;
  __m128i v329;
  __m128i v330;
  __m128i v331;
  __m128i v332;
  int v333;
  __m128i v334;
  __m128i v335;
  __m128i v336;
  __m128i v337;
  __m128i v338;
  int v339;
  __m128i v340;
  __m128i v341;
  __m128i v342;
  __m128i v343;
  __m128i v344;
  int v345;
  __m128i v346;
  __m128i v347;
  __m128i v348;
  __m128i v349;
  __m128i v350;
  int v351;
  __m128i v352;
  __m128i v353;
  __m128i v354;
  __m128i v355;
  __m128i v356;
  int v357;
  int v358;
  unsigned int v359;
  unsigned int v360;
  __m128i v361;
  int32_t v362;
  int v363;
  __m128i v364;
  int32_t v365;
  int v366;
  __m128i v367;
  int32_t v368;
  int v369;
  __m128i v370;
  int32_t v371;
  int v372;
  __m128i v373;
  int32_t v374;
  int32_t v375;
  unsigned int v376;
  int v377;
  __m128i v378;
  __m128i v379;
  int32_t v380;
  int v381;
  __m128i v382;
  __m128i v383;
  int32_t v384;
  int v385;
  __m128i v386;
  __m128i v387;
  int32_t v388;
  int v389;
  __m128i v390;
  __m128i v391;
  int32_t v392;
  int v393;
  __m128i v394;
  __m128i v395;
  int32_t v396;
  int32_t v397;
  __m128i *v398;
  __m128i *v399;
  int32_t v400;
  int v401;
  int64_t v402;
  uint8_t v403[12];
  void *v404;
  int v405;
  int v406;
  int v407;
  int v408;
  int v409;
  int v410;
  int v411;
  int v412;
  int v413;
  int v414;
  int v415;
  int v416;
  int v417;
  int v418;
  int v419;
  __m128i v420;
  int v421;
  int v422;
  int64_t v423;
  int v424;
  int v425;
  uint32_t ptr[6];
  uint32_t v427[7];
  uint32_t v428[7];
  uint32_t v429[7];
  uint32_t v430[7];
  uint32_t v431[6];
  __m128i v432;
  int v433;
  __m128i v434;
  __m128i v435;
  __m128i v436;
  __m128i v437;
  unsigned int v438;
  unsigned int v439;
  int v440;
  __m128i v441;
  __m128i v442;
  __m128i v443;
  __m128i v444;
  uint32_t v445[7];

  HIDWORD(v402) = boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state;
g4_m128_lane<int64_t>(v432, 0) = 0xEFCDAB8967452301LL;
g4_m128_lane<int64_t>(v432, 1) = 0x1032547698BADCFELL;
  v433 = -1009589776;
  v422 = boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[0];
  v423 = *(uint64_t *)&boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[1];
  v424 = boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[3];
  v425 = boost::uuids::detail::seed_rng::sha1_random_digest_state_(void)::state[4];
  v438 = 0;
  v439 = 0;
  v440 = 0;
  v299 = 1732584193;
  v297 = -271733879;
  v295 = -1732584194;
  v293 = 271733878;
  v1 = 0;
  v306 = 0;
  v301 = &v422;
  do
  {
    while ( 1 )
    {
g4_m128_lane<int8_t>(v434, v1++) = *(uint8_t *)v301;
      if ( v1 == 64 )
      {
        v30 = _mm_unpacklo_epi8(v434, v435);
        v31 = _mm_unpackhi_epi8(v434, v435);
        v32 = _mm_unpackhi_epi8(v30, v31);
        v33 = _mm_unpacklo_epi8(v30, v31);
        v328 = v32;
        v34 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v434, v435), v31), v32);
        v35 = _mm_unpackhi_epi8(v33, v32);
        v36 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v33, v328), v35);
        v37 = _mm_unpackhi_epi8(v34, v35);
        v38 = _mm_unpacklo_epi8(v436, v437);
        v39 = _mm_unpackhi_epi8(v436, v437);
        v40 = _mm_unpackhi_epi8(v38, v39);
        v41 = _mm_unpacklo_epi8(v38, v39);
        v329 = v40;
        v42 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v436, v437), v39), v40);
        v43 = _mm_unpackhi_epi8(v41, v40);
        v44 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v41, v329), v43);
        v45 = _mm_unpackhi_epi8(v42, v43);
        v46 = _mm_unpacklo_epi8(v36, v44);
        v330 = _mm_unpackhi_epi8(v36, v44);
        v47 = _mm_unpackhi_epi8(v46, v330);
        v48 = _mm_unpacklo_epi8(v46, v330);
        v49 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v36, v44), v330);
        v378 = v47;
        v331 = _mm_unpackhi_epi8(v37, v45);
        v50 = _mm_unpackhi_epi8(v48, v47);
        v51 = _mm_unpacklo_epi8(v37, v45);
        v52 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v48, v378), v50);
        v53 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(v49, v378), v50);
        v54 = _mm_unpackhi_epi8(v51, v331);
        v55 = _mm_unpacklo_epi8(v51, v331);
        v379 = v54;
        v56 = _mm_unpackhi_epi8(v55, v54);
        v57 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v37, v45), v331), v379);
        v58 = _mm_unpacklo_epi8(v52, g4_m128_from<__m128i>(0LL));
        v59 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v55, v379), v56);
        v60 = _mm_unpackhi_epi8(v57, v56);
        v361 = _mm_unpackhi_epi8(v52, g4_m128_from<__m128i>(0LL));
        v332 = _mm_unpacklo_epi8(v59, g4_m128_from<__m128i>(0LL));
        v61 = _mm_unpacklo_epi8(v60, g4_m128_from<__m128i>(0LL));
        v62 = _mm_unpackhi_epi8(v60, g4_m128_from<__m128i>(0LL));
        v311 = _mm_unpackhi_epi8(v59, g4_m128_from<__m128i>(0LL));
        v63 = _mm_unpacklo_epi8(v53, g4_m128_from<__m128i>(0LL));
        v64 = _mm_unpackhi_epi8(v53, g4_m128_from<__m128i>(0LL));
        v441 = _mm_or_si128(
                 _mm_slli_epi32(_mm_unpacklo_epi16(v63, g4_m128_from<__m128i>(0LL)), 8u),
                 _mm_or_si128(
                   _mm_unpacklo_epi16(v61, g4_m128_from<__m128i>(0LL)),
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpacklo_epi16(v332, g4_m128_from<__m128i>(0LL)), 0x10u),
                     _mm_slli_epi32(_mm_unpacklo_epi16(v58, g4_m128_from<__m128i>(0LL)), 0x18u))));
        v380 =g4_m128_lane<int32_t>(v441, 0);
        v65 = _mm_or_si128(
                _mm_or_si128(
                  _mm_or_si128(
                    _mm_slli_epi32(_mm_unpackhi_epi16(v58, g4_m128_from<__m128i>(0LL)), 0x18u),
                    _mm_slli_epi32(_mm_unpackhi_epi16(v332, g4_m128_from<__m128i>(0LL)), 0x10u)),
                  _mm_unpackhi_epi16(v61, g4_m128_from<__m128i>(0LL))),
                _mm_slli_epi32(_mm_unpackhi_epi16(v63, g4_m128_from<__m128i>(0LL)), 8u));
        v443 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpacklo_epi16(v361, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpacklo_epi16(v311, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpacklo_epi16(v62, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpacklo_epi16(v64, g4_m128_from<__m128i>(0LL)), 8u));
        v66 = v361;
        v362 =g4_m128_lane<int32_t>(v441, 1);
        v67 = 16;
        v444 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpackhi_epi16(v66, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpackhi_epi16(v311, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpackhi_epi16(v62, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpackhi_epi16(v64, g4_m128_from<__m128i>(0LL)), 8u));
        v442 = v65;
        v68 =g4_m128_lane<uint64_t>(v444, 1);
        v312 =g4_m128_lane<int32_t>(v444, 1);
        while ( 1 )
        {
          v312 = __builtin_rotateright32(v380 ^g4_m128_lane<int32_t>(v435, v67 + 1) ^g4_m128_lane<int32_t>(v436, v67 + 3) ^ v312, 31);
          v69 =g4_m128_lane<int32_t>(v437, v67) ^ v68;
g4_m128_lane<int32_t>(v441, v67) = v312;
          v380 =g4_m128_lane<int32_t>(v435, v67 + 2);
          v70 = v362 ^ v380 ^ v69;
          v362 =g4_m128_lane<int32_t>(v435, v67 + 3);
          v71 = __builtin_rotateright32(v70, 31);
          v72 = __builtin_rotateright32(g4_m128_lane<int32_t>(v435, v67 + 1) ^ v362 ^g4_m128_lane<int32_t>(v437, v67 + 1) ^ HIDWORD(v68), 31);
g4_m128_lane<int32_t>(v441, v67 + 1) = v71;
g4_m128_lane<int32_t>(v441, v67 + 2) = v72;
          v68 = __PAIR64__(v72, v71);
          if ( v67 == 76 )
            break;
          v67 += 3;
        }
        v73 = v445;
        do
        {
          v73[3] = __builtin_rotateright32(*(v73 - 5) ^ *v73 ^ *(v73 - 13) ^ *(v73 - 11), 31);
          ++v73;
        }
        while ( v73 != &v445[77 - v67] );
        v363 = v299;
        v333 = v433;
        v381 = v293;
        v74 = v295;
        v75 = 0;
        v289 = v297;
        while ( 1 )
        {
          if ( v75 <= 0x13 )
          {
            v313 = 1518500249;
            v76 = v74 & v289 | v381 & ~v289;
          }
          else if ( v75 <= 0x27 )
          {
            v313 = 1859775393;
            v76 = v74 ^ v289 ^ v381;
          }
          else if ( v75 > 0x3B )
          {
            v313 = -899497514;
            v76 = v74 ^ v289 ^ v381;
          }
          else
          {
            v76 = v74 & v381 | v289 & (v74 | v381);
            v313 = -1894007588;
          }
          v77 = v333 +g4_m128_lane<int32_t>(v441, v75++) + __builtin_rotateright32(v363, 27);
          v78 = v313 + v77 + v76;
          v79 = __builtin_rotateright32(v289, 2);
          if ( v75 == 80 )
            break;
          v80 = v381;
          v381 = v74;
          v74 = v79;
          v333 = v80;
          v289 = v363;
          v363 = v78;
        }
        v299 += v78;
        v433 += v381;
        v295 += v79;
        v297 += v363;
        v293 += v74;
        v1 = 0;
      }
      if ( v306 > 0xFFFFFFF7 )
        break;
      v306 += 8;
      v439 = v306;
      v301 = (int *)((char *)v301 + 1);
      if ( v301 == ptr )
        goto LABEL_7;
    }
    v439 = 0;
    if ( v440 == -1 )
    {
      v438 = v1;
g4_m128_lane<int64_t>(v432, 1) = __PAIR64__(v293, v295);
g4_m128_lane<int64_t>(v432, 0) = __PAIR64__(v297, v299);
      std::string::__construct_from_cstr((int)&v405, "sha1 too many bytes", (int)&v401);
      sub_19042E0(&v410, &v405);
      ptr[5] = off_20A9AA8;
      std::string::__construct_copy(v427, &v411);
      v427[2] = 0;
      v427[5] = 104;
      v427[1] = off_209383C;
      ptr[5] = off_2093828;
      v427[3] = "void boost::uuids::detail::sha1::process_byte(unsigned char)";
      v427[4] = "../../../../../lib/glitch/include/boost/uuid/sha1.hpp";
      std::terminate();
    }
    v301 = (int *)((char *)v301 + 1);
    ++v440;
    v306 = 0;
  }
  while ( v301 != ptr );
LABEL_7:
g4_m128_lane<int64_t>(v432, 0) = __PAIR64__(v297, v299);
  v438 = v1;
g4_m128_lane<int64_t>(v432, 1) = __PAIR64__(v293, v295);
  v302 = (char *)&v402 + 4;
  do
  {
    while ( 1 )
    {
g4_m128_lane<int8_t>(v434, v1++) = *v302;
      if ( v1 == 64 )
      {
        v81 = _mm_unpacklo_epi8(v434, v435);
        v82 = _mm_unpackhi_epi8(v434, v435);
        v83 = _mm_unpackhi_epi8(v81, v82);
        v84 = _mm_unpacklo_epi8(v81, v82);
        v334 = v83;
        v85 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v434, v435), v82), v83);
        v86 = _mm_unpackhi_epi8(v84, v83);
        v87 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v84, v334), v86);
        v88 = _mm_unpackhi_epi8(v85, v86);
        v89 = _mm_unpacklo_epi8(v436, v437);
        v90 = _mm_unpackhi_epi8(v436, v437);
        v91 = _mm_unpackhi_epi8(v89, v90);
        v92 = _mm_unpacklo_epi8(v89, v90);
        v335 = v91;
        v93 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v436, v437), v90), v91);
        v94 = _mm_unpackhi_epi8(v92, v91);
        v95 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v92, v335), v94);
        v96 = _mm_unpackhi_epi8(v93, v94);
        v97 = _mm_unpacklo_epi8(v87, v95);
        v336 = _mm_unpackhi_epi8(v87, v95);
        v98 = _mm_unpackhi_epi8(v97, v336);
        v99 = _mm_unpacklo_epi8(v97, v336);
        v100 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v87, v95), v336);
        v382 = v98;
        v337 = _mm_unpackhi_epi8(v88, v96);
        v101 = _mm_unpackhi_epi8(v99, v98);
        v102 = _mm_unpacklo_epi8(v88, v96);
        v103 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v99, v382), v101);
        v104 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(v100, v382), v101);
        v105 = _mm_unpackhi_epi8(v102, v337);
        v106 = _mm_unpacklo_epi8(v102, v337);
        v383 = v105;
        v107 = _mm_unpackhi_epi8(v106, v105);
        v108 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v88, v96), v337), v383);
        v109 = _mm_unpacklo_epi8(v103, g4_m128_from<__m128i>(0LL));
        v110 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v106, v383), v107);
        v111 = _mm_unpackhi_epi8(v108, v107);
        v364 = _mm_unpackhi_epi8(v103, g4_m128_from<__m128i>(0LL));
        v338 = _mm_unpacklo_epi8(v110, g4_m128_from<__m128i>(0LL));
        v112 = _mm_unpacklo_epi8(v111, g4_m128_from<__m128i>(0LL));
        v113 = _mm_unpackhi_epi8(v111, g4_m128_from<__m128i>(0LL));
        v314 = _mm_unpackhi_epi8(v110, g4_m128_from<__m128i>(0LL));
        v114 = _mm_unpacklo_epi8(v104, g4_m128_from<__m128i>(0LL));
        v115 = _mm_unpackhi_epi8(v104, g4_m128_from<__m128i>(0LL));
        v441 = _mm_or_si128(
                 _mm_slli_epi32(_mm_unpacklo_epi16(v114, g4_m128_from<__m128i>(0LL)), 8u),
                 _mm_or_si128(
                   _mm_unpacklo_epi16(v112, g4_m128_from<__m128i>(0LL)),
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpacklo_epi16(v338, g4_m128_from<__m128i>(0LL)), 0x10u),
                     _mm_slli_epi32(_mm_unpacklo_epi16(v109, g4_m128_from<__m128i>(0LL)), 0x18u))));
        v384 =g4_m128_lane<int32_t>(v441, 0);
        v116 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpackhi_epi16(v109, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpackhi_epi16(v338, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpackhi_epi16(v112, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpackhi_epi16(v114, g4_m128_from<__m128i>(0LL)), 8u));
        v443 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpacklo_epi16(v364, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpacklo_epi16(v314, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpacklo_epi16(v113, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpacklo_epi16(v115, g4_m128_from<__m128i>(0LL)), 8u));
        v117 = v364;
        v365 =g4_m128_lane<int32_t>(v441, 1);
        v118 = 16;
        v444 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpackhi_epi16(v117, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpackhi_epi16(v314, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpackhi_epi16(v113, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpackhi_epi16(v115, g4_m128_from<__m128i>(0LL)), 8u));
        v442 = v116;
        v119 =g4_m128_lane<uint64_t>(v444, 1);
        v315 =g4_m128_lane<int32_t>(v444, 1);
        while ( 1 )
        {
          v315 = __builtin_rotateright32(v384 ^g4_m128_lane<int32_t>(v435, v118 + 1) ^g4_m128_lane<int32_t>(v436, v118 + 3) ^ v315, 31);
g4_m128_lane<int32_t>(v441, v118) = v315;
          v384 =g4_m128_lane<int32_t>(v435, v118 + 2);
          v120 = v365 ^g4_m128_lane<int32_t>(v437, v118) ^ v384 ^ v119;
          v365 =g4_m128_lane<int32_t>(v435, v118 + 3);
          v121 = __builtin_rotateright32(v120, 31);
          v122 = __builtin_rotateright32(g4_m128_lane<int32_t>(v435, v118 + 1) ^ v365 ^g4_m128_lane<int32_t>(v437, v118 + 1) ^ HIDWORD(v119), 31);
g4_m128_lane<int32_t>(v441, v118 + 1) = v121;
g4_m128_lane<int32_t>(v441, v118 + 2) = v122;
          v119 = __PAIR64__(v122, v121);
          if ( v118 == 76 )
            break;
          v118 += 3;
        }
        v123 = v445;
        do
        {
          v123[3] = __builtin_rotateright32(*v123 ^ *(v123 - 13) ^ *(v123 - 5) ^ *(v123 - 11), 31);
          ++v123;
        }
        while ( v123 != &v445[77 - v118] );
        v366 = v299;
        v339 = v433;
        v385 = v293;
        v124 = v295;
        v125 = 0;
        v290 = v297;
        while ( 1 )
        {
          if ( v125 <= 0x13 )
          {
            v316 = 1518500249;
            v126 = v124 & v290 | v385 & ~v290;
          }
          else if ( v125 <= 0x27 )
          {
            v316 = 1859775393;
            v126 = v385 ^ v124 ^ v290;
          }
          else if ( v125 > 0x3B )
          {
            v316 = -899497514;
            v126 = v385 ^ v124 ^ v290;
          }
          else
          {
            v316 = -1894007588;
            v126 = v124 & v385 | v290 & (v124 | v385);
          }
          v127 = v339 +g4_m128_lane<int32_t>(v441, v125++) + __builtin_rotateright32(v366, 27);
          v128 = v316 + v127 + v126;
          v129 = __builtin_rotateright32(v290, 2);
          if ( v125 == 80 )
            break;
          v130 = v385;
          v385 = v124;
          v124 = v129;
          v339 = v130;
          v290 = v366;
          v366 = v128;
        }
        v299 += v128;
        v433 += v385;
        v295 += v129;
        v297 += v366;
        v293 += v124;
        v1 = 0;
      }
      if ( v306 > 0xFFFFFFF7 )
        break;
      v306 += 8;
      v439 = v306;
      if ( ++v302 == v403 )
        goto LABEL_13;
    }
    v439 = 0;
    if ( v440 == -1 )
    {
      v438 = v1;
g4_m128_lane<int64_t>(v432, 1) = __PAIR64__(v293, v295);
g4_m128_lane<int64_t>(v432, 0) = __PAIR64__(v297, v299);
      std::string::__construct_from_cstr((int)&v406, "sha1 too many bytes", (int)&v402);
      sub_19042E0(&v412, &v406);
      v427[6] = off_20A9AA8;
      std::string::__construct_copy(v428, &v413);
      v428[2] = 0;
      v428[5] = 104;
      v428[1] = off_209383C;
      v427[6] = off_2093828;
      v428[3] = "void boost::uuids::detail::sha1::process_byte(unsigned char)";
      v428[4] = "../../../../../lib/glitch/include/boost/uuid/sha1.hpp";
      std::terminate();
    }
    ++v302;
    ++v440;
    v306 = 0;
  }
  while ( v302 != v403 );
LABEL_13:
  v438 = v1;
g4_m128_lane<int64_t>(v432, 0) = __PAIR64__(v297, v299);
g4_m128_lane<int64_t>(v432, 1) = __PAIR64__(v293, v295);
  v2 = (void *)time(nullptr);
  v303 = v439;
  v404 = v2;
  v296 =g4_m128_lane<int64_t>(v432, 0);
  v3 = v438;
  v4 =g4_m128_lane<uint64_t>(v432, 1);
  v307 = (int *)&v404;
  do
  {
    while ( 1 )
    {
g4_m128_lane<int8_t>(v434, v3++) = *(uint8_t *)v307;
      if ( v3 == 64 )
      {
        v131 = _mm_unpacklo_epi8(v434, v435);
        v132 = _mm_unpackhi_epi8(v434, v435);
        v133 = _mm_unpackhi_epi8(v131, v132);
        v134 = _mm_unpacklo_epi8(v131, v132);
        v340 = v133;
        v135 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v434, v435), v132), v133);
        v136 = _mm_unpackhi_epi8(v134, v133);
        v137 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v134, v340), v136);
        v138 = _mm_unpackhi_epi8(v135, v136);
        v139 = _mm_unpacklo_epi8(v436, v437);
        v140 = _mm_unpackhi_epi8(v436, v437);
        v141 = _mm_unpackhi_epi8(v139, v140);
        v142 = _mm_unpacklo_epi8(v139, v140);
        v341 = v141;
        v143 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v436, v437), v140), v141);
        v144 = _mm_unpackhi_epi8(v142, v141);
        v145 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v142, v341), v144);
        v146 = _mm_unpackhi_epi8(v143, v144);
        v147 = _mm_unpacklo_epi8(v137, v145);
        v342 = _mm_unpackhi_epi8(v137, v145);
        v148 = _mm_unpackhi_epi8(v147, v342);
        v149 = _mm_unpacklo_epi8(v147, v342);
        v150 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v137, v145), v342);
        v386 = v148;
        v343 = _mm_unpackhi_epi8(v138, v146);
        v151 = _mm_unpackhi_epi8(v149, v148);
        v152 = _mm_unpacklo_epi8(v138, v146);
        v153 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v149, v386), v151);
        v154 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(v150, v386), v151);
        v155 = _mm_unpackhi_epi8(v152, v343);
        v156 = _mm_unpacklo_epi8(v152, v343);
        v387 = v155;
        v157 = _mm_unpackhi_epi8(v156, v155);
        v158 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v138, v146), v343), v387);
        v159 = _mm_unpacklo_epi8(v153, g4_m128_from<__m128i>(0LL));
        v160 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v156, v387), v157);
        v161 = _mm_unpackhi_epi8(v158, v157);
        v367 = _mm_unpackhi_epi8(v153, g4_m128_from<__m128i>(0LL));
        v344 = _mm_unpacklo_epi8(v160, g4_m128_from<__m128i>(0LL));
        v162 = _mm_unpacklo_epi8(v161, g4_m128_from<__m128i>(0LL));
        v163 = _mm_unpackhi_epi8(v161, g4_m128_from<__m128i>(0LL));
        v317 = _mm_unpackhi_epi8(v160, g4_m128_from<__m128i>(0LL));
        v164 = _mm_unpacklo_epi8(v154, g4_m128_from<__m128i>(0LL));
        v165 = _mm_unpackhi_epi8(v154, g4_m128_from<__m128i>(0LL));
        v441 = _mm_or_si128(
                 _mm_slli_epi32(_mm_unpacklo_epi16(v164, g4_m128_from<__m128i>(0LL)), 8u),
                 _mm_or_si128(
                   _mm_unpacklo_epi16(v162, g4_m128_from<__m128i>(0LL)),
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpacklo_epi16(v344, g4_m128_from<__m128i>(0LL)), 0x10u),
                     _mm_slli_epi32(_mm_unpacklo_epi16(v159, g4_m128_from<__m128i>(0LL)), 0x18u))));
        v388 =g4_m128_lane<int32_t>(v441, 0);
        v166 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpackhi_epi16(v159, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpackhi_epi16(v344, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpackhi_epi16(v162, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpackhi_epi16(v164, g4_m128_from<__m128i>(0LL)), 8u));
        v443 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpacklo_epi16(v367, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpacklo_epi16(v317, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpacklo_epi16(v163, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpacklo_epi16(v165, g4_m128_from<__m128i>(0LL)), 8u));
        v167 = v367;
        v368 =g4_m128_lane<int32_t>(v441, 1);
        v168 = 16;
        v444 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpackhi_epi16(v167, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpackhi_epi16(v317, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpackhi_epi16(v163, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpackhi_epi16(v165, g4_m128_from<__m128i>(0LL)), 8u));
        v442 = v166;
        v169 =g4_m128_lane<uint64_t>(v444, 1);
        v318 =g4_m128_lane<int32_t>(v444, 1);
        while ( 1 )
        {
          v318 = __builtin_rotateright32(v388 ^g4_m128_lane<int32_t>(v435, v168 + 1) ^g4_m128_lane<int32_t>(v436, v168 + 3) ^ v318, 31);
          v170 =g4_m128_lane<int32_t>(v437, v168) ^ v169;
g4_m128_lane<int32_t>(v441, v168) = v318;
          v388 =g4_m128_lane<int32_t>(v435, v168 + 2);
          v171 = v368 ^ v388 ^ v170;
          v368 =g4_m128_lane<int32_t>(v435, v168 + 3);
          v172 = __builtin_rotateright32(v171, 31);
          v173 = __builtin_rotateright32(g4_m128_lane<int32_t>(v435, v168 + 1) ^ v368 ^g4_m128_lane<int32_t>(v437, v168 + 1) ^ HIDWORD(v169), 31);
g4_m128_lane<int32_t>(v441, v168 + 1) = v172;
g4_m128_lane<int32_t>(v441, v168 + 2) = v173;
          v169 = __PAIR64__(v173, v172);
          if ( v168 == 76 )
            break;
          v168 += 3;
        }
        v174 = v445;
        do
        {
          v174[3] = __builtin_rotateright32(*(v174 - 13) ^ *(v174 - 11) ^ *v174 ^ *(v174 - 5), 31);
          ++v174;
        }
        while ( v174 != &v445[77 - v168] );
        v369 = v296;
        v345 = v433;
        v389 = HIDWORD(v4);
        v175 = v4;
        v176 = 0;
        v291 = HIDWORD(v296);
        while ( 1 )
        {
          if ( v176 <= 0x13 )
          {
            v319 = 1518500249;
            v177 = v175 & v291 | v389 & ~v291;
          }
          else if ( v176 <= 0x27 )
          {
            v319 = 1859775393;
            v177 = v389 ^ v175 ^ v291;
          }
          else if ( v176 > 0x3B )
          {
            v319 = -899497514;
            v177 = v389 ^ v175 ^ v291;
          }
          else
          {
            v319 = -1894007588;
            v177 = v175 & v389 | v291 & (v175 | v389);
          }
          v178 = v345 +g4_m128_lane<int32_t>(v441, v176++) + __builtin_rotateright32(v369, 27);
          v179 = v319 + v178 + v177;
          v180 = __builtin_rotateright32(v291, 2);
          if ( v176 == 80 )
            break;
          v181 = v389;
          v389 = v175;
          v175 = v180;
          v345 = v181;
          v291 = v369;
          v369 = v179;
        }
        LODWORD(v296) = v179 + v296;
        v433 += v389;
        HIDWORD(v296) += v369;
        v3 = 0;
        v4 = __PAIR64__(v175 + HIDWORD(v4), v180 + (int)v4);
      }
      if ( v303 > 0xFFFFFFF7 )
        break;
      v303 += 8;
      v439 = v303;
      v307 = (int *)((char *)v307 + 1);
      if ( v307 == &v405 )
        goto LABEL_19;
    }
    v439 = 0;
    if ( v440 == -1 )
    {
      v438 = v3;
g4_m128_lane<int64_t>(v432, 1) = v4;
g4_m128_lane<int64_t>(v432, 0) = v296;
      std::string::__construct_from_cstr((int)&v407, "sha1 too many bytes", (int)&v402 + 1);
      sub_19042E0(&v414, &v407);
      v428[6] = off_20A9AA8;
      std::string::__construct_copy(v429, &v415);
      v429[2] = 0;
      v429[5] = 104;
      v429[1] = off_209383C;
      v428[6] = off_2093828;
      v429[3] = "void boost::uuids::detail::sha1::process_byte(unsigned char)";
      v429[4] = "../../../../../lib/glitch/include/boost/uuid/sha1.hpp";
      std::terminate();
    }
    v307 = (int *)((char *)v307 + 1);
    ++v440;
    v303 = 0;
  }
  while ( v307 != &v405 );
LABEL_19:
  v438 = v3;
g4_m128_lane<int64_t>(v432, 0) = v296;
g4_m128_lane<int64_t>(v432, 1) = v4;
  v5 = (int *)&v404;
  v404 = (void *)clock();
  do
  {
    while ( 1 )
    {
      v6 = v438;
g4_m128_lane<int8_t>(v434, v438) = *(uint8_t *)v5;
      v438 = v6 + 1;
      if ( v6 == 63 )
      {
        v438 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v432);
      }
      if ( v439 > 0xFFFFFFF7 )
        break;
      v5 = (int *)((char *)v5 + 1);
      v439 += 8;
      if ( v5 == &v405 )
        goto LABEL_26;
    }
    v439 = 0;
    if ( v440 == -1 )
    {
      std::string::__construct_from_cstr((int)&v408, "sha1 too many bytes", (int)&v402 + 2);
      sub_19042E0(&v416, &v408);
      v429[6] = off_20A9AA8;
      std::string::__construct_copy(v430, &v417);
      v430[2] = 0;
      v430[5] = 104;
      v430[1] = off_209383C;
      v429[6] = off_2093828;
      v430[3] = "void boost::uuids::detail::sha1::process_byte(unsigned char)";
      v430[4] = "../../../../../lib/glitch/include/boost/uuid/sha1.hpp";
      std::terminate();
    }
    v5 = (int *)((char *)v5 + 1);
    ++v440;
  }
  while ( v5 != &v405 );
LABEL_26:
g4_m128_lane<int32_t>(v441, 0) = lrand48();
  v7 = &v441;
g4_m128_lane<int32_t>(v441, 1) = lrand48();
  v8 = &v441;
g4_m128_lane<int32_t>(v441, 2) = lrand48();
  do
  {
    while ( 1 )
    {
      v10 = v438;
g4_m128_lane<int8_t>(v434, v438) =g4_m128_lane<int8_t>(*(v8), 0);
      v438 = v10 + 1;
      if ( v10 == 63 )
      {
        v438 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v432);
      }
      if ( v439 > 0xFFFFFFF7 )
        break;
      v8 = (__m128i *)((char *)v8 + 1);
      v9 = v439 + 8;
      v439 += 8;
      if ( v8 == (__m128i *)((char *)&g4_m128_raw(v441) + 12) )
        goto LABEL_33;
    }
    v439 = 0;
    if ( v440 == -1 )
      goto LABEL_175;
    v8 = (__m128i *)((char *)v8 + 1);
    ++v440;
    v9 = 0;
  }
  while ( v8 != (__m128i *)((char *)&g4_m128_raw(v441) + 12) );
LABEL_33:
  v304 = v9;
  if ( *(this + 6) != nullptr )
  {
    fread(ptr, 1u, 0x14u, *(this + 6));
    v304 = v439;
  }
  v298 =g4_m128_lane<int64_t>(v432, 0);
  v294 =g4_m128_lane<int64_t>(v432, 1);
  v11 = v438;
  v308 = ptr;
  do
  {
    while ( 1 )
    {
g4_m128_lane<int8_t>(v434, v11++) = *(uint8_t *)v308;
      if ( v11 == 64 )
      {
        v182 = _mm_unpacklo_epi8(v434, v435);
        v183 = _mm_unpackhi_epi8(v434, v435);
        v184 = _mm_unpackhi_epi8(v182, v183);
        v185 = _mm_unpacklo_epi8(v182, v183);
        v346 = v184;
        v186 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v434, v435), v183), v184);
        v187 = _mm_unpackhi_epi8(v185, v184);
        v188 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v185, v346), v187);
        v189 = _mm_unpackhi_epi8(v186, v187);
        v190 = _mm_unpacklo_epi8(v436, v437);
        v191 = _mm_unpackhi_epi8(v436, v437);
        v192 = _mm_unpackhi_epi8(v190, v191);
        v193 = _mm_unpacklo_epi8(v190, v191);
        v347 = v192;
        v194 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v436, v437), v191), v192);
        v195 = _mm_unpackhi_epi8(v193, v192);
        v196 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v193, v347), v195);
        v197 = _mm_unpackhi_epi8(v194, v195);
        v198 = _mm_unpacklo_epi8(v188, v196);
        v348 = _mm_unpackhi_epi8(v188, v196);
        v199 = _mm_unpackhi_epi8(v198, v348);
        v200 = _mm_unpacklo_epi8(v198, v348);
        v201 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v188, v196), v348);
        v390 = v199;
        v349 = _mm_unpackhi_epi8(v189, v197);
        v202 = _mm_unpackhi_epi8(v200, v199);
        v203 = _mm_unpacklo_epi8(v189, v197);
        v204 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v200, v390), v202);
        v205 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(v201, v390), v202);
        v206 = _mm_unpackhi_epi8(v203, v349);
        v207 = _mm_unpacklo_epi8(v203, v349);
        v391 = v206;
        v208 = _mm_unpackhi_epi8(v207, v206);
        v209 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v189, v197), v349), v391);
        v210 = _mm_unpacklo_epi8(v204, g4_m128_from<__m128i>(0LL));
        v211 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v207, v391), v208);
        v212 = _mm_unpackhi_epi8(v209, v208);
        v370 = _mm_unpackhi_epi8(v204, g4_m128_from<__m128i>(0LL));
        v350 = _mm_unpacklo_epi8(v211, g4_m128_from<__m128i>(0LL));
        v213 = _mm_unpacklo_epi8(v212, g4_m128_from<__m128i>(0LL));
        v214 = _mm_unpackhi_epi8(v212, g4_m128_from<__m128i>(0LL));
        v320 = _mm_unpackhi_epi8(v211, g4_m128_from<__m128i>(0LL));
        v215 = _mm_unpacklo_epi8(v205, g4_m128_from<__m128i>(0LL));
        v216 = _mm_unpackhi_epi8(v205, g4_m128_from<__m128i>(0LL));
        v441 = _mm_or_si128(
                 _mm_slli_epi32(_mm_unpacklo_epi16(v215, g4_m128_from<__m128i>(0LL)), 8u),
                 _mm_or_si128(
                   _mm_unpacklo_epi16(v213, g4_m128_from<__m128i>(0LL)),
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpacklo_epi16(v350, g4_m128_from<__m128i>(0LL)), 0x10u),
                     _mm_slli_epi32(_mm_unpacklo_epi16(v210, g4_m128_from<__m128i>(0LL)), 0x18u))));
        v392 =g4_m128_lane<int32_t>(v441, 0);
        v217 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpackhi_epi16(v210, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpackhi_epi16(v350, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpackhi_epi16(v213, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpackhi_epi16(v215, g4_m128_from<__m128i>(0LL)), 8u));
        v443 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpacklo_epi16(v370, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpacklo_epi16(v320, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpacklo_epi16(v214, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpacklo_epi16(v216, g4_m128_from<__m128i>(0LL)), 8u));
        v218 = v370;
        v371 =g4_m128_lane<int32_t>(v441, 1);
        v219 = 16;
        v444 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpackhi_epi16(v218, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpackhi_epi16(v320, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpackhi_epi16(v214, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpackhi_epi16(v216, g4_m128_from<__m128i>(0LL)), 8u));
        v442 = v217;
        v220 =g4_m128_lane<uint64_t>(v444, 1);
        v321 =g4_m128_lane<int32_t>(v444, 1);
        while ( 1 )
        {
          v321 = __builtin_rotateright32(v392 ^ *((uint32_t *)&v7[-3] + v219 - 2) ^g4_m128_lane<int32_t>(v7[-2], v219) ^ v321, 31);
          v221 = *((uint32_t *)&v7[-1] + v219 - 3) ^ v220;
g4_m128_lane<int32_t>(*(v7), v219) = v321;
          v392 = *((uint32_t *)&v7[-3] + v219 - 1);
          v222 = v371 ^ v392 ^ v221;
          v371 =g4_m128_lane<int32_t>(v7[-3], v219);
          v223 = __builtin_rotateright32(v222, 31);
          v224 = __builtin_rotateright32(
                   *((uint32_t *)&v7[-3] + v219 - 2) ^ v371 ^ *((uint32_t *)&v7[-1] + v219 - 2) ^ HIDWORD(v220),
                   31);
g4_m128_lane<int32_t>(*(v7), v219 + 1) = v223;
g4_m128_lane<int32_t>(*(v7), v219 + 2) = v224;
          v220 = __PAIR64__(v224, v223);
          if ( v219 == 76 )
            break;
          v219 += 3;
        }
        v225 = v445;
        do
        {
          v225[3] = __builtin_rotateright32(*(v225 - 13) ^ *(v225 - 11) ^ *v225 ^ *(v225 - 5), 31);
          ++v225;
        }
        while ( v225 != &v445[77 - v219] );
        v372 = v298;
        v351 = v433;
        v393 = HIDWORD(v294);
        v226 = v294;
        v227 = 0;
        v292 = HIDWORD(v298);
        v398 = v7;
        while ( 1 )
        {
          if ( v227 <= 0x13 )
          {
            v322 = 1518500249;
            v228 = v226 & v292 | v393 & ~v292;
          }
          else if ( v227 <= 0x27 )
          {
            v322 = 1859775393;
            v228 = v393 ^ v226 ^ v292;
          }
          else if ( v227 > 0x3B )
          {
            v322 = -899497514;
            v228 = v393 ^ v226 ^ v292;
          }
          else
          {
            v322 = -1894007588;
            v228 = v226 & v393 | v292 & (v226 | v393);
          }
          v229 = v351 +g4_m128_lane<int32_t>(*(v398), v227++) + __builtin_rotateright32(v372, 27);
          v230 = v322 + v229 + v228;
          v231 = __builtin_rotateright32(v292, 2);
          if ( v227 == 80 )
            break;
          v232 = v393;
          v393 = v226;
          v226 = v231;
          v351 = v232;
          v292 = v372;
          v372 = v230;
        }
        LODWORD(v298) = v230 + v298;
        v433 += v393;
        v7 = v398;
        HIDWORD(v298) += v372;
        LODWORD(v294) = v231 + v294;
        HIDWORD(v294) += v226;
        v11 = 0;
      }
      if ( v304 > 0xFFFFFFF7 )
        break;
      v304 += 8;
      v439 = v304;
      v308 = (uint32_t *)((char *)v308 + 1);
      if ( v308 == &ptr[5] )
        goto LABEL_41;
    }
    v439 = 0;
    if ( v440 == -1 )
    {
      v438 = v11;
g4_m128_lane<int64_t>(v432, 0) = v298;
g4_m128_lane<int64_t>(v432, 1) = v294;
LABEL_175:
      sub_132D7C0();
    }
    v308 = (uint32_t *)((char *)v308 + 1);
    ++v440;
    v304 = 0;
  }
  while ( v308 != &ptr[5] );
LABEL_41:
  v438 = v11;
g4_m128_lane<int64_t>(v432, 0) = v298;
g4_m128_lane<int64_t>(v432, 1) = v294;
  v300 = (void *)operator new(4u);
  v404 = v300;
  v309 = 0;
  v305 = v439;
  do
  {
    while ( 1 )
    {
      v12 = v438;
g4_m128_lane<int8_t>(v434, v438) = *((uint8_t *)v300 + v309);
      v438 = v12 + 1;
      if ( v12 == 63 )
      {
        v233 = _mm_unpacklo_epi8(v434, v435);
        v234 = _mm_unpackhi_epi8(v434, v435);
        v235 = _mm_unpackhi_epi8(v233, v234);
        v236 = _mm_unpacklo_epi8(v233, v234);
        v438 = 0;
        v352 = v235;
        v237 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v434, v435), v234), v235);
        v238 = _mm_unpackhi_epi8(v236, v235);
        v239 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v236, v352), v238);
        v240 = _mm_unpackhi_epi8(v237, v238);
        v241 = _mm_unpacklo_epi8(v436, v437);
        v242 = _mm_unpackhi_epi8(v436, v437);
        v243 = _mm_unpackhi_epi8(v241, v242);
        v244 = _mm_unpacklo_epi8(v241, v242);
        v353 = v243;
        v245 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v436, v437), v242), v243);
        v246 = _mm_unpackhi_epi8(v244, v243);
        v247 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v244, v353), v246);
        v248 = _mm_unpackhi_epi8(v245, v246);
        v249 = _mm_unpacklo_epi8(v239, v247);
        v354 = _mm_unpackhi_epi8(v239, v247);
        v250 = _mm_unpackhi_epi8(v249, v354);
        v251 = _mm_unpacklo_epi8(v249, v354);
        v252 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v239, v247), v354);
        v394 = v250;
        v355 = _mm_unpackhi_epi8(v240, v248);
        v253 = _mm_unpackhi_epi8(v251, v250);
        v254 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v251, v394), v253);
        v255 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(v252, v394), v253);
        v256 = _mm_unpacklo_epi8(v240, v248);
        v257 = _mm_unpacklo_epi8(v256, v355);
        v395 = _mm_unpackhi_epi8(v256, v355);
        v258 = _mm_unpackhi_epi8(v257, v395);
        v259 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v257, v395), v258);
        v260 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v240, v248), v355), v395);
        v261 = _mm_unpacklo_epi8(v254, g4_m128_from<__m128i>(0LL));
        v373 = _mm_unpackhi_epi8(v254, g4_m128_from<__m128i>(0LL));
        v262 = _mm_unpackhi_epi8(v260, v258);
        v356 = _mm_unpacklo_epi8(v259, g4_m128_from<__m128i>(0LL));
        v263 = _mm_unpacklo_epi8(v262, g4_m128_from<__m128i>(0LL));
        v323 = _mm_unpackhi_epi8(v259, g4_m128_from<__m128i>(0LL));
        v264 = _mm_unpacklo_epi8(v255, g4_m128_from<__m128i>(0LL));
        v265 = _mm_unpackhi_epi8(v262, g4_m128_from<__m128i>(0LL));
        v441 = _mm_or_si128(
                 _mm_slli_epi32(_mm_unpacklo_epi16(v264, g4_m128_from<__m128i>(0LL)), 8u),
                 _mm_or_si128(
                   _mm_unpacklo_epi16(v263, g4_m128_from<__m128i>(0LL)),
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpacklo_epi16(v356, g4_m128_from<__m128i>(0LL)), 0x10u),
                     _mm_slli_epi32(_mm_unpacklo_epi16(v261, g4_m128_from<__m128i>(0LL)), 0x18u))));
        v266 = _mm_unpackhi_epi8(v255, g4_m128_from<__m128i>(0LL));
        v396 =g4_m128_lane<int32_t>(v441, 0);
        v267 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpackhi_epi16(v261, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpackhi_epi16(v356, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpackhi_epi16(v263, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpackhi_epi16(v264, g4_m128_from<__m128i>(0LL)), 8u));
        v443 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpacklo_epi16(v373, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpacklo_epi16(v323, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpacklo_epi16(v265, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpacklo_epi16(v266, g4_m128_from<__m128i>(0LL)), 8u));
        v268 = v373;
        v374 =g4_m128_lane<int32_t>(v441, 1);
        v269 = 16;
        v444 = _mm_or_si128(
                 _mm_or_si128(
                   _mm_or_si128(
                     _mm_slli_epi32(_mm_unpackhi_epi16(v268, g4_m128_from<__m128i>(0LL)), 0x18u),
                     _mm_slli_epi32(_mm_unpackhi_epi16(v323, g4_m128_from<__m128i>(0LL)), 0x10u)),
                   _mm_unpackhi_epi16(v265, g4_m128_from<__m128i>(0LL))),
                 _mm_slli_epi32(_mm_unpackhi_epi16(v266, g4_m128_from<__m128i>(0LL)), 8u));
        v442 = v267;
        v270 =g4_m128_lane<uint64_t>(v444, 1);
        v324 =g4_m128_lane<int32_t>(v444, 1);
        while ( 1 )
        {
          v324 = __builtin_rotateright32(v396 ^ *((uint32_t *)&v7[-3] + v269 - 2) ^g4_m128_lane<int32_t>(v7[-2], v269) ^ v324, 31);
          v271 = *((uint32_t *)&v7[-1] + v269 - 3) ^ v270;
g4_m128_lane<int32_t>(*(v7), v269) = v324;
          v396 = *((uint32_t *)&v7[-3] + v269 - 1);
          v272 = v374 ^ v396 ^ v271;
          v374 =g4_m128_lane<int32_t>(v7[-3], v269);
          v273 = __builtin_rotateright32(v272, 31);
          v274 = __builtin_rotateright32(
                   *((uint32_t *)&v7[-3] + v269 - 2) ^ v374 ^ *((uint32_t *)&v7[-1] + v269 - 2) ^ HIDWORD(v270),
                   31);
g4_m128_lane<int32_t>(*(v7), v269 + 1) = v273;
g4_m128_lane<int32_t>(*(v7), v269 + 2) = v274;
          v270 = __PAIR64__(v274, v273);
          if ( v269 == 76 )
            break;
          v269 += 3;
        }
        v275 = v445;
        do
        {
          v275[3] = __builtin_rotateright32(*(v275 - 13) ^ *(v275 - 11) ^ *v275 ^ *(v275 - 5), 31);
          ++v275;
        }
        while ( v275 != &v445[77 - v269] );
        v375 =g4_m128_lane<int32_t>(v432, 0);
        v357 = v433;
        v397 =g4_m128_lane<int32_t>(v432, 3);
        v276 =g4_m128_lane<int32_t>(v432, 2);
        v277 = 0;
        v400 =g4_m128_lane<int32_t>(v432, 1);
        v399 = v7;
        while ( 1 )
        {
          if ( v277 <= 0x13 )
          {
            v325 = 1518500249;
            v278 = v276 & v400 | v397 & ~v400;
          }
          else if ( v277 <= 0x27 )
          {
            v325 = 1859775393;
            v278 = v397 ^ v276 ^ v400;
          }
          else if ( v277 > 0x3B )
          {
            v325 = -899497514;
            v278 = v397 ^ v276 ^ v400;
          }
          else
          {
            v325 = -1894007588;
            v278 = v276 & v397 | v400 & (v276 | v397);
          }
          v279 = v357 +g4_m128_lane<int32_t>(*(v399), v277++) + __builtin_rotateright32(v375, 27);
          v280 = v325 + v279 + v278;
          v281 = __builtin_rotateright32(v400, 2);
          if ( v277 == 80 )
            break;
          v282 = v397;
          v397 = v276;
          v276 = v281;
          v357 = v282;
          v400 = v375;
          v375 = v280;
        }
g4_m128_lane<int32_t>(v432, 1) += v375;
        v7 = v399;
g4_m128_lane<int32_t>(v432, 0) += v280;
g4_m128_lane<int32_t>(v432, 2) += v281;
g4_m128_lane<int32_t>(v432, 3) += v276;
        v433 += v397;
      }
      if ( v305 > 0xFFFFFFF7 )
        break;
      v305 += 8;
      ++v309;
      v439 = v305;
      if ( v309 == 4 )
        goto LABEL_47;
    }
    v439 = 0;
    if ( v440 == -1 )
    {
      std::string::__construct_from_cstr((int)&v409, "sha1 too many bytes", (int)&v402 + 3);
      sub_19042E0(&v418, &v409);
      v430[6] = off_20A9AA8;
      std::string::__construct_copy(v431, &v419);
      v431[2] = 0;
      v431[5] = 104;
      v431[1] = off_209383C;
      v430[6] = off_2093828;
      v431[3] = "void boost::uuids::detail::sha1::process_byte(unsigned char)";
      v431[4] = "../../../../../lib/glitch/include/boost/uuid/sha1.hpp";
      std::terminate();
    }
    ++v309;
    ++v440;
    v305 = 0;
  }
  while ( v309 != 4 );
LABEL_47:
  v13 = (int *)&v404;
  do
  {
    while ( 1 )
    {
      v14 = v438;
g4_m128_lane<int8_t>(v434, v438) = *(uint8_t *)v13;
      v438 = v14 + 1;
      if ( v14 == 63 )
      {
        v438 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v432);
      }
      if ( v439 > 0xFFFFFFF7 )
        break;
      v13 = (int *)((char *)v13 + 1);
      v439 += 8;
      if ( v13 == &v405 )
        goto LABEL_54;
    }
    v439 = 0;
    if ( v440 == -1 )
      goto LABEL_175;
    v13 = (int *)((char *)v13 + 1);
    ++v440;
  }
  while ( v13 != &v405 );
LABEL_54:
  operator delete(v404);
  v15 = (int8_t *)this;
  v16 = (int8_t *)(this + 5);
  do
  {
    while ( 1 )
    {
      v17 = v438;
g4_m128_lane<int8_t>(v434, v438) = *v15;
      v438 = v17 + 1;
      if ( v17 == 63 )
      {
        v438 = 0;
        boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v432);
      }
      if ( v439 > 0xFFFFFFF7 )
        break;
      ++v15;
      v439 += 8;
      if ( v16 == v15 )
        goto LABEL_61;
    }
    v439 = 0;
    if ( v440 == -1 )
      goto LABEL_175;
    ++v15;
    ++v440;
  }
  while ( v16 != v15 );
LABEL_61:
  v18 = v438;
g4_m128_lane<int8_t>(v434, v438) = 0x80;
  v19 = v18 + 1;
  v438 = v19;
  if ( v19 == 64 )
  {
    v438 = 0;
    boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v432);
    v19 = v438;
  }
  if ( v19 > 0x38 )
  {
    while ( v19 != 0 )
    {
      while ( 1 )
      {
g4_m128_lane<int8_t>(v434, v19++) = 0;
        if ( v19 == 64 )
          break;
        if ( v19 == 0 )
          goto LABEL_163;
      }
      v438 = 0;
      boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v432);
      v19 = v438;
    }
LABEL_163:
    v283 = 0;
    v284 = -(int)&v434 & 0xF;
    if ( v284 != 0 )
    {
      do
g4_m128_lane<int8_t>(v434, v283++) = 0;
      while ( v284 > v283 );
    }
    v376 = 56 - v284;
    v285 = (56 - v284) >> 4;
    v358 = 16 * v285;
    if ( 16 * v285 == 0 )
      goto LABEL_182;
    v326 = (__m128i *)((char *)&v434 + v284);
    v286 = 0;
    v287 = v326;
    do
    {
      ++v286;
      *v287++ = g4_m128_from<__m128i>(0LL);
    }
    while ( v286 < v285 );
    v283 += v358;
    if ( v376 != v358 )
    {
LABEL_182:
      do
      {
g4_m128_lane<int8_t>(v434, v283) = 0;
        v288 = v283 + 1;
        if ( v288 > 0x37 )
          break;
g4_m128_lane<int8_t>(v434, v288) = 0;
        v283 = v288 + 1;
      }
      while ( v283 <= 0x37 );
    }
  }
  else if ( v19 != 56 )
  {
    v359 = 56 - v19;
    v327 = v19 + 20;
    v20 = v19;
    v21 = -((int)&v432 + v19 + 20) & 0xF;
    if ( v21 > 56 - v19 )
      v21 = 56 - v19;
    if ( v21 == 0 )
      goto LABEL_70;
    do
g4_m128_lane<int8_t>(v434, v20++) = 0;
    while ( v21 > v20 - v19 );
    if ( v359 != v21 )
    {
LABEL_70:
      v360 = v359 - v21;
      v310 = 16 * (v360 >> 4);
      if ( v310 == 0 )
        goto LABEL_183;
      v22 = 0;
      v23 = (__m128i *)((char *)&v432 + v21 + v327);
      do
      {
        ++v22;
        *v23++ = g4_m128_from<__m128i>(0LL);
      }
      while ( v22 < v360 >> 4 );
      v20 += v310;
      if ( v360 != v310 )
      {
LABEL_183:
        do
g4_m128_lane<int8_t>(v434, v20++) = 0;
        while ( v20 <= 0x37 );
      }
    }
  }
  v438 = 0;
g4_m128_lane<int8_t>(v437, 11) = v440;
g4_m128_lane<int8_t>(v437, 8) = HIBYTE(v440);
g4_m128_lane<int8_t>(v437, 9) = BYTE2(v440);
g4_m128_lane<int8_t>(v437, 10) = BYTE1(v440);
g4_m128_lane<int8_t>(v437, 15) = v439;
g4_m128_lane<int8_t>(v437, 12) = HIBYTE(v439);
g4_m128_lane<int8_t>(v437, 13) = BYTE2(v439);
g4_m128_lane<int8_t>(v437, 14) = BYTE1(v439);
  boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v432);
  v24 = HIDWORD(v402);
  v420 = v432;
  v421 = v433;
  if ( (unsigned int)this > HIDWORD(v402) + 16 || HIDWORD(v402) > (unsigned int)(this + 4) )
  {
    v25 = v420;
    result = 4;
    *(__m128i *)HIDWORD(v402) = _mm_xor_si128(*(__m128i *)HIDWORD(v402), v420);
    *(__m128i *)this = _mm_xor_si128(v25, *(__m128i *)this);
    v27 = this;
    v377 = 1;
  }
  else
  {
    result = 0;
    v377 = 5;
    v27 = this;
  }
  do
  {
    v28 =g4_m128_lane<int32_t>(v420, result);
    *(uint32_t *)(v24 + 4 * result) ^= v28;
    v27[result] = (FILE *)(v28 ^ (unsigned int)v27[result]);
    v29 = v377-- == 1;
    ++result;
  }
  while ( !v29 );
  return result;
}

*/

// ============================================================================
// Referencing Function: 0x1333040 .. 0x1334a7f (6719 bytes)
// Symbol:               _ZN6glotv35Utils7GetSHA1ERKSt6vectorIcSaIcEE
// Demangled:            glotv3::Utils::GetSHA1(std::vector<char,std::allocator<char>> const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1334a80 .. 0x13364d3 (6739 bytes)
// Symbol:               _ZN6glotv35Utils7GetSHA1ERKSs
// Demangled:            glotv3::Utils::GetSHA1(std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1336700 .. 0x1337f87 (6279 bytes)
// Symbol:               _ZN5boost5uuids6detail4seedINS_6random23mersenne_twister_engineIjLj32ELj624ELj397ELj31ELj2567483615ELj11ELj4294967295ELj7ELj2636928640ELj15ELj4022730752ELj18ELj1812433253EEEEEvRT_
// Demangled:            void boost::uuids::detail::seed<boost::random::mersenne_twister_engine<unsigned int,32u,624u,397u,31u,2567483615u,11u,4294967295u,7u,2636928640u,15u,4022730752u,18u,1812433253u>>(boost::random::mersenne_twister_engine<unsigned int,32u,624u,397u,31u,2567483615u,11u,4294967295u,7u,2636928640u,15u,4022730752u,18u,1812433253u> &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x14a80c0 .. 0x14a815d (157 bytes)
// Symbol:               sub_14A80C0
// Demangled:            sub_14A80C0
// ============================================================================
