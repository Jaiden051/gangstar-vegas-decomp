#include "Core/Utils/DecompTypes.h"
#include "havok_internal_5.h"
extern "C" int g4_noop_ret0();

// ----------------------------------------------------------------------------
// Function: sub_17C5B60  (binary VA: 0x17c5b60)
// Original: sub_17C5B60
// ----------------------------------------------------------------------------
int sub_17C5B60(int a1, int a2, int a3, int a4, int a5, int a6, int *a7, hkpBvCompressedMeshShapeGc::Self *a8)
{
  float v8; // xmm7_4
  float v9; // xmm5_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v12;
  float v13;
  float v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int result;
  char *v22;
  int v23;
  int v24;
  int v25;
  char v26;
  int v27;
  int v28;
  uint32_t *v29;
  int v30;
  uint32_t *v31;
  int v32;
  int v33;
  bool v34;
  int *v35;
  int v36;
  int v37;
  int *v38;
  uint32_t *v39;
  int v40;
  uint32_t *v41;
  int v42;
  int v43;
  uint32_t *v44;
  int v45;
  uint32_t *v46;
  int v47;
  bool v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  uint32_t *v54;
  int v55;
  uint32_t *v56;
  int v57;
  int v58;
  void *retaddr;
  typedef hkGeometry::Self *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_PrimitiveData;
  typedef char _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef hkpBvCompressedMeshShapeGc::Self *_g4_t_v66;
  typedef int *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef uint8_t _g4_t_v70[64];
  typedef float _g4_t_v71[8];
  typedef g4_int128_t _g4_t_v72;
  typedef g4_int128_t _g4_t_v73;
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
  typedef int **_g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef void *_g4_t_v89;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (12u + sizeof(_g4_t_v59)) > _g4_s0 ? (12u + sizeof(_g4_t_v59)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v60)) > _g4_s1 ? (36u + sizeof(_g4_t_v60)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v61)) > _g4_s2 ? (40u + sizeof(_g4_t_v61)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_PrimitiveData)) > _g4_s3 ? (44u + sizeof(_g4_t_PrimitiveData)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v63)) > _g4_s4 ? (48u + sizeof(_g4_t_v63)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v64)) > _g4_s5 ? (52u + sizeof(_g4_t_v64)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v65)) > _g4_s6 ? (60u + sizeof(_g4_t_v65)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v66)) > _g4_s7 ? (64u + sizeof(_g4_t_v66)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v67)) > _g4_s8 ? (68u + sizeof(_g4_t_v67)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v68)) > _g4_s9 ? (72u + sizeof(_g4_t_v68)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v69)) > _g4_s10 ? (76u + sizeof(_g4_t_v69)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v70)) > _g4_s11 ? (80u + sizeof(_g4_t_v70)) : _g4_s11,
    _g4_s13 = (144u + sizeof(_g4_t_v71)) > _g4_s12 ? (144u + sizeof(_g4_t_v71)) : _g4_s12,
    _g4_s14 = (176u + sizeof(_g4_t_v72)) > _g4_s13 ? (176u + sizeof(_g4_t_v72)) : _g4_s13,
    _g4_s15 = (192u + sizeof(_g4_t_v73)) > _g4_s14 ? (192u + sizeof(_g4_t_v73)) : _g4_s14,
    _g4_s16 = (208u + sizeof(_g4_t_v74)) > _g4_s15 ? (208u + sizeof(_g4_t_v74)) : _g4_s15,
    _g4_s17 = (212u + sizeof(_g4_t_v75)) > _g4_s16 ? (212u + sizeof(_g4_t_v75)) : _g4_s16,
    _g4_s18 = (216u + sizeof(_g4_t_v76)) > _g4_s17 ? (216u + sizeof(_g4_t_v76)) : _g4_s17,
    _g4_s19 = (220u + sizeof(_g4_t_v77)) > _g4_s18 ? (220u + sizeof(_g4_t_v77)) : _g4_s18,
    _g4_s20 = (224u + sizeof(_g4_t_v78)) > _g4_s19 ? (224u + sizeof(_g4_t_v78)) : _g4_s19,
    _g4_s21 = (228u + sizeof(_g4_t_v79)) > _g4_s20 ? (228u + sizeof(_g4_t_v79)) : _g4_s20,
    _g4_s22 = (232u + sizeof(_g4_t_v80)) > _g4_s21 ? (232u + sizeof(_g4_t_v80)) : _g4_s21,
    _g4_s23 = (236u + sizeof(_g4_t_v81)) > _g4_s22 ? (236u + sizeof(_g4_t_v81)) : _g4_s22,
    _g4_s24 = (240u + sizeof(_g4_t_v82)) > _g4_s23 ? (240u + sizeof(_g4_t_v82)) : _g4_s23,
    _g4_s25 = (244u + sizeof(_g4_t_v83)) > _g4_s24 ? (244u + sizeof(_g4_t_v83)) : _g4_s24,
    _g4_s26 = (264u + sizeof(_g4_t_v84)) > _g4_s25 ? (264u + sizeof(_g4_t_v84)) : _g4_s25,
    _g4_s27 = (268u + sizeof(_g4_t_v85)) > _g4_s26 ? (268u + sizeof(_g4_t_v85)) : _g4_s26,
    _g4_s28 = (272u + sizeof(_g4_t_v86)) > _g4_s27 ? (272u + sizeof(_g4_t_v86)) : _g4_s27,
    _g4_s29 = (276u + sizeof(_g4_t_v87)) > _g4_s28 ? (276u + sizeof(_g4_t_v87)) : _g4_s28,
    _g4_s30 = (280u + sizeof(_g4_t_v88)) > _g4_s29 ? (280u + sizeof(_g4_t_v88)) : _g4_s29,
    _g4_s31 = (284u + sizeof(_g4_t_v89)) > _g4_s30 ? (284u + sizeof(_g4_t_v89)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 36u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 40u);
  _g4_t_PrimitiveData &PrimitiveData = *reinterpret_cast<_g4_t_PrimitiveData *>(_g4_sf + 44u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 52u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 60u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 64u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 68u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 72u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 76u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 80u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 144u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 176u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 192u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 208u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 212u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 216u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 220u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 224u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 228u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 232u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 236u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 240u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 244u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 264u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 268u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 272u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 276u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 280u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 284u);

  v89 = retaddr;
  v88 = a4;
  v87 = a5;
  v86 = a6;
  v85 = a3;
  v84 = &a7;
  v67 = a7;
  v66 = a8;
  v8 = *(float *)(a1 + 32) - *(float *)(a1 + 16);
  v9 = *(float *)(a1 + 36) - *(float *)(a1 + 20);
  v10 = *(float *)(a1 + 40) - *(float *)(a1 + 24);
  v11 = *(float *)(a1 + 44) - *(float *)(a1 + 28);
  v74 = a1;
  v75 = 0;
  v76 = 0;
  v72 = 0;
  v77 = 0;
  v73 = 0;
  v78 = 0;
  v12 = *(float *)(a1 + 16);
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v82 = -1;
  v83 = -1;
  v71[0] = v12;
  v13 = *(float *)(a1 + 20);
  v71[4] = (*(const float *)&g4_fnstatic_01bb1a9ef5)
         * v8;
  v71[1] = v13;
  v71[5] = (*(const float *)&unk_20C89B4) * v9;
  v14 = *(float *)(a1 + 24);
  v71[6] = (*(const float *)&unk_20C89B8) * v10;
  v71[2] = v14;
  v71[7] = (*(const float *)&unk_20C89BC) * v11;
  v71[3] = *(float *)(a1 + 28);
  if ( a2 == -1 )
  {
    result = 0;
    v17 = 0;
  }
  else
  {
    v15 = 3 * a2;
    v83 = a2;
    v82 = a2;
    v16 = *(uint32_t *)(a1 + 96);
    v17 = *(uint32_t *)(a1 + 60) + 32 * v15;
    v18 = *(uint32_t *)(a1 + 120);
    v75 = v17;
    v77 = v16 + 4 * *(uint32_t *)(v17 + 72);
    v19 = *(uint32_t *)(a1 + 84);
    v78 = *(uint32_t *)(a1 + 108) + (*(uint8_t *)(v17 + 92) << 19);
    v20 = *(uint32_t *)(a1 + 72);
    v79 = (*(uint32_t *)(v17 + 76) >> 8) + (*(uint32_t *)(v17 + 76) >> 8) + v19;
    v80 = v18 + 8 * (*(uint32_t *)(v17 + 84) >> 8);
    v81 = *(uint8_t *)(v17 + 76);
    result = v20 + 4 * (*(uint32_t *)(v17 + 80) >> 8);
    v76 = result;
    v72 = *(g4_int128_t *)(v17 + 48);
    LODWORD(v73) = HIDWORD(v72);
    *(uint64_t *)((char *)&v73 + 4) = *(uint64_t *)(v17 + 64);
    v79 -= 2 * *(uint8_t *)(v17 + 76);
  }
  v64 = 0;
  v60 = *(uint8_t *)(v17 + 80);
  if ( *(uint8_t *)(v17 + 80) == 0 )
    return result;
  while ( 2 )
  {
    v22 = (char *)(result + 4 * v64);
    v23 = (uint8_t)v22[3];
    v24 = (uint8_t)v22[2];
    v25 = (uint8_t)v22[1];
    v26 = *v22;
    if ( v23 != v24 )
    {
      if ( v26 == -34 && v25 == 173 && v24 == 222 && v23 == 173 )
        goto LABEL_17;
      goto LABEL_6;
    }
    if ( v23 == v25 )
    {
      v43 = (v82 << 8) | (2 * v64);
      v44 = *((uint32_t **)v66 + 1);
      if ( v44 != nullptr )
      {
        v45 = v44[1];
        if ( v45 <= 0 )
          goto LABEL_17;
        v46 = (uint32_t *)*v44;
        if ( v43 != *(uint32_t *)*v44 )
        {
          v47 = 0;
          do
          {
            if ( ++v47 == v45 )
              goto LABEL_17;
          }
          while ( v43 != v46[v47] );
          v48 = v47 != -1;
LABEL_39:
          if ( !v48 )
            goto LABEL_17;
        }
      }
      else
      {
        v54 = *((uint32_t **)v66 + 2);
        if ( v54 != nullptr )
        {
          v55 = v54[1];
          if ( v55 > 0 )
          {
            v56 = (uint32_t *)*v54;
            if ( v43 == *(uint32_t *)*v54 )
              goto LABEL_17;
            v57 = 0;
            do
            {
              if ( ++v57 == v55 )
                goto LABEL_40;
            }
            while ( v43 != v56[v57] );
            v48 = v57 == -1;
            goto LABEL_39;
          }
        }
      }
LABEL_40:
      hkpBvCompressedMeshShapeGc::appendCustomPrimitiveToGeometry(
        v66,
        (const hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::Decoder *)v71,
        v64,
        (hkGeometry::Self *)v67);
      goto LABEL_17;
    }
LABEL_6:
    PrimitiveData = hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::Decoder::getPrimitiveData(
                      (hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::Decoder *)v71,
                      v64);
    v65 = hkcdStaticMeshTree_hkcdStaticMeshTreeCommon_161c5a::Decoder::decodePrimitive(
            (hkcdStaticMeshTree<hkcdStaticMeshTreeCommonConfig<unsigned int, unsigned long long, 11, 21>, hkpBvCompressedMeshShapeTreeDataRun::Self>::Decoder *)v71,
            v64,
            (hkVector4f::Self *)v70);
    v61 = v67[3];
    if ( v65 <= 0 )
      goto LABEL_17;
    v68 = 0;
    v27 = v67[3] + 1;
    v63 = 0;
    do
    {
      v28 = (v82 << 8) | (2 * v64) | v68;
      v29 = *((uint32_t **)v66 + 1);
      if ( v29 != nullptr )
      {
        v30 = v29[1];
        if ( v30 <= 0 )
          goto LABEL_14;
        v31 = (uint32_t *)*v29;
        if ( v28 != *(uint32_t *)*v29 )
        {
          v32 = 0;
          while ( ++v32 != v30 )
          {
            if ( v28 == v31[v32] )
            {
              v34 = v32 != -1;
              goto LABEL_20;
            }
          }
LABEL_14:
          v33 = v27 + 1;
          goto LABEL_15;
        }
      }
      else
      {
        v39 = *((uint32_t **)v66 + 2);
        if ( v39 != nullptr )
        {
          v40 = v39[1];
          if ( v40 > 0 )
          {
            v41 = (uint32_t *)*v39;
            if ( v28 == *(uint32_t *)*v39 )
              goto LABEL_14;
            v42 = 0;
            while ( ++v42 != v40 )
            {
              if ( v28 == v41[v42] )
              {
                v34 = v42 == -1;
LABEL_20:
                v33 = v27 + 1;
                if ( !v34 )
                  goto LABEL_15;
                break;
              }
            }
          }
        }
      }
      v35 = v67;
      v33 = v27 + 1;
      v36 = v67[6];
      if ( v36 == (v67[7] & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)(v67 + 5),
          16,
          (int)(uintptr_t)(v59));
        v35 = v67;
        v36 = v67[6];
      }
      v37 = v36 + 1;
      v38 = (int *)(v35[5] + 16 * v36);
      v35[6] = v37;
      v63 = 1;
      v38[1] = v27;
      *v38 = v61;
      v38[2] = v33;
      v38[3] = PrimitiveData;
LABEL_15:
      ++v68;
      v27 = v33;
    }
    while ( v68 != v65 );
    if ( v63 != 0 )
    {
      v49 = v67[3];
      v50 = v49 + v68 + 2;
      v51 = v67[4] & 0x3FFFFFFF;
      if ( v50 > v51 )
      {
        v58 = 2 * v51;
        if ( v50 >= v58 )
          v58 = v49 + v68 + 2;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)&v69,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v67 + 2,
          v58,
          16);
        v49 = v67[3];
      }
      v52 = v67[2] + 16 * v49;
      v53 = 0;
      do
      {
        *(uint32_t *)(v52 + v53) = *(uint32_t *)&v70[v53];
        *(uint32_t *)(v52 + v53 + 4) = *(uint32_t *)&v70[v53 + 4];
        *(uint32_t *)(v52 + v53 + 8) = *(uint32_t *)&v70[v53 + 8];
        *(uint32_t *)(v52 + v53 + 12) = *(uint32_t *)&v70[v53 + 12];
        v53 += 16;
      }
      while ( v53 != 16 * (v68 + 2) );
      v67[3] = v50;
    }
LABEL_17:
    result = ++v64;
    if ( v60 != v64 )
    {
      result = v76;
      continue;
    }
    return result;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_17C7350  (binary VA: 0x17c7350)
// Original: sub_17C7350
// ----------------------------------------------------------------------------
void sub_17C7350()
{
  byte_2136220 = 0;
}

