#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASListener.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASListener::enumerate  (binary VA: 0x1125560)
// Original: gameswf::ASListener::enumerate
// ----------------------------------------------------------------------------
int gameswf::ASListener::enumerate(gameswf::ASListener::Self *self, gameswf::ASEnvironment::Self *a2)
{
  return ((gameswf::Listener::enumerate((gameswf::ASListener::Self *)((char *)self + 40), a2)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASListener::getMemberByName  (binary VA: 0x1125590)
// Original: gameswf::ASListener::getMemberByName
// ----------------------------------------------------------------------------
int gameswf::ASListener::getMemberByName(gameswf::ASListener::Self *self, const gameswf::StringI::Self *a2, gameswf::ASValue::Self *a3)
{
  gameswf::ASObject::Self *v3;

  v3 = (gameswf::ASObject::Self *)gameswf::Listener::opIndex((gameswf::ASListener::Self *)((char *)self + 40), a2);
  gameswf::ASValue::setObject(a3, v3);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASListener::getStandardMember  (binary VA: 0x11255e0)
// Original: gameswf::ASListener::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASListener::getStandardMember(int a1, int a2, gameswf::ASValue::Self *a3)
{
  int result;
  int v4;

  result = 0;
  if ( a2 == 47 )
  {
    v4 = gameswf::Listener::size((gameswf::Listener::Self *)(a1 + 40));
    gameswf::ASValue::setDouble(a3, (double)v4);
    return 1;
  }
  return result;
}



// ============================================================================
// Address:   0x1125750 (size: 120 bytes)
// Symbol:    _ZN7gameswf10ASListenerC2EPNS_6PlayerE
// Demangled: gameswf::ASListener::ASListener(gameswf::Player *)
// ============================================================================
// Alternative name is '_ZN7gameswf10ASListenerC1EPNS_6PlayerE'
void (**gameswf::ASListener::ASListener(
        gameswf::ASListener::Self *self,
        gameswf::Player::Self *a2))(gameswf::ASListener::Self * self)
{
  gameswf::ASObject::ASObject(self, a2);
  *((uint32_t *)self + 10) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FBC8);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint8_t *)self + 56) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  return (void (**)(gameswf::ASListener::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208FBC8));
}
// ----------------------------------------------------------------------------
// Function: gameswf::ASListener::add  (binary VA: 0x1125d20)
// Original: gameswf::ASListener::add
// ----------------------------------------------------------------------------
int gameswf::ASListener::add(gameswf::ASListener::Self *self, gameswf::ASObject::Self *a2)
{
  return ((gameswf::Listener::add((gameswf::ASListener::Self *)((char *)self + 40), a2)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASListener::remove  (binary VA: 0x1125ef0)
// Original: gameswf::ASListener::remove
// ----------------------------------------------------------------------------
int gameswf::ASListener::remove(gameswf::ASListener::Self *self, gameswf::ASObject::Self *a2)
{
  return (int)(uintptr_t)(gameswf::Listener::remove((gameswf::ASListener::Self *)((char *)self + 40), a2));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASListener::size  (binary VA: 0x11260b0)
// Original: gameswf::ASListener::size
// ----------------------------------------------------------------------------
int gameswf::ASListener::size(gameswf::ASListener::Self *self)
{
  return gameswf::Listener::size((gameswf::ASListener::Self *)((char *)self + 40));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASListener::broadcast  (binary VA: 0x11260e0)
// Original: gameswf::ASListener::broadcast
// ----------------------------------------------------------------------------
uint32_t * gameswf::ASListener::broadcast(int a1, int a2)
{
  int v2;
  gameswf::ASValue::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  gameswf::Self *v8;
  char *v9;
  gameswf::Self *v10;
  int v11;
  int v12;
  unsigned int v13;
  gameswf::ASValue::Self *v14;
  int v15;
  bool v16;
  gameswf::Self **v17;
  char *v18;
  gameswf::Self *v19;
  gameswf::Self *v20;
  int v21;
  int v22;
  gameswf::Self *v23;
  int v24;
  void **v25;
  int v26;
  int v27;
  int v28;
  int v29;
  gameswf::ASValue::Self *v30;
  int v31;
  int v32;
  uint8_t *v33;
  int v34;
  char v35;
  char *v36;
  int v37;
  gameswf::Self *v38;
  char *v39;
  gameswf::Self *v40;
  int v41;
  unsigned int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  gameswf::Self *v47;
  gameswf::ASValue::Self *v48;
  gameswf::Self *v49;
  int v50;
  int v51;
  int v52;
  void **v53;
  int v54;
  int v55;
  int v56;
  int v57;
  gameswf::ASValue::Self *v58;
  int v59;
  int v60;
  uint8_t *v61;
  uint32_t *v62;
  int v63;
  int v64;
  int v65;
  int v66;
  gameswf::ASValue::Self *v67;
  int v68;
  gameswf::Self *v69;
  uint32_t *result;
  int v71;
  char *v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  uint32_t *v78;
  uint32_t *v79;
  int v80;
  int i;
  uint8_t *v82;
  int v83;
  uint32_t *v84;
  int v85;
  int v86;
  int v87;
  gameswf::ASValue::Self *v88;
  int v89;
  uint8_t *v90;
  int v91;
  int v92;
  int v93;
  int v94;
  char *v95;
  int v96;
  int v97;
  uint32_t *v98;
  int v99;
  int j;
  uint8_t *v101;
  int v102;
  int v103;
  int v104;
  typedef gameswf::ASValue::Self *_g4_t_v105;
  typedef gameswf::ASValue::Self *_g4_t_v106;
  typedef const gameswf::ASValue::Self *_g4_t_v107;
  typedef const gameswf::ASValue::Self *_g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef uint32_t *_g4_t_v119;
  typedef int _g4_t_v120;
  typedef uint32_t *_g4_t_v121;
  typedef char *_g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef char **_g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef char *_g4_t_v132;
  typedef char *_g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef char *_g4_t_v136;
  typedef int _g4_t_v137;
  typedef int _g4_t_v138;
  typedef int _g4_t_v139;
  typedef int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef gameswf::Self *_g4_t_v142;
  typedef int _g4_t_v143;
  typedef void **_g4_t_v144;
  typedef int _g4_t_v145;
  typedef void **_g4_t_v146;
  typedef uint32_t *_g4_t_v147;
  typedef uint32_t _g4_t_v148[4];
  typedef uint32_t _g4_t_v149[4];
  typedef char _g4_t_v150;
  typedef uint8_t _g4_t_v151[3];
  typedef char *_g4_t_v152;
  typedef gameswf::Self *_g4_t_v153;
  typedef int _g4_t_v154;
  typedef char _g4_t_v155;
  typedef uint8_t _g4_t_v156[3];
  typedef char *_g4_t_v157;
  typedef gameswf::Self *_g4_t_v158;
  typedef int _g4_t_v159;
  typedef uint32_t _g4_t_v160[7];
  typedef uint32_t _g4_t_v161[10];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v105)) > _g4_s0 ? (0u + sizeof(_g4_t_v105)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v106)) > _g4_s1 ? (0u + sizeof(_g4_t_v106)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v107)) > _g4_s2 ? (4u + sizeof(_g4_t_v107)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v108)) > _g4_s3 ? (4u + sizeof(_g4_t_v108)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v109)) > _g4_s4 ? (12u + sizeof(_g4_t_v109)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v110)) > _g4_s5 ? (12u + sizeof(_g4_t_v110)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v111)) > _g4_s6 ? (28u + sizeof(_g4_t_v111)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v112)) > _g4_s7 ? (32u + sizeof(_g4_t_v112)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v113)) > _g4_s8 ? (32u + sizeof(_g4_t_v113)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v114)) > _g4_s9 ? (32u + sizeof(_g4_t_v114)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v115)) > _g4_s10 ? (32u + sizeof(_g4_t_v115)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v116)) > _g4_s11 ? (32u + sizeof(_g4_t_v116)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v117)) > _g4_s12 ? (32u + sizeof(_g4_t_v117)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v118)) > _g4_s13 ? (36u + sizeof(_g4_t_v118)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v119)) > _g4_s14 ? (36u + sizeof(_g4_t_v119)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v120)) > _g4_s15 ? (36u + sizeof(_g4_t_v120)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v121)) > _g4_s16 ? (36u + sizeof(_g4_t_v121)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v122)) > _g4_s17 ? (44u + sizeof(_g4_t_v122)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v123)) > _g4_s18 ? (48u + sizeof(_g4_t_v123)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v124)) > _g4_s19 ? (48u + sizeof(_g4_t_v124)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v125)) > _g4_s20 ? (52u + sizeof(_g4_t_v125)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v126)) > _g4_s21 ? (52u + sizeof(_g4_t_v126)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v127)) > _g4_s22 ? (52u + sizeof(_g4_t_v127)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v128)) > _g4_s23 ? (52u + sizeof(_g4_t_v128)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v129)) > _g4_s24 ? (52u + sizeof(_g4_t_v129)) : _g4_s24,
    _g4_s26 = (52u + sizeof(_g4_t_v130)) > _g4_s25 ? (52u + sizeof(_g4_t_v130)) : _g4_s25,
    _g4_s27 = (56u + sizeof(_g4_t_v131)) > _g4_s26 ? (56u + sizeof(_g4_t_v131)) : _g4_s26,
    _g4_s28 = (56u + sizeof(_g4_t_v132)) > _g4_s27 ? (56u + sizeof(_g4_t_v132)) : _g4_s27,
    _g4_s29 = (56u + sizeof(_g4_t_v133)) > _g4_s28 ? (56u + sizeof(_g4_t_v133)) : _g4_s28,
    _g4_s30 = (56u + sizeof(_g4_t_v134)) > _g4_s29 ? (56u + sizeof(_g4_t_v134)) : _g4_s29,
    _g4_s31 = (56u + sizeof(_g4_t_v135)) > _g4_s30 ? (56u + sizeof(_g4_t_v135)) : _g4_s30,
    _g4_s32 = (56u + sizeof(_g4_t_v136)) > _g4_s31 ? (56u + sizeof(_g4_t_v136)) : _g4_s31,
    _g4_s33 = (56u + sizeof(_g4_t_v137)) > _g4_s32 ? (56u + sizeof(_g4_t_v137)) : _g4_s32,
    _g4_s34 = (56u + sizeof(_g4_t_v138)) > _g4_s33 ? (56u + sizeof(_g4_t_v138)) : _g4_s33,
    _g4_s35 = (56u + sizeof(_g4_t_v139)) > _g4_s34 ? (56u + sizeof(_g4_t_v139)) : _g4_s34,
    _g4_s36 = (56u + sizeof(_g4_t_v140)) > _g4_s35 ? (56u + sizeof(_g4_t_v140)) : _g4_s35,
    _g4_s37 = (56u + sizeof(_g4_t_v141)) > _g4_s36 ? (56u + sizeof(_g4_t_v141)) : _g4_s36,
    _g4_s38 = (60u + sizeof(_g4_t_v142)) > _g4_s37 ? (60u + sizeof(_g4_t_v142)) : _g4_s37,
    _g4_s39 = (60u + sizeof(_g4_t_v143)) > _g4_s38 ? (60u + sizeof(_g4_t_v143)) : _g4_s38,
    _g4_s40 = (60u + sizeof(_g4_t_v144)) > _g4_s39 ? (60u + sizeof(_g4_t_v144)) : _g4_s39,
    _g4_s41 = (60u + sizeof(_g4_t_v145)) > _g4_s40 ? (60u + sizeof(_g4_t_v145)) : _g4_s40,
    _g4_s42 = (60u + sizeof(_g4_t_v146)) > _g4_s41 ? (60u + sizeof(_g4_t_v146)) : _g4_s41,
    _g4_s43 = (60u + sizeof(_g4_t_v147)) > _g4_s42 ? (60u + sizeof(_g4_t_v147)) : _g4_s42,
    _g4_s44 = (64u + sizeof(_g4_t_v148)) > _g4_s43 ? (64u + sizeof(_g4_t_v148)) : _g4_s43,
    _g4_s45 = (80u + sizeof(_g4_t_v149)) > _g4_s44 ? (80u + sizeof(_g4_t_v149)) : _g4_s44,
    _g4_s46 = (96u + sizeof(_g4_t_v150)) > _g4_s45 ? (96u + sizeof(_g4_t_v150)) : _g4_s45,
    _g4_s47 = (97u + sizeof(_g4_t_v151)) > _g4_s46 ? (97u + sizeof(_g4_t_v151)) : _g4_s46,
    _g4_s48 = (100u + sizeof(_g4_t_v152)) > _g4_s47 ? (100u + sizeof(_g4_t_v152)) : _g4_s47,
    _g4_s49 = (108u + sizeof(_g4_t_v153)) > _g4_s48 ? (108u + sizeof(_g4_t_v153)) : _g4_s48,
    _g4_s50 = (112u + sizeof(_g4_t_v154)) > _g4_s49 ? (112u + sizeof(_g4_t_v154)) : _g4_s49,
    _g4_s51 = (128u + sizeof(_g4_t_v155)) > _g4_s50 ? (128u + sizeof(_g4_t_v155)) : _g4_s50,
    _g4_s52 = (129u + sizeof(_g4_t_v156)) > _g4_s51 ? (129u + sizeof(_g4_t_v156)) : _g4_s51,
    _g4_s53 = (132u + sizeof(_g4_t_v157)) > _g4_s52 ? (132u + sizeof(_g4_t_v157)) : _g4_s52,
    _g4_s54 = (140u + sizeof(_g4_t_v158)) > _g4_s53 ? (140u + sizeof(_g4_t_v158)) : _g4_s53,
    _g4_s55 = (144u + sizeof(_g4_t_v159)) > _g4_s54 ? (144u + sizeof(_g4_t_v159)) : _g4_s54,
    _g4_s56 = (152u + sizeof(_g4_t_v160)) > _g4_s55 ? (152u + sizeof(_g4_t_v160)) : _g4_s55,
    _g4_s57 = (180u + sizeof(_g4_t_v161)) > _g4_s56 ? (180u + sizeof(_g4_t_v161)) : _g4_s56
  };
  alignas(16) uint8_t _g4_sf[_g4_s57];
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 0u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 0u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 4u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 4u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 12u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 12u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 28u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 32u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 32u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 32u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 32u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 32u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 32u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 36u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 36u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 36u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 36u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 44u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 48u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 48u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 52u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 52u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 52u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 52u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 52u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 52u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 56u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 56u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 56u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 56u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 56u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 56u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 56u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 56u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 56u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 56u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 56u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 60u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 60u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 60u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 60u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 60u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 60u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 64u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 80u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 96u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 97u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 100u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 108u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 112u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 128u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 129u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 132u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 140u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 144u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 152u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 180u);

  if ( *(uint8_t *)(a1 + 56) != 0 )
  {
    if ( *(int *)(a2 + 16) <= 0 )
    {
      v4 = 0;
      v142 = nullptr;
    }
    else
    {
      v2 = 0;
      v125 = 0;
      v142 = nullptr;
      v111 = 0;
      while ( 1 )
      {
        v131 = *(uint32_t *)(a2 + 20);
        v4 = v2 + 1;
        v123 = **(uint32_t **)(a2 + 12);
        if ( v125 < v2 + 1 )
        {
          v5 = v4 + (v4 >> 1);
          if ( v5 != 0 )
          {
            v120 = v2;
            if ( v142 != nullptr )
              v142 = (gameswf::Self *)gameswf::realloc_internal(v142, 12 * v5, 12 * v125);
            else
              v142 = (gameswf::Self *)gameswf::malloc_internal(12 * v5);
            v125 = v4 + (v4 >> 1);
            v2 = v120;
          }
          else
          {
            if ( v142 != nullptr )
            {
              v118 = v2;
              gameswf::free_internal(v142);
              v2 = v118;
            }
            v125 = 0;
            v142 = nullptr;
          }
        }
        v3 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v142 + v111));
        if ( (gameswf::Self *)((char *)v142 + v111) != nullptr )
        {
          *(uint8_t *)v3 = 0;
          *((uint8_t *)v3 + 1) = 0;
          gameswf::ASValue::opAssign(v3, (const gameswf::ASValue::Self *)(v123 + 12 * (v131 - v2)));
        }
        v111 += 12;
        if ( *(uint32_t *)(a2 + 16) <= v4 )
          break;
        v2 = v4;
      }
    }
    if ( *(uint32_t *)(a1 + 60) != 0 )
    {
      v78 = (uint32_t *)opNew(0x14u);
      v79 = v78;
      *v78 = 0;
      v78[1] = 0;
      v78[2] = 0;
      v78[3] = 0;
      if ( v4 != 0 )
      {
        if ( v4 > 0 )
        {
          v93 = v4 + (v4 >> 1);
          v79[2] = v93;
          if ( v93 != 0 )
            *v79 = gameswf::malloc_internal(12 * v93);
        }
        v80 = 0;
        for ( i = 0; i != v4; ++i )
        {
          v82 = (uint8_t *)(v80 + *v79);
          if ( v82 != nullptr )
          {
            *v82 = 0;
            v82[1] = 0;
          }
          v80 += 12;
        }
        v79[1] = v4;
        v139 = v4;
        v83 = 0;
        v84 = v79;
        v85 = 0;
        do
        {
          ++v85;
          v107 = (const gameswf::ASValue::Self *)((gameswf::Self *)((char *)v142 + v83));
          v119 = v84;
          v105 = (gameswf::ASValue::Self *)(v83 + *v84);
          v83 += 12;
          gameswf::ASValue::opAssign(v105, v107);
          v84 = v119;
        }
        while ( v85 < v119[1] );
        v79 = v119;
        v4 = v139;
      }
      else
      {
        v78[1] = 0;
      }
      v79[4] = 0;
      *(uint32_t *)(*(uint32_t *)(a1 + 60) + 16) = (uint32_t)(uintptr_t)(v79);
      v86 = a1;
      result = *(uint32_t **)(*(uint32_t *)(a1 + 60) + 16);
      *(uint32_t *)(a1 + 60) = (uint32_t)(uintptr_t)(result);
    }
    else
    {
      result = (uint32_t *)opNew(0x14u);
      v98 = result;
      *result = 0;
      result[1] = 0;
      result[2] = 0;
      result[3] = 0;
      if ( v4 != 0 )
      {
        if ( v4 > 0 )
        {
          v104 = v4 + (v4 >> 1);
          v98[2] = v104;
          if ( v104 != 0 )
            *v98 = gameswf::malloc_internal(12 * v104);
        }
        v99 = 0;
        for ( j = 0; j != v4; ++j )
        {
          v101 = (uint8_t *)(v99 + *v98);
          if ( v101 != nullptr )
          {
            *v101 = 0;
            v101[1] = 0;
          }
          v99 += 12;
        }
        v98[1] = v4;
        v141 = v4;
        v102 = 0;
        result = v98;
        v103 = 0;
        do
        {
          ++v103;
          v108 = (const gameswf::ASValue::Self *)((gameswf::Self *)((char *)v142 + v102));
          v121 = result;
          v106 = (gameswf::ASValue::Self *)(v102 + *result);
          v102 += 12;
          gameswf::ASValue::opAssign(v106, v108);
          result = v121;
        }
        while ( v103 < v121[1] );
        v98 = v121;
        v4 = v141;
      }
      else
      {
        result[1] = 0;
      }
      v98[4] = 0;
      *(uint32_t *)(a1 + 60) = (uint32_t)(uintptr_t)(v98);
      *(uint32_t *)(a1 + 64) = (uint32_t)(uintptr_t)(v98);
      v86 = a1;
    }
    ++*(uint32_t *)(v86 + 68);
    if ( v4 != 0 )
    {
      v140 = v4;
      v87 = 0;
      v88 = (gameswf::ASValue::Self *)(v142);
      do
      {
        ++v87;
        result = (uint32_t *)gameswf::ASValue::dropRefs(v88);
        v88 = (gameswf::ASValue::Self *)((char *)v88 + 12);
      }
      while ( v87 != v140 );
    }
    if ( v142 != nullptr )
      return (uint32_t *)gameswf::free_internal(v142);
  }
  else
  {
    *(uint8_t *)(a1 + 56) = 1;
    v6 = **(uint32_t **)(a2 + 12) + 12 * *(uint32_t *)(a2 + 20);
    if ( *(uint8_t *)v6 == 3 || *(uint8_t *)v6 == 4 )
    {
      v132 = *(char **)(v6 + 4);
    }
    else
    {
      v132 = (char *)(&byte_20D6378);
      if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
      {
        byte_20D6378 = 1;
        v92 = dword_20D6388 | 0x7FFFFF;
        byte_20D6379 = 0;
        dword_20D6388 = v92;
        BYTE2(dword_20D6388) = BYTE2(v92) & 0x7F;
        HIBYTE(dword_20D6388) = HIBYTE(v92) | 1;
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
        __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
      }
    }
    v150 = 1;
    v151[0] = 0;
    if ( *v132 == -1 )
      v7 = *((uint32_t *)v132 + 1) - 1;
    else
      v7 = *v132 - 1;
    gameswf::String::resize((gameswf::String::Self *)&v150, v7);
    v8 = (gameswf::Self *)(v132 + 1);
    if ( *v132 == -1 )
      v8 = *((gameswf::Self **)v132 + 3);
    if ( v150 == -1 )
    {
      v9 = v152;
      v10 = v153;
    }
    else
    {
      v9 = (char *)v150;
      v10 = (gameswf::Self *)v151;
    }
    gameswf::Strcpy_s(v10, v9, v8);
    v126 = *((uint32_t *)v132 + 4);
    if ( (uint8_t *)(v126 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( *v132 == -1 )
      {
        v95 = *((char **)v132 + 3);
        v94 = *((uint32_t *)v132 + 1) - 1;
      }
      else
      {
        v94 = *v132 - 1;
        v95 = v132 + 1;
      }
      v11 = 5381;
      if ( v94 > 0 )
      {
        do
        {
          --v94;
          v96 = 33 * v11;
          v97 = (uint8_t)v95[v94] + 32;
          if ( (uint8_t)(v95[v94] - 65) > 0x19u )
            v97 = (uint8_t)v95[v94];
          v11 = v96 ^ v97;
        }
        while ( v94 != 0 );
        v11 = v11 << 9 >> 9;
      }
      *((uint32_t *)v132 + 4) = v11 & 0x7FFFFF | v126 & 0xFF800000;
    }
    else
    {
      v11 = v126 << 9 >> 9;
    }
    v12 = a2;
    v13 = v11 & 0x7FFFFF | v154 & 0xFF800000;
    LOWORD(v154) = v11;
    BYTE2(v154) = BYTE2(v13) & 0x7F;
    HIBYTE(v154) = HIBYTE(v13) | 1;
    v143 = *(uint32_t *)(a2 + 16) - 1;
    if ( v143 > 0 )
    {
      do
      {
        v17 = *(gameswf::Self ***)(a2 + 12);
        v127 = *(uint32_t *)(a2 + 20);
        v18 = (char *)v17[1];
        v133 = (char *)v17[2];
        v19 = *v17;
        v20 = *v17;
        v15 = (int)(uintptr_t)(v18 + 1);
        if ( (int)(uintptr_t)(v18 + 1) > (int)(uintptr_t)(v133) && v17[3] == nullptr )
        {
          v21 = v15 + (v15 >> 1);
          v17[2] = (gameswf::Self *)v21;
          if ( v21 != 0 )
          {
            v117 = (int)(uintptr_t)(v18 + 1);
            if ( v19 != nullptr )
            {
              v109 = 0;
              v20 = (gameswf::Self *)gameswf::realloc_internal(v19, 12 * v21, 12 * (uint32_t)(uintptr_t)(v133));
            }
            else
            {
              v20 = (gameswf::Self *)gameswf::malloc_internal(12 * v21);
            }
            *v17 = v20;
            v18 = (char *)v17[1];
            v15 = v117;
          }
          else
          {
            if ( v19 != nullptr )
            {
              v113 = (int)(uintptr_t)(v18 + 1);
              gameswf::free_internal(v19);
              v18 = (char *)v17[1];
              v15 = v113;
            }
            *v17 = nullptr;
            v20 = nullptr;
          }
        }
        v14 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v20 + 12 * (uint32_t)(uintptr_t)(v18)));
        if ( v14 != nullptr )
        {
          *(uint8_t *)v14 = 0;
          *((uint8_t *)v14 + 1) = 0;
          v112 = v15;
          gameswf::ASValue::opAssign(v14, (gameswf::Self *)((char *)v19 + 12 * (v127 - v143)));
          v15 = v112;
        }
        v16 = v143-- == 1;
        v17[1] = (gameswf::Self *)v15;
      }
      while ( !v16 );
      v12 = a2;
      v143 = *(uint32_t *)(a2 + 16) - 1;
    }
    v22 = *(uint32_t *)(v12 + 12);
    v148[1] = 0;
    v23 = (gameswf::Self *)v151;
    if ( v150 == -1 )
      v23 = v153;
    LOWORD(v148[0]) = 5;
    v24 = *(uint32_t *)(v22 + 4);
    v160[3] = v22;
    v160[2] = (uint32_t)(uintptr_t)(v148);
    v160[4] = v143;
    v160[5] = v24 - 1;
    v160[6] = (uint32_t)(uintptr_t)(v23);
    v160[0] = 0;
    v160[1] = 0;
    gameswf::Listener::notify(a1 + 40, &v150, v160, v109);
    v25 = *(void ***)(a2 + 12);
    v26 = (int)(uintptr_t)(v25[1]);
    v27 = v26 - *(uint32_t *)(a2 + 16) + 1;
    v128 = v27;
    if ( v26 > v27 )
    {
      v144 = *(void ***)(a2 + 12);
      v134 = (int)(uintptr_t)(v25[1]);
      v28 = v134 - *(uint32_t *)(a2 + 16) + 1;
      v29 = 12 * v27;
      do
      {
        ++v28;
        v30 = (gameswf::ASValue::Self *)((char *)*v144 + v29);
        v29 += 12;
        gameswf::ASValue::dropRefs(v30);
      }
      while ( v28 != v134 );
      v25 = v144;
      v26 = v134;
    }
    if ( v128 != 0 )
    {
      v31 = (int)(uintptr_t)(v25[2]);
      if ( v128 > v31 && v25[3] == nullptr )
      {
        v91 = v128 + (v128 >> 1);
        v25[2] = (void *)v91;
        if ( v91 != 0 )
        {
          if ( *v25 != nullptr )
          {
            v110 = 0;
            *v25 = gameswf::realloc_internal((gameswf::Self *)*v25, 12 * v91, 12 * v31);
          }
          else
          {
            *v25 = (void *)gameswf::malloc_internal(12 * v91);
          }
        }
        else
        {
          if ( *v25 != nullptr )
            gameswf::free_internal((gameswf::Self *)*v25);
          *v25 = nullptr;
        }
      }
    }
    v32 = 12 * v26;
    if ( v26 < v128 )
    {
      do
      {
        v33 = (uint8_t *)((char *)*v25 + v32);
        if ( v33 != nullptr )
        {
          *v33 = 0;
          v33[1] = 0;
        }
        ++v26;
        v32 += 12;
      }
      while ( v26 != v128 );
    }
    v25[1] = (void *)v128;
    while ( 1 )
    {
      v34 = a1;
      if ( *(uint32_t *)(a1 + 68) == 0 )
        break;
      while ( 1 )
      {
        v129 = *(char ***)(v34 + 64);
        v35 = **v129;
        if ( v35 == 3 || v35 == 4 )
        {
          v36 = *((char **)*v129 + 1);
        }
        else
        {
          v36 = (char *)(&byte_20D6378);
          if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
          {
            byte_20D6378 = 1;
            v76 = dword_20D6388 | 0x7FFFFF;
            byte_20D6379 = 0;
            dword_20D6388 = v76;
            BYTE2(dword_20D6388) = BYTE2(v76) & 0x7F;
            HIBYTE(dword_20D6388) = HIBYTE(v76) | 1;
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
            __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
          }
        }
        v155 = 1;
        v156[0] = 0;
        if ( *v36 == -1 )
          v37 = *((uint32_t *)v36 + 1) - 1;
        else
          v37 = *v36 - 1;
        gameswf::String::resize((gameswf::String::Self *)&v155, v37);
        v38 = (gameswf::Self *)(v36 + 1);
        if ( *v36 == -1 )
          v38 = *((gameswf::Self **)v36 + 3);
        if ( v155 == -1 )
        {
          v39 = v157;
          v40 = v158;
        }
        else
        {
          v39 = (char *)v155;
          v40 = (gameswf::Self *)v156;
        }
        gameswf::Strcpy_s(v40, v39, v38);
        v135 = *((uint32_t *)v36 + 4);
        if ( (uint8_t *)(v135 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
        {
          if ( *v36 == -1 )
          {
            v72 = *((char **)v36 + 3);
            v73 = *((uint32_t *)v36 + 1) - 1;
          }
          else
          {
            v72 = v36 + 1;
            v73 = *v36 - 1;
          }
          v41 = 5381;
          if ( v73 > 0 )
          {
            v122 = v36;
            do
            {
              --v73;
              v74 = 33 * v41;
              v75 = (uint8_t)v72[v73] + 32;
              if ( (uint8_t)(v72[v73] - 65) > 0x19u )
                v75 = (uint8_t)v72[v73];
              v41 = v74 ^ v75;
            }
            while ( v73 != 0 );
            v36 = v122;
            v41 = v41 << 9 >> 9;
          }
          *((uint32_t *)v36 + 4) = v41 & 0x7FFFFF | v135 & 0xFF800000;
        }
        else
        {
          v41 = v135 << 9 >> 9;
        }
        v42 = v41 & 0x7FFFFF | v159 & 0xFF800000;
        LOWORD(v159) = v41;
        BYTE2(v159) = BYTE2(v42) & 0x7F;
        HIBYTE(v159) = HIBYTE(v42) | 1;
        v145 = (int)(uintptr_t)(v129[1] - 1);
        if ( v145 > 0 )
        {
          v43 = 12 * (uint32_t)(uintptr_t)(v129[1] - 1);
          do
          {
            v44 = *(uint32_t *)(a2 + 12);
            v136 = *v129;
            v45 = *(uint32_t *)(v44 + 4);
            v124 = *(uint32_t *)(v44 + 8);
            v46 = v45 + 1;
            if ( v45 + 1 <= v124 || *(uint32_t *)(v44 + 12) != 0 )
            {
              v47 = *(gameswf::Self **)v44;
            }
            else
            {
              v71 = v46 + (v46 >> 1);
              *(uint32_t *)(v44 + 8) = v71;
              if ( v71 != 0 )
              {
                v116 = v43;
                if ( *(uint32_t *)v44 != 0 )
                {
                  v110 = 0;
                  v47 = (gameswf::Self *)gameswf::realloc_internal(*(gameswf::Self **)v44, 12 * v71, 12 * v124);
                }
                else
                {
                  v47 = (gameswf::Self *)gameswf::malloc_internal(12 * v71);
                }
                *(uint32_t *)v44 = (uint32_t)(uintptr_t)(v47);
                v45 = *(uint32_t *)(v44 + 4);
                v43 = v116;
              }
              else
              {
                if ( *(uint32_t *)v44 != 0 )
                {
                  v115 = v43;
                  gameswf::free_internal(*(gameswf::Self **)v44);
                  v45 = *(uint32_t *)(v44 + 4);
                  v43 = v115;
                }
                *(uint32_t *)v44 = 0;
                v47 = nullptr;
              }
            }
            v48 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v47 + 12 * v45));
            if ( v48 != nullptr )
            {
              *(uint8_t *)v48 = 0;
              *((uint8_t *)v48 + 1) = 0;
              v114 = v43;
              gameswf::ASValue::opAssign(v48, (const gameswf::ASValue::Self *)&v136[v43]);
              v43 = v114;
            }
            v43 -= 12;
            v16 = v145-- == 1;
            *(uint32_t *)(v44 + 4) = v46;
          }
          while ( !v16 );
        }
        v149[1] = 0;
        v49 = (gameswf::Self *)v156;
        if ( v155 == -1 )
          v49 = v158;
        LOWORD(v149[0]) = 5;
        v50 = *(uint32_t *)(a2 + 12);
        v51 = (int)(uintptr_t)(v129[1] - 1);
        v161[0] = 0;
        v52 = *(uint32_t *)(v50 + 4);
        v161[3] = v50;
        v161[2] = (uint32_t)(uintptr_t)(v149);
        v161[4] = v51;
        v161[5] = v52 - 1;
        v161[6] = (uint32_t)(uintptr_t)(v49);
        v161[1] = 0;
        gameswf::Listener::notify(a1 + 40, &v155, v161, v110);
        v53 = *(void ***)(a2 + 12);
        v54 = (int)(uintptr_t)(v53[1]);
        v55 = v54 - *(uint32_t *)(a2 + 16) + 1;
        v130 = v55;
        if ( v54 > v55 )
        {
          v146 = *(void ***)(a2 + 12);
          v137 = (int)(uintptr_t)(v53[1]);
          v56 = v137 - *(uint32_t *)(a2 + 16) + 1;
          v57 = 12 * v55;
          do
          {
            ++v56;
            v58 = (gameswf::ASValue::Self *)((char *)*v146 + v57);
            v57 += 12;
            gameswf::ASValue::dropRefs(v58);
          }
          while ( v56 != v137 );
          v53 = v146;
          v54 = v137;
        }
        if ( v130 != 0 )
        {
          v59 = (int)(uintptr_t)(v53[2]);
          if ( v130 > v59 && v53[3] == nullptr )
          {
            v77 = v130 + (v130 >> 1);
            v53[2] = (void *)v77;
            if ( v77 != 0 )
            {
              if ( *v53 != nullptr )
              {
                v110 = 0;
                *v53 = gameswf::realloc_internal((gameswf::Self *)*v53, 12 * v77, 12 * v59);
              }
              else
              {
                *v53 = (void *)gameswf::malloc_internal(12 * v77);
              }
            }
            else
            {
              if ( *v53 != nullptr )
                gameswf::free_internal((gameswf::Self *)*v53);
              *v53 = nullptr;
            }
          }
        }
        v60 = 12 * v54;
        if ( v54 < v130 )
        {
          do
          {
            v61 = (uint8_t *)((char *)*v53 + v60);
            if ( v61 != nullptr )
            {
              *v61 = 0;
              v61[1] = 0;
            }
            ++v54;
            v60 += 12;
          }
          while ( v54 != v130 );
        }
        v53[1] = (void *)v130;
        v62 = *(uint32_t **)(a1 + 64);
        v63 = v62[4];
        --*(uint32_t *)(a1 + 68);
        *(uint32_t *)(a1 + 64) = v63;
        v64 = v62[1];
        if ( v64 <= 0 )
        {
          if ( v64 < 0 )
          {
            v89 = 12 * v64;
            do
            {
              v90 = (uint8_t *)(v89 + *v62);
              if ( v90 != nullptr )
              {
                *v90 = 0;
                v90[1] = 0;
              }
              v89 += 12;
              ++v64;
            }
            while ( v64 != 0 );
          }
        }
        else
        {
          v147 = v62;
          v138 = v62[1];
          v65 = 0;
          v66 = 0;
          do
          {
            ++v66;
            v67 = (gameswf::ASValue::Self *)(v65 + *v147);
            v65 += 12;
            gameswf::ASValue::dropRefs(v67);
          }
          while ( v66 != v138 );
          v62 = v147;
        }
        v68 = v62[3];
        v62[1] = 0;
        if ( v68 == 0 )
        {
          v69 = (gameswf::Self *)*v62;
          v16 = *v62 == 0;
          v62[2] = 0;
          if ( !v16 )
            gameswf::free_internal(v69);
          *v62 = 0;
        }
        gameswf::free_internal((gameswf::Self *)v62);
        if ( v62 == *(uint32_t **)(a1 + 60) )
          *(uint32_t *)(a1 + 60) = 0;
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v149);
        if ( v155 != -1 || (v159 & 0x1000000) == 0 )
          break;
        gameswf::free_internal(v158);
        v34 = a1;
        if ( *(uint32_t *)(a1 + 68) == 0 )
          goto LABEL_94;
      }
    }
