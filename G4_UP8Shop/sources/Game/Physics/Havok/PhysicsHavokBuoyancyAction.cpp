#include "Core/Utils/DecompTypes.h"
#include "Game/Physics/Havok/PhysicsHavokBuoyancyAction.h"

// ----------------------------------------------------------------------------
// Function: PhysicsHavokBuoyancyAction::addToWorld_thunk  (binary VA: 0x6bb320)
// Original: PhysicsHavokBuoyancyAction::addToWorld_thunk
// ----------------------------------------------------------------------------
hkpAction::Self * PhysicsHavokBuoyancyAction::addToWorld_thunk(int a1, int a2)
{
  return PhysicsHavokBuoyancyAction::addToWorld((hkpAction::Self *)(a1 - 28), a2);
}

// ----------------------------------------------------------------------------
// Function: PhysicsHavokBuoyancyAction::addToWorld  (binary VA: 0x6bb330)
// Original: PhysicsHavokBuoyancyAction::addToWorld
// ----------------------------------------------------------------------------
hkpAction::Self * PhysicsHavokBuoyancyAction::addToWorld(hkpAction::Self *a1, int a2)
{
  hkpAction::Self *result;

  result = a1;
  if ( *((uint32_t *)a1 + 2) == 0 )
    return (hkpAction::Self *)hkpWorld::addAction(*(hkpWorld::Self **)(a2 + 8), a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: PhysicsHavokBuoyancyAction::removeReference_thunk  (binary VA: 0x6bcea0)
// Original: PhysicsHavokBuoyancyAction::removeReference_thunk
// ----------------------------------------------------------------------------
int PhysicsHavokBuoyancyAction::removeReference_thunk(int a1)
{
  return PhysicsHavokBuoyancyAction::removeReference(a1 - 28);
}

// ----------------------------------------------------------------------------
// Function: PhysicsHavokBuoyancyAction::removeReference  (binary VA: 0x6bceb0)
// Original: PhysicsHavokBuoyancyAction::removeReference
// ----------------------------------------------------------------------------
int PhysicsHavokBuoyancyAction::removeReference(int a1)
{
  bool v1;
  int32_t v2;
  int v3;
  int32_t v4;
  int result;
  int32_t v6; // ett

  v1 = *(uint16_t *)(a1 + 6) == 0;
  *(uint32_t *)(a1 + 24) = 0;
  if ( !v1 )
  {
    do
    {
      v2 = *(uint32_t *)(a1 + 4);
      HIWORD(v3) = HIWORD(v2);
      LOWORD(v3) = 0;
      v4 = v3 | (uint16_t)(v2 - 1);
      v6 = v2;
      result = __sync_val_compare_and_swap((volatile int32_t *)(a1 + 4), v2, v4);
    }
    while ( v6 != result );
    if ( (uint16_t)v4 == 0 )
      return G4_VCALL<int>(a1, 16);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: PhysicsHavokBuoyancyAction::applyAction  (binary VA: 0x6bf040)
// Original: PhysicsHavokBuoyancyAction::applyAction
// ----------------------------------------------------------------------------
int PhysicsHavokBuoyancyAction::applyAction(long double a1, int a2, int a3, const hkMatrix3f::Self *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, float a18, float a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, float a57, float a58, float a59, float a60, float a61, float a62, float a63, float a64)
{
  uint8_t STACK[572] = {0};
  float a65;
  int v65;
  int result;
  uint32_t *v67;
  uint32_t *v68;
  float v69;
  uint32_t *v70;
  int v71;
  float *v72;
  float v73; // xmm0_4
  int v74; // xmm1_4
  int v75; // xmm2_4
  int v76;
  void (*v77)(int, uint32_t *, uint32_t *);
  int v78;
  float v79; // xmm6_4
  float v80; // xmm5_4
  float v81; // xmm1_4
  float v82; // xmm2_4
  unsigned int v83;
  float v84; // xmm3_4
  float v85; // xmm0_4
  float v86; // xmm7_4
  float v87; // xmm7_4
  float *v88;
  unsigned int v89;
  float *v90;
  float v91; // xmm3_4
  float v92; // xmm4_4
  float *v93;
  int v94;
  int v95;
  int v96;
  __m128i v97;
  float v98; // xmm0_4
  __m128i v99;
  int v100;
  int v101;
  int v102;
  float *v103;
  float *v104;
  float *v105;
  float v106; // xmm0_4
  float v107; // xmm1_4
  float v108; // xmm2_4
  float v109; // xmm5_4
  float v110; // xmm6_4
  float v111; // xmm3_4
  float v112; // xmm4_4
  float v113; // xmm6_4
  float v114; // xmm5_4
  float v115; // xmm4_4
  float v116; // xmm7_4
  float v117; // xmm6_4
  float v118; // xmm4_4
  float v119; // xmm6_4
  __m128i v120;
  float v121; // xmm4_4
  float v122; // xmm3_4
  int v123;
  int v124; // xmm0_4
  float v125; // xmm0_4
  int v126;
  float v127; // xmm4_4
  float v128; // xmm3_4
  float v129; // xmm0_4
  float v130; // xmm4_4
  float v131; // xmm2_4
  float v132; // xmm1_4
  float v133; // xmm0_4
  float v134; // xmm1_4
  __m128i v135;
  float v136; // xmm0_4
  int v137;
  float v138; // xmm0_4
  float v139; // xmm4_4
  __m128 v140;
  __m128 v141;
  __m128i v142;
  float v143; // xmm7_4
  __m128i v144;
  int v145;
  int v146;
  float v147; // xmm3_4
  float v148; // xmm6_4
  float v149; // xmm7_4
  float v150; // xmm3_4
  float v151; // xmm4_4
  float v152; // xmm5_4
  int v153;
  float v154; // xmm6_4
  float v155; // xmm7_4
  float v156; // xmm5_4
  float v157; // xmm7_4
  float v158; // xmm7_4
  float v159; // xmm3_4
  __m128i v160;
  float v161; // xmm0_4
  int v162;
  float v163; // xmm1_4
  float v164; // xmm3_4
  float v165; // xmm0_4
  float v166; // xmm5_4
  float v167; // xmm1_4
  float v168; // xmm3_4
  float v169; // xmm2_4
  float v170; // xmm4_4
  float v171; // xmm0_4
  float v172; // xmm5_4
  float v173; // xmm0_4
  float v174; // xmm6_4
  float v175; // xmm7_4
  float v176; // xmm0_4
  float v177; // xmm6_4
  unsigned int v178; // xmm2_4
  unsigned int v179; // xmm1_4
  unsigned int v180; // xmm4_4
  unsigned int v181; // xmm0_4
  __m128i v182;
  int v183;
  int v184;
  int v185;
  int v186;
  float v187; // xmm3_4
  float v188; // xmm6_4
  float v189; // xmm3_4
  unsigned int v190; // xmm4_4
  float v191; // xmm3_4
  unsigned int v192; // xmm3_4
  float v193; // xmm4_4
  int v194;
  float *v195;
  int v196;
  float *v197;
  float v198; // xmm1_4
  __m128i v199;
  int v200; // xmm6_4
  int v201;
  float *v202;
  float v203; // xmm6_4
  float v204; // xmm3_4
  float v205; // xmm5_4
  int v206;
  float *v207;
  __m128i v208;
  int v209;
  int v210; // xmm5_4
  int v211;
  float *v212;
  float v213; // xmm5_4
  float v214; // xmm2_4
  float v215; // xmm4_4
  float v216; // xmm4_4
  float v217; // xmm3_4
  float v218; // xmm1_4
  float v219; // xmm1_4
  float v220; // xmm0_4
  float v221; // xmm1_4
  float v222; // xmm2_4
  float v223; // xmm4_4
  float v224; // xmm3_4
  float v225; // xmm5_4
  float v226; // xmm3_4
  float v240;
  int v241;
  float v242;
  float v243;
  float v244;
  float v245;
  float v246;
  int v247;
  float v248;
  float v249;
  float v250;
  int v251;
  float v252;
  float v253;
  int v254;
  float v255;
  float v256;
  float v257;
  float v258;
  float v259;
  float v260;
  float v261;
  float v262;
  float v263;
  float v264;
  float v265;
  int v266;
  float v267;
  float *v268;
  float v269;
  float v270;
  float v271;
  float v272;
  float v273;
  float v274;
  float v275;
  float v276;
  int v277;
  float v278;
  float v279;
  float v280;
  float v281;
  float v282;
  int v283;
  float v284;
  float v285;
  float v286;
  int v287;
  float v288;
  float v289;
  float v290;
  float v291;
  float v292;
  int v293;
  float v294;
  float v295;
  float v296;
  float v297;
  float v298;
  float *v299;
  float *v300;
  float v301;
  float v302;
  float v303;
  float v304;
  unsigned int v305;
  int v306;
  float v307;
  float v308;
  typedef float _g4_t_v227;
  typedef int _g4_t_v228;
  typedef int _g4_t_v229;
  typedef uint32_t _g4_t_v230[3];
  typedef uint8_t _g4_t_v231[64];
  typedef uint32_t _g4_t_v232[4];
  typedef float _g4_t_v233[10];
  typedef float _g4_t_v234;
  typedef float _g4_t_v235;
  typedef float _g4_t_v236;
  typedef uint32_t _g4_t_v237[2];
  typedef float _g4_t_v238;
  typedef float _g4_t_v239;
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (0u + sizeof(_g4_t_v227)) > _g4_s0 ? (0u + sizeof(_g4_t_v227)) : _g4_s0,
    _g4_s2 = (140u + sizeof(_g4_t_v228)) > _g4_s1 ? (140u + sizeof(_g4_t_v228)) : _g4_s1,
    _g4_s3 = (140u + sizeof(_g4_t_v229)) > _g4_s2 ? (140u + sizeof(_g4_t_v229)) : _g4_s2,
    _g4_s4 = (148u + sizeof(_g4_t_v230)) > _g4_s3 ? (148u + sizeof(_g4_t_v230)) : _g4_s3,
    _g4_s5 = (160u + sizeof(_g4_t_v231)) > _g4_s4 ? (160u + sizeof(_g4_t_v231)) : _g4_s4,
    _g4_s6 = (224u + sizeof(_g4_t_v232)) > _g4_s5 ? (224u + sizeof(_g4_t_v232)) : _g4_s5,
    _g4_s7 = (240u + sizeof(_g4_t_v233)) > _g4_s6 ? (240u + sizeof(_g4_t_v233)) : _g4_s6,
    _g4_s8 = (280u + sizeof(_g4_t_v234)) > _g4_s7 ? (280u + sizeof(_g4_t_v234)) : _g4_s7,
    _g4_s9 = (288u + sizeof(_g4_t_v235)) > _g4_s8 ? (288u + sizeof(_g4_t_v235)) : _g4_s8,
    _g4_s10 = (292u + sizeof(_g4_t_v236)) > _g4_s9 ? (292u + sizeof(_g4_t_v236)) : _g4_s9,
    _g4_s11 = (304u + sizeof(_g4_t_v237)) > _g4_s10 ? (304u + sizeof(_g4_t_v237)) : _g4_s10,
    _g4_s12 = (312u + sizeof(_g4_t_v238)) > _g4_s11 ? (312u + sizeof(_g4_t_v238)) : _g4_s11,
    _g4_s13 = (316u + sizeof(_g4_t_v239)) > _g4_s12 ? (316u + sizeof(_g4_t_v239)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 0u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 140u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 140u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 148u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 160u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 224u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 240u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 280u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 288u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 292u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 304u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 312u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 316u);

  v65 = *(uint32_t *)(a2 + 24);
  result = *(uint32_t *)(a2 + 32);
  if ( result == 0 || *(uint8_t *)(result + 21) == 0 && *(uint8_t *)(result + 20) == 0 )
    return result;
  v228 = *(uint32_t *)(v65 + 128);
  if ( v228 <= 0 )
    return result;
  v67 = *(uint32_t **)(v65 + 124);
  if ( *v67 == 1 )
  {
    v68 = *(uint32_t **)(v65 + 124);
  }
  else
  {
    result = 0;
    do
    {
      if ( ++result == v228 )
        return result;
    }
    while ( v67[4 * result] != 1 );
    result = 0;
    do
    {
      if ( ++result == v228 )
        return result;
      v68 = &v67[4 * result];
    }
    while ( *v68 != 1 );
    v65 = *(uint32_t *)(a2 + 24);
  }
  result = v68[2];
  if ( result <= 0 )
    return result;
  hkpImpulseAccumulator::Construct((hkpImpulseAccumulator::Self *)v233, (hkpRigidBody::Self *)v65, *(float *)(a3 + 8));
  v69 = 0.0;
  if ( *(int *)(v65 + 128) > 0 )
  {
    v70 = *(uint32_t **)(v65 + 124);
    if ( *v70 == 2 )
    {
      v72 = *(float **)(v65 + 124);
LABEL_23:
      v69 = v72[2];
    }
    else
    {
      v229 = v65;
      v71 = *(uint32_t *)(v65 + 128);
      while ( ++LODWORD(v69) != v71 )
      {
        v72 = (float *)&v70[4 * LODWORD(v69)];
        if ( *(uint32_t *)v72 == 2 )
        {
          v65 = v229;
          goto LABEL_23;
        }
      }
      v65 = v229;
      v69 = 0.0;
    }
  }
  v73 = v69 - *(float *)(v65 + 296);
  if ( v73 > 5.0 )
  {
    v216 = *(float *)(v65 + 432) * 0.9f;
    v217 = *(float *)(v65 + 436) * 0.9f;
    v218 = *(float *)(v65 + 444) * 0.9f;
    v238 = *(float *)(v65 + 440);
    *(float *)v237 = v216;
    *(float *)&v237[1] = v217;
    v239 = v218;
    v227 = v238;
    hkpEntity::activate((hkpEntity::Self *)v65);
    G4_VCALL<void>(v65 + 224, 80, v237);
    memset(v231, 0, 16);
    v219 = v73 - 5.0;
    v220 = *(float *)(v65 + 292) - v233[5];
    v221 = (float)(v219 - (float)(v227 * 0.1f)) * 500000.0;
    v222 = (float)(*(float *)(v65 + 288) - v233[4]) * (float)(v233[1] * v221);
    v234 = v234 + (float)(v233[1] * v221);
    v235 = (float)(v220 * (float)(v233[1] * v221)) + v235;
    v236 = v236 - v222;
    hkpEntity::activate((hkpEntity::Self *)v65);
    G4_VCALL<void>(v65 + 224, 84, v231);
  }
  v74 = *(uint32_t *)(v65 + 324);
  v75 = *(uint32_t *)(v65 + 328);
  v76 = *(uint32_t *)(a2 + 32);
  v232[0] = 0;
  v232[1] = 1065353216;
  v232[2] = 0;
  v232[3] = 0;
  v77 = *(void (**)(int, uint32_t *, uint32_t *))(*(uint32_t *)v76 + 8);
  v78 = *(uint32_t *)(v65 + 320);
  v230[1] = v74;
  v230[0] = v78;
  v230[2] = v75;
  v77(v76, v230, v232);
  a57 = *(float *)&STACK[0x1A0];
  a58 = *(float *)&STACK[0x1A4];
  a59 = *(float *)&STACK[0x1A8];
  a60 = *(float *)&STACK[0x1AC];
  hkVector4f::setRotatedInverseDir((hkVector4f::Self *)&a61, a4, (const hkVector4f::Self *)&a57);
  v79 = *(float *)(v65 + 368);
  v80 = *(float *)(v65 + 372);
  v81 = a62;
  v299 = *(float **)(a2 + 40);
  v82 = a63;
  v83 = 0;
  v84 = (float)((float)((float)(*(float *)(v65 + 288) * a57) + (float)(*(float *)(v65 + 292) * a58)) + a60)
      + (float)(*(float *)(v65 + 296) * a59);
  v85 = a61;
  v86 = *(float *)(v65 + 376) * a63;
  a64 = v84;
  v305 = *(uint32_t *)(a2 + 44);
  v87 = -(float)((float)((float)((float)(v80 * a62) + (float)(v79 * a61)) + v86) + v84);
  v246 = v79 + (float)(v87 * a61);
  v244 = (float)(v87 * a63) + *(float *)(v65 + 376);
  v245 = v80 + (float)(v87 * a62);
  v243 = (float)(v87 * v84) + *(float *)(v65 + 380);
  if ( v305 > 3 )
  {
    v88 = v299;
    v89 = 3;
    v90 = v299 + 3;
    while ( 1 )
    {
      v89 += 4;
      *v90 = (float)((float)((float)(*v88 * v85) + (float)(v88[1] * v81)) + v84) + (float)(v88[2] * v82);
      v90[4] = (float)((float)((float)(v88[4] * v85) + (float)(v88[5] * v81)) + a64) + (float)(v88[6] * v82);
      v90[8] = (float)((float)((float)(v88[8] * v85) + (float)(v88[9] * v81)) + a64) + (float)(v88[10] * v82);
      v91 = (float)(v88[12] * v85) + (float)(v88[13] * v81);
      v92 = v88[14] * v82;
      v88 += 16;
      v90[12] = (float)(v91 + a64) + v92;
      v90 += 16;
      if ( v305 <= v89 )
        break;
      v84 = a64;
    }
    v83 = ((v305 - 4) & 0xFFFFFFFC) + 4;
  }
  if ( v305 > v83 )
  {
    v93 = &v299[4 * v83];
    do
    {
      ++v83;
      v93[3] = (float)((float)((float)(*v93 * v85) + (float)(v93[1] * v81)) + a64) + (float)(v93[2] * v82);
      v93 += 4;
    }
    while ( v305 > v83 );
  }
  v257 = 0.0;
  v283 = *(uint32_t *)(a2 + 56);
  v259 = 0.0;
  v261 = 0.0;
  v263 = 0.0;
  if ( v283 <= 0 )
  {
    v123 = *(uint32_t *)(a2 + 32);
    goto LABEL_54;
  }
  v247 = 0;
  v266 = *(uint32_t *)(a2 + 32);
  v268 = (float *)a4;
  v94 = v65;
  do
  {
    v254 = *(uint32_t *)(a2 + 52) + 32 * v247;
    v95 = *(uint32_t *)(a2 + 40);
    v96 = v95 + 16 * *(uint32_t *)(v254 + 16);
    v306 = v95 + 16 * *(uint32_t *)(v254 + 20);
    v300 = (float *)(v95 + 16 * *(uint32_t *)(v254 + 24));
g4_m128_raw(v97) = *(unsigned int *)(v306 + 12);
    v98 = v300[3];
g4_m128_raw(v99) = *(unsigned int *)(v96 + 12);
    if ( v98 >= 0.0 && *(float *)g4_m128_ptr<int32_t>(v99) >= 0.0 && *(float *)g4_m128_ptr<int32_t>(v97) >= 0.0 )
      goto LABEL_52;
    if ( (float)(v98 * *(float *)g4_m128_ptr<int32_t>(v99)) < -0.00000011920929f )
    {
g4_m128_raw(v182) = *((unsigned int *)v300 + 3);
      *(float *)g4_m128_ptr<int32_t>(v182) = v98 - *(float *)g4_m128_ptr<int32_t>(v99);
      v251 = 1;
      v183 = _mm_cvtsi128_si32(v182);
      v184 = v183 ^ (v183 + 2139095040);
      v185 = 2130706432 - v183;
      v101 = 2;
      v186 = v185 & (v184 >> 31);
      v100 = 6;
      v187 = (float)(2.0
                   - (float)((float)((float)(2.0 - (float)(*(float *)&v186 * (float)(v98 - *(float *)g4_m128_ptr<int32_t>(v99))))
                                   * *(float *)&v186)
                           * (float)(v98 - *(float *)g4_m128_ptr<int32_t>(v99))))
           * (float)((float)(2.0 - (float)(*(float *)&v186 * (float)(v98 - *(float *)g4_m128_ptr<int32_t>(v99)))) * *(float *)&v186);
      v188 = *v300;
      v297 = (float)(2.0 - (float)(v187 * (float)(v98 - *(float *)g4_m128_ptr<int32_t>(v99)))) * (float)(v187 * v98);
      v282 = v300[2];
      v292 = v297 * (float)(*(float *)(v96 + 8) - v282);
      v189 = *(float *)v96 - *v300;
      *(float *)&STACK[0x1F4] = (float)(v300[1] - v245) + (float)((float)(*(float *)(v96 + 4) - v300[1]) * v297);
      *(float *)&v190 = (float)(v188 - v246) + (float)(v189 * v297);
      v191 = v282 - v244;
      v277 = 5;
      STACK[0x1F0] = v190;
      *(float *)&v192 = v191 + v292;
      v287 = 4;
      STACK[0x1F8] = v192;
      v193 = (float)(*(float *)g4_m128_ptr<int32_t>(v99) - v98) * v297;
      v293 = 3;
      *(float *)&STACK[0x1FC] = (float)(v98 - v243) + v193;
      if ( *(float *)g4_m128_ptr<int32_t>(v99) >= 0.0 )
        goto LABEL_39;
    }
    else
    {
      v100 = 5;
      v277 = 4;
      v287 = 3;
      v293 = 2;
      v101 = 1;
      v251 = 0;
      if ( *(float *)g4_m128_ptr<int32_t>(v99) >= 0.0 )
        goto LABEL_39;
    }
    v194 = 16 * v251;
    v251 = v101;
    v101 = v293;
    v195 = (float *)((char *)&STACK[0x1F0] + v194);
    *v195 = *(float *)v96 - v246;
    v195[1] = *(float *)(v96 + 4) - v245;
    v195[2] = *(float *)(v96 + 8) - v244;
    v195[3] = *(float *)g4_m128_ptr<int32_t>(v99) - v243;
    v293 = v287;
    v287 = v277;
    v277 = v100;
LABEL_39:
    if ( (float)(*(float *)g4_m128_ptr<int32_t>(v97) * *(float *)g4_m128_ptr<int32_t>(v99)) < -0.00000011920929f )
    {
      v199 = v99;
      *(float *)g4_m128_ptr<int32_t>(v199) = *(float *)g4_m128_ptr<int32_t>(v99) - *(float *)g4_m128_ptr<int32_t>(v97);
      v200 = (2130706432 - _mm_cvtsi128_si32(v199))
           & ((_mm_cvtsi128_si32(v199) ^ (_mm_cvtsi128_si32(v199) + 2139095040)) >> 31);
      v201 = 16 * v251;
      v251 = v101;
      v101 = v293;
      v202 = (float *)((char *)&STACK[0x1F0] + v201);
g4_m128_lane<int32_t>(v199, 0) = *(uint32_t *)v96;
      v203 = (float)((float)((float)(2.0
                                   - (float)((float)((float)(2.0
                                                           - (float)(*(float *)&v200
                                                                   * (float)(*(float *)g4_m128_ptr<int32_t>(v99)
                                                                           - *(float *)g4_m128_ptr<int32_t>(v97))))
                                                   * *(float *)&v200)
                                           * (float)(*(float *)g4_m128_ptr<int32_t>(v99) - *(float *)g4_m128_ptr<int32_t>(v97))))
                           * (float)((float)(2.0
                                           - (float)(*(float *)&v200
                                                   * (float)(*(float *)g4_m128_ptr<int32_t>(v99) - *(float *)g4_m128_ptr<int32_t>(v97))))
                                   * *(float *)&v200))
                   * *(float *)g4_m128_ptr<int32_t>(v99))
           * (float)(2.0
                   - (float)((float)((float)(2.0
                                           - (float)((float)((float)(2.0
                                                                   - (float)(*(float *)&v200
                                                                           * (float)(*(float *)g4_m128_ptr<int32_t>(v99)
                                                                                   - *(float *)g4_m128_ptr<int32_t>(v97))))
                                                           * *(float *)&v200)
                                                   * (float)(*(float *)g4_m128_ptr<int32_t>(v99) - *(float *)g4_m128_ptr<int32_t>(v97))))
                                   * (float)((float)(2.0
                                                   - (float)(*(float *)&v200
                                                           * (float)(*(float *)g4_m128_ptr<int32_t>(v99) - *(float *)g4_m128_ptr<int32_t>(v97))))
                                           * *(float *)&v200))
                           * (float)(*(float *)g4_m128_ptr<int32_t>(v99) - *(float *)g4_m128_ptr<int32_t>(v97))));
      v204 = (float)((float)(*(float *)(v306 + 8) - *(float *)(v96 + 8)) * v203) + *(float *)(v96 + 8);
      v205 = *(float *)v306;
      v202[1] = (float)((float)((float)(*(float *)(v306 + 4) - *(float *)(v96 + 4)) * v203) + *(float *)(v96 + 4))
              - v245;
      v202[2] = v204 - v244;
      v202[3] = (float)(*(float *)g4_m128_ptr<int32_t>(v99) - v243)
              + (float)((float)(*(float *)g4_m128_ptr<int32_t>(v97) - *(float *)g4_m128_ptr<int32_t>(v99)) * v203);
      *v202 = (float)((float)((float)(v205 - *(float *)g4_m128_ptr<int32_t>(v199)) * v203) + *(float *)g4_m128_ptr<int32_t>(v199)) - v246;
      v293 = v287;
      v287 = v277;
      if ( *(float *)g4_m128_ptr<int32_t>(v97) >= 0.0 )
        goto LABEL_41;
    }
    else if ( *(float *)g4_m128_ptr<int32_t>(v97) >= 0.0 )
    {
      goto LABEL_41;
    }
    v206 = 16 * v251;
    v251 = v101;
    v101 = v293;
    v293 = v287;
    v207 = (float *)((char *)&STACK[0x1F0] + v206);
    *v207 = *(float *)v306 - v246;
    v207[1] = *(float *)(v306 + 4) - v245;
    v207[2] = *(float *)(v306 + 8) - v244;
    v207[3] = *(float *)g4_m128_ptr<int32_t>(v97) - v243;
LABEL_41:
    if ( (float)(v98 * *(float *)g4_m128_ptr<int32_t>(v97)) < -0.00000011920929f )
    {
      v208 = v97;
      *(float *)g4_m128_ptr<int32_t>(v208) = *(float *)g4_m128_ptr<int32_t>(v97) - v98;
      v209 = _mm_cvtsi128_si32(v208);
      v210 = (2130706432 - v209) & ((v209 ^ (v209 + 2139095040)) >> 31);
      v211 = 16 * v251;
      v251 = v101;
      v101 = v293;
      v212 = (float *)((char *)&STACK[0x1F0] + v211);
g4_m128_lane<int32_t>(v208, 0) = *(uint32_t *)v306;
      v213 = (float)((float)((float)(2.0
                                   - (float)((float)((float)(2.0
                                                           - (float)(*(float *)&v210
                                                                   * (float)(*(float *)g4_m128_ptr<int32_t>(v97) - v98)))
                                                   * *(float *)&v210)
                                           * (float)(*(float *)g4_m128_ptr<int32_t>(v97) - v98)))
                           * (float)((float)(2.0 - (float)(*(float *)&v210 * (float)(*(float *)g4_m128_ptr<int32_t>(v97) - v98)))
                                   * *(float *)&v210))
                   * *(float *)g4_m128_ptr<int32_t>(v97))
           * (float)(2.0
                   - (float)((float)((float)(2.0
                                           - (float)((float)((float)(2.0
                                                                   - (float)(*(float *)&v210
                                                                           * (float)(*(float *)g4_m128_ptr<int32_t>(v97) - v98)))
                                                           * *(float *)&v210)
                                                   * (float)(*(float *)g4_m128_ptr<int32_t>(v97) - v98)))
                                   * (float)((float)(2.0
                                                   - (float)(*(float *)&v210 * (float)(*(float *)g4_m128_ptr<int32_t>(v97) - v98)))
                                           * *(float *)&v210))
                           * (float)(*(float *)g4_m128_ptr<int32_t>(v97) - v98)));
      v214 = (float)((float)(v300[2] - *(float *)(v306 + 8)) * v213) + *(float *)(v306 + 8);
      v215 = *v300;
      v212[1] = (float)((float)((float)(v300[1] - *(float *)(v306 + 4)) * v213) + *(float *)(v306 + 4)) - v245;
      v212[2] = v214 - v244;
      *v212 = (float)((float)((float)(v215 - *(float *)g4_m128_ptr<int32_t>(v208)) * v213) + *(float *)g4_m128_ptr<int32_t>(v208)) - v246;
      v212[3] = (float)(*(float *)g4_m128_ptr<int32_t>(v97) - v243) + (float)((float)(v98 - *(float *)g4_m128_ptr<int32_t>(v97)) * v213);
    }
    if ( v98 < 0.0 )
    {
      v196 = v251;
      v251 = v101;
      v197 = (float *)(&STACK[0x1F0] + 4 * v196);
      *v197 = *v300 - v246;
      v197[1] = v300[1] - v245;
      v198 = v300[2] - v244;
      v197[3] = v98 - v243;
      v197[2] = v198;
    }
    if ( v251 > 2 )
    {
      v102 = 2;
      v307 = *(float *)&STACK[0x1F4];
      v103 = v268;
      v301 = *(float *)&STACK[0x1F8];
      v284 = *(float *)&STACK[0x1F0];
      while ( 1 )
      {
        while ( 1 )
        {
          v104 = (float *)(&STACK[0x1F0] + 4 * v102);
          v105 = (float *)(&STACK[0x1F0] + 4 * v102 - 4);
          v106 = v105[2];
          v107 = v105[1];
          v294 = *v104;
          v108 = *v105;
          v288 = v104[1];
          v278 = v104[2];
          v109 = (float)(v288 + v107) + v307;
          v110 = (float)(*v104 + *v105) + v284;
          v111 = (float)((float)((float)((float)((float)(v301 * v108) - (float)(v284 * v106)) * v288)
                               + (float)((float)((float)(v307 * v106) - (float)(v301 * v107)) * *v104))
                       + (float)((float)((float)(v284 * v107) - (float)(v307 * v108)) * v278))
               * *(float *)(a2 + 36);
          v263 = v263 + v111;
          v112 = (float)(v278 + v106) + v301;
          v261 = (float)(v111 * v110) + v261;
          v259 = (float)(v111 * v109) + v259;
          v257 = (float)(v111 * v112) + v257;
          if ( *(uint8_t *)(v266 + 21) != 0 )
            break;
LABEL_47:
          if ( ++v102 == v251 )
            goto LABEL_51;
        }
        v113 = (float)(v110 * 0.33333334f) + v246;
        v114 = (float)(v109 * 0.33333334f) + v245;
        v115 = (float)(v112 * 0.33333334f) + v244;
        v274 = (float)((float)((float)(v103[4] * v114) + (float)(*v103 * v113)) + v103[12]) + (float)(v103[8] * v115);
        v241 = v94;
        v271 = (float)((float)((float)(v103[5] * v114) + (float)(v103[1] * v113)) + v103[13]) + (float)(v103[9] * v115);
        v269 = (float)((float)((float)(v114 * v103[6]) + (float)(v113 * v103[2])) + v103[14]) + (float)(v115 * v103[10]);
        hkVector4f::setRotatedDir((hkVector4f::Self *)&a65, (const hkMatrix3f::Self *)v103, (const hkVector4f::Self *)v254);
        v94 = v241;
        v250 = a65;
        v249 = *(float *)&STACK[0x194];
        v248 = *(float *)&STACK[0x198];
        v116 = v271 - *(float *)(v241 + 324);
        v117 = *(float *)(v241 + 452);
        v267 = v274 - *(float *)(v241 + 320);
g4_m128_raw(v120) = *(unsigned int *)(v241 + 456);
        v252 = (float)(*(float *)(v254 + 12)
                     - (float)((float)(*(float *)(v241 + 296) * *(float *)&STACK[0x198])
                             + (float)(a65 * *(float *)(v241 + 288))))
             - (float)(*(float *)&STACK[0x194] * *(float *)(v241 + 292));
        *(float *)&STACK[0x19C] = v252;
        v118 = v269 - *(float *)(v241 + 328);
        v119 = (float)((float)(v117 * v118) + *(float *)(v241 + 432)) - (float)(v116 * *(float *)g4_m128_ptr<int32_t>(v120));
        *(float *)g4_m128_ptr<int32_t>(v120) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v120) * v267) + *(float *)(v241 + 436))
                                 - (float)(*(float *)(v241 + 448) * v118);
        v121 = (float)((float)(*(float *)(v241 + 448) * v116) + *(float *)(v94 + 440))
             - (float)(v267 * *(float *)(v94 + 452));
        v122 = -(float)((float)((float)(v249 * *(float *)g4_m128_ptr<int32_t>(v120)) + (float)(v250 * v119)) + (float)(v248 * v121));
        if ( v122 < 0.0 )
        {
          *(float *)g4_m128_ptr<int32_t>(v120) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v120) * *(float *)g4_m128_ptr<int32_t>(v120))
                                           + (float)(v119 * v119))
                                   + (float)(v121 * v121);
          if ( *(float *)g4_m128_ptr<int32_t>(v120) <= 0.0 )
          {
            v156 = 0.0;
            v266 = *(uint32_t *)(a2 + 32);
          }
          else
          {
            v153 = ((_mm_cvtsi128_si32(v120) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v120) >> 1));
            v154 = (float)(1.5
                         - (float)((float)(*(float *)&v153 * *(float *)&v153) * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v120))))
                 * *(float *)&v153;
            v155 = (float)(1.5 - (float)((float)(v154 * v154) * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v120)))) * v154;
            v266 = *(uint32_t *)(a2 + 32);
            v156 = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v120) * *(float *)(v266 + 12)) * 0.25) * v122)
                 * (float)((float)(1.5 - (float)((float)(v155 * v155) * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v120)))) * v155);
          }
          v157 = v108;
