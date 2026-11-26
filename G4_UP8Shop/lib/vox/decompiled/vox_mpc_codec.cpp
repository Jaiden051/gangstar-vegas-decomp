#include "Core/Utils/DecompTypes.h"
#include "vox_mpc_codec.h"

// ----------------------------------------------------------------------------
// Function: mpc_demux_pos  (binary VA: 0xfe1fb0)
// Original: mpc_demux_pos
// ----------------------------------------------------------------------------
int mpc_demux_pos(uint32_t *a1)
{
  int v1;

  v1 = a1[16475] - (uint32_t)(uintptr_t)(a1);
  return 8 - a1[16476] + 8 * (v1 + (*(int (**)(uint32_t))(*a1 + 8))(*a1) - a1[16474] - 360);
}

// ----------------------------------------------------------------------------
// Function: mpc_demux_chap_nb  (binary VA: 0xfe2000)
// Original: mpc_demux_chap_nb
// ----------------------------------------------------------------------------
int mpc_demux_chap_nb(uint32_t *a1)
{
  int result;
  bool v2; // cc

  result = a1[16483];
  if ( result == -1 )
  {
    result = 0;
    v2 = a1[4] <= 7u;
    a1[16483] = 0;
    if ( !v2 )
    {
      sub_FE1090(a1);
      return a1[16483];
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: mpc_demux_chap  (binary VA: 0xfe2050)
// Original: mpc_demux_chap
// ----------------------------------------------------------------------------
int mpc_demux_chap(uint32_t *a1, int a2)
{
  int v2;
  bool v4; // cc

  v2 = a1[16483];
  if ( v2 == -1 )
  {
    v2 = 0;
    v4 = a1[4] <= 7u;
    a1[16483] = 0;
    if ( !v4 )
    {
      sub_FE1090(a1);
      v2 = a1[16483];
    }
  }
  if ( a2 >= v2 || a2 < 0 )
    return 0;
  else
    return a1[16484] + 20 * a2;
}

// ----------------------------------------------------------------------------
// Function: mpc_demux_init  (binary VA: 0xfe20d0)
// Original: mpc_demux_init
// ----------------------------------------------------------------------------
uint32_t * mpc_demux_init(int (**a1)(uint32_t, int, int))
{
  uint32_t *v1;
  uint32_t *v2;
  int v3;
  char *v4;
  int v5;
  int v6;
  char *v7;
  int v8;
  char *v9;
  int v10;
  size_t v11;
  int v12;
  uint8_t *v13;
  int v14;
  int v15;
  size_t v16;
  int v18;
  unsigned int v19;
  size_t v20;
  int v21;
  size_t v22;
  size_t v23;
  int v24;
  unsigned int v25;
  bool v26;
  int v27;
  unsigned int v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  uint32_t *v32;
  int v33;
  unsigned int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  size_t v39;
  int v40;
  uint8_t *v41;
  int v42;
  int v43;
  int v44;
  unsigned int v45;
  char *v46;
  int v47;
  int v48;
  size_t v49;
  unsigned int v50;
  size_t v51;
  int v52;
  int v53;
  unsigned int v54;
  unsigned int v55;
  int *v56;
  char *v57;
  int v58;
  int v59;
  int v60;
  unsigned int v61;
  unsigned int v62;
  int v63;
  int v64;
  unsigned int v65;
  unsigned int v66;
  int v67;
  int v68;
  typedef uint32_t *_g4_t_v69;
  typedef char *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef size_t _g4_t_v72;
  typedef size_t _g4_t_v73;
  typedef int _g4_t_v74;
  typedef char _g4_t_v75;
  typedef int _g4_t_v76;
  typedef unsigned int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef unsigned int _g4_t_v83;
  typedef uint8_t _g4_t_v84;
  typedef uint8_t _g4_t_v85;
  typedef int _g4_t_block;
  typedef int _g4_t_v87;
  typedef uint8_t _g4_t_v88;
  typedef char *_g4_t_v89;
  typedef unsigned int _g4_t_v90;
  typedef unsigned int _g4_t_v91;
  typedef void *_g4_t_v92;
  typedef uint32_t *_g4_t_v93;
  typedef uint8_t *_g4_t_v94;
  typedef size_t _g4_t_v95;
  typedef unsigned int _g4_t_v96;
  typedef uint8_t *_g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef size_t _g4_t_v100;
  typedef size_t _g4_t_v101;
  typedef uint8_t _g4_t_v102;
  typedef size_t _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef char *_g4_t_v106;
  typedef int _g4_t_v107;
  typedef unsigned int _g4_t_v108;
  typedef char _g4_t_v109;
  typedef size_t _g4_t_v110;
  typedef int _g4_t_v111;
  typedef uint64_t _g4_t_v112 __attribute__((aligned(1)));
  typedef unsigned int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef unsigned int _g4_t_v115;
  typedef unsigned int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef uint64_t _g4_t_v119 __attribute__((aligned(1)));
  typedef unsigned int _g4_t_v120;
  typedef unsigned int _g4_t_v121;
  typedef uint8_t _g4_t_s1[3];
  typedef char _g4_t_v123;
  typedef int64_t _g4_t_v124 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v125[4];
  typedef uint64_t _g4_t_v126;
  typedef char _g4_t_v127[4];
  typedef int64_t _g4_t_v128;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (4u + sizeof(_g4_t_v69)) > _g4_s0 ? (4u + sizeof(_g4_t_v69)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v70)) > _g4_s1 ? (20u + sizeof(_g4_t_v70)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v71)) > _g4_s2 ? (20u + sizeof(_g4_t_v71)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v72)) > _g4_s3 ? (20u + sizeof(_g4_t_v72)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v73)) > _g4_s4 ? (20u + sizeof(_g4_t_v73)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v74)) > _g4_s5 ? (20u + sizeof(_g4_t_v74)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v75)) > _g4_s6 ? (24u + sizeof(_g4_t_v75)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v76)) > _g4_s7 ? (24u + sizeof(_g4_t_v76)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v77)) > _g4_s8 ? (24u + sizeof(_g4_t_v77)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v78)) > _g4_s9 ? (24u + sizeof(_g4_t_v78)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v79)) > _g4_s10 ? (24u + sizeof(_g4_t_v79)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v80)) > _g4_s11 ? (24u + sizeof(_g4_t_v80)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v81)) > _g4_s12 ? (24u + sizeof(_g4_t_v81)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v82)) > _g4_s13 ? (28u + sizeof(_g4_t_v82)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v83)) > _g4_s14 ? (28u + sizeof(_g4_t_v83)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v84)) > _g4_s15 ? (36u + sizeof(_g4_t_v84)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v85)) > _g4_s16 ? (52u + sizeof(_g4_t_v85)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_block)) > _g4_s17 ? (68u + sizeof(_g4_t_block)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v87)) > _g4_s18 ? (68u + sizeof(_g4_t_v87)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v88)) > _g4_s19 ? (68u + sizeof(_g4_t_v88)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v89)) > _g4_s20 ? (68u + sizeof(_g4_t_v89)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v90)) > _g4_s21 ? (68u + sizeof(_g4_t_v90)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v91)) > _g4_s22 ? (84u + sizeof(_g4_t_v91)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v92)) > _g4_s23 ? (92u + sizeof(_g4_t_v92)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v93)) > _g4_s24 ? (96u + sizeof(_g4_t_v93)) : _g4_s24,
    _g4_s26 = (96u + sizeof(_g4_t_v94)) > _g4_s25 ? (96u + sizeof(_g4_t_v94)) : _g4_s25,
    _g4_s27 = (96u + sizeof(_g4_t_v95)) > _g4_s26 ? (96u + sizeof(_g4_t_v95)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v96)) > _g4_s27 ? (96u + sizeof(_g4_t_v96)) : _g4_s27,
    _g4_s29 = (100u + sizeof(_g4_t_v97)) > _g4_s28 ? (100u + sizeof(_g4_t_v97)) : _g4_s28,
    _g4_s30 = (100u + sizeof(_g4_t_v98)) > _g4_s29 ? (100u + sizeof(_g4_t_v98)) : _g4_s29,
    _g4_s31 = (100u + sizeof(_g4_t_v99)) > _g4_s30 ? (100u + sizeof(_g4_t_v99)) : _g4_s30,
    _g4_s32 = (100u + sizeof(_g4_t_v100)) > _g4_s31 ? (100u + sizeof(_g4_t_v100)) : _g4_s31,
    _g4_s33 = (100u + sizeof(_g4_t_v101)) > _g4_s32 ? (100u + sizeof(_g4_t_v101)) : _g4_s32,
    _g4_s34 = (100u + sizeof(_g4_t_v102)) > _g4_s33 ? (100u + sizeof(_g4_t_v102)) : _g4_s33,
    _g4_s35 = (100u + sizeof(_g4_t_v103)) > _g4_s34 ? (100u + sizeof(_g4_t_v103)) : _g4_s34,
    _g4_s36 = (116u + sizeof(_g4_t_v104)) > _g4_s35 ? (116u + sizeof(_g4_t_v104)) : _g4_s35,
    _g4_s37 = (116u + sizeof(_g4_t_v105)) > _g4_s36 ? (116u + sizeof(_g4_t_v105)) : _g4_s36,
    _g4_s38 = (116u + sizeof(_g4_t_v106)) > _g4_s37 ? (116u + sizeof(_g4_t_v106)) : _g4_s37,
    _g4_s39 = (116u + sizeof(_g4_t_v107)) > _g4_s38 ? (116u + sizeof(_g4_t_v107)) : _g4_s38,
    _g4_s40 = (116u + sizeof(_g4_t_v108)) > _g4_s39 ? (116u + sizeof(_g4_t_v108)) : _g4_s39,
    _g4_s41 = (116u + sizeof(_g4_t_v109)) > _g4_s40 ? (116u + sizeof(_g4_t_v109)) : _g4_s40,
    _g4_s42 = (116u + sizeof(_g4_t_v110)) > _g4_s41 ? (116u + sizeof(_g4_t_v110)) : _g4_s41,
    _g4_s43 = (116u + sizeof(_g4_t_v111)) > _g4_s42 ? (116u + sizeof(_g4_t_v111)) : _g4_s42,
    _g4_s44 = (116u + sizeof(_g4_t_v112)) > _g4_s43 ? (116u + sizeof(_g4_t_v112)) : _g4_s43,
    _g4_s45 = (116u + sizeof(_g4_t_v113)) > _g4_s44 ? (116u + sizeof(_g4_t_v113)) : _g4_s44,
    _g4_s46 = (124u + sizeof(_g4_t_v114)) > _g4_s45 ? (124u + sizeof(_g4_t_v114)) : _g4_s45,
    _g4_s47 = (124u + sizeof(_g4_t_v115)) > _g4_s46 ? (124u + sizeof(_g4_t_v115)) : _g4_s46,
    _g4_s48 = (124u + sizeof(_g4_t_v116)) > _g4_s47 ? (124u + sizeof(_g4_t_v116)) : _g4_s47,
    _g4_s49 = (124u + sizeof(_g4_t_v117)) > _g4_s48 ? (124u + sizeof(_g4_t_v117)) : _g4_s48,
    _g4_s50 = (124u + sizeof(_g4_t_v118)) > _g4_s49 ? (124u + sizeof(_g4_t_v118)) : _g4_s49,
    _g4_s51 = (124u + sizeof(_g4_t_v119)) > _g4_s50 ? (124u + sizeof(_g4_t_v119)) : _g4_s50,
    _g4_s52 = (124u + sizeof(_g4_t_v120)) > _g4_s51 ? (124u + sizeof(_g4_t_v120)) : _g4_s51,
    _g4_s53 = (124u + sizeof(_g4_t_v121)) > _g4_s52 ? (124u + sizeof(_g4_t_v121)) : _g4_s52,
    _g4_s54 = (144u + sizeof(_g4_t_s1)) > _g4_s53 ? (144u + sizeof(_g4_t_s1)) : _g4_s53,
    _g4_s55 = (147u + sizeof(_g4_t_v123)) > _g4_s54 ? (147u + sizeof(_g4_t_v123)) : _g4_s54,
    _g4_s56 = (148u + sizeof(_g4_t_v124)) > _g4_s55 ? (148u + sizeof(_g4_t_v124)) : _g4_s55,
    _g4_s57 = (164u + sizeof(_g4_t_v125)) > _g4_s56 ? (164u + sizeof(_g4_t_v125)) : _g4_s56,
    _g4_s58 = (168u + sizeof(_g4_t_v126)) > _g4_s57 ? (168u + sizeof(_g4_t_v126)) : _g4_s57,
    _g4_s59 = (180u + sizeof(_g4_t_v127)) > _g4_s58 ? (180u + sizeof(_g4_t_v127)) : _g4_s58,
    _g4_s60 = (184u + sizeof(_g4_t_v128)) > _g4_s59 ? (184u + sizeof(_g4_t_v128)) : _g4_s59
  };
  alignas(16) uint8_t _g4_sf[_g4_s60];
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 4u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 20u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 20u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 20u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 20u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 20u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 24u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 24u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 24u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 24u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 24u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 24u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 24u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 28u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 28u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 36u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 52u);
  _g4_t_block &block = *reinterpret_cast<_g4_t_block *>(_g4_sf + 68u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 68u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 68u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 68u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 68u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 84u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 92u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 96u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 96u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 96u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 96u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 100u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 100u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 100u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 100u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 100u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 100u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 100u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 116u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 116u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 116u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 116u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 116u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 116u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 116u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 116u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 116u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 116u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 124u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 124u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 124u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 124u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 124u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 124u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 124u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 124u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 144u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 147u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 148u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 164u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 168u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 180u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 184u);

  v1 = (uint32_t *)VoxAlloc_c(
                   (size_t)&stru_10194,
                   (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/mpc/mpc_demux.c"),
                   (int)(uintptr_t)("mpc_demux_init"),
                   487);
  v2 = v1;
  if ( v1 == nullptr )
    return v2;
  memset(v1, 0, (size_t)&stru_10194);
  *v2 = (uint32_t)(uintptr_t)(a1);
  v2[16483] = -1;
  v2[16475] = (uint32_t)(uintptr_t)(v2 + 90);
  v2[16474] = 0;
  v2[16476] = 8;
  *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10174)->st_name + (uint32_t)(uintptr_t)(v2)) = 0;
  v2[16478] = 0;
  *((uint8_t *)v2 + 336) = -1;
  v92 = v2 + 90;
  v2[86] = (uint32_t)(uintptr_t)("n.a.");
  v3 = (*a1)((uint32_t)(uintptr_t)(a1), (int)(uintptr_t)(v2 + 90), 3);
  v4 = (char *)v2[16475];
  v5 = v3 + v2[16474];
  v2[16474] = v5;
  v70 = v4;
  v6 = memcmp(v4, "ID3", 3u);
  v7 = v70;
  if ( v6 != 0 )
  {
    v2[87] = 0;
  }
  else
  {
    v117 = v2[16476];
    v108 = v5 + 352;
    v39 = (char *)v2 + v5 + 360 - v70 - ((unsigned int)(8 - v117) >> 3);
    if ( v39 <= 9 )
    {
      v101 = 10 - v39;
      if ( 10 - v39 > 61184 - v5 )
      {
        if ( v117 == 0 )
        {
          v7 = v70 + 1;
          v2[16476] = 8;
          v2[16475] = (uint32_t)(uintptr_t)(v70 + 1);
        }
        v77 = (char *)v2 + v5 + 360 - v70 - ((unsigned int)(8 - v117) >> 3);
        memmove(v92, v7, v39);
        v2[16475] = (uint32_t)(uintptr_t)(v92);
        v2[16474] = v77;
        v108 = v77 + 352;
      }
      v42 = (*(int (**)(uint32_t, unsigned int, size_t))*v2)(*v2, (unsigned int)(uintptr_t)(v2) + v108 + 8, v101);
      v7 = (char *)v2[16475];
      v5 = v42 + v2[16474];
      v43 = v2[16476];
      v2[16474] = v5;
      v117 = v43;
    }
    v40 = (v117 - 24) >> 3;
    v118 = (v117 - 24) & 7;
    v41 = (uint8_t *)&v7[-v40];
    v2[16476] = v118;
    v2[16475] = (uint32_t)(uintptr_t)(v41 + 3);
    v109 = (v41[3] | (v41[2] << 8)) >> v118;
    if ( (v109 & 0xF) != 0 )
      goto LABEL_62;
    v2[16475] = (uint32_t)(uintptr_t)(v41 + 4);
    v102 = (v41[4] | (v41[3] << 8)) >> v118;
    v2[16475] = (uint32_t)(uintptr_t)(v41 + 5);
    v88 = (v41[5] | (v41[4] << 8)) >> v118;
    v2[16475] = (uint32_t)(uintptr_t)(v41 + 6);
    v85 = (v41[6] | (v41[5] << 8)) >> v118;
    v2[16475] = (uint32_t)(uintptr_t)(v41 + 7);
    v94 = v41 + 7;
    v84 = (v41[7] | (v41[6] << 8)) >> v118;
    if ( ((v84 | v85 | v102 | v88) & 0x80u) != 0 )
    {
LABEL_62:
      v2[87] = -1;
      goto LABEL_11;
    }
    v44 = v84 | (v85 << 7) | (v102 << 21) | (v88 << 14);
    if ( (v109 & 0x10) != 0 )
      v44 += 10;
    v110 = v5 + 352;
    v103 = (char *)v2 + v5 + 360 - (char *)(v94) - ((unsigned int)(8 - v118) >> 3);
    v45 = 61184;
    if ( (unsigned int)(v44 - 1) < 0xEF00 )
      v45 = v44;
    if ( v103 < v45 )
    {
      v90 = v45 - v103;
      if ( v45 - v103 > 61184 - v5 )
      {
        if ( v118 == 0 )
        {
          v2[16476] = 8;
          v94 = v41 + 8;
          v2[16475] = (uint32_t)(uintptr_t)(v41 + 8);
        }
        v80 = v44;
        memmove(v92, v94, v103);
        v2[16475] = (uint32_t)(uintptr_t)(v92);
        v2[16474] = v103;
        v44 = v80;
        v110 = v103 + 352;
      }
      v81 = v44;
      v2[16474] += (*(int (**)(uint32_t, size_t, unsigned int))*v2)(*v2, (size_t)v2 + v110 + 8, v90);
      v94 = (uint8_t *)v2[16475];
      v44 = v81;
    }
    v46 = (char *)(&v94[v44]);
    v47 = v44 + 10;
    v2[16475] = (uint32_t)(uintptr_t)(v46);
    v2[87] = v47;
    if ( v47 < 0 )
      goto LABEL_11;
  }
  v8 = (*(int (**)(uint32_t))(*v2 + 12))(*v2);
  v2[89] = v8;
  v2[88] = v8;
  v9 = (char *)v2[16475];
  v114 = v2[16474];
  v10 = v114 + 352;
  v104 = v2[16476];
  v11 = (char *)v2 + v114 + 360 - v9 - ((unsigned int)(8 - v104) >> 3);
  if ( v11 <= 3 )
  {
    v100 = 4 - v11;
    if ( 4 - v11 > 61184 - v114 )
    {
      if ( v104 == 0 )
      {
        ++v9;
        v2[16476] = 8;
        v2[16475] = (uint32_t)(uintptr_t)(v9);
      }
      v72 = v11;
      memmove(v92, v9, v11);
      v2[16475] = (uint32_t)(uintptr_t)(v92);
      v2[16474] = v72;
      v10 = v72 + 352;
    }
    v38 = (*(int (**)(uint32_t, int, size_t))*v2)(*v2, (int)(uintptr_t)(v2) + v10 + 8, v100);
    v9 = (char *)v2[16475];
    v114 = v2[16474] + v38;
    v2[16474] = v114;
    v104 = v2[16476];
  }
  v12 = (v104 - 8) & 7;
  v2[16476] = v12;
  v13 = (uint8_t *)&v9[-((v104 - 8) >> 3)];
  v105 = v12;
  v2[16475] = (uint32_t)(uintptr_t)(v13);
  s1[0] = (*v13 | (*(v13 - 1) << 8)) >> v12;
  v2[16475] = (uint32_t)(uintptr_t)(v13 + 1);
  s1[1] = (v13[1] | (*v13 << 8)) >> v12;
  v2[16475] = (uint32_t)(uintptr_t)(v13 + 2);
  v14 = (v13[2] | (v13[1] << 8)) >> v12;
  v2[16475] = (uint32_t)(uintptr_t)(v13 + 3);
  s1[2] = v14;
  v97 = v13 + 3;
  v123 = (v13[3] | (v13[2] << 8)) >> v12;
  v75 = v123;
  if ( memcmp(s1, "MP+", 3u) == 0 )
  {
    v18 = v75 & 0xF;
    v2[4] = v18;
    *((uint8_t *)v2 + 336) = v75 >> 4;
    if ( v18 == 7 )
    {
      v19 = v114 + 352;
      v20 = (char *)v2 + v114 + 360 - (char *)(v97) - ((unsigned int)(8 - v105) >> 3);
      if ( v20 <= 0x17 )
      {
        v96 = (24 - v20) & 0xFFFFFFFC;
        if ( 61184 - v114 < v96 )
        {
          if ( v105 == 0 )
          {
            v2[16476] = 8;
            v97 = v13 + 4;
            v2[16475] = (uint32_t)(uintptr_t)(v13 + 4);
          }
          v120 = (v20 + 3) & 0xFFFFFFFC;
          v57 = (char *)v2 + v120 - v20 + 360;
          memmove(v57, v97, v20);
          v2[16475] = (uint32_t)(uintptr_t)(v57);
          v2[16474] = v120;
          v19 = v120 + 352;
        }
        v121 = (*(int (**)(uint32_t, unsigned int, unsigned int))*v2)(*v2, (unsigned int)(uintptr_t)(v2) + v19 + 8, v96);
        v58 = v2[16474];
        v59 = (int)(uintptr_t)(v2) + v58 + 360;
        if ( v121 >> 2 != 0 )
        {
          v60 = 0;
          do
          {
            *(uint32_t *)(v59 + 4 * v60) = __builtin_bswap32(*(uint32_t *)(v59 + 4 * v60));
            ++v60;
          }
          while ( v60 != v121 >> 2 );
          v58 = v2[16474];
        }
        v2[16474] = v121 + v58;
      }
      if ( streaminfo_read_header_sv7(v2 + 2, v2 + 16475) == 0 )
        goto LABEL_18;
    }
    goto LABEL_11;
  }
  if ( memcmp(s1, "MPCK", 4u) != 0 )
  {
LABEL_11:
    if ( v2[16479] != 0 )
      VoxFree_c(v2[16479]);
LABEL_13:
    v69 = v2;
    v2 = nullptr;
    VoxFree_c(v69);
    return v2;
  }
  v15 = v114 + 352;
  v16 = (char *)v2 + v114 + 360 - (char *)(v97) - ((unsigned int)(8 - v105) >> 3);
  if ( v16 <= 0xA )
  {
    v95 = 11 - v16;
    if ( 11 - v16 > 61184 - v114 )
    {
      if ( v105 == 0 )
      {
        v2[16476] = 8;
        v97 = v13 + 4;
        v2[16475] = (uint32_t)(uintptr_t)(v13 + 4);
      }
      v73 = v16;
      memmove(v92, v97, v16);
      v2[16475] = (uint32_t)(uintptr_t)(v92);
      v2[16474] = v73;
      v15 = v73 + 352;
    }
    v2[16474] += (*(int (**)(uint32_t, int, size_t))*v2)(*v2, (int)(uintptr_t)(v2) + v15 + 8, v95);
  }
  v93 = v2 + 16475;
  block = mpc_bits_get_block(v2 + 16475, v125);
  while ( memcmp(v125, "AP", 2u) != 0 )
  {
    if ( (uint8_t)(v125[0] - 65) > 0x19u || v125[1] <= 64 || v125[1] > 90 || v126 > 0xEEF5 )
      goto LABEL_11;
    v21 = v2[16474];
    v98 = v2[16476];
    v22 = v21 + 352;
    v106 = (char *)v2[16475];
    v23 = (char *)v2 + v21 + 360 - v106 - ((unsigned int)(8 - v98) >> 3);
    if ( (int)v126 + 11 > v23 )
    {
      v115 = v126 + 11 - v23;
      if ( v115 > 61184 - v21 )
      {
        if ( v98 == 0 )
        {
          ++v106;
          v2[16476] = 8;
          v2[16475] = (uint32_t)(uintptr_t)(v106);
        }
        memmove(v92, v106, v23);
        v2[16474] = v23;
        v2[16475] = (uint32_t)(uintptr_t)(v92);
        v22 = v23 + 352;
      }
      v2[16474] += (*(int (**)(uint32_t, size_t, unsigned int))*v2)(*v2, (size_t)v2 + v22 + 8, v115);
    }
    if ( memcmp(v125, "SH", 2u) == 0 )
    {
      if ( streaminfo_read_header_sv8(v2 + 2, v93, v126) != 0 )
        goto LABEL_11;
      goto LABEL_30;
    }
    if ( memcmp(v125, "RG", 2u) == 0 )
    {
      streaminfo_gain(v2 + 2, v93);
      v24 = v2[16475];
    }
    else if ( memcmp(v125, "EI", 2u) == 0 )
    {
      streaminfo_encoder_info(v2 + 2, v93);
      v24 = v2[16475];
    }
    else
    {
      if ( memcmp(v125, "SO", 2u) != 0 )
      {
        if ( memcmp(v125, "ST", 2u) == 0 )
          sub_FE0D50((int)(uintptr_t)(v2));
LABEL_30:
        v24 = v2[16475];
        goto LABEL_31;
      }
      v99 = v126;
      v116 = mpc_demux_pos(v2);
      mpc_bits_get_size(v93, &v124);
      v107 = block;
      v25 = (v116 + 8 * ((uint32_t)v124 - block)) >> 3;
      if ( v2[4] == 7 )
        v25 = v2[87] + ((v25 - v2[87]) & 0xFFFFFFFC);
      v76 = v116 + 8 * (v124 - block) - 8 * v25;
      (*(void (**)(uint32_t, unsigned int))(*v2 + 4))(*v2, v25);
      v26 = v2[4] == 7;
      v2[16474] = 0;
      v2[16475] = (uint32_t)(uintptr_t)(v92);
      v2[16476] = 8;
      *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10174)->st_name + (uint32_t)(uintptr_t)(v2)) = 0;
      v2[16478] = 0;
      v27 = v76;
      if ( v26 )
      {
        v65 = (((v76 + 7) >> 3) + 14) & 0xFFFFFFFC;
        if ( v65 - 1 >= 0xEF00 )
          v65 = 61184;
        v66 = v65 & 0xFFFFFFFC;
        if ( (v65 & 0xFFFFFFFC) > 0xEF00 )
        {
          memmove(v2 + 90, v92, 0);
          v2[16474] = 0;
          v2[16475] = (uint32_t)(uintptr_t)(v2 + 90);
          v27 = v76;
        }
        v79 = v27;
        v83 = (*(int (**)(uint32_t, uint32_t *, unsigned int))*v2)(*v2, v2 + 90, v66);
        v67 = v2[16474];
        v27 = v79;
        if ( v83 >> 2 != 0 )
        {
          v68 = 0;
          do
          {
            *(uint32_t *)((char *)&v2[v68 + 90] + v67) = __builtin_bswap32(*(uint32_t *)((char *)&v2[v68 + 90] + v67));
            ++v68;
          }
          while ( v68 != v83 >> 2 );
          v67 = v2[16474];
        }
        v2[16474] = v83 + v67;
        v32 = (uint32_t *)v2[16475];
      }
      else
      {
        v28 = 61184;
        v29 = (v76 + 7) >> 3;
        v30 = v29 + 10;
        v31 = v29 + 11;
        if ( v30 <= 0xEEFF )
          v28 = v31;
        v32 = v2 + 90;
        if ( v28 != 0 )
        {
          if ( v28 > 0xEF00 )
          {
            memmove(v92, v92, 0);
            v2[16474] = 0;
            v2[16475] = (uint32_t)(uintptr_t)(v92);
            v27 = v76;
          }
          v78 = v27;
          v2[16474] += (*(int (**)(uint32_t, uint32_t *, unsigned int))*v2)(*v2, v2 + 90, v28);
          v32 = (uint32_t *)v2[16475];
          v27 = v78;
        }
      }
      v2[16475] = (uint32_t)(uintptr_t)((char *)v32 + (v27 >> 3));
      v2[16476] = 8 - (v27 & 7);
      v87 = mpc_bits_get_block(v93, v127);
      if ( memcmp(v127, "ST", 2u) == 0 )
      {
        v48 = v124 + v128 - v107 + v87;
        v111 = v2[16474];
        v89 = (char *)v2[16475];
        v2[16483] = -1;
        v49 = v111 + 352;
        v2[16482] = v116 + 8 * v48;
        v50 = v128;
        v82 = v2[16476];
        v51 = (char *)v2 + v111 + 360 - v89 - ((unsigned int)(8 - v82) >> 3);
        if ( (unsigned int)(v128 - 1) >= 0xEF00 )
          v50 = 61184;
        if ( v51 < v50 )
        {
          v91 = v50 - v51;
          if ( v50 - v51 > 61184 - v111 )
          {
            if ( v82 == 0 )
            {
              ++v89;
              v2[16476] = 8;
              v2[16475] = (uint32_t)(uintptr_t)(v89);
            }
            memmove(v92, v89, v51);
            v2[16474] = v51;
            v2[16475] = (uint32_t)(uintptr_t)(v92);
            v49 = v51 + 352;
          }
          v2[16474] += (*(int (**)(uint32_t, size_t, unsigned int))*v2)(*v2, (size_t)v2 + v49 + 8, v91);
        }
        sub_FE0D50((int)(uintptr_t)(v2));
      }
      v33 = v99 + 11;
      v34 = v116 >> 3;
      if ( v2[4] == 7 )
        v34 = v2[87] + ((v34 - v2[87]) & 0xFFFFFFFC);
      v71 = v116 - 8 * v34;
      (*(void (**)(uint32_t, unsigned int))(*v2 + 4))(*v2, v34);
      v2[16474] = 0;
      v2[16475] = (uint32_t)(uintptr_t)(v92);
      v2[16476] = 8;
      *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10174)->st_name + (uint32_t)(uintptr_t)(v2)) = 0;
      v2[16478] = 0;
      v35 = v71;
      v36 = v71 + 7;
      if ( v2[4] == 7 )
      {
        v61 = (v33 + (v36 >> 3) + 3) & 0xFFFFFFFC;
        if ( v61 - 1 >= 0xEF00 )
          v61 = 61184;
        v62 = v61 & 0xFFFFFFFC;
        if ( (v61 & 0xFFFFFFFC) > 0xEF00 )
        {
          memmove(v2 + 90, v92, 0);
          v2[16474] = 0;
          v2[16475] = (uint32_t)(uintptr_t)(v2 + 90);
          v35 = v71;
        }
        v74 = v35;
        v113 = (*(int (**)(uint32_t, uint32_t *, unsigned int))*v2)(*v2, v2 + 90, v62);
        v63 = v2[16474];
        v53 = v74;
        if ( v113 >> 2 != 0 )
        {
          v64 = 0;
          do
          {
            *(uint32_t *)((char *)&v2[v64 + 90] + v63) = __builtin_bswap32(*(uint32_t *)((char *)&v2[v64 + 90] + v63));
            ++v64;
          }
          while ( v64 != v113 >> 2 );
          v63 = v2[16474];
        }
        v2[16474] = v113 + v63;
        v52 = v2[16475];
      }
      else
      {
        v37 = (v36 >> 3) + v33;
        if ( (unsigned int)(v37 - 1) >= 0xEF00 )
          v37 = 61184;
        v2[16474] += (*(int (**)(uint32_t, uint32_t *, int))*v2)(*v2, v2 + 90, v37);
        v52 = v2[16475];
        v53 = v71;
      }
      v24 = (v53 >> 3) + v52;
      v2[16476] = 8 - (v53 & 7);
    }
