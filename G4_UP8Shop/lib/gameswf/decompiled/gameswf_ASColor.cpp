#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASColor.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASColor::getTransform  (binary VA: 0x1127470)
// Original: gameswf::ASColor::getTransform
// ----------------------------------------------------------------------------
void gameswf::ASColor::getTransform(int a1)
{
  uint32_t *v1;
  int v2;
  gameswf::Self *v3;
  float *v4;
  __m128d v5;
  __m128d v6;
  double v7; // xmm4_8
  __m128d v8;
  int v9;
  __m128d v10;
  __m128d v11;
  int v12;
  __m128d v13;
  double v14; // xmm4_8
  __m128d v15;
  double v16; // xmm3_8
  __m128d v17;
  int v18;
  gameswf::Player::Self *v19;
  gameswf::Self *v20;
  gameswf::ASObject::Self *v21;
  gameswf::Self *v22;
  int StandardMemberID;
  gameswf::Self *v24;
  int v25;
  gameswf::Self *v26;
  int v27;
  gameswf::Self *v28;
  int v29;
  gameswf::Self *v30;
  int v31;
  gameswf::Self *v32;
  int v33;
  gameswf::Self *v34;
  int v35;
  gameswf::Self *v36;
  int v37;
  bool v38;
  typedef uint8_t _g4_t_v39;
  typedef uint8_t _g4_t_v40;
  typedef uint8_t _g4_t_v41;
  typedef uint8_t _g4_t_v42;
  typedef uint16_t _g4_t_v43[6];
  typedef uint16_t _g4_t_v44[6];
  typedef uint16_t _g4_t_v45[6];
  typedef uint16_t _g4_t_v46[6];
  typedef uint16_t _g4_t_v47[6];
  typedef uint16_t _g4_t_v48[6];
  typedef uint16_t _g4_t_v49[6];
  typedef uint16_t _g4_t_v50[6];
  typedef char _g4_t_v51;
  typedef char _g4_t_v52;
  typedef gameswf::Self *_g4_t_v53;
  typedef int16_t _g4_t_v54;
  typedef char _g4_t_v55;
  typedef char _g4_t_v56;
  typedef char _g4_t_v57;
  typedef char _g4_t_v58;
  typedef gameswf::Self *_g4_t_v59;
  typedef int16_t _g4_t_v60;
  typedef char _g4_t_v61;
  typedef char _g4_t_v62;
  typedef char _g4_t_v63;
  typedef char _g4_t_v64;
  typedef gameswf::Self *_g4_t_v65;
  typedef int16_t _g4_t_v66;
  typedef char _g4_t_v67;
  typedef char _g4_t_v68;
  typedef char _g4_t_v69;
  typedef char _g4_t_v70;
  typedef gameswf::Self *_g4_t_v71;
  typedef int16_t _g4_t_v72;
  typedef char _g4_t_v73;
  typedef char _g4_t_v74;
  typedef char _g4_t_v75;
  typedef char _g4_t_v76;
  typedef gameswf::Self *_g4_t_v77;
  typedef int16_t _g4_t_v78;
  typedef char _g4_t_v79;
  typedef char _g4_t_v80;
  typedef char _g4_t_v81;
  typedef char _g4_t_v82;
  typedef gameswf::Self *_g4_t_v83;
  typedef int16_t _g4_t_v84;
  typedef char _g4_t_v85;
  typedef char _g4_t_v86;
  typedef char _g4_t_v87;
  typedef char _g4_t_v88;
  typedef gameswf::Self *_g4_t_v89;
  typedef int16_t _g4_t_v90;
  typedef char _g4_t_v91;
  typedef char _g4_t_v92;
  typedef char _g4_t_v93;
  typedef char _g4_t_v94;
  typedef gameswf::Self *_g4_t_v95;
  typedef int16_t _g4_t_v96;
  typedef char _g4_t_v97;
  typedef char _g4_t_v98;
  enum : size_t {
    _g4_s0 = 496u,
    _g4_s1 = (0u + sizeof(_g4_t_v39)) > _g4_s0 ? (0u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v40)) > _g4_s1 ? (16u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v41)) > _g4_s2 ? (32u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v42)) > _g4_s3 ? (48u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v43)) > _g4_s4 ? (64u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v44)) > _g4_s5 ? (76u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (88u + sizeof(_g4_t_v45)) > _g4_s6 ? (88u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (100u + sizeof(_g4_t_v46)) > _g4_s7 ? (100u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v47)) > _g4_s8 ? (112u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (124u + sizeof(_g4_t_v48)) > _g4_s9 ? (124u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (136u + sizeof(_g4_t_v49)) > _g4_s10 ? (136u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (148u + sizeof(_g4_t_v50)) > _g4_s11 ? (148u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (160u + sizeof(_g4_t_v51)) > _g4_s12 ? (160u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (161u + sizeof(_g4_t_v52)) > _g4_s13 ? (161u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (172u + sizeof(_g4_t_v53)) > _g4_s14 ? (172u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (176u + sizeof(_g4_t_v54)) > _g4_s15 ? (176u + sizeof(_g4_t_v54)) : _g4_s15,
    _g4_s17 = (178u + sizeof(_g4_t_v55)) > _g4_s16 ? (178u + sizeof(_g4_t_v55)) : _g4_s16,
    _g4_s18 = (179u + sizeof(_g4_t_v56)) > _g4_s17 ? (179u + sizeof(_g4_t_v56)) : _g4_s17,
    _g4_s19 = (192u + sizeof(_g4_t_v57)) > _g4_s18 ? (192u + sizeof(_g4_t_v57)) : _g4_s18,
    _g4_s20 = (193u + sizeof(_g4_t_v58)) > _g4_s19 ? (193u + sizeof(_g4_t_v58)) : _g4_s19,
    _g4_s21 = (204u + sizeof(_g4_t_v59)) > _g4_s20 ? (204u + sizeof(_g4_t_v59)) : _g4_s20,
    _g4_s22 = (208u + sizeof(_g4_t_v60)) > _g4_s21 ? (208u + sizeof(_g4_t_v60)) : _g4_s21,
    _g4_s23 = (210u + sizeof(_g4_t_v61)) > _g4_s22 ? (210u + sizeof(_g4_t_v61)) : _g4_s22,
    _g4_s24 = (211u + sizeof(_g4_t_v62)) > _g4_s23 ? (211u + sizeof(_g4_t_v62)) : _g4_s23,
    _g4_s25 = (224u + sizeof(_g4_t_v63)) > _g4_s24 ? (224u + sizeof(_g4_t_v63)) : _g4_s24,
    _g4_s26 = (225u + sizeof(_g4_t_v64)) > _g4_s25 ? (225u + sizeof(_g4_t_v64)) : _g4_s25,
    _g4_s27 = (236u + sizeof(_g4_t_v65)) > _g4_s26 ? (236u + sizeof(_g4_t_v65)) : _g4_s26,
    _g4_s28 = (240u + sizeof(_g4_t_v66)) > _g4_s27 ? (240u + sizeof(_g4_t_v66)) : _g4_s27,
    _g4_s29 = (242u + sizeof(_g4_t_v67)) > _g4_s28 ? (242u + sizeof(_g4_t_v67)) : _g4_s28,
    _g4_s30 = (243u + sizeof(_g4_t_v68)) > _g4_s29 ? (243u + sizeof(_g4_t_v68)) : _g4_s29,
    _g4_s31 = (256u + sizeof(_g4_t_v69)) > _g4_s30 ? (256u + sizeof(_g4_t_v69)) : _g4_s30,
    _g4_s32 = (257u + sizeof(_g4_t_v70)) > _g4_s31 ? (257u + sizeof(_g4_t_v70)) : _g4_s31,
    _g4_s33 = (268u + sizeof(_g4_t_v71)) > _g4_s32 ? (268u + sizeof(_g4_t_v71)) : _g4_s32,
    _g4_s34 = (272u + sizeof(_g4_t_v72)) > _g4_s33 ? (272u + sizeof(_g4_t_v72)) : _g4_s33,
    _g4_s35 = (274u + sizeof(_g4_t_v73)) > _g4_s34 ? (274u + sizeof(_g4_t_v73)) : _g4_s34,
    _g4_s36 = (275u + sizeof(_g4_t_v74)) > _g4_s35 ? (275u + sizeof(_g4_t_v74)) : _g4_s35,
    _g4_s37 = (288u + sizeof(_g4_t_v75)) > _g4_s36 ? (288u + sizeof(_g4_t_v75)) : _g4_s36,
    _g4_s38 = (289u + sizeof(_g4_t_v76)) > _g4_s37 ? (289u + sizeof(_g4_t_v76)) : _g4_s37,
    _g4_s39 = (300u + sizeof(_g4_t_v77)) > _g4_s38 ? (300u + sizeof(_g4_t_v77)) : _g4_s38,
    _g4_s40 = (304u + sizeof(_g4_t_v78)) > _g4_s39 ? (304u + sizeof(_g4_t_v78)) : _g4_s39,
    _g4_s41 = (306u + sizeof(_g4_t_v79)) > _g4_s40 ? (306u + sizeof(_g4_t_v79)) : _g4_s40,
    _g4_s42 = (307u + sizeof(_g4_t_v80)) > _g4_s41 ? (307u + sizeof(_g4_t_v80)) : _g4_s41,
    _g4_s43 = (320u + sizeof(_g4_t_v81)) > _g4_s42 ? (320u + sizeof(_g4_t_v81)) : _g4_s42,
    _g4_s44 = (321u + sizeof(_g4_t_v82)) > _g4_s43 ? (321u + sizeof(_g4_t_v82)) : _g4_s43,
    _g4_s45 = (332u + sizeof(_g4_t_v83)) > _g4_s44 ? (332u + sizeof(_g4_t_v83)) : _g4_s44,
    _g4_s46 = (336u + sizeof(_g4_t_v84)) > _g4_s45 ? (336u + sizeof(_g4_t_v84)) : _g4_s45,
    _g4_s47 = (338u + sizeof(_g4_t_v85)) > _g4_s46 ? (338u + sizeof(_g4_t_v85)) : _g4_s46,
    _g4_s48 = (339u + sizeof(_g4_t_v86)) > _g4_s47 ? (339u + sizeof(_g4_t_v86)) : _g4_s47,
    _g4_s49 = (352u + sizeof(_g4_t_v87)) > _g4_s48 ? (352u + sizeof(_g4_t_v87)) : _g4_s48,
    _g4_s50 = (353u + sizeof(_g4_t_v88)) > _g4_s49 ? (353u + sizeof(_g4_t_v88)) : _g4_s49,
    _g4_s51 = (364u + sizeof(_g4_t_v89)) > _g4_s50 ? (364u + sizeof(_g4_t_v89)) : _g4_s50,
    _g4_s52 = (368u + sizeof(_g4_t_v90)) > _g4_s51 ? (368u + sizeof(_g4_t_v90)) : _g4_s51,
    _g4_s53 = (370u + sizeof(_g4_t_v91)) > _g4_s52 ? (370u + sizeof(_g4_t_v91)) : _g4_s52,
    _g4_s54 = (371u + sizeof(_g4_t_v92)) > _g4_s53 ? (371u + sizeof(_g4_t_v92)) : _g4_s53,
    _g4_s55 = (384u + sizeof(_g4_t_v93)) > _g4_s54 ? (384u + sizeof(_g4_t_v93)) : _g4_s54,
    _g4_s56 = (385u + sizeof(_g4_t_v94)) > _g4_s55 ? (385u + sizeof(_g4_t_v94)) : _g4_s55,
    _g4_s57 = (396u + sizeof(_g4_t_v95)) > _g4_s56 ? (396u + sizeof(_g4_t_v95)) : _g4_s56,
    _g4_s58 = (400u + sizeof(_g4_t_v96)) > _g4_s57 ? (400u + sizeof(_g4_t_v96)) : _g4_s57,
    _g4_s59 = (402u + sizeof(_g4_t_v97)) > _g4_s58 ? (402u + sizeof(_g4_t_v97)) : _g4_s58,
    _g4_s60 = (403u + sizeof(_g4_t_v98)) > _g4_s59 ? (403u + sizeof(_g4_t_v98)) : _g4_s59
  };
  alignas(16) uint8_t _g4_sf[_g4_s60];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 64u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 76u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 88u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 100u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 112u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 124u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 136u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 148u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 160u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 161u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 172u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 176u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 178u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 179u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 192u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 193u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 204u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 208u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 210u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 211u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 224u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 225u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 236u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 240u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 242u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 243u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 256u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 257u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 268u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 272u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 274u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 275u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 288u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 289u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 300u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 304u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 306u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 307u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 320u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 321u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 332u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 336u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 338u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 339u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 352u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 353u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 364u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 368u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 370u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 371u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 384u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 385u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 396u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 400u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 402u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 403u);

  v1 = *(uint32_t **)(a1 + 4);
  if ( v1 != nullptr && G4_VCALL<uint8_t>(v1, 8, 21) != 0 )
  {
    v2 = v1[11];
    if ( v2 != 0 )
    {
      v3 = (gameswf::Self *)v1[10];
      if ( *((uint8_t *)v3 + 2) != 0 )
      {
        v4 = *(float **)(v2 + 64);
        v5 = g4_to_m128d(0x437F0000u);
        v6 = g4_to_m128d(*(unsigned int *)v4);
        g4_m128_lane_ref<double>(v6, 0) = (float)(g4_m128_lane_ref<float>(v6, 0) * 255.0);
        v7 = fabs(g4_m128_lane_ref<double>(v6, 0));
        if ( v7 < 4503599627370496.0 )
        {
          *(uint64_t *)&g4_m128_lane_ref<double>(v8, 0) = COERCE_UNSIGNED_INT64(v7 + 4503599627370496.0 - 4503599627370496.0)
                                      | *(uint64_t *)&g4_m128_lane_ref<double>(v6, 0) & 0x8000000000000000LL;
          g4_m128_lane_ref<double>(v6, 0) = g4_m128_lane_ref<double>(v8, 0)
                          - COERCE_DOUBLE(g4_m128_lane<uint64_t>(_mm_cmpgt_sd(v6, v8), 0) & 0xBFF0000000000000LL);
        }
        v9 = (int)g4_m128_lane_ref<double>(v6, 0);
        v10 = g4_to_m128d(*((unsigned int *)v4 + 2));
        v42 = v9;
        g4_m128_lane_ref<double>(v10, 0) = (float)(g4_m128_lane_ref<float>(v10, 0) * 255.0);
        if ( fabs(g4_m128_lane_ref<double>(v10, 0)) < 4503599627370496.0 )
        {
          *(uint64_t *)&g4_m128_lane_ref<double>(v11, 0) = COERCE_UNSIGNED_INT64(fabs(g4_m128_lane_ref<double>(v10, 0)) + 4503599627370496.0 - 4503599627370496.0)
                                       | *(uint64_t *)&g4_m128_lane_ref<double>(v10, 0) & 0x8000000000000000LL;
          g4_m128_lane_ref<double>(v10, 0) = g4_m128_lane_ref<double>(v11, 0)
                           - COERCE_DOUBLE(g4_m128_lane<uint64_t>(_mm_cmpgt_sd(v10, v11), 0) & 0xBFF0000000000000LL);
        }
        v12 = (int)g4_m128_lane_ref<double>(v10, 0);
        v13 = g4_to_m128d(*((unsigned int *)v4 + 4));
        v41 = v12;
        g4_m128_lane_ref<double>(v13, 0) = (float)(g4_m128_lane_ref<float>(v13, 0) * 255.0);
        v14 = fabs(g4_m128_lane_ref<double>(v13, 0));
        if ( v14 < 4503599627370496.0 )
        {
          *(uint64_t *)&g4_m128_lane_ref<double>(v15, 0) = COERCE_UNSIGNED_INT64(v14 + 4503599627370496.0 - 4503599627370496.0)
                                       | *(uint64_t *)&g4_m128_lane_ref<double>(v13, 0) & 0x8000000000000000LL;
          g4_m128_lane_ref<double>(v13, 0) = g4_m128_lane_ref<double>(v15, 0)
                           - COERCE_DOUBLE(g4_m128_lane<uint64_t>(_mm_cmpgt_sd(v13, v15), 0) & 0xBFF0000000000000LL);
        }
        g4_m128_lane_ref<double>(v5, 0) = (float)(255.0 * v4[6]);
        v40 = (int)g4_m128_lane_ref<double>(v13, 0);
        v16 = fabs(g4_m128_lane_ref<double>(v5, 0));
        if ( v16 < 4503599627370496.0 )
        {
          *(uint64_t *)&g4_m128_lane_ref<double>(v17, 0) = COERCE_UNSIGNED_INT64(v16 + 4503599627370496.0 - 4503599627370496.0)
                                       | *(uint64_t *)&g4_m128_lane_ref<double>(v5, 0) & 0x8000000000000000LL;
          g4_m128_lane_ref<double>(v5, 0) = g4_m128_lane_ref<double>(v17, 0)
                          - COERCE_DOUBLE(g4_m128_lane<uint64_t>(_mm_cmpgt_sd(v5, v17), 0) & 0xBFF0000000000000LL);
        }
        v39 = (int)g4_m128_lane_ref<double>(v5, 0);
        v18 = *(uint32_t *)(a1 + 12);
        v19 = *(gameswf::Player::Self **)(v18 + 212);
        if ( v19 != nullptr )
        {
          v20 = *(gameswf::Self **)(v18 + 208);
          if ( *((uint8_t *)v20 + 2) == 0 )
          {
            v38 = (*(uint16_t *)v20)-- == 1;
            if ( v38 )
              gameswf::free_internal(v20);
            *(uint32_t *)(v18 + 208) = 0;
            *(uint32_t *)(v18 + 212) = 0;
            v19 = nullptr;
          }
        }
        v21 = (gameswf::ASObject::Self *)opNew(0x28u);
        gameswf::ASObject::ASObject(v21, v19);
        v43[0] = 2;
        v51 = 1;
        v52 = 0;
        *(double *)&v43[2] = (float)((float)v42 * 0.3921569f);
        gameswf::String::resize((gameswf::String::Self *)&v51, 2);
        v22 = (gameswf::Self *)&v52;
        if ( v51 == -1 )
          v22 = v53;
        gameswf::Strcpy_s(v22, (char *)&dword_0 + 3, (gameswf::Self *)"ra");
        v54 = -1;
        v55 = 127;
        v56 |= 1u;
        StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v51);
        if ( StandardMemberID == -1
          || G4_VCALL<uint8_t>(v21, 32, StandardMemberID, v43) == 0 )
        {
          G4_VCALL<void>(v21, 48, &v51, v43);
          if ( v51 != -1 )
            goto LABEL_20;
        }
        else if ( v51 != -1 )
        {
          goto LABEL_20;
        }
        if ( (v56 & 1) != 0 )
          gameswf::free_internal(v53);
LABEL_20:
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v43);
        v44[0] = 2;
        *(double *)&v44[2] = (double)v42;
        v57 = 1;
        v58 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v57, 2);
        v24 = (gameswf::Self *)&v58;
        if ( v57 == -1 )
          v24 = v59;
        gameswf::Strcpy_s(v24, (char *)&dword_0 + 3, (gameswf::Self *)"rb");
        v60 = -1;
        v61 = 127;
        v62 |= 1u;
        v25 = gameswf::getStandardMemberID((gameswf::Self *)&v57);
        if ( v25 == -1
          || G4_VCALL<uint8_t>(v21, 32, v25, v44) == 0 )
        {
          G4_VCALL<void>(v21, 48, &v57, v44);
          if ( v57 != -1 )
            goto LABEL_25;
        }
        else if ( v57 != -1 )
        {
          goto LABEL_25;
        }
        if ( (v62 & 1) != 0 )
          gameswf::free_internal(v59);
LABEL_25:
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v44);
        v45[0] = 2;
        v63 = 1;
        v64 = 0;
        *(double *)&v45[2] = (float)((float)v41 * 0.3921569f);
        gameswf::String::resize((gameswf::String::Self *)&v63, 2);
        v26 = (gameswf::Self *)&v64;
        if ( v63 == -1 )
          v26 = v65;
        gameswf::Strcpy_s(v26, (char *)&dword_0 + 3, (gameswf::Self *)"ga");
        v66 = -1;
        v67 = 127;
        v68 |= 1u;
        v27 = gameswf::getStandardMemberID((gameswf::Self *)&v63);
        if ( v27 == -1
          || G4_VCALL<uint8_t>(v21, 32, v27, v45) == 0 )
        {
          G4_VCALL<void>(v21, 48, &v63, v45);
          if ( v63 != -1 )
            goto LABEL_30;
        }
        else if ( v63 != -1 )
        {
          goto LABEL_30;
        }
        if ( (v68 & 1) != 0 )
          gameswf::free_internal(v65);
LABEL_30:
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v45);
        v46[0] = 2;
        *(double *)&v46[2] = (double)v41;
        v69 = 1;
        v70 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v69, 2);
        v28 = (gameswf::Self *)&v70;
        if ( v69 == -1 )
          v28 = v71;
        gameswf::Strcpy_s(v28, (char *)&dword_0 + 3, (gameswf::Self *)"gb");
        v72 = -1;
        v73 = 127;
        v74 |= 1u;
        v29 = gameswf::getStandardMemberID((gameswf::Self *)&v69);
        if ( v29 == -1
          || G4_VCALL<uint8_t>(v21, 32, v29, v46) == 0 )
        {
          G4_VCALL<void>(v21, 48, &v69, v46);
          if ( v69 != -1 )
            goto LABEL_35;
        }
        else if ( v69 != -1 )
        {
          goto LABEL_35;
        }
        if ( (v74 & 1) != 0 )
          gameswf::free_internal(v71);
LABEL_35:
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v46);
        v47[0] = 2;
        v75 = 1;
        v76 = 0;
        *(double *)&v47[2] = (float)((float)v40 * 0.3921569f);
        gameswf::String::resize((gameswf::String::Self *)&v75, 2);
        v30 = (gameswf::Self *)&v76;
        if ( v75 == -1 )
          v30 = v77;
        gameswf::Strcpy_s(v30, (char *)&dword_0 + 3, (gameswf::Self *)"ba");
        v78 = -1;
        v79 = 127;
        v80 |= 1u;
        v31 = gameswf::getStandardMemberID((gameswf::Self *)&v75);
        if ( v31 == -1
          || G4_VCALL<uint8_t>(v21, 32, v31, v47) == 0 )
        {
          G4_VCALL<void>(v21, 48, &v75, v47);
          if ( v75 != -1 )
            goto LABEL_40;
        }
        else if ( v75 != -1 )
        {
          goto LABEL_40;
        }
        if ( (v80 & 1) != 0 )
          gameswf::free_internal(v77);
LABEL_40:
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v47);
        v48[0] = 2;
        *(double *)&v48[2] = (double)v40;
        v81 = 1;
        v82 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v81, 2);
        v32 = (gameswf::Self *)&v82;
        if ( v81 == -1 )
          v32 = v83;
        gameswf::Strcpy_s(v32, (char *)&dword_0 + 3, (gameswf::Self *)"bb");
        v84 = -1;
        v85 = 127;
        v86 |= 1u;
        v33 = gameswf::getStandardMemberID((gameswf::Self *)&v81);
        if ( v33 == -1
          || G4_VCALL<uint8_t>(v21, 32, v33, v48) == 0 )
        {
          G4_VCALL<void>(v21, 48, &v81, v48);
          if ( v81 != -1 )
            goto LABEL_45;
        }
        else if ( v81 != -1 )
        {
          goto LABEL_45;
        }
        if ( (v86 & 1) != 0 )
          gameswf::free_internal(v83);