g4_m128_raw(v160) = LODWORD(v106);
          v158 = v157 - v284;
          v159 = (float)((float)(v107 - v307) * (float)(v278 - v301))
               - (float)((float)(v288 - v307) * (float)(v106 - v301));
          *(float *)g4_m128_ptr<int32_t>(v160) = (float)((float)(v106 - v301) * (float)(v294 - v284))
                                   - (float)((float)(v278 - v301) * v158);
          *(float *)g4_m128_ptr<int32_t>(v160) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v160) * *(float *)g4_m128_ptr<int32_t>(v160))
                                           + (float)(v159 * v159))
                                   + (float)((float)((float)((float)(v288 - v307) * v158)
                                                   - (float)((float)(v107 - v307) * (float)(v294 - v284)))
                                           * (float)((float)((float)(v288 - v307) * v158)
                                                   - (float)((float)(v107 - v307) * (float)(v294 - v284))));
          v161 = 0.0;
          if ( *(float *)g4_m128_ptr<int32_t>(v160) <= 0.0 )
          {
            v172 = 0.0;
            v177 = 0.0;
            v296 = 0.0;
            v175 = 0.0;
            v281 = 0.0;
            v170 = 0.0;
            v167 = 0.0;
            v169 = 0.0;
            v168 = 0.0;
          }
          else
          {
            v162 = ((_mm_cvtsi128_si32(v160) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v160) >> 1));
            v163 = (float)(1.5
                         - (float)((float)(*(float *)&v162 * *(float *)&v162) * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v160))))
                 * *(float *)&v162;
            v164 = (float)(1.5 - (float)((float)(v163 * v163) * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v160)))) * v163;
            v165 = (float)((float)((float)(1.5 - (float)((float)(v164 * v164) * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v160))))
                                 * v164)
                         * *(float *)g4_m128_ptr<int32_t>(v160))
                 * v156;
            v166 = v271 - *(float *)&STACK[0x1C4];
            v167 = (float)(v248 * *(float *)&STACK[0x1B4]) * v165;
            v168 = (float)(v250 * *(float *)&STACK[0x1B4]) * v165;
            v169 = (float)(v249 * *(float *)&STACK[0x1B4]) * v165;
            v170 = (float)(*(float *)&STACK[0x1B4] * v252) * v165;
            v171 = v167 * v166;
            v172 = v166 * v168;
            v291 = v171;
            v173 = v269 - *(float *)&STACK[0x1C8];
            v174 = v169 * v173;
            v175 = v168 * v173;
            v176 = v274 - *(float *)&STACK[0x1C0];
            v281 = v174;
            v296 = v167 * v176;
            v177 = v169 * v176;
            v161 = v291;
          }
          *(float *)&v178 = v169 + *(float *)&STACK[0x1D4];
          *(float *)&v179 = v167 + *(float *)&STACK[0x1D8];
          *(float *)&v180 = v170 + *(float *)&STACK[0x1DC];
          *(float *)&v181 = (float)(v161 + *(float *)&STACK[0x1E0]) - v281;
          *(float *)&STACK[0x1D0] = v168 + *(float *)&STACK[0x1D0];
          STACK[0x1D4] = v178;
          STACK[0x1D8] = v179;
          STACK[0x1DC] = v180;
          STACK[0x1E0] = v181;
          *(float *)&STACK[0x1E4] = (float)(*(float *)&STACK[0x1E4] + v175) - v296;
          *(float *)&STACK[0x1E8] = (float)(*(float *)&STACK[0x1E8] + v177) - v172;
          goto LABEL_47;
        }
        ++v102;
        v266 = *(uint32_t *)(a2 + 32);
        if ( v102 == v251 )
        {
LABEL_51:
          v268 = v103;
          v283 = *(uint32_t *)(a2 + 56);
          break;
        }
      }
    }
