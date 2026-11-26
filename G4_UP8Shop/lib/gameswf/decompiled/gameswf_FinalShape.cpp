#include "Core/Utils/DecompTypes.h"
#include "gameswf_FinalShape.h"

// ----------------------------------------------------------------------------
// Function: gameswf::FinalShape::addCurve  (binary VA: 0x10f5780)
// Original: gameswf::FinalShape::addCurve
// ----------------------------------------------------------------------------
int gameswf::FinalShape::addCurve(gameswf::FinalShape::Self *self, float a2, float a3, float a4, float a5, float a6, float a7)
{
  float v7; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm5_4
  float v26; // xmm5_4
  float v27; // xmm2_4
  float v28; // xmm6_4
  float v29; // xmm1_4
  float v30; // xmm7_4
  float v31; // xmm4_4
  float v32; // xmm3_4
  float v33; // xmm5_4
  float v34; // xmm6_4
  int v35;
  int v36;
  int v37;
  gameswf::Self *v38;
  int v39;
  float *v40;
  int v41;
  float v42; // xmm1_4
  float v43; // xmm3_4
  float v44; // xmm2_4
  int v45;
  int v46;
  float *v47;
  float v48; // xmm2_4
  int v49;
  float v50; // xmm5_4
  float v51; // xmm3_4
  float v52; // xmm1_4
  float v53; // xmm2_4
  int v54;
  int v55;
  int v56;
  int v57;
  float *v58;
  float v59; // xmm2_4
  int v60;
  float v61; // xmm5_4
  float v62; // xmm3_4
  float v63; // xmm1_4
  float v64; // xmm2_4
  int v65;
  int v66;
  int v67;
  int v68;
  float *v69;
  float v70; // xmm2_4
  int v71;
  float v72; // xmm5_4
  float v73; // xmm3_4
  float v74; // xmm1_4
  float v75; // xmm2_4
  int v76;
  int v77;
  int v78;
  int v79;
  float *v80;
  float v81; // xmm2_4
  int v82;
  float v83; // xmm5_4
  float v84; // xmm3_4
  float v85; // xmm1_4
  float v86; // xmm2_4
  int v87;
  int v88;
  int v89;
  int v90;
  float *v91;
  float v92; // xmm2_4
  int v93;
  float v94; // xmm5_4
  float v95; // xmm3_4
  float v96; // xmm1_4
  float v97; // xmm2_4
  int v98;
  int v99;
  int v100;
  int v101;
  float *v102;
  float v103; // xmm2_4
  int v104;
  float v105; // xmm5_4
  float v106; // xmm3_4
  float v107; // xmm1_4
  float v108; // xmm2_4
  int v109;
  int v110;
  int v111;
  int v112;
  float *v113;
  int v114;
  int result;
  int v116;
  int v117;
  int v118;
  int v119;
  float *v120;
  float v121; // xmm2_4
  int v122;
  float v123; // xmm5_4
  float v124; // xmm3_4
  float v125; // xmm1_4
  float v126; // xmm2_4
  int v127;
  int v128;
  int v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;
  float v145;
  float v146;
  float v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float v152;
  float v153;
  float v154;
  float v155;
  float v156;
  int v157;
  float v158;
  float v159;
  float v160;
  int v161;
  float v162;
  float v163;
  gameswf::Self *v164;
  int v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  int v171;

  v7 = a2;
  v8 = a3;
  v9 = (float)(a6 + a2) * 0.5;
  v10 = (float)(a7 + a3) * 0.5;
  v148 = (float)(a4 + v9) * 0.5;
  v147 = (float)(a5 + v10) * 0.5;
  v156 = *((float *)self + 2);
  if ( v156 > (float)(fabs(v10 - v147) + fabs(v9 - v148)) )
  {
    v110 = *((uint32_t *)self + 9);
    v38 = *((gameswf::Self **)self + 8);
  }
  else
  {
    while ( 1 )
    {
      v139 = (float)(a5 + v8) * 0.5;
      v138 = (float)(a4 + v7) * 0.5;
      v11 = (float)(v147 + v8) * 0.5;
      v12 = (float)(v148 + v7) * 0.5;
      v141 = (float)(v139 + v11) * 0.5;
      v140 = (float)(v138 + v12) * 0.5;
      if ( v156 > (float)(fabs(v11 - v141) + fabs(v12 - v140)) )
      {
        v99 = *((uint32_t *)self + 9);
        v38 = *((gameswf::Self **)self + 8);
      }
      else
      {
        while ( 1 )
        {
          v136 = (float)(v139 + v8) * 0.5;
          v135 = (float)(v138 + v7) * 0.5;
          v13 = (float)(v140 + v7) * 0.5;
          v14 = (float)(v141 + v8) * 0.5;
          v144 = (float)(v135 + v13) * 0.5;
          v143 = (float)(v136 + v14) * 0.5;
          if ( v156 > (float)(fabs(v13 - v144) + fabs(v14 - v143)) )
          {
            v88 = *((uint32_t *)self + 9);
            v38 = *((gameswf::Self **)self + 8);
          }
          else
          {
            while ( 1 )
            {
              v137 = (float)(v136 + v8) * 0.5;
              v134 = (float)(v135 + v7) * 0.5;
              v15 = (float)(v143 + v8) * 0.5;
              v16 = (float)(v144 + v7) * 0.5;
              v149 = (float)(v137 + v15) * 0.5;
              v142 = (float)(v134 + v16) * 0.5;
              if ( v156 > (float)(fabs(v15 - v149) + fabs(v16 - v142)) )
              {
                v77 = *((uint32_t *)self + 9);
                v38 = *((gameswf::Self **)self + 8);
              }
              else
              {
                while ( 1 )
                {
                  v132 = (float)(v137 + v8) * 0.5;
                  v133 = (float)(v134 + v7) * 0.5;
                  v17 = (float)(v149 + v8) * 0.5;
                  v18 = (float)(v142 + v7) * 0.5;
                  v146 = (float)(v132 + v17) * 0.5;
                  v145 = (float)(v133 + v18) * 0.5;
                  if ( v156 > (float)(fabs(v17 - v146) + fabs(v18 - v145)) )
                  {
                    v117 = *((uint32_t *)self + 9);
                    v38 = *((gameswf::Self **)self + 8);
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v131 = (float)(v132 + v8) * 0.5;
                      v130 = (float)(v133 + v7) * 0.5;
                      v19 = (float)(v146 + v8) * 0.5;
                      v20 = (float)(v145 + v7) * 0.5;
                      v150 = (float)(v131 + v19) * 0.5;
                      v151 = (float)(v130 + v20) * 0.5;
                      if ( v156 > (float)(fabs(v19 - v150) + fabs(v20 - v151)) )
                      {
                        v66 = *((uint32_t *)self + 9);
                        v38 = *((gameswf::Self **)self + 8);
                      }
                      else
                      {
                        while ( 1 )
                        {
                          v153 = (float)(v131 + v8) * 0.5;
                          v152 = (float)(v130 + v7) * 0.5;
                          v21 = (float)(v150 + v8) * 0.5;
                          v22 = (float)(v151 + v7) * 0.5;
                          v155 = (float)(v153 + v21) * 0.5;
                          v154 = (float)(v152 + v22) * 0.5;
                          if ( v156 > (float)(fabs(v21 - v155) + fabs(v22 - v154)) )
                          {
                            v55 = *((uint32_t *)self + 9);
                            v38 = *((gameswf::Self **)self + 8);
                          }
                          else
                          {
                            while ( 1 )
                            {
                              v159 = (float)(v153 + v8) * 0.5;
                              v158 = (float)(v152 + v7) * 0.5;
                              v23 = (float)(v155 + v8) * 0.5;
                              v24 = (float)(v154 + v7) * 0.5;
                              v25 = (float)(v158 + v24) * 0.5;
                              v162 = (float)(v159 + v23) * 0.5;
                              v160 = v25;
                              if ( v156 > (float)(fabs(v23 - v162) + fabs(v24 - v25)) )
                              {
                                v37 = *((uint32_t *)self + 9);
                                v38 = *((gameswf::Self **)self + 8);
                              }
                              else
                              {
                                while ( 1 )
                                {
                                  v26 = (float)(v25 + v7) * 0.5;
                                  v27 = (float)(v158 + v7) * 0.5;
                                  v28 = (float)(v162 + v8) * 0.5;
                                  v29 = (float)(v159 + v8) * 0.5;
                                  v163 = (float)(v26 + v27) * 0.5;
                                  v30 = (float)(v28 + v29) * 0.5;
                                  if ( v156 <= (float)(fabs(v28 - v30) + fabs(v26 - v163)) )
                                  {
                                    while ( 1 )
                                    {
                                      gameswf::FinalShape::addCurve(
                                        self,
                                        v7,
                                        v8,
                                        (float)(v27 + v7) * 0.5,
                                        (float)(v29 + v8) * 0.5,
                                        v163,
                                        v30);
                                      v29 = (float)(v29 + v162) * 0.5;
                                      v27 = (float)(v27 + v160) * 0.5;
                                      v31 = (float)(v163 + v160) * 0.5;
                                      v32 = (float)(v162 + v30) * 0.5;
                                      v33 = (float)(v27 + v31) * 0.5;
                                      v34 = (float)(v29 + v32) * 0.5;
                                      if ( (float)(fabs(v32 - v34) + fabs(v31 - v33)) < *((float *)self + 2) )
                                        break;
                                      v8 = v30;
                                      v30 = v34;
                                      v7 = v163;
                                      v163 = v33;
                                    }
                                  }
                                  v35 = *((uint32_t *)self + 9);
                                  v36 = *((uint32_t *)self + 10);
                                  v37 = v35 + 1;
                                  if ( v35 + 1 <= v36 || *((uint32_t *)self + 11) != 0 )
                                  {
                                    v38 = *((gameswf::Self **)self + 8);
                                    v39 = *((uint32_t *)self + 9);
                                  }
                                  else
                                  {
                                    v157 = v37 + (v37 >> 1);
                                    *((uint32_t *)self + 10) = v157;
                                    v164 = *((gameswf::Self **)self + 8);
                                    if ( v157 != 0 )
                                    {
                                      v129 = v35;
                                      v38 = *((uint32_t *)self + 8) != 0
                                          ? (gameswf::Self *)gameswf::realloc_internal(v164, 8 * v157, 8 * v36)
                                          : (gameswf::Self *)gameswf::malloc_internal(8 * v157);
                                      *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v38);
                                      v39 = *((uint32_t *)self + 9);
                                      v35 = v129;
                                    }
                                    else
                                    {
                                      v39 = v35;
                                      if ( v164 != nullptr )
                                      {
                                        v128 = v35;
                                        gameswf::free_internal(v164);
                                        v39 = *((uint32_t *)self + 9);
                                        v35 = v128;
                                      }
                                      *((uint32_t *)self + 8) = 0;
                                      v38 = nullptr;
                                    }
                                  }
                                  v40 = (float *)((char *)v38 + 8 * v39);
                                  if ( v40 != nullptr )
                                  {
                                    *v40 = v160;
                                    v40[1] = v162;
                                    v38 = *((gameswf::Self **)self + 8);
                                  }
                                  *((uint32_t *)self + 9) = v37;
                                  v41 = *((uint32_t *)v38 + 2 * v35 + 1);
                                  *((uint32_t *)self + 12) = *((uint32_t *)v38 + 2 * v35);
                                  *((uint32_t *)self + 13) = v41;
                                  v159 = (float)(v159 + v155) * 0.5;
                                  v42 = (float)(v162 + v155) * 0.5;
                                  v158 = (float)(v158 + v154) * 0.5;
                                  v156 = *((float *)self + 2);
                                  v43 = (float)(v160 + v154) * 0.5;
                                  v44 = (float)(v158 + v43) * 0.5;
                                  if ( v156 > (float)(fabs(v42 - (float)((float)(v159 + v42) * 0.5)) + fabs(v43 - v44)) )
                                    break;
                                  v8 = v162;
                                  v25 = v44;
                                  v162 = (float)(v159 + v42) * 0.5;
                                  v7 = v160;
                                  v160 = v44;
                                }
                              }
                              v161 = v37 + 1;
                              v45 = *((uint32_t *)self + 10);
                              v46 = v37;
                              if ( v37 + 1 > v45 && *((uint32_t *)self + 11) == 0 )
                              {
                                v54 = v161 + (v161 >> 1);
                                *((uint32_t *)self + 10) = v54;
                                if ( v54 != 0 )
                                {
                                  if ( v38 != nullptr )
                                    v38 = (gameswf::Self *)gameswf::realloc_internal(v38, 8 * v54, 8 * v45);
                                  else
                                    v38 = (gameswf::Self *)gameswf::malloc_internal(8 * v54);
                                  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v38);
                                  v46 = *((uint32_t *)self + 9);
                                }
                                else
                                {
                                  v46 = v37;
                                  if ( v38 != nullptr )
                                  {
                                    gameswf::free_internal(v38);
                                    v46 = *((uint32_t *)self + 9);
                                  }
                                  *((uint32_t *)self + 8) = 0;
                                  v38 = nullptr;
                                }
                              }
                              v47 = (float *)((char *)v38 + 8 * v46);
                              if ( v47 != nullptr )
                              {
                                *v47 = v154;
                                v47[1] = v155;
                                v38 = *((gameswf::Self **)self + 8);
                              }
                              *((uint32_t *)self + 9) = v161;
                              v48 = v152 + v151;
                              v49 = *((uint32_t *)v38 + 2 * v37 + 1);
                              *((uint32_t *)self + 12) = *((uint32_t *)v38 + 2 * v37);
                              v50 = *((float *)self + 2);
                              *((uint32_t *)self + 13) = v49;
                              v153 = (float)(v153 + v150) * 0.5;
                              v51 = (float)(v154 + v151) * 0.5;
                              v152 = (float)(v152 + v151) * 0.5;
                              v156 = v50;
                              v52 = (float)(v155 + v150) * 0.5;
                              v53 = (float)((float)(v48 * 0.5) + v51) * 0.5;
                              if ( v50 > (float)(fabs(v52 - (float)((float)(v153 + v52) * 0.5)) + fabs(v51 - v53)) )
                                break;
                              v8 = v155;
                              v155 = (float)(v153 + v52) * 0.5;
                              v7 = v154;
                              v154 = v53;
                            }
                            v55 = v37 + 1;
                          }
                          v56 = *((uint32_t *)self + 10);
                          v165 = v55 + 1;
                          v57 = v55;
                          if ( v55 + 1 > v56 && *((uint32_t *)self + 11) == 0 )
                          {
                            v65 = v165 + (v165 >> 1);
                            *((uint32_t *)self + 10) = v65;
                            if ( v65 != 0 )
                            {
                              if ( v38 != nullptr )
                                v38 = (gameswf::Self *)gameswf::realloc_internal(v38, 8 * v65, 8 * v56);
                              else
                                v38 = (gameswf::Self *)gameswf::malloc_internal(8 * v65);
                              *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v38);
                              v57 = *((uint32_t *)self + 9);
                            }
                            else
                            {
                              v57 = v55;
                              if ( v38 != nullptr )
                              {
                                gameswf::free_internal(v38);
                                v57 = *((uint32_t *)self + 9);
                              }
                              *((uint32_t *)self + 8) = 0;
                              v38 = nullptr;
                            }
                          }
                          v58 = (float *)((char *)v38 + 8 * v57);
                          if ( v58 != nullptr )
                          {
                            *v58 = v151;
                            v58[1] = v150;
                            v38 = *((gameswf::Self **)self + 8);
                          }
                          *((uint32_t *)self + 9) = v165;
                          v59 = v130 + v145;
                          v60 = *((uint32_t *)v38 + 2 * v55 + 1);
                          *((uint32_t *)self + 12) = *((uint32_t *)v38 + 2 * v55);
                          v61 = *((float *)self + 2);
                          *((uint32_t *)self + 13) = v60;
                          v131 = (float)(v131 + v146) * 0.5;
                          v62 = (float)(v151 + v145) * 0.5;
                          v130 = (float)(v130 + v145) * 0.5;
                          v156 = v61;
                          v63 = (float)(v150 + v146) * 0.5;
                          v64 = (float)((float)(v59 * 0.5) + v62) * 0.5;
                          if ( v61 > (float)(fabs(v63 - (float)((float)(v131 + v63) * 0.5)) + fabs(v62 - v64)) )
                            break;
                          v8 = v150;
                          v150 = (float)(v131 + v63) * 0.5;
                          v7 = v151;
                          v151 = v64;
                        }
                        v66 = v55 + 1;
                      }
                      v67 = *((uint32_t *)self + 10);
                      v166 = v66 + 1;
                      v68 = v66;
                      if ( v66 + 1 > v67 && *((uint32_t *)self + 11) == 0 )
                      {
                        v76 = v166 + (v166 >> 1);
                        *((uint32_t *)self + 10) = v76;
                        if ( v76 != 0 )
                        {
                          if ( v38 != nullptr )
                            v38 = (gameswf::Self *)gameswf::realloc_internal(v38, 8 * v76, 8 * v67);
                          else
                            v38 = (gameswf::Self *)gameswf::malloc_internal(8 * v76);
                          *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v38);
                          v68 = *((uint32_t *)self + 9);
                        }
                        else
                        {
                          v68 = v66;
                          if ( v38 != nullptr )
                          {
                            gameswf::free_internal(v38);
                            v68 = *((uint32_t *)self + 9);
                          }
                          *((uint32_t *)self + 8) = 0;
                          v38 = nullptr;
                        }
                      }
                      v69 = (float *)((char *)v38 + 8 * v68);
                      if ( v69 != nullptr )
                      {
                        *v69 = v145;
                        v69[1] = v146;
                        v38 = *((gameswf::Self **)self + 8);
                      }
                      *((uint32_t *)self + 9) = v166;
                      v70 = v133 + v142;
                      v71 = *((uint32_t *)v38 + 2 * v66 + 1);
                      *((uint32_t *)self + 12) = *((uint32_t *)v38 + 2 * v66);
                      v72 = *((float *)self + 2);
                      *((uint32_t *)self + 13) = v71;
                      v132 = (float)(v132 + v149) * 0.5;
                      v73 = (float)(v145 + v142) * 0.5;
                      v133 = (float)(v133 + v142) * 0.5;
                      v156 = v72;
                      v74 = (float)(v146 + v149) * 0.5;
                      v75 = (float)((float)(v70 * 0.5) + v73) * 0.5;
                      if ( v72 > (float)(fabs(v74 - (float)((float)(v132 + v74) * 0.5)) + fabs(v73 - v75)) )
                        break;
                      v8 = v146;
                      v146 = (float)(v132 + v74) * 0.5;
                      v7 = v145;
                      v145 = v75;
                    }
                    v117 = v66 + 1;
                  }
                  v118 = *((uint32_t *)self + 10);
                  v171 = v117 + 1;
                  v119 = v117;
                  if ( v117 + 1 > v118 && *((uint32_t *)self + 11) == 0 )
                  {
                    v127 = v171 + (v171 >> 1);
                    *((uint32_t *)self + 10) = v127;
                    if ( v127 != 0 )
                    {
                      if ( v38 != nullptr )
                        v38 = (gameswf::Self *)gameswf::realloc_internal(v38, 8 * v127, 8 * v118);
                      else
                        v38 = (gameswf::Self *)gameswf::malloc_internal(8 * v127);
                      *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v38);
                      v119 = *((uint32_t *)self + 9);
                    }
                    else
                    {
                      v119 = v117;
                      if ( v38 != nullptr )
                      {
                        gameswf::free_internal(v38);
                        v119 = *((uint32_t *)self + 9);
                      }
                      *((uint32_t *)self + 8) = 0;
                      v38 = nullptr;
                    }
                  }
                  v120 = (float *)((char *)v38 + 8 * v119);
                  if ( v120 != nullptr )
                  {
                    *v120 = v142;
                    v120[1] = v149;
                    v38 = *((gameswf::Self **)self + 8);
                  }
                  *((uint32_t *)self + 9) = v171;
                  v121 = v134 + v144;
                  v122 = *((uint32_t *)v38 + 2 * v117 + 1);
                  *((uint32_t *)self + 12) = *((uint32_t *)v38 + 2 * v117);
                  v123 = *((float *)self + 2);
                  *((uint32_t *)self + 13) = v122;
                  v137 = (float)(v137 + v143) * 0.5;
                  v124 = (float)(v142 + v144) * 0.5;
                  v134 = (float)(v134 + v144) * 0.5;
                  v156 = v123;
                  v125 = (float)(v149 + v143) * 0.5;
                  v126 = (float)((float)(v121 * 0.5) + v124) * 0.5;
                  if ( v123 > (float)(fabs(v125 - (float)((float)(v137 + v125) * 0.5)) + fabs(v124 - v126)) )
                    break;
                  v8 = v149;
                  v149 = (float)(v137 + v125) * 0.5;
                  v7 = v142;
                  v142 = v126;
                }
                v77 = v117 + 1;
              }
              v78 = *((uint32_t *)self + 10);
              v167 = v77 + 1;
              v79 = v77;
              if ( v77 + 1 > v78 && *((uint32_t *)self + 11) == 0 )
              {
                v87 = v167 + (v167 >> 1);
                *((uint32_t *)self + 10) = v87;
                if ( v87 != 0 )
                {
                  if ( v38 != nullptr )
                    v38 = (gameswf::Self *)gameswf::realloc_internal(v38, 8 * v87, 8 * v78);
                  else
                    v38 = (gameswf::Self *)gameswf::malloc_internal(8 * v87);
                  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v38);
                  v79 = *((uint32_t *)self + 9);
                }
                else
                {
                  v79 = v77;
                  if ( v38 != nullptr )
                  {
                    gameswf::free_internal(v38);
                    v79 = *((uint32_t *)self + 9);
                  }
                  *((uint32_t *)self + 8) = 0;
                  v38 = nullptr;
                }
              }
              v80 = (float *)((char *)v38 + 8 * v79);
              if ( v80 != nullptr )
              {
                *v80 = v144;
                v80[1] = v143;
                v38 = *((gameswf::Self **)self + 8);
              }
              *((uint32_t *)self + 9) = v167;
              v81 = v135 + v140;
              v82 = *((uint32_t *)v38 + 2 * v77 + 1);
              *((uint32_t *)self + 12) = *((uint32_t *)v38 + 2 * v77);
              v83 = *((float *)self + 2);
              *((uint32_t *)self + 13) = v82;
              v136 = (float)(v136 + v141) * 0.5;
              v84 = (float)(v144 + v140) * 0.5;
              v135 = (float)(v135 + v140) * 0.5;
              v156 = v83;
              v85 = (float)(v143 + v141) * 0.5;
              v86 = (float)((float)(v81 * 0.5) + v84) * 0.5;
              if ( v83 > (float)(fabs(v85 - (float)((float)(v136 + v85) * 0.5)) + fabs(v84 - v86)) )
                break;
              v8 = v143;
              v143 = (float)(v136 + v85) * 0.5;
              v7 = v144;
              v144 = v86;
            }
            v88 = v77 + 1;
          }
          v89 = *((uint32_t *)self + 10);
          v168 = v88 + 1;
          v90 = v88;
          if ( v88 + 1 > v89 && *((uint32_t *)self + 11) == 0 )
          {
            v98 = v168 + (v168 >> 1);
            *((uint32_t *)self + 10) = v98;
            if ( v98 != 0 )
            {
              if ( v38 != nullptr )
                v38 = (gameswf::Self *)gameswf::realloc_internal(v38, 8 * v98, 8 * v89);
              else
                v38 = (gameswf::Self *)gameswf::malloc_internal(8 * v98);
              *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v38);
              v90 = *((uint32_t *)self + 9);
            }
            else
            {
              v90 = v88;
              if ( v38 != nullptr )
              {
                gameswf::free_internal(v38);
                v90 = *((uint32_t *)self + 9);
              }
              *((uint32_t *)self + 8) = 0;
              v38 = nullptr;
            }
          }
          v91 = (float *)((char *)v38 + 8 * v90);
          if ( v91 != nullptr )
          {
            *v91 = v140;
            v91[1] = v141;
            v38 = *((gameswf::Self **)self + 8);
          }
          *((uint32_t *)self + 9) = v168;
          v92 = v138 + v148;
          v93 = *((uint32_t *)v38 + 2 * v88 + 1);
          *((uint32_t *)self + 12) = *((uint32_t *)v38 + 2 * v88);
          v94 = *((float *)self + 2);
          *((uint32_t *)self + 13) = v93;
          v139 = (float)(v139 + v147) * 0.5;
          v95 = (float)(v140 + v148) * 0.5;
          v138 = (float)(v138 + v148) * 0.5;
          v156 = v94;
          v96 = (float)(v141 + v147) * 0.5;
          v97 = (float)((float)(v92 * 0.5) + v95) * 0.5;
          if ( v94 > (float)(fabs(v96 - (float)((float)(v139 + v96) * 0.5)) + fabs(v95 - v97)) )
            break;
          v8 = v141;
          v141 = (float)(v139 + v96) * 0.5;
          v7 = v140;
          v140 = v97;
        }
        v99 = v88 + 1;
      }
      v100 = *((uint32_t *)self + 10);
      v169 = v99 + 1;
      v101 = v99;
      if ( v99 + 1 > v100 && *((uint32_t *)self + 11) == 0 )
      {
        v109 = v169 + (v169 >> 1);
        *((uint32_t *)self + 10) = v109;
        if ( v109 != 0 )
        {
          if ( v38 != nullptr )
            v38 = (gameswf::Self *)gameswf::realloc_internal(v38, 8 * v109, 8 * v100);
          else
            v38 = (gameswf::Self *)gameswf::malloc_internal(8 * v109);
          *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v38);
          v101 = *((uint32_t *)self + 9);
        }
        else
        {
          v101 = v99;
          if ( v38 != nullptr )
          {
            gameswf::free_internal(v38);
            v101 = *((uint32_t *)self + 9);
          }
          *((uint32_t *)self + 8) = 0;
          v38 = nullptr;
        }
      }
      v102 = (float *)((char *)v38 + 8 * v101);
      if ( v102 != nullptr )
      {
        *v102 = v148;
        v102[1] = v147;
        v38 = *((gameswf::Self **)self + 8);
      }
      *((uint32_t *)self + 9) = v169;
      v103 = a4 + a6;
      v104 = *((uint32_t *)v38 + 2 * v99 + 1);
      *((uint32_t *)self + 12) = *((uint32_t *)v38 + 2 * v99);
      v105 = *((float *)self + 2);
      *((uint32_t *)self + 13) = v104;
      a5 = (float)(a5 + a7) * 0.5;
      v106 = (float)(v148 + a6) * 0.5;
      a4 = (float)(a4 + a6) * 0.5;
      v156 = v105;
      v107 = (float)(v147 + a7) * 0.5;
      v108 = (float)((float)(v103 * 0.5) + v106) * 0.5;
      if ( v105 > (float)(fabs(v107 - (float)((float)(a5 + v107) * 0.5)) + fabs(v106 - v108)) )
        break;
      v8 = v147;
      v147 = (float)(a5 + v107) * 0.5;
      v7 = v148;
      v148 = v108;
    }
    v110 = v99 + 1;
  }
  v170 = v110 + 1;
  v111 = *((uint32_t *)self + 10);
  v112 = v110;
  if ( v110 + 1 > v111 && *((uint32_t *)self + 11) == 0 )
  {
    v116 = v170 + (v170 >> 1);
    *((uint32_t *)self + 10) = v116;
    if ( v116 != 0 )
    {
      if ( v38 != nullptr )
        v38 = (gameswf::Self *)gameswf::realloc_internal(v38, 8 * v116, 8 * v111);
      else
        v38 = (gameswf::Self *)gameswf::malloc_internal(8 * v116);
      *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v38);
      v112 = *((uint32_t *)self + 9);
    }
    else
    {
      v112 = v110;
      if ( v38 != nullptr )
      {
        gameswf::free_internal(v38);
        v112 = *((uint32_t *)self + 9);
      }
      *((uint32_t *)self + 8) = 0;
      v38 = nullptr;
    }
  }
  v113 = (float *)((char *)v38 + 8 * v112);
  if ( v113 != nullptr )
  {
    *v113 = a6;
    v113[1] = a7;
    v38 = *((gameswf::Self **)self + 8);
  }
  *((uint32_t *)self + 9) = v170;
  v114 = *((uint32_t *)v38 + 2 * v110 + 1);
  result = *((uint32_t *)v38 + 2 * v110);
  *((uint32_t *)self + 13) = v114;
  *((uint32_t *)self + 12) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FinalShape::mergeSegment  (binary VA: 0x10f7c40)
