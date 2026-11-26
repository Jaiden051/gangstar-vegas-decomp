#include "Core/Utils/DecompTypes.h"
#include "iap_PairedStringMapReader.h"

// ----------------------------------------------------------------------------
// Function: iap::PairedStringMapReader::Construct  (binary VA: 0x1536bb0)
// Original: iap::PairedStringMapReader::PairedStringMapReader
// ----------------------------------------------------------------------------
uint32_t * iap::PairedStringMapReader::Construct(uint32_t *a1, int a2)
{
  *a1 = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: iap::PairedStringMapReader::read  (binary VA: 0x1536bc0)
// Original: iap::PairedStringMapReader::read
// ----------------------------------------------------------------------------
int iap::PairedStringMapReader::read(iap::PairedStringMapReader::Self *self)
{
  size_t v1;
  size_t v2;
  size_t v3;
  size_t v4;
  int v5;
  int v6;
  size_t v7;
  size_t v8;
  int v9;
  int v10;
  char *v11;
  void *v12;
  uint32_t *v13;
  size_t v14;
  int v15;
  int v16;
  int v17;
  void *v18;
  char *v19;
  uint32_t *v20;
  size_t v21;
  uint32_t *v22;
  size_t v23;
  unsigned int v24;
  int v25;
  size_t v26;
  int v27;
  size_t v29;
  int v30;
  uint32_t *v31;
  size_t v32;
  unsigned int v33;
  int v34;
  size_t i;
  size_t v36;
  uint32_t *v37;
  size_t v38;
  size_t v39;
  int v40;
  uint32_t *v41;
  size_t v42;
  uint32_t *v43;
  int v44;
  int v45;
  unsigned int v46;
  int v47;
  size_t v48;
  unsigned int v49;
  int v50;
  unsigned int v51;
  char v52;
  size_t v53;
  size_t v54;
  size_t v55;
  int v56;
  unsigned int v57;
  unsigned int v58;
  const void **v59;
  const void **v60;
  uint32_t *v61;
  size_t v62;
  unsigned int v63;
  int v64;
  size_t v65;
  int v66;
  int v67;
  unsigned int v68;
  uint32_t *v69;
  size_t v70;
  unsigned int v71;
  int v72;
  unsigned int v73;
  const void **v74;
  size_t v75;
  size_t v76;
  char v77;
  uint32_t *v78;
  size_t v79;
  unsigned int v80;
  int v81;
  size_t v82;
  int v83;
  int v84;
  unsigned int v85;
  int v86;
  size_t v87;
  unsigned int v88;
  int v89;
  unsigned int v90;
  size_t v91;
  size_t v92;
  size_t v93;
  const void **v94;
  size_t v95;
  unsigned int v96;
  size_t v97;
  int v98;
  int v99;
  size_t v100;
  size_t v101;
  int v102;
  unsigned int v103;
  size_t v104;
  int v105;
  unsigned int v106;
  uint32_t *v107;
  size_t v108;
  unsigned int v109;
  int v110;
  unsigned int v111;
  int v112;
  uint32_t *v113;
  size_t v114;
  typedef size_t _g4_t_v115;
  typedef size_t _g4_t_v116;
  typedef size_t _g4_t_n;
  typedef size_t _g4_t_na;
  typedef size_t _g4_t_nb;
  typedef size_t _g4_t_nc;
  typedef char _g4_t_nd;
  typedef size_t _g4_t_ne;
  typedef size_t _g4_t_nf;
  typedef void *_g4_t_v124;
  typedef const void *_g4_t_v125;
  typedef const void **_g4_t_v126;
  typedef const void **_g4_t_v127;
  typedef const void **_g4_t_v128;
  typedef const void **_g4_t_v129;
  typedef size_t _g4_t_v130;
  typedef size_t _g4_t_v131;
  typedef size_t _g4_t_v132;
  typedef iap::PairedStringMapReader::Self *_g4_t_v133;
  typedef char _g4_t_v134;
  typedef uint32_t *_g4_t_v135;
  typedef char _g4_t_v136;
  typedef void *_g4_t_v137;
  typedef void *_g4_t_v138;
  typedef const void *_g4_t_v139;
  typedef const void *_g4_t_v140;
  typedef uint32_t *_g4_t_v141;
  typedef int _g4_t_v142;
  typedef uint32_t *_g4_t_v143;
  typedef size_t _g4_t_v144;
  typedef size_t _g4_t_v145;
  typedef size_t _g4_t_v146;
  typedef size_t _g4_t_v147;
  typedef size_t _g4_t_v148;
  typedef size_t _g4_t_v149;
  typedef size_t _g4_t_v150;
  typedef size_t _g4_t_v151;
  typedef size_t _g4_t_v152;
  typedef size_t _g4_t_v153;
  typedef size_t _g4_t_v154;
  typedef size_t _g4_t_v155;
  typedef size_t _g4_t_v156;
  typedef void *_g4_t_s2;
  typedef char *_g4_t_s2a;
  typedef void *_g4_t_s2b;
  typedef char _g4_t_v160[27];
  typedef int _g4_t_v161[4];
  typedef uint32_t *_g4_t_v162;
  typedef char *_g4_t_v163;
  typedef void *_g4_t_s1;
  typedef uint32_t _g4_t_v165[3];
  typedef int _g4_t_v166[2];
  typedef uint8_t _g4_t_v167[8];
  typedef uint32_t _g4_t_v168[10];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v115)) > _g4_s0 ? (0u + sizeof(_g4_t_v115)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v116)) > _g4_s1 ? (0u + sizeof(_g4_t_v116)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_n)) > _g4_s2 ? (4u + sizeof(_g4_t_n)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_na)) > _g4_s3 ? (4u + sizeof(_g4_t_na)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_nb)) > _g4_s4 ? (4u + sizeof(_g4_t_nb)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_nc)) > _g4_s5 ? (4u + sizeof(_g4_t_nc)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_nd)) > _g4_s6 ? (4u + sizeof(_g4_t_nd)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_ne)) > _g4_s7 ? (4u + sizeof(_g4_t_ne)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_nf)) > _g4_s8 ? (4u + sizeof(_g4_t_nf)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v124)) > _g4_s9 ? (8u + sizeof(_g4_t_v124)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v125)) > _g4_s10 ? (8u + sizeof(_g4_t_v125)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v126)) > _g4_s11 ? (8u + sizeof(_g4_t_v126)) : _g4_s11,
    _g4_s13 = (8u + sizeof(_g4_t_v127)) > _g4_s12 ? (8u + sizeof(_g4_t_v127)) : _g4_s12,
    _g4_s14 = (8u + sizeof(_g4_t_v128)) > _g4_s13 ? (8u + sizeof(_g4_t_v128)) : _g4_s13,
    _g4_s15 = (8u + sizeof(_g4_t_v129)) > _g4_s14 ? (8u + sizeof(_g4_t_v129)) : _g4_s14,
    _g4_s16 = (12u + sizeof(_g4_t_v130)) > _g4_s15 ? (12u + sizeof(_g4_t_v130)) : _g4_s15,
    _g4_s17 = (12u + sizeof(_g4_t_v131)) > _g4_s16 ? (12u + sizeof(_g4_t_v131)) : _g4_s16,
    _g4_s18 = (12u + sizeof(_g4_t_v132)) > _g4_s17 ? (12u + sizeof(_g4_t_v132)) : _g4_s17,
    _g4_s19 = (16u + sizeof(_g4_t_v133)) > _g4_s18 ? (16u + sizeof(_g4_t_v133)) : _g4_s18,
    _g4_s20 = (24u + sizeof(_g4_t_v134)) > _g4_s19 ? (24u + sizeof(_g4_t_v134)) : _g4_s19,
    _g4_s21 = (24u + sizeof(_g4_t_v135)) > _g4_s20 ? (24u + sizeof(_g4_t_v135)) : _g4_s20,
    _g4_s22 = (24u + sizeof(_g4_t_v136)) > _g4_s21 ? (24u + sizeof(_g4_t_v136)) : _g4_s21,
    _g4_s23 = (24u + sizeof(_g4_t_v137)) > _g4_s22 ? (24u + sizeof(_g4_t_v137)) : _g4_s22,
    _g4_s24 = (24u + sizeof(_g4_t_v138)) > _g4_s23 ? (24u + sizeof(_g4_t_v138)) : _g4_s23,
    _g4_s25 = (28u + sizeof(_g4_t_v139)) > _g4_s24 ? (28u + sizeof(_g4_t_v139)) : _g4_s24,
    _g4_s26 = (28u + sizeof(_g4_t_v140)) > _g4_s25 ? (28u + sizeof(_g4_t_v140)) : _g4_s25,
    _g4_s27 = (28u + sizeof(_g4_t_v141)) > _g4_s26 ? (28u + sizeof(_g4_t_v141)) : _g4_s26,
    _g4_s28 = (32u + sizeof(_g4_t_v142)) > _g4_s27 ? (32u + sizeof(_g4_t_v142)) : _g4_s27,
    _g4_s29 = (36u + sizeof(_g4_t_v143)) > _g4_s28 ? (36u + sizeof(_g4_t_v143)) : _g4_s28,
    _g4_s30 = (40u + sizeof(_g4_t_v144)) > _g4_s29 ? (40u + sizeof(_g4_t_v144)) : _g4_s29,
    _g4_s31 = (40u + sizeof(_g4_t_v145)) > _g4_s30 ? (40u + sizeof(_g4_t_v145)) : _g4_s30,
    _g4_s32 = (40u + sizeof(_g4_t_v146)) > _g4_s31 ? (40u + sizeof(_g4_t_v146)) : _g4_s31,
    _g4_s33 = (40u + sizeof(_g4_t_v147)) > _g4_s32 ? (40u + sizeof(_g4_t_v147)) : _g4_s32,
    _g4_s34 = (40u + sizeof(_g4_t_v148)) > _g4_s33 ? (40u + sizeof(_g4_t_v148)) : _g4_s33,
    _g4_s35 = (40u + sizeof(_g4_t_v149)) > _g4_s34 ? (40u + sizeof(_g4_t_v149)) : _g4_s34,
    _g4_s36 = (40u + sizeof(_g4_t_v150)) > _g4_s35 ? (40u + sizeof(_g4_t_v150)) : _g4_s35,
    _g4_s37 = (40u + sizeof(_g4_t_v151)) > _g4_s36 ? (40u + sizeof(_g4_t_v151)) : _g4_s36,
    _g4_s38 = (40u + sizeof(_g4_t_v152)) > _g4_s37 ? (40u + sizeof(_g4_t_v152)) : _g4_s37,
    _g4_s39 = (40u + sizeof(_g4_t_v153)) > _g4_s38 ? (40u + sizeof(_g4_t_v153)) : _g4_s38,
    _g4_s40 = (40u + sizeof(_g4_t_v154)) > _g4_s39 ? (40u + sizeof(_g4_t_v154)) : _g4_s39,
    _g4_s41 = (40u + sizeof(_g4_t_v155)) > _g4_s40 ? (40u + sizeof(_g4_t_v155)) : _g4_s40,
    _g4_s42 = (40u + sizeof(_g4_t_v156)) > _g4_s41 ? (40u + sizeof(_g4_t_v156)) : _g4_s41,
    _g4_s43 = (44u + sizeof(_g4_t_s2)) > _g4_s42 ? (44u + sizeof(_g4_t_s2)) : _g4_s42,
    _g4_s44 = (44u + sizeof(_g4_t_s2a)) > _g4_s43 ? (44u + sizeof(_g4_t_s2a)) : _g4_s43,
    _g4_s45 = (44u + sizeof(_g4_t_s2b)) > _g4_s44 ? (44u + sizeof(_g4_t_s2b)) : _g4_s44,
    _g4_s46 = (48u + sizeof(_g4_t_v160)) > _g4_s45 ? (48u + sizeof(_g4_t_v160)) : _g4_s45,
    _g4_s47 = (80u + sizeof(_g4_t_v161)) > _g4_s46 ? (80u + sizeof(_g4_t_v161)) : _g4_s46,
    _g4_s48 = (96u + sizeof(_g4_t_v162)) > _g4_s47 ? (96u + sizeof(_g4_t_v162)) : _g4_s47,
    _g4_s49 = (108u + sizeof(_g4_t_v163)) > _g4_s48 ? (108u + sizeof(_g4_t_v163)) : _g4_s48,
    _g4_s50 = (112u + sizeof(_g4_t_s1)) > _g4_s49 ? (112u + sizeof(_g4_t_s1)) : _g4_s49,
    _g4_s51 = (116u + sizeof(_g4_t_v165)) > _g4_s50 ? (116u + sizeof(_g4_t_v165)) : _g4_s50,
    _g4_s52 = (128u + sizeof(_g4_t_v166)) > _g4_s51 ? (128u + sizeof(_g4_t_v166)) : _g4_s51,
    _g4_s53 = (136u + sizeof(_g4_t_v167)) > _g4_s52 ? (136u + sizeof(_g4_t_v167)) : _g4_s52,
    _g4_s54 = (144u + sizeof(_g4_t_v168)) > _g4_s53 ? (144u + sizeof(_g4_t_v168)) : _g4_s53
  };
  alignas(16) uint8_t _g4_sf[_g4_s54];
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 0u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 0u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 4u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 4u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 4u);
  _g4_t_nc &nc = *reinterpret_cast<_g4_t_nc *>(_g4_sf + 4u);
  _g4_t_nd &nd = *reinterpret_cast<_g4_t_nd *>(_g4_sf + 4u);
  _g4_t_ne &ne = *reinterpret_cast<_g4_t_ne *>(_g4_sf + 4u);
  _g4_t_nf &nf = *reinterpret_cast<_g4_t_nf *>(_g4_sf + 4u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 8u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 8u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 8u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 8u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 8u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 8u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 12u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 12u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 12u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 16u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 24u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 24u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 24u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 24u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 24u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 28u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 28u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 28u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 32u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 36u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 40u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 40u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 40u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 40u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 40u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 40u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 40u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 40u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 40u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 40u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 40u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 40u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 40u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 44u);
  _g4_t_s2a &s2a = *reinterpret_cast<_g4_t_s2a *>(_g4_sf + 44u);
  _g4_t_s2b &s2b = *reinterpret_cast<_g4_t_s2b *>(_g4_sf + 44u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 48u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 80u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 96u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 108u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 112u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 116u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 128u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 136u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 144u);

  v168[6] = (uint32_t)(uintptr_t)(&self);
  v133 = self;
  glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v166);
  while ( 1 )
  {
    glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v167);
    if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                            (glwebtools::JsonReader::Iterator::Self *)v166,
                            (const glwebtools::JsonReader::Iterator::Self *)v167) == 0 )
      return 0;
    v161[0] = (int)(uintptr_t)(&dword_213B814);
    glwebtools::JsonReader::Iterator::opMul(
      (glwebtools::JsonReader::Iterator::Self *)v168,
      (glwebtools::Json::ValueIteratorBase::Self *)v166);
    glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v168, (int)(uintptr_t)(v161));
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v168);
    glwebtools::JsonReader::Iterator::name(
      (glwebtools::JsonReader::Iterator::Self *)&v163,
      (glwebtools::Json::ValueIteratorBase::Self *)v166);
    v143 = *(uint32_t **)v133;
    v142 = *(uint32_t *)v133 + 4;
    v1 = *(uint32_t *)(*(uint32_t *)v133 + 8);
    if ( v1 != 0 )
    {
      s2 = v163;
      v144 = *(uint32_t *)v133 + 4;
      v2 = *((uint32_t *)v163 - 3);
      do
      {
        while ( 1 )
        {
          v3 = *(uint32_t *)(*(uint32_t *)(v1 + 16) - 12);
          v4 = v3;
          n = v2;
          if ( v2 <= v3 )
            v4 = v2;
          v5 = memcmp(*(const void **)(v1 + 16), s2, v4);
          v2 = n;
          v6 = v3 - n;
          if ( v5 == 0 )
            v5 = v6;
          if ( v5 < 0 )
            break;
          v144 = v1;
          v1 = *(uint32_t *)(v1 + 8);
          if ( v1 == 0 )
            goto LABEL_12;
        }
        v1 = *(uint32_t *)(v1 + 12);
      }
      while ( v1 != 0 );
LABEL_12:
      if ( v142 != v144 )
      {
        v7 = *(uint32_t *)(*(uint32_t *)(v144 + 16) - 12);
        v8 = v7;
        if ( n <= v7 )
          v8 = n;
        v9 = memcmp(s2, *(const void **)(v144 + 16), v8);
        if ( v9 == 0 )
          v9 = n - v7;
        v10 = v144 + 20;
        if ( v9 >= 0 )
          goto LABEL_18;
      }
    }
    else
    {
      v144 = (size_t)(v143 + 1);
    }
    v162 = &dword_213B814;
    g4_std::string::construct_copy(&s1, &v163);
    g4_std::string::construct_copy(v165, &v162);
    if ( v142 == v144 )
    {
      if ( v143[5] != 0 )
      {
        v141 = (uint32_t *)v143[4];
        v135 = (uint32_t *)v141[4];
        v53 = *((uint32_t *)s1 - 3);
        v54 = *(v135 - 3);
        v55 = v54;
        v125 = s1;
        if ( v53 <= v54 )
          v55 = *((uint32_t *)s1 - 3);
        v148 = v55;
        v56 = memcmp(v135, s1, v55);
        if ( v56 == 0 )
          v56 = v54 - v53;
        if ( v56 < 0 )
        {
          LOBYTE(s2b) = 1;
          if ( (uint32_t *)v142 != v141 )
          {
            v57 = v53 - v54;
            v58 = memcmp(v125, v135, v148);
            if ( v58 == 0 )
              v58 = v57;
            s2b = (void *)(v58 >> 31);
          }
          v149 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
          v10 = v149 + 20;
          if ( v149 != -16 )
          {
            g4_std::string::construct_copy(v149 + 16, &s1);
            g4_std::string::construct_copy(v10, v165);
          }
          sub_1904970((char)(uintptr_t)s2b, v149, v141, v142);
          ++v143[5];
          goto LABEL_31;
        }
      }
      if ( v143[2] == 0 )
      {
        v29 = v142;
        goto LABEL_148;
      }
      v140 = s1;
      s2a = *((char **)s1 - 3);
      for ( i = v143[2]; ; i = v36 )
      {
        v37 = *(uint32_t **)(i + 16);
        v38 = (size_t)s2a;
        v39 = *(v37 - 3);
        if ( (unsigned int)(uintptr_t)(s2a) > v39 )
          v38 = *(v37 - 3);
        v131 = v38;
        nc = i;
        v40 = memcmp(v140, v37, v38);
        if ( v40 == 0 )
          v40 = (int)(uintptr_t)(&s2a[-v39]);
        if ( v40 < 0 )
        {
          v36 = *(uint32_t *)(nc + 8);
          v134 = 1;
          if ( v36 == 0 )
            goto LABEL_69;
        }
        else
        {
          v36 = *(uint32_t *)(nc + 12);
          v134 = 0;
          if ( v36 == 0 )
          {
LABEL_69:
            v41 = v37;
            v29 = nc;
            v42 = v131;
            v43 = v41;
            v146 = nc;
            if ( v134 == 0 )
              goto LABEL_70;
LABEL_148:
            if ( v143[3] == v29 )
            {
              LOBYTE(v46) = 1;
              if ( v142 != v29 )
              {
                v100 = *(uint32_t *)(*(uint32_t *)(v29 + 16) - 12);
                v101 = *((uint32_t *)s1 - 3);
                v156 = v100;
                if ( v100 > v101 )
                  v100 = *((uint32_t *)s1 - 3);
                v102 = memcmp(s1, *(const void **)(v29 + 16), v100);
                v103 = v101 - v156;
                if ( v102 != 0 )
                  v103 = v102;
                v46 = v103 >> 31;
              }
            }
            else
            {
              v93 = sub_19048F0(v29);
              v43 = *(uint32_t **)(v93 + 16);
              v140 = s1;
              v146 = v93;
              v42 = *((uint32_t *)s1 - 3);
              v39 = *(v43 - 3);
              s2a = (char *)v42;
              if ( v42 > v39 )
                v42 = *(v43 - 3);
LABEL_70:
              v44 = memcmp(v43, v140, v42);
              v45 = v39 - (uint32_t)(uintptr_t)(s2a);
              if ( v44 == 0 )
                v44 = v45;
              v10 = v146 + 20;
              if ( v44 >= 0 )
                goto LABEL_31;
              LOBYTE(v46) = 1;
              if ( v142 != v29 )
              {
                v47 = *(uint32_t *)(v29 + 16);
                v48 = (size_t)s2a;
                v49 = *(uint32_t *)(v47 - 12);
                if ( (unsigned int)(uintptr_t)(s2a) > v49 )
                  v48 = *(uint32_t *)(v47 - 12);
                v50 = memcmp(v140, *(const void **)(v29 + 16), v48);
LABEL_77:
                v51 = (unsigned int)(uintptr_t)(&s2a[-v49]);
                if ( v50 != 0 )
                  v51 = v50;
                v46 = v51 >> 31;
              }
            }
            nd = v46;
            v147 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
            v10 = v147 + 20;
            v52 = nd;
            if ( v147 != -16 )
            {
              g4_std::string::construct_copy(v147 + 16, &s1);
              g4_std::string::construct_copy(v10, v165);
              v52 = nd;
            }
            sub_1904970(v52, v147, v29, v142);
            ++v143[5];
            goto LABEL_31;
          }
        }
      }
    }
    v13 = *(uint32_t **)(v144 + 16);
    v139 = s1;
    s2a = *((char **)s1 - 3);
    v14 = (size_t)s2a;
    if ( *(v13 - 3) <= (unsigned int)(uintptr_t)(s2a) )
      v14 = *(v13 - 3);
    na = *(v13 - 3);
    v15 = memcmp(s1, v13, v14);
    v16 = (int)(uintptr_t)(&s2a[-na]);
    if ( v15 != 0 )
      v16 = v15;
    if ( v16 < 0 )
    {
      v130 = v143[3];
      if ( v130 != v144 )
      {
        v21 = sub_1904940(v144);
        v22 = *(uint32_t **)(v21 + 16);
        v23 = (size_t)s2a;
        v24 = *(v22 - 3);
        if ( v24 <= (unsigned int)(uintptr_t)(s2a) )
          v23 = *(v22 - 3);
        v115 = v23;
        nb = v21;
        v25 = memcmp(v22, v139, v23);
        v26 = nb;
        if ( v25 == 0 )
          v25 = v24 - (uint32_t)(uintptr_t)(s2a);
        if ( v25 < 0 )
        {
          if ( *(uint32_t *)(nb + 12) != 0 )
          {
            v27 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
            if ( v27 != -16 )
            {
              g4_std::string::construct_copy(v27 + 16, &s1);
              g4_std::string::construct_copy(v27 + 20, v165);
            }
            sub_1904970(1, v27, v144, v142);
            v10 = v27 + 20;
            ++v143[5];
          }
          else
          {
            LOBYTE(v138) = 1;
            if ( v142 != nb )
            {
              v96 = memcmp(v139, v22, v115);
              v26 = nb;
              if ( v96 == 0 )
                v96 = (unsigned int)(uintptr_t)(&s2a[-v24]);
              v138 = (void *)(v96 >> 31);
            }
            nf = v26;
            v154 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
            v10 = v154 + 20;
            v97 = nf;
            if ( v154 != -16 )
            {
              g4_std::string::construct_copy(v154 + 16, &s1);
              g4_std::string::construct_copy(v10, v165);
              v97 = nf;
            }
            sub_1904970((char)(uintptr_t)v138, v154, v97, v142);
            ++v143[5];
          }
          goto LABEL_31;
        }
        v75 = v143[2];
        if ( v75 != 0 )
        {
          while ( 1 )
          {
            v78 = *(uint32_t **)(v75 + 16);
            v79 = (size_t)s2a;
            v80 = *(v78 - 3);
            if ( v80 <= (unsigned int)(uintptr_t)(s2a) )
              v79 = *(v78 - 3);
            v116 = v79;
            ne = v75;
            v81 = memcmp(v139, v78, v79);
            if ( v81 == 0 )
              v81 = (int)(uintptr_t)(&s2a[-v80]);
            if ( v81 < 0 )
            {
              v76 = *(uint32_t *)(ne + 8);
              v77 = 1;
              if ( v76 == 0 )
                goto LABEL_129;
            }
            else
            {
              v76 = *(uint32_t *)(ne + 12);
              v77 = 0;
              if ( v76 == 0 )
              {
LABEL_129:
                v153 = ne;
                v82 = v116;
                v137 = (void *)ne;
                v91 = ne;
                if ( v77 == 0 )
                  goto LABEL_130;
                goto LABEL_143;
              }
            }
            v75 = v76;
          }
        }
        v153 = v142;
        v91 = v142;
LABEL_143:
        if ( v130 == v91 )
        {
          LOBYTE(v106) = 1;
          if ( v142 != v91 )
          {
            v107 = *(uint32_t **)(v91 + 16);
            v108 = (size_t)s2a;
            v109 = *(v107 - 3);
            if ( v109 <= (unsigned int)(uintptr_t)(s2a) )
              v108 = *(v107 - 3);
            v110 = memcmp(v139, v107, v108);
            v111 = (unsigned int)(uintptr_t)(&s2a[-v109]);
            if ( v110 != 0 )
              v111 = v110;
            v106 = v111 >> 31;
          }
          v112 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
          if ( v112 != -16 )
          {
            g4_std::string::construct_copy(v112 + 16, &s1);
            g4_std::string::construct_copy(v112 + 20, v165);
          }
          sub_1904970(v106, v112, v153, v142);
          v10 = v112 + 20;
          ++v143[5];
          goto LABEL_31;
        }
        v92 = sub_19048F0(v91);
        v78 = *(uint32_t **)(v92 + 16);
        v82 = (size_t)s2a;
        v137 = (void *)v153;
        v153 = v92;
        v80 = *(v78 - 3);
        if ( v80 <= (unsigned int)(uintptr_t)(s2a) )
          v82 = *(v78 - 3);
LABEL_130:
        v83 = memcmp(v78, v139, v82);
        v84 = v80 - (uint32_t)(uintptr_t)(s2a);
        if ( v83 == 0 )
          v83 = v84;
        v10 = v153 + 20;
        if ( v83 >= 0 )
          goto LABEL_31;
        LOBYTE(v85) = 1;
        if ( (void *)v142 != v137 )
        {
          v86 = *((uint32_t *)v137 + 4);
          v87 = (size_t)s2a;
          v88 = *(uint32_t *)(v86 - 12);
          if ( v88 <= (unsigned int)(uintptr_t)(s2a) )
            v87 = *(uint32_t *)(v86 - 12);
          v89 = memcmp(v139, *((const void **)v137 + 4), v87);
          v90 = (unsigned int)(uintptr_t)(&s2a[-v88]);
          if ( v89 != 0 )
            v90 = v89;
          v85 = v90 >> 31;
        }
        v152 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
        v10 = v152 + 20;
        if ( v152 != -16 )
        {
          g4_std::string::construct_copy(v152 + 16, &s1);
          g4_std::string::construct_copy(v10, v165);
        }
        sub_1904970(v85, v152, v137, v142);
LABEL_142:
        ++v143[5];
        goto LABEL_31;
      }
      v155 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
      v10 = v155 + 20;
      if ( v155 != -16 )
      {
        g4_std::string::construct_copy(v155 + 16, &s1);
        g4_std::string::construct_copy(v10, v165);
      }
      sub_1904970(1, v155, v130, v142);
LABEL_57:
      ++v143[5];
      goto LABEL_31;
    }
    v124 = (void *)v15;
    v17 = memcmp(v13, v139, v14);
    if ( v17 == 0 )
      v17 = na - (uint32_t)(uintptr_t)(s2a);
    v10 = v144 + 20;
    if ( v17 >= 0 )
      goto LABEL_31;
    v29 = v143[4];
    if ( v29 == v144 )
    {
      v104 = (size_t)s2a;
      v105 = *(uint32_t *)(v144 + 16);
      v49 = *(uint32_t *)(v105 - 12);
      if ( v49 <= (unsigned int)(uintptr_t)(s2a) )
        v104 = *(uint32_t *)(v105 - 12);
      v50 = memcmp(v139, *(const void **)(v144 + 16), v104);
      goto LABEL_77;
    }
    v30 = sub_19048E0(v144);
    v31 = *(uint32_t **)(v30 + 16);
    v32 = (size_t)s2a;
    v33 = *(v31 - 3);
    if ( v33 <= (unsigned int)(uintptr_t)(s2a) )
      v32 = *(v31 - 3);
    v34 = memcmp(v139, v31, v32);
    if ( v34 == 0 )
      v34 = (int)(uintptr_t)(&s2a[-v33]);
    if ( v34 < 0 )
    {
      if ( *(uint32_t *)(v144 + 12) == 0 )
      {
        v98 = (int)(uintptr_t)(&s2a[-na]);
        if ( v124 != nullptr )
          v98 = (int)(uintptr_t)(v124);
        v99 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
        if ( v99 != -16 )
        {
          g4_std::string::construct_copy(v99 + 16, &s1);
          g4_std::string::construct_copy(v99 + 20, v165);
        }
        sub_1904970(v98 < 0, v99, v144, v142);
        v10 = v99 + 20;
        ++v143[5];
        goto LABEL_31;
      }
      v145 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
      v10 = v145 + 20;
      if ( v145 != -16 )
      {
        g4_std::string::construct_copy(v145 + 16, &s1);
        g4_std::string::construct_copy(v10, v165);
      }
      sub_1904970(1, v145, v30, v142);
      goto LABEL_57;
    }
    v59 = (const void **)v143[2];
    if ( v59 == nullptr )
    {
      v94 = (const void **)v142;
      goto LABEL_152;
    }
    while ( 1 )
    {
      v61 = (uint32_t *)(v59[4]);
      v62 = (size_t)s2a;
      v63 = *(v61 - 3);
      if ( v63 <= (unsigned int)(uintptr_t)(s2a) )
        v62 = *(v61 - 3);
      v132 = v62;
      v126 = v59;
      v64 = memcmp(v139, v61, v62);
      v94 = v126;
      if ( v64 == 0 )
        v64 = (int)(uintptr_t)(&s2a[-v63]);
      if ( v64 >= 0 )
        break;
      v60 = (const void **)v126[2];
      v136 = 1;
      if ( v60 == nullptr )
        goto LABEL_105;
LABEL_98:
      v59 = v60;
    }
    v60 = (const void **)v126[3];
    v136 = 0;
    if ( v60 != nullptr )
      goto LABEL_98;
