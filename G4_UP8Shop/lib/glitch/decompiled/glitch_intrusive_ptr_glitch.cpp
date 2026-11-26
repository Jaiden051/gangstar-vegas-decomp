#include "Core/Utils/DecompTypes.h"
#include "glitch_intrusive_ptr_glitch.h"

// ----------------------------------------------------------------------------
// Function: boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy  (binary VA: 0xcf1010)
// Original: boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData>::~intrusive_ptr
// ----------------------------------------------------------------------------
void boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(glitch::core::detail::SSharedStringHeapEntry::SData::Self **self)
{
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v1;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v2;

  v1 = *self;
  if ( *self != nullptr && __sync_fetch_and_add((volatile int32_t *)v1, 0xFFFFFFFF) == 1 )
    glitch::core::detail::SSharedStringHeapEntry::SData::release(v1, v2);
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::createMaterialRendererForProfile_collada_SProfileGLES2Tra_bac17a  (binary VA: 0xd36230)
// Original: glitch::collada::createMaterialRendererForProfile<glitch::collada::SProfileGLES2Traits>
// ----------------------------------------------------------------------------
glitch::video::CMaterialRenderer::Self ** glitch::collada::createMaterialRendererForProfile_collada_SProfileGLES2Tra_bac17a(glitch::video::CMaterialRenderer::Self **a1, int a2, glitch::core::detail::SIDedCollection<glitch::video::SShaderParameterDef::Self, unsigned short, false, glitch::video::detail::globalmaterialparametermanager::SPropeties::Self, glitch::video::detail::globalmaterialparametermanager::SValueTraits, 1> **a3, char *a4, uint32_t *a5, int a6, int a7)
{
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  size_t v10;
  glitch::collada::SEffectTechniqueMap::Self *v11;
  glitch::collada::SEffectTechniqueMap::Self *v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  uint16_t v17;
  glitch::collada::SEffectTechniqueMap::Self *i;
  int v19;
  glitch::core::Self *v20;
  glitch::core::Self *v21;
  uint8_t v22; // di
  int v23;
  int v24;
  int v25;
  char *v26;
  char *v27;
  char *v28;
  unsigned int v29;
  const char *v30;
  const char *v31;
  char *v32;
  uint8_t *v33;
  size_t v34;
  char *v35;
  int v36;
  int v37;
  char *v38;
  char *v39;
  char v40;
  int v41;
  int v42;
  unsigned int v43;
  const char *v44;
  char *v45;
  size_t v46;
  glitch::core::Self *v47;
  glitch::core::Self *v48;
  glitch::core::Self *v49;
  int v50;
  int v51;
  char *v52;
  uint8_t v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  char *v59;
  int v60;
  bool v61;
  int16_t Id;
  int v63;
  int16_t v64;
  int v65;
  int j;
  char *v67;
  char v68; // di
  glitch::video::CMaterialRenderer::Self **v69;
  int v70;
  int v71;
  glitch::video::CMaterialRenderer::Self *v72;
  glitch::collada::SEffectTechniqueMap::Self *v73;
  uint32_t *v74;
  glitch::video::CMaterialRendererManager::SCreationContext::Self *v75;
  uint16_t v76;
  uint32_t *v77;
  int v78;
  int *v79;
  int v80;
  char *v81;
  int v82;
  glitch::video::CMaterialRenderer::Self *v83;
  glitch::video::CMaterialRenderer::Self *v84;
  typedef glitch::core::Self *_g4_t_v86;
  typedef glitch::core::Self *_g4_t_v87;
  typedef glitch::core::Self *_g4_t_v88;
  typedef const char *_g4_t_v89;
  typedef glitch::collada::SEffectTechniqueMap::Self *_g4_t_v90;
  typedef bool _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef void *_g4_t_v94;
  typedef uint8_t *_g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef char *_g4_t_dest;
  typedef unsigned int _g4_t_v99;
  typedef const char *_g4_t_v100;
  typedef const char *_g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef unsigned int _g4_t_v104;
  typedef const char *_g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_ProcessBufferHeapAvailableMemory;
  typedef glitch::video::CMaterialRenderer::Self **_g4_t_v108;
  typedef glitch::video::CMaterialRendererManager::Self *_g4_t_v109;
  typedef glitch::collada::SEffectTechniqueMap::Self *_g4_t_v110;
  typedef int _g4_t_v111;
  typedef glitch::collada::SEffectTechniqueMap::Self *_g4_t_v112;
  typedef uint32_t *_g4_t_v113;
  typedef glitch::collada::SEffectTechniqueMap::Self *_g4_t_v114;
  typedef glitch::core::Self *_g4_t_v115;
  typedef uint8_t _g4_t_isProcessBufferHeapExcessEnabled;
  typedef char _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_k;
  typedef char _g4_t_v121;
  typedef uint32_t *_g4_t_v122;
  typedef int _g4_t_v123;
  typedef char *_g4_t_s;
  typedef uint16_t _g4_t_sa;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef char *_g4_t_v129;
  typedef glitch::core::Self *_g4_t_v130;
  typedef int _g4_t_v131;
  typedef glitch::core::Self *_g4_t_v132;
  typedef glitch::core::detail::SIDedCollection<glitch::video::SShaderParameterDef::Self, unsigned short, false, glitch::video::detail::globalmaterialparametermanager::SPropeties::Self, glitch::video::detail::globalmaterialparametermanager::SValueTraits, 1> **_g4_t_v133;
  typedef int _g4_t_v134;
  typedef uint32_t *_g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef glitch::core::Self *_g4_t_v138;
  typedef int _g4_t_v139;
  typedef uint32_t *_g4_t_v140;
  typedef unsigned int _g4_t_v141;
  typedef uint32_t *_g4_t_v142;
  typedef uint32_t *_g4_t_v143;
  typedef glitch::video::CMaterialRendererManager::SCreationContext::Self *_g4_t_v144;
  typedef glitch::video::CMaterialRendererManager::SCreationContext::Self *_g4_t_v145;
  typedef unsigned int _g4_t_v146;
  typedef int _g4_t_v147;
  typedef unsigned int _g4_t_v148;
  typedef int _g4_t_v149;
  typedef int _g4_t_v150;
  typedef uint16_t _g4_t_v151;
  typedef int _g4_t_v152;
  typedef uint32_t *_g4_t_v153;
  typedef uint16_t _g4_t_v154;
  typedef char _g4_t_v155;
  typedef int _g4_t_v156;
  typedef int _g4_t_v157;
  typedef int _g4_t_v158;
  typedef char *_g4_t_s2;
  typedef char *_g4_t_s2a;
  typedef unsigned int _g4_t_v161;
  typedef int _g4_t_v162;
  typedef unsigned int _g4_t_v163;
  typedef unsigned int _g4_t_v164;
  typedef int _g4_t_v165;
  typedef int _g4_t_v166;
  typedef glitch::collada::SEffectTechniqueMap::Self *_g4_t_v167;
  typedef int _g4_t_v168;
  typedef int _g4_t_v169;
  typedef int _g4_t_v170;
  typedef int _g4_t_v171;
  typedef uint32_t _g4_t_v172[4];
  typedef char _g4_t_v173;
  typedef volatile int32_t *_g4_t_v174;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v175;
  typedef void *_g4_t_src;
  typedef void *_g4_t_v177;
  typedef uint32_t _g4_t_v178[2];
  typedef bool _g4_t_v179[4];
  typedef volatile int32_t *_g4_t_v180;
  typedef int _g4_t_v181[14];
  enum : size_t {
    _g4_s0 = 464u,
    _g4_s1 = (12u + sizeof(_g4_t_v86)) > _g4_s0 ? (12u + sizeof(_g4_t_v86)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v87)) > _g4_s1 ? (12u + sizeof(_g4_t_v87)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v88)) > _g4_s2 ? (12u + sizeof(_g4_t_v88)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v89)) > _g4_s3 ? (12u + sizeof(_g4_t_v89)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v90)) > _g4_s4 ? (12u + sizeof(_g4_t_v90)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v91)) > _g4_s5 ? (16u + sizeof(_g4_t_v91)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v92)) > _g4_s6 ? (16u + sizeof(_g4_t_v92)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v93)) > _g4_s7 ? (16u + sizeof(_g4_t_v93)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v94)) > _g4_s8 ? (16u + sizeof(_g4_t_v94)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v95)) > _g4_s9 ? (36u + sizeof(_g4_t_v95)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v96)) > _g4_s10 ? (40u + sizeof(_g4_t_v96)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v97)) > _g4_s11 ? (44u + sizeof(_g4_t_v97)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_dest)) > _g4_s12 ? (64u + sizeof(_g4_t_dest)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v99)) > _g4_s13 ? (72u + sizeof(_g4_t_v99)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v100)) > _g4_s14 ? (72u + sizeof(_g4_t_v100)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v101)) > _g4_s15 ? (72u + sizeof(_g4_t_v101)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v102)) > _g4_s16 ? (72u + sizeof(_g4_t_v102)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v103)) > _g4_s17 ? (72u + sizeof(_g4_t_v103)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v104)) > _g4_s18 ? (76u + sizeof(_g4_t_v104)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v105)) > _g4_s19 ? (76u + sizeof(_g4_t_v105)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v106)) > _g4_s20 ? (76u + sizeof(_g4_t_v106)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_ProcessBufferHeapAvailableMemory)) > _g4_s21 ? (80u + sizeof(_g4_t_ProcessBufferHeapAvailableMemory)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v108)) > _g4_s22 ? (84u + sizeof(_g4_t_v108)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v109)) > _g4_s23 ? (88u + sizeof(_g4_t_v109)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v110)) > _g4_s24 ? (92u + sizeof(_g4_t_v110)) : _g4_s24,
    _g4_s26 = (96u + sizeof(_g4_t_v111)) > _g4_s25 ? (96u + sizeof(_g4_t_v111)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v112)) > _g4_s26 ? (100u + sizeof(_g4_t_v112)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v113)) > _g4_s27 ? (104u + sizeof(_g4_t_v113)) : _g4_s27,
    _g4_s29 = (108u + sizeof(_g4_t_v114)) > _g4_s28 ? (108u + sizeof(_g4_t_v114)) : _g4_s28,
    _g4_s30 = (112u + sizeof(_g4_t_v115)) > _g4_s29 ? (112u + sizeof(_g4_t_v115)) : _g4_s29,
    _g4_s31 = (118u + sizeof(_g4_t_isProcessBufferHeapExcessEnabled)) > _g4_s30 ? (118u + sizeof(_g4_t_isProcessBufferHeapExcessEnabled)) : _g4_s30,
    _g4_s32 = (119u + sizeof(_g4_t_v117)) > _g4_s31 ? (119u + sizeof(_g4_t_v117)) : _g4_s31,
    _g4_s33 = (120u + sizeof(_g4_t_v118)) > _g4_s32 ? (120u + sizeof(_g4_t_v118)) : _g4_s32,
    _g4_s34 = (124u + sizeof(_g4_t_v119)) > _g4_s33 ? (124u + sizeof(_g4_t_v119)) : _g4_s33,
    _g4_s35 = (124u + sizeof(_g4_t_k)) > _g4_s34 ? (124u + sizeof(_g4_t_k)) : _g4_s34,
    _g4_s36 = (132u + sizeof(_g4_t_v121)) > _g4_s35 ? (132u + sizeof(_g4_t_v121)) : _g4_s35,
    _g4_s37 = (136u + sizeof(_g4_t_v122)) > _g4_s36 ? (136u + sizeof(_g4_t_v122)) : _g4_s36,
    _g4_s38 = (140u + sizeof(_g4_t_v123)) > _g4_s37 ? (140u + sizeof(_g4_t_v123)) : _g4_s37,
    _g4_s39 = (144u + sizeof(_g4_t_s)) > _g4_s38 ? (144u + sizeof(_g4_t_s)) : _g4_s38,
    _g4_s40 = (144u + sizeof(_g4_t_sa)) > _g4_s39 ? (144u + sizeof(_g4_t_sa)) : _g4_s39,
    _g4_s41 = (148u + sizeof(_g4_t_v126)) > _g4_s40 ? (148u + sizeof(_g4_t_v126)) : _g4_s40,
    _g4_s42 = (152u + sizeof(_g4_t_v127)) > _g4_s41 ? (152u + sizeof(_g4_t_v127)) : _g4_s41,
    _g4_s43 = (152u + sizeof(_g4_t_v128)) > _g4_s42 ? (152u + sizeof(_g4_t_v128)) : _g4_s42,
    _g4_s44 = (156u + sizeof(_g4_t_v129)) > _g4_s43 ? (156u + sizeof(_g4_t_v129)) : _g4_s43,
    _g4_s45 = (160u + sizeof(_g4_t_v130)) > _g4_s44 ? (160u + sizeof(_g4_t_v130)) : _g4_s44,
    _g4_s46 = (160u + sizeof(_g4_t_v131)) > _g4_s45 ? (160u + sizeof(_g4_t_v131)) : _g4_s45,
    _g4_s47 = (164u + sizeof(_g4_t_v132)) > _g4_s46 ? (164u + sizeof(_g4_t_v132)) : _g4_s46,
    _g4_s48 = (168u + sizeof(_g4_t_v133)) > _g4_s47 ? (168u + sizeof(_g4_t_v133)) : _g4_s47,
    _g4_s49 = (172u + sizeof(_g4_t_v134)) > _g4_s48 ? (172u + sizeof(_g4_t_v134)) : _g4_s48,
    _g4_s50 = (172u + sizeof(_g4_t_v135)) > _g4_s49 ? (172u + sizeof(_g4_t_v135)) : _g4_s49,
    _g4_s51 = (176u + sizeof(_g4_t_v136)) > _g4_s50 ? (176u + sizeof(_g4_t_v136)) : _g4_s50,
    _g4_s52 = (176u + sizeof(_g4_t_v137)) > _g4_s51 ? (176u + sizeof(_g4_t_v137)) : _g4_s51,
    _g4_s53 = (180u + sizeof(_g4_t_v138)) > _g4_s52 ? (180u + sizeof(_g4_t_v138)) : _g4_s52,
    _g4_s54 = (184u + sizeof(_g4_t_v139)) > _g4_s53 ? (184u + sizeof(_g4_t_v139)) : _g4_s53,
    _g4_s55 = (184u + sizeof(_g4_t_v140)) > _g4_s54 ? (184u + sizeof(_g4_t_v140)) : _g4_s54,
    _g4_s56 = (188u + sizeof(_g4_t_v141)) > _g4_s55 ? (188u + sizeof(_g4_t_v141)) : _g4_s55,
    _g4_s57 = (188u + sizeof(_g4_t_v142)) > _g4_s56 ? (188u + sizeof(_g4_t_v142)) : _g4_s56,
    _g4_s58 = (188u + sizeof(_g4_t_v143)) > _g4_s57 ? (188u + sizeof(_g4_t_v143)) : _g4_s57,
    _g4_s59 = (192u + sizeof(_g4_t_v144)) > _g4_s58 ? (192u + sizeof(_g4_t_v144)) : _g4_s58,
    _g4_s60 = (192u + sizeof(_g4_t_v145)) > _g4_s59 ? (192u + sizeof(_g4_t_v145)) : _g4_s59,
    _g4_s61 = (196u + sizeof(_g4_t_v146)) > _g4_s60 ? (196u + sizeof(_g4_t_v146)) : _g4_s60,
    _g4_s62 = (196u + sizeof(_g4_t_v147)) > _g4_s61 ? (196u + sizeof(_g4_t_v147)) : _g4_s61,
    _g4_s63 = (196u + sizeof(_g4_t_v148)) > _g4_s62 ? (196u + sizeof(_g4_t_v148)) : _g4_s62,
    _g4_s64 = (196u + sizeof(_g4_t_v149)) > _g4_s63 ? (196u + sizeof(_g4_t_v149)) : _g4_s63,
    _g4_s65 = (196u + sizeof(_g4_t_v150)) > _g4_s64 ? (196u + sizeof(_g4_t_v150)) : _g4_s64,
    _g4_s66 = (196u + sizeof(_g4_t_v151)) > _g4_s65 ? (196u + sizeof(_g4_t_v151)) : _g4_s65,
    _g4_s67 = (200u + sizeof(_g4_t_v152)) > _g4_s66 ? (200u + sizeof(_g4_t_v152)) : _g4_s66,
    _g4_s68 = (200u + sizeof(_g4_t_v153)) > _g4_s67 ? (200u + sizeof(_g4_t_v153)) : _g4_s67,
    _g4_s69 = (200u + sizeof(_g4_t_v154)) > _g4_s68 ? (200u + sizeof(_g4_t_v154)) : _g4_s68,
    _g4_s70 = (204u + sizeof(_g4_t_v155)) > _g4_s69 ? (204u + sizeof(_g4_t_v155)) : _g4_s69,
    _g4_s71 = (204u + sizeof(_g4_t_v156)) > _g4_s70 ? (204u + sizeof(_g4_t_v156)) : _g4_s70,
    _g4_s72 = (204u + sizeof(_g4_t_v157)) > _g4_s71 ? (204u + sizeof(_g4_t_v157)) : _g4_s71,
    _g4_s73 = (204u + sizeof(_g4_t_v158)) > _g4_s72 ? (204u + sizeof(_g4_t_v158)) : _g4_s72,
    _g4_s74 = (220u + sizeof(_g4_t_s2)) > _g4_s73 ? (220u + sizeof(_g4_t_s2)) : _g4_s73,
    _g4_s75 = (220u + sizeof(_g4_t_s2a)) > _g4_s74 ? (220u + sizeof(_g4_t_s2a)) : _g4_s74,
    _g4_s76 = (224u + sizeof(_g4_t_v161)) > _g4_s75 ? (224u + sizeof(_g4_t_v161)) : _g4_s75,
    _g4_s77 = (224u + sizeof(_g4_t_v162)) > _g4_s76 ? (224u + sizeof(_g4_t_v162)) : _g4_s76,
    _g4_s78 = (224u + sizeof(_g4_t_v163)) > _g4_s77 ? (224u + sizeof(_g4_t_v163)) : _g4_s77,
    _g4_s79 = (224u + sizeof(_g4_t_v164)) > _g4_s78 ? (224u + sizeof(_g4_t_v164)) : _g4_s78,
    _g4_s80 = (224u + sizeof(_g4_t_v165)) > _g4_s79 ? (224u + sizeof(_g4_t_v165)) : _g4_s79,
    _g4_s81 = (224u + sizeof(_g4_t_v166)) > _g4_s80 ? (224u + sizeof(_g4_t_v166)) : _g4_s80,
    _g4_s82 = (228u + sizeof(_g4_t_v167)) > _g4_s81 ? (228u + sizeof(_g4_t_v167)) : _g4_s81,
    _g4_s83 = (228u + sizeof(_g4_t_v168)) > _g4_s82 ? (228u + sizeof(_g4_t_v168)) : _g4_s82,
    _g4_s84 = (228u + sizeof(_g4_t_v169)) > _g4_s83 ? (228u + sizeof(_g4_t_v169)) : _g4_s83,
    _g4_s85 = (228u + sizeof(_g4_t_v170)) > _g4_s84 ? (228u + sizeof(_g4_t_v170)) : _g4_s84,
    _g4_s86 = (228u + sizeof(_g4_t_v171)) > _g4_s85 ? (228u + sizeof(_g4_t_v171)) : _g4_s85,
    _g4_s87 = (232u + sizeof(_g4_t_v172)) > _g4_s86 ? (232u + sizeof(_g4_t_v172)) : _g4_s86,
    _g4_s88 = (251u + sizeof(_g4_t_v173)) > _g4_s87 ? (251u + sizeof(_g4_t_v173)) : _g4_s87,
    _g4_s89 = (252u + sizeof(_g4_t_v174)) > _g4_s88 ? (252u + sizeof(_g4_t_v174)) : _g4_s88,
    _g4_s90 = (268u + sizeof(_g4_t_v175)) > _g4_s89 ? (268u + sizeof(_g4_t_v175)) : _g4_s89,
    _g4_s91 = (284u + sizeof(_g4_t_src)) > _g4_s90 ? (284u + sizeof(_g4_t_src)) : _g4_s90,
    _g4_s92 = (300u + sizeof(_g4_t_v177)) > _g4_s91 ? (300u + sizeof(_g4_t_v177)) : _g4_s91,
    _g4_s93 = (316u + sizeof(_g4_t_v178)) > _g4_s92 ? (316u + sizeof(_g4_t_v178)) : _g4_s92,
    _g4_s94 = (324u + sizeof(_g4_t_v179)) > _g4_s93 ? (324u + sizeof(_g4_t_v179)) : _g4_s93,
    _g4_s95 = (328u + sizeof(_g4_t_v180)) > _g4_s94 ? (328u + sizeof(_g4_t_v180)) : _g4_s94,
    _g4_s96 = (332u + sizeof(_g4_t_v181)) > _g4_s95 ? (332u + sizeof(_g4_t_v181)) : _g4_s95
  };
  alignas(16) uint8_t _g4_sf[_g4_s96];
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 12u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 12u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 12u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 12u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 12u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 16u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 16u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 16u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 16u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 36u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 40u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 44u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 64u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 72u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 72u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 72u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 72u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 72u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 76u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 76u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 76u);
  _g4_t_ProcessBufferHeapAvailableMemory &ProcessBufferHeapAvailableMemory = *reinterpret_cast<_g4_t_ProcessBufferHeapAvailableMemory *>(_g4_sf + 80u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 84u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 88u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 92u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 96u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 100u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 104u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 108u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 112u);
  _g4_t_isProcessBufferHeapExcessEnabled &isProcessBufferHeapExcessEnabled = *reinterpret_cast<_g4_t_isProcessBufferHeapExcessEnabled *>(_g4_sf + 118u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 119u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 120u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 124u);
  _g4_t_k &k = *reinterpret_cast<_g4_t_k *>(_g4_sf + 124u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 132u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 136u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 140u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 144u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 144u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 148u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 152u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 152u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 156u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 160u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 160u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 164u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 168u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 172u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 172u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 176u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 176u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 180u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 184u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 184u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 188u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 188u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 188u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 192u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 192u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 196u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 196u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 196u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 196u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 196u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 196u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 200u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 200u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 200u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 204u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 204u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 204u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 204u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 220u);
  _g4_t_s2a &s2a = *reinterpret_cast<_g4_t_s2a *>(_g4_sf + 220u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 224u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 224u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 224u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 224u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 224u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 224u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 228u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 228u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 228u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 228u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 228u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 232u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 251u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 252u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 268u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 284u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 300u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 316u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 324u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 328u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 332u);

  v181[10] = (int)(uintptr_t)(&a1);
  v133 = a3;
  v123 = a2;
  v129 = a4;
  v108 = a1;
  v113 = a5;
  v111 = a6;
  v126 = a7;
  if ( (uint32_t *)*a5 == a5 )
  {
    *a1 = nullptr;
    return v108;
  }
  v109 = (glitch::video::CMaterialRendererManager::Self *)(a3[113]);
  isProcessBufferHeapExcessEnabled = glitch::core::isProcessBufferHeapExcessEnabled(v86);
  glitch::core::setProcessBufferHeapExcessEnabled((glitch::core::Self *)((char *)&dword_0 + 1), v91);
  ProcessBufferHeapAvailableMemory = glitch::core::getProcessBufferHeapAvailableMemory(v87);
  v110 = nullptr;
  v112 = nullptr;
  v7 = (uint32_t *)*v113;
  v8 = (uint32_t *)*v113;
  if ( v113 != (uint32_t *)*v113 )
  {
    v9 = 0;
    do
    {
      v7 = (uint32_t *)*v7;
      ++v9;
    }
    while ( v113 != v7 );
    v10 = 28 * v9;
    v11 = (glitch::collada::SEffectTechniqueMap::Self *)glitch::core::allocProcessBuffer(v10, v92);
    v112 = v11;
    v110 = (glitch::collada::SEffectTechniqueMap::Self *)((char *)v11 + v10);
    if ( v11 == (glitch::collada::SEffectTechniqueMap::Self *)((char *)v11 + v10) )
    {
      v8 = (uint32_t *)*v113;
    }
    else
    {
      v12 = v11;
      do
      {
        if ( v12 != nullptr )
          glitch::collada::SEffectTechniqueMap::Construct(v12);
        v12 = (glitch::collada::SEffectTechniqueMap::Self *)((char *)v12 + 28);
      }
      while ( v12 != v110 );
      v8 = (uint32_t *)*v113;
    }
  }
  v138 = nullptr;
  v115 = nullptr;
  if ( v113 != v8 )
  {
    v167 = v112;
    v13 = 0;
    v161 = 0;
    do
    {
      v14 = v8[7];
      v93 = v123;
      v104 = v13;
      G4_VCALL<void>(v126, 44);
      v13 = v104;
      if ( v104 < *(uint32_t *)(v14 + 64) )
        v13 = *(uint32_t *)(v14 + 64);
      v15 = *((uint32_t *)v167 + 6);
      if ( v15 == 0 )
        v15 = *(uint32_t *)(v14 + 56);
      v8 = (uint32_t *)*v8;
      if ( v161 >= v15 )
        v15 = v161;
      v167 = (glitch::collada::SEffectTechniqueMap::Self *)((char *)v167 + 28);
      v161 = v15;
    }
    while ( v113 != v8 );
    v16 = v15;
    v138 = nullptr;
    if ( v13 != 0 )
    {
      v99 = v15;
      v138 = (glitch::core::Self *)glitch::core::allocProcessBuffer(4 * v13, v123);
      v16 = v99;
    }
    v115 = nullptr;
    if ( v16 != 0 )
      v115 = (glitch::core::Self *)glitch::core::allocProcessBuffer(4 * v16, v93);
  }
  *(uint32_t *)v179 = 0;
  v17 = glitch::video::CMaterialRendererManager::beginMaterialRenderer(
          v109,
          (glitch::video::CMaterialRendererManager::SCreationContext::Self *)v179,
          (glitch::video::IVideoDriver::Self *)v133,
          v129,
          true);
  if ( *(uint32_t *)v179 != 0 )
  {
    v122 = (uint32_t *)*v113;
    if ( v113 != (uint32_t *)*v113 )
    {
      v121 = 1;
      v114 = v112;
      for ( i = v112; ; i = v114 )
      {
        v118 = *((uint32_t *)i + 6);
        v117 = 1;
        v19 = v122[7];
        s2 = (char *)v19;
        v119 = *(uint32_t *)(v19 + 64);
        if ( v118 == 0 )
        {
          v117 = 0;
          v118 = *(uint32_t *)(v19 + 56);
        }
        v20 = v115;
        v21 = (glitch::core::Self *)((char *)v115 + 4 * v118);
        if ( v21 != v115 )
        {
          do
          {
            if ( v20 != nullptr )
              *(uint32_t *)v20 = 0;
            v20 = (glitch::core::Self *)((char *)v20 + 4);
          }
          while ( v21 != v20 );
        }
        if ( v118 != 0 )
          break;
        v155 = 0;
LABEL_93:
        if ( v119 > 0 || v155 != 0 )
        {
          v47 = v138;
          v169 = *((uint32_t *)s2 + 16);
          v48 = (glitch::core::Self *)((char *)v138 + 4 * v169);
          if ( v48 != v138 )
          {
            do
            {
              if ( v47 != nullptr )
                *(uint32_t *)v47 = 0;
              v47 = (glitch::core::Self *)((char *)v47 + 4);
            }
            while ( v48 != v47 );
            v169 = *((uint32_t *)s2 + 16);
          }
          if ( v169 > 0 )
          {
            if ( v121 != 0 )
            {
              v49 = v138;
              v50 = 0;
              v51 = 0;
              do
              {
                v52 = &s2[*((uint32_t *)s2 + 17) + 68 + v51];
                if ( *((int *)v52 + 3) > 1 )
                {
                  v102 = v50;
                  glitch::os::Printer::logf(
                    2,
                    (int)(uintptr_t)("%s/%s: multidimensional parameters not supported yet"),
                    v129,
                    *(uint32_t *)v52);
                  v50 = v102;
                }
                if ( *(uint32_t *)v49 == 0 )
                {
                  v103 = v50;
                  glitch::video::CMaterialRendererManager::SCreationContext::addParameter(
                    v172,
                    reinterpret_cast<uint32_t **>(v179),
                    *reinterpret_cast<glitch::core::detail::SSharedStringHeapEntry::SData::Self **>(v52),
                    *((uint32_t *)v52 + 2),
                    255,
                    *(int16_t *)(v52 + *((uint32_t *)v52 + 4) + 16));
                  *(uint32_t *)v49 = v172[0];
                  v50 = v103;
                }
                ++v50;
                v51 += 24;
                v49 = (glitch::core::Self *)((char *)v49 + 4);
              }
              while ( v50 != v169 );
            }
            else
            {
              v157 = 0;
              for ( j = 0; j != v169; ++j )
              {
                v67 = &s2[*((uint32_t *)s2 + 17) + 68 + v157];
                if ( *((int *)v67 + 3) > 1 )
                  glitch::os::Printer::logf(
                    2,
                    (int)(uintptr_t)("%s/%s: multidimensional parameters not supported yet"),
                    v129,
                    *(uint32_t *)v67);
                v153 = (uint32_t *)((char *)v138 + 4 * j);
                glitch::video::CMaterialRendererManager::SCreationContext::getParameterID(
                  (glitch::video::CMaterialRendererManager::SCreationContext::Self *)v172,
                  (const char *)v179);
                v61 = v172[0] == 0;
                *v153 = v172[0];
                if ( v61 )
                {
                  glitch::video::CMaterialRendererManager::SCreationContext::addParameter(
                    v172,
                    reinterpret_cast<uint32_t **>(v179),
                    *reinterpret_cast<glitch::core::detail::SSharedStringHeapEntry::SData::Self **>(v67),
                    *((uint32_t *)v67 + 2),
                    255,
                    *(int16_t *)(v67 + *((uint32_t *)v67 + 4) + 16));
                  *v153 = v172[0];
                }
                v157 += 24;
              }
            }
          }
          if ( v118 > 0 )
          {
            for ( k = 0; k != v118; ++k )
            {
              v142 = (uint32_t *)((char *)v115 + 4 * k);
              v150 = *v142;
              if ( *v142 != 0 )
              {
                v53 = k;
                if ( v117 != 0 )
                  v53 = *(uint8_t *)(*((uint32_t *)v114 + 3) + k);
                v54 = (int)(uintptr_t)(&s2[12 * v53 + 60 + *((uint32_t *)s2 + 15)]);
                v135 = (uint32_t *)v54;
                v131 = *(uint32_t *)(v54 + 4);
                if ( v131 > 0 )
                {
                  v137 = 0;
                  v128 = v54 + 4;
                  do
                  {
                    v55 = v135[2] + v128;
                    v165 = v55 + 116 * v137 + 4;
                    v156 = *(uint32_t *)(v55 + 116 * v137 + 112);
                    if ( v156 > 0 )
                    {
                      v56 = 0;
                      v144 = (glitch::video::CMaterialRendererManager::SCreationContext::Self *)(v55 + 116 * v137 + 112);
                      do
                      {
                        while ( 1 )
                        {
                          v59 = (char *)v144 + *(uint32_t *)(v165 + 112);
                          v170 = *(uint32_t *)(*(uint32_t *)(v150 + 4) + 56 * (uint8_t)v137 + 32);
                          v60 = (int)(uintptr_t)(&v59[16 * v56 + 4]);
                          v106 = (uint8_t)v59[16 * v56 + 13];
                          sa = glitch::video::IShader::getParameterID(
                                 v170,
                                 *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)&v59[16 * v56 + 8],
                                 v106,
                                 0);
                          if ( sa != 0xFFFF )
                            break;
                          ++v56;
                          glitch::os::Printer::logf(
                            3,
                            (int)(uintptr_t)("%s/%s: invalid bind symbol: %s"),
                            v129,
                            *v135,
                            *(uint32_t *)(v60 + 4));
                          if ( v56 == v156 )
                            goto LABEL_123;
                        }
                        if ( *(uint8_t *)(v60 + 8) == 1 )
                        {
                          Id = glitch::core::detail::SIDedCollection_video_SShaderParameterDe_d5840b::getId(
                                 v133[116],
                                 *(const char **)(v60 + 12));
                          v63 = v106;
                          v64 = sa;
                          if ( Id == -1 )
                          {
                            uint32_t pEntry = *(uint32_t *)(v170 + 8 * v63 + 20) + 16 * v64;
                            uint8_t pType = *(uint8_t *)(pEntry + 8);
                            bool isLightSub = (pType > 0x1Bu && pType <= 0x2Fu) || pType == 27;
                            glitch::video::CGlobalMaterialParameterManager::addParameter(
                              (int)(uintptr_t)v172,
                              v133[116],
                              *(char **)(v60 + 12),
                              isLightSub ? 27 : (int)pType,
                              isLightSub ? 19 : (int)*(uint8_t *)(pEntry + 9),
                              (int)*(uint16_t *)(pEntry + 12),
                              (char)*(uint8_t *)(pEntry + 10));
                            Id = v172[0];
                            v64 = sa;
                            v63 = v106;
                          }
                          glitch::video::CMaterialRendererManager::SCreationContext::bindGlobalParameter(
                            v179,
                            Id,
                            *v142,
                            v137,
                            v64,
                            v63);
                        }
                        else
                        {
                          v57 = *(uint32_t *)(v60 + 12);
                          if ( *(uint32_t *)&s2[24 * v57 + 72 + *((uint32_t *)s2 + 17)] == 19 )
                          {
                            glitch::video::CMaterialRendererManager::SCreationContext::bindParameter(
                              v179,
                              *((uint32_t *)v138 + v57),
                              *(uint8_t *)(*(uint32_t *)(v170 + 8 * v106 + 20) + 16 * sa + 8),
                              *v142,
                              v137,
                              sa,
                              v106);
                          }
                          else
                          {
                            v58 = *((uint32_t *)v138 + v57);
                            if ( v58 != 0 )
                              glitch::video::CMaterialRendererManager::SCreationContext::bindParameter(
                                v179,
                                v58,
                                *(uint8_t *)(v58 + 8),
                                *v142,
                                v137,
                                sa,
                                v106);
                          }
                        }
                        ++v56;
                      }
                      while ( v56 != v156 );
                    }
LABEL_123:
                    ++v137;
                  }
                  while ( v137 != v131 );
                }
              }
            }
          }
        }
        v114 = (glitch::collada::SEffectTechniqueMap::Self *)((char *)v114 + 28);
        v61 = v113 == (uint32_t *)*v122;
        v122 = (uint32_t *)*v122;
        if ( v61 )
          goto LABEL_165;
        v121 = 0;
      }
      v127 = 0;
      v132 = v115;
      v139 = 0;
      v155 = 0;
      while ( 1 )
      {
        if ( v117 != 0 )
        {
          v22 = *(uint8_t *)(*((uint32_t *)v114 + 3) + v139);
          v23 = 4 * v139;
          v24 = *((uint32_t *)s2 + 15) + 4;
          s = *(char **)(*(uint32_t *)v114 + 4 * v139);
          if ( v121 != 0 )
            goto LABEL_36;
        }
        else
        {
          v22 = v139;
          v24 = *((uint32_t *)s2 + 15) + 4;
          s = *(char **)&s2[v24 + 56 + v127];
          v23 = 4 * v139;
          if ( v121 != 0 )
          {
LABEL_36:
            v130 = v132;
            if ( *(uint32_t *)v132 != 0 )
              goto LABEL_37;
            goto LABEL_41;
          }
        }
        v130 = (glitch::core::Self *)((char *)v115 + v23);
        glitch::video::CMaterialRendererManager::SCreationContext::getTechniqueID(
          (glitch::video::CMaterialRendererManager::SCreationContext::Self *)v172,
          (const char *)v179);
        *(uint32_t *)v130 = v172[0];
        if ( *(uint32_t *)v130 != 0 )
          goto LABEL_37;
LABEL_41:
        if ( (uint8_t)glitch::video::CMaterialRendererManager::SCreationContext::beginTechnique(
                                (glitch::video::CMaterialRendererManager::SCreationContext::Self *)v179,
                                s,
                                true) != 0 )
        {
          v25 = (int)(uintptr_t)(&s2[12 * v22 + 56 + v24]);
          v152 = v25;
          v136 = *(uint32_t *)(v25 + 4);
          if ( v136 > 0 )
          {
            v168 = 0;
            v134 = v25 + 4;
            do
            {
              v41 = v122[7];
              v42 = *(uint32_t *)(v152 + 8) + v134 + 116 * v168 + 4;
              src = (void *)(uintptr_t)(byte_20D3E78);
              v177 = (void *)(uintptr_t)(byte_20D3E78);
              G4_VCALL<void>(v126, 232, v123, v41, v152, v42, &src, &v177, v96, v97);
              v89 = *(const char **)(v42 + 4);
              v178[0] = (uint32_t)(uintptr_t)(byte_20D3E78);
              v101 = v89;
              v43 = strlen(v89);
              v28 = (char *)(uintptr_t)(byte_20D3E78);
              v44 = v101;
              if ( v43 == 0 )
                goto LABEL_86;
              if ( v43 > 1073741820 - dword_20D3E6C )
LABEL_216:
                sub_1900180("basic_string::append");
              v148 = v43 + dword_20D3E6C;
              if ( (uint32_t)(v43 + dword_20D3E6C) <= (*(uint32_t *)unk_20D3E70) && (intptr_t)(*(int32_t *)unk_20D3E74) <= 0 )
              {
                dest = (char *)(&byte_20D3E78[dword_20D3E6C]);
              }
              else if ( v101 < (const char *)(uintptr_t)(byte_20D3E78
)                     || (dest = (char *)(&byte_20D3E78[dword_20D3E6C]), v101 > (const char *)(uintptr_t)(&byte_20D3E78[dword_20D3E6C])) )
              {
                if ( (uint32_t)(v148) == (*(uint32_t *)unk_20D3E70) && (intptr_t)(*(int32_t *)unk_20D3E74) <= 0 )
                {
                  dest = (char *)&dword_20D3E6C + dword_20D3E6C + 12;
                }
                else
                {
                  sub_CFF4B0(v178, v148);
                  v44 = v101;
                  dest = (char *)(*(uint32_t *)(v178[0] - 12) + v178[0]);
                }
              }
              else
              {
                if ( (uint32_t)(v148) != (*(uint32_t *)unk_20D3E70) || (v45 = (char *)(uintptr_t)(byte_20D3E78), (intptr_t)(*(int32_t *)unk_20D3E74) > 0) )
                {
                  sub_CFF4B0(v178, v148);
                  v45 = (char *)v178[0];
                  dest = (char *)(v178[0] + *(uint32_t *)(v178[0] - 12));
                }
                v44 = &v45[v101 - (const char *)(byte_20D3E78)];
              }
              if ( v43 == 1 )
              {
                *dest = *v44;
                v28 = (char *)v178[0];
                if ( (int *)(v178[0] - 12) == (int *)(uintptr_t)(&dword_20D3E6C) )
                  goto LABEL_86;
              }
              else
              {
                memcpy(dest, v44, v43);
                v28 = (char *)v178[0];
                if ( (int *)(v178[0] - 12) == (int *)(uintptr_t)(&dword_20D3E6C) )
                  goto LABEL_86;
              }
              *((uint32_t *)v28 - 1) = 0;
              *((uint32_t *)v28 - 3) = v148;
              v28[v148] = 0;
              v28 = (char *)v178[0];
LABEL_86:
              v26 = (char *)src;
              v46 = *((uint32_t *)src - 3);
              if ( v46 == 0 )
                goto LABEL_46;
              v149 = *((uint32_t *)v28 - 3);
              v164 = v46 + v149;
              if ( v46 + v149 > *((uint32_t *)v28 - 2) || *((int *)v28 - 1) > 0 )
              {
                sub_CFF4B0(v178, v164);
                v26 = (char *)src;
                v27 = (char *)(*(uint32_t *)(v178[0] - 12) + v178[0]);
                if ( v46 == 1 )
                  goto LABEL_90;
              }
              else
              {
                v27 = &v28[v149];
                if ( v46 == 1 )
                {
LABEL_90:
                  *v27 = *v26;
                  v28 = (char *)v178[0];
                  if ( (int *)(v178[0] - 12) == (int *)(uintptr_t)(&dword_20D3E6C) )
                    goto LABEL_46;
                  goto LABEL_91;
                }
              }
              memcpy(v27, v26, v46);
              v28 = (char *)v178[0];
              if ( (int *)(v178[0] - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
              {
LABEL_91:
                *((uint32_t *)v28 - 1) = 0;
                *((uint32_t *)v28 - 3) = v164;
                v28[v164] = 0;
                v28 = (char *)v178[0];
              }
LABEL_46:
              v105 = v28;
              v100 = *(const char **)(v42 + 16);
              v29 = strlen(v100);
              v30 = v105;
              v31 = v100;
              if ( v29 == 0 )
                goto LABEL_57;
              v162 = *((uint32_t *)v105 - 3);
              if ( v29 > 1073741820 - v162 )
                goto LABEL_216;
              v146 = v29 + v162;
              v141 = *((uint32_t *)v105 - 2);
              if ( v29 + v162 <= v141 && *((int *)v105 - 1) <= 0 )
                goto LABEL_148;
              if ( v100 < v105 || (v32 = (char *)&v105[v162], v100 > &v105[v162]) )
              {
                if ( v146 != v141 || *((int *)v105 - 1) > 0 )
                {
                  sub_CFF4B0(v178, v146);
                  v31 = v100;
                  v32 = (char *)(*(uint32_t *)(v178[0] - 12) + v178[0]);
                  goto LABEL_55;
                }
LABEL_148:
                v32 = (char *)&v105[v162];
                goto LABEL_55;
              }
              if ( v146 != v141 || *((int *)v105 - 1) > 0 )
              {
                sub_CFF4B0(v178, v146);
                v30 = (const char *)v178[0];
                v32 = (char *)(v178[0] + *(uint32_t *)(v178[0] - 12));
              }
              v31 = &v30[v100 - v105];
LABEL_55:
              if ( v29 == 1 )
              {
                *v32 = *v31;
                v30 = (const char *)v178[0];
                if ( (int *)(v178[0] - 12) == (int *)(uintptr_t)(&dword_20D3E6C) )
                  goto LABEL_57;
              }
              else
              {
                memcpy(v32, v31, v29);
                v30 = (const char *)v178[0];
                if ( (int *)(v178[0] - 12) == (int *)(uintptr_t)(&dword_20D3E6C) )
                  goto LABEL_57;
              }
              *((uint32_t *)v30 - 1) = 0;
              *((uint32_t *)v30 - 3) = v146;
              ((char *)v30)[v146] = 0;
              v30 = (const char *)v178[0];
LABEL_57:
              v33 = (uint8_t *)(v177);
              v34 = *((uint32_t *)v177 - 3);
              if ( v34 == 0 )
                goto LABEL_62;
              v147 = *((uint32_t *)v30 - 3);
              v163 = v34 + v147;
              if ( v34 + v147 > *((uint32_t *)v30 - 2) || *((int *)v30 - 1) > 0 )
              {
                sub_CFF4B0(v178, v163);
                v33 = (uint8_t *)(v177);
                v35 = (char *)(*(uint32_t *)(v178[0] - 12) + v178[0]);
                if ( v34 != 1 )
                  goto LABEL_60;
              }
              else
              {
                v35 = (char *)&v30[v147];
                if ( v34 != 1 )
                {
LABEL_60:
                  memcpy(v35, v33, v34);
                  v36 = v178[0];
                  if ( (int *)(v178[0] - 12) == (int *)(uintptr_t)(&dword_20D3E6C) )
                    goto LABEL_61;
                  goto LABEL_134;
                }
              }
              *v35 = *v33;
              v36 = v178[0];
              if ( (int *)(v178[0] - 12) == (int *)(uintptr_t)(&dword_20D3E6C) )
              {
LABEL_61:
                v33 = (uint8_t *)(v177);
                goto LABEL_62;
              }
LABEL_134:
              *(uint32_t *)(v36 - 4) = 0;
              *(uint32_t *)(v36 - 12) = v163;
              *(uint8_t *)(v36 + v163) = 0;
              v33 = (uint8_t *)(v177);
LABEL_62:
              v97 = 0;
              v96 = 0;
              v95 = v33;
              glitch::video::CGLSLShaderManager::createShader(&v174);
              v37 = v178[0] - 12;
              if ( (int *)(v178[0] - 12) != (int *)(uintptr_t)(&dword_20D3E6C
)                && __sync_fetch_and_add((volatile int32_t *)(v178[0] - 4), 0xFFFFFFFF) <= 0 )
              {
                gll_operator_delete_arr(v37);
              }
              v38 = (char *)v177 - 12;
              if ( (char *)v177 - 12 != (char *)&dword_20D3E6C
                && __sync_fetch_and_add((volatile int32_t *)v177 - 1, 0xFFFFFFFF) <= 0 )
              {
                gll_operator_delete_arr((int)(uintptr_t)(v38));
              }
              v39 = (char *)src - 12;
              if ( (char *)src - 12 != (char *)&dword_20D3E6C
                && __sync_fetch_and_add((volatile int32_t *)src - 1, 0xFFFFFFFF) <= 0 )
              {
                gll_operator_delete_arr((int)(uintptr_t)(v39));
              }
              if ( v174 == nullptr )
              {
                v65 = 0;
                if ( *(uint32_t *)v123 != 0 )
                  v65 = *(uint32_t *)(*(uint32_t *)v123 + 12);
                glitch::os::Printer::logf(
                  3,
                  (int)(uintptr_t)("%s/%s/%s/pass_%i: shader creation failed"),
                  v65,
                  *(uint32_t *)(v122[7] + 4),
                  s,
                  v168,
                  v95,
                  0,
                  0);
              }
              sub_CFE240(v181, (uint8_t *)(v42 + 28));
              v180 = v174;
              if ( v174 != nullptr )
                sub_8B1B00(v174 + 1);
              glitch::video::CMaterialRendererManager::SCreationContext::addRenderPass(v179, (bool)&v180, v181, &v173);
              if ( v180 != nullptr )
                sub_5459C0(v180);
              v40 = v155;
              if ( *(int *)(v42 + 108) > 0 )
                v40 = 1;
              v155 = v40;
              if ( v174 != nullptr )
                sub_5459C0(v174);
              ++v168;
            }
            while ( v168 != v136 );
          }
          glitch::video::CMaterialRendererManager::SCreationContext::endTechnique(
            (glitch::video::CMaterialRendererManager::SCreationContext::Self *)v172,
            (bool)v179,
            0);
          *(uint32_t *)v130 = v172[0];
        }
LABEL_37:
        ++v139;
        v132 = (glitch::core::Self *)((char *)v132 + 4);
        v127 += 12;
        if ( v139 == v118 )
          goto LABEL_93;
      }
    }
LABEL_165:
    v68 = 1;
    v17 = glitch::video::CMaterialRendererManager::endMaterialRenderer(
            v109,
            (glitch::video::CMaterialRendererManager::SCreationContext::Self *)v179);
  }
  else
  {
    v68 = 0;
  }
  v69 = (glitch::video::CMaterialRenderer::Self **)&glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::CMaterialRenderer::Self>,unsigned short,false,glitch::video::detail::materialrenderermanager::SProperties::Self,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid;
  v70 = *((uint32_t *)v109 + 5);
  if ( v17 < (unsigned int)((*((uint32_t *)v109 + 6) - v70) >> 2) )
  {
    v71 = *(uint32_t *)(v70 + 4 * v17);
    if ( v71 != 0 )
      v69 = (glitch::video::CMaterialRenderer::Self **)(v71 + 24);
  }
  v72 = *v69;
  v175 = *v69;
  if ( v175 != nullptr )
    sub_8B1B00((volatile int32_t *)v72);
  if ( v112 != v110 )
  {
    v73 = v112;
    do
    {
      v90 = v73;
      v73 = (glitch::collada::SEffectTechniqueMap::Self *)((char *)v73 + 28);
      glitch::collada::SEffectTechniqueMap::Destroy(v90);
    }
    while ( v73 != v110 );
  }
  if ( v112 != nullptr )
    glitch::core::releaseProcessBuffer(v112, v94);
  if ( v68 != 0 )
  {
    if ( v175 != nullptr )
    {
      v151 = *((uint16_t *)v175 + 7);
      v140 = (uint32_t *)*v113;
      if ( v113 != (uint32_t *)*v113 )
      {
        v154 = 0;
        v74 = (uint32_t *)*v113;
        do
        {
          v75 = (glitch::video::CMaterialRendererManager::SCreationContext::Self *)v74[7];
          v145 = v75;
          v166 = *((uint32_t *)v75 + 16);
          if ( v154 < v151 )
          {
            v76 = v154;
            v77 = (uint32_t *)((char *)v75 + 64);
            v78 = 0;
            v143 = v77;
            do
            {
              v79 = nullptr;
              if ( v76 < *((uint16_t *)v175 + 7) )
                v79 = (int *)(*((uint32_t *)v175 + 8) + 16 * v76);
              if ( v166 <= v78 )
                break;
              v80 = *v79;
              v171 = v78;
              v81 = (char *)(v80 + 4);
              if ( v80 == 0 )
                v81 = nullptr;
              s2a = v81;
              v82 = 24 * v78;
              v158 = (int)(uintptr_t)(v143) + *((uint32_t *)v145 + 17) + 4;
              while ( strcmp(*(const char **)(v158 + v82), s2a) != 0 )
              {
                ++v171;
                v82 += 24;
                if ( v171 == v166 )
                  goto LABEL_190;
              }
              v78 = v171;
              if ( v166 <= v171 )
                break;
              sub_D21CF0(v123, &v175, v154++, (uint32_t *)(v158 + v82), v111);
              v76 = v154;
            }
            while ( v151 > v154 );
          }
LABEL_190:
          v74 = (uint32_t *)*v140;
          v61 = v113 == (uint32_t *)*v140;
          v140 = (uint32_t *)*v140;
        }
        while ( !v61 );
      }
      goto LABEL_191;
    }
  }
  else if ( v175 != nullptr )
  {
LABEL_191:
    if ( v138 != nullptr )
      glitch::core::releaseProcessBuffer(v138, v94);
    if ( v115 != nullptr )
      glitch::core::releaseProcessBuffer(v115, v94);
    if ( ProcessBufferHeapAvailableMemory != glitch::core::getProcessBufferHeapAvailableMemory(v88) )
      glitch::core::dumpProcessBufferAllocations(glitch::os::Printer::Logger, 3);
    v83 = v175;
    v61 = v175 == nullptr;
    *v108 = v175;
    if ( !v61 )
    {
      sub_8B1B00((volatile int32_t *)v83);
      v84 = v175;
      if ( v175 != nullptr && __sync_fetch_and_add((volatile int32_t *)v175, 0xFFFFFFFF) == 1 )
      {
        glitch::video::CMaterialRenderer::Destroy(v84);
        gll_operator_delete_arr((int)(uintptr_t)(v84));
      }
    }
    glitch::video::CMaterialRendererManager::SCreationContext::Destroy((glitch::video::CMaterialRendererManager::SCreationContext::Self *)v179);
    glitch::core::setProcessBufferHeapExcessEnabled((glitch::core::Self *)isProcessBufferHeapExcessEnabled, (bool)v94);
    return v108;
  }
  glitch::os::Printer::logf(3, (int)(uintptr_t)("failed to create material renderer %s"));
  goto LABEL_191;
}

