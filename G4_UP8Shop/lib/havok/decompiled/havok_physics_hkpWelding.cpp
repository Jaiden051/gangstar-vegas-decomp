#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpWelding.h"

// ----------------------------------------------------------------------------
// Function: hkpWeldingUtility::staticClass  (binary VA: 0x1698ee0)
// Original: hkpWeldingUtility::staticClass
// ----------------------------------------------------------------------------
void * hkpWeldingUtility::staticClass()
{
  return &hkpWeldingUtilityClass;
}

// ----------------------------------------------------------------------------
// Function: hkpWeldingViewer::getProcessTag  (binary VA: 0x1842c10)
// Original: hkpWeldingViewer::getProcessTag
// ----------------------------------------------------------------------------
int hkpWeldingViewer::getProcessTag()
{
  return hkpWeldingViewer::m_tag;
}

// ----------------------------------------------------------------------------
// Function: hkpWeldingViewer::worldAddedCallback  (binary VA: 0x1842c40)
// Original: hkpWeldingViewer::worldAddedCallback
// ----------------------------------------------------------------------------
int hkpWeldingViewer::worldAddedCallback(hkpWeldingViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpWorld::addWorldPostSimulationListener(a2, (hkpWeldingViewer::Self *)((char *)self + 40));
}

// ----------------------------------------------------------------------------
// Function: hkpWeldingViewer::worldRemovedCallback  (binary VA: 0x1842c80)
// Original: hkpWeldingViewer::worldRemovedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpWeldingViewer::worldRemovedCallback(hkpWeldingViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpWorld::removeWorldPostSimulationListener(a2, (hkpWeldingViewer::Self *)((char *)self + 40));
}

// ----------------------------------------------------------------------------
// Function: hkpWeldingViewer::Destroy  (binary VA: 0x1842cc0)
// Original: hkpWeldingViewer::~hkpWeldingViewer
// ----------------------------------------------------------------------------
void hkpWeldingViewer::Destroy(hkpWeldingViewer::Self *self)
{
  int v1;
  int v2;
  hkpWorld::Self *v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A3848);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A3880);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A38AC);
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_20A38C4);
  v1 = *((uint32_t *)self + 9);
  if ( v1 != 0 && *(int *)(v1 + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(hkpWorld::Self **)(*(uint32_t *)(v1 + 108) + 4 * v2++);
      hkpWorld::removeWorldPostSimulationListener(v3, (hkpWeldingViewer::Self *)((char *)self + 40));
      v1 = *((uint32_t *)self + 9);
    }
    while ( v2 < *(uint32_t *)(v1 + 112) );
  }
  *((uint32_t *)self + 10) = ((uint32_t)(uintptr_t)&off_209E868);
  hkpWorldViewerBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpWeldingViewer::Destroy_ea1842d80  (binary VA: 0x1842d80)