LABEL_105:
    v65 = v132;
    v150 = (size_t)v126;
    if ( v136 == 0 )
      goto LABEL_106;
LABEL_152:
    if ( (const void **)v143[3] == v94 )
    {
      LOBYTE(v68) = 1;
      if ( (const void **)v142 != v94 )
      {
        v113 = (uint32_t *)(v94[4]);
        v114 = (size_t)s2a;
        v71 = *(v113 - 3);
        if ( v71 <= (unsigned int)(uintptr_t)(s2a) )
          v114 = *(v113 - 3);
        v127 = v94;
        v72 = memcmp(v139, v94[4], v114);
LABEL_113:
        v94 = v127;
        v73 = (unsigned int)(uintptr_t)(&s2a[-v71]);
        if ( v72 != 0 )
          v73 = v72;
        v68 = v73 >> 31;
      }
LABEL_116:
      v128 = v94;
      v151 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
      v10 = v151 + 20;
      v74 = v128;
      if ( v151 != -16 )
      {
        g4_std::string::construct_copy(v151 + 16, &s1);
        g4_std::string::construct_copy(v10, v165);
        v74 = v128;
      }
      sub_1904970(v68, v151, v74, v142);
      goto LABEL_142;
    }
    v129 = v94;
    v95 = sub_19048F0(v94);
    v61 = *(uint32_t **)(v95 + 16);
    v150 = v95;
    v65 = (size_t)s2a;
    v94 = v129;
    v63 = *(v61 - 3);
    if ( v63 <= (unsigned int)(uintptr_t)(s2a) )
      v65 = *(v61 - 3);
