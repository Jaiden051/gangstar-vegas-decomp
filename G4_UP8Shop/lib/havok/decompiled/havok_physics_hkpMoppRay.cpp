#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMoppRay.h"

// ----------------------------------------------------------------------------
// Function: hkpMoppRayBundleVirtualMachine::queryRayOnTree  (binary VA: 0x17fae10)
// Original: hkpMoppRayBundleVirtualMachine::queryRayOnTree
// ----------------------------------------------------------------------------
int hkpMoppRayBundleVirtualMachine::queryRayOnTree(int a1, float *a2, int a3, int a4, int a5)
{
  int v5;
  uint8_t v6;
  uint8_t v7;
  int v8;
  int result;
  float v10; // xmm6_4
  int v11;
  int v12;
  int (**v13)(char *);
  int v14;
  hkLifoAllocator::Self *v15;
  char *v16;
  bool v17; // cc
  float *v18;
  int *v19;
  int v20;
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  void *v29; // xmm7_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm2_4
  float v35; // xmm4_4
  float v36; // xmm5_4
  float v37; // xmm3_4
  float v38; // xmm2_4
  float v39; // xmm5_4
  float v40; // xmm4_4
  float v41; // xmm3_4
  float v42; // xmm2_4
  float v43; // xmm4_4
  float v44; // xmm3_4
  float v45; // xmm2_4
  float *v46;
  float v47;
  float v48; // xmm3_4
  float v49; // xmm2_4
  float v50; // xmm5_4
  float v51; // xmm5_4
  float v52; // xmm3_4
  float v53; // xmm2_4
  float v54; // xmm6_4
  float v55; // xmm4_4
  float v56; // xmm2_4
  float v57; // xmm1_4
  float v58; // xmm1_4
  uint8_t *v59;
  char v60;
  char v61;
  int v62;
  int v63;
  int v64;
  float v65;
  float *v66;
  float v67; // xmm0_4
  float v68; // xmm5_4
  float v69; // xmm4_4
  float *v70;
  float v71; // xmm1_4
  float v72; // xmm3_4
  float v73; // xmm2_4
  float v74; // xmm7_4
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  float v81; // xmm0_4
  float v82; // xmm1_4
  float v83; // xmm7_4
  float v84; // xmm4_4
  float v85; // xmm5_4
  float v86; // xmm1_4
  float v87; // xmm3_4
  float v88; // xmm0_4
  float v89; // xmm2_4
  float v90; // xmm4_4
  float v91; // xmm0_4
  float v92; // xmm1_4
  float v93; // xmm7_4
  float v94; // xmm4_4
  float v95; // xmm5_4
  float v96; // xmm1_4
  float v97; // xmm3_4
  float v98; // xmm0_4
  float v99; // xmm2_4
  float v100; // xmm4_4
  float v101; // xmm0_4
  float v102; // xmm1_4
  float v103; // xmm7_4
  float v104; // xmm4_4
  float v105; // xmm5_4
  float v106; // xmm1_4
  float v107; // xmm3_4
  float v108; // xmm0_4
  float v109; // xmm2_4
  float v110; // xmm4_4
  float v111; // xmm0_4
  float v112; // xmm1_4
  float v113; // xmm4_4
  float v114; // xmm0_4
  float v115; // xmm7_4
  float v116; // xmm1_4
  float v117; // xmm5_4
  float v118; // xmm3_4
  float v119; // xmm2_4
  float v120; // xmm0_4
  float v121; // xmm1_4
  float v122; // xmm7_4
  float v123; // xmm4_4
  float v124; // xmm5_4
  float v125; // xmm1_4
  float v126; // xmm3_4
  float v127; // xmm0_4
  float v128; // xmm2_4
  float v129; // xmm4_4
  float v130; // xmm0_4
  float v131; // xmm1_4
  float v132; // xmm4_4
  float v133; // xmm0_4
  float v134; // xmm7_4
  float v135; // xmm1_4
  float v136; // xmm5_4
  float v137; // xmm3_4
  float v138; // xmm2_4
  float v139; // xmm1_4
  float v140; // xmm2_4
  float v141; // xmm5_4
  float v142; // xmm3_4
  float v143; // xmm0_4
  float v144; // xmm4_4
  float v145; // xmm0_4
  float v146; // xmm1_4
  float v147; // xmm7_4
  float v148; // xmm0_4
  float v149; // xmm3_4
  float v150; // xmm0_4
  float v151; // xmm1_4
  float v152; // xmm2_4
  float v153; // xmm5_4
  float v154; // xmm3_4
  float v155; // xmm0_4
  float v156; // xmm4_4
  float v157; // xmm0_4
  float v158; // xmm1_4
  float v159; // xmm7_4
  float v160; // xmm0_4
  float v161; // xmm3_4
  float v162; // xmm0_4
  float v163; // xmm1_4
  float v164; // xmm5_4
  float v165; // xmm3_4
  float v166; // xmm0_4
  float v167; // xmm4_4
  float v168; // xmm0_4
  float v169; // xmm1_4
  float v170; // xmm5_4
  float v171; // xmm3_4
  float v172; // xmm0_4
  float v173; // xmm4_4
  float v174; // xmm0_4
  float *v175;
  float v176; // xmm6_4
  float v177;
  float *v178;
  float v179;
  float *v180;
  float *v181;
  float v182; // xmm7_4
  int v183;
  int v184;
  int v185;
  int v186;
  float *v187;
  float v188; // xmm4_4
  float v189; // xmm3_4
  float v190; // xmm1_4
  float v191; // xmm2_4
  __m128i v192;
  float v193; // xmm7_4
  float v194; // xmm0_4
  float v195; // xmm5_4
  float v196; // xmm7_4
  int v197;
  int v198;
  int v199;
  int v200;
  int v201;
  int v202;
  float v203; // xmm2_4
  int v204;
  __m128i v205;
  int v206;
  float v207; // xmm4_4
  int v208;
  int v209;
  int v210;
  float v211; // xmm5_4
  int v212; // xmm0_4
  int v213; // xmm3_4
  float v214; // xmm7_4
  float v215; // xmm5_4
  int v216; // xmm0_4
  float v217; // xmm3_4
  float v218; // xmm4_4
  float v219; // xmm5_4
  int v220; // xmm3_4
  __m128i v221;
  float v222; // xmm0_4
  __m128i v223;
  __m128i v224;
  __m128i v225;
  int v226;
  int v227;
  __m128i v228;
  int v229;
  int v230;
  int v231;
  int v232;
  float v233; // xmm0_4
  int v234;
  int v235;
  float v236; // xmm2_4
  int v237;
  float v238; // xmm1_4
  float v239; // xmm2_4
  int v240;
  int v241;
  float v242; // xmm0_4
  int v243; // xmm2_4
  float v244; // xmm4_4
  int v245;
  float v246; // xmm6_4
  float v247; // xmm3_4
  float v248; // xmm1_4
  float v249; // xmm2_4
  float v250; // xmm0_4
  char v251;
  char v252;
  int v253;
  int v254;
  int v255;
  int v256;
  float v257; // xmm1_4
  float v258; // xmm0_4
  float v259; // xmm4_4
  float v260; // xmm2_4
  __m128i v261;
  __m128i v262;
  float v263; // xmm4_4
  __m128i v264;
  float v265; // xmm1_4
  float v266; // xmm5_4
  float v267; // xmm1_4
  float v268; // xmm2_4
  float v269; // xmm0_4
  bool v270;
  __m128i v271;
  __m128i v272;
  __m128i v273;
  int v274;
  int v275;
  __m128i v276;
  int v277;
  int v278; // xmm0_4
  int v279;
  int v280;
  float v281; // xmm0_4
  int v282;
  int v283;
  int v284;
  int v285;
  float v286; // xmm2_4
  float v287; // xmm0_4
  int v288;
  int v289;
  float v290; // xmm1_4
  float v291; // xmm3_4
  float v292; // xmm0_4
  int v293; // xmm3_4
  float v294; // xmm3_4
  char v295;
  float v296; // xmm2_4
  float v297; // xmm7_4
  float v298; // xmm4_4
  float v299; // xmm0_4
  float v300; // xmm1_4
  float v301; // xmm6_4
  char v302;
  float v303; // xmm5_4
  float v304; // xmm4_4
  float v305; // xmm3_4
  float v306; // xmm7_4
  int v307;
  float v308; // xmm7_4
  float v309; // xmm7_4
  int v310;
  float v311; // xmm7_4
  int v312;
  int v313;
  float v314; // xmm6_4
  float v315; // xmm5_4
  float v316; // xmm4_4
  float v317; // xmm3_4
  float v318; // xmm7_4
  float v319; // xmm7_4
  float v320; // xmm7_4
  float v321; // xmm7_4
  float v322; // xmm0_4
  float v323; // xmm2_4
  float v324; // xmm1_4
  float v325; // xmm4_4
  float v326; // xmm3_4
  float v327; // xmm3_4
  float v328; // xmm3_4
  float v329; // xmm3_4
  float v330; // xmm3_4
  float v331; // xmm2_4
  float v332; // xmm1_4
  float v333; // xmm0_4
  float v334; // xmm1_4
  float v335; // xmm6_4
  float v336; // xmm2_4
  float v337; // xmm3_4
  float v338; // xmm0_4
  float v339; // xmm4_4
  int v340;
  int v341;
  float v342; // xmm7_4
  float v343; // xmm1_4
  float v344; // xmm3_4
  float v345; // xmm0_4
  float v346; // xmm5_4
  float v347; // xmm6_4
  float v348; // xmm2_4
  float v349; // xmm2_4
  float v350; // xmm1_4
  int v351;
  float v352;
  float v353;
  float v354;
  int v355;
  float v356;
  float v357;
  float v358;
  int v359;
  bool v360;
  float v361; // xmm0_4
  __m128i v362;
  int v363;
  int v364;
  __m128i v365;
  int v366;
  int v367;
  int v368;
  __m128i v369;
  int v370;
  __m128i v371;
  float v372; // xmm0_4
  int v373;
  int v374;
  int v375;
  int v376;
  float v377; // xmm3_4
  float v378; // xmm0_4
  int v379;
  int v380;
  float v381; // xmm1_4
  float v382; // xmm2_4
  float v383; // xmm0_4
  float v384; // xmm2_4
  char v385;
  char v386;
  char v387;
  char v388;
  float v389; // xmm3_4
  float v390; // xmm2_4
  float v391; // xmm1_4
  float v392; // xmm0_4
  float v393; // xmm4_4
  int v394;
  float v395; // xmm4_4
  float v396; // xmm5_4
  int v397;
  float v398; // xmm4_4
  int v399;
  float v400; // xmm3_4
  float v401; // xmm2_4
  float v402; // xmm1_4
  float v403; // xmm0_4
  float v404; // xmm4_4
  float v405; // xmm4_4
  float v406; // xmm5_4
  float v407; // xmm4_4
  float v408; // xmm0_4
  float v409; // xmm4_4
  float v410; // xmm5_4
  __m128i v411;
  float v412; // xmm0_4
  float v413; // xmm2_4
  float v414; // xmm3_4
  int v415;
  float v416; // xmm3_4
  float v417; // xmm3_4
  float v418; // xmm1_4
  float v419; // xmm0_4
  __m128i v420;
  __m128i v421;
  bool v422;
  int v423;
  int v424;
  __m128i v425;
  __m128i v426;
  int v427;
  int v428;
  int v429;
  int v430;
  float v431; // xmm0_4
  int v432;
  int v433;
  int v434;
  int v435;
  float v436; // xmm4_4
  float v437; // xmm0_4
  int v438;
  int v439;
  float v440; // xmm1_4
  int v441; // xmm3_4
  float v442; // xmm0_4
  float v443; // xmm3_4
  float v444; // xmm4_4
  float v445; // xmm1_4
  float v446; // xmm0_4
  char v447;
  char v448;
  char v449;
  char v450;
  char v451;
  float v452; // xmm3_4
  float v453; // xmm2_4
  float v454; // xmm1_4
  float v455; // xmm0_4
  float v456; // xmm4_4
  int v457;
  float v458; // xmm4_4
  float v459; // xmm5_4
  int v460;
  float v461; // xmm4_4
  int v462;
  float v463; // xmm3_4
  float v464; // xmm2_4
  float v465; // xmm1_4
  float v466; // xmm0_4
  float v467; // xmm4_4
  float v468; // xmm4_4
  float v469; // xmm5_4
  float v470; // xmm4_4
  float v471; // xmm0_4
  float v472; // xmm4_4
  float v473; // xmm5_4
  __m128i v474;
  float v475; // xmm0_4
  float v476; // xmm2_4
  float v477; // xmm3_4
  int v478;
  float v479; // xmm3_4
  float v480; // xmm3_4
  float v481; // xmm1_4
  float v482; // xmm0_4
  float v483; // xmm0_4
  char v484;
  float v485; // xmm5_4
  char v486;
  float v487; // xmm4_4
  float v488; // xmm3_4
  float v489; // xmm2_4
  float v490; // xmm1_4
  float v491; // xmm0_4
  float v492; // xmm7_4
  float v493;
  float *v494;
  float *v495;
  float v496; // xmm0_4
  float v497; // xmm7_4
  float v498; // xmm5_4
  int v499;
  int v500;
  float v501; // xmm7_4
  float v502; // xmm2_4
  float v503; // xmm1_4
  float v504; // xmm0_4
  float v505; // xmm4_4
  float v506; // xmm3_4
  float *v507;
  float v508; // xmm5_4
  float v509; // xmm6_4
  float v510; // xmm2_4
  float v511; // xmm1_4
  int v512;
  float v513; // xmm0_4
  float v514; // xmm2_4
  float v515; // xmm7_4
  float v516; // xmm1_4
  float v517; // xmm0_4
  float v518; // xmm4_4
  float v519; // xmm3_4
  float v520; // xmm5_4
  float v521; // xmm2_4
  float v522; // xmm1_4
  float v523; // xmm0_4
  float v524; // xmm3_4
  int v525; // xmm7_4
  float v526; // xmm2_4
  float v527; // xmm1_4
  float v528; // xmm4_4
  float v529; // xmm7_4
  float v530; // xmm0_4
  float v531; // xmm5_4
  float v532; // xmm4_4
  float v533; // xmm0_4
  float v534; // xmm5_4
  float v535; // xmm0_4
  int v536;
  int v537;
  float *v538;
  float v539; // xmm3_4
  float v540; // xmm2_4
  float v541; // xmm1_4
  float v542; // xmm0_4
  int v543;
  int v544;
  int v545;
  int v546;
  typedef uint32_t _g4_t_v547[4];
  typedef int _g4_t_v548;
  typedef float *_g4_t_v549;
  typedef int _g4_t_v550;
  typedef int _g4_t_v551;
  typedef int _g4_t_v552;
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
  typedef float _g4_t_v565;
  typedef float _g4_t_v566;
  typedef float _g4_t_v567;
  typedef float _g4_t_v568;
  typedef float _g4_t_v569;
  typedef float _g4_t_v570;
  typedef float _g4_t_v571;
  typedef float _g4_t_v572;
  typedef int _g4_t_v573;
  typedef float *_g4_t_v574;
  typedef float *_g4_t_v575;
  typedef float *_g4_t_v576;
  typedef float *_g4_t_v577;
  typedef float *_g4_t_v578;
  typedef float *_g4_t_v579;
  typedef float *_g4_t_v580;
  typedef float *_g4_t_v581;
  typedef float *_g4_t_v582;
  typedef float *_g4_t_v583;
  typedef float *_g4_t_v584;
  typedef float _g4_t_v585;
  typedef float _g4_t_v586;
  typedef float _g4_t_v587;
  typedef float _g4_t_v588;
  typedef float _g4_t_v589;
  typedef float _g4_t_v590;
  typedef int _g4_t_v591;
  typedef float _g4_t_v592;
  typedef float _g4_t_v593;
  typedef int _g4_t_v594;
  typedef int _g4_t_v595;
  typedef int _g4_t_v596;
  typedef int _g4_t_v597;
  typedef float _g4_t_v598;
  typedef float *_g4_t_v599;
  typedef float _g4_t_v600;
  typedef float _g4_t_v601;
  typedef float _g4_t_v602;
  typedef float _g4_t_v603;
  typedef int _g4_t_v604;
  typedef int _g4_t_v605;
  typedef float _g4_t_v606;
  typedef int _g4_t_v607;
  typedef int _g4_t_v608;
  typedef float _g4_t_v609;
  typedef float _g4_t_v610;
  typedef float _g4_t_v611;
  typedef float _g4_t_v612;
  typedef float _g4_t_v613;
  typedef float _g4_t_v614;
  typedef float _g4_t_v615;
  typedef int _g4_t_v616;
  typedef int _g4_t_v617;
  typedef float _g4_t_v618;
  typedef int _g4_t_v619;
  typedef float _g4_t_v620;
  typedef float _g4_t_v621;
  typedef float _g4_t_v622;
  typedef float _g4_t_v623;
  typedef float _g4_t_v624;
  typedef float *_g4_t_v625;
  typedef int _g4_t_v626;
  typedef int _g4_t_v627;
  typedef float _g4_t_v628;
  typedef float _g4_t_v629;
  typedef int _g4_t_v630;
  typedef int _g4_t_v631;
  typedef void *_g4_t_v632;
  typedef int _g4_t_v633;
  typedef char _g4_t_v634;
  typedef float _g4_t_v635;
  typedef float _g4_t_v636;
  typedef float _g4_t_v637;
  typedef float _g4_t_v638;
  typedef int _g4_t_v639;
  typedef float _g4_t_v640;
  typedef float _g4_t_v641;
  typedef float _g4_t_v642;
  typedef float _g4_t_v643;
  typedef int _g4_t_v644;
  typedef int _g4_t_v645;
  typedef float _g4_t_v646;
  typedef float _g4_t_v647;
  typedef int _g4_t_v648;
  typedef float _g4_t_v649;
  typedef float _g4_t_v650;
  typedef float _g4_t_v651;
  typedef float _g4_t_v652;
  typedef float _g4_t_v653;
  typedef float _g4_t_v654;
  typedef float _g4_t_v655;
  typedef float _g4_t_v656;
  typedef float _g4_t_v657;
  typedef float _g4_t_v658;
  typedef float _g4_t_v659;
  typedef float _g4_t_v660;
  typedef float _g4_t_v661;
  typedef float _g4_t_v662;
  typedef float _g4_t_v663;
  typedef float _g4_t_v664;
  typedef float _g4_t_v665;
  typedef float _g4_t_v666;
  typedef float _g4_t_v667;
  typedef float _g4_t_v668;
  typedef float _g4_t_v669;
  typedef int _g4_t_v670;
  typedef float _g4_t_v671;
  typedef float _g4_t_v672;
  typedef float _g4_t_v673;
  typedef int _g4_t_v674;
  typedef float _g4_t_v675;
  typedef float _g4_t_v676;
  typedef float _g4_t_v677;
  typedef float _g4_t_v678;
  typedef float _g4_t_v679;
  typedef float _g4_t_v680;
  typedef float _g4_t_v681;
  typedef float _g4_t_v682;
  typedef float _g4_t_v683;
  typedef float _g4_t_v684;
  typedef float _g4_t_v685;
  typedef float _g4_t_v686;
  typedef float _g4_t_v687;
  typedef float _g4_t_v688;
  typedef float _g4_t_v689;
  typedef float _g4_t_v690;
  typedef float _g4_t_v691;
  typedef float _g4_t_v692;
  typedef float _g4_t_v693;
  typedef float _g4_t_v694;
  typedef int _g4_t_v695;
  typedef int *_g4_t_v696;
  enum : size_t {
    _g4_s0 = 752u,
    _g4_s1 = (0u + sizeof(_g4_t_v547)) > _g4_s0 ? (0u + sizeof(_g4_t_v547)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v548)) > _g4_s1 ? (16u + sizeof(_g4_t_v548)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v549)) > _g4_s2 ? (20u + sizeof(_g4_t_v549)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v550)) > _g4_s3 ? (24u + sizeof(_g4_t_v550)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v551)) > _g4_s4 ? (28u + sizeof(_g4_t_v551)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v552)) > _g4_s5 ? (32u + sizeof(_g4_t_v552)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v553)) > _g4_s6 ? (36u + sizeof(_g4_t_v553)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v554)) > _g4_s7 ? (40u + sizeof(_g4_t_v554)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v555)) > _g4_s8 ? (44u + sizeof(_g4_t_v555)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v556)) > _g4_s9 ? (48u + sizeof(_g4_t_v556)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v557)) > _g4_s10 ? (52u + sizeof(_g4_t_v557)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v558)) > _g4_s11 ? (56u + sizeof(_g4_t_v558)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v559)) > _g4_s12 ? (60u + sizeof(_g4_t_v559)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v560)) > _g4_s13 ? (64u + sizeof(_g4_t_v560)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v561)) > _g4_s14 ? (68u + sizeof(_g4_t_v561)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v562)) > _g4_s15 ? (72u + sizeof(_g4_t_v562)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v563)) > _g4_s16 ? (76u + sizeof(_g4_t_v563)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v564)) > _g4_s17 ? (80u + sizeof(_g4_t_v564)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v565)) > _g4_s18 ? (84u + sizeof(_g4_t_v565)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v566)) > _g4_s19 ? (88u + sizeof(_g4_t_v566)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v567)) > _g4_s20 ? (92u + sizeof(_g4_t_v567)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v568)) > _g4_s21 ? (96u + sizeof(_g4_t_v568)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v569)) > _g4_s22 ? (100u + sizeof(_g4_t_v569)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v570)) > _g4_s23 ? (104u + sizeof(_g4_t_v570)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v571)) > _g4_s24 ? (108u + sizeof(_g4_t_v571)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v572)) > _g4_s25 ? (112u + sizeof(_g4_t_v572)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v573)) > _g4_s26 ? (116u + sizeof(_g4_t_v573)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v574)) > _g4_s27 ? (120u + sizeof(_g4_t_v574)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v575)) > _g4_s28 ? (124u + sizeof(_g4_t_v575)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v576)) > _g4_s29 ? (128u + sizeof(_g4_t_v576)) : _g4_s29,
    _g4_s31 = (132u + sizeof(_g4_t_v577)) > _g4_s30 ? (132u + sizeof(_g4_t_v577)) : _g4_s30,
    _g4_s32 = (136u + sizeof(_g4_t_v578)) > _g4_s31 ? (136u + sizeof(_g4_t_v578)) : _g4_s31,
    _g4_s33 = (140u + sizeof(_g4_t_v579)) > _g4_s32 ? (140u + sizeof(_g4_t_v579)) : _g4_s32,
    _g4_s34 = (144u + sizeof(_g4_t_v580)) > _g4_s33 ? (144u + sizeof(_g4_t_v580)) : _g4_s33,
    _g4_s35 = (148u + sizeof(_g4_t_v581)) > _g4_s34 ? (148u + sizeof(_g4_t_v581)) : _g4_s34,
    _g4_s36 = (152u + sizeof(_g4_t_v582)) > _g4_s35 ? (152u + sizeof(_g4_t_v582)) : _g4_s35,
    _g4_s37 = (156u + sizeof(_g4_t_v583)) > _g4_s36 ? (156u + sizeof(_g4_t_v583)) : _g4_s36,
    _g4_s38 = (160u + sizeof(_g4_t_v584)) > _g4_s37 ? (160u + sizeof(_g4_t_v584)) : _g4_s37,
    _g4_s39 = (164u + sizeof(_g4_t_v585)) > _g4_s38 ? (164u + sizeof(_g4_t_v585)) : _g4_s38,
    _g4_s40 = (168u + sizeof(_g4_t_v586)) > _g4_s39 ? (168u + sizeof(_g4_t_v586)) : _g4_s39,
    _g4_s41 = (172u + sizeof(_g4_t_v587)) > _g4_s40 ? (172u + sizeof(_g4_t_v587)) : _g4_s40,
    _g4_s42 = (176u + sizeof(_g4_t_v588)) > _g4_s41 ? (176u + sizeof(_g4_t_v588)) : _g4_s41,
    _g4_s43 = (180u + sizeof(_g4_t_v589)) > _g4_s42 ? (180u + sizeof(_g4_t_v589)) : _g4_s42,
    _g4_s44 = (184u + sizeof(_g4_t_v590)) > _g4_s43 ? (184u + sizeof(_g4_t_v590)) : _g4_s43,
    _g4_s45 = (188u + sizeof(_g4_t_v591)) > _g4_s44 ? (188u + sizeof(_g4_t_v591)) : _g4_s44,
    _g4_s46 = (192u + sizeof(_g4_t_v592)) > _g4_s45 ? (192u + sizeof(_g4_t_v592)) : _g4_s45,
    _g4_s47 = (196u + sizeof(_g4_t_v593)) > _g4_s46 ? (196u + sizeof(_g4_t_v593)) : _g4_s46,
    _g4_s48 = (200u + sizeof(_g4_t_v594)) > _g4_s47 ? (200u + sizeof(_g4_t_v594)) : _g4_s47,
    _g4_s49 = (204u + sizeof(_g4_t_v595)) > _g4_s48 ? (204u + sizeof(_g4_t_v595)) : _g4_s48,
    _g4_s50 = (208u + sizeof(_g4_t_v596)) > _g4_s49 ? (208u + sizeof(_g4_t_v596)) : _g4_s49,
    _g4_s51 = (212u + sizeof(_g4_t_v597)) > _g4_s50 ? (212u + sizeof(_g4_t_v597)) : _g4_s50,
    _g4_s52 = (216u + sizeof(_g4_t_v598)) > _g4_s51 ? (216u + sizeof(_g4_t_v598)) : _g4_s51,
    _g4_s53 = (220u + sizeof(_g4_t_v599)) > _g4_s52 ? (220u + sizeof(_g4_t_v599)) : _g4_s52,
    _g4_s54 = (224u + sizeof(_g4_t_v600)) > _g4_s53 ? (224u + sizeof(_g4_t_v600)) : _g4_s53,
    _g4_s55 = (228u + sizeof(_g4_t_v601)) > _g4_s54 ? (228u + sizeof(_g4_t_v601)) : _g4_s54,
    _g4_s56 = (232u + sizeof(_g4_t_v602)) > _g4_s55 ? (232u + sizeof(_g4_t_v602)) : _g4_s55,
    _g4_s57 = (236u + sizeof(_g4_t_v603)) > _g4_s56 ? (236u + sizeof(_g4_t_v603)) : _g4_s56,
    _g4_s58 = (240u + sizeof(_g4_t_v604)) > _g4_s57 ? (240u + sizeof(_g4_t_v604)) : _g4_s57,
    _g4_s59 = (244u + sizeof(_g4_t_v605)) > _g4_s58 ? (244u + sizeof(_g4_t_v605)) : _g4_s58,
    _g4_s60 = (248u + sizeof(_g4_t_v606)) > _g4_s59 ? (248u + sizeof(_g4_t_v606)) : _g4_s59,
    _g4_s61 = (252u + sizeof(_g4_t_v607)) > _g4_s60 ? (252u + sizeof(_g4_t_v607)) : _g4_s60,
    _g4_s62 = (256u + sizeof(_g4_t_v608)) > _g4_s61 ? (256u + sizeof(_g4_t_v608)) : _g4_s61,
    _g4_s63 = (260u + sizeof(_g4_t_v609)) > _g4_s62 ? (260u + sizeof(_g4_t_v609)) : _g4_s62,
    _g4_s64 = (264u + sizeof(_g4_t_v610)) > _g4_s63 ? (264u + sizeof(_g4_t_v610)) : _g4_s63,
    _g4_s65 = (268u + sizeof(_g4_t_v611)) > _g4_s64 ? (268u + sizeof(_g4_t_v611)) : _g4_s64,
    _g4_s66 = (272u + sizeof(_g4_t_v612)) > _g4_s65 ? (272u + sizeof(_g4_t_v612)) : _g4_s65,
    _g4_s67 = (276u + sizeof(_g4_t_v613)) > _g4_s66 ? (276u + sizeof(_g4_t_v613)) : _g4_s66,
    _g4_s68 = (280u + sizeof(_g4_t_v614)) > _g4_s67 ? (280u + sizeof(_g4_t_v614)) : _g4_s67,
    _g4_s69 = (284u + sizeof(_g4_t_v615)) > _g4_s68 ? (284u + sizeof(_g4_t_v615)) : _g4_s68,
    _g4_s70 = (288u + sizeof(_g4_t_v616)) > _g4_s69 ? (288u + sizeof(_g4_t_v616)) : _g4_s69,
    _g4_s71 = (292u + sizeof(_g4_t_v617)) > _g4_s70 ? (292u + sizeof(_g4_t_v617)) : _g4_s70,
    _g4_s72 = (296u + sizeof(_g4_t_v618)) > _g4_s71 ? (296u + sizeof(_g4_t_v618)) : _g4_s71,
    _g4_s73 = (300u + sizeof(_g4_t_v619)) > _g4_s72 ? (300u + sizeof(_g4_t_v619)) : _g4_s72,
    _g4_s74 = (304u + sizeof(_g4_t_v620)) > _g4_s73 ? (304u + sizeof(_g4_t_v620)) : _g4_s73,
    _g4_s75 = (308u + sizeof(_g4_t_v621)) > _g4_s74 ? (308u + sizeof(_g4_t_v621)) : _g4_s74,
    _g4_s76 = (312u + sizeof(_g4_t_v622)) > _g4_s75 ? (312u + sizeof(_g4_t_v622)) : _g4_s75,
    _g4_s77 = (316u + sizeof(_g4_t_v623)) > _g4_s76 ? (316u + sizeof(_g4_t_v623)) : _g4_s76,
    _g4_s78 = (320u + sizeof(_g4_t_v624)) > _g4_s77 ? (320u + sizeof(_g4_t_v624)) : _g4_s77,
    _g4_s79 = (324u + sizeof(_g4_t_v625)) > _g4_s78 ? (324u + sizeof(_g4_t_v625)) : _g4_s78,
    _g4_s80 = (328u + sizeof(_g4_t_v626)) > _g4_s79 ? (328u + sizeof(_g4_t_v626)) : _g4_s79,
    _g4_s81 = (332u + sizeof(_g4_t_v627)) > _g4_s80 ? (332u + sizeof(_g4_t_v627)) : _g4_s80,
    _g4_s82 = (336u + sizeof(_g4_t_v628)) > _g4_s81 ? (336u + sizeof(_g4_t_v628)) : _g4_s81,
    _g4_s83 = (340u + sizeof(_g4_t_v629)) > _g4_s82 ? (340u + sizeof(_g4_t_v629)) : _g4_s82,
    _g4_s84 = (344u + sizeof(_g4_t_v630)) > _g4_s83 ? (344u + sizeof(_g4_t_v630)) : _g4_s83,
    _g4_s85 = (348u + sizeof(_g4_t_v631)) > _g4_s84 ? (348u + sizeof(_g4_t_v631)) : _g4_s84,
    _g4_s86 = (352u + sizeof(_g4_t_v632)) > _g4_s85 ? (352u + sizeof(_g4_t_v632)) : _g4_s85,
    _g4_s87 = (356u + sizeof(_g4_t_v633)) > _g4_s86 ? (356u + sizeof(_g4_t_v633)) : _g4_s86,
    _g4_s88 = (363u + sizeof(_g4_t_v634)) > _g4_s87 ? (363u + sizeof(_g4_t_v634)) : _g4_s87,
    _g4_s89 = (364u + sizeof(_g4_t_v635)) > _g4_s88 ? (364u + sizeof(_g4_t_v635)) : _g4_s88,
    _g4_s90 = (368u + sizeof(_g4_t_v636)) > _g4_s89 ? (368u + sizeof(_g4_t_v636)) : _g4_s89,
    _g4_s91 = (372u + sizeof(_g4_t_v637)) > _g4_s90 ? (372u + sizeof(_g4_t_v637)) : _g4_s90,
    _g4_s92 = (376u + sizeof(_g4_t_v638)) > _g4_s91 ? (376u + sizeof(_g4_t_v638)) : _g4_s91,
    _g4_s93 = (380u + sizeof(_g4_t_v639)) > _g4_s92 ? (380u + sizeof(_g4_t_v639)) : _g4_s92,
    _g4_s94 = (396u + sizeof(_g4_t_v640)) > _g4_s93 ? (396u + sizeof(_g4_t_v640)) : _g4_s93,
    _g4_s95 = (400u + sizeof(_g4_t_v641)) > _g4_s94 ? (400u + sizeof(_g4_t_v641)) : _g4_s94,
    _g4_s96 = (404u + sizeof(_g4_t_v642)) > _g4_s95 ? (404u + sizeof(_g4_t_v642)) : _g4_s95,
    _g4_s97 = (408u + sizeof(_g4_t_v643)) > _g4_s96 ? (408u + sizeof(_g4_t_v643)) : _g4_s96,
    _g4_s98 = (412u + sizeof(_g4_t_v644)) > _g4_s97 ? (412u + sizeof(_g4_t_v644)) : _g4_s97,
    _g4_s99 = (416u + sizeof(_g4_t_v645)) > _g4_s98 ? (416u + sizeof(_g4_t_v645)) : _g4_s98,
    _g4_s100 = (428u + sizeof(_g4_t_v646)) > _g4_s99 ? (428u + sizeof(_g4_t_v646)) : _g4_s99,
    _g4_s101 = (432u + sizeof(_g4_t_v647)) > _g4_s100 ? (432u + sizeof(_g4_t_v647)) : _g4_s100,
    _g4_s102 = (436u + sizeof(_g4_t_v648)) > _g4_s101 ? (436u + sizeof(_g4_t_v648)) : _g4_s101,
    _g4_s103 = (440u + sizeof(_g4_t_v649)) > _g4_s102 ? (440u + sizeof(_g4_t_v649)) : _g4_s102,
    _g4_s104 = (444u + sizeof(_g4_t_v650)) > _g4_s103 ? (444u + sizeof(_g4_t_v650)) : _g4_s103,
    _g4_s105 = (448u + sizeof(_g4_t_v651)) > _g4_s104 ? (448u + sizeof(_g4_t_v651)) : _g4_s104,
    _g4_s106 = (452u + sizeof(_g4_t_v652)) > _g4_s105 ? (452u + sizeof(_g4_t_v652)) : _g4_s105,
    _g4_s107 = (456u + sizeof(_g4_t_v653)) > _g4_s106 ? (456u + sizeof(_g4_t_v653)) : _g4_s106,
    _g4_s108 = (460u + sizeof(_g4_t_v654)) > _g4_s107 ? (460u + sizeof(_g4_t_v654)) : _g4_s107,
    _g4_s109 = (464u + sizeof(_g4_t_v655)) > _g4_s108 ? (464u + sizeof(_g4_t_v655)) : _g4_s108,
    _g4_s110 = (468u + sizeof(_g4_t_v656)) > _g4_s109 ? (468u + sizeof(_g4_t_v656)) : _g4_s109,
    _g4_s111 = (472u + sizeof(_g4_t_v657)) > _g4_s110 ? (472u + sizeof(_g4_t_v657)) : _g4_s110,
    _g4_s112 = (476u + sizeof(_g4_t_v658)) > _g4_s111 ? (476u + sizeof(_g4_t_v658)) : _g4_s111,
    _g4_s113 = (480u + sizeof(_g4_t_v659)) > _g4_s112 ? (480u + sizeof(_g4_t_v659)) : _g4_s112,
    _g4_s114 = (484u + sizeof(_g4_t_v660)) > _g4_s113 ? (484u + sizeof(_g4_t_v660)) : _g4_s113,
    _g4_s115 = (488u + sizeof(_g4_t_v661)) > _g4_s114 ? (488u + sizeof(_g4_t_v661)) : _g4_s114,
    _g4_s116 = (492u + sizeof(_g4_t_v662)) > _g4_s115 ? (492u + sizeof(_g4_t_v662)) : _g4_s115,
    _g4_s117 = (496u + sizeof(_g4_t_v663)) > _g4_s116 ? (496u + sizeof(_g4_t_v663)) : _g4_s116,
    _g4_s118 = (500u + sizeof(_g4_t_v664)) > _g4_s117 ? (500u + sizeof(_g4_t_v664)) : _g4_s117,
    _g4_s119 = (504u + sizeof(_g4_t_v665)) > _g4_s118 ? (504u + sizeof(_g4_t_v665)) : _g4_s118,
    _g4_s120 = (508u + sizeof(_g4_t_v666)) > _g4_s119 ? (508u + sizeof(_g4_t_v666)) : _g4_s119,
    _g4_s121 = (512u + sizeof(_g4_t_v667)) > _g4_s120 ? (512u + sizeof(_g4_t_v667)) : _g4_s120,
    _g4_s122 = (516u + sizeof(_g4_t_v668)) > _g4_s121 ? (516u + sizeof(_g4_t_v668)) : _g4_s121,
    _g4_s123 = (520u + sizeof(_g4_t_v669)) > _g4_s122 ? (520u + sizeof(_g4_t_v669)) : _g4_s122,
    _g4_s124 = (524u + sizeof(_g4_t_v670)) > _g4_s123 ? (524u + sizeof(_g4_t_v670)) : _g4_s123,
    _g4_s125 = (540u + sizeof(_g4_t_v671)) > _g4_s124 ? (540u + sizeof(_g4_t_v671)) : _g4_s124,
    _g4_s126 = (544u + sizeof(_g4_t_v672)) > _g4_s125 ? (544u + sizeof(_g4_t_v672)) : _g4_s125,
    _g4_s127 = (548u + sizeof(_g4_t_v673)) > _g4_s126 ? (548u + sizeof(_g4_t_v673)) : _g4_s126,
    _g4_s128 = (552u + sizeof(_g4_t_v674)) > _g4_s127 ? (552u + sizeof(_g4_t_v674)) : _g4_s127,
    _g4_s129 = (556u + sizeof(_g4_t_v675)) > _g4_s128 ? (556u + sizeof(_g4_t_v675)) : _g4_s128,
    _g4_s130 = (560u + sizeof(_g4_t_v676)) > _g4_s129 ? (560u + sizeof(_g4_t_v676)) : _g4_s129,
    _g4_s131 = (564u + sizeof(_g4_t_v677)) > _g4_s130 ? (564u + sizeof(_g4_t_v677)) : _g4_s130,
    _g4_s132 = (568u + sizeof(_g4_t_v678)) > _g4_s131 ? (568u + sizeof(_g4_t_v678)) : _g4_s131,
    _g4_s133 = (572u + sizeof(_g4_t_v679)) > _g4_s132 ? (572u + sizeof(_g4_t_v679)) : _g4_s132,
    _g4_s134 = (576u + sizeof(_g4_t_v680)) > _g4_s133 ? (576u + sizeof(_g4_t_v680)) : _g4_s133,
    _g4_s135 = (580u + sizeof(_g4_t_v681)) > _g4_s134 ? (580u + sizeof(_g4_t_v681)) : _g4_s134,
    _g4_s136 = (584u + sizeof(_g4_t_v682)) > _g4_s135 ? (584u + sizeof(_g4_t_v682)) : _g4_s135,
    _g4_s137 = (588u + sizeof(_g4_t_v683)) > _g4_s136 ? (588u + sizeof(_g4_t_v683)) : _g4_s136,
    _g4_s138 = (592u + sizeof(_g4_t_v684)) > _g4_s137 ? (592u + sizeof(_g4_t_v684)) : _g4_s137,
    _g4_s139 = (596u + sizeof(_g4_t_v685)) > _g4_s138 ? (596u + sizeof(_g4_t_v685)) : _g4_s138,
    _g4_s140 = (600u + sizeof(_g4_t_v686)) > _g4_s139 ? (600u + sizeof(_g4_t_v686)) : _g4_s139,
    _g4_s141 = (604u + sizeof(_g4_t_v687)) > _g4_s140 ? (604u + sizeof(_g4_t_v687)) : _g4_s140,
    _g4_s142 = (608u + sizeof(_g4_t_v688)) > _g4_s141 ? (608u + sizeof(_g4_t_v688)) : _g4_s141,
    _g4_s143 = (612u + sizeof(_g4_t_v689)) > _g4_s142 ? (612u + sizeof(_g4_t_v689)) : _g4_s142,
    _g4_s144 = (616u + sizeof(_g4_t_v690)) > _g4_s143 ? (616u + sizeof(_g4_t_v690)) : _g4_s143,
    _g4_s145 = (620u + sizeof(_g4_t_v691)) > _g4_s144 ? (620u + sizeof(_g4_t_v691)) : _g4_s144,
    _g4_s146 = (624u + sizeof(_g4_t_v692)) > _g4_s145 ? (624u + sizeof(_g4_t_v692)) : _g4_s145,
    _g4_s147 = (628u + sizeof(_g4_t_v693)) > _g4_s146 ? (628u + sizeof(_g4_t_v693)) : _g4_s146,
    _g4_s148 = (632u + sizeof(_g4_t_v694)) > _g4_s147 ? (632u + sizeof(_g4_t_v694)) : _g4_s147,
    _g4_s149 = (636u + sizeof(_g4_t_v695)) > _g4_s148 ? (636u + sizeof(_g4_t_v695)) : _g4_s148,
    _g4_s150 = (660u + sizeof(_g4_t_v696)) > _g4_s149 ? (660u + sizeof(_g4_t_v696)) : _g4_s149
  };
  alignas(16) uint8_t _g4_sf[_g4_s150];
  _g4_t_v547 &v547 = *reinterpret_cast<_g4_t_v547 *>(_g4_sf + 0u);
  _g4_t_v548 &v548 = *reinterpret_cast<_g4_t_v548 *>(_g4_sf + 16u);
  _g4_t_v549 &v549 = *reinterpret_cast<_g4_t_v549 *>(_g4_sf + 20u);
  _g4_t_v550 &v550 = *reinterpret_cast<_g4_t_v550 *>(_g4_sf + 24u);
  _g4_t_v551 &v551 = *reinterpret_cast<_g4_t_v551 *>(_g4_sf + 28u);
  _g4_t_v552 &v552 = *reinterpret_cast<_g4_t_v552 *>(_g4_sf + 32u);
  _g4_t_v553 &v553 = *reinterpret_cast<_g4_t_v553 *>(_g4_sf + 36u);
  _g4_t_v554 &v554 = *reinterpret_cast<_g4_t_v554 *>(_g4_sf + 40u);
  _g4_t_v555 &v555 = *reinterpret_cast<_g4_t_v555 *>(_g4_sf + 44u);
  _g4_t_v556 &v556 = *reinterpret_cast<_g4_t_v556 *>(_g4_sf + 48u);
  _g4_t_v557 &v557 = *reinterpret_cast<_g4_t_v557 *>(_g4_sf + 52u);
  _g4_t_v558 &v558 = *reinterpret_cast<_g4_t_v558 *>(_g4_sf + 56u);
  _g4_t_v559 &v559 = *reinterpret_cast<_g4_t_v559 *>(_g4_sf + 60u);
  _g4_t_v560 &v560 = *reinterpret_cast<_g4_t_v560 *>(_g4_sf + 64u);
  _g4_t_v561 &v561 = *reinterpret_cast<_g4_t_v561 *>(_g4_sf + 68u);
  _g4_t_v562 &v562 = *reinterpret_cast<_g4_t_v562 *>(_g4_sf + 72u);
  _g4_t_v563 &v563 = *reinterpret_cast<_g4_t_v563 *>(_g4_sf + 76u);
  _g4_t_v564 &v564 = *reinterpret_cast<_g4_t_v564 *>(_g4_sf + 80u);
  _g4_t_v565 &v565 = *reinterpret_cast<_g4_t_v565 *>(_g4_sf + 84u);
  _g4_t_v566 &v566 = *reinterpret_cast<_g4_t_v566 *>(_g4_sf + 88u);
  _g4_t_v567 &v567 = *reinterpret_cast<_g4_t_v567 *>(_g4_sf + 92u);
  _g4_t_v568 &v568 = *reinterpret_cast<_g4_t_v568 *>(_g4_sf + 96u);
  _g4_t_v569 &v569 = *reinterpret_cast<_g4_t_v569 *>(_g4_sf + 100u);
  _g4_t_v570 &v570 = *reinterpret_cast<_g4_t_v570 *>(_g4_sf + 104u);
  _g4_t_v571 &v571 = *reinterpret_cast<_g4_t_v571 *>(_g4_sf + 108u);
  _g4_t_v572 &v572 = *reinterpret_cast<_g4_t_v572 *>(_g4_sf + 112u);
  _g4_t_v573 &v573 = *reinterpret_cast<_g4_t_v573 *>(_g4_sf + 116u);
  _g4_t_v574 &v574 = *reinterpret_cast<_g4_t_v574 *>(_g4_sf + 120u);
  _g4_t_v575 &v575 = *reinterpret_cast<_g4_t_v575 *>(_g4_sf + 124u);
  _g4_t_v576 &v576 = *reinterpret_cast<_g4_t_v576 *>(_g4_sf + 128u);
  _g4_t_v577 &v577 = *reinterpret_cast<_g4_t_v577 *>(_g4_sf + 132u);
  _g4_t_v578 &v578 = *reinterpret_cast<_g4_t_v578 *>(_g4_sf + 136u);
  _g4_t_v579 &v579 = *reinterpret_cast<_g4_t_v579 *>(_g4_sf + 140u);
  _g4_t_v580 &v580 = *reinterpret_cast<_g4_t_v580 *>(_g4_sf + 144u);
  _g4_t_v581 &v581 = *reinterpret_cast<_g4_t_v581 *>(_g4_sf + 148u);
  _g4_t_v582 &v582 = *reinterpret_cast<_g4_t_v582 *>(_g4_sf + 152u);
  _g4_t_v583 &v583 = *reinterpret_cast<_g4_t_v583 *>(_g4_sf + 156u);
  _g4_t_v584 &v584 = *reinterpret_cast<_g4_t_v584 *>(_g4_sf + 160u);
  _g4_t_v585 &v585 = *reinterpret_cast<_g4_t_v585 *>(_g4_sf + 164u);
  _g4_t_v586 &v586 = *reinterpret_cast<_g4_t_v586 *>(_g4_sf + 168u);
  _g4_t_v587 &v587 = *reinterpret_cast<_g4_t_v587 *>(_g4_sf + 172u);
  _g4_t_v588 &v588 = *reinterpret_cast<_g4_t_v588 *>(_g4_sf + 176u);
  _g4_t_v589 &v589 = *reinterpret_cast<_g4_t_v589 *>(_g4_sf + 180u);
  _g4_t_v590 &v590 = *reinterpret_cast<_g4_t_v590 *>(_g4_sf + 184u);
  _g4_t_v591 &v591 = *reinterpret_cast<_g4_t_v591 *>(_g4_sf + 188u);
  _g4_t_v592 &v592 = *reinterpret_cast<_g4_t_v592 *>(_g4_sf + 192u);
  _g4_t_v593 &v593 = *reinterpret_cast<_g4_t_v593 *>(_g4_sf + 196u);
  _g4_t_v594 &v594 = *reinterpret_cast<_g4_t_v594 *>(_g4_sf + 200u);
  _g4_t_v595 &v595 = *reinterpret_cast<_g4_t_v595 *>(_g4_sf + 204u);
  _g4_t_v596 &v596 = *reinterpret_cast<_g4_t_v596 *>(_g4_sf + 208u);
  _g4_t_v597 &v597 = *reinterpret_cast<_g4_t_v597 *>(_g4_sf + 212u);
  _g4_t_v598 &v598 = *reinterpret_cast<_g4_t_v598 *>(_g4_sf + 216u);
  _g4_t_v599 &v599 = *reinterpret_cast<_g4_t_v599 *>(_g4_sf + 220u);
  _g4_t_v600 &v600 = *reinterpret_cast<_g4_t_v600 *>(_g4_sf + 224u);
  _g4_t_v601 &v601 = *reinterpret_cast<_g4_t_v601 *>(_g4_sf + 228u);
  _g4_t_v602 &v602 = *reinterpret_cast<_g4_t_v602 *>(_g4_sf + 232u);
  _g4_t_v603 &v603 = *reinterpret_cast<_g4_t_v603 *>(_g4_sf + 236u);
  _g4_t_v604 &v604 = *reinterpret_cast<_g4_t_v604 *>(_g4_sf + 240u);
  _g4_t_v605 &v605 = *reinterpret_cast<_g4_t_v605 *>(_g4_sf + 244u);
  _g4_t_v606 &v606 = *reinterpret_cast<_g4_t_v606 *>(_g4_sf + 248u);
  _g4_t_v607 &v607 = *reinterpret_cast<_g4_t_v607 *>(_g4_sf + 252u);
  _g4_t_v608 &v608 = *reinterpret_cast<_g4_t_v608 *>(_g4_sf + 256u);
  _g4_t_v609 &v609 = *reinterpret_cast<_g4_t_v609 *>(_g4_sf + 260u);
  _g4_t_v610 &v610 = *reinterpret_cast<_g4_t_v610 *>(_g4_sf + 264u);
  _g4_t_v611 &v611 = *reinterpret_cast<_g4_t_v611 *>(_g4_sf + 268u);
  _g4_t_v612 &v612 = *reinterpret_cast<_g4_t_v612 *>(_g4_sf + 272u);
  _g4_t_v613 &v613 = *reinterpret_cast<_g4_t_v613 *>(_g4_sf + 276u);
  _g4_t_v614 &v614 = *reinterpret_cast<_g4_t_v614 *>(_g4_sf + 280u);
  _g4_t_v615 &v615 = *reinterpret_cast<_g4_t_v615 *>(_g4_sf + 284u);
  _g4_t_v616 &v616 = *reinterpret_cast<_g4_t_v616 *>(_g4_sf + 288u);
  _g4_t_v617 &v617 = *reinterpret_cast<_g4_t_v617 *>(_g4_sf + 292u);
  _g4_t_v618 &v618 = *reinterpret_cast<_g4_t_v618 *>(_g4_sf + 296u);
  _g4_t_v619 &v619 = *reinterpret_cast<_g4_t_v619 *>(_g4_sf + 300u);
  _g4_t_v620 &v620 = *reinterpret_cast<_g4_t_v620 *>(_g4_sf + 304u);
  _g4_t_v621 &v621 = *reinterpret_cast<_g4_t_v621 *>(_g4_sf + 308u);
  _g4_t_v622 &v622 = *reinterpret_cast<_g4_t_v622 *>(_g4_sf + 312u);
  _g4_t_v623 &v623 = *reinterpret_cast<_g4_t_v623 *>(_g4_sf + 316u);
  _g4_t_v624 &v624 = *reinterpret_cast<_g4_t_v624 *>(_g4_sf + 320u);
  _g4_t_v625 &v625 = *reinterpret_cast<_g4_t_v625 *>(_g4_sf + 324u);
  _g4_t_v626 &v626 = *reinterpret_cast<_g4_t_v626 *>(_g4_sf + 328u);
  _g4_t_v627 &v627 = *reinterpret_cast<_g4_t_v627 *>(_g4_sf + 332u);
  _g4_t_v628 &v628 = *reinterpret_cast<_g4_t_v628 *>(_g4_sf + 336u);
  _g4_t_v629 &v629 = *reinterpret_cast<_g4_t_v629 *>(_g4_sf + 340u);
  _g4_t_v630 &v630 = *reinterpret_cast<_g4_t_v630 *>(_g4_sf + 344u);
  _g4_t_v631 &v631 = *reinterpret_cast<_g4_t_v631 *>(_g4_sf + 348u);
  _g4_t_v632 &v632 = *reinterpret_cast<_g4_t_v632 *>(_g4_sf + 352u);
  _g4_t_v633 &v633 = *reinterpret_cast<_g4_t_v633 *>(_g4_sf + 356u);
  _g4_t_v634 &v634 = *reinterpret_cast<_g4_t_v634 *>(_g4_sf + 363u);
  _g4_t_v635 &v635 = *reinterpret_cast<_g4_t_v635 *>(_g4_sf + 364u);
  _g4_t_v636 &v636 = *reinterpret_cast<_g4_t_v636 *>(_g4_sf + 368u);
  _g4_t_v637 &v637 = *reinterpret_cast<_g4_t_v637 *>(_g4_sf + 372u);
  _g4_t_v638 &v638 = *reinterpret_cast<_g4_t_v638 *>(_g4_sf + 376u);
  _g4_t_v639 &v639 = *reinterpret_cast<_g4_t_v639 *>(_g4_sf + 380u);
  _g4_t_v640 &v640 = *reinterpret_cast<_g4_t_v640 *>(_g4_sf + 396u);
  _g4_t_v641 &v641 = *reinterpret_cast<_g4_t_v641 *>(_g4_sf + 400u);
  _g4_t_v642 &v642 = *reinterpret_cast<_g4_t_v642 *>(_g4_sf + 404u);
  _g4_t_v643 &v643 = *reinterpret_cast<_g4_t_v643 *>(_g4_sf + 408u);
  _g4_t_v644 &v644 = *reinterpret_cast<_g4_t_v644 *>(_g4_sf + 412u);
  _g4_t_v645 &v645 = *reinterpret_cast<_g4_t_v645 *>(_g4_sf + 416u);
  _g4_t_v646 &v646 = *reinterpret_cast<_g4_t_v646 *>(_g4_sf + 428u);
  _g4_t_v647 &v647 = *reinterpret_cast<_g4_t_v647 *>(_g4_sf + 432u);
  _g4_t_v648 &v648 = *reinterpret_cast<_g4_t_v648 *>(_g4_sf + 436u);
  _g4_t_v649 &v649 = *reinterpret_cast<_g4_t_v649 *>(_g4_sf + 440u);
  _g4_t_v650 &v650 = *reinterpret_cast<_g4_t_v650 *>(_g4_sf + 444u);
  _g4_t_v651 &v651 = *reinterpret_cast<_g4_t_v651 *>(_g4_sf + 448u);
  _g4_t_v652 &v652 = *reinterpret_cast<_g4_t_v652 *>(_g4_sf + 452u);
  _g4_t_v653 &v653 = *reinterpret_cast<_g4_t_v653 *>(_g4_sf + 456u);
  _g4_t_v654 &v654 = *reinterpret_cast<_g4_t_v654 *>(_g4_sf + 460u);
  _g4_t_v655 &v655 = *reinterpret_cast<_g4_t_v655 *>(_g4_sf + 464u);
  _g4_t_v656 &v656 = *reinterpret_cast<_g4_t_v656 *>(_g4_sf + 468u);
  _g4_t_v657 &v657 = *reinterpret_cast<_g4_t_v657 *>(_g4_sf + 472u);
  _g4_t_v658 &v658 = *reinterpret_cast<_g4_t_v658 *>(_g4_sf + 476u);
  _g4_t_v659 &v659 = *reinterpret_cast<_g4_t_v659 *>(_g4_sf + 480u);
  _g4_t_v660 &v660 = *reinterpret_cast<_g4_t_v660 *>(_g4_sf + 484u);
  _g4_t_v661 &v661 = *reinterpret_cast<_g4_t_v661 *>(_g4_sf + 488u);
  _g4_t_v662 &v662 = *reinterpret_cast<_g4_t_v662 *>(_g4_sf + 492u);
  _g4_t_v663 &v663 = *reinterpret_cast<_g4_t_v663 *>(_g4_sf + 496u);
  _g4_t_v664 &v664 = *reinterpret_cast<_g4_t_v664 *>(_g4_sf + 500u);
  _g4_t_v665 &v665 = *reinterpret_cast<_g4_t_v665 *>(_g4_sf + 504u);
  _g4_t_v666 &v666 = *reinterpret_cast<_g4_t_v666 *>(_g4_sf + 508u);
  _g4_t_v667 &v667 = *reinterpret_cast<_g4_t_v667 *>(_g4_sf + 512u);
  _g4_t_v668 &v668 = *reinterpret_cast<_g4_t_v668 *>(_g4_sf + 516u);
  _g4_t_v669 &v669 = *reinterpret_cast<_g4_t_v669 *>(_g4_sf + 520u);
  _g4_t_v670 &v670 = *reinterpret_cast<_g4_t_v670 *>(_g4_sf + 524u);
  _g4_t_v671 &v671 = *reinterpret_cast<_g4_t_v671 *>(_g4_sf + 540u);
  _g4_t_v672 &v672 = *reinterpret_cast<_g4_t_v672 *>(_g4_sf + 544u);
  _g4_t_v673 &v673 = *reinterpret_cast<_g4_t_v673 *>(_g4_sf + 548u);
  _g4_t_v674 &v674 = *reinterpret_cast<_g4_t_v674 *>(_g4_sf + 552u);
  _g4_t_v675 &v675 = *reinterpret_cast<_g4_t_v675 *>(_g4_sf + 556u);
  _g4_t_v676 &v676 = *reinterpret_cast<_g4_t_v676 *>(_g4_sf + 560u);
  _g4_t_v677 &v677 = *reinterpret_cast<_g4_t_v677 *>(_g4_sf + 564u);
  _g4_t_v678 &v678 = *reinterpret_cast<_g4_t_v678 *>(_g4_sf + 568u);
  _g4_t_v679 &v679 = *reinterpret_cast<_g4_t_v679 *>(_g4_sf + 572u);
  _g4_t_v680 &v680 = *reinterpret_cast<_g4_t_v680 *>(_g4_sf + 576u);
  _g4_t_v681 &v681 = *reinterpret_cast<_g4_t_v681 *>(_g4_sf + 580u);
  _g4_t_v682 &v682 = *reinterpret_cast<_g4_t_v682 *>(_g4_sf + 584u);
  _g4_t_v683 &v683 = *reinterpret_cast<_g4_t_v683 *>(_g4_sf + 588u);
  _g4_t_v684 &v684 = *reinterpret_cast<_g4_t_v684 *>(_g4_sf + 592u);
  _g4_t_v685 &v685 = *reinterpret_cast<_g4_t_v685 *>(_g4_sf + 596u);
  _g4_t_v686 &v686 = *reinterpret_cast<_g4_t_v686 *>(_g4_sf + 600u);
  _g4_t_v687 &v687 = *reinterpret_cast<_g4_t_v687 *>(_g4_sf + 604u);
  _g4_t_v688 &v688 = *reinterpret_cast<_g4_t_v688 *>(_g4_sf + 608u);
  _g4_t_v689 &v689 = *reinterpret_cast<_g4_t_v689 *>(_g4_sf + 612u);
  _g4_t_v690 &v690 = *reinterpret_cast<_g4_t_v690 *>(_g4_sf + 616u);
  _g4_t_v691 &v691 = *reinterpret_cast<_g4_t_v691 *>(_g4_sf + 620u);
  _g4_t_v692 &v692 = *reinterpret_cast<_g4_t_v692 *>(_g4_sf + 624u);
  _g4_t_v693 &v693 = *reinterpret_cast<_g4_t_v693 *>(_g4_sf + 628u);
  _g4_t_v694 &v694 = *reinterpret_cast<_g4_t_v694 *>(_g4_sf + 632u);
  _g4_t_v695 &v695 = *reinterpret_cast<_g4_t_v695 *>(_g4_sf + 636u);
  _g4_t_v696 &v696 = *reinterpret_cast<_g4_t_v696 *>(_g4_sf + 660u);

  v696 = &a1;
  v627 = a1;
  v625 = a2;
  v630 = a3;
  v5 = a4;
  v616 = a5;
  if ( byte_2136390 != 0 || (hkpCheckKeycode(), result = hkpProcessFlyingColors(&byte_2136390), byte_2136390 != 0) )
  {
    v6 = *(uint8_t *)v630;
    LOBYTE(v626) = *(uint8_t *)(v630 + 3);
    v7 = *(uint8_t *)(v630 + 2);
    LOBYTE(v631) = v6;
    LOBYTE(v628) = *(uint8_t *)(v630 + 1);
    v599 = (float *)&g_vectorfConstants;
    v584 = (float *)&g_vectorfConstants;
    v583 = (float *)&g_vectorfConstants;
    v582 = (float *)&g_vectorfConstants;
    v581 = (float *)&g_vectorfConstants;
    v580 = (float *)&g_vectorfConstants;
    v579 = (float *)&g_vectorfConstants;
    v578 = (float *)&g_vectorfConstants;
    v577 = (float *)&g_vectorfConstants;
    v576 = (float *)&g_vectorfConstants;
    v575 = (float *)&g_vectorfConstants;
    v574 = (float *)&g_vectorfConstants;
    LODWORD(v629) = v6;
    while ( 1 )
    {
      v8 = v7;
      result = LOBYTE(v628);
      v10 = (float)((float)0 * 65536.0) + (float)v7;
      *(float *)&v632 = (float)LOBYTE(v628) + (float)((float)0 * 65536.0);
      if ( (uint8_t)v631 <= 0x6Bu )
        break;
LABEL_200:
      __builtin_debugtrap();
      v60 = v626;
      v61 = LOBYTE(v628);
LABEL_30:
      LOBYTE(v628) = v61;
      LOBYTE(v626) = v60;
    }
    switch ( LODWORD(v629) )
    {
      case 0:
        return result;
      case 1:
      case 2:
      case 3:
      case 4:
        v29 = v632;
        v30 = (float)((float)0 * 65536.0) + (float)(uint8_t)v626;
        v31 = *((float *)&g_vectorfConstants + 4 * (1 << v631) + 8);
        v32 = (float)(*(float *)(v5 + 4) - *(float *)&v632) * v31;
        v33 = (float)(*(float *)(v5 + 8) - *(float *)&v632) * v31;
        v34 = (float)(*(float *)(v5 + 12) - *(float *)&v632) * v31;
        *(float *)v5 = (float)(*(float *)v5 - *(float *)&v632) * v31;
        *(float *)(v5 + 4) = v32;
        v35 = *(float *)(v5 + 20);
        v36 = *(float *)(v5 + 16) - v10;
        *(float *)(v5 + 8) = v33;
        v37 = *(float *)(v5 + 24);
        *(float *)(v5 + 12) = v34;
        v38 = *(float *)(v5 + 28) - v10;
        *(float *)(v5 + 16) = v36 * v31;
        v39 = *(float *)(v5 + 32);
        *(float *)(v5 + 20) = (float)(v35 - v10) * v31;
        v40 = *(float *)(v5 + 36);
        *(float *)(v5 + 24) = (float)(v37 - v10) * v31;
        v41 = *(float *)(v5 + 40);
        *(float *)(v5 + 28) = v38 * v31;
        v42 = *(float *)(v5 + 44) - v30;
        *(float *)(v5 + 32) = (float)(v39 - v30) * v31;
        *(float *)(v5 + 36) = (float)(v40 - v30) * v31;
        *(float *)(v5 + 40) = (float)(v41 - v30) * v31;
        v43 = *(float *)(v5 + 52);
        *(float *)(v5 + 44) = v42 * v31;
        v44 = (float)(*(float *)(v5 + 56) - *(float *)&v29) * v31;
        v45 = (float)(*(float *)(v5 + 60) - *(float *)&v29) * v31;
        *(float *)(v5 + 48) = (float)(*(float *)(v5 + 48) - *(float *)&v29) * v31;
        v46 = v625;
        *(float *)(v5 + 52) = (float)(v43 - *(float *)&v29) * v31;
        v47 = v629;
        *(float *)(v5 + 56) = v44;
        *(float *)(v5 + 60) = v45;
        v48 = (float)(*(float *)(v5 + 72) - v10) * v31;
        v49 = (float)(*(float *)(v5 + 76) - v10) * v31;
        v50 = (float)(*(float *)(v5 + 64) - v10) * v31;
        *(float *)(v5 + 68) = (float)(*(float *)(v5 + 68) - v10) * v31;
        *(float *)(v5 + 72) = v48;
        *(float *)(v5 + 76) = v49;
        *(float *)(v5 + 64) = v50;
        v51 = *(float *)(v5 + 80);
        v52 = (float)(*(float *)(v5 + 88) - v30) * v31;
        v53 = (float)(*(float *)(v5 + 92) - v30) * v31;
        *(float *)(v5 + 84) = (float)(*(float *)(v5 + 84) - v30) * v31;
        *(float *)(v5 + 88) = v52;
        *(float *)(v5 + 92) = v53;
        *(float *)(v5 + 80) = (float)(v51 - v30) * v31;
        v54 = v10 + v46[1];
        v55 = *v46;
        v56 = (float)(v46[3] + 0.0) * v31;
        v637 = (float)(v30 + v46[2]) * v31;
        v57 = v46[8] * v31;
        v636 = v54 * v31;
        v638 = v56;
        v639 = *((uint32_t *)v46 + 4) + LODWORD(v47);
        v640 = v57;
        v58 = v46[9] * v31;
        v635 = (float)(v55 + *(float *)&v29) * v31;
        v641 = v58;
        v630 += 4;
        v59 = (uint8_t *)v630;
        v642 = v46[10] * v31;
        v643 = v31 * v46[11];
        v645 = *((uint32_t *)v46 + 13);
        v644 = *((uint32_t *)v46 + 12);
        v625 = &v635;
        goto LABEL_29;
      case 5:
        v630 += LOBYTE(v628) + 2;
        v59 = (uint8_t *)v630;
        goto LABEL_29;
      case 6:
        v630 += v7 + (LOBYTE(v628) << 8) + 3;
        v59 = (uint8_t *)v630;
        goto LABEL_29;
      case 7:
        v630 += (uint8_t)v626 + (v7 << 8) + (LOBYTE(v628) << 16) + 4;
        v59 = (uint8_t *)v630;
        goto LABEL_29;
      case 8:
        v630 += (v7 << 16) + ((uint8_t)v626 << 8) + *(uint8_t *)(v630 + 4) + (LOBYTE(v628) << 24) + 5;
        v59 = (uint8_t *)v630;
        goto LABEL_29;
      case 9:
        v62 = v644;
        if ( v625 != &v635 )
        {
          v635 = *v625;
          v636 = v625[1];
          v637 = v625[2];
          v638 = v625[3];
          v639 = *((uint32_t *)v625 + 4);
          v640 = v625[8];
          v641 = v625[9];
          v642 = v625[10];
          v643 = v625[11];
          v62 = *((uint32_t *)v625 + 12);
          v645 = *((uint32_t *)v625 + 13);
        }
        v630 += 2;
        v644 = v62 + LOBYTE(v628);
        v625 = &v635;
        v59 = (uint8_t *)v630;
        goto LABEL_29;
      case 0xA:
        v63 = v644;
        if ( v625 != &v635 )
        {
          v635 = *v625;
          v636 = v625[1];
          v637 = v625[2];
          v638 = v625[3];
          v639 = *((uint32_t *)v625 + 4);
          v640 = v625[8];
          v641 = v625[9];
          v642 = v625[10];
          v643 = v625[11];
          v63 = *((uint32_t *)v625 + 12);
          v645 = *((uint32_t *)v625 + 13);
        }
        v630 += 3;
        v644 = v63 + (LOBYTE(v628) << 8) + v7;
        v625 = &v635;
        v59 = (uint8_t *)v630;
        goto LABEL_29;
      case 0xB:
        v64 = *(uint8_t *)(v630 + 4) + (v7 << 16) + (LOBYTE(v628) << 24) + ((uint8_t)v626 << 8);
        if ( v625 != &v635 )
        {
          v635 = *v625;
          v636 = v625[1];
          v637 = v625[2];
          v638 = v625[3];
          v639 = *((uint32_t *)v625 + 4);
          v640 = v625[8];
          v641 = v625[9];
          v642 = v625[10];
          v643 = v625[11];
          v645 = *((uint32_t *)v625 + 13);
        }
        v630 += 5;
        v644 = v64;
        v625 = &v635;
        v59 = (uint8_t *)v630;
        goto LABEL_29;
      case 0xC:
        v616 = v7 | (LOBYTE(v628) << 8);
        v630 = v616 << 9;
        v630 = *(uint32_t *)(*(uint32_t *)(v627 + 16) + 32) + (v616 << 9);
        v59 = (uint8_t *)v630;
        goto LABEL_29;
      case 0xD:
        v630 += 5;
        v59 = (uint8_t *)v630;
        goto LABEL_29;
      case 0xE:
      case 0xF:
      case 0x1D:
      case 0x1E:
      case 0x1F:
      case 0x2C:
      case 0x2D:
      case 0x2E:
      case 0x2F:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
      case 0x5B:
      case 0x5C:
      case 0x5D:
      case 0x5E:
      case 0x5F:
        goto LABEL_200;
      case 0x10:
      case 0x11:
      case 0x12:
        v65 = v629;
        v617 = LODWORD(v629) - 16;
        v66 = (float *)(16 * (LODWORD(v629) - 16) + v5);
        v629 = *v66;
        v67 = v66[1];
        v68 = v66[2];
        v69 = v66[3];
        v70 = (float *)(16 * (LODWORD(v65) - 13) + v5);
        v628 = *v70;
        v71 = v70[1];
        v72 = v70[2];
        v73 = v70[3];
        goto LABEL_47;
      case 0x13:
        v81 = v574[8];
        v82 = v574[53];
        v617 = 999;
        v83 = *(float *)(v5 + 64) + *(float *)(v5 + 80);
        v84 = (float)(*(float *)&v632 + *(float *)&v632) - (float)(v82 * v81);
        v85 = *(float *)(v5 + 24);
        v86 = *(float *)(v5 + 68);
        v10 = (float)(v10 + v10) - (float)(v81 * v574[54]);
        v87 = *(float *)(v5 + 72);
        v88 = *(float *)(v5 + 20);
        v89 = *(float *)(v5 + 76);
        *(float *)&v632 = v84;
        v90 = *(float *)(v5 + 16) + *(float *)(v5 + 32);
        v67 = v88 + *(float *)(v5 + 36);
        v68 = v85 + *(float *)(v5 + 40);
        v628 = v83;
        v71 = v86 + *(float *)(v5 + 84);
        v629 = v90;
        v69 = *(float *)(v5 + 28) + *(float *)(v5 + 44);
        v72 = v87 + *(float *)(v5 + 88);
        v73 = v89 + *(float *)(v5 + 92);
        goto LABEL_47;
      case 0x14:
        v91 = v575[12];
        v92 = v575[53];
        v617 = 999;
        v93 = *(float *)(v5 + 64) - *(float *)(v5 + 80);
        v94 = (float)(*(float *)&v632 + *(float *)&v632) - (float)(v92 * v91);
        v95 = *(float *)(v5 + 24);
        v96 = *(float *)(v5 + 68);
        v10 = (float)(v10 + v10) - (float)(v91 * v575[54]);
        v97 = *(float *)(v5 + 72);
        v98 = *(float *)(v5 + 20);
        v99 = *(float *)(v5 + 76);
        *(float *)&v632 = v94;
        v100 = *(float *)(v5 + 16) - *(float *)(v5 + 32);
        v67 = v98 - *(float *)(v5 + 36);
        v68 = v95 - *(float *)(v5 + 40);
        v628 = v93;
        v71 = v96 - *(float *)(v5 + 84);
        v629 = v100;
        v69 = *(float *)(v5 + 28) - *(float *)(v5 + 44);
        v72 = v97 - *(float *)(v5 + 88);
        v73 = v99 - *(float *)(v5 + 92);
        goto LABEL_47;
      case 0x15:
        v101 = v576[8];
        v102 = v576[53];
        v617 = 999;
        v103 = *(float *)(v5 + 48) + *(float *)(v5 + 80);
        v104 = (float)(*(float *)&v632 + *(float *)&v632) - (float)(v102 * v101);
        v105 = *(float *)(v5 + 8);
        v106 = *(float *)(v5 + 52);
        v10 = (float)(v10 + v10) - (float)(v101 * v576[54]);
        v107 = *(float *)(v5 + 56);
        v108 = *(float *)(v5 + 4);
        v109 = *(float *)(v5 + 60);
        *(float *)&v632 = v104;
        v110 = *(float *)v5 + *(float *)(v5 + 32);
        v67 = v108 + *(float *)(v5 + 36);
        v68 = v105 + *(float *)(v5 + 40);
        v628 = v103;
        v71 = v106 + *(float *)(v5 + 84);
        v629 = v110;
        v69 = *(float *)(v5 + 12) + *(float *)(v5 + 44);
        v72 = v107 + *(float *)(v5 + 88);
        v73 = v109 + *(float *)(v5 + 92);
        goto LABEL_47;
      case 0x16:
        v111 = v577[12];
        v112 = v577[53];
        v617 = 999;
        v113 = (float)(*(float *)&v632 + *(float *)&v632) - (float)(v112 * v111);
        v114 = v111 * v577[54];
        v115 = *(float *)(v5 + 48) - *(float *)(v5 + 80);
        v116 = *(float *)(v5 + 52);
        v629 = *(float *)v5 - *(float *)(v5 + 32);
        v10 = (float)(v10 + v10) - v114;
        v117 = *(float *)(v5 + 8);
        *(float *)&v632 = v113;
        v118 = *(float *)(v5 + 56);
        v119 = *(float *)(v5 + 60);
        v67 = *(float *)(v5 + 4) - *(float *)(v5 + 36);
        v68 = v117 - *(float *)(v5 + 40);
        v69 = *(float *)(v5 + 12) - *(float *)(v5 + 44);
        v628 = v115;
        v71 = v116 - *(float *)(v5 + 84);
        v72 = v118 - *(float *)(v5 + 88);
        v73 = v119 - *(float *)(v5 + 92);
        goto LABEL_47;
      case 0x17:
        v120 = v578[8];
        v121 = v578[53];
        v617 = 999;
        v122 = *(float *)(v5 + 48) + *(float *)(v5 + 64);
        v123 = (float)(*(float *)&v632 + *(float *)&v632) - (float)(v121 * v120);
        v124 = *(float *)(v5 + 8);
        v125 = *(float *)(v5 + 52);
        v10 = (float)(v10 + v10) - (float)(v120 * v578[54]);
        v126 = *(float *)(v5 + 56);
        v127 = *(float *)(v5 + 4);
        v128 = *(float *)(v5 + 60);
        *(float *)&v632 = v123;
        v129 = *(float *)v5 + *(float *)(v5 + 16);
        v67 = v127 + *(float *)(v5 + 20);
        v68 = v124 + *(float *)(v5 + 24);
        v628 = v122;
        v71 = v125 + *(float *)(v5 + 68);
        v629 = v129;
        v69 = *(float *)(v5 + 12) + *(float *)(v5 + 28);
        v72 = v126 + *(float *)(v5 + 72);
        v73 = v128 + *(float *)(v5 + 76);
        goto LABEL_47;
      case 0x18:
        v130 = v579[12];
        v131 = v579[53];
        v617 = 999;
        v132 = (float)(*(float *)&v632 + *(float *)&v632) - (float)(v131 * v130);
        v133 = v130 * v579[54];
        v134 = *(float *)(v5 + 48) - *(float *)(v5 + 64);
        v135 = *(float *)(v5 + 52);
        v629 = *(float *)v5 - *(float *)(v5 + 16);
        v10 = (float)(v10 + v10) - v133;
        v136 = *(float *)(v5 + 8);
        *(float *)&v632 = v132;
        v137 = *(float *)(v5 + 56);
        v138 = *(float *)(v5 + 60);
        v67 = *(float *)(v5 + 4) - *(float *)(v5 + 20);
        v68 = v136 - *(float *)(v5 + 24);
        v69 = *(float *)(v5 + 12) - *(float *)(v5 + 28);
        v628 = v134;
        v71 = v135 - *(float *)(v5 + 68);
        v72 = v137 - *(float *)(v5 + 72);
        v73 = v138 - *(float *)(v5 + 76);
        goto LABEL_47;
      case 0x19:
        v139 = v580[53];
        v140 = *(float *)(v5 + 60) + *(float *)(v5 + 76);
        v141 = *(float *)(v5 + 8) + *(float *)(v5 + 24);
        v629 = (float)(*(float *)v5 + *(float *)(v5 + 16)) + *(float *)(v5 + 32);
        v142 = *(float *)(v5 + 48) + *(float *)(v5 + 64);
        v68 = v141 + *(float *)(v5 + 40);
        v143 = v580[8];
        v144 = (float)((float)(*(float *)&v632 + *(float *)&v632) + *(float *)&v632) - (float)(v139 * v143);
        v10 = (float)((float)(v10 + v10) + v10) - (float)(v143 * v580[54]);
        v145 = *(float *)(v5 + 4) + *(float *)(v5 + 20);
        v146 = *(float *)(v5 + 52) + *(float *)(v5 + 68);
        *(float *)&v632 = v144;
        v147 = v145 + *(float *)(v5 + 36);
        v148 = v142;
        v69 = (float)(*(float *)(v5 + 12) + *(float *)(v5 + 28)) + *(float *)(v5 + 44);
        v149 = *(float *)(v5 + 56) + *(float *)(v5 + 72);
        goto LABEL_66;
      case 0x1A:
        v151 = v581[53];
        v152 = *(float *)(v5 + 60) + *(float *)(v5 + 76);
        v153 = *(float *)(v5 + 8) + *(float *)(v5 + 24);
        v629 = (float)(*(float *)v5 + *(float *)(v5 + 16)) - *(float *)(v5 + 32);
        v154 = *(float *)(v5 + 48) + *(float *)(v5 + 64);
        v68 = v153 - *(float *)(v5 + 40);
        v155 = v581[12];
        v156 = (float)((float)(*(float *)&v632 + *(float *)&v632) + *(float *)&v632) - (float)(v151 * v155);
        v10 = (float)((float)(v10 + v10) + v10) - (float)(v155 * v581[54]);
        v157 = *(float *)(v5 + 4) + *(float *)(v5 + 20);
        v158 = *(float *)(v5 + 52) + *(float *)(v5 + 68);
        *(float *)&v632 = v156;
        v159 = v157 - *(float *)(v5 + 36);
        v160 = v154;
        v69 = (float)(*(float *)(v5 + 12) + *(float *)(v5 + 28)) - *(float *)(v5 + 44);
        v161 = *(float *)(v5 + 56) + *(float *)(v5 + 72);
        goto LABEL_68;
      case 0x1B:
        v163 = v582[53];
        v140 = *(float *)(v5 + 60) - *(float *)(v5 + 76);
        v164 = *(float *)(v5 + 8) - *(float *)(v5 + 24);
        v629 = (float)(*(float *)v5 - *(float *)(v5 + 16)) + *(float *)(v5 + 32);
        v165 = *(float *)(v5 + 48) - *(float *)(v5 + 64);
        v68 = v164 + *(float *)(v5 + 40);
        v166 = v582[12];
        v167 = (float)((float)(*(float *)&v632 + *(float *)&v632) + *(float *)&v632) - (float)(v163 * v166);
        v10 = (float)((float)(v10 + v10) + v10) - (float)(v166 * v582[54]);
        v168 = *(float *)(v5 + 4) - *(float *)(v5 + 20);
        v146 = *(float *)(v5 + 52) - *(float *)(v5 + 68);
        *(float *)&v632 = v167;
        v147 = v168 + *(float *)(v5 + 36);
        v148 = v165;
        v69 = (float)(*(float *)(v5 + 12) - *(float *)(v5 + 28)) + *(float *)(v5 + 44);
        v149 = *(float *)(v5 + 56) - *(float *)(v5 + 72);
LABEL_66:
        v150 = v148 + *(float *)(v5 + 80);
        v71 = v146 + *(float *)(v5 + 84);
        v72 = v149 + *(float *)(v5 + 88);
        v73 = v140 + *(float *)(v5 + 92);
        v617 = 999;
        v628 = v150;
        v67 = v147;
        goto LABEL_47;
      case 0x1C:
        v169 = v583[53];
        v152 = *(float *)(v5 + 60) - *(float *)(v5 + 76);
        v170 = *(float *)(v5 + 8) - *(float *)(v5 + 24);
        v629 = (float)(*(float *)v5 - *(float *)(v5 + 16)) - *(float *)(v5 + 32);
        v171 = *(float *)(v5 + 48) - *(float *)(v5 + 64);
        v68 = v170 - *(float *)(v5 + 40);
        v172 = v583[16];
        v173 = (float)((float)(*(float *)&v632 + *(float *)&v632) + *(float *)&v632) - (float)(v169 * v172);
        v10 = (float)((float)(v10 + v10) + v10) - (float)(v172 * v583[54]);
        v174 = *(float *)(v5 + 4) - *(float *)(v5 + 20);
        v158 = *(float *)(v5 + 52) - *(float *)(v5 + 68);
        *(float *)&v632 = v173;
        v159 = v174 - *(float *)(v5 + 36);
        v160 = v171;
        v69 = (float)(*(float *)(v5 + 12) - *(float *)(v5 + 28)) - *(float *)(v5 + 44);
        v161 = *(float *)(v5 + 56) - *(float *)(v5 + 72);
LABEL_68:
        v162 = v160 - *(float *)(v5 + 80);
        v71 = v158 - *(float *)(v5 + 84);
        v72 = v161 - *(float *)(v5 + 88);
        v73 = v152 - *(float *)(v5 + 92);
        v617 = 999;
        v628 = v162;
        v67 = v159;
LABEL_47:
        v618 = 0.0;
        v74 = *(float *)&v632;
        v619 = (uint8_t)v626;
        LODWORD(v622) = v630 + 4;
        goto LABEL_48;
      case 0x20:
      case 0x21:
      case 0x22:
        v619 = v7;
        v618 = 0.0;
        v617 = LODWORD(v629) - 32;
        v175 = (float *)(16 * (LODWORD(v629) - 32) + v5);
        v176 = *v175;
        v67 = v175[1];
        v68 = v175[2];
        v69 = v175[3];
        v177 = v629;
        v629 = v176;
        v178 = (float *)(16 * (LODWORD(v177) - 29) + v5);
        v71 = v178[1];
        v72 = v178[2];
        v73 = v178[3];
        v628 = *v178;
        LODWORD(v622) = v630 + 3;
        v10 = *(float *)&v632;
        v74 = *(float *)&v632 + v584[12];
        *(float *)&v632 = v74;
        goto LABEL_48;
      case 0x23:
      case 0x24:
      case 0x25:
        v179 = v629;
        v617 = LODWORD(v629) - 35;
        v180 = (float *)(16 * (LODWORD(v629) - 35) + v5);
        v629 = *v180;
        v67 = v180[1];
        v68 = v180[2];
        v69 = v180[3];
        v181 = (float *)(16 * (LODWORD(v179) - 32) + v5);
        v182 = *v181;
        v71 = v181[1];
        v72 = v181[2];
        v73 = v181[3];
        v183 = *(uint8_t *)(v630 + 4);
        v628 = v182;
        v184 = *(uint8_t *)(v630 + 6);
        LODWORD(v618) = ((uint8_t)v626 << 8) + v183;
        v74 = *(float *)&v632;
        v619 = v184 + (*(uint8_t *)(v630 + 5) << 8);
        LODWORD(v622) = v630 + 7;
LABEL_48:
        v75 = 4 * (v10 > v72);
        if ( v10 > v73 )
          v75 = 4 * (v10 > v72) + 8;
        v76 = 4 * (v10 > v68);
        if ( v10 > v69 )
          v76 = 4 * (v10 > v68) + 8;
        v77 = (v76 | (v10 > v629) | (2 * (v10 > v67))) & *(uint32_t *)(v5 + 96) & (v75 | (v10 > v628) | (2 * (v10 > v71)));
        v631 = *(int *)(v5 + 96);
        v626 = v67 > v74;
        v626 *= 2;
        v78 = 4 * (v68 > v74);
        if ( v69 > v74 )
          v78 = 4 * (v68 > v74) + 8;
        LODWORD(v624) = v71 > v74;
        LODWORD(v624) *= 2;
        v79 = 4 * (v72 > v74);
        if ( v73 > v74 )
          v79 = 4 * (v72 > v74) + 8;
        v630 = ~(uint8_t)v631 & 0xF;
        if ( (v77 | v630) == 0xF )
        {
          v630 = LODWORD(v618) + LODWORD(v622);
          v59 = (uint8_t *)(LODWORD(v618) + LODWORD(v622));
          goto LABEL_29;
        }
        v80 = (v79 | LODWORD(v624) | (v628 > *(float *)&v632)) & v631 & (v78 | v626 | (v629 > *(float *)&v632));
        if ( (v80 | v630) == 0xF )
        {
          v630 = v619 + LODWORD(v622);
          v59 = (uint8_t *)(v619 + LODWORD(v622));
LABEL_29:
          v7 = v59[2];
          LOBYTE(v631) = *v59;
          v60 = v59[3];
          v61 = v59[1];
          LODWORD(v629) = (uint8_t)v631;
          goto LABEL_30;
        }
        v352 = *(float *)v5;
        v623 = v71;
        v646 = v352;
        v647 = *(float *)(v5 + 4);
        v648 = *(int *)(v5 + 8);
        v649 = *(float *)(v5 + 12);
        v650 = *(float *)(v5 + 16);
        v353 = *(float *)(v5 + 20);
        v621 = v629 - *(float *)&v632;
        v651 = v353;
        v354 = *(float *)(v5 + 24);
        v355 = ~v77;
        *(float *)&v630 = v67 - *(float *)&v632;
        v614 = v67 - v10;
        *(float *)&v626 = v68 - *(float *)&v632;
        v613 = v68 - v10;
        v624 = v69 - *(float *)&v632;
        v612 = v69 - v10;
        v611 = v628 - v10;
        v615 = v629 - v10;
        v623 = v71 - *(float *)&v632;
        v610 = v71 - v10;
        v609 = v72 - v10;
        *(float *)&v608 = v73 - v10;
        v652 = v354;
        v356 = *(float *)(v5 + 84);
        v653 = *(float *)(v5 + 28);
        v654 = *(float *)(v5 + 32);
        v655 = *(float *)(v5 + 36);
        v656 = *(float *)(v5 + 40);
        v657 = *(float *)(v5 + 44);
        v658 = *(float *)(v5 + 48);
        v659 = *(float *)(v5 + 52);
        v660 = *(float *)(v5 + 56);
        v661 = *(float *)(v5 + 60);
        v662 = *(float *)(v5 + 64);
        v663 = *(float *)(v5 + 68);
        v664 = *(float *)(v5 + 72);
        v665 = *(float *)(v5 + 76);
        v666 = *(float *)(v5 + 80);
        v629 = *(float *)(v5 + 88);
        v668 = v629;
        v357 = *(float *)(v5 + 92);
        v667 = v356;
        v669 = v357;
        v671 = *(float *)v5;
        v672 = *(float *)(v5 + 4);
        v673 = *(float *)(v5 + 8);
        v674 = *(int *)(v5 + 12);
        v675 = *(float *)(v5 + 16);
        v676 = *(float *)(v5 + 20);
        v677 = *(float *)(v5 + 24);
        v678 = *(float *)(v5 + 28);
        v679 = *(float *)(v5 + 32);
        v680 = *(float *)(v5 + 36);
        v681 = *(float *)(v5 + 40);
        v682 = *(float *)(v5 + 44);
        v683 = *(float *)(v5 + 48);
        v684 = *(float *)(v5 + 52);
        v685 = *(float *)(v5 + 56);
        v686 = *(float *)(v5 + 60);
        v687 = *(float *)(v5 + 64);
        v688 = *(float *)(v5 + 68);
        v689 = *(float *)(v5 + 72);
        v690 = *(float *)(v5 + 76);
        v691 = *(float *)(v5 + 80);
        v693 = v629;
        v358 = *(float *)(v5 + 92);
        v692 = v356;
        v694 = v358;
        v359 = v631 & 0xF;
        v591 = ~v80;
        v620 = v628 - *(float *)&v632;
        v695 = v355 & v359;
        v670 = v359 & ~v80;
        v360 = (float)(v621 * (float)(v628 - *(float *)&v632)) < 0.0;
        v629 = v72 - *(float *)&v632;
        LODWORD(v589) = v355 & 0xF;
        v628 = v73 - *(float *)&v632;
        v361 = (float)(v69 - *(float *)&v632) * (float)(v73 - *(float *)&v632);
g4_m128_raw(v362) = (unsigned int)v630;
        v607 = 2 * ((float)((float)(v71 - *(float *)&v632) * *(float *)&v630) < 0.0);
        v607 |= v360;
        LOBYTE(v360) = (float)((float)(v68 - *(float *)&v632) * (float)(v72 - *(float *)&v632)) < 0.0;
g4_m128_raw(v365) = LODWORD(v621);
        v363 = 4 * v360 + 8;
        v364 = 4 * v360;
        *(float *)g4_m128_ptr<int32_t>(v365) = v621 - v620;
        if ( v361 < 0.0 )
          v364 = v363;
        v607 |= v364;
        *(float *)g4_m128_ptr<int32_t>(v362) = *(float *)&v630 - v623;
        v366 = _mm_cvtsi128_si32(v365);
        v367 = (2130706432 - v366) & ((v366 ^ (v366 + 2139095040)) >> 31);
        v368 = _mm_cvtsi128_si32(v362);
g4_m128_raw(v369) = (unsigned int)v626;
        v370 = 2130706432 - v368;
        *(float *)g4_m128_ptr<int32_t>(v369) = *(float *)&v626 - v629;
g4_m128_raw(v371) = LODWORD(v624);
        *(float *)g4_m128_ptr<int32_t>(v371) = v624 - v628;
        v372 = (float)(2.0
                     - (float)(*(float *)g4_m128_ptr<int32_t>(v365)
                             * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v365) * *(float *)&v367))
                                     * *(float *)&v367)))
             * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v365) * *(float *)&v367)) * *(float *)&v367);
        v373 = v368 ^ (v368 + 2139095040);
        v374 = _mm_cvtsi128_si32(v369);
        v375 = v370 & (v373 >> 31);
        v376 = 2130706432 - v374;
        v377 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v365) * v372)) * v372;
        v378 = (float)(2.0
                     - (float)((float)(*(float *)&v630 - v623)
                             * (float)((float)(2.0 - (float)((float)(*(float *)&v630 - v623) * *(float *)&v375))
                                     * *(float *)&v375)))
             * (float)((float)(2.0 - (float)((float)(*(float *)&v630 - v623) * *(float *)&v375)) * *(float *)&v375);
        v379 = v374 ^ (v374 + 2139095040);
        v380 = _mm_cvtsi128_si32(v371);
        v381 = (float)(2.0 - (float)((float)(*(float *)&v630 - v623) * v378)) * v378;
        v382 = (float)(2.0
                     - (float)((float)(*(float *)&v626 - v629)
                             * (float)((float)(2.0
                                             - (float)((float)(*(float *)&v626 - v629)
                                                     * COERCE_FLOAT(v376 & (v379 >> 31))))
                                     * COERCE_FLOAT(v376 & (v379 >> 31)))))
             * (float)((float)(2.0 - (float)((float)(*(float *)&v626 - v629) * COERCE_FLOAT(v376 & (v379 >> 31))))
                     * COERCE_FLOAT(v376 & (v379 >> 31)));