LABEL_45:
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v48);
        v49[0] = 2;
        v87 = 1;
        v88 = 0;
        *(double *)&v49[2] = (float)((float)v39 * 0.3921569f);
        gameswf::String::resize((gameswf::String::Self *)&v87, 2);
        v34 = (gameswf::Self *)&v88;
        if ( v87 == -1 )
          v34 = v89;
        gameswf::Strcpy_s(v34, (char *)&dword_0 + 3, (gameswf::Self *)"aa");
        v90 = -1;
        v91 = 127;
        v92 |= 1u;
        v35 = gameswf::getStandardMemberID((gameswf::Self *)&v87);
        if ( v35 == -1
          || G4_VCALL<uint8_t>(v21, 32, v35, v49) == 0 )
        {
          G4_VCALL<void>(v21, 48, &v87, v49);
          if ( v87 != -1 )
            goto LABEL_50;
        }
        else if ( v87 != -1 )
        {
          goto LABEL_50;
        }
        if ( (v92 & 1) != 0 )
          gameswf::free_internal(v89);
LABEL_50:
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v49);
        v50[0] = 2;
        *(double *)&v50[2] = (double)v39;
        v93 = 1;
        v94 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v93, 2);
        v36 = (gameswf::Self *)&v94;
        if ( v93 == -1 )
          v36 = v95;
        gameswf::Strcpy_s(v36, (char *)&dword_0 + 3, (gameswf::Self *)"ab");
        v96 = -1;
        v97 = 127;
        v98 |= 1u;
        v37 = gameswf::getStandardMemberID((gameswf::Self *)&v93);
        if ( v37 == -1
          || G4_VCALL<uint8_t>(v21, 32, v37, v50) == 0 )
        {
          G4_VCALL<void>(v21, 48, &v93, v50);
          if ( v93 != -1 )
            goto LABEL_55;
        }
        else if ( v93 != -1 )
        {
LABEL_55:
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v50);
          gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v21);
          return;
        }
        if ( (v98 & 1) != 0 )
          gameswf::free_internal(v95);
        goto LABEL_55;
      }
      v38 = (*(uint16_t *)v3)-- == 1;
      if ( v38 )
        gameswf::free_internal(v3);
      v1[10] = 0;
      v1[11] = 0;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASColor::getRGB  (binary VA: 0x1128210)
