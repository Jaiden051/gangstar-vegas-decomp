#include "Core/Utils/DecompTypes.h"
#include "glf_LoadingReport.h"

// ----------------------------------------------------------------------------
// Function: glf::LoadingReport::Construct  (binary VA: 0xc8b500)
// Original: glf::LoadingReport::LoadingReport
// ----------------------------------------------------------------------------
pthread_mutex_t ** glf::LoadingReport::Construct(glf::LoadingReport::Self *self)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)((char *)self + 4);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self) + 24, (char *)&unk_1B15112, (int)(uintptr_t)(&v2) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self) + 28, (char *)&unk_1B15112, (int)(uintptr_t)(&v2));
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 22) = (uint32_t)(uintptr_t)(&dword_213B814);
  return glf::Mutex::Construct((pthread_mutex_t **)self + 23, 0);
}

// ----------------------------------------------------------------------------
// Function: glf::LoadingReport::AddEntry  (binary VA: 0xc8b5b0)
// Original: glf::LoadingReport::AddEntry
// ----------------------------------------------------------------------------
int glf::LoadingReport::AddEntry(int a1, int a2)
{
  int v2;
  size_t v3;
  size_t v4;
  size_t v5;
  int v6;
  int v7;
  size_t v8;
  size_t v9;
  int v10;
  void *v11;
  void *v12;
  uint32_t *v13;
  typedef size_t _g4_t_v15;
  typedef const void *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t _g4_t_v24[10];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v16)) > _g4_s1 ? (20u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v17)) > _g4_s2 ? (24u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v18)) > _g4_s3 ? (28u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v19)) > _g4_s4 ? (48u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v20)) > _g4_s5 ? (52u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v21)) > _g4_s6 ? (56u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v22)) > _g4_s7 ? (60u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v23)) > _g4_s8 ? (64u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v24)) > _g4_s9 ? (68u + sizeof(_g4_t_v24)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 56u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 68u);

  glf::Mutex::Lock((pthread_mutex_t **)(a1 + 92));
  v2 = *(uint32_t *)(a1 + 8);
  if ( v2 == 0 )
  {
    v17 = a1 + 4;
LABEL_16:
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v19 = &dword_213B814;
    g4_std::string::construct_copy(&v23, a2);
    g4_std::string::construct_copy(v24, &v19);
    v24[1] = v20;
    v24[2] = v21;
    v24[3] = v22;
    sub_C8AED0(&v18, (uint32_t *)a1, v17, (int)(uintptr_t)(&v23));
    v17 = v18;
    v11 = (void *)(v24[0] - 12);
    if ( (uint32_t *)(v24[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v24[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
    v12 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    v13 = v19 - 3;
    if ( v19 - 3 != dword_213B808 && __sync_fetch_and_add(v19 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v13);
    goto LABEL_19;
  }
  v16 = *(const void **)a2;
  v3 = *(uint32_t *)(*(uint32_t *)a2 - 12);
  v17 = a1 + 4;
  do
  {
    while ( 1 )
    {
      v4 = v3;
      v5 = *(uint32_t *)(*(uint32_t *)(v2 + 16) - 12);
      v15 = v3;
      if ( v5 <= v3 )
        v4 = *(uint32_t *)(*(uint32_t *)(v2 + 16) - 12);
      v6 = memcmp(*(const void **)(v2 + 16), v16, v4);
      v3 = v15;
      v7 = v5 - v15;
      if ( v6 == 0 )
        v6 = v7;
      if ( v6 < 0 )
        break;
      v17 = v2;
      v2 = *(uint32_t *)(v2 + 8);
      if ( v2 == 0 )
        goto LABEL_10;
    }
    v2 = *(uint32_t *)(v2 + 12);
  }
  while ( v2 != 0 );
LABEL_10:
  if ( a1 + 4 == v17 )
    goto LABEL_16;
  v8 = v15;
  v9 = *(uint32_t *)(*(uint32_t *)(v17 + 16) - 12);
  if ( v9 <= v15 )
    v8 = *(uint32_t *)(*(uint32_t *)(v17 + 16) - 12);
  v10 = memcmp(v16, *(const void **)(v17 + 16), v8);
  if ( v10 == 0 )
    v10 = v15 - v9;
  if ( v10 < 0 )
    goto LABEL_16;
LABEL_19:
  g4_std::string::assign_str(v17 + 20, a2);
  *(uint32_t *)(v17 + 24) += *(uint32_t *)(a2 + 4);
  *(uint32_t *)(v17 + 32) += *(uint32_t *)(a2 + 12);
  ++*(uint32_t *)(v17 + 28);
  return glf::Mutex::Unlock((pthread_mutex_t **)(a1 + 92));
}

// ----------------------------------------------------------------------------
// Function: glf::LoadingReport::Start  (binary VA: 0xc8bce0)
// Original: glf::LoadingReport::Start
// ----------------------------------------------------------------------------
int glf::LoadingReport::Start(glf::LoadingReport::Self *self, char *s)
{
  size_t v2;
  size_t v3;

  glf::Mutex::Lock((pthread_mutex_t **)self + 23);
  std::_Rb_tree<std::string,std::pair<std::string const,glf::LoadingReport::Entry>,std::_Select1st<std::pair<std::string const,glf::LoadingReport::Entry>>,std::less<std::string>,std::allocator<std::pair<std::string const,glf::LoadingReport::Entry>>>::_M_erase(
    (int)(uintptr_t)(self),
    *((void **)self + 2));
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)((char *)self + 4);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 4);
  *((uint32_t *)self + 5) = 0;
  v2 = strlen(s);
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 88, s, v2);
  v3 = strlen(s);
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 24, s, v3);
  glf::TimeTracker::Start((glf::LoadingReport::Self *)((char *)self + 24));
  return glf::Mutex::Unlock((pthread_mutex_t **)self + 23);
}