LABEL_52:
    ++v247;
  }
  while ( v247 < v283 );
  v65 = v94;
  v123 = v266;
LABEL_54:
  if ( *(uint8_t *)(v123 + 20) != 0 && v263 > 0.0 )
  {
    v124 = (2130706432 - LODWORD(v263)) & ((LODWORD(v263) ^ (LODWORD(v263) + 2139095040)) >> 31);
    v125 = (float)(2.0 - (float)(v263 * (float)((float)(2.0 - (float)(v263 * *(float *)&v124)) * *(float *)&v124)))
         * (float)((float)(2.0 - (float)(v263 * *(float *)&v124)) * *(float *)&v124);
    v126 = *(uint32_t *)(v65 + 8);
    v127 = (float)(0.25 * v125) * (float)(2.0 - (float)(v125 * v263));
    v128 = (float)(v261 * v127) + v246;
    v129 = (float)(v259 * v127) + v245;
    v130 = (float)(v127 * v257) + v244;
    v131 = (float)((float)((float)(*(float *)(v65 + 240) * v128) + (float)(*(float *)(v65 + 256) * v129))
                 + *(float *)(v65 + 288))
         + (float)(*(float *)(v65 + 272) * v130);
    v132 = (float)(*(float *)(v65 + 244) * v128) + (float)(*(float *)(v65 + 260) * v129);
    v133 = (float)(v129 * *(float *)(v65 + 264)) + (float)(v128 * *(float *)(v65 + 248));
g4_m128_raw(v135) = *(unsigned int *)(v126 + 20);
    v134 = (float)(v132 + *(float *)(v65 + 292)) + (float)(*(float *)(v65 + 276) * v130);
    v308 = (float)(v133 + *(float *)(v65 + 296)) + (float)(v130 * *(float *)(v65 + 280));
    *(float *)g4_m128_ptr<int32_t>(v135) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v135) * *(float *)g4_m128_ptr<int32_t>(v135))
                                     + (float)(*(float *)(v126 + 16) * *(float *)(v126 + 16)))
                             + (float)(*(float *)(v126 + 24) * *(float *)(v126 + 24));
    v136 = 0.0;
    if ( *(float *)g4_m128_ptr<int32_t>(v135) > 0.0 )
    {
      v137 = ((_mm_cvtsi128_si32(v135) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v135) >> 1));
      v138 = (float)(1.5 - (float)((float)(*(float *)&v137 * *(float *)&v137) * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v135))))
           * *(float *)&v137;
      v139 = (float)(1.5 - (float)((float)(v138 * v138) * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v135)))) * v138;
      v136 = (float)((float)((float)(a18 * 0.16666667f) * *(float *)g4_m128_ptr<int32_t>(v135))
                   * (float)((float)(1.5 - (float)((float)(v139 * v139) * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v135))))
                           * v139))
           * v263;
    }
    v265 = a57;
    v264 = a58;
    v262 = a59;
    v260 = a60;
    hkpMotion::getMass((hkpMotion::Self *)(v65 + 224));
    v240 = a1;
