// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd66a0):
//   ../../../../../lib/rapidjson/rapidjson.h
// Referenced by 30 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x122f6c0 .. 0x122fab0 (1008 bytes)
// Symbol:               sub_122F6C0
// Demangled:            sub_122F6C0
// ============================================================================
/*
int *sub_122F6C0(int *a1, uint8_t *a2, uint8_t *a3, unsigned int **a4)
{
  int v5;
  uint8_t *v6;
  int v7;
  uint8_t *v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  unsigned int *v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int *v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  unsigned int *v22;
  unsigned int v23;
  unsigned int v24;
  size_t v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  char *v30;
  unsigned int v31;
  unsigned int v32;
  int v34;
  int v35;
  int v36;
  int v37;

  v5 = 0;
  if ( *a2 != 0 )
  {
    v6 = a2;
    do
      ++v6;
    while ( *v6 != 0 );
    v5 = v6 - a2;
  }
  v34 = v5;
  v7 = 0;
  if ( *a3 != 0 )
  {
    v8 = a3;
    do
      ++v8;
    while ( *v8 != 0 );
    v7 = v8 - a3;
  }
  v36 = v7;
  if ( a1[3] != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      434,
      "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::AddMember(rapidjson::G"
      "enericValue<Encoding, Allocator>&, rapidjson::GenericValue<Encoding, Allocator>&, Allocator&) [with Encoding = rap"
      "idjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapid"
      "json::GenericValue<rapidjson::UTF8<> >]",
      "IsObject ()");
  v9 = a1[1];
  v10 = a1[2];
  if ( v9 < v10 )
  {
    v11 = *a1;
    goto LABEL_13;
  }
  if ( v10 != 0 )
  {
    a1[2] = 2 * v10;
    v32 = v10 << 6;
    v11 = *a1;
    if ( *a1 != 0 )
    {
      v25 = 32 * v10;
      if ( v32 <= 32 * v10 )
      {
LABEL_29:
        *a1 = v11;
        goto LABEL_13;
      }
      v15 = *a4;
      v16 = (*a4)[1];
      v29 = v16 + 12;
      if ( (unsigned int *)v11 == (unsigned int *)((char *)*a4 + v16 + 12 - v25) )
      {
        v28 = v16 + v32 - v25;
        v31 = *v15;
        if ( v28 <= *v15 )
        {
          v15[1] = v28;
          if ( (v11 & 3) != 0 )
          {
            __assert2(
              "../../../../../lib/rapidjson/rapidjson.h",
              294,
              "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = "
              "rapidjson::CrtAllocator, size_t = unsigned int]",
              "((uintptr_t) originalPtr & 3) == 0");
            v9 = a1[1];
            *a1 = v11;
            goto LABEL_13;
          }
          goto LABEL_28;
        }
      }
      else
      {
        v31 = *v15;
      }
      if ( v16 + v32 > v31 )
      {
        v17 = (unsigned int)a4[1];
        if ( v32 >= v17 )
          v17 = v10 << 6;
        v26 = v17;
        v15 = (unsigned int *)malloc(v17 + 12);
        *v15 = v26;
        v15[1] = 0;
        v15[2] = (unsigned int)*a4;
        *a4 = v15;
        v16 = v15[1];
        v29 = v16 + 12;
      }
      v30 = (char *)v15 + v29;
      if ( ((uint8_t)v30 & 3) != 0 )
      {
        __assert2(
          "../../../../../lib/rapidjson/rapidjson.h",
          267,
          "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAlloca"
          "tor, size_t = unsigned int]",
          "((uintptr_t) buffer & 3) == 0");
        v15 = *a4;
        v16 = (*a4)[1];
      }
      v15[1] = v32 + v16;
      if ( v30 == nullptr )
        __assert2(
          "../../../../../lib/rapidjson/rapidjson.h",
          301,
          "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = rapi"
          "djson::CrtAllocator, size_t = unsigned int]",
          "newBuffer != 0");
      v11 = (int)memcpy(v30, (const void *)v11, v25);
LABEL_28:
      v9 = a1[1];
      goto LABEL_29;
    }
    v21 = v10 << 6;
    v22 = *a4;
    v23 = (*a4)[1];
    if ( v32 + v23 > **a4 )
    {
      v24 = (unsigned int)a4[1];
      if ( v32 >= v24 )
        v24 = v32;
      v22 = (unsigned int *)malloc(v24 + 12);
      *v22 = v24;
      v22[1] = 0;
      v22[2] = (unsigned int)*a4;
      *a4 = v22;
      v23 = v22[1];
      v21 = v32;
    }
    v11 = (int)v22 + v23 + 12;
    if ( (v11 & 3) != 0 )
    {
      v27 = v21;
      __assert2(
        "../../../../../lib/rapidjson/rapidjson.h",
        267,
        "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocato"
        "r, size_t = unsigned int]",
        "((uintptr_t) buffer & 3) == 0");
      v21 = v27;
      v22 = *a4;
      v23 = (*a4)[1];
    }
    v22[1] = v21 + v23;
    *a1 = v11;
    v9 = a1[1];
  }
  else
  {
    a1[2] = 16;
    v18 = *a4;
    v19 = (*a4)[1];
    if ( v19 + 512 > **a4 )
    {
      v20 = 512;
      if ( (unsigned int)a4[1] >= 0x200 )
        v20 = (int)a4[1];
      v18 = (unsigned int *)malloc(v20 + 12);
      *v18 = v20;
      v18[1] = 0;
      v18[2] = (unsigned int)*a4;
      *a4 = v18;
      v19 = v18[1];
    }
    v11 = (int)v18 + v19 + 12;
    if ( (v11 & 3) != 0 )
    {
      __assert2(
        "../../../../../lib/rapidjson/rapidjson.h",
        267,
        "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocato"
        "r, size_t = unsigned int]",
        "((uintptr_t) buffer & 3) == 0");
      v18 = *a4;
      v19 = (*a4)[1];
    }
    v18[1] = v19 + 512;
    *a1 = v11;
    v9 = a1[1];
  }
LABEL_13:
  v12 = (uint32_t *)(v11 + 32 * v9);
  *v12 = a2;
  v12[1] = v34;
  v12[2] = v35;
  v12[3] = 1048581;
  v13 = (uint32_t *)(*a1 + 32 * a1[1]);
  v13[4] = a3;
  v13[5] = v36;
  v13[6] = v37;
  v13[7] = 1048581;
  ++a1[1];
  return a1;
}

*/

