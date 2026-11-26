#include "Core/Utils/DecompTypes.h"
#include "gameswf_TriangleIntersector.h"

// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_TriangleIntersector.cpp
// Library: gameswf | Module: gameswf_TriangleIntersector
// Binary Address Span: 0x10ef520 .. 0x10ef6f0 (3 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x10ef520 (size: 371 bytes)
// Symbol:    _ZN7gameswf19TriangleIntersectorC1Ev
// Demangled: gameswf::TriangleIntersector::TriangleIntersector(void)
// ============================================================================
// Alternative name is '_ZN7gameswf19TriangleIntersectorC2Ev'
struct gameswf::TriangleIntersector::Self *gameswf::TriangleIntersector::TriangleIntersector(
        gameswf::TriangleIntersector::Self *self)
{
  int v1;
  GLUtesselator *v2;

  v1 = opNew(0x40u);
  *(uint32_t *)(v1 + 4) = 0;
  *(uint32_t *)(v1 + 8) = 0;
  *(uint32_t *)(v1 + 12) = 0;
  *(uint32_t *)(v1 + 16) = 0;
  *(uint32_t *)(v1 + 20) = 0;
  *(uint32_t *)(v1 + 24) = 0;
  *(uint32_t *)(v1 + 28) = 0;
  *(uint32_t *)(v1 + 32) = 0;
  *(uint32_t *)(v1 + 36) = 0;
  *(uint32_t *)(v1 + 40) = 0;
  *(uint32_t *)(v1 + 44) = 0;
  *(uint32_t *)(v1 + 48) = 0;
  *(uint8_t *)(v1 + 52) = 0;
  *(uint8_t *)(v1 + 53) = 1;
  *(uint8_t *)(v1 + 54) = 0;
  *(uint8_t *)(v1 + 55) = 0;
  *(uint32_t *)(v1 + 56) = 1065353216;
  v2 = (GLUtesselator *)gluNewTess();
  *(uint32_t *)(v1 + 60) = (uint32_t)(uintptr_t)(v2);
  gluTessProperty(v2, 100140, 100134.0);
  gluTessProperty(*(GLUtesselator **)(v1 + 60), 100141, 0.0);
  gluTessCallback(*(GLUtesselator **)(v1 + 60), 100106, (void (*)())gameswf::TesselatorAccepter::callbackBegin);
  gluTessCallback(*(GLUtesselator **)(v1 + 60), 100107, (void (*)())gameswf::TesselatorAccepter::callbackVertex);
  gluTessCallback(*(GLUtesselator **)(v1 + 60), 100111, (void (*)())gameswf::TesselatorAccepter::callbackCombine);
  gluTessCallback(*(GLUtesselator **)(v1 + 60), 100109, (void (*)())gameswf::TesselatorAccepter::callbackError);
  gluTessCallback(*(GLUtesselator **)(v1 + 60), 100108, (void (*)())gameswf::TesselatorAccepter::callbackEndStrip);
  *(uint32_t *)self = v1;
  return self;
}
// ----------------------------------------------------------------------------
// Function: gameswf::TriangleIntersector::Destroy  (binary VA: 0x10ef6a0)
// Original: gameswf::TriangleIntersector::~TriangleIntersector
// ----------------------------------------------------------------------------
void gameswf::TriangleIntersector::Destroy(gameswf::TesselatorAccepter::Self **self)
{
  gameswf::Self *v1;

  v1 = (gameswf::Self *)(*self);
  if ( *self != nullptr )
  {
    gameswf::TesselatorAccepter::Destroy(*self);
    gameswf::free_internal(v1);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::TriangleIntersector::process  (binary VA: 0x10ef6f0)
// Original: gameswf::TriangleIntersector::process
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::TriangleIntersector::process(void **self, gameswf::Point::Self *a2, gameswf::Point::Self *a3, gameswf::array<gameswf::Point::Self> *a4)
{
  void **v4;
  uint32_t *v5;
  int v6;
  int v7;
  uint16_t *v8;
  double v9; // xmm1_8
  char *v10;
  double v11; // xmm2_8
  void *v12;
  float v13; // xmm0_4
  double v14; // xmm1_8
  void *v15;
  char *v16;
  double v17; // xmm2_8
  int v18;
  double v19; // xmm1_8
  void *v20;
  char *v21;
  double v22; // xmm2_8
  int v23;
  void *v24;
  double v25; // xmm0_8
  char *v26;
  double v27; // xmm1_8
  int v28;
  double v29; // xmm0_8
  void *v30;
  char *v31;
  double v32; // xmm1_8
  int v33;
  double v34; // xmm0_8
  void *v35;
  char *v36;
  double v37; // xmm1_8
  char *v38;
  gameswf::array<gameswf::Point::Self> *v39;
  int v40;
  int v41;
  int v42;
  int v43;
  gameswf::Self *result;
  int v45;
  double v46; // xmm1_8
  double v47; // xmm2_8
  char *v48;
  float *v49;
  float v50; // xmm2_4
  float v51; // xmm0_4
  int v52;
  int v53;
  int v54;
  int v55;
  double v56; // xmm1_8
  double v57; // xmm2_8
  char *v58;
  float *v59;
  float v60; // xmm2_4
  float v61; // xmm0_4
  int v62;
  double v63; // xmm2_8
  double v64; // xmm3_8
  char *v65;
  float *v66;
  float v67; // xmm3_4
  float v68; // xmm1_4
  int v69;
  double v70; // xmm2_8
  double v71; // xmm3_8
  char *v72;
  float *v73;
  float v74; // xmm3_4
  float v75; // xmm1_4
  int v76;
  double v77; // xmm3_8
  double v78; // xmm2_8
  char *v79;
  float *v80;
  float v81; // xmm2_4
  float v82; // xmm1_4
  int v83;
  double v84; // xmm1_8
  double v85; // xmm2_8
  char *v86;
  float *v87;
  float v88; // xmm2_4
  float v89; // xmm0_4
  double v90; // xmm0_8
  char *v91;
  double v92; // xmm1_8
  int v93;
  double v94; // xmm0_8
  void *v95;
  char *v96;
  double v97; // xmm1_8
  int v98;
  int v99;
  double v100; // xmm1_8
  double v101; // xmm2_8
  char *v102;
  float *v103;
  float v104; // xmm2_4
  float v105; // xmm0_4
  int v106;
  gameswf::Self *v107;
  int v108;
  gameswf::Self *v109;
  int v110;
  gameswf::Self *v111;
  int v112;
  gameswf::Self *v113;
  int v114;
  double v115; // xmm1_8
  double v116; // xmm2_8
  char *v117;
  float *v118;
  float v119; // xmm2_4
  float v120; // xmm0_4
  gameswf::Self *v121;
  int i;
  int v123;
  int v124;
  int v125;
  gameswf::Self *v126;
  int v127;
  gameswf::Self *v128;
  gameswf::Self *v129;
  gameswf::Self *v130;
  gameswf::Self *v131;
  gameswf::Self *v132;
  int v133;
  gameswf::Self *v134;
  int v135;
  gameswf::Self *v136;
  gameswf::Self *v137;
  gameswf::Self *v138;
  float v139;
  gameswf::array<gameswf::Point::Self> *v140;
  uint32_t *v141;
  uint32_t *v142;
  uint32_t *v143;
  uint32_t *v144;
  gameswf::array<gameswf::Point::Self> *v145;
  uint32_t *v146;
  uint32_t *v147;
  uint32_t *v148;
  uint32_t *v149;
  uint32_t *v150;
  uint32_t *v151;
  uint32_t *v152;
  uint32_t *v153;
  uint32_t *v154;
  uint32_t *v155;
  uint32_t *v156;
  uint32_t *v157;
  char *v158;
  int v159;
  int v160;
  uint32_t *v161;
  int v162;
  char *v163;
  int v164;
  gameswf::array<gameswf::Point::Self> *v165;
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
  gameswf::Self *v180;

  v4 = self;
  v5 = (uint32_t *)(*self);
  dword_21155C0 = 0;
  v161 = v5;
  gameswf::array_gameswf_Point_c7983d::resize((gameswf::array<gameswf::Point::Self> *)(v5 + 1), 0);
  gameswf::array_gameswf_Point_c7983d::resize((gameswf::array<gameswf::Point::Self> *)(v161 + 5), 0);
  v6 = v161[10];
  if ( v6 < 0 )
  {
    v7 = 2 * v6;
    do
    {
      v8 = (uint16_t *)(v161[9] + v7);
      if ( v8 != nullptr )
        *v8 = 0;
      v7 += 2;
      ++v6;
    }
    while ( v6 != 0 );
    v4 = self;
  }
  v161[10] = 0;
  v158 = (char *)*v4;
  gluTessBeginPolygon(*((GLUtesselator **)*v4 + 15), *v4);
  if ( v158[52] != 0 )
  {
    *(uint32_t *)v158 = 3;
    gameswf::array_gameswf_Point_c7983d::resize((gameswf::array<gameswf::Point::Self> *)(v158 + 4), 0);
  }
  v139 = (float)((float)((float)(*((float *)a3 + 4) - *(float *)a3) * (float)(*((float *)a3 + 3) - *((float *)a3 + 1)))
               + (float)((float)(*(float *)a3 - *((float *)a3 + 2)) * (float)(*((float *)a3 + 5) - *((float *)a3 + 1))))
       * (float)((float)((float)(*((float *)a2 + 4) - *(float *)a2) * (float)(*((float *)a2 + 3) - *((float *)a2 + 1)))
               + (float)((float)(*(float *)a2 - *((float *)a2 + 2)) * (float)(*((float *)a2 + 5) - *((float *)a2 + 1))));
  gluTessBeginContour(*((GLUtesselator **)*v4 + 15));
  v9 = *((float *)a2 + 1);
  v170 = dword_21155C0;
  v10 = (char *)&unk_20E55C0 + 24 * dword_21155C0;
  v11 = *(float *)a2;
  v12 = *v4;
  *((uint32_t *)v10 + 4) = 0;
  *((double *)v10 + 1) = v9;
  *((uint32_t *)v10 + 5) = 0;
  *(double *)v10 = v11;
  dword_21155C0 = v170 + 1;
  v13 = v139;
  if ( *((uint8_t *)v12 + 52) != 0 )
  {
    v76 = *((uint32_t *)v12 + 2);
    v77 = *((double *)v10 + 1);
    v78 = *(double *)v10;
    v160 = v76 + 1;
    v176 = *((uint32_t *)v12 + 3);
    if ( v176 >= v76 + 1 || *((uint32_t *)v12 + 4) != 0 )
    {
      v79 = *((char **)v12 + 1);
    }
    else
    {
      v108 = (v160 >> 1) + v160;
      *((uint32_t *)v12 + 3) = v108;
      if ( v108 != 0 )
      {
        v130 = *((gameswf::Self **)v12 + 1);
        v150 = (uint32_t *)(v12);
        if ( v130 != nullptr )
          v79 = (char *)gameswf::realloc_internal(v130, 8 * ((v160 >> 1) + v160), 8 * v176);
        else
          v79 = (char *)gameswf::malloc_internal(8 * v108);
        v12 = v150;
        v150[1] = (uint32_t)(uintptr_t)(v79);
        v76 = v150[2];
        v13 = v139;
      }
      else
      {
        v109 = *((gameswf::Self **)v12 + 1);
        if ( v109 != nullptr )
        {
          v142 = (uint32_t *)(v12);
          gameswf::free_internal(v109);
          v12 = v142;
          v76 = v142[2];
        }
        *((uint32_t *)v12 + 1) = 0;
        v79 = nullptr;
      }
    }
    v80 = (float *)&v79[8 * v76];
    if ( v80 != nullptr )
    {
      v81 = v78 * 0.05;
      v82 = 0.05 * v77;
      *v80 = v81;
      v80[1] = v82;
    }
    *((uint32_t *)v12 + 2) = v160;
  }
  else
  {
    gluTessVertex(*((GLUtesselator **)v12 + 15), (double *)v10, v10);
    v13 = v139;
  }
  v14 = *((float *)a2 + 3);
  v15 = *v4;
  v16 = (char *)&unk_20E55C0 + 24 * dword_21155C0;
  v17 = *((float *)a2 + 2);
  v18 = dword_21155C0;
  *((uint32_t *)v16 + 4) = 0;
  *((uint32_t *)v16 + 5) = 0;
  *((double *)v16 + 1) = v14;
  dword_21155C0 = v18 + 1;
  *(double *)v16 = v17;
  if ( *((uint8_t *)v15 + 52) != 0 )
  {
    v69 = *((uint32_t *)v15 + 2);
    v70 = *((double *)v16 + 1);
    v71 = *(double *)v16;
    v159 = v69 + 1;
    v175 = *((uint32_t *)v15 + 3);
    if ( v69 + 1 <= v175 || *((uint32_t *)v15 + 4) != 0 )
    {
      v72 = *((char **)v15 + 1);
    }
    else
    {
      v110 = (v159 >> 1) + v159;
      *((uint32_t *)v15 + 3) = v110;
      if ( v110 != 0 )
      {
        v129 = *((gameswf::Self **)v15 + 1);
        v149 = (uint32_t *)(v15);
        if ( v129 != nullptr )
          v72 = (char *)gameswf::realloc_internal(v129, 8 * ((v159 >> 1) + v159), 8 * v175);
        else
          v72 = (char *)gameswf::malloc_internal(8 * v110);
        v15 = v149;
        v149[1] = (uint32_t)(uintptr_t)(v72);
        v69 = v149[2];
      }
      else
      {
        v111 = *((gameswf::Self **)v15 + 1);
        if ( v111 != nullptr )
        {
          v143 = (uint32_t *)(v15);
          gameswf::free_internal(v111);
          v15 = v143;
          v69 = v143[2];
        }
        *((uint32_t *)v15 + 1) = 0;
        v72 = nullptr;
      }
    }
    v73 = (float *)&v72[8 * v69];
    if ( v73 != nullptr )
    {
      v74 = v71 * 0.05;
      v75 = 0.05 * v70;
      *v73 = v74;
      v73[1] = v75;
    }
    *((uint32_t *)v15 + 2) = v159;
  }
  else
  {
    gluTessVertex(*((GLUtesselator **)v15 + 15), (double *)v16, v16);
  }
  v19 = *((float *)a2 + 5);
  v20 = *v4;
  v21 = (char *)&unk_20E55C0 + 24 * dword_21155C0;
  v22 = *((float *)a2 + 4);
  v23 = dword_21155C0;
  *((uint32_t *)v21 + 4) = 0;
  *((uint32_t *)v21 + 5) = 0;
  *((double *)v21 + 1) = v19;
  dword_21155C0 = v23 + 1;
  *(double *)v21 = v22;
  if ( *((uint8_t *)v20 + 52) != 0 )
  {
    v62 = *((uint32_t *)v20 + 2);
    v63 = *((double *)v21 + 1);
    v64 = *(double *)v21;
    v174 = v62 + 1;
    v166 = *((uint32_t *)v20 + 3);
    if ( v62 + 1 <= v166 || *((uint32_t *)v20 + 4) != 0 )
    {
      v65 = *((char **)v20 + 1);
    }
    else
    {
      v106 = (v174 >> 1) + v174;
      *((uint32_t *)v20 + 3) = v106;
      if ( v106 != 0 )
      {
        v151 = (uint32_t *)(v20);
        if ( *((uint32_t *)v20 + 1) != 0 )
          v65 = (char *)gameswf::realloc_internal(*((gameswf::Self **)v20 + 1), 8 * v106, 8 * v166);
        else
          v65 = (char *)gameswf::malloc_internal(8 * v106);
        v20 = v151;
        v151[1] = (uint32_t)(uintptr_t)(v65);
        v62 = v151[2];
      }
      else
      {
        v107 = *((gameswf::Self **)v20 + 1);
        if ( v107 != nullptr )
        {
          v141 = (uint32_t *)(v20);
          gameswf::free_internal(v107);
          v20 = v141;
          v62 = v141[2];
        }
        *((uint32_t *)v20 + 1) = 0;
        v65 = nullptr;
      }
    }
    v66 = (float *)&v65[8 * v62];
    if ( v66 != nullptr )
    {
      v67 = v64 * 0.05;
      v68 = 0.05 * v63;
      *v66 = v67;
      v66[1] = v68;
    }
    *((uint32_t *)v20 + 2) = v174;
  }
  else
  {
    gluTessVertex(*((GLUtesselator **)v20 + 15), (double *)v21, v21);
  }
  gluTessEndContour(*((GLUtesselator **)*v4 + 15));
  gluTessBeginContour(*((GLUtesselator **)*v4 + 15));
  v24 = *v4;
  if ( v13 < 0.0 )
  {
    v90 = *((float *)a3 + 5);
    v91 = (char *)&unk_20E55C0 + 24 * dword_21155C0;
    v92 = *((float *)a3 + 4);
    v93 = dword_21155C0;
    *((uint32_t *)v91 + 4) = 0;
    *((uint32_t *)v91 + 5) = 0;
    *((double *)v91 + 1) = v90;
    dword_21155C0 = v93 + 1;
    *(double *)v91 = v92;
    if ( *((uint8_t *)v24 + 52) != 0 )
    {
      v99 = *((uint32_t *)v24 + 2);
      v100 = *((double *)v91 + 1);
      v101 = *(double *)v91;
      v178 = v99 + 1;
      v168 = *((uint32_t *)v24 + 3);
      if ( v99 + 1 <= v168 || *((uint32_t *)v24 + 4) != 0 )
      {
        v102 = *((char **)v24 + 1);
      }
      else
      {
        v133 = (v178 >> 1) + v178;
        *((uint32_t *)v24 + 3) = v133;
        if ( v133 != 0 )
        {
          v134 = *((gameswf::Self **)v24 + 1);
          v154 = (uint32_t *)(v24);
          if ( v134 != nullptr )
            v102 = (char *)gameswf::realloc_internal(v134, 8 * ((v178 >> 1) + v178), 8 * v168);
          else
            v102 = (char *)gameswf::malloc_internal(8 * v133);
          v24 = v154;
          v154[1] = (uint32_t)(uintptr_t)(v102);
          v99 = v154[2];
        }
        else
        {
          v137 = *((gameswf::Self **)v24 + 1);
          if ( v137 != nullptr )
          {
            v156 = (uint32_t *)(v24);
            gameswf::free_internal(v137);
            v24 = v156;
            v99 = v156[2];
          }
          *((uint32_t *)v24 + 1) = 0;
          v102 = nullptr;
        }
      }
      v103 = (float *)&v102[8 * v99];
      if ( v103 != nullptr )
      {
        v104 = v101 * 0.05;
        v105 = 0.05 * v100;
        *v103 = v104;
        v103[1] = v105;
      }
      *((uint32_t *)v24 + 2) = v178;
    }
    else
    {
      gluTessVertex(*((GLUtesselator **)v24 + 15), (double *)v91, v91);
    }
    v94 = *((float *)a3 + 3);
    v95 = *v4;
    v96 = (char *)&unk_20E55C0 + 24 * dword_21155C0;
    v97 = *((float *)a3 + 2);
    v98 = dword_21155C0;
    *((uint32_t *)v96 + 4) = 0;
    *((uint32_t *)v96 + 5) = 0;
    *((double *)v96 + 1) = v94;
    dword_21155C0 = v98 + 1;
    *(double *)v96 = v97;
    if ( *((uint8_t *)v95 + 52) != 0 )
    {
      v114 = *((uint32_t *)v95 + 2);
      v115 = *((double *)v96 + 1);
      v116 = *(double *)v96;
      v179 = v114 + 1;
      v169 = *((uint32_t *)v95 + 3);
      if ( v114 + 1 <= v169 || *((uint32_t *)v95 + 4) != 0 )
      {
        v117 = *((char **)v95 + 1);
      }
      else
      {
        v135 = (v179 >> 1) + v179;
        *((uint32_t *)v95 + 3) = v135;
        if ( v135 != 0 )
        {
          v136 = *((gameswf::Self **)v95 + 1);
          v155 = (uint32_t *)(v95);
          if ( v136 != nullptr )
            v117 = (char *)gameswf::realloc_internal(v136, 8 * ((v179 >> 1) + v179), 8 * v169);
          else
            v117 = (char *)gameswf::malloc_internal(8 * v135);
          v95 = v155;
          v155[1] = (uint32_t)(uintptr_t)(v117);
          v114 = v155[2];
        }
        else
        {
          v138 = *((gameswf::Self **)v95 + 1);
          if ( v138 != nullptr )
          {
            v157 = (uint32_t *)(v95);
            gameswf::free_internal(v138);
            v95 = v157;
            v114 = v157[2];
          }
          *((uint32_t *)v95 + 1) = 0;
          v117 = nullptr;
        }
      }
      v118 = (float *)&v117[8 * v114];
      if ( v118 != nullptr )
      {
        v119 = v116 * 0.05;
        v120 = 0.05 * v115;
        *v118 = v119;
        v118[1] = v120;
      }
      *((uint32_t *)v95 + 2) = v179;
    }
    else
    {
      gluTessVertex(*((GLUtesselator **)v95 + 15), (double *)v96, v96);
    }
    v34 = *((float *)a3 + 1);
    v171 = dword_21155C0;
    v35 = *v4;
    v36 = (char *)&unk_20E55C0 + 24 * dword_21155C0;
    v37 = *(float *)a3;
  }
  else
  {
    v25 = *((float *)a3 + 1);
    v26 = (char *)&unk_20E55C0 + 24 * dword_21155C0;
    v27 = *(float *)a3;
    v28 = dword_21155C0;
    *((uint32_t *)v26 + 4) = 0;
    *((uint32_t *)v26 + 5) = 0;
    *((double *)v26 + 1) = v25;
    dword_21155C0 = v28 + 1;
    *(double *)v26 = v27;
    if ( *((uint8_t *)v24 + 52) != 0 )
    {
      v45 = *((uint32_t *)v24 + 2);
      v46 = *((double *)v26 + 1);
      v47 = *(double *)v26;
      v172 = v45 + 1;
      v164 = *((uint32_t *)v24 + 3);
      if ( v45 + 1 <= v164 || *((uint32_t *)v24 + 4) != 0 )
      {
        v48 = *((char **)v24 + 1);
      }
      else
      {
        v127 = (v172 >> 1) + v172;
        *((uint32_t *)v24 + 3) = v127;
        if ( v127 != 0 )
        {
          v132 = *((gameswf::Self **)v24 + 1);
          v153 = (uint32_t *)(v24);
          if ( v132 != nullptr )
            v48 = (char *)gameswf::realloc_internal(v132, 8 * ((v172 >> 1) + v172), 8 * v164);
          else
            v48 = (char *)gameswf::malloc_internal(8 * v127);
          v24 = v153;
          v153[1] = (uint32_t)(uintptr_t)(v48);
          v45 = v153[2];
        }
        else
        {
          v128 = *((gameswf::Self **)v24 + 1);
          if ( v128 != nullptr )
          {
            v147 = (uint32_t *)(v24);
            gameswf::free_internal(v128);
            v24 = v147;
            v45 = v147[2];
          }
          *((uint32_t *)v24 + 1) = 0;
          v48 = nullptr;
        }
      }
      v49 = (float *)&v48[8 * v45];
      if ( v49 != nullptr )
      {
        v50 = v47 * 0.05;
        v51 = 0.05 * v46;
        *v49 = v50;
        v49[1] = v51;
      }
      *((uint32_t *)v24 + 2) = v172;
    }
    else
    {
      gluTessVertex(*((GLUtesselator **)v24 + 15), (double *)v26, v26);
    }
    v29 = *((float *)a3 + 3);
    v30 = *v4;
    v31 = (char *)&unk_20E55C0 + 24 * dword_21155C0;
    v32 = *((float *)a3 + 2);
    v33 = dword_21155C0;
    *((uint32_t *)v31 + 4) = 0;
    *((uint32_t *)v31 + 5) = 0;
    *((double *)v31 + 1) = v29;
    dword_21155C0 = v33 + 1;
    *(double *)v31 = v32;
    if ( *((uint8_t *)v30 + 52) != 0 )
    {
      v83 = *((uint32_t *)v30 + 2);
      v84 = *((double *)v31 + 1);
      v85 = *(double *)v31;
      v177 = v83 + 1;
      v167 = *((uint32_t *)v30 + 3);
      if ( v83 + 1 <= v167 || *((uint32_t *)v30 + 4) != 0 )
      {
        v86 = *((char **)v30 + 1);
      }
      else
      {
        v125 = (v177 >> 1) + v177;
        *((uint32_t *)v30 + 3) = v125;
        if ( v125 != 0 )
        {
          v131 = *((gameswf::Self **)v30 + 1);
          v152 = (uint32_t *)(v30);
          if ( v131 != nullptr )
            v86 = (char *)gameswf::realloc_internal(v131, 8 * ((v177 >> 1) + v177), 8 * v167);
          else
            v86 = (char *)gameswf::malloc_internal(8 * v125);
          v30 = v152;
          v152[1] = (uint32_t)(uintptr_t)(v86);
          v83 = v152[2];
        }
        else
        {
          v126 = *((gameswf::Self **)v30 + 1);
          if ( v126 != nullptr )
          {
            v146 = (uint32_t *)(v30);
            gameswf::free_internal(v126);
            v30 = v146;
            v83 = v146[2];
          }
          *((uint32_t *)v30 + 1) = 0;
          v86 = nullptr;
        }
      }
      v87 = (float *)&v86[8 * v83];
      if ( v87 != nullptr )
      {
        v88 = v85 * 0.05;
        v89 = 0.05 * v84;
        *v87 = v88;
        v87[1] = v89;
      }
      *((uint32_t *)v30 + 2) = v177;
    }
    else
    {
      gluTessVertex(*((GLUtesselator **)v30 + 15), (double *)v31, v31);
    }
    v34 = *((float *)a3 + 5);
    v171 = dword_21155C0;
    v35 = *v4;
    v36 = (char *)&unk_20E55C0 + 24 * dword_21155C0;
    v37 = *((float *)a3 + 4);
  }
  *(double *)v36 = v37;
  *((uint32_t *)v36 + 4) = 0;
  *((double *)v36 + 1) = v34;
  *((uint32_t *)v36 + 5) = 0;
  dword_21155C0 = v171 + 1;
  if ( *((uint8_t *)v35 + 52) != 0 )
  {
    v55 = *((uint32_t *)v35 + 2);
    v56 = *((double *)v36 + 1);
    v57 = *(double *)v36;
    v173 = v55 + 1;
    v162 = *((uint32_t *)v35 + 3);
    if ( v55 + 1 <= v162 || *((uint32_t *)v35 + 4) != 0 )
    {
      v58 = *((char **)v35 + 1);
    }
    else
    {
      v112 = (v173 >> 1) + v173;
      *((uint32_t *)v35 + 3) = v112;
      if ( v112 != 0 )
      {
        v148 = (uint32_t *)(v35);
        if ( *((uint32_t *)v35 + 1) != 0 )
          v58 = (char *)gameswf::realloc_internal(*((gameswf::Self **)v35 + 1), 8 * v112, 8 * v162);
        else
          v58 = (char *)gameswf::malloc_internal(8 * v112);
        v35 = v148;
        v148[1] = (uint32_t)(uintptr_t)(v58);
        v55 = v148[2];
      }
      else
      {
        v113 = *((gameswf::Self **)v35 + 1);
        if ( v113 != nullptr )
        {
          v144 = (uint32_t *)(v35);
          gameswf::free_internal(v113);
          v35 = v144;
          v55 = v144[2];
        }
        *((uint32_t *)v35 + 1) = 0;
        v58 = nullptr;
      }
    }
    v59 = (float *)&v58[8 * v55];
    if ( v59 != nullptr )
    {
      v60 = v57 * 0.05;
      v61 = 0.05 * v56;
      *v59 = v60;
      v59[1] = v61;
    }
    *((uint32_t *)v35 + 2) = v173;
  }
  else
  {
    gluTessVertex(*((GLUtesselator **)v35 + 15), (double *)v36, v36);
  }
  gluTessEndContour(*((GLUtesselator **)*v4 + 15));
  v38 = (char *)*v4;
  gluTessEndPolygon(*((GLUtesselator **)v38 + 15));
  if ( v38[53] != 0 )
  {
    v165 = (gameswf::array<gameswf::Point::Self> *)(v38 + 20);
    gameswf::array_gameswf_Point_c7983d::resize(a4, *((uint32_t *)v38 + 6));
    if ( *((int *)a4 + 1) > 0 )
    {
      v52 = 0;
      do
      {
        v53 = *(uint32_t *)a4;
        v54 = *(uint32_t *)(*(uint32_t *)v165 + 8 * v52 + 4);
        *(uint32_t *)(v53 + 8 * v52) = *(uint32_t *)(*(uint32_t *)v165 + 8 * v52);
        *(uint32_t *)(v53 + 8 * v52++ + 4) = v54;
      }
      while ( v52 < *((uint32_t *)a4 + 1) );
    }
    return (gameswf::Self *)gameswf::array_gameswf_Point_c7983d::resize(v165, 0);
  }
  else
  {
    v140 = (gameswf::array<gameswf::Point::Self> *)(v38 + 20);
    gameswf::array_gameswf_Point_c7983d::resize(a4, *((uint32_t *)v38 + 6));
    v39 = (gameswf::array<gameswf::Point::Self> *)(v38 + 20);
    if ( *((int *)a4 + 1) > 0 )
    {
      v40 = 0;
      v163 = v38;
      do
      {
        v41 = *(uint32_t *)(*(uint32_t *)v140 + 8 * v40 + 4);
        v42 = *(uint32_t *)a4;
        *(uint32_t *)(v42 + 8 * v40) = *(uint32_t *)(*(uint32_t *)v140 + 8 * v40);
        *(uint32_t *)(v42 + 8 * v40++ + 4) = v41;
      }
      while ( v40 < *((uint32_t *)a4 + 1) );
      v38 = v163;
      v39 = v140;
    }
    v43 = *((uint32_t *)v38 + 10);
    if ( v43 > 0 )
    {
      v145 = v39;
      v121 = (gameswf::Self *)gameswf::malloc_internal(2 * (v43 + (v43 >> 1)));
      v180 = v121;
      for ( i = 0; i != v43; ++i )
      {
        if ( v121 != nullptr )
          *(uint16_t *)v121 = 0;
        v121 = (gameswf::Self *)((char *)v121 + 2);
      }
      v123 = 2 * i;
      v124 = 0;
      do
      {
        *(uint16_t *)((char *)v180 + v124) = *(uint16_t *)(*((uint32_t *)v38 + 9) + v124);
        v124 += 2;
      }
      while ( v124 != v123 );
      gameswf::array_gameswf_Point_c7983d::resize(v145, 0);
      result = v180;
      if ( v180 != nullptr )
        return (gameswf::Self *)gameswf::free_internal(v180);
    }
    else
    {
      result = (gameswf::Self *)gameswf::array_gameswf_Point_c7983d::resize(v39, 0);
      if ( v43 < 0 )
      {
        result = (gameswf::Self *)(2 * v43);
        do
        {
          if ( result != nullptr )
            *(uint16_t *)result = 0;
          result = (gameswf::Self *)((char *)result + 2);
          ++v43;
        }
        while ( v43 != 0 );
      }
    }
  }
  return result;
}


