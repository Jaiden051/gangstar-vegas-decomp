#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMoppDef.h"

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::getNumSplittingPlaneDirections  (binary VA: 0x1b06270)
// Original: hkpMoppDefaultAssembler::getNumSplittingPlaneDirections
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::getNumSplittingPlaneDirections()
{
  return 13;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::getSplittingPlaneDirections  (binary VA: 0x1b06280)
// Original: hkpMoppDefaultAssembler::getSplittingPlaneDirections
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::getSplittingPlaneDirections(hkpMoppDefaultAssembler::Self *self)
{
  return *((uint32_t *)self + 16);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::getScaleInfo  (binary VA: 0x1b06290)
// Original: hkpMoppDefaultAssembler::getScaleInfo
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::getScaleInfo(int a1, int a2, float *a3)
{
  int v4; // xmm1_4
  int v5; // xmm2_4

  v4 = *(uint32_t *)(a2 + 28);
  v5 = *(uint32_t *)(a2 + 20);
  *a3 = *(float *)(a2 + 12);
  a3[3] = 0.0;
  *((uint32_t *)a3 + 1) = v5;
  *((uint32_t *)a3 + 2) = v4;
  a3[3] = (float)(254.0
                / fmaxf(
                    fmaxf(
                      fmaxf(0.0, *(float *)(a2 + 16) - *(float *)(a2 + 12)),
                      *(float *)(a2 + 24) - *(float *)(a2 + 20)),
                    *(float *)(a2 + 32) - *(float *)(a2 + 28)))
        * 65536.0;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::Destroy  (binary VA: 0x1b06310)
// Original: hkpMoppDefaultAssembler::~hkpMoppDefaultAssembler
// ----------------------------------------------------------------------------
void hkpMoppDefaultAssembler::Destroy(hkpMoppDefaultAssembler::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B23C8);
  v1 = *((uint32_t *)self + 18);
  *((uint32_t *)self + 17) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 16),
      32 * v1);
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 18) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::Destroy_ea1b06380  (binary VA: 0x1b06380)
// Original: hkpMoppDefaultAssembler::~hkpMoppDefaultAssembler
// ----------------------------------------------------------------------------
void hkpMoppDefaultAssembler::Destroy_ea1b06380(hkpMoppDefaultAssembler::Self *self)
{
  int v1;
  int v2;

  hkpMoppDefaultAssembler::Destroy(self);
  v1 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 128;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::updateParams  (binary VA: 0x1b06710)
// Original: hkpMoppDefaultAssembler::updateParams
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::updateParams(int a1, int a2)
{
  *(uint32_t *)(a1 + 80) = *(uint32_t *)a2;
  *(uint32_t *)(a1 + 84) = *(uint32_t *)(a2 + 4);
  *(uint32_t *)(a1 + 88) = *(uint32_t *)(a2 + 8);
  *(uint32_t *)(a1 + 96) = *(uint32_t *)(a2 + 16);
  *(uint32_t *)(a1 + 100) = *(uint32_t *)(a2 + 20);
  *(uint32_t *)(a1 + 104) = *(uint32_t *)(a2 + 24);
  *(uint32_t *)(a1 + 108) = *(uint32_t *)(a2 + 28);
  *(uint32_t *)(a1 + 112) = *(uint32_t *)(a2 + 32);
  *(uint8_t *)(a1 + 116) = *(uint8_t *)(a2 + 36);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::Construct  (binary VA: 0x1b06760)
// Original: hkpMoppDefaultAssembler::hkpMoppDefaultAssembler
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::Construct(int a1, int a2, int a3, int a4)
{
  uint32_t *v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  float v22; // xmm5_4
  int v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  float *v31;
  __m128i v32;
  float v33; // xmm3_4
  float v34; // xmm2_4
  __m128i v35;
  int v37[8];

  v37[0] = 416;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20B23C8);
  *(uint32_t *)(a1 + 4) = -65535;
  *(uint32_t *)(a1 + 64) = 0;
  *(uint32_t *)(a1 + 68) = 0;
  *(uint32_t *)(a1 + 72) = 0x80000000;
  v4 = (uint32_t *)(*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
                   (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                   v37);
  v5 = v37[0];
  *(uint32_t *)(a1 + 64) = (uint32_t)(uintptr_t)(v4);
  *(uint32_t *)(a1 + 68) = 13;
  v6 = v5 + 31;
  *(uint32_t *)(a1 + 80) = 1056964608;
  *(uint32_t *)(a1 + 84) = 1045220557;
  if ( v5 >= 0 )
    v6 = v5;
  v7 = 0x80000000;
  v8 = v6 >> 5;
  *(uint32_t *)(a1 + 88) = 1065353216;
  *(uint32_t *)(a1 + 112) = 5;
  *(uint32_t *)(a1 + 96) = 1045220557;
  if ( v8 != 0 )
    v7 = v8;
  *(uint32_t *)(a1 + 100) = 1045220557;
  *(uint32_t *)(a1 + 72) = v7;
  *(uint32_t *)(a1 + 104) = 1028443341;
  *(uint32_t *)(a1 + 108) = 0;
  *(uint8_t *)(a1 + 116) = 1;
  *v4 = 1065353216;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v9 = *(uint32_t **)(a1 + 64);
  v10 = 0;
  v9[8] = 0;
  v9[9] = 1065353216;
  v9[10] = 0;
  v9[11] = 0;
  v11 = *(uint32_t **)(a1 + 64);
  v11[16] = 0;
  v11[17] = 0;
  v11[18] = 1065353216;
  v11[19] = 0;
  *(uint32_t *)(*(uint32_t *)(a1 + 64) + 16) = 0;
  *(uint32_t *)(*(uint32_t *)(a1 + 64) + 48) = 0;
  *(uint32_t *)(*(uint32_t *)(a1 + 64) + 80) = 0;
  v12 = *(uint32_t **)(a1 + 64);
  v12[24] = 0;
  v12[25] = 1065353216;
  v12[26] = 1065353216;
  v12[27] = 0;
  v13 = *(uint32_t **)(a1 + 64);
  v13[32] = 1065353216;
  v13[33] = 0;
  v13[34] = 1065353216;
  v13[35] = 0;
  v14 = *(uint32_t **)(a1 + 64);
  v14[40] = 1065353216;
  v14[41] = 1065353216;
  v14[42] = 0;
  v14[43] = 0;
  *(uint32_t *)(*(uint32_t *)(a1 + 64) + 112) = 1045220557;
  *(uint32_t *)(*(uint32_t *)(a1 + 64) + 144) = 1045220557;
  *(uint32_t *)(*(uint32_t *)(a1 + 64) + 176) = 1045220557;
  v15 = *(uint32_t **)(a1 + 64);
  v15[48] = 0;
  v15[49] = 1065353216;
  v15[50] = -1082130432;
  v15[51] = 0;
  v16 = *(uint32_t **)(a1 + 64);
  v16[56] = 1065353216;
  v16[57] = 0;
  v16[58] = -1082130432;
  v16[59] = 0;
  v17 = *(uint32_t **)(a1 + 64);
  v17[64] = 1065353216;
  v17[65] = -1082130432;
  v17[66] = 0;
  v17[67] = 0;
  *(uint32_t *)(*(uint32_t *)(a1 + 64) + 208) = 1048576000;
  *(uint32_t *)(*(uint32_t *)(a1 + 64) + 240) = 1048576000;
  *(uint32_t *)(*(uint32_t *)(a1 + 64) + 272) = 1048576000;
  v18 = *(uint32_t **)(a1 + 64);
  v18[72] = 1065353216;
  v18[73] = 1065353216;
  v18[74] = 1065353216;
  v18[75] = 0;
  v19 = *(uint32_t **)(a1 + 64);
  v19[80] = 1065353216;
  v19[81] = 1065353216;
  v19[82] = -1082130432;
  v19[83] = 0;
  v20 = *(uint32_t **)(a1 + 64);
  v20[88] = 1065353216;
  v20[89] = -1082130432;
  v20[90] = 1065353216;
  v20[91] = 0;
  v21 = *(uint32_t **)(a1 + 64);
  v21[96] = 1065353216;
  v21[97] = -1082130432;
  v21[98] = -1082130432;
  v21[99] = 0;
  *(uint32_t *)(*(uint32_t *)(a1 + 64) + 304) = 1050253722;
  *(uint32_t *)(*(uint32_t *)(a1 + 64) + 336) = 1050924810;
  *(uint32_t *)(*(uint32_t *)(a1 + 64) + 368) = 1050924810;
  *(uint32_t *)(*(uint32_t *)(a1 + 64) + 400) = 1051595899;
  do
  {
    v31 = (float *)(*(uint32_t *)(a1 + 64) + 32 * v10);
g4_m128_raw(v32) = *(unsigned int *)v31;
    v33 = v31[1];
    v35 = v32;
    v34 = v31[2];
    *(float *)g4_m128_ptr<int32_t>(v35) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v32) * *(float *)g4_m128_ptr<int32_t>(v32)) + (float)(v33 * v33))
                            + (float)(v34 * v34);
    if ( *(float *)g4_m128_ptr<int32_t>(v35) > 0.0 )
    {
      v22 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v35);
      v23 = ((_mm_cvtsi128_si32(v35) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v35) >> 1));
      v24 = (float)(*(float *)&v23 * 1.5)
          - (float)((float)(v22 * *(float *)&v23) * (float)(*(float *)&v23 * *(float *)&v23));
      v25 = (float)(v24 * 1.5) - (float)((float)(v22 * v24) * (float)(v24 * v24));
      v26 = (float)(v25 * 1.5) - (float)((float)(v22 * v25) * (float)(v25 * v25));
    }
    else
    {
      v26 = 0.0;
    }
    v27 = *(float *)g4_m128_ptr<int32_t>(v32) * v26;
    v28 = v33 * v26;
    v29 = v34 * v26;
    v30 = v26 * v31[3];
    *v31 = v27;
    v31[1] = v28;
    v31[2] = v29;
    v31[3] = v30;
    *(uint32_t *)(*(uint32_t *)(a1 + 64) + 32 * v10 + 20) = v10;
    ++v10;
  }
  while ( v10 != 13 );
  hkpMoppDefaultAssembler::updateParams(a1, a2);
  *(uint32_t *)(a1 + 16) = a3;
  *(uint32_t *)(a1 + 8) = a4;
  *(uint32_t *)(a1 + 12) = 0;
  return a4;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::releaseNode  (binary VA: 0x1b06c10)
// Original: hkpMoppDefaultAssembler::releaseNode
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::releaseNode(int a1, int a2)
{
  int result;

  if ( *(uint8_t *)(a2 + 4) == 0 && *(uint8_t *)(a1 + 116) != 0 )
  {
    (*(void (**)(uint32_t, uint32_t))(**(uint32_t **)(a1 + 12) + 20))(*(uint32_t *)(a1 + 12), *(uint32_t *)(a2 + 112));
    result = (*(int (**)(uint32_t, uint32_t))(**(uint32_t **)(a1 + 12) + 20))(
               *(uint32_t *)(a1 + 12),
               *(uint32_t *)(a2 + 116));
    *(uint32_t *)(a2 + 112) = 0;
    *(uint32_t *)(a2 + 116) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::shouldAssemble  (binary VA: 0x1b06c80)
// Original: hkpMoppDefaultAssembler::shouldAssemble
// ----------------------------------------------------------------------------
bool * hkpMoppDefaultAssembler::shouldAssemble(bool *a1, int a2, int a3, uint32_t *a4)
{
  bool *result;

  result = a1;
  *a1 = *(int *)(a3 + 8) <= 21 || *a4 > *(uint32_t *)(a2 + 24);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::calcRescaleBits  (binary VA: 0x1b06cb0)
// Original: hkpMoppDefaultAssembler::calcRescaleBits
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::calcRescaleBits(int a1, int a2, int a3)
{
  int result;
  int v4;

  result = *(uint32_t *)(a2 + 36);
  v4 = *(uint32_t *)(a3 + 8) - 8;
  if ( v4 > 0 && result >= result - v4 )
    result -= v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::recalcRescale  (binary VA: 0x1b06ce0)
// Original: hkpMoppDefaultAssembler::recalcRescale
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::recalcRescale(int a1, uint32_t *a2, uint32_t *a3, int a4)
{
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
  int result;
  int i;

  v4 = hkpMoppDefaultAssembler::calcRescaleBits(a1, (int)(uintptr_t)(a2), (int)(uintptr_t)(a3));
  *(uint8_t *)a4 = 0;
  if ( v4 <= 0 )
  {
    a3[9] = a2[9];
    a3[10] = a2[10];
    a3[11] = a2[11];
    result = a2[12];
    a3[12] = result;
  }
  else
  {
    if ( v4 >= 4 )
      v4 = 4;
    for ( i = v4; ; --i )
    {
      a3[9] = a2[9] - i;
      v5 = a2[9];
      v6 = a2[10];
      v7 = (a3[3] - v6) >> v5;
      a3[10] = (v7 << v5) + v6;
      *(uint32_t *)(a4 + 8) = v7;
      if ( (a3[4] - a3[10]) >> a3[9] <= 254 )
      {
        v8 = a2[9];
        v9 = a2[11];
        v10 = (a3[5] - v9) >> v8;
        a3[11] = (v10 << v8) + v9;
        *(uint32_t *)(a4 + 12) = v10;
        if ( (a3[6] - a3[11]) >> a3[9] <= 254 )
        {
          v11 = a2[9];
          v12 = a2[12];
          v13 = (a3[7] - v12) >> v11;
          a3[12] = (v13 << v11) + v12;
          *(uint32_t *)(a4 + 16) = v13;
          if ( (a3[8] - a3[12]) >> a3[9] <= 254 )
            break;
        }
      }
    }
    *(uint32_t *)(a4 + 4) = i;
    *(uint8_t *)a4 = 1;
    return i;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::preCalcScale  (binary VA: 0x1b06e20)
// Original: hkpMoppDefaultAssembler::preCalcScale
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::preCalcScale(int a1, int a2, uint32_t *a3, uint32_t *a4)
{
  int v4;
  float v5; // xmm2_4
  int v6;
  float v7; // xmm1_4
  __m128i v8;
  unsigned int v9;
  char v10;
  int v11;
  int v12;
  int v13;
  __m128i v14;
  unsigned int v15;
  int v16;
  char v17; // di
  int v18;
  char v19; // si
  char v20; // di
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  int result;
  char v26;
  uint32_t *v27;
  float v28; // xmm2_4
  float v29; // xmm1_4
  __m128i v30;
  unsigned int v31;
  int v32;
  unsigned int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  __m128i v38;
  unsigned int v39;
  int v40;
  unsigned int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  unsigned int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  unsigned int v56;
  int v57;
  int v58;
  int v59;
  typedef int _g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef char _g4_t_v64;
  typedef int _g4_t_v65;
  typedef char _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef char _g4_t_v69;
  typedef uint32_t *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef char _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef uint32_t _g4_t_v80[22];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v60)) > _g4_s0 ? (0u + sizeof(_g4_t_v60)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v61)) > _g4_s1 ? (4u + sizeof(_g4_t_v61)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v62)) > _g4_s2 ? (12u + sizeof(_g4_t_v62)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v63)) > _g4_s3 ? (16u + sizeof(_g4_t_v63)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v64)) > _g4_s4 ? (20u + sizeof(_g4_t_v64)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v65)) > _g4_s5 ? (20u + sizeof(_g4_t_v65)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v66)) > _g4_s6 ? (24u + sizeof(_g4_t_v66)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v67)) > _g4_s7 ? (28u + sizeof(_g4_t_v67)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v68)) > _g4_s8 ? (28u + sizeof(_g4_t_v68)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v69)) > _g4_s9 ? (36u + sizeof(_g4_t_v69)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v70)) > _g4_s10 ? (36u + sizeof(_g4_t_v70)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v71)) > _g4_s11 ? (40u + sizeof(_g4_t_v71)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v72)) > _g4_s12 ? (40u + sizeof(_g4_t_v72)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v73)) > _g4_s13 ? (40u + sizeof(_g4_t_v73)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v74)) > _g4_s14 ? (44u + sizeof(_g4_t_v74)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v75)) > _g4_s15 ? (44u + sizeof(_g4_t_v75)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v76)) > _g4_s16 ? (48u + sizeof(_g4_t_v76)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v77)) > _g4_s17 ? (52u + sizeof(_g4_t_v77)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v78)) > _g4_s18 ? (64u + sizeof(_g4_t_v78)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v79)) > _g4_s19 ? (68u + sizeof(_g4_t_v79)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v80)) > _g4_s20 ? (80u + sizeof(_g4_t_v80)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 0u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 4u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 12u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 16u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 20u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 20u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 24u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 28u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 28u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 36u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 36u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 40u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 40u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 40u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 44u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 44u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 48u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 52u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 64u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 68u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 80u);

  v62 = a4[2];
  if ( *(uint8_t *)(a2 + 4) != 0 )
  {
    v4 = a2;
    v5 = *(float *)(a1 + 88);
    v6 = 0;
    while ( 1 )
    {
      if ( *(uint8_t *)(a2 + 57) == 0 )
        *(uint8_t *)(a2 + v6 + 59) = 1;
      v7 = *(float *)(a1 + 96 + 4 * v6);
      if ( v7 <= (float)(*(float *)(v4 + 16) - *(float *)(v4 + 12)) || v5 <= v7 )
        goto LABEL_10;
g4_m128_raw(v8) = *(unsigned int *)(a1 + 60);
      *(float *)g4_m128_ptr<int32_t>(v8) = *(float *)g4_m128_ptr<int32_t>(v8) * v7;
      v71 = _mm_cvtsi128_si32(v8);
      v9 = (v71 & 0x7F800000u) >> 23;
      v67 = v9 - 127;
      v10 = v9 + 106;
      v11 = (int)(v9 - 151) >> 31;
      v64 = v10;
      v66 = ~(uint8_t)v11;
      v69 = v11 & (23 - v67);
      v12 = v71 & ~(((v71 & 0x7FFFFFFF) - 1) >> 31);
      v13 = (v12 & 0x7FFFFF | 0x800000) & (~v11 | (-8388608 >> ((v11 & 0x17) - v69)));
      if ( (~(v67 >> 31) & (((v12 >> 31) | (v13 + v13 - 1)) - v13 + 1)) >> v69 << (v66 & v64) << 7 >= 1 << v62 )
      {
        ++v6;
        v4 += 8;
        v5 = v7;
        if ( v6 == 3 )
        {
LABEL_11:
g4_m128_raw(v14) = 0x3F666666u;
          *(float *)g4_m128_ptr<int32_t>(v14) = (float)(0.9f * *(float *)(a1 + 60)) * v5;
          v15 = (_mm_cvtsi128_si32(v14) & 0x7F800000u) >> 23;
          v16 = v15 - 127;
          v17 = v15 + 106;
          v18 = (int)(v15 - 151) >> 31;
          v74 = v16;
          v19 = v18 & (23 - v16);
          v20 = ~(uint8_t)v18 & v17;
          v21 = _mm_cvtsi128_si32(v14) & ~(((_mm_cvtsi128_si32(v14) & 0x7FFFFFFF) - 1) >> 31);
          v22 = (v21 & 0x7FFFFF | 0x800000) & (~v18 | (-8388608 >> ((v18 & 0x17) - v19)));
          v23 = (~(v74 >> 31) & (((v21 >> 31) | (v22 + v22 - 1)) - v22 + 1)) >> v19 << v20;
          if ( v23 != 0 )
          {
            v24 = 0;
            do
            {
              ++v24;
              v23 >>= 1;
            }
            while ( v23 != 0 );
            result = v24 + 6;
          }
          else
          {
            result = 6;
          }
          if ( result < v62 )
            return v62;
          return result;
        }
      }
      else
      {
        if ( *(uint8_t *)(a2 + 57) == 0 )
          *(uint8_t *)(a2 + v6 + 59) = 2;
LABEL_10:
        ++v6;
        v4 += 8;
        if ( v6 == 3 )
          goto LABEL_11;
      }
    }
  }
  if ( *(uint8_t *)(a2 + 57) != 0 || *a4 >= *(uint32_t *)(a1 + 28) )
  {
    v26 = *(uint8_t *)(a2 + 58);
  }
  else
  {
    if ( hkpMoppDefaultAssembler::calcRescaleBits(a1, (int)(uintptr_t)(a3), (int)(uintptr_t)(a4)) > 2 )
    {
      *(uint8_t *)(a2 + 58) = 1;
      goto LABEL_66;
    }
    v26 = *(uint8_t *)(a2 + 58);
  }
  if ( v26 == 1 )
  {
LABEL_66:
    LOBYTE(v80[0]) = 0;
    hkpMoppDefaultAssembler::recalcRescale(a1, a3, a4, (int)(uintptr_t)(v80));
  }
  v76 = -1;
  v77 = -1;
  v65 = 1;
  v60 = 0x7FFFFFFF;
  v78 = *(uint32_t *)(a2 + 112);
  v79 = *(uint32_t *)(a2 + 116);
  do
  {
    v27 = (uint32_t *)*(&v78 + v65);
    v61 = v27;
    if ( v27 != nullptr )
    {
      std::memcpy(v80, a4, 72);
      v80[14] = v27[10] - v27[9];
      v80[15] = v27[11];
      if ( (int)v27[11] > 0 )
      {
        v80[16] = v27[12];
        v80[17] = v27[13] - v27[12];
      }
      v75 = 0;
      v28 = *(float *)(a1 + 60);
      v70 = v27;
      do
      {
        v29 = *(float *)(a1 + 48 + 4 * v75);
g4_m128_raw(v30) = (unsigned int)v70[3];
        *(float *)g4_m128_ptr<int32_t>(v30) = (float)(*(float *)g4_m128_ptr<int32_t>(v30) - v29) * v28;
        v31 = (_mm_cvtsi128_si32(v30) & 0x7F800000u) >> 23;
        v32 = v31 - 127;
        v33 = v31 - 150;
        v34 = (int)(v31 - 151) >> 31;
        v72 = (int)(~v34 & v33) > 31 ? -1 : ~(uint8_t)v34 & v33;
        v35 = ((uint8_t)(v34 & (23 - v32)) | (uint8_t)-((v34 & (23 - v32)) > 31)) & 0x1F;
        v36 = _mm_cvtsi128_si32(v30) & ~(((_mm_cvtsi128_si32(v30) & 0x7FFFFFFF) - 1) >> 31);
        v37 = ~v34 | (-8388608 >> ((v34 & 0x17) - v35));
        v80[2 * v75 + 3] = ((~(v32 >> 31)
                           & (((v36 >> 31)
                             | ((v37 & (v36 & 0x7FFFFF | 0x800000)) + (v37 & (v36 & 0x7FFFFF | 0x800000)) - 1))
                            - (v37 & (v36 & 0x7FFFFF | 0x800000))
                            + 1)) >> (((v34 & (23 - v32)) > 31 ? -1 : v34 & (23 - v32)) & 0x1F) << v72)
                         - (~(((v35 - 1) | ((v36 & ~v37) - 1) & (v37 + 1)) >> 31) & (v36 >> 31) & 1);
g4_m128_raw(v38) = (unsigned int)v70[4];
        *(float *)g4_m128_ptr<int32_t>(v38) = (float)(*(float *)g4_m128_ptr<int32_t>(v38) - v29) * v28;
        v39 = (_mm_cvtsi128_si32(v38) & 0x7F800000u) >> 23;
        v40 = v39 - 127;
        v41 = v39 - 150;
        v42 = (int)(v39 - 151) >> 31;
        v73 = (int)(~v42 & v41) > 31 ? -1 : ~v42 & v41;
        v43 = ((uint8_t)(v42 & (23 - v40)) | (uint8_t)-((v42 & (23 - v40)) > 31)) & 0x1F;
        v44 = _mm_cvtsi128_si32(v38) & ~(((_mm_cvtsi128_si32(v38) & 0x7FFFFFFF) - 1) >> 31);
        v45 = ~v42 | (-8388608 >> ((v42 & 0x17) - v43));
        v63 = v43 - 1;
        v68 = v44 >> 31;
        v46 = ~(v40 >> 31)
            & (((v44 >> 31) | ((v45 & (v44 & 0x7FFFFF | 0x800000)) + (v45 & (v44 & 0x7FFFFF | 0x800000)) - 1))
             - (v45 & (v44 & 0x7FFFFF | 0x800000))
             + 1);
        LOBYTE(v42) = v43;
        v47 = (v44 & ~v45) - 1;
        v48 = v75++;
        v70 += 2;
        v80[2 * v48 + 4] = (v46 >> v42 << v73) - (~((v63 | v47 & (v45 + 1)) >> 31) & v68 & 1) + 1;
      }
      while ( v75 != 3 );
      v49 = v80[6] - v80[5];
      LOBYTE(v80[1]) = 0;
      v80[0] = *a4 + 1;
      if ( v80[6] - v80[5] < v80[4] - v80[3] )
        v49 = v80[4] - v80[3];
      if ( v49 < v80[8] - v80[7] )
        v49 = v80[8] - v80[7];
      if ( v49 != 0 )
      {
        v50 = v49;
        v51 = 0;
        do
        {
          ++v51;
          v50 >>= 1;
        }
        while ( v50 != 0 );
        v52 = 1 << (v51 - 4);
      }
      else
      {
        v52 = 0;
      }
      v53 = v49 + v52;
      v54 = 3;
      v55 = -1;
      do
      {
        if ( v53 != 0 )
        {
          v56 = v53;
          v57 = 0;
          do
          {
            ++v57;
            v56 >>= 1;
          }
          while ( v56 != 0 );
        }
        else
        {
          v57 = 0;
        }
        if ( v55 < v57 )
          v55 = v57;
        --v54;
      }
      while ( v54 != 0 );
      v58 = 24;
      if ( v55 <= 24 )
        v58 = v55;
      v80[2] = v58;
      *(&v76 + v65) = hkpMoppDefaultAssembler::preCalcScale(a1, (int)(uintptr_t)(v61), a4, v80);
      v59 = v80[2];
      if ( v60 <= v80[2] )
        v59 = v60;
      v60 = v59;
    }
    --v65;
  }
  while ( v65 != -1 );
  result = v62 + 2;
  if ( v60 + 2 <= v62 + 2 )
    result = v60 + 2;
  if ( v78 != 0 )
  {
    if ( *(uint8_t *)(a2 + 57) != 0 )
    {
      if ( *(uint8_t *)(v78 + 57) == 0 && result > v76 )
        goto LABEL_70;
    }
    else if ( v62 > v76 )
    {
LABEL_70:
      *(uint8_t *)(v78 + 58) = 1;
      goto LABEL_56;
    }
    if ( *(uint8_t *)(v78 + 58) == 0 && result > v76 )
      result = v76;
  }
LABEL_56:
  if ( v79 == 0 )
    return result;
  if ( *(uint8_t *)(a2 + 57) == 0 )
  {
    if ( v62 <= v77 )
      goto LABEL_59;
LABEL_68:
    *(uint8_t *)(v79 + 58) = 1;
    return result;
  }
  if ( *(uint8_t *)(v79 + 57) == 0 && v77 < result )
    goto LABEL_68;
LABEL_59:
  if ( *(uint8_t *)(v79 + 58) == 0 && result > v77 )
    return v77;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::fixScale  (binary VA: 0x1b075f0)
