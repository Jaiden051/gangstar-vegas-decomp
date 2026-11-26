#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpCvxCvxD.h"

// ----------------------------------------------------------------------------
// Function: hkpCvxCvxDistByHeuristicSampling  (binary VA: 0x18182f0)
// Original: hkpCvxCvxDistByHeuristicSampling
// ----------------------------------------------------------------------------
int hkpCvxCvxDistByHeuristicSampling(int *a1, int a2, float *a3, uint32_t *a4, uint32_t *a5, int a6)
{
  float *v6;
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm4_4
  __m128 v10;
  int v11;
  int v12;
  __m128 v13;
  int32_t v14; // xmm5_4
  float v15; // xmm3_4
  __m128i v16;
  float v17; // xmm1_4
  float v18; // xmm6_4
  int v19;
  float v20; // xmm5_4
  float v21; // xmm0_4
  float v22; // xmm5_4
  __m128 v23;
  __m128 v24;
  __m128 v25;
  float v26; // xmm0_4
  float v27; // xmm5_4
  __m128 v28;
  __m128i v29;
  float v30; // xmm2_4
  int v31;
  float v32; // xmm1_4
  float v33; // xmm0_4
  __m128 v34;
  __m128 v35;
  __m128 v36;
  float v37; // xmm3_4
  __m128 v38;
  int v39;
  int v40;
  float v41; // xmm0_4
  int v42;
  int v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef __m128 *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef __m128 *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef __m128 *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef __m128 *_g4_t_v64;
  typedef __m128 *_g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef __m128 *_g4_t_v74;
  typedef __m128 *_g4_t_v75;
  typedef float _g4_t_v76;
  typedef float _g4_t_v77;
  typedef __m128 *_g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef int32_t _g4_t_v85;
  typedef int32_t _g4_t_v86;
  typedef int32_t _g4_t_v87;
  typedef int32_t _g4_t_v88;
  typedef int32_t _g4_t_v89;
  typedef int32_t _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97;
  typedef float _g4_t_v98;
  typedef float _g4_t_v99;
  typedef float _g4_t_v100;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef float _g4_t_v103;
  typedef float _g4_t_v104;
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108;
  typedef float _g4_t_v109;
  typedef float _g4_t_v110;
  typedef float _g4_t_v111;
  typedef float _g4_t_v112;
  typedef float _g4_t_v113;
  typedef float _g4_t_v114;
  typedef float _g4_t_v115;
  typedef float _g4_t_v116;
  typedef float _g4_t_v117;
  typedef float _g4_t_v118;
  typedef float _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef float _g4_t_v122;
  typedef float _g4_t_v123;
  typedef float _g4_t_v124;
  typedef float _g4_t_v125;
  typedef float _g4_t_v126;
  typedef float _g4_t_v127;
  typedef float _g4_t_v128;
  typedef float _g4_t_v129;
  typedef float _g4_t_v130;
  typedef float _g4_t_v131;
  typedef float _g4_t_v132;
  typedef float _g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef int _g4_t_v138;
  typedef int _g4_t_v139;
  typedef float _g4_t_v140;
  typedef float _g4_t_v141;
  typedef float _g4_t_v142;
  typedef float _g4_t_v143;
  typedef float _g4_t_v144;
  typedef float _g4_t_v145;
  typedef float _g4_t_v146;
  typedef float _g4_t_v147;
  typedef unsigned int _g4_t_v148;
  typedef float _g4_t_v149;
  typedef float _g4_t_v150;
  typedef float _g4_t_v151;
  typedef __m128 _g4_t_v152;
  typedef __m128 _g4_t_v153;
  typedef __m128 _g4_t_v154;
  typedef __m128 _g4_t_v155;
  typedef int _g4_t_v156;
  typedef int _g4_t_v157;
  typedef int _g4_t_v158;
  typedef int _g4_t_v159;
  typedef int _g4_t_v160;
  typedef int _g4_t_v161;
  typedef int _g4_t_v162;
  typedef int _g4_t_v163;
  typedef float _g4_t_v164;
  typedef float _g4_t_v165;
  typedef float _g4_t_v166;
  typedef float _g4_t_v167;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v45)) > _g4_s0 ? (12u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v46)) > _g4_s1 ? (12u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v47)) > _g4_s2 ? (12u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v48)) > _g4_s3 ? (12u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v49)) > _g4_s4 ? (12u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v50)) > _g4_s5 ? (16u + sizeof(_g4_t_v50)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v51)) > _g4_s6 ? (16u + sizeof(_g4_t_v51)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v52)) > _g4_s7 ? (16u + sizeof(_g4_t_v52)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v53)) > _g4_s8 ? (16u + sizeof(_g4_t_v53)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v54)) > _g4_s9 ? (16u + sizeof(_g4_t_v54)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v55)) > _g4_s10 ? (16u + sizeof(_g4_t_v55)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v56)) > _g4_s11 ? (20u + sizeof(_g4_t_v56)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v57)) > _g4_s12 ? (20u + sizeof(_g4_t_v57)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v58)) > _g4_s13 ? (20u + sizeof(_g4_t_v58)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v59)) > _g4_s14 ? (20u + sizeof(_g4_t_v59)) : _g4_s14,
    _g4_s16 = (20u + sizeof(_g4_t_v60)) > _g4_s15 ? (20u + sizeof(_g4_t_v60)) : _g4_s15,
    _g4_s17 = (20u + sizeof(_g4_t_v61)) > _g4_s16 ? (20u + sizeof(_g4_t_v61)) : _g4_s16,
    _g4_s18 = (24u + sizeof(_g4_t_v62)) > _g4_s17 ? (24u + sizeof(_g4_t_v62)) : _g4_s17,
    _g4_s19 = (24u + sizeof(_g4_t_v63)) > _g4_s18 ? (24u + sizeof(_g4_t_v63)) : _g4_s18,
    _g4_s20 = (24u + sizeof(_g4_t_v64)) > _g4_s19 ? (24u + sizeof(_g4_t_v64)) : _g4_s19,
    _g4_s21 = (24u + sizeof(_g4_t_v65)) > _g4_s20 ? (24u + sizeof(_g4_t_v65)) : _g4_s20,
    _g4_s22 = (24u + sizeof(_g4_t_v66)) > _g4_s21 ? (24u + sizeof(_g4_t_v66)) : _g4_s21,
    _g4_s23 = (24u + sizeof(_g4_t_v67)) > _g4_s22 ? (24u + sizeof(_g4_t_v67)) : _g4_s22,
    _g4_s24 = (28u + sizeof(_g4_t_v68)) > _g4_s23 ? (28u + sizeof(_g4_t_v68)) : _g4_s23,
    _g4_s25 = (28u + sizeof(_g4_t_v69)) > _g4_s24 ? (28u + sizeof(_g4_t_v69)) : _g4_s24,
    _g4_s26 = (28u + sizeof(_g4_t_v70)) > _g4_s25 ? (28u + sizeof(_g4_t_v70)) : _g4_s25,
    _g4_s27 = (28u + sizeof(_g4_t_v71)) > _g4_s26 ? (28u + sizeof(_g4_t_v71)) : _g4_s26,
    _g4_s28 = (28u + sizeof(_g4_t_v72)) > _g4_s27 ? (28u + sizeof(_g4_t_v72)) : _g4_s27,
    _g4_s29 = (28u + sizeof(_g4_t_v73)) > _g4_s28 ? (28u + sizeof(_g4_t_v73)) : _g4_s28,
    _g4_s30 = (32u + sizeof(_g4_t_v74)) > _g4_s29 ? (32u + sizeof(_g4_t_v74)) : _g4_s29,
    _g4_s31 = (32u + sizeof(_g4_t_v75)) > _g4_s30 ? (32u + sizeof(_g4_t_v75)) : _g4_s30,
    _g4_s32 = (32u + sizeof(_g4_t_v76)) > _g4_s31 ? (32u + sizeof(_g4_t_v76)) : _g4_s31,
    _g4_s33 = (32u + sizeof(_g4_t_v77)) > _g4_s32 ? (32u + sizeof(_g4_t_v77)) : _g4_s32,
    _g4_s34 = (32u + sizeof(_g4_t_v78)) > _g4_s33 ? (32u + sizeof(_g4_t_v78)) : _g4_s33,
    _g4_s35 = (36u + sizeof(_g4_t_v79)) > _g4_s34 ? (36u + sizeof(_g4_t_v79)) : _g4_s34,
    _g4_s36 = (36u + sizeof(_g4_t_v80)) > _g4_s35 ? (36u + sizeof(_g4_t_v80)) : _g4_s35,
    _g4_s37 = (36u + sizeof(_g4_t_v81)) > _g4_s36 ? (36u + sizeof(_g4_t_v81)) : _g4_s36,
    _g4_s38 = (36u + sizeof(_g4_t_v82)) > _g4_s37 ? (36u + sizeof(_g4_t_v82)) : _g4_s37,
    _g4_s39 = (36u + sizeof(_g4_t_v83)) > _g4_s38 ? (36u + sizeof(_g4_t_v83)) : _g4_s38,
    _g4_s40 = (36u + sizeof(_g4_t_v84)) > _g4_s39 ? (36u + sizeof(_g4_t_v84)) : _g4_s39,
    _g4_s41 = (40u + sizeof(_g4_t_v85)) > _g4_s40 ? (40u + sizeof(_g4_t_v85)) : _g4_s40,
    _g4_s42 = (40u + sizeof(_g4_t_v86)) > _g4_s41 ? (40u + sizeof(_g4_t_v86)) : _g4_s41,
    _g4_s43 = (40u + sizeof(_g4_t_v87)) > _g4_s42 ? (40u + sizeof(_g4_t_v87)) : _g4_s42,
    _g4_s44 = (40u + sizeof(_g4_t_v88)) > _g4_s43 ? (40u + sizeof(_g4_t_v88)) : _g4_s43,
    _g4_s45 = (40u + sizeof(_g4_t_v89)) > _g4_s44 ? (40u + sizeof(_g4_t_v89)) : _g4_s44,
    _g4_s46 = (40u + sizeof(_g4_t_v90)) > _g4_s45 ? (40u + sizeof(_g4_t_v90)) : _g4_s45,
    _g4_s47 = (44u + sizeof(_g4_t_v91)) > _g4_s46 ? (44u + sizeof(_g4_t_v91)) : _g4_s46,
    _g4_s48 = (44u + sizeof(_g4_t_v92)) > _g4_s47 ? (44u + sizeof(_g4_t_v92)) : _g4_s47,
    _g4_s49 = (44u + sizeof(_g4_t_v93)) > _g4_s48 ? (44u + sizeof(_g4_t_v93)) : _g4_s48,
    _g4_s50 = (44u + sizeof(_g4_t_v94)) > _g4_s49 ? (44u + sizeof(_g4_t_v94)) : _g4_s49,
    _g4_s51 = (44u + sizeof(_g4_t_v95)) > _g4_s50 ? (44u + sizeof(_g4_t_v95)) : _g4_s50,
    _g4_s52 = (44u + sizeof(_g4_t_v96)) > _g4_s51 ? (44u + sizeof(_g4_t_v96)) : _g4_s51,
    _g4_s53 = (48u + sizeof(_g4_t_v97)) > _g4_s52 ? (48u + sizeof(_g4_t_v97)) : _g4_s52,
    _g4_s54 = (48u + sizeof(_g4_t_v98)) > _g4_s53 ? (48u + sizeof(_g4_t_v98)) : _g4_s53,
    _g4_s55 = (48u + sizeof(_g4_t_v99)) > _g4_s54 ? (48u + sizeof(_g4_t_v99)) : _g4_s54,
    _g4_s56 = (48u + sizeof(_g4_t_v100)) > _g4_s55 ? (48u + sizeof(_g4_t_v100)) : _g4_s55,
    _g4_s57 = (48u + sizeof(_g4_t_v101)) > _g4_s56 ? (48u + sizeof(_g4_t_v101)) : _g4_s56,
    _g4_s58 = (48u + sizeof(_g4_t_v102)) > _g4_s57 ? (48u + sizeof(_g4_t_v102)) : _g4_s57,
    _g4_s59 = (52u + sizeof(_g4_t_v103)) > _g4_s58 ? (52u + sizeof(_g4_t_v103)) : _g4_s58,
    _g4_s60 = (52u + sizeof(_g4_t_v104)) > _g4_s59 ? (52u + sizeof(_g4_t_v104)) : _g4_s59,
    _g4_s61 = (52u + sizeof(_g4_t_v105)) > _g4_s60 ? (52u + sizeof(_g4_t_v105)) : _g4_s60,
    _g4_s62 = (52u + sizeof(_g4_t_v106)) > _g4_s61 ? (52u + sizeof(_g4_t_v106)) : _g4_s61,
    _g4_s63 = (52u + sizeof(_g4_t_v107)) > _g4_s62 ? (52u + sizeof(_g4_t_v107)) : _g4_s62,
    _g4_s64 = (52u + sizeof(_g4_t_v108)) > _g4_s63 ? (52u + sizeof(_g4_t_v108)) : _g4_s63,
    _g4_s65 = (56u + sizeof(_g4_t_v109)) > _g4_s64 ? (56u + sizeof(_g4_t_v109)) : _g4_s64,
    _g4_s66 = (56u + sizeof(_g4_t_v110)) > _g4_s65 ? (56u + sizeof(_g4_t_v110)) : _g4_s65,
    _g4_s67 = (56u + sizeof(_g4_t_v111)) > _g4_s66 ? (56u + sizeof(_g4_t_v111)) : _g4_s66,
    _g4_s68 = (56u + sizeof(_g4_t_v112)) > _g4_s67 ? (56u + sizeof(_g4_t_v112)) : _g4_s67,
    _g4_s69 = (56u + sizeof(_g4_t_v113)) > _g4_s68 ? (56u + sizeof(_g4_t_v113)) : _g4_s68,
    _g4_s70 = (56u + sizeof(_g4_t_v114)) > _g4_s69 ? (56u + sizeof(_g4_t_v114)) : _g4_s69,
    _g4_s71 = (60u + sizeof(_g4_t_v115)) > _g4_s70 ? (60u + sizeof(_g4_t_v115)) : _g4_s70,
    _g4_s72 = (60u + sizeof(_g4_t_v116)) > _g4_s71 ? (60u + sizeof(_g4_t_v116)) : _g4_s71,
    _g4_s73 = (60u + sizeof(_g4_t_v117)) > _g4_s72 ? (60u + sizeof(_g4_t_v117)) : _g4_s72,
    _g4_s74 = (60u + sizeof(_g4_t_v118)) > _g4_s73 ? (60u + sizeof(_g4_t_v118)) : _g4_s73,
    _g4_s75 = (60u + sizeof(_g4_t_v119)) > _g4_s74 ? (60u + sizeof(_g4_t_v119)) : _g4_s74,
    _g4_s76 = (60u + sizeof(_g4_t_v120)) > _g4_s75 ? (60u + sizeof(_g4_t_v120)) : _g4_s75,
    _g4_s77 = (64u + sizeof(_g4_t_v121)) > _g4_s76 ? (64u + sizeof(_g4_t_v121)) : _g4_s76,
    _g4_s78 = (64u + sizeof(_g4_t_v122)) > _g4_s77 ? (64u + sizeof(_g4_t_v122)) : _g4_s77,
    _g4_s79 = (64u + sizeof(_g4_t_v123)) > _g4_s78 ? (64u + sizeof(_g4_t_v123)) : _g4_s78,
    _g4_s80 = (64u + sizeof(_g4_t_v124)) > _g4_s79 ? (64u + sizeof(_g4_t_v124)) : _g4_s79,
    _g4_s81 = (64u + sizeof(_g4_t_v125)) > _g4_s80 ? (64u + sizeof(_g4_t_v125)) : _g4_s80,
    _g4_s82 = (64u + sizeof(_g4_t_v126)) > _g4_s81 ? (64u + sizeof(_g4_t_v126)) : _g4_s81,
    _g4_s83 = (68u + sizeof(_g4_t_v127)) > _g4_s82 ? (68u + sizeof(_g4_t_v127)) : _g4_s82,
    _g4_s84 = (68u + sizeof(_g4_t_v128)) > _g4_s83 ? (68u + sizeof(_g4_t_v128)) : _g4_s83,
    _g4_s85 = (68u + sizeof(_g4_t_v129)) > _g4_s84 ? (68u + sizeof(_g4_t_v129)) : _g4_s84,
    _g4_s86 = (68u + sizeof(_g4_t_v130)) > _g4_s85 ? (68u + sizeof(_g4_t_v130)) : _g4_s85,
    _g4_s87 = (68u + sizeof(_g4_t_v131)) > _g4_s86 ? (68u + sizeof(_g4_t_v131)) : _g4_s86,
    _g4_s88 = (68u + sizeof(_g4_t_v132)) > _g4_s87 ? (68u + sizeof(_g4_t_v132)) : _g4_s87,
    _g4_s89 = (68u + sizeof(_g4_t_v133)) > _g4_s88 ? (68u + sizeof(_g4_t_v133)) : _g4_s88,
    _g4_s90 = (72u + sizeof(_g4_t_v134)) > _g4_s89 ? (72u + sizeof(_g4_t_v134)) : _g4_s89,
    _g4_s91 = (72u + sizeof(_g4_t_v135)) > _g4_s90 ? (72u + sizeof(_g4_t_v135)) : _g4_s90,
    _g4_s92 = (72u + sizeof(_g4_t_v136)) > _g4_s91 ? (72u + sizeof(_g4_t_v136)) : _g4_s91,
    _g4_s93 = (72u + sizeof(_g4_t_v137)) > _g4_s92 ? (72u + sizeof(_g4_t_v137)) : _g4_s92,
    _g4_s94 = (72u + sizeof(_g4_t_v138)) > _g4_s93 ? (72u + sizeof(_g4_t_v138)) : _g4_s93,
    _g4_s95 = (72u + sizeof(_g4_t_v139)) > _g4_s94 ? (72u + sizeof(_g4_t_v139)) : _g4_s94,
    _g4_s96 = (76u + sizeof(_g4_t_v140)) > _g4_s95 ? (76u + sizeof(_g4_t_v140)) : _g4_s95,
    _g4_s97 = (76u + sizeof(_g4_t_v141)) > _g4_s96 ? (76u + sizeof(_g4_t_v141)) : _g4_s96,
    _g4_s98 = (80u + sizeof(_g4_t_v142)) > _g4_s97 ? (80u + sizeof(_g4_t_v142)) : _g4_s97,
    _g4_s99 = (80u + sizeof(_g4_t_v143)) > _g4_s98 ? (80u + sizeof(_g4_t_v143)) : _g4_s98,
    _g4_s100 = (84u + sizeof(_g4_t_v144)) > _g4_s99 ? (84u + sizeof(_g4_t_v144)) : _g4_s99,
    _g4_s101 = (84u + sizeof(_g4_t_v145)) > _g4_s100 ? (84u + sizeof(_g4_t_v145)) : _g4_s100,
    _g4_s102 = (88u + sizeof(_g4_t_v146)) > _g4_s101 ? (88u + sizeof(_g4_t_v146)) : _g4_s101,
    _g4_s103 = (92u + sizeof(_g4_t_v147)) > _g4_s102 ? (92u + sizeof(_g4_t_v147)) : _g4_s102,
    _g4_s104 = (96u + sizeof(_g4_t_v148)) > _g4_s103 ? (96u + sizeof(_g4_t_v148)) : _g4_s103,
    _g4_s105 = (100u + sizeof(_g4_t_v149)) > _g4_s104 ? (100u + sizeof(_g4_t_v149)) : _g4_s104,
    _g4_s106 = (104u + sizeof(_g4_t_v150)) > _g4_s105 ? (104u + sizeof(_g4_t_v150)) : _g4_s105,
    _g4_s107 = (108u + sizeof(_g4_t_v151)) > _g4_s106 ? (108u + sizeof(_g4_t_v151)) : _g4_s106,
    _g4_s108 = (112u + sizeof(_g4_t_v152)) > _g4_s107 ? (112u + sizeof(_g4_t_v152)) : _g4_s107,
    _g4_s109 = (128u + sizeof(_g4_t_v153)) > _g4_s108 ? (128u + sizeof(_g4_t_v153)) : _g4_s108,
    _g4_s110 = (144u + sizeof(_g4_t_v154)) > _g4_s109 ? (144u + sizeof(_g4_t_v154)) : _g4_s109,
    _g4_s111 = (160u + sizeof(_g4_t_v155)) > _g4_s110 ? (160u + sizeof(_g4_t_v155)) : _g4_s110,
    _g4_s112 = (176u + sizeof(_g4_t_v156)) > _g4_s111 ? (176u + sizeof(_g4_t_v156)) : _g4_s111,
    _g4_s113 = (180u + sizeof(_g4_t_v157)) > _g4_s112 ? (180u + sizeof(_g4_t_v157)) : _g4_s112,
    _g4_s114 = (184u + sizeof(_g4_t_v158)) > _g4_s113 ? (184u + sizeof(_g4_t_v158)) : _g4_s113,
    _g4_s115 = (188u + sizeof(_g4_t_v159)) > _g4_s114 ? (188u + sizeof(_g4_t_v159)) : _g4_s114,
    _g4_s116 = (192u + sizeof(_g4_t_v160)) > _g4_s115 ? (192u + sizeof(_g4_t_v160)) : _g4_s115,
    _g4_s117 = (196u + sizeof(_g4_t_v161)) > _g4_s116 ? (196u + sizeof(_g4_t_v161)) : _g4_s116,
    _g4_s118 = (200u + sizeof(_g4_t_v162)) > _g4_s117 ? (200u + sizeof(_g4_t_v162)) : _g4_s117,
    _g4_s119 = (204u + sizeof(_g4_t_v163)) > _g4_s118 ? (204u + sizeof(_g4_t_v163)) : _g4_s118,
    _g4_s120 = (208u + sizeof(_g4_t_v164)) > _g4_s119 ? (208u + sizeof(_g4_t_v164)) : _g4_s119,
    _g4_s121 = (212u + sizeof(_g4_t_v165)) > _g4_s120 ? (212u + sizeof(_g4_t_v165)) : _g4_s120,
    _g4_s122 = (216u + sizeof(_g4_t_v166)) > _g4_s121 ? (216u + sizeof(_g4_t_v166)) : _g4_s121,
    _g4_s123 = (220u + sizeof(_g4_t_v167)) > _g4_s122 ? (220u + sizeof(_g4_t_v167)) : _g4_s122
  };
  alignas(16) uint8_t _g4_sf[_g4_s123];
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 12u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 12u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 16u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 20u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 20u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 20u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 20u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 20u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 20u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 24u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 24u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 24u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 24u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 24u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 24u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 28u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 28u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 28u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 28u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 28u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 28u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 32u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 32u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 32u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 32u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 32u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 36u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 36u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 36u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 36u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 36u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 36u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 40u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 40u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 40u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 40u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 40u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 40u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 44u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 44u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 44u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 44u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 44u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 44u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 48u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 48u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 48u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 48u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 48u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 48u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 52u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 52u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 52u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 52u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 52u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 52u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 56u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 56u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 56u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 56u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 56u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 56u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 60u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 60u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 60u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 60u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 60u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 60u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 64u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 64u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 64u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 64u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 64u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 64u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 68u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 68u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 68u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 68u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 68u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 68u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 68u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 72u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 72u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 72u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 72u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 72u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 72u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 76u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 76u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 80u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 80u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 84u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 84u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 88u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 92u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 96u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 100u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 104u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 108u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 112u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 128u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 144u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 160u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 176u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 180u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 184u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 188u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 192u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 196u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 200u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 204u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 208u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 212u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 216u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 220u);

  v156 = 0;
  v157 = 0;
  v158 = 0;
  v159 = 0;
  v160 = 0;
  v6 = (float *)&unk_1D12FD0;
  v74 = &v155;
  v161 = 0;
  v162 = 0;
  v163 = 0;
  v164 = 0.0;
  v165 = 0.0;
  v166 = 0.0;
  v167 = -3.40282e38f;
  do
  {
    v155 = *(__m128 *)v6;
    v6 += 4;
    sub_18180E0(
      a1,
      a2,
      a3,
      v74,
      &v156,
      v45,
      v50,
      v56,
      v62,
      v68,
      *(float *)&v74,
      v79,
      v85,
      v91,
      v97,
      v103,
      v109,
      v115,
      v121,
      v127,
      v134);
g4_m128_lane<uint64_t>(v155, 0) ^= 0x8000000080000000LL;
g4_m128_lane<int32_t>(v155, 2) ^= 0x80000000;
g4_m128_lane<float>(v155, 3) = -g4_m128_lane<float>(v155, 3);
    sub_18180E0(
      a1,
      a2,
      a3,
      v75,
      &v156,
      v46,
      v51,
      v57,
      v63,
      v69,
      *(float *)&v75,
      v80,
      v86,
      v92,
      v98,
      v104,
      v110,
      v116,
      v122,
      v128,
      v135);
  }
  while ( v6 != (float *)(uintptr_t)(&flt_1D12FE0[8]) );
  v7 = 1.0;
  if ( 1.0 > 0.001f )
  {
    v70 = 0.5;
    v52 = &v152;
    v64 = &v153;
    v58 = &v154;
    do
    {
      v37 = fabs(v164);
g4_m128_lane<int32_t>(v10, 0) = fabs(v165);
      v143 = v164;
      v147 = v7 * 0.99f;
      v146 = v165;
      v38 = _mm_and_ps(g4_m128_from<__m128>(LODWORD(v166)), *(__m128 *)&dword_1C7C1C0);
      v145 = v166;
      if ( v37 <=g4_m128_lane<float>(v10, 0) )
      {
        v8 = v164;
        v9 = v165;
g4_m128_lane<float>(v10, 0) = v37;
        v11 = 1;
        v12 = 0;
      }
      else
      {
        v8 = v165;
        v11 = 0;
        v9 = v164;
        v12 = 1;
      }
      v13 = _mm_cmplt_ss(v38, v10);
      v14 = LODWORD(v8) &g4_m128_lane<int32_t>(v13, 0);
      v15 =g4_m128_lane<float>(_mm_andnot_ps(v13, g4_m128_from<__m128>(LODWORD(v166))), 0);
      if (g4_m128_lane<float>(v10, 0) <=g4_m128_lane<float>(v38, 0) )
        v12 = 2;
      *(float *)&v148 = 0.0;
      v149 = 0.0;
      v150 = 0.0;
      v151 = 0.0;
      *(&v148 + v11) = LODWORD(v15) | v14;
      *((float *)&v148 + v12) = -v9;
g4_m128_raw(v16) = v148;
      *(float *)g4_m128_ptr<int32_t>(v16) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v16) * *(float *)g4_m128_ptr<int32_t>(v16)) + (float)(v149 * v149))
                              + (float)(v150 * v150);
      v17 = 0.0;
      if ( *(float *)g4_m128_ptr<int32_t>(v16) > 0.0 )
      {
        v18 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v16);
        v19 = ((_mm_cvtsi128_si32(v16) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v16) >> 1));
        v20 = (float)(*(float *)&v19 * 1.5)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v16)) * *(float *)&v19)
                    * (float)(*(float *)&v19 * *(float *)&v19));
        v21 = (float)(v20 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v16)) * v20) * (float)(v20 * v20));
        v17 = (float)(1.5 * v21) - (float)((float)(v18 * v21) * (float)(v21 * v21));
      }
      v140 = (float)(v17 * v151) * v147;
      v22 = (float)((float)(v146 * (float)(v150 * v17)) - (float)(v145 * (float)(v149 * v17))) * v147;
      v129 = (float)((float)(v145 * (float)(*(float *)&v148 * v17)) - (float)((float)(v150 * v17) * v143)) * v147;
      v111 = v146 + (float)(v147 * (float)(v149 * v17));
