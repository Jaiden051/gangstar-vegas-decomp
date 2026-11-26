#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMoppSha.h"

// ----------------------------------------------------------------------------
// Function: hkpMoppShapeMediator::Destroy  (binary VA: 0x1b04d60)
// Original: hkpMoppShapeMediator::~hkpMoppShapeMediator
// ----------------------------------------------------------------------------
void hkpMoppShapeMediator::Destroy(hkpMoppShapeMediator::Self *self)
{
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppShapeMediator::setSplittingPlaneDirections  (binary VA: 0x1b04d90)
// Original: hkpMoppShapeMediator::setSplittingPlaneDirections
// ----------------------------------------------------------------------------
void hkpMoppShapeMediator::setSplittingPlaneDirections()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppShapeMediator::getPrimitiveProperties  (binary VA: 0x1b04da0)
// Original: hkpMoppShapeMediator::getPrimitiveProperties
// ----------------------------------------------------------------------------
int hkpMoppShapeMediator::getPrimitiveProperties(int a1, int a2, uint32_t *a3)
{
  *a3 = *(uint32_t *)(a2 + 4);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppShapeMediator::getPrimitives  (binary VA: 0x1b04dc0)
// Original: hkpMoppShapeMediator::getPrimitives
// ----------------------------------------------------------------------------
int hkpMoppShapeMediator::getPrimitives(int a1, int *a2)
{
  int v2;
  int result;
  int v5;

  v2 = 0;
  v5 = *(uint32_t *)(a1 + 12);
  result = (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 8) + 12))(*(uint32_t *)(a1 + 8));
  if ( v5 > 0 )
  {
    do
    {
      *a2 = result;
      a2[1] = 0;
      a2 += 5;
      ++v2;
      result = (*(int (**)(uint32_t, int))(**(uint32_t **)(a1 + 8) + 16))(*(uint32_t *)(a1 + 8), result);
    }
    while ( v2 != v5 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppShapeMediator::splitPrimitive  (binary VA: 0x1b04e20)
// Original: hkpMoppShapeMediator::splitPrimitive
// ----------------------------------------------------------------------------
uint32_t * hkpMoppShapeMediator::splitPrimitive(int a1, uint32_t *a2, int a3, int a4, int a5, uint32_t *a6)
{
  *a6 = *a2;
  a6[1] = a2[1];
  a6[2] = a2[2];
  a6[3] = a2[3];
  a6[4] = a2[4];
  return a6;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppShapeMediator::getNumPrimitives  (binary VA: 0x1b04e50)
// Original: hkpMoppShapeMediator::getNumPrimitives
// ----------------------------------------------------------------------------
int hkpMoppShapeMediator::getNumPrimitives(hkpMoppShapeMediator::Self *self)
{
  return *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppShapeMediator::Destroy_ea1b04e60  (binary VA: 0x1b04e60)
// Original: hkpMoppShapeMediator::~hkpMoppShapeMediator
// ----------------------------------------------------------------------------
void hkpMoppShapeMediator::Destroy_ea1b04e60(hkpMoppShapeMediator::Self *self)
{
  int v1;
  int v2;

  hkpMoppShapeMediator::Destroy(self);
  v1 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppShapeMediator::Construct  (binary VA: 0x1b04f20)
// Original: hkpMoppShapeMediator::hkpMoppShapeMediator
// ----------------------------------------------------------------------------
void hkpMoppShapeMediator::Construct(hkpMoppShapeMediator::Self *self, const hkpShapeContainer::Self *a2)
{
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B22A8);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 3) = G4_VCALL<int>(a2, 8);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppShapeMediator::projectPrimitive  (binary VA: 0x1b04f60)
// Original: hkpMoppShapeMediator::projectPrimitive
// ----------------------------------------------------------------------------
float * hkpMoppShapeMediator::projectPrimitive(int a1, uint32_t *a2, float *a3, int a4, float *a5, float *a6, int a7, float a8, float a9, float a10, float a11)
{
  int v11;
  int v12;
  float v15;
  float v16;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 592u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);

  v11 = (*(int (**)(uint32_t, uint32_t, int *))(**(uint32_t **)(a1 + 8) + 24))(*(uint32_t *)(a1 + 8), *a2, &v14);
  v12 = v11;
  if ( v11 != 0 )
  {
    v15 = ((long double (*)(int, float *))*(uint32_t *)(*(uint32_t *)v11 + 68))(v11, a3);
    *a6 = v15;
    a8 = -*a3;
    a9 = -a3[1];
    a10 = -a3[2];
    a11 = -a3[3];
    v16 = ((long double (*)(int, float *))*(uint32_t *)(*(uint32_t *)v12 + 68))(v12, &a8);
    *a5 = -v16;
    return a5;
  }
  else
  {
    *a5 = 0.0;
    *a6 = 0.0;
    return a6;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpMoppShapeMediator::projectPrimitives  (binary VA: 0x1b05060)
// Original: hkpMoppShapeMediator::projectPrimitives
// ----------------------------------------------------------------------------
float * hkpMoppShapeMediator::projectPrimitives(int a1, float *a2, int a3, int a4, int a5, float *a6, float *a7)
{
  float v7; // xmm3_4
  float v8; // xmm2_4
  uint32_t *v9;
  int v10;
  float v11; // xmm1_4
  float v12; // xmm0_4
  typedef uint32_t *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef float _g4_t_v17;
  typedef float _g4_t_v18;
  typedef float _g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v15)) > _g4_s1 ? (24u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v16)) > _g4_s2 ? (24u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v17)) > _g4_s3 ? (28u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v18)) > _g4_s4 ? (28u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v19)) > _g4_s5 ? (32u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v20)) > _g4_s6 ? (32u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v21)) > _g4_s7 ? (36u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v22)) > _g4_s8 ? (36u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v23)) > _g4_s9 ? (40u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v24)) > _g4_s10 ? (40u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v25)) > _g4_s11 ? (56u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v26)) > _g4_s12 ? (60u + sizeof(_g4_t_v26)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);

  hkpMoppShapeMediator::projectPrimitive(a1, (uint32_t *)a4, a2, a3, v26, &v25, v15, v17, v19, v21, v23);
  v7 = v26[0];
  v8 = v25;
  *(float *)(a4 + 8) = v26[0];
  *(float *)(a4 + 12) = v8;
  if ( a5 > 1 )
  {
    v9 = (uint32_t *)(a4 + 20);
    v10 = 1;
    do
    {
      v14 = v9;
      ++v10;
      v9 += 5;
      hkpMoppShapeMediator::projectPrimitive(a1, v14, a2, a3, v26, &v25, v16, v18, v20, v7, v8);
      v11 = v26[0];
      v12 = v25;
      *(v9 - 3) = LODWORD(v26[0]);
      *((float *)v9 - 2) = v12;
      v7 = fminf(v11, v22);
      v8 = fmaxf(v12, v24);
    }
    while ( v10 != a5 );
  }
  *a6 = v7;
  *a7 = v8;
  return a7;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppShapeMediator::findExtents  (binary VA: 0x1b05170)