g4_m128_lane<int32_t>(v369, 0) = (2130706432 - v380) & ((v380 ^ (v380 + 2139095040)) >> 31);
        v383 = (float)(2.0 - (float)((float)(*(float *)&v626 - v629) * v382)) * v382;
        *(float *)g4_m128_ptr<int32_t>(v369) = (float)(2.0
                                         - (float)((float)(v624 - v628)
                                                 * (float)((float)(2.0
                                                                 - (float)((float)(v624 - v628)
                                                                         * *(float *)g4_m128_ptr<int32_t>(v369)))
                                                         * *(float *)g4_m128_ptr<int32_t>(v369))))
                                 * (float)((float)(2.0 - (float)((float)(v624 - v628) * *(float *)g4_m128_ptr<int32_t>(v369)))
                                         * *(float *)g4_m128_ptr<int32_t>(v369));
        v598 = v621 * v377;
        v384 = (float)(2.0 - (float)((float)(v624 - v628) * *(float *)g4_m128_ptr<int32_t>(v369))) * *(float *)g4_m128_ptr<int32_t>(v369);
        v606 = *(float *)&v630 * v381;
        *(float *)&v605 = *(float *)&v626 * v383;
        *(float *)&v604 = v624 * v384;
        v603 = -(float)(v377 * v620);
        v602 = -(float)(v381 * v623);
        v601 = -(float)(v383 * v629);
        v595 = v648;
        LODWORD(v592) = v620 > v621;
        *(float *)&v594 = v658;
        v600 = -(float)(v384 * v628);
        v385 = 4 * (v629 > *(float *)&v626);
        if ( v628 > v624 )
          v385 = 4 * (v629 > *(float *)&v626) + 8;
        *(float *)&v596 = v649;
        v386 = v385 | LOBYTE(v592) | (2 * (v623 > *(float *)&v630));
        *(float *)&v597 = v646;
        v387 = v607 & ~v386;
        v388 = v607 & v386;
        v593 = v659;
        v389 = (float)(v603 * v646) + (float)((float)(v621 * v377) * v658);
        v607 = v387 & 1;
        v390 = (float)(v602 * v647) + (float)(v606 * v659);
        v590 = v660;
        v391 = (float)(v601 * *(float *)&v595) + (float)(*(float *)&v605 * v660);
        v392 = (float)(v600 * v649) + (float)(*(float *)&v604 * v661);
        v393 = v389;
        if ( (v387 & 1) == 0 )
          v393 = *(float *)&v597;
        v646 = v393;
        v394 = v387 & 2;
        v395 = (float)(v602 * v647) + (float)(v606 * v659);
        if ( (v387 & 2) == 0 )
          v395 = v647;
        v396 = (float)(v601 * *(float *)&v595) + (float)(*(float *)&v605 * v660);
        v647 = v395;
        v597 = v387 & 4;
        if ( (v387 & 4) == 0 )
          v396 = *(float *)&v595;
        v397 = v387 & 8;
        v398 = (float)(v600 * v649) + (float)(*(float *)&v604 * v661);
        *(float *)&v648 = v396;
        if ( v397 == 0 )
          v398 = *(float *)&v596;
        v649 = v398;
        v596 = v388 & 1;
        if ( (v388 & 1) == 0 )
          v389 = *(float *)&v594;
        v658 = v389;
        v595 = v388 & 2;
        if ( (v388 & 2) == 0 )
          v390 = v593;
        v659 = v390;
        v594 = v388 & 4;
        if ( (v388 & 4) == 0 )
          v391 = v590;
        v660 = v391;
        v399 = v388 & 8;
        if ( v399 == 0 )
          v392 = v661;
        v588 = v652;
        v593 = v653;
        v661 = v392;
        v590 = v650;
        v400 = (float)(v603 * v650) + (float)(v598 * v662);
        v587 = v662;
        v586 = v663;
        v401 = (float)(v602 * v651) + (float)(v606 * v663);
        v585 = v664;
        v402 = (float)(v601 * v652) + (float)(*(float *)&v605 * v664);
        v403 = (float)(v600 * v653) + (float)(*(float *)&v604 * v665);
        v404 = v400;
        if ( *(float *)&v607 == 0.0 )
          v404 = v590;
        v650 = v404;
        v405 = (float)(v602 * v651) + (float)(v606 * v663);
        if ( v394 == 0 )
          v405 = v651;
        v406 = (float)(v601 * v652) + (float)(*(float *)&v605 * v664);
        v651 = v405;
        if ( *(float *)&v597 == 0.0 )
          v406 = v588;
        v407 = (float)(v600 * v653) + (float)(*(float *)&v604 * v665);
        v652 = v406;
        if ( v397 == 0 )
          v407 = v593;
        v653 = v407;
        if ( *(float *)&v596 == 0.0 )
          v400 = v587;
        v662 = v400;
        if ( *(float *)&v595 == 0.0 )
          v401 = v586;
        v663 = v401;
        if ( *(float *)&v594 == 0.0 )
          v402 = v585;
        v664 = v402;
        if ( v399 == 0 )
          v403 = v665;
        v665 = v403;
        v590 = v666;
        v408 = (float)(v598 * v666) + (float)(v603 * v654);
        v603 = v667;
        v593 = v655;
        v409 = v657;
        v410 = v656;
        v598 = v408;