// ============================================================================
// Referencing Function: 0x122fab0 .. 0x123196f (7871 bytes)
// Symbol:               sub_122FAB0
// Demangled:            sub_122FAB0
// ============================================================================
/*
int64_t *sub_122FAB0(int64_t *a1, int a2, uint8_t *a3)
{
  int64_t v3; // rdi
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  char *v10;
  size_t v11;
  char *v12;
  uint8_t *v13;
  int v14;
  size_t v15;
  void *v16;
  uint8_t *v17;
  int v18;
  size_t v19;
  void *v20;
  uint8_t *v21;
  int v22;
  size_t v23;
  void *v24;
  uint8_t *v25;
  int v26;
  void *v27;
  int v29;
  int v30;
  int v31;
  int v32;
  uint32_t *v33;
  size_t v34;
  char *v35;
  char *v36;
  uint64_t v37;
  char *v38;
  int v39;
  uint8_t *v40;
  int v41;
  size_t v42;
  void *v43;
  int v44;
  int v45;
  int v46;
  uint32_t *v47;
  char *v48;
  size_t v49;
  char *v50;
  int v51;
  int v52;
  unsigned int v53;
  unsigned int *v54;
  unsigned int v55;
  uint8_t *v56;
  int v57;
  size_t v58;
  void *v59;
  int v60;
  int v61;
  uint8_t *v62;
  int v63;
  void *v64;
  int v65;
  int v66;
  int v67;
  uint32_t *v68;
  char *v69;
  size_t v70;
  char *v71;
  int v72;
  int v73;
  unsigned int v74;
  unsigned int *v75;
  unsigned int v76;
  uint8_t *v77;
  int v78;
  size_t v79;
  void *v80;
  int v81;
  uint8_t *v82;
  int v83;
  void *v84;
  int v85;
  int v86;
  int v87;
  int v88;
  uint32_t *v89;
  char *v90;
  size_t v91;
  char *v92;
  uint64_t v93; // rdi
  uint64_t v94; // kr08_8
  char *v95;
  int v96;
  uint8_t *v97;
  int v98;
  size_t v99;
  void *v100;
  int v101;
  int v102;
  int v103;
  int v104;
  uint32_t *v105;
  size_t v106;
  char *v107;
  char *v108;
  char *v109;
  unsigned int v110;
  unsigned int v111;
  char *v112;
  int v113;
  char *v114;
  size_t v115;
  char *v116;
  int v117;
  int v118;
  int v119;
  int v120;
  uint32_t *v121;
  size_t v122;
  char *v123;
  char *v124;
  char *v125;
  unsigned int v126;
  uint8_t *v127;
  int v128;
  size_t v129;
  void *v130;
  int64_t v131; // xmm0_8
  int v132;
  int v133;
  int v134;
  uint32_t *v135;
  char *v136;
  size_t v137;
  char *v138;
  char *v139;
  int v140;
  char *v141;
  size_t v142;
  char *v143;
  uint32_t *v144;
  char *v145;
  uint8_t *v146;
  size_t v147;
  char *v148;
  char *v149;
  uint32_t *v150;
  char *v151;
  uint8_t *v152;
  size_t v153;
  char *v154;
  char *v155;
  uint32_t *v156;
  char *v157;
  size_t v158;
  char *v159;
  char *v160;
  char *v161;
  int v162;
  size_t v163;
  char *v164;
  uint32_t *v165;
  int v166;
  size_t v167;
  char *v168;
  unsigned int *v169;
  unsigned int v170;
  unsigned int v171;
  unsigned int v172;
  unsigned int *v173;
  unsigned int v174;
  unsigned int v175;
  unsigned int v176;
  uint32_t *v177;
  uint8_t *v178;
  size_t v179;
  char *v180;
  char *v181;
  int v182;
  char *v183;
  size_t v184;
  char *v185;
  uint32_t *v186;
  char *v187;
  uint8_t *v188;
  size_t v189;
  char *v190;
  char *v191;
  uint32_t *v192;
  uint8_t *v193;
  size_t v194;
  char *v195;
  uint32_t *v196;
  uint8_t *v197;
  int v198;
  size_t v199;
  void *v200;
  uint8_t *v201;
  uint8_t *v202;
  uint8_t *v203;
  uint8_t *v204;
  uint8_t *v205;
  uint8_t *v206;
  uint8_t *v207;
  uint8_t *v208;
  uint8_t *v209;
  uint8_t *v210;
  uint8_t *v211;
  uint8_t *v212;
  uint8_t *v213;
  uint8_t *v214;
  uint8_t *v215;
  uint8_t *v216;
  unsigned int v217;
  unsigned int v218;
  uint32_t *v219;
  uint8_t *v220;
  uint8_t *v221;
  uint8_t *v222;
  uint8_t *v223;
  int v224;
  int v225;
  size_t v226;
  uint32_t *v227;
  int v228;
  int v229;
  uint8_t *v230;
  uint8_t *v231;
  uint32_t *v232;
  int v233;
  int v234;
  uint8_t *v235;
  uint8_t *v236;
  uint32_t *v237;
  size_t v238;
  uint8_t *v239;
  int v240;
  int v241;
  size_t v242;
  int v243;
  int v244;
  size_t v245;
  uint32_t *v246;
  size_t v247;
  int v248;
  int v249;
  uint32_t *v250;
  uint32_t *v251;
  uint32_t *v252;
  uint8_t *v253;
  int v254;
  int v255;
  unsigned int v256;
  int v257;
  unsigned int v258;
  int v259;
  int v260;
  int v261;
  int v262;
  uint32_t *v263;
  int v264;
  uint32_t *v265;
  size_t v266;
  size_t v267;
  size_t v268;
  uint32_t *v269;
  uint8_t *v270;
  size_t v271;
  size_t v272;
  uint8_t *v273;
  uint32_t *v274;
  char *v275;
  uint32_t *v276;
  uint8_t *v277;
  char *v278;
  uint32_t *v279;
  uint32_t *v280;
  size_t v281;
  uint32_t *v282;
  unsigned int v283;
  unsigned int v284;
  char *v285;
  unsigned int v286;
  unsigned int v287;
  int v288;
  unsigned int v289;
  char *v290;
  unsigned int v291;
  char *v292;
  char v293;
  char *v294;
  char *v295;
  int v296;
  char v297;
  char *v298;
  int *v299;
  char v300;
  unsigned int **v301;
  char v302;
  unsigned int **v303;
  int v304;
  int *v305;
  int v306;
  int v307;
  int v308;
  int v309;
  char v310;
  int v311;
  int v312;
  char *v313;
  int v314;
  int v315;
  size_t v316;
  int v317;
  int v318;
  int v319;
  int v320;
  char *v321;
  char *v322;
  int v323;
  int v324;
  int v325;
  int v326;
  int v327;
  char *v328;
  char *v329;
  int v330;
  char *v331;
  int v332;
  uint8_t *v333;
  uint8_t *v335;
  size_t v336;
  size_t v337;
  size_t v338;
  size_t v339;
  size_t v340;
  size_t v341;
  size_t v342;
  size_t v343;
  char v344;
  char *v345;
  char v346;
  size_t v347;
  unsigned int v348;
  size_t v349;
  unsigned int v350;
  int64_t v351;
  char *v352;
  char v353;
  char v354;
  char v355;
  char v356;
  char v357;
  size_t v358;
  char v359;
  size_t v360;
  size_t v361;
  size_t v362;
  size_t v363;
  size_t v364;
  size_t v365;
  size_t v366;
  char s[124];

  HIDWORD(v3) = a2;
  v4 = *((uint32_t *)a1 + 3);
  switch ( (char)v4 )
  {
    case 0:
      v5 = *(uint32_t *)(HIDWORD(v3) + 12);
      v6 = *(uint32_t *)(HIDWORD(v3) + 16);
      if ( v5 == v6 )
      {
        __assert2(
          "../../../../../lib/rapidjson/writer.h",
          394,
          "void rapidjson::Writer<Stream, Encoding, Allocator>::Prefix(rapidjson::Type) [with Stream = rapidjson::Generic"
          "StringBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
          "type == kObjectType || type == kArrayType");
      }
      else
      {
        if ( (unsigned int)(v6 - v5) <= 7 )
        {
          __assert2(
            "../../../../../lib/rapidjson/internal/stack.h",
            91,
            "T* rapidjson::internal::Stack<Allocator>::Top() [with T = rapidjson::Writer<rapidjson::GenericStringBuffer<r"
            "apidjson::UTF8<> > >::Level, Allocator = rapidjson::MemoryPoolAllocator<>]",
            "GetSize () >= sizeof (T)");
          v6 = *(uint32_t *)(HIDWORD(v3) + 16);
        }
        v7 = *(uint32_t *)(v6 - 4);
        v8 = 0;
        if ( v7 != 0 )
        {
          if ( *(uint8_t *)(v6 - 8) != 0 )
          {
            v150 = *(uint32_t **)HIDWORD(v3);
            v151 = *(char **)(*(uint32_t *)HIDWORD(v3) + 12);
            v152 = v151 + 1;
            if ( (unsigned int)(v151 + 1) >= *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) )
            {
              v210 = (uint8_t *)v150[2];
              v325 = v151 - v210;
              v153 = v151 - v210 + 1;
              if ( v153 < 2 * v150[5] )
                v153 = 2 * v150[5];
              v251 = *(uint32_t **)HIDWORD(v3);
              v361 = v153;
              v154 = (char *)realloc(v210, v153);
              v150 = v251;
              v155 = v154;
              v251[2] = v154;
              v251[5] = v361;
              v151 = &v154[v325];
              v251[4] = &v155[v361];
              v152 = v151 + 1;
            }
            v150[3] = v152;
            *v151 = 44;
            v8 = *(uint32_t *)(v6 - 4);
          }
          else
          {
            v297 = (v7 & 1) == 0 ? 44 : 58;
            v9 = *(uint32_t **)HIDWORD(v3);
            v10 = *(char **)(*(uint32_t *)HIDWORD(v3) + 12);
            if ( *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) <= (unsigned int)(v10 + 1) )
            {
              v201 = (uint8_t *)v9[2];
              v315 = v10 - v201;
              v11 = v10 - v201 + 1;
              if ( v11 < 2 * v9[5] )
                v11 = 2 * v9[5];
              v219 = *(uint32_t **)HIDWORD(v3);
              v343 = v11;
              v12 = (char *)realloc(v201, v11);
              v9 = v219;
              v219[5] = v343;
              v219[2] = v12;
              v219[3] = &v12[v315];
              v219[4] = &v12[v343];
              v10 = &v12[v315];
            }
            v9[3] = v10 + 1;
            *v10 = v297;
            v8 = *(uint32_t *)(v6 - 4);
          }
        }
        if ( *(uint8_t *)(v6 - 8) == 0 && (v8 & 1) == 0 )
        {
          __assert2(
            "../../../../../lib/rapidjson/writer.h",
            387,
            "void rapidjson::Writer<Stream, Encoding, Allocator>::Prefix(rapidjson::Type) [with Stream = rapidjson::Gener"
            "icStringBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
            "type == kStringType");
          v8 = *(uint32_t *)(v6 - 4);
        }
        *(uint32_t *)(v6 - 4) = v8 + 1;
      }
      LODWORD(v3) = *(uint32_t *)HIDWORD(v3);
      v13 = *(uint8_t **)(*(uint32_t *)HIDWORD(v3) + 12);
      v14 = (int)(v13 + 1);
      if ( (unsigned int)(v13 + 1) >= *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) )
      {
        v220 = &v13[-*(uint32_t *)(v3 + 8)];
        v15 = (size_t)(v220 + 1);
        if ( (unsigned int)(v220 + 1) < 2 * *(uint32_t *)(v3 + 20) )
          v15 = 2 * *(uint32_t *)(v3 + 20);
        v266 = v15;
        v16 = realloc(*(void **)(v3 + 8), v15);
        *(uint32_t *)(v3 + 8) = v16;
        *(uint32_t *)(v3 + 20) = v266;
        v13 = &v220[(uint32_t)v16];
        *(uint32_t *)(v3 + 16) = (char *)v16 + v266;
        v14 = (int)&v220[(uint32_t)v16 + 1];
      }
      *(uint32_t *)(v3 + 12) = v14;
      *v13 = 110;
      LODWORD(v3) = *(uint32_t *)HIDWORD(v3);
      v17 = *(uint8_t **)(*(uint32_t *)HIDWORD(v3) + 12);
      v18 = (int)(v17 + 1);
      if ( (unsigned int)(v17 + 1) >= *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) )
      {
        v221 = &v17[-*(uint32_t *)(v3 + 8)];
        v19 = (size_t)(v221 + 1);
        if ( (unsigned int)(v221 + 1) < 2 * *(uint32_t *)(v3 + 20) )
          v19 = 2 * *(uint32_t *)(v3 + 20);
        v267 = v19;
        v20 = realloc(*(void **)(v3 + 8), v19);
        *(uint32_t *)(v3 + 8) = v20;
        *(uint32_t *)(v3 + 20) = v267;
        v17 = &v221[(uint32_t)v20];
        *(uint32_t *)(v3 + 16) = (char *)v20 + v267;
        v18 = (int)&v221[(uint32_t)v20 + 1];
      }
      *(uint32_t *)(v3 + 12) = v18;
      *v17 = 117;
      LODWORD(v3) = *(uint32_t *)HIDWORD(v3);
      v21 = *(uint8_t **)(*(uint32_t *)HIDWORD(v3) + 12);
      v22 = (int)(v21 + 1);
      if ( (unsigned int)(v21 + 1) >= *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) )
      {
        v222 = &v21[-*(uint32_t *)(v3 + 8)];
        v23 = (size_t)(v222 + 1);
        if ( (unsigned int)(v222 + 1) < 2 * *(uint32_t *)(v3 + 20) )
          v23 = 2 * *(uint32_t *)(v3 + 20);
        v268 = v23;
        v24 = realloc(*(void **)(v3 + 8), v23);
        *(uint32_t *)(v3 + 8) = v24;
        *(uint32_t *)(v3 + 20) = v268;
        v21 = &v222[(uint32_t)v24];
        *(uint32_t *)(v3 + 16) = (char *)v24 + v268;
        v22 = (int)&v222[(uint32_t)v24 + 1];
      }
      *(uint32_t *)(v3 + 12) = v22;
      *v21 = 108;
      HIDWORD(v3) = *(uint32_t *)HIDWORD(v3);
      v25 = *(uint8_t **)(HIDWORD(v3) + 12);
      v26 = (int)(v25 + 1);
      if ( (unsigned int)(v25 + 1) >= *(uint32_t *)(HIDWORD(v3) + 16) )
      {
        v223 = &v25[-*(uint32_t *)(HIDWORD(v3) + 8)];
        LODWORD(v3) = v223 + 1;
        if ( (unsigned int)(v223 + 1) < 2 * *(uint32_t *)(HIDWORD(v3) + 20) )
          LODWORD(v3) = 2 * *(uint32_t *)(HIDWORD(v3) + 20);
        v27 = realloc(*(void **)(HIDWORD(v3) + 8), v3);
        *(uint32_t *)(HIDWORD(v3) + 8) = v27;
        *(uint32_t *)(HIDWORD(v3) + 20) = v3;
        v25 = &v223[(uint32_t)v27];
        *(uint32_t *)(HIDWORD(v3) + 16) = (char *)v27 + v3;
        v26 = (int)&v223[(uint32_t)v27 + 1];
      }
      *(uint32_t *)(HIDWORD(v3) + 12) = v26;
      *v25 = 108;
      return a1;
    case 1:
      sub_122EC30((uint32_t *)HIDWORD(v3), 0);
      return a1;
    case 2:
      sub_122EC30((uint32_t *)HIDWORD(v3), 1);
      return a1;
    case 3:
      v44 = *(uint32_t *)(HIDWORD(v3) + 12);
      LODWORD(v3) = *(uint32_t *)(HIDWORD(v3) + 16);
      if ( v44 != (uint32_t)v3 )
      {
        if ( (unsigned int)(v3 - v44) <= 7 )
        {
          __assert2(
            "../../../../../lib/rapidjson/internal/stack.h",
            91,
            "T* rapidjson::internal::Stack<Allocator>::Top() [with T = rapidjson::Writer<rapidjson::GenericStringBuffer<r"
            "apidjson::UTF8<> > >::Level, Allocator = rapidjson::MemoryPoolAllocator<>]",
            "GetSize () >= sizeof (T)");
          LODWORD(v3) = *(uint32_t *)(HIDWORD(v3) + 16);
        }
        v45 = *(uint32_t *)(v3 - 4);
        v46 = 0;
        if ( v45 != 0 )
        {
          if ( *(uint8_t *)(v3 - 8) != 0 )
          {
            v144 = *(uint32_t **)HIDWORD(v3);
            v145 = *(char **)(*(uint32_t *)HIDWORD(v3) + 12);
            v146 = v145 + 1;
            if ( (unsigned int)(v145 + 1) >= *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) )
            {
              v209 = (uint8_t *)v144[2];
              v324 = v145 - v209;
              v147 = v145 - v209 + 1;
              if ( v147 < 2 * v144[5] )
                v147 = 2 * v144[5];
              v250 = *(uint32_t **)HIDWORD(v3);
              v360 = v147;
              v148 = (char *)realloc(v209, v147);
              v144 = v250;
              v149 = v148;
              v250[2] = v148;
              v250[5] = v360;
              v145 = &v148[v324];
              v250[4] = &v149[v360];
              v146 = v145 + 1;
            }
            v144[3] = v146;
            *v145 = 44;
            v46 = *(uint32_t *)(v3 - 4);
          }
          else
          {
            v300 = (v45 & 1) == 0 ? 44 : 58;
            v47 = *(uint32_t **)HIDWORD(v3);
            v48 = *(char **)(*(uint32_t *)HIDWORD(v3) + 12);
            if ( *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) <= (unsigned int)(v48 + 1) )
            {
              v203 = (uint8_t *)v47[2];
              v317 = v48 - v203;
              v49 = v48 - v203 + 1;
              if ( v49 < 2 * v47[5] )
                v49 = 2 * v47[5];
              v227 = *(uint32_t **)HIDWORD(v3);
              v347 = v49;
              v50 = (char *)realloc(v203, v49);
              v47 = v227;
              v227[5] = v347;
              v227[2] = v50;
              v227[3] = &v50[v317];
              v227[4] = &v50[v347];
              v48 = &v50[v317];
            }
            v47[3] = v48 + 1;
            *v48 = v300;
            v46 = *(uint32_t *)(v3 - 4);
          }
        }
        if ( *(uint8_t *)(v3 - 8) == 0 && (v46 & 1) == 0 )
        {
          __assert2(
            "../../../../../lib/rapidjson/writer.h",
            387,
            "void rapidjson::Writer<Stream, Encoding, Allocator>::Prefix(rapidjson::Type) [with Stream = rapidjson::Gener"
            "icStringBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
            "type == kStringType");
          v46 = *(uint32_t *)(v3 - 4);
        }
        *(uint32_t *)(v3 - 4) = v46 + 1;
        LODWORD(v3) = *(uint32_t *)(HIDWORD(v3) + 16);
      }
      v51 = v3 + 8;
      if ( (unsigned int)(v3 + 8) < *(uint32_t *)(HIDWORD(v3) + 20) )
        goto LABEL_94;
      v52 = *(uint32_t *)(HIDWORD(v3) + 12);
      LODWORD(v3) = v3 - v52;
      v336 = *(uint32_t *)(HIDWORD(v3) + 24);
      v53 = 2 * v336;
      v318 = v3;
      if ( (int)v3 + 8 >= 2 * v336 )
        v53 = v3 + 8;
      v348 = v53;
      v301 = *(unsigned int ***)(HIDWORD(v3) + 4);
      if ( v52 != 0 )
      {
        if ( v336 >= v53 )
          goto LABEL_93;
        v54 = *v301;
        v55 = (*v301)[1];
        v289 = v55 + 12;
        if ( (unsigned int *)v52 != (unsigned int *)((char *)*v301 + v55 + 12 - v336) )
        {
          v286 = *v54;
LABEL_84:
          v217 = (v348 + 3) & 0xFFFFFFFC;
          if ( v286 < v55 + v217 )
          {
            LODWORD(v3) = v301[1];
            if ( v217 >= (unsigned int)v3 )
              LODWORD(v3) = (v348 + 3) & 0xFFFFFFFC;
            v228 = *(uint32_t *)(HIDWORD(v3) + 12);
            v54 = (unsigned int *)malloc(v3 + 12);
            v54[1] = 0;
            *v54 = v3;
            v54[2] = (unsigned int)*v301;
            *v301 = v54;
            v55 = v54[1];
            v52 = v228;
            v289 = v55 + 12;
          }
          v290 = (char *)v54 + v289;
          if ( ((uint8_t)v290 & 3) != 0 )
          {
            v229 = v52;
            __assert2(
              "../../../../../lib/rapidjson/rapidjson.h",
              267,
              "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAl"
              "locator, size_t = unsigned int]",
              "((uintptr_t) buffer & 3) == 0");
            v52 = v229;
            v54 = *v301;
            v55 = (*v301)[1];
          }
          v54[1] = v55 + v217;
          if ( v290 == nullptr )
          {
            v262 = v52;
            __assert2(
              "../../../../../lib/rapidjson/rapidjson.h",
              301,
              "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = "
              "rapidjson::CrtAllocator, size_t = unsigned int]",
              "newBuffer != 0");
            v52 = v262;
          }
          v52 = (int)memcpy(v290, (const void *)v52, v336);
          goto LABEL_93;
        }
        v284 = v55 + ((v348 - v336 + 3) & 0xFFFFFFFC);
        v286 = *v54;
        if ( v284 > *v54 )
          goto LABEL_84;
        v54[1] = v284;
        if ( (v52 & 3) != 0 )
        {
          v249 = v52;
          __assert2(
            "../../../../../lib/rapidjson/rapidjson.h",
            294,
            "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = ra"
            "pidjson::CrtAllocator, size_t = unsigned int]",
            "((uintptr_t) originalPtr & 3) == 0");
          v52 = v249;
        }
      }
      else
      {
        v173 = **(unsigned int ***)(HIDWORD(v3) + 4);
        v174 = (v53 + 3) & 0xFFFFFFFC;
        v175 = v173[1];
        if ( v174 + v175 > *v173 )
        {
          v176 = (unsigned int)v301[1];
          if ( v174 >= v176 )
            v176 = v174;
          v258 = v176;
          v173 = (unsigned int *)malloc(v176 + 12);
          *v173 = v258;
          v173[1] = 0;
          v173[2] = (unsigned int)*v301;
          *v301 = v173;
          v175 = v173[1];
        }
        v52 = (int)v173 + v175 + 12;
        if ( (v52 & 3) != 0 )
        {
          v259 = (int)v173 + v175 + 12;
          __assert2(
            "../../../../../lib/rapidjson/rapidjson.h",
            267,
            "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllo"
            "cator, size_t = unsigned int]",
            "((uintptr_t) buffer & 3) == 0");
          v52 = v259;
          v173 = *v301;
          v175 = (*v301)[1];
        }
        v173[1] = v174 + v175;
      }
LABEL_93:
      LODWORD(v3) = v52 + v318;
      *(uint32_t *)(HIDWORD(v3) + 12) = v52;
      *(uint32_t *)(HIDWORD(v3) + 24) = v348;
      *(uint32_t *)(HIDWORD(v3) + 20) = v348 + v52;
      v51 = v52 + v318 + 8;
LABEL_94:
      *(uint32_t *)(HIDWORD(v3) + 16) = v51;
      if ( (uint32_t)v3 != 0 )
      {
        *(uint8_t *)v3 = 0;
        *(uint32_t *)(v3 + 4) = 0;
      }
      LODWORD(v3) = *(uint32_t *)HIDWORD(v3);
      v56 = *(uint8_t **)(*(uint32_t *)HIDWORD(v3) + 12);
      v57 = (int)(v56 + 1);
      if ( (unsigned int)(v56 + 1) >= *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) )
      {
        v230 = &v56[-*(uint32_t *)(v3 + 8)];
        v58 = (size_t)(v230 + 1);
        if ( (unsigned int)(v230 + 1) < 2 * *(uint32_t *)(v3 + 20) )
          v58 = 2 * *(uint32_t *)(v3 + 20);
        v271 = v58;
        v59 = realloc(*(void **)(v3 + 8), v58);
        *(uint32_t *)(v3 + 8) = v59;
        *(uint32_t *)(v3 + 20) = v271;
        v56 = &v230[(uint32_t)v59];
        *(uint32_t *)(v3 + 16) = (char *)v59 + v271;
        v57 = (int)&v230[(uint32_t)v59 + 1];
      }
      *(uint32_t *)(v3 + 12) = v57;
      *v56 = 123;
      LODWORD(v3) = *(uint32_t *)a1;
      if ( 32 * *((uint32_t *)a1 + 1) != 0 )
      {
        do
        {
          sub_122F090((uint32_t *)HIDWORD(v3), *(uint8_t **)v3, *(uint32_t *)(v3 + 4));
          sub_122FAB0(v60, HIDWORD(v3));
          LODWORD(v3) = v3 + 32;
        }
        while ( (uint32_t)v3 != *(uint32_t *)a1 + 32 * *((uint32_t *)a1 + 1) );
      }
      v61 = *(uint32_t *)(HIDWORD(v3) + 16);
      if ( (unsigned int)(v61 - *(uint32_t *)(HIDWORD(v3) + 12)) <= 7 )
      {
        __assert2(
          "../../../../../lib/rapidjson/writer.h",
          114,
          "rapidjson::Writer<Stream, Encoding, Allocator>& rapidjson::Writer<Stream, Encoding, Allocator>::EndObject(rapi"
          "djson::SizeType) [with Stream = rapidjson::GenericStringBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8"
          "<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::Writer<Stream, Encoding, Allocator> = rapidjson::"
          "Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<> > >, rapidjson::SizeType = unsigned int]",
          "level_stack_.GetSize () >= sizeof (Level)");
        v61 = *(uint32_t *)(HIDWORD(v3) + 16);
        if ( (unsigned int)(v61 - *(uint32_t *)(HIDWORD(v3) + 12)) <= 7 )
        {
          __assert2(
            "../../../../../lib/rapidjson/internal/stack.h",
            91,
            "T* rapidjson::internal::Stack<Allocator>::Top() [with T = rapidjson::Writer<rapidjson::GenericStringBuffer<r"
            "apidjson::UTF8<> > >::Level, Allocator = rapidjson::MemoryPoolAllocator<>]",
            "GetSize () >= sizeof (T)");
          v61 = *(uint32_t *)(HIDWORD(v3) + 16);
        }
      }
      if ( *(uint8_t *)(v61 - 8) != 0 )
      {
        __assert2(
          "../../../../../lib/rapidjson/writer.h",
          115,
          "rapidjson::Writer<Stream, Encoding, Allocator>& rapidjson::Writer<Stream, Encoding, Allocator>::EndObject(rapi"
          "djson::SizeType) [with Stream = rapidjson::GenericStringBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8"
          "<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::Writer<Stream, Encoding, Allocator> = rapidjson::"
          "Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<> > >, rapidjson::SizeType = unsigned int]",
          "!level_stack_.template Top<Level> ()->inArray");
        v61 = *(uint32_t *)(HIDWORD(v3) + 16);
      }
      if ( (unsigned int)(v61 - *(uint32_t *)(HIDWORD(v3) + 12)) <= 7 )
      {
        __assert2(
          "../../../../../lib/rapidjson/internal/stack.h",
          83,
          "T* rapidjson::internal::Stack<Allocator>::Pop(size_t) [with T = rapidjson::Writer<rapidjson::GenericStringBuff"
          "er<rapidjson::UTF8<> > >::Level, Allocator = rapidjson::MemoryPoolAllocator<>, size_t = unsigned int]",
          "GetSize () >= count * sizeof (T)");
        v61 = *(uint32_t *)(HIDWORD(v3) + 16);
      }
      *(uint32_t *)(HIDWORD(v3) + 16) = v61 - 8;
      HIDWORD(v3) = *(uint32_t *)HIDWORD(v3);
      v62 = *(uint8_t **)(HIDWORD(v3) + 12);
      v63 = (int)(v62 + 1);
      if ( (unsigned int)(v62 + 1) >= *(uint32_t *)(HIDWORD(v3) + 16) )
      {
        v231 = &v62[-*(uint32_t *)(HIDWORD(v3) + 8)];
        LODWORD(v3) = v231 + 1;
        if ( (unsigned int)(v231 + 1) < 2 * *(uint32_t *)(HIDWORD(v3) + 20) )
          LODWORD(v3) = 2 * *(uint32_t *)(HIDWORD(v3) + 20);
        v64 = realloc(*(void **)(HIDWORD(v3) + 8), v3);
        *(uint32_t *)(HIDWORD(v3) + 8) = v64;
        *(uint32_t *)(HIDWORD(v3) + 20) = v3;
        v62 = &v231[(uint32_t)v64];
        *(uint32_t *)(HIDWORD(v3) + 16) = (char *)v64 + v3;
        v63 = (int)&v231[(uint32_t)v64 + 1];
      }
      *(uint32_t *)(HIDWORD(v3) + 12) = v63;
      *v62 = 125;
      return a1;
    case 4:
      v65 = *(uint32_t *)(HIDWORD(v3) + 12);
      LODWORD(v3) = *(uint32_t *)(HIDWORD(v3) + 16);
      if ( v65 != (uint32_t)v3 )
      {
        if ( (unsigned int)(v3 - v65) <= 7 )
        {
          __assert2(
            "../../../../../lib/rapidjson/internal/stack.h",
            91,
            "T* rapidjson::internal::Stack<Allocator>::Top() [with T = rapidjson::Writer<rapidjson::GenericStringBuffer<r"
            "apidjson::UTF8<> > >::Level, Allocator = rapidjson::MemoryPoolAllocator<>]",
            "GetSize () >= sizeof (T)");
          LODWORD(v3) = *(uint32_t *)(HIDWORD(v3) + 16);
        }
        v66 = *(uint32_t *)(v3 - 4);
        v67 = 0;
        if ( v66 != 0 )
        {
          if ( *(uint8_t *)(v3 - 8) != 0 )
          {
            v156 = *(uint32_t **)HIDWORD(v3);
            v157 = *(char **)(*(uint32_t *)HIDWORD(v3) + 12);
            a3 = v157 + 1;
            if ( (unsigned int)(v157 + 1) >= *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) )
            {
              v211 = (uint8_t *)v156[2];
              v326 = v157 - v211;
              v158 = v157 - v211 + 1;
              if ( v158 < 2 * v156[5] )
                v158 = 2 * v156[5];
              v252 = *(uint32_t **)HIDWORD(v3);
              v362 = v158;
              v159 = (char *)realloc(v211, v158);
              v156 = v252;
              v160 = v159;
              v252[2] = v159;
              v252[5] = v362;
              v157 = &v159[v326];
              v252[4] = &v160[v362];
              a3 = v157 + 1;
            }
            v156[3] = a3;
            *v157 = 44;
            v67 = *(uint32_t *)(v3 - 4);
          }
          else
          {
            v302 = (v66 & 1) == 0 ? 44 : 58;
            v68 = *(uint32_t **)HIDWORD(v3);
            v69 = *(char **)(*(uint32_t *)HIDWORD(v3) + 12);
            if ( *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) <= (unsigned int)(v69 + 1) )
            {
              v204 = (uint8_t *)v68[2];
              v319 = v69 - v204;
              v70 = v69 - v204 + 1;
              if ( v70 < 2 * v68[5] )
                v70 = 2 * v68[5];
              v232 = *(uint32_t **)HIDWORD(v3);
              v349 = v70;
              v71 = (char *)realloc(v204, v70);
              v68 = v232;
              v232[5] = v349;
              v232[2] = v71;
              v232[3] = &v71[v319];
              v232[4] = &v71[v349];
              v69 = &v71[v319];
            }
            a3 = v69 + 1;
            v68[3] = v69 + 1;
            *v69 = v302;
            v67 = *(uint32_t *)(v3 - 4);
          }
        }
        if ( *(uint8_t *)(v3 - 8) == 0 && (v67 & 1) == 0 )
        {
          __assert2(
            "../../../../../lib/rapidjson/writer.h",
            387,
            "void rapidjson::Writer<Stream, Encoding, Allocator>::Prefix(rapidjson::Type) [with Stream = rapidjson::Gener"
            "icStringBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
            "type == kStringType");
          v67 = *(uint32_t *)(v3 - 4);
        }
        *(uint32_t *)(v3 - 4) = v67 + 1;
        LODWORD(v3) = *(uint32_t *)(HIDWORD(v3) + 16);
      }
      v72 = v3 + 8;
      if ( (unsigned int)(v3 + 8) < *(uint32_t *)(HIDWORD(v3) + 20) )
        goto LABEL_143;
      v73 = *(uint32_t *)(HIDWORD(v3) + 12);
      LODWORD(v3) = v3 - v73;
      v337 = *(uint32_t *)(HIDWORD(v3) + 24);
      v74 = 2 * v337;
      v320 = v3;
      if ( (int)v3 + 8 >= 2 * v337 )
        v74 = v3 + 8;
      v350 = v74;
      v303 = *(unsigned int ***)(HIDWORD(v3) + 4);
      if ( v73 != 0 )
      {
        if ( v337 >= v74 )
          goto LABEL_142;
        v75 = *v303;
        v76 = (*v303)[1];
        v291 = v76 + 12;
        if ( (unsigned int *)v73 != (unsigned int *)((char *)*v303 + v76 + 12 - v337) )
        {
          v287 = *v75;
LABEL_133:
          v218 = (v350 + 3) & 0xFFFFFFFC;
          if ( v76 + v218 > v287 )
          {
            LODWORD(v3) = v303[1];
            if ( v218 >= (unsigned int)v3 )
              LODWORD(v3) = (v350 + 3) & 0xFFFFFFFC;
            v233 = *(uint32_t *)(HIDWORD(v3) + 12);
            v75 = (unsigned int *)malloc(v3 + 12);
            v75[1] = 0;
            *v75 = v3;
            v75[2] = (unsigned int)*v303;
            *v303 = v75;
            v76 = v75[1];
            v73 = v233;
            v291 = v76 + 12;
          }
          v292 = (char *)v75 + v291;
          if ( ((uint8_t)v292 & 3) != 0 )
          {
            v234 = v73;
            __assert2(
              "../../../../../lib/rapidjson/rapidjson.h",
              267,
              "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAl"
              "locator, size_t = unsigned int]",
              "((uintptr_t) buffer & 3) == 0");
            v73 = v234;
            v75 = *v303;
            v76 = (*v303)[1];
          }
          v75[1] = v76 + v218;
          if ( v292 == nullptr )
          {
            v261 = v73;
            __assert2(
              "../../../../../lib/rapidjson/rapidjson.h",
              301,
              "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = "
              "rapidjson::CrtAllocator, size_t = unsigned int]",
              "newBuffer != 0");
            v73 = v261;
          }
          v73 = (int)memcpy(v292, (const void *)v73, v337);
          goto LABEL_142;
        }
        v283 = v76 + ((v350 - v337 + 3) & 0xFFFFFFFC);
        v287 = *v75;
        if ( v283 > *v75 )
          goto LABEL_133;
        v75[1] = v283;
        if ( (v73 & 3) != 0 )
        {
          v248 = v73;
          __assert2(
            "../../../../../lib/rapidjson/rapidjson.h",
            294,
            "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = ra"
            "pidjson::CrtAllocator, size_t = unsigned int]",
            "((uintptr_t) originalPtr & 3) == 0");
          v73 = v248;
        }
      }
      else
      {
        v169 = **(unsigned int ***)(HIDWORD(v3) + 4);
        v170 = (v74 + 3) & 0xFFFFFFFC;
        v171 = v169[1];
        if ( v170 + v171 > *v169 )
        {
          v172 = (unsigned int)v303[1];
          if ( v170 >= v172 )
            v172 = v170;
          v256 = v172;
          v169 = (unsigned int *)malloc(v172 + 12);
          *v169 = v256;
          v169[1] = 0;
          v169[2] = (unsigned int)*v303;
          *v303 = v169;
          v171 = v169[1];
        }
        v73 = (int)v169 + v171 + 12;
        if ( (v73 & 3) != 0 )
        {
          v257 = (int)v169 + v171 + 12;
          __assert2(
            "../../../../../lib/rapidjson/rapidjson.h",
            267,
            "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllo"
            "cator, size_t = unsigned int]",
            "((uintptr_t) buffer & 3) == 0");
          v73 = v257;
          v169 = *v303;
          v171 = (*v303)[1];
        }
        v169[1] = v170 + v171;
      }
LABEL_142:
      a3 = (uint8_t *)v350;
      LODWORD(v3) = v73 + v320;
      *(uint32_t *)(HIDWORD(v3) + 12) = v73;
      *(uint32_t *)(HIDWORD(v3) + 24) = v350;
      *(uint32_t *)(HIDWORD(v3) + 20) = v350 + v73;
      v72 = v73 + v320 + 8;
LABEL_143:
      *(uint32_t *)(HIDWORD(v3) + 16) = v72;
      if ( (uint32_t)v3 != 0 )
      {
        *(uint8_t *)v3 = 1;
        *(uint32_t *)(v3 + 4) = 0;
      }
      LODWORD(v3) = *(uint32_t *)HIDWORD(v3);
      v77 = *(uint8_t **)(*(uint32_t *)HIDWORD(v3) + 12);
      v78 = (int)(v77 + 1);
      if ( (unsigned int)(v77 + 1) >= *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) )
      {
        v235 = &v77[-*(uint32_t *)(v3 + 8)];
        v79 = (size_t)(v235 + 1);
        if ( (unsigned int)(v235 + 1) < 2 * *(uint32_t *)(v3 + 20) )
          v79 = 2 * *(uint32_t *)(v3 + 20);
        v272 = v79;
        v80 = realloc(*(void **)(v3 + 8), v79);
        *(uint32_t *)(v3 + 8) = v80;
        a3 = (uint8_t *)v272;
        *(uint32_t *)(v3 + 20) = v272;
        v77 = &v235[(uint32_t)v80];
        *(uint32_t *)(v3 + 16) = (char *)v80 + v272;
        v78 = (int)&v235[(uint32_t)v80 + 1];
      }
      *(uint32_t *)(v3 + 12) = v78;
      *v77 = 91;
      LODWORD(v3) = *(uint32_t *)a1;
      if ( 16 * *((uint32_t *)a1 + 1) != 0 )
      {
        do
        {
          sub_122FAB0(a3, HIDWORD(v3));
          LODWORD(v3) = v3 + 16;
        }
        while ( (uint32_t)v3 != *(uint32_t *)a1 + 16 * *((uint32_t *)a1 + 1) );
      }
      v81 = *(uint32_t *)(HIDWORD(v3) + 16);
      if ( (unsigned int)(v81 - *(uint32_t *)(HIDWORD(v3) + 12)) <= 7 )
      {
        __assert2(
          "../../../../../lib/rapidjson/writer.h",
          132,
          "rapidjson::Writer<Stream, Encoding, Allocator>& rapidjson::Writer<Stream, Encoding, Allocator>::EndArray(rapid"
          "json::SizeType) [with Stream = rapidjson::GenericStringBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<"
          ">, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::Writer<Stream, Encoding, Allocator> = rapidjson::W"
          "riter<rapidjson::GenericStringBuffer<rapidjson::UTF8<> > >, rapidjson::SizeType = unsigned int]",
          "level_stack_.GetSize () >= sizeof (Level)");
        v81 = *(uint32_t *)(HIDWORD(v3) + 16);
        if ( (unsigned int)(v81 - *(uint32_t *)(HIDWORD(v3) + 12)) <= 7 )
        {
          __assert2(
            "../../../../../lib/rapidjson/internal/stack.h",
            91,
            "T* rapidjson::internal::Stack<Allocator>::Top() [with T = rapidjson::Writer<rapidjson::GenericStringBuffer<r"
            "apidjson::UTF8<> > >::Level, Allocator = rapidjson::MemoryPoolAllocator<>]",
            "GetSize () >= sizeof (T)");
          v81 = *(uint32_t *)(HIDWORD(v3) + 16);
        }
      }
      if ( *(uint8_t *)(v81 - 8) == 0 )
      {
        __assert2(
          "../../../../../lib/rapidjson/writer.h",
          133,
          "rapidjson::Writer<Stream, Encoding, Allocator>& rapidjson::Writer<Stream, Encoding, Allocator>::EndArray(rapid"
          "json::SizeType) [with Stream = rapidjson::GenericStringBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<"
          ">, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::Writer<Stream, Encoding, Allocator> = rapidjson::W"
          "riter<rapidjson::GenericStringBuffer<rapidjson::UTF8<> > >, rapidjson::SizeType = unsigned int]",
          "level_stack_.template Top<Level> ()->inArray");
        v81 = *(uint32_t *)(HIDWORD(v3) + 16);
      }
      if ( (unsigned int)(v81 - *(uint32_t *)(HIDWORD(v3) + 12)) <= 7 )
      {
        __assert2(
          "../../../../../lib/rapidjson/internal/stack.h",
          83,
          "T* rapidjson::internal::Stack<Allocator>::Pop(size_t) [with T = rapidjson::Writer<rapidjson::GenericStringBuff"
          "er<rapidjson::UTF8<> > >::Level, Allocator = rapidjson::MemoryPoolAllocator<>, size_t = unsigned int]",
          "GetSize () >= count * sizeof (T)");
        v81 = *(uint32_t *)(HIDWORD(v3) + 16);
      }
      *(uint32_t *)(HIDWORD(v3) + 16) = v81 - 8;
      HIDWORD(v3) = *(uint32_t *)HIDWORD(v3);
      v82 = *(uint8_t **)(HIDWORD(v3) + 12);
      v83 = (int)(v82 + 1);
      if ( (unsigned int)(v82 + 1) >= *(uint32_t *)(HIDWORD(v3) + 16) )
      {
        v236 = &v82[-*(uint32_t *)(HIDWORD(v3) + 8)];
        LODWORD(v3) = v236 + 1;
        if ( (unsigned int)(v236 + 1) < 2 * *(uint32_t *)(HIDWORD(v3) + 20) )
          LODWORD(v3) = 2 * *(uint32_t *)(HIDWORD(v3) + 20);
        v84 = realloc(*(void **)(HIDWORD(v3) + 8), v3);
        *(uint32_t *)(HIDWORD(v3) + 8) = v84;
        *(uint32_t *)(HIDWORD(v3) + 20) = v3;
        v82 = &v236[(uint32_t)v84];
        *(uint32_t *)(HIDWORD(v3) + 16) = (char *)v84 + v3;
        v83 = (int)&v236[(uint32_t)v84 + 1];
      }
      *(uint32_t *)(HIDWORD(v3) + 12) = v83;
      *v82 = 93;
      return a1;
    case 5:
      sub_122F090((uint32_t *)HIDWORD(v3), *(uint8_t **)a1, *((uint32_t *)a1 + 1));
      return a1;
    case 6:
      if ( (v4 & 0x400) != 0 )
      {
        LODWORD(v3) = *(uint32_t *)(HIDWORD(v3) + 16);
        v101 = *(uint32_t *)a1;
        v102 = *(uint32_t *)(HIDWORD(v3) + 12);
        if ( v102 == (uint32_t)v3 )
        {
          v253 = *(uint8_t **)a1;
          __assert2(
            "../../../../../lib/rapidjson/writer.h",
            394,
            "void rapidjson::Writer<Stream, Encoding, Allocator>::Prefix(rapidjson::Type) [with Stream = rapidjson::Gener"
            "icStringBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
            "type == kObjectType || type == kArrayType");
          v101 = (int)v253;
        }
        else
        {
          if ( (unsigned int)(v3 - v102) <= 7 )
          {
            v239 = *(uint8_t **)a1;
            __assert2(
              "../../../../../lib/rapidjson/internal/stack.h",
              91,
              "T* rapidjson::internal::Stack<Allocator>::Top() [with T = rapidjson::Writer<rapidjson::GenericStringBuffer"
              "<rapidjson::UTF8<> > >::Level, Allocator = rapidjson::MemoryPoolAllocator<>]",
              "GetSize () >= sizeof (T)");
            LODWORD(v3) = *(uint32_t *)(HIDWORD(v3) + 16);
            v101 = (int)v239;
          }
          v103 = *(uint32_t *)(v3 - 4);
          v104 = 0;
          if ( v103 != 0 )
          {
            if ( *(uint8_t *)(v3 - 8) != 0 )
            {
              v165 = *(uint32_t **)HIDWORD(v3);
              v328 = *(char **)(*(uint32_t *)HIDWORD(v3) + 12);
              v166 = (int)(v328 + 1);
              if ( (unsigned int)(v328 + 1) >= *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) )
              {
                v213 = (uint8_t *)v165[2];
                v255 = v101;
                v312 = v328 - v213;
                v167 = v328 - v213 + 1;
                if ( v167 < 2 * v165[5] )
                  v167 = 2 * v165[5];
                v279 = *(uint32_t **)HIDWORD(v3);
                v341 = v167;
                v168 = (char *)realloc(v213, v167);
                v165 = v279;
                v279[2] = v168;
                v279[5] = v341;
                v328 = &v168[v312];
                v279[4] = &v168[v341];
                v166 = (int)&v168[v312 + 1];
                v101 = v255;
              }
              v165[3] = v166;
              *v328 = 44;
              v104 = *(uint32_t *)(v3 - 4);
            }
            else
            {
              v354 = (v103 & 1) == 0 ? 44 : 58;
              v105 = *(uint32_t **)HIDWORD(v3);
              v321 = *(char **)(*(uint32_t *)HIDWORD(v3) + 12);
              if ( *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) <= (unsigned int)(v321 + 1) )
              {
                v206 = (uint8_t *)v105[2];
                v240 = v101;
                v306 = v321 - v206;
                v106 = v321 - v206 + 1;
                if ( v106 < 2 * v105[5] )
                  v106 = 2 * v105[5];
                v274 = *(uint32_t **)HIDWORD(v3);
                v339 = v106;
                v107 = (char *)realloc(v206, v106);
                v105 = v274;
                v294 = v107;
                v274[2] = v107;
                v274[5] = v339;
                v108 = &v107[v306];
                v274[3] = v108;
                v321 = v108;
                v274[4] = &v294[v339];
                v101 = v240;
              }
              v105[3] = v321 + 1;
              *v321 = v354;
              v104 = *(uint32_t *)(v3 - 4);
            }
          }
          if ( *(uint8_t *)(v3 - 8) == 0 && (v104 & 1) == 0 )
          {
            v241 = v101;
            __assert2(
              "../../../../../lib/rapidjson/writer.h",
              387,
              "void rapidjson::Writer<Stream, Encoding, Allocator>::Prefix(rapidjson::Type) [with Stream = rapidjson::Gen"
              "ericStringBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
              "type == kStringType");
            v104 = *(uint32_t *)(v3 - 4);
            v101 = v241;
          }
          *(uint32_t *)(v3 - 4) = v104 + 1;
        }
        if ( v101 < 0 )
        {
          LODWORD(v3) = *(uint32_t *)HIDWORD(v3);
          v161 = *(char **)(*(uint32_t *)HIDWORD(v3) + 12);
          v162 = (int)(v161 + 1);
          if ( (unsigned int)(v161 + 1) >= *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) )
          {
            v212 = *(uint8_t **)(v3 + 8);
            v327 = v161 - v212;
            v163 = v161 - v212 + 1;
            if ( v163 < 2 * *(uint32_t *)(v3 + 20) )
              v163 = 2 * *(uint32_t *)(v3 + 20);
            v254 = v101;
            v363 = v163;
            v164 = (char *)realloc(v212, v163);
            *(uint32_t *)(v3 + 8) = v164;
            *(uint32_t *)(v3 + 20) = v363;
            v161 = &v164[v327];
            *(uint32_t *)(v3 + 16) = &v164[v363];
            v101 = v254;
            v162 = (int)&v164[v327 + 1];
          }
          *(uint32_t *)(v3 + 12) = v162;
          v101 = -v101;
          *v161 = 45;
        }
        v109 = s;
        v110 = v101;
        do
        {
          v111 = v110 % 0xA + 48;
          v110 /= 0xAu;
          *v109++ = v111;
        }
        while ( v110 != 0 );
        LODWORD(v3) = v109;
        v307 = HIDWORD(v3);
        do
        {
          LODWORD(v3) = v3 - 1;
          v355 = *(uint8_t *)v3;
          HIDWORD(v3) = *(uint32_t *)v307;
          v112 = *(char **)(*(uint32_t *)v307 + 12);
          v113 = (int)(v112 + 1);
          if ( (unsigned int)(v112 + 1) >= *(uint32_t *)(*(uint32_t *)v307 + 16) )
          {
            v114 = &v112[-*(uint32_t *)(HIDWORD(v3) + 8)];
            v115 = 2 * *(uint32_t *)(HIDWORD(v3) + 20);
            v275 = v114;
            if ( (unsigned int)(v114 + 1) >= v115 )
              v115 = (size_t)(v114 + 1);
            v242 = v115;
            v116 = (char *)realloc(*(void **)(HIDWORD(v3) + 8), v115);
            *(uint32_t *)(HIDWORD(v3) + 8) = v116;
            *(uint32_t *)(HIDWORD(v3) + 20) = v242;
            v112 = &v275[(uint32_t)v116];
            *(uint32_t *)(HIDWORD(v3) + 16) = &v116[v242];
            v113 = (int)&v275[(uint32_t)v116 + 1];
          }
          *(uint32_t *)(HIDWORD(v3) + 12) = v113;
          *v112 = v355;
        }
        while ( (char *)v3 != s );
      }
      else if ( (v4 & 0x800) != 0 )
      {
        v117 = *(uint32_t *)(HIDWORD(v3) + 16);
        LODWORD(v3) = *(uint32_t *)a1;
        v118 = *(uint32_t *)(HIDWORD(v3) + 12);
        if ( v118 == v117 )
        {
          __assert2(
            "../../../../../lib/rapidjson/writer.h",
            394,
            "void rapidjson::Writer<Stream, Encoding, Allocator>::Prefix(rapidjson::Type) [with Stream = rapidjson::Gener"
            "icStringBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
            "type == kObjectType || type == kArrayType");
        }
        else
        {
          if ( (unsigned int)(v117 - v118) <= 7 )
          {
            __assert2(
              "../../../../../lib/rapidjson/internal/stack.h",
              91,
              "T* rapidjson::internal::Stack<Allocator>::Top() [with T = rapidjson::Writer<rapidjson::GenericStringBuffer"
              "<rapidjson::UTF8<> > >::Level, Allocator = rapidjson::MemoryPoolAllocator<>]",
              "GetSize () >= sizeof (T)");
            v117 = *(uint32_t *)(HIDWORD(v3) + 16);
          }
          v119 = *(uint32_t *)(v117 - 4);
          v120 = 0;
          if ( v119 != 0 )
          {
            if ( *(uint8_t *)(v117 - 8) != 0 )
            {
              v177 = *(uint32_t **)HIDWORD(v3);
              v329 = *(char **)(*(uint32_t *)HIDWORD(v3) + 12);
              v178 = v329 + 1;
              if ( (unsigned int)(v329 + 1) >= *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) )
              {
                v214 = (uint8_t *)v177[2];
                v260 = v117;
                v330 = v329 - v214;
                v179 = v330 + 1;
                if ( v330 + 1 < (unsigned int)(2 * v177[5]) )
                  v179 = 2 * v177[5];
                v280 = *(uint32_t **)HIDWORD(v3);
                v364 = v179;
                v180 = (char *)realloc(v214, v179);
                v177 = v280;
                v280[2] = v180;
                v280[5] = v364;
                v329 = &v180[v330];
                v280[4] = &v180[v364];
                v178 = v329 + 1;
                v117 = v260;
              }
              v177[3] = v178;
              *v329 = 44;
              v120 = *(uint32_t *)(v117 - 4);
            }
            else
            {
              v356 = (v119 & 1) == 0 ? 44 : 58;
              v121 = *(uint32_t **)HIDWORD(v3);
              v322 = *(char **)(*(uint32_t *)HIDWORD(v3) + 12);
              if ( *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) <= (unsigned int)(v322 + 1) )
              {
                v207 = (uint8_t *)v121[2];
                v243 = v117;
                v308 = v322 - v207;
                v122 = v322 - v207 + 1;
                if ( v122 < 2 * v121[5] )
                  v122 = 2 * v121[5];
                v276 = *(uint32_t **)HIDWORD(v3);
                v340 = v122;
                v123 = (char *)realloc(v207, v122);
                v121 = v276;
                v295 = v123;
                v276[2] = v123;
                v276[5] = v340;
                v124 = &v123[v308];
                v276[3] = v124;
                v322 = v124;
                v276[4] = &v295[v340];
                v117 = v243;
              }
              v121[3] = v322 + 1;
              *v322 = v356;
              v120 = *(uint32_t *)(v117 - 4);
            }
          }
          if ( *(uint8_t *)(v117 - 8) == 0 && (v120 & 1) == 0 )
          {
            v244 = v117;
            __assert2(
              "../../../../../lib/rapidjson/writer.h",
              387,
              "void rapidjson::Writer<Stream, Encoding, Allocator>::Prefix(rapidjson::Type) [with Stream = rapidjson::Gen"
              "ericStringBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
              "type == kStringType");
            v117 = v244;
            v120 = *(uint32_t *)(v244 - 4);
          }
          *(uint32_t *)(v117 - 4) = v120 + 1;
        }
        v125 = s;
        do
        {
          v126 = (unsigned int)v3 % 0xA + 48;
          LODWORD(v3) = (unsigned int)v3 / 0xA;
          *v125++ = v126;
        }
        while ( (uint32_t)v3 != 0 );
        LODWORD(v3) = v125;
        v309 = HIDWORD(v3);
        do
        {
          LODWORD(v3) = v3 - 1;
          v357 = *(uint8_t *)v3;
          HIDWORD(v3) = *(uint32_t *)v309;
          v127 = *(uint8_t **)(*(uint32_t *)v309 + 12);
          v128 = (int)(v127 + 1);
          if ( (unsigned int)(v127 + 1) >= *(uint32_t *)(*(uint32_t *)v309 + 16) )
          {
            v277 = &v127[-*(uint32_t *)(HIDWORD(v3) + 8)];
            v129 = (size_t)(v277 + 1);
            if ( (unsigned int)(v277 + 1) < 2 * *(uint32_t *)(HIDWORD(v3) + 20) )
              v129 = 2 * *(uint32_t *)(HIDWORD(v3) + 20);
            v245 = v129;
            v130 = realloc(*(void **)(HIDWORD(v3) + 8), v129);
            *(uint32_t *)(HIDWORD(v3) + 8) = v130;
            *(uint32_t *)(HIDWORD(v3) + 20) = v245;
            v127 = &v277[(uint32_t)v130];
            *(uint32_t *)(HIDWORD(v3) + 16) = (char *)v130 + v245;
            v128 = (int)&v277[(uint32_t)v130 + 1];
          }
          *(uint32_t *)(HIDWORD(v3) + 12) = v128;
          *v127 = v357;
        }
        while ( (char *)v3 != s );
      }
      else if ( (v4 & 0x1000) != 0 )
      {
        v85 = *(uint32_t *)(HIDWORD(v3) + 12);
        v86 = *(uint32_t *)(HIDWORD(v3) + 16);
        v351 = *a1;
        if ( v85 == v86 )
        {
          __assert2(
            "../../../../../lib/rapidjson/writer.h",
            394,
            "void rapidjson::Writer<Stream, Encoding, Allocator>::Prefix(rapidjson::Type) [with Stream = rapidjson::Gener"
            "icStringBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
            "type == kObjectType || type == kArrayType");
        }
        else
        {
          if ( (unsigned int)(v86 - v85) <= 7 )
          {
            __assert2(
              "../../../../../lib/rapidjson/internal/stack.h",
              91,
              "T* rapidjson::internal::Stack<Allocator>::Top() [with T = rapidjson::Writer<rapidjson::GenericStringBuffer"
              "<rapidjson::UTF8<> > >::Level, Allocator = rapidjson::MemoryPoolAllocator<>]",
              "GetSize () >= sizeof (T)");
            v86 = *(uint32_t *)(HIDWORD(v3) + 16);
          }
          v87 = *(uint32_t *)(v86 - 4);
          v88 = 0;
          if ( v87 != 0 )
          {
            if ( *(uint8_t *)(v86 - 8) != 0 )
            {
              v196 = *(uint32_t **)HIDWORD(v3);
              v197 = *(uint8_t **)(*(uint32_t *)HIDWORD(v3) + 12);
              v198 = (int)(v197 + 1);
              if ( *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) <= (unsigned int)(v197 + 1) )
              {
                v333 = &v197[-v196[2]];
                v199 = (size_t)(v333 + 1);
                if ( (unsigned int)(v333 + 1) < 2 * v196[5] )
                  v199 = 2 * v196[5];
                v265 = *(uint32_t **)HIDWORD(v3);
                v342 = v199;
                v200 = realloc((void *)v196[2], v199);
                v196 = v265;
                v265[5] = v342;
                v197 = &v333[(uint32_t)v200];
                v265[2] = v200;
                v265[4] = (char *)v200 + v342;
                v198 = (int)&v333[(uint32_t)v200 + 1];
              }
              v196[3] = v198;
              *v197 = 44;
              v88 = *(uint32_t *)(v86 - 4);
            }
            else
            {
              v293 = (v87 & 1) == 0 ? 44 : 58;
              v89 = *(uint32_t **)HIDWORD(v3);
              v90 = *(char **)(*(uint32_t *)HIDWORD(v3) + 12);
              if ( *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) <= (unsigned int)(v90 + 1) )
              {
                v205 = (uint8_t *)v89[2];
                v304 = v90 - v205;
                v91 = v90 - v205 + 1;
                if ( v91 < 2 * v89[5] )
                  v91 = 2 * v89[5];
                v237 = *(uint32_t **)HIDWORD(v3);
                v338 = v91;
                v92 = (char *)realloc(v205, v91);
                v89 = v237;
                v237[5] = v338;
                v237[2] = v92;
                v237[3] = &v92[v304];
                v237[4] = &v92[v338];
                v90 = &v92[v304];
              }
              v89[3] = v90 + 1;
              *v90 = v293;
              v88 = *(uint32_t *)(v86 - 4);
            }
          }
          if ( *(uint8_t *)(v86 - 8) == 0 && (v88 & 1) == 0 )
          {
            __assert2(
              "../../../../../lib/rapidjson/writer.h",
              387,
              "void rapidjson::Writer<Stream, Encoding, Allocator>::Prefix(rapidjson::Type) [with Stream = rapidjson::Gen"
              "ericStringBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
              "type == kStringType");
            v88 = *(uint32_t *)(v86 - 4);
          }
          *(uint32_t *)(v86 - 4) = v88 + 1;
        }
        if ( v351 < 0 )
        {
          LODWORD(v3) = *(uint32_t *)HIDWORD(v3);
          v181 = *(char **)(*(uint32_t *)HIDWORD(v3) + 12);
          v182 = (int)(v181 + 1);
          if ( (unsigned int)(v181 + 1) >= *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) )
          {
            v183 = &v181[-*(uint32_t *)(v3 + 8)];
            v184 = (size_t)(v183 + 1);
            v331 = v183;
            if ( (unsigned int)(v183 + 1) < 2 * *(uint32_t *)(v3 + 20) )
              v184 = 2 * *(uint32_t *)(v3 + 20);
            v281 = v184;
            v185 = (char *)realloc(*(void **)(v3 + 8), v184);
            *(uint32_t *)(v3 + 8) = v185;
            v181 = &v331[(uint32_t)v185];
            *(uint32_t *)(v3 + 16) = &v185[v281];
            *(uint32_t *)(v3 + 20) = v281;
            v182 = (int)&v331[(uint32_t)v185 + 1];
          }
          *(uint32_t *)(v3 + 12) = v182;
          *v181 = 45;
          v351 = -v351;
        }
        v305 = (int *)HIDWORD(v3);
        v93 = __PAIR64__(v351, HIDWORD(v351));
        v352 = s;
        do
        {
          *v352++ = __PAIR64__(v93, HIDWORD(v93)) % 0xA + 48;
          v94 = __PAIR64__(v93, HIDWORD(v93)) / 0xA;
          LODWORD(v93) = (__PAIR64__(v93, HIDWORD(v93)) / 0xA) >> 32;
          HIDWORD(v93) = v94;
        }
        while ( v93 != 0 );
        v95 = v352;
        do
        {
          v353 = *--v95;
          v96 = *v305;
          v97 = *(uint8_t **)(*v305 + 12);
          v98 = (int)(v97 + 1);
          if ( (unsigned int)(v97 + 1) >= *(uint32_t *)(*v305 + 16) )
          {
            v273 = &v97[-*(uint32_t *)(v96 + 8)];
            v99 = (size_t)(v273 + 1);
            if ( (unsigned int)(v273 + 1) < 2 * *(uint32_t *)(v96 + 20) )
              v99 = 2 * *(uint32_t *)(v96 + 20);
            v238 = v99;
            v100 = realloc(*(void **)(v96 + 8), v99);
            *(uint32_t *)(v96 + 8) = v100;
            *(uint32_t *)(v96 + 20) = v238;
            v97 = &v273[(uint32_t)v100];
            *(uint32_t *)(v96 + 16) = (char *)v100 + v238;
            v98 = (int)&v273[(uint32_t)v100 + 1];
          }
          *(uint32_t *)(v96 + 12) = v98;
          *v97 = v353;
        }
        while ( v95 != s );
      }
      else if ( (v4 & 0x2000) != 0 )
      {
        v29 = *(uint32_t *)(HIDWORD(v3) + 16);
        v335 = *(uint8_t **)a1;
        LODWORD(v3) = *((uint32_t *)a1 + 1);
        v30 = *(uint32_t *)(HIDWORD(v3) + 12);
        if ( v30 == v29 )
        {
          __assert2(
            "../../../../../lib/rapidjson/writer.h",
            394,
            "void rapidjson::Writer<Stream, Encoding, Allocator>::Prefix(rapidjson::Type) [with Stream = rapidjson::Gener"
            "icStringBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
            "type == kObjectType || type == kArrayType");
        }
        else
        {
          if ( (unsigned int)(v29 - v30) <= 7 )
          {
            __assert2(
              "../../../../../lib/rapidjson/internal/stack.h",
              91,
              "T* rapidjson::internal::Stack<Allocator>::Top() [with T = rapidjson::Writer<rapidjson::GenericStringBuffer"
              "<rapidjson::UTF8<> > >::Level, Allocator = rapidjson::MemoryPoolAllocator<>]",
              "GetSize () >= sizeof (T)");
            v29 = *(uint32_t *)(HIDWORD(v3) + 16);
          }
          v31 = *(uint32_t *)(v29 - 4);
          v32 = 0;
          if ( v31 != 0 )
          {
            if ( *(uint8_t *)(v29 - 8) != 0 )
            {
              v192 = *(uint32_t **)HIDWORD(v3);
              v313 = *(char **)(*(uint32_t *)HIDWORD(v3) + 12);
              v193 = v313 + 1;
              if ( (unsigned int)(v313 + 1) >= *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) )
              {
                v216 = (uint8_t *)v192[2];
                v264 = v29;
                v314 = v313 - v216;
                v194 = v314 + 1;
                if ( v314 + 1 < (unsigned int)(2 * v192[5]) )
                  v194 = 2 * v192[5];
                v282 = *(uint32_t **)HIDWORD(v3);
                v366 = v194;
                v195 = (char *)realloc(v216, v194);
                v192 = v282;
                v282[2] = v195;
                v282[5] = v366;
                v313 = &v195[v314];
                v282[4] = &v195[v366];
                v193 = v313 + 1;
                v29 = v264;
              }
              v192[3] = v193;
              *v313 = 44;
              v32 = *(uint32_t *)(v29 - 4);
            }
            else
            {
              v344 = (v31 & 1) == 0 ? 44 : 58;
              v33 = *(uint32_t **)HIDWORD(v3);
              v298 = *(char **)(*(uint32_t *)HIDWORD(v3) + 12);
              if ( *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) <= (unsigned int)(v298 + 1) )
              {
                v202 = (uint8_t *)v33[2];
                v224 = v29;
                v288 = v298 - v202;
                v34 = v298 - v202 + 1;
                if ( v34 < 2 * v33[5] )
                  v34 = 2 * v33[5];
                v269 = *(uint32_t **)HIDWORD(v3);
                v316 = v34;
                v35 = (char *)realloc(v202, v34);
                v33 = v269;
                v285 = v35;
                v269[2] = v35;
                v269[5] = v316;
                v36 = &v35[v288];
                v269[3] = v36;
                v298 = v36;
                v269[4] = &v285[v316];
                v29 = v224;
              }
              v33[3] = v298 + 1;
              *v298 = v344;
              v32 = *(uint32_t *)(v29 - 4);
            }
          }
          if ( *(uint8_t *)(v29 - 8) == 0 && (v32 & 1) == 0 )
          {
            v225 = v29;
            __assert2(
              "../../../../../lib/rapidjson/writer.h",
              387,
              "void rapidjson::Writer<Stream, Encoding, Allocator>::Prefix(rapidjson::Type) [with Stream = rapidjson::Gen"
              "ericStringBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
              "type == kStringType");
            v29 = v225;
            v32 = *(uint32_t *)(v225 - 4);
          }
          *(uint32_t *)(v29 - 4) = v32 + 1;
        }
        v299 = (int *)HIDWORD(v3);
        v345 = s;
        HIDWORD(v3) = v335;
        do
        {
          *v345++ = __PAIR64__(v3, HIDWORD(v3)) % 0xA + 48;
          v37 = __PAIR64__(v3, HIDWORD(v3)) / 0xA;
          LODWORD(v3) = (__PAIR64__(v3, HIDWORD(v3)) / 0xA) >> 32;
          HIDWORD(v3) = v37;
        }
        while ( v3 != 0 );
        v38 = v345;
        do
        {
          v346 = *--v38;
          v39 = *v299;
          v40 = *(uint8_t **)(*v299 + 12);
          v41 = (int)(v40 + 1);
          if ( (unsigned int)(v40 + 1) >= *(uint32_t *)(*v299 + 16) )
          {
            v270 = &v40[-*(uint32_t *)(v39 + 8)];
            v42 = (size_t)(v270 + 1);
            if ( (unsigned int)(v270 + 1) < 2 * *(uint32_t *)(v39 + 20) )
              v42 = 2 * *(uint32_t *)(v39 + 20);
            v226 = v42;
            v43 = realloc(*(void **)(v39 + 8), v42);
            *(uint32_t *)(v39 + 8) = v43;
            *(uint32_t *)(v39 + 20) = v226;
            v40 = &v270[(uint32_t)v43];
            *(uint32_t *)(v39 + 16) = (char *)v43 + v226;
            v41 = (int)&v270[(uint32_t)v43 + 1];
          }
          *(uint32_t *)(v39 + 12) = v41;
          *v40 = v346;
        }
        while ( v38 != s );
      }
      else
      {
        v131 = *a1;
        LODWORD(v3) = *(uint32_t *)(HIDWORD(v3) + 16);
        v132 = *(uint32_t *)(HIDWORD(v3) + 12);
        if ( v132 == (uint32_t)v3 )
        {
          __assert2(
            "../../../../../lib/rapidjson/writer.h",
            394,
            "void rapidjson::Writer<Stream, Encoding, Allocator>::Prefix(rapidjson::Type) [with Stream = rapidjson::Gener"
            "icStringBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
            "type == kObjectType || type == kArrayType");
        }
        else
        {
          if ( (unsigned int)(v3 - v132) <= 7 )
          {
            __assert2(
              "../../../../../lib/rapidjson/internal/stack.h",
              91,
              "T* rapidjson::internal::Stack<Allocator>::Top() [with T = rapidjson::Writer<rapidjson::GenericStringBuffer"
              "<rapidjson::UTF8<> > >::Level, Allocator = rapidjson::MemoryPoolAllocator<>]",
              "GetSize () >= sizeof (T)");
            LODWORD(v3) = *(uint32_t *)(HIDWORD(v3) + 16);
          }
          v133 = *(uint32_t *)(v3 - 4);
          v134 = 0;
          if ( v133 != 0 )
          {
            if ( *(uint8_t *)(v3 - 8) != 0 )
            {
              v186 = *(uint32_t **)HIDWORD(v3);
              v187 = *(char **)(*(uint32_t *)HIDWORD(v3) + 12);
              v188 = v187 + 1;
              if ( (unsigned int)(v187 + 1) >= *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) )
              {
                v215 = (uint8_t *)v186[2];
                v332 = v187 - v215;
                v189 = v187 - v215 + 1;
                if ( v189 < 2 * v186[5] )
                  v189 = 2 * v186[5];
                v263 = *(uint32_t **)HIDWORD(v3);
                v365 = v189;
                v190 = (char *)realloc(v215, v189);
                v186 = v263;
                v191 = v190;
                v263[2] = v190;
                v263[5] = v365;
                v187 = &v190[v332];
                v263[4] = &v191[v365];
                v188 = v187 + 1;
              }
              v186[3] = v188;
              *v187 = 44;
              v134 = *(uint32_t *)(v3 - 4);
            }
            else
            {
              v310 = (v133 & 1) == 0 ? 44 : 58;
              v135 = *(uint32_t **)HIDWORD(v3);
              v136 = *(char **)(*(uint32_t *)HIDWORD(v3) + 12);
              if ( *(uint32_t *)(*(uint32_t *)HIDWORD(v3) + 16) <= (unsigned int)(v136 + 1) )
              {
                v208 = (uint8_t *)v135[2];
                v323 = v136 - v208;
                v137 = v136 - v208 + 1;
                if ( v137 < 2 * v135[5] )
                  v137 = 2 * v135[5];
                v246 = *(uint32_t **)HIDWORD(v3);
                v358 = v137;
                v138 = (char *)realloc(v208, v137);
                v135 = v246;
                v246[5] = v358;
                v246[2] = v138;
                v246[3] = &v138[v323];
                v246[4] = &v138[v358];
                v136 = &v138[v323];
              }
              v135[3] = v136 + 1;
              *v136 = v310;
              v134 = *(uint32_t *)(v3 - 4);
            }
          }
          if ( *(uint8_t *)(v3 - 8) == 0 && (v134 & 1) == 0 )
          {
            __assert2(
              "../../../../../lib/rapidjson/writer.h",
              387,
              "void rapidjson::Writer<Stream, Encoding, Allocator>::Prefix(rapidjson::Type) [with Stream = rapidjson::Gen"
              "ericStringBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
              "type == kStringType");
            v134 = *(uint32_t *)(v3 - 4);
          }
          *(uint32_t *)(v3 - 4) = v134 + 1;
        }
        v311 = snprintf(s, 0x64u, "%g", (uint32_t)v131, HIDWORD(v131));
        if ( v311 <= 0 )
        {
          __assert2(
            "../../../../../lib/rapidjson/writer.h",
            273,
            "void rapidjson::Writer<Stream, Encoding, Allocator>::WriteDouble(double) [with Stream = rapidjson::GenericSt"
            "ringBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
            "ret >= 1");
        }
        else
        {
          LODWORD(v3) = 0;
          v296 = HIDWORD(v3);
          do
          {
            v359 = s[v3];
            HIDWORD(v3) = *(uint32_t *)v296;
            v139 = *(char **)(*(uint32_t *)v296 + 12);
            v140 = (int)(v139 + 1);
            if ( (unsigned int)(v139 + 1) >= *(uint32_t *)(*(uint32_t *)v296 + 16) )
            {
              v141 = &v139[-*(uint32_t *)(HIDWORD(v3) + 8)];
              v142 = 2 * *(uint32_t *)(HIDWORD(v3) + 20);
              v278 = v141;
              if ( (unsigned int)(v141 + 1) >= v142 )
                v142 = (size_t)(v141 + 1);
              v247 = v142;
              v143 = (char *)realloc(*(void **)(HIDWORD(v3) + 8), v142);
              *(uint32_t *)(HIDWORD(v3) + 8) = v143;
              *(uint32_t *)(HIDWORD(v3) + 20) = v247;
              v139 = &v278[(uint32_t)v143];
              *(uint32_t *)(HIDWORD(v3) + 16) = &v143[v247];
              v140 = (int)&v278[(uint32_t)v143 + 1];
            }
            LODWORD(v3) = v3 + 1;
            *(uint32_t *)(HIDWORD(v3) + 12) = v140;
            *v139 = v359;
          }
          while ( (uint32_t)v3 != v311 );
        }
      }
      return a1;
    default:
      return a1;
  }
}

*/

