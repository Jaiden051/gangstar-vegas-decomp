#include "Core/Utils/DecompTypes.h"
#include "iap_ItemManager.h"

// ----------------------------------------------------------------------------
// Function: iap::ItemManager::Construct  (binary VA: 0x151ff00)
// Original: iap::ItemManager::ItemManager
// ----------------------------------------------------------------------------
pthread_mutex_t ** iap::ItemManager::Construct(iap::ItemManager::Self *self)
{
  glwebtools::Mutex::Self *v1;
  pthread_mutex_t **result;

  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)self = 0;
  *((uint8_t *)self + 8) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)((char *)self + 20);
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)((char *)self + 20);
  v1 = (glwebtools::Mutex::Self *)sub_4EBE70(8u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  result = glwebtools::Mutex::Construct(v1);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::ItemManager::getInstance  (binary VA: 0x151ffa0)
// Original: iap::ItemManager::getInstance
// ----------------------------------------------------------------------------
iap::ItemManager::Self * iap::ItemManager::getInstance()
{
  iap::ItemManager::Self *result;
  iap::ItemManager::Self *v1;

  result = (iap::ItemManager::Self *)iap::ItemManager::s_instance;
  if ( iap::ItemManager::s_instance == 0 )
  {
    v1 = (iap::ItemManager::Self *)sub_4EBE70(0x28u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    iap::ItemManager::Construct(v1);
    iap::ItemManager::s_instance = (uintptr_t)(uintptr_t)(v1);
    return v1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::ItemManager::getState  (binary VA: 0x1520020)
// Original: iap::ItemManager::getState
// ----------------------------------------------------------------------------
int iap::ItemManager::getState(iap::ItemManager::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: iap::ItemManager::requestItemList  (binary VA: 0x1520030)
// Original: iap::ItemManager::requestItemList
// ----------------------------------------------------------------------------
int iap::ItemManager::requestItemList(iap::ItemManager::Self *self, char *s)
{
  glwebtools::Mutex::Self *v2;
  size_t v3;
  int v4;
  int v6;

  v2 = *((glwebtools::Mutex::Self **)self + 1);
  glwebtools::Mutex::Lock(v2);
  if ( *(uint32_t *)self == 2 || (v4 = -2147483644, *(uint32_t *)self == 0) )
  {
    v3 = strlen(s);
    g4_std_compat::string_assign((int)(uintptr_t)(self) + 12, s, v3);
    *(uint32_t *)self = 1;
    v4 = 0;
  }
  v6 = v4;
  glwebtools::Mutex::Unlock(v2);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: iap::ItemManager::Update  (binary VA: 0x15200d0)
// Original: iap::ItemManager::Update
// ----------------------------------------------------------------------------
iap::ItemManager::Self * iap::ItemManager::Update(InAppBilling::Self **self)
{
  iap::ItemManager::Self *result;

  result = (iap::ItemManager::Self *)self;
  if ( *self == (InAppBilling::Self *)((char *)&dword_0 + 1) && *((uint8_t *)self + 8) == 0 )
  {
    *((uint8_t *)self + 8) = 1;
    return (iap::ItemManager::Self *)InAppBilling_GetItemList(*(self + 3));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::ItemManager::Destroy  (binary VA: 0x1520110)
// Original: iap::ItemManager::~ItemManager
// ----------------------------------------------------------------------------
void iap::ItemManager::Destroy(void **self)
{
  int v1;

  g4_std::Rb_tree_string_pair_string_const_39d424::M_erase(
    (int)(uintptr_t)(self + 4),
    *(self + 6));
  v1 = (int)(uintptr_t)(*(self + 3));
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: iap::ItemManager::destroyInstance  (binary VA: 0x1520180)
// Original: iap::ItemManager::destroyInstance
// ----------------------------------------------------------------------------
int iap::ItemManager::destroyInstance()
{
  int result;

  result = (int)iap::ItemManager::s_instance;
  if ( iap::ItemManager::s_instance != 0 )
  {
    iap::ItemManager::Destroy((void **)(uintptr_t)(iap::ItemManager::s_instance));
    result = sub_4EBEE0((int)iap::ItemManager::s_instance);
    iap::ItemManager::s_instance = (uintptr_t)(uintptr_t)(nullptr);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::ItemManager::getJsonString  (binary VA: 0x15201d0)
// Original: iap::ItemManager::getJsonString
// ----------------------------------------------------------------------------
int iap::ItemManager::getJsonString(char *a1, int a2)
{
  glwebtools::Json::Value::Self *Root;
  glwebtools::Self *v3;
  const glwebtools::Json::Value::Self *v4;
  glwebtools::Json::Value::Self *v5;
  char *v6;
  char *v7;
  glwebtools::Json::Value::Self *v8;
  glwebtools::Json::Value::Self *v9;
  glwebtools::Json::Value::Self *v10;
  glwebtools::Self *v11;
  glwebtools::Json::Value::Self *v12;
  glwebtools::Json::Value::Self *v13;
  void *v14;
  void *v15;
  glwebtools::JsonWriter::Self *v16;
  glwebtools::Json::Value::Self *v17;
  glwebtools::Json::Value::Self *v18;
  glwebtools::Self *v19;
  const glwebtools::Json::Value::Self *v20;
  glwebtools::Json::Value::Self *v21;
  glwebtools::Json::Value::Self *v22;
  glwebtools::Json::Value::Self *v23;
  glwebtools::Self *v24;
  const glwebtools::Json::Value::Self *v25;
  glwebtools::Json::Value::Self *v26;
  glwebtools::Json::Value::Self *v27;
  int *v28;
  glwebtools::Json::Value::Self *v29;
  glwebtools::Self *v30;
  const glwebtools::Json::Value::Self *v31;
  glwebtools::Json::Value::Self *v32;
  glwebtools::Json::Value::Self *v33;
  int *v34;
  glwebtools::Json::Value::Self *v35;
  glwebtools::Self *v36;
  const glwebtools::Json::Value::Self *v37;
  glwebtools::Json::Value::Self *v38;
  glwebtools::Json::Value::Self *v39;
  glwebtools::Json::Value::Self *v40;
  glwebtools::Self *v41;
  const glwebtools::Json::Value::Self *v42;
  glwebtools::Json::Value::Self *v43;
  glwebtools::Json::Value::Self *v44;
  glwebtools::Json::Value::Self *v45;
  glwebtools::Self *v46;
  const glwebtools::Json::Value::Self *v47;
  glwebtools::Json::Value::Self *v48;
  glwebtools::Json::Value::Self *v49;
  glwebtools::Json::Value::Self *v50;
  glwebtools::Self *v51;
  const glwebtools::Json::Value::Self *v52;
  glwebtools::Json::Value::Self *v53;
  glwebtools::Json::Value::Self *v54;
  glwebtools::Json::Value::Self *v55;
  glwebtools::Self *v56;
  const glwebtools::Json::Value::Self *v57;
  glwebtools::Json::Value::Self *v58;
  glwebtools::Json::Value::Self *v59;
  int *v60;
  glwebtools::Json::Value::Self *v61;
  glwebtools::Self *v62;
  const glwebtools::Json::Value::Self *v63;
  glwebtools::Json::Value::Self *v64;
  glwebtools::Json::Value::Self *v65;
  int *v66;
  glwebtools::Json::Value::Self *v67;
  glwebtools::Self *v68;
  const glwebtools::Json::Value::Self *v69;
  glwebtools::Json::Value::Self *v70;
  glwebtools::Json::Value::Self *v71;
  char *v72;
  char v73;
  char v74;
  char v75;
  char v76;
  char v77;
  char v78;
  char v79;
  int v80;
  glwebtools::Json::Value::Self *v81;
  glwebtools::Json::Value::Self *v82;
  unsigned int v83;
  glwebtools::Json::Value::Self *v84;
  int v85;
  uint32_t *v86;
  int *j;
  glwebtools::Json::Value::Self *v88;
  glwebtools::Self *v89;
  glwebtools::Json::Value::Self *v90;
  glwebtools::Json::Value::Self *v91;
  glwebtools::Json::Value::Self *v92;
  glwebtools::Self *v93;
  glwebtools::Json::Value::Self *v94;
  glwebtools::Json::Value::Self *v95;
  glwebtools::Json::Value::Self *v96;
  glwebtools::Self *v97;
  glwebtools::Json::Value::Self *v98;
  glwebtools::Json::Value::Self *v99;
  char v100;
  glwebtools::Json::Value::Self *v101;
  glwebtools::Json::Value::Self *v102;
  glwebtools::Self *v103;
  glwebtools::Json::Value::Self *v104;
  glwebtools::Json::Value::Self *v105;
  char v106;
  glwebtools::Json::Value::Self *v107;
  glwebtools::Json::Value::Self *v108;
  glwebtools::Self *v109;
  glwebtools::Json::Value::Self *v110;
  glwebtools::Json::Value::Self *v111;
  glwebtools::Json::Value::Self *v112;
  glwebtools::Self *v113;
  glwebtools::Json::Value::Self *v114;
  glwebtools::Json::Value::Self *v115;
  char isObject;
  glwebtools::Json::Value::Self *v117;
  glwebtools::Json::Value::Self *v118;
  int v119;
  glwebtools::Json::Value::Self *v120;
  glwebtools::Json::Value::Self *v121;
  glwebtools::Json::Value::Self *v122;
  glwebtools::Self *v123;
  glwebtools::Json::Value::Self *v124;
  glwebtools::Json::Value::Self *v125;
  glwebtools::Json::Value::Self *v126;
  int v127;
  glwebtools::Json::Value::Self *v128;
  glwebtools::Json::Value::Self *v129;
  glwebtools::Json::Value::Self *v130;
  glwebtools::Self *v131;
  glwebtools::Json::Value::Self *v132;
  glwebtools::Json::Value::Self *v133;
  char *v134;
  char *v135;
  glwebtools::Json::Value::Self *v136;
  glwebtools::Self *v137;
  const glwebtools::Json::Value::Self *v138;
  glwebtools::Json::Value::Self *v139;
  glwebtools::Json::Value::Self *v140;
  glwebtools::Json::Value::Self *v141;
  glwebtools::Self *v142;
  const glwebtools::Json::Value::Self *v143;
  glwebtools::Json::Value::Self *v144;
  glwebtools::Json::Value::Self *v145;
  glwebtools::Json::Value::Self *v146;
  glwebtools::Self *v147;
  const glwebtools::Json::Value::Self *v148;
  glwebtools::Json::Value::Self *v149;
  uint8_t *v150;
  char *v151;
  int v152;
  uint32_t *v153;
  void *v155;
  int v156;
  int v157;
  uint32_t *v158;
  uint32_t *v159;
  int v160;
  uint32_t *v161;
  uint32_t *v162;
  char *v163;
  char *v164;
  uint32_t *v165;
  int v166;
  uint32_t *v167;
  glwebtools::Json::Value::Self *v168;
  int v169;
  glwebtools::Json::Value::Self *v170;
  glwebtools::Json::Value::Self *v171;
  glwebtools::Json::Value::Self *v172;
  int v173;
  const glwebtools::Json::Value::Self *v174;
  glwebtools::Json::Value::Self *v175;
  typedef char *_g4_t_v176;
  typedef glwebtools::Json::Value::Self *_g4_t_v177;
  typedef glwebtools::Json::Value::Self *_g4_t_v178;
  typedef glwebtools::Json::Value::Self *_g4_t_v179;
  typedef glwebtools::Json::Value::Self *_g4_t_v180;
  typedef glwebtools::Json::Value::Self *_g4_t_v181;
  typedef glwebtools::Json::Value::Self *_g4_t_v182;
  typedef glwebtools::Json::Value::Self *_g4_t_v183;
  typedef glwebtools::Json::Value::Self *_g4_t_v184;
  typedef glwebtools::Json::Value::Self *_g4_t_v185;
  typedef glwebtools::Json::Value::Self *_g4_t_v186;
  typedef glwebtools::Json::Value::Self *_g4_t_v187;
  typedef glwebtools::Json::Value::Self *_g4_t_v188;
  typedef glwebtools::Json::Value::Self *_g4_t_v189;
  typedef glwebtools::Json::Value::Self *_g4_t_v190;
  typedef glwebtools::Json::Value::Self *_g4_t_v191;
  typedef glwebtools::Json::Value::Self *_g4_t_v192;
  typedef glwebtools::Json::Value::Self *_g4_t_v193;
  typedef glwebtools::Json::Value::Self *_g4_t_v194;
  typedef glwebtools::Json::Value::Self *_g4_t_v195;
  typedef glwebtools::Json::Value::Self *_g4_t_v196;
  typedef int _g4_t_v197;
  typedef char *_g4_t_v198;
  typedef uint32_t *_g4_t_v199;
  typedef char *_g4_t_v200;
  typedef uint32_t *_g4_t_v201;
  typedef char *_g4_t_v202;
  typedef uint32_t *_g4_t_v203;
  typedef uint32_t *_g4_t_v204;
  typedef char *_g4_t_v205;
  typedef char *_g4_t_v206;
  typedef char *_g4_t_v207;
  typedef char *_g4_t_v208;
  typedef char *_g4_t_i;
  typedef char *_g4_t_v210;
  typedef char *_g4_t_v211;
  typedef uint32_t *_g4_t_v212;
  typedef char *_g4_t_v213;
  typedef int _g4_t_v214;
  typedef int _g4_t_v215;
  typedef int _g4_t_v216;
  typedef int _g4_t_v217;
  typedef int _g4_t_v218;
  typedef int _g4_t_v219;
  typedef int _g4_t_v220;
  typedef int _g4_t_v221;
  typedef int _g4_t_v222;
  typedef int _g4_t_v223;
  typedef int _g4_t_v224;
  typedef int _g4_t_v225;
  typedef int _g4_t_v226;
  typedef char *_g4_t_v227;
  typedef double _g4_t_ReductionPercent;
  typedef uint32_t *_g4_t_v229;
  typedef int _g4_t_v230;
  typedef int _g4_t_v231;
  typedef int _g4_t_v232;
  typedef int _g4_t_v233;
  typedef int _g4_t_v234;
  typedef int _g4_t_v235;
  typedef int _g4_t_v236;
  typedef int _g4_t_v237;
  typedef char _g4_t_v238[4];
  typedef int _g4_t_v239;
  typedef int _g4_t_v240;
  typedef char _g4_t_v241[4];
  typedef char _g4_t_v242[4];
  typedef char _g4_t_v243[4];
  typedef char _g4_t_v244[4];
  typedef int _g4_t_v245;
  typedef int _g4_t_v246;
  typedef char _g4_t_v247[4];
  typedef char _g4_t_v248[4];
  typedef char *_g4_t_v249;
  typedef char _g4_t_v250[4];
  typedef int _g4_t_v251;
  typedef int _g4_t_v252;
  typedef const char *_g4_t_v253;
  typedef int _g4_t_v254[4];
  typedef int _g4_t_v255;
  typedef char *_g4_t_v256;
  typedef int _g4_t_v257;
  typedef int *_g4_t_v258;
  typedef int _g4_t_v259;
  typedef int *_g4_t_v260;
  typedef int _g4_t_v261;
  typedef char *_g4_t_v262;
  typedef int _g4_t_v263;
  typedef char *_g4_t_v264;
  typedef int _g4_t_v265;
  typedef char *_g4_t_v266;
  typedef int _g4_t_v267;
  typedef char *_g4_t_v268;
  typedef int _g4_t_v269;
  typedef int *_g4_t_v270;
  typedef int _g4_t_v271;
  typedef int *_g4_t_v272;
  typedef int _g4_t_v273;
  typedef char *_g4_t_v274;
  typedef int _g4_t_v275;
  typedef char *_g4_t_v276;
  typedef int _g4_t_v277;
  typedef int _g4_t_v278;
  typedef int _g4_t_v279;
  typedef int _g4_t_v280;
  typedef int _g4_t_v281;
  typedef int _g4_t_v282;
  typedef int _g4_t_v283;
  typedef int _g4_t_v284;
  typedef int _g4_t_v285;
  typedef int _g4_t_v286;
  typedef int _g4_t_v287;
  typedef int _g4_t_v288;
  typedef int _g4_t_v289;
  typedef int _g4_t_v290;
  typedef int _g4_t_v291;
  typedef int _g4_t_v292;
  typedef int _g4_t_v293;
  typedef int _g4_t_v294;
  typedef int _g4_t_v295;
  typedef int _g4_t_v296;
  typedef int _g4_t_v297;
  typedef int _g4_t_v298;
  typedef int _g4_t_v299[2];
  typedef int _g4_t_v300[2];
  typedef int _g4_t_v301[2];
  typedef int _g4_t_v302[2];
  typedef int _g4_t_v303[2];
  typedef int _g4_t_v304[2];
  typedef int _g4_t_v305[2];
  typedef int _g4_t_v306[2];
  typedef int _g4_t_v307[2];
  typedef int _g4_t_v308[2];
  typedef int _g4_t_v309[2];
  typedef int _g4_t_v310[2];
  typedef int _g4_t_v311[2];
  typedef int _g4_t_v312[2];
  typedef int _g4_t_v313[2];
  typedef int _g4_t_v314[2];
  typedef int _g4_t_v315[2];
  typedef int _g4_t_v316[2];
  typedef int _g4_t_v317[2];
  typedef int _g4_t_v318[2];
  typedef int _g4_t_v319[2];
  typedef int _g4_t_v320[2];
  typedef void *_g4_t_v321;
  typedef char *_g4_t_v322;
  typedef int _g4_t_v323;
  typedef uint8_t _g4_t_v324[16];
  typedef uint8_t _g4_t_v325[16];
  typedef uint8_t _g4_t_v326[16];
  typedef uint8_t _g4_t_v327[16];
  typedef uint8_t _g4_t_v328[16];
  typedef uint8_t _g4_t_v329[16];
  typedef uint8_t _g4_t_v330[16];
  typedef uint8_t _g4_t_v331[16];
  typedef uint8_t _g4_t_v332[16];
  typedef uint8_t _g4_t_v333[16];
  typedef uint8_t _g4_t_v334[16];
  typedef uint8_t _g4_t_v335[16];
  typedef uint8_t _g4_t_v336[16];
  typedef uint8_t _g4_t_v337[16];
  typedef uint8_t _g4_t_v338[16];
  typedef uint8_t _g4_t_v339[16];
  typedef uint8_t _g4_t_v340[16];
  typedef uint8_t _g4_t_v341[16];
  typedef uint8_t _g4_t_v342[16];
  typedef uint8_t _g4_t_v343[16];
  typedef uint8_t _g4_t_v344[16];
  typedef uint8_t _g4_t_v345[16];
  typedef uint8_t _g4_t_v346[16];
  typedef uint8_t _g4_t_v347[16];
  typedef uint8_t _g4_t_v348[16];
  typedef uint8_t _g4_t_v349[16];
  typedef uint8_t _g4_t_v350[16];
  typedef uint8_t _g4_t_v351[16];
  typedef uint8_t _g4_t_v352[16];
  typedef uint8_t _g4_t_v353[16];
  typedef char _g4_t_v354[16];
  typedef char _g4_t_v355[20];
  typedef char _g4_t_v356[20];
  typedef char _g4_t_v357[20];
  typedef uint8_t _g4_t_v358[20];
  typedef uint8_t _g4_t_v359[20];
  typedef uint8_t _g4_t_v360[20];
  typedef char _g4_t_v361[20];
  typedef char _g4_t_v362[4];
  typedef int _g4_t_v363;
  typedef char _g4_t_v364;
  typedef uint32_t *_g4_t_v365;
  typedef char _g4_t_v366;
  typedef uint32_t *_g4_t_v367;
  typedef char _g4_t_v368;
  typedef uint32_t *_g4_t_v369;
  typedef char _g4_t_v370;
  typedef uint32_t *_g4_t_v371;
  typedef char _g4_t_v372;
  typedef uint32_t *_g4_t_v373;
  typedef char _g4_t_v374;
  typedef uint32_t *_g4_t_v375;
  typedef char _g4_t_v376;
  typedef uint32_t *_g4_t_v377;
  typedef char _g4_t_v378;
  typedef int _g4_t_v379;
  typedef char _g4_t_v380;
  typedef int _g4_t_v381;
  typedef char _g4_t_v382;
  typedef int _g4_t_v383;
  typedef char _g4_t_v384;
  typedef void *_g4_t_v385;
  typedef char *_g4_t_v386;
  typedef char *_g4_t_v387;
  typedef int _g4_t_v388;
  typedef int _g4_t_v389;
  typedef uint32_t *_g4_t_v390;
  typedef int *_g4_t_v391;
  typedef int *_g4_t_v392;
  typedef int _g4_t_v393;
  typedef int _g4_t_v394[2];
  typedef char _g4_t_v395;
  typedef uint32_t *_g4_t_v396;
  typedef char _g4_t_v397;
  typedef uint32_t *_g4_t_v398;
  typedef char _g4_t_v399;
  typedef uint32_t *_g4_t_v400;
  typedef char _g4_t_v401;
  typedef char _g4_t_v402;
  typedef uint32_t *_g4_t_v403;
  typedef char _g4_t_v404;
  typedef char _g4_t_v405;
  typedef uint32_t *_g4_t_v406;
  typedef char _g4_t_v407;
  typedef uint32_t *_g4_t_v408;
  typedef uint32_t *_g4_t_v409;
  typedef uint32_t _g4_t_v410[5];
  typedef uint32_t *_g4_t_v411;
  typedef char _g4_t_v412;
  typedef uint32_t *_g4_t_v413;
  typedef char _g4_t_v414;
  typedef int _g4_t_v415;
  typedef int _g4_t_v416;
  typedef int _g4_t_v417;
  typedef uint32_t _g4_t_v418[40];
  enum : size_t {
    _g4_s0 = 1712u,
    _g4_s1 = (0u + sizeof(_g4_t_v176)) > _g4_s0 ? (0u + sizeof(_g4_t_v176)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v177)) > _g4_s1 ? (16u + sizeof(_g4_t_v177)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v178)) > _g4_s2 ? (16u + sizeof(_g4_t_v178)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v179)) > _g4_s3 ? (16u + sizeof(_g4_t_v179)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v180)) > _g4_s4 ? (16u + sizeof(_g4_t_v180)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v181)) > _g4_s5 ? (16u + sizeof(_g4_t_v181)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v182)) > _g4_s6 ? (16u + sizeof(_g4_t_v182)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v183)) > _g4_s7 ? (16u + sizeof(_g4_t_v183)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v184)) > _g4_s8 ? (16u + sizeof(_g4_t_v184)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v185)) > _g4_s9 ? (16u + sizeof(_g4_t_v185)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v186)) > _g4_s10 ? (16u + sizeof(_g4_t_v186)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v187)) > _g4_s11 ? (16u + sizeof(_g4_t_v187)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v188)) > _g4_s12 ? (16u + sizeof(_g4_t_v188)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v189)) > _g4_s13 ? (16u + sizeof(_g4_t_v189)) : _g4_s13,
    _g4_s15 = (16u + sizeof(_g4_t_v190)) > _g4_s14 ? (16u + sizeof(_g4_t_v190)) : _g4_s14,
    _g4_s16 = (16u + sizeof(_g4_t_v191)) > _g4_s15 ? (16u + sizeof(_g4_t_v191)) : _g4_s15,
    _g4_s17 = (16u + sizeof(_g4_t_v192)) > _g4_s16 ? (16u + sizeof(_g4_t_v192)) : _g4_s16,
    _g4_s18 = (16u + sizeof(_g4_t_v193)) > _g4_s17 ? (16u + sizeof(_g4_t_v193)) : _g4_s17,
    _g4_s19 = (16u + sizeof(_g4_t_v194)) > _g4_s18 ? (16u + sizeof(_g4_t_v194)) : _g4_s18,
    _g4_s20 = (16u + sizeof(_g4_t_v195)) > _g4_s19 ? (16u + sizeof(_g4_t_v195)) : _g4_s19,
    _g4_s21 = (16u + sizeof(_g4_t_v196)) > _g4_s20 ? (16u + sizeof(_g4_t_v196)) : _g4_s20,
    _g4_s22 = (24u + sizeof(_g4_t_v197)) > _g4_s21 ? (24u + sizeof(_g4_t_v197)) : _g4_s21,
    _g4_s23 = (28u + sizeof(_g4_t_v198)) > _g4_s22 ? (28u + sizeof(_g4_t_v198)) : _g4_s22,
    _g4_s24 = (36u + sizeof(_g4_t_v199)) > _g4_s23 ? (36u + sizeof(_g4_t_v199)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v200)) > _g4_s24 ? (40u + sizeof(_g4_t_v200)) : _g4_s24,
    _g4_s26 = (40u + sizeof(_g4_t_v201)) > _g4_s25 ? (40u + sizeof(_g4_t_v201)) : _g4_s25,
    _g4_s27 = (44u + sizeof(_g4_t_v202)) > _g4_s26 ? (44u + sizeof(_g4_t_v202)) : _g4_s26,
    _g4_s28 = (48u + sizeof(_g4_t_v203)) > _g4_s27 ? (48u + sizeof(_g4_t_v203)) : _g4_s27,
    _g4_s29 = (52u + sizeof(_g4_t_v204)) > _g4_s28 ? (52u + sizeof(_g4_t_v204)) : _g4_s28,
    _g4_s30 = (56u + sizeof(_g4_t_v205)) > _g4_s29 ? (56u + sizeof(_g4_t_v205)) : _g4_s29,
    _g4_s31 = (64u + sizeof(_g4_t_v206)) > _g4_s30 ? (64u + sizeof(_g4_t_v206)) : _g4_s30,
    _g4_s32 = (64u + sizeof(_g4_t_v207)) > _g4_s31 ? (64u + sizeof(_g4_t_v207)) : _g4_s31,
    _g4_s33 = (64u + sizeof(_g4_t_v208)) > _g4_s32 ? (64u + sizeof(_g4_t_v208)) : _g4_s32,
    _g4_s34 = (64u + sizeof(_g4_t_i)) > _g4_s33 ? (64u + sizeof(_g4_t_i)) : _g4_s33,
    _g4_s35 = (68u + sizeof(_g4_t_v210)) > _g4_s34 ? (68u + sizeof(_g4_t_v210)) : _g4_s34,
    _g4_s36 = (68u + sizeof(_g4_t_v211)) > _g4_s35 ? (68u + sizeof(_g4_t_v211)) : _g4_s35,
    _g4_s37 = (68u + sizeof(_g4_t_v212)) > _g4_s36 ? (68u + sizeof(_g4_t_v212)) : _g4_s36,
    _g4_s38 = (72u + sizeof(_g4_t_v213)) > _g4_s37 ? (72u + sizeof(_g4_t_v213)) : _g4_s37,
    _g4_s39 = (72u + sizeof(_g4_t_v214)) > _g4_s38 ? (72u + sizeof(_g4_t_v214)) : _g4_s38,
    _g4_s40 = (72u + sizeof(_g4_t_v215)) > _g4_s39 ? (72u + sizeof(_g4_t_v215)) : _g4_s39,
    _g4_s41 = (72u + sizeof(_g4_t_v216)) > _g4_s40 ? (72u + sizeof(_g4_t_v216)) : _g4_s40,
    _g4_s42 = (72u + sizeof(_g4_t_v217)) > _g4_s41 ? (72u + sizeof(_g4_t_v217)) : _g4_s41,
    _g4_s43 = (72u + sizeof(_g4_t_v218)) > _g4_s42 ? (72u + sizeof(_g4_t_v218)) : _g4_s42,
    _g4_s44 = (72u + sizeof(_g4_t_v219)) > _g4_s43 ? (72u + sizeof(_g4_t_v219)) : _g4_s43,
    _g4_s45 = (72u + sizeof(_g4_t_v220)) > _g4_s44 ? (72u + sizeof(_g4_t_v220)) : _g4_s44,
    _g4_s46 = (72u + sizeof(_g4_t_v221)) > _g4_s45 ? (72u + sizeof(_g4_t_v221)) : _g4_s45,
    _g4_s47 = (72u + sizeof(_g4_t_v222)) > _g4_s46 ? (72u + sizeof(_g4_t_v222)) : _g4_s46,
    _g4_s48 = (72u + sizeof(_g4_t_v223)) > _g4_s47 ? (72u + sizeof(_g4_t_v223)) : _g4_s47,
    _g4_s49 = (72u + sizeof(_g4_t_v224)) > _g4_s48 ? (72u + sizeof(_g4_t_v224)) : _g4_s48,
    _g4_s50 = (72u + sizeof(_g4_t_v225)) > _g4_s49 ? (72u + sizeof(_g4_t_v225)) : _g4_s49,
    _g4_s51 = (72u + sizeof(_g4_t_v226)) > _g4_s50 ? (72u + sizeof(_g4_t_v226)) : _g4_s50,
    _g4_s52 = (72u + sizeof(_g4_t_v227)) > _g4_s51 ? (72u + sizeof(_g4_t_v227)) : _g4_s51,
    _g4_s53 = (72u + sizeof(_g4_t_ReductionPercent)) > _g4_s52 ? (72u + sizeof(_g4_t_ReductionPercent)) : _g4_s52,
    _g4_s54 = (72u + sizeof(_g4_t_v229)) > _g4_s53 ? (72u + sizeof(_g4_t_v229)) : _g4_s53,
    _g4_s55 = (72u + sizeof(_g4_t_v230)) > _g4_s54 ? (72u + sizeof(_g4_t_v230)) : _g4_s54,
    _g4_s56 = (89u + sizeof(_g4_t_v231)) > _g4_s55 ? (89u + sizeof(_g4_t_v231)) : _g4_s55,
    _g4_s57 = (92u + sizeof(_g4_t_v232)) > _g4_s56 ? (92u + sizeof(_g4_t_v232)) : _g4_s56,
    _g4_s58 = (96u + sizeof(_g4_t_v233)) > _g4_s57 ? (96u + sizeof(_g4_t_v233)) : _g4_s57,
    _g4_s59 = (100u + sizeof(_g4_t_v234)) > _g4_s58 ? (100u + sizeof(_g4_t_v234)) : _g4_s58,
    _g4_s60 = (104u + sizeof(_g4_t_v235)) > _g4_s59 ? (104u + sizeof(_g4_t_v235)) : _g4_s59,
    _g4_s61 = (108u + sizeof(_g4_t_v236)) > _g4_s60 ? (108u + sizeof(_g4_t_v236)) : _g4_s60,
    _g4_s62 = (112u + sizeof(_g4_t_v237)) > _g4_s61 ? (112u + sizeof(_g4_t_v237)) : _g4_s61,
    _g4_s63 = (120u + sizeof(_g4_t_v238)) > _g4_s62 ? (120u + sizeof(_g4_t_v238)) : _g4_s62,
    _g4_s64 = (124u + sizeof(_g4_t_v239)) > _g4_s63 ? (124u + sizeof(_g4_t_v239)) : _g4_s63,
    _g4_s65 = (128u + sizeof(_g4_t_v240)) > _g4_s64 ? (128u + sizeof(_g4_t_v240)) : _g4_s64,
    _g4_s66 = (132u + sizeof(_g4_t_v241)) > _g4_s65 ? (132u + sizeof(_g4_t_v241)) : _g4_s65,
    _g4_s67 = (136u + sizeof(_g4_t_v242)) > _g4_s66 ? (136u + sizeof(_g4_t_v242)) : _g4_s66,
    _g4_s68 = (140u + sizeof(_g4_t_v243)) > _g4_s67 ? (140u + sizeof(_g4_t_v243)) : _g4_s67,
    _g4_s69 = (144u + sizeof(_g4_t_v244)) > _g4_s68 ? (144u + sizeof(_g4_t_v244)) : _g4_s68,
    _g4_s70 = (148u + sizeof(_g4_t_v245)) > _g4_s69 ? (148u + sizeof(_g4_t_v245)) : _g4_s69,
    _g4_s71 = (152u + sizeof(_g4_t_v246)) > _g4_s70 ? (152u + sizeof(_g4_t_v246)) : _g4_s70,
    _g4_s72 = (156u + sizeof(_g4_t_v247)) > _g4_s71 ? (156u + sizeof(_g4_t_v247)) : _g4_s71,
    _g4_s73 = (160u + sizeof(_g4_t_v248)) > _g4_s72 ? (160u + sizeof(_g4_t_v248)) : _g4_s72,
    _g4_s74 = (164u + sizeof(_g4_t_v249)) > _g4_s73 ? (164u + sizeof(_g4_t_v249)) : _g4_s73,
    _g4_s75 = (168u + sizeof(_g4_t_v250)) > _g4_s74 ? (168u + sizeof(_g4_t_v250)) : _g4_s74,
    _g4_s76 = (172u + sizeof(_g4_t_v251)) > _g4_s75 ? (172u + sizeof(_g4_t_v251)) : _g4_s75,
    _g4_s77 = (176u + sizeof(_g4_t_v252)) > _g4_s76 ? (176u + sizeof(_g4_t_v252)) : _g4_s76,
    _g4_s78 = (180u + sizeof(_g4_t_v253)) > _g4_s77 ? (180u + sizeof(_g4_t_v253)) : _g4_s77,
    _g4_s79 = (192u + sizeof(_g4_t_v254)) > _g4_s78 ? (192u + sizeof(_g4_t_v254)) : _g4_s78,
    _g4_s80 = (208u + sizeof(_g4_t_v255)) > _g4_s79 ? (208u + sizeof(_g4_t_v255)) : _g4_s79,
    _g4_s81 = (212u + sizeof(_g4_t_v256)) > _g4_s80 ? (212u + sizeof(_g4_t_v256)) : _g4_s80,
    _g4_s82 = (216u + sizeof(_g4_t_v257)) > _g4_s81 ? (216u + sizeof(_g4_t_v257)) : _g4_s81,
    _g4_s83 = (220u + sizeof(_g4_t_v258)) > _g4_s82 ? (220u + sizeof(_g4_t_v258)) : _g4_s82,
    _g4_s84 = (224u + sizeof(_g4_t_v259)) > _g4_s83 ? (224u + sizeof(_g4_t_v259)) : _g4_s83,
    _g4_s85 = (228u + sizeof(_g4_t_v260)) > _g4_s84 ? (228u + sizeof(_g4_t_v260)) : _g4_s84,
    _g4_s86 = (232u + sizeof(_g4_t_v261)) > _g4_s85 ? (232u + sizeof(_g4_t_v261)) : _g4_s85,
    _g4_s87 = (236u + sizeof(_g4_t_v262)) > _g4_s86 ? (236u + sizeof(_g4_t_v262)) : _g4_s86,
    _g4_s88 = (240u + sizeof(_g4_t_v263)) > _g4_s87 ? (240u + sizeof(_g4_t_v263)) : _g4_s87,
    _g4_s89 = (244u + sizeof(_g4_t_v264)) > _g4_s88 ? (244u + sizeof(_g4_t_v264)) : _g4_s88,
    _g4_s90 = (248u + sizeof(_g4_t_v265)) > _g4_s89 ? (248u + sizeof(_g4_t_v265)) : _g4_s89,
    _g4_s91 = (252u + sizeof(_g4_t_v266)) > _g4_s90 ? (252u + sizeof(_g4_t_v266)) : _g4_s90,
    _g4_s92 = (256u + sizeof(_g4_t_v267)) > _g4_s91 ? (256u + sizeof(_g4_t_v267)) : _g4_s91,
    _g4_s93 = (260u + sizeof(_g4_t_v268)) > _g4_s92 ? (260u + sizeof(_g4_t_v268)) : _g4_s92,
    _g4_s94 = (264u + sizeof(_g4_t_v269)) > _g4_s93 ? (264u + sizeof(_g4_t_v269)) : _g4_s93,
    _g4_s95 = (268u + sizeof(_g4_t_v270)) > _g4_s94 ? (268u + sizeof(_g4_t_v270)) : _g4_s94,
    _g4_s96 = (272u + sizeof(_g4_t_v271)) > _g4_s95 ? (272u + sizeof(_g4_t_v271)) : _g4_s95,
    _g4_s97 = (276u + sizeof(_g4_t_v272)) > _g4_s96 ? (276u + sizeof(_g4_t_v272)) : _g4_s96,
    _g4_s98 = (280u + sizeof(_g4_t_v273)) > _g4_s97 ? (280u + sizeof(_g4_t_v273)) : _g4_s97,
    _g4_s99 = (284u + sizeof(_g4_t_v274)) > _g4_s98 ? (284u + sizeof(_g4_t_v274)) : _g4_s98,
    _g4_s100 = (288u + sizeof(_g4_t_v275)) > _g4_s99 ? (288u + sizeof(_g4_t_v275)) : _g4_s99,
    _g4_s101 = (292u + sizeof(_g4_t_v276)) > _g4_s100 ? (292u + sizeof(_g4_t_v276)) : _g4_s100,
    _g4_s102 = (296u + sizeof(_g4_t_v277)) > _g4_s101 ? (296u + sizeof(_g4_t_v277)) : _g4_s101,
    _g4_s103 = (300u + sizeof(_g4_t_v278)) > _g4_s102 ? (300u + sizeof(_g4_t_v278)) : _g4_s102,
    _g4_s104 = (304u + sizeof(_g4_t_v279)) > _g4_s103 ? (304u + sizeof(_g4_t_v279)) : _g4_s103,
    _g4_s105 = (308u + sizeof(_g4_t_v280)) > _g4_s104 ? (308u + sizeof(_g4_t_v280)) : _g4_s104,
    _g4_s106 = (312u + sizeof(_g4_t_v281)) > _g4_s105 ? (312u + sizeof(_g4_t_v281)) : _g4_s105,
    _g4_s107 = (316u + sizeof(_g4_t_v282)) > _g4_s106 ? (316u + sizeof(_g4_t_v282)) : _g4_s106,
    _g4_s108 = (320u + sizeof(_g4_t_v283)) > _g4_s107 ? (320u + sizeof(_g4_t_v283)) : _g4_s107,
    _g4_s109 = (324u + sizeof(_g4_t_v284)) > _g4_s108 ? (324u + sizeof(_g4_t_v284)) : _g4_s108,
    _g4_s110 = (328u + sizeof(_g4_t_v285)) > _g4_s109 ? (328u + sizeof(_g4_t_v285)) : _g4_s109,
    _g4_s111 = (332u + sizeof(_g4_t_v286)) > _g4_s110 ? (332u + sizeof(_g4_t_v286)) : _g4_s110,
    _g4_s112 = (336u + sizeof(_g4_t_v287)) > _g4_s111 ? (336u + sizeof(_g4_t_v287)) : _g4_s111,
    _g4_s113 = (340u + sizeof(_g4_t_v288)) > _g4_s112 ? (340u + sizeof(_g4_t_v288)) : _g4_s112,
    _g4_s114 = (344u + sizeof(_g4_t_v289)) > _g4_s113 ? (344u + sizeof(_g4_t_v289)) : _g4_s113,
    _g4_s115 = (348u + sizeof(_g4_t_v290)) > _g4_s114 ? (348u + sizeof(_g4_t_v290)) : _g4_s114,
    _g4_s116 = (352u + sizeof(_g4_t_v291)) > _g4_s115 ? (352u + sizeof(_g4_t_v291)) : _g4_s115,
    _g4_s117 = (356u + sizeof(_g4_t_v292)) > _g4_s116 ? (356u + sizeof(_g4_t_v292)) : _g4_s116,
    _g4_s118 = (360u + sizeof(_g4_t_v293)) > _g4_s117 ? (360u + sizeof(_g4_t_v293)) : _g4_s117,
    _g4_s119 = (364u + sizeof(_g4_t_v294)) > _g4_s118 ? (364u + sizeof(_g4_t_v294)) : _g4_s118,
    _g4_s120 = (368u + sizeof(_g4_t_v295)) > _g4_s119 ? (368u + sizeof(_g4_t_v295)) : _g4_s119,
    _g4_s121 = (372u + sizeof(_g4_t_v296)) > _g4_s120 ? (372u + sizeof(_g4_t_v296)) : _g4_s120,
    _g4_s122 = (376u + sizeof(_g4_t_v297)) > _g4_s121 ? (376u + sizeof(_g4_t_v297)) : _g4_s121,
    _g4_s123 = (380u + sizeof(_g4_t_v298)) > _g4_s122 ? (380u + sizeof(_g4_t_v298)) : _g4_s122,
    _g4_s124 = (384u + sizeof(_g4_t_v299)) > _g4_s123 ? (384u + sizeof(_g4_t_v299)) : _g4_s123,
    _g4_s125 = (392u + sizeof(_g4_t_v300)) > _g4_s124 ? (392u + sizeof(_g4_t_v300)) : _g4_s124,
    _g4_s126 = (400u + sizeof(_g4_t_v301)) > _g4_s125 ? (400u + sizeof(_g4_t_v301)) : _g4_s125,
    _g4_s127 = (408u + sizeof(_g4_t_v302)) > _g4_s126 ? (408u + sizeof(_g4_t_v302)) : _g4_s126,
    _g4_s128 = (416u + sizeof(_g4_t_v303)) > _g4_s127 ? (416u + sizeof(_g4_t_v303)) : _g4_s127,
    _g4_s129 = (424u + sizeof(_g4_t_v304)) > _g4_s128 ? (424u + sizeof(_g4_t_v304)) : _g4_s128,
    _g4_s130 = (432u + sizeof(_g4_t_v305)) > _g4_s129 ? (432u + sizeof(_g4_t_v305)) : _g4_s129,
    _g4_s131 = (440u + sizeof(_g4_t_v306)) > _g4_s130 ? (440u + sizeof(_g4_t_v306)) : _g4_s130,
    _g4_s132 = (448u + sizeof(_g4_t_v307)) > _g4_s131 ? (448u + sizeof(_g4_t_v307)) : _g4_s131,
    _g4_s133 = (456u + sizeof(_g4_t_v308)) > _g4_s132 ? (456u + sizeof(_g4_t_v308)) : _g4_s132,
    _g4_s134 = (464u + sizeof(_g4_t_v309)) > _g4_s133 ? (464u + sizeof(_g4_t_v309)) : _g4_s133,
    _g4_s135 = (472u + sizeof(_g4_t_v310)) > _g4_s134 ? (472u + sizeof(_g4_t_v310)) : _g4_s134,
    _g4_s136 = (480u + sizeof(_g4_t_v311)) > _g4_s135 ? (480u + sizeof(_g4_t_v311)) : _g4_s135,
    _g4_s137 = (488u + sizeof(_g4_t_v312)) > _g4_s136 ? (488u + sizeof(_g4_t_v312)) : _g4_s136,
    _g4_s138 = (496u + sizeof(_g4_t_v313)) > _g4_s137 ? (496u + sizeof(_g4_t_v313)) : _g4_s137,
    _g4_s139 = (504u + sizeof(_g4_t_v314)) > _g4_s138 ? (504u + sizeof(_g4_t_v314)) : _g4_s138,
    _g4_s140 = (512u + sizeof(_g4_t_v315)) > _g4_s139 ? (512u + sizeof(_g4_t_v315)) : _g4_s139,
    _g4_s141 = (520u + sizeof(_g4_t_v316)) > _g4_s140 ? (520u + sizeof(_g4_t_v316)) : _g4_s140,
    _g4_s142 = (528u + sizeof(_g4_t_v317)) > _g4_s141 ? (528u + sizeof(_g4_t_v317)) : _g4_s141,
    _g4_s143 = (536u + sizeof(_g4_t_v318)) > _g4_s142 ? (536u + sizeof(_g4_t_v318)) : _g4_s142,
    _g4_s144 = (544u + sizeof(_g4_t_v319)) > _g4_s143 ? (544u + sizeof(_g4_t_v319)) : _g4_s143,
    _g4_s145 = (552u + sizeof(_g4_t_v320)) > _g4_s144 ? (552u + sizeof(_g4_t_v320)) : _g4_s144,
    _g4_s146 = (560u + sizeof(_g4_t_v321)) > _g4_s145 ? (560u + sizeof(_g4_t_v321)) : _g4_s145,
    _g4_s147 = (564u + sizeof(_g4_t_v322)) > _g4_s146 ? (564u + sizeof(_g4_t_v322)) : _g4_s146,
    _g4_s148 = (568u + sizeof(_g4_t_v323)) > _g4_s147 ? (568u + sizeof(_g4_t_v323)) : _g4_s147,
    _g4_s149 = (580u + sizeof(_g4_t_v324)) > _g4_s148 ? (580u + sizeof(_g4_t_v324)) : _g4_s148,
    _g4_s150 = (596u + sizeof(_g4_t_v325)) > _g4_s149 ? (596u + sizeof(_g4_t_v325)) : _g4_s149,
    _g4_s151 = (612u + sizeof(_g4_t_v326)) > _g4_s150 ? (612u + sizeof(_g4_t_v326)) : _g4_s150,
    _g4_s152 = (628u + sizeof(_g4_t_v327)) > _g4_s151 ? (628u + sizeof(_g4_t_v327)) : _g4_s151,
    _g4_s153 = (644u + sizeof(_g4_t_v328)) > _g4_s152 ? (644u + sizeof(_g4_t_v328)) : _g4_s152,
    _g4_s154 = (660u + sizeof(_g4_t_v329)) > _g4_s153 ? (660u + sizeof(_g4_t_v329)) : _g4_s153,
    _g4_s155 = (676u + sizeof(_g4_t_v330)) > _g4_s154 ? (676u + sizeof(_g4_t_v330)) : _g4_s154,
    _g4_s156 = (692u + sizeof(_g4_t_v331)) > _g4_s155 ? (692u + sizeof(_g4_t_v331)) : _g4_s155,
    _g4_s157 = (708u + sizeof(_g4_t_v332)) > _g4_s156 ? (708u + sizeof(_g4_t_v332)) : _g4_s156,
    _g4_s158 = (724u + sizeof(_g4_t_v333)) > _g4_s157 ? (724u + sizeof(_g4_t_v333)) : _g4_s157,
    _g4_s159 = (740u + sizeof(_g4_t_v334)) > _g4_s158 ? (740u + sizeof(_g4_t_v334)) : _g4_s158,
    _g4_s160 = (756u + sizeof(_g4_t_v335)) > _g4_s159 ? (756u + sizeof(_g4_t_v335)) : _g4_s159,
    _g4_s161 = (772u + sizeof(_g4_t_v336)) > _g4_s160 ? (772u + sizeof(_g4_t_v336)) : _g4_s160,
    _g4_s162 = (788u + sizeof(_g4_t_v337)) > _g4_s161 ? (788u + sizeof(_g4_t_v337)) : _g4_s161,
    _g4_s163 = (804u + sizeof(_g4_t_v338)) > _g4_s162 ? (804u + sizeof(_g4_t_v338)) : _g4_s162,
    _g4_s164 = (820u + sizeof(_g4_t_v339)) > _g4_s163 ? (820u + sizeof(_g4_t_v339)) : _g4_s163,
    _g4_s165 = (836u + sizeof(_g4_t_v340)) > _g4_s164 ? (836u + sizeof(_g4_t_v340)) : _g4_s164,
    _g4_s166 = (852u + sizeof(_g4_t_v341)) > _g4_s165 ? (852u + sizeof(_g4_t_v341)) : _g4_s165,
    _g4_s167 = (868u + sizeof(_g4_t_v342)) > _g4_s166 ? (868u + sizeof(_g4_t_v342)) : _g4_s166,
    _g4_s168 = (884u + sizeof(_g4_t_v343)) > _g4_s167 ? (884u + sizeof(_g4_t_v343)) : _g4_s167,
    _g4_s169 = (900u + sizeof(_g4_t_v344)) > _g4_s168 ? (900u + sizeof(_g4_t_v344)) : _g4_s168,
    _g4_s170 = (916u + sizeof(_g4_t_v345)) > _g4_s169 ? (916u + sizeof(_g4_t_v345)) : _g4_s169,
    _g4_s171 = (932u + sizeof(_g4_t_v346)) > _g4_s170 ? (932u + sizeof(_g4_t_v346)) : _g4_s170,
    _g4_s172 = (948u + sizeof(_g4_t_v347)) > _g4_s171 ? (948u + sizeof(_g4_t_v347)) : _g4_s171,
    _g4_s173 = (964u + sizeof(_g4_t_v348)) > _g4_s172 ? (964u + sizeof(_g4_t_v348)) : _g4_s172,
    _g4_s174 = (980u + sizeof(_g4_t_v349)) > _g4_s173 ? (980u + sizeof(_g4_t_v349)) : _g4_s173,
    _g4_s175 = (996u + sizeof(_g4_t_v350)) > _g4_s174 ? (996u + sizeof(_g4_t_v350)) : _g4_s174,
    _g4_s176 = (1012u + sizeof(_g4_t_v351)) > _g4_s175 ? (1012u + sizeof(_g4_t_v351)) : _g4_s175,
    _g4_s177 = (1028u + sizeof(_g4_t_v352)) > _g4_s176 ? (1028u + sizeof(_g4_t_v352)) : _g4_s176,
    _g4_s178 = (1044u + sizeof(_g4_t_v353)) > _g4_s177 ? (1044u + sizeof(_g4_t_v353)) : _g4_s177,
    _g4_s179 = (1060u + sizeof(_g4_t_v354)) > _g4_s178 ? (1060u + sizeof(_g4_t_v354)) : _g4_s178,
    _g4_s180 = (1076u + sizeof(_g4_t_v355)) > _g4_s179 ? (1076u + sizeof(_g4_t_v355)) : _g4_s179,
    _g4_s181 = (1096u + sizeof(_g4_t_v356)) > _g4_s180 ? (1096u + sizeof(_g4_t_v356)) : _g4_s180,
    _g4_s182 = (1116u + sizeof(_g4_t_v357)) > _g4_s181 ? (1116u + sizeof(_g4_t_v357)) : _g4_s181,
    _g4_s183 = (1136u + sizeof(_g4_t_v358)) > _g4_s182 ? (1136u + sizeof(_g4_t_v358)) : _g4_s182,
    _g4_s184 = (1156u + sizeof(_g4_t_v359)) > _g4_s183 ? (1156u + sizeof(_g4_t_v359)) : _g4_s183,
    _g4_s185 = (1176u + sizeof(_g4_t_v360)) > _g4_s184 ? (1176u + sizeof(_g4_t_v360)) : _g4_s184,
    _g4_s186 = (1196u + sizeof(_g4_t_v361)) > _g4_s185 ? (1196u + sizeof(_g4_t_v361)) : _g4_s185,
    _g4_s187 = (1216u + sizeof(_g4_t_v362)) > _g4_s186 ? (1216u + sizeof(_g4_t_v362)) : _g4_s186,
    _g4_s188 = (1220u + sizeof(_g4_t_v363)) > _g4_s187 ? (1220u + sizeof(_g4_t_v363)) : _g4_s187,
    _g4_s189 = (1226u + sizeof(_g4_t_v364)) > _g4_s188 ? (1226u + sizeof(_g4_t_v364)) : _g4_s188,
    _g4_s190 = (1228u + sizeof(_g4_t_v365)) > _g4_s189 ? (1228u + sizeof(_g4_t_v365)) : _g4_s189,
    _g4_s191 = (1234u + sizeof(_g4_t_v366)) > _g4_s190 ? (1234u + sizeof(_g4_t_v366)) : _g4_s190,
    _g4_s192 = (1236u + sizeof(_g4_t_v367)) > _g4_s191 ? (1236u + sizeof(_g4_t_v367)) : _g4_s191,
    _g4_s193 = (1242u + sizeof(_g4_t_v368)) > _g4_s192 ? (1242u + sizeof(_g4_t_v368)) : _g4_s192,
    _g4_s194 = (1244u + sizeof(_g4_t_v369)) > _g4_s193 ? (1244u + sizeof(_g4_t_v369)) : _g4_s193,
    _g4_s195 = (1250u + sizeof(_g4_t_v370)) > _g4_s194 ? (1250u + sizeof(_g4_t_v370)) : _g4_s194,
    _g4_s196 = (1252u + sizeof(_g4_t_v371)) > _g4_s195 ? (1252u + sizeof(_g4_t_v371)) : _g4_s195,
    _g4_s197 = (1258u + sizeof(_g4_t_v372)) > _g4_s196 ? (1258u + sizeof(_g4_t_v372)) : _g4_s196,
    _g4_s198 = (1260u + sizeof(_g4_t_v373)) > _g4_s197 ? (1260u + sizeof(_g4_t_v373)) : _g4_s197,
    _g4_s199 = (1266u + sizeof(_g4_t_v374)) > _g4_s198 ? (1266u + sizeof(_g4_t_v374)) : _g4_s198,
    _g4_s200 = (1268u + sizeof(_g4_t_v375)) > _g4_s199 ? (1268u + sizeof(_g4_t_v375)) : _g4_s199,
    _g4_s201 = (1274u + sizeof(_g4_t_v376)) > _g4_s200 ? (1274u + sizeof(_g4_t_v376)) : _g4_s200,
    _g4_s202 = (1276u + sizeof(_g4_t_v377)) > _g4_s201 ? (1276u + sizeof(_g4_t_v377)) : _g4_s201,
    _g4_s203 = (1282u + sizeof(_g4_t_v378)) > _g4_s202 ? (1282u + sizeof(_g4_t_v378)) : _g4_s202,
    _g4_s204 = (1284u + sizeof(_g4_t_v379)) > _g4_s203 ? (1284u + sizeof(_g4_t_v379)) : _g4_s203,
    _g4_s205 = (1290u + sizeof(_g4_t_v380)) > _g4_s204 ? (1290u + sizeof(_g4_t_v380)) : _g4_s204,
    _g4_s206 = (1292u + sizeof(_g4_t_v381)) > _g4_s205 ? (1292u + sizeof(_g4_t_v381)) : _g4_s205,
    _g4_s207 = (1298u + sizeof(_g4_t_v382)) > _g4_s206 ? (1298u + sizeof(_g4_t_v382)) : _g4_s206,
    _g4_s208 = (1300u + sizeof(_g4_t_v383)) > _g4_s207 ? (1300u + sizeof(_g4_t_v383)) : _g4_s207,
    _g4_s209 = (1306u + sizeof(_g4_t_v384)) > _g4_s208 ? (1306u + sizeof(_g4_t_v384)) : _g4_s208,
    _g4_s210 = (1308u + sizeof(_g4_t_v385)) > _g4_s209 ? (1308u + sizeof(_g4_t_v385)) : _g4_s209,
    _g4_s211 = (1312u + sizeof(_g4_t_v386)) > _g4_s210 ? (1312u + sizeof(_g4_t_v386)) : _g4_s210,
    _g4_s212 = (1316u + sizeof(_g4_t_v387)) > _g4_s211 ? (1316u + sizeof(_g4_t_v387)) : _g4_s211,
    _g4_s213 = (1320u + sizeof(_g4_t_v388)) > _g4_s212 ? (1320u + sizeof(_g4_t_v388)) : _g4_s212,
    _g4_s214 = (1324u + sizeof(_g4_t_v389)) > _g4_s213 ? (1324u + sizeof(_g4_t_v389)) : _g4_s213,
    _g4_s215 = (1328u + sizeof(_g4_t_v390)) > _g4_s214 ? (1328u + sizeof(_g4_t_v390)) : _g4_s214,
    _g4_s216 = (1332u + sizeof(_g4_t_v391)) > _g4_s215 ? (1332u + sizeof(_g4_t_v391)) : _g4_s215,
    _g4_s217 = (1336u + sizeof(_g4_t_v392)) > _g4_s216 ? (1336u + sizeof(_g4_t_v392)) : _g4_s216,
    _g4_s218 = (1340u + sizeof(_g4_t_v393)) > _g4_s217 ? (1340u + sizeof(_g4_t_v393)) : _g4_s217,
    _g4_s219 = (1344u + sizeof(_g4_t_v394)) > _g4_s218 ? (1344u + sizeof(_g4_t_v394)) : _g4_s218,
    _g4_s220 = (1354u + sizeof(_g4_t_v395)) > _g4_s219 ? (1354u + sizeof(_g4_t_v395)) : _g4_s219,
    _g4_s221 = (1356u + sizeof(_g4_t_v396)) > _g4_s220 ? (1356u + sizeof(_g4_t_v396)) : _g4_s220,
    _g4_s222 = (1362u + sizeof(_g4_t_v397)) > _g4_s221 ? (1362u + sizeof(_g4_t_v397)) : _g4_s221,
    _g4_s223 = (1364u + sizeof(_g4_t_v398)) > _g4_s222 ? (1364u + sizeof(_g4_t_v398)) : _g4_s222,
    _g4_s224 = (1370u + sizeof(_g4_t_v399)) > _g4_s223 ? (1370u + sizeof(_g4_t_v399)) : _g4_s223,
    _g4_s225 = (1372u + sizeof(_g4_t_v400)) > _g4_s224 ? (1372u + sizeof(_g4_t_v400)) : _g4_s224,
    _g4_s226 = (1378u + sizeof(_g4_t_v401)) > _g4_s225 ? (1378u + sizeof(_g4_t_v401)) : _g4_s225,
    _g4_s227 = (1390u + sizeof(_g4_t_v402)) > _g4_s226 ? (1390u + sizeof(_g4_t_v402)) : _g4_s226,
    _g4_s228 = (1392u + sizeof(_g4_t_v403)) > _g4_s227 ? (1392u + sizeof(_g4_t_v403)) : _g4_s227,
    _g4_s229 = (1398u + sizeof(_g4_t_v404)) > _g4_s228 ? (1398u + sizeof(_g4_t_v404)) : _g4_s228,
    _g4_s230 = (1410u + sizeof(_g4_t_v405)) > _g4_s229 ? (1410u + sizeof(_g4_t_v405)) : _g4_s229,
    _g4_s231 = (1412u + sizeof(_g4_t_v406)) > _g4_s230 ? (1412u + sizeof(_g4_t_v406)) : _g4_s230,
    _g4_s232 = (1418u + sizeof(_g4_t_v407)) > _g4_s231 ? (1418u + sizeof(_g4_t_v407)) : _g4_s231,
    _g4_s233 = (1420u + sizeof(_g4_t_v408)) > _g4_s232 ? (1420u + sizeof(_g4_t_v408)) : _g4_s232,
    _g4_s234 = (1424u + sizeof(_g4_t_v409)) > _g4_s233 ? (1424u + sizeof(_g4_t_v409)) : _g4_s233,
    _g4_s235 = (1432u + sizeof(_g4_t_v410)) > _g4_s234 ? (1432u + sizeof(_g4_t_v410)) : _g4_s234,
    _g4_s236 = (1452u + sizeof(_g4_t_v411)) > _g4_s235 ? (1452u + sizeof(_g4_t_v411)) : _g4_s235,
    _g4_s237 = (1458u + sizeof(_g4_t_v412)) > _g4_s236 ? (1458u + sizeof(_g4_t_v412)) : _g4_s236,
    _g4_s238 = (1460u + sizeof(_g4_t_v413)) > _g4_s237 ? (1460u + sizeof(_g4_t_v413)) : _g4_s237,
    _g4_s239 = (1466u + sizeof(_g4_t_v414)) > _g4_s238 ? (1466u + sizeof(_g4_t_v414)) : _g4_s238,
    _g4_s240 = (1468u + sizeof(_g4_t_v415)) > _g4_s239 ? (1468u + sizeof(_g4_t_v415)) : _g4_s239,
    _g4_s241 = (1472u + sizeof(_g4_t_v416)) > _g4_s240 ? (1472u + sizeof(_g4_t_v416)) : _g4_s240,
    _g4_s242 = (1476u + sizeof(_g4_t_v417)) > _g4_s241 ? (1476u + sizeof(_g4_t_v417)) : _g4_s241,
    _g4_s243 = (1480u + sizeof(_g4_t_v418)) > _g4_s242 ? (1480u + sizeof(_g4_t_v418)) : _g4_s242
  };
  alignas(16) uint8_t _g4_sf[_g4_s243];
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 0u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 16u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 16u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 16u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 16u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 16u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 16u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 16u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 16u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 16u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 16u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 16u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 16u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 16u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 16u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 16u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 16u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 16u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 16u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 16u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 16u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 24u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 28u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 36u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 40u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 40u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 44u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 48u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 52u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 56u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 64u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 64u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 64u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 64u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 68u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 68u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 68u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 72u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 72u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 72u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 72u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 72u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 72u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 72u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 72u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 72u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 72u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 72u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 72u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 72u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 72u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 72u);
  _g4_t_ReductionPercent &ReductionPercent = *reinterpret_cast<_g4_t_ReductionPercent *>(_g4_sf + 72u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 72u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 72u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 89u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 92u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 96u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 100u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 104u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 108u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 112u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 120u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 124u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 128u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 132u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 136u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 140u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 144u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 148u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 152u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 156u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 160u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 164u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 168u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 172u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 176u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 180u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 192u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 208u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 212u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 216u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 220u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 224u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 228u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 232u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 236u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 240u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 244u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 248u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 252u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 256u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 260u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 264u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 268u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 272u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 276u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 280u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 284u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 288u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 292u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 296u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 300u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 304u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 308u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 312u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 316u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 320u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 324u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 328u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 332u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 336u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 340u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 344u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 348u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 352u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 356u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 360u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 364u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 368u);
  _g4_t_v296 &v296 = *reinterpret_cast<_g4_t_v296 *>(_g4_sf + 372u);
  _g4_t_v297 &v297 = *reinterpret_cast<_g4_t_v297 *>(_g4_sf + 376u);
  _g4_t_v298 &v298 = *reinterpret_cast<_g4_t_v298 *>(_g4_sf + 380u);
  _g4_t_v299 &v299 = *reinterpret_cast<_g4_t_v299 *>(_g4_sf + 384u);
  _g4_t_v300 &v300 = *reinterpret_cast<_g4_t_v300 *>(_g4_sf + 392u);
  _g4_t_v301 &v301 = *reinterpret_cast<_g4_t_v301 *>(_g4_sf + 400u);
  _g4_t_v302 &v302 = *reinterpret_cast<_g4_t_v302 *>(_g4_sf + 408u);
  _g4_t_v303 &v303 = *reinterpret_cast<_g4_t_v303 *>(_g4_sf + 416u);
  _g4_t_v304 &v304 = *reinterpret_cast<_g4_t_v304 *>(_g4_sf + 424u);
  _g4_t_v305 &v305 = *reinterpret_cast<_g4_t_v305 *>(_g4_sf + 432u);
  _g4_t_v306 &v306 = *reinterpret_cast<_g4_t_v306 *>(_g4_sf + 440u);
  _g4_t_v307 &v307 = *reinterpret_cast<_g4_t_v307 *>(_g4_sf + 448u);
  _g4_t_v308 &v308 = *reinterpret_cast<_g4_t_v308 *>(_g4_sf + 456u);
  _g4_t_v309 &v309 = *reinterpret_cast<_g4_t_v309 *>(_g4_sf + 464u);
  _g4_t_v310 &v310 = *reinterpret_cast<_g4_t_v310 *>(_g4_sf + 472u);
  _g4_t_v311 &v311 = *reinterpret_cast<_g4_t_v311 *>(_g4_sf + 480u);
  _g4_t_v312 &v312 = *reinterpret_cast<_g4_t_v312 *>(_g4_sf + 488u);
  _g4_t_v313 &v313 = *reinterpret_cast<_g4_t_v313 *>(_g4_sf + 496u);
  _g4_t_v314 &v314 = *reinterpret_cast<_g4_t_v314 *>(_g4_sf + 504u);
  _g4_t_v315 &v315 = *reinterpret_cast<_g4_t_v315 *>(_g4_sf + 512u);
  _g4_t_v316 &v316 = *reinterpret_cast<_g4_t_v316 *>(_g4_sf + 520u);
  _g4_t_v317 &v317 = *reinterpret_cast<_g4_t_v317 *>(_g4_sf + 528u);
  _g4_t_v318 &v318 = *reinterpret_cast<_g4_t_v318 *>(_g4_sf + 536u);
  _g4_t_v319 &v319 = *reinterpret_cast<_g4_t_v319 *>(_g4_sf + 544u);
  _g4_t_v320 &v320 = *reinterpret_cast<_g4_t_v320 *>(_g4_sf + 552u);
  _g4_t_v321 &v321 = *reinterpret_cast<_g4_t_v321 *>(_g4_sf + 560u);
  _g4_t_v322 &v322 = *reinterpret_cast<_g4_t_v322 *>(_g4_sf + 564u);
  _g4_t_v323 &v323 = *reinterpret_cast<_g4_t_v323 *>(_g4_sf + 568u);
  _g4_t_v324 &v324 = *reinterpret_cast<_g4_t_v324 *>(_g4_sf + 580u);
  _g4_t_v325 &v325 = *reinterpret_cast<_g4_t_v325 *>(_g4_sf + 596u);
  _g4_t_v326 &v326 = *reinterpret_cast<_g4_t_v326 *>(_g4_sf + 612u);
  _g4_t_v327 &v327 = *reinterpret_cast<_g4_t_v327 *>(_g4_sf + 628u);
  _g4_t_v328 &v328 = *reinterpret_cast<_g4_t_v328 *>(_g4_sf + 644u);
  _g4_t_v329 &v329 = *reinterpret_cast<_g4_t_v329 *>(_g4_sf + 660u);
  _g4_t_v330 &v330 = *reinterpret_cast<_g4_t_v330 *>(_g4_sf + 676u);
  _g4_t_v331 &v331 = *reinterpret_cast<_g4_t_v331 *>(_g4_sf + 692u);
  _g4_t_v332 &v332 = *reinterpret_cast<_g4_t_v332 *>(_g4_sf + 708u);
  _g4_t_v333 &v333 = *reinterpret_cast<_g4_t_v333 *>(_g4_sf + 724u);
  _g4_t_v334 &v334 = *reinterpret_cast<_g4_t_v334 *>(_g4_sf + 740u);
  _g4_t_v335 &v335 = *reinterpret_cast<_g4_t_v335 *>(_g4_sf + 756u);
  _g4_t_v336 &v336 = *reinterpret_cast<_g4_t_v336 *>(_g4_sf + 772u);
  _g4_t_v337 &v337 = *reinterpret_cast<_g4_t_v337 *>(_g4_sf + 788u);
  _g4_t_v338 &v338 = *reinterpret_cast<_g4_t_v338 *>(_g4_sf + 804u);
  _g4_t_v339 &v339 = *reinterpret_cast<_g4_t_v339 *>(_g4_sf + 820u);
  _g4_t_v340 &v340 = *reinterpret_cast<_g4_t_v340 *>(_g4_sf + 836u);
  _g4_t_v341 &v341 = *reinterpret_cast<_g4_t_v341 *>(_g4_sf + 852u);
  _g4_t_v342 &v342 = *reinterpret_cast<_g4_t_v342 *>(_g4_sf + 868u);
  _g4_t_v343 &v343 = *reinterpret_cast<_g4_t_v343 *>(_g4_sf + 884u);
  _g4_t_v344 &v344 = *reinterpret_cast<_g4_t_v344 *>(_g4_sf + 900u);
  _g4_t_v345 &v345 = *reinterpret_cast<_g4_t_v345 *>(_g4_sf + 916u);
  _g4_t_v346 &v346 = *reinterpret_cast<_g4_t_v346 *>(_g4_sf + 932u);
  _g4_t_v347 &v347 = *reinterpret_cast<_g4_t_v347 *>(_g4_sf + 948u);
  _g4_t_v348 &v348 = *reinterpret_cast<_g4_t_v348 *>(_g4_sf + 964u);
  _g4_t_v349 &v349 = *reinterpret_cast<_g4_t_v349 *>(_g4_sf + 980u);
  _g4_t_v350 &v350 = *reinterpret_cast<_g4_t_v350 *>(_g4_sf + 996u);
  _g4_t_v351 &v351 = *reinterpret_cast<_g4_t_v351 *>(_g4_sf + 1012u);
  _g4_t_v352 &v352 = *reinterpret_cast<_g4_t_v352 *>(_g4_sf + 1028u);
  _g4_t_v353 &v353 = *reinterpret_cast<_g4_t_v353 *>(_g4_sf + 1044u);
  _g4_t_v354 &v354 = *reinterpret_cast<_g4_t_v354 *>(_g4_sf + 1060u);
  _g4_t_v355 &v355 = *reinterpret_cast<_g4_t_v355 *>(_g4_sf + 1076u);
  _g4_t_v356 &v356 = *reinterpret_cast<_g4_t_v356 *>(_g4_sf + 1096u);
  _g4_t_v357 &v357 = *reinterpret_cast<_g4_t_v357 *>(_g4_sf + 1116u);
  _g4_t_v358 &v358 = *reinterpret_cast<_g4_t_v358 *>(_g4_sf + 1136u);
  _g4_t_v359 &v359 = *reinterpret_cast<_g4_t_v359 *>(_g4_sf + 1156u);
  _g4_t_v360 &v360 = *reinterpret_cast<_g4_t_v360 *>(_g4_sf + 1176u);
  _g4_t_v361 &v361 = *reinterpret_cast<_g4_t_v361 *>(_g4_sf + 1196u);
  _g4_t_v362 &v362 = *reinterpret_cast<_g4_t_v362 *>(_g4_sf + 1216u);
  _g4_t_v363 &v363 = *reinterpret_cast<_g4_t_v363 *>(_g4_sf + 1220u);
  _g4_t_v364 &v364 = *reinterpret_cast<_g4_t_v364 *>(_g4_sf + 1226u);
  _g4_t_v365 &v365 = *reinterpret_cast<_g4_t_v365 *>(_g4_sf + 1228u);
  _g4_t_v366 &v366 = *reinterpret_cast<_g4_t_v366 *>(_g4_sf + 1234u);
  _g4_t_v367 &v367 = *reinterpret_cast<_g4_t_v367 *>(_g4_sf + 1236u);
  _g4_t_v368 &v368 = *reinterpret_cast<_g4_t_v368 *>(_g4_sf + 1242u);
  _g4_t_v369 &v369 = *reinterpret_cast<_g4_t_v369 *>(_g4_sf + 1244u);
  _g4_t_v370 &v370 = *reinterpret_cast<_g4_t_v370 *>(_g4_sf + 1250u);
  _g4_t_v371 &v371 = *reinterpret_cast<_g4_t_v371 *>(_g4_sf + 1252u);
  _g4_t_v372 &v372 = *reinterpret_cast<_g4_t_v372 *>(_g4_sf + 1258u);
  _g4_t_v373 &v373 = *reinterpret_cast<_g4_t_v373 *>(_g4_sf + 1260u);
  _g4_t_v374 &v374 = *reinterpret_cast<_g4_t_v374 *>(_g4_sf + 1266u);
  _g4_t_v375 &v375 = *reinterpret_cast<_g4_t_v375 *>(_g4_sf + 1268u);
  _g4_t_v376 &v376 = *reinterpret_cast<_g4_t_v376 *>(_g4_sf + 1274u);
  _g4_t_v377 &v377 = *reinterpret_cast<_g4_t_v377 *>(_g4_sf + 1276u);
  _g4_t_v378 &v378 = *reinterpret_cast<_g4_t_v378 *>(_g4_sf + 1282u);
  _g4_t_v379 &v379 = *reinterpret_cast<_g4_t_v379 *>(_g4_sf + 1284u);
  _g4_t_v380 &v380 = *reinterpret_cast<_g4_t_v380 *>(_g4_sf + 1290u);
  _g4_t_v381 &v381 = *reinterpret_cast<_g4_t_v381 *>(_g4_sf + 1292u);
  _g4_t_v382 &v382 = *reinterpret_cast<_g4_t_v382 *>(_g4_sf + 1298u);
  _g4_t_v383 &v383 = *reinterpret_cast<_g4_t_v383 *>(_g4_sf + 1300u);
  _g4_t_v384 &v384 = *reinterpret_cast<_g4_t_v384 *>(_g4_sf + 1306u);
  _g4_t_v385 &v385 = *reinterpret_cast<_g4_t_v385 *>(_g4_sf + 1308u);
  _g4_t_v386 &v386 = *reinterpret_cast<_g4_t_v386 *>(_g4_sf + 1312u);
  _g4_t_v387 &v387 = *reinterpret_cast<_g4_t_v387 *>(_g4_sf + 1316u);
  _g4_t_v388 &v388 = *reinterpret_cast<_g4_t_v388 *>(_g4_sf + 1320u);
  _g4_t_v389 &v389 = *reinterpret_cast<_g4_t_v389 *>(_g4_sf + 1324u);
  _g4_t_v390 &v390 = *reinterpret_cast<_g4_t_v390 *>(_g4_sf + 1328u);
  _g4_t_v391 &v391 = *reinterpret_cast<_g4_t_v391 *>(_g4_sf + 1332u);
  _g4_t_v392 &v392 = *reinterpret_cast<_g4_t_v392 *>(_g4_sf + 1336u);
  _g4_t_v393 &v393 = *reinterpret_cast<_g4_t_v393 *>(_g4_sf + 1340u);
  _g4_t_v394 &v394 = *reinterpret_cast<_g4_t_v394 *>(_g4_sf + 1344u);
  _g4_t_v395 &v395 = *reinterpret_cast<_g4_t_v395 *>(_g4_sf + 1354u);
  _g4_t_v396 &v396 = *reinterpret_cast<_g4_t_v396 *>(_g4_sf + 1356u);
  _g4_t_v397 &v397 = *reinterpret_cast<_g4_t_v397 *>(_g4_sf + 1362u);
  _g4_t_v398 &v398 = *reinterpret_cast<_g4_t_v398 *>(_g4_sf + 1364u);
  _g4_t_v399 &v399 = *reinterpret_cast<_g4_t_v399 *>(_g4_sf + 1370u);
  _g4_t_v400 &v400 = *reinterpret_cast<_g4_t_v400 *>(_g4_sf + 1372u);
  _g4_t_v401 &v401 = *reinterpret_cast<_g4_t_v401 *>(_g4_sf + 1378u);
  _g4_t_v402 &v402 = *reinterpret_cast<_g4_t_v402 *>(_g4_sf + 1390u);
  _g4_t_v403 &v403 = *reinterpret_cast<_g4_t_v403 *>(_g4_sf + 1392u);
  _g4_t_v404 &v404 = *reinterpret_cast<_g4_t_v404 *>(_g4_sf + 1398u);
  _g4_t_v405 &v405 = *reinterpret_cast<_g4_t_v405 *>(_g4_sf + 1410u);
  _g4_t_v406 &v406 = *reinterpret_cast<_g4_t_v406 *>(_g4_sf + 1412u);
  _g4_t_v407 &v407 = *reinterpret_cast<_g4_t_v407 *>(_g4_sf + 1418u);
  _g4_t_v408 &v408 = *reinterpret_cast<_g4_t_v408 *>(_g4_sf + 1420u);
  _g4_t_v409 &v409 = *reinterpret_cast<_g4_t_v409 *>(_g4_sf + 1424u);
  _g4_t_v410 &v410 = *reinterpret_cast<_g4_t_v410 *>(_g4_sf + 1432u);
  _g4_t_v411 &v411 = *reinterpret_cast<_g4_t_v411 *>(_g4_sf + 1452u);
  _g4_t_v412 &v412 = *reinterpret_cast<_g4_t_v412 *>(_g4_sf + 1458u);
  _g4_t_v413 &v413 = *reinterpret_cast<_g4_t_v413 *>(_g4_sf + 1460u);
  _g4_t_v414 &v414 = *reinterpret_cast<_g4_t_v414 *>(_g4_sf + 1466u);
  _g4_t_v415 &v415 = *reinterpret_cast<_g4_t_v415 *>(_g4_sf + 1468u);
  _g4_t_v416 &v416 = *reinterpret_cast<_g4_t_v416 *>(_g4_sf + 1472u);
  _g4_t_v417 &v417 = *reinterpret_cast<_g4_t_v417 *>(_g4_sf + 1476u);
  _g4_t_v418 &v418 = *reinterpret_cast<_g4_t_v418 *>(_g4_sf + 1480u);

  v418[36] = (uint32_t)(uintptr_t)(&a1);
  v210 = a1;
  v197 = a2;
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v355);
  if ( (uint8_t)glwebtools::JsonWriter::isArray((glwebtools::JsonWriter::Self *)v355) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v325), &loc_6);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v355);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v325);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v325);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
  v3 = (glwebtools::Self *)glwebtools::opShl((glwebtools::JsonWriter::Self *)v394, "items");
  if ( glwebtools::IsOperationSuccess(v3) )
  {
    v4 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
    v5 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v355);
    glwebtools::Json::Value::append(v5, v4);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
  glwebtools::JsonWriter::opIndex((glwebtools::JsonWriter::Self *)v356, (glwebtools::JsonWriter::Self *)v355, "items");
  v6 = *((char **)v210 + 7);
  v198 = v210 + 20;
  if ( v6 != v210 + 20 )
  {
    v7 = v362;
    do
    {
      if ( (uint8_t)glwebtools::JsonWriter::isArray((glwebtools::JsonWriter::Self *)v356) == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v327), &loc_6);
        v8 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v356);
        glwebtools::Json::Value::opAssign(v8, (const glwebtools::Json::Value::Self *)v327);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v327);
      }
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v7);
      glwebtools::Json::Value::Construct((int)(uintptr_t)(v326), nullptr);
      v9 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
      glwebtools::Json::Value::opAssign(v9, (const glwebtools::Json::Value::Self *)v326);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v326);
      if ( v6[30] != 0 && *(uint32_t *)(*((uint32_t *)v6 + 6) - 12) != 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v277), "id", (int)(uintptr_t)(&v234) + 1);
        v278 = (int)(uintptr_t)(v6 + 24);
        g4_std::string::construct_copy(v299, &v277);
        v299[1] = v278;
        v230 = v278;
        if ( *(uint8_t *)(v278 + 6) != 0 )
        {
          if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v7) == 0 )
          {
            glwebtools::Json::Value::Construct((int)(uintptr_t)(v333), (char *)&loc_6 + 1);
            v168 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            glwebtools::Json::Value::opAssign(v168, (const glwebtools::Json::Value::Self *)v333);
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v333);
          }
          glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
          v169 = -2147483646;
          if ( *(uint8_t *)(v230 + 6) != 0 )
            v169 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, v230);
          if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v169) )
          {
            v196 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
            v170 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            v171 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v170, (char **)v299);
            glwebtools::Json::Value::opAssign(v171, v196);
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
        }
        g4_std::string::Destroy(v299);
        g4_std::string::Destroy(&v277);
      }
      if ( v6[54] == 0 || *(uint32_t *)(*((uint32_t *)v6 + 12) - 12) != 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v279), "title", (int)(uintptr_t)(&v234) + 2);
        v280 = (int)(uintptr_t)(v6 + 48);
        g4_std::string::construct_copy(v300, &v279);
        v300[1] = v280;
        v223 = v280;
        if ( *(uint8_t *)(v280 + 6) != 0 )
        {
          if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v7) == 0 )
          {
            glwebtools::Json::Value::Construct((int)(uintptr_t)(v334), (char *)&loc_6 + 1);
            v130 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            glwebtools::Json::Value::opAssign(v130, (const glwebtools::Json::Value::Self *)v334);
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v334);
          }
          glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
          v131 = nullptr;
          if ( *(uint8_t *)(v223 + 6) != 0 )
            v131 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, v223);
          if ( glwebtools::IsOperationSuccess(v131) )
          {
            v195 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
            v132 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            v133 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v132, (char **)v300);
            glwebtools::Json::Value::opAssign(v133, v195);
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
        }
        g4_std::string::Destroy(v300);
        g4_std::string::Destroy(&v279);
      }
      if ( v6[46] != 0 && *(uint32_t *)(*((uint32_t *)v6 + 10) - 12) != 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v281), "description", (int)(uintptr_t)(&v234) + 3);
        v282 = (int)(uintptr_t)(v6 + 40);
        g4_std::string::construct_copy(v301, &v281);
        v301[1] = v282;
        v224 = v282;
        if ( *(uint8_t *)(v282 + 6) != 0 )
        {
          if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v7) == 0 )
          {
            glwebtools::Json::Value::Construct((int)(uintptr_t)(v335), (char *)&loc_6 + 1);
            v126 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            glwebtools::Json::Value::opAssign(v126, (const glwebtools::Json::Value::Self *)v335);
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v335);
          }
          glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
          v127 = -2147483646;
          if ( *(uint8_t *)(v224 + 6) != 0 )
            v127 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, v224);
          if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v127) )
          {
            v194 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
            v128 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            v129 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v128, (char **)v301);
            glwebtools::Json::Value::opAssign(v129, v194);
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
        }
        g4_std::string::Destroy(v301);
        g4_std::string::Destroy(&v281);
      }
      if ( v6[38] == 0 || *(uint32_t *)(*((uint32_t *)v6 + 8) - 12) != 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v283), "virtual_cash_type", (int)(uintptr_t)(&v235));
        v284 = (int)(uintptr_t)(v6 + 32);
        g4_std::string::construct_copy(v302, &v283);
        v302[1] = v284;
        v222 = v284;
        if ( *(uint8_t *)(v284 + 6) != 0 )
        {
          if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v7) == 0 )
          {
            glwebtools::Json::Value::Construct((int)(uintptr_t)(v336), (char *)&loc_6 + 1);
            v122 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            glwebtools::Json::Value::opAssign(v122, (const glwebtools::Json::Value::Self *)v336);
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v336);
          }
          glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
          v123 = nullptr;
          if ( *(uint8_t *)(v222 + 6) != 0 )
            v123 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, v222);
          if ( glwebtools::IsOperationSuccess(v123) )
          {
            v193 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
            v124 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            v125 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v124, (char **)v302);
            glwebtools::Json::Value::opAssign(v125, v193);
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
        }
        g4_std::string::Destroy(v302);
        g4_std::string::Destroy(&v283);
      }
      if ( v6[62] == 0 || *(uint32_t *)(*((uint32_t *)v6 + 14) - 12) != 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v285), "preview", (int)(uintptr_t)(&v235) + 1);
        v286 = (int)(uintptr_t)(v6 + 56);
        g4_std::string::construct_copy(v303, &v285);
        v303[1] = v286;
        v221 = v286;
        if ( *(uint8_t *)(v286 + 6) != 0 )
        {
          if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v7) == 0 )
          {
            glwebtools::Json::Value::Construct((int)(uintptr_t)(v337), (char *)&loc_6 + 1);
            v112 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            glwebtools::Json::Value::opAssign(v112, (const glwebtools::Json::Value::Self *)v337);
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v337);
          }
          glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
          v113 = nullptr;
          if ( *(uint8_t *)(v221 + 6) != 0 )
            v113 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, v221);
          if ( glwebtools::IsOperationSuccess(v113) )
          {
            v189 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
            v114 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            v115 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v114, (char **)v303);
            glwebtools::Json::Value::opAssign(v115, v189);
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
        }
        g4_std::string::Destroy(v303);
        g4_std::string::Destroy(&v285);
      }
      if ( v6[94] != 0 && *((int *)v6 + 22) > 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v287), "amount", (int)(uintptr_t)(&v235) + 2);
        v288 = (int)(uintptr_t)(v6 + 88);
        g4_std::string::construct_copy(v304, &v287);
        v304[1] = v288;
        if ( *(uint8_t *)(v288 + 6) != 0 )
        {
          v190 = (glwebtools::Json::Value::Self *)v288;
          isObject = glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v7);
          v117 = v190;
          if ( isObject == 0 )
          {
            glwebtools::Json::Value::Construct((int)(uintptr_t)(v338), (char *)&loc_6 + 1);
            v118 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            glwebtools::Json::Value::opAssign(v118, (const glwebtools::Json::Value::Self *)v338);
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v338);
            v117 = v190;
          }
          v191 = v117;
          glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
          v119 = -2147483646;
          if ( *((uint8_t *)v191 + 6) != 0 )
            v119 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, *(uint32_t *)v191);
          if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v119) )
          {
            v192 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
            v120 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            v121 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v120, (char **)v304);
            glwebtools::Json::Value::opAssign(v121, v192);
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
        }
        g4_std::string::Destroy(v304);
        g4_std::string::Destroy(&v287);
      }
      if ( v6[102] == 0 || *((int *)v6 + 24) > 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v289), "base_amount", (int)(uintptr_t)(&v235) + 3);
        v290 = (int)(uintptr_t)(v6 + 96);
        g4_std::string::construct_copy(v305, &v289);
        v305[1] = v290;
        if ( *(uint8_t *)(v290 + 6) != 0 )
        {
          v186 = (glwebtools::Json::Value::Self *)v290;
          v106 = glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v7);
          v107 = v186;
          if ( v106 == 0 )
          {
            glwebtools::Json::Value::Construct((int)(uintptr_t)(v339), (char *)&loc_6 + 1);
            v108 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            glwebtools::Json::Value::opAssign(v108, (const glwebtools::Json::Value::Self *)v339);
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v339);
            v107 = v186;
          }
          v187 = v107;
          glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
          v109 = nullptr;
          if ( *((uint8_t *)v187 + 6) != 0 )
            v109 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, *(uint32_t *)v187);
          if ( glwebtools::IsOperationSuccess(v109) )
          {
            v188 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
            v110 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            v111 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v110, (char **)v305);
            glwebtools::Json::Value::opAssign(v111, v188);
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
        }
        g4_std::string::Destroy(v305);
        g4_std::string::Destroy(&v289);
      }
      if ( v6[110] == 0 || *((int *)v6 + 26) > 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v291), "promo_amount", (int)(uintptr_t)(&v236));
        v292 = (int)(uintptr_t)(v6 + 104);
        g4_std::string::construct_copy(v306, &v291);
        v306[1] = v292;
        if ( *(uint8_t *)(v292 + 6) != 0 )
        {
          v183 = (glwebtools::Json::Value::Self *)v292;
          v100 = glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v7);
          v101 = v183;
          if ( v100 == 0 )
          {
            glwebtools::Json::Value::Construct((int)(uintptr_t)(v340), (char *)&loc_6 + 1);
            v102 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            glwebtools::Json::Value::opAssign(v102, (const glwebtools::Json::Value::Self *)v340);
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v340);
            v101 = v183;
          }
          v184 = v101;
          glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
          v103 = nullptr;
          if ( *((uint8_t *)v184 + 6) != 0 )
            v103 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, *(uint32_t *)v184);
          if ( glwebtools::IsOperationSuccess(v103) )
          {
            v185 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
            v104 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            v105 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v104, (char **)v306);
            glwebtools::Json::Value::opAssign(v105, v185);
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
        }
        g4_std::string::Destroy(v306);
        g4_std::string::Destroy(&v291);
      }
      if ( v6[70] == 0 || *(uint32_t *)(*((uint32_t *)v6 + 16) - 12) != 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v293), "type", (int)(uintptr_t)(&v236) + 1);
        v294 = (int)(uintptr_t)(v6 + 64);
        g4_std::string::construct_copy(v307, &v293);
        v307[1] = v294;
        v220 = v294;
        if ( *(uint8_t *)(v294 + 6) != 0 )
        {
          if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v7) == 0 )
          {
            glwebtools::Json::Value::Construct((int)(uintptr_t)(v341), (char *)&loc_6 + 1);
            v96 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            glwebtools::Json::Value::opAssign(v96, (const glwebtools::Json::Value::Self *)v341);
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v341);
          }
          glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
          v97 = nullptr;
          if ( *(uint8_t *)(v220 + 6) != 0 )
            v97 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, v220);
          if ( glwebtools::IsOperationSuccess(v97) )
          {
            v182 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
            v98 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            v99 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v98, (char **)v307);
            glwebtools::Json::Value::opAssign(v99, v182);
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
        }
        g4_std::string::Destroy(v307);
        g4_std::string::Destroy(&v293);
      }
      if ( v6[78] == 0 || *(uint32_t *)(*((uint32_t *)v6 + 18) - 12) != 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v295), "locale", (int)(uintptr_t)(&v236) + 2);
        v296 = (int)(uintptr_t)(v6 + 72);
        g4_std::string::construct_copy(v308, &v295);
        v308[1] = v296;
        v219 = v296;
        if ( *(uint8_t *)(v296 + 6) != 0 )
        {
          if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v7) == 0 )
          {
            glwebtools::Json::Value::Construct((int)(uintptr_t)(v342), (char *)&loc_6 + 1);
            v92 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            glwebtools::Json::Value::opAssign(v92, (const glwebtools::Json::Value::Self *)v342);
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v342);
          }
          glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
          v93 = nullptr;
          if ( *(uint8_t *)(v219 + 6) != 0 )
            v93 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, v219);
          if ( glwebtools::IsOperationSuccess(v93) )
          {
            v181 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
            v94 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            v95 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v94, (char **)v308);
            glwebtools::Json::Value::opAssign(v95, v181);
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
        }
        g4_std::string::Destroy(v308);
        g4_std::string::Destroy(&v295);
      }
      if ( v6[86] == 0 || *(uint32_t *)(*((uint32_t *)v6 + 20) - 12) != 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v297), "tracking_uid", (int)(uintptr_t)(&v236) + 3);
        v298 = (int)(uintptr_t)(v6 + 80);
        g4_std::string::construct_copy(v309, &v297);
        v309[1] = v298;
        v218 = v298;
        if ( *(uint8_t *)(v298 + 6) != 0 )
        {
          if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v7) == 0 )
          {
            glwebtools::Json::Value::Construct((int)(uintptr_t)(v343), (char *)&loc_6 + 1);
            v88 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            glwebtools::Json::Value::opAssign(v88, (const glwebtools::Json::Value::Self *)v343);
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v343);
          }
          glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
          v89 = nullptr;
          if ( *(uint8_t *)(v218 + 6) != 0 )
            v89 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, v218);
          if ( glwebtools::IsOperationSuccess(v89) )
          {
            v180 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
            v90 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
            v91 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v90, (char **)v309);
            glwebtools::Json::Value::opAssign(v91, v180);
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
        }
        g4_std::string::Destroy(v309);
        g4_std::string::Destroy(&v297);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v252), "type", (int)(uintptr_t)(&v237));
      v253 = "consumable";
      g4_std::string::construct_copy(v254, &v252);
      v213 = (char *)v253;
      v254[1] = (int)(uintptr_t)(v253);
      if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v7) == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v330), (char *)&loc_6 + 1);
        v10 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
        glwebtools::Json::Value::opAssign(v10, (const glwebtools::Json::Value::Self *)v330);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v330);
      }
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
      v11 = (glwebtools::Self *)glwebtools::opShl((glwebtools::JsonWriter::Self *)v394, v213);
      if ( glwebtools::IsOperationSuccess(v11) )
      {
        v177 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
        v12 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
        v13 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v12, (char **)v254);
        glwebtools::Json::Value::opAssign(v13, v177);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
      v14 = (void *)(v254[0] - 12);
      if ( (uint32_t *)(v254[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v254[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v14);
      }
      v15 = (void *)(v252 - 12);
      if ( (uint32_t *)(v252 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v252 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v15);
      }
      glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v7, (const glwebtools::JSONObject::Self *)(v6 + 112));
      v214 = *((uint32_t *)v6 + 34);
      v206 = v6 + 128;
      if ( (char *)v214 != v6 + 128 )
      {
        v200 = v6;
        v16 = (glwebtools::JsonWriter::Self *)v7;
        do
        {
          glwebtools::JsonWriter::opIndex((glwebtools::JsonWriter::Self *)v361, v16, "billing_methods");
          if ( (uint8_t)glwebtools::JsonWriter::isArray((glwebtools::JsonWriter::Self *)v361) == 0 )
          {
            glwebtools::Json::Value::Construct((int)(uintptr_t)(v332), &loc_6);
            v17 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v361);
            glwebtools::Json::Value::opAssign(v17, (const glwebtools::Json::Value::Self *)v332);
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v332);
          }
          glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
          glwebtools::Json::Value::Construct((int)(uintptr_t)(v331), nullptr);
          v18 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
          glwebtools::Json::Value::opAssign(v18, (const glwebtools::Json::Value::Self *)v331);
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v331);
          v19 = (glwebtools::Self *)G4_VCALL<int>(v214 + 20, 4, v394);
          if ( glwebtools::IsOperationSuccess(v19) )
          {
            v20 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
            v21 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v361);
            glwebtools::Json::Value::append(v21, v20);
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v361);
          v214 = sub_19048E0(v214);
        }
        while ( (char *)v214 != v206 );
        v7 = (char *)v16;
        v6 = v200;
      }
      if ( glwebtools::IsOperationSuccess(nullptr) )
      {
        v178 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v7);
        v22 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v356);
        glwebtools::Json::Value::append(v22, v178);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v7);
      v6 = (char *)sub_1904890(v6);
    }
    while ( v6 != v198 );
  }
  InAppBilling_GetShopAttributeByName((InAppBilling::Self *)v238, (InAppBilling::Self *)"server_time");
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v255), "server_time", (int)(uintptr_t)(&v231));
  v256 = v238;
  g4_std::string::construct_copy(v310, &v255);
  v207 = v256;
  v310[1] = (int)(uintptr_t)(v256);
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v355) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v344), (char *)&loc_6 + 1);
    v23 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v355);
    glwebtools::Json::Value::opAssign(v23, (const glwebtools::Json::Value::Self *)v344);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v344);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
  v24 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, (int)(uintptr_t)(v207));
  if ( glwebtools::IsOperationSuccess(v24) )
  {
    v25 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
    v26 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v355);
    v27 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v26, (char **)v310);
    glwebtools::Json::Value::opAssign(v27, v25);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
  g4_std::string::Destroy(v310);
  g4_std::string::Destroy(&v255);
  g4_std::string::Destroy(v238);
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v357);
  glwebtools::JsonWriter::opIndex((glwebtools::JsonWriter::Self *)v358, (glwebtools::JsonWriter::Self *)v355, "promo_tags");
  v239 = 1;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v257), "promo_id", (int)(uintptr_t)(&v231) + 1);
  v258 = &v239;
  g4_std::string::construct_copy(v311, &v257);
  v28 = v258;
  v311[1] = (int)(uintptr_t)(v258);
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v357) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v345), (char *)&loc_6 + 1);
    v29 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v357);
    glwebtools::Json::Value::opAssign(v29, (const glwebtools::Json::Value::Self *)v345);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v345);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
  v30 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, *v28);
  if ( glwebtools::IsOperationSuccess(v30) )
  {
    v31 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
    v32 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v357);
    v33 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v32, (char **)v311);
    glwebtools::Json::Value::opAssign(v33, v31);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
  g4_std::string::Destroy(v311);
  g4_std::string::Destroy(&v257);
  v240 = 1;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v259), "promo_id", (int)(uintptr_t)(&v231) + 2);
  v260 = &v240;
  g4_std::string::construct_copy(v312, &v259);
  v34 = v260;
  v312[1] = (int)(uintptr_t)(v260);
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v355) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v346), (char *)&loc_6 + 1);
    v35 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v355);
    glwebtools::Json::Value::opAssign(v35, (const glwebtools::Json::Value::Self *)v346);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v346);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
  v36 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, *v34);
  if ( glwebtools::IsOperationSuccess(v36) )
  {
    v37 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
    v38 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v355);
    v39 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v38, (char **)v312);
    glwebtools::Json::Value::opAssign(v39, v37);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
  g4_std::string::Destroy(v312);
  g4_std::string::Destroy(&v259);
  InAppBilling_GetShopAttributeByName((InAppBilling::Self *)v241, (InAppBilling::Self *)"server_time");
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v261), "promo_start", (int)(uintptr_t)(&v232));
  v262 = v241;
  g4_std::string::construct_copy(v313, &v261);
  v208 = v262;
  v313[1] = (int)(uintptr_t)(v262);
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v357) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v347), (char *)&loc_6 + 1);
    v40 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v357);
    glwebtools::Json::Value::opAssign(v40, (const glwebtools::Json::Value::Self *)v347);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v347);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
  v41 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, (int)(uintptr_t)(v208));
  if ( glwebtools::IsOperationSuccess(v41) )
  {
    v42 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
    v43 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v357);
    v44 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v43, (char **)v313);
    glwebtools::Json::Value::opAssign(v44, v42);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
  g4_std::string::Destroy(v313);
  g4_std::string::Destroy(&v261);
  g4_std::string::Destroy(v241);
  InAppBilling_GetShopAttributeByName((InAppBilling::Self *)v242, (InAppBilling::Self *)"server_time");
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v263), "promo_start", (int)(uintptr_t)(&v232) + 1);
  v264 = v242;
  g4_std::string::construct_copy(v314, &v263);
  v215 = (int)(uintptr_t)(v264);
  v314[1] = (int)(uintptr_t)(v264);
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v355) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v348), (char *)&loc_6 + 1);
    v45 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v355);
    glwebtools::Json::Value::opAssign(v45, (const glwebtools::Json::Value::Self *)v348);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v348);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
  v46 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, v215);
  if ( glwebtools::IsOperationSuccess(v46) )
  {
    v47 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
    v48 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v355);
    v49 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v48, (char **)v314);
    glwebtools::Json::Value::opAssign(v49, v47);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
  g4_std::string::Destroy(v314);
  g4_std::string::Destroy(&v263);
  g4_std::string::Destroy(v242);
  InAppBilling_GetShopAttributeByName((InAppBilling::Self *)v243, (InAppBilling::Self *)"promo_endtime");
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v265), "promo_end", (int)(uintptr_t)(&v232) + 2);
  v266 = v243;
  g4_std::string::construct_copy(v315, &v265);
  v216 = (int)(uintptr_t)(v266);
  v315[1] = (int)(uintptr_t)(v266);
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v357) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v349), (char *)&loc_6 + 1);
    v50 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v357);
    glwebtools::Json::Value::opAssign(v50, (const glwebtools::Json::Value::Self *)v349);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v349);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
  v51 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, v216);
  if ( glwebtools::IsOperationSuccess(v51) )
  {
    v52 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
    v53 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v357);
    v54 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v53, (char **)v315);
    glwebtools::Json::Value::opAssign(v54, v52);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
  g4_std::string::Destroy(v315);
  g4_std::string::Destroy(&v265);
  g4_std::string::Destroy(v243);
  InAppBilling_GetShopAttributeByName((InAppBilling::Self *)v244, (InAppBilling::Self *)"promo_endtime");
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v267), "promo_end", (int)(uintptr_t)(&v232) + 3);
  v268 = v244;
  g4_std::string::construct_copy(v316, &v267);
  v217 = (int)(uintptr_t)(v268);
  v316[1] = (int)(uintptr_t)(v268);
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v355) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v350), (char *)&loc_6 + 1);
    v55 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v355);
    glwebtools::Json::Value::opAssign(v55, (const glwebtools::Json::Value::Self *)v350);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v350);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
  v56 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, v217);
  if ( glwebtools::IsOperationSuccess(v56) )
  {
    v57 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
    v58 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v355);
    v59 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v58, (char **)v316);
    glwebtools::Json::Value::opAssign(v59, v57);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
  g4_std::string::Destroy(v316);
  g4_std::string::Destroy(&v267);
  g4_std::string::Destroy(v244);
  v245 = 0;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v269), "reduction_percentage", (int)(uintptr_t)(&v233));
  v270 = &v245;
  g4_std::string::construct_copy(v317, &v269);
  v60 = v270;
  v317[1] = (int)(uintptr_t)(v270);
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v357) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v351), (char *)&loc_6 + 1);
    v61 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v357);
    glwebtools::Json::Value::opAssign(v61, (const glwebtools::Json::Value::Self *)v351);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v351);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
  v62 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, *v60);
  if ( glwebtools::IsOperationSuccess(v62) )
  {
    v63 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
    v64 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v357);
    v65 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v64, (char **)v317);
    glwebtools::Json::Value::opAssign(v65, v63);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
  g4_std::string::Destroy(v317);
  g4_std::string::Destroy(&v269);
  v246 = 0;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v271), "reduction_percentage", (int)(uintptr_t)(&v233) + 1);
  v272 = &v246;
  g4_std::string::construct_copy(v318, &v271);
  v66 = v272;
  v318[1] = (int)(uintptr_t)(v272);
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v355) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v352), (char *)&loc_6 + 1);
    v67 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v355);
    glwebtools::Json::Value::opAssign(v67, (const glwebtools::Json::Value::Self *)v352);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v352);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
  v68 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, *v66);
  if ( glwebtools::IsOperationSuccess(v68) )
  {
    v69 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
    v70 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v355);
    v71 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v70, (char **)v318);
    glwebtools::Json::Value::opAssign(v71, v69);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
  g4_std::string::Destroy(v318);
  g4_std::string::Destroy(&v271);
  glwebtools::JsonWriter::opIndex((glwebtools::JsonWriter::Self *)v359, (glwebtools::JsonWriter::Self *)v357, "items_list");
  for ( i = *((char **)v210 + 7); i != v198; i = (char *)sub_1904890(i) )
  {
    v72 = nullptr;
    *(uint32_t *)v362 = (uint32_t)(uintptr_t)(&off_2096648);
    v363 = (int)(uintptr_t)(&dword_213B814);
    g4_std::string::assign_str(&v363, i + 24);
    v73 = i[30];
    v365 = &dword_213B814;
    v364 = v73;
    g4_std::string::assign_str(&v365, i + 32);
    v74 = i[38];
    v367 = &dword_213B814;
    v366 = v74;
    g4_std::string::assign_str(&v367, i + 40);
    v75 = i[46];
    v369 = &dword_213B814;
    v368 = v75;
    g4_std::string::assign_str(&v369, i + 48);
    v76 = i[54];
    v371 = &dword_213B814;
    v370 = v76;
    g4_std::string::assign_str(&v371, i + 56);
    v77 = i[62];
    v373 = &dword_213B814;
    v372 = v77;
    g4_std::string::assign_str(&v373, i + 64);
    v78 = i[70];
    v375 = &dword_213B814;
    v374 = v78;
    g4_std::string::assign_str(&v375, i + 72);
    v79 = i[78];
    v377 = &dword_213B814;
    v376 = v79;
    v80 = 0;
    g4_std::string::assign_str(&v377, i + 80);
    v378 = i[86];
    v379 = *((uint32_t *)i + 22);
    v380 = i[94];
    v381 = *((uint32_t *)i + 24);
    v382 = i[102];
    v383 = *((uint32_t *)i + 26);
    v384 = i[110];
    v81 = *((glwebtools::Json::Value::Self **)i + 28);
    v82 = *((glwebtools::Json::Value::Self **)i + 29);
    v385 = nullptr;
    v386 = nullptr;
    v387 = nullptr;
    v83 = (v82 - v81) >> 3;
    if ( v83 != 0 )
    {
      if ( v83 > 0x1FFFFFFF )
        sub_18FFEE0(v83, v82);
      v80 = 8 * v83;
      v72 = (char *)opNew(8 * v83);
      v82 = *((glwebtools::Json::Value::Self **)i + 29);
      v81 = *((glwebtools::Json::Value::Self **)i + 28);
    }
    v385 = v72;
    v386 = v72;
    v387 = &v72[v80];
    if ( v81 != v82 )
    {
      v84 = v81;
      do
      {
        if ( v72 != nullptr )
        {
          v179 = v82;
          g4_std::string::construct_copy(v72, v84);
          g4_std::string::construct_copy(v72 + 4, (char *)v84 + 4);
          v82 = v179;
        }
        v84 = (glwebtools::Json::Value::Self *)((char *)v84 + 8);
        v72 += 8;
      }
      while ( v82 != v84 );
    }
    v386 = v72;
    v389 = 0;
    v390 = nullptr;
    v393 = 0;
    v391 = &v389;
    v392 = &v389;
    v85 = *((uint32_t *)i + 33);
    if ( v85 != 0 )
    {
      v86 = (uint32_t *)g4_std::Rb_tree_string_pair_string_const_4216e3::M_copy(
                        &v388,
                        v85,
                        &v389);
      v390 = v86;
      for ( j = (int *)(v86); j[2] != 0; j = (int *)j[2] )
        ;
      v391 = j;
      while ( v86[3] != 0 )
        v86 = (uint32_t *)v86[3];
      v392 = (int *)(v86);
      v393 = *((uint32_t *)i + 36);
    }
    if ( v382 != 0 && v381 > 0 )
      goto LABEL_279;
    v395 = 0;
    v397 = 0;
    v399 = 0;
    v401 = 0;
    v402 = 0;
    v404 = 0;
    v394[1] = (int)(uintptr_t)(&dword_213B814);
    v396 = &dword_213B814;
    v398 = &dword_213B814;
    v400 = &dword_213B814;
    v403 = &dword_213B814;
    v406 = &dword_213B814;
    v408 = &dword_213B814;
    v409 = &dword_213B814;
    v410[2] = (uint32_t)(uintptr_t)(v410);
    v410[3] = (uint32_t)(uintptr_t)(v410);
    v411 = &dword_213B814;
    v413 = &dword_213B814;
    v394[0] = (int)((uint32_t)(uintptr_t)&off_20966C8);
    v405 = 0;
    v407 = 0;
    v410[0] = 0;
    v410[1] = 0;
    v410[4] = 0;
    v412 = 0;
    v414 = 0;
    v415 = 0;
    v416 = 0;
    v417 = 0;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v251), "NA", (int)(uintptr_t)(&v233) + 2);
    g4_std::string::assign_str(&v411, &v251);
    v412 = 1;
    v155 = (void *)(v251 - 12);
    if ( (uint32_t *)(v251 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v251 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v155);
    }
    if ( v393 != 0 )
      iap::BillingMethodAndroid::Construct(
        (iap::BillingMethodAndroid::Self *)v418,
        (const iap::BillingMethodAndroid::Self *)(v391 + 5));
    else
      iap::BillingMethodAndroid::Construct(
        (iap::BillingMethodAndroid::Self *)v418,
        (const iap::BillingMethodAndroid::Self *)v394);
    iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)v394);
    ReductionPercent = iap::BillingMethod::GetReductionPercent((iap::BillingMethod::Self *)v418);
    iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)v418);
    if ( ReductionPercent > 0.0 )
    {
LABEL_279:
      if ( (uint8_t)glwebtools::JsonWriter::isArray((glwebtools::JsonWriter::Self *)v359) == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v328), &loc_6);
        v172 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v359);
        glwebtools::Json::Value::opAssign(v172, (const glwebtools::Json::Value::Self *)v328);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v328);
      }
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
      v173 = -2147483646;
      if ( v364 != 0 )
        v173 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, (int)(uintptr_t)(&v363));
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v173) )
      {
        v174 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
        v175 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v359);
        glwebtools::Json::Value::append(v175, v174);
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
    }
    *(uint32_t *)v362 = (uint32_t)(uintptr_t)(&off_2096648);
    v203 = v390;
    if ( v390 != nullptr )
    {
      while ( 1 )
      {
        v204 = (uint32_t *)v203[3];
        if ( v204 != nullptr )
        {
          while ( 1 )
          {
            v205 = (char *)v204[3];
            if ( v205 != nullptr )
            {
              while ( 1 )
              {
                v202 = *((char **)v205 + 3);
                if ( v202 != nullptr )
                {
                  while ( 1 )
                  {
                    v201 = *((uint32_t **)v202 + 3);
                    if ( v201 != nullptr )
                    {
                      while ( 1 )
                      {
                        v199 = (uint32_t *)v201[3];
                        if ( v199 != nullptr )
                        {
                          while ( 1 )
                          {
                            v212 = (uint32_t *)v199[3];
                            if ( v212 != nullptr )
                            {
                              while ( 1 )
                              {
                                v229 = (uint32_t *)v212[3];
                                if ( v229 != nullptr )
                                {
                                  while ( 1 )
                                  {
                                    v156 = v229[3];
                                    if ( v156 != 0 )
                                    {
                                      while ( 1 )
                                      {
                                        g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
                                          (int)(uintptr_t)(&v388),
                                          *(uint32_t **)(v156 + 12));
                                        v157 = *(uint32_t *)(v156 + 8);
                                        iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v156 + 20));
                                        g4_std::string::Destroy(v156 + 16);
                                        opDelete((void *)v156);
                                        if ( v157 == 0 )
                                          break;
                                        v156 = v157;
                                      }
                                    }
                                    v158 = (uint32_t *)v229[2];
                                    iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v229 + 5));
                                    g4_std::string::Destroy(v229 + 4);
                                    opDelete(v229);
                                    if ( v158 == nullptr )
                                      break;
                                    v229 = v158;
                                  }
                                }
                                v159 = (uint32_t *)v212[2];
                                iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v212 + 5));
                                v160 = v212[4];
                                if ( (uint32_t *)(v160 - 12) != dword_213B808
                                  && __sync_fetch_and_add((volatile int32_t *)(v160 - 4), 0xFFFFFFFF) <= 0 )
                                {
                                  g4_std::string::Rep::M_destroy((void *)(v160 - 12));
                                }
                                opDelete(v212);
                                if ( v159 == nullptr )
                                  break;
                                v212 = v159;
                              }
                            }
                            v161 = (uint32_t *)v199[2];
                            iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v199 + 5));
                            g4_std::string::Destroy(v199 + 4);
                            opDelete(v199);
                            if ( v161 == nullptr )
                              break;
                            v199 = v161;
                          }
                        }
                        v162 = (uint32_t *)v201[2];
                        iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v201 + 5));
                        g4_std::string::Destroy(v201 + 4);
                        opDelete(v201);
                        if ( v162 == nullptr )
                          break;
                        v201 = v162;
                      }
                    }
                    v163 = *((char **)v202 + 2);
                    iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v202 + 20));
                    g4_std::string::Destroy(v202 + 16);
                    opDelete(v202);
                    if ( v163 == nullptr )
                      break;
                    v202 = v163;
                  }
                }
                v164 = *((char **)v205 + 2);
                iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v205 + 20));
                g4_std::string::Destroy(v205 + 16);
                opDelete(v205);
                if ( v164 == nullptr )
                  break;
                v205 = v164;
              }
            }
            v165 = (uint32_t *)v204[2];
            iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v204 + 5));
            v166 = v204[4];
            if ( (uint32_t *)(v166 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v166 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)(v166 - 12));
            }
            opDelete(v204);
            if ( v165 == nullptr )
              break;
            v204 = v165;
          }
        }
        v167 = (uint32_t *)v203[2];
        iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)(v203 + 5));
        g4_std::string::Destroy(v203 + 4);
        opDelete(v203);
        if ( v167 == nullptr )
          break;
        v203 = v167;
      }
    }
    v134 = v386;
    v135 = (char *)v385;
    if ( v386 != v385 )
    {
      do
      {
        g4_std::string::Destroy(v135 + 4);
        v176 = v135;
        v135 += 8;
        g4_std::string::Destroy(v176);
      }
      while ( v134 != v135 );
      v135 = (char *)v385;
    }
    if ( v135 != nullptr )
      opDelete(v135);
    g4_std::string::Destroy(&v377);
    g4_std::string::Destroy(&v375);
    g4_std::string::Destroy(&v373);
    g4_std::string::Destroy(&v371);
    g4_std::string::Destroy(&v369);
    g4_std::string::Destroy(&v367);
    g4_std::string::Destroy(&v365);
    g4_std::string::Destroy(&v363);
  }
  glwebtools::JsonWriter::opIndex(
    (glwebtools::JsonWriter::Self *)v360,
    (glwebtools::JsonWriter::Self *)v357,
    "promo_descriptions");
  InAppBilling_GetShopAttributeByName((InAppBilling::Self *)v247, (InAppBilling::Self *)"promo_description");
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v273), "en", (int)(uintptr_t)(&v233) + 3);
  v274 = v247;
  g4_std::string::construct_copy(v319, &v273);
  v225 = (int)(uintptr_t)(v274);
  v319[1] = (int)(uintptr_t)(v274);
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v360) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v353), (char *)&loc_6 + 1);
    v136 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v360);
    glwebtools::Json::Value::opAssign(v136, (const glwebtools::Json::Value::Self *)v353);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v353);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
  v137 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, v225);
  if ( glwebtools::IsOperationSuccess(v137) )
  {
    v138 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
    v139 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v360);
    v140 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v139, (char **)v319);
    glwebtools::Json::Value::opAssign(v140, v138);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
  g4_std::string::Destroy(v319);
  g4_std::string::Destroy(&v273);
  g4_std::string::Destroy(v247);
  InAppBilling_GetShopAttributeByName((InAppBilling::Self *)v248, (InAppBilling::Self *)"promo_description");
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v275), "en", (int)(uintptr_t)(&v234));
  v276 = v248;
  g4_std::string::construct_copy(v320, &v275);
  v226 = (int)(uintptr_t)(v276);
  v320[1] = (int)(uintptr_t)(v276);
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v355) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v354), (char *)&loc_6 + 1);
    v141 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v355);
    glwebtools::Json::Value::opAssign(v141, (const glwebtools::Json::Value::Self *)v354);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v354);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
  v142 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, v226);
  if ( glwebtools::IsOperationSuccess(v142) )
  {
    v143 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
    v144 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v355);
    v145 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v144, (char **)v320);
    glwebtools::Json::Value::opAssign(v145, v143);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
  g4_std::string::Destroy(v320);
  g4_std::string::Destroy(&v275);
  g4_std::string::Destroy(v248);
  v321 = nullptr;
  v322 = nullptr;
  v323 = 0;
  glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v324);
  glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)&v249, (glwebtools::JsonWriter::Self *)v357);
  glwebtools::JsonReader::parse((glwebtools::JsonReader::Self *)v324, v249);
  g4_std::string::Destroy(&v249);
  glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v324, (glwebtools::JSONObject::Self *)&v321);
  if ( (uint8_t)glwebtools::JsonWriter::isArray((glwebtools::JsonWriter::Self *)v358) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v329), &loc_6);
    v146 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v358);
    glwebtools::Json::Value::opAssign(v146, (const glwebtools::Json::Value::Self *)v329);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v329);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v394);
  v147 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v394, (const glwebtools::JSONObject::Self *)&v321);
  if ( glwebtools::IsOperationSuccess(v147) )
  {
    v148 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v394);
    v149 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v358);
    glwebtools::Json::Value::append(v149, v148);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v394);
  glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)v250, (glwebtools::JsonWriter::Self *)v355);
  g4_std::string::assign_str(v197, v250);
  g4_std::string::Destroy(v250);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v324);
  v150 = (uint8_t *)(v321);
  v227 = v322;
  if ( v322 != v321 )
  {
    v151 = (char *)v321;
    v211 = (char *)v321 + 4;
    do
    {
      v152 = *(uint32_t *)&v211[v151 - (char *)(v150)];
      if ( (uint32_t *)(v152 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v152 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v152 - 12));
      }
      v153 = (uint32_t *)(*(uint32_t *)v151 - 12);
      if ( v153 != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v151 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v153);
      }
      v151 += 8;
    }
    while ( v227 != v151 );
    v150 = (uint8_t *)(v321);
  }
  if ( v150 != nullptr )
    opDelete(v150);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v360);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v359);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v358);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v357);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v356);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v355);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::ItemManager::getItemById  (binary VA: 0x1523420)
