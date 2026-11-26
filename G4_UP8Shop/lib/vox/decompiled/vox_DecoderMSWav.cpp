#include "Core/Utils/DecompTypes.h"
#include "vox_DecoderMSWav.h"

// ----------------------------------------------------------------------------
// Function: vox::DecoderMSWav::DestroyCursor  (binary VA: 0xfe5990)
// Original: vox::DecoderMSWav::DestroyCursor
// ----------------------------------------------------------------------------
int vox::DecoderMSWav::DestroyCursor(vox::DecoderMSWav::Self *self, vox::DecoderCursorInterface::Self *a2)
{
  int result;

  if ( a2 != nullptr )
  {
    (**(void (***)(vox::DecoderCursorInterface::Self *))a2)(a2);
    return VoxFreeInternal(a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMSWav::Destroy  (binary VA: 0xfe5e50)
// Original: vox::DecoderMSWav::~DecoderMSWav
// ----------------------------------------------------------------------------
void vox::DecoderMSWav::Destroy(vox::DecoderMSWav::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  void *v11;
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
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;

  v1 = *((uint32_t **)self + 16);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CE28);
  *((uint8_t *)self + 68) = 1;
  if ( v1 != nullptr )
  {
    v2 = (uint32_t *)v1[2];
    if ( v2 == nullptr )
      goto LABEL_30;
    v3 = (uint32_t *)v2[2];
    if ( v3 == nullptr )
      goto LABEL_28;
    v4 = (uint32_t *)v3[2];
    if ( v4 == nullptr )
      goto LABEL_26;
    v5 = (uint32_t *)v4[2];
    v23 = v5;
    if ( v5 == nullptr )
      goto LABEL_24;
    v6 = (uint32_t *)v5[2];
    v24 = v6;
    if ( v6 == nullptr )
      goto LABEL_22;
    v7 = (uint32_t *)v6[2];
    v25 = v7;
    if ( v7 == nullptr )
      goto LABEL_20;
    v8 = (uint32_t *)v7[2];
    v26 = v8;
    if ( v8 == nullptr )
      goto LABEL_18;
    v9 = (uint32_t *)v8[2];
    v27 = v9;
    if ( v9 == nullptr )
      goto LABEL_16;
    v10 = v9[2];
    if ( v10 == 0 )
      goto LABEL_14;
    v12 = (uint32_t *)v2[2];
    v18 = (uint32_t *)v3[2];
    sub_FE5CB0((uint32_t **)(v10 + 8));
    v3 = v12;
    v4 = v18;
    v11 = (void *)v27[2];
    if ( v11 != nullptr )
    {
      VoxFreeInternal(v11);
      v4 = v18;
      v3 = v12;
    }
    v27 = (uint32_t *)v26[2];
    if ( v27 != nullptr )
    {
LABEL_14:
      v13 = v3;
      v19 = v4;
      VoxFreeInternal(v27);
      v4 = v19;
      v3 = v13;
    }
    v26 = (uint32_t *)v25[2];
    if ( v26 != nullptr )
    {
LABEL_16:
      v14 = v3;
      v20 = v4;
      VoxFreeInternal(v26);
      v4 = v20;
      v3 = v14;
    }
    v25 = (uint32_t *)v24[2];
    if ( v25 != nullptr )
    {
LABEL_18:
      v15 = v3;
      v21 = v4;
      VoxFreeInternal(v25);
      v4 = v21;
      v3 = v15;
    }
    v24 = (uint32_t *)v23[2];
    if ( v24 != nullptr )
    {
LABEL_20:
      v16 = v3;
      v22 = v4;
      VoxFreeInternal(v24);
      v4 = v22;
      v3 = v16;
    }
    v23 = (uint32_t *)v4[2];
    if ( v23 != nullptr )
    {
LABEL_22:
      v17 = v3;
      VoxFreeInternal(v23);
      v3 = v17;
    }
    v4 = (uint32_t *)v3[2];
    if ( v4 != nullptr )
LABEL_24:
      VoxFreeInternal(v4);
    v3 = (uint32_t *)v2[2];
    if ( v3 != nullptr )
LABEL_26:
      VoxFreeInternal(v3);
    v2 = (uint32_t *)v1[2];
    if ( v2 != nullptr )
LABEL_28:
      VoxFreeInternal(v2);
    v1 = *((uint32_t **)self + 16);
    if ( v1 != nullptr )
LABEL_30:
      VoxFreeInternal(v1);
    *((uint32_t *)self + 16) = 0;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206AF28);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMSWav::Destroy_eafe6070  (binary VA: 0xfe6070)
// Original: vox::DecoderMSWav::~DecoderMSWav
// ----------------------------------------------------------------------------
void vox::DecoderMSWav::Destroy_eafe6070(vox::DecoderMSWav::Self *self)
{
  vox::DecoderMSWav::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0xfe6730 (size: 59 bytes)
// Symbol:    _ZN3vox12DecoderMSWavC1Ev
// Demangled: vox::DecoderMSWav::DecoderMSWav(void)
// ============================================================================
// Alternative name is '_ZN3vox12DecoderMSWavC2Ev'
struct vox::DecoderMSWav::Self *vox::DecoderMSWav::DecoderMSWav(vox::DecoderMSWav::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CE28);
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint8_t *)self + 68) = 1;
  return self;
}
// ----------------------------------------------------------------------------
// Function: vox::DecoderMSWav::CreateNewCursor  (binary VA: 0xfe7050)
// Original: vox::DecoderMSWav::CreateNewCursor
// ----------------------------------------------------------------------------
vox::DecoderMSWavCursor::Self * vox::DecoderMSWav::CreateNewCursor(vox::DecoderMSWav::Self *self, vox::StreamCursorInterface::Self *a2)
{
  vox::DecoderMSWavCursor::Self *v2;

  v2 = (vox::DecoderMSWavCursor::Self *)VoxAllocInternal(
                                    0x28u,
                                    0,
                                    (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_mswav.cpp"),
                                    (int)(uintptr_t)("CreateNewCursor"),
                                    54);
  vox::DecoderMSWavCursor::Construct(v2, (int)(uintptr_t)(self), (int)(uintptr_t)(a2));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMSWav::GetType  (binary VA: 0xfe70c0)
// Original: vox::DecoderMSWav::GetType
// ----------------------------------------------------------------------------
int vox::DecoderMSWav::GetType()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMSWav::GetParam  (binary VA: 0xfe70d0)
// Original: vox::DecoderMSWav::GetParam
// ----------------------------------------------------------------------------
int vox::DecoderMSWav::GetParam()
{
  return 0;
}


