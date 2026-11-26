#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpPrimiti.h"

// ----------------------------------------------------------------------------
// Function: hkpPrimitiveDrawer::Construct  (binary VA: 0x1af5fc0)
// Original: hkpPrimitiveDrawer::hkpPrimitiveDrawer
// ----------------------------------------------------------------------------
void hkpPrimitiveDrawer::Construct(hkpPrimitiveDrawer::Self *self)
{
  *(uint32_t *)self = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpPrimitiveDrawer::setDisplayHandler  (binary VA: 0x1af5fd0)
// Original: hkpPrimitiveDrawer::setDisplayHandler
// ----------------------------------------------------------------------------
hkpPrimitiveDrawer::Self * hkpPrimitiveDrawer::setDisplayHandler(hkpPrimitiveDrawer::Self *self, hkDebugDisplayHandler::Self *a2)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpPrimitiveDrawer::displayArrow  (binary VA: 0x1af5fe0)
// Original: hkpPrimitiveDrawer::displayArrow
// ----------------------------------------------------------------------------
int hkpPrimitiveDrawer::displayArrow(hkpPrimitiveDrawer::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4, unsigned int a5, float a6, int a7, int a8)
{
  float *v8;
  float v9; // xmm1_4
  unsigned int v10;
  int v11;
  int v12;
  typedef float _g4_t_v14;
  typedef int _g4_t_v15;
  typedef float _g4_t_v16;
  typedef hkVector4f::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef hkpPrimitiveDrawer::Self *_g4_t_v20;
  typedef uint8_t _g4_t_v21[4];
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef uint8_t _g4_t_v26[16];
  typedef uint8_t _g4_t_v27[16];
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef hkpPrimitiveDrawer::Self **_g4_t_v36;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v17)) > _g4_s3 ? (16u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v18)) > _g4_s4 ? (24u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v19)) > _g4_s5 ? (28u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v20)) > _g4_s6 ? (32u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v21)) > _g4_s7 ? (36u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v22)) > _g4_s8 ? (40u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v23)) > _g4_s9 ? (44u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v24)) > _g4_s10 ? (48u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v25)) > _g4_s11 ? (52u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v26)) > _g4_s12 ? (56u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v27)) > _g4_s13 ? (72u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v28)) > _g4_s14 ? (88u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v29)) > _g4_s15 ? (92u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v30)) > _g4_s16 ? (96u + sizeof(_g4_t_v30)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v31)) > _g4_s17 ? (100u + sizeof(_g4_t_v31)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v32)) > _g4_s18 ? (104u + sizeof(_g4_t_v32)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v33)) > _g4_s19 ? (108u + sizeof(_g4_t_v33)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v34)) > _g4_s20 ? (112u + sizeof(_g4_t_v34)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v35)) > _g4_s21 ? (116u + sizeof(_g4_t_v35)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v36)) > _g4_s22 ? (128u + sizeof(_g4_t_v36)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 72u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 88u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 92u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 96u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 100u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 104u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 108u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 112u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 116u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 128u);

  v36 = &self;
  v8 = (float *)a3;
  v20 = self;
  v9 = *(float *)a3;
  v17 = (hkVector4f::Self *)(a4);
  v10 = a5;
  v19 = a7;
  v22 = *(float *)a2;
  v23 = *((float *)a2 + 1);
  v24 = *((float *)a2 + 2);
  v18 = a8;
  v25 = *((float *)a2 + 3);
  v22 = (float)(v9 * a6) + v22;
  v23 = (float)(*((float *)a3 + 1) * a6) + v23;
  v14 = a6;
  v15 = *(uint32_t *)self;
  v24 = (float)(*((float *)a3 + 2) * a6) + v24;
  v25 = (float)(a6 * *((float *)a3 + 3)) + v25;
  (*(void (**)(uint8_t *, int, const hkVector4f::Self *, float *, unsigned int, int, int))(*(uint32_t *)v15 + 72))(
    v21,
    v15,
    a2,
    &v22,
    a5,
    a7,
    a8);
  hkQuaternionf::setAxisAngle((hkQuaternionf::Self *)v26, v17, 0.7853982f);
  hkQuaternionf::setAxisAngle((hkQuaternionf::Self *)v27, v17, -1.5707964f);
  v28 = *v8;
  v29 = v8[1];
  v30 = v8[2];
  v31 = v8[3];
  hkVector4f::setRotatedDir((hkVector4f::Self *)&v28, (const hkQuaternionf::Self *)v26, (const hkVector4f::Self *)&v28);
  v32 = v22;
  v33 = v23;
  v34 = v24;
  v35 = v25;
  v16 = (float)-v14 * 0.333f;
  v11 = *(uint32_t *)v20;
  v32 = (float)(v28 * v16) + v22;
  v33 = (float)(v29 * v16) + v23;
  v34 = (float)(v30 * v16) + v24;
  v35 = (float)(v16 * v31) + v25;
  (*(void (**)(uint8_t *, int, float *, float *, unsigned int, int, int))(*(uint32_t *)v11 + 72))(
    v21,
    v11,
    &v22,
    &v32,
    v10,
    v19,
    v18);
  hkVector4f::setRotatedDir((hkVector4f::Self *)&v28, (const hkQuaternionf::Self *)v27, (const hkVector4f::Self *)&v28);
  v32 = v22;
  v33 = v23;
  v34 = v24;
  v35 = v25;
  v12 = *(uint32_t *)v20;
  v32 = (float)(v28 * v16) + v22;
  v33 = (float)(v29 * v16) + v23;
  v34 = (float)(v30 * v16) + v24;
  v35 = (float)(v16 * v31) + v25;
  return (*(int (**)(uint8_t *, int, float *, float *, unsigned int, int, int))(*(uint32_t *)v12 + 72))(
           v21,
           v12,
           &v22,
           &v32,
           v10,
           v19,
           v18);
}