// Original: hkpWeldingViewer::~hkpWeldingViewer
// ----------------------------------------------------------------------------
void hkpWeldingViewer::Destroy_ea1842d80(hkpWeldingViewer::Self *self)
{
  int v1;
  int v2;

  hkpWeldingViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 44;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpWeldingViewer::postSimulationCallback  (binary VA: 0x1842e10)
// Original: hkpWeldingViewer::postSimulationCallback
// ----------------------------------------------------------------------------
int hkpWeldingViewer::postSimulationCallback(hkpWeldingViewer::Self *self, hkpWorld::Self *a2)
{
  int *address;
  uint32_t *v3;
  uint64_t v4; // rax
  hkpPhysicsSystem::Self *WorldAsOneSystem;
  int v6;
  int v7;
  int v8;
  int v9;
  float v10; // xmm3_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm7_4
  float v15; // xmm5_4
  float v16; // xmm3_4
  float v17; // xmm4_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm0_4
  float v21; // xmm5_4
  float v22; // xmm7_4
  float v23; // xmm2_4
  float v24; // xmm7_4
  float v25; // xmm5_4
  float v26; // xmm7_4
  float v27; // xmm0_4
  float v28; // xmm3_4
  float v29; // xmm7_4
  float v30; // xmm2_4
  float v31; // xmm5_4
  float v32; // xmm4_4
  float v33; // xmm1_4
  float v34; // xmm6_4
  float v35; // xmm5_4
  float v36; // xmm3_4
  float v37; // xmm0_4
  float v38; // xmm5_4
  float v39; // xmm4_4
  float v40; // xmm2_4
  float v41; // xmm6_4
  float v42; // xmm5_4
  float v43; // xmm2_4
  float v44; // xmm4_4
  float v45; // xmm3_4
  float v46; // xmm1_4
  float v47; // xmm3_4
  float v48; // xmm1_4
  float v49; // xmm0_4
  float v50; // xmm2_4
  float v51; // xmm1_4
  float v52; // xmm2_4
  float v53; // xmm1_4
  int v54;
  float *v55;
  __m128 v56;
  float *v57;
  __m128 v58;
  __m128 v59;
  __m128 v60;
  __m128i m128_i128;
  float v62; // xmm4_4
  float v63; // xmm5_4
  int v64;
  int v65;
  float v66; // xmm4_4
  __m128 v67;
  __m128 v68;
  int v69;
  int v70;
  char *v71;
  float v72; // xmm5_4
  __m128i v73;
  float v74; // xmm1_4
  float v75; // xmm0_4
  __m128i v76;
  float v77; // xmm4_4
  float v78; // xmm6_4
  int v79;
  int v80;
  float v81; // xmm4_4
  float v82; // xmm1_4
  float v83; // xmm2_4
  int v84;
  int32_t v85; // kr00_4
  int32_t v86;
  int32_t v87; // ett
  uint64_t v88; // rax
  uint32_t *v89;
  int v90;
  int v91;
  float v92; // xmm7_4
  float j; // xmm6_4
  float v94; // xmm4_4
  __m128i v95;
  float v96; // xmm0_4
  float v97; // xmm1_4
  float v98; // xmm3_4
  float v99; // xmm3_4
  __m128i v100;
  float v101; // xmm5_4
  float v102; // xmm6_4
  int v103;
  int v104;
  float v105; // xmm5_4
  float v106; // xmm2_4
  float v107; // xmm1_4
  int v108;
  float v109; // xmm0_4
  typedef float *_g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef hkpWorld::Self *_g4_t_v114;
  typedef int _g4_t_v115;
  typedef hkpPhysicsSystem::Self *_g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef hkpMeshWeldingUtility::Self *_g4_t_v119;
  typedef int _g4_t_v120;
  typedef float _g4_t_v121;
  typedef hkpWeldingViewer::Self *_g4_t_v122;
  typedef int _g4_t_v123;
  typedef float _g4_t_v124;
  typedef float _g4_t_v125;
  typedef float _g4_t_v126;
  typedef float _g4_t_v127;
  typedef float _g4_t_v128;
  typedef float _g4_t_v129;
  typedef float _g4_t_v130;
  typedef float _g4_t_v131;
  typedef float _g4_t_v132;
  typedef float _g4_t_v133;
  typedef float _g4_t_v134;
  typedef float _g4_t_v135;
  typedef float _g4_t_v136;
  typedef int _g4_t_i;
  typedef float _g4_t_v138;
  typedef float _g4_t_v139;
  typedef float _g4_t_v140;
  typedef char _g4_t_v141[4];
  typedef float _g4_t_v142;
  typedef float _g4_t_v143;
  typedef float _g4_t_v144;
  typedef float _g4_t_v145;
  typedef float _g4_t_v146;
  typedef float _g4_t_v147;
  typedef float _g4_t_v148;
  typedef float _g4_t_v149;
  typedef __m128 _g4_t_v150;
  typedef float _g4_t_v151;
  typedef float _g4_t_v152;
  typedef float _g4_t_v153;
  typedef float _g4_t_v154;
  typedef float _g4_t_v155;
  typedef float _g4_t_v156;
  typedef float _g4_t_v157;
  typedef float _g4_t_v158;
  typedef float _g4_t_v159[8];
  typedef float _g4_t_v160;
  typedef float _g4_t_v161;
  typedef float _g4_t_v162;
  typedef float _g4_t_v163;
  typedef float _g4_t_v164;
  typedef float _g4_t_v165;
  typedef float _g4_t_v166;
  typedef float _g4_t_v167;
  typedef float _g4_t_v168;
  typedef float _g4_t_v169;
  typedef float _g4_t_v170;
  typedef float _g4_t_v171;
  typedef uint32_t _g4_t_v172[134];
  enum : size_t {
    _g4_s0 = 912u,
    _g4_s1 = (8u + sizeof(_g4_t_v111)) > _g4_s0 ? (8u + sizeof(_g4_t_v111)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v112)) > _g4_s1 ? (16u + sizeof(_g4_t_v112)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v113)) > _g4_s2 ? (32u + sizeof(_g4_t_v113)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v114)) > _g4_s3 ? (36u + sizeof(_g4_t_v114)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v115)) > _g4_s4 ? (44u + sizeof(_g4_t_v115)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v116)) > _g4_s5 ? (48u + sizeof(_g4_t_v116)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v117)) > _g4_s6 ? (52u + sizeof(_g4_t_v117)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v118)) > _g4_s7 ? (56u + sizeof(_g4_t_v118)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v119)) > _g4_s8 ? (60u + sizeof(_g4_t_v119)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v120)) > _g4_s9 ? (68u + sizeof(_g4_t_v120)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v121)) > _g4_s10 ? (80u + sizeof(_g4_t_v121)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v122)) > _g4_s11 ? (88u + sizeof(_g4_t_v122)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v123)) > _g4_s12 ? (100u + sizeof(_g4_t_v123)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v124)) > _g4_s13 ? (104u + sizeof(_g4_t_v124)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v125)) > _g4_s14 ? (108u + sizeof(_g4_t_v125)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v126)) > _g4_s15 ? (108u + sizeof(_g4_t_v126)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v127)) > _g4_s16 ? (112u + sizeof(_g4_t_v127)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v128)) > _g4_s17 ? (112u + sizeof(_g4_t_v128)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v129)) > _g4_s18 ? (112u + sizeof(_g4_t_v129)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v130)) > _g4_s19 ? (116u + sizeof(_g4_t_v130)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v131)) > _g4_s20 ? (116u + sizeof(_g4_t_v131)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v132)) > _g4_s21 ? (120u + sizeof(_g4_t_v132)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v133)) > _g4_s22 ? (124u + sizeof(_g4_t_v133)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v134)) > _g4_s23 ? (124u + sizeof(_g4_t_v134)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v135)) > _g4_s24 ? (128u + sizeof(_g4_t_v135)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v136)) > _g4_s25 ? (128u + sizeof(_g4_t_v136)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_i)) > _g4_s26 ? (132u + sizeof(_g4_t_i)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v138)) > _g4_s27 ? (136u + sizeof(_g4_t_v138)) : _g4_s27,
    _g4_s29 = (136u + sizeof(_g4_t_v139)) > _g4_s28 ? (136u + sizeof(_g4_t_v139)) : _g4_s28,
    _g4_s30 = (136u + sizeof(_g4_t_v140)) > _g4_s29 ? (136u + sizeof(_g4_t_v140)) : _g4_s29,
    _g4_s31 = (140u + sizeof(_g4_t_v141)) > _g4_s30 ? (140u + sizeof(_g4_t_v141)) : _g4_s30,
    _g4_s32 = (144u + sizeof(_g4_t_v142)) > _g4_s31 ? (144u + sizeof(_g4_t_v142)) : _g4_s31,
    _g4_s33 = (148u + sizeof(_g4_t_v143)) > _g4_s32 ? (148u + sizeof(_g4_t_v143)) : _g4_s32,
    _g4_s34 = (152u + sizeof(_g4_t_v144)) > _g4_s33 ? (152u + sizeof(_g4_t_v144)) : _g4_s33,
    _g4_s35 = (156u + sizeof(_g4_t_v145)) > _g4_s34 ? (156u + sizeof(_g4_t_v145)) : _g4_s34,
    _g4_s36 = (160u + sizeof(_g4_t_v146)) > _g4_s35 ? (160u + sizeof(_g4_t_v146)) : _g4_s35,
    _g4_s37 = (164u + sizeof(_g4_t_v147)) > _g4_s36 ? (164u + sizeof(_g4_t_v147)) : _g4_s36,
    _g4_s38 = (168u + sizeof(_g4_t_v148)) > _g4_s37 ? (168u + sizeof(_g4_t_v148)) : _g4_s37,
    _g4_s39 = (172u + sizeof(_g4_t_v149)) > _g4_s38 ? (172u + sizeof(_g4_t_v149)) : _g4_s38,
    _g4_s40 = (176u + sizeof(_g4_t_v150)) > _g4_s39 ? (176u + sizeof(_g4_t_v150)) : _g4_s39,
    _g4_s41 = (192u + sizeof(_g4_t_v151)) > _g4_s40 ? (192u + sizeof(_g4_t_v151)) : _g4_s40,
    _g4_s42 = (196u + sizeof(_g4_t_v152)) > _g4_s41 ? (196u + sizeof(_g4_t_v152)) : _g4_s41,
    _g4_s43 = (200u + sizeof(_g4_t_v153)) > _g4_s42 ? (200u + sizeof(_g4_t_v153)) : _g4_s42,
    _g4_s44 = (204u + sizeof(_g4_t_v154)) > _g4_s43 ? (204u + sizeof(_g4_t_v154)) : _g4_s43,
    _g4_s45 = (208u + sizeof(_g4_t_v155)) > _g4_s44 ? (208u + sizeof(_g4_t_v155)) : _g4_s44,
    _g4_s46 = (212u + sizeof(_g4_t_v156)) > _g4_s45 ? (212u + sizeof(_g4_t_v156)) : _g4_s45,
    _g4_s47 = (216u + sizeof(_g4_t_v157)) > _g4_s46 ? (216u + sizeof(_g4_t_v157)) : _g4_s46,
    _g4_s48 = (220u + sizeof(_g4_t_v158)) > _g4_s47 ? (220u + sizeof(_g4_t_v158)) : _g4_s47,
    _g4_s49 = (224u + sizeof(_g4_t_v159)) > _g4_s48 ? (224u + sizeof(_g4_t_v159)) : _g4_s48,
    _g4_s50 = (256u + sizeof(_g4_t_v160)) > _g4_s49 ? (256u + sizeof(_g4_t_v160)) : _g4_s49,
    _g4_s51 = (260u + sizeof(_g4_t_v161)) > _g4_s50 ? (260u + sizeof(_g4_t_v161)) : _g4_s50,
    _g4_s52 = (264u + sizeof(_g4_t_v162)) > _g4_s51 ? (264u + sizeof(_g4_t_v162)) : _g4_s51,
    _g4_s53 = (268u + sizeof(_g4_t_v163)) > _g4_s52 ? (268u + sizeof(_g4_t_v163)) : _g4_s52,
    _g4_s54 = (272u + sizeof(_g4_t_v164)) > _g4_s53 ? (272u + sizeof(_g4_t_v164)) : _g4_s53,
    _g4_s55 = (276u + sizeof(_g4_t_v165)) > _g4_s54 ? (276u + sizeof(_g4_t_v165)) : _g4_s54,
    _g4_s56 = (280u + sizeof(_g4_t_v166)) > _g4_s55 ? (280u + sizeof(_g4_t_v166)) : _g4_s55,
    _g4_s57 = (284u + sizeof(_g4_t_v167)) > _g4_s56 ? (284u + sizeof(_g4_t_v167)) : _g4_s56,
    _g4_s58 = (288u + sizeof(_g4_t_v168)) > _g4_s57 ? (288u + sizeof(_g4_t_v168)) : _g4_s57,
    _g4_s59 = (292u + sizeof(_g4_t_v169)) > _g4_s58 ? (292u + sizeof(_g4_t_v169)) : _g4_s58,
    _g4_s60 = (296u + sizeof(_g4_t_v170)) > _g4_s59 ? (296u + sizeof(_g4_t_v170)) : _g4_s59,
    _g4_s61 = (300u + sizeof(_g4_t_v171)) > _g4_s60 ? (300u + sizeof(_g4_t_v171)) : _g4_s60,
    _g4_s62 = (304u + sizeof(_g4_t_v172)) > _g4_s61 ? (304u + sizeof(_g4_t_v172)) : _g4_s61
  };
  alignas(16) uint8_t _g4_sf[_g4_s62];
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 8u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 16u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 32u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 36u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 44u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 48u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 52u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 56u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 60u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 68u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 80u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 88u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 100u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 104u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 108u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 108u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 112u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 112u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 112u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 116u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 116u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 120u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 124u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 124u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 128u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 128u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 132u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 136u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 136u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 136u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 140u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 144u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 148u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 152u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 156u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 160u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 164u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 168u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 172u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 176u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 192u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 196u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 200u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 204u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 208u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 212u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 216u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 220u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 224u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 256u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 260u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 264u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 268u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 272u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 276u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 280u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 284u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 288u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 292u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 296u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 300u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 304u);

  v172[130] = (uint32_t)(uintptr_t)(&self);
  v122 = self;
  v114 = a2;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v113 = *address;
  v3 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v3) < *(uint32_t *)(*address + 12) )
  {
    *v3 = (uint32_t)(uintptr_t)("TthkpWeldingViewer::postSimulationCallback");
    v4 = __rdtsc();
    v3[1] = v4;
    *(uint32_t *)(v113 + 4) = (uint32_t)(uintptr_t)(v3 + 3);
  }
  hkpWorld::lock(v114);
  WorldAsOneSystem = hkpWorld::getWorldAsOneSystem(v114);
  v116 = WorldAsOneSystem;
  v117 = 0;
  if ( *((int *)WorldAsOneSystem + 3) > 0 )
  {
    do
    {
      v6 = *(uint32_t *)(*((uint32_t *)WorldAsOneSystem + 2) + 4 * v117);
      v7 = (*(int (**)(uint32_t))(**(uint32_t **)(v6 + 16) + 64))(*(uint32_t *)(v6 + 16));
      v123 = v7;
      if ( v7 != 0 )
      {
        for ( i = G4_VCALL<int>(v7, 12);
              i != -1;
              i = G4_VCALL<int>(v123, 16, i) )
        {
          v8 = G4_VCALL<int>(v123, 24, i, v172);
          v9 = v8;
          if ( *(uint8_t *)(v8 + 8) == 2 && (unsigned int)*(uint8_t *)(v8 + 22) - 5 > 1 )
          {
            v10 = *(float *)(v8 + 36);
            v11 = *(float *)(v8 + 32);
            v12 = *(float *)(v6 + 256);
            v13 = *(float *)(v8 + 40);
            v14 = *(float *)(v6 + 260) * v10;
            v15 = *(float *)(v6 + 264) * v10;
            v16 = v10 * *(float *)(v6 + 268);
            v17 = (float)((float)((float)(*(float *)(v8 + 36) * v12) + (float)(*(float *)(v6 + 240) * v11))
                        + (float)(*(float *)(v6 + 272) * v13))
                + *(float *)(v6 + 288);
            v18 = (float)(v14 + (float)(*(float *)(v6 + 244) * v11)) + (float)(*(float *)(v6 + 276) * v13);
            v19 = *(float *)(v6 + 248) * v11;
            v20 = v11 * *(float *)(v6 + 252);
            v138 = v17;
            v160 = v17;
            v21 = v15 + v19;
            v22 = *(float *)(v6 + 280) * v13;
            v23 = v13 * *(float *)(v6 + 284);
            v24 = v22 + v21;
            v25 = *(float *)(v6 + 240);
            v161 = v18 + *(float *)(v6 + 292);
            v162 = v24 + *(float *)(v6 + 296);
            v26 = v20 + v16;
            v27 = *(float *)(v8 + 48);
            v28 = *(float *)(v8 + 52);
            v29 = v26 + v23;
            v30 = *(float *)(v8 + 56);
            v31 = (float)((float)(v12 * v28) + (float)(v25 * v27)) + (float)(*(float *)(v6 + 272) * v30);
            v163 = v29 + *(float *)(v6 + 300);
            v164 = v31 + *(float *)(v6 + 288);
            v32 = *(float *)(v6 + 264) * v28;
            v33 = v12 * *(float *)(v8 + 68);
            v34 = (float)((float)(*(float *)(v6 + 260) * v28) + (float)(*(float *)(v6 + 244) * v27))
                + (float)(*(float *)(v6 + 276) * v30);
            v35 = *(float *)(v6 + 248) * v27;
            v36 = (float)(v28 * *(float *)(v6 + 268)) + (float)(v27 * *(float *)(v6 + 252));
            v37 = *(float *)(v6 + 300);
            v38 = v35 + v32;
            v39 = *(float *)(v6 + 280) * v30;
            v40 = v30 * *(float *)(v6 + 284);
            v165 = v34 + *(float *)(v6 + 292);
            v41 = *(float *)(v8 + 64);
            v42 = v38 + v39;
            v43 = v40 + v36;
            v44 = *(float *)(v8 + 72);
            v45 = (float)(*(float *)(v6 + 240) * v41) + v33;
            v46 = *(float *)(v6 + 272) * v44;
            v166 = v42 + *(float *)(v6 + 296);
            v47 = v45 + v46;
            v48 = *(float *)(v6 + 244) * v41;
            v127 = v37 + v43;
            v167 = v37 + v43;
            v49 = *(float *)(v6 + 264) * *(float *)(v8 + 68);
            v50 = v48 + (float)(*(float *)(v6 + 260) * *(float *)(v8 + 68));
            v51 = *(float *)(v6 + 276) * v44;
            v168 = v47 + *(float *)(v6 + 288);
            v52 = v50 + v51;
            v53 = (float)((float)(*(float *)(v6 + 248) * v41) + v49) + (float)(*(float *)(v6 + 280) * v44);
            v169 = v52 + *(float *)(v6 + 292);
            v170 = v53 + *(float *)(v6 + 296);
            v171 = (float)((float)((float)(v41 * *(float *)(v6 + 252))
                                 + (float)(*(float *)(v6 + 268) * *(float *)(v8 + 68)))
                         + (float)(v44 * *(float *)(v6 + 284)))
                 + *(float *)(v6 + 300);
            v142 = (float)((float)(v138 + v164) + v168) * 0.33333334f;
            v143 = (float)((float)(v161 + v165) + v169) * 0.33333334f;
            v144 = (float)((float)(v162 + v166) + v170) * 0.33333334f;
            v145 = (float)((float)(v127 + v163) + v171) * 0.33333334f;
            hkpMeshWeldingUtility::calcAntiClockwiseTriangleNormal(
              (hkpMeshWeldingUtility::Self *)&v160,
              (const hkVector4f::Self *)&v164,
              (const hkVector4f::Self *)&v168,
              (const hkVector4f::Self *)&v146,
              (hkVector4f::Self *)v112);
            v119 = (hkpMeshWeldingUtility::Self *)*(uint16_t *)(v9 + 20);
            v115 = v6;
            v54 = 0;
            v118 = v9;
            v55 = &v160;
            do
            {
              v120 = v54 + 1;
g4_m128_raw(v56) = *((unsigned int *)v55 + 3);
              v57 = &v160 + 4 * ((v54 + 1) % 3);
g4_m128_raw(v58) = *(unsigned int *)v57;
g4_m128_lane<float>(v58, 0) =g4_m128_lane<float>(v58, 0) - *v55;
g4_m128_raw(v59) = *((unsigned int *)v57 + 1);
g4_m128_lane<float>(v59, 0) =g4_m128_lane<float>(v59, 0) - v55[1];
              v133 = v55[2];
g4_m128_raw(v60) = *((unsigned int *)v57 + 2);
              m128_i128 =g4_m128_raw(G4_BITCAST<__m128i>(v58));
g4_m128_lane<float>(v60, 0) =g4_m128_lane<float>(v60, 0) - v133;
              *(float *)g4_m128_ptr<int32_t>(m128_i128) = (float)((float)(g4_m128_lane<float>(v58, 0) *g4_m128_lane<float>(v58, 0))
                                                    + (float)(g4_m128_lane<float>(v59, 0) *g4_m128_lane<float>(v59, 0)))
                                            + (float)(g4_m128_lane<float>(v60, 0) *g4_m128_lane<float>(v60, 0));
              v62 = 0.0;
              if ( *(float *)g4_m128_ptr<int32_t>(m128_i128) > 0.0 )
              {
                v63 = 0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128);
                v64 = _mm_cvtsi128_si32(m128_i128) >> 1;
                v65 = (_mm_cvtsi128_si32(m128_i128) + 2139095040) >> 31;
                v66 = (float)(1.5 * COERCE_FLOAT(v65 & (1597463174 - v64)))
                    - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128))
                                    * COERCE_FLOAT(v65 & (1597463174 - v64)))
                            * (float)(COERCE_FLOAT(v65 & (1597463174 - v64)) * COERCE_FLOAT(v65 & (1597463174 - v64))));
                v62 = (float)(1.5 * (float)((float)(1.5 * v66) - (float)((float)(v63 * v66) * (float)(v66 * v66))))
                    - (float)((float)(v63
                                    * (float)((float)(1.5 * v66) - (float)((float)(v63 * v66) * (float)(v66 * v66))))
                            * (float)((float)((float)(1.5 * v66) - (float)((float)(v63 * v66) * (float)(v66 * v66)))
                                    * (float)((float)(1.5 * v66) - (float)((float)(v63 * v66) * (float)(v66 * v66)))));
              }
              v125 =g4_m128_lane<float>(v58, 0) * v62;
              v128 =g4_m128_lane<float>(v59, 0) * v62;
g4_m128_lane<uint64_t>(v67, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_u32(*(unsigned int *)v55), g4_m128_u32(*((unsigned int *)v55 + 1))), 0);
g4_m128_lane<uint64_t>(v68, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v58, v59), 0);
g4_m128_lane<uint64_t>(v67, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v133)), v56), 0);
              v130 = v62 *g4_m128_lane<float>(v60, 0);