// Original: gameswf::ASColor::getRGB
// ----------------------------------------------------------------------------
void gameswf::ASColor::getRGB(int a1)
{
  uint32_t *v1;
  int v2;
  gameswf::Self *v3;
  float *v4;
  __m128d v5;
  __m128d v6;
  double v7; // xmm2_8
  __m128d v8;
  __m128d v9;
  __m128d v10;
  __m128d v11;
  v1 = *(uint32_t **)(a1 + 4);
  if ( v1 != nullptr && G4_VCALL<uint8_t>(v1, 8, 21) != 0 )
  {
    v2 = v1[11];
    if ( v2 != 0 )
    {
      v3 = (gameswf::Self *)v1[10];
      if ( *((uint8_t *)v3 + 2) != 0 )
      {
        v4 = *(float **)(v2 + 64);
        v5 = g4_to_m128d(0x437F0000u);
        v6 = g4_to_m128d(*(unsigned int *)v4);
        g4_m128_lane_ref<double>(v6, 0) = (float)(g4_m128_lane_ref<float>(v6, 0) * 255.0);
        v7 = fabs(g4_m128_lane_ref<double>(v6, 0));
        if ( v7 < 4503599627370496.0 )
        {
          *(uint64_t *)&g4_m128_lane_ref<double>(v8, 0) = COERCE_UNSIGNED_INT64(v7 + 4503599627370496.0 - 4503599627370496.0)
                                      | *(uint64_t *)&g4_m128_lane_ref<double>(v6, 0) & 0x8000000000000000LL;
          g4_m128_lane_ref<double>(v6, 0) = g4_m128_lane_ref<double>(v8, 0)
                          - COERCE_DOUBLE(g4_m128_lane<uint64_t>(_mm_cmpgt_sd(v6, v8), 0) & 0xBFF0000000000000LL);
        }
        v9 = g4_to_m128d(*((unsigned int *)v4 + 2));
        g4_m128_lane_ref<double>(v9, 0) = (float)(g4_m128_lane_ref<float>(v9, 0) * 255.0);
        if ( fabs(g4_m128_lane_ref<double>(v9, 0)) < 4503599627370496.0 )
        {
          *(uint64_t *)&g4_m128_lane_ref<double>(v10, 0) = COERCE_UNSIGNED_INT64(fabs(g4_m128_lane_ref<double>(v9, 0)) + 4503599627370496.0 - 4503599627370496.0)
                                       | *(uint64_t *)&g4_m128_lane_ref<double>(v9, 0) & 0x8000000000000000LL;
          g4_m128_lane_ref<double>(v9, 0) = g4_m128_lane_ref<double>(v10, 0)
                          - COERCE_DOUBLE(g4_m128_lane<uint64_t>(_mm_cmpgt_sd(v9, v10), 0) & 0xBFF0000000000000LL);
        }
        g4_m128_lane_ref<double>(v5, 0) = (float)(255.0 * v4[4]);
        if ( fabs(g4_m128_lane_ref<double>(v5, 0)) < 4503599627370496.0 )
        {
          *(uint64_t *)&g4_m128_lane_ref<double>(v11, 0) = COERCE_UNSIGNED_INT64(fabs(g4_m128_lane_ref<double>(v5, 0)) + 4503599627370496.0 - 4503599627370496.0)
                                       | *(uint64_t *)&g4_m128_lane_ref<double>(v5, 0) & 0x8000000000000000LL;
          g4_m128_lane_ref<double>(v5, 0) = g4_m128_lane_ref<double>(v11, 0)
                          - COERCE_DOUBLE(g4_m128_lane<uint64_t>(_mm_cmpgt_sd(v5, v11), 0) & 0xBFF0000000000000LL);
        }
        gameswf::ASValue::setDouble(
          *(gameswf::ASValue::Self **)a1,
          (double)((uint8_t)(int)g4_m128_lane_ref<double>(v5, 0)
                 | ((uint8_t)(int)g4_m128_lane_ref<double>(v9, 0) << 8)
                 | ((uint8_t)(int)g4_m128_lane_ref<double>(v6, 0) << 16)));
      }
      else
      {
        if ( (*(uint16_t *)v3)-- == 1 )
          gameswf::free_internal(v3);
        v1[10] = 0;
        v1[11] = 0;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASColor::setTransform  (binary VA: 0x1128410)
// Original: gameswf::ASColor::setTransform
// ----------------------------------------------------------------------------
void gameswf::ASColor::setTransform(int a1)
{
  uint32_t *v1;
  gameswf::Self *v2;
  int v3;
  int v4;
  gameswf::Self *v5;
  int StandardMemberID;
  char v7;
  __m128 v8;
  gameswf::Self *v9;
  int v10;
  char v11;
  char v12;
  __m128 v13;
  gameswf::Self *v14;
  int v15;
  char v16;
  char v17;
  __m128 v18;
  gameswf::Self *v19;
  int v20;
  char v21;
  char v22;
  __m128 v23;
  gameswf::Self *v24;
  int v25;
  char v26;
  char v27;
  __m128 v28;
  gameswf::Self *v29;
  int v30;
  char v31;
  char v32;
  __m128 v33;
  gameswf::Self *v34;
  int v35;
  char v36;
  char v37;
  __m128 v38;
  gameswf::Self *v39;
  int v40;
  char v41;
  char v42;
  __m128 v43;
  int v44;
  gameswf::Self *v45;
  int v46;
  gameswf::Character::Self *v47;
  gameswf::Self *v48;
  char v49;
  bool v50;
  float v51; // xmm0_4
  float v52; // xmm0_4
  float v53; // xmm0_4
  float v54; // xmm0_4
  int v55;
  uint16_t *v56;
  uint16_t *v57;
  int v58;
  typedef char _g4_t_v59;
  typedef char _g4_t_v60;
  typedef char _g4_t_v61;
  typedef char _g4_t_v62;
  typedef char _g4_t_v63;
  typedef char _g4_t_v64;
  typedef char _g4_t_v65;
  typedef char _g4_t_v66;
  typedef unsigned int _g4_t_v67;
  typedef uint32_t _g4_t_v68;
  typedef uint32_t _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef uint32_t _g4_t_v74;
  typedef uint8_t _g4_t_v75[12];
  typedef char _g4_t_v76;
  typedef char _g4_t_v77;
  typedef gameswf::Self *_g4_t_v78;
  typedef int16_t _g4_t_v79;
  typedef char _g4_t_v80;
  typedef char _g4_t_v81;
  typedef char _g4_t_v82;
  typedef char _g4_t_v83;
  typedef gameswf::Self *_g4_t_v84;
  typedef int16_t _g4_t_v85;
  typedef char _g4_t_v86;
  typedef char _g4_t_v87;
  typedef char _g4_t_v88;
  typedef char _g4_t_v89;
  typedef gameswf::Self *_g4_t_v90;
  typedef int16_t _g4_t_v91;
  typedef char _g4_t_v92;
  typedef char _g4_t_v93;
  typedef char _g4_t_v94;
  typedef char _g4_t_v95;
  typedef gameswf::Self *_g4_t_v96;
  typedef int16_t _g4_t_v97;
  typedef char _g4_t_v98;
  typedef char _g4_t_v99;
  typedef char _g4_t_v100;
  typedef char _g4_t_v101;
  typedef gameswf::Self *_g4_t_v102;
  typedef int16_t _g4_t_v103;
  typedef char _g4_t_v104;
  typedef char _g4_t_v105;
  typedef char _g4_t_v106;
  typedef char _g4_t_v107;
  typedef gameswf::Self *_g4_t_v108;
  typedef int16_t _g4_t_v109;
  typedef char _g4_t_v110;
  typedef char _g4_t_v111;
  typedef char _g4_t_v112;
  typedef char _g4_t_v113;
  typedef gameswf::Self *_g4_t_v114;
  typedef int16_t _g4_t_v115;
  typedef char _g4_t_v116;
  typedef char _g4_t_v117;
  typedef char _g4_t_v118;
  typedef char _g4_t_v119;
  typedef gameswf::Self *_g4_t_v120;
  typedef int16_t _g4_t_v121;
  typedef char _g4_t_v122;
  typedef char _g4_t_v123;
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (0u + sizeof(_g4_t_v59)) > _g4_s0 ? (0u + sizeof(_g4_t_v59)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v60)) > _g4_s1 ? (0u + sizeof(_g4_t_v60)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v61)) > _g4_s2 ? (0u + sizeof(_g4_t_v61)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v62)) > _g4_s3 ? (0u + sizeof(_g4_t_v62)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v63)) > _g4_s4 ? (0u + sizeof(_g4_t_v63)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v64)) > _g4_s5 ? (0u + sizeof(_g4_t_v64)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v65)) > _g4_s6 ? (0u + sizeof(_g4_t_v65)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v66)) > _g4_s7 ? (0u + sizeof(_g4_t_v66)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v67)) > _g4_s8 ? (24u + sizeof(_g4_t_v67)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v68)) > _g4_s9 ? (32u + sizeof(_g4_t_v68)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v69)) > _g4_s10 ? (36u + sizeof(_g4_t_v69)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v70)) > _g4_s11 ? (40u + sizeof(_g4_t_v70)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v71)) > _g4_s12 ? (48u + sizeof(_g4_t_v71)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v72)) > _g4_s13 ? (56u + sizeof(_g4_t_v72)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v73)) > _g4_s14 ? (64u + sizeof(_g4_t_v73)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v74)) > _g4_s15 ? (72u + sizeof(_g4_t_v74)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v75)) > _g4_s16 ? (84u + sizeof(_g4_t_v75)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v76)) > _g4_s17 ? (96u + sizeof(_g4_t_v76)) : _g4_s17,
    _g4_s19 = (97u + sizeof(_g4_t_v77)) > _g4_s18 ? (97u + sizeof(_g4_t_v77)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v78)) > _g4_s19 ? (108u + sizeof(_g4_t_v78)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v79)) > _g4_s20 ? (112u + sizeof(_g4_t_v79)) : _g4_s20,
    _g4_s22 = (114u + sizeof(_g4_t_v80)) > _g4_s21 ? (114u + sizeof(_g4_t_v80)) : _g4_s21,
    _g4_s23 = (115u + sizeof(_g4_t_v81)) > _g4_s22 ? (115u + sizeof(_g4_t_v81)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v82)) > _g4_s23 ? (128u + sizeof(_g4_t_v82)) : _g4_s23,
    _g4_s25 = (129u + sizeof(_g4_t_v83)) > _g4_s24 ? (129u + sizeof(_g4_t_v83)) : _g4_s24,
    _g4_s26 = (140u + sizeof(_g4_t_v84)) > _g4_s25 ? (140u + sizeof(_g4_t_v84)) : _g4_s25,
    _g4_s27 = (144u + sizeof(_g4_t_v85)) > _g4_s26 ? (144u + sizeof(_g4_t_v85)) : _g4_s26,
    _g4_s28 = (146u + sizeof(_g4_t_v86)) > _g4_s27 ? (146u + sizeof(_g4_t_v86)) : _g4_s27,
    _g4_s29 = (147u + sizeof(_g4_t_v87)) > _g4_s28 ? (147u + sizeof(_g4_t_v87)) : _g4_s28,
    _g4_s30 = (160u + sizeof(_g4_t_v88)) > _g4_s29 ? (160u + sizeof(_g4_t_v88)) : _g4_s29,
    _g4_s31 = (161u + sizeof(_g4_t_v89)) > _g4_s30 ? (161u + sizeof(_g4_t_v89)) : _g4_s30,
    _g4_s32 = (172u + sizeof(_g4_t_v90)) > _g4_s31 ? (172u + sizeof(_g4_t_v90)) : _g4_s31,
    _g4_s33 = (176u + sizeof(_g4_t_v91)) > _g4_s32 ? (176u + sizeof(_g4_t_v91)) : _g4_s32,
    _g4_s34 = (178u + sizeof(_g4_t_v92)) > _g4_s33 ? (178u + sizeof(_g4_t_v92)) : _g4_s33,
    _g4_s35 = (179u + sizeof(_g4_t_v93)) > _g4_s34 ? (179u + sizeof(_g4_t_v93)) : _g4_s34,
    _g4_s36 = (192u + sizeof(_g4_t_v94)) > _g4_s35 ? (192u + sizeof(_g4_t_v94)) : _g4_s35,
    _g4_s37 = (193u + sizeof(_g4_t_v95)) > _g4_s36 ? (193u + sizeof(_g4_t_v95)) : _g4_s36,
    _g4_s38 = (204u + sizeof(_g4_t_v96)) > _g4_s37 ? (204u + sizeof(_g4_t_v96)) : _g4_s37,
    _g4_s39 = (208u + sizeof(_g4_t_v97)) > _g4_s38 ? (208u + sizeof(_g4_t_v97)) : _g4_s38,
    _g4_s40 = (210u + sizeof(_g4_t_v98)) > _g4_s39 ? (210u + sizeof(_g4_t_v98)) : _g4_s39,
    _g4_s41 = (211u + sizeof(_g4_t_v99)) > _g4_s40 ? (211u + sizeof(_g4_t_v99)) : _g4_s40,
    _g4_s42 = (224u + sizeof(_g4_t_v100)) > _g4_s41 ? (224u + sizeof(_g4_t_v100)) : _g4_s41,
    _g4_s43 = (225u + sizeof(_g4_t_v101)) > _g4_s42 ? (225u + sizeof(_g4_t_v101)) : _g4_s42,
    _g4_s44 = (236u + sizeof(_g4_t_v102)) > _g4_s43 ? (236u + sizeof(_g4_t_v102)) : _g4_s43,
    _g4_s45 = (240u + sizeof(_g4_t_v103)) > _g4_s44 ? (240u + sizeof(_g4_t_v103)) : _g4_s44,
    _g4_s46 = (242u + sizeof(_g4_t_v104)) > _g4_s45 ? (242u + sizeof(_g4_t_v104)) : _g4_s45,
    _g4_s47 = (243u + sizeof(_g4_t_v105)) > _g4_s46 ? (243u + sizeof(_g4_t_v105)) : _g4_s46,
    _g4_s48 = (256u + sizeof(_g4_t_v106)) > _g4_s47 ? (256u + sizeof(_g4_t_v106)) : _g4_s47,
    _g4_s49 = (257u + sizeof(_g4_t_v107)) > _g4_s48 ? (257u + sizeof(_g4_t_v107)) : _g4_s48,
    _g4_s50 = (268u + sizeof(_g4_t_v108)) > _g4_s49 ? (268u + sizeof(_g4_t_v108)) : _g4_s49,
    _g4_s51 = (272u + sizeof(_g4_t_v109)) > _g4_s50 ? (272u + sizeof(_g4_t_v109)) : _g4_s50,
    _g4_s52 = (274u + sizeof(_g4_t_v110)) > _g4_s51 ? (274u + sizeof(_g4_t_v110)) : _g4_s51,
    _g4_s53 = (275u + sizeof(_g4_t_v111)) > _g4_s52 ? (275u + sizeof(_g4_t_v111)) : _g4_s52,
    _g4_s54 = (288u + sizeof(_g4_t_v112)) > _g4_s53 ? (288u + sizeof(_g4_t_v112)) : _g4_s53,
    _g4_s55 = (289u + sizeof(_g4_t_v113)) > _g4_s54 ? (289u + sizeof(_g4_t_v113)) : _g4_s54,
    _g4_s56 = (300u + sizeof(_g4_t_v114)) > _g4_s55 ? (300u + sizeof(_g4_t_v114)) : _g4_s55,
    _g4_s57 = (304u + sizeof(_g4_t_v115)) > _g4_s56 ? (304u + sizeof(_g4_t_v115)) : _g4_s56,
    _g4_s58 = (306u + sizeof(_g4_t_v116)) > _g4_s57 ? (306u + sizeof(_g4_t_v116)) : _g4_s57,
    _g4_s59 = (307u + sizeof(_g4_t_v117)) > _g4_s58 ? (307u + sizeof(_g4_t_v117)) : _g4_s58,
    _g4_s60 = (320u + sizeof(_g4_t_v118)) > _g4_s59 ? (320u + sizeof(_g4_t_v118)) : _g4_s59,
    _g4_s61 = (321u + sizeof(_g4_t_v119)) > _g4_s60 ? (321u + sizeof(_g4_t_v119)) : _g4_s60,
    _g4_s62 = (332u + sizeof(_g4_t_v120)) > _g4_s61 ? (332u + sizeof(_g4_t_v120)) : _g4_s61,
    _g4_s63 = (336u + sizeof(_g4_t_v121)) > _g4_s62 ? (336u + sizeof(_g4_t_v121)) : _g4_s62,
    _g4_s64 = (338u + sizeof(_g4_t_v122)) > _g4_s63 ? (338u + sizeof(_g4_t_v122)) : _g4_s63,
    _g4_s65 = (339u + sizeof(_g4_t_v123)) > _g4_s64 ? (339u + sizeof(_g4_t_v123)) : _g4_s64
  };
  alignas(16) uint8_t _g4_sf[_g4_s65];
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 0u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 0u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 0u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 0u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 0u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 0u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 0u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 0u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 24u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 32u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 36u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 40u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 48u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 56u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 64u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 72u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 84u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 96u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 97u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 108u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 112u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 114u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 115u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 128u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 129u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 140u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 144u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 146u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 147u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 160u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 161u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 172u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 176u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 178u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 179u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 192u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 193u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 204u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 208u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 210u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 211u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 224u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 225u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 236u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 240u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 242u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 243u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 256u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 257u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 268u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 272u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 274u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 275u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 288u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 289u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 300u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 304u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 306u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 307u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 320u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 321u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 332u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 336u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 338u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 339u);

  if ( *(int *)(a1 + 16) > 0 )
  {
    v1 = *(uint32_t **)(a1 + 4);
    if ( v1 != nullptr && G4_VCALL<uint8_t>(v1, 8, 21) != 0 && v1[11] != 0 )
    {
      v2 = (gameswf::Self *)v1[10];
      if ( *((uint8_t *)v2 + 2) != 0 )
      {
        v3 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
        if ( *(uint8_t *)v3 == 5 )
        {
          v4 = *(uint32_t *)(v3 + 4);
          if ( v4 != 0 )
          {
            v75[0] = 0;
            v75[1] = 0;
            v76 = 1;
            v77 = 0;
            gameswf::String::resize((gameswf::String::Self *)&v76, 2);
            v5 = (gameswf::Self *)&v77;
            if ( v76 == -1 )
              v5 = v78;
            gameswf::Strcpy_s(v5, (char *)&dword_0 + 3, (gameswf::Self *)"ra");
            v79 = -1;
            v80 = 127;
            v81 |= 1u;
            StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v76);
            if ( StandardMemberID == -1
              || (v49 = G4_VCALL<int>(v4, 36, StandardMemberID, v75),
                  v7 = 1,
                  v49 == 0) )
            {
              v7 = G4_VCALL<int>(v4, 44, &v76, v75);
            }
            if ( v76 == -1 && (v81 & 1) != 0 )
            {
              v59 = v7;
              gameswf::free_internal(v78);
              v7 = v59;
            }
g4_m128_raw(v8) = 0x3F800000u;
            v70 = 1065353216;
            if ( v7 != 0 )
            {
              v51 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)v75);
g4_m128_lane<float>(v8, 0) = v51 * 0.01f;
              if (g4_m128_lane<float>(v8, 0) < -3.4028235e38f )
                v70 = 0;
              else
                v70 =g4_m128_lane<int32_t>(v8, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v8, *(__m128 *)&dword_1C7B5E0), 0);
            }
            v82 = 1;
            v83 = 0;
            gameswf::String::resize((gameswf::String::Self *)&v82, 2);
            v9 = (gameswf::Self *)&v83;
            if ( v82 == -1 )
              v9 = v84;
            gameswf::Strcpy_s(v9, (char *)&dword_0 + 3, (gameswf::Self *)"rb");
            v85 = -1;
            v86 = 127;
            v87 |= 1u;
            v10 = gameswf::getStandardMemberID((gameswf::Self *)&v82);
            if ( v10 == -1
              || (v11 = G4_VCALL<int>(v4, 36, v10, v75), v12 = 1, v11 == 0) )
            {
              v12 = G4_VCALL<int>(v4, 44, &v82, v75);
            }
            if ( v82 == -1 && (v87 & 1) != 0 )
            {
              v62 = v12;
              gameswf::free_internal(v84);
              v12 = v62;
            }
g4_m128_raw(v13) = 0;
            v74 = 0;
            if ( v12 != 0 )
            {
g4_m128_lane<float>(v13, 0) = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)v75);
              if (g4_m128_lane<float>(v13, 0) < -3.4028235e38f )
                v74 = 0;
              else
                v74 =g4_m128_lane<int32_t>(v13, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v13, *(__m128 *)&dword_1C7B5E0), 0);
            }
            v88 = 1;
            v89 = 0;
            gameswf::String::resize((gameswf::String::Self *)&v88, 2);
            v14 = (gameswf::Self *)&v89;
            if ( v88 == -1 )
              v14 = v90;
            gameswf::Strcpy_s(v14, (char *)&dword_0 + 3, (gameswf::Self *)"ga");
            v91 = -1;
            v92 = 127;
            v93 |= 1u;
            v15 = gameswf::getStandardMemberID((gameswf::Self *)&v88);
            if ( v15 == -1
              || (v16 = G4_VCALL<int>(v4, 36, v15, v75), v17 = 1, v16 == 0) )
            {
              v17 = G4_VCALL<int>(v4, 44, &v88, v75);
            }
            if ( v88 == -1 && (v93 & 1) != 0 )
            {
              v61 = v17;
              gameswf::free_internal(v90);
              v17 = v61;
            }