// Original: hkpMoppDefaultAssembler::fixScale
// ----------------------------------------------------------------------------
int * hkpMoppDefaultAssembler::fixScale(int a1, int *a2)
{
  int *result;

  for ( result = a2; result != nullptr && *((uint8_t *)result + 57) == 0; result = (int *)*result )
    *((uint8_t *)result + 57) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::calcTermCut  (binary VA: 0x1b07620)
// Original: hkpMoppDefaultAssembler::calcTermCut
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::calcTermCut(int a1, int a2, int a3)
{
  int v3;
  __m128i v4;
  float v5; // xmm0_4
  unsigned int v6;
  int v7;
  char v8; // di
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;
  int result;
  char v15;
  float *v16;
  uint32_t *v17;
  int v18;

  v18 = a2;
  v17 = (uint32_t *)(a2 + 68);
  v3 = a3;
  v16 = (float *)(a1 + 96);
  do
  {
g4_m128_raw(v4) = *(unsigned int *)(a1 + 60);
    v5 = fmaxf((float)(1 << *(uint32_t *)(a3 + 36)) / *(float *)g4_m128_ptr<int32_t>(v4), *(float *)(a1 + 88));
    if ( *v16 > (float)(*(float *)(v18 + 16) - *(float *)(v18 + 12)) )
      v5 = fminf(v5, *v16);
    *(float *)g4_m128_ptr<int32_t>(v4) = *(float *)g4_m128_ptr<int32_t>(v4) * v5;
    v3 += 8;
    v18 += 8;
    v6 = (_mm_cvtsi128_si32(v4) & 0x7F800000u) >> 23;
    v7 = v6 - 127;
    v8 = v6 + 106;
    v9 = (int)(v6 - 151) >> 31;
    v15 = v8;
    v10 = _mm_cvtsi128_si32(v4) & ~(((_mm_cvtsi128_si32(v4) & 0x7FFFFFFF) - 1) >> 31);
    v11 = v17++;
    v12 = (~(v7 >> 31)
         & (((v10 >> 31)
           | (((v10 & 0x7FFFFF | 0x800000) & (~v9 | (-8388608 >> ((v9 & 0x17) - (v9 & (23 - v7))))))
            + ((v10 & 0x7FFFFF | 0x800000) & (~v9 | (-8388608 >> ((v9 & 0x17) - (v9 & (23 - v7))))))
            - 1))
          - ((v10 & 0x7FFFFF | 0x800000) & (~v9 | (-8388608 >> ((v9 & 0x17) - (v9 & (23 - v7))))))
          + 1)) >> (v9 & (23 - v7)) << (~(uint8_t)v9 & v15);
    v13 = *(uint32_t *)(v3 + 8);
    ++v16;
    *v11 = *(uint32_t *)(v3 + 4) - v12;
    result = v13 + v12 + 1;
    v11[3] = result;
  }
  while ( v3 != a3 + 24 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::calcTerminalIdsForChunks  (binary VA: 0x1b07770)
// Original: hkpMoppDefaultAssembler::calcTerminalIdsForChunks
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::calcTerminalIdsForChunks(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  int result;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint32_t *v16;

  v4 = 0;
  v5 = *(uint32_t *)(a2 + 64);
  *(uint8_t *)(a2 + 56) = 0;
  v6 = v5;
  if ( v5 < 0 )
  {
    v4 = a4;
    v6 = a3;
  }
  v14 = v6;
  if ( *(uint32_t *)(*(uint32_t *)(a1 + 20) + 28) != 0 )
    *(uint32_t *)(a2 + 36) = v4;
  if ( *(uint8_t *)(a2 + 4) != 0 )
  {
    if ( *(uint32_t *)(*(uint32_t *)(a1 + 20) + 28) == 0 )
    {
      v11 = v5;
      result = v4;
      goto LABEL_13;
    }
    *(uint32_t *)(*(uint32_t *)(a2 + 96) + 16) = **(uint32_t **)(a2 + 96);
    v7 = *(uint32_t **)(a1 + 20);
    v8 = v7[2];
    if ( v8 == (v7[3] & 0x3FFFFFFF) )
    {
      v16 = *(uint32_t **)(a1 + 20);
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkMemoryAllocator::Self *)(v7 + 1),
        8,
        v13);
      v7 = v16;
      v8 = v16[2];
    }
    v15 = v7[1];
    v7[2] = v8 + 1;
    v9 = (uint32_t *)(v15 + 8 * v8);
    v9[1] = v4 | (v14 << 8);
    *v9 = **(uint32_t **)(a2 + 96);
    result = v4 + 1;
    **(uint32_t **)(a2 + 96) = v4;
  }
  else
  {
    v12 = hkpMoppDefaultAssembler::calcTerminalIdsForChunks(a1, *(uint32_t *)(a2 + 116), v6, v4);
    result = hkpMoppDefaultAssembler::calcTerminalIdsForChunks(a1, *(uint32_t *)(a2 + 112), v14, v12);
  }
  if ( *(uint32_t *)(*(uint32_t *)(a1 + 20) + 28) != 0 )
  {
    *(uint32_t *)(a2 + 36) = 0;
    *(uint32_t *)(a2 + 40) = result;
  }
  v11 = *(uint32_t *)(a2 + 64);
LABEL_13:
  if ( v11 >= 0 )
    return a4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::calcReoffset  (binary VA: 0x1b078c0)
// Original: hkpMoppDefaultAssembler::calcReoffset
// ----------------------------------------------------------------------------
unsigned int hkpMoppDefaultAssembler::calcReoffset(int a1, int a2, int a3, int a4)
{
  unsigned int v4;
  int v5;
  unsigned int result;

  v4 = *(uint32_t *)(a4 + 56);
  *(uint32_t *)(a4 + 52) = *(uint32_t *)(a3 + 52);
  v5 = *(uint32_t *)(a2 + 36);
  result = v5 + v4 - *(uint32_t *)(a3 + 52);
  if ( result <= 0x1F )
    return result;
  if ( v4 <= 2 )
  {
    if ( result <= 0xFF )
      return result;
  }
  else if ( v4 > 0x1F )
  {
    if ( v4 <= 0xFF )
    {
      if ( *(uint32_t *)(a3 + 56) <= 0xFFu )
        return result;
    }
    else if ( v4 > 0xFFFF || *(uint32_t *)(a3 + 56) <= 0xFFFFu )
    {
      return result;
    }
    *(uint32_t *)(a4 + 52) = v5;
    return result;
  }
  if ( *(uint32_t *)(a3 + 56) > 0x1Fu )
    *(uint32_t *)(a4 + 52) = v5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::initTopDown  (binary VA: 0x1b07940)
// Original: hkpMoppDefaultAssembler::initTopDown
// ----------------------------------------------------------------------------
unsigned int hkpMoppDefaultAssembler::initTopDown(int a1, int a2, uint32_t *a3, uint32_t *a4, int a5)
{
  if ( *(uint8_t *)(a2 + 58) == 1 )
    hkpMoppDefaultAssembler::recalcRescale(a1, a3, a4, a5);
  return hkpMoppDefaultAssembler::calcReoffset(a1, a2, (int)(uintptr_t)(a3), (int)(uintptr_t)(a4));
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::addProperty  (binary VA: 0x1b079b0)
// Original: hkpMoppDefaultAssembler::addProperty
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::addProperty(hkpMoppDefaultAssembler::Self *self, char a2, int a3)
{
  char v3; // bp
  hkpMoppCodeGenerator::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  char v14;
  int v15;
  int v16;
  int result;
  bool v18; // cc
  int v19;
  int v20;

  if ( a3 < 0 )
    goto LABEL_4;
  if ( a3 > 255 )
  {
    if ( a3 <= 0xFFFF )
    {
      v3 = a2 + 100;
      v4 = *((hkpMoppCodeGenerator::Self **)self + 4);
      *(uint8_t *)(*((uint32_t *)v4 + 4) + *((uint32_t *)v4 + 2) - *((uint32_t *)v4 + 3) - 1) = a3;
      v19 = *((uint32_t *)v4 + 3) + 1;
      v20 = *((uint32_t *)v4 + 2);
      *((uint32_t *)v4 + 3) = v19;
      v11 = a3 >> 8;
      if ( v19 >= v20 )
      {
        hkpMoppCodeGenerator::resize(v4);
        v12 = *((uint32_t *)v4 + 2) - *((uint32_t *)v4 + 3);
      }
      else
      {
        v12 = v20 - v19;
      }
      v13 = *((uint32_t *)v4 + 4);
LABEL_11:
      v14 = v11;
      goto LABEL_12;
    }
LABEL_4:
    v3 = a2 + 104;
    v4 = *((hkpMoppCodeGenerator::Self **)self + 4);
    *(uint8_t *)(*((uint32_t *)v4 + 4) + *((uint32_t *)v4 + 2) - *((uint32_t *)v4 + 3) - 1) = a3;
    v5 = *((uint32_t *)v4 + 3) + 1;
    v6 = *((uint32_t *)v4 + 2);
    *((uint32_t *)v4 + 3) = v5;
    if ( v5 >= v6 )
    {
      hkpMoppCodeGenerator::resize(v4);
      v6 = *((uint32_t *)v4 + 2);
      v5 = *((uint32_t *)v4 + 3);
    }
    *(uint8_t *)(*((uint32_t *)v4 + 4) + v6 - v5 - 1) = BYTE1(a3);
    v7 = *((uint32_t *)v4 + 3) + 1;
    v8 = *((uint32_t *)v4 + 2);
    *((uint32_t *)v4 + 3) = v7;
    if ( v7 >= v8 )
    {
      hkpMoppCodeGenerator::resize(v4);
      v8 = *((uint32_t *)v4 + 2);
      v7 = *((uint32_t *)v4 + 3);
    }
    *(uint8_t *)(*((uint32_t *)v4 + 4) + v8 - v7 - 1) = BYTE2(a3);
    v9 = *((uint32_t *)v4 + 3) + 1;
    v10 = *((uint32_t *)v4 + 2);
    *((uint32_t *)v4 + 3) = v9;
    v11 = HIBYTE(a3);
    if ( v9 >= v10 )
    {
      hkpMoppCodeGenerator::resize(v4);
      v12 = *((uint32_t *)v4 + 2) - *((uint32_t *)v4 + 3);
    }
    else
    {
      v12 = v10 - v9;
    }
    v13 = *((uint32_t *)v4 + 4);
    goto LABEL_11;
  }
  v3 = a2 + 96;
  v14 = a3;
  v4 = *((hkpMoppCodeGenerator::Self **)self + 4);
  v12 = *((uint32_t *)v4 + 4);
  v13 = *((uint32_t *)v4 + 2) - *((uint32_t *)v4 + 3);
LABEL_12:
  *(uint8_t *)(v13 + v12 - 1) = v14;
  v15 = *((uint32_t *)v4 + 3) + 1;
  v16 = *((uint32_t *)v4 + 2);
  *((uint32_t *)v4 + 3) = v15;
  if ( v15 >= v16 )
  {
    hkpMoppCodeGenerator::resize(v4);
    v16 = *((uint32_t *)v4 + 2);
    v15 = *((uint32_t *)v4 + 3);
  }
  *(uint8_t *)(*((uint32_t *)v4 + 4) + v16 - v15 - 1) = v3;
  result = *((uint32_t *)v4 + 3) + 1;
  v18 = result < *((uint32_t *)v4 + 2);
  *((uint32_t *)v4 + 3) = result;
  if ( !v18 )
    return hkpMoppCodeGenerator::resize(v4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::addJumpChunk  (binary VA: 0x1b07b80)
// Original: hkpMoppDefaultAssembler::addJumpChunk
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::addJumpChunk(hkpMoppDefaultAssembler::Self *self, int a2)
{
  hkpMoppCodeGenerator::Self *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  bool v12; // cc

  v2 = *((hkpMoppCodeGenerator::Self **)self + 4);
  *(uint8_t *)(*((uint32_t *)v2 + 4) + *((uint32_t *)v2 + 2) - *((uint32_t *)v2 + 3) - 1) = a2;
  v3 = *((uint32_t *)v2 + 3) + 1;
  v4 = *((uint32_t *)v2 + 2);
  *((uint32_t *)v2 + 3) = v3;
  if ( v3 >= v4 )
  {
    hkpMoppCodeGenerator::resize(v2);
    v4 = *((uint32_t *)v2 + 2);
    v3 = *((uint32_t *)v2 + 3);
  }
  *(uint8_t *)(*((uint32_t *)v2 + 4) + v4 - v3 - 1) = BYTE1(a2);
  v5 = *((uint32_t *)v2 + 3) + 1;
  v6 = *((uint32_t *)v2 + 2);
  *((uint32_t *)v2 + 3) = v5;
  if ( v5 >= v6 )
  {
    hkpMoppCodeGenerator::resize(v2);
    v6 = *((uint32_t *)v2 + 2);
    v5 = *((uint32_t *)v2 + 3);
  }
  *(uint8_t *)(*((uint32_t *)v2 + 4) + v6 - v5 - 1) = BYTE2(a2);
  v7 = *((uint32_t *)v2 + 3) + 1;
  v8 = *((uint32_t *)v2 + 2);
  *((uint32_t *)v2 + 3) = v7;
  if ( v7 >= v8 )
  {
    hkpMoppCodeGenerator::resize(v2);
    v8 = *((uint32_t *)v2 + 2);
    v7 = *((uint32_t *)v2 + 3);
  }
  *(uint8_t *)(*((uint32_t *)v2 + 4) + v8 - v7 - 1) = HIBYTE(a2);
  v9 = *((uint32_t *)v2 + 3) + 1;
  v10 = *((uint32_t *)v2 + 2);
  *((uint32_t *)v2 + 3) = v9;
  if ( v9 >= v10 )
  {
    hkpMoppCodeGenerator::resize(v2);
    v10 = *((uint32_t *)v2 + 2);
    v9 = *((uint32_t *)v2 + 3);
  }
  *(uint8_t *)(*((uint32_t *)v2 + 4) + v10 - v9 - 1) = 112;
  v11 = *((uint32_t *)v2 + 3) + 1;
  v12 = v11 < *((uint32_t *)v2 + 2);
  *((uint32_t *)v2 + 3) = v11;
  if ( !v12 )
    hkpMoppCodeGenerator::resize(v2);
  return 5;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::addDataOffset  (binary VA: 0x1b07c80)
// Original: hkpMoppDefaultAssembler::addDataOffset
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::addDataOffset(hkpMoppDefaultAssembler::Self *self, int16_t a2, int16_t a3)
{
  char v3;
  hkpMoppCodeGenerator::Self *v4;
  int v5;
  bool v6; // cc
  hkpMoppCodeGenerator::Self *v7;
  int v8;
  hkpMoppCodeGenerator::Self *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  v3 = HIBYTE(a3);
  v4 = *((hkpMoppCodeGenerator::Self **)self + 4);
  *(uint8_t *)(*((uint32_t *)v4 + 4) + *((uint32_t *)v4 + 2) - *((uint32_t *)v4 + 3) - 1) = a3;
  v5 = *((uint32_t *)v4 + 3) + 1;
  v6 = v5 < *((uint32_t *)v4 + 2);
  *((uint32_t *)v4 + 3) = v5;
  if ( !v6 )
  {
    hkpMoppCodeGenerator::resize(v4);
    v3 = HIBYTE(a3);
  }
  v7 = *((hkpMoppCodeGenerator::Self **)self + 4);
  *(uint8_t *)(*((uint32_t *)v7 + 4) + *((uint32_t *)v7 + 2) - *((uint32_t *)v7 + 3) - 1) = v3;
  v8 = *((uint32_t *)v7 + 3) + 1;
  v6 = v8 < *((uint32_t *)v7 + 2);
  *((uint32_t *)v7 + 3) = v8;
  if ( !v6 )
    hkpMoppCodeGenerator::resize(v7);
  v9 = *((hkpMoppCodeGenerator::Self **)self + 4);
  *(uint8_t *)(*((uint32_t *)v9 + 4) + *((uint32_t *)v9 + 2) - *((uint32_t *)v9 + 3) - 1) = a2;
  v10 = *((uint32_t *)v9 + 3) + 1;
  v11 = *((uint32_t *)v9 + 2);
  *((uint32_t *)v9 + 3) = v10;
  if ( v10 >= v11 )
  {
    hkpMoppCodeGenerator::resize(v9);
    v11 = *((uint32_t *)v9 + 2);
    v10 = *((uint32_t *)v9 + 3);
  }
  *(uint8_t *)(*((uint32_t *)v9 + 4) + v11 - v10 - 1) = HIBYTE(a2);
  v12 = *((uint32_t *)v9 + 3) + 1;
  v13 = *((uint32_t *)v9 + 2);
  *((uint32_t *)v9 + 3) = v12;
  if ( v12 >= v13 )
  {
    hkpMoppCodeGenerator::resize(v9);
    v13 = *((uint32_t *)v9 + 2);
    v12 = *((uint32_t *)v9 + 3);
  }
  *(uint8_t *)(*((uint32_t *)v9 + 4) + v13 - v12 - 1) = 13;
  v14 = *((uint32_t *)v9 + 3) + 1;
  v6 = v14 < *((uint32_t *)v9 + 2);
  *((uint32_t *)v9 + 3) = v14;
  if ( !v6 )
    hkpMoppCodeGenerator::resize(v9);
  return 5;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::addRescale  (binary VA: 0x1b07d90)
// Original: hkpMoppDefaultAssembler::addRescale
// ----------------------------------------------------------------------------
hkpMoppCodeGenerator::Self * hkpMoppDefaultAssembler::addRescale(int a1, uint32_t *a2)
{
  hkpMoppCodeGenerator::Self *v2;
  int v3;
  bool v4; // cc
  hkpMoppCodeGenerator::Self *v5;
  int v6;
  hkpMoppCodeGenerator::Self *v7;
  int v8;
  hkpMoppCodeGenerator::Self *result;
  int v10;

  v2 = *(hkpMoppCodeGenerator::Self **)(a1 + 16);
  *(uint8_t *)(*((uint32_t *)v2 + 4) + *((uint32_t *)v2 + 2) - *((uint32_t *)v2 + 3) - 1) = a2[4];
  v3 = *((uint32_t *)v2 + 3) + 1;
  v4 = v3 < *((uint32_t *)v2 + 2);
  *((uint32_t *)v2 + 3) = v3;
  if ( !v4 )
    hkpMoppCodeGenerator::resize(v2);
  v5 = *(hkpMoppCodeGenerator::Self **)(a1 + 16);
  *(uint8_t *)(*((uint32_t *)v5 + 4) + *((uint32_t *)v5 + 2) - *((uint32_t *)v5 + 3) - 1) = a2[3];
  v6 = *((uint32_t *)v5 + 3) + 1;
  v4 = v6 < *((uint32_t *)v5 + 2);
  *((uint32_t *)v5 + 3) = v6;
  if ( !v4 )
    hkpMoppCodeGenerator::resize(v5);
  v7 = *(hkpMoppCodeGenerator::Self **)(a1 + 16);
  *(uint8_t *)(*((uint32_t *)v7 + 4) + *((uint32_t *)v7 + 2) - *((uint32_t *)v7 + 3) - 1) = a2[2];
  v8 = *((uint32_t *)v7 + 3) + 1;
  v4 = v8 < *((uint32_t *)v7 + 2);
  *((uint32_t *)v7 + 3) = v8;
  if ( !v4 )
    hkpMoppCodeGenerator::resize(v7);
  result = *(hkpMoppCodeGenerator::Self **)(a1 + 16);
  *(uint8_t *)(*((uint32_t *)result + 4) + *((uint32_t *)result + 2) - *((uint32_t *)result + 3) - 1) = a2[1];
  v10 = *((uint32_t *)result + 3) + 1;
  v4 = v10 < *((uint32_t *)result + 2);
  *((uint32_t *)result + 3) = v10;
  if ( !v4 )
    return (hkpMoppCodeGenerator::Self *)hkpMoppCodeGenerator::resize(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::addTermIdOffset  (binary VA: 0x1b07e60)
// Original: hkpMoppDefaultAssembler::addTermIdOffset
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::addTermIdOffset(hkpMoppDefaultAssembler::Self *self, unsigned int a2)
{
  hkpMoppCodeGenerator::Self *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;
  bool v12; // cc
  int v13;
  int v14;

  v2 = *((hkpMoppCodeGenerator::Self **)self + 4);
  *(uint8_t *)(*((uint32_t *)v2 + 4) + *((uint32_t *)v2 + 2) - *((uint32_t *)v2 + 3) - 1) = a2;
  v3 = *((uint32_t *)v2 + 3) + 1;
  *((uint32_t *)v2 + 3) = v3;
  v4 = *((uint32_t *)v2 + 2);
  if ( a2 <= 0xFF )
  {
    if ( v3 >= v4 )
    {
      hkpMoppCodeGenerator::resize(v2);
      v4 = *((uint32_t *)v2 + 2);
      v3 = *((uint32_t *)v2 + 3);
    }
    *(uint8_t *)(*((uint32_t *)v2 + 4) + v4 - v3 - 1) = 9;
  }
  else if ( a2 <= 0xFFFF )
  {
    if ( v3 >= v4 )
    {
      hkpMoppCodeGenerator::resize(v2);
      v4 = *((uint32_t *)v2 + 2);
      v3 = *((uint32_t *)v2 + 3);
    }
    *(uint8_t *)(*((uint32_t *)v2 + 4) + v4 - v3 - 1) = BYTE1(a2);
    v13 = *((uint32_t *)v2 + 3) + 1;
    v14 = *((uint32_t *)v2 + 2);
    *((uint32_t *)v2 + 3) = v13;
    if ( v13 >= v14 )
    {
      hkpMoppCodeGenerator::resize(v2);
      *(uint8_t *)(*((uint32_t *)v2 + 4) + *((uint32_t *)v2 + 2) - *((uint32_t *)v2 + 3) - 1) = 10;
    }
    else
    {
      *(uint8_t *)(*((uint32_t *)v2 + 4) + v14 - v13 - 1) = 10;
    }
  }
  else
  {
    if ( v3 >= v4 )
    {
      hkpMoppCodeGenerator::resize(v2);
      v4 = *((uint32_t *)v2 + 2);
      v3 = *((uint32_t *)v2 + 3);
    }
    *(uint8_t *)(*((uint32_t *)v2 + 4) + v4 - v3 - 1) = BYTE1(a2);
    v5 = *((uint32_t *)v2 + 3) + 1;
    v6 = *((uint32_t *)v2 + 2);
    *((uint32_t *)v2 + 3) = v5;
    if ( v5 >= v6 )
    {
      hkpMoppCodeGenerator::resize(v2);
      v6 = *((uint32_t *)v2 + 2);
      v5 = *((uint32_t *)v2 + 3);
    }
    *(uint8_t *)(*((uint32_t *)v2 + 4) + v6 - v5 - 1) = BYTE2(a2);
    v7 = *((uint32_t *)v2 + 3) + 1;
    v8 = *((uint32_t *)v2 + 2);
    *((uint32_t *)v2 + 3) = v7;
    if ( v7 >= v8 )
    {
      hkpMoppCodeGenerator::resize(v2);
      v8 = *((uint32_t *)v2 + 2);
      v7 = *((uint32_t *)v2 + 3);
    }
    *(uint8_t *)(*((uint32_t *)v2 + 4) + v8 - v7 - 1) = HIBYTE(a2);
    v9 = *((uint32_t *)v2 + 3) + 1;
    v10 = *((uint32_t *)v2 + 2);
    *((uint32_t *)v2 + 3) = v9;
    if ( v9 >= v10 )
    {
      hkpMoppCodeGenerator::resize(v2);
      v10 = *((uint32_t *)v2 + 2);
      v9 = *((uint32_t *)v2 + 3);
    }
    *(uint8_t *)(*((uint32_t *)v2 + 4) + v10 - v9 - 1) = 11;
  }
  result = *((uint32_t *)v2 + 3) + 1;
  v12 = result < *((uint32_t *)v2 + 2);
  *((uint32_t *)v2 + 3) = result;
  if ( !v12 )
    return hkpMoppCodeGenerator::resize(v2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::addCut  (binary VA: 0x1b07ff0)
// Original: hkpMoppDefaultAssembler::addCut
// ----------------------------------------------------------------------------
hkpMoppCodeGenerator::Self * hkpMoppDefaultAssembler::addCut(int a1, int a2, int a3)
{
  int v3;
  int v4;
  hkpMoppCodeGenerator::Self *result;
  hkpMoppCodeGenerator::Self *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  bool v12; // cc
  hkpMoppCodeGenerator::Self *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  hkpMoppCodeGenerator::Self *v23;
  int v24;
  hkpMoppCodeGenerator::Self *v25;
  int v26;
  hkpMoppCodeGenerator::Self *v27;
  int v28;
  int v29;
  int v30;
  int v31;

  v3 = 0;
  v4 = a3;
  do
  {
    result = (hkpMoppCodeGenerator::Self *)*(uint8_t *)(a2 + v3 + 59);
    if ( (uint8_t)(uintptr_t)result == 1 )
    {
      v20 = *(uint32_t *)(a3 + 4 * v3 + 40);
      v21 = *(uint32_t *)(v4 + 16) - v20;
      v22 = *(uint32_t *)(a3 + 36);
      v30 = (*(uint32_t *)(v4 + 12) - v20) >> v22;
      v23 = *(hkpMoppCodeGenerator::Self **)(a1 + 16);
      *(uint8_t *)(*((uint32_t *)v23 + 4) + *((uint32_t *)v23 + 2) - *((uint32_t *)v23 + 3) - 1) = (v21 >> v22) + 1;
      v24 = *((uint32_t *)v23 + 3) + 1;
      v12 = v24 < *((uint32_t *)v23 + 2);
      *((uint32_t *)v23 + 3) = v24;
      if ( !v12 )
        hkpMoppCodeGenerator::resize(v23);
      v25 = *(hkpMoppCodeGenerator::Self **)(a1 + 16);
      *(uint8_t *)(*((uint32_t *)v25 + 4) + *((uint32_t *)v25 + 2) - *((uint32_t *)v25 + 3) - 1) = v30;
      v26 = *((uint32_t *)v25 + 3) + 1;
      v12 = v26 < *((uint32_t *)v25 + 2);
      *((uint32_t *)v25 + 3) = v26;
      if ( !v12 )
        hkpMoppCodeGenerator::resize(v25);
      v27 = *(hkpMoppCodeGenerator::Self **)(a1 + 16);
      *(uint8_t *)(*((uint32_t *)v27 + 4) + *((uint32_t *)v27 + 2) - *((uint32_t *)v27 + 3) - 1) = v3 + 38;
      v28 = *((uint32_t *)v27 + 3) + 1;
      v12 = v28 < *((uint32_t *)v27 + 2);
      *((uint32_t *)v27 + 3) = v28;
      if ( !v12 )
        hkpMoppCodeGenerator::resize(v27);
      result = (hkpMoppCodeGenerator::Self *)*(uint8_t *)(a2 + v3 + 59);
    }
    if ( (uint8_t)(uintptr_t)result == 2 )
    {
      v29 = *(uint32_t *)(v4 + 12);
      v31 = *(uint32_t *)(v4 + 16) + 1;
      v6 = *(hkpMoppCodeGenerator::Self **)(a1 + 16);
      *(uint8_t *)(*((uint32_t *)v6 + 4) + *((uint32_t *)v6 + 2) - *((uint32_t *)v6 + 3) - 1) = v31;
      v7 = *((uint32_t *)v6 + 2);
      v8 = *((uint32_t *)v6 + 3) + 1;
      *((uint32_t *)v6 + 3) = v8;
      if ( v8 >= v7 )
      {
        hkpMoppCodeGenerator::resize(v6);
        v7 = *((uint32_t *)v6 + 2);
        v8 = *((uint32_t *)v6 + 3);
      }
      *(uint8_t *)(*((uint32_t *)v6 + 4) + v7 - v8 - 1) = BYTE1(v31);
      v9 = *((uint32_t *)v6 + 3) + 1;
      v10 = *((uint32_t *)v6 + 2);
      *((uint32_t *)v6 + 3) = v9;
      if ( v9 >= v10 )
      {
        hkpMoppCodeGenerator::resize(v6);
        v10 = *((uint32_t *)v6 + 2);
        v9 = *((uint32_t *)v6 + 3);
      }
      *(uint8_t *)(*((uint32_t *)v6 + 4) + v10 - v9 - 1) = BYTE2(v31);
      v11 = *((uint32_t *)v6 + 3) + 1;
      v12 = v11 < *((uint32_t *)v6 + 2);
      *((uint32_t *)v6 + 3) = v11;
      if ( !v12 )
        hkpMoppCodeGenerator::resize(v6);
      v13 = *(hkpMoppCodeGenerator::Self **)(a1 + 16);
      *(uint8_t *)(*((uint32_t *)v13 + 4) + *((uint32_t *)v13 + 2) - *((uint32_t *)v13 + 3) - 1) = v29;
      v14 = *((uint32_t *)v13 + 2);
      v15 = *((uint32_t *)v13 + 3) + 1;
      *((uint32_t *)v13 + 3) = v15;
      if ( v15 >= v14 )
      {
        hkpMoppCodeGenerator::resize(v13);
        v14 = *((uint32_t *)v13 + 2);
        v15 = *((uint32_t *)v13 + 3);
      }
      *(uint8_t *)(*((uint32_t *)v13 + 4) + v14 - v15 - 1) = BYTE1(v29);
      v16 = *((uint32_t *)v13 + 3) + 1;
      v17 = *((uint32_t *)v13 + 2);
      *((uint32_t *)v13 + 3) = v16;
      if ( v16 >= v17 )
      {
        hkpMoppCodeGenerator::resize(v13);
        v17 = *((uint32_t *)v13 + 2);
        v16 = *((uint32_t *)v13 + 3);
      }
      *(uint8_t *)(*((uint32_t *)v13 + 4) + v17 - v16 - 1) = BYTE2(v29);
      v18 = *((uint32_t *)v13 + 3) + 1;
      v12 = v18 < *((uint32_t *)v13 + 2);
      *((uint32_t *)v13 + 3) = v18;
      if ( !v12 )
        hkpMoppCodeGenerator::resize(v13);
      result = *(hkpMoppCodeGenerator::Self **)(a1 + 16);
      *(uint8_t *)(*((uint32_t *)result + 4) + *((uint32_t *)result + 2) - *((uint32_t *)result + 3) - 1) = v3 + 41;
      v19 = *((uint32_t *)result + 3) + 1;
      v12 = v19 < *((uint32_t *)result + 2);
      *((uint32_t *)result + 3) = v19;
      if ( !v12 )
        result = (hkpMoppCodeGenerator::Self *)hkpMoppCodeGenerator::resize(result);
    }
    ++v3;
    v4 += 8;
  }
  while ( v3 != 3 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::checkAndAddProperties  (binary VA: 0x1b08260)
// Original: hkpMoppDefaultAssembler::checkAndAddProperties
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::checkAndAddProperties(hkpMoppDefaultAssembler::Self *a1, uint32_t *a2, int a3, int a4)
{
  int result;

  result = a4;
  if ( *a2 != 0 )
  {
    if ( *(uint32_t *)(a4 + 68) != 0 || *(uint32_t *)(a3 + 68) == 0 )
      return result;
    result = *(uint32_t *)(a4 + 64);
    return hkpMoppDefaultAssembler::addProperty(a1, 0, result);
  }
  if ( *(uint32_t *)(a4 + 68) == 0 )
  {
    result = *(uint32_t *)(a4 + 64);
    if ( result != 0 )
      return hkpMoppDefaultAssembler::addProperty(a1, 0, result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::addTerminals  (binary VA: 0x1b082d0)
// Original: hkpMoppDefaultAssembler::addTerminals
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::addTerminals(hkpMoppDefaultAssembler::Self *a1, int a2, int a3, int a4)
{
  hkpMoppCodeGenerator::Self *v4;
  unsigned int v5;
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
  bool v17; // cc
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;

  v4 = *((hkpMoppCodeGenerator::Self **)a1 + 4);
  v29 = *((uint32_t *)v4 + 3);
  v5 = **(uint32_t **)(a2 + 96) - *(uint32_t *)(a4 + 52);
  v6 = *((uint32_t *)v4 + 2) - v29;
  if ( v5 <= 0x1F )
  {
    *(uint8_t *)(*((uint32_t *)v4 + 4) + v6 - 1) = v5 + 48;
  }
  else
  {
    *(uint8_t *)(*((uint32_t *)v4 + 4) + v6 - 1) = v5;
    v7 = *((uint32_t *)v4 + 3);
    if ( v5 <= 0xFF )
    {
      v19 = v7 + 1;
      v20 = *((uint32_t *)v4 + 2);
      *((uint32_t *)v4 + 3) = v19;
      if ( v19 >= v20 )
      {
        hkpMoppCodeGenerator::resize(v4);
        v20 = *((uint32_t *)v4 + 2);
        v19 = *((uint32_t *)v4 + 3);
      }
      *(uint8_t *)(*((uint32_t *)v4 + 4) + v20 - v19 - 1) = 80;
    }
    else if ( v5 <= 0xFFFF )
    {
      v25 = v7 + 1;
      v26 = *((uint32_t *)v4 + 2);
      *((uint32_t *)v4 + 3) = v25;
      if ( v25 >= v26 )
      {
        hkpMoppCodeGenerator::resize(v4);
        v26 = *((uint32_t *)v4 + 2);
        v25 = *((uint32_t *)v4 + 3);
      }
      *(uint8_t *)(*((uint32_t *)v4 + 4) + v26 - v25 - 1) = BYTE1(v5);
      v27 = *((uint32_t *)v4 + 3) + 1;
      v28 = *((uint32_t *)v4 + 2);
      *((uint32_t *)v4 + 3) = v27;
      if ( v27 >= v28 )
      {
        hkpMoppCodeGenerator::resize(v4);
        v28 = *((uint32_t *)v4 + 2);
        v27 = *((uint32_t *)v4 + 3);
      }
      *(uint8_t *)(*((uint32_t *)v4 + 4) + v28 - v27 - 1) = 81;
    }
    else
    {
      v8 = *((uint32_t *)v4 + 2);
      v9 = *((uint32_t *)v4 + 3) + 1;
      *((uint32_t *)v4 + 3) = v9;
      if ( v5 <= 0xFFFFFF )
      {
        if ( v9 >= v8 )
        {
          hkpMoppCodeGenerator::resize(v4);
          v8 = *((uint32_t *)v4 + 2);
          v9 = *((uint32_t *)v4 + 3);
        }
        *(uint8_t *)(*((uint32_t *)v4 + 4) + v8 - v9 - 1) = BYTE1(v5);
        v21 = *((uint32_t *)v4 + 3) + 1;
        v22 = *((uint32_t *)v4 + 2);
        *((uint32_t *)v4 + 3) = v21;
        if ( v21 >= v22 )
        {
          hkpMoppCodeGenerator::resize(v4);
          v22 = *((uint32_t *)v4 + 2);
          v21 = *((uint32_t *)v4 + 3);
        }
        *(uint8_t *)(*((uint32_t *)v4 + 4) + v22 - v21 - 1) = BYTE2(v5);
        v23 = *((uint32_t *)v4 + 3) + 1;
        v24 = *((uint32_t *)v4 + 2);
        *((uint32_t *)v4 + 3) = v23;
        if ( v23 >= v24 )
        {
          hkpMoppCodeGenerator::resize(v4);
          v24 = *((uint32_t *)v4 + 2);
          v23 = *((uint32_t *)v4 + 3);
        }
        *(uint8_t *)(*((uint32_t *)v4 + 4) + v24 - v23 - 1) = 82;
      }
      else
      {
        if ( v9 >= v8 )
        {
          hkpMoppCodeGenerator::resize(v4);
          v8 = *((uint32_t *)v4 + 2);
          v9 = *((uint32_t *)v4 + 3);
        }
        *(uint8_t *)(*((uint32_t *)v4 + 4) + v8 - v9 - 1) = BYTE1(v5);
        v10 = *((uint32_t *)v4 + 2);
        v11 = *((uint32_t *)v4 + 3) + 1;
        *((uint32_t *)v4 + 3) = v11;
        if ( v11 >= v10 )
        {
          hkpMoppCodeGenerator::resize(v4);
          v10 = *((uint32_t *)v4 + 2);
          v11 = *((uint32_t *)v4 + 3);
        }
        *(uint8_t *)(*((uint32_t *)v4 + 4) + v10 - v11 - 1) = BYTE2(v5);
        v12 = *((uint32_t *)v4 + 3) + 1;
        v13 = *((uint32_t *)v4 + 2);
        *((uint32_t *)v4 + 3) = v12;
        if ( v12 >= v13 )
        {
          hkpMoppCodeGenerator::resize(v4);
          v13 = *((uint32_t *)v4 + 2);
          v12 = *((uint32_t *)v4 + 3);
        }
        *(uint8_t *)(*((uint32_t *)v4 + 4) + v13 - v12 - 1) = HIBYTE(v5);
        v14 = *((uint32_t *)v4 + 3) + 1;
        v15 = *((uint32_t *)v4 + 2);
        *((uint32_t *)v4 + 3) = v14;
        if ( v14 >= v15 )
        {
          hkpMoppCodeGenerator::resize(v4);
          v15 = *((uint32_t *)v4 + 2);
          v14 = *((uint32_t *)v4 + 3);
        }
        *(uint8_t *)(*((uint32_t *)v4 + 4) + v15 - v14 - 1) = 83;
      }
    }
  }
  v16 = *((uint32_t *)v4 + 3) + 1;
  v17 = v16 < *((uint32_t *)v4 + 2);
  *((uint32_t *)v4 + 3) = v16;
  if ( !v17 )
    hkpMoppCodeGenerator::resize(v4);
  if ( *(int *)(a2 + 44) > 0 && *(uint32_t *)(a2 + 48) != 0 && *(uint32_t *)(a3 + 68) != 0 )
    hkpMoppDefaultAssembler::addProperty(a1, 0, *(uint32_t *)(a2 + 48));
  return *(uint32_t *)(*((uint32_t *)a1 + 4) + 12) - v29;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::addJump  (binary VA: 0x1b08580)
// Original: hkpMoppDefaultAssembler::addJump
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::addJump(hkpMoppDefaultAssembler::Self *self, unsigned int a2)
{
  hkpMoppCodeGenerator::Self *v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  bool v13; // cc
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;

  v2 = *((hkpMoppCodeGenerator::Self **)self + 4);
  result = *((uint32_t *)v2 + 3);
  v4 = result - a2;
  if ( (int)(result - a2) > 0 )
  {
    *(uint8_t *)(*((uint32_t *)v2 + 4) + *((uint32_t *)v2 + 2) - result - 1) = v4;
    v5 = *((uint32_t *)v2 + 3) + 1;
    *((uint32_t *)v2 + 3) = v5;
    v6 = *((uint32_t *)v2 + 2);
    if ( v4 <= 254 )
    {
      if ( v5 >= v6 )
      {
        hkpMoppCodeGenerator::resize(v2);
        v6 = *((uint32_t *)v2 + 2);
        v5 = *((uint32_t *)v2 + 3);
      }
      *(uint8_t *)(*((uint32_t *)v2 + 4) + v6 - v5 - 1) = 5;
    }
    else if ( v4 <= 65534 )
    {
      if ( v5 >= v6 )
      {
        hkpMoppCodeGenerator::resize(v2);
        v6 = *((uint32_t *)v2 + 2);
        v5 = *((uint32_t *)v2 + 3);
      }
      *(uint8_t *)(*((uint32_t *)v2 + 4) + v6 - v5 - 1) = BYTE1(v4);
      v18 = *((uint32_t *)v2 + 3) + 1;
      v19 = *((uint32_t *)v2 + 2);
      *((uint32_t *)v2 + 3) = v18;
      if ( v18 >= v19 )
      {
        hkpMoppCodeGenerator::resize(v2);
        v19 = *((uint32_t *)v2 + 2);
        v18 = *((uint32_t *)v2 + 3);
      }
      *(uint8_t *)(*((uint32_t *)v2 + 4) + v19 - v18 - 1) = 6;
    }
    else if ( v4 <= 16777214 )
    {
      if ( v5 >= v6 )
      {
        hkpMoppCodeGenerator::resize(v2);
        v6 = *((uint32_t *)v2 + 2);
        v5 = *((uint32_t *)v2 + 3);
      }
      *(uint8_t *)(*((uint32_t *)v2 + 4) + v6 - v5 - 1) = BYTE1(v4);
      v14 = *((uint32_t *)v2 + 3) + 1;
      v15 = *((uint32_t *)v2 + 2);
      *((uint32_t *)v2 + 3) = v14;
      if ( v14 >= v15 )
      {
        hkpMoppCodeGenerator::resize(v2);
        v15 = *((uint32_t *)v2 + 2);
        v14 = *((uint32_t *)v2 + 3);
      }
      *(uint8_t *)(*((uint32_t *)v2 + 4) + v15 - v14 - 1) = BYTE2(v4);
      v16 = *((uint32_t *)v2 + 3) + 1;
      v17 = *((uint32_t *)v2 + 2);
      *((uint32_t *)v2 + 3) = v16;
      if ( v16 >= v17 )
      {
        hkpMoppCodeGenerator::resize(v2);
        v17 = *((uint32_t *)v2 + 2);
        v16 = *((uint32_t *)v2 + 3);
      }
      *(uint8_t *)(*((uint32_t *)v2 + 4) + v17 - v16 - 1) = 7;
    }
    else
    {
      if ( v5 >= v6 )
      {
        hkpMoppCodeGenerator::resize(v2);
        v6 = *((uint32_t *)v2 + 2);
        v5 = *((uint32_t *)v2 + 3);
      }
      *(uint8_t *)(*((uint32_t *)v2 + 4) + v6 - v5 - 1) = BYTE1(v4);
      v7 = *((uint32_t *)v2 + 3) + 1;
      v8 = *((uint32_t *)v2 + 2);
      *((uint32_t *)v2 + 3) = v7;
      if ( v7 >= v8 )
      {
        hkpMoppCodeGenerator::resize(v2);
        v8 = *((uint32_t *)v2 + 2);
        v7 = *((uint32_t *)v2 + 3);
      }
      *(uint8_t *)(*((uint32_t *)v2 + 4) + v8 - v7 - 1) = BYTE2(v4);
      v9 = *((uint32_t *)v2 + 3) + 1;
      v10 = *((uint32_t *)v2 + 2);
      *((uint32_t *)v2 + 3) = v9;
      if ( v9 >= v10 )
      {
        hkpMoppCodeGenerator::resize(v2);
        v10 = *((uint32_t *)v2 + 2);
        v9 = *((uint32_t *)v2 + 3);
      }
      *(uint8_t *)(*((uint32_t *)v2 + 4) + v10 - v9 - 1) = HIBYTE(v4);
      v11 = *((uint32_t *)v2 + 3) + 1;
      v12 = *((uint32_t *)v2 + 2);
      *((uint32_t *)v2 + 3) = v11;
      if ( v11 >= v12 )
      {
        hkpMoppCodeGenerator::resize(v2);
        v12 = *((uint32_t *)v2 + 2);
        v11 = *((uint32_t *)v2 + 3);
      }
      *(uint8_t *)(*((uint32_t *)v2 + 4) + v12 - v11 - 1) = 8;
    }
    result = *((uint32_t *)v2 + 3) + 1;
    v13 = result < *((uint32_t *)v2 + 2);
    *((uint32_t *)v2 + 3) = result;
    if ( !v13 )
      return hkpMoppCodeGenerator::resize(v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::addSplit  (binary VA: 0x1b087e0)
// Original: hkpMoppDefaultAssembler::addSplit
// ----------------------------------------------------------------------------
hkpMoppCodeGenerator::Self * hkpMoppDefaultAssembler::addSplit(hkpMoppDefaultAssembler::Self *a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  int v6;
  hkpMoppCodeGenerator::Self *v7;
  int v8;
  int v9;
  int v10;
  hkpMoppCodeGenerator::Self *v11;
  int v12;
  bool v13; // cc
  hkpMoppCodeGenerator::Self *v14;
  int v15;
  hkpMoppCodeGenerator::Self *v16;
  int v17;
  hkpMoppCodeGenerator::Self *result;
  char v19;
  int v20;
  int v21;
  int v22;
  int v23;
  hkpMoppCodeGenerator::Self *v24;
  int v25;
  hkpMoppCodeGenerator::Self *v26;
  int v27;
  hkpMoppCodeGenerator::Self *v28;
  int v29;
  hkpMoppCodeGenerator::Self *v30;
  int v31;
  hkpMoppCodeGenerator::Self *v32;
  int v33;
  int v34;
  hkpMoppCodeGenerator::Self *v35;
  int v36;
  hkpMoppCodeGenerator::Self *v37;
  int v38;
  char v39;

  LOBYTE(v6) = a6;
  v7 = *((hkpMoppCodeGenerator::Self **)a1 + 4);
  v8 = *((uint32_t *)v7 + 3);
  v9 = v8 - a6;
  if ( a4 > 2 )
    goto LABEL_5;
  v10 = v8 - a5;
  if ( v9 <= 248 && v10 <= 0 )
  {
    if ( a3 - a2 == 1 )
      goto LABEL_34;
    goto LABEL_5;
  }
  if ( v10 > 0xFFFF || v9 > 0xFFFF )
  {
    if ( a3 - a2 == 1 )
    {
LABEL_34:
      if ( v9 > 251 )
      {
        hkpMoppDefaultAssembler::addJump(a1, a6);
        v6 = *(uint32_t *)(*((uint32_t *)a1 + 4) + 12);
      }
      hkpMoppDefaultAssembler::addJump(a1, a5);
      v35 = *((hkpMoppCodeGenerator::Self **)a1 + 4);
      *(uint8_t *)(*((uint32_t *)v35 + 4) + *((uint32_t *)v35 + 2) - *((uint32_t *)v35 + 3) - 1) = *((uint32_t *)v35 + 3) - v6;
      v36 = *((uint32_t *)v35 + 3) + 1;
      v13 = v36 < *((uint32_t *)v35 + 2);
      *((uint32_t *)v35 + 3) = v36;
      if ( !v13 )
        hkpMoppCodeGenerator::resize(v35);
      v37 = *((hkpMoppCodeGenerator::Self **)a1 + 4);
      *(uint8_t *)(*((uint32_t *)v37 + 4) + *((uint32_t *)v37 + 2) - *((uint32_t *)v37 + 3) - 1) = a2;
      v38 = *((uint32_t *)v37 + 3) + 1;
      v13 = v38 < *((uint32_t *)v37 + 2);
      *((uint32_t *)v37 + 3) = v38;
      if ( !v13 )
        hkpMoppCodeGenerator::resize(v37);
      result = *((hkpMoppCodeGenerator::Self **)a1 + 4);
      v19 = a4 + 32;
      v20 = *((uint32_t *)result + 4);
      v21 = *((uint32_t *)result + 2) - *((uint32_t *)result + 3);
      goto LABEL_14;
    }
LABEL_5:
    if ( v9 > 251 )
    {
      hkpMoppDefaultAssembler::addJump(a1, a6);
      v6 = *(uint32_t *)(*((uint32_t *)a1 + 4) + 12);
    }
    hkpMoppDefaultAssembler::addJump(a1, a5);
    v11 = *((hkpMoppCodeGenerator::Self **)a1 + 4);
    *(uint8_t *)(*((uint32_t *)v11 + 4) + *((uint32_t *)v11 + 2) - *((uint32_t *)v11 + 3) - 1) = *((uint32_t *)v11 + 3) - v6;
    v12 = *((uint32_t *)v11 + 3) + 1;
    v13 = v12 < *((uint32_t *)v11 + 2);
    *((uint32_t *)v11 + 3) = v12;
    if ( !v13 )
      hkpMoppCodeGenerator::resize(v11);
    v14 = *((hkpMoppCodeGenerator::Self **)a1 + 4);
    *(uint8_t *)(*((uint32_t *)v14 + 4) + *((uint32_t *)v14 + 2) - *((uint32_t *)v14 + 3) - 1) = a2;
    v15 = *((uint32_t *)v14 + 3) + 1;
    v13 = v15 < *((uint32_t *)v14 + 2);
    *((uint32_t *)v14 + 3) = v15;
    if ( !v13 )
      hkpMoppCodeGenerator::resize(v14);
    v16 = *((hkpMoppCodeGenerator::Self **)a1 + 4);
    *(uint8_t *)(*((uint32_t *)v16 + 4) + *((uint32_t *)v16 + 2) - *((uint32_t *)v16 + 3) - 1) = a3;
    v17 = *((uint32_t *)v16 + 3) + 1;
    v13 = v17 < *((uint32_t *)v16 + 2);
    *((uint32_t *)v16 + 3) = v17;
    if ( !v13 )
      hkpMoppCodeGenerator::resize(v16);
    result = *((hkpMoppCodeGenerator::Self **)a1 + 4);
    v19 = a4 + 16;
    v20 = *((uint32_t *)result + 4);
    v21 = *((uint32_t *)result + 2) - *((uint32_t *)result + 3);
LABEL_14:
    *(uint8_t *)(v20 + v21 - 1) = v19;
    v22 = *((uint32_t *)result + 3) + 1;
    v13 = v22 < *((uint32_t *)result + 2);
    *((uint32_t *)result + 3) = v22;
    if ( v13 )
      return result;
    return (hkpMoppCodeGenerator::Self *)hkpMoppCodeGenerator::resize(result);
  }
  *(uint8_t *)(*((uint32_t *)v7 + 4) + *((uint32_t *)v7 + 2) - v8 - 1) = v9;
  v23 = *((uint32_t *)v7 + 3) + 1;
  v13 = v23 < *((uint32_t *)v7 + 2);
  *((uint32_t *)v7 + 3) = v23;
  if ( !v13 )
  {
    v39 = BYTE1(v9);
    hkpMoppCodeGenerator::resize(v7);
    BYTE1(v9) = v39;
  }
  v24 = *((hkpMoppCodeGenerator::Self **)a1 + 4);
  *(uint8_t *)(*((uint32_t *)v24 + 4) + *((uint32_t *)v24 + 2) - *((uint32_t *)v24 + 3) - 1) = BYTE1(v9);
  v25 = *((uint32_t *)v24 + 3) + 1;
  v13 = v25 < *((uint32_t *)v24 + 2);
  *((uint32_t *)v24 + 3) = v25;
  if ( !v13 )
    hkpMoppCodeGenerator::resize(v24);
  v26 = *((hkpMoppCodeGenerator::Self **)a1 + 4);
  *(uint8_t *)(*((uint32_t *)v26 + 4) + *((uint32_t *)v26 + 2) - *((uint32_t *)v26 + 3) - 1) = v10;
  v27 = *((uint32_t *)v26 + 3) + 1;
  v13 = v27 < *((uint32_t *)v26 + 2);
  *((uint32_t *)v26 + 3) = v27;
  if ( !v13 )
    hkpMoppCodeGenerator::resize(v26);
  v28 = *((hkpMoppCodeGenerator::Self **)a1 + 4);
  *(uint8_t *)(*((uint32_t *)v28 + 4) + *((uint32_t *)v28 + 2) - *((uint32_t *)v28 + 3) - 1) = BYTE1(v10);
  v29 = *((uint32_t *)v28 + 3) + 1;
  v13 = v29 < *((uint32_t *)v28 + 2);
  *((uint32_t *)v28 + 3) = v29;
  if ( !v13 )
    hkpMoppCodeGenerator::resize(v28);
  v30 = *((hkpMoppCodeGenerator::Self **)a1 + 4);
  *(uint8_t *)(*((uint32_t *)v30 + 4) + *((uint32_t *)v30 + 2) - *((uint32_t *)v30 + 3) - 1) = a2;
  v31 = *((uint32_t *)v30 + 3) + 1;
  v13 = v31 < *((uint32_t *)v30 + 2);
  *((uint32_t *)v30 + 3) = v31;
  if ( !v13 )
    hkpMoppCodeGenerator::resize(v30);
  v32 = *((hkpMoppCodeGenerator::Self **)a1 + 4);
  *(uint8_t *)(*((uint32_t *)v32 + 4) + *((uint32_t *)v32 + 2) - *((uint32_t *)v32 + 3) - 1) = a3;
  v33 = *((uint32_t *)v32 + 3) + 1;
  v13 = v33 < *((uint32_t *)v32 + 2);
  *((uint32_t *)v32 + 3) = v33;
  if ( !v13 )
    hkpMoppCodeGenerator::resize(v32);
  result = *((hkpMoppCodeGenerator::Self **)a1 + 4);
  *(uint8_t *)(*((uint32_t *)result + 4) + *((uint32_t *)result + 2) - *((uint32_t *)result + 3) - 1) = a4 + 35;
  v34 = *((uint32_t *)result + 3) + 1;
  v13 = v34 < *((uint32_t *)result + 2);
  *((uint32_t *)result + 3) = v34;
  if ( !v13 )
    return (hkpMoppCodeGenerator::Self *)hkpMoppCodeGenerator::resize(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::getSplitCode  (binary VA: 0x1b08b50)
// Original: hkpMoppDefaultAssembler::getSplitCode
// ----------------------------------------------------------------------------
char hkpMoppDefaultAssembler::getSplitCode(hkpMoppDefaultAssembler::Self *self, const hkVector4f::Self *a2)
{
  float v2; // xmm1_4
  float v3; // xmm1_4
  char result;
  bool v5; // cc
  float v6; // xmm1_4
  float v7; // xmm1_4

  if ( *(float *)a2 <= 0.1f )
  {
    if ( *((float *)a2 + 1) > 0.1f )
    {
      v7 = *((float *)a2 + 2);
      result = 3;
      if ( v7 <= 0.1f )
        return 3 * (v7 < -0.1f) + 1;
    }
    else
    {
      return 2;
    }
  }
  else
  {
    v2 = *((float *)a2 + 2);
    if ( v2 <= 0.1f )
    {
      v5 = v2 >= -0.1f;
      v6 = *((float *)a2 + 1);
      if ( v5 )
      {
        result = 7;
        if ( v6 <= 0.1f )
          return 8 * (v6 < -0.1f);
      }
      else
      {
        result = 10;
        if ( v6 <= 0.1f )
        {
          result = 6;
          if ( v6 < -0.1f )
            return 12;
        }
      }
    }
    else
    {
      v3 = *((float *)a2 + 1);
      result = 9;
      if ( v3 <= 0.1f )
      {
        result = 5;
        if ( v3 < -0.1f )
          return 11;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::findPlanes  (binary VA: 0x1b08c30)
// Original: hkpMoppDefaultAssembler::findPlanes
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::findPlanes(__m128i a1, __m128i a2, float *a3, int a4, uint32_t *a5, int *a6, int *a7)
{
  float *v7;
  float v8; // xmm1_4
  int v9;
  int v10;
  float v11; // xmm1_4
  float v12; // xmm1_4
  double v13; // xmm5_8
  double v14; // xmm4_8
  float v15; // xmm3_4
  float v16; // xmm2_4
  double v17; // xmm3_8
  float v18; // xmm0_4
  float v19; // xmm1_4
  double v20; // xmm2_8
  double v21; // xmm0_8
  double v22; // xmm1_8
  double v23; // xmm0_8
  double v24; // xmm2_8
  double v25; // xmm3_8
  double v26; // xmm1_8
  double v27; // xmm0_8
  double v28; // xmm3_8
  unsigned int v29;
  int v30;
  unsigned int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int result;
  double v46; // xmm2_8
  double v47; // xmm0_8
  unsigned int v48;
  int v49;
  unsigned int v50;
  int v51;
  unsigned int v52;
  int v53;
  unsigned int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  char v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;

  v7 = *(float **)(a4 + 96);
  v8 = *v7;
  if ( __builtin_isnan(*v7) || v8 != 0.0 )
  {
    v9 = v8 < 0.0;
    v10 = 1;
  }
  else
  {
    v9 = 0;
    v10 = 0;
  }
  v11 = v7[1];
  if ( __builtin_isnan(v11) || (v61 = 0, v11 != 0.0) )
  {
    ++v10;
    if ( v11 < 0.0 )
      ++v9;
    v61 = 1;
  }
  v12 = v7[2];
  if ( v12 != 0.0 )
  {
    ++v10;
    if ( v12 < 0.0 )
      ++v9;
    v61 = 2;
  }
  v13 = *(float *)(a4 + 100);
  v14 = *(float *)(a4 + 104);
  if ( v10 == 1 )
  {
    v46 = a3[v61 + 12];
    v47 = a3[15];
    *(float *)g4_m128_ptr<int32_t>(a1) = (v13 - v46) * v47;
    v48 = (_mm_cvtsi128_si32(a1) & 0x7F800000u) >> 23;
    v49 = 23 - (v48 - 127);
    v77 = v48 - 127;
    v50 = v48 - 150;
    v51 = (int)(v48 - 151) >> 31;
    v72 = (int)(~v51 & v50) > 31 ? -1 : ~v51 & v50;
    v66 = ((uint8_t)(v51 & v49) | (uint8_t)-((v51 & v49) > 31)) & 0x1F;
    *(float *)g4_m128_ptr<int32_t>(a2) = (v14 - v46) * v47;
    v69 = _mm_cvtsi128_si32(a1) & ~(((_mm_cvtsi128_si32(a1) & 0x7FFFFFFF) - 1) >> 31);
    v73 = ~v51 | (-8388608 >> ((v51 & 0x17) - v66));
    v52 = (_mm_cvtsi128_si32(a2) & 0x7F800000u) >> 23;
    v53 = v52 - 127;
    v54 = v52 - 150;
    v55 = (int)(v52 - 151) >> 31;
    v74 = (int)(~v55 & v54) > 31 ? -1 : ~v55 & v54;
    v56 = _mm_cvtsi128_si32(a2);
    v70 = ((uint8_t)(v55 & (23 - v53)) | (uint8_t)-((v55 & (23 - v53)) > 31)) & 0x1F;
    v71 = v56 & ~(((v56 & 0x7FFFFFFF) - 1) >> 31);
    v75 = ~v55 | (-8388608 >> ((v55 & 0x17) - v70));
    v63 = a5[v61 + 10];
    v76 = a5[9];
    v57 = (((~(v77 >> 31)
           & (((v69 >> 31) | ((v73 & (v69 & 0x7FFFFF | 0x800000)) + (v73 & (v69 & 0x7FFFFF | 0x800000)) - 1))
            - (v73 & (v69 & 0x7FFFFF | 0x800000))
            + 1)) >> v66 << v72)
         - (~(((v66 - 1) | ((v69 & ~v73) - 1) & (v73 + 1)) >> 31) & (v69 >> 31) & 1)
         - v63) >> v76;
    v58 = 0;
    v59 = ((((~(v53 >> 31)
            & (((v71 >> 31) | ((v75 & (v71 & 0x7FFFFF | 0x800000)) + (v75 & (v71 & 0x7FFFFF | 0x800000)) - 1))
             - (v75 & (v71 & 0x7FFFFF | 0x800000))
             + 1)) >> v70 << v74)
          - (~(((v70 - 1) | ((v71 & ~v75) - 1) & (v75 + 1)) >> 31) & (v71 >> 31) & 1)
          - v63) >> v76)
        + 1;
    if ( v57 > 0 )
    {
      v58 = 255;
      if ( v57 <= 254 )
        v58 = (((~(v77 >> 31)
               & (((v69 >> 31) | ((v73 & (v69 & 0x7FFFFF | 0x800000)) + (v73 & (v69 & 0x7FFFFF | 0x800000)) - 1))
                - (v73 & (v69 & 0x7FFFFF | 0x800000))
                + 1)) >> v66 << v72)
             - (~(((v66 - 1) | ((v69 & ~v73) - 1) & (v73 + 1)) >> 31) & (v69 >> 31) & 1)
             - v63) >> v76;
    }
    v60 = 0;
    if ( v59 > 0 )
    {
      v60 = 255;
      if ( v59 <= 254 )
        v60 = v59;
    }
    *a7 = v58;
    result = (int)(uintptr_t)(a6);
    *a6 = v60;
    if ( *a7 < 0 )
      *a7 = 0;
  }
  else
  {
    v15 = a3[15];
    if ( v15 == 0.0 )
      v16 = 3.40282e38f;
    else
      v16 = 1.0 / v15;
    v17 = v15;
    v18 = (float)((float)((float)((float)(int)a5[10] * v16) + a3[12]) * *v7)
        + (float)((float)((float)((float)(int)a5[11] * v16) + a3[13]) * v7[1]);
    v19 = (float)((float)((float)(int)a5[12] * v16) + a3[14]) * v7[2];
    v20 = (float)(1 << a5[9]);
    v21 = (float)(v18 + v19);
    v22 = (v13 - v21) * v17 / v20;
    v23 = (v14 - v21) * v17 / v20;
    if ( v10 == 2 )
    {
      v24 = 0.5;
      v25 = 1.4142135381698608;
    }
    else if ( v10 == 3 )
    {
      v24 = 0.3333333333333333;
      v25 = 1.7320507764816284;
    }
    else
    {
      v24 = 1.0;
      v25 = 1.0;
    }
    v26 = v22 * v25;
    v27 = v23 * v25;
    if ( v9 != 0 )
    {
      v28 = (double)(255 * v9);
      v26 = v26 + v28;
      v27 = v27 + v28;
    }
    *(float *)g4_m128_ptr<int32_t>(a1) = v26 * v24;
    v29 = (_mm_cvtsi128_si32(a1) & 0x7F800000u) >> 23;
    v30 = 23 - (v29 - 127);
    v67 = v29 - 127;
    v31 = v29 - 150;
    v32 = (int)(v29 - 151) >> 31;
    v64 = (int)(~v32 & v31) > 31 ? -1 : ~(uint8_t)v32 & v31;
    v33 = ((uint8_t)(v32 & v30) | (uint8_t)-((v32 & v30) > 31)) & 0x1F;
    v34 = _mm_cvtsi128_si32(a1) & ~(((_mm_cvtsi128_si32(a1) & 0x7FFFFFFF) - 1) >> 31);
    v35 = ~v32 | (-8388608 >> ((v32 & 0x17) - v33));
    *(float *)g4_m128_ptr<int32_t>(a2) = v27 * v24;
    v62 = ((~(v67 >> 31)
          & (((v34 >> 31) | ((v35 & (v34 & 0x7FFFFF | 0x800000)) + (v35 & (v34 & 0x7FFFFF | 0x800000)) - 1))
           - (v35 & (v34 & 0x7FFFFF | 0x800000))
           + 1)) >> v33 << v64)
        - (~(((v33 - 1) | ((v34 & ~v35) - 1) & (v35 + 1)) >> 31) & (v34 >> 31) & 1);
    v36 = (_mm_cvtsi128_si32(a2) & 0x7F800000u) >> 23;
    v37 = 23 - (v36 - 127);
    v68 = v36 - 127;
    v38 = v36 - 150;
    v39 = (int)(v36 - 151) >> 31;
    v65 = (int)(~v39 & v38) > 31 ? -1 : ~v39 & v38;
    v40 = ((uint8_t)(v39 & v37) | (uint8_t)-((v39 & v37) > 31)) & 0x1F;
    v41 = _mm_cvtsi128_si32(a2) & ~(((_mm_cvtsi128_si32(a2) & 0x7FFFFFFF) - 1) >> 31);
    v42 = ~v39 | (-8388608 >> ((v39 & 0x17) - v40));
    v43 = ((~(v68 >> 31)
          & (((v41 >> 31) | ((v42 & (v41 & 0x7FFFFF | 0x800000)) + (v42 & (v41 & 0x7FFFFF | 0x800000)) - 1))
           - (v42 & (v41 & 0x7FFFFF | 0x800000))
           + 1)) >> v40 << v65)
        - (~(((v40 - 1) | ((v41 & ~v42) - 1) & (v42 + 1)) >> 31) & (v41 >> 31) & 1)
        + 1;
    v44 = 0;
    if ( v62 > 0 )
    {
      v44 = 255;
      if ( v62 <= 254 )
        v44 = v62;
    }
    result = 0;
    if ( v43 > 0 )
    {
      result = 255;
      if ( v43 <= 254 )
        result = ((~(v68 >> 31)
                 & (((v41 >> 31) | ((v42 & (v41 & 0x7FFFFF | 0x800000)) + (v42 & (v41 & 0x7FFFFF | 0x800000)) - 1))
                  - (v42 & (v41 & 0x7FFFFF | 0x800000))
                  + 1)) >> v40 << v65)
               - (~(((v40 - 1) | ((v41 & ~v42) - 1) & (v42 + 1)) >> 31) & (v41 >> 31) & 1)
               + 1;
    }
    *a7 = v44;
    *a6 = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::preCalcCutPositions  (binary VA: 0x1b09340)
// Original: hkpMoppDefaultAssembler::preCalcCutPositions
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::preCalcCutPositions(__m128i a1, __m128i a2, hkpMoppDefaultAssembler::Self *a3, int a4, uint32_t *a5, uint32_t *a6)
{
  int result;
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
  int v17;
  int v18;
  int v19;
  float v20; // xmm2_4
  float v21; // xmm1_4
  __m128i v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  __m128i v30;
  unsigned int v31;
  int v32;
  unsigned int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  unsigned int v42;
  char v43;
  int v44;
  int v45;
  int v46;
  int v47;
  unsigned int v48;
  int v49;
  int v50;
  char v51;
  char v52;
  char v53;
  int v54;
  char v55;
  int v56;
  int v57;
  char v58;
  int v59;
  int v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef char _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72[5];
  typedef char _g4_t_v73;
  typedef uint32_t _g4_t_v74[26];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v61)) > _g4_s0 ? (12u + sizeof(_g4_t_v61)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v62)) > _g4_s1 ? (20u + sizeof(_g4_t_v62)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v63)) > _g4_s2 ? (28u + sizeof(_g4_t_v63)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v64)) > _g4_s3 ? (32u + sizeof(_g4_t_v64)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v65)) > _g4_s4 ? (40u + sizeof(_g4_t_v65)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v66)) > _g4_s5 ? (48u + sizeof(_g4_t_v66)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v67)) > _g4_s6 ? (52u + sizeof(_g4_t_v67)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v68)) > _g4_s7 ? (56u + sizeof(_g4_t_v68)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v69)) > _g4_s8 ? (56u + sizeof(_g4_t_v69)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v70)) > _g4_s9 ? (60u + sizeof(_g4_t_v70)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v71)) > _g4_s10 ? (72u + sizeof(_g4_t_v71)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v72)) > _g4_s11 ? (76u + sizeof(_g4_t_v72)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v73)) > _g4_s12 ? (96u + sizeof(_g4_t_v73)) : _g4_s12,
    _g4_s14 = (128u + sizeof(_g4_t_v74)) > _g4_s13 ? (128u + sizeof(_g4_t_v74)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 12u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 20u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 28u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 40u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 48u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 52u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 56u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 56u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 60u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 72u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 76u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 96u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 128u);

  result = a4;
  if ( *(uint8_t *)(a4 + 56) == 0 )
  {
    if ( *(uint8_t *)(a4 + 4) != 0 )
    {
      v7 = a6[9];
      v8 = (int)a6[4] >> v7;
      a6[18] = (int)a6[3] >> v7 << v7;
      v9 = v8;
      v10 = (int)a6[6] >> v7;
      a6[21] = (v9 + 1) << v7;
      a6[19] = (int)a6[5] >> v7 << v7;
      v11 = v10 + 1;
      v12 = (int)a6[8] >> v7;
      a6[22] = v11 << v7;
      a6[20] = (int)a6[7] >> v7 << v7;
      a6[23] = (v12 + 1) << v7;
      return hkpMoppDefaultAssembler::calcTermCut((int)(uintptr_t)(a3), a4, (int)(uintptr_t)(a6));
    }
    v73 = 0;
    if ( *(uint8_t *)(a4 + 58) == 1 )
      hkpMoppDefaultAssembler::recalcRescale((int)(uintptr_t)(a3), a5, a6, (int)(uintptr_t)(&v73));
    v13 = a6[9];
    v14 = (int)a6[4] >> v13;
    a6[18] = (int)a6[3] >> v13 << v13;
    v15 = v14;
    v16 = (int)a6[6] >> v13;
    a6[21] = (v15 + 1) << v13;
    a6[19] = (int)a6[5] >> v13 << v13;
    v17 = v16 + 1;
    v18 = (int)a6[8] >> v13;
    a6[22] = v17 << v13;
    a6[20] = (int)a6[7] >> v13 << v13;
    a6[23] = (v18 + 1) << v13;
    LOBYTE(v19) = hkpMoppDefaultAssembler::getSplitCode(a3, *(const hkVector4f::Self **)(a4 + 96));
    v62 = v19;
    hkpMoppDefaultAssembler::findPlanes(a1, a2, (float *)a3, a4, a6, &v71, v72);
    v63 = 0;
    v61 = *(uint32_t *)(a4 + 116);
    v72[1] = v61;
    v72[2] = *(uint32_t *)(a4 + 112);
    *(uint32_t *)(a4 + 68) = 0;
    *(uint32_t *)(a4 + 80) = 0x7FFFFFFF;
    *(uint32_t *)(a4 + 72) = 0;
    *(uint32_t *)(a4 + 84) = 0x7FFFFFFF;
    *(uint32_t *)(a4 + 76) = 0;
    *(uint32_t *)(a4 + 88) = 0x7FFFFFFF;
    while ( 1 )
    {
      result = v72[v63 + 1];
      v67 = result;
      if ( result == 0 )
        goto LABEL_42;
      std::memcpy(v74, a6, 72);
      v74[14] = *(uint32_t *)(result + 40) - *(uint32_t *)(result + 36);
      v74[15] = *(uint32_t *)(result + 44);
      if ( *(int *)(result + 44) > 0 )
      {
        v74[16] = *(uint32_t *)(result + 48);
        v74[17] = *(uint32_t *)(result + 52) - *(uint32_t *)(result + 48);
      }
      v70 = 0;
      v20 = *((float *)a3 + 15);
      v66 = result;
      do
      {
        v21 = *((float *)a3 + v70 + 12);
g4_m128_raw(v22) = *(unsigned int *)(v66 + 12);
        *(float *)g4_m128_ptr<int32_t>(v22) = (float)(*(float *)g4_m128_ptr<int32_t>(v22) - v21) * v20;
        v23 = (_mm_cvtsi128_si32(v22) & 0x7F800000u) >> 23;
        v24 = v23 - 127;
        v25 = v23 - 150;
        v26 = (int)(v23 - 151) >> 31;
        v68 = (int)(~v26 & v25) > 31 ? -1 : ~(uint8_t)v26 & v25;
        v27 = ((uint8_t)(v26 & (23 - v24)) | (uint8_t)-((v26 & (23 - v24)) > 31)) & 0x1F;
        v28 = _mm_cvtsi128_si32(v22) & ~(((_mm_cvtsi128_si32(v22) & 0x7FFFFFFF) - 1) >> 31);
        v29 = ~v26 | (-8388608 >> ((v26 & 0x17) - v27));
        v74[2 * v70 + 3] = ((~(v24 >> 31)
                           & (((v28 >> 31)
                             | ((v29 & (v28 & 0x7FFFFF | 0x800000)) + (v29 & (v28 & 0x7FFFFF | 0x800000)) - 1))
                            - (v29 & (v28 & 0x7FFFFF | 0x800000))
                            + 1)) >> (((v26 & (23 - v24)) > 31 ? -1 : v26 & (23 - v24)) & 0x1F) << v68)
                         - (~(((v27 - 1) | ((v28 & ~v29) - 1) & (v29 + 1)) >> 31) & (v28 >> 31) & 1);
g4_m128_raw(v30) = *(unsigned int *)(v66 + 16);
        *(float *)g4_m128_ptr<int32_t>(v30) = (float)(*(float *)g4_m128_ptr<int32_t>(v30) - v21) * v20;
        v31 = (_mm_cvtsi128_si32(v30) & 0x7F800000u) >> 23;
        v32 = v31 - 127;
        v33 = v31 - 150;
        v34 = (int)(v31 - 151) >> 31;
        v69 = (int)(~v34 & v33) > 31 ? -1 : ~v34 & v33;
        v35 = ((uint8_t)(v34 & (23 - v32)) | (uint8_t)-((v34 & (23 - v32)) > 31)) & 0x1F;
        v36 = _mm_cvtsi128_si32(v30) & ~(((_mm_cvtsi128_si32(v30) & 0x7FFFFFFF) - 1) >> 31);
        v37 = ~v34 | (-8388608 >> ((v34 & 0x17) - v35));
        v64 = v35 - 1;
        v65 = v36 >> 31;
        v38 = ~(v32 >> 31)
            & (((v36 >> 31) | ((v37 & (v36 & 0x7FFFFF | 0x800000)) + (v37 & (v36 & 0x7FFFFF | 0x800000)) - 1))
             - (v37 & (v36 & 0x7FFFFF | 0x800000))
             + 1);
        LOBYTE(v34) = v35;
        v39 = (v36 & ~v37) - 1;
        v40 = v70++;
        v66 += 8;
        v74[2 * v40 + 4] = (v38 >> v34 << v69) - (~((v64 | v39 & (v37 + 1)) >> 31) & v65 & 1) + 1;
      }
      while ( v70 != 3 );
      v41 = v74[6] - v74[5];
      LOBYTE(v74[1]) = 0;
      v74[0] = *a6 + 1;
      if ( v74[6] - v74[5] < v74[4] - v74[3] )
        v41 = v74[4] - v74[3];
      if ( v41 < v74[8] - v74[7] )
        v41 = v74[8] - v74[7];
      if ( v41 != 0 )
      {
        v42 = v41;
        v43 = 0;
        do
        {
          ++v43;
          v42 >>= 1;
        }
        while ( v42 != 0 );
        v44 = 1 << (v43 - 4);
      }
      else
      {
        v44 = 0;
      }
      v45 = v41 + v44;
      v46 = 3;
      v47 = -1;
      do
      {
        if ( v45 != 0 )
        {
          v48 = v45;
          v49 = 0;
          do
          {
            ++v49;
            v48 >>= 1;
          }
          while ( v48 != 0 );
        }
        else
        {
          v49 = 0;
        }
        if ( v47 < v49 )
          v47 = v49;
        --v46;
      }
      while ( v46 != 0 );
      v50 = 24;
      if ( v47 <= 24 )
        v50 = v47;
      v74[2] = v50;
      hkpMoppDefaultAssembler::preCalcCutPositions(a3, v67, (int)(uintptr_t)(a6), (int)(uintptr_t)(v74));
      if ( v67 == v61 )
      {
        if ( v62 <= 2 )
          *(uint32_t *)(v67 + 4 * v62 + 68) = 0;
      }
      else if ( v62 <= 2 )
      {
        *(uint32_t *)(v67 + 4 * v62 + 80) = 0x7FFFFFFF;
      }
      v51 = *(uint8_t *)(v67 + 59);
      if ( v51 == 1 )
      {
        if ( *(uint32_t *)(v67 + 68) > a6[18] || *(uint32_t *)(v67 + 80) < a6[21] )
        {
LABEL_35:
          if ( v51 != 0 )
            goto LABEL_36;
          goto LABEL_70;
        }
        v58 = *(uint8_t *)(a4 + 59);
        if ( v58 <= 0 )
          v58 = 1;
        *(uint8_t *)(a4 + 59) = v58;
        *(uint8_t *)(v67 + 59) = 0;
      }
      else
      {
        if ( v51 != 2 || *(uint32_t *)(v67 + 68) > a6[3] || *(uint32_t *)(v67 + 80) < a6[4] )
          goto LABEL_35;
        *(uint8_t *)(a4 + 59) = v51;
        *(uint8_t *)(v67 + 59) = 0;
      }
LABEL_70:
      v59 = *(uint32_t *)(v67 + 68);
      if ( *(uint32_t *)(a4 + 68) >= v59 )
        v59 = *(uint32_t *)(a4 + 68);
      *(uint32_t *)(a4 + 68) = v59;
      v60 = *(uint32_t *)(v67 + 80);
      if ( *(uint32_t *)(a4 + 80) <= v60 )
        v60 = *(uint32_t *)(a4 + 80);
      *(uint32_t *)(a4 + 80) = v60;
LABEL_36:
      v52 = *(uint8_t *)(v67 + 60);
      if ( v52 == 1 )
      {
        if ( *(uint32_t *)(v67 + 72) <= a6[19] && *(uint32_t *)(v67 + 84) >= a6[22] )
        {
          v55 = *(uint8_t *)(a4 + 60);
          if ( v55 <= 0 )
            v55 = 1;
          *(uint8_t *)(a4 + 60) = v55;
          *(uint8_t *)(v67 + 60) = 0;
          goto LABEL_60;
        }
      }
      else if ( v52 == 2 && *(uint32_t *)(v67 + 72) <= a6[5] && *(uint32_t *)(v67 + 84) >= a6[6] )
      {
        *(uint8_t *)(a4 + 60) = v52;
        *(uint8_t *)(v67 + 60) = 0;
LABEL_60:
        v56 = *(uint32_t *)(v67 + 72);
        if ( *(uint32_t *)(a4 + 72) >= v56 )
          v56 = *(uint32_t *)(a4 + 72);
        *(uint32_t *)(a4 + 72) = v56;
        v57 = *(uint32_t *)(v67 + 84);
        if ( *(uint32_t *)(a4 + 84) <= v57 )
          v57 = *(uint32_t *)(a4 + 84);
        *(uint32_t *)(a4 + 84) = v57;
        goto LABEL_39;
      }
      if ( v52 == 0 )
        goto LABEL_60;
LABEL_39:
      result = *(uint8_t *)(v67 + 61);
      if ( (char)result == 1 )
      {
        if ( *(uint32_t *)(v67 + 76) <= a6[20] && *(uint32_t *)(v67 + 88) >= a6[23] )
        {
          v53 = *(uint8_t *)(a4 + 61);
          if ( v53 <= 0 )
            v53 = 1;
          *(uint8_t *)(a4 + 61) = v53;
          *(uint8_t *)(v67 + 61) = 0;
          goto LABEL_49;
        }
      }
      else if ( (char)result == 2 && *(uint32_t *)(v67 + 76) <= a6[7] && *(uint32_t *)(v67 + 88) >= a6[8] )
      {
        *(uint8_t *)(a4 + 61) = result;
        *(uint8_t *)(v67 + 61) = 0;
        goto LABEL_49;
      }
      if ( (uint8_t)result != 0 )
      {
LABEL_42:
        if ( ++v63 == 2 )
          return result;
      }
      else
      {
LABEL_49:
        v54 = *(uint32_t *)(v67 + 76);
        if ( *(uint32_t *)(a4 + 76) >= v54 )
          v54 = *(uint32_t *)(a4 + 76);
        *(uint32_t *)(a4 + 76) = v54;
        result = *(uint32_t *)(v67 + 88);
        if ( *(uint32_t *)(a4 + 88) <= result )
          result = *(uint32_t *)(a4 + 88);
        ++v63;
        *(uint32_t *)(a4 + 88) = result;
        if ( v63 == 2 )
          return result;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::assembleCutAndTerminalCommand  (binary VA: 0x1b09b80)
// Original: hkpMoppDefaultAssembler::assembleCutAndTerminalCommand
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::assembleCutAndTerminalCommand(hkpMoppDefaultAssembler::Self *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;

  hkpMoppDefaultAssembler::fixScale((int)(uintptr_t)(a1), (int *)a2);
  v4 = *((uint32_t *)a1 + 4);
  ++*((uint32_t *)a1 + 10);
  v5 = *(uint32_t *)(v4 + 12);
  hkpMoppDefaultAssembler::addTerminals(a1, a2, a3, a4);
  hkpMoppDefaultAssembler::addCut((int)(uintptr_t)(a1), a2, a4);
  *(uint32_t *)(a2 + 92) = *(uint32_t *)(*((uint32_t *)a1 + 4) + 12);
  v6 = *(uint32_t *)(*((uint32_t *)a1 + 4) + 12);
  *(uint8_t *)(a2 + 56) = 1;
  return v6 - v5;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::assembleNonTerminalCommand  (binary VA: 0x1b09c00)
// Original: hkpMoppDefaultAssembler::assembleNonTerminalCommand
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::assembleNonTerminalCommand(__m128i a1, __m128i a2, hkpMoppDefaultAssembler::Self *a3, int a4, int a5, uint32_t *a6, uint32_t *a7)
{
  int v7;
  unsigned int v8;
  int v9;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v13)) > _g4_s2 ? (24u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v14)) > _g4_s3 ? (28u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);

  hkpMoppDefaultAssembler::fixScale((int)(uintptr_t)(a3), (int *)a4);
  v11 = *(uint32_t *)(*((uint32_t *)a3 + 4) + 12);
  LOBYTE(v7) = hkpMoppDefaultAssembler::getSplitCode(a3, *(const hkVector4f::Self **)(a4 + 96));
  v12 = v7;
  hkpMoppDefaultAssembler::findPlanes(a1, a2, (float *)a3, a4, a6, &v13, v14);
  hkpMoppDefaultAssembler::addSplit(
    a3,
    v14[0],
    v13,
    v12,
    *(uint32_t *)(*(uint32_t *)(a4 + 112) + 92),
    *(uint32_t *)(*(uint32_t *)(a4 + 116) + 92));
  v8 = a6[13] - *(uint32_t *)(a5 + 52);
  if ( v8 != 0 )
    hkpMoppDefaultAssembler::addTermIdOffset(a3, v8);
  hkpMoppDefaultAssembler::checkAndAddProperties(a3, (uint32_t *)a4, a5, (int)(uintptr_t)(a6));
  hkpMoppDefaultAssembler::addCut((int)(uintptr_t)(a3), a4, (int)(uintptr_t)(a6));
  if ( *(uint8_t *)a7 != 0 )
    hkpMoppDefaultAssembler::addRescale((int)(uintptr_t)(a3), a7);
  v9 = *(uint32_t *)(*((uint32_t *)a3 + 4) + 12);
  *(uint8_t *)(a4 + 56) = 1;
  *(uint32_t *)(a4 + 92) = v9;
  return *(uint32_t *)(*((uint32_t *)a3 + 4) + 12) - v11;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::assemblesubNode  (binary VA: 0x1b09d20)
// Original: hkpMoppDefaultAssembler::assemblesubNode
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::assemblesubNode(__m128i a1, __m128i a2, hkpMoppDefaultAssembler::Self *a3, int *a4, uint32_t *a5, uint32_t *a6)
{
  int result;
  int v7;
  hkpMoppDefaultAssembler::Self *v8;
  int v9;
  uint32_t *v10;
  float v11; // xmm2_4
  float v12; // xmm1_4
  __m128i v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  __m128i v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  char v34;
  int v35;
  int v36;
  int v37;
  int v38;
  unsigned int v39;
  int v40;
  int v41;
  uint32_t *v42;
  float v43; // xmm2_4
  float v44; // xmm1_4
  __m128i v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  __m128i v53;
  unsigned int v54;
  int v55;
  unsigned int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  unsigned int v65;
  char v66;
  int v67;
  int v68;
  int v69;
  int v70;
  unsigned int v71;
  int v72;
  int v73;
  int v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef hkpMoppDefaultAssembler::Self *_g4_t_v83;
  typedef uint32_t *_g4_t_v84;
  typedef uint32_t *_g4_t_v85;
  typedef uint32_t *_g4_t_v86;
  typedef uint32_t *_g4_t_v87;
  typedef int _g4_t_v88;
  typedef char _g4_t_v89;
  typedef int _g4_t_v90;
  typedef char _g4_t_v91;
  typedef int _g4_t_v92;
  typedef hkpMoppDefaultAssembler::Self *_g4_t_v93;
  typedef int _g4_t_i;
  typedef int _g4_t_j;
  typedef int *_g4_t_v96;
  typedef bool _g4_t_v97;
  typedef uint32_t _g4_t_v98[8];
  typedef uint32_t _g4_t_v99[22];
  typedef int *_g4_t_v100;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (4u + sizeof(_g4_t_v75)) > _g4_s0 ? (4u + sizeof(_g4_t_v75)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v76)) > _g4_s1 ? (8u + sizeof(_g4_t_v76)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v77)) > _g4_s2 ? (8u + sizeof(_g4_t_v77)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v78)) > _g4_s3 ? (12u + sizeof(_g4_t_v78)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v79)) > _g4_s4 ? (12u + sizeof(_g4_t_v79)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v80)) > _g4_s5 ? (20u + sizeof(_g4_t_v80)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v81)) > _g4_s6 ? (20u + sizeof(_g4_t_v81)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v82)) > _g4_s7 ? (24u + sizeof(_g4_t_v82)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v83)) > _g4_s8 ? (28u + sizeof(_g4_t_v83)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v84)) > _g4_s9 ? (32u + sizeof(_g4_t_v84)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v85)) > _g4_s10 ? (32u + sizeof(_g4_t_v85)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v86)) > _g4_s11 ? (36u + sizeof(_g4_t_v86)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v87)) > _g4_s12 ? (40u + sizeof(_g4_t_v87)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v88)) > _g4_s13 ? (44u + sizeof(_g4_t_v88)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v89)) > _g4_s14 ? (44u + sizeof(_g4_t_v89)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v90)) > _g4_s15 ? (44u + sizeof(_g4_t_v90)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v91)) > _g4_s16 ? (44u + sizeof(_g4_t_v91)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v92)) > _g4_s17 ? (44u + sizeof(_g4_t_v92)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v93)) > _g4_s18 ? (48u + sizeof(_g4_t_v93)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_i)) > _g4_s19 ? (48u + sizeof(_g4_t_i)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_j)) > _g4_s20 ? (48u + sizeof(_g4_t_j)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v96)) > _g4_s21 ? (56u + sizeof(_g4_t_v96)) : _g4_s21,
    _g4_s23 = (63u + sizeof(_g4_t_v97)) > _g4_s22 ? (63u + sizeof(_g4_t_v97)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v98)) > _g4_s23 ? (64u + sizeof(_g4_t_v98)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v99)) > _g4_s24 ? (96u + sizeof(_g4_t_v99)) : _g4_s24,
    _g4_s26 = (184u + sizeof(_g4_t_v100)) > _g4_s25 ? (184u + sizeof(_g4_t_v100)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 4u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 8u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 8u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 12u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 12u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 20u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 20u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 24u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 28u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 32u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 32u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 36u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 40u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 44u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 44u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 44u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 44u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 44u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 48u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 48u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 48u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 56u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 63u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 64u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 96u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 184u);

  v100 = (int *)&a3;
  v83 = a3;
  v96 = a4;
  v86 = a5;
  v87 = a6;
  result = 3;
  if ( *((uint8_t *)a4 + 56) != 0 )
    return result;
  if ( *a6 > *((uint32_t *)a3 + 6) || *a6 % *((uint32_t *)a3 + 28) != 0 || *((uint8_t *)a6 + 4) != 0 )
  {
    if ( *((uint8_t *)a4 + 4) != 0 )
    {
      hkpMoppDefaultAssembler::fixScale((int)(uintptr_t)(a3), a4);
      hkpMoppDefaultAssembler::shouldAssemble(&v97, (int)(uintptr_t)(v83), (int)(uintptr_t)(v96), v87);
      if ( v97 )
        return hkpMoppDefaultAssembler::assembleCutAndTerminalCommand(v83, (int)(uintptr_t)(v96), (int)(uintptr_t)(v86), (int)(uintptr_t)(v87));
    }
    else
    {
      LOBYTE(v98[0]) = 0;
      v98[1] = -1;
      hkpMoppDefaultAssembler::initTopDown((int)(uintptr_t)(a3), (int)(uintptr_t)(a4), a5, a6, (int)(uintptr_t)(v98));
      v10 = (uint32_t *)v96[29];
      v75 = -1;
      v76 = (int)(uintptr_t)(v10);
      if ( v10 != nullptr )
      {
        std::memcpy(v99, v87, 72);
        v99[14] = v10[10] - v10[9];
        v99[15] = v10[11];
        if ( (int)v10[11] > 0 )
        {
          v99[16] = v10[12];
          v99[17] = v10[13] - v10[12];
        }
        v11 = *((float *)v83 + 15);
        v84 = v10;
        for ( i = 0; i != 3; ++i )
        {
          v12 = *((float *)v83 + i + 12);
g4_m128_raw(v13) = (unsigned int)v84[3];
          *(float *)g4_m128_ptr<int32_t>(v13) = (float)(*(float *)g4_m128_ptr<int32_t>(v13) - v12) * v11;
          v14 = (_mm_cvtsi128_si32(v13) & 0x7F800000u) >> 23;
          v15 = v14 - 127;
          v16 = v14 - 150;
          v17 = (int)(v14 - 151) >> 31;
          v89 = (int)(~v17 & v16) > 31 ? -1 : ~(uint8_t)v17 & v16;
          v18 = ((uint8_t)(v17 & (23 - v15)) | (uint8_t)-((v17 & (23 - v15)) > 31)) & 0x1F;
          v19 = _mm_cvtsi128_si32(v13) & ~(((_mm_cvtsi128_si32(v13) & 0x7FFFFFFF) - 1) >> 31);
          v20 = ~v17 | (-8388608 >> ((v17 & 0x17) - v18));
          v99[2 * i + 3] = ((~(v15 >> 31)
                           & (((v19 >> 31)
                             | ((v20 & (v19 & 0x7FFFFF | 0x800000)) + (v20 & (v19 & 0x7FFFFF | 0x800000)) - 1))
                            - (v20 & (v19 & 0x7FFFFF | 0x800000))
                            + 1)) >> (((v17 & (23 - v15)) > 31 ? -1 : v17 & (23 - v15)) & 0x1F) << v89)
                         - (~(((v18 - 1) | ((v19 & ~v20) - 1) & (v20 + 1)) >> 31) & (v19 >> 31) & 1);
g4_m128_raw(v21) = (unsigned int)v84[4];
          *(float *)g4_m128_ptr<int32_t>(v21) = (float)(*(float *)g4_m128_ptr<int32_t>(v21) - v12) * v11;
          v22 = (_mm_cvtsi128_si32(v21) & 0x7F800000u) >> 23;
          v23 = v22 - 127;
          v24 = v22 - 150;
          v25 = (int)(v22 - 151) >> 31;
          v90 = (int)(~v25 & v24) > 31 ? -1 : ~v25 & v24;
          v26 = ((uint8_t)(v25 & (23 - v23)) | (uint8_t)-((v25 & (23 - v23)) > 31)) & 0x1F;
          v27 = _mm_cvtsi128_si32(v21) & ~(((_mm_cvtsi128_si32(v21) & 0x7FFFFFFF) - 1) >> 31);
          v28 = ~v25 | (-8388608 >> ((v25 & 0x17) - v26));
          v78 = v26 - 1;
          v80 = v27 >> 31;
          v29 = ~(v23 >> 31)
              & (((v27 >> 31) | ((v28 & (v27 & 0x7FFFFF | 0x800000)) + (v28 & (v27 & 0x7FFFFF | 0x800000)) - 1))
               - (v28 & (v27 & 0x7FFFFF | 0x800000))
               + 1);
          LOBYTE(v25) = v26;
          v30 = (v27 & ~v28) - 1;
          v31 = i;
          v84 += 2;
          v99[2 * v31 + 4] = (v29 >> v25 << v90) - (~((v78 | v30 & (v28 + 1)) >> 31) & v80 & 1) + 1;
        }
        v32 = v99[6] - v99[5];
        LOBYTE(v99[1]) = 0;
        v99[0] = *v87 + 1;
        if ( v99[6] - v99[5] < v99[4] - v99[3] )
          v32 = v99[4] - v99[3];
        if ( v32 < v99[8] - v99[7] )
          v32 = v99[8] - v99[7];
        if ( v32 != 0 )
        {
          v33 = v32;
          v34 = 0;
          do
          {
            ++v34;
            v33 >>= 1;
          }
          while ( v33 != 0 );
          v35 = 1 << (v34 - 4);
        }
        else
        {
          v35 = 0;
        }
        v36 = v32 + v35;
        v37 = 3;
        v38 = -1;
        do
        {
          if ( v36 != 0 )
          {
            v39 = v36;
            v40 = 0;
            do
            {
              ++v40;
              v39 >>= 1;
            }
            while ( v39 != 0 );
          }
          else
          {
            v40 = 0;
          }
          if ( v38 < v40 )
            v38 = v40;
          --v37;
        }
        while ( v37 != 0 );
        v41 = 24;
        if ( v38 <= 24 )
          v41 = v38;
        v99[2] = v41;
        v75 = hkpMoppDefaultAssembler::assemblesubNode(v83, v76, v87, v99);
        if ( v75 >= 0 )
          hkpMoppDefaultAssembler::releaseNode((int)(uintptr_t)(v83), v76);
      }
      v42 = (uint32_t *)v96[28];
      v77 = (int)(uintptr_t)(v42);
      if ( v42 != nullptr )
      {
        std::memcpy(v99, v87, 72);
        v99[14] = v42[10] - v42[9];
        v99[15] = v42[11];
        if ( (int)v42[11] > 0 )
        {
          v99[16] = v42[12];
          v99[17] = v42[13] - v42[12];
        }
        v43 = *((float *)v83 + 15);
        v85 = v42;
        for ( j = 0; j != 3; ++j )
        {
          v44 = *((float *)v83 + j + 12);
g4_m128_raw(v45) = (unsigned int)v85[3];
          *(float *)g4_m128_ptr<int32_t>(v45) = (float)(*(float *)g4_m128_ptr<int32_t>(v45) - v44) * v43;
          v46 = (_mm_cvtsi128_si32(v45) & 0x7F800000u) >> 23;
          v47 = v46 - 127;
          v48 = v46 - 150;
          v49 = (int)(v46 - 151) >> 31;
          v91 = (int)(~v49 & v48) > 31 ? -1 : ~(uint8_t)v49 & v48;
          v50 = ((uint8_t)(v49 & (23 - v47)) | (uint8_t)-((v49 & (23 - v47)) > 31)) & 0x1F;
          v51 = _mm_cvtsi128_si32(v45) & ~(((_mm_cvtsi128_si32(v45) & 0x7FFFFFFF) - 1) >> 31);
          v52 = ~v49 | (-8388608 >> ((v49 & 0x17) - v50));
          v99[2 * j + 3] = ((~(v47 >> 31)
                           & (((v51 >> 31)
                             | ((v52 & (v51 & 0x7FFFFF | 0x800000)) + (v52 & (v51 & 0x7FFFFF | 0x800000)) - 1))
                            - (v52 & (v51 & 0x7FFFFF | 0x800000))
                            + 1)) >> (((v49 & (23 - v47)) > 31 ? -1 : v49 & (23 - v47)) & 0x1F) << v91)
                         - (~(((v50 - 1) | ((v51 & ~v52) - 1) & (v52 + 1)) >> 31) & (v51 >> 31) & 1);
g4_m128_raw(v53) = (unsigned int)v85[4];
          *(float *)g4_m128_ptr<int32_t>(v53) = (float)(*(float *)g4_m128_ptr<int32_t>(v53) - v44) * v43;
          v54 = (_mm_cvtsi128_si32(v53) & 0x7F800000u) >> 23;
          v55 = v54 - 127;
          v56 = v54 - 150;
          v57 = (int)(v54 - 151) >> 31;
          v92 = (int)(~v57 & v56) > 31 ? -1 : ~v57 & v56;
          v58 = ((uint8_t)(v57 & (23 - v55)) | (uint8_t)-((v57 & (23 - v55)) > 31)) & 0x1F;
          v59 = _mm_cvtsi128_si32(v53) & ~(((_mm_cvtsi128_si32(v53) & 0x7FFFFFFF) - 1) >> 31);
          v60 = ~v57 | (-8388608 >> ((v57 & 0x17) - v58));
          v79 = v58 - 1;
          v81 = v59 >> 31;
          v61 = ~(v55 >> 31)
              & (((v59 >> 31) | ((v60 & (v59 & 0x7FFFFF | 0x800000)) + (v60 & (v59 & 0x7FFFFF | 0x800000)) - 1))
               - (v60 & (v59 & 0x7FFFFF | 0x800000))
               + 1);
          LOBYTE(v57) = v58;
          v62 = (v59 & ~v60) - 1;
          v63 = j;
          v85 += 2;
          v99[2 * v63 + 4] = (v61 >> v57 << v92) - (~((v79 | v62 & (v60 + 1)) >> 31) & v81 & 1) + 1;
        }
        v64 = v99[6] - v99[5];
        LOBYTE(v99[1]) = 0;
        v99[0] = *v87 + 1;
        if ( v99[6] - v99[5] < v99[4] - v99[3] )
          v64 = v99[4] - v99[3];
        if ( v64 < v99[8] - v99[7] )
          v64 = v99[8] - v99[7];
        if ( v64 != 0 )
        {
          v65 = v64;
          v66 = 0;
          do
          {
            ++v66;
            v65 >>= 1;
          }
          while ( v65 != 0 );
          v67 = 1 << (v66 - 4);
        }
        else
        {
          v67 = 0;
        }
        v68 = v64 + v67;
        v69 = 3;
        v70 = -1;
        do
        {
          if ( v68 != 0 )
          {
            v71 = v68;
            v72 = 0;
            do
            {
              ++v72;
              v71 >>= 1;
            }
            while ( v71 != 0 );
          }
          else
          {
            v72 = 0;
          }
          if ( v70 < v72 )
            v70 = v72;
          --v69;
        }
        while ( v69 != 0 );
        v73 = 24;
        if ( v70 <= 24 )
          v73 = v70;
        v99[2] = v73;
        v74 = hkpMoppDefaultAssembler::assemblesubNode(v83, v77, v87, v99);
        result = -1;
        if ( v74 < 0 )
          return result;
        hkpMoppDefaultAssembler::releaseNode((int)(uintptr_t)(v83), v77);
        if ( v75 >= 0 )
        {
          hkpMoppDefaultAssembler::shouldAssemble(&v97, (int)(uintptr_t)(v83), (int)(uintptr_t)(v96), v87);
          if ( v97 )
          {
            ++*((uint32_t *)v83 + 10);
            return v75
                 + v74
                 + hkpMoppDefaultAssembler::assembleNonTerminalCommand(a1, a2, v83, (int)(uintptr_t)(v96), (int)(uintptr_t)(v86), v87, v98);
          }
        }
      }
    }
    return -1;
  }
  *((uint8_t *)a6 + 4) = 1;
  v82 = *((uint32_t *)v83 + 6);
  if ( *((uint8_t *)v96 + 56) != 0 )
  {
    result = -1;
  }
  else
  {
    v7 = *((uint32_t *)v83 + 4);
    v8 = v83;
    do
    {
      v88 = *(uint32_t *)(v7 + 12);
      v93 = v8;
      std::memcpy(v99, v87, 72);
      result = hkpMoppDefaultAssembler::assemblesubNode(v8, v96, v86, v99);
      v8 = v93;
      if ( *((uint32_t *)v93 + 10) > *((uint32_t *)v93 + 9) )
        break;
      v7 = *((uint32_t *)v93 + 4);
      if ( v88 == *(uint32_t *)(v7 + 12) )
      {
        v9 = *((uint32_t *)v93 + 6);
        if ( v9 < 0 )
          break;
        *((uint32_t *)v93 + 6) = v9 - *((uint32_t *)v93 + 28);
      }
    }
    while ( *((uint8_t *)v96 + 56) == 0 );
  }
  *((uint32_t *)v83 + 6) = v82;
  *((uint8_t *)v87 + 4) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::calcChunkPoints  (binary VA: 0x1b0a820)