g4_m128_lane<uint64_t>(v68, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v60, g4_m128_from<__m128>(COERCE_UNSIGNED_INT(v57[3] -g4_m128_lane<float>(v56, 0)))), 0);
              v150 = _mm_add_ps(v67, _mm_mul_ps(v68, G4_BITCAST<__m128>(xmmword_1C7CE50)));
              v69 = hkpMeshWeldingUtility::calcSingleEdgeBitcode(v119, v54, (int)(uintptr_t)(v111));
              v70 = *(uint8_t *)(v118 + 22);
              v71 = (char *)&hkpWeldingUtility::m_sinCosTable + 24 * v69;
              v139 = *(float *)&v71[4 * v70 + 4];
              v72 = v146;
g4_m128_raw(v73) = *(unsigned int *)&v71[4 * v70];
              v135 = *(float *)g4_m128_ptr<int32_t>(v73);
              *(float *)g4_m128_ptr<int32_t>(v73) = (float)(*(float *)g4_m128_ptr<int32_t>(v73) * v146)
                                      + (float)((float)((float)(v148 * v128) - (float)(v147 * v130)) * v139);
              v74 = (float)(v135 * v147)
                  + (float)((float)((float)(v130 * v146) - (float)(v148 * (float)(g4_m128_lane<float>(v58, 0) * v62))) * v139);
              v75 = (float)(v135 * v148) + (float)((float)((float)(v125 * v147) - (float)(v128 * v146)) * v139);
              v76 = v73;
              *(float *)g4_m128_ptr<int32_t>(v76) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v73) * *(float *)g4_m128_ptr<int32_t>(v73))
                                              + (float)(v74 * v74))
                                      + (float)(v75 * v75);
              v77 = 0.0;
              if ( *(float *)g4_m128_ptr<int32_t>(v76) > 0.0 )
              {
                v78 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v76);
                v79 = _mm_cvtsi128_si32(v76) >> 1;
                v80 = (_mm_cvtsi128_si32(v76) + 2139095040) >> 31;
                v81 = (float)(1.5 * COERCE_FLOAT(v80 & (1597463174 - v79)))
                    - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v76)) * COERCE_FLOAT(v80 & (1597463174 - v79)))
                            * (float)(COERCE_FLOAT(v80 & (1597463174 - v79)) * COERCE_FLOAT(v80 & (1597463174 - v79))));
                v77 = (float)(1.5 * (float)((float)(1.5 * v81) - (float)((float)(v78 * v81) * (float)(v81 * v81))))
                    - (float)((float)(v78
                                    * (float)((float)(1.5 * v81) - (float)((float)(v78 * v81) * (float)(v81 * v81))))
                            * (float)((float)((float)(1.5 * v81) - (float)((float)(v78 * v81) * (float)(v81 * v81)))
                                    * (float)((float)(1.5 * v81) - (float)((float)(v78 * v81) * (float)(v81 * v81)))));
              }
              v129 = *(float *)g4_m128_ptr<int32_t>(v73) * v77;
              v126 = v74 * v77;
              v124 = v75 * v77;
              if ( v70 == 4 )
              {
                v72 = -v146;
                v83 = -v147;
                v82 = -v148;
                v146 = -v146;
                v147 = -v147;
                v148 = -v148;
              }
              else
              {
                v82 = v148;
                v83 = v147;
              }
              if ( (float)((float)((float)(v129 * v72) + (float)(v126 * v83)) + (float)(v124 * v82)) >= -0.98f )
              {
                v90 = *((uint32_t *)v122 + 6);
                v155 = v72 +g4_m128_lane<float>(v150, 0);
                v121 = v77 * (float)((float)(0.0 * v139) + (float)(v135 * v149));
                v151 = v129 +g4_m128_lane<float>(v150, 0);
                v152 = v126 +g4_m128_lane<float>(v150, 1);
                v156 = v83 +g4_m128_lane<float>(v150, 1);
                v153 = v124 +g4_m128_lane<float>(v150, 2);
                v157 = v82 +g4_m128_lane<float>(v150, 2);
                v154 = v121 +g4_m128_lane<float>(v150, 3);
                v158 =g4_m128_lane<float>(v150, 3) + v149;
                (*(void (**)(char *))(*(uint32_t *)v90 + 72))(v141);
                (*(void (**)(char *))(**((uint32_t **)v122 + 6) + 72))(v141);
                v91 = 0;
                (*(void (**)(char *))(**((uint32_t **)v122 + 6) + 72))(v141);
                v134 = v129;
                v136 = v121;
                v131 = v126;
                v92 = v126;
                v132 = v75 * v77;
                for ( j = v75 * v77; ; j = v124 )
                {
                  ++v91;
g4_m128_raw(v95) = LODWORD(v146);
                  v94 = (float)v91 * 0.1f;
                  *(float *)g4_m128_ptr<int32_t>(v95) = (float)((float)(v146 - v129) * v94) + v129;
                  v96 = (float)((float)(v148 - j) * v94) + j;
                  v97 = (float)((float)(v147 - v92) * v94) + v92;
                  v98 = (float)(v149 - v121) * v94;
                  v100 = v95;
                  v99 = v98 + v121;
                  *(float *)g4_m128_ptr<int32_t>(v100) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v95) * *(float *)g4_m128_ptr<int32_t>(v95))
                                                   + (float)(v97 * v97))
                                           + (float)(v96 * v96);
                  v101 = 0.0;
                  if ( *(float *)g4_m128_ptr<int32_t>(v100) > 0.0 )
                  {
                    v102 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v100);
                    v103 = _mm_cvtsi128_si32(v100) >> 1;
                    v104 = (_mm_cvtsi128_si32(v100) + 2139095040) >> 31;
                    v105 = (float)(1.5 * COERCE_FLOAT(v104 & (1597463174 - v103)))
                         - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v100))
                                         * COERCE_FLOAT(v104 & (1597463174 - v103)))
                                 * (float)(COERCE_FLOAT(v104 & (1597463174 - v103))
                                         * COERCE_FLOAT(v104 & (1597463174 - v103))));
                    v101 = (float)(1.5
                                 * (float)((float)(1.5 * v105) - (float)((float)(v102 * v105) * (float)(v105 * v105))))
                         - (float)((float)(v102
                                         * (float)((float)(1.5 * v105)
                                                 - (float)((float)(v102 * v105) * (float)(v105 * v105))))
                                 * (float)((float)((float)(1.5 * v105)
                                                 - (float)((float)(v102 * v105) * (float)(v105 * v105)))
                                         * (float)((float)(1.5 * v105)
                                                 - (float)((float)(v102 * v105) * (float)(v105 * v105)))));
                  }
                  v106 = *(float *)g4_m128_ptr<int32_t>(v95) * v101;
                  v107 = v97 * v101;
                  v108 = *((uint32_t *)v122 + 6);
                  v159[0] = v134 +g4_m128_lane<float>(v150, 0);
                  v140 = v96 * v101;
                  v109 = v136;
                  v159[4] =g4_m128_lane<float>(v150, 0) + v106;
                  v134 = v106;
                  v159[1] = v131 +g4_m128_lane<float>(v150, 1);
                  v159[5] =g4_m128_lane<float>(v150, 1) + v107;
                  v136 = v99 * v101;
                  v159[2] = v132 +g4_m128_lane<float>(v150, 2);
                  v159[6] =g4_m128_lane<float>(v150, 2) + v140;
                  v159[3] = v109 +g4_m128_lane<float>(v150, 3);
                  v159[7] =g4_m128_lane<float>(v150, 3) + (float)(v99 * v101);
                  v112 = -23296;
                  v111 = v159;
                  (*(void (**)(char *))(*(uint32_t *)v108 + 72))(v141);
                  if ( v91 == 10 )
                    break;
                  v131 = v107;
                  v132 = v140;
                  v92 = v126;
                }
              }
              v54 = v120;
              v55 += 4;
            }
            while ( v120 != 3 );
            v6 = v115;
          }
        }
      }
      WorldAsOneSystem = v116;
      ++v117;
    }
    while ( *((uint32_t *)v116 + 3) > v117 );
    WorldAsOneSystem = v116;
  }
  if ( *((uint16_t *)WorldAsOneSystem + 3) != 0 )
  {
    do
    {
      v85 = *((uint32_t *)v116 + 1);
      HIWORD(v84) = HIWORD(v85);
      LOWORD(v84) = 0;
      v86 = v84 | (uint16_t)(v85 - 1);
      v87 = v85;
    }
    while ( v87 != __sync_val_compare_and_swap((volatile int32_t *)WorldAsOneSystem + 1, v87, v86) );
    if ( (uint16_t)v86 == 0 )
      G4_VCALL<void>(v116, 16);
  }
  LODWORD(v88) = hkpWorld::unlock(v114);
  v89 = *(uint32_t **)(v113 + 4);
  if ( (unsigned int)(uintptr_t)(v89) < *(uint32_t *)(v113 + 12) )
  {
    *v89 = (uint32_t)(uintptr_t)("Et");
    v88 = __rdtsc();
    v89[1] = v88;
    *(uint32_t *)(v113 + 4) = (uint32_t)(uintptr_t)(v89 + 3);
  }
  return v88;
}