// Original: iap::ItemManager::getItemById
// ----------------------------------------------------------------------------
int iap::ItemManager::getItemById(int a1, void **a2, int a3)
{
  int v3;
  int v4;
  size_t v5;
  size_t v6;
  size_t n;
  int v8;
  int v9;
  size_t v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  size_t v17;
  void *s2;
  int v19;

  v3 = -2147483646;
  v4 = *(uint32_t *)(a1 + 24);
  if ( v4 != 0 )
  {
    s2 = *a2;
    v5 = *((uint32_t *)*a2 - 3);
    v19 = a1 + 20;
    do
    {
      while ( 1 )
      {
        v6 = *(uint32_t *)(*(uint32_t *)(v4 + 16) - 12);
        n = v6;
        if ( v5 <= v6 )
          n = v5;
        v8 = v6 - v5;
        v9 = memcmp(*(const void **)(v4 + 16), s2, n);
        if ( v9 != 0 )
          v8 = v9;
        if ( v8 < 0 )
          break;
        v19 = v4;
        v4 = *(uint32_t *)(v4 + 8);
        if ( v4 == 0 )
          goto LABEL_10;
      }
      v4 = *(uint32_t *)(v4 + 12);
    }
    while ( v4 != 0 );
LABEL_10:
    v3 = -2147483646;
    if ( a1 + 20 != v19 )
    {
      v10 = *(uint32_t *)(*(uint32_t *)(v19 + 16) - 12);
      v17 = v10;
      if ( v5 <= v10 )
        v10 = v5;
      v11 = memcmp(s2, *(const void **)(v19 + 16), v10);
      v12 = v5 - v17;
      if ( v11 != 0 )
        v12 = v11;
      if ( v12 >= 0 )
      {
        v3 = 0;
        v13 = g4_std::map_string_iap_iABAndroidIte_35eed1::opIndex(a1 + 16, a2);
        g4_std::string::assign_str(a3 + 4, v13 + 4);
        *(uint8_t *)(a3 + 10) = *(uint8_t *)(v13 + 10);
        g4_std::string::assign_str(a3 + 12, v13 + 12);
        *(uint8_t *)(a3 + 18) = *(uint8_t *)(v13 + 18);
        g4_std::string::assign_str(a3 + 20, v13 + 20);
        *(uint8_t *)(a3 + 26) = *(uint8_t *)(v13 + 26);
        g4_std::string::assign_str(a3 + 28, v13 + 28);
        *(uint8_t *)(a3 + 34) = *(uint8_t *)(v13 + 34);
        g4_std::string::assign_str(a3 + 36, v13 + 36);
        *(uint8_t *)(a3 + 42) = *(uint8_t *)(v13 + 42);
        g4_std::string::assign_str(a3 + 44, v13 + 44);
        *(uint8_t *)(a3 + 50) = *(uint8_t *)(v13 + 50);
        g4_std::string::assign_str(a3 + 52, v13 + 52);
        *(uint8_t *)(a3 + 58) = *(uint8_t *)(v13 + 58);
        g4_std::string::assign_str(a3 + 60, v13 + 60);
        *(uint8_t *)(a3 + 66) = *(uint8_t *)(v13 + 66);
        *(uint32_t *)(a3 + 68) = *(uint32_t *)(v13 + 68);
        *(uint8_t *)(a3 + 74) = *(uint8_t *)(v13 + 74);
        *(uint32_t *)(a3 + 76) = *(uint32_t *)(v13 + 76);
        *(uint8_t *)(a3 + 82) = *(uint8_t *)(v13 + 82);
        *(uint32_t *)(a3 + 84) = *(uint32_t *)(v13 + 84);
        *(uint8_t *)(a3 + 90) = *(uint8_t *)(v13 + 90);
        g4_std::vector_pair_string_glwebtools_J_91bc19::opAssign(
          (std::vector<std::pair<std::string, glwebtools::JSONValue::Self>> *)(a3 + 92),
          (const std::vector<std::pair<std::string, glwebtools::JSONValue::Self>> *)(v13 + 92));
        if ( a3 + 104 != v13 + 104 )
        {
          v3 = v4;
          g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
            a3 + 104,
            *(uint32_t **)(a3 + 112));
          *(uint32_t *)(a3 + 116) = a3 + 108;
          *(uint32_t *)(a3 + 112) = 0;
          *(uint32_t *)(a3 + 120) = a3 + 108;
          *(uint32_t *)(a3 + 124) = 0;
          if ( *(uint32_t *)(v13 + 112) != 0 )
          {
            v14 = (int)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_4216e3::M_copy(
                    a3 + 104,
                    *(uint32_t *)(v13 + 112),
                    a3 + 108));
            v15 = v14;
            *(uint32_t *)(a3 + 112) = v14;
            while ( *(uint32_t *)(v15 + 8) != 0 )
              v15 = *(uint32_t *)(v15 + 8);
            *(uint32_t *)(a3 + 116) = v15;
            while ( *(uint32_t *)(v14 + 12) != 0 )
              v14 = *(uint32_t *)(v14 + 12);
            v3 = 0;
            *(uint32_t *)(a3 + 120) = v14;
            *(uint32_t *)(a3 + 124) = *(uint32_t *)(v13 + 124);
          }
        }
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: iap::ItemManager::ProcessCallback  (binary VA: 0x1523700)
// Original: iap::ItemManager::ProcessCallback
// ----------------------------------------------------------------------------
int iap::ItemManager::ProcessCallback(glwebtools::Mutex::Self **self, const char *a2, int a3)
{
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  char *v9;
  void *v10;
  char *v11;
  uint32_t *v12;
  void *v13;
  void *v14;
  void *v15;
  void *v16;
  void *v17;
  int v18;
  char *v19;
  int v20;
  char *v21;
  char *Name;
  void *v23;
  void *v24;
  size_t v25;
  size_t v26;
  int v27;
  size_t v28;
  size_t v29;
  int v30;
  int v31;
  uint32_t *v32;
  size_t v33;
  int v34;
  int v35;
  int *v36;
  uint32_t *v37;
  int *v38;
  size_t v39;
  int v40;
  int v41;
  char v42;
  char v43;
  int v44;
  int v45;
  uint32_t *v46;
  size_t v48;
  int v49;
  int v50;
  size_t v51;
  int v52;
  int v53;
  int v54;
  uint32_t *v55;
  bool v56;
  uint32_t *v57;
  uint32_t *j;
  char *v59;
  int v60;
  int v61;
  void *v62;
  size_t v63;
  int v64;
  size_t v65;
  unsigned int v66;
  int v67;
  int v68;
  size_t v69;
  int v70;
  unsigned int v71;
  void *v72;
  int v73;
  uint32_t *v74;
  int *k;
  uint32_t *v76;
  size_t v77;
  int v78;
  int v79;
  uint32_t *v80;
  int v81;
  size_t v82;
  int v83;
  int v84;
  size_t v85;
  char *v86;
  size_t v87;
  char *v88;
  void *v89;
  int v90;
  int m;
  unsigned int v92;
  int v93;
  unsigned int v94;
  char v95;
  int v96;
  uint32_t *v97;
  size_t v98;
  size_t v99;
  int v100;
  size_t v101;
  int v102;
  uint32_t *v103;
  size_t v104;
  int v105;
  unsigned int v106;
  unsigned int v107;
  void *v108;
  int *v109;
  size_t v110;
  size_t v111;
  int v112;
  int v113;
  int v114;
  char *v115;
  char *v116;
  uint32_t *v117;
  unsigned int v118;
  int v119;
  unsigned int v120;
  int v121;
  int v122;
  uint32_t *v123;
  size_t v124;
  size_t v125;
  int v126;
  int v127;
  int v128;
  typedef char *_g4_t_v129;
  typedef char *_g4_t_v130;
  typedef char *_g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef void *_g4_t_s1;
  typedef void *_g4_t_s1a;
  typedef void *_g4_t_s1b;
  typedef void *_g4_t_s1g;
  typedef void *_g4_t_s1c;
  typedef void *_g4_t_s1d;
  typedef void *_g4_t_s1e;
  typedef void *_g4_t_s1f;
  typedef size_t _g4_t_v142;
  typedef const void *_g4_t_v143;
  typedef size_t _g4_t_v144;
  typedef size_t _g4_t_v145;
  typedef size_t _g4_t_v146;
  typedef size_t _g4_t_v147;
  typedef char _g4_t_v148;
  typedef void *_g4_t_v149;
  typedef int _g4_t_v150;
  typedef const char *_g4_t_ItemInfoArray;
  typedef int _g4_t_i;
  typedef glwebtools::Mutex::Self *_g4_t_v153;
  typedef int _g4_t_v154;
  typedef int _g4_t_v155;
  typedef int _g4_t_v156;
  typedef int _g4_t_v157;
  typedef int _g4_t_v158;
  typedef char *_g4_t_v159;
  typedef size_t _g4_t_n;
  typedef size_t _g4_t_na;
  typedef size_t _g4_t_nb;
  typedef char *_g4_t_v163;
  typedef iap::ItemManager::Self *_g4_t_v164;
  typedef size_t _g4_t_v165;
  typedef size_t _g4_t_v166;
  typedef size_t _g4_t_v167;
  typedef size_t _g4_t_v168;
  typedef size_t _g4_t_v169;
  typedef int *_g4_t_v170;
  typedef const void *_g4_t_v171;
  typedef uint32_t *_g4_t_v172;
  typedef void *_g4_t_v173;
  typedef char *_g4_t_v174;
  typedef const void *_g4_t_v175;
  typedef char *_g4_t_v176;
  typedef size_t _g4_t_v177;
  typedef size_t _g4_t_v178;
  typedef int _g4_t_v179;
  typedef size_t _g4_t_v180;
  typedef size_t _g4_t_v181;
  typedef int _g4_t_v182;
  typedef size_t _g4_t_v183;
  typedef size_t _g4_t_v184;
  typedef uint32_t _g4_t_v185[3];
  typedef uint32_t _g4_t_v186[2];
  typedef int _g4_t_v187;
  typedef int _g4_t_v188;
  typedef int _g4_t_v189;
  typedef int _g4_t_v190;
  typedef int _g4_t_v191;
  typedef int _g4_t_v192;
  typedef int _g4_t_v193;
  typedef int _g4_t_v194;
  typedef char *_g4_t_nptr;
  typedef int _g4_t_v196;
  typedef char *_g4_t_v197;
  typedef int _g4_t_v198;
  typedef int _g4_t_v199;
  typedef int _g4_t_v200;
  typedef int _g4_t_v201;
  typedef int _g4_t_v202;
  typedef char *_g4_t_v203;
  typedef char *_g4_t_v204;
  typedef void *_g4_t_s2;
  typedef uint32_t *_g4_t_v206;
  typedef uint32_t *_g4_t_v207;
  typedef uint32_t *_g4_t_v208;
  typedef uint32_t *_g4_t_v209;
  typedef uint32_t *_g4_t_v210;
  typedef uint32_t *_g4_t_v211;
  typedef uint32_t *_g4_t_v212;
  typedef uint32_t (**_g4_t_v213)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *);
  typedef uint32_t *_g4_t_v214;
  typedef char _g4_t_v215;
  typedef uint32_t *_g4_t_v216;
  typedef char _g4_t_v217;
  typedef uint32_t *_g4_t_v218;
  typedef char _g4_t_v219;
  typedef uint32_t *_g4_t_v220;
  typedef char _g4_t_v221;
  typedef uint32_t *_g4_t_v222;
  typedef char _g4_t_v223;
  typedef uint32_t *_g4_t_v224;
  typedef char _g4_t_v225;
  typedef uint32_t *_g4_t_v226;
  typedef char _g4_t_v227;
  typedef uint32_t *_g4_t_v228;
  typedef char _g4_t_v229;
  typedef int _g4_t_v230;
  typedef char _g4_t_v231;
  typedef int _g4_t_v232;
  typedef char _g4_t_v233;
  typedef int _g4_t_v234;
  typedef char _g4_t_v235;
  typedef void *_g4_t_v236;
  typedef char *_g4_t_v237;
  typedef int _g4_t_v238;
  typedef int _g4_t_v239;
  typedef int _g4_t_v240;
  typedef void *_g4_t_v241;
  typedef int *_g4_t_v242;
  typedef int *_g4_t_v243;
  typedef int _g4_t_v244;
  typedef uint32_t _g4_t_v245[32];
  typedef void *_g4_t_v246;
  typedef uint32_t (**_g4_t_v247)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *);
  typedef uint32_t *_g4_t_v248;
  typedef char _g4_t_v249;
  typedef uint32_t *_g4_t_v250;
  typedef char _g4_t_v251;
  typedef uint32_t *_g4_t_v252;
  typedef char _g4_t_v253;
  typedef uint32_t *_g4_t_v254;
  typedef char _g4_t_v255;
  typedef uint32_t *_g4_t_v256;
  typedef char _g4_t_v257;
  typedef uint32_t *_g4_t_v258;
  typedef char _g4_t_v259;
  typedef uint32_t *_g4_t_v260;
  typedef char _g4_t_v261;
  typedef uint32_t *_g4_t_v262;
  typedef char _g4_t_v263;
  typedef int _g4_t_v264;
  typedef char _g4_t_v265;
  typedef int _g4_t_v266;
  typedef char _g4_t_v267;
  typedef int _g4_t_v268;
  typedef char _g4_t_v269;
  typedef void *_g4_t_v270;
  typedef void *_g4_t_v271;
  typedef char *_g4_t_v272;
  typedef int _g4_t_v273;
  typedef int _g4_t_v274;
  typedef void *_g4_t_v275;
  typedef int *_g4_t_v276;
  typedef int *_g4_t_v277;
  typedef int _g4_t_v278;
  typedef uint32_t (**_g4_t_v279)(iap::BillingMethodAndroid::Self *, const glwebtools::JsonReader::Self *);
  typedef uint32_t *_g4_t_v280;
  typedef char _g4_t_v281;
  typedef uint32_t *_g4_t_v282;
  typedef char _g4_t_v283;
  typedef uint32_t *_g4_t_v284;
  typedef char _g4_t_v285;
  typedef uint32_t *_g4_t_v286;
  typedef char _g4_t_v287;
  typedef double _g4_t_v288 __attribute__((aligned(1)));
  typedef char _g4_t_v289;
  typedef uint32_t *_g4_t_v290;
  typedef char _g4_t_v291;
  typedef double _g4_t_v292;
  typedef char _g4_t_v293;
  typedef uint32_t *_g4_t_v294;
  typedef char _g4_t_v295;
  typedef uint32_t *_g4_t_v296;
  typedef uint32_t *_g4_t_v297;
  typedef char _g4_t_v298;
  typedef int _g4_t_v299;
  typedef uint32_t *_g4_t_v300;
  typedef int *_g4_t_v301;
  typedef int *_g4_t_v302;
  typedef int _g4_t_v303;
  typedef uint32_t *_g4_t_v304;
  typedef char _g4_t_v305;
  typedef uint32_t *_g4_t_v306;
  typedef char _g4_t_v307;
  typedef uint32_t _g4_t_v308[5];
  typedef uint32_t _g4_t_v309[37];
  typedef void *_g4_t_v310;
  typedef uint32_t _g4_t_v311[40];
  enum : size_t {
    _g4_s0 = 1264u,
    _g4_s1 = (8u + sizeof(_g4_t_v129)) > _g4_s0 ? (8u + sizeof(_g4_t_v129)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v130)) > _g4_s1 ? (8u + sizeof(_g4_t_v130)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v131)) > _g4_s2 ? (8u + sizeof(_g4_t_v131)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v132)) > _g4_s3 ? (16u + sizeof(_g4_t_v132)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v133)) > _g4_s4 ? (16u + sizeof(_g4_t_v133)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_s1)) > _g4_s5 ? (48u + sizeof(_g4_t_s1)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_s1a)) > _g4_s6 ? (48u + sizeof(_g4_t_s1a)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_s1b)) > _g4_s7 ? (48u + sizeof(_g4_t_s1b)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_s1g)) > _g4_s8 ? (48u + sizeof(_g4_t_s1g)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_s1c)) > _g4_s9 ? (48u + sizeof(_g4_t_s1c)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_s1d)) > _g4_s10 ? (48u + sizeof(_g4_t_s1d)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_s1e)) > _g4_s11 ? (48u + sizeof(_g4_t_s1e)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_s1f)) > _g4_s12 ? (48u + sizeof(_g4_t_s1f)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v142)) > _g4_s13 ? (52u + sizeof(_g4_t_v142)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v143)) > _g4_s14 ? (52u + sizeof(_g4_t_v143)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v144)) > _g4_s15 ? (52u + sizeof(_g4_t_v144)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v145)) > _g4_s16 ? (52u + sizeof(_g4_t_v145)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v146)) > _g4_s17 ? (52u + sizeof(_g4_t_v146)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v147)) > _g4_s18 ? (52u + sizeof(_g4_t_v147)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v148)) > _g4_s19 ? (52u + sizeof(_g4_t_v148)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v149)) > _g4_s20 ? (52u + sizeof(_g4_t_v149)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v150)) > _g4_s21 ? (116u + sizeof(_g4_t_v150)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_ItemInfoArray)) > _g4_s22 ? (120u + sizeof(_g4_t_ItemInfoArray)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_i)) > _g4_s23 ? (124u + sizeof(_g4_t_i)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v153)) > _g4_s24 ? (128u + sizeof(_g4_t_v153)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v154)) > _g4_s25 ? (132u + sizeof(_g4_t_v154)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v155)) > _g4_s26 ? (136u + sizeof(_g4_t_v155)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v156)) > _g4_s27 ? (140u + sizeof(_g4_t_v156)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v157)) > _g4_s28 ? (144u + sizeof(_g4_t_v157)) : _g4_s28,
    _g4_s30 = (148u + sizeof(_g4_t_v158)) > _g4_s29 ? (148u + sizeof(_g4_t_v158)) : _g4_s29,
    _g4_s31 = (152u + sizeof(_g4_t_v159)) > _g4_s30 ? (152u + sizeof(_g4_t_v159)) : _g4_s30,
    _g4_s32 = (156u + sizeof(_g4_t_n)) > _g4_s31 ? (156u + sizeof(_g4_t_n)) : _g4_s31,
    _g4_s33 = (156u + sizeof(_g4_t_na)) > _g4_s32 ? (156u + sizeof(_g4_t_na)) : _g4_s32,
    _g4_s34 = (156u + sizeof(_g4_t_nb)) > _g4_s33 ? (156u + sizeof(_g4_t_nb)) : _g4_s33,
    _g4_s35 = (160u + sizeof(_g4_t_v163)) > _g4_s34 ? (160u + sizeof(_g4_t_v163)) : _g4_s34,
    _g4_s36 = (164u + sizeof(_g4_t_v164)) > _g4_s35 ? (164u + sizeof(_g4_t_v164)) : _g4_s35,
    _g4_s37 = (172u + sizeof(_g4_t_v165)) > _g4_s36 ? (172u + sizeof(_g4_t_v165)) : _g4_s36,
    _g4_s38 = (172u + sizeof(_g4_t_v166)) > _g4_s37 ? (172u + sizeof(_g4_t_v166)) : _g4_s37,
    _g4_s39 = (172u + sizeof(_g4_t_v167)) > _g4_s38 ? (172u + sizeof(_g4_t_v167)) : _g4_s38,
    _g4_s40 = (172u + sizeof(_g4_t_v168)) > _g4_s39 ? (172u + sizeof(_g4_t_v168)) : _g4_s39,
    _g4_s41 = (172u + sizeof(_g4_t_v169)) > _g4_s40 ? (172u + sizeof(_g4_t_v169)) : _g4_s40,
    _g4_s42 = (176u + sizeof(_g4_t_v170)) > _g4_s41 ? (176u + sizeof(_g4_t_v170)) : _g4_s41,
    _g4_s43 = (180u + sizeof(_g4_t_v171)) > _g4_s42 ? (180u + sizeof(_g4_t_v171)) : _g4_s42,
    _g4_s44 = (180u + sizeof(_g4_t_v172)) > _g4_s43 ? (180u + sizeof(_g4_t_v172)) : _g4_s43,
    _g4_s45 = (180u + sizeof(_g4_t_v173)) > _g4_s44 ? (180u + sizeof(_g4_t_v173)) : _g4_s44,
    _g4_s46 = (180u + sizeof(_g4_t_v174)) > _g4_s45 ? (180u + sizeof(_g4_t_v174)) : _g4_s45,
    _g4_s47 = (180u + sizeof(_g4_t_v175)) > _g4_s46 ? (180u + sizeof(_g4_t_v175)) : _g4_s46,
    _g4_s48 = (180u + sizeof(_g4_t_v176)) > _g4_s47 ? (180u + sizeof(_g4_t_v176)) : _g4_s47,
    _g4_s49 = (184u + sizeof(_g4_t_v177)) > _g4_s48 ? (184u + sizeof(_g4_t_v177)) : _g4_s48,
    _g4_s50 = (184u + sizeof(_g4_t_v178)) > _g4_s49 ? (184u + sizeof(_g4_t_v178)) : _g4_s49,
    _g4_s51 = (184u + sizeof(_g4_t_v179)) > _g4_s50 ? (184u + sizeof(_g4_t_v179)) : _g4_s50,
    _g4_s52 = (184u + sizeof(_g4_t_v180)) > _g4_s51 ? (184u + sizeof(_g4_t_v180)) : _g4_s51,
    _g4_s53 = (184u + sizeof(_g4_t_v181)) > _g4_s52 ? (184u + sizeof(_g4_t_v181)) : _g4_s52,
    _g4_s54 = (184u + sizeof(_g4_t_v182)) > _g4_s53 ? (184u + sizeof(_g4_t_v182)) : _g4_s53,
    _g4_s55 = (184u + sizeof(_g4_t_v183)) > _g4_s54 ? (184u + sizeof(_g4_t_v183)) : _g4_s54,
    _g4_s56 = (184u + sizeof(_g4_t_v184)) > _g4_s55 ? (184u + sizeof(_g4_t_v184)) : _g4_s55,
    _g4_s57 = (200u + sizeof(_g4_t_v185)) > _g4_s56 ? (200u + sizeof(_g4_t_v185)) : _g4_s56,
    _g4_s58 = (212u + sizeof(_g4_t_v186)) > _g4_s57 ? (212u + sizeof(_g4_t_v186)) : _g4_s57,
    _g4_s59 = (221u + sizeof(_g4_t_v187)) > _g4_s58 ? (221u + sizeof(_g4_t_v187)) : _g4_s58,
    _g4_s60 = (244u + sizeof(_g4_t_v188)) > _g4_s59 ? (244u + sizeof(_g4_t_v188)) : _g4_s59,
    _g4_s61 = (248u + sizeof(_g4_t_v189)) > _g4_s60 ? (248u + sizeof(_g4_t_v189)) : _g4_s60,
    _g4_s62 = (252u + sizeof(_g4_t_v190)) > _g4_s61 ? (252u + sizeof(_g4_t_v190)) : _g4_s61,
    _g4_s63 = (256u + sizeof(_g4_t_v191)) > _g4_s62 ? (256u + sizeof(_g4_t_v191)) : _g4_s62,
    _g4_s64 = (260u + sizeof(_g4_t_v192)) > _g4_s63 ? (260u + sizeof(_g4_t_v192)) : _g4_s63,
    _g4_s65 = (264u + sizeof(_g4_t_v193)) > _g4_s64 ? (264u + sizeof(_g4_t_v193)) : _g4_s64,
    _g4_s66 = (268u + sizeof(_g4_t_v194)) > _g4_s65 ? (268u + sizeof(_g4_t_v194)) : _g4_s65,
    _g4_s67 = (272u + sizeof(_g4_t_nptr)) > _g4_s66 ? (272u + sizeof(_g4_t_nptr)) : _g4_s66,
    _g4_s68 = (276u + sizeof(_g4_t_v196)) > _g4_s67 ? (276u + sizeof(_g4_t_v196)) : _g4_s67,
    _g4_s69 = (280u + sizeof(_g4_t_v197)) > _g4_s68 ? (280u + sizeof(_g4_t_v197)) : _g4_s68,
    _g4_s70 = (284u + sizeof(_g4_t_v198)) > _g4_s69 ? (284u + sizeof(_g4_t_v198)) : _g4_s69,
    _g4_s71 = (288u + sizeof(_g4_t_v199)) > _g4_s70 ? (288u + sizeof(_g4_t_v199)) : _g4_s70,
    _g4_s72 = (292u + sizeof(_g4_t_v200)) > _g4_s71 ? (292u + sizeof(_g4_t_v200)) : _g4_s71,
    _g4_s73 = (296u + sizeof(_g4_t_v201)) > _g4_s72 ? (296u + sizeof(_g4_t_v201)) : _g4_s72,
    _g4_s74 = (300u + sizeof(_g4_t_v202)) > _g4_s73 ? (300u + sizeof(_g4_t_v202)) : _g4_s73,
    _g4_s75 = (304u + sizeof(_g4_t_v203)) > _g4_s74 ? (304u + sizeof(_g4_t_v203)) : _g4_s74,
    _g4_s76 = (308u + sizeof(_g4_t_v204)) > _g4_s75 ? (308u + sizeof(_g4_t_v204)) : _g4_s75,
    _g4_s77 = (312u + sizeof(_g4_t_s2)) > _g4_s76 ? (312u + sizeof(_g4_t_s2)) : _g4_s76,
    _g4_s78 = (316u + sizeof(_g4_t_v206)) > _g4_s77 ? (316u + sizeof(_g4_t_v206)) : _g4_s77,
    _g4_s79 = (320u + sizeof(_g4_t_v207)) > _g4_s78 ? (320u + sizeof(_g4_t_v207)) : _g4_s78,
    _g4_s80 = (324u + sizeof(_g4_t_v208)) > _g4_s79 ? (324u + sizeof(_g4_t_v208)) : _g4_s79,
    _g4_s81 = (328u + sizeof(_g4_t_v209)) > _g4_s80 ? (328u + sizeof(_g4_t_v209)) : _g4_s80,
    _g4_s82 = (332u + sizeof(_g4_t_v210)) > _g4_s81 ? (332u + sizeof(_g4_t_v210)) : _g4_s81,
    _g4_s83 = (336u + sizeof(_g4_t_v211)) > _g4_s82 ? (336u + sizeof(_g4_t_v211)) : _g4_s82,
    _g4_s84 = (340u + sizeof(_g4_t_v212)) > _g4_s83 ? (340u + sizeof(_g4_t_v212)) : _g4_s83,
    _g4_s85 = (344u + sizeof(_g4_t_v213)) > _g4_s84 ? (344u + sizeof(_g4_t_v213)) : _g4_s84,
    _g4_s86 = (348u + sizeof(_g4_t_v214)) > _g4_s85 ? (348u + sizeof(_g4_t_v214)) : _g4_s85,
    _g4_s87 = (354u + sizeof(_g4_t_v215)) > _g4_s86 ? (354u + sizeof(_g4_t_v215)) : _g4_s86,
    _g4_s88 = (356u + sizeof(_g4_t_v216)) > _g4_s87 ? (356u + sizeof(_g4_t_v216)) : _g4_s87,
    _g4_s89 = (362u + sizeof(_g4_t_v217)) > _g4_s88 ? (362u + sizeof(_g4_t_v217)) : _g4_s88,
    _g4_s90 = (364u + sizeof(_g4_t_v218)) > _g4_s89 ? (364u + sizeof(_g4_t_v218)) : _g4_s89,
    _g4_s91 = (370u + sizeof(_g4_t_v219)) > _g4_s90 ? (370u + sizeof(_g4_t_v219)) : _g4_s90,
    _g4_s92 = (372u + sizeof(_g4_t_v220)) > _g4_s91 ? (372u + sizeof(_g4_t_v220)) : _g4_s91,
    _g4_s93 = (378u + sizeof(_g4_t_v221)) > _g4_s92 ? (378u + sizeof(_g4_t_v221)) : _g4_s92,
    _g4_s94 = (380u + sizeof(_g4_t_v222)) > _g4_s93 ? (380u + sizeof(_g4_t_v222)) : _g4_s93,
    _g4_s95 = (386u + sizeof(_g4_t_v223)) > _g4_s94 ? (386u + sizeof(_g4_t_v223)) : _g4_s94,
    _g4_s96 = (388u + sizeof(_g4_t_v224)) > _g4_s95 ? (388u + sizeof(_g4_t_v224)) : _g4_s95,
    _g4_s97 = (394u + sizeof(_g4_t_v225)) > _g4_s96 ? (394u + sizeof(_g4_t_v225)) : _g4_s96,
    _g4_s98 = (396u + sizeof(_g4_t_v226)) > _g4_s97 ? (396u + sizeof(_g4_t_v226)) : _g4_s97,
    _g4_s99 = (402u + sizeof(_g4_t_v227)) > _g4_s98 ? (402u + sizeof(_g4_t_v227)) : _g4_s98,
    _g4_s100 = (404u + sizeof(_g4_t_v228)) > _g4_s99 ? (404u + sizeof(_g4_t_v228)) : _g4_s99,
    _g4_s101 = (410u + sizeof(_g4_t_v229)) > _g4_s100 ? (410u + sizeof(_g4_t_v229)) : _g4_s100,
    _g4_s102 = (412u + sizeof(_g4_t_v230)) > _g4_s101 ? (412u + sizeof(_g4_t_v230)) : _g4_s101,
    _g4_s103 = (418u + sizeof(_g4_t_v231)) > _g4_s102 ? (418u + sizeof(_g4_t_v231)) : _g4_s102,
    _g4_s104 = (420u + sizeof(_g4_t_v232)) > _g4_s103 ? (420u + sizeof(_g4_t_v232)) : _g4_s103,
    _g4_s105 = (426u + sizeof(_g4_t_v233)) > _g4_s104 ? (426u + sizeof(_g4_t_v233)) : _g4_s104,
    _g4_s106 = (428u + sizeof(_g4_t_v234)) > _g4_s105 ? (428u + sizeof(_g4_t_v234)) : _g4_s105,
    _g4_s107 = (434u + sizeof(_g4_t_v235)) > _g4_s106 ? (434u + sizeof(_g4_t_v235)) : _g4_s106,
    _g4_s108 = (436u + sizeof(_g4_t_v236)) > _g4_s107 ? (436u + sizeof(_g4_t_v236)) : _g4_s107,
    _g4_s109 = (440u + sizeof(_g4_t_v237)) > _g4_s108 ? (440u + sizeof(_g4_t_v237)) : _g4_s108,
    _g4_s110 = (444u + sizeof(_g4_t_v238)) > _g4_s109 ? (444u + sizeof(_g4_t_v238)) : _g4_s109,
    _g4_s111 = (448u + sizeof(_g4_t_v239)) > _g4_s110 ? (448u + sizeof(_g4_t_v239)) : _g4_s110,
    _g4_s112 = (452u + sizeof(_g4_t_v240)) > _g4_s111 ? (452u + sizeof(_g4_t_v240)) : _g4_s111,
    _g4_s113 = (456u + sizeof(_g4_t_v241)) > _g4_s112 ? (456u + sizeof(_g4_t_v241)) : _g4_s112,
    _g4_s114 = (460u + sizeof(_g4_t_v242)) > _g4_s113 ? (460u + sizeof(_g4_t_v242)) : _g4_s113,
    _g4_s115 = (464u + sizeof(_g4_t_v243)) > _g4_s114 ? (464u + sizeof(_g4_t_v243)) : _g4_s114,
    _g4_s116 = (468u + sizeof(_g4_t_v244)) > _g4_s115 ? (468u + sizeof(_g4_t_v244)) : _g4_s115,
    _g4_s117 = (472u + sizeof(_g4_t_v245)) > _g4_s116 ? (472u + sizeof(_g4_t_v245)) : _g4_s116,
    _g4_s118 = (600u + sizeof(_g4_t_v246)) > _g4_s117 ? (600u + sizeof(_g4_t_v246)) : _g4_s117,
    _g4_s119 = (604u + sizeof(_g4_t_v247)) > _g4_s118 ? (604u + sizeof(_g4_t_v247)) : _g4_s118,
    _g4_s120 = (608u + sizeof(_g4_t_v248)) > _g4_s119 ? (608u + sizeof(_g4_t_v248)) : _g4_s119,
    _g4_s121 = (614u + sizeof(_g4_t_v249)) > _g4_s120 ? (614u + sizeof(_g4_t_v249)) : _g4_s120,
    _g4_s122 = (616u + sizeof(_g4_t_v250)) > _g4_s121 ? (616u + sizeof(_g4_t_v250)) : _g4_s121,
    _g4_s123 = (622u + sizeof(_g4_t_v251)) > _g4_s122 ? (622u + sizeof(_g4_t_v251)) : _g4_s122,
    _g4_s124 = (624u + sizeof(_g4_t_v252)) > _g4_s123 ? (624u + sizeof(_g4_t_v252)) : _g4_s123,
    _g4_s125 = (630u + sizeof(_g4_t_v253)) > _g4_s124 ? (630u + sizeof(_g4_t_v253)) : _g4_s124,
    _g4_s126 = (632u + sizeof(_g4_t_v254)) > _g4_s125 ? (632u + sizeof(_g4_t_v254)) : _g4_s125,
    _g4_s127 = (638u + sizeof(_g4_t_v255)) > _g4_s126 ? (638u + sizeof(_g4_t_v255)) : _g4_s126,
    _g4_s128 = (640u + sizeof(_g4_t_v256)) > _g4_s127 ? (640u + sizeof(_g4_t_v256)) : _g4_s127,
    _g4_s129 = (646u + sizeof(_g4_t_v257)) > _g4_s128 ? (646u + sizeof(_g4_t_v257)) : _g4_s128,
    _g4_s130 = (648u + sizeof(_g4_t_v258)) > _g4_s129 ? (648u + sizeof(_g4_t_v258)) : _g4_s129,
    _g4_s131 = (654u + sizeof(_g4_t_v259)) > _g4_s130 ? (654u + sizeof(_g4_t_v259)) : _g4_s130,
    _g4_s132 = (656u + sizeof(_g4_t_v260)) > _g4_s131 ? (656u + sizeof(_g4_t_v260)) : _g4_s131,
    _g4_s133 = (662u + sizeof(_g4_t_v261)) > _g4_s132 ? (662u + sizeof(_g4_t_v261)) : _g4_s132,
    _g4_s134 = (664u + sizeof(_g4_t_v262)) > _g4_s133 ? (664u + sizeof(_g4_t_v262)) : _g4_s133,
    _g4_s135 = (670u + sizeof(_g4_t_v263)) > _g4_s134 ? (670u + sizeof(_g4_t_v263)) : _g4_s134,
    _g4_s136 = (672u + sizeof(_g4_t_v264)) > _g4_s135 ? (672u + sizeof(_g4_t_v264)) : _g4_s135,
    _g4_s137 = (678u + sizeof(_g4_t_v265)) > _g4_s136 ? (678u + sizeof(_g4_t_v265)) : _g4_s136,
    _g4_s138 = (680u + sizeof(_g4_t_v266)) > _g4_s137 ? (680u + sizeof(_g4_t_v266)) : _g4_s137,
    _g4_s139 = (686u + sizeof(_g4_t_v267)) > _g4_s138 ? (686u + sizeof(_g4_t_v267)) : _g4_s138,
    _g4_s140 = (688u + sizeof(_g4_t_v268)) > _g4_s139 ? (688u + sizeof(_g4_t_v268)) : _g4_s139,
    _g4_s141 = (694u + sizeof(_g4_t_v269)) > _g4_s140 ? (694u + sizeof(_g4_t_v269)) : _g4_s140,
    _g4_s142 = (696u + sizeof(_g4_t_v270)) > _g4_s141 ? (696u + sizeof(_g4_t_v270)) : _g4_s141,
    _g4_s143 = (700u + sizeof(_g4_t_v271)) > _g4_s142 ? (700u + sizeof(_g4_t_v271)) : _g4_s142,
    _g4_s144 = (704u + sizeof(_g4_t_v272)) > _g4_s143 ? (704u + sizeof(_g4_t_v272)) : _g4_s143,
    _g4_s145 = (708u + sizeof(_g4_t_v273)) > _g4_s144 ? (708u + sizeof(_g4_t_v273)) : _g4_s144,
    _g4_s146 = (712u + sizeof(_g4_t_v274)) > _g4_s145 ? (712u + sizeof(_g4_t_v274)) : _g4_s145,
    _g4_s147 = (716u + sizeof(_g4_t_v275)) > _g4_s146 ? (716u + sizeof(_g4_t_v275)) : _g4_s146,
    _g4_s148 = (720u + sizeof(_g4_t_v276)) > _g4_s147 ? (720u + sizeof(_g4_t_v276)) : _g4_s147,
    _g4_s149 = (724u + sizeof(_g4_t_v277)) > _g4_s148 ? (724u + sizeof(_g4_t_v277)) : _g4_s148,
    _g4_s150 = (728u + sizeof(_g4_t_v278)) > _g4_s149 ? (728u + sizeof(_g4_t_v278)) : _g4_s149,
    _g4_s151 = (744u + sizeof(_g4_t_v279)) > _g4_s150 ? (744u + sizeof(_g4_t_v279)) : _g4_s150,
    _g4_s152 = (748u + sizeof(_g4_t_v280)) > _g4_s151 ? (748u + sizeof(_g4_t_v280)) : _g4_s151,
    _g4_s153 = (754u + sizeof(_g4_t_v281)) > _g4_s152 ? (754u + sizeof(_g4_t_v281)) : _g4_s152,
    _g4_s154 = (756u + sizeof(_g4_t_v282)) > _g4_s153 ? (756u + sizeof(_g4_t_v282)) : _g4_s153,
    _g4_s155 = (762u + sizeof(_g4_t_v283)) > _g4_s154 ? (762u + sizeof(_g4_t_v283)) : _g4_s154,
    _g4_s156 = (764u + sizeof(_g4_t_v284)) > _g4_s155 ? (764u + sizeof(_g4_t_v284)) : _g4_s155,
    _g4_s157 = (770u + sizeof(_g4_t_v285)) > _g4_s156 ? (770u + sizeof(_g4_t_v285)) : _g4_s156,
    _g4_s158 = (772u + sizeof(_g4_t_v286)) > _g4_s157 ? (772u + sizeof(_g4_t_v286)) : _g4_s157,
    _g4_s159 = (778u + sizeof(_g4_t_v287)) > _g4_s158 ? (778u + sizeof(_g4_t_v287)) : _g4_s158,
    _g4_s160 = (780u + sizeof(_g4_t_v288)) > _g4_s159 ? (780u + sizeof(_g4_t_v288)) : _g4_s159,
    _g4_s161 = (790u + sizeof(_g4_t_v289)) > _g4_s160 ? (790u + sizeof(_g4_t_v289)) : _g4_s160,
    _g4_s162 = (792u + sizeof(_g4_t_v290)) > _g4_s161 ? (792u + sizeof(_g4_t_v290)) : _g4_s161,
    _g4_s163 = (798u + sizeof(_g4_t_v291)) > _g4_s162 ? (798u + sizeof(_g4_t_v291)) : _g4_s162,
    _g4_s164 = (800u + sizeof(_g4_t_v292)) > _g4_s163 ? (800u + sizeof(_g4_t_v292)) : _g4_s163,
    _g4_s165 = (810u + sizeof(_g4_t_v293)) > _g4_s164 ? (810u + sizeof(_g4_t_v293)) : _g4_s164,
    _g4_s166 = (812u + sizeof(_g4_t_v294)) > _g4_s165 ? (812u + sizeof(_g4_t_v294)) : _g4_s165,
    _g4_s167 = (818u + sizeof(_g4_t_v295)) > _g4_s166 ? (818u + sizeof(_g4_t_v295)) : _g4_s166,
    _g4_s168 = (820u + sizeof(_g4_t_v296)) > _g4_s167 ? (820u + sizeof(_g4_t_v296)) : _g4_s167,
    _g4_s169 = (824u + sizeof(_g4_t_v297)) > _g4_s168 ? (824u + sizeof(_g4_t_v297)) : _g4_s168,
    _g4_s170 = (828u + sizeof(_g4_t_v298)) > _g4_s169 ? (828u + sizeof(_g4_t_v298)) : _g4_s169,
    _g4_s171 = (832u + sizeof(_g4_t_v299)) > _g4_s170 ? (832u + sizeof(_g4_t_v299)) : _g4_s170,
    _g4_s172 = (836u + sizeof(_g4_t_v300)) > _g4_s171 ? (836u + sizeof(_g4_t_v300)) : _g4_s171,
    _g4_s173 = (840u + sizeof(_g4_t_v301)) > _g4_s172 ? (840u + sizeof(_g4_t_v301)) : _g4_s172,
    _g4_s174 = (844u + sizeof(_g4_t_v302)) > _g4_s173 ? (844u + sizeof(_g4_t_v302)) : _g4_s173,
    _g4_s175 = (848u + sizeof(_g4_t_v303)) > _g4_s174 ? (848u + sizeof(_g4_t_v303)) : _g4_s174,
    _g4_s176 = (852u + sizeof(_g4_t_v304)) > _g4_s175 ? (852u + sizeof(_g4_t_v304)) : _g4_s175,
    _g4_s177 = (858u + sizeof(_g4_t_v305)) > _g4_s176 ? (858u + sizeof(_g4_t_v305)) : _g4_s176,
    _g4_s178 = (860u + sizeof(_g4_t_v306)) > _g4_s177 ? (860u + sizeof(_g4_t_v306)) : _g4_s177,
    _g4_s179 = (866u + sizeof(_g4_t_v307)) > _g4_s178 ? (866u + sizeof(_g4_t_v307)) : _g4_s178,
    _g4_s180 = (868u + sizeof(_g4_t_v308)) > _g4_s179 ? (868u + sizeof(_g4_t_v308)) : _g4_s179,
    _g4_s181 = (888u + sizeof(_g4_t_v309)) > _g4_s180 ? (888u + sizeof(_g4_t_v309)) : _g4_s180,
    _g4_s182 = (1036u + sizeof(_g4_t_v310)) > _g4_s181 ? (1036u + sizeof(_g4_t_v310)) : _g4_s181,
    _g4_s183 = (1040u + sizeof(_g4_t_v311)) > _g4_s182 ? (1040u + sizeof(_g4_t_v311)) : _g4_s182
  };
  alignas(16) uint8_t _g4_sf[_g4_s183];
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 8u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 8u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 8u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 16u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 16u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 48u);
  _g4_t_s1a &s1a = *reinterpret_cast<_g4_t_s1a *>(_g4_sf + 48u);
  _g4_t_s1b &s1b = *reinterpret_cast<_g4_t_s1b *>(_g4_sf + 48u);
  _g4_t_s1g &s1g = *reinterpret_cast<_g4_t_s1g *>(_g4_sf + 48u);
  _g4_t_s1c &s1c = *reinterpret_cast<_g4_t_s1c *>(_g4_sf + 48u);
  _g4_t_s1d &s1d = *reinterpret_cast<_g4_t_s1d *>(_g4_sf + 48u);
  _g4_t_s1e &s1e = *reinterpret_cast<_g4_t_s1e *>(_g4_sf + 48u);
  _g4_t_s1f &s1f = *reinterpret_cast<_g4_t_s1f *>(_g4_sf + 48u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 52u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 52u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 52u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 52u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 52u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 52u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 52u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 52u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 116u);
  _g4_t_ItemInfoArray &ItemInfoArray = *reinterpret_cast<_g4_t_ItemInfoArray *>(_g4_sf + 120u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 124u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 128u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 132u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 136u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 140u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 144u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 148u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 152u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 156u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 156u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 156u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 160u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 164u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 172u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 172u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 172u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 172u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 172u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 176u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 180u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 180u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 180u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 180u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 180u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 180u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 184u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 184u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 184u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 184u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 184u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 184u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 184u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 184u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 200u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 212u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 221u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 244u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 248u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 252u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 256u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 260u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 264u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 268u);
  _g4_t_nptr &nptr = *reinterpret_cast<_g4_t_nptr *>(_g4_sf + 272u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 276u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 280u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 284u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 288u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 292u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 296u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 300u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 304u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 308u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 312u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 316u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 320u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 324u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 328u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 332u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 336u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 340u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 344u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 348u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 354u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 356u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 362u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 364u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 370u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 372u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 378u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 380u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 386u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 388u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 394u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 396u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 402u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 404u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 410u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 412u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 418u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 420u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 426u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 428u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 434u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 436u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 440u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 444u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 448u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 452u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 456u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 460u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 464u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 468u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 472u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 600u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 604u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 608u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 614u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 616u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 622u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 624u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 630u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 632u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 638u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 640u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 646u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 648u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 654u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 656u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 662u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 664u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 670u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 672u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 678u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 680u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 686u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 688u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 694u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 696u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 700u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 704u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 708u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 712u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 716u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 720u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 724u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 728u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 744u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 748u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 754u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 756u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 762u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 764u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 770u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 772u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 778u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 780u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 790u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 792u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 798u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 800u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 810u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 812u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 818u);
  _g4_t_v296 &v296 = *reinterpret_cast<_g4_t_v296 *>(_g4_sf + 820u);
  _g4_t_v297 &v297 = *reinterpret_cast<_g4_t_v297 *>(_g4_sf + 824u);
  _g4_t_v298 &v298 = *reinterpret_cast<_g4_t_v298 *>(_g4_sf + 828u);
  _g4_t_v299 &v299 = *reinterpret_cast<_g4_t_v299 *>(_g4_sf + 832u);
  _g4_t_v300 &v300 = *reinterpret_cast<_g4_t_v300 *>(_g4_sf + 836u);
  _g4_t_v301 &v301 = *reinterpret_cast<_g4_t_v301 *>(_g4_sf + 840u);
  _g4_t_v302 &v302 = *reinterpret_cast<_g4_t_v302 *>(_g4_sf + 844u);
  _g4_t_v303 &v303 = *reinterpret_cast<_g4_t_v303 *>(_g4_sf + 848u);
  _g4_t_v304 &v304 = *reinterpret_cast<_g4_t_v304 *>(_g4_sf + 852u);
  _g4_t_v305 &v305 = *reinterpret_cast<_g4_t_v305 *>(_g4_sf + 858u);
  _g4_t_v306 &v306 = *reinterpret_cast<_g4_t_v306 *>(_g4_sf + 860u);
  _g4_t_v307 &v307 = *reinterpret_cast<_g4_t_v307 *>(_g4_sf + 866u);
  _g4_t_v308 &v308 = *reinterpret_cast<_g4_t_v308 *>(_g4_sf + 868u);
  _g4_t_v309 &v309 = *reinterpret_cast<_g4_t_v309 *>(_g4_sf + 888u);
  _g4_t_v310 &v310 = *reinterpret_cast<_g4_t_v310 *>(_g4_sf + 1036u);
  _g4_t_v311 &v311 = *reinterpret_cast<_g4_t_v311 *>(_g4_sf + 1040u);

  v311[36] = (uint32_t)(uintptr_t)(&self);
  v164 = (iap::ItemManager::Self *)self;
  v150 = a3;
  v153 = *(self + 1);
  glwebtools::Mutex::Lock(v153);
  if ( *(uint32_t *)v164 != 1 )
    return glwebtools::Mutex::Unlock(v153);
  if ( v150 <= 0 )
  {
    g4_std_compat::string_assign((int)(uintptr_t)(v164) + 12, &unk_1B15112, 0);
    *(uint32_t *)v164 = 2;
    *((uint8_t *)v164 + 8) = 0;
    return glwebtools::Mutex::Unlock(v153);
  }
  ItemInfoArray = InAppBilling_GetItemInfoArray();
  v163 = (char *)ItemInfoArray;
  v159 = (char *)v164 + 20;
  for ( i = 0; i != v150; ++i )
  {
    v280 = &dword_213B814;
    v282 = &dword_213B814;
    v284 = &dword_213B814;
    v286 = &dword_213B814;
    v290 = &dword_213B814;
    v294 = &dword_213B814;
    v296 = &dword_213B814;
    v297 = &dword_213B814;
    v301 = &v299;
    v302 = &v299;
    v281 = 0;
    v283 = 0;
    v285 = 0;
    v279 = (uint32_t (**)(iap::BillingMethodAndroid::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20966C8));
    v304 = &dword_213B814;
    v306 = &dword_213B814;
    v287 = 0;
    v289 = 0;
    v291 = 0;
    v293 = 0;
    v295 = 0;
    v299 = 0;
    v300 = nullptr;
    v303 = 0;
    v305 = 0;
    v307 = 0;
    memset(v308, 0, 12);
    iap::BillingMethodAndroid::Clear((iap::BillingMethodAndroid::Self *)&v279);
    IAB_STORE_ITEM::getProperty((IAB_STORE_ITEM::Self *)&v188, v163);
    g4_std::string::assign_str(&v304, &v188);
    v305 = 1;
    v3 = (void *)(v188 - 12);
    if ( (uint32_t *)(v188 - 12) != dword_213B808 )
    {
      if ( __sync_fetch_and_add((volatile int32_t *)(v188 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v3);
      if ( v305 == 0 )
        goto LABEL_231;
    }
    if ( *(v304 - 3) == 0 )
    {
LABEL_231:
      IAB_STORE_ITEM::getProperty((IAB_STORE_ITEM::Self *)&v189, v163);
      g4_std::string::assign_str(&v304, &v189);
      v305 = 1;
      v108 = (void *)(v189 - 12);
      if ( (uint32_t *)(v189 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v189 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v108);
      }
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v190), "android", (int)(uintptr_t)(&v187));
    g4_std::string::assign_str(&v280, &v190);
    v281 = 1;
    v4 = (void *)(v190 - 12);
    if ( (uint32_t *)(v190 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v190 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v191), "legacy", (int)(uintptr_t)(&v187) + 1);
    g4_std::string::assign_str(&v282, &v191);
    v283 = 1;
    v5 = (void *)(v191 - 12);
    if ( (uint32_t *)(v191 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v191 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    IAB_STORE_ITEM::getProperty((IAB_STORE_ITEM::Self *)&v192, v163);
    g4_std::string::assign_str(&v284, &v192);
    v285 = 1;
    v6 = (void *)(v192 - 12);
    if ( (uint32_t *)(v192 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v192 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    IAB_STORE_ITEM::getProperty((IAB_STORE_ITEM::Self *)&v193, v163);
    g4_std::string::assign_str(&v286, &v193);
    v287 = 1;
    v7 = (void *)(v193 - 12);
    if ( (uint32_t *)(v193 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v193 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    IAB_STORE_ITEM::getProperty((IAB_STORE_ITEM::Self *)&v194, v163);
    g4_std::string::assign_str(&v290, &v194);
    v291 = 1;
    v8 = (void *)(v194 - 12);
    if ( (uint32_t *)(v194 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v194 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    IAB_STORE_ITEM::getProperty((IAB_STORE_ITEM::Self *)&nptr, v163);
    v288 = strtod(nptr, nullptr);
    v289 = 1;
    v9 = nptr - 12;
    if ( nptr - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)nptr - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    IAB_STORE_ITEM::getProperty((IAB_STORE_ITEM::Self *)&v196, v163);
    g4_std::string::assign_str(&v294, &v196);
    v295 = 1;
    v10 = (void *)(v196 - 12);
    if ( (uint32_t *)(v196 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v196 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    IAB_STORE_ITEM::getProperty((IAB_STORE_ITEM::Self *)&v197, v163);
    v292 = strtod(v197, nullptr);
    v293 = 1;
    v11 = v197 - 12;
    if ( v197 - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v197 - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
    v215 = 0;
    v242 = &v240;
    v243 = &v240;
    v217 = 0;
    v219 = 0;
    v221 = 0;
    v213 = (uint32_t (**)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(&off_2096648);
    v214 = &dword_213B814;
    v216 = &dword_213B814;
    v218 = &dword_213B814;
    v220 = &dword_213B814;
    v222 = &dword_213B814;
    v224 = &dword_213B814;
    v226 = &dword_213B814;
    v228 = &dword_213B814;
    v223 = 0;
    v225 = 0;
    v227 = 0;
    v229 = 0;
    v231 = 0;
    v233 = 0;
    v235 = 0;
    v236 = nullptr;
    v237 = nullptr;
    v238 = 0;
    v240 = 0;
    v241 = nullptr;
    v244 = 0;
    g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
      (int)(uintptr_t)(&v239),
      nullptr);
    v207 = &dword_213B814;
    v242 = &v240;
    v243 = &v240;
    v241 = nullptr;
    v244 = 0;
    g4_std::string::assign_str(&v214, &v207);
    g4_std::string::Destroy(&v207);
    v208 = &dword_213B814;
    v215 = 0;
    g4_std::string::assign_str(&v216, &v208);
    g4_std::string::Destroy(&v208);
    v206 = &dword_213B814;
    v217 = 0;
    g4_std::string::assign_str(&v218, &v206);
    g4_std::string::Destroy(&v206);
    v209 = &dword_213B814;
    v219 = 0;
    g4_std::string::assign_str(&v220, &v209);
    g4_std::string::Destroy(&v209);
    v210 = &dword_213B814;
    v221 = 0;
    g4_std::string::assign_str(&v222, &v210);
    g4_std::string::Destroy(&v210);
    v211 = &dword_213B814;
    v223 = 0;
    g4_std::string::assign_str(&v226, &v211);
    g4_std::string::Destroy(&v211);
    v212 = &dword_213B814;
    v227 = 0;
    g4_std::string::assign_str(&v228, &v212);
    v12 = v212 - 3;
    if ( v212 - 3 != dword_213B808 && __sync_fetch_and_add(v212 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v12);
    v229 = 0;
    v230 = 0;
    v231 = 0;
    v232 = 0;
    v233 = 0;
    v234 = 0;
    v235 = 0;
    g4_std::string::assign_str(&v214, v163);
    v215 = 1;
    g4_std::string::assign_str(&v216, v163 + 4);
    v217 = 1;
    IAB_STORE_ITEM::getProperty((IAB_STORE_ITEM::Self *)&v198, v163);
    g4_std::string::assign_str(&v220, &v198);
    v221 = 1;
    v13 = (void *)(v198 - 12);
    if ( (uint32_t *)(v198 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v198 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    IAB_STORE_ITEM::getProperty((IAB_STORE_ITEM::Self *)&v199, v163);
    g4_std::string::assign_str(&v218, &v199);
    v219 = 1;
    v14 = (void *)(v199 - 12);
    if ( (uint32_t *)(v199 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v199 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    IAB_STORE_ITEM::getProperty((IAB_STORE_ITEM::Self *)&v200, v163);
    g4_std::string::assign_str(&v222, &v200);
    v223 = 1;
    v15 = (void *)(v200 - 12);
    if ( (uint32_t *)(v200 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v200 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    IAB_STORE_ITEM::getProperty((IAB_STORE_ITEM::Self *)&v201, v163);
    g4_std::string::assign_str(&v226, &v201);
    v227 = 1;
    v16 = (void *)(v201 - 12);
    if ( (uint32_t *)(v201 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v201 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    IAB_STORE_ITEM::getProperty((IAB_STORE_ITEM::Self *)&v202, v163);
    g4_std::string::assign_str(&v228, &v202);
    v229 = 1;
    v17 = (void *)(v202 - 12);
    if ( (uint32_t *)(v202 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v202 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v17);
    }
    IAB_STORE_ITEM::getProperty((IAB_STORE_ITEM::Self *)&v203, v163);
    v18 = atoi(v203);
    v19 = v203 - 12;
    if ( v203 - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v203 - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v19);
    }
    IAB_STORE_ITEM::getProperty((IAB_STORE_ITEM::Self *)&v204, v163);
    v20 = atoi(v204);
    v21 = v204 - 12;
    if ( v204 - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v204 - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v21);
    }
    if ( v20 <= 0 )
    {
      v230 = v18;
      v231 = 1;
      v234 = 0;
      v235 = 1;
      v232 = 0;
    }
    else
    {
      v234 = v18;
      v235 = 1;
      v230 = v20;
      v231 = 1;
      v232 = v20;
    }
    v233 = 1;
    Name = (char *)iap::BillingMethod::GetName((iap::BillingMethod::Self *)&v279);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&s2), Name, (int)(uintptr_t)(&v187) + 2);
    v23 = v241;
    if ( v241 == nullptr )
    {
      v170 = &v240;
LABEL_39:
      memset(v309, 0, 0x88u);
      v309[1] = (uint32_t)(uintptr_t)(&dword_213B814);
      v309[3] = (uint32_t)(uintptr_t)(&dword_213B814);
      v309[5] = (uint32_t)(uintptr_t)(&dword_213B814);
      v309[7] = (uint32_t)(uintptr_t)(&dword_213B814);
      v309[12] = (uint32_t)(uintptr_t)(&dword_213B814);
      v309[17] = (uint32_t)(uintptr_t)(&dword_213B814);
      v309[19] = (uint32_t)(uintptr_t)(&dword_213B814);
      v309[20] = (uint32_t)(uintptr_t)(&dword_213B814);
      v309[24] = (uint32_t)(uintptr_t)(&v309[22]);
      v309[25] = (uint32_t)(uintptr_t)(&v309[22]);
      v309[0] = ((uint32_t)(uintptr_t)&off_20966C8);
      v309[27] = (uint32_t)(uintptr_t)(&dword_213B814);
      v309[29] = (uint32_t)(uintptr_t)(&dword_213B814);
      g4_std::string::construct_copy(&v310, &s2);
      iap::BillingMethodAndroid::Construct(
        (iap::BillingMethodAndroid::Self *)v311,
        (const iap::BillingMethodAndroid::Self *)v309);
      if ( v170 == &v240 )
      {
        if ( v244 != 0 )
        {
          v109 = v243;
          v110 = *((uint32_t *)v310 - 3);
          v184 = v110;
          v111 = *(uint32_t *)(v243[4] - 12);
          if ( v110 > v111 )
            v110 = *(uint32_t *)(v243[4] - 12);
          v112 = memcmp((const void *)v243[4], v310, v110);
          v113 = v111 - v184;
          if ( v112 == 0 )
            v112 = v113;
          if ( v112 < 0 )
          {
            LOBYTE(v114) = 1;
            if ( v109 != &v240 )
              v114 = g4_std::string::compare_str(&v310, v109 + 4) >> 31;
            v170 = (int *)opNew(0x9Cu);
            if ( v170 != (int *)-16 )
            {
              g4_std::string::construct_copy(v170 + 4, &v310);
              iap::BillingMethodAndroid::Construct(
                (iap::BillingMethodAndroid::Self *)(v170 + 5),
                (const iap::BillingMethodAndroid::Self *)v311);
            }
            sub_1904970(v114, v170, v109, &v240);
            ++v244;
            goto LABEL_55;
          }
        }
      }
      else
      {
        v171 = v310;
        v32 = (uint32_t *)v170[4];
        v33 = *((uint32_t *)v310 - 3);
        v178 = v33;
        v142 = *(v32 - 3);
        if ( v142 <= v33 )
          v33 = *(v32 - 3);
        v34 = memcmp(v310, (const void *)v170[4], v33);
        v35 = v178 - v142;
        if ( v34 != 0 )
          v35 = v34;
        if ( v35 < 0 )
        {
          if ( v242 != v170 )
          {
            v36 = (int *)sub_1904940(v170);
            v37 = (uint32_t *)v36[4];
            v38 = v36;
            v39 = v178;
            if ( *(v37 - 3) <= v178 )
              v39 = *(v37 - 3);
            v165 = v39;
            v143 = v37;
            s1a = (void *)*(v37 - 3);
            v40 = memcmp(v37, v171, v39);
            if ( v40 == 0 )
              v40 = (int)(uintptr_t)(s1a) - v178;
            if ( v40 < 0 )
            {
              if ( v38[3] != 0 )
              {
                v41 = opNew(0x9Cu);
                if ( v41 != -16 )
                {
                  g4_std::string::construct_copy(v41 + 16, &v310);
                  iap::BillingMethodAndroid::Construct(
                    (iap::BillingMethodAndroid::Self *)(v41 + 20),
                    (const iap::BillingMethodAndroid::Self *)v311);
                }
                sub_1904970(1, v41, v170, &v240);
                ++v244;
                v170 = (int *)v41;
              }
              else
              {
                LOBYTE(v118) = 1;
                if ( v38 != &v240 )
                {
                  v119 = memcmp(v171, v143, v165);
                  v120 = v178 - (uint32_t)(uintptr_t)(s1a);
                  if ( v119 != 0 )
                    v120 = v119;
                  v118 = v120 >> 31;
                }
                v170 = (int *)opNew(0x9Cu);
                if ( v170 != (int *)-16 )
                {
                  g4_std::string::construct_copy(v170 + 4, &v310);
                  iap::BillingMethodAndroid::Construct(
                    (iap::BillingMethodAndroid::Self *)(v170 + 5),
                    (const iap::BillingMethodAndroid::Self *)v311);
                }
                sub_1904970(v118, v170, v38, &v240);
                ++v244;
              }
              goto LABEL_55;
            }
            goto LABEL_245;
          }
LABEL_281:
          g4_std::Rb_tree_string_pair_string_const_4216e3::M_insert(v186);
          v170 = (int *)v186[0];
          goto LABEL_55;
        }
        s1f = (void *)v34;
        v121 = memcmp(v32, v171, v33);
        if ( v121 == 0 )
          v121 = v142 - v178;
        if ( v121 >= 0 )
          goto LABEL_55;
        if ( v243 == v170 )
          goto LABEL_281;
        v122 = sub_19048E0(v170);
        v123 = *(uint32_t **)(v122 + 16);
        v124 = v178;
        v125 = *(v123 - 3);
        if ( v125 <= v178 )
          v124 = *(v123 - 3);
        v126 = memcmp(v171, v123, v124);
        if ( v126 == 0 )
          v126 = v178 - v125;
        if ( v126 < 0 )
        {
          if ( v170[3] != 0 )
          {
            v170 = (int *)opNew(0x9Cu);
            if ( v170 != (int *)-16 )
            {
              g4_std::string::construct_copy(v170 + 4, &v310);
              iap::BillingMethodAndroid::Construct(
                (iap::BillingMethodAndroid::Self *)(v170 + 5),
                (const iap::BillingMethodAndroid::Self *)v311);
            }
            sub_1904970(1, v170, v122, &v240);
            ++v244;
          }
          else
          {
            v127 = v178 - v142;
            if ( s1f != nullptr )
              v127 = (int)(uintptr_t)(s1f);
            v128 = opNew(0x9Cu);
            if ( v128 != -16 )
            {
              g4_std::string::construct_copy(v128 + 16, &v310);
              iap::BillingMethodAndroid::Construct(
                (iap::BillingMethodAndroid::Self *)(v128 + 20),
                (const iap::BillingMethodAndroid::Self *)v311);
            }
            sub_1904970(v127 < 0, v128, v170, &v240);
            ++v244;
            v170 = (int *)v128;
          }
          goto LABEL_55;
        }
      }
LABEL_245:
      g4_std::Rb_tree_string_pair_string_const_4216e3::M_insert_unique(v185);
      v170 = (int *)v185[0];
LABEL_55:
      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)v311);
      g4_std::string::Destroy(&v310);
      iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)v309);
      goto LABEL_56;
    }
    v24 = s2;
    v170 = &v240;
    v25 = *((uint32_t *)s2 - 3);
    do
    {
      v26 = *(uint32_t *)(*((uint32_t *)v23 + 4) - 12);
      v177 = v26;
      s1 = v24;
      if ( v25 <= v26 )
        v26 = v25;
      v27 = memcmp(*((const void **)v23 + 4), v24, v26);
      v24 = s1;
      if ( v27 == 0 )
        v27 = v177 - v25;
      if ( v27 < 0 )
      {
        v23 = *((void **)v23 + 3);
      }
      else
      {
        v170 = (int *)v23;
        v23 = *((void **)v23 + 2);
      }
    }
    while ( v23 != nullptr );
    if ( v170 == &v240 )
      goto LABEL_39;
    v28 = *(uint32_t *)(v170[4] - 12);
    v29 = v28;
    if ( v25 <= v28 )
      v29 = v25;
    v30 = v25 - v28;
    v31 = memcmp(s1, (const void *)v170[4], v29);
    if ( v31 == 0 )
      v31 = v30;
    if ( v31 < 0 )
      goto LABEL_39;
LABEL_56:
    g4_std::string::assign_str(v170 + 6, &v280);
    *((uint8_t *)v170 + 30) = v281;
    g4_std::string::assign_str(v170 + 8, &v282);
    *((uint8_t *)v170 + 38) = v283;
    g4_std::string::assign_str(v170 + 10, &v284);
    *((uint8_t *)v170 + 46) = v285;
    g4_std::string::assign_str(v170 + 12, &v286);
    v42 = v287;
    *((double *)v170 + 7) = v288;
    *((uint8_t *)v170 + 54) = v42;
    *((uint8_t *)v170 + 66) = v289;
    g4_std::string::assign_str(v170 + 17, &v290);
    v43 = v291;
    *(double *)(v170 + 19) = v292;
    *((uint8_t *)v170 + 74) = v43;
    *((uint8_t *)v170 + 86) = v293;
    g4_std::string::assign_str(v170 + 22, &v294);
    *((uint8_t *)v170 + 94) = v295;
    g4_std::string::assign_str(v170 + 24, &v296);
    g4_std::string::assign_str(v170 + 25, &v297);
    v179 = (int)(uintptr_t)(v170 + 26);
    if ( v170 + 26 != (int *)&v298 )
    {
      v157 = v170[28];
      if ( v157 != 0 )
      {
        while ( 1 )
        {
          v158 = *(uint32_t *)(v157 + 12);
          if ( v158 != 0 )
          {
            while ( 1 )
            {
              v156 = *(uint32_t *)(v158 + 12);
              if ( v156 != 0 )
              {
                while ( 1 )
                {
                  n = *(uint32_t *)(v156 + 12);
                  if ( n != 0 )
                  {
                    while ( 1 )
                    {
                      v155 = *(uint32_t *)(n + 12);
                      if ( v155 != 0 )
                      {
                        while ( 1 )
                        {
                          v154 = *(uint32_t *)(v155 + 12);
                          if ( v154 != 0 )
                          {
                            while ( 1 )
                            {
                              v166 = *(uint32_t *)(v154 + 12);
                              if ( v166 != 0 )
                              {
                                while ( 1 )
                                {
                                  v172 = *(uint32_t **)(v166 + 12);
                                  if ( v172 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      v44 = v172[3];
                                      if ( v44 != 0 )
                                      {
                                        while ( 1 )
                                        {
                                          g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_erase(
                                            v179,
                                            *(uint32_t **)(v44 + 12));
                                          v45 = *(uint32_t *)(v44 + 8);
                                          g4_std::string::Destroy(v44 + 20);
                                          g4_std::string::Destroy(v44 + 16);
                                          sub_4EBEE0(v44);
                                          if ( v45 == 0 )
                                            break;
                                          v44 = v45;
                                        }
                                      }
                                      v46 = (uint32_t *)v172[2];
                                      g4_std::string::Destroy(v172 + 5);
                                      g4_std::string::Destroy(v172 + 4);
                                      sub_4EBEE0((int)(uintptr_t)(v172));
                                      if ( v46 == nullptr )
                                        break;
                                      v172 = v46;
                                    }
                                  }
                                  v48 = *(uint32_t *)(v166 + 8);
                                  g4_std::string::Destroy(v166 + 20);
                                  g4_std::string::Destroy(v166 + 16);
                                  sub_4EBEE0(v166);
                                  if ( v48 == 0 )
                                    break;
                                  v166 = v48;
                                }
                              }
                              v49 = *(uint32_t *)(v154 + 8);
                              g4_std::string::Destroy(v154 + 20);
                              g4_std::string::Destroy(v154 + 16);
                              sub_4EBEE0(v154);
                              if ( v49 == 0 )
                                break;
                              v154 = v49;
                            }
                          }
                          v50 = *(uint32_t *)(v155 + 8);
                          g4_std::string::Destroy(v155 + 20);
                          g4_std::string::Destroy(v155 + 16);
                          sub_4EBEE0(v155);
                          if ( v50 == 0 )
                            break;
                          v155 = v50;
                        }
                      }
                      v51 = *(uint32_t *)(n + 8);
                      g4_std::string::Destroy(n + 20);
                      g4_std::string::Destroy(n + 16);
                      sub_4EBEE0(n);
                      if ( v51 == 0 )
                        break;
                      n = v51;
                    }
                  }
                  v52 = *(uint32_t *)(v156 + 8);
                  g4_std::string::Destroy(v156 + 20);
                  g4_std::string::Destroy(v156 + 16);
                  sub_4EBEE0(v156);
                  if ( v52 == 0 )
                    break;
                  v156 = v52;
                }
              }
              v53 = *(uint32_t *)(v158 + 8);
              g4_std::string::Destroy(v158 + 20);
              g4_std::string::Destroy(v158 + 16);
              sub_4EBEE0(v158);
              if ( v53 == 0 )
                break;
              v158 = v53;
            }
          }
          v54 = *(uint32_t *)(v157 + 8);
          g4_std::string::Destroy(v157 + 20);
          g4_std::string::Destroy(v157 + 16);
          sub_4EBEE0(v157);
          if ( v54 == 0 )
            break;
          v157 = v54;
        }
      }
      v55 = v300;
      v56 = v300 == nullptr;
      v170[29] = (int)(uintptr_t)(v170 + 27);
      v170[28] = 0;
      v170[30] = (int)(uintptr_t)(v170 + 27);
      v170[31] = 0;
      if ( !v56 )
      {
        v57 = g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
                v179,
                v55,
                (int)(uintptr_t)(v170 + 27));
        v170[28] = (int)(uintptr_t)(v57);
        for ( j = v57; j[2] != 0; j = (uint32_t *)j[2] )
          ;
        v170[29] = (int)(uintptr_t)(j);
        while ( v57[3] != 0 )
          v57 = (uint32_t *)v57[3];
        v170[30] = (int)(uintptr_t)(v57);
        v170[31] = v303;
      }
    }
    g4_std::string::assign_str(v170 + 32, &v304);
    *((uint8_t *)v170 + 134) = v305;
    g4_std::string::assign_str(v170 + 34, &v306);
    *((uint8_t *)v170 + 142) = v307;
    g4_std::vector_pair_string_glwebtools_J_91bc19::opAssign(
      (std::vector<std::pair<std::string, glwebtools::JSONValue::Self>> *)(v170 + 36),
      (const std::vector<std::pair<std::string, glwebtools::JSONValue::Self>> *)v308);
    v59 = (char *)s2 - 12;
    if ( (char *)s2 - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)s2 - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v59);
    }
    v60 = *((uint32_t *)v164 + 6);
    if ( v60 == 0 )
    {
      v61 = (int)(uintptr_t)(v164) + 20;
LABEL_108:
      memset(v245, 0, sizeof(v245));
      v245[0] = (uint32_t)(uintptr_t)(&off_2096648);
      v245[1] = (uint32_t)(uintptr_t)(&dword_213B814);
      v245[3] = (uint32_t)(uintptr_t)(&dword_213B814);
      v245[5] = (uint32_t)(uintptr_t)(&dword_213B814);
      v245[7] = (uint32_t)(uintptr_t)(&dword_213B814);
      v245[9] = (uint32_t)(uintptr_t)(&dword_213B814);
      v245[11] = (uint32_t)(uintptr_t)(&dword_213B814);
      v245[13] = (uint32_t)(uintptr_t)(&dword_213B814);
      v245[15] = (uint32_t)(uintptr_t)(&dword_213B814);
      v245[29] = (uint32_t)(uintptr_t)(&v245[27]);
      v245[30] = (uint32_t)(uintptr_t)(&v245[27]);
      g4_std::string::construct_copy(&v246, &v214);
      v247 = (uint32_t (**)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(&off_2096648);
      v248 = &dword_213B814;
      v68 = 0;
      g4_std::string::assign_str(&v248, &v245[1]);
      v249 = BYTE2(v245[2]);
      v250 = &dword_213B814;
      g4_std::string::assign_str(&v250, &v245[3]);
      v251 = BYTE2(v245[4]);
      v252 = &dword_213B814;
      g4_std::string::assign_str(&v252, &v245[5]);
      v253 = BYTE2(v245[6]);
      v254 = &dword_213B814;
      g4_std::string::assign_str(&v254, &v245[7]);
      v255 = BYTE2(v245[8]);
      v256 = &dword_213B814;
      g4_std::string::assign_str(&v256, &v245[9]);
      v257 = BYTE2(v245[10]);
      v258 = &dword_213B814;
      g4_std::string::assign_str(&v258, &v245[11]);
      v259 = BYTE2(v245[12]);
      v260 = &dword_213B814;
      g4_std::string::assign_str(&v260, &v245[13]);
      v261 = BYTE2(v245[14]);
      v262 = &dword_213B814;
      g4_std::string::assign_str(&v262, &v245[15]);
      v69 = v245[24];
      v263 = BYTE2(v245[16]);
      v264 = v245[17];
      v270 = nullptr;
      v265 = BYTE2(v245[18]);
      v266 = v245[19];
      v271 = nullptr;
      v272 = nullptr;
      v267 = BYTE2(v245[20]);
      v268 = v245[21];
      v174 = nullptr;
      v269 = BYTE2(v245[22]);
      v70 = v245[23];
      v71 = (v245[24] - v245[23]) >> 3;
      if ( v71 != 0 )
      {
        if ( v71 > 0x1FFFFFFF )
          sub_18FFEE0(v71, v245[24]);
        v174 = (char *)(8 * v71);
        v68 = opNew(8 * v71);
        v69 = v245[24];
        v70 = v245[23];
      }
      v270 = (void *)v68;
      v271 = (void *)v68;
      v272 = &v174[v68];
      if ( v69 != v70 )
      {
        v72 = (void *)v61;
        v73 = v70;
        do
        {
          if ( v68 != 0 )
          {
            v144 = v69;
            s1g = v72;
            g4_std::string::construct_copy(v68, v73);
            g4_std::string::construct_copy(v68 + 4, v73 + 4);
            v72 = s1g;
            v69 = v144;
          }
          v73 += 8;
          v68 += 8;
        }
        while ( v69 != v73 );
        v61 = (int)(uintptr_t)(v72);
      }
      v271 = (void *)v68;
      v274 = 0;
      v275 = nullptr;
      v278 = 0;
      v276 = &v274;
      v277 = &v274;
      if ( v245[28] != 0 )
      {
        v74 = (uint32_t *)g4_std::Rb_tree_string_pair_string_const_4216e3::M_copy(
                          &v273,
                          v245[28],
                          &v274);
        v275 = v74;
        for ( k = (int *)(v74); k[2] != 0; k = (int *)k[2] )
          ;
        v276 = k;
        while ( v74[3] != 0 )
          v74 = (uint32_t *)v74[3];
        v277 = (int *)(v74);
        v278 = v245[31];
      }
      if ( v159 == (char *)v61 )
      {
        if ( *((uint32_t *)v164 + 9) != 0 )
        {
          v176 = *((char **)v164 + 8);
          v103 = *((uint32_t **)v176 + 4);
          v183 = *(v103 - 3);
          v104 = v183;
          if ( *((uint32_t *)v246 - 3) <= v183 )
            v104 = *((uint32_t *)v246 - 3);
          v149 = v246;
          s1e = *((void **)v246 - 3);
          v169 = v104;
          v105 = memcmp(v103, v246, v104);
          if ( v105 == 0 )
            v105 = v183 - (uint32_t)(uintptr_t)(s1e);
          if ( v105 < 0 )
          {
            LOBYTE(v106) = 1;
            if ( v159 != v176 )
            {
              v107 = memcmp(v149, v103, v169);
              if ( v107 == 0 )
                v107 = (unsigned int)(uintptr_t)(s1e) - v183;
              v106 = v107 >> 31;
            }
            v61 = opNew(0x94u);
            if ( v61 != -16 )
            {
              g4_std::string::construct_copy(v61 + 16, &v246);
              iap::iABAndroidItemV1::Construct(
                (iap::iABAndroidItemV1::Self *)(v61 + 20),
                (const iap::iABAndroidItemV1::Self *)&v247);
            }
            sub_1904970(v106, v61, v176, v159);
            ++*((uint32_t *)v164 + 9);
            goto LABEL_144;
          }
        }
      }
      else
      {
        v76 = *(uint32_t **)(v61 + 16);
        v175 = v246;
        v77 = *((uint32_t *)v246 - 3);
        v181 = v77;
        if ( *(v76 - 3) <= v77 )
          v77 = *(v76 - 3);
        s1c = (void *)*(v76 - 3);
        v145 = v77;
        v78 = memcmp(v246, *(const void **)(v61 + 16), v77);
        v167 = v78;
        if ( v78 == 0 )
          v78 = v181 - (uint32_t)(uintptr_t)(s1c);
        if ( v78 < 0 )
        {
          if ( *((uint32_t *)v164 + 7) != v61 )
          {
            v79 = sub_1904940(v61);
            v80 = *(uint32_t **)(v79 + 16);
            v81 = v79;
            v82 = v181;
            v168 = *(v80 - 3);
            s1d = v80;
            if ( v168 <= v181 )
              v82 = *(v80 - 3);
            na = v82;
            v83 = memcmp(v80, v175, v82);
            if ( v83 == 0 )
              v83 = v168 - v181;
            if ( v83 < 0 )
            {
              if ( *(uint32_t *)(v81 + 12) != 0 )
              {
                v84 = opNew(0x94u);
                if ( v84 != -16 )
                {
                  g4_std::string::construct_copy(v84 + 16, &v246);
                  iap::iABAndroidItemV1::Construct(
                    (iap::iABAndroidItemV1::Self *)(v84 + 20),
                    (const iap::iABAndroidItemV1::Self *)&v247);
                }
                v132 = v61;
                v61 = v84;
                sub_1904970(1, v84, v132, v159);
                ++*((uint32_t *)v164 + 9);
              }
              else
              {
                LOBYTE(v92) = 1;
                if ( v159 != (char *)v81 )
                {
                  v93 = memcmp(v175, s1d, na);
                  v94 = v181 - v168;
                  if ( v93 != 0 )
                    v94 = v93;
                  v92 = v94 >> 31;
                }
                v148 = v92;
                v61 = opNew(0x94u);
                v95 = v148;
                if ( v61 != -16 )
                {
                  g4_std::string::construct_copy(v61 + 16, &v246);
                  iap::iABAndroidItemV1::Construct(
                    (iap::iABAndroidItemV1::Self *)(v61 + 20),
                    (const iap::iABAndroidItemV1::Self *)&v247);
                  v95 = v148;
                }
                sub_1904970(v95, v61, v81, v159);
                ++*((uint32_t *)v164 + 9);
              }
              goto LABEL_144;
            }
            goto LABEL_167;
          }
LABEL_168:
          g4_std::Rb_tree_string_pair_string_const_39d424::M_insert(v186);
          v61 = v186[0];
          goto LABEL_144;
        }
        v96 = memcmp(v76, v175, v145);
        if ( v96 == 0 )
          v96 = (int)(uintptr_t)(s1c) - v181;
        if ( v96 >= 0 )
          goto LABEL_144;
        if ( *((uint32_t *)v164 + 8) == v61 )
          goto LABEL_168;
        nb = sub_19048E0(v61);
        v97 = *(uint32_t **)(nb + 16);
        v98 = v181;
        v99 = *(v97 - 3);
        if ( v99 <= v181 )
          v98 = *(v97 - 3);
        v100 = memcmp(v175, v97, v98);
        if ( v100 == 0 )
          v100 = v181 - v99;
        if ( v100 < 0 )
        {
          if ( *(uint32_t *)(v61 + 12) != 0 )
          {
            v61 = opNew(0x94u);
            if ( v61 != -16 )
            {
              g4_std::string::construct_copy(v61 + 16, &v246);
              iap::iABAndroidItemV1::Construct(
                (iap::iABAndroidItemV1::Self *)(v61 + 20),
                (const iap::iABAndroidItemV1::Self *)&v247);
            }
            sub_1904970(1, v61, nb, v159);
            ++*((uint32_t *)v164 + 9);
          }
          else
          {
            v101 = v167;
            if ( v167 == 0 )
              v101 = v181 - (uint32_t)(uintptr_t)(s1c);
            v182 = v101;
            v102 = opNew(0x94u);
            if ( v102 != -16 )
            {
              g4_std::string::construct_copy(v102 + 16, &v246);
              iap::iABAndroidItemV1::Construct(
                (iap::iABAndroidItemV1::Self *)(v102 + 20),
                (const iap::iABAndroidItemV1::Self *)&v247);
            }
            v133 = v61;
            v61 = v102;
            sub_1904970(v182 < 0, v102, v133, v159);
            ++*((uint32_t *)v164 + 9);
          }
          goto LABEL_144;
        }
      }
LABEL_167:
      g4_std::Rb_tree_string_pair_string_const_39d424::M_insert_unique(v185);
      v61 = v185[0];
LABEL_144:
      v247 = (uint32_t (**)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(&off_2096648);
      g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
        (int)(uintptr_t)(&v273),
        v275);
      v85 = (size_t)v271;
      v86 = (char *)v270;
      if ( v271 != v270 )
      {
        do
        {
          v146 = v85;
          g4_std::string::Destroy(v86 + 4);
          v129 = v86;
          v86 += 8;
          g4_std::string::Destroy(v129);
          v85 = v146;
        }
        while ( (char *)v146 != v86 );
        v86 = (char *)v270;
      }
      if ( v86 != nullptr )
        opDelete(v86);
      g4_std::string::Destroy(&v262);
      g4_std::string::Destroy(&v260);
      g4_std::string::Destroy(&v258);
      g4_std::string::Destroy(&v256);
      g4_std::string::Destroy(&v254);
      g4_std::string::Destroy(&v252);
      g4_std::string::Destroy(&v250);
      g4_std::string::Destroy(&v248);
      g4_std::string::Destroy(&v246);
      v245[0] = (uint32_t)(uintptr_t)(&off_2096648);
      g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
        (int)(uintptr_t)(&v245[26]),
        (uint32_t *)v245[28]);
      v87 = v245[24];
      v88 = (char *)v245[23];
      if ( v245[24] != v245[23] )
      {
        do
        {
          v147 = v87;
          g4_std::string::Destroy(v88 + 4);
          v130 = v88;
          v88 += 8;
          g4_std::string::Destroy(v130);
          v87 = v147;
        }
        while ( (char *)v147 != v88 );
        v88 = (char *)v245[23];
      }
      if ( v88 != nullptr )
        opDelete(v88);
      g4_std::string::Destroy(&v245[15]);
      g4_std::string::Destroy(&v245[13]);
      g4_std::string::Destroy(&v245[11]);
      g4_std::string::Destroy(&v245[9]);
      g4_std::string::Destroy(&v245[7]);
      g4_std::string::Destroy(&v245[5]);
      g4_std::string::Destroy(&v245[3]);
      g4_std::string::Destroy(&v245[1]);
      goto LABEL_155;
    }
    v61 = (int)(uintptr_t)(v164) + 20;
    v173 = v214;
    v62 = (void *)*(v214 - 3);
    do
    {
      v63 = *(uint32_t *)(*(uint32_t *)(v60 + 16) - 12);
      v180 = v63;
      s1b = v62;
      if ( v63 > (unsigned int)(uintptr_t)(v62) )
        v63 = (size_t)v62;
      v64 = memcmp(*(const void **)(v60 + 16), v173, v63);
      v62 = s1b;
      if ( v64 == 0 )
        v64 = v180 - (uint32_t)(uintptr_t)(s1b);
      if ( v64 < 0 )
      {
        v60 = *(uint32_t *)(v60 + 12);
      }
      else
      {
        v61 = v60;
        v60 = *(uint32_t *)(v60 + 8);
      }
    }
    while ( v60 != 0 );
    if ( v159 == (char *)v61 )
      goto LABEL_108;
    v65 = (size_t)s1b;
    v66 = *(uint32_t *)(*(uint32_t *)(v61 + 16) - 12);
    if ( v66 <= (unsigned int)(uintptr_t)(s1b) )
      v65 = *(uint32_t *)(*(uint32_t *)(v61 + 16) - 12);
    v67 = memcmp(v173, *(const void **)(v61 + 16), v65);
    if ( v67 == 0 )
      v67 = (int)(uintptr_t)(s1b) - v66;
    if ( v67 < 0 )
      goto LABEL_108;
LABEL_155:
    g4_std::string::assign_str(v61 + 24, &v214);
    *(uint8_t *)(v61 + 30) = v215;
    g4_std::string::assign_str(v61 + 32, &v216);
    *(uint8_t *)(v61 + 38) = v217;
    g4_std::string::assign_str(v61 + 40, &v218);
    *(uint8_t *)(v61 + 46) = v219;
    g4_std::string::assign_str(v61 + 48, &v220);
    *(uint8_t *)(v61 + 54) = v221;
    g4_std::string::assign_str(v61 + 56, &v222);
    *(uint8_t *)(v61 + 62) = v223;
    g4_std::string::assign_str(v61 + 64, &v224);
    *(uint8_t *)(v61 + 70) = v225;
    g4_std::string::assign_str(v61 + 72, &v226);
    *(uint8_t *)(v61 + 78) = v227;
    g4_std::string::assign_str(v61 + 80, &v228);
    *(uint8_t *)(v61 + 86) = v229;
    *(uint32_t *)(v61 + 88) = v230;
    *(uint8_t *)(v61 + 94) = v231;
    *(uint32_t *)(v61 + 96) = v232;
    *(uint8_t *)(v61 + 102) = v233;
    *(uint32_t *)(v61 + 104) = v234;
    *(uint8_t *)(v61 + 110) = v235;
    g4_std::vector_pair_string_glwebtools_J_91bc19::opAssign(
      (std::vector<std::pair<std::string, glwebtools::JSONValue::Self>> *)(v61 + 112),
      (const std::vector<std::pair<std::string, glwebtools::JSONValue::Self>> *)&v236);
    if ( (int *)(v61 + 124) != &v239 )
    {
      g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
        v61 + 124,
        *(uint32_t **)(v61 + 132));
      v89 = v241;
      v56 = v241 == nullptr;
      *(uint32_t *)(v61 + 136) = v61 + 128;
      *(uint32_t *)(v61 + 132) = 0;
      *(uint32_t *)(v61 + 140) = v61 + 128;
      *(uint32_t *)(v61 + 144) = 0;
      if ( !v56 )
      {
        v90 = (int)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_4216e3::M_copy(
                v61 + 124,
                v89,
                v61 + 128));
        *(uint32_t *)(v61 + 132) = v90;
        for ( m = v90; *(uint32_t *)(m + 8) != 0; m = *(uint32_t *)(m + 8) )
          ;
        *(uint32_t *)(v61 + 136) = m;
        while ( *(uint32_t *)(v90 + 12) != 0 )
          v90 = *(uint32_t *)(v90 + 12);
        *(uint32_t *)(v61 + 140) = v90;
        *(uint32_t *)(v61 + 144) = v244;
      }
    }
    v213 = (uint32_t (**)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(&off_2096648);
    g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
      (int)(uintptr_t)(&v239),
      v241);
    v115 = v237;
    v116 = (char *)v236;
    if ( v237 != v236 )
    {
      do
      {
        g4_std::string::Destroy(v116 + 4);
        v131 = v116;
        v116 += 8;
        g4_std::string::Destroy(v131);
      }
      while ( v115 != v116 );
      v116 = (char *)v236;
    }
    if ( v116 != nullptr )
      opDelete(v116);
    g4_std::string::Destroy(&v228);
    g4_std::string::Destroy(&v226);
    g4_std::string::Destroy(&v224);
    v117 = v222 - 3;
    if ( v222 - 3 != dword_213B808 && __sync_fetch_and_add(v222 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v117);
    g4_std::string::Destroy(&v220);
    g4_std::string::Destroy(&v218);
    g4_std::string::Destroy(&v216);
    g4_std::string::Destroy(&v214);
    iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)&v279);
    v163 += 32;
  }
  *(uint32_t *)v164 = 2;
  *((uint8_t *)v164 + 8) = 0;
  g4_std_compat::string_assign((int)(uintptr_t)(v164) + 12, &unk_1B15112, 0);
  InAppBilling_FreeItemInfoArray((int)(uintptr_t)(ItemInfoArray));
  return glwebtools::Mutex::Unlock(v153);
}

// ----------------------------------------------------------------------------
// Function: iap::ItemManager::parseStoreItems  (binary VA: 0x15262a0)
// Original: iap::ItemManager::parseStoreItems
// ----------------------------------------------------------------------------
int iap::ItemManager::parseStoreItems(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  glwebtools::Self *v4;
  size_t v5;
  size_t v6;
  size_t v7;
  size_t v8;
  int v9;
  int v10;
  size_t v11;
  size_t v12;
  int v13;
  uint32_t *v14;
  size_t v15;
  int v16;
  size_t v17;
  uint32_t *v18;
  size_t v19;
  size_t v20;
  int v21;
  size_t v22;
  int v23;
  char *v24;
  char *v25;
  char *v26;
  char *v27;
  int v28;
  int i;
  char *v30;
  int v32;
  size_t v33;
  int v34;
  uint32_t *v35;
  size_t v36;
  size_t v37;
  int v38;
  void *v39;
  uint32_t *v40;
  size_t v41;
  int v42;
  unsigned int v43;
  unsigned int v44;
  char v45;
  unsigned int v46;
  size_t v47;
  typedef char *_g4_t_v48;
  typedef char *_g4_t_v49;
  typedef char *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef size_t _g4_t_v52;
  typedef void **_g4_t_p_s1;
  typedef size_t _g4_t_n;
  typedef size_t _g4_t_na;
  typedef size_t _g4_t_nb;
  typedef size_t _g4_t_nc;
  typedef char _g4_t_nd;
  typedef size_t _g4_t_ne;
  typedef size_t _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef const void *_g4_t_v62;
  typedef uint32_t *_g4_t_v63;
  typedef size_t _g4_t_v64;
  typedef uint32_t *_g4_t_v65;
  typedef uint32_t *_g4_t_v66;
  typedef void *_g4_t_s2;
  typedef size_t _g4_t_v68;
  typedef size_t _g4_t_v69;
  typedef size_t _g4_t_v70;
  typedef size_t _g4_t_v71;
  typedef char _g4_t_v72[16];
  typedef size_t _g4_t_v73[3];
  typedef size_t _g4_t_v74;
  typedef int _g4_t_v75[2];
  typedef char _g4_t_v76[8];
  typedef char _g4_t_v77[16];
  typedef uint8_t _g4_t_v78[16];
  typedef uint8_t _g4_t_v79[16];
  typedef uint32_t (**_g4_t_v80)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *);
  typedef uint32_t *_g4_t_v81;
  typedef char _g4_t_v82;
  typedef uint32_t *_g4_t_v83;
  typedef char _g4_t_v84;
  typedef uint32_t *_g4_t_v85;
  typedef char _g4_t_v86;
  typedef uint32_t *_g4_t_v87;
  typedef char _g4_t_v88;
  typedef uint32_t *_g4_t_v89;
  typedef char _g4_t_v90;
  typedef uint32_t *_g4_t_v91;
  typedef char _g4_t_v92;
  typedef uint32_t *_g4_t_v93;
  typedef char _g4_t_v94;
  typedef uint32_t *_g4_t_v95;
  typedef char _g4_t_v96;
  typedef int _g4_t_v97;
  typedef char _g4_t_v98;
  typedef int _g4_t_v99;
  typedef char _g4_t_v100;
  typedef int _g4_t_v101;
  typedef char _g4_t_v102;
  typedef void *_g4_t_v103;
  typedef void *_g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef void *_g4_t_v108;
  typedef int *_g4_t_v109;
  typedef int *_g4_t_v110;
  typedef int _g4_t_v111;
  typedef uint32_t _g4_t_v112[32];
  typedef void *_g4_t_s1;
  typedef uint32_t (**_g4_t_v114)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *);
  typedef char _g4_t_v115[8];
  typedef char _g4_t_v116[8];
  typedef char _g4_t_v117[8];
  typedef char _g4_t_v118[8];
  typedef char _g4_t_v119[8];
  typedef char _g4_t_v120[8];
  typedef char _g4_t_v121[8];
  typedef char _g4_t_v122[32];
  typedef void *_g4_t_v123;
  typedef char *_g4_t_v124;
  typedef int _g4_t_v125[15];
  enum : size_t {
    _g4_s0 = 672u,
    _g4_s1 = (8u + sizeof(_g4_t_v48)) > _g4_s0 ? (8u + sizeof(_g4_t_v48)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v49)) > _g4_s1 ? (8u + sizeof(_g4_t_v49)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v50)) > _g4_s2 ? (8u + sizeof(_g4_t_v50)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v51)) > _g4_s3 ? (16u + sizeof(_g4_t_v51)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v52)) > _g4_s4 ? (20u + sizeof(_g4_t_v52)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_p_s1)) > _g4_s5 ? (24u + sizeof(_g4_t_p_s1)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_n)) > _g4_s6 ? (48u + sizeof(_g4_t_n)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_na)) > _g4_s7 ? (48u + sizeof(_g4_t_na)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_nb)) > _g4_s8 ? (48u + sizeof(_g4_t_nb)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_nc)) > _g4_s9 ? (48u + sizeof(_g4_t_nc)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_nd)) > _g4_s10 ? (48u + sizeof(_g4_t_nd)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_ne)) > _g4_s11 ? (48u + sizeof(_g4_t_ne)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v60)) > _g4_s12 ? (56u + sizeof(_g4_t_v60)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v61)) > _g4_s13 ? (56u + sizeof(_g4_t_v61)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v62)) > _g4_s14 ? (60u + sizeof(_g4_t_v62)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v63)) > _g4_s15 ? (60u + sizeof(_g4_t_v63)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v64)) > _g4_s16 ? (64u + sizeof(_g4_t_v64)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v65)) > _g4_s17 ? (68u + sizeof(_g4_t_v65)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v66)) > _g4_s18 ? (72u + sizeof(_g4_t_v66)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_s2)) > _g4_s19 ? (76u + sizeof(_g4_t_s2)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v68)) > _g4_s20 ? (80u + sizeof(_g4_t_v68)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v69)) > _g4_s21 ? (80u + sizeof(_g4_t_v69)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v70)) > _g4_s22 ? (80u + sizeof(_g4_t_v70)) : _g4_s22,
    _g4_s24 = (84u + sizeof(_g4_t_v71)) > _g4_s23 ? (84u + sizeof(_g4_t_v71)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v72)) > _g4_s24 ? (88u + sizeof(_g4_t_v72)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v73)) > _g4_s25 ? (104u + sizeof(_g4_t_v73)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v74)) > _g4_s26 ? (116u + sizeof(_g4_t_v74)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v75)) > _g4_s27 ? (120u + sizeof(_g4_t_v75)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v76)) > _g4_s28 ? (128u + sizeof(_g4_t_v76)) : _g4_s28,
    _g4_s30 = (136u + sizeof(_g4_t_v77)) > _g4_s29 ? (136u + sizeof(_g4_t_v77)) : _g4_s29,
    _g4_s31 = (152u + sizeof(_g4_t_v78)) > _g4_s30 ? (152u + sizeof(_g4_t_v78)) : _g4_s30,
    _g4_s32 = (168u + sizeof(_g4_t_v79)) > _g4_s31 ? (168u + sizeof(_g4_t_v79)) : _g4_s31,
    _g4_s33 = (184u + sizeof(_g4_t_v80)) > _g4_s32 ? (184u + sizeof(_g4_t_v80)) : _g4_s32,
    _g4_s34 = (188u + sizeof(_g4_t_v81)) > _g4_s33 ? (188u + sizeof(_g4_t_v81)) : _g4_s33,
    _g4_s35 = (194u + sizeof(_g4_t_v82)) > _g4_s34 ? (194u + sizeof(_g4_t_v82)) : _g4_s34,
    _g4_s36 = (196u + sizeof(_g4_t_v83)) > _g4_s35 ? (196u + sizeof(_g4_t_v83)) : _g4_s35,
    _g4_s37 = (202u + sizeof(_g4_t_v84)) > _g4_s36 ? (202u + sizeof(_g4_t_v84)) : _g4_s36,
    _g4_s38 = (204u + sizeof(_g4_t_v85)) > _g4_s37 ? (204u + sizeof(_g4_t_v85)) : _g4_s37,
    _g4_s39 = (210u + sizeof(_g4_t_v86)) > _g4_s38 ? (210u + sizeof(_g4_t_v86)) : _g4_s38,
    _g4_s40 = (212u + sizeof(_g4_t_v87)) > _g4_s39 ? (212u + sizeof(_g4_t_v87)) : _g4_s39,
    _g4_s41 = (218u + sizeof(_g4_t_v88)) > _g4_s40 ? (218u + sizeof(_g4_t_v88)) : _g4_s40,
    _g4_s42 = (220u + sizeof(_g4_t_v89)) > _g4_s41 ? (220u + sizeof(_g4_t_v89)) : _g4_s41,
    _g4_s43 = (226u + sizeof(_g4_t_v90)) > _g4_s42 ? (226u + sizeof(_g4_t_v90)) : _g4_s42,
    _g4_s44 = (228u + sizeof(_g4_t_v91)) > _g4_s43 ? (228u + sizeof(_g4_t_v91)) : _g4_s43,
    _g4_s45 = (234u + sizeof(_g4_t_v92)) > _g4_s44 ? (234u + sizeof(_g4_t_v92)) : _g4_s44,
    _g4_s46 = (236u + sizeof(_g4_t_v93)) > _g4_s45 ? (236u + sizeof(_g4_t_v93)) : _g4_s45,
    _g4_s47 = (242u + sizeof(_g4_t_v94)) > _g4_s46 ? (242u + sizeof(_g4_t_v94)) : _g4_s46,
    _g4_s48 = (244u + sizeof(_g4_t_v95)) > _g4_s47 ? (244u + sizeof(_g4_t_v95)) : _g4_s47,
    _g4_s49 = (250u + sizeof(_g4_t_v96)) > _g4_s48 ? (250u + sizeof(_g4_t_v96)) : _g4_s48,
    _g4_s50 = (252u + sizeof(_g4_t_v97)) > _g4_s49 ? (252u + sizeof(_g4_t_v97)) : _g4_s49,
    _g4_s51 = (258u + sizeof(_g4_t_v98)) > _g4_s50 ? (258u + sizeof(_g4_t_v98)) : _g4_s50,
    _g4_s52 = (260u + sizeof(_g4_t_v99)) > _g4_s51 ? (260u + sizeof(_g4_t_v99)) : _g4_s51,
    _g4_s53 = (266u + sizeof(_g4_t_v100)) > _g4_s52 ? (266u + sizeof(_g4_t_v100)) : _g4_s52,
    _g4_s54 = (268u + sizeof(_g4_t_v101)) > _g4_s53 ? (268u + sizeof(_g4_t_v101)) : _g4_s53,
    _g4_s55 = (274u + sizeof(_g4_t_v102)) > _g4_s54 ? (274u + sizeof(_g4_t_v102)) : _g4_s54,
    _g4_s56 = (276u + sizeof(_g4_t_v103)) > _g4_s55 ? (276u + sizeof(_g4_t_v103)) : _g4_s55,
    _g4_s57 = (280u + sizeof(_g4_t_v104)) > _g4_s56 ? (280u + sizeof(_g4_t_v104)) : _g4_s56,
    _g4_s58 = (284u + sizeof(_g4_t_v105)) > _g4_s57 ? (284u + sizeof(_g4_t_v105)) : _g4_s57,
    _g4_s59 = (288u + sizeof(_g4_t_v106)) > _g4_s58 ? (288u + sizeof(_g4_t_v106)) : _g4_s58,
    _g4_s60 = (292u + sizeof(_g4_t_v107)) > _g4_s59 ? (292u + sizeof(_g4_t_v107)) : _g4_s59,
    _g4_s61 = (296u + sizeof(_g4_t_v108)) > _g4_s60 ? (296u + sizeof(_g4_t_v108)) : _g4_s60,
    _g4_s62 = (300u + sizeof(_g4_t_v109)) > _g4_s61 ? (300u + sizeof(_g4_t_v109)) : _g4_s61,
    _g4_s63 = (304u + sizeof(_g4_t_v110)) > _g4_s62 ? (304u + sizeof(_g4_t_v110)) : _g4_s62,
    _g4_s64 = (308u + sizeof(_g4_t_v111)) > _g4_s63 ? (308u + sizeof(_g4_t_v111)) : _g4_s63,
    _g4_s65 = (312u + sizeof(_g4_t_v112)) > _g4_s64 ? (312u + sizeof(_g4_t_v112)) : _g4_s64,
    _g4_s66 = (440u + sizeof(_g4_t_s1)) > _g4_s65 ? (440u + sizeof(_g4_t_s1)) : _g4_s65,
    _g4_s67 = (444u + sizeof(_g4_t_v114)) > _g4_s66 ? (444u + sizeof(_g4_t_v114)) : _g4_s66,
    _g4_s68 = (448u + sizeof(_g4_t_v115)) > _g4_s67 ? (448u + sizeof(_g4_t_v115)) : _g4_s67,
    _g4_s69 = (456u + sizeof(_g4_t_v116)) > _g4_s68 ? (456u + sizeof(_g4_t_v116)) : _g4_s68,
    _g4_s70 = (464u + sizeof(_g4_t_v117)) > _g4_s69 ? (464u + sizeof(_g4_t_v117)) : _g4_s69,
    _g4_s71 = (472u + sizeof(_g4_t_v118)) > _g4_s70 ? (472u + sizeof(_g4_t_v118)) : _g4_s70,
    _g4_s72 = (480u + sizeof(_g4_t_v119)) > _g4_s71 ? (480u + sizeof(_g4_t_v119)) : _g4_s71,
    _g4_s73 = (488u + sizeof(_g4_t_v120)) > _g4_s72 ? (488u + sizeof(_g4_t_v120)) : _g4_s72,
    _g4_s74 = (496u + sizeof(_g4_t_v121)) > _g4_s73 ? (496u + sizeof(_g4_t_v121)) : _g4_s73,
    _g4_s75 = (504u + sizeof(_g4_t_v122)) > _g4_s74 ? (504u + sizeof(_g4_t_v122)) : _g4_s74,
    _g4_s76 = (536u + sizeof(_g4_t_v123)) > _g4_s75 ? (536u + sizeof(_g4_t_v123)) : _g4_s75,
    _g4_s77 = (540u + sizeof(_g4_t_v124)) > _g4_s76 ? (540u + sizeof(_g4_t_v124)) : _g4_s76,
    _g4_s78 = (548u + sizeof(_g4_t_v125)) > _g4_s77 ? (548u + sizeof(_g4_t_v125)) : _g4_s77
  };
  alignas(16) uint8_t _g4_sf[_g4_s78];
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 8u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_p_s1 &p_s1 = *reinterpret_cast<_g4_t_p_s1 *>(_g4_sf + 24u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 48u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 48u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 48u);
  _g4_t_nc &nc = *reinterpret_cast<_g4_t_nc *>(_g4_sf + 48u);
  _g4_t_nd &nd = *reinterpret_cast<_g4_t_nd *>(_g4_sf + 48u);
  _g4_t_ne &ne = *reinterpret_cast<_g4_t_ne *>(_g4_sf + 48u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 56u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 56u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 60u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 60u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 64u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 68u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 72u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 76u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 80u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 80u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 80u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 84u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 88u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 104u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 116u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 120u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 128u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 136u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 152u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 168u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 184u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 188u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 194u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 196u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 202u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 204u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 210u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 212u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 218u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 220u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 226u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 228u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 234u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 236u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 242u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 244u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 250u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 252u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 258u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 260u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 266u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 268u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 274u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 276u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 280u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 284u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 288u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 292u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 296u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 300u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 304u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 308u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 312u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 440u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 444u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 448u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 456u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 464u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 472u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 480u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 488u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 496u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 504u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 536u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 540u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 548u);

  v2 = -2147483646;
  v125[11] = (int)(uintptr_t)(&a1);
  v3 = a2;
  v65 = a1;
  glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v77);
  v4 = (glwebtools::Self *)glwebtools::JsonReader::parse((glwebtools::Json::Value::Self *)v77, v3);
  if ( glwebtools::IsOperationSuccess(v4) )
  {
    glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v78, (glwebtools::Json::Value::Self *)v77, "prices");
    if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v78) != 0 )
    {
      glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v75);
      while ( 1 )
      {
        glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v76);
        if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                                (glwebtools::JsonReader::Iterator::Self *)v75,
                                (const glwebtools::JsonReader::Iterator::Self *)v76) == 0 )
          goto LABEL_67;
        v82 = 0;
        v84 = 0;
        v86 = 0;
        v88 = 0;
        v80 = (uint32_t (**)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(&off_2096648);
        v90 = 0;
        v92 = 0;
        v94 = 0;
        v96 = 0;
        v98 = 0;
        v100 = 0;
        v81 = &dword_213B814;
        v83 = &dword_213B814;
        v85 = &dword_213B814;
        v87 = &dword_213B814;
        v89 = &dword_213B814;
        v91 = &dword_213B814;
        v93 = &dword_213B814;
        v95 = &dword_213B814;
        v102 = 0;
        v103 = nullptr;
        v109 = &v107;
        v110 = &v107;
        v104 = nullptr;
        v105 = 0;
        v107 = 0;
        v108 = nullptr;
        v111 = 0;
        v2 = -2147483645;
        glwebtools::JsonReader::Iterator::opMul(
          (glwebtools::JsonReader::Iterator::Self *)v79,
          (glwebtools::Json::ValueIteratorBase::Self *)v75);
        if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v79) != 0 )
          v2 = ((int (*)(uint32_t (***)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *), uint8_t *, int, size_t, void **))*v80)(
                 &v80,
                 v79,
                 v51,
                 v52,
                 p_s1);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v79);
        if ( v2 != 0 )
        {
          iap::iABAndroidItemV1::Destroy((iap::iABAndroidItemV1::Self *)&v80);
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v78);
          goto LABEL_66;
        }
        v66 = v65 + 5;
        v5 = v65[6];
        if ( v5 == 0 )
          break;
        s2 = v81;
        v68 = (size_t)(v65 + 5);
        v6 = *(v81 - 3);
        do
        {
          while ( 1 )
          {
            v7 = *(uint32_t *)(*(uint32_t *)(v5 + 16) - 12);
            v8 = v7;
            n = v6;
            if ( v6 <= v7 )
              v8 = v6;
            v9 = memcmp(*(const void **)(v5 + 16), s2, v8);
            v6 = n;
            v10 = v7 - n;
            if ( v9 == 0 )
              v9 = v10;
            if ( v9 < 0 )
              break;
            v68 = v5;
            v5 = *(uint32_t *)(v5 + 8);
            if ( v5 == 0 )
              goto LABEL_17;
          }
          v5 = *(uint32_t *)(v5 + 12);
        }
        while ( v5 != 0 );