// ============================================================================
// Referencing Function: 0x1231b40 .. 0x1232101 (1473 bytes)
// Symbol:               _ZN6chatv24Core9ArionUser9ToJsonStrEv
// Demangled:            chatv2::Core::ArionUser::ToJsonStr(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x124e160 .. 0x124e3b7 (599 bytes)
// Symbol:               sub_124E160
// Demangled:            sub_124E160
// ============================================================================

// ============================================================================
// Referencing Function: 0x124e510 .. 0x125037d (7789 bytes)
// Symbol:               _ZN6chatv29Responses20ArionResponseFactory22CreateResponseFromHTTPEN5boost10shared_ptrINS_8Requests19IArionServerRequestEEENS3_INS_12Connectivity12HTTPResponseEEE
// Demangled:            chatv2::Responses::ArionResponseFactory::CreateResponseFromHTTP(boost::shared_ptr<chatv2::Requests::IArionServerRequest>,boost::shared_ptr<chatv2::Connectivity::HTTPResponse>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1250ec0 .. 0x1250f78 (184 bytes)
// Symbol:               _ZN9rapidjson19MemoryPoolAllocatorINS_12CrtAllocatorEE6MallocEj
// Demangled:            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Malloc(unsigned int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1250f80 .. 0x125111d (413 bytes)
// Symbol:               _ZN9rapidjson15GenericDocumentINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEE9EndObjectEj
// Demangled:            rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::EndObject(unsigned int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1251120 .. 0x12522bc (4508 bytes)
// Symbol:               _ZN9rapidjson13GenericReaderINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEE11ParseStringILj0ENS_19GenericStringStreamIS2_EENS_15GenericDocumentIS2_S5_EEEEvRT0_RT1_
// Demangled:            void rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseString<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(rapidjson::GenericStringStream<rapidjson::UTF8<char>> &,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x12522c0 .. 0x125245d (413 bytes)
// Symbol:               _ZN9rapidjson15GenericDocumentINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEE8EndArrayEj
// Demangled:            rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::EndArray(unsigned int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1252d10 .. 0x1253432 (1826 bytes)
// Symbol:               _ZN9rapidjson13GenericReaderINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEE10ParseArrayILj0ENS_19GenericStringStreamIS2_EENS_15GenericDocumentIS2_S5_EEEEvRT0_RT1_
// Demangled:            void rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseArray<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(rapidjson::GenericStringStream<rapidjson::UTF8<char>> &,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1253440 .. 0x1253c51 (2065 bytes)
// Symbol:               _ZN9rapidjson13GenericReaderINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEE11ParseObjectILj0ENS_19GenericStringStreamIS2_EENS_15GenericDocumentIS2_S5_EEEEvRT0_RT1_
// Demangled:            void rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseObject<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(rapidjson::GenericStringStream<rapidjson::UTF8<char>> &,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x126ab10 .. 0x126ae7f (879 bytes)
// Symbol:               sub_126AB10
// Demangled:            sub_126AB10
// ============================================================================