g4_m128_raw(v411) = LODWORD(v602);
        *(float *)g4_m128_ptr<int32_t>(v411) = (float)(v602 * v655) + (float)(v606 * v667);
        v606 = v668;
        v412 = (float)(v601 * v656) + (float)(*(float *)&v605 * v668);
        *(float *)&v605 = v669;
        v413 = (float)(*(float *)&v604 * v669) + (float)(v600 * v657);
        v414 = v654;
        if ( *(float *)&v607 != 0.0 )
          v414 = v598;
        *(float *)&v415 = v593;
        v654 = v414;
        if ( v394 != 0 )
          *(float *)&v415 = COERCE_FLOAT(_mm_cvtsi128_si32(v411));
        v655 = *(float *)&v415;
        if ( *(float *)&v597 != 0.0 )
          v410 = v412;
        v656 = v410;
        if ( v397 != 0 )
          v409 = (float)(*(float *)&v604 * v669) + (float)(v600 * v657);
        v657 = v409;
        v416 = v590;
        if ( *(float *)&v596 != 0.0 )
          v416 = v598;
        v666 = v416;
        v417 = v603;
        if ( *(float *)&v595 != 0.0 )
          v417 = *(float *)g4_m128_ptr<int32_t>(v411);
        v667 = v417;
        v418 = v606;
        if ( *(float *)&v594 != 0.0 )
          v418 = v412;
        v668 = v418;
        v419 = *(float *)&v605;
        if ( v399 != 0 )
          v419 = v413;