// ----------------------------------------------------------------------------
// Function: hkpWeldingViewer::registerViewer  (binary VA: 0x1843d10)
// Original: hkpWeldingViewer::registerViewer
// ----------------------------------------------------------------------------
int hkpWeldingViewer::registerViewer()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "Welding",
             hkpWeldingViewer::create);
  hkpWeldingViewer::m_tag = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWeldingViewer::Construct  (binary VA: 0x1843d60)
// Original: hkpWeldingViewer::hkpWeldingViewer
// ----------------------------------------------------------------------------
int hkpWeldingViewer::Construct(uint32_t *a1, int a2)
{
  int result;
  int v3;
  hkpWorld::Self *v4;

  hkpWorldViewerBase::Construct(a1, a2);
  *a1 = ((uint32_t)(uintptr_t)&off_20A3848);
  a1[2] = ((uint32_t)(uintptr_t)&off_20A3880);
  a1[10] = ((uint32_t)(uintptr_t)&off_20A38C4);
  result = a1[9];
  a1[8] = ((uint32_t)(uintptr_t)&off_20A38AC);
  if ( result != 0 && *(int *)(result + 112) > 0 )
  {
    v3 = 0;
    do
    {
      v4 = *(hkpWorld::Self **)(*(uint32_t *)(result + 108) + 4 * v3++);
      hkpWorld::addWorldPostSimulationListener(v4, (hkpWorldPostSimulationListener::Self *)(a1 + 10));
      result = a1[9];
    }
    while ( v3 < *(uint32_t *)(result + 112) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWeldingViewer::create  (binary VA: 0x1843df0)
// Original: hkpWeldingViewer::create
// ----------------------------------------------------------------------------
uint32_t * hkpWeldingViewer::create(int a1)
{
  int address;
  uint32_t *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   44);
  hkpWeldingViewer::Construct(v2, a1);
  if ( v2 != nullptr )
    return v2 + 2;
  else
    return nullptr;
}

// ----------------------------------------------------------------------------
// Function: hkpWeldingUtility::initWeldingTable  (binary VA: 0x1ad28d0)
// Original: hkpWeldingUtility::initWeldingTable
// ----------------------------------------------------------------------------
void hkpWeldingUtility::initWeldingTable(hkpWeldingUtility::Self *self, float x)
{
  int v2;
  float *v3;
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm5_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;

  v2 = 0;
  v3 = (float *)&unk_212542C;
  do
  {
    v4 = (float)((float)v2 * 0.20943952f) - 3.1415927f;
    if ( v4 >= 0.0 )
    {
      v16 = cosf((float)((float)v2 * 0.20943952f) - 3.1415927f);
      *(v3 - 3) = v16;
      v17 = sinf(v4);
      v5 = v4 + *(float *)&self;
      *(v3 - 2) = v17;
      if ( v5 >= 3.1415927f )
      {
        v7 = -1.0;
        v6 = 3.1415927f - x;
        *(v3 - 1) = -1.0;
        if ( (float)(3.1415927f - x) <= v5 )
        {
          if ( v5 < 3.1415927f )
          {
            v20 = cosf(v5);
            v7 = v20;
          }
          goto LABEL_13;
        }
      }
      else
      {
        v18 = cosf(v5);
        v6 = 3.1415927f - x;
        v7 = v18;
        *(v3 - 1) = v18;
        if ( (float)(3.1415927f - x) <= v5 )
        {
LABEL_13:
          *v3 = v7;
          goto LABEL_8;
        }
      }
      v19 = cosf(v6);
      *v3 = v19;
LABEL_8:
      v3[1] = -1.0;
      v3[2] = 0.0;
      goto LABEL_9;
    }
    *(v3 - 3) = 1.0;
    *(v3 - 2) = 0.0;
    v8 = 3.1415927f - fabs(v4);
    v9 = v8 - *(float *)&self;
    if ( (float)(v8 - *(float *)&self) <= x )
    {
      if ( v9 <= 0.0 )
      {
        v11 = 1.0;
      }
      else
      {
        v9 = v8 - *(float *)&self;
        v15 = cosf(v8 - *(float *)&self);
        v11 = v15;
      }
      *(v3 - 1) = v11;
      if ( v9 <= 0.0 )
      {
LABEL_21:
        v10 = 1.0;
        goto LABEL_17;
      }
    }
    else
    {
      v9 = v8 - *(float *)&self;
      v12 = cosf(x);
      *(v3 - 1) = v12;
      if ( (float)(v8 - *(float *)&self) <= 0.0 )
        goto LABEL_21;
    }
    v13 = cosf(v9);
    v10 = v13;
LABEL_17:
    *v3 = v10;
    v14 = cosf(v8);
    v3[1] = v14;
    v21 = sinf(v8);
    v3[2] = v21;
LABEL_9:
    ++v2;
    v3 += 6;
  }
  while ( v2 != 31 );
}

// ----------------------------------------------------------------------------
// Function: hkpWeldingUtility::calcEdgeAngleBitcode  (binary VA: 0x1ad2b60)
// Original: hkpWeldingUtility::calcEdgeAngleBitcode
// ----------------------------------------------------------------------------
int hkpWeldingUtility::calcEdgeAngleBitcode(hkpWeldingUtility::Self *self)
{
  int result;
  float v2; // xmm0_4

  result = 0;
  while ( 1 )
  {
    v2 = (float)((float)result * 0.20943952f) - 3.1415927f;
    if ( v2 >= *(float *)&self )
      break;
    if ( ++result == 31 )
      return result;
  }
  if ( *(float *)&self > 0.0 && v2 != *(float *)&self )
    --result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWeldingUtility::calcScaledWeldingInfo  (binary VA: 0x1ad2bd0)
// Original: hkpWeldingUtility::calcScaledWeldingInfo
// ----------------------------------------------------------------------------
int hkpWeldingUtility::calcScaledWeldingInfo(float *a1, uint16_t a2, int a3, float *a4)
{
  float v4; // xmm5_4
  float v5; // xmm3_4
  float v6; // xmm6_4
  __m128i v7;
  float v8; // xmm6_4
  float v9; // xmm3_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  __m128i v12;
  float v13; // xmm6_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  __m128i v16;
  float v17; // xmm5_4
  int v18;
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm3_4
  float v22; // xmm1_4
  float v23; // xmm7_4
  float v24; // xmm5_4
  float v25; // xmm4_4
  float v26; // xmm5_4
  float v27; // xmm3_4
  float v28; // xmm0_4
  float v29; // xmm2_4
  float v30; // xmm6_4
  float v31; // xmm7_4
  float v32; // xmm1_4
  float v33; // xmm0_4
  float v34; // xmm2_4
  float v35; // xmm4_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  char *v38;
  float v39; // xmm5_4
  char *v40;
  float v41; // xmm3_4
  char *v42;
  __m128i v43;
  int v44;
  float v45; // xmm7_4
  int v46; // xmm1_4
  float v47; // xmm1_4
  float v48; // xmm5_4
  __m128i v49;
  int v50;
  float v51; // xmm5_4
  int v52; // xmm1_4
  float v53; // xmm3_4
  __m128i v54;
  int v55;
  int v56;
  float v57; // xmm1_4
  __m128i v58;
  float v59; // xmm0_4
  float v60; // xmm4_4
  float v61; // xmm1_4
  float v62; // xmm3_4
  float v63; // xmm1_4
  float v64; // xmm6_4
  __m128i v65;
  float v66; // xmm5_4
  int v67;
  float v68; // xmm4_4
  float v69; // xmm5_4
  float v70; // xmm4_4
  float v71; // xmm3_4
  float v72; // xmm2_4
  float v73; // xmm0_4
  float v74; // xmm1_4
  float v75; // xmm6_4
  float v76; // xmm7_4
  float v77; // xmm1_4
  float v78; // xmm4_4
  float v79; // xmm5_4
  float v80; // xmm1_4
  float v81; // xmm2_4
  float v82; // xmm3_4
  float v83; // xmm5_4
  float v84; // xmm4_4
  float v85; // xmm2_4
  float v86; // xmm5_4
  float v87; // xmm3_4
  float v88; // xmm6_4
  float v89; // xmm0_4
  float v90; // xmm1_4
  float v91; // xmm7_4
  float v92; // xmm5_4
  float v93; // xmm4_4
  float v94; // xmm0_4
  float v95; // xmm1_4
  float v96; // xmm3_4
  float v97; // xmm2_4
  float v98; // xmm1_4
  float v99; // xmm0_4
  float v100; // xmm4_4
  float v101; // xmm6_4
  float v102; // xmm1_4
  float v103; // xmm0_4
  hkpWeldingUtility::Self *v104;
  hkpWeldingUtility::Self *v105;
  int v106;
  int v107;
  float v109;
  float v110;
  float y;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float x;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
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
  float v157;
  float v158;
  float v159;
  float v160;
  float v161;
  float v162;
  float v163;
  float v164;
  float v165;
  float v166;
  float v167;
  float v168;
  float v169;
  float v170;
  float v171;
  float v172;
  float v173;
  float v174;
  float v175;
  float v176;
  float v177;
  float v178;
  float v179;
  float v180;
  float v181;
  float v182;
  float v183;
  float v184;
  float v185;
  float v186;
  float v187;
  float v188;
  float v189;
  float v190;
  float v191;
  float v192;
  float v193;
  float v194;
  float v195;
  float v196;

  v125 = a1[1];
  v139 = a1[9];
  v4 = a1[6];
  v5 = a1[8];
  v144 = a1[10];
  v6 = a1[5];
g4_m128_raw(v7) = LODWORD(v6);
  *(float *)g4_m128_ptr<int32_t>(v7) = v6 - v125;
  v165 = v4 - a1[2];
  v134 = v5 - a1[4];
  v155 = a1[4] - *a1;
  v168 = v139 - v6;
  v8 = v139 - v6;
  v160 = *(float *)g4_m128_ptr<int32_t>(v7);
  v115 = v144 - v4;
  v119 = *a1 - v5;
  v172 = *a4 * v155;
  v126 = v125 - v139;
  v9 = *(float *)g4_m128_ptr<int32_t>(v7);
  v174 = a4[1] * *(float *)g4_m128_ptr<int32_t>(v7);
  v129 = a1[2] - v144;
  v176 = a4[2] * v165;
  v140 = v119 * *a4;
  v179 = *a4 * v134;
  v10 = v8;
  v149 = v8 * a4[1];
  v11 = a4[2] * (float)(v144 - v4);
  v145 = v126 * a4[1];
  v12 = v7;
  v181 = v11;
  v147 = v129 * a4[2];
  *(float *)g4_m128_ptr<int32_t>(v12) = (float)(*(float *)g4_m128_ptr<int32_t>(v7) * v115) - (float)(v165 * v10);
  v13 = 0.0;
  v14 = (float)(v165 * v134) - (float)(v155 * v115);
  v15 = (float)(v155 * v10) - (float)(v9 * v134);
  v16 = v12;
  *(float *)g4_m128_ptr<int32_t>(v16) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)g4_m128_ptr<int32_t>(v12)) + (float)(v14 * v14))
                          + (float)(v15 * v15);
  if ( *(float *)g4_m128_ptr<int32_t>(v16) > 0.0 )
  {
    v17 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v16);
    v18 = ((_mm_cvtsi128_si32(v16) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v16) >> 1));
    v19 = (float)(*(float *)&v18 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v16)) * *(float *)&v18)
                * (float)(*(float *)&v18 * *(float *)&v18));
    v20 = (float)(v19 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v16)) * v19) * (float)(v19 * v19));
    v13 = (float)(1.5 * v20) - (float)((float)(v17 * v20) * (float)(v20 * v20));
  }
  v21 = v14 * v13;
  v109 = v15 * v13;
  v22 = (float)(v160 * (float)(v15 * v13)) - (float)(v165 * (float)(v14 * v13));
  v152 = *(float *)g4_m128_ptr<int32_t>(v12) * v13;
  v23 = (float)(v165 * (float)(*(float *)g4_m128_ptr<int32_t>(v12) * v13)) - (float)(v155 * (float)(v15 * v13));
  v156 = (float)(v155 * v21) - (float)(v160 * (float)(*(float *)g4_m128_ptr<int32_t>(v12) * v13));
  v24 = v115;
  v116 = v21;
  v25 = (float)(v168 * (float)(v15 * v13)) - (float)(v24 * v21);
  v26 = (float)(v24 * (float)(*(float *)g4_m128_ptr<int32_t>(v12) * v13)) - (float)(v134 * (float)(v15 * v13));
  v27 = (float)(v134 * v21) - (float)(v168 * (float)(*(float *)g4_m128_ptr<int32_t>(v12) * v13));
  v135 = (float)(v126 * (float)(v15 * v13)) - (float)(v129 * v116);
  v130 = (float)(v129 * (float)(*(float *)g4_m128_ptr<int32_t>(v12) * v13)) - (float)(v119 * (float)(v15 * v13));
  v127 = (float)(v119 * v116) - (float)(v126 * (float)(*(float *)g4_m128_ptr<int32_t>(v12) * v13));
  v28 = (float)((float)(v22 * v22) + (float)(v23 * v23)) + (float)(v156 * v156);
  v29 = 0.0;
  if ( v28 > 0.0 )
  {
    v30 = fsqrt(v28);
    if ( __builtin_isnan(v30) )
    {
      v187 = sqrtf((float)((float)(v22 * v22) + (float)(v23 * v23)) + (float)(v156 * v156));
      v30 = v187;
    }
    v29 = 1.0 / v30;
  }
  v183 = v22 * v29;
  v31 = v23 * v29;
  v185 = v156 * v29;
  v32 = (float)((float)(v25 * v25) + (float)(v26 * v26)) + (float)(v27 * v27);
  v33 = 0.0;
  if ( v32 > 0.0 )
  {
    v34 = fsqrt(v32);
    if ( __builtin_isnan(v34) )
    {
      v124 = sqrtf((float)((float)(v25 * v25) + (float)(v26 * v26)) + (float)(v27 * v27));
      v34 = v124;
    }
    v33 = 1.0 / v34;
  }
  v191 = v26 * v33;
  v189 = v25 * v33;
  v193 = v27 * v33;
  v35 = 0.0;
  v36 = (float)((float)(v135 * v135) + (float)(v130 * v130)) + (float)(v127 * v127);
  if ( v36 > 0.0 )
  {
    v37 = fsqrt(v36);
    if ( __builtin_isnan(v37) )
    {
      v123 = sqrtf(v36);
      v37 = v123;
    }
    v35 = 1.0 / v37;
  }
  v38 = (char *)&hkpWeldingUtility::m_sinCosTable + 24 * (a2 & 0x1F);
  v39 = *(float *)&v38[4 * a3 + 4];
  v157 = *(float *)&v38[4 * a3];
  v40 = (char *)&hkpWeldingUtility::m_sinCosTable + 24 * (((int)a2 >> 5) & 0x1F);
  v41 = *(float *)&v40[4 * a3 + 4];
  v161 = *(float *)&v40[4 * a3];
  v42 = (char *)&hkpWeldingUtility::m_sinCosTable + 24 * (((int)a2 >> 10) & 0x1F);
  v166 = *(float *)&v42[4 * a3];
  v169 = *(float *)&v42[4 * a3 + 4];
  v184 = (float)(v157 * (float)(v152 + 0.0)) + (float)(v183 * v39);
  v195 = (float)(v31 * v39) + (float)(v157 * (float)(v116 + 0.0));
  v186 = (float)(v185 * v39) + (float)(v157 * (float)(v109 + 0.0));
  v190 = (float)(v189 * v41) + (float)(v161 * (float)(v152 + 0.0));
  v192 = (float)(v191 * v41) + (float)(v161 * (float)(v116 + 0.0));
  v194 = (float)(v41 * v193) + (float)(v161 * (float)(v109 + 0.0));
  v158 = (float)((float)(v135 * v35) * v169) + (float)((float)(v152 + 0.0) * v166);
