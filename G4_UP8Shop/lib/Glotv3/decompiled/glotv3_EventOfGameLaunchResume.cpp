#include "Core/Utils/DecompTypes.h"
#include "glotv3_EventOfGameLaunchResume.h"

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfGameLaunchResume::Destroy  (binary VA: 0x1346f40)
// Original: glotv3::EventOfGameLaunchResume::~EventOfGameLaunchResume
// ----------------------------------------------------------------------------
void glotv3::EventOfGameLaunchResume::Destroy(glotv3::EventOfGameLaunchResume::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20939E0);
  glotv3::Event::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfGameLaunchResume::Destroy_ea1347620  (binary VA: 0x1347620)
// Original: glotv3::EventOfGameLaunchResume::~EventOfGameLaunchResume
// ----------------------------------------------------------------------------
void glotv3::EventOfGameLaunchResume::Destroy_ea1347620(glotv3::EventOfGameLaunchResume::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20939E0);
  glotv3::Event::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfGameLaunchResume::Construct  (binary VA: 0x1347c20)
// Original: glotv3::EventOfGameLaunchResume::EventOfGameLaunchResume
// ----------------------------------------------------------------------------
void glotv3::EventOfGameLaunchResume::Construct(glotv3::EventOfGameLaunchResume::Self *self, bool a2, bool a3, bool a4, double a5, void *a6)
{
  uint32_t *v6;
  void *v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  glotv3::EventValue::Self *v14;
  int v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  glotv3::EventValue::Self *v19;
  int v20;
  int v21;
  uint32_t *v22;
  uint32_t *v23;
  int v24;
  int v25;
  uint32_t *v26;
  uint32_t *v27;
  void *v28;
  uint32_t *v29;
  uint32_t *v30;
  void *UTCAsSeconds;
  int v32;
  int v33;
  uint32_t *v34;
  uint32_t *v35;
  int v36;
  int v37;
  uint32_t *v38;
  uint32_t *v39;
  typedef glotv3::EventValue::Self *_g4_t_v40;
  typedef glotv3::EventValue::Self *_g4_t_v41;
  typedef void *_g4_t_v42[10];
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef void *_g4_t_v45[7];
  typedef uint32_t *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef double _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef uint32_t _g4_t_v59[7];
  typedef uint32_t *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef uint32_t _g4_t_v65[7];
  typedef uint32_t *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef void *_g4_t_v71[7];
  typedef uint32_t *_g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef uint32_t _g4_t_v77[7];
  typedef uint32_t *_g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef void *_g4_t_v83[7];
  typedef uint32_t *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef void *_g4_t_v89[7];
  typedef uint32_t *_g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  enum : size_t {
    _g4_s0 = 544u,
    _g4_s1 = (0u + sizeof(_g4_t_v40)) > _g4_s0 ? (0u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v41)) > _g4_s1 ? (0u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v42)) > _g4_s2 ? (16u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v43)) > _g4_s3 ? (56u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v44)) > _g4_s4 ? (60u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v45)) > _g4_s5 ? (64u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (92u + sizeof(_g4_t_v46)) > _g4_s6 ? (92u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v47)) > _g4_s7 ? (96u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (100u + sizeof(_g4_t_v48)) > _g4_s8 ? (100u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (104u + sizeof(_g4_t_v49)) > _g4_s9 ? (104u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (108u + sizeof(_g4_t_v50)) > _g4_s10 ? (108u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v51)) > _g4_s11 ? (112u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (120u + sizeof(_g4_t_v52)) > _g4_s12 ? (120u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (136u + sizeof(_g4_t_v53)) > _g4_s13 ? (136u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (140u + sizeof(_g4_t_v54)) > _g4_s14 ? (140u + sizeof(_g4_t_v54)) : _g4_s14,
    _g4_s16 = (144u + sizeof(_g4_t_v55)) > _g4_s15 ? (144u + sizeof(_g4_t_v55)) : _g4_s15,
    _g4_s17 = (148u + sizeof(_g4_t_v56)) > _g4_s16 ? (148u + sizeof(_g4_t_v56)) : _g4_s16,
    _g4_s18 = (152u + sizeof(_g4_t_v57)) > _g4_s17 ? (152u + sizeof(_g4_t_v57)) : _g4_s17,
    _g4_s19 = (156u + sizeof(_g4_t_v58)) > _g4_s18 ? (156u + sizeof(_g4_t_v58)) : _g4_s18,
    _g4_s20 = (160u + sizeof(_g4_t_v59)) > _g4_s19 ? (160u + sizeof(_g4_t_v59)) : _g4_s19,
    _g4_s21 = (188u + sizeof(_g4_t_v60)) > _g4_s20 ? (188u + sizeof(_g4_t_v60)) : _g4_s20,
    _g4_s22 = (192u + sizeof(_g4_t_v61)) > _g4_s21 ? (192u + sizeof(_g4_t_v61)) : _g4_s21,
    _g4_s23 = (196u + sizeof(_g4_t_v62)) > _g4_s22 ? (196u + sizeof(_g4_t_v62)) : _g4_s22,
    _g4_s24 = (200u + sizeof(_g4_t_v63)) > _g4_s23 ? (200u + sizeof(_g4_t_v63)) : _g4_s23,
    _g4_s25 = (204u + sizeof(_g4_t_v64)) > _g4_s24 ? (204u + sizeof(_g4_t_v64)) : _g4_s24,
    _g4_s26 = (208u + sizeof(_g4_t_v65)) > _g4_s25 ? (208u + sizeof(_g4_t_v65)) : _g4_s25,
    _g4_s27 = (236u + sizeof(_g4_t_v66)) > _g4_s26 ? (236u + sizeof(_g4_t_v66)) : _g4_s26,
    _g4_s28 = (240u + sizeof(_g4_t_v67)) > _g4_s27 ? (240u + sizeof(_g4_t_v67)) : _g4_s27,
    _g4_s29 = (244u + sizeof(_g4_t_v68)) > _g4_s28 ? (244u + sizeof(_g4_t_v68)) : _g4_s28,
    _g4_s30 = (248u + sizeof(_g4_t_v69)) > _g4_s29 ? (248u + sizeof(_g4_t_v69)) : _g4_s29,
    _g4_s31 = (252u + sizeof(_g4_t_v70)) > _g4_s30 ? (252u + sizeof(_g4_t_v70)) : _g4_s30,
    _g4_s32 = (256u + sizeof(_g4_t_v71)) > _g4_s31 ? (256u + sizeof(_g4_t_v71)) : _g4_s31,
    _g4_s33 = (284u + sizeof(_g4_t_v72)) > _g4_s32 ? (284u + sizeof(_g4_t_v72)) : _g4_s32,
    _g4_s34 = (288u + sizeof(_g4_t_v73)) > _g4_s33 ? (288u + sizeof(_g4_t_v73)) : _g4_s33,
    _g4_s35 = (292u + sizeof(_g4_t_v74)) > _g4_s34 ? (292u + sizeof(_g4_t_v74)) : _g4_s34,
    _g4_s36 = (296u + sizeof(_g4_t_v75)) > _g4_s35 ? (296u + sizeof(_g4_t_v75)) : _g4_s35,
    _g4_s37 = (300u + sizeof(_g4_t_v76)) > _g4_s36 ? (300u + sizeof(_g4_t_v76)) : _g4_s36,
    _g4_s38 = (304u + sizeof(_g4_t_v77)) > _g4_s37 ? (304u + sizeof(_g4_t_v77)) : _g4_s37,
    _g4_s39 = (332u + sizeof(_g4_t_v78)) > _g4_s38 ? (332u + sizeof(_g4_t_v78)) : _g4_s38,
    _g4_s40 = (336u + sizeof(_g4_t_v79)) > _g4_s39 ? (336u + sizeof(_g4_t_v79)) : _g4_s39,
    _g4_s41 = (340u + sizeof(_g4_t_v80)) > _g4_s40 ? (340u + sizeof(_g4_t_v80)) : _g4_s40,
    _g4_s42 = (344u + sizeof(_g4_t_v81)) > _g4_s41 ? (344u + sizeof(_g4_t_v81)) : _g4_s41,
    _g4_s43 = (348u + sizeof(_g4_t_v82)) > _g4_s42 ? (348u + sizeof(_g4_t_v82)) : _g4_s42,
    _g4_s44 = (352u + sizeof(_g4_t_v83)) > _g4_s43 ? (352u + sizeof(_g4_t_v83)) : _g4_s43,
    _g4_s45 = (380u + sizeof(_g4_t_v84)) > _g4_s44 ? (380u + sizeof(_g4_t_v84)) : _g4_s44,
    _g4_s46 = (384u + sizeof(_g4_t_v85)) > _g4_s45 ? (384u + sizeof(_g4_t_v85)) : _g4_s45,
    _g4_s47 = (388u + sizeof(_g4_t_v86)) > _g4_s46 ? (388u + sizeof(_g4_t_v86)) : _g4_s46,
    _g4_s48 = (392u + sizeof(_g4_t_v87)) > _g4_s47 ? (392u + sizeof(_g4_t_v87)) : _g4_s47,
    _g4_s49 = (396u + sizeof(_g4_t_v88)) > _g4_s48 ? (396u + sizeof(_g4_t_v88)) : _g4_s48,
    _g4_s50 = (400u + sizeof(_g4_t_v89)) > _g4_s49 ? (400u + sizeof(_g4_t_v89)) : _g4_s49,
    _g4_s51 = (428u + sizeof(_g4_t_v90)) > _g4_s50 ? (428u + sizeof(_g4_t_v90)) : _g4_s50,
    _g4_s52 = (432u + sizeof(_g4_t_v91)) > _g4_s51 ? (432u + sizeof(_g4_t_v91)) : _g4_s51,
    _g4_s53 = (436u + sizeof(_g4_t_v92)) > _g4_s52 ? (436u + sizeof(_g4_t_v92)) : _g4_s52,
    _g4_s54 = (440u + sizeof(_g4_t_v93)) > _g4_s53 ? (440u + sizeof(_g4_t_v93)) : _g4_s53,
    _g4_s55 = (444u + sizeof(_g4_t_v94)) > _g4_s54 ? (444u + sizeof(_g4_t_v94)) : _g4_s54
  };
  alignas(16) uint8_t _g4_sf[_g4_s55];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 0u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 56u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 60u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 64u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 92u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 96u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 100u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 104u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 108u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 112u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 120u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 136u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 140u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 144u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 148u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 152u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 156u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 160u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 188u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 192u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 196u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 200u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 204u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 208u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 236u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 240u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 244u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 248u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 252u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 256u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 284u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 288u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 292u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 296u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 300u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 304u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 332u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 336u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 340u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 344u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 348u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 352u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 380u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 384u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 388u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 392u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 396u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 400u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 428u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 432u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 436u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 440u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 444u);

  glotv3::Event::Construct(self, false);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20939E0);
  glotv3::Event::setIsAutomatic(self, true);
  glotv3::Event::setEventType(self, &reinterpret_cast<G4Elf32Sym *>(stru_CA84)->st_info);
  v42[2] = (void *)(uintptr_t)2;
  v42[6] = nullptr;
  v42[9] = nullptr;
  v42[8] = (void *)(uintptr_t)2048;
  v43 = opNew(1u);
  v44 = v43;
  v6 = (uint32_t *)(malloc(0x80Cu));
  *v6 = 2048;
  v6[2] = 0;
  v6[1] = 0;
  v42[7] = v6;
  v42[0] = (void *)(uintptr_t)0x19F82u;
  glotv3::Event::addKeyPair(
    (int)(uintptr_t)(self),
    &glotv3::EventOfGameLaunchResume::k_KeyLaunchType,
    (glotv3::EventValue::Self *)v42);
  v7 = nullptr;
  glotv3::EventValue::Destroy(v42);
  v45[2] = (void *)(uintptr_t)3;
  if ( !a2 )
    v7 = a6;
  v45[6] = nullptr;
  v46 = nullptr;
  v47 = 2048;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v49 = opNew(1u);
  v50 = v49;
  v40 = (glotv3::EventValue::Self *)v47;
  v8 = (uint32_t *)(malloc(v47 + 12));
  v9 = v46;
  *v8 = (uint32_t)(uintptr_t)(v40);
  v8[2] = (uint32_t)(uintptr_t)(v9);
  v8[1] = 0;
  v46 = v8;
  v45[0] = v7;
  glotv3::Event::addKeyPair(
    (int)(uintptr_t)(self),
    &glotv3::EventOfGameLaunchResume::k_KeyTimeBetweenSessions,
    (glotv3::EventValue::Self *)v45);
  glotv3::EventValue::Destroy(v45);
  if ( a4 )
  {
    v59[2] = 3;
    v59[6] = 0;
    v60 = nullptr;
    v61 = 2048;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v20 = opNew(1u);
    v21 = v61;
    v63 = v20;
    v64 = v20;
    v22 = (uint32_t *)(malloc(v61 + 12));
    v23 = v60;
    *v22 = v21;
    v22[1] = 0;
    v14 = (glotv3::EventValue::Self *)v59;
    v22[2] = (uint32_t)(uintptr_t)(v23);
    v60 = v22;
    v59[0] = 0;
  }
  else
  {
    v52 = 1;
    v53 = 0;
    v54 = nullptr;
    v55 = 2048;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v10 = opNew(1u);
    v11 = v55;
    v57 = v10;
    v58 = v10;
    v12 = (uint32_t *)(malloc(v55 + 12));
    v13 = v54;
    *v12 = v11;
    v12[1] = 0;
    v14 = (glotv3::EventValue::Self *)&v51;
    v12[2] = (uint32_t)(uintptr_t)(v13);
    v54 = v12;
    v51 = a5;
  }
  glotv3::Event::addKeyPair((int)(uintptr_t)(self), &glotv3::EventOfGameLaunchResume::k_KeyTimeSpent, v14);
  glotv3::EventValue::Destroy((void **)v14);
  if ( a2 )
  {
    if ( !a3 )
    {
LABEL_10:
      v77[2] = 2;
      v77[6] = 0;
      v78 = nullptr;
      v79 = 2048;
      v80 = 0;
      v81 = 0;
      v82 = 0;
      v24 = opNew(1u);
      v25 = v79;
      v81 = v24;
      v82 = v24;
      v26 = (uint32_t *)(malloc(v79 + 12));
      v27 = v78;
      *v26 = v25;
      v26[1] = 0;
      v19 = (glotv3::EventValue::Self *)v77;
      v26[2] = (uint32_t)(uintptr_t)(v27);
      v78 = v26;
      v77[0] = 100002;
      goto LABEL_11;
    }
  }
  else if ( !a3 )
  {
    v65[2] = 2;
    v65[6] = 0;
    v66 = nullptr;
    v67 = 2048;
    v68 = 0;
    v69 = 0;
    v70 = 0;
    v15 = opNew(1u);
    v16 = v67;
    v69 = v15;
    v70 = v15;
    v17 = (uint32_t *)(malloc(v67 + 12));
    v18 = v66;
    *v17 = v16;
    v17[1] = 0;
    v19 = (glotv3::EventValue::Self *)v65;
    v17[2] = (uint32_t)(uintptr_t)(v18);
    v66 = v17;
    v65[0] = 100003;
LABEL_11:
    glotv3::Event::addKeyPair((int)(uintptr_t)(self), &glotv3::EventOfGameLaunchResume::k_KeyLaunchType, v19);
    glotv3::EventValue::Destroy((void **)v19);
    goto LABEL_12;
  }
  v71[2] = (void *)(uintptr_t)2;
  v71[6] = nullptr;
  v72 = nullptr;
  v73 = 2048;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v36 = opNew(1u);
  v37 = v73;
  v75 = v36;
  v76 = v36;
  v38 = (uint32_t *)(malloc(v73 + 12));
  v39 = v72;
  *v38 = v37;
  v38[2] = (uint32_t)(uintptr_t)(v39);
  v38[1] = 0;
  v72 = v38;
  v71[0] = &stru_186A4;
  glotv3::Event::addKeyPair(
    (int)(uintptr_t)(self),
    &glotv3::EventOfGameLaunchResume::k_KeyLaunchType,
    (glotv3::EventValue::Self *)v71);
  glotv3::EventValue::Destroy(v71);
  if ( a2 )
    goto LABEL_10;
LABEL_12:
  v28 = (void *)(uintptr_t)0x186A6u;
  if ( a4 )
    v28 = (void *)(100006 - !a2);
  v85 = 2048;
  v83[2] = (void *)(uintptr_t)2;
  v83[6] = nullptr;
  v84 = nullptr;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v87 = opNew(1u);
  v88 = v87;
  v41 = (glotv3::EventValue::Self *)v85;
  v29 = (uint32_t *)(malloc(v85 + 12));
  v30 = v84;
  *v29 = (uint32_t)(uintptr_t)(v41);
  v29[2] = (uint32_t)(uintptr_t)(v30);
  v29[1] = 0;
  v84 = v29;
  v83[0] = v28;
  glotv3::Event::addKeyPair(
    (int)(uintptr_t)(self),
    &glotv3::EventOfGameLaunchResume::k_KeyCrashDetection,
    (glotv3::EventValue::Self *)v83);
  glotv3::EventValue::Destroy(v83);
  UTCAsSeconds = (void *)glotv3::Utils::GetUTCAsSeconds();
  v91 = 2048;
  v89[2] = (void *)(uintptr_t)3;
  v89[6] = nullptr;
  v90 = nullptr;
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v32 = opNew(1u);
  v33 = v91;
  v93 = v32;
  v94 = v32;
  v34 = (uint32_t *)(malloc(v91 + 12));
  v35 = v90;
  *v34 = v33;
  v34[2] = (uint32_t)(uintptr_t)(v35);
  v34[1] = 0;
  v90 = v34;
  v89[0] = UTCAsSeconds;
  glotv3::Event::addKeyPair(
    (int)(uintptr_t)(self),
    &glotv3::Event::keyPreviousTimeOnDevice,
    (glotv3::EventValue::Self *)v89);
  glotv3::EventValue::Destroy(v89);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfGameLaunchResume::ResetDetectedLaunchAfterRestartDevice  (binary VA: 0x1348380)
// Original: glotv3::EventOfGameLaunchResume::ResetDetectedLaunchAfterRestartDevice
// ----------------------------------------------------------------------------
void glotv3::EventOfGameLaunchResume::ResetDetectedLaunchAfterRestartDevice(glotv3::EventOfGameLaunchResume::Self *self, bool a2)
{
  uint32_t *v2;
  typedef void *_g4_t_v3[10];
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v4)) > _g4_s1 ? (40u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v5)) > _g4_s2 ? (44u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 40u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 44u);

  if ( a2 )
  {
    v3[2] = (void *)(uintptr_t)2;
    v3[6] = nullptr;
    v3[9] = nullptr;
    v3[8] = (void *)(uintptr_t)2048;
    v4 = opNew(1u);
    v5 = v4;
    v2 = (uint32_t *)(malloc(0x80Cu));
    *v2 = 2048;
    v2[2] = 0;
    v2[1] = 0;
    v3[7] = v2;
    v3[0] = (void *)(uintptr_t)0x19F82u;
    glotv3::Event::addKeyPair(
      (int)(uintptr_t)(self),
      &glotv3::EventOfGameLaunchResume::k_KeyLaunchType,
      (glotv3::EventValue::Self *)v3);
    glotv3::EventValue::Destroy(v3);
  }
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfGameLaunchResume::SetChannelID  (binary VA: 0x1348460)
// Original: glotv3::EventOfGameLaunchResume::SetChannelID
// ----------------------------------------------------------------------------
void glotv3::EventOfGameLaunchResume::SetChannelID(glotv3::EventOfGameLaunchResume::Self *self, void *a2)
{
  uint32_t *v2;
  typedef void *_g4_t_v3[10];
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v4)) > _g4_s1 ? (40u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v5)) > _g4_s2 ? (44u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 40u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 44u);

  v3[2] = (void *)(uintptr_t)3;
  v3[6] = nullptr;
  v3[9] = nullptr;
  v3[8] = (void *)(uintptr_t)2048;
  v4 = opNew(1u);
  v5 = v4;
  v2 = (uint32_t *)(malloc(0x80Cu));
  *v2 = 2048;
  v2[2] = 0;
  v2[1] = 0;
  v3[7] = v2;
  v3[0] = a2;
  glotv3::Event::addKeyPair(
    (int)(uintptr_t)(self),
    &glotv3::EventOfGameLaunchResume::k_KeyChannelID,
    (glotv3::EventValue::Self *)v3);
  glotv3::EventValue::Destroy(v3);
}


