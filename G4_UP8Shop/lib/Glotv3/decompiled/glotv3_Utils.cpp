#include "Core/Utils/DecompTypes.h"
#include "glotv3_Utils.h"

// ----------------------------------------------------------------------------
// Function: glotv3::Utils::RetrieveMonotonicTime  (binary VA: 0x1330970)
// Original: glotv3::Utils::RetrieveMonotonicTime
// ----------------------------------------------------------------------------
long double glotv3::Utils::RetrieveMonotonicTime()
{
  typedef struct timespec _g4_t_tp;
  typedef struct timeval _g4_t_tv;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_tp)) > _g4_s0 ? (0u + sizeof(_g4_t_tp)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_tv)) > _g4_s1 ? (8u + sizeof(_g4_t_tv)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_tp &tp = *reinterpret_cast<_g4_t_tp *>(_g4_sf + 0u);
  _g4_t_tv &tv = *reinterpret_cast<_g4_t_tv *>(_g4_sf + 8u);

  if ( clock_gettime(4, &tp) != -1 )
    return (double)tp.tv_nsec * 0.000000001 + (double)tp.tv_sec;
  gettimeofday(&tv, nullptr);
  return (double)tv.tv_usec * 0.000001 + (double)tv.tv_sec;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Utils::GetRandomInt  (binary VA: 0x1330a10)
// Original: glotv3::Utils::GetRandomInt
// ----------------------------------------------------------------------------
int glotv3::Utils::GetRandomInt()
{
  int v0;
  int v1;
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;
  char *v5;
  __m128i v6;
  char *v7;
  __m128i v8;
  __m128i v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  int v14;
  unsigned int v15;
  char *v16;
  __m128i v17;
  __m128i v18;
  unsigned int v19;
  char *v20;
  __m128i v21;
  __m128i v22;
  int v23;
  unsigned int v24;
  unsigned int v25;

  v23 = glotv3::Utils::s_OnDistribution[0];
  v0 = glotv3::Utils::s_OnDistribution[1] - glotv3::Utils::s_OnDistribution[0];
  if ( glotv3::Utils::s_OnDistribution[0] < 0 )
    v0 = glotv3::Utils::s_OnDistribution[1] - glotv3::Utils::s_OnDistribution[0];
  v24 = v0;
  if ( v0 == 0 )
    return v23;
  if ( v0 == -1 )
  {
    if ( glotv3::Utils::s_WithGenerator[624] == 624 )
    {
      v16 = (char *)glotv3::Utils::s_WithGenerator;
      do
      {
        v17 = _mm_and_si128(*(__m128i *)(v16 + 4), G4_BITCAST<__m128i>(xmmword_1C7C740));
        *(__m128i *)v16 = _mm_xor_si128(
                            _mm_xor_si128(
                              _mm_unpacklo_epi32(
                                _mm_shuffle_epi32(_mm_mul_epu32(v17, G4_BITCAST<__m128i>(xmmword_1C7CB90)), 8),
                                _mm_shuffle_epi32(
                                  _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CB90), 4), _mm_srli_si128(v17, 4)),
                                  8)),
                              *(__m128i *)(v16 + 1588)),
                            _mm_srli_epi32(
                              _mm_or_si128(
                                _mm_and_si128(*(__m128i *)(v16 + 4), G4_BITCAST<__m128i>(xmmword_1C7C250)),
                                _mm_and_si128(*(__m128i *)v16, G4_BITCAST<__m128i>(xmmword_1C7C2A0))),
                              1u));
        v16 += 16;
      }
      while ( v16 != (char *)&glotv3::Utils::s_WithGenerator[220] );
      glotv3::Utils::s_WithGenerator[220] = ((glotv3::Utils::s_WithGenerator[220] & 0x80000000
                                            | glotv3::Utils::s_WithGenerator[221] & 0x7FFFFFFF) >> 1)
                                          ^ glotv3::Utils::s_WithGenerator[617]
                                          ^ (-1727483681 * (glotv3::Utils::s_WithGenerator[221] & 1));
      v18 = _mm_and_si128(*(__m128i *)&glotv3::Utils::s_WithGenerator[224], G4_BITCAST<__m128i>(xmmword_1C7C740));
      glotv3::Utils::s_WithGenerator[221] = ((glotv3::Utils::s_WithGenerator[222] & 0x7FFFFFFF
                                            | glotv3::Utils::s_WithGenerator[221] & 0x80000000) >> 1)
                                          ^ glotv3::Utils::s_WithGenerator[618]
                                          ^ (-1727483681 * (glotv3::Utils::s_WithGenerator[222] & 1));
      v19 = ((glotv3::Utils::s_WithGenerator[222] & 0x80000000 | glotv3::Utils::s_WithGenerator[223] & 0x7FFFFFFF) >> 1)
          ^ glotv3::Utils::s_WithGenerator[619]
          ^ (-1727483681 * (glotv3::Utils::s_WithGenerator[223] & 1));
      *(__m128i *)&glotv3::Utils::s_WithGenerator[223] = _mm_xor_si128(
                                                           _mm_xor_si128(
                                                             _mm_unpacklo_epi32(
                                                               _mm_shuffle_epi32(
                                                                 _mm_mul_epu32(v18, G4_BITCAST<__m128i>(xmmword_1C7CB90)),
                                                                 8),
                                                               _mm_shuffle_epi32(
                                                                 _mm_mul_epu32(
                                                                   _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CB90), 4),
                                                                   _mm_srli_si128(v18, 4)),
                                                                 8)),
                                                             *(__m128i *)&glotv3::Utils::s_WithGenerator[620]),
                                                           _mm_srli_epi32(
                                                             _mm_or_si128(
                                                               _mm_and_si128(
                                                                 *(__m128i *)&glotv3::Utils::s_WithGenerator[224],
                                                                 G4_BITCAST<__m128i>(xmmword_1C7C250)),
                                                               _mm_and_si128(
                                                                 *(__m128i *)&glotv3::Utils::s_WithGenerator[223],
                                                                 G4_BITCAST<__m128i>(xmmword_1C7C2A0))),
                                                             1u));
      glotv3::Utils::s_WithGenerator[222] = v19;
      v20 = (char *)&glotv3::Utils::s_WithGenerator[227];
      do
      {
        v21 = *(__m128i *)(v20 + 4);
        v22 = _mm_and_si128(v21, G4_BITCAST<__m128i>(xmmword_1C7C740));
        *(__m128i *)v20 = _mm_xor_si128(
                            _mm_xor_si128(
                              _mm_unpacklo_epi32(
                                _mm_shuffle_epi32(_mm_mul_epu32(v22, G4_BITCAST<__m128i>(xmmword_1C7CB90)), 8),
                                _mm_shuffle_epi32(
                                  _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CB90), 4), _mm_srli_si128(v22, 4)),
                                  8)),
                              *(__m128i *)(v20 - 908)),
                            _mm_srli_epi32(
                              _mm_or_si128(
                                _mm_and_si128(v21, G4_BITCAST<__m128i>(xmmword_1C7C250)),
                                _mm_and_si128(*(__m128i *)v20, G4_BITCAST<__m128i>(xmmword_1C7C2A0))),
                              1u));
        v20 += 16;
      }
      while ( v20 != (char *)&glotv3::Utils::s_WithGenerator[623] );
      v10 = glotv3::Utils::s_WithGenerator[0];
      glotv3::Utils::s_WithGenerator[623] = ((glotv3::Utils::s_WithGenerator[623] & 0x80000000
                                            | glotv3::Utils::s_WithGenerator[0] & 0x7FFFFFFF) >> 1)
                                          ^ glotv3::Utils::s_WithGenerator[396]
                                          ^ (-1727483681 * (glotv3::Utils::s_WithGenerator[0] & 1));
      v11 = 1;
    }
    else
    {
      v10 = glotv3::Utils::s_WithGenerator[glotv3::Utils::s_WithGenerator[624]];
      v11 = glotv3::Utils::s_WithGenerator[624] + 1;
    }
    glotv3::Utils::s_WithGenerator[624] = v11;
    v12 = v10 ^ (v10 >> 11) ^ ((v10 ^ (v10 >> 11)) << 7) & 0x9D2C5680;
    v4 = v12 ^ (v12 << 15) & 0xEFC60000 ^ ((v12 ^ (v12 << 15) & 0xEFC60000) >> 18);
    if ( v23 < 0 )
      goto LABEL_20;
LABEL_17:
    v23 += v4;
    return v23;
  }
  v25 = 0xFFFFFFFF / (v0 + 1) + (v0 == 0xFFFFFFFF % (v0 + 1));
  v1 = glotv3::Utils::s_WithGenerator[624];
  do
  {
    if ( v1 == 624 )
    {
      v5 = (char *)glotv3::Utils::s_WithGenerator;
      do
      {
        v6 = _mm_and_si128(*(__m128i *)(v5 + 4), G4_BITCAST<__m128i>(xmmword_1C7C740));
        *(__m128i *)v5 = _mm_xor_si128(
                           _mm_xor_si128(
                             _mm_unpacklo_epi32(
                               _mm_shuffle_epi32(_mm_mul_epu32(v6, G4_BITCAST<__m128i>(xmmword_1C7CB90)), 8),
                               _mm_shuffle_epi32(
                                 _mm_mul_epu32(_mm_srli_si128(v6, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CB90), 4)),
                                 8)),
                             *(__m128i *)(v5 + 1588)),
                           _mm_srli_epi32(
                             _mm_or_si128(
                               _mm_and_si128(*(__m128i *)(v5 + 4), G4_BITCAST<__m128i>(xmmword_1C7C250)),
                               _mm_and_si128(*(__m128i *)v5, G4_BITCAST<__m128i>(xmmword_1C7C2A0))),
                             1u));
        v5 += 16;
      }
      while ( v5 != (char *)&glotv3::Utils::s_WithGenerator[220] );
      glotv3::Utils::s_WithGenerator[220] = ((glotv3::Utils::s_WithGenerator[220] & 0x80000000
                                            | glotv3::Utils::s_WithGenerator[221] & 0x7FFFFFFF) >> 1)
                                          ^ glotv3::Utils::s_WithGenerator[617]
                                          ^ (-1727483681 * (glotv3::Utils::s_WithGenerator[221] & 1));
      glotv3::Utils::s_WithGenerator[221] = ((glotv3::Utils::s_WithGenerator[222] & 0x7FFFFFFF
                                            | glotv3::Utils::s_WithGenerator[221] & 0x80000000) >> 1)
                                          ^ glotv3::Utils::s_WithGenerator[618]
                                          ^ (-1727483681 * (glotv3::Utils::s_WithGenerator[222] & 1));
      glotv3::Utils::s_WithGenerator[222] = ((glotv3::Utils::s_WithGenerator[222] & 0x80000000
                                            | glotv3::Utils::s_WithGenerator[223] & 0x7FFFFFFF) >> 1)
                                          ^ glotv3::Utils::s_WithGenerator[619]
                                          ^ (-1727483681 * (glotv3::Utils::s_WithGenerator[223] & 1));
      glotv3::Utils::s_WithGenerator[223] = ((glotv3::Utils::s_WithGenerator[223] & 0x80000000
                                            | glotv3::Utils::s_WithGenerator[224] & 0x7FFFFFFF) >> 1)
                                          ^ glotv3::Utils::s_WithGenerator[620]
                                          ^ (-1727483681 * (glotv3::Utils::s_WithGenerator[224] & 1));
      glotv3::Utils::s_WithGenerator[224] = ((glotv3::Utils::s_WithGenerator[224] & 0x80000000
                                            | glotv3::Utils::s_WithGenerator[225] & 0x7FFFFFFF) >> 1)
                                          ^ glotv3::Utils::s_WithGenerator[621]
                                          ^ (-1727483681 * (glotv3::Utils::s_WithGenerator[225] & 1));
      glotv3::Utils::s_WithGenerator[225] = ((glotv3::Utils::s_WithGenerator[225] & 0x80000000
                                            | glotv3::Utils::s_WithGenerator[226] & 0x7FFFFFFF) >> 1)
                                          ^ glotv3::Utils::s_WithGenerator[622]
                                          ^ (-1727483681 * (glotv3::Utils::s_WithGenerator[226] & 1));
      glotv3::Utils::s_WithGenerator[226] = ((glotv3::Utils::s_WithGenerator[226] & 0x80000000
                                            | glotv3::Utils::s_WithGenerator[227] & 0x7FFFFFFF) >> 1)
                                          ^ glotv3::Utils::s_WithGenerator[623]
                                          ^ (-1727483681 * (glotv3::Utils::s_WithGenerator[227] & 1));
      v7 = (char *)&glotv3::Utils::s_WithGenerator[227];
      do
      {
        v8 = *(__m128i *)(v7 + 4);
        v9 = _mm_and_si128(v8, G4_BITCAST<__m128i>(xmmword_1C7C740));
        *(__m128i *)v7 = _mm_xor_si128(
                           _mm_xor_si128(
                             _mm_unpacklo_epi32(
                               _mm_shuffle_epi32(_mm_mul_epu32(v9, G4_BITCAST<__m128i>(xmmword_1C7CB90)), 8),
                               _mm_shuffle_epi32(
                                 _mm_mul_epu32(_mm_srli_si128(v9, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CB90), 4)),
                                 8)),
                             *(__m128i *)(v7 - 908)),
                           _mm_srli_epi32(
                             _mm_or_si128(
                               _mm_and_si128(v8, G4_BITCAST<__m128i>(xmmword_1C7C250)),
                               _mm_and_si128(*(__m128i *)v7, G4_BITCAST<__m128i>(xmmword_1C7C2A0))),
                             1u));
        v7 += 16;
      }
      while ( v7 != (char *)&glotv3::Utils::s_WithGenerator[623] );
      v2 = glotv3::Utils::s_WithGenerator[0];
      v1 = 1;
      glotv3::Utils::s_WithGenerator[623] = ((glotv3::Utils::s_WithGenerator[623] & 0x80000000
                                            | glotv3::Utils::s_WithGenerator[0] & 0x7FFFFFFF) >> 1)
                                          ^ glotv3::Utils::s_WithGenerator[396]
                                          ^ (-1727483681 * (glotv3::Utils::s_WithGenerator[0] & 1));
    }
    else
    {
      v2 = glotv3::Utils::s_WithGenerator[v1++];
    }
    v3 = v2 ^ (v2 >> 11) ^ ((v2 ^ (v2 >> 11)) << 7) & 0x9D2C5680;
    v4 = (v3 ^ (v3 << 15) & 0xEFC60000 ^ (uint64_t)((v3 ^ (v3 << 15) & 0xEFC60000) >> 18)) / v25;
  }
  while ( v24 < v4 );
  glotv3::Utils::s_WithGenerator[624] = v1;
  if ( v23 >= 0 )
    goto LABEL_17;
LABEL_20:
  v14 = v23;
  v23 += v4;
  v15 = ~v14;
  if ( v15 >= v4 )
    return v23;
  return v4 + ~v15;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Utils::GetUUID  (binary VA: 0x1331040)
