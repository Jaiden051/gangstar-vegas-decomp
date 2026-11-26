#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpWorldCo.h"

// ----------------------------------------------------------------------------
// Function: hkpWorldConstraintUtil::addConstraint  (binary VA: 0x175e030)
// Original: hkpWorldConstraintUtil::addConstraint
// ----------------------------------------------------------------------------
int hkpWorldConstraintUtil::addConstraint(hkpWorldConstraintUtil::Self *self, hkpWorld::Self *a2)
{
  volatile int32_t *v2;
  int v3;
  int32_t v4; // kr00_4
  hkpWorld::Self *v5;
  uint16_t *v6;
  int v7;
  int v8;
  uint16_t v9; // di
  char v10; // di
  uint16_t *v11;
  char v12;
  uint32_t *v13;
  int v14;
  int v15;
  int v16;
  char v17;
  uint16_t *v18;
  unsigned int i;
  int v20;
  int v21;
  uint32_t *v22;
  uint16_t *v23;
  int16_t v24; // di
  int v25;
  unsigned int v26;
  int v27;
  int v28;
  uint32_t *v29;
  uint32_t *v30;
  int v31;
  int v32;
  unsigned int v33;
  int v34;
  int v35;
  int v36;
  void *v37;
  void *v38;
  int j;
  int v40;
  void **v41;
  int v42;
  int v43;
  char *v44;
  int v45;
  uint32_t *v46;
  int v47;
  int result;
  int v49;
  int v50;
  int v51;
  int k;
  int v53;
  int v54;
  int v55;
  char *v56;
  int v57;
  uint16_t v58;
  int v59;
  int v60;
  int v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef void *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef char *_g4_t_v74;
  typedef hkpWorld::Self *_g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef uint32_t *_g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int16_t _g4_t_v86;
  typedef int _g4_t_v87;
  typedef void *_g4_t_v88;
  typedef unsigned int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef void *_g4_t_v91;
  typedef char *_g4_t_v92;
  typedef void (**_g4_t_v93)(void **, int, uint32_t *);
  typedef char *_g4_t_v94;
  typedef int _g4_t_v95;
  typedef uint8_t *_g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef uint32_t _g4_t_v99[4];
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef uint16_t *_g4_t_v104;
  typedef uint16_t _g4_t_v105;
  typedef int _g4_t_v106;
  typedef hkpWorld::Self *_g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef uint16_t *_g4_t_v110;
  typedef uint16_t _g4_t_v111;
  typedef char _g4_t_v112;
  typedef uint8_t _g4_t_v113;
  typedef int16_t _g4_t_v114;
  typedef int16_t _g4_t_v115;
  typedef int16_t _g4_t_v116;
  typedef bool _g4_t_v117;
  typedef char _g4_t_v118;
  typedef hkpWorldConstraintUtil::Self **_g4_t_v119;
  typedef int _g4_t_v120;
  typedef uint32_t *_g4_t_v121;
  typedef int _g4_t_v122;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (8u + sizeof(_g4_t_v62)) > _g4_s0 ? (8u + sizeof(_g4_t_v62)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v63)) > _g4_s1 ? (12u + sizeof(_g4_t_v63)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v64)) > _g4_s2 ? (16u + sizeof(_g4_t_v64)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v65)) > _g4_s3 ? (20u + sizeof(_g4_t_v65)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v66)) > _g4_s4 ? (24u + sizeof(_g4_t_v66)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v67)) > _g4_s5 ? (28u + sizeof(_g4_t_v67)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v68)) > _g4_s6 ? (32u + sizeof(_g4_t_v68)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v69)) > _g4_s7 ? (36u + sizeof(_g4_t_v69)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v70)) > _g4_s8 ? (40u + sizeof(_g4_t_v70)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v71)) > _g4_s9 ? (44u + sizeof(_g4_t_v71)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v72)) > _g4_s10 ? (48u + sizeof(_g4_t_v72)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v73)) > _g4_s11 ? (48u + sizeof(_g4_t_v73)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v74)) > _g4_s12 ? (48u + sizeof(_g4_t_v74)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v75)) > _g4_s13 ? (52u + sizeof(_g4_t_v75)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v76)) > _g4_s14 ? (52u + sizeof(_g4_t_v76)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v77)) > _g4_s15 ? (56u + sizeof(_g4_t_v77)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v78)) > _g4_s16 ? (56u + sizeof(_g4_t_v78)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v79)) > _g4_s17 ? (56u + sizeof(_g4_t_v79)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v80)) > _g4_s18 ? (56u + sizeof(_g4_t_v80)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v81)) > _g4_s19 ? (60u + sizeof(_g4_t_v81)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v82)) > _g4_s20 ? (60u + sizeof(_g4_t_v82)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v83)) > _g4_s21 ? (60u + sizeof(_g4_t_v83)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v84)) > _g4_s22 ? (64u + sizeof(_g4_t_v84)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v85)) > _g4_s23 ? (64u + sizeof(_g4_t_v85)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v86)) > _g4_s24 ? (64u + sizeof(_g4_t_v86)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v87)) > _g4_s25 ? (64u + sizeof(_g4_t_v87)) : _g4_s25,
    _g4_s27 = (68u + sizeof(_g4_t_v88)) > _g4_s26 ? (68u + sizeof(_g4_t_v88)) : _g4_s26,
    _g4_s28 = (68u + sizeof(_g4_t_v89)) > _g4_s27 ? (68u + sizeof(_g4_t_v89)) : _g4_s27,
    _g4_s29 = (68u + sizeof(_g4_t_v90)) > _g4_s28 ? (68u + sizeof(_g4_t_v90)) : _g4_s28,
    _g4_s30 = (68u + sizeof(_g4_t_v91)) > _g4_s29 ? (68u + sizeof(_g4_t_v91)) : _g4_s29,
    _g4_s31 = (68u + sizeof(_g4_t_v92)) > _g4_s30 ? (68u + sizeof(_g4_t_v92)) : _g4_s30,
    _g4_s32 = (68u + sizeof(_g4_t_v93)) > _g4_s31 ? (68u + sizeof(_g4_t_v93)) : _g4_s31,
    _g4_s33 = (68u + sizeof(_g4_t_v94)) > _g4_s32 ? (68u + sizeof(_g4_t_v94)) : _g4_s32,
    _g4_s34 = (68u + sizeof(_g4_t_v95)) > _g4_s33 ? (68u + sizeof(_g4_t_v95)) : _g4_s33,
    _g4_s35 = (68u + sizeof(_g4_t_v96)) > _g4_s34 ? (68u + sizeof(_g4_t_v96)) : _g4_s34,
    _g4_s36 = (72u + sizeof(_g4_t_v97)) > _g4_s35 ? (72u + sizeof(_g4_t_v97)) : _g4_s35,
    _g4_s37 = (76u + sizeof(_g4_t_v98)) > _g4_s36 ? (76u + sizeof(_g4_t_v98)) : _g4_s36,
    _g4_s38 = (80u + sizeof(_g4_t_v99)) > _g4_s37 ? (80u + sizeof(_g4_t_v99)) : _g4_s37,
    _g4_s39 = (96u + sizeof(_g4_t_v100)) > _g4_s38 ? (96u + sizeof(_g4_t_v100)) : _g4_s38,
    _g4_s40 = (100u + sizeof(_g4_t_v101)) > _g4_s39 ? (100u + sizeof(_g4_t_v101)) : _g4_s39,
    _g4_s41 = (104u + sizeof(_g4_t_v102)) > _g4_s40 ? (104u + sizeof(_g4_t_v102)) : _g4_s40,
    _g4_s42 = (108u + sizeof(_g4_t_v103)) > _g4_s41 ? (108u + sizeof(_g4_t_v103)) : _g4_s41,
    _g4_s43 = (112u + sizeof(_g4_t_v104)) > _g4_s42 ? (112u + sizeof(_g4_t_v104)) : _g4_s42,
    _g4_s44 = (116u + sizeof(_g4_t_v105)) > _g4_s43 ? (116u + sizeof(_g4_t_v105)) : _g4_s43,
    _g4_s45 = (120u + sizeof(_g4_t_v106)) > _g4_s44 ? (120u + sizeof(_g4_t_v106)) : _g4_s44,
    _g4_s46 = (128u + sizeof(_g4_t_v107)) > _g4_s45 ? (128u + sizeof(_g4_t_v107)) : _g4_s45,
    _g4_s47 = (132u + sizeof(_g4_t_v108)) > _g4_s46 ? (132u + sizeof(_g4_t_v108)) : _g4_s46,
    _g4_s48 = (136u + sizeof(_g4_t_v109)) > _g4_s47 ? (136u + sizeof(_g4_t_v109)) : _g4_s47,
    _g4_s49 = (140u + sizeof(_g4_t_v110)) > _g4_s48 ? (140u + sizeof(_g4_t_v110)) : _g4_s48,
    _g4_s50 = (144u + sizeof(_g4_t_v111)) > _g4_s49 ? (144u + sizeof(_g4_t_v111)) : _g4_s49,
    _g4_s51 = (146u + sizeof(_g4_t_v112)) > _g4_s50 ? (146u + sizeof(_g4_t_v112)) : _g4_s50,
    _g4_s52 = (147u + sizeof(_g4_t_v113)) > _g4_s51 ? (147u + sizeof(_g4_t_v113)) : _g4_s51,
    _g4_s53 = (148u + sizeof(_g4_t_v114)) > _g4_s52 ? (148u + sizeof(_g4_t_v114)) : _g4_s52,
    _g4_s54 = (150u + sizeof(_g4_t_v115)) > _g4_s53 ? (150u + sizeof(_g4_t_v115)) : _g4_s53,
    _g4_s55 = (152u + sizeof(_g4_t_v116)) > _g4_s54 ? (152u + sizeof(_g4_t_v116)) : _g4_s54,
    _g4_s56 = (154u + sizeof(_g4_t_v117)) > _g4_s55 ? (154u + sizeof(_g4_t_v117)) : _g4_s55,
    _g4_s57 = (155u + sizeof(_g4_t_v118)) > _g4_s56 ? (155u + sizeof(_g4_t_v118)) : _g4_s56,
    _g4_s58 = (184u + sizeof(_g4_t_v119)) > _g4_s57 ? (184u + sizeof(_g4_t_v119)) : _g4_s57,
    _g4_s59 = (188u + sizeof(_g4_t_v120)) > _g4_s58 ? (188u + sizeof(_g4_t_v120)) : _g4_s58,
    _g4_s60 = (192u + sizeof(_g4_t_v121)) > _g4_s59 ? (192u + sizeof(_g4_t_v121)) : _g4_s59,
    _g4_s61 = (196u + sizeof(_g4_t_v122)) > _g4_s60 ? (196u + sizeof(_g4_t_v122)) : _g4_s60
  };
  alignas(16) uint8_t _g4_sf[_g4_s61];
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 8u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 12u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 16u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 20u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 24u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 28u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 32u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 36u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 40u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 44u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 48u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 48u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 48u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 52u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 52u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 56u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 56u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 56u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 56u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 60u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 60u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 60u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 64u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 64u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 64u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 64u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 68u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 68u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 68u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 68u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 68u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 68u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 68u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 68u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 68u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 72u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 76u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 80u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 96u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 100u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 104u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 108u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 112u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 116u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 120u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 128u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 132u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 136u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 140u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 144u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 146u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 147u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 148u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 150u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 152u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 154u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 155u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 184u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 188u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 192u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 196u);

  v119 = &self;
  v75 = a2;
  v2 = (volatile int32_t *)((char *)a2 + 4);
  if ( *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v4 = *((uint32_t *)v75 + 1);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
    }
    while ( v4 != __sync_val_compare_and_swap(v2, v4, v3 | (uint16_t)(v4 + 1)) );
  }
  v5 = v75;
  v106 = 0;
  (*(void (**)(uint32_t, int *, int, int, int, int, int, int, int, void *, int, int, int, hkpWorld::Self *, int, int, int, int *, int, int, uint32_t, uint32_t, uint32_t, uint32_t))(**((uint32_t **)v75 + 3) + 24))(
    *((uint32_t *)v75 + 3),
    &v100,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v75,
    v77,
    v81,
    v84,
    &v100,
    v97,
    v98,
    v99[0],
    v99[1],
    v99[2],
    v99[3]);
  v6 = *((uint16_t **)v5 + 4);
  v7 = *((uint32_t *)v5 + 5);
  v8 = *((uint32_t *)v5 + 6);
  v107 = v5;
  v108 = v7;
  v109 = v8;
  if ( v6 != nullptr )
  {
    v9 = v6[8];
  }
  else
  {
    v9 = v105;
    v6 = v104;
  }
  v111 = v9;
  v110 = v6;
  v10 = *(uint8_t *)(v7 + 232);
  v113 = *(uint8_t *)(v76 + 28);
  if ( v10 == 5 )
  {
    v11 = v6;
    v12 = 5;
  }
  else if ( *(uint8_t *)(v8 + 232) == 5 || *(uint32_t *)(v7 + 200) == *(uint32_t *)(v8 + 200) )
  {
    v12 = v10;
    v11 = v6;
  }
  else
  {
    hkpWorldOperationUtil::mergeIslands(
      *(hkpWorldOperationUtil::Self **)(v7 + 8),
      (hkpWorld::Self **)v7,
      (hkpSimulationIsland::Self **)v8);
    v11 = v110;
    v12 = *(uint8_t *)(v108 + 232);
  }
  v117 = v12 == 5;
  v13 = (uint32_t *)*(&v108 + (v12 == 5));
  v14 = v13[50];
  *(uint32_t *)(v76 + 8) = v14;
  ++*(uint32_t *)(v14 + 28);
  v15 = *v11;
  v118 = 0;
  v112 = 0;
  switch ( (uint16_t)v15 )
  {
    case 3:
      v15 = v11[24];
      break;
    case 4:
      v15 = v11[56];
      break;
    case 2:
      v15 = v11[72];
      break;
    default:
      break;
  }
  if ( (unsigned int)(v15 - 30) <= 5 )
    v15 = **((uint16_t **)v11 + 5);
  switch ( v15 )
  {
    case 1:
      v112 = 2;
      v61 = **(uint32_t **)(v76 + 12);
      v120 = *(uint32_t *)(v76 + 12);
      (*(void (**)(char *))(v61 + 92))((char *)&v98 + 3);
      if ( HIBYTE(v98) != 0 )
        v112 |= 4u;
      v118 = G4_VCALL<int>(v76, 32);
      break;
    case 20:
      v112 = 2;
      break;
    case 28:
      v112 = 2;
      v118 = 2;
      break;
    default:
      break;
  }
  LOBYTE(v99[0]) = 0;
  v16 = *(uint32_t *)(v76 + 16);
  if ( v16 != 0 )
  {
    v17 = hkpModifierConstraintAtom::addAllModifierDataToConstraintInfo(v16, v88, v99);
    v112 |= v17;
  }
  v18 = v110;
  for ( i = *v110; i > 0x1D; i = *v18 )
    v18 = *((uint16_t **)v18 + 5);
  if ( i == 29 )
  {
    v20 = v101
        + hkpResponseModifier::tableOfAdditionalSchemaSizes[(uint8_t)~LOBYTE(v99[0])
                                                          & (uint8_t)(*(uint8_t *)(*(uint32_t *)(v76 + 20) + 206)
                                                                            | *(uint8_t *)(*(uint32_t *)(v76 + 24) + 206))
                                                          & 7];
    v101 = v20;
  }
  else
  {
    v20 = v101;
  }
  v116 = 0;
  v115 = 0;
  v114 = 0;
  v21 = v100;
  v89 = (unsigned int)(uintptr_t)(v13);
  *(uint32_t *)(v76 + 48) = (uint32_t)(uintptr_t)(&v107);
  v22 = *(uint32_t **)(v76 + 8);
  if ( v22[2] >= v21 )
    v21 = v22[2];
  if ( v21 < v20 )
    v21 = v20;
  v22[3] += v20;
  v22[2] = v21;
  v22[4] += v102;
  v22[5] += v103;
  v23 = *(uint16_t **)(v76 + 48);
  v24 = v23[10];
  v23[12] += v103;
  v23[10] = v24 + v20;
  v23[11] += v102;
  v25 = v22[2];
  if ( *(uint16_t *)(*(uint32_t *)(v76 + 48) + 20) >= v25 )
    v25 = *(uint16_t *)(*(uint32_t *)(v76 + 48) + 20);
  v22[2] = v25;
  v26 = v89;
  v85 = *(uint16_t *)(v89 + 172);
  if ( *(uint16_t *)(v89 + 172) != 0
    && (v27 = *(uint32_t *)(v89 + 168), v82 = v27, (v28 = *(uint8_t *)(v27 + 19)) <= (unsigned int)v113) )
  {
    v29 = *(uint32_t **)(v89 + 168);
    v30 = (uint32_t *)(v27 + 48);
    v78 = v30;
    v31 = 0;
    do
    {
      if ( v113 <= v28
        && ((v33 = *(uint32_t *)(*v29 + 52), *((uint32_t *)v107 + 13) < v33)
         || *((uint32_t *)v107 + 13) <= v33
         && *(uint32_t *)&dword_D0[v89 ^ v108 ^ v109] < *(uint32_t *)&dword_D0[v89 ^ v29[2] ^ v29[1]])
        || (++v31, v31 >= v85) )
      {
        v34 = v31;
        v83 = v31;
        v26 = v89;
        v32 = 48 * v34;
        v79 = 48 * v34 + 48;
        goto LABEL_42;
      }
      v32 = (int)(uintptr_t)(v30) - v82;
      v29 = v30;
      v30 += 12;
      v28 = *((uint8_t *)v78 + v32 - 29);
    }
    while ( v28 <= v113 );
    v49 = v31;
    v83 = v31;
    v26 = v89;
    v79 = 16 * (3 * v49 + 3);
  }
  else
  {
    v79 = 48;
    v32 = 0;
    v83 = 0;
  }