// ----------------------------------------------------------------------------
// Function: sub_17C9840  (binary VA: 0x17c9840)
// Original: sub_17C9840
// ----------------------------------------------------------------------------
uint8_t * sub_17C9840(uint8_t *a1)
{
  unsigned int v1;
  unsigned int v2;
  int v3;
  int32_t v4;
  int v5;
  int i;
  char v7;
  uint8_t *v8;
  uint8_t v9;
  unsigned int v10;
  uint32_t v11;
  uint8_t *result;
  int v13;
  uint8_t *v14;
  uint8_t v15;
  int v16;
  __m128i v17[5];

  v1 = 0;
  v14 = a1;
  v15 = a1[2];
  v17[0] = *(__m128i *)&flt_1D12E20;
  if ( v15 != 0 )
  {
    do
    {
      v2 = a1[5] + a1[4];
g4_m128_lane<int8_t>(v17[0], (int)a1[8] >> 4) = 1;
g4_m128_lane<int8_t>(v17[0], (int)a1[9] >> 4) = 1;
      if ( v2 > 2 )
      {
g4_m128_lane<int8_t>(v17[0], (int)a1[10] >> 4) = 1;
        if ( v2 == 4 )
g4_m128_lane<int8_t>(v17[0], (int)a1[11] >> 4) = 1;
      }
      ++v1;
      a1 += 8;
    }
    while ( v1 < v15 );
  }
  v3 = *v14;
  v16 = v3 + v14[1];
  if ( v16 != 0 )
  {
    v4 = 0;
    v5 = 0;
    for ( i = 0; i != v16; ++i )
    {
g4_m128_lane<int32_t>(v17[1], i) = v4;
      if (g4_m128_lane<int8_t>(v17[0], i) != 0 )
      {
        v4 += 16;
        *(uint16_t *)&v14[8 * v15 + 4 + 2 * v5++] = *(uint16_t *)&v14[8 * v15 + 4 + 2 * i];
      }
    }
    v7 = v5;
    v8 = v14;
    v3 = *v14;
    v9 = v14[2];
  }
  else
  {
    v9 = v15;
    v7 = 0;
    v8 = v14;
  }
  v10 = 0;
  v11 = (uint32_t)g4_m128_lane<int32_t>(v17[1], v3) >> 4;
  *v8 = v11;
  v8[1] = v7 - v11;
  result = v8;
  if ( v9 != 0 )
  {
    do
    {
      ++v10;
      v13 = (int)(uint8_t)result[8] >> 4;
      result += 8;
      *result =g4_m128_lane<int32_t>(v17[1], v13);
      result[1] =g4_m128_lane<int32_t>(v17[1], (int)(uint8_t)result[1] >> 4);
      result[2] =g4_m128_lane<int32_t>(v17[1], (int)(uint8_t)result[2] >> 4);
      result[3] =g4_m128_lane<int32_t>(v17[1], (int)(uint8_t)result[3] >> 4);
    }
    while ( (uint8_t)v8[2] > v10 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_17CE850  (binary VA: 0x17ce850)
// Original: sub_17CE850
// ----------------------------------------------------------------------------
uint8_t * sub_17CE850()
{
  HK_flyingcolors_constraintutil[0] = 0;
  return (uint8_t *)(HK_flyingcolors_constraintutil);
}

// ----------------------------------------------------------------------------
// Function: sub_17CE870  (binary VA: 0x17ce870)
// Original: sub_17CE870
// ----------------------------------------------------------------------------
unsigned int sub_17CE870(__m128i a1)
{
  int v1;
  unsigned int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = _mm_cvtsi128_si32(a1);
  v2 = (v1 & 0x7F800000u) >> 23;
  v3 = v2 - 127;
  if ( v2 < 0x7F )
    return 0;
  v4 = _mm_cvtsi128_si32(a1) & 0x7FFFFF | 0x800000;
  v5 = (_mm_cvtsi128_si32(a1) >> 31) | 1;
  if ( v3 > 23 )
    v6 = v4 << (v2 + 106);
  else
    v6 = v4 >> (23 - v3);
  return v1 & 0x80000000 | (v5 * v6) & 0x7FFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: sub_17CE980  (binary VA: 0x17ce980)
// Original: sub_17CE980
// ----------------------------------------------------------------------------
uint32_t * sub_17CE980()
{
  hkpBroadPhase::s_createTreeBroadPhaseFunction = (uintptr_t)(uintptr_t)(sub_17D0980);
  hkpBroadPhase::s_updateTreeBroadPhaseFunction = (void *)(sub_17DBE90);
  return (uint32_t *)(&hkpBroadPhase::s_updateTreeBroadPhaseFunction);
}

// ----------------------------------------------------------------------------
// Function: sub_17CEDE0  (binary VA: 0x17cede0)
// Original: sub_17CEDE0
// ----------------------------------------------------------------------------
int sub_17CEDE0(uint32_t *a1, uint16_t *a2, int a3)
{
  uint32_t *v3;
  int v4; // xmm0_4
  int result;

  *(uint16_t *)(a3 + 36) = *a2;
  v3 = (uint32_t *)(*a1 + 32 * (uint16_t)*a2);
  *(uint32_t *)(a3 + 32) = (uint32_t)(uintptr_t)(v3);
  *(uint32_t *)(a3 + 16) = v3[4];
  *(uint32_t *)(a3 + 20) = v3[5];
  v4 = v3[6];
  *(uint32_t *)(a3 + 28) = 0;
  *(uint32_t *)(a3 + 24) = v4;
  *(uint32_t *)a3 = *v3;
  *(uint32_t *)(a3 + 4) = v3[1];
  *(uint32_t *)(a3 + 8) = v3[2];
  result = v3[3];
  *(uint32_t *)(a3 + 12) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_17CEE40  (binary VA: 0x17cee40)
// Original: sub_17CEE40
// ----------------------------------------------------------------------------
int sub_17CEE40(int a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *v3;
  int result;

  a3[9] = *a2;
  v3 = (uint32_t *)(a1 + 48 * *a2);
  a3[8] = (uint32_t)(uintptr_t)(v3);
  *a3 = *v3;
  a3[1] = v3[1];
  a3[2] = v3[2];
  a3[3] = v3[3];
  a3[4] = v3[4];
  a3[5] = v3[5];
  a3[6] = v3[6];
  result = v3[7];
  a3[7] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_17CEE90  (binary VA: 0x17cee90)
// Original: sub_17CEE90
// ----------------------------------------------------------------------------
hkArrayUtil::Self * sub_17CEE90(hkArrayUtil::Self *result, int *a2, int a3)
{
  int v3;
  int v4;
  hkArrayUtil::Self *v5;

  v3 = a2[2] & 0x3FFFFFFF;
  if ( v3 >= a3 )
  {
    *(uint32_t *)result = 0;
  }
  else
  {
    v4 = 2 * v3;
    if ( v4 < a3 )
      v4 = a3;
    v5 = result;
    hkArrayUtil::reserve(result, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a2, v4, 2);
    return v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_17CEF00  (binary VA: 0x17cef00)
// Original: sub_17CEF00
// ----------------------------------------------------------------------------
hkMemoryAllocator::Self * sub_17CEF00(hkMemoryAllocator::Self *result, uint16_t *a2)
{
  int v2;
  int v3;
  hkMemoryAllocator::Self *v4;
  uint16_t *v5;

  v2 = *((uint32_t *)result + 1);
  if ( v2 == (*((uint32_t *)result + 2) & 0x3FFFFFFF) )
  {
    v5 = a2;
    v4 = result;
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, result, 2, v3);
    result = v4;
    a2 = v5;
    v2 = *((uint32_t *)v4 + 1);
  }
  *(uint16_t *)(*(uint32_t *)result + 2 * v2) = *a2;
  ++*((uint32_t *)result + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_17CF0F0  (binary VA: 0x17cf0f0)
// Original: sub_17CF0F0
// ----------------------------------------------------------------------------
int sub_17CF0F0(int *a1, unsigned int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int i;
  int v10;
  typedef int _g4_t_v11;
  typedef unsigned int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t _g4_t_v16[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v16)) > _g4_s3 ? (28u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);

  v16[3] = (uint32_t)(uintptr_t)(&a3);
  v3 = a3;
  v4 = a1[1];
  v13 = a3 + v4;
  v5 = a1[2] & 0x3FFFFFFF;
  if ( a3 + v4 > v5 )
  {
    v10 = 2 * v5;
    if ( v10 < a3 + v4 )
      v10 = a3 + v4;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v16, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a1, v10, 2);
    v4 = a1[1];
  }
  v6 = v4 + v4 + *a1;
  if ( v3 > 0 )
  {
    if ( (v6 >= a2 + 16 || a2 >= v6 + 16) && (unsigned int)v3 > 0xA )
    {
      v7 = 0;
      v12 = 0;
      v11 = 8 * ((unsigned int)v3 >> 3);
      do
      {
        ++v12;
        *(__m128i *)(v6 + v7) = *(__m128i *)(a2 + v7);
        v7 += 16;
      }
      while ( (unsigned int)v3 >> 3 > v12 );
      if ( v3 != v11 )
      {
        *(uint16_t *)(v6 + 16 * ((unsigned int)v3 >> 3)) = *(uint16_t *)(a2 + 16 * ((unsigned int)v3 >> 3));
        if ( v3 > v11 + 1 )
        {
          *(uint16_t *)(v6 + 2 * (v11 + 1)) = *(uint16_t *)(a2 + 2 * (v11 + 1));
          if ( v3 > v11 + 2 )
          {
            *(uint16_t *)(v6 + 2 * (v11 + 2)) = *(uint16_t *)(a2 + 2 * (v11 + 2));
            if ( v3 > v11 + 3 )
            {
              *(uint16_t *)(v6 + 2 * (v11 + 3)) = *(uint16_t *)(a2 + 2 * (v11 + 3));
              if ( v3 > v11 + 4 )
              {
                *(uint16_t *)(v6 + 2 * (v11 + 4)) = *(uint16_t *)(a2 + 2 * (v11 + 4));
                if ( v3 > v11 + 5 )
                {
                  *(uint16_t *)(v6 + 2 * (v11 + 5)) = *(uint16_t *)(a2 + 2 * (v11 + 5));
                  if ( v3 > v11 + 6 )
                    *(uint16_t *)(v6 + 2 * (v11 + 6)) = *(uint16_t *)(a2 + 2 * (v11 + 6));
                }
              }
            }
          }
        }
      }
    }
    else
    {
      for ( i = 0; i != v3; ++i )
        *(uint16_t *)(v6 + 2 * i) = *(uint16_t *)(a2 + 2 * i);
    }
  }
  a1[1] = v13;
  return v13;
}

// ----------------------------------------------------------------------------
// Function: sub_17CF2B0  (binary VA: 0x17cf2b0)
// Original: sub_17CF2B0
// ----------------------------------------------------------------------------
unsigned int sub_17CF2B0(int *a1, unsigned int a2, int16_t a3)
{
  int v3;
  int v4;
  unsigned int result;
  int v6;
  unsigned int i;
  uint16_t v8; // di
  bool v9;
  int v10;

  v3 = *a1;
  v4 = 32 * a2 + *a1;
  result = *(uint16_t *)(v4 + 28);
  if ( (uint16_t)result == 0 && (uint16_t)a2 != 0 )
  {
    v6 = *(uint32_t *)(v4 + 12);
    i = a2;
    v8 = v6;
    if ( a3 != (uint16_t)v6 && *(uint16_t *)(v3 + 32 * (uint16_t)v6 + 30) == (uint16_t)a2 )
    {
      for ( i = (uint16_t)v6; ; i = *(uint32_t *)(v3 + 32 * (uint16_t)i + 12) & 0xC0FFFFFF )
      {
        v10 = *(uint32_t *)(v3 + 32 * (uint16_t)i + 12);
        v8 = v10;
        if ( a3 == *(uint16_t *)(v3 + 32 * (uint16_t)i + 12)
          || (uint16_t)i != *(uint16_t *)(v3 + 32 * (uint16_t)v10 + 30) )
        {
          break;
        }
      }
    }
    if ( v8 == 0 || (v9 = (uint16_t)i == *(uint16_t *)(v3 + 32 * v8 + 30), i = *(uint16_t *)(v3 + 32 * v8 + 30), v9) )
    {
      result = 0;
      if ( v8 != a3 )
        return i;
    }
    else
    {
      return *(uint16_t *)(v3 + 32 * v8 + 30);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_17CF380  (binary VA: 0x17cf380)
// Original: sub_17CF380
// ----------------------------------------------------------------------------
int sub_17CF380(int a1, int a2, uint32_t *a3)
{
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  int result;

  v3 = *(uint32_t *)(*(uint32_t *)a2 + 36);
  a3[9] = v3;
  v4 = (uint32_t *)(48 * v3 + a1);
  a3[8] = (uint32_t)(uintptr_t)(v4);
  *a3 = *v4;
  a3[1] = v4[1];
  a3[2] = v4[2];
  a3[3] = v4[3];
  a3[4] = v4[4];
  a3[5] = v4[5];
  a3[6] = v4[6];
  a3[7] = v4[7];
  v5 = *(uint32_t *)(*(uint32_t *)a2 + 40);
  a3[21] = v5;
  v6 = (uint32_t *)(a1 + 48 * v5);
  a3[20] = (uint32_t)(uintptr_t)(v6);
  a3[12] = *v6;
  a3[13] = v6[1];
  a3[14] = v6[2];
  a3[15] = v6[3];
  a3[16] = v6[4];
  a3[17] = v6[5];
  a3[18] = v6[6];
  result = v6[7];
  a3[19] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_17CF410  (binary VA: 0x17cf410)
// Original: sub_17CF410
// ----------------------------------------------------------------------------
int sub_17CF410(uint32_t *a1, int a2, int a3)
{
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  int result;

  v3 = *(uint16_t *)(*(uint32_t *)a2 + 28);
  *(uint16_t *)(a3 + 36) = v3;
  v4 = (uint32_t *)(*a1 + 32 * v3);
  *(uint32_t *)(a3 + 32) = (uint32_t)(uintptr_t)(v4);
  *(uint32_t *)(a3 + 16) = v4[4];
  *(uint32_t *)(a3 + 20) = v4[5];
  *(uint32_t *)(a3 + 24) = v4[6];
  *(uint32_t *)(a3 + 28) = 0;
  *(uint32_t *)a3 = *v4;
  *(uint32_t *)(a3 + 4) = v4[1];
  *(uint32_t *)(a3 + 8) = v4[2];
  *(uint32_t *)(a3 + 12) = v4[3];
  v5 = *(uint16_t *)(*(uint32_t *)a2 + 30);
  *(uint16_t *)(a3 + 84) = v5;
  v6 = (uint32_t *)(*a1 + 32 * v5);
  *(uint32_t *)(a3 + 80) = (uint32_t)(uintptr_t)(v6);
  *(uint32_t *)(a3 + 64) = v6[4];
  *(uint32_t *)(a3 + 68) = v6[5];
  *(uint64_t *)(a3 + 72) = (unsigned int)v6[6];
  *(uint32_t *)(a3 + 48) = *v6;
  *(uint32_t *)(a3 + 52) = v6[1];
  *(uint32_t *)(a3 + 56) = v6[2];
  result = v6[3];
  *(uint32_t *)(a3 + 60) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_17D0980  (binary VA: 0x17d0980)
// Original: sub_17D0980
// ----------------------------------------------------------------------------
hkpTreeBroadPhase::Self * sub_17D0980(hkpBroadPhase::Self *a1)
{
  int address;
  hkpTreeBroadPhase::Self *v2;

  *(uintptr_t *)(unk_2136248) = (uintptr_t)(1);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (hkpTreeBroadPhase::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                              *(uint32_t *)(*(uint32_t *)address + 44),
                              320);
  hkpTreeBroadPhase::Construct(v2, a1);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_ddc0b8::sortBranch_hkpTreeBroadPhaseInterna_1d0a95  (binary VA: 0x17d09e0)
// Original: hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::sortBranch<hkpTreeBroadPhaseInternals::MappingUpdater>
// ----------------------------------------------------------------------------
int hkcdDynamicTree::Tree_hkcdDynamicTree_DynamicS_ddc0b8::sortBranch_hkpTreeBroadPhaseInterna_1d0a95(int *a1, unsigned int a2, uint32_t *a3, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  uint16_t v8;
  int v9;
  uint16_t v10; // si
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char v17;
  uint16_t v18;
  int v19;
  int v20;
  int v21;
  int v22;
  uint16_t v23;
  uint16_t v24;
  uint16_t v25;
  uint16_t v26;
  uint16_t v27;
  uint16_t v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;

  result = *((uint16_t *)a1 + 12);
  v25 = *((uint16_t *)a1 + 12);
  if ( (uint16_t)result != 0 )
  {
    v5 = (uint16_t)result;
    v6 = *a1 + 32 * (uint16_t)result;
    result = *(uint16_t *)(v6 + 28);
    if ( (uint16_t)result != 0 && a4 != 0 )
    {
      v19 = a4;
      v7 = v5;
      do
      {
        v8 = *(uint16_t *)(v6 + 30);
        v27 = result;
        v28 = v8;
        if ( v8 < (uint16_t)result )
        {
          v26 = v8;
          v27 = v8;
          v28 = result;
          *(uint16_t *)(v6 + 28) = v8;
          *(uint16_t *)(v6 + 30) = result;
          v24 = result;
          v8 = result;
          LOWORD(result) = v26;
        }
        else
        {
          v24 = v8;
          v26 = result;
        }
        if ( v25 > (uint16_t)result )
        {
          v20 = *a1;
          v9 = 32 * v26 + *a1;
          v29 = *(uint32_t *)v9;
          v30 = *(uint32_t *)(v9 + 4);
          v31 = *(uint32_t *)(v9 + 8);
          v32 = *(uint32_t *)(v9 + 12);
          v33 = *(uint32_t *)(v9 + 16);
          v34 = *(uint32_t *)(v9 + 20);
          v35 = *(uint32_t *)(v9 + 24);
          v36 = *(uint32_t *)(v9 + 28);
          v10 = *(uint16_t *)(v9 + 28);
          v23 = *(uint16_t *)(v9 + 30);
          v37 = *(uint32_t *)v6;
          v38 = *(uint32_t *)(v6 + 4);
          v39 = *(uint32_t *)(v6 + 8);
          v21 = *(uint32_t *)(v6 + 12);
          v40 = v21;
          v41 = *(uint32_t *)(v6 + 16);
          v42 = *(uint32_t *)(v6 + 20);
          v43 = *(uint32_t *)(v6 + 24);
          v44 = *(uint32_t *)(v6 + 28);
          if ( v10 != 0 )
          {
            *(uint32_t *)(v20 + 32 * v10 + 12) = v7 | 0x3F000000;
            *(uint32_t *)(*a1 + 32 * v23 + 12) = v7 | 0x3F000000;
          }
          else
          {
            *(uint32_t *)(*a3 + 8 * v23 + 4) = v7 | *(uint32_t *)(*a3 + 8 * v23 + 4) & 0xFFE00000;
            v9 = 32 * v26 + v20;
          }
          v22 = v26 | 0x3F000000;
          if ( (uint16_t)v21 != 0 )
            *(uint16_t *)(*a1
                     + 32 * (uint16_t)v21
                     + 2 * (v25 == *(uint16_t *)(*a1 + 32 * (uint16_t)v21 + 30))
                     + 28) = v26;
          else
            *((uint16_t *)a1 + 12) = v26;
          v11 = v33;
          v12 = *a1 + 32 * v24;
          v32 = v26 | 0x3F000000;
          *(uint32_t *)(v12 + 12) = v22;
          *(uint32_t *)(v6 + 12) = v22;
          *(uint32_t *)(v6 + 16) = v11;
          v13 = v29;
          *(uint32_t *)(v6 + 20) = v34;
          LOWORD(v36) = v10;
          v14 = v35;
          *(uint32_t *)v6 = v13;
          *(uint32_t *)(v6 + 24) = v14;
          HIWORD(v36) = v23;
          v15 = v36;
          *(uint32_t *)(v6 + 4) = v30;
          *(uint32_t *)(v6 + 28) = v15;
          v16 = v37;
          *(uint32_t *)(v6 + 8) = v31;
          *(uint32_t *)v9 = v16;
          v40 = v21;
          *(uint32_t *)(v9 + 4) = v38;
          *(uint32_t *)(v9 + 12) = v21;
          *(uint32_t *)(v9 + 8) = v39;
          LOWORD(v44) = v25;
          *(uint32_t *)(v9 + 16) = v41;
          *(uint32_t *)(v9 + 20) = v42;
          HIWORD(v44) = v24;
          *(uint32_t *)(v9 + 24) = v43;
          v27 = v25;
          *(uint32_t *)(v9 + 28) = v44;
          v26 = v25;
          v8 = v28;
          v6 = v9;
        }
        if ( v26 > v8 )
        {
          v27 = v8;
          v28 = v26;
          *(uint16_t *)(v6 + 28) = v8;
          *(uint16_t *)(v6 + 30) = v26;
        }
        v17 = a2;
        a2 >>= 1;
        v18 = *(&v27 + (v17 & 1));
        v7 = v18;
        v25 = v18;
        v6 = *a1 + 32 * v18;
        result = *(uint16_t *)(v6 + 28);
        if ( (uint16_t)result == 0 )
          break;
        --v19;
      }
      while ( v19 != 0 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkAlgorithm::quickSortRecursive_hkVector4f_hkpTreeBroadP_ad60fc  (binary VA: 0x17d1280)
// Original: hkAlgorithm::quickSortRecursive<hkVector4f,hkpTreeBroadPhaseInternals::DepthSort>
// ----------------------------------------------------------------------------
int hkAlgorithm::quickSortRecursive_hkVector4f_hkpTreeBroadP_ad60fc(int a1, int a2, int a3)
{
  float v3; // xmm1_4
  int v4;
  uint32_t *i;
  int v6;
  int v7;
  int v8;
  int result;
  float v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  float v17;
  int v18;

  while ( 1 )
  {
    v3 = *(float *)(a1 + 16 * ((a3 + a2) >> 1));
    v18 = a3;
    v4 = a2 + 1;
    for ( i = (uint32_t *)(a1 + 16 * a2); ; i += 4 )
    {
      v16 = v4 - 1;
      if ( v3 <= *(float *)i )
      {
        v6 = a1 + 16 * v18;
        v7 = v6 - 16;
        if ( *(float *)v6 > v3 )
        {
          v8 = v18;
          do
          {
            v6 = v7;
            v7 -= 16;
            --v8;
          }
          while ( *(float *)(v7 + 16) > v3 );
          v18 = v8;
        }
        if ( v18 < v16 )
          break;
        if ( v18 != v16 )
        {
          v10 = *(float *)v6;
          *(uint32_t *)v6 = *i;
          v17 = v10;
          v11 = *(uint32_t *)(v6 + 4);
          *(uint32_t *)(v6 + 4) = i[1];
          v15 = v11;
          v12 = *(uint32_t *)(v6 + 8);
          *(uint32_t *)(v6 + 8) = i[2];
          v14 = v12;
          v13 = *(uint32_t *)(v6 + 12);
          *(uint32_t *)(v6 + 12) = i[3];
          *(float *)i = v17;
          i[1] = v15;
          i[2] = v14;
          i[3] = v13;
        }
        --v18;
        v16 = v4;
        if ( v18 < v4 )
          break;
      }
      ++v4;
    }
    if ( a2 < v18 )
      break;
    result = v16;
    if ( a3 <= v16 )
      return result;
LABEL_10:
    a2 = result;
  }
  hkAlgorithm::quickSortRecursive_hkVector4f_hkpTreeBroadP_ad60fc(a1, a2, v18);
  result = v16;
  if ( a3 > v16 )
    goto LABEL_10;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_933b7a  (binary VA: 0x17d3ee0)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpTreeBroadPhaseSpatialTree16,hkcdTreeQueriesStacks::Dynamic<64,unsigned short>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsNoEarlyExitWrapper<hkpTreeBroadPhaseInternals::NewPairsQuery>>
// ----------------------------------------------------------------------------
int * hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_933b7a(int *a1, hkMemoryAllocator::Self *a2, int a3)
{
  int *result;
  int v4;
  uint16_t v5;
  uint16_t v6; // di
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  int v11; // xmm0_4
  int v12; // xmm0_4
  int v13;
  int v14; // xmm0_4
  int v15;
  uint16_t v16;
  int v17;
  int v18;
  uint16_t *v19;
  int v20; // xmm0_4
  uint32_t *v21;
  hkMemoryAllocator::Self *v22;
  int v23;
  int v24;
  uint32_t *v25;
  int v26;
  int v27;
  typedef int _g4_t_v28;
  typedef hkAabb::Self *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint16_t _g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef bool _g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint32_t _g4_t_v43[8];
  typedef uint32_t *_g4_t_v44;
  typedef uint16_t _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef uint16_t _g4_t_v55;
  typedef uint32_t _g4_t_v56[4];
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef uint16_t _g4_t_v62;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v28)) > _g4_s0 ? (12u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v29)) > _g4_s1 ? (24u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v30)) > _g4_s2 ? (28u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v31)) > _g4_s3 ? (32u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v32)) > _g4_s4 ? (36u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v33)) > _g4_s5 ? (40u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v34)) > _g4_s6 ? (44u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v35)) > _g4_s7 ? (48u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v36)) > _g4_s8 ? (52u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v37)) > _g4_s9 ? (56u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v38)) > _g4_s10 ? (60u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v39)) > _g4_s11 ? (68u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v40)) > _g4_s12 ? (72u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v41)) > _g4_s13 ? (76u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v42)) > _g4_s14 ? (76u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v43)) > _g4_s15 ? (80u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v44)) > _g4_s16 ? (112u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v45)) > _g4_s17 ? (116u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v46)) > _g4_s18 ? (128u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (132u + sizeof(_g4_t_v47)) > _g4_s19 ? (132u + sizeof(_g4_t_v47)) : _g4_s19,
    _g4_s21 = (136u + sizeof(_g4_t_v48)) > _g4_s20 ? (136u + sizeof(_g4_t_v48)) : _g4_s20,
    _g4_s22 = (140u + sizeof(_g4_t_v49)) > _g4_s21 ? (140u + sizeof(_g4_t_v49)) : _g4_s21,
    _g4_s23 = (144u + sizeof(_g4_t_v50)) > _g4_s22 ? (144u + sizeof(_g4_t_v50)) : _g4_s22,
    _g4_s24 = (148u + sizeof(_g4_t_v51)) > _g4_s23 ? (148u + sizeof(_g4_t_v51)) : _g4_s23,
    _g4_s25 = (152u + sizeof(_g4_t_v52)) > _g4_s24 ? (152u + sizeof(_g4_t_v52)) : _g4_s24,
    _g4_s26 = (156u + sizeof(_g4_t_v53)) > _g4_s25 ? (156u + sizeof(_g4_t_v53)) : _g4_s25,
    _g4_s27 = (160u + sizeof(_g4_t_v54)) > _g4_s26 ? (160u + sizeof(_g4_t_v54)) : _g4_s26,
    _g4_s28 = (164u + sizeof(_g4_t_v55)) > _g4_s27 ? (164u + sizeof(_g4_t_v55)) : _g4_s27,
    _g4_s29 = (176u + sizeof(_g4_t_v56)) > _g4_s28 ? (176u + sizeof(_g4_t_v56)) : _g4_s28,
    _g4_s30 = (192u + sizeof(_g4_t_v57)) > _g4_s29 ? (192u + sizeof(_g4_t_v57)) : _g4_s29,
    _g4_s31 = (196u + sizeof(_g4_t_v58)) > _g4_s30 ? (196u + sizeof(_g4_t_v58)) : _g4_s30,
    _g4_s32 = (200u + sizeof(_g4_t_v59)) > _g4_s31 ? (200u + sizeof(_g4_t_v59)) : _g4_s31,
    _g4_s33 = (204u + sizeof(_g4_t_v60)) > _g4_s32 ? (204u + sizeof(_g4_t_v60)) : _g4_s32,
    _g4_s34 = (208u + sizeof(_g4_t_v61)) > _g4_s33 ? (208u + sizeof(_g4_t_v61)) : _g4_s33,
    _g4_s35 = (212u + sizeof(_g4_t_v62)) > _g4_s34 ? (212u + sizeof(_g4_t_v62)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 56u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 60u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 68u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 72u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 76u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 76u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 80u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 112u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 116u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 128u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 132u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 136u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 140u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 144u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 148u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 152u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 156u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 160u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 164u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 176u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 192u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 196u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 200u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 204u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 208u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 212u);

  result = a1;
  if ( *((uint16_t *)a1 + 12) != 0 )
  {
    v38 = *((uint32_t *)a2 + 1);
    sub_17CEDE0(a1, (uint16_t *)a1 + 12, (int)(uintptr_t)(v43));
    v29 = (hkAabb::Self *)(a3 + 16);
    result = (int *)hkAabb::overlaps((hkAabb::Self *)(a3 + 16), (const hkAabb::Self *)v43);
    if ( result != nullptr )
    {
      v4 = (int)(uintptr_t)(v44);
      while ( 1 )
      {
        v5 = *(uint16_t *)(v4 + 28);
        if ( v5 == 0 )
          break;
LABEL_5:
        v6 = *(uint16_t *)(v4 + 30);
        v55 = v5;
        v39 = v5;
        v7 = *a1;
        v62 = v6;
        v53 = 0;
        v8 = (uint32_t *)(32 * v5 + v7);
        v54 = v8;
        v9 = (uint32_t *)(32 * v6 + v7);
        v50 = v8[4];
        v37 = *v8;
        v51 = v8[5];
        v46 = v37;
        v10 = v8[1];
        v52 = v8[6];
        v36 = v10;
        v11 = v9[4];
        v47 = v10;
        v57 = v11;
        v12 = v9[5];
        v35 = v8[2];
        v48 = v35;
        v13 = v8[3];
        v58 = v12;
        v61 = v9;
        v14 = v9[6];
        v34 = v13;
        v49 = v13;
        v59 = v14;
        v33 = *v9;
        v56[0] = *v9;
        v32 = v9[1];
        v56[1] = v32;
        v40 = v9;
        v31 = v9[2];
        v56[2] = v31;
        v30 = v9[3];
        v56[3] = v30;
        v60 = 0;
        v41 = hkAabb::overlaps(v29, (const hkAabb::Self *)&v46);
        v15 = v41 | (hkAabb::overlaps(v29, (const hkAabb::Self *)v56) ? 2 : 0);
        if ( v15 == 2 )
        {
          v44 = v40;
          v43[0] = v33;
          v43[1] = v32;
          v43[2] = v31;
          v43[3] = v30;
          v43[4] = v57;
          v43[5] = v58;
          v43[6] = v59;
          v43[7] = v60;
          v45 = v6;
          v4 = (int)(uintptr_t)(v40);
        }
        else
        {
          v16 = v39;
          if ( v15 == 3 )
          {
            v27 = *((uint32_t *)a2 + 1);
            if ( v27 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
            {
              hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 2, v28);
              v16 = v39;
              v27 = *((uint32_t *)a2 + 1);
            }
            v42 = *(uint32_t *)a2;
            *((uint32_t *)a2 + 1) = v27 + 1;
            *(uint16_t *)(v42 + 2 * v27) = v6;
            v43[0] = v46;
            v43[1] = v47;
            v43[2] = v48;
            v26 = v49;
          }
          else
          {
            if ( v15 != 1 )
            {
              result = *((int **)a2 + 1);
              if ( v38 < (int)(uintptr_t)(result) )
                goto LABEL_9;
              return result;
            }
            v43[0] = v37;
            v43[1] = v36;
            v43[2] = v35;
            v26 = v34;
          }
          v43[3] = v26;
          v43[4] = v50;
          v43[5] = v51;
          v43[6] = v52;
          v43[7] = v53;
          v44 = v8;
          v45 = v16;
          v4 = (int)(uintptr_t)(v8);
        }
      }
      while ( 1 )
      {
        v21 = *(uint32_t **)a3;
        v22 = *(hkMemoryAllocator::Self **)(*(uint32_t *)a3 + 4);
        v23 = *((uint32_t *)v22 + 1);
        if ( v23 == (*((uint32_t *)v22 + 2) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v22, 8, v28);
          v23 = *((uint32_t *)v22 + 1);
        }
        v24 = *(uint32_t *)v22;
        *((uint32_t *)v22 + 1) = v23 + 1;
        v25 = (uint32_t *)(v24 + 8 * v23);
        *v25 = v21[2];
        v25[1] = *(uint32_t *)(*v21 + 8 * *((uint16_t *)v44 + 15));
        result = *((int **)a2 + 1);
        if ( v38 >= (int)(uintptr_t)(result) )
          break;
LABEL_9:
        v17 = (int)(uintptr_t)(result) - 1;
        v18 = *(uint32_t *)a2;
        *((uint32_t *)a2 + 1) = v17;
        v19 = (uint16_t *)(v18 + 2 * v17);
        v45 = *v19;
        v4 = *a1 + 32 * *v19;
        v44 = (uint32_t *)v4;
        v43[4] = *(uint32_t *)(v4 + 16);
        v43[5] = *(uint32_t *)(v4 + 20);
        v20 = *(uint32_t *)(v4 + 24);
        v43[7] = 0;
        v43[6] = v20;
        v43[0] = *(uint32_t *)v4;
        v43[1] = *(uint32_t *)(v4 + 4);
        v5 = *(uint16_t *)(v4 + 28);
        v43[2] = *(uint32_t *)(v4 + 8);
        v43[3] = *(uint32_t *)(v4 + 12);
        if ( v5 != 0 )
          goto LABEL_5;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_434323  (binary VA: 0x17d4890)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpTreeBroadPhaseSpatialTree16,hkcdTreeQueriesStacks::Dynamic<64,unsigned short>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::CoherentKineticAabbOverlapsWrapper<hkpTreeBroadPhaseInternals::UpdatePairsQuery>>
// ----------------------------------------------------------------------------
int * hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_434323(int *a1, hkMemoryAllocator::Self *a2, int a3)
{
  int *result;
  int i;
  uint16_t v5;
  uint16_t v6; // di
  int v7;
  uint32_t *v8;
  int v9;
  int v10;
  int v11; // xmm0_4
  int v12;
  int v13;
  uint16_t v14;
  int v15;
  int v16;
  uint16_t *v17;
  int v18; // xmm0_4
  bool v19;
  bool v20;
  uint32_t *v21;
  int v22;
  int v23;
  hkMemoryAllocator::Self *v24;
  int v25;
  int v26;
  uint32_t *v27;
  int v28;
  int v29;
  typedef int _g4_t_v30;
  typedef hkAabb::Self *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint16_t _g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef bool _g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint32_t *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint32_t _g4_t_v47[8];
  typedef uint32_t *_g4_t_v48;
  typedef uint16_t _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint32_t *_g4_t_v58;
  typedef uint16_t _g4_t_v59;
  typedef uint32_t _g4_t_v60[4];
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef uint32_t *_g4_t_v65;
  typedef uint16_t _g4_t_v66;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v30)) > _g4_s0 ? (12u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v31)) > _g4_s1 ? (20u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v32)) > _g4_s2 ? (24u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v33)) > _g4_s3 ? (28u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v34)) > _g4_s4 ? (32u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v35)) > _g4_s5 ? (36u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v36)) > _g4_s6 ? (40u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v37)) > _g4_s7 ? (44u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v38)) > _g4_s8 ? (48u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v39)) > _g4_s9 ? (52u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v40)) > _g4_s10 ? (56u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v41)) > _g4_s11 ? (64u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v42)) > _g4_s12 ? (68u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v43)) > _g4_s13 ? (72u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v44)) > _g4_s14 ? (72u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v45)) > _g4_s15 ? (72u + sizeof(_g4_t_v45)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v46)) > _g4_s16 ? (72u + sizeof(_g4_t_v46)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v47)) > _g4_s17 ? (80u + sizeof(_g4_t_v47)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v48)) > _g4_s18 ? (112u + sizeof(_g4_t_v48)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v49)) > _g4_s19 ? (116u + sizeof(_g4_t_v49)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v50)) > _g4_s20 ? (128u + sizeof(_g4_t_v50)) : _g4_s20,
    _g4_s22 = (132u + sizeof(_g4_t_v51)) > _g4_s21 ? (132u + sizeof(_g4_t_v51)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v52)) > _g4_s22 ? (136u + sizeof(_g4_t_v52)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v53)) > _g4_s23 ? (140u + sizeof(_g4_t_v53)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v54)) > _g4_s24 ? (144u + sizeof(_g4_t_v54)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v55)) > _g4_s25 ? (148u + sizeof(_g4_t_v55)) : _g4_s25,
    _g4_s27 = (152u + sizeof(_g4_t_v56)) > _g4_s26 ? (152u + sizeof(_g4_t_v56)) : _g4_s26,
    _g4_s28 = (156u + sizeof(_g4_t_v57)) > _g4_s27 ? (156u + sizeof(_g4_t_v57)) : _g4_s27,
    _g4_s29 = (160u + sizeof(_g4_t_v58)) > _g4_s28 ? (160u + sizeof(_g4_t_v58)) : _g4_s28,
    _g4_s30 = (164u + sizeof(_g4_t_v59)) > _g4_s29 ? (164u + sizeof(_g4_t_v59)) : _g4_s29,
    _g4_s31 = (176u + sizeof(_g4_t_v60)) > _g4_s30 ? (176u + sizeof(_g4_t_v60)) : _g4_s30,
    _g4_s32 = (192u + sizeof(_g4_t_v61)) > _g4_s31 ? (192u + sizeof(_g4_t_v61)) : _g4_s31,
    _g4_s33 = (196u + sizeof(_g4_t_v62)) > _g4_s32 ? (196u + sizeof(_g4_t_v62)) : _g4_s32,
    _g4_s34 = (200u + sizeof(_g4_t_v63)) > _g4_s33 ? (200u + sizeof(_g4_t_v63)) : _g4_s33,
    _g4_s35 = (204u + sizeof(_g4_t_v64)) > _g4_s34 ? (204u + sizeof(_g4_t_v64)) : _g4_s34,
    _g4_s36 = (208u + sizeof(_g4_t_v65)) > _g4_s35 ? (208u + sizeof(_g4_t_v65)) : _g4_s35,
    _g4_s37 = (212u + sizeof(_g4_t_v66)) > _g4_s36 ? (212u + sizeof(_g4_t_v66)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 68u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 72u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 72u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 72u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 72u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 80u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 112u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 116u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 128u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 132u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 136u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 140u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 144u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 148u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 152u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 156u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 160u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 164u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 176u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 192u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 196u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 200u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 204u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 208u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 212u);

  result = a1;
  if ( *((uint16_t *)a1 + 12) == 0 )
    return result;
  v40 = *((uint32_t *)a2 + 1);
  sub_17CEDE0(a1, (uint16_t *)a1 + 12, (int)(uintptr_t)(v47));
  v31 = (hkAabb::Self *)(a3 + 80);
  result = (int *)hkAabb::overlaps((hkAabb::Self *)(a3 + 80), (const hkAabb::Self *)v47);
  if ( result == nullptr )
    return result;
  for ( i = (int)(uintptr_t)(v48); ; i = (int)(uintptr_t)(v8) )
  {
    while ( 1 )
    {
      v5 = *(uint16_t *)(i + 28);
      if ( v5 == 0 )
      {
        while ( 1 )
        {
          v19 = hkAabb::overlaps((hkAabb::Self *)(a3 + 48), (const hkAabb::Self *)v47);
          v20 = hkAabb::overlaps((hkAabb::Self *)(a3 + 16), (const hkAabb::Self *)v47);
          v21 = *(uint32_t **)a3;
          v22 = *(uint32_t *)(**(uint32_t **)a3 + 8 * *(uint16_t *)(i + 30));
          if ( v22 == *(uint32_t *)(*(uint32_t *)a3 + 12) )
            goto LABEL_8;
          v23 = v20 | (v19 ? 2 : 0);
          if ( v23 == 1 )
            break;
          if ( v23 != 2 )
            goto LABEL_8;
          v24 = (hkMemoryAllocator::Self *)v21[1];
          v25 = *((uint32_t *)v24 + 1);
          if ( v25 == (*((uint32_t *)v24 + 2) & 0x3FFFFFFF) )
            goto LABEL_17;
LABEL_14:
          v44 = *(uint32_t *)v24;
          *((uint32_t *)v24 + 1) = v25 + 1;
          v26 = v21[3];
          v27 = (uint32_t *)(v44 + 8 * v25);
          v27[1] = v22;
          *v27 = v26;
          result = *((int **)a2 + 1);
          if ( v40 >= (int)(uintptr_t)(result) )
            return result;
LABEL_9:
          v15 = (int)(uintptr_t)(result) - 1;
          v16 = *(uint32_t *)a2;
          *((uint32_t *)a2 + 1) = v15;
          v17 = (uint16_t *)(v16 + 2 * v15);
          v49 = *v17;
          i = *a1 + 32 * *v17;
          v48 = (uint32_t *)i;
          v47[4] = *(uint32_t *)(i + 16);
          v47[5] = *(uint32_t *)(i + 20);
          v18 = *(uint32_t *)(i + 24);
          v47[7] = 0;
          v47[6] = v18;
          v47[0] = *(uint32_t *)i;
          v47[1] = *(uint32_t *)(i + 4);
          v5 = *(uint16_t *)(i + 28);
          v47[2] = *(uint32_t *)(i + 8);
          v47[3] = *(uint32_t *)(i + 12);
          if ( v5 != 0 )
            goto LABEL_5;
        }
        v24 = (hkMemoryAllocator::Self *)v21[2];
        v25 = *((uint32_t *)v24 + 1);
        if ( v25 != (*((uint32_t *)v24 + 2) & 0x3FFFFFFF) )
          goto LABEL_14;
LABEL_17:
        v45 = *(uint32_t **)a3;
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v24, 8, v30);
        v25 = *((uint32_t *)v24 + 1);
        v21 = v45;
        goto LABEL_14;
      }
LABEL_5:
      v6 = *(uint16_t *)(i + 30);
      v59 = v5;
      v41 = v5;
      v66 = v6;
      v7 = *a1;
      v57 = 0;
      v8 = (uint32_t *)(32 * v5 + v7);
      v58 = v8;
      v9 = *v8;
      v37 = v8[2];
      v52 = v37;
      v39 = v9;
      v50 = v9;
      v10 = v8[1];
      v54 = v8[4];
      v38 = v10;
      v11 = v8[5];
      v51 = v10;
      v12 = v8[3];
      v55 = v11;
      v65 = (uint32_t *)(32 * v6 + v7);
      v36 = v12;
      v56 = v8[6];
      v53 = v12;
      v61 = v65[4];
      v62 = v65[5];
      v63 = v65[6];
      v35 = *v65;
      v60[0] = *v65;
      v34 = v65[1];
      v60[1] = v34;
      v42 = v65;
      v33 = v65[2];
      v60[2] = v33;
      v32 = v65[3];
      v60[3] = v32;
      v64 = 0;
      v43 = hkAabb::overlaps(v31, (const hkAabb::Self *)&v50);
      v13 = v43 | (hkAabb::overlaps(v31, (const hkAabb::Self *)v60) ? 2 : 0);
      if ( v13 != 2 )
        break;
      v48 = v42;
      v47[0] = v35;
      v47[1] = v34;
      v47[2] = v33;
      v47[3] = v32;
      v47[4] = v61;
      v47[5] = v62;
      v47[6] = v63;
      v47[7] = v64;
      v49 = v6;
      i = (int)(uintptr_t)(v42);
    }
    v14 = v41;
    if ( v13 != 3 )
      break;
    v28 = *((uint32_t *)a2 + 1);
    if ( v28 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 2, v30);
      v14 = v41;
      v28 = *((uint32_t *)a2 + 1);
    }
    v46 = *(uint32_t *)a2;
    *((uint32_t *)a2 + 1) = v28 + 1;
    *(uint16_t *)(v46 + 2 * v28) = v6;
    v47[0] = v50;
    v47[1] = v51;
    v47[2] = v52;
    v29 = v53;