g4_m128_raw(v425) = LODWORD(v615);
g4_m128_raw(v420) = LODWORD(v613);
g4_m128_raw(v421) = LODWORD(v612);
        v669 = v419;
        v607 = 2 * ((float)(v614 * v610) < 0.0);
        v607 |= (float)(v611 * v615) < 0.0;
        v422 = (float)(v609 * v613) < 0.0;
        v423 = 4 * v422 + 8;
        v424 = 4 * v422;
        *(float *)g4_m128_ptr<int32_t>(v425) = v615 - v611;
        if ( (float)(*(float *)&v608 * v612) < 0.0 )
          v424 = v423;
        v607 |= v424;
g4_m128_raw(v426) = LODWORD(v614);
        *(float *)g4_m128_ptr<int32_t>(v426) = v614 - v610;
        v427 = _mm_cvtsi128_si32(v425);
        v428 = (2130706432 - v427) & ((v427 ^ (v427 + 2139095040)) >> 31);
        v429 = _mm_cvtsi128_si32(v426);
        v430 = 2130706432 - v429;
        *(float *)g4_m128_ptr<int32_t>(v420) = v613 - v609;
        *(float *)g4_m128_ptr<int32_t>(v421) = v612 - *(float *)&v608;
        v431 = (float)(2.0
                     - (float)(*(float *)g4_m128_ptr<int32_t>(v425)
                             * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v425) * *(float *)&v428))
                                     * *(float *)&v428)))
             * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v425) * *(float *)&v428)) * *(float *)&v428);
        v432 = v429 ^ (v429 + 2139095040);
        v433 = _mm_cvtsi128_si32(v420);
        v434 = v430 & (v432 >> 31);
        v435 = 2130706432 - v433;
        v436 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v425) * v431)) * v431;
        v437 = (float)(2.0
                     - (float)((float)(v614 - v610)
                             * (float)((float)(2.0 - (float)((float)(v614 - v610) * *(float *)&v434)) * *(float *)&v434)))
             * (float)((float)(2.0 - (float)((float)(v614 - v610) * *(float *)&v434)) * *(float *)&v434);
        v438 = v433 ^ (v433 + 2139095040);
        v439 = _mm_cvtsi128_si32(v421);
        v440 = (float)(2.0 - (float)((float)(v614 - v610) * v437)) * v437;
        *(float *)g4_m128_ptr<int32_t>(v426) = (float)(2.0
                                         - (float)((float)(v613 - v609)
                                                 * (float)((float)(2.0
                                                                 - (float)((float)(v613 - v609)
                                                                         * COERCE_FLOAT(v435 & (v438 >> 31))))
                                                         * COERCE_FLOAT(v435 & (v438 >> 31)))))
                                 * (float)((float)(2.0
                                                 - (float)((float)(v613 - v609) * COERCE_FLOAT(v435 & (v438 >> 31))))
                                         * COERCE_FLOAT(v435 & (v438 >> 31)));
        v441 = (2130706432 - v439) & ((v439 ^ (v439 + 2139095040)) >> 31);
        v442 = (float)(2.0 - (float)((float)(v613 - v609) * *(float *)g4_m128_ptr<int32_t>(v426))) * *(float *)g4_m128_ptr<int32_t>(v426);
        v443 = (float)(2.0
                     - (float)((float)(v612 - *(float *)&v608)
                             * (float)((float)(2.0 - (float)((float)(v612 - *(float *)&v608) * *(float *)&v441))
                                     * *(float *)&v441)))
             * (float)((float)(2.0 - (float)((float)(v612 - *(float *)&v608) * *(float *)&v441)) * *(float *)&v441);
        v615 = v615 * v436;
        *(float *)g4_m128_ptr<int32_t>(v426) = (float)(2.0 - (float)((float)(v612 - *(float *)&v608) * v443)) * v443;
        v614 = v614 * v440;
        v444 = -(float)(v436 * v611);
        v613 = v613 * v442;
        v445 = -(float)(v440 * v610);
        v446 = -(float)(v442 * v609);
        v612 = v612 * *(float *)g4_m128_ptr<int32_t>(v426);
        v609 = -(float)(*(float *)g4_m128_ptr<int32_t>(v426) * *(float *)&v608);
        v608 = v674;
        v447 = 4 * (*(float *)&v626 > v629);
        if ( v624 > v628 )
          v447 = 4 * (*(float *)&v626 > v629) + 8;
        v448 = v607;
        *(float *)&v607 = v673;
        v449 = v447 | (v621 > v620) | (2 * (*(float *)&v630 > v623));
        v450 = v448 & ~v449;
        v606 = v444;
        v451 = v448 & v449;
        v611 = v445;
        v610 = v446;
        v620 = v671;
        *(float *)&v605 = v683;
        LODWORD(v621) = v450 & 1;
        v452 = (float)(v444 * v671) + (float)(v615 * v683);
        *(float *)&v604 = v684;
        v453 = (float)(v445 * v672) + (float)(v614 * v684);
        v603 = v685;
        v454 = (float)(v446 * v673) + (float)(v613 * v685);
        v455 = (float)(v609 * *(float *)&v608) + (float)(v612 * v686);
        v456 = v452;
        if ( (v450 & 1) == 0 )
          v456 = v620;
        v671 = v456;
        v457 = v450 & 2;
        v458 = v453;
        if ( (v450 & 2) == 0 )
          v458 = v672;
        v459 = v454;
        v672 = v458;
        LODWORD(v620) = v450 & 4;
        if ( (v450 & 4) == 0 )
          v459 = *(float *)&v607;
        v460 = v450 & 8;
        v461 = (float)(v609 * *(float *)&v608) + (float)(v612 * v686);
        v673 = v459;
        if ( v460 == 0 )
          v461 = *(float *)&v608;
        *(float *)&v674 = v461;
        v608 = v451 & 1;
        if ( (v451 & 1) == 0 )
          v452 = *(float *)&v605;
        v683 = v452;
        v607 = v451 & 2;
        if ( (v451 & 2) == 0 )
          v453 = *(float *)&v604;
        v684 = v453;
        v605 = v451 & 4;
        if ( (v451 & 4) == 0 )
          v454 = v603;
        v685 = v454;
        v462 = v451 & 8;
        if ( v462 == 0 )
          v455 = v686;
        *(float *)&v604 = v678;
        v686 = v455;
        v603 = v675;
        v463 = (float)(v606 * v675) + (float)(v615 * v687);
        v601 = v687;
        v600 = v688;
        v464 = (float)(v611 * v676) + (float)(v614 * v688);
        v602 = v677;
        v598 = v689;
        v465 = (float)(v610 * v677) + (float)(v613 * v689);
        v466 = (float)(v609 * v678) + (float)(v612 * v690);
        v467 = v463;
        if ( v621 == 0.0 )
          v467 = v603;
        v675 = v467;
        v468 = (float)(v611 * v676) + (float)(v614 * v688);
        if ( v457 == 0 )
          v468 = v676;
        v469 = (float)(v610 * v677) + (float)(v613 * v689);
        v676 = v468;
        if ( v620 == 0.0 )
          v469 = v602;
        v470 = (float)(v609 * v678) + (float)(v612 * v690);
        v677 = v469;
        if ( v460 == 0 )
          v470 = *(float *)&v604;
        v678 = v470;
        if ( *(float *)&v608 == 0.0 )
          v463 = v601;
        v687 = v463;
        if ( *(float *)&v607 == 0.0 )
          v464 = v600;
        v688 = v464;
        if ( *(float *)&v605 == 0.0 )
          v465 = v598;
        v689 = v465;
        if ( v462 == 0 )
          v466 = v690;
        v690 = v466;
        v603 = v691;
        v471 = (float)(v615 * v691) + (float)(v606 * v679);
        v615 = v692;
        *(float *)&v604 = v680;
        v472 = v682;
        v473 = v681;
        v606 = v471;
