#include "Core/Utils/DecompTypes.h"
#include "jsoncpp_internal.h"

// ----------------------------------------------------------------------------
// Function: sub_11825D0  (binary VA: 0x11825d0)
// Original: sub_11825D0
// ----------------------------------------------------------------------------
int sub_11825D0()
{
  sub_1900D70(&unk_2115980);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2115980, &unk_20D1280);
  dword_2115984 = 1056964608;
  dword_2115988 = 1056964608;
  dword_211598C = 1056964608;
  return 1056964608;
}

// ----------------------------------------------------------------------------
// Function: sub_118F780  (binary VA: 0x118f780)
// Original: sub_118F780
// ----------------------------------------------------------------------------
int sub_118F780(char *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int result;
  gameswf::Self *v6;
  gameswf::Self *v7;
  gameswf::Self *v8;
  gameswf::Self *v9;
  gameswf::Self *v10;
  gameswf::Self *v11;
  gameswf::Self *v12;
  gameswf::Self *v13;
  gameswf::Self *v14;
  gameswf::Self *v15;
  int v16;
  char *v17;
  int v18;
  int v19;
  int v20;
  int i;
  char *v22;
  gameswf::String::Self *v23;
  int v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v29;
  typedef unsigned int _g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef unsigned int _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef unsigned int _g4_t_v34;
  typedef unsigned int _g4_t_v35;
  typedef unsigned int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef int _g4_t_v40[3];
  typedef gameswf::Self *_g4_t_v41;
  typedef int16_t _g4_t_v42;
  typedef char _g4_t_v43;
  typedef char _g4_t_v44;
  typedef int _g4_t_v45[3];
  typedef gameswf::Self *_g4_t_v46;
  typedef int16_t _g4_t_v47;
  typedef char _g4_t_v48;
  typedef char _g4_t_v49;
  typedef int _g4_t_v50[3];
  typedef gameswf::Self *_g4_t_v51;
  typedef int16_t _g4_t_v52;
  typedef char _g4_t_v53;
  typedef char _g4_t_v54;
  typedef int _g4_t_v55[3];
  typedef gameswf::Self *_g4_t_v56;
  typedef int16_t _g4_t_v57;
  typedef char _g4_t_v58;
  typedef char _g4_t_v59;
  typedef int _g4_t_v60[3];
  typedef gameswf::Self *_g4_t_v61;
  typedef int16_t _g4_t_v62;
  typedef char _g4_t_v63;
  typedef char _g4_t_v64;
  typedef int _g4_t_v65[3];
  typedef gameswf::Self *_g4_t_v66;
  typedef int16_t _g4_t_v67;
  typedef char _g4_t_v68;
  typedef char _g4_t_v69;
  typedef int _g4_t_v70[3];
  typedef gameswf::Self *_g4_t_v71;
  typedef int16_t _g4_t_v72;
  typedef char _g4_t_v73;
  typedef char _g4_t_v74;
  typedef int _g4_t_v75[3];
  typedef gameswf::Self *_g4_t_v76;
  typedef int16_t _g4_t_v77;
  typedef char _g4_t_v78;
  typedef char _g4_t_v79;
  typedef int _g4_t_v80[3];
  typedef gameswf::Self *_g4_t_v81;
  typedef int16_t _g4_t_v82;
  typedef char _g4_t_v83;
  typedef char _g4_t_v84;
  typedef int _g4_t_v85[3];
  typedef gameswf::Self *_g4_t_v86;
  typedef int16_t _g4_t_v87;
  typedef char _g4_t_v88;
  typedef char _g4_t_v89;
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v29)) > _g4_s3 ? (20u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v30)) > _g4_s4 ? (32u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v31)) > _g4_s5 ? (36u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v32)) > _g4_s6 ? (40u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v33)) > _g4_s7 ? (44u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v34)) > _g4_s8 ? (48u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v35)) > _g4_s9 ? (52u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v36)) > _g4_s10 ? (56u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v37)) > _g4_s11 ? (60u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v38)) > _g4_s12 ? (64u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v39)) > _g4_s13 ? (68u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v40)) > _g4_s14 ? (72u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v41)) > _g4_s15 ? (84u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v42)) > _g4_s16 ? (88u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (90u + sizeof(_g4_t_v43)) > _g4_s17 ? (90u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (91u + sizeof(_g4_t_v44)) > _g4_s18 ? (91u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v45)) > _g4_s19 ? (104u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v46)) > _g4_s20 ? (116u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v47)) > _g4_s21 ? (120u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (122u + sizeof(_g4_t_v48)) > _g4_s22 ? (122u + sizeof(_g4_t_v48)) : _g4_s22,
    _g4_s24 = (123u + sizeof(_g4_t_v49)) > _g4_s23 ? (123u + sizeof(_g4_t_v49)) : _g4_s23,
    _g4_s25 = (136u + sizeof(_g4_t_v50)) > _g4_s24 ? (136u + sizeof(_g4_t_v50)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v51)) > _g4_s25 ? (148u + sizeof(_g4_t_v51)) : _g4_s25,
    _g4_s27 = (152u + sizeof(_g4_t_v52)) > _g4_s26 ? (152u + sizeof(_g4_t_v52)) : _g4_s26,
    _g4_s28 = (154u + sizeof(_g4_t_v53)) > _g4_s27 ? (154u + sizeof(_g4_t_v53)) : _g4_s27,
    _g4_s29 = (155u + sizeof(_g4_t_v54)) > _g4_s28 ? (155u + sizeof(_g4_t_v54)) : _g4_s28,
    _g4_s30 = (168u + sizeof(_g4_t_v55)) > _g4_s29 ? (168u + sizeof(_g4_t_v55)) : _g4_s29,
    _g4_s31 = (180u + sizeof(_g4_t_v56)) > _g4_s30 ? (180u + sizeof(_g4_t_v56)) : _g4_s30,
    _g4_s32 = (184u + sizeof(_g4_t_v57)) > _g4_s31 ? (184u + sizeof(_g4_t_v57)) : _g4_s31,
    _g4_s33 = (186u + sizeof(_g4_t_v58)) > _g4_s32 ? (186u + sizeof(_g4_t_v58)) : _g4_s32,
    _g4_s34 = (187u + sizeof(_g4_t_v59)) > _g4_s33 ? (187u + sizeof(_g4_t_v59)) : _g4_s33,
    _g4_s35 = (200u + sizeof(_g4_t_v60)) > _g4_s34 ? (200u + sizeof(_g4_t_v60)) : _g4_s34,
    _g4_s36 = (212u + sizeof(_g4_t_v61)) > _g4_s35 ? (212u + sizeof(_g4_t_v61)) : _g4_s35,
    _g4_s37 = (216u + sizeof(_g4_t_v62)) > _g4_s36 ? (216u + sizeof(_g4_t_v62)) : _g4_s36,
    _g4_s38 = (218u + sizeof(_g4_t_v63)) > _g4_s37 ? (218u + sizeof(_g4_t_v63)) : _g4_s37,
    _g4_s39 = (219u + sizeof(_g4_t_v64)) > _g4_s38 ? (219u + sizeof(_g4_t_v64)) : _g4_s38,
    _g4_s40 = (232u + sizeof(_g4_t_v65)) > _g4_s39 ? (232u + sizeof(_g4_t_v65)) : _g4_s39,
    _g4_s41 = (244u + sizeof(_g4_t_v66)) > _g4_s40 ? (244u + sizeof(_g4_t_v66)) : _g4_s40,
    _g4_s42 = (248u + sizeof(_g4_t_v67)) > _g4_s41 ? (248u + sizeof(_g4_t_v67)) : _g4_s41,
    _g4_s43 = (250u + sizeof(_g4_t_v68)) > _g4_s42 ? (250u + sizeof(_g4_t_v68)) : _g4_s42,
    _g4_s44 = (251u + sizeof(_g4_t_v69)) > _g4_s43 ? (251u + sizeof(_g4_t_v69)) : _g4_s43,
    _g4_s45 = (264u + sizeof(_g4_t_v70)) > _g4_s44 ? (264u + sizeof(_g4_t_v70)) : _g4_s44,
    _g4_s46 = (276u + sizeof(_g4_t_v71)) > _g4_s45 ? (276u + sizeof(_g4_t_v71)) : _g4_s45,
    _g4_s47 = (280u + sizeof(_g4_t_v72)) > _g4_s46 ? (280u + sizeof(_g4_t_v72)) : _g4_s46,
    _g4_s48 = (282u + sizeof(_g4_t_v73)) > _g4_s47 ? (282u + sizeof(_g4_t_v73)) : _g4_s47,
    _g4_s49 = (283u + sizeof(_g4_t_v74)) > _g4_s48 ? (283u + sizeof(_g4_t_v74)) : _g4_s48,
    _g4_s50 = (296u + sizeof(_g4_t_v75)) > _g4_s49 ? (296u + sizeof(_g4_t_v75)) : _g4_s49,
    _g4_s51 = (308u + sizeof(_g4_t_v76)) > _g4_s50 ? (308u + sizeof(_g4_t_v76)) : _g4_s50,
    _g4_s52 = (312u + sizeof(_g4_t_v77)) > _g4_s51 ? (312u + sizeof(_g4_t_v77)) : _g4_s51,
    _g4_s53 = (314u + sizeof(_g4_t_v78)) > _g4_s52 ? (314u + sizeof(_g4_t_v78)) : _g4_s52,
    _g4_s54 = (315u + sizeof(_g4_t_v79)) > _g4_s53 ? (315u + sizeof(_g4_t_v79)) : _g4_s53,
    _g4_s55 = (328u + sizeof(_g4_t_v80)) > _g4_s54 ? (328u + sizeof(_g4_t_v80)) : _g4_s54,
    _g4_s56 = (340u + sizeof(_g4_t_v81)) > _g4_s55 ? (340u + sizeof(_g4_t_v81)) : _g4_s55,
    _g4_s57 = (344u + sizeof(_g4_t_v82)) > _g4_s56 ? (344u + sizeof(_g4_t_v82)) : _g4_s56,
    _g4_s58 = (346u + sizeof(_g4_t_v83)) > _g4_s57 ? (346u + sizeof(_g4_t_v83)) : _g4_s57,
    _g4_s59 = (347u + sizeof(_g4_t_v84)) > _g4_s58 ? (347u + sizeof(_g4_t_v84)) : _g4_s58,
    _g4_s60 = (360u + sizeof(_g4_t_v85)) > _g4_s59 ? (360u + sizeof(_g4_t_v85)) : _g4_s59,
    _g4_s61 = (372u + sizeof(_g4_t_v86)) > _g4_s60 ? (372u + sizeof(_g4_t_v86)) : _g4_s60,
    _g4_s62 = (376u + sizeof(_g4_t_v87)) > _g4_s61 ? (376u + sizeof(_g4_t_v87)) : _g4_s61,
    _g4_s63 = (378u + sizeof(_g4_t_v88)) > _g4_s62 ? (378u + sizeof(_g4_t_v88)) : _g4_s62,
    _g4_s64 = (379u + sizeof(_g4_t_v89)) > _g4_s63 ? (379u + sizeof(_g4_t_v89)) : _g4_s63
  };
  alignas(16) uint8_t _g4_sf[_g4_s64];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 68u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 72u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 84u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 88u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 90u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 91u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 104u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 116u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 120u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 122u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 123u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 136u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 148u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 152u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 154u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 155u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 168u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 180u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 184u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 186u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 187u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 200u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 212u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 216u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 218u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 219u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 232u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 244u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 248u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 250u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 251u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 264u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 276u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 280u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 282u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 283u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 296u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 308u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 312u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 314u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 315u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 328u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 340u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 344u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 346u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 347u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 360u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 372u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 376u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 378u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 379u);

  v1 = dword_2115AA0;
  if ( dword_2115AA0 != 0 && *(uint32_t *)dword_2115AA0 != 0 )
    goto LABEL_6;
  gameswf::hash_gameswf_StringI_gameswf_7d6b46::set_raw_capacity(
    (gameswf::hash<gameswf::StringI::Self, gameswf::ASColorTransformMember, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)&dword_2115AA0,
    18);
  v30 = 1;
  LOWORD(v40[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v40, 13);
  v6 = (gameswf::Self *)((char *)v40 + 1);
  if ( LOBYTE(v40[0]) == 0xFF )
    v6 = v41;
  gameswf::Strcpy_s(v6, &byte_9[5], (gameswf::Self *)"redMultiplier");
  v42 = -1;
  v43 = 127;
  v44 |= 1u;
  gameswf::hash_gameswf_StringI_gameswf_7d6b46::add(
    (gameswf::hash<gameswf::StringI::Self, gameswf::ASColorTransformMember, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)&dword_2115AA0,
    (int)(uintptr_t)(v40),
    (int)(uintptr_t)(&v30));
  if ( LOBYTE(v40[0]) == 0xFF && (v44 & 1) != 0 )
    gameswf::free_internal(v41);
  v31 = 2;
  LOWORD(v45[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v45, 15);
  v7 = (gameswf::Self *)((char *)v45 + 1);
  if ( LOBYTE(v45[0]) == 0xFF )
    v7 = v46;
  gameswf::Strcpy_s(v7, (char *)&word_10, (gameswf::Self *)"greenMultiplier");
  v47 = -1;
  v48 = 127;
  v49 |= 1u;
  gameswf::hash_gameswf_StringI_gameswf_7d6b46::add(
    (gameswf::hash<gameswf::StringI::Self, gameswf::ASColorTransformMember, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)&dword_2115AA0,
    (int)(uintptr_t)(v45),
    (int)(uintptr_t)(&v31));
  if ( LOBYTE(v45[0]) == 0xFF && (v49 & 1) != 0 )
    gameswf::free_internal(v46);
  v32 = 3;
  LOWORD(v50[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v50, 14);
  v8 = (gameswf::Self *)((char *)v50 + 1);
  if ( LOBYTE(v50[0]) == 0xFF )
    v8 = v51;
  gameswf::Strcpy_s(v8, &byte_9[6], (gameswf::Self *)"blueMultiplier");
  v52 = -1;
  v53 = 127;
  v54 |= 1u;
  gameswf::hash_gameswf_StringI_gameswf_7d6b46::add(
    (gameswf::hash<gameswf::StringI::Self, gameswf::ASColorTransformMember, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)&dword_2115AA0,
    (int)(uintptr_t)(v50),
    (int)(uintptr_t)(&v32));
  if ( LOBYTE(v50[0]) == 0xFF && (v54 & 1) != 0 )
    gameswf::free_internal(v51);
  v33 = 4;
  LOWORD(v55[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v55, 15);
  v9 = (gameswf::Self *)((char *)v55 + 1);
  if ( LOBYTE(v55[0]) == 0xFF )
    v9 = v56;
  gameswf::Strcpy_s(v9, (char *)&word_10, (gameswf::Self *)"alphaMultiplier");
  v57 = -1;
  v58 = 127;
  v59 |= 1u;
  gameswf::hash_gameswf_StringI_gameswf_7d6b46::add(
    (gameswf::hash<gameswf::StringI::Self, gameswf::ASColorTransformMember, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)&dword_2115AA0,
    (int)(uintptr_t)(v55),
    (int)(uintptr_t)(&v33));
  if ( LOBYTE(v55[0]) == 0xFF && (v59 & 1) != 0 )
    gameswf::free_internal(v56);
  v34 = 5;
  LOWORD(v60[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v60, 9);
  v10 = (gameswf::Self *)((char *)v60 + 1);
  if ( LOBYTE(v60[0]) == 0xFF )
    v10 = v61;
  gameswf::Strcpy_s(v10, &byte_9[1], (gameswf::Self *)"redOffset");
  v62 = -1;
  v63 = 127;
  v64 |= 1u;
  gameswf::hash_gameswf_StringI_gameswf_7d6b46::add(
    (gameswf::hash<gameswf::StringI::Self, gameswf::ASColorTransformMember, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)&dword_2115AA0,
    (int)(uintptr_t)(v60),
    (int)(uintptr_t)(&v34));
  if ( LOBYTE(v60[0]) == 0xFF && (v64 & 1) != 0 )
    gameswf::free_internal(v61);
  v35 = 6;
  LOWORD(v65[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v65, 11);
  v11 = (gameswf::Self *)((char *)v65 + 1);
  if ( LOBYTE(v65[0]) == 0xFF )
    v11 = v66;
  gameswf::Strcpy_s(v11, &byte_9[3], (gameswf::Self *)"greenOffset");
  v67 = -1;
  v68 = 127;
  v69 |= 1u;
  gameswf::hash_gameswf_StringI_gameswf_7d6b46::add(
    (gameswf::hash<gameswf::StringI::Self, gameswf::ASColorTransformMember, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)&dword_2115AA0,
    (int)(uintptr_t)(v65),
    (int)(uintptr_t)(&v35));
  if ( LOBYTE(v65[0]) == 0xFF && (v69 & 1) != 0 )
    gameswf::free_internal(v66);
  v36 = 7;
  LOWORD(v70[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v70, 10);
  v12 = (gameswf::Self *)((char *)v70 + 1);
  if ( LOBYTE(v70[0]) == 0xFF )
    v12 = v71;
  gameswf::Strcpy_s(v12, &byte_9[2], (gameswf::Self *)"blueOffset");
  v72 = -1;
  v73 = 127;
  v74 |= 1u;
  gameswf::hash_gameswf_StringI_gameswf_7d6b46::add(
    (gameswf::hash<gameswf::StringI::Self, gameswf::ASColorTransformMember, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)&dword_2115AA0,
    (int)(uintptr_t)(v70),
    (int)(uintptr_t)(&v36));
  if ( LOBYTE(v70[0]) == 0xFF && (v74 & 1) != 0 )
    gameswf::free_internal(v71);
  v37 = 8;
  LOWORD(v75[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v75, 11);
  v13 = (gameswf::Self *)((char *)v75 + 1);
  if ( LOBYTE(v75[0]) == 0xFF )
    v13 = v76;
  gameswf::Strcpy_s(v13, &byte_9[3], (gameswf::Self *)"alphaOffset");
  v77 = -1;
  v78 = 127;
  v79 |= 1u;
  gameswf::hash_gameswf_StringI_gameswf_7d6b46::add(
    (gameswf::hash<gameswf::StringI::Self, gameswf::ASColorTransformMember, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)&dword_2115AA0,
    (int)(uintptr_t)(v75),
    (int)(uintptr_t)(&v37));
  if ( LOBYTE(v75[0]) == 0xFF && (v79 & 1) != 0 )
    gameswf::free_internal(v76);
  v38 = 9;
  LOWORD(v80[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v80, 3);
  v14 = (gameswf::Self *)((char *)v80 + 1);
  if ( LOBYTE(v80[0]) == 0xFF )
    v14 = v81;
  gameswf::Strcpy_s(v14, (char *)&loc_4, (gameswf::Self *)&off_1B60A7E);
  v82 = -1;
  v83 = 127;
  v84 |= 1u;
  gameswf::hash_gameswf_StringI_gameswf_7d6b46::add(
    (gameswf::hash<gameswf::StringI::Self, gameswf::ASColorTransformMember, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)&dword_2115AA0,
    (int)(uintptr_t)(v80),
    (int)(uintptr_t)(&v38));
  if ( LOBYTE(v80[0]) == 0xFF && (v84 & 1) != 0 )
    gameswf::free_internal(v81);
  v39 = 9;
  LOWORD(v85[0]) = 1;
  gameswf::String::resize((gameswf::String::Self *)v85, 5);
  v15 = (gameswf::Self *)((char *)v85 + 1);
  if ( LOBYTE(v85[0]) == 0xFF )
    v15 = v86;
  gameswf::Strcpy_s(v15, (char *)&loc_6, (gameswf::Self *)"color");
  v87 = -1;
  v88 = 127;
  v89 |= 1u;
  gameswf::hash_gameswf_StringI_gameswf_7d6b46::add(
    (gameswf::hash<gameswf::StringI::Self, gameswf::ASColorTransformMember, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)&dword_2115AA0,
    (int)(uintptr_t)(v85),
    (int)(uintptr_t)(&v39));
  if ( LOBYTE(v85[0]) == 0xFF && (v89 & 1) != 0 )
    gameswf::free_internal(v86);
  v1 = dword_2115AA0;
  result = 11;
  if ( dword_2115AA0 != 0 )
  {
LABEL_6:
    v27 = *((uint32_t *)a1 + 4);
    if ( (uint8_t *)(v27 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( *a1 == -1 )
      {
        v17 = *((char **)a1 + 3);
        v16 = *((uint32_t *)a1 + 1) - 1;
      }
      else
      {
        v16 = *a1 - 1;
        v17 = a1 + 1;
      }
      v2 = 5381;
      v18 = 5381;
      if ( v16 > 0 )
      {
        v26 = v1;
        do
        {
          --v16;
          v19 = 33 * v18;
          v20 = (uint8_t)v17[v16] + 32;
          if ( (uint8_t)(v17[v16] - 65) > 0x19u )
            v20 = (uint8_t)v17[v16];
          v18 = v19 ^ v20;
        }
        while ( v16 != 0 );
        v1 = v26;
        v18 = v18 << 9 >> 9;
        v2 = v18;
      }
      *((uint32_t *)a1 + 4) = v18 & 0x7FFFFF | v27 & 0xFF800000;
    }
    else
    {
      v2 = v27 << 9 >> 9;
    }
    v29 = *(uint32_t *)(v1 + 4);
    v3 = v2 & v29;
    v4 = v1 + 32 * (v2 & v29) + 8;
    result = 11;
    if ( *(uint32_t *)v4 != -2 && v3 == (*(uint32_t *)(v4 + 4) & v29) )
    {
      for ( i = *(uint32_t *)(v4 + 4); ; i = *(uint32_t *)(v4 + 4) )
      {
        if ( i == v2 )
        {
          if ( a1 == (char *)(v4 + 8) )
            break;
          v22 = a1 + 1;
          if ( *a1 == -1 )
            v22 = *((char **)a1 + 3);
          v23 = (gameswf::String::Self *)(v4 + 9);
          if ( *(uint8_t *)(v4 + 8) == 0xFF )
            v23 = *(gameswf::String::Self **)(v4 + 20);
          v25 = v2;
          v24 = gameswf::String::stricmp(v23, v22);
          v2 = v25;
          if ( v24 == 0 )
            break;
        }
        v3 = *(uint32_t *)v4;
        if ( *(uint32_t *)v4 == -1 )
          return 11;
        v4 = dword_2115AA0 + 32 * v3 + 8;
      }
      if ( v3 >= 0 )
        return *(uint32_t *)(dword_2115AA0 + 32 * v3 + 36);
      return 11;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_11913A0  (binary VA: 0x11913a0)
// Original: sub_11913A0
// ----------------------------------------------------------------------------
int sub_11913A0()
{
  dword_2115AA0 = 0;
  return __cxa_atexit(
           (void (*)(void *))gameswf::stringi_hash_gameswf_ASColorTransform_86052b::Destroy,
           &dword_2115AA0,
           &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: gl_vertLeq  (binary VA: 0x11930b0)
// Original: __gl_vertLeq
// ----------------------------------------------------------------------------
bool gl_vertLeq(int a1, int a2)
{
  double v2; // xmm1_8
  bool result;
  double v4; // xmm0_8

  v2 = *(double *)(a1 + 40);
  result = true;
  v4 = *(double *)(a2 + 40);
  if ( v4 <= v2 )
  {
    result = false;
    if ( v2 == v4 )
      return *(double *)(a2 + 48) >= *(double *)(a1 + 48);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gl_edgeEval  (binary VA: 0x11930f0)
// Original: __gl_edgeEval
// ----------------------------------------------------------------------------
long double gl_edgeEval(int a1, int a2, int a3)
{
  double v3; // xmm2_8
  double v4; // xmm0_8
  double v5; // xmm1_8
  double v6; // xmm2_8
  double v7; // xmm3_8

  v3 = *(double *)(a2 + 40);
  v4 = *(double *)(a3 + 40) - v3;
  v5 = 0.0;
  v6 = v3 - *(double *)(a1 + 40);
  v7 = v4 + v6;
  if ( v4 + v6 <= 0.0 )
    return v5;
  if ( v4 <= v6 )
    return *(double *)(a2 + 48) - *(double *)(a3 + 48) + v4 / v7 * (*(double *)(a3 + 48) - *(double *)(a1 + 48));
  return *(double *)(a2 + 48) - *(double *)(a1 + 48) + v6 / v7 * (*(double *)(a1 + 48) - *(double *)(a3 + 48));
}

// ----------------------------------------------------------------------------
// Function: gl_edgeSign  (binary VA: 0x1193190)
// Original: __gl_edgeSign
// ----------------------------------------------------------------------------
long double gl_edgeSign(int a1, int a2, int a3)
{
  double v3; // xmm2_8
  double v4; // xmm1_8
  double v5; // xmm0_8
  double v6; // xmm2_8

  v3 = *(double *)(a2 + 40);
  v4 = *(double *)(a3 + 40) - v3;
  v5 = 0.0;
  v6 = v3 - *(double *)(a1 + 40);
  if ( v4 + v6 > 0.0 )
    return (*(double *)(a2 + 48) - *(double *)(a1 + 48)) * v4 + (*(double *)(a2 + 48) - *(double *)(a3 + 48)) * v6;
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gl_transEval  (binary VA: 0x1193200)
// Original: __gl_transEval
// ----------------------------------------------------------------------------
long double gl_transEval(int a1, int a2, int a3)
{
  double v3; // xmm2_8
  double v4; // xmm0_8
  double v5; // xmm1_8
  double v6; // xmm2_8
  double v7; // xmm3_8

  v3 = *(double *)(a2 + 48);
  v4 = *(double *)(a3 + 48) - v3;
  v5 = 0.0;
  v6 = v3 - *(double *)(a1 + 48);
  v7 = v4 + v6;
  if ( v4 + v6 <= 0.0 )
    return v5;
  if ( v4 <= v6 )
    return *(double *)(a2 + 40) - *(double *)(a3 + 40) + v4 / v7 * (*(double *)(a3 + 40) - *(double *)(a1 + 40));
  return *(double *)(a2 + 40) - *(double *)(a1 + 40) + v6 / v7 * (*(double *)(a1 + 40) - *(double *)(a3 + 40));
}

// ----------------------------------------------------------------------------
// Function: gl_transSign  (binary VA: 0x11932a0)
// Original: __gl_transSign
// ----------------------------------------------------------------------------
long double gl_transSign(int a1, int a2, int a3)
{
  double v3; // xmm2_8
  double v4; // xmm1_8
  double v5; // xmm0_8
  double v6; // xmm2_8

  v3 = *(double *)(a2 + 48);
  v4 = *(double *)(a3 + 48) - v3;
  v5 = 0.0;
  v6 = v3 - *(double *)(a1 + 48);
  if ( v4 + v6 > 0.0 )
    return (*(double *)(a2 + 40) - *(double *)(a1 + 40)) * v4 + (*(double *)(a2 + 40) - *(double *)(a3 + 40)) * v6;
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gl_vertCCW  (binary VA: 0x1193310)
// Original: __gl_vertCCW
// ----------------------------------------------------------------------------
bool gl_vertCCW(int a1, int a2, int a3)
{
  return (*(double *)(a3 + 48) - *(double *)(a1 + 48)) * *(double *)(a2 + 40)
       + *(double *)(a1 + 40) * (*(double *)(a2 + 48) - *(double *)(a3 + 48))
       + (*(double *)(a1 + 48) - *(double *)(a2 + 48)) * *(double *)(a3 + 40) >= 0.0;
}

// ----------------------------------------------------------------------------
// Function: gl_edgeIntersect  (binary VA: 0x1193380)
// Original: __gl_edgeIntersect
// ----------------------------------------------------------------------------
void gl_edgeIntersect(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  double v8; // xmm2_8
  int v9;
  double v10; // xmm0_8
  double v11; // xmm0_8
  double v12; // xmm1_8
  int v13;
  int v14;
  double v15; // xmm0_8
  double v16; // xmm2_8
  double v17; // xmm1_8
  double v18; // xmm2_8
  double v19; // xmm1_8
  double v20; // xmm0_8
  double v21; // xmm3_8
  double v22; // xmm0_8
  double v23; // xmm1_8
  double v24; // xmm2_8
  int v25;
  double v26; // xmm1_8
  int v27;
  double v28; // xmm2_8
  double v29; // xmm1_8
  double v30; // xmm2_8
  double v31; // xmm1_8
  double v32; // xmm0_8
  double v33; // xmm1_8
  double v34; // xmm2_8
  double v35; // xmm3_8
  double v36; // xmm1_8
  double v37; // xmm2_8
  double v38; // xmm2_8
  double v39; // xmm1_8
  double v40; // xmm0_8
  double v41; // xmm1_8
  int v42;
  double v43; // xmm4_8
  int v44;
  int v45;
  int v46;
  double v47;
  double v48;
  double v49;
  double v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  double v58;
  double v59;
  double v60;
  double v61;

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = *(double *)(a1 + 40);
  v9 = a4;
  v10 = *(double *)(a2 + 40);
  if ( v8 >= v10 )
  {
    if ( v8 == v10 )
    {
      if ( *(double *)(a1 + 48) > *(double *)(a2 + 48) )
      {
        v5 = a2;
        v6 = a1;
      }
    }
    else
    {
      v8 = *(double *)(a2 + 40);
      v5 = a2;
      v6 = a1;
    }
  }
  v11 = *(double *)(a3 + 40);
  v12 = *(double *)(a4 + 40);
  if ( v11 >= v12 )
  {
    if ( v11 == v12 )
    {
      v12 = *(double *)(a3 + 40);
      if ( *(double *)(a3 + 48) > *(double *)(a4 + 48) )
      {
        v7 = a4;
        v9 = a3;
      }
    }
    else
    {
      v11 = *(double *)(a4 + 40);
      v7 = a4;
      v12 = *(double *)(a3 + 40);
      v9 = a3;
    }
  }
  if ( v8 >= v11 )
  {
    if ( v11 != v8 )
    {
      v11 = v8;
      goto LABEL_10;
    }
    if ( *(double *)(v5 + 48) > *(double *)(v7 + 48) )
    {
LABEL_10:
      v13 = v6;
      v6 = v9;
      v9 = v13;
      v14 = v5;
      v5 = v7;
      v7 = v14;
      if ( v11 < v12 )
        goto LABEL_11;
LABEL_21:
      if ( v12 != v11 || *(double *)(v7 + 48) > *(double *)(v6 + 48) )
      {
        *(double *)(a5 + 40) = (v11 + v12) * 0.5;
        goto LABEL_23;
      }
      v15 = *(double *)(v9 + 40);
      if ( v15 > v12 )
        goto LABEL_52;
      goto LABEL_12;
    }
  }
  v12 = *(double *)(v6 + 40);
  if ( v11 >= v12 )
    goto LABEL_21;
LABEL_11:
  v15 = *(double *)(v9 + 40);
  if ( v15 > v12 )
  {
LABEL_52:
    v57 = v5;
    v53 = v9;
    v60 = gl_edgeEval(v5, v7, v6);
    v49 = gl_edgeEval(v7, v6, v53);
    v9 = v53;
    v33 = v49;
    v5 = v57;
    v34 = v60;
    if ( v49 + v60 < 0.0 )
    {
      v34 = -v60;
      v33 = -v49;
    }
    v18 = fmax(v34, 0.0);
    v19 = fmax(v33, 0.0);
    if ( v19 >= v18 )
    {
      if ( v19 == 0.0 )
        v20 = (*(double *)(v6 + 40) + *(double *)(v7 + 40)) * 0.5;
      else
        v20 = v18 / (v19 + v18) * (*(double *)(v6 + 40) - *(double *)(v7 + 40)) + *(double *)(v7 + 40);
      goto LABEL_57;
    }
    v35 = *(double *)(v6 + 40);
    goto LABEL_56;
  }
LABEL_12:
  if ( v12 == v15 && *(double *)(v9 + 48) >= *(double *)(v6 + 48) )
    goto LABEL_52;
  v51 = v9;
  v55 = v5;
  v58 = gl_edgeSign(v5, v7, v6);
  v47 = gl_edgeSign(v55, v51, v6);
  v9 = v51;
  v16 = v58;
  v5 = v55;
  v17 = v47;
  if ( v58 - v47 < 0.0 )
    v16 = -v58;
  else
    v17 = -v47;
  v18 = fmax(v16, 0.0);
  v19 = fmax(v17, 0.0);
  if ( v19 >= v18 )
  {
    if ( v19 == 0.0 )
      v20 = (*(double *)(v51 + 40) + *(double *)(v7 + 40)) * 0.5;
    else
      v20 = v18 / (v19 + v18) * (*(double *)(v51 + 40) - *(double *)(v7 + 40)) + *(double *)(v7 + 40);
    goto LABEL_57;
  }
  v35 = *(double *)(v51 + 40);
LABEL_56:
  v20 = v19 / (v18 + v19) * (*(double *)(v7 + 40) - v35) + v35;
LABEL_57:
  *(double *)(a5 + 40) = v20;
LABEL_23:
  v21 = *(double *)(v5 + 48);
  v22 = *(double *)(v6 + 48);
  if ( v21 >= v22 )
  {
    if ( v21 == v22 )
    {
      v22 = *(double *)(v5 + 48);
      if ( *(double *)(v5 + 40) > *(double *)(v6 + 40) )
      {
        v45 = v5;
        v5 = v6;
        v6 = v45;
      }
    }
    else
    {
      v41 = *(double *)(v5 + 48);
      v42 = v5;
      v21 = *(double *)(v6 + 48);
      v5 = v6;
      v22 = v41;
      v6 = v42;
    }
  }
  v23 = *(double *)(v7 + 48);
  v24 = *(double *)(v9 + 48);
  if ( v23 >= v24 )
  {
    if ( v23 == v24 )
    {
      v24 = *(double *)(v7 + 48);
      if ( *(double *)(v7 + 40) > *(double *)(v9 + 40) )
      {
        v46 = v7;
        v7 = v9;
        v9 = v46;
      }
    }
    else
    {
      v43 = *(double *)(v7 + 48);
      v44 = v7;
      v23 = *(double *)(v9 + 48);
      v7 = v9;
      v24 = v43;
      v9 = v44;
    }
  }
  if ( v21 >= v23 )
  {
    if ( v21 == v23 && *(double *)(v5 + 40) <= *(double *)(v7 + 40) )
    {
      v23 = v21;
    }
    else
    {
      v25 = v6;
      v26 = v22;
      v6 = v9;
      v9 = v25;
      v27 = v5;
      v22 = v24;
      v5 = v7;
      v24 = v26;
      v7 = v27;
      v23 = v21;
    }
  }
  if ( v23 < v22 || v23 == v22 && *(double *)(v7 + 40) <= *(double *)(v6 + 40) )
  {
    if ( v24 > v22 || v22 == v24 && *(double *)(v9 + 40) >= *(double *)(v6 + 40) )
    {
      v54 = v9;
      v61 = gl_transEval(v5, v7, v6);
      v50 = gl_transEval(v7, v6, v54);
      v36 = v50;
      v37 = v61;
      if ( v50 + v61 < 0.0 )
      {
        v37 = -v61;
        v36 = -v50;
      }
      v38 = fmax(v37, 0.0);
      v39 = fmax(v36, 0.0);
      if ( v39 < v38 )
      {
        v40 = v39 / (v38 + v39) * (*(double *)(v7 + 48) - *(double *)(v6 + 48)) + *(double *)(v6 + 48);
      }
      else if ( v39 == 0.0 )
      {
        v40 = (*(double *)(v6 + 48) + *(double *)(v7 + 48)) * 0.5;
      }
      else
      {
        v40 = v38 / (v39 + v38) * (*(double *)(v6 + 48) - *(double *)(v7 + 48)) + *(double *)(v7 + 48);
      }
      *(double *)(a5 + 48) = v40;
    }
    else
    {
      v52 = v9;
      v56 = v5;
      v59 = gl_transSign(v5, v7, v6);
      v48 = gl_transSign(v56, v52, v6);
      v28 = v59;
      v29 = v48;
      if ( v59 - v48 < 0.0 )
        v28 = -v59;
      else
        v29 = -v48;
      v30 = fmax(v28, 0.0);
      v31 = fmax(v29, 0.0);
      if ( v31 < v30 )
      {
        v32 = v31 / (v30 + v31) * (*(double *)(v7 + 48) - *(double *)(v52 + 48)) + *(double *)(v52 + 48);
      }
      else if ( v31 == 0.0 )
      {
        v32 = (*(double *)(v52 + 48) + *(double *)(v7 + 48)) * 0.5;
      }
      else
      {
        v32 = v30 / (v31 + v30) * (*(double *)(v52 + 48) - *(double *)(v7 + 48)) + *(double *)(v7 + 48);
      }
      *(double *)(a5 + 48) = v32;
    }
  }
  else
  {
    *(double *)(a5 + 48) = (v22 + v23) * 0.5;
  }
}

// ----------------------------------------------------------------------------
// Function: gl_meshMakeEdge  (binary VA: 0x1193a60)
// Original: __gl_meshMakeEdge
// ----------------------------------------------------------------------------
uint32_t * gl_meshMakeEdge(int a1)
{
  gameswf::Self *v1;
  int v2;
  int v3;
  uint32_t *result;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  gameswf::Self **v9;
  gameswf::Self **v10;
  int v11;
  int *v12;
  gameswf::Self *v13;
  int v14;
  int v15;

  v13 = (gameswf::Self *)gameswf::malloc_internal(0x3Cu);
  v1 = (gameswf::Self *)gameswf::malloc_internal(0x3Cu);
  v2 = gameswf::malloc_internal(0x18u);
  v3 = v2;
  if ( v1 != nullptr && v13 != nullptr && v2 != 0 )
  {
    v5 = gameswf::malloc_internal(0x40u);
    v6 = (uint32_t *)v5;
    if ( v5 != 0 )
    {
      v14 = v5 + 32;
      v7 = a1 + 84;
      if ( *(uint32_t *)(a1 + 88) <= (unsigned int)(a1 + 84) )
        v7 = *(uint32_t *)(a1 + 88);
      v8 = **(uint32_t **)(v7 + 4);
      v6[8] = v8;
      **(uint32_t **)(v8 + 4) = (uint32_t)(uintptr_t)(v6);
      *v6 = v7;
      **(uint32_t **)(v7 + 4) = v14;
      v6[1] = v14;
      v6[2] = (uint32_t)(uintptr_t)(v6);
      v6[3] = v14;
      v6[4] = 0;
      v6[5] = 0;
      v6[7] = 0;
      v6[6] = 0;
      v6[9] = (uint32_t)(uintptr_t)(v6);
      v6[10] = v14;
      v6[11] = (uint32_t)(uintptr_t)(v6);
      v6[12] = 0;
      v6[13] = 0;
      v6[15] = 0;
      v6[14] = 0;
      v9 = *(gameswf::Self ***)(a1 + 4);
      *((uint32_t *)v13 + 1) = (uint32_t)(uintptr_t)(v9);
      *v9 = v13;
      *(uint32_t *)v13 = a1;
      result = v6;
      *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v13);
      *((uint32_t *)v13 + 2) = (uint32_t)(uintptr_t)(v6);
      *((uint32_t *)v13 + 3) = 0;
      do
      {
        result[4] = (uint32_t)(uintptr_t)(v13);
        result = (uint32_t *)result[2];
      }
      while ( result != v6 );
      v15 = result[1];
      v10 = *(gameswf::Self ***)(a1 + 4);
      *((uint32_t *)v1 + 1) = (uint32_t)(uintptr_t)(v10);
      *v10 = v1;
      v11 = v15;
      *(uint32_t *)v1 = a1;
      *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v1);
      *((uint32_t *)v1 + 2) = v15;
      *((uint32_t *)v1 + 3) = 0;
      do
      {
        *(uint32_t *)(v11 + 16) = (uint32_t)(uintptr_t)(v1);
        v11 = *(uint32_t *)(v11 + 8);
      }
      while ( v15 != v11 );
      v12 = *(int **)(a1 + 64);
      *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v12);
      *v12 = v3;
      *(uint32_t *)v3 = a1 + 60;
      *(uint32_t *)(a1 + 64) = v3;
      *(uint32_t *)(v3 + 8) = (uint32_t)(uintptr_t)(v6);
      *(uint32_t *)(v3 + 12) = 0;
      *(uint32_t *)(v3 + 16) = 0;
      *(uint8_t *)(v3 + 20) = 0;
      *(uint8_t *)(v3 + 21) = *(uint8_t *)(a1 + 81);
      do
      {
        result[5] = v3;
        result = (uint32_t *)result[3];
      }
      while ( result != v6 );
    }
    else
    {
      return nullptr;
    }
  }
  else
  {
    if ( v13 != nullptr )
      gameswf::free_internal(v13);
    if ( v1 != nullptr )
      gameswf::free_internal(v1);
    result = nullptr;
    if ( v3 != 0 )
    {
      gameswf::free_internal((gameswf::Self *)v3);
      return nullptr;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gl_meshSplice  (binary VA: 0x1193c70)
// Original: __gl_meshSplice
// ----------------------------------------------------------------------------
int gl_meshSplice(uint32_t *a1, uint32_t *a2)
{
  int result;
  gameswf::Self *v3;
  gameswf::Self *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  gameswf::Self *v9;
  gameswf::Self *v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int *v20;
  uint32_t *v21;
  uint32_t *v22;
  int v23;
  uint32_t *v24;
  uint32_t *v25;
  int v26;

  result = 1;
  if ( a1 != a2 )
  {
    v3 = (gameswf::Self *)a2[4];
    v4 = (gameswf::Self *)a1[4];
    v26 = 0;
    if ( v3 != v4 )
    {
      v5 = *((uint32_t *)v3 + 2);
      v6 = v5;
      do
      {
        *(uint32_t *)(v6 + 16) = (uint32_t)(uintptr_t)(v4);
        v6 = *(uint32_t *)(v6 + 8);
      }
      while ( v5 != v6 );
      v7 = *((uint32_t **)v3 + 1);
      v8 = *(uint32_t *)v3;
      *(uint32_t *)(v8 + 4) = (uint32_t)(uintptr_t)(v7);
      *v7 = v8;
      gameswf::free_internal(v3);
      v26 = 1;
    }
    v9 = (gameswf::Self *)a2[5];
    v10 = (gameswf::Self *)a1[5];
    v11 = 0;
    if ( v9 != v10 )
    {
      v12 = *((uint32_t *)v9 + 2);
      v13 = v12;
      do
      {
        *(uint32_t *)(v13 + 20) = (uint32_t)(uintptr_t)(v10);
        v13 = *(uint32_t *)(v13 + 12);
      }
      while ( v12 != v13 );
      v14 = *((uint32_t **)v9 + 1);
      v15 = *(uint32_t *)v9;
      v11 = 1;
      *(uint32_t *)(v15 + 4) = (uint32_t)(uintptr_t)(v14);
      *v14 = v15;
      gameswf::free_internal(v9);
    }
    v16 = a2[2];
    v17 = a1[2];
    *(uint32_t *)(*(uint32_t *)(v16 + 4) + 12) = (uint32_t)(uintptr_t)(a1);
    *(uint32_t *)(*(uint32_t *)(v17 + 4) + 12) = (uint32_t)(uintptr_t)(a2);
    a2[2] = v17;
    a1[2] = v16;
    if ( v26 == 0 )
    {
      v22 = (uint32_t *)gameswf::malloc_internal(0x3Cu);
      result = 0;
      if ( v22 == nullptr )
        return result;
      v23 = a1[4];
      v24 = *(uint32_t **)(v23 + 4);
      v22[1] = (uint32_t)(uintptr_t)(v24);
      *v24 = (uint32_t)(uintptr_t)(v22);
      *v22 = v23;
      v25 = a2;
      *(uint32_t *)(v23 + 4) = (uint32_t)(uintptr_t)(v22);
      v22[2] = (uint32_t)(uintptr_t)(a2);
      v22[3] = 0;
      do
      {
        v25[4] = (uint32_t)(uintptr_t)(v22);
        v25 = (uint32_t *)v25[2];
      }
      while ( a2 != v25 );
      *(uint32_t *)(a1[4] + 8) = (uint32_t)(uintptr_t)(a1);
    }
    result = 1;
    if ( v11 == 0 )
    {
      v18 = gameswf::malloc_internal(0x18u);
      result = 0;
      if ( v18 != 0 )
      {
        v19 = a1[5];
        v20 = *(int **)(v19 + 4);
        *(uint32_t *)(v18 + 4) = (uint32_t)(uintptr_t)(v20);
        *v20 = v18;
        *(uint32_t *)v18 = v19;
        *(uint32_t *)(v19 + 4) = v18;
        *(uint32_t *)(v18 + 8) = (uint32_t)(uintptr_t)(a2);
        *(uint32_t *)(v18 + 12) = 0;
        *(uint32_t *)(v18 + 16) = 0;
        *(uint8_t *)(v18 + 20) = 0;
        v21 = a2;
        *(uint8_t *)(v18 + 21) = *(uint8_t *)(v19 + 21);
        do
        {
          v21[5] = v18;
          v21 = (uint32_t *)v21[3];
        }
        while ( a2 != v21 );
        *(uint32_t *)(a1[5] + 8) = (uint32_t)(uintptr_t)(a1);
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gl_meshDelete  (binary VA: 0x1193e20)
// Original: __gl_meshDelete
// ----------------------------------------------------------------------------
int gl_meshDelete(gameswf::Self *a1)
{
  gameswf::Self *v1;
  uint32_t *v2;
  gameswf::Self *v3;
  gameswf::Self *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int result;
  int v19;
  int v20;
  int *v21;
  gameswf::Self *v22;
  gameswf::Self *v23;
  int v24;
  int v25;
  uint32_t *v26;
  int v27;
  gameswf::Self *v28;
  int v29;
  int v30;
  uint32_t *v31;
  int v32;
  gameswf::Self *v33;
  int v34;
  int v35;
  uint32_t *v36;
  int v37;
  int v38;

  v1 = a1;
  v38 = 0;
  v2 = *((uint32_t **)a1 + 1);
  v3 = *((gameswf::Self **)a1 + 5);
  v4 = (gameswf::Self *)v2[5];
  if ( v3 != v4 )
  {
    v5 = *((uint32_t *)v3 + 2);
    v6 = v5;
    do
    {
      *(uint32_t *)(v6 + 20) = (uint32_t)(uintptr_t)(v4);
      v6 = *(uint32_t *)(v6 + 12);
    }
    while ( v5 != v6 );
    v7 = *((uint32_t **)v3 + 1);
    v8 = *(uint32_t *)v3;
    *(uint32_t *)(v8 + 4) = (uint32_t)(uintptr_t)(v7);
    *v7 = v8;
    gameswf::free_internal(v3);
    v38 = 1;
  }
  if ( *((gameswf::Self **)a1 + 2) == a1 )
  {
    v23 = *((gameswf::Self **)a1 + 4);
    v24 = *((uint32_t *)v23 + 2);
    v25 = v24;
    do
    {
      *(uint32_t *)(v25 + 16) = 0;
      v25 = *(uint32_t *)(v25 + 8);
    }
    while ( v24 != v25 );
    v26 = *((uint32_t **)v23 + 1);
    v27 = *(uint32_t *)v23;
    *(uint32_t *)(v27 + 4) = (uint32_t)(uintptr_t)(v26);
    *v26 = v27;
    gameswf::free_internal(v23);
  }
  else
  {
    *(uint32_t *)(*(uint32_t *)(*((uint32_t *)a1 + 1) + 20) + 8) = *(uint32_t *)(*((uint32_t *)a1 + 1) + 12);
    *(uint32_t *)(*((uint32_t *)a1 + 4) + 8) = *((uint32_t *)a1 + 2);
    v9 = *((uint32_t *)a1 + 2);
    v10 = *(uint32_t *)(*((uint32_t *)a1 + 1) + 12);
    v11 = *(uint32_t *)(v10 + 8);
    *(uint32_t *)(*(uint32_t *)(v9 + 4) + 12) = v10;
    *(uint32_t *)(*(uint32_t *)(v11 + 4) + 12) = (uint32_t)(uintptr_t)(a1);
    *((uint32_t *)a1 + 2) = v11;
    *(uint32_t *)(v10 + 8) = v9;
    if ( v38 == 0 )
    {
      v19 = gameswf::malloc_internal(0x18u);
      result = 0;
      if ( v19 == 0 )
        return result;
      v20 = *((uint32_t *)a1 + 5);
      v21 = *(int **)(v20 + 4);
      *(uint32_t *)(v19 + 4) = (uint32_t)(uintptr_t)(v21);
      *v21 = v19;
      *(uint32_t *)v19 = v20;
      *(uint32_t *)(v20 + 4) = v19;
      *(uint32_t *)(v19 + 8) = (uint32_t)(uintptr_t)(a1);
      *(uint32_t *)(v19 + 12) = 0;
      *(uint32_t *)(v19 + 16) = 0;
      *(uint8_t *)(v19 + 20) = 0;
      v22 = a1;
      *(uint8_t *)(v19 + 21) = *(uint8_t *)(v20 + 21);
      do
      {
        *((uint32_t *)v22 + 5) = v19;
        v22 = *((gameswf::Self **)v22 + 3);
      }
      while ( a1 != v22 );
    }
  }
  v12 = (uint32_t *)v2[2];
  if ( v12 == v2 )
  {
    v28 = (gameswf::Self *)v2[4];
    v29 = *((uint32_t *)v28 + 2);
    v30 = v29;
    do
    {
      *(uint32_t *)(v30 + 16) = 0;
      v30 = *(uint32_t *)(v30 + 8);
    }
    while ( v29 != v30 );
    v31 = *((uint32_t **)v28 + 1);
    v32 = *(uint32_t *)v28;
    *(uint32_t *)(v32 + 4) = (uint32_t)(uintptr_t)(v31);
    *v31 = v32;
    gameswf::free_internal(v28);
    v33 = (gameswf::Self *)v12[5];
    v34 = *((uint32_t *)v33 + 2);
    v35 = v34;
    do
    {
      *(uint32_t *)(v35 + 20) = 0;
      v35 = *(uint32_t *)(v35 + 12);
    }
    while ( v34 != v35 );
    v36 = *((uint32_t **)v33 + 1);
    v37 = *(uint32_t *)v33;
    *(uint32_t *)(v37 + 4) = (uint32_t)(uintptr_t)(v36);
    *v36 = v37;
    gameswf::free_internal(v33);
  }
  else
  {
    *(uint32_t *)(*((uint32_t *)a1 + 5) + 8) = *(uint32_t *)(v2[1] + 12);
    *(uint32_t *)(v2[4] + 8) = v2[2];
    v13 = v2[2];
    v14 = *(uint32_t *)(v2[1] + 12);
    v15 = *(uint32_t *)(v14 + 8);
    *(uint32_t *)(*(uint32_t *)(v13 + 4) + 12) = v14;
    *(uint32_t *)(*(uint32_t *)(v15 + 4) + 12) = (uint32_t)(uintptr_t)(v2);
    v2[2] = v15;
    *(uint32_t *)(v14 + 8) = v13;
  }
  if ( (unsigned int)(uintptr_t)(a1) > *((uint32_t *)a1 + 1) )
    v1 = *((gameswf::Self **)a1 + 1);
  v16 = *(uint32_t *)v1;
  v17 = **((uint32_t **)v1 + 1);
  **(uint32_t **)(*(uint32_t *)v1 + 4) = v17;
  **(uint32_t **)(v17 + 4) = v16;
  gameswf::free_internal(v1);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gl_meshAddEdgeVertex  (binary VA: 0x1194040)
// Original: __gl_meshAddEdgeVertex
// ----------------------------------------------------------------------------
int gl_meshAddEdgeVertex(uint32_t *a1)
{
  int v1;
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v14;

  v1 = gameswf::malloc_internal(0x40u);
  v2 = (uint32_t *)v1;
  if ( v1 == 0 )
    return 0;
  v3 = v1 + 32;
  v14 = v1;
  v4 = (uint32_t *)a1[1];
  if ( a1 <= v4 )
    v4 = a1;
  v5 = *(uint32_t *)v4[1];
  v2[8] = v5;
  **(uint32_t **)(v5 + 4) = (uint32_t)(uintptr_t)(v2);
  *v2 = (uint32_t)(uintptr_t)(v4);
  *(uint32_t *)v4[1] = v3;
  v2[2] = (uint32_t)(uintptr_t)(v2);
  v2[1] = v3;
  v2[3] = v3;
  v2[4] = 0;
  v2[5] = 0;
  v2[7] = 0;
  v2[6] = 0;
  v2[9] = (uint32_t)(uintptr_t)(v2);
  v2[10] = v3;
  v2[11] = (uint32_t)(uintptr_t)(v2);
  v2[12] = 0;
  v2[13] = 0;
  v2[15] = 0;
  v2[14] = 0;
  v6 = a1[3];
  v7 = *(uint32_t *)(v6 + 8);
  *(uint32_t *)(v3 + 12) = v6;
  *(uint32_t *)(*(uint32_t *)(v7 + 4) + 12) = (uint32_t)(uintptr_t)(v2);
  v2[2] = v7;
  *(uint32_t *)(v6 + 8) = (uint32_t)(uintptr_t)(v2);
  v2[4] = *(uint32_t *)(a1[1] + 16);
  v8 = (uint32_t *)gameswf::malloc_internal(0x3Cu);
  if ( v8 == nullptr )
    return 0;
  v9 = v2[4];
  v10 = *(uint32_t **)(v9 + 4);
  v8[1] = (uint32_t)(uintptr_t)(v10);
  *v10 = (uint32_t)(uintptr_t)(v8);
  *v8 = v9;
  *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(v8);
  v8[2] = v3;
  v8[3] = 0;
  v11 = v3;
  do
  {
    *(uint32_t *)(v11 + 16) = (uint32_t)(uintptr_t)(v8);
    v11 = *(uint32_t *)(v11 + 8);
  }
  while ( v11 != v3 );
  v12 = a1[5];
  v2[13] = v12;
  v2[5] = v12;
  return v14;
}

// ----------------------------------------------------------------------------
// Function: gl_meshSplitEdge  (binary VA: 0x1194170)
// Original: __gl_meshSplitEdge
// ----------------------------------------------------------------------------
uint32_t * gl_meshSplitEdge(uint32_t *a1)
{
  int v1;
  int v2;
  uint32_t *result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v1 = gl_meshAddEdgeVertex(a1);
  if ( v1 == 0 )
    return nullptr;
  v2 = a1[1];
  result = *(uint32_t **)(v1 + 4);
  v9 = *(uint32_t *)(*(uint32_t *)(v2 + 4) + 12);
  v8 = *(uint32_t *)(v2 + 8);
  v4 = *(uint32_t *)(v9 + 8);
  *(uint32_t *)(*(uint32_t *)(v8 + 4) + 12) = v9;
  *(uint32_t *)(*(uint32_t *)(v4 + 4) + 12) = v2;
  *(uint32_t *)(v2 + 8) = v4;
  *(uint32_t *)(v9 + 8) = v8;
  v5 = a1[1];
  v6 = result[2];
  v7 = *(uint32_t *)(v5 + 8);
  *(uint32_t *)(*(uint32_t *)(v7 + 4) + 12) = (uint32_t)(uintptr_t)(result);
  *(uint32_t *)(*(uint32_t *)(v6 + 4) + 12) = v5;
  *(uint32_t *)(v5 + 8) = v6;
  result[2] = v7;
  *(uint32_t *)(a1[1] + 16) = result[4];
  *(uint32_t *)(*(uint32_t *)(result[1] + 16) + 8) = result[1];
  *(uint32_t *)(result[1] + 20) = *(uint32_t *)(a1[1] + 20);
  result[7] = a1[7];
  *(uint32_t *)(result[1] + 28) = *(uint32_t *)(a1[1] + 28);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gl_meshConnect  (binary VA: 0x1194250)
// Original: __gl_meshConnect
// ----------------------------------------------------------------------------
gameswf::Self * gl_meshConnect(uint32_t *a1, uint32_t *a2)
{
  int v2;
  gameswf::Self *v3;
  int v4;
  uint32_t *v5;
  int v6;
  gameswf::Self *v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v18;
  int v19;
  int *v20;
  gameswf::Self *v21;
  gameswf::Self *v22;
  gameswf::Self *v23;
  gameswf::Self *v24;
  int v25;
  int v26;

  v2 = gameswf::malloc_internal(0x40u);
  v3 = (gameswf::Self *)v2;
  if ( v2 != 0 )
  {
    v4 = v2 + 32;
    v25 = v2;
    v5 = (uint32_t *)a1[1];
    if ( a1 <= v5 )
      v5 = a1;
    v6 = *(uint32_t *)v5[1];
    *((uint32_t *)v3 + 8) = v6;
    **(uint32_t **)(v6 + 4) = (uint32_t)(uintptr_t)(v3);
    *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v5);
    *(uint32_t *)v5[1] = v4;
    *((uint32_t *)v3 + 1) = v4;
    *((uint32_t *)v3 + 2) = (uint32_t)(uintptr_t)(v3);
    *((uint32_t *)v3 + 3) = v4;
    *((uint32_t *)v3 + 4) = 0;
    *((uint32_t *)v3 + 5) = 0;
    *((uint32_t *)v3 + 7) = 0;
    *((uint32_t *)v3 + 6) = 0;
    *((uint32_t *)v3 + 9) = (uint32_t)(uintptr_t)(v3);
    *((uint32_t *)v3 + 10) = v4;
    *((uint32_t *)v3 + 11) = (uint32_t)(uintptr_t)(v3);
    *((uint32_t *)v3 + 12) = 0;
    *((uint32_t *)v3 + 13) = 0;
    *((uint32_t *)v3 + 15) = 0;
    *((uint32_t *)v3 + 14) = 0;
    v22 = (gameswf::Self *)a2[5];
    v7 = (gameswf::Self *)a1[5];
    if ( v22 == v7 )
    {
      v12 = v4;
      v23 = v3;
      v26 = 0;
    }
    else
    {
      v8 = *((uint32_t *)v22 + 2);
      v9 = v8;
      do
      {
        *(uint32_t *)(v9 + 20) = (uint32_t)(uintptr_t)(v7);
        v9 = *(uint32_t *)(v9 + 12);
      }
      while ( v8 != v9 );
      v10 = *((uint32_t **)v22 + 1);
      v11 = *(uint32_t *)v22;
      *(uint32_t *)(v11 + 4) = (uint32_t)(uintptr_t)(v10);
      *v10 = v11;
      gameswf::free_internal(v22);
      v26 = 1;
      v23 = *((gameswf::Self **)v3 + 2);
      v12 = *((uint32_t *)v23 + 1);
    }
    v13 = a1[3];
    v14 = *(uint32_t *)(v13 + 8);
    *(uint32_t *)(v12 + 12) = v13;
    *(uint32_t *)(*(uint32_t *)(v14 + 4) + 12) = (uint32_t)(uintptr_t)(v3);
    *((uint32_t *)v3 + 2) = v14;
    *(uint32_t *)(v13 + 8) = (uint32_t)(uintptr_t)(v23);
    v24 = *((gameswf::Self **)v3 + 10);
    v15 = a2[2];
    *(uint32_t *)(*((uint32_t *)v24 + 1) + 12) = (uint32_t)(uintptr_t)(a2);
    *(uint32_t *)(*(uint32_t *)(v15 + 4) + 12) = v4;
    *((uint32_t *)v3 + 10) = v15;
    a2[2] = (uint32_t)(uintptr_t)(v24);
    *((uint32_t *)v3 + 4) = *(uint32_t *)(a1[1] + 16);
    *((uint32_t *)v3 + 12) = a2[4];
    v16 = a1[5];
    *((uint32_t *)v3 + 13) = v16;
    *((uint32_t *)v3 + 5) = v16;
    *(uint32_t *)(a1[5] + 8) = v4;
    if ( v26 != 0 )
      return (gameswf::Self *)v25;
    v18 = gameswf::malloc_internal(0x18u);
    if ( v18 != 0 )
    {
      v19 = a1[5];
      v20 = *(int **)(v19 + 4);
      *(uint32_t *)(v18 + 4) = (uint32_t)(uintptr_t)(v20);
      *v20 = v18;
      *(uint32_t *)v18 = v19;
      *(uint32_t *)(v19 + 4) = v18;
      *(uint32_t *)(v18 + 8) = (uint32_t)(uintptr_t)(v3);
      *(uint32_t *)(v18 + 12) = 0;
      *(uint32_t *)(v18 + 16) = 0;
      *(uint8_t *)(v18 + 20) = 0;
      *(uint8_t *)(v18 + 21) = *(uint8_t *)(v19 + 21);
      v21 = v3;
      do
      {
        *((uint32_t *)v21 + 5) = v18;
        v21 = *((gameswf::Self **)v21 + 3);
      }
      while ( v21 != v3 );
      return v21;
    }
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: gl_meshZapFace  (binary VA: 0x1194460)
// Original: __gl_meshZapFace
// ----------------------------------------------------------------------------
int gl_meshZapFace(gameswf::Self *a1)
{
  gameswf::Self *i;
  int v2;
  gameswf::Self *v3;
  gameswf::Self *v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  gameswf::Self *v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  gameswf::Self *v17;
  int v18;
  int v19;
  uint32_t *v20;
  int v21;
  gameswf::Self *v22;
  int v23;
  int v24;
  uint32_t *v25;
  int v26;
  int v27;
  gameswf::Self *v28;
  int v29;

  v28 = *((gameswf::Self **)a1 + 2);
  for ( i = *((gameswf::Self **)v28 + 3); ; i = v3 )
  {
    v2 = *((uint32_t *)i + 1);
    *((uint32_t *)i + 5) = 0;
    v3 = *((gameswf::Self **)i + 3);
    if ( *(uint32_t *)(v2 + 20) == 0 )
      break;
    if ( i == v28 )
      goto LABEL_12;
LABEL_3:
    ;
  }
  v4 = *((gameswf::Self **)i + 2);
  if ( i == v4 )
  {
    v17 = *((gameswf::Self **)i + 4);
    v18 = *((uint32_t *)v17 + 2);
    v19 = v18;
    do
    {
      *(uint32_t *)(v19 + 16) = 0;
      v19 = *(uint32_t *)(v19 + 8);
    }
    while ( v18 != v19 );
    v20 = *((uint32_t **)v17 + 1);
    v21 = *(uint32_t *)v17;
    *(uint32_t *)(v21 + 4) = (uint32_t)(uintptr_t)(v20);
    *v20 = v21;
    gameswf::free_internal(v17);
  }
  else
  {
    *(uint32_t *)(*((uint32_t *)i + 4) + 8) = (uint32_t)(uintptr_t)(v4);
    v5 = *((uint32_t *)i + 2);
    v6 = *(uint32_t *)(*((uint32_t *)i + 1) + 12);
    v7 = *(uint32_t *)(v6 + 8);
    *(uint32_t *)(*(uint32_t *)(v5 + 4) + 12) = v6;
    *(uint32_t *)(*(uint32_t *)(v7 + 4) + 12) = (uint32_t)(uintptr_t)(i);
    *((uint32_t *)i + 2) = v7;
    *(uint32_t *)(v6 + 8) = v5;
  }
  v8 = *((uint32_t **)i + 1);
  v9 = (uint32_t *)v8[2];
  if ( v9 == v8 )
  {
    v22 = (gameswf::Self *)v9[4];
    v23 = *((uint32_t *)v22 + 2);
    v24 = v23;
    do
    {
      *(uint32_t *)(v24 + 16) = 0;
      v24 = *(uint32_t *)(v24 + 8);
    }
    while ( v23 != v24 );
    v25 = *((uint32_t **)v22 + 1);
    v26 = *(uint32_t *)v22;
    *(uint32_t *)(v26 + 4) = (uint32_t)(uintptr_t)(v25);
    *v25 = v26;
    gameswf::free_internal(v22);
  }
  else
  {
    *(uint32_t *)(v8[4] + 8) = (uint32_t)(uintptr_t)(v9);
    v29 = *(uint32_t *)(v8[1] + 12);
    v27 = v8[2];
    v10 = *(uint32_t *)(v29 + 8);
    *(uint32_t *)(*(uint32_t *)(v27 + 4) + 12) = v29;
    *(uint32_t *)(*(uint32_t *)(v10 + 4) + 12) = (uint32_t)(uintptr_t)(v8);
    v8[2] = v10;
    *(uint32_t *)(v29 + 8) = v27;
  }
  v11 = *((gameswf::Self **)i + 1);
  if ( i <= v11 )
    v11 = i;
  v12 = *(uint32_t *)v11;
  v13 = **((uint32_t **)v11 + 1);
  **(uint32_t **)(*(uint32_t *)v11 + 4) = v13;
  **(uint32_t **)(v13 + 4) = v12;
  gameswf::free_internal(v11);
  if ( i != v28 )
    goto LABEL_3;
LABEL_12:
  v14 = *((uint32_t **)a1 + 1);
  v15 = *(uint32_t *)a1;
  *(uint32_t *)(v15 + 4) = (uint32_t)(uintptr_t)(v14);
  *v14 = v15;
  return gameswf::free_internal(a1);
}

// ----------------------------------------------------------------------------
// Function: gl_meshNewMesh  (binary VA: 0x1194600)
// Original: __gl_meshNewMesh
// ----------------------------------------------------------------------------
int gl_meshNewMesh()
{
  int result;

  result = gameswf::malloc_internal(0x94u);
  if ( result != 0 )
  {
    *(uint32_t *)(result + 4) = result;
    *(uint32_t *)result = result;
    *(uint32_t *)(result + 8) = 0;
    *(uint32_t *)(result + 12) = 0;
    *(uint32_t *)(result + 64) = result + 60;
    *(uint32_t *)(result + 60) = result + 60;
    *(uint32_t *)(result + 68) = 0;
    *(uint32_t *)(result + 72) = 0;
    *(uint32_t *)(result + 76) = 0;
    *(uint8_t *)(result + 80) = 0;
    *(uint8_t *)(result + 81) = 0;
    *(uint32_t *)(result + 84) = result + 84;
    *(uint32_t *)(result + 88) = result + 116;
    *(uint32_t *)(result + 92) = 0;
    *(uint32_t *)(result + 96) = 0;
    *(uint32_t *)(result + 100) = 0;
    *(uint32_t *)(result + 104) = 0;
    *(uint32_t *)(result + 112) = 0;
    *(uint32_t *)(result + 108) = 0;
    *(uint32_t *)(result + 116) = result + 116;
    *(uint32_t *)(result + 120) = result + 84;
    *(uint32_t *)(result + 124) = 0;
    *(uint32_t *)(result + 128) = 0;
    *(uint32_t *)(result + 132) = 0;
    *(uint32_t *)(result + 136) = 0;
    *(uint32_t *)(result + 144) = 0;
    *(uint32_t *)(result + 140) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gl_meshUnion  (binary VA: 0x11946f0)
// Original: __gl_meshUnion
// ----------------------------------------------------------------------------
uint32_t ** gl_meshUnion(uint32_t **a1, gameswf::Self *a2)
{
  gameswf::Self *v2;
  gameswf::Self *v3;

  v2 = *((gameswf::Self **)a2 + 15);
  if ( v2 != (gameswf::Self *)((char *)a2 + 60) )
  {
    *a1[16] = (uint32_t)(uintptr_t)(v2);
    *(uint32_t *)(*((uint32_t *)a2 + 15) + 4) = (uint32_t)(uintptr_t)(a1[16]);
    **((uint32_t **)a2 + 16) = (uint32_t)(uintptr_t)(a1 + 15);
    a1[16] = *((uint32_t **)a2 + 16);
  }
  if ( *(gameswf::Self **)a2 != a2 )
  {
    *a1[1] = *(uint32_t *)a2;
    *(uint32_t *)(*(uint32_t *)a2 + 4) = (uint32_t)(uintptr_t)(a1[1]);
    **((uint32_t **)a2 + 1) = (uint32_t)(uintptr_t)(a1);
    a1[1] = *((uint32_t **)a2 + 1);
  }
  v3 = *((gameswf::Self **)a2 + 21);
  if ( v3 != (gameswf::Self *)((char *)a2 + 84) )
  {
    **(uint32_t **)(*a1[22] + 4) = (uint32_t)(uintptr_t)(v3);
    **(uint32_t **)(*((uint32_t *)a2 + 21) + 4) = *a1[22];
    **(uint32_t **)(**((uint32_t **)a2 + 22) + 4) = (uint32_t)(uintptr_t)(a1 + 21);
    *a1[22] = **((uint32_t **)a2 + 22);
  }
  gameswf::free_internal(a2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gl_meshDeleteMesh  (binary VA: 0x11947a0)
// Original: __gl_meshDeleteMesh
// ----------------------------------------------------------------------------
int gl_meshDeleteMesh(gameswf::Self *a1)
{
  gameswf::Self *v1;
  gameswf::Self *v2;
  gameswf::Self *v3;
  gameswf::Self *v4;
  gameswf::Self *v5;
  gameswf::Self *v6;

  v1 = *((gameswf::Self **)a1 + 15);
  if ( v1 != (gameswf::Self *)((char *)a1 + 60) )
  {
    while ( 1 )
    {
      v2 = *(gameswf::Self **)v1;
      gameswf::free_internal(v1);
      if ( v2 == (gameswf::Self *)((char *)a1 + 60) )
        break;
      v1 = v2;
    }
  }
  v3 = *(gameswf::Self **)a1;
  if ( *(gameswf::Self **)a1 != a1 )
  {
    while ( 1 )
    {
      v4 = *(gameswf::Self **)v3;
      gameswf::free_internal(v3);
      if ( v4 == a1 )
        break;
      v3 = v4;
    }
  }
  v5 = *((gameswf::Self **)a1 + 21);
  if ( v5 != (gameswf::Self *)((char *)a1 + 84) )
  {
    while ( 1 )
    {
      v6 = *(gameswf::Self **)v5;
      gameswf::free_internal(v5);
      if ( v6 == (gameswf::Self *)((char *)a1 + 84) )
        break;
      v5 = v6;
    }
  }
  return gameswf::free_internal(a1);
}

// ----------------------------------------------------------------------------
// Function: gl_projectPolygon  (binary VA: 0x1194850)
// Original: __gl_projectPolygon
// ----------------------------------------------------------------------------
int gl_projectPolygon(GLUtesselator *a1)
{
  double v1; // xmm3_8
  int *v2;
  __m128d v3;
  double v4; // xmm3_8
  double v5; // xmm6_8
  double v6; // xmm4_8
  double v7; // xmm3_8
  int v8;
  int v9;
  double v10; // xmm3_8
  int result;
  double v12; // xmm4_8
  double v13; // xmm1_8
  double v14; // xmm3_8
  int *v15;
  double v16; // xmm3_8
  int v17;
  int v18;
  int v19;
  double v20; // xmm3_8
  int *v21;
  __m128d v22;
  bool v23;
  __m128d v24;
  int *v25;
  int *v26;
  double v27; // xmm6_8
  __m128d v28;
  __m128d v29;
  int *v30;
  __m128d v31;
  bool v32; // cc
  __m128d v33;
  __m128d v34;
  __m128d v35;
  __m128d v36;
  __m128d v37;
  __m128d v38;
  double v39; // xmm1_8
  double v40; // xmm1_8
  __m128d v41;
  int v42;
  double v43; // xmm2_8
  __m128d v44;
  int64_t v45; // xmm6_8
  double v46; // xmm3_8
  double v47; // xmm1_8
  double v48; // xmm2_8
  double *v49;
  double *v50;
  double v51; // xmm3_8
  double v52; // xmm7_8
  double v53; // xmm4_8
  double v54; // xmm1_8
  double v55; // xmm5_8
  double v56; // xmm4_8
  double v57; // xmm6_8
  double v58; // xmm1_8
  double v59; // xmm2_8
  double v60; // xmm3_8
  double v61; // xmm4_8
  bool v62;
  int v63;
  double v64;
  double v65;
  double v66;
  double v67;
  int *v68;
  double v69;
  double v70;
  double v71;
  int v72;
  double v73;
  double v74;
  int v75;
  int *v76;
  double i;
  double v78;
  bool v79;
  double v80;
  double v81;
  uint32_t v82[4];
  uint32_t v83[4];
  double v84;
  double v85;
  double v86;
  uint64_t v87;
  double v88;
  uint64_t v89;
  int64_t v90;
  int64_t v91;
  double v92;
  double v93[5];

  v1 = *((double *)a1 + 3);
  v2 = *((int **)a1 + 2);
  g4_m128_lane_ref<double>(v3, 0) = *((double *)a1 + 4);
  v84 = *((double *)a1 + 2);
  v85 = v1;
  v86 = g4_m128_lane_ref<double>(v3, 0);
  if ( v84 != 0.0 )
  {
    v4 = fabs(v1);
    v5 = *(&v84 + (v4 > fabs(v84)));
    v6 = fabs(g4_m128_lane_ref<double>(v3, 0));
    v79 = v4 > fabs(v84);
    v75 = v79;
    v7 = fabs(v5);
    v72 = 0;
    goto LABEL_3;
  }
  if ( v1 != 0.0 )
  {
    v20 = fabs(v1);
    v6 = fabs(g4_m128_lane_ref<double>(v3, 0));
    v5 = *(&v84 + (v20 > 0.0));
    v79 = v20 > 0.0;
    v75 = v79;
    v7 = fabs(v5);
    v72 = 0;
    goto LABEL_3;
  }
  if ( g4_m128_lane_ref<double>(v3, 0) != 0.0 )
  {
    v5 = v84;
    v79 = false;
    v75 = 0;
    v72 = 0;
    if ( fabs(g4_m128_lane_ref<double>(v3, 0)) <= fabs(v84) )
      goto LABEL_4;
LABEL_19:
    v9 = 1;
    v8 = 0;
    v75 = 2;
    goto LABEL_5;
  }
  v21 = (int *)*v2;
  v22 = g4_m128_from<__m128d>(0xDF238D352E5096AFLL);
  v23 = v2 == (int *)*v2;
  v24 = g4_to_m128d(0x5F238D352E5096AFuLL);
  v89 = 0xDF238D352E5096AFLL;
  v88 = -2.0e150;
  v87 = 0xDF238D352E5096AFLL;
  v92 = 2.0e150;
  v91 = 0x5F238D352E5096AFLL;
  v90 = 0x5F238D352E5096AFLL;
  if ( v23 )
  {
    v47 = -2.0e150;
    v42 = 0;
    v48 = 2.0e150;
  }
  else
  {
    v68 = v21;
    v25 = (int *)v83[0];
    v26 = v21;
    v27 = 2.0e150;
    v80 = 2.0e150;
    v28 = g4_m128_from<__m128d>(0xDF238D352E5096AFLL);
    v70 = -2.0e150;
    g4_m128_lane_ref<double>(v29, 0) = 2.0e150;
    v73 = -2.0e150;
    v30 = (int *)v82[0];
    for ( i = 2.0e150; ; i = v80 )
    {
      v31 = g4_to_m128d(*((uint64_t *)v26 + 2));
      if ( g4_m128_lane_ref<double>(v29, 0) > g4_m128_lane_ref<double>(v31, 0) )
        v25 = v26;
      v32 = g4_m128_lane_ref<double>(v31, 0) <= g4_m128_lane_ref<double>(v28, 0);
      v33 = _mm_cmpge_sd(v28, v31);
      v34 = _mm_cmpge_sd(v31, v29);
      v35 = _mm_and_pd(v24, v34);
      v36 = _mm_andn_pd(v34, v31);
      v37 = _mm_and_pd(v22, v33);
      v38 = _mm_andn_pd(v33, v31);
      if ( !v32 )
        v30 = v26;
      v39 = *((double *)v26 + 3);
      v24 = _mm_or_pd(v36, v35);
      v22 = _mm_or_pd(v38, v37);
      if ( i > v39 )
      {
        v83[1] = (uint32_t)(uintptr_t)(v26);
        v80 = v39;
      }
      if ( v39 > v73 )
      {
        v88 = v39;
        v82[1] = (uint32_t)(uintptr_t)(v26);
      }
      v40 = *((double *)v26 + 4);
      if ( v27 > v40 )
      {
        v92 = *((double *)v26 + 4);
        v83[2] = (uint32_t)(uintptr_t)(v26);
      }
      if ( v40 > v70 )
      {
        v89 = *(uint64_t *)&v40;
        v82[2] = (uint32_t)(uintptr_t)(v26);
        v70 = v40;
      }
      v26 = (int *)*v26;
      if ( v2 == v26 )
        break;
      v28 = v22;
      g4_m128_lane_ref<double>(v29, 0) = g4_m128_lane_ref<double>(v24, 0);
      v73 = v88;
      v27 = v92;
    }
    v91 = *(uint64_t *)&v80;
    v82[0] = (uint32_t)(uintptr_t)(v30);
    v87 = *(uint64_t *)&g4_m128_lane_ref<double>(v22, 0);
    v83[0] = (uint32_t)(uintptr_t)(v25);
    v90 = *(uint64_t *)&g4_m128_lane_ref<double>(v24, 0);
    v21 = v68;
    v42 = v88 - v80 > g4_m128_lane_ref<double>(v22, 0) - g4_m128_lane_ref<double>(v24, 0);
    v43 = *((double *)&v90 + v42);
    v44 = g4_to_m128d(*(&v87 + v42));
    g4_m128_lane_ref<double>(v44, 0) = g4_m128_lane_ref<double>(v44, 0) - v43;
    v45 = *(&v87 + v42);
    if ( v70 - v92 > g4_m128_lane_ref<double>(v44, 0) )
      v42 = 2;
    g4_m128_lane_ref<double>(v41, 0) = v70 - v92;
    v46 = g4_m128_lane<double>(_mm_cmpge_sd(v44, v41), 0);
    *(uint64_t *)&v47 = ~*(uint64_t *)&v46 & *(uint64_t *)&v70 | v45 & *(uint64_t *)&v46;
    *(uint64_t *)&v48 = ~*(uint64_t *)&v46 & *(uint64_t *)&v92 | *(uint64_t *)&v43 & *(uint64_t *)&v46;
  }
  if ( v48 < v47 )
  {
    v49 = (double *)v83[v42];
    v50 = (double *)v82[v42];
    v51 = v50[3];
    v52 = v50[4];
    v71 = v50[2];
    v53 = v49[3] - v51;
    v54 = v49[4] - v52;
    v81 = v49[2] - v71;
    v93[0] = v81;
    v69 = v51;
    v78 = v53;
    v93[1] = v53;
    v64 = v54;
    v93[2] = v54;
    if ( v2 == v21 )
      goto LABEL_52;
    v55 = v54;
    v66 = v84;
    v67 = v85;
    v74 = 0.0;
    v65 = v86;
    do
    {
      v56 = *((double *)v21 + 3) - v69;
      v57 = *((double *)v21 + 4) - v52;
      v58 = *((double *)v21 + 2) - v71;
      v59 = v78 * v57 - v56 * v55;
      v60 = v58 * v55 - v57 * v81;
      v61 = v56 * v81 - v58 * v78;
      if ( v60 * v60 + v59 * v59 + v61 * v61 > v74 )
      {
        v65 = v61;
        v67 = v58 * v55 - v57 * v81;
        v66 = v59;
        v74 = v60 * v60 + v59 * v59 + v61 * v61;
      }
      v21 = (int *)*v21;
    }
    while ( v2 != v21 );
    g4_m128_lane_ref<double>(v3, 0) = v65;
    v84 = v66;
    v85 = v67;
    v86 = v65;
    if ( v74 <= 0.0 )
    {
LABEL_52:
      v72 = 1;
      v63 = fabs(v78) > fabs(v81);
      if ( fabs(v64) > fabs(v93[v63]) )
        v63 = 2;
      v86 = 0.0;
      v85 = 0.0;
      v84 = 0.0;
      *(&v84 + v63) = 1.0;
      g4_m128_lane_ref<double>(v3, 0) = v86;
      v79 = fabs(v85) > fabs(v84);
      v5 = *(&v84 + v79);
      v6 = fabs(v86);
      v75 = v79;
      v7 = fabs(v5);
    }
    else
    {
      v62 = fabs(v67) > fabs(v66);
      v5 = *(&v84 + v62);
      v6 = fabs(v65);
      v79 = v62;
      v75 = v62;
      v7 = fabs(v5);
      v72 = 1;
    }
LABEL_3:
    if ( v6 <= v7 )
    {
LABEL_4:
      g4_m128_lane_ref<double>(v3, 0) = v5;
      v8 = v79 + 1 - 3 * ((uint64_t)(1431655766LL * (v79 + 1)) >> 32);
      v9 = v79 + 2 - 3 * ((uint64_t)(1431655766LL * (v79 + 2)) >> 32);
      goto LABEL_5;
    }
    goto LABEL_19;
  }
  v72 = 1;
  v84 = 0.0;
  g4_m128_lane_ref<double>(v3, 0) = 1.0;
  v85 = 0.0;
  v9 = 1;
  v86 = 1.0;
  v8 = 0;
  v75 = 2;
LABEL_5:
  *((uint64_t *)a1 + v75 + 5) = 0;
  *((uint64_t *)a1 + v8 + 5) = 0x3FF0000000000000LL;
  *((uint64_t *)a1 + v9 + 5) = 0;
  *((uint64_t *)a1 + v75 + 8) = 0;
  *((uint64_t *)a1 + v8 + 8) = 0x8000000000000000LL;
  v10 = g4_m128_lane<double>(_mm_cmplt_sd(g4_m128_from<__m128d>(0LL), v3), 0);
  *((uint64_t *)a1 + v9 + 8) = ~*(uint64_t *)&v10 & 0xBFF0000000000000LL | *(uint64_t *)&v10 & 0x3FF0000000000000LL;
  for ( result = *v2; v2 != (int *)result; result = *(uint32_t *)result )
  {
    v12 = *(double *)(result + 16);
    v13 = *(double *)(result + 24);
    v14 = *(double *)(result + 32);
    *(double *)(result + 40) = *((double *)a1 + 6) * v13 + *((double *)a1 + 5) * v12 + *((double *)a1 + 7) * v14;
    *(double *)(result + 48) = v13 * *((double *)a1 + 9) + v12 * *((double *)a1 + 8) + v14 * *((double *)a1 + 10);
  }
  if ( v72 != 0 )
  {
    v76 = *((int **)a1 + 2);
    result = (int)(uintptr_t)(v76 + 15);
    v15 = (int *)v76[15];
    if ( v76 + 15 != v15 )
    {
      v16 = 0.0;
      do
      {
        v17 = v15[2];
        result = *(uint32_t *)(v17 + 28);
        if ( result > 0 )
        {
          result = v15[2];
          do
          {
            v18 = *(uint32_t *)(result + 4);
            v19 = *(uint32_t *)(result + 16);
            result = *(uint32_t *)(result + 12);
            v16 = v16
                + (*(double *)(v19 + 40) - *(double *)(*(uint32_t *)(v18 + 16) + 40))
                * (*(double *)(*(uint32_t *)(v18 + 16) + 48) + *(double *)(v19 + 48));
          }
          while ( v17 != result );
        }
        v15 = (int *)*v15;
      }
      while ( v76 + 15 != v15 );
      if ( v16 < 0.0 )
      {
        for ( result = *v76; v76 != (int *)result; result = *(uint32_t *)result )
          *(double *)(result + 48) = -*(double *)(result + 48);
        *((double *)a1 + 8) = -*((double *)a1 + 8);
        *((double *)a1 + 9) = -*((double *)a1 + 9);
        *((double *)a1 + 10) = -*((double *)a1 + 10);
      }
    }
  }
  return result;
}


