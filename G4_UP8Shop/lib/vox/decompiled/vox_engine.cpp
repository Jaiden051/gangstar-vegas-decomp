#include "Core/Utils/DecompTypes.h"
#include "vox_engine.h"

// ----------------------------------------------------------------------------
// Function: vox::DecoderRawFactory  (binary VA: 0xfdf570)
// Original: vox::DecoderRawFactory
// ----------------------------------------------------------------------------
int vox::DecoderRawFactory(vox::Self *self)
{
  int v1;

  v1 = VoxAllocInternal(0x14u, 0, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_raw.cpp"), (int)(uintptr_t)("DecoderRawFactory"), 14);
  vox::DecoderRaw::Construct(v1, self);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMPC8Factory  (binary VA: 0xfe0540)
// Original: vox::DecoderMPC8Factory
// ----------------------------------------------------------------------------
int vox::DecoderMPC8Factory(vox::Self *self)
{
  int v1;

  v1 = VoxAllocInternal(8u, 0, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_mpc8.cpp"), (int)(uintptr_t)("DecoderMPC8Factory"), 68);
  vox::DecoderMPC8::Construct(v1, self);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMSWavFactory  (binary VA: 0xfe6770)
// Original: vox::DecoderMSWavFactory
// ----------------------------------------------------------------------------
vox::DecoderMSWav::Self * vox::DecoderMSWavFactory()
{
  vox::DecoderMSWav::Self *v0;

  v0 = (vox::DecoderMSWav::Self *)VoxAllocInternal(
                              0x48u,
                              0,
                              (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_mswav.cpp"),
                              (int)(uintptr_t)("DecoderMSWavFactory"),
                              20);
  vox::DecoderMSWav::DecoderMSWav(v0);
  return v0;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderStbVorbisFactory  (binary VA: 0xfea020)
// Original: vox::DecoderStbVorbisFactory
// ----------------------------------------------------------------------------
uint32_t * vox::DecoderStbVorbisFactory()
{
  uint32_t *result;

  result = (uint32_t *)VoxAllocInternal(
                       0xCu,
                       0,
                       (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_stbvorbis.cpp"),
                       (int)(uintptr_t)("DecoderStbVorbisFactory"),
                       71);
  result[1] = 0;
  *result = ((uint32_t)(uintptr_t)&off_208CF88);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNativeFactory  (binary VA: 0xfea620)
// Original: vox::DecoderNativeFactory
// ----------------------------------------------------------------------------
vox::DecoderNative::Self * vox::DecoderNativeFactory()
{
  vox::DecoderNative::Self *v0;

  v0 = (vox::DecoderNative::Self *)VoxAllocInternal(
                               0x90u,
                               0,
                               (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"),
                               (int)(uintptr_t)("DecoderNativeFactory"),
                               24);
  vox::DecoderNative::Construct(v0);
  return v0;
}

// ----------------------------------------------------------------------------
// Function: vox::DistanceModelToString  (binary VA: 0x1004730)
// Original: vox::DistanceModelToString
// ----------------------------------------------------------------------------
const char * vox::DistanceModelToString(vox::Self *self)
{
  const char *result;

  result = "Inverse Distance Clamped";
  if ( self != (vox::Self *)((char *)&dword_0 + 1) )
  {
    result = "None";
    if ( self != nullptr )
    {
      result = "Linear Distance Clamped";
      if ( self != (vox::Self *)((char *)&dword_0 + 2) )
      {
        result = "Unknown";
        if ( self == (vox::Self *)((char *)&dword_0 + 3) )
          return "Exponential Distance Clamped";
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::isDir  (binary VA: 0x100b450)
// Original: vox::isDir
// ----------------------------------------------------------------------------
int vox::isDir(vox::Self *self, bool *a2)
{
  int result;
  struct stat buf;

  result = (int)(uintptr_t)(stat((const char *)self, &buf));
  *a2 = result == 0 && (buf.st_mode & 0xF000) == 0x4000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::closeStdIO  (binary VA: 0x1011450)
// Original: vox::closeStdIO
// ----------------------------------------------------------------------------
int vox::closeStdIO(FILE *self)
{
  return fclose(self);
}

// ----------------------------------------------------------------------------
// Function: vox::tellStdIO  (binary VA: 0x1011480)
// Original: vox::tellStdIO
// ----------------------------------------------------------------------------
int vox::tellStdIO(FILE *self)
{
  return ftell(self);
}

// ----------------------------------------------------------------------------
// Function: vox::seekStdIO  (binary VA: 0x10114b0)
// Original: vox::seekStdIO
// ----------------------------------------------------------------------------
int vox::seekStdIO(FILE *stream, int off, int a3)
{
  int whence;

  whence = 2;
  if ( a3 != 2 )
    whence = a3 == 1;
  return fseek(stream, off, whence);
}

// ----------------------------------------------------------------------------
// Function: vox::writeStdIO  (binary VA: 0x1011500)
// Original: vox::writeStdIO
// ----------------------------------------------------------------------------
size_t vox::writeStdIO(vox::Self *self, size_t size, size_t n, FILE *s)
{
  return fwrite(self, size, n, s);
}

// ----------------------------------------------------------------------------
// Function: vox::readStdIO  (binary VA: 0x1011540)
// Original: vox::readStdIO
// ----------------------------------------------------------------------------
size_t vox::readStdIO(vox::Self *self, size_t size, size_t n, FILE *stream)
{
  return fread(self, size, n, stream);
}

// ----------------------------------------------------------------------------
// Function: vox::openStdIO  (binary VA: 0x1011580)
// Original: vox::openStdIO
// ----------------------------------------------------------------------------
FILE * vox::openStdIO(const char *filename, int a2)
{
  FILE *result;

  switch ( a2 )
  {
    case 0:
      result = fopen(filename, "r");
      break;
    case 1:
      result = fopen(filename, "w");
      break;
    case 2:
      result = fopen(filename, "a");
      break;
    case 3:
      result = fopen(filename, "r+");
      break;
    case 4:
      result = fopen(filename, "w+");
      break;
    case 5:
      result = fopen(filename, "a+");
      break;
    case 6:
      result = fopen(filename, "rb");
      break;
    case 7:
      result = fopen(filename, "wb");
      break;
    case 8:
      result = fopen(filename, "ab");
      break;
    case 9:
      result = fopen(filename, (const char *)&off_1B152A5);
      break;
    case 10:
      result = fopen(filename, (const char *)&off_1B1ABE3);
      break;
    case 11:
      result = fopen(filename, "a+b");
      break;
    default:
      result = nullptr;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxNewFileSystem  (binary VA: 0x1011760)
// Original: vox::VoxNewFileSystem
// ----------------------------------------------------------------------------
vox::FileSystemStdio::Self * vox::VoxNewFileSystem()
{
  vox::FileSystemStdio::Self *v0;

  v0 = (vox::FileSystemStdio::Self *)VoxAllocInternal(
                                 0x10u,
                                 0,
                                 (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_filesystem_stdio.cpp"),
                                 (int)(uintptr_t)("VoxNewFileSystem"),
                                 95);
  vox::FileSystemStdio::Construct(v0);
  return v0;
}

// ----------------------------------------------------------------------------
// Function: vox::LoadXML_Tiny  (binary VA: 0x101b350)
// Original: vox::LoadXML_Tiny
// ----------------------------------------------------------------------------
int vox::LoadXML_Tiny(vox::Self *self, vox::VoxSoundPackXMLInternalData::Self *a2)
{
  vox::Self *v2;
  int v3;
  TiXmlElement::Self *v5;
  char *v6;
  char *v7;
  char *v8;
  char *v9;
  const char *v10;
  const char *v11;
  size_t v12;
  char *v13;
  const char *v14;
  const char *v15;
  size_t v16;
  char *v17;
  const char *v18;
  const char *v19;
  size_t v20;
  char *v21;
  TiXmlElement::Self *v22;
  int v23;
  vox::EventXMLDef::Self *v24;
  int v25;
  char *v26;
  char *v27;
  char *v28;
  char *v29;
  int v30;
  uint32_t *v31;
  vox::VoxSoundPackXMLInternalData::Self *v32;
  int v33;
  vox::VoxSoundPackXMLInternalData::Self *v34;
  vox::EventXMLDef::Self *v35;
  int v36;
  uint32_t *v37;
  void *v38;
  void *v39;
  TiXmlElement::Self *SiblingElement;
  char *v41;
  char v42;
  const char *v43;
  char *v44;
  size_t v45;
  const char *v46;
  char *v47;
  size_t v48;
  int v49;
  int v50;
  char v51;
  float v52; // xmm0_4
  float v53; // xmm0_4
  uint8_t *v54;
  float v55; // xmm0_4
  float v56; // xmm0_4
  float v57; // xmm0_4
  float v58; // xmm0_4
  float v59; // xmm0_4
  float v60; // xmm0_4
  float v61; // xmm0_4
  float v62; // xmm0_4
  float v63; // xmm0_4
  float v64; // xmm0_4
  float v65; // xmm0_4
  float v66; // xmm0_4
  float v67; // xmm0_4
  uint8_t *v68;
  float v69; // xmm0_4
  float v70; // xmm0_4
  uint8_t *v71;
  float v72; // xmm0_4
  TiXmlElement::Self *v73;
  int v74;
  vox::EventXMLDef::Self *v75;
  vox::EventXMLDef::Self *v76;
  char *v77;
  vox::EventXMLDef::Self *v78;
  uint32_t *v79;
  uint32_t *v80;
  uint32_t *v81;
  vox::VoxSoundPackXMLInternalData::Self *v82;
  int v83;
  uint32_t *v84;
  void *v85;
  const char *i;
  char v87;
  int v88;
  int v89;
  TiXmlElement::Self *v90;
  char *v91;
  size_t v92;
  const char *v93;
  TiXmlElement::Self *v94;
  char *v95;
  char *v96;
  char *v97;
  void **v98;
  void *v99;
  int v100;
  char *v101;
  int v102;
  char *v103;
  int v104;
  uint32_t *v105;
  int v106;
  vox::VoxSoundPackXMLInternalData::Self *v107;
  int v108;
  TiXmlElement::Self *v109;
  vox::VoxSoundPackXMLInternalData::Self *v110;
  const char *v111;
  const char *v112;
  int v113;
  size_t v114;
  vox::VoxSoundPackXMLInternalData::Self *v115;
  char *v116;
  char *LowerCaseHashLabel;
  int *v118;
  vox::VoxSoundPackXMLInternalData::Self *v119;
  int v120;
  int v121;
  int v122;
  char v123;
  char v124;
  vox::VoxSoundPackXMLInternalData::Self *v125;
  vox::VoxSoundPackXMLInternalData::Self *v126;
  int v127;
  vox::VoxSoundPackXMLInternalData::Self *v128;
  int v129;
  vox::VoxSoundPackXMLInternalData::Self *v130;
  uint8_t *v131;
  const char *v132;
  const char *v133;
  const char *v134;
  const char *v135;
  vox::VoxSoundPackXMLInternalData::Self *v136;
  int v137;
  size_t v138;
  char *v139;
  const char *v140;
  const char *v141;
  int v142;
  size_t v143;
  vox::VoxSoundPackXMLInternalData::Self *v144;
  int v145;
  char *v146;
  char *v147;
  char v148;
  float v149; // xmm0_4
  float v150; // xmm0_4
  float v151; // xmm0_4
  int v152;
  vox::VoxSoundPackXMLInternalData::Self *v153;
  float v154; // xmm0_4
  long double v155; // fst7
  float v156; // xmm0_4
  int v157;
  vox::VoxSoundPackXMLInternalData::Self *v158;
  float v159; // xmm0_4
  long double v160; // fst7
  float v161; // xmm0_4
  int v162;
  vox::VoxSoundPackXMLInternalData::Self *v163;
  float v164; // xmm0_4
  long double v165; // fst7
  float v166; // xmm0_4
  int v167;
  int v168;
  int v169;
  vox::VoxSoundPackXMLInternalData::Self *v170;
  float v171; // xmm0_4
  long double v172; // fst7
  float v173; // xmm0_4
  float v174; // xmm0_4
  float v175; // xmm0_4
  int v176;
  int v177;
  uint8_t *v178;
  bool v179;
  int v180;
  float v181; // xmm0_4
  float v182; // xmm0_4
  uint8_t *v183;
  int v184;
  float v185; // xmm0_4
  char *v186;
  vox::VoxSoundPackXMLInternalData::Self *v187;
  char v188;
  int v189;
  char *v190;
  int v191;
  int v192;
  int v193;
  uint32_t *v194;
  size_t v195;
  int v196;
  int v197;
  int v198;
  int v199;
  char *v200;
  TiXmlElement::Self *v201;
  char **v202;
  int v203;
  char *n;
  int v205;
  char *v206;
  int v207;
  int v208;
  int v209;
  int v210;
  vox::EventXMLDef::Self *v211;
  char *v212;
  char *v213;
  vox::EventXMLDef::Self *v214;
  void **v215;
  int v216;
  uint32_t *v217;
  uint32_t *v218;
  uint32_t *v219;
  vox::VoxSoundPackXMLInternalData::Self *v220;
  int v221;
  void **v222;
  char *v223;
  uint32_t *v224;
  uint32_t *v225;
  uint32_t *v226;
  void *v227;
  void **v228;
  void **v229;
  int v230;
  char *v231;
  int v232;
  char *v233;
  int v234;
  uint32_t *v235;
  int v236;
  vox::VoxSoundPackXMLInternalData::Self *v237;
  int v238;
  TiXmlElement::Self *v239;
  const char *v240;
  const char *v241;
  uint32_t *v242;
  size_t v243;
  char *v244;
  char *v245;
  int *v246;
  const char *v247;
  char *v248;
  char *ii;
  int Uid;
  int v251;
  int *v252;
  int v253;
  char *v254;
  char *v255;
  int v256;
  int v257;
  int v258;
  char *v259;
  int v260;
  int16_t v261;
  float v262; // xmm0_4
  const char *v263;
  const char *v264;
  const char *v265;
  char v266;
  int v267;
  const char *v268;
  int v269;
  int v270;
  uint32_t *v271;
  size_t v272;
  int v273;
  char *v274;
  int v275;
  int v276;
  int v277;
  char *v278;
  int v279;
  size_t v280;
  int v281;
  char *v282;
  int v283;
  char v284;
  int v285;
  uint8_t *v286;
  int v287;
  char *v288;
  unsigned int v289;
  int *v290;
  char *v291;
  char *v292;
  vox::VoxSoundPackXMLInternalData::Self *v293;
  vox::VoxSoundPackXMLInternalData::Self *v294;
  char *v295;
  uint32_t *v296;
  uint8_t *v297;
  char *v298;
  int v299;
  char *v300;
  int v301;
  int v302;
  char *v303;
  char *v304;
  uint32_t *v305;
  int v306;
  vox::EventXMLDef::Self *v307;
  void **v308;
  vox::EventXMLDef::Self *v309;
  uint32_t *v310;
  uint32_t *v311;
  uint32_t *v312;
  char *v313;
  int v314;
  int v315;
  char *v316;
  int v317;
  uint32_t *v318;
  char *v319;
  int v320;
  vox::EventXMLDef::Self *v321;
  int v322;
  char *v323;
  int v324;
  char *v325;
  vox::VoxSoundPackXMLInternalData::Self *j;
  int v327;
  void **k;
  int v329;
  char *v330;
  int v331;
  int v332;
  int v333;
  int v334;
  char *v335;
  char *v336;
  uint32_t *v337;
  int v338;
  vox::EventXMLDef::Self *v339;
  char *v340;
  int v341;
  char *v342;
  char *v343;
  vox::EventXMLDef::Self *v344;
  char *v345;
  int v346;
  char *v347;
  char *v348;
  int v349;
  int v350;
  char *v351;
  vox::EventXMLDef::Self *v352;
  int v353;
  char *v354;
  char *v355;
  const vox::EventXMLDef::Self *v356;
  vox::EventXMLDef::Self *v357;
  char *m;
  int v359;
  char *v360;
  int v361;
  int v362;
  int v363;
  int v364;
  vox::EventXMLDef::Self *v365;
  char *v366;
  char *v367;
  typedef vox::EventXMLDef::Self *_g4_t_v368;
  typedef vox::EventXMLDef::Self *_g4_t_v369;
  typedef vox::Self *_g4_t_v370;
  typedef const vox::EventXMLDef::Self *_g4_t_v371;
  typedef const vox::EventXMLDef::Self *_g4_t_v372;
  typedef vox::VoxSoundPackXMLInternalData::Self *_g4_t_v373;
  typedef vox::VoxSoundPackXMLInternalData::Self *_g4_t_v374;
  typedef vox::VoxSoundPackXMLInternalData::Self *_g4_t_v375;
  typedef vox::VoxSoundPackXMLInternalData::Self *_g4_t_v376;
  typedef vox::VoxSoundPackXMLInternalData::Self *_g4_t_v377;
  typedef vox::VoxSoundPackXMLInternalData::Self *_g4_t_v378;
  typedef vox::VoxSoundPackXMLInternalData::Self *_g4_t_v379;
  typedef vox::VoxSoundPackXMLInternalData::Self *_g4_t_v380;
  typedef vox::VoxSoundPackXMLInternalData::Self *_g4_t_v381;
  typedef vox::VoxSoundPackXMLInternalData::Self *_g4_t_v382;
  typedef vox::VoxSoundPackXMLInternalData::Self *_g4_t_v383;
  typedef vox::VoxSoundPackXMLInternalData::Self *_g4_t_v384;
  typedef vox::VoxSoundPackXMLInternalData::Self *_g4_t_v385;
  typedef vox::VoxSoundPackXMLInternalData::Self *_g4_t_v386;
  typedef vox::VoxSoundPackXMLInternalData::Self *_g4_t_v387;
  typedef vox::VoxSoundPackXMLInternalData::Self *_g4_t_v388;
  typedef vox::VoxSoundPackXMLInternalData::Self *_g4_t_v389;
  typedef vox::VoxSoundPackXMLInternalData::Self *_g4_t_v390;
  typedef vox::VoxSoundPackXMLInternalData::Self *_g4_t_v391;
  typedef int _g4_t_v392;
  typedef unsigned int **_g4_t_v393;
  typedef char *_g4_t_v394;
  typedef char *_g4_t_v395;
  typedef char *_g4_t_v396;
  typedef int _g4_t_v397;
  typedef char *_g4_t_v398;
  typedef char *_g4_t_v399;
  typedef char *_g4_t_v400;
  typedef int _g4_t_v401;
  typedef char *_g4_t_v402;
  typedef char *_g4_t_v403;
  typedef char *_g4_t_v404;
  typedef char *_g4_t_v405;
  typedef char *_g4_t_v406;
  typedef int _g4_t_v407;
  typedef char *_g4_t_v408;
  typedef char *_g4_t_v409;
  typedef char *_g4_t_v410;
  typedef char *_g4_t_v411;
  typedef char *_g4_t_v412;
  typedef char *_g4_t_v413;
  typedef TiXmlElement::Self *_g4_t_v414;
  typedef const char *_g4_t_v415;
  typedef const char *_g4_t_v416;
  typedef const char *_g4_t_v417;
  typedef char *_g4_t_v418;
  typedef int _g4_t_v419;
  typedef char *_g4_t_v420;
  typedef char *_g4_t_v421;
  typedef char *_g4_t_v422;
  typedef char *_g4_t_v423;
  typedef char *_g4_t_v424;
  typedef char *_g4_t_v425;
  typedef vox::EventXMLDef::Self *_g4_t_v426;
  typedef vox::EventXMLDef::Self *_g4_t_v427;
  typedef vox::EventXMLDef::Self *_g4_t_v428;
  typedef vox::EventXMLDef::Self *_g4_t_v429;
  typedef vox::EventXMLDef::Self *_g4_t_v430;
  typedef vox::EventXMLDef::Self *_g4_t_v431;
  typedef vox::EventXMLDef::Self *_g4_t_v432;
  typedef vox::EventXMLDef::Self *_g4_t_v433;
  typedef vox::EventXMLDef::Self *_g4_t_v434;
  typedef vox::EventXMLDef::Self *_g4_t_v435;
  typedef vox::EventXMLDef::Self *_g4_t_v436;
  typedef vox::EventXMLDef::Self *_g4_t_v437;
  typedef int _g4_t_s1;
  typedef const char *_g4_t_s1a;
  typedef int _g4_t_s1b;
  typedef TiXmlElement::Self *_g4_t_s1c;
  typedef char *_g4_t_s1d;
  typedef TiXmlElement::Self *_g4_t_s1e;
  typedef char *_g4_t_s1f;
  typedef char *_g4_t_s1g;
  typedef int _g4_t_s1h;
  typedef char *_g4_t_s1i;
  typedef int _g4_t_s1j;
  typedef vox::EventXMLDef::Self *_g4_t_s1k;
  typedef char *_g4_t_s1l;
  typedef vox::VoxSoundPackXMLInternalData::Self *_g4_t_v451;
  typedef char *_g4_t_s;
  typedef char *_g4_t_sa;
  typedef char *_g4_t_sb;
  typedef int _g4_t_sc;
  typedef char *_g4_t_sd;
  typedef char *_g4_t_se;
  typedef char *_g4_t_sf;
  typedef char *_g4_t_sg;
  typedef char *_g4_t_sh;
  typedef char *_g4_t_si;
  typedef char *_g4_t_sj;
  typedef char *_g4_t_sk;
  typedef char *_g4_t_sl;
  typedef char *_g4_t_sm;
  typedef char *_g4_t_sn;
  typedef char *_g4_t_so;
  typedef int _g4_t_sp;
  typedef char *_g4_t_sq;
  typedef char *_g4_t_sr;
  typedef vox::EventXMLDef::Self *_g4_t_v471;
  typedef char *_g4_t_v472;
  typedef int _g4_t_v473;
  typedef vox::EventXMLDef::Self *_g4_t_v474;
  typedef int _g4_t_v475;
  typedef int _g4_t_v476;
  typedef int _g4_t_v477;
  typedef int _g4_t_v478;
  typedef char *_g4_t_v479;
  typedef int _g4_t_v480;
  typedef char *_g4_t_v481;
  typedef int _g4_t_v482;
  typedef int _g4_t_v483;
  typedef vox::EventXMLDef::Self *_g4_t_v484;
  typedef char *_g4_t_v485;
  typedef char *_g4_t_v486;
  typedef int _g4_t_v487;
  typedef char *_g4_t_v488;
  typedef int _g4_t_v489;
  typedef int _g4_t_v490[4];
  typedef int _g4_t_v491[4];
  typedef int _g4_t_v492;
  typedef char _g4_t_v493[4];
  typedef char _g4_t_v494[4];
  typedef int _g4_t_v495;
  typedef char _g4_t_v496[4];
  typedef char _g4_t_v497[4];
  typedef int _g4_t_v498;
  typedef int _g4_t_v499;
  typedef char _g4_t_v500[4];
  typedef char _g4_t_v501[4];
  typedef char _g4_t_v502[4];
  typedef int _g4_t_v503;
  typedef char _g4_t_v504[4];
  typedef char _g4_t_v505[4];
  typedef int _g4_t_v506;
  typedef char _g4_t_v507[4];
  typedef char _g4_t_v508[4];
  typedef char _g4_t_v509[4];
  typedef int _g4_t_v510;
  typedef char _g4_t_v511[4];
  typedef char _g4_t_v512[4];
  typedef int _g4_t_v513;
  typedef char _g4_t_v514[4];
  typedef char _g4_t_v515[4];
  typedef char _g4_t_v516[4];
  typedef int _g4_t_v517;
  typedef int _g4_t_v518;
  typedef char _g4_t_v519[4];
  typedef char _g4_t_v520[4];
  typedef int _g4_t_v521;
  typedef char _g4_t_v522[4];
  typedef char _g4_t_v523[4];
  typedef char _g4_t_v524[4];
  typedef int _g4_t_v525;
  typedef double _g4_t_v526;
  typedef vox::EventXMLDef::Self *_g4_t_v527;
  typedef vox::EventXMLDef::Self *_g4_t_v528;
  typedef char *_g4_t_v529;
  typedef vox::EventXMLDef::Self *_g4_t_v530;
  typedef vox::EventXMLDef::Self *_g4_t_v531;
  typedef char *_g4_t_v532;
  typedef void *_g4_t_v533;
  typedef char *_g4_t_v534;
  typedef char *_g4_t_v535;
  typedef char *_g4_t_v536;
  typedef char *_g4_t_v537;
  typedef char *_g4_t_v538;
  typedef char *_g4_t_v539;
  typedef char *_g4_t_v540;
  typedef char *_g4_t_v541;
  typedef char *_g4_t_v542;
  typedef vox::EventXMLDef::Self *_g4_t_v543;
  typedef char *_g4_t_v544;
  typedef int _g4_t_v545;
  typedef int _g4_t_v546;
  typedef int _g4_t_v547;
  typedef int _g4_t_v548;
  typedef int _g4_t_v549;
  typedef char _g4_t_v550;
  typedef int _g4_t_v551;
  typedef void *_g4_t_v552;
  typedef void *_g4_t_v553[2];
  typedef void *_g4_t_v554;
  typedef char *_g4_t_v555;
  typedef int _g4_t_v556;
  typedef int16_t _g4_t_v557;
  typedef int16_t _g4_t_v558;
  typedef int16_t _g4_t_v559;
  typedef int16_t _g4_t_v560;
  typedef int _g4_t_v561;
  typedef int _g4_t_v562;
  typedef uint64_t _g4_t_v563;
  typedef int _g4_t_v564;
  typedef void *_g4_t_v565;
  typedef uint8_t _g4_t_v566[72];
  typedef int _g4_t_v567;
  typedef uint32_t _g4_t_v568[4];
  typedef char _g4_t_v569;
  typedef int _g4_t_v570;
  typedef int _g4_t_v571;
  typedef int _g4_t_v572;
  typedef int _g4_t_v573;
  typedef int _g4_t_v574;
  typedef int _g4_t_v575;
  typedef int _g4_t_v576;
  typedef int _g4_t_v577;
  typedef int _g4_t_v578;
  typedef char _g4_t_v579;
  typedef int _g4_t_v580;
  typedef int _g4_t_v581;
  typedef char _g4_t_v582;
  typedef int _g4_t_v583;
  typedef void *_g4_t_v584[30];
  enum : size_t {
    _g4_s0 = 944u,
    _g4_s1 = (0u + sizeof(_g4_t_v368)) > _g4_s0 ? (0u + sizeof(_g4_t_v368)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v369)) > _g4_s1 ? (0u + sizeof(_g4_t_v369)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v370)) > _g4_s2 ? (4u + sizeof(_g4_t_v370)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v371)) > _g4_s3 ? (4u + sizeof(_g4_t_v371)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v372)) > _g4_s4 ? (4u + sizeof(_g4_t_v372)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v373)) > _g4_s5 ? (48u + sizeof(_g4_t_v373)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v374)) > _g4_s6 ? (48u + sizeof(_g4_t_v374)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v375)) > _g4_s7 ? (48u + sizeof(_g4_t_v375)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v376)) > _g4_s8 ? (48u + sizeof(_g4_t_v376)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v377)) > _g4_s9 ? (48u + sizeof(_g4_t_v377)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v378)) > _g4_s10 ? (48u + sizeof(_g4_t_v378)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v379)) > _g4_s11 ? (48u + sizeof(_g4_t_v379)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v380)) > _g4_s12 ? (48u + sizeof(_g4_t_v380)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v381)) > _g4_s13 ? (48u + sizeof(_g4_t_v381)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v382)) > _g4_s14 ? (48u + sizeof(_g4_t_v382)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v383)) > _g4_s15 ? (48u + sizeof(_g4_t_v383)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v384)) > _g4_s16 ? (48u + sizeof(_g4_t_v384)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v385)) > _g4_s17 ? (48u + sizeof(_g4_t_v385)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v386)) > _g4_s18 ? (48u + sizeof(_g4_t_v386)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v387)) > _g4_s19 ? (48u + sizeof(_g4_t_v387)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v388)) > _g4_s20 ? (48u + sizeof(_g4_t_v388)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v389)) > _g4_s21 ? (48u + sizeof(_g4_t_v389)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v390)) > _g4_s22 ? (48u + sizeof(_g4_t_v390)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v391)) > _g4_s23 ? (48u + sizeof(_g4_t_v391)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v392)) > _g4_s24 ? (52u + sizeof(_g4_t_v392)) : _g4_s24,
    _g4_s26 = (56u + sizeof(_g4_t_v393)) > _g4_s25 ? (56u + sizeof(_g4_t_v393)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v394)) > _g4_s26 ? (132u + sizeof(_g4_t_v394)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v395)) > _g4_s27 ? (136u + sizeof(_g4_t_v395)) : _g4_s27,
    _g4_s29 = (140u + sizeof(_g4_t_v396)) > _g4_s28 ? (140u + sizeof(_g4_t_v396)) : _g4_s28,
    _g4_s30 = (152u + sizeof(_g4_t_v397)) > _g4_s29 ? (152u + sizeof(_g4_t_v397)) : _g4_s29,
    _g4_s31 = (160u + sizeof(_g4_t_v398)) > _g4_s30 ? (160u + sizeof(_g4_t_v398)) : _g4_s30,
    _g4_s32 = (168u + sizeof(_g4_t_v399)) > _g4_s31 ? (168u + sizeof(_g4_t_v399)) : _g4_s31,
    _g4_s33 = (172u + sizeof(_g4_t_v400)) > _g4_s32 ? (172u + sizeof(_g4_t_v400)) : _g4_s32,
    _g4_s34 = (172u + sizeof(_g4_t_v401)) > _g4_s33 ? (172u + sizeof(_g4_t_v401)) : _g4_s33,
    _g4_s35 = (176u + sizeof(_g4_t_v402)) > _g4_s34 ? (176u + sizeof(_g4_t_v402)) : _g4_s34,
    _g4_s36 = (176u + sizeof(_g4_t_v403)) > _g4_s35 ? (176u + sizeof(_g4_t_v403)) : _g4_s35,
    _g4_s37 = (176u + sizeof(_g4_t_v404)) > _g4_s36 ? (176u + sizeof(_g4_t_v404)) : _g4_s36,
    _g4_s38 = (176u + sizeof(_g4_t_v405)) > _g4_s37 ? (176u + sizeof(_g4_t_v405)) : _g4_s37,
    _g4_s39 = (180u + sizeof(_g4_t_v406)) > _g4_s38 ? (180u + sizeof(_g4_t_v406)) : _g4_s38,
    _g4_s40 = (180u + sizeof(_g4_t_v407)) > _g4_s39 ? (180u + sizeof(_g4_t_v407)) : _g4_s39,
    _g4_s41 = (180u + sizeof(_g4_t_v408)) > _g4_s40 ? (180u + sizeof(_g4_t_v408)) : _g4_s40,
    _g4_s42 = (180u + sizeof(_g4_t_v409)) > _g4_s41 ? (180u + sizeof(_g4_t_v409)) : _g4_s41,
    _g4_s43 = (180u + sizeof(_g4_t_v410)) > _g4_s42 ? (180u + sizeof(_g4_t_v410)) : _g4_s42,
    _g4_s44 = (180u + sizeof(_g4_t_v411)) > _g4_s43 ? (180u + sizeof(_g4_t_v411)) : _g4_s43,
    _g4_s45 = (180u + sizeof(_g4_t_v412)) > _g4_s44 ? (180u + sizeof(_g4_t_v412)) : _g4_s44,
    _g4_s46 = (180u + sizeof(_g4_t_v413)) > _g4_s45 ? (180u + sizeof(_g4_t_v413)) : _g4_s45,
    _g4_s47 = (184u + sizeof(_g4_t_v414)) > _g4_s46 ? (184u + sizeof(_g4_t_v414)) : _g4_s46,
    _g4_s48 = (184u + sizeof(_g4_t_v415)) > _g4_s47 ? (184u + sizeof(_g4_t_v415)) : _g4_s47,
    _g4_s49 = (184u + sizeof(_g4_t_v416)) > _g4_s48 ? (184u + sizeof(_g4_t_v416)) : _g4_s48,
    _g4_s50 = (184u + sizeof(_g4_t_v417)) > _g4_s49 ? (184u + sizeof(_g4_t_v417)) : _g4_s49,
    _g4_s51 = (184u + sizeof(_g4_t_v418)) > _g4_s50 ? (184u + sizeof(_g4_t_v418)) : _g4_s50,
    _g4_s52 = (184u + sizeof(_g4_t_v419)) > _g4_s51 ? (184u + sizeof(_g4_t_v419)) : _g4_s51,
    _g4_s53 = (192u + sizeof(_g4_t_v420)) > _g4_s52 ? (192u + sizeof(_g4_t_v420)) : _g4_s52,
    _g4_s54 = (192u + sizeof(_g4_t_v421)) > _g4_s53 ? (192u + sizeof(_g4_t_v421)) : _g4_s53,
    _g4_s55 = (192u + sizeof(_g4_t_v422)) > _g4_s54 ? (192u + sizeof(_g4_t_v422)) : _g4_s54,
    _g4_s56 = (192u + sizeof(_g4_t_v423)) > _g4_s55 ? (192u + sizeof(_g4_t_v423)) : _g4_s55,
    _g4_s57 = (192u + sizeof(_g4_t_v424)) > _g4_s56 ? (192u + sizeof(_g4_t_v424)) : _g4_s56,
    _g4_s58 = (192u + sizeof(_g4_t_v425)) > _g4_s57 ? (192u + sizeof(_g4_t_v425)) : _g4_s57,
    _g4_s59 = (196u + sizeof(_g4_t_v426)) > _g4_s58 ? (196u + sizeof(_g4_t_v426)) : _g4_s58,
    _g4_s60 = (196u + sizeof(_g4_t_v427)) > _g4_s59 ? (196u + sizeof(_g4_t_v427)) : _g4_s59,
    _g4_s61 = (196u + sizeof(_g4_t_v428)) > _g4_s60 ? (196u + sizeof(_g4_t_v428)) : _g4_s60,
    _g4_s62 = (196u + sizeof(_g4_t_v429)) > _g4_s61 ? (196u + sizeof(_g4_t_v429)) : _g4_s61,
    _g4_s63 = (196u + sizeof(_g4_t_v430)) > _g4_s62 ? (196u + sizeof(_g4_t_v430)) : _g4_s62,
    _g4_s64 = (196u + sizeof(_g4_t_v431)) > _g4_s63 ? (196u + sizeof(_g4_t_v431)) : _g4_s63,
    _g4_s65 = (196u + sizeof(_g4_t_v432)) > _g4_s64 ? (196u + sizeof(_g4_t_v432)) : _g4_s64,
    _g4_s66 = (196u + sizeof(_g4_t_v433)) > _g4_s65 ? (196u + sizeof(_g4_t_v433)) : _g4_s65,
    _g4_s67 = (196u + sizeof(_g4_t_v434)) > _g4_s66 ? (196u + sizeof(_g4_t_v434)) : _g4_s66,
    _g4_s68 = (196u + sizeof(_g4_t_v435)) > _g4_s67 ? (196u + sizeof(_g4_t_v435)) : _g4_s67,
    _g4_s69 = (196u + sizeof(_g4_t_v436)) > _g4_s68 ? (196u + sizeof(_g4_t_v436)) : _g4_s68,
    _g4_s70 = (196u + sizeof(_g4_t_v437)) > _g4_s69 ? (196u + sizeof(_g4_t_v437)) : _g4_s69,
    _g4_s71 = (200u + sizeof(_g4_t_s1)) > _g4_s70 ? (200u + sizeof(_g4_t_s1)) : _g4_s70,
    _g4_s72 = (200u + sizeof(_g4_t_s1a)) > _g4_s71 ? (200u + sizeof(_g4_t_s1a)) : _g4_s71,
    _g4_s73 = (200u + sizeof(_g4_t_s1b)) > _g4_s72 ? (200u + sizeof(_g4_t_s1b)) : _g4_s72,
    _g4_s74 = (200u + sizeof(_g4_t_s1c)) > _g4_s73 ? (200u + sizeof(_g4_t_s1c)) : _g4_s73,
    _g4_s75 = (200u + sizeof(_g4_t_s1d)) > _g4_s74 ? (200u + sizeof(_g4_t_s1d)) : _g4_s74,
    _g4_s76 = (200u + sizeof(_g4_t_s1e)) > _g4_s75 ? (200u + sizeof(_g4_t_s1e)) : _g4_s75,
    _g4_s77 = (200u + sizeof(_g4_t_s1f)) > _g4_s76 ? (200u + sizeof(_g4_t_s1f)) : _g4_s76,
    _g4_s78 = (200u + sizeof(_g4_t_s1g)) > _g4_s77 ? (200u + sizeof(_g4_t_s1g)) : _g4_s77,
    _g4_s79 = (200u + sizeof(_g4_t_s1h)) > _g4_s78 ? (200u + sizeof(_g4_t_s1h)) : _g4_s78,
    _g4_s80 = (200u + sizeof(_g4_t_s1i)) > _g4_s79 ? (200u + sizeof(_g4_t_s1i)) : _g4_s79,
    _g4_s81 = (200u + sizeof(_g4_t_s1j)) > _g4_s80 ? (200u + sizeof(_g4_t_s1j)) : _g4_s80,
    _g4_s82 = (200u + sizeof(_g4_t_s1k)) > _g4_s81 ? (200u + sizeof(_g4_t_s1k)) : _g4_s81,
    _g4_s83 = (200u + sizeof(_g4_t_s1l)) > _g4_s82 ? (200u + sizeof(_g4_t_s1l)) : _g4_s82,
    _g4_s84 = (208u + sizeof(_g4_t_v451)) > _g4_s83 ? (208u + sizeof(_g4_t_v451)) : _g4_s83,
    _g4_s85 = (212u + sizeof(_g4_t_s)) > _g4_s84 ? (212u + sizeof(_g4_t_s)) : _g4_s84,
    _g4_s86 = (212u + sizeof(_g4_t_sa)) > _g4_s85 ? (212u + sizeof(_g4_t_sa)) : _g4_s85,
    _g4_s87 = (212u + sizeof(_g4_t_sb)) > _g4_s86 ? (212u + sizeof(_g4_t_sb)) : _g4_s86,
    _g4_s88 = (212u + sizeof(_g4_t_sc)) > _g4_s87 ? (212u + sizeof(_g4_t_sc)) : _g4_s87,
    _g4_s89 = (212u + sizeof(_g4_t_sd)) > _g4_s88 ? (212u + sizeof(_g4_t_sd)) : _g4_s88,
    _g4_s90 = (212u + sizeof(_g4_t_se)) > _g4_s89 ? (212u + sizeof(_g4_t_se)) : _g4_s89,
    _g4_s91 = (212u + sizeof(_g4_t_sf)) > _g4_s90 ? (212u + sizeof(_g4_t_sf)) : _g4_s90,
    _g4_s92 = (212u + sizeof(_g4_t_sg)) > _g4_s91 ? (212u + sizeof(_g4_t_sg)) : _g4_s91,
    _g4_s93 = (212u + sizeof(_g4_t_sh)) > _g4_s92 ? (212u + sizeof(_g4_t_sh)) : _g4_s92,
    _g4_s94 = (212u + sizeof(_g4_t_si)) > _g4_s93 ? (212u + sizeof(_g4_t_si)) : _g4_s93,
    _g4_s95 = (212u + sizeof(_g4_t_sj)) > _g4_s94 ? (212u + sizeof(_g4_t_sj)) : _g4_s94,
    _g4_s96 = (212u + sizeof(_g4_t_sk)) > _g4_s95 ? (212u + sizeof(_g4_t_sk)) : _g4_s95,
    _g4_s97 = (212u + sizeof(_g4_t_sl)) > _g4_s96 ? (212u + sizeof(_g4_t_sl)) : _g4_s96,
    _g4_s98 = (212u + sizeof(_g4_t_sm)) > _g4_s97 ? (212u + sizeof(_g4_t_sm)) : _g4_s97,
    _g4_s99 = (212u + sizeof(_g4_t_sn)) > _g4_s98 ? (212u + sizeof(_g4_t_sn)) : _g4_s98,
    _g4_s100 = (212u + sizeof(_g4_t_so)) > _g4_s99 ? (212u + sizeof(_g4_t_so)) : _g4_s99,
    _g4_s101 = (212u + sizeof(_g4_t_sp)) > _g4_s100 ? (212u + sizeof(_g4_t_sp)) : _g4_s100,
    _g4_s102 = (212u + sizeof(_g4_t_sq)) > _g4_s101 ? (212u + sizeof(_g4_t_sq)) : _g4_s101,
    _g4_s103 = (212u + sizeof(_g4_t_sr)) > _g4_s102 ? (212u + sizeof(_g4_t_sr)) : _g4_s102,
    _g4_s104 = (216u + sizeof(_g4_t_v471)) > _g4_s103 ? (216u + sizeof(_g4_t_v471)) : _g4_s103,
    _g4_s105 = (216u + sizeof(_g4_t_v472)) > _g4_s104 ? (216u + sizeof(_g4_t_v472)) : _g4_s104,
    _g4_s106 = (216u + sizeof(_g4_t_v473)) > _g4_s105 ? (216u + sizeof(_g4_t_v473)) : _g4_s105,
    _g4_s107 = (216u + sizeof(_g4_t_v474)) > _g4_s106 ? (216u + sizeof(_g4_t_v474)) : _g4_s106,
    _g4_s108 = (216u + sizeof(_g4_t_v475)) > _g4_s107 ? (216u + sizeof(_g4_t_v475)) : _g4_s107,
    _g4_s109 = (216u + sizeof(_g4_t_v476)) > _g4_s108 ? (216u + sizeof(_g4_t_v476)) : _g4_s108,
    _g4_s110 = (216u + sizeof(_g4_t_v477)) > _g4_s109 ? (216u + sizeof(_g4_t_v477)) : _g4_s109,
    _g4_s111 = (216u + sizeof(_g4_t_v478)) > _g4_s110 ? (216u + sizeof(_g4_t_v478)) : _g4_s110,
    _g4_s112 = (216u + sizeof(_g4_t_v479)) > _g4_s111 ? (216u + sizeof(_g4_t_v479)) : _g4_s111,
    _g4_s113 = (216u + sizeof(_g4_t_v480)) > _g4_s112 ? (216u + sizeof(_g4_t_v480)) : _g4_s112,
    _g4_s114 = (216u + sizeof(_g4_t_v481)) > _g4_s113 ? (216u + sizeof(_g4_t_v481)) : _g4_s113,
    _g4_s115 = (216u + sizeof(_g4_t_v482)) > _g4_s114 ? (216u + sizeof(_g4_t_v482)) : _g4_s114,
    _g4_s116 = (216u + sizeof(_g4_t_v483)) > _g4_s115 ? (216u + sizeof(_g4_t_v483)) : _g4_s115,
    _g4_s117 = (216u + sizeof(_g4_t_v484)) > _g4_s116 ? (216u + sizeof(_g4_t_v484)) : _g4_s116,
    _g4_s118 = (216u + sizeof(_g4_t_v485)) > _g4_s117 ? (216u + sizeof(_g4_t_v485)) : _g4_s117,
    _g4_s119 = (216u + sizeof(_g4_t_v486)) > _g4_s118 ? (216u + sizeof(_g4_t_v486)) : _g4_s118,
    _g4_s120 = (216u + sizeof(_g4_t_v487)) > _g4_s119 ? (216u + sizeof(_g4_t_v487)) : _g4_s119,
    _g4_s121 = (216u + sizeof(_g4_t_v488)) > _g4_s120 ? (216u + sizeof(_g4_t_v488)) : _g4_s120,
    _g4_s122 = (227u + sizeof(_g4_t_v489)) > _g4_s121 ? (227u + sizeof(_g4_t_v489)) : _g4_s121,
    _g4_s123 = (240u + sizeof(_g4_t_v490)) > _g4_s122 ? (240u + sizeof(_g4_t_v490)) : _g4_s122,
    _g4_s124 = (256u + sizeof(_g4_t_v491)) > _g4_s123 ? (256u + sizeof(_g4_t_v491)) : _g4_s123,
    _g4_s125 = (272u + sizeof(_g4_t_v492)) > _g4_s124 ? (272u + sizeof(_g4_t_v492)) : _g4_s124,
    _g4_s126 = (276u + sizeof(_g4_t_v493)) > _g4_s125 ? (276u + sizeof(_g4_t_v493)) : _g4_s125,
    _g4_s127 = (280u + sizeof(_g4_t_v494)) > _g4_s126 ? (280u + sizeof(_g4_t_v494)) : _g4_s126,
    _g4_s128 = (284u + sizeof(_g4_t_v495)) > _g4_s127 ? (284u + sizeof(_g4_t_v495)) : _g4_s127,
    _g4_s129 = (288u + sizeof(_g4_t_v496)) > _g4_s128 ? (288u + sizeof(_g4_t_v496)) : _g4_s128,
    _g4_s130 = (292u + sizeof(_g4_t_v497)) > _g4_s129 ? (292u + sizeof(_g4_t_v497)) : _g4_s129,
    _g4_s131 = (296u + sizeof(_g4_t_v498)) > _g4_s130 ? (296u + sizeof(_g4_t_v498)) : _g4_s130,
    _g4_s132 = (300u + sizeof(_g4_t_v499)) > _g4_s131 ? (300u + sizeof(_g4_t_v499)) : _g4_s131,
    _g4_s133 = (304u + sizeof(_g4_t_v500)) > _g4_s132 ? (304u + sizeof(_g4_t_v500)) : _g4_s132,
    _g4_s134 = (308u + sizeof(_g4_t_v501)) > _g4_s133 ? (308u + sizeof(_g4_t_v501)) : _g4_s133,
    _g4_s135 = (312u + sizeof(_g4_t_v502)) > _g4_s134 ? (312u + sizeof(_g4_t_v502)) : _g4_s134,
    _g4_s136 = (316u + sizeof(_g4_t_v503)) > _g4_s135 ? (316u + sizeof(_g4_t_v503)) : _g4_s135,
    _g4_s137 = (320u + sizeof(_g4_t_v504)) > _g4_s136 ? (320u + sizeof(_g4_t_v504)) : _g4_s136,
    _g4_s138 = (324u + sizeof(_g4_t_v505)) > _g4_s137 ? (324u + sizeof(_g4_t_v505)) : _g4_s137,
    _g4_s139 = (328u + sizeof(_g4_t_v506)) > _g4_s138 ? (328u + sizeof(_g4_t_v506)) : _g4_s138,
    _g4_s140 = (332u + sizeof(_g4_t_v507)) > _g4_s139 ? (332u + sizeof(_g4_t_v507)) : _g4_s139,
    _g4_s141 = (336u + sizeof(_g4_t_v508)) > _g4_s140 ? (336u + sizeof(_g4_t_v508)) : _g4_s140,
    _g4_s142 = (340u + sizeof(_g4_t_v509)) > _g4_s141 ? (340u + sizeof(_g4_t_v509)) : _g4_s141,
    _g4_s143 = (344u + sizeof(_g4_t_v510)) > _g4_s142 ? (344u + sizeof(_g4_t_v510)) : _g4_s142,
    _g4_s144 = (348u + sizeof(_g4_t_v511)) > _g4_s143 ? (348u + sizeof(_g4_t_v511)) : _g4_s143,
    _g4_s145 = (352u + sizeof(_g4_t_v512)) > _g4_s144 ? (352u + sizeof(_g4_t_v512)) : _g4_s144,
    _g4_s146 = (356u + sizeof(_g4_t_v513)) > _g4_s145 ? (356u + sizeof(_g4_t_v513)) : _g4_s145,
    _g4_s147 = (360u + sizeof(_g4_t_v514)) > _g4_s146 ? (360u + sizeof(_g4_t_v514)) : _g4_s146,
    _g4_s148 = (364u + sizeof(_g4_t_v515)) > _g4_s147 ? (364u + sizeof(_g4_t_v515)) : _g4_s147,
    _g4_s149 = (368u + sizeof(_g4_t_v516)) > _g4_s148 ? (368u + sizeof(_g4_t_v516)) : _g4_s148,
    _g4_s150 = (372u + sizeof(_g4_t_v517)) > _g4_s149 ? (372u + sizeof(_g4_t_v517)) : _g4_s149,
    _g4_s151 = (376u + sizeof(_g4_t_v518)) > _g4_s150 ? (376u + sizeof(_g4_t_v518)) : _g4_s150,
    _g4_s152 = (380u + sizeof(_g4_t_v519)) > _g4_s151 ? (380u + sizeof(_g4_t_v519)) : _g4_s151,
    _g4_s153 = (384u + sizeof(_g4_t_v520)) > _g4_s152 ? (384u + sizeof(_g4_t_v520)) : _g4_s152,
    _g4_s154 = (388u + sizeof(_g4_t_v521)) > _g4_s153 ? (388u + sizeof(_g4_t_v521)) : _g4_s153,
    _g4_s155 = (392u + sizeof(_g4_t_v522)) > _g4_s154 ? (392u + sizeof(_g4_t_v522)) : _g4_s154,
    _g4_s156 = (396u + sizeof(_g4_t_v523)) > _g4_s155 ? (396u + sizeof(_g4_t_v523)) : _g4_s155,
    _g4_s157 = (400u + sizeof(_g4_t_v524)) > _g4_s156 ? (400u + sizeof(_g4_t_v524)) : _g4_s156,
    _g4_s158 = (404u + sizeof(_g4_t_v525)) > _g4_s157 ? (404u + sizeof(_g4_t_v525)) : _g4_s157,
    _g4_s159 = (408u + sizeof(_g4_t_v526)) > _g4_s158 ? (408u + sizeof(_g4_t_v526)) : _g4_s158,
    _g4_s160 = (416u + sizeof(_g4_t_v527)) > _g4_s159 ? (416u + sizeof(_g4_t_v527)) : _g4_s159,
    _g4_s161 = (420u + sizeof(_g4_t_v528)) > _g4_s160 ? (420u + sizeof(_g4_t_v528)) : _g4_s160,
    _g4_s162 = (424u + sizeof(_g4_t_v529)) > _g4_s161 ? (424u + sizeof(_g4_t_v529)) : _g4_s161,
    _g4_s163 = (432u + sizeof(_g4_t_v530)) > _g4_s162 ? (432u + sizeof(_g4_t_v530)) : _g4_s162,
    _g4_s164 = (436u + sizeof(_g4_t_v531)) > _g4_s163 ? (436u + sizeof(_g4_t_v531)) : _g4_s163,
    _g4_s165 = (440u + sizeof(_g4_t_v532)) > _g4_s164 ? (440u + sizeof(_g4_t_v532)) : _g4_s164,
    _g4_s166 = (448u + sizeof(_g4_t_v533)) > _g4_s165 ? (448u + sizeof(_g4_t_v533)) : _g4_s165,
    _g4_s167 = (452u + sizeof(_g4_t_v534)) > _g4_s166 ? (452u + sizeof(_g4_t_v534)) : _g4_s166,
    _g4_s168 = (456u + sizeof(_g4_t_v535)) > _g4_s167 ? (456u + sizeof(_g4_t_v535)) : _g4_s167,
    _g4_s169 = (464u + sizeof(_g4_t_v536)) > _g4_s168 ? (464u + sizeof(_g4_t_v536)) : _g4_s168,
    _g4_s170 = (468u + sizeof(_g4_t_v537)) > _g4_s169 ? (468u + sizeof(_g4_t_v537)) : _g4_s169,
    _g4_s171 = (472u + sizeof(_g4_t_v538)) > _g4_s170 ? (472u + sizeof(_g4_t_v538)) : _g4_s170,
    _g4_s172 = (480u + sizeof(_g4_t_v539)) > _g4_s171 ? (480u + sizeof(_g4_t_v539)) : _g4_s171,
    _g4_s173 = (484u + sizeof(_g4_t_v540)) > _g4_s172 ? (484u + sizeof(_g4_t_v540)) : _g4_s172,
    _g4_s174 = (488u + sizeof(_g4_t_v541)) > _g4_s173 ? (488u + sizeof(_g4_t_v541)) : _g4_s173,
    _g4_s175 = (496u + sizeof(_g4_t_v542)) > _g4_s174 ? (496u + sizeof(_g4_t_v542)) : _g4_s174,
    _g4_s176 = (500u + sizeof(_g4_t_v543)) > _g4_s175 ? (500u + sizeof(_g4_t_v543)) : _g4_s175,
    _g4_s177 = (504u + sizeof(_g4_t_v544)) > _g4_s176 ? (504u + sizeof(_g4_t_v544)) : _g4_s176,
    _g4_s178 = (512u + sizeof(_g4_t_v545)) > _g4_s177 ? (512u + sizeof(_g4_t_v545)) : _g4_s177,
    _g4_s179 = (516u + sizeof(_g4_t_v546)) > _g4_s178 ? (516u + sizeof(_g4_t_v546)) : _g4_s178,
    _g4_s180 = (520u + sizeof(_g4_t_v547)) > _g4_s179 ? (520u + sizeof(_g4_t_v547)) : _g4_s179,
    _g4_s181 = (524u + sizeof(_g4_t_v548)) > _g4_s180 ? (524u + sizeof(_g4_t_v548)) : _g4_s180,
    _g4_s182 = (528u + sizeof(_g4_t_v549)) > _g4_s181 ? (528u + sizeof(_g4_t_v549)) : _g4_s181,
    _g4_s183 = (532u + sizeof(_g4_t_v550)) > _g4_s182 ? (532u + sizeof(_g4_t_v550)) : _g4_s182,
    _g4_s184 = (536u + sizeof(_g4_t_v551)) > _g4_s183 ? (536u + sizeof(_g4_t_v551)) : _g4_s183,
    _g4_s185 = (544u + sizeof(_g4_t_v552)) > _g4_s184 ? (544u + sizeof(_g4_t_v552)) : _g4_s184,
    _g4_s186 = (548u + sizeof(_g4_t_v553)) > _g4_s185 ? (548u + sizeof(_g4_t_v553)) : _g4_s185,
    _g4_s187 = (556u + sizeof(_g4_t_v554)) > _g4_s186 ? (556u + sizeof(_g4_t_v554)) : _g4_s186,
    _g4_s188 = (560u + sizeof(_g4_t_v555)) > _g4_s187 ? (560u + sizeof(_g4_t_v555)) : _g4_s187,
    _g4_s189 = (564u + sizeof(_g4_t_v556)) > _g4_s188 ? (564u + sizeof(_g4_t_v556)) : _g4_s188,
    _g4_s190 = (568u + sizeof(_g4_t_v557)) > _g4_s189 ? (568u + sizeof(_g4_t_v557)) : _g4_s189,
    _g4_s191 = (570u + sizeof(_g4_t_v558)) > _g4_s190 ? (570u + sizeof(_g4_t_v558)) : _g4_s190,
    _g4_s192 = (572u + sizeof(_g4_t_v559)) > _g4_s191 ? (572u + sizeof(_g4_t_v559)) : _g4_s191,
    _g4_s193 = (574u + sizeof(_g4_t_v560)) > _g4_s192 ? (574u + sizeof(_g4_t_v560)) : _g4_s192,
    _g4_s194 = (576u + sizeof(_g4_t_v561)) > _g4_s193 ? (576u + sizeof(_g4_t_v561)) : _g4_s193,
    _g4_s195 = (580u + sizeof(_g4_t_v562)) > _g4_s194 ? (580u + sizeof(_g4_t_v562)) : _g4_s194,
    _g4_s196 = (584u + sizeof(_g4_t_v563)) > _g4_s195 ? (584u + sizeof(_g4_t_v563)) : _g4_s195,
    _g4_s197 = (592u + sizeof(_g4_t_v564)) > _g4_s196 ? (592u + sizeof(_g4_t_v564)) : _g4_s196,
    _g4_s198 = (596u + sizeof(_g4_t_v565)) > _g4_s197 ? (596u + sizeof(_g4_t_v565)) : _g4_s197,
    _g4_s199 = (600u + sizeof(_g4_t_v566)) > _g4_s198 ? (600u + sizeof(_g4_t_v566)) : _g4_s198,
    _g4_s200 = (672u + sizeof(_g4_t_v567)) > _g4_s199 ? (672u + sizeof(_g4_t_v567)) : _g4_s199,
    _g4_s201 = (676u + sizeof(_g4_t_v568)) > _g4_s200 ? (676u + sizeof(_g4_t_v568)) : _g4_s200,
    _g4_s202 = (692u + sizeof(_g4_t_v569)) > _g4_s201 ? (692u + sizeof(_g4_t_v569)) : _g4_s201,
    _g4_s203 = (696u + sizeof(_g4_t_v570)) > _g4_s202 ? (696u + sizeof(_g4_t_v570)) : _g4_s202,
    _g4_s204 = (700u + sizeof(_g4_t_v571)) > _g4_s203 ? (700u + sizeof(_g4_t_v571)) : _g4_s203,
    _g4_s205 = (704u + sizeof(_g4_t_v572)) > _g4_s204 ? (704u + sizeof(_g4_t_v572)) : _g4_s204,
    _g4_s206 = (708u + sizeof(_g4_t_v573)) > _g4_s205 ? (708u + sizeof(_g4_t_v573)) : _g4_s205,
    _g4_s207 = (712u + sizeof(_g4_t_v574)) > _g4_s206 ? (712u + sizeof(_g4_t_v574)) : _g4_s206,
    _g4_s208 = (716u + sizeof(_g4_t_v575)) > _g4_s207 ? (716u + sizeof(_g4_t_v575)) : _g4_s207,
    _g4_s209 = (720u + sizeof(_g4_t_v576)) > _g4_s208 ? (720u + sizeof(_g4_t_v576)) : _g4_s208,
    _g4_s210 = (724u + sizeof(_g4_t_v577)) > _g4_s209 ? (724u + sizeof(_g4_t_v577)) : _g4_s209,
    _g4_s211 = (728u + sizeof(_g4_t_v578)) > _g4_s210 ? (728u + sizeof(_g4_t_v578)) : _g4_s210,
    _g4_s212 = (732u + sizeof(_g4_t_v579)) > _g4_s211 ? (732u + sizeof(_g4_t_v579)) : _g4_s211,
    _g4_s213 = (736u + sizeof(_g4_t_v580)) > _g4_s212 ? (736u + sizeof(_g4_t_v580)) : _g4_s212,
    _g4_s214 = (740u + sizeof(_g4_t_v581)) > _g4_s213 ? (740u + sizeof(_g4_t_v581)) : _g4_s213,
    _g4_s215 = (744u + sizeof(_g4_t_v582)) > _g4_s214 ? (744u + sizeof(_g4_t_v582)) : _g4_s214,
    _g4_s216 = (748u + sizeof(_g4_t_v583)) > _g4_s215 ? (748u + sizeof(_g4_t_v583)) : _g4_s215,
    _g4_s217 = (752u + sizeof(_g4_t_v584)) > _g4_s216 ? (752u + sizeof(_g4_t_v584)) : _g4_s216
  };
  alignas(16) uint8_t _g4_sf[_g4_s217];
  _g4_t_v368 &v368 = *reinterpret_cast<_g4_t_v368 *>(_g4_sf + 0u);
  _g4_t_v369 &v369 = *reinterpret_cast<_g4_t_v369 *>(_g4_sf + 0u);
  _g4_t_v370 &v370 = *reinterpret_cast<_g4_t_v370 *>(_g4_sf + 4u);
  _g4_t_v371 &v371 = *reinterpret_cast<_g4_t_v371 *>(_g4_sf + 4u);
  _g4_t_v372 &v372 = *reinterpret_cast<_g4_t_v372 *>(_g4_sf + 4u);
  _g4_t_v373 &v373 = *reinterpret_cast<_g4_t_v373 *>(_g4_sf + 48u);
  _g4_t_v374 &v374 = *reinterpret_cast<_g4_t_v374 *>(_g4_sf + 48u);
  _g4_t_v375 &v375 = *reinterpret_cast<_g4_t_v375 *>(_g4_sf + 48u);
  _g4_t_v376 &v376 = *reinterpret_cast<_g4_t_v376 *>(_g4_sf + 48u);
  _g4_t_v377 &v377 = *reinterpret_cast<_g4_t_v377 *>(_g4_sf + 48u);
  _g4_t_v378 &v378 = *reinterpret_cast<_g4_t_v378 *>(_g4_sf + 48u);
  _g4_t_v379 &v379 = *reinterpret_cast<_g4_t_v379 *>(_g4_sf + 48u);
  _g4_t_v380 &v380 = *reinterpret_cast<_g4_t_v380 *>(_g4_sf + 48u);
  _g4_t_v381 &v381 = *reinterpret_cast<_g4_t_v381 *>(_g4_sf + 48u);
  _g4_t_v382 &v382 = *reinterpret_cast<_g4_t_v382 *>(_g4_sf + 48u);
  _g4_t_v383 &v383 = *reinterpret_cast<_g4_t_v383 *>(_g4_sf + 48u);
  _g4_t_v384 &v384 = *reinterpret_cast<_g4_t_v384 *>(_g4_sf + 48u);
  _g4_t_v385 &v385 = *reinterpret_cast<_g4_t_v385 *>(_g4_sf + 48u);
  _g4_t_v386 &v386 = *reinterpret_cast<_g4_t_v386 *>(_g4_sf + 48u);
  _g4_t_v387 &v387 = *reinterpret_cast<_g4_t_v387 *>(_g4_sf + 48u);
  _g4_t_v388 &v388 = *reinterpret_cast<_g4_t_v388 *>(_g4_sf + 48u);
  _g4_t_v389 &v389 = *reinterpret_cast<_g4_t_v389 *>(_g4_sf + 48u);
  _g4_t_v390 &v390 = *reinterpret_cast<_g4_t_v390 *>(_g4_sf + 48u);
  _g4_t_v391 &v391 = *reinterpret_cast<_g4_t_v391 *>(_g4_sf + 48u);
  _g4_t_v392 &v392 = *reinterpret_cast<_g4_t_v392 *>(_g4_sf + 52u);
  _g4_t_v393 &v393 = *reinterpret_cast<_g4_t_v393 *>(_g4_sf + 56u);
  _g4_t_v394 &v394 = *reinterpret_cast<_g4_t_v394 *>(_g4_sf + 132u);
  _g4_t_v395 &v395 = *reinterpret_cast<_g4_t_v395 *>(_g4_sf + 136u);
  _g4_t_v396 &v396 = *reinterpret_cast<_g4_t_v396 *>(_g4_sf + 140u);
  _g4_t_v397 &v397 = *reinterpret_cast<_g4_t_v397 *>(_g4_sf + 152u);
  _g4_t_v398 &v398 = *reinterpret_cast<_g4_t_v398 *>(_g4_sf + 160u);
  _g4_t_v399 &v399 = *reinterpret_cast<_g4_t_v399 *>(_g4_sf + 168u);
  _g4_t_v400 &v400 = *reinterpret_cast<_g4_t_v400 *>(_g4_sf + 172u);
  _g4_t_v401 &v401 = *reinterpret_cast<_g4_t_v401 *>(_g4_sf + 172u);
  _g4_t_v402 &v402 = *reinterpret_cast<_g4_t_v402 *>(_g4_sf + 176u);
  _g4_t_v403 &v403 = *reinterpret_cast<_g4_t_v403 *>(_g4_sf + 176u);
  _g4_t_v404 &v404 = *reinterpret_cast<_g4_t_v404 *>(_g4_sf + 176u);
  _g4_t_v405 &v405 = *reinterpret_cast<_g4_t_v405 *>(_g4_sf + 176u);
  _g4_t_v406 &v406 = *reinterpret_cast<_g4_t_v406 *>(_g4_sf + 180u);
  _g4_t_v407 &v407 = *reinterpret_cast<_g4_t_v407 *>(_g4_sf + 180u);
  _g4_t_v408 &v408 = *reinterpret_cast<_g4_t_v408 *>(_g4_sf + 180u);
  _g4_t_v409 &v409 = *reinterpret_cast<_g4_t_v409 *>(_g4_sf + 180u);
  _g4_t_v410 &v410 = *reinterpret_cast<_g4_t_v410 *>(_g4_sf + 180u);
  _g4_t_v411 &v411 = *reinterpret_cast<_g4_t_v411 *>(_g4_sf + 180u);
  _g4_t_v412 &v412 = *reinterpret_cast<_g4_t_v412 *>(_g4_sf + 180u);
  _g4_t_v413 &v413 = *reinterpret_cast<_g4_t_v413 *>(_g4_sf + 180u);
  _g4_t_v414 &v414 = *reinterpret_cast<_g4_t_v414 *>(_g4_sf + 184u);
  _g4_t_v415 &v415 = *reinterpret_cast<_g4_t_v415 *>(_g4_sf + 184u);
  _g4_t_v416 &v416 = *reinterpret_cast<_g4_t_v416 *>(_g4_sf + 184u);
  _g4_t_v417 &v417 = *reinterpret_cast<_g4_t_v417 *>(_g4_sf + 184u);
  _g4_t_v418 &v418 = *reinterpret_cast<_g4_t_v418 *>(_g4_sf + 184u);
  _g4_t_v419 &v419 = *reinterpret_cast<_g4_t_v419 *>(_g4_sf + 184u);
  _g4_t_v420 &v420 = *reinterpret_cast<_g4_t_v420 *>(_g4_sf + 192u);
  _g4_t_v421 &v421 = *reinterpret_cast<_g4_t_v421 *>(_g4_sf + 192u);
  _g4_t_v422 &v422 = *reinterpret_cast<_g4_t_v422 *>(_g4_sf + 192u);
  _g4_t_v423 &v423 = *reinterpret_cast<_g4_t_v423 *>(_g4_sf + 192u);
  _g4_t_v424 &v424 = *reinterpret_cast<_g4_t_v424 *>(_g4_sf + 192u);
  _g4_t_v425 &v425 = *reinterpret_cast<_g4_t_v425 *>(_g4_sf + 192u);
  _g4_t_v426 &v426 = *reinterpret_cast<_g4_t_v426 *>(_g4_sf + 196u);
  _g4_t_v427 &v427 = *reinterpret_cast<_g4_t_v427 *>(_g4_sf + 196u);
  _g4_t_v428 &v428 = *reinterpret_cast<_g4_t_v428 *>(_g4_sf + 196u);
  _g4_t_v429 &v429 = *reinterpret_cast<_g4_t_v429 *>(_g4_sf + 196u);
  _g4_t_v430 &v430 = *reinterpret_cast<_g4_t_v430 *>(_g4_sf + 196u);
  _g4_t_v431 &v431 = *reinterpret_cast<_g4_t_v431 *>(_g4_sf + 196u);
  _g4_t_v432 &v432 = *reinterpret_cast<_g4_t_v432 *>(_g4_sf + 196u);
  _g4_t_v433 &v433 = *reinterpret_cast<_g4_t_v433 *>(_g4_sf + 196u);
  _g4_t_v434 &v434 = *reinterpret_cast<_g4_t_v434 *>(_g4_sf + 196u);
  _g4_t_v435 &v435 = *reinterpret_cast<_g4_t_v435 *>(_g4_sf + 196u);
  _g4_t_v436 &v436 = *reinterpret_cast<_g4_t_v436 *>(_g4_sf + 196u);
  _g4_t_v437 &v437 = *reinterpret_cast<_g4_t_v437 *>(_g4_sf + 196u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 200u);
  _g4_t_s1a &s1a = *reinterpret_cast<_g4_t_s1a *>(_g4_sf + 200u);
  _g4_t_s1b &s1b = *reinterpret_cast<_g4_t_s1b *>(_g4_sf + 200u);
  _g4_t_s1c &s1c = *reinterpret_cast<_g4_t_s1c *>(_g4_sf + 200u);
  _g4_t_s1d &s1d = *reinterpret_cast<_g4_t_s1d *>(_g4_sf + 200u);
  _g4_t_s1e &s1e = *reinterpret_cast<_g4_t_s1e *>(_g4_sf + 200u);
  _g4_t_s1f &s1f = *reinterpret_cast<_g4_t_s1f *>(_g4_sf + 200u);
  _g4_t_s1g &s1g = *reinterpret_cast<_g4_t_s1g *>(_g4_sf + 200u);
  _g4_t_s1h &s1h = *reinterpret_cast<_g4_t_s1h *>(_g4_sf + 200u);
  _g4_t_s1i &s1i = *reinterpret_cast<_g4_t_s1i *>(_g4_sf + 200u);
  _g4_t_s1j &s1j = *reinterpret_cast<_g4_t_s1j *>(_g4_sf + 200u);
  _g4_t_s1k &s1k = *reinterpret_cast<_g4_t_s1k *>(_g4_sf + 200u);
  _g4_t_s1l &s1l = *reinterpret_cast<_g4_t_s1l *>(_g4_sf + 200u);
  _g4_t_v451 &v451 = *reinterpret_cast<_g4_t_v451 *>(_g4_sf + 208u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 212u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 212u);
  _g4_t_sb &sb = *reinterpret_cast<_g4_t_sb *>(_g4_sf + 212u);
  _g4_t_sc &sc = *reinterpret_cast<_g4_t_sc *>(_g4_sf + 212u);
  _g4_t_sd &sd = *reinterpret_cast<_g4_t_sd *>(_g4_sf + 212u);
  _g4_t_se &se = *reinterpret_cast<_g4_t_se *>(_g4_sf + 212u);
  _g4_t_sf &sf = *reinterpret_cast<_g4_t_sf *>(_g4_sf + 212u);
  _g4_t_sg &sg = *reinterpret_cast<_g4_t_sg *>(_g4_sf + 212u);
  _g4_t_sh &sh = *reinterpret_cast<_g4_t_sh *>(_g4_sf + 212u);
  _g4_t_si &si = *reinterpret_cast<_g4_t_si *>(_g4_sf + 212u);
  _g4_t_sj &sj = *reinterpret_cast<_g4_t_sj *>(_g4_sf + 212u);
  _g4_t_sk &sk = *reinterpret_cast<_g4_t_sk *>(_g4_sf + 212u);
  _g4_t_sl &sl = *reinterpret_cast<_g4_t_sl *>(_g4_sf + 212u);
  _g4_t_sm &sm = *reinterpret_cast<_g4_t_sm *>(_g4_sf + 212u);
  _g4_t_sn &sn = *reinterpret_cast<_g4_t_sn *>(_g4_sf + 212u);
  _g4_t_so &so = *reinterpret_cast<_g4_t_so *>(_g4_sf + 212u);
  _g4_t_sp &sp = *reinterpret_cast<_g4_t_sp *>(_g4_sf + 212u);
  _g4_t_sq &sq = *reinterpret_cast<_g4_t_sq *>(_g4_sf + 212u);
  _g4_t_sr &sr = *reinterpret_cast<_g4_t_sr *>(_g4_sf + 212u);
  _g4_t_v471 &v471 = *reinterpret_cast<_g4_t_v471 *>(_g4_sf + 216u);
  _g4_t_v472 &v472 = *reinterpret_cast<_g4_t_v472 *>(_g4_sf + 216u);
  _g4_t_v473 &v473 = *reinterpret_cast<_g4_t_v473 *>(_g4_sf + 216u);
  _g4_t_v474 &v474 = *reinterpret_cast<_g4_t_v474 *>(_g4_sf + 216u);
  _g4_t_v475 &v475 = *reinterpret_cast<_g4_t_v475 *>(_g4_sf + 216u);
  _g4_t_v476 &v476 = *reinterpret_cast<_g4_t_v476 *>(_g4_sf + 216u);
  _g4_t_v477 &v477 = *reinterpret_cast<_g4_t_v477 *>(_g4_sf + 216u);
  _g4_t_v478 &v478 = *reinterpret_cast<_g4_t_v478 *>(_g4_sf + 216u);
  _g4_t_v479 &v479 = *reinterpret_cast<_g4_t_v479 *>(_g4_sf + 216u);
  _g4_t_v480 &v480 = *reinterpret_cast<_g4_t_v480 *>(_g4_sf + 216u);
  _g4_t_v481 &v481 = *reinterpret_cast<_g4_t_v481 *>(_g4_sf + 216u);
  _g4_t_v482 &v482 = *reinterpret_cast<_g4_t_v482 *>(_g4_sf + 216u);
  _g4_t_v483 &v483 = *reinterpret_cast<_g4_t_v483 *>(_g4_sf + 216u);
  _g4_t_v484 &v484 = *reinterpret_cast<_g4_t_v484 *>(_g4_sf + 216u);
  _g4_t_v485 &v485 = *reinterpret_cast<_g4_t_v485 *>(_g4_sf + 216u);
  _g4_t_v486 &v486 = *reinterpret_cast<_g4_t_v486 *>(_g4_sf + 216u);
  _g4_t_v487 &v487 = *reinterpret_cast<_g4_t_v487 *>(_g4_sf + 216u);
  _g4_t_v488 &v488 = *reinterpret_cast<_g4_t_v488 *>(_g4_sf + 216u);
  _g4_t_v489 &v489 = *reinterpret_cast<_g4_t_v489 *>(_g4_sf + 227u);
  _g4_t_v490 &v490 = *reinterpret_cast<_g4_t_v490 *>(_g4_sf + 240u);
  _g4_t_v491 &v491 = *reinterpret_cast<_g4_t_v491 *>(_g4_sf + 256u);
  _g4_t_v492 &v492 = *reinterpret_cast<_g4_t_v492 *>(_g4_sf + 272u);
  _g4_t_v493 &v493 = *reinterpret_cast<_g4_t_v493 *>(_g4_sf + 276u);
  _g4_t_v494 &v494 = *reinterpret_cast<_g4_t_v494 *>(_g4_sf + 280u);
  _g4_t_v495 &v495 = *reinterpret_cast<_g4_t_v495 *>(_g4_sf + 284u);
  _g4_t_v496 &v496 = *reinterpret_cast<_g4_t_v496 *>(_g4_sf + 288u);
  _g4_t_v497 &v497 = *reinterpret_cast<_g4_t_v497 *>(_g4_sf + 292u);
  _g4_t_v498 &v498 = *reinterpret_cast<_g4_t_v498 *>(_g4_sf + 296u);
  _g4_t_v499 &v499 = *reinterpret_cast<_g4_t_v499 *>(_g4_sf + 300u);
  _g4_t_v500 &v500 = *reinterpret_cast<_g4_t_v500 *>(_g4_sf + 304u);
  _g4_t_v501 &v501 = *reinterpret_cast<_g4_t_v501 *>(_g4_sf + 308u);
  _g4_t_v502 &v502 = *reinterpret_cast<_g4_t_v502 *>(_g4_sf + 312u);
  _g4_t_v503 &v503 = *reinterpret_cast<_g4_t_v503 *>(_g4_sf + 316u);
  _g4_t_v504 &v504 = *reinterpret_cast<_g4_t_v504 *>(_g4_sf + 320u);
  _g4_t_v505 &v505 = *reinterpret_cast<_g4_t_v505 *>(_g4_sf + 324u);
  _g4_t_v506 &v506 = *reinterpret_cast<_g4_t_v506 *>(_g4_sf + 328u);
  _g4_t_v507 &v507 = *reinterpret_cast<_g4_t_v507 *>(_g4_sf + 332u);
  _g4_t_v508 &v508 = *reinterpret_cast<_g4_t_v508 *>(_g4_sf + 336u);
  _g4_t_v509 &v509 = *reinterpret_cast<_g4_t_v509 *>(_g4_sf + 340u);
  _g4_t_v510 &v510 = *reinterpret_cast<_g4_t_v510 *>(_g4_sf + 344u);
  _g4_t_v511 &v511 = *reinterpret_cast<_g4_t_v511 *>(_g4_sf + 348u);
  _g4_t_v512 &v512 = *reinterpret_cast<_g4_t_v512 *>(_g4_sf + 352u);
  _g4_t_v513 &v513 = *reinterpret_cast<_g4_t_v513 *>(_g4_sf + 356u);
  _g4_t_v514 &v514 = *reinterpret_cast<_g4_t_v514 *>(_g4_sf + 360u);
  _g4_t_v515 &v515 = *reinterpret_cast<_g4_t_v515 *>(_g4_sf + 364u);
  _g4_t_v516 &v516 = *reinterpret_cast<_g4_t_v516 *>(_g4_sf + 368u);
  _g4_t_v517 &v517 = *reinterpret_cast<_g4_t_v517 *>(_g4_sf + 372u);
  _g4_t_v518 &v518 = *reinterpret_cast<_g4_t_v518 *>(_g4_sf + 376u);
  _g4_t_v519 &v519 = *reinterpret_cast<_g4_t_v519 *>(_g4_sf + 380u);
  _g4_t_v520 &v520 = *reinterpret_cast<_g4_t_v520 *>(_g4_sf + 384u);
  _g4_t_v521 &v521 = *reinterpret_cast<_g4_t_v521 *>(_g4_sf + 388u);
  _g4_t_v522 &v522 = *reinterpret_cast<_g4_t_v522 *>(_g4_sf + 392u);
  _g4_t_v523 &v523 = *reinterpret_cast<_g4_t_v523 *>(_g4_sf + 396u);
  _g4_t_v524 &v524 = *reinterpret_cast<_g4_t_v524 *>(_g4_sf + 400u);
  _g4_t_v525 &v525 = *reinterpret_cast<_g4_t_v525 *>(_g4_sf + 404u);
  _g4_t_v526 &v526 = *reinterpret_cast<_g4_t_v526 *>(_g4_sf + 408u);
  _g4_t_v527 &v527 = *reinterpret_cast<_g4_t_v527 *>(_g4_sf + 416u);
  _g4_t_v528 &v528 = *reinterpret_cast<_g4_t_v528 *>(_g4_sf + 420u);
  _g4_t_v529 &v529 = *reinterpret_cast<_g4_t_v529 *>(_g4_sf + 424u);
  _g4_t_v530 &v530 = *reinterpret_cast<_g4_t_v530 *>(_g4_sf + 432u);
  _g4_t_v531 &v531 = *reinterpret_cast<_g4_t_v531 *>(_g4_sf + 436u);
  _g4_t_v532 &v532 = *reinterpret_cast<_g4_t_v532 *>(_g4_sf + 440u);
  _g4_t_v533 &v533 = *reinterpret_cast<_g4_t_v533 *>(_g4_sf + 448u);
  _g4_t_v534 &v534 = *reinterpret_cast<_g4_t_v534 *>(_g4_sf + 452u);
  _g4_t_v535 &v535 = *reinterpret_cast<_g4_t_v535 *>(_g4_sf + 456u);
  _g4_t_v536 &v536 = *reinterpret_cast<_g4_t_v536 *>(_g4_sf + 464u);
  _g4_t_v537 &v537 = *reinterpret_cast<_g4_t_v537 *>(_g4_sf + 468u);
  _g4_t_v538 &v538 = *reinterpret_cast<_g4_t_v538 *>(_g4_sf + 472u);
  _g4_t_v539 &v539 = *reinterpret_cast<_g4_t_v539 *>(_g4_sf + 480u);
  _g4_t_v540 &v540 = *reinterpret_cast<_g4_t_v540 *>(_g4_sf + 484u);
  _g4_t_v541 &v541 = *reinterpret_cast<_g4_t_v541 *>(_g4_sf + 488u);
  _g4_t_v542 &v542 = *reinterpret_cast<_g4_t_v542 *>(_g4_sf + 496u);
  _g4_t_v543 &v543 = *reinterpret_cast<_g4_t_v543 *>(_g4_sf + 500u);
  _g4_t_v544 &v544 = *reinterpret_cast<_g4_t_v544 *>(_g4_sf + 504u);
  _g4_t_v545 &v545 = *reinterpret_cast<_g4_t_v545 *>(_g4_sf + 512u);
  _g4_t_v546 &v546 = *reinterpret_cast<_g4_t_v546 *>(_g4_sf + 516u);
  _g4_t_v547 &v547 = *reinterpret_cast<_g4_t_v547 *>(_g4_sf + 520u);
  _g4_t_v548 &v548 = *reinterpret_cast<_g4_t_v548 *>(_g4_sf + 524u);
  _g4_t_v549 &v549 = *reinterpret_cast<_g4_t_v549 *>(_g4_sf + 528u);
  _g4_t_v550 &v550 = *reinterpret_cast<_g4_t_v550 *>(_g4_sf + 532u);
  _g4_t_v551 &v551 = *reinterpret_cast<_g4_t_v551 *>(_g4_sf + 536u);
  _g4_t_v552 &v552 = *reinterpret_cast<_g4_t_v552 *>(_g4_sf + 544u);
  _g4_t_v553 &v553 = *reinterpret_cast<_g4_t_v553 *>(_g4_sf + 548u);
  _g4_t_v554 &v554 = *reinterpret_cast<_g4_t_v554 *>(_g4_sf + 556u);
  _g4_t_v555 &v555 = *reinterpret_cast<_g4_t_v555 *>(_g4_sf + 560u);
  _g4_t_v556 &v556 = *reinterpret_cast<_g4_t_v556 *>(_g4_sf + 564u);
  _g4_t_v557 &v557 = *reinterpret_cast<_g4_t_v557 *>(_g4_sf + 568u);
  _g4_t_v558 &v558 = *reinterpret_cast<_g4_t_v558 *>(_g4_sf + 570u);
  _g4_t_v559 &v559 = *reinterpret_cast<_g4_t_v559 *>(_g4_sf + 572u);
  _g4_t_v560 &v560 = *reinterpret_cast<_g4_t_v560 *>(_g4_sf + 574u);
  _g4_t_v561 &v561 = *reinterpret_cast<_g4_t_v561 *>(_g4_sf + 576u);
  _g4_t_v562 &v562 = *reinterpret_cast<_g4_t_v562 *>(_g4_sf + 580u);
  _g4_t_v563 &v563 = *reinterpret_cast<_g4_t_v563 *>(_g4_sf + 584u);
  _g4_t_v564 &v564 = *reinterpret_cast<_g4_t_v564 *>(_g4_sf + 592u);
  _g4_t_v565 &v565 = *reinterpret_cast<_g4_t_v565 *>(_g4_sf + 596u);
  _g4_t_v566 &v566 = *reinterpret_cast<_g4_t_v566 *>(_g4_sf + 600u);
  _g4_t_v567 &v567 = *reinterpret_cast<_g4_t_v567 *>(_g4_sf + 672u);
  _g4_t_v568 &v568 = *reinterpret_cast<_g4_t_v568 *>(_g4_sf + 676u);
  _g4_t_v569 &v569 = *reinterpret_cast<_g4_t_v569 *>(_g4_sf + 692u);
  _g4_t_v570 &v570 = *reinterpret_cast<_g4_t_v570 *>(_g4_sf + 696u);
  _g4_t_v571 &v571 = *reinterpret_cast<_g4_t_v571 *>(_g4_sf + 700u);
  _g4_t_v572 &v572 = *reinterpret_cast<_g4_t_v572 *>(_g4_sf + 704u);
  _g4_t_v573 &v573 = *reinterpret_cast<_g4_t_v573 *>(_g4_sf + 708u);
  _g4_t_v574 &v574 = *reinterpret_cast<_g4_t_v574 *>(_g4_sf + 712u);
  _g4_t_v575 &v575 = *reinterpret_cast<_g4_t_v575 *>(_g4_sf + 716u);
  _g4_t_v576 &v576 = *reinterpret_cast<_g4_t_v576 *>(_g4_sf + 720u);
  _g4_t_v577 &v577 = *reinterpret_cast<_g4_t_v577 *>(_g4_sf + 724u);
  _g4_t_v578 &v578 = *reinterpret_cast<_g4_t_v578 *>(_g4_sf + 728u);
  _g4_t_v579 &v579 = *reinterpret_cast<_g4_t_v579 *>(_g4_sf + 732u);
  _g4_t_v580 &v580 = *reinterpret_cast<_g4_t_v580 *>(_g4_sf + 736u);
  _g4_t_v581 &v581 = *reinterpret_cast<_g4_t_v581 *>(_g4_sf + 740u);
  _g4_t_v582 &v582 = *reinterpret_cast<_g4_t_v582 *>(_g4_sf + 744u);
  _g4_t_v583 &v583 = *reinterpret_cast<_g4_t_v583 *>(_g4_sf + 748u);
  _g4_t_v584 &v584 = *reinterpret_cast<_g4_t_v584 *>(_g4_sf + 752u);

  v584[26] = &self;
  v2 = self;
  v451 = a2;
  TiXmlDocument::Construct((TiXmlDocument::Self *)v566, true);
  v370 = v2;
  v3 = 0;
  TiXmlDocument::Parse(v566, v370, 0, 0);
  if ( v566[44] == 0 )
  {
    *(uint32_t *)v493 = (uint32_t)(uintptr_t)(v566);
    TiXmlHandle::FirstChild((TiXmlHandle::Self *)v494, v493);
    TiXmlHandle::FirstChild((TiXmlHandle::Self *)&v495, v494);
    v5 = nullptr;
    if ( v495 != 0 && G4_VCALL<int>(v495, 44) != 0 )
      v5 = (TiXmlElement::Self *)G4_VCALL<int>(v495, 44);
    v6 = (char *)TiXmlElement::Attribute(v5, "apiversion");
    if ( v6 != nullptr )
    {
      v7 = strtok(v6, ".");
      if ( v7 != nullptr )
      {
        *(uint32_t *)v451 = (uint32_t)(uintptr_t)(atoi(v7));
        v8 = strtok(nullptr, ".");
        if ( v8 != nullptr )
        {
          *((uint32_t *)v451 + 1) = (uint32_t)(uintptr_t)(atoi(v8));
          v9 = strtok(nullptr, ".");
          if ( v9 != nullptr )
            *((uint32_t *)v451 + 2) = (uint32_t)(uintptr_t)(atoi(v9));
        }
      }
    }
    v10 = (const char *)TiXmlElement::Attribute(v5, "console");
    v11 = v10;
    if ( v10 != nullptr )
    {
      v12 = strlen(v10);
      v13 = (char *)VoxAllocInternal(
                      v12 + 1,
                      0,
                      (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_soundpack_xml.cpp"),
                      (int)(uintptr_t)("LoadXML_Tiny"),
                      1496);
      *((uint32_t *)v451 + 4) = (uint32_t)(uintptr_t)(v13);
      if ( v13 != nullptr )
        strcpy(v13, v11);
    }
    v14 = (const char *)TiXmlElement::Attribute(v5, "nameofgame");
    v15 = v14;
    if ( v14 != nullptr )
    {
      v16 = strlen(v14);
      v17 = (char *)VoxAllocInternal(
                      v16 + 1,
                      0,
                      (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_soundpack_xml.cpp"),
                      (int)(uintptr_t)("LoadXML_Tiny"),
                      1504);
      *((uint32_t *)v451 + 3) = (uint32_t)(uintptr_t)(v17);
      if ( v17 != nullptr )
        strcpy(v17, v15);
    }
    v18 = (const char *)TiXmlElement::Attribute(v5, "descriptorversion");
    v19 = v18;
    if ( v18 != nullptr )
    {
      v20 = strlen(v18);
      v21 = (char *)VoxAllocInternal(
                      v20 + 1,
                      0,
                      (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_soundpack_xml.cpp"),
                      (int)(uintptr_t)("LoadXML_Tiny"),
                      1512);
      *((uint32_t *)v451 + 5) = (uint32_t)(uintptr_t)(v21);
      if ( v21 != nullptr )
        strcpy(v21, v19);
    }
    *(uint32_t *)v496 = (uint32_t)(uintptr_t)(v566);
    TiXmlHandle::FirstChild((TiXmlHandle::Self *)v497, v496);
    v22 = nullptr;
    TiXmlHandle::FirstChild((TiXmlHandle::Self *)&v498, v497);
    if ( v498 != 0 && G4_VCALL<int>(v498, 44) != 0 )
      v22 = (TiXmlElement::Self *)G4_VCALL<int>(v498, 44);
    TiXmlElement::QueryIntAttribute(v22, "size", &v499);
    vox::GroupXMLDef::Construct((vox::GroupXMLDef::Self *)&v567);
    v23 = v499;
    v527 = nullptr;
    v528 = nullptr;
    v529 = nullptr;
    if ( v499 != 0 )
    {
      v389 = (vox::VoxSoundPackXMLInternalData::Self *)(80 * v499);
      v426 = (vox::EventXMLDef::Self *)VoxAllocInternal(
                                   80 * v499,
                                   0,
                                   (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                                   (int)(uintptr_t)("internal_new"),
                                   181);
      v527 = v426;
      v320 = v23;
      v528 = v426;
      v471 = (vox::EventXMLDef::Self *)((vox::VoxSoundPackXMLInternalData::Self *)((char *)v389 + (uint32_t)(uintptr_t)(v426)));
      v529 = (char *)v389 + (uint32_t)(uintptr_t)(v426);
      v321 = v426;
      do
      {
        if ( v321 != nullptr )
        {
          g4_std::string::construct_copy(v321, &v567);
          g4_std::string::construct_copy((char *)v321 + 4, v568);
          *((uint32_t *)v321 + 2) = v568[1];
          *((uint32_t *)v321 + 3) = v568[2];
          *((uint32_t *)v321 + 4) = v568[3];
          *((uint8_t *)v321 + 20) = v569;
          *((uint32_t *)v321 + 6) = v570;
          *((uint32_t *)v321 + 7) = v571;
          *((uint32_t *)v321 + 8) = v572;
          *((uint32_t *)v321 + 9) = v573;
          *((uint32_t *)v321 + 10) = v574;
          *((uint32_t *)v321 + 11) = v575;
          *((uint32_t *)v321 + 12) = v576;
          *((uint32_t *)v321 + 13) = v577;
          *((uint32_t *)v321 + 14) = v578;
          *((uint8_t *)v321 + 60) = v579;
          *((uint32_t *)v321 + 16) = v580;
          *((uint32_t *)v321 + 17) = v581;
          *((uint8_t *)v321 + 72) = v582;
          *((uint32_t *)v321 + 19) = v583;
        }
        v321 = (vox::EventXMLDef::Self *)((char *)v321 + 80);
        --v320;
      }
      while ( v320 != 0 );
      v24 = v426;
    }
    else
    {
      v529 = nullptr;
      v426 = nullptr;
      v471 = nullptr;
      v24 = nullptr;
    }
    v528 = v471;
    if ( &v527 == (vox::EventXMLDef::Self **)((char *)v451 + 36) )
    {
LABEL_45:
      if ( v426 != v471 )
      {
        v35 = v426;
        do
        {
          v36 = *((uint32_t *)v35 + 1);
          if ( (uint32_t *)(v36 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v36 - 12));
          }
          v37 = (uint32_t *)(*(uint32_t *)v35 - 12);
          if ( v37 != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v35 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v37);
          }
          v35 = (vox::EventXMLDef::Self *)((char *)v35 + 80);
        }
        while ( v35 != v471 );
        v426 = v527;
      }
      if ( v426 != nullptr )
        VoxFreeInternal(v426);
      v38 = (void *)(v568[0] - 12);
      if ( (uint32_t *)(v568[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v568[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v38);
      }
      v39 = (void *)(v567 - 12);
      if ( (uint32_t *)(v567 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v567 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v39);
      }
      *(uint32_t *)v500 = (uint32_t)(uintptr_t)(v566);
      TiXmlHandle::FirstChild((TiXmlHandle::Self *)v501, v500);
      TiXmlHandle::FirstChild((TiXmlHandle::Self *)v502, v501);
      TiXmlHandle::FirstChild((TiXmlHandle::Self *)&v503, v502);
      if ( v503 != 0 && G4_VCALL<int>(v503, 44) != 0 )
      {
        SiblingElement = (TiXmlElement::Self *)G4_VCALL<int>(v503, 44);
        if ( SiblingElement != nullptr )
        {
          v473 = 0;
          sb = nullptr;
          do
          {
            v41 = (char *)TiXmlElement::Attribute(SiblingElement, "mode3d");
            if ( v41 != nullptr )
            {
              v42 = *v41;
              if ( v42 == 121 )
              {
                *(uint32_t *)(*((uint32_t *)v451 + 9) + v473 + 8) = 1;
              }
              else if ( v42 == 114 )
              {
                *(uint32_t *)(*((uint32_t *)v451 + 9) + v473 + 8) = 2;
              }
              else
              {
                *(uint32_t *)(*((uint32_t *)v451 + 9) + v473 + 8) = 0;
              }
            }
            v43 = (const char *)TiXmlElement::Attribute(SiblingElement, "bus");
            v44 = (char *)v43;
            if ( v43 != nullptr )
            {
              v45 = strlen(v43);
            }
            else
            {
              v45 = 0;
              v44 = (char *)&unk_1B15112;
            }
            g4_std_compat::string_assign(*((uint32_t *)v451 + 9) + v473, v44, v45);
            v46 = (const char *)TiXmlElement::Attribute(SiblingElement, "name");
            v47 = (char *)v46;
            if ( v46 != nullptr )
            {
              v48 = strlen(v46);
            }
            else
            {
              v48 = 0;
              v47 = (char *)&unk_1B15112;
            }
            g4_std_compat::string_assign(*((uint32_t *)v451 + 9) + v473 + 4, v47, v48);
            s1a = (const char *)TiXmlElement::Attribute(SiblingElement, "parent");
            if ( s1a != nullptr )
            {
              if ( sb == nullptr )
                goto LABEL_167;
              v414 = SiblingElement;
              v49 = 0;
              v50 = 0;
              while ( 1 )
              {
                v373 = *((vox::VoxSoundPackXMLInternalData::Self **)v451 + 9);
                if ( strcasecmp(s1a, *(const char **)((char *)v373 + v50 + 4)) == 0 )
                {
                  v51 = 1;
                  *(uint32_t *)((char *)v373 + v473 + 12) = v49;
                }
                else
                {
                  v51 = 0;
                }
                if ( (char *)++v49 == sb )
                  break;
                v50 += 80;
                if ( v51 != 0 )
                {
                  SiblingElement = v414;
                  goto LABEL_75;
                }
              }
              SiblingElement = v414;
              if ( v51 == 0 )
LABEL_167:
                *(uint32_t *)(*((uint32_t *)v451 + 9) + v473 + 12) = 0;
            }
            else
            {
              *(uint32_t *)(*((uint32_t *)v451 + 9) + v473 + 12) = 0;
            }
LABEL_75:
            if ( TiXmlElement::QueryDoubleAttribute(SiblingElement, "gain", &v526) == 0 )
            {
              v52 = v526;
              v53 = pow(10.0, (float)(v52 * 0.05f));
              *(float *)(*((uint32_t *)v451 + 9) + v473 + 16) = v53;
            }
            v54 = (uint8_t *)TiXmlElement::Attribute(SiblingElement, "enable");
            if ( v54 != nullptr )
              *(uint8_t *)(*((uint32_t *)v451 + 9) + v473 + 20) = *v54 != 110;
            if ( TiXmlElement::QueryDoubleAttribute(SiblingElement, "refdistance", &v526) == 0 )
            {
              v55 = v526;
              *(float *)(*((uint32_t *)v451 + 9) + v473 + 24) = v55;
            }
            if ( TiXmlElement::QueryDoubleAttribute(SiblingElement, "maxdistance", &v526) == 0 )
            {
              v56 = v526;
              *(float *)(*((uint32_t *)v451 + 9) + v473 + 28) = v56;
            }
            if ( TiXmlElement::QueryDoubleAttribute(SiblingElement, "rolloff", &v526) == 0 )
            {
              v57 = v526;
              *(float *)(*((uint32_t *)v451 + 9) + v473 + 32) = v57;
            }
            if ( TiXmlElement::QueryDoubleAttribute(SiblingElement, "basegain", &v526) == 0 )
            {
              v58 = v526;
              v59 = pow(10.0, (float)(v58 * 0.05f));
              *(float *)(*((uint32_t *)v451 + 9) + v473 + 36) = v59;
            }
            if ( TiXmlElement::QueryDoubleAttribute(SiblingElement, "mingainmod", &v526) == 0 )
            {
              v60 = v526;
              v61 = pow(10.0, (float)(v60 * 0.05f));
              *(float *)(*((uint32_t *)v451 + 9) + v473 + 52) = v61;
            }
            if ( TiXmlElement::QueryDoubleAttribute(SiblingElement, "maxgainmod", &v526) == 0 )
            {
              v62 = v526;
              v63 = pow(10.0, (float)(v62 * 0.05f));
              *(float *)(*((uint32_t *)v451 + 9) + v473 + 44) = v63;
            }
            if ( TiXmlElement::QueryDoubleAttribute(SiblingElement, "basepitch", &v526) == 0 )
            {
              v64 = v526;
              v65 = pow(2.0, (float)(v64 * 0.00083333335f));
              *(float *)(*((uint32_t *)v451 + 9) + v473 + 40) = v65;
            }
            if ( TiXmlElement::QueryDoubleAttribute(SiblingElement, "minpitchmod", &v526) == 0 )
            {
              v66 = v526;
              *(float *)(*((uint32_t *)v451 + 9) + v473 + 56) = v66;
            }
            if ( TiXmlElement::QueryDoubleAttribute(SiblingElement, "maxpitchmod", &v526) == 0 )
            {
              v67 = v526;
              *(float *)(*((uint32_t *)v451 + 9) + v473 + 48) = v67;
            }
            v68 = (uint8_t *)TiXmlElement::Attribute(SiblingElement, "killonresume");
            if ( v68 != nullptr )
              *(uint8_t *)(*((uint32_t *)v451 + 9) + v473 + 60) = *v68 != 110;
            if ( TiXmlElement::QueryDoubleAttribute(SiblingElement, "fadeonplay", &v526) == 0 )
            {
              v69 = v526;
              *(float *)(*((uint32_t *)v451 + 9) + v473 + 64) = v69;
            }
            if ( TiXmlElement::QueryDoubleAttribute(SiblingElement, "fadeonstop", &v526) == 0 )
            {
              v70 = v526;
              *(float *)(*((uint32_t *)v451 + 9) + v473 + 68) = v70;
            }
            v71 = (uint8_t *)TiXmlElement::Attribute(SiblingElement, "randomstartposition");
            if ( v71 != nullptr )
              *(uint8_t *)(*((uint32_t *)v451 + 9) + v473 + 72) = *v71 != 110;
            if ( TiXmlElement::QueryDoubleAttribute(SiblingElement, "playbackdelay", &v526) == 0 )
            {
              v72 = v526;
              *(float *)(*((uint32_t *)v451 + 9) + v473 + 76) = v72;
            }
            ++sb;
            v473 += 80;
            SiblingElement = (TiXmlElement::Self *)TiXmlNode::NextSiblingElement(SiblingElement);
          }
          while ( SiblingElement != nullptr );
        }
      }
      *(uint32_t *)v504 = (uint32_t)(uintptr_t)(v566);
      TiXmlHandle::FirstChild((TiXmlHandle::Self *)v505, v504);
      v73 = nullptr;
      TiXmlHandle::FirstChild((TiXmlHandle::Self *)&v506, v505);
      if ( v506 != 0 && G4_VCALL<int>(v506, 44) != 0 )
        v73 = (TiXmlElement::Self *)G4_VCALL<int>(v506, 44);
      TiXmlElement::QueryIntAttribute(v73, "size", v490);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v545), (char *)&unk_1B15112, (int)(uintptr_t)(&v489));
      v74 = v490[0];
      v546 = 4;
      v547 = 0x7FFFFFFF;
      v548 = -2147483647;
      v549 = 0;
      v550 = 0;
      v551 = 0;
      v530 = nullptr;
      v531 = nullptr;
      v532 = nullptr;
      if ( v490[0] != 0 )
      {
        v391 = (vox::VoxSoundPackXMLInternalData::Self *)(28 * v490[0]);
        v434 = (vox::EventXMLDef::Self *)VoxAllocInternal(
                                     28 * v490[0],
                                     0,
                                     (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                                     (int)(uintptr_t)("internal_new"),
                                     181);
        v530 = v434;
        v338 = v74;
        v531 = v434;
        v474 = (vox::EventXMLDef::Self *)((vox::VoxSoundPackXMLInternalData::Self *)((char *)v391 + (uint32_t)(uintptr_t)(v434)));
        v532 = (char *)v391 + (uint32_t)(uintptr_t)(v434);
        v339 = v434;
        do
        {
          if ( v339 != nullptr )
          {
            g4_std::string::construct_copy(v339, &v545);
            *((uint32_t *)v339 + 1) = v546;
            *((uint32_t *)v339 + 2) = v547;
            *((uint32_t *)v339 + 3) = v548;
            *((uint32_t *)v339 + 4) = v549;
            *((uint8_t *)v339 + 20) = v550;
            *((uint32_t *)v339 + 6) = v551;
          }
          v339 = (vox::EventXMLDef::Self *)((char *)v339 + 28);
          --v338;
        }
        while ( v338 != 0 );
        v75 = v434;
        v76 = v434;
      }
      else
      {
        v532 = nullptr;
        v75 = nullptr;
        v474 = nullptr;
        v76 = nullptr;
      }
      v531 = v474;
      if ( &v530 != (vox::EventXMLDef::Self **)((char *)v451 + 48) )
      {
        v407 = (v474 - v76) >> 2;
        v77 = *((char **)v451 + 12);
        sc = -1227133513 * v407;
        v427 = (vox::EventXMLDef::Self *)(-1227133513 * v407);
        if ( -1227133513 * v407 <= (unsigned int)(-1227133513 * ((*((uint32_t *)v451 + 14) - (int)(uintptr_t)(v77)) >> 2)) )
        {
          s1i = *((char **)v451 + 13);
          v302 = (s1i - v77) >> 2;
          if ( sc > (unsigned int)(-1227133513 * v302) )
          {
            v340 = (char *)v76 + 4 * v302;
            v435 = (vox::EventXMLDef::Self *)(-1227133513 * v302);
            if ( -1227133513 * v302 > 0 )
            {
              s1k = v75;
              v413 = (char *)v76;
              v341 = *((uint32_t *)v451 + 12);
              do
              {
                g4_std::string::assign_str(v341, v76);
                v179 = v435 == (vox::EventXMLDef::Self *)((char *)&dword_0 + 1);
                v435 = (vox::EventXMLDef::Self *)((char *)v435 - 1);
                *(uint32_t *)(v341 + 4) = *((uint32_t *)v76 + 1);
                *(uint32_t *)(v341 + 8) = *((uint32_t *)v76 + 2);
                *(uint32_t *)(v341 + 12) = *((uint32_t *)v76 + 3);
                *(uint32_t *)(v341 + 16) = *((uint32_t *)v76 + 4);
                *(uint8_t *)(v341 + 20) = *((uint8_t *)v76 + 20);
                *(uint32_t *)(v341 + 24) = *((uint32_t *)v76 + 6);
                v76 = (vox::EventXMLDef::Self *)((char *)v76 + 28);
                v341 += 28;
              }
              while ( !v179 );
              v75 = s1k;
              v77 = *((char **)v451 + 12);
              s1i = *((char **)v451 + 13);
              v340 = &v413[(s1i - v77) & 0xFFFFFFFC];
            }
            if ( v340 == (char *)v474 )
            {
              v82 = v451;
              v83 = (int)(uintptr_t)(&v77[28 * sc]);
            }
            else
            {
              v436 = v75;
              v342 = v340;
              v343 = s1i;
              do
              {
                if ( v343 != nullptr )
                {
                  g4_std::string::construct_copy(v343, v342);
                  *((uint32_t *)v343 + 1) = *((uint32_t *)v342 + 1);
                  *((uint32_t *)v343 + 2) = *((uint32_t *)v342 + 2);
                  *((uint32_t *)v343 + 3) = *((uint32_t *)v342 + 3);
                  *((uint32_t *)v343 + 4) = *((uint32_t *)v342 + 4);
                  v343[20] = v342[20];
                  *((uint32_t *)v343 + 6) = *((uint32_t *)v342 + 6);
                }
                v342 += 28;
                v343 += 28;
              }
              while ( v474 != (vox::EventXMLDef::Self *)v342 );
              v75 = v436;
              v82 = v451;
              v83 = *((uint32_t *)v451 + 12) + 28 * sc;
            }
          }
          else
          {
            if ( sc > 0 )
            {
              v410 = (char *)v75;
              v405 = *((char **)v451 + 12);
              v303 = v405;
              do
              {
                g4_std::string::assign_str(v303, v76);
                v179 = v427 == (vox::EventXMLDef::Self *)((char *)&dword_0 + 1);
                v427 = (vox::EventXMLDef::Self *)((char *)v427 - 1);
                *((uint32_t *)v303 + 1) = *((uint32_t *)v76 + 1);
                *((uint32_t *)v303 + 2) = *((uint32_t *)v76 + 2);
                *((uint32_t *)v303 + 3) = *((uint32_t *)v76 + 3);
                *((uint32_t *)v303 + 4) = *((uint32_t *)v76 + 4);
                v303[20] = *((uint8_t *)v76 + 20);
                *((uint32_t *)v303 + 6) = *((uint32_t *)v76 + 6);
                v76 = (vox::EventXMLDef::Self *)((char *)v76 + 28);
                v303 += 28;
              }
              while ( !v179 );
              v75 = (vox::EventXMLDef::Self *)v410;
              v77 = &v405[28 * sc];
            }
            if ( v77 == s1i )
            {
              v82 = v451;
              v83 = *((uint32_t *)v451 + 12) + 28 * sc;
            }
            else
            {
              v304 = v77;
              do
              {
                v305 = (uint32_t *)(*(uint32_t *)v304 - 12);
                if ( v305 != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v304 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v305);
                }
                v304 += 28;
              }
              while ( s1i != v304 );
              v82 = v451;
              v474 = v531;
              v83 = *((uint32_t *)v451 + 12) + 28 * sc;
              v75 = v530;
            }
          }
        }
        else
        {
          s1b = 0;
          v428 = nullptr;
          if ( sc != 0 )
          {
            s1b = 4 * v407;
            v428 = (vox::EventXMLDef::Self *)VoxAllocInternal(
                                         4 * v407,
                                         0,
                                         (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                                         (int)(uintptr_t)("internal_new"),
                                         181);
          }
          if ( v76 != v474 )
          {
            v78 = v428;
            do
            {
              if ( v78 != nullptr )
              {
                g4_std::string::construct_copy(v78, v76);
                *((uint32_t *)v78 + 1) = *((uint32_t *)v76 + 1);
                *((uint32_t *)v78 + 2) = *((uint32_t *)v76 + 2);
                *((uint32_t *)v78 + 3) = *((uint32_t *)v76 + 3);
                *((uint32_t *)v78 + 4) = *((uint32_t *)v76 + 4);
                *((uint8_t *)v78 + 20) = *((uint8_t *)v76 + 20);
                *((uint32_t *)v78 + 6) = *((uint32_t *)v76 + 6);
              }
              v76 = (vox::EventXMLDef::Self *)((char *)v76 + 28);
              v78 = (vox::EventXMLDef::Self *)((char *)v78 + 28);
            }
            while ( v474 != v76 );
          }
          v79 = *((uint32_t **)v451 + 13);
          v80 = *((uint32_t **)v451 + 12);
          if ( v79 != v80 )
          {
            do
            {
              v81 = (uint32_t *)(*v80 - 12);
              if ( v81 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v80 - 4), 0xFFFFFFFF) <= 0 )
                g4_std::string::Rep::M_destroy(v81);
              v80 += 7;
            }
            while ( v79 != v80 );
            v80 = *((uint32_t **)v451 + 12);
          }
          if ( v80 != nullptr )
            VoxFreeInternal(v80);
          v474 = v531;
          v75 = v530;
          v82 = v451;
          *((uint32_t *)v451 + 12) = (uint32_t)(uintptr_t)(v428);
          v83 = (int)(uintptr_t)(v428) + s1b;
          *((uint32_t *)v451 + 14) = (uint32_t)(uintptr_t)((char *)v428 + s1b);
        }
        *((uint32_t *)v82 + 13) = v83;
      }
      if ( v474 != v75 )
      {
        do
        {
          v84 = (uint32_t *)(*(uint32_t *)v75 - 12);
          if ( v84 != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v75 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v84);
          }
          v75 = (vox::EventXMLDef::Self *)((char *)v75 + 28);
        }
        while ( v474 != v75 );
        v75 = v530;
      }
      if ( v75 != nullptr )
        VoxFreeInternal(v75);
      v85 = (void *)(v545 - 12);
      if ( (uint32_t *)(v545 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v545 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v85);
      }
      *(uint32_t *)v507 = (uint32_t)(uintptr_t)(v566);
      TiXmlHandle::FirstChild((TiXmlHandle::Self *)v508, v507);
      TiXmlHandle::FirstChild((TiXmlHandle::Self *)v509, v508);
      TiXmlHandle::FirstChild((TiXmlHandle::Self *)&v510, v509);
      if ( v510 != 0 && G4_VCALL<int>(v510, 44) != 0 )
      {
        s1c = (TiXmlElement::Self *)G4_VCALL<int>(v510, 44);
        if ( s1c != nullptr )
        {
          sd = nullptr;
          v475 = 0;
          for ( i = (const char *)TiXmlElement::Attribute(s1c, "label");
                ;
                i = (const char *)TiXmlElement::Attribute(v90, "label") )
          {
            v91 = (char *)i;
            if ( i != nullptr )
            {
              v92 = strlen(i);
            }
            else
            {
              v92 = 0;
              v91 = (char *)&unk_1B15112;
            }
            g4_std_compat::string_assign((int)(uintptr_t)(&sd[*((uint32_t *)v451 + 12)]), v91, v92);
            if ( TiXmlElement::QueryIntAttribute(s1c, "maxplaybacks", (int *)&v526) == 0 )
              *(uint32_t *)&sd[*((uint32_t *)v451 + 12) + 8] = LODWORD(v526);
            if ( TiXmlElement::QueryIntAttribute(s1c, "threshold", (int *)&v526) == 0 )
              *(uint32_t *)&sd[*((uint32_t *)v451 + 12) + 12] = LODWORD(v526);
            v93 = (const char *)TiXmlElement::Attribute(s1c, "behaviour");
            if ( v93 != nullptr )
            {
              if ( strcmp(v93, "steal oldest") == 0 )
              {
                *(uint32_t *)&sd[*((uint32_t *)v451 + 12) + 4] = 0;
              }
              else if ( strcmp(v93, "steal lowest priority") == 0 )
              {
                *(uint32_t *)&sd[*((uint32_t *)v451 + 12) + 4] = 1;
              }
              else if ( strcmp(v93, "steal low. prio. or old. same prio") == 0 )
              {
                *(uint32_t *)&sd[*((uint32_t *)v451 + 12) + 4] = 2;
              }
              else if ( strcmp(v93, "steal quietest") == 0 )
              {
                *(uint32_t *)&sd[*((uint32_t *)v451 + 12) + 4] = 3;
              }
            }
            v415 = (const char *)TiXmlElement::Attribute(s1c, "parent");
            if ( v415 != nullptr )
            {
              if ( v475 == 0 )
                goto LABEL_180;
              v89 = 0;
              v88 = 0;
              do
              {
                v374 = *((vox::VoxSoundPackXMLInternalData::Self **)v451 + 12);
                if ( strcasecmp(v415, *(const char **)((char *)v374 + v89)) == 0 )
                {
                  v87 = 1;
                  *(uint32_t *)&sd[(uint32_t)(uintptr_t)(v374) + 16] = v88;
                }
                else
                {
                  v87 = 0;
                }
                if ( ++v88 == v475 )
                  break;
                v89 += 28;
              }
              while ( v87 == 0 );
              if ( v87 == 0 )
LABEL_180:
                *(uint32_t *)&sd[*((uint32_t *)v451 + 12) + 16] = 0;
            }
            else
            {
              *(uint32_t *)&sd[*((uint32_t *)v451 + 12) + 16] = 0;
            }
            if ( TiXmlElement::QueryIntAttribute(s1c, "priority", (int *)&v526) != 0 )
            {
              sd[*((uint32_t *)v451 + 12) + 20] = 0;
            }
            else
            {
              *(uint32_t *)&sd[*((uint32_t *)v451 + 12) + 24] = LODWORD(v526);
              sd[*((uint32_t *)v451 + 12) + 20] = 1;
            }
            ++v475;
            v90 = (TiXmlElement::Self *)TiXmlNode::NextSiblingElement(s1c);
            sd += 28;
            s1c = v90;
            if ( v90 == nullptr )
              break;
          }
        }
      }
      *(uint32_t *)v511 = (uint32_t)(uintptr_t)(v566);
      TiXmlHandle::FirstChild((TiXmlHandle::Self *)v512, v511);
      v94 = nullptr;
      TiXmlHandle::FirstChild((TiXmlHandle::Self *)&v513, v512);
      if ( v513 != 0 && G4_VCALL<int>(v513, 44) != 0 )
        v94 = (TiXmlElement::Self *)G4_VCALL<int>(v513, 44);
      TiXmlElement::QueryIntAttribute(v94, "size", v491);
      vox::SoundXMLDef::Construct((vox::SoundXMLDef::Self *)v584);
      v533 = nullptr;
      v534 = nullptr;
      v535 = nullptr;
      if ( v491[0] != 0 )
      {
        v390 = (vox::VoxSoundPackXMLInternalData::Self *)v491[0];
        v324 = 96 * v491[0];
        v325 = (char *)VoxAllocInternal(
                         96 * v491[0],
                         0,
                         (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                         (int)(uintptr_t)("internal_new"),
                         181);
        v533 = v325;
        v534 = v325;
        v535 = &v325[v324];
        for ( j = v390; j != nullptr; j = (vox::VoxSoundPackXMLInternalData::Self *)((char *)j - 1) )
        {
          if ( v325 != nullptr )
            std::memcpy(v325, v584, 96);
          v325 += 96;
        }
        v95 = v535;
      }
      else
      {
        v535 = nullptr;
        v95 = nullptr;
      }
      v534 = v95;
      g4_std::vector_vox_SoundXMLDef_vox_SAll_d9abd2::opAssign(
        (std::vector<vox::SoundXMLDef::Self, vox::SAllocator<vox::SoundXMLDef::Self, (vox::VoxMemHint)0>> *)((char *)v451 + 24),
        (const std::vector<vox::SoundXMLDef::Self, vox::SAllocator<vox::SoundXMLDef::Self, (vox::VoxMemHint)0>> *)&v533);
      v96 = v534;
      v97 = (char *)v533;
      if ( v534 != v533 )
      {
        do
        {
          if ( *((uint32_t *)v97 + 1) != 0 )
            VoxFreeInternal(*((void **)v97 + 1));
          if ( *((uint32_t *)v97 + 2) != 0 )
            VoxFreeInternal(*((void **)v97 + 2));
          if ( *((uint32_t *)v97 + 5) != 0 )
            VoxFreeInternal(*((void **)v97 + 5));
          v98 = *((void ***)v97 + 23);
          if ( v98 != nullptr )
          {
            if ( *v98 != nullptr )
            {
              VoxFreeInternal(*v98);
              v98 = *((void ***)v97 + 23);
            }
            VoxFreeInternal(v98);
          }
          v97 += 96;
        }
        while ( v96 != v97 );
        v97 = (char *)v533;
      }
      if ( v97 != nullptr )
        VoxFreeInternal(v97);
      if ( v584[1] != nullptr )
        VoxFreeInternal(v584[1]);
      if ( v584[2] != nullptr )
        VoxFreeInternal(v584[2]);
      if ( v584[5] != nullptr )
        VoxFreeInternal(v584[5]);
      v99 = v584[23];
      if ( v584[23] != nullptr )
      {
        if ( *(uint32_t *)v584[23] != 0 )
        {
          VoxFreeInternal(*(void **)v584[23]);
          v99 = v584[23];
        }
        VoxFreeInternal(v99);
      }
      v100 = v491[0];
      v536 = nullptr;
      v537 = nullptr;
      v538 = nullptr;
      if ( v491[0] != 0 )
      {
        v322 = 8 * v491[0];
        v323 = (char *)VoxAllocInternal(
                         8 * v491[0],
                         0,
                         (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                         (int)(uintptr_t)("internal_new"),
                         181);
        se = v323;
        v536 = v323;
        s1d = &v323[v322];
        v538 = &v323[v322];
        do
        {
          if ( v323 != nullptr )
          {
            *(uint32_t *)v323 = 0;
            *((uint32_t *)v323 + 1) = -1;
          }
          v323 += 8;
          --v100;
        }
        while ( v100 != 0 );
        v101 = se;
      }
      else
      {
        v538 = nullptr;
        se = nullptr;
        s1d = nullptr;
        v101 = nullptr;
      }
      v537 = s1d;
      v393 = (unsigned int **)((char *)v451 + 84);
      if ( (char **)((char *)v451 + 84) == &v536 )
      {
LABEL_232:
        if ( se != nullptr )
          VoxFreeInternal(se);
        *(uint32_t *)v514 = (uint32_t)(uintptr_t)(v566);
        TiXmlHandle::FirstChild((TiXmlHandle::Self *)v515, v514);
        TiXmlHandle::FirstChild((TiXmlHandle::Self *)v516, v515);
        TiXmlHandle::FirstChild((TiXmlHandle::Self *)&v517, v516);
        if ( v517 != 0 && G4_VCALL<int>(v517, 44) != 0 )
        {
          s1e = (TiXmlElement::Self *)G4_VCALL<int>(v517, 44);
          if ( s1e != nullptr )
          {
            v477 = 0;
            v399 = nullptr;
            v109 = s1e;
            v110 = v451;
            do
            {
              v375 = v110;
              v111 = (const char *)TiXmlElement::Attribute(v109, "label");
              v112 = v111;
              if ( v111 != nullptr )
              {
                v113 = *((uint32_t *)v375 + 6) + v477;
                v114 = strlen(v111);
                *(uint32_t *)(v113 + 4) = VoxAllocInternal(
                                          v114 + 1,
                                          0,
                                          (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_soundpack_xml.cpp"),
                                          (int)(uintptr_t)("LoadXML_Tiny"),
                                          1754);
                v115 = v375;
                v116 = *(char **)(*((uint32_t *)v375 + 6) + v477 + 4);
                if ( v116 != nullptr )
                {
                  strcpy(v116, v112);
                  LowerCaseHashLabel = (char *)vox::VoxSoundPackXMLInternalData::GetLowerCaseHashLabel(
                                                 v375,
                                                 *(char **)(*((uint32_t *)v375 + 6) + v477 + 4));
                  v118 = (int *)(8 * (uint32_t)(uintptr_t)(v399) + *((uint32_t *)v375 + 21));
                  *v118 = vox::VoxSoundPackXMLInternalData::Hash(v375, LowerCaseHashLabel);
                  v115 = v375;
                  *(uint32_t *)(*((uint32_t *)v375 + 21) + 8 * (uint32_t)(uintptr_t)(v399) + 4) = (uint32_t)(uintptr_t)(v399);
                }
              }
              else
              {
                v285 = *((uint32_t *)v375 + 6) + v477;
                *(uint32_t *)(v285 + 4) = VoxAllocInternal(
                                          1u,
                                          0,
                                          (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_soundpack_xml.cpp"),
                                          (int)(uintptr_t)("LoadXML_Tiny"),
                                          1768);
                v115 = v375;
                v286 = *(uint8_t **)(*((uint32_t *)v375 + 6) + v477 + 4);
                if ( v286 != nullptr )
                  *v286 = 0;
              }
              v376 = v115;
              v416 = (const char *)TiXmlElement::Attribute(s1e, "bank");
              v119 = v376;
              if ( v416 != nullptr )
              {
                v120 = *((uint32_t *)v376 + 12);
                sf = (char *)(-1227133513 * ((*((uint32_t *)v376 + 13) - v120) >> 2));
                if ( sf != nullptr )
                {
                  v121 = 0;
                  v122 = 0;
                  v451 = v376;
                  while ( 1 )
                  {
                    if ( strcasecmp(v416, *(const char **)(v120 + v121)) == 0 )
                    {
                      *(uint8_t *)(*((uint32_t *)v376 + 6) + v477 + 17) = v122;
                      v123 = 1;
                    }
                    else
                    {
                      v123 = 0;
                    }
                    if ( (char *)++v122 == sf )
                      break;
                    v121 += 28;
                    v119 = v376;
                    if ( v123 != 0 )
                      goto LABEL_248;
                    v120 = *((uint32_t *)v376 + 12);
                  }
                  v119 = v376;
                }
              }
LABEL_248:
              v377 = v119;
              v417 = (const char *)TiXmlElement::Attribute(s1e, "group");
              v124 = 0;
              sg = nullptr;
              v125 = v377;
              if ( v417 != nullptr )
              {
                v403 = *((char **)v377 + 9);
                v400 = (char *)(-858993459 * ((*((uint32_t *)v377 + 10) - (int)(uintptr_t)(v403)) >> 4));
                if ( v400 != nullptr )
                {
                  v126 = nullptr;
                  sh = (char *)v377;
                  v127 = 0;
                  v128 = nullptr;
                  do
                  {
                    v378 = v128;
                    v129 = strcasecmp(v417, *(const char **)&v403[v127 + 4]);
                    v128 = v378;
                    if ( v129 == 0 )
                      v128 = v126;
                    v126 = (vox::VoxSoundPackXMLInternalData::Self *)((char *)v126 + 1);
                    if ( v126 == (vox::VoxSoundPackXMLInternalData::Self *)v400 )
                      break;
                    v127 += 80;
                  }
                  while ( v129 != 0 );
                  v130 = v128;
                  v125 = (vox::VoxSoundPackXMLInternalData::Self *)sh;
                  v124 = (char)(uintptr_t)(v130);
                  sg = (char *)(80 * (uint32_t)(uintptr_t)(v130));
                }
              }
              *(uint8_t *)(*((uint32_t *)v125 + 6) + v477 + 18) = v124;
              v379 = v125;
              if ( TiXmlElement::QueryIntAttribute(s1e, "priority", &v518) == 0 )
                *(uint32_t *)(*((uint32_t *)v379 + 6) + v477) = v518;
              v131 = (uint8_t *)TiXmlElement::Attribute(s1e, "loop");
              if ( v131 != nullptr )
                *(uint8_t *)(*((uint32_t *)v379 + 6) + v477 + 19) = *v131 == 121 || *v131 == 89;
              v132 = (const char *)TiXmlElement::Attribute(s1e, "format");
              if ( v132 != nullptr )
              {
                if ( strcmp(v132, "pcm") == 0 || strcmp(v132, "adpcm") == 0 )
                {
                  *(uint8_t *)(*((uint32_t *)v379 + 6) + v477 + 16) = 1;
                }
                else if ( strcmp(v132, "mpc8") == 0 || strcmp(v132, "mpc") == 0 )
                {
                  *(uint8_t *)(*((uint32_t *)v379 + 6) + v477 + 16) = 3;
                }
                else if ( strcmp(v132, "ogg") == 0 )
                {
                  *(uint8_t *)(*((uint32_t *)v379 + 6) + v477 + 16) = 2;
                }
                else if ( strcmp(v132, "vxn") == 0 )
                {
                  *(uint8_t *)(*((uint32_t *)v379 + 6) + v477 + 16) = 4;
                }
                else if ( strcmp(v132, "bcwav") == 0 )
                {
                  *(uint8_t *)(*((uint32_t *)v379 + 6) + v477 + 16) = 5;
                }
              }
              v133 = (const char *)TiXmlElement::Attribute(s1e, "loadingflags");
              if ( v133 != nullptr )
              {
                if ( strcmp(v133, "none") == 0 )
                {
                  *(uint32_t *)(*((uint32_t *)v379 + 6) + v477 + 12) = 0;
                }
                else if ( strcmp(v133, "load to ram") == 0 )
                {
                  *(uint32_t *)(*((uint32_t *)v379 + 6) + v477 + 12) = 1;
                }
                else if ( strcmp(v133, "load and decode") == 0 )
                {
                  *(uint32_t *)(*((uint32_t *)v379 + 6) + v477 + 12) = 2;
                }
              }
              v134 = (const char *)TiXmlElement::Attribute(s1e, "filename");
              v135 = v134;
              v136 = v379;
              if ( v134 != nullptr )
              {
                v137 = *((uint32_t *)v379 + 6) + v477;
                v138 = strlen(v134);
                *(uint32_t *)(v137 + 8) = VoxAllocInternal(
                                          v138 + 1,
                                          0,
                                          (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_soundpack_xml.cpp"),
                                          (int)(uintptr_t)("LoadXML_Tiny"),
                                          1866);
                v136 = v379;
                v139 = *(char **)(*((uint32_t *)v379 + 6) + v477 + 8);
                if ( v139 != nullptr )
                {
                  strcpy(v139, v135);
                  v136 = v379;
                }
              }
              else
              {
                v279 = *((uint32_t *)v379 + 6) + v477;
                if ( *(uint8_t *)(v279 + 16) != 0xFF )
                {
                  v280 = strlen(*(const char **)(v279 + 4));
                  *(uint32_t *)(v279 + 8) = VoxAllocInternal(
                                            v280 + 7,
                                            0,
                                            (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_soundpack_xml.cpp"),
                                            (int)(uintptr_t)("LoadXML_Tiny"),
                                            1872);
                  v136 = v379;
                  v281 = *((uint32_t *)v379 + 6) + v477;
                  v282 = *(char **)(v281 + 8);
                  if ( v282 != nullptr )
                  {
                    strcpy(v282, *(const char **)(v281 + 4));
                    v136 = v379;
                    v283 = *((uint32_t *)v379 + 6) + v477;
                    v284 = *(uint8_t *)(v283 + 16);
                    switch ( v284 )
                    {
                      case 1:
                        strcpy((char *)(*(uint32_t *)(v283 + 8) + strlen(*(const char **)(v283 + 8))), ".wav");
                        v136 = v379;
                        break;
                      case 3:
                        strcpy((char *)(*(uint32_t *)(v283 + 8) + strlen(*(const char **)(v283 + 8))), ".mpc");
                        v136 = v379;
                        break;
                      case 2:
                        strcpy((char *)(*(uint32_t *)(v283 + 8) + strlen(*(const char **)(v283 + 8))), ".ogg");
                        v136 = v379;
                        break;
                      case 4:
                        strcpy((char *)(*(uint32_t *)(v283 + 8) + strlen(*(const char **)(v283 + 8))), ".vxn");
                        v136 = v379;
                        break;
                      case 5:
                        strcpy((char *)(*(uint32_t *)(v283 + 8) + strlen(*(const char **)(v283 + 8))), ".bcwav");
                        v136 = v379;
                        break;
                      default:
                        break;
                    }
                  }
                }
              }
              v380 = v136;
              v140 = (const char *)TiXmlElement::Attribute(s1e, "bus");
              v141 = v140;
              if ( v140 != nullptr )
              {
                v142 = *((uint32_t *)v380 + 6) + v477;
                v143 = strlen(v140);
                *(uint32_t *)(v142 + 20) = VoxAllocInternal(
                                           v143 + 1,
                                           0,
                                           (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_soundpack_xml.cpp"),
                                           (int)(uintptr_t)("LoadXML_Tiny"),
                                           1907);
                v144 = v380;
                v145 = *((uint32_t *)v380 + 6);
                v146 = *(char **)(v145 + v477 + 20);
                if ( v146 != nullptr )
                {
                  strcpy(v146, v141);
                  v144 = v380;
                  v145 = *((uint32_t *)v380 + 6);
                }
              }
              else
              {
                v287 = *((uint32_t *)v380 + 6) + v477;
                *(uint32_t *)(v287 + 20) = VoxAllocInternal(
                                           *(uint32_t *)(*(uint32_t *)&sg[*((uint32_t *)v380 + 9)] - 12) + 1,
                                           0,
                                           (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_soundpack_xml.cpp"),
                                           (int)(uintptr_t)("LoadXML_Tiny"),
                                           1913);
                v144 = v380;
                v145 = *((uint32_t *)v380 + 6);
                v288 = *(char **)(v145 + v477 + 20);
                if ( v288 != nullptr )
                {
                  strcpy(v288, *(const char **)&sg[*((uint32_t *)v380 + 9)]);
                  v144 = v380;
                  v145 = *((uint32_t *)v380 + 6);
                }
              }
              *(uint32_t *)(v145 + v477 + 24) = *(uint32_t *)&sg[*((uint32_t *)v144 + 9) + 8];
              v381 = v144;
              v147 = (char *)TiXmlElement::Attribute(s1e, "mode3d");
              if ( v147 != nullptr )
              {
                v148 = *v147;
                switch ( v148 )
                {
                  case 'y':
                    *(uint32_t *)(*((uint32_t *)v381 + 6) + v477 + 24) = 1;
                    break;
                  case 'r':
                    *(uint32_t *)(*((uint32_t *)v381 + 6) + v477 + 24) = 2;
                    break;
                  case 'n':
                    *(uint32_t *)(*((uint32_t *)v381 + 6) + v477 + 24) = 0;
                    break;
                  default:
                    break;
                }
              }
              *(uint32_t *)(*((uint32_t *)v381 + 6) + v477 + 28) = *(uint32_t *)&sg[*((uint32_t *)v381 + 9) + 24];
              if ( TiXmlElement::QueryDoubleAttribute(s1e, "refdistance", &v526) == 0 )
              {
                v149 = v526;
                *(float *)(*((uint32_t *)v381 + 6) + v477 + 28) = v149;
              }
              *(uint32_t *)(*((uint32_t *)v381 + 6) + v477 + 32) = *(uint32_t *)&sg[*((uint32_t *)v381 + 9) + 28];
              if ( TiXmlElement::QueryDoubleAttribute(s1e, "maxdistance", &v526) == 0 )
              {
                v150 = v526;
                *(float *)(*((uint32_t *)v381 + 6) + v477 + 32) = v150;
              }
              *(uint32_t *)(*((uint32_t *)v381 + 6) + v477 + 36) = *(uint32_t *)&sg[*((uint32_t *)v381 + 9) + 32];
              if ( TiXmlElement::QueryDoubleAttribute(s1e, "rolloff", &v526) == 0 )
              {
                v151 = v526;
                *(float *)(*((uint32_t *)v381 + 6) + v477 + 36) = v151;
              }
              *(uint32_t *)(*((uint32_t *)v381 + 6) + v477 + 40) = *(uint32_t *)&sg[*((uint32_t *)v381 + 9) + 36];
              v152 = TiXmlElement::QueryDoubleAttribute(s1e, "basegain", &v526);
              v153 = v381;
              if ( v152 == 0 )
              {
                v154 = v526;
                v155 = pow(10.0, (float)(v154 * 0.05f));
                v153 = v381;
                v156 = v155;
                *(float *)(*((uint32_t *)v381 + 6) + v477 + 40) = v156;
              }
              *(uint32_t *)(*((uint32_t *)v153 + 6) + v477 + 44) = *(uint32_t *)&sg[*((uint32_t *)v153 + 9) + 52];
              v382 = v153;
              v157 = TiXmlElement::QueryDoubleAttribute(s1e, "mingainmod", &v526);
              v158 = v382;
              if ( v157 == 0 )
              {
                v159 = v526;
                v160 = pow(10.0, (float)(v159 * 0.05f));
                v158 = v382;
                v161 = v160;
                *(float *)(*((uint32_t *)v382 + 6) + v477 + 44) = v161;
              }
              *(uint32_t *)(*((uint32_t *)v158 + 6) + v477 + 48) = *(uint32_t *)&sg[*((uint32_t *)v158 + 9) + 44];
              v383 = v158;
              v162 = TiXmlElement::QueryDoubleAttribute(s1e, "maxgainmod", &v526);
              v163 = v383;
              if ( v162 == 0 )
              {
                v164 = v526;
                v165 = pow(10.0, (float)(v164 * 0.05f));
                v163 = v383;
                v166 = v165;
                *(float *)(*((uint32_t *)v383 + 6) + v477 + 48) = v166;
              }
              v167 = *((uint32_t *)v163 + 6);
              v168 = v167 + v477;
              if ( *(float *)(v167 + v477 + 44) != 1.0 || *(float *)(v168 + 48) != 1.0 )
              {
                *(uint8_t *)(v168 + 52) = 1;
                v167 = *((uint32_t *)v163 + 6);
              }
              *(uint32_t *)(v167 + v477 + 56) = *(uint32_t *)&sg[*((uint32_t *)v163 + 9) + 40];
              v384 = v163;
              v169 = TiXmlElement::QueryDoubleAttribute(s1e, "basepitch", &v526);
              v170 = v384;
              if ( v169 == 0 )
              {
                v171 = v526;
                v172 = pow(2.0, (float)(v171 * 0.00083333335f));
                v170 = v384;
                v173 = v172;
                *(float *)(*((uint32_t *)v384 + 6) + v477 + 56) = v173;
              }
              *(uint32_t *)(*((uint32_t *)v170 + 6) + v477 + 60) = *(uint32_t *)&sg[*((uint32_t *)v170 + 9) + 56];
              v385 = v170;
              if ( TiXmlElement::QueryDoubleAttribute(s1e, "minpitchmod", &v526) == 0 )
              {
                v174 = v526;
                *(float *)(*((uint32_t *)v385 + 6) + v477 + 60) = v174;
              }
              *(uint32_t *)(*((uint32_t *)v385 + 6) + v477 + 64) = *(uint32_t *)&sg[*((uint32_t *)v385 + 9) + 48];
              if ( TiXmlElement::QueryDoubleAttribute(s1e, "maxpitchmod", &v526) == 0 )
              {
                v175 = v526;
                *(float *)(*((uint32_t *)v385 + 6) + v477 + 64) = v175;
              }
              v176 = *((uint32_t *)v385 + 6);
              v177 = v176 + v477;
              if ( *(float *)(v176 + v477 + 60) != 0.0 || *(float *)(v177 + 64) != 0.0 )
              {
                *(uint8_t *)(v177 + 68) = 1;
                v176 = *((uint32_t *)v385 + 6);
              }
              *(uint8_t *)(v176 + v477 + 69) = sg[*((uint32_t *)v385 + 9) + 60];
              v178 = (uint8_t *)TiXmlElement::Attribute(s1e, "killonresume");
              if ( v178 != nullptr )
              {
                v179 = *v178 == 110;
                v180 = *((uint32_t *)v385 + 6);
                *(uint8_t *)(v180 + v477 + 69) = !v179;
              }
              *(uint32_t *)(*((uint32_t *)v385 + 6) + v477 + 72) = *(uint32_t *)&sg[*((uint32_t *)v385 + 9) + 64];
              if ( TiXmlElement::QueryDoubleAttribute(s1e, "fadeonplay", &v526) == 0 )
              {
                v181 = v526;
                *(float *)(*((uint32_t *)v385 + 6) + v477 + 72) = v181;
              }
              *(uint32_t *)(*((uint32_t *)v385 + 6) + v477 + 76) = *(uint32_t *)&sg[*((uint32_t *)v385 + 9) + 68];
              if ( TiXmlElement::QueryDoubleAttribute(s1e, "fadeonstop", &v526) == 0 )
              {
                v182 = v526;
                *(float *)(*((uint32_t *)v385 + 6) + v477 + 76) = v182;
              }
              *(uint8_t *)(*((uint32_t *)v385 + 6) + v477 + 80) = sg[*((uint32_t *)v385 + 9) + 72];
              v183 = (uint8_t *)TiXmlElement::Attribute(s1e, "randomstartposition");
              if ( v183 != nullptr )
              {
                v179 = *v183 == 110;
                v184 = *((uint32_t *)v385 + 6);
                *(uint8_t *)(v184 + v477 + 80) = !v179;
              }
              *(uint32_t *)(*((uint32_t *)v385 + 6) + v477 + 84) = *(uint32_t *)&sg[*((uint32_t *)v385 + 9) + 76];
              if ( TiXmlElement::QueryDoubleAttribute(s1e, "playbackdelay", &v526) == 0 )
              {
                v185 = v526;
                *(float *)(*((uint32_t *)v385 + 6) + v477 + 84) = v185;
              }
              v186 = (char *)TiXmlElement::Attribute(s1e, "customparam");
              si = v186;
              v187 = v385;
              if ( v186 != nullptr )
              {
                v188 = *v186;
                v189 = 0;
                if ( v188 != 0 )
                {
                  v190 = si;
                  LOBYTE(v189) = 1;
                  do
                  {
                    v179 = v188 == 44;
                    v188 = *++v190;
                    if ( v179 )
                      ++v189;
                  }
                  while ( v188 != 0 );
                }
                *(uint32_t *)(*((uint32_t *)v385 + 6) + v477 + 88) = v189;
                v191 = *((uint32_t *)v385 + 6) + v477;
                v192 = *(uint32_t *)(v191 + 88);
                if ( v192 > 0 )
                {
                  *(uint32_t *)(v191 + 92) = VoxAllocInternal(
                                             4 * v192,
                                             0,
                                             (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_soundpack_xml.cpp"),
                                             (int)(uintptr_t)("LoadXML_Tiny"),
                                             2035);
                  v187 = v385;
                  v193 = *((uint32_t *)v385 + 6) + v477;
                  v194 = *(uint32_t **)(v193 + 92);
                  if ( v194 != nullptr )
                  {
                    v195 = strlen(si);
                    *v194 = VoxAllocInternal(
                              v195 + 1,
                              0,
                              (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_soundpack_xml.cpp"),
                              (int)(uintptr_t)("LoadXML_Tiny"),
                              2039);
                    v187 = v385;
                    v196 = *((uint32_t *)v385 + 6) + v477;
                    if ( **(uint32_t **)(v196 + 92) != 0 )
                    {
                      strcpy(**(char ***)(v196 + 92), si);
                      v187 = v385;
                      v197 = *((uint32_t *)v385 + 6) + v477;
                      if ( *(int *)(v197 + 88) > 1 )
                      {
                        v198 = 1;
                        do
                        {
                          v199 = *(uint32_t *)(v197 + 92);
                          v200 = (char *)(strchr(*(const char **)(v199 + 4 * v198 - 4), 44));
                          *(uint32_t *)(v199 + 4 * v198) = (uint32_t)(uintptr_t)(v200 + 1);
                          *v200 = 0;
                          ++v198;
                          v197 = *((uint32_t *)v385 + 6) + v477;
                        }
                        while ( *(uint32_t *)(v197 + 88) > v198 );
                        v187 = v385;
                      }
                    }
                    else
                    {
                      *(uint32_t *)(v196 + 88) = 0;
                    }
                  }
                  else
                  {
                    *(uint32_t *)(v193 + 88) = 0;
                  }
                }
              }
              v386 = v187;
              v109 = (TiXmlElement::Self *)TiXmlNode::NextSiblingElement(s1e);
              ++v399;
              v477 += 96;
              s1e = v109;
              v110 = v386;
            }
            while ( v109 != nullptr );
          }
        }
        vox::VoxSoundPackXMLInternalData::OrganizeHashTable(v451, v393, 1);
        *(uint32_t *)v519 = (uint32_t)(uintptr_t)(v566);
        TiXmlHandle::FirstChild((TiXmlHandle::Self *)v520, v519);
        v201 = nullptr;
        TiXmlHandle::FirstChild((TiXmlHandle::Self *)&v521, v520);
        if ( v521 != 0 && G4_VCALL<int>(v521, 44) != 0 )
          v201 = (TiXmlElement::Self *)G4_VCALL<int>(v521, 44);
        TiXmlElement::QueryIntAttribute(v201, "size", &v492);
        v552 = nullptr;
        v553[0] = v553;
        v553[1] = v553;
        v554 = nullptr;
        v555 = nullptr;
        v556 = 0;
        v557 = -1;
        v558 = 0;
        v559 = 100;
        v560 = -1;
        v561 = 0;
        v562 = 0;
        v564 = 0;
        v563 = 0xC12E847E00000000LL;
        v565 = nullptr;
        v408 = (char *)v492;
        v539 = nullptr;
        v540 = nullptr;
        v541 = nullptr;
        if ( v492 != 0 )
        {
          v327 = 56 * v492;
          v418 = (char *)VoxAllocInternal(
                           56 * v492,
                           0,
                           (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                           (int)(uintptr_t)("internal_new"),
                           181);
          v404 = &v418[v327];
          v541 = &v418[v327];
          v539 = v418;
          v540 = v418;
          v486 = v418;
          do
          {
            if ( v486 != nullptr )
            {
              s1j = v486 - v418;
              *(uint32_t *)v486 = (uint32_t)(uintptr_t)(v552);
              *((uint32_t *)v486 + 1) = (uint32_t)(uintptr_t)(v486 + 4);
              *((uint32_t *)v486 + 2) = (uint32_t)(uintptr_t)(v486 + 4);
              for ( k = (void **)v553[0]; k != v553; k = (void **)*k )
              {
                v329 = VoxAllocInternal(
                         0xCu,
                         0,
                         (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                         (int)(uintptr_t)("internal_new"),
                         181);
                if ( v329 != -8 )
                  *(uint32_t *)(v329 + 8) = (uint32_t)(uintptr_t)(k[2]);
                sub_1901920(v329, v486 + 4);
              }
              v330 = v418 + 12;
              v331 = v555 - (char *)((uint8_t *)v554);
              so = v418 + 12;
              *((uint32_t *)v486 + 3) = 0;
              *(uint32_t *)&v330[s1j + 4] = 0;
              *(uint32_t *)&v330[s1j + 8] = 0;
              v332 = 0;
              v333 = 0;
              v334 = v331 >> 2;
              if ( v334 != 0 )
              {
                v333 = 4 * v334;
                v332 = VoxAllocInternal(
                         4 * v334,
                         0,
                         (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                         (int)(uintptr_t)("internal_new"),
                         181);
              }
              *(uint32_t *)&so[s1j] = v332;
              *(uint32_t *)&so[s1j + 4] = v332;
              *(uint32_t *)&so[s1j + 8] = v332 + v333;
              v335 = (char *)v554;
              v336 = v555;
              v423 = (char *)v554;
              if ( v555 != v554 )
              {
                v337 = (uint32_t *)v332;
                do
                {
                  if ( v337 != nullptr )
                    *v337 = *(uint32_t *)v335;
                  v335 += 4;
                  ++v337;
                }
                while ( v336 != v335 );
                v332 += 4 * ((unsigned int)(v336 - (v423 + 4)) >> 2) + 4;
              }
              *(uint32_t *)&so[s1j + 4] = v332;
              *((uint16_t *)v486 + 12) = v557;
              *((uint16_t *)v486 + 13) = v558;
              *((uint16_t *)v486 + 14) = v559;
              *((uint16_t *)v486 + 15) = v560;
              *((uint32_t *)v486 + 8) = v561;
              *((uint32_t *)v486 + 9) = v562;
              *((uint64_t *)v486 + 5) = v563;
              *((uint32_t *)v486 + 12) = v564;
              *((uint32_t *)v486 + 13) = (uint32_t)(uintptr_t)(v565);
            }
            v486 += 56;
            --v408;
          }
          while ( v408 != nullptr );
          v202 = (char **)v418;
        }
        else
        {
          v541 = nullptr;
          v418 = nullptr;
          v404 = nullptr;
          v202 = nullptr;
        }
        v540 = v404;
        if ( &v539 != (char **)((char *)v451 + 60) )
        {
          v203 = (v404 - (char *)v202) >> 3;
          v429 = *((vox::EventXMLDef::Self **)v451 + 15);
          v401 = -1227133513 * v203;
          v478 = -1227133513 * v203;
          if ( -1227133513 * v203 <= (unsigned int)(-1227133513 * ((*((uint32_t *)v451 + 17) - (int)(uintptr_t)(v429)) >> 3)) )
          {
            v306 = (*((uint32_t *)v451 + 16) - (int)(uintptr_t)(v429)) >> 3;
            v411 = *((char **)v451 + 16);
            if ( v401 > (unsigned int)(-1227133513 * v306) )
            {
              v355 = (char *)&v202[2 * v306];
              v487 = -1227133513 * v306;
              if ( -1227133513 * v306 > 0 )
              {
                v356 = (const vox::EventXMLDef::Self *)v202;
                sq = (char *)v202;
                v357 = *((vox::EventXMLDef::Self **)v451 + 15);
                do
                {
                  v372 = v356;
                  v369 = v357;
                  v356 = (const vox::EventXMLDef::Self *)((char *)v356 + 56);
                  v357 = (vox::EventXMLDef::Self *)((char *)v357 + 56);
                  vox::EventXMLDef::opAssign(v369, v372);
                  --v487;
                }
                while ( v487 != 0 );
                v411 = *((char **)v451 + 16);
                v429 = *((vox::EventXMLDef::Self **)v451 + 15);
                v355 = &sq[(v411 - (char *)v429) & 0xFFFFFFF8];
              }
              v488 = v411;
              if ( v355 == v404 )
              {
                v220 = v451;
                v221 = (int)(uintptr_t)(v429) + 56 * v401;
              }
              else
              {
                do
                {
                  if ( v488 != nullptr )
                  {
                    v425 = (char *)(v488 - v411);
                    *(uint32_t *)v488 = *(uint32_t *)v355;
                    *((uint32_t *)v488 + 1) = (uint32_t)(uintptr_t)(v488 + 4);
                    *((uint32_t *)v488 + 2) = (uint32_t)(uintptr_t)(v488 + 4);
                    for ( m = *((char **)v355 + 1); v355 + 4 != m; m = *(char **)m )
                    {
                      v359 = VoxAllocInternal(
                               0xCu,
                               0,
                               (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                               (int)(uintptr_t)("internal_new"),
                               181);
                      if ( v359 != -8 )
                        *(uint32_t *)(v359 + 8) = *((uint32_t *)m + 2);
                      sub_1901920(v359, v488 + 4);
                    }
                    v360 = v411 + 12;
                    v361 = *((uint32_t *)v355 + 4) - *((uint32_t *)v355 + 3);
                    s1l = v411 + 12;
                    v437 = nullptr;
                    *((uint32_t *)v488 + 3) = 0;
                    *(uint32_t *)&v360[(uint32_t)(uintptr_t)(v425) + 4] = 0;
                    *(uint32_t *)&v360[(uint32_t)(uintptr_t)(v425) + 8] = 0;
                    v362 = 0;
                    v363 = v361 >> 2;
                    if ( v363 != 0 )
                    {
                      v362 = 4 * v363;
                      v437 = (vox::EventXMLDef::Self *)VoxAllocInternal(
                                                   4 * v363,
                                                   0,
                                                   (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                                                   (int)(uintptr_t)("internal_new"),
                                                   181);
                    }
                    v364 = v488 - v411;
                    v365 = v437;
                    *(uint32_t *)&s1l[(uint32_t)(uintptr_t)(v425)] = (uint32_t)(uintptr_t)(v437);
                    *(uint32_t *)&s1l[(uint32_t)(uintptr_t)(v425) + 4] = (uint32_t)(uintptr_t)(v437);
                    *(uint32_t *)&s1l[(uint32_t)(uintptr_t)(v425) + 8] = (uint32_t)(uintptr_t)((char *)v437 + v362);
                    v366 = *((char **)v355 + 3);
                    v367 = *((char **)v355 + 4);
                    sr = v366;
                    if ( v367 != v366 )
                    {
                      do
                      {
                        if ( v365 != nullptr )
                          *(uint32_t *)v365 = *(uint32_t *)v366;
                        v366 += 4;
                        v365 = (vox::EventXMLDef::Self *)((char *)v365 + 4);
                      }
                      while ( v367 != v366 );
                      v364 = v488 - v411;
                      v365 = (vox::EventXMLDef::Self *)((char *)v437 + 4 * ((unsigned int)(v367 - (sr + 4)) >> 2) + 4);
                    }
                    *(uint32_t *)&s1l[v364 + 4] = (uint32_t)(uintptr_t)(v365);
                    *((uint16_t *)v488 + 12) = *((uint16_t *)v355 + 12);
                    *((uint16_t *)v488 + 13) = *((uint16_t *)v355 + 13);
                    *((uint16_t *)v488 + 14) = *((uint16_t *)v355 + 14);
                    *((uint16_t *)v488 + 15) = *((uint16_t *)v355 + 15);
                    *((uint32_t *)v488 + 8) = *((uint32_t *)v355 + 8);
                    *((uint32_t *)v488 + 9) = *((uint32_t *)v355 + 9);
                    *((uint64_t *)v488 + 5) = *((uint64_t *)v355 + 5);
                    *((uint32_t *)v488 + 12) = *((uint32_t *)v355 + 12);
                    *((uint32_t *)v488 + 13) = *((uint32_t *)v355 + 13);
                  }
                  v355 += 56;
                  v488 += 56;
                }
                while ( v404 != v355 );
                v220 = v451;
                v221 = *((uint32_t *)v451 + 15) + 56 * v401;
              }
            }
            else
            {
              if ( v401 > 0 )
              {
                v307 = *((vox::EventXMLDef::Self **)v451 + 15);
                do
                {
                  v371 = (const vox::EventXMLDef::Self *)v202;
                  v368 = v307;
                  v202 += 14;
                  v307 = (vox::EventXMLDef::Self *)((char *)v307 + 56);
                  vox::EventXMLDef::opAssign(v368, v371);
                  --v478;
                }
                while ( v478 != 0 );
                v429 = (vox::EventXMLDef::Self *)((char *)v429 + 56 * v401);
              }
              v484 = v429;
              if ( v411 == (char *)v429 )
              {
                v220 = v451;
                v221 = *((uint32_t *)v451 + 15) + 56 * v401;
              }
              else
              {
                do
                {
                  if ( *(uint32_t *)v484 != 0 )
                    VoxFreeInternal(*(void **)v484);
                  v308 = *((void ***)v484 + 13);
                  if ( v308 != nullptr )
                  {
                    if ( *v308 != nullptr )
                    {
                      VoxFreeInternal(*v308);
                      v308 = *((void ***)v484 + 13);
                    }
                    VoxFreeInternal(v308);
                  }
                  v309 = v484;
                  if ( *((uint32_t *)v484 + 3) != 0 )
                  {
                    VoxFreeInternal(*((void **)v484 + 3));
                    v309 = v484;
                  }
                  v310 = (uint32_t *)((char *)v309 + 4);
                  v311 = *((uint32_t **)v484 + 1);
                  if ( v310 != v311 )
                  {
                    while ( 1 )
                    {
                      v312 = (uint32_t *)*v311;
                      VoxFreeInternal(v311);
                      if ( v310 == v312 )
                        break;
                      v311 = v312;
                    }
                  }
                  v484 = (vox::EventXMLDef::Self *)((char *)v484 + 56);
                }
                while ( v411 != (char *)v484 );
                v220 = v451;
                v221 = *((uint32_t *)v451 + 15) + 56 * v401;
              }
            }
          }
          else
          {
            v398 = nullptr;
            v409 = nullptr;
            if ( -1227133513 * v203 != 0 )
            {
              v398 = (char *)(8 * v203);
              v409 = (char *)VoxAllocInternal(
                               8 * v203,
                               0,
                               (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                               (int)(uintptr_t)("internal_new"),
                               181);
            }
            if ( v202 != (char **)v404 )
            {
              v479 = v409;
              do
              {
                if ( v479 != nullptr )
                {
                  v421 = (char *)(v479 - v409);
                  *(uint32_t *)v479 = (uint32_t)(uintptr_t)(*v202);
                  *((uint32_t *)v479 + 1) = (uint32_t)(uintptr_t)(v479 + 4);
                  *((uint32_t *)v479 + 2) = (uint32_t)(uintptr_t)(v479 + 4);
                  for ( n = v202[1]; v202 + 1 != (char **)n; n = *(char **)n )
                  {
                    v205 = VoxAllocInternal(
                             0xCu,
                             0,
                             (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                             (int)(uintptr_t)("internal_new"),
                             181);
                    if ( v205 != -8 )
                      *(uint32_t *)(v205 + 8) = *((uint32_t *)n + 2);
                    sub_1901920(v205, v479 + 4);
                  }
                  v206 = v409 + 12;
                  v207 = v202[4] - v202[3];
                  s1f = v409 + 12;
                  v430 = nullptr;
                  *((uint32_t *)v479 + 3) = 0;
                  *(uint32_t *)&v206[(uint32_t)(uintptr_t)(v421) + 4] = 0;
                  *(uint32_t *)&v206[(uint32_t)(uintptr_t)(v421) + 8] = 0;
                  v208 = 0;
                  v209 = v207 >> 2;
                  if ( v209 != 0 )
                  {
                    v208 = 4 * v209;
                    v430 = (vox::EventXMLDef::Self *)VoxAllocInternal(
                                                 4 * v209,
                                                 0,
                                                 (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                                                 (int)(uintptr_t)("internal_new"),
                                                 181);
                  }
                  v210 = v479 - v409;
                  v211 = v430;
                  *(uint32_t *)&s1f[(uint32_t)(uintptr_t)(v421)] = (uint32_t)(uintptr_t)(v430);
                  *(uint32_t *)&s1f[(uint32_t)(uintptr_t)(v421) + 4] = (uint32_t)(uintptr_t)(v430);
                  *(uint32_t *)&s1f[(uint32_t)(uintptr_t)(v421) + 8] = (uint32_t)(uintptr_t)((char *)v430 + v208);
                  v212 = v202[3];
                  v213 = v202[4];
                  sj = v212;
                  if ( v213 != v212 )
                  {
                    do
                    {
                      if ( v211 != nullptr )
                        *(uint32_t *)v211 = *(uint32_t *)v212;
                      v212 += 4;
                      v211 = (vox::EventXMLDef::Self *)((char *)v211 + 4);
                    }
                    while ( v213 != v212 );
                    v210 = v479 - v409;
                    v211 = (vox::EventXMLDef::Self *)((char *)v430 + 4 * ((unsigned int)(v213 - (sj + 4)) >> 2) + 4);
                  }
                  *(uint32_t *)&s1f[v210 + 4] = (uint32_t)(uintptr_t)(v211);
                  *((uint16_t *)v479 + 12) = *((uint16_t *)v202 + 12);
                  *((uint16_t *)v479 + 13) = *((uint16_t *)v202 + 13);
                  *((uint16_t *)v479 + 14) = *((uint16_t *)v202 + 14);
                  *((uint16_t *)v479 + 15) = *((uint16_t *)v202 + 15);
                  *((uint32_t *)v479 + 8) = (uint32_t)(uintptr_t)(v202[8]);
                  *((uint32_t *)v479 + 9) = (uint32_t)(uintptr_t)(v202[9]);
                  *((uint64_t *)v479 + 5) = *((uint64_t *)v202 + 5);
                  *((uint32_t *)v479 + 12) = (uint32_t)(uintptr_t)(v202[12]);
                  *((uint32_t *)v479 + 13) = (uint32_t)(uintptr_t)(v202[13]);
                }
                v202 += 14;
                v479 += 56;
              }
              while ( v404 != (char *)v202 );
            }
            v214 = *((vox::EventXMLDef::Self **)v451 + 15);
            sk = *((char **)v451 + 16);
            v431 = v214;
            if ( sk != (char *)v214 )
            {
              v480 = *((uint32_t *)v451 + 15);
              s1g = (char *)v214 + 4;
              do
              {
                if ( *(uint32_t *)v480 != 0 )
                  VoxFreeInternal(*(void **)v480);
                v215 = *(void ***)(v480 + 52);
                if ( v215 != nullptr )
                {
                  if ( *v215 != nullptr )
                  {
                    VoxFreeInternal(*v215);
                    v215 = *(void ***)(v480 + 52);
                  }
                  VoxFreeInternal(v215);
                }
                v216 = v480;
                if ( *(uint32_t *)(v480 + 12) != 0 )
                {
                  VoxFreeInternal(*(void **)(v480 + 12));
                  v216 = v480;
                }
                v217 = (uint32_t *)(v216 + 4);
                v218 = *(uint32_t **)&s1g[v480 - (uint32_t)(uintptr_t)(v431)];
                if ( v217 != v218 )
                {
                  while ( 1 )
                  {
                    v219 = (uint32_t *)*v218;
                    VoxFreeInternal(v218);
                    if ( v217 == v219 )
                      break;
                    v218 = v219;
                  }
                }
                v480 += 56;
              }
              while ( sk != (char *)v480 );
              v431 = *((vox::EventXMLDef::Self **)v451 + 15);
            }
            if ( v431 != nullptr )
              VoxFreeInternal(v431);
            v220 = v451;
            *((uint32_t *)v451 + 15) = (uint32_t)(uintptr_t)(v409);
            v221 = (int)(uintptr_t)(uintptr_t)(&v398[(uint32_t)(uintptr_t)(v409)]);
            *((uint32_t *)v451 + 17) = (uint32_t)(uintptr_t)(&v398[(uint32_t)(uintptr_t)(v409)]);
          }
          *((uint32_t *)v220 + 16) = v221;
        }
        if ( v418 != v404 )
        {
          v481 = v418;
          do
          {
            if ( *(uint32_t *)v481 != 0 )
              VoxFreeInternal(*(void **)v481);
            v222 = *((void ***)v481 + 13);
            if ( v222 != nullptr )
            {
              if ( *v222 != nullptr )
              {
                VoxFreeInternal(*v222);
                v222 = *((void ***)v481 + 13);
              }
              VoxFreeInternal(v222);
            }
            v223 = v481;
            if ( *((uint32_t *)v481 + 3) != 0 )
            {
              VoxFreeInternal(*((void **)v481 + 3));
              v223 = v481;
            }
            v224 = (uint32_t *)(v223 + 4);
            v225 = *((uint32_t **)v481 + 1);
            if ( v225 != v224 )
            {
              while ( 1 )
              {
                v226 = (uint32_t *)*v225;
                VoxFreeInternal(v225);
                if ( v226 == v224 )
                  break;
                v225 = v226;
              }
            }
            v481 += 56;
          }
          while ( v481 != v404 );
        }
        if ( v418 != nullptr )
          VoxFreeInternal(v418);
        if ( v552 != nullptr )
          VoxFreeInternal(v552);
        v227 = v565;
        if ( v565 != nullptr )
        {
          if ( *(uint32_t *)v565 != 0 )
          {
            VoxFreeInternal(*(void **)v565);
            v227 = v565;
          }
          VoxFreeInternal(v227);
        }
        if ( v554 != nullptr )
          VoxFreeInternal(v554);
        v228 = (void **)v553[0];
        if ( v553[0] != v553 )
        {
          while ( 1 )
          {
            v229 = (void **)*v228;
            VoxFreeInternal(v228);
            if ( v229 == v553 )
              break;
            v228 = v229;
          }
        }
        v230 = v492;
        v542 = nullptr;
        v543 = nullptr;
        v544 = nullptr;
        if ( v492 != 0 )
        {
          v388 = (vox::VoxSoundPackXMLInternalData::Self *)(8 * v492);
          v319 = (char *)VoxAllocInternal(
                           8 * v492,
                           0,
                           (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                           (int)(uintptr_t)("internal_new"),
                           181);
          v231 = v319;
          v542 = v319;
          v432 = (vox::EventXMLDef::Self *)((vox::VoxSoundPackXMLInternalData::Self *)((char *)v388 + (uint32_t)(uintptr_t)(v319)));
          v544 = (char *)v388 + (uint32_t)(uintptr_t)(v319);
          do
          {
            if ( v319 != nullptr )
            {
              *(uint32_t *)v319 = 0;
              *((uint32_t *)v319 + 1) = -1;
            }
            v319 += 8;
            --v230;
          }
          while ( v230 != 0 );
          sl = v231;
        }
        else
        {
          v544 = nullptr;
          sl = nullptr;
          v432 = nullptr;
          v231 = nullptr;
        }
        v543 = v432;
        if ( (char **)((char *)v451 + 72) == &v542 )
          goto LABEL_419;
        v232 = (v432 - (vox::EventXMLDef::Self *)v231) >> 3;
        v482 = v232;
        v233 = *((char **)v451 + 18);
        if ( v232 > (unsigned int)((*((uint32_t *)v451 + 20) - (int)(uintptr_t)(v233)) >> 3) )
        {
          v234 = 0;
          s1h = 0;
          if ( v232 != 0 )
          {
            s1h = 8 * v232;
            v234 = VoxAllocInternal(
                     8 * v232,
                     0,
                     (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                     (int)(uintptr_t)("internal_new"),
                     181);
          }
          if ( v231 != (char *)v432 )
          {
            v235 = (uint32_t *)v234;
            do
            {
              if ( v235 != nullptr )
              {
                v236 = *(uint32_t *)v231;
                v235[1] = *((uint32_t *)v231 + 1);
                *v235 = v236;
              }
              v231 += 8;
              v235 += 2;
            }
            while ( v432 != (vox::EventXMLDef::Self *)v231 );
          }
          if ( *((uint32_t *)v451 + 18) != 0 )
            VoxFreeInternal(*((void **)v451 + 18));
          v237 = v451;
          *((uint32_t *)v451 + 18) = v234;
          v238 = s1h + v234;
          *((uint32_t *)v451 + 20) = v238;
          goto LABEL_418;
        }
        v298 = *((char **)v451 + 19);
        v299 = (v298 - v233) >> 3;
        if ( v232 > (unsigned int)v299 )
        {
          v344 = (vox::EventXMLDef::Self *)&v231[8 * v299];
          if ( v299 > 0 )
          {
            v345 = v231;
            do
            {
              --v299;
              *(uint32_t *)v233 = *(uint32_t *)v345;
              *((uint32_t *)v233 + 1) = *((uint32_t *)v345 + 1);
              v345 += 8;
              v233 += 8;
            }
            while ( v299 != 0 );
            v298 = *((char **)v451 + 19);
            v233 = *((char **)v451 + 18);
            v344 = (vox::EventXMLDef::Self *)&v231[(v298 - v233) & 0xFFFFFFF8];
          }
          if ( v432 != v344 )
          {
            do
            {
              if ( v298 != nullptr )
              {
                v346 = *(uint32_t *)v344;
                *((uint32_t *)v298 + 1) = *((uint32_t *)v344 + 1);
                *(uint32_t *)v298 = v346;
              }
              v344 = (vox::EventXMLDef::Self *)((char *)v344 + 8);
              v298 += 8;
            }
            while ( v432 != v344 );
            goto LABEL_532;
          }
        }
        else if ( v232 > 0 )
        {
          do
          {
            --v232;
            *(uint32_t *)v233 = *(uint32_t *)v231;
            *((uint32_t *)v233 + 1) = *((uint32_t *)v231 + 1);
            v231 += 8;
            v233 += 8;
          }
          while ( v232 != 0 );
LABEL_532:
          v237 = v451;
          v238 = *((uint32_t *)v451 + 18) + 8 * v482;
LABEL_418:
          *((uint32_t *)v237 + 19) = v238;
LABEL_419:
          if ( sl != nullptr )
            VoxFreeInternal(sl);
          *(uint32_t *)v522 = (uint32_t)(uintptr_t)(v566);
          TiXmlHandle::FirstChild((TiXmlHandle::Self *)v523, v522);
          TiXmlHandle::FirstChild((TiXmlHandle::Self *)v524, v523);
          TiXmlHandle::FirstChild((TiXmlHandle::Self *)&v525, v524);
          if ( v525 == 0
            || G4_VCALL<int>(v525, 44) == 0
            || (sm = (char *)G4_VCALL<int>(v525, 44)) == nullptr )
          {
LABEL_466:
            v3 = 1;
            vox::VoxSoundPackXMLInternalData::OrganizeHashTable(v451, (unsigned int **)v451 + 18, 0);
            goto LABEL_2;
          }
          v483 = 0;
          v419 = 0;
          v239 = (TiXmlElement::Self *)sm;
          while ( 1 )
          {
            v240 = (const char *)TiXmlElement::Attribute(v239, "label");
            v241 = v240;
            if ( v240 != nullptr )
            {
              v242 = (uint32_t *)(*((uint32_t *)v451 + 15) + v483);
              v243 = strlen(v240);
              *v242 = VoxAllocInternal(
                        v243 + 1,
                        0,
                        (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_soundpack_xml.cpp"),
                        (int)(uintptr_t)("LoadXML_Tiny"),
                        2086);
              v244 = *(char **)(*((uint32_t *)v451 + 15) + v483);
              if ( v244 != nullptr )
              {
                strcpy(v244, v241);
                v245 = (char *)vox::VoxSoundPackXMLInternalData::GetLowerCaseHashLabel(
                                 v451,
                                 *(char **)(*((uint32_t *)v451 + 15) + v483));
                v246 = (int *)(*((uint32_t *)v451 + 18) + 8 * v419);
                *v246 = vox::VoxSoundPackXMLInternalData::Hash(v451, v245);
                *(uint32_t *)(*((uint32_t *)v451 + 18) + 8 * v419 + 4) = v419;
              }
            }
            else
            {
              v296 = (uint32_t *)(*((uint32_t *)v451 + 15) + v483);
              *v296 = VoxAllocInternal(
                        1u,
                        0,
                        (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_soundpack_xml.cpp"),
                        (int)(uintptr_t)("LoadXML_Tiny"),
                        2100);
              v297 = *(uint8_t **)(*((uint32_t *)v451 + 15) + v483);
              if ( v297 != nullptr )
                *v297 = 0;
            }
            v247 = (const char *)TiXmlElement::Attribute((TiXmlElement::Self *)sm, "type");
            if ( v247 != nullptr )
            {
              if ( strcmp(v247, "random") == 0 )
              {
                *(uint16_t *)(*((uint32_t *)v451 + 15) + v483 + 24) = 0;
              }
              else if ( strcmp(v247, "playlist") == 0 )
              {
                *(uint16_t *)(*((uint32_t *)v451 + 15) + v483 + 24) = 1;
              }
              else if ( strcmp(v247, "pl_random") == 0 )
              {
                *(uint16_t *)(*((uint32_t *)v451 + 15) + v483 + 24) = 2;
              }
            }
            v248 = (char *)TiXmlElement::Attribute((TiXmlElement::Self *)sm, "value");
            if ( v248 != nullptr )
            {
              for ( ii = strtok(v248, " ,"); ii != nullptr; ii = strtok(nullptr, " ,") )
              {
                Uid = vox::VoxSoundPackXMLInternalData::GetUid(v451, ii, 1);
                if ( Uid >= 0 )
                {
                  v251 = *((uint32_t *)v451 + 15) + v483;
                  v252 = *(int **)(v251 + 16);
                  if ( v252 == *(int **)(v251 + 20) )
                  {
                    v397 = 4;
                    v289 = ((int)(uintptr_t)(v252) - *(uint32_t *)(v251 + 12)) >> 2;
                    if ( v289 != 0 )
                    {
                      if ( v289 > 2 * v289 || 2 * v289 > 0x3FFFFFFF )
                        v397 = -4;
                      else
                        v397 = 8 * v289;
                    }
                    v387 = *(vox::VoxSoundPackXMLInternalData::Self **)(v251 + 16);
                    v392 = ((int)(uintptr_t)(v252) - *(uint32_t *)(v251 + 12)) >> 2;
                    v395 = (char *)VoxAllocInternal(
                                     v397,
                                     0,
                                     (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                                     (int)(uintptr_t)("internal_new"),
                                     181);
                    v394 = v395 + 4;
                    v290 = (int *)&v395[4 * v392];
                    if ( v290 != nullptr )
                      *v290 = Uid;
                    v291 = *(char **)(v251 + 12);
                    v396 = v291;
                    if ( v387 != (vox::VoxSoundPackXMLInternalData::Self *)v291 )
                    {
                      v292 = v395;
                      do
                      {
                        if ( v292 != nullptr )
                          *(uint32_t *)v292 = *(uint32_t *)v291;
                        v291 += 4;
                        v292 += 4;
                      }
                      while ( v387 != (vox::VoxSoundPackXMLInternalData::Self *)v291 );
                      v394 = &v395[4 * ((unsigned int)(v387 - (vox::VoxSoundPackXMLInternalData::Self *)(v396 + 4)) >> 2) + 8];
                    }
                    v293 = *(vox::VoxSoundPackXMLInternalData::Self **)(v251 + 16);
                    if ( v387 != v293 )
                    {
                      v294 = v387;
                      v295 = v394;
                      do
                      {
                        if ( v295 != nullptr )
                          *(uint32_t *)v295 = *(uint32_t *)v294;
                        v294 = (vox::VoxSoundPackXMLInternalData::Self *)((char *)v294 + 4);
                        v295 += 4;
                      }
                      while ( v293 != v294 );
                      v394 += 4 * ((unsigned int)(v293 - (vox::VoxSoundPackXMLInternalData::Self *)((char *)v387 + 4)) >> 2)
                            + 4;
                    }
                    if ( *(uint32_t *)(v251 + 12) != 0 )
                      VoxFreeInternal(*(void **)(v251 + 12));
                    *(uint32_t *)(v251 + 12) = (uint32_t)(uintptr_t)(v395);
                    *(uint32_t *)(v251 + 16) = (uint32_t)(uintptr_t)(v394);
                    *(uint32_t *)(v251 + 20) = (uint32_t)(uintptr_t)(&v395[v397]);
                  }
                  else
                  {
                    v253 = 0;
                    if ( v252 != nullptr )
                    {
                      *v252 = Uid;
                      v253 = *(uint32_t *)(v251 + 16);
                    }
                    *(uint32_t *)(v251 + 16) = v253 + 4;
                  }
                }
              }
            }
            v254 = (char *)TiXmlElement::Attribute((TiXmlElement::Self *)sm, "params");
            if ( v254 != nullptr )
            {
              v255 = strtok(v254, " ;");
              if ( v255 != nullptr )
              {
                v256 = (int)(uintptr_t)(atoi(v255));
                v257 = *((uint32_t *)v451 + 15) + v483;
                v258 = (*(uint32_t *)(v257 + 16) - *(uint32_t *)(v257 + 12)) >> 2;
                if ( v256 < v258 )
                  LOWORD(v258) = v256;
                *(uint16_t *)(v257 + 26) = v258;
                v259 = strtok(nullptr, " ;");
                if ( v259 != nullptr )
                {
                  v260 = (int)(uintptr_t)(atoi(v259));
                  v261 = 100;
                  if ( v260 <= 100 )
                    v261 = v260;
                  *(uint16_t *)(*((uint32_t *)v451 + 15) + v483 + 28) = v261;
                }
              }
            }
            if ( TiXmlElement::QueryDoubleAttribute((TiXmlElement::Self *)sm, "cooldownvalue", &v526) == 0 )
            {
              v262 = v526;
              *(float *)(*((uint32_t *)v451 + 15) + v483 + 32) = v262;
            }
            v263 = (const char *)TiXmlElement::Attribute((TiXmlElement::Self *)sm, "cooldowntype");
            if ( v263 != nullptr )
            {
              if ( strcmp(v263, "time") == 0 )
              {
                *(uint32_t *)(*((uint32_t *)v451 + 15) + v483 + 36) = 0;
              }
              else if ( strcmp(v263, "plays") == 0 )
              {
                *(uint32_t *)(*((uint32_t *)v451 + 15) + v483 + 36) = 1;
              }
            }
            v264 = (const char *)TiXmlElement::Attribute((TiXmlElement::Self *)sm, "customparam");
            v265 = v264;
            if ( v264 != nullptr )
            {
              v266 = *v264;
              v267 = 0;
              if ( v266 != 0 )
              {
                v268 = v265;
                LOBYTE(v267) = 1;
                do
                {
                  v179 = v266 == 44;
                  v266 = *++v268;
                  if ( v179 )
                    ++v267;
                }
                while ( v266 != 0 );
              }
              *(uint32_t *)(*((uint32_t *)v451 + 15) + v483 + 48) = v267;
              v269 = *((uint32_t *)v451 + 15) + v483;
              *(uint32_t *)(v269 + 52) = VoxAllocInternal(
                                         4 * *(uint32_t *)(v269 + 48),
                                         0,
                                         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_soundpack_xml.cpp"),
                                         (int)(uintptr_t)("LoadXML_Tiny"),
                                         2194);
              v270 = *((uint32_t *)v451 + 15) + v483;
              v271 = *(uint32_t **)(v270 + 52);
              if ( v271 == nullptr )
              {
                *(uint32_t *)(v270 + 48) = 0;
                v275 = *((uint32_t *)v451 + 15) + v483;
                goto LABEL_463;
              }
              v272 = strlen(v265);
              *v271 = VoxAllocInternal(
                        v272 + 1,
                        0,
                        (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_soundpack_xml.cpp"),
                        (int)(uintptr_t)("LoadXML_Tiny"),
                        2198);
              v273 = *((uint32_t *)v451 + 15) + v483;
              v274 = **(char ***)(v273 + 52);
              if ( v274 != nullptr )
              {
                strcpy(v274, v265);
                v275 = *((uint32_t *)v451 + 15) + v483;
                if ( *(int *)(v275 + 48) > 1 )
                {
                  v276 = 1;
                  do
                  {
                    v277 = *(uint32_t *)(v275 + 52);
                    v278 = (char *)(strchr(*(const char **)(v277 + 4 * v276 - 4), 44));
                    *(uint32_t *)(v277 + 4 * v276) = (uint32_t)(uintptr_t)(v278 + 1);
                    *v278 = 0;
                    ++v276;
                    v275 = *((uint32_t *)v451 + 15) + v483;
                  }
                  while ( *(uint32_t *)(v275 + 48) > v276 );
                }
LABEL_463:
                if ( *(uint16_t *)(v275 + 24) == 2 )
                  goto LABEL_522;
                goto LABEL_464;
              }
              *(uint32_t *)(v273 + 48) = 0;
            }
            v275 = *((uint32_t *)v451 + 15) + v483;
            if ( *(uint16_t *)(v275 + 24) == 2 )
            {
LABEL_522:
              *(uint16_t *)(v275 + 30) = lrand48()
                                    % ((*(uint32_t *)(*((uint32_t *)v451 + 15) + v483 + 16)
                                      - *(uint32_t *)(*((uint32_t *)v451 + 15) + v483 + 12)) >> 2);
              goto LABEL_465;
            }
LABEL_464:
            *(uint16_t *)(v275 + 30) = (*(uint32_t *)(v275 + 16) - *(uint32_t *)(v275 + 12)) >> 2;
LABEL_465:
            ++v419;
            v239 = (TiXmlElement::Self *)TiXmlNode::NextSiblingElement((TiXmlNode::Self *)sm);
            v483 += 56;
            sm = (char *)v239;
            if ( v239 == nullptr )
              goto LABEL_466;
          }
        }
        v238 = (int)(uintptr_t)(&v233[8 * v482]);
        v237 = v451;
        goto LABEL_418;
      }
      v102 = (s1d - v101) >> 3;
      v476 = v102;
      v103 = *((char **)v451 + 21);
      if ( v102 > (unsigned int)((*((uint32_t *)v451 + 23) - (int)(uintptr_t)(v103)) >> 3) )
      {
        v104 = 0;
        v420 = nullptr;
        if ( v102 != 0 )
        {
          v420 = (char *)(8 * v102);
          v104 = VoxAllocInternal(
                   8 * v102,
                   0,
                   (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                   (int)(uintptr_t)("internal_new"),
                   181);
        }
        if ( v101 != s1d )
        {
          v105 = (uint32_t *)v104;
          do
          {
            if ( v105 != nullptr )
            {
              v106 = *(uint32_t *)v101;
              v105[1] = *((uint32_t *)v101 + 1);
              *v105 = v106;
            }
            v101 += 8;
            v105 += 2;
          }
          while ( s1d != v101 );
        }
        if ( *((uint32_t *)v451 + 21) != 0 )
          VoxFreeInternal(*((void **)v451 + 21));
        v107 = v451;
        *((uint32_t *)v451 + 21) = v104;
        v108 = (int)(uintptr_t)(&v420[v104]);
        *((uint32_t *)v451 + 23) = v108;
        goto LABEL_231;
      }
      v300 = *((char **)v451 + 22);
      v301 = (v300 - v103) >> 3;
      if ( v102 > (unsigned int)v301 )
      {
        v347 = &v101[8 * v301];
        if ( v301 > 0 )
        {
          v348 = v101;
          do
          {
            --v301;
            *(uint32_t *)v103 = *(uint32_t *)v348;
            *((uint32_t *)v103 + 1) = *((uint32_t *)v348 + 1);
            v348 += 8;
            v103 += 8;
          }
          while ( v301 != 0 );
          v300 = *((char **)v451 + 22);
          v103 = *((char **)v451 + 21);
          v347 = &v101[(v300 - v103) & 0xFFFFFFF8];
        }
        if ( v347 != s1d )
        {
          do
          {
            if ( v300 != nullptr )
            {
              v349 = *(uint32_t *)v347;
              *((uint32_t *)v300 + 1) = *((uint32_t *)v347 + 1);
              *(uint32_t *)v300 = v349;
            }
            v347 += 8;
            v300 += 8;
          }
          while ( s1d != v347 );
          goto LABEL_536;
        }
      }
      else if ( v102 > 0 )
      {
        do
        {
          --v102;
          *(uint32_t *)v103 = *(uint32_t *)v101;
          *((uint32_t *)v103 + 1) = *((uint32_t *)v101 + 1);
          v101 += 8;
          v103 += 8;
        }
        while ( v102 != 0 );
LABEL_536:
        v107 = v451;
        v108 = *((uint32_t *)v451 + 21) + 8 * v476;
LABEL_231:
        *((uint32_t *)v107 + 22) = v108;
        goto LABEL_232;
      }
      v108 = (int)(uintptr_t)(&v103[8 * v476]);
      v107 = v451;
      goto LABEL_231;
    }
    v25 = (v471 - v24) >> 4;
    s1 = -858993459 * v25;
    s = (char *)(-858993459 * v25);
    v26 = *((char **)v451 + 9);
    if ( -858993459 * v25 > (unsigned int)(-858993459 * ((*((uint32_t *)v451 + 11) - (int)(uintptr_t)(v26)) >> 4)) )
    {
      v402 = nullptr;
      v406 = nullptr;
      if ( s1 != 0 )
      {
        v402 = (char *)(16 * v25);
        v406 = (char *)VoxAllocInternal(
                         16 * v25,
                         0,
                         (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                         (int)(uintptr_t)("internal_new"),
                         181);
      }
      if ( v24 != v471 )
      {
        v27 = v406;
        do
        {
          if ( v27 != nullptr )
          {
            g4_std::string::construct_copy(v27, v24);
            g4_std::string::construct_copy(v27 + 4, (char *)v24 + 4);
            *((uint32_t *)v27 + 2) = *((uint32_t *)v24 + 2);
            *((uint32_t *)v27 + 3) = *((uint32_t *)v24 + 3);
            *((uint32_t *)v27 + 4) = *((uint32_t *)v24 + 4);
            v27[20] = *((uint8_t *)v24 + 20);
            *((uint32_t *)v27 + 6) = *((uint32_t *)v24 + 6);
            *((uint32_t *)v27 + 7) = *((uint32_t *)v24 + 7);
            *((uint32_t *)v27 + 8) = *((uint32_t *)v24 + 8);
            *((uint32_t *)v27 + 9) = *((uint32_t *)v24 + 9);
            *((uint32_t *)v27 + 10) = *((uint32_t *)v24 + 10);
            *((uint32_t *)v27 + 11) = *((uint32_t *)v24 + 11);
            *((uint32_t *)v27 + 12) = *((uint32_t *)v24 + 12);
            *((uint32_t *)v27 + 13) = *((uint32_t *)v24 + 13);
            *((uint32_t *)v27 + 14) = *((uint32_t *)v24 + 14);
            v27[60] = *((uint8_t *)v24 + 60);
            *((uint32_t *)v27 + 16) = *((uint32_t *)v24 + 16);
            *((uint32_t *)v27 + 17) = *((uint32_t *)v24 + 17);
            v27[72] = *((uint8_t *)v24 + 72);
            *((uint32_t *)v27 + 19) = *((uint32_t *)v24 + 19);
          }
          v24 = (vox::EventXMLDef::Self *)((char *)v24 + 80);
          v27 += 80;
        }
        while ( v471 != v24 );
      }
      v28 = *((char **)v451 + 9);
      v472 = *((char **)v451 + 10);
      if ( v472 != v28 )
      {
        v29 = *((char **)v451 + 9);
        sa = v29;
        do
        {
          v30 = *(uint32_t *)&v28[v29 - sa + 4];
          if ( (uint32_t *)(v30 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v30 - 12));
          }
          v31 = (uint32_t *)(*(uint32_t *)v29 - 12);
          if ( v31 != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v29 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v31);
          }
          v29 += 80;
        }
        while ( v472 != v29 );
        v28 = *((char **)v451 + 9);
      }
      if ( v28 != nullptr )
        VoxFreeInternal(v28);
      v32 = v451;
      v33 = (int)(uintptr_t)(uintptr_t)(&v402[(uint32_t)(uintptr_t)(v406)]);
      *((uint32_t *)v451 + 9) = (uint32_t)(uintptr_t)(v406);
      *((uint32_t *)v451 + 11) = (uint32_t)(uintptr_t)(&v402[(uint32_t)(uintptr_t)(v406)]);
LABEL_43:
      v426 = v527;
      v471 = v528;
      v34 = v32;
LABEL_44:
      *((uint32_t *)v34 + 10) = v33;
      goto LABEL_45;
    }
    v313 = *((char **)v451 + 10);
    v314 = (v313 - v26) >> 4;
    if ( s1 > (unsigned int)(-858993459 * v314) )
    {
      v350 = 16 * v314;
      v351 = (char *)v24 + 16 * v314;
      sp = -858993459 * (v350 >> 4);
      if ( sp > 0 )
      {
        v352 = v24;
        v424 = (char *)v24;
        v353 = *((uint32_t *)v451 + 9);
        do
        {
          g4_std::string::assign_str(v353, v352);
          g4_std::string::assign_str(v353 + 4, (char *)v352 + 4);
          *(uint32_t *)(v353 + 8) = *((uint32_t *)v352 + 2);
          *(uint32_t *)(v353 + 12) = *((uint32_t *)v352 + 3);
          *(uint32_t *)(v353 + 16) = *((uint32_t *)v352 + 4);
          *(uint8_t *)(v353 + 20) = *((uint8_t *)v352 + 20);
          *(uint32_t *)(v353 + 24) = *((uint32_t *)v352 + 6);
          *(uint32_t *)(v353 + 28) = *((uint32_t *)v352 + 7);
          *(uint32_t *)(v353 + 32) = *((uint32_t *)v352 + 8);
          *(uint32_t *)(v353 + 36) = *((uint32_t *)v352 + 9);
          *(uint32_t *)(v353 + 40) = *((uint32_t *)v352 + 10);
          *(uint32_t *)(v353 + 44) = *((uint32_t *)v352 + 11);
          *(uint32_t *)(v353 + 48) = *((uint32_t *)v352 + 12);
          *(uint32_t *)(v353 + 52) = *((uint32_t *)v352 + 13);
          *(uint32_t *)(v353 + 56) = *((uint32_t *)v352 + 14);
          *(uint8_t *)(v353 + 60) = *((uint8_t *)v352 + 60);
          *(uint32_t *)(v353 + 64) = *((uint32_t *)v352 + 16);
          *(uint32_t *)(v353 + 68) = *((uint32_t *)v352 + 17);
          *(uint8_t *)(v353 + 72) = *((uint8_t *)v352 + 72);
          v179 = sp-- == 1;
          *(uint32_t *)(v353 + 76) = *((uint32_t *)v352 + 19);
          v352 = (vox::EventXMLDef::Self *)((char *)v352 + 80);
          v353 += 80;
        }
        while ( !v179 );
        v313 = *((char **)v451 + 10);
        v26 = *((char **)v451 + 9);
        v351 = &v424[(v313 - v26) & 0xFFFFFFF0];
      }
      v354 = v313;
      if ( v471 == (vox::EventXMLDef::Self *)v351 )
      {
        v34 = v451;
        v33 = (int)(uintptr_t)(&v26[80 * s1]);
        goto LABEL_44;
      }
      do
      {
        if ( v354 != nullptr )
        {
          g4_std::string::construct_copy(v354, v351);
          g4_std::string::construct_copy(v354 + 4, v351 + 4);
          *((uint32_t *)v354 + 2) = *((uint32_t *)v351 + 2);
          *((uint32_t *)v354 + 3) = *((uint32_t *)v351 + 3);
          *((uint32_t *)v354 + 4) = *((uint32_t *)v351 + 4);
          v354[20] = v351[20];
          *((uint32_t *)v354 + 6) = *((uint32_t *)v351 + 6);
          *((uint32_t *)v354 + 7) = *((uint32_t *)v351 + 7);
          *((uint32_t *)v354 + 8) = *((uint32_t *)v351 + 8);
          *((uint32_t *)v354 + 9) = *((uint32_t *)v351 + 9);
          *((uint32_t *)v354 + 10) = *((uint32_t *)v351 + 10);
          *((uint32_t *)v354 + 11) = *((uint32_t *)v351 + 11);
          *((uint32_t *)v354 + 12) = *((uint32_t *)v351 + 12);
          *((uint32_t *)v354 + 13) = *((uint32_t *)v351 + 13);
          *((uint32_t *)v354 + 14) = *((uint32_t *)v351 + 14);
          v354[60] = v351[60];
          *((uint32_t *)v354 + 16) = *((uint32_t *)v351 + 16);
          *((uint32_t *)v354 + 17) = *((uint32_t *)v351 + 17);
          v354[72] = v351[72];
          *((uint32_t *)v354 + 19) = *((uint32_t *)v351 + 19);
        }
        v351 += 80;
        v354 += 80;
      }
      while ( v471 != (vox::EventXMLDef::Self *)v351 );
    }
    else
    {
      if ( s1 > 0 )
      {
        v315 = *((uint32_t *)v451 + 9);
        v422 = *((char **)v451 + 10);
        v412 = (char *)v315;
        do
        {
          g4_std::string::assign_str(v315, v24);
          g4_std::string::assign_str(v315 + 4, (char *)v24 + 4);
          *(uint32_t *)(v315 + 8) = *((uint32_t *)v24 + 2);
          *(uint32_t *)(v315 + 12) = *((uint32_t *)v24 + 3);
          *(uint32_t *)(v315 + 16) = *((uint32_t *)v24 + 4);
          *(uint8_t *)(v315 + 20) = *((uint8_t *)v24 + 20);
          *(uint32_t *)(v315 + 24) = *((uint32_t *)v24 + 6);
          *(uint32_t *)(v315 + 28) = *((uint32_t *)v24 + 7);
          *(uint32_t *)(v315 + 32) = *((uint32_t *)v24 + 8);
          *(uint32_t *)(v315 + 36) = *((uint32_t *)v24 + 9);
          *(uint32_t *)(v315 + 40) = *((uint32_t *)v24 + 10);
          *(uint32_t *)(v315 + 44) = *((uint32_t *)v24 + 11);
          *(uint32_t *)(v315 + 48) = *((uint32_t *)v24 + 12);
          *(uint32_t *)(v315 + 52) = *((uint32_t *)v24 + 13);
          *(uint32_t *)(v315 + 56) = *((uint32_t *)v24 + 14);
          *(uint8_t *)(v315 + 60) = *((uint8_t *)v24 + 60);
          *(uint32_t *)(v315 + 64) = *((uint32_t *)v24 + 16);
          *(uint32_t *)(v315 + 68) = *((uint32_t *)v24 + 17);
          *(uint8_t *)(v315 + 72) = *((uint8_t *)v24 + 72);
          v179 = s-- == (char *)(uintptr_t)(uint8_t *)&dword_0 + 1;
          *(uint32_t *)(v315 + 76) = *((uint32_t *)v24 + 19);
          v24 = (vox::EventXMLDef::Self *)((char *)v24 + 80);
          v315 += 80;
        }
        while ( !v179 );
        v313 = v422;
        v26 = &v412[80 * s1];
      }
      if ( v26 != v313 )
      {
        v316 = v26;
        v485 = v26 + 4;
        v433 = (vox::EventXMLDef::Self *)v313;
        sn = v26;
        do
        {
          v317 = *(uint32_t *)&v485[v316 - sn];
          if ( (uint32_t *)(v317 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v317 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v317 - 12));
          }
          v318 = (uint32_t *)(*(uint32_t *)v316 - 12);
          if ( v318 != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v316 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v318);
          }
          v316 += 80;
        }
        while ( v433 != (vox::EventXMLDef::Self *)v316 );
        v32 = v451;
        v33 = *((uint32_t *)v451 + 9) + 80 * s1;
        goto LABEL_43;
      }
    }
    v34 = v451;
    v33 = *((uint32_t *)v451 + 9) + 80 * s1;
    goto LABEL_44;
  }
LABEL_2:
  TiXmlDocument::Destroy((TiXmlDocument::Self *)v566);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::CompareSoundpackHashes  (binary VA: 0x1020aa0)
// Original: vox::CompareSoundpackHashes
// ----------------------------------------------------------------------------
bool vox::CompareSoundpackHashes(unsigned int a1, int a2, unsigned int a3)
{
  return a1 < a3;
}

// ----------------------------------------------------------------------------
// Function: vox::BehaviourToString  (binary VA: 0x1039840)
// Original: vox::BehaviourToString
// ----------------------------------------------------------------------------
const char * vox::BehaviourToString(int a1)
{
  const char *result;

  switch ( a1 )
  {
    case 0:
      result = "Steal Oldest";
      break;
    case 1:
      result = "Steal Lowest Priority";
      break;
    case 2:
      result = "Steal Lowest Priority Oldest";
      break;
    case 3:
      result = "Steal Quietest";
      break;
    case 4:
      result = "Do Nothing";
      break;
    default:
      result = "Unknown";
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamCFileFactory  (binary VA: 0x103bf40)
// Original: vox::StreamCFileFactory
// ----------------------------------------------------------------------------
vox::StreamCFile::Self * vox::StreamCFileFactory(vox::Self *self)
{
  vox::StreamCFile::Self *v1;

  v1 = (vox::StreamCFile::Self *)VoxAllocInternal(
                             0xCu,
                             0,
                             (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_stream_cfile.cpp"),
                             (int)(uintptr_t)("StreamCFileFactory"),
                             18);
  vox::StreamCFile::Construct(v1, (const char *)self);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::StreamMemoryBufferFactory  (binary VA: 0x103cb60)
// Original: vox::StreamMemoryBufferFactory
// ----------------------------------------------------------------------------
int vox::StreamMemoryBufferFactory(vox::Self *self)
{
  int v1;

  v1 = VoxAllocInternal(
         0x10u,
         0,
         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_stream_memorybuffer.cpp"),
         (int)(uintptr_t)("StreamMemoryBufferFactory"),
         18);
  vox::StreamMemoryBuffer::Construct(v1, (int)(uintptr_t)(self));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::DebugFilterEmitterToMask  (binary VA: 0x103d240)
// Original: vox::DebugFilterEmitterToMask
// ----------------------------------------------------------------------------
int64_t vox::DebugFilterEmitterToMask(vox::Self *self)
{
  int64_t v2;

  v2 = 0;
  if ( self != nullptr )
  {
    v2 = 1;
    if ( strcmp((const char *)self, (const char *)&off_1B23754) != 0 )
    {
      v2 = 2;
      if ( strcmp((const char *)self, "data_uid") != 0 )
      {
        v2 = 4;
        if ( strcmp((const char *)self, "gain_current") != 0 )
        {
          v2 = 8;
          if ( strcmp((const char *)self, "gain_target") != 0 )
          {
            v2 = 16;
            if ( strcmp((const char *)self, "pitch_current") != 0 )
            {
              v2 = 32;
              if ( strcmp((const char *)self, "pitch_target") != 0 )
              {
                v2 = 64;
                if ( strcmp((const char *)self, "state_current") != 0 )
                {
                  v2 = 128;
                  if ( strcmp((const char *)self, "state_target") != 0 )
                  {
                    v2 = 256;
                    if ( strcmp((const char *)self, "loop") != 0 )
                    {
                      v2 = 512;
                      if ( strcmp((const char *)self, "group_id") != 0 )
                      {
                        v2 = 1024;
                        if ( strcmp((const char *)self, "priority_bank_id") != 0 )
                        {
                          v2 = 2048;
                          if ( strcmp((const char *)self, "priority_bank_slot") != 0 )
                          {
                            v2 = 4096;
                            if ( strcmp((const char *)self, "priority") != 0 )
                            {
                              v2 = 0x2000;
                              if ( strcmp((const char *)self, "reference_count") != 0 )
                              {
                                v2 = 0x4000;
                                if ( strcmp((const char *)self, "bus_current") != 0 )
                                {
                                  v2 = 0x8000;
                                  if ( strcmp((const char *)self, "bus_target") != 0 )
                                  {
                                    v2 = 0x10000;
                                    if ( strcmp((const char *)self, "playback_position") != 0 )
                                    {
                                      v2 = 0x20000;
                                      if ( strcmp((const char *)self, "playback_random_position") != 0 )
                                      {
                                        v2 = 0x40000;
                                        if ( strcmp((const char *)self, "playback_delay") != 0 )
                                        {
                                          v2 = 0x80000;
                                          if ( strcmp((const char *)self, "pause_count") != 0 )
                                          {
                                            v2 = 0x100000;
                                            if ( strcmp((const char *)self, "user_data") != 0 )
                                            {
                                              v2 = 0x200000;
                                              if ( strcmp((const char *)self, "driver_source") != 0 )
                                              {
                                                v2 = 0x400000;
                                                if ( strcmp((const char *)self, "driver_source.gain") != 0 )
                                                {
                                                  LODWORD(v2) = (uint32_t)(uintptr_t)(sub_800000);
                                                  HIDWORD(v2) = 0;
                                                  if ( strcmp((const char *)self, "driver_source.pitch") != 0 )
                                                  {
                                                    v2 = 0x1000000;
                                                    if ( strcmp((const char *)self, "driver_source.pan") != 0 )
                                                    {
                                                      LODWORD(v2) = (uint32_t)(uintptr_t)(&unk_2000000);
                                                      HIDWORD(v2) = 0;
                                                      if ( strcmp((const char *)self, "driver_source.doppler") != 0 )
                                                      {
                                                        v2 = 0x8000000;
                                                        if ( strcmp((const char *)self, "driver_source.position") != 0 )
                                                        {
                                                          v2 = 0x10000000;
                                                          if ( strcmp((const char *)self, "driver_source.velocity") != 0 )
                                                          {
                                                            v2 = 0x20000000;
                                                            if ( strcmp((const char *)self, "driver_source.direction") != 0 )
                                                            {
                                                              v2 = 0x4000000;
                                                              if ( strcmp((const char *)self, "driver_source.3d") != 0 )
                                                              {
                                                                v2 = 0x40000000;
                                                                if ( strcmp(
                                                                       (const char *)self,
                                                                       "driver_source.3d_params") != 0 )
                                                                {
                                                                  v2 = 0x80000000LL;
                                                                  if ( strcmp(
                                                                         (const char *)self,
                                                                         "driver_source.3d_cone") != 0 )
                                                                  {
                                                                    v2 = 0x100000000LL;
                                                                    if ( strcmp((const char *)self, "decoder") != 0 )
                                                                    {
                                                                      v2 = 0x200000000LL;
                                                                      if ( strcmp(
                                                                             (const char *)self,
                                                                             "decoder.compression") != 0 )
                                                                      {
                                                                        v2 = 0x400000000LL;
                                                                        if ( strcmp(
                                                                               (const char *)self,
                                                                               "decoder.channel") != 0 )
                                                                        {
                                                                          v2 = 0x800000000LL;
                                                                          if ( strcmp(
                                                                                 (const char *)self,
                                                                                 "decoder.sample_rate") != 0 )
                                                                          {
                                                                            v2 = 0x1000000000LL;
                                                                            if ( strcmp(
                                                                                   (const char *)self,
                                                                                   "decoder.sample_count") != 0 )
                                                                            {
                                                                              v2 = 0x2000000000LL;
                                                                              if ( strcmp(
                                                                                     (const char *)self,
                                                                                     "decoder.bit_per_sample") != 0 )
                                                                              {
                                                                                v2 = 0x4000000000LL;
                                                                                if ( strcmp(
                                                                                       (const char *)self,
                                                                                       "stream") != 0 )
                                                                                {
                                                                                  v2 = 0x8000000000LL;
                                                                                  if ( strcmp(
                                                                                         (const char *)self,
                                                                                         "stream.size") != 0 )
                                                                                  {
                                                                                    v2 = 0;
                                                                                    if ( strcmp(
                                                                                           (const char *)self,
                                                                                           "stream.position") == 0 )
                                                                                      return 0x10000000000LL;
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
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::DebugFilterDriverToMask  (binary VA: 0x103d970)
// Original: vox::DebugFilterDriverToMask
// ----------------------------------------------------------------------------
int64_t vox::DebugFilterDriverToMask(vox::Self *self)
{
  int64_t v2;

  v2 = 0;
  if ( self != nullptr )
  {
    v2 = 1;
    if ( strcmp((const char *)self, "3d") != 0 )
    {
      v2 = 2;
      if ( strcmp((const char *)self, "3d_params") != 0 )
      {
        v2 = 4;
        if ( strcmp((const char *)self, "3d_listener") != 0 )
        {
          v2 = 8;
          if ( strcmp((const char *)self, "3d_enhanced") != 0 )
          {
            v2 = 0;
            if ( strcmp((const char *)self, "buses") == 0 )
              return 16;
          }
        }
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::DebugFilterGroupToMask  (binary VA: 0x103dab0)
// Original: vox::DebugFilterGroupToMask
// ----------------------------------------------------------------------------
int64_t vox::DebugFilterGroupToMask(vox::Self *self)
{
  int64_t v2;

  v2 = 0;
  if ( self != nullptr )
  {
    v2 = 1;
    if ( strcmp((const char *)self, "gain_current") != 0 )
    {
      v2 = 2;
      if ( strcmp((const char *)self, "gain_target") != 0 )
      {
        v2 = 4;
        if ( strcmp((const char *)self, "gain_effective") != 0 )
        {
          v2 = 8;
          if ( strcmp((const char *)self, "pitch_current") != 0 )
          {
            v2 = 16;
            if ( strcmp((const char *)self, "pitch_target") != 0 )
            {
              v2 = 0;
              if ( strcmp((const char *)self, "pitch_effective") == 0 )
                return 32;
            }
          }
        }
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::DebugFilterPriorityBankToMask  (binary VA: 0x103dc20)
// Original: vox::DebugFilterPriorityBankToMask
// ----------------------------------------------------------------------------
int64_t vox::DebugFilterPriorityBankToMask(vox::Self *self)
{
  int64_t v2;

  v2 = 0;
  if ( self != nullptr )
  {
    v2 = 1;
    if ( strcmp((const char *)self, "threshold") != 0 )
    {
      v2 = 2;
      if ( strcmp((const char *)self, "max_playback") != 0 )
      {
        v2 = 4;
        if ( strcmp((const char *)self, "behaviour") != 0 )
        {
          v2 = 8;
          if ( strcmp((const char *)self, "priority") != 0 )
          {
            v2 = 16;
            if ( strcmp((const char *)self, "priority_child_override") != 0 )
            {
              v2 = 32;
              if ( strcmp((const char *)self, "bank_element") != 0 )
              {
                v2 = 0;
                if ( strcmp((const char *)self, "bank_child_element") == 0 )
                  return 64;
              }
            }
          }
        }
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::DebugFilterToMask  (binary VA: 0x103ddb0)
// Original: vox::DebugFilterToMask
// ----------------------------------------------------------------------------
int vox::DebugFilterToMask(vox::Self *self, vox::Self *a2)
{
  int v2;

  if ( a2 == nullptr || self == nullptr )
    return 0;
  if ( strcmp((const char *)self, "emitters") == 0 )
    return vox::DebugFilterEmitterToMask(a2);
  if ( strcmp((const char *)self, "driver") == 0 )
    return vox::DebugFilterDriverToMask(a2);
  if ( strcmp((const char *)self, "groups") == 0 )
    return vox::DebugFilterGroupToMask(a2);
  v2 = 0;
  if ( strcmp((const char *)self, "priority_banks") == 0 )
    return vox::DebugFilterPriorityBankToMask(a2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::StateToString  (binary VA: 0x103de90)
// Original: vox::StateToString
// ----------------------------------------------------------------------------
const char * vox::StateToString(vox::Self *self)
{
  const char *result;

  switch ( (unsigned int)(uintptr_t)(self) )
  {
    case 0xFFFFFFFF:
      result = "Error";
      break;
    case 0u:
      result = "Initial";
      break;
    case 1u:
      result = "Playing";
      break;
    case 2u:
      result = "Paused";
      break;
    case 3u:
      result = "Stopped";
      break;
    default:
      result = "Unknown";
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::GetEmitterInfoFromJson  (binary VA: 0x103dee0)
// Original: vox::GetEmitterInfoFromJson
// ----------------------------------------------------------------------------
int vox::GetEmitterInfoFromJson(vox::Self *self, const vox::JsonObject::Self *a2)
{
  vox::VoxEngine::Self *VoxEngine;
  int v3;
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
  float v37; // xmm0_4
  float v38; // xmm0_4
  float v39; // xmm0_4
  float v40; // xmm0_4
  float v41; // xmm0_4
  float v42; // xmm0_4
  float v43; // xmm0_4
  float v44; // xmm0_4
  float v45; // xmm0_4
  float v46; // xmm0_4
  float v47; // xmm0_4
  float v48; // xmm0_4
  float v49; // xmm0_4
  float v50; // xmm0_4
  float v51; // xmm0_4
  float v52; // xmm0_4

  VoxEngine = vox::VoxEngine::GetVoxEngine();
  v3 = vox::JsonObject::opIndex(self, (const char *)&off_1B23754);
  if ( v3 != 0 && *(uint32_t *)(v3 + 24) == 4 )
    *((uint32_t *)a2 + 34) = *(uint32_t *)(v3 + 20);
  v4 = vox::JsonObject::opIndex(self, "bank");
  if ( v4 != 0 && *(uint32_t *)(v4 + 24) == 3 )
    *((uint32_t *)a2 + 10) = vox::VoxEngine::GetPriorityBankIdFromName(VoxEngine, *(char **)(v4 + 20));
  v5 = vox::JsonObject::opIndex(self, "group");
  if ( v5 != 0 && *(uint32_t *)(v5 + 24) == 3 )
    *((uint32_t *)a2 + 9) = vox::VoxEngine::GetGroupId(VoxEngine, *(char **)(v5 + 20));
  v6 = vox::JsonObject::opIndex(self, "randomoffset");
  if ( v6 != 0 && *(uint32_t *)(v6 + 24) == 3 )
    *((uint8_t *)a2 + 30) = strcasecmp(*(const char **)(v6 + 20), "yes") == 0;
  v7 = vox::JsonObject::opIndex(self, "priority");
  if ( v7 != 0 && *(uint32_t *)(v7 + 24) == 4 )
    *((uint32_t *)a2 + 11) = *(uint32_t *)(v7 + 20);
  v8 = vox::JsonObject::opIndex(self, "loop");
  if ( v8 != 0 && *(uint32_t *)(v8 + 24) == 3 )
    *((uint8_t *)a2 + 29) = strcasecmp(*(const char **)(v8 + 20), "yes") == 0;
  v9 = vox::JsonObject::opIndex(self, "delay");
  if ( v9 != 0 )
  {
    v10 = *(uint32_t *)(v9 + 24);
    if ( (unsigned int)(v10 - 4) <= 1 )
    {
      if ( v10 == 4 )
        v42 = (float)*(int *)(v9 + 20);
      else
        v42 = *(float *)(v9 + 20);
      *((float *)a2 + 8) = v42;
    }
  }
  v11 = vox::JsonObject::opIndex(self, "3dmode");
  if ( v11 != 0 && *(uint32_t *)(v11 + 24) == 3 )
    *((uint8_t *)a2 + 48) = strcasecmp(*(const char **)(v11 + 20), "yes") == 0;
  v12 = vox::JsonObject::opIndex(self, "refdist");
  if ( v12 != 0 )
  {
    v13 = *(uint32_t *)(v12 + 24);
    if ( (unsigned int)(v13 - 4) <= 1 )
    {
      if ( v13 == 4 )
        v46 = (float)*(int *)(v12 + 20);
      else
        v46 = *(float *)(v12 + 20);
      *((float *)a2 + 15) = v46;
    }
  }
  v14 = vox::JsonObject::opIndex(self, "maxdist");
  if ( v14 != 0 )
  {
    v15 = *(uint32_t *)(v14 + 24);
    if ( (unsigned int)(v15 - 4) <= 1 )
    {
      if ( v15 == 4 )
        v45 = (float)*(int *)(v14 + 20);
      else
        v45 = *(float *)(v14 + 20);
      *((float *)a2 + 14) = v45;
    }
  }
  v16 = vox::JsonObject::opIndex(self, "rolloff");
  if ( v16 != 0 )
  {
    v17 = *(uint32_t *)(v16 + 24);
    if ( (unsigned int)(v17 - 4) <= 1 )
    {
      if ( v17 == 4 )
        v44 = (float)*(int *)(v16 + 20);
      else
        v44 = *(float *)(v16 + 20);
      *((float *)a2 + 16) = v44;
    }
  }
  v18 = vox::JsonObject::opIndex(self, "killonresume");
  if ( v18 != 0 && *(uint32_t *)(v18 + 24) == 3 )
    *((uint8_t *)a2 + 120) = strcasecmp(*(const char **)(v18 + 20), "yes") == 0;
  v19 = vox::JsonObject::opIndex(self, "defaultmusicstate");
  if ( v19 != 0 && *(uint32_t *)(v19 + 24) == 3 )
    *((uint32_t *)a2 + 33) = *(uint32_t *)(v19 + 20);
  v20 = vox::JsonObject::opIndex(self, "fadeonplay");
  if ( v20 != 0 )
  {
    v21 = *(uint32_t *)(v20 + 24);
    if ( (unsigned int)(v21 - 4) <= 1 )
    {
      if ( v21 == 4 )
        v43 = (float)*(int *)(v20 + 20);
      else
        v43 = *(float *)(v20 + 20);
      *((float *)a2 + 31) = v43;
    }
  }
  v22 = vox::JsonObject::opIndex(self, "fadeonstop");
  if ( v22 != 0 )
  {
    v23 = *(uint32_t *)(v22 + 24);
    if ( (unsigned int)(v23 - 4) <= 1 )
    {
      if ( v23 == 4 )
        v41 = (float)*(int *)(v22 + 20);
      else
        v41 = *(float *)(v22 + 20);
      *((float *)a2 + 32) = v41;
    }
  }
  v24 = vox::JsonObject::opIndex(self, "pitch");
  if ( v24 != 0 )
  {
    v25 = *(uint32_t *)(v24 + 24);
    if ( (unsigned int)(v25 - 4) <= 1 )
    {
      if ( v25 == 4 )
        v39 = (float)*(int *)(v24 + 20) * 0.00083333335f;
      else
        v39 = 0.00083333335f * *(float *)(v24 + 20);
      v40 = pow(2.0, v39);
      *((float *)a2 + 4) = v40;
    }
  }
  v26 = vox::JsonObject::opIndex(self, "minpitchmod");
  if ( v26 != 0 )
  {
    v27 = *(uint32_t *)(v26 + 24);
    if ( (unsigned int)(v27 - 4) <= 1 )
    {
      v52 = v27 == 4 ? (float)*(int *)(v26 + 20) : *(float *)(v26 + 20);
      *((float *)a2 + 5) = v52;
      if ( v52 != 0.0 )
        *((uint8_t *)a2 + 28) = 1;
    }
  }
  v28 = vox::JsonObject::opIndex(self, "maxpitchmod");
  if ( v28 != 0 )
  {
    v29 = *(uint32_t *)(v28 + 24);
    if ( (unsigned int)(v29 - 4) <= 1 )
    {
      v51 = v29 == 4 ? (float)*(int *)(v28 + 20) : *(float *)(v28 + 20);
      *((float *)a2 + 6) = v51;
      if ( v51 != 0.0 )
        *((uint8_t *)a2 + 28) = 1;
    }
  }
  v30 = vox::JsonObject::opIndex(self, "volume");
  if ( v30 != 0 )
  {
    v31 = *(uint32_t *)(v30 + 24);
    if ( (unsigned int)(v31 - 4) <= 1 )
    {
      v49 = v31 == 4 ? (float)*(int *)(v30 + 20) * 0.16666667f : 0.16666667f * *(float *)(v30 + 20);
      v50 = pow(2.0, v49);
      *(float *)a2 = v50;
      if ( v50 < 0.001f )
        *(uint32_t *)a2 = 0;
    }
  }
  v32 = vox::JsonObject::opIndex(self, "mingainmod");
  if ( v32 != 0 )
  {
    v33 = *(uint32_t *)(v32 + 24);
    if ( (unsigned int)(v33 - 4) <= 1 )
    {
      v47 = v33 == 4 ? (float)*(int *)(v32 + 20) * 0.16666667f : 0.16666667f * *(float *)(v32 + 20);
      v48 = pow(2.0, v47);
      *((float *)a2 + 1) = v48;
      if ( v48 != 1.0 )
        *((uint8_t *)a2 + 12) = 1;
    }
  }
  v34 = vox::JsonObject::opIndex(self, "maxgainmod");
  if ( v34 == 0 )
    return 0;
  v35 = *(uint32_t *)(v34 + 24);
  if ( (unsigned int)(v35 - 4) > 1 )
    return 0;
  v37 = v35 == 4 ? (float)*(int *)(v34 + 20) * 0.16666667f : 0.16666667f * *(float *)(v34 + 20);
  v38 = pow(2.0, v37);
  *((float *)a2 + 2) = v38;
  if ( v38 == 1.0 )
    return 0;
  *((uint8_t *)a2 + 12) = 1;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::atoi  (binary VA: 0x103ff40)
// Original: vox::atoi
// ----------------------------------------------------------------------------
char * vox::atoi(vox::Self *self, char *a2, char *a3)
{
  char *result;
  char v4;
  char *v5;
  int v6;
  uint8_t v7;
  int v8;
  int v9;
  int v10;

  result = (char *)self;
  if ( self == (vox::Self *)a2 )
    goto LABEL_5;
  v4 = *(uint8_t *)self;
  v5 = (char *)self + 1;
  v6 = -1;
  if ( *(uint8_t *)self != 45 )
  {
    v6 = 1;
    if ( v4 != 43 )
      goto LABEL_4;
    v5 = (char *)self + 1;
  }
  if ( v5 == a2 )
  {
    result = v5;
    goto LABEL_5;
  }
  v4 = *((uint8_t *)self + 1);
  result = v5;
LABEL_4:
  v7 = v4 - 48;
  v8 = 0;
  if ( v7 > 9u )
  {
LABEL_5:
    *(uint32_t *)a3 = 0;
    return result;
  }
  do
  {
    v9 = 5 * v8;
    v10 = *result++;
    v8 = v10 + 2 * v9 - 48;
  }
  while ( a2 != result && (uint8_t)(*result - 48) <= 9u );
  *(uint32_t *)a3 = v6 * v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::hatoui  (binary VA: 0x103ffc0)
// Original: vox::hatoui
// ----------------------------------------------------------------------------
char * vox::hatoui(vox::Self *self, char *a2, char *a3)
{
  int v3;
  char *result;
  int v5;
  char v6;

  v3 = 0;
  result = (char *)self;
  if ( self != (vox::Self *)a2 )
  {
    while ( 1 )
    {
      v6 = *result;
      if ( (uint8_t)(*result - 48) <= 9u )
        break;
      if ( (uint8_t)(v6 - 97) > 5u )
      {
        if ( (uint8_t)(v6 - 65) > 5u )
          goto LABEL_8;
        v5 = v6 - 55;
LABEL_4:
        ++result;
        v3 = v5 + 16 * v3;
        if ( a2 == result )
          goto LABEL_8;
      }
      else
      {
        ++result;
        v3 = v6 - 87 + 16 * v3;
        if ( a2 == result )
          goto LABEL_8;
      }
    }
    v5 = v6 - 48;
    goto LABEL_4;
  }
LABEL_8:
  *(uint32_t *)a3 = v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::atof  (binary VA: 0x1040050)
// Original: vox::atof
// ----------------------------------------------------------------------------
char * vox::atof(vox::Self *self, char *a2, char *a3)
{
  float v3; // xmm0_4
  char *result;
  char v5;
  float v6; // xmm3_4
  float v7; // xmm0_4
  int v8;
  char v9;
  char v10; // di
  int v11;
  int v12;
  int v13;
  float v14; // xmm1_4
  float v15; // xmm2_4
  int v16;
  float v17; // xmm1_4
  char *v18;

  v3 = 0.0;
  result = (char *)self;
  if ( self == (vox::Self *)a2 )
    goto LABEL_22;
  v5 = *(uint8_t *)self;
  if ( *(uint8_t *)self == 45 )
  {
    v18 = (char *)self + 1;
    v6 = -1.0;
  }
  else
  {
    v6 = 1.0;
    if ( v5 != 43 )
      goto LABEL_4;
    v18 = (char *)self + 1;
  }
  if ( v18 == a2 )
  {
    result = v18;
    v3 = 0.0;
    goto LABEL_22;
  }
  v5 = *((uint8_t *)self + 1);
  result = v18;
LABEL_4:
  v7 = 0.0;
  if ( (uint8_t)(v5 - 48) <= 9u )
  {
    do
    {
      v8 = *result++ - 48;
      v7 = (float)v8 + (float)(v7 * 10.0);
      if ( a2 == result )
        goto LABEL_31;
      v5 = *result;
    }
    while ( (uint8_t)(*result - 48) <= 9u );
  }
  if ( v5 == 46 )
  {
    if ( a2 == result + 1 )
    {
      v3 = v7 * v6;
      result = a2;
      goto LABEL_22;
    }
    v5 = result[1];
    if ( (uint8_t)(v5 - 48) <= 9u )
    {
      ++result;
      v15 = 0.1f;
      while ( 1 )
      {
        v16 = *result++;
        v17 = (float)(v16 - 48) * v15;
        v15 = v15 * 0.1f;
        v7 = v7 + v17;
        if ( a2 == result )
          break;
        v5 = *result;
        if ( (uint8_t)(*result - 48) > 9u )
          goto LABEL_8;
      }
LABEL_31:
      v3 = v7 * v6;
      goto LABEL_22;
    }
    ++result;
  }
LABEL_8:
  v3 = v7 * v6;
  if ( v5 == 69 )
  {
    v9 = result[1];
    if ( v9 != 45 )
    {
LABEL_10:
      if ( v9 == 43 )
        result += 2;
      else
        ++result;
      v10 = 0;
      goto LABEL_13;
    }
  }
  else
  {
    if ( v5 != 101 )
      goto LABEL_22;
    v9 = result[1];
    if ( v9 != 45 )
      goto LABEL_10;
  }
  result += 2;
  v10 = 1;
LABEL_13:
  if ( a2 == result )
    goto LABEL_22;
  v11 = 0;
  if ( (uint8_t)(*result - 48) > 9u )
    goto LABEL_22;
  do
  {
    v12 = 5 * v11;
    v13 = *result++;
    v11 = v13 + 2 * v12 - 48;
  }
  while ( a2 != result && (uint8_t)(*result - 48) <= 9u );
  if ( v11 == 0 )
    goto LABEL_22;
  v14 = 10.0;
  if ( v11 > 1 )
  {
    do
    {
      --v11;
      v14 = v14 * 10.0;
    }
    while ( v11 != 1 );
  }
  if ( v10 == 0 )
  {
    v3 = v3 * v14;
LABEL_22:
    *(float *)a3 = v3;
    return result;
  }
  *(float *)a3 = v3 / v14;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::json_alloc  (binary VA: 0x1040260)
// Original: vox::json_alloc
// ----------------------------------------------------------------------------
size_t vox::json_alloc(vox::Self *self)
{
  size_t result;
  uint16_t *v2;
  unsigned int v3;
  uint16_t *v4;

  result = vox::block_allocator::malloc(self, 0x1Cu);
  v2 = (uint16_t *)result;
  v3 = 28;
  if ( (result & 1) != 0 )
  {
    v2 = (uint16_t *)(result + 1);
    *(uint8_t *)result = 0;
    LOWORD(v3) = 27;
    if ( ((result + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (result & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v2 = 0;
  v3 -= 2;
  ++v2;
LABEL_3:
  memset(v2, 0, 4 * (v3 >> 2));
  v4 = &v2[2 * (v3 >> 2)];
  if ( (v3 & 2) != 0 )
    *v4++ = 0;
  if ( (v3 & 1) != 0 )
    *(uint8_t *)v4 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::json_append  (binary VA: 0x1040300)
// Original: vox::json_append
// ----------------------------------------------------------------------------
int vox::json_append(int a1, uint32_t *a2)
{
  int result;
  int v3;

  result = a1;
  *a2 = a1;
  v3 = *(uint32_t *)(a1 + 12);
  if ( v3 != 0 )
  {
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(a2);
    *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
    *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(a2);
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::json_parse  (binary VA: 0x1040320)
// Original: vox::json_parse
// ----------------------------------------------------------------------------
uint32_t * vox::json_parse(vox::Self *self, char *a2, char **a3, char **a4, vox::Self *a5)
{
  uint32_t *v5;
  vox::Self *v6;
  char i;
  uint32_t *v9;
  vox::Self *v10;
  uint32_t *v11;
  bool v12;
  size_t v13;
  char v14;
  int v15;
  char *v16;
  char *v17;
  vox::Self *v18;
  vox::Self *v19;
  char v20;
  uint32_t *v21;
  int v22;
  vox::Self *v23;
  char *v24;
  vox::Self *v25;
  char *v26;
  typedef unsigned int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef char *_g4_t_v35;
  typedef vox::Self *_g4_t_v36;
  typedef vox::Self *_g4_t_v37;
  typedef vox::Self *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef size_t _g4_t_v41;
  typedef vox::Self *_g4_t_v42;
  typedef vox::Self *_g4_t_v43;
  typedef char _g4_t_v44;
  typedef unsigned int _g4_t_v45[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v28)) > _g4_s1 ? (4u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v29)) > _g4_s2 ? (4u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v30)) > _g4_s3 ? (4u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v31)) > _g4_s4 ? (4u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v32)) > _g4_s5 ? (4u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v33)) > _g4_s6 ? (4u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v34)) > _g4_s7 ? (4u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v35)) > _g4_s8 ? (8u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v36)) > _g4_s9 ? (8u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v37)) > _g4_s10 ? (12u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v38)) > _g4_s11 ? (12u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v39)) > _g4_s12 ? (16u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v40)) > _g4_s13 ? (20u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v41)) > _g4_s14 ? (24u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v42)) > _g4_s15 ? (24u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v43)) > _g4_s16 ? (28u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v44)) > _g4_s17 ? (28u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v45)) > _g4_s18 ? (32u + sizeof(_g4_t_v45)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 24u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);

  v5 = nullptr;
  v6 = self;
  v39 = 0;
  v43 = nullptr;
  v40 = nullptr;
  v37 = self;
  i = *(uint8_t *)self;
  while ( 2 )
  {
    if ( i == 0 )
    {
      if ( v5 == nullptr )
        return v40;
      v40 = nullptr;
      *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v6);
      *a3 = "Not all objects/arrays have been properly closed";
      *a4 = (char *)(1 - v39);
      if ( v37 == v6 )
        return v40;
      do
      {
        if ( *(uint8_t *)v6 == 10 )
          ++*a4;
        v6 = (vox::Self *)((char *)v6 - 1);
      }
      while ( v6 != v37 );
      return nullptr;
    }
    switch ( i )
    {
      case '"':
        if ( v5 == nullptr )
        {
          v40 = nullptr;
          *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v6);
          *a3 = "Unexpected character";
          *a4 = (char *)(1 - v39);
          if ( v37 != v6 )
          {
            do
            {
              if ( *(uint8_t *)v6 == 10 )
                ++*a4;
              v6 = (vox::Self *)((char *)v6 - 1);
            }
            while ( v6 != v37 );
            return nullptr;
          }
          return v40;
        }
        v6 = (vox::Self *)((char *)v6 + 1);
        v18 = v37;
        v42 = v6;
        v19 = v6;
LABEL_51:
        v20 = *(uint8_t *)v6;
        if ( *(uint8_t *)v6 == 0 )
          goto LABEL_56;
        while ( 1 )
        {
          if ( (uint8_t)v20 <= 0x1Fu )
          {
            v40 = nullptr;
            *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v42);
            *a3 = "Control characters not allowed in strings";
            *a4 = (char *)(1 - v39);
            if ( v18 != v42 )
            {
              v25 = v42;
              do
              {
                if ( *(uint8_t *)v25 == 10 )
                  ++*a4;
                v25 = (vox::Self *)((char *)v25 - 1);
              }
              while ( v25 != v18 );
              return nullptr;
            }
            return v40;
          }
          if ( v20 == 92 )
          {
            switch ( *((uint8_t *)v6 + 1) )
            {
              case '"':
                *(uint8_t *)v19 = 34;
                goto LABEL_78;
              case '/':
                *(uint8_t *)v19 = 47;
                goto LABEL_78;
              case '\\':
                *(uint8_t *)v19 = 92;
                goto LABEL_78;
              case 'b':
                *(uint8_t *)v19 = 8;
                goto LABEL_78;
              case 'f':
                *(uint8_t *)v19 = 12;
                goto LABEL_78;
              case 'n':
                *(uint8_t *)v19 = 10;
                ++v39;
                goto LABEL_78;
              case 'r':
                *(uint8_t *)v19 = 13;
                goto LABEL_78;
              case 't':
                *(uint8_t *)v19 = 9;
                goto LABEL_78;
              case 'u':
                v36 = v18;
                v33 = v5;
                v24 = vox::hatoui((vox::Self *)((char *)v6 + 2), (char *)v6 + 6, (char *)v45);
                v18 = v36;
                v5 = v33;
                if ( (char *)v6 + 6 != v24 )
                {
                  v40 = nullptr;
                  *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v6);
                  *a3 = "Bad unicode codepoint";
                  *a4 = (char *)(1 - v39);
                  if ( v36 != v6 )
                  {
                    do
                    {
                      if ( *(uint8_t *)v6 == 10 )
                        ++*a4;
                      v6 = (vox::Self *)((char *)v6 - 1);
                    }
                    while ( v6 != v36 );
                    return nullptr;
                  }
                  return v40;
                }
                v27 = v45[0];
                if ( v45[0] > 0x7F )
                {
                  if ( v45[0] <= 0x7FF )
                  {
                    *(uint8_t *)v19 = (v45[0] >> 6) | 0xC0;
                    *((uint8_t *)v19 + 1) = v27 & 0x3F | 0x80;
                    v19 = (vox::Self *)((char *)v19 + 1);
                  }
                  else if ( v45[0] <= 0xFFFF )
                  {
                    *(uint8_t *)v19 = (v45[0] >> 12) | 0xE0;
                    *((uint8_t *)v19 + 1) = (v27 >> 6) & 0x3F | 0x80;
                    *((uint8_t *)v19 + 2) = v27 & 0x3F | 0x80;
                    v19 = (vox::Self *)((char *)v19 + 2);
                  }
                }
                else
                {
                  *(uint8_t *)v19 = v45[0];
                }
                v6 = (vox::Self *)((char *)v6 + 4);
LABEL_78:
                v19 = (vox::Self *)((char *)v19 + 1);
                v6 = (vox::Self *)((char *)v6 + 2);
                break;
              default:
                v40 = nullptr;
                *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v42);
                *a3 = "Unrecognized escape sequence";
                *a4 = (char *)(1 - v39);
                if ( v18 == v42 )
                  return v40;
                v23 = v42;
                do
                {
                  if ( *(uint8_t *)v23 == 10 )
                    ++*a4;
                  v23 = (vox::Self *)((char *)v23 - 1);
                }
                while ( v23 != v18 );
                return nullptr;
            }
            goto LABEL_51;
          }
          if ( v20 == 34 )
            break;
          v6 = (vox::Self *)((char *)v6 + 1);
          *(uint8_t *)v19 = v20;
          v20 = *(uint8_t *)v6;
          v19 = (vox::Self *)((char *)v19 + 1);
          if ( *(uint8_t *)v6 == 0 )
          {
LABEL_56:
            v38 = v18;
            goto LABEL_57;
          }
        }
        v38 = v18;
        *(uint8_t *)v19 = 0;
        v6 = (vox::Self *)((char *)v6 + 1);
LABEL_57:
        if ( v43 != nullptr || v5[6] != 1 )
        {
          v31 = (int)(uintptr_t)(v5);
          v21 = (uint32_t *)vox::json_alloc(a5);
          v21[6] = 3;
          v21[4] = (uint32_t)(uintptr_t)(v43);
          v21[5] = (uint32_t)(uintptr_t)(v42);
          vox::json_append(v31, v21);
          v43 = nullptr;
          v5 = (uint32_t *)v31;
          v10 = v38;
        }
        else
        {
          v43 = v42;
          v10 = v38;
        }
        goto LABEL_22;
      case ',':
        if ( v5 != nullptr )
          goto LABEL_35;
        v40 = nullptr;
        *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v6);
        *a3 = "Unexpected character";
        *a4 = (char *)(1 - v39);
        if ( v37 == v6 )
          return v40;
        do
        {
          if ( *(uint8_t *)v6 == 10 )
            ++*a4;
          v6 = (vox::Self *)((char *)v6 - 1);
        }
        while ( v6 != v37 );
        return nullptr;
      case '-':
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        if ( v5 == nullptr )
        {
          v40 = nullptr;
          *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v6);
          *a3 = "Unexpected character";
          *a4 = (char *)(1 - v39);
          if ( v37 != v6 )
          {
            do
            {
              if ( *(uint8_t *)v6 == 10 )
                ++*a4;
              v6 = (vox::Self *)((char *)v6 - 1);
            }
            while ( v6 != v37 );
            return nullptr;
          }
          return v40;
        }
        v30 = v5;
        v13 = vox::json_alloc(a5);
        *(uint32_t *)(v13 + 24) = 4;
        *(uint32_t *)(v13 + 16) = (uint32_t)(uintptr_t)(v43);
        v41 = v13;
        v14 = *(uint8_t *)v6;
        v15 = (int)(uintptr_t)(v30);
        if ( *(uint8_t *)v6 == 32
          || v14 == 9
          || v14 == 13
          || v14 == 10
          || v14 == 44
          || v14 == 93
          || (v17 = (char *)v6, v14 == 125) )
        {
          v16 = (char *)v6;
          goto LABEL_40;
        }
        do
        {
          if ( v14 == 101 || v14 == 46 || v14 == 69 )
          {
            ++v17;
            *(uint32_t *)(v41 + 24) = 5;
            v14 = *v17;
            if ( *v17 == 9 )
              break;
          }
          else
          {
            v14 = *++v17;
            if ( *v17 == 9 )
              break;
          }
        }
        while ( v14 != 32 && v14 != 13 && v14 != 10 && v14 != 44 && v14 != 93 && v14 != 125 );
        v22 = *(uint32_t *)(v41 + 24);
        if ( v22 != 4 )
          goto LABEL_68;
        v16 = v17;
LABEL_40:
        v35 = v16;
        v17 = vox::atoi(v6, v16, (char *)(v41 + 20));
        v15 = (int)(uintptr_t)(v30);
        if ( v17 != v35 )
        {
          v40 = nullptr;
          *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v6);
          *a3 = "Bad integer number";
          *a4 = (char *)(1 - v39);
          if ( v37 != v6 )
          {
            do
            {
              if ( *(uint8_t *)v6 == 10 )
                ++*a4;
              v6 = (vox::Self *)((char *)v6 - 1);
            }
            while ( v6 != v37 );
            return nullptr;
          }
          return v40;
        }
        v22 = *(uint32_t *)(v41 + 24);
LABEL_68:
        if ( v22 == 5 )
        {
          v34 = v15;
          v26 = vox::atof(v6, v17, (char *)(v41 + 20));
          v15 = v34;
          if ( v26 != v17 )
          {
            v40 = nullptr;
            *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v6);
            *a3 = "Bad float number";
            *a4 = (char *)(1 - v39);
            if ( v37 != v6 )
            {
              do
              {
                if ( *(uint8_t *)v6 == 10 )
                  ++*a4;
                v6 = (vox::Self *)((char *)v6 - 1);
              }
              while ( v6 != v37 );
              return nullptr;
            }
            return v40;
          }
        }
        v32 = (uint32_t *)v15;
        v6 = (vox::Self *)v17;
        vox::json_append(v15, (uint32_t *)v41);
        v43 = nullptr;
        v5 = v32;
        v10 = v37;
        goto LABEL_22;
      case ':':
        if ( v5 == nullptr || v5[6] != 1 )
        {
          v40 = nullptr;
          *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v6);
          *a3 = "Unexpected character";
          *a4 = (char *)(1 - v39);
          if ( v37 != v6 )
          {
            do
            {
              if ( *(uint8_t *)v6 == 10 )
                ++*a4;
              v6 = (vox::Self *)((char *)v6 - 1);
            }
            while ( v6 != v37 );
            return nullptr;
          }
          return v40;
        }
LABEL_35:
        v6 = (vox::Self *)((char *)v6 + 1);
        v10 = v37;
        goto LABEL_22;
      case '[':
      case '{':
        v29 = (int)(uintptr_t)(v5);
        v11 = (uint32_t *)vox::json_alloc(a5);
        v11[4] = (uint32_t)(uintptr_t)(v43);
        v12 = *(uint8_t *)v6 != 123;
        v6 = (vox::Self *)((char *)v6 + 1);
        v11[6] = v12 + 1;
        if ( v29 != 0 )
        {
          vox::json_append(v29, v11);
          v5 = v11;
          v43 = nullptr;
          v10 = v37;
        }
        else
        {
          if ( v40 != nullptr )
          {
            v40 = nullptr;
            *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v6);
            *a3 = "Second root. Only one root allowed";
            *a4 = (char *)(1 - v39);
            if ( v37 != v6 )
            {
              do
              {
                if ( *(uint8_t *)v6 == 10 )
                  ++*a4;
                v6 = (vox::Self *)((char *)v6 - 1);
              }
              while ( v6 != v37 );
              return nullptr;
            }
            return v40;
          }
          v5 = v11;
          v40 = v11;
          v43 = nullptr;
          v10 = v37;
        }
        goto LABEL_22;
      case ']':
      case '}':
        if ( v5 == nullptr || v5[6] != (i != 125) + 1 )
        {
          v40 = nullptr;
          *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v6);
          *a3 = "Mismatch closing brace/bracket";
          *a4 = (char *)(1 - v39);
          if ( v37 != v6 )
          {
            do
            {
              if ( *(uint8_t *)v6 == 10 )
                ++*a4;
              v6 = (vox::Self *)((char *)v6 - 1);
            }
            while ( v6 != v37 );
            return nullptr;
          }
          return v40;
        }
        v6 = (vox::Self *)((char *)v6 + 1);
        v5 = (uint32_t *)*v5;
        v10 = v37;
        goto LABEL_22;
      case 'f':
      case 'n':
      case 't':
        if ( v5 == nullptr )
        {
          v40 = nullptr;
          *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v6);
          *a3 = "Unexpected character";
          *a4 = (char *)(1 - v39);
          if ( v37 == v6 )
            return v40;
          do
          {
            if ( *(uint8_t *)v6 == 10 )
              ++*a4;
            v6 = (vox::Self *)((char *)v6 - 1);
          }
          while ( v6 != v37 );
          return nullptr;
        }
        v28 = (int)(uintptr_t)(v5);
        v9 = (uint32_t *)vox::json_alloc(a5);
        v9[4] = (uint32_t)(uintptr_t)(v43);
        v44 = *(uint8_t *)v6;
        if ( *(uint8_t *)v6 != 110 )
        {
          if ( v44 == 116 )
          {
            if ( *((uint8_t *)v6 + 1) != 114 || *((uint8_t *)v6 + 2) != 117 || *((uint8_t *)v6 + 3) != 101 )
              goto LABEL_105;
            v9[6] = 6;
            v9[5] = 1;
            v6 = (vox::Self *)((char *)v6 + 4);
          }
          else
          {
            if ( v44 != 102
              || *((uint8_t *)v6 + 1) != 97
              || *((uint8_t *)v6 + 2) != 108
              || *((uint8_t *)v6 + 3) != 115
              || *((uint8_t *)v6 + 4) != 101 )
            {
              goto LABEL_105;
            }
            v9[6] = 6;
            v9[5] = 0;
            v6 = (vox::Self *)((char *)v6 + 5);
          }
          goto LABEL_21;
        }
        if ( *((uint8_t *)v6 + 1) == 117 && *((uint8_t *)v6 + 2) == 108 && *((uint8_t *)v6 + 3) == 108 )
        {
          v9[6] = 0;
          v6 = (vox::Self *)((char *)v6 + 4);
LABEL_21:
          vox::json_append(v28, v9);
          v43 = nullptr;
          v5 = (uint32_t *)v28;
          v10 = v37;
LABEL_22:
          for ( i = *(uint8_t *)v6; *(uint8_t *)v6 == 9; i = *(uint8_t *)v6 )
LABEL_23:
            v6 = (vox::Self *)((char *)v6 + 1);
          if ( i == 32 || i == 13 || i == 10 )
            goto LABEL_23;
          v37 = v10;
          continue;
        }
LABEL_105:
        v40 = nullptr;
        *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v6);
        *a3 = "Unknown identifier";
        *a4 = (char *)(1 - v39);
        if ( v37 != v6 )
        {
          do
          {
            if ( *(uint8_t *)v6 == 10 )
              ++*a4;
            v6 = (vox::Self *)((char *)v6 - 1);
          }
          while ( v6 != v37 );
          return nullptr;
        }
        return v40;
      default:
        v40 = nullptr;
        *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v6);
        *a3 = "Unexpected character";
        *a4 = (char *)(1 - v39);
        if ( v37 == v6 )
          return v40;
        do
        {
          while ( *(uint8_t *)v6 != 10 )
          {
            v6 = (vox::Self *)((char *)v6 - 1);
            if ( v6 == v37 )
              return nullptr;
          }
          v6 = (vox::Self *)((char *)v6 - 1);
          ++*a4;
        }
        while ( v6 != v37 );
        return nullptr;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: vox::CreateDriver  (binary VA: 0x10562e0)
// Original: vox::CreateDriver
// ----------------------------------------------------------------------------
vox::DriverAndroid::Self * vox::CreateDriver()
{
  vox::DriverAndroid::Self *v0;

  v0 = (vox::DriverAndroid::Self *)VoxAllocInternal(
                               0xE8u,
                               0,
                               (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_driver_android.cpp"),
                               (int)(uintptr_t)("CreateDriver"),
                               107);
  vox::DriverAndroid::Construct(v0);
  return v0;
}

// ----------------------------------------------------------------------------
// Function: vox::DetectNeonInstructionsPresent  (binary VA: 0x1057720)
// Original: vox::DetectNeonInstructionsPresent
// ----------------------------------------------------------------------------
int vox::DetectNeonInstructionsPresent()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::neonInstructionsPresent  (binary VA: 0x1057730)
// Original: vox::neonInstructionsPresent
// ----------------------------------------------------------------------------
int vox::neonInstructionsPresent()
{
  int result;

  result = (uint8_t)byte_20E2CC1;
  if ( byte_20E2CC0 == 0 )
  {
    result = vox::DetectNeonInstructionsPresent();
    byte_20E2CC1 = result;
    byte_20E2CC0 = 1;
  }
  return result;
}