LABEL_21:
    v47[3] = v29;
    v47[4] = v54;
    v47[5] = v55;
    v47[6] = v56;
    v47[7] = v57;
    v48 = v8;
    v49 = v14;
  }
  if ( v13 == 1 )
  {
    v47[0] = v39;
    v47[1] = v38;
    v47[2] = v37;
    v29 = v36;
    goto LABEL_21;
  }
LABEL_8:
  result = *((int **)a2 + 1);
  if ( v40 < (int)(uintptr_t)(result) )
    goto LABEL_9;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_fde0c5  (binary VA: 0x17d4d80)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpTreeBroadPhaseSpatialTree16,hkcdTreeQueriesStacks::Dynamic<64,unsigned short>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::KineticAabbOverlapsWrapper<hkpTreeBroadPhaseInternals::UpdatePairsQuery>>
// ----------------------------------------------------------------------------
int hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_fde0c5(int a1, int *a2, int a3)
{
  int result;
  bool v4;
  int i;
  uint16_t v6;
  int v7;
  uint32_t *v8;
  int v9;
  int v10;
  int v11;
  int v12; // xmm0_4
  int v13;
  int v14;
  uint16_t v15;
  int v16;
  int v17;
  uint16_t *v18;
  int v19; // xmm0_4
  bool v20;
  bool v21;
  uint32_t *v22;
  int v23;
  int v24;
  hkMemoryAllocator::Self *v25;
  int v26;
  int v27;
  uint32_t *v28;
  int *v29;
  int v30;
  int v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint16_t _g4_t_v41;
  typedef uint16_t _g4_t_v42;
  typedef uint32_t *_g4_t_v43;
  typedef bool _g4_t_v44;
  typedef bool _g4_t_v45;
  typedef bool _g4_t_v46;
  typedef int _g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef hkAabb::Self *_g4_t_v50;
  typedef hkAabb::Self *_g4_t_v51;
  typedef uint32_t _g4_t_v52[8];
  typedef uint32_t *_g4_t_v53;
  typedef uint16_t _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef uint32_t *_g4_t_v63;
  typedef uint16_t _g4_t_v64;
  typedef uint32_t _g4_t_v65[4];
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef uint32_t *_g4_t_v70;
  typedef int16_t _g4_t_v71;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v32)) > _g4_s0 ? (12u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v33)) > _g4_s1 ? (16u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v34)) > _g4_s2 ? (20u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v35)) > _g4_s3 ? (24u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v36)) > _g4_s4 ? (28u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v37)) > _g4_s5 ? (32u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v38)) > _g4_s6 ? (36u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v39)) > _g4_s7 ? (40u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v40)) > _g4_s8 ? (44u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (50u + sizeof(_g4_t_v41)) > _g4_s9 ? (50u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v42)) > _g4_s10 ? (52u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v43)) > _g4_s11 ? (56u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v44)) > _g4_s12 ? (60u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v45)) > _g4_s13 ? (64u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v46)) > _g4_s14 ? (64u + sizeof(_g4_t_v46)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v47)) > _g4_s15 ? (64u + sizeof(_g4_t_v47)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v48)) > _g4_s16 ? (64u + sizeof(_g4_t_v48)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v49)) > _g4_s17 ? (64u + sizeof(_g4_t_v49)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v50)) > _g4_s18 ? (72u + sizeof(_g4_t_v50)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v51)) > _g4_s19 ? (76u + sizeof(_g4_t_v51)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v52)) > _g4_s20 ? (80u + sizeof(_g4_t_v52)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v53)) > _g4_s21 ? (112u + sizeof(_g4_t_v53)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v54)) > _g4_s22 ? (116u + sizeof(_g4_t_v54)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v55)) > _g4_s23 ? (128u + sizeof(_g4_t_v55)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v56)) > _g4_s24 ? (132u + sizeof(_g4_t_v56)) : _g4_s24,
    _g4_s26 = (136u + sizeof(_g4_t_v57)) > _g4_s25 ? (136u + sizeof(_g4_t_v57)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v58)) > _g4_s26 ? (140u + sizeof(_g4_t_v58)) : _g4_s26,
    _g4_s28 = (144u + sizeof(_g4_t_v59)) > _g4_s27 ? (144u + sizeof(_g4_t_v59)) : _g4_s27,
    _g4_s29 = (148u + sizeof(_g4_t_v60)) > _g4_s28 ? (148u + sizeof(_g4_t_v60)) : _g4_s28,
    _g4_s30 = (152u + sizeof(_g4_t_v61)) > _g4_s29 ? (152u + sizeof(_g4_t_v61)) : _g4_s29,
    _g4_s31 = (156u + sizeof(_g4_t_v62)) > _g4_s30 ? (156u + sizeof(_g4_t_v62)) : _g4_s30,
    _g4_s32 = (160u + sizeof(_g4_t_v63)) > _g4_s31 ? (160u + sizeof(_g4_t_v63)) : _g4_s31,
    _g4_s33 = (164u + sizeof(_g4_t_v64)) > _g4_s32 ? (164u + sizeof(_g4_t_v64)) : _g4_s32,
    _g4_s34 = (176u + sizeof(_g4_t_v65)) > _g4_s33 ? (176u + sizeof(_g4_t_v65)) : _g4_s33,
    _g4_s35 = (192u + sizeof(_g4_t_v66)) > _g4_s34 ? (192u + sizeof(_g4_t_v66)) : _g4_s34,
    _g4_s36 = (196u + sizeof(_g4_t_v67)) > _g4_s35 ? (196u + sizeof(_g4_t_v67)) : _g4_s35,
    _g4_s37 = (200u + sizeof(_g4_t_v68)) > _g4_s36 ? (200u + sizeof(_g4_t_v68)) : _g4_s36,
    _g4_s38 = (204u + sizeof(_g4_t_v69)) > _g4_s37 ? (204u + sizeof(_g4_t_v69)) : _g4_s37,
    _g4_s39 = (208u + sizeof(_g4_t_v70)) > _g4_s38 ? (208u + sizeof(_g4_t_v70)) : _g4_s38,
    _g4_s40 = (212u + sizeof(_g4_t_v71)) > _g4_s39 ? (212u + sizeof(_g4_t_v71)) : _g4_s39
  };
  alignas(16) uint8_t _g4_sf[_g4_s40];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 40u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 50u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 52u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 56u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 60u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 64u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 64u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 64u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 64u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 64u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 72u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 76u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 80u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 112u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 116u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 128u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 132u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 136u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 140u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 144u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 148u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 152u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 156u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 160u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 164u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 176u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 192u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 196u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 200u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 204u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 208u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 212u);

  result = a1;
  if ( *(uint16_t *)(a1 + 24) == 0 )
    return result;
  v40 = a2[1];
  sub_17CEDE0((uint32_t *)a1, (uint16_t *)(a1 + 24), (int)(uintptr_t)(v52));
  v51 = (hkAabb::Self *)(a3 + 16);
  v4 = hkAabb::overlaps((hkAabb::Self *)(a3 + 16), (const hkAabb::Self *)v52);
  v50 = (hkAabb::Self *)(a3 + 48);
  result = v4 | hkAabb::overlaps((hkAabb::Self *)(a3 + 48), (const hkAabb::Self *)v52);
  if ( result == 0 )
    return result;
  for ( i = (int)(uintptr_t)(v53); ; i = (int)(uintptr_t)(v8) )
  {
    while ( 1 )
    {
      v6 = *(uint16_t *)(i + 28);
      if ( v6 == 0 )
      {
        while ( 1 )
        {
          v20 = hkAabb::overlaps(v50, (const hkAabb::Self *)v52);
          v21 = hkAabb::overlaps(v51, (const hkAabb::Self *)v52);
          v22 = *(uint32_t **)a3;
          v23 = *(uint32_t *)(**(uint32_t **)a3 + 8 * *(uint16_t *)(i + 30));
          if ( v23 == *(uint32_t *)(*(uint32_t *)a3 + 12) )
            goto LABEL_8;
          v24 = v21 | (v20 ? 2 : 0);
          if ( v24 == 1 )
            break;
          if ( v24 != 2 )
            goto LABEL_8;
          v25 = (hkMemoryAllocator::Self *)v22[1];
          v26 = *((uint32_t *)v25 + 1);
          if ( v26 == (*((uint32_t *)v25 + 2) & 0x3FFFFFFF) )
            goto LABEL_17;
LABEL_14:
          v47 = *(uint32_t *)v25;
          *((uint32_t *)v25 + 1) = v26 + 1;
          v27 = v22[3];
          v28 = (uint32_t *)(v47 + 8 * v26);
          v28[1] = v23;
          *v28 = v27;
          result = a2[1];
          if ( v40 >= result )
            return result;
LABEL_9:
          v16 = result - 1;
          v17 = *a2;
          a2[1] = v16;
          v18 = (uint16_t *)(v17 + 2 * v16);
          v54 = *v18;
          i = *(uint32_t *)a1 + 32 * *v18;
          v53 = (uint32_t *)i;
          v52[4] = *(uint32_t *)(i + 16);
          v52[5] = *(uint32_t *)(i + 20);
          v19 = *(uint32_t *)(i + 24);
          v52[7] = 0;
          v52[6] = v19;
          v52[0] = *(uint32_t *)i;
          v52[1] = *(uint32_t *)(i + 4);
          v6 = *(uint16_t *)(i + 28);
          v52[2] = *(uint32_t *)(i + 8);
          v52[3] = *(uint32_t *)(i + 12);
          if ( v6 != 0 )
            goto LABEL_5;
        }
        v25 = (hkMemoryAllocator::Self *)v22[2];
        v26 = *((uint32_t *)v25 + 1);
        if ( v26 != (*((uint32_t *)v25 + 2) & 0x3FFFFFFF) )
          goto LABEL_14;
LABEL_17:
        v48 = *(uint32_t **)a3;
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v25, 8, v32);
        v26 = *((uint32_t *)v25 + 1);
        v22 = v48;
        goto LABEL_14;
      }
LABEL_5:
      v64 = v6;
      v42 = v6;
      v62 = 0;
      v7 = *(uint32_t *)a1;
      v8 = (uint32_t *)(32 * v6 + *(uint32_t *)a1);
      v63 = v8;
      v9 = *v8;
      v38 = v8[1];
      v56 = v38;
      v10 = v8[3];
      v39 = v9;
      v55 = v9;
      v36 = v10;
      v11 = v8[2];
      v58 = v10;
      LOWORD(v10) = *(uint16_t *)(i + 30);
      v37 = v11;
      v57 = v11;
      v41 = v10;
      v71 = v10;
      v59 = v8[4];
      v60 = v8[5];
      v12 = v8[6];
      v70 = (uint32_t *)(32 * (uint16_t)v10 + v7);
      v61 = v12;
      v66 = v70[4];
      v67 = v70[5];
      v68 = v70[6];
      v35 = *v70;
      v65[0] = *v70;
      v43 = v70;
      v34 = v70[1];
      v65[1] = v34;
      v13 = v70[2];
      v69 = 0;
      v33 = v13;
      v65[2] = v13;
      v32 = v70[3];
      v65[3] = v32;
      v45 = hkAabb::overlaps(v51, (const hkAabb::Self *)&v55);
      v46 = hkAabb::overlaps(v50, (const hkAabb::Self *)&v55) || v45;
      v44 = hkAabb::overlaps(v51, (const hkAabb::Self *)v65);
      v14 = v46 | ((v44 | hkAabb::overlaps(v50, (const hkAabb::Self *)v65)) != 0 ? 2 : 0);
      if ( v14 != 2 )
        break;
      v53 = v43;
      v52[0] = v35;
      v52[1] = v34;
      v52[2] = v33;
      v52[3] = v32;
      v52[4] = v66;
      v52[5] = v67;
      v52[6] = v68;
      v52[7] = v69;
      v54 = v41;
      i = (int)(uintptr_t)(v43);
    }
    v15 = v42;
    if ( v14 != 3 )
      break;
    v29 = a2;
    v30 = a2[1];
    if ( v30 == (a2[2] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)a2, 2, v32);
      v15 = v42;
      v29 = a2;
      v30 = a2[1];
    }
    v49 = *v29;
    v29[1] = v30 + 1;
    *(uint16_t *)(v49 + 2 * v30) = v41;
    v52[0] = v55;
    v52[1] = v56;
    v52[2] = v57;
    v31 = v58;
LABEL_21:
    v52[3] = v31;
    v52[4] = v59;
    v52[5] = v60;
    v52[6] = v61;
    v52[7] = v62;
    v53 = v8;
    v54 = v15;
  }
  if ( v14 == 1 )
  {
    v52[0] = v39;
    v52[1] = v38;
    v52[2] = v37;
    v31 = v36;
    goto LABEL_21;
  }
LABEL_8:
  result = a2[1];
  if ( v40 < result )
    goto LABEL_9;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_d7a70f  (binary VA: 0x17d52b0)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpTreeBroadPhaseSpatialTree16,hkcdTreeQueriesStacks::Dynamic<64,unsigned short>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbCastWrapper<hkpTreeBroadPhaseInternals::AabbCastQuery>>