LABEL_94:
    *(uint8_t *)(v34 + 56) = 0;
    result = (uint32_t *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v148);
    if ( v150 == -1 && (v154 & 0x1000000) != 0 )
      return (uint32_t *)gameswf::free_internal(v153);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASListener::is  (binary VA: 0x1127220)
// Original: gameswf::ASListener::is
// ----------------------------------------------------------------------------
bool gameswf::ASListener::is(gameswf::ASListener::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 35 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASListener::Destroy  (binary VA: 0x1127240)
// Original: gameswf::ASListener::~ASListener
// ----------------------------------------------------------------------------
void gameswf::ASListener::Destroy(gameswf::Self **self)
{
  gameswf::ASListener::Self *v1;
  int v2;
  gameswf::Self **v3;
  gameswf::Self *v4;
  int v5;
  gameswf::Self *v6;
  int v7;
  gameswf::ASValue::Self *v8;
  gameswf::Self *v9;
  gameswf::Self *v10;
  bool v11;
  int v12;
  int v13;
  gameswf::ASListener::Self *v14;
  gameswf::Self *v15;
  int v16;
  gameswf::Self *v17;
  int v18;
  uint8_t *v19;
  int v20;
  uint32_t *v21;
  gameswf::Self *v22;
  gameswf::Self ***v23;

  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_208FBC8);
  v23 = (gameswf::Self ***)(self + 15);
  while ( 1 )
  {
    v1 = (gameswf::ASListener::Self *)self;
    v2 = (int)(uintptr_t)(*(self + 17));
    if ( v2 == 0 )
      break;
    while ( 1 )
    {
      v3 = (gameswf::Self **)*(self + 16);
      v4 = v3[4];
      *(self + 17) = (gameswf::Self *)(v2 - 1);
      *(self + 16) = v4;
      v5 = (int)(uintptr_t)(v3[1]);
      if ( v5 <= 0 )
      {
        if ( v5 < 0 )
        {
          v18 = 12 * v5;
          do
          {
            v19 = (uint8_t *)((char *)*v3 + v18);
            if ( v19 != nullptr )
            {
              *v19 = 0;
              v19[1] = 0;
            }
            v18 += 12;
            ++v5;
          }
          while ( v5 != 0 );
        }
      }
      else
      {
        v22 = v3[1];
        v6 = nullptr;
        v7 = 0;
        do
        {
          v6 = (gameswf::Self *)((char *)v6 + 1);
          v8 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)*v3 + v7));
          v7 += 12;
          gameswf::ASValue::dropRefs(v8);
        }
        while ( v6 != v22 );
      }
      v9 = v3[3];
      v3[1] = nullptr;
      if ( v9 == nullptr )
      {
        v10 = *v3;
        v11 = *v3 == nullptr;
        v3[2] = nullptr;
        if ( !v11 )
          gameswf::free_internal(v10);
        *v3 = nullptr;
      }
      gameswf::free_internal((gameswf::Self *)v3);
      if ( v3 != *v23 )
        break;
      v1 = (gameswf::ASListener::Self *)self;
      *v23 = nullptr;
      v2 = (int)(uintptr_t)(*(self + 17));
      if ( v2 == 0 )
        goto LABEL_12;
    }
  }
