#include "Core/Utils/DecompTypes.h"

// ----------------------------------------------------------------------------
// Function: hkpStaticGeometryUtil::createCompressedMeshShape  (binary VA: 0x0)
// Original: hkpStaticGeometryUtil::createCompressedMeshShape
// ----------------------------------------------------------------------------
unsigned int hkpStaticGeometryUtil::createCompressedMeshShape(int a1, unsigned int a2, hkQsTransformf::Self *a3, float *a4, float *a5, uint32_t *a6, uint8_t *a7, int a8)
{
  unsigned int v8;
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v12; // xmm5_4
  float v13; // xmm3_4
  float v14; // xmm6_4
  float v15; // xmm2_4
  float v16; // xmm7_4
  char v17;
  int v18;
  hkClass::Self *v19;
  hkString::Self *Name;
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int32_t v31;
  int v32;
  int32_t v33;
  int v34;
  const hkGeometry::Self *v35;
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  uint32_t *v44;
  hkpStaticCompoundShape::Self *v45;
  hkpStaticCompoundShape::Self *v46;
  float *v47;
  float v48; // xmm0_4
  float v49; // xmm1_4
  float v50; // xmm3_4
  float v51; // xmm4_4
  float *v52;
  float v53; // xmm5_4
  float v54; // xmm7_4
  float v55; // xmm0_4
  float v56; // xmm1_4
  float *v57;
  float v58; // xmm0_4
  float v59; // xmm1_4
  float v60; // xmm6_4
  float v61; // xmm4_4
  int v62;
  int v63;
  int v64;
  int v65;
  float *v66;
  float v67; // xmm3_4
  hkpStaticCompoundShape::Self *v68;
  hkpStaticCompoundShape::Self *v69;
  int v70;
  int v71;
  int v72;
  int v73;
  float *v74;
  float v75; // xmm1_4
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  float *v82;
  float v83; // xmm2_4
  uint32_t *v84;
  char *v85;
  int v86;
  unsigned int v87;
  unsigned int v88;
  __m128i *v89;
  unsigned int v90;
  int v91;
  int i;
  hkpStaticCompoundShape::Self *v93;
  uint32_t *v94;
  uint32_t *v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  uint32_t *v104;
  uint32_t *v105;
  int j;
  hkpBvCompressedMeshShape::Self *v107;
  char v108;
  bool v109;
  char v110;
  int address;
  uint32_t *v112;
  int v113;
  uint32_t *v114;
  uint32_t *v115;
  uint32_t *v116;
  int v117;
  hkVector4f::Self *v118;
  char *v119;
  int v120;
  int v121;
  float v122;
  int v123;
  int v124;
  float v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  uint8_t *v133;
  uint32_t *v134;
  float *v135;
  int v136;
  float v137;
  float v138;
  float v139;
  int v140;
  hkQsTransformf::Self *v141;
  unsigned int v142;
  int v143;
  hkpStaticCompoundShape::Self *v144;
  float v145;
  float v146;
  float v147;
  float v148;
  float v149;
  float v150;
  int v151;
  hkpStaticCompoundShape::Self *v152;
  int v153;
  float v154;
  int v155;
  hkpStaticCompoundShape::Self *v156;
  int v157;
  hkpStaticCompoundShape::Self *v158;
  float v159;
  bool v160;
  float v161;
  bool v162;
  int v163;
  int v164;
  int v165;
  float v166;
  int v167;
  int v168;
  float v169;
  int16_t v170;
  int v171;
  uint32_t *v172;
  int v173;
  int v174;
  float v175;
  float *v176;
  int v177;
  char *v178;
  int v179;
  int v180;
  hkpShape::Self *v181;
  hkpShape::Self *v182;
  bool v183;
  float v184;
  int v185;
  int v186;
  hkpStaticCompoundShape::Self *v187;
  unsigned int v188;
  int v189;
  int v190;
  int v191;
  int v192;
  int v193;
  float v194;
  hkpStaticCompoundShape::Self *v195;
  hkpStaticCompoundShape::Self *v196;
  int v197;
  hkpStaticCompoundShape::Self *v198;
  hkpStaticCompoundShape::Self *v199;
  hkpStaticCompoundShape::Self *v200;
  int v201;
  int v202;
  int v203;
  uint8_t v204[7];
  char v205[12];
  char v206;
  int v207;
  int v208;
  int v209;
  int v210;
  int v211;
  hkpStaticCompoundShape::Self *v212;
  int v213;
  int v214;
  hkpStaticCompoundShape::Self *v215;
  unsigned int v216;
  float v217[4];
  float v218[4];
  float v219;
  float v220;
  float v221;
  float v222;
  float v223;
  float v224;
  float v225;
  float v226;
  char v227;
  float v228;
  float v229;
  float v230;
  float v231;
  float v232;
  float v233;
  float v234;
  float v235;
  float v236;
  float v237;
  float v238;
  int v239;
  int v240;
  int v241;
  int v242;
  int v243;
  int v244;
  int v245;
  int v246;
  int v247;
  int v248[2];
  int v249;
  int v250;
  int v251;
  int v252;
  int v253;
  int v254;
  uint8_t v255[64];
  uint32_t v256[16];
  float v257;
  float v258;
  float v259;
  int v260;
  int *v261;
  int v262;
  int v263;
  unsigned int v264;
  int *v265;

  v265 = &a1;
  v153 = a1;
  v141 = a3;
  v135 = a5;
  v8 = a2;
  v176 = a4;
  v142 = a2;
  v134 = a6;
  v133 = a7;
  v189 = a8;
  *a7 = 0;
  if ( v8 == 0 )
    return v142;
  hkQsTransformf::copyToTransform(v141, (hkTransformf::Self *)v255);
  G4_VCALL<void>(v142, 24, v255, 0, &v219);
  v256[0] = 1065353216;
  memset(&v256[1], 0, 16);
  v256[5] = 1065353216;
  memset(&v256[6], 0, 16);
  v256[10] = 1065353216;
  memset(&v256[11], 0, 20);
  v119 = &v227;
  G4_VCALL<void>(v142, 24, v256, 0);
  v9 = *v176;
  v10 = v223;
  if ( *v176 > v223 )
    return 0;
  v12 = v176[1];
  v13 = v224;
  if ( v12 > v224 )
    return 0;
  v14 = v176[2];
  v15 = v225;
  if ( v14 > v225 )
    return 0;
  v16 = v219;
  v175 = v176[4];
  if ( v219 > v175 )
    return 0;
  v194 = v176[5];
  v184 = v220;
  if ( v220 > v194 )
    return 0;
  v169 = v176[6];
  *(float *)&v181 = v221;
  if ( v221 > v169 )
    return 0;
  v159 = v222;
  v166 = v226;
  v161 = v176[7];
  if ( (((v161 >= v226 ? 8 : 0) | (v169 >= v225 ? 4 : 0) | (v175 >= v223) | (v194 >= v224 ? 2 : 0))
      & ((v221 >= v14 ? 4 : 0) | (v219 >= v9) | (v220 >= v12 ? 2 : 0))) == 7 )
    return v142;
  v17 = *(uint8_t *)(v142 + 8);
  if ( v17 != 16 )
  {
    if ( v17 != 17 )
      goto LABEL_13;
    v117 = G4_VCALL<int>(v142, 92);
    hkpBvCompressedMeshShape::getPrimitiveUserString((hkpBvCompressedMeshShape::Self *)&v207, v142);
    if ( (v207 & 0xFFFFFFFE) != 0 || *(uint8_t *)(v142 + 29) != 0 )
    {
      hkStringPtr::Destroy((hkStringPtr::Self *)&v207);
      hkErrStream::Construct((hkErrStream::Self *)v248, (hkString::Self *)&v257, 512);
      hkOstream::opShl(
        (int)(uintptr_t)(v248),
        (hkString::Self *)"attempting to crop a bv compressed mesh with an unhandled type of per-primitive data - shape will no"
                    "t be cropped.  Only non-string user data is supported per primitive, and per primitive filter data i"
                    "s not supported.");
      hkError::messageWarning(
        (hkError::Self *)0x79AF13E9,
        (int)(uintptr_t)(&v257),
        "F:\\G4\\G4_UP8Shop\\androidPort\\GameSpecific\\..\\..\\project_vs\\..\\sources\\\\Game\\Physics\\Havok\\Derived\\"
        "hkpStaticGeometryUtil.cpp",
        (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_1A4)->st_other,
        v120);
      hkErrStream::Destroy((hkErrStream::Self *)v248);
      v159 = v222;
      v175 = v176[4];
      v194 = v176[5];
      v184 = v220;
      v169 = v176[6];
      *(float *)&v181 = v221;
      v166 = v226;
      v16 = v219;
      v10 = v223;
      v13 = v224;
      v15 = v225;
      v9 = *v176;
      v12 = v176[1];
      v14 = v176[2];
      v161 = v176[7];
LABEL_13:
      if ( (((v161 >= (float)((float)(v166 + v159) * 0.5) ? 8 : 0)
           | (v169 >= (float)((float)(v15 + *(float *)&v181) * 0.5) ? 4 : 0)
           | (v175 >= (float)((float)(v10 + v16) * 0.5))
           | (v194 >= (float)((float)(v13 + v184) * 0.5) ? 2 : 0))
          & (((float)((float)(v15 + *(float *)&v181) * 0.5) >= v14 ? 4 : 0)
           | ((float)((float)(v10 + v16) * 0.5) >= v9)
           | ((float)((float)(v13 + v184) * 0.5) >= v12 ? 2 : 0))) == 7 )
      {
        v18 = (*(int (**)(uint32_t *))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 28))(hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance);
        v19 = (hkClass::Self *)G4_VCALL<int>(v18, 28, v142);
        Name = (hkString::Self *)"<not found>";
        hkErrStream::Construct((hkErrStream::Self *)v248, (hkString::Self *)&v257, 512);
        if ( v19 != nullptr )
          Name = (hkString::Self *)hkClass::getName(v19);
        v21 = hkOstream::opShl((int)(uintptr_t)(v248), (hkString::Self *)"Shape ");
        v22 = hkOstream::opShl(v21, Name);
        hkOstream::opShl(
          v22,
          (hkString::Self *)" not supported for geometry cutting - won't be cropped.  Result may not fit into a single grid section.");
        hkError::messageWarning(
          (hkError::Self *)0x79AF13F0,
          (int)(uintptr_t)(&v257),
          "F:\\G4\\G4_UP8Shop\\androidPort\\GameSpecific\\..\\..\\project_vs\\..\\sources\\\\Game\\Physics\\Havok\\Derive"
          "d\\hkpStaticGeometryUtil.cpp",
          (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_1B4)->st_size,
          v120);
        hkErrStream::Destroy((hkErrStream::Self *)v248);
        return v142;
      }
      return 0;
    }
    hkStringPtr::Destroy((hkStringPtr::Self *)&v207);
    v35 = (const hkGeometry::Self *)sub_6C6960(v153, v142, v117);
    hkGeometry::Construct((hkGeometry::Self *)v248, v35);
    v132 = 0;
    while ( 1 )
    {
      v36 = v135[3];
      v37 = v135[1];
      v38 = v135[2];
      v217[0] = *v135;
      v217[1] = v37;
      v217[2] = v38;
      v217[3] = v36;
      v218[0] = v217[0] * v36;
      v218[1] = v37 * v36;
      v218[2] = v38 * v36;
      v218[3] = v36 * v36;
      hkVector4f::setTransformedInversePos((hkVector4f::Self *)&v228, v141, (const hkVector4f::Self *)v218);
      v236 = -*((float *)v141 + 4);
      v237 = -*((float *)v141 + 5);
      v39 = *((uint32_t *)v141 + 7);
      v238 = -*((float *)v141 + 6);
      v239 = v39;
      hkVector4f::setRotatedDir((hkVector4f::Self *)&v257, (const hkQuaternionf::Self *)&v236, (const hkVector4f::Self *)v217);
      v208 = 0;
      v209 = 0;
      v210 = 0x80000000;
      v140 = v253;
      if ( v253 > 0 )
        break;
LABEL_113:
      v211 = 0;
      v212 = nullptr;
      v213 = 0x80000000;
      v198 = (hkpStaticCompoundShape::Self *)v250;
      if ( v250 > 0 )
      {
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v204,
          (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
          &v211,
          v250,
          4);
        v85 = (char *)(v198 - v212);
        v86 = v211 + 4 * (uint32_t)(uintptr_t)(v212);
        if ( v198 - v212 > 0 )
        {
          v87 = -((uint8_t)(v86 & 0xF) >> 2) & 3;
          if ( v87 > (unsigned int)(uintptr_t)(v85) )
            v87 = v198 - v212;
          v88 = 0;
          if ( v87 == 0 )
            goto LABEL_185;
          do
            *(uint32_t *)(v86 + 4 * v88++) = -1;
          while ( v87 > v88 );
          if ( v85 != (char *)v87 )
          {
LABEL_185:
            v178 = &v85[-v87];
            v188 = (unsigned int)(uintptr_t)(&v85[-v87]) >> 2;
            v174 = 4 * v188;
            if ( 4 * v188 == 0 )
              goto LABEL_186;
            v89 = (__m128i *)(v86 + 4 * v87);
            v90 = 0;
            do
            {
              ++v90;
              *v89++ = g4_m128_from<__m128i>(-1LL);
            }
            while ( v188 > v90 );
            v88 += v174;
            if ( v178 != (char *)v174 )
            {
LABEL_186:
              do
                *(uint32_t *)(v86 + 4 * v88++) = -1;
              while ( (int)(uintptr_t)(v85) > (int)v88 );
            }
          }
        }
      }
      v212 = v198;
      v214 = 0;
      v215 = nullptr;
      v216 = 0x80000000;
      if ( v250 <= 0 )
      {
        v215 = nullptr;
      }
      else
      {
        v199 = (hkpStaticCompoundShape::Self *)v250;
        v91 = 0;
        for ( i = 0; i < (int)(uintptr_t)(v199); ++i )
        {
          if ( (float)((float)((float)((float)(*(float *)(v249 + 16 * i + 4) - v229) * v258)
                             + (float)((float)(*(float *)(v249 + 16 * i) - v228) * v257))
                     + (float)((float)(*(float *)(v249 + 16 * i + 8) - v230) * v259)) >= -0.0001f )
          {
            *(uint32_t *)(v211 + 4 * i) = v91;
            v93 = v215;
            v94 = (uint32_t *)(v249 + 16 * i);
            if ( v215 == (hkpStaticCompoundShape::Self *)(v216 & 0x3FFFFFFF) )
            {
              v124 = v249 + 16 * i;
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)&v214,
                &word_10,
                v119);
              v93 = v215;
              v94 = (uint32_t *)v124;
            }
            v95 = (uint32_t *)(v214 + 16 * (uint32_t)(uintptr_t)(v93));
            *v95 = *v94;
            v95[1] = v94[1];
            v95[2] = v94[2];
            v91 = (int)(uintptr_t)(v215) + 1;
            v95[3] = v94[3];
            v215 = (hkpStaticCompoundShape::Self *)v91;
            v199 = (hkpStaticCompoundShape::Self *)v250;
          }
        }
        v96 = v216;
        if ( (int)(uintptr_t)(v199) > v91 )
        {
          v97 = v249;
          v249 = v214;
          v250 = v91;
          v214 = v97;
          v98 = v251;
          v251 = v216;
          v215 = v199;
          v216 = v98;
          v96 = v98;
          v200 = (hkpStaticCompoundShape::Self *)(v253 - 1);
          if ( v253 - 1 >= 0 )
          {
            v99 = 16 * (v253 - 1);
            do
            {
              v103 = *(uint32_t *)(v211 + 4 * *(uint32_t *)(v252 + v99));
              *(uint32_t *)(v252 + v99) = v103;
              if ( v103 == -1
                || (v100 = v211,
                    v101 = *(uint32_t *)(v211 + 4 * *(uint32_t *)(v252 + v99 + 4)),
                    *(uint32_t *)(v252 + v99 + 4) = v101,
                    v101 == -1)
                || (v102 = *(uint32_t *)(v100 + 4 * *(uint32_t *)(v252 + v99 + 8)),
                    *(uint32_t *)(v252 + v99 + 8) = v102,
                    v102 == -1) )
              {
                if ( v200 != (hkpStaticCompoundShape::Self *)--v253 )
                {
                  v104 = (uint32_t *)(v252 + 16 * v253);
                  v105 = (uint32_t *)(v252 + v99);
                  *v105 = *v104;
                  v105[1] = v104[1];
                  v105[2] = v104[2];
                  v105[3] = v104[3];
                }
              }
              v200 = (hkpStaticCompoundShape::Self *)((char *)v200 - 1);
              v99 -= 16;
            }
            while ( v200 != (hkpStaticCompoundShape::Self *)-1 );
            v96 = v216;
          }
        }
        v215 = nullptr;
        if ( v96 >= 0 )
          (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v214,
            16 * v96);
      }
      v214 = 0;
      v216 = 0x80000000;
      v212 = nullptr;
      if ( v213 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
          (uint32_t *)(hkContainerTempAllocator::s_alloc),
          v211,
          4 * v213);
      v211 = 0;
      v213 = 0x80000000;
      v209 = 0;
      if ( v210 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
          (uint32_t *)(hkContainerTempAllocator::s_alloc),
          v208,
          12 * v210);
      ++v132;
      v135 += 4;
      if ( v132 == 6 )
      {
        if ( v250 > 0 )
        {
          for ( j = 0; j < v250; ++j )
          {
            v118 = (hkVector4f::Self *)(v249 + 16 * j);
            hkVector4f::setTransformedPos(v118, v141, v118);
          }
        }
        v107 = nullptr;
        *v134 = hkQsTransformf_identityStorage;
        v134[1] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C7104));
        v134[2] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C7108));
        v134[3] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C710C));
        v134[4] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C7110));
        v134[5] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C7114));
        v134[6] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C7118));
        v134[7] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C711C));
        v134[8] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C7120));
        v134[9] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C7124));
        v134[10] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C7128));
        v134[11] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20C712C));
        if ( v253 > 0 )
        {
          hkpBvCompressedMeshShapeCinfo::Construct((hkpBvCompressedMeshShapeCinfo::Self *)&v257);
          v257 = COERCE_FLOAT(((uint32_t)(uintptr_t)&off_20A1308));
          v108 = 0;
          v261 = v248;
          v262 = 0;
          v109 = *(uint8_t *)(v142 + 29) == 0;
          v263 = 0;
          v264 = 0x80000000;
          if ( !v109 )
            v108 = 2 - (*(uint32_t *)(v142 + 36) == 0);
          LOBYTE(v258) = v108;
          v110 = 0;
          if ( *(uint8_t *)(v142 + 30) != 0 )
          {
            v110 = 2;
            if ( *(int *)(v142 + 48) <= 0 )
              v110 = 2 * (*(uint32_t *)(v142 + 60) > 0) + 1;
          }
          BYTE1(v258) = v110;
          v259 = *(float *)(v142 + 24);
          v260 = *(uint8_t *)(v142 + 28);
          address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
          v107 = (hkpBvCompressedMeshShape::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                               *(uint32_t *)(*(uint32_t *)address + 44),
                                               224);
          hkpBvCompressedMeshShape::hkpBvCompressedMeshShape(v107, (const hkpBvCompressedMeshShapeCinfo::Self *)&v257);
          *v133 = 1;
          hkpDefaultBvCompressedMeshShapeCinfo::Destroy((hkpDefaultBvCompressedMeshShapeCinfo::Self *)&v257);
        }
        v248[0] = (int)((uint32_t)(uintptr_t)&off_20586B8);
        v253 = 0;
        if ( v254 >= 0 )
          (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v252,
            16 * v254);
        v252 = 0;
        v254 = 0x80000000;
        v250 = 0;
        v142 = (unsigned int)(uintptr_t)(v107);
        if ( v251 >= 0 )
          (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v249,
            16 * v251);
        return v142;
      }
    }
    v173 = 0;
    while ( 1 )
    {
      v168 = 16 * v173;
      v44 = (uint32_t *)(v252 + 16 * v173);
      v45 = (hkpStaticCompoundShape::Self *)*v44;
      v46 = (hkpStaticCompoundShape::Self *)v44[1];
      v196 = (hkpStaticCompoundShape::Self *)*v44;
      v177 = v44[2];
      v191 = v249;
      v47 = (float *)(v249 + 16 * *v44);
      v48 = *v47;
      v187 = v46;
      v49 = v47[1];
      v50 = v47[2];
      v51 = v47[3];
      v52 = (float *)(v249 + 16 * (uint32_t)(uintptr_t)(v46));
      v53 = *v52;
      v54 = v52[1];
      v154 = v48;
      v150 = v49;
      v55 = v52[2];
      v56 = v52[3];
      v57 = (float *)(v249 + 16 * v177);
      v149 = v50;
      v139 = v51;
      v148 = v55;
      v138 = v56;
      v147 = *v57;
      v146 = v57[1];
      v145 = v57[2];
      v137 = v57[3];
      v58 = (float)((float)((float)(v150 - v229) * v258) + (float)((float)(v154 - v228) * v257))
          + (float)((float)(v50 - v230) * v259);
      v59 = (float)((float)((float)(v54 - v229) * v258) + (float)((float)(v53 - v228) * v257))
          + (float)((float)(v148 - v230) * v259);
      v60 = (float)(*v57 - v228) * v257;
      v61 = (float)((float)((float)(v146 - v229) * v258) + v60) + (float)(v259 * (float)(v145 - v230));
      v183 = (float)(v59 * v58) < -0.0001f;
      v160 = (float)(v61 * v58) < -0.0001f;
      v162 = (float)(v61 * v59) < -0.0001f;
      if ( (float)(v59 * v58) >= -0.0001f )
      {
        v143 = 1;
        v151 = -1;
        v190 = 0;
      }
      else
      {
        if ( (int)(uintptr_t)(v45) <= (int)(uintptr_t)(v46) )
        {
          v45 = v46;
          v46 = v196;
        }
        v144 = v45;
        if ( v209 <= 0 )
          goto LABEL_66;
        v62 = 0;
        v63 = 0;
        while ( 1 )
        {
          v64 = v208 + v62;
          if ( *(uint32_t *)(v208 + v62) >= (int)(uintptr_t)(v46) )
          {
            if ( *(hkpStaticCompoundShape::Self **)(v208 + v62) != v46 )
              goto LABEL_66;
            v152 = *(hkpStaticCompoundShape::Self **)(v64 + 4);
            if ( (int)(uintptr_t)(v152) >= (int)(uintptr_t)(v144) )
              break;
          }
          ++v63;
          v62 += 12;
          if ( v63 == v209 )
            goto LABEL_66;
        }
        if ( v144 != v152 || (v151 = *(uint32_t *)(v64 + 8)) == -1 )
        {
LABEL_66:
          v65 = v250;
          v151 = v250;
          if ( v250 == (v251 & 0x3FFFFFFF) )
          {
            v125 = (float)((float)((float)(v150 - v229) * v258) + (float)((float)(v154 - v228) * v257))
                 + (float)((float)(v50 - v230) * v259);
            v122 = (float)((float)((float)(v146 - v229) * v258) + v60) + (float)(v259 * (float)(v145 - v230));
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)&v249,
              &word_10,
              v119);
            v65 = v250;
            v191 = v249;
            v61 = v122;
            v58 = v125;
          }
          v66 = (float *)(v191 + 16 * v65);
          v250 = v65 + 1;
          v67 = v58 / (float)(v58 - v59);
          *v66 = (float)((float)(v53 - v154) * v67) + v154;
          v66[1] = (float)((float)(v54 - v150) * v67) + v150;
          v66[2] = (float)((float)(v148 - v149) * v67) + v149;
          v66[3] = (float)((float)(v138 - v139) * v67) + v139;
          sub_6C5630(&v208, v196, v187, v151);
          v143 = 2;
          v190 = 1;
        }
        else
        {
          v143 = 2;
          v190 = 1;
        }
      }
      v164 = -1;
      if ( v162 )
      {
        v76 = (int)(uintptr_t)(v187);
        v77 = v177;
        if ( (int)(uintptr_t)(v187) <= v177 )
        {
          v76 = v177;
          v77 = (int)(uintptr_t)(v187);
        }
        v136 = v76;
        if ( v209 <= 0 )
          goto LABEL_97;
        v78 = 0;
        v79 = 0;
        while ( 1 )
        {
          v80 = v208 + v78;
          if ( *(uint32_t *)(v208 + v78) >= v77 )
          {
            if ( *(uint32_t *)(v208 + v78) != v77 )
              goto LABEL_97;
            v165 = *(uint32_t *)(v80 + 4);
            if ( v165 >= v136 )
              break;
          }
          ++v79;
          v78 += 12;
          if ( v79 == v209 )
            goto LABEL_97;
        }
        if ( v136 != v165 || (v164 = *(uint32_t *)(v80 + 8)) == -1 )
        {
LABEL_97:
          v81 = v250;
          v164 = v250;
          if ( v250 == (v251 & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)&v249,
              &word_10,
              v119);
            v81 = v250;
          }
          v82 = (float *)(v249 + 16 * v81);
          v250 = v81 + 1;
          v83 = v59 / (float)(v59 - v61);
          *v82 = (float)((float)(v147 - v53) * v83) + v53;
          v82[1] = (float)((float)(v146 - v54) * v83) + v54;
          v82[2] = (float)((float)(v145 - v148) * v83) + v148;
          v82[3] = (float)((float)(v137 - v138) * v83) + v138;
          sub_6C5630(&v208, v187, v177, v164);
        }
        v190 = v143;
      }
      if ( v160 )
        break;
      if ( v190 != 0 )
      {
        v186 = -1;
LABEL_56:
        v40 = v252;
        v41 = *(uint32_t *)(v252 + 16 * v173);
        v42 = *(uint32_t *)(v252 + v168 + 4);
        v43 = *(uint32_t *)(v252 + v168 + 8);
        v157 = *(uint32_t *)(v252 + v168 + 12);
        if ( v190 == 1 )
        {
          if ( v183 )
          {
            v202 = v253;
            v179 = v253;
            if ( v253 == (v254 & 0x3FFFFFFF) )
            {
              v129 = *(uint32_t *)(v252 + v168 + 8);
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)&v252,
                &word_10,
                v119);
              v40 = v252;
              v179 = v253;
              v43 = v129;
            }
            v115 = (uint32_t *)(v40 + 16 * v179);
            v115[1] = v42;
            v115[2] = v43;
            v115[3] = v157;
            *v115 = v41;
            ++v253;
            *(uint32_t *)(v252 + v168 + 4) = v151;
            *(uint32_t *)(v252 + 16 * v202) = v151;
          }
          else if ( v162 )
          {
            v203 = v253;
            v180 = v253;
            if ( v253 == (v254 & 0x3FFFFFFF) )
            {
              v130 = *(uint32_t *)(v252 + v168 + 8);
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)&v252,
                &word_10,
                v119);
              v40 = v252;
              v180 = v253;
              v43 = v130;
            }
            v116 = (uint32_t *)(v40 + 16 * v180);
            v116[1] = v42;
            v116[2] = v43;
            v116[3] = v157;
            *v116 = v41;
            ++v253;
            *(uint32_t *)(v252 + v168 + 8) = v164;
            *(uint32_t *)(v252 + 16 * v203 + 4) = v164;
          }
          else if ( v160 )
          {
            v197 = v253;
            v192 = v253;
            if ( v253 == (v254 & 0x3FFFFFFF) )
            {
              v131 = *(uint32_t *)(v252 + v168 + 8);
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)&v252,
                &word_10,
                v119);
              v40 = v252;
              v192 = v253;
              v43 = v131;
            }
            v84 = (uint32_t *)(v40 + 16 * v192);
            v84[1] = v42;
            v84[2] = v43;
            v84[3] = v157;
            *v84 = v41;
            ++v253;
            *(uint32_t *)(v252 + 16 * v173) = v186;
            *(uint32_t *)(v252 + 16 * v197 + 8) = v186;
          }
        }
        else if ( v190 == 2 )
        {
          v201 = v253;
          v193 = v253 + 1;
          v155 = v253;
          if ( v253 == (v254 & 0x3FFFFFFF) )
          {
            v128 = *(uint32_t *)(v252 + v168 + 8);
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)&v252,
              &word_10,
              v119);
            v40 = v252;
            v155 = v253;
            v43 = v128;
          }
          v112 = (uint32_t *)(v40 + 16 * v155);
          v112[3] = v157;
          *v112 = v41;
          v112[1] = v42;
          v112[2] = v43;
          v113 = v253 + 1;
          v253 = v113;
          if ( v113 == (v254 & 0x3FFFFFFF) )
          {
            v127 = v43;
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)&v252,
              &word_10,
              v119);
            v113 = v253;
            v43 = v127;
          }
          v114 = (uint32_t *)(v252 + 16 * v113);
          v114[2] = v43;
          *v114 = v41;
          v114[1] = v42;
          v114[3] = v157;
          ++v253;
          if ( v183 )
          {
            *(uint32_t *)(v252 + v168 + 4) = v151;
            *(uint32_t *)(v252 + 16 * v201) = v151;
            if ( v160 )
              *(uint32_t *)(v252 + 16 * v193 + 4) = v151;
          }
          if ( v162 )
          {
            *(uint32_t *)(v252 + 16 * v201 + 8) = v164;
            *(uint32_t *)(v252 + 16 * v193 + 4) = v164;
            if ( v183 )
              *(uint32_t *)(v252 + v168 + 8) = v164;
          }
          if ( v160 )
          {
            *(uint32_t *)(v252 + 16 * v193) = v186;
            *(uint32_t *)(v252 + v168 + 8) = v186;
            if ( v162 )
              *(uint32_t *)(v252 + 16 * v201) = v186;
          }
        }
      }
      if ( ++v173 == v140 )
        goto LABEL_113;
    }
    v68 = v196;
    v69 = (hkpStaticCompoundShape::Self *)v177;
    if ( (int)(uintptr_t)(v196) <= v177 )
    {
      v68 = (hkpStaticCompoundShape::Self *)v177;
      v69 = v196;
    }
    v156 = v68;
    if ( v209 <= 0 )
      goto LABEL_81;
    v70 = 0;
    v71 = 0;
    while ( 1 )
    {
      v72 = v208 + v70;
      if ( *(uint32_t *)(v208 + v70) >= (int)(uintptr_t)(v69) )
      {
        if ( *(hkpStaticCompoundShape::Self **)(v208 + v70) != v69 )
          goto LABEL_81;
        v158 = *(hkpStaticCompoundShape::Self **)(v72 + 4);
        if ( (int)(uintptr_t)(v158) >= (int)(uintptr_t)(v156) )
          break;
      }
      ++v71;
      v70 += 12;
      if ( v71 == v209 )
        goto LABEL_81;
    }
    if ( v156 != v158 || (v186 = *(uint32_t *)(v72 + 8)) == -1 )
    {
LABEL_81:
      v73 = v250;
      v186 = v250;
      if ( v250 == (v251 & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)&v249,
          &word_10,
          v119);
        v73 = v250;
      }
      v74 = (float *)(v249 + 16 * v73);
      v250 = v73 + 1;
      v75 = v58 / (float)(v58 - v61);
      *v74 = (float)((float)(v147 - v154) * v75) + v154;
      v74[1] = (float)((float)(v146 - v150) * v75) + v150;
      v74[2] = (float)((float)(v145 - v149) * v75) + v149;
      v74[3] = (float)((float)(v137 - v139) * v75) + v139;
      sub_6C5630(&v208, v196, v177, v186);
    }
    ++v190;
    goto LABEL_56;
  }
  if ( *(int *)(v142 + 36) <= 0 )
    return 0;
  v185 = 0;
  v195 = nullptr;
  v23 = (uint32_t *)v142;
  v24 = 0;
  do
  {
    v171 = v24 << 6;
    v30 = v23[8] + (v24 << 6);
    v236 = *(float *)v30;
    v237 = *(float *)(v30 + 4);
    v238 = *(float *)(v30 + 8);
    v239 = *(uint32_t *)(v30 + 12);
    v240 = *(uint32_t *)(v30 + 16);
    v241 = *(uint32_t *)(v30 + 20);
    v242 = *(uint32_t *)(v30 + 24);
    v243 = *(uint32_t *)(v30 + 28);
    v244 = *(uint32_t *)(v30 + 32);
    v245 = *(uint32_t *)(v30 + 36);
    v246 = *(uint32_t *)(v30 + 40);
    v247 = *(uint32_t *)(v30 + 44);
    v126 = v30;
    sub_6D3970(v248, v141, &v236);
    v206 = 0;
    (*(void (**)(char *))(*(uint32_t *)v189 + 8))(v205);
    if ( v205[0] != 0 )
    {
      v182 = (hkpShape::Self *)hkpStaticGeometryUtil::createCompressedMeshShape(v153, *(uint32_t *)(v126 + 48), v248, v176, v135, &v236, &v206, v189);
    }
    else
    {
      hkQsTransformf::copyToTransform((hkQsTransformf::Self *)v248, (hkTransformf::Self *)&v257);
      (*(void (**)(uint32_t, float *, uint32_t, float *))(**(uint32_t **)(v126 + 48) + 24))(
        *(uint32_t *)(v126 + 48),
        &v257,
        0,
        &v228);
      if ( ((uint8_t)((8 * ((float)((float)(v235 + v231) * 0.5) <= v176[7]))
                            | (4 * ((float)((float)(v234 + v230) * 0.5) <= v176[6]))
                            | ((float)((float)(v232 + v228) * 0.5) <= v176[4])
                            | (2 * ((float)((float)(v233 + v229) * 0.5) <= v176[5])))
          & (((float)((float)(v234 + v230) * 0.5) >= v176[2] ? 4 : 0)
           | ((float)((float)(v232 + v228) * 0.5) >= *v176)
           | ((float)((float)(v233 + v229) * 0.5) >= v176[1] ? 2 : 0))) != 7 )
        goto LABEL_36;
      v182 = *(hkpShape::Self **)(v126 + 48);
    }
    if ( v182 != nullptr )
    {
      if ( v195 == nullptr )
      {
        v34 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        v195 = (hkpStaticCompoundShape::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v34 + 44) + 8))(
                                           *(uint32_t *)(*(uint32_t *)v34 + 44),
                                           112);
        hkpStaticCompoundShape::Construct(v195, 1);
      }
      v167 = hkpStaticCompoundShape::addInstance(v195, v182, (const hkQsTransformf::Self *)&v236);
      v25 = v167 << 6;
      *(uint32_t *)(*((uint32_t *)v195 + 8) + v25 + 52) = *(uint32_t *)(v23[8] + v171 + 52);
      *(uint32_t *)(*((uint32_t *)v195 + 8) + v25 + 56) = *(uint32_t *)(v23[8] + v171 + 56);
      *(uint32_t *)(*((uint32_t *)v195 + 8) + v25 + 60) = *(uint32_t *)(v23[8] + v171 + 60);
      v163 = *((uint32_t *)v195 + 8) + (v167 << 6);
      v121 = *(uint32_t *)(v163 + 12);
      v26 = v121 & 0x6F;
      if ( (*(uint8_t *)(v23[8] + v171 + 12) & 0x10) != 0 )
        v26 = v121 & 0x6F | 0x10;
      *(uint32_t *)(v163 + 12) = v121 & 0xC0FFFF80 | v26 | 0x3F000000;
      if ( v23[12] > v185 )
      {
        v170 = *(uint16_t *)(v23[11] + 2 * v185);
        v27 = v167 + 1;
        if ( *((uint32_t *)v195 + 12) >= v167 + 1 )
          v27 = *((uint32_t *)v195 + 12);
        v28 = *((uint32_t *)v195 + 13) & 0x3FFFFFFF;
        if ( v28 < v27 )
        {
          v29 = 2 * v28;
          v123 = v27;
          if ( v29 < v27 )
            v29 = v27;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v204,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            (char *)v195 + 44,
            v29,
            2);
          v27 = v123;
        }
        *((uint32_t *)v195 + 12) = v27;
        *(uint16_t *)(*((uint32_t *)v195 + 11) + 2 * v167) = v170;
      }
      G4_VCALL<void>(v189, 12, v23, v185, v195, v167);
      if ( v206 != 0 && *((uint16_t *)v182 + 3) != 0 )
      {
        v172 = v23;
        do
        {
          v31 = *((uint32_t *)v182 + 1);
          HIWORD(v32) = HIWORD(v31);
          LOWORD(v32) = 0;
          v33 = v32 | (uint16_t)(v31 - 1);
        }
        while ( v31 != __sync_val_compare_and_swap((volatile int32_t *)v182 + 1, v31, v33) );
        v23 = v172;
        if ( (uint16_t)v33 == 0 )
          G4_VCALL<void>(v182, 16);
      }
    }
LABEL_36:
    v24 = ++v185;
  }
  while ( v23[9] > v185 );
  v142 = 0;
  if ( v195 != nullptr )
  {
    hkpStaticCompoundShape::bake(v195);
    v142 = (unsigned int)(uintptr_t)(v195);
    *v133 = 1;
  }
  return v142;
}