// Original: hkpMoppDefaultAssembler::calcChunkPoints
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::calcChunkPoints(__m128i a1, __m128i a2, hkpMoppDefaultAssembler::Self *a3, int a4, uint32_t *a5, uint32_t *a6, hkMemoryAllocator::Self *a7)
{
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  uint32_t *v13;
  float v14; // xmm2_4
  float v15; // xmm1_4
  __m128i v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  __m128i v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  char v37;
  int v38;
  int v39;
  int v40;
  int v41;
  unsigned int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  uint32_t *v47;
  float v48; // xmm2_4
  float v49; // xmm1_4
  __m128i v50;
  unsigned int v51;
  int v52;
  unsigned int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  __m128i v58;
  unsigned int v59;
  int v60;
  unsigned int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  unsigned int v70;
  char v71;
  int v72;
  int v73;
  int v74;
  int v75;
  unsigned int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  unsigned int v83;
  int v84;
  unsigned int v85;
  int v86;
  unsigned int v87;
  int v88;
  unsigned int v89;
  unsigned int v90;
  int v91;
  uint32_t *v92;
  int v93;
  uint32_t *v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  hkMemoryAllocator::Self *v103;
  unsigned int v104;
  unsigned int v105;
  unsigned int v106;
  int v107;
  unsigned int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  unsigned int v114;
  unsigned int v115;
  unsigned int v116;
  unsigned int v117;
  int v118;
  int v119;
  int v120;
  int i;
  int v122;
  int j;
  int v124;
  int v125;
  unsigned int v126;
  unsigned int v127;
  int v128;
  int v129;
  int v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef uint32_t *_g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef char *_g4_t_v137;
  typedef unsigned int _g4_t_v138;
  typedef uint32_t *_g4_t_v139;
  typedef uint32_t *_g4_t_v140;
  typedef int _g4_t_v141;
  typedef int _g4_t_v142;
  typedef hkMemoryAllocator::Self *_g4_t_v143;
  typedef int _g4_t_v144;
  typedef int _g4_t_v145;
  typedef int _g4_t_v146;
  typedef int _g4_t_v147;
  typedef char _g4_t_v148;
  typedef int _g4_t_v149;
  typedef int _g4_t_v150;
  typedef uint32_t *_g4_t_v151;
  typedef int _g4_t_v152;
  typedef uint32_t *_g4_t_v153;
  typedef int _g4_t_v154;
  typedef int _g4_t_v155;
  typedef int _g4_t_v156;
  typedef unsigned int _g4_t_v157;
  typedef int _g4_t_v158;
  typedef int _g4_t_v159;
  typedef int _g4_t_v160;
  typedef uint32_t *_g4_t_v161;
  typedef int _g4_t_v162;
  typedef char _g4_t_v163;
  typedef unsigned int _g4_t_v164;
  typedef int _g4_t_v165;
  typedef int _g4_t_v166;
  typedef int _g4_t_v167;
  typedef int _g4_t_v168;
  typedef int _g4_t_v169;
  typedef int _g4_t_v170;
  typedef int _g4_t_v171;
  typedef int _g4_t_v172;
  typedef int _g4_t_v173;
  typedef int _g4_t_v174;
  typedef int _g4_t_v175;
  typedef unsigned int _g4_t_v176;
  typedef int _g4_t_v177;
  typedef int _g4_t_v178;
  typedef unsigned int _g4_t_v179;
  typedef hkpMoppDefaultAssembler::Self *_g4_t_v180;
  typedef hkpMoppDefaultAssembler::Self *_g4_t_v181;
  typedef int _g4_t_v182;
  typedef char _g4_t_v183[4];
  typedef unsigned int _g4_t_v184;
  typedef int _g4_t_v185;
  typedef int _g4_t_v186;
  typedef unsigned int _g4_t_v187;
  typedef int _g4_t_v188;
  typedef int _g4_t_v189;
  typedef uint32_t _g4_t_v190[8];
  typedef uint64_t _g4_t_v191[11];
  typedef hkpMoppDefaultAssembler::Self **_g4_t_v192;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (8u + sizeof(_g4_t_v131)) > _g4_s0 ? (8u + sizeof(_g4_t_v131)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v132)) > _g4_s1 ? (8u + sizeof(_g4_t_v132)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v133)) > _g4_s2 ? (20u + sizeof(_g4_t_v133)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v134)) > _g4_s3 ? (24u + sizeof(_g4_t_v134)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v135)) > _g4_s4 ? (24u + sizeof(_g4_t_v135)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v136)) > _g4_s5 ? (28u + sizeof(_g4_t_v136)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v137)) > _g4_s6 ? (32u + sizeof(_g4_t_v137)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v138)) > _g4_s7 ? (32u + sizeof(_g4_t_v138)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v139)) > _g4_s8 ? (36u + sizeof(_g4_t_v139)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v140)) > _g4_s9 ? (40u + sizeof(_g4_t_v140)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v141)) > _g4_s10 ? (40u + sizeof(_g4_t_v141)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v142)) > _g4_s11 ? (44u + sizeof(_g4_t_v142)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v143)) > _g4_s12 ? (48u + sizeof(_g4_t_v143)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v144)) > _g4_s13 ? (52u + sizeof(_g4_t_v144)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v145)) > _g4_s14 ? (52u + sizeof(_g4_t_v145)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v146)) > _g4_s15 ? (52u + sizeof(_g4_t_v146)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v147)) > _g4_s16 ? (52u + sizeof(_g4_t_v147)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v148)) > _g4_s17 ? (52u + sizeof(_g4_t_v148)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v149)) > _g4_s18 ? (56u + sizeof(_g4_t_v149)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v150)) > _g4_s19 ? (56u + sizeof(_g4_t_v150)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v151)) > _g4_s20 ? (56u + sizeof(_g4_t_v151)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v152)) > _g4_s21 ? (56u + sizeof(_g4_t_v152)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v153)) > _g4_s22 ? (60u + sizeof(_g4_t_v153)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v154)) > _g4_s23 ? (60u + sizeof(_g4_t_v154)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v155)) > _g4_s24 ? (60u + sizeof(_g4_t_v155)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v156)) > _g4_s25 ? (60u + sizeof(_g4_t_v156)) : _g4_s25,
    _g4_s27 = (60u + sizeof(_g4_t_v157)) > _g4_s26 ? (60u + sizeof(_g4_t_v157)) : _g4_s26,
    _g4_s28 = (60u + sizeof(_g4_t_v158)) > _g4_s27 ? (60u + sizeof(_g4_t_v158)) : _g4_s27,
    _g4_s29 = (64u + sizeof(_g4_t_v159)) > _g4_s28 ? (64u + sizeof(_g4_t_v159)) : _g4_s28,
    _g4_s30 = (64u + sizeof(_g4_t_v160)) > _g4_s29 ? (64u + sizeof(_g4_t_v160)) : _g4_s29,
    _g4_s31 = (68u + sizeof(_g4_t_v161)) > _g4_s30 ? (68u + sizeof(_g4_t_v161)) : _g4_s30,
    _g4_s32 = (68u + sizeof(_g4_t_v162)) > _g4_s31 ? (68u + sizeof(_g4_t_v162)) : _g4_s31,
    _g4_s33 = (68u + sizeof(_g4_t_v163)) > _g4_s32 ? (68u + sizeof(_g4_t_v163)) : _g4_s32,
    _g4_s34 = (68u + sizeof(_g4_t_v164)) > _g4_s33 ? (68u + sizeof(_g4_t_v164)) : _g4_s33,
    _g4_s35 = (68u + sizeof(_g4_t_v165)) > _g4_s34 ? (68u + sizeof(_g4_t_v165)) : _g4_s34,
    _g4_s36 = (68u + sizeof(_g4_t_v166)) > _g4_s35 ? (68u + sizeof(_g4_t_v166)) : _g4_s35,
    _g4_s37 = (72u + sizeof(_g4_t_v167)) > _g4_s36 ? (72u + sizeof(_g4_t_v167)) : _g4_s36,
    _g4_s38 = (72u + sizeof(_g4_t_v168)) > _g4_s37 ? (72u + sizeof(_g4_t_v168)) : _g4_s37,
    _g4_s39 = (76u + sizeof(_g4_t_v169)) > _g4_s38 ? (76u + sizeof(_g4_t_v169)) : _g4_s38,
    _g4_s40 = (76u + sizeof(_g4_t_v170)) > _g4_s39 ? (76u + sizeof(_g4_t_v170)) : _g4_s39,
    _g4_s41 = (76u + sizeof(_g4_t_v171)) > _g4_s40 ? (76u + sizeof(_g4_t_v171)) : _g4_s40,
    _g4_s42 = (76u + sizeof(_g4_t_v172)) > _g4_s41 ? (76u + sizeof(_g4_t_v172)) : _g4_s41,
    _g4_s43 = (76u + sizeof(_g4_t_v173)) > _g4_s42 ? (76u + sizeof(_g4_t_v173)) : _g4_s42,
    _g4_s44 = (80u + sizeof(_g4_t_v174)) > _g4_s43 ? (80u + sizeof(_g4_t_v174)) : _g4_s43,
    _g4_s45 = (80u + sizeof(_g4_t_v175)) > _g4_s44 ? (80u + sizeof(_g4_t_v175)) : _g4_s44,
    _g4_s46 = (80u + sizeof(_g4_t_v176)) > _g4_s45 ? (80u + sizeof(_g4_t_v176)) : _g4_s45,
    _g4_s47 = (80u + sizeof(_g4_t_v177)) > _g4_s46 ? (80u + sizeof(_g4_t_v177)) : _g4_s46,
    _g4_s48 = (80u + sizeof(_g4_t_v178)) > _g4_s47 ? (80u + sizeof(_g4_t_v178)) : _g4_s47,
    _g4_s49 = (80u + sizeof(_g4_t_v179)) > _g4_s48 ? (80u + sizeof(_g4_t_v179)) : _g4_s48,
    _g4_s50 = (84u + sizeof(_g4_t_v180)) > _g4_s49 ? (84u + sizeof(_g4_t_v180)) : _g4_s49,
    _g4_s51 = (84u + sizeof(_g4_t_v181)) > _g4_s50 ? (84u + sizeof(_g4_t_v181)) : _g4_s50,
    _g4_s52 = (84u + sizeof(_g4_t_v182)) > _g4_s51 ? (84u + sizeof(_g4_t_v182)) : _g4_s51,
    _g4_s53 = (88u + sizeof(_g4_t_v183)) > _g4_s52 ? (88u + sizeof(_g4_t_v183)) : _g4_s52,
    _g4_s54 = (92u + sizeof(_g4_t_v184)) > _g4_s53 ? (92u + sizeof(_g4_t_v184)) : _g4_s53,
    _g4_s55 = (96u + sizeof(_g4_t_v185)) > _g4_s54 ? (96u + sizeof(_g4_t_v185)) : _g4_s54,
    _g4_s56 = (100u + sizeof(_g4_t_v186)) > _g4_s55 ? (100u + sizeof(_g4_t_v186)) : _g4_s55,
    _g4_s57 = (108u + sizeof(_g4_t_v187)) > _g4_s56 ? (108u + sizeof(_g4_t_v187)) : _g4_s56,
    _g4_s58 = (112u + sizeof(_g4_t_v188)) > _g4_s57 ? (112u + sizeof(_g4_t_v188)) : _g4_s57,
    _g4_s59 = (116u + sizeof(_g4_t_v189)) > _g4_s58 ? (116u + sizeof(_g4_t_v189)) : _g4_s58,
    _g4_s60 = (124u + sizeof(_g4_t_v190)) > _g4_s59 ? (124u + sizeof(_g4_t_v190)) : _g4_s59,
    _g4_s61 = (156u + sizeof(_g4_t_v191)) > _g4_s60 ? (156u + sizeof(_g4_t_v191)) : _g4_s60,
    _g4_s62 = (244u + sizeof(_g4_t_v192)) > _g4_s61 ? (244u + sizeof(_g4_t_v192)) : _g4_s61
  };
  alignas(16) uint8_t _g4_sf[_g4_s62];
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 8u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 8u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 20u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 24u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 24u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 28u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 32u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 32u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 36u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 40u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 40u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 44u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 48u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 52u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 52u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 52u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 52u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 52u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 56u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 56u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 56u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 56u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 60u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 60u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 60u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 60u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 60u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 60u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 64u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 64u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 68u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 68u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 68u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 68u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 68u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 68u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 72u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 72u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 76u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 76u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 76u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 76u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 76u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 80u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 80u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 80u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 80u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 80u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 80u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 84u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 84u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 84u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 88u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 92u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 96u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 100u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 108u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 112u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 116u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 124u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 156u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 244u);

  v192 = &a3;
  v180 = a3;
  v159 = a4;
  v139 = a5;
  v161 = a6;
  v143 = a7;
  if ( *(uint32_t *)(*((uint32_t *)a3 + 5) + 28) != 0 )
    a6[13] = a5[13];
  if ( *(uint8_t *)(v159 + 4) != 0 )
  {
    if ( *(uint32_t *)(*((uint32_t *)v180 + 5) + 28) != 0 )
      v161[13] = **(uint32_t **)(v159 + 96);
    v7 = *(uint32_t *)(*((uint32_t *)v180 + 4) + 12);
    hkpMoppDefaultAssembler::assembleCutAndTerminalCommand(v180, v159, (int)(uintptr_t)(v139), (int)(uintptr_t)(v161));
    v8 = *(uint32_t *)(*((uint32_t *)v180 + 4) + 12) - v7;
    v9 = *(uint32_t **)(v159 + 96);
    v10 = *((uint32_t *)v143 + 1);
    if ( v10 == (*((uint32_t *)v143 + 2) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v143, 4, v131);
      v10 = *((uint32_t *)v143 + 1);
    }
    *(uint32_t *)(*(uint32_t *)v143 + 4 * v10) = *v9;
    ++*((uint32_t *)v143 + 1);
    LODWORD(v191[0]) = **(uint32_t **)(v159 + 96);
    v11 = *(uint32_t *)(*((uint32_t *)v180 + 5) + 28);
    if ( v11 != 0 )
      v8 += G4_VCALL<int>(v11, 8, v191, 1);
    return v8;
  }
  LOBYTE(v190[0]) = 0;
  v190[1] = -1;
  hkpMoppDefaultAssembler::initTopDown((int)(uintptr_t)(v180), v159, v139, v161, (int)(uintptr_t)(v190));
  v161[13] = v139[13];
  std::memcpy(v191, v161, 72);
  v13 = *(uint32_t **)(v159 + 116);
  v184 = 0;
  v140 = v13;
  v185 = 0;
  v186 = 0x80000000;
  LODWORD(v191[7]) = v13[10] - v13[9];
  HIDWORD(v191[7]) = v13[11];
  if ( (int)v13[11] > 0 )
  {
    LODWORD(v191[8]) = v13[12];
    HIDWORD(v191[8]) = v13[13] - v13[12];
  }
  v14 = *((float *)v180 + 15);
  v153 = v13;
  v174 = 0;
  v137 = (char *)v180 + 48;
  do
  {
    v15 = *(float *)&v137[4 * v174];
g4_m128_raw(v16) = (unsigned int)v153[3];
    *(float *)g4_m128_ptr<int32_t>(v16) = (float)(*(float *)g4_m128_ptr<int32_t>(v16) - v15) * v14;
    v17 = (_mm_cvtsi128_si32(v16) & 0x7F800000u) >> 23;
    v18 = 23 - (v17 - 127);
    v149 = v17 - 127;
    v19 = v17 - 150;
    v20 = (int)(v17 - 151) >> 31;
    v169 = (int)(~v20 & v19) > 31 ? -1 : ~v20 & v19;
    v21 = ((uint8_t)(v20 & v18) | (uint8_t)-((v20 & v18) > 31)) & 0x1F;
    v22 = _mm_cvtsi128_si32(v16) & ~(((_mm_cvtsi128_si32(v16) & 0x7FFFFFFF) - 1) >> 31);
    v23 = ~v20 | (-8388608 >> ((v20 & 0x17) - v21));
    HIDWORD(v191[v174 + 1]) = ((~(v149 >> 31)
                              & (((v22 >> 31)
                                | ((v23 & (v22 & 0x7FFFFF | 0x800000)) + (v23 & (v22 & 0x7FFFFF | 0x800000)) - 1))
                               - (v23 & (v22 & 0x7FFFFF | 0x800000))
                               + 1)) >> v21 << v169)
                            - (~(((v21 - 1) | ((v22 & ~v23) - 1) & (v23 + 1)) >> 31) & (v22 >> 31) & 1);
g4_m128_raw(v24) = (unsigned int)v153[4];
    *(float *)g4_m128_ptr<int32_t>(v24) = (float)(*(float *)g4_m128_ptr<int32_t>(v24) - v15) * v14;
    v25 = (_mm_cvtsi128_si32(v24) & 0x7F800000u) >> 23;
    v26 = 23 - (v25 - 127);
    v150 = v25 - 127;
    v27 = v25 - 150;
    v28 = (int)(v25 - 151) >> 31;
    v170 = (int)(~v28 & v27) > 31 ? -1 : ~v28 & v27;
    v29 = ((uint8_t)(v28 & v26) | (uint8_t)-((v28 & v26) > 31)) & 0x1F;
    v30 = _mm_cvtsi128_si32(v24) & ~(((_mm_cvtsi128_si32(v24) & 0x7FFFFFFF) - 1) >> 31);
    v31 = (-8388608 >> ((v28 & 0x17) - v29)) | ~v28;
    v32 = (~(v150 >> 31)
         & (((v30 >> 31) | ((v31 & (v30 & 0x7FFFFF | 0x800000)) + (v31 & (v30 & 0x7FFFFF | 0x800000)) - 1))
          - (v31 & (v30 & 0x7FFFFF | 0x800000))
          + 1)) >> v29 << v170;
    v33 = ~(((v29 - 1) | ((v30 & ~v31) - 1) & (v31 + 1)) >> 31) & (v30 >> 31) & 1;
    v34 = v174++;
    v153 += 2;
    LODWORD(v191[v34 + 2]) = v32 - v33 + 1;
  }
  while ( v174 != 3 );
  v35 = LODWORD(v191[3]) - HIDWORD(v191[2]);
  BYTE4(v191[0]) = 0;
  LODWORD(v191[0]) = *v161 + 1;
  if ( LODWORD(v191[3]) - HIDWORD(v191[2]) < LODWORD(v191[2]) - HIDWORD(v191[1]) )
    v35 = LODWORD(v191[2]) - HIDWORD(v191[1]);
  if ( v35 < LODWORD(v191[4]) - HIDWORD(v191[3]) )
    v35 = LODWORD(v191[4]) - HIDWORD(v191[3]);
  if ( v35 != 0 )
  {
    v36 = v35;
    v37 = 0;
    do
    {
      ++v37;
      v36 >>= 1;
    }
    while ( v36 != 0 );
    v38 = 1 << (v37 - 4);
  }
  else
  {
    v38 = 0;
  }
  v39 = v35 + v38;
  v40 = 3;
  v41 = -1;
  do
  {
    if ( v39 != 0 )
    {
      v42 = v39;
      v43 = 0;
      do
      {
        ++v43;
        v42 >>= 1;
      }
      while ( v42 != 0 );
    }
    else
    {
      v43 = 0;
    }
    if ( v41 < v43 )
      v41 = v43;
    --v40;
  }
  while ( v40 != 0 );
  v44 = 24;
  if ( v41 <= 24 )
    v44 = v41;
  LODWORD(v191[1]) = v44;
  v45 = *(uint32_t *)(*((uint32_t *)v180 + 4) + 12);
  hkpMoppDefaultAssembler::calcChunkPoints(v180, v140, v161, v191, &v184);
  v133 = *((uint32_t *)v180 + 4);
  v141 = *(uint32_t *)(v133 + 12) - v45;
  v46 = *(uint32_t *)(*((uint32_t *)v180 + 5) + 28);
  if ( v46 != 0 && v185 != 0 )
  {
    v175 = v141 + G4_VCALL<int>(v46, 8, v184, v185);
    v133 = *((uint32_t *)v180 + 4);
  }
  else
  {
    v175 = *(uint32_t *)(v133 + 12) - v45;
  }
  std::memcpy(v191, v161, 72);
  v47 = *(uint32_t **)(v159 + 112);
  v187 = 0;
  v134 = v47;
  v188 = 0;
  v189 = 0x80000000;
  LODWORD(v191[7]) = v47[10] - v47[9];
  HIDWORD(v191[7]) = v47[11];
  if ( (int)v47[11] > 0 )
  {
    LODWORD(v191[8]) = v47[12];
    HIDWORD(v191[8]) = v47[13] - v47[12];
  }
  v171 = 0;
  v48 = *((float *)v180 + 15);
  v151 = v47;
  do
  {
    v49 = *(float *)&v137[4 * v171];
g4_m128_raw(v50) = (unsigned int)v151[3];
    *(float *)g4_m128_ptr<int32_t>(v50) = (float)(*(float *)g4_m128_ptr<int32_t>(v50) - v49) * v48;
    v51 = (_mm_cvtsi128_si32(v50) & 0x7F800000u) >> 23;
    v52 = 23 - (v51 - 127);
    v144 = v51 - 127;
    v53 = v51 - 150;
    v54 = (int)(v51 - 151) >> 31;
    v154 = (int)(~v54 & v53) > 31 ? -1 : ~v54 & v53;
    v55 = ((uint8_t)(v54 & v52) | (uint8_t)-((v54 & v52) > 31)) & 0x1F;
    v56 = _mm_cvtsi128_si32(v50) & ~(((_mm_cvtsi128_si32(v50) & 0x7FFFFFFF) - 1) >> 31);
    v57 = ~v54 | (-8388608 >> ((v54 & 0x17) - v55));
    HIDWORD(v191[v171 + 1]) = ((~(v144 >> 31)
                              & (((v56 >> 31)
                                | ((v57 & (v56 & 0x7FFFFF | 0x800000)) + (v57 & (v56 & 0x7FFFFF | 0x800000)) - 1))
                               - (v57 & (v56 & 0x7FFFFF | 0x800000))
                               + 1)) >> v55 << v154)
                            - (~(((v55 - 1) | ((v56 & ~v57) - 1) & (v57 + 1)) >> 31) & (v56 >> 31) & 1);
g4_m128_raw(v58) = (unsigned int)v151[4];
    *(float *)g4_m128_ptr<int32_t>(v58) = (float)(*(float *)g4_m128_ptr<int32_t>(v58) - v49) * v48;
    v59 = (_mm_cvtsi128_si32(v58) & 0x7F800000u) >> 23;
    v60 = 23 - (v59 - 127);
    v145 = v59 - 127;
    v61 = v59 - 150;
    v62 = (int)(v59 - 151) >> 31;
    v155 = (int)(~v62 & v61) > 31 ? -1 : ~v62 & v61;
    v63 = ((uint8_t)(v62 & v60) | (uint8_t)-((v62 & v60) > 31)) & 0x1F;
    v64 = _mm_cvtsi128_si32(v58) & ~(((_mm_cvtsi128_si32(v58) & 0x7FFFFFFF) - 1) >> 31);
    v65 = (-8388608 >> ((v62 & 0x17) - v63)) | ~v62;
    v66 = (~(v145 >> 31)
         & (((v64 >> 31) | ((v65 & (v64 & 0x7FFFFF | 0x800000)) + (v65 & (v64 & 0x7FFFFF | 0x800000)) - 1))
          - (v65 & (v64 & 0x7FFFFF | 0x800000))
          + 1)) >> v63 << v155;
    v67 = ~(((v63 - 1) | ((v64 & ~v65) - 1) & (v65 + 1)) >> 31) & (v64 >> 31) & 1;
    v68 = v171++;
    v151 += 2;
    LODWORD(v191[v68 + 2]) = v66 - v67 + 1;
  }
  while ( v171 != 3 );
  v69 = LODWORD(v191[3]) - HIDWORD(v191[2]);
  BYTE4(v191[0]) = 0;
  LODWORD(v191[0]) = *v161 + 1;
  if ( LODWORD(v191[3]) - HIDWORD(v191[2]) < LODWORD(v191[2]) - HIDWORD(v191[1]) )
    v69 = LODWORD(v191[2]) - HIDWORD(v191[1]);
  if ( v69 < LODWORD(v191[4]) - HIDWORD(v191[3]) )
    v69 = LODWORD(v191[4]) - HIDWORD(v191[3]);
  if ( v69 != 0 )
  {
    v70 = v69;
    v71 = 0;
    do
    {
      ++v71;
      v70 >>= 1;
    }
    while ( v70 != 0 );
    v72 = 1 << (v71 - 4);
  }
  else
  {
    v72 = 0;
  }
  v73 = v69 + v72;
  v74 = 3;
  v75 = -1;
  do
  {
    if ( v73 != 0 )
    {
      v76 = v73;
      v77 = 0;
      do
      {
        ++v77;
        v76 >>= 1;
      }
      while ( v76 != 0 );
    }
    else
    {
      v77 = 0;
    }
    if ( v75 < v77 )
      v75 = v77;
    --v74;
  }
  while ( v74 != 0 );
  v78 = 24;
  v138 = 0;
  if ( v75 <= 24 )
    v78 = v75;
  LODWORD(v191[1]) = v78;
  v79 = *(uint32_t *)(v133 + 12);
  hkpMoppDefaultAssembler::calcChunkPoints(v180, v134, v161, v191, &v187);
  v80 = *((uint32_t *)v180 + 4);
  v142 = *(uint32_t *)(v80 + 12) - v79;
  v81 = *(uint32_t *)(*((uint32_t *)v180 + 5) + 28);
  if ( v81 != 0 && v188 != 0 )
  {
    v172 = v142 + G4_VCALL<int>(v81, 8, v187, v188);
    v80 = *((uint32_t *)v180 + 4);
  }
  else
  {
    v172 = *(uint32_t *)(v80 + 12) - v79;
  }
  v82 = *(uint32_t *)(v80 + 12);
  hkpMoppDefaultAssembler::assembleNonTerminalCommand(a1, a2, v180, v159, (int)(uintptr_t)(v139), v161, v190);
  v83 = v185;
  v84 = *(uint32_t *)(*((uint32_t *)v180 + 4) + 12);
  v191[0] = 0;
  v152 = v84 - v82;
  LODWORD(v191[1]) = 0x80000000;
  v85 = v184;
  if ( v185 <= 0 )
  {
    v146 = 4 * v185;
    hkMemUtil::memMove((hkMemUtil::Self *)(4 * v185), nullptr, 0);
    v86 = v188;
    HIDWORD(v191[0]) = v83;
    v162 = v188 + v83;
    v87 = v187;
    v88 = v191[1] & 0x3FFFFFFF;
    if ( (int)(v188 + v83) <= (v191[1] & 0x3FFFFFFF) )
      goto LABEL_61;
    v119 = v188 + v83;
    goto LABEL_127;
  }
  hkArrayUtil::reserve(
    (hkArrayUtil::Self *)v183,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
    (int *)v191,
    v185,
    4);
  v146 = 4 * v83;
  hkMemUtil::memMove((hkMemUtil::Self *)(4 * v83 + LODWORD(v191[0])), (char *)v191[0], 0);
  v124 = v191[0];
  if ( (v85 >= LODWORD(v191[0]) + 16 || LODWORD(v191[0]) >= v85 + 16) && v83 > 0xB )
  {
    v135 = v83;
    v125 = 0;
    v165 = 4 * (v83 >> 2);
    v126 = v83 >> 2;
    v127 = 0;
    do
    {
      ++v127;
      *(__m128i *)(v124 + v125) = *(__m128i *)(v85 + v125);
      v125 += 16;
    }
    while ( v127 < v126 );
    v83 = v135;
    if ( v135 != v165 )
    {
      *(uint32_t *)(v124 + 4 * v165) = *(uint32_t *)(v85 + 4 * v165);
      if ( v135 > v165 + 1 )
      {
        *(uint32_t *)(v124 + 4 * (v165 + 1)) = *(uint32_t *)(v85 + 4 * (v165 + 1));
        if ( v135 > v165 + 2 )
          *(uint32_t *)(v124 + 4 * (v165 + 2)) = *(uint32_t *)(v85 + 4 * (v165 + 2));
      }
    }
  }
  else
  {
    v130 = 0;
    do
    {
      *(uint32_t *)(v124 + 4 * v130) = *(uint32_t *)(v85 + 4 * v130);
      ++v130;
    }
    while ( v130 != v83 );
  }
  v86 = v188;
  HIDWORD(v191[0]) = v83;
  v162 = v188 + v83;
  v119 = v188 + v83;
  v87 = v187;
  v88 = v191[1] & 0x3FFFFFFF;
  if ( v119 > (v191[1] & 0x3FFFFFFF) )
  {
LABEL_127:
    v120 = 2 * v88;
    v136 = v86;
    if ( v120 < v119 )
      v120 = v119;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v183,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)v191,
      v120,
      4);
    v86 = v136;
  }
