#include "Core/Utils/DecompTypes.h"
#include "vox_ReverbHQParameters.h"

// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_ReverbHQParameters.cpp
// Library: vox | Module: vox_ReverbHQParameters
// Binary Address Span: 0xfc8830 .. 0xfc8930 (3 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0xfc8830 (size: 229 bytes)
// Symbol:    _ZN3vox18ReverbHQParametersC2Ev
// Demangled: vox::ReverbHQParameters::ReverbHQParameters(void)
// ============================================================================
// Alternative name is '_ZN3vox18ReverbHQParametersC1Ev'
struct vox::ReverbHQParameters::Self *vox::ReverbHQParameters::ReverbHQParameters(vox::ReverbHQParameters::Self *self)
{
  unsigned int v1;
  struct vox::ReverbHQParameters::Self *result;
  int v3;
  unsigned int v4;

  v1 = -((int)(uintptr_t)(self) + 60) & 0xF;
  *(uint32_t *)self = 1065353216;
  *((uint32_t *)self + 1) = 1065353216;
  *((uint32_t *)self + 2) = 1063507722;
  *((uint32_t *)self + 3) = 1167867904;
  *((uint32_t *)self + 4) = 1069463634;
  *((uint32_t *)self + 5) = 1062501089;
  *((uint32_t *)self + 9) = 1025087898;
  *((uint32_t *)self + 10) = 1004888130;
  *((uint32_t *)self + 8) = 1054515134;
  *((uint32_t *)self + 11) = 1064430469;
  *((uint32_t *)self + 12) = 1010055512;
  *((uint32_t *)self + 7) = 1065252553;
  *((uint8_t *)self + 24) = 1;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 1045220557;
  if ( v1 != 0 )
  {
    for ( result = nullptr; (unsigned int)(uintptr_t)(result) < v1; v3 = 29 - (uint32_t)(uintptr_t)(result) )
    {
      *((uint8_t *)result + (uint32_t)(uintptr_t)(self) + 60) = 0;
      result = (struct vox::ReverbHQParameters::Self *)((char *)result + 1);
    }
  }
  else
  {
    v3 = 29;
    result = nullptr;
  }
  v4 = (29 - v1) & 0xFFFFFFF0;
  if ( v4 == 0
    || (result = (struct vox::ReverbHQParameters::Self *)((char *)result + v4),
        v3 -= v4,
        *(__m128i *)((char *)self + v1 + 60) = g4_m128_from<__m128i>(0LL),
        29 - v1 != v4) )
  {
    result = (struct vox::ReverbHQParameters::Self *)((char *)result + (uint32_t)(uintptr_t)(self) + 60);
    do
    {
      --v3;
      *(uint8_t *)result = 0;
      result = (struct vox::ReverbHQParameters::Self *)((char *)result + 1);
    }
    while ( v3 != 0 );
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: vox::ReverbHQParameters::Destroy  (binary VA: 0xfc8920)
// Original: vox::ReverbHQParameters::~ReverbHQParameters
// ----------------------------------------------------------------------------
void vox::ReverbHQParameters::Destroy()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQParameters::loadReverbSettings  (binary VA: 0xfc8930)
// Original: vox::ReverbHQParameters::loadReverbSettings
// ----------------------------------------------------------------------------
int vox::ReverbHQParameters::loadReverbSettings(vox::ReverbHQParameters::Self *self, vox::FileInterface::Self *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, float a15, float a16, int a17, float a18, int a19, int a20, int a21, float a22, int a23, float a24, int a25, int a26, int a27)
{
  bool v27;
  int i;
  int v29;
  int v30;
  int result;
  int *v32;
  char v33;
  char v34;
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  int v38;
  float v39; // xmm1_4
  float v40; // xmm0_4
  void *retaddr;
  int v47;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint8_t _g4_t_v45[108];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v41)) > _g4_s0 ? (0u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v42)) > _g4_s1 ? (4u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v43)) > _g4_s2 ? (8u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v44)) > _g4_s3 ? (12u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v45)) > _g4_s4 ? (16u + sizeof(_g4_t_v45)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 0u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);

  v47 = G4_VCALL<int>(a2, 8, v45, 1, 28, v41, v42, v43, v44);
  v27 = (uint8_t)a4 == 67;
  if ( BYTE1(a4) != 99 )
    v27 = false;
  if ( BYTE2(a4) != 110 )
    v27 = false;
  if ( HIBYTE(a4) != 75 )
    v27 = false;
  if ( (uint8_t)a6 != 70 )
    v27 = false;
  if ( BYTE1(a6) != 120 )
    v27 = false;
  if ( BYTE2(a6) != 67 )
    v27 = false;
  if ( HIBYTE(a6) != 107 )
    v27 = false;
  for ( i = 16; i != 28; ++i )
  {
    v29 = *((char *)dword_20B9FF4 + i + (uint32_t)(uintptr_t)(&byte_1CBE0D0 - 34316292));
    v30 = (uint8_t)v45[i];
    if ( v30 != v29 )
      v27 = false;
  }
  result = 0;
  if ( v47 == 28 && v27 )
  {
    v32 = &a12;
    G4_VCALL<void>(a2, 8, (char *)self + 60, 1, 28);
    *((uint8_t *)self + 88) = 0;
    G4_VCALL<void>(a2, 8, &a12, 4, 15);
    do
    {
      v33 = *((uint8_t *)v32 + 3);
      *((uint8_t *)v32 + 3) = *(uint8_t *)v32;
      *(uint8_t *)v32 = v33;
      v34 = *((uint8_t *)v32 + 2);
      *((uint8_t *)v32 + 2) = *((uint8_t *)v32 + 1);
      *((uint8_t *)v32++ + 1) = v34;
    }
    while ( v32 != &a27 );
    v35 = 5.0 * a15;
    *(uint32_t *)self = a12;
    *((uint32_t *)self + 1) = a13;
    *((uint32_t *)self + 2) = a14;
    *(double *)&retaddr = pow(2.0, v35);
    *((uint32_t *)self + 5) = a17;
    *((uint32_t *)self + 7) = a19;
    *((uint32_t *)self + 8) = a20;
    v36 = *(double *)&retaddr * 750.0;
    *((uint32_t *)self + 9) = a21;
    v37 = 8.0 * a16;
    v38 = a23;
    *((float *)self + 3) = v36;
    v39 = a22;
    *((float *)self + 4) = v37;
    *((uint8_t *)self + 24) = a18 >= 0.5;
    *((float *)self + 10) = v39 * 0.1f;
    *((uint32_t *)self + 11) = v38;
    v40 = 0.1f * a24;
    *((uint32_t *)self + 13) = a25;
    *((uint32_t *)self + 14) = a26;
    *((float *)self + 12) = v40;
    return 1;
  }
  return result;
}


