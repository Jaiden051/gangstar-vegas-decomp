#include "Core/Utils/DecompTypes.h"
#include "glitch_vector_std.h"

// ----------------------------------------------------------------------------
// Function: g4_std::vector_pair_streaming_SCommand_e100f3::M_insert_aux  (binary VA: 0xcf3270)
// Original: std::vector<std::pair<glitch::streaming::SCommand,bool>>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::vector_pair_streaming_SCommand_e100f3::M_insert_aux(int a1, int a2, int *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  int *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;

  v3 = *(uint32_t **)(a1 + 4);
  if ( v3 != *(uint32_t **)(a1 + 8) )
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      *v3 = *(v3 - 5);
      v3[1] = *(v3 - 4);
      v3[2] = *(v3 - 3);
      v3[3] = *(v3 - 2);
      v3[4] = *(v3 - 1);
      v4 = *(uint32_t *)(a1 + 4);
    }
    v5 = v4 + 20;
    v6 = v4 - 20;
    *(uint32_t *)(a1 + 4) = v5;
    v25 = *a3;
    v26 = a3[1];
    v27 = a3[2];
    v28 = a3[3];
    v29 = a3[4];
    v7 = v6;
    if ( -858993459 * ((v6 - a2) >> 2) > 0 )
    {
      v21 = -858993459 * ((v6 - a2) >> 2);
      while ( 1 )
      {
        v7 -= 20;
        *(uint32_t *)v6 = *(uint32_t *)v7;
        *(uint32_t *)(v6 + 4) = *(uint32_t *)(v7 + 4);
        *(uint32_t *)(v6 + 8) = *(uint32_t *)(v7 + 8);
        *(uint32_t *)(v6 + 12) = *(uint32_t *)(v7 + 12);
        *(uint8_t *)(v6 + 16) = *(uint8_t *)(v7 + 16);
        if ( --v21 == 0 )
          break;
        v6 -= 20;
      }
    }
    *(uint32_t *)a2 = v25;
    *(uint32_t *)(a2 + 4) = v26;
    *(uint32_t *)(a2 + 8) = v27;
    *(uint32_t *)(a2 + 12) = v28;
    *(uint8_t *)(a2 + 16) = v29;
    return (uint8_t)v29;
  }
  v9 = *(uint32_t **)a1;
  v10 = -858993459 * (((int)(uintptr_t)(v3) - *(uint32_t *)a1) >> 2);
  if ( v10 != 0 )
  {
    v11 = 2 * v10;
    if ( v10 > 2 * v10 || v11 > 0xCCCCCCC )
    {
      v24 = -16;
      v12 = -858993459 * ((a2 - (int)(uintptr_t)(v9)) >> 2);
    }
    else
    {
      v24 = 40 * v10;
      v12 = -858993459 * ((a2 - (int)(uintptr_t)(v9)) >> 2);
      if ( v11 == 0 )
      {
        v23 = 20;
        v22 = 0;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v24 = 20;
    v12 = -858993459 * ((a2 - (int)(uintptr_t)(v9)) >> 2);
  }
  v20 = v12;
  v22 = opNew(v24);
  v23 = v22 + 20;
  v12 = v20;
LABEL_13:
  v13 = (int *)(v22 + 20 * v12);
  if ( v13 != nullptr )
  {
    *v13 = *a3;
    v13[1] = a3[1];
    v13[2] = a3[2];
    v13[3] = a3[3];
    v13[4] = a3[4];
  }
  v14 = *(uint32_t **)a1;
  if ( *(uint32_t *)a1 != a2 )
  {
    v15 = *(uint32_t **)a1;
    v16 = (uint32_t *)v22;
    do
    {
      if ( v16 != nullptr )
      {
        *v16 = *v15;
        v16[1] = v15[1];
        v16[2] = v15[2];
        v16[3] = v15[3];
        v16[4] = v15[4];
      }
      v15 += 5;
      v16 += 5;
    }
    while ( v15 != (uint32_t *)a2 );
    v23 = v22 + 4 * ((unsigned int)(a2 - (uint32_t)(uintptr_t)(v14 + 5)) >> 2) + 40;
  }
  v17 = *(uint32_t **)(a1 + 4);
  if ( v17 != (uint32_t *)a2 )
  {
    v18 = (uint32_t *)a2;
    v19 = (uint32_t *)v23;
    do
    {
      if ( v19 != nullptr )
      {
        *v19 = *v18;
        v19[1] = v18[1];
        v19[2] = v18[2];
        v19[3] = v18[3];
        v19[4] = v18[4];
      }
      v18 += 5;
      v19 += 5;
    }
    while ( v17 != v18 );
    v23 += 4 * (((unsigned int)(uintptr_t)(v17) - a2 - 20) >> 2) + 20;
  }
  if ( *(uint32_t *)a1 != 0 )
    opDelete(*(void **)a1);
  *(uint32_t *)a1 = v22;
  *(uint32_t *)(a1 + 4) = v23;
  *(uint32_t *)(a1 + 8) = v24 + v22;
  return v24 + v22;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_vector_collada_SAnimatio_0f397e::M_fill_insert  (binary VA: 0xd86ff0)
// Original: std::vector<std::vector<glitch::collada::SAnimationClip const*,glitch::core::SAllocator<glitch::collada::SAnimationClip const*,(glitch::memory::E_MEMORY_HINT)0>>,glitch::core::SAllocator<std::vector<glitch::collada::SAnimationClip const*,glitch::core::SAllocator<glitch::collada::SAnimationClip const*,(glitch::memory::E_MEMORY_HINT)0>>,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert
// ----------------------------------------------------------------------------
int g4_std::vector_vector_collada_SAnimatio_0f397e::M_fill_insert(int **a1, int *a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int *v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  bool v9;
  unsigned int v10;
  size_t v11;
  int v12;
  int *v13;
  char **v14;
  int v15;
  int v16;
  uint32_t *v17;
  char *v18;
  char *v19;
  int v20;
  int v21;
  int v22;
  char *v23;
  char *v24;
  uint32_t *v25;
  int v26;
  int v27;
  int v28;
  char *v29;
  char *v30;
  uint32_t *v31;
  int *v32;
  int v33;
  char *v34;
  char *v35;
  int v36;
  uint32_t *v37;
  char *v38;
  int v39;
  int v40;
  int v41;
  int v42;
  char *v43;
  char *v44;
  uint32_t *v45;
  int *v46;
  int v47;
  int *v48;
  uint32_t *v49;
  uint32_t *v50;
  unsigned int v51;
  uint32_t *v52;
  uint32_t *v53;
  uint32_t *k;
  uint32_t *v55;
  int *v56;
  int v57;
  char *v58;
  unsigned int v59;
  char *v60;
  unsigned int v61;
  char *v62;
  char *v63;
  uint32_t *v64;
  int *v65;
  unsigned int v66;
  int *v67;
  int v68;
  uint32_t *v69;
  uint32_t *v70;
  int *v71;
  int v72;
  int v73;
  int v74;
  char *v75;
  char *v76;
  uint32_t *v77;
  int *v78;
  int v79;
  uint32_t *v80;
  unsigned int v81;
  char *v82;
  unsigned int v83;
  int v84;
  uint32_t *v85;
  uint32_t *v86;
  uint32_t *v87;
  int v88;
  typedef uint32_t *_g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef unsigned int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef char *_g4_t_v101;
  typedef unsigned int _g4_t_v102;
  typedef char *_g4_t_v103;
  typedef char *_g4_t_v104;
  typedef size_t _g4_t_v105;
  typedef char *_g4_t_v106;
  typedef int _g4_t_v107;
  typedef uint32_t *_g4_t_v108;
  typedef int *_g4_t_v109;
  typedef int *_g4_t_v110;
  typedef uint8_t *_g4_t_v111;
  typedef int _g4_t_v112;
  typedef int *_g4_t_v113;
  typedef unsigned int _g4_t_v114;
  typedef int *_g4_t_v115;
  typedef int _g4_t_v116;
  typedef int *_g4_t_v117;
  typedef unsigned int _g4_t_i;
  typedef int *_g4_t_j;
  typedef char *_g4_t_v120;
  typedef uint32_t *_g4_t_v121;
  typedef int _g4_t_v122;
  typedef int *_g4_t_v123;
  typedef int *_g4_t_v124;
  typedef int *_g4_t_v125;
  typedef unsigned int _g4_t_v126;
  typedef unsigned int _g4_t_v127;
  typedef unsigned int _g4_t_v128;
  typedef int *_g4_t_v129;
  typedef uint8_t *_g4_t_v130;
  typedef int _g4_t_v131;
  typedef uint32_t *_g4_t_v132;
  typedef uint32_t *_g4_t_v133;
  typedef char *_g4_t_v134;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v89)) > _g4_s0 ? (12u + sizeof(_g4_t_v89)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v90)) > _g4_s1 ? (12u + sizeof(_g4_t_v90)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v91)) > _g4_s2 ? (16u + sizeof(_g4_t_v91)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v92)) > _g4_s3 ? (20u + sizeof(_g4_t_v92)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v93)) > _g4_s4 ? (24u + sizeof(_g4_t_v93)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v94)) > _g4_s5 ? (24u + sizeof(_g4_t_v94)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v95)) > _g4_s6 ? (24u + sizeof(_g4_t_v95)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v96)) > _g4_s7 ? (28u + sizeof(_g4_t_v96)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v97)) > _g4_s8 ? (28u + sizeof(_g4_t_v97)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v98)) > _g4_s9 ? (32u + sizeof(_g4_t_v98)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v99)) > _g4_s10 ? (36u + sizeof(_g4_t_v99)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v100)) > _g4_s11 ? (40u + sizeof(_g4_t_v100)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v101)) > _g4_s12 ? (40u + sizeof(_g4_t_v101)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v102)) > _g4_s13 ? (40u + sizeof(_g4_t_v102)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v103)) > _g4_s14 ? (44u + sizeof(_g4_t_v103)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v104)) > _g4_s15 ? (44u + sizeof(_g4_t_v104)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v105)) > _g4_s16 ? (44u + sizeof(_g4_t_v105)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v106)) > _g4_s17 ? (44u + sizeof(_g4_t_v106)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v107)) > _g4_s18 ? (44u + sizeof(_g4_t_v107)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v108)) > _g4_s19 ? (48u + sizeof(_g4_t_v108)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v109)) > _g4_s20 ? (48u + sizeof(_g4_t_v109)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v110)) > _g4_s21 ? (48u + sizeof(_g4_t_v110)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v111)) > _g4_s22 ? (48u + sizeof(_g4_t_v111)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v112)) > _g4_s23 ? (48u + sizeof(_g4_t_v112)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v113)) > _g4_s24 ? (52u + sizeof(_g4_t_v113)) : _g4_s24,
    _g4_s26 = (52u + sizeof(_g4_t_v114)) > _g4_s25 ? (52u + sizeof(_g4_t_v114)) : _g4_s25,
    _g4_s27 = (52u + sizeof(_g4_t_v115)) > _g4_s26 ? (52u + sizeof(_g4_t_v115)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v116)) > _g4_s27 ? (52u + sizeof(_g4_t_v116)) : _g4_s27,
    _g4_s29 = (52u + sizeof(_g4_t_v117)) > _g4_s28 ? (52u + sizeof(_g4_t_v117)) : _g4_s28,
    _g4_s30 = (56u + sizeof(_g4_t_i)) > _g4_s29 ? (56u + sizeof(_g4_t_i)) : _g4_s29,
    _g4_s31 = (56u + sizeof(_g4_t_j)) > _g4_s30 ? (56u + sizeof(_g4_t_j)) : _g4_s30,
    _g4_s32 = (56u + sizeof(_g4_t_v120)) > _g4_s31 ? (56u + sizeof(_g4_t_v120)) : _g4_s31,
    _g4_s33 = (56u + sizeof(_g4_t_v121)) > _g4_s32 ? (56u + sizeof(_g4_t_v121)) : _g4_s32,
    _g4_s34 = (60u + sizeof(_g4_t_v122)) > _g4_s33 ? (60u + sizeof(_g4_t_v122)) : _g4_s33,
    _g4_s35 = (60u + sizeof(_g4_t_v123)) > _g4_s34 ? (60u + sizeof(_g4_t_v123)) : _g4_s34,
    _g4_s36 = (60u + sizeof(_g4_t_v124)) > _g4_s35 ? (60u + sizeof(_g4_t_v124)) : _g4_s35,
    _g4_s37 = (60u + sizeof(_g4_t_v125)) > _g4_s36 ? (60u + sizeof(_g4_t_v125)) : _g4_s36,
    _g4_s38 = (60u + sizeof(_g4_t_v126)) > _g4_s37 ? (60u + sizeof(_g4_t_v126)) : _g4_s37,
    _g4_s39 = (60u + sizeof(_g4_t_v127)) > _g4_s38 ? (60u + sizeof(_g4_t_v127)) : _g4_s38,
    _g4_s40 = (60u + sizeof(_g4_t_v128)) > _g4_s39 ? (60u + sizeof(_g4_t_v128)) : _g4_s39,
    _g4_s41 = (60u + sizeof(_g4_t_v129)) > _g4_s40 ? (60u + sizeof(_g4_t_v129)) : _g4_s40,
    _g4_s42 = (60u + sizeof(_g4_t_v130)) > _g4_s41 ? (60u + sizeof(_g4_t_v130)) : _g4_s41,
    _g4_s43 = (60u + sizeof(_g4_t_v131)) > _g4_s42 ? (60u + sizeof(_g4_t_v131)) : _g4_s42,
    _g4_s44 = (64u + sizeof(_g4_t_v132)) > _g4_s43 ? (64u + sizeof(_g4_t_v132)) : _g4_s43,
    _g4_s45 = (68u + sizeof(_g4_t_v133)) > _g4_s44 ? (68u + sizeof(_g4_t_v133)) : _g4_s44,
    _g4_s46 = (72u + sizeof(_g4_t_v134)) > _g4_s45 ? (72u + sizeof(_g4_t_v134)) : _g4_s45
  };
  alignas(16) uint8_t _g4_sf[_g4_s46];
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 12u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 12u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 16u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 20u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 24u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 24u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 24u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 28u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 28u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 32u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 36u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 40u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 40u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 40u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 44u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 44u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 44u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 44u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 44u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 48u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 48u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 48u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 48u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 48u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 52u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 52u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 52u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 52u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 52u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 56u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 56u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 56u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 56u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 60u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 60u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 60u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 60u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 60u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 60u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 60u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 60u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 60u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 60u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 64u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 68u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 72u);

  result = a3;
  v113 = a2;
  if ( a3 == 0 )
    return result;
  v5 = a1[1];
  if ( a3 > -1431655765 * (a1[2] - v5) )
  {
    v6 = -1431655765 * (v5 - *a1);
    if ( a3 > 357913941 - v6 )
      sub_1900180("vector::_M_fill_insert");
    v7 = a3;
    if ( v6 >= a3 )
      v7 = v6;
    v8 = -1431655765 * (a2 - *a1);
    v9 = __CFADD__(v7, v6);
    v10 = v7 + v6;
    if ( v9 || v10 > 0x15555555 )
    {
      v93 = -4;
      v11 = 0xFFFFFFFC;
    }
    else
    {
      if ( v10 == 0 )
      {
        v96 = 0;
        v93 = 0;
        v12 = 0;
LABEL_10:
        v13 = (int *)(v12 + 12 * v8);
        for ( i = a3; i != 0; --i )
        {
          if ( v13 != nullptr )
          {
            v14 = (char **)a4;
            v15 = 0;
            v122 = 0;
            v16 = (a4[1] - *a4) >> 2;
            *v13 = 0;
            v13[1] = 0;
            v13[2] = 0;
            if ( v16 != 0 )
            {
              v15 = 4 * v16;
              v122 = sub_4EBDC0(4 * v16);
              v14 = (char **)a4;
            }
            v17 = (uint32_t *)v122;
            *v13 = v122;
            v13[1] = v122;
            v13[2] = v122 + v15;
            v18 = v14[1];
            v103 = *v14;
            if ( v18 != *v14 )
            {
              v19 = *v14;
              do
              {
                if ( v17 != nullptr )
                  *v17 = *(uint32_t *)v19;
                v19 += 4;
                ++v17;
              }
              while ( v18 != v19 );
              v17 = (uint32_t *)(v122 + 4 * ((unsigned int)(v18 - (v103 + 4)) >> 2) + 4);
            }
            v13[1] = (int)(uintptr_t)(v17);
          }
          v13 += 3;
        }
        v123 = (int *)v96;
        for ( j = *a1; j != a2; v123 += 3 )
        {
          if ( v123 != nullptr )
          {
            v20 = 0;
            v21 = 0;
            v22 = (j[1] - *j) >> 2;
            *v123 = 0;
            v123[1] = 0;
            v123[2] = 0;
            if ( v22 != 0 )
            {
              v20 = 4 * v22;
              v21 = sub_4EBDC0(4 * v22);
            }
            *v123 = v21;
            v123[1] = v21;
            v123[2] = v21 + v20;
            v23 = (char *)j[1];
            v108 = (uint32_t *)*j;
            if ( v23 != (char *)*j )
            {
              v24 = (char *)*j;
              v25 = (uint32_t *)v21;
              do
              {
                if ( v25 != nullptr )
                  *v25 = *(uint32_t *)v24;
                v24 += 4;
                ++v25;
              }
              while ( v23 != v24 );
              v21 += 4 * ((unsigned int)(v23 - (char *)(v108 + 1)) >> 2) + 4;
            }
            v123[1] = v21;
          }
          j += 3;
        }
        v124 = &v123[3 * a3];
        v109 = a1[1];
        if ( v109 != a2 )
        {
          do
          {
            if ( v124 != nullptr )
            {
              v26 = 0;
              v27 = 0;
              v28 = (v113[1] - *v113) >> 2;
              *v124 = 0;
              v124[1] = 0;
              v124[2] = 0;
              if ( v28 != 0 )
              {
                v26 = 4 * v28;
                v27 = sub_4EBDC0(4 * v28);
              }
              *v124 = v27;
              v124[1] = v27;
              v124[2] = v27 + v26;
              v29 = (char *)v113[1];
              v120 = (char *)*v113;
              if ( v29 != (char *)*v113 )
              {
                v30 = (char *)*v113;
                v31 = (uint32_t *)v27;
                do
                {
                  if ( v31 != nullptr )
                    *v31 = *(uint32_t *)v30;
                  v30 += 4;
                  ++v31;
                }
                while ( v29 != v30 );
                v27 += 4 * ((unsigned int)(v29 - (v120 + 4)) >> 2) + 4;
              }
              v124[1] = v27;
            }
            v113 += 3;
            v124 += 3;
          }
          while ( v109 != v113 );
          v109 = a1[1];
        }
        v32 = *a1;
        if ( *a1 != v109 )
        {
          do
          {
            if ( *v32 != 0 )
              gll_operator_delete_arr(*v32);
            v32 += 3;
          }
          while ( v32 != v109 );
          v32 = *a1;
        }
        if ( v32 != nullptr )
          gll_operator_delete_arr((int)(uintptr_t)(v32));
        *a1 = (int *)v96;
        result = v93 + v96;
        a1[1] = v124;
        a1[2] = (int *)(v93 + v96);
        return result;
      }
      v93 = 12 * v10;
      v11 = 12 * v10;
    }
    v96 = sub_4EBDC0(v11);
    v12 = v96;
    goto LABEL_10;
  }
  v33 = 0;
  v132 = nullptr;
  v133 = nullptr;
  v134 = nullptr;
  v121 = nullptr;
  v34 = (char *)*a4;
  v35 = (char *)a4[1];
  v36 = (int)(uintptr_t)(&v35[-*a4]) >> 2;
  if ( v36 != 0 )
  {
    v33 = v36;
    v121 = (uint32_t *)sub_4EBDC0(4 * v36);
    v35 = (char *)a4[1];
    v34 = (char *)*a4;
  }
  v37 = v121;
  v132 = v121;
  v133 = v121;
  v134 = (char *)&v121[v33];
  v114 = (unsigned int)(uintptr_t)(v121);
  if ( v35 != v34 )
  {
    v38 = v34;
    do
    {
      if ( v37 != nullptr )
        *v37 = *(uint32_t *)v38;
      v38 += 4;
      ++v37;
    }
    while ( v35 != v38 );
    v114 = (unsigned int)(uintptr_t)(&v121[((unsigned int)(v35 - (v34 + 4)) >> 2) + 1]);
  }
  v133 = (uint32_t *)v114;
  v110 = a1[1];
  v92 = -1431655765 * (v110 - a2);
  if ( a3 >= v92 )
  {
    v65 = a1[1];
    v66 = a3 - v92;
    if ( a3 != v92 )
    {
      v67 = a1[1];
      v128 = a3 - v92;
      v95 = (int)(v114 - (uint32_t)(uintptr_t)(v121)) >> 2;
      v105 = 4 * v95;
      do
      {
        if ( v67 != nullptr )
        {
          v68 = 0;
          *v67 = 0;
          v67[1] = 0;
          v67[2] = 0;
          if ( v95 != 0 )
            v68 = sub_4EBDC0(v105);
          *v67 = v68;
          v67[1] = v68;
          v67[2] = v68 + v105;
          if ( v121 != (uint32_t *)v114 )
          {
            v69 = (uint32_t *)v68;
            v70 = v121;
            do
            {
              if ( v69 != nullptr )
                *v69 = *v70;
              ++v70;
              ++v69;
            }
            while ( v70 != (uint32_t *)v114 );
            v68 += 4 * ((v114 - (unsigned int)(uintptr_t)(v121 + 1)) >> 2) + 4;
          }
          v67[1] = v68;
        }
        v67 += 3;
        --v128;
      }
      while ( v128 != 0 );
      v65 = a1[1];
      v66 = a3 - v92;
    }
    v71 = &v65[3 * v66];
    v129 = v71;
    a1[1] = v71;
    if ( v110 == a2 )
    {
      a1[1] = &v71[v110 - a2];
    }
    else
    {
      v117 = a2;
      do
      {
        if ( v129 != nullptr )
        {
          v72 = 0;
          v73 = 0;
          v74 = (v117[1] - *v117) >> 2;
          *v129 = 0;
          v129[1] = 0;
          v129[2] = 0;
          if ( v74 != 0 )
          {
            v72 = 4 * v74;
            v73 = sub_4EBDC0(4 * v74);
          }
          *v129 = v73;
          v129[1] = v73;
          v129[2] = v73 + v72;
          v75 = (char *)v117[1];
          v106 = (char *)*v117;
          if ( v75 != (char *)*v117 )
          {
            v76 = (char *)*v117;
            v77 = (uint32_t *)v73;
            do
            {
              if ( v77 != nullptr )
                *v77 = *(uint32_t *)v76;
              v76 += 4;
              ++v77;
            }
            while ( v75 != v76 );
            v73 += 4 * ((unsigned int)(v75 - (v106 + 4)) >> 2) + 4;
          }
          v129[1] = v73;
        }
        v117 += 3;
        v129 += 3;
      }
      while ( v110 != v117 );
      v78 = a2;
      a1[1] += v110 - a2;
      do
      {
        if ( v78 != (int *)&v132 )
        {
          v130 = (uint8_t *)*v78;
          v80 = v133;
          v81 = v133 - v121;
          if ( v81 > (v78[2] - *v78) >> 2 )
          {
            v107 = 0;
            v131 = 0;
            if ( v81 != 0 )
            {
              v107 = 4 * v81;
              v131 = sub_4EBDC0(4 * v81);
            }
            if ( v121 != v80 )
            {
              v86 = v121;
              v87 = (uint32_t *)v131;
              do
              {
                if ( v87 != nullptr )
                  *v87 = *v86;
                ++v86;
                ++v87;
              }
              while ( v80 != v86 );
            }
            if ( *v78 != 0 )
              gll_operator_delete_arr(*v78);
            v79 = v131 + v107;
            *v78 = v131;
            v78[2] = v131 + v107;
          }
          else
          {
            v82 = (char *)v78[1];
            v83 = (v82 - (char *)(v130)) >> 2;
            if ( v81 <= v83 )
            {
              if ( v81 != 0 )
              {
                v88 = 4 * v81;
                memmove(v130, v121, 4 * v81);
                v79 = v88 + *v78;
              }
              else
              {
                v79 = *v78;
              }
            }
            else
            {
              v102 = 4 * v83;
              v84 = (int)(4 * v83) >> 2;
              if ( v84 != 0 )
              {
                v90 = v133 - v121;
                memmove(v130, v121, 4 * v84);
                v82 = (char *)v78[1];
                v130 = (uint8_t *)*v78;
                v81 = v90;
                v102 = (unsigned int)(uintptr_t)(&v82[-*v78]) & 0xFFFFFFFC;
              }
              v85 = (uint32_t *)((char *)v132 + v102);
              if ( v80 == (uint32_t *)((char *)v132 + v102) )
              {
                v79 = (int)(uintptr_t)(&v130[4 * v81]);
              }
              else
              {
                do
                {
                  if ( v82 != nullptr )
                    *(uint32_t *)v82 = *v85;
                  ++v85;
                  v82 += 4;
                }
                while ( v80 != v85 );
                v79 = *v78 + 4 * v81;
              }
            }
          }
          v78[1] = v79;
        }
        v78 += 3;
      }
      while ( v110 != v78 );
    }
  }
  else
  {
    v91 = 3 * a3;
    v97 = (int)(uintptr_t)(&a1[1][-3 * a3]);
    v39 = v97;
    if ( (int *)v97 != v110 )
    {
      v115 = &a1[1][-3 * a3];
      v125 = a1[1];
      do
      {
        if ( v125 != nullptr )
        {
          v40 = 0;
          v41 = 0;
          v42 = (v115[1] - *v115) >> 2;
          *v125 = 0;
          v125[1] = 0;
          v125[2] = 0;
          if ( v42 != 0 )
          {
            v40 = 4 * v42;
            v41 = sub_4EBDC0(4 * v42);
          }
          *v125 = v41;
          v125[1] = v41;
          v125[2] = v41 + v40;
          v43 = (char *)v115[1];
          v104 = (char *)*v115;
          if ( v43 != (char *)*v115 )
          {
            v44 = (char *)*v115;
            v45 = (uint32_t *)v41;
            do
            {
              if ( v45 != nullptr )
                *v45 = *(uint32_t *)v44;
              v44 += 4;
              ++v45;
            }
            while ( v43 != v44 );
            v41 += 4 * ((unsigned int)(v43 - (v104 + 4)) >> 2) + 4;
          }
          v125[1] = v41;
        }
        v115 += 3;
        v125 += 3;
      }
      while ( v110 != v115 );
      v39 = (int)(uintptr_t)(a1[1]);
    }
    a1[1] = (int *)(v91 * 4 + v39);
    v100 = -1431655765 * ((v97 - (int)(uintptr_t)(a2)) >> 2);
    if ( v100 > 0 )
    {
      v46 = v110;
      v116 = v97;
      do
      {
        v116 -= 12;
        v46 -= 3;
        if ( (int *)v116 != v46 )
        {
          v49 = *(uint32_t **)v116;
          v50 = *(uint32_t **)(v116 + 4);
          v126 = ((int)(uintptr_t)(v50) - *(uint32_t *)v116) >> 2;
          if ( v126 > (v46[2] - *v46) >> 2 )
          {
            v94 = 0;
            v98 = 0;
            if ( v126 != 0 )
            {
              v89 = *(uint32_t **)(v116 + 4);
              v94 = 4 * v126;
              v98 = sub_4EBDC0(4 * v126);
              v50 = v89;
            }
            if ( v49 != v50 )
            {
              v55 = (uint32_t *)v98;
              do
              {
                if ( v55 != nullptr )
                  *v55 = *v49;
                ++v49;
                ++v55;
              }
              while ( v50 != v49 );
            }
            if ( *v46 != 0 )
              gll_operator_delete_arr(*v46);
            v48 = v110 - 3;
            *v46 = v98;
            v47 = v94 + v98;
            v46[2] = v94 + v98;
          }
          else
          {
            v51 = (v46[1] - *v46) >> 2;
            if ( v126 <= v51 )
            {
              if ( v126 != 0 )
              {
                memmove((void *)*v46, v49, 4 * v126);
                v48 = v110 - 3;
                v47 = 4 * v126 + *v46;
              }
              else
              {
                v47 = *v46;
                v48 = v110 - 3;
              }
            }
            else
            {
              v52 = (uint32_t *)(*(uint32_t *)v116 + 4 * v51);
              if ( v51 != 0 )
              {
                memmove((void *)*v46, *(const void **)v116, 4 * v51);
                v52 = (uint32_t *)(*(uint32_t *)v116 + ((v46[1] - *v46) & 0xFFFFFFFC));
              }
              v53 = *(uint32_t **)(v116 - 12 + 16);
              for ( k = (uint32_t *)v46[1]; v53 != v52; ++k )
              {
                if ( k != nullptr )
                  *k = *v52;
                ++v52;
              }
              v48 = v110 - 3;
              v47 = *v46 + 4 * v126;
            }
          }
          *(int *)((char *)v48  + ((uintptr_t)((char *)v46) - (uintptr_t)(char *)(v110)) + 16) = v47;
        }
        --v100;
      }
      while ( v100 != 0 );
    }
    if ( &a2[v91] != a2 )
    {
      v56 = a2;
      do
      {
        if ( v56 != (int *)&v132 )
        {
          v58 = (char *)v133;
          v111 = (uint8_t *)*v56;
          v59 = v133 - v121;
          v127 = v59;
          if ( v59 > (v56[2] - *v56) >> 2 )
          {
            v99 = 0;
            v112 = 0;
            if ( v59 != 0 )
            {
              v99 = 4 * v59;
              v112 = sub_4EBDC0(4 * v59);
            }
            if ( v121 != (uint32_t *)v58 )
            {
              v63 = (char *)v121;
              v64 = (uint32_t *)v112;
              do
              {
                if ( v64 != nullptr )
                  *v64 = *(uint32_t *)v63;
                v63 += 4;
                ++v64;
              }
              while ( v58 != v63 );
            }
            if ( *v56 != 0 )
              gll_operator_delete_arr(*v56);
            v57 = v112 + v99;
            *v56 = v112;
            v56[2] = v112 + v99;
          }
          else
          {
            v60 = (char *)v56[1];
            v61 = (v60 - (char *)(v111)) >> 2;
            if ( v59 <= v61 )
            {
              if ( v59 != 0 )
              {
                memmove(v111, v121, 4 * v59);
                v57 = *v56 + 4 * v127;
              }
              else
              {
                v57 = *v56;
              }
            }
            else
            {
              v101 = (char *)&v121[v61];
              if ( v61 != 0 )
              {
                memmove(v111, v121, 4 * v61);
                v60 = (char *)v56[1];
                v111 = (uint8_t *)*v56;
                v101 = (char *)v121 + ((unsigned int)(uintptr_t)(&v60[-*v56]) & 0xFFFFFFFC);
              }
              v62 = v101;
              if ( v58 == v101 )
              {
                v57 = (int)(uintptr_t)(&v111[4 * v127]);
              }
              else
              {
                do
                {
                  if ( v60 != nullptr )
                    *(uint32_t *)v60 = *(uint32_t *)v62;
                  v62 += 4;
                  v60 += 4;
                }
                while ( v58 != v62 );
                v57 = *v56 + 4 * v127;
              }
            }
          }
          v56[1] = v57;
        }
        v56 += 3;
      }
      while ( &a2[v91] != v56 );
    }
  }
  result = (int)(uintptr_t)(v121);
  if ( v121 != nullptr )
    return gll_operator_delete_arr((int)(uintptr_t)(v121));
  return result;
}