LABEL_61:
  v156 = v86;
  hkMemUtil::memMove((hkMemUtil::Self *)(LODWORD(v191[0]) + 4 * v162), (char *)(v146 + LODWORD(v191[0])), 0);
  v89 = v156;
  v167 = v146 + LODWORD(v191[0]);
  if ( v156 > 0 )
  {
    if ( (v146 + LODWORD(v191[0]) >= v87 + 16 || v87 >= v146 + LODWORD(v191[0]) + 16) && (unsigned int)v156 > 0xB )
    {
      v90 = 0;
      v91 = 0;
      v157 = (unsigned int)v156 >> 2;
      v147 = 4 * (v89 >> 2);
      do
      {
        ++v90;
        *(__m128i *)(v167 + v91) = *(__m128i *)(v87 + v91);
        v91 += 16;
      }
      while ( v90 < v157 );
      if ( v89 != v147 )
      {
        *(uint32_t *)(v167 + 16 * (v89 >> 2)) = *(uint32_t *)(v87 + 16 * (v89 >> 2));
        if ( (int)v89 > v147 + 1 )
        {
          *(uint32_t *)(v167 + 4 * (v147 + 1)) = *(uint32_t *)(v87 + 4 * (v147 + 1));
          if ( (int)v89 > v147 + 2 )
            *(uint32_t *)(v167 + 4 * (v147 + 2)) = *(uint32_t *)(v87 + 4 * (v147 + 2));
        }
      }
    }
    else
    {
      for ( i = 0; i != v156; ++i )
        *(uint32_t *)(v167 + 4 * i) = *(uint32_t *)(v87 + 4 * i);
    }
  }
  HIDWORD(v191[0]) = v162;
  v168 = v152 + v141 + v142;
  v92 = *((uint32_t **)v180 + 5);
  v93 = v92[7];
  if ( v93 != 0 && v162 != 0 )
  {
    v168 += G4_VCALL<int>(v93, 8, v191[0], v162);
    v92 = *((uint32_t **)v180 + 5);
  }
  if ( v168 < *v92 - v92[8] )
  {
    v103 = v143;
    v148 = 0;
    *((uint32_t *)v143 + 1) = 0;
    goto LABEL_113;
  }
  v163 = 0;
  v148 = 0;
  v94 = (uint32_t *)v159;
  do
  {
    v99 = v92[5];
    v160 = v99;
    if ( v99 == (v92[6] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkMemoryAllocator::Self *)(v92 + 4),
        8,
        v132);
      v99 = v92[5];
    }
    v100 = v92[4];
    v92[5] = v99 + 1;
    v101 = v100 + 8 * v99;
    if ( v172 > v175 )
    {
      v158 = v94[28];
      if ( v163 != 0 )
        v95 = v152 + 10;
      else
        v95 = v152 + v175 + 5;
      v168 = v95;
      v96 = v172;
      v97 = v142;
      v148 = 1;
      v172 = 5;
    }
    else
    {
      v158 = v94[29];
      if ( v148 != 0 )
        v102 = v152 + 10;
      else
        v102 = v152 + v172 + 5;
      v168 = v102;
      v96 = v175;
      v97 = v141;
      v163 = 1;
      v175 = 5;
    }
    *(uint32_t *)(v101 + 4) = v96 + *(uint32_t *)(*((uint32_t *)v180 + 5) + 32) + 5;
    *(uint32_t *)(v158 + 64) = v160;
    *(uint32_t *)(*((uint32_t *)v180 + 4) + 12) -= v97 - 5;
    v98 = 5 - v97;
    if ( v163 != 0 )
      *(uint32_t *)(v94[29] + 92) += v98;
    *(uint32_t *)(v94[28] + 92) += v98;
    v94[23] += v98;
    v92 = *((uint32_t **)v180 + 5);
  }
  while ( v168 >= *v92 - v92[8] );
  v103 = v143;
  *((uint32_t *)v143 + 1) = 0;
  if ( v163 == 0 )
  {
LABEL_113:
    v113 = *((uint32_t *)v103 + 2) & 0x3FFFFFFF;
    v114 = v184;
    if ( v185 > v113 )
    {
      v128 = 2 * v113;
      if ( v128 < v185 )
        v128 = v185;
      v182 = v185;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v183,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)v143,
        v128,
        4);
      v179 = v182;
      v181 = (hkpMoppDefaultAssembler::Self *)(4 * v182);
      hkMemUtil::memMove((hkpMoppDefaultAssembler::Self *)((char *)v181 + *(uint32_t *)v143), *(char **)v143, 0);
      v116 = *(uint32_t *)v143;
      v115 = v179;
    }
    else
    {
      v177 = v185;
      v181 = (hkpMoppDefaultAssembler::Self *)(4 * v185);
      hkMemUtil::memMove((hkMemUtil::Self *)(4 * v185 + *(uint32_t *)v143), *(char **)v143, 0);
      v115 = v177;
      v116 = *(uint32_t *)v143;
      if ( v177 <= 0 )
      {
LABEL_123:
        v104 = v115;
        *((uint32_t *)v143 + 1) = v115;
        v105 = v115;
        goto LABEL_92;
      }
    }
    if ( (v114 >= v116 + 16 || v116 >= v114 + 16) && v115 > 0xB )
    {
      v117 = 0;
      v178 = 4 * (v115 >> 2);
      v118 = 0;
      do
      {
        ++v117;
        *(__m128i *)(v116 + v118) = *(__m128i *)(v114 + v118);
        v118 += 16;
      }
      while ( v117 < v115 >> 2 );
      if ( v178 != v115 )
      {
        *(uint32_t *)(v116 + 16 * (v115 >> 2)) = *(uint32_t *)(v114 + 16 * (v115 >> 2));
        if ( (int)v115 > v178 + 1 )
        {
          *(uint32_t *)(v116 + 4 * (v178 + 1)) = *(uint32_t *)(v114 + 4 * (v178 + 1));
          if ( (int)v115 > v178 + 2 )
            *(uint32_t *)(v116 + 4 * (v178 + 2)) = *(uint32_t *)(v114 + 4 * (v178 + 2));
        }
      }
    }
    else
    {
      v122 = 0;
      do
      {
        *(uint32_t *)(v116 + 4 * v122) = *(uint32_t *)(v114 + 4 * v122);
        ++v122;
      }
      while ( v122 != v115 );
    }
    goto LABEL_123;
  }
  v181 = nullptr;
  v104 = 0;
  v105 = 0;