g4_m128_raw(v474) = LODWORD(v611);
        *(float *)g4_m128_ptr<int32_t>(v474) = (float)(v611 * v680) + (float)(v614 * v692);
        v614 = v693;
        v475 = (float)(v610 * v681) + (float)(v613 * v693);
        v613 = v694;
        v476 = (float)(v612 * v694) + (float)(v609 * v682);
        v477 = v679;
        if ( v621 != 0.0 )
          v477 = v606;
        v478 = v604;
        v679 = v477;
        if ( v457 != 0 )
          *(float *)&v478 = COERCE_FLOAT(_mm_cvtsi128_si32(v474));
        v680 = *(float *)&v478;
        if ( v620 != 0.0 )
          v473 = v475;
        v681 = v473;
        if ( v460 != 0 )
          v472 = (float)(v612 * v694) + (float)(v609 * v682);
        v682 = v472;
        v479 = v603;
        if ( *(float *)&v608 != 0.0 )
          v479 = v606;
        v691 = v479;
        v480 = v615;
        if ( *(float *)&v607 != 0.0 )
          v480 = *(float *)g4_m128_ptr<int32_t>(v474);
        v692 = v480;
        v481 = v614;
        if ( *(float *)&v605 != 0.0 )
          v481 = v475;
        v693 = v481;
        v482 = v613;
        if ( v462 != 0 )
          v482 = v476;
        v615 = v599[13];
        v620 = v599[14];
        v621 = v599[15];
        v694 = v482;
        v483 = v599[12];
        v484 = 4 * (v629 > *(float *)&v626);
        v485 = 0.0;
        if ( v628 > v624 )
          v484 = 4 * (v629 > *(float *)&v626) + 8;
        v486 = v631 & (v484 | LOBYTE(v592) | (2 * (v623 > *(float *)&v630)));
        if ( (v631 & 1) != 0 )
          v485 = v599[12];
        v487 = 0.0;
        if ( (v631 & 2) != 0 )
          v487 = v615;
        v488 = 0.0;
        if ( (v631 & 4) != 0 )
          v488 = v620;
        v614 = 0.0;
        if ( (v631 & 8) != 0 )
          v614 = v621;
        v489 = 0.0;
        if ( (v486 & 1) != 0 )
          v489 = v483;
        v490 = 0.0;
        if ( (v486 & 2) != 0 )
          v490 = v615;
        v491 = 0.0;
        if ( (v486 & 4) != 0 )
          v491 = v620;
        v492 = 0.0;
        if ( (v486 & 8) != 0 )
          v492 = v621;
        if ( (float)((float)((float)((float)(v490 + v489) + v491) + v492)
                   + (float)((float)((float)(v490 + v489) + v491) + v492)) < (float)((float)((float)(v487 + v485) + v488)
                                                                                   + v614) )
        {
          v494 = &v646;
          v495 = &v671;
        }
        else
        {
          v493 = *(float *)&v619;
          *(float *)&v619 = v618;
          v618 = v493;
          v494 = &v671;
          v495 = &v646;
        }
        *(float *)&v607 = v10;
        hkpMoppRayBundleVirtualMachine::queryRayOnTree(v627, v625, LODWORD(v622) + v619, (int)(uintptr_t)(v495), v616);
        v496 = v599[12];
        v497 = *(float *)(v627 + 176);
        v614 = v497;
        v613 = v496 - v497;
        v612 = *(float *)(v627 + 180);
        v611 = v615 - v612;
        v610 = *(float *)(v627 + 184);
        v498 = *(float *)(v627 + 188);
        v609 = v620 - v610;
        *(float *)&v631 = v498;
        *(float *)&v608 = v621 - v498;
        v499 = 4 * (v620 > v610);
        if ( v621 > v498 )
          v499 = 4 * (v620 > v610) + 8;
        v500 = v499 | (v496 > v497) | (2 * (v615 > v612));
        v605 = *(int *)(v627 + 124);
        LODWORD(v615) = v500 & v591;
        v501 = *(float *)(v627 + 64);
        LODWORD(v615) = LODWORD(v589) & v500 & v591;
        v502 = *(float *)(v627 + 112);
        v503 = *(float *)(v627 + 116);
        v504 = *(float *)(v627 + 120);
        v619 = *(int *)(v627 + 68);
        v505 = v625[8];
        v506 = *v625;
        v606 = *(float *)(v627 + 72);
        v507 = *(float **)(v627 + 16);
        v604 = *(int *)(v627 + 76);
        LODWORD(v621) = v500 & 1;
        v508 = v507[4];
        v509 = *(float *)&v607;
        if ( (v500 & 1) != 0 )
          v510 = (float)((float)((float)((float)(v502 * v613) + (float)(v501 * v614)) - v508) * v505) - v506;
        else
          v510 = v494[12];
        v494[12] = v510;
        LODWORD(v620) = v500 & 2;
        if ( (v500 & 2) != 0 )
          v511 = (float)((float)((float)((float)(v503 * v611) + (float)(*(float *)&v619 * v612)) - v508) * v505) - v506;
        else
          v511 = v494[13];
        v494[13] = v511;
        v619 = v500 & 4;
        if ( (v500 & 4) != 0 )
        {
          v512 = v500 & 8;
          v494[14] = (float)((float)((float)((float)(v504 * v609) + (float)(v606 * v610)) - v508) * v505) - v506;
          if ( v512 == 0 )
          {
LABEL_333:
            v513 = v494[15];
            goto LABEL_334;
          }
        }
        else
        {
          v512 = v500 & 8;
          v494[14] = v494[14];
          if ( v512 == 0 )
            goto LABEL_333;
        }
        v513 = (float)((float)((float)((float)(*(float *)&v605 * *(float *)&v608)
                                     + (float)(*(float *)&v604 * *(float *)&v631))
                             - v508)
                     * v505)
             - v506;