LABEL_17:
        if ( v66 == (uint32_t *)v68 )
          goto LABEL_23;
        v11 = *(uint32_t *)(*(uint32_t *)(v68 + 16) - 12);
        v12 = v11;
        if ( n <= v11 )
          v12 = n;
        v13 = memcmp(s2, *(const void **)(v68 + 16), v12);
        if ( v13 == 0 )
          v13 = n - v11;
        if ( v13 < 0 )
          goto LABEL_23;
LABEL_50:
        g4_std::string::assign_str(v68 + 24, &v81);
        *(uint8_t *)(v68 + 30) = v82;
        g4_std::string::assign_str(v68 + 32, &v83);
        *(uint8_t *)(v68 + 38) = v84;
        g4_std::string::assign_str(v68 + 40, &v85);
        *(uint8_t *)(v68 + 46) = v86;
        g4_std::string::assign_str(v68 + 48, &v87);
        *(uint8_t *)(v68 + 54) = v88;
        g4_std::string::assign_str(v68 + 56, &v89);
        *(uint8_t *)(v68 + 62) = v90;
        g4_std::string::assign_str(v68 + 64, &v91);
        *(uint8_t *)(v68 + 70) = v92;
        g4_std::string::assign_str(v68 + 72, &v93);
        *(uint8_t *)(v68 + 78) = v94;
        g4_std::string::assign_str(v68 + 80, &v95);
        *(uint8_t *)(v68 + 86) = v96;
        *(uint32_t *)(v68 + 88) = v97;
        *(uint8_t *)(v68 + 94) = v98;
        *(uint32_t *)(v68 + 96) = v99;
        *(uint8_t *)(v68 + 102) = v100;
        *(uint32_t *)(v68 + 104) = v101;
        *(uint8_t *)(v68 + 110) = v102;
        g4_std::vector_pair_string_glwebtools_J_91bc19::opAssign(
          (std::vector<std::pair<std::string, glwebtools::JSONValue::Self>> *)(v68 + 112),
          (const std::vector<std::pair<std::string, glwebtools::JSONValue::Self>> *)&v103);
        if ( (int *)(v68 + 124) != &v106 )
        {
          g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
            v68 + 124,
            *(uint32_t **)(v68 + 132));
          *(uint32_t *)(v68 + 136) = v68 + 128;
          *(uint32_t *)(v68 + 132) = 0;
          *(uint32_t *)(v68 + 140) = v68 + 128;
          *(uint32_t *)(v68 + 144) = 0;
          if ( v108 != nullptr )
          {
            v28 = (int)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_4216e3::M_copy(
                    v68 + 124,
                    v108,
                    v68 + 128));
            *(uint32_t *)(v68 + 132) = v28;
            for ( i = v28; *(uint32_t *)(i + 8) != 0; i = *(uint32_t *)(i + 8) )
              ;
            *(uint32_t *)(v68 + 136) = i;
            while ( *(uint32_t *)(v28 + 12) != 0 )
              v28 = *(uint32_t *)(v28 + 12);
            *(uint32_t *)(v68 + 140) = v28;
            *(uint32_t *)(v68 + 144) = v111;
          }
        }
        v80 = (uint32_t (**)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(&off_2096648);
        g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
          (int)(uintptr_t)(&v106),
          v108);
        v30 = (char *)v103;
        v69 = (size_t)v104;
        if ( v104 != v103 )
        {
          do
          {
            g4_std::string::Destroy(v30 + 4);
            v50 = v30;
            v30 += 8;
            g4_std::string::Destroy(v50);
          }
          while ( (char *)v69 != v30 );
          v30 = (char *)v103;
        }
        if ( v30 != nullptr )
          opDelete(v30);
        g4_std::string::Destroy(&v95);
        g4_std::string::Destroy(&v93);
        g4_std::string::Destroy(&v91);
        g4_std::string::Destroy(&v89);
        g4_std::string::Destroy(&v87);
        g4_std::string::Destroy(&v85);
        g4_std::string::Destroy(&v83);
        g4_std::string::Destroy(&v81);
        v51 = 0;
        glwebtools::JsonReader::Iterator::opInc(
          (glwebtools::JsonReader::Iterator::Self *)v72,
          (glwebtools::JsonReader::Iterator::Self *)v75);
      }
      v68 = (size_t)(v65 + 5);