// ----------------------------------------------------------------------------
// Function: glitch::collada::createMaterialRendererForProfile_collada_SProfileNullTrai_a259b7  (binary VA: 0xd37910)
// Original: glitch::collada::createMaterialRendererForProfile<glitch::collada::SProfileNullTraits>
// ----------------------------------------------------------------------------
glitch::video::CMaterialRenderer::Self ** glitch::collada::createMaterialRendererForProfile_collada_SProfileNullTrai_a259b7(glitch::video::CMaterialRenderer::Self **a1, int a2, glitch::video::CMaterialRendererManager::Self **a3, char *a4, uint32_t *a5, int a6, char *a7)
{
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  size_t v10;
  glitch::collada::SEffectTechniqueMap::Self *v11;
  glitch::collada::SEffectTechniqueMap::Self *v12;
  glitch::collada::SEffectTechniqueMap::Self *v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  uint16_t v17;
  char v18; // di
  int v19;
  glitch::core::Self *v20;
  glitch::core::Self *v21;
  uint8_t v22; // di
  int v23;
  int v24;
  int v25;
  glitch::video::CMaterialRendererManager::SCreationContext::Self *m;
  char v27;
  int v28;
  int v29;
  int v30;
  glitch::core::Self *v31;
  glitch::core::Self *v32;
  glitch::core::Self *v33;
  int v34;
  int i;
  char *v36;
  uint8_t v37;
  int v38;
  char *v39;
  int v40;
  const char **v41;
  uint16_t ParameterID;
  uint16_t v43; // si
  const char *v44;
  bool v45;
  int16_t Id;
  int16_t v47;
  int v48;
  int j;
  char *v50;
  glitch::video::CMaterialRenderer::Self **v51;
  int v52;
  int v53;
  glitch::video::CMaterialRenderer::Self *v54;
  glitch::collada::SEffectTechniqueMap::Self *v55;
  uint32_t *v56;
  int v57;
  uint16_t v58;
  int *v59;
  int v60;
  char *v61;
  int v62;
  glitch::video::CMaterialRenderer::Self *v63;
  glitch::video::CMaterialRenderer::Self *v64;
  uint32_t *v66;
  typedef glitch::core::Self *_g4_t_v67;
  typedef glitch::core::Self *_g4_t_v68;
  typedef glitch::core::Self *_g4_t_v69;
  typedef glitch::collada::SEffectTechniqueMap::Self *_g4_t_v70;
  typedef bool _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef void *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef unsigned int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef uint16_t _g4_t_v80;
  typedef int _g4_t_v81;
  typedef glitch::collada::SEffectTechniqueMap::Self *_g4_t_v82;
  typedef char *_g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_ProcessBufferHeapAvailableMemory;
  typedef glitch::video::CMaterialRenderer::Self **_g4_t_v86;
  typedef glitch::video::CMaterialRendererManager::Self *_g4_t_v87;
  typedef glitch::collada::SEffectTechniqueMap::Self *_g4_t_v88;
  typedef int _g4_t_v89;
  typedef glitch::collada::SEffectTechniqueMap::Self *_g4_t_v90;
  typedef uint32_t *_g4_t_v91;
  typedef uint32_t *_g4_t_v92;
  typedef int _g4_t_v93;
  typedef glitch::collada::SEffectTechniqueMap::Self *_g4_t_v94;
  typedef glitch::core::Self *_g4_t_v95;
  typedef uint8_t _g4_t_isProcessBufferHeapExcessEnabled;
  typedef char _g4_t_v97;
  typedef int _g4_t_v98;
  typedef const char *_g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef char *_g4_t_v102;
  typedef char *_g4_t_k;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef glitch::video::IVideoDriver::Self *_g4_t_v107;
  typedef char *_g4_t_v108;
  typedef char _g4_t_v109;
  typedef char *_g4_t_v110;
  typedef char *_g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef glitch::core::Self *_g4_t_v114;
  typedef uint32_t *_g4_t_v115;
  typedef glitch::core::Self *_g4_t_v116;
  typedef glitch::core::Self *_g4_t_v117;
  typedef uint32_t *_g4_t_v118;
  typedef int _g4_t_v119;
  typedef char **_g4_t_v120;
  typedef char *_g4_t_format;
  typedef uint16_t _g4_t_formata;
  typedef glitch::video::CMaterialRendererManager::SCreationContext::Self *_g4_t_v123;
  typedef glitch::video::CMaterialRendererManager::SCreationContext::Self *_g4_t_v124;
  typedef glitch::video::CMaterialRendererManager::SCreationContext::Self *_g4_t_v125;
  typedef int _g4_t_v126;
  typedef uint32_t *_g4_t_v127;
  typedef uint16_t _g4_t_v128;
  typedef char _g4_t_v129;
  typedef char *_g4_t_v130;
  typedef char *_g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef char *_g4_t_s2;
  typedef char *_g4_t_s2a;
  typedef char *_g4_t_s2b;
  typedef unsigned int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef int _g4_t_v142;
  typedef int _g4_t_v143;
  typedef int _g4_t_v144;
  typedef int _g4_t_v145;
  typedef uint32_t _g4_t_v146[4];
  typedef char _g4_t_v147;
  typedef volatile int32_t *_g4_t_v148;
  typedef glitch::video::CMaterialRenderer::Self *_g4_t_v149;
  typedef bool _g4_t_v150[4];
  typedef volatile int32_t *_g4_t_v151;
  typedef char _g4_t_s[8];
  typedef int _g4_t_v153[14];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (8u + sizeof(_g4_t_v67)) > _g4_s0 ? (8u + sizeof(_g4_t_v67)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v68)) > _g4_s1 ? (8u + sizeof(_g4_t_v68)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v69)) > _g4_s2 ? (8u + sizeof(_g4_t_v69)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v70)) > _g4_s3 ? (8u + sizeof(_g4_t_v70)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v71)) > _g4_s4 ? (12u + sizeof(_g4_t_v71)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v72)) > _g4_s5 ? (12u + sizeof(_g4_t_v72)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v73)) > _g4_s6 ? (12u + sizeof(_g4_t_v73)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v74)) > _g4_s7 ? (12u + sizeof(_g4_t_v74)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v75)) > _g4_s8 ? (24u + sizeof(_g4_t_v75)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v76)) > _g4_s9 ? (28u + sizeof(_g4_t_v76)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v77)) > _g4_s10 ? (32u + sizeof(_g4_t_v77)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v78)) > _g4_s11 ? (52u + sizeof(_g4_t_v78)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v79)) > _g4_s12 ? (52u + sizeof(_g4_t_v79)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v80)) > _g4_s13 ? (52u + sizeof(_g4_t_v80)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v81)) > _g4_s14 ? (52u + sizeof(_g4_t_v81)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v82)) > _g4_s15 ? (56u + sizeof(_g4_t_v82)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v83)) > _g4_s16 ? (56u + sizeof(_g4_t_v83)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v84)) > _g4_s17 ? (56u + sizeof(_g4_t_v84)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_ProcessBufferHeapAvailableMemory)) > _g4_s18 ? (60u + sizeof(_g4_t_ProcessBufferHeapAvailableMemory)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v86)) > _g4_s19 ? (64u + sizeof(_g4_t_v86)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v87)) > _g4_s20 ? (68u + sizeof(_g4_t_v87)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v88)) > _g4_s21 ? (72u + sizeof(_g4_t_v88)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v89)) > _g4_s22 ? (76u + sizeof(_g4_t_v89)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v90)) > _g4_s23 ? (80u + sizeof(_g4_t_v90)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v91)) > _g4_s24 ? (84u + sizeof(_g4_t_v91)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v92)) > _g4_s25 ? (88u + sizeof(_g4_t_v92)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v93)) > _g4_s26 ? (92u + sizeof(_g4_t_v93)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v94)) > _g4_s27 ? (96u + sizeof(_g4_t_v94)) : _g4_s27,
    _g4_s29 = (100u + sizeof(_g4_t_v95)) > _g4_s28 ? (100u + sizeof(_g4_t_v95)) : _g4_s28,
    _g4_s30 = (106u + sizeof(_g4_t_isProcessBufferHeapExcessEnabled)) > _g4_s29 ? (106u + sizeof(_g4_t_isProcessBufferHeapExcessEnabled)) : _g4_s29,
    _g4_s31 = (107u + sizeof(_g4_t_v97)) > _g4_s30 ? (107u + sizeof(_g4_t_v97)) : _g4_s30,
    _g4_s32 = (108u + sizeof(_g4_t_v98)) > _g4_s31 ? (108u + sizeof(_g4_t_v98)) : _g4_s31,
    _g4_s33 = (116u + sizeof(_g4_t_v99)) > _g4_s32 ? (116u + sizeof(_g4_t_v99)) : _g4_s32,
    _g4_s34 = (116u + sizeof(_g4_t_v100)) > _g4_s33 ? (116u + sizeof(_g4_t_v100)) : _g4_s33,
    _g4_s35 = (120u + sizeof(_g4_t_v101)) > _g4_s34 ? (120u + sizeof(_g4_t_v101)) : _g4_s34,
    _g4_s36 = (124u + sizeof(_g4_t_v102)) > _g4_s35 ? (124u + sizeof(_g4_t_v102)) : _g4_s35,
    _g4_s37 = (124u + sizeof(_g4_t_k)) > _g4_s36 ? (124u + sizeof(_g4_t_k)) : _g4_s36,
    _g4_s38 = (128u + sizeof(_g4_t_v104)) > _g4_s37 ? (128u + sizeof(_g4_t_v104)) : _g4_s37,
    _g4_s39 = (128u + sizeof(_g4_t_v105)) > _g4_s38 ? (128u + sizeof(_g4_t_v105)) : _g4_s38,
    _g4_s40 = (132u + sizeof(_g4_t_v106)) > _g4_s39 ? (132u + sizeof(_g4_t_v106)) : _g4_s39,
    _g4_s41 = (136u + sizeof(_g4_t_v107)) > _g4_s40 ? (136u + sizeof(_g4_t_v107)) : _g4_s40,
    _g4_s42 = (140u + sizeof(_g4_t_v108)) > _g4_s41 ? (140u + sizeof(_g4_t_v108)) : _g4_s41,
    _g4_s43 = (144u + sizeof(_g4_t_v109)) > _g4_s42 ? (144u + sizeof(_g4_t_v109)) : _g4_s42,
    _g4_s44 = (148u + sizeof(_g4_t_v110)) > _g4_s43 ? (148u + sizeof(_g4_t_v110)) : _g4_s43,
    _g4_s45 = (148u + sizeof(_g4_t_v111)) > _g4_s44 ? (148u + sizeof(_g4_t_v111)) : _g4_s44,
    _g4_s46 = (152u + sizeof(_g4_t_v112)) > _g4_s45 ? (152u + sizeof(_g4_t_v112)) : _g4_s45,
    _g4_s47 = (152u + sizeof(_g4_t_v113)) > _g4_s46 ? (152u + sizeof(_g4_t_v113)) : _g4_s46,
    _g4_s48 = (156u + sizeof(_g4_t_v114)) > _g4_s47 ? (156u + sizeof(_g4_t_v114)) : _g4_s47,
    _g4_s49 = (156u + sizeof(_g4_t_v115)) > _g4_s48 ? (156u + sizeof(_g4_t_v115)) : _g4_s48,
    _g4_s50 = (160u + sizeof(_g4_t_v116)) > _g4_s49 ? (160u + sizeof(_g4_t_v116)) : _g4_s49,
    _g4_s51 = (164u + sizeof(_g4_t_v117)) > _g4_s50 ? (164u + sizeof(_g4_t_v117)) : _g4_s50,
    _g4_s52 = (164u + sizeof(_g4_t_v118)) > _g4_s51 ? (164u + sizeof(_g4_t_v118)) : _g4_s51,
    _g4_s53 = (168u + sizeof(_g4_t_v119)) > _g4_s52 ? (168u + sizeof(_g4_t_v119)) : _g4_s52,
    _g4_s54 = (168u + sizeof(_g4_t_v120)) > _g4_s53 ? (168u + sizeof(_g4_t_v120)) : _g4_s53,
    _g4_s55 = (172u + sizeof(_g4_t_format)) > _g4_s54 ? (172u + sizeof(_g4_t_format)) : _g4_s54,
    _g4_s56 = (172u + sizeof(_g4_t_formata)) > _g4_s55 ? (172u + sizeof(_g4_t_formata)) : _g4_s55,
    _g4_s57 = (176u + sizeof(_g4_t_v123)) > _g4_s56 ? (176u + sizeof(_g4_t_v123)) : _g4_s56,
    _g4_s58 = (176u + sizeof(_g4_t_v124)) > _g4_s57 ? (176u + sizeof(_g4_t_v124)) : _g4_s57,
    _g4_s59 = (176u + sizeof(_g4_t_v125)) > _g4_s58 ? (176u + sizeof(_g4_t_v125)) : _g4_s58,
    _g4_s60 = (180u + sizeof(_g4_t_v126)) > _g4_s59 ? (180u + sizeof(_g4_t_v126)) : _g4_s59,
    _g4_s61 = (180u + sizeof(_g4_t_v127)) > _g4_s60 ? (180u + sizeof(_g4_t_v127)) : _g4_s60,
    _g4_s62 = (180u + sizeof(_g4_t_v128)) > _g4_s61 ? (180u + sizeof(_g4_t_v128)) : _g4_s61,
    _g4_s63 = (184u + sizeof(_g4_t_v129)) > _g4_s62 ? (184u + sizeof(_g4_t_v129)) : _g4_s62,
    _g4_s64 = (184u + sizeof(_g4_t_v130)) > _g4_s63 ? (184u + sizeof(_g4_t_v130)) : _g4_s63,
    _g4_s65 = (184u + sizeof(_g4_t_v131)) > _g4_s64 ? (184u + sizeof(_g4_t_v131)) : _g4_s64,
    _g4_s66 = (184u + sizeof(_g4_t_v132)) > _g4_s65 ? (184u + sizeof(_g4_t_v132)) : _g4_s65,
    _g4_s67 = (200u + sizeof(_g4_t_v133)) > _g4_s66 ? (200u + sizeof(_g4_t_v133)) : _g4_s66,
    _g4_s68 = (200u + sizeof(_g4_t_v134)) > _g4_s67 ? (200u + sizeof(_g4_t_v134)) : _g4_s67,
    _g4_s69 = (200u + sizeof(_g4_t_v135)) > _g4_s68 ? (200u + sizeof(_g4_t_v135)) : _g4_s68,
    _g4_s70 = (200u + sizeof(_g4_t_v136)) > _g4_s69 ? (200u + sizeof(_g4_t_v136)) : _g4_s69,
    _g4_s71 = (204u + sizeof(_g4_t_s2)) > _g4_s70 ? (204u + sizeof(_g4_t_s2)) : _g4_s70,
    _g4_s72 = (204u + sizeof(_g4_t_s2a)) > _g4_s71 ? (204u + sizeof(_g4_t_s2a)) : _g4_s71,
    _g4_s73 = (204u + sizeof(_g4_t_s2b)) > _g4_s72 ? (204u + sizeof(_g4_t_s2b)) : _g4_s72,
    _g4_s74 = (208u + sizeof(_g4_t_v140)) > _g4_s73 ? (208u + sizeof(_g4_t_v140)) : _g4_s73,
    _g4_s75 = (208u + sizeof(_g4_t_v141)) > _g4_s74 ? (208u + sizeof(_g4_t_v141)) : _g4_s74,
    _g4_s76 = (208u + sizeof(_g4_t_v142)) > _g4_s75 ? (208u + sizeof(_g4_t_v142)) : _g4_s75,
    _g4_s77 = (208u + sizeof(_g4_t_v143)) > _g4_s76 ? (208u + sizeof(_g4_t_v143)) : _g4_s76,
    _g4_s78 = (208u + sizeof(_g4_t_v144)) > _g4_s77 ? (208u + sizeof(_g4_t_v144)) : _g4_s77,
    _g4_s79 = (208u + sizeof(_g4_t_v145)) > _g4_s78 ? (208u + sizeof(_g4_t_v145)) : _g4_s78,
    _g4_s80 = (212u + sizeof(_g4_t_v146)) > _g4_s79 ? (212u + sizeof(_g4_t_v146)) : _g4_s79,
    _g4_s81 = (231u + sizeof(_g4_t_v147)) > _g4_s80 ? (231u + sizeof(_g4_t_v147)) : _g4_s80,
    _g4_s82 = (232u + sizeof(_g4_t_v148)) > _g4_s81 ? (232u + sizeof(_g4_t_v148)) : _g4_s81,
    _g4_s83 = (248u + sizeof(_g4_t_v149)) > _g4_s82 ? (248u + sizeof(_g4_t_v149)) : _g4_s82,
    _g4_s84 = (264u + sizeof(_g4_t_v150)) > _g4_s83 ? (264u + sizeof(_g4_t_v150)) : _g4_s83,
    _g4_s85 = (268u + sizeof(_g4_t_v151)) > _g4_s84 ? (268u + sizeof(_g4_t_v151)) : _g4_s84,
    _g4_s86 = (272u + sizeof(_g4_t_s)) > _g4_s85 ? (272u + sizeof(_g4_t_s)) : _g4_s85,
    _g4_s87 = (280u + sizeof(_g4_t_v153)) > _g4_s86 ? (280u + sizeof(_g4_t_v153)) : _g4_s86
  };
  alignas(16) uint8_t _g4_sf[_g4_s87];
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 8u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 8u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 8u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 8u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 12u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 12u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 12u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 12u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 24u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 28u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 32u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 52u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 52u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 52u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 52u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 56u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 56u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 56u);
  _g4_t_ProcessBufferHeapAvailableMemory &ProcessBufferHeapAvailableMemory = *reinterpret_cast<_g4_t_ProcessBufferHeapAvailableMemory *>(_g4_sf + 60u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 64u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 68u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 72u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 76u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 80u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 84u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 88u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 92u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 96u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 100u);
  _g4_t_isProcessBufferHeapExcessEnabled &isProcessBufferHeapExcessEnabled = *reinterpret_cast<_g4_t_isProcessBufferHeapExcessEnabled *>(_g4_sf + 106u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 107u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 108u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 116u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 116u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 120u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 124u);
  _g4_t_k &k = *reinterpret_cast<_g4_t_k *>(_g4_sf + 124u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 128u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 128u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 132u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 136u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 140u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 144u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 148u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 148u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 152u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 152u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 156u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 156u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 160u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 164u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 164u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 168u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 168u);
  _g4_t_format &format = *reinterpret_cast<_g4_t_format *>(_g4_sf + 172u);
  _g4_t_formata &formata = *reinterpret_cast<_g4_t_formata *>(_g4_sf + 172u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 176u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 176u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 176u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 180u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 180u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 180u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 184u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 184u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 184u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 184u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 200u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 200u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 200u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 200u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 204u);
  _g4_t_s2a &s2a = *reinterpret_cast<_g4_t_s2a *>(_g4_sf + 204u);
  _g4_t_s2b &s2b = *reinterpret_cast<_g4_t_s2b *>(_g4_sf + 204u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 208u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 208u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 208u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 208u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 208u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 208u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 212u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 231u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 232u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 248u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 264u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 268u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 272u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 280u);

  v153[10] = (int)(uintptr_t)(&a1);
  v93 = a2;
  v107 = (glitch::video::IVideoDriver::Self *)a3;
  v108 = a4;
  v92 = a5;
  s2 = a7;
  v86 = a1;
  v89 = a6;
  if ( (uint32_t *)*a5 == a5 )
  {
    *a1 = nullptr;
    return v86;
  }
  v87 = a3[113];
  isProcessBufferHeapExcessEnabled = glitch::core::isProcessBufferHeapExcessEnabled(v67);
  glitch::core::setProcessBufferHeapExcessEnabled((glitch::core::Self *)((char *)&dword_0 + 1), v71);
  ProcessBufferHeapAvailableMemory = glitch::core::getProcessBufferHeapAvailableMemory(v68);
  v88 = nullptr;
  v90 = nullptr;
  v7 = (uint32_t *)*v92;
  v8 = (uint32_t *)*v92;
  if ( v92 != (uint32_t *)*v92 )
  {
    v9 = 0;
    do
    {
      v7 = (uint32_t *)*v7;
      ++v9;
    }
    while ( v92 != v7 );
    v10 = 28 * v9;
    v11 = (glitch::collada::SEffectTechniqueMap::Self *)glitch::core::allocProcessBuffer(v10, v72);
    v90 = v11;
    v88 = (glitch::collada::SEffectTechniqueMap::Self *)((char *)v11 + v10);
    if ( v11 != (glitch::collada::SEffectTechniqueMap::Self *)((char *)v11 + v10) )
    {
      v12 = v11;
      do
      {
        if ( v12 != nullptr )
          glitch::collada::SEffectTechniqueMap::Construct(v12);
        v12 = (glitch::collada::SEffectTechniqueMap::Self *)((char *)v12 + 28);
      }
      while ( v12 != v88 );
    }
    v8 = (uint32_t *)*v92;
  }
  v116 = nullptr;
  v95 = nullptr;
  if ( v92 != v8 )
  {
    v13 = v90;
    v140 = 0;
    v14 = 0;
    do
    {
      v15 = v8[7];
      v73 = v93;
      v78 = v14;
      v82 = v13;
      G4_VCALL<void>(s2, 44);
      v14 = v78;
      if ( v78 < *(uint32_t *)(v15 + 16) )
        v14 = *(uint32_t *)(v15 + 16);
      v16 = *((uint32_t *)v82 + 6);
      if ( v16 == 0 )
        v16 = *(uint32_t *)(v15 + 8);
      v8 = (uint32_t *)*v8;
      if ( v140 >= v16 )
        v16 = v140;
      v13 = (glitch::collada::SEffectTechniqueMap::Self *)((char *)v82 + 28);
      v140 = v16;
    }
    while ( v92 != v8 );
    v116 = nullptr;
    if ( v14 != 0 )
      v116 = (glitch::core::Self *)glitch::core::allocProcessBuffer(4 * v14, v93);
    v95 = nullptr;
    if ( v140 != 0 )
      v95 = (glitch::core::Self *)glitch::core::allocProcessBuffer(4 * v140, v73);
  }
  *(uint32_t *)v150 = 0;
  v17 = glitch::video::CMaterialRendererManager::beginMaterialRenderer(
          v87,
          (glitch::video::CMaterialRendererManager::SCreationContext::Self *)v150,
          v107,
          v108,
          true);
  v18 = 0;
  if ( *(uint32_t *)v150 != 0 )
  {
    v91 = (uint32_t *)*v92;
    if ( v92 != (uint32_t *)*v92 )
    {
      v109 = 1;
      v94 = v90;
      while ( 1 )
      {
        v97 = 1;
        s2a = (char *)v91[7];
        v104 = *((uint32_t *)s2a + 4);
        v19 = *((uint32_t *)v94 + 6);
        v98 = v19;
        if ( v19 == 0 )
        {
          v97 = 0;
          v98 = *((uint32_t *)s2a + 2);
          v19 = v98;
        }
        v20 = v95;
        v21 = (glitch::core::Self *)((char *)v95 + 4 * v19);
        if ( v21 != v95 )
        {
          do
          {
            if ( v20 != nullptr )
              *(uint32_t *)v20 = 0;
            v20 = (glitch::core::Self *)((char *)v20 + 4);
          }
          while ( v21 != v20 );
        }
        v129 = 0;
        if ( v98 != 0 )
          break;
LABEL_57:
        if ( v104 > 0 || v129 != 0 )
        {
          v31 = v116;
          v142 = *((uint32_t *)s2a + 4);
          v32 = (glitch::core::Self *)((char *)v116 + 4 * v142);
          if ( v32 != v116 )
          {
            do
            {
              if ( v31 != nullptr )
                *(uint32_t *)v31 = 0;
              v31 = (glitch::core::Self *)((char *)v31 + 4);
            }
            while ( v32 != v31 );
            v142 = *((uint32_t *)s2a + 4);
          }
          if ( v142 > 0 )
          {
            if ( v109 != 0 )
            {
              v130 = s2a + 16;
              v33 = v116;
              v34 = 0;
              for ( i = 0; i != v142; ++i )
              {
                v36 = &v130[*((uint32_t *)s2a + 5) + 4 + v34];
                if ( *((int *)v36 + 3) > 1 )
                {
                  v83 = &v130[*((uint32_t *)s2a + 5) + 4 + v34];
                  v79 = v34;
                  glitch::os::Printer::logf(
                    2,
                    (int)(uintptr_t)("%s/%s: multidimensional parameters not supported yet"),
                    v108,
                    *(uint32_t *)v36);
                  v34 = v79;
                  v36 = v83;
                }
                if ( *(uint32_t *)v33 == 0 )
                {
                  v75 = 255;
                  v76 = *(uint32_t *)&v36[*((uint32_t *)v36 + 4) + 16];
                  v81 = v34;
                  glitch::video::CMaterialRendererManager::SCreationContext::addParameter(
                    v146,
                    reinterpret_cast<uint32_t **>(v150),
                    *reinterpret_cast<glitch::core::detail::SSharedStringHeapEntry::SData::Self **>(v36),
                    *((uint32_t *)v36 + 2),
                    255,
                    (int16_t)v76);
                  *(uint32_t *)v33 = v146[0];
                  v34 = v81;
                }
                v34 += 24;
                v33 = (glitch::core::Self *)((char *)v33 + 4);
              }
            }
            else
            {
              v135 = 0;
              for ( j = 0; j != v142; ++j )
              {
                v50 = &s2a[*((uint32_t *)s2a + 5) + 20 + v135];
                if ( *((int *)v50 + 3) > 1 )
                  glitch::os::Printer::logf(
                    2,
                    (int)(uintptr_t)("%s/%s: multidimensional parameters not supported yet"),
                    v108,
                    *(uint32_t *)v50);
                v127 = (uint32_t *)((char *)v116 + 4 * j);
                glitch::video::CMaterialRendererManager::SCreationContext::getParameterID(
                  (glitch::video::CMaterialRendererManager::SCreationContext::Self *)v146,
                  (const char *)v150);
                v45 = v146[0] == 0;
                *v127 = v146[0];
                if ( v45 )
                {
                  v75 = 255;
                  v76 = *(uint32_t *)&v50[*((uint32_t *)v50 + 4) + 16];
                  glitch::video::CMaterialRendererManager::SCreationContext::addParameter(
                    v146,
                    reinterpret_cast<uint32_t **>(v150),
                    *reinterpret_cast<glitch::core::detail::SSharedStringHeapEntry::SData::Self **>(v50),
                    *((uint32_t *)v50 + 2),
                    255,
                    (int16_t)v76);
                  *v127 = v146[0];
                }
                v135 += 24;
              }
            }
          }
          if ( v98 > 0 )
          {
            for ( k = nullptr; k != (char *)v98; ++k )
            {
              v120 = (char **)((char *)v95 + 4 * (uint32_t)(uintptr_t)(k));
              format = *v120;
              if ( *v120 != nullptr )
              {
                v37 = (uint8_t)(uintptr_t)(k);
                if ( v97 != 0 )
                  v37 = k[*((uint32_t *)v94 + 3)];
                v38 = (int)(uintptr_t)(&s2a[12 * v37 + 12 + *((uint32_t *)s2a + 3)]);
                v115 = (uint32_t *)v38;
                v106 = *(uint32_t *)(v38 + 4);
                if ( v106 > 0 )
                {
                  v111 = nullptr;
                  v113 = 0;
                  v105 = v38 + 4;
                  do
                  {
                    v39 = &v111[v105 + 4 + v115[2]];
                    v131 = v39;
                    v134 = *((uint32_t *)v39 + 54);
                    if ( v134 > 0 )
                    {
                      v40 = 0;
                      v124 = (glitch::video::CMaterialRendererManager::SCreationContext::Self *)(v39 + 216);
                      do
                      {
                        while ( 1 )
                        {
                          v144 = *(uint32_t *)(*((uint32_t *)format + 1) + 56 * (uint8_t)v113 + 32);
                          v41 = (const char **)((char *)v124 + 16 * v40 + *((uint32_t *)v131 + 55) + 4);
                          v84 = *((uint8_t *)v124 + 16 * v40 + *((uint32_t *)v131 + 55) + 13);
                          ParameterID = glitch::video::IShader::getParameterID(v144, *(uint16_t *)v41, v84, 0);
                          if ( ParameterID != 0xFFFF )
                            break;
                          v43 = *(uint16_t *)v41;
                          v44 = "unknown";
                          if ( v43 != 255 )
                            v44 = *(const char **)(glitch::video::getStringsInternal(0) + 4 * v43);
                          ++v40;
                          glitch::os::Printer::logf(3, (int)(uintptr_t)("%s/%s: invalid bind symbol: %s"), v108, *v115, v44, v76);
                          if ( v40 == v134 )
                            goto LABEL_89;
                        }
                        if ( *((uint8_t *)v41 + 8) == 1 )
                        {
                          v80 = ParameterID;
                          Id = glitch::core::detail::SIDedCollection_video_SShaderParameterDe_d5840b::getId(
                                 *((glitch::core::detail::SIDedCollection<glitch::video::SShaderParameterDef::Self, unsigned short, false, glitch::video::detail::globalmaterialparametermanager::SPropeties::Self, glitch::video::detail::globalmaterialparametermanager::SValueTraits, 1> **)v107
                                 + 116),
                                 v41[3]);
                          v47 = v80;
                          v48 = v84;
                          if ( Id == -1 )
                          {
                            v101 = *(uint32_t *)(v144 + 8 * v84 + 20) + 16 * v80;
                            bool isLightSub = (*(uint8_t *)(v101 + 8) > 0x1Bu && *(uint8_t *)(v101 + 8) <= 0x2Fu)
                              || *(uint8_t *)(v101 + 8) == 27;
                            v100 = *(uint8_t *)(v101 + 10);
                            v77 = v100;
                            glitch::video::CGlobalMaterialParameterManager::addParameter(
                              (int)(uintptr_t)v146,
                              *((glitch::core::detail::SIDedCollection<glitch::video::SShaderParameterDef::Self, unsigned short, false, glitch::video::detail::globalmaterialparametermanager::SPropeties::Self, glitch::video::detail::globalmaterialparametermanager::SValueTraits, 1> **)v107
                              + 116),
                              v41[3],
                              isLightSub ? 27 : (int)*(uint8_t *)(v101 + 8),
                              isLightSub ? 19 : (int)*(uint8_t *)(v101 + 9),
                              (int)*(uint16_t *)(v101 + 12),
                              (char)v100);
                            Id = v146[0];
                            v48 = v84;
                            v47 = v80;
                          }
                          glitch::video::CMaterialRendererManager::SCreationContext::bindGlobalParameter(
                            v150,
                            Id,
                            *v120,
                            v113,
                            v47,
                            v48);
                        }
                        else
                        {
                          v99 = v41[3];
                          if ( *(uint32_t *)&s2a[24 * (uint32_t)(uintptr_t)(v99) + 24 + *((uint32_t *)s2a + 5)] == 19 )
                          {
                            glitch::video::CMaterialRendererManager::SCreationContext::bindParameter(
                              v150,
                              *((uint32_t *)v116 + (uint32_t)(uintptr_t)(v99)),
                              *(uint8_t *)(*(uint32_t *)(v144 + 8 * v84 + 20) + 16 * ParameterID + 8),
                              *v120,
                              v113,
                              ParameterID,
                              v84);
                          }
                          else
                          {
                            v143 = *((uint32_t *)v116 + (uint32_t)(uintptr_t)(v99));
                            if ( v143 != 0 )
                              glitch::video::CMaterialRendererManager::SCreationContext::bindParameter(
                                v150,
                                v143,
                                *(uint8_t *)(v143 + 8),
                                *v120,
                                v113,
                                ParameterID,
                                v84);
                          }
                        }
                        ++v40;
                      }
                      while ( v40 != v134 );
                    }
LABEL_89:
                    ++v113;
                    v111 += 224;
                  }
                  while ( v113 != v106 );
                }
              }
            }
          }
        }
        v94 = (glitch::collada::SEffectTechniqueMap::Self *)((char *)v94 + 28);
        v45 = v92 == (uint32_t *)*v91;
        v91 = (uint32_t *)*v91;
        if ( v45 )
          goto LABEL_112;
        v109 = 0;
      }
      v112 = 0;
      v117 = v95;
      v133 = 0;
      while ( 1 )
      {
        if ( v97 != 0 )
        {
          v22 = *(uint8_t *)(*((uint32_t *)v94 + 3) + v133);
          v23 = 4 * v133;
          v24 = *((uint32_t *)s2a + 3) + 4;
          v110 = *(char **)(*(uint32_t *)v94 + 4 * v133);
          if ( v109 != 0 )
            goto LABEL_36;
        }
        else
        {
          v22 = v133;
          v24 = *((uint32_t *)s2a + 3) + 4;
          v110 = *(char **)&s2a[v112 + 8 + v24];
          v23 = 4 * v133;
          if ( v109 != 0 )
          {
LABEL_36:
            v114 = v117;
            if ( *(uint32_t *)v117 == 0 )
              goto LABEL_41;
            goto LABEL_37;
          }
        }
        v114 = (glitch::core::Self *)((char *)v95 + v23);
        glitch::video::CMaterialRendererManager::SCreationContext::getTechniqueID(
          (glitch::video::CMaterialRendererManager::SCreationContext::Self *)v146,
          (const char *)v150);
        *(uint32_t *)v114 = v146[0];
        if ( *(uint32_t *)v114 == 0 )
        {
LABEL_41:
          if ( (uint8_t)glitch::video::CMaterialRendererManager::SCreationContext::beginTechnique(
                                  (glitch::video::CMaterialRendererManager::SCreationContext::Self *)v150,
                                  v110,
                                  true) != 0 )
          {
            v25 = (int)(uintptr_t)(&s2a[12 * v22 + 8 + v24]);
            v126 = v25;
            v123 = *(glitch::video::CMaterialRendererManager::SCreationContext::Self **)(v25 + 4);
            if ( (int)(uintptr_t)(v123) > 0 )
            {
              v119 = v25 + 4;
              v141 = 0;
              for ( m = nullptr; m != v123; m = (glitch::video::CMaterialRendererManager::SCreationContext::Self *)((char *)m + 1) )
              {
                v28 = v141 + v119 + *(uint32_t *)(v126 + 8) + 4;
                v102 = *((char **)v107 + 112);
                v29 = g4_fnstatic_55bbc547e1++;
                snprintf(s, 7u, "%u", v29, v75);
                glitch::video::CNullShaderManager::createShader((glitch::video::CNullShaderManager::Self *)&v148, v102);
                if ( v148 == nullptr )
                {
                  v30 = 0;
                  if ( *(uint32_t *)v93 != 0 )
                    v30 = *(uint32_t *)(*(uint32_t *)v93 + 12);
                  glitch::os::Printer::logf(
                    3,
                    (int)(uintptr_t)("%s/%s/%s/pass_%i: shader creation failed"),
                    v30,
                    *(uint32_t *)(v91[7] + 4),
                    v110,
                    m,
                    v77);
                }
                sub_CFE240(v153, (uint8_t *)(v28 + 140));
                v151 = v148;
                if ( v148 != nullptr )
                  sub_8B1B00(v148 + 1);
                glitch::video::CMaterialRendererManager::SCreationContext::addRenderPass(v150, (bool)&v151, v153, &v147);
                if ( v151 != nullptr )
                  sub_5459C0(v151);
                v27 = v129;
                if ( *(int *)(v28 + 216) > 0 )
                  v27 = 1;
                v129 = v27;
                if ( v148 != nullptr )
                  sub_5459C0(v148);
                v141 += 224;
              }
            }
            glitch::video::CMaterialRendererManager::SCreationContext::endTechnique(
              (glitch::video::CMaterialRendererManager::SCreationContext::Self *)v146,
              (bool)v150,
              0);
            *(uint32_t *)v114 = v146[0];
          }
        }
LABEL_37:
        ++v133;
        v117 = (glitch::core::Self *)((char *)v117 + 4);
        v112 += 12;
        if ( v133 == v98 )
          goto LABEL_57;
      }
    }
LABEL_112:
    v18 = 1;
    v17 = glitch::video::CMaterialRendererManager::endMaterialRenderer(
            v87,
            (glitch::video::CMaterialRendererManager::SCreationContext::Self *)v150);
  }
  v51 = (glitch::video::CMaterialRenderer::Self **)&glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::CMaterialRenderer::Self>,unsigned short,false,glitch::video::detail::materialrenderermanager::SProperties::Self,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid;
  v52 = *((uint32_t *)v87 + 5);
  if ( v17 < (unsigned int)((*((uint32_t *)v87 + 6) - v52) >> 2) )
  {
    v53 = *(uint32_t *)(v52 + 4 * v17);
    if ( v53 != 0 )
      v51 = (glitch::video::CMaterialRenderer::Self **)(v53 + 24);
  }
  v54 = *v51;
  v149 = *v51;
  if ( v149 != nullptr )
    sub_8B1B00((volatile int32_t *)v54);
  if ( v90 != v88 )
  {
    v55 = v90;
    do
    {
      v70 = v55;
      v55 = (glitch::collada::SEffectTechniqueMap::Self *)((char *)v55 + 28);
      glitch::collada::SEffectTechniqueMap::Destroy(v70);
    }
    while ( v55 != v88 );
  }
  if ( v90 != nullptr )
    glitch::core::releaseProcessBuffer(v90, v74);
  if ( v18 != 0 )
  {
    if ( v149 != nullptr )
    {
      formata = *((uint16_t *)v149 + 7);
      v118 = (uint32_t *)*v92;
      if ( v92 != (uint32_t *)*v92 )
      {
        v128 = 0;
        v56 = (uint32_t *)*v92;
        do
        {
          v125 = (glitch::video::CMaterialRendererManager::SCreationContext::Self *)v56[7];
          v132 = *((uint32_t *)v125 + 4);
          if ( formata > v128 )
          {
            v57 = 0;
            v58 = v128;
            do
            {
              v59 = nullptr;
              if ( *((uint16_t *)v149 + 7) > v58 )
                v59 = (int *)(*((uint32_t *)v149 + 8) + 16 * v58);
              if ( v132 <= v57 )
                break;
              v60 = *v59;
              v145 = v57;
              v61 = (char *)(v60 + 4);
              if ( v60 == 0 )
                v61 = nullptr;
              v62 = 24 * v57;
              s2b = v61;
              v136 = (int)(uintptr_t)(v125) + *((uint32_t *)v125 + 5) + 20;
              while ( strcmp(*(const char **)(v136 + v62), s2b) != 0 )
              {
                ++v145;
                v62 += 24;
                if ( v145 == v132 )
                  goto LABEL_137;
              }
              v66 = (uint32_t *)(v136 + v62);
              v57 = v145;
              if ( v132 <= v145 )
                break;
              sub_D21CF0(v93, &v149, v128++, v66, v89);
              v58 = v128;
            }
            while ( formata > v128 );
          }
LABEL_137:
          v56 = (uint32_t *)*v118;
          v45 = v92 == (uint32_t *)*v118;
          v118 = (uint32_t *)*v118;
        }
        while ( !v45 );
      }
      goto LABEL_138;
    }
  }
  else if ( v149 != nullptr )
  {
LABEL_138:
    if ( v116 != nullptr )
      glitch::core::releaseProcessBuffer(v116, v74);
    if ( v95 != nullptr )
      glitch::core::releaseProcessBuffer(v95, v74);
    if ( ProcessBufferHeapAvailableMemory != glitch::core::getProcessBufferHeapAvailableMemory(v69) )
      glitch::core::dumpProcessBufferAllocations(glitch::os::Printer::Logger, 3);
    v63 = v149;
    v45 = v149 == nullptr;
    *v86 = v149;
    if ( !v45 )
    {
      sub_8B1B00((volatile int32_t *)v63);
      v64 = v149;
      if ( v149 != nullptr && __sync_fetch_and_add((volatile int32_t *)v149, 0xFFFFFFFF) == 1 )
      {
        glitch::video::CMaterialRenderer::Destroy(v64);
        gll_operator_delete_arr((int)(uintptr_t)(v64));
      }
    }
    glitch::video::CMaterialRendererManager::SCreationContext::Destroy((glitch::video::CMaterialRendererManager::SCreationContext::Self *)v150);
    glitch::core::setProcessBufferHeapExcessEnabled((glitch::core::Self *)isProcessBufferHeapExcessEnabled, (bool)v74);
    return v86;
  }
  glitch::os::Printer::logf(3, (int)(uintptr_t)("failed to create material renderer %s"));
  goto LABEL_138;
}