LABEL_334:
        v494[15] = v513;
        v605 = *(int *)(v627 + 140);
        v514 = *(float *)(v627 + 128);
        v515 = *(float *)(v627 + 80);
        v607 = *(int *)(v627 + 84);
        v516 = *(float *)(v627 + 132);
        v517 = *(float *)(v627 + 136);
        v606 = *(float *)(v627 + 88);
        v518 = v625[9];
        v519 = v625[1];
        v604 = *(int *)(v627 + 92);
        v520 = v507[5];
        if ( v621 == 0.0 )
          v521 = v494[16];
        else
          v521 = (float)((float)((float)((float)(v514 * v613) + (float)(v515 * v614)) - v520) * v518) - v519;
        v494[16] = v521;
        if ( v620 == 0.0 )
          v522 = v494[17];
        else
          v522 = (float)((float)((float)((float)(v516 * v611) + (float)(*(float *)&v607 * v612)) - v520) * v518) - v519;
        v494[17] = v522;
        if ( *(float *)&v619 == 0.0 )
        {
          v494[18] = v494[18];
          if ( v512 == 0 )
            goto LABEL_340;
        }
        else
        {
          v494[18] = (float)((float)((float)((float)(v517 * v609) + (float)(v606 * v610)) - v520) * v518) - v519;
          if ( v512 == 0 )
          {
LABEL_340:
            v523 = v494[19];
            goto LABEL_341;
          }
        }
        v523 = (float)((float)((float)((float)(*(float *)&v605 * *(float *)&v608)
                                     + (float)(*(float *)&v604 * *(float *)&v631))
                             - v520)
                     * v518)
             - v519;
LABEL_341:
        v494[19] = v523;
        v524 = v507[6];
        v525 = *(int *)(v627 + 104);
        v607 = *(int *)(v627 + 152);
        v526 = v625[10];
        v527 = v625[2];
        v604 = *(int *)(v627 + 156);
        v528 = *(float *)(v627 + 96);
        v605 = v525;
        v529 = *(float *)(v627 + 108);
        v606 = v528;
        v530 = *(float *)(v627 + 144);
        v531 = *(float *)(v627 + 148);
        v532 = *(float *)(v627 + 100);
        v603 = v529;
        if ( v621 == 0.0 )
          v533 = v494[20];
        else
          v533 = (float)((float)((float)((float)(v530 * v613) + (float)(v614 * v606)) - v524) * v526) - v527;
        v494[20] = v533;
        if ( v620 == 0.0 )
          v534 = v494[21];
        else
          v534 = (float)((float)((float)((float)(v531 * v611) + (float)(v532 * v612)) - v524) * v526) - v527;
        v494[21] = v534;
        result = v619;
        if ( *(float *)&v619 == 0.0 )
        {
          v494[22] = v494[22];
          if ( v512 == 0 )
            goto LABEL_347;
        }
        else
        {
          v494[22] = (float)((float)((float)((float)(v609 * *(float *)&v607) + (float)(v610 * *(float *)&v605)) - v524)
                           * v526)
                   - v527;
          if ( v512 == 0 )
          {
LABEL_347:
            v535 = v494[23];
LABEL_348:
            v494[23] = v535;
            if ( v617 <= 2 )
            {
              v630 = 2 * (v623 > *(float *)&v630);
              v630 |= LODWORD(v592);
              v537 = 4 * (v629 > *(float *)&v626);
              if ( v628 > v624 )
                v537 = 4 * (v629 > *(float *)&v626) + 8;
              v630 |= v537;
              v538 = &v494[4 * v617 + 12];
              v539 = *v538;
              v540 = v538[1];
              v541 = v538[2];
              v542 = v538[3];
              v631 = 2 * (v509 > v540);
              v631 |= v509 > v539;
              v543 = 4 * (v509 > v541);
              if ( v509 > v542 )
                v543 = 4 * (v509 > v541) + 8;
              v631 |= v543;
              v544 = 4 * (v541 > *(float *)&v632);
              if ( v542 > *(float *)&v632 )
                v544 = 4 * (v541 > *(float *)&v632) + 8;
              v545 = *((uint32_t *)v494 + 24);
              v546 = v544 | (v539 > *(float *)&v632) | (2 * (v540 > *(float *)&v632));
              v631 &= v546;
              result = ~(LODWORD(v615) & (v631 | v630 & ~v546));
              v536 = (uint8_t)result & v545 & 0xF;
              *((uint32_t *)v494 + 24) = v536;
            }
            else
            {
              v536 = *((uint32_t *)v494 + 24);
            }
            if ( v536 == 0 )
              return result;
            v630 = LODWORD(v618) + LODWORD(v622);
            *(float *)v5 = *v494;
            *(float *)(v5 + 4) = v494[1];
            *(float *)(v5 + 8) = v494[2];
            *(float *)(v5 + 12) = v494[3];
            *(float *)(v5 + 16) = v494[4];
            *(float *)(v5 + 20) = v494[5];
            *(float *)(v5 + 24) = v494[6];
            *(float *)(v5 + 28) = v494[7];
            *(float *)(v5 + 32) = v494[8];
            *(float *)(v5 + 36) = v494[9];
            *(float *)(v5 + 40) = v494[10];
            *(float *)(v5 + 44) = v494[11];
            *(float *)(v5 + 48) = v494[12];
            *(float *)(v5 + 52) = v494[13];
            *(float *)(v5 + 56) = v494[14];
            *(float *)(v5 + 60) = v494[15];
            *(float *)(v5 + 64) = v494[16];
            *(float *)(v5 + 68) = v494[17];
            *(float *)(v5 + 72) = v494[18];
            *(float *)(v5 + 76) = v494[19];
            *(float *)(v5 + 80) = v494[20];
            *(float *)(v5 + 84) = v494[21];
            *(float *)(v5 + 88) = v494[22];
            *(float *)(v5 + 92) = v494[23];
            *(float *)(v5 + 96) = v494[24];
            v59 = (uint8_t *)v630;
            goto LABEL_29;
          }
        }
        v535 = (float)((float)((float)((float)(*(float *)&v608 * *(float *)&v604) + (float)(*(float *)&v631 * v603))
                             - v524)
                     * v526)
             - v527;
        goto LABEL_348;
      case 0x26:
      case 0x27:
      case 0x28:
        v185 = LODWORD(v629) - 38;
        v630 += 3;
        v621 = *(float *)&v632;
        v615 = *(float *)&v632;
        v589 = *(float *)&v632;
        *(float *)&v617 = v10;
        v618 = v10;
        *(float *)&v619 = v10;
        goto LABEL_74;
      case 0x29:
      case 0x2A:
      case 0x2B:
        v185 = LODWORD(v629) - 41;
        v334 = (float)((uint8_t)v626 + (v8 << 8) + (LOBYTE(v628) << 16));
        v335 = *(float *)(v627 + 32);
        v336 = *(float *)(v627 + 44);
        v337 = *(float *)(v627 + 36);
        v338 = *(float *)(v627 + 40);
        v339 = v334 * v335;
        v340 = *(uint8_t *)(v630 + 6);
        v341 = (*(uint8_t *)(v630 + 4) << 16) + (*(uint8_t *)(v630 + 5) << 8);
        v615 = v334 * v337;
        v342 = v334 * v336;
        v343 = (float)(v340 + v341);
        v621 = (float)((uint8_t)v626 + (v8 << 8) + (LOBYTE(v628) << 16)) * v338;
        v344 = v337 * v343;
        v345 = v338 * v343;
        v346 = v335 * v343;
        v631 = *((int *)v625 + 8);
        v347 = v343 * v336;
        v348 = v625[10];
        v629 = v625[9];
        v628 = v348;
        v349 = v625[11];
        v350 = v625[v185];
        v10 = (float)(v347 * v349) - v350;
        v589 = (float)(v339 * *(float *)&v631) - v350;
        v615 = (float)(v615 * v629) - v350;
        v621 = (float)(v621 * v628) - v350;
        *(float *)&v632 = (float)(v342 * v349) - v350;
        *(float *)&v619 = (float)(*(float *)&v631 * v346) - v350;
        v618 = (float)(v629 * v344) - v350;
        v630 += 7;
        *(float *)&v617 = (float)(v628 * v345) - v350;
LABEL_74:
        v186 = 16 * v185 + v5;
        v187 = (float *)(16 * (v185 + 3) + v5);
        v188 = *(float *)(v186 + 4);
        v189 = *v187;
        v631 = *(int *)v186;
        v190 = v188;
        v191 = *(float *)(v186 + 12);
        v570 = v188;
