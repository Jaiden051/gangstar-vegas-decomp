#include "Core/Utils/DecompTypes.h"
#include "gameswf_glyph_texture_cache.h"

// ----------------------------------------------------------------------------
// Function: gameswf::glyph_texture_cache::add_glyph_region  (binary VA: 0x1099470)
// Original: gameswf::glyph_texture_cache::add_glyph_region
// ----------------------------------------------------------------------------
int gameswf::glyph_texture_cache::add_glyph_region(gameswf::TextureCache::Self *a1, uint16_t a2, unsigned int a3, int a4, uint8_t *a5, char a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int64_t v10; // rax
  uint32_t *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint32_t *v19;
  int v20;
  int v21;
  float v22; // xmm4_4
  int v23;
  float v24; // xmm5_4
  int v25;
  int v26;
  char *v27;
  char *v28;
  char *v29;
  char *v30;
  char *v31;
  char v32;
  int v34;
  int v35;
  int v36;
  uint8_t *v37;
  int v38;
  signed int v39;
  signed int v40;
  signed int v41;
  uint8_t *v42;
  int v43;
  signed int v44;
  signed int v45;
  signed int v46;
  uint8_t *v47;
  float v48; // xmm4_4
  int *v49;
  int v50;
  float v51; // xmm7_4
  float v52; // xmm1_4
  int v53;
  char *v54;
  int v55;
  int v56;
  int v57;
  uint32_t *v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  uint32_t *v65;
  int v66;
  int v67;
  gameswf::Self *v68;
  gameswf::Self *v69;
  int v70;
  gameswf::Self *v71;
  gameswf::Self *v72;
  void *v73;
  typedef int *_g4_t_v74;
  typedef uint8_t _g4_t_v75;
  typedef uint8_t _g4_t_v76;
  typedef uint8_t _g4_t_v77;
  typedef uint8_t _g4_t_v78;
  typedef bool _g4_t_v79;
  typedef char *_g4_t_v80;
  typedef uint8_t _g4_t_v81;
  typedef int _g4_t_v82;
  typedef uint64_t _g4_t_v83;
  typedef int _g4_t_v84;
  typedef uint8_t _g4_t_v85;
  typedef uint64_t *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef signed int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef signed int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef float _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef signed int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef char *_g4_t_v98;
  typedef int _g4_t_i;
  typedef int _g4_t_v100;
  typedef int *_g4_t_v101;
  typedef char *_g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104[4];
  typedef int _g4_t_v105[3];
  typedef int _g4_t_v106;
  typedef int64_t _g4_t_v107;
  typedef uint64_t _g4_t_v108;
  typedef uint32_t _g4_t_v109[6];
  typedef uint32_t _g4_t_v110[7];
  typedef uint32_t _g4_t_v111[7];
  typedef char *_g4_t_v112[8];
  typedef char *_g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef float _g4_t_v120[27];
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (8u + sizeof(_g4_t_v74)) > _g4_s0 ? (8u + sizeof(_g4_t_v74)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v75)) > _g4_s1 ? (16u + sizeof(_g4_t_v75)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v76)) > _g4_s2 ? (32u + sizeof(_g4_t_v76)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v77)) > _g4_s3 ? (32u + sizeof(_g4_t_v77)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v78)) > _g4_s4 ? (48u + sizeof(_g4_t_v78)) : _g4_s4,
    _g4_s6 = (71u + sizeof(_g4_t_v79)) > _g4_s5 ? (71u + sizeof(_g4_t_v79)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v80)) > _g4_s6 ? (72u + sizeof(_g4_t_v80)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v81)) > _g4_s7 ? (76u + sizeof(_g4_t_v81)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v82)) > _g4_s8 ? (76u + sizeof(_g4_t_v82)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v83)) > _g4_s9 ? (80u + sizeof(_g4_t_v83)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v84)) > _g4_s10 ? (80u + sizeof(_g4_t_v84)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v85)) > _g4_s11 ? (88u + sizeof(_g4_t_v85)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v86)) > _g4_s12 ? (88u + sizeof(_g4_t_v86)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v87)) > _g4_s13 ? (88u + sizeof(_g4_t_v87)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v88)) > _g4_s14 ? (92u + sizeof(_g4_t_v88)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v89)) > _g4_s15 ? (92u + sizeof(_g4_t_v89)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v90)) > _g4_s16 ? (92u + sizeof(_g4_t_v90)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v91)) > _g4_s17 ? (96u + sizeof(_g4_t_v91)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v92)) > _g4_s18 ? (96u + sizeof(_g4_t_v92)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v93)) > _g4_s19 ? (100u + sizeof(_g4_t_v93)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v94)) > _g4_s20 ? (100u + sizeof(_g4_t_v94)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v95)) > _g4_s21 ? (100u + sizeof(_g4_t_v95)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v96)) > _g4_s22 ? (100u + sizeof(_g4_t_v96)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v97)) > _g4_s23 ? (100u + sizeof(_g4_t_v97)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v98)) > _g4_s24 ? (104u + sizeof(_g4_t_v98)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_i)) > _g4_s25 ? (104u + sizeof(_g4_t_i)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v100)) > _g4_s26 ? (104u + sizeof(_g4_t_v100)) : _g4_s26,
    _g4_s28 = (108u + sizeof(_g4_t_v101)) > _g4_s27 ? (108u + sizeof(_g4_t_v101)) : _g4_s27,
    _g4_s29 = (108u + sizeof(_g4_t_v102)) > _g4_s28 ? (108u + sizeof(_g4_t_v102)) : _g4_s28,
    _g4_s30 = (108u + sizeof(_g4_t_v103)) > _g4_s29 ? (108u + sizeof(_g4_t_v103)) : _g4_s29,
    _g4_s31 = (112u + sizeof(_g4_t_v104)) > _g4_s30 ? (112u + sizeof(_g4_t_v104)) : _g4_s30,
    _g4_s32 = (128u + sizeof(_g4_t_v105)) > _g4_s31 ? (128u + sizeof(_g4_t_v105)) : _g4_s31,
    _g4_s33 = (140u + sizeof(_g4_t_v106)) > _g4_s32 ? (140u + sizeof(_g4_t_v106)) : _g4_s32,
    _g4_s34 = (144u + sizeof(_g4_t_v107)) > _g4_s33 ? (144u + sizeof(_g4_t_v107)) : _g4_s33,
    _g4_s35 = (152u + sizeof(_g4_t_v108)) > _g4_s34 ? (152u + sizeof(_g4_t_v108)) : _g4_s34,
    _g4_s36 = (164u + sizeof(_g4_t_v109)) > _g4_s35 ? (164u + sizeof(_g4_t_v109)) : _g4_s35,
    _g4_s37 = (188u + sizeof(_g4_t_v110)) > _g4_s36 ? (188u + sizeof(_g4_t_v110)) : _g4_s36,
    _g4_s38 = (216u + sizeof(_g4_t_v111)) > _g4_s37 ? (216u + sizeof(_g4_t_v111)) : _g4_s37,
    _g4_s39 = (244u + sizeof(_g4_t_v112)) > _g4_s38 ? (244u + sizeof(_g4_t_v112)) : _g4_s38,
    _g4_s40 = (276u + sizeof(_g4_t_v113)) > _g4_s39 ? (276u + sizeof(_g4_t_v113)) : _g4_s39,
    _g4_s41 = (280u + sizeof(_g4_t_v114)) > _g4_s40 ? (280u + sizeof(_g4_t_v114)) : _g4_s40,
    _g4_s42 = (284u + sizeof(_g4_t_v115)) > _g4_s41 ? (284u + sizeof(_g4_t_v115)) : _g4_s41,
    _g4_s43 = (288u + sizeof(_g4_t_v116)) > _g4_s42 ? (288u + sizeof(_g4_t_v116)) : _g4_s42,
    _g4_s44 = (292u + sizeof(_g4_t_v117)) > _g4_s43 ? (292u + sizeof(_g4_t_v117)) : _g4_s43,
    _g4_s45 = (296u + sizeof(_g4_t_v118)) > _g4_s44 ? (296u + sizeof(_g4_t_v118)) : _g4_s44,
    _g4_s46 = (300u + sizeof(_g4_t_v119)) > _g4_s45 ? (300u + sizeof(_g4_t_v119)) : _g4_s45,
    _g4_s47 = (304u + sizeof(_g4_t_v120)) > _g4_s46 ? (304u + sizeof(_g4_t_v120)) : _g4_s46
  };
  alignas(16) uint8_t _g4_sf[_g4_s47];
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 8u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 16u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 32u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 32u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 48u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 71u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 72u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 76u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 76u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 80u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 80u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 88u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 88u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 88u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 92u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 92u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 92u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 96u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 96u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 100u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 100u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 100u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 100u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 100u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 104u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 104u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 104u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 108u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 108u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 108u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 112u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 128u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 140u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 144u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 152u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 164u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 188u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 216u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 244u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 276u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 280u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 284u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 288u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 292u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 296u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 300u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 304u);

  v85 = *a5;
  v81 = a5[1];
  v93 = *(float *)(*((uint32_t *)a1 + 20) + 4);
  v76 = a5[2];
  v98 = *((char **)a1 + 15);
  if ( v98 == nullptr )
  {
    v98 = (char *)(*(int (**)(uint32_t))(**((uint32_t **)a1 + 13) + 28))(*((uint32_t *)a1 + 13));
    *((uint32_t *)a1 + 15) = (uint32_t)(uintptr_t)(v98);
    v65 = *((uint32_t **)a1 + 12);
    if ( v65 == nullptr || *v65 == 0 )
    {
      memset(
        v98,
        0,
        *((uint32_t *)a1 + 14) * *(uint32_t *)(*((uint32_t *)a1 + 13) + 20) * *(uint32_t *)(*((uint32_t *)a1 + 13) + 16));
      v98 = *((char **)a1 + 15);
    }
  }
  FT_Set_Pixel_Sizes(a3, 0, (int)(float)((float)a4 * v93));
  v6 = 0;
  if ( FT_Load_Glyph(a3, a2, &loc_4) == 0 )
  {
    v7 = *(uint32_t *)(a3 + 84);
    v79 = *(uint8_t *)(v7 + 94) == 1;
    v101 = (int *)(v7 + 76);
    if ( *(uint8_t *)(v7 + 94) == 1 )
    {
      FT_Bitmap_New(v109);
      FT_Bitmap_Convert(**((uint32_t **)a1 + 20), *(uint32_t *)(a3 + 84) + 76, v109, 1);
      v101 = (int *)(v109);
      v35 = v109[0] * v109[1];
      if ( v109[0] * v109[1] > 0 )
      {
        v36 = 0;
        do
        {
          v37 = (uint8_t *)(v109[3] + v36++);
          *v37 = -*v37;
        }
        while ( v36 != v35 );
        v101 = (int *)(v109);
      }
    }
    v75 = (int)(float)((float)v85 * v93);
    v78 = (int)(float)((float)v81 * v93);
    v77 = (int)(float)((float)v76 * v93);
    v8 = v101[2] + 2;
    v104[0] = v8;
    v9 = *v101 + 2;
    v105[0] = v9;
    if ( v75 != 0 )
    {
      v34 = 2 * v75 + 2;
      v104[0] = v34 + v8;
      v105[0] = v34 + v9;
    }
    else if ( (v78 | v77) != 0 )
    {
      v104[0] = v8 + 2 * v78 + 2;
      v105[0] = v9 + 2 * v77 + 2;
    }
    gameswf::TextureCache::getRegionSizeRequirement((gameswf::TextureCache::Self *)v104, v105, v74);
    v86 = (uint64_t *)(a6 != 0
                   ? gameswf::TextureCache::findUsedRegion(a1, v104[0], v105[0])
                   : gameswf::TextureCache::findAvailableRegion(a1, v104[0], v105[0]));
    v6 = 0;
    if ( v86 != nullptr )
    {
      v10 = *(uint64_t *)a1;
      *v86 = *(uint64_t *)a1;
      *(uint64_t *)a1 = v10 + 1;
      LODWORD(v107) = a3;
      HIDWORD(v10) = a5[2];
      HIDWORD(v107) = a2 | ((uint8_t)a4 << 16);
      v94 = *((uint32_t *)a1 + 12);
      v83 = *a5 | (uint64_t)((HIDWORD(v10) << 8) | (a5[1] << 16));
      v108 = v83;
      if ( v94 != 0 )
      {
        v11 = (uint32_t *)((char *)&v108 + 7);
        v12 = 5381;
        do
        {
          v13 = *(uint8_t *)v11;
          v11 = (uint32_t *)((char *)v11 - 1);
          v12 = v13 + 65599 * v12;
        }
        while ( v11 != (uint32_t *)((int *)((char *)&v106 + 3)) );
        v14 = v12;
        v15 = *(uint32_t *)(v94 + 4);
        v16 = v15 & v14;
        v17 = v94 + 28 * (v15 & v14) + 8;
        if ( *(uint32_t *)v17 != -2 )
        {
          v18 = *(uint32_t *)(v94 + 28 * (v15 & v14) + 12);
          if ( v16 == (v18 & v15) )
          {
            while ( v18 != v14
                 || *(uint64_t *)(v17 + 8) != __PAIR64__(a2 | ((uint8_t)a4 << 16), a3)
                 || *(uint64_t *)(v17 + 16) != v83 )
            {
              v16 = *(uint32_t *)v17;
              if ( *(uint32_t *)v17 == -1 )
                goto LABEL_75;
              v17 = v94 + 28 * v16 + 8;
              v18 = *(uint32_t *)(v94 + 28 * v16 + 12);
            }
            if ( v16 >= 0 )
            {
              v19 = (uint32_t *)(v94 + 28 * v16 + 32);
LABEL_23:
              *v19 = (uint32_t)(uintptr_t)(v86);
              v20 = *(uint32_t *)(*((uint32_t *)a1 + 13) + 16);
              v21 = ((int)(uintptr_t)(v86) - *((uint32_t *)a1 + 4)) >> 4;
              v22 = (float)(16 * (v21 & ((v20 >> 4) - 1)));
              v23 = *((uint32_t *)a1 + 14);
              v84 = v23;
              v82 = v23 * v20;
              v24 = (float)(16 * (v21 / (v20 >> 4)));
              v80 = &v98[(int)((float)((float)((float)(v22 + 1.0) + (float)((float)(v24 + 1.0) * (float)v20)) * (float)v23))];
              v25 = v105[0];
              if ( v105[0] > 0 )
              {
                v26 = 0;
                v27 = &v98[(int)((float)((float)((float)((float)v20 * v24) + v22) * (float)v23))];
                do
                {
                  ++v26;
                  memset(v27, 0, v104[0] * v84);
                  v25 = v105[0];
                  v27 += v82;
                }
                while ( v105[0] > v26 );
              }
              v28 = (char *)v101[3];
              v95 = v101[2];
              v91 = v101[1];
              v88 = *v101;
              if ( v75 != 0 )
              {
                v44 = v25 * v104[0];
                v96 = *((uint32_t *)a1 + 17);
                if ( v25 * v104[0] != 0 )
                {
                  v45 = *((uint32_t *)a1 + 18);
                  if ( v44 > v45 && *((uint32_t *)a1 + 19) == 0 )
                  {
                    v67 = v44 + (v44 >> 1);
                    *((uint32_t *)a1 + 18) = v67;
                    if ( v67 != 0 )
                    {
                      v69 = *((gameswf::Self **)a1 + 16);
                      if ( v69 != nullptr )
                        *((uint32_t *)a1 + 16) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v69, v44 + (v44 >> 1), v45));
                      else
                        *((uint32_t *)a1 + 16) = gameswf::malloc_internal(v44 + (v44 >> 1));
                    }
                    else
                    {
                      v68 = *((gameswf::Self **)a1 + 16);
                      if ( v68 != nullptr )
                        gameswf::free_internal(v68);
                      *((uint32_t *)a1 + 16) = 0;
                    }
                  }
                }
                v46 = v96;
                if ( v44 > v96 )
                {
                  do
                  {
                    v47 = (uint8_t *)(*((uint32_t *)a1 + 16) + v46);
                    if ( v47 != nullptr )
                      *v47 = 0;
                    ++v46;
                  }
                  while ( v46 != v44 );
                }
                *((uint32_t *)a1 + 17) = v44;
                memset(*((void **)a1 + 16), 0, v44);
                v95 = v104[0];
                v49 = v101;
                v28 = *((char **)a1 + 16);
                v50 = *v101;
                v90 = 2 * v75 + 1;
                do
                {
                  v92 = 2 * v75 + 1;
                  v51 = (float)(int)__builtin_abs(v90 - v75);
                  do
                  {
                    v103 = v49[3];
                    v48 = (float)v75 + (float)v75;
                    v52 = (float)gameswf::sqrt_table[(int)fminf(
                                                       fmaxf(
                                                         (float)gameswf::sqrt_table[(int)fminf(
                                                                                      fmaxf(
                                                                                        (float)((float)(v48 - (float)(int)__builtin_abs(v92 - v75))
                                                                                              - v51)
                                                                                      * (float)(255.0 / v48),
                                                                                        0.0),
                                                                                      255.0)],
                                                         0.0),
                                                       255.0)]
                        * 0.003921569f;
                    if ( v50 > 0 )
                    {
                      v53 = v49[1];
                      v54 = &v28[v92 + v95 * v90];
                      v100 = 0;
                      while ( 1 )
                      {
                        v55 = 0;
                        if ( v53 > 0 )
                        {
                          do
                          {
                            v56 = (int)(float)((float)*(uint8_t *)(v103 + v55) * v52);
                            if ( v56 >= 255 )
                              v56 = 255;
                            if ( v56 < (uint8_t)v54[v55] )
                              LOBYTE(v56) = v54[v55];
                            v54[v55++] = v56;
                            v53 = v49[1];
                          }
                          while ( v53 > v55 );
                          v50 = *v49;
                          v95 = v104[0];
                        }
                        v54 += v95;
                        if ( ++v100 >= v50 )
                          break;
                        v103 += v49[2];
                      }
                      v28 = *((char **)a1 + 16);
                    }
                    --v92;
                  }
                  while ( v92 >= 0 );
                  --v90;
                }
                while ( v90 >= 0 );
                v91 = v95 - 1;
                v88 = v105[0] - 1;
              }
              else if ( (v78 | v77) != 0 )
              {
                v38 = (v25 + 2 * v77) * (v104[0] + 2 * v78);
                v39 = 2 * v38;
                v89 = *((uint32_t *)a1 + 17);
                if ( 2 * v38 != 0 )
                {
                  v40 = *((uint32_t *)a1 + 18);
                  if ( v39 > v40 && *((uint32_t *)a1 + 19) == 0 )
                  {
                    v70 = v39 + (v39 >> 1);
                    *((uint32_t *)a1 + 18) = v70;
                    if ( v70 != 0 )
                    {
                      v72 = *((gameswf::Self **)a1 + 16);
                      if ( v72 != nullptr )
                        v73 = gameswf::realloc_internal(v72, v39 + (v39 >> 1), v40);
                      else
                        v73 = (void *)gameswf::malloc_internal(v39 + (v39 >> 1));
                      *((uint32_t *)a1 + 16) = (uint32_t)(uintptr_t)(v73);
                    }
                    else
                    {
                      v71 = *((gameswf::Self **)a1 + 16);
                      if ( v71 != nullptr )
                        gameswf::free_internal(v71);
                      *((uint32_t *)a1 + 16) = 0;
                    }
                  }
                }
                v41 = v89;
                if ( v39 > v89 )
                {
                  do
                  {
                    v42 = (uint8_t *)(*((uint32_t *)a1 + 16) + v41);
                    if ( v42 != nullptr )
                      *v42 = 0;
                    ++v41;
                  }
                  while ( v41 != v39 );
                }
                *((uint32_t *)a1 + 17) = v39;
                memset(*((void **)a1 + 16), 0, v39);
                v110[6] = 1;
                v110[2] = 0;
                v110[1] = 0;
                v110[0] = v101[3];
                v110[5] = v101[2];
                v110[3] = v101[1];
                v110[4] = *v101;
                v111[1] = v78;
                v111[6] = 1;
                v111[0] = *((uint32_t *)a1 + 16);
                v111[5] = v104[0];
                v111[3] = v104[0] - 1;
                v111[2] = v77;
                v111[4] = v105[0] - 1;
                gameswf::FilterEngine::copy(v110, v111);
                LODWORD(v120[0]) = 1;
                LODWORD(v120[23]) = 1;
                v43 = *((uint32_t *)a1 + 16) + v38;
                v112[1] = *((char **)a1 + 16);
                v113 = (char *)v43;
                v112[7] = (char *)((uint8_t *)(&dword_0 + 1));
                v112[2] = nullptr;
                v120[21] = (float)((float)0 * 65536.0) + (float)v78;
                v112[0] = (char *)v120;
                v112[6] = (char *)v104[0];
                v118 = v104[0];
                v112[3] = nullptr;
                v112[5] = (char *)(v105[0] - 1);
                v119 = 1;
                v112[4] = (char *)(v104[0] - 1);
                v114 = 0;
                v115 = 0;
                v116 = v104[0] - 1;
                v120[22] = (float)((float)0 * 65536.0) + (float)v77;
                v117 = v105[0] - 1;
                gameswf::FilterEngine::apply(v112);
                v95 = v104[0];
                v28 = v113;
                v91 = v104[0] - 1;
                v88 = v105[0] - 1;
              }
              if ( v88 > 0 )
              {
                v29 = v80;
                v102 = v28;
                for ( i = 0; i != v88; ++i )
                {
                  v30 = v102;
                  v31 = v29;
                  if ( v84 == 1 )
                  {
                    memcpy(v29, v102, v91);
                  }
                  else if ( v91 > 0 )
                  {
                    v87 = v91 - 1;
                    do
                    {
                      *v31 = -1;
                      v31[1] = -1;
                      v31[2] = -1;
                      --v87;
                      v32 = *v30++;
                      v31[3] = v32;
                      v31 += 4;
                    }
                    while ( v87 != -1 );
                  }
                  v29 += v82;
                  v102 += v95;
                }
              }
              v6 = 1;
              if ( v79 )
                FT_Bitmap_Done(**((uint32_t **)a1 + 20), v109);
              return v6;
            }
          }
        }
      }