// Original: glotv3::Utils::GetUUID
// ----------------------------------------------------------------------------
glotv3::Utils::Self * glotv3::Utils::GetUUID(glotv3::Utils::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int *v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  int *v13;
  int v14;
  __m128i *v15;
  __m128i *v16;
  __m128i *v17;
  unsigned int v18;
  __m128i *v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  int v24;
  int *v25;
  int v26;
  bool v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  int v32;
  int v33;
  int *v34;
  __m128i *v35;
  __m128i *v36;
  __m128i *v37;
  __m128i *v38;
  unsigned int v39;
  __m128i v40;
  __m128i v41;
  __m128i v42;
  __m128i v43;
  int v44;
  int *v45;
  int v46;
  int v47;
  unsigned int v48;
  int v49;
  unsigned int v50;
  int v51;
  int v52;
  int v53;
  unsigned int *v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  int *v60;
  int v61;
  __m128i *v62;
  __m128i *v63;
  __m128i *v64;
  unsigned int v65;
  __m128i *v66;
  __m128i v67;
  __m128i v68;
  __m128i v69;
  __m128i v70;
  int v71;
  int *v72;
  int v73;
  unsigned int v74;
  unsigned int v75;
  unsigned int v76;
  unsigned int v77;
  int v78;
  int v79;
  int *v80;
  __m128i *v81;
  __m128i *v82;
  __m128i *v83;
  __m128i *v84;
  __m128i v85;
  __m128i v86;
  __m128i v87;
  __m128i v88;
  int v89;
  int *v90;
  int v91;
  int v92;
  unsigned int v93;
  int v94;
  unsigned int *v95;
  unsigned int v96;
  unsigned int v97;
  char *v98;
  int v99;
  int (**v100)(int);
  int v101;
  unsigned int v102;
  int v103;
  uint8_t *v104;
  char v105;
  uint8_t *v106;
  char v107;
  uint32_t *v108;
  int v109;
  int v110;
  int v111;
  int v112;
  char *v114;
  int v115;
  char *v116;
  int k;
  int (**v118)(int);
  char *v119;
  char *v120;
  uint8_t *v121;
  int v122;
  char v123;
  int v124;
  uint8_t *v125;
  char v126;
  int m;
  uint8_t *v128;
  char v129;
  int *v130;
  int v131;
  int j;
  __m128i *v133;
  __m128i *v134;
  __m128i *v135;
  __m128i *v136;
  unsigned int v137;
  __m128i v138;
  __m128i v139;
  __m128i v140;
  __m128i v141;
  int v142;
  int *v143;
  int v144;
  unsigned int v145;
  unsigned int v146;
  unsigned int v147;
  unsigned int v148;
  int v149;
  int v150;
  int *v151;
  __m128i *v152;
  __m128i *v153;
  __m128i *v154;
  __m128i *v155;
  unsigned int v156;
  __m128i v157;
  __m128i v158;
  __m128i v159;
  __m128i v160;
  int v161;
  int *v162;
  int v163;
  int *v164;
  int v165;
  int i;
  __m128i *v167;
  __m128i *v168;
  __m128i *v169;
  __m128i *v170;
  unsigned int v171;
  __m128i v172;
  __m128i v173;
  __m128i v174;
  __m128i v175;
  int v176;
  int *v177;
  int v178;
  unsigned int v179;
  unsigned int v180;
  unsigned int v181;
  unsigned int v182;
  unsigned int v183;
  int v184;
  int v185;
  int *v186;
  __m128i *v187;
  __m128i *v188;
  __m128i *v189;
  __m128i *v190;
  unsigned int v191;
  __m128i v192;
  __m128i v193;
  __m128i v194;
  __m128i v195;
  int v196;
  int *v197;
  int v198;
  typedef int _g4_t_v199;
  typedef char *_g4_t_v200;
  typedef char *_g4_t_v201;
  typedef int _g4_t_v202;
  typedef int _g4_t_v203;
  typedef int _g4_t_v204;
  typedef unsigned int _g4_t_v205;
  typedef unsigned int _g4_t_v206;
  typedef unsigned int _g4_t_v207;
  typedef int _g4_t_v208;
  typedef int _g4_t_v209;
  typedef unsigned int _g4_t_v210;
  typedef int _g4_t_v211;
  typedef int _g4_t_v212;
  typedef int _g4_t_v213;
  typedef int *_g4_t_v214;
  typedef unsigned int *_g4_t_v215;
  typedef unsigned int _g4_t_v216;
  typedef int _g4_t_v217;
  typedef unsigned int _g4_t_v218;
  typedef unsigned int _g4_t_v219;
  typedef int _g4_t_v220;
  typedef unsigned int _g4_t_v221;
  typedef unsigned int _g4_t_v222;
  typedef unsigned int _g4_t_v223;
  typedef unsigned int _g4_t_v224;
  typedef unsigned int _g4_t_v225;
  typedef unsigned int _g4_t_v226;
  typedef char _g4_t_v227;
  typedef unsigned int _g4_t_v228;
  typedef unsigned int _g4_t_v229;
  typedef unsigned int _g4_t_v230;
  typedef unsigned int _g4_t_v231;
  typedef unsigned int _g4_t_v232;
  typedef unsigned int _g4_t_v233;
  typedef unsigned int _g4_t_v234;
  typedef char _g4_t_v235;
  typedef unsigned int _g4_t_v236;
  typedef unsigned int _g4_t_v237;
  typedef unsigned int _g4_t_v238;
  typedef unsigned int *_g4_t_v239;
  typedef char _g4_t_v240;
  typedef int _g4_t_v241;
  typedef int _g4_t_v242;
  typedef unsigned int _g4_t_v243;
  typedef int _g4_t_v244;
  typedef unsigned int _g4_t_v245;
  typedef int _g4_t_v246;
  typedef int _g4_t_v247;
  typedef char _g4_t_v248;
  typedef unsigned int _g4_t_v249;
  typedef int _g4_t_v250;
  typedef int _g4_t_v251;
  typedef unsigned int _g4_t_v252;
  typedef int _g4_t_v253;
  typedef int _g4_t_v254;
  typedef unsigned int _g4_t_v255;
  typedef int _g4_t_v256;
  typedef unsigned int _g4_t_v257;
  typedef int _g4_t_v258;
  typedef unsigned int _g4_t_v259;
  typedef unsigned int _g4_t_v260;
  typedef int _g4_t_v261;
  typedef char *_g4_t_v262;
  typedef int _g4_t_v263;
  typedef unsigned int _g4_t_v264;
  typedef int _g4_t_v265;
  typedef int _g4_t_v266;
  typedef unsigned int _g4_t_v267;
  typedef int _g4_t_v268;
  typedef int _g4_t_v269;
  typedef int _g4_t_v270;
  typedef int _g4_t_v271;
  typedef int _g4_t_v272;
  typedef uint32_t _g4_t_v273[4];
  typedef uint8_t _g4_t_v274[6];
  typedef char _g4_t_v275;
  typedef char _g4_t_v276;
  typedef int _g4_t_v277;
  typedef uint32_t _g4_t_v278[5];
  typedef uint32_t _g4_t_v279[7];
  typedef int (**_g4_t_v280)(int);
  typedef uint32_t _g4_t_v281[4];
  typedef void *_g4_t_v282;
  typedef int _g4_t_v283;
  typedef int _g4_t_v284;
  typedef uint32_t _g4_t_v285[2];
  typedef uint32_t *_g4_t_v286;
  typedef uint32_t _g4_t_v287[29];
  typedef char _g4_t_v288;
  typedef char _g4_t_v289;
  typedef int _g4_t_v290;
  typedef int _g4_t_v291;
  typedef int _g4_t_v292;
  typedef int _g4_t_v293;
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (0u + sizeof(_g4_t_v199)) > _g4_s0 ? (0u + sizeof(_g4_t_v199)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v200)) > _g4_s1 ? (0u + sizeof(_g4_t_v200)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v201)) > _g4_s2 ? (0u + sizeof(_g4_t_v201)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v202)) > _g4_s3 ? (0u + sizeof(_g4_t_v202)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v203)) > _g4_s4 ? (0u + sizeof(_g4_t_v203)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v204)) > _g4_s5 ? (4u + sizeof(_g4_t_v204)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v205)) > _g4_s6 ? (8u + sizeof(_g4_t_v205)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v206)) > _g4_s7 ? (12u + sizeof(_g4_t_v206)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v207)) > _g4_s8 ? (12u + sizeof(_g4_t_v207)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v208)) > _g4_s9 ? (12u + sizeof(_g4_t_v208)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v209)) > _g4_s10 ? (12u + sizeof(_g4_t_v209)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v210)) > _g4_s11 ? (16u + sizeof(_g4_t_v210)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v211)) > _g4_s12 ? (20u + sizeof(_g4_t_v211)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v212)) > _g4_s13 ? (20u + sizeof(_g4_t_v212)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v213)) > _g4_s14 ? (24u + sizeof(_g4_t_v213)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v214)) > _g4_s15 ? (24u + sizeof(_g4_t_v214)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v215)) > _g4_s16 ? (28u + sizeof(_g4_t_v215)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v216)) > _g4_s17 ? (28u + sizeof(_g4_t_v216)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v217)) > _g4_s18 ? (28u + sizeof(_g4_t_v217)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v218)) > _g4_s19 ? (44u + sizeof(_g4_t_v218)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v219)) > _g4_s20 ? (44u + sizeof(_g4_t_v219)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v220)) > _g4_s21 ? (44u + sizeof(_g4_t_v220)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_v221)) > _g4_s22 ? (44u + sizeof(_g4_t_v221)) : _g4_s22,
    _g4_s24 = (44u + sizeof(_g4_t_v222)) > _g4_s23 ? (44u + sizeof(_g4_t_v222)) : _g4_s23,
    _g4_s25 = (44u + sizeof(_g4_t_v223)) > _g4_s24 ? (44u + sizeof(_g4_t_v223)) : _g4_s24,
    _g4_s26 = (44u + sizeof(_g4_t_v224)) > _g4_s25 ? (44u + sizeof(_g4_t_v224)) : _g4_s25,
    _g4_s27 = (60u + sizeof(_g4_t_v225)) > _g4_s26 ? (60u + sizeof(_g4_t_v225)) : _g4_s26,
    _g4_s28 = (60u + sizeof(_g4_t_v226)) > _g4_s27 ? (60u + sizeof(_g4_t_v226)) : _g4_s27,
    _g4_s29 = (60u + sizeof(_g4_t_v227)) > _g4_s28 ? (60u + sizeof(_g4_t_v227)) : _g4_s28,
    _g4_s30 = (60u + sizeof(_g4_t_v228)) > _g4_s29 ? (60u + sizeof(_g4_t_v228)) : _g4_s29,
    _g4_s31 = (60u + sizeof(_g4_t_v229)) > _g4_s30 ? (60u + sizeof(_g4_t_v229)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_v230)) > _g4_s31 ? (76u + sizeof(_g4_t_v230)) : _g4_s31,
    _g4_s33 = (76u + sizeof(_g4_t_v231)) > _g4_s32 ? (76u + sizeof(_g4_t_v231)) : _g4_s32,
    _g4_s34 = (76u + sizeof(_g4_t_v232)) > _g4_s33 ? (76u + sizeof(_g4_t_v232)) : _g4_s33,
    _g4_s35 = (76u + sizeof(_g4_t_v233)) > _g4_s34 ? (76u + sizeof(_g4_t_v233)) : _g4_s34,
    _g4_s36 = (76u + sizeof(_g4_t_v234)) > _g4_s35 ? (76u + sizeof(_g4_t_v234)) : _g4_s35,
    _g4_s37 = (76u + sizeof(_g4_t_v235)) > _g4_s36 ? (76u + sizeof(_g4_t_v235)) : _g4_s36,
    _g4_s38 = (76u + sizeof(_g4_t_v236)) > _g4_s37 ? (76u + sizeof(_g4_t_v236)) : _g4_s37,
    _g4_s39 = (76u + sizeof(_g4_t_v237)) > _g4_s38 ? (76u + sizeof(_g4_t_v237)) : _g4_s38,
    _g4_s40 = (92u + sizeof(_g4_t_v238)) > _g4_s39 ? (92u + sizeof(_g4_t_v238)) : _g4_s39,
    _g4_s41 = (92u + sizeof(_g4_t_v239)) > _g4_s40 ? (92u + sizeof(_g4_t_v239)) : _g4_s40,
    _g4_s42 = (92u + sizeof(_g4_t_v240)) > _g4_s41 ? (92u + sizeof(_g4_t_v240)) : _g4_s41,
    _g4_s43 = (92u + sizeof(_g4_t_v241)) > _g4_s42 ? (92u + sizeof(_g4_t_v241)) : _g4_s42,
    _g4_s44 = (92u + sizeof(_g4_t_v242)) > _g4_s43 ? (92u + sizeof(_g4_t_v242)) : _g4_s43,
    _g4_s45 = (96u + sizeof(_g4_t_v243)) > _g4_s44 ? (96u + sizeof(_g4_t_v243)) : _g4_s44,
    _g4_s46 = (96u + sizeof(_g4_t_v244)) > _g4_s45 ? (96u + sizeof(_g4_t_v244)) : _g4_s45,
    _g4_s47 = (96u + sizeof(_g4_t_v245)) > _g4_s46 ? (96u + sizeof(_g4_t_v245)) : _g4_s46,
    _g4_s48 = (96u + sizeof(_g4_t_v246)) > _g4_s47 ? (96u + sizeof(_g4_t_v246)) : _g4_s47,
    _g4_s49 = (96u + sizeof(_g4_t_v247)) > _g4_s48 ? (96u + sizeof(_g4_t_v247)) : _g4_s48,
    _g4_s50 = (96u + sizeof(_g4_t_v248)) > _g4_s49 ? (96u + sizeof(_g4_t_v248)) : _g4_s49,
    _g4_s51 = (96u + sizeof(_g4_t_v249)) > _g4_s50 ? (96u + sizeof(_g4_t_v249)) : _g4_s50,
    _g4_s52 = (96u + sizeof(_g4_t_v250)) > _g4_s51 ? (96u + sizeof(_g4_t_v250)) : _g4_s51,
    _g4_s53 = (96u + sizeof(_g4_t_v251)) > _g4_s52 ? (96u + sizeof(_g4_t_v251)) : _g4_s52,
    _g4_s54 = (96u + sizeof(_g4_t_v252)) > _g4_s53 ? (96u + sizeof(_g4_t_v252)) : _g4_s53,
    _g4_s55 = (96u + sizeof(_g4_t_v253)) > _g4_s54 ? (96u + sizeof(_g4_t_v253)) : _g4_s54,
    _g4_s56 = (96u + sizeof(_g4_t_v254)) > _g4_s55 ? (96u + sizeof(_g4_t_v254)) : _g4_s55,
    _g4_s57 = (100u + sizeof(_g4_t_v255)) > _g4_s56 ? (100u + sizeof(_g4_t_v255)) : _g4_s56,
    _g4_s58 = (100u + sizeof(_g4_t_v256)) > _g4_s57 ? (100u + sizeof(_g4_t_v256)) : _g4_s57,
    _g4_s59 = (100u + sizeof(_g4_t_v257)) > _g4_s58 ? (100u + sizeof(_g4_t_v257)) : _g4_s58,
    _g4_s60 = (100u + sizeof(_g4_t_v258)) > _g4_s59 ? (100u + sizeof(_g4_t_v258)) : _g4_s59,
    _g4_s61 = (100u + sizeof(_g4_t_v259)) > _g4_s60 ? (100u + sizeof(_g4_t_v259)) : _g4_s60,
    _g4_s62 = (100u + sizeof(_g4_t_v260)) > _g4_s61 ? (100u + sizeof(_g4_t_v260)) : _g4_s61,
    _g4_s63 = (100u + sizeof(_g4_t_v261)) > _g4_s62 ? (100u + sizeof(_g4_t_v261)) : _g4_s62,
    _g4_s64 = (100u + sizeof(_g4_t_v262)) > _g4_s63 ? (100u + sizeof(_g4_t_v262)) : _g4_s63,
    _g4_s65 = (100u + sizeof(_g4_t_v263)) > _g4_s64 ? (100u + sizeof(_g4_t_v263)) : _g4_s64,
    _g4_s66 = (100u + sizeof(_g4_t_v264)) > _g4_s65 ? (100u + sizeof(_g4_t_v264)) : _g4_s65,
    _g4_s67 = (100u + sizeof(_g4_t_v265)) > _g4_s66 ? (100u + sizeof(_g4_t_v265)) : _g4_s66,
    _g4_s68 = (100u + sizeof(_g4_t_v266)) > _g4_s67 ? (100u + sizeof(_g4_t_v266)) : _g4_s67,
    _g4_s69 = (100u + sizeof(_g4_t_v267)) > _g4_s68 ? (100u + sizeof(_g4_t_v267)) : _g4_s68,
    _g4_s70 = (100u + sizeof(_g4_t_v268)) > _g4_s69 ? (100u + sizeof(_g4_t_v268)) : _g4_s69,
    _g4_s71 = (110u + sizeof(_g4_t_v269)) > _g4_s70 ? (110u + sizeof(_g4_t_v269)) : _g4_s70,
    _g4_s72 = (113u + sizeof(_g4_t_v270)) > _g4_s71 ? (113u + sizeof(_g4_t_v270)) : _g4_s71,
    _g4_s73 = (116u + sizeof(_g4_t_v271)) > _g4_s72 ? (116u + sizeof(_g4_t_v271)) : _g4_s72,
    _g4_s74 = (120u + sizeof(_g4_t_v272)) > _g4_s73 ? (120u + sizeof(_g4_t_v272)) : _g4_s73,
    _g4_s75 = (124u + sizeof(_g4_t_v273)) > _g4_s74 ? (124u + sizeof(_g4_t_v273)) : _g4_s74,
    _g4_s76 = (140u + sizeof(_g4_t_v274)) > _g4_s75 ? (140u + sizeof(_g4_t_v274)) : _g4_s75,
    _g4_s77 = (146u + sizeof(_g4_t_v275)) > _g4_s76 ? (146u + sizeof(_g4_t_v275)) : _g4_s76,
    _g4_s78 = (148u + sizeof(_g4_t_v276)) > _g4_s77 ? (148u + sizeof(_g4_t_v276)) : _g4_s77,
    _g4_s79 = (156u + sizeof(_g4_t_v277)) > _g4_s78 ? (156u + sizeof(_g4_t_v277)) : _g4_s78,
    _g4_s80 = (164u + sizeof(_g4_t_v278)) > _g4_s79 ? (164u + sizeof(_g4_t_v278)) : _g4_s79,
    _g4_s81 = (184u + sizeof(_g4_t_v279)) > _g4_s80 ? (184u + sizeof(_g4_t_v279)) : _g4_s80,
    _g4_s82 = (212u + sizeof(_g4_t_v280)) > _g4_s81 ? (212u + sizeof(_g4_t_v280)) : _g4_s81,
    _g4_s83 = (216u + sizeof(_g4_t_v281)) > _g4_s82 ? (216u + sizeof(_g4_t_v281)) : _g4_s82,
    _g4_s84 = (232u + sizeof(_g4_t_v282)) > _g4_s83 ? (232u + sizeof(_g4_t_v282)) : _g4_s83,
    _g4_s85 = (236u + sizeof(_g4_t_v283)) > _g4_s84 ? (236u + sizeof(_g4_t_v283)) : _g4_s84,
    _g4_s86 = (240u + sizeof(_g4_t_v284)) > _g4_s85 ? (240u + sizeof(_g4_t_v284)) : _g4_s85,
    _g4_s87 = (244u + sizeof(_g4_t_v285)) > _g4_s86 ? (244u + sizeof(_g4_t_v285)) : _g4_s86,
    _g4_s88 = (252u + sizeof(_g4_t_v286)) > _g4_s87 ? (252u + sizeof(_g4_t_v286)) : _g4_s87,
    _g4_s89 = (256u + sizeof(_g4_t_v287)) > _g4_s88 ? (256u + sizeof(_g4_t_v287)) : _g4_s88,
    _g4_s90 = (372u + sizeof(_g4_t_v288)) > _g4_s89 ? (372u + sizeof(_g4_t_v288)) : _g4_s89,
    _g4_s91 = (373u + sizeof(_g4_t_v289)) > _g4_s90 ? (373u + sizeof(_g4_t_v289)) : _g4_s90,
    _g4_s92 = (376u + sizeof(_g4_t_v290)) > _g4_s91 ? (376u + sizeof(_g4_t_v290)) : _g4_s91,
    _g4_s93 = (380u + sizeof(_g4_t_v291)) > _g4_s92 ? (380u + sizeof(_g4_t_v291)) : _g4_s92,
    _g4_s94 = (384u + sizeof(_g4_t_v292)) > _g4_s93 ? (384u + sizeof(_g4_t_v292)) : _g4_s93,
    _g4_s95 = (388u + sizeof(_g4_t_v293)) > _g4_s94 ? (388u + sizeof(_g4_t_v293)) : _g4_s94
  };
  alignas(16) uint8_t _g4_sf[_g4_s95];
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 0u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 0u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 0u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 0u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 0u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 4u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 8u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 12u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 12u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 12u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 12u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 16u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 20u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 20u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 24u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 24u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 28u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 28u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 28u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 44u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 44u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 44u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 44u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 44u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 44u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 44u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 60u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 60u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 60u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 60u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 60u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 76u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 76u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 76u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 76u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 76u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 76u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 76u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 76u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 92u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 92u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 92u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 92u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 92u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 96u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 96u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 96u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 96u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 96u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 96u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 96u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 96u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 96u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 96u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 96u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 96u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 100u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 100u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 100u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 100u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 100u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 100u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 100u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 100u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 100u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 100u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 100u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 100u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 100u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 100u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 110u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 113u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 116u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 120u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 124u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 140u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 146u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 148u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 156u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 164u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 184u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 212u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 216u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 232u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 236u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 240u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 244u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 252u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 256u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 372u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 373u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 376u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 380u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 384u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 388u);

  do
    v1 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_GetUUIDMutex);
  while ( v1 == 4 );
  v4 = v1;
  if ( v1 != 0 )
  {
    v203 = (int)(uintptr_t)(sub_18F81E0(v3, v2));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v271), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v269));
    sub_19042E0(v278, &v271);
    g4_std::string::Destroy(&v271);
    v278[2] = v4;
    v278[3] = v203;
    v278[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v278[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v215 = (unsigned int *)(*(uint8_t **)unk_2117448);
  v210 = (unsigned int)(uintptr_t)((*(uint8_t **)unk_211744C));
  v5 = (*(uint8_t **)unk_2117450) - (*(uint8_t **)unk_211744C);
  v206 = (*(uint8_t **)unk_2117450) - (*(uint8_t **)unk_211744C);
  if ( (*(uint8_t **)unk_2117450) != (*(uint8_t **)unk_211744C) )
  {
    if ( v5 == -1 )
    {
      v47 = *(uint32_t *)((*(uint8_t **)unk_2117448) + 2496);
      if ( v47 == 624 )
      {
        v223 = -((uint8_t)((*(const int *)&unk_2117448) &0xF) >> 2) &3;
        if ( v223 != 0 )
        {
          v164 = (int *)((*(uint8_t **)unk_2117448) + 4);
          v165 = **(uint32_t **)unk_2117448;
          for ( i = 0; ; ++i )
          {
            v252 = v165 & 0x80000000;
            v165 = *v164;
            v266 = i + 1;
            *(v164 - 1) = ((v252 | *v164 & 0x7FFFFFFF) >> 1) ^ v164[396] ^ (-1727483681 * (*v164 & 1));
            ++v164;
            if ( v223 <= i + 1 )
              break;
          }
          v253 = 221 - i;
        }
        else
        {
          v253 = 222;
          v266 = 0;
        }
        v236 = (222 - v223) >> 2;
        v241 = 4 * v236;
        if ( 4 * v236 == 0 )
          goto LABEL_166;
        v167 = (__m128i *)&v215[v223];
        v168 = (__m128i *)((char *)g4_m128_ptr<int64_t>(*(v167)) + 4);
        v169 = v167;
        v170 = (__m128i *)((char *)v167 + 1588);
        v171 = 0;
        do
        {
          v172 = _mm_and_si128(*v168, G4_BITCAST<__m128i>(xmmword_1C7C250));
          v173 = _mm_and_si128(*v168, G4_BITCAST<__m128i>(xmmword_1C7C740));
          ++v171;
          ++v168;
          v174 = _mm_xor_si128(
                   _mm_unpacklo_epi32(
                     _mm_shuffle_epi32(_mm_mul_epu32(v173, G4_BITCAST<__m128i>(xmmword_1C7CB90)), 8),
                     _mm_shuffle_epi32(
                       _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CB90), 4), _mm_srli_si128(v173, 4)),
                       8)),
                   *v170++);
          v175 = *v167++;
          *v169++ = _mm_xor_si128(
                      v174,
                      _mm_srli_epi32(_mm_or_si128(v172, _mm_and_si128(v175, G4_BITCAST<__m128i>(xmmword_1C7C2A0))), 1u));
        }
        while ( v171 < v236 );
        v266 += v241;
        v253 -= v241;
        if ( 222 - v223 != v241 )
        {
LABEL_166:
          v176 = v215[v266];
          v177 = (int *)&v215[v266 + 1];
          do
          {
            v178 = v176;
            v176 = *v177;
            v27 = v253-- == 1;
            *(v177 - 1) = ((v178 & 0x80000000 | *v177 & 0x7FFFFFFF) >> 1) ^ v177[396] ^ (-1727483681 * (*v177 & 1));
            ++v177;
          }
          while ( !v27 );
        }
        v179 = v215[224];
        v180 = v215[223];
        v215[222] = ((v215[222] & 0x80000000 | v180 & 0x7FFFFFFF) >> 1) ^ v215[619] ^ (-1727483681 * (v180 & 1));
        v181 = v215[225];
        v215[223] = ((v179 & 0x7FFFFFFF | v180 & 0x80000000) >> 1) ^ v215[620] ^ (-1727483681 * (v179 & 1));
        v182 = v181 & 0x7FFFFFFF | v179 & 0x80000000;
        v183 = v215[226];
        v215[224] = (v182 >> 1) ^ v215[621] ^ (-1727483681 * (v181 & 1));
        v215[225] = ((v183 & 0x7FFFFFFF | v181 & 0x80000000) >> 1) ^ v215[622] ^ (-1727483681 * (v183 & 1));
        v184 = v215[227];
        v215[226] = ((v184 & 0x7FFFFFFF | v183 & 0x80000000) >> 1) ^ v215[623] ^ (-1727483681 * (v184 & 1));
        v224 = -((uint8_t)(((uint8_t)(uintptr_t)v215 - 116) & 0xF) >> 2) & 3;
        if ( v224 != 0 )
        {
          v185 = 227;
          v186 = (int *)(v215 + 228);
          while ( 1 )
          {
            v267 = v184 & 0x80000000;
            v254 = v185 + 1;
            v184 = *v186;
            *(v186 - 1) = ((v267 | *v186 & 0x7FFFFFFF) >> 1) ^ *(v186 - 228) ^ (-1727483681 * (*v186 & 1));
            ++v186;
            if ( v185 - 226 >= v224 )
              break;
            ++v185;
          }
          v268 = 622 - v185;
        }
        else
        {
          v268 = 396;
          v254 = 227;
        }
        v237 = (396 - v224) >> 2;
        v242 = 4 * v237;
        if ( 4 * v237 == 0 )
          goto LABEL_177;
        v187 = (__m128i *)&v215[v224 + 227];
        v188 = (__m128i *)&v215[v224 + 228];
        v189 = v187;
        v190 = (__m128i *)&v215[v224];
        v191 = 0;
        do
        {
          v192 = _mm_and_si128(*v188, G4_BITCAST<__m128i>(xmmword_1C7C250));
          v193 = _mm_and_si128(*v188, G4_BITCAST<__m128i>(xmmword_1C7C740));
          ++v191;
          ++v188;
          v194 = _mm_xor_si128(
                   _mm_unpacklo_epi32(
                     _mm_shuffle_epi32(_mm_mul_epu32(v193, G4_BITCAST<__m128i>(xmmword_1C7CB90)), 8),
                     _mm_shuffle_epi32(
                       _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CB90), 4), _mm_srli_si128(v193, 4)),
                       8)),
                   *v190++);
          v195 = *v187++;
          *v189++ = _mm_xor_si128(
                      v194,
                      _mm_srli_epi32(_mm_or_si128(v192, _mm_and_si128(v195, G4_BITCAST<__m128i>(xmmword_1C7C2A0))), 1u));
        }
        while ( v191 < v237 );
        v254 += v242;
        v268 -= v242;
        if ( 396 - v224 != v242 )
        {
LABEL_177:
          v196 = v215[v254];
          v197 = (int *)&v215[v254 + 1];
          do
          {
            v198 = v196;
            v196 = *v197;
            v27 = v268-- == 1;
            *(v197 - 1) = ((v198 & 0x80000000 | *v197 & 0x7FFFFFFF) >> 1) ^ *(v197 - 228) ^ (-1727483681 * (*v197 & 1));
            ++v197;
          }
          while ( !v27 );
        }
        v48 = *v215;
        v215[623] = ((v215[623] & 0x80000000 | *v215 & 0x7FFFFFFF) >> 1) ^ v215[396] ^ (-1727483681 * (*v215 & 1));
        v49 = 1;
      }
      else
      {
        v48 = *(uint32_t *)((*(uint8_t **)unk_2117448) + 4 * v47);
        v49 = v47 + 1;
      }
      v215[624] = v49;
      v50 = v48 ^ (v48 >> 11) ^ ((v48 ^ (v48 >> 11)) << 7) & 0x9D2C5680;
      v210 += v50 ^ (v50 << 15) & 0xEFC60000 ^ ((v50 ^ (v50 << 15) & 0xEFC60000) >> 18);
    }
    else
    {
      v238 = 0xFFFFFFFF / (v5 + 1) + (v5 == 0xFFFFFFFF % (v5 + 1));
      v6 = *(uint32_t *)((*(uint8_t **)unk_2117448) + 2496);
      v218 = -((uint8_t)((*(const int *)&unk_2117448) &0xF) >> 2) &3;
      do
      {
        if ( v6 == 624 )
        {
          if ( v218 != 0 )
          {
            v11 = 0;
            v12 = *v215;
            v13 = (int *)(v215 + 1);
            do
            {
              v255 = v12 & 0x80000000;
              v243 = v11 + 1;
              v12 = *v13;
              *(v13 - 1) = ((v255 | *v13 & 0x7FFFFFFF) >> 1) ^ v13[396] ^ (-1727483681 * (*v13 & 1));
              v14 = 221 - v11;
              v11 = v243;
              ++v13;
            }
            while ( v218 > v243 );
            v256 = v14;
          }
          else
          {
            v256 = 222;
            v243 = 0;
          }
          v230 = (222 - v218) >> 2;
          v213 = 4 * v230;
          if ( 4 * v230 == 0 )
            goto LABEL_17;
          v15 = (__m128i *)&v215[v218];
          v16 = (__m128i *)((char *)v15 + 1588);
          v17 = (__m128i *)((char *)g4_m128_ptr<int64_t>(*(v15)) + 4);
          v18 = 0;
          v19 = v15;
          do
          {
            v20 = _mm_and_si128(*v17, G4_BITCAST<__m128i>(xmmword_1C7C250));
            v21 = _mm_and_si128(*v17, G4_BITCAST<__m128i>(xmmword_1C7C740));
            ++v18;
            ++v17;
            v22 = _mm_xor_si128(
                    _mm_unpacklo_epi32(
                      _mm_shuffle_epi32(_mm_mul_epu32(v21, G4_BITCAST<__m128i>(xmmword_1C7CB90)), 8),
                      _mm_shuffle_epi32(
                        _mm_mul_epu32(_mm_srli_si128(v21, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CB90), 4)),
                        8)),
                    *v16++);
            v23 = *v15++;
            *v19++ = _mm_xor_si128(
                       v22,
                       _mm_srli_epi32(_mm_or_si128(v20, _mm_and_si128(v23, G4_BITCAST<__m128i>(xmmword_1C7C2A0))), 1u));
          }
          while ( v18 < v230 );
          v243 += v213;
          v256 -= v213;
          if ( 222 - v218 != v213 )
          {
LABEL_17:
            v24 = v215[v243];
            v25 = (int *)&v215[v243 + 1];
            do
            {
              v26 = v24;
              v24 = *v25;
              v27 = v256-- == 1;
              *(v25 - 1) = ((v26 & 0x80000000 | *v25 & 0x7FFFFFFF) >> 1) ^ v25[396] ^ (-1727483681 * (*v25 & 1));
              ++v25;
            }
            while ( !v27 );
          }
          v28 = v215[223] & 0x80000000;
          v215[222] = ((v215[222] & 0x80000000 | v215[223] & 0x7FFFFFFF) >> 1)
                    ^ v215[619]
                    ^ (-1727483681 * (v215[223] & 1));
          v29 = v215[224];
          v215[223] = ((v28 | v29 & 0x7FFFFFFF) >> 1) ^ v215[620] ^ (-1727483681 * (v29 & 1));
          v30 = v215[225];
          v215[224] = ((v29 & 0x80000000 | v30 & 0x7FFFFFFF) >> 1) ^ v215[621] ^ (-1727483681 * (v30 & 1));
          v31 = v215[226];
          v215[225] = ((v30 & 0x80000000 | v31 & 0x7FFFFFFF) >> 1) ^ v215[622] ^ (-1727483681 * (v31 & 1));
          v32 = v215[227];
          v215[226] = ((v31 & 0x80000000 | v32 & 0x7FFFFFFF) >> 1) ^ v215[623] ^ (-1727483681 * (v32 & 1));
          v231 = -((uint8_t)(((uint8_t)(uintptr_t)v215 - 116) & 0xF) >> 2) & 3;
          if ( v231 != 0 )
          {
            v33 = 227;
            v34 = (int *)(v215 + 228);
            while ( 1 )
            {
              v257 = v32 & 0x80000000;
              v32 = *v34;
              v244 = v33 + 1;
              *(v34 - 1) = ((v257 | *v34 & 0x7FFFFFFF) >> 1) ^ *(v34 - 228) ^ (-1727483681 * (*v34 & 1));
              ++v34;
              if ( v231 <= v33 - 226 )
                break;
              ++v33;
            }
            v258 = 622 - v33;
          }
          else
          {
            v258 = 396;
            v244 = 227;
          }
          v225 = (396 - v231) >> 2;
          v211 = 4 * v225;
          if ( 4 * v225 == 0 )
            goto LABEL_28;
          v35 = (__m128i *)&v215[v231 + 227];
          v36 = (__m128i *)&v215[v231 + 228];
          v37 = v35;
          v38 = (__m128i *)&v215[v231];
          v39 = 0;
          do
          {
            v40 = _mm_and_si128(*v36, G4_BITCAST<__m128i>(xmmword_1C7C250));
            v41 = _mm_and_si128(*v36, G4_BITCAST<__m128i>(xmmword_1C7C740));
            ++v39;
            ++v36;
            v42 = _mm_xor_si128(
                    _mm_unpacklo_epi32(
                      _mm_shuffle_epi32(_mm_mul_epu32(v41, G4_BITCAST<__m128i>(xmmword_1C7CB90)), 8),
                      _mm_shuffle_epi32(
                        _mm_mul_epu32(_mm_srli_si128(v41, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CB90), 4)),
                        8)),
                    *v38++);
            v43 = *v35++;
            *v37++ = _mm_xor_si128(
                       v42,
                       _mm_srli_epi32(_mm_or_si128(v40, _mm_and_si128(v43, G4_BITCAST<__m128i>(xmmword_1C7C2A0))), 1u));
          }
          while ( v39 < v225 );
          v244 += v211;
          v258 -= v211;
          if ( 396 - v231 != v211 )
          {
LABEL_28:
            v44 = v215[v244];
            v45 = (int *)&v215[v244 + 1];
            do
            {
              v46 = v44;
              v44 = *v45;
              v27 = v258-- == 1;
              *(v45 - 1) = ((v46 & 0x80000000 | *v45 & 0x7FFFFFFF) >> 1) ^ *(v45 - 228) ^ (-1727483681 * (*v45 & 1));
              ++v45;
            }
            while ( !v27 );
          }
          v8 = *v215;
          v7 = v215;
          v6 = 1;
          v215[623] = ((v215[623] & 0x80000000 | *v215 & 0x7FFFFFFF) >> 1) ^ v215[396] ^ (-1727483681 * (*v215 & 1));
        }
        else
        {
          v7 = v215;
          v8 = v215[v6++];
        }
        v7[624] = v6;
        v9 = v8 ^ (v8 >> 11) ^ ((v8 ^ (v8 >> 11)) << 7) & 0x9D2C5680;
        v10 = (v9 ^ (v9 << 15) & 0xEFC60000 ^ (uint64_t)((v9 ^ (v9 << 15) & 0xEFC60000) >> 18)) / v238;
      }
      while ( v206 < v10 );
      v210 += v10;
    }
  }
  v214 = (int *)v274;
  v51 = 0;
  while ( 1 )
  {
    *(uint8_t *)v214 = v210 >> (8 * v51);
    v214 = (int *)((char *)v214 + 1);
    if ( v214 == &v277 )
      break;
    if ( ++v51 == 4 )
    {
      v239 = (unsigned int *)(*(uint8_t **)unk_2117448);
      v210 = (unsigned int)(uintptr_t)((*(uint8_t **)unk_211744C));
      v52 = (*(uint8_t **)unk_2117450) - (*(uint8_t **)unk_211744C);
      v205 = (*(uint8_t **)unk_2117450) - (*(uint8_t **)unk_211744C);
      if ( (*(uint8_t **)unk_2117450) == (*(uint8_t **)unk_211744C) )
        goto LABEL_68;
      if ( v52 == -1 )
      {
        v92 = *(uint32_t *)((*(uint8_t **)unk_2117448) + 2496);
        if ( v92 == 624 )
        {
          v221 = -((uint8_t)((*(const int *)&unk_2117448) &0xF) >> 2) &3;
          if ( v221 != 0 )
          {
            v130 = (int *)((*(uint8_t **)unk_2117448) + 4);
            v131 = **(uint32_t **)unk_2117448;
            for ( j = 0; ; ++j )
            {
              v249 = v131 & 0x80000000;
              v131 = *v130;
              v263 = j + 1;
              *(v130 - 1) = ((v249 | *v130 & 0x7FFFFFFF) >> 1) ^ v130[396] ^ (-1727483681 * (*v130 & 1));
              ++v130;
              if ( v221 <= j + 1 )
                break;
            }
            v250 = 221 - j;
          }
          else
          {
            v250 = 222;
            v263 = 0;
          }
          v228 = (222 - v221) >> 2;
          v208 = 4 * v228;
          if ( 4 * v228 == 0 )
            goto LABEL_142;
          v133 = (__m128i *)&v239[v221];
          v134 = (__m128i *)((char *)g4_m128_ptr<int64_t>(*(v133)) + 4);
          v135 = v133;
          v136 = (__m128i *)((char *)v133 + 1588);
          v137 = 0;
          do
          {
            v138 = _mm_and_si128(*v134, G4_BITCAST<__m128i>(xmmword_1C7C250));
            v139 = _mm_and_si128(G4_BITCAST<__m128i>(xmmword_1C7C740), *v134);
            ++v137;
            ++v134;
            v140 = _mm_xor_si128(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v139, G4_BITCAST<__m128i>(xmmword_1C7CB90)), 8),
                       _mm_shuffle_epi32(
                         _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CB90), 4), _mm_srli_si128(v139, 4)),
                         8)),
                     *v136++);
            v141 = *v133++;
            *v135++ = _mm_xor_si128(
                        v140,
                        _mm_srli_epi32(_mm_or_si128(v138, _mm_and_si128(v141, G4_BITCAST<__m128i>(xmmword_1C7C2A0))), 1u));
          }
          while ( v137 < v228 );
          v263 += v208;
          v250 -= v208;
          if ( 222 - v221 != v208 )
          {
LABEL_142:
            v142 = v239[v263];
            v143 = (int *)&v239[v263 + 1];
            do
            {
              v144 = v142;
              v142 = *v143;
              v27 = v250-- == 1;
              *(v143 - 1) = ((v144 & 0x80000000 | *v143 & 0x7FFFFFFF) >> 1) ^ v143[396] ^ (-1727483681 * (*v143 & 1));
              ++v143;
            }
            while ( !v27 );
          }
          v145 = v239[223] & 0x80000000;
          v239[222] = ((v239[222] & 0x80000000 | v239[223] & 0x7FFFFFFF) >> 1)
                    ^ v239[619]
                    ^ (-1727483681 * (v239[223] & 1));
          v146 = v239[224];
          v239[223] = ((v145 | v146 & 0x7FFFFFFF) >> 1) ^ v239[620] ^ (-1727483681 * (v146 & 1));
          v147 = v239[225];
          v148 = v239[226];
          v239[224] = ((v146 & 0x80000000 | v147 & 0x7FFFFFFF) >> 1) ^ v239[621] ^ (-1727483681 * (v147 & 1));
          v239[225] = ((v147 & 0x80000000 | v148 & 0x7FFFFFFF) >> 1) ^ v239[622] ^ (-1727483681 * (v148 & 1));
          v149 = v239[227];
          v239[226] = ((v148 & 0x80000000 | v149 & 0x7FFFFFFF) >> 1) ^ v239[623] ^ (-1727483681 * (v149 & 1));
          v222 = -((uint8_t)(((uint8_t)(uintptr_t)v239 - 116) & 0xF) >> 2) & 3;
          if ( v222 != 0 )
          {
            v150 = 227;
            v151 = (int *)(v239 + 228);
            while ( 1 )
            {
              v264 = v149 & 0x80000000;
              v251 = v150 + 1;
              v149 = *v151;
              *(v151 - 1) = ((v264 | *v151 & 0x7FFFFFFF) >> 1) ^ *(v151 - 228) ^ (-1727483681 * (*v151 & 1));
              ++v151;
              if ( v150 - 226 >= v222 )
                break;
              ++v150;
            }
            v265 = 622 - v150;
          }
          else
          {
            v265 = 396;
            v251 = 227;
          }
          v229 = (396 - v222) >> 2;
          v209 = 4 * v229;
          if ( 4 * v229 == 0 )
            goto LABEL_153;
          v152 = (__m128i *)&v239[v222 + 227];
          v153 = (__m128i *)&v239[v222 + 228];
          v154 = v152;
          v155 = (__m128i *)&v239[v222];
          v156 = 0;
          do
          {
            v157 = _mm_and_si128(*v153, G4_BITCAST<__m128i>(xmmword_1C7C250));
            v158 = _mm_and_si128(G4_BITCAST<__m128i>(xmmword_1C7C740), *v153);
            ++v156;
            ++v153;
            v159 = _mm_xor_si128(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v158, G4_BITCAST<__m128i>(xmmword_1C7CB90)), 8),
                       _mm_shuffle_epi32(
                         _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CB90), 4), _mm_srli_si128(v158, 4)),
                         8)),
                     *v155++);
            v160 = *v152++;
            *v154++ = _mm_xor_si128(
                        v159,
                        _mm_srli_epi32(_mm_or_si128(v157, _mm_and_si128(v160, G4_BITCAST<__m128i>(xmmword_1C7C2A0))), 1u));
          }
          while ( v229 > v156 );
          v251 += v209;
          v265 -= v209;
          if ( v209 != 396 - v222 )
          {
LABEL_153:
            v161 = v239[v251];
            v162 = (int *)&v239[v251 + 1];
            do
            {
              v163 = v161;
              v161 = *v162;
              v27 = v265-- == 1;
              *(v162 - 1) = ((v163 & 0x80000000 | *v162 & 0x7FFFFFFF) >> 1)
                          ^ *(v162 - 228)
                          ^ (-1727483681 * (*v162 & 1));
              ++v162;
            }
            while ( !v27 );
          }
          v93 = *v239;
          v95 = v239;
          v239[623] = ((v239[623] & 0x80000000 | *v239 & 0x7FFFFFFF) >> 1) ^ v239[396] ^ (-1727483681 * (*v239 & 1));
          v94 = 1;
        }
        else
        {
          v93 = *(uint32_t *)((*(uint8_t **)unk_2117448) + 4 * v92);
          v94 = v92 + 1;
          v95 = (unsigned int *)(*(uint8_t **)unk_2117448);
        }
        v95[624] = v94;
        v96 = v93 ^ (v93 >> 11) ^ ((v93 ^ (v93 >> 11)) << 7) & 0x9D2C5680;
        v210 += v96 ^ (v96 << 15) & 0xEFC60000 ^ ((v96 ^ (v96 << 15) & 0xEFC60000) >> 18);