g4_m128_raw(v18) = 0x3F800000u;
            v73 = 1065353216;
            if ( v17 != 0 )
            {
              v53 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)v75);
g4_m128_lane<float>(v18, 0) = v53 * 0.01f;
              if (g4_m128_lane<float>(v18, 0) < -3.4028235e38f )
                v73 = 0;
              else
                v73 =g4_m128_lane<int32_t>(v18, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v18, *(__m128 *)&dword_1C7B5E0), 0);
            }
            v94 = 1;
            v95 = 0;
            gameswf::String::resize((gameswf::String::Self *)&v94, 2);
            v19 = (gameswf::Self *)&v95;
            if ( v94 == -1 )
              v19 = v96;
            gameswf::Strcpy_s(v19, (char *)&dword_0 + 3, (gameswf::Self *)"gb");
            v97 = -1;
            v98 = 127;
            v99 |= 1u;
            v20 = gameswf::getStandardMemberID((gameswf::Self *)&v94);
            if ( v20 == -1
              || (v21 = G4_VCALL<int>(v4, 36, v20, v75), v22 = 1, v21 == 0) )
            {
              v22 = G4_VCALL<int>(v4, 44, &v94, v75);
            }
            if ( v94 == -1 && (v99 & 1) != 0 )
            {
              v66 = v22;
              gameswf::free_internal(v96);
              v22 = v66;
            }