LABEL_75:
      v106 = 0;
      gameswf::hash_gameswf_TextureCache_key_883d29::add(
        (char *)a1 + 48,
        &v107,
        &v106);
      v57 = *((uint32_t *)a1 + 12);
      if ( v57 == 0 )
        goto LABEL_91;
      v58 = (uint32_t *)((char *)&v108 + 7);
      v97 = 5381;
      do
      {
        v59 = *(uint8_t *)v58;
        v58 = (uint32_t *)((char *)v58 - 1);
        v60 = 65599 * v97 + v59;
        v97 = v60;
      }
      while ( v58 != (uint32_t *)((int *)((char *)&v106 + 3)) );
      v61 = *(uint32_t *)(v57 + 4);
      v62 = v61 & v60;
      v63 = v57 + 28 * (v61 & v60) + 8;
      if ( *(uint32_t *)v63 != -2 && (v64 = *(uint32_t *)(v63 + 4), v62 == (v64 & v61)) )
      {
        while ( v97 != v64 || *(uint64_t *)(v63 + 8) != v107 || *(uint64_t *)(v63 + 16) != v108 )
        {
          v62 = *(uint32_t *)v63;
          if ( *(uint32_t *)v63 == -1 )
            goto LABEL_91;
          v63 = v57 + 28 * v62 + 8;
          v64 = *(uint32_t *)(v57 + 28 * v62 + 12);
        }
        if ( v62 >= 0 )
        {
          v19 = (uint32_t *)(v57 + 28 * v62 + 32);
          goto LABEL_23;
        }
        v66 = 28 * v62 + 8;
      }
      else
      {
LABEL_91:
        v66 = -20;
      }
      v19 = (uint32_t *)(v57 + v66 + 24);
      goto LABEL_23;
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gameswf::glyph_texture_cache::get_glyph_region  (binary VA: 0x109a0c0)
// Original: gameswf::glyph_texture_cache::get_glyph_region
// ----------------------------------------------------------------------------
float * gameswf::glyph_texture_cache::get_glyph_region(gameswf::TextureCache::Self *a1, uint16_t a2, unsigned int a3, int a4, uint8_t *a5, float *a6)
{
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *result;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  float v19; // xmm2_4
  float v20; // xmm1_4
  int v21;
  uint32_t *v22;
  int v23;
  int v24;
  int v25;
  typedef uint64_t _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t _g4_t_v28[4];
  typedef uint32_t _g4_t_v29[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v27)) > _g4_s1 ? (8u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v28)) > _g4_s2 ? (12u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v29)) > _g4_s3 ? (28u + sizeof(_g4_t_v29)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);

  v27 = a2 | ((uint8_t)a4 << 16);
  v28[2] = v27;
  v28[1] = a3;
  v26 = *a5 | (uint64_t)((a5[2] << 8) | (a5[1] << 16));
  v29[0] = 0;
  v28[3] = v26;
  v28[0] = *((uint32_t *)a1 + 12);
  if ( v28[0] != 0 )
  {
    v6 = 5381;
    v7 = (uint32_t *)((char *)v29 + 3);
    do
    {
      v8 = *(uint8_t *)v7;
      v7 = (uint32_t *)((char *)v7 - 1);
      v6 = v8 + 65599 * v6;
    }
    while ( v7 != (uint32_t *)((char *)v28 + 3) );
    v9 = *(uint32_t *)(v28[0] + 4);
    v10 = v9 & v6;
    v11 = v28[0] + 28 * (v9 & v6) + 8;
    if ( *(uint32_t *)v11 != -2 )
    {
      v12 = *(uint32_t *)(v28[0] + 28 * (v9 & v6) + 12);
      if ( v10 == (v12 & v9) )
      {
        while ( v12 != v6 || *(uint64_t *)(v11 + 8) != __PAIR64__(v27, a3) || *(uint64_t *)(v11 + 16) != v26 )
        {
          v10 = *(uint32_t *)v11;
          if ( *(uint32_t *)v11 == -1 )
            goto LABEL_16;
          v11 = v28[0] + 28 * v10 + 8;
          v12 = *(uint32_t *)(v28[0] + 28 * v10 + 12);
        }
        if ( v10 >= 0 )
          goto LABEL_13;
      }
    }
  }