// ----------------------------------------------------------------------------
// Function: hkpPrimitiveDrawer::drawSemiCircle  (binary VA: 0x1af62e0)
// Original: hkpPrimitiveDrawer::drawSemiCircle
// ----------------------------------------------------------------------------
int hkpPrimitiveDrawer::drawSemiCircle(int a1, int a2, int a3, int a4, hkpPrimitiveDrawer::Self *self, const hkVector4f::Self *a6, hkVector4f::Self *a7, hkVector4f::Self *a8, float a9, float a10, float a11, int a12)
{
  float *v12;
  __m128i v13;
  float v14; // xmm3_4
  float *v15;
  float v16; // xmm2_4
  __m128i v17;
  float v18; // xmm5_4
  int v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm4_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  __m128i v27;
  float v28; // xmm3_4
  float v29; // xmm2_4
  __m128i v30;
  float v31; // xmm5_4
  int v32;
  float v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm6_4
  float v36; // xmm4_4
  float v37; // xmm3_4
  float v38; // xmm2_4
  float v39; // xmm6_4
  int result;
  float v41; // xmm0_4
  int v42;
  void *retaddr;
  typedef const hkVector4f::Self *_g4_t_v43;
  typedef float _g4_t_v44;
  typedef float *_g4_t_v45;
  typedef float _g4_t_v46;
  typedef hkpPrimitiveDrawer::Self *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef float _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef uint32_t _g4_t_v60[20];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v43)) > _g4_s0 ? (4u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v44)) > _g4_s1 ? (8u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v45)) > _g4_s2 ? (12u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v46)) > _g4_s3 ? (16u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v47)) > _g4_s4 ? (32u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v48)) > _g4_s5 ? (36u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v49)) > _g4_s6 ? (40u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v50)) > _g4_s7 ? (40u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v51)) > _g4_s8 ? (44u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v52)) > _g4_s9 ? (48u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v53)) > _g4_s10 ? (52u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v54)) > _g4_s11 ? (56u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v55)) > _g4_s12 ? (60u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v56)) > _g4_s13 ? (64u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v57)) > _g4_s14 ? (68u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v58)) > _g4_s15 ? (72u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v59)) > _g4_s16 ? (76u + sizeof(_g4_t_v59)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v60)) > _g4_s17 ? (80u + sizeof(_g4_t_v60)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 40u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 44u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 48u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 52u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 56u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 60u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 64u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 68u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 72u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 76u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 80u);

  v60[19] = (uint32_t)(uintptr_t)(retaddr);
  v60[18] = a2;
  v60[17] = a3;
  v60[16] = a4;
  v60[15] = a1;
  v60[14] = (uint32_t)(uintptr_t)(&self);
  v12 = (float *)a8;