g4_m128_raw(v43) = *(unsigned int *)a4;
  v44 = _mm_cvtsi128_si32(v43);
  v45 = (float)((float)(v130 * v35) * v169) + (float)((float)(v116 + 0.0) * v166);
  v167 = (float)((float)(v35 * v127) * v169) + (float)(v166 * (float)(v109 + 0.0));
  v46 = (2130706432 - v44) & ((v44 ^ (v44 + 2139095040)) >> 31);
  v162 = v45;
  v47 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v43) * (float)((float)(2.0 - (float)(*a4 * *(float *)&v46)) * *(float *)&v46)))
      * (float)((float)(2.0 - (float)(*a4 * *(float *)&v46)) * *(float *)&v46);
  v48 = 2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v43) * v47);
g4_m128_raw(v49) = *((unsigned int *)a4 + 1);
  v50 = _mm_cvtsi128_si32(v49);
  v170 = v47 * v48;
  v51 = v47 * v48;
  v52 = (2130706432 - v50) & ((v50 ^ (v50 + 2139095040)) >> 31);
  v53 = (float)(2.0 - (float)(a4[1] * *(float *)&v52)) * *(float *)&v52;
g4_m128_raw(v54) = *((unsigned int *)a4 + 2);
  v55 = _mm_cvtsi128_si32(v54);
  v120 = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v49) * v53)) * v53)
       * (float)(2.0
               - (float)(*(float *)g4_m128_ptr<int32_t>(v49) * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v49) * v53)) * v53)));
  v56 = (2130706432 - v55) & ((v55 ^ (v55 + 2139095040)) >> 31);
  v57 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v54)
                      * (float)((float)(2.0 - (float)(a4[2] * *(float *)&v56)) * *(float *)&v56)))
      * (float)((float)(2.0 - (float)(a4[2] * *(float *)&v56)) * *(float *)&v56);