g4_m128_raw(v23) = COERCE_UNSIGNED_INT(v147 * (float)(v150 * v17));
g4_m128_lane<float>(v23, 0) =g4_m128_lane<float>(v23, 0) + v145;
      v123 = (float)((float)((float)(v149 * v17) * v143) - (float)((float)(*(float *)&v148 * v17) * v146)) * v147;
      v117 = v143 + (float)(v147 * (float)(*(float *)&v148 * v17));
      v99 = v143 - (float)(v147 * (float)(*(float *)&v148 * v17));
g4_m128_raw(v24) = LODWORD(v167);
      v93 = v146 - (float)(v147 * (float)(v149 * v17));
g4_m128_raw(v25) = LODWORD(v145);
g4_m128_lane<float>(v24, 0) = v167 - v140;
g4_m128_lane<float>(v25, 0) = v145 - (float)(v147 * (float)(v150 * v17));
      v105 = v140 + v167;
      v26 = v143 - v22;
      v142 = v143 + v22;
      v141 = v146 + v129;
      *(float *)&v136 = v123 + v145;
      *(float *)&v87 = (float)(0.0 * v147) + v167;
      v81 = v26;
      v27 = v146 - v129;
      v130 = v167 - (float)(0.0 * v147);
      v144 = v145 - v123;