LABEL_68:
        v51 = 0;
      }
      else
      {
        v53 = *(uint32_t *)((*(uint8_t **)unk_2117448) + 2496);
        v207 = 0xFFFFFFFF / (v52 + 1) + (v52 == 0xFFFFFFFF % (v52 + 1));
        v219 = -((uint8_t)((*(const int *)&unk_2117448) &0xF) >> 2) &3;
        do
        {
          if ( v53 == 624 )
          {
            if ( v219 != 0 )
            {
              v58 = 0;
              v59 = *v239;
              v60 = (int *)(v239 + 1);
              do
              {
                v245 = v59 & 0x80000000;
                v259 = v58 + 1;
                v59 = *v60;
                *(v60 - 1) = ((v245 | *v60 & 0x7FFFFFFF) >> 1) ^ v60[396] ^ (-1727483681 * (*v60 & 1));
                v61 = 221 - v58;
                v58 = v259;
                ++v60;
              }
              while ( v219 > v259 );
              v246 = v61;
            }
            else
            {
              v246 = 222;
              v259 = 0;
            }
            v232 = (222 - v219) >> 2;
            v204 = 4 * v232;
            if ( 4 * v232 == 0 )
              goto LABEL_51;
            v62 = (__m128i *)&v239[v219];
            v63 = (__m128i *)((char *)v62 + 1588);
            v64 = (__m128i *)((char *)g4_m128_ptr<int64_t>(*(v62)) + 4);
            v65 = 0;
            v66 = v62;
            do
            {
              v67 = _mm_and_si128(*v64, G4_BITCAST<__m128i>(xmmword_1C7C250));
              v68 = _mm_and_si128(G4_BITCAST<__m128i>(xmmword_1C7C740), *v64);
              ++v65;
              ++v64;
              v69 = _mm_xor_si128(
                      _mm_unpacklo_epi32(
                        _mm_shuffle_epi32(_mm_mul_epu32(v68, G4_BITCAST<__m128i>(xmmword_1C7CB90)), 8),
                        _mm_shuffle_epi32(
                          _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CB90), 4), _mm_srli_si128(v68, 4)),
                          8)),
                      *v63++);
              v70 = *v62++;
              *v66++ = _mm_xor_si128(
                         v69,
                         _mm_srli_epi32(_mm_or_si128(v67, _mm_and_si128(v70, G4_BITCAST<__m128i>(xmmword_1C7C2A0))), 1u));
            }
            while ( v65 < v232 );
            v259 += v204;
            v246 -= v204;
            if ( 222 - v219 != v204 )
            {
LABEL_51:
              v71 = v239[v259];
              v72 = (int *)&v239[v259 + 1];
              do
              {
                v73 = v71;
                v71 = *v72;
                v27 = v246-- == 1;
                *(v72 - 1) = ((v73 & 0x80000000 | *v72 & 0x7FFFFFFF) >> 1) ^ v72[396] ^ (-1727483681 * (*v72 & 1));
                ++v72;
              }
              while ( !v27 );
            }
            v74 = v239[223] & 0x80000000;
            v239[222] = ((v239[222] & 0x80000000 | v239[223] & 0x7FFFFFFF) >> 1)
                      ^ v239[619]
                      ^ (-1727483681 * (v239[223] & 1));
            v75 = v239[224];
            v239[223] = ((v74 | v75 & 0x7FFFFFFF) >> 1) ^ v239[620] ^ (-1727483681 * (v75 & 1));
            v76 = v239[225];
            v239[224] = ((v75 & 0x80000000 | v76 & 0x7FFFFFFF) >> 1) ^ v239[621] ^ (-1727483681 * (v76 & 1));
            v77 = v239[226];
            v239[225] = ((v76 & 0x80000000 | v77 & 0x7FFFFFFF) >> 1) ^ v239[622] ^ (-1727483681 * (v77 & 1));
            v78 = v239[227];
            v239[226] = ((v77 & 0x80000000 | v78 & 0x7FFFFFFF) >> 1) ^ v239[623] ^ (-1727483681 * (v78 & 1));
            v233 = -((uint8_t)(((uint8_t)(uintptr_t)v239 - 116) & 0xF) >> 2) & 3;
            if ( v233 != 0 )
            {
              v79 = 227;
              v80 = (int *)(v239 + 228);
              while ( 1 )
              {
                v260 = v78 & 0x80000000;
                v78 = *v80;
                v247 = v79 + 1;
                *(v80 - 1) = ((v260 | *v80 & 0x7FFFFFFF) >> 1) ^ *(v80 - 228) ^ (-1727483681 * (*v80 & 1));
                ++v80;
                if ( v233 <= v79 - 226 )
                  break;
                ++v79;
              }
              v261 = 622 - v79;
            }
            else
            {
              v261 = 396;
              v247 = 227;
            }
            v216 = 396 - v233;
            v226 = (396 - v233) >> 2;
            v212 = 4 * v226;
            if ( 4 * v226 == 0 )
              goto LABEL_62;
            v81 = (__m128i *)&v239[v233 + 227];
            v82 = (__m128i *)&v239[v233 + 228];
            v83 = (__m128i *)&v239[v233];
            v84 = v81;
            v234 = 0;
            do
            {
              v85 = _mm_and_si128(*v82, G4_BITCAST<__m128i>(xmmword_1C7C250));
              v86 = _mm_and_si128(G4_BITCAST<__m128i>(xmmword_1C7C740), *v82);
              ++v234;
              ++v82;
              v87 = _mm_xor_si128(
                      _mm_unpacklo_epi32(
                        _mm_shuffle_epi32(_mm_mul_epu32(v86, G4_BITCAST<__m128i>(xmmword_1C7CB90)), 8),
                        _mm_shuffle_epi32(
                          _mm_mul_epu32(_mm_srli_si128(v86, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7CB90), 4)),
                          8)),
                      *v83++);
              v88 = *v81++;
              *v84++ = _mm_xor_si128(
                         v87,
                         _mm_srli_epi32(_mm_or_si128(v85, _mm_and_si128(v88, G4_BITCAST<__m128i>(xmmword_1C7C2A0))), 1u));
            }
            while ( v234 < v226 );
            v247 += v212;
            v261 -= v212;
            if ( v216 != v212 )
            {
LABEL_62:
              v89 = v239[v247];
              v90 = (int *)&v239[v247 + 1];
              do
              {
                v91 = v89;
                v89 = *v90;
                v27 = v261-- == 1;
                *(v90 - 1) = ((v91 & 0x80000000 | *v90 & 0x7FFFFFFF) >> 1) ^ *(v90 - 228) ^ (-1727483681 * (*v90 & 1));
                ++v90;
              }
              while ( !v27 );
            }
            v55 = *v239;
            v54 = v239;
            v53 = 1;
            v239[623] = ((v239[623] & 0x80000000 | *v239 & 0x7FFFFFFF) >> 1) ^ v239[396] ^ (-1727483681 * (*v239 & 1));
          }
          else
          {
            v54 = v239;
            v55 = v239[v53++];
          }
          v54[624] = v53;
          v56 = v55 ^ (v55 >> 11) ^ ((v55 ^ (v55 >> 11)) << 7) & 0x9D2C5680;
          v57 = (v56 ^ (v56 << 15) & 0xEFC60000 ^ (uint64_t)((v56 ^ (v56 << 15) & 0xEFC60000) >> 18)) / v207;
        }
        while ( v205 < v57 );
        v210 += v57;
        v51 = 0;
      }
    }
  }
  v276 = v276 & 0x3F | 0x80;
  v275 = v275 & 0xF | 0x40;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  v279[5] = (uint32_t)(uintptr_t)((char *)&v270 + 1);
  v279[6] = (uint32_t)(uintptr_t)(&v271);
  sub_1900810(v287);
  v287[28] = 0;
  v288 = 0;
  v289 = 0;
  v290 = 0;
  v291 = 0;
  v292 = 0;
  v287[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v293 = 0;
  v280 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)&v281[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
  sub_19119D0((char *)&v281[-1] + (uint32_t)(uintptr_t)(*(v280 - 3)), 0);
  memset(&v281[1], 0, 12);
  v282 = nullptr;
  v283 = 0;
  v284 = 0;
  v280 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
  v287[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
  v281[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v285);
  v286 = &dword_213B814;
  v285[1] = 16;
  v281[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  sub_19119D0(v287, v281);
  v98 = (char *)&v281[-1] + (uint32_t)(uintptr_t)(*(v280 - 3));
  v262 = v98;
  v217 = *((uint32_t *)v98 + 3);
  if ( v98[117] != 0 )
  {
    v227 = v98[116];
    goto LABEL_72;
  }
  v106 = *((uint8_t **)v98 + 31);
  if ( v106 == nullptr )
    goto LABEL_190;
  if ( v106[28] != 0 )
  {
    v107 = v106[61];
  }
  else
  {
    sub_18FFC70(*((uint32_t *)v98 + 31));
    v107 = G4_VCALL<int>(v106, 24, 32);
  }
  v227 = v107;
  v262[116] = v107;
  v262[117] = 1;
LABEL_72:
  sub_192C8D0(v273, &v280);
  if ( LOBYTE(v273[0]) != 0 )
  {
    v114 = (char *)&v281[-1] + (uint32_t)(uintptr_t)(*(v280 - 3));
    v115 = *((uint32_t *)v114 + 2);
    *((uint32_t *)v114 + 2) = 0;
    v220 = v115;
    v116 = (char *)&v281[-1] + (uint32_t)(uintptr_t)(*(v280 - 3));
    v97 = *((uint32_t *)v116 + 3);
    v240 = v97;
    if ( v116[117] != 0 )
    {
      v248 = v116[116];
    }
    else
    {
      v125 = *((uint8_t **)v116 + 31);
      if ( v125 == nullptr )
        goto LABEL_190;
      if ( v125[28] != 0 )
      {
        v126 = v125[61];
        v248 = v126;
      }
      else
      {
        v201 = (char *)&v281[-1] + (uint32_t)(uintptr_t)(*(v280 - 3));
        sub_18FFC70(v125);
        v126 = G4_VCALL<int>(v125, 24, 32);
        v248 = v126;
        v116 = v201;
      }
      v116[116] = v126;
      v116[117] = 1;
    }
    if ( (v240 & 0x90) != 0 && v220 > 36 )
    {
      for ( k = 36; k != v220; ++k )
      {
        BYTE1(v269) = v248;
        g4_std_compat::ostream_write(&v280, (char *)&v269 + 1, 1);
      }
    }
    v118 = v280;
    v119 = (char *)&v281[-1] + (uint32_t)(uintptr_t)(*(v280 - 3));
    v97 = *((uint32_t *)v119 + 3) & 0xFFFFFFB5 | 8;
    *((uint32_t *)v119 + 3) = v97;
    v120 = (char *)&v281[-1] + (uint32_t)(uintptr_t)(*(v118 - 3));
    v121 = *((uint8_t **)v120 + 31);
    if ( v121 != nullptr )
    {
      if ( v121[28] != 0 )
      {
        v97 = (uint8_t)v121[77];
        v235 = v121[77];
      }
      else
      {
        sub_18FFC70(*((uint32_t *)v120 + 31));
        v235 = G4_VCALL<int>(v121, 24, 48);
        v118 = v280;
        v120 = (char *)&v281[-1] + (uint32_t)(uintptr_t)(*(v280 - 3));
      }
      if ( v120[117] == 0 )
      {
        v128 = *((uint8_t **)v120 + 31);
        if ( v128 == nullptr )
          goto LABEL_190;
        if ( v128[28] != 0 )
        {
          v129 = v128[61];
        }
        else
        {
          v200 = v120;
          sub_18FFC70(v128);
          v129 = G4_VCALL<int>(v128, 24, 32);
          v120 = v200;
          v118 = v280;
        }
        v120[116] = v129;
        v120[117] = 1;
      }
      v122 = 0;
      v120[116] = v235;
      while ( 1 )
      {
        *(uint32_t *)((char *)&v281[1] + (uint32_t)(uintptr_t)(*(v118 - 3))) = 2;
        sub_192D8B0(&v280, (uint8_t)v274[v122]);
        if ( v122 == 5 || v122 == 3 || v122 == 9 || v122 == 7 )
        {
          v124 = *(uint32_t *)((char *)&v287[20] + (uint32_t)(uintptr_t)(*(v280 - 3)));
          if ( v124 == 0 )
            goto LABEL_190;
          if ( *(uint8_t *)(v124 + 28) != 0 )
          {
            v123 = *(uint8_t *)(v124 + 74);
          }
          else
          {
            v199 = *(uint32_t *)((char *)&v287[20] + (uint32_t)(uintptr_t)(*(v280 - 3)));
            sub_18FFC70(v199);
            v123 = G4_VCALL<int>(v199, 24, 45);
          }
          BYTE1(v269) = v123;
          g4_std_compat::ostream_write(&v280, (char *)&v269 + 1, 1);
        }
        if ( v122 == 15 )
          break;
        ++v122;
        v118 = v280;
      }
      if ( (v240 & 0x20) != 0 && v220 > 36 )
      {
        for ( m = 36; m != v220; ++m )
        {
          BYTE1(v269) = v248;
          g4_std_compat::ostream_write(&v280, (char *)&v269 + 1, 1);
        }
      }
      *(uint32_t *)((char *)&v281[1] + (uint32_t)(uintptr_t)(*(v280 - 3))) = 0;
      goto LABEL_73;
    }
LABEL_190:
    sub_18FFF30(v97);
  }
LABEL_73:
  v99 = *(uint32_t *)(*(uint32_t *)v273[1] - 12) + v273[1];
  if ( (*(uint8_t *)(v99 + 13) & 0x20) != 0 && (uint8_t)std::uncaught_exception() == 0 )
  {
    v103 = *(uint32_t *)(v99 + 120);
    if ( v103 != 0 && (*(int (**)(uint32_t))(*(uint32_t *)v103 + 24))(*(uint32_t *)(v99 + 120)) == -1 )
    {
      sub_1911530(
        *(uint32_t *)(*(uint32_t *)v273[1] - 12) + v273[1],
        *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v273[1] - 12) + v273[1] + 20) | 1);
      v97 = (unsigned int)(uintptr_t)(v262);
      if ( v262[117] != 0 )
        goto LABEL_76;
LABEL_82:
      v104 = *(uint8_t **)(v97 + 124);
      if ( v104 != nullptr )
      {
        if ( v104[28] != 0 )
        {
          v105 = v104[61];
        }
        else
        {
          sub_18FFC70(*(uint32_t *)(v97 + 124));
          v105 = G4_VCALL<int>(v104, 24, 32);
        }
        v262[116] = v105;
        v262[117] = 1;
        goto LABEL_76;
      }
      goto LABEL_190;
    }
  }
  v97 = (unsigned int)(uintptr_t)(v262);
  if ( v262[117] == 0 )
    goto LABEL_82;
LABEL_76:
  v262[116] = v227;
  v100 = v280;
  *((uint32_t *)v262 + 3) = v217;
  v101 = (int)(uintptr_t)(*(v100 - 3));
  v279[6] = v283;
  v102 = *(unsigned int *)((char *)&v282 + v101) & 5;
  v279[5] = (uint32_t)(uintptr_t)(v282);
  if ( v102 != 0 )
LABEL_77:
    std::terminate();
  sub_193A9B0((int)(uintptr_t)(self), 0, *(uint32_t *)(*(uint32_t *)self - 12), v282, v283 - (uint32_t)(uintptr_t)(v282));
  v280 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
  v287[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
  v281[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v108 = v286 - 3;
  if ( v286 - 3 != dword_213B808 && __sync_fetch_and_add(v286 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v108);
  v281[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v285);
  v280 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)&v281[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
  v287[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v287);
  do
    v109 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Utils::s_GetUUIDMutex);
  while ( v109 == 4 );
  v112 = v109;
  if ( v109 != 0 )
  {
    v202 = (int)(uintptr_t)(sub_18F81E0(v111, v110));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v272), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v270));
    sub_19042E0(v279, &v272);
    g4_std::string::Destroy(&v272);
    v279[3] = v202;
    v279[2] = v112;
    v279[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v279[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    goto LABEL_77;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Utils::GetSHA1  (binary VA: 0x1333040)
// Original: glotv3::Utils::GetSHA1
// ----------------------------------------------------------------------------
glotv3::Utils::Self * glotv3::Utils::GetSHA1(glotv3::Utils::Self *self, int8_t **a2)
{
  int8_t *v2;
  int8_t *v3;
  bool v4;
  unsigned int v5;
  __m128i v6;
  __m128i v7;
  __m128i v8;
  __m128i v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128i v33;
  __m128i v34;
  __m128i v35;
  __m128i v36;
  __m128i v37;
  __m128i v38;
  __m128i v39;
  __m128i v40;
  __m128i v41;
  int v42;
  uint64_t v43;
  int v44;
  int v45;
  int32_t v46;
  int32_t v47;
  uint32_t *v48;
  int v49;
  unsigned int v50;
  int v51;
  int32_t v52;
  int v53;
  int v54;
  int v55;
  unsigned int v56;
  __m128i v57;
  __m128i v58;
  __m128i v59;
  __m128i v60;
  __m128i v61;
  __m128i v62;
  __m128i v63;
  __m128i v64;
  __m128i v65;
  __m128i v66;
  __m128i v67;
  __m128i v68;
  __m128i v69;
  __m128i v70;
  __m128i v71;
  __m128i v72;
  __m128i v73;
  __m128i v74;
  __m128i v75;
  __m128i v76;
  __m128i v77;
  __m128i v78;
  __m128i v79;
  __m128i v80;
  __m128i v81;
  __m128i v82;
  __m128i v83;
  __m128i v84;
  __m128i v85;
  __m128i v86;
  __m128i v87;
  __m128i v88;
  __m128i v89;
  __m128i v90;
  __m128i v91;
  __m128i v92;
  __m128i v93;
  __m128i v94;
  __m128i v95;
  __m128i v96;
  __m128i v97;
  __m128i v98;
  __m128i v99;
  __m128i v100;
  int32_t v101;
  int32_t v102;
  int v103;
  int v104;
  int v105;
  uint32_t *v106;
  int v107;
  unsigned int v108;
  int v109;
  int32_t v110;
  int v111;
  int v112;
  unsigned int v113;
  unsigned int v114;
  unsigned int v115;
  unsigned int v116;
  __m128i *v117;
  unsigned int v118;
  unsigned int v119;
  unsigned int v120;
  unsigned int v121;
  unsigned int v122;
  __m128i *v123;
  __m128i v124;
  __m128i v125;
  __m128i v126;
  __m128i v127;
  __m128i v128;
  __m128i v129;
  __m128i v130;
  __m128i v131;
  __m128i v132;
  __m128i v133;
  __m128i v134;
  __m128i v135;
  __m128i v136;
  __m128i v137;
  __m128i v138;
  __m128i v139;
  __m128i v140;
  __m128i v141;
  __m128i v142;
  __m128i v143;
  __m128i v144;
  __m128i v145;
  __m128i v146;
  __m128i v147;
  __m128i v148;
  __m128i v149;
  __m128i v150;
  __m128i v151;
  __m128i v152;
  __m128i v153;
  __m128i v154;
  __m128i v155;
  __m128i v156;
  __m128i v157;
  __m128i v158;
  __m128i v159;
  __m128i v160;
  __m128i v161;
  __m128i v162;
  __m128i v163;
  __m128i v164;
  __m128i v165;
  __m128i v166;
  uint64_t v167; // kr08_8
  int v168;
  int v169;
  int32_t v170;
  int32_t v171;
  int32_t v172;
  int v173;
  uint32_t *v174;
  int v175;
  unsigned int v176;
  int v177;
  int32_t v178;
  int v179;
  int v180;
  int v181;
  char v182; // di
  int v183;
  uint32_t *v184;
  uint8_t *v185;
  size_t *v186;
  size_t v187;
  size_t *v188;
  uint32_t *v189;
  uint32_t *v190;
  size_t *v192;
  size_t v193;
  size_t *v194;
  uint32_t *v195;
  typedef int _g4_t_v196;
  typedef size_t _g4_t_v197;
  typedef size_t _g4_t_v198;
  typedef size_t _g4_t_v199;
  typedef uint32_t *_g4_t_v200;
  typedef uint32_t *_g4_t_v201;
  typedef int _g4_t_v202;
  typedef int _g4_t_v203;
  typedef int _g4_t_v204;
  typedef int _g4_t_v205;
  typedef int _g4_t_v206;
  typedef int _g4_t_v207;
  typedef int _g4_t_v208;
  typedef int _g4_t_v209;
  typedef int8_t *_g4_t_v210;
  typedef int _g4_t_v211;
  typedef unsigned int _g4_t_v212;
  typedef int _g4_t_v213;
  typedef int8_t *_g4_t_v214;
  typedef int _g4_t_v215;
  typedef int32_t _g4_t_v216;
  typedef __m128i _g4_t_v217;
  typedef int _g4_t_v218;
  typedef int32_t _g4_t_v219;
  typedef int _g4_t_v220;
  typedef int32_t _g4_t_v221;
  typedef int _g4_t_v222;
  typedef __m128i _g4_t_v223;
  typedef __m128i _g4_t_v224;
  typedef __m128i _g4_t_v225;
  typedef __m128i _g4_t_v226;
  typedef __m128i _g4_t_v227;
  typedef int _g4_t_v228;
  typedef __m128i _g4_t_v229;
  typedef int _g4_t_v230;
  typedef __m128i *_g4_t_v231;
  typedef __m128i _g4_t_v232;
  typedef int _g4_t_v233;
  typedef int _g4_t_v234;
  typedef __m128i _g4_t_v235;
  typedef int32_t _g4_t_v236;
  typedef int _g4_t_v237;
  typedef __m128i _g4_t_v238;
  typedef int32_t _g4_t_v239;
  typedef int _g4_t_v240;
  typedef int _g4_t_v241;
  typedef int _g4_t_v242;
  typedef __m128i _g4_t_v243;
  typedef int32_t _g4_t_v244;
  typedef int _g4_t_v245;
  typedef __m128i _g4_t_v246;
  typedef __m128i _g4_t_v247;
  typedef int32_t _g4_t_v248;
  typedef int _g4_t_v249;
  typedef __m128i _g4_t_v250;
  typedef int32_t _g4_t_v251;
  typedef int _g4_t_v252;
  typedef unsigned int _g4_t_v253;
  typedef unsigned int _g4_t_v254;
  typedef __m128i _g4_t_v255;
  typedef __m128i _g4_t_v256;
  typedef int _g4_t_v257;
  typedef int _g4_t_v258;
  typedef int _g4_t_v259;
  typedef uint32_t *_g4_t_v260;
  typedef uint32_t *_g4_t_v261;
  typedef int _g4_t_v262;
  typedef uint32_t _g4_t_v263[12];
  typedef uint32_t _g4_t_v264[6];
  typedef int _g4_t_v265;
  typedef int _g4_t_v266;
  typedef int _g4_t_v267;
  typedef int _g4_t_v268;
  typedef int _g4_t_v269;
  typedef __m128i _g4_t_v270 __attribute__((aligned(1)));
  typedef __m128i _g4_t_v271 __attribute__((aligned(1)));
  typedef __m128i _g4_t_v272 __attribute__((aligned(1)));
  typedef __m128i _g4_t_v273 __attribute__((aligned(1)));
  typedef unsigned int _g4_t_v274;
  typedef unsigned int _g4_t_v275;
  typedef int _g4_t_v276;
  typedef int (**_g4_t_v277)(int);
  typedef int _g4_t_v278;
  typedef int (**_g4_t_v279)(int);
  typedef uint32_t _g4_t_v280[3];
  typedef uint8_t *_g4_t_v281;
  typedef uint8_t *_g4_t_v282;
  typedef uint8_t *_g4_t_v283;
  typedef int _g4_t_v284;
  typedef uint32_t _g4_t_v285[2];
  typedef uint32_t *_g4_t_v286;
  typedef uint32_t _g4_t_v287[28];
  typedef int _g4_t_v288;
  typedef uint16_t _g4_t_v289[2];
  typedef int _g4_t_v290;
  typedef int _g4_t_v291;
  typedef int _g4_t_v292;
  typedef int _g4_t_v293;
  typedef __m128i _g4_t_v294;
  typedef __m128i _g4_t_v295;
  typedef __m128i _g4_t_v296;
  typedef __m128i _g4_t_v297;
  typedef uint32_t _g4_t_v298[7];
  enum : size_t {
    _g4_s0 = 912u,
    _g4_s1 = (8u + sizeof(_g4_t_v196)) > _g4_s0 ? (8u + sizeof(_g4_t_v196)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v197)) > _g4_s1 ? (12u + sizeof(_g4_t_v197)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v198)) > _g4_s2 ? (12u + sizeof(_g4_t_v198)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v199)) > _g4_s3 ? (12u + sizeof(_g4_t_v199)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v200)) > _g4_s4 ? (16u + sizeof(_g4_t_v200)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v201)) > _g4_s5 ? (16u + sizeof(_g4_t_v201)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v202)) > _g4_s6 ? (24u + sizeof(_g4_t_v202)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v203)) > _g4_s7 ? (24u + sizeof(_g4_t_v203)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v204)) > _g4_s8 ? (28u + sizeof(_g4_t_v204)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v205)) > _g4_s9 ? (32u + sizeof(_g4_t_v205)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v206)) > _g4_s10 ? (36u + sizeof(_g4_t_v206)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v207)) > _g4_s11 ? (36u + sizeof(_g4_t_v207)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v208)) > _g4_s12 ? (40u + sizeof(_g4_t_v208)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v209)) > _g4_s13 ? (44u + sizeof(_g4_t_v209)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v210)) > _g4_s14 ? (48u + sizeof(_g4_t_v210)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v211)) > _g4_s15 ? (48u + sizeof(_g4_t_v211)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v212)) > _g4_s16 ? (52u + sizeof(_g4_t_v212)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v213)) > _g4_s17 ? (52u + sizeof(_g4_t_v213)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v214)) > _g4_s18 ? (56u + sizeof(_g4_t_v214)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v215)) > _g4_s19 ? (56u + sizeof(_g4_t_v215)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v216)) > _g4_s20 ? (60u + sizeof(_g4_t_v216)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v217)) > _g4_s21 ? (64u + sizeof(_g4_t_v217)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v218)) > _g4_s22 ? (64u + sizeof(_g4_t_v218)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v219)) > _g4_s23 ? (64u + sizeof(_g4_t_v219)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v220)) > _g4_s24 ? (64u + sizeof(_g4_t_v220)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v221)) > _g4_s25 ? (64u + sizeof(_g4_t_v221)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v222)) > _g4_s26 ? (64u + sizeof(_g4_t_v222)) : _g4_s26,
    _g4_s28 = (80u + sizeof(_g4_t_v223)) > _g4_s27 ? (80u + sizeof(_g4_t_v223)) : _g4_s27,
    _g4_s29 = (80u + sizeof(_g4_t_v224)) > _g4_s28 ? (80u + sizeof(_g4_t_v224)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v225)) > _g4_s29 ? (80u + sizeof(_g4_t_v225)) : _g4_s29,
    _g4_s31 = (80u + sizeof(_g4_t_v226)) > _g4_s30 ? (80u + sizeof(_g4_t_v226)) : _g4_s30,
    _g4_s32 = (80u + sizeof(_g4_t_v227)) > _g4_s31 ? (80u + sizeof(_g4_t_v227)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v228)) > _g4_s32 ? (80u + sizeof(_g4_t_v228)) : _g4_s32,
    _g4_s34 = (80u + sizeof(_g4_t_v229)) > _g4_s33 ? (80u + sizeof(_g4_t_v229)) : _g4_s33,
    _g4_s35 = (80u + sizeof(_g4_t_v230)) > _g4_s34 ? (80u + sizeof(_g4_t_v230)) : _g4_s34,
    _g4_s36 = (80u + sizeof(_g4_t_v231)) > _g4_s35 ? (80u + sizeof(_g4_t_v231)) : _g4_s35,
    _g4_s37 = (80u + sizeof(_g4_t_v232)) > _g4_s36 ? (80u + sizeof(_g4_t_v232)) : _g4_s36,
    _g4_s38 = (80u + sizeof(_g4_t_v233)) > _g4_s37 ? (80u + sizeof(_g4_t_v233)) : _g4_s37,
    _g4_s39 = (80u + sizeof(_g4_t_v234)) > _g4_s38 ? (80u + sizeof(_g4_t_v234)) : _g4_s38,
    _g4_s40 = (96u + sizeof(_g4_t_v235)) > _g4_s39 ? (96u + sizeof(_g4_t_v235)) : _g4_s39,
    _g4_s41 = (96u + sizeof(_g4_t_v236)) > _g4_s40 ? (96u + sizeof(_g4_t_v236)) : _g4_s40,
    _g4_s42 = (96u + sizeof(_g4_t_v237)) > _g4_s41 ? (96u + sizeof(_g4_t_v237)) : _g4_s41,
    _g4_s43 = (96u + sizeof(_g4_t_v238)) > _g4_s42 ? (96u + sizeof(_g4_t_v238)) : _g4_s42,
    _g4_s44 = (96u + sizeof(_g4_t_v239)) > _g4_s43 ? (96u + sizeof(_g4_t_v239)) : _g4_s43,
    _g4_s45 = (96u + sizeof(_g4_t_v240)) > _g4_s44 ? (96u + sizeof(_g4_t_v240)) : _g4_s44,
    _g4_s46 = (96u + sizeof(_g4_t_v241)) > _g4_s45 ? (96u + sizeof(_g4_t_v241)) : _g4_s45,
    _g4_s47 = (96u + sizeof(_g4_t_v242)) > _g4_s46 ? (96u + sizeof(_g4_t_v242)) : _g4_s46,
    _g4_s48 = (96u + sizeof(_g4_t_v243)) > _g4_s47 ? (96u + sizeof(_g4_t_v243)) : _g4_s47,
    _g4_s49 = (96u + sizeof(_g4_t_v244)) > _g4_s48 ? (96u + sizeof(_g4_t_v244)) : _g4_s48,
    _g4_s50 = (96u + sizeof(_g4_t_v245)) > _g4_s49 ? (96u + sizeof(_g4_t_v245)) : _g4_s49,
    _g4_s51 = (112u + sizeof(_g4_t_v246)) > _g4_s50 ? (112u + sizeof(_g4_t_v246)) : _g4_s50,
    _g4_s52 = (112u + sizeof(_g4_t_v247)) > _g4_s51 ? (112u + sizeof(_g4_t_v247)) : _g4_s51,
    _g4_s53 = (112u + sizeof(_g4_t_v248)) > _g4_s52 ? (112u + sizeof(_g4_t_v248)) : _g4_s52,
    _g4_s54 = (112u + sizeof(_g4_t_v249)) > _g4_s53 ? (112u + sizeof(_g4_t_v249)) : _g4_s53,
    _g4_s55 = (112u + sizeof(_g4_t_v250)) > _g4_s54 ? (112u + sizeof(_g4_t_v250)) : _g4_s54,
    _g4_s56 = (112u + sizeof(_g4_t_v251)) > _g4_s55 ? (112u + sizeof(_g4_t_v251)) : _g4_s55,
    _g4_s57 = (112u + sizeof(_g4_t_v252)) > _g4_s56 ? (112u + sizeof(_g4_t_v252)) : _g4_s56,
    _g4_s58 = (112u + sizeof(_g4_t_v253)) > _g4_s57 ? (112u + sizeof(_g4_t_v253)) : _g4_s57,
    _g4_s59 = (112u + sizeof(_g4_t_v254)) > _g4_s58 ? (112u + sizeof(_g4_t_v254)) : _g4_s58,
    _g4_s60 = (112u + sizeof(_g4_t_v255)) > _g4_s59 ? (112u + sizeof(_g4_t_v255)) : _g4_s59,
    _g4_s61 = (112u + sizeof(_g4_t_v256)) > _g4_s60 ? (112u + sizeof(_g4_t_v256)) : _g4_s60,
    _g4_s62 = (112u + sizeof(_g4_t_v257)) > _g4_s61 ? (112u + sizeof(_g4_t_v257)) : _g4_s61,
    _g4_s63 = (130u + sizeof(_g4_t_v258)) > _g4_s62 ? (130u + sizeof(_g4_t_v258)) : _g4_s62,
    _g4_s64 = (136u + sizeof(_g4_t_v259)) > _g4_s63 ? (136u + sizeof(_g4_t_v259)) : _g4_s63,
    _g4_s65 = (140u + sizeof(_g4_t_v260)) > _g4_s64 ? (140u + sizeof(_g4_t_v260)) : _g4_s64,
    _g4_s66 = (144u + sizeof(_g4_t_v261)) > _g4_s65 ? (144u + sizeof(_g4_t_v261)) : _g4_s65,
    _g4_s67 = (148u + sizeof(_g4_t_v262)) > _g4_s66 ? (148u + sizeof(_g4_t_v262)) : _g4_s66,
    _g4_s68 = (152u + sizeof(_g4_t_v263)) > _g4_s67 ? (152u + sizeof(_g4_t_v263)) : _g4_s67,
    _g4_s69 = (200u + sizeof(_g4_t_v264)) > _g4_s68 ? (200u + sizeof(_g4_t_v264)) : _g4_s68,
    _g4_s70 = (224u + sizeof(_g4_t_v265)) > _g4_s69 ? (224u + sizeof(_g4_t_v265)) : _g4_s69,
    _g4_s71 = (228u + sizeof(_g4_t_v266)) > _g4_s70 ? (228u + sizeof(_g4_t_v266)) : _g4_s70,
    _g4_s72 = (232u + sizeof(_g4_t_v267)) > _g4_s71 ? (232u + sizeof(_g4_t_v267)) : _g4_s71,
    _g4_s73 = (236u + sizeof(_g4_t_v268)) > _g4_s72 ? (236u + sizeof(_g4_t_v268)) : _g4_s72,
    _g4_s74 = (240u + sizeof(_g4_t_v269)) > _g4_s73 ? (240u + sizeof(_g4_t_v269)) : _g4_s73,
    _g4_s75 = (244u + sizeof(_g4_t_v270)) > _g4_s74 ? (244u + sizeof(_g4_t_v270)) : _g4_s74,
    _g4_s76 = (260u + sizeof(_g4_t_v271)) > _g4_s75 ? (260u + sizeof(_g4_t_v271)) : _g4_s75,
    _g4_s77 = (276u + sizeof(_g4_t_v272)) > _g4_s76 ? (276u + sizeof(_g4_t_v272)) : _g4_s76,
    _g4_s78 = (292u + sizeof(_g4_t_v273)) > _g4_s77 ? (292u + sizeof(_g4_t_v273)) : _g4_s77,
    _g4_s79 = (308u + sizeof(_g4_t_v274)) > _g4_s78 ? (308u + sizeof(_g4_t_v274)) : _g4_s78,
    _g4_s80 = (312u + sizeof(_g4_t_v275)) > _g4_s79 ? (312u + sizeof(_g4_t_v275)) : _g4_s79,
    _g4_s81 = (316u + sizeof(_g4_t_v276)) > _g4_s80 ? (316u + sizeof(_g4_t_v276)) : _g4_s80,
    _g4_s82 = (320u + sizeof(_g4_t_v277)) > _g4_s81 ? (320u + sizeof(_g4_t_v277)) : _g4_s81,
    _g4_s83 = (324u + sizeof(_g4_t_v278)) > _g4_s82 ? (324u + sizeof(_g4_t_v278)) : _g4_s82,
    _g4_s84 = (328u + sizeof(_g4_t_v279)) > _g4_s83 ? (328u + sizeof(_g4_t_v279)) : _g4_s83,
    _g4_s85 = (332u + sizeof(_g4_t_v280)) > _g4_s84 ? (332u + sizeof(_g4_t_v280)) : _g4_s84,
    _g4_s86 = (344u + sizeof(_g4_t_v281)) > _g4_s85 ? (344u + sizeof(_g4_t_v281)) : _g4_s85,
    _g4_s87 = (348u + sizeof(_g4_t_v282)) > _g4_s86 ? (348u + sizeof(_g4_t_v282)) : _g4_s86,
    _g4_s88 = (352u + sizeof(_g4_t_v283)) > _g4_s87 ? (352u + sizeof(_g4_t_v283)) : _g4_s87,
    _g4_s89 = (356u + sizeof(_g4_t_v284)) > _g4_s88 ? (356u + sizeof(_g4_t_v284)) : _g4_s88,
    _g4_s90 = (360u + sizeof(_g4_t_v285)) > _g4_s89 ? (360u + sizeof(_g4_t_v285)) : _g4_s89,
    _g4_s91 = (368u + sizeof(_g4_t_v286)) > _g4_s90 ? (368u + sizeof(_g4_t_v286)) : _g4_s90,
    _g4_s92 = (372u + sizeof(_g4_t_v287)) > _g4_s91 ? (372u + sizeof(_g4_t_v287)) : _g4_s91,
    _g4_s93 = (484u + sizeof(_g4_t_v288)) > _g4_s92 ? (484u + sizeof(_g4_t_v288)) : _g4_s92,
    _g4_s94 = (488u + sizeof(_g4_t_v289)) > _g4_s93 ? (488u + sizeof(_g4_t_v289)) : _g4_s93,
    _g4_s95 = (492u + sizeof(_g4_t_v290)) > _g4_s94 ? (492u + sizeof(_g4_t_v290)) : _g4_s94,
    _g4_s96 = (496u + sizeof(_g4_t_v291)) > _g4_s95 ? (496u + sizeof(_g4_t_v291)) : _g4_s95,
    _g4_s97 = (500u + sizeof(_g4_t_v292)) > _g4_s96 ? (500u + sizeof(_g4_t_v292)) : _g4_s96,
    _g4_s98 = (504u + sizeof(_g4_t_v293)) > _g4_s97 ? (504u + sizeof(_g4_t_v293)) : _g4_s97,
    _g4_s99 = (512u + sizeof(_g4_t_v294)) > _g4_s98 ? (512u + sizeof(_g4_t_v294)) : _g4_s98,
    _g4_s100 = (528u + sizeof(_g4_t_v295)) > _g4_s99 ? (528u + sizeof(_g4_t_v295)) : _g4_s99,
    _g4_s101 = (544u + sizeof(_g4_t_v296)) > _g4_s100 ? (544u + sizeof(_g4_t_v296)) : _g4_s100,
    _g4_s102 = (560u + sizeof(_g4_t_v297)) > _g4_s101 ? (560u + sizeof(_g4_t_v297)) : _g4_s101,
    _g4_s103 = (816u + sizeof(_g4_t_v298)) > _g4_s102 ? (816u + sizeof(_g4_t_v298)) : _g4_s102
  };
  alignas(16) uint8_t _g4_sf[_g4_s103];
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 8u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 12u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 12u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 12u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 16u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 16u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 24u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 24u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 28u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 32u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 36u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 36u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 40u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 44u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 48u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 48u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 52u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 52u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 56u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 56u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 60u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 64u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 64u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 64u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 64u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 64u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 64u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 80u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 80u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 80u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 80u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 80u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 80u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 80u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 80u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 80u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 80u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 80u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 80u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 96u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 96u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 96u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 96u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 96u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 96u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 96u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 96u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 96u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 96u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 96u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 112u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 112u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 112u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 112u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 112u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 112u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 112u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 112u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 112u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 112u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 112u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 112u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 130u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 136u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 140u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 144u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 148u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 152u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 200u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 224u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 228u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 232u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 236u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 240u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 244u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 260u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 276u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 292u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 308u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 312u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 316u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 320u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 324u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 328u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 332u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 344u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 348u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 352u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 356u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 360u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 368u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 372u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 484u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 488u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 492u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 496u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 500u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 504u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 512u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 528u);
  _g4_t_v296 &v296 = *reinterpret_cast<_g4_t_v296 *>(_g4_sf + 544u);
  _g4_t_v297 &v297 = *reinterpret_cast<_g4_t_v297 *>(_g4_sf + 560u);
  _g4_t_v298 &v298 = *reinterpret_cast<_g4_t_v298 *>(_g4_sf + 816u);

  v265 = 1732584193;
  v266 = -271733879;
  v267 = -1732584194;
  v268 = 271733878;
  v269 = -1009589776;
  v274 = 0;
  v2 = *a2;
  v3 = a2[1];
  v4 = *a2 == v3;
  v275 = 0;
  v276 = 0;
  v214 = v2;
  v210 = v3;
  if ( v4 )
  {
g4_m128_lane<int8_t>(v270, 0) = 0x80;
    v212 = 0;
    v56 = 1;
LABEL_57:
    v118 = 56 - v56;
    v119 = -((int)(uintptr_t)(&v265) + v56 + 20) & 0xF;
    v254 = v56 + 20;
    v120 = v56;
    if ( v119 > 56 - v56 )
      v119 = 56 - v56;
    if ( v119 == 0 )
      goto LABEL_119;
    do
g4_m128_lane<int8_t>(v270, v120++) = 0;
    while ( v120 - v56 < v119 );
    v118 = 56 - v56;
    if ( 56 - v56 != v119 )
    {
LABEL_119:
      v121 = v118 - v119;
      v242 = 16 * (v121 >> 4);
      if ( v242 == 0 )
        goto LABEL_120;
      v122 = 0;
      v123 = (__m128i *)((char *)&v265 + v254 + v119);
      do
      {
        ++v122;
        *v123++ = g4_m128_from<__m128i>(0LL);
      }
      while ( v121 >> 4 > v122 );
      v120 += v242;
      if ( v121 != v242 )
      {
LABEL_120:
        do
g4_m128_lane<int8_t>(v270, v120++) = 0;
        while ( v120 <= 0x37 );
      }
    }
    goto LABEL_67;
  }
  v5 = 0;
  v212 = 0;
  do
  {
g4_m128_lane<int8_t>(v270, v5) = *v214;
    v274 = v5 + 1;
    if ( v5 == 63 )
    {
      v6 = _mm_unpacklo_epi8(v270, v271);
      v7 = _mm_unpackhi_epi8(v270, v271);
      v8 = _mm_unpackhi_epi8(v6, v7);
      v9 = _mm_unpacklo_epi8(v6, v7);
      v274 = 0;
      v223 = v8;
      v10 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v270, v271), v7), v8);
      v11 = _mm_unpackhi_epi8(v9, v8);
      v12 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v9, v223), v11);
      v13 = _mm_unpackhi_epi8(v10, v11);
      v14 = _mm_unpacklo_epi8(v272, v273);
      v15 = _mm_unpackhi_epi8(v272, v273);
      v16 = _mm_unpackhi_epi8(v14, v15);
      v17 = _mm_unpacklo_epi8(v14, v15);
      v224 = v16;
      v18 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v272, v273), v15), v16);
      v19 = _mm_unpackhi_epi8(v17, v16);
      v20 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v17, v224), v19);
      v21 = _mm_unpackhi_epi8(v18, v19);
      v22 = _mm_unpacklo_epi8(v12, v20);
      v225 = _mm_unpackhi_epi8(v12, v20);
      v23 = _mm_unpackhi_epi8(v22, v225);
      v24 = _mm_unpacklo_epi8(v22, v225);
      v25 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v12, v20), v225);
      v246 = v23;
      v226 = _mm_unpackhi_epi8(v13, v21);
      v26 = _mm_unpackhi_epi8(v24, v23);
      v27 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v24, v246), v26);
      v28 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(v25, v246), v26);
      v29 = _mm_unpacklo_epi8(v13, v21);
      v30 = _mm_unpacklo_epi8(v29, v226);
      v247 = _mm_unpackhi_epi8(v29, v226);
      v31 = _mm_unpackhi_epi8(v30, v247);
      v32 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v30, v247), v31);
      v33 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v13, v21), v226), v247);
      v34 = _mm_unpacklo_epi8(v27, g4_m128_from<__m128i>(0LL));
      v235 = _mm_unpackhi_epi8(v27, g4_m128_from<__m128i>(0LL));
      v35 = _mm_unpackhi_epi8(v33, v31);
      v227 = _mm_unpacklo_epi8(v32, g4_m128_from<__m128i>(0LL));
      v36 = _mm_unpacklo_epi8(v35, g4_m128_from<__m128i>(0LL));
      v217 = _mm_unpackhi_epi8(v32, g4_m128_from<__m128i>(0LL));
      v37 = _mm_unpacklo_epi8(v28, g4_m128_from<__m128i>(0LL));
      v38 = _mm_unpackhi_epi8(v35, g4_m128_from<__m128i>(0LL));
      v294 = _mm_or_si128(
               _mm_slli_epi32(_mm_unpacklo_epi16(v37, g4_m128_from<__m128i>(0LL)), 8u),
               _mm_or_si128(
                 _mm_unpacklo_epi16(v36, g4_m128_from<__m128i>(0LL)),
                 _mm_or_si128(
                   _mm_slli_epi32(_mm_unpacklo_epi16(v227, g4_m128_from<__m128i>(0LL)), 0x10u),
                   _mm_slli_epi32(_mm_unpacklo_epi16(v34, g4_m128_from<__m128i>(0LL)), 0x18u))));
      v39 = _mm_unpackhi_epi8(v28, g4_m128_from<__m128i>(0LL));
      v248 =g4_m128_lane<int32_t>(v294, 0);
      v40 = _mm_or_si128(
              _mm_or_si128(
                _mm_or_si128(
                  _mm_slli_epi32(_mm_unpackhi_epi16(v34, g4_m128_from<__m128i>(0LL)), 0x18u),
                  _mm_slli_epi32(_mm_unpackhi_epi16(v227, g4_m128_from<__m128i>(0LL)), 0x10u)),
                _mm_unpackhi_epi16(v36, g4_m128_from<__m128i>(0LL))),
              _mm_slli_epi32(_mm_unpackhi_epi16(v37, g4_m128_from<__m128i>(0LL)), 8u));
      v296 = _mm_or_si128(
               _mm_or_si128(
                 _mm_or_si128(
                   _mm_slli_epi32(_mm_unpacklo_epi16(v235, g4_m128_from<__m128i>(0LL)), 0x18u),
                   _mm_slli_epi32(_mm_unpacklo_epi16(v217, g4_m128_from<__m128i>(0LL)), 0x10u)),
                 _mm_unpacklo_epi16(v38, g4_m128_from<__m128i>(0LL))),
               _mm_slli_epi32(_mm_unpacklo_epi16(v39, g4_m128_from<__m128i>(0LL)), 8u));
      v41 = v235;
      v236 =g4_m128_lane<int32_t>(v294, 1);
      v42 = 16;
      v297 = _mm_or_si128(
               _mm_or_si128(
                 _mm_or_si128(
                   _mm_slli_epi32(_mm_unpackhi_epi16(v41, g4_m128_from<__m128i>(0LL)), 0x18u),
                   _mm_slli_epi32(_mm_unpackhi_epi16(v217, g4_m128_from<__m128i>(0LL)), 0x10u)),
                 _mm_unpackhi_epi16(v38, g4_m128_from<__m128i>(0LL))),
               _mm_slli_epi32(_mm_unpackhi_epi16(v39, g4_m128_from<__m128i>(0LL)), 8u));
      v295 = v40;
      v43 = *(uint64_t *)((char *)g4_m128_ptr<uint64_t>(v297) + 4);
      v216 =g4_m128_lane<int32_t>(v297, 3);
      while ( 1 )
      {
        v44 = v248 ^ v287[v42 + 21] ^ v287[v42 + 27] ^ v43;
        v248 = v287[v42 + 22];
        v45 = v236 ^ v248 ^ *(uint32_t *)&v289[2 * v42 - 2] ^ HIDWORD(v43);
        v236 = v287[v42 + 23];
        v216 = __builtin_rotateright32(v287[v42 + 21] ^ *(uint32_t *)&v289[2 * v42] ^ v236 ^ v216, 31);
g4_m128_lane<int32_t>(v294, v42 + 2) = v216;
        v46 = __builtin_rotateright32(v44, 31);
        v47 = __builtin_rotateright32(v45, 31);
g4_m128_lane<int32_t>(v294, v42) = v46;
g4_m128_lane<int32_t>(v294, v42 + 1) = v47;
        v43 = __PAIR64__(v47, v46);
        if ( v42 == 76 )
          break;
        v42 += 3;
      }
      v48 = v298;
      do
      {
        v48[3] = __builtin_rotateright32(*(v48 - 13) ^ *(v48 - 5) ^ *(v48 - 11) ^ *v48, 31);
        ++v48;
      }
      while ( v48 != &v298[77 - v42] );
      v237 = v265;
      v228 = v269;
      v249 = v268;
      v49 = v267;
      v50 = 0;
      v202 = v266;
      while ( 1 )
      {
        if ( v50 <= 0x13 )
        {
          v218 = 1518500249;
          v51 = v49 & v202 | v249 & ~v202;
        }
        else if ( v50 <= 0x27 )
        {
          v218 = 1859775393;
          v51 = v49 ^ v202 ^ v249;
        }
        else if ( v50 > 0x3B )
        {
          v218 = -899497514;
          v51 = v49 ^ v202 ^ v249;
        }
        else
        {
          v51 = v49 & v249 | v202 & (v49 | v249);
          v218 = -1894007588;
        }
        v52 = v228 +g4_m128_lane<int32_t>(v294, v50++) + __builtin_rotateright32(v237, 27);
        v53 = v218 + v52 + v51;
        v54 = __builtin_rotateright32(v202, 2);
        if ( v50 == 80 )
          break;
        v55 = v249;
        v249 = v49;
        v49 = v54;
        v228 = v55;
        v202 = v237;
        v237 = v53;
      }
      v266 += v237;
      v265 += v53;
      v267 += v54;
      v268 += v49;
      v269 += v249;
    }
    if ( v212 <= 0xFFFFFFF7 )
    {
      v212 += 8;
      v275 = v212;
    }
    else
    {
      v275 = 0;
      if ( v276 == -1 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v259), "sha1 too many bytes", (int)(uintptr_t)(&v258));
        sub_19042E0(&v262, &v259);
        v263[11] = ((uint32_t)(uintptr_t)&off_20A9AA8);
        g4_std::string::construct_copy(v264, v263);
        v264[2] = 0;
        v264[5] = 104;
        v264[1] = ((uint32_t)(uintptr_t)&off_209383C);
        v263[11] = ((uint32_t)(uintptr_t)&off_2093828);
        v264[3] = (uint32_t)(uintptr_t)("void boost::uuids::detail::sha1::process_byte(unsigned char)");
        v264[4] = (uint32_t)(uintptr_t)("../../../../../lib/glitch/include/boost/uuid/sha1.hpp");
        std::terminate();
      }
      v212 = 0;
      ++v276;
    }
    ++v214;
    v5 = v274;
  }
  while ( v210 != v214 );
  v56 = v274 + 1;