LABEL_23:
      memset(v112, 0, sizeof(v112));
      v112[0] = (uint32_t)(uintptr_t)(&off_2096648);
      v112[1] = (uint32_t)(uintptr_t)(&dword_213B814);
      v112[3] = (uint32_t)(uintptr_t)(&dword_213B814);
      v112[5] = (uint32_t)(uintptr_t)(&dword_213B814);
      v112[7] = (uint32_t)(uintptr_t)(&dword_213B814);
      v112[9] = (uint32_t)(uintptr_t)(&dword_213B814);
      v112[11] = (uint32_t)(uintptr_t)(&dword_213B814);
      v112[13] = (uint32_t)(uintptr_t)(&dword_213B814);
      v112[15] = (uint32_t)(uintptr_t)(&dword_213B814);
      v112[29] = (uint32_t)(uintptr_t)(&v112[27]);
      v112[30] = (uint32_t)(uintptr_t)(&v112[27]);
      g4_std::string::construct_copy(&s1, &v81);
      iap::iABAndroidItemV1::Construct((iap::iABAndroidItemV1::Self *)&v114, (const iap::iABAndroidItemV1::Self *)v112);
      if ( v66 == (uint32_t *)v68 )
      {
        if ( v65[9] != 0 )
        {
          v39 = s1;
          v63 = (uint32_t *)v65[8];
          v40 = (uint32_t *)v63[4];
          v60 = *(v40 - 3);
          v41 = v60;
          if ( *((uint32_t *)s1 - 3) <= v60 )
            v41 = *((uint32_t *)s1 - 3);
          v70 = v41;
          nc = *((uint32_t *)s1 - 3);
          v42 = memcmp(v40, s1, v41);
          if ( v42 == 0 )
            v42 = v60 - nc;
          if ( v42 < 0 )
          {
            LOBYTE(v43) = 1;
            if ( v66 != v63 )
            {
              v44 = memcmp(v39, v40, v70);
              if ( v44 == 0 )
                v44 = nc - v60;
              v43 = v44 >> 31;
            }
            nd = v43;
            v68 = opNew(0x94u);
            v45 = nd;
            if ( v68 != -16 )
            {
              g4_std::string::construct_copy(v68 + 16, &s1);
              iap::iABAndroidItemV1::Construct(
                (iap::iABAndroidItemV1::Self *)(v68 + 20),
                (const iap::iABAndroidItemV1::Self *)&v114);
              v45 = nd;
            }
            sub_1904970(v45, v68, v63, v66);
            ++v65[9];
            goto LABEL_39;
          }
        }
      }
      else
      {
        v14 = *(uint32_t **)(v68 + 16);
        v62 = s1;
        v64 = *((uint32_t *)s1 - 3);
        v15 = v64;
        if ( *(v14 - 3) <= v64 )
          v15 = *(v14 - 3);
        na = *(v14 - 3);
        v16 = memcmp(s1, v14, v15);
        if ( v16 == 0 )
          v16 = v64 - na;
        if ( v16 < 0 )
        {
          if ( v65[7] != v68 )
          {
            v17 = sub_1904940(v68);
            v18 = *(uint32_t **)(v17 + 16);
            v19 = v64;
            v20 = *(v18 - 3);
            if ( v20 <= v64 )
              v19 = *(v18 - 3);
            v71 = v19;
            nb = v17;
            v21 = memcmp(v18, v62, v19);
            v22 = nb;
            if ( v21 == 0 )
              v21 = v20 - v64;
            if ( v21 < 0 )
            {
              if ( *(uint32_t *)(nb + 12) != 0 )
              {
                v23 = opNew(0x94u);
                if ( v23 != -16 )
                {
                  g4_std::string::construct_copy(v23 + 16, &s1);
                  iap::iABAndroidItemV1::Construct(
                    (iap::iABAndroidItemV1::Self *)(v23 + 20),
                    (const iap::iABAndroidItemV1::Self *)&v114);
                }
                sub_1904970(1, v23, v68, v66);
                v68 = v23;
                ++v65[9];
              }
              else
              {
                LOBYTE(v61) = 1;
                if ( v66 != (uint32_t *)nb )
                {
                  v46 = memcmp(v62, v18, v71);
                  v22 = nb;
                  if ( v46 == 0 )
                    v46 = v64 - v20;
                  v61 = v46 >> 31;
                }
                ne = v22;
                v68 = opNew(0x94u);
                v47 = ne;
                if ( v68 != -16 )
                {
                  g4_std::string::construct_copy(v68 + 16, &s1);
                  iap::iABAndroidItemV1::Construct(
                    (iap::iABAndroidItemV1::Self *)(v68 + 20),
                    (const iap::iABAndroidItemV1::Self *)&v114);
                  v47 = ne;
                }
                sub_1904970(v61, v68, v47, v66);
                ++v65[9];
              }
              goto LABEL_39;
            }
            goto LABEL_82;
          }
          p_s1 = &s1;
          v52 = v68;
LABEL_105:
          g4_std::Rb_tree_string_pair_string_const_39d424::M_insert(&v74);
          v68 = v74;
          goto LABEL_39;
        }
        v32 = memcmp(v14, v62, v15);
        if ( v32 == 0 )
          v32 = na - v64;
        if ( v32 >= 0 )
          goto LABEL_39;
        v33 = v68;
        if ( v65[8] == v68 )
        {
LABEL_104:
          p_s1 = &s1;
          v52 = v33;
          goto LABEL_105;
        }
        v34 = sub_19048E0(v68);
        v35 = *(uint32_t **)(v34 + 16);
        v36 = v64;
        v37 = *(v35 - 3);
        if ( v37 <= v64 )
          v36 = *(v35 - 3);
        v38 = memcmp(v62, v35, v36);
        if ( v38 == 0 )
          v38 = v64 - v37;
        if ( v38 < 0 )
        {
          v33 = v68;
          if ( *(uint32_t *)(v68 + 12) != 0 )
          {
            v68 = opNew(0x94u);
            if ( v68 != -16 )
            {
              g4_std::string::construct_copy(v68 + 16, &s1);
              iap::iABAndroidItemV1::Construct(
                (iap::iABAndroidItemV1::Self *)(v68 + 20),
                (const iap::iABAndroidItemV1::Self *)&v114);
            }
            sub_1904970(1, v68, v34, v66);
            ++v65[9];
            goto LABEL_39;
          }
          goto LABEL_104;
        }
      }