LABEL_16:
  result = (float *)gameswf::glyph_texture_cache::add_glyph_region(a1, a2, a3, a4, a5, 0);
  if ( (uint8_t)(uintptr_t)result == 0 )
  {
    (*(void (**)(uint32_t *))(*gameswf::s_render_handler + 132))((uint32_t *)(gameswf::s_render_handler));
    result = (float *)gameswf::glyph_texture_cache::add_glyph_region(a1, a2, a3, a4, a5, 1);
    if ( (uint8_t)(uintptr_t)result == 0 )
    {
      gameswf::TextureCache::reset(a1);
      result = (float *)gameswf::glyph_texture_cache::add_glyph_region(a1, a2, a3, a4, a5, 0);
    }
  }
  v28[0] = *((uint32_t *)a1 + 12);
  if ( v28[0] != 0 )
  {
    v21 = 5381;
    v22 = (uint32_t *)((char *)v29 + 3);
    do
    {
      v23 = *(uint8_t *)v22;
      v22 = (uint32_t *)((char *)v22 - 1);
      v21 = v23 + 65599 * v21;
    }
    while ( v22 != (uint32_t *)((char *)v28 + 3) );
    v24 = *(uint32_t *)(v28[0] + 4);
    v10 = v24 & v21;
    result = (float *)(v28[0] + 28 * (v24 & v21) + 8);
    if ( *(uint32_t *)result != -2 )
    {
      v25 = *(uint32_t *)(v28[0] + 28 * (v24 & v21) + 12);
      if ( v10 == (v25 & v24) )
      {
        while ( v21 != v25 || *((uint64_t *)result + 1) != __PAIR64__(v27, a3) || *((uint64_t *)result + 2) != v26 )
        {
          v10 = *(uint32_t *)result;
          if ( *(uint32_t *)result == -1 )
            return result;
          result = (float *)(v28[0] + 28 * v10 + 8);
          v25 = *(uint32_t *)(v28[0] + 28 * v10 + 12);
        }
        if ( v10 >= 0 )
        {
LABEL_13:
          result = (float *)v28[0];
          v14 = *(uint32_t *)(v28[0] + 28 * v10 + 32);
          if ( v14 != 0 )
          {
            v15 = 16 * *(uint32_t *)(v14 + 12);
            v16 = *(int *)(*((uint32_t *)a1 + 13) + 16) >> 4;
            v17 = (v14 - *((uint32_t *)a1 + 4)) >> 4;
            v18 = 16 * *(uint32_t *)(v14 + 8);
            v19 = (float)(16 * (v17 & (v16 - 1)));
            *a6 = v19;
            v20 = (float)(16 * (v17 / v16));
            result = a6;
            a6[1] = (float)v18 + v19;
            a6[2] = v20;
            a6[3] = (float)v15 + v20;
          }
        }
      }
    }
  }
  return result;
}