// ----------------------------------------------------------------------------
int hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_d7a70f(int a1, hkMemoryAllocator::Self *a2, float *a3)
{
  int result;
  float v4; // xmm4_4
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  unsigned int i;
  int16_t v9;
  __m128i v10;
  __m128i v11;
  float v12; // xmm5_4
  float v13; // xmm2_4
  __m128i v14;
  float v15;
  __m128i v16;
  float v17; // xmm3_4
  float v18;
  float v19;
  float v20; // xmm5_4
  float v21;
  __m128 v22;
  float v23; // xmm4_4
  float v24; // xmm1_4
  __m128 v25;
  __m128 v26;
  float v27; // xmm3_4
  float v28; // xmm0_4
  float v29; // xmm3_4
  float v30; // xmm2_4
  float v31; // xmm3_4
  float v32; // xmm7_4
  float v33; // xmm0_4
  float v34; // xmm3_4
  float v35; // xmm2_4
  float v36; // xmm6_4
  float v37; // xmm7_4
  float v38; // xmm0_4
  bool v39;
  float v40; // xmm0_4
  float v41; // xmm5_4
  float v42; // xmm0_4
  float v43; // xmm4_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm5_4
  float v47; // xmm4_4
  float v48; // xmm1_4
  float v49; // xmm0_4
  float v50; // xmm3_4
  float v51; // xmm4_4
  float v52; // xmm1_4
  int v53;
  int v54;
  int v55;
  int v56;
  bool v57;
  int v58;
  float *v59;
  float v60;
  typedef float *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef int _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef float _g4_t_v74[4];
  typedef float _g4_t_v75;
  typedef unsigned int _g4_t_v76;
  typedef unsigned int _g4_t_v77;
  typedef unsigned int _g4_t_v78;
  typedef unsigned int _g4_t_v79;
  typedef unsigned int _g4_t_v80;
  typedef unsigned int _g4_t_v81;
  typedef unsigned int _g4_t_v82;
  typedef unsigned int _g4_t_v83;
  typedef int16_t _g4_t_v84;
  typedef unsigned int _g4_t_v85;
  typedef unsigned int _g4_t_v86;
  typedef unsigned int _g4_t_v87;
  typedef unsigned int _g4_t_v88;
  typedef unsigned int _g4_t_v89;
  typedef unsigned int _g4_t_v90;
  typedef unsigned int _g4_t_v91;
  typedef unsigned int _g4_t_v92;
  typedef unsigned int _g4_t_v93;
  typedef uint16_t _g4_t_v94[6];
  typedef unsigned int _g4_t_v95[15];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v61)) > _g4_s0 ? (12u + sizeof(_g4_t_v61)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v62)) > _g4_s1 ? (24u + sizeof(_g4_t_v62)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v63)) > _g4_s2 ? (32u + sizeof(_g4_t_v63)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v64)) > _g4_s3 ? (36u + sizeof(_g4_t_v64)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v65)) > _g4_s4 ? (40u + sizeof(_g4_t_v65)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v66)) > _g4_s5 ? (44u + sizeof(_g4_t_v66)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v67)) > _g4_s6 ? (48u + sizeof(_g4_t_v67)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v68)) > _g4_s7 ? (52u + sizeof(_g4_t_v68)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v69)) > _g4_s8 ? (56u + sizeof(_g4_t_v69)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v70)) > _g4_s9 ? (56u + sizeof(_g4_t_v70)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v71)) > _g4_s10 ? (56u + sizeof(_g4_t_v71)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v72)) > _g4_s11 ? (60u + sizeof(_g4_t_v72)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v73)) > _g4_s12 ? (60u + sizeof(_g4_t_v73)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v74)) > _g4_s13 ? (64u + sizeof(_g4_t_v74)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v75)) > _g4_s14 ? (80u + sizeof(_g4_t_v75)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v76)) > _g4_s15 ? (84u + sizeof(_g4_t_v76)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v77)) > _g4_s16 ? (88u + sizeof(_g4_t_v77)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v78)) > _g4_s17 ? (92u + sizeof(_g4_t_v78)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v79)) > _g4_s18 ? (96u + sizeof(_g4_t_v79)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v80)) > _g4_s19 ? (100u + sizeof(_g4_t_v80)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v81)) > _g4_s20 ? (104u + sizeof(_g4_t_v81)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v82)) > _g4_s21 ? (108u + sizeof(_g4_t_v82)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v83)) > _g4_s22 ? (112u + sizeof(_g4_t_v83)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v84)) > _g4_s23 ? (116u + sizeof(_g4_t_v84)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v85)) > _g4_s24 ? (128u + sizeof(_g4_t_v85)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v86)) > _g4_s25 ? (132u + sizeof(_g4_t_v86)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v87)) > _g4_s26 ? (136u + sizeof(_g4_t_v87)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v88)) > _g4_s27 ? (140u + sizeof(_g4_t_v88)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v89)) > _g4_s28 ? (144u + sizeof(_g4_t_v89)) : _g4_s28,
    _g4_s30 = (148u + sizeof(_g4_t_v90)) > _g4_s29 ? (148u + sizeof(_g4_t_v90)) : _g4_s29,
    _g4_s31 = (152u + sizeof(_g4_t_v91)) > _g4_s30 ? (152u + sizeof(_g4_t_v91)) : _g4_s30,
    _g4_s32 = (156u + sizeof(_g4_t_v92)) > _g4_s31 ? (156u + sizeof(_g4_t_v92)) : _g4_s31,
    _g4_s33 = (160u + sizeof(_g4_t_v93)) > _g4_s32 ? (160u + sizeof(_g4_t_v93)) : _g4_s32,
    _g4_s34 = (164u + sizeof(_g4_t_v94)) > _g4_s33 ? (164u + sizeof(_g4_t_v94)) : _g4_s33,
    _g4_s35 = (176u + sizeof(_g4_t_v95)) > _g4_s34 ? (176u + sizeof(_g4_t_v95)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 12u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 24u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 36u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 40u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 44u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 48u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 52u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 56u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 56u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 56u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 60u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 60u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 64u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 80u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 84u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 88u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 92u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 96u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 100u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 104u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 108u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 112u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 116u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 128u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 132u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 136u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 140u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 144u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 148u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 152u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 156u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 160u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 164u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 176u);

  result = a1;
  if ( *(uint16_t *)(a1 + 24) != 0 )
  {
    v62 = *((uint32_t *)a2 + 1);
    sub_17CEDE0((uint32_t *)a1, (uint16_t *)(a1 + 24), (int)(uintptr_t)(&v75));
    v4 = a3[16];
    v61 = v74;
    v74[0] = a3[11];
    v5 = a3[17];
    v6 = a3[18];
    v7 = a3[19];
    *(float *)&v85 = v75 - v4;
    *(float *)&v89 = v4 + *(float *)&v79;
    *(float *)&v86 = *(float *)&v76 - v5;
    *(float *)&v90 = v5 + *(float *)&v80;
    *(float *)&v87 = *(float *)&v77 - v6;
    *(float *)&v91 = v6 + *(float *)&v81;
    *(float *)&v88 = *(float *)&v78 - v7;
    *(float *)&v92 = v7 + *(float *)&v82;
    result = hkcdIntersectRayAabb(a3 + 4, (float *)&v85, v74);
    if ( result != 0 )
    {
      for ( i = v83; ; i = v83 )
      {
LABEL_4:
        while ( 1 )
        {
          v9 = *(uint16_t *)(i + 28);
          if ( v9 == 0 )
            break;
          while ( 1 )
          {
            LOWORD(v74[0]) = v9;
            sub_17CEDE0((uint32_t *)a1, v61, (int)(uintptr_t)(&v85));
            LOWORD(v74[0]) = *(uint16_t *)(v83 + 30);
            sub_17CEDE0((uint32_t *)a1, v61, (int)(uintptr_t)(v95));
g4_m128_raw(v10) = *((unsigned int *)a3 + 18);
g4_m128_raw(v11) = v91;
            *(float *)g4_m128_ptr<int32_t>(v11) = *(float *)&v91 + *(float *)g4_m128_ptr<int32_t>(v10);
g4_m128_raw(v26) = *((unsigned int *)a3 + 16);
            v12 = a3[17];
            v13 = *(float *)&v86 - v12;
            v69 = *(float *)&v87 - *(float *)g4_m128_ptr<int32_t>(v10);
            v14 = _mm_cvtsi32_si128(v95[1]);
            v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
            v16 = _mm_cvtsi32_si128(v95[0]);
            *(float *)g4_m128_ptr<int32_t>(v16) = *(float *)g4_m128_ptr<int32_t>(v16) -g4_m128_lane<float>(v26, 0);
            *(float *)g4_m128_ptr<int32_t>(v14) = *(float *)g4_m128_ptr<int32_t>(v14) - v12;
            v17 = *(float *)&v90 + v12;
            v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
            v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
            *(float *)g4_m128_ptr<int32_t>(v16) = *(float *)&v95[2] - *(float *)g4_m128_ptr<int32_t>(v10);
            *(float *)g4_m128_ptr<int32_t>(v10) = *(float *)g4_m128_ptr<int32_t>(v10) + *(float *)&v95[6];
            v65 = v12 + *(float *)&v95[5];
            v20 = a3[4];
            v68 = v17;
            v21 = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
g4_m128_lane<int32_t>(v22, 0) = 0;
g4_m128_raw(v25) = v85;
            v66 = *(float *)&v95[4] +g4_m128_lane<float>(v26, 0);
            v23 = a3[12];
            v67 = *(float *)g4_m128_ptr<int32_t>(v16);
            v24 = a3[11];
g4_m128_lane<float>(v25, 0) = (float)((float)(*(float *)&v85 -g4_m128_lane<float>(v26, 0)) - v20) * v23;
g4_m128_lane<float>(v26, 0) = (float)((float)(g4_m128_lane<float>(v26, 0) + *(float *)&v89) - v20) * v23;
            if (g4_m128_lane<float>(v25, 0) >g4_m128_lane<float>(v26, 0) )
            {
              LODWORD(v72) =g4_m128_lane<uint32_t>(_mm_andnot_ps(_mm_cmplt_ss(v26, v22), v26), 0);
              v28 = fminf(v24,g4_m128_lane<float>(v25, 0));
            }
            else
            {
              v27 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v25, v22), v25), 0);
              v28 = fminf(v24,g4_m128_lane<float>(v26, 0));
              v72 = v27;
            }
            v29 = a3[5];
            v63 = v29;
            v64 = a3[13];
            v30 = (float)(v13 - v29) * v64;
            v31 = (float)(v68 - v29) * v64;
            if ( v30 > v31 )
            {
              v32 = fmaxf(v72, v31);
              v33 = fminf(v28, v30);
            }
            else
            {
              v32 = fmaxf(v72, v30);
              v33 = fminf(v28, v31);
            }
            v34 = a3[6];
            v35 = a3[14];
            v36 = (float)(v69 - v34) * v35;
            v70 = (float)(v15 - v34) * v35;
            if ( v36 > v70 )
            {
              v37 = fmaxf(v32, v70);
              v38 = fminf(v33, v36);
            }
            else
            {
              v37 = fmaxf(v32, v36);
              v38 = fminf(v33, v70);
            }
            v39 = v38 >= v37;
            v40 = v18 - v20;
            v41 = (float)(v66 - v20) * v23;
            v42 = v40 * v23;
            if ( v42 > v41 )
            {
              v43 = fmaxf(0.0, v41);
              v44 = fminf(v24, v42);
            }
            else
            {
              v43 = fmaxf(0.0, v42);
              v44 = fminf(v24, v41);
            }
            v45 = (float)(v19 - v63) * v64;
            v46 = (float)(v65 - v63) * v64;
            if ( v45 > v46 )
            {
              v47 = fmaxf(v43, v46);
              v48 = fminf(v44, v45);
            }
            else
            {
              v47 = fmaxf(v43, v45);
              v48 = fminf(v44, v46);
            }
            v49 = (float)(v67 - v34) * v35;
            v50 = (float)(v21 - v34) * v35;
            if ( v49 > v50 )
            {
              v51 = fmaxf(v47, v50);
              v52 = fminf(v48, v49);
            }
            else
            {
              v51 = fmaxf(v47, v49);
              v52 = fminf(v48, v50);
            }
            v53 = v39 | (v52 >= v51 ? 2 : 0);
            switch ( v53 )
            {
              case 1:
                i = v93;
                v75 = *(float *)&v85;
                v76 = v86;
                v77 = v87;
                v78 = v88;
                v79 = v89;
                v80 = v90;
                v81 = v91;
                v82 = v92;
                v83 = v93;
                v84 = v94[0];
                goto LABEL_4;
              case 2:
                i = v95[8];
                v75 = *(float *)v95;
                v76 = v95[1];
                v77 = v95[2];
                v78 = v95[3];
                v79 = v95[4];
                v80 = v95[5];
                v81 = v95[6];
                v82 = v95[7];
                v83 = v95[8];
                v84 = v95[9];
                v9 = *(uint16_t *)(v95[8] + 28);
                if ( v9 == 0 )
                  goto LABEL_21;
                break;
              case 3:
                goto LABEL_31;
              default:
                goto LABEL_22;
            }
          }
LABEL_31:
          v57 = v37 > v51;
          *((uint32_t *)a3 + 20) = v57;
          v58 = *((uint32_t *)a2 + 1);
          if ( v58 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 2, (int)(uintptr_t)(v61));
            v58 = *((uint32_t *)a2 + 1);
            v57 = v37 > v51;
          }
          v71 = *(uint32_t *)a2;
          *((uint32_t *)a2 + 1) = v58 + 1;
          *(uint16_t *)(v71 + 2 * v58) = v94[24 * (1 - v57)];
          v59 = (float *)(&v85 + 12 * v57);
          i = *((uint32_t *)v59 + 8);
          v75 = *v59;
          v76 = *((unsigned int *)v59 + 1);
          v77 = *((unsigned int *)v59 + 2);
          v78 = *((unsigned int *)v59 + 3);
          v79 = *((unsigned int *)v59 + 4);
          v80 = *((unsigned int *)v59 + 5);
          v81 = *((unsigned int *)v59 + 6);
          v60 = v59[7];
          LOWORD(v59) = *((uint16_t *)v59 + 18);
          *(float *)&v82 = v60;
          v83 = i;
          v84 = (int16_t)(uintptr_t)v59;
        }
LABEL_21:
        v54 = *(uint32_t *)a3;
        v73 = ((long double (*)(uint32_t, uint32_t, uint32_t))*(uint32_t *)(**(uint32_t **)(*(uint32_t *)a3 + 8) + 8))(
                *(uint32_t *)(*(uint32_t *)a3 + 8),
                *(uint32_t *)(**(uint32_t **)a3 + 8 * *(uint16_t *)(i + 30)),
                *(uint32_t *)(*(uint32_t *)a3 + 12));
        *(float *)(v54 + 4) = v73;
        a3[11] = v73;
LABEL_22:
        result = *((uint32_t *)a2 + 1);
        if ( v62 >= result )
          break;
        v55 = result - 1;
        v56 = *(uint32_t *)a2;
        *((uint32_t *)a2 + 1) = v55;
        sub_17CEDE0((uint32_t *)a1, (uint16_t *)(v55 + v55 + v56), (int)(uintptr_t)(&v75));
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_1ac094  (binary VA: 0x17d5990)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpTreeBroadPhaseSpatialTree16,hkcdTreeQueriesStacks::Dynamic<64,unsigned short>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AabbOverlapsNoEarlyExitWrapper<hkpTreeBroadPhaseInternals::AabbQuery>>
// ----------------------------------------------------------------------------
int * hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_1ac094(int *a1, hkMemoryAllocator::Self *a2, int a3)
{
  int *result;
  int v4;
  uint16_t v5;
  uint16_t v6; // di
  int v7;
  uint32_t *v8;
  int v9;
  int v10;
  int v11; // xmm0_4
  int v12;
  int v13;
  uint16_t v14;
  int v15;
  int v16;
  uint16_t *v17;
  int v18; // xmm0_4
  uint32_t *v19;
  uint32_t *v20;
  hkMemoryAllocator::Self *v21;
  int v22;
  uint32_t *v23;
  int v24;
  int v25;
  typedef int _g4_t_v26;
  typedef hkAabb::Self *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint16_t _g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef bool _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef uint32_t _g4_t_v43[8];
  typedef uint32_t *_g4_t_v44;
  typedef uint16_t _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef uint16_t _g4_t_v55;
  typedef uint32_t _g4_t_v56[4];
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef uint16_t _g4_t_v62;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v26)) > _g4_s0 ? (12u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v27)) > _g4_s1 ? (24u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v28)) > _g4_s2 ? (28u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v29)) > _g4_s3 ? (32u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v30)) > _g4_s4 ? (36u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v31)) > _g4_s5 ? (40u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v32)) > _g4_s6 ? (44u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v33)) > _g4_s7 ? (48u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v34)) > _g4_s8 ? (52u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v35)) > _g4_s9 ? (56u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v36)) > _g4_s10 ? (60u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v37)) > _g4_s11 ? (68u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v38)) > _g4_s12 ? (72u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v39)) > _g4_s13 ? (76u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v40)) > _g4_s14 ? (76u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v41)) > _g4_s15 ? (76u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v42)) > _g4_s16 ? (76u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v43)) > _g4_s17 ? (80u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v44)) > _g4_s18 ? (112u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v45)) > _g4_s19 ? (116u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v46)) > _g4_s20 ? (128u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (132u + sizeof(_g4_t_v47)) > _g4_s21 ? (132u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v48)) > _g4_s22 ? (136u + sizeof(_g4_t_v48)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v49)) > _g4_s23 ? (140u + sizeof(_g4_t_v49)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v50)) > _g4_s24 ? (144u + sizeof(_g4_t_v50)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v51)) > _g4_s25 ? (148u + sizeof(_g4_t_v51)) : _g4_s25,
    _g4_s27 = (152u + sizeof(_g4_t_v52)) > _g4_s26 ? (152u + sizeof(_g4_t_v52)) : _g4_s26,
    _g4_s28 = (156u + sizeof(_g4_t_v53)) > _g4_s27 ? (156u + sizeof(_g4_t_v53)) : _g4_s27,
    _g4_s29 = (160u + sizeof(_g4_t_v54)) > _g4_s28 ? (160u + sizeof(_g4_t_v54)) : _g4_s28,
    _g4_s30 = (164u + sizeof(_g4_t_v55)) > _g4_s29 ? (164u + sizeof(_g4_t_v55)) : _g4_s29,
    _g4_s31 = (176u + sizeof(_g4_t_v56)) > _g4_s30 ? (176u + sizeof(_g4_t_v56)) : _g4_s30,
    _g4_s32 = (192u + sizeof(_g4_t_v57)) > _g4_s31 ? (192u + sizeof(_g4_t_v57)) : _g4_s31,
    _g4_s33 = (196u + sizeof(_g4_t_v58)) > _g4_s32 ? (196u + sizeof(_g4_t_v58)) : _g4_s32,
    _g4_s34 = (200u + sizeof(_g4_t_v59)) > _g4_s33 ? (200u + sizeof(_g4_t_v59)) : _g4_s33,
    _g4_s35 = (204u + sizeof(_g4_t_v60)) > _g4_s34 ? (204u + sizeof(_g4_t_v60)) : _g4_s34,
    _g4_s36 = (208u + sizeof(_g4_t_v61)) > _g4_s35 ? (208u + sizeof(_g4_t_v61)) : _g4_s35,
    _g4_s37 = (212u + sizeof(_g4_t_v62)) > _g4_s36 ? (212u + sizeof(_g4_t_v62)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 72u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 76u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 76u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 76u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 76u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 80u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 112u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 116u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 128u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 132u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 136u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 140u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 144u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 148u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 152u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 156u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 160u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 164u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 176u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 192u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 196u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 200u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 204u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 208u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 212u);

  result = a1;
  if ( *((uint16_t *)a1 + 12) != 0 )
  {
    v36 = *((uint32_t *)a2 + 1);
    sub_17CEDE0(a1, (uint16_t *)a1 + 12, (int)(uintptr_t)(v43));
    v27 = (hkAabb::Self *)(a3 + 16);
    result = (int *)hkAabb::overlaps((hkAabb::Self *)(a3 + 16), (const hkAabb::Self *)v43);
    if ( result != nullptr )
    {
      v4 = (int)(uintptr_t)(v44);
      while ( 1 )
      {
        v5 = *(uint16_t *)(v4 + 28);
        if ( v5 == 0 )
          break;
LABEL_5:
        v6 = *(uint16_t *)(v4 + 30);
        v55 = v5;
        v37 = v5;
        v62 = v6;
        v7 = *a1;
        v53 = 0;
        v8 = (uint32_t *)(32 * v5 + v7);
        v54 = v8;
        v9 = *v8;
        v32 = v8[3];
        v49 = v32;
        v35 = v9;
        v46 = v9;
        v10 = v8[1];
        v50 = v8[4];
        v34 = v10;
        v11 = v8[5];
        v47 = v10;
        v12 = v8[2];
        v51 = v11;
        v61 = (uint32_t *)(32 * v6 + v7);
        v33 = v12;
        v52 = v8[6];
        v48 = v12;
        v57 = v61[4];
        v58 = v61[5];
        v59 = v61[6];
        v31 = *v61;
        v56[0] = *v61;
        v30 = v61[1];
        v56[1] = v30;
        v38 = v61;
        v29 = v61[2];
        v56[2] = v29;
        v28 = v61[3];
        v56[3] = v28;
        v60 = 0;
        v39 = hkAabb::overlaps(v27, (const hkAabb::Self *)&v46);
        v13 = v39 | (hkAabb::overlaps(v27, (const hkAabb::Self *)v56) ? 2 : 0);
        if ( v13 == 2 )
        {
          v44 = v38;
          v43[0] = v31;
          v43[1] = v30;
          v43[2] = v29;
          v43[3] = v28;
          v43[4] = v57;
          v43[5] = v58;
          v43[6] = v59;
          v43[7] = v60;
          v45 = v6;
          v4 = (int)(uintptr_t)(v38);
        }
        else
        {
          v14 = v37;
          if ( v13 == 3 )
          {
            v25 = *((uint32_t *)a2 + 1);
            if ( v25 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
            {
              hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 2, v26);
              v14 = v37;
              v25 = *((uint32_t *)a2 + 1);
            }
            v41 = *(uint32_t *)a2;
            *((uint32_t *)a2 + 1) = v25 + 1;
            *(uint16_t *)(v41 + 2 * v25) = v6;
            v43[0] = v46;
            v43[1] = v47;
            v43[2] = v48;
            v24 = v49;
          }
          else
          {
            if ( v13 != 1 )
              goto LABEL_8;
            v43[0] = v35;
            v43[1] = v34;
            v43[2] = v33;
            v24 = v32;
          }
          v43[3] = v24;
          v43[4] = v50;
          v43[5] = v51;
          v43[6] = v52;
          v43[7] = v53;
          v44 = v8;
          v45 = v14;
          v4 = (int)(uintptr_t)(v8);
        }
      }
      while ( 1 )
      {
        v19 = *(uint32_t **)a3;
        v20 = (uint32_t *)(**(uint32_t **)a3 + 8 * *(uint16_t *)(v4 + 30));
        if ( *(uint32_t *)(*(uint32_t *)a3 + 8) == *v20 )
          break;
        v21 = (hkMemoryAllocator::Self *)v19[1];
        v22 = *((uint32_t *)v21 + 1);
        if ( v22 == (*((uint32_t *)v21 + 2) & 0x3FFFFFFF) )
        {
          v42 = v20;
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v21, 8, v26);
          v22 = *((uint32_t *)v21 + 1);
          v20 = v42;
        }
        v40 = *(uint32_t *)v21;
        *((uint32_t *)v21 + 1) = v22 + 1;
        v23 = (uint32_t *)(v40 + 8 * v22);
        *v23 = v19[2];
        v23[1] = *v20;
        result = *((int **)a2 + 1);
        if ( v36 >= (int)(uintptr_t)(result) )
          return result;
LABEL_9:
        v15 = (int)(uintptr_t)(result) - 1;
        v16 = *(uint32_t *)a2;
        *((uint32_t *)a2 + 1) = v15;
        v17 = (uint16_t *)(v16 + 2 * v15);
        v45 = *v17;
        v4 = *a1 + 32 * *v17;
        v44 = (uint32_t *)v4;
        v43[4] = *(uint32_t *)(v4 + 16);
        v43[5] = *(uint32_t *)(v4 + 20);
        v18 = *(uint32_t *)(v4 + 24);
        v43[7] = 0;
        v43[6] = v18;
        v43[0] = *(uint32_t *)v4;
        v43[1] = *(uint32_t *)(v4 + 4);
        v5 = *(uint16_t *)(v4 + 28);
        v43[2] = *(uint32_t *)(v4 + 8);
        v43[3] = *(uint32_t *)(v4 + 12);
        if ( v5 != 0 )
          goto LABEL_5;
      }
LABEL_8:
      result = *((int **)a2 + 1);
      if ( v36 < (int)(uintptr_t)(result) )
        goto LABEL_9;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_17D6280  (binary VA: 0x17d6280)
// Original: sub_17D6280
// ----------------------------------------------------------------------------
int sub_17D6280(int a1, int a2)
{
  unsigned int v3;
  int v4;
  int result;
  uint16_t v6; // si
  int v7;
  int v8;
  uint16_t v9;
  int v10;
  int v11; // xmm2_4
  int v12; // xmm1_4
  int v13; // xmm0_4
  int v14; // xmm5_4
  int v15; // xmm4_4
  int v16; // xmm3_4
  int v17;
  uint16_t v18; // si
  int v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v23;
  typedef uint16_t _g4_t_v24;
  typedef uint8_t _g4_t_v25[4];
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef uint16_t _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint16_t _g4_t_v35;
  typedef uint16_t *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint32_t _g4_t_v39[38];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (4u + sizeof(_g4_t_v20)) > _g4_s0 ? (4u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (56u + sizeof(_g4_t_v21)) > _g4_s1 ? (56u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v23)) > _g4_s2 ? (64u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v24)) > _g4_s3 ? (64u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v25)) > _g4_s4 ? (68u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v26)) > _g4_s5 ? (72u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v27)) > _g4_s6 ? (76u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v28)) > _g4_s7 ? (80u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v29)) > _g4_s8 ? (88u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v30)) > _g4_s9 ? (92u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v31)) > _g4_s10 ? (96u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v32)) > _g4_s11 ? (100u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (104u + sizeof(_g4_t_v33)) > _g4_s12 ? (104u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (108u + sizeof(_g4_t_v34)) > _g4_s13 ? (108u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v35)) > _g4_s14 ? (112u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (124u + sizeof(_g4_t_v36)) > _g4_s15 ? (124u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (128u + sizeof(_g4_t_v37)) > _g4_s16 ? (128u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (132u + sizeof(_g4_t_v38)) > _g4_s17 ? (132u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (136u + sizeof(_g4_t_v39)) > _g4_s18 ? (136u + sizeof(_g4_t_v39)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 72u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 88u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 100u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 104u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 108u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 112u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 124u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 128u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 132u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 136u);

  v39[34] = (uint32_t)(uintptr_t)(&a2);
  v23 = *(uint32_t *)(a1 + 16);
  v30 = 0;
  v29 = 0;
  v31 = 0x80000000;
  v32 = 0;
  v35 = 0;
  v33 = 0;
  v34 = 0;
  hkcdDynamicTree::DynamicStorage_0_hkcdDynamicTree_Aniso_52f605::reserveNodes(
    (hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::Codec32::Self> *)v25,
    (int)(uintptr_t)(&v29),
    2 * v23);
  if ( *(uint16_t *)(a1 + 24) == 0 )
    goto LABEL_2;
  v26 = 0;
  v27 = 0;
  v28 = 0x80000000;
  v7 = *(uint32_t *)(a1 + 4);
  if ( v7 > 0 )
  {
    hkArrayUtil::reserve((hkArrayUtil::Self *)v25, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v26, v7, 2);
    if ( v7 - v27 > 0 )
      memset((void *)(v27 + v27 + v26), 0, 2 * (v7 - v27));
  }
  v36 = (uint16_t *)(v39);
  v27 = v7;
  v38 = -2147483584;
  LOWORD(v39[0]) = 0;
  v37 = 1;
  v21 = 0;
  v8 = *(uint16_t *)(a1 + 24);
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = v32;
      v10 = *(uint32_t *)a1 + 32 * v8;
      v11 = *(uint32_t *)(v10 + 16);
      v12 = *(uint32_t *)(v10 + 20);
      v13 = *(uint32_t *)(v10 + 24);
      v14 = *(uint32_t *)v10;
      v15 = *(uint32_t *)(v10 + 4);
      v24 = *(uint16_t *)(v26 + 2 * v8);
      v16 = *(uint32_t *)(v10 + 8);
      if ( v32 == 0 )
      {
        hkcdDynamicTree::DynamicStorage_0_hkcdDynamicTree_Aniso_52f605::reserveNodes(
          (hkcdDynamicTree::DynamicStorage<0, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::Codec32::Self> *)v25,
          (int)(uintptr_t)(&v29),
          1);
        v9 = v32;
      }
      v17 = v29 + 32 * v9;
      *(uint32_t *)(v17 + 16) = v11;
      *(uint32_t *)(v17 + 20) = v12;
      *(uint32_t *)(v17 + 24) = v13;
      v32 = *(uint16_t *)v17;
      *(uint32_t *)v17 = v14;
      *(uint32_t *)(v17 + 4) = v15;
      *(uint32_t *)(v17 + 12) = v24 | 0x3F000000;
      *(uint32_t *)(v17 + 8) = v16;
      if ( v24 == 0 )
        break;
      *(uint16_t *)(v29 + v21 + v21 + 32 * v24 + 28) = v9;
      v8 = *(uint16_t *)(v10 + 28);
      v18 = *(uint16_t *)(v10 + 30);
      if ( (uint16_t)v8 == 0 )
        goto LABEL_11;
LABEL_14:
      *(uint16_t *)(v26 + 2 * v8) = v9;
      *(uint16_t *)(v26 + 2 * v18) = v9;
      v19 = v37;
      if ( v37 == (v38 & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v36, 2, v20);
        v19 = v37;
      }
      v21 = 0;
      v36[v19] = v18;
      ++v37;
    }
    v8 = *(uint16_t *)(v10 + 28);
    v35 = v9;
    v18 = *(uint16_t *)(v10 + 30);
    if ( (uint16_t)v8 != 0 )
      goto LABEL_14;
LABEL_11:
    *(uint16_t *)(v17 + 28) = 0;
    *(uint16_t *)(v17 + 30) = v18;
    v8 = (uint16_t)v36[--v37];
    if ( (uint16_t)v8 == 0 )
      break;
    v21 = 1;
  }
  hkArray_unsigned_short_hkContain_7d639f::clearAndDeallocate((hkArray<unsigned short, hkContainerHeapAllocator::Self> *)&v36);
  hkArray_unsigned_short_hkContain_7d639f::clearAndDeallocate((hkArray<unsigned short, hkContainerHeapAllocator::Self> *)&v26);
LABEL_2:
  v3 = v31;
  v4 = *(uint32_t *)a1;
  v33 = *(uint32_t *)(a1 + 16);
  v34 = *(uint32_t *)(a1 + 20);
  *(uint32_t *)a1 = v29;
  *(uint32_t *)(a1 + 4) = v30;
  result = *(uint32_t *)(a1 + 8);
  v6 = *(uint16_t *)(a1 + 12);
  *(uint32_t *)(a1 + 8) = v3;
  LOWORD(v3) = v32;
  v29 = v4;
  v31 = result;
  v32 = v6;
  *(uint16_t *)(a1 + 12) = v3;
  *(uint16_t *)(a1 + 24) = 1;
  v30 = 0;
  if ( result >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v4,
             32 * result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkAlgorithm::explicitStackQuickSort_unsigned_short_hkcdDynam_6c2159  (binary VA: 0x17d69e0)
// Original: hkAlgorithm::_explicitStackQuickSort<unsigned short,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::SAHBin::Sorter>
// ----------------------------------------------------------------------------
uint16_t * hkAlgorithm::explicitStackQuickSort_unsigned_short_hkcdDynam_6c2159(uint16_t *a1, int a2, int a3, int *a4)
{
  uint16_t *result;
  uint16_t *v5;
  uint16_t *v6;
  int v7;
  float *v8;
  float v9; // xmm6_4
  float v10; // xmm5_4
  float v11; // xmm4_4
  float *v12;
  float v13; // xmm7_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  uint16_t v16;
  float *v17;
  float v18; // xmm2_4
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  int v23;
  int i;
  uint16_t *v25;
  uint16_t *v26;
  int v27;
  uint16_t *v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  uint32_t v42[32];
  uint32_t v43[35];

  result = a1;
  if ( a2 > 1 )
  {
    v42[0] = (uint32_t)(uintptr_t)(a1);
    v43[0] = (uint32_t)(uintptr_t)(&a1[a2 - 1]);
    v25 = (uint16_t *)v43[0];
    v26 = a1;
    for ( i = 0; ; v25 = (uint16_t *)v43[i] )
    {
      do
      {
        while ( 1 )
        {
          v5 = v25;
          v6 = v26;
          v28 = v26;
          v27 = 32 * v26[((char *)v25 - (char *)v26) >> 2];
          v7 = *a4;
          v8 = (float *)(v27 + *a4);
          v9 = *v8 + v8[4];
          v10 = v8[1] + v8[5];
          v11 = v8[2] + v8[6];
          v33 = v8[3];
          while ( 1 )
          {
            while ( 1 )
            {
              v12 = (float *)(32 * *v6 + v7);
              v13 = v12[3] + 0.0;
              v14 = v12[4] + *v12;
              v15 = (float)(v12[1] + v12[5]) * 0.5;
              v36 = (float)(v12[6] + v12[2]) * 0.5;
              v35 = v15;
              v38 = v9 * 0.5;
              v34 = v14 * 0.5;
              v37 = v13 * 0.5;
              v39 = v10 * 0.5;
              v40 = v11 * 0.5;
              v41 = (float)(v33 + 0.0) * 0.5;
              if ( *(&v38 + a3) <= *(&v34 + a3) )
                break;
              v6 = ++v28;
            }
            v32 = (float)(v8[4] + *v8) * 0.5;
            v30 = (float)(v8[2] + v8[6]) * 0.5;
            v31 = (float)(v8[5] + v8[1]) * 0.5;
            v29 = (float)(v8[3] + 0.0) * 0.5;
            while ( 1 )
            {
              v16 = *v5;
              v34 = v32;
              v35 = v31;
              v17 = (float *)(32 * v16 + v7);
              v18 = v17[4];
              v19 = *v17;
              v20 = v17[3];
              v21 = v17[6] + v17[2];
              v22 = (float)(v17[5] + v17[1]) * 0.5;
              v36 = v30;
              v38 = (float)(v18 + v19) * 0.5;
              v39 = v22;
              v40 = v21 * 0.5;
              v41 = (float)(v20 + 0.0) * 0.5;
              v37 = v29;
              if ( *(&v38 + a3) <= *(&v34 + a3) )
                break;
              --v5;
            }
            if ( v28 > v5 )
              break;
            if ( v28 != v5 )
            {
              *v5 = *v28;
              *v28 = v16;
            }
            if ( ++v28 > --v5 )
              break;
            v6 = v28;
            v7 = *a4;
            v8 = (float *)(*a4 + v27);
            v33 = v8[3];
            v9 = *v8 + v8[4];
            v10 = v8[1] + v8[5];
            v11 = v8[2] + v8[6];
          }
          if ( v26 >= v5 )
            break;
          if ( v25 <= v28 )
          {
            v25 = v5;
          }
          else
          {
            if ( v25 - v28 <= v5 - v26 )
            {
              v43[i] = (uint32_t)(uintptr_t)(v5);
              v42[i] = (uint32_t)(uintptr_t)(v26);
              v23 = i + 1;
              v26 = v28;
            }
            else
            {
              v42[i] = (uint32_t)(uintptr_t)(v28);
              v43[i] = (uint32_t)(uintptr_t)(v25);
              v23 = i + 1;
              v25 = v5;
            }
            i = v23;
          }
        }
        v26 = v28;
      }
      while ( v25 > v28 );
      result = (uint16_t *)--i;
      if ( i == -1 )
        break;
      v26 = (uint16_t *)v42[i];
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_6d4fe5  (binary VA: 0x17d7cc0)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpTreeBroadPhaseSpatialTree16,hkcdTreeQueriesStacks::Dynamic<64,unsigned short>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::RayCastWrapper<hkpTreeBroadPhaseInternals::RayCastQuery>>
// ----------------------------------------------------------------------------
int hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_6d4fe5(int a1, int *a2, float *a3)
{
  int result;
  float i;
  int16_t v5;
  float v6; // xmm7_4
  float v7; // xmm6_4
  __m128 v8;
  float v9; // xmm4_4
  __m128 v10;
  __m128 v11;
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm5_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  bool v23;
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  float v27; // xmm4_4
  float v28; // xmm0_4
  float v29; // xmm2_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  float v32; // xmm0_4
  float v33; // xmm2_4
  float v34; // xmm3_4
  float v35; // xmm4_4
  int v36;
  int v37;
  int v38;
  int v39;
  uint16_t *v40;
  float v41; // xmm0_4
  int *v42;
  bool v43;
  int v44;
  float *v45;
  float v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef int _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef uint16_t _g4_t_v54[8];
  typedef float _g4_t_v55[12];
  typedef uint32_t _g4_t_v56[8];
  typedef float _g4_t_v57;
  typedef uint16_t _g4_t_v58[6];
  typedef float _g4_t_v59[15];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (12u + sizeof(_g4_t_v47)) > _g4_s0 ? (12u + sizeof(_g4_t_v47)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v48)) > _g4_s1 ? (28u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v49)) > _g4_s2 ? (36u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v50)) > _g4_s3 ? (40u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v51)) > _g4_s4 ? (40u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v52)) > _g4_s5 ? (44u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v53)) > _g4_s6 ? (44u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v54)) > _g4_s7 ? (48u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v55)) > _g4_s8 ? (64u + sizeof(_g4_t_v55)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v56)) > _g4_s9 ? (112u + sizeof(_g4_t_v56)) : _g4_s9,
    _g4_s11 = (144u + sizeof(_g4_t_v57)) > _g4_s10 ? (144u + sizeof(_g4_t_v57)) : _g4_s10,
    _g4_s12 = (148u + sizeof(_g4_t_v58)) > _g4_s11 ? (148u + sizeof(_g4_t_v58)) : _g4_s11,
    _g4_s13 = (160u + sizeof(_g4_t_v59)) > _g4_s12 ? (160u + sizeof(_g4_t_v59)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 64u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 112u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 144u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 148u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 160u);

  result = a1;
  if ( *(uint16_t *)(a1 + 24) != 0 )
  {
    v48 = a2[1];
    sub_17CEDE0((uint32_t *)a1, (uint16_t *)(a1 + 24), (int)(uintptr_t)(v55));
    *(float *)v56 = a3[11];
    result = hkcdIntersectRayAabb(a3 + 4, v55, (float *)v56);
    if ( result != 0 )
    {
      for ( i = v55[8]; ; v55[3] = *(float *)(LODWORD(i) + 12) )
      {
LABEL_4:
        while ( 1 )
        {
          v5 = *(uint16_t *)(LODWORD(i) + 28);
          if ( v5 == 0 )
            break;
          while ( 1 )
          {
            v54[0] = v5;
            sub_17CEDE0((uint32_t *)a1, v54, (int)(uintptr_t)(v56));
            v54[0] = *(uint16_t *)(LODWORD(v55[8]) + 30);
            sub_17CEDE0((uint32_t *)a1, v54, (int)(uintptr_t)(v59));
            v6 = a3[4];
g4_m128_raw(v10) = v56[0];
g4_m128_raw(v11) = v56[4];
            v7 = a3[12];
g4_m128_lane<int32_t>(v8, 0) = 0;
            v9 = a3[11];
g4_m128_lane<float>(v10, 0) = (float)(*(float *)v56 - v6) * v7;
g4_m128_lane<float>(v11, 0) = (float)(*(float *)&v56[4] - v6) * v7;
            if (g4_m128_lane<float>(v10, 0) >g4_m128_lane<float>(v11, 0) )
            {
              v12 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v11, v8), v11), 0);
              v13 = fminf(v9,g4_m128_lane<float>(v10, 0));
            }
            else
            {
              v12 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmplt_ss(v10, v8), v10), 0);
              v13 = fminf(v9,g4_m128_lane<float>(v11, 0));
            }
            v52 = a3[5];
            v49 = a3[13];
            v14 = (float)(*(float *)&v56[1] - v52) * v49;
            v15 = (float)(*(float *)&v56[5] - v52) * v49;
            if ( v14 > v15 )
            {
              v16 = fmaxf(v12, v15);
              v17 = fminf(v13, v14);
            }
            else
            {
              v16 = fmaxf(v12, v14);
              v17 = fminf(v13, v15);
            }
            v18 = a3[6];
            v50 = a3[14];
            v19 = (float)(*(float *)&v56[2] - v18) * v50;
            v20 = (float)(*(float *)&v56[6] - v18) * v50;
            if ( v19 > v20 )
            {
              v21 = fmaxf(v16, v20);
              v22 = fminf(v17, v19);
            }
            else
            {
              v21 = fmaxf(v16, v19);
              v22 = fminf(v17, v20);
            }
            v23 = v22 >= v21;
            v24 = (float)(v59[4] - v6) * v7;
            v25 = (float)(v59[0] - v6) * v7;
            if ( v25 > v24 )
            {
              v26 = fmaxf(0.0, v24);
              v27 = fminf(v9, v25);
            }
            else
            {
              v26 = fmaxf(0.0, v25);
              v27 = fminf(v9, v24);
            }
            v28 = (float)(v59[1] - v52) * v49;
            v29 = (float)(v59[5] - v52) * v49;
            if ( v28 > v29 )
            {
              v30 = fmaxf(v26, v29);
              v31 = fminf(v27, v28);
            }
            else
            {
              v30 = fmaxf(v26, v28);
              v31 = fminf(v27, v29);
            }
            v32 = (float)(v59[2] - v18) * v50;
            v33 = (float)(v59[6] - v18) * v50;
            if ( v32 > v33 )
            {
              v34 = fmaxf(v30, v33);
              v35 = fminf(v31, v32);
            }
            else
            {
              v34 = fmaxf(v30, v32);
              v35 = fminf(v31, v33);
            }
            v36 = v23 | (v35 >= v34 ? 2 : 0);
            switch ( v36 )
            {
              case 1:
                i = v57;
                std::memcpy(v55, v56, 32);
                v55[8] = v57;
                LOWORD(v55[9]) = v58[0];
                goto LABEL_4;
              case 2:
                i = v59[8];
                std::memcpy(v55, v59, 38);
                v5 = *(uint16_t *)(LODWORD(v59[8]) + 28);
                if ( v5 == 0 )
                  goto LABEL_21;
                break;
              case 3:
                goto LABEL_31;
              default:
                goto LABEL_22;
            }
          }
