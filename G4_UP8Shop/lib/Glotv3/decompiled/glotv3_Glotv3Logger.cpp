#include "Core/Utils/DecompTypes.h"
#include "glotv3_Glotv3Logger.h"

// ----------------------------------------------------------------------------
// Function: glotv3::Glotv3Logger::SetIsSpyStreamLoggingActive  (binary VA: 0x13455b0)
// Original: glotv3::Glotv3Logger::SetIsSpyStreamLoggingActive
// ----------------------------------------------------------------------------
char glotv3::Glotv3Logger::SetIsSpyStreamLoggingActive(glotv3::Glotv3Logger::Self *self)
{
  char result;

  result = glotv3::Glotv3Logger::s_IsSpyStreamLoggingActive;
  glotv3::Glotv3Logger::s_IsSpyStreamLoggingActive = *(uint8_t *)self;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glotv3::Glotv3Logger::WriteLog  (binary VA: 0x13455d0)
// Original: glotv3::Glotv3Logger::WriteLog
// ----------------------------------------------------------------------------
int glotv3::Glotv3Logger::WriteLog(uint32_t *a1)
{
  int result;
  int v2;
  int v3;
  int v4;
  void *v5;
  uint32_t *v6;
  size_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  char v12;
  int v13;
  void *v14;
  uint32_t *v15;
  uint32_t *v16;
  void *v17;
  void *v18;
  void *v19;
  uint32_t *v20;
  uint32_t *v21;
  int v22;
  char v23;
  int v24;
  void *v25;
  void *v26;
  uint32_t *v27;
  size_t *v28;
  size_t *v29;
  void *v30;
  void *v31;
  typedef uint32_t *_g4_t_v32;
  typedef size_t *_g4_t_v33;
  typedef uint8_t *_g4_t_v34;
  typedef uint8_t *_g4_t_v35;
  typedef size_t *_g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef char *_g4_t_v39;
  typedef char *_g4_t_v40;
  typedef char *_g4_t_v41;
  typedef void *_g4_t_UTCAsSeconds;
  typedef uint32_t *_g4_t_v43;
  typedef uint8_t *_g4_t_v44;
  typedef uint32_t *_g4_t_v45;
  typedef size_t *_g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef size_t _g4_t_n;
  typedef size_t _g4_t_na;
  typedef size_t _g4_t_nb;
  typedef size_t _g4_t_nc;
  typedef size_t _g4_t_nd;
  typedef size_t _g4_t_ne;
  typedef void *_g4_t_srcf;
  typedef uint8_t *_g4_t_src;
  typedef uint8_t *_g4_t_srca;
  typedef uint8_t *_g4_t_srcb;
  typedef uint8_t *_g4_t_srcc;
  typedef uint8_t *_g4_t_srcd;
  typedef uint8_t *_g4_t_srce;
  typedef uint32_t _g4_t_v61[4];
  typedef uint32_t _g4_t_v62[4];
  typedef uint32_t _g4_t_v63[4];
  typedef uint32_t _g4_t_v64[4];
  typedef uint32_t _g4_t_v65[4];
  typedef uint32_t _g4_t_v66[3];
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef uint32_t *_g4_t_v70;
  typedef uint32_t *_g4_t_v71;
  typedef uint32_t *_g4_t_v72;
  typedef uint32_t *_g4_t_v73;
  typedef uint32_t *_g4_t_v74;
  typedef uint32_t *_g4_t_v75;
  typedef int (**_g4_t_v76)(int);
  typedef int _g4_t_v77;
  typedef int (**_g4_t_v78)(int);
  typedef uint32_t _g4_t_v79[3];
  typedef uint8_t *_g4_t_v80;
  typedef uint8_t *_g4_t_v81;
  typedef uint8_t *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef char _g4_t_v84[4];
  typedef int _g4_t_v85;
  typedef uint32_t *_g4_t_v86;
  typedef uint32_t _g4_t_v87[29];
  typedef char _g4_t_v88;
  typedef char _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int (**_g4_t_v94)(int);
  typedef int _g4_t_v95[7];
  typedef char _g4_t_v96[8];
  typedef char _g4_t_v97[68];
  typedef uint32_t _g4_t_v98[29];
  typedef char _g4_t_v99;
  typedef char _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef uint32_t *_g4_t_v105;
  enum : size_t {
    _g4_s0 = 704u,
    _g4_s1 = (0u + sizeof(_g4_t_v32)) > _g4_s0 ? (0u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v33)) > _g4_s1 ? (0u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v34)) > _g4_s2 ? (0u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v35)) > _g4_s3 ? (0u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v36)) > _g4_s4 ? (0u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v37)) > _g4_s5 ? (0u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v38)) > _g4_s6 ? (0u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v39)) > _g4_s7 ? (4u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v40)) > _g4_s8 ? (4u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v41)) > _g4_s9 ? (4u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_UTCAsSeconds)) > _g4_s10 ? (8u + sizeof(_g4_t_UTCAsSeconds)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v43)) > _g4_s11 ? (8u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (8u + sizeof(_g4_t_v44)) > _g4_s12 ? (8u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (8u + sizeof(_g4_t_v45)) > _g4_s13 ? (8u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (8u + sizeof(_g4_t_v46)) > _g4_s14 ? (8u + sizeof(_g4_t_v46)) : _g4_s14,
    _g4_s16 = (8u + sizeof(_g4_t_v47)) > _g4_s15 ? (8u + sizeof(_g4_t_v47)) : _g4_s15,
    _g4_s17 = (12u + sizeof(_g4_t_n)) > _g4_s16 ? (12u + sizeof(_g4_t_n)) : _g4_s16,
    _g4_s18 = (12u + sizeof(_g4_t_na)) > _g4_s17 ? (12u + sizeof(_g4_t_na)) : _g4_s17,
    _g4_s19 = (12u + sizeof(_g4_t_nb)) > _g4_s18 ? (12u + sizeof(_g4_t_nb)) : _g4_s18,
    _g4_s20 = (12u + sizeof(_g4_t_nc)) > _g4_s19 ? (12u + sizeof(_g4_t_nc)) : _g4_s19,
    _g4_s21 = (12u + sizeof(_g4_t_nd)) > _g4_s20 ? (12u + sizeof(_g4_t_nd)) : _g4_s20,
    _g4_s22 = (12u + sizeof(_g4_t_ne)) > _g4_s21 ? (12u + sizeof(_g4_t_ne)) : _g4_s21,
    _g4_s23 = (16u + sizeof(_g4_t_srcf)) > _g4_s22 ? (16u + sizeof(_g4_t_srcf)) : _g4_s22,
    _g4_s24 = (16u + sizeof(_g4_t_src)) > _g4_s23 ? (16u + sizeof(_g4_t_src)) : _g4_s23,
    _g4_s25 = (16u + sizeof(_g4_t_srca)) > _g4_s24 ? (16u + sizeof(_g4_t_srca)) : _g4_s24,
    _g4_s26 = (16u + sizeof(_g4_t_srcb)) > _g4_s25 ? (16u + sizeof(_g4_t_srcb)) : _g4_s25,
    _g4_s27 = (16u + sizeof(_g4_t_srcc)) > _g4_s26 ? (16u + sizeof(_g4_t_srcc)) : _g4_s26,
    _g4_s28 = (16u + sizeof(_g4_t_srcd)) > _g4_s27 ? (16u + sizeof(_g4_t_srcd)) : _g4_s27,
    _g4_s29 = (16u + sizeof(_g4_t_srce)) > _g4_s28 ? (16u + sizeof(_g4_t_srce)) : _g4_s28,
    _g4_s30 = (52u + sizeof(_g4_t_v61)) > _g4_s29 ? (52u + sizeof(_g4_t_v61)) : _g4_s29,
    _g4_s31 = (68u + sizeof(_g4_t_v62)) > _g4_s30 ? (68u + sizeof(_g4_t_v62)) : _g4_s30,
    _g4_s32 = (84u + sizeof(_g4_t_v63)) > _g4_s31 ? (84u + sizeof(_g4_t_v63)) : _g4_s31,
    _g4_s33 = (100u + sizeof(_g4_t_v64)) > _g4_s32 ? (100u + sizeof(_g4_t_v64)) : _g4_s32,
    _g4_s34 = (116u + sizeof(_g4_t_v65)) > _g4_s33 ? (116u + sizeof(_g4_t_v65)) : _g4_s33,
    _g4_s35 = (132u + sizeof(_g4_t_v66)) > _g4_s34 ? (132u + sizeof(_g4_t_v66)) : _g4_s34,
    _g4_s36 = (144u + sizeof(_g4_t_v67)) > _g4_s35 ? (144u + sizeof(_g4_t_v67)) : _g4_s35,
    _g4_s37 = (148u + sizeof(_g4_t_v68)) > _g4_s36 ? (148u + sizeof(_g4_t_v68)) : _g4_s36,
    _g4_s38 = (152u + sizeof(_g4_t_v69)) > _g4_s37 ? (152u + sizeof(_g4_t_v69)) : _g4_s37,
    _g4_s39 = (156u + sizeof(_g4_t_v70)) > _g4_s38 ? (156u + sizeof(_g4_t_v70)) : _g4_s38,
    _g4_s40 = (160u + sizeof(_g4_t_v71)) > _g4_s39 ? (160u + sizeof(_g4_t_v71)) : _g4_s39,
    _g4_s41 = (164u + sizeof(_g4_t_v72)) > _g4_s40 ? (164u + sizeof(_g4_t_v72)) : _g4_s40,
    _g4_s42 = (168u + sizeof(_g4_t_v73)) > _g4_s41 ? (168u + sizeof(_g4_t_v73)) : _g4_s41,
    _g4_s43 = (172u + sizeof(_g4_t_v74)) > _g4_s42 ? (172u + sizeof(_g4_t_v74)) : _g4_s42,
    _g4_s44 = (176u + sizeof(_g4_t_v75)) > _g4_s43 ? (176u + sizeof(_g4_t_v75)) : _g4_s43,
    _g4_s45 = (180u + sizeof(_g4_t_v76)) > _g4_s44 ? (180u + sizeof(_g4_t_v76)) : _g4_s44,
    _g4_s46 = (184u + sizeof(_g4_t_v77)) > _g4_s45 ? (184u + sizeof(_g4_t_v77)) : _g4_s45,
    _g4_s47 = (188u + sizeof(_g4_t_v78)) > _g4_s46 ? (188u + sizeof(_g4_t_v78)) : _g4_s46,
    _g4_s48 = (192u + sizeof(_g4_t_v79)) > _g4_s47 ? (192u + sizeof(_g4_t_v79)) : _g4_s47,
    _g4_s49 = (204u + sizeof(_g4_t_v80)) > _g4_s48 ? (204u + sizeof(_g4_t_v80)) : _g4_s48,
    _g4_s50 = (208u + sizeof(_g4_t_v81)) > _g4_s49 ? (208u + sizeof(_g4_t_v81)) : _g4_s49,
    _g4_s51 = (212u + sizeof(_g4_t_v82)) > _g4_s50 ? (212u + sizeof(_g4_t_v82)) : _g4_s50,
    _g4_s52 = (216u + sizeof(_g4_t_v83)) > _g4_s51 ? (216u + sizeof(_g4_t_v83)) : _g4_s51,
    _g4_s53 = (220u + sizeof(_g4_t_v84)) > _g4_s52 ? (220u + sizeof(_g4_t_v84)) : _g4_s52,
    _g4_s54 = (224u + sizeof(_g4_t_v85)) > _g4_s53 ? (224u + sizeof(_g4_t_v85)) : _g4_s53,
    _g4_s55 = (228u + sizeof(_g4_t_v86)) > _g4_s54 ? (228u + sizeof(_g4_t_v86)) : _g4_s54,
    _g4_s56 = (232u + sizeof(_g4_t_v87)) > _g4_s55 ? (232u + sizeof(_g4_t_v87)) : _g4_s55,
    _g4_s57 = (348u + sizeof(_g4_t_v88)) > _g4_s56 ? (348u + sizeof(_g4_t_v88)) : _g4_s56,
    _g4_s58 = (349u + sizeof(_g4_t_v89)) > _g4_s57 ? (349u + sizeof(_g4_t_v89)) : _g4_s57,
    _g4_s59 = (352u + sizeof(_g4_t_v90)) > _g4_s58 ? (352u + sizeof(_g4_t_v90)) : _g4_s58,
    _g4_s60 = (356u + sizeof(_g4_t_v91)) > _g4_s59 ? (356u + sizeof(_g4_t_v91)) : _g4_s59,
    _g4_s61 = (360u + sizeof(_g4_t_v92)) > _g4_s60 ? (360u + sizeof(_g4_t_v92)) : _g4_s60,
    _g4_s62 = (364u + sizeof(_g4_t_v93)) > _g4_s61 ? (364u + sizeof(_g4_t_v93)) : _g4_s61,
    _g4_s63 = (368u + sizeof(_g4_t_v94)) > _g4_s62 ? (368u + sizeof(_g4_t_v94)) : _g4_s62,
    _g4_s64 = (372u + sizeof(_g4_t_v95)) > _g4_s63 ? (372u + sizeof(_g4_t_v95)) : _g4_s63,
    _g4_s65 = (400u + sizeof(_g4_t_v96)) > _g4_s64 ? (400u + sizeof(_g4_t_v96)) : _g4_s64,
    _g4_s66 = (408u + sizeof(_g4_t_v97)) > _g4_s65 ? (408u + sizeof(_g4_t_v97)) : _g4_s65,
    _g4_s67 = (476u + sizeof(_g4_t_v98)) > _g4_s66 ? (476u + sizeof(_g4_t_v98)) : _g4_s66,
    _g4_s68 = (592u + sizeof(_g4_t_v99)) > _g4_s67 ? (592u + sizeof(_g4_t_v99)) : _g4_s67,
    _g4_s69 = (593u + sizeof(_g4_t_v100)) > _g4_s68 ? (593u + sizeof(_g4_t_v100)) : _g4_s68,
    _g4_s70 = (596u + sizeof(_g4_t_v101)) > _g4_s69 ? (596u + sizeof(_g4_t_v101)) : _g4_s69,
    _g4_s71 = (600u + sizeof(_g4_t_v102)) > _g4_s70 ? (600u + sizeof(_g4_t_v102)) : _g4_s70,
    _g4_s72 = (604u + sizeof(_g4_t_v103)) > _g4_s71 ? (604u + sizeof(_g4_t_v103)) : _g4_s71,
    _g4_s73 = (608u + sizeof(_g4_t_v104)) > _g4_s72 ? (608u + sizeof(_g4_t_v104)) : _g4_s72,
    _g4_s74 = (620u + sizeof(_g4_t_v105)) > _g4_s73 ? (620u + sizeof(_g4_t_v105)) : _g4_s73
  };
  alignas(16) uint8_t _g4_sf[_g4_s74];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 0u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 0u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 4u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 4u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_UTCAsSeconds &UTCAsSeconds = *reinterpret_cast<_g4_t_UTCAsSeconds *>(_g4_sf + 8u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 8u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 12u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 12u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 12u);
  _g4_t_nc &nc = *reinterpret_cast<_g4_t_nc *>(_g4_sf + 12u);
  _g4_t_nd &nd = *reinterpret_cast<_g4_t_nd *>(_g4_sf + 12u);
  _g4_t_ne &ne = *reinterpret_cast<_g4_t_ne *>(_g4_sf + 12u);
  _g4_t_srcf &srcf = *reinterpret_cast<_g4_t_srcf *>(_g4_sf + 16u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 16u);
  _g4_t_srca &srca = *reinterpret_cast<_g4_t_srca *>(_g4_sf + 16u);
  _g4_t_srcb &srcb = *reinterpret_cast<_g4_t_srcb *>(_g4_sf + 16u);
  _g4_t_srcc &srcc = *reinterpret_cast<_g4_t_srcc *>(_g4_sf + 16u);
  _g4_t_srcd &srcd = *reinterpret_cast<_g4_t_srcd *>(_g4_sf + 16u);
  _g4_t_srce &srce = *reinterpret_cast<_g4_t_srce *>(_g4_sf + 16u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 52u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 68u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 84u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 100u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 116u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 132u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 144u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 148u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 152u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 156u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 160u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 164u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 168u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 172u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 176u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 180u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 184u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 188u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 192u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 204u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 208u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 212u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 216u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 220u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 224u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 228u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 232u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 348u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 349u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 352u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 356u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 360u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 364u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 368u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 372u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 400u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 408u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 476u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 592u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 593u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 596u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 600u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 604u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 608u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 620u);

  v105 = (uint32_t *)(&a1);
  result = glotv3::Glotv3Logger::s_IsSpyStreamLoggingActive;
  if ( glotv3::Glotv3Logger::s_IsSpyStreamLoggingActive == 0 )
    return result;
  v32 = a1;
  sub_1900810(v87);
  v87[28] = 0;
  v88 = 0;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v87[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v93 = 0;
  v76 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v76 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v77 = 0;
  sub_19119D0((char *)&v76 + (uint32_t)(uintptr_t)(*(v76 - 3)), 0);
  v78 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v79[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v79[-1] + (uint32_t)(uintptr_t)(*(v78 - 3)), 0);
  v76 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v76 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v79[1] = 0;
  v79[2] = 0;
  v80 = nullptr;
  v81 = nullptr;
  v82 = nullptr;
  v83 = 0;
  v76 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v87[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v78 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v79[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v84);
  v85 = 24;
  v79[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v86 = &dword_213B814;
  sub_19119D0(v87, v79);
  glotv3::Utils::GetUTCAsString((glotv3::Utils::Self *)&v67);
  UTCAsSeconds = (void *)glotv3::Utils::GetUTCAsSeconds();
  g4_std_compat::ostream_write(&v78, "[GLOTv3] LOG ## ", 16);
  g4_std_compat::ostream_write(&v78, "At: ", 4);
  v2 = (int)(uintptr_t)(sub_192D8B0(&v78, UTCAsSeconds));
  v3 = (int)(uintptr_t)(g4_std_compat::ostream_write(v2, glotv3::system::HASHTAG, *(uint32_t *)(glotv3::system::HASHTAG - 12)));
  srcf = (void *)g4_std_compat::ostream_write(v3, v67, *(uint32_t *)(v67 - 12));
  v4 = (int)(uintptr_t)(g4_std_compat::ostream_write(srcf, glotv3::system::HASHTAG, *(uint32_t *)(glotv3::system::HASHTAG - 12)));
  g4_std_compat::ostream_write(v4, *v32, *(uint32_t *)(*v32 - 12));
  v5 = (void *)(v67 - 12);
  if ( (uint32_t *)(v67 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v67 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = &dword_213B814;
  v61[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v82 == nullptr )
  {
    g4_std::string::assign_str(v61, &v86);
    goto LABEL_12;
  }
  if ( v82 > v80 )
  {
    if ( v82 != v81 )
    {
      if ( v81 == nullptr )
        goto LABEL_78;
      v35 = v81;
      srcc = (uint8_t *)(v82 - v81);
      nc = sub_1938930(v82 - v81, 0);
      v6 = (uint32_t *)(nc + 12);
      if ( srcc == (uint8_t *)&dword_0 + 1 )
      {
        *(uint8_t *)(nc + 12) = *v35;
      }
      else
      {
        memcpy(v6, v35, (size_t)srcc);
        v6 = (uint32_t *)(nc + 12);
      }
      if ( (uint32_t *)nc != dword_213B808 )
      {
        *(uint32_t *)(nc + 8) = 0;
        *(uint32_t *)nc = (uint32_t)(uintptr_t)(srcc);
        srcc[nc + 12] = 0;
      }
    }
    v71 = v6;
    g4_std::string::assign_str(v61, &v71);
    v8 = v71 - 3;
    if ( v71 - 3 != dword_213B808 && __sync_fetch_and_add(v71 - 1, 0xFFFFFFFF) <= 0 )
      goto LABEL_57;
    goto LABEL_12;
  }
  src = v81;
  if ( v80 != v81 )
  {
    if ( v81 != nullptr )
    {
      n = v80 - v81;
      v7 = (size_t *)sub_1938930(v80 - v81, 0);
      v6 = (uint32_t *)(v7 + 3);
      if ( n == 1 )
      {
        *((uint8_t *)v7 + 12) = *src;
LABEL_9:
        if ( v7 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v7[2] = 0;
          *v7 = n;
          *((uint8_t *)v6 + n) = 0;
        }
        goto LABEL_11;
      }
    }
    else
    {
      if ( v80 != nullptr )
        goto LABEL_78;
      v7 = (size_t *)sub_1938930(0, 0);
      v6 = (uint32_t *)(v7 + 3);
      n = 0;
    }
    v33 = v7;
    v43 = v6;
    memcpy(v6, src, n);
    v6 = v43;
    v7 = v33;
    goto LABEL_9;
  }
LABEL_11:
  v70 = v6;
  g4_std::string::assign_str(v61, &v70);
  v8 = v70 - 3;
  if ( v70 - 3 != dword_213B808 && __sync_fetch_and_add(v70 - 1, 0xFFFFFFFF) <= 0 )
LABEL_57:
    g4_std::string::Rep::M_destroy(v8);
LABEL_12:
  v9 = (uint32_t *)g4_std_compat::ostream_write(dword_213A780, v61[0], *(uint32_t *)(v61[0] - 12));
  v11 = *(uint32_t *)((char *)v9 + *(uint32_t *)(*v9 - 12) + 124);
  if ( v11 == 0 )
    goto LABEL_99;
  if ( *(uint8_t *)(v11 + 28) != 0 )
  {
    v12 = *(uint8_t *)(v11 + 39);
  }
  else
  {
    v38 = v9;
    v40 = *(char **)((char *)v9 + *(uint32_t *)(*v9 - 12) + 124);
    sub_18FFC70(v11);
    v12 = G4_VCALL<int>(v40, 24, 10);
    v9 = v38;
  }
  v13 = (int)(uintptr_t)(g4_std::ostream::put(v9, v12));
  g4_std_compat::ostream_flush(v13);
  v14 = (void *)(v61[0] - 12);
  if ( (uint32_t *)(v61[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v61[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  v15 = &dword_213B814;
  v62[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v82 == nullptr )
  {
    g4_std::string::assign_str(v62, &v86);
    goto LABEL_25;
  }
  if ( v82 > v80 )
  {
    if ( v82 != v81 )
    {
      if ( v81 == nullptr )
        goto LABEL_78;
      v34 = v81;
      srca = (uint8_t *)(v82 - v81);
      na = sub_1938930(v82 - v81, 0);
      v15 = (uint32_t *)(na + 12);
      if ( srca == (uint8_t *)&dword_0 + 1 )
      {
        *(uint8_t *)(na + 12) = *v34;
      }
      else
      {
        memcpy(v15, v34, (size_t)srca);
        v15 = (uint32_t *)(na + 12);
      }
      if ( (uint32_t *)na != dword_213B808 )
      {
        *(uint32_t *)(na + 8) = 0;
        *(uint32_t *)na = (uint32_t)(uintptr_t)(srca);
        srca[na + 12] = 0;
      }
    }
    v73 = v15;
    g4_std::string::assign_str(v62, &v73);
    v16 = v73 - 3;
    if ( v73 - 3 != dword_213B808 && __sync_fetch_and_add(v73 - 1, 0xFFFFFFFF) <= 0 )
      goto LABEL_66;
    goto LABEL_25;
  }
  srcd = v81;
  if ( v80 != v81 )
  {
    if ( v81 != nullptr )
    {
      nd = v80 - v81;
      v28 = (size_t *)sub_1938930(v80 - v81, 0);
      v15 = (uint32_t *)(v28 + 3);
      if ( nd == 1 )
      {
        *((uint8_t *)v28 + 12) = *srcd;
LABEL_62:
        if ( v28 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v28[2] = 0;
          *v28 = nd;
          *((uint8_t *)v15 + nd) = 0;
        }
        goto LABEL_64;
      }
    }
    else
    {
      if ( v80 != nullptr )
        goto LABEL_78;
      v28 = (size_t *)sub_1938930(0, 0);
      v15 = (uint32_t *)(v28 + 3);
      nd = 0;
    }
    v36 = v28;
    v45 = v15;
    memcpy(v15, srcd, nd);
    v15 = v45;
    v28 = v36;
    goto LABEL_62;
  }
LABEL_64:
  v72 = v15;
  g4_std::string::assign_str(v62, &v72);
  v16 = v72 - 3;
  if ( v72 - 3 != dword_213B808 && __sync_fetch_and_add(v72 - 1, 0xFFFFFFFF) <= 0 )
LABEL_66:
    g4_std::string::Rep::M_destroy(v16);
LABEL_25:
  G4_PlatformLog(4, "GLOTv3", "%s", (const char *)(uintptr_t)v62[0]);
  v17 = (void *)(v62[0] - 12);
  if ( (uint32_t *)(v62[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v62[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  glotv3::Porting::GetDataDirectory((glotv3::Porting::Self *)v64);
  g4_std::string::construct_copy(&v68, v64);
  g4_std::string::append_str(&v68, &glotv3::system::BACKSLASH);
  g4_std::string::construct_copy(v63, &v68);
  g4_std::string::append_str(v63, &glotv3::system::QADEBUG_LOG_FILE);
  v18 = (void *)(v68 - 12);
  if ( (uint32_t *)(v68 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v68 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  v19 = (void *)(v64[0] - 12);
  if ( (uint32_t *)(v64[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v64[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v19);
  }
  if ( glotv3::Porting::GetPlatform() == 1 )
  {
    g4_std::string::construct_copy(v65, &glotv3::system::QADEBUG_ANDROID_PATH_FIX);
    g4_std::string::append_str(v65, &glotv3::system::BACKSLASH);
    g4_std::string::construct_copy(&v69, v65);
    g4_std::string::append_str(&v69, &glotv3::system::QADEBUG_LOG_FILE);
    g4_std::string::assign_str(v63, &v69);
    v30 = (void *)(v69 - 12);
    if ( (uint32_t *)(v69 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v69 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v30);
    }
    v31 = (void *)(v65[0] - 12);
    if ( (uint32_t *)(v65[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v65[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v31);
    }
  }
  v39 = (char *)v63[0];
  sub_1900810(v98);
  v98[28] = 0;
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v98[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v94 = (int (**)(int))(uintptr_t)(&off_20A9E6C);
  *(int *)((char *)&v95[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (int)(uintptr_t)(&off_20A9E80);
  sub_19119D0((char *)&v95[-1] + (uint32_t)(uintptr_t)(*(v94 - 3)), 0);
  v94 = (int (**)(int))(uintptr_t)(&off_20A9EAC);
  v98[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
  sub_190A6D0(v95);
  sub_19119D0(v98, v95);
  if ( sub_190AE40((int)(uintptr_t)(v95), v39, 19) != 0 )
    sub_1911530((char *)&v95[-1] + (uint32_t)(uintptr_t)(*(v94 - 3)), 0);
  else
    sub_1911530((char *)&v95[-1] + (uint32_t)(uintptr_t)(*(v94 - 3)), *(int *)((char *)&v95[4] + (uint32_t)(uintptr_t)(*(v94 - 3))) | 4);
  v20 = &dword_213B814;
  v66[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v82 == nullptr )
  {
    g4_std::string::assign_str(v66, &v86);
    goto LABEL_40;
  }
  if ( v82 <= v80 )
  {
    srce = v81;
    if ( v80 == v81 )
      goto LABEL_73;
    if ( v81 != nullptr )
    {
      ne = v80 - v81;
      v29 = (size_t *)sub_1938930(v80 - v81, 0);
      v20 = (uint32_t *)(v29 + 3);
      if ( ne == 1 )
      {
        *((uint8_t *)v29 + 12) = *srce;
LABEL_71:
        if ( v29 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v29[2] = 0;
          *v29 = ne;
          *((uint8_t *)v20 + ne) = 0;
        }
LABEL_73:
        v74 = v20;
        g4_std::string::assign_str(v66, &v74);
        v21 = v74 - 3;
        if ( v74 - 3 != dword_213B808 && __sync_fetch_and_add(v74 - 1, 0xFFFFFFFF) <= 0 )
          goto LABEL_75;
        goto LABEL_40;
      }
    }
    else
    {
      if ( v80 != nullptr )
        goto LABEL_78;
      v29 = (size_t *)sub_1938930(0, 0);
      v20 = (uint32_t *)(v29 + 3);
      ne = 0;
    }
    v37 = v20;
    v46 = v29;
    memcpy(v20, srce, ne);
    v29 = v46;
    v20 = v37;
    goto LABEL_71;
  }
  if ( v82 == v81 )
    goto LABEL_39;
  if ( v81 == nullptr )
LABEL_78:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v44 = v81;
  srcb = (uint8_t *)(v82 - v81);
  nb = sub_1938930(v82 - v81, 0);
  v20 = (uint32_t *)(nb + 12);
  if ( srcb == (uint8_t *)&dword_0 + 1 )
  {
    *(uint8_t *)(nb + 12) = *v44;
  }
  else
  {
    memcpy(v20, v44, (size_t)srcb);
    v20 = (uint32_t *)(nb + 12);
  }
  if ( (uint32_t *)nb != dword_213B808 )
  {
    *(uint32_t *)(nb + 8) = 0;
    *(uint32_t *)nb = (uint32_t)(uintptr_t)(srcb);
    srcb[nb + 12] = 0;
  }
LABEL_39:
  v75 = v20;
  g4_std::string::assign_str(v66, &v75);
  v21 = v75 - 3;
  if ( v75 - 3 != dword_213B808 && __sync_fetch_and_add(v75 - 1, 0xFFFFFFFF) <= 0 )
LABEL_75:
    g4_std::string::Rep::M_destroy(v21);
LABEL_40:
  v10 = (uint32_t *)g4_std_compat::ostream_write(&v94, v66[0], *(uint32_t *)(v66[0] - 12));
  v22 = *(uint32_t *)((char *)v10 + *(uint32_t *)(*v10 - 12) + 124);
  if ( v22 == 0 )
LABEL_99:
    sub_18FFF30(v10);
  if ( *(uint8_t *)(v22 + 28) != 0 )
  {
    v23 = *(uint8_t *)(v22 + 39);
  }
  else
  {
    v47 = v10;
    v41 = *(char **)((char *)v10 + *(uint32_t *)(*v10 - 12) + 124);
    sub_18FFC70(v22);
    v23 = G4_VCALL<int>(v41, 24, 10);
    v10 = v47;
  }
  v24 = (int)(uintptr_t)(g4_std::ostream::put(v10, v23));
  g4_std_compat::ostream_flush(v24);
  v25 = (void *)(v66[0] - 12);
  if ( (uint32_t *)(v66[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v66[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v25);
  }
  if ( sub_190AC60(v95) == 0 )
    sub_1911530((char *)&v95[-1] + (uint32_t)(uintptr_t)(*(v94 - 3)), *(int *)((char *)&v95[4] + (uint32_t)(uintptr_t)(*(v94 - 3))) | 4);
  v94 = (int (**)(int))(uintptr_t)(&off_20A9EAC);
  v98[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
  v95[0] = (int)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(v95);
  sub_1908070(v97);
  v95[0] = (int)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v96);
  v94 = (int (**)(int))(uintptr_t)(&off_20A9E6C);
  *(int *)((char *)&v95[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (int)(uintptr_t)(&off_20A9E80);
  v98[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v98);
  v26 = (void *)(v63[0] - 12);
  if ( (uint32_t *)(v63[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v63[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v26);
  }
  v76 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v87[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v78 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v79[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v27 = v86 - 3;
  if ( v86 - 3 != dword_213B808 && __sync_fetch_and_add(v86 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v27);
  v79[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v84);
  v76 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v76 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v78 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v79[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v76 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v76 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v77 = 0;
  v87[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  return sub_1900B90(v87);
}

// ----------------------------------------------------------------------------
// Function: glotv3::Glotv3Logger::WriteLog  (binary VA: 0x1346860)
// Original: glotv3::Glotv3Logger::WriteLog
// ----------------------------------------------------------------------------
int glotv3::Glotv3Logger::WriteLog(int *a1, int a2)
{
  unsigned int v2;
  int v3;
  int i;
  int v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  void *v12;
  int result;
  void *v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17[3];
  typedef uint32_t _g4_t_v18[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v17)) > _g4_s2 ? (32u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v18)) > _g4_s3 ? (44u + sizeof(_g4_t_v18)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);

  v15 = *a1;
  v16 = -991146299 * ((a1[1] - *a1) >> 2);
  if ( v16 != 0 )
  {
    if ( a1[9] < a1[10] && (a1[13] & 2) != 0 )
      std::terminate();
    v17[0] = (int)(uintptr_t)(&dword_213B814);
    v2 = *(uint32_t *)(a1[12] - 12);
    if ( v16 != 0 )
    {
      v3 = 0;
      for ( i = 0; i != v16; ++i )
      {
        v5 = v15 + v3;
        v6 = *(uint32_t *)(*(uint32_t *)(v15 + v3 + 4) - 12) + v2;
        if ( *(uint32_t *)(v15 + v3) == -2 && v6 < *(uint32_t *)(v5 + 12) )
          v6 = *(uint32_t *)(v5 + 12);
        v3 += 52;
        v2 = *(uint32_t *)(*(uint32_t *)(v5 + 8) - 12) + v6;
      }
    }
    sub_1939B80(v17, v2);
    g4_std::string::append_str(v17, a1 + 12);
    v7 = *a1;
    if ( -991146299 * ((a1[1] - *a1) >> 2) != 0 )
    {
      v8 = 0;
      do
      {
        v9 = v7 + 52 * v8;
        g4_std::string::append_str(v17, v9 + 4);
        if ( *(uint32_t *)v9 == -2 )
        {
          if ( (*(uint8_t *)(v9 + 48) & 8) == 0 )
            __assert2(
              "../../../../../lib/glitch/include/boost/format/format_implementation.hpp",
              234,
              "boost::basic_format<Ch, Tr, Alloc>::string_type boost::basic_format<Ch, Tr, Alloc>::str() const [with Ch ="
              " char, Tr = std::char_traits<char>, Alloc = std::allocator<char>, boost::basic_format<Ch, Tr, Alloc>::stri"
              "ng_type = std::basic_string<char>]",
              "item.pad_scheme_ & format_item_t::tabulation");
          v10 = *(uint32_t *)(v9 + 12);
          v11 = *(uint32_t *)(v17[0] - 12);
          if ( v10 > v11 )
            g4_std_compat::string_reserve((int)(uintptr_t)(v17), v10 - v11, *(uint8_t *)(v9 + 20));
        }
        g4_std::string::append_str(v17, v9 + 8);
        ++v8;
        v7 = *a1;
      }
      while ( v8 < -991146299 * ((a1[1] - *a1) >> 2) );
    }
    *((uint8_t *)a1 + 44) = 1;
    g4_std::string::construct_copy(v18, v17);
    v12 = (void *)(v17[0] - 12);
    if ( (uint32_t *)(v17[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v17[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
  }
  else
  {
    g4_std::string::construct_copy(v18, a1 + 12);
  }
  glotv3::Glotv3Logger::WriteLog(v18);
  result = v18[0];
  v14 = (void *)(v18[0] - 12);
  if ( (uint32_t *)(v18[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v14)), (int)0);
  }
  return result;
}