LABEL_92:
  if ( v148 == 0 )
  {
    v106 = v188;
    v176 = v187;
    v173 = v188 + v105;
    v107 = *((uint32_t *)v143 + 2) & 0x3FFFFFFF;
    if ( v173 > v107 )
    {
      v166 = v188;
      v129 = 2 * v107;
      if ( v173 >= v129 )
        v129 = v173;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v183,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)v143,
        v129,
        4);
      v106 = v166;
    }
    v164 = v106;
    hkMemUtil::memMove((hkMemUtil::Self *)(*(uint32_t *)v143 + 4 * (v106 + v104)), (char *)v181 + *(uint32_t *)v143, 0);
    v108 = (unsigned int)(uintptr_t)(v181) + *(uint32_t *)v143;
    if ( (int)v164 > 0 )
    {
      if ( (v108 >= v176 + 16 || v176 >= v108 + 16) && v164 > 0xB )
      {
        v109 = 0;
        v110 = 4 * (v164 >> 2);
        do
        {
          ++v138;
          *(__m128i *)(v108 + v109) = *(__m128i *)(v176 + v109);
          v109 += 16;
        }
        while ( v138 < v164 >> 2 );
        if ( v164 != v110 )
        {
          *(uint32_t *)(v108 + 16 * (v164 >> 2)) = *(uint32_t *)(v176 + 16 * (v164 >> 2));
          v111 = v110 + 1;
          if ( (int)v164 > v110 + 1 )
          {
            v112 = v110 + 2;
            *(uint32_t *)(v108 + 4 * v111) = *(uint32_t *)(v176 + 4 * v111);
            if ( (int)v164 > v112 )
              *(uint32_t *)(v108 + 4 * v112) = *(uint32_t *)(v176 + 4 * v112);
          }
        }
      }
      else
      {
        for ( j = 0; j != v164; ++j )
          *(uint32_t *)(v108 + 4 * j) = *(uint32_t *)(v176 + 4 * j);
      }
    }
    *((uint32_t *)v143 + 1) = v173;
  }
  HIDWORD(v191[0]) = 0;
  if ( SLODWORD(v191[1]) >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v191[0],
      4 * LODWORD(v191[1]));
  LODWORD(v191[0]) = 0;
  LODWORD(v191[1]) = 0x80000000;
  v188 = 0;
  if ( v189 >= 0 )
    (*(void (**)(uint32_t *, unsigned int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v187,
      4 * v189);
  v187 = 0;
  v189 = 0x80000000;
  v185 = 0;
  if ( v186 >= 0 )
    (*(void (**)(uint32_t *, unsigned int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v184,
      4 * v186);
  return v168;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::assembleJumpChunkCommand  (binary VA: 0x1b0bcc0)
// Original: hkpMoppDefaultAssembler::assembleJumpChunkCommand
// ----------------------------------------------------------------------------
int hkpMoppDefaultAssembler::assembleJumpChunkCommand(hkpMoppDefaultAssembler::Self *a1, int a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v8;
  int v9;
  int v10;

  v9 = *(uint32_t *)(*((uint32_t *)a1 + 4) + 12);
  hkpMoppDefaultAssembler::addJumpChunk(a1, *(uint32_t *)(a2 + 64));
  v2 = *(uint32_t *)(*((uint32_t *)a1 + 4) + 12);
  *(uint8_t *)(a2 + 56) = 1;
  *(uint32_t *)(a2 + 92) = v2;
  v3 = *((uint32_t **)a1 + 4);
  v10 = v2;
  v4 = v3[6];
  if ( v4 == (v3[7] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(v3 + 5), 8, v8);
    v4 = v3[6];
  }
  v5 = v3[5];
  v3[6] = v4 + 1;
  v6 = (uint32_t *)(v5 + 8 * v4);
  v6[1] = *(uint32_t *)(a2 + 64);
  *v6 = v10;
  hkpMoppCodeGenerator::validateJumpCommands(*((hkpMoppCodeGenerator::Self **)a1 + 4));
  return v10 - v9;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::assembleSubNodeIntoChunks  (binary VA: 0x1b0bd80)
// Original: hkpMoppDefaultAssembler::assembleSubNodeIntoChunks
// ----------------------------------------------------------------------------
hkMemoryAllocator::Self * hkpMoppDefaultAssembler::assembleSubNodeIntoChunks(__m128i a1, __m128i a2, hkpMoppDefaultAssembler::Self *a3, uint32_t *a4, uint32_t *a5, int a6, int a7, hkMemoryAllocator::Self *a8, int a9, int a10, int a11, int a12, hkpMoppCodeGenerator::Self *a13, int a14, int a15, int a16)
{
  uint32_t *v16;
  int v17;
  hkpMoppCodeGenerator::Self **v18;
  int v19;
  uint32_t *address;
  hkpMoppCodeGenerator::Self *v21;
  int v23;
  int v24;
  uint32_t *v25;
  float v26; // xmm2_4
  float v27; // xmm1_4
  __m128i v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  __m128i v36;
  unsigned int v37;
  int v38;
  unsigned int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  unsigned int v48;
  char v49;
  int v50;
  int v51;
  int v52;
  int v53;
  unsigned int v54;
  int v55;
  int v56;
  uint32_t *v57;
  float v58; // xmm2_4
  float v59; // xmm1_4
  __m128i v60;
  unsigned int v61;
  int v62;
  unsigned int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  __m128i v68;
  unsigned int v69;
  int v70;
  unsigned int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  unsigned int v80;
  char v81;
  int v82;
  int v83;
  int v84;
  int v85;
  unsigned int v86;
  int v87;
  int v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef char *_g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef uint32_t *_g4_t_v107;
  typedef uint32_t *_g4_t_v108;
  typedef int _g4_t_v109;
  typedef char _g4_t_v110;
  typedef int _g4_t_v111;
  typedef char _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef unsigned int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef uint32_t _g4_t_v125[18];
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v89)) > _g4_s0 ? (8u + sizeof(_g4_t_v89)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v90)) > _g4_s1 ? (12u + sizeof(_g4_t_v90)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v91)) > _g4_s2 ? (12u + sizeof(_g4_t_v91)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v92)) > _g4_s3 ? (16u + sizeof(_g4_t_v92)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v93)) > _g4_s4 ? (20u + sizeof(_g4_t_v93)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v94)) > _g4_s5 ? (24u + sizeof(_g4_t_v94)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v95)) > _g4_s6 ? (24u + sizeof(_g4_t_v95)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v96)) > _g4_s7 ? (24u + sizeof(_g4_t_v96)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v97)) > _g4_s8 ? (32u + sizeof(_g4_t_v97)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v98)) > _g4_s9 ? (32u + sizeof(_g4_t_v98)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v99)) > _g4_s10 ? (36u + sizeof(_g4_t_v99)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v100)) > _g4_s11 ? (36u + sizeof(_g4_t_v100)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v101)) > _g4_s12 ? (40u + sizeof(_g4_t_v101)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v102)) > _g4_s13 ? (40u + sizeof(_g4_t_v102)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v103)) > _g4_s14 ? (44u + sizeof(_g4_t_v103)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v104)) > _g4_s15 ? (44u + sizeof(_g4_t_v104)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v105)) > _g4_s16 ? (44u + sizeof(_g4_t_v105)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v106)) > _g4_s17 ? (48u + sizeof(_g4_t_v106)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v107)) > _g4_s18 ? (48u + sizeof(_g4_t_v107)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v108)) > _g4_s19 ? (48u + sizeof(_g4_t_v108)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v109)) > _g4_s20 ? (52u + sizeof(_g4_t_v109)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v110)) > _g4_s21 ? (52u + sizeof(_g4_t_v110)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v111)) > _g4_s22 ? (52u + sizeof(_g4_t_v111)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v112)) > _g4_s23 ? (52u + sizeof(_g4_t_v112)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v113)) > _g4_s24 ? (52u + sizeof(_g4_t_v113)) : _g4_s24,
    _g4_s26 = (56u + sizeof(_g4_t_v114)) > _g4_s25 ? (56u + sizeof(_g4_t_v114)) : _g4_s25,
    _g4_s27 = (56u + sizeof(_g4_t_v115)) > _g4_s26 ? (56u + sizeof(_g4_t_v115)) : _g4_s26,
    _g4_s28 = (56u + sizeof(_g4_t_v116)) > _g4_s27 ? (56u + sizeof(_g4_t_v116)) : _g4_s27,
    _g4_s29 = (64u + sizeof(_g4_t_v117)) > _g4_s28 ? (64u + sizeof(_g4_t_v117)) : _g4_s28,
    _g4_s30 = (68u + sizeof(_g4_t_v118)) > _g4_s29 ? (68u + sizeof(_g4_t_v118)) : _g4_s29,
    _g4_s31 = (72u + sizeof(_g4_t_v119)) > _g4_s30 ? (72u + sizeof(_g4_t_v119)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_v120)) > _g4_s31 ? (76u + sizeof(_g4_t_v120)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v121)) > _g4_s32 ? (80u + sizeof(_g4_t_v121)) : _g4_s32,
    _g4_s34 = (84u + sizeof(_g4_t_v122)) > _g4_s33 ? (84u + sizeof(_g4_t_v122)) : _g4_s33,
    _g4_s35 = (88u + sizeof(_g4_t_v123)) > _g4_s34 ? (88u + sizeof(_g4_t_v123)) : _g4_s34,
    _g4_s36 = (92u + sizeof(_g4_t_v124)) > _g4_s35 ? (92u + sizeof(_g4_t_v124)) : _g4_s35,
    _g4_s37 = (96u + sizeof(_g4_t_v125)) > _g4_s36 ? (96u + sizeof(_g4_t_v125)) : _g4_s36,
    _g4_s38 = (168u + sizeof(_g4_t_v126)) > _g4_s37 ? (168u + sizeof(_g4_t_v126)) : _g4_s37,
    _g4_s39 = (172u + sizeof(_g4_t_v127)) > _g4_s38 ? (172u + sizeof(_g4_t_v127)) : _g4_s38
  };
  alignas(16) uint8_t _g4_sf[_g4_s39];
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 8u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 12u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 12u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 16u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 20u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 24u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 24u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 24u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 32u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 32u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 36u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 36u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 40u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 40u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 44u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 44u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 44u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 48u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 48u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 48u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 52u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 52u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 52u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 52u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 52u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 56u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 56u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 56u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 64u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 68u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 72u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 76u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 80u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 84u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 88u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 92u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 96u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 168u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 172u);

  v16 = a4;
  v17 = a4[16];
  if ( v17 > 0 )
  {
    if ( *(uint8_t *)(a6 + 4) == 0 )
    {
      v114 = *((uint32_t *)a3 + 4);
      v18 = (hkpMoppCodeGenerator::Self **)(*(uint32_t *)(*((uint32_t *)a3 + 5) + 16) + 8 * v17);
      hkpMoppCodeGenerator::Construct((hkpMoppCodeGenerator::Self *)v125, (int)(uintptr_t)(v18[1]));
      v117 = 0;
      v118 = 0;
      v119 = 0x80000000;
      *((uint32_t *)a3 + 4) = (uint32_t)(uintptr_t)(v125);
      *(uint8_t *)(a6 + 4) = 1;
      hkpMoppDefaultAssembler::assembleSubNodeIntoChunks(a3, (int)(uintptr_t)(a4), (int)(uintptr_t)(a5), a6, v17, (int)(uintptr_t)(&v117));
      if ( *(uint32_t *)(*((uint32_t *)a3 + 5) + 28) != 0 )
      {
        v19 = *(uint32_t *)(*((uint32_t *)a3 + 4) + 12) + 5;
        hkpMoppDefaultAssembler::addDataOffset(a3, v19 + (-(int16_t)v19 & 3), v118);
      }
      address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v21 = (hkpMoppCodeGenerator::Self *)(*(int (**)(uint32_t, int, int, int, int, int, int, int *, int, int, int, int, int, int, int, uint32_t *, int, int, unsigned int, int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int, int))(**(uint32_t **)(*address + 44) + 8))(
                                      *(uint32_t *)(*address + 44),
                                      32,
                                      v89,
                                      v90,
                                      v92,
                                      v93,
                                      v94,
                                      &v117,
                                      v97,
                                      v99,
                                      v101,
                                      v103,
                                      v106,
                                      v109,
                                      v114,
                                      v125,
                                      v117,
                                      v118,
                                      v119,
                                      v120,
                                      v121,
                                      v122,
                                      v123,
                                      v124,
                                      v125[0],
                                      v125[1],
                                      v125[2],
                                      v125[3],
                                      v125[4],
                                      v125[5],
                                      v125[6],
                                      v125[7],
                                      v125[8],
                                      v125[9],
                                      v125[10],
                                      v125[11],
                                      v125[12],
                                      v125[13],
                                      v125[14],
                                      v125[15],
                                      v125[16],
                                      v125[17],
                                      v126,
                                      v127);
      hkpMoppCodeGenerator::Construct(v21, (int)(uintptr_t)(v18[1]));
      *v18 = v21;
      sub_1B06440((uint32_t *)(*((uint32_t *)a3 + 5) + 28), v21, *((hkpMoppCodeGenerator::Self **)a3 + 4), a5);
      *(uint32_t *)(*((uint32_t *)a3 + 4) + 24) = 0;
      if ( a16 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          a14,
          4 * a16);
      hkpMoppCodeGenerator::Destroy(a13);
      *((uint32_t *)a3 + 4) = a12;
      return (hkMemoryAllocator::Self *)hkpMoppDefaultAssembler::assembleJumpChunkCommand(a3, (int)(uintptr_t)(a4));
    }
    v16 = a4;
  }
  if ( *((uint8_t *)v16 + 4) != 0 )
  {
    hkpMoppDefaultAssembler::assembleCutAndTerminalCommand(a3, (int)(uintptr_t)(a4), (int)(uintptr_t)(a5), a6);
    v23 = a4[24];
    v24 = *((uint32_t *)a8 + 1);
    if ( v24 == (*((uint32_t *)a8 + 2) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a8, 4, v91);
      v24 = *((uint32_t *)a8 + 1);
    }
    *(uint32_t *)(*(uint32_t *)a8 + 4 * v24) = *(uint32_t *)(v23 + 16);
    ++*((uint32_t *)a8 + 1);
    return a8;
  }
  else
  {
    LOBYTE(v117) = 0;
    v118 = -1;
    hkpMoppDefaultAssembler::initTopDown((int)(uintptr_t)(a3), (int)(uintptr_t)(a4), a5, (uint32_t *)a6, (int)(uintptr_t)(&v117));
    std::memcpy(v125, (const void *)a6, sizeof(v125));
    v25 = (uint32_t *)a4[29];
    v95 = (int)(uintptr_t)(v25);
    v125[14] = v25[10] - v25[9];
    v125[15] = v25[11];
    if ( (int)v25[11] > 0 )
    {
      v125[16] = v25[12];
      v125[17] = v25[13] - v25[12];
    }
    v115 = 0;
    v26 = *((float *)a3 + 15);
    v107 = v25;
    v100 = (char *)a3 + 48;
    do
    {
      v27 = *(float *)&v100[4 * v115];
g4_m128_raw(v28) = (unsigned int)v107[3];
      *(float *)g4_m128_ptr<int32_t>(v28) = (float)(*(float *)g4_m128_ptr<int32_t>(v28) - v27) * v26;
      v29 = (_mm_cvtsi128_si32(v28) & 0x7F800000u) >> 23;
      v30 = v29 - 127;
      v31 = v29 - 150;
      v32 = (int)(v29 - 151) >> 31;
      v110 = (int)(~v32 & v31) > 31 ? -1 : ~(uint8_t)v32 & v31;
      v33 = ((uint8_t)(v32 & (23 - v30)) | (uint8_t)-((v32 & (23 - v30)) > 31)) & 0x1F;
      v34 = _mm_cvtsi128_si32(v28) & ~(((_mm_cvtsi128_si32(v28) & 0x7FFFFFFF) - 1) >> 31);
      v35 = ~v32 | (-8388608 >> ((v32 & 0x17) - v33));
      v125[2 * v115 + 3] = ((~(v30 >> 31)
                           & (((v34 >> 31)
                             | ((v35 & (v34 & 0x7FFFFF | 0x800000)) + (v35 & (v34 & 0x7FFFFF | 0x800000)) - 1))
                            - (v35 & (v34 & 0x7FFFFF | 0x800000))
                            + 1)) >> (((v32 & (23 - v30)) > 31 ? -1 : v32 & (23 - v30)) & 0x1F) << v110)
                         - (~(((v33 - 1) | ((v34 & ~v35) - 1) & (v35 + 1)) >> 31) & (v34 >> 31) & 1);
g4_m128_raw(v36) = (unsigned int)v107[4];
      *(float *)g4_m128_ptr<int32_t>(v36) = (float)(*(float *)g4_m128_ptr<int32_t>(v36) - v27) * v26;
      v37 = (_mm_cvtsi128_si32(v36) & 0x7F800000u) >> 23;
      v38 = v37 - 127;
      v39 = v37 - 150;
      v40 = (int)(v37 - 151) >> 31;
      v111 = (int)(~v40 & v39) > 31 ? -1 : ~v40 & v39;
      v41 = ((uint8_t)(v40 & (23 - v38)) | (uint8_t)-((v40 & (23 - v38)) > 31)) & 0x1F;
      v42 = _mm_cvtsi128_si32(v36) & ~(((_mm_cvtsi128_si32(v36) & 0x7FFFFFFF) - 1) >> 31);
      v43 = ~v40 | (-8388608 >> ((v40 & 0x17) - v41));
      v98 = v41 - 1;
      v102 = v42 >> 31;
      v44 = ~(v38 >> 31)
          & (((v42 >> 31) | ((v43 & (v42 & 0x7FFFFF | 0x800000)) + (v43 & (v42 & 0x7FFFFF | 0x800000)) - 1))
           - (v43 & (v42 & 0x7FFFFF | 0x800000))
           + 1);
      LOBYTE(v40) = v41;
      v45 = (v42 & ~v43) - 1;
      v46 = v115++;
      v107 += 2;
      v125[2 * v46 + 4] = (v44 >> v40 << v111) - (~((v98 | v45 & (v43 + 1)) >> 31) & v102 & 1) + 1;
    }
    while ( v115 != 3 );
    v47 = v125[6] - v125[5];
    LOBYTE(v125[1]) = 0;
    v125[0] = *(uint32_t *)a6 + 1;
    if ( v125[6] - v125[5] < v125[4] - v125[3] )
      v47 = v125[4] - v125[3];
    if ( v47 < v125[8] - v125[7] )
      v47 = v125[8] - v125[7];
    if ( v47 != 0 )
    {
      v48 = v47;
      v49 = 0;
      do
      {
        ++v49;
        v48 >>= 1;
      }
      while ( v48 != 0 );
      v50 = 1 << (v49 - 4);
    }
    else
    {
      v50 = 0;
    }
    v51 = v47 + v50;
    v52 = 3;
    v53 = -1;
    do
    {
      if ( v51 != 0 )
      {
        v54 = v51;
        v55 = 0;
        do
        {
          ++v55;
          v54 >>= 1;
        }
        while ( v54 != 0 );
      }
      else
      {
        v55 = 0;
      }
      if ( v53 < v55 )
        v53 = v55;
      --v52;
    }
    while ( v52 != 0 );
    v56 = 24;
    if ( v53 <= 24 )
      v56 = v53;
    v125[2] = v56;
    hkpMoppDefaultAssembler::assembleSubNodeIntoChunks(a3, v95, a6, (int)(uintptr_t)(v125), a7, (int)(uintptr_t)(a8));
    std::memcpy(v125, (const void *)a6, sizeof(v125));
    v57 = (uint32_t *)a4[28];
    v96 = (int)(uintptr_t)(v57);
    v125[14] = v57[10] - v57[9];
    v125[15] = v57[11];
    if ( (int)v57[11] > 0 )
    {
      v125[16] = v57[12];
      v125[17] = v57[13] - v57[12];
    }
    v116 = 0;
    v58 = *((float *)a3 + 15);
    v108 = v57;
    do
    {
      v59 = *(float *)&v100[4 * v116];
g4_m128_raw(v60) = (unsigned int)v108[3];
      *(float *)g4_m128_ptr<int32_t>(v60) = (float)(*(float *)g4_m128_ptr<int32_t>(v60) - v59) * v58;
      v61 = (_mm_cvtsi128_si32(v60) & 0x7F800000u) >> 23;
      v62 = 23 - (v61 - 127);
      v104 = v61 - 127;
      v63 = v61 - 150;
      v64 = (int)(v61 - 151) >> 31;
      v112 = (int)(~v64 & v63) > 31 ? -1 : ~(uint8_t)v64 & v63;
      v65 = ((uint8_t)(v64 & v62) | (uint8_t)-((v64 & v62) > 31)) & 0x1F;
      v66 = _mm_cvtsi128_si32(v60) & ~(((_mm_cvtsi128_si32(v60) & 0x7FFFFFFF) - 1) >> 31);
      v67 = ~v64 | (-8388608 >> ((v64 & 0x17) - v65));
      v125[2 * v116 + 3] = ((~(v104 >> 31)
                           & (((v66 >> 31)
                             | ((v67 & (v66 & 0x7FFFFF | 0x800000)) + (v67 & (v66 & 0x7FFFFF | 0x800000)) - 1))
                            - (v67 & (v66 & 0x7FFFFF | 0x800000))
                            + 1)) >> v65 << v112)
                         - (~(((v65 - 1) | ((v66 & ~v67) - 1) & (v67 + 1)) >> 31) & (v66 >> 31) & 1);
g4_m128_raw(v68) = (unsigned int)v108[4];
      *(float *)g4_m128_ptr<int32_t>(v68) = (float)(*(float *)g4_m128_ptr<int32_t>(v68) - v59) * v58;
      v69 = (_mm_cvtsi128_si32(v68) & 0x7F800000u) >> 23;
      v70 = 23 - (v69 - 127);
      v105 = v69 - 127;
      v71 = v69 - 150;
      v72 = (int)(v69 - 151) >> 31;
      v113 = (int)(~v72 & v71) > 31 ? -1 : ~v72 & v71;
      v73 = ((uint8_t)(v72 & v70) | (uint8_t)-((v72 & v70) > 31)) & 0x1F;
      v74 = _mm_cvtsi128_si32(v68) & ~(((_mm_cvtsi128_si32(v68) & 0x7FFFFFFF) - 1) >> 31);
      v75 = (-8388608 >> ((v72 & 0x17) - v73)) | ~v72;
      v76 = (~(v105 >> 31)
           & (((v74 >> 31) | ((v75 & (v74 & 0x7FFFFF | 0x800000)) + (v75 & (v74 & 0x7FFFFF | 0x800000)) - 1))
            - (v75 & (v74 & 0x7FFFFF | 0x800000))
            + 1)) >> v73 << v113;
      v77 = ~(((v73 - 1) | ((v74 & ~v75) - 1) & (v75 + 1)) >> 31) & (v74 >> 31) & 1;
      v78 = v116++;
      v108 += 2;
      v125[2 * v78 + 4] = v76 - v77 + 1;
    }
    while ( v116 != 3 );
    v79 = v125[6] - v125[5];
    LOBYTE(v125[1]) = 0;
    v125[0] = *(uint32_t *)a6 + 1;
    if ( v125[6] - v125[5] < v125[4] - v125[3] )
      v79 = v125[4] - v125[3];
    if ( v79 < v125[8] - v125[7] )
      v79 = v125[8] - v125[7];
    if ( v79 != 0 )
    {
      v80 = v79;
      v81 = 0;
      do
      {
        ++v81;
        v80 >>= 1;
      }
      while ( v80 != 0 );
      v82 = 1 << (v81 - 4);
    }
    else
    {
      v82 = 0;
    }
    v83 = v79 + v82;
    v84 = 3;
    v85 = -1;
    do
    {
      if ( v83 != 0 )
      {
        v86 = v83;
        v87 = 0;
        do
        {
          ++v87;
          v86 >>= 1;
        }
        while ( v86 != 0 );
      }
      else
      {
        v87 = 0;
      }
      if ( v85 < v87 )
        v85 = v87;
      --v84;
    }
    while ( v84 != 0 );
    v88 = 24;
    if ( v85 <= 24 )
      v88 = v85;
    v125[2] = v88;
    hkpMoppDefaultAssembler::assembleSubNodeIntoChunks(a3, v96, a6, (int)(uintptr_t)(v125), a7, (int)(uintptr_t)(a8));
    return (hkMemoryAllocator::Self *)hkpMoppDefaultAssembler::assembleNonTerminalCommand(
                                  a1,
                                  a2,
                                  a3,
                                  (int)(uintptr_t)(a4),
                                  (int)(uintptr_t)(a5),
                                  (uint32_t *)a6,
                                  (uint32_t *)(&v117));
  }
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultAssembler::assemble  (binary VA: 0x1b0df90)
// Original: hkpMoppDefaultAssembler::assemble
// ----------------------------------------------------------------------------
uint32_t * hkpMoppDefaultAssembler::assemble(uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20)
{
  uint32_t *result;

  result = a1;
  a1[3] = a3;
  a1[10] = 0;
  a1[9] = a4;
  if ( a2 != 0 )
    return (uint32_t *)sub_1B0C750(
                       a1,
                       a2,
                       a3,
                       a4,
                       a5,
                       a6,
                       a7,
                       a8,
                       a9,
                       a10,
                       a11,
                       a12,
                       a13,
                       a14,
                       a15,
                       a16,
                       a17,
                       a18,
                       a19,
                       a20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultSplitter::Destroy  (binary VA: 0x1b0e000)
// Original: hkpMoppDefaultSplitter::~hkpMoppDefaultSplitter
// ----------------------------------------------------------------------------
void hkpMoppDefaultSplitter::Destroy(hkpMoppDefaultSplitter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultSplitter::getFreeNodes  (binary VA: 0x1b0e020)
// Original: hkpMoppDefaultSplitter::getFreeNodes
// ----------------------------------------------------------------------------
int hkpMoppDefaultSplitter::getFreeNodes(hkpMoppDefaultSplitter::Self *self)
{
  return *((uint32_t *)self + 7) + *((uint32_t *)self + 5);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultSplitter::releaseNode  (binary VA: 0x1b0e030)
// Original: hkpMoppDefaultSplitter::releaseNode
// ----------------------------------------------------------------------------
int hkpMoppDefaultSplitter::releaseNode(uint32_t *a1, int a2)
{
  int result;

  result = a2;
  if ( a2 != 0 )
  {
    if ( *(uint8_t *)(a2 + 4) != 0 )
    {
      *(uint32_t *)a2 = a1[6];
      a1[6] = a2;
      ++a1[7];
    }
    else
    {
      *(uint32_t *)a2 = a1[4];
      a1[4] = a2;
      ++a1[5];
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultSplitter::Destroy_ea1b0e060  (binary VA: 0x1b0e060)
// Original: hkpMoppDefaultSplitter::~hkpMoppDefaultSplitter
// ----------------------------------------------------------------------------
void hkpMoppDefaultSplitter::Destroy_ea1b0e060(hkpMoppDefaultSplitter::Self *self)
{
  int v1;
  int v2;

  hkpMoppDefaultSplitter::Destroy(self);
  v1 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 60;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultSplitter::Construct  (binary VA: 0x1b0e180)
// Original: hkpMoppDefaultSplitter::hkpMoppDefaultSplitter
// ----------------------------------------------------------------------------
void hkpMoppDefaultSplitter::Construct(hkpMoppDefaultSplitter::Self *self)
{
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B24A8);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultSplitter::findSplittingPlanePositions  (binary VA: 0x1b0e1d0)
// Original: hkpMoppDefaultSplitter::findSplittingPlanePositions
// ----------------------------------------------------------------------------
int hkpMoppDefaultSplitter::findSplittingPlanePositions(uint32_t *a1, int a2, int a3, float **a4, float *a5, int a6)
{
  int v6;
  float v7; // xmm4_4
  float *v8;
  float *v9;
  float v10; // xmm5_4
  float v11; // xmm6_4
  float *v12;
  float v13;
  float v14; // xmm0_4
  float v15;
  int *v16;
  int v17;
  int *v18;
  int v19;
  int v20;
  int v21;
  int *v22;
  int v23;
  float v24; // xmm1_4
  int v25;
  float *v26;
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm2_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  int v33;
  float v34; // xmm3_4
  int v35;
  float v36; // xmm4_4
  float v37; // xmm1_4
  float v38; // xmm4_4
  float v39; // xmm1_4
  float v40; // xmm1_4
  float v41; // xmm5_4
  float v42; // xmm5_4
  float v43; // xmm1_4
  float v44; // xmm1_4
  float v45; // xmm4_4
  float v46; // xmm1_4
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  float v54; // xmm0_4
  int v55;
  int v56;
  int i;
  uint32_t *v58;
  int result;
  int v60;
  int v61;
  float v62;
  float v63;
  float v64;
  int v65;
  int v66;
  int v67;
  int v68;
  float v69;
  float v70;
  int v71;
  unsigned int v72;
  int v73;
  float v74;
  int v75;
  int v76;
  int v77;
  float *v78;

  v6 = (int)(uintptr_t)(a4[1]);
  v7 = a5[1] - *a5;
  v8 = *a4;
  v71 = a1[14];
  v9 = a4[2];
  v64 = v7;
  v74 = **a4;
  v10 = 1.0;
  v62 = 1.0 / (float)v6;
  if ( v7 >= 0.001f )
    v10 = 1.0 / v7;
  if ( *(uint32_t *)(a1[2] + 8) <= (int)(uintptr_t)(v9) )
    v9 = *(float **)(a1[2] + 8);
  v66 = (int)(uintptr_t)(v9);
  if ( v6 > 0 )
  {
    v72 = *(uint32_t *)*a4;
    v65 = 0;
    v73 = 0;
    v70 = (float)(*a5 + a5[1]) * 0.5;
    v11 = v10;
    while ( 1 )
    {
      v68 = 5 * v73;
      v12 = &v8[5 * v73];
      v13 = *(float *)&v72;
      v14 = v12[2];
      v15 = *v12;
      if ( v72 > LODWORD(v15) )
        v13 = v15;
      v72 = LODWORD(v13);
      if ( LODWORD(v74) >= LODWORD(v15) )
        v15 = v74;
      v74 = v15;
      v16 = (int *)a1[3];
      v75 = *v16;
      v17 = *v16 - 1;
      if ( v17 >= 0 )
      {
        v18 = (int *)(v16[2] + 4 * v17);
        v19 = *v18;
        if ( *v18 != 0 )
        {
          v20 = 4 * v17 - 4;
          if ( v14 > *(float *)(v19 + 12) )
          {
            do
            {
              --v17;
              v16[3] = v19;
              *v18 = 0;
              --*v16;
              if ( v17 == -1 )
                break;
              v18 = (int *)(v16[2] + v20);
              v19 = *v18;
              if ( *v18 == 0 )
                break;
              v20 -= 4;
            }
            while ( v14 > *(float *)(v19 + 12) );
            v16 = (int *)a1[3];
            v75 = *v16;
            v17 = *v16 - 1;
          }
        }
      }
      if ( v66 >= v17 )
      {
        v23 = v75;
      }
      else
      {
        v21 = 4 * v17;
        do
        {
          --v17;
          v22 = (int *)(v16[2] + v21);
          v21 -= 4;
          v16[3] = *v22;
          *v22 = 0;
          --*v16;
        }
        while ( v17 != v66 );
        v16 = (int *)a1[3];
        v23 = *v16;
      }
      v24 = v11;
      v25 = a1[2];
      v26 = (float *)a1[8];
      v76 = *(uint32_t *)(v25 + 16);
      if ( a6 < v71 )
      {
        v27 = fminf(v26[7], v64) + v64;
        if ( v27 <= 0.0 )
          v24 = 3.4028202e37f;
        else
          v24 = 1.0 / v27;
      }
      v28 = (float)(v14 - v70) * v24;
      if ( v28 < 0.0 )
      {
        v30 = 0.0;
      }
      else
      {
        v29 = v28 * v28;
        v30 = (float)((float)((float)(v29 * 2.9f) + (float)(3.0 * (float)(v29 * v29)))
                    + (float)((float)((float)(v29 * v29) * (float)(v29 * v29)) * 1500.0))
            * v26[5];
      }
      v31 = 0.0;
      if ( (int)(LODWORD(v74) - v72) <= 15 )
        v31 = -0.03f * v26[6];
      v61 = *(int *)(v25 + 12) >> 1;
      v32 = (float)(v30 + *(float *)(a3 + 16)) + v31;
      if ( v23 == 0 )
      {
        v33 = v16[3];
        if ( v33 != 0 )
        {
          v34 = 0.0;
          v35 = -1;
          v63 = 10000000.0;
          v77 = 0;
          v69 = *(float *)(v33 + 12);
          v67 = 0;
          v36 = v69;
          goto LABEL_33;
        }
        v53 = -1;
        v78 = &(*a4)[v68];
LABEL_82:
        v55 = v16[2];
        goto LABEL_68;
      }
      v48 = v23;
      if ( v32 <= *(float *)(a2 + 108) )
        break;
LABEL_62:
      v53 = v48 - 1;
      v54 = (*a4)[v68 + 3];
      v78 = &(*a4)[v68];
      if ( v53 < 0 )
        goto LABEL_82;
      v55 = v16[2];
      v56 = 4 * v53;
      for ( i = *(uint32_t *)(v55 + 4 * v53); i != 0; i = *(uint32_t *)(v55 + v56) )
      {
        v56 -= 4;
        if ( v54 <= *(float *)(i + 12) )
          break;
        *(uint32_t *)(v55 + 4 * v53-- + 4) = i;
        v55 = v16[2];
        if ( v53 == -1 )
          break;
      }
LABEL_68:
      ++v73;
      *(uint32_t *)(v55 + 4 * v53 + 4) = (uint32_t)(uintptr_t)(v78);
      ++*v16;
      if ( (int)(uintptr_t)(a4[1]) <= v73 )
        goto LABEL_75;
      v8 = *a4;
    }
    if ( v76 <= 0 )
    {
      v77 = 0;
      v52 = v23;
    }
    else
    {
      v50 = v61 + v65;
      if ( v23 <= v61 + v65 )
        v50 = v23;
      v51 = v65 - v61;
      if ( v65 - v61 < 0 )
        v51 = 0;
      v77 = v51;
      v52 = v50;
    }
    v35 = v52 - 1;
    v48 = v23;
    v63 = 10000000.0;
    if ( v35 < v77 )
    {
LABEL_61:
      --v65;
      goto LABEL_62;
    }
    while ( 1 )
    {
      v49 = 0;
      if ( v35 <= v48 )
        v49 = *(uint32_t *)(v16[2] + 4 * v35);
      v36 = *(float *)(v49 + 12);
      v67 = v35;
      v34 = (float)v35;
      v69 = v36;
      --v35;
LABEL_33:
      v37 = v11;
      v38 = v36 - v70;
      if ( a6 < v71 )
      {
        v39 = fminf(v26[7], v64) + v64;
        if ( v39 <= 0.0 )
          v37 = 3.4028202e37f;
        else
          v37 = 1.0 / v39;
      }
      v40 = v37 * v38;
      v41 = 0.0;
      if ( v40 <= 0.0 )
      {
        v42 = v40 * v40;
        v41 = (float)((float)((float)(v42 * 2.9f) + (float)(3.0 * (float)(v42 * v42)))
                    + (float)((float)((float)(v42 * v42) * (float)(v42 * v42)) * 1500.0))
            * v26[5];
      }
      v43 = fabs((float)(v73 - ((int)(uintptr_t)(a4[1]) + v67 - v73))) * v62;
      if ( a6 >= v71 )
        break;
      v44 = (float)(v43 - 0.75) * 6.0;
      if ( v44 >= 0.0 )
        goto LABEL_40;
      v45 = 0.0;
LABEL_41:
      v46 = (float)((float)((float)(v45 + v41) + (float)((float)((float)(v34 * v62) * 5.0) * v26[2]))
                  + (float)((float)((float)(v69 - v14) * v11) * v26[3]))
          + v32;
      if ( v63 > v46 )
      {
        if ( *(float *)(a2 + 108) <= v46 )
        {
          v48 = *v16;
          v63 = (float)((float)((float)(v45 + v41) + (float)((float)((float)(v34 * v62) * 5.0) * v26[2]))
                      + (float)((float)((float)(v69 - v14) * v11) * v26[3]))
              + v32;
          v65 = v67;
          goto LABEL_49;
        }
        *(float *)(a2 + 108) = v46;
        *(float *)(a2 + 100) = v14;
        *(float *)(a2 + 104) = v69;
        *(uint32_t *)(a2 + 96) = a3;
        v47 = v67 - v61;
        if ( v67 - v61 < v77 )
        {
          if ( v47 < 0 )
            v47 = 0;
          v77 = v47;
        }
        v63 = v46;
        v65 = v67;
        v16 = (int *)a1[3];
      }
      v48 = *v16;
LABEL_49:
      if ( v35 < v77 )
        goto LABEL_61;
    }
    v44 = v43 * v43;
LABEL_40:
    v45 = (float)((float)((float)(v44 * v44) * v44) * v44) * v26[4];
    goto LABEL_41;
  }
LABEL_75:
  v58 = (uint32_t *)a1[3];
  result = *v58 - 1;
  v60 = 4 * result;
  if ( result > 0 )
  {
    do
    {
      --result;
      *(uint32_t *)(v58[2] + v60) = 0;
      v60 -= 4;
    }
    while ( result != 0 );
  }
  v58[3] = 0;
  *v58 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultSplitter::createTerminal  (binary VA: 0x1b0e800)
// Original: hkpMoppDefaultSplitter::createTerminal
// ----------------------------------------------------------------------------
int * hkpMoppDefaultSplitter::createTerminal(int a1, int a2, unsigned int **a3)
{
  int *v3;
  int v4;
  unsigned int *v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int *v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  int *v13;
  unsigned int **v14;
  int v15;
  typedef int _g4_t_v17;
  typedef int *_g4_t_v18;
  typedef int *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int *_g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef unsigned int **_g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef uint32_t _g4_t_v25[6];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v18)) > _g4_s1 ? (20u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v19)) > _g4_s2 ? (24u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v20)) > _g4_s3 ? (36u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v21)) > _g4_s4 ? (36u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v22)) > _g4_s5 ? (40u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v23)) > _g4_s6 ? (40u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v24)) > _g4_s7 ? (44u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v25)) > _g4_s8 ? (48u + sizeof(_g4_t_v25)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);

  v3 = *(int **)(a1 + 24);
  v4 = *v3;
  --*(uint32_t *)(a1 + 28);
  *(uint32_t *)(a1 + 24) = v4;
  *v3 = a2;
  *((uint8_t *)v3 + 56) = 0;
  *((uint8_t *)v3 + 57) = 0;
  *((uint8_t *)v3 + 58) = 0;
  *((uint8_t *)v3 + 59) = 0;
  *((uint8_t *)v3 + 60) = 0;
  *((uint8_t *)v3 + 61) = 0;
  v3[16] = -1;
  v3[23] = -1;
  *((uint8_t *)v3 + 4) = 1;
  v3[24] = (int)(uintptr_t)(*a3);
  v5 = *a3;
  v6 = **a3;
  v3[11] = 0;
  v24 = v6;
  v7 = v6;
  v3[12] = -1;
  v3[13] = 0;
  v8 = a3[1];
  v20 = (int)(uintptr_t)(v8) - 1;
  if ( (int)(uintptr_t)(v8) - 1 >= 0 )
  {
    do
    {
      v9 = *v5;
      if ( v7 < *v5 )
        v7 = *v5;
      v22 = v7;
      if ( v24 <= v9 )
        v9 = v24;
      v24 = v9;
      v10 = (*(int (**)(uint32_t, unsigned int *, uint32_t *))(**(uint32_t **)(a1 + 40) + 44))(
              *(uint32_t *)(a1 + 40),
              v5,
              v25);
      v7 = v22;
      if ( v10 > v3[11] )
        v3[11] = v10;
      if ( v10 > 0 )
      {
        v11 = v25[0];
        if ( v25[0] < (unsigned int)v3[12] )
          v3[12] = v25[0];
        if ( v11 > v3[13] )
          v3[13] = v11;
      }
      --v20;
      v5 += 5;
    }
    while ( v20 != -1 );
    v8 = a3[1];
  }
  v3[2] = (int)(uintptr_t)(v8);
  v3[10] = v7;
  v3[9] = v24;
  v21 = v3;
  v12 = 0;
  v13 = v3 + 3;
  v14 = a3;
  do
  {
    v23 = v14;
    v18 = v13;
    v19 = v13 + 1;
    v13 += 2;
    v17 = v12;
    v15 = 32 * v12++;
    (*(void (**)(uint32_t, int, int, unsigned int *, unsigned int *, int *, int *))(**(uint32_t **)(a1 + 40) + 36))(
      *(uint32_t *)(a1 + 40),
      *(uint32_t *)(a1 + 52) + v15,
      v17,
      *v14,
      v14[1],
      v18,
      v19);
    v14 = v23;
  }
  while ( v12 != 3 );
  return v21;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultSplitter::createNode  (binary VA: 0x1b0e980)
// Original: hkpMoppDefaultSplitter::createNode
// ----------------------------------------------------------------------------
int * hkpMoppDefaultSplitter::createNode(hkpMoppDefaultSplitter::Self *self)
{
  int *result;
  int v2;

  result = *((int **)self + 4);
  v2 = *result;
  --*((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = v2;
  *((uint8_t *)result + 56) = 0;
  *((uint8_t *)result + 57) = 0;
  *((uint8_t *)result + 58) = 0;
  *((uint8_t *)result + 59) = 0;
  *((uint8_t *)result + 60) = 0;
  *((uint8_t *)result + 61) = 0;
  result[16] = -1;
  result[23] = -1;
  *((uint8_t *)result + 4) = 0;
  result[27] = 1232348160;
  result[25] = 1343554297;
  result[28] = 0;
  result[29] = 0;
  result[24] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultSplitter::resortAxis  (binary VA: 0x1b0e9e0)
// Original: hkpMoppDefaultSplitter::resortAxis
// ----------------------------------------------------------------------------
int hkpMoppDefaultSplitter::resortAxis(int a1, int a2, int *a3, int a4)
{
  int v4;
  float v5; // xmm0_4
  int v6;
  float v7; // xmm1_4
  float v8; // xmm0_4
  int v9;
  float v10; // xmm0_4
  int v11;
  float v12; // xmm4_4
  int v13;
  float v14; // xmm3_4
  int result;
  float v16; // xmm0_4
  float v17;
  float v18;
  float v19;

  if ( a2 != 0 )
  {
    v4 = *(uint32_t *)(a2 + 96);
    v5 = *(float *)(a2 + 16) - *(float *)(a2 + 12);
    v6 = *(uint32_t *)(a1 + 52);
    v17 = v5;
    if ( v4 == v6 )
    {
      v5 = v5 * 0.66f;
      v17 = v5;
    }
    v7 = *(float *)(a2 + 24) - *(float *)(a2 + 20);
    v8 = fmaxf(v5, 0.0);
    v18 = v7;
    if ( v4 == v6 + 32 )
    {
      v7 = v7 * 0.66f;
      v18 = v7;
    }
    v9 = 1;
    if ( v7 <= v8 )
    {
      v7 = v8;
      LOWORD(v9) = 0;
    }
    v10 = *(float *)(a2 + 32) - *(float *)(a2 + 28);
    v19 = v10;
    if ( v4 == v6 + 64 )
    {
      v10 = v10 * 0.66f;
      v19 = v10;
    }
    if ( v10 > v7 )
      v9 = 2;
    else
      v10 = v7;
    v11 = v9 + 1 - 3 * ((uint64_t)(1431655766LL * (v9 + 1)) >> 32);
    v12 = *(&v17 + v11);
    v13 = v9 + 2 - 3 * ((uint64_t)(1431655766LL * (v9 + 2)) >> 32);
    v14 = *(&v17 + v13);
    *a3 = v9;
    *(uint32_t *)a4 = 0;
    if ( v14 <= v12 )
    {
      a3[1] = v11;
      *(float *)(a4 + 4) = (float)((float)((float)((float)((float)(v10 - v12) / v10) * (float)((float)(v10 - v12) / v10))
                                         * (float)((float)(v10 - v12) / v10))
                                 * 16.0)
                         * 0.05f;
      a3[2] = v13;
      result = a4;
      v16 = (float)((float)((float)((float)((float)(v10 - v14) / v10) * (float)((float)(v10 - v14) / v10))
                          * (float)((float)(v10 - v14) / v10))
                  * 16.0)
          * 0.05f;
    }
    else
    {
      a3[1] = v13;
      *(float *)(a4 + 4) = (float)((float)((float)((float)((float)(v10 - v14) / v10) * (float)((float)(v10 - v14) / v10))
                                         * (float)((float)(v10 - v14) / v10))
                                 * 16.0)
                         * 0.05f;
      a3[2] = v11;
      result = a4;
      v16 = (float)((float)((float)((float)((float)(v10 - v12) / v10) * (float)((float)(v10 - v12) / v10))
                          * (float)((float)(v10 - v12) / v10))
                  * 16.0)
          * 0.05f;
    }
    *(float *)(a4 + 8) = v16;
  }
  else
  {
    *a3 = 0;
    a3[1] = 1;
    a3[2] = 2;
    *(uint32_t *)a4 = 0;
    *(uint32_t *)(a4 + 4) = 0;
    *(uint32_t *)(a4 + 8) = 0;
    return a4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultSplitter::groupPrimitives  (binary VA: 0x1b0edb0)
// Original: hkpMoppDefaultSplitter::groupPrimitives
// ----------------------------------------------------------------------------
uint32_t * hkpMoppDefaultSplitter::groupPrimitives(__m128i a1, int a2, unsigned int *a3, int a4, int a5, unsigned int *a6, uint32_t *a7)
{
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  int *v10;
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  float v18; // xmm1_4
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  int v23; // xmm3_4
  int v24; // xmm2_4
  int v25;
  int v26; // xmm1_4
  int v27;
  int v28;
  int v29;
  int v30;
  unsigned int v31;
  int v32;
  uint32_t *result;
  int *i;
  int v35;
  int v36; // xmm1_4
  int v37;
  int v38;
  int v39; // xmm3_4
  int v40; // xmm2_4
  int v41;
  typedef unsigned int _g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef unsigned int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef char _g4_t_v55;
  typedef int *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef unsigned int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef bool _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef float _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int *_g4_t_v66;
  typedef unsigned int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef uint32_t *_g4_t_v70;
  typedef unsigned int _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73[6];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v42)) > _g4_s0 ? (4u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v43)) > _g4_s1 ? (20u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v44)) > _g4_s2 ? (28u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v45)) > _g4_s3 ? (32u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v46)) > _g4_s4 ? (36u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v47)) > _g4_s5 ? (40u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v48)) > _g4_s6 ? (40u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v49)) > _g4_s7 ? (44u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v50)) > _g4_s8 ? (44u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v51)) > _g4_s9 ? (48u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v52)) > _g4_s10 ? (48u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v53)) > _g4_s11 ? (64u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v54)) > _g4_s12 ? (64u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v55)) > _g4_s13 ? (64u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v56)) > _g4_s14 ? (64u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v57)) > _g4_s15 ? (64u + sizeof(_g4_t_v57)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v58)) > _g4_s16 ? (68u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v59)) > _g4_s17 ? (72u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v60)) > _g4_s18 ? (72u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v61)) > _g4_s19 ? (72u + sizeof(_g4_t_v61)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v62)) > _g4_s20 ? (72u + sizeof(_g4_t_v62)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v63)) > _g4_s21 ? (72u + sizeof(_g4_t_v63)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v64)) > _g4_s22 ? (72u + sizeof(_g4_t_v64)) : _g4_s22,
    _g4_s24 = (72u + sizeof(_g4_t_v65)) > _g4_s23 ? (72u + sizeof(_g4_t_v65)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v66)) > _g4_s24 ? (76u + sizeof(_g4_t_v66)) : _g4_s24,
    _g4_s26 = (76u + sizeof(_g4_t_v67)) > _g4_s25 ? (76u + sizeof(_g4_t_v67)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v68)) > _g4_s26 ? (76u + sizeof(_g4_t_v68)) : _g4_s26,
    _g4_s28 = (76u + sizeof(_g4_t_v69)) > _g4_s27 ? (76u + sizeof(_g4_t_v69)) : _g4_s27,
    _g4_s29 = (80u + sizeof(_g4_t_v70)) > _g4_s28 ? (80u + sizeof(_g4_t_v70)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v71)) > _g4_s29 ? (80u + sizeof(_g4_t_v71)) : _g4_s29,
    _g4_s31 = (96u + sizeof(_g4_t_v72)) > _g4_s30 ? (96u + sizeof(_g4_t_v72)) : _g4_s30,
    _g4_s32 = (100u + sizeof(_g4_t_v73)) > _g4_s31 ? (100u + sizeof(_g4_t_v73)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 20u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 36u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 44u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 44u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 48u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 48u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 64u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 64u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 64u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 64u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 68u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 72u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 72u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 72u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 72u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 72u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 72u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 72u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 76u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 76u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 76u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 76u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 80u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 80u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 96u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 100u);

  v45 = a3[2];
  v7 = *a3;
  v58 = *a3;
  v8 = *a3 + 20 * a3[1];
  v70 = (uint32_t *)v8;
  v44 = *a3 + 20 * (v45 + a3[1]);
  if ( *a3 >= v8 )
  {
    v66 = (int *)(*a3 + 20 * (v45 + a3[1]));
    v9 = (unsigned int)(uintptr_t)(v66);
    v49 = 0;
    goto LABEL_37;
  }
  v9 = *a3 + 20 * (v45 + a3[1]);
  v10 = (int *)v9;
  while ( 1 )
  {
    v11 = *(float *)(v7 + 8);
    v12 = *(float *)(a4 + 100);
    v13 = *(float *)(a4 + 104);
g4_m128_raw(a1) = *(unsigned int *)(v7 + 12);
    if ( v12 > v11 )
    {
      if ( v13 < *(float *)g4_m128_ptr<int32_t>(a1) )
      {
        v50 = v9;
        --v45;
        v56 = v10 - 5;
        v68 = *(uint32_t *)(a4 + 96);
        v64 = (float)(v13 + v12) * 0.5;
        (*(void (**)(uint32_t, unsigned int, int, uint32_t, int, int *))(**(uint32_t **)(a2 + 40) + 40))(
          *(uint32_t *)(a2 + 40),
          v7,
          v68,
          LODWORD(v64),
          a5,
          v10 - 5);
        v72 = -*(float *)v68;
        v73[0] = -*(float *)(v68 + 4);
        v73[1] = -*(float *)(v68 + 8);
g4_m128_raw(a1) = (g4_int128_t)_mm_xor_ps(g4_m128_u32(*(unsigned int *)(v68 + 12)), g4_m128_from<__m128>(0x80000000));
        v73[2] = *(float *)g4_m128_ptr<int32_t>(a1);
        v43 = v7;
        v42 = v7;
        v7 += 20;
        (*(void (**)(uint32_t, unsigned int, float *, uint32_t, int, unsigned int))(**(uint32_t **)(a2 + 40) + 40))(
          *(uint32_t *)(a2 + 40),
          v42,
          &v72,
          -v64,
          a5,
          v43);
        v10 = v56;
        v9 = v50;
      }
      else
      {
        v7 += 20;
      }
      goto LABEL_6;
    }
    if ( *(float *)g4_m128_ptr<int32_t>(a1) > v13 )
    {
      v67 = v8 - 20;
      if ( v10 - 5 == (int *)v7 )
      {
        v10 = (int *)v7;
        v8 -= 20;
      }
      else
      {
        v36 = *(uint32_t *)(v8 - 12);
g4_m128_raw(a1) = *(unsigned int *)(v8 - 8);
        v63 = *(uint32_t *)(v8 - 20);
        v37 = *(uint32_t *)(v8 - 16);
        v38 = *(uint32_t *)(v8 - 4);
        *(v10 - 5) = *(uint32_t *)v7;
        *(v10 - 4) = *(uint32_t *)(v7 + 4);
        *(v10 - 3) = *(uint32_t *)(v7 + 8);
        *(v10 - 2) = *(uint32_t *)(v7 + 12);
        *(v10 - 1) = *(uint32_t *)(v7 + 16);
        *(uint32_t *)v7 = v63;
        *(uint32_t *)(v7 + 16) = v38;
        *(uint32_t *)(v7 + 4) = v37;
        *(uint32_t *)(v7 + 8) = v36;
        v10 -= 5;
        *(uint32_t *)(v7 + 12) =g4_m128_lane<int32_t>(a1, 0);
        v8 = v67;
      }
      goto LABEL_6;
    }
    v39 = *(uint32_t *)(v8 - 12);
    v40 = *(uint32_t *)(v8 - 8);
    v52 = v9 - 20;
    v71 = v8 - 20;
    v69 = *(uint32_t *)v7;
    v65 = *(uint32_t *)(v7 + 4);
    v57 = *(uint32_t *)(v7 + 16);
    v48 = *(uint32_t *)(v8 - 20);
    v46 = *(uint32_t *)(v8 - 16);
    v41 = *(uint32_t *)(v8 - 4);
    *(v10 - 5) = *(uint32_t *)(v9 - 20);
    *(v10 - 4) = *(uint32_t *)(v9 - 16);
    *(v10 - 3) = *(uint32_t *)(v9 - 12);
    *(v10 - 2) = *(uint32_t *)(v9 - 8);
    *(v10 - 1) = *(uint32_t *)(v9 - 4);
    *(float *)(v9 - 12) = v11;
    *(uint32_t *)(v9 - 20) = v69;
    *(uint32_t *)(v9 - 8) =g4_m128_lane<int32_t>(a1, 0);
    *(uint32_t *)(v9 - 16) = v65;
    *(uint32_t *)(v9 - 4) = v57;
    if ( v71 == v7 )
      break;
    *(uint32_t *)(v7 + 16) = v41;
    *(uint32_t *)v7 = v48;
    *(uint32_t *)(v7 + 4) = v46;
    v9 -= 20;
    *(uint32_t *)(v7 + 8) = v39;
    v10 -= 5;
    *(uint32_t *)(v7 + 12) = v40;
    v8 = v71;
LABEL_6:
    if ( v7 >= v8 )
    {
      v70 = (uint32_t *)v8;
      v66 = v10;
      v59 = v44 - v9;
      v14 = v44 - v9 + 19;
      v49 = -858993459 * ((int)(v9 - (uint32_t)(uintptr_t)(v10)) >> 2);
      goto LABEL_8;
    }
  }
  v9 -= 20;
  v59 = v44 - v52;
  v14 = v44 - v52 + 19;
  v70 = (uint32_t *)v7;
  v66 = v10 - 5;
  v49 = -858993459 * ((int)(v52 - (uint32_t)(uintptr_t)(v10 - 5)) >> 2);