LABEL_31:
          v42 = a2;
          v43 = v21 > v34;
          *((uint32_t *)a3 + 16) = v43;
          v44 = a2[1];
          if ( v44 == (a2[2] & 0x3FFFFFFF) )
          {
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)a2,
              2,
              v47);
            v42 = a2;
            v44 = a2[1];
            v43 = v21 > v34;
          }
          v51 = *v42;
          a2[1] = v44 + 1;
          *(uint16_t *)(v51 + 2 * v44) = v58[24 * (1 - v43)];
          v45 = (float *)&v56[12 * v43];
          i = v45[8];
          std::memcpy(v55, v45, 28);
          v46 = v45[7];
          LOWORD(v45) = *((uint16_t *)v45 + 18);
          v55[7] = v46;
          v55[8] = i;
          LOWORD(v55[9]) = (uint16_t)(uintptr_t)(v45);
        }
LABEL_21:
        v37 = *(uint32_t *)a3;
        v53 = ((long double (*)(uint32_t, uint32_t, uint32_t))*(uint32_t *)(**(uint32_t **)(*(uint32_t *)a3 + 8) + 8))(
                *(uint32_t *)(*(uint32_t *)a3 + 8),
                *(uint32_t *)(**(uint32_t **)a3 + 8 * *(uint16_t *)(LODWORD(i) + 30)),
                *(uint32_t *)(*(uint32_t *)a3 + 12));
        *(float *)(v37 + 4) = v53;
        a3[11] = v53;
LABEL_22:
        result = a2[1];
        if ( v48 >= result )
          break;
        v38 = result - 1;
        v39 = *a2;
        a2[1] = v38;
        v40 = (uint16_t *)(v39 + 2 * v38);
        LOWORD(v55[9]) = *v40;
        LODWORD(i) = *(uint32_t *)a1 + 32 * (uint16_t)*v40;
        v55[8] = i;
        v55[4] = *(float *)(LODWORD(i) + 16);
        v55[5] = *(float *)(LODWORD(i) + 20);
        v41 = *(float *)(LODWORD(i) + 24);
        v55[7] = 0.0;
        v55[6] = v41;
        v55[0] = *(float *)LODWORD(i);
        v55[1] = *(float *)(LODWORD(i) + 4);
        v55[2] = *(float *)(LODWORD(i) + 8);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::ConvexOverlapsWrapper_hkpTreeBroadPhaseInterna_17e1ff::processNode_hkpTreeBroadPhaseSpatial_ea5661  (binary VA: 0x17d8260)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ConvexOverlapsWrapper<hkpTreeBroadPhaseInternals::ConvexQuery>::processNode<hkpTreeBroadPhaseSpatialTree16,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::NodeContext>