g4_m128_raw(v192) = *(unsigned int *)(v186 + 8);
        v193 = v187[1];
        v629 = v189;
        v194 = v187[2];
        v195 = v187[3];
        v624 = v193;
        LODWORD(v623) = 2 * (v193 > v190);
        LODWORD(v623) |= v189 > *(float *)&v631;
        v196 = v190;
        v197 = 4 * (v194 > *(float *)g4_m128_ptr<int32_t>(v192));
        v571 = *(float *)g4_m128_ptr<int32_t>(v192);
        if ( v195 > v191 )
          v197 = 4 * (v194 > *(float *)g4_m128_ptr<int32_t>(v192)) + 8;
        v622 = v191;
        LODWORD(v623) |= v197;
        LODWORD(v628) = v190 < v624 ? 0 : 2;
        LODWORD(v628) |= *(float *)&v631 >= v189;
        v198 = *(float *)g4_m128_ptr<int32_t>(v192) >= v194 ? 4 : 0;
        if ( v191 >= v195 )
          v198 = *(float *)g4_m128_ptr<int32_t>(v192) < v194 ? 8 : 12;
        LODWORD(v628) |= v198;
        LOBYTE(v620) = v589 > v189;
        *(float *)&v626 = v194;
        v199 = (v615 > v624) + (v615 > v624) + 4;
        if ( v621 <= v194 )
          v199 = 2 * (v615 > v624);
        v200 = 8 * (*(float *)&v632 > v195);
        v588 = v195;
        v201 = (uint8_t)(LOBYTE(v620) | (*(float *)&v631 > *(float *)&v619)) | v199;
        if ( v190 > v618 )
          v200 = 8 * (*(float *)&v632 > v195) + 2;
        v202 = 4 * (*(float *)g4_m128_ptr<int32_t>(v192) > *(float *)&v617) + 8;
        if ( v622 <= v10 )
          v202 = 4 * (*(float *)g4_m128_ptr<int32_t>(v192) > *(float *)&v617);
        v203 = v190;
        v204 = v200 | v202 | v201;
        v205 = v192;
        v206 = 2 * (v615 > v196);
        if ( v621 > *(float *)g4_m128_ptr<int32_t>(v192) )
          v206 = 2 * (v615 > v196) + 4;
        v207 = v629;
        v620 = *(float *)&v206;
        v208 = 8 * (*(float *)&v632 > v622);
        LOBYTE(v614) = v629 > *(float *)&v619;
        LODWORD(v620) |= v629 > *(float *)&v619 || v589 > *(float *)&v631;
        if ( v624 > v618 )
          v208 = 8 * (*(float *)&v632 > v622) + 2;
        v209 = 4 * (*(float *)&v626 > *(float *)&v617) + 8;
        if ( v195 <= v10 )
          v209 = 4 * (*(float *)&v626 > *(float *)&v617);
        LODWORD(v620) |= v208 | v209;
        result = ~(LODWORD(v620) & v204 | LODWORD(v623) & ~LODWORD(v620));
        v210 = (uint8_t)result & *(uint8_t *)(v5 + 96) & 0xF;
        *(uint32_t *)(v5 + 96) = v210;
        if ( v210 == 0 )
          return result;
        v602 = *(float *)(v5 + 4);
        v572 = *(float *)(v5 + 16);
        v598 = *(float *)(v5 + 20);
        v600 = *(float *)(v5 + 24);
        v612 = *(float *)(v5 + 28);
        v586 = *(float *)(v5 + 32);
        v596 = *(int *)(v5 + 36);
        v597 = *(int *)(v5 + 40);
        v610 = *(float *)(v5 + 44);
        v211 = *(float *)(v5 + 8);
        v212 = *(int *)(v5 + 52);
        v611 = *(float *)(v5 + 48);
        v213 = *(int *)(v5 + 56);
        v214 = *(float *)v5;
        v613 = v211;
        v594 = v212;
        v215 = *(float *)(v5 + 12);
        v216 = *(int *)(v5 + 60);
        v595 = v213;
        v217 = *(float *)(v5 + 64);
        v601 = v215;
        v608 = v216;
        v557 = v214;
        v609 = v217;
        v218 = v207 - *(float *)&v619;
        v592 = *(float *)(v5 + 68);
        v593 = *(float *)(v5 + 72);
        *(float *)&v619 = *(float *)&v631 - *(float *)&v619;
        v219 = v624 - v618;
        v606 = *(float *)(v5 + 76);
        v607 = *(int *)(v5 + 80);
        v590 = *(float *)(v5 + 84);
        v591 = *(int *)(v5 + 88);
        v220 = *(int *)(v5 + 92);
        v618 = v203 - v618;
        v620 = v219;
        v605 = v220;
g4_m128_raw(v221) = LODWORD(v622);
        *(float *)g4_m128_ptr<int32_t>(v221) = v622 - v10;
        *(float *)g4_m128_ptr<int32_t>(v205) = *(float *)g4_m128_ptr<int32_t>(v205) - *(float *)&v617;
        v222 = v588 - v10;
        v587 = v218;
        v223 = v205;
        *(float *)&v617 = *(float *)&v626 - *(float *)&v617;
        v224 = v221;
        v614 = v222;
g4_m128_raw(v225) = LODWORD(v618);
        *(float *)g4_m128_ptr<int32_t>(v225) = v618 - v620;
        v603 = *(float *)g4_m128_ptr<int32_t>(v205) * *(float *)&v617;
        v604 = 2 * ((float)(v618 * v620) < 0.0);
        v604 |= (float)(v218 * *(float *)&v619) < 0.0;
        v226 = 4 * ((float)(*(float *)g4_m128_ptr<int32_t>(v205) * *(float *)&v617) < 0.0) + 8;
        v227 = 4 * ((float)(*(float *)g4_m128_ptr<int32_t>(v205) * *(float *)&v617) < 0.0);
g4_m128_raw(v228) = (unsigned int)v619;
        if ( (float)(*(float *)g4_m128_ptr<int32_t>(v221) * v222) < 0.0 )
          v227 = v226;
        *(float *)g4_m128_ptr<int32_t>(v228) = *(float *)&v619 - v587;
        v604 |= v227;
        v603 = *(float *)g4_m128_ptr<int32_t>(v223);
        *(float *)g4_m128_ptr<int32_t>(v223) = *(float *)g4_m128_ptr<int32_t>(v223) - *(float *)&v617;
        v229 = _mm_cvtsi128_si32(v228);
        v230 = 2130706432 - v229;
        v231 = (v229 ^ (v229 + 2139095040)) >> 31;
        v232 = _mm_cvtsi128_si32(v225);
        v573 =g4_m128_lane<int32_t>(v221, 0);
        *(float *)g4_m128_ptr<int32_t>(v224) = *(float *)g4_m128_ptr<int32_t>(v221) - v614;
        v233 = (float)(2.0
                     - (float)(*(float *)g4_m128_ptr<int32_t>(v228)
                             * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v228) * COERCE_FLOAT(v230 & v231)))
                                     * COERCE_FLOAT(v230 & v231))))
             * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v228) * COERCE_FLOAT(v230 & v231)))
                     * COERCE_FLOAT(v230 & v231));
        v234 = (2130706432 - v232) & ((v232 ^ (v232 + 2139095040)) >> 31);
        v235 = _mm_cvtsi128_si32(v223);
        v236 = *(float *)&v234;
        v237 = (v235 ^ (v235 + 2139095040)) >> 31;
        v238 = (float)(2.0 - (float)((float)(*(float *)&v619 - v587) * v233)) * v233;
        v239 = (float)(2.0
                     - (float)(*(float *)g4_m128_ptr<int32_t>(v225)
                             * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v225) * v236)) * v236)))
             * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v225) * v236)) * v236);
        v240 = 2130706432 - v235;
        v241 = _mm_cvtsi128_si32(v224);
        v242 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v225) * v239)) * v239;
        v243 = v240 & v237;
        v244 = *(float *)g4_m128_ptr<int32_t>(v223) * COERCE_FLOAT(v240 & v237);
        v245 = (2130706432 - v241) & ((v241 ^ (v241 + 2139095040)) >> 31);
        v246 = (float)(2.0
                     - (float)(*(float *)g4_m128_ptr<int32_t>(v223)
                             * (float)((float)(2.0
                                             - (float)(*(float *)g4_m128_ptr<int32_t>(v223)
                                                     * (float)((float)(2.0 - v244) * *(float *)&v243)))
                                     * (float)((float)(2.0 - v244) * *(float *)&v243))))
             * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v223) * (float)((float)(2.0 - v244) * *(float *)&v243)))
                     * (float)((float)(2.0 - v244) * *(float *)&v243));
        v247 = (float)(2.0
                     - (float)(*(float *)g4_m128_ptr<int32_t>(v224)
                             * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v224) * *(float *)&v245))
                                     * *(float *)&v245)))
             * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v224) * *(float *)&v245)) * *(float *)&v245);
        *(float *)&v619 = *(float *)&v619 * v238;
        v248 = -(float)(v238 * v587);
        v249 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v224) * v247)) * v247;
        v585 = v603 * v246;
        v618 = v618 * v242;
        v250 = -(float)(v242 * v620);
        v603 = *(float *)&v573 * v249;
        v620 = -(float)(v246 * *(float *)&v617);
        *(float *)g4_m128_ptr<int32_t>(v223) = -(float)(v614 * v249);
        v251 = v604 & LOBYTE(v623);
        v252 = v604 & LOBYTE(v628);
        v569 = v214;
        LODWORD(v614) = (uint8_t)v604 & LOBYTE(v628) & 1;
        *(float *)&v617 = (float)(*(float *)&v608 * (float)(*(float *)&v573 * v249))
                        + (float)(v601 * *(float *)g4_m128_ptr<int32_t>(v223));
        if ( ((uint8_t)v604 & LOBYTE(v628) & 1) != 0 )
          v569 = (float)(v214 * v248) + (float)(v611 * *(float *)&v619);
        v568 = v602;
        v253 = v252 & 2;
        if ( (v252 & 2) != 0 )
          v568 = (float)(v602 * v250) + (float)(v618 * *(float *)&v594);
        v567 = v613;
        v604 = v252 & 4;
        if ( (v252 & 4) != 0 )
          v567 = (float)(v613 * v620) + (float)(v585 * *(float *)&v595);
        v254 = v252 & 8;
        v556 = v601;
        if ( v254 != 0 )
          v556 = *(float *)&v617;
        v566 = v611;
        LODWORD(v587) = v251 & 1;
        if ( (v251 & 1) != 0 )
          v566 = (float)(v214 * v248) + (float)(v611 * *(float *)&v619);
        v565 = *(float *)&v594;
        v573 = v251 & 2;
        if ( (v251 & 2) != 0 )
          v565 = (float)(v602 * v250) + (float)(v618 * *(float *)&v594);
        v564 = *(float *)&v595;
        v255 = v251 & 4;
        if ( (v251 & 4) != 0 )
          v564 = (float)(v613 * v620) + (float)(v585 * *(float *)&v595);
        v256 = v251 & 8;
        v555 = *(float *)&v608;
        if ( v256 != 0 )
          v555 = *(float *)&v617;
        v563 = v572;
        *(float *)&v617 = (float)(v606 * v603) + (float)(v612 * *(float *)g4_m128_ptr<int32_t>(v223));
        if ( v614 != 0.0 )
          v563 = (float)(v572 * v248) + (float)(v609 * *(float *)&v619);
        v562 = v598;
        if ( v253 != 0 )
          v562 = (float)(v598 * v250) + (float)(v618 * v592);
        v561 = v600;
        if ( *(float *)&v604 != 0.0 )
          v561 = (float)(v620 * v600) + (float)(v585 * v593);
        v554 = v612;
        if ( v254 != 0 )
          v554 = *(float *)&v617;
        v560 = v609;
        if ( v587 != 0.0 )
          v560 = (float)(v572 * v248) + (float)(v609 * *(float *)&v619);
        v559 = v592;
        if ( *(float *)&v573 != 0.0 )
          v559 = (float)(v598 * v250) + (float)(v618 * v592);
        v558 = v593;
        if ( v255 != 0 )
          v558 = (float)(v620 * v600) + (float)(v585 * v593);
        v553 = v606;
        if ( v256 != 0 )
          v553 = *(float *)&v617;
        v257 = (float)(v248 * v586) + (float)(*(float *)&v619 * *(float *)&v607);
        v258 = (float)(v250 * *(float *)&v596) + (float)(v618 * v590);
        v618 = v586;
        v259 = (float)(v620 * *(float *)&v597) + (float)(v585 * *(float *)&v591);
        v260 = (float)(*(float *)g4_m128_ptr<int32_t>(v223) * v610) + (float)(v603 * *(float *)&v605);
        if ( v614 != 0.0 )
          v618 = v257;
        v617 = v596;
        if ( v253 != 0 )
          *(float *)&v617 = v258;
        v614 = *(float *)&v597;
        if ( *(float *)&v604 != 0.0 )
          v614 = (float)(v620 * *(float *)&v597) + (float)(v585 * *(float *)&v591);
        v585 = v610;
        if ( v254 != 0 )
          v585 = (float)(*(float *)g4_m128_ptr<int32_t>(v223) * v610) + (float)(v603 * *(float *)&v605);
        v604 = v607;
        if ( v587 != 0.0 )
          *(float *)&v604 = v257;
        v603 = v590;
        if ( *(float *)&v573 != 0.0 )
          v603 = v258;
        v587 = *(float *)&v591;
        if ( v255 != 0 )
          v587 = v259;
        v573 = v605;
        if ( v256 != 0 )
          *(float *)&v573 = v260;
g4_m128_raw(v261) = (unsigned int)v631;
        *(float *)g4_m128_ptr<int32_t>(v261) = *(float *)&v631 - v589;
g4_m128_raw(v262) = LODWORD(v571);
        v620 = v570 - v615;
        *(float *)g4_m128_ptr<int32_t>(v262) = v571 - v621;
        v263 = v622 - *(float *)&v632;
        *(float *)&v631 = v624 - v615;
        v264 = v262;
        v615 = v571 - v621;
        v265 = v588 - *(float *)&v632;
        *(float *)&v632 = *(float *)&v626 - v621;
        v622 = v263;
        v266 = v265;
        v267 = (float)(v571 - v621) * (float)(*(float *)&v626 - v621);
        *(float *)g4_m128_ptr<int32_t>(v262) = v629 - v589;
        v268 = (float)(v629 - v589) * *(float *)g4_m128_ptr<int32_t>(v261);
        v629 = v266;
        v269 = v263 * v266;
        v270 = v268 < 0.0;
        v621 = *(float *)g4_m128_ptr<int32_t>(v262);
        v271 = v261;
        *(float *)g4_m128_ptr<int32_t>(v271) = *(float *)g4_m128_ptr<int32_t>(v261) - *(float *)g4_m128_ptr<int32_t>(v262);
g4_m128_raw(v272) = LODWORD(v620);
        v626 = 2 * ((float)(v620 * *(float *)&v631) < 0.0);
        v626 |= v270;
        *(float *)g4_m128_ptr<int32_t>(v272) = v620 - *(float *)&v631;
        v273 = v264;
        v274 = 4 * (v267 < 0.0) + 8;
        v275 = 4 * (v267 < 0.0);
g4_m128_raw(v276) = LODWORD(v622);
        if ( v269 < 0.0 )
          v275 = v274;
        *(float *)g4_m128_ptr<int32_t>(v276) = v622 - v629;
        v626 |= v275;
        v277 = _mm_cvtsi128_si32(v271);
        v278 = (2130706432 - v277) & ((v277 ^ (v277 + 2139095040)) >> 31);
        v279 = _mm_cvtsi128_si32(v272);
        v280 = 2130706432 - v279;
        *(float *)g4_m128_ptr<int32_t>(v273) = *(float *)g4_m128_ptr<int32_t>(v264) - *(float *)&v632;
        v281 = (float)(2.0
                     - (float)(*(float *)g4_m128_ptr<int32_t>(v271)
                             * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v271) * *(float *)&v278))
                                     * *(float *)&v278)))
             * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v271) * *(float *)&v278)) * *(float *)&v278);
        v282 = v279 ^ (v279 + 2139095040);
        v283 = _mm_cvtsi128_si32(v273);
        v284 = v280 & (v282 >> 31);
        v285 = 2130706432 - v283;
        v286 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v271) * v281)) * v281;
        v287 = (float)(2.0
                     - (float)(*(float *)g4_m128_ptr<int32_t>(v272)
                             * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v272) * *(float *)&v284))
                                     * *(float *)&v284)))
             * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v272) * *(float *)&v284)) * *(float *)&v284);
        v288 = v283 ^ (v283 + 2139095040);
        v289 = _mm_cvtsi128_si32(v276);
        v290 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v272) * v287)) * v287;
        v291 = (float)(2.0
                     - (float)(*(float *)g4_m128_ptr<int32_t>(v273)
                             * (float)((float)(2.0
                                             - (float)(*(float *)g4_m128_ptr<int32_t>(v273) * COERCE_FLOAT(v285 & (v288 >> 31))))
                                     * COERCE_FLOAT(v285 & (v288 >> 31)))))
             * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v273) * COERCE_FLOAT(v285 & (v288 >> 31))))
                     * COERCE_FLOAT(v285 & (v288 >> 31)));
        v292 = (float)(2.0 - (float)((float)(*(float *)g4_m128_ptr<int32_t>(v264) - *(float *)&v632) * v291)) * v291;
        v293 = (2130706432 - v289) & ((v289 ^ (v289 + 2139095040)) >> 31);
        v294 = (float)(2.0
                     - (float)((float)(v622 - v629)
                             * (float)((float)(2.0 - (float)((float)(v622 - v629) * *(float *)&v293)) * *(float *)&v293)))
             * (float)((float)(2.0 - (float)((float)(v622 - v629) * *(float *)&v293)) * *(float *)&v293);
        *(float *)&v619 = *(float *)g4_m128_ptr<int32_t>(v261) * v286;
        v295 = v626 & LOBYTE(v623);
        v296 = -(float)(v286 * v621);
        v297 = v615 * v292;
        v298 = (float)(2.0 - (float)((float)(v622 - v629) * v294)) * v294;
        v299 = -(float)(v292 * *(float *)&v632);
        v624 = v620 * v290;
        v622 = v622 * v298;
        v300 = -(float)(v290 * *(float *)&v631);
        v620 = v297;
        v301 = (float)(v557 * v296) + (float)(v611 * *(float *)&v619);
        *(float *)&v632 = -(float)(v298 * v629);
        v302 = v626 & LOBYTE(v628);
        v303 = (float)(v602 * v300) + (float)(*(float *)&v594 * v624);
        v631 = (uint8_t)v626 & LOBYTE(v623) & 1;
        v304 = (float)(v613 * v299) + (float)(*(float *)&v595 * v297);
        v305 = (float)(v601 * *(float *)&v632) + (float)(*(float *)&v608 * v622);
        v306 = v301;
        if ( ((uint8_t)v626 & LOBYTE(v623) & 1) == 0 )
          v306 = v569;
        *(float *)v5 = v306;
        v307 = v295 & 2;
        v308 = v303;
        if ( (v295 & 2) == 0 )
          v308 = v568;
        *(float *)(v5 + 4) = v308;
        v309 = v304;
        LODWORD(v629) = v295 & 4;
        if ( (v295 & 4) == 0 )
          v309 = v567;
        *(float *)(v5 + 8) = v309;
        v310 = v295 & 8;
        v311 = v305;
        if ( v310 == 0 )
          v311 = v556;
        *(float *)(v5 + 12) = v311;
        LODWORD(v628) = v302 & 1;
        if ( (v302 & 1) == 0 )
          v301 = v566;
        *(float *)(v5 + 48) = v301;
        v626 = v302 & 2;
        if ( (v302 & 2) == 0 )
          v303 = v565;
        *(float *)(v5 + 52) = v303;
        v312 = v302 & 4;
        if ( (v302 & 4) == 0 )
          v304 = v564;
        *(float *)(v5 + 56) = v304;
        v313 = v302 & 8;
        if ( v313 == 0 )
          v305 = v555;
        *(float *)(v5 + 60) = v305;
        v314 = (float)(v572 * v296) + (float)(v609 * *(float *)&v619);
        v315 = (float)(v598 * v300) + (float)(v592 * v624);
        v316 = (float)(v600 * v299) + (float)(v593 * v620);
        v317 = (float)(v612 * *(float *)&v632) + (float)(v606 * v622);
        v318 = v314;
        if ( *(float *)&v631 == 0.0 )
          v318 = v563;
        *(float *)(v5 + 16) = v318;
        v319 = v315;
        if ( v307 == 0 )
          v319 = v562;
        *(float *)(v5 + 20) = v319;
        v320 = v316;
        if ( v629 == 0.0 )
          v320 = v561;
        *(float *)(v5 + 24) = v320;
        v321 = v317;
        if ( v310 == 0 )
          v321 = v554;
        *(float *)(v5 + 28) = v321;
        if ( v628 == 0.0 )
          v314 = v560;
        *(float *)(v5 + 64) = v314;
        if ( *(float *)&v626 == 0.0 )
          v315 = v559;
        *(float *)(v5 + 68) = v315;
        if ( v312 == 0 )
          v316 = v558;
        *(float *)(v5 + 72) = v316;
        if ( v313 == 0 )
          v317 = v553;
        *(float *)(v5 + 76) = v317;
        v322 = (float)(v299 * *(float *)&v597) + (float)(v620 * *(float *)&v591);
        v323 = (float)(v296 * v586) + (float)(*(float *)&v607 * *(float *)&v619);
        v324 = (float)(v300 * *(float *)&v596) + (float)(v624 * v590);
        v325 = (float)(v610 * *(float *)&v632) + (float)(*(float *)&v605 * v622);
        v326 = v618;
        if ( *(float *)&v631 != 0.0 )
          v326 = v323;
        *(float *)(v5 + 32) = v326;
        v327 = *(float *)&v617;
        if ( v307 != 0 )
          v327 = v324;
        *(float *)(v5 + 36) = v327;
        v328 = v614;
        if ( v629 != 0.0 )
          v328 = v322;
        *(float *)(v5 + 40) = v328;
        v329 = v585;
        if ( v310 != 0 )
          v329 = v325;
        *(float *)(v5 + 44) = v329;
        v330 = *(float *)&v604;
        if ( v628 != 0.0 )
          v330 = v323;
        *(float *)(v5 + 80) = v330;
        v331 = v603;
        if ( *(float *)&v626 != 0.0 )
          v331 = v324;
        *(float *)(v5 + 84) = v331;
        v332 = v587;
        if ( v312 != 0 )
          v332 = v322;
        *(float *)(v5 + 88) = v332;
        v333 = *(float *)&v573;
        if ( v313 != 0 )
          v333 = v325;
        *(float *)(v5 + 92) = v333;
        v59 = (uint8_t *)v630;
        goto LABEL_29;
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3A:
      case 0x3B:
      case 0x3C:
      case 0x3D:
      case 0x3E:
      case 0x3F:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4A:
      case 0x4B:
      case 0x4C:
      case 0x4D:
      case 0x4E:
      case 0x4F:
        result = LODWORD(v629) - 48;
        goto LABEL_7;
      case 0x50:
        goto LABEL_7;
      case 0x51:
        goto LABEL_25;
      case 0x52:
        result = (LOBYTE(v628) << 16) + (v7 << 8) + (uint8_t)v626;
        goto LABEL_7;
      case 0x53:
        result = (uint8_t)v626;
        v8 = *(uint8_t *)(v630 + 4) + (LOBYTE(v628) << 24) + (v7 << 16);