LABEL_8:
  if ( v14 <= 0x26 )
  {
LABEL_37:
    v20 = -858993459 * ((int)((int)(uintptr_t)(v70) - v58) >> 2);
    goto LABEL_26;
  }
  v15 = *(uint32_t *)(*(uint32_t *)(a4 + 96) + 20);
  if ( v15 != 0 )
  {
    v16 = a4;
g4_m128_raw(a1) = *(unsigned int *)(a4 + 16);
    *(float *)g4_m128_ptr<int32_t>(a1) = fmaxf(*(float *)g4_m128_ptr<int32_t>(a1) - *(float *)(a4 + 12), 0.0);
    if ( v15 != 1 )
      goto LABEL_11;
    v18 = *(float *)g4_m128_ptr<int32_t>(a1);
    v17 = 0;
    goto LABEL_14;
  }
g4_m128_raw(a1) = 0;
  v16 = a4;
LABEL_11:
  v17 = 1;
  v18 = *(float *)(v16 + 24) - *(float *)(v16 + 20);
  if ( v18 <= *(float *)g4_m128_ptr<int32_t>(a1) )
  {
    v18 = *(float *)g4_m128_ptr<int32_t>(a1);
    LOBYTE(v17) = 0;
  }
  if ( v15 != 2 )
  {
LABEL_14:
g4_m128_raw(a1) = *(unsigned int *)(a4 + 32);
    if ( (float)(*(float *)g4_m128_ptr<int32_t>(a1) - *(float *)(a4 + 28)) > v18 )
      v17 = 2;
  }
  v19 = -858993459 * (v59 >> 2);
  v53 = v9;
  (*(void (**)(uint32_t, int, int, unsigned int, int, float *, float *))(**(uint32_t **)(a2 + 40) + 32))(
    *(uint32_t *)(a2 + 40),
    *(uint32_t *)(a2 + 52) + 32 * v17,
    v17,
    v9,
    v19,
    &v72,
    v73);
  v9 = v53;
  if ( v19 > 1 )
  {
    hkAlgorithm::quickSortRecursive_a47532(
      v53,
      0,
      v19 - 1);
    v9 = v53;
  }
  v20 = -858993459 * ((int)((int)(uintptr_t)(v70) - v58) >> 2);
  v60 = v49 > v20;
  if ( v44 > v9 )
  {
    v21 = v9 + 20;
    do
    {
      while ( 1 )
      {
        v20 = -858993459 * ((int)((int)(uintptr_t)(v70) - v58) >> 2);
        v29 = -858993459 * ((int)(v21 - 20 - (uint32_t)(uintptr_t)(v66)) >> 2);
        v30 = 858993460 * ((int)((int)(uintptr_t)(v70) - v58) >> 2);
        if ( v60 )
        {
          v29 = 858993460 * ((int)(v21 - 20 - (uint32_t)(uintptr_t)(v66)) >> 2);
          v30 = -858993459 * ((int)((int)(uintptr_t)(v70) - v58) >> 2);
        }
        if ( v30 >= v29 )
          break;
        v22 = *(uint32_t *)(v44 - 16);
        v61 = *(uint32_t *)(v44 - 20);
        *(uint32_t *)(v44 - 20) = *(uint32_t *)(v21 - 20);
        *(uint32_t *)(v44 - 16) = *(uint32_t *)(v21 - 16);
        v23 = *(uint32_t *)(v44 - 12);
        *(uint32_t *)(v44 - 12) = *(uint32_t *)(v21 - 12);
        v54 = v22;
        v24 = *(uint32_t *)(v44 - 8);
        *(uint32_t *)(v44 - 8) = *(uint32_t *)(v21 - 8);
        v25 = *(uint32_t *)(v44 - 4);
        *(uint32_t *)(v44 - 4) = *(uint32_t *)(v21 - 4);
        v26 = v66[2];
        v51 = v25;
g4_m128_raw(a1) = (unsigned int)v66[3];
        v9 = v21;
        v27 = *v66;
        v47 = v66[1];
        v28 = v66[4];
        v70[2] = v23;
        *v70 = v61;
        v70[1] = v54;
        v70[3] = v24;
        v70[4] = v51;
        *(uint32_t *)(v9 - 20) = v27;
        v70 += 5;
        *(uint32_t *)(v9 - 4) = v28;
        v66 += 5;
        v20 = -858993459 * ((int)((int)(uintptr_t)(v70) - v58) >> 2);
        v21 = v9 + 20;
        *(uint32_t *)(v9 - 16) = v47;
        *(uint32_t *)(v9 - 12) = v26;
        v60 = true;
        *(uint32_t *)(v9 - 8) =g4_m128_lane<int32_t>(a1, 0);
        if ( v44 <= v9 )
          goto LABEL_25;
      }
      v9 = v21;
      v21 += 20;
      v60 = false;
    }
    while ( v44 > v9 );
LABEL_25:
    v49 = -858993459 * ((int)(v9 - (uint32_t)(uintptr_t)(v66)) >> 2);
  }
