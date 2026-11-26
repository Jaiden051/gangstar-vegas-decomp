#include "Core/Utils/DecompTypes.h"
#include "glotv3_EventOfInstallReferral.h"

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfInstallReferral::Destroy  (binary VA: 0x1346fa0)
// Original: glotv3::EventOfInstallReferral::~EventOfInstallReferral
// ----------------------------------------------------------------------------
void glotv3::EventOfInstallReferral::Destroy(glotv3::EventOfInstallReferral::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093A20);
  glotv3::Event::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfInstallReferral::Destroy_ea1347580  (binary VA: 0x1347580)
// Original: glotv3::EventOfInstallReferral::~EventOfInstallReferral
// ----------------------------------------------------------------------------
void glotv3::EventOfInstallReferral::Destroy_ea1347580(glotv3::EventOfInstallReferral::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093A20);
  glotv3::Event::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfInstallReferral::Construct  (binary VA: 0x13486a0)
// Original: glotv3::EventOfInstallReferral::EventOfInstallReferral
// ----------------------------------------------------------------------------
void glotv3::EventOfInstallReferral::Construct(glotv3::EventOfInstallReferral::Self *self)
{
  glotv3::Event::Construct(self, false);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093A20);
  glotv3::Event::setIsAutomatic(self, true);
  glotv3::Event::setEventType(self, &reinterpret_cast<G4Elf32Sym *>(stru_CAD4)->st_info);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfInstallReferral::SetInstallRefferal  (binary VA: 0x134a670)