// ----------------------------------------------------------------------------
int hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::ConvexOverlapsWrapper_hkpTreeBroadPhaseInterna_17e1ff::processNode_hkpTreeBroadPhaseSpatial_ea5661(uint32_t *a1, float *a2)
{
  float *v2;
  float *v3;
  int v4;
  char v5; // di
  float v6; // xmm4_4
  __m128i v7;
  float v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm6_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  __m128i v15;
  float v16; // xmm0_4
  int result;
  char v18;
  uint16_t v19;
  int *v20;
  int16_t v21; // bp
  int v22;
  int v23;
  uint16_t v24;
  unsigned int v25;
  int v26;
  int v27;
  hkMemoryAllocator::Self *v28;
  int v29;
  hkMemoryAllocator::Self *v30;
  int v31;
  int v32;
  int v33;
  int16_t v34;
  unsigned int v35;
  float v36;
  float v37;
  float v38;

  v2 = a2;
  if ( (int)a1[3] <= 0 )
    goto LABEL_10;
  v37 = *a2;
  v3 = (float *)a1[2];
  v4 = 0;
  v38 = a2[1];
  v5 = 0;
  v36 = a2[5];
  do
  {
    v6 = v3[1];
g4_m128_raw(v7) = LODWORD(v37);
    v8 = *v3 * a2[4];
    v9 = v3[2];
    v10 = a2[2] * v9;
    v11 = a2[6] * v9;
    v12 = v37 * *v3;
    *(float *)g4_m128_ptr<int32_t>(v7) = fmaxf(v12, v8);
    v13 = v3[3];
    v14 = fminf(v12, v8);
    v15 = v7;
    v16 = (float)((float)(v14 + fminf(v38 * v6, v6 * v36)) + fminf(v10, v11)) + v13;
    *(float *)g4_m128_ptr<int32_t>(v15) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v7) + fmaxf(v38 * v6, v6 * v36))
                                            + fmaxf(v10, v11))
                                    + v13)
                            * v16;
    if ( _mm_cvtsi128_si32(v15) < 0 )
    {
      v18 = 2;
    }
    else
    {
      if ( v16 > 0.0 )
        return 0;
      v18 = 1;
    }
    ++v4;
    v5 |= v18;
    v3 += 4;
  }
  while ( v4 != a1[3] );
  v2 = a2;
  result = 1;
  if ( (v5 & 2) == 0 )
  {
LABEL_10:
    v19 = *((uint16_t *)v2 + 18);
    v20 = (int *)a1[1];
    if ( v19 != 0 )
    {
      v21 = *((uint16_t *)v2 + 18);
      v22 = *v20;
      v23 = 32 * v19 + *v20;
      v24 = *(uint16_t *)(v23 + 28);
      if ( v24 != 0 )
      {
        v34 = v21;
        while ( 1 )
        {
          v25 = v24;
          v26 = v22 + 32 * v24;
          if ( *(uint16_t *)(v26 + 28) == 0 )
          {
            v27 = *(uint32_t *)(*(uint32_t *)*a1 + 8 * *(uint16_t *)(v26 + 30));
            v28 = *(hkMemoryAllocator::Self **)(*a1 + 4);
            v29 = *((uint32_t *)v28 + 1);
            if ( v29 == (*((uint32_t *)v28 + 2) & 0x3FFFFFFF) )
            {
              v35 = v24;
              hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v28, 4, v33);
              v29 = *((uint32_t *)v28 + 1);
              v25 = v35;
            }
            *(uint32_t *)(*(uint32_t *)v28 + 4 * v29) = v27;
            ++*((uint32_t *)v28 + 1);
          }
          v24 = sub_17CF2B0(v20, v25, v34);
          if ( v24 == 0 )
            break;
          v22 = *v20;
        }
      }
      else
      {
        v30 = *(hkMemoryAllocator::Self **)(*a1 + 4);
        v31 = *(uint32_t *)(*(uint32_t *)*a1 + 8 * *(uint16_t *)(v23 + 30));
        v32 = *((uint32_t *)v30 + 1);
        if ( v32 == (*((uint32_t *)v30 + 2) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v30, 4, v33);
          v32 = *((uint32_t *)v30 + 1);
        }
        *(uint32_t *)(*(uint32_t *)v30 + 4 * v32) = v31;
        ++*((uint32_t *)v30 + 1);
      }
    }
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_9206dc  (binary VA: 0x17d84c0)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpTreeBroadPhaseSpatialTree16,hkcdTreeQueriesStacks::Dynamic<64,unsigned short>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ConvexOverlapsWrapper<hkpTreeBroadPhaseInternals::ConvexQuery>>
// ----------------------------------------------------------------------------
int hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_9206dc(int a1, hkMemoryAllocator::Self *a2, uint32_t *a3)
{
  int result;
  float v4;
  int v5;
  int v6;
  float v7; // xmm0_4
  float v8; // xmm0_4
  bool v9;
  int v10;
  int v11;
  int v12;
  uint16_t *v13;
  float v14; // xmm0_4
  hkMemoryAllocator::Self *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef float _g4_t_v23[12];
  typedef float _g4_t_v24[12];
  typedef float _g4_t_v25[15];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v21)) > _g4_s1 ? (24u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v22)) > _g4_s2 ? (28u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v23)) > _g4_s3 ? (32u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (80u + sizeof(_g4_t_v24)) > _g4_s4 ? (80u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (128u + sizeof(_g4_t_v25)) > _g4_s5 ? (128u + sizeof(_g4_t_v25)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 128u);

  result = a1;
  if ( *(uint16_t *)(a1 + 24) != 0 )
  {
    v22 = *((uint32_t *)a2 + 1);
    sub_17CEDE0((uint32_t *)a1, (uint16_t *)(a1 + 24), (int)(uintptr_t)(v23));
    result = hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::ConvexOverlapsWrapper_hkpTreeBroadPhaseInterna_17e1ff::processNode_hkpTreeBroadPhaseSpatial_ea5661(
               a3,
               v23);
    if ( result != 0 )
    {
      v4 = v23[8];
      while ( 1 )
      {
        v5 = *(uint16_t *)(LODWORD(v4) + 28);
        if ( (uint16_t)v5 == 0 )
          break;
LABEL_5:
        LOWORD(v24[9]) = v5;
        v6 = *(uint32_t *)a1;
        LODWORD(v24[8]) = 32 * v5 + *(uint32_t *)a1;
        v24[4] = *(float *)(LODWORD(v24[8]) + 16);
        v24[5] = *(float *)(LODWORD(v24[8]) + 20);
        v7 = *(float *)(LODWORD(v24[8]) + 24);
        v24[7] = 0.0;
        v24[6] = v7;
        v24[0] = *(float *)LODWORD(v24[8]);
        v24[1] = *(float *)(LODWORD(v24[8]) + 4);
        v24[2] = *(float *)(LODWORD(v24[8]) + 8);
        v24[3] = *(float *)(LODWORD(v24[8]) + 12);
        LOWORD(v25[9]) = *(uint16_t *)(LODWORD(v4) + 30);
        LODWORD(v25[8]) = v6 + 32 * LOWORD(v25[9]);
        v25[4] = *(float *)(LODWORD(v25[8]) + 16);
        v25[5] = *(float *)(LODWORD(v25[8]) + 20);
        v8 = *(float *)(LODWORD(v25[8]) + 24);
        v25[7] = 0.0;
        v25[6] = v8;
        v25[0] = *(float *)LODWORD(v25[8]);
        v25[1] = *(float *)(LODWORD(v25[8]) + 4);
        v25[2] = *(float *)(LODWORD(v25[8]) + 8);
        v25[3] = *(float *)(LODWORD(v25[8]) + 12);
        v9 = hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::ConvexOverlapsWrapper_hkpTreeBroadPhaseInterna_17e1ff::processNode_hkpTreeBroadPhaseSpatial_ea5661(
               a3,
               v24) != 0;
        v10 = v9
            | (hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::ConvexOverlapsWrapper_hkpTreeBroadPhaseInterna_17e1ff::processNode_hkpTreeBroadPhaseSpatial_ea5661(
                 a3,
                 v25) != 0
             ? 2
             : 0);
        if ( v10 == 2 )
        {
          v4 = v25[8];
          std::memcpy(v23, v25, 38);
        }
        else
        {
          if ( v10 == 3 )
          {
            v18 = *((uint32_t *)a2 + 1);
            if ( v18 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
            {
              hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 2, v20);
              v18 = *((uint32_t *)a2 + 1);
            }
            v19 = *(uint32_t *)a2;
            *((uint32_t *)a2 + 1) = v18 + 1;
            *(uint16_t *)(v19 + 2 * v18) = LOWORD(v25[9]);
          }
          else if ( v10 != 1 )
          {
            result = *((uint32_t *)a2 + 1);
            if ( v22 < result )
              goto LABEL_9;
            return result;
          }
          v4 = v24[8];
          std::memcpy(v23, v24, 38);
        }
      }
      while ( 1 )
      {
        v15 = *(hkMemoryAllocator::Self **)(*a3 + 4);
        v16 = *(uint32_t *)(*(uint32_t *)*a3 + 8 * *(uint16_t *)(LODWORD(v4) + 30));
        v17 = *((uint32_t *)v15 + 1);
        if ( v17 == (*((uint32_t *)v15 + 2) & 0x3FFFFFFF) )
        {
          v21 = v16;
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v15, 4, v20);
          v17 = *((uint32_t *)v15 + 1);
          v16 = v21;
        }
        *(uint32_t *)(*(uint32_t *)v15 + 4 * v17) = v16;
        ++*((uint32_t *)v15 + 1);
        result = *((uint32_t *)a2 + 1);
        if ( v22 >= result )
          break;
LABEL_9:
        v11 = result - 1;
        v12 = *(uint32_t *)a2;
        *((uint32_t *)a2 + 1) = v11;
        v13 = (uint16_t *)(v12 + 2 * v11);
        LOWORD(v23[9]) = *v13;
        LODWORD(v4) = *(uint32_t *)a1 + 32 * (uint16_t)*v13;
        v23[8] = v4;
        v23[4] = *(float *)(LODWORD(v4) + 16);
        v23[5] = *(float *)(LODWORD(v4) + 20);
        v14 = *(float *)(LODWORD(v4) + 24);
        v23[7] = 0.0;
        v23[6] = v14;
        v23[0] = *(float *)LODWORD(v4);
        v23[1] = *(float *)(LODWORD(v4) + 4);
        v23[2] = *(float *)(LODWORD(v4) + 8);
        v23[3] = *(float *)(LODWORD(v4) + 12);
        v5 = *(uint16_t *)(LODWORD(v4) + 28);
        if ( (uint16_t)v5 != 0 )
          goto LABEL_5;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::ConvexOverlapsWrapper_hkpTreeBroadPhaseInterna_d5f4b1::processNode_hkpTreeBroadPhaseSpatial_ea5661  (binary VA: 0x17d8a40)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ConvexOverlapsWrapper<hkpTreeBroadPhaseInternals::ConvexQuerySorted>::processNode<hkpTreeBroadPhaseSpatialTree16,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::NodeContext>
// ----------------------------------------------------------------------------
int hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::ConvexOverlapsWrapper_hkpTreeBroadPhaseInterna_d5f4b1::processNode_hkpTreeBroadPhaseSpatial_ea5661(int *a1, int a2)
{
  char v2;
  int v3;
  float *v4;
  float v5; // xmm4_4
  __m128i v6;
  float v7; // xmm3_4
  float v8; // xmm0_4
  float v9; // xmm6_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  __m128i v14;
  float v15; // xmm0_4
  int result;
  char v17;
  int *v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  uint16_t v23;
  int v24; // xmm0_4
  int v25;
  int v26;
  uint16_t v27;
  int v28; // xmm0_4
  int v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef uint16_t _g4_t_v33;
  typedef int *_g4_t_v34;
  typedef uint32_t _g4_t_v35[8];
  typedef uint32_t *_g4_t_v36;
  typedef int16_t _g4_t_v37;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v30)) > _g4_s0 ? (8u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v31)) > _g4_s1 ? (20u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v32)) > _g4_s2 ? (24u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v33)) > _g4_s3 ? (24u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v34)) > _g4_s4 ? (28u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v35)) > _g4_s5 ? (32u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v36)) > _g4_s6 ? (64u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v37)) > _g4_s7 ? (68u + sizeof(_g4_t_v37)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);

  if ( a1[3] <= 0 )
    goto LABEL_10;
  v32 = *(float *)a2;
  v2 = 0;
  v3 = 0;
  v31 = *(float *)(a2 + 4);
  v30 = *(float *)(a2 + 20);
  v4 = (float *)a1[2];
  do
  {
    v5 = v4[1];
g4_m128_raw(v6) = LODWORD(v32);
    v7 = *v4 * *(float *)(a2 + 16);
    v8 = v4[2];
    v9 = *(float *)(a2 + 8) * v8;
    v10 = *(float *)(a2 + 24) * v8;
    v11 = v32 * *v4;
    *(float *)g4_m128_ptr<int32_t>(v6) = fmaxf(v11, v7);
    v12 = v4[3];
    v13 = fminf(v11, v7);
    v14 = v6;
    v15 = (float)((float)(v13 + fminf(v31 * v5, v5 * v30)) + fminf(v9, v10)) + v12;
    *(float *)g4_m128_ptr<int32_t>(v14) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v6) + fmaxf(v31 * v5, v5 * v30))
                                            + fmaxf(v9, v10))
                                    + v12)
                            * v15;
    if ( _mm_cvtsi128_si32(v14) < 0 )
    {
      v17 = 2;
    }
    else
    {
      if ( v15 > 0.0 )
        return 0;
      v17 = 1;
    }
    ++v3;
    v2 |= v17;
    v4 += 4;
  }
  while ( v3 != a1[3] );
  result = 1;
  if ( (v2 & 2) == 0 )
  {
LABEL_10:
    v18 = (int *)a1[1];
    v33 = *(uint16_t *)(a2 + 36);
    v34 = v18;
    if ( v33 != 0 )
    {
      v19 = *v18;
      v20 = 32 * v33;
      LOWORD(v21) = *(uint16_t *)(*v18 + v20 + 28);
      if ( (uint16_t)v21 != 0 )
      {
        while ( 1 )
        {
          v22 = 32 * (uint16_t)v21;
          v23 = *(uint16_t *)(v19 + v22 + 28);
          if ( v23 == 0 )
            goto LABEL_14;
          do
          {
            do
            {
              LOWORD(v21) = v23;
              v22 = 32 * v23;
              v23 = *(uint16_t *)(v19 + v22 + 28);
            }
            while ( v23 != 0 );
LABEL_14:
            v37 = v21;
            v36 = (uint32_t *)(*v34 + v22);
            v35[4] = v36[4];
            v35[5] = v36[5];
            v24 = v36[6];
            v35[7] = 0;
            v35[6] = v24;
            v35[0] = *v36;
            v35[1] = v36[1];
            v35[2] = v36[2];
            v35[3] = v36[3];
            hkpTreeBroadPhaseInternals::ConvexQuerySorted::processLeaf(*a1, (int)(uintptr_t)(v35));
            v19 = *v34;
            v25 = v22 + *v34;
            v23 = *(uint16_t *)(v25 + 28);
          }
          while ( v23 != 0 );
          v26 = *(uint32_t *)(v25 + 12);
          v27 = v26;
          if ( v33 != (uint16_t)v26 )
          {
            if ( *(uint16_t *)(v19 + 32 * (uint16_t)v26 + 30) == (uint16_t)v21 )
            {
              LOWORD(v21) = v26;
              while ( 1 )
              {
                v29 = *(uint32_t *)(v19 + 32 * (uint16_t)v21 + 12);
                v27 = v29;
                if ( v33 == *(uint16_t *)(v19 + 32 * (uint16_t)v21 + 12) )
                  break;
                if ( (uint16_t)v21 != *(uint16_t *)(v19 + 32 * (uint16_t)v29 + 30) )
                  goto LABEL_17;
                v21 = *(uint32_t *)(v19 + 32 * (uint16_t)v21 + 12) & 0xC0FFFFFF;
              }
            }
            else
            {
LABEL_17:
              if ( v27 == 0 )
                goto LABEL_18;
            }
          }
          if ( (uint16_t)v21 == *(uint16_t *)(v19 + 32 * v27 + 30) && v33 == v27 )
            return 0;
          LOWORD(v21) = *(uint16_t *)(v19 + 32 * v27 + 30);
LABEL_18:
          if ( (uint16_t)v21 == 0 )
            return 0;
        }
      }
      v37 = *(uint16_t *)(a2 + 36);
      v36 = (uint32_t *)(*v18 + v20);
      v35[4] = v36[4];
      v35[5] = v36[5];
      v28 = v36[6];
      v35[7] = 0;
      v35[6] = v28;
      v35[0] = *v36;
      v35[1] = v36[1];
      v35[2] = v36[2];
      v35[3] = v36[3];
      hkpTreeBroadPhaseInternals::ConvexQuerySorted::processLeaf(*a1, (int)(uintptr_t)(v35));
    }
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_f6d480  (binary VA: 0x17d8da0)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpTreeBroadPhaseSpatialTree16,hkcdTreeQueriesStacks::Dynamic<64,unsigned short>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::ConvexOverlapsWrapper<hkpTreeBroadPhaseInternals::ConvexQuerySorted>>
// ----------------------------------------------------------------------------
int hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_f6d480(int a1, int *a2, int *a3)
{
  int result;
  int v4;
  int v5;
  int v6;
  float v7; // xmm0_4
  int v8;
  int v9;
  float v10; // xmm0_4
  bool v11;
  int v12;
  int v13;
  int v14;
  uint16_t *v15;
  float v16; // xmm0_4
  uint32_t *v17;
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  hkMemoryAllocator::Self *v22;
  int v23;
  int v24; // xmm3_4
  int v25;
  int v26;
  int v27;
  int *v28;
  int v29;
  int v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef int _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef int _g4_t_v41;
  typedef float *_g4_t_v42;
  typedef int16_t _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef int _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef int _g4_t_v51;
  typedef float *_g4_t_v52;
  typedef int16_t _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef int _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef int _g4_t_v61;
  typedef float *_g4_t_v62;
  typedef int16_t _g4_t_v63;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v31)) > _g4_s0 ? (12u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v32)) > _g4_s1 ? (28u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v33)) > _g4_s2 ? (44u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v34)) > _g4_s3 ? (48u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v35)) > _g4_s4 ? (52u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v36)) > _g4_s5 ? (56u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v37)) > _g4_s6 ? (60u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v38)) > _g4_s7 ? (64u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v39)) > _g4_s8 ? (68u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v40)) > _g4_s9 ? (72u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v41)) > _g4_s10 ? (76u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v42)) > _g4_s11 ? (80u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v43)) > _g4_s12 ? (84u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v44)) > _g4_s13 ? (96u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v45)) > _g4_s14 ? (100u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v46)) > _g4_s15 ? (104u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v47)) > _g4_s16 ? (108u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v48)) > _g4_s17 ? (112u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (116u + sizeof(_g4_t_v49)) > _g4_s18 ? (116u + sizeof(_g4_t_v49)) : _g4_s18,
    _g4_s20 = (120u + sizeof(_g4_t_v50)) > _g4_s19 ? (120u + sizeof(_g4_t_v50)) : _g4_s19,
    _g4_s21 = (124u + sizeof(_g4_t_v51)) > _g4_s20 ? (124u + sizeof(_g4_t_v51)) : _g4_s20,
    _g4_s22 = (128u + sizeof(_g4_t_v52)) > _g4_s21 ? (128u + sizeof(_g4_t_v52)) : _g4_s21,
    _g4_s23 = (132u + sizeof(_g4_t_v53)) > _g4_s22 ? (132u + sizeof(_g4_t_v53)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v54)) > _g4_s23 ? (144u + sizeof(_g4_t_v54)) : _g4_s23,
    _g4_s25 = (148u + sizeof(_g4_t_v55)) > _g4_s24 ? (148u + sizeof(_g4_t_v55)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v56)) > _g4_s25 ? (152u + sizeof(_g4_t_v56)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v57)) > _g4_s26 ? (156u + sizeof(_g4_t_v57)) : _g4_s26,
    _g4_s28 = (160u + sizeof(_g4_t_v58)) > _g4_s27 ? (160u + sizeof(_g4_t_v58)) : _g4_s27,
    _g4_s29 = (164u + sizeof(_g4_t_v59)) > _g4_s28 ? (164u + sizeof(_g4_t_v59)) : _g4_s28,
    _g4_s30 = (168u + sizeof(_g4_t_v60)) > _g4_s29 ? (168u + sizeof(_g4_t_v60)) : _g4_s29,
    _g4_s31 = (172u + sizeof(_g4_t_v61)) > _g4_s30 ? (172u + sizeof(_g4_t_v61)) : _g4_s30,
    _g4_s32 = (176u + sizeof(_g4_t_v62)) > _g4_s31 ? (176u + sizeof(_g4_t_v62)) : _g4_s31,
    _g4_s33 = (180u + sizeof(_g4_t_v63)) > _g4_s32 ? (180u + sizeof(_g4_t_v63)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 68u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 72u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 76u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 84u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 96u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 100u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 104u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 108u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 112u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 116u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 120u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 124u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 128u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 132u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 144u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 148u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 152u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 156u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 160u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 164u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 168u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 172u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 176u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 180u);

  result = a1;
  if ( *(uint16_t *)(a1 + 24) != 0 )
  {
    v33 = a2[1];
    sub_17CEDE0((uint32_t *)a1, (uint16_t *)(a1 + 24), (int)(uintptr_t)(&v34));
    result = hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::ConvexOverlapsWrapper_hkpTreeBroadPhaseInterna_d5f4b1::processNode_hkpTreeBroadPhaseSpatial_ea5661(
               a3,
               (int)(uintptr_t)(&v34));
    if ( result != 0 )
    {
      v4 = (int)(uintptr_t)(v42);
      while ( 1 )
      {
        v5 = *(uint16_t *)(v4 + 28);
        if ( (uint16_t)v5 == 0 )
          break;
LABEL_5:
        v53 = v5;
        v6 = *(uint32_t *)a1;
        v52 = (float *)(32 * v5 + *(uint32_t *)a1);
        v48 = v52[4];
        v49 = v52[5];
        v7 = v52[6];
        v51 = 0;
        v50 = v7;
        v8 = *(uint16_t *)(v4 + 30);
        v44 = *v52;
        v45 = v52[1];
        v46 = v52[2];
        v9 = *((uint32_t *)v52 + 3);
        v63 = v8;
        v47 = v9;
        v62 = (float *)(v6 + 32 * v8);
        v58 = v62[4];
        v59 = v62[5];
        v10 = v62[6];
        v61 = 0;
        v60 = v10;
        v54 = *v62;
        v55 = v62[1];
        v56 = v62[2];
        v57 = *((uint32_t *)v62 + 3);
        v11 = hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::ConvexOverlapsWrapper_hkpTreeBroadPhaseInterna_d5f4b1::processNode_hkpTreeBroadPhaseSpatial_ea5661(
                a3,
                (int)(uintptr_t)(&v44)) != 0;
        v12 = v11
            | (hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::ConvexOverlapsWrapper_hkpTreeBroadPhaseInterna_d5f4b1::processNode_hkpTreeBroadPhaseSpatial_ea5661(
                 a3,
                 (int)(uintptr_t)(&v54)) != 0
             ? 2
             : 0);
        if ( v12 == 2 )
        {
          v34 = v54;
          v35 = v55;
          v36 = v56;
          v37 = v57;
          v38 = v58;
          v39 = v59;
          v40 = v60;
          v41 = v61;
          v4 = (int)(uintptr_t)(v62);
          v42 = v62;
          v43 = v63;
        }
        else
        {
          if ( v12 == 3 )
          {
            v28 = a2;
            v29 = a2[1];
            if ( v29 == (a2[2] & 0x3FFFFFFF) )
            {
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)a2,
                2,
                v31);
              v28 = a2;
              v29 = a2[1];
            }
            v30 = *v28;
            v28[1] = v29 + 1;
            *(uint16_t *)(v30 + 2 * v29) = v63;
          }
          else if ( v12 != 1 )
          {
            result = a2[1];
            if ( v33 < result )
              goto LABEL_9;
            return result;
          }
          v34 = v44;
          v35 = v45;
          v36 = v46;
          v37 = v47;
          v38 = v48;
          v39 = v49;
          v40 = v50;
          v41 = v51;
          v4 = (int)(uintptr_t)(v52);
          v42 = v52;
          v43 = v53;
        }
      }
      while ( 1 )
      {
        v17 = (uint32_t *)*a3;
        v18 = (float)(fminf(v34 * *(float *)(*a3 + 32), *(float *)(*a3 + 32) * v38)
                    + fminf(v35 * *(float *)(*a3 + 36), *(float *)(*a3 + 36) * v39))
            + fminf(v36 * *(float *)(*a3 + 40), *(float *)(*a3 + 40) * v40);
        v19 = 1.0 * v18;
        v20 = 0.0 * v18;
        v21 = v18 * 0.0;
        v22 = *(hkMemoryAllocator::Self **)(*a3 + 4);
        v23 = *((uint32_t *)v22 + 1);
        v24 = v23 | 0x3F000000;
        v25 = *(uint32_t *)(*(uint32_t *)*a3 + 8 * *(uint16_t *)(v4 + 30));
        if ( v23 == (*((uint32_t *)v22 + 2) & 0x3FFFFFFF) )
        {
          v32 = *(uint32_t *)(*(uint32_t *)*a3 + 8 * *(uint16_t *)(v4 + 30));
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v22, 4, v31);
          v23 = *((uint32_t *)v22 + 1);
          v25 = v32;
        }
        *(uint32_t *)(*(uint32_t *)v22 + 4 * v23) = v25;
        ++*((uint32_t *)v22 + 1);
        v26 = v17[3];
        if ( v26 == (v17[4] & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)(v17 + 2),
            16,
            v31);
          v26 = v17[3];
        }
        v27 = v17[2] + 16 * v26;
        *(float *)v27 = v19;
        *(float *)(v27 + 4) = v20;
        *(float *)(v27 + 8) = v21;
        *(uint32_t *)(v27 + 12) = v24;
        ++v17[3];
        result = a2[1];
        if ( v33 >= result )
          break;
LABEL_9:
        v13 = result - 1;
        v14 = *a2;
        a2[1] = v13;
        v15 = (uint16_t *)(v14 + 2 * v13);
        v43 = *v15;
        v4 = *(uint32_t *)a1 + 32 * *v15;
        v42 = (float *)v4;
        v38 = *(float *)(v4 + 16);
        v39 = *(float *)(v4 + 20);
        v16 = *(float *)(v4 + 24);
        v41 = 0;
        v40 = v16;
        v34 = *(float *)v4;
        v35 = *(float *)(v4 + 4);
        v36 = *(float *)(v4 + 8);
        v37 = *(uint32_t *)(v4 + 12);
        v5 = *(uint16_t *)(v4 + 28);
        if ( (uint16_t)v5 != 0 )
          goto LABEL_5;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_17DBE90  (binary VA: 0x17dbe90)