g4_m128_raw(v23) = 0;
            v69 = 0;
            if ( v22 != 0 )
            {
g4_m128_lane<float>(v23, 0) = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)v75);
              if (g4_m128_lane<float>(v23, 0) < -3.4028235e38f )
                v69 = 0;
              else
                v69 =g4_m128_lane<int32_t>(v23, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v23, *(__m128 *)&dword_1C7B5E0), 0);
            }
            v100 = 1;
            v101 = 0;
            gameswf::String::resize((gameswf::String::Self *)&v100, 2);
            v24 = (gameswf::Self *)&v101;
            if ( v100 == -1 )
              v24 = v102;
            gameswf::Strcpy_s(v24, (char *)&dword_0 + 3, (gameswf::Self *)"ba");
            v103 = -1;
            v104 = 127;
            v105 |= 1u;
            v25 = gameswf::getStandardMemberID((gameswf::Self *)&v100);
            if ( v25 == -1
              || (v26 = G4_VCALL<int>(v4, 36, v25, v75), v27 = 1, v26 == 0) )
            {
              v27 = G4_VCALL<int>(v4, 44, &v100, v75);
            }
            if ( v100 == -1 && (v105 & 1) != 0 )
            {
              v65 = v27;
              gameswf::free_internal(v102);
              v27 = v65;
            }