// ============================================================================
// Referencing Function: 0x126cbc0 .. 0x126d589 (2505 bytes)
// Symbol:               _ZN6chatv28Requests17ReportUserRequest17CreateChatHistoryERKSt6vectorIN5boost10shared_ptrINS_9Responses14ClientResponseEEESaIS7_EE
// Demangled:            chatv2::Requests::ReportUserRequest::CreateChatHistory(std::vector<boost::shared_ptr<chatv2::Responses::ClientResponse>,std::allocator<boost::shared_ptr<chatv2::Responses::ClientResponse>>> const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x126dd70 .. 0x126dfef (639 bytes)
// Symbol:               _ZN9rapidjson8internal5StackINS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEE4PushINS_6WriterINS_19GenericStringBufferINS_4UTF8IcEES3_EESA_S4_E5LevelEEEPT_j
// Demangled:            rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Level * rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Push<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Level>(unsigned int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x131af00 .. 0x131b1cd (717 bytes)
// Symbol:               _ZN6glotv310EventValuecvRKN9rapidjson12GenericValueINS1_4UTF8IcEENS1_19MemoryPoolAllocatorINS1_12CrtAllocatorEEEEEEv
// Demangled:            glotv3::EventValue::operator rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1327460 .. 0x13276b7 (599 bytes)
// Symbol:               sub_1327460
// Demangled:            sub_1327460
// ============================================================================