// Original: sub_17DBE90
// ----------------------------------------------------------------------------
int sub_17DBE90(hkpTreeBroadPhase::Self *a1, float a2)
{
  return hkpTreeBroadPhase::update(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::binary_hkcdDynamicTree_Tree_hkc_b8faa5  (binary VA: 0x17dbf20)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::binary<hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::CodecRawUlong>>,hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::CodecRawUlong>>,hkcdTreeQueriesStacks::Dynamic<64,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::CodecRawUlong>>,hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::CodecRawUlong>>>>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AllPairsWrapper<hkpTreeBroadPhaseInternals::InsertionQuery>>
// ----------------------------------------------------------------------------
uint32_t * hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::binary_hkcdDynamicTree_Tree_hkc_b8faa5(char a1, int a2, int a3, hkArrayBase<hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag, 64, 0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUlong::Self>>, hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUlong::Self>>>> *a4, hkMemoryAllocator::Self ***a5, uint32_t *a6, uint32_t *a7)
{
  uint32_t *result;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *i;
  int v13;
  int v14;
  int v15;
  bool v16;
  int v17;
  char *v18;
  int v19;
  int *v20;
  int v21;
  int v22;
  hkMemoryAllocator::Self *v23;
  int v24;
  int v25;
  uint32_t *v26;
  int v27;
  int v28;
  int v29;
  int v30;
  bool v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  bool v35;
  bool v36;
  int v37;
  int v38;
  uint32_t *v39;
  int v40;
  uint32_t *v41;
  bool v42;
  uint32_t *v43;
  uint32_t *v44;
  uint32_t *v45;
  uint32_t *v46;
  uint32_t *v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef bool _g4_t_v53;
  typedef int _g4_t_v54;
  typedef bool _g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef bool _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef uint32_t _g4_t_v62[12];
  typedef uint32_t _g4_t_v63[12];
  typedef uint32_t _g4_t_v64[8];
  typedef uint32_t *_g4_t_v65;
  typedef int _g4_t_v66;
  typedef uint32_t _g4_t_v67[8];
  typedef uint32_t *_g4_t_v68;
  typedef int _g4_t_v69;
  typedef uint32_t _g4_t_v70[12];
  typedef uint32_t _g4_t_v71[8];
  typedef uint32_t *_g4_t_v72;
  typedef int _g4_t_v73;
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (12u + sizeof(_g4_t_v48)) > _g4_s0 ? (12u + sizeof(_g4_t_v48)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v49)) > _g4_s1 ? (20u + sizeof(_g4_t_v49)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v50)) > _g4_s2 ? (24u + sizeof(_g4_t_v50)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v51)) > _g4_s3 ? (28u + sizeof(_g4_t_v51)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v52)) > _g4_s4 ? (28u + sizeof(_g4_t_v52)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v53)) > _g4_s5 ? (28u + sizeof(_g4_t_v53)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v54)) > _g4_s6 ? (28u + sizeof(_g4_t_v54)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v55)) > _g4_s7 ? (32u + sizeof(_g4_t_v55)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v56)) > _g4_s8 ? (36u + sizeof(_g4_t_v56)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v57)) > _g4_s9 ? (44u + sizeof(_g4_t_v57)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v58)) > _g4_s10 ? (44u + sizeof(_g4_t_v58)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v59)) > _g4_s11 ? (44u + sizeof(_g4_t_v59)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v60)) > _g4_s12 ? (44u + sizeof(_g4_t_v60)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v61)) > _g4_s13 ? (44u + sizeof(_g4_t_v61)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v62)) > _g4_s14 ? (48u + sizeof(_g4_t_v62)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v63)) > _g4_s15 ? (96u + sizeof(_g4_t_v63)) : _g4_s15,
    _g4_s17 = (144u + sizeof(_g4_t_v64)) > _g4_s16 ? (144u + sizeof(_g4_t_v64)) : _g4_s16,
    _g4_s18 = (176u + sizeof(_g4_t_v65)) > _g4_s17 ? (176u + sizeof(_g4_t_v65)) : _g4_s17,
    _g4_s19 = (180u + sizeof(_g4_t_v66)) > _g4_s18 ? (180u + sizeof(_g4_t_v66)) : _g4_s18,
    _g4_s20 = (192u + sizeof(_g4_t_v67)) > _g4_s19 ? (192u + sizeof(_g4_t_v67)) : _g4_s19,
    _g4_s21 = (224u + sizeof(_g4_t_v68)) > _g4_s20 ? (224u + sizeof(_g4_t_v68)) : _g4_s20,
    _g4_s22 = (228u + sizeof(_g4_t_v69)) > _g4_s21 ? (228u + sizeof(_g4_t_v69)) : _g4_s21,
    _g4_s23 = (240u + sizeof(_g4_t_v70)) > _g4_s22 ? (240u + sizeof(_g4_t_v70)) : _g4_s22,
    _g4_s24 = (288u + sizeof(_g4_t_v71)) > _g4_s23 ? (288u + sizeof(_g4_t_v71)) : _g4_s23,
    _g4_s25 = (320u + sizeof(_g4_t_v72)) > _g4_s24 ? (320u + sizeof(_g4_t_v72)) : _g4_s24,
    _g4_s26 = (324u + sizeof(_g4_t_v73)) > _g4_s25 ? (324u + sizeof(_g4_t_v73)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 12u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 28u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 32u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 36u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 44u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 44u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 44u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 44u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 48u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 96u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 144u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 176u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 180u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 192u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 224u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 228u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 240u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 288u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 320u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 324u);

  result = a6;
  if ( *(uint32_t *)(a2 + 780) != 0 && *(uint32_t *)(a3 + 780) != 0 )
  {
    v56 = *((uint32_t **)a4 + 1);
    if ( a6 != nullptr )
    {
      v62[0] = *a6;
      v62[1] = a6[1];
      v62[2] = a6[2];
      v62[3] = a6[3];
      v62[4] = a6[4];
      v62[5] = a6[5];
      v62[6] = a6[6];
      v62[7] = a6[7];
      v8 = a6[9];
      v62[8] = a6[8];
      v62[9] = v8;
    }
    else
    {
      sub_17CEE40(a2, (uint32_t *)(a2 + 780), v62);
    }
    if ( a7 != nullptr )
    {
      v63[0] = *a7;
      v63[1] = a7[1];
      v63[2] = a7[2];
      v63[3] = a7[3];
      v63[4] = a7[4];
      v63[5] = a7[5];
      v63[6] = a7[6];
      v63[7] = a7[7];
      v63[8] = a7[8];
      v63[9] = a7[9];
    }
    else
    {
      sub_17CEE40(a3, (uint32_t *)(a3 + 780), v63);
    }
    v9 = v63[9];
    v10 = v62[9];
    if ( a1 != 0
      || (v59 = v62[9],
          result = (uint32_t *)hkAabb::overlaps((hkAabb::Self *)v62, (const hkAabb::Self *)v63),
          v10 = v59,
          result != nullptr) )
    {
      v11 = (uint32_t *)v62[8];
      for ( i = (uint32_t *)v63[8]; ; std::memcpy(v63, i, 32) )
      {
        while ( a1 != 0 && v11 == i )
        {
          if ( v11[9] == 0 )
            goto LABEL_13;
          sub_17CF380(a2, (int)(uintptr_t)(&v62[8]), v70);
          v61 = v70[9];
          v40 = v73;
          v41 = (uint32_t *)hkArrayBase_hkcdTreeQueries_hkcdTree_fb90a5::expandOne(
                            a4,
                            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
          *v41 = v40;
          v41[1] = v40;
          v42 = hkAabb::overlaps((hkAabb::Self *)v70, (const hkAabb::Self *)v71);
          v10 = v61;
          if ( v42 )
          {
            v47 = (uint32_t *)hkArrayBase_hkcdTreeQueries_hkcdTree_fb90a5::expandOne(
                              a4,
                              (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
            v10 = v61;
            v47[1] = v40;
            *v47 = v61;
          }
          std::memcpy(v62, v70, 40);
          std::memcpy(v63, v70, 40);
          i = (uint32_t *)v70[8];
          v11 = (uint32_t *)v70[8];
          v9 = v10;
        }
        v21 = v11[9];
        v58 = v21;
        if ( v21 != 0 )
          break;
        v22 = i[9];
        if ( v22 != 0 )
        {
          v70[9] = i[9];
          v51 = v10;
          v70[8] = a3 + 48 * v22;
          v70[0] = *(uint32_t *)v70[8];
          v70[1] = *(uint32_t *)(v70[8] + 4);
          v70[2] = *(uint32_t *)(v70[8] + 8);
          v70[3] = *(uint32_t *)(v70[8] + 12);
          v70[4] = *(uint32_t *)(v70[8] + 16);
          v70[5] = *(uint32_t *)(v70[8] + 20);
          v13 = *(uint32_t *)(v70[8] + 28);
          v70[6] = *(uint32_t *)(v70[8] + 24);
          v70[7] = v13;
          v14 = i[10];
          v73 = v14;
          v72 = (uint32_t *)(a3 + 48 * v14);
          v71[0] = *v72;
          v71[1] = v72[1];
          v71[2] = v72[2];
          v71[3] = v72[3];
          v71[4] = v72[4];
          v71[5] = v72[5];
          v15 = v72[7];
          v71[6] = v72[6];
          v71[7] = v15;
          v57 = hkAabb::overlaps((hkAabb::Self *)v62, (const hkAabb::Self *)v70);
          v16 = hkAabb::overlaps((hkAabb::Self *)v62, (const hkAabb::Self *)v71);
          v17 = v51;
          if ( v16 )
          {
            v34 = (uint32_t *)hkArrayBase_hkcdTreeQueries_hkcdTree_fb90a5::expandOne(
                              a4,
                              (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
            v17 = v51;
            v34[1] = v14;
            *v34 = v51;
          }
          if ( v57 )
          {
            v60 = v17;
            v33 = (uint32_t *)hkArrayBase_hkcdTreeQueries_hkcdTree_fb90a5::expandOne(
                              a4,
                              (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
            v33[1] = v22;
            *v33 = v60;
          }
          goto LABEL_13;
        }
        v23 = **a5;
        v24 = *((uint32_t *)v23 + 1);
        if ( v24 == (*((uint32_t *)v23 + 2) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v23, 8, v48);
          v24 = *((uint32_t *)v23 + 1);
        }
        v25 = *(uint32_t *)v23;
        *((uint32_t *)v23 + 1) = v24 + 1;
        v26 = (uint32_t *)(v25 + 8 * v24);
        *v26 = *(uint32_t *)(v62[8] + 40);
        v26[1] = *(uint32_t *)(v63[8] + 40);
        result = *((uint32_t **)a4 + 1);
        if ( (int)(uintptr_t)(v56) >= (int)(uintptr_t)(result) )
          return result;
LABEL_14:
        v18 = (char *)result - 1;
        v19 = *(uint32_t *)a4;
        *((uint32_t *)a4 + 1) = (uint32_t)(uintptr_t)(v18);
        v20 = (int *)(v19 + 8 * (uint32_t)(uintptr_t)(v18));
        v10 = *v20;
        v9 = v20[1];
        v63[9] = v9;
        v62[9] = v10;
        v11 = (uint32_t *)(a2 + 48 * v10);
        v62[8] = (uint32_t)(uintptr_t)(v11);
        std::memcpy(v62, v11, 32);
        i = (uint32_t *)(a3 + 48 * v9);
        v63[8] = (uint32_t)(uintptr_t)(i);
      }
      v66 = v11[9];
      v65 = (uint32_t *)(a2 + 48 * v21);
      v64[0] = *v65;
      v64[1] = v65[1];
      v64[2] = v65[2];
      v64[3] = v65[3];
      v64[4] = v65[4];
      v64[5] = v65[5];
      v27 = v65[7];
      v64[6] = v65[6];
      v64[7] = v27;
      v28 = v11[10];
      v69 = v28;
      v68 = (uint32_t *)(a2 + 48 * v28);
      v67[0] = *v68;
      v67[1] = v68[1];
      v67[2] = v68[2];
      v67[3] = v68[3];
      v67[4] = v68[4];
      v67[5] = v68[5];
      v29 = i[9];
      v30 = v68[7];
      v67[6] = v68[6];
      v67[7] = v30;
      if ( v29 != 0 )
      {
        v49 = v28;
        sub_17CF380(a3, (int)(uintptr_t)(&v63[8]), v70);
        v55 = hkAabb::overlaps((hkAabb::Self *)v64, (const hkAabb::Self *)v70);
        v35 = hkAabb::overlaps((hkAabb::Self *)v64, (const hkAabb::Self *)v71);
        v53 = hkAabb::overlaps((hkAabb::Self *)v67, (const hkAabb::Self *)v70);
        v36 = hkAabb::overlaps((hkAabb::Self *)v67, (const hkAabb::Self *)v71);
        v50 = v70[9];
        v37 = v49;
        v38 = v73;
        if ( v36 )
        {
          v45 = (uint32_t *)hkArrayBase_hkcdTreeQueries_hkcdTree_fb90a5::expandOne(
                            a4,
                            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
          v37 = v49;
          v45[1] = v38;
          *v45 = v49;
        }
        if ( v53 )
        {
          v54 = v37;
          v44 = (uint32_t *)hkArrayBase_hkcdTreeQueries_hkcdTree_fb90a5::expandOne(
                            a4,
                            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
          *v44 = v54;
          v44[1] = v50;
        }
        if ( v35 )
        {
          v43 = (uint32_t *)hkArrayBase_hkcdTreeQueries_hkcdTree_fb90a5::expandOne(
                            a4,
                            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
          v43[1] = v38;
          *v43 = v58;
        }
        if ( v55 )
        {
          v39 = (uint32_t *)hkArrayBase_hkcdTreeQueries_hkcdTree_fb90a5::expandOne(
                            a4,
                            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
          *v39 = v58;
          v39[1] = v50;
        }
      }
      else
      {
        v52 = v28;
        v31 = hkAabb::overlaps((hkAabb::Self *)v64, (const hkAabb::Self *)v63);
        if ( hkAabb::overlaps((hkAabb::Self *)v67, (const hkAabb::Self *)v63) )
        {
          v46 = (uint32_t *)hkArrayBase_hkcdTreeQueries_hkcdTree_fb90a5::expandOne(
                            a4,
                            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
          v46[1] = v9;
          *v46 = v52;
        }
        if ( v31 )
        {
          v32 = (uint32_t *)hkArrayBase_hkcdTreeQueries_hkcdTree_fb90a5::expandOne(
                            a4,
                            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
          v32[1] = v9;
          *v32 = v58;
        }
      }
LABEL_13:
      result = *((uint32_t **)a4 + 1);
      if ( (int)(uintptr_t)(v56) >= (int)(uintptr_t)(result) )
        return result;
      goto LABEL_14;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::binary_hkcdDynamicTree_Tree_hkc_bf7b66  (binary VA: 0x17dc840)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::binary<hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::CodecRawUlong>>,hkpTreeBroadPhaseSpatialTree16,hkcdTreeQueriesStacks::Dynamic<64,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8,hkcdDynamicTree::AnisotropicMetric,hkcdDynamicTree::CodecRawUlong>>,hkpTreeBroadPhaseSpatialTree16>>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::AllPairsWrapper<hkpTreeBroadPhaseInternals::InsertionQuery>>
// ----------------------------------------------------------------------------
uint32_t * hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::binary_hkcdDynamicTree_Tree_hkc_bf7b66(char a1, int a2, int a3, hkArrayBase<hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag, 64, 0>::SlotPair<hkcdDynamicTree::Tree<hkcdDynamicTree::InplaceStorage<8, hkcdDynamicTree::AnisotropicMetric::Self, hkcdDynamicTree::CodecRawUlong::Self>>, hkpTreeBroadPhaseSpatialTree16>> *a4, hkMemoryAllocator::Self ***a5, uint32_t *a6, int a7)
{
  char v7;
  uint32_t *result;
  int v9;
  uint16_t v10; // di
  int v11;
  uint32_t *v12;
  bool v13;
  bool v14;
  int16_t v15; // di
  char *v16;
  int v17;
  int *v18;
  int v19;
  hkMemoryAllocator::Self **v20;
  hkMemoryAllocator::Self *v21;
  int v22;
  int v23;
  uint32_t *v24;
  int v25;
  bool v26;
  int v27;
  bool v28;
  bool v29;
  int v30;
  int v31;
  int v32;
  int v33;
  bool v34;
  int16_t v35; // si
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef bool _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef bool _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int16_t _g4_t_v52;
  typedef bool _g4_t_v53;
  typedef int _g4_t_v54;
  typedef char _g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint32_t _g4_t_v58[12];
  typedef uint32_t _g4_t_v59[12];
  typedef uint32_t _g4_t_v60[8];
  typedef uint32_t *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef uint32_t _g4_t_v63[8];
  typedef uint32_t *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef uint32_t _g4_t_v66[12];
  typedef uint32_t _g4_t_v67[15];
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (12u + sizeof(_g4_t_v43)) > _g4_s0 ? (12u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v44)) > _g4_s1 ? (20u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v45)) > _g4_s2 ? (24u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v46)) > _g4_s3 ? (24u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v47)) > _g4_s4 ? (28u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v48)) > _g4_s5 ? (32u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v49)) > _g4_s6 ? (32u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v50)) > _g4_s7 ? (32u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v51)) > _g4_s8 ? (36u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v52)) > _g4_s9 ? (36u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v53)) > _g4_s10 ? (36u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v54)) > _g4_s11 ? (36u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v55)) > _g4_s12 ? (36u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v56)) > _g4_s13 ? (40u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v57)) > _g4_s14 ? (48u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v58)) > _g4_s15 ? (64u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v59)) > _g4_s16 ? (112u + sizeof(_g4_t_v59)) : _g4_s16,
    _g4_s18 = (160u + sizeof(_g4_t_v60)) > _g4_s17 ? (160u + sizeof(_g4_t_v60)) : _g4_s17,
    _g4_s19 = (192u + sizeof(_g4_t_v61)) > _g4_s18 ? (192u + sizeof(_g4_t_v61)) : _g4_s18,
    _g4_s20 = (196u + sizeof(_g4_t_v62)) > _g4_s19 ? (196u + sizeof(_g4_t_v62)) : _g4_s19,
    _g4_s21 = (208u + sizeof(_g4_t_v63)) > _g4_s20 ? (208u + sizeof(_g4_t_v63)) : _g4_s20,
    _g4_s22 = (240u + sizeof(_g4_t_v64)) > _g4_s21 ? (240u + sizeof(_g4_t_v64)) : _g4_s21,
    _g4_s23 = (244u + sizeof(_g4_t_v65)) > _g4_s22 ? (244u + sizeof(_g4_t_v65)) : _g4_s22,
    _g4_s24 = (256u + sizeof(_g4_t_v66)) > _g4_s23 ? (256u + sizeof(_g4_t_v66)) : _g4_s23,
    _g4_s25 = (304u + sizeof(_g4_t_v67)) > _g4_s24 ? (304u + sizeof(_g4_t_v67)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 12u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 32u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 36u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 36u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 36u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 40u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 48u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 64u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 112u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 160u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 192u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 196u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 208u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 240u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 244u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 256u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 304u);

  v7 = a1;
  result = a6;
  if ( *(uint32_t *)(a2 + 780) != 0 && *(uint16_t *)(a3 + 24) != 0 )
  {
    v56 = *((uint32_t **)a4 + 1);
    if ( a6 != nullptr )
    {
      v58[0] = *a6;
      v58[1] = a6[1];
      v58[2] = a6[2];
      v58[3] = a6[3];
      v58[4] = a6[4];
      v58[5] = a6[5];
      v58[6] = a6[6];
      v58[7] = a6[7];
      v9 = a6[9];
      v58[8] = a6[8];
      v58[9] = v9;
    }
    else
    {
      sub_17CEE40(a2, (uint32_t *)(a2 + 780), v58);
      v7 = a1;
    }
    if ( a7 != 0 )
    {
      v59[0] = *(uint32_t *)a7;
      v59[1] = *(uint32_t *)(a7 + 4);
      v59[2] = *(uint32_t *)(a7 + 8);
      v59[3] = *(uint32_t *)(a7 + 12);
      v59[4] = *(uint32_t *)(a7 + 16);
      v59[5] = *(uint32_t *)(a7 + 20);
      v59[6] = *(uint32_t *)(a7 + 24);
      v59[7] = *(uint32_t *)(a7 + 28);
      v59[8] = *(uint32_t *)(a7 + 32);
      LOWORD(v59[9]) = *(uint16_t *)(a7 + 36);
      v10 = v59[9];
    }
    else
    {
      v55 = v7;
      sub_17CEDE0((uint32_t *)a3, (uint16_t *)(a3 + 24), (int)(uintptr_t)(v59));
      v10 = v59[9];
      v7 = v55;
    }
    v57 = v58[9];
    if ( v7 != 0 || (result = (uint32_t *)hkAabb::overlaps((hkAabb::Self *)v58, (const hkAabb::Self *)v59)) != nullptr )
    {
      v11 = v59[8];
      v12 = (uint32_t *)v58[8];
      while ( 1 )
      {
        while ( a1 != 0 && (uint32_t *)v11 == v12 )
        {
          if ( *(uint32_t *)(v11 + 36) == 0 )
            goto LABEL_13;
          sub_17CF380(a2, (int)(uintptr_t)(&v58[8]), v66);
          v36 = v67[9];
          v54 = v66[9];
          v37 = hkArrayBase_hkcdTreeQueries_hkcdTree_3812a4::expandOne(
                  a4,
                  (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
          *(uint32_t *)v37 = v36;
          *(uint16_t *)(v37 + 4) = v36;
          if ( hkAabb::overlaps((hkAabb::Self *)v66, (const hkAabb::Self *)v67) )
          {
            v42 = hkArrayBase_hkcdTreeQueries_hkcdTree_3812a4::expandOne(
                    a4,
                    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
            *(uint16_t *)(v42 + 4) = v36;
            *(uint32_t *)v42 = v54;
          }
          v57 = v54;
          v10 = v54;
          std::memcpy(v58, v66, 40);
          std::memcpy(v59, v66, 38);
          v12 = (uint32_t *)v66[8];
          v11 = v66[8];
        }
        v19 = v12[9];
        if ( v19 != 0 )
          break;
        if ( *(uint16_t *)(v11 + 28) != 0 )
        {
          sub_17CF410((uint32_t *)a3, (int)(uintptr_t)(&v59[8]), (int)(uintptr_t)(v66));
          v13 = hkAabb::overlaps((hkAabb::Self *)v58, (const hkAabb::Self *)v66);
          v14 = hkAabb::overlaps((hkAabb::Self *)v58, (const hkAabb::Self *)v67);
          v15 = v66[9];
          if ( v14 )
          {
            v52 = v67[9];
            v33 = hkArrayBase_hkcdTreeQueries_hkcdTree_3812a4::expandOne(
                    a4,
                    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
            *(uint32_t *)v33 = v57;
            *(uint16_t *)(v33 + 4) = v52;
          }
          if ( v13 )
          {
            v32 = hkArrayBase_hkcdTreeQueries_hkcdTree_3812a4::expandOne(
                    a4,
                    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
            *(uint16_t *)(v32 + 4) = v15;
            *(uint32_t *)v32 = v57;
          }
          goto LABEL_13;
        }
        v20 = *a5;
        v21 = **a5;
        v22 = *((uint32_t *)v21 + 1);
        if ( v22 == (*((uint32_t *)v21 + 2) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v21, 8, v43);
          v22 = *((uint32_t *)v21 + 1);
        }
        v23 = *(uint32_t *)v21;
        *((uint32_t *)v21 + 1) = v22 + 1;
        v24 = (uint32_t *)(v23 + 8 * v22);
        *v24 = *(uint32_t *)(v58[8] + 40);
        v24[1] = *((uint32_t *)v20[1] + 2 * *(uint16_t *)(v59[8] + 30));
        result = *((uint32_t **)a4 + 1);
        if ( (int)(uintptr_t)(v56) >= (int)(uintptr_t)(result) )
          return result;
LABEL_14:
        v16 = (char *)result - 1;
        v17 = *(uint32_t *)a4;
        *((uint32_t *)a4 + 1) = (uint32_t)(uintptr_t)(v16);
        v18 = (int *)(v17 + 8 * (uint32_t)(uintptr_t)(v16));
        v10 = *((uint16_t *)v18 + 2);
        v57 = *v18;
        v58[9] = v57;
        LOWORD(v59[9]) = v10;
        v12 = (uint32_t *)(a2 + 48 * v57);
        v58[8] = (uint32_t)(uintptr_t)(v12);
        std::memcpy(v58, v12, 32);
        v11 = *(uint32_t *)a3 + 32 * v10;
        v59[8] = v11;
        v59[4] = *(uint32_t *)(v11 + 16);
        v59[5] = *(uint32_t *)(v11 + 20);
        v59[6] = *(uint32_t *)(v11 + 24);
        v59[7] = 0;
        v59[0] = *(uint32_t *)v11;
        v59[1] = *(uint32_t *)(v11 + 4);
        v59[2] = *(uint32_t *)(v11 + 8);
        v59[3] = *(uint32_t *)(v11 + 12);
      }
      v62 = v12[9];
      v61 = (uint32_t *)(a2 + 48 * v19);
      v60[0] = *v61;
      v60[1] = v61[1];
      v60[2] = v61[2];
      v60[3] = v61[3];
      v60[4] = v61[4];
      v60[5] = v61[5];
      v25 = v61[7];
      v60[6] = v61[6];
      v60[7] = v25;
      v47 = *(uint32_t *)(v58[8] + 40);
      v65 = v47;
      v64 = (uint32_t *)(a2 + 48 * v47);
      v63[0] = *v64;
      v63[1] = v64[1];
      v63[2] = v64[2];
      v63[3] = v64[3];
      v63[4] = v64[4];
      v63[5] = v64[5];
      v26 = *(uint16_t *)(v11 + 28) == 0;
      v27 = v64[7];
      v63[6] = v64[6];
      v63[7] = v27;
      if ( v26 )
      {
        v48 = v19;
        v28 = hkAabb::overlaps((hkAabb::Self *)v60, (const hkAabb::Self *)v59);
        v29 = hkAabb::overlaps((hkAabb::Self *)v63, (const hkAabb::Self *)v59);
        v30 = v48;
        if ( v29 )
        {
          v41 = hkArrayBase_hkcdTreeQueries_hkcdTree_3812a4::expandOne(
                  a4,
                  (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
          *(uint16_t *)(v41 + 4) = v10;
          *(uint32_t *)v41 = v47;
          v30 = v48;
        }
        if ( v28 )
        {
LABEL_29:
          v51 = v30;
          v31 = hkArrayBase_hkcdTreeQueries_hkcdTree_3812a4::expandOne(
                  a4,
                  (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
          *(uint16_t *)(v31 + 4) = v10;
          *(uint32_t *)v31 = v51;
        }
      }
      else
      {
        v44 = v19;
        sub_17CF410((uint32_t *)a3, (int)(uintptr_t)(&v59[8]), (int)(uintptr_t)(v66));
        v53 = hkAabb::overlaps((hkAabb::Self *)v60, (const hkAabb::Self *)v66);
        v49 = hkAabb::overlaps((hkAabb::Self *)v60, (const hkAabb::Self *)v67);
        v45 = hkAabb::overlaps((hkAabb::Self *)v63, (const hkAabb::Self *)v66);
        v34 = hkAabb::overlaps((hkAabb::Self *)v63, (const hkAabb::Self *)v67);
        v35 = v67[9];
        v10 = v66[9];
        v30 = v44;
        if ( v34 )
        {
          v40 = hkArrayBase_hkcdTreeQueries_hkcdTree_3812a4::expandOne(
                  a4,
                  (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
          *(uint16_t *)(v40 + 4) = v35;
          *(uint32_t *)v40 = v47;
          v30 = v44;
        }
        if ( v45 )
        {
          v46 = v30;
          v39 = hkArrayBase_hkcdTreeQueries_hkcdTree_3812a4::expandOne(
                  a4,
                  (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
          *(uint16_t *)(v39 + 4) = v10;
          *(uint32_t *)v39 = v47;
          v30 = v46;
        }
        if ( v49 )
        {
          v50 = v30;
          v38 = hkArrayBase_hkcdTreeQueries_hkcdTree_3812a4::expandOne(
                  a4,
                  (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
          v30 = v50;
          *(uint16_t *)(v38 + 4) = v35;
          *(uint32_t *)v38 = v50;
        }
        if ( v53 )
          goto LABEL_29;
      }
LABEL_13:
      result = *((uint32_t **)a4 + 1);
      if ( (int)(uintptr_t)(v56) >= (int)(uintptr_t)(result) )
        return result;
      goto LABEL_14;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::RayCastBatchWrapper_hkpTreeBroadPhaseInterna_ab3754::processNode_hkpTreeBroadPhaseSpatial_ea5661  (binary VA: 0x17ddf30)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::RayCastBatchWrapper<hkpTreeBroadPhaseInternals::RayCastFanQuery>::processNode<hkpTreeBroadPhaseSpatialTree16,hkcdDynamicTree::Tree<hkcdDynamicTree::DynamicStorage16>::NodeContext>
// ----------------------------------------------------------------------------
int hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::RayCastBatchWrapper_hkpTreeBroadPhaseInterna_ab3754::processNode_hkpTreeBroadPhaseSpatial_ea5661(int a1, int a2, char a3, int a4, char a5)
{
  int v5;
  float *v6;
  float *v7;
  int v8;
  float v9; // xmm6_4
  float v10; // xmm3_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  float v16; // xmm7_4
  float v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm0_4
  float v22; // xmm7_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm3_4
  float v26; // xmm0_4
  uint8_t v27; // si
  float v28;
  float *v29;
  float *v30;
  char v31; // si
  float v32; // xmm1_4
  float v33; // xmm6_4
  float v34; // xmm4_4
  float v35; // xmm2_4
  float v36; // xmm3_4
  float v37; // xmm1_4
  float v38; // xmm6_4
  float v39; // xmm3_4
  float v40; // xmm2_4
  float v41; // xmm3_4
  float v42; // xmm3_4
  float v43; // xmm1_4
  float v44; // xmm6_4
  float v45; // xmm2_4
  float v46; // xmm3_4
  uint8_t v49;

  LOBYTE(v5) = a3;
  if ( *(uint16_t *)(*(uint32_t *)(a2 + 32) + 28) != 0 )
  {
    if ( a3 == 0 )
      return 0;
    v28 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_to_m128i(*(unsigned int *)(a2 + 4))));
    v29 = (float *)(48 * a4 + a1);
    v30 = v29 + 14;
    v31 = a4;
    while ( 1 )
    {
      v42 = v29[4];
      v43 = *(v30 - 2);
      v44 = v29[11];
      v45 = (float)(*(float *)a2 - v42) * v43;
      v46 = (float)(*(float *)(a2 + 16) - v42) * v43;
      if ( v45 <= v46 )
      {
        v32 = fmaxf(0.0, v45);
        v33 = fminf(v44, v46);
      }
      else
      {
        v32 = fmaxf(0.0, v46);
        v33 = fminf(v44, v45);
      }
      v34 = *(v30 - 1);
      v35 = (float)(v28 - v29[5]) * v34;
      v36 = (float)(*(float *)(a2 + 20) - v29[5]) * v34;
      if ( v35 > v36 )
      {
        v37 = fmaxf(v32, v36);
        v38 = fminf(v33, v35);
      }
      else
      {
        v37 = fmaxf(v32, v35);
        v38 = fminf(v33, v36);
      }
      v39 = v29[6];
      v40 = (float)(*(float *)(a2 + 8) - v39) * *v30;
      v41 = (float)(*(float *)(a2 + 24) - v39) * *v30;
      if ( v40 > v41 )
      {
        if ( fminf(v38, v40) >= fmaxf(v37, v41) )
          return (uint8_t)v5 << v31;
      }
      else if ( fminf(v38, v41) >= fmaxf(v37, v40) )
      {
        return (uint8_t)v5 << v31;
      }
      ++v31;
      v29 += 12;
      v30 += 12;
      v5 = (int)(uint8_t)v5 >> 1;
      if ( (uint8_t)v5 == 0 )
        return 0;
    }
  }
  if ( a3 != 0 )
  {
    v49 = 0;
    v6 = (float *)(a1 + 48 * a4);
    v7 = (float *)(a1 + 48 * a4 + 56);
    LOBYTE(v8) = a3;
    do
    {
      if ( (v8 & 1) != 0 )
      {
        v9 = v6[4];
        v10 = *(v7 - 2);
        v11 = v6[11];
        v12 = (float)(*(float *)a2 - v9) * v10;
        v13 = (float)(*(float *)(a2 + 16) - v9) * v10;
        if ( v12 > v13 )
        {
          v14 = fminf(v11, v12);
          v15 = fmaxf(0.0, v13);
        }
        else
        {
          v14 = fminf(v11, v13);
          v15 = fmaxf(0.0, v12);
        }
        v16 = v6[5];
        v17 = *(v7 - 1);
        v18 = (float)(*(float *)(a2 + 4) - v16) * v17;
        v19 = (float)(*(float *)(a2 + 20) - v16) * v17;
        if ( v18 > v19 )
        {
          v20 = fmaxf(v15, v19);
          v21 = fminf(v14, v18);
        }
        else
        {
          v20 = fmaxf(v15, v18);
          v21 = fminf(v14, v19);
        }
        v22 = v6[6];
        v23 = (float)(*(float *)(a2 + 8) - v22) * *v7;
        v24 = (float)(*(float *)(a2 + 24) - v22) * *v7;
        if ( v23 > v24 )
        {
          v25 = fmaxf(v20, v24);
          v26 = fminf(v21, v23);
        }
        else
        {
          v25 = fmaxf(v20, v23);
          v26 = fminf(v21, v24);
        }
        v27 = v49;
        if ( v26 >= v25 )
          v27 = a5 | v49;
        v49 = v27;
      }
      v7 += 12;
      v6 += 12;
      a5 *= 2;
      v8 = (int)(uint8_t)v8 >> 1;
    }
    while ( (uint8_t)v8 != 0 );
  }
  else
  {
    return 0;
  }
  return v49;
}

// ----------------------------------------------------------------------------
// Function: hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_213e2e  (binary VA: 0x17de230)
// Original: hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::unary<hkpTreeBroadPhaseSpatialTree16,hkcdTreeQueriesStacks::Dynamic<64,unsigned short>,hkcdTreeQueries<hkcdTreeQueriesStacks::DynamicTag,64,0>::RayCastBatchWrapper<hkpTreeBroadPhaseInternals::RayCastFanQuery>>
// ----------------------------------------------------------------------------
int hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::unary_hkpTreeBroadPhaseSpatial_213e2e(int a1, int *a2, int a3)
{
  int result;
  int v4;
  int i;
  int v6;
  int v7;
  char v8;
  char v9;
  char v10;
  int v11;
  int v12;
  char v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int *v18;
  int v19;
  int v20;
  int v34;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef float _g4_t_v26;
  typedef int _g4_t_v27;
  typedef char _g4_t_v28;
  typedef int _g4_t_v29;
  typedef char _g4_t_v30;
  typedef uint32_t _g4_t_v31[12];
  typedef uint32_t _g4_t_v32[12];
  typedef uint32_t _g4_t_v33[15];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v22)) > _g4_s1 ? (12u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v23)) > _g4_s2 ? (28u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v24)) > _g4_s3 ? (32u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v25)) > _g4_s4 ? (36u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v26)) > _g4_s5 ? (36u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v27)) > _g4_s6 ? (40u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v28)) > _g4_s7 ? (44u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v29)) > _g4_s8 ? (44u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v30)) > _g4_s9 ? (44u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v31)) > _g4_s10 ? (48u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v32)) > _g4_s11 ? (96u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (144u + sizeof(_g4_t_v33)) > _g4_s12 ? (144u + sizeof(_g4_t_v33)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 96u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 144u);

  result = a1;
  if ( *(uint16_t *)(a1 + 24) != 0 )
  {
    v23 = a2[1];
    sub_17CEDE0((uint32_t *)a1, (uint16_t *)(a1 + 24), (int)(uintptr_t)(v31));
    result = hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::RayCastBatchWrapper_hkpTreeBroadPhaseInterna_ab3754::processNode_hkpTreeBroadPhaseSpatial_ea5661(
               a3,
               (int)(uintptr_t)(v31),
               (int)*(uint8_t *)(a3 + 344) >> ((1212958784 >> *(uint8_t *)(a3 + 344)) & 3),
               (1212958784 >> *(uint8_t *)(a3 + 344)) & 3,
               1 << ((1212958784 >> *(uint8_t *)(a3 + 344)) & 3));
    v4 = a3;
    *(uint8_t *)(a3 + 344) = result;
    if ( (uint8_t)result != 0 )
    {
      for ( i = v31[8]; ; i = v32[8] )
      {
LABEL_4:
        if ( *(uint16_t *)(i + 28) == 0 )
          goto LABEL_12;
        while ( 1 )
        {
          sub_17CF410((uint32_t *)a1, (int)(uintptr_t)(&v31[8]), (int)(uintptr_t)(v32));
          v6 = (1212958784 >> *(uint8_t *)(v4 + 344)) & 3;
          v7 = 1 << v6;
          v25 = v6;
          v27 = (int)*(uint8_t *)(v4 + 344) >> v6;
          v28 = hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::RayCastBatchWrapper_hkpTreeBroadPhaseInterna_ab3754::processNode_hkpTreeBroadPhaseSpatial_ea5661(
                  v4,
                  (int)(uintptr_t)(v32),
                  v27,
                  v6,
                  1 << v6);
          v8 = hkcdTreeQueries_hkcdTreeQueriesStacks_Dy_799dd9::RayCastBatchWrapper_hkpTreeBroadPhaseInterna_ab3754::processNode_hkpTreeBroadPhaseSpatial_ea5661(
                 v4,
                 (int)(uintptr_t)(v33),
                 v27,
                 v25,
                 v7);
          v9 = (v28 != 0) | (v8 != 0 ? 2 : 0);
          if ( v9 == 2 )
          {
            *(uint8_t *)(v4 + 344) = v8;
            std::memcpy(v31, v33, 38);
            i = v33[8];
            goto LABEL_4;
          }
          if ( v9 == 3 )
            break;
          if ( v9 == 1 )
          {
            *(uint8_t *)(v4 + 344) = v28;
            goto LABEL_24;
          }
          while ( 1 )
          {
            result = (int)(uintptr_t)(a2);
            if ( v23 >= a2[1] )
              return result;
            v10 = *(uint8_t *)(v4 + 345);
            v11 = *(uint32_t *)(v4 + 336);
            *(uint32_t *)(v4 + 336) = v11 - 1;
            if ( v11 <= 128 )
              v10 = *(uint8_t *)(v4 + v11 + 207);
            *(uint8_t *)(v4 + 344) = v10;
            v29 = a2[1];
            v12 = v29 - 1 + *a2;
            a2[1] = v29 - 1;
            sub_17CEDE0((uint32_t *)a1, (uint16_t *)(v29 - 1 + v12), (int)(uintptr_t)(v31));
            if ( *(uint16_t *)(v31[8] + 28) != 0 )
              break;
LABEL_12:
            v30 = -*(uint8_t *)(v4 + 340);
            if ( (uint8_t)((int)*(uint8_t *)(v4 + 344) >> ((1212958784 >> *(uint8_t *)(v4 + 344)) & 3)) != 0 )
            {
              v13 = (int)*(uint8_t *)(v4 + 344) >> ((1212958784 >> *(uint8_t *)(v4 + 344)) & 3);
              v34 = v4;
              v14 = 4 * (*(uint32_t *)(v4 + 340) + ((1212958784 >> *(uint8_t *)(v4 + 344)) & 3));
              v15 = *(uint32_t *)(v4 + 340) + ((1212958784 >> *(uint8_t *)(v4 + 344)) & 3);
              LOBYTE(v16) = v13;
              do
              {
                if ( (v16 & 1) != 0 )
                {
                  v24 = v14;
                  v21 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v34 + 4) + v14);
                  v26 = ((long double (*)(int, uint32_t, int))*(uint32_t *)(*(uint32_t *)v21 + 8))(
                          v21,
                          *(uint32_t *)(**(uint32_t **)v34 + 8 * *(uint16_t *)(v31[8] + 30)),
                          v15 * *(uint32_t *)(*(uint32_t *)v34 + 16));
                  v14 = v24;
                  *(float *)(v34 + 48 * (uint8_t)(v15 + v30) + 44) = v26;
                }
                ++v15;
                v14 += 4;
                v16 = (int)(uint8_t)v16 >> 1;
              }
              while ( (uint8_t)v16 != 0 );
              v4 = v34;
            }
          }
        }
        v17 = *(uint32_t *)(v4 + 336);
        *(uint8_t *)(v4 + 344) = v28;
        *(uint32_t *)(v4 + 336) = v17 + 1;
        if ( v17 <= 127 )
          *(uint8_t *)(v4 + v17 + 208) = v8;
        v18 = a2;
        v19 = a2[1];
        if ( v19 == (a2[2] & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)a2, 2, v22);
          v18 = a2;
          v19 = a2[1];
        }
        v20 = *v18;
        v18[1] = v19 + 1;
        *(uint16_t *)(v20 + 2 * v19) = v33[9];
LABEL_24:
        std::memcpy(v31, v32, 38);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_17DEEA0  (binary VA: 0x17deea0)
// Original: sub_17DEEA0
// ----------------------------------------------------------------------------
void sub_17DEEA0()
{
  hkOptionalComponent::Construct(
    (hkOptionalComponent::Self *)&hkOptionalComponent_hkpTreeBroadPhase,
    "hkpTreeBroadPhase",
    (void (*)())sub_17CE980);
}

// ----------------------------------------------------------------------------
// Function: nullsub_844  (binary VA: 0x17df418)
// Original: nullsub_844
// ----------------------------------------------------------------------------
void nullsub_844()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_17DF420  (binary VA: 0x17df420)
// Original: sub_17DF420
// ----------------------------------------------------------------------------
int sub_17DF420(int (***a1)(uint32_t))
{
  return (**a1)((uint32_t)(uintptr_t)(a1));
}

// ----------------------------------------------------------------------------
// Function: sub_17DF440  (binary VA: 0x17df440)
// Original: sub_17DF440
// ----------------------------------------------------------------------------
int sub_17DF440(int a1, int a2)
{
  return hkpStaticCompoundShape::Construct(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_17DF4B0  (binary VA: 0x17df4b0)
// Original: sub_17DF4B0
// ----------------------------------------------------------------------------
uint32_t * sub_17DF4B0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);

  hkClass::Construct(
    (hkClass::Self *)&hkpStaticCompoundShapeInstanceClass,
    "hkpStaticCompoundShapeInstance",
    nullptr,
    64,
    nullptr,
    0,
    nullptr,
    0,
    (const hkClassMember::Self *)&hkpStaticCompoundShape::Instance::Members,
    5,
    nullptr,
    nullptr,
    0,
    0);
  hkpStaticCompoundShapeInstanceTypeInfo = (uint32_t)(uintptr_t)("hkpStaticCompoundShapeInstance");
  *(uintptr_t *)(unk_21362B4) = (uintptr_t)("!hkpStaticCompoundShape::Instance");
  *(uintptr_t *)(unk_21362B8) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21362C0) = (uintptr_t)(0);
  *(uintptr_t *)(unk_21362C4) = (uintptr_t)(64);
  *(uintptr_t *)(unk_21362BC) = (uintptr_t)((&g4_noop_ret0));
  hkClass::Construct(
    (hkClass::Self *)&hkpStaticCompoundShapeClass,
    "hkpStaticCompoundShape",
    (const hkClass::Self *)&hkpBvTreeShapeClass,
    112,
    nullptr,
    1,
    (const hkClassEnum::Self *)&off_203C228,
    1,
    (const hkClassMember::Self *)&hkpStaticCompoundShape::Members,
    7,
    nullptr,
    nullptr,
    0,
    0);
  hkpStaticCompoundShape::Construct(&v1, 0);
  hkpStaticCompoundShapeTypeInfo[1] = (uint32_t)(uintptr_t)("!hkpStaticCompoundShape");
  hkpStaticCompoundShapeTypeInfo[2] = (uint32_t)(uintptr_t)(sub_17DF440);
  hkpStaticCompoundShapeTypeInfo[3] = (uint32_t)(uintptr_t)(sub_17DF420);
  hkpStaticCompoundShapeTypeInfo[0] = (uint32_t)(uintptr_t)("hkpStaticCompoundShape");
  hkpStaticCompoundShapeTypeInfo[4] = v1;
  hkpStaticCompoundShapeTypeInfo[5] = 112;
  return hkpStaticCompoundShapeTypeInfo;
}

// ----------------------------------------------------------------------------
// Function: sub_17E1150  (binary VA: 0x17e1150)
// Original: sub_17E1150
// ----------------------------------------------------------------------------
void sub_17E1150()
{
  byte_2136310 = 0;
}

// ----------------------------------------------------------------------------
// Function: sub_17E1EA0  (binary VA: 0x17e1ea0)
// Original: sub_17E1EA0
// ----------------------------------------------------------------------------
void sub_17E1EA0()
{
  byte_2136320 = 0;
}

// ----------------------------------------------------------------------------
// Function: sub_17E1F50  (binary VA: 0x17e1f50)
// Original: sub_17E1F50
// ----------------------------------------------------------------------------
int sub_17E1F50(int *a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  int v6;
  bool v7;

  v3 = *a1;
  v4 = *a1 + 48 * a2;
  result = *(uint32_t *)(v4 + 36);
  if ( result == 0 && a2 != 0 )
  {
    v6 = *(uint32_t *)(v4 + 32);
    if ( a3 != v6 && a2 == *(uint32_t *)(v3 + 48 * v6 + 40) )
    {
      while ( 1 )
      {
        a2 = v6;
        v6 = *(uint32_t *)(v3 + 48 * v6 + 32);
        if ( a3 == v6 )
          break;
        if ( *(uint32_t *)(v3 + 48 * v6 + 40) != a2 )
        {
          if ( v6 == 0 )
            goto LABEL_7;
          goto LABEL_12;
        }
      }
    }
    if ( v6 != 0 )
    {
LABEL_12:
      v7 = a2 == *(uint32_t *)(v3 + 48 * v6 + 40);
      a2 = *(uint32_t *)(v3 + 48 * v6 + 40);
      if ( !v7 )
        return *(uint32_t *)(v3 + 48 * v6 + 40);
    }
LABEL_7:
    result = 0;
    if ( a3 != v6 )
      return a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_17E2020  (binary VA: 0x17e2020)
// Original: sub_17E2020
// ----------------------------------------------------------------------------
uint32_t * sub_17E2020(uint32_t *a1, int *a2, int a3)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int i;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  char v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  unsigned int v24;
  int v25;

  v4 = 8;
  if ( a3 >= 8 )
    v4 = a3;
  v24 = a2[1] & 0x80000000;
  v18 = a2[2] + 1;
  v25 = *a2;
  v5 = (*(int (**)(uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 8))(
         (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
         12 * v4);
  if ( v5 != 0 )
  {
    *a2 = v5;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      *(uint8_t *)(v5 + v6 + 4) = 0;
      v6 += 12;
      if ( v4 <= v7 )
        break;
      v5 = *a2;
    }
    a2[2] = v4 - 1;
    a2[1] = 0;
    v8 = v25;
    if ( v18 > 0 )
    {
      v9 = a2;
      for ( i = 0; i != v18; ++i )
      {
        v17 = *(uint8_t *)(v8 + 4);
        if ( v17 != 0 )
        {
          v11 = v9[2];
          v21 = *(uint32_t *)(v8 + 8);
          v20 = *(uint32_t *)v8;
          v19 = v9[1];
          v22 = v11;
          if ( 2 * v19 > v11 )
          {
            sub_17E2020(2 * v11 + 2);
            v22 = v9[2];
            v19 = v9[1];
          }
          v12 = v22 & (-1640531535 * v20);
          v13 = 12 * v12;
          v14 = *v9 + 12 * v12;
          if ( *(uint8_t *)(v14 + 4) != 0 )
          {
            while ( *(uint32_t *)v14 != v20 )
            {
              v12 = v22 & (v12 + 1);
              v13 = 12 * v12;
              v14 = *v9 + 12 * v12;
              if ( *(uint8_t *)(v14 + 4) == 0 )
                goto LABEL_21;
            }
            v15 = 0;
          }
          else
          {
LABEL_21:
            v15 = 1;
          }
          v9[1] = v19 + v15;
          *(uint32_t *)v14 = v20;
          *(uint8_t *)(v14 + 4) = v17;
          *(uint32_t *)(*v9 + v13 + 8) = v21;
        }
        v8 += 12;
      }
    }
    if ( v24 == 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 12))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v25,
        12 * v18);
    *a1 = 0;
    return a1;
  }
  else
  {
    *a1 = 1;
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_17E2260  (binary VA: 0x17e2260)
// Original: sub_17E2260
// ----------------------------------------------------------------------------
hkArrayUtil::Self * sub_17E2260(hkArrayUtil::Self *result, int *a2, int a3)
{
  int v3;
  int v4;
  hkArrayUtil::Self *v5;

  v3 = a2[2] & 0x3FFFFFFF;
  if ( v3 >= a3 )
  {
    *(uint32_t *)result = 0;
  }
  else
  {
    v4 = 2 * v3;
    if ( v4 < a3 )
      v4 = a3;
    v5 = result;
    hkArrayUtil::reserve(result, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a2, v4, 8);
    return v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_17E2430  (binary VA: 0x17e2430)
// Original: sub_17E2430
// ----------------------------------------------------------------------------
int sub_17E2430(int *a1, int a2)
{
  int v2;
  int i;
  int result;
  int v5;
  int v6;
  int v7;
  bool v8;
  int v9;

  v2 = *a1;
  i = *(uint32_t *)(*a1 + 48 * a2 + 36);
  result = 1;
  if ( i != 0 )
  {
    v9 = 0;
    do
    {
      while ( 1 )
      {
        v5 = 48 * i + v2;
        v6 = *(uint32_t *)(v5 + 36);
        v9 += v6 == 0;
        if ( v6 == 0 )
          break;
        i = *(uint32_t *)(v5 + 36);
      }
      v7 = *(uint32_t *)(v5 + 32);
      if ( a2 != v7 && i == *(uint32_t *)(v2 + 48 * v7 + 40) )
      {
        for ( i = *(uint32_t *)(v5 + 32); ; i = v7 )
        {
          v7 = *(uint32_t *)(v2 + 48 * v7 + 32);
          if ( a2 == v7 || *(uint32_t *)(v2 + 48 * v7 + 40) != i )
            break;
        }
      }
      if ( v7 != 0 )
      {
        v8 = i == *(uint32_t *)(v2 + 48 * v7 + 40);
        i = *(uint32_t *)(v2 + 48 * v7 + 40);
        if ( !v8 )
          continue;
      }
      if ( a2 == v7 )
        break;
    }
    while ( i != 0 );
    return v9;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_17E2680  (binary VA: 0x17e2680)
// Original: sub_17E2680
// ----------------------------------------------------------------------------
int sub_17E2680(uint32_t *a1, hkMemoryAllocator::Self *a2, float *a3)
{
  int result;
  hkMemoryAllocator::Self *v5;
  int v6;
  int v7;
  float v8; // xmm7_4
  float *v9;
  int v10;
  bool v11;
  int v12;
  int v13;
  int v14;
  int v15;
  hkMemoryAllocator::Self *v16;
  int v17;
  int v18;
  int v19;
  int v21;
  hkMemoryAllocator::Self *v22;
  hkMemoryAllocator::Self *v23;
  int v24;

  result = a1[6];
  if ( result != 0 )
  {
    v5 = a2;
    v24 = *((uint32_t *)a2 + 1);
    v6 = *a1 + 48 * result;
    if ( a3[4] <= *(float *)(v6 + 16)
      && a3[5] <= *(float *)(v6 + 20)
      && a3[6] <= *(float *)(v6 + 24)
      && *(float *)v6 <= a3[8]
      && *(float *)(v6 + 4) <= a3[9]
      && *(float *)(v6 + 8) <= a3[10] )
    {
      while ( 1 )
      {
        v7 = *(uint32_t *)(v6 + 36);
        if ( v7 == 0 )
          break;
LABEL_9:
        v8 = a3[4];
        v9 = (float *)(48 * v7 + *a1);
        v10 = *(uint32_t *)(v6 + 40);
        v6 = 48 * v10 + *a1;
        v11 = false;
        if ( v8 <= v9[4] && a3[5] <= v9[5] && a3[6] <= v9[6] && *v9 <= a3[8] && v9[1] <= a3[9] )
          v11 = v9[2] <= a3[10];
        if ( v8 > *(float *)(v6 + 16)
          || a3[5] > *(float *)(v6 + 20)
          || a3[6] > *(float *)(v6 + 24)
          || *(float *)v6 > a3[8]
          || *(float *)(v6 + 4) > a3[9]
          || *(float *)(v6 + 8) > a3[10] )
        {
          v21 = 0;
        }
        else
        {
          v21 = 2;
        }
        v12 = v21 | v11;
        if ( v12 != 2 )
        {
          if ( v12 == 3 )
          {
            v18 = *((uint32_t *)v5 + 1);
            if ( v18 == (*((uint32_t *)v5 + 2) & 0x3FFFFFFF) )
            {
              v23 = v5;
              hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v5, 4, v19);
              v5 = v23;
              v18 = *((uint32_t *)v23 + 1);
            }
            *((uint32_t *)v5 + 1) = v18 + 1;
            *(uint32_t *)(*(uint32_t *)v5 + 4 * v18) = v10;
            v6 = (int)(uintptr_t)(v9);
          }
          else
          {
            if ( v12 != 1 )
              goto LABEL_25;
            v6 = (int)(uintptr_t)(v9);
          }
        }
      }
      while ( 1 )
      {
        v15 = *(uint32_t *)(v6 + 40);
        if ( v15 == **(uint32_t **)a3 )
          break;
        v16 = *(hkMemoryAllocator::Self **)(*(uint32_t *)a3 + 4);
        v17 = *((uint32_t *)v16 + 1);
        if ( v17 == (*((uint32_t *)v16 + 2) & 0x3FFFFFFF) )
        {
          v22 = v5;
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v16, 4, v19);
          v17 = *((uint32_t *)v16 + 1);
          v5 = v22;
        }
        *(uint32_t *)(*(uint32_t *)v16 + 4 * v17) = v15;
        ++*((uint32_t *)v16 + 1);
        result = *((uint32_t *)v5 + 1);
        if ( v24 >= result )
          return result;
LABEL_26:
        v13 = *(uint32_t *)v5;
        v14 = result - 1;
        *((uint32_t *)v5 + 1) = v14;
        v6 = *a1 + 48 * *(uint32_t *)(v13 + 4 * v14);
        v7 = *(uint32_t *)(v6 + 36);
        if ( v7 != 0 )
          goto LABEL_9;
      }
LABEL_25:
      result = *((uint32_t *)v5 + 1);
      if ( v24 < result )
        goto LABEL_26;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_17E2A30  (binary VA: 0x17e2a30)
// Original: sub_17E2A30
// ----------------------------------------------------------------------------
int sub_17E2A30(int *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v18;
  bool v19;
  int v20;
  int v22;

  v2 = *a1;
  v3 = 48 * a2 + *a1;
  v4 = *(uint32_t *)(v3 + 32);
  if ( v4 != 0 )
  {
    v5 = *(uint32_t *)(v3 + 32);
    v6 = 0;
    do
    {
      ++v6;
      v5 = *(uint32_t *)(v2 + 48 * v5 + 32);
    }
    while ( v5 != 0 );
    v7 = *(uint32_t *)(v3 + 36);
    if ( v7 != 0 )
      goto LABEL_5;
    v14 = 0;
    do
    {
      ++v14;
      v4 = *(uint32_t *)(v2 + 48 * v4 + 32);
    }
    while ( v4 != 0 );
  }
  else
  {
    v7 = *(uint32_t *)(v3 + 36);
    v6 = 0;
    v14 = 0;
    if ( v7 != 0 )
    {
LABEL_5:
      v20 = 0;
      v22 = v6;
      while ( 1 )
      {
        v8 = 48 * v7 + v2;
        v9 = *(uint32_t *)(v8 + 36);
        if ( v9 == 0 )
        {
          v10 = *(uint32_t *)(v8 + 32);
          if ( v10 != 0 )
          {
            v11 = *(uint32_t *)(v8 + 32);
            v12 = 0;
            do
            {
              ++v12;
              v11 = *(uint32_t *)(v2 + 48 * v11 + 32);
            }
            while ( v11 != 0 );
          }
          else
          {
            v12 = 0;
          }
          for ( ; a2 != v10 && *(uint32_t *)(v2 + 48 * v10 + 40) == v7; v10 = *(uint32_t *)(v2 + 48 * v10 + 32) )
            v7 = v10;
          if ( v10 == 0 || (v19 = *(uint32_t *)(v2 + 48 * v10 + 40) == v7, v7 = *(uint32_t *)(v2 + 48 * v10 + 40), v19) )
          {
            if ( a2 == v10 )
            {
              v18 = v12 - v22;
              if ( v20 >= v18 )
                return v20;
              return v18;
            }
          }
          v13 = v12 - v22;
          if ( v20 >= v13 )
            v13 = v20;
          v20 = v13;
          if ( v7 == 0 )
            return v20;
          v9 = v7;
        }
        v7 = v9;
      }
    }
  }
  v15 = v14 - v6;
  v16 = 0;
  if ( v15 >= 0 )
    return v15;
  return v16;
}

// ----------------------------------------------------------------------------
// Function: sub_17E2C8A  (binary VA: 0x17e2c8a)
// Original: sub_17E2C8A
// ----------------------------------------------------------------------------
int sub_17E2C8A(int a1, int a2)
{
  int v3;
  int v4;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v3 = ((*(uint8_t *)(a1 + 3) >> 6) + 1) % 3;
  (*(void (**)(uint32_t, int, int *))(**(uint32_t **)(*(uint32_t *)(a2 + 4) + 4) + 20))(
    *(uint32_t *)(*(uint32_t *)(a2 + 4) + 4),
    *(uint32_t *)a1 & 0x3FFFFFFF,
    &v6);
  v4 = *(uint32_t *)(a2 + 8);
  v6 = *(uint32_t *)(v4 + 4 * v6);
  v7 = *(uint32_t *)(v4 + 4 * v7);
  v8 = *(uint32_t *)(v4 + 4 * v8);
  return *(&v6 + v3);
}

// ----------------------------------------------------------------------------
// Function: sub_17E2D00  (binary VA: 0x17e2d00)
// Original: sub_17E2D00
// ----------------------------------------------------------------------------
int sub_17E2D00(uint32_t *a1, int *a2, int *a3)
{
  unsigned int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int i;
  int v14;
  int v15;
  int result;
  int v17;
  int v18;
  int v19;
  int v20;
  bool v21;
  typedef int _g4_t_v22;
  typedef int *_g4_t_v24;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int **_g4_t_v35;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v24)) > _g4_s1 ? (24u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v26)) > _g4_s2 ? (32u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v27)) > _g4_s3 ? (36u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v28)) > _g4_s4 ? (40u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v29)) > _g4_s5 ? (44u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v30)) > _g4_s6 ? (48u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v31)) > _g4_s7 ? (52u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v32)) > _g4_s8 ? (56u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v33)) > _g4_s9 ? (60u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v34)) > _g4_s10 ? (64u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v35)) > _g4_s11 ? (80u + sizeof(_g4_t_v35)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 80u);

  v35 = &a3;
  v3 = a2[2] & 0x3FFFFFFF;
  v24 = a3;
  v32 = 0;
  v33 = 0;
  v34 = -1;
  if ( v3 <= 0xFF )
  {
    v4 = 2 * v3;
    v5 = 256;
    if ( v4 >= 256 )
      v5 = v4;
    hkArrayUtil::reserve((hkArrayUtil::Self *)&v31, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a2, v5, 4);
  }
  v6 = a1[1];
  v7 = v24[2] & 0x3FFFFFFF;
  if ( v6 <= v7 )
  {
    v24[1] = v6;
    if ( v6 <= 0 )
      goto LABEL_25;
  }
  else
  {
    v8 = 2 * v7;
    if ( v8 < v6 )
      v8 = a1[1];
    hkArrayUtil::reserve((hkArrayUtil::Self *)&v31, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v24, v8, 4);
    v24[1] = v6;
  }
  v26 = 0;
  v28 = 0;
  do
  {
    v27 = 4 * v28;
    v29 = *(uint32_t *)(*a1 + 4 * v28);
    v30 = v34;
    if ( 2 * v33 > v34 )
    {
      sub_17E2020(&v31, &v32, 2 * v34 + 2);
      v30 = v34;
    }
    for ( i = v30 & (-1640531535 * v29); ; i = v30 & (i + 1) )
    {
      v14 = 12 * i;
      v15 = v32 + 12 * i;
      if ( *(uint8_t *)(v15 + 4) == 0 )
      {
        *(uint32_t *)v15 = v29;
        v9 = v32;
        *(uint8_t *)(v15 + 4) = 1;
        ++v33;
        *(uint32_t *)(v9 + v14 + 8) = v26;
        goto LABEL_11;
      }
      if ( v29 == *(uint32_t *)v15 )
        break;
    }
    v10 = *(uint32_t *)(v15 + 8);
    if ( v26 == v10 )
    {
LABEL_11:
      v10 = 255;
      if ( v26 != 256 )
      {
        v11 = (uint32_t *)(*a1 + v27);
        v12 = a2[1];
        if ( v12 == (a2[2] & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)a2, 4, v22);
          v12 = a2[1];
        }
        *(uint32_t *)(*a2 + 4 * v12) = *v11;
        ++a2[1];
        v10 = v26++;
      }
    }
    ++v28;
    *(uint32_t *)(*v24 + v27) = v10;
  }
  while ( v28 != v6 );
LABEL_25:
  if ( a2[1] < (a2[2] & 0x3FFFFFFF) )
    hkArrayUtil::reduce(&hkContainerHeapAllocator::s_alloc, a2, 4, 0, a2[1]);
  result = v34;
  if ( v34 >= 0 )
  {
    v17 = v32;
    v18 = v32 + 4;
    v19 = v32 + 12 * v34 + 16;
    result = v32 + 4;
    do
    {
      v20 = result;
      result += 12;
      *(uint8_t *)(v20 - v17 + v18 - 4) = 0;
    }
    while ( result != v19 );
  }
  v21 = v33 < 0;
  v33 &= 0x80000000;
  if ( !v21 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 12))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v32,
             4 * (3 * v34 + 3));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWeldingViewer::thunk_postSimulationCallback  (binary VA: 0x17e3380)
// Original: `non-virtual thunk to'hkpWeldingViewer::postSimulationCallback
// ----------------------------------------------------------------------------
int hkpWeldingViewer::thunk_postSimulationCallback(hkpWeldingViewer::Self *self, hkpWorld::Self *a2)
{
  return hkpWeldingViewer::postSimulationCallback((hkpWeldingViewer::Self *)((char *)self - 40), a2);
}