g4_m128_lane<int8_t>(v270, v274) = 0x80;
  v274 = v5 + 1;
  if ( v5 == 63 )
  {
    v274 = 0;
    boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v265);
    v56 = v274;
    v212 = v275;
  }
  if ( v56 <= 0x38 )
  {
    if ( v56 == 56 )
      goto LABEL_67;
    goto LABEL_57;
  }
  v206 = v265;
  v203 = v268;
  v205 = v266;
  v204 = v267;
  while ( v56 != 0 )
  {
g4_m128_lane<int8_t>(v270, v56++) = 0;
    if ( v56 == 64 )
    {
      v57 = _mm_unpackhi_epi8(v270, v271);
      v58 = _mm_unpacklo_epi8(v270, v271);
      v59 = _mm_unpacklo_epi8(v58, v57);
      v60 = _mm_unpackhi_epi8(v58, v57);
      v61 = _mm_unpackhi_epi8(v59, v60);
      v62 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v270, v271), v57), v60);
      v63 = _mm_unpackhi_epi8(v272, v273);
      v64 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v59, v60), v61);
      v65 = _mm_unpacklo_epi8(v272, v273);
      v66 = _mm_unpacklo_epi8(v65, v63);
      v67 = _mm_unpackhi_epi8(v65, v63);
      v68 = _mm_unpackhi_epi8(v62, v61);
      v69 = _mm_unpackhi_epi8(v66, v67);
      v70 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v66, v67), v69);
      v71 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v272, v273), v63), v67);
      v72 = _mm_unpacklo_epi8(v64, v70);
      v73 = _mm_unpackhi_epi8(v64, v70);
      v74 = _mm_unpackhi_epi8(v71, v69);
      v75 = _mm_unpackhi_epi8(v72, v73);
      v76 = _mm_unpacklo_epi8(v72, v73);
      v77 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v64, v70), v73);
      v78 = _mm_unpackhi_epi8(v68, v74);
      v79 = _mm_unpackhi_epi8(v76, v75);
      v80 = _mm_unpacklo_epi8(v76, v75);
      v81 = _mm_unpacklo_epi8(v77, v75);
      v82 = _mm_unpacklo_epi8(v68, v74);
      v83 = _mm_unpacklo_epi8(v82, v78);
      v84 = _mm_unpackhi_epi8(v82, v78);
      v85 = _mm_unpacklo_epi8(v80, v79);
      v86 = _mm_unpackhi_epi8(v81, v79);
      v87 = _mm_unpackhi_epi8(v83, v84);
      v88 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v68, v74), v78), v84), v87);
      v89 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v83, v84), v87);
      v90 = v86;
      v238 = _mm_unpackhi_epi8(v86, g4_m128_from<__m128i>(0LL));
      v91 = _mm_unpacklo_epi8(v85, g4_m128_from<__m128i>(0LL));
      v92 = _mm_unpacklo_epi8(v89, g4_m128_from<__m128i>(0LL));
      v93 = _mm_unpacklo_epi8(v88, g4_m128_from<__m128i>(0LL));
      v229 = _mm_unpackhi_epi8(v88, g4_m128_from<__m128i>(0LL));
      v94 = _mm_unpacklo_epi16(v91, g4_m128_from<__m128i>(0LL));
      v95 = _mm_or_si128(
              _mm_or_si128(
                _mm_slli_epi32(_mm_unpackhi_epi16(v91, g4_m128_from<__m128i>(0LL)), 0x18u),
                _mm_slli_epi32(_mm_unpackhi_epi16(v92, g4_m128_from<__m128i>(0LL)), 0x10u)),
              _mm_unpackhi_epi16(v93, g4_m128_from<__m128i>(0LL)));
      v250 = _mm_or_si128(
               _mm_unpacklo_epi16(v93, g4_m128_from<__m128i>(0LL)),
               _mm_or_si128(_mm_slli_epi32(_mm_unpacklo_epi16(v92, g4_m128_from<__m128i>(0LL)), 0x10u), _mm_slli_epi32(v94, 0x18u)));
      v96 = _mm_unpacklo_epi8(v90, g4_m128_from<__m128i>(0LL));
      v97 = _mm_unpackhi_epi8(v89, g4_m128_from<__m128i>(0LL));
      v98 = _mm_unpackhi_epi8(v85, g4_m128_from<__m128i>(0LL));
      v99 = _mm_unpackhi_epi16(v98, g4_m128_from<__m128i>(0LL));
      v100 = _mm_or_si128(
               _mm_or_si128(
                 _mm_or_si128(
                   _mm_slli_epi32(_mm_unpacklo_epi16(v98, g4_m128_from<__m128i>(0LL)), 0x18u),
                   _mm_slli_epi32(_mm_unpacklo_epi16(v97, g4_m128_from<__m128i>(0LL)), 0x10u)),
                 _mm_unpacklo_epi16(v229, g4_m128_from<__m128i>(0LL))),
               _mm_slli_epi32(_mm_unpacklo_epi16(v238, g4_m128_from<__m128i>(0LL)), 8u));
      v297 = _mm_or_si128(
               _mm_or_si128(
                 _mm_or_si128(_mm_slli_epi32(v99, 0x18u), _mm_slli_epi32(_mm_unpackhi_epi16(v97, g4_m128_from<__m128i>(0LL)), 0x10u)),
                 _mm_unpackhi_epi16(v229, g4_m128_from<__m128i>(0LL))),
               _mm_slli_epi32(_mm_unpackhi_epi16(v238, g4_m128_from<__m128i>(0LL)), 8u));
      v294 = _mm_or_si128(_mm_slli_epi32(_mm_unpacklo_epi16(v96, g4_m128_from<__m128i>(0LL)), 8u), v250);
      v239 =g4_m128_lane<int32_t>(v294, 1);
      v101 =g4_m128_lane<int32_t>(v297, 2);
      v251 =g4_m128_lane<int32_t>(v294, 0);
      v102 =g4_m128_lane<int32_t>(v297, 3);
      v295 = _mm_or_si128(v95, _mm_slli_epi32(_mm_unpackhi_epi16(v96, g4_m128_from<__m128i>(0LL)), 8u));
      v103 = 16;
      v296 = v100;
      v219 =g4_m128_lane<int32_t>(v297, 1);
      while ( 1 )
      {
        v219 = __builtin_rotateright32(v251 ^ v287[v103 + 21] ^ v287[v103 + 27] ^ v219, 31);
        v104 = *(uint32_t *)&v289[2 * v103 - 2] ^ v101;
g4_m128_lane<int32_t>(v294, v103) = v219;
        v251 = v287[v103 + 22];
        v105 = v239 ^ v251 ^ v104;
        v239 = v287[v103 + 23];
        v101 = __builtin_rotateright32(v105, 31);
        v102 = __builtin_rotateright32(v287[v103 + 21] ^ v239 ^ *(uint32_t *)&v289[2 * v103] ^ v102, 31);
g4_m128_lane<int32_t>(v294, v103 + 1) = v101;
g4_m128_lane<int32_t>(v294, v103 + 2) = v102;
        if ( v103 == 76 )
          break;
        v103 += 3;
      }
      v106 = v298;
      do
      {
        v106[3] = __builtin_rotateright32(*(v106 - 13) ^ *(v106 - 11) ^ *v106 ^ *(v106 - 5), 31);
        ++v106;
      }
      while ( v106 != &v298[77 - v103] );
      v220 = v269;
      v240 = v206;
      v107 = v204;
      v252 = v205;
      v108 = 0;
      v196 = v203;
      while ( 1 )
      {
        if ( v108 <= 0x13 )
        {
          v230 = 1518500249;
          v109 = v107 & v252 | v196 & ~v252;
        }
        else if ( v108 <= 0x27 )
        {
          v230 = 1859775393;
          v109 = v252 ^ v107 ^ v196;
        }
        else if ( v108 > 0x3B )
        {
          v230 = -899497514;
          v109 = v252 ^ v107 ^ v196;
        }
        else
        {
          v109 = v107 & v196 | v252 & (v107 | v196);
          v230 = -1894007588;
        }
        v110 = v220 +g4_m128_lane<int32_t>(v294, v108++) + __builtin_rotateright32(v240, 27) + v109 + v230;
        v111 = __builtin_rotateright32(v252, 2);
        if ( v108 == 80 )
          break;
        v112 = v196;
        v196 = v107;
        v107 = v111;
        v220 = v112;
        v252 = v240;
        v240 = v110;
      }
      v206 += v110;
      v204 += v111;
      v205 += v240;
      v203 += v107;
      v269 += v196;
      break;
    }
  }
  v265 = v206;
  v268 = v203;
  v113 = 0;
  v114 = -(int)(uintptr_t)(&v270) & 0xF;
  v266 = v205;
  v267 = v204;
  if ( v114 != 0 )
  {
    do
g4_m128_lane<int8_t>(v270, v113++) = 0;
    while ( v114 > v113 );
  }
  v253 = 56 - v114;
  v115 = (56 - v114) >> 4;
  v241 = 16 * v115;
  if ( 16 * v115 == 0 )
    goto LABEL_121;
  v231 = (__m128i *)((char *)&v270 + v114);
  v116 = 0;
  v117 = v231;
  do
  {
    ++v116;
    *v117++ = g4_m128_from<__m128i>(0LL);
  }
  while ( v116 < v115 );
  v113 += v241;
  if ( v253 != v241 )
  {
LABEL_121:
    do
g4_m128_lane<int8_t>(v270, v113++) = 0;
    while ( v113 <= 0x37 );
  }
