#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpHingeDr.h"

// ----------------------------------------------------------------------------
// Function: hkpHingeDrawer::drawConstraint  (binary VA: 0x1aed2e0)
// Original: hkpHingeDrawer::drawConstraint
// ----------------------------------------------------------------------------
int hkpHingeDrawer::drawConstraint(hkpHingeDrawer::Self *self, const hkpHingeConstraintData::Self *a2, const hkTransformf::Self *a3, const hkTransformf::Self *a4, hkDebugDisplayHandler::Self *a5, int a6, int a7)
{
  float *v7;
  hkDebugDisplayHandler::Self *v8;
  float v9; // xmm0_4
  float v10; // xmm5_4
  float v11; // xmm4_4
  float v12; // xmm7_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm6_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  float v19; // xmm6_4
  float v20; // xmm5_4
  int v21;
  int (*v22)(uint8_t *, hkDebugDisplayHandler::Self *, float *, float *, int, int, int);
  int v23;
  typedef hkTransformf::Self *_g4_t_v25;
  typedef hkTransformf::Self *_g4_t_v26;
  typedef float _g4_t_v27;
  typedef float *_g4_t_v28;
  typedef float _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint8_t _g4_t_v32[4];
  typedef float _g4_t_v33[4];
  typedef float _g4_t_v34[10];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v25)) > _g4_s0 ? (0u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v26)) > _g4_s1 ? (4u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v27)) > _g4_s2 ? (4u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v28)) > _g4_s3 ? (8u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v29)) > _g4_s4 ? (8u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v30)) > _g4_s5 ? (12u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v31)) > _g4_s6 ? (16u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v32)) > _g4_s7 ? (20u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v33)) > _g4_s8 ? (24u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v34)) > _g4_s9 ? (40u + sizeof(_g4_t_v34)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);

  LODWORD(v34[6]) = (uint32_t)(uintptr_t)(&self);
  v7 = (float *)self;
  v26 = (hkTransformf::Self *)(a3);
  v25 = (hkTransformf::Self *)(a4);
  v8 = a5;
  v30 = a7;
  v28 = (float *)a2;
  v31 = a6;
  hkpPrimitiveDrawer::setDisplayHandler((hkpHingeDrawer::Self *)((char *)self + 192), a5);
  hkpConstraintDrawer::updateCommonParameters((hkpConstraintDrawer::Self *)v7, v26, v25);
  hkVector4f::setTransformedPos((hkVector4f::Self *)(v7 + 20), v25, (const hkVector4f::Self *)(v28 + 36));
  hkVector4f::setTransformedPos((hkVector4f::Self *)(v7 + 16), v26, (const hkVector4f::Self *)(v28 + 20));
  hkpConstraintDrawer::drawBodyFrames((hkpConstraintDrawer::Self *)v7, v31, v30);
  hkpConstraintDrawer::drawPivots((hkpConstraintDrawer::Self *)v7, v31, v30);
  (*(void (**)(uint8_t *, hkDebugDisplayHandler::Self *, float *, float *, int, int, int))(*(uint32_t *)v8 + 72))(
    v32,
    v8,
    v7 + 16,
    v7 + 20,
    -65536,
    v31,
    v30);
  v9 = v28[24];
  v10 = v28[25];
  v11 = v28[26];
  v12 = v7[20];
  v13 = (float)((float)(v7[36] * v9) + (float)(v7[40] * v10)) + (float)(v7[44] * v11);
  v14 = (float)((float)(v7[37] * v9) + (float)(v7[41] * v10)) + (float)(v7[45] * v11);
  v15 = (float)((float)(v7[38] * v9) + (float)(v7[42] * v10)) + (float)(v7[46] * v11);
  v16 = *v7 * v7[7];
  v17 = (float)((float)(v9 * v7[39]) + (float)(v10 * v7[43])) + (float)(v11 * v7[47]);
  v18 = 0.75 * v16;
  v19 = v16 * -0.75;
  v34[0] = (float)(v18 * v13) + v12;
  v29 = v7[21];
  v33[0] = (float)(v13 * v19) + v12;
  v34[1] = (float)(v18 * v14) + v29;
  v27 = v7[22];
  v34[2] = (float)(v18 * v15) + v27;
  v20 = v7[23];
  v34[3] = (float)(v18 * v17) + v20;
  v33[1] = (float)(v14 * v19) + v29;
  v21 = *(uint32_t *)v8;
  v33[3] = (float)(v17 * v19) + v20;
  v22 = *(int (**)(uint8_t *, hkDebugDisplayHandler::Self *, float *, float *, int, int, int))(v21 + 72);
  v33[2] = (float)(v15 * v19) + v27;
  v23 = hkColor::rgbFromFloats(nullptr, 0x3F000000u, 1.0, 0x3F800000u);
  return v22(v32, v8, v33, v34, v23, v31, v30);
}