// ----------------------------------------------------------------------------
// Function: glf::LoadingReport::Stop  (binary VA: 0xc8e910)
// Original: glf::LoadingReport::Stop
// ----------------------------------------------------------------------------
int glf::LoadingReport::Stop(glf::LoadingReport::Self *self)
{
  char *v1;
  size_t v2;
  size_t v3;
  size_t v4;
  int v5;
  int v6;
  size_t v7;
  size_t v8;
  int v9;
  void *v10;
  void *v11;
  uint32_t *v12;
  unsigned int v13;
  size_t v14;
  int v15;
  char *v16;
  char *v17;
  int v18;
  char *v19;
  int v20;
  unsigned int v21;
  char *v22;
  char *v23;
  char *v24;
  char *v25;
  bool v26;
  void *v27;
  char *v28;
  char *v29;
  void *v30;
  int v31;
  int v32;
  char *v33;
  char *v34;
  uint32_t *v35;
  int *v36;
  size_t v37;
  size_t v38;
  size_t v39;
  int v40;
  int v41;
  size_t v42;
  int v43;
  int v44;
  size_t v45;
  int v46;
  int v47;
  int *v48;
  uint32_t *v49;
  int *v50;
  size_t v51;
  unsigned int v52;
  int v53;
  int *v54;
  void *v55;
  char *v56;
  uint32_t *v57;
  void *v58;
  int v59;
  char *j;
  void *v62;
  unsigned int v63;
  int v64;
  char *v65;
  uint32_t *v66;
  char *v67;
  char *v68;
  char *v69;
  char *v70;
  uint32_t *v71;
  char *v72;
  char *v73;
  char *v74;
  char *v75;
  void *v76;
  char *i;
  void *v78;
  int v79;
  uint32_t *v80;
  size_t v81;
  int v82;
  uint32_t *v83;
  size_t v84;
  int v85;
  unsigned int v86;
  int v87;
  unsigned int v88;
  int *v89;
  unsigned int v90;
  unsigned int v91;
  uint32_t *v92;
  size_t v93;
  unsigned int v94;
  int v95;
  int v96;
  int savedregs;
  typedef const char *_g4_t_v97;
  typedef const char *_g4_t_v98;
  typedef const char *_g4_t_v99;
  typedef double _g4_t_v100 __attribute__((aligned(1)));
  typedef size_t _g4_t_v101;
  typedef char *_g4_t_v102;
  typedef size_t _g4_t_v103;
  typedef size_t _g4_t_v104;
  typedef const void *_g4_t_v105;
  typedef char *_g4_t_v106;
  typedef const void *_g4_t_v107;
  typedef int _g4_t_v108;
  typedef int *_g4_t_v109;
  typedef uint32_t *_g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int *_g4_t_v113;
  typedef char *_g4_t_v114;
  typedef char *_g4_t_v115;
  typedef int _g4_t_v116;
  typedef char *_g4_t_v117;
  typedef char *_g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef char *_g4_t_v121;
  typedef char *_g4_t_v122;
  typedef char *_g4_t_v123;
  typedef char *_g4_t_v124;
  typedef char *_g4_t_v125;
  typedef size_t _g4_t_v126;
  typedef int _g4_t_v127;
  typedef char *_g4_t_v128;
  typedef char *_g4_t_v129;
  typedef unsigned int _g4_t_v130;
  typedef int *_g4_t_v131;
  typedef char *_g4_t_v132;
  typedef const void *_g4_t_v133;
  typedef size_t _g4_t_v134;
  typedef char *_g4_t_v135;
  typedef size_t _g4_t_v136;
  typedef char *_g4_t_v137;
  typedef int _g4_t_v138;
  typedef int *_g4_t_v139;
  typedef int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef size_t _g4_t_v142;
  typedef int _g4_t_v143;
  typedef int _g4_t_v144;
  typedef int _g4_t_v145;
  typedef int _g4_t_v146;
  typedef uint32_t *_g4_t_v147;
  typedef char *_g4_t_v148;
  typedef const void *_g4_t_v149;
  typedef char *_g4_t_v150;
  typedef char *_g4_t_v151;
  typedef uint32_t _g4_t_v152[3];
  typedef char *_g4_t_v153;
  typedef int _g4_t_v154;
  typedef int _g4_t_v155;
  typedef int _g4_t_v156;
  typedef int _g4_t_v157[4];
  typedef uint32_t *_g4_t_v158;
  typedef uint32_t *_g4_t_v159;
  typedef uint32_t _g4_t_v160[3];
  typedef uint32_t *_g4_t_v161;
  typedef int _g4_t_v162;
  typedef int _g4_t_v163;
  typedef int _g4_t_v164;
  typedef int _g4_t_v165;
  typedef int _g4_t_v166;
  typedef int _g4_t_v167;
  typedef int _g4_t_v168;
  typedef int _g4_t_v169;
  typedef uint32_t _g4_t_v170[7];
  typedef int _g4_t_v171;
  typedef int _g4_t_v172;
  typedef int *_g4_t_v173;
  typedef int *_g4_t_v174;
  typedef int *_g4_t_v175;
  typedef int _g4_t_v176;
  typedef char _g4_t_s[44];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (4u + sizeof(_g4_t_v97)) > _g4_s0 ? (4u + sizeof(_g4_t_v97)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v98)) > _g4_s1 ? (4u + sizeof(_g4_t_v98)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v99)) > _g4_s2 ? (4u + sizeof(_g4_t_v99)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v100)) > _g4_s3 ? (4u + sizeof(_g4_t_v100)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v101)) > _g4_s4 ? (16u + sizeof(_g4_t_v101)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v102)) > _g4_s5 ? (16u + sizeof(_g4_t_v102)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v103)) > _g4_s6 ? (16u + sizeof(_g4_t_v103)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v104)) > _g4_s7 ? (16u + sizeof(_g4_t_v104)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v105)) > _g4_s8 ? (16u + sizeof(_g4_t_v105)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v106)) > _g4_s9 ? (16u + sizeof(_g4_t_v106)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v107)) > _g4_s10 ? (16u + sizeof(_g4_t_v107)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v108)) > _g4_s11 ? (16u + sizeof(_g4_t_v108)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v109)) > _g4_s12 ? (20u + sizeof(_g4_t_v109)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v110)) > _g4_s13 ? (20u + sizeof(_g4_t_v110)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v111)) > _g4_s14 ? (20u + sizeof(_g4_t_v111)) : _g4_s14,
    _g4_s16 = (20u + sizeof(_g4_t_v112)) > _g4_s15 ? (20u + sizeof(_g4_t_v112)) : _g4_s15,
    _g4_s17 = (20u + sizeof(_g4_t_v113)) > _g4_s16 ? (20u + sizeof(_g4_t_v113)) : _g4_s16,
    _g4_s18 = (24u + sizeof(_g4_t_v114)) > _g4_s17 ? (24u + sizeof(_g4_t_v114)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v115)) > _g4_s18 ? (36u + sizeof(_g4_t_v115)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v116)) > _g4_s19 ? (44u + sizeof(_g4_t_v116)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v117)) > _g4_s20 ? (48u + sizeof(_g4_t_v117)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v118)) > _g4_s21 ? (52u + sizeof(_g4_t_v118)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v119)) > _g4_s22 ? (56u + sizeof(_g4_t_v119)) : _g4_s22,
    _g4_s24 = (56u + sizeof(_g4_t_v120)) > _g4_s23 ? (56u + sizeof(_g4_t_v120)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v121)) > _g4_s24 ? (60u + sizeof(_g4_t_v121)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v122)) > _g4_s25 ? (60u + sizeof(_g4_t_v122)) : _g4_s25,
    _g4_s27 = (60u + sizeof(_g4_t_v123)) > _g4_s26 ? (60u + sizeof(_g4_t_v123)) : _g4_s26,
    _g4_s28 = (60u + sizeof(_g4_t_v124)) > _g4_s27 ? (60u + sizeof(_g4_t_v124)) : _g4_s27,
    _g4_s29 = (68u + sizeof(_g4_t_v125)) > _g4_s28 ? (68u + sizeof(_g4_t_v125)) : _g4_s28,
    _g4_s30 = (68u + sizeof(_g4_t_v126)) > _g4_s29 ? (68u + sizeof(_g4_t_v126)) : _g4_s29,
    _g4_s31 = (68u + sizeof(_g4_t_v127)) > _g4_s30 ? (68u + sizeof(_g4_t_v127)) : _g4_s30,
    _g4_s32 = (68u + sizeof(_g4_t_v128)) > _g4_s31 ? (68u + sizeof(_g4_t_v128)) : _g4_s31,
    _g4_s33 = (72u + sizeof(_g4_t_v129)) > _g4_s32 ? (72u + sizeof(_g4_t_v129)) : _g4_s32,
    _g4_s34 = (72u + sizeof(_g4_t_v130)) > _g4_s33 ? (72u + sizeof(_g4_t_v130)) : _g4_s33,
    _g4_s35 = (72u + sizeof(_g4_t_v131)) > _g4_s34 ? (72u + sizeof(_g4_t_v131)) : _g4_s34,
    _g4_s36 = (76u + sizeof(_g4_t_v132)) > _g4_s35 ? (76u + sizeof(_g4_t_v132)) : _g4_s35,
    _g4_s37 = (76u + sizeof(_g4_t_v133)) > _g4_s36 ? (76u + sizeof(_g4_t_v133)) : _g4_s36,
    _g4_s38 = (76u + sizeof(_g4_t_v134)) > _g4_s37 ? (76u + sizeof(_g4_t_v134)) : _g4_s37,
    _g4_s39 = (76u + sizeof(_g4_t_v135)) > _g4_s38 ? (76u + sizeof(_g4_t_v135)) : _g4_s38,
    _g4_s40 = (76u + sizeof(_g4_t_v136)) > _g4_s39 ? (76u + sizeof(_g4_t_v136)) : _g4_s39,
    _g4_s41 = (80u + sizeof(_g4_t_v137)) > _g4_s40 ? (80u + sizeof(_g4_t_v137)) : _g4_s40,
    _g4_s42 = (80u + sizeof(_g4_t_v138)) > _g4_s41 ? (80u + sizeof(_g4_t_v138)) : _g4_s41,
    _g4_s43 = (80u + sizeof(_g4_t_v139)) > _g4_s42 ? (80u + sizeof(_g4_t_v139)) : _g4_s42,
    _g4_s44 = (80u + sizeof(_g4_t_v140)) > _g4_s43 ? (80u + sizeof(_g4_t_v140)) : _g4_s43,
    _g4_s45 = (80u + sizeof(_g4_t_v141)) > _g4_s44 ? (80u + sizeof(_g4_t_v141)) : _g4_s44,
    _g4_s46 = (80u + sizeof(_g4_t_v142)) > _g4_s45 ? (80u + sizeof(_g4_t_v142)) : _g4_s45,
    _g4_s47 = (80u + sizeof(_g4_t_v143)) > _g4_s46 ? (80u + sizeof(_g4_t_v143)) : _g4_s46,
    _g4_s48 = (80u + sizeof(_g4_t_v144)) > _g4_s47 ? (80u + sizeof(_g4_t_v144)) : _g4_s47,
    _g4_s49 = (80u + sizeof(_g4_t_v145)) > _g4_s48 ? (80u + sizeof(_g4_t_v145)) : _g4_s48,
    _g4_s50 = (80u + sizeof(_g4_t_v146)) > _g4_s49 ? (80u + sizeof(_g4_t_v146)) : _g4_s49,
    _g4_s51 = (84u + sizeof(_g4_t_v147)) > _g4_s50 ? (84u + sizeof(_g4_t_v147)) : _g4_s50,
    _g4_s52 = (84u + sizeof(_g4_t_v148)) > _g4_s51 ? (84u + sizeof(_g4_t_v148)) : _g4_s51,
    _g4_s53 = (84u + sizeof(_g4_t_v149)) > _g4_s52 ? (84u + sizeof(_g4_t_v149)) : _g4_s52,
    _g4_s54 = (84u + sizeof(_g4_t_v150)) > _g4_s53 ? (84u + sizeof(_g4_t_v150)) : _g4_s53,
    _g4_s55 = (84u + sizeof(_g4_t_v151)) > _g4_s54 ? (84u + sizeof(_g4_t_v151)) : _g4_s54,
    _g4_s56 = (96u + sizeof(_g4_t_v152)) > _g4_s55 ? (96u + sizeof(_g4_t_v152)) : _g4_s55,
    _g4_s57 = (108u + sizeof(_g4_t_v153)) > _g4_s56 ? (108u + sizeof(_g4_t_v153)) : _g4_s56,
    _g4_s58 = (113u + sizeof(_g4_t_v154)) > _g4_s57 ? (113u + sizeof(_g4_t_v154)) : _g4_s57,
    _g4_s59 = (116u + sizeof(_g4_t_v155)) > _g4_s58 ? (116u + sizeof(_g4_t_v155)) : _g4_s58,
    _g4_s60 = (120u + sizeof(_g4_t_v156)) > _g4_s59 ? (120u + sizeof(_g4_t_v156)) : _g4_s59,
    _g4_s61 = (128u + sizeof(_g4_t_v157)) > _g4_s60 ? (128u + sizeof(_g4_t_v157)) : _g4_s60,
    _g4_s62 = (144u + sizeof(_g4_t_v158)) > _g4_s61 ? (144u + sizeof(_g4_t_v158)) : _g4_s61,
    _g4_s63 = (160u + sizeof(_g4_t_v159)) > _g4_s62 ? (160u + sizeof(_g4_t_v159)) : _g4_s62,
    _g4_s64 = (164u + sizeof(_g4_t_v160)) > _g4_s63 ? (164u + sizeof(_g4_t_v160)) : _g4_s63,
    _g4_s65 = (176u + sizeof(_g4_t_v161)) > _g4_s64 ? (176u + sizeof(_g4_t_v161)) : _g4_s64,
    _g4_s66 = (180u + sizeof(_g4_t_v162)) > _g4_s65 ? (180u + sizeof(_g4_t_v162)) : _g4_s65,
    _g4_s67 = (184u + sizeof(_g4_t_v163)) > _g4_s66 ? (184u + sizeof(_g4_t_v163)) : _g4_s66,
    _g4_s68 = (188u + sizeof(_g4_t_v164)) > _g4_s67 ? (188u + sizeof(_g4_t_v164)) : _g4_s67,
    _g4_s69 = (192u + sizeof(_g4_t_v165)) > _g4_s68 ? (192u + sizeof(_g4_t_v165)) : _g4_s68,
    _g4_s70 = (196u + sizeof(_g4_t_v166)) > _g4_s69 ? (196u + sizeof(_g4_t_v166)) : _g4_s69,
    _g4_s71 = (200u + sizeof(_g4_t_v167)) > _g4_s70 ? (200u + sizeof(_g4_t_v167)) : _g4_s70,
    _g4_s72 = (204u + sizeof(_g4_t_v168)) > _g4_s71 ? (204u + sizeof(_g4_t_v168)) : _g4_s71,
    _g4_s73 = (208u + sizeof(_g4_t_v169)) > _g4_s72 ? (208u + sizeof(_g4_t_v169)) : _g4_s72,
    _g4_s74 = (212u + sizeof(_g4_t_v170)) > _g4_s73 ? (212u + sizeof(_g4_t_v170)) : _g4_s73,
    _g4_s75 = (240u + sizeof(_g4_t_v171)) > _g4_s74 ? (240u + sizeof(_g4_t_v171)) : _g4_s74,
    _g4_s76 = (244u + sizeof(_g4_t_v172)) > _g4_s75 ? (244u + sizeof(_g4_t_v172)) : _g4_s75,
    _g4_s77 = (248u + sizeof(_g4_t_v173)) > _g4_s76 ? (248u + sizeof(_g4_t_v173)) : _g4_s76,
    _g4_s78 = (252u + sizeof(_g4_t_v174)) > _g4_s77 ? (252u + sizeof(_g4_t_v174)) : _g4_s77,
    _g4_s79 = (256u + sizeof(_g4_t_v175)) > _g4_s78 ? (256u + sizeof(_g4_t_v175)) : _g4_s78,
    _g4_s80 = (260u + sizeof(_g4_t_v176)) > _g4_s79 ? (260u + sizeof(_g4_t_v176)) : _g4_s79,
    _g4_s81 = (272u + sizeof(_g4_t_s)) > _g4_s80 ? (272u + sizeof(_g4_t_s)) : _g4_s80
  };
  alignas(16) uint8_t _g4_sf[_g4_s81];
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 4u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 4u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 4u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 4u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 16u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 16u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 16u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 16u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 16u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 16u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 16u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 16u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 20u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 20u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 20u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 20u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 20u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 24u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 36u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 44u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 48u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 52u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 56u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 56u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 60u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 60u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 60u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 60u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 68u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 68u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 68u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 68u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 72u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 72u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 72u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 76u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 76u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 76u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 76u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 76u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 80u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 80u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 80u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 80u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 80u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 80u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 80u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 80u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 80u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 80u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 84u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 84u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 84u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 84u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 84u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 96u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 108u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 113u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 116u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 120u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 128u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 144u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 160u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 164u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 176u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 180u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 184u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 188u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 192u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 196u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 200u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 204u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 208u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 212u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 240u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 244u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 248u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 252u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 256u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 260u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 272u);

  glf::TimeTracker::Stop((glf::LoadingReport::Self *)((char *)self + 24));
  glf::Mutex::Lock((pthread_mutex_t **)self + 23);
  glf::Console::Println((glf::Console::Self *)"-----------------------------", v97);
  glf::Console::Println((glf::Console::Self *)"   Time Report: %s ", *((const char **)self + 22));
  glf::Console::Println((glf::Console::Self *)"-----------------------------", v98);
  v114 = (char *)self + 88;
  v137 = (char *)self + 4;
  v1 = *((char **)self + 2);
  if ( v1 == nullptr )
  {
    v118 = (char *)self + 4;
LABEL_16:
    v162 = 0;
    v163 = 0;
    v164 = 0;
    v161 = &dword_213B814;
    g4_std::string::construct_copy(&v169, v114);
    g4_std::string::construct_copy(v170, &v161);
    v170[1] = v162;
    v170[2] = v163;
    v170[3] = v164;
    sub_C8AED0(&v153, self, (int)(uintptr_t)(v118), (int)(uintptr_t)(&v169));
    v118 = v153;
    v10 = (void *)(v170[0] - 12);
    if ( (uint32_t *)(v170[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v170[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v99 = (char *)&v154 + 1;
      g4_std::string::Rep::M_destroy(v10);
    }
    v11 = (void *)(v169 - 12);
    if ( (uint32_t *)(v169 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v169 - 4), 0xFFFFFFFF) <= 0 )
    {
      v99 = (char *)&v154 + 2;
      g4_std::string::Rep::M_destroy(v11);
    }
    v12 = v161 - 3;
    if ( v161 - 3 != dword_213B808 && __sync_fetch_and_add(v161 - 1, 0xFFFFFFFF) <= 0 )
    {
      v99 = (const char *)&v155;
      g4_std::string::Rep::M_destroy(v12);
    }
    goto LABEL_19;
  }
  v147 = *((uint32_t **)self + 22);
  v118 = (char *)self + 4;
  v2 = *(v147 - 3);
  do
  {
    while ( 1 )
    {
      v3 = *(uint32_t *)(*((uint32_t *)v1 + 4) - 12);
      v4 = v3;
      v101 = v2;
      if ( v2 <= v3 )
        v4 = v2;
      v5 = memcmp(*((const void **)v1 + 4), v147, v4);
      v2 = v101;
      v6 = v3 - v101;
      if ( v5 == 0 )
        v5 = v6;
      if ( v5 < 0 )
        break;
      v118 = v1;
      v1 = *((char **)v1 + 2);
      if ( v1 == nullptr )
        goto LABEL_10;
    }
    v1 = *((char **)v1 + 3);
  }
  while ( v1 != nullptr );
LABEL_10:
  if ( v137 == v118 )
    goto LABEL_16;
  v7 = *(uint32_t *)(*((uint32_t *)v118 + 4) - 12);
  v8 = v7;
  if ( v101 <= v7 )
    v8 = v101;
  v9 = memcmp(v147, *((const void **)v118 + 4), v8);
  if ( v9 == 0 )
    v9 = v101 - v7;
  if ( v9 < 0 )
    goto LABEL_16;
LABEL_19:
  v13 = *((uint32_t *)self + 5);
  if ( v13 != 0 && *((int *)v118 + 6) > 0 )
  {
    if ( v13 > 0xFFFFFFF )
      sub_1900180("vector::reserve");
    v14 = 16 * v13;
    v15 = opNew(v14);
    v129 = (char *)v15;
    if ( *((char **)self + 3) == v137 )
    {
      v119 = v15;
      v115 = (char *)v15;
      v116 = 0;
      v18 = 0;
    }
    else
    {
      v148 = (char *)(v15 + v14);
      v16 = *((char **)self + 3);
      v17 = (char *)v15;
      do
      {
        if ( v148 == v17 )
        {
          v63 = (v17 - v129) >> 4;
          v134 = 16;
          if ( v63 != 0 )
          {
            if ( v63 > 2 * v63 || 2 * v63 > 0xFFFFFFF )
              v134 = 0xFFFFFFF0;
            else
              v134 = 32 * v63;
          }
          v127 = opNew(v134);
          v122 = (char *)(v127 + 16);
          v119 = v127;
          v64 = v127 + 16 * ((v17 - v129) >> 4);
          if ( v64 != 0 )
          {
            v110 = (uint32_t *)(v127 + 16 * ((v17 - v129) >> 4));
            g4_std::string::construct_copy(v64, v16 + 20);
            v110[1] = *((uint32_t *)v16 + 6);
            v110[2] = *((uint32_t *)v16 + 7);
            v110[3] = *((uint32_t *)v16 + 8);
          }
          if ( v17 != v129 )
          {
            v123 = v16;
            v150 = v17;
            v65 = v129;
            v66 = (uint32_t *)v127;
            do
            {
              if ( v66 != nullptr )
              {
                g4_std::string::construct_copy(v66, v65);
                v66[1] = *((uint32_t *)v65 + 1);
                v66[2] = *((uint32_t *)v65 + 2);
                v66[3] = *((uint32_t *)v65 + 3);
              }
              v66 += 4;
              v65 += 16;
            }
            while ( v150 != v65 );
            v67 = v123;
            v68 = (char *)(v66 + 4);
            v69 = v150;
            v122 = v68;
            v151 = v67;
            v70 = v129;
            do
            {
              v71 = (uint32_t *)(*(uint32_t *)v70 - 12);
              if ( v71 != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v70 - 4), 0xFFFFFFFF) <= 0 )
              {
                v99 = (char *)&v155 + 1;
                g4_std::string::Rep::M_destroy(v71);
              }
              v70 += 16;
            }
            while ( v69 != v70 );
            v16 = v151;
          }
          if ( v129 != nullptr )
            opDelete(v129);
          v17 = v122;
          v148 = (char *)(v134 + v127);
          v129 = (char *)v127;
        }
        else
        {
          if ( v17 != nullptr )
          {
            g4_std::string::construct_copy(v17, v16 + 20);
            *((uint32_t *)v17 + 1) = *((uint32_t *)v16 + 6);
            *((uint32_t *)v17 + 2) = *((uint32_t *)v16 + 7);
            *((uint32_t *)v17 + 3) = *((uint32_t *)v16 + 8);
          }
          v17 += 16;
          v119 = (int)(uintptr_t)(v129);
        }
        v16 = (char *)sub_19048E0(v16);
      }
      while ( v16 != v137 );
      v115 = v17;
      v116 = (int)(uintptr_t)(&v17[-v119]) >> 4;
      v18 = 16 * v116;
    }
    v19 = &v129[v18];
    v117 = v19;
    if ( v19 != v129 )
    {
      v20 = (int)(uintptr_t)(&v19[-v119]);
      _BitScanReverse(&v21, (int)(uintptr_t)(&v19[-v119]) >> 4);
      sub_C89D10(v129, v19, 2 * (31 - (v21 ^ 0x1F)));
      if ( v20 <= 271 )
      {
        if ( v117 != v129 + 16 )
        {
          v135 = v129 + 16;
          v72 = v129 + 16;
          v128 = v129 + 32;
          if ( *((uint32_t *)v129 + 5) <= *((uint32_t *)v129 + 1) )
            goto LABEL_123;
LABEL_117:
          g4_std::string::construct_copy(&v165, v72);
          v124 = v128;
          v166 = *((uint32_t *)v135 + 1);
          v167 = *((uint32_t *)v135 + 2);
          v168 = *((uint32_t *)v135 + 3);
          v140 = (int)(uintptr_t)(&v135[-v119]) >> 4;
          if ( v140 > 0 )
          {
            v73 = v128 - 12;
            v74 = v72;
            v75 = v135 - 12;
            do
            {
              v106 = v74 - 16;
              g4_std::string::assign_str(v73 - 4, v74 - 16);
              v26 = v140-- == 1;
              *(uint32_t *)v73 = *(uint32_t *)v75;
              *((uint32_t *)v73 + 1) = *((uint32_t *)v75 + 1);
              *((uint32_t *)v73 + 2) = *((uint32_t *)v75 + 2);
              v75 -= 16;
              v73 -= 16;
              v74 = v106;
            }
            while ( !v26 );
          }
          g4_std::string::assign_str(v129, &v165);
          *((uint32_t *)v129 + 1) = v166;
          *((uint32_t *)v129 + 2) = v167;
          *((uint32_t *)v129 + 3) = v168;
          v76 = (void *)(v165 - 12);
          if ( (uint32_t *)(v165 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v165 - 4), 0xFFFFFFFF) <= 0 )
          {
            v99 = (char *)&v156 + 1;
            g4_std::string::Rep::M_destroy(v76);
          }
          while ( 1 )
          {
            v128 += 16;
            v135 += 16;
            if ( v117 == v124 )
              break;
            v72 = v135;
            if ( *((uint32_t *)v135 + 1) > *((uint32_t *)v129 + 1) )
              goto LABEL_117;
LABEL_123:
            g4_std::string::construct_copy(&v165, v72);
            i = v135;
            v166 = *((uint32_t *)v135 + 1);
            v167 = *((uint32_t *)v135 + 2);
            v168 = *((uint32_t *)v135 + 3);
            if ( *((uint32_t *)v135 - 3) < v166 )
            {
              for ( i = v128 - 32; ; i -= 16 )
              {
                g4_std::string::assign_str(v72, i);
                *((uint32_t *)v72 + 1) = *((uint32_t *)i + 1);
                *((uint32_t *)v72 + 2) = *((uint32_t *)i + 2);
                *((uint32_t *)v72 + 3) = *((uint32_t *)i + 3);
                if ( v166 <= *((uint32_t *)i - 3) )
                  break;
                v72 = i;
              }
            }
            g4_std::string::assign_str(i, &v165);
            *((uint32_t *)i + 1) = v166;
            *((uint32_t *)i + 2) = v167;
            *((uint32_t *)i + 3) = v168;
            v78 = (void *)(v165 - 12);
            if ( (uint32_t *)(v165 - 12) == dword_213B808 )
            {
              v124 = v128;
            }
            else
            {
              if ( __sync_fetch_and_add((volatile int32_t *)(v165 - 4), 0xFFFFFFFF) <= 0 )
              {
                v99 = (char *)&v156 + 2;
                g4_std::string::Rep::M_destroy(v78);
              }
              v124 = v128;
            }
          }
        }
      }
      else
      {
        v132 = v129 + 256;
        v125 = v129 + 16;
        v121 = v129 + 32;
        do
        {
          v22 = v125;
          if ( *((uint32_t *)v125 + 1) <= *((uint32_t *)v129 + 1) )
          {
            g4_std::string::construct_copy(&v165, v125);
            j = v125;
            v166 = *((uint32_t *)v125 + 1);
            v167 = *((uint32_t *)v125 + 2);
            v168 = *((uint32_t *)v125 + 3);
            if ( v166 > *((uint32_t *)v125 - 3) )
            {
              for ( j = v121 - 32; ; j -= 16 )
              {
                g4_std::string::assign_str(v22, j);
                *((uint32_t *)v22 + 1) = *((uint32_t *)j + 1);
                *((uint32_t *)v22 + 2) = *((uint32_t *)j + 2);
                *((uint32_t *)v22 + 3) = *((uint32_t *)j + 3);
                if ( v166 <= *((uint32_t *)j - 3) )
                  break;
                v22 = j;
              }
            }
            g4_std::string::assign_str(j, &v165);
            *((uint32_t *)j + 1) = v166;
            *((uint32_t *)j + 2) = v167;
            *((uint32_t *)j + 3) = v168;
            v62 = (void *)(v165 - 12);
            if ( (uint32_t *)(v165 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v165 - 4), 0xFFFFFFFF) <= 0 )
            {
              v99 = (char *)&v155 + 3;
              g4_std::string::Rep::M_destroy(v62);
            }
          }
          else
          {
            g4_std::string::construct_copy(&v165, v125);
            v166 = *((uint32_t *)v125 + 1);
            v167 = *((uint32_t *)v125 + 2);
            v168 = *((uint32_t *)v125 + 3);
            v138 = (int)(uintptr_t)(&v125[-v119]) >> 4;
            if ( v138 > 0 )
            {
              v23 = v121 - 12;
              v24 = v125;
              v25 = v125 - 12;
              do
              {
                v102 = v24 - 16;
                g4_std::string::assign_str(v23 - 4, v24 - 16);
                v26 = v138-- == 1;
                *(uint32_t *)v23 = *(uint32_t *)v25;
                *((uint32_t *)v23 + 1) = *((uint32_t *)v25 + 1);
                *((uint32_t *)v23 + 2) = *((uint32_t *)v25 + 2);
                v25 -= 16;
                v23 -= 16;
                v24 = v102;
              }
              while ( !v26 );
            }
            g4_std::string::assign_str(v129, &v165);
            *((uint32_t *)v129 + 1) = v166;
            *((uint32_t *)v129 + 2) = v167;
            *((uint32_t *)v129 + 3) = v168;
            v27 = (void *)(v165 - 12);
            if ( (uint32_t *)(v165 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v165 - 4), 0xFFFFFFFF) <= 0 )
            {
              v99 = (char *)&v155 + 2;
              g4_std::string::Rep::M_destroy(v27);
            }
          }
          v121 += 16;
          v125 += 16;
        }
        while ( v121 != v129 + 272 );
        for ( ; v117 != v132; v132 += 16 )
        {
          g4_std::string::construct_copy(&v165, v132);
          v28 = v132;
          v166 = *((uint32_t *)v132 + 1);
          v167 = *((uint32_t *)v132 + 2);
          v168 = *((uint32_t *)v132 + 3);
          if ( *((uint32_t *)v132 - 3) < v166 )
          {
            v28 = v132 - 16;
            v29 = v132;
            while ( 1 )
            {
              g4_std::string::assign_str(v29, v28);
              *((uint32_t *)v29 + 1) = *((uint32_t *)v28 + 1);
              *((uint32_t *)v29 + 2) = *((uint32_t *)v28 + 2);
              *((uint32_t *)v29 + 3) = *((uint32_t *)v28 + 3);
              if ( v166 <= *((uint32_t *)v28 - 3) )
                break;
              v29 = v28;
              v28 -= 16;
            }
          }
          g4_std::string::assign_str(v28, &v165);
          *((uint32_t *)v28 + 1) = v166;
          *((uint32_t *)v28 + 2) = v167;
          *((uint32_t *)v28 + 3) = v168;
          v30 = (void *)(v165 - 12);
          if ( (uint32_t *)(v165 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v165 - 4), 0xFFFFFFFF) <= 0 )
          {
            v99 = (const char *)&v156;
            g4_std::string::Rep::M_destroy(v30);
          }
        }
      }
    }
    if ( v116 != 0 )
    {
      v31 = 0;
      do
      {
        v32 = v31++;
        v33 = &v129[16 * v32];
        v100 = (float)((float)*((int *)v33 + 1) * 0.001f);
        glf::Console::Println(
          (glf::Console::Self *)"% 6.02f sec : %s",
          (const char *)LODWORD(v100),
          HIDWORD(v100),
          *(uint32_t *)v33);
      }
      while ( v31 != v116 );
    }
    if ( v115 != v129 )
    {
      v34 = v129;
      do
      {
        v35 = (uint32_t *)(*(uint32_t *)v34 - 12);
        if ( v35 != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v34 - 4), 0xFFFFFFFF) <= 0 )
        {
          v99 = (char *)&v156 + 3;
          g4_std::string::Rep::M_destroy(v35);
        }
        v34 += 16;
      }
      while ( v115 != v34 );
    }
    if ( v129 != nullptr )
      opDelete(v129);
  }
  glf::Console::Println((glf::Console::Self *)"-----------------------------", v99);
  sprintf(s, "%d", *((uint32_t *)v118 + 6));
  v172 = 0;
  v173 = nullptr;
  v176 = 0;
  v174 = &v172;
  v175 = &v172;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v157), "duration", (int)(uintptr_t)(&v154));
  v36 = v173;
  if ( v173 == nullptr )
  {
    v139 = &v172;
    goto LABEL_70;
  }
  v149 = (const void *)v157[0];
  v139 = &v172;
  v37 = *(uint32_t *)(v157[0] - 12);
  do
  {
    while ( 1 )
    {
      v38 = v37;
      v39 = *(uint32_t *)(v36[4] - 12);
      v103 = v37;
      if ( v39 <= v37 )
        v38 = *(uint32_t *)(v36[4] - 12);
      v40 = memcmp((const void *)v36[4], v149, v38);
      v37 = v103;
      v41 = v39 - v103;
      if ( v40 == 0 )
        v40 = v41;
      if ( v40 < 0 )
        break;
      v139 = v36;
      v36 = (int *)v36[2];
      if ( v36 == nullptr )
        goto LABEL_64;
    }
    v36 = (int *)v36[3];
  }
  while ( v36 != nullptr );