LABEL_42:
  v35 = *(uint16_t *)(v89 + 172);
  v36 = 0;
  v90 = *(uint16_t *)(v26 + 174) & 0x3FFF;
  if ( v85 < v90 )
    v36 = v83;
  v86 = v85 + 1;
  v73 = v35 - v83;
  v37 = (void *)(v35 + 1);
  if ( v90 < (int)(uintptr_t)(v37) )
  {
    v38 = (void *)(2 * v90);
    v121 = (uint32_t *)&word_30;
    v91 = (void *)v32;
    if ( (int)(uintptr_t)(v38) < (int)(uintptr_t)(v37) )
      v38 = v37;
    hkSmallArrayUtil::reserve((hkSmallArrayUtil::Self *)(v26 + 168), v38, (int)(uintptr_t)(v121), v122);
    v32 = (int)(uintptr_t)(v91);
  }
  v92 = (char *)v32;
  hkMemUtil::memCpyBackwards(
    (hkMemUtil::Self *)(v79 + *(uint32_t *)(v26 + 168)),
    (char *)(*(uint32_t *)(v26 + 168) + v32),
    48 * v73);
  hkMemUtil::memCpyBackwards((hkMemUtil::Self *)&v92[*(uint32_t *)(v26 + 168)], (char *)&v107, (unsigned int)(uintptr_t)(&word_30));
  *(uint16_t *)(v26 + 172) = v86;
  for ( j = 48 * v36; v36 < *(uint16_t *)(v26 + 172); *(uint32_t *)(*(uint32_t *)v40 + 48) = v40 )
  {
    ++v36;
    v40 = *(uint32_t *)(v26 + 168) + j;
    j += 48;
  }
  v87 = *(uint32_t *)(v76 + 48);
  v41 = *(void ***)(*(uint32_t *)v87 + 12);
  v93 = (void (**)(void **, int, uint32_t *))*v41;
  v121 = v99;
  LOBYTE(v120) = *(uint8_t *)(v76 + 29);
  v93[19](v41, v120, v99);
  v99[0] = (v99[0] + 15) & 0xFFFFFFF0;
  v42 = v99[0];
  *(uint16_t *)(v87 + 32) = v99[0];
  if ( v42 != 0 )
  {
    v50 = *(uint32_t *)(v26 + 192);
    v51 = v50 + v42;
    if ( v51 > (*(uint32_t *)(v26 + 196) & 0x3FFFFFFF) )
    {
      v96 = *(uint8_t **)(v26 + 188);
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)&v97,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)(v26 + 188),
        v51,
        1);
      v51 = v99[0] + v50;
      v74 = *(char **)(v26 + 188);
      v80 = v74 - (char *)(v96);
      v94 = v74;
    }
    else
    {
      v74 = *(char **)(v26 + 188);
      v94 = v74;
      v80 = 0;
    }
    *(uint32_t *)(v26 + 192) = v51;
    if ( v83 != 0 )
    {
      for ( k = 0; k != v83; ++k )
      {
        v53 = *(uint32_t *)(v26 + 168) + 48 * k;
        v54 = *(uint32_t *)(v53 + 28);
        if ( v54 != 0 )
        {
          v55 = v80 + v54;
          *(uint32_t *)(v53 + 28) = v55;
          v94 = (char *)(v55 + *(uint16_t *)(v53 + 32));
        }
      }
      v56 = *(char **)(v26 + 188);
      v74 = v94;
      v51 = *(uint32_t *)(v26 + 192);
      v57 = k + 1;
    }
    else
    {
      v56 = v94;
      v57 = 1;
    }
    hkString::memMove(
      (hkString::Self *)&v94[*(uint16_t *)(v87 + 32)],
      v94,
      &v56[v51 - *(uint16_t *)(v87 + 32)] - v74);
    *(uint32_t *)(v87 + 28) = (uint32_t)(uintptr_t)(v94);
    v58 = *(uint16_t *)(v87 + 32);
    if ( *(uint16_t *)(v26 + 172) <= v57 )
    {
      v44 = v94;
      v45 = v87;
      v43 = v58;
    }
    else
    {
      v95 = 48 * v57;
      do
      {
        v59 = *(uint32_t *)(v26 + 168) + v95;
        v60 = *(uint32_t *)(v59 + 28) + v80 + v58;
        if ( *(uint32_t *)(v59 + 28) == 0 )
          v60 = 0;
        ++v57;
        *(uint32_t *)(v59 + 28) = v60;
        v95 += 48;
      }
      while ( v57 < *(uint16_t *)(v26 + 172) );
      v45 = v87;
      v43 = *(uint16_t *)(v87 + 32);
      v44 = *(char **)(v87 + 28);
    }
  }
  else
  {
    v43 = 0;
    v44 = nullptr;
    v45 = v87;
    *(uint32_t *)(v87 + 28) = 0;
  }
  (*(void (**)(uint32_t, char *, int))(**(uint32_t **)(*(uint32_t *)v45 + 12) + 84))(
    *(uint32_t *)(*(uint32_t *)v45 + 12),
    v44,
    v43);
  v46 = *(uint32_t **)(v45 + 4 * (1 - *(uint8_t *)(v45 + 26)) + 4);
  *(uint16_t *)(v45 + 34) = v46[45];
  v47 = v46[45];
  if ( v47 == (v46[46] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(v46 + 44),
      4,
      v122);
    v47 = v46[45];
  }
  result = v46[44];
  *(uint32_t *)(result + 4 * v47) = v76;
  ++v46[45];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldConstraintUtil::removeConstraint  (binary VA: 0x175e8b0)
