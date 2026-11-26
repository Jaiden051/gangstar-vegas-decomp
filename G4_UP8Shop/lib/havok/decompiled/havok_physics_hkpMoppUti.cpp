#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMoppUti.h"

// ----------------------------------------------------------------------------
// Function: hkpMoppUtility::buildCodeInternal  (binary VA: 0x1aeaf60)
// Original: hkpMoppUtility::buildCodeInternal
// ----------------------------------------------------------------------------
hkpMoppMediator::Self * hkpMoppUtility::buildCodeInternal(hkpMoppMediator::Self *a1, int a2, hkpMoppCompilerInput::Self *a3, int a4)
{
  hkpMoppCompilerInput::Self *v4;
  bool v5;
  int v6;
  uint32_t *address;
  char *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v19;
  int savedregs;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef char *_g4_t_v28;
  typedef char *_g4_t_v29;
  typedef hkpMoppMediator::Self *_g4_t_v30;
  typedef hkpMoppMediator::Self *_g4_t_v31;
  typedef hkpMoppMediator::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef float _g4_t_AbsoluteFitToleranceOfInternalNodes;
  typedef float _g4_t_AbsoluteFitToleranceOfTriangles;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int *_g4_t_v39;
  typedef hkpMoppCompiler::Self *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef hkpMoppMediator::Self **_g4_t_v92;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v21)) > _g4_s1 ? (16u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v22)) > _g4_s2 ? (20u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v23)) > _g4_s3 ? (24u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v24)) > _g4_s4 ? (28u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v25)) > _g4_s5 ? (32u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v26)) > _g4_s6 ? (32u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v27)) > _g4_s7 ? (36u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v28)) > _g4_s8 ? (40u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v29)) > _g4_s9 ? (40u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v30)) > _g4_s10 ? (44u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v31)) > _g4_s11 ? (44u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v32)) > _g4_s12 ? (44u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v33)) > _g4_s13 ? (48u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_AbsoluteFitToleranceOfInternalNodes)) > _g4_s14 ? (48u + sizeof(_g4_t_AbsoluteFitToleranceOfInternalNodes)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_AbsoluteFitToleranceOfTriangles)) > _g4_s15 ? (48u + sizeof(_g4_t_AbsoluteFitToleranceOfTriangles)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v36)) > _g4_s16 ? (48u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v37)) > _g4_s17 ? (48u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v38)) > _g4_s18 ? (52u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v39)) > _g4_s19 ? (52u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v40)) > _g4_s20 ? (56u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v41)) > _g4_s21 ? (60u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v42)) > _g4_s22 ? (60u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v43)) > _g4_s23 ? (60u + sizeof(_g4_t_v43)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v44)) > _g4_s24 ? (60u + sizeof(_g4_t_v44)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v45)) > _g4_s25 ? (64u + sizeof(_g4_t_v45)) : _g4_s25,
    _g4_s27 = (68u + sizeof(_g4_t_v46)) > _g4_s26 ? (68u + sizeof(_g4_t_v46)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v47)) > _g4_s27 ? (72u + sizeof(_g4_t_v47)) : _g4_s27,
    _g4_s29 = (76u + sizeof(_g4_t_v48)) > _g4_s28 ? (76u + sizeof(_g4_t_v48)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v49)) > _g4_s29 ? (80u + sizeof(_g4_t_v49)) : _g4_s29,
    _g4_s31 = (84u + sizeof(_g4_t_v50)) > _g4_s30 ? (84u + sizeof(_g4_t_v50)) : _g4_s30,
    _g4_s32 = (88u + sizeof(_g4_t_v51)) > _g4_s31 ? (88u + sizeof(_g4_t_v51)) : _g4_s31,
    _g4_s33 = (92u + sizeof(_g4_t_v52)) > _g4_s32 ? (92u + sizeof(_g4_t_v52)) : _g4_s32,
    _g4_s34 = (96u + sizeof(_g4_t_v53)) > _g4_s33 ? (96u + sizeof(_g4_t_v53)) : _g4_s33,
    _g4_s35 = (100u + sizeof(_g4_t_v54)) > _g4_s34 ? (100u + sizeof(_g4_t_v54)) : _g4_s34,
    _g4_s36 = (104u + sizeof(_g4_t_v55)) > _g4_s35 ? (104u + sizeof(_g4_t_v55)) : _g4_s35,
    _g4_s37 = (108u + sizeof(_g4_t_v56)) > _g4_s36 ? (108u + sizeof(_g4_t_v56)) : _g4_s36,
    _g4_s38 = (112u + sizeof(_g4_t_v57)) > _g4_s37 ? (112u + sizeof(_g4_t_v57)) : _g4_s37,
    _g4_s39 = (116u + sizeof(_g4_t_v58)) > _g4_s38 ? (116u + sizeof(_g4_t_v58)) : _g4_s38,
    _g4_s40 = (120u + sizeof(_g4_t_v59)) > _g4_s39 ? (120u + sizeof(_g4_t_v59)) : _g4_s39,
    _g4_s41 = (124u + sizeof(_g4_t_v60)) > _g4_s40 ? (124u + sizeof(_g4_t_v60)) : _g4_s40,
    _g4_s42 = (128u + sizeof(_g4_t_v61)) > _g4_s41 ? (128u + sizeof(_g4_t_v61)) : _g4_s41,
    _g4_s43 = (132u + sizeof(_g4_t_v62)) > _g4_s42 ? (132u + sizeof(_g4_t_v62)) : _g4_s42,
    _g4_s44 = (136u + sizeof(_g4_t_v63)) > _g4_s43 ? (136u + sizeof(_g4_t_v63)) : _g4_s43,
    _g4_s45 = (140u + sizeof(_g4_t_v64)) > _g4_s44 ? (140u + sizeof(_g4_t_v64)) : _g4_s44,
    _g4_s46 = (144u + sizeof(_g4_t_v65)) > _g4_s45 ? (144u + sizeof(_g4_t_v65)) : _g4_s45,
    _g4_s47 = (148u + sizeof(_g4_t_v66)) > _g4_s46 ? (148u + sizeof(_g4_t_v66)) : _g4_s46,
    _g4_s48 = (152u + sizeof(_g4_t_v67)) > _g4_s47 ? (152u + sizeof(_g4_t_v67)) : _g4_s47,
    _g4_s49 = (156u + sizeof(_g4_t_v68)) > _g4_s48 ? (156u + sizeof(_g4_t_v68)) : _g4_s48,
    _g4_s50 = (160u + sizeof(_g4_t_v69)) > _g4_s49 ? (160u + sizeof(_g4_t_v69)) : _g4_s49,
    _g4_s51 = (164u + sizeof(_g4_t_v70)) > _g4_s50 ? (164u + sizeof(_g4_t_v70)) : _g4_s50,
    _g4_s52 = (168u + sizeof(_g4_t_v71)) > _g4_s51 ? (168u + sizeof(_g4_t_v71)) : _g4_s51,
    _g4_s53 = (172u + sizeof(_g4_t_v72)) > _g4_s52 ? (172u + sizeof(_g4_t_v72)) : _g4_s52,
    _g4_s54 = (176u + sizeof(_g4_t_v73)) > _g4_s53 ? (176u + sizeof(_g4_t_v73)) : _g4_s53,
    _g4_s55 = (180u + sizeof(_g4_t_v74)) > _g4_s54 ? (180u + sizeof(_g4_t_v74)) : _g4_s54,
    _g4_s56 = (184u + sizeof(_g4_t_v75)) > _g4_s55 ? (184u + sizeof(_g4_t_v75)) : _g4_s55,
    _g4_s57 = (188u + sizeof(_g4_t_v76)) > _g4_s56 ? (188u + sizeof(_g4_t_v76)) : _g4_s56,
    _g4_s58 = (192u + sizeof(_g4_t_v77)) > _g4_s57 ? (192u + sizeof(_g4_t_v77)) : _g4_s57,
    _g4_s59 = (196u + sizeof(_g4_t_v78)) > _g4_s58 ? (196u + sizeof(_g4_t_v78)) : _g4_s58,
    _g4_s60 = (200u + sizeof(_g4_t_v79)) > _g4_s59 ? (200u + sizeof(_g4_t_v79)) : _g4_s59,
    _g4_s61 = (204u + sizeof(_g4_t_v80)) > _g4_s60 ? (204u + sizeof(_g4_t_v80)) : _g4_s60,
    _g4_s62 = (208u + sizeof(_g4_t_v81)) > _g4_s61 ? (208u + sizeof(_g4_t_v81)) : _g4_s61,
    _g4_s63 = (212u + sizeof(_g4_t_v82)) > _g4_s62 ? (212u + sizeof(_g4_t_v82)) : _g4_s62,
    _g4_s64 = (216u + sizeof(_g4_t_v83)) > _g4_s63 ? (216u + sizeof(_g4_t_v83)) : _g4_s63,
    _g4_s65 = (220u + sizeof(_g4_t_v84)) > _g4_s64 ? (220u + sizeof(_g4_t_v84)) : _g4_s64,
    _g4_s66 = (224u + sizeof(_g4_t_v85)) > _g4_s65 ? (224u + sizeof(_g4_t_v85)) : _g4_s65,
    _g4_s67 = (228u + sizeof(_g4_t_v86)) > _g4_s66 ? (228u + sizeof(_g4_t_v86)) : _g4_s66,
    _g4_s68 = (232u + sizeof(_g4_t_v87)) > _g4_s67 ? (232u + sizeof(_g4_t_v87)) : _g4_s67,
    _g4_s69 = (236u + sizeof(_g4_t_v88)) > _g4_s68 ? (236u + sizeof(_g4_t_v88)) : _g4_s68,
    _g4_s70 = (240u + sizeof(_g4_t_v89)) > _g4_s69 ? (240u + sizeof(_g4_t_v89)) : _g4_s69,
    _g4_s71 = (244u + sizeof(_g4_t_v90)) > _g4_s70 ? (244u + sizeof(_g4_t_v90)) : _g4_s70,
    _g4_s72 = (248u + sizeof(_g4_t_v91)) > _g4_s71 ? (248u + sizeof(_g4_t_v91)) : _g4_s71,
    _g4_s73 = (252u + sizeof(_g4_t_v92)) > _g4_s72 ? (252u + sizeof(_g4_t_v92)) : _g4_s72
  };
  alignas(16) uint8_t _g4_sf[_g4_s73];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_AbsoluteFitToleranceOfInternalNodes &AbsoluteFitToleranceOfInternalNodes = *reinterpret_cast<_g4_t_AbsoluteFitToleranceOfInternalNodes *>(_g4_sf + 48u);
  _g4_t_AbsoluteFitToleranceOfTriangles &AbsoluteFitToleranceOfTriangles = *reinterpret_cast<_g4_t_AbsoluteFitToleranceOfTriangles *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 60u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 60u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 60u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 60u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 64u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 68u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 72u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 76u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 80u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 84u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 88u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 92u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 96u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 100u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 104u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 108u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 112u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 116u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 120u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 124u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 128u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 132u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 136u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 140u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 144u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 148u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 152u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 156u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 160u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 164u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 168u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 172u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 176u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 180u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 184u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 188u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 192u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 196u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 200u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 204u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 208u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 212u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 216u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 220u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 224u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 228u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 232u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 236u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 240u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 244u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 248u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 252u);

  v92 = &a1;
  v4 = a3;
  v30 = a1;
  v38 = a4;
  hkpMoppCompiler::Construct(&v62, 0);
  hkpMoppCostFunction::hkpMoppSplitCostParams::Construct(&v50);
  v5 = *((uint8_t *)v4 + 28) == 0;
  v50 = 1065353216;
  if ( v5 || *((uint8_t *)v4 + 30) != 0 )
    v54 = 0;
  hkpMoppCompiler::setCostParams((hkpMoppCompiler::Self *)&v62, (const hkpMoppCostFunction::hkpMoppSplitCostParams::Self *)&v50);
  LOBYTE(v41) = 0;
  if ( *((uint8_t *)v4 + 30) == 0 )
    LOBYTE(v41) = *((uint8_t *)v4 + 31) != 0;
  v50 = 1056964608;
  v51 = 0.2f;
  v52 = 1.0;
  v58 = 5;
  v54 = 1045220557;
  v55 = 1045220557;
  v56 = 1028443341;
  v57 = 0;
  LOBYTE(v59) = 1;
  *(float *)&v33 = hkpMoppCompilerInput::getRelativeFitToleranceOfInternalNodes(v4);
  v50 = v33;
  AbsoluteFitToleranceOfInternalNodes = hkpMoppCompilerInput::getAbsoluteFitToleranceOfInternalNodes(v4);
  v51 = AbsoluteFitToleranceOfInternalNodes;
  AbsoluteFitToleranceOfTriangles = hkpMoppCompilerInput::getAbsoluteFitToleranceOfTriangles(v4);
  v52 = AbsoluteFitToleranceOfTriangles;
  hkpMoppCompilerInput::getAbsoluteFitToleranceOfAxisAlignedTriangles((hkpMoppCompilerInput::Self *)&v46, v4);
  v54 = v46;
  v55 = v47;
  v56 = v48;
  v57 = v49;
  LOBYTE(v59) = v41;
  hkpMoppCompiler::setAssemblerParams(&v62, &v50);
  hkpMoppSplitter::hkpMoppSplitParams::Construct(&v50, 0);
  v6 = 50;
  if ( *((uint8_t *)v4 + 29) == 0 )
  {
    v51 = 0.0;
    LOBYTE(v6) = 0;
  }
  v52 = *(float *)&v6;
  v53 = 5;
  LOBYTE(v55) = v41;
  hkpMoppCompiler::setSplitParams((hkpMoppCompiler::Self *)&v62, (const hkpMoppSplitter::hkpMoppSplitParams::Self *)&v50);
  v36 = hkpMoppCompiler::calculateRequiredBufferSize((hkpMoppCompiler::Self *)&v62, v30);
  address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v8 = (char *)(*(int (**)(uint32_t, int, int, int, int, int, int, int, uint32_t *, char *, hkpMoppMediator::Self *, int, int, int *, int, int, int, int, int, int, int, float, float, int, int, int, int, int, int, int, int, int, int, int *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(**(uint32_t **)(*address + 40) + 8))(
                 *(uint32_t *)(*address + 40),
                 v36,
                 v20,
                 v21,
                 v22,
                 v23,
                 v24,
                 v25,
                 address,
                 v28,
                 v30,
                 v36,
                 v38,
                 &v62,
                 v41,
                 v45,
                 v46,
                 v47,
                 v48,
                 v49,
                 v50,
                 COERCE_FLOAT(LODWORD(v51)),
                 COERCE_FLOAT(LODWORD(v52)),
                 v53,
                 v54,
                 v55,
                 v56,
                 v57,
                 v58,
                 v59,
                 v60,
                 v61,
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
                 v73,
                 v74,
                 v75,
                 v76,
                 v77,
                 v78,
                 v79,
                 v80,
                 v81,
                 v82,
                 v83,
                 v84,
                 v85,
                 v86,
                 v87,
                 v88,
                 v89,
                 v90,
                 v91);
  v5 = *((uint8_t *)v4 + 30) == 0;
  v29 = v8;
  v50 = 512;
  v51 = 0.0;
  v52 = 0.0;
  v53 = 0x80000000;
  v54 = 0;
  v55 = 0;
  v56 = 0x80000000;
  v57 = 0;
  v58 = 20;
  if ( !v5 )
    v63 = &v50;
  v32 = (hkpMoppMediator::Self *)hkpMoppCompiler::compile(v40, v31, v8, v37);
  if ( v39 != nullptr )
  {
    v9 = LODWORD(v52);
    v10 = v39[1];
    v11 = v10 + LODWORD(v52);
    v12 = v39[2] & 0x3FFFFFFF;
    v13 = v51;
    if ( v10 + LODWORD(v52) > v12 )
    {
      v19 = 2 * v12;
      v26 = v39[1];
      savedregs = 8;
      v92 = (hkpMoppMediator::Self **)&v45;
      if ( v19 < v11 )
        v19 = v10 + LODWORD(v52);
      v44 = v10 + LODWORD(v52);
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v92,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        v39,
        v19,
        savedregs);
      v10 = v26;
      v11 = v44;
    }
    v42 = v11;
    hkMemUtil::memMove((hkMemUtil::Self *)(*v39 + 8 * v9), (char *)*v39, 8 * v10);
    v14 = v42;
    v15 = 0;
    if ( v9 > 0 )
    {
      v43 = v9;
      v16 = *v39;
      do
      {
        v17 = *(uint32_t *)(LODWORD(v13) + 8 * v15);
        *(uint32_t *)(v16 + 8 * v15 + 4) = *(uint32_t *)(LODWORD(v13) + 8 * v15 + 4);
        *(uint32_t *)(v16 + 8 * v15++) = v17;
      }
      while ( v15 != v43 );
    }
    v39[1] = v14;
  }
  (*(void (**)(uint32_t, char *, int))(**(uint32_t **)(*(uint32_t *)v27 + 40) + 12))(
    *(uint32_t *)(*(uint32_t *)v27 + 40),
    v29,
    v37);
  v55 = 0;
  if ( v56 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v54,
      8 * v56);
  v54 = 0;
  v56 = 0x80000000;
  v52 = 0.0;
  if ( v53 >= 0 )
    (*(void (**)(uint32_t *, float, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      COERCE_FLOAT(LODWORD(v51)),
      8 * v53);
  v51 = 0.0;
  v53 = 0x80000000;
  hkpMoppCompiler::Destroy(v40);
  return v32;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppUtility::buildCode  (binary VA: 0x1aeb450)
// Original: hkpMoppUtility::buildCode
// ----------------------------------------------------------------------------
hkpMoppMediator::Self * hkpMoppUtility::buildCode(hkpShapeContainer::Self *a1, hkpMoppCompilerInput::Self *a2, int a3)
{
  hkpMoppMediator::Self *result;
  typedef hkpMoppMediator::Self *_g4_t_v4;
  typedef uint8_t _g4_t_v5[56];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v5)) > _g4_s1 ? (20u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);

  if ( *((uint8_t *)a2 + 32) != 0 )
  {
    hkpMoppCachedShapeMediator::Construct((hkpMoppCachedShapeMediator::Self *)v5, a1);
    v4 = hkpMoppUtility::buildCodeInternal((hkpMoppMediator::Self *)v5, (int)(uintptr_t)(a1), a2, a3);
    hkpMoppCachedShapeMediator::Destroy((hkpMoppCachedShapeMediator::Self *)v5);
  }
  else
  {
    hkpMoppShapeMediator::Construct((hkpMoppShapeMediator::Self *)v5, a1);
    v4 = hkpMoppUtility::buildCodeInternal((hkpMoppMediator::Self *)v5, (int)(uintptr_t)(a1), a2, a3);
    hkpMoppShapeMediator::Destroy((hkpMoppShapeMediator::Self *)v5);
  }
  result = v4;
  if ( v4 != nullptr )
    *((uint8_t *)v4 + 44) = *((uint8_t *)a2 + 30) == 0;
  return result;
}