// Original: hkpMoppShapeMediator::findExtents
// ----------------------------------------------------------------------------
float * hkpMoppShapeMediator::findExtents(int a1, float *a2, int a3, uint32_t *a4, int a5, float *a6, float *a7)
{
  float v7; // xmm1_4
  float v8; // xmm0_4
  uint32_t *v9;
  int v10;
  typedef uint32_t *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef float _g4_t_v15;
  typedef float _g4_t_v16;
  typedef float *_g4_t_v17;
  typedef float *_g4_t_v18;
  typedef float _g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21[3];
  typedef float _g4_t_v22[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v13)) > _g4_s1 ? (24u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v17)) > _g4_s5 ? (32u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v18)) > _g4_s6 ? (36u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v19)) > _g4_s7 ? (40u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v20)) > _g4_s8 ? (40u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v21)) > _g4_s9 ? (48u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v22)) > _g4_s10 ? (60u + sizeof(_g4_t_v22)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);

  hkpMoppShapeMediator::projectPrimitive(a1, a4, a2, a3, v22, v21, v13, v15, COERCE_FLOAT(v21), COERCE_FLOAT(v22), v19);
  v7 = v22[0];
  v8 = v21[0];
  if ( a5 > 1 )
  {
    v9 = a4 + 5;
    v10 = 1;
    do
    {
      v12 = v9;
      ++v10;
      v9 += 5;
      hkpMoppShapeMediator::projectPrimitive(a1, v12, a2, a3, v18, v17, v14, v16, *(float *)&v17, *(float *)&v18, v8);
      v7 = fminf(v22[0], v7);
      v8 = fmaxf(v21[0], v20);
    }
    while ( v10 != a5 );
  }
  *a6 = v7;
  *a7 = v8;
  return a7;
}