g4_m128_raw(v28) = 0x3F800000u;
            v72 = 1065353216;
            if ( v27 != 0 )
            {
              v54 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)v75);
g4_m128_lane<float>(v28, 0) = v54 * 0.01f;
              if (g4_m128_lane<float>(v28, 0) < -3.4028235e38f )
                v72 = 0;
              else
                v72 =g4_m128_lane<int32_t>(v28, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v28, *(__m128 *)&dword_1C7B5E0), 0);
            }
            v106 = 1;
            v107 = 0;
            gameswf::String::resize((gameswf::String::Self *)&v106, 2);
            v29 = (gameswf::Self *)&v107;
            if ( v106 == -1 )
              v29 = v108;
            gameswf::Strcpy_s(v29, (char *)&dword_0 + 3, (gameswf::Self *)"bb");
            v109 = -1;
            v110 = 127;
            v111 |= 1u;
            v30 = gameswf::getStandardMemberID((gameswf::Self *)&v106);
            if ( v30 == -1
              || (v31 = G4_VCALL<int>(v4, 36, v30, v75), v32 = 1, v31 == 0) )
            {
              v32 = G4_VCALL<int>(v4, 44, &v106, v75);
            }
            if ( v106 == -1 && (v111 & 1) != 0 )
            {
              v64 = v32;
              gameswf::free_internal(v108);
              v32 = v64;
            }
g4_m128_raw(v33) = 0;
            v68 = 0;
            if ( v32 != 0 )
            {
g4_m128_lane<float>(v33, 0) = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)v75);
              if (g4_m128_lane<float>(v33, 0) < -3.4028235e38f )
                v68 = 0;
              else
                v68 =g4_m128_lane<int32_t>(v33, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v33, *(__m128 *)&dword_1C7B5E0), 0);
            }
            v112 = 1;
            v113 = 0;
            gameswf::String::resize((gameswf::String::Self *)&v112, 2);
            v34 = (gameswf::Self *)&v113;
            if ( v112 == -1 )
              v34 = v114;
            gameswf::Strcpy_s(v34, (char *)&dword_0 + 3, (gameswf::Self *)"aa");
            v115 = -1;
            v116 = 127;
            v117 |= 1u;
            v35 = gameswf::getStandardMemberID((gameswf::Self *)&v112);
            if ( v35 == -1
              || (v36 = G4_VCALL<int>(v4, 36, v35, v75), v37 = 1, v36 == 0) )
            {
              v37 = G4_VCALL<int>(v4, 44, &v112, v75);
            }
            if ( v112 == -1 && (v117 & 1) != 0 )
            {
              v63 = v37;
              gameswf::free_internal(v114);
              v37 = v63;
            }
g4_m128_raw(v38) = 0x3F800000u;
            v71 = 1065353216;
            if ( v37 != 0 )
            {
              v52 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)v75);
g4_m128_lane<float>(v38, 0) = v52 * 0.01f;
              if (g4_m128_lane<float>(v38, 0) < -3.4028235e38f )
                v71 = 0;
              else
                v71 =g4_m128_lane<int32_t>(v38, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v38, *(__m128 *)&dword_1C7B5E0), 0);
            }
            v118 = 1;
            v119 = 0;
            gameswf::String::resize((gameswf::String::Self *)&v118, 2);
            v39 = (gameswf::Self *)&v119;
            if ( v118 == -1 )
              v39 = v120;
            gameswf::Strcpy_s(v39, (char *)&dword_0 + 3, (gameswf::Self *)"ab");
            v121 = -1;
            v122 = 127;
            v123 |= 1u;
            v40 = gameswf::getStandardMemberID((gameswf::Self *)&v118);
            if ( v40 == -1
              || (v41 = G4_VCALL<int>(v4, 36, v40, v75), v42 = 1, v41 == 0) )
            {
              v42 = G4_VCALL<int>(v4, 44, &v118, v75);
            }
            if ( v118 == -1 && (v123 & 1) != 0 )
            {
              v60 = v42;
              gameswf::free_internal(v120);
              v42 = v60;
            }
g4_m128_raw(v43) = 0;
            if ( v42 != 0 )
            {
g4_m128_lane<float>(v43, 0) = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)v75);
              if (g4_m128_lane<float>(v43, 0) < -3.4028235e38f )
g4_m128_lane<int32_t>(v43, 0) = 0;
              else