g4_m128_raw(v13) = *(unsigned int *)a8;
  v44 = a11;
  v47 = self;
  v14 = *((float *)a8 + 1);
  v45 = (float *)a6;
  v17 = v13;
  v15 = (float *)a7;
  v46 = a9;
  v16 = *((float *)a8 + 2);
  v48 = a12;
  *(float *)g4_m128_ptr<int32_t>(v17) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v13) * *(float *)g4_m128_ptr<int32_t>(v13)) + (float)(v14 * v14))
                          + (float)(v16 * v16);
  v49 = (float)(a10 - a9) / (float)a12;
  if ( *(float *)g4_m128_ptr<int32_t>(v17) <= 0.0 )
  {
    v22 = 0.0;
  }
  else
  {
    v18 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v17);
    v19 = ((_mm_cvtsi128_si32(v17) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v17) >> 1));
    v20 = (float)(1.5 * *(float *)&v19)
        - (float)((float)(v18 * *(float *)&v19) * (float)(*(float *)&v19 * *(float *)&v19));
    v21 = (float)(1.5 * v20) - (float)((float)(v18 * v20) * (float)(v20 * v20));
    v22 = (float)(1.5 * v21) - (float)((float)(v18 * v21) * (float)(v21 * v21));
  }
  v23 = *(float *)g4_m128_ptr<int32_t>(v13) * v22;
  v24 = v14 * v22;
  v25 = v16 * v22;
  v26 = v22 * *((float *)a8 + 3);
  *(float *)a8 = v23;
  v12[1] = v24;
  v12[2] = v25;
  v12[3] = v26;