LABEL_82:
      g4_std::Rb_tree_string_pair_string_const_39d424::M_insert_unique(v73);
      v68 = v73[0];
LABEL_39:
      v114 = (uint32_t (**)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(&off_2096648);
      g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
        (int)(uintptr_t)(v125),
        (uint32_t *)v125[2]);
      v24 = v124;
      v25 = (char *)v123;
      if ( v124 != v123 )
      {
        do
        {
          g4_std::string::Destroy(v25 + 4);
          v48 = v25;
          v25 += 8;
          g4_std::string::Destroy(v48);
        }
        while ( v24 != v25 );
        v25 = (char *)v123;
      }
      if ( v25 != nullptr )
        opDelete(v25);
      g4_std::string::Destroy(v122);
      g4_std::string::Destroy(v121);
      g4_std::string::Destroy(v120);
      g4_std::string::Destroy(v119);
      g4_std::string::Destroy(v118);
      g4_std::string::Destroy(v117);
      g4_std::string::Destroy(v116);
      g4_std::string::Destroy(v115);
      g4_std::string::Destroy(&s1);
      v112[0] = (uint32_t)(uintptr_t)(&off_2096648);
      g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
        (int)(uintptr_t)(&v112[26]),
        (uint32_t *)v112[28]);
      v26 = (char *)v112[24];
      v27 = (char *)v112[23];
      if ( v112[24] != v112[23] )
      {
        do
        {
          g4_std::string::Destroy(v27 + 4);
          v49 = v27;
          v27 += 8;
          g4_std::string::Destroy(v49);
        }
        while ( v26 != v27 );
        v27 = (char *)v112[23];
      }
      if ( v27 != nullptr )
        opDelete(v27);
      g4_std::string::Destroy(&v112[15]);
      g4_std::string::Destroy(&v112[13]);
      g4_std::string::Destroy(&v112[11]);
      g4_std::string::Destroy(&v112[9]);
      g4_std::string::Destroy(&v112[7]);
      g4_std::string::Destroy(&v112[5]);
      g4_std::string::Destroy(&v112[3]);
      g4_std::string::Destroy(&v112[1]);
      goto LABEL_50;
    }
LABEL_67:
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v78);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v77);
    return 0;
  }
  else
  {
LABEL_66:
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v77);
    return v2;
  }
}


