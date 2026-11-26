#include "Core/Utils/DecompTypes.h"
#include "vox_MiniBus.h"

// ----------------------------------------------------------------------------
// Function: vox::MiniBus::Destroy  (binary VA: 0xfdaf90)
// Original: vox::MiniBus::~MiniBus
// ----------------------------------------------------------------------------
void vox::MiniBus::Destroy(vox::MiniBus::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CC28);
  vox::Mutex::Destroy((vox::MiniBus::Self *)((char *)self + 52));
}

// ----------------------------------------------------------------------------
// Function: vox::MiniBus::Destroy_eafdb030  (binary VA: 0xfdb030)
// Original: vox::MiniBus::~MiniBus
// ----------------------------------------------------------------------------
void vox::MiniBus::Destroy_eafdb030(vox::MiniBus::Self *self)
{
  vox::MiniBus::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::MiniBus::Construct  (binary VA: 0xfdb070)
// Original: vox::MiniBus::MiniBus
// ----------------------------------------------------------------------------
void vox::MiniBus::Construct(vox::MiniBus::Self *self)
{
  vox::VoxThread::Self *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CC28);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 1065353216;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 1) = 0x4000;
  *((uint32_t *)self + 2) = 0;
  *((uint8_t *)self + 28) = 1;
  *((uint8_t *)self + 48) = 1;
  vox::Mutex::Construct((vox::MiniBus::Self *)((char *)self + 52));
  vox::VoxThread::GetCurThreadId(v1);
  sub_BA06A0();
  *((uint32_t *)self + 3) = 1065353216;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint8_t *)self + 28) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint8_t *)self + 48) = 0;
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::MiniBus::GetVolume  (binary VA: 0xfdb190)
// Original: vox::MiniBus::GetVolume
// ----------------------------------------------------------------------------
long double vox::MiniBus::GetVolume(int *a1, int a2)
{
  float v2; // xmm0_4
  vox::Mutex::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  vox::Mutex::Lock((vox::Mutex::Self *)(a1 + 13));
  if ( a2 != 0 )
  {
    v2 = 0.0;
    if ( a2 == 1 )
      v2 = (float)a1[2] * 0.000061035156f;
  }
  else
  {
    v2 = (float)a1[1] * 0.000061035156f;
  }
  vox::Mutex::Unlock((vox::Mutex::Self *)(a1 + 13));
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::MiniBus::SetVolume  (binary VA: 0xfdb260)
// Original: vox::MiniBus::SetVolume
// ----------------------------------------------------------------------------
void vox::MiniBus::SetVolume(int a1, int a2, int a3, int a4)
{
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  vox::Mutex::Self *v10;

  vox::VoxThread::GetCurThreadId(v10);
  sub_BA06A0();
  vox::Mutex::Lock((vox::Mutex::Self *)(a1 + 52));
  if ( a2 != 0 )
  {
    if ( a2 == 1 )
    {
      v7 = *(float *)(a1 + 40);
      v8 = *(float *)(a1 + 44);
      if ( v8 <= v7 )
      {
        v9 = *(float *)(a1 + 36);
      }
      else if ( v8 <= 0.0 )
      {
        v9 = *(float *)(a1 + 32);
      }
      else
      {
        v9 = (float)((float)((float)(*(float *)(a1 + 36) - *(float *)(a1 + 32)) * v7) / v8) + *(float *)(a1 + 32);
      }
      *(float *)(a1 + 32) = v9;
      *(uint32_t *)(a1 + 36) = a3;
      *(uint32_t *)(a1 + 40) = 0;
      *(uint32_t *)(a1 + 44) = a4;
      *(uint8_t *)(a1 + 48) = 0;
    }
  }
  else
  {
    v4 = *(float *)(a1 + 20);
    v5 = *(float *)(a1 + 24);
    if ( v5 > v4 )
    {
      if ( v5 <= 0.0 )
        v6 = *(float *)(a1 + 12);
      else
        v6 = (float)((float)((float)(*(float *)(a1 + 16) - *(float *)(a1 + 12)) * v4) / v5) + *(float *)(a1 + 12);
    }
    else
    {
      v6 = *(float *)(a1 + 16);
    }
    *(float *)(a1 + 12) = v6;
    *(uint32_t *)(a1 + 16) = a3;
    *(uint32_t *)(a1 + 20) = 0;
    *(uint32_t *)(a1 + 24) = a4;
    *(uint8_t *)(a1 + 28) = 0;
  }
  vox::Mutex::Unlock((vox::Mutex::Self *)(a1 + 52));
  sub_BA06B0();
}