// ----------------------------------------------------------------------------
// Function: boost::intrusive_ptr_scene_CMeshBuffer_7c3984::opAssign  (binary VA: 0xd389d0)
// Original: boost::intrusive_ptr<glitch::scene::CMeshBuffer>::operator=
// ----------------------------------------------------------------------------
volatile int32_t ** boost::intrusive_ptr_scene_CMeshBuffer_7c3984::opAssign(volatile int32_t **self, glitch::scene::CMeshBuffer *a2)
{
  volatile int32_t *v2;

  if ( a2 != nullptr )
    sub_8B1B00((volatile int32_t *)a2 + 1);
  v2 = *self;
  *self = (volatile int32_t *)a2;
  if ( v2 != nullptr )
    sub_5459C0(v2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: boost::intrusive_ptr_collada_ISceneNodeAnimat_d6ad6b::Construct  (binary VA: 0xd83f50)
// Original: boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator>::intrusive_ptr
// ----------------------------------------------------------------------------
volatile int32_t * boost::intrusive_ptr_collada_ISceneNodeAnimat_d6ad6b::Construct(boost::intrusive_ptr<glitch::collada::ISceneNodeAnimator::Self> *self, volatile int32_t **a2)
{
  volatile int32_t *result;
  bool v3;

  result = *a2;
  v3 = *a2 == nullptr;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(*a2);
  if ( !v3 )
    return sub_8B1B00((volatile int32_t *)((char *)result + *(uint32_t *)(*result - 12) + 4));
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::intrusive_ptr_video_CLight_ecd8ff::Destroy  (binary VA: 0xde1b40)
// Original: boost::intrusive_ptr<glitch::video::CLight>::~intrusive_ptr
// ----------------------------------------------------------------------------
void boost::intrusive_ptr_video_CLight_ecd8ff::Destroy(boost::intrusive_ptr<glitch::video::CLight::Self> *self)
{
  int v1;

  v1 = *(uint32_t *)self;
  if ( *(uint32_t *)self != 0 && __sync_fetch_and_add((volatile int32_t *)v1, 0xFFFFFFFF) == 1 )
  {
    sub_5ED480((int *)(v1 + 96));
    sub_5ED480((int *)(v1 + 92));
    if ( *(uint8_t *)(v1 + 88) == 0 )
      sub_960FA0(*(uint32_t *)(v1 + 84));
    *(uint32_t *)(v1 + 84) = 0;
    opDelete((void *)v1);
  }
}

// ----------------------------------------------------------------------------
// Function: boost::intrusive_ptr_video_CVertexStreams_con_15ffaf::Destroy  (binary VA: 0xde1f80)
// Original: boost::intrusive_ptr<glitch::video::CVertexStreams const>::~intrusive_ptr
// ----------------------------------------------------------------------------
void boost::intrusive_ptr_video_CVertexStreams_con_15ffaf::Destroy(glitch::video::CVertexStreams::Self **self)
{
  glitch::video::CVertexStreams::Self *v1;

  v1 = *self;
  if ( *self != nullptr && __sync_fetch_and_add((volatile int32_t *)v1, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v1);
    gll_operator_delete_arr((int)(uintptr_t)(v1));
  }
}

// ----------------------------------------------------------------------------
// Function: boost::intrusive_ptr_collada_CResFile_9616fb::opAssign  (binary VA: 0xde1fe0)
// Original: boost::intrusive_ptr<glitch::collada::CResFile>::operator=
// ----------------------------------------------------------------------------
boost::intrusive_ptr<glitch::collada::CResFile> * boost::intrusive_ptr_collada_CResFile_9616fb::opAssign(volatile int32_t **self, volatile int32_t **a2)
{
  volatile int32_t *v2;
  volatile int32_t *v3;

  v2 = *a2;
  if ( *a2 != nullptr )
    sub_8B1B00(v2 + 1);
  v3 = *self;
  *self = v2;
  if ( v3 != nullptr )
    sub_5459C0(v3);
  return (boost::intrusive_ptr<glitch::collada::CResFile> *)self;
}

// ----------------------------------------------------------------------------
// Function: boost::intrusive_ptr_video_CVertexStreams_f7a666::opAssign  (binary VA: 0xde2040)
// Original: boost::intrusive_ptr<glitch::video::CVertexStreams>::operator=
// ----------------------------------------------------------------------------
boost::intrusive_ptr<glitch::video::CVertexStreams::Self> * boost::intrusive_ptr_video_CVertexStreams_f7a666::opAssign(glitch::video::CVertexStreams::Self **self, volatile int32_t **a2)
{
  volatile int32_t *v2;
  glitch::video::CVertexStreams::Self *v3;

  v2 = *a2;
  if ( *a2 != nullptr )
    sub_8B1B00(*a2);
  v3 = *self;
  *self = (glitch::video::CVertexStreams::Self *)v2;
  if ( v3 != nullptr && __sync_fetch_and_add((volatile int32_t *)v3, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CVertexStreams::Destroy(v3);
    gll_operator_delete_arr((int)(uintptr_t)(v3));
  }
  return (boost::intrusive_ptr<glitch::video::CVertexStreams::Self> *)self;
}

// ----------------------------------------------------------------------------
// Function: boost::intrusive_ptr_video_IVideoDriver_IFram_ca88bb::opAssign  (binary VA: 0xde29b0)
// Original: boost::intrusive_ptr<glitch::video::IVideoDriver::IFramebuffer>::operator=
// ----------------------------------------------------------------------------
boost::intrusive_ptr<glitch::video::IVideoDriver::IFramebuffer::Self> * boost::intrusive_ptr_video_IVideoDriver_IFram_ca88bb::opAssign(volatile int32_t **self, volatile int32_t **a2)
{
  volatile int32_t *v2;
  volatile int32_t *v3;

  v2 = *a2;
  if ( *a2 != nullptr )
    sub_8B1B00(v2 + 1);
  v3 = *self;
  *self = v2;
  if ( v3 != nullptr )
    sub_5459C0(v3);
  return (boost::intrusive_ptr<glitch::video::IVideoDriver::IFramebuffer::Self> *)self;
}

// ----------------------------------------------------------------------------
// Function: boost::intrusive_ptr_video_IRenderTarget_e32a5b::opAssign_27e9ae  (binary VA: 0xde2a40)
// Original: boost::intrusive_ptr<glitch::video::IRenderTarget>::operator=<glitch::video::IVideoDriver::IFramebuffer>
// ----------------------------------------------------------------------------
volatile int32_t ** boost::intrusive_ptr_video_IRenderTarget_e32a5b::opAssign_27e9ae(volatile int32_t **self, volatile int32_t **a2)
{
  volatile int32_t *v2;
  volatile int32_t *v3;

  v2 = *a2;
  if ( *a2 != nullptr )
    sub_8B1B00(v2 + 1);
  v3 = *self;
  *self = v2;
  if ( v3 != nullptr )
    sub_5459C0(v3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: boost::intrusive_ptr_video_CVertexAttributeMa_435e48::Destroy  (binary VA: 0xde2aa0)
// Original: boost::intrusive_ptr<glitch::video::CVertexAttributeMap>::~intrusive_ptr
// ----------------------------------------------------------------------------
void boost::intrusive_ptr_video_CVertexAttributeMa_435e48::Destroy(boost::intrusive_ptr<glitch::video::CVertexAttributeMap::Self> *self)
{
  void *v1;

  v1 = *(void **)self;
  if ( *(uint32_t *)self != 0 && __sync_fetch_and_add((volatile int32_t *)v1, 0xFFFFFFFF) == 1 )
    opDelete(v1);
}

// ----------------------------------------------------------------------------
// Function: boost::intrusive_ptr_video_IShader_d75d29::Destroy  (binary VA: 0xe54fc0)
// Original: boost::intrusive_ptr<glitch::video::IShader>::~intrusive_ptr
// ----------------------------------------------------------------------------
void boost::intrusive_ptr_video_IShader_d75d29::Destroy(volatile int32_t **self)
{
  if ( *self != nullptr )
    sub_5459C0(*self);
}

// ----------------------------------------------------------------------------
// Function: boost::intrusive_ptr_video_IShaderCode_91f04c::Destroy  (binary VA: 0xe54ff0)
// Original: boost::intrusive_ptr<glitch::video::IShaderCode>::~intrusive_ptr
// ----------------------------------------------------------------------------
void boost::intrusive_ptr_video_IShaderCode_91f04c::Destroy(volatile int32_t **self)
{
  if ( *self != nullptr )
    sub_5459C0(*self);
}

// ----------------------------------------------------------------------------
// Function: boost::intrusive_ptr_video_ITexture_5540e8::opAssign  (binary VA: 0xe73d50)
// Original: boost::intrusive_ptr<glitch::video::ITexture>::operator=
// ----------------------------------------------------------------------------
boost::intrusive_ptr<glitch::video::ITexture::Self> * boost::intrusive_ptr_video_ITexture_5540e8::opAssign(boost::intrusive_ptr<glitch::video::ITexture::Self> *self, const boost::intrusive_ptr<glitch::video::ITexture::Self> *a2)
{
  int v2;
  int v3;
  int v4;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);

  v2 = *(uint32_t *)a2;
  v3 = 0;
  v6 = v2;
  if ( v2 != 0 )
  {
    __sync_add_and_fetch((volatile int32_t *)(v2 + 4), 1u);
    v3 = v6;
  }
  v4 = *(uint32_t *)self;
  *(uint32_t *)self = v3;
  v6 = v4;
  sub_5ED480(&v6);
  return self;
}

// ----------------------------------------------------------------------------
// Function: boost::intrusive_ptr_io_IReadFile_c92f85::opAssign  (binary VA: 0xe95a60)
// Original: boost::intrusive_ptr<glitch::io::IReadFile>::operator=
// ----------------------------------------------------------------------------
boost::intrusive_ptr<glitch::io::IReadFile> * boost::intrusive_ptr_io_IReadFile_c92f85::opAssign(volatile int32_t **self, volatile int32_t **a2)
{
  volatile int32_t *v2;
  volatile int32_t *v3;

  v2 = *a2;
  if ( *a2 != nullptr )
    __sync_add_and_fetch(v2 + 1, 1u);
  v3 = *self;
  *self = v2;
  if ( v3 != nullptr )
    sub_5459C0(v3);
  return (boost::intrusive_ptr<glitch::io::IReadFile> *)self;
}

// ----------------------------------------------------------------------------
// Function: boost::intrusive_ptr_video_CMaterialVertexAtt_125149::opAssign  (binary VA: 0xf06df0)
// Original: boost::intrusive_ptr<glitch::video::CMaterialVertexAttributeMap>::operator=
// ----------------------------------------------------------------------------
boost::intrusive_ptr<glitch::video::CMaterialVertexAttributeMap::Self> * boost::intrusive_ptr_video_CMaterialVertexAtt_125149::opAssign(glitch::video::CMaterialVertexAttributeMap::Self ***self, volatile int32_t **a2)
{
  volatile int32_t *v2;
  glitch::video::CMaterialVertexAttributeMap::Self **v3;

  v2 = *a2;
  if ( *a2 != nullptr )
    sub_8B1B00(*a2);
  v3 = *self;
  *self = (glitch::video::CMaterialVertexAttributeMap::Self **)v2;
  if ( v3 != nullptr && __sync_fetch_and_add((volatile int32_t *)v3, 0xFFFFFFFF) == 1 )
  {
    glitch::video::CMaterialVertexAttributeMap::Destroy(v3);
    gll_operator_delete_arr((int)(uintptr_t)(v3));
  }
  return (boost::intrusive_ptr<glitch::video::CMaterialVertexAttributeMap::Self> *)self;
}

// ----------------------------------------------------------------------------
// Function: boost::intrusive_ptr_scene_CPVSDatabase_019302::Destroy  (binary VA: 0xf15740)
// Original: boost::intrusive_ptr<glitch::scene::CPVSDatabase>::~intrusive_ptr
// ----------------------------------------------------------------------------
void boost::intrusive_ptr_scene_CPVSDatabase_019302::Destroy(glitch::scene::CPVSDatabase **self)
{
  if ( *self != nullptr )
    glitch::scene::CPVSDatabase::drop(*self);
}

// ----------------------------------------------------------------------------
// Function: boost::intrusive_ptr_scene_CSceneNodeAnimator_de607b::Construct  (binary VA: 0xf7ae00)
// Original: boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK>::intrusive_ptr
// ----------------------------------------------------------------------------
uint32_t * boost::intrusive_ptr_scene_CSceneNodeAnimator_de607b::Construct(boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *self, const boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *a2)
{
  uint32_t *result;
  bool v3;

  result = *(uint32_t **)a2;
  v3 = *(uint32_t *)a2 == 0;
  *(uint32_t *)self = *(uint32_t *)a2;
  if ( !v3 )
    __sync_add_and_fetch((uint32_t *)((char *)result + *(uint32_t *)(*result - 12) + 4), 1u);
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::copy_backward_intrusive_ptr_scene_CSce_ba6c2b  (binary VA: 0xf80210)
// Original: std::copy_backward<boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *,boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *>
// ----------------------------------------------------------------------------
boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> * g4_std::copy_backward_intrusive_ptr_scene_CSce_ba6c2b(boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *a1, boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *a2, boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *a3)
{
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  char *v9;

  v3 = (a2 - a1) >> 2;
  if ( v3 > 0 )
  {
    v4 = (a2 - a1) >> 2;
    v9 = (char *)a3 - 4;
    v5 = -4 * v3;
    do
    {
      v6 = *(uint32_t **)((char *)a2 + 4 * v4 + v5 - 4);
      if ( v6 != nullptr )
        __sync_add_and_fetch((uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 12) + 4), 1u);
      v7 = *(uint32_t **)&v9[4 * v4 + v5];
      *(uint32_t *)&v9[4 * v4 + v5] = (uint32_t)(uintptr_t)(v6);
      if ( v7 != nullptr )
        sub_5459C0((uint32_t *)((char *)v7 + *(uint32_t *)(*v7 - 12)));
      --v4;
    }
    while ( v4 != 0 );
    return (boost::intrusive_ptr<glitch::scene::CSceneNodeAnimatorIK> *)((char *)a3 - 4 * ((a2 - a1) >> 2));
  }
  return a3;
}