g4_m128_raw(v27) = *(unsigned int *)v15;
  v28 = v15[1];
  v30 = v27;
  v29 = v15[2];
  *(float *)g4_m128_ptr<int32_t>(v30) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v27) * *(float *)g4_m128_ptr<int32_t>(v27)) + (float)(v28 * v28))
                          + (float)(v29 * v29);
  if ( *(float *)g4_m128_ptr<int32_t>(v30) <= 0.0 )
  {
    v35 = 0.0;
  }
  else
  {
    v31 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v30);
    v32 = ((_mm_cvtsi128_si32(v30) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v30) >> 1));
    v33 = (float)(*(float *)&v32 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v30)) * *(float *)&v32)
                * (float)(*(float *)&v32 * *(float *)&v32));
    v34 = (float)((float)((float)(*(float *)&v32 * 1.5)
                        - (float)((float)(v31 * *(float *)&v32) * (float)(*(float *)&v32 * *(float *)&v32)))
                * 1.5)
        - (float)((float)(v31 * v33) * (float)(v33 * v33));
    v35 = (float)(1.5 * v34) - (float)((float)(v31 * v34) * (float)(v34 * v34));
  }
  v36 = *(float *)g4_m128_ptr<int32_t>(v27) * v35;
  v43 = (const hkVector4f::Self *)v15;
  v37 = v28 * v35;
  v38 = v29 * v35;
  v39 = v35 * v15[3];
  *v15 = v36;
  v15[1] = v37;
  v15[2] = v38;
  v15[3] = v39;
  hkRotationf::setAxisAngle((hkRotationf::Self *)v60, (const hkVector4f::Self *)v15, v46);
  v52 = *v12 * v44;
  v53 = v12[1] * v44;
  v54 = v12[2] * v44;
  v55 = v12[3] * v44;
  hkVector4f::setRotatedDir((hkVector4f::Self *)&v52, (const hkMatrix3f::Self *)v60, (const hkVector4f::Self *)&v52);
  v52 = v52 + *v45;
  v53 = v53 + v45[1];
  v54 = v54 + v45[2];
  v55 = v55 + v45[3];
  hkRotationf::setAxisAngle((hkRotationf::Self *)v60, v43, v49);
  result = 0;
  if ( v48 > 0 )
  {
    do
    {
      v50 = result;
      v56 = v52;
      v57 = v53;
      v41 = v52 - *v45;
      v58 = v54;
      v59 = v55;
      v56 = v41;
      v57 = v53 - v45[1];
      v58 = v54 - v45[2];
      v59 = v55 - v45[3];
      hkVector4f::setRotatedDir((hkVector4f::Self *)&v56, (const hkMatrix3f::Self *)v60, (const hkVector4f::Self *)&v56);
      v42 = *(uint32_t *)v47;
      v56 = v56 + *v45;
      v57 = v57 + v45[1];
      v58 = v58 + v45[2];
      v59 = v59 + v45[3];
      (*(void (**)(int *))(*(uint32_t *)v42 + 72))(&v51);
      v52 = v56;
      v53 = v57;
      v54 = v58;
      result = v50 + 1;
      v55 = v59;
    }
    while ( v50 + 1 != v48 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPrimitiveDrawer::displayOrientedPoint  (binary VA: 0x1af6750)
// Original: hkpPrimitiveDrawer::displayOrientedPoint
// ----------------------------------------------------------------------------
int hkpPrimitiveDrawer::displayOrientedPoint(hkpPrimitiveDrawer::Self *self, const hkVector4f::Self *a2, const hkRotationf::Self *a3, float a4, unsigned int a5, int a6, int a7)
{
  float *v7;
  float v8; // xmm7_4
  float v9; // xmm1_4
  float v10; // xmm4_4
  int v11;
  float v12; // xmm5_4
  float v13; // xmm3_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm4_4
  int v17;
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm4_4
  int v22;
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef hkpPrimitiveDrawer::Self *_g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef unsigned int _g4_t_v41;
  typedef uint8_t _g4_t_v42[4];
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef hkpPrimitiveDrawer::Self **_g4_t_v51;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v28)) > _g4_s1 ? (4u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v29)) > _g4_s2 ? (12u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v30)) > _g4_s3 ? (16u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v31)) > _g4_s4 ? (20u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v32)) > _g4_s5 ? (24u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v33)) > _g4_s6 ? (28u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v34)) > _g4_s7 ? (32u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v35)) > _g4_s8 ? (36u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v36)) > _g4_s9 ? (40u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v37)) > _g4_s10 ? (44u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v38)) > _g4_s11 ? (48u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v39)) > _g4_s12 ? (52u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v40)) > _g4_s13 ? (56u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v41)) > _g4_s14 ? (60u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v42)) > _g4_s15 ? (64u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v43)) > _g4_s16 ? (68u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v44)) > _g4_s17 ? (72u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v45)) > _g4_s18 ? (76u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v46)) > _g4_s19 ? (80u + sizeof(_g4_t_v46)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v47)) > _g4_s20 ? (84u + sizeof(_g4_t_v47)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v48)) > _g4_s21 ? (88u + sizeof(_g4_t_v48)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v49)) > _g4_s22 ? (92u + sizeof(_g4_t_v49)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v50)) > _g4_s23 ? (96u + sizeof(_g4_t_v50)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v51)) > _g4_s24 ? (108u + sizeof(_g4_t_v51)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
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
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 60u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 64u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 68u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 72u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 76u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 80u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 84u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 88u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 92u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 96u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 108u);

  v51 = &self;
  v7 = (float *)a2;
  v33 = *((float *)a3 + 5);
  v41 = a5;
  v40 = a6;
  v39 = a7;
  v34 = *((float *)a3 + 6);
  v35 = *((float *)a3 + 7);
  v8 = *(float *)a3;
  v9 = *((float *)a3 + 1);
  v10 = *((float *)a3 + 2);
  v38 = *((float *)a3 + 3);
  v31 = *((float *)a3 + 4);
  v29 = *((float *)a3 + 8);
  v36 = *((float *)a3 + 9);
  v11 = *(uint32_t *)self;
  v32 = self;
  v37 = *((float *)a3 + 10);
  v30 = *((float *)a3 + 11);
  v27 = a4;
  v43 = *(float *)a2 - (float)(*(float *)a3 * a4);
  v12 = *((float *)a2 + 1);
  v44 = v12 - (float)(v9 * a4);
  v13 = *((float *)a2 + 2);
  v45 = v13 - (float)(v10 * a4);
  v46 = *((float *)a2 + 3) - (float)(v38 * a4);
  v28 = -a4;
  v14 = v13 - (float)(v10 * (float)-a4);
  v15 = *((float *)a2 + 3);
  v47 = *(float *)a2 - (float)(v8 * (float)-a4);
  v48 = v12 - (float)(v9 * (float)-a4);
  v49 = v14;
  v50 = v15 - (float)(v38 * (float)-a4);
  (*(void (**)(uint8_t *, int, float *, float *, unsigned int, int, int))(*(uint32_t *)v11 + 72))(
    v42,
    v11,
    &v43,
    &v47,
    a5,
    a6,
    a7);
  v16 = *v7;
  v17 = *(uint32_t *)v32;
  v18 = v7[1];
  v43 = *v7 - (float)(v31 * v27);
  v44 = v18 - (float)(v33 * v27);
  v19 = v7[2];
  v20 = v7[3];
  v45 = v19 - (float)(v34 * v27);
  v46 = v20 - (float)(v35 * v27);
  v47 = v16 - (float)(v31 * v28);
  v48 = v18 - (float)(v33 * v28);
  v49 = v19 - (float)(v34 * v28);
  v50 = v20 - (float)(v35 * v28);
  (*(void (**)(uint8_t *, int, float *, float *, unsigned int, int, int))(*(uint32_t *)v17 + 72))(
    v42,
    v17,
    &v43,
    &v47,
    v41,
    v40,
    v39);
  v21 = *v7;
  v22 = *(uint32_t *)v32;
  v23 = v7[1];
  v43 = *v7 - (float)(v29 * v27);
  v24 = v7[3];
  v44 = v23 - (float)(v36 * v27);
  v25 = v7[2];
  v45 = v25 - (float)(v37 * v27);
  v46 = v24 - (float)(v27 * v30);
  v47 = v21 - (float)(v29 * v28);
  v48 = v23 - (float)(v36 * v28);
  v49 = v25 - (float)(v37 * v28);
  v50 = v24 - (float)(v28 * v30);
  return (*(int (**)(uint8_t *, int, float *, float *, unsigned int, int, int))(*(uint32_t *)v22 + 72))(
           v42,
           v22,
           &v43,
           &v47,
           v41,
           v40,
           v39);
}