g4_m128_raw(v58) = LODWORD(v152);
  *(float *)g4_m128_ptr<int32_t>(v58) = v152 * v51;
  v59 = 2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v54) * v57);
  v60 = 0.0;
  v61 = v57 * v59;
  v65 = v58;
  v196 = v61;
  v62 = v61;
  v63 = v116 * v120;
  v64 = v109 * v62;
  *(float *)g4_m128_ptr<int32_t>(v65) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v58) * *(float *)g4_m128_ptr<int32_t>(v58)) + (float)(v63 * v63))
                          + (float)(v64 * v64);
  if ( *(float *)g4_m128_ptr<int32_t>(v65) > 0.0 )
  {
    v66 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v65);
    v67 = ((_mm_cvtsi128_si32(v65) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v65) >> 1));
    v68 = (float)(*(float *)&v67 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v65)) * *(float *)&v67)
                * (float)(*(float *)&v67 * *(float *)&v67));
    v60 = (float)(1.5 * (float)((float)(v68 * 1.5) - (float)((float)(v66 * v68) * (float)(v68 * v68))))
        - (float)((float)(v66 * (float)((float)(v68 * 1.5) - (float)((float)(v66 * v68) * (float)(v68 * v68))))
                * (float)((float)((float)(v68 * 1.5) - (float)((float)(v66 * v68) * (float)(v68 * v68)))
                        * (float)((float)(v68 * 1.5) - (float)((float)(v66 * v68) * (float)(v68 * v68)))));
  }
  v117 = v63 * v60;
  v110 = *(float *)g4_m128_ptr<int32_t>(v58) * v60;
  v128 = v64 * v60;
  v69 = (float)(v174 * (float)(v64 * v60)) - (float)(v176 * (float)(v63 * v60));
  v70 = (float)(v176 * (float)(*(float *)g4_m128_ptr<int32_t>(v58) * v60)) - (float)(v172 * (float)(v64 * v60));
  v153 = (float)(v172 * v117) - (float)(v110 * v174);
  v71 = (float)(v149 * v128) - (float)(v181 * v117);
  v72 = (float)(v110 * v181) - (float)(v179 * v128);
  v150 = (float)(v179 * v117) - (float)(v149 * v110);
  v131 = (float)(v145 * v128) - (float)(v147 * v117);
  v136 = (float)(v147 * v110) - (float)(v140 * v128);
  v73 = (float)(v140 * v117) - (float)(v145 * v110);
  v74 = (float)((float)(v69 * v69) + (float)(v70 * v70)) + (float)(v153 * v153);
  v75 = 0.0;
  if ( v74 > 0.0 )
  {
    v76 = fsqrt(v74);
    if ( __builtin_isnan(v76) )
    {
      v178 = sqrtf((float)((float)(v69 * v69) + (float)(v70 * v70)) + (float)(v153 * v153));
      v76 = v178;
    }
    v75 = 1.0 / v76;
  }
  v148 = v70 * v75;
  v146 = v69 * v75;
  v154 = v75 * v153;
  v77 = (float)((float)(v71 * v71) + (float)(v72 * v72)) + (float)(v150 * v150);
  v78 = 0.0;
  if ( v77 > 0.0 )
  {
    v79 = fsqrt(v77);
    if ( __builtin_isnan(v79) )
    {
      v143 = sqrtf((float)((float)(v71 * v71) + (float)(v72 * v72)) + (float)(v150 * v150));
      v79 = v143;
    }
    v78 = 1.0 / v79;
  }
  v175 = v72 * v78;
  v173 = v71 * v78;
  v151 = v78 * v150;
  v80 = (float)((float)(v131 * v131) + (float)(v136 * v136)) + (float)(v73 * v73);
  v81 = 0.0;
  if ( v80 > 0.0 )
  {
    v82 = fsqrt(v80);
    if ( __builtin_isnan(v82) )
    {
      v142 = sqrtf(v80);
      v82 = v142;
    }
    v81 = 1.0 / v82;
  }
  v177 = v131 * v81;
  v83 = v136 * v81;
  v182 = v73 * v81;
  v84 = v195 * v120;
  v85 = v192 * v120;
  v180 = v83;
  v137 = v194 * v196;
  v86 = v184 * v170;
  v87 = v190 * v170;
  v88 = v158 * v170;
  v121 = v162 * v120;
  v171 = v186 * v196;
  v132 = v167 * v196;
  v89 = (float)((float)(v86 * v86) + (float)(v84 * v84)) + (float)((float)(v186 * v196) * (float)(v186 * v196));
  v90 = 0.0;
  if ( v89 > 0.0 )
  {
    v91 = fsqrt(v89);
    if ( __builtin_isnan(v91) )
    {
      v188 = sqrtf((float)((float)(v86 * v86) + (float)(v84 * v84)) + (float)((float)(v186 * v196) * (float)(v186 * v196)));
      v91 = v188;
    }
    v90 = 1.0 / v91;
  }
  v92 = v86 * v90;
  v141 = v84 * v90;
  v159 = v90 * v171;
  v93 = 0.0;
  v94 = (float)((float)(v87 * v87) + (float)(v85 * v85)) + (float)(v137 * v137);
  if ( v94 > 0.0 )
  {
    v95 = fsqrt(v94);
    if ( __builtin_isnan(v95) )
    {
      v164 = sqrtf(v94);
      v95 = v164;
    }
    v93 = 1.0 / v95;
  }
  v96 = v87 * v93;
  v97 = v85 * v93;
  v98 = (float)((float)(v88 * v88) + (float)(v121 * v121)) + (float)((float)(v167 * v196) * (float)(v167 * v196));
  v99 = 0.0;
  v138 = v93 * v137;
  if ( v98 > 0.0 )
  {
    v100 = fsqrt(v98);
    if ( __builtin_isnan(v100) )
    {
      v163 = sqrtf((float)((float)(v88 * v88) + (float)(v121 * v121)) + (float)(v132 * v132));
      v100 = v163;
    }
    v99 = 1.0 / v100;
  }
  v101 = v88 * v99;
  v102 = v121 * v99;
  v103 = v99 * v132;
  v122 = (float)(v117 * v141) + (float)(v110 * v92);
  v133 = (float)(v117 * v97) + (float)(v110 * v96);
  x = (float)((float)(v110 * v101) + (float)(v117 * v102)) + (float)(v128 * v103);
  y = (float)((float)(v101 * v177) + (float)(v102 * v180)) + (float)(v103 * v182);
  atan2f(y, x);
  v112 = atan2f(y, x);
  v104 = (hkpWeldingUtility::Self *)LODWORD(v112);
  v113 = atan2f((float)((float)(v96 * v173) + (float)(v97 * v175)) + (float)(v151 * v138), (float)(v128 * v138) + v133);
  v105 = (hkpWeldingUtility::Self *)LODWORD(v113);
  v114 = atan2f((float)((float)(v92 * v146) + (float)(v148 * v141)) + (float)(v154 * v159), (float)(v128 * v159) + v122);
  v106 = hkpWeldingUtility::calcEdgeAngleBitcode((hkpWeldingUtility::Self *)LODWORD(v114));
  v107 = hkpWeldingUtility::calcEdgeAngleBitcode(v105);
  return v106 | (32 * v107) | (hkpWeldingUtility::calcEdgeAngleBitcode(v104) << 10);
}