LABEL_25:
        result = v8 + (result << 8);
LABEL_7:
        v11 = *(uint32_t *)(v627 + 48);
        v12 = *(uint32_t *)(v627 + 208) & (v616 << 8) | (*((uint32_t *)v625 + 12) + result);
        result = *(uint32_t *)(v11 + 104);
        if ( result != 0 )
        {
          v680 = 0.0;
          v681 = 0.0;
          v682 = 0.0;
          v679 = *(float *)(v11 + 96);
          *(float *)&v632 = COERCE_FLOAT(&v634);
          v13 = *(int (***)(char *))result;
          v551 = v12;
          v14 = *(uint32_t *)(v627 + 204);
          v548 = result;
          v550 = v14;
          v549 = &v671;
          result = (*v13)(&v634);
          if ( v634 != 0 )
          {
            *(float *)&v631 = COERCE_FLOAT(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
            v15 = *(hkLifoAllocator::Self **)v631;
            v16 = *(char **)(*(uint32_t *)v631 + 12);
            v17 = *(uint32_t *)(*(uint32_t *)v631 + 8) <= 511;
            v632 = v16;
            if ( v17 || (unsigned int)(uintptr_t)(v16 + 512) > *((uint32_t *)v15 + 4) )
            {
              *(float *)&v632 = COERCE_FLOAT(hkLifoAllocator::allocateFromNewSlab(v15, 512));
              v18 = (float *)v632;
            }
            else
            {
              *((uint32_t *)v15 + 3) = (uint32_t)(uintptr_t)(v16 + 512);
              v18 = (float *)v632;
            }
            v19 = *(int **)(v627 + 204);
            v20 = *v19;
            v549 = v18;
            v548 = v12;
            v21 = (*(int (**)(int *))(v20 + 24))(v19);
            v22 = v627;
            ++*(uint32_t *)(*(uint32_t *)(v627 + 192) + 64);
            ++*(uint32_t *)(*(uint32_t *)(v22 + 192) + 144);
            ++*(uint32_t *)(*(uint32_t *)(v22 + 192) + 224);
            ++*(uint32_t *)(*(uint32_t *)(v22 + 192) + 304);
            (*(void (**)(int *, int, uint32_t, uint32_t, int))(*(uint32_t *)v21 + 36))(
              &v633,
              v21,
              *(uint32_t *)(v627 + 48),
              *(uint32_t *)(v627 + 192),
              v5 + 96);
            v23 = (uint32_t *)v627;
            v24 = v633;
            --*(uint32_t *)(*(uint32_t *)(v627 + 192) + 64);
            if ( (v24 & 1) != 0 )
            {
              v25 = v23[48];
              v23[44] = *(uint32_t *)(v25 + 16);
              v23 = (uint32_t *)v627;
              *(uint32_t *)(v25 + 4 * *(uint32_t *)(v25 + 64) + 32) = v12;
            }
            --*(uint32_t *)(v23[48] + 144);
            if ( (v24 & 2) != 0 )
            {
              v26 = v23[48];
              v23[45] = *(uint32_t *)(v26 + 96);
              v23 = (uint32_t *)v627;
              *(uint32_t *)(v26 + 4 * *(uint32_t *)(v26 + 144) + 112) = v12;
            }
            --*(uint32_t *)(v23[48] + 224);
            if ( (v24 & 4) != 0 )
            {
              v27 = v23[48];
              v23[46] = *(uint32_t *)(v27 + 176);
              v23 = (uint32_t *)v627;
              *(uint32_t *)(v27 + 4 * *(uint32_t *)(v27 + 224) + 192) = v12;
            }
            --*(uint32_t *)(v23[48] + 304);
            if ( (v24 & 8) != 0 )
            {
              v28 = v23[48];
              v23[47] = *(uint32_t *)(v28 + 256);
              v23 = (uint32_t *)v627;
              *(uint32_t *)(v28 + 4 * *(uint32_t *)(v28 + 304) + 272) = v12;
            }
            v23[40] |= v24;
            result = *(uint32_t *)v631;
            if ( *(int *)(*(uint32_t *)v631 + 8) <= 511
              || *(void **)(result + 12) != (char *)v632 + 512
              || v632 == *(void **)(result + 20) )
            {
              return (int)(uintptr_t)(hkLifoAllocator::slowBlockFree((hkLifoAllocator::Self *)result, (char *)v632, 512));
            }
            else
            {
              *(float *)(result + 12) = *(float *)&v632;
            }
          }
        }
        return result;
      case 0x60:
      case 0x61:
      case 0x62:
      case 0x63:
        v630 += 2;
        *(&v552 + LODWORD(v629)) = LOBYTE(v628);
        goto LABEL_194;
      case 0x64:
      case 0x65:
      case 0x66:
      case 0x67:
        v630 += 3;
        *(&v548 + LODWORD(v629)) = v7 + (LOBYTE(v628) << 8);
        goto LABEL_194;
      case 0x68:
      case 0x69:
      case 0x6A:
      case 0x6B:
        v351 = v630;
        v630 += 5;
        v547[LODWORD(v629)] = *(uint8_t *)(v351 + 4)
                            + (v7 << 16)
                            + (LOBYTE(v628) << 24)
                            + ((uint8_t)v626 << 8);
LABEL_194:
        if ( v625 != &v635 )
        {
          v635 = *v625;
          v636 = v625[1];
          v637 = v625[2];
          v638 = v625[3];
          v639 = *((uint32_t *)v625 + 4);
          v640 = v625[8];
          v641 = v625[9];
          v642 = v625[10];
          v643 = v625[11];
          v644 = *((uint32_t *)v625 + 12);
        }
        v625 = &v635;
        v59 = (uint8_t *)v630;
        goto LABEL_29;
      default:
        abort();
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppRayBundleVirtualMachine::queryRayBundle  (binary VA: 0x17ff6c0)
// Original: hkpMoppRayBundleVirtualMachine::queryRayBundle
// ----------------------------------------------------------------------------
uint32_t * hkpMoppRayBundleVirtualMachine::queryRayBundle(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5, int a6, float *a7)
{
  __m128i v7;
  int v8;
  int v9; // xmm2_4
  float v10;
  __m128i v11;
  float v12; // xmm7_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm5_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22;
  float v23; // xmm5_4
  float v24; // xmm7_4
  float v25; // xmm4_4
  float v26; // xmm3_4
  float v27;
  float v28; // xmm1_4
  unsigned int v29;
  float v30; // xmm2_4
  float v31; // xmm5_4
  __m128i v32;
  float v33; // xmm4_4
  float v34;
  float v35; // xmm3_4
  float v36; // xmm5_4
  float v37; // xmm2_4
  float v38; // xmm5_4
  unsigned int v39;
  float v40; // xmm1_4
  __m128i v41;
  float v42; // xmm2_4
  float v43;
  float v44; // xmm5_4
  float v45; // xmm4_4
  float v46; // xmm3_4
  float v47; // xmm2_4
  float v48;
  typedef uint8_t *_g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54[16];
  typedef float _g4_t_v55[32];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v50)) > _g4_s0 ? (8u + sizeof(_g4_t_v50)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v51)) > _g4_s1 ? (12u + sizeof(_g4_t_v51)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v52)) > _g4_s2 ? (12u + sizeof(_g4_t_v52)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v53)) > _g4_s3 ? (12u + sizeof(_g4_t_v53)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v54)) > _g4_s4 ? (16u + sizeof(_g4_t_v54)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v55)) > _g4_s5 ? (80u + sizeof(_g4_t_v55)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 8u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 12u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 80u);

  *(uint32_t *)(a2 + 204) = a3;
  *(uint32_t *)(a2 + 192) = a6;
  *(uint32_t *)(a2 + 176) = 1065353216;
  *(uint32_t *)(a2 + 180) = 1065353216;
  *(uint32_t *)(a2 + 184) = 1065353216;
  *(uint32_t *)(a2 + 188) = 1065353216;
  *(uint32_t *)(a2 + 112) = *a5;
  *(uint32_t *)(a2 + 116) = a5[1];
  *(uint32_t *)(a2 + 120) = a5[2];
  *(uint32_t *)(a2 + 124) = a5[3];
  *(uint32_t *)(a2 + 128) = a5[4];
  *(uint32_t *)(a2 + 132) = a5[5];
  *(uint32_t *)(a2 + 136) = a5[6];
  *(uint32_t *)(a2 + 140) = a5[7];
  *(uint32_t *)(a2 + 144) = a5[8];
  *(uint32_t *)(a2 + 148) = a5[9];
  *(uint32_t *)(a2 + 152) = a5[10];
  *(uint32_t *)(a2 + 156) = a5[11];
  *(uint32_t *)(a2 + 64) = a5[12];
  *(uint32_t *)(a2 + 68) = a5[13];
  *(uint32_t *)(a2 + 72) = a5[14];
  *(uint32_t *)(a2 + 76) = a5[15];
  *(uint32_t *)(a2 + 80) = a5[16];
  *(uint32_t *)(a2 + 84) = a5[17];
  *(uint32_t *)(a2 + 88) = a5[18];
  *(uint32_t *)(a2 + 92) = a5[19];
  *(uint32_t *)(a2 + 96) = a5[20];
  *(uint32_t *)(a2 + 100) = a5[21];
  *(uint32_t *)(a2 + 104) = a5[22];
  *(uint32_t *)(a2 + 108) = a5[23];
  *(uint32_t *)(a2 + 16) = a4;
  memset(v54, 0, 16);
  v50 = *(uint8_t **)(a4 + 32);
g4_m128_raw(v7) = *(unsigned int *)(a4 + 28);
  v8 = _mm_cvtsi128_si32(v7);
  v9 = (2130706432 - v8) & ((v8 ^ (v8 + 2139095040)) >> 31);
  v10 = *(float *)(a2 + 112);
  v11 = _mm_cvtsi32_si128(*(uint32_t *)(a2 + 116));
  v12 = *(float *)(a2 + 120);
  v13 = *(float *)(a2 + 68);
  v14 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v7)
                      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v7) * *(float *)&v9)) * *(float *)&v9)))
      * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v7) * *(float *)&v9)) * *(float *)&v9);
  v15 = *(float *)(a4 + 28);
  *(float *)g4_m128_ptr<int32_t>(v7) = *(float *)g4_m128_ptr<int32_t>(v7) * 0.000015258789f;
  v16 = *(float *)(a2 + 64);
  v54[8] = *(float *)g4_m128_ptr<int32_t>(v7);
  v54[9] = *(float *)g4_m128_ptr<int32_t>(v7);
  v54[10] = *(float *)g4_m128_ptr<int32_t>(v7);
  v17 = 2.0 - (float)(v15 * v14);
  v18 = *(float *)(a2 + 72);
  v54[11] = *(float *)g4_m128_ptr<int32_t>(v7);
  v19 = v17 * v14;
  v20 = *(float *)(a2 + 76);
  *(float *)(a2 + 32) = v19;
  *(float *)(a2 + 36) = v19;
  *(float *)(a2 + 40) = v19;
  *(float *)(a2 + 44) = v19;
  v21 = *(float *)(a4 + 16);
  *(float *)g4_m128_ptr<int32_t>(v11) = *(float *)g4_m128_ptr<int32_t>(v11) - v21;
  v51 = v20 - v21;
  v22 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
  v23 = (float)(v16 - v21) * *(float *)g4_m128_ptr<int32_t>(v7);
  v24 = (float)(v12 - v21) * *(float *)g4_m128_ptr<int32_t>(v7);
  v25 = (float)(v13 - v21) * *(float *)g4_m128_ptr<int32_t>(v7);
  v26 = (float)(v18 - v21) * *(float *)g4_m128_ptr<int32_t>(v7);
  *(float *)g4_m128_ptr<int32_t>(v11) = (float)(*(float *)(a2 + 124) - v21) * *(float *)g4_m128_ptr<int32_t>(v7);
  v55[0] = (float)(v10 - v21) * *(float *)g4_m128_ptr<int32_t>(v7);
  v55[1] = v22 * *(float *)g4_m128_ptr<int32_t>(v7);
  v27 = *(float *)(a2 + 128);
  v28 = *(float *)(a4 + 20);
  v29 = *(uint32_t *)(a2 + 132);
  v30 = *(float *)(a2 + 92) - v28;
  v55[12] = v23;
  v31 = v51;
  v55[2] = v24;
  v32 = _mm_cvtsi32_si128(v29);
  *(float *)g4_m128_ptr<int32_t>(v32) = *(float *)g4_m128_ptr<int32_t>(v32) - v28;
  v55[3] = *(float *)g4_m128_ptr<int32_t>(v11);
g4_m128_lane<int32_t>(v11, 0) = *(uint32_t *)(a2 + 140);
  v52 = v30;
  v55[13] = v25;
  v33 = *(float *)(a2 + 84) - v28;
  v55[14] = v26;
  v34 = COERCE_FLOAT(_mm_cvtsi128_si32(v32));
  v35 = *(float *)(a2 + 88) - v28;
  v55[15] = v31 * *(float *)g4_m128_ptr<int32_t>(v7);
  v36 = *(float *)(a2 + 80);
  *(float *)g4_m128_ptr<int32_t>(v32) = *(float *)(a2 + 136) - v28;
  v55[4] = (float)(v27 - v28) * *(float *)g4_m128_ptr<int32_t>(v7);
  v37 = v34 * *(float *)g4_m128_ptr<int32_t>(v7);
  v38 = v36 - v28;
  *(float *)g4_m128_ptr<int32_t>(v11) = (float)(*(float *)g4_m128_ptr<int32_t>(v11) - v28) * *(float *)g4_m128_ptr<int32_t>(v7);
  v39 = *(uint32_t *)(a2 + 148);
  v40 = *(float *)(a4 + 24);
  v55[5] = v37;
  v55[7] = *(float *)g4_m128_ptr<int32_t>(v11);
  v41 = _mm_cvtsi32_si128(v39);
  v42 = *(float *)(a2 + 108);
  *(float *)g4_m128_ptr<int32_t>(v41) = *(float *)g4_m128_ptr<int32_t>(v41) - v40;
  v55[17] = v33 * *(float *)g4_m128_ptr<int32_t>(v7);
  v43 = COERCE_FLOAT(_mm_cvtsi128_si32(v41));
  v55[6] = *(float *)g4_m128_ptr<int32_t>(v32) * *(float *)g4_m128_ptr<int32_t>(v7);
  v55[16] = v38 * *(float *)g4_m128_ptr<int32_t>(v7);
  v55[18] = v35 * *(float *)g4_m128_ptr<int32_t>(v7);
  v55[19] = v52 * *(float *)g4_m128_ptr<int32_t>(v7);
g4_m128_lane<int32_t>(v41, 0) = *(uint32_t *)(a2 + 156);
  v44 = *(float *)(a2 + 96);
  v45 = *(float *)(a2 + 100);
  v46 = *(float *)(a2 + 104);
  v53 = v42 - v40;
  v47 = *(float *)(a2 + 144) - v40;
  *(float *)g4_m128_ptr<int32_t>(v32) = (float)(*(float *)(a2 + 152) - v40) * *(float *)g4_m128_ptr<int32_t>(v7);
  v54[12] = 0.0;
  v54[4] = 0.0;
  v54[13] = 0.0;
  v55[10] = *(float *)g4_m128_ptr<int32_t>(v32);
  v55[11] = (float)(*(float *)g4_m128_ptr<int32_t>(v41) - v40) * *(float *)g4_m128_ptr<int32_t>(v7);
  v55[20] = (float)(v44 - v40) * *(float *)g4_m128_ptr<int32_t>(v7);
  v55[8] = v47 * *(float *)g4_m128_ptr<int32_t>(v7);
  v55[21] = (float)(v45 - v40) * *(float *)g4_m128_ptr<int32_t>(v7);
  v55[22] = (float)(v46 - v40) * *(float *)g4_m128_ptr<int32_t>(v7);
  v55[9] = v43 * *(float *)g4_m128_ptr<int32_t>(v7);
  v48 = *a7;
  v55[23] = *(float *)g4_m128_ptr<int32_t>(v7) * v53;
  *(uint32_t *)(a2 + 48) = (uint32_t)(uintptr_t)(a5);
  *(uint32_t *)(a2 + 160) = 0;
  v55[24] = v48;
  *(uint32_t *)(a2 + 208) = -(*v50 == 13);
  hkpMoppRayBundleVirtualMachine::queryRayOnTree(a2, v54, (int)(uintptr_t)(v50), (int)(uintptr_t)(v55), 0);
  *a1 = *(uint32_t *)(a2 + 160);
  return a1;
}


