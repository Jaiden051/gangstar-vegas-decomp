#include "Core/Utils/DecompTypes.h"
#include "vox_VoxFilter.h"

// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_VoxFilter.cpp
// Library: vox | Module: vox_VoxFilter
// Binary Address Span: 0x1005f90 .. 0x10068d0 (4 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1005f90 (size: 32 bytes)
// Symbol:    _ZN3vox9VoxFilterC1Ev
// Demangled: vox::VoxFilter::VoxFilter(void)
// ============================================================================
// Alternative name is '_ZN3vox9VoxFilterC2Ev'
struct vox::VoxFilter::Self *vox::VoxFilter::VoxFilter(vox::VoxFilter::Self *self)
{
  *(uint32_t *)self = 1065353216;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 9) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: vox::VoxFilter::setDistanceShelf  (binary VA: 0x1006530)
// Original: vox::VoxFilter::setDistanceShelf
// ----------------------------------------------------------------------------
void vox::VoxFilter::setDistanceShelf(vox::VoxFilter::Self *self, float a2, float a3)
{
  float v3; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  double v6; // xmm0_8
  float v7; // xmm6_4
  float v8; // xmm2_4
  float v9; // xmm7_4
  float v10; // xmm4_4
  float v11; // xmm7_4
  float v12; // xmm3_4
  float v13; // xmm1_4
  double v14;
  double v15;
  double v16;

  if ( a2 < 0.1f )
  {
    v4 = 6000.0;
  }
  else
  {
    v3 = (float)(2.0 - (float)((float)(a2 + -0.1f) * 1.1111112f)) * (float)((float)(a2 + -0.1f) * 1.1111112f);
    v4 = (float)((float)(1.0 - v3) * 6000.0) + (float)(v3 * 25000.0);
  }
  if ( v4 >= (float)(0.49f * a3) )
  {
    *(uint32_t *)self = 1065353216;
    *((uint32_t *)self + 1) = 0;
    *((uint32_t *)self + 2) = 0;
    *((uint32_t *)self + 3) = 0;
    *((uint32_t *)self + 4) = 0;
  }
  else
  {
    v15 = (float)((float)(v4 * 6.2831855f) / a3);
    v16 = sin(v15);
    v14 = cos(v15);
    v5 = v16 * 0.7071067811865476;
    v6 = v5 * 1.2619146897610072;
    v7 = v14 * 0.6018928289413452 + 1.3981071710586548 + v6;
    v8 = v14 * 0.6018928289413452 + 1.3981071710586548 - v6;
    v9 = (v14 * -0.6018928289413452 + 1.3981071710586548 + v6) * 0.3981071710586548;
    v10 = (v14 * -0.6018928289413452 + 1.3981071710586548 - v6) * 0.3981071710586548;
    *(float *)self = v9 * (float)(1.0 / v7);
    *((float *)self + 2) = v10 * (float)(1.0 / v7);
    v11 = (v14 * 1.3981071710586548 + -0.6018928289413452) * -0.7962143421173096;
    v12 = -0.6018928289413452 - v14 * 1.3981071710586548 + (-0.6018928289413452 - v14 * 1.3981071710586548);
    v13 = -(float)(1.0 / v7);
    *((float *)self + 1) = v11 * (float)(1.0 / v7);
    *((float *)self + 3) = v12 * v13;
    *((float *)self + 4) = v8 * v13;
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxFilter::setDistanceBandpass  (binary VA: 0x1006730)
// Original: vox::VoxFilter::setDistanceBandpass
// ----------------------------------------------------------------------------
void vox::VoxFilter::setDistanceBandpass(vox::VoxFilter::Self *self, float a2, float a3, float a4)
{
  long double v4; // fst7
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm3_4
  double v8;
  double v9;

  if ( a3 >= (float)(0.48f * a4) )
  {
    *(uint32_t *)self = 1065353216;
    *((uint32_t *)self + 1) = 0;
    *((uint32_t *)self + 2) = 0;
    *((uint32_t *)self + 3) = 0;
    *((uint32_t *)self + 4) = 0;
  }
  else
  {
    v8 = (float)((float)(fmaxf(a3, 0.1f) * 6.2831855f) / a4);
    v9 = sin(v8);
    v4 = sinh(fmaxf(fminf(a2, 30.0), 0.01f) * 0.34657359027997264 * v8 / v9);
    *((uint32_t *)self + 1) = 0;
    v5 = (double)v4 * v9;
    v6 = cos(v8) * -2.0;
    *(float *)self = (float)(1.0 / (float)(v5 + 1.0)) * v5;
    v7 = -(float)(1.0 / (float)(v5 + 1.0));
    *((float *)self + 2) = (float)-v5 * (float)(1.0 / (float)(v5 + 1.0));
    *((float *)self + 3) = v6 * v7;
    *((float *)self + 4) = (float)(1.0 - v5) * v7;
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxFilter::setNotch  (binary VA: 0x10068d0)
// Original: vox::VoxFilter::setNotch
// ----------------------------------------------------------------------------
void vox::VoxFilter::setNotch(vox::VoxFilter::Self *self, float a2, float a3, float a4, float a5)
{
  float v5; // xmm1_4
  float v6; // xmm5_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  double v9;
  double x;

  if ( a3 > 0.0 || a2 >= (float)(0.48f * a5) )
  {
    *(uint32_t *)self = 1065353216;
    *((uint32_t *)self + 1) = 0;
    *((uint32_t *)self + 2) = 0;
    *((uint32_t *)self + 3) = 0;
    *((uint32_t *)self + 4) = 0;
  }
  else
  {
    v5 = pow(10.0, (float)(fmaxf(a3, -160.0) * 0.025f));
    x = (float)((float)(fmaxf(a2, 0.1f) * 6.2831855f) / a5);
    v9 = sin(x);
    v6 = sinh(fmaxf(fminf(a4, 30.0), 0.0001f) * x * 0.34657359027997264 / v9) * v9;
    v7 = cos(x) * -2.0;
    v8 = 1.0 / (float)((float)(v6 / v5) + 1.0);
    *(float *)self = (float)((float)(v5 * v6) + 1.0) * v8;
    *((float *)self + 1) = v8 * v7;
    *((float *)self + 2) = (float)(1.0 - (float)(v5 * v6)) * v8;
    *((float *)self + 3) = v7 * (float)-v8;
    *((float *)self + 4) = (float)(1.0 - (float)(v6 / v5)) * (float)-v8;
  }
}