LABEL_67:
  v274 = 0;
g4_m128_lane<int8_t>(v273, 11) = v276;
g4_m128_lane<int8_t>(v273, 8) = HIBYTE(v276);
g4_m128_lane<int8_t>(v273, 9) = BYTE2(v276);
g4_m128_lane<int8_t>(v273, 10) = BYTE1(v276);
g4_m128_lane<int8_t>(v273, 12) = HIBYTE(v212);
g4_m128_lane<int8_t>(v273, 13) = BYTE2(v212);
  v124 = _mm_unpackhi_epi8(v270, v271);
g4_m128_lane<int8_t>(v273, 14) = BYTE1(v212);
  v125 = _mm_unpacklo_epi8(v270, v271);
g4_m128_lane<int8_t>(v273, 15) = v212;
  v126 = _mm_unpacklo_epi8(v125, v124);
  v127 = _mm_unpackhi_epi8(v125, v124);
  v128 = _mm_unpackhi_epi8(v126, v127);
  v129 = _mm_unpacklo_epi8(v126, v127);
  v130 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v270, v271), v124), v127);
  v131 = _mm_unpackhi_epi8(v272, v273);
  v132 = _mm_unpacklo_epi8(v272, v273);
  v133 = _mm_unpacklo_epi8(v132, v131);
  v134 = _mm_unpackhi_epi8(v132, v131);
  v135 = _mm_unpacklo_epi8(v129, v128);
  v136 = _mm_unpackhi_epi8(v130, v128);
  v137 = _mm_unpackhi_epi8(v133, v134);
  v138 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v133, v134), v137);
  v139 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v272, v273), v131), v134);
  v140 = _mm_unpacklo_epi8(v135, v138);
  v141 = _mm_unpackhi_epi8(v135, v138);
  v142 = _mm_unpackhi_epi8(v139, v137);
  v143 = _mm_unpackhi_epi8(v140, v141);
  v144 = _mm_unpacklo_epi8(v140, v141);
  v145 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v135, v138), v141);
  v146 = _mm_unpackhi_epi8(v136, v142);
  v147 = _mm_unpacklo_epi8(v145, v143);
  v148 = _mm_unpackhi_epi8(v144, v143);
  v149 = _mm_unpacklo_epi8(v144, v143);
  v150 = _mm_unpacklo_epi8(v136, v142);
  v151 = _mm_unpacklo_epi8(v150, v146);
  v152 = _mm_unpackhi_epi8(v150, v146);
  v153 = _mm_unpacklo_epi8(v149, v148);
  v154 = _mm_unpackhi_epi8(v147, v148);
  v155 = _mm_unpackhi_epi8(v151, v152);
  v156 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v151, v152), v155);
  v157 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v136, v142), v146), v152), v155);
  v158 = v154;
  v159 = _mm_unpacklo_epi8(v153, g4_m128_from<__m128i>(0LL));
  v243 = _mm_unpackhi_epi8(v154, g4_m128_from<__m128i>(0LL));
  v232 = _mm_unpackhi_epi8(v157, g4_m128_from<__m128i>(0LL));
  v160 = _mm_unpacklo_epi8(v156, g4_m128_from<__m128i>(0LL));
  v161 = _mm_unpacklo_epi8(v157, g4_m128_from<__m128i>(0LL));
  v162 = _mm_unpacklo_epi16(v159, g4_m128_from<__m128i>(0LL));
  v163 = _mm_or_si128(
           _mm_or_si128(
             _mm_slli_epi32(_mm_unpackhi_epi16(v159, g4_m128_from<__m128i>(0LL)), 0x18u),
             _mm_slli_epi32(_mm_unpackhi_epi16(v160, g4_m128_from<__m128i>(0LL)), 0x10u)),
           _mm_unpackhi_epi16(v161, g4_m128_from<__m128i>(0LL)));
  v255 = _mm_or_si128(
           _mm_unpacklo_epi16(v161, g4_m128_from<__m128i>(0LL)),
           _mm_or_si128(_mm_slli_epi32(_mm_unpacklo_epi16(v160, g4_m128_from<__m128i>(0LL)), 0x10u), _mm_slli_epi32(v162, 0x18u)));
  v164 = _mm_unpacklo_epi8(v158, g4_m128_from<__m128i>(0LL));
  v165 = _mm_unpackhi_epi8(v156, g4_m128_from<__m128i>(0LL));
  v166 = _mm_unpackhi_epi8(v153, g4_m128_from<__m128i>(0LL));
  v256 = _mm_or_si128(_mm_slli_epi32(_mm_unpacklo_epi16(v164, g4_m128_from<__m128i>(0LL)), 8u), v255);
  v294 = v256;
  v295 = _mm_or_si128(v163, _mm_slli_epi32(_mm_unpackhi_epi16(v164, g4_m128_from<__m128i>(0LL)), 8u));
  v296 = _mm_or_si128(
           _mm_or_si128(
             _mm_or_si128(
               _mm_slli_epi32(_mm_unpacklo_epi16(v166, g4_m128_from<__m128i>(0LL)), 0x18u),
               _mm_slli_epi32(_mm_unpacklo_epi16(v165, g4_m128_from<__m128i>(0LL)), 0x10u)),
             _mm_unpacklo_epi16(v232, g4_m128_from<__m128i>(0LL))),
           _mm_slli_epi32(_mm_unpacklo_epi16(v243, g4_m128_from<__m128i>(0LL)), 8u));
  v297 = _mm_or_si128(
           _mm_or_si128(
             _mm_or_si128(
               _mm_slli_epi32(_mm_unpackhi_epi16(v166, g4_m128_from<__m128i>(0LL)), 0x18u),
               _mm_slli_epi32(_mm_unpackhi_epi16(v165, g4_m128_from<__m128i>(0LL)), 0x10u)),
             _mm_unpackhi_epi16(v232, g4_m128_from<__m128i>(0LL))),
           _mm_slli_epi32(_mm_unpackhi_epi16(v243, g4_m128_from<__m128i>(0LL)), 8u));
  v244 =g4_m128_lane<int32_t>(v256, 1);
  v167 =g4_m128_lane<uint64_t>(v297, 1);
  v168 = 16;
  v221 =g4_m128_lane<int32_t>(v297, 1);
  while ( 1 )
  {
    v221 = __builtin_rotateright32(g4_m128_lane<int32_t>(v256, 0) ^ v287[v168 + 21] ^ v287[v168 + 27] ^ v221, 31);
    v169 = *(uint32_t *)&v289[2 * v168 - 2] ^ v167;
g4_m128_lane<int32_t>(v294, v168) = v221;
g4_m128_lane<int32_t>(v256, 0) = v287[v168 + 22];
    v170 = v244 ^g4_m128_lane<int32_t>(v256, 0) ^ v169;
    v244 = v287[v168 + 23];
    v233 = v168 + 3;
    v171 = __builtin_rotateright32(v170, 31);
    v172 = __builtin_rotateright32(v287[v168 + 21] ^ v244 ^ *(uint32_t *)&v289[2 * v168] ^ HIDWORD(v167), 31);
    v4 = v168 == 76;
g4_m128_lane<int32_t>(v294, v168 + 1) = v171;
g4_m128_lane<int32_t>(v294, v168 + 2) = v172;
    v173 = 77 - v168;
    v167 = __PAIR64__(v172, v171);
    if ( v4 )
      break;
    v168 = v233;
  }
  v174 = v298;
  do
  {
    v174[3] = __builtin_rotateright32(*(v174 - 13) ^ *(v174 - 11) ^ *v174 ^ *(v174 - 5), 31);
    ++v174;
  }
  while ( v174 != &v298[v173] );
  v215 = v265;
  v213 = v266;
  v211 = v267;
  v209 = v268;
  v245 = v265;
  v175 = v267;
  v208 = v269;
  v234 = v269;
  v257 = v266;
  v176 = 0;
  v207 = v268;
  while ( 1 )
  {
    if ( v176 <= 0x13 )
    {
      v222 = 1518500249;
      v177 = v175 & v257 | v207 & ~v257;
    }
    else if ( v176 <= 0x27 )
    {
      v222 = 1859775393;
      v177 = v207 ^ v175 ^ v257;
    }
    else if ( v176 > 0x3B )
    {
      v222 = -899497514;
      v177 = v207 ^ v175 ^ v257;
    }
    else
    {
      v222 = -1894007588;
      v177 = v175 & v207 | v257 & (v175 | v207);
    }
    v178 = v234 +g4_m128_lane<int32_t>(v294, v176++) + __builtin_rotateright32(v245, 27) + v177 + v222;
    v179 = __builtin_rotateright32(v257, 2);
    if ( v176 == 80 )
      break;
    v180 = v207;
    v207 = v175;
    v175 = v179;
    v234 = v180;
    v257 = v245;
    v245 = v178;
  }
  v263[1] = v178 + v265;
  v265 += v178;
  LOBYTE(v263[6]) = (unsigned int)(v178 + v215) >> 24;
  BYTE1(v263[6]) = (unsigned int)(v178 + v215) >> 16;
  BYTE2(v263[6]) = (uint16_t)(v178 + v215) >> 8;
  v266 += v245;
  HIBYTE(v263[6]) = v178 + v215;
  v267 += v179;
  LOBYTE(v263[7]) = (unsigned int)(v213 + v245) >> 24;
  v268 += v175;
  BYTE1(v263[7]) = (unsigned int)(v213 + v245) >> 16;
  v269 += v207;
  BYTE2(v263[7]) = (uint16_t)(v213 + v245) >> 8;
  v263[2] = v213 + v245;
  LOBYTE(v263[8]) = (unsigned int)(v211 + v179) >> 24;
  v263[3] = v211 + v179;
  BYTE1(v263[8]) = (unsigned int)(v211 + v179) >> 16;
  v263[4] = v209 + v175;
  BYTE2(v263[8]) = (uint16_t)(v211 + v179) >> 8;
  v263[5] = v207 + v208;
  HIBYTE(v263[7]) = v213 + v245;
  HIBYTE(v263[8]) = v211 + v179;
  LOBYTE(v263[9]) = (unsigned int)(v209 + v175) >> 24;
  BYTE1(v263[9]) = (unsigned int)(v209 + v175) >> 16;
  BYTE2(v263[9]) = (uint16_t)(v209 + v175) >> 8;
  HIBYTE(v263[10]) = v207 + v208;
  LOBYTE(v263[10]) = (unsigned int)(v207 + v208) >> 24;
  HIBYTE(v263[9]) = v209 + v175;
  BYTE1(v263[10]) = (unsigned int)(v207 + v208) >> 16;
  BYTE2(v263[10]) = (uint16_t)(v207 + v208) >> 8;
  sub_1900810(v287);
  v288 = 0;
  v289[0] = 0;
  v290 = 0;
  v291 = 0;
  v292 = 0;
  v287[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v293 = 0;
  v277 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v277 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v278 = 0;
  sub_19119D0((char *)&v277 + (uint32_t)(uintptr_t)(*(v277 - 3)), 0);
  v279 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v280[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v280[-1] + (uint32_t)(uintptr_t)(*(v279 - 3)), 0);
  v277 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v277 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v280[1] = 0;
  v277 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v280[2] = 0;
  v281 = nullptr;
  v287[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v282 = nullptr;
  v283 = nullptr;
  v279 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v284 = 0;
  v280[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v285);
  v285[1] = 24;
  v181 = 0;
  v280[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v286 = &dword_213B814;
  sub_19119D0(v287, v280);
  *(uint32_t *)((char *)&v280[2] + (uint32_t)(uintptr_t)(*(v279 - 3))) = *(uint32_t *)((uint8_t *)&v280[2] + (uint32_t)(uintptr_t)(*(v279 - 3)))
                                                      & 0xFFFFFFB5
                                                      | 8;
  do
  {
    v182 = *((uint8_t *)&v263[6] + v181++);
    v183 = (int)(uintptr_t)(g4_std::ostream::op_shl_int(&v279, (v182 & 0xF0) >> 4));
    g4_std::ostream::op_shl_int(v183, v182 & 0xF);
  }
  while ( v181 != 20 );
  v184 = &dword_213B814;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v283 == nullptr )
  {
    g4_std::string::assign_str(self, &v286);
    goto LABEL_93;
  }
  v185 = v282;
  if ( v283 > v281 )
  {
    if ( v283 == v282 )
    {
LABEL_92:
      v261 = v184;
      g4_std::string::assign_str(self, &v261);
      v189 = v261 - 3;
      if ( v261 - 3 != dword_213B808 && __sync_fetch_and_add(v261 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v189);
      goto LABEL_93;
    }
    if ( v282 != nullptr )
    {
      v197 = v283 - v282;
      v186 = (size_t *)sub_1938930(v283 - v282, 0);
      v187 = v197;
      v188 = v186;
      v184 = (uint32_t *)(v186 + 3);
      if ( v197 == 1 )
      {
        *((uint8_t *)v186 + 12) = *v185;
      }
      else
      {
        v200 = (uint32_t *)(v186 + 3);
        memcpy(v186 + 3, v185, v197);
        v184 = v200;
        v187 = v197;
      }
      if ( v188 != (size_t *)(uintptr_t)(dword_213B808) )
      {
        v188[2] = 0;
        *v188 = v187;
        *((uint8_t *)v188 + v187 + 12) = 0;
      }
      goto LABEL_92;
    }
LABEL_107:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  }
  if ( v281 != v282 )
  {
    if ( v282 != nullptr )
    {
      v198 = v281 - v282;
      v192 = (size_t *)sub_1938930(v281 - v282, 0);
      v193 = v198;
      v194 = v192;
      v184 = (uint32_t *)(v192 + 3);
      if ( v198 == 1 )
      {
        *((uint8_t *)v192 + 12) = *v185;
LABEL_99:
        if ( v194 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v194[2] = 0;
          *v194 = v193;
          *((uint8_t *)v184 + v193) = 0;
        }
        goto LABEL_101;
      }
    }
    else
    {
      if ( v281 != nullptr )
        goto LABEL_107;
      v194 = (size_t *)sub_1938930(0, 0);
      v184 = (uint32_t *)(v194 + 3);
      v193 = 0;
    }
    v199 = v193;
    v201 = v184;
    memcpy(v184, v185, v193);
    v184 = v201;
    v193 = v199;
    goto LABEL_99;
  }
LABEL_101:
  v260 = v184;
  g4_std::string::assign_str(self, &v260);
  v195 = v260 - 3;
  if ( v260 - 3 != dword_213B808 && __sync_fetch_and_add(v260 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v195);
LABEL_93:
  v277 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v287[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v279 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v280[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v190 = v286 - 3;
  if ( v286 - 3 != dword_213B808 && __sync_fetch_and_add(v286 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v190);
  v280[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v285);
  v277 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v277 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v279 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v280[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v277 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v277 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v287[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v278 = 0;
  sub_1900B90(v287);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Utils::GetSHA1  (binary VA: 0x1334a80)
// Original: glotv3::Utils::GetSHA1
// ----------------------------------------------------------------------------
uint32_t * glotv3::Utils::GetSHA1(uint32_t *a1, int8_t **a2)
{
  int8_t *v2;
  unsigned int v3;
  __m128i v4;
  __m128i v5;
  __m128i v6;
  __m128i v7;
  __m128i v8;
  __m128i v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128i v33;
  __m128i v34;
  __m128i v35;
  __m128i v36;
  __m128i v37;
  __m128i v38;
  __m128i v39;
  int v40;
  uint64_t v41;
  int v42;
  int v43;
  int32_t v44;
  int32_t v45;
  uint32_t *v46;
  int v47;
  unsigned int v48;
  int v49;
  int32_t v50;
  int v51;
  int v52;
  int v53;
  unsigned int v54;
  __m128i v55;
  __m128i v56;
  __m128i v57;
  __m128i v58;
  __m128i v59;
  __m128i v60;
  __m128i v61;
  __m128i v62;
  __m128i v63;
  __m128i v64;
  __m128i v65;
  __m128i v66;
  __m128i v67;
  __m128i v68;
  __m128i v69;
  __m128i v70;
  __m128i v71;
  __m128i v72;
  __m128i v73;
  __m128i v74;
  __m128i v75;
  __m128i v76;
  __m128i v77;
  __m128i v78;
  __m128i v79;
  __m128i v80;
  __m128i v81;
  __m128i v82;
  __m128i v83;
  __m128i v84;
  __m128i v85;
  __m128i v86;
  __m128i v87;
  __m128i v88;
  __m128i v89;
  __m128i v90;
  __m128i v91;
  __m128i v92;
  __m128i v93;
  __m128i v94;
  __m128i v95;
  __m128i v96;
  __m128i v97;
  __m128i v98;
  int32_t v99;
  int32_t v100;
  int v101;
  int v102;
  int v103;
  uint32_t *v104;
  int v105;
  unsigned int v106;
  int v107;
  int32_t v108;
  int v109;
  int v110;
  unsigned int v111;
  unsigned int v112;
  unsigned int v113;
  unsigned int v114;
  __m128i *v115;
  unsigned int v116;
  unsigned int v117;
  unsigned int v118;
  unsigned int v119;
  unsigned int v120;
  __m128i *v121;
  __m128i v122;
  __m128i v123;
  __m128i v124;
  __m128i v125;
  __m128i v126;
  __m128i v127;
  __m128i v128;
  __m128i v129;
  __m128i v130;
  __m128i v131;
  __m128i v132;
  __m128i v133;
  __m128i v134;
  __m128i v135;
  __m128i v136;
  __m128i v137;
  __m128i v138;
  __m128i v139;
  __m128i v140;
  __m128i v141;
  __m128i v142;
  __m128i v143;
  __m128i v144;
  __m128i v145;
  __m128i v146;
  __m128i v147;
  __m128i v148;
  __m128i v149;
  __m128i v150;
  __m128i v151;
  __m128i v152;
  __m128i v153;
  __m128i v154;
  __m128i v155;
  __m128i v156;
  __m128i v157;
  __m128i v158;
  __m128i v159;
  __m128i v160;
  __m128i v161;
  __m128i v162;
  __m128i v163;
  __m128i v164;
  __m128i v165;
  __m128i v166;
  __m128i v167;
  int32_t v168;
  int32_t v169;
  int v170;
  int v171;
  int32_t v172;
  bool v173;
  int v174;
  uint32_t *v175;
  int v176;
  unsigned int v177;
  int v178;
  int32_t v179;
  int v180;
  int v181;
  int v182;
  char v183; // di
  int v184;
  uint32_t *v185;
  uint8_t *v186;
  size_t *v187;
  size_t v188;
  size_t *v189;
  uint32_t *v190;
  uint32_t *v191;
  size_t *v193;
  size_t v194;
  size_t *v195;
  uint32_t *v196;
  typedef int _g4_t_v197;
  typedef size_t _g4_t_v198;
  typedef size_t _g4_t_v199;
  typedef size_t _g4_t_v200;
  typedef uint32_t *_g4_t_v201;
  typedef uint32_t *_g4_t_v202;
  typedef int _g4_t_v203;
  typedef int _g4_t_v204;
  typedef int _g4_t_v205;
  typedef int _g4_t_v206;
  typedef int _g4_t_v207;
  typedef int _g4_t_v208;
  typedef int _g4_t_v209;
  typedef int _g4_t_v210;
  typedef int _g4_t_v211;
  typedef int8_t *_g4_t_v212;
  typedef unsigned int _g4_t_v213;
  typedef int _g4_t_v214;
  typedef int8_t *_g4_t_v215;
  typedef int _g4_t_v216;
  typedef __m128i _g4_t_v217;
  typedef int32_t _g4_t_v218;
  typedef int _g4_t_v219;
  typedef int32_t _g4_t_v220;
  typedef int _g4_t_v221;
  typedef int32_t _g4_t_v222;
  typedef int _g4_t_v223;
  typedef __m128i _g4_t_v224;
  typedef __m128i _g4_t_v225;
  typedef __m128i _g4_t_v226;
  typedef __m128i _g4_t_v227;
  typedef __m128i _g4_t_v228;
  typedef int _g4_t_v229;
  typedef __m128i _g4_t_v230;
  typedef int _g4_t_v231;
  typedef __m128i *_g4_t_v232;
  typedef __m128i _g4_t_v233;
  typedef int _g4_t_v234;
  typedef int _g4_t_v235;
  typedef __m128i _g4_t_v236;
  typedef int32_t _g4_t_v237;
  typedef int _g4_t_v238;
  typedef __m128i _g4_t_v239;
  typedef int32_t _g4_t_v240;
  typedef int _g4_t_v241;
  typedef int _g4_t_v242;
  typedef int _g4_t_v243;
  typedef __m128i _g4_t_v244;
  typedef int32_t _g4_t_v245;
  typedef int _g4_t_v246;
  typedef __m128i _g4_t_v247;
  typedef __m128i _g4_t_v248;
  typedef int32_t _g4_t_v249;
  typedef int _g4_t_v250;
  typedef __m128i _g4_t_v251;
  typedef int32_t _g4_t_v252;
  typedef int _g4_t_v253;
  typedef unsigned int _g4_t_v254;
  typedef unsigned int _g4_t_v255;
  typedef __m128i _g4_t_v256;
  typedef __m128i _g4_t_v257;
  typedef int _g4_t_v258;
  typedef int _g4_t_v259;
  typedef int _g4_t_v260;
  typedef uint32_t *_g4_t_v261;
  typedef uint32_t *_g4_t_v262;
  typedef int _g4_t_v263;
  typedef uint32_t _g4_t_v264[12];
  typedef uint32_t _g4_t_v265[6];
  typedef int _g4_t_v266;
  typedef int _g4_t_v267;
  typedef int _g4_t_v268;
  typedef int _g4_t_v269;
  typedef int _g4_t_v270;
  typedef __m128i _g4_t_v271 __attribute__((aligned(1)));
  typedef __m128i _g4_t_v272 __attribute__((aligned(1)));
  typedef __m128i _g4_t_v273 __attribute__((aligned(1)));
  typedef __m128i _g4_t_v274 __attribute__((aligned(1)));
  typedef unsigned int _g4_t_v275;
  typedef unsigned int _g4_t_v276;
  typedef int _g4_t_v277;
  typedef int (**_g4_t_v278)(int);
  typedef int _g4_t_v279;
  typedef int (**_g4_t_v280)(int);
  typedef uint32_t _g4_t_v281[3];
  typedef uint8_t *_g4_t_v282;
  typedef uint8_t *_g4_t_v283;
  typedef uint8_t *_g4_t_v284;
  typedef int _g4_t_v285;
  typedef uint32_t _g4_t_v286[2];
  typedef uint32_t *_g4_t_v287;
  typedef uint32_t _g4_t_v288[28];
  typedef int _g4_t_v289;
  typedef uint16_t _g4_t_v290[2];
  typedef int _g4_t_v291;
  typedef int _g4_t_v292;
  typedef int _g4_t_v293;
  typedef int _g4_t_v294;
  typedef __m128i _g4_t_v295;
  typedef __m128i _g4_t_v296;
  typedef __m128i _g4_t_v297;
  typedef __m128i _g4_t_v298;
  typedef uint32_t _g4_t_v299[7];
  enum : size_t {
    _g4_s0 = 912u,
    _g4_s1 = (12u + sizeof(_g4_t_v197)) > _g4_s0 ? (12u + sizeof(_g4_t_v197)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v198)) > _g4_s1 ? (16u + sizeof(_g4_t_v198)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v199)) > _g4_s2 ? (16u + sizeof(_g4_t_v199)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v200)) > _g4_s3 ? (16u + sizeof(_g4_t_v200)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v201)) > _g4_s4 ? (20u + sizeof(_g4_t_v201)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v202)) > _g4_s5 ? (20u + sizeof(_g4_t_v202)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v203)) > _g4_s6 ? (24u + sizeof(_g4_t_v203)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v204)) > _g4_s7 ? (32u + sizeof(_g4_t_v204)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v205)) > _g4_s8 ? (32u + sizeof(_g4_t_v205)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v206)) > _g4_s9 ? (36u + sizeof(_g4_t_v206)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v207)) > _g4_s10 ? (36u + sizeof(_g4_t_v207)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v208)) > _g4_s11 ? (40u + sizeof(_g4_t_v208)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v209)) > _g4_s12 ? (40u + sizeof(_g4_t_v209)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v210)) > _g4_s13 ? (44u + sizeof(_g4_t_v210)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v211)) > _g4_s14 ? (44u + sizeof(_g4_t_v211)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v212)) > _g4_s15 ? (48u + sizeof(_g4_t_v212)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v213)) > _g4_s16 ? (52u + sizeof(_g4_t_v213)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v214)) > _g4_s17 ? (52u + sizeof(_g4_t_v214)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v215)) > _g4_s18 ? (56u + sizeof(_g4_t_v215)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v216)) > _g4_s19 ? (56u + sizeof(_g4_t_v216)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v217)) > _g4_s20 ? (64u + sizeof(_g4_t_v217)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v218)) > _g4_s21 ? (64u + sizeof(_g4_t_v218)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v219)) > _g4_s22 ? (64u + sizeof(_g4_t_v219)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v220)) > _g4_s23 ? (64u + sizeof(_g4_t_v220)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v221)) > _g4_s24 ? (64u + sizeof(_g4_t_v221)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v222)) > _g4_s25 ? (64u + sizeof(_g4_t_v222)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v223)) > _g4_s26 ? (64u + sizeof(_g4_t_v223)) : _g4_s26,
    _g4_s28 = (80u + sizeof(_g4_t_v224)) > _g4_s27 ? (80u + sizeof(_g4_t_v224)) : _g4_s27,
    _g4_s29 = (80u + sizeof(_g4_t_v225)) > _g4_s28 ? (80u + sizeof(_g4_t_v225)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v226)) > _g4_s29 ? (80u + sizeof(_g4_t_v226)) : _g4_s29,
    _g4_s31 = (80u + sizeof(_g4_t_v227)) > _g4_s30 ? (80u + sizeof(_g4_t_v227)) : _g4_s30,
    _g4_s32 = (80u + sizeof(_g4_t_v228)) > _g4_s31 ? (80u + sizeof(_g4_t_v228)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v229)) > _g4_s32 ? (80u + sizeof(_g4_t_v229)) : _g4_s32,
    _g4_s34 = (80u + sizeof(_g4_t_v230)) > _g4_s33 ? (80u + sizeof(_g4_t_v230)) : _g4_s33,
    _g4_s35 = (80u + sizeof(_g4_t_v231)) > _g4_s34 ? (80u + sizeof(_g4_t_v231)) : _g4_s34,
    _g4_s36 = (80u + sizeof(_g4_t_v232)) > _g4_s35 ? (80u + sizeof(_g4_t_v232)) : _g4_s35,
    _g4_s37 = (80u + sizeof(_g4_t_v233)) > _g4_s36 ? (80u + sizeof(_g4_t_v233)) : _g4_s36,
    _g4_s38 = (80u + sizeof(_g4_t_v234)) > _g4_s37 ? (80u + sizeof(_g4_t_v234)) : _g4_s37,
    _g4_s39 = (80u + sizeof(_g4_t_v235)) > _g4_s38 ? (80u + sizeof(_g4_t_v235)) : _g4_s38,
    _g4_s40 = (96u + sizeof(_g4_t_v236)) > _g4_s39 ? (96u + sizeof(_g4_t_v236)) : _g4_s39,
    _g4_s41 = (96u + sizeof(_g4_t_v237)) > _g4_s40 ? (96u + sizeof(_g4_t_v237)) : _g4_s40,
    _g4_s42 = (96u + sizeof(_g4_t_v238)) > _g4_s41 ? (96u + sizeof(_g4_t_v238)) : _g4_s41,
    _g4_s43 = (96u + sizeof(_g4_t_v239)) > _g4_s42 ? (96u + sizeof(_g4_t_v239)) : _g4_s42,
    _g4_s44 = (96u + sizeof(_g4_t_v240)) > _g4_s43 ? (96u + sizeof(_g4_t_v240)) : _g4_s43,
    _g4_s45 = (96u + sizeof(_g4_t_v241)) > _g4_s44 ? (96u + sizeof(_g4_t_v241)) : _g4_s44,
    _g4_s46 = (96u + sizeof(_g4_t_v242)) > _g4_s45 ? (96u + sizeof(_g4_t_v242)) : _g4_s45,
    _g4_s47 = (96u + sizeof(_g4_t_v243)) > _g4_s46 ? (96u + sizeof(_g4_t_v243)) : _g4_s46,
    _g4_s48 = (96u + sizeof(_g4_t_v244)) > _g4_s47 ? (96u + sizeof(_g4_t_v244)) : _g4_s47,
    _g4_s49 = (96u + sizeof(_g4_t_v245)) > _g4_s48 ? (96u + sizeof(_g4_t_v245)) : _g4_s48,
    _g4_s50 = (96u + sizeof(_g4_t_v246)) > _g4_s49 ? (96u + sizeof(_g4_t_v246)) : _g4_s49,
    _g4_s51 = (112u + sizeof(_g4_t_v247)) > _g4_s50 ? (112u + sizeof(_g4_t_v247)) : _g4_s50,
    _g4_s52 = (112u + sizeof(_g4_t_v248)) > _g4_s51 ? (112u + sizeof(_g4_t_v248)) : _g4_s51,
    _g4_s53 = (112u + sizeof(_g4_t_v249)) > _g4_s52 ? (112u + sizeof(_g4_t_v249)) : _g4_s52,
    _g4_s54 = (112u + sizeof(_g4_t_v250)) > _g4_s53 ? (112u + sizeof(_g4_t_v250)) : _g4_s53,
    _g4_s55 = (112u + sizeof(_g4_t_v251)) > _g4_s54 ? (112u + sizeof(_g4_t_v251)) : _g4_s54,
    _g4_s56 = (112u + sizeof(_g4_t_v252)) > _g4_s55 ? (112u + sizeof(_g4_t_v252)) : _g4_s55,
    _g4_s57 = (112u + sizeof(_g4_t_v253)) > _g4_s56 ? (112u + sizeof(_g4_t_v253)) : _g4_s56,
    _g4_s58 = (112u + sizeof(_g4_t_v254)) > _g4_s57 ? (112u + sizeof(_g4_t_v254)) : _g4_s57,
    _g4_s59 = (112u + sizeof(_g4_t_v255)) > _g4_s58 ? (112u + sizeof(_g4_t_v255)) : _g4_s58,
    _g4_s60 = (112u + sizeof(_g4_t_v256)) > _g4_s59 ? (112u + sizeof(_g4_t_v256)) : _g4_s59,
    _g4_s61 = (112u + sizeof(_g4_t_v257)) > _g4_s60 ? (112u + sizeof(_g4_t_v257)) : _g4_s60,
    _g4_s62 = (112u + sizeof(_g4_t_v258)) > _g4_s61 ? (112u + sizeof(_g4_t_v258)) : _g4_s61,
    _g4_s63 = (130u + sizeof(_g4_t_v259)) > _g4_s62 ? (130u + sizeof(_g4_t_v259)) : _g4_s62,
    _g4_s64 = (136u + sizeof(_g4_t_v260)) > _g4_s63 ? (136u + sizeof(_g4_t_v260)) : _g4_s63,
    _g4_s65 = (140u + sizeof(_g4_t_v261)) > _g4_s64 ? (140u + sizeof(_g4_t_v261)) : _g4_s64,
    _g4_s66 = (144u + sizeof(_g4_t_v262)) > _g4_s65 ? (144u + sizeof(_g4_t_v262)) : _g4_s65,
    _g4_s67 = (148u + sizeof(_g4_t_v263)) > _g4_s66 ? (148u + sizeof(_g4_t_v263)) : _g4_s66,
    _g4_s68 = (152u + sizeof(_g4_t_v264)) > _g4_s67 ? (152u + sizeof(_g4_t_v264)) : _g4_s67,
    _g4_s69 = (200u + sizeof(_g4_t_v265)) > _g4_s68 ? (200u + sizeof(_g4_t_v265)) : _g4_s68,
    _g4_s70 = (224u + sizeof(_g4_t_v266)) > _g4_s69 ? (224u + sizeof(_g4_t_v266)) : _g4_s69,
    _g4_s71 = (228u + sizeof(_g4_t_v267)) > _g4_s70 ? (228u + sizeof(_g4_t_v267)) : _g4_s70,
    _g4_s72 = (232u + sizeof(_g4_t_v268)) > _g4_s71 ? (232u + sizeof(_g4_t_v268)) : _g4_s71,
    _g4_s73 = (236u + sizeof(_g4_t_v269)) > _g4_s72 ? (236u + sizeof(_g4_t_v269)) : _g4_s72,
    _g4_s74 = (240u + sizeof(_g4_t_v270)) > _g4_s73 ? (240u + sizeof(_g4_t_v270)) : _g4_s73,
    _g4_s75 = (244u + sizeof(_g4_t_v271)) > _g4_s74 ? (244u + sizeof(_g4_t_v271)) : _g4_s74,
    _g4_s76 = (260u + sizeof(_g4_t_v272)) > _g4_s75 ? (260u + sizeof(_g4_t_v272)) : _g4_s75,
    _g4_s77 = (276u + sizeof(_g4_t_v273)) > _g4_s76 ? (276u + sizeof(_g4_t_v273)) : _g4_s76,
    _g4_s78 = (292u + sizeof(_g4_t_v274)) > _g4_s77 ? (292u + sizeof(_g4_t_v274)) : _g4_s77,
    _g4_s79 = (308u + sizeof(_g4_t_v275)) > _g4_s78 ? (308u + sizeof(_g4_t_v275)) : _g4_s78,
    _g4_s80 = (312u + sizeof(_g4_t_v276)) > _g4_s79 ? (312u + sizeof(_g4_t_v276)) : _g4_s79,
    _g4_s81 = (316u + sizeof(_g4_t_v277)) > _g4_s80 ? (316u + sizeof(_g4_t_v277)) : _g4_s80,
    _g4_s82 = (320u + sizeof(_g4_t_v278)) > _g4_s81 ? (320u + sizeof(_g4_t_v278)) : _g4_s81,
    _g4_s83 = (324u + sizeof(_g4_t_v279)) > _g4_s82 ? (324u + sizeof(_g4_t_v279)) : _g4_s82,
    _g4_s84 = (328u + sizeof(_g4_t_v280)) > _g4_s83 ? (328u + sizeof(_g4_t_v280)) : _g4_s83,
    _g4_s85 = (332u + sizeof(_g4_t_v281)) > _g4_s84 ? (332u + sizeof(_g4_t_v281)) : _g4_s84,
    _g4_s86 = (344u + sizeof(_g4_t_v282)) > _g4_s85 ? (344u + sizeof(_g4_t_v282)) : _g4_s85,
    _g4_s87 = (348u + sizeof(_g4_t_v283)) > _g4_s86 ? (348u + sizeof(_g4_t_v283)) : _g4_s86,
    _g4_s88 = (352u + sizeof(_g4_t_v284)) > _g4_s87 ? (352u + sizeof(_g4_t_v284)) : _g4_s87,
    _g4_s89 = (356u + sizeof(_g4_t_v285)) > _g4_s88 ? (356u + sizeof(_g4_t_v285)) : _g4_s88,
    _g4_s90 = (360u + sizeof(_g4_t_v286)) > _g4_s89 ? (360u + sizeof(_g4_t_v286)) : _g4_s89,
    _g4_s91 = (368u + sizeof(_g4_t_v287)) > _g4_s90 ? (368u + sizeof(_g4_t_v287)) : _g4_s90,
    _g4_s92 = (372u + sizeof(_g4_t_v288)) > _g4_s91 ? (372u + sizeof(_g4_t_v288)) : _g4_s91,
    _g4_s93 = (484u + sizeof(_g4_t_v289)) > _g4_s92 ? (484u + sizeof(_g4_t_v289)) : _g4_s92,
    _g4_s94 = (488u + sizeof(_g4_t_v290)) > _g4_s93 ? (488u + sizeof(_g4_t_v290)) : _g4_s93,
    _g4_s95 = (492u + sizeof(_g4_t_v291)) > _g4_s94 ? (492u + sizeof(_g4_t_v291)) : _g4_s94,
    _g4_s96 = (496u + sizeof(_g4_t_v292)) > _g4_s95 ? (496u + sizeof(_g4_t_v292)) : _g4_s95,
    _g4_s97 = (500u + sizeof(_g4_t_v293)) > _g4_s96 ? (500u + sizeof(_g4_t_v293)) : _g4_s96,
    _g4_s98 = (504u + sizeof(_g4_t_v294)) > _g4_s97 ? (504u + sizeof(_g4_t_v294)) : _g4_s97,
    _g4_s99 = (512u + sizeof(_g4_t_v295)) > _g4_s98 ? (512u + sizeof(_g4_t_v295)) : _g4_s98,
    _g4_s100 = (528u + sizeof(_g4_t_v296)) > _g4_s99 ? (528u + sizeof(_g4_t_v296)) : _g4_s99,
    _g4_s101 = (544u + sizeof(_g4_t_v297)) > _g4_s100 ? (544u + sizeof(_g4_t_v297)) : _g4_s100,
    _g4_s102 = (560u + sizeof(_g4_t_v298)) > _g4_s101 ? (560u + sizeof(_g4_t_v298)) : _g4_s101,
    _g4_s103 = (816u + sizeof(_g4_t_v299)) > _g4_s102 ? (816u + sizeof(_g4_t_v299)) : _g4_s102
  };
  alignas(16) uint8_t _g4_sf[_g4_s103];
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 12u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 16u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 16u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 16u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 20u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 20u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 24u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 32u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 32u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 36u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 36u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 40u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 40u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 44u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 44u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 48u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 52u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 52u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 56u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 56u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 64u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 64u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 64u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 64u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 64u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 64u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 64u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 80u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 80u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 80u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 80u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 80u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 80u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 80u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 80u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 80u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 80u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 80u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 80u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 96u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 96u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 96u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 96u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 96u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 96u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 96u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 96u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 96u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 96u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 96u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 112u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 112u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 112u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 112u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 112u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 112u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 112u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 112u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 112u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 112u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 112u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 112u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 130u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 136u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 140u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 144u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 148u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 152u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 200u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 224u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 228u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 232u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 236u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 240u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 244u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 260u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 276u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 292u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 308u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 312u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 316u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 320u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 324u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 328u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 332u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 344u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 348u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 352u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 356u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 360u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 368u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 372u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 484u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 488u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 492u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 496u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 500u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 504u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 512u);
  _g4_t_v296 &v296 = *reinterpret_cast<_g4_t_v296 *>(_g4_sf + 528u);
  _g4_t_v297 &v297 = *reinterpret_cast<_g4_t_v297 *>(_g4_sf + 544u);
  _g4_t_v298 &v298 = *reinterpret_cast<_g4_t_v298 *>(_g4_sf + 560u);
  _g4_t_v299 &v299 = *reinterpret_cast<_g4_t_v299 *>(_g4_sf + 816u);

  v266 = 1732584193;
  v267 = -271733879;
  v268 = -1732584194;
  v269 = 271733878;
  v270 = -1009589776;
  v275 = 0;
  v2 = *a2;
  v276 = 0;
  v215 = v2;
  v277 = 0;
  v212 = &v2[*((uint32_t *)v2 - 3)];
  if ( v2 == v212 )
  {
g4_m128_lane<int8_t>(v271, 0) = 0x80;
    v54 = 1;
LABEL_57:
    v116 = 56 - v54;
    v117 = -((int)(uintptr_t)(&v266) + v54 + 20) & 0xF;
    v255 = v54 + 20;
    v118 = v54;
    if ( v117 > 56 - v54 )
      v117 = 56 - v54;
    if ( v117 == 0 )
      goto LABEL_120;
    do
g4_m128_lane<int8_t>(v271, v118++) = 0;
    while ( v118 - v54 < v117 );
    v116 = 56 - v54;
    if ( 56 - v54 != v117 )
    {
LABEL_120:
      v119 = v116 - v117;
      v243 = 16 * (v119 >> 4);
      if ( v243 == 0 )
        goto LABEL_121;
      v120 = 0;
      v121 = (__m128i *)((char *)&v266 + v255 + v117);
      do
      {
        ++v120;
        *v121++ = g4_m128_from<__m128i>(0LL);
      }
      while ( v119 >> 4 > v120 );
      v118 += v243;
      if ( v119 != v243 )
      {
LABEL_121:
        do
g4_m128_lane<int8_t>(v271, v118++) = 0;
        while ( v118 <= 0x37 );
      }
    }
    goto LABEL_67;
  }
  v3 = 0;
  v213 = 0;
  do
  {
g4_m128_lane<int8_t>(v271, v3) = *v215;
    v275 = v3 + 1;
    if ( v3 == 63 )
    {
      v4 = _mm_unpacklo_epi8(v271, v272);
      v5 = _mm_unpackhi_epi8(v271, v272);
      v6 = _mm_unpackhi_epi8(v4, v5);
      v7 = _mm_unpacklo_epi8(v4, v5);
      v275 = 0;
      v224 = v6;
      v8 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v271, v272), v5), v6);
      v9 = _mm_unpackhi_epi8(v7, v6);
      v10 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v7, v224), v9);
      v11 = _mm_unpackhi_epi8(v8, v9);
      v12 = _mm_unpacklo_epi8(v273, v274);
      v13 = _mm_unpackhi_epi8(v273, v274);
      v14 = _mm_unpackhi_epi8(v12, v13);
      v15 = _mm_unpacklo_epi8(v12, v13);
      v225 = v14;
      v16 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v273, v274), v13), v14);
      v17 = _mm_unpackhi_epi8(v15, v14);
      v18 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v15, v225), v17);
      v19 = _mm_unpackhi_epi8(v16, v17);
      v20 = _mm_unpacklo_epi8(v10, v18);
      v226 = _mm_unpackhi_epi8(v10, v18);
      v21 = _mm_unpackhi_epi8(v20, v226);
      v22 = _mm_unpacklo_epi8(v20, v226);
      v23 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v10, v18), v226);
      v247 = v21;
      v227 = _mm_unpackhi_epi8(v11, v19);
      v24 = _mm_unpackhi_epi8(v22, v21);
      v25 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v22, v247), v24);
      v26 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(v23, v247), v24);
      v27 = _mm_unpacklo_epi8(v11, v19);
      v28 = _mm_unpacklo_epi8(v27, v227);
      v248 = _mm_unpackhi_epi8(v27, v227);
      v29 = _mm_unpackhi_epi8(v28, v248);
      v30 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v28, v248), v29);
      v31 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v11, v19), v227), v248);
      v32 = _mm_unpacklo_epi8(v25, g4_m128_from<__m128i>(0LL));
      v236 = _mm_unpackhi_epi8(v25, g4_m128_from<__m128i>(0LL));
      v33 = _mm_unpackhi_epi8(v31, v29);
      v228 = _mm_unpacklo_epi8(v30, g4_m128_from<__m128i>(0LL));
      v34 = _mm_unpacklo_epi8(v33, g4_m128_from<__m128i>(0LL));
      v217 = _mm_unpackhi_epi8(v30, g4_m128_from<__m128i>(0LL));
      v35 = _mm_unpacklo_epi8(v26, g4_m128_from<__m128i>(0LL));
      v36 = _mm_unpackhi_epi8(v33, g4_m128_from<__m128i>(0LL));
      v295 = _mm_or_si128(
               _mm_slli_epi32(_mm_unpacklo_epi16(v35, g4_m128_from<__m128i>(0LL)), 8u),
               _mm_or_si128(
                 _mm_unpacklo_epi16(v34, g4_m128_from<__m128i>(0LL)),
                 _mm_or_si128(
                   _mm_slli_epi32(_mm_unpacklo_epi16(v228, g4_m128_from<__m128i>(0LL)), 0x10u),
                   _mm_slli_epi32(_mm_unpacklo_epi16(v32, g4_m128_from<__m128i>(0LL)), 0x18u))));
      v37 = _mm_unpackhi_epi8(v26, g4_m128_from<__m128i>(0LL));
      v249 =g4_m128_lane<int32_t>(v295, 0);
      v38 = _mm_or_si128(
              _mm_or_si128(
                _mm_or_si128(
                  _mm_slli_epi32(_mm_unpackhi_epi16(v32, g4_m128_from<__m128i>(0LL)), 0x18u),
                  _mm_slli_epi32(_mm_unpackhi_epi16(v228, g4_m128_from<__m128i>(0LL)), 0x10u)),
                _mm_unpackhi_epi16(v34, g4_m128_from<__m128i>(0LL))),
              _mm_slli_epi32(_mm_unpackhi_epi16(v35, g4_m128_from<__m128i>(0LL)), 8u));
      v297 = _mm_or_si128(
               _mm_or_si128(
                 _mm_or_si128(
                   _mm_slli_epi32(_mm_unpacklo_epi16(v236, g4_m128_from<__m128i>(0LL)), 0x18u),
                   _mm_slli_epi32(_mm_unpacklo_epi16(v217, g4_m128_from<__m128i>(0LL)), 0x10u)),
                 _mm_unpacklo_epi16(v36, g4_m128_from<__m128i>(0LL))),
               _mm_slli_epi32(_mm_unpacklo_epi16(v37, g4_m128_from<__m128i>(0LL)), 8u));
      v39 = v236;
      v237 =g4_m128_lane<int32_t>(v295, 1);
      v40 = 16;
      v298 = _mm_or_si128(
               _mm_or_si128(
                 _mm_or_si128(
                   _mm_slli_epi32(_mm_unpackhi_epi16(v39, g4_m128_from<__m128i>(0LL)), 0x18u),
                   _mm_slli_epi32(_mm_unpackhi_epi16(v217, g4_m128_from<__m128i>(0LL)), 0x10u)),
                 _mm_unpackhi_epi16(v36, g4_m128_from<__m128i>(0LL))),
               _mm_slli_epi32(_mm_unpackhi_epi16(v37, g4_m128_from<__m128i>(0LL)), 8u));
      v296 = v38;
      v41 =g4_m128_lane<uint64_t>(v298, 1);
      v218 =g4_m128_lane<int32_t>(v298, 1);
      while ( 1 )
      {
        v218 = __builtin_rotateright32(v249 ^ v288[v40 + 21] ^ v288[v40 + 27] ^ v218, 31);
        v42 = *(uint32_t *)&v290[2 * v40 - 2] ^ v41;
g4_m128_lane<int32_t>(v295, v40) = v218;
        v249 = v288[v40 + 22];
        v43 = v237 ^ v249 ^ v42;
        v237 = v288[v40 + 23];
        v44 = __builtin_rotateright32(v43, 31);
        v45 = __builtin_rotateright32(v288[v40 + 21] ^ v237 ^ *(uint32_t *)&v290[2 * v40] ^ HIDWORD(v41), 31);
g4_m128_lane<int32_t>(v295, v40 + 1) = v44;
g4_m128_lane<int32_t>(v295, v40 + 2) = v45;
        v41 = __PAIR64__(v45, v44);
        if ( v40 == 76 )
          break;
        v40 += 3;
      }
      v46 = v299;
      do
      {
        v46[3] = __builtin_rotateright32(*(v46 - 5) ^ *v46 ^ *(v46 - 11) ^ *(v46 - 13), 31);
        ++v46;
      }
      while ( v46 != &v299[77 - v40] );
      v238 = v266;
      v229 = v270;
      v250 = v269;
      v47 = v268;
      v48 = 0;
      v203 = v267;
      while ( 1 )
      {
        if ( v48 <= 0x13 )
        {
          v219 = 1518500249;
          v49 = v47 & v203 | v250 & ~v203;
        }
        else if ( v48 <= 0x27 )
        {
          v219 = 1859775393;
          v49 = v47 ^ v203 ^ v250;
        }
        else if ( v48 > 0x3B )
        {
          v219 = -899497514;
          v49 = v47 ^ v203 ^ v250;
        }
        else
        {
          v49 = v47 & v250 | v203 & (v47 | v250);
          v219 = -1894007588;
        }
        v50 = v229 +g4_m128_lane<int32_t>(v295, v48++) + __builtin_rotateright32(v238, 27);
        v51 = v219 + v50 + v49;
        v52 = __builtin_rotateright32(v203, 2);
        if ( v48 == 80 )
          break;
        v53 = v250;
        v250 = v47;
        v47 = v52;
        v229 = v53;
        v203 = v238;
        v238 = v51;
      }
      v267 += v238;
      v266 += v51;
      v268 += v52;
      v269 += v47;
      v270 += v250;
    }
    if ( v213 <= 0xFFFFFFF7 )
    {
      v213 += 8;
      v276 = v213;
    }
    else
    {
      v276 = 0;
      if ( v277 == -1 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v260), "sha1 too many bytes", (int)(uintptr_t)(&v259));
        sub_19042E0(&v263, &v260);
        v264[11] = ((uint32_t)(uintptr_t)&off_20A9AA8);
        g4_std::string::construct_copy(v265, v264);
        v265[2] = 0;
        v265[5] = 104;
        v265[1] = ((uint32_t)(uintptr_t)&off_209383C);
        v264[11] = ((uint32_t)(uintptr_t)&off_2093828);
        v265[3] = (uint32_t)(uintptr_t)("void boost::uuids::detail::sha1::process_byte(unsigned char)");
        v265[4] = (uint32_t)(uintptr_t)("../../../../../lib/glitch/include/boost/uuid/sha1.hpp");
        std::terminate();
      }
      v213 = 0;
      ++v277;
    }
    ++v215;
    v3 = v275;
  }
  while ( v212 != v215 );
  v54 = v275 + 1;