g4_m128_lane<float>(v140, 0) = v240;
    v141 = _mm_cmplt_ss(g4_m128_u32(0x42C80000u), v140);
g4_m128_raw(v142) = *(unsigned int *)(v65 + 440);
    v285 = *(float *)(v65 + 432);
    LODWORD(v295) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v141, g4_m128_from<__m128>(0x80000000)), 0))
                  |g4_m128_lane<int32_t>(v141, 0) & 0xC61C4000;
    v302 = *(float *)(v65 + 436);
    v279 = *(float *)g4_m128_ptr<int32_t>(v142) - (float)((float)(a19 * a19) * *(float *)g4_m128_ptr<int32_t>(v142));
    v289 = *(float *)(v65 + 444);
    v242 = (float)(a19 * a19) * *(float *)g4_m128_ptr<int32_t>(v142);
    v143 = (float)(v302 * v302) + (float)(v285 * v285);
g4_m128_raw(v144) = LODWORD(v279);
    *(float *)g4_m128_ptr<int32_t>(v144) = v143 + (float)(*(float *)g4_m128_ptr<int32_t>(v144) * *(float *)g4_m128_ptr<int32_t>(v144));
    if ( *(float *)g4_m128_ptr<int32_t>(v144) > 0.0 )
    {
      v145 = ((_mm_cvtsi128_si32(v144) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v144) >> 1));
      v272 = *(float *)&v145
           * (float)(1.5 - (float)((float)(*(float *)&v145 * *(float *)&v145) * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v144))));
      v275 = *(float *)g4_m128_ptr<int32_t>(v144)
           * (float)((float)(v272
                           * (float)(1.5 - (float)((float)(v272 * v272) * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v144)))))
                   * (float)(1.5
                           - (float)((float)((float)(v272
                                                   * (float)(1.5
                                                           - (float)((float)(v272 * v272)
                                                                   * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v144)))))
                                           * (float)(v272
                                                   * (float)(1.5
                                                           - (float)((float)(v272 * v272)
                                                                   * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v144))))))
                                   * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v144)))));
      if ( v275 > 5.0 )
      {
        v285 = v285 * (float)(5.0 / v275);
        v302 = v302 * (float)(5.0 / v275);
        v279 = v279 * (float)(5.0 / v275);
        v289 = (float)(5.0 / v275) * v289;
      }
    }
    *(float *)g4_m128_ptr<int32_t>(v142) = (float)(*(float *)g4_m128_ptr<int32_t>(v142) * *(float *)g4_m128_ptr<int32_t>(v142)) + v143;
    if ( *(float *)g4_m128_ptr<int32_t>(v142) <= 0.0 )
    {
      v258 = *(float *)&STACK[0x1D4];
      v255 = *(float *)&STACK[0x1D0];
      v256 = *(float *)&STACK[0x1D8];
      v290 = *(float *)&STACK[0x1DC];
      v273 = *(float *)&STACK[0x1C4];
      v276 = *(float *)&STACK[0x1C0];
      v148 = *(float *)&STACK[0x1B4];
      v270 = *(float *)&STACK[0x1C8];
      v149 = *(float *)&STACK[0x1E0];
      v280 = *(float *)&STACK[0x1E4];
      v303 = *(float *)&STACK[0x1E8];
    }
    else
    {
      v146 = ((_mm_cvtsi128_si32(v142) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v142) >> 1));
      v147 = (float)(*(float *)&v146
                   * (float)(1.5
                           - (float)((float)(*(float *)&v146 * *(float *)&v146) * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v142)))))
           * (float)(1.5
                   - (float)((float)((float)(*(float *)&v146
                                           * (float)(1.5
                                                   - (float)((float)(*(float *)&v146 * *(float *)&v146)
                                                           * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v142)))))
                                   * (float)(*(float *)&v146
                                           * (float)(1.5
                                                   - (float)((float)(*(float *)&v146 * *(float *)&v146)
                                                           * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v142))))))
                           * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v142))));
      if ( (float)((float)((float)(1.5 - (float)((float)(v147 * v147) * (float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v142)))) * v147)
                 * *(float *)g4_m128_ptr<int32_t>(v142)) > 2.0 )
      {
        v148 = *(float *)&STACK[0x1B4];
        v223 = *(float *)(*(uint32_t *)(a2 + 32) + 16);
        v224 = (float)(v295 * v223) * *(float *)&STACK[0x1B4];
        v286 = v285 * v224;
        v304 = v302 * v224;
        v290 = (float)(v224 * v289) + *(float *)&STACK[0x1DC];
        v298 = (float)((float)(v223 * v279) + v242) * (float)(v295 * *(float *)&STACK[0x1B4]);
        v273 = *(float *)&STACK[0x1C4];
        v258 = v304 + *(float *)&STACK[0x1D4];
        v256 = v298 + *(float *)&STACK[0x1D8];
        v255 = v286 + *(float *)&STACK[0x1D0];
        v276 = *(float *)&STACK[0x1C0];
        v225 = (float)((float)(*(float *)(v65 + 320) + v131) * 0.5) - *(float *)&STACK[0x1C0];
        v253 = (float)(0.5 * (float)(*(float *)(v65 + 324) + v134)) - *(float *)&STACK[0x1C4];
        v270 = *(float *)&STACK[0x1C8];
        v226 = (float)((float)(v308 + *(float *)(v65 + 328)) * 0.5) - *(float *)&STACK[0x1C8];
        v149 = (float)(*(float *)&STACK[0x1E0] - (float)(v304 * v226)) + (float)(v298 * v253);
        v280 = (float)((float)(v226 * v286) + *(float *)&STACK[0x1E4]) - (float)(v298 * v225);
        v303 = (float)((float)(v225 * v304) + *(float *)&STACK[0x1E8]) - (float)(v286 * v253);
      }
      else
      {
        v255 = *(float *)&STACK[0x1D0];
        v258 = *(float *)&STACK[0x1D4];
        v256 = *(float *)&STACK[0x1D8];
        v276 = *(float *)&STACK[0x1C0];
        v273 = *(float *)&STACK[0x1C4];
        v290 = *(float *)&STACK[0x1DC];
        v148 = *(float *)&STACK[0x1B4];
        v270 = *(float *)&STACK[0x1C8];
        v149 = *(float *)&STACK[0x1E0];
        v280 = *(float *)&STACK[0x1E4];
        v303 = *(float *)&STACK[0x1E8];
      }
    }
    v150 = (float)(v262 * v136) * v148;
    v151 = (float)(v264 * v136) * v148;
    v152 = (float)(v265 * v136) * v148;
    *(float *)&STACK[0x1E0] = (float)((float)((float)(v134 - v273) * v150) + v149)
                            - (float)(v151 * (float)(v308 - v270));
    *(float *)&STACK[0x1DC] = (float)((float)(v136 * v260) * v148) + v290;
    *(float *)&STACK[0x1D8] = v150 + v256;
    *(float *)&STACK[0x1E4] = (float)((float)((float)(v308 - v270) * v152) + v280)
                            - (float)((float)(v131 - v276) * v150);
    *(float *)&STACK[0x1D0] = v152 + v255;
    *(float *)&STACK[0x1D4] = v151 + v258;
    *(float *)&STACK[0x1E8] = (float)((float)((float)(v131 - v276) * v151) + v303)
                            - (float)((float)(v134 - v273) * v152);
  }
  return (int)(uintptr_t)(hkpImpulseAccumulator::flushImpulses((hkpImpulseAccumulator::Self *)&STACK[0x1B0]));
}