g4_m128_raw(v29) = LODWORD(v117);
g4_m128_raw(v28) = 0;
      *(float *)g4_m128_ptr<int32_t>(v29) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v29) * *(float *)g4_m128_ptr<int32_t>(v29)) + (float)(v111 * v111))
                              + (float)(g4_m128_lane<float>(v23, 0) *g4_m128_lane<float>(v23, 0));
      if ( *(float *)g4_m128_ptr<int32_t>(v29) > 0.0 )
      {
        v30 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v29);
        v31 = ((_mm_cvtsi128_si32(v29) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v29) >> 1));
g4_m128_raw(v28) = 0x3FC00000u;
        v32 = (float)(*(float *)&v31 * 1.5)
            - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v29)) * *(float *)&v31)
                    * (float)(*(float *)&v31 * *(float *)&v31));
        v33 = (float)(v32 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v29)) * v32) * (float)(v32 * v32));
g4_m128_lane<float>(v28, 0) = (float)(1.5 * v33) - (float)((float)(v30 * v33) * (float)(v33 * v33));
      }
g4_m128_lane<uint64_t>(v34, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v117)), g4_m128_from<__m128>(LODWORD(v111))), 0);
      v35 = _mm_shuffle_ps(v28, v28, 0);
g4_m128_lane<uint64_t>(v34, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v23, g4_m128_from<__m128>(LODWORD(v105))), 0);
      v152 = _mm_mul_ps(v34, v35);