LABEL_26:
  a6[1] = v20;
  *(float *)g4_m128_ptr<int32_t>(a1) = (float)((float)v20 * (float)v45) / (float)(int)a3[1];
  v31 = (_mm_cvtsi128_si32(a1) & 0x7F800000u) >> 23;
  v55 = 23 - (v31 - 127);
  v32 = (int)(v31 - 151) >> 31;
  v62 = _mm_cvtsi128_si32(a1) & ~(((_mm_cvtsi128_si32(a1) & 0x7FFFFFFF) - 1) >> 31);
  a6[2] = (~((int)(v31 - 127) >> 31)
         & (((v62 >> 31)
           | (((v62 & 0x7FFFFF | 0x800000) & (~v32 | (-8388608 >> ((v32 & 0x17) - (v32 & v55)))))
            + ((v62 & 0x7FFFFF | 0x800000) & (~v32 | (-8388608 >> ((v32 & 0x17) - (v32 & v55)))))
            - 1))
          - ((v62 & 0x7FFFFF | 0x800000) & (~v32 | (-8388608 >> ((v32 & 0x17) - (v32 & v55)))))
          + 1)) >> (v32 & v55) << (~(uint8_t)v32 & (v31 + 106));
  a7[1] = v49;
  a7[2] = v45 - a6[2];
  *a6 = v58;
  result = &v70[5 * a6[2]];
  *a7 = (uint32_t)(uintptr_t)(result);
  if ( a7[2] != 0 )
  {
    for ( i = v66; (unsigned int)(uintptr_t)(i) < v9; result += 5 )
    {
      v35 = *i;
      i += 5;
      *result = v35;
      result[1] = *(i - 4);
      result[2] = *(i - 3);
      result[3] = *(i - 2);
      result[4] = *(i - 1);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultSplitter::split  (binary VA: 0x1b0f4e0)
// Original: hkpMoppDefaultSplitter::split
// ----------------------------------------------------------------------------
int hkpMoppDefaultSplitter::split(hkpMoppDefaultSplitter::Self *a1, uint32_t *a2, unsigned int **a3, int a4, int a5)
{
  int v5;
  uint32_t *Node;
  int i;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int **v12;
  int v13;
  int v14;
  uint32_t *v15;
  unsigned int v16;
  unsigned int *v17;
  unsigned int *v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  int v27;
  uint32_t *j;
  int v29;
  int v46;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef unsigned int *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint32_t _g4_t_v41[3];
  typedef uint32_t _g4_t_v42[3];
  typedef int _g4_t_v43[3];
  typedef int _g4_t_v44;
  typedef uint8_t _g4_t_v45[520];
  enum : size_t {
    _g4_s0 = 704u,
    _g4_s1 = (12u + sizeof(_g4_t_v30)) > _g4_s0 ? (12u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v31)) > _g4_s1 ? (36u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v32)) > _g4_s2 ? (40u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v33)) > _g4_s3 ? (40u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v34)) > _g4_s4 ? (40u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v35)) > _g4_s5 ? (44u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v36)) > _g4_s6 ? (48u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v37)) > _g4_s7 ? (52u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v38)) > _g4_s8 ? (52u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v39)) > _g4_s9 ? (52u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v40)) > _g4_s10 ? (56u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v41)) > _g4_s11 ? (72u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v42)) > _g4_s12 ? (84u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v43)) > _g4_s13 ? (96u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v44)) > _g4_s14 ? (108u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v45)) > _g4_s15 ? (112u + sizeof(_g4_t_v45)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 72u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 84u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 96u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 108u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 112u);

  v5 = *((uint32_t *)a1 + 2);
  if ( a3[1] == (unsigned int *)((char *)&dword_0 + 1) )
  {
    if ( *(uint8_t *)(v5 + 20) != 0 && *((uint32_t *)a1 + 7) == 0 )
      (*(void (**)(uint32_t, uint32_t, hkpMoppDefaultSplitter::Self *, int))(**((uint32_t **)a1 + 9) + 28))(
        *((uint32_t *)a1 + 9),
        *((uint32_t *)a1 + 11),
        a1,
        2048);
    return (int)(uintptr_t)(hkpMoppDefaultSplitter::createTerminal((int)(uintptr_t)(a1), (int)(uintptr_t)(a2), a3));
  }
  else
  {
    if ( *(uint8_t *)(v5 + 20) != 0 && *((uint32_t *)a1 + 5) == 0 )
      (*(void (**)(uint32_t, uint32_t, hkpMoppDefaultSplitter::Self *, int))(**((uint32_t **)a1 + 9) + 28))(
        *((uint32_t *)a1 + 9),
        *((uint32_t *)a1 + 11),
        a1,
        2048);
    Node = (uint32_t *)hkpMoppDefaultSplitter::createNode(a1);
    v40 = (int)(uintptr_t)(Node);
    Node[30] = (uint32_t)(uintptr_t)(a3[1]);
    *Node = (uint32_t)(uintptr_t)(a2);
    if ( a2 != nullptr )
    {
      if ( a4 != 0 )
        a2[29] = (uint32_t)(uintptr_t)(Node);
      else
        a2[28] = (uint32_t)(uintptr_t)(Node);
      Node[3] = a2[3];
      Node[4] = a2[4];
      Node[5] = a2[5];
      Node[6] = a2[6];
      Node[7] = a2[7];
      Node[8] = a2[8];
    }
    else
    {
      *((uint32_t *)a1 + 11) = (uint32_t)(uintptr_t)(Node);
    }
    hkpMoppDefaultSplitter::resortAxis(a1, a2, v42, v41);
    v37 = 0;
    for ( i = 0; ; i = v9 )
    {
      v8 = v42[v37];
      v9 = *((uint32_t *)a1 + 13) + 32 * v8;
      if ( (float)(*(float *)(v9 + 16) + *(float *)&v41[v37]) > *(float *)(v40 + 108) )
        break;
      v10 = v40 + 8 * v8;
      v36 = v10 + 12;
      (*(void (**)(uint32_t, int, int, unsigned int *, unsigned int *, int, int))(**((uint32_t **)a1 + 10) + 32))(
        *((uint32_t *)a1 + 10),
        v9,
        v8,
        *a3,
        a3[1],
        v10 + 12,
        v10 + 16);
      v11 = (int)(uintptr_t)(a3[1]);
      if ( v11 > 1 )
        hkAlgorithm::quickSortRecursive_a47532(
          *a3,
          0,
          v11 - 1);
      hkpMoppDefaultSplitter::findSplittingPlanePositions((uint32_t *)(a1), v40, v9, (float **)(a3), (float *)(uintptr_t)(v36), a5);
      if ( *(uint32_t *)(v40 + 96) == 0 )
      {
        hkErrStream::Construct((hkErrStream::Self *)v43, (hkString::Self *)&v44, 512);
        hkOstream::opShl((int)(uintptr_t)(v43), (hkString::Self *)"Could not find splitting plane for child");
        hkError::messageWarning(
          (hkError::Self *)0xABBA2344,
          (int)(uintptr_t)(&v44),
          "Collide/Mopp/Builder/Splitter/hkpMoppDefaultSplitter.cpp",
          (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_304)->st_name + 1,
          v30);
        hkErrStream::Destroy((hkErrStream::Self *)v43);
        goto LABEL_52;
      }
      if ( ++v37 == 3 )
      {
        v12 = a3;
        goto LABEL_18;
      }
    }
    v34 = i;
    v12 = a3;
    v27 = *((uint32_t *)a1 + 13) + 32 * v42[v37];
    for ( j = &v42[v37]; ; v27 = *((uint32_t *)a1 + 13) + 32 * *j )
    {
      v29 = 8 * *j++;
      (*(void (**)(uint32_t, int, uint32_t, unsigned int *, unsigned int *, int, int))(**((uint32_t **)a1 + 10) + 36))(
        *((uint32_t *)a1 + 10),
        v27,
        *(j - 1),
        *a3,
        a3[1],
        v40 + v29 + 12,
        v40 + v29 + 16);
      if ( ++v37 == 3 )
        break;
    }
    v9 = v34;
LABEL_18:
    if ( *((int *)a1 + 12) <= 3
      || (v35 = *((uint32_t *)a1 + 13) + 96, *(float *)(*((uint32_t *)a1 + 13) + 112) > *(float *)(v40 + 108)) )
    {
      v35 = v9;
    }
    else
    {
      v38 = 3;
      (*(void (**)(uint32_t, int, int, unsigned int *, unsigned int *, int *, uint8_t *))(**((uint32_t **)a1 + 10) + 32))(
        *((uint32_t *)a1 + 10),
        v35,
        3,
        *v12,
        v12[1],
        &v44,
        v45);
      while ( 1 )
      {
        v14 = (int)(uintptr_t)(v12[1]);
        if ( v14 > 1 )
          hkAlgorithm::quickSortRecursive_a47532(
            *v12,
            0,
            v14 - 1);
        hkpMoppDefaultSplitter::findSplittingPlanePositions((uint32_t *)(a1), v40, v35, (float **)(v12), (float *)(&v44), a5);
        if ( *((uint32_t *)a1 + 12) <= ++v38 )
          break;
        v13 = *((uint32_t *)a1 + 13) + 32 * v38;
        if ( *(float *)(v13 + 16) > *(float *)(v40 + 108) )
          break;
        v35 = *((uint32_t *)a1 + 13) + 32 * v38;
        (*(void (**)(uint32_t, int, int, unsigned int *, unsigned int *, int *, uint8_t *))(**((uint32_t **)a1 + 10)
                                                                                              + 32))(
          *((uint32_t *)a1 + 10),
          v13,
          v38,
          *v12,
          v12[1],
          &v44,
          v45);
      }
    }
    v15 = (uint32_t *)v40;
    v32 = *v12;
    v16 = **v12;
    *(uint32_t *)(v40 + 44) = 0;
    *(uint32_t *)(v40 + 48) = -1;
    *(uint32_t *)(v40 + 52) = 0;
    v17 = v12[1];
    v39 = v16;
    v31 = (int)(uintptr_t)(v17) - 1;
    if ( (int)(uintptr_t)(v17) - 1 >= 0 )
    {
      v46 = (int)(uintptr_t)(v12);
      v18 = v32;
      v19 = v16;
      do
      {
        v20 = *v18;
        v33 = v15;
        if ( v19 < *v18 )
          v19 = *v18;
        if ( v39 <= v20 )
          v20 = v39;
        v39 = v20;
        v21 = (*(int (**)(uint32_t, unsigned int *, int *))(**((uint32_t **)a1 + 10) + 44))(
                *((uint32_t *)a1 + 10),
                v18,
                &v44);
        v15 = v33;
        if ( v21 > v33[11] )
          v33[11] = v21;
        if ( v21 > 0 )
        {
          v22 = v44;
          if ( (unsigned int)v44 < v33[12] )
            v33[12] = v44;
          if ( v22 > v33[13] )
            v33[13] = v22;
        }
        v18 += 5;
        --v31;
      }
      while ( v31 != -1 );
      v16 = v19;
      v12 = (unsigned int **)v46;
      v17 = *(unsigned int **)(v46 + 4);
    }
    *(uint32_t *)(v40 + 8) = (uint32_t)(uintptr_t)(v17);
    *(uint32_t *)(v40 + 36) = v39;
    v23 = *(uint32_t *)(v40 + 96);
    *(uint32_t *)(v40 + 40) = v16;
    if ( v23 != v35 )
      (*(void (**)(uint32_t, int, uint32_t, unsigned int *, unsigned int *, uint32_t *, uint32_t *))(**((uint32_t **)a1 + 10) + 32))(
        *((uint32_t *)a1 + 10),
        v23,
        *(uint32_t *)(v23 + 20),
        *v12,
        v12[1],
        v41,
        v42);
    hkpMoppDefaultSplitter::groupPrimitives(a1, v12, v40, a5, v43, &v44);
    *(uint32_t *)(v40 + 116) = hkpMoppDefaultSplitter::split(a1, (uint32_t *)(uintptr_t)(v40), (unsigned int **)(uintptr_t)((int)(uintptr_t)(&v44)), 1, a5 + 1);
    v24 = hkpMoppDefaultSplitter::split(a1, (uint32_t *)(uintptr_t)(v40), (unsigned int **)(uintptr_t)((int)(uintptr_t)(v43)), 0, a5 + 1);
    v25 = *(uint32_t *)(v40 + 116);
    *(uint32_t *)(v40 + 112) = v24;
    if ( v25 != 0 && v24 != 0 )
      return v40;
LABEL_52:
    *(uint32_t *)v40 = *((uint32_t *)a1 + 4);
    *((uint32_t *)a1 + 4) = v40;
    ++*((uint32_t *)a1 + 5);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpMoppDefaultSplitter::buildTree  (binary VA: 0x1b0fb10)
// Original: hkpMoppDefaultSplitter::buildTree
// ----------------------------------------------------------------------------
int hkpMoppDefaultSplitter::buildTree(hkpMoppDefaultSplitter::Self *a1, int a2, int a3, int a4, int a5, int *a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  int v18;
  int v19;
  uint32_t *address;
  int v21;
  int v22;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26[3];
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v24)) > _g4_s0 ? (12u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v26)) > _g4_s2 ? (20u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v27)) > _g4_s3 ? (32u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v28)) > _g4_s4 ? (36u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v29)) > _g4_s5 ? (40u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v30)) > _g4_s6 ? (44u + sizeof(_g4_t_v30)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);

  *((uint32_t *)a1 + 9) = a4;
  *((uint32_t *)a1 + 2) = a5;
  *((uint32_t *)a1 + 10) = a2;
  *((uint32_t *)a1 + 8) = a3;
  v6 = G4_VCALL<int>(a2, 24);
  v7 = *(uint32_t *)(a5 + 4);
  v26[1] = v6;
  v26[2] = v7;
  v8 = *a6;
  *((uint32_t *)a1 + 14) = 0;
  v26[0] = v8;
  v9 = v6;
  v10 = 1;
  if ( v6 != 0 )
  {
    do
    {
      v11 = v10++;
      v9 >>= 1;
    }
    while ( v9 != 0 );
    *((uint32_t *)a1 + 14) = v11;
  }
  if ( *(uint8_t *)(*((uint32_t *)a1 + 2) + 20) != 0 )
  {
    *((uint32_t *)a1 + 4) = 0;
    *((uint32_t *)a1 + 5) = 0;
    v24 = 0x2000;
    v12 = (uint32_t *)a6[1];
    v13 = 4096;
  }
  else
  {
    v13 = v7 + v6;
    *((uint32_t *)a1 + 4) = 0;
    *((uint32_t *)a1 + 5) = 0;
    v12 = (uint32_t *)a6[1];
    if ( v13 <= 0 )
    {
      *((uint32_t *)a1 + 6) = 0;
      *((uint32_t *)a1 + 7) = 0;
      v24 = 2 * v13;
      goto LABEL_12;
    }
    v24 = 2 * v13;
  }
  v14 = nullptr;
  v15 = 0;
  while ( 1 )
  {
    ++v15;
    *v12 = (uint32_t)(uintptr_t)(v14);
    ++*((uint32_t *)a1 + 5);
    *((uint32_t *)a1 + 4) = (uint32_t)(uintptr_t)(v12);
    if ( v15 >= v13 )
      break;
    v14 = v12;
    v12 += 31;
  }
  *((uint32_t *)a1 + 6) = 0;
  *((uint32_t *)a1 + 7) = 0;
  v16 = nullptr;
  v17 = (uint32_t *)a6[2];
  v18 = 0;
  while ( 1 )
  {
    ++v18;
    *v17 = (uint32_t)(uintptr_t)(v16);
    ++*((uint32_t *)a1 + 7);
    *((uint32_t *)a1 + 6) = (uint32_t)(uintptr_t)(v17);
    if ( v18 >= v13 )
      break;
    v16 = v17;
    v17 += 25;
  }
LABEL_12:
  *((uint32_t *)a1 + 12) = G4_VCALL<int>(a4, 20);
  *((uint32_t *)a1 + 13) = G4_VCALL<int>(a4, 24);
  v19 = *(uint32_t *)(*((uint32_t *)a1 + 2) + 8) + 2;
  address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v29 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 40) + 8))(*(uint32_t *)(*address + 40), 4 * v19);
  *((uint32_t *)a1 + 3) = (uint32_t)(uintptr_t)(&v27);
  v28 = v19;
  v27 = 0;
  v30 = 0;
  v21 = hkpMoppDefaultSplitter::split(a1, nullptr, (unsigned int **)v26, 0, 0);
  v22 = v24;
  v25 = v21;
  G4_VCALL<void>(a4, 28, v21, a1, v22);
  *((uint32_t *)a1 + 3) = 0;
  *((uint32_t *)a1 + 13) = 0;
  *((uint32_t *)a1 + 12) = 0;
  (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*address + 40) + 12))(*(uint32_t *)(*address + 40), v29, 4 * v28);
  return v25;
}


