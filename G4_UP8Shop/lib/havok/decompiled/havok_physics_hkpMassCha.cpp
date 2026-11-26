#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMassCha.h"

// ----------------------------------------------------------------------------
// Function: hkpMassChangerModifierConstraintAtom::staticClass  (binary VA: 0x174aef0)
// Original: hkpMassChangerModifierConstraintAtom::staticClass
// ----------------------------------------------------------------------------
void * hkpMassChangerModifierConstraintAtom::staticClass()
{
  return &hkpMassChangerModifierConstraintAtomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpMassChangerModifierConstraintAtom::collisionResponseBeginCallback  (binary VA: 0x1774780)
// Original: hkpMassChangerModifierConstraintAtom::collisionResponseBeginCallback
// ----------------------------------------------------------------------------
void * hkpMassChangerModifierConstraintAtom::collisionResponseBeginCallback(float *a1, int a2, int a3, int a4, int a5)
{
  float v5; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  uint8_t v10;
  char v11; // si
  char v12;
  void *result;
  bool v14;
  const hkRotationf::Self *v15;
  typedef hkMatrix3f::Self *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t _g4_t_v18[48];
  typedef float _g4_t_v19[5];
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v19)) > _g4_s3 ? (64u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (84u + sizeof(_g4_t_v20)) > _g4_s4 ? (84u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (104u + sizeof(_g4_t_v21)) > _g4_s5 ? (104u + sizeof(_g4_t_v21)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 84u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 104u);

  v5 = a1[8];
  v7 = a1[9];
  v17 = 2;
  v8 = a1[10];
  v9 = a1[11];
  while ( 1 )
  {
    *(float *)(a3 + 64) = *(float *)(a3 + 64) * v5;
    *(float *)(a3 + 68) = *(float *)(a3 + 68) * v7;
    *(float *)(a3 + 72) = *(float *)(a3 + 72) * v8;
    *(float *)(a3 + 76) = *(float *)(a3 + 76) * v9;
    if ( v5 == v7 )
      v10 = !__builtin_isnan(v5) | 2;
    else
      v10 = !__builtin_isnan(v5);
    if ( v5 == v8 )
    {
      v11 = 12;
      v12 = 4;
    }
    else
    {
      v11 = 8;
      v12 = 0;
    }
    if ( v5 != v9 )
      v11 = v12;
    if ( !__builtin_isunordered(v5, v9) )
      v12 = v11;
    if ( ((v10 | (uint8_t)v12) & 7) == 7 )
    {
      v19[0] = v5;
      result = hkMatrix3f::mul((float *)(a3 + 16), v19);
    }
    else
    {
      v15 = *(const hkRotationf::Self **)(a3 + 80);
      v16 = (hkMatrix3f::Self *)(a3 + 16);
      hkMatrix3f::setMulInverseMul((hkMatrix3f::Self *)v18, v15, (const hkMatrix3f::Self *)(a3 + 16));
      hkMatrix3f::setMul((hkMatrix3f::Self *)v19, (const hkMatrix3f::Self *)v18, v15);
      v20 = v7 * v20;
      v21 = v8 * v21;
      v19[0] = v5 * v19[0];
      hkMatrix3f::setMulInverse((hkMatrix3f::Self *)v18, (const hkMatrix3f::Self *)v19, v15);
      result = hkMatrix3f::setMul(v16, v15, (const hkMatrix3f::Self *)v18);
    }
    v5 = a1[12];
    v14 = v17-- == 1;
    v7 = a1[13];
    v8 = a1[14];
    v9 = a1[15];
    if ( v14 )
      break;
    a3 = a5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMassChangerModifierConstraintAtom::collisionResponseEndCallback  (binary VA: 0x1774960)
// Original: hkpMassChangerModifierConstraintAtom::collisionResponseEndCallback
// ----------------------------------------------------------------------------
void hkpMassChangerModifierConstraintAtom::collisionResponseEndCallback()
{
  ;
}