g4_m128_lane<uint64_t>(v34, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v99)), g4_m128_from<__m128>(LODWORD(v93))), 0);
g4_m128_lane<uint64_t>(v34, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v25, v24), 0);
g4_m128_lane<uint64_t>(v36, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v142)), g4_m128_from<__m128>(LODWORD(v141))), 0);
      v153 = _mm_mul_ps(v34, v35);
g4_m128_lane<uint64_t>(v36, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_to_m128((unsigned int)v136), g4_to_m128((unsigned int)v87)), 0);
      v154 = _mm_mul_ps(v36, v35);
g4_m128_lane<uint64_t>(v34, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v81)), g4_m128_from<__m128>(LODWORD(v27))), 0);
g4_m128_lane<uint64_t>(v34, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v144)), g4_m128_from<__m128>(LODWORD(v130))), 0);
      v155 = _mm_mul_ps(v34, v35);
      sub_18180E0(
        a1,
        a2,
        a3,
        v52,
        &v156,
        v45,
        (int)(uintptr_t)(v52),
        (int)(uintptr_t)(v58),
        (int)(uintptr_t)(v64),
        v70,
        *(float *)&v74,
        v81,
        v87,
        v93,
        v99,
        v105,
        v111,
        v117,
        v123,
        v130,
        v136);
      sub_18180E0(
        a1,
        a2,
        a3,
        v65,
        &v156,
        v47,
        v53,
        v59,
        (int)(uintptr_t)(v65),
        v71,
        v76,
        v82,
        v88,
        v94,
        v100,
        v106,
        v112,
        v118,
        v124,
        v131,
        v137);
      sub_18180E0(
        a1,
        a2,
        a3,
        v60,
        &v156,
        v48,
        v54,
        (int)(uintptr_t)(v60),
        v66,
        v72,
        v77,
        v83,
        v89,
        v95,
        v101,
        v107,
        v113,
        v119,
        v125,
        v132,
        v138);
      sub_18180E0(
        a1,
        a2,
        a3,
        v78,
        &v156,
        v49,
        v55,
        v61,
        v67,
        v73,
        *(float *)&v78,
        v84,
        v90,
        v96,
        v102,
        v108,
        v114,
        v120,
        v126,
        v133,
        v139);
      v7 = v147 * v70;
    }
    while ( (float)(v147 * v70) > 0.001f );
  }
  v39 = v156;
  v40 = v157;
  v41 = v167;
  v42 = v158;
  *a4 = v156;
  a4[1] = v40;
  a4[2] = v42;
  a4[3] = v159;
  *a5 = v160;
  a5[1] = v161;
  a5[2] = v162;
  a5[3] = v163;
  *(float *)(a6 + 32) = v41;
  *(float *)a6 = v164;
  *(float *)(a6 + 4) = v165;
  *(float *)(a6 + 8) = v166;
  *(uint32_t *)(a6 + 16) = v39;
  v44 = v159;
  *(float *)(a6 + 12) = v167;
  *(uint32_t *)(a6 + 20) = v40;
  *(uint32_t *)(a6 + 24) = v42;
  *(uint32_t *)(a6 + 28) = v44;
  return a6;
}