g4_m128_lane<int8_t>(v271, v275) = 0x80;
  v275 = v3 + 1;
  if ( v3 == 63 )
  {
    v275 = 0;
    boost::uuids::detail::sha1::process_block((boost::uuids::detail::sha1 *)&v266);
    v54 = v275;
  }
  if ( v54 <= 0x38 )
  {
    if ( v54 == 56 )
      goto LABEL_67;
    goto LABEL_57;
  }
  v210 = v266;
  v208 = v267;
  v206 = v268;
  v204 = v269;
  while ( v54 != 0 )
  {
g4_m128_lane<int8_t>(v271, v54++) = 0;
    if ( v54 == 64 )
    {
      v55 = _mm_unpackhi_epi8(v271, v272);
      v56 = _mm_unpacklo_epi8(v271, v272);
      v57 = _mm_unpacklo_epi8(v56, v55);
      v58 = _mm_unpackhi_epi8(v56, v55);
      v59 = _mm_unpackhi_epi8(v57, v58);
      v60 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v271, v272), v55), v58);
      v61 = _mm_unpackhi_epi8(v273, v274);
      v62 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v57, v58), v59);
      v63 = _mm_unpacklo_epi8(v273, v274);
      v64 = _mm_unpacklo_epi8(v63, v61);
      v65 = _mm_unpackhi_epi8(v63, v61);
      v66 = _mm_unpackhi_epi8(v60, v59);
      v67 = _mm_unpackhi_epi8(v64, v65);
      v68 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v64, v65), v67);
      v69 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v273, v274), v61), v65);
      v70 = _mm_unpacklo_epi8(v62, v68);
      v71 = _mm_unpackhi_epi8(v62, v68);
      v72 = _mm_unpackhi_epi8(v69, v67);
      v73 = _mm_unpackhi_epi8(v70, v71);
      v74 = _mm_unpacklo_epi8(v70, v71);
      v75 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v62, v68), v71);
      v76 = _mm_unpackhi_epi8(v66, v72);
      v77 = _mm_unpackhi_epi8(v74, v73);
      v78 = _mm_unpacklo_epi8(v74, v73);
      v79 = _mm_unpacklo_epi8(v75, v73);
      v80 = _mm_unpacklo_epi8(v66, v72);
      v81 = _mm_unpacklo_epi8(v80, v76);
      v82 = _mm_unpackhi_epi8(v80, v76);
      v83 = _mm_unpacklo_epi8(v78, v77);
      v84 = _mm_unpackhi_epi8(v79, v77);
      v85 = _mm_unpackhi_epi8(v81, v82);
      v86 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v66, v72), v76), v82), v85);
      v87 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v81, v82), v85);
      v88 = v84;
      v239 = _mm_unpackhi_epi8(v84, g4_m128_from<__m128i>(0LL));
      v89 = _mm_unpacklo_epi8(v83, g4_m128_from<__m128i>(0LL));
      v90 = _mm_unpacklo_epi8(v87, g4_m128_from<__m128i>(0LL));
      v91 = _mm_unpacklo_epi8(v86, g4_m128_from<__m128i>(0LL));
      v230 = _mm_unpackhi_epi8(v86, g4_m128_from<__m128i>(0LL));
      v92 = _mm_unpacklo_epi16(v89, g4_m128_from<__m128i>(0LL));
      v93 = _mm_or_si128(
              _mm_or_si128(
                _mm_slli_epi32(_mm_unpackhi_epi16(v89, g4_m128_from<__m128i>(0LL)), 0x18u),
                _mm_slli_epi32(_mm_unpackhi_epi16(v90, g4_m128_from<__m128i>(0LL)), 0x10u)),
              _mm_unpackhi_epi16(v91, g4_m128_from<__m128i>(0LL)));
      v251 = _mm_or_si128(
               _mm_unpacklo_epi16(v91, g4_m128_from<__m128i>(0LL)),
               _mm_or_si128(_mm_slli_epi32(_mm_unpacklo_epi16(v90, g4_m128_from<__m128i>(0LL)), 0x10u), _mm_slli_epi32(v92, 0x18u)));
      v94 = _mm_unpacklo_epi8(v88, g4_m128_from<__m128i>(0LL));
      v95 = _mm_unpackhi_epi8(v87, g4_m128_from<__m128i>(0LL));
      v96 = _mm_unpackhi_epi8(v83, g4_m128_from<__m128i>(0LL));
      v97 = _mm_unpackhi_epi16(v96, g4_m128_from<__m128i>(0LL));
      v98 = _mm_or_si128(
              _mm_or_si128(
                _mm_or_si128(
                  _mm_slli_epi32(_mm_unpacklo_epi16(v96, g4_m128_from<__m128i>(0LL)), 0x18u),
                  _mm_slli_epi32(_mm_unpacklo_epi16(v95, g4_m128_from<__m128i>(0LL)), 0x10u)),
                _mm_unpacklo_epi16(v230, g4_m128_from<__m128i>(0LL))),
              _mm_slli_epi32(_mm_unpacklo_epi16(v239, g4_m128_from<__m128i>(0LL)), 8u));
      v298 = _mm_or_si128(
               _mm_or_si128(
                 _mm_or_si128(_mm_slli_epi32(v97, 0x18u), _mm_slli_epi32(_mm_unpackhi_epi16(v95, g4_m128_from<__m128i>(0LL)), 0x10u)),
                 _mm_unpackhi_epi16(v230, g4_m128_from<__m128i>(0LL))),
               _mm_slli_epi32(_mm_unpackhi_epi16(v239, g4_m128_from<__m128i>(0LL)), 8u));
      v295 = _mm_or_si128(_mm_slli_epi32(_mm_unpacklo_epi16(v94, g4_m128_from<__m128i>(0LL)), 8u), v251);
      v240 =g4_m128_lane<int32_t>(v295, 1);
      v99 =g4_m128_lane<int32_t>(v298, 2);
      v252 =g4_m128_lane<int32_t>(v295, 0);
      v100 =g4_m128_lane<int32_t>(v298, 3);
      v296 = _mm_or_si128(v93, _mm_slli_epi32(_mm_unpackhi_epi16(v94, g4_m128_from<__m128i>(0LL)), 8u));
      v101 = 16;
      v297 = v98;
      v220 =g4_m128_lane<int32_t>(v298, 1);
      while ( 1 )
      {
        v220 = __builtin_rotateright32(v252 ^ v288[v101 + 21] ^ v288[v101 + 27] ^ v220, 31);
        v102 = *(uint32_t *)&v290[2 * v101 - 2] ^ v99;
g4_m128_lane<int32_t>(v295, v101) = v220;
        v252 = v288[v101 + 22];
        v103 = v240 ^ v252 ^ v102;
        v240 = v288[v101 + 23];
        v99 = __builtin_rotateright32(v103, 31);
        v100 = __builtin_rotateright32(v288[v101 + 21] ^ v240 ^ *(uint32_t *)&v290[2 * v101] ^ v100, 31);
g4_m128_lane<int32_t>(v295, v101 + 1) = v99;
g4_m128_lane<int32_t>(v295, v101 + 2) = v100;
        if ( v101 == 76 )
          break;
        v101 += 3;
      }
      v104 = v299;
      do
      {
        v104[3] = __builtin_rotateright32(*(v104 - 13) ^ *(v104 - 11) ^ *v104 ^ *(v104 - 5), 31);
        ++v104;
      }
      while ( v104 != &v299[77 - v101] );
      v221 = v270;
      v241 = v210;
      v105 = v206;
      v253 = v208;
      v106 = 0;
      v197 = v204;
      while ( 1 )
      {
        if ( v106 <= 0x13 )
        {
          v231 = 1518500249;
          v107 = v105 & v253 | v197 & ~v253;
        }
        else if ( v106 <= 0x27 )
        {
          v231 = 1859775393;
          v107 = v253 ^ v105 ^ v197;
        }
        else if ( v106 > 0x3B )
        {
          v231 = -899497514;
          v107 = v253 ^ v105 ^ v197;
        }
        else
        {
          v107 = v105 & v197 | v253 & (v105 | v197);
          v231 = -1894007588;
        }
        v108 = v221 +g4_m128_lane<int32_t>(v295, v106++) + __builtin_rotateright32(v241, 27) + v107 + v231;
        v109 = __builtin_rotateright32(v253, 2);
        if ( v106 == 80 )
          break;
        v110 = v197;
        v197 = v105;
        v105 = v109;
        v221 = v110;
        v253 = v241;
        v241 = v108;
      }
      v210 += v108;
      v206 += v109;
      v208 += v241;
      v204 += v105;
      v270 += v197;
      break;
    }
  }
  v266 = v210;
  v269 = v204;
  v111 = 0;
  v112 = -(int)(uintptr_t)(&v271) & 0xF;
  v267 = v208;
  v268 = v206;
  if ( v112 != 0 )
  {
    do
g4_m128_lane<int8_t>(v271, v111++) = 0;
    while ( v112 > v111 );
  }
  v254 = 56 - v112;
  v113 = (56 - v112) >> 4;
  v242 = 16 * v113;
  if ( 16 * v113 == 0 )
    goto LABEL_122;
  v232 = (__m128i *)((char *)&v271 + v112);
  v114 = 0;
  v115 = v232;
  do
  {
    ++v114;
    *v115++ = g4_m128_from<__m128i>(0LL);
  }
  while ( v114 < v113 );
  v111 += v242;
  if ( v254 != v242 )
  {
LABEL_122:
    do
g4_m128_lane<int8_t>(v271, v111++) = 0;
    while ( v111 <= 0x37 );
  }