LABEL_106:
    v127 = v94;
    v66 = memcmp(v61, v139, v65);
    v67 = v63 - (uint32_t)(uintptr_t)(s2a);
    v94 = v127;
    if ( v66 == 0 )
      v66 = v67;
    v10 = v150 + 20;
    if ( v66 < 0 )
    {
      LOBYTE(v68) = 1;
      if ( (const void **)v142 != v127 )
      {
        v69 = (uint32_t *)(v127[4]);
        v70 = (size_t)s2a;
        v71 = *(v69 - 3);
        if ( v71 <= (unsigned int)(uintptr_t)(s2a) )
          v70 = *(v69 - 3);
        v72 = memcmp(v139, v127[4], v70);
        goto LABEL_113;
      }
      goto LABEL_116;
    }
LABEL_31:
    v18 = (void *)(v165[0] - 12);
    if ( (uint32_t *)(v165[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v165[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v18);
    }
    v19 = (char *)s1 - 12;
    if ( (char *)s1 - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)s1 - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v19);
    }
    v20 = v162 - 3;
    if ( v162 - 3 != dword_213B808 && __sync_fetch_and_add(v162 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v20);
LABEL_18:
    g4_std::string::assign_str(v10, v161);
    v11 = v163 - 12;
    if ( v163 - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v163 - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
    v12 = (void *)(v161[0] - 12);
    if ( (uint32_t *)(v161[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v161[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    glwebtools::JsonReader::Iterator::opInc(
      (glwebtools::JsonReader::Iterator::Self *)v160,
      (glwebtools::JsonReader::Iterator::Self *)v166);
  }
}