LABEL_31:
    v2[16475] = v126 + v24;
    block = mpc_bits_get_block(v93, v125);
  }
  v2[16475] -= block;
  if ( v2[4] == 0 )
    goto LABEL_11;
LABEL_18:
  if ( v2[16479] == 0 )
  {
    v54 = v2[11];
    v2[16480] = 6;
    if ( v54 <= 6 )
    {
      v112 = 73728;
      v54 = 6;
    }
    else
    {
      v2[16480] = v54;
      v112 = 1152 << v54;
    }
    v119 = *(uint64_t *)(v2 + 15);
    v55 = v119 / v112 + 2;
    if ( v55 > 0x10000 )
    {
      do
        v55 = v119 / (1152 << ++v54) + 2;
      while ( v55 > 0x10000 );
      v2[16480] = v54;
    }
    v56 = (int *)VoxAlloc_c(
                   4 * v55,
                   (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/mpc/mpc_demux.c"),
                   (int)(uintptr_t)("mpc_demux_seek_init"),
                   248);
    v2[16479] = (uint32_t)(uintptr_t)(v56);
    if ( v56 != nullptr )
    {
      *v56 = mpc_demux_pos(v2);
      *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10184)->st_name + (uint32_t)(uintptr_t)(v2)) = 1;
      goto LABEL_19;
    }
    goto LABEL_13;
  }
LABEL_19:
  v2[1] = (uint32_t)(uintptr_t)(mpc_decoder_init((int)(uintptr_t)(v2 + 2)));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: mpc_demux_exit  (binary VA: 0xfe3380)
// Original: mpc_demux_exit
// ----------------------------------------------------------------------------
int mpc_demux_exit(uint32_t *a1)
{
  mpc_decoder_exit(a1[1]);
  VoxFree_c(a1[16479]);
  VoxFree_c(a1[16484]);
  return VoxFree_c(a1);
}

// ----------------------------------------------------------------------------
// Function: mpc_demux_get_info  (binary VA: 0xfe33e0)
// Original: mpc_demux_get_info
// ----------------------------------------------------------------------------
unsigned int mpc_demux_get_info(int a1, uint8_t *a2)
{
  unsigned int result;
  uint16_t *v3;
  uint16_t *v4;
  int v5;
  uint16_t *v6;
  uint16_t *v7;

  result = 352;
  v3 = (uint16_t *)(a2);
  v4 = (uint16_t *)(a1 + 8);
  if ( ((uint8_t)(uintptr_t)(a2) & 1) != 0 )
  {
    v4 = (uint16_t *)(a1 + 9);
    *a2 = *(uint8_t *)(a1 + 8);
    v3 = (uint16_t *)(a2 + 1);
    result = 351;
    if ( ((unsigned int)(uintptr_t)(a2 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(a2) & 2) == 0 )
  {
    goto LABEL_3;
  }
  result -= 2;
  *v3++ = *v4++;
LABEL_3:
  v5 = 0;
  std::memcpy(v3, v4, 4 * (result >> 2));
  v7 = &v4[2 * (result >> 2)];
  v6 = &v3[2 * (result >> 2)];
  if ( (result & 2) != 0 )
  {
    *v6 = *v7;
    v5 = 1;
  }
  if ( (result & 1) != 0 )
  {
    result = LOBYTE(v7[v5]);
    LOBYTE(v6[v5]) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: mpc_demux_decode  (binary VA: 0xfe3480)
// Original: mpc_demux_decode
// ----------------------------------------------------------------------------
int mpc_demux_decode(uint32_t *a1, int a2)
{
  size_t v2;
  int v3;
  int v4;
  int v5;
  int32_t v6;
  int v7;
  int result;
  int v9;
  char *v10;
  size_t v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char *v18;
  unsigned int v19;
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  size_t v25;
  int v26;
  char *v27;
  size_t v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  int *v32;
  unsigned int v33;
  unsigned int v34;
  int v35;
  int v36;
  int v37;
  int *v38;
  uint64_t v63; // 0:edx.4,4:ecx.4
  typedef int _g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef char *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef const void *_g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef unsigned int _g4_t_v46;
  typedef unsigned int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef size_t _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef char *_g4_t_v56;
  typedef size_t _g4_t_v57;
  typedef unsigned int _g4_t_v58;
  typedef char _g4_t_s1;
  typedef char _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v39)) > _g4_s0 ? (8u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v40)) > _g4_s1 ? (16u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v41)) > _g4_s2 ? (16u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v42)) > _g4_s3 ? (20u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v43)) > _g4_s4 ? (24u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v44)) > _g4_s5 ? (28u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v45)) > _g4_s6 ? (36u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v46)) > _g4_s7 ? (36u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v47)) > _g4_s8 ? (40u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v48)) > _g4_s9 ? (40u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v49)) > _g4_s10 ? (40u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v50)) > _g4_s11 ? (40u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v51)) > _g4_s12 ? (40u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v52)) > _g4_s13 ? (44u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v53)) > _g4_s14 ? (44u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v54)) > _g4_s15 ? (44u + sizeof(_g4_t_v54)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v55)) > _g4_s16 ? (44u + sizeof(_g4_t_v55)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v56)) > _g4_s17 ? (44u + sizeof(_g4_t_v56)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v57)) > _g4_s18 ? (44u + sizeof(_g4_t_v57)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v58)) > _g4_s19 ? (44u + sizeof(_g4_t_v58)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_s1)) > _g4_s20 ? (48u + sizeof(_g4_t_s1)) : _g4_s20,
    _g4_s22 = (49u + sizeof(_g4_t_v60)) > _g4_s21 ? (49u + sizeof(_g4_t_v60)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v61)) > _g4_s22 ? (52u + sizeof(_g4_t_v61)) : _g4_s22,
    _g4_s24 = (56u + sizeof(_g4_t_v62)) > _g4_s23 ? (56u + sizeof(_g4_t_v62)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 20u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 36u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 40u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 44u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 44u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 44u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 44u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 48u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 49u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 52u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 56u);

  if ( a1[4] <= 7u )
  {
    if ( *(uint64_t *)(a1[1] + 24) == 1152
                                  * (*(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10184)->st_name + (uint32_t)(uintptr_t)(a1)) << a1[16480]) )
    {
      v32 = (int *)(a1[16479] + 4 * *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10184)->st_name + (uint32_t)(uintptr_t)(a1)));
      *v32 = mpc_demux_pos(a1);
      ++*(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10184)->st_name + (uint32_t)(uintptr_t)(a1));
    }
    v9 = a1[16476];
    v53 = a1[16474];
    v10 = (char *)a1[16475];
    v11 = (char *)a1 + v53 + 360 - v10 - ((unsigned int)(8 - v9) >> 3);
    if ( v11 <= 0x10FF )
    {
      v47 = (61184 - v11) & 0xFFFFFFFC;
      if ( 61184 - v53 < v47 )
      {
        if ( v9 == 0 )
        {
          ++v10;
          a1[16476] = 8;
          a1[16475] = (uint32_t)(uintptr_t)(v10);
        }
        v58 = (v11 + 3) & 0xFFFFFFFC;
        v41 = (char *)a1 + v58 - v11 + 360;
        memmove(v41, v10, v11);
        a1[16475] = (uint32_t)(uintptr_t)(v41);
        a1[16474] = v58;
        v12 = v58 + 352;
      }
      else
      {
        v12 = v53 + 352;
      }
      v54 = (*(int (**)(uint32_t, unsigned int, unsigned int))*a1)(*a1, (unsigned int)(uintptr_t)(a1) + v12 + 8, v47);
      v13 = a1[16474];
      v14 = (int)(uintptr_t)(a1) + v13 + 360;
      if ( v54 >> 2 != 0 )
      {
        v15 = 0;
        do
        {
          *(uint32_t *)(v14 + 4 * v15) = __builtin_bswap32(*(uint32_t *)(v14 + 4 * v15));
          ++v15;
        }
        while ( v15 != v54 >> 2 );
        v13 = a1[16474];
      }
      v10 = (char *)a1[16475];
      a1[16474] = v54 + v13;
      v9 = a1[16476];
    }
    v16 = v9 - 20;
    v17 = (v9 - 20) & 7;
    a1[16476] = v17;
    v18 = &v10[-(v16 >> 3)];
    v55 = v17;
    a1[16475] = (uint32_t)(uintptr_t)(v18);
    v48 = a1[1];
    v19 = ((((uint8_t)*v18 | ((uint8_t)*(v18 - 1) << 8)) >> v17)
         | ((unsigned int)(((uint8_t)*(v18 - 2) << 16) | ((uint8_t)*(v18 - 3) << 24)) >> v17))
        & 0xFFFFF;
    *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10174)->st_name + (uint32_t)(uintptr_t)(a1)) = v19;
    v63 = *(uint64_t *)(v48 + 16) - 1LL - *(uint64_t *)(v48 + 24);
    if ( v63 <= 0x47F )
      *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10174)->st_name + (uint32_t)(uintptr_t)(a1)) = v19 + 11;
    mpc_decoder_decode_frame(v48, a1 + 16475, a2);
    result = 0;
    if ( *(uint32_t *)(a2 + 4) != -1 )
    {
      v4 = a1[16475];
      v5 = a1[16476];
      if ( *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10174)->st_name + (uint32_t)(uintptr_t)(a1)) != v55 - v5 + 8 * (v4 - (uint32_t)(uintptr_t)(v18)) )
        goto LABEL_33;
      goto LABEL_23;
    }
  }
  else
  {
    v44 = a1 + 16475;
    *(uint8_t *)(a2 + 12) = 0;
    if ( a1[16478] != 0 )
    {
LABEL_3:
      v42 = a1[16474];
      v2 = v42 + 352;
      v39 = a1[16475];
      v43 = (const void *)v39;
      v3 = (int)(uintptr_t)(a1) + v42 - v39 + 360;
      if ( v3 <= 4352 )
      {
        v52 = a1[16476];
        v46 = *(int *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10174)->st_name + (uint32_t)(uintptr_t)(a1)) >> 3;
        v33 = v46 + 1;
        v51 = v3 - ((unsigned int)(8 - v52) >> 3);
        if ( v46 >= 0xEF00 )
          v33 = 61184;
        if ( v51 < v33 )
        {
          v34 = v33 - v51;
          if ( v33 - v51 > 61184 - v42 )
          {
            if ( v52 == 0 )
            {
              v43 = (const void *)(v39 + 1);
              a1[16476] = 8;
              a1[16475] = v39 + 1;
            }
            memmove(a1 + 90, v43, v51);
            a1[16475] = (uint32_t)(uintptr_t)(a1 + 90);
            a1[16474] = v51;
            v2 = v51 + 352;
          }
          v35 = (*(int (**)(uint32_t, size_t, unsigned int))*a1)(*a1, (size_t)a1 + v2 + 8, v34);
          v36 = a1[16476];
          a1[16474] += v35;
          v52 = v36;
          v39 = a1[16475];
        }
      }
      else
      {
        v52 = a1[16476];
      }
      mpc_decoder_decode_frame(a1[1], v44, a2);
      v4 = a1[16475];
      v5 = a1[16476];
      v6 = *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10174)->st_name + (uint32_t)(uintptr_t)(a1)) + v5 - v52 - 8 * (v4 - v39);
      v7 = a1[16478] - 1;
      *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10174)->st_name + (uint32_t)(uintptr_t)(a1)) = v6;
      a1[16478] = v7;
      if ( v6 >= 0 && (v7 != 0 || v6 <= 7) )
      {
        result = 0;
        if ( *(uint32_t *)(a2 + 4) == -1 )
          return result;
LABEL_23:
        result = 0;
        if ( (unsigned int)(uintptr_t)(a1) + a1[16474] + 360 >= ((unsigned int)(8 - v5) >> 3) + v4 )
          return result;
      }