// Original: gameswf::FinalShape::mergeSegment
// ----------------------------------------------------------------------------
int gameswf::FinalShape::mergeSegment(int a1, int a2)
{
  int v2;
  int i;
  int v4;
  float *v5;
  float v6; // xmm4_4
  gameswf::array<gameswf::Point::Self> *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int result;
  int v15;
  int v16;
  int v17;
  float *v18;
  int v19;
  int v20;
  int v21;
  int *v22;
  int *v23;
  int v24;
  int v25;
  int v26; // xmm0_4
  int v27; // xmm0_4
  int v28;
  uint32_t *v29;
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
  int j;
  float *v41;
  int v42;
  int v43; // xmm0_4
  float *v44;
  int v45;
  int v46;
  int v47;
  uint32_t *v48;
  int v49;
  uint32_t *v50;
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
  gameswf::array<gameswf::Point::Self> *v68;
  uint32_t *v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  float *v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  gameswf::array<gameswf::Point::Self> *v86;
  int *v87;
  int *v88;

  if ( *(int *)(a1 + 16) <= 0 )
    return 0;
  v2 = 0;
  v75 = *(uint32_t *)(a1 + 12);
  for ( i = 0; ; i += 20 )
  {
    v85 = v75 + i;
    v4 = *(uint32_t *)(v75 + i + 8);
    if ( v4 == 0 || a2 == v75 + i )
      goto LABEL_16;
    v74 = *(uint32_t *)(a2 + 8);
    v77 = v74 - 1;
    v73 = v74 - 1;
    v5 = *(float **)(a2 + 4);
    v76 = &v5[2 * v74 - 2];
    v6 = **(float **)(v85 + 4);
    v80 = *(uint32_t *)(v85 + 4);
    if ( fabs(v6 - *v76) < 0.0001f && fabs(*(float *)(v80 + 4) - v76[1]) < 0.0001f )
    {
      v7 = (gameswf::array<gameswf::Point::Self> *)(a2 + 4);
      gameswf::array_gameswf_Point_c7983d::resize((gameswf::array<gameswf::Point::Self> *)(a2 + 4), v77);
      v8 = *(uint32_t *)(v85 + 8);
      if ( v8 > 0 )
      {
        v65 = *(uint32_t *)(v85 + 4);
        v70 = *(uint32_t *)(a2 + 8);
        gameswf::array_gameswf_Point_c7983d::resize(v7, v8 + v70);
        v9 = 8 * v70;
        v10 = 0;
        v78 = v8;
        do
        {
          v11 = *(uint32_t *)(v65 + 8 * v10);
          v12 = *(uint32_t *)(v65 + 8 * v10++ + 4);
          v64 = *(uint32_t *)(a2 + 4);
          *(uint32_t *)(v64 + v9) = v11;
          *(uint32_t *)(v64 + v9 + 4) = v12;
          v9 += 8;
        }
        while ( v10 != v78 );
        v7 = (gameswf::array<gameswf::Point::Self> *)(a2 + 4);
      }
      v13 = (int *)(v85 + 4);
      gameswf::array_gameswf_Point_c7983d::resize((gameswf::array<gameswf::Point::Self> *)(v85 + 4), *(uint32_t *)(a2 + 8));
      result = 1;
      if ( *(int *)(v85 + 8) > 0 )
      {
        v15 = 0;
        v86 = v7;
        do
        {
          v16 = *v13;
          v17 = *(uint32_t *)(*(uint32_t *)v86 + 8 * v15 + 4);
          *(uint32_t *)(v16 + 8 * v15) = *(uint32_t *)(*(uint32_t *)v86 + 8 * v15);
          *(uint32_t *)(v16 + 8 * v15++ + 4) = v17;
        }
        while ( v15 < v13[1] );
        return 1;
      }
      return result;
    }
    v18 = (float *)(v80 + 8 * (v4 - 1));
    if ( fabs(*v18 - *v76) < 0.0001f && fabs(v18[1] - v76[1]) < 0.0001f )
      break;
    if ( fabs(*v18 - *v5) < 0.0001f && fabs(v18[1] - v5[1]) < 0.0001f )
    {
      gameswf::array_gameswf_Point_c7983d::resize((gameswf::array<gameswf::Point::Self> *)(v85 + 4), v4 - 1);
      v34 = *(uint32_t *)(a2 + 8);
      result = 1;
      if ( v34 > 0 )
      {
        v67 = *(uint32_t *)(a2 + 4);
        v72 = *(uint32_t *)(v85 + 8);
        gameswf::array_gameswf_Point_c7983d::resize((gameswf::array<gameswf::Point::Self> *)(v85 + 4), v34 + v72);
        v88 = (int *)(v85 + 4);
        v84 = v34;
        v35 = 8 * v72;
        v36 = 0;
        do
        {
          v37 = *(uint32_t *)(v67 + 8 * v36);
          v38 = *(uint32_t *)(v67 + 8 * v36++ + 4);
          v62 = *v88;
          *(uint32_t *)(v62 + v35) = v37;
          *(uint32_t *)(v62 + v35 + 4) = v38;
          v35 += 8;
        }
        while ( v36 != v84 );
        return 1;
      }
      return result;
    }
    if ( fabs(v6 - *v5) < 0.0001f && fabs(*(float *)(v80 + 4) - v5[1]) < 0.0001f )
    {
      if ( v74 > 1 )
      {
        v39 = 0;
        for ( j = v74 - 1; ; j = v49 - 1 )
        {
          v41 = &v5[2 * v39];
          v42 = *(uint32_t *)v41;
          v43 = *((uint32_t *)v41 + 1);
          v44 = &v5[2 * (j - v39)];
          v45 = *(uint32_t *)v44;
          v46 = *((uint32_t *)v44 + 1);
          *(uint32_t *)v41 = v45;
          *((uint32_t *)v41 + 1) = v46;
          v47 = ~v39++;
          v48 = (uint32_t *)(*(uint32_t *)(a2 + 4) + 8 * (*(uint32_t *)(a2 + 8) + v47));
          *v48 = v42;
          v48[1] = v43;
          v49 = *(uint32_t *)(a2 + 8);
          if ( v39 >= v49 / 2 )
            break;
          v5 = *(float **)(a2 + 4);
        }
        v73 = v49 - 1;
      }
      v68 = (gameswf::array<gameswf::Point::Self> *)(a2 + 4);
      gameswf::array_gameswf_Point_c7983d::resize((gameswf::array<gameswf::Point::Self> *)(a2 + 4), v73);
      v50 = (uint32_t *)(a2 + 4);
      v51 = *(uint32_t *)(v85 + 8);
      v52 = *(uint32_t *)(v85 + 4);
      v79 = v51;
      if ( v51 > 0 )
      {
        v53 = *(uint32_t *)(a2 + 8);
        gameswf::array_gameswf_Point_c7983d::resize(v68, v53 + v51);
        v54 = 0;
        v82 = v52;
        v55 = 8 * v53;
        do
        {
          v56 = *(uint32_t *)(v82 + 8 * v54);
          v57 = *(uint32_t *)(v82 + 8 * v54++ + 4);
          v61 = *(uint32_t *)v68;
          *(uint32_t *)(v61 + v55) = v56;
          *(uint32_t *)(v61 + v55 + 4) = v57;
          v55 += 8;
        }
        while ( v54 != v79 );
        v50 = (uint32_t *)(a2 + 4);
      }
      v69 = v50;
      gameswf::array_gameswf_Point_c7983d::resize((gameswf::array<gameswf::Point::Self> *)(v85 + 4), *(uint32_t *)(a2 + 8));
      result = 1;
      if ( *(int *)(v85 + 8) > 0 )
      {
        v58 = 0;
        do
        {
          v59 = *(uint32_t *)(v85 + 4);
          v60 = *(uint32_t *)(*v69 + 8 * v58 + 4);
          *(uint32_t *)(v59 + 8 * v58) = *(uint32_t *)(*v69 + 8 * v58);
          *(uint32_t *)(v59 + 8 * v58++ + 4) = v60;
        }
        while ( v58 < *(uint32_t *)(v85 + 8) );
        return 1;
      }
      return result;
    }
LABEL_16:
    if ( ++v2 == *(uint32_t *)(a1 + 16) )
      return 0;
  }
  gameswf::array_gameswf_Point_c7983d::resize((gameswf::array<gameswf::Point::Self> *)(a2 + 4), v77);
  v19 = *(uint32_t *)(a2 + 8);
  if ( v19 > 1 )
  {
    v20 = 0;
    do
    {
      v21 = *(uint32_t *)(a2 + 4);
      v22 = (int *)(v21 + 8 * v20);
      v23 = (int *)(v21 + 8 * (v19 - 1 - v20));
      v24 = *v23;
      v25 = v23[1];
      v26 = *v22;
      *v22 = v24;
      v81 = v26;
      v27 = v22[1];
      v22[1] = v25;
      v28 = *(uint32_t *)(a2 + 8) + ~v20++;
      v29 = (uint32_t *)(*(uint32_t *)(a2 + 4) + 8 * v28);
      *v29 = v81;
      v29[1] = v27;
      v19 = *(uint32_t *)(a2 + 8);
    }
    while ( v20 < v19 / 2 );
  }
  result = 1;
  if ( v19 > 0 )
  {
    v71 = *(uint32_t *)(a2 + 4);
    v66 = *(uint32_t *)(v85 + 8);
    gameswf::array_gameswf_Point_c7983d::resize((gameswf::array<gameswf::Point::Self> *)(v85 + 4), v66 + v19);
    v30 = 8 * v66;
    v31 = 0;
    v87 = (int *)(v85 + 4);
    v83 = v19;
    do
    {
      v32 = *(uint32_t *)(v71 + 8 * v31);
      v33 = *(uint32_t *)(v71 + 8 * v31++ + 4);
      v63 = *v87;
      *(uint32_t *)(v63 + v30) = v32;
      *(uint32_t *)(v63 + v30 + 4) = v33;
      v30 += 8;
    }
    while ( v31 != v83 );
    return 1;
  }
  return result;
}