LABEL_12:
  v12 = *((uint32_t *)v1 + 11);
  if ( v12 <= 0 )
  {
    if ( v12 < 0 )
    {
      v20 = 8 * v12;
      do
      {
        v21 = (uint32_t *)((char *)*(self + 10) + v20);
        if ( v21 != nullptr )
        {
          *v21 = 0;
          v21[1] = 0;
        }
        v20 += 8;
        ++v12;
      }
      while ( v12 != 0 );
    }
  }
  else
  {
    v13 = 0;
    v14 = v1;
    do
    {
      v15 = *(gameswf::Self **)(*((uint32_t *)v14 + 10) + 8 * v13);
      if ( v15 != nullptr )
      {
        v11 = (*(uint16_t *)v15)-- == 1;
        if ( v11 )
          gameswf::free_internal(v15);
      }
      ++v13;
    }
    while ( v13 != v12 );
  }
  v16 = (int)(uintptr_t)(*(self + 13));
  *(self + 11) = nullptr;
  if ( v16 == 0 )
  {
    v17 = *(self + 10);
    *(self + 12) = nullptr;
    if ( v17 != nullptr )
      gameswf::free_internal(v17);
    *(self + 10) = nullptr;
  }
  gameswf::ASObject::Destroy((gameswf::ASObject::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASListener::Destroy_ea1127430  (binary VA: 0x1127430)
// Original: gameswf::ASListener::~ASListener
// ----------------------------------------------------------------------------
void gameswf::ASListener::Destroy_ea1127430(gameswf::Self **self)
{
  gameswf::ASListener::Destroy(self);
  opDelete(self);
}