// Original: hkpWorldConstraintUtil::removeConstraint
// ----------------------------------------------------------------------------
hkpWorldConstraintUtil::Self * hkpWorldConstraintUtil::removeConstraint(hkpWorldConstraintUtil::Self *self)
{
  int v1;
  unsigned int v2;
  int v3;
  int v4;
  uint32_t *v5;
  uint16_t *v6;
  int16_t v7; // di
  int16_t v8; // di
  int16_t v9;
  uint16_t v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint16_t v18;
  unsigned int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  hkpWorldConstraintUtil::Self *result;
  int v25;
  int32_t v26; // kr00_4
  int32_t v27;
  int32_t v28; // ett
  void *v29;
  int v30;
  int v31;
  int16_t v32;

  v1 = *((uint32_t *)self + 2);
  v2 = *((uint32_t *)self + 12);
  *(uint8_t *)(v1 + 37) = *(uint8_t *)(v1 + 37) & 0xFC | 1;
  v3 = *(uint16_t *)(v2 + 24);
  v4 = *(uint16_t *)(v2 + 20);
  v31 = *(uint16_t *)(v2 + 22);
  v5 = *((uint32_t **)self + 2);
  if ( *((uint32_t *)self + 12) != 0 )
  {
    v5[5] -= v3;
    v32 = v4;
    v5[3] -= v4;
    v5[4] -= v31;
    v6 = *((uint16_t **)self + 12);
    v7 = v6[12];
    v6[11] -= v31;
    v8 = v7 - v3;
    v9 = v6[10] - v32;
    v6[12] = v8;
    v6[10] = v9;
  }
  --*(uint32_t *)(v1 + 28);
  *((uint32_t *)self + 2) = 0;
  v10 = *(uint16_t *)(v2 + 34);
  v11 = *(uint32_t *)(v2 + 4 * (1 - *(uint8_t *)(v2 + 26)) + 4);
  v12 = *(uint32_t *)(v11 + 176);
  v13 = *(uint32_t *)(v12 + 4 * *(uint32_t *)(v11 + 180) - 4);
  *(uint32_t *)(v12 + 4 * v10) = v13;
  --*(uint32_t *)(v11 + 180);
  v14 = 0;
  *(uint16_t *)(*(uint32_t *)(v13 + 48) + 34) = v10;
  v15 = *(uint32_t *)(v2 + 28);
  v16 = *(uint32_t *)(v2 + 4 * *(uint8_t *)(v2 + 26) + 4);
  if ( v15 != 0 )
  {
    v17 = *(uint16_t *)(v2 + 32);
    v29 = (void *)(v15 + v17);
    v30 = *(uint32_t *)(v16 + 192) + *(uint32_t *)(v16 + 188) - (v15 + v17);
    v14 = -v17;
    hkString::memMove(*(hkString::Self **)(v2 + 28), v29, v30);
    *(uint32_t *)(v16 + 192) -= *(uint16_t *)(v2 + 32);
    *(uint32_t *)(v2 + 28) = 0;
  }
  *((uint32_t *)self + 12) = 0;
  v18 = *(uint16_t *)(v16 + 172);
  v19 = 48 * v18 + *(uint32_t *)(v16 + 168) - 48;
  if ( v2 < v19 )
  {
    do
    {
      v20 = *(uint32_t *)(v2 + 48);
      *(uint32_t *)(v2 + 4) = *(uint32_t *)(v2 + 52);
      *(uint32_t *)(v2 + 8) = *(uint32_t *)(v2 + 56);
      *(uint32_t *)(v2 + 12) = *(uint32_t *)(v2 + 60);
      *(uint32_t *)(v2 + 16) = *(uint32_t *)(v2 + 64);
      *(uint32_t *)(v2 + 20) = *(uint32_t *)(v2 + 68);
      *(uint32_t *)(v2 + 24) = *(uint32_t *)(v2 + 72);
      *(uint32_t *)(v2 + 28) = *(uint32_t *)(v2 + 76);
      v21 = *(uint32_t *)(v2 + 80);
      *(uint32_t *)v2 = v20;
      *(uint32_t *)(v2 + 32) = v21;
      *(uint32_t *)(v20 + 48) = v2;
      v22 = *(uint32_t *)(v2 + 28);
      v2 += 48;
      v23 = v14 + v22;
      if ( v22 == 0 )
        v23 = 0;
      *(uint32_t *)(v2 - 20) = v23;
    }
    while ( v2 < v19 );
    v18 = *(uint16_t *)(v16 + 172);
  }
  result = self;
  *(uint16_t *)(v16 + 172) = v18 - 1;
  if ( *((uint16_t *)self + 3) != 0 )
  {
    do
    {
      v26 = *((uint32_t *)self + 1);
      HIWORD(v25) = HIWORD(v26);
      LOWORD(v25) = 0;
      v27 = v25 | (uint16_t)(v26 - 1);
      v28 = v26;
      result = (hkpWorldConstraintUtil::Self *)__sync_val_compare_and_swap((volatile int32_t *)self + 1, v28, v27);
    }
    while ( (hkpWorldConstraintUtil::Self *)v28 != result );
    if ( (uint16_t)v27 == 0 )
      return (hkpWorldConstraintUtil::Self *)G4_VCALL<int>(self, 16);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldConstraintUtil::getConstraint  (binary VA: 0x175eab0)
// Original: hkpWorldConstraintUtil::getConstraint
// ----------------------------------------------------------------------------
int hkpWorldConstraintUtil::getConstraint(hkpWorldConstraintUtil::Self *self, const hkpEntity::Self *a2)
{
  int v2;
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  unsigned int v8;
  hkpWorldConstraintUtil::Self *v9;
  uint32_t v10[5];

  v9 = self;
  v10[0] = (uint32_t)(uintptr_t)(a2);
  v8 = 0;
  while ( 1 )
  {
    v2 = v10[v8 / 4 - 1];
    if ( *(uint16_t *)(v2 + 172) != 0 )
      break;
LABEL_7:
    v8 += 4;
    if ( v8 == 8 )
      return 0;
  }
  v3 = *(uint32_t **)(v2 + 168);
  if ( v10[v8 / 0xFFFFFFFC] != (v2 ^ v3[2] ^ v3[1]) )
  {
    v4 = v3 + 12;
    v5 = 0;
    while ( ++v5 < *(uint16_t *)(v2 + 172) )
    {
      v6 = v4;
      v4 += 12;
      if ( v10[v8 / 0xFFFFFFFC] == (v2 ^ v6[2] ^ v6[1]) )
        return *v6;
    }
    goto LABEL_7;
  }
  v6 = *(uint32_t **)(v2 + 168);
  return *v6;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldConstraintUtil::removeAndDeleteModifier  (binary VA: 0x175eb70)
// Original: hkpWorldConstraintUtil::removeAndDeleteModifier
// ----------------------------------------------------------------------------
unsigned int hkpWorldConstraintUtil::removeAndDeleteModifier(uint32_t *a1, uint32_t *a2, int a3, char a4, __m128i a5)
{
  unsigned int result;
  uint16_t *v6;
  uint16_t *v7;
  uint16_t v8;
  int v9;
  int32_t v10;
  int16_t v11;
  uint16_t *v12;
  int16_t v13; // di
  int16_t v14; // di
  int16_t v15;
  int address;
  uint16_t *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int *v32;

  G4_VCALL<void>(a2, 32, v18, v19, v20, v21, v22, a3, v23, v24, v25, v26, v27, v28, v29, v30, v31);
  result = (unsigned int)(uintptr_t)(a1);
  v6 = (uint16_t *)a1[4];
  if ( v6 == nullptr )
    return result;
  v32 = (int *)a1[12];
  v7 = *((uint16_t **)v6 + 5);
  if ( a2 == (uint32_t *)*v6 )
  {
    if ( v32 != nullptr )
    {
      v32[3] = (int)(uintptr_t)(v7);
      *((uint16_t *)v32 + 8) = v6[9];
    }
    v17 = nullptr;
    if ( *v7 >= 0x1Eu )
      v17 = v7;
    a1[4] = (uint32_t)(uintptr_t)(v17);
LABEL_11:
    if ( v32 != nullptr )
    {
      a5 = g4_to_m128i(0);
      a4 = 0;
      hkpModifierConstraintAtom::addModifierDataToConstraintInfo(v6, &a5, &a4);
      a4 &= *(uint8_t *)(a1[5] + 206) | *(uint8_t *)(a1[6] + 206);
      v8 = hkpResponseModifier::tableOfAdditionalSchemaSizes[a4 & 7];
      a2[3] += v8;
      *(uint16_t *)(a1[12] + 20) += v8;
      v9 = *v32;
      if ( *(uint32_t *)(*v32 + 48) != 0 )
      {
        v10 =g4_m128_lane<int32_t>(a5, 2);
        a2[3] -=g4_m128_lane<int32_t>(a5, 1);
        a2[4] -= v10;
        v11 =g4_m128_lane<int16_t>(a5, 6);
        a2[5] -=g4_m128_lane<int32_t>(a5, 3);
        v12 = *(uint16_t **)(v9 + 48);
        v13 = v12[12];
        v12[11] -= v10;
        v14 = v13 - v11;
        v15 = v12[10] -g4_m128_lane<int16_t>(a5, 2);
        v12[12] = v14;
        v12[10] = v15;
      }
    }
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    return (*(int (**)(uint32_t, uint16_t *, uint32_t))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
             *(uint32_t *)(*(uint32_t *)address + 44),
             v6,
             v6[8]);
  }
  result = *v7;
  if ( result <= 0x1D )
    return result;
  if ( a2 == (uint32_t *)result )
  {
    v7 = (uint16_t *)a1[4];
    v6 = *((uint16_t **)v6 + 5);
LABEL_10:
    *((uint32_t *)v7 + 5) = *((uint32_t *)v6 + 5);
    v7[9] = v6[9];
    goto LABEL_11;
  }
  while ( 1 )
  {
    v6 = *((uint16_t **)v7 + 5);
    result = *v6;
    if ( result <= 0x1D )
      return result;
    if ( a2 == (uint32_t *)result )
      goto LABEL_10;
    v7 = *((uint16_t **)v7 + 5);
  }
}

// ----------------------------------------------------------------------------
// Function: hkpWorldConstraintUtil::findModifier  (binary VA: 0x175ed10)
// Original: hkpWorldConstraintUtil::findModifier
// ----------------------------------------------------------------------------
uint16_t * hkpWorldConstraintUtil::findModifier(int a1, int a2)
{
  uint16_t *result;
  int v3;

  result = *(uint16_t **)(a1 + 16);
  if ( result == nullptr )
    return nullptr;
  v3 = *result;
  while ( a2 != v3 )
  {
    result = *((uint16_t **)result + 5);
    v3 = *result;
    if ( (uint16_t)v3 <= 0x1Du )
      return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldConstraintUtil::findLastModifier  (binary VA: 0x175ed50)
// Original: hkpWorldConstraintUtil::findLastModifier
// ----------------------------------------------------------------------------
int hkpWorldConstraintUtil::findLastModifier(hkpWorldConstraintUtil::Self *self)
{
  int result;

  result = *((uint32_t *)self + 4);
  if ( result == 0 )
    return 0;
  while ( **(uint16_t **)(result + 20) > 0x1Du )
    result = *(uint32_t *)(result + 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldConstraintUtil::addModifier  (binary VA: 0x175ed80)
// Original: hkpWorldConstraintUtil::addModifier
// ----------------------------------------------------------------------------
hkpConstraintOwner::Self * hkpWorldConstraintUtil::addModifier(hkpConstraintOwner::Self **self, hkpConstraintInstance::Self *a2, hkpConstraintOwner::Self *a3, hkpModifierConstraintAtom::Self *a4, __m128i a5, int a6, hkpConstraintOwner::Self *a7, int a8)
{
  int LastModifier;
  int v10;
  hkpConstraintOwner::Self *result;
  int32_t v12;
  uint16_t *v13;
  int16_t v14;
  int v15;
  uint16_t v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  uint16_t v37;
  hkpConstraintOwner::Self *v38;
  uint8_t v39;

  G4_VCALL<void>(a2, 32, v19, v20, v21, v22, v23, a3, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36);
  LastModifier = hkpWorldConstraintUtil::findLastModifier((hkpWorldConstraintUtil::Self *)self);
  v38 = *(self + 12);
  if ( *(uint16_t *)a2 == 33 && LastModifier != 0 )
  {
    *((uint32_t *)a2 + 5) = *(uint32_t *)(LastModifier + 20);
    *((uint16_t *)a2 + 9) = *(uint16_t *)(LastModifier + 18);
    *(uint32_t *)(LastModifier + 20) = (uint32_t)(uintptr_t)(a2);
    *(uint16_t *)(LastModifier + 18) = *((uint16_t *)a2 + 8);
    goto LABEL_19;
  }
  v10 = (int)(uintptr_t)(*(self + 4));
  if ( v10 != 0 && *(uint16_t *)v10 == 34 )
  {
    *((uint32_t *)a2 + 5) = *(uint32_t *)(v10 + 20);
    *((uint16_t *)a2 + 9) = *((uint16_t *)*(self + 4) + 9);
    *((uint32_t *)*(self + 4) + 5) = (uint32_t)(uintptr_t)(a2);
    *((uint16_t *)*(self + 4) + 9) = *((uint16_t *)a2 + 8);
LABEL_19:
    result = v38;
    if ( v38 == nullptr )
      return result;
    goto LABEL_6;
  }
  *(self + 4) = (hkpConstraintOwner::Self *)(a2);
  if ( v38 == nullptr )
  {
    v18 = (int)(uintptr_t)(*(self + 3));
    a8 = 0;
    G4_VCALL<void>(v18, 24, &a5);
    *((uint32_t *)a2 + 5) = a6;
    result = a7;
    *((uint16_t *)a2 + 9) = (uint16_t)(uintptr_t)a7;
    return result;
  }
  *((uint32_t *)a2 + 5) = *((uint32_t *)v38 + 3);
  *((uint16_t *)a2 + 9) = *((uint16_t *)v38 + 8);
  *((uint32_t *)v38 + 3) = (uint32_t)(uintptr_t)(a2);
  *((uint16_t *)v38 + 8) = *((uint16_t *)a2 + 8);
LABEL_6:
  a5 = g4_to_m128i(0);
  LOBYTE(a4) = 0;
  v39 = hkpModifierConstraintAtom::addModifierDataToConstraintInfo(a2, &a5, &a4);
  result = *(self + 12);
  if ( result != nullptr )
  {
    v12 =g4_m128_lane<int32_t>(a5, 0);
    if ( *((uint32_t *)a2 + 2) >=g4_m128_lane<int32_t>(a5, 0) )
      v12 = *((uint32_t *)a2 + 2);
    if ( v12 <g4_m128_lane<int32_t>(a5, 1) )
      v12 =g4_m128_lane<int32_t>(a5, 1);
    *((uint32_t *)a2 + 3) +=g4_m128_lane<int32_t>(a5, 1);
    *((uint32_t *)a2 + 2) = v12;
    *((uint32_t *)a2 + 4) +=g4_m128_lane<int32_t>(a5, 2);
    *((uint32_t *)a2 + 5) +=g4_m128_lane<int32_t>(a5, 3);
    v13 = (uint16_t *)(*(self + 12));
    v37 =g4_m128_lane<int16_t>(a5, 6) + v13[12];
    v14 =g4_m128_lane<int16_t>(a5, 2) + v13[10];
    v13[11] +=g4_m128_lane<int16_t>(a5, 4);
    result = (hkpConstraintOwner::Self *)v37;
    v13[10] = v14;
    v13[12] = v37;
    v15 = *((uint32_t *)a2 + 2);
    if ( *((uint16_t *)*(self + 12) + 10) >= v15 )
      v15 = *((uint16_t *)*(self + 12) + 10);
    *((uint32_t *)a2 + 2) = v15;
  }
  LOBYTE(a4) = (uint8_t)(uintptr_t)a4 & (*((uint8_t *)*(self + 5) + 206) | *((uint8_t *)*(self + 6) + 206));
  v16 = hkpResponseModifier::tableOfAdditionalSchemaSizes[(uint8_t)(uintptr_t)a4 & 7];
  *((uint32_t *)a2 + 3) -= v16;
  *((uint16_t *)*(self + 12) + 10) -= v16;
  v17 = (int)(uintptr_t)(*(self + 12));
  if ( v17 != 0 )
  {
    result = (hkpConstraintOwner::Self *)v39;
    *(uint8_t *)(v17 + 18) |= v39;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldConstraintUtil::updateFatherOfMovedAtom  (binary VA: 0x175ef90)
// Original: hkpWorldConstraintUtil::updateFatherOfMovedAtom
// ----------------------------------------------------------------------------
hkpWorldConstraintUtil::Self * hkpWorldConstraintUtil::updateFatherOfMovedAtom(hkpWorldConstraintUtil::Self *self, hkpConstraintInstance::Self *a2, const hkpConstraintAtom::Self *a3, const hkpConstraintAtom::Self *a4)
{
  hkpWorldConstraintUtil::Self *result;
  int v5;
  int v6;

  result = self;
  v5 = *((uint32_t *)self + 4);
  v6 = *((uint32_t *)self + 12);
  if ( v5 == 0 )
    goto LABEL_8;
  if ( (hkpConstraintInstance::Self *)v5 == a2 )
  {
    *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(a3);
LABEL_8:
    if ( v6 != 0 )
    {
      *(uint32_t *)(v6 + 12) = (uint32_t)(uintptr_t)(a3);
      *(uint16_t *)(v6 + 16) = (uint16_t)(uintptr_t)a4;
      return (hkpWorldConstraintUtil::Self *)(uint16_t)(uintptr_t)a4;
    }
    return result;
  }
  while ( *(hkpConstraintInstance::Self **)(v5 + 20) != a2 )
    v5 = *(uint32_t *)(v5 + 20);
  result = (hkpWorldConstraintUtil::Self *)(uint16_t)(uintptr_t)a4;
  *(uint32_t *)(v5 + 20) = (uint32_t)(uintptr_t)(a3);
  *(uint16_t *)(v5 + 18) = (uint16_t)(uintptr_t)a4;
  return result;
}