g4_m128_lane<int32_t>(v43, 0) &=g4_m128_lane<uint32_t>(_mm_cmple_ss(v43, *(__m128 *)&dword_1C7B5E0), 0);
            }
            v44 = v1[11];
            if ( v44 != 0 )
            {
              v45 = (gameswf::Self *)v1[10];
              if ( *((uint8_t *)v45 + 2) == 0 )
              {
                v50 = (*(uint16_t *)v45)-- == 1;
                if ( v50 )
                  gameswf::free_internal(v45);
                v1[10] = 0;
                v1[11] = 0;
                v44 = 0;
              }
            }
            v46 = *(uint32_t *)(v44 + 76);
            if ( v46 == 0 )
            {
              v55 = opNew(0x94u);
              v56 = (uint16_t *)(v55 + 32);
              *(uint32_t *)v55 = 1065353216;
              *(uint32_t *)(v55 + 8) = 1065353216;
              *(uint32_t *)(v55 + 16) = 1065353216;
              *(uint32_t *)(v55 + 24) = 1065353216;
              *(uint32_t *)(v55 + 4) = 0;
              *(uint32_t *)(v55 + 12) = 0;
              *(uint32_t *)(v55 + 20) = 0;
              *(uint32_t *)(v55 + 28) = 0;
              v46 = v55;
              v67 = 24;
              if ( ((v55 + 32) & 1) != 0 )
              {
                *(uint8_t *)(v55 + 32) = 0;
                v56 = (uint16_t *)(v55 + 33);
                v67 = 23;
              }
              if ( ((uint8_t)(uintptr_t)(v56) & 2) != 0 )
              {
                *v56++ = 0;
                v67 -= 2;
              }
              memset(v56, 0, 4 * (v67 >> 2));
              v57 = &v56[2 * (v67 >> 2)];
              if ( (v67 & 2) != 0 )
                *v57++ = 0;
              if ( (v67 & 1) != 0 )
                *(uint8_t *)v57 = 0;
              v58 = *(uint32_t *)(v55 + 92);
              *(uint32_t *)(v46 + 32) = 1065353216;
              v58 |= 0x7FFFFFu;
              *(uint32_t *)(v46 + 48) = 1065353216;
              *(uint32_t *)(v46 + 92) = v58;
              *(uint32_t *)(v46 + 56) = 0;
              *(uint32_t *)(v46 + 60) = 0;
              *(uint32_t *)(v46 + 64) = 0;
              *(uint32_t *)(v46 + 68) = 0;
              *(uint32_t *)(v46 + 72) = 0;
              *(uint8_t *)(v46 + 76) = 1;
              *(uint8_t *)(v46 + 77) = 0;
              *(uint8_t *)(v46 + 94) = BYTE2(v58) & 0x7F;
              *(uint16_t *)(v46 + 95) = HIBYTE(v58) | 1;
              *(uint8_t *)(v46 + 97) = 0;
              *(uint8_t *)(v46 + 98) = 0;
              *(uint32_t *)(v46 + 100) = 0;
              *(uint32_t *)(v46 + 104) = 1065353216;
              *(uint32_t *)(v46 + 108) = 0;
              *(uint32_t *)(v46 + 112) = 1065353216;
              *(uint32_t *)(v46 + 116) = 0;
              *(uint32_t *)(v46 + 120) = 0;
              *(uint32_t *)(v46 + 124) = 0;
              *(uint32_t *)(v46 + 128) = 0;
              *(uint32_t *)(v46 + 132) = 0;
              *(uint32_t *)(v46 + 136) = 0;
              *(uint32_t *)(v46 + 140) = 0;
              *(uint32_t *)(v46 + 144) = 0;
              *(uint32_t *)(v44 + 76) = v46;
            }
            *(uint32_t *)v46 = v70;
            *(uint32_t *)(v46 + 4) = v74;
            *(uint32_t *)(v46 + 8) = v73;
            *(uint32_t *)(v46 + 12) = v69;
            *(uint32_t *)(v46 + 16) = v72;
            *(uint32_t *)(v46 + 20) = v68;
            *(uint32_t *)(v46 + 24) = v71;
            *(uint32_t *)(v46 + 28) =g4_m128_lane<int32_t>(v43, 0);
            *(uint32_t *)(v44 + 64) = *(uint32_t *)(v44 + 76);
            v47 = *(gameswf::Character::Self **)(v44 + 56);
            *(uint8_t *)(v44 + 146) = 1;
            if ( v47 != nullptr )
            {
              v48 = *(gameswf::Self **)(v44 + 52);
              if ( *((uint8_t *)v48 + 2) != 0 )
              {
                gameswf::Character::invalidateBitmapCache(v47);
              }
              else
              {
                v50 = (*(uint16_t *)v48)-- == 1;
                if ( v50 )
                  gameswf::free_internal(v48);
                *(uint32_t *)(v44 + 52) = 0;
                *(uint32_t *)(v44 + 56) = 0;
              }
            }
            gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v75);
          }
        }
      }
      else
      {
        v50 = (*(uint16_t *)v2)-- == 1;
        if ( v50 )
          gameswf::free_internal(v2);
        v1[10] = 0;
        v1[11] = 0;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASColor::setRGB  (binary VA: 0x11293c0)
// Original: gameswf::ASColor::setRGB
// ----------------------------------------------------------------------------
void gameswf::ASColor::setRGB(__m128 a1, __m128 a2, __m128 a3, int a4)
{
  uint32_t *v4;
  gameswf::Self *v5;
  int v6;
  int32_t v7; // xmm2_4
  int32_t v8; // xmm1_4
  uint32_t v9; // xmm0_4
  int v10;
  gameswf::Self *v11;
  int v12;
  int v13;
  gameswf::Self *v14;
  bool v15;
  unsigned int v16;
  int v17;
  uint16_t *v18;
  uint16_t *v19;
  int v20;

  if ( *(int *)(a4 + 16) > 0 )
  {
    v4 = *(uint32_t **)(a4 + 4);
    if ( v4 != nullptr && G4_VCALL<uint8_t>(v4, 8, 21) != 0 && v4[11] != 0 )
    {
      v5 = (gameswf::Self *)v4[10];
      if ( *((uint8_t *)v5 + 2) != 0 )
      {
        v6 = (int)(double)gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a4 + 12)
                                                                        + 12 * *(uint32_t *)(a4 + 20)));
g4_m128_lane<float>(a3, 0) = (float)((float)0 * 65536.0) + (float)BYTE2(v6);
        if (g4_m128_lane<float>(a3, 0) < -3.4028235e38f )
        {
          v7 = 0;
        }
        else
        {
          a1 = _mm_cmple_ss(a3, *(__m128 *)&dword_1C7B5E0);
          v7 =g4_m128_lane<int32_t>(a3, 0) &g4_m128_lane<int32_t>(a1, 0);
        }
g4_m128_lane<float>(a2, 0) = (float)((float)0 * 65536.0) + (float)BYTE1(v6);
        if (g4_m128_lane<float>(a2, 0) < -3.4028235e38f )
        {
          v8 = 0;
        }
        else
        {
          a1 = _mm_cmple_ss(a2, *(__m128 *)&dword_1C7B5E0);
          v8 =g4_m128_lane<int32_t>(a2, 0) &g4_m128_lane<int32_t>(a1, 0);
        }
g4_m128_lane<float>(a1, 0) = (float)((float)0 * 65536.0) + (float)(uint8_t)v6;
        if (g4_m128_lane<float>(a1, 0) < -3.4028235e38f )
          v9 = 0;
        else
          v9 =g4_m128_lane<int32_t>(a1, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(a1, *(__m128 *)&dword_1C7B5E0), 0);
        v10 = v4[11];
        if ( v10 != 0 )
        {
          v11 = (gameswf::Self *)v4[10];
          if ( *((uint8_t *)v11 + 2) == 0 )
          {
            v15 = (*(uint16_t *)v11)-- == 1;
            if ( v15 )
              gameswf::free_internal(v11);
            v4[10] = 0;
            v4[11] = 0;
            v10 = 0;
          }
        }
        v12 = *(uint32_t *)(v10 + 76);
        if ( v12 == 0 )
        {
          v16 = 24;
          v17 = opNew(0x94u);
          v18 = (uint16_t *)(v17 + 32);
          *(uint32_t *)v17 = 1065353216;
          *(uint32_t *)(v17 + 8) = 1065353216;
          *(uint32_t *)(v17 + 16) = 1065353216;
          *(uint32_t *)(v17 + 24) = 1065353216;
          *(uint32_t *)(v17 + 4) = 0;
          *(uint32_t *)(v17 + 12) = 0;
          *(uint32_t *)(v17 + 20) = 0;
          *(uint32_t *)(v17 + 28) = 0;
          v12 = v17;
          if ( ((v17 + 32) & 1) != 0 )
          {
            *(uint8_t *)(v17 + 32) = 0;
            v18 = (uint16_t *)(v17 + 33);
            LOWORD(v16) = 23;
          }
          if ( ((uint8_t)(uintptr_t)(v18) & 2) != 0 )
          {
            *v18 = 0;
            v16 -= 2;
            ++v18;
          }
          memset(v18, 0, 4 * (v16 >> 2));
          v19 = &v18[2 * (v16 >> 2)];
          if ( (v16 & 2) != 0 )
            *v19++ = 0;
          if ( (v16 & 1) != 0 )
            *(uint8_t *)v19 = 0;
          v20 = *(uint32_t *)(v17 + 92);
          *(uint32_t *)(v12 + 32) = 1065353216;
          v20 |= 0x7FFFFFu;
          *(uint32_t *)(v12 + 48) = 1065353216;
          *(uint32_t *)(v12 + 92) = v20;
          *(uint32_t *)(v12 + 56) = 0;
          *(uint32_t *)(v12 + 60) = 0;
          *(uint32_t *)(v12 + 64) = 0;
          *(uint32_t *)(v12 + 68) = 0;
          *(uint32_t *)(v12 + 72) = 0;
          *(uint8_t *)(v12 + 76) = 1;
          *(uint8_t *)(v12 + 77) = 0;
          *(uint8_t *)(v12 + 94) = BYTE2(v20) & 0x7F;
          *(uint16_t *)(v12 + 95) = HIBYTE(v20) | 1;
          *(uint8_t *)(v12 + 97) = 0;
          *(uint8_t *)(v12 + 98) = 0;
          *(uint32_t *)(v12 + 100) = 0;
          *(uint32_t *)(v12 + 104) = 1065353216;
          *(uint32_t *)(v12 + 108) = 0;
          *(uint32_t *)(v12 + 112) = 1065353216;
          *(uint32_t *)(v12 + 116) = 0;
          *(uint32_t *)(v12 + 120) = 0;
          *(uint32_t *)(v12 + 124) = 0;
          *(uint32_t *)(v12 + 128) = 0;
          *(uint32_t *)(v12 + 132) = 0;
          *(uint32_t *)(v12 + 136) = 0;
          *(uint32_t *)(v12 + 140) = 0;
          *(uint32_t *)(v12 + 144) = 0;
          *(uint32_t *)(v10 + 76) = v12;
        }
        *(uint32_t *)v12 = 0;
        *(uint32_t *)(v12 + 8) = 0;
        *(uint32_t *)(v12 + 4) = v7;
        *(uint32_t *)(v12 + 16) = 0;
        *(uint32_t *)(v12 + 12) = v8;
        *(uint32_t *)(v12 + 24) = 1065353216;
        *(uint32_t *)(v12 + 20) = v9;
        *(uint32_t *)(v12 + 28) = 0;
        v13 = *(uint32_t *)(v10 + 76);
        *(uint8_t *)(v10 + 146) = 1;
        *(uint32_t *)(v10 + 64) = v13;
        if ( *(uint32_t *)(v10 + 56) != 0 )
        {
          v14 = *(gameswf::Self **)(v10 + 52);
          if ( *((uint8_t *)v14 + 2) != 0 )
          {
            gameswf::Character::invalidateBitmapCache(*(gameswf::Character::Self **)(v10 + 56));
          }
          else
          {
            v15 = (*(uint16_t *)v14)-- == 1;
            if ( v15 )
              gameswf::free_internal(v14);
            *(uint32_t *)(v10 + 52) = 0;
            *(uint32_t *)(v10 + 56) = 0;
          }
        }
      }
      else
      {
        v15 = (*(uint16_t *)v5)-- == 1;
        if ( v15 )
          gameswf::free_internal(v5);
        v4[10] = 0;
        v4[11] = 0;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASColor::Construct  (binary VA: 0x1129810)
// Original: gameswf::ASColor::ASColor
// ----------------------------------------------------------------------------
gameswf::ASColor::Self * gameswf::ASColor::Construct(gameswf::Self **self, gameswf::Player::Self *a2, gameswf::Self ***a3)
{
  gameswf::Self *WeakProxy;
  gameswf::Self *v4;
  gameswf::Self **v6;
  gameswf::Self *v7;
  gameswf::Self *v8;
  gameswf::Self *v9;
  gameswf::Self *v10;
  gameswf::Self *v11;
  typedef gameswf::Self *_g4_t_v13;
  typedef uint8_t _g4_t_v14[12];
  typedef uint8_t _g4_t_v15[12];
  typedef uint8_t _g4_t_v16[12];
  typedef uint8_t _g4_t_v17[12];
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  typedef gameswf::Self *_g4_t_v20;
  typedef int16_t _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef char _g4_t_v25;
  typedef gameswf::Self *_g4_t_v26;
  typedef int16_t _g4_t_v27;
  typedef char _g4_t_v28;
  typedef char _g4_t_v29;
  typedef char _g4_t_v30;
  typedef char _g4_t_v31;
  typedef gameswf::Self *_g4_t_v32;
  typedef int16_t _g4_t_v33;
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef char _g4_t_v37;
  typedef gameswf::Self *_g4_t_v38;
  typedef int16_t _g4_t_v39;
  typedef char _g4_t_v40;
  typedef char _g4_t_v41;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v15)) > _g4_s2 ? (28u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v16)) > _g4_s3 ? (40u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v17)) > _g4_s4 ? (52u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v18)) > _g4_s5 ? (64u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (65u + sizeof(_g4_t_v19)) > _g4_s6 ? (65u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v20)) > _g4_s7 ? (76u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v21)) > _g4_s8 ? (80u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (82u + sizeof(_g4_t_v22)) > _g4_s9 ? (82u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (83u + sizeof(_g4_t_v23)) > _g4_s10 ? (83u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v24)) > _g4_s11 ? (96u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (97u + sizeof(_g4_t_v25)) > _g4_s12 ? (97u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (108u + sizeof(_g4_t_v26)) > _g4_s13 ? (108u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v27)) > _g4_s14 ? (112u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (114u + sizeof(_g4_t_v28)) > _g4_s15 ? (114u + sizeof(_g4_t_v28)) : _g4_s15,
    _g4_s17 = (115u + sizeof(_g4_t_v29)) > _g4_s16 ? (115u + sizeof(_g4_t_v29)) : _g4_s16,
    _g4_s18 = (128u + sizeof(_g4_t_v30)) > _g4_s17 ? (128u + sizeof(_g4_t_v30)) : _g4_s17,
    _g4_s19 = (129u + sizeof(_g4_t_v31)) > _g4_s18 ? (129u + sizeof(_g4_t_v31)) : _g4_s18,
    _g4_s20 = (140u + sizeof(_g4_t_v32)) > _g4_s19 ? (140u + sizeof(_g4_t_v32)) : _g4_s19,
    _g4_s21 = (144u + sizeof(_g4_t_v33)) > _g4_s20 ? (144u + sizeof(_g4_t_v33)) : _g4_s20,
    _g4_s22 = (146u + sizeof(_g4_t_v34)) > _g4_s21 ? (146u + sizeof(_g4_t_v34)) : _g4_s21,
    _g4_s23 = (147u + sizeof(_g4_t_v35)) > _g4_s22 ? (147u + sizeof(_g4_t_v35)) : _g4_s22,
    _g4_s24 = (160u + sizeof(_g4_t_v36)) > _g4_s23 ? (160u + sizeof(_g4_t_v36)) : _g4_s23,
    _g4_s25 = (161u + sizeof(_g4_t_v37)) > _g4_s24 ? (161u + sizeof(_g4_t_v37)) : _g4_s24,
    _g4_s26 = (172u + sizeof(_g4_t_v38)) > _g4_s25 ? (172u + sizeof(_g4_t_v38)) : _g4_s25,
    _g4_s27 = (176u + sizeof(_g4_t_v39)) > _g4_s26 ? (176u + sizeof(_g4_t_v39)) : _g4_s26,
    _g4_s28 = (178u + sizeof(_g4_t_v40)) > _g4_s27 ? (178u + sizeof(_g4_t_v40)) : _g4_s27,
    _g4_s29 = (179u + sizeof(_g4_t_v41)) > _g4_s28 ? (179u + sizeof(_g4_t_v41)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 52u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 65u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 76u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 80u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 82u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 83u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 96u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 97u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 108u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 112u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 114u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 115u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 128u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 129u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 140u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 144u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 146u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 147u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 160u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 161u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 172u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 176u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 178u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 179u);

  gameswf::ASObject::ASObject((gameswf::ASObject::Self *)self, a2);
  *(self + 10) = nullptr;
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_208FC48);
  *(self + 11) = (gameswf::Self *)a3;
  if ( a3 != nullptr )
  {
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy((gameswf::RefCounted::Self *)a3);
    v4 = *(self + 10);
    if ( WeakProxy != v4 )
    {
      if ( v4 != nullptr && (*(uint16_t *)v4)-- == 1 )
      {
        v13 = WeakProxy;
        gameswf::free_internal(v4);
        WeakProxy = v13;
      }
      *(self + 10) = WeakProxy;
      if ( WeakProxy != nullptr )
        ++*(uint16_t *)WeakProxy;
    }
  }
  *(self + 12) = (gameswf::Self *)1065353216;
  *(self + 14) = (gameswf::Self *)1065353216;
  *(self + 16) = (gameswf::Self *)1065353216;
  *(self + 18) = (gameswf::Self *)1065353216;
  *(self + 13) = nullptr;
  *(self + 15) = nullptr;
  *(self + 17) = nullptr;
  *(self + 19) = nullptr;
  v6 = a3[16];
  v7 = *v6;
  v14[0] = 0;
  *(self + 12) = v7;
  *(self + 13) = v6[1];
  *(self + 14) = v6[2];
  *(self + 15) = v6[3];
  *(self + 16) = v6[4];
  *(self + 17) = v6[5];
  *(self + 18) = v6[6];
  *(self + 19) = v6[7];
  v14[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v14, (int)(uintptr_t)(gameswf::ASColor::getRGB));
  v18 = 1;
  v19 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v18, 6);
  v8 = (gameswf::Self *)&v19;
  if ( v18 == -1 )
    v8 = v20;
  gameswf::Strcpy_s(v8, (char *)&loc_6 + 1, (gameswf::Self *)"getRGB");
  v21 = -1;
  v22 = 127;
  v23 |= 1u;
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)self,
    (const gameswf::StringI::Self *)&v18,
    (const gameswf::ASValue::Self *)v14);
  if ( v18 == -1 && (v23 & 1) != 0 )
    gameswf::free_internal(v20);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v14);
  v15[0] = 0;
  v15[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v15, (int)(uintptr_t)(gameswf::ASColor::setRGB));
  v24 = 1;
  v25 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v24, 6);
  v9 = (gameswf::Self *)&v25;
  if ( v24 == -1 )
    v9 = v26;
  gameswf::Strcpy_s(v9, (char *)&loc_6 + 1, (gameswf::Self *)"setRGB");
  v27 = -1;
  v28 = 127;
  v29 |= 1u;
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)self,
    (const gameswf::StringI::Self *)&v24,
    (const gameswf::ASValue::Self *)v15);
  if ( v24 == -1 && (v29 & 1) != 0 )
    gameswf::free_internal(v26);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
  v16[0] = 0;
  v16[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v16, (int)(uintptr_t)(gameswf::ASColor::getTransform));
  v30 = 1;
  v31 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v30, 12);
  v10 = (gameswf::Self *)&v31;
  if ( v30 == -1 )
    v10 = v32;
  gameswf::Strcpy_s(v10, &byte_9[4], (gameswf::Self *)"getTransform");
  v33 = -1;
  v34 = 127;
  v35 |= 1u;
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)self,
    (const gameswf::StringI::Self *)&v30,
    (const gameswf::ASValue::Self *)v16);
  if ( v30 == -1 && (v35 & 1) != 0 )
    gameswf::free_internal(v32);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v16);
  v17[0] = 0;
  v17[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v17, (int)(uintptr_t)(gameswf::ASColor::setTransform));
  v36 = 1;
  v37 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v36, 12);
  v11 = (gameswf::Self *)&v37;
  if ( v36 == -1 )
    v11 = v38;
  gameswf::Strcpy_s(v11, &byte_9[4], (gameswf::Self *)"setTransform");
  v39 = -1;
  v40 = 127;
  v41 |= 1u;
  gameswf::ASObject::builtinMember(
    (gameswf::ASObject::Self *)self,
    (const gameswf::StringI::Self *)&v36,
    (const gameswf::ASValue::Self *)v17);
  if ( v36 != -1 || (v41 & 1) == 0 )
    return (gameswf::ASColor::Self *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v17);
  gameswf::free_internal(v38);
  return (gameswf::ASColor::Self *)gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v17);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASColor::ctor  (binary VA: 0x1129cf0)