// ----------------------------------------------------------------------------
// Function: hkpPrimitiveDrawer::displayCone  (binary VA: 0x1af6af0)
// Original: hkpPrimitiveDrawer::displayCone
// ----------------------------------------------------------------------------
hkMemoryAllocator::Self * hkpPrimitiveDrawer::displayCone(hkpPrimitiveDrawer::Self *self, float a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5, int a6, unsigned int a7, float a8)
{
  const hkVector4f::Self *v8;
  const hkVector4f::Self *v9;
  int v10;
  float *v11;
  hkVector4f::Self *v12;
  float v13; // xmm0_4
  const hkVector4f::Self *v14;
  hkMemoryAllocator::Self *v15;
  int v16;
  typedef uint32_t *_g4_t_address;
  typedef hkMemoryAllocator::Self *_g4_t_v19;
  typedef const hkVector4f::Self *_g4_t_v20;
  typedef const hkVector4f::Self *_g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef hkVector4f::Self *_g4_t_v24;
  typedef hkpPrimitiveDrawer::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef char _g4_t_v27[4];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[16];
  typedef float _g4_t_v30[10];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_address)) > _g4_s0 ? (0u + sizeof(_g4_t_address)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v21)) > _g4_s3 ? (12u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v22)) > _g4_s4 ? (16u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v23)) > _g4_s5 ? (20u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v24)) > _g4_s6 ? (20u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v25)) > _g4_s7 ? (36u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v26)) > _g4_s8 ? (40u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v27)) > _g4_s9 ? (44u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v28)) > _g4_s10 ? (48u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v29)) > _g4_s11 ? (64u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v30)) > _g4_s12 ? (80u + sizeof(_g4_t_v30)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);

  LODWORD(v30[6]) = (uint32_t)(uintptr_t)(&self);
  v20 = a3;
  v8 = a4;
  v25 = self;
  v9 = a5;
  v26 = a6;
  v22 = a2;
  v23 = a8;
  address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v19 = (hkMemoryAllocator::Self *)hkMemoryRouter::easyAlloc(
                               *(hkMemoryRouter::Self **)(*address + 44),
                               (hkMemoryAllocator::Self *)(16 * v26));
  hkQuaternionf::setAxisAngle((hkQuaternionf::Self *)v28, v9, v22);
  hkQuaternionf::setAxisAngle((hkQuaternionf::Self *)v29, v8, 6.2831855f / (float)v26);
  v10 = 0;
  hkVector4f::setRotatedDir((hkVector4f::Self *)v30, (const hkQuaternionf::Self *)v28, v8);
  v11 = (float *)v19;
  v12 = (hkVector4f::Self *)v30;
  v13 = v23 / v22;
  v14 = v20;
  if ( v26 > 0 )
  {
    do
    {
      v21 = v14;
      *v11 = *(float *)v14;
      v11[1] = *((float *)v14 + 1);
      v11[2] = *((float *)v14 + 2);
      v11[3] = *((float *)v14 + 3);
      v24 = v12;
      ++v10;
      v11 += 4;
      *(v11 - 4) = (float)(v30[0] * v13) + *(v11 - 4);
      *(v11 - 3) = (float)(v30[1] * v13) + *(v11 - 3);
      *(v11 - 2) = (float)(v30[2] * v13) + *(v11 - 2);
      *(v11 - 1) = (float)(v13 * v30[3]) + *(v11 - 1);
      hkVector4f::setRotatedDir(v12, (const hkQuaternionf::Self *)v29, v12);
      v12 = v24;
      v14 = v21;
    }
    while ( v10 != v26 );
    v15 = v19;
    v16 = 0;
    do
    {
      ++v16;
      (*(void (**)(char *))(**(uint32_t **)v25 + 72))(v27);
      (*(void (**)(char *))(**(uint32_t **)v25 + 72))(v27);
      v15 = (hkMemoryAllocator::Self *)((char *)v15 + 16);
    }
    while ( v16 != v26 );
  }
  return hkMemoryRouter::easyFree(*(hkMemoryRouter::Self **)(*address + 44), v19);
}



// ============================================================================
// Address:   0x1af6d80 (size: 1208 bytes)
// Symbol:    _ZN18hkpPrimitiveDrawer12displayPlaneERK10hkVector4fS2_S2_jfii
// Demangled: hkpPrimitiveDrawer::displayPlane(hkVector4f const&,hkVector4f const&,hkVector4f const&,unsigned int,float,int,int)
// ============================================================================