// Original: glotv3::EventOfInstallReferral::SetInstallRefferal
// ----------------------------------------------------------------------------
char ** glotv3::EventOfInstallReferral::SetInstallRefferal(glotv3::EventOfInstallReferral::Self *self, std::map<std::string,std::string> *a2)
{
  char *v2;
  size_t v3;
  size_t v4;
  size_t v5;
  int v6;
  int v7;
  size_t v8;
  size_t v9;
  int v10;
  uint8_t **v11;
  char *v12;
  size_t v13;
  size_t v14;
  size_t v15;
  int v16;
  int v17;
  size_t v18;
  size_t v19;
  int v20;
  char *v21;
  size_t v22;
  size_t v23;
  size_t v24;
  int v25;
  int v26;
  size_t v27;
  size_t v28;
  int v29;
  char *v30;
  size_t v31;
  size_t v32;
  size_t v33;
  int v34;
  int v35;
  size_t v36;
  size_t v37;
  int v38;
  uint8_t **v39;
  char *v40;
  size_t v41;
  size_t v42;
  size_t v43;
  int v44;
  int v45;
  size_t v46;
  size_t v47;
  int v48;
  uint32_t *v49;
  char *v50;
  size_t v51;
  size_t v52;
  size_t v53;
  int v54;
  int v55;
  size_t v56;
  size_t v57;
  int v58;
  char *v59;
  size_t v60;
  size_t v61;
  size_t v62;
  int v63;
  int v64;
  size_t v65;
  size_t v66;
  int v67;
  uint8_t **v68;
  char *v69;
  size_t v70;
  size_t v71;
  size_t v72;
  int v73;
  int v74;
  size_t v75;
  size_t v76;
  int v77;
  uint32_t *v78;
  void *v80;
  volatile int32_t *v81;
  uint32_t *v82;
  void *v83;
  volatile int32_t *v84;
  uint32_t *v85;
  void *v86;
  volatile int32_t *v87;
  uint32_t *v88;
  void *v89;
  volatile int32_t *v90;
  uint32_t *v91;
  void *v92;
  volatile int32_t *v93;
  uint32_t *v94;
  void *v95;
  volatile int32_t *v96;
  uint32_t *v97;
  void *v98;
  volatile int32_t *v99;
  uint32_t *v100;
  void *v101;
  volatile int32_t *v102;
  uint32_t *v103;
  typedef size_t _g4_t_v104;
  typedef size_t _g4_t_v105;
  typedef size_t _g4_t_v106;
  typedef size_t _g4_t_v107;
  typedef size_t _g4_t_v108;
  typedef size_t _g4_t_v109;
  typedef size_t _g4_t_v110;
  typedef size_t _g4_t_v111;
  typedef char *_g4_t_v112;
  typedef char *_g4_t_v113;
  typedef char *_g4_t_v114;
  typedef char *_g4_t_v115;
  typedef char *_g4_t_v116;
  typedef char *_g4_t_v117;
  typedef char *_g4_t_v118;
  typedef char *_g4_t_v119;
  typedef char *_g4_t_v120;
  typedef uint8_t *_g4_t_v121;
  typedef uint8_t *_g4_t_v122;
  typedef const void *_g4_t_v123;
  typedef const void *_g4_t_v124;
  typedef const void *_g4_t_v125;
  typedef const void *_g4_t_v126;
  typedef const void *_g4_t_v127;
  typedef const void *_g4_t_v128;
  typedef int _g4_t_v129[9];
  typedef uint32_t *_g4_t_v130;
  typedef uint32_t *_g4_t_v131;
  typedef uint32_t *_g4_t_v132;
  typedef uint32_t *_g4_t_v133;
  typedef uint32_t *_g4_t_v134;
  typedef uint32_t *_g4_t_v135;
  typedef uint32_t *_g4_t_v136;
  typedef uint32_t *_g4_t_v137;
  typedef volatile int32_t *_g4_t_v138;
  typedef int _g4_t_v139;
  typedef volatile int32_t *_g4_t_v140;
  typedef int _g4_t_v141;
  typedef volatile int32_t *_g4_t_v142;
  typedef int _g4_t_v143;
  typedef volatile int32_t *_g4_t_v144;
  typedef int _g4_t_v145;
  typedef volatile int32_t *_g4_t_v146;
  typedef int _g4_t_v147;
  typedef volatile int32_t *_g4_t_v148;
  typedef int _g4_t_v149;
  typedef volatile int32_t *_g4_t_v150;
  typedef int _g4_t_v151;
  typedef volatile int32_t *_g4_t_v152;
  typedef int _g4_t_v153;
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (8u + sizeof(_g4_t_v104)) > _g4_s0 ? (8u + sizeof(_g4_t_v104)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v105)) > _g4_s1 ? (8u + sizeof(_g4_t_v105)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v106)) > _g4_s2 ? (8u + sizeof(_g4_t_v106)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v107)) > _g4_s3 ? (8u + sizeof(_g4_t_v107)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v108)) > _g4_s4 ? (8u + sizeof(_g4_t_v108)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v109)) > _g4_s5 ? (8u + sizeof(_g4_t_v109)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v110)) > _g4_s6 ? (8u + sizeof(_g4_t_v110)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v111)) > _g4_s7 ? (8u + sizeof(_g4_t_v111)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v112)) > _g4_s8 ? (12u + sizeof(_g4_t_v112)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v113)) > _g4_s9 ? (20u + sizeof(_g4_t_v113)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v114)) > _g4_s10 ? (20u + sizeof(_g4_t_v114)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v115)) > _g4_s11 ? (20u + sizeof(_g4_t_v115)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v116)) > _g4_s12 ? (20u + sizeof(_g4_t_v116)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v117)) > _g4_s13 ? (20u + sizeof(_g4_t_v117)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v118)) > _g4_s14 ? (20u + sizeof(_g4_t_v118)) : _g4_s14,
    _g4_s16 = (20u + sizeof(_g4_t_v119)) > _g4_s15 ? (20u + sizeof(_g4_t_v119)) : _g4_s15,
    _g4_s17 = (20u + sizeof(_g4_t_v120)) > _g4_s16 ? (20u + sizeof(_g4_t_v120)) : _g4_s16,
    _g4_s18 = (24u + sizeof(_g4_t_v121)) > _g4_s17 ? (24u + sizeof(_g4_t_v121)) : _g4_s17,
    _g4_s19 = (24u + sizeof(_g4_t_v122)) > _g4_s18 ? (24u + sizeof(_g4_t_v122)) : _g4_s18,
    _g4_s20 = (24u + sizeof(_g4_t_v123)) > _g4_s19 ? (24u + sizeof(_g4_t_v123)) : _g4_s19,
    _g4_s21 = (24u + sizeof(_g4_t_v124)) > _g4_s20 ? (24u + sizeof(_g4_t_v124)) : _g4_s20,
    _g4_s22 = (24u + sizeof(_g4_t_v125)) > _g4_s21 ? (24u + sizeof(_g4_t_v125)) : _g4_s21,
    _g4_s23 = (24u + sizeof(_g4_t_v126)) > _g4_s22 ? (24u + sizeof(_g4_t_v126)) : _g4_s22,
    _g4_s24 = (24u + sizeof(_g4_t_v127)) > _g4_s23 ? (24u + sizeof(_g4_t_v127)) : _g4_s23,
    _g4_s25 = (24u + sizeof(_g4_t_v128)) > _g4_s24 ? (24u + sizeof(_g4_t_v128)) : _g4_s24,
    _g4_s26 = (28u + sizeof(_g4_t_v129)) > _g4_s25 ? (28u + sizeof(_g4_t_v129)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v130)) > _g4_s26 ? (64u + sizeof(_g4_t_v130)) : _g4_s26,
    _g4_s28 = (80u + sizeof(_g4_t_v131)) > _g4_s27 ? (80u + sizeof(_g4_t_v131)) : _g4_s27,
    _g4_s29 = (96u + sizeof(_g4_t_v132)) > _g4_s28 ? (96u + sizeof(_g4_t_v132)) : _g4_s28,
    _g4_s30 = (112u + sizeof(_g4_t_v133)) > _g4_s29 ? (112u + sizeof(_g4_t_v133)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v134)) > _g4_s30 ? (128u + sizeof(_g4_t_v134)) : _g4_s30,
    _g4_s32 = (144u + sizeof(_g4_t_v135)) > _g4_s31 ? (144u + sizeof(_g4_t_v135)) : _g4_s31,
    _g4_s33 = (160u + sizeof(_g4_t_v136)) > _g4_s32 ? (160u + sizeof(_g4_t_v136)) : _g4_s32,
    _g4_s34 = (176u + sizeof(_g4_t_v137)) > _g4_s33 ? (176u + sizeof(_g4_t_v137)) : _g4_s33,
    _g4_s35 = (192u + sizeof(_g4_t_v138)) > _g4_s34 ? (192u + sizeof(_g4_t_v138)) : _g4_s34,
    _g4_s36 = (196u + sizeof(_g4_t_v139)) > _g4_s35 ? (196u + sizeof(_g4_t_v139)) : _g4_s35,
    _g4_s37 = (208u + sizeof(_g4_t_v140)) > _g4_s36 ? (208u + sizeof(_g4_t_v140)) : _g4_s36,
    _g4_s38 = (212u + sizeof(_g4_t_v141)) > _g4_s37 ? (212u + sizeof(_g4_t_v141)) : _g4_s37,
    _g4_s39 = (224u + sizeof(_g4_t_v142)) > _g4_s38 ? (224u + sizeof(_g4_t_v142)) : _g4_s38,
    _g4_s40 = (228u + sizeof(_g4_t_v143)) > _g4_s39 ? (228u + sizeof(_g4_t_v143)) : _g4_s39,
    _g4_s41 = (240u + sizeof(_g4_t_v144)) > _g4_s40 ? (240u + sizeof(_g4_t_v144)) : _g4_s40,
    _g4_s42 = (244u + sizeof(_g4_t_v145)) > _g4_s41 ? (244u + sizeof(_g4_t_v145)) : _g4_s41,
    _g4_s43 = (256u + sizeof(_g4_t_v146)) > _g4_s42 ? (256u + sizeof(_g4_t_v146)) : _g4_s42,
    _g4_s44 = (260u + sizeof(_g4_t_v147)) > _g4_s43 ? (260u + sizeof(_g4_t_v147)) : _g4_s43,
    _g4_s45 = (272u + sizeof(_g4_t_v148)) > _g4_s44 ? (272u + sizeof(_g4_t_v148)) : _g4_s44,
    _g4_s46 = (276u + sizeof(_g4_t_v149)) > _g4_s45 ? (276u + sizeof(_g4_t_v149)) : _g4_s45,
    _g4_s47 = (288u + sizeof(_g4_t_v150)) > _g4_s46 ? (288u + sizeof(_g4_t_v150)) : _g4_s46,
    _g4_s48 = (292u + sizeof(_g4_t_v151)) > _g4_s47 ? (292u + sizeof(_g4_t_v151)) : _g4_s47,
    _g4_s49 = (304u + sizeof(_g4_t_v152)) > _g4_s48 ? (304u + sizeof(_g4_t_v152)) : _g4_s48,
    _g4_s50 = (308u + sizeof(_g4_t_v153)) > _g4_s49 ? (308u + sizeof(_g4_t_v153)) : _g4_s49
  };
  alignas(16) uint8_t _g4_sf[_g4_s50];
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 8u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 8u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 8u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 8u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 8u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 8u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 8u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 8u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 12u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 20u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 20u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 20u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 20u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 20u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 20u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 20u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 20u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 24u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 24u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 24u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 24u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 24u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 24u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 24u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 24u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 28u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 64u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 80u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 96u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 112u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 128u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 144u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 160u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 176u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 192u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 196u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 208u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 212u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 224u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 228u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 240u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 244u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 256u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 260u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 272u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 276u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 288u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 292u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 304u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 308u);

  v112 = (char *)a2 + 4;
  v2 = *((char **)a2 + 2);
  if ( v2 == nullptr )
  {
    v113 = (char *)a2 + 4;
LABEL_149:
    v130 = &dword_213B814;
    g4_std::string::construct_copy(&v138, &glotv3::EventOfInstallReferral::k_KeyUtmSource);
    g4_std::string::construct_copy(&v139, &v130);
    sub_134A180(v129, a2, (int)(uintptr_t)(v113), (const void **)&v138);
    v113 = (char *)v129[0];
    v86 = (void *)(v139 - 12);
    if ( (uint32_t *)(v139 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v139 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v86);
    }
    v87 = v138 - 3;
    if ( v138 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v138 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v87);
    v88 = v130 - 3;
    if ( v130 - 3 != dword_213B808 && __sync_fetch_and_add(v130 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v88);
    goto LABEL_16;
  }
  v121 = (uint8_t *)(uintptr_t)(glotv3::EventOfInstallReferral::k_KeyUtmSource);
  v113 = (char *)a2 + 4;
  v3 = *((uint32_t *)glotv3::EventOfInstallReferral::k_KeyUtmSource - 3);
  do
  {
    while ( 1 )
    {
      v4 = *(uint32_t *)(*((uint32_t *)v2 + 4) - 12);
      v5 = v4;
      v104 = v3;
      if ( v3 <= v4 )
        v5 = v3;
      v6 = memcmp(*((const void **)v2 + 4), v121, v5);
      v3 = v104;
      v7 = v4 - v104;
      if ( v6 == 0 )
        v6 = v7;
      if ( v6 < 0 )
        break;
      v113 = v2;
      v2 = *((char **)v2 + 2);
      if ( v2 == nullptr )
        goto LABEL_10;
    }
    v2 = *((char **)v2 + 3);
  }
  while ( v2 != nullptr );
LABEL_10:
  if ( v112 == v113 )
    goto LABEL_149;
  v8 = *(uint32_t *)(*((uint32_t *)v113 + 4) - 12);
  v9 = v8;
  if ( v104 <= v8 )
    v9 = v104;
  v10 = memcmp(v121, *((const void **)v113 + 4), v9);
  if ( v10 == 0 )
    v10 = v104 - v8;
  if ( v10 < 0 )
    goto LABEL_149;
LABEL_16:
  v11 = (uint8_t **)&glotv3::system::ODD_ZERO_STRING;
  if ( *(uint32_t *)(*((uint32_t *)v113 + 5) - 12) == 0 )
    goto LABEL_33;
  v12 = *((char **)a2 + 2);
  if ( v12 != nullptr )
  {
    v122 = (uint8_t *)(uintptr_t)(glotv3::EventOfInstallReferral::k_KeyUtmSource);
    v13 = *((uint32_t *)glotv3::EventOfInstallReferral::k_KeyUtmSource - 3);
    v114 = (char *)a2 + 4;
    do
    {
      while ( 1 )
      {
        v14 = *(uint32_t *)(*((uint32_t *)v12 + 4) - 12);
        v15 = v14;
        v105 = v13;
        if ( v13 <= v14 )
          v15 = v13;
        v16 = memcmp(*((const void **)v12 + 4), v122, v15);
        v13 = v105;
        v17 = v14 - v105;
        if ( v16 == 0 )
          v16 = v17;
        if ( v16 < 0 )
          break;
        v114 = v12;
        v12 = *((char **)v12 + 2);
        if ( v12 == nullptr )
          goto LABEL_26;
      }
      v12 = *((char **)v12 + 3);
    }
    while ( v12 != nullptr );
LABEL_26:
    if ( v112 != v114 )
    {
      v18 = *(uint32_t *)(*((uint32_t *)v114 + 4) - 12);
      v19 = v18;
      if ( v105 <= v18 )
        v19 = v105;
      v20 = memcmp(v122, *((const void **)v114 + 4), v19);
      if ( v20 == 0 )
        v20 = v105 - v18;
      if ( v20 >= 0 )
        goto LABEL_32;
    }
  }
  else
  {
    v114 = (char *)a2 + 4;
  }
  v131 = &dword_213B814;
  g4_std::string::construct_copy(&v140, &glotv3::EventOfInstallReferral::k_KeyUtmSource);
  g4_std::string::construct_copy(&v141, &v131);
  sub_134A180(v129, a2, (int)(uintptr_t)(v114), (const void **)&v140);
  v114 = (char *)v129[0];
  v101 = (void *)(v141 - 12);
  if ( (uint32_t *)(v141 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v141 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v101);
  }
  v102 = v140 - 3;
  if ( v140 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v140 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v102);
  v103 = v131 - 3;
  if ( v131 - 3 != dword_213B808 && __sync_fetch_and_add(v131 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v103);
LABEL_32:
  v11 = (uint8_t **)(v114 + 20);
LABEL_33:
  glotv3::Event::addKeyPair((int)(uintptr_t)(self), &glotv3::EventOfInstallReferral::k_KeyUtmSource, v11);
  v21 = *((char **)a2 + 2);
  if ( v21 == nullptr )
  {
    v115 = (char *)a2 + 4;
LABEL_161:
    v132 = &dword_213B814;
    g4_std::string::construct_copy(&v142, &glotv3::EventOfInstallReferral::k_KeyUtmMedium);
    g4_std::string::construct_copy(&v143, &v132);
    sub_134A180(v129, a2, (int)(uintptr_t)(v115), (const void **)&v142);
    v115 = (char *)v129[0];
    v92 = (void *)(v143 - 12);
    if ( (uint32_t *)(v143 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v143 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v92);
    }
    v93 = v142 - 3;
    if ( v142 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v142 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v93);
    v94 = v132 - 3;
    if ( v132 - 3 != dword_213B808 && __sync_fetch_and_add(v132 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v94);
    goto LABEL_48;
  }
  v123 = (const void *)glotv3::EventOfInstallReferral::k_KeyUtmMedium;
  v115 = (char *)a2 + 4;
  v22 = *(uint32_t *)(glotv3::EventOfInstallReferral::k_KeyUtmMedium - 12);
  do
  {
    while ( 1 )
    {
      v23 = *(uint32_t *)(*((uint32_t *)v21 + 4) - 12);
      v24 = v23;
      v106 = v22;
      if ( v22 <= v23 )
        v24 = v22;
      v25 = memcmp(*((const void **)v21 + 4), v123, v24);
      v22 = v106;
      v26 = v23 - v106;
      if ( v25 == 0 )
        v25 = v26;
      if ( v25 < 0 )
        break;
      v115 = v21;
      v21 = *((char **)v21 + 2);
      if ( v21 == nullptr )
        goto LABEL_42;
    }
    v21 = *((char **)v21 + 3);
  }
  while ( v21 != nullptr );
LABEL_42:
  if ( v112 == v115 )
    goto LABEL_161;
  v27 = *(uint32_t *)(*((uint32_t *)v115 + 4) - 12);
  v28 = v27;
  if ( v106 <= v27 )
    v28 = v106;
  v29 = memcmp(v123, *((const void **)v115 + 4), v28);
  if ( v29 == 0 )
    v29 = v106 - v27;
  if ( v29 < 0 )
    goto LABEL_161;
LABEL_48:
  if ( *(uint32_t *)(*((uint32_t *)v115 + 5) - 12) != 0 )
  {
    v30 = *((char **)a2 + 2);
    if ( v30 != nullptr )
    {
      v124 = (const void *)glotv3::EventOfInstallReferral::k_KeyUtmMedium;
      v31 = *(uint32_t *)(glotv3::EventOfInstallReferral::k_KeyUtmMedium - 12);
      v116 = (char *)a2 + 4;
      do
      {
        while ( 1 )
        {
          v32 = v31;
          v33 = *(uint32_t *)(*((uint32_t *)v30 + 4) - 12);
          v107 = v31;
          if ( v33 <= v31 )
            v32 = *(uint32_t *)(*((uint32_t *)v30 + 4) - 12);
          v34 = memcmp(*((const void **)v30 + 4), v124, v32);
          v31 = v107;
          v35 = v33 - v107;
          if ( v34 == 0 )
            v34 = v35;
          if ( v34 < 0 )
            break;
          v116 = v30;
          v30 = *((char **)v30 + 2);
          if ( v30 == nullptr )
            goto LABEL_58;
        }
        v30 = *((char **)v30 + 3);
      }
      while ( v30 != nullptr );
LABEL_58:
      if ( v112 != v116 )
      {
        v36 = v107;
        v37 = *(uint32_t *)(*((uint32_t *)v116 + 4) - 12);
        if ( v37 <= v107 )
          v36 = *(uint32_t *)(*((uint32_t *)v116 + 4) - 12);
        v38 = memcmp(v124, *((const void **)v116 + 4), v36);
        if ( v38 == 0 )
          v38 = v107 - v37;
        if ( v38 >= 0 )
          goto LABEL_64;
      }
    }
    else
    {
      v116 = (char *)a2 + 4;
    }
    v133 = &dword_213B814;
    g4_std::string::construct_copy(&v144, &glotv3::EventOfInstallReferral::k_KeyUtmMedium);
    g4_std::string::construct_copy(&v145, &v133);
    sub_134A180(v129, a2, (int)(uintptr_t)(v116), (const void **)&v144);
    v116 = (char *)v129[0];
    v98 = (void *)(v145 - 12);
    if ( (uint32_t *)(v145 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v145 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v98);
    }
    v99 = v144 - 3;
    if ( v144 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v144 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v99);
    v100 = v133 - 3;
    if ( v133 - 3 != dword_213B808 && __sync_fetch_and_add(v133 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v100);
LABEL_64:
    v39 = (uint8_t **)(v116 + 20);
    goto LABEL_66;
  }
  v39 = (uint8_t **)&glotv3::system::ODD_ZERO_STRING;
LABEL_66:
  glotv3::Event::addKeyPair((int)(uintptr_t)(self), (uint8_t **)&glotv3::EventOfInstallReferral::k_KeyUtmMedium, v39);
  v40 = *((char **)a2 + 2);
  if ( v40 == nullptr )
  {
    v117 = (char *)a2 + 4;
LABEL_137:
    v134 = &dword_213B814;
    g4_std::string::construct_copy(&v146, &glotv3::EventOfInstallReferral::k_KeyUtmTerm);
    g4_std::string::construct_copy(&v147, &v134);
    sub_134A180(v129, a2, (int)(uintptr_t)(v117), (const void **)&v146);
    v117 = (char *)v129[0];
    v80 = (void *)(v147 - 12);
    if ( (uint32_t *)(v147 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v147 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v80);
    }
    v81 = v146 - 3;
    if ( v146 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v146 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v81);
    v82 = v134 - 3;
    if ( v134 - 3 != dword_213B808 && __sync_fetch_and_add(v134 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v82);
    goto LABEL_81;
  }
  v125 = (const void *)glotv3::EventOfInstallReferral::k_KeyUtmTerm;
  v117 = (char *)a2 + 4;
  v41 = *(uint32_t *)(glotv3::EventOfInstallReferral::k_KeyUtmTerm - 12);
  do
  {
    while ( 1 )
    {
      v42 = *(uint32_t *)(*((uint32_t *)v40 + 4) - 12);
      v43 = v42;
      v108 = v41;
      if ( v41 <= v42 )
        v43 = v41;
      v44 = memcmp(*((const void **)v40 + 4), v125, v43);
      v41 = v108;
      v45 = v42 - v108;
      if ( v44 == 0 )
        v44 = v45;
      if ( v44 < 0 )
        break;
      v117 = v40;
      v40 = *((char **)v40 + 2);
      if ( v40 == nullptr )
        goto LABEL_75;
    }
    v40 = *((char **)v40 + 3);
  }
  while ( v40 != nullptr );
LABEL_75:
  if ( v112 == v117 )
    goto LABEL_137;
  v46 = *(uint32_t *)(*((uint32_t *)v117 + 4) - 12);
  v47 = v46;
  if ( v108 <= v46 )
    v47 = v108;
  v48 = memcmp(v125, *((const void **)v117 + 4), v47);
  if ( v48 == 0 )
    v48 = v108 - v46;
  if ( v48 < 0 )
    goto LABEL_137;
LABEL_81:
  if ( *(uint32_t *)(*((uint32_t *)v117 + 5) - 12) != 0 )
    v49 = g4_std::map_string_string_7c7b5d::opIndex(a2, (int)(uintptr_t)(&glotv3::EventOfInstallReferral::k_KeyUtmTerm));
  else
    v49 = (uint32_t *)(&glotv3::system::ODD_ZERO_STRING);
  glotv3::Event::addKeyPair((int)(uintptr_t)(self), (uint8_t **)&glotv3::EventOfInstallReferral::k_KeyUtmTerm, (uint8_t **)v49);
  v50 = *((char **)a2 + 2);
  if ( v50 == nullptr )
  {
    v118 = (char *)a2 + 4;
LABEL_143:
    v135 = &dword_213B814;
    g4_std::string::construct_copy(&v148, &glotv3::EventOfInstallReferral::k_KeyUtmContent);
    g4_std::string::construct_copy(&v149, &v135);
    sub_134A180(v129, a2, (int)(uintptr_t)(v118), (const void **)&v148);
    v118 = (char *)v129[0];
    v83 = (void *)(v149 - 12);
    if ( (uint32_t *)(v149 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v149 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v83);
    }
    v84 = v148 - 3;
    if ( v148 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v148 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v84);
    v85 = v135 - 3;
    if ( v135 - 3 != dword_213B808 && __sync_fetch_and_add(v135 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v85);
    goto LABEL_98;
  }
  v126 = (const void *)glotv3::EventOfInstallReferral::k_KeyUtmContent;
  v118 = (char *)a2 + 4;
  v51 = *(uint32_t *)(glotv3::EventOfInstallReferral::k_KeyUtmContent - 12);
  do
  {
    while ( 1 )
    {
      v52 = v51;
      v53 = *(uint32_t *)(*((uint32_t *)v50 + 4) - 12);
      v109 = v51;
      if ( v53 <= v51 )
        v52 = *(uint32_t *)(*((uint32_t *)v50 + 4) - 12);
      v54 = memcmp(*((const void **)v50 + 4), v126, v52);
      v51 = v109;
      v55 = v53 - v109;
      if ( v54 == 0 )
        v54 = v55;
      if ( v54 < 0 )
        break;
      v118 = v50;
      v50 = *((char **)v50 + 2);
      if ( v50 == nullptr )
        goto LABEL_92;
    }
    v50 = *((char **)v50 + 3);
  }
  while ( v50 != nullptr );
LABEL_92:
  if ( v112 == v118 )
    goto LABEL_143;
  v56 = v109;
  v57 = *(uint32_t *)(*((uint32_t *)v118 + 4) - 12);
  if ( v57 <= v109 )
    v56 = *(uint32_t *)(*((uint32_t *)v118 + 4) - 12);
  v58 = memcmp(v126, *((const void **)v118 + 4), v56);
  if ( v58 == 0 )
    v58 = v109 - v57;
  if ( v58 < 0 )
    goto LABEL_143;
LABEL_98:
  if ( *(uint32_t *)(*((uint32_t *)v118 + 5) - 12) != 0 )
  {
    v59 = *((char **)a2 + 2);
    if ( v59 != nullptr )
    {
      v127 = (const void *)glotv3::EventOfInstallReferral::k_KeyUtmContent;
      v60 = *(uint32_t *)(glotv3::EventOfInstallReferral::k_KeyUtmContent - 12);
      v119 = (char *)a2 + 4;
      do
      {
        while ( 1 )
        {
          v61 = v60;
          v62 = *(uint32_t *)(*((uint32_t *)v59 + 4) - 12);
          v110 = v60;
          if ( v62 <= v60 )
            v61 = *(uint32_t *)(*((uint32_t *)v59 + 4) - 12);
          v63 = memcmp(*((const void **)v59 + 4), v127, v61);
          v60 = v110;
          v64 = v62 - v110;
          if ( v63 == 0 )
            v63 = v64;
          if ( v63 < 0 )
            break;
          v119 = v59;
          v59 = *((char **)v59 + 2);
          if ( v59 == nullptr )
            goto LABEL_108;
        }
        v59 = *((char **)v59 + 3);
      }
      while ( v59 != nullptr );
LABEL_108:
      if ( v112 != v119 )
      {
        v65 = v110;
        v66 = *(uint32_t *)(*((uint32_t *)v119 + 4) - 12);
        if ( v66 <= v110 )
          v65 = *(uint32_t *)(*((uint32_t *)v119 + 4) - 12);
        v67 = memcmp(v127, *((const void **)v119 + 4), v65);
        if ( v67 == 0 )
          v67 = v110 - v66;
        if ( v67 >= 0 )
          goto LABEL_114;
      }
    }
    else
    {
      v119 = (char *)a2 + 4;
    }
    v136 = &dword_213B814;
    g4_std::string::construct_copy(&v150, &glotv3::EventOfInstallReferral::k_KeyUtmContent);
    g4_std::string::construct_copy(&v151, &v136);
    sub_134A180(v129, a2, (int)(uintptr_t)(v119), (const void **)&v150);
    v119 = (char *)v129[0];
    v95 = (void *)(v151 - 12);
    if ( (uint32_t *)(v151 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v151 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v95);
    }
    v96 = v150 - 3;
    if ( v150 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v150 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v96);
    v97 = v136 - 3;
    if ( v136 - 3 != dword_213B808 && __sync_fetch_and_add(v136 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v97);
LABEL_114:
    v68 = (uint8_t **)(v119 + 20);
    goto LABEL_117;
  }
  v68 = (uint8_t **)&glotv3::system::ODD_ZERO_STRING;
LABEL_117:
  glotv3::Event::addKeyPair((int)(uintptr_t)(self), (uint8_t **)&glotv3::EventOfInstallReferral::k_KeyUtmContent, v68);
  v69 = *((char **)a2 + 2);
  if ( v69 == nullptr )
  {
    v120 = (char *)a2 + 4;
LABEL_155:
    v137 = &dword_213B814;
    g4_std::string::construct_copy(&v152, &glotv3::EventOfInstallReferral::k_KeyUtmCampaign);
    g4_std::string::construct_copy(&v153, &v137);
    sub_134A180(v129, a2, (int)(uintptr_t)(v120), (const void **)&v152);
    v120 = (char *)v129[0];
    v89 = (void *)(v153 - 12);
    if ( (uint32_t *)(v153 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v153 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v89);
    }
    v90 = v152 - 3;
    if ( v152 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v152 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v90);
    v91 = v137 - 3;
    if ( v137 - 3 != dword_213B808 && __sync_fetch_and_add(v137 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v91);
    goto LABEL_132;
  }
  v128 = (const void *)glotv3::EventOfInstallReferral::k_KeyUtmCampaign;
  v120 = (char *)a2 + 4;
  v70 = *(uint32_t *)(glotv3::EventOfInstallReferral::k_KeyUtmCampaign - 12);
  do
  {
    while ( 1 )
    {
      v71 = v70;
      v72 = *(uint32_t *)(*((uint32_t *)v69 + 4) - 12);
      v111 = v70;
      if ( v72 <= v70 )
        v71 = *(uint32_t *)(*((uint32_t *)v69 + 4) - 12);
      v73 = memcmp(*((const void **)v69 + 4), v128, v71);
      v70 = v111;
      v74 = v72 - v111;
      if ( v73 == 0 )
        v73 = v74;
      if ( v73 < 0 )
        break;
      v120 = v69;
      v69 = *((char **)v69 + 2);
      if ( v69 == nullptr )
        goto LABEL_126;
    }
    v69 = *((char **)v69 + 3);
  }
  while ( v69 != nullptr );
LABEL_126:
  if ( v112 == v120 )
    goto LABEL_155;
  v75 = v111;
  v76 = *(uint32_t *)(*((uint32_t *)v120 + 4) - 12);
  if ( v76 <= v111 )
    v75 = *(uint32_t *)(*((uint32_t *)v120 + 4) - 12);
  v77 = memcmp(v128, *((const void **)v120 + 4), v75);
  if ( v77 == 0 )
    v77 = v111 - v76;
  if ( v77 < 0 )
    goto LABEL_155;
LABEL_132:
  if ( *(uint32_t *)(*((uint32_t *)v120 + 5) - 12) != 0 )
    v78 = g4_std::map_string_string_7c7b5d::opIndex(a2, (int)(uintptr_t)(&glotv3::EventOfInstallReferral::k_KeyUtmCampaign));
  else
    v78 = (uint32_t *)(&glotv3::system::ODD_ZERO_STRING);
  return glotv3::Event::addKeyPair(
           (int)(uintptr_t)(self),
           (uint8_t **)&glotv3::EventOfInstallReferral::k_KeyUtmCampaign,
           (uint8_t **)v78);
}