// ============================================================================
// Referencing Function: 0x1327810 .. 0x13288b9 (4265 bytes)
// Symbol:               _ZN6glotv315TrackingManager23ActivateSpyIfConfiguredEv
// Demangled:            glotv3::TrackingManager::ActivateSpyIfConfigured(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x133fb80 .. 0x133fe03 (643 bytes)
// Symbol:               sub_133FB80
// Demangled:            sub_133FB80
// ============================================================================

// ============================================================================
// Referencing Function: 0x133ff30 .. 0x13400ab (379 bytes)
// Symbol:               sub_133FF30
// Demangled:            sub_133FF30
// ============================================================================

// ============================================================================
// Referencing Function: 0x1341100 .. 0x1341a87 (2439 bytes)
// Symbol:               _ZN6glotv35EventC1Eb
// Demangled:            glotv3::Event::Event(bool)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1352280 .. 0x13523fb (379 bytes)
// Symbol:               sub_1352280
// Demangled:            sub_1352280
// ============================================================================

// ============================================================================
// Referencing Function: 0x13554a0 .. 0x135574e (686 bytes)
// Symbol:               _ZN9rapidjson15GenericDocumentINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEE11ParseStreamILj0ENS_19GenericStringStreamIS2_EEEERS6_RT0_
// Demangled:            rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>& rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseStream<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>(rapidjson::GenericStringStream<rapidjson::UTF8<char>> &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1359aa0 .. 0x135a3d5 (2357 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessor17PushbackFromCrashEv
// Demangled:            glotv3::SingletonMutexedProcessor::PushbackFromCrash(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x136a3e0 .. 0x136a55b (379 bytes)
// Symbol:               sub_136A3E0
// Demangled:            sub_136A3E0
// ============================================================================