LABEL_67:
g4_m128_lane<int8_t>(v274, 11) = v277;
  v209 = v268;
g4_m128_lane<int8_t>(v274, 8) = HIBYTE(v277);
g4_m128_lane<int8_t>(v274, 9) = BYTE2(v277);
g4_m128_lane<int8_t>(v274, 10) = BYTE1(v277);
g4_m128_lane<int8_t>(v274, 15) = v276;
g4_m128_lane<int8_t>(v274, 12) = HIBYTE(v276);
g4_m128_lane<int8_t>(v274, 13) = BYTE2(v276);
  v122 = _mm_unpacklo_epi8(v271, v272);
g4_m128_lane<int8_t>(v274, 14) = BYTE1(v276);
  v123 = _mm_unpackhi_epi8(v271, v272);
  v124 = _mm_unpackhi_epi8(v122, v123);
  v125 = _mm_unpacklo_epi8(v122, v123);
  v126 = _mm_unpackhi_epi8(v273, v274);
  v127 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v271, v272), v123), v124);
  v128 = _mm_unpackhi_epi8(v125, v124);
  v129 = _mm_unpacklo_epi8(v125, v124);
  v130 = _mm_unpacklo_epi8(v273, v274);
  v131 = _mm_unpacklo_epi8(v130, v126);
  v132 = _mm_unpackhi_epi8(v130, v126);
  v133 = _mm_unpacklo_epi8(v129, v128);
  v134 = _mm_unpackhi_epi8(v127, v128);
  v135 = _mm_unpackhi_epi8(v131, v132);
  v136 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v131, v132), v135);
  v137 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v273, v274), v126), v132);
  v138 = _mm_unpacklo_epi8(v133, v136);
  v139 = _mm_unpackhi_epi8(v133, v136);
  v140 = _mm_unpackhi_epi8(v137, v135);
  v141 = _mm_unpackhi_epi8(v138, v139);
  v142 = _mm_unpacklo_epi8(v138, v139);
  v143 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v133, v136), v139);
  v144 = _mm_unpackhi_epi8(v134, v140);
  v145 = _mm_unpacklo_epi8(v143, v141);
  v146 = _mm_unpackhi_epi8(v142, v141);
  v147 = _mm_unpacklo_epi8(v142, v141);
  v148 = _mm_unpacklo_epi8(v134, v140);
  v149 = _mm_unpacklo_epi8(v148, v144);
  v150 = _mm_unpackhi_epi8(v148, v144);
  v151 = _mm_unpacklo_epi8(v147, v146);
  v152 = _mm_unpackhi_epi8(v145, v146);
  v153 = _mm_unpackhi_epi8(v149, v150);
  v154 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v149, v150), v153);
  v155 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v134, v140), v144), v150);
  v156 = v152;
  v157 = _mm_unpackhi_epi8(v155, v153);
  v158 = _mm_unpacklo_epi8(v154, g4_m128_from<__m128i>(0LL));
  v159 = _mm_unpacklo_epi8(v151, g4_m128_from<__m128i>(0LL));
  v244 = _mm_unpackhi_epi8(v152, g4_m128_from<__m128i>(0LL));
  v160 = _mm_unpacklo_epi8(v157, g4_m128_from<__m128i>(0LL));
  v233 = _mm_unpackhi_epi8(v157, g4_m128_from<__m128i>(0LL));
  v161 = _mm_unpacklo_epi16(v158, g4_m128_from<__m128i>(0LL));
  v162 = _mm_or_si128(
           _mm_or_si128(
             _mm_slli_epi32(_mm_unpackhi_epi16(v158, g4_m128_from<__m128i>(0LL)), 0x10u),
             _mm_slli_epi32(_mm_unpackhi_epi16(v159, g4_m128_from<__m128i>(0LL)), 0x18u)),
           _mm_unpackhi_epi16(v160, g4_m128_from<__m128i>(0LL)));
  v256 = _mm_or_si128(
           _mm_unpacklo_epi16(v160, g4_m128_from<__m128i>(0LL)),
           _mm_or_si128(_mm_slli_epi32(_mm_unpacklo_epi16(v159, g4_m128_from<__m128i>(0LL)), 0x18u), _mm_slli_epi32(v161, 0x10u)));
  v163 = _mm_unpacklo_epi8(v156, g4_m128_from<__m128i>(0LL));
  v164 = _mm_unpackhi_epi8(v151, g4_m128_from<__m128i>(0LL));
  v165 = _mm_unpackhi_epi8(v154, g4_m128_from<__m128i>(0LL));
  v166 = _mm_unpackhi_epi16(v165, g4_m128_from<__m128i>(0LL));
  v214 = v266;
  v211 = v267;
  v207 = v269;
  v205 = v270;
  v275 = 0;
  v257 = _mm_or_si128(_mm_slli_epi32(_mm_unpacklo_epi16(v163, g4_m128_from<__m128i>(0LL)), 8u), v256);
  v167 = _mm_or_si128(
           _mm_or_si128(
             _mm_or_si128(
               _mm_slli_epi32(_mm_unpacklo_epi16(v165, g4_m128_from<__m128i>(0LL)), 0x10u),
               _mm_slli_epi32(_mm_unpacklo_epi16(v164, g4_m128_from<__m128i>(0LL)), 0x18u)),
             _mm_unpacklo_epi16(v233, g4_m128_from<__m128i>(0LL))),
           _mm_slli_epi32(_mm_unpacklo_epi16(v244, g4_m128_from<__m128i>(0LL)), 8u));
  v298 = _mm_or_si128(
           _mm_or_si128(
             _mm_or_si128(_mm_slli_epi32(v166, 0x10u), _mm_slli_epi32(_mm_unpackhi_epi16(v164, g4_m128_from<__m128i>(0LL)), 0x18u)),
             _mm_unpackhi_epi16(v233, g4_m128_from<__m128i>(0LL))),
           _mm_slli_epi32(_mm_unpackhi_epi16(v244, g4_m128_from<__m128i>(0LL)), 8u));
  v295 = v257;
  v245 =g4_m128_lane<int32_t>(v257, 1);
  v168 =g4_m128_lane<int32_t>(v298, 2);
  v296 = _mm_or_si128(v162, _mm_slli_epi32(_mm_unpackhi_epi16(v163, g4_m128_from<__m128i>(0LL)), 8u));
  v169 =g4_m128_lane<int32_t>(v298, 3);
  v297 = v167;
  v170 = 16;
  v222 =g4_m128_lane<int32_t>(v298, 1);
  while ( 1 )
  {
    v222 = __builtin_rotateright32(g4_m128_lane<int32_t>(v257, 0) ^ v288[v170 + 21] ^ v288[v170 + 27] ^ v222, 31);
    v171 = *(uint32_t *)&v290[2 * v170 - 2] ^ v168;
g4_m128_lane<int32_t>(v295, v170) = v222;
g4_m128_lane<int32_t>(v257, 0) = v288[v170 + 22];
    v172 = v245 ^g4_m128_lane<int32_t>(v257, 0) ^ v171;
    v245 = v288[v170 + 23];
    v234 = v170 + 3;
    v168 = __builtin_rotateright32(v172, 31);
    v169 = __builtin_rotateright32(v288[v170 + 21] ^ v245 ^ *(uint32_t *)&v290[2 * v170] ^ v169, 31);
    v173 = v170 == 76;
g4_m128_lane<int32_t>(v295, v170 + 1) = v168;
g4_m128_lane<int32_t>(v295, v170 + 2) = v169;
    v174 = 77 - v170;
    if ( v173 )
      break;
    v170 = v234;
  }
  v175 = v299;
  do
  {
    v175[3] = __builtin_rotateright32(*(v175 - 13) ^ *(v175 - 11) ^ *v175 ^ *(v175 - 5), 31);
    ++v175;
  }
  while ( v175 != &v299[v174] );
  v235 = v205;
  v246 = v214;
  v258 = v211;
  v176 = v209;
  v177 = 0;
  v216 = v207;
  while ( 1 )
  {
    if ( v177 <= 0x13 )
    {
      v223 = 1518500249;
      v178 = v176 & v258 | v216 & ~v258;
    }
    else if ( v177 <= 0x27 )
    {
      v223 = 1859775393;
      v178 = v258 ^ v176 ^ v216;
    }
    else if ( v177 > 0x3B )
    {
      v223 = -899497514;
      v178 = v258 ^ v176 ^ v216;
    }
    else
    {
      v178 = v176 & v216 | v258 & (v176 | v216);
      v223 = -1894007588;
    }
    v179 = v235 +g4_m128_lane<int32_t>(v295, v177++) + __builtin_rotateright32(v246, 27) + v178 + v223;
    v180 = __builtin_rotateright32(v258, 2);
    if ( v177 == 80 )
      break;
    v181 = v216;
    v216 = v176;
    v176 = v180;
    v235 = v181;
    v258 = v246;
    v246 = v179;
  }
  v264[1] = v179 + v214;
  v266 = v179 + v214;
  LOBYTE(v264[6]) = (unsigned int)(v179 + v214) >> 24;
  BYTE1(v264[6]) = (unsigned int)(v179 + v214) >> 16;
  BYTE2(v264[6]) = (uint16_t)(v179 + v214) >> 8;
  v267 = v246 + v211;
  HIBYTE(v264[6]) = v179 + v214;
  v268 = v209 + v180;
  LOBYTE(v264[7]) = (unsigned int)(v246 + v211) >> 24;
  v269 = v207 + v176;
  BYTE1(v264[7]) = (unsigned int)(v246 + v211) >> 16;
  v270 = v216 + v205;
  BYTE2(v264[7]) = (uint16_t)(v246 + v211) >> 8;
  v264[2] = v246 + v211;
  LOBYTE(v264[8]) = (unsigned int)(v209 + v180) >> 24;
  v264[3] = v209 + v180;
  BYTE1(v264[8]) = (unsigned int)(v209 + v180) >> 16;
  v264[4] = v207 + v176;
  BYTE2(v264[8]) = (uint16_t)(v209 + v180) >> 8;
  v264[5] = v216 + v205;
  HIBYTE(v264[7]) = v246 + v211;
  HIBYTE(v264[8]) = v209 + v180;
  LOBYTE(v264[9]) = (unsigned int)(v207 + v176) >> 24;
  BYTE1(v264[9]) = (unsigned int)(v207 + v176) >> 16;
  BYTE2(v264[9]) = (uint16_t)(v207 + v176) >> 8;
  HIBYTE(v264[10]) = v216 + v205;
  LOBYTE(v264[10]) = (unsigned int)(v216 + v205) >> 24;
  HIBYTE(v264[9]) = v207 + v176;
  BYTE1(v264[10]) = (unsigned int)(v216 + v205) >> 16;
  BYTE2(v264[10]) = (uint16_t)(v216 + v205) >> 8;
  sub_1900810(v288);
  v289 = 0;
  v290[0] = 0;
  v291 = 0;
  v292 = 0;
  v293 = 0;
  v288[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v294 = 0;
  v278 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v278 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v279 = 0;
  sub_19119D0((char *)&v278 + (uint32_t)(uintptr_t)(*(v278 - 3)), 0);
  v280 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v281[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v281[-1] + (uint32_t)(uintptr_t)(*(v280 - 3)), 0);
  v278 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v278 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v281[1] = 0;
  v278 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v281[2] = 0;
  v282 = nullptr;
  v288[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v283 = nullptr;
  v284 = nullptr;
  v280 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v285 = 0;
  v281[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v286);
  v286[1] = 24;
  v182 = 0;
  v281[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v287 = &dword_213B814;
  sub_19119D0(v288, v281);
  *(uint32_t *)((char *)&v281[2] + (uint32_t)(uintptr_t)(*(v280 - 3))) = *(uint32_t *)((uint8_t *)&v281[2] + (uint32_t)(uintptr_t)(*(v280 - 3)))
                                                      & 0xFFFFFFB5
                                                      | 8;
  do
  {
    v183 = *((uint8_t *)&v264[6] + v182++);
    v184 = (int)(uintptr_t)(g4_std::ostream::op_shl_int(&v280, (v183 & 0xF0) >> 4));
    g4_std::ostream::op_shl_int(v184, v183 & 0xF);
  }
  while ( v182 != 20 );
  v185 = &dword_213B814;
  *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v284 == nullptr )
  {
    g4_std::string::assign_str(a1, &v287);
    goto LABEL_93;
  }
  v186 = v283;
  if ( v284 > v282 )
  {
    if ( v284 == v283 )
    {
LABEL_92:
      v262 = v185;
      g4_std::string::assign_str(a1, &v262);
      v190 = v262 - 3;
      if ( v262 - 3 != dword_213B808 && __sync_fetch_and_add(v262 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v190);
      goto LABEL_93;
    }
    if ( v283 != nullptr )
    {
      v198 = v284 - v283;
      v187 = (size_t *)sub_1938930(v284 - v283, 0);
      v188 = v198;
      v189 = v187;
      v185 = (uint32_t *)(v187 + 3);
      if ( v198 == 1 )
      {
        *((uint8_t *)v187 + 12) = *v186;
      }
      else
      {
        v201 = (uint32_t *)(v187 + 3);
        memcpy(v187 + 3, v186, v198);
        v185 = v201;
        v188 = v198;
      }
      if ( v189 != (size_t *)(uintptr_t)(dword_213B808) )
      {
        v189[2] = 0;
        *v189 = v188;
        *((uint8_t *)v189 + v188 + 12) = 0;
      }
      goto LABEL_92;
    }
LABEL_107:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  }
  if ( v282 != v283 )
  {
    if ( v283 != nullptr )
    {
      v199 = v282 - v283;
      v193 = (size_t *)sub_1938930(v282 - v283, 0);
      v194 = v199;
      v195 = v193;
      v185 = (uint32_t *)(v193 + 3);
      if ( v199 == 1 )
      {
        *((uint8_t *)v193 + 12) = *v186;
LABEL_99:
        if ( v195 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v195[2] = 0;
          *v195 = v194;
          *((uint8_t *)v185 + v194) = 0;
        }
        goto LABEL_101;
      }
    }
    else
    {
      if ( v282 != nullptr )
        goto LABEL_107;
      v195 = (size_t *)sub_1938930(0, 0);
      v185 = (uint32_t *)(v195 + 3);
      v194 = 0;
    }
    v200 = v194;
    v202 = v185;
    memcpy(v185, v186, v194);
    v185 = v202;
    v194 = v200;
    goto LABEL_99;
  }
LABEL_101:
  v261 = v185;
  g4_std::string::assign_str(a1, &v261);
  v196 = v261 - 3;
  if ( v261 - 3 != dword_213B808 && __sync_fetch_and_add(v261 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v196);
LABEL_93:
  v278 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v288[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v280 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v281[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v191 = v287 - 3;
  if ( v287 - 3 != dword_213B808 && __sync_fetch_and_add(v287 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v191);
  v281[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v286);
  v278 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v278 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v280 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v281[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v278 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v278 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v288[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v279 = 0;
  sub_1900B90(v288);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Utils::TryParseStringToUInt  (binary VA: 0x13364e0)
// Original: glotv3::Utils::TryParseStringToUInt
// ----------------------------------------------------------------------------
int glotv3::Utils::TryParseStringToUInt(uint32_t *a1, unsigned int *a2)
{
  int v2;
  int v3;
  uint8_t *v5;
  int v6;
  uint8_t *v7;
  unsigned int v8;
  unsigned int v9;
  char v10;
  char v11;
  int v12;
  char v13; // bp
  unsigned int v14;
  bool v15;
  uint8_t *v16;
  char v17;
  int v18;
  unsigned int v19;

  v2 = sub_19382B0((int)(uintptr_t)(a1), glotv3::system::ALL_DIGITS, 0, *((uint32_t *)glotv3::system::ALL_DIGITS - 3));
  v3 = 0;
  if ( v2 == -1 )
  {
    v5 = (uint8_t *)*a1;
    v6 = *(uint32_t *)(*a1 - 12);
    if ( v6 != 0 )
    {
      v7 = &v5[v6];
      if ( v5 == &v5[v6] )
        goto LABEL_20;
      if ( *v5 == 45 )
      {
        v8 = (unsigned int)(uintptr_t)(v5 + 1);
        v17 = 1;
      }
      else
      {
        v17 = 0;
        v8 = (unsigned int)(uintptr_t)(&v5[*v5 == 43]);
      }
      v9 = 0;
      v10 = 0;
      if ( v8 <= (unsigned int)(uintptr_t)(v7 - 1) )
      {
        v11 = *(v7 - 1);
        if ( v11 > 47 && v11 <= 57 )
        {
          v9 = v11 - 48;
          v16 = v7 - 2;
          v12 = 10;
          if ( v8 > (unsigned int)(uintptr_t)(v7 - 2) )
          {
LABEL_29:
            v10 = 1;
          }
          else
          {
            v19 = v8;
            v13 = 0;
            while ( (uint8_t)(*v16 - 48) <= 9u )
            {
              v14 = (char)*v16 - 48;
              v18 = v12 * v14;
              if ( *v16 != 48 && v12 != v12 * v14 / v14 )
                break;
              if ( ~v18 < v9 || v13 != 0 && *v16 != 48 )
                break;
              --v16;
              v9 += v18;
              if ( v19 > (unsigned int)(uintptr_t)(v16) )
                goto LABEL_29;
              v15 = 10 * v12 / 0xAu == v12;
              v12 *= 10;
              if ( !v15 )
                v13 = 1;
            }
            v10 = 0;
          }
        }
      }
      if ( v17 != 0 )
        v9 = -v9;
      if ( v10 == 0 )
LABEL_20:
        std::terminate();
      v3 = 1;
      *a2 = v9;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Utils::UrlDecode  (binary VA: 0x1336680)
// Original: glotv3::Utils::UrlDecode
// ----------------------------------------------------------------------------
int glotv3::Utils::UrlDecode(int a1, int a2)
{
  return glwebtools::Codec::DecodeUrl(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: glotv3::Utils::LoseUnsignedStringConst  (binary VA: 0x13366b0)
// Original: glotv3::Utils::LoseUnsignedStringConst
// ----------------------------------------------------------------------------
int glotv3::Utils::LoseUnsignedStringConst(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Utils::LoseStringConst  (binary VA: 0x13366c0)
// Original: glotv3::Utils::LoseStringConst
// ----------------------------------------------------------------------------
int glotv3::Utils::LoseStringConst(int a1)
{
  return *(uint32_t *)a1;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Utils::StringAsVoid  (binary VA: 0x13366d0)
// Original: glotv3::Utils::StringAsVoid
// ----------------------------------------------------------------------------
int glotv3::Utils::StringAsVoid(int a1)
{
  return glotv3::Utils::LoseStringConst(a1);
}

// ----------------------------------------------------------------------------
// Function: glotv3::Utils::GetTZTAsSeconds  (binary VA: 0x1338300)
// Original: glotv3::Utils::GetTZTAsSeconds
// ----------------------------------------------------------------------------
int64_t glotv3::Utils::GetTZTAsSeconds()
{
  tm *v0;
  typedef uint8_t _g4_t_timer[5];
  typedef int _g4_t_v3;
  typedef uint8_t _g4_t_v4[8];
  typedef int64_t _g4_t_v5 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v6[8];
  typedef struct tm _g4_t_v7;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (3u + sizeof(_g4_t_timer)) > _g4_s0 ? (3u + sizeof(_g4_t_timer)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v3)) > _g4_s1 ? (8u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v4)) > _g4_s2 ? (12u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v5)) > _g4_s3 ? (20u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v6)) > _g4_s4 ? (28u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v7)) > _g4_s5 ? (36u + sizeof(_g4_t_v7)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 3u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 36u);

  time((time_t *)&timer[1]);
  v0 = localtime_r((const time_t *)&timer[1], &v7);
  if ( v0 == nullptr )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3), "could not convert calendar time to local time", (int)(uintptr_t)(timer));
    sub_19042E0(v6, &v3);
    std::terminate();
  }
  boost::date_time::second_clock<boost::posix_time::ptime>::create_time(
    (boost::date_time::second_clock<boost::posix_time::ptime> *)v4,
    v0);
  boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::subtract_times(
    (boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>> *)&v5,
    (const boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> *)v4,
    (const boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> *)&glotv3::Utils::s_ObjEpoch);
  return v5 / 1000000;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Utils::GetUTCAsSeconds  (binary VA: 0x13383d0)
// Original: glotv3::Utils::GetUTCAsSeconds
// ----------------------------------------------------------------------------
int64_t glotv3::Utils::GetUTCAsSeconds()
{
  tm *v0;
  typedef uint8_t _g4_t_timer[5];
  typedef int _g4_t_v3;
  typedef uint8_t _g4_t_v4[8];
  typedef int64_t _g4_t_v5 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v6[8];
  typedef struct tm _g4_t_v7;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (3u + sizeof(_g4_t_timer)) > _g4_s0 ? (3u + sizeof(_g4_t_timer)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v3)) > _g4_s1 ? (8u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v4)) > _g4_s2 ? (12u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v5)) > _g4_s3 ? (20u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v6)) > _g4_s4 ? (28u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v7)) > _g4_s5 ? (36u + sizeof(_g4_t_v7)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 3u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 36u);

  time((time_t *)&timer[1]);
  v0 = gmtime_r((const time_t *)&timer[1], &v7);
  if ( v0 == nullptr )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3), "could not convert calendar time to UTC time", (int)(uintptr_t)(timer));
    sub_19042E0(v6, &v3);
    std::terminate();
  }
  boost::date_time::second_clock<boost::posix_time::ptime>::create_time(
    (boost::date_time::second_clock<boost::posix_time::ptime> *)v4,
    v0);
  boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>>::subtract_times(
    (boost::date_time::counted_time_system<boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config>> *)&v5,
    (const boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> *)v4,
    (const boost::date_time::counted_time_rep<boost::posix_time::millisec_posix_time_system_config> *)&glotv3::Utils::s_ObjEpoch);
  return v5 / 1000000;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Utils::GetUTCAsString  (binary VA: 0x13384a0)
// Original: glotv3::Utils::GetUTCAsString
// ----------------------------------------------------------------------------
glotv3::Utils::Self * glotv3::Utils::GetUTCAsString(glotv3::Utils::Self *self)
{
  struct tm *tp;
  void *v3;
  typedef uint16_t _g4_t_timer[3];
  typedef int _g4_t_v5;
  typedef char _g4_t_s[140];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (6u + sizeof(_g4_t_timer)) > _g4_s0 ? (6u + sizeof(_g4_t_timer)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_s)) > _g4_s2 ? (16u + sizeof(_g4_t_s)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 6u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 16u);

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)&timer[1] = glotv3::Utils::GetUTCAsSeconds();
  tp = gmtime((const time_t *)&timer[1]);
  if ( strftime(s, 0x80u, (const char *)glotv3::Utils::s_TimeFormat, tp) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), s, (int)(uintptr_t)(timer));
    g4_std::string::assign_str(self, &v5);
    v3 = (void *)(v5 - 12);
    if ( (uint32_t *)(v5 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Utils::UnZipIt  (binary VA: 0x1338860)
// Original: glotv3::Utils::UnZipIt
// ----------------------------------------------------------------------------
int glotv3::Utils::UnZipIt(glotv3::Utils::Self *self, const std::vector<char> *a2)
{
  uint8_t *v2;
  char *v3;
  uint8_t *v4;
  void *v5;
  uint8_t *v6;
  void *v7;
  void *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  uint8_t *i;
  uint8_t *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  void *v20;
  void *v21;
  int result;
  typedef uint8_t *_g4_t_v23;
  typedef size_t _g4_t_v24;
  typedef uint8_t *_g4_t_v25;
  typedef void *_g4_t_v26;
  typedef void *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint8_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33[3];
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint32_t _g4_t_v37[5];
  typedef uint32_t _g4_t_v38[10];
  typedef uint8_t _g4_t_v39[11];
  typedef uint8_t *_g4_t_v40[16];
  typedef char _g4_t_v41[4108];
  enum : size_t {
    _g4_s0 = 4384u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v24)) > _g4_s1 ? (12u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v25)) > _g4_s2 ? (12u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v26)) > _g4_s3 ? (16u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v27)) > _g4_s4 ? (16u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v28)) > _g4_s5 ? (16u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v29)) > _g4_s6 ? (16u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v30)) > _g4_s7 ? (20u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v31)) > _g4_s8 ? (24u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v32)) > _g4_s9 ? (48u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v33)) > _g4_s10 ? (52u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v34)) > _g4_s11 ? (64u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v35)) > _g4_s12 ? (68u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v36)) > _g4_s13 ? (72u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v37)) > _g4_s14 ? (76u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v38)) > _g4_s15 ? (96u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (137u + sizeof(_g4_t_v39)) > _g4_s16 ? (137u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (148u + sizeof(_g4_t_v40)) > _g4_s17 ? (148u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (212u + sizeof(_g4_t_v41)) > _g4_s18 ? (212u + sizeof(_g4_t_v41)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 72u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 76u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 96u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 137u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 148u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 212u);

  if ( *(uint32_t *)self == *((uint32_t *)self + 1) )
    return 0;
  memset(v40, 0, 0x38u);
  if ( inflateInit_(v40, "1.2.3", 56) != 0 )
  {
    glotv3::Glotv3Logger::WriteLog(&glotv3::errors::FAILED_TO_ACQUIRE_ZLIB_BUFFER);
    return 0;
  }
  v2 = (uint8_t *)(*((uint32_t *)self + 1) - *(uint32_t *)self);
  v40[0] = *(uint8_t **)self;
  v40[1] = v2;
  do
  {
    v40[3] = (uint8_t *)v41;
    v40[4] = (uint8_t *)(uintptr_t)4096;
    v31 = inflate(v40, 0);
    v3 = *((char **)a2 + 1);
    v23 = *(uint8_t **)a2;
    v4 = v40[5];
    v30 = (uint8_t *)&v3[-*(uint32_t *)a2];
    if ( v40[5] > v30 )
    {
      if ( v40[5] <= (uint8_t *)(*((uint32_t *)a2 + 2) - (uint32_t)(uintptr_t)(v23)) )
      {
LABEL_4:
        g4_std_compat::vector_range_insert((int)(uintptr_t)(a2), v3, v41, &v41[v4 - v30]);
        continue;
      }
      v24 = v3 - (char *)(v23);
      v5 = (void *)opNew((size_t)v40[5]);
      v6 = (uint8_t *)v24;
      v7 = v5;
      if ( v24 != 0 )
      {
        v27 = v5;
        memmove(v5, v23, v24);
        v8 = *(void **)a2;
        v7 = v27;
        v6 = (uint8_t *)v24;
        if ( *(uint32_t *)a2 == 0 )
          goto LABEL_11;
      }
      else
      {
        v8 = *(void **)a2;
        if ( *(uint32_t *)a2 == 0 )
        {
LABEL_11:
          v3 = (char *)&v6[(uint32_t)(uintptr_t)(v7)];
          *((uint32_t *)a2 + 2) = (uint32_t)(uintptr_t)(&v4[(uint32_t)(uintptr_t)(v7)]);
          *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v7);
          *((uint32_t *)a2 + 1) = (uint32_t)(uintptr_t)(&v6[(uint32_t)(uintptr_t)(v7)]);
          v4 = v40[5];
          v30 = v6;
          goto LABEL_4;
        }
      }
      v25 = v6;
      v26 = v7;
      opDelete(v8);
      v7 = v26;
      v6 = v25;
      goto LABEL_11;
    }
  }
  while ( v31 == 0 );
  inflateEnd(v40);
  if ( v31 == 1 )
    return 1;
  do
    v9 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  while ( v9 == 4 );
  v12 = v9;
  if ( v9 != 0 )
  {
    v28 = (int)(uintptr_t)(sub_18F81E0(v11, v10));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v32));
    sub_19042E0(v37, &v35);
    g4_std::string::Destroy(&v35);
    v37[2] = v12;
    v37[3] = v28;
    v37[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v37[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v33[0] = (int)(uintptr_t)(&dword_213B814);
  v13 = __builtin_abs(v31);
  for ( i = v39; ; --i )
  {
    *(i - 1) = v13 % 0xA + 48;
    v13 /= 0xAu;
    if ( v13 == 0 )
      break;
  }
  if ( v31 < 0 )
  {
    v15 = i - 2;
    *(i - 2) = 45;
  }
  else
  {
    v15 = i - 1;
  }
  sub_193A9B0((int)(uintptr_t)(v33), 0, dword_213B808[0], v15, v39 - v15);
  do
    v16 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  while ( v16 == 4 );
  v19 = v16;
  if ( v16 != 0 )
  {
    v29 = (int)(uintptr_t)(sub_18F81E0(v18, v17));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v32) + 1);
    sub_19042E0(v38, &v36);
    g4_std::string::Destroy(&v36);
    v38[3] = v29;
    v38[2] = v19;
    v38[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v38[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  g4_std::string::construct_copy(&v34, &glotv3::errors::EXCEPTION_IN_ZLIB_STREAM);
  g4_std::string::append_str(&v34, v33);
  glotv3::Glotv3Logger::WriteLog(&v34);
  v20 = (void *)(v34 - 12);
  if ( (uint32_t *)(v34 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v20);
  }
  v21 = (void *)(v33[0] - 12);
  if ( (uint32_t *)(v33[0] - 12) == dword_213B808 )
    return 0;
  result = 0;
  if ( __sync_fetch_and_add((volatile int32_t *)(v33[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v21);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Utils::ZipIt  (binary VA: 0x1338cd0)
// Original: glotv3::Utils::ZipIt
// ----------------------------------------------------------------------------
int glotv3::Utils::ZipIt(glotv3::Utils::Self *self, const std::vector<char> *a2, std::vector<char> *a3)
{
  int v3;
  int v4;
  int v5;
  char *v6;
  size_t v7;
  char *v8;
  size_t v9;
  char *v10;
  void *v11;
  typedef int _g4_t_v13;
  typedef size_t _g4_t_v14;
  typedef size_t _g4_t_v15;
  typedef char *_g4_t_v16;
  typedef char *_g4_t_v17;
  typedef size_t _g4_t_v18;
  typedef uint8_t *_g4_t_v19;
  typedef size_t _g4_t_v20[16];
  typedef char _g4_t_v21[4108];
  enum : size_t {
    _g4_s0 = 4272u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v17)) > _g4_s4 ? (12u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v18)) > _g4_s5 ? (16u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v19)) > _g4_s6 ? (24u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v20)) > _g4_s7 ? (32u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v21)) > _g4_s8 ? (96u + sizeof(_g4_t_v21)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 96u);

  v3 = 0;
  if ( *(uint32_t *)self == *((uint32_t *)self + 1) )
    return v3;
  memset(v20, 0, 0x38u);
  if ( deflateInit_(v20, (unsigned int)(uintptr_t)(a3), "1.2.3", 56) == 0 )
  {
    v4 = *((uint32_t *)self + 1) - *(uint32_t *)self;
    v20[0] = *(uint32_t *)self;
    v20[1] = v4;
    while ( 1 )
    {
      v20[3] = (size_t)v21;
      v20[4] = 4096;
      LOBYTE(v5) = deflate((int)(uintptr_t)(v20), 4);
      v13 = v5;
      v6 = *((char **)a2 + 1);
      v19 = *(uint8_t **)a2;
      v7 = v20[5];
      v18 = (size_t)&v6[-*(uint32_t *)a2];
      if ( v20[5] > v18 )
      {
        if ( v20[5] > *((uint32_t *)a2 + 2) - (int)(uintptr_t)(v19) )
          break;
LABEL_4:
        g4_std_compat::vector_range_insert((int)(uintptr_t)(a2), v6, v21, &v21[v7 - v18]);
      }
      if ( v13 != 0 )
      {
        deflateEnd((void *)(uintptr_t)((int)(uintptr_t)(v20)));
        v3 = 1;
        if ( v13 != 1 )
        {
          glotv3::Glotv3Logger::WriteLog(&glotv3::errors::EXCEPTION_IN_ZLIB_STREAM);
          return 0;
        }
        return v3;
      }
    }
    v14 = v6 - (char *)(v19);
    v8 = (char *)opNew(v20[5]);
    v9 = v14;
    v10 = v8;
    if ( v14 != 0 )
    {
      v17 = v8;
      memmove(v8, v19, v14);
      v11 = *(void **)a2;
      v10 = v17;
      v9 = v14;
      if ( *(uint32_t *)a2 == 0 )
        goto LABEL_11;
    }
    else
    {
      v11 = *(void **)a2;
      if ( *(uint32_t *)a2 == 0 )
      {
LABEL_11:
        v6 = &v10[v9];
        *((uint32_t *)a2 + 2) = (uint32_t)(uintptr_t)(&v10[v7]);
        *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v10);
        *((uint32_t *)a2 + 1) = (uint32_t)(uintptr_t)(&v10[v9]);
        v7 = v20[5];
        v18 = v9;
        goto LABEL_4;
      }
    }
    v15 = v9;
    v16 = v10;
    opDelete(v11);
    v10 = v16;
    v9 = v15;
    goto LABEL_11;
  }
  glotv3::Glotv3Logger::WriteLog(&glotv3::errors::FAILED_TO_ACQUIRE_ZLIB_BUFFER);
  return 0;
}


