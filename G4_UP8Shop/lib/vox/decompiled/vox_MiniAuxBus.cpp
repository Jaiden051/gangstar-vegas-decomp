#include "Core/Utils/DecompTypes.h"
#include "vox_MiniAuxBus.h"

// ----------------------------------------------------------------------------
// Function: vox::MiniAuxBus::Destroy  (binary VA: 0xfdafc0)
// Original: vox::MiniAuxBus::~MiniAuxBus
// ----------------------------------------------------------------------------
void vox::MiniAuxBus::Destroy(vox::MiniAuxBus::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CC38);
  vox::MiniBus::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: vox::MiniAuxBus::Destroy_eafdaff0  (binary VA: 0xfdaff0)
// Original: vox::MiniAuxBus::~MiniAuxBus
// ----------------------------------------------------------------------------
void vox::MiniAuxBus::Destroy_eafdaff0(vox::MiniAuxBus::Self *self)
{
  vox::MiniAuxBus::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0xfdb440 (size: 70 bytes)
// Symbol:    _ZN3vox10MiniAuxBusC2Ev
// Demangled: vox::MiniAuxBus::MiniAuxBus(void)
// ============================================================================
// Alternative name is '_ZN3vox10MiniAuxBusC1Ev'
void (**vox::MiniAuxBus::MiniAuxBus(vox::MiniAuxBus::Self *self))(vox::MiniAuxBus::Self * self)
{
  vox::MiniBus::Construct(self);
  *((uint32_t *)self + 14) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CC38);
  *((uint8_t *)self + 60) = 0;
  return (void (**)(vox::MiniAuxBus::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208CC38));
}
// ----------------------------------------------------------------------------
// Function: vox::MiniAuxBus::Clean  (binary VA: 0xfdb490)
// Original: vox::MiniAuxBus::Clean
// ----------------------------------------------------------------------------
void vox::MiniAuxBus::Clean()
{
  vox::VoxThread::Self *v0;

  vox::VoxThread::GetCurThreadId(v0);
  sub_BA06A0();
  if ( vox::MiniAuxBus::s_pWetBuffer != 0 )
  {
    VoxFreeInternal(vox::MiniAuxBus::s_pWetBuffer);
    vox::MiniAuxBus::s_pWetBuffer = 0;
    vox::MiniAuxBus::s_nbWetSamples = 0;
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::MiniAuxBus::GetDSP  (binary VA: 0xfdb780)
// Original: vox::MiniAuxBus::GetDSP
// ----------------------------------------------------------------------------
int vox::MiniAuxBus::GetDSP(vox::MiniAuxBus::Self *self)
{
  int v1;
  vox::Mutex::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  vox::Mutex::Lock((vox::MiniAuxBus::Self *)((char *)self + 52));
  v1 = *((uint32_t *)self + 14);
  vox::Mutex::Unlock((vox::MiniAuxBus::Self *)((char *)self + 52));
  sub_BA06B0();
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::MiniAuxBus::InitializeWetBuffer  (binary VA: 0xfdb800)
// Original: vox::MiniAuxBus::_InitializeWetBuffer
// ----------------------------------------------------------------------------
int vox::MiniAuxBus::InitializeWetBuffer(vox::MiniAuxBus::Self *self, int a2)
{
  void *v2;
  int v3;
  vox::VoxThread::Self *s;
  int CurThreadId;

  CurThreadId = vox::VoxThread::GetCurThreadId(s);
  sub_BA06A0("MiniAuxBus::_InitializeWetBuffer", CurThreadId);
  if ( a2 <= vox::MiniAuxBus::s_nbWetSamples )
  {
    v2 = (void *)vox::MiniAuxBus::s_pWetBuffer;
  }
  else
  {
    if ( vox::MiniAuxBus::s_pWetBuffer != 0 )
      VoxFreeInternal(vox::MiniAuxBus::s_pWetBuffer);
    v2 = (void *)VoxAllocInternal(
                   8 * a2,
                   0,
                   (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_minibus_system.cpp"),
                   (int)(uintptr_t)("_InitializeWetBuffer"),
                   206);
    vox::MiniAuxBus::s_pWetBuffer = (uintptr_t)(uintptr_t)(v2);
    if ( v2 == nullptr )
    {
      vox::MiniAuxBus::s_nbWetSamples = 0;
      v3 = 0;
      goto LABEL_7;
    }
    vox::MiniAuxBus::s_nbWetSamples = a2;
  }
  v3 = 1;
  memset(v2, 0, 8 * a2);
LABEL_7:
  sub_BA06B0("MiniAuxBus::_InitializeWetBuffer", CurThreadId);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::MiniAuxBus::FillBuffer  (binary VA: 0xfdb910)
// Original: vox::MiniAuxBus::FillBuffer
// ----------------------------------------------------------------------------
void vox::MiniAuxBus::FillBuffer(vox::MiniAuxBus::Self *self, int *a2, int *a3, int a4)
{
  vox::MiniAuxBus::Self *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  const int *v16;
  int *v17;
  const int *v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  vox::VoxThread::Self *v25;
  int v26;
  char v27;
  int *v28;
  int v29;
  const int *v30;
  vox::MiniAuxBus::Self *v31;

  v4 = self;
  v5 = a3;
  vox::VoxThread::GetCurThreadId(v25);
  sub_BA06A0();
  vox::Mutex::Lock((vox::MiniAuxBus::Self *)((char *)self + 52));
  if ( (uint8_t)vox::MiniAuxBus::InitializeWetBuffer(self, a4) == 0 )
    goto LABEL_14;
  v27 = 0;
  if ( *((uint8_t *)self + 60) != 0 )
  {
    v6 = *((uint32_t *)self + 14);
    if ( v6 != 0 )
    {
      v27 = G4_VCALL<int>(v6, 20, 1);
      if ( v27 != 0 )
        (*(void (**)(uint32_t, int *, uint32_t, int))(**((uint32_t **)self + 14) + 8))(
          *((uint32_t *)self + 14),
          a2,
          vox::MiniAuxBus::s_pWetBuffer,
          a4);
    }
  }
  v7 = *((uint32_t *)self + 1);
  v8 = 2 * a4;
  if ( v7 != 0 )
  {
    if ( v7 == 0x4000 )
    {
      if ( v8 <= 0 )
        goto LABEL_13;
      v26 = 4 * ((unsigned int)v8 >> 2);
      if ( v26 != 0 && (a2 > a3 + 4 || a3 > a2 + 4) && (unsigned int)v8 > 6 )
      {
        v12 = 0;
        v13 = (unsigned int)v8 >> 2;
        v14 = 0;
        do
        {
          ++v14;
          *(__m128i *)&a3[v12] = _mm_add_epi32(*(__m128i *)&a2[v12], *(__m128i *)&a3[v12]);
          v12 += 4;
        }
        while ( v13 > v14 );
        v8 = 2 * a4;
        v4 = self;
        v30 = &a2[v26];
        v15 = v26;
        v28 = &a3[v26];
        if ( 2 * a4 == v26 )
          goto LABEL_13;
      }
      else
      {
        v28 = a3;
        v30 = a2;
        v15 = 0;
      }
      v16 = v30;
      v31 = v4;
      v17 = v28;
      v18 = &v16[-v15];
      do
      {
        v19 = v18[v15++];
        *v17++ += v19;
      }
      while ( v8 > v15 );
      v4 = v31;
      v5 = a3;
      goto LABEL_13;
    }
    if ( v8 > 0 )
    {
      v9 = 0;
      while ( 1 )
      {
        a3[v9] += (a2[v9] * v7) >> 14;
        if ( ++v9 == 2 * a4 )
          break;
        v7 = *((uint32_t *)self + 1);
      }
      v8 = 2 * a4;
    }
  }
LABEL_13:
  v10 = *((uint32_t *)v4 + 2);
  if ( v10 != 0 && v27 != 0 )
  {
    v29 = vox::MiniAuxBus::s_pWetBuffer;
    if ( v10 == 0x4000 )
    {
      if ( v8 <= 0 )
        goto LABEL_14;
      if ( 4 * ((unsigned int)v8 >> 2) != 0
        && (vox::MiniAuxBus::s_pWetBuffer > (unsigned int)(uintptr_t)(v5 + 4)
         || (unsigned int)(uintptr_t)(v5) > vox::MiniAuxBus::s_pWetBuffer + 16)
        && (unsigned int)v8 > 6 )
      {
        v20 = 0;
        v21 = 0;
        do
        {
          ++v21;
          *(__m128i *)&v5[v20] = _mm_add_epi32(*(__m128i *)(v29 + v20 * 4), *(__m128i *)&v5[v20]);
          v20 += 4;
        }
        while ( (unsigned int)v8 >> 2 > v21 );
        v29 += 16 * ((unsigned int)v8 >> 2);
        v5 += 4 * ((unsigned int)v8 >> 2);
        v22 = 4 * ((unsigned int)v8 >> 2);
        if ( v8 == v22 )
          goto LABEL_14;
      }
      else
      {
        v22 = 0;
      }
      v23 = v29 - 4 * v22;
      do
      {
        v24 = *(uint32_t *)(v23 + 4 * v22++);
        *v5++ += v24;
      }
      while ( v8 > v22 );
      goto LABEL_14;
    }
    if ( v8 > 0 )
    {
      v11 = 0;
      while ( 1 )
      {
        v5[v11] += (*(uint32_t *)(v29 + 4 * v11) * v10) >> 14;
        if ( ++v11 == v8 )
          break;
        v10 = *((uint32_t *)v4 + 2);
      }
    }
  }
LABEL_14:
  vox::Mutex::Unlock((vox::MiniAuxBus::Self *)((char *)self + 52));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::MiniAuxBus::SetDSP  (binary VA: 0xfdbc60)
// Original: vox::MiniAuxBus::SetDSP
// ----------------------------------------------------------------------------
void vox::MiniAuxBus::SetDSP(vox::MiniAuxBus::Self *self, vox::CustomDSP::Self *a2)
{
  int CurThreadId;
  vox::MiniAuxBus::Self *v3;
  int v4;
  vox::MiniAuxBus::Self *v5;
  int v6;
  vox::Mutex::Self *v7;

  CurThreadId = vox::VoxThread::GetCurThreadId(v7);
  sub_BA06A0();
  vox::Mutex::Lock((vox::MiniAuxBus::Self *)((char *)self + 52));
  if ( a2 != nullptr )
  {
    if ( G4_VCALL<uint8_t>(a2, 12, (float)vox::MiniBus::s_mixingSampleRate, 2, 0) != 0 )
    {
      v3 = self;
      v4 = *((uint32_t *)self + 14);
      *((uint8_t *)self + 60) = 1;
      if ( v4 != 0 )
      {
        G4_VCALL<void>(v4, 16);
        v3 = self;
      }
      *((uint32_t *)v3 + 14) = (uint32_t)(uintptr_t)(a2);
    }
  }
  else
  {
    v5 = self;
    v6 = *((uint32_t *)self + 14);
    *((uint8_t *)self + 60) = 0;
    if ( v6 != 0 )
    {
      G4_VCALL<void>(v6, 16, CurThreadId);
      v5 = self;
    }
    *((uint32_t *)v5 + 14) = 0;
  }
  vox::Mutex::Unlock((vox::MiniAuxBus::Self *)((char *)self + 52));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::MiniAuxBus::UpdateVolumes  (binary VA: 0xfdbd60)
// Original: vox::MiniAuxBus::UpdateVolumes
// ----------------------------------------------------------------------------
void vox::MiniAuxBus::UpdateVolumes(vox::MiniAuxBus::Self *self, float a2)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  vox::Mutex::Self *v8;

  vox::VoxThread::GetCurThreadId(v8);
  sub_BA06A0();
  vox::Mutex::Lock((vox::MiniAuxBus::Self *)((char *)self + 52));
  if ( *((uint8_t *)self + 28) == 0 )
  {
    v2 = *((float *)self + 5);
    v3 = *((float *)self + 6);
    if ( v3 > v2 )
    {
      *((float *)self + 5) = a2 + v2;
      if ( v3 > (float)(a2 + v2) )
      {
        if ( v3 <= 0.0 )
          v4 = *((float *)self + 3);
        else
          v4 = (float)((float)((float)(*((float *)self + 4) - *((float *)self + 3)) * (float)(a2 + v2)) / v3)
             + *((float *)self + 3);
        goto LABEL_5;
      }
    }
    else
    {
      *((uint8_t *)self + 28) = 1;
    }
    v4 = *((float *)self + 4);
LABEL_5:
    *((uint32_t *)self + 1) = (int)(float)(v4 * 16384.0);
  }
  if ( *((uint8_t *)self + 48) == 0 )
  {
    v5 = *((float *)self + 10);
    v6 = *((float *)self + 11);
    if ( v6 > v5 )
    {
      *((float *)self + 10) = a2 + v5;
      if ( v6 > (float)(a2 + v5) )
      {
        if ( v6 <= 0.0 )
          v7 = *((float *)self + 8);
        else
          v7 = (float)((float)((float)(*((float *)self + 9) - *((float *)self + 8)) * (float)(a2 + v5)) / v6)
             + *((float *)self + 8);
        goto LABEL_10;
      }
    }
    else
    {
      *((uint8_t *)self + 48) = 1;
    }
    v7 = *((float *)self + 9);
LABEL_10:
    *((uint32_t *)self + 2) = (int)(float)(v7 * 16384.0);
  }
  vox::Mutex::Unlock((vox::MiniAuxBus::Self *)((char *)self + 52));
  sub_BA06B0();
}