// ============================================================================
// Referencing Function: 0x1376070 .. 0x1376188 (280 bytes)
// Symbol:               sub_1376070
// Demangled:            sub_1376070
// ============================================================================

// ============================================================================
// Referencing Function: 0x13774b0 .. 0x137768f (479 bytes)
// Symbol:               _ZN9rapidjson19MemoryPoolAllocatorINS_12CrtAllocatorEE7ReallocEPvjj
// Demangled:            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Realloc(void *,unsigned int,unsigned int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1378150 .. 0x1378285 (309 bytes)
// Symbol:               _ZN6glotv39EventList11addRootPairERKSsS2_
// Demangled:            glotv3::EventList::addRootPair(std::string const&,std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1379210 .. 0x1379c2d (2589 bytes)
// Symbol:               _ZN6glotv39EventListC1Ev
// Demangled:            glotv3::EventList::EventList(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x137a150 .. 0x137a60f (1215 bytes)
// Symbol:               _ZNK6glotv39EventList15serializeToJsonERSt6vectorIcSaIcEE
// Demangled:            glotv3::EventList::serializeToJson(std::vector<char,std::allocator<char>> &)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x137a610 .. 0x137aa7b (1131 bytes)
// Symbol:               _ZN6glotv39EventList19deserializeFromJsonERSt6vectorIcSaIcEE
// Demangled:            glotv3::EventList::deserializeFromJson(std::vector<char,std::allocator<char>> &)
// ============================================================================