// ----------------------------------------------------------------------------
// Function: PhysicsHavokBuoyancyAction::clone  (binary VA: 0x6d3230)
// Original: PhysicsHavokBuoyancyAction::clone
// ----------------------------------------------------------------------------
int PhysicsHavokBuoyancyAction::clone()
{
  typedef int _g4_t_v1;
  typedef int _g4_t_v2[3];
  typedef int _g4_t_v3[128];
  enum : size_t {
    _g4_s0 = 608u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v2)) > _g4_s1 ? (4u + sizeof(_g4_t_v2)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v3)) > _g4_s2 ? (16u + sizeof(_g4_t_v3)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 4u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 16u);

  hkErrStream::Construct((hkErrStream::Self *)v2, (hkString::Self *)v3, 512);
  hkOstream::opShl((int)(uintptr_t)(v2), (hkString::Self *)"Clonning not implemented");
  if ( hkError::messageError(
         (hkError::Self *)0xF894A7BF,
         (int)(uintptr_t)(v3),
         "F:\\G4\\G4_UP8Shop\\androidPort\\GameSpecific\\..\\..\\project_vs\\..\\sources\\\\Game\\Physics\\Havok\\/Physic"
         "sHavokBuoyancyAction.h",
         (const char *)&word_2C + 1,
         v1) != 0 )
    __builtin_debugtrap();
  hkErrStream::Destroy((hkErrStream::Self *)v2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_6D3490  (binary VA: 0x6d3490)
// Original: sub_6D3490
// ----------------------------------------------------------------------------
int sub_6D3490(int a1)
{
  return ((sub_6D34A0((hkpUnaryAction::Self *)(a1 - 28))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_6D35F0  (binary VA: 0x6d35f0)
// Original: sub_6D35F0
// ----------------------------------------------------------------------------
int sub_6D35F0(int a1)
{
  return PhysicsHavokBuoyancyAction::Destroy((hkpUnaryAction::Self *)(a1 - 28));
}

// ----------------------------------------------------------------------------
// Function: PhysicsHavokBuoyancyAction::Destroy  (binary VA: 0x6d3600)
// Original: PhysicsHavokBuoyancyAction::Destroy
// ----------------------------------------------------------------------------
int PhysicsHavokBuoyancyAction::Destroy(hkpUnaryAction::Self *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20578A8);
  *((uint32_t *)a1 + 7) = ((uint32_t)(uintptr_t)&off_20578E0);
  v1 = *((uint32_t *)a1 + 15);
  *((uint32_t *)a1 + 14) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)a1 + 13),
      32 * v1);
  v2 = *((uint32_t *)a1 + 12);
  *((uint32_t *)a1 + 13) = 0;
  *((uint32_t *)a1 + 15) = 0x80000000;
  *((uint32_t *)a1 + 11) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)a1 + 10),
      16 * v2);
  *((uint32_t *)a1 + 10) = 0;
  *((uint32_t *)a1 + 7) = (uint32_t)(uintptr_t)(&off_2054DE8);
  *((uint32_t *)a1 + 12) = 0x80000000;
  hkpUnaryAction::Destroy(a1);
  v3 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v4 = 64;
  if ( *((uint16_t *)a1 + 3) != 0xFFFF )
    v4 = *((uint16_t *)a1 + 3);
  return G4_VCALL<int>(v3, 12, a1, v4);
}