LABEL_64:
  if ( v139 == &v172 )
    goto LABEL_70;
  v42 = v103;
  v36 = *(int **)(v139[4] - 12);
  if ( (unsigned int)(uintptr_t)(v36) <= v103 )
    v42 = *(uint32_t *)(v139[4] - 12);
  v43 = memcmp(v149, (const void *)v139[4], v42);
  if ( v43 == 0 )
    v43 = v103 - (uint32_t)(uintptr_t)(v36);
  v44 = (int)(uintptr_t)(v139 + 5);
  if ( v43 < 0 )
  {
LABEL_70:
    v158 = &dword_213B814;
    g4_std::string::construct_copy(&v159, v157);
    g4_std::string::construct_copy(v160, &v158);
    if ( v139 == &v172 )
    {
      if ( v176 != 0 )
      {
        v131 = v175;
        v83 = (uint32_t *)v175[4];
        v142 = *(v83 - 3);
        v84 = v142;
        if ( *(v159 - 3) <= v142 )
          v84 = *(v159 - 3);
        v107 = v159;
        v112 = *(v159 - 3);
        v136 = v84;
        v85 = memcmp(v83, v159, v84);
        v36 = (int *)(v142 - v112);
        if ( v85 == 0 )
          v85 = v142 - v112;
        if ( v85 < 0 )
        {
          v36 = (int *)(&dword_0 + 1);
          if ( v131 != &v172 )
          {
            v86 = memcmp(v107, v83, v136);
            if ( v86 == 0 )
              v86 = v112 - v142;
            v36 = (int *)(v86 >> 31);
          }
          v143 = opNew(0x18u);
          v44 = v143 + 20;
          if ( v143 != -16 )
          {
            g4_std::string::construct_copy(v143 + 16, &v159);
            g4_std::string::construct_copy(v44, v160);
          }
          sub_1904970((char)(uintptr_t)v36, v143, v131, &v172);
LABEL_158:
          ++v176;
          goto LABEL_86;
        }
      }
      sub_C8A9E0((int)(uintptr_t)(v152), &v171, (const void **)&v159);
LABEL_160:
      v44 = v152[0] + 20;
LABEL_86:
      v55 = (void *)(v160[0] - 12);
      if ( (uint32_t *)(v160[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v160[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v55);
      }
      v56 = (char *)(v159 - 3);
      if ( v159 - 3 != dword_213B808 && __sync_fetch_and_add(v159 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v56);
      v57 = v158 - 3;
      if ( v158 - 3 != dword_213B808 && __sync_fetch_and_add(v158 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v57);
      goto LABEL_89;
    }
    v133 = v159;
    v36 = (int *)v139[4];
    v45 = *(v159 - 3);
    v130 = v45;
    v104 = *(v36 - 3);
    if ( v104 <= v45 )
      v45 = *(v36 - 3);
    v46 = memcmp(v159, (const void *)v139[4], v45);
    v47 = v130 - v104;
    if ( v46 != 0 )
      v47 = v46;
    if ( v47 >= 0 )
    {
      v111 = v46;
      v79 = memcmp(v36, v133, v45);
      if ( v79 == 0 )
        v79 = v104 - v130;
      v44 = (int)(uintptr_t)(v139 + 5);
      if ( v79 >= 0 )
        goto LABEL_86;
      v36 = v175;
      if ( v175 == v139 )
      {
        v92 = (uint32_t *)v139[4];
        v93 = v130;
        v94 = *(v92 - 3);
        if ( v94 <= v130 )
          v93 = *(v92 - 3);
        v95 = memcmp(v133, v92, v93);
        if ( v95 == 0 )
          v95 = v130 - v94;
        v108 = v95;
        v146 = opNew(0x18u);
        v44 = v146 + 20;
        v96 = v108;
        if ( v146 != -16 )
        {
          g4_std::string::construct_copy(v146 + 16, &v159);
          g4_std::string::construct_copy(v44, v160);
          v96 = v108;
        }
        sub_1904970(v96 < 0, v146, v36, &v172);
        ++v176;
        goto LABEL_86;
      }
      v120 = sub_19048E0(v139);
      v80 = *(uint32_t **)(v120 + 16);
      v81 = v130;
      v36 = (int *)*(v80 - 3);
      if ( (unsigned int)(uintptr_t)(v36) <= v130 )
        v81 = *(v80 - 3);
      v82 = memcmp(v133, v80, v81);
      if ( v82 == 0 )
        v82 = v130 - (uint32_t)(uintptr_t)(v36);
      if ( v82 >= 0 )
      {
LABEL_161:
        sub_C8A9E0((int)(uintptr_t)(v152), &v171, (const void **)&v159);
        goto LABEL_160;
      }
      v36 = (int *)v139[3];
      if ( v36 == nullptr )
      {
        v90 = v130 - v104;
        if ( v111 != 0 )
          v90 = v111;
        v36 = (int *)opNew(0x18u);
        if ( v36 != (int *)-16 )
        {
          g4_std::string::construct_copy(v36 + 4, &v159);
          g4_std::string::construct_copy(v36 + 5, v160);
        }
        v91 = v90 >> 31;
        v44 = (int)(uintptr_t)(v36 + 5);
        sub_1904970(v91, v36, v139, &v172);
        ++v176;
        goto LABEL_86;
      }
      v141 = opNew(0x18u);
      v44 = v141 + 20;
      if ( v141 != -16 )
      {
        g4_std::string::construct_copy(v141 + 16, &v159);
        g4_std::string::construct_copy(v44, v160);
      }
      sub_1904970(1, v141, v120, &v172);
    }
    else
    {
      v36 = v174;
      if ( v174 != v139 )
      {
        v48 = (int *)sub_1904940(v139);
        v49 = (uint32_t *)v48[4];
        v50 = v48;
        v51 = v130;
        v52 = *(v49 - 3);
        if ( v52 <= v130 )
          v51 = *(v49 - 3);
        v126 = v51;
        v105 = v49;
        v109 = v50;
        v53 = memcmp(v49, v133, v51);
        v36 = (int *)(v52 - v130);
        v54 = v109;
        if ( v53 == 0 )
          v53 = v52 - v130;
        if ( v53 < 0 )
        {
          if ( v109[3] != 0 )
          {
            v36 = (int *)opNew(0x18u);
            if ( v36 != (int *)-16 )
            {
              g4_std::string::construct_copy(v36 + 4, &v159);
              g4_std::string::construct_copy(v36 + 5, v160);
            }
            v44 = (int)(uintptr_t)(v36 + 5);
            sub_1904970(1, v36, v139, &v172);
            ++v176;
            goto LABEL_86;
          }
          v36 = (int *)(&dword_0 + 1);
          if ( v109 != &v172 )
          {
            v87 = memcmp(v133, v105, v126);
            v54 = v109;
            v88 = v130 - v52;
            if ( v87 != 0 )
              v88 = v87;
            v36 = (int *)(v88 >> 31);
          }
          v113 = v54;
          v144 = opNew(0x18u);
          v44 = v144 + 20;
          v89 = v113;
          if ( v144 != -16 )
          {
            g4_std::string::construct_copy(v144 + 16, &v159);
            g4_std::string::construct_copy(v44, v160);
            v89 = v113;
          }
          sub_1904970((char)(uintptr_t)v36, v144, v89, &v172);
          goto LABEL_158;
        }
        goto LABEL_161;
      }
      v145 = opNew(0x18u);
      v44 = v145 + 20;
      if ( v145 != -16 )
      {
        g4_std::string::construct_copy(v145 + 16, &v159);
        g4_std::string::construct_copy(v44, v160);
      }
      sub_1904970(1, v145, v36, &v172);
    }
    ++v176;
    goto LABEL_86;
  }
LABEL_89:
  g4_std_compat::string_assign(v44, s, strlen(s));
  v58 = (void *)(v157[0] - 12);
  if ( (uint32_t *)(v157[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v157[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v58);
  }
  glf::FunctionalTest::CheckPoint((int)(uintptr_t)(&savedregs), v44, (int)(uintptr_t)(v36), (int)(uintptr_t)(v114), (int)(uintptr_t)(&v171));
  sub_C89770(v59, v173);
  return glf::Mutex::Unlock((pthread_mutex_t **)self + 23);
}

// ----------------------------------------------------------------------------
// Function: glf::LoadingReport::Destroy  (binary VA: 0xc90960)
// Original: glf::LoadingReport::~LoadingReport
// ----------------------------------------------------------------------------
void glf::LoadingReport::Destroy(pthread_mutex_t **self)
{
  int v1;
  int v2;
  int v3;

  glf::Mutex::Destroy(self + 23);
  v1 = (int)(uintptr_t)(*(self + 22));
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = (int)(uintptr_t)(*(self + 7));
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = (int)(uintptr_t)(*(self + 6));
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  std::_Rb_tree<std::string,std::pair<std::string const,glf::LoadingReport::Entry>,std::_Select1st<std::pair<std::string const,glf::LoadingReport::Entry>>,std::less<std::string>,std::allocator<std::pair<std::string const,glf::LoadingReport::Entry>>>::_M_erase(
    (int)(uintptr_t)(self),
    *(self + 2));
}