LABEL_33:
      *(uint32_t *)(a2 + 4) = -1;
      return -6;
    }
    v49 = *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10184)->st_name + (uint32_t)(uintptr_t)(a1));
    v21 = a1[1];
    v22 = v49 << *((uint8_t *)a1 + 65920);
    v23 = a1[16476] & 0xFFFFFFF8;
    a1[16476] = v23;
    s1 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    if ( *(uint64_t *)(v21 + 24) == 1152 * v22 )
    {
      v38 = (int *)(a1[16479] + 4 * v49);
      *v38 = mpc_demux_pos(a1);
      ++*(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10184)->st_name + (uint32_t)(uintptr_t)(a1));
      v23 = a1[16476];
    }
    v56 = (char *)a1[16475];
    v24 = a1[16474] + 352;
    v25 = (char *)a1 + v24 + 8 - v56 - ((8 - v23) >> 3);
    if ( v25 <= 0xA )
    {
      if ( 11 - v25 > 61184 - a1[16474] )
      {
        if ( v23 == 0 )
        {
          ++v56;
          a1[16476] = 8;
          a1[16475] = (uint32_t)(uintptr_t)(v56);
        }
        memmove(a1 + 90, v56, v25);
        a1[16474] = v25;
        a1[16475] = (uint32_t)(uintptr_t)(a1 + 90);
        v24 = v25 + 352;
      }
      a1[16474] += (*(int (**)(uint32_t, int, size_t))*a1)(*a1, (int)(uintptr_t)(a1) + v24 + 8, 11 - v25);
    }
    v44 = a1 + 16475;
    mpc_bits_get_block(a1 + 16475, &s1);
    while ( 1 )
    {
      if ( memcmp(&s1, "AP", 2u) == 0 )
      {
        v37 = a1[11];
        *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10174)->st_name + (uint32_t)(uintptr_t)(a1)) = 8 * v61;
        a1[16478] = 1 << v37;
        *(uint8_t *)(a2 + 12) = 1;
        goto LABEL_3;
      }
      if ( (uint8_t)(s1 - 65) > 0x19u || v60 <= 64 || v60 > 90 )
        goto LABEL_33;
      if ( memcmp(&s1, "SE", 2u) == 0 )
        break;
      v26 = v61;
      v50 = a1[16474];
      v57 = v50 + 352;
      v27 = (char *)a1[16475];
      v45 = a1[16476];
      v28 = (char *)a1 + v50 + 360 - v27 - ((unsigned int)(8 - v45) >> 3);
      v29 = 61184;
      if ( (unsigned int)(v61 + 10) <= 0xEEFF )
        v29 = v61 + 11;
      if ( v28 < v29 )
      {
        v30 = v29 - v28;
        if ( v29 - v28 > 61184 - v50 )
        {
          if ( v45 == 0 )
          {
            ++v27;
            a1[16476] = 8;
            a1[16475] = (uint32_t)(uintptr_t)(v27);
          }
          v40 = v29 - v28;
          memmove(a1 + 90, v27, v28);
          a1[16474] = v28;
          a1[16475] = (uint32_t)(uintptr_t)(a1 + 90);
          v57 = v28 + 352;
          v30 = v40;
        }
        v31 = (*(int (**)(uint32_t, size_t, unsigned int))*a1)(*a1, (size_t)a1 + v57 + 8, v30);
        a1[16474] += v31;
        if ( v31 == 0 )
          goto LABEL_33;
        v27 = (char *)a1[16475];
        v26 = v61;
      }
      a1[16475] = (uint32_t)(uintptr_t)(&v27[v26]);
      mpc_bits_get_block(v44, &s1);
    }
    *(uint32_t *)(a2 + 4) = -1;
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: mpc_demux_seek_sample  (binary VA: 0xfe3c80)
// Original: mpc_demux_seek_sample
// ----------------------------------------------------------------------------
int mpc_demux_seek_sample(uint32_t *a1, int64_t a2, int a3, int a4, int64_t a5, int a6, unsigned int a7, int a8, unsigned int a9, int64_t a10, int a11, int a12, char s1, int a14)
{
  int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  int v20;
  bool v21;
  int v22;
  int i;
  int v24;
  int v25;
  unsigned int v26;
  bool v27; // cc
  unsigned int v28;
  uint32_t *v29;
  unsigned int v30;
  unsigned int v31;
  int v32;
  unsigned int v33;
  int v34;
  unsigned int v35;
  unsigned int v36;
  uint32_t *v37;
  int v38;
  int v39;
  unsigned int v40;
  unsigned int v41;
  uint32_t *v42;
  int v43;
  int v44;
  int v45;
  uint8_t *v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  int v50;
  unsigned int v51;
  int v52;
  unsigned int v53;
  unsigned int v54;
  int v55;
  int v56;
  unsigned int v57;
  unsigned int v58;
  int v59;
  int v60;
  int *v62;
  int v63;
  int v64;
  unsigned int v65;
  unsigned int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int64_t v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  uint64_t v78;
  int v79;
  unsigned int v80;
  int v81;
  unsigned int v82;
  int v83;
  int v84;
  unsigned int v85;
  int v86;
  unsigned int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  uint32_t *v92;
  int v93;
  int v94;
  unsigned int v95;
  unsigned int v96;
  unsigned int v97;
  unsigned int v98;
  int v99;
  int v100;
  int v101;
  unsigned int v102;
  unsigned int v103;
  unsigned int v104;
  unsigned int v105;
  int64_t v106;
  int64_t v107;
  void *v108;
  void *v109;
  uint64_t v110; // 0:ecx.4,4:esi.4

  v85 = 1152 << a1[11];
  v86 = a1[11];
  v83 = a1[15];
  v110 = *(uint64_t *)(a1 + 17) + a2;
  if ( (uint64_t)(*(uint64_t *)(a1 + 17) + a2) > *(uint64_t *)(a1 + 15) )
    v110 = *(uint64_t *)(a1 + 15);
  v78 =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(v85), 0);
  v73 = v110;
  v80 = v110 / v78;
  v75 = v110 % v78 + 481;
  if ( a1[4] != 7 )
    goto LABEL_3;
  if ( v80 > 0x20 )
  {
    v80 -= 32;
    v75 = v110 % v78 + 37345;
LABEL_3:
    v16 = a1[16480] - v86;
    v17 = v80 >> v16;
    goto LABEL_4;
  }
  v80 = 0;
  v64 = 9 * (v110 / v78);
  v16 = a1[16480] - v86;
  v75 += v64 << 7;
  v17 = 0;