// Original: gameswf::ASColor::ctor
// ----------------------------------------------------------------------------
void gameswf::ASColor::ctor(int a1)
{
  int v1;
  gameswf::Self ***v2;
  gameswf::ASObject::Self *v3;
  gameswf::Player::Self *v4;
  gameswf::Self *v5;
  gameswf::Self **v7;
  gameswf::ASObject::Self *v8;

  if ( *(uint32_t *)(a1 + 16) == 1 )
  {
    v1 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
    if ( *(uint8_t *)v1 == 5 )
    {
      v2 = *(gameswf::Self ****)(v1 + 4);
      if ( v2 != nullptr && ((uint8_t (*)(gameswf::Self ***, int))(*v2)[2])(v2, 1) != 0 )
      {
        v3 = *(gameswf::ASObject::Self **)(a1 + 12);
        v4 = *((gameswf::Player::Self **)v3 + 53);
        if ( v4 != nullptr )
        {
          v5 = *((gameswf::Self **)v3 + 52);
          if ( *((uint8_t *)v5 + 2) == 0 )
          {
            if ( (*(uint16_t *)v5)-- == 1 )
            {
              v8 = v3;
              gameswf::free_internal(v5);
              v3 = v8;
            }
            *((uint32_t *)v3 + 52) = 0;
            *((uint32_t *)v3 + 53) = 0;
            v4 = nullptr;
          }
        }
        v7 = (gameswf::Self **)opNew(0x50u);
        gameswf::ASColor::Construct(v7, v4, v2);
        gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, (gameswf::ASObject::Self *)v7);
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASColor::is  (binary VA: 0x1129e00)
// Original: gameswf::ASColor::is
// ----------------------------------------------------------------------------
bool gameswf::ASColor::is(gameswf::ASColor::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 21 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASColor::Destroy  (binary VA: 0x1129e20)
// Original: gameswf::ASColor::~ASColor
// ----------------------------------------------------------------------------
void gameswf::ASColor::Destroy(gameswf::ASColor::Self *self)
{
  gameswf::Self *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FC48);
  v1 = *((gameswf::Self **)self + 10);
  if ( v1 != nullptr && (*(uint16_t *)v1)-- == 1 )
    gameswf::free_internal(v1);
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASColor::Destroy_ea1129e90  (binary VA: 0x1129e90)
// Original: gameswf::ASColor::~ASColor
// ----------------------------------------------------------------------------
void gameswf::ASColor::Destroy_ea1129e90(gameswf::ASColor::Self *self)
{
  gameswf::Self *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208FC48);
  v1 = *((gameswf::Self **)self + 10);
  if ( v1 != nullptr && (*(uint16_t *)v1)-- == 1 )
    gameswf::free_internal(v1);
  gameswf::ASObject::Destroy(self);
}