LABEL_4:
  v18 = *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10184)->st_name + (uint32_t)(uintptr_t)(a1));
  if ( v18 <= v17 )
    v17 = v18 - 1;
  v87 = *(uint32_t *)(a1[16479] + 4 * v17);
  v82 = v17 << v16;
  v19 = a1[1];
  *(uint32_t *)(v19 + 28) = 0;
  *(uint32_t *)(v19 + 24) = v85 * (v17 << v16);
  if ( a1[4] <= 7u )
  {
    mpc_decoder_reset_scf(a1[1], v80 != 0);
    v31 = v87 >> 3;
    if ( a1[4] == 7 )
      v31 = a1[87] + ((v31 - a1[87]) & 0xFFFFFFFC);
    (*(void (**)(uint32_t, unsigned int, uint32_t, uint32_t, int, unsigned int, int, int, int, int, uint32_t, uint32_t, int, unsigned int, int, unsigned int, int, int, unsigned int, unsigned int, int, int, int, int))(*a1 + 4))(
      *a1,
      v31,
      v71,
      HIDWORD(v71),
      v72,
      v87 - 8 * v31,
      v74,
      v75,
      v76,
      v77,
      v78,
      HIDWORD(v78),
      v79,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85,
      v87,
      v88,
      v89,
      v90,
      v91);
    v21 = a1[4] == 7;
    a1[16474] = 0;
    a1[16475] = (uint32_t)(uintptr_t)(a1 + 90);
    a1[16476] = 8;
    *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10174)->st_name + (uint32_t)(uintptr_t)(a1)) = 0;
    a1[16478] = 0;
    v109 = a1 + 90;
    v32 = (int)(uintptr_t)(a1);
    if ( v21 )
    {
      v65 = ((((int)(uintptr_t)(a1) + 7) >> 3) + 7) & 0xFFFFFFFC;
      if ( v65 - 1 >= 0xEF00 )
        v65 = 61184;
      v66 = v65 & 0xFFFFFFFC;
      if ( (v65 & 0xFFFFFFFC) > 0xEF00 )
      {
        memmove(a1 + 90, a1 + 90, 0);
        a1[16474] = 0;
        a1[16475] = (uint32_t)(uintptr_t)(v109);
        v32 = (int)(uintptr_t)(a1);
      }
      v93 = v32;
      v104 = (*(int (**)(uint32_t, uint32_t *, unsigned int))*a1)(*a1, a1 + 90, v66);
      v67 = a1[16474];
      v32 = v93;
      if ( v104 >> 2 != 0 )
      {
        v68 = 0;
        do
        {
          *(uint32_t *)((char *)&a1[v68 + 90] + v67) = __builtin_bswap32(*(uint32_t *)((char *)&a1[v68 + 90] + v67));
          ++v68;
        }
        while ( v68 != v104 >> 2 );
        v67 = a1[16474];
      }
      a1[16474] = v104 + v67;
      v37 = (uint32_t *)a1[16475];
    }
    else
    {
      v33 = 61184;
      v34 = ((int)(uintptr_t)(a1) + 7) >> 3;
      v35 = v34 + 3;
      v36 = v34 + 4;
      if ( v35 <= 0xEEFF )
        v33 = v36;
      v37 = a1 + 90;
      if ( v33 != 0 )
      {
        if ( v33 > 0xEF00 )
        {
          memmove(v109, v109, 0);
          a1[16474] = 0;
          a1[16475] = (uint32_t)(uintptr_t)(v109);
          v32 = (int)(uintptr_t)(a1);
        }
        v94 = v32;
        a1[16474] += (*(int (**)(uint32_t, uint32_t *, unsigned int))*a1)(*a1, a1 + 90, v33);
        v37 = (uint32_t *)a1[16475];
        v32 = v94;
      }
    }
    a1[16475] = (uint32_t)(uintptr_t)((char *)v37 + (v32 >> 3));
    for ( a1[16476] = 8 - (v32 & 7); a7 > a9; a1[16476] = 8 - (v38 & 7) )
    {
      v43 = a1[1];
      v107 = *(uint64_t *)(v43 + 24);
      v101 = *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10184)->st_name + (uint32_t)(uintptr_t)(a1));
      if ( v107 == 1152 * (v101 << a1[16480]) )
      {
        v62 = (int *)(a1[16479] + 4 * v101);
        *v62 = mpc_demux_pos(a1);
        v43 = a1[1];
        ++*(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10184)->st_name + (uint32_t)(uintptr_t)(a1));
        v107 = *(uint64_t *)(v43 + 24);
      }
      *(uint64_t *)(v43 + 24) = a5 + v107;
      v44 = a1[16475];
      v45 = a1[16476] - 20;
      a1[16476] = v45 & 7;
      v46 = (uint8_t *)(v44 - (v45 >> 3));
      a1[16475] = (uint32_t)(uintptr_t)(v46);
      v47 = a12
          + ((((*v46 | (*(v46 - 1) << 8)) >> (v45 & 7))
            | ((unsigned int)((*(v46 - 2) << 16) | (*(v46 - 3) << 24)) >> (v45 & 7)))
           & 0xFFFFF)
          + 20;
      v48 = v47 >> 3;
      a12 = v47;
      if ( a1[4] == 7 )
        v48 = a1[87] + ((v48 - a1[87]) & 0xFFFFFFFC);
      v38 = v47 - 8 * v48;
      (*(void (**)(uint32_t, unsigned int))(*a1 + 4))(*a1, v48);
      a1[16474] = 0;
      a1[16475] = (uint32_t)(uintptr_t)(v109);
      a1[16476] = 8;
      *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10174)->st_name + (uint32_t)(uintptr_t)(a1)) = 0;
      v39 = (v38 + 7) >> 3;
      v21 = a1[4] == 7;
      a1[16478] = 0;
      if ( v21 )
      {
        v57 = (v39 + 7) & 0xFFFFFFFC;
        if ( v57 - 1 >= 0xEF00 )
          v57 = 61184;
        v58 = v57 & 0xFFFFFFFC;
        if ( (v57 & 0xFFFFFFFC) > 0xEF00 )
        {
          v97 = v57 & 0xFFFFFFFC;
          memmove(a1 + 90, v109, 0);
          a1[16474] = 0;
          a1[16475] = (uint32_t)(uintptr_t)(a1 + 90);
          v58 = v97;
        }
        v103 = (*(int (**)(uint32_t, uint32_t *, unsigned int))*a1)(*a1, a1 + 90, v58);
        v59 = a1[16474];
        if ( v103 >> 2 != 0 )
        {
          v60 = 0;
          do
          {
            *(uint32_t *)((char *)&a1[v60 + 90] + v59) = __builtin_bswap32(*(uint32_t *)((char *)&a1[v60 + 90] + v59));
            ++v60;
          }
          while ( v60 != v103 >> 2 );
          v59 = a1[16474];
        }
        v42 = (uint32_t *)a1[16475];
        a1[16474] = v103 + v59;
      }
      else
      {
        v40 = v39 + 4;
        v27 = (unsigned int)(v39 + 3) <= 0xEEFF;
        v41 = 61184;
        v42 = a1 + 90;
        if ( v27 )
          v41 = v40;
        if ( v41 != 0 )
        {
          v49 = v41;
          if ( v41 > 0xEF00 )
          {
            v95 = v41;
            memmove(v109, v109, 0);
            a1[16474] = 0;
            a1[16475] = (uint32_t)(uintptr_t)(v109);
            v49 = v95;
          }
          v50 = (*(int (**)(uint32_t, uint32_t *, unsigned int))*a1)(*a1, a1 + 90, v49);
          v42 = (uint32_t *)a1[16475];
          a1[16474] += v50;
        }
      }
      ++a9;
      a1[16475] = (uint32_t)(uintptr_t)((char *)v42 + (v38 >> 3));
    }
  }
  else
  {
    v20 = v87 & 7;
    (*(void (**)(uint32_t, unsigned int, uint32_t, uint32_t, int, int, int, int, int, int, uint32_t, uint32_t, int, unsigned int, int, unsigned int, int, int, unsigned int, unsigned int, int, int, int, int))(*a1 + 4))(
      *a1,
      v87 >> 3,
      v71,
      HIDWORD(v71),
      v72,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78,
      HIDWORD(v78),
      v79,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85,
      v87,
      v88,
      v89,
      v90,
      v91);
    v21 = a1[4] == 7;
    a1[16474] = 0;
    v108 = a1 + 90;
    a1[16475] = (uint32_t)(uintptr_t)(a1 + 90);
    a1[16476] = 8;
    *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10174)->st_name + (uint32_t)(uintptr_t)(a1)) = 0;
    a1[16478] = 0;
    if ( v21 )
    {
      v105 = (*(int (**)(uint32_t, uint32_t *, int))*a1)(*a1, a1 + 90, 12);
      v69 = a1[16474];
      if ( v105 >> 2 != 0 )
      {
        v70 = 0;
        do
        {
          *(uint32_t *)((char *)&a1[v70 + 90] + v69) = __builtin_bswap32(*(uint32_t *)((char *)&a1[v70 + 90] + v69));
          ++v70;
        }
        while ( v70 != v105 >> 2 );
        v69 = a1[16474];
      }
      a1[16474] = v105 + v69;
      v22 = a1[16475];
    }
    else
    {
      a1[16474] += (*(int (**)(uint32_t, uint32_t *, int))*a1)(*a1, a1 + 90, ((v20 + 7) >> 3) + 11);
      v22 = a1[16475];
    }
    a1[16475] = v22;
    a1[16476] = 8 - v20;
    for ( i = mpc_bits_get_block(a1 + 16475, &s1); a7 > a9; i = mpc_bits_get_block(a1 + 16475, &s1) )
    {
      if ( memcmp(&s1, "AP", 2u) == 0 )
      {
        v100 = a1[1];
        v106 = *(uint64_t *)(v100 + 24);
        v99 = *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10184)->st_name + (uint32_t)(uintptr_t)(a1));
        if ( v106 == 1152 * (v99 << a1[16480]) )
        {
          v92 = (uint32_t *)(a1[16479] + 4 * v99);
          *v92 = mpc_demux_pos(a1) - 8 * i;
          v63 = a1[1];
          ++*(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10184)->st_name + (uint32_t)(uintptr_t)(a1));
          v100 = v63;
          v106 = *(uint64_t *)(v63 + 24);
        }
        ++a9;
        *(uint64_t *)(v100 + 24) = a5 + v106;
      }
      v30 = (unsigned int)(a12 + 8 * (a14 + i)) >> 3;
      a12 += 8 * (a14 + i);
      if ( a1[4] == 7 )
        v30 = a1[87] + ((v30 - a1[87]) & 0xFFFFFFFC);
      v24 = a12 - 8 * v30;
      (*(void (**)(uint32_t, unsigned int))(*a1 + 4))(*a1, v30);
      a1[16474] = 0;
      a1[16475] = (uint32_t)(uintptr_t)(v108);
      a1[16476] = 8;
      *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_10174)->st_name + (uint32_t)(uintptr_t)(a1)) = 0;
      v25 = (v24 + 7) >> 3;
      v21 = a1[4] == 7;
      a1[16478] = 0;
      if ( v21 )
      {
        v53 = (v25 + 14) & 0xFFFFFFFC;
        if ( v53 - 1 >= 0xEF00 )
          v53 = 61184;
        v54 = v53 & 0xFFFFFFFC;
        if ( (v53 & 0xFFFFFFFC) > 0xEF00 )
        {
          v98 = v53 & 0xFFFFFFFC;
          memmove(a1 + 90, v108, 0);
          a1[16474] = 0;
          a1[16475] = (uint32_t)(uintptr_t)(a1 + 90);
          v54 = v98;
        }
        v102 = (*(int (**)(uint32_t, uint32_t *, unsigned int))*a1)(*a1, a1 + 90, v54);
        v55 = a1[16474];
        if ( v102 >> 2 != 0 )
        {
          v56 = 0;
          do
          {
            *(uint32_t *)((char *)&a1[v56 + 90] + v55) = __builtin_bswap32(*(uint32_t *)((char *)&a1[v56 + 90] + v55));
            ++v56;
          }
          while ( v56 != v102 >> 2 );
          v55 = a1[16474];
        }
        v29 = (uint32_t *)a1[16475];
        a1[16474] = v102 + v55;
      }
      else
      {
        v26 = v25 + 11;
        v27 = (unsigned int)(v25 + 10) <= 0xEEFF;
        v28 = 61184;
        v29 = a1 + 90;
        if ( v27 )
          v28 = v26;
        if ( v28 != 0 )
        {
          v51 = v28;
          if ( v28 > 0xEF00 )
          {
            v96 = v28;
            memmove(v108, v108, 0);
            a1[16474] = 0;
            a1[16475] = (uint32_t)(uintptr_t)(v108);
            v51 = v96;
          }
          v52 = (*(int (**)(uint32_t, uint32_t *, unsigned int))*a1)(*a1, a1 + 90, v51);
          v29 = (uint32_t *)a1[16475];
          a1[16474] += v52;
        }
      }
      a1[16475] = (uint32_t)(uintptr_t)((char *)v29 + (v24 >> 3));
      a1[16476] = 8 - (v24 & 7);
    }
    a1[16475] -= i;
  }
  *(uint32_t *)(a1[1] + 32) = HIDWORD(a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: mpc_set_replay_level  (binary VA: 0xfe47d0)
// Original: mpc_set_replay_level
// ----------------------------------------------------------------------------
int mpc_set_replay_level(int a1, float a2, uint8_t a3, char a4, uint8_t a5)
{
  uint8_t v5;
  int result;
  float v7; // xmm0_4
  int v8;
  float v9; // xmm1_4
  float v10; // xmm3_4
  float v11; // xmm0_4
  double v12; // xmm3_8
  char v13;
  uint8_t v14;

  v5 = a3;
  result = a5;
  if ( a4 != 0 )
  {
    v7 = (float)*(uint16_t *)(a1 + 54);
    v8 = *(uint16_t *)(a1 + 48);
  }
  else
  {
    v7 = (float)*(uint16_t *)(a1 + 52);
    v8 = *(uint16_t *)(a1 + 50);
  }
  v9 = (float)v8;
  if ( (a3 | a5) != 0 )
  {
    v10 = 1.0;
    if ( v7 == 0.0 )
    {
      v11 = 1.0;
      if ( v9 == 0.0 )
        goto LABEL_6;
    }
    else
    {
      v12 = pow(10.0, -(float)(v7 * 0.0001953125f)) * 32768.0;
      v5 = a3;
      LOBYTE(result) = a5;
      v11 = 1.0;
      v10 = v12;
      if ( v9 == 0.0 )
      {
LABEL_6:
        if ( (uint8_t)result == 0 )
          return mpc_decoder_scale_output(*(uint32_t *)(a1 + 4), COERCE__INT64(v11));
LABEL_10:
        if ( v11 > v10 || v5 == 0 )
          v11 = v10;
        return mpc_decoder_scale_output(*(uint32_t *)(a1 + 4), COERCE__INT64(v11));
      }
    }
    v13 = result;
    v14 = v5;
    v11 = pow(10.0, (float)((float)(a2 - (float)(v9 * 0.00390625)) * 0.05f));
    v5 = v14;
    if ( v13 == 0 )
      return mpc_decoder_scale_output(*(uint32_t *)(a1 + 4), COERCE__INT64(v11));
    goto LABEL_10;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: mpc_decoder_scale_output  (binary VA: 0xfe49d0)
// Original: mpc_decoder_scale_output
// ----------------------------------------------------------------------------
int64_t mpc_decoder_scale_output(int a1, double a2)
{
  int v2;
  float v3; // xmm1_4
  double v4; // xmm1_8
  int64_t result; // xmm0_8
  float v6; // xmm4_4
  float v7; // xmm4_4
  int v8;

  v2 = 0;
  v3 = 0.000030517578125 * a2;
  *(float *)(a1 + 41364) = v3;
  v4 = 0.000030517578125 * a2 * 0.8329806647658268;
  *(double *)&result = 0.000030517578125 * a2 * 1.2005080577484075;
  do
  {
    v6 = v4;
    *(float *)(a1 + 4 * v2 + 41368) = v6;
    v7 = *(double *)&result;
    v8 = -v2++;
    *(float *)(a1 + 4 * (uint8_t)v8 + 41360) = v7;
    v4 = v4 * 0.8329806647658268;
    *(double *)&result = *(double *)&result * 1.2005080577484075;
  }
  while ( v2 != 128 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: mpc_decoder_init_quant  (binary VA: 0xfe4a50)
// Original: mpc_decoder_init_quant
// ----------------------------------------------------------------------------
int64_t mpc_decoder_init_quant(int a1, double a2)
{
  return mpc_decoder_scale_output(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: mpc_streaminfo_get_length  (binary VA: 0xfe58e0)
// Original: mpc_streaminfo_get_length
// ----------------------------------------------------------------------------
long double mpc_streaminfo_get_length(int a1)
{
  int64_t v1; // rax
  long double v2; // fst7

  v1 = *(uint64_t *)(a1 + 52) - *(uint64_t *)(a1 + 60);
  v2 = (long double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v1), _mm_cvtsi32_si128(HIDWORD(v1))), 0);
  if ( v1 < 0 )
    v2 = v2 + 1.8446744e19f;
  return (double)v2 / (double)*(unsigned int *)a1;
}

// ----------------------------------------------------------------------------
// Function: mpc_streaminfo_get_length_samples  (binary VA: 0xfe5950)
// Original: mpc_streaminfo_get_length_samples
// ----------------------------------------------------------------------------
int64_t mpc_streaminfo_get_length_samples(int a1)
{
  return *(uint64_t *)(a1 + 52) - *(uint64_t *)(a1 + 60);
}

// ----------------------------------------------------------------------------
// Function: mpc_bits_golomb_dec  (binary VA: 0x10411f0)
// Original: mpc_bits_golomb_dec
// ----------------------------------------------------------------------------
int mpc_bits_golomb_dec(uint8_t **a1, unsigned int a2)
{
  int v2;
  int v3;
  uint8_t *v4;
  unsigned int v5;
  int i;
  int v7;
  uint8_t *v8;
  uint8_t *v9;
  unsigned int v11;
  int v12;

  v2 = 0;
  v3 = (int)(uintptr_t)(a1[1]);
  v4 = *a1;
  v5 = ((1 << v3) - 1) & **a1;
  if ( v5 != 0 )
  {
    v11 = v3 - 1;
    v12 = 1 << (v3 - 1);
  }
  else
  {
    while ( 1 )
    {
      *a1 = ++v4;
      v5 = *v4;
      v2 += v3;
      a1[1] = (uint8_t *)byte_8;
      if ( v5 != 0 )
        break;
      v3 = 8;
    }
    v12 = 128;
    v11 = 7;
    v3 = 8;
  }
  if ( (v5 & v12) == 0 )
  {
    for ( i = v3; ; i = v7 )
    {
      v7 = i - 1;
      v11 = i - 2;
      ++v2;
      if ( (v5 & (1 << v11)) != 0 )
        break;
    }
  }
  a1[1] = (uint8_t *)v11;
  if ( a2 > v11 )
  {
    v8 = *a1;
    do
    {
      ++v8;
      v11 += 8;
      *a1 = v8;
      a1[1] = (uint8_t *)v11;
      v5 = (v5 << 8) | *v8;
    }
    while ( a2 > v11 );
  }
  v9 = (uint8_t *)(v11 - a2);
  a1[1] = v9;
  return (v2 << a2) | ((1 << a2) - 1) & (v5 >> (char)(uintptr_t)(v9));
}

// ----------------------------------------------------------------------------
// Function: mpc_bits_log_dec  (binary VA: 0x10412e0)
// Original: mpc_bits_log_dec
// ----------------------------------------------------------------------------
unsigned int mpc_bits_log_dec(int *a1, int a2)
{
  unsigned int result;
  uint8_t v3;
  int v4;
  uint8_t *v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  uint8_t *v10;
  char v11;
  unsigned int v12;

  result = 0;
  v3 = byte_1CC0B00[a2 - 1];
  if ( v3 > 1u )
  {
    v12 = v3 - 1;
    v4 = a1[1] - v12;
    v11 = v4 & 7;
    v5 = (uint8_t *)(*a1 - (v4 >> 3));
    a1[1] = v4 & 7;
    *a1 = (int)(uintptr_t)(v5);
    v6 = (*v5 | (*(v5 - 1) << 8)) >> (v4 & 7);
    if ( v12 > 16 - (v4 & 7u) )
    {
      v6 |= (unsigned int)((*(v5 - 2) << 16) | (*(v5 - 3) << 24)) >> v11;
      if ( v12 > 0x18 && (v4 & 7) != 0 )
        v6 |= *(v5 - 4) << (32 - v11);
    }
    result = v6 & ((1 << v12) - 1);
  }
  v7 = (uint8_t)byte_1CC0B20[a2 - 1];
  if ( result >= v7 )
  {
    v8 = *a1;
    v9 = a1[1] - 1;
    a1[1] = v9 & 7;
    v10 = (uint8_t *)(v8 - (v9 >> 3));
    *a1 = (int)(uintptr_t)(v10);
    return (((*v10 | (*(v10 - 1) << 8)) >> (v9 & 7)) & 1 | (2 * result)) - v7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: mpc_bits_get_size  (binary VA: 0x1041400)
// Original: mpc_bits_get_size
// ----------------------------------------------------------------------------
int mpc_bits_get_size(uint8_t **a1, uint64_t *a2)
{
  uint8_t *v2;
  int v3;
  uint64_t v5;
  int v6;

  v6 = 0;
  v5 = 0;
  v2 = *a1;
  v3 = (int)(uintptr_t)(a1[1]);
  do
  {
    v2 -= (v3 - 8) >> 3;
    v3 = ((uint8_t)v3 - 8) & 7;
    *a1 = v2;
    a1[1] = (uint8_t *)v3;
    ++v6;
    HIDWORD(v5) = v5 >> 25;
    LODWORD(v5) = ((uint32_t)v5 << 7) | ((*v2 | (*(v2 - 1) << 8)) >> v3) & 0x7F;
  }
  while ( (((*v2 | (*(v2 - 1) << 8)) >> v3) & 0x80u) != 0 );
  *a2 = v5;
  return v6;
}

// ----------------------------------------------------------------------------
// Function: mpc_bits_get_block  (binary VA: 0x10414a0)
// Original: mpc_bits_get_block
// ----------------------------------------------------------------------------
int mpc_bits_get_block(int a1, int a2)
{
  uint8_t *v2;
  int v3;
  uint8_t *v4;
  uint8_t *v5;
  int v6;
  uint8_t *v7;
  int v8;
  uint64_t v11; // 0:edi.4,4:ebp.4

  *(uint32_t *)(a2 + 4) = 0;
  *(uint32_t *)(a2 + 8) = 0;
  v2 = *(uint8_t **)a1;
  v3 = *(uint32_t *)(a1 + 4) - 8;
  *(uint32_t *)(a1 + 4) = v3 & 7;
  v4 = &v2[-(v3 >> 3)];
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
  *(uint8_t *)a2 = (*v4 | (*(v4 - 1) << 8)) >> (v3 & 7);
  v5 = *(uint8_t **)a1;
  v6 = *(uint32_t *)(a1 + 4) - 8;
  *(uint32_t *)(a1 + 4) = v6 & 7;
  v7 = &v5[-(v6 >> 3)];
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v7);
  *(uint8_t *)(a2 + 1) = (*v7 | (*(v7 - 1) << 8)) >> (v6 & 7);
  v8 = mpc_bits_get_size((uint8_t **)a1, (uint64_t *)(a2 + 4)) + 2;
  v11 = *(uint64_t *)(a2 + 4);
  if ( v11 >= v8 )
    *(uint64_t *)(a2 + 4) = v11 - v8;
  return v8;
}

// ----------------------------------------------------------------------------
// Function: mpc_decoder_reset_scf  (binary VA: 0x1041580)
// Original: mpc_decoder_reset_scf
// ----------------------------------------------------------------------------
unsigned int mpc_decoder_reset_scf(uint16_t *a1, uint8_t a2)
{
  unsigned int v2;
  int v3;
  uint16_t *v4;
  unsigned int v5;
  unsigned int v6;
  uint16_t *v7;
  unsigned int i;
  uint16_t *v9;
  unsigned int v10;
  unsigned int result;
  unsigned int v12;
  unsigned int v13;
  uint16_t *v14;

  v2 = 384;
  v3 = 16843009 * a2;
  v4 = a1 + 24;
  if ( ((unsigned int)(uintptr_t)(a1 + 24) & 1) != 0 )
  {
    v4 = (uint16_t *)((char *)a1 + 49);
    *((uint8_t *)a1 + 48) = a2;
    LOBYTE(v2) = 127;
    if ( (((unsigned int)(uintptr_t)(a1) + 49) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(v4) & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v4 = v3;
  v2 -= 2;
  ++v4;
LABEL_3:
  v5 = v2 >> 2;
  v6 = v2 & 3;
  memset32(v4, v3, v5);
  v7 = &v4[2 * v5];
  if ( v6 != 0 )
  {
    for ( i = 0; i < v6; ++i )
      *((uint8_t *)v7 + i) = a2;
  }
  v9 = a1 + 216;
  v10 = 384;
  result = 16843009 * a2;
  if ( ((unsigned int)(uintptr_t)(a1 + 216) & 1) != 0 )
  {
    *((uint8_t *)a1 + 432) = a2;
    v9 = (uint16_t *)((char *)a1 + 433);
    LOBYTE(v10) = 127;
  }
  if ( ((uint8_t)(uintptr_t)(v9) & 2) != 0 )
  {
    *v9 = result;
    v10 -= 2;
    ++v9;
  }
  v12 = v10 >> 2;
  v13 = v10 & 3;
  memset32(v9, result, v12);
  v14 = &v9[2 * v12];
  if ( v13 != 0 )
  {
    for ( result = 0; result < v13; ++result )
      *((uint8_t *)v14 + result) = a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: mpc_decoder_setup  (binary VA: 0x1041660)
// Original: mpc_decoder_setup
// ----------------------------------------------------------------------------
int64_t mpc_decoder_setup(void *s)
{
  memset(s, 0, 0xA590u);
  *((uint32_t *)s + 10) = 1;
  *((uint32_t *)s + 11) = 1;
  return mpc_decoder_init_quant((int)(uintptr_t)(s), 1.0);
}

// ----------------------------------------------------------------------------
// Function: mpc_decoder_set_streaminfo  (binary VA: 0x10416d0)
// Original: mpc_decoder_set_streaminfo
// ----------------------------------------------------------------------------
int mpc_decoder_set_streaminfo(uint32_t *a1, int a2)
{
  int64_t v2; // rax
  uint64_t v3; // rax
  int v4;

  *a1 = *(uint32_t *)(a2 + 8);
  a1[2] = *(uint32_t *)(a2 + 28);
  a1[1] = *(uint32_t *)(a2 + 24);
  a1[3] = *(uint32_t *)(a2 + 4);
  a1[8] = *(uint32_t *)(a2 + 60) + 481;
  if ( *(uint32_t *)(a2 + 8) == 7 && *(uint32_t *)(a2 + 48) != 0 )
  {
    v3 = (*(uint64_t *)(a2 + 52) + 1151LL) / 0x480uLL;
    v4 = 1152 * HIDWORD(v3);
    v2 = 1152LL * (unsigned int)v3;
    a1[4] = v2;
    a1[5] = v4 + HIDWORD(v2);
  }
  else
  {
    v2 = *(uint64_t *)(a2 + 52);
    *((uint64_t *)a1 + 2) = v2;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: mpc_decoder_init  (binary VA: 0x1041790)
// Original: mpc_decoder_init
// ----------------------------------------------------------------------------
void * mpc_decoder_init(int a1)
{
  void *v1;
  void *v2;

  v1 = (void *)VoxAlloc_c(0xA590u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/mpc/mpc_decoder.c"), (int)(uintptr_t)("mpc_decoder_init"), 117);
  v2 = v1;
  if ( v1 != nullptr )
  {
    mpc_decoder_setup(v1);
    mpc_decoder_set_streaminfo(v2, a1);
    huff_init_lut(6);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: mpc_decoder_exit  (binary VA: 0x1041810)
// Original: mpc_decoder_exit
// ----------------------------------------------------------------------------
int mpc_decoder_exit(int a1)
{
  return VoxFree_c(a1);
}

// ----------------------------------------------------------------------------
// Function: mpc_decoder_read_bitstream_sv7  (binary VA: 0x1041840)
// Original: mpc_decoder_read_bitstream_sv7
// ----------------------------------------------------------------------------
int16_t mpc_decoder_read_bitstream_sv7(int a1, uint8_t **a2)
{
  uint8_t *v2;
  int v3;
  uint8_t *v4;
  uint8_t *v5;
  int v6;
  uint8_t *v7;
  int v8;
  int k;
  int v10;
  char *v11;
  uint8_t v12;
  char v13;
  char *i;
  uint8_t *v15;
  uint8_t *v16;
  int v17;
  int v18;
  int *v19;
  int v20;
  int v21;
  char *v22;
  uint8_t v23;
  char v24;
  char *j;
  uint8_t *v26;
  uint8_t *v27;
  int v28;
  int v29;
  int *v30;
  int v31;
  uint32_t *v32;
  int v33;
  char *v34;
  int v35;
  char *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  char *v41;
  char *m;
  uint8_t *v43;
  int v44;
  int v45;
  int v46;
  uint8_t v47;
  char *v48;
  char *n;
  uint8_t *v50;
  int v51;
  int v52;
  int v53;
  char *v54;
  uint8_t v55;
  uint8_t v56;
  char *ii;
  uint8_t *v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  uint8_t *v64;
  int v65;
  uint8_t *v66;
  int v67;
  int v68;
  uint8_t *v69;
  int v70;
  int v71;
  int v72;
  uint8_t *v73;
  int v74;
  uint8_t *v75;
  int v76;
  uint8_t *v77;
  uint8_t **v78;
  int v79;
  int v80;
  uint8_t v81;
  char *v82;
  char *nn;
  uint8_t *v84;
  int v85;
  int v86;
  uint8_t v87;
  char *v88;
  char *jj;
  uint8_t *v90;
  int v91;
  int v92;
  int v93;
  char *v94;
  uint8_t v95;
  char v96;
  char *kk;
  uint8_t *v98;
  int v99;
  int v100;
  int v101;
  uint8_t v102;
  char *v103;
  char *mm;
  uint8_t *v105;
  int v106;
  int v107;
  int v108;
  char *v109;
  int v110;
  int v111;
  int v112;
  uint8_t *v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  uint8_t *v119;
  int v120;
  int v121;
  int v122;
  uint8_t *v123;
  int v124;
  int v125;
  int v126;
  uint8_t *v127;
  int v128;
  int v129;
  int v130;
  uint8_t *v131;
  int v132;
  int v133;
  int v134;
  uint8_t *v135;
  int v136;
  int v137;
  uint8_t *v138;
  int i1;
  unsigned int v140;
  unsigned int v141;
  int v142;
  uint8_t *v143;
  uint8_t *v144;
  int v145;
  uint8_t v146;
  char v147;
  uint8_t *v148;
  int v149;
  uint8_t v150;
  int v151;
  uint8_t *v152;
  char v153;
  uint8_t v154;
  int v155;
  uint8_t v156;
  char *v157;
  int i4;
  int v159;
  uint8_t *v160;
  int v161;
  uint8_t *v162;
  char v163;
  uint8_t i2;
  int v165;
  uint8_t v166;
  char *v167;
  int i3;
  int v169;
  int i5;
  int v171;
  uint8_t *v172;
  uint8_t *v174;
  uint8_t *v175;
  int v176;
  int *v177;
  uint8_t **v178;
  int v179;
  uint8_t *v180;
  uint8_t *v181;
  int v182;
  uint8_t *v183;
  uint8_t *v184;
  uint8_t *v185;
  uint8_t *v186;
  int16_t v187;
  int v188;
  int v189;
  int v190;
  int *v191;
  int v192;
  int v193;
  uint8_t *v194;
  uint8_t *v195;
  unsigned int v196;
  int v197;
  int v198;
  uint8_t *v199;
  int v200;
  int v201;
  int v202;
  uint32_t *v203;
  uint32_t *v204;
  uint32_t *v205;
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
  uint8_t *v217;
  uint8_t *v218;
  uint8_t *v219;
  int v220;
  int v221;

  v2 = *a2;
  v3 = (int)(uintptr_t)(a2[1] - 4);
  a2[1] = (uint8_t *)(v3 & 7);
  v4 = &v2[-(v3 >> 3)];
  *a2 = v4;
  *(uint32_t *)(a1 + 5424) = ((*v4 | (*(v4 - 1) << 8)) >> (v3 & 7)) & 0xF;
  v5 = *a2;
  v6 = (int)(uintptr_t)(a2[1] - 4);
  a2[1] = (uint8_t *)(v6 & 7);
  v7 = &v5[-(v6 >> 3)];
  *a2 = v7;
  v8 = *(uint32_t *)(a1 + 5424);
  k = ((*v7 | (*(v7 - 1) << 8)) >> (v6 & 7)) & 0xF;
  *(uint32_t *)(a1 + 5552) = k;
  if ( v8 != 0 || (v200 = 0, k != 0) )
  {
    v200 = 1;
    if ( *(uint32_t *)(a1 + 8) != 0 )
    {
      v64 = *a2;
      v65 = (int)(uintptr_t)(a2[1] - 1);
      a2[1] = (uint8_t *)(v65 & 7);
      v66 = &v64[-(v65 >> 3)];
      *a2 = v66;
      k = ((*v66 | (*(v66 - 1) << 8)) >> (v65 & 7)) & 1;
      *(uint8_t *)(a1 + 6000) = k;
    }
  }
  if ( *(int *)(a1 + 4) > 0 )
  {
    v193 = 2;
    v191 = (int *)(a1 + 5428);
    do
    {
      v174 = *a2;
      v183 = a2[1];
      v10 = (v174[2] | (v174[1] << 8) | (*v174 << 16)) >> (char)(uintptr_t)(v183);
      v11 = (char *)&mpc_HuffHdr + 2 * ((uint16_t)v10 >> 10);
      v12 = v11[4];
      v13 = v11[5];
      if ( v12 != 0 )
      {
        v71 = (int)(uintptr_t)(&v183[-v12]);
        v17 = v71 & 7;
        a2[1] = (uint8_t *)v17;
        v16 = &v174[-(v71 >> 3)];
        v18 = v13;
        *a2 = v16;
        if ( v13 != 4 )
          goto LABEL_9;
      }
      else
      {
        for ( i = (char *)mpc_HuffHdr + 4 * (uint8_t)v13; (uint16_t)v10 < *(uint16_t *)i; i += 4 )
          ;
        v15 = &v174[-((int)(uintptr_t)(&v183[-(uint8_t)i[2]]) >> 3)];
        *a2 = v15;
        v16 = v15;
        v17 = ((uint8_t)(uintptr_t)(v183) - i[2]) & 7;
        a2[1] = (uint8_t *)v17;
        v18 = i[3];
        if ( v18 != 4 )
        {
LABEL_9:
          v19 = v191;
          v20 = *(v191 - 1) + v18;
          goto LABEL_10;
        }
      }
      v72 = (v17 - 4) & 7;
      v73 = &v16[-((v17 - 4) >> 3)];
      a2[1] = (uint8_t *)v72;
      *a2 = v73;
      v74 = *v73 | (*(v73 - 1) << 8);
      v19 = v191;
      v20 = (v74 >> v72) & 0xF;
LABEL_10:
      *v19 = v20;
      v175 = *a2;
      v184 = a2[1];
      v21 = (v175[2] | (v175[1] << 8) | (*v175 << 16)) >> (char)(uintptr_t)(v184);
      v22 = (char *)&mpc_HuffHdr + 2 * ((uint16_t)v21 >> 10);
      v23 = v22[4];
      v24 = v22[5];
      if ( v23 != 0 )
      {
        v67 = (int)(uintptr_t)(&v184[-v23]);
        v28 = v67 & 7;
        a2[1] = (uint8_t *)v28;
        v27 = &v175[-(v67 >> 3)];
        v29 = v24;
        *a2 = v27;
        if ( v24 != 4 )
          goto LABEL_14;
      }
      else
      {
        for ( j = (char *)mpc_HuffHdr + 4 * (uint8_t)v24; (uint16_t)v21 < *(uint16_t *)j; j += 4 )
          ;
        v26 = &v175[-((int)(uintptr_t)(&v184[-(uint8_t)j[2]]) >> 3)];
        *a2 = v26;
        v27 = v26;
        v28 = ((uint8_t)(uintptr_t)(v184) - j[2]) & 7;
        a2[1] = (uint8_t *)v28;
        v29 = j[3];
        if ( v29 != 4 )
        {
LABEL_14:
          v30 = v191;
          v31 = v191[31] + v29;
          goto LABEL_15;
        }
      }
      v68 = (v28 - 4) & 7;
      v69 = &v27[-((v28 - 4) >> 3)];
      a2[1] = (uint8_t *)v68;
      *a2 = v69;
      v70 = *v69 | (*(v69 - 1) << 8);
      v30 = v191;
      v31 = (v70 >> v68) & 0xF;
LABEL_15:
      v30[32] = v31;
      if ( *v30 != 0 || v31 != 0 )
      {
        if ( *(uint32_t *)(a1 + 8) != 0 )
        {
          v75 = *a2;
          v76 = (int)(uintptr_t)(a2[1] - 1);
          a2[1] = (uint8_t *)(v76 & 7);
          v77 = &v75[-(v76 >> 3)];
          *a2 = v77;
          *(uint8_t *)(a1 + v193 + 5999) = ((*v77 | (*(v77 - 1) << 8)) >> (v76 & 7)) & 1;
        }
        k = v193;
        v200 = v193;
      }
      else
      {
        k = v193;
      }
      ++v193;
      ++v191;
    }
    while ( *(uint32_t *)(a1 + 4) >= k );
  }
  if ( v200 > 0 )
  {
    v221 = a1 + 5424;
    v176 = 0;
    v32 = (uint32_t *)(a1 + 5424);
    do
    {
      if ( *v32 != 0 )
      {
        v194 = *a2;
        v185 = a2[1];
        v33 = (v194[2] | (v194[1] << 8) | (*v194 << 16)) >> (char)(uintptr_t)(v185);
        v34 = (char *)mpc_table_HuffSCFI;
        if ( mpc_table_HuffSCFI[0] > (uint16_t)v33 )
        {
          do
            v34 += 4;
          while ( (uint16_t)v33 < *(uint16_t *)v34 );
        }
        *a2 = &v194[-((int)(uintptr_t)(&v185[-(uint8_t)v34[2]]) >> 3)];
        a2[1] = (uint8_t *)(((uint8_t)(uintptr_t)(v185) - v34[2]) & 7);
        v32[80] = v34[3];
      }
      if ( v32[32] != 0 )
      {
        v195 = *a2;
        v186 = a2[1];
        v35 = (v195[2] | (v195[1] << 8) | (*v195 << 16)) >> (char)(uintptr_t)(v186);
        v36 = (char *)mpc_table_HuffSCFI;
        if ( mpc_table_HuffSCFI[0] > (uint16_t)v35 )
        {
          do
            v36 += 4;
          while ( (uint16_t)v35 < *(uint16_t *)v36 );
        }
        *a2 = &v195[-((int)(uintptr_t)(&v186[-(uint8_t)v36[2]]) >> 3)];
        a2[1] = (uint8_t *)(((uint8_t)(uintptr_t)(v186) - v36[2]) & 7);
        v32[112] = v36[3];
      }
      ++v176;
      ++v32;
    }
    while ( v176 != v200 );
    v177 = (int *)(a1 + 5424);
    v201 = 0;
    while ( 1 )
    {
      v37 = v177[80];
      v38 = *v177;
      for ( k = a1 + 12 * v201 + 48; ; k = 12 * v201 + 432 + a1 )
      {
        if ( v38 == 0 )
          goto LABEL_57;
        switch ( v37 )
        {
          case 0:
            v213 = a2[1];
            v206 = *a2;
            v39 = ((*a2)[2] | (v206[1] << 8) | (*v206 << 16)) >> (char)(uintptr_t)(v213);
            v41 = (char *)&mpc_HuffDSCF + 2 * ((uint16_t)v39 >> 10);
            v40 = (uint8_t)v41[4];
            LOBYTE(v41) = v41[5];
            if ( (uint8_t)v40 != 0 )
            {
              v124 = (int)(uintptr_t)(&v213[-(uint8_t)v40]);
              v44 = v124 & 7;
              v43 = &v206[-(v124 >> 3)];
              v41 = (char *)(char)(uintptr_t)(v41);
              *a2 = v43;
              a2[1] = (uint8_t *)v44;
              if ( (char)(uintptr_t)(v41) != 8 )
                goto LABEL_39;
            }
            else
            {
              for ( m = (char *)mpc_HuffDSCF + 4 * (uint8_t)(uintptr_t)(v41); (uint16_t)v39 < *(uint16_t *)m; m += 4 )
                ;
              v43 = &v206[-((int)(uintptr_t)(&v213[-(uint8_t)m[2]]) >> 3)];
              *a2 = v43;
              v44 = ((uint8_t)(uintptr_t)(v213) - m[2]) & 7;
              a2[1] = (uint8_t *)v44;
              v41 = (char *)m[3];
              if ( v41 != (char *)(intptr_t)(byte_8) )
              {
LABEL_39:
                v45 = (int)(uintptr_t)(&v41[*(uint32_t *)(k + 8)]);
                goto LABEL_40;
              }
            }
            v125 = v44 - 6;
            v126 = (v44 - 6) & 7;
            v127 = &v43[-(v125 >> 3)];
            *a2 = v127;
            a2[1] = (uint8_t *)v126;
            v45 = ((*v127 | (*(v127 - 1) << 8)) >> v126) & 0x3F;
LABEL_40:
            *(uint32_t *)k = v45;
            v214 = a2[1];
            v207 = *a2;
            v46 = ((*a2)[2] | (v207[1] << 8) | (*v207 << 16)) >> (char)(uintptr_t)(v214);
            v48 = (char *)&mpc_HuffDSCF + 2 * ((uint16_t)v46 >> 10);
            v47 = v48[4];
            LOBYTE(v48) = v48[5];
            if ( v47 != 0 )
            {
              v120 = (int)(uintptr_t)(&v214[-v47]);
              v51 = v120 & 7;
              v50 = &v207[-(v120 >> 3)];
              v48 = (char *)(char)(uintptr_t)(v48);
              *a2 = v50;
              a2[1] = (uint8_t *)v51;
              if ( (char)(uintptr_t)(v48) != 8 )
                goto LABEL_44;
            }
            else
            {
              for ( n = (char *)mpc_HuffDSCF + 4 * (uint8_t)(uintptr_t)(v48); (uint16_t)v46 < *(uint16_t *)n; n += 4 )
                ;
              v50 = &v207[-((int)(uintptr_t)(&v214[-(uint8_t)n[2]]) >> 3)];
              *a2 = v50;
              v51 = ((uint8_t)(uintptr_t)(v214) - n[2]) & 7;
              a2[1] = (uint8_t *)v51;
              v48 = (char *)n[3];
              if ( v48 != (char *)(intptr_t)(byte_8) )
              {
LABEL_44:
                v52 = (int)(uintptr_t)(&v48[*(uint32_t *)k]);
                goto LABEL_45;
              }
            }
            v121 = v51 - 6;
            v122 = (v51 - 6) & 7;
            v123 = &v50[-(v121 >> 3)];
            *a2 = v123;
            a2[1] = (uint8_t *)v122;
            v52 = ((*v123 | (*(v123 - 1) << 8)) >> v122) & 0x3F;
LABEL_45:
            *(uint32_t *)(k + 4) = v52;
            v215 = a2[1];
            v208 = *a2;
            v53 = ((*a2)[2] | (v208[1] << 8) | (*v208 << 16)) >> (char)(uintptr_t)(v215);
            v54 = (char *)&mpc_HuffDSCF + 2 * ((uint16_t)v53 >> 10);
            v55 = v54[4];
            v56 = v54[5];
            if ( v55 == 0 )
            {
              for ( ii = (char *)mpc_HuffDSCF + 4 * v56; (uint16_t)v53 < *(uint16_t *)ii; ii += 4 )
                ;
              goto LABEL_48;
            }
            goto LABEL_102;
          case 1:
            v210 = *a2;
            v217 = a2[1];
            v86 = (v210[2] | (v210[1] << 8) | (*v210 << 16)) >> (char)(uintptr_t)(v217);
            v88 = (char *)&mpc_HuffDSCF + 2 * ((uint16_t)v86 >> 10);
            v87 = v88[4];
            LOBYTE(v88) = v88[5];
            if ( v87 != 0 )
            {
              v128 = (int)(uintptr_t)(&v217[-v87]);
              v91 = v128 & 7;
              v88 = (char *)(char)(uintptr_t)(v88);
              v90 = &v210[-(v128 >> 3)];
              *a2 = v90;
              a2[1] = (uint8_t *)v91;
              if ( (char)(uintptr_t)(v88) != 8 )
                goto LABEL_86;
            }
            else
            {
              for ( jj = (char *)mpc_HuffDSCF + 4 * (uint8_t)(uintptr_t)(v88); (uint16_t)v86 < *(uint16_t *)jj; jj += 4 )
                ;
              v90 = &v210[-((int)(uintptr_t)(&v217[-(uint8_t)jj[2]]) >> 3)];
              *a2 = v90;
              v91 = ((uint8_t)(uintptr_t)(v217) - jj[2]) & 7;
              a2[1] = (uint8_t *)v91;
              v88 = (char *)jj[3];
              if ( v88 != (char *)(intptr_t)(byte_8) )
              {
LABEL_86:
                v92 = (int)(uintptr_t)(&v88[*(uint32_t *)(k + 8)]);
                goto LABEL_87;
              }
            }
            v129 = v91 - 6;
            v130 = (v91 - 6) & 7;
            v131 = &v90[-(v129 >> 3)];
            *a2 = v131;
            a2[1] = (uint8_t *)v130;
            v92 = ((*v131 | (*(v131 - 1) << 8)) >> v130) & 0x3F;
LABEL_87:
            *(uint32_t *)k = v92;
            v218 = a2[1];
            v211 = *a2;
            v93 = ((*a2)[2] | (v211[1] << 8) | (*v211 << 16)) >> (char)(uintptr_t)(v218);
            v94 = (char *)&mpc_HuffDSCF + 2 * ((uint16_t)v93 >> 10);
            v95 = v94[4];
            v96 = v94[5];
            if ( v95 != 0 )
            {
              v98 = &v211[-((int)(uintptr_t)(&v218[-v95]) >> 3)];
              v99 = ((uint8_t)(uintptr_t)(v218) - v95) & 7;
              *a2 = v98;
              a2[1] = (uint8_t *)v99;
              v100 = v96;
              if ( v96 != 8 )
                goto LABEL_91;
            }
            else
            {
              for ( kk = (char *)mpc_HuffDSCF + 4 * (uint8_t)v96; (uint16_t)v93 < *(uint16_t *)kk; kk += 4 )
                ;
              v98 = &v211[-((int)(uintptr_t)(&v218[-(uint8_t)kk[2]]) >> 3)];
              *a2 = v98;
              v99 = ((uint8_t)(uintptr_t)(v218) - kk[2]) & 7;
              a2[1] = (uint8_t *)v99;
              v100 = kk[3];
              if ( v100 != 8 )
              {
LABEL_91:
                v63 = *(uint32_t *)k;
                v61 = *(uint32_t *)k + v100;
LABEL_92:
                *(uint32_t *)(k + 4) = v61;
                *(uint32_t *)(k + 8) = v61;
                v62 = v61;
                goto LABEL_51;
              }
            }
            v136 = v99 - 6;
            v137 = (v99 - 6) & 7;
            v138 = &v98[-(v136 >> 3)];
            *a2 = v138;
            a2[1] = (uint8_t *)v137;
            v63 = *(uint32_t *)k;
            v61 = ((*v138 | (*(v138 - 1) << 8)) >> v137) & 0x3F;
            goto LABEL_92;
          case 2:
            v219 = a2[1];
            v212 = *a2;
            v101 = ((*a2)[2] | (v212[1] << 8) | (*v212 << 16)) >> (char)(uintptr_t)(v219);
            v103 = (char *)&mpc_HuffDSCF + 2 * ((uint16_t)v101 >> 10);
            v102 = v103[4];
            LOBYTE(v103) = v103[5];
            if ( v102 != 0 )
            {
              v132 = (int)(uintptr_t)(&v219[-v102]);
              v106 = v132 & 7;
              v105 = &v212[-(v132 >> 3)];
              v103 = (char *)(char)(uintptr_t)(v103);
              *a2 = v105;
              a2[1] = (uint8_t *)v106;
              if ( (char)(uintptr_t)(v103) != 8 )
                goto LABEL_97;
            }
            else
            {
              for ( mm = (char *)mpc_HuffDSCF + 4 * (uint8_t)(uintptr_t)(v103); (uint16_t)v101 < *(uint16_t *)mm; mm += 4 )
                ;
              v105 = &v212[-((int)(uintptr_t)(&v219[-(uint8_t)mm[2]]) >> 3)];
              *a2 = v105;
              v106 = ((uint8_t)(uintptr_t)(v219) - mm[2]) & 7;
              a2[1] = (uint8_t *)v106;
              v103 = (char *)mm[3];
              if ( v103 != (char *)(intptr_t)(byte_8) )
              {
LABEL_97:
                v107 = (int)(uintptr_t)(&v103[*(uint32_t *)(k + 8)]);
                goto LABEL_98;
              }
            }
            v133 = v106 - 6;
            v134 = (v106 - 6) & 7;
            v135 = &v105[-(v133 >> 3)];
            *a2 = v135;
            a2[1] = (uint8_t *)v134;
            v107 = ((*v135 | (*(v135 - 1) << 8)) >> v134) & 0x3F;
LABEL_98:
            *(uint32_t *)k = v107;
            *(uint32_t *)(k + 4) = v107;
            v215 = a2[1];
            v208 = *a2;
            v108 = ((*a2)[2] | (v208[1] << 8) | (*v208 << 16)) >> (char)(uintptr_t)(v215);
            v109 = (char *)&mpc_HuffDSCF + 2 * ((uint16_t)v108 >> 10);
            v55 = v109[4];
            v56 = v109[5];
            if ( v55 == 0 )
            {
              for ( ii = (char *)mpc_HuffDSCF + 4 * v56; (uint16_t)v108 < *(uint16_t *)ii; ii += 4 )
                ;
LABEL_48:
              v58 = &v208[-((int)(uintptr_t)(&v215[-(uint8_t)ii[2]]) >> 3)];
              *a2 = v58;
              v59 = ((uint8_t)(uintptr_t)(v215) - ii[2]) & 7;
              a2[1] = (uint8_t *)v59;
              v60 = ii[3];
              if ( v60 == 8 )
                goto LABEL_103;
              goto LABEL_49;
            }
LABEL_102:
            v110 = (int)(uintptr_t)(&v215[-v55]);
            v59 = ((uint8_t)(uintptr_t)(v215) - v55) & 7;
            v58 = &v208[-(v110 >> 3)];
            *a2 = v58;
            a2[1] = (uint8_t *)v59;
            v60 = (char)v56;
            if ( v56 == 8 )
            {
LABEL_103:
              v111 = v59 - 6;
              v112 = (v59 - 6) & 7;
              v113 = &v58[-(v111 >> 3)];
              *a2 = v113;
              a2[1] = (uint8_t *)v112;
              v114 = *(v113 - 1);
              v115 = *v113;
              v61 = *(uint32_t *)(k + 4);
              v62 = ((v115 | (v114 << 8)) >> v112) & 0x3F;
              goto LABEL_50;
            }
LABEL_49:
            v61 = *(uint32_t *)(k + 4);
            v62 = v61 + v60;
LABEL_50:
            *(uint32_t *)(k + 8) = v62;
            v63 = *(uint32_t *)k;
LABEL_51:
            if ( v63 > 1024 )
              *(uint32_t *)k = 32896;
            if ( v61 > 1024 )
              *(uint32_t *)(k + 4) = 32896;
            if ( v62 > 1024 )
              *(uint32_t *)(k + 8) = 32896;
LABEL_57:
            v38 = v177[32];
            v37 = v177[112];
            if ( k != a1 + 12 * v201 + 48 )
              goto LABEL_71;
            break;
          case 3:
            v216 = a2[1];
            v209 = *a2;
            v80 = ((*a2)[2] | (v209[1] << 8) | (*v209 << 16)) >> (char)(uintptr_t)(v216);
            v82 = (char *)&mpc_HuffDSCF + 2 * ((uint16_t)v80 >> 10);
            v81 = v82[4];
            LOBYTE(v82) = v82[5];
            if ( v81 != 0 )
            {
              v116 = (int)(uintptr_t)(&v216[-v81]);
              v85 = v116 & 7;
              v84 = &v209[-(v116 >> 3)];
              v82 = (char *)(char)(uintptr_t)(v82);
              *a2 = v84;
              a2[1] = (uint8_t *)v85;
              if ( (char)(uintptr_t)(v82) != 8 )
                goto LABEL_80;
            }
            else
            {
              for ( nn = (char *)mpc_HuffDSCF + 4 * (uint8_t)(uintptr_t)(v82); (uint16_t)v80 < *(uint16_t *)nn; nn += 4 )
                ;
              v84 = &v209[-((int)(uintptr_t)(&v216[-(uint8_t)nn[2]]) >> 3)];
              *a2 = v84;
              v85 = ((uint8_t)(uintptr_t)(v216) - nn[2]) & 7;
              a2[1] = (uint8_t *)v85;
              v82 = (char *)nn[3];
              if ( v82 != (char *)(intptr_t)(byte_8) )
              {
LABEL_80:
                v63 = (int)(uintptr_t)(&v82[*(uint32_t *)(k + 8)]);
LABEL_81:
                *(uint32_t *)k = v63;
                *(uint32_t *)(k + 4) = v63;
                *(uint32_t *)(k + 8) = v63;
                v62 = v63;
                v61 = v63;
                goto LABEL_51;
              }
            }
            v117 = v85 - 6;
            v118 = (v85 - 6) & 7;
            v119 = &v84[-(v117 >> 3)];
            *a2 = v119;
            a2[1] = (uint8_t *)v118;
            v63 = ((*v119 | (*(v119 - 1) << 8)) >> v118) & 0x3F;
            goto LABEL_81;
          default:
            return k;
        }
      }
LABEL_71:
      ++v201;
      ++v177;
      if ( v201 == v200 )
      {
        v78 = a2;
        v220 = 0;
        while ( 1 )
        {
          LOWORD(v79) = *(uint16_t *)v221;
          v192 = a1 + 144 * v220 + 816;
          while ( 2 )
          {
            k = (int)(uintptr_t)(dword_20B9FF4) + (uint32_t)jpt_10420F5[(uint16_t)(v79 + 17)];
            switch ( (int16_t)v79 )
            {
              case -17:
              case -16:
              case -15:
              case -14:
              case -13:
              case -12:
              case -11:
              case -10:
              case -9:
              case -8:
              case -7:
              case -6:
              case -5:
              case -4:
              case -3:
              case -2:
              case 0:
                goto LABEL_119;
              case -1:
                v178 = v78;
                for ( i1 = 0; i1 != 36; ++i1 )
                {
                  v140 = mpc_random_int(a1);
                  v141 = HIWORD(v140);
                  LOWORD(v141) = BYTE2(v140);
                  k = (uint8_t)v140 + HIBYTE(v140) - 510 + v141 + BYTE1(v140);
                  *(uint16_t *)(v192 + 2 * i1) = k;
                }
                goto LABEL_118;
              case 1:
                v160 = *v78;
                v161 = (int)(uintptr_t)(v78[1] - 1);
                v78[1] = (uint8_t *)(v161 & 7);
                v190 = v161 & 7;
                v162 = &v160[-(v161 >> 3)];
                *v78 = v162;
                v199 = v162;
                v182 = 0;
                v163 = v161 & 7;
                v205 = &mpc_HuffQ + 33 * (((*v162 | (*(v162 - 1) << 8)) >> (v161 & 7)) & 1);
                for ( i2 = *v162; ; i2 = **v78 )
                {
                  v165 = ((v199[1] << 8) | (i2 << 16) | v199[2]) >> v163;
                  v167 = (char *)v205 + 2 * ((uint16_t)v165 >> 10);
                  v166 = v167[4];
                  LOBYTE(v167) = v167[5];
                  if ( v166 != 0 )
                  {
                    v78[1] = (uint8_t *)(((uint8_t)v190 - v166) & 7);
                    *v78 = &v199[-((v190 - v166) >> 3)];
                    v167 = (char *)(char)(uintptr_t)(v167);
                  }
                  else
                  {
                    for ( i3 = *v205 + 4 * (uint8_t)(uintptr_t)(v167); (uint16_t)v165 < *(uint16_t *)i3; i3 += 4 )
                      ;
                    *v78 = &v199[-((v190 - *(uint8_t *)(i3 + 2)) >> 3)];
                    v78[1] = (uint8_t *)(((uint8_t)v190 - *(uint8_t *)(i3 + 2)) & 7);
                    v167 = (char *)*(char *)(i3 + 3);
                  }
                  *(uint16_t *)(v192 + 2 * v182) = dword_1CC0BE0[(uint32_t)(uintptr_t)(v167)];
                  v169 = dword_1CC0C60[(uint32_t)(uintptr_t)(v167)];
                  k = dword_1CC0CE0[(uint32_t)(uintptr_t)(v167)];
                  *(uint16_t *)(v192 + 2 * v182 + 2) = v169;
                  *(uint16_t *)(v192 + 2 * v182 + 4) = k;
                  v182 += 3;
                  if ( v182 == 36 )
                    break;
                  v199 = *v78;
                  v190 = (int)(uintptr_t)(v78[1]);
                  v163 = v190;
                }
                goto LABEL_119;
              case 2:
                v151 = (int)(uintptr_t)(v78[1] - 1);
                v198 = 0;
                v189 = v151 & 7;
                v152 = &(*v78)[-(v151 >> 3)];
                v78[1] = (uint8_t *)v189;
                *v78 = v152;
                v181 = v152;
                v153 = v151 & 7;
                v154 = *v152;
                v204 = &mpc_HuffQ + 33 * (((*v152 | (*(v152 - 1) << 8)) >> v189) & 1) + 66;
                while ( 1 )
                {
                  v155 = ((v181[1] << 8) | (v154 << 16) | v181[2]) >> v153;
                  v157 = (char *)v204 + 2 * ((uint16_t)v155 >> 10);
                  v156 = v157[4];
                  LOBYTE(v157) = v157[5];
                  if ( v156 != 0 )
                  {
                    v78[1] = (uint8_t *)(((uint8_t)v189 - v156) & 7);
                    *v78 = &v181[-((v189 - v156) >> 3)];
                    v157 = (char *)(char)(uintptr_t)(v157);
                  }
                  else
                  {
                    for ( i4 = *v204 + 4 * (uint8_t)(uintptr_t)(v157); (uint16_t)v155 < *(uint16_t *)i4; i4 += 4 )
                      ;
                    *v78 = &v181[-((v189 - *(uint8_t *)(i4 + 2)) >> 3)];
                    v78[1] = (uint8_t *)(((uint8_t)v189 - *(uint8_t *)(i4 + 2)) & 7);
                    v157 = (char *)*(char *)(i4 + 3);
                  }
                  v159 = dword_1CC0D60[(uint32_t)(uintptr_t)(v157)];
                  k = dword_1CC0DE0[(uint32_t)(uintptr_t)(v157)];
                  *(uint16_t *)(v192 + 2 * v198) = v159;
                  *(uint16_t *)(v192 + 2 * v198 + 2) = k;
                  v198 += 2;
                  if ( v198 == 36 )
                    break;
                  v181 = *v78;
                  v189 = (int)(uintptr_t)(v78[1]);
                  v153 = v189;
                  v154 = **v78;
                }
                goto LABEL_119;
              case 3:
              case 4:
              case 5:
              case 6:
              case 7:
                v144 = *v78;
                v145 = (int)(uintptr_t)(v78[1] - 1);
                v197 = 0;
                v188 = v145 & 7;
                v78[1] = (uint8_t *)v188;
                v180 = &v144[-(v145 >> 3)];
                *v78 = v180;
                v146 = *v180;
                v147 = v188;
                v203 = &mpc_HuffQ + 66 * (int16_t)v79 + 33 * (((*v180 | (*(v180 - 1) << 8)) >> v188) & 1) - 66;
                v148 = v180;
                v178 = v78;
                while ( 1 )
                {
                  v149 = ((v148[1] << 8) | (v146 << 16) | v148[2]) >> v147;
                  k = (int)(uintptr_t)(v203) + 2 * ((uint16_t)v149 >> 10);
                  v150 = *(uint8_t *)(k + 4);
                  LOBYTE(k) = *(uint8_t *)(k + 5);
                  if ( v150 != 0 )
                  {
                    LOWORD(k) = (char)k;
                    *v78 = &v148[-((v188 - v150) >> 3)];
                    v78[1] = (uint8_t *)(((uint8_t)v188 - v150) & 7);
                  }
                  else
                  {
                    for ( k = *v203 + 4 * (uint8_t)k; (uint16_t)v149 < *(uint16_t *)k; k += 4 )
                      ;
                    *v78 = &v148[-((v188 - *(uint8_t *)(k + 2)) >> 3)];
                    v78[1] = (uint8_t *)(((uint8_t)v188 - *(uint8_t *)(k + 2)) & 7);
                    LOWORD(k) = *(char *)(k + 3);
                  }
                  *(uint16_t *)(v192 + 2 * v197++) = k;
                  if ( v197 == 36 )
                    break;
                  v148 = *v78;
                  v188 = (int)(uintptr_t)(v78[1]);
                  v147 = v188;
                  v146 = **v78;
                }
LABEL_118:
                v78 = v178;
                goto LABEL_119;
              case 8:
              case 9:
              case 10:
              case 11:
              case 12:
              case 13:
              case 14:
              case 15:
              case 16:
              case 17:
                v179 = 0;
                v196 = Res_bit[(int16_t)v79];
                v187 = (&__Dc)[(int16_t)v79 + 1];
                v202 = (1 << v196) - 1;
                if ( v196 <= 0x18 )
                {
                  for ( i5 = 0; i5 != 36; ++i5 )
                  {
                    v171 = (unsigned int)(uintptr_t)(&v78[1][-v196]) & 7;
                    v172 = &(*v78)[-((int)(uintptr_t)(&v78[1][-v196]) >> 3)];
                    v78[1] = (uint8_t *)v171;
                    *v78 = v172;
                    k = (*v172 | (*(v172 - 1) << 8)) >> v171;
                    if ( 16 - v171 < v196 )
                      k |= (unsigned int)((*(v172 - 3) << 24) | (*(v172 - 2) << 16)) >> v171;
                    LOWORD(k) = (v202 & k) - v187;
                    *(uint16_t *)(v192 + 2 * i5) = k;
                  }
                }
                else
                {
                  do
                  {
                    v142 = (unsigned int)(uintptr_t)(&v78[1][-v196]) & 7;
                    v143 = &(*v78)[-((int)(uintptr_t)(&v78[1][-v196]) >> 3)];
                    v78[1] = (uint8_t *)v142;
                    *v78 = v143;
                    k = ((*v143 | (*(v143 - 1) << 8)) >> v142)
                      | ((unsigned int)((*(v143 - 2) << 16) | (*(v143 - 3) << 24)) >> v142);
                    if ( v142 != 0 )
                      k |= *(v143 - 4) << (32 - v142);
                    LOWORD(k) = (v202 & k) - v187;
                    *(uint16_t *)(v192 + 2 * v179++) = k;
                  }
                  while ( v179 != 36 );
                }
LABEL_119:
                v79 = *(uint32_t *)(v221 + 128);
                if ( v192 == a1 + 144 * v220 + 816 )
                {
                  v192 = a1 + 144 * v220 + 888;
                  continue;
                }
                ++v220;
                v221 += 4;
                if ( v220 == v200 )
                  return k;
                break;
              default:
                LOWORD(k) = v79 + 17;
                return k;
            }
            break;
          }
        }
      }
    }
  }
  return k;
}

// ----------------------------------------------------------------------------
// Function: mpc_decoder_read_bitstream_sv8  (binary VA: 0x1042cf0)
// Original: mpc_decoder_read_bitstream_sv8
// ----------------------------------------------------------------------------
int mpc_decoder_read_bitstream_sv8(uint32_t *a1, int *a2, char a3)
{
  int v3;
  char *v4;
  uint8_t v5;
  int v6;
  char *i;
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  size_t v12;
  int result;
  uint32_t *v14;
  int v15;
  char *v16;
  uint8_t v17;
  uint8_t v18; // di
  int i8;
  int v20;
  int v21;
  uint8_t *v22;
  uint32_t *m;
  int v24;
  uint8_t v25;
  int v26;
  char *n;
  int v28;
  int v29;
  int v30;
  char v31; // si
  char *ii;
  int v33;
  int v34;
  char *v35;
  uint8_t v36;
  char v37;
  int i7;
  uint32_t *mm;
  int v40;
  char *v41;
  uint8_t v42;
  int v43;
  int nn;
  int v45;
  int v46;
  uint8_t *v47;
  int v48;
  char v49; // di
  uint8_t *v50;
  uint8_t *v51;
  int v52;
  int v53;
  char *v54;
  uint8_t v55;
  char v56;
  char *i1;
  int v58;
  unsigned int v59;
  unsigned int v60;
  uint8_t *v61;
  int v62;
  unsigned int v63;
  int v64;
  char *v65;
  int v66;
  unsigned int v67;
  bool v68; // cc
  int v69;
  int v70;
  int v71;
  int i3;
  uint8_t *v73;
  int v74;
  int v75;
  char *v76;
  uint8_t v77;
  int v78;
  int i6;
  int i4;
  unsigned int v81;
  int v82;
  int v83;
  uint8_t *v84;
  int v85;
  char *v86;
  uint8_t v87;
  uint8_t v88;
  int i5;
  int v90;
  int v91;
  uint8_t *v92;
  int v93;
  uint8_t *v94;
  char *v95;
  uint8_t v96;
  uint8_t v97;
  char *v98;
  char *v99;
  int *v100;
  int v101;
  uint8_t *v102;
  char *v103;
  uint8_t v104;
  uint8_t v105;
  char *v106;
  char *v107;
  int v108;
  int v109;
  void **v110;
  int v111;
  uint8_t v112;
  char *v113;
  int j;
  int v115;
  void **v116;
  int v117;
  uint8_t v118;
  char *v119;
  int k;
  int v121;
  int v122;
  int v123;
  unsigned int v124;
  int v125;
  int v126;
  uint32_t *v127;
  char v128;
  uint8_t *v129;
  unsigned int v130;
  unsigned int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  unsigned int v136;
  int v137;
  char *v138;
  int v139;
  int v140;
  unsigned int v141;
  char *v142;
  int v143;
  int v144;
  uint8_t *v145;
  int v146;
  unsigned int v147;
  int v148;
  uint8_t *v149;
  int v150;
  int v151;
  unsigned int v152;
  bool v153; // cc
  int v154;
  int v155;
  int v156;
  int v157;
  uint32_t *v158;
  unsigned int v159;
  unsigned int v160;
  int v161;
  uint8_t v162;
  int v163;
  int v164;
  int jj;
  int v166;
  int v167;
  unsigned int v168;
  unsigned int v169;
  int v170;
  uint32_t *v171;
  int kk;
  uint32_t *v173;
  uint32_t *v174;
  unsigned int v175;
  int v176;
  int v177;
  uint16_t v178;
  unsigned int v179;
  unsigned int v180;
  unsigned int v181;
  unsigned int v182;
  int v183;
  int v184;
  int16_t v185;
  void **v186;
  void **v187;
  int v188;
  unsigned int v189;
  int v190;
  uint32_t *v191;
  int v192;
  int v193;
  unsigned int v194;
  int v195;
  uint8_t *v196;
  int v197;
  int v198;
  int v199;
  int v200;
  unsigned int v201;
  int v202;
  int v203;
  int v204;
  signed int v205;
  int v206;
  int v207;
  int v208;
  uint8_t *v209;
  uint8_t *v210;
  uint8_t *v211;
  uint8_t *v212;
  uint8_t *v213;
  uint8_t *v214;
  int v215;
  unsigned int v216;
  unsigned int v217;
  int v218;
  uint8_t *v219;
  int16_t v220;
  uint16_t v221;
  uint16_t v222;
  int v223;
  int v224;
  int v225;
  unsigned int v226;
  uint8_t *v227;
  bool v228;
  int *v229;
  int v230;
  int v231;
  uint8_t *v232;
  uint8_t *v233;
  unsigned int i2;
  uint8_t *v235;
  int v236;
  int v237;
  int v238;
  int *v239;
  unsigned int v240;
  unsigned int v241;
  int v242;
  void **v243;
  void **v244;

  if ( a3 == 1 )
  {
    v10 = 0;
    v9 = mpc_bits_log_dec(a2, a1[1] + 1);
    v156 = v9;
    a1[9] = v9;
    if ( v9 == 0 )
      goto LABEL_9;
    goto LABEL_137;
  }
  v207 = a2[1];
  v227 = (uint8_t *)*a2;
  v195 = a1[9];
  v3 = (*(uint8_t *)(*a2 + 2) | (v227[1] << 8) | (*v227 << 16)) >> v207;
  v4 = (char *)&mpc_can_Bands + 2 * ((uint16_t)v3 >> 10);
  v5 = v4[8];
  LOBYTE(v6) = v4[9];
  if ( v5 != 0 )
  {
    *a2 = (int)(uintptr_t)(&v227[-((v207 - v5) >> 3)]);
    a2[1] = ((uint8_t)v207 - v5) & 7;
    v6 = (char)v6;
  }
  else
  {
    for ( i = (char *)mpc_can_Bands + 4 * (uint8_t)v6; (uint16_t)v3 < *(uint16_t *)i; i += 4 )
      ;
    *a2 = (int)(uintptr_t)(&v227[-((v207 - (uint8_t)i[2]) >> 3)]);
    a2[1] = ((uint8_t)v207 - i[2]) & 7;
    v6 = *((char *)off_20C31E4 + (uint8_t)(i[3] - ((int)(uint16_t)v3 >> (16 - i[2]))));
  }
  v8 = v195 + v6;
  v9 = v8 - 33;
  if ( v8 < 33 )
    v9 = v8;
  v10 = 0;
  v156 = v9;
  a1[9] = v9;
  if ( v9 != 0 )
  {
LABEL_137:
    v167 = v9 - 1;
    v94 = (uint8_t *)*a2;
    v237 = a2[1];
    v221 = (v94[2] | (v94[1] << 8) | (*v94 << 16)) >> v237;
    v95 = (char *)&mpc_can_Res + 2 * (v221 >> 10);
    v96 = v95[8];
    v97 = v95[9];
    if ( v96 != 0 )
    {
      v100 = a2;
      v140 = v237 - v96;
      a2[1] = v140 & 7;
      *a2 = (int)(uintptr_t)(&v94[-(v140 >> 3)]);
      v101 = (char)v97;
    }
    else
    {
      v98 = (char *)mpc_can_Res + 4 * v97;
      if ( v221 < *(uint16_t *)v98 )
      {
        v99 = (char *)mpc_can_Res + 4 * v97;
        do
          v99 += 4;
        while ( v221 < *(uint16_t *)v99 );
        v98 = v99;
      }
      *a2 = (int)(uintptr_t)(&v94[-((v237 - (uint8_t)v98[2]) >> 3)]);
      a2[1] = ((uint8_t)v237 - v98[2]) & 7;
      v100 = a2;
      v101 = *((char *)off_20C30C4 + (uint8_t)(v98[3] - ((int)v221 >> (16 - v98[2]))));
    }
    v170 = v167 + 1356;
    a1[v167 + 1356] = v101;
    v102 = (uint8_t *)*v100;
    v238 = v100[1];
    v222 = (v102[2] | (v102[1] << 8) | (*v102 << 16)) >> v238;
    v103 = (char *)&mpc_can_Res + 2 * (v222 >> 10);
    v104 = v103[8];
    v105 = v103[9];
    if ( v104 != 0 )
    {
      v139 = v238 - v104;
      a2[1] = v139 & 7;
      *a2 = (int)(uintptr_t)(&v102[-(v139 >> 3)]);
      v108 = (char)v105;
    }
    else
    {
      v106 = (char *)mpc_can_Res + 4 * v105;
      if ( v222 < *(uint16_t *)v106 )
      {
        v107 = (char *)mpc_can_Res + 4 * v105;
        do
          v107 += 4;
        while ( v222 < *(uint16_t *)v107 );
        v106 = v107;
      }
      *a2 = (int)(uintptr_t)(&v102[-((v238 - (uint8_t)v106[2]) >> 3)]);
      a2[1] = ((uint8_t)v238 - v106[2]) & 7;
      v108 = *((char *)off_20C30C4 + (uint8_t)(v106[3] - ((int)v222 >> (16 - v106[2]))));
    }
    a1[v167 + 1388] = v108;
    v109 = a1[v170];
    if ( v109 > 15 )
      a1[v170] = v109 - 17;
    if ( v108 > 15 )
      a1[v167 + 1388] = v108 - 17;
    v204 = v156 - 2;
    if ( v156 - 2 >= 0 )
    {
      v239 = (int *)(&a1[v170]);
      do
      {
        v110 = (void **)(&off_20C3148);
        if ( *v239 < 3 )
          v110 = (void **)(&mpc_can_Res);
        v173 = (uint32_t *)(v110);
        v192 = a2[1];
        v223 = *a2;
        v111 = (*(uint8_t *)(*a2 + 2) | (*(uint8_t *)(*a2 + 1) << 8) | (*(uint8_t *)*a2 << 16)) >> v192;
        v113 = (char *)v110 + 2 * ((uint16_t)v111 >> 10);
        v112 = v113[8];
        LOBYTE(v113) = v113[9];
        if ( v112 != 0 )
        {
          a2[1] = ((uint8_t)v192 - v112) & 7;
          *a2 = v223 - ((v192 - v112) >> 3);
          v113 = (char *)(char)(uintptr_t)(v113);
        }
        else
        {
          for ( j = *v173 + 4 * (uint8_t)(uintptr_t)(v113); (uint16_t)v111 < *(uint16_t *)j; j += 4 )
            ;
          *a2 = v223 - ((v192 - *(uint8_t *)(j + 2)) >> 3);
          a2[1] = ((uint8_t)v192 - *(uint8_t *)(j + 2)) & 7;
          v113 = (char *)*(char *)(v173[1]
                                 + (uint8_t)(*(uint8_t *)(j + 3)
                                                   - ((int)(uint16_t)v111 >> (16 - *(uint8_t *)(j + 2)))));
        }
        v115 = (int)(uintptr_t)(&v113[*v239]);
        *(v239 - 1) = v115;
        if ( v115 > 15 )
          *(v239 - 1) = v115 - 17;
        v116 = (void **)(&off_20C3148);
        if ( v239[32] < 3 )
          v116 = (void **)(&mpc_can_Res);
        v224 = *a2;
        v174 = (uint32_t *)(v116);
        v193 = a2[1];
        v117 = (*(uint8_t *)(*a2 + 2) | (*(uint8_t *)(*a2 + 1) << 8) | (*(uint8_t *)*a2 << 16)) >> v193;
        v119 = (char *)v116 + 2 * ((uint16_t)v117 >> 10);
        v118 = v119[8];
        LOBYTE(v119) = v119[9];
        if ( v118 != 0 )
        {
          a2[1] = ((uint8_t)v193 - v118) & 7;
          *a2 = v224 - ((v193 - v118) >> 3);
          v119 = (char *)(char)(uintptr_t)(v119);
        }
        else
        {
          for ( k = *v174 + 4 * (uint8_t)(uintptr_t)(v119); (uint16_t)v117 < *(uint16_t *)k; k += 4 )
            ;
          *a2 = v224 - ((v193 - *(uint8_t *)(k + 2)) >> 3);
          a2[1] = ((uint8_t)v193 - *(uint8_t *)(k + 2)) & 7;
          v119 = (char *)*(char *)(v174[1]
                                 + (uint8_t)(*(uint8_t *)(k + 3)
                                                   - ((int)(uint16_t)v117 >> (16 - *(uint8_t *)(k + 2)))));
        }
        v121 = (int)(uintptr_t)(&v119[v239[32]]);
        v239[31] = v121;
        if ( v121 > 15 )
          v239[31] = v121 - 17;
        --v204;
        --v239;
      }
      while ( v204 != -1 );
    }
    v10 = v156;
    if ( a1[2] != 0 )
    {
      v122 = 0;
      v225 = 0;
      if ( v156 <= 0 )
      {
        v164 = 0;
        v123 = 0;
      }
      else
      {
        do
        {
          if ( a1[v122 + 1356] != 0 || a1[v122 + 1388] != 0 )
            ++v225;
          ++v122;
        }
        while ( v122 != v156 );
        v164 = v225;
        v123 = v225;
      }
      v124 = mpc_bits_log_dec(a2, v123);
      v205 = v124;
      if ( v124 == v225 || v124 == 0 )
      {
        v125 = 0;
      }
      else
      {
        v141 = v225 - v124;
        if ( v225 - v205 > v205 )
          v141 = v205;
        v194 = v141;
        v182 = v141 - 1;
        v176 = v123 - 1;
        v142 = (char *)&Cnk + 128 * v141 - 128;
        v159 = *((uint8_t *)&Cnk_len + 32 * v141 + v123 - 33) - 1;
        v143 = *a2;
        v144 = a2[1] - v159;
        a2[1] = v144 & 7;
        v145 = (uint8_t *)(v143 - (v144 >> 3));
        v242 = v144 & 7;
        *a2 = (int)(uintptr_t)(v145);
        v146 = (*v145 | (*(v145 - 1) << 8)) >> (v144 & 7);
        if ( v159 > 16 - v242 )
        {
          v146 |= (unsigned int)((*(v145 - 2) << 16) | (*(v145 - 3) << 24)) >> v242;
          if ( v159 > 0x18 && v242 != 0 )
            v146 |= *(v145 - 4) << (32 - v242);
        }
        v147 = v146 & ((1 << v159) - 1);
        v160 = Cnk_lost[32 * v182 + v176];
        if ( v160 <= v147 )
        {
          v148 = (v242 - 1) & 7;
          v149 = &v145[-((v242 - 1) >> 3)];
          *a2 = (int)(uintptr_t)(v149);
          a2[1] = v148;
          v147 = (((*v149 | (*(v149 - 1) << 8)) >> v148) & 1 | (2 * v147)) - v160;
        }
        v150 = 4 * v164 - 4;
        v161 = 0;
        while ( 1 )
        {
          v151 = v182;
          v152 = v147 - *(uint32_t *)&v142[v150];
          v153 = *(uint32_t *)&v142[v150] <= v147;
          if ( *(uint32_t *)&v142[v150] > v147 )
          {
            v151 = v194;
            v152 = v147;
          }
          v194 = v151;
          v154 = v151;
          if ( v153 )
            v142 -= 128;
          v155 = v161 | (1 << v176);
          if ( !v153 )
            v155 = v161;
          v150 -= 4;
          v161 = v155;
          if ( v154 == 0 )
            break;
          v147 = v152;
          LOBYTE(v176) = v176 - 1;
          v182 = v194 - 1;
        }
        v125 = v155;
      }
      if ( 2 * v205 > v225 )
        v125 = ~v125;
      v10 = v156;
      if ( v167 >= 0 )
      {
        v240 = v125;
        v126 = v167;
        v127 = &a1[v170];
        do
        {
          if ( *v127 != 0 || v127[32] != 0 )
          {
            v128 = v240 & 1;
            v240 >>= 1;
            *((uint8_t *)a1 + v126 + 6000) = v128;
          }
          --v126;
          --v127;
        }
        while ( v126 != -1 );
        v10 = v156;
      }
    }
  }
LABEL_9:
  v11 = a1[1];
  if ( v10 <= v11 )
  {
    v12 = 4 * (v11 + ~v10 + 2);
    memset(&a1[v10 + 1388], 0, v12);
    memset(&a1[v10 + 1356], 0, v12);
  }
  if ( a3 == 1 )
  {
    v129 = (uint8_t *)(a1 + 1428);
    v130 = -(int)(uintptr_t)(a1 + 1428) & 0xF;
    if ( v130 != 0 )
    {
      v131 = 0;
      do
      {
        ++v131;
        v132 = 32 - v131;
        *v129 = 1;
        *(v129 - 32) = 1;
        ++v129;
      }
      while ( v131 < v130 );
    }
    else
    {
      v132 = 32;
      v131 = 0;
    }
    v226 = 32 - v130;
    v241 = (32 - v130) >> 4;
    v206 = 16 * v241;
    if ( 16 * v241 == 0 )
      goto LABEL_197;
    v175 = v131;
    v133 = (int)(uintptr_t)(a1) + v130 + 5712;
    v134 = (int)(uintptr_t)(a1) + v130 + 5680;
    v135 = 0;
    v136 = 0;
    do
    {
      ++v136;
      *(g4_int128_t *)(v133 + v135) = xmmword_1C7C990;
      *(g4_int128_t *)(v134 + v135) = xmmword_1C7C990;
      v135 += 16;
    }
    while ( v241 > v136 );
    v132 -= v206;
    v131 = v206 + v175;
    if ( v226 != v206 )
    {
LABEL_197:
      v137 = 0;
      v138 = (char *)a1 + v131;
      do
      {
        v138[v137 + 5712] = 1;
        v138[v137++ + 5680] = 1;
      }
      while ( v137 != v132 );
    }
  }
  v243 = (void **)(&mpc_can_SCFI);
  v244 = (void **)(&off_20C3428);
  result = v156;
  if ( v156 > 0 )
  {
    v208 = 0;
    v158 = a1 + 1356;
    v14 = a1 + 1356;
    while ( 1 )
    {
      v228 = *v14 != 0;
      if ( v14[32] != 0 )
        goto LABEL_17;
      if ( -(*v14 == 0) != -1 )
        break;
LABEL_15:
      ++v208;
      ++v14;
      if ( v208 == v156 )
      {
        v229 = (int *)(a1 + 1356);
        v184 = 0;
        while ( 1 )
        {
          v21 = *v229;
          v197 = v229[80];
          v22 = (uint8_t *)((char *)a1 + v184 + 5680);
          for ( m = &a1[3 * v184 + 12]; ; m = &a1[3 * v184 + 108] )
          {
            if ( v21 != 0 )
            {
              if ( *v22 != 1 )
              {
                v209 = (uint8_t *)*a2;
                v177 = a2[1];
                v24 = (v209[2] | (v209[1] << 8) | (*v209 << 16)) >> v177;
                v25 = *((uint8_t *)&mpc_can_DSCF + 2 * ((uint16_t)v24 >> 10) + 144);
                LOBYTE(v26) = *((uint8_t *)&mpc_can_DSCF + 2 * ((uint16_t)v24 >> 10) + 145);
                if ( v25 != 0 )
                {
                  v45 = v177 - v25;
                  v28 = v45 & 7;
                  v210 = &v209[-(v45 >> 3)];
                  *a2 = (int)(uintptr_t)(v210);
                  a2[1] = v28;
                  if ( (char)v26 != 64 )
                    goto LABEL_36;
                }
                else
                {
                  for ( n = (char *)off_20C3308 + 4 * (uint8_t)v26; (uint16_t)v24 < *(uint16_t *)n; n += 4 )
                    ;
                  v210 = &v209[-((v177 - (uint8_t)n[2]) >> 3)];
                  *a2 = (int)(uintptr_t)(v210);
                  v28 = ((uint8_t)v177 - n[2]) & 7;
                  a2[1] = v28;
                  v26 = *((char *)off_20C330C + (uint8_t)(n[3] - ((int)(uint16_t)v24 >> (16 - n[2]))));
                  if ( v26 != 64 )
                  {
LABEL_36:
                    *m = (((uint8_t)v26 + (uint8_t)m[2] - 25) & 0x7F) - 6;
                    goto LABEL_37;
                  }
                }
                v26 = v28 - 6;
                v46 = (v28 - 6) & 7;
                v47 = &v210[-(v26 >> 3)];
                *a2 = (int)(uintptr_t)(v47);
                a2[1] = v46;
                LOBYTE(v26) = (((*v47 | (*(v47 - 1) << 8)) >> v46) & 0x3F) + 64;
                goto LABEL_36;
              }
              v48 = a2[1] - 7;
              v49 = v48 & 7;
              a2[1] = v48 & 7;
              v50 = (uint8_t *)(*a2 - (v48 >> 3));
              *a2 = (int)(uintptr_t)(v50);
              *m = (((*v50 | (*(v50 - 1) << 8)) >> v49) & 0x7F) - 6;
              *v22 = 0;
LABEL_37:
              v29 = 0;
              while ( 2 )
              {
                if ( ((v197 << v29) & 2) != 0 )
                {
                  m[v29 + 1] = m[v29];
                  goto LABEL_40;
                }
                v211 = (uint8_t *)*a2;
                v166 = a2[1];
                v178 = (v211[2] | (v211[1] << 8) | (*v211 << 16)) >> v166;
                v30 = (int)(uintptr_t)(&mpc_can_DSCF) + 2 * (v178 >> 10);
                v31 = *(uint8_t *)(v30 + 8);
                v162 = *(uint8_t *)(v30 + 9);
                if ( v31 != 0 )
                {
                  v212 = &v211[-((v166 - *(uint8_t *)(v30 + 8)) >> 3)];
                  v33 = ((uint8_t)v166 - v31) & 7;
                  *a2 = (int)(uintptr_t)(v212);
                  a2[1] = v33;
                  LOBYTE(v30) = v162;
                  if ( v162 == 31 )
                    goto LABEL_77;
                }
                else
                {
                  for ( ii = (char *)mpc_can_DSCF + 4 * v162; v178 < *(uint16_t *)ii; ii += 4 )
                    ;
                  v212 = &v211[-((v166 - (uint8_t)ii[2]) >> 3)];
                  *a2 = (int)(uintptr_t)(v212);
                  v33 = ((uint8_t)v166 - ii[2]) & 7;
                  a2[1] = v33;
                  v30 = *((char *)off_20C3284 + (uint8_t)(ii[3] - ((int)v178 >> (16 - ii[2]))));
                  if ( v30 != 31 )
                    goto LABEL_47;
LABEL_77:
                  v51 = &v212[-((v33 - 6) >> 3)];
                  v52 = ((uint8_t)v33 - 6) & 7;
                  a2[1] = v52;
                  *a2 = (int)(uintptr_t)(v51);
                  v30 = (((*v51 | (*(v51 - 1) << 8)) >> v52) & 0x3F) + 64;
                }
LABEL_47:
                m[v29 + 1] = (((uint8_t)v30 + (uint8_t)m[v29] - 25) & 0x7F) - 6;
LABEL_40:
                if ( ++v29 == 2 )
                  break;
                continue;
              }
            }
            v21 = v229[32];
            if ( m != &a1[3 * v184 + 12] )
              break;
            v197 = v229[112];
            v22 = (uint8_t *)((char *)a1 + v184 + 5712);
          }
          ++v184;
          ++v229;
          if ( v184 == v156 )
          {
            for ( jj = 0; jj != v156; ++jj )
            {
              v185 = *(uint16_t *)v158;
              for ( kk = (int)(uintptr_t)(&a1[36 * jj + 204]); ; kk = (int)(uintptr_t)(&a1[36 * jj + 222]) )
              {
                if ( v185 != 0 )
                {
                  switch ( v185 )
                  {
                    case 2:
                      v179 = 6;
                      v243 = (void **)(&mpc_can_Q);
                      v244 = (void **)(&off_20C29A8);
                      v187 = (void **)(&off_20C29A8);
                      v231 = 0;
                      for ( mm = &off_20C29A8; ; mm = (uint32_t *)(v187) )
                      {
                        v199 = a2[1];
                        v214 = (uint8_t *)*a2;
                        v40 = (v214[2] | (v214[1] << 8) | (*v214 << 16)) >> v199;
                        v41 = (char *)mm + 2 * ((uint16_t)v40 >> 10);
                        v42 = v41[8];
                        LOBYTE(v43) = v41[9];
                        if ( v42 != 0 )
                        {
                          *a2 = (int)(uintptr_t)(&v214[-((v199 - v42) >> 3)]);
                          a2[1] = ((uint8_t)v199 - v42) & 7;
                          v43 = (char)v43;
                        }
                        else
                        {
                          for ( nn = *mm + 4 * (uint8_t)v43; (uint16_t)v40 < *(uint16_t *)nn; nn += 4 )
                            ;
                          *a2 = (int)(uintptr_t)(&v214[-((v199 - *(uint8_t *)(nn + 2)) >> 3)]);
                          a2[1] = ((uint8_t)v199 - *(uint8_t *)(nn + 2)) & 7;
                          v43 = *((char *)v187[1]
                                + (uint8_t)(*(uint8_t *)(nn + 3)
                                                  - ((int)(uint16_t)v40 >> (16 - *(uint8_t *)(nn + 2)))));
                        }
                        *(uint16_t *)(kk + 2 * v231) = byte_1CC0EA0[v43];
                        *(uint16_t *)(kk + 2 * v231 + 2) = byte_1CC0F20[v43];
                        *(uint16_t *)(kk + 2 * v231 + 4) = byte_1CC0FA0[v43];
                        v231 += 3;
                        if ( v231 == 36 )
                          break;
                        v179 = (v179 >> 1) + byte_1CC1020[v43];
                        v187 = (&v243)[v179 > 3];
                      }
                      break;
                    case 1:
                      v157 = 0;
                      v163 = kk;
                      do
                      {
                        v215 = a2[1];
                        v232 = (uint8_t *)*a2;
                        v53 = (*(uint8_t *)(*a2 + 2) | (v232[1] << 8) | (*v232 << 16)) >> v215;
                        v54 = (char *)&mpc_can_Q1 + 2 * ((uint16_t)v53 >> 10);
                        v55 = v54[8];
                        v56 = v54[9];
                        if ( v55 != 0 )
                        {
                          v58 = ((uint8_t)v215 - v55) & 7;
                          v233 = &v232[-((v215 - v55) >> 3)];
                          *a2 = (int)(uintptr_t)(v233);
                          a2[1] = v58;
                          v168 = v56;
                          v59 = v56;
                        }
                        else
                        {
                          for ( i1 = (char *)mpc_can_Q1 + 4 * (uint8_t)v56;
                                (uint16_t)v53 < *(uint16_t *)i1;
                                i1 += 4 )
                          {
                            ;
                          }
                          v233 = &v232[-((v215 - (uint8_t)i1[2]) >> 3)];
                          *a2 = (int)(uintptr_t)(v233);
                          v58 = ((uint8_t)v215 - i1[2]) & 7;
                          a2[1] = v58;
                          v59 = *((char *)off_20C3024
                                + (uint8_t)(i1[3] - ((int)(uint16_t)v53 >> (16 - i1[2]))));
                          v168 = v59;
                        }
                        v188 = 0;
                        v216 = v59 - 1;
                        if ( v59 - 1 <= 0x10 )
                        {
                          v60 = v168;
                          if ( v168 > 9 )
                          {
                            v216 = 17 - v168;
                            v60 = 18 - v168;
                          }
                          v189 = *((uint8_t *)&Cnk_len + 32 * v216 + 17) - 1;
                          v200 = (v58 - v189) & 7;
                          v61 = &v233[-((int)(v58 - v189) >> 3)];
                          *a2 = (int)(uintptr_t)(v61);
                          a2[1] = v200;
                          v62 = (*v61 | (*(v61 - 1) << 8)) >> v200;
                          if ( v189 > 16 - v200 )
                          {
                            v62 |= (unsigned int)((*(v61 - 2) << 16) | (*(v61 - 3) << 24)) >> v200;
                            if ( v189 > 0x18 && v200 != 0 )
                              v62 |= *(v61 - 4) << (32 - v200);
                          }
                          v63 = v62 & ((1 << v189) - 1);
                          v217 = Cnk_lost[32 * v216 + 17];
                          if ( v217 <= v63 )
                          {
                            v73 = &v61[-((v200 - 1) >> 3)];
                            *a2 = (int)(uintptr_t)(v73);
                            a2[1] = (v200 - 1) & 7;
                            v63 = (((*v73 | (*(v73 - 1) << 8)) >> ((v200 - 1) & 7)) & 1 | (2 * v63)) - v217;
                          }
                          v188 = 0;
                          v64 = 18;
                          v65 = (char *)&Cnk + 128 * v60 - 128;
                          v201 = v60;
                          for ( i2 = v60 - 1; ; i2 = v201 - 1 )
                          {
                            --v64;
                            v66 = i2;
                            v67 = v63 - *(uint32_t *)&v65[4 * v64];
                            v68 = *(uint32_t *)&v65[4 * v64] <= v63;
                            if ( *(uint32_t *)&v65[4 * v64] > v63 )
                            {
                              v66 = v201;
                              v67 = v63;
                            }
                            v201 = v66;
                            v69 = v66;
                            v70 = v188 | (1 << v64);
                            if ( v68 )
                              v65 -= 128;
                            else
                              v70 = v188;
                            v188 = v70;
                            if ( v69 == 0 )
                              break;
                            v63 = v67;
                          }
                        }
                        v71 = ~v188;
                        if ( v168 < 0xA )
                          v71 = v188;
                        v190 = v71;
                        for ( i3 = 0; i3 != 36; i3 += 2 )
                        {
                          *(uint16_t *)(v163 + i3) = 0;
                          if ( (v190 & 0x20000) != 0 )
                          {
                            v82 = *a2;
                            v83 = a2[1] - 1;
                            a2[1] = v83 & 7;
                            v84 = (uint8_t *)(v82 - (v83 >> 3));
                            *a2 = (int)(uintptr_t)(v84);
                            *(uint16_t *)(v163 + i3) = 2 * (((*v84 | (*(v84 - 1) << 8)) >> (v83 & 7)) & 1) - 1;
                          }
                          v190 *= 2;
                        }
                        v157 += 18;
                        v163 += 36;
                      }
                      while ( v157 != 36 );
                      break;
                    case -1:
                      for ( i4 = 0; i4 != 36; ++i4 )
                      {
                        v81 = mpc_random_int(a1);
                        *(uint16_t *)(kk + 2 * i4) = BYTE1(v81) + (uint8_t)v81 + HIBYTE(v81) - 510 + BYTE2(v81);
                      }
                      break;
                    default:
                      if ( v185 > 4 )
                      {
                        if ( v185 > 8 )
                        {
                          v236 = 0;
                          v181 = v185 - 9;
                          do
                          {
                            v219 = (uint8_t *)*a2;
                            v203 = a2[1];
                            v85 = (v219[2] | (v219[1] << 8) | (*v219 << 16)) >> v203;
                            v86 = (char *)&mpc_can_Q9up + 2 * ((uint16_t)v85 >> 10);
                            v87 = v86[8];
                            v88 = v86[9];
                            if ( v87 != 0 )
                            {
                              a2[1] = ((uint8_t)v203 - v87) & 7;
                              *a2 = (int)(uintptr_t)(&v219[-((v203 - v87) >> 3)]);
                              LOBYTE(i5) = v88;
                            }
                            else
                            {
                              for ( i5 = (int)mpc_can_Q9up + 4 * v88; (uint16_t)v85 < *(uint16_t *)i5; i5 += 4 )
                                ;
                              *a2 = (int)(uintptr_t)(&v219[-((v203 - *(uint8_t *)(i5 + 2)) >> 3)]);
                              a2[1] = ((uint8_t)v203 - *(uint8_t *)(i5 + 2)) & 7;
                              LOBYTE(i5) = *((uint8_t *)off_20C2F84
                                           + (uint8_t)(*(uint8_t *)(i5 + 3)
                                                             - ((int)(uint16_t)v85 >> (16 - *(uint8_t *)(i5 + 2)))));
                            }
                            v90 = v236;
                            LOWORD(i5) = (uint8_t)i5;
                            *(uint16_t *)(kk + 2 * v236) = (uint8_t)i5;
                            if ( v185 != 9 )
                            {
                              v91 = a2[1] - v181;
                              v220 = (uint8_t)i5 << (v185 - 9);
                              v92 = (uint8_t *)(*a2 - (v91 >> 3));
                              v93 = v91 & 7;
                              *a2 = (int)(uintptr_t)(v92);
                              a2[1] = v93;
                              i5 = (*v92 | (*(v92 - 1) << 8)) >> v93;
                              if ( v181 > 16 - v93 )
                              {
                                i5 |= (unsigned int)((*(v92 - 2) << 16) | (*(v92 - 3) << 24)) >> v93;
                                if ( v181 > 0x18 && v93 != 0 )
                                  i5 |= *(v92 - 4) << (32 - v93);
                              }
                              LOWORD(i5) = v220 | ((1 << (v185 - 9)) - 1) & i5;
                              *(uint16_t *)(kk + 2 * v236) = i5;
                              v90 = v236;
                            }
                            *(uint16_t *)(kk + 2 * v90) = i5 - (&__Dc)[v185 + 1];
                            v236 = v90 + 1;
                          }
                          while ( v90 != 35 );
                        }
                        else
                        {
                          v74 = 272 * v185;
                          v169 = dword_1CC0E60[v185];
                          v180 = 2 * v169;
                          v218 = 0;
                          v243 = (void **)((char *)&mpc_can_Q + v74 - 816);
                          v244 = (void **)((char *)&mpc_can_Q + v74 - 680);
                          do
                          {
                            v235 = (uint8_t *)*a2;
                            v191 = (uint32_t *)((&v243)[v169 < v180]);
                            v202 = a2[1];
                            v75 = (v235[2] | (v235[1] << 8) | (*v235 << 16)) >> v202;
                            v76 = (char *)v191 + 2 * ((uint16_t)v75 >> 10);
                            v77 = v76[8];
                            LOBYTE(v78) = v76[9];
                            if ( v77 != 0 )
                            {
                              *a2 = (int)(uintptr_t)(&v235[-((v202 - v77) >> 3)]);
                              a2[1] = ((uint8_t)v202 - v77) & 7;
                              v78 = (char)v78;
                            }
                            else
                            {
                              for ( i6 = *v191 + 4 * (uint8_t)v78; (uint16_t)v75 < *(uint16_t *)i6; i6 += 4 )
                                ;
                              *a2 = (int)(uintptr_t)(&v235[-((v202 - *(uint8_t *)(i6 + 2)) >> 3)]);
                              a2[1] = ((uint8_t)v202 - *(uint8_t *)(i6 + 2)) & 7;
                              v78 = *(char *)(v191[1]
                                            + (uint8_t)(*(uint8_t *)(i6 + 3)
                                                              - ((int)(uint16_t)v75 >> (16 - *(uint8_t *)(i6 + 2)))));
                            }
                            *(uint16_t *)(kk + 2 * v218) = v78;
                            v180 = (v180 >> 1) + __builtin_abs(v78);
                            ++v218;
                          }
                          while ( v218 != 36 );
                        }
                      }
                      else
                      {
                        v230 = 0;
                        v186 = (void **)(&mpc_can_Q + 34 * v185 - 34);
                        do
                        {
                          v213 = (uint8_t *)*a2;
                          v198 = a2[1];
                          v34 = (v213[2] | (v213[1] << 8) | (*v213 << 16)) >> v198;
                          v35 = (char *)v186 + 2 * ((uint16_t)v34 >> 10);
                          v36 = v35[8];
                          v37 = v35[9];
                          if ( v36 != 0 )
                          {
                            *a2 = (int)(uintptr_t)(&v213[-((v198 - v36) >> 3)]);
                            a2[1] = ((uint8_t)v198 - v36) & 7;
                          }
                          else
                          {
                            for ( i7 = (int)(uintptr_t)(*v186) + 4 * (uint8_t)v37; (uint16_t)v34 < *(uint16_t *)i7; i7 += 4 )
                              ;
                            *a2 = (int)(uintptr_t)(&v213[-((v198 - *(uint8_t *)(i7 + 2)) >> 3)]);
                            a2[1] = ((uint8_t)v198 - *(uint8_t *)(i7 + 2)) & 7;
                            v37 = *((uint8_t *)v186[1]
                                  + (uint8_t)(*(uint8_t *)(i7 + 3)
                                                    - ((int)(uint16_t)v34 >> (16 - *(uint8_t *)(i7 + 2)))));
                          }
                          *(uint16_t *)(kk + 2 * v230) = (char)(16 * v37) >> 4;
                          *(uint16_t *)(kk + 2 * v230 + 2) = v37 >> 4;
                          v230 += 2;
                        }
                        while ( v230 != 36 );
                      }
                      break;
                  }
                }
                if ( (uint32_t *)kk != &a1[36 * jj + 204] )
                  break;
                v185 = v158[32];
              }
              ++v158;
              result = v156;
            }
            return result;
          }
        }
      }
    }
    v228 = false;
LABEL_17:
    v171 = (uint32_t *)((&v243)[v228]);
    v183 = a2[1];
    v196 = (uint8_t *)*a2;
    v15 = (v196[2] | (v196[1] << 8) | (*v196 << 16)) >> v183;
    v16 = (char *)v171 + 2 * ((uint16_t)v15 >> 10);
    v17 = v16[8];
    v18 = v16[9];
    if ( v17 != 0 )
    {
      a2[1] = ((uint8_t)v183 - v17) & 7;
      *a2 = (int)(uintptr_t)(&v196[-((v183 - v17) >> 3)]);
      v20 = (char)v18;
    }
    else
    {
      for ( i8 = *v171 + 4 * v18; (uint16_t)v15 < *(uint16_t *)i8; i8 += 4 )
        ;
      *a2 = (int)(uintptr_t)(&v196[-((v183 - *(uint8_t *)(i8 + 2)) >> 3)]);
      a2[1] = ((uint8_t)v183 - *(uint8_t *)(i8 + 2)) & 7;
      v20 = *(char *)(v171[1]
                    + (uint8_t)(*(uint8_t *)(i8 + 3) - ((int)(uint16_t)v15 >> (16 - *(uint8_t *)(i8 + 2)))));
    }
    if ( *v14 != 0 )
      v14[80] = v20 >> (2 * v228);
    if ( v14[32] != 0 )
      v14[112] = v20 & 3;
    goto LABEL_15;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: mpc_decoder_decode_frame  (binary VA: 0x10447f0)
// Original: mpc_decoder_decode_frame
// ----------------------------------------------------------------------------
int mpc_decoder_decode_frame(__m128 a1, int a2, int *a3, int a4)
{
  int64_t v4; // rax
  uint32_t *v5;
  unsigned int v6;
  unsigned int v7; // kr04_4
  uint64_t v8; // rax
  bool v9;
  unsigned int v10;
  int v11;
  int v12;
  uint8_t *v13;
  int v14;
  int64_t v15; // rax
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  float v22; // xmm4_4
  float v23; // xmm3_4
  int v24;
  int v25;
  float v26; // xmm1_4
  int v27;
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm4_4
  float v31; // xmm3_4
  int v32;
  int v33;
  float v34; // xmm1_4
  int v35;
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm4_4
  float v39; // xmm3_4
  int v40;
  int v41;
  float v42; // xmm1_4
  int v43;
  float v44; // xmm0_4
  float v45; // xmm1_4
  int v46;
  float v47; // xmm2_4
  float v48; // xmm1_4
  int v49;
  int k;
  int v51;
  float v52; // xmm2_4
  float v53; // xmm1_4
  int v54;
  int m;
  int v56;
  float v57; // xmm2_4
  float v58; // xmm1_4
  int v59;
  int n;
  int v61;
  int v62;
  float v63; // xmm1_4
  int16_t *v64;
  int jj;
  int v66;
  int16_t *v67;
  float v68; // xmm1_4
  int v69;
  int v70;
  float v71; // xmm1_4
  int v72;
  int v73;
  int v74;
  float v75; // xmm2_4
  int16_t *v76;
  int j;
  int v78;
  int16_t *v79;
  float v80; // xmm2_4
  int v81;
  int v82;
  float v83; // xmm2_4
  int v84;
  int v85;
  float v86; // xmm1_4
  int16_t *v87;
  int ii;
  int v89;
  int16_t *v90;
  float v91; // xmm1_4
  int v92;
  int v93;
  float v94; // xmm1_4
  int v95;
  int v96;
  float v97; // xmm1_4
  int16_t *v98;
  int i;
  int v100;
  float v101; // xmm0_4
  int16_t *v102;
  float v103; // xmm1_4
  int v104;
  int v105;
  float v106; // xmm0_4
  float v107; // xmm1_4
  int v108;
  int v109;
  float v110; // xmm0_4
  int v112;
  int v113;
  int v114;
  int64_t v115;
  int v116;
  int v117;
  int v118;
  uint8_t *v119;
  uint32_t *v120;
  int v121;
  int64_t v122;
  int v123;
  int64_t v124;
  int v125;

  v114 = *a3;
  LODWORD(v4) = *(uint32_t *)(a2 + 16);
  v113 = a3[1];
  v115 = *(uint64_t *)(a2 + 16) + 481LL - *(uint64_t *)(a2 + 24);
  if ( v115 <= 0 )
  {
    HIDWORD(v4) = *(uint32_t *)(a2 + 20);
    if ( v4 != 0 )
    {
      *(uint32_t *)a4 = 0;
      *(uint32_t *)(a4 + 4) = -1;
      return v4;
    }
  }
  if ( *(uint32_t *)a2 == 8 )
    mpc_decoder_read_bitstream_sv8((uint32_t *)a2, a3, *(uint8_t *)(a4 + 12));
  else
    mpc_decoder_read_bitstream_sv7(a2, (uint8_t **)a3);
  v5 = (uint32_t *)a2;
  if ( *(uint32_t *)(a2 + 32) <= 0x660u )
  {
    v18 = *(uint32_t *)(a2 + 4);
    if ( v18 >= 0 )
    {
      v120 = (uint32_t *)(a2 + 5552);
      v119 = (uint8_t *)(a2 + 440);
      v117 = v18 + 1;
      v121 = 0;
      v116 = a2 + 32144;
      do
      {
        v19 = 4 * v121 + v116;
        v20 = a2 + 36752 + 4 * v121;
        v125 = a2 + 144 * v121 + 816;
        v123 = a2 + 144 * v121 + 888;
        if ( *(uint8_t *)(a2 + v121 + 6000) != 0 )
        {
          v21 = *(v120 - 32);
          if ( v21 != 0 )
          {
            if ( *v120 != 0 )
            {
              v112 = 4 * v121 + v116;
              v22 = __Cc[v21 + 1] * *(float *)(a2 + 4 * *(v119 - 392) + 41360);
              v23 = __Cc[*v120 + 1] * *(float *)(a2 + 4 * *(v119 - 8) + 41360);
              v24 = 0;
              v25 = 0;
              do
              {
                v26 = (float)*(int16_t *)(v125 + v25);
                v27 = *(int16_t *)(v123 + v25);
                v25 += 2;
                v28 = (float)v27 * v23;
                v29 = v26 * v22;
                *(float *)(v112 + v24) = v28 + v29;
                *(float *)(v20 + v24) = v29 - v28;
                v24 += 128;
              }
              while ( v25 != 24 );
              v30 = __Cc[*(v120 - 32) + 1] * *(float *)(a2 + 4 * *(v119 - 388) + 41360);
              v31 = __Cc[*v120 + 1] * *(float *)(a2 + 4 * *(v119 - 4) + 41360);
              v32 = 0;
              v33 = 0;
              do
              {
                v34 = (float)*(int16_t *)(v125 + v33 + 24);
                v35 = *(int16_t *)(v123 + v33 + 24);
                v33 += 2;
                v36 = (float)v35 * v31;
                v37 = v34 * v30;
                *(float *)(v112 + v32 + 1536) = v36 + v37;
                *(float *)(v20 + v32 + 1536) = v37 - v36;
                v32 += 128;
              }
              while ( v33 != 24 );
              v38 = __Cc[*(v120 - 32) + 1] * *(float *)(a2 + 4 * *(v119 - 384) + 41360);
              v39 = __Cc[*v120 + 1] * *(float *)(a2 + 4 * *v119 + 41360);
              v40 = 0;
              v41 = 0;
              do
              {
                v42 = (float)*(int16_t *)(v125 + v41 + 48);
                v43 = *(int16_t *)(v123 + v41 + 48);
                v41 += 2;
                v44 = (float)v43 * v39;
                v45 = v42 * v38;
                *(float *)(v112 + v40 + 3072) = v44 + v45;
                *(float *)(v20 + v40 + 3072) = v45 - v44;
                v40 += 128;
              }
              while ( v41 != 24 );
            }
            else
            {
              v97 = __Cc[v21 + 1] * *(float *)(a2 + 4 * *(v119 - 392) + 41360);
              v98 = (int16_t *)(a2 + 144 * v121 + 816);
              for ( i = 0; i != 1536; i += 128 )
              {
                v100 = *v98++;
                v101 = (float)v100 * v97;
                *(float *)(v19 + i) = v101;
                *(float *)(v20 + i) = v101;
              }
              v102 = (int16_t *)(a2 + 144 * v121 + 840);
              v103 = __Cc[*(v120 - 32) + 1] * *(float *)(a2 + 4 * *(v119 - 388) + 41360);
              v104 = 0;
              do
              {
                v105 = *v102++;
                v106 = (float)v105 * v103;
                *(float *)(v19 + v104 + 1536) = v106;
                *(float *)(v20 + v104 + 1536) = v106;
                v104 += 128;
              }
              while ( v102 != (int16_t *)(a2 + 144 * v121 + 864) );
              v107 = __Cc[*(v120 - 32) + 1] * *(float *)(a2 + 4 * *(v119 - 384) + 41360);
              v108 = 0;
              do
              {
                v109 = *v102++;
                v110 = (float)v109 * v107;
                *(float *)(v19 + v108 + 3072) = v110;
                *(float *)(v20 + v108 + 3072) = v110;
                v108 += 128;
              }
              while ( v102 != (int16_t *)(a2 + 144 * v121 + 888) );
            }
          }
          else
          {
            v74 = 0;
            if ( *v120 != 0 )
            {
              v75 = __Cc[*v120 + 1] * *(float *)(a2 + 4 * *(v119 - 8) + 41360);
              v76 = (int16_t *)(a2 + 144 * v121 + 888);
              for ( j = 0; j != 1536; j += 128 )
              {
                v78 = *v76++;
g4_m128_lane<float>(a1, 0) = (float)v78 * v75;
                *(uint32_t *)(v19 + j) =g4_m128_lane<int32_t>(a1, 0);
                a1 = _mm_xor_ps(a1, g4_m128_from<__m128>(0x80000000));
                *(uint32_t *)(v20 + j) =g4_m128_lane<int32_t>(a1, 0);
              }
              v79 = (int16_t *)(a2 + 144 * v121 + 912);
              v80 = __Cc[*v120 + 1] * *(float *)(a2 + 4 * *(v119 - 4) + 41360);
              v81 = 0;
              do
              {
                v82 = *v79++;
g4_m128_lane<float>(a1, 0) = (float)v82 * v80;
                *(uint32_t *)(v19 + v81 + 1536) =g4_m128_lane<int32_t>(a1, 0);
                a1 = _mm_xor_ps(a1, g4_m128_from<__m128>(0x80000000));
                *(uint32_t *)(v20 + v81 + 1536) =g4_m128_lane<int32_t>(a1, 0);
                v81 += 128;
              }
              while ( v79 != (int16_t *)(a2 + 144 * v121 + 936) );
              v83 = __Cc[*v120 + 1] * *(float *)(a2 + 4 * *v119 + 41360);
              v84 = 0;
              do
              {
                v85 = *v79++;
g4_m128_lane<float>(a1, 0) = (float)v85 * v83;
                *(uint32_t *)(v19 + v84 + 3072) =g4_m128_lane<int32_t>(a1, 0);
                a1 = _mm_xor_ps(a1, g4_m128_from<__m128>(0x80000000));
                *(uint32_t *)(v20 + v84 + 3072) =g4_m128_lane<int32_t>(a1, 0);
                v84 += 128;
              }
              while ( v79 != (int16_t *)(a2 + 144 * v121 + 960) );
            }
            else
            {
              do
              {
                *(uint32_t *)(v19 + v74) = 0;
                *(uint32_t *)(v20 + v74) = 0;
                v74 += 128;
              }
              while ( v74 != 4608 );
            }
          }
        }
        else
        {
          v46 = *(v120 - 32);
          if ( v46 != 0 )
          {
            if ( *v120 != 0 )
            {
              v118 = 4 * v121 + v116;
              v47 = __Cc[v46 + 1] * *(float *)(a2 + 4 * *(v119 - 392) + 41360);
              v48 = __Cc[*v120 + 1] * *(float *)(a2 + 4 * *(v119 - 8) + 41360);
              v49 = 0;
              for ( k = 0; k != 24; k += 2 )
              {
                *(float *)(v118 + v49) = (float)*(int16_t *)(v125 + k) * v47;
                v51 = *(int16_t *)(v123 + k);
                *(float *)(v20 + v49) = (float)v51 * v48;
                v49 += 128;
              }
              v52 = __Cc[*(v120 - 32) + 1] * *(float *)(a2 + 4 * *(v119 - 388) + 41360);
              v53 = __Cc[*v120 + 1] * *(float *)(a2 + 4 * *(v119 - 4) + 41360);
              v54 = 0;
              for ( m = 0; m != 24; m += 2 )
              {
                *(float *)(v118 + v54 + 1536) = (float)*(int16_t *)(v125 + m + 24) * v52;
                v56 = *(int16_t *)(v123 + m + 24);
                *(float *)(v20 + v54 + 1536) = (float)v56 * v53;
                v54 += 128;
              }
              v57 = __Cc[*(v120 - 32) + 1] * *(float *)(a2 + 4 * *(v119 - 384) + 41360);
              v58 = __Cc[*v120 + 1] * *(float *)(a2 + 4 * *v119 + 41360);
              v59 = 0;
              for ( n = 0; n != 1536; n += 128 )
              {
                *(float *)(v118 + n + 3072) = (float)*(int16_t *)(v125 + v59 + 48) * v57;
                v61 = *(int16_t *)(v123 + v59 + 48);
                v59 += 2;
                *(float *)(v20 + n + 3072) = (float)v61 * v58;
              }
            }
            else
            {
              v86 = __Cc[v46 + 1] * *(float *)(a2 + 4 * *(v119 - 392) + 41360);
              v87 = (int16_t *)(a2 + 144 * v121 + 816);
              for ( ii = 0; ii != 1536; ii += 128 )
              {
                v89 = *v87++;
                *(float *)(v19 + ii) = (float)v89 * v86;
                *(uint32_t *)(v20 + ii) = 0;
              }
              v90 = (int16_t *)(a2 + 144 * v121 + 840);
              v91 = __Cc[*(v120 - 32) + 1] * *(float *)(a2 + 4 * *(v119 - 388) + 41360);
              v92 = 0;
              do
              {
                v93 = *v90++;
                *(float *)(v19 + v92 + 1536) = (float)v93 * v91;
                *(uint32_t *)(v20 + v92 + 1536) = 0;
                v92 += 128;
              }
              while ( v90 != (int16_t *)(a2 + 144 * v121 + 864) );
              v94 = __Cc[*(v120 - 32) + 1] * *(float *)(a2 + 4 * *(v119 - 384) + 41360);
              v95 = 0;
              do
              {
                v96 = *v90++;
                *(float *)(v19 + v95 + 3072) = (float)v96 * v94;
                *(uint32_t *)(v20 + v95 + 3072) = 0;
                v95 += 128;
              }
              while ( v90 != (int16_t *)(a2 + 144 * v121 + 888) );
            }
          }
          else
          {
            v62 = 0;
            if ( *v120 != 0 )
            {
              v63 = __Cc[*v120 + 1] * *(float *)(a2 + 4 * *(v119 - 8) + 41360);
              v64 = (int16_t *)(a2 + 144 * v121 + 888);
              for ( jj = 0; jj != 1536; jj += 128 )
              {
                *(uint32_t *)(v19 + jj) = 0;
                v66 = *v64++;
                *(float *)(v20 + jj) = (float)v66 * v63;
              }
              v67 = (int16_t *)(a2 + 144 * v121 + 912);
              v68 = __Cc[*v120 + 1] * *(float *)(a2 + 4 * *(v119 - 4) + 41360);
              v69 = 0;
              do
              {
                *(uint32_t *)(v19 + v69 + 1536) = 0;
                v70 = *v67++;
                *(float *)(v20 + v69 + 1536) = (float)v70 * v68;
                v69 += 128;
              }
              while ( v67 != (int16_t *)(a2 + 144 * v121 + 936) );
              v71 = __Cc[*v120 + 1] * *(float *)(a2 + 4 * *v119 + 41360);
              v72 = 0;
              do
              {
                *(uint32_t *)(v19 + v72 + 3072) = 0;
                v73 = *v67++;
                *(float *)(v20 + v72 + 3072) = (float)v73 * v71;
                v72 += 128;
              }
              while ( v67 != (int16_t *)(a2 + 144 * v121 + 960) );
            }
            else
            {
              do
              {
                *(uint32_t *)(v19 + v62) = 0;
                *(uint32_t *)(v20 + v62) = 0;
                v62 += 128;
              }
              while ( v62 != 4608 );
            }
          }
        }
        ++v121;
        ++v120;
        v119 += 12;
      }
      while ( v121 != v117 );
    }
    mpc_decoder_synthese_filter_float(a2, *(uint32_t *)(a4 + 8), *(uint32_t *)(a2 + 12));
    v5 = (uint32_t *)a2;
  }
  v6 = v5[7];
  v7 = v5[6];
  v5[6] = v7 + 1152;
  v8 = __PAIR64__(v6, v7) + 1152;
  v9 = (unsigned int)v8 < v5[4];
  v10 = v8 - v5[4];
  v5[7] = HIDWORD(v8);
  if ( HIDWORD(v8) == v9 + v5[5] && v10 <= 0x47F && *v5 == 7 )
  {
    v11 = *a3;
    v12 = a3[1] - 11;
    a3[1] = v12 & 7;
    v13 = (uint8_t *)(v11 - (v12 >> 3));
    *a3 = (int)(uintptr_t)(v13);
    v14 = (*v13 | (*(v13 - 1) << 8)) >> (v12 & 7);
    if ( 16 - (v12 & 7u) <= 0xA )
      v14 |= (unsigned int)((*(v13 - 2) << 16) | (*(v13 - 3) << 24)) >> (v12 & 7);
    v124 = *(uint64_t *)(a2 + 24);
    if ( *(uint64_t *)(a2 + 16) == v124 )
    {
      v15 = 0;
      v16 = v14 & 0x7FF;
      v122 = 0;
      if ( v16 != 0 )
      {
        v15 = v16 - 1152;
        v122 = v15;
      }
      *(uint64_t *)(a2 + 16) = v124 + v15;
      v115 += v122;
    }
  }
  if ( SHIDWORD(v115) > 0 )
    goto LABEL_7;
  if ( v115 < 0 )
  {
    LODWORD(v4) = 0;
  }
  else
  {
    if ( (unsigned int)v115 > 0x480 )
    {
LABEL_7:
      LODWORD(v4) = 1152;
      goto LABEL_8;
    }
    LODWORD(v4) = v115;
  }
LABEL_8:
  *(uint32_t *)a4 = v4;
  *(uint32_t *)(a4 + 4) = v113 - a3[1] + 8 * (*a3 - v114);
  HIDWORD(v4) = *(uint32_t *)(a2 + 32);
  if ( HIDWORD(v4) != 0 )
  {
    if ( (unsigned int)v4 > HIDWORD(v4) )
    {
      v17 = v4 - HIDWORD(v4);
      *(uint32_t *)a4 = v17;
      LODWORD(v4) = (uint32_t)(uintptr_t)(memmove(
                      *(void **)(a4 + 8),
                      (const void *)(*(uint32_t *)(a4 + 8) + 4 * *(uint32_t *)(a2 + 32) * *(uint32_t *)(a2 + 12)),
                      v17 * 4 * *(uint32_t *)(a2 + 12)));
      *(uint32_t *)(a2 + 32) = 0;
    }
    else
    {
      *(uint32_t *)(a2 + 32) = HIDWORD(v4) - v4;
      *(uint32_t *)a4 = 0;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: mpc_decoder_synthese_filter_float  (binary VA: 0x10465e0)
// Original: mpc_decoder_synthese_filter_float
// ----------------------------------------------------------------------------
int mpc_decoder_synthese_filter_float(float *a1, float *a2, int a3)
{
  float *v3;
  int v4;
  float *v5;
  float *v6;
  float *v7;
  float v8; // xmm0_4
  float v9; // xmm1_4
  int result;
  float *v11;
  float *v12;
  float *v13;
  float *v14;
  float v15; // xmm0_4
  float v16; // xmm1_4
  float *v17;
  float *v18;
  float *v19;
  float *v20;
  int v21;

  memmove(a1 + 3812, a1 + 1508, 0xF00u);
  v19 = a1 + 8036;
  v3 = a1 + 3748;
  v21 = a3 << 7;
  v17 = a2;
  v4 = 4 * a3;
  do
  {
    sub_10454A0(v19, v3);
    v5 = v3;
    v6 = v17;
    v7 = (float *)&unk_1CC10A0;
    do
    {
      v8 = (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v7[1] * v5[96]) + (float)(*v7 * *v5)) + (float)(v7[2] * v5[128]))
                                                                                                 + (float)(v7[3] * v5[224]))
                                                                                         + (float)(v7[4] * v5[256]))
                                                                                 + (float)(v7[5] * v5[352]))
                                                                         + (float)(v7[6] * v5[384]))
                                                                 + (float)(v7[7] * v5[480]))
                                                         + (float)(v7[8] * v5[512]))
                                                 + (float)(v7[9] * v5[608]))
                                         + (float)(v7[10] * v5[640]))
                                 + (float)(v7[11] * v5[736]))
                         + (float)(v7[12] * v5[768]))
                 + (float)(v7[13] * v5[864]))
         + (float)(v7[14] * v5[896]);
      v9 = v7[15] * v5[992];
      ++v5;
      v7 += 16;
      *v6 = v8 + v9;
      v6 = (float *)((char *)v6 + v4);
    }
    while ( v5 != v3 + 32 );
    result = a3 << 7;
    v19 += 32;
    v17 = (float *)((char *)v17 + v21);
    v3 -= 64;
  }
  while ( v3 != a1 + 1444 );
  if ( a3 > 1 )
  {
    memmove(a1 + 7076, a1 + 4772, 0xF00u);
    v11 = a1 + 7012;
    v20 = a1 + 9188;
    v18 = a2 + 1;
    do
    {
      sub_10454A0(v20, v11);
      v12 = v11;
      v13 = v18;
      v14 = (float *)&unk_1CC10A0;
      do
      {
        v15 = (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v14[1] * v12[96]) + (float)(*v14 * *v12)) + (float)(v14[2] * v12[128])) + (float)(v14[3] * v12[224]))
                                                                                            + (float)(v14[4] * v12[256]))
                                                                                    + (float)(v14[5] * v12[352]))
                                                                            + (float)(v14[6] * v12[384]))
                                                                    + (float)(v14[7] * v12[480]))
                                                            + (float)(v14[8] * v12[512]))
                                                    + (float)(v14[9] * v12[608]))
                                            + (float)(v14[10] * v12[640]))
                                    + (float)(v14[11] * v12[736]))
                            + (float)(v14[12] * v12[768]))
                    + (float)(v14[13] * v12[864]))
            + (float)(v14[14] * v12[896]);
        v16 = v14[15] * v12[992];
        ++v12;
        v14 += 16;
        *v13 = v15 + v16;
        v13 = (float *)((char *)v13 + v4);
      }
      while ( v11 + 32 != v12 );
      result = a3 << 7;
      v20 += 32;
      v18 = (float *)((char *)v18 + v21);
      v11 -= 64;
    }
    while ( v11 != a1 + 4708 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: mpc_random_int  (binary VA: 0x1046990)
// Original: mpc_random_int
// ----------------------------------------------------------------------------
int mpc_random_int(int a1)
{
  int v1;
  int v2;

  v1 = (*(uint32_t *)(a1 + 40) >> 1) | ((uint8_t)byte_1CC18A0[*(uint32_t *)(a1 + 40) & 0xF5] << 31);
  v2 = (2 * *(uint32_t *)(a1 + 44)) | (uint8_t)byte_1CC18A0[(*(uint32_t *)(a1 + 44) >> 25) & 0x63];
  *(uint32_t *)(a1 + 40) = v1;
  *(uint32_t *)(a1 + 44) = v2;
  return v2 ^ v1;
}


