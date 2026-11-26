#include "Core/Utils/DecompTypes.h"
#include "vox_DecoderRawCursor.h"

// ----------------------------------------------------------------------------
// Function: vox::DecoderRawCursor::HasData  (binary VA: 0xfdeb10)
// Original: vox::DecoderRawCursor::HasData
// ----------------------------------------------------------------------------
int vox::DecoderRawCursor::HasData(vox::DecoderRawCursor::Self *self)
{
  int CurThreadId;
  uint8_t v2;
  vox::VoxThread::Self *v4;
  uint8_t v5;

  CurThreadId = vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  v2 = 0;
  if ( *((uint8_t *)self + 29) == 0 )
  {
    if ( *((uint8_t *)self + 28) != 0
      && (*(uint8_t (**)(uint32_t, int))(**((uint32_t **)self + 6) + 36))(
           *((uint32_t *)self + 6),
           CurThreadId) != 0 )
    {
      G4_VCALL<void>(self, 44, 0);
    }
    v2 = (*(int (**)(uint32_t))(**((uint32_t **)self + 6) + 36))(*((uint32_t *)self + 6)) ^ 1;
  }
  v5 = v2;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderRawCursor::Seek  (binary VA: 0xfdebc0)
// Original: vox::DecoderRawCursor::Seek
// ----------------------------------------------------------------------------
int vox::DecoderRawCursor::Seek(vox::DecoderRawCursor::Self *self, unsigned int a2)
{
  int v2;
  vox::VoxThread::Self *v4;
  int v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  v2 = -1;
  if ( *((uint32_t *)self + 4) >= a2 )
  {
    (*(void (**)(uint32_t, unsigned int, uint32_t))(**((uint32_t **)self + 6) + 16))(
      *((uint32_t *)self + 6),
      a2 * *((uint32_t *)self + 1) * (*((int *)self + 3) >> 3),
      0);
    v2 = 0;
  }
  v5 = v2;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderRawCursor::DecodeRef  (binary VA: 0xfdec60)
// Original: vox::DecoderRawCursor::DecodeRef
// ----------------------------------------------------------------------------
int vox::DecoderRawCursor::DecodeRef(vox::DecoderRawCursor::Self *self, void **a2, int a3)
{
  int CurThreadId;
  int v4;
  char v6;
  vox::VoxThread::Self *v7;
  int v8;
  int v9;

  CurThreadId = vox::VoxThread::GetCurThreadId(v7);
  sub_BA06A0();
  if ( (*(uint8_t (**)(uint32_t, int))(**((uint32_t **)self + 6) + 40))(*((uint32_t *)self + 6), CurThreadId) != 0 )
  {
    v4 = (*(int (**)(uint32_t, void **, int))(**((uint32_t **)self + 6) + 32))(*((uint32_t *)self + 6), a2, a3);
    if ( *((uint8_t *)self + 28) != 0 )
    {
      v9 = v4;
      v6 = (*(int (**)(uint32_t))(**((uint32_t **)self + 6) + 36))(*((uint32_t *)self + 6));
      v4 = v9;
      if ( v6 != 0 )
      {
        (*(void (**)(uint32_t, uint32_t, uint32_t))(**((uint32_t **)self + 6) + 16))(*((uint32_t *)self + 6), 0, 0);
        v4 = v9;
      }
    }
  }
  else
  {
    v4 = G4_VCALL<int>(self, 16, *a2, a3);
  }
  if ( v4 == 0 )
    *((uint8_t *)self + 29) = 1;
  v8 = v4;
  sub_BA06B0();
  return v8;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderRawCursor::Decode  (binary VA: 0xfded70)
// Original: vox::DecoderRawCursor::Decode
// ----------------------------------------------------------------------------
int vox::DecoderRawCursor::Decode(vox::DecoderRawCursor::Self *self, char *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  vox::VoxThread::Self *v7;

  v3 = 0;
  vox::VoxThread::GetCurThreadId(v7);
  sub_BA06A0();
  if ( a3 > 0 )
  {
    v4 = a3;
    do
    {
      v5 = (*(int (**)(uint32_t, char *, int))(**((uint32_t **)self + 6) + 28))(*((uint32_t *)self + 6), &a2[v3], v4);
      if ( v5 <= 0 )
        break;
      v4 -= v5;
      v3 += v5;
      if ( *((uint8_t *)self + 28) != 0
        && (*(uint8_t (**)(uint32_t))(**((uint32_t **)self + 6) + 36))(*((uint32_t *)self + 6)) != 0
        && (*(int (**)(uint32_t, uint32_t, uint32_t))(**((uint32_t **)self + 6) + 16))(*((uint32_t *)self + 6), 0, 0) != 0 )
      {
        break;
      }
    }
    while ( a3 > v3 );
  }
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderRawCursor::IsSeekable  (binary VA: 0xfdee40)
// Original: vox::DecoderRawCursor::IsSeekable
// ----------------------------------------------------------------------------
bool vox::DecoderRawCursor::IsSeekable(vox::DecoderRawCursor::Self *self)
{
  int CurThreadId;
  int v2;
  bool v3;
  vox::VoxThread::Self *v5;
  bool v6;

  CurThreadId = vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  v2 = *((uint32_t *)self + 6);
  v3 = false;
  if ( v2 != 0 )
    v3 = *((uint32_t *)self + 4) != 0
      && (*(uint8_t (**)(uint32_t, int))(*(uint32_t *)v2 + 20))(*((uint32_t *)self + 6), CurThreadId) != 0;
  v6 = v3;
  sub_BA06B0();
  return v6;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderRawCursor::Serialize  (binary VA: 0xfdeed0)
// Original: vox::DecoderRawCursor::Serialize
// ----------------------------------------------------------------------------
int vox::DecoderRawCursor::Serialize(uint32_t *a1, int a2, int a3, char a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint8_t *v8;
  void *v9;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  void *v17;
  void *v18;
  void *v19;
  void *v20;
  void *v21;
  void *v22;
  uint8_t *v23;

  v4 = *(uint32_t *)(a2 + 200);
  v5 = a2 + 12;
  v23 = (uint8_t *)(a2 + 192);
  if ( v4 != a2 + 200 && *(uint8_t *)(v4 + 8) != 0 )
  {
    v8 = *(uint8_t **)(a2 + 192);
    if ( v8 == (uint8_t *)(a2 + 192) )
      goto LABEL_11;
    if ( v8[8] != 0 )
      v8[8] = 0;
    else
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
  }
  v17 = *(void **)(a2 + 192);
  v6 = opNew(0xCu);
  if ( v6 != -8 )
    *(uint8_t *)(v6 + 8) = 1;
  sub_1901920(v6, v17);
  v18 = *(void **)(a2 + 200);
  v7 = opNew(0xCu);
  if ( v7 != -8 )
    *(uint8_t *)(v7 + 8) = 0;
  sub_1901920(v7, v18);
  g4_std_compat::ostream_write(v5, "{", 1);
  v8 = *(uint8_t **)(a2 + 192);
  if ( v8 != v23 )
  {
    if ( v8[8] != 0 )
      v8[8] = 0;
    else
      g4_std_compat::ostream_write(v5, ",", 1);
    g4_std_compat::ostream_write(v5, "\"", 1);
    g4_std_compat::ostream_write(v5, "type", 4);
    g4_std_compat::ostream_write(v5, "\":\"", 3);
    g4_std_compat::ostream_write(v5, &off_1B65FBE, 3);
    g4_std_compat::ostream_write(v5, "\"", 1);
    v8 = *(uint8_t **)(a2 + 192);
  }
LABEL_11:
  if ( (a4 & 2) == 0 || v23 == v8 )
  {
    if ( (a4 & 4) == 0 )
      goto LABEL_13;
  }
  else
  {
    if ( v8[8] != 0 )
    {
      v8[8] = 0;
      v11 = a2 + 12;
    }
    else
    {
      v11 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    g4_std_compat::ostream_write(v11, "\"", 1);
    g4_std_compat::ostream_write(v11, "compression", 11);
    g4_std_compat::ostream_write(v11, "\":\"", 3);
    g4_std_compat::ostream_write(v11, "none", 4);
    g4_std_compat::ostream_write(v11, "\"", 1);
    v8 = *(uint8_t **)(a2 + 192);
    if ( (a4 & 4) == 0 )
    {
LABEL_13:
      if ( (a4 & 8) == 0 )
        goto LABEL_14;
      goto LABEL_32;
    }
  }
  if ( v8 == v23 )
    goto LABEL_13;
  if ( v8[8] != 0 )
  {
    v8[8] = 0;
    v12 = a2 + 12;
  }
  else
  {
    v12 = a2 + 12;
    g4_std_compat::ostream_write(a2 + 12, ",", 1);
  }
  v20 = (void *)a1[1];
  g4_std_compat::ostream_write(v12, "\"", 1);
  g4_std_compat::ostream_write(v12, "channel", 7);
  g4_std_compat::ostream_write(v12, "\":", 2);
  g4_std::ostream::op_shl_int(v12, v20);
  v8 = *(uint8_t **)(a2 + 192);
  if ( (a4 & 8) == 0 )
  {
LABEL_14:
    if ( (a4 & 0x10) == 0 )
      goto LABEL_15;
    goto LABEL_36;
  }
LABEL_32:
  if ( v23 == v8 )
    goto LABEL_14;
  if ( v8[8] != 0 )
  {
    v8[8] = 0;
    v13 = a2 + 12;
  }
  else
  {
    v13 = a2 + 12;
    g4_std_compat::ostream_write(a2 + 12, ",", 1);
  }
  v21 = (void *)a1[2];
  g4_std_compat::ostream_write(v13, "\"", 1);
  g4_std_compat::ostream_write(v13, "sample_rate", 11);
  g4_std_compat::ostream_write(v13, "\":", 2);
  g4_std::ostream::op_shl_int(v13, v21);
  v8 = *(uint8_t **)(a2 + 192);
  if ( (a4 & 0x10) == 0 )
  {
LABEL_15:
    if ( (a4 & 0x20) == 0 )
      goto LABEL_16;
    goto LABEL_40;
  }
LABEL_36:
  if ( v23 == v8 )
    goto LABEL_15;
  if ( v8[8] != 0 )
  {
    v8[8] = 0;
    v14 = a2 + 12;
  }
  else
  {
    v14 = a2 + 12;
    g4_std_compat::ostream_write(a2 + 12, ",", 1);
  }
  v22 = (void *)a1[4];
  g4_std_compat::ostream_write(v14, "\"", 1);
  g4_std_compat::ostream_write(v14, "sample_count", 12);
  g4_std_compat::ostream_write(v14, "\":", 2);
  sub_192D8B0(v14, v22);
  v8 = *(uint8_t **)(a2 + 192);
  if ( (a4 & 0x20) != 0 )
  {
LABEL_40:
    if ( v23 == v8 )
      return 0;
    if ( v8[8] != 0 )
    {
      v8[8] = 0;
      v15 = a2 + 12;
    }
    else
    {
      v15 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    v16 = a1[3];
    g4_std_compat::ostream_write(v15, "\"", 1);
    g4_std_compat::ostream_write(v15, "bit_per_sample", 14);
    g4_std_compat::ostream_write(v15, "\":", 2);
    g4_std::ostream::op_shl_int(v15, v16);
    v8 = *(uint8_t **)(a2 + 192);
  }
LABEL_16:
  if ( v23 != v8 && a2 + 200 != *(uint32_t *)(a2 + 200) )
  {
    v19 = v8;
    sub_1901940(v8);
    opDelete(v19);
    v9 = *(void **)(a2 + 200);
    sub_1901940(v9);
    opDelete(v9);
    g4_std_compat::ostream_write(a2 + 12, "}", 1);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderRawCursor::Construct  (binary VA: 0xfdf5e0)
// Original: vox::DecoderRawCursor::DecoderRawCursor
// ----------------------------------------------------------------------------
void vox::DecoderRawCursor::Construct(int a1, uint32_t *a2, int a3)
{
  vox::VoxThread::Self *v3;

  *(uint32_t *)(a1 + 24) = a3;
  *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(a2);
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint8_t *)(a1 + 28) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_208CCC8);
  *(uint8_t *)(a1 + 29) = 0;
  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  *(uint32_t *)(a1 + 4) = a2[1];
  *(uint32_t *)(a1 + 8) = a2[2];
  *(uint32_t *)(a1 + 12) = a2[3];
  *(uint32_t *)(a1 + 16) = a2[4];
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderRawCursor::Destroy  (binary VA: 0xfdf830)
// Original: vox::DecoderRawCursor::~DecoderRawCursor
// ----------------------------------------------------------------------------
void vox::DecoderRawCursor::Destroy(vox::DecoderRawCursor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CD28);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderRawCursor::AllowBufferReference  (binary VA: 0xfdf850)
// Original: vox::DecoderRawCursor::AllowBufferReference
// ----------------------------------------------------------------------------
int vox::DecoderRawCursor::AllowBufferReference(vox::DecoderRawCursor::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 6);
  result = 0;
  if ( v1 != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)v1 + 40))(*((uint32_t *)self + 6));
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderRawCursor::Destroy_eafdf8c0  (binary VA: 0xfdf8c0)
// Original: vox::DecoderRawCursor::~DecoderRawCursor
// ----------------------------------------------------------------------------
void vox::DecoderRawCursor::Destroy_eafdf8c0(vox::DecoderRawCursor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CD28);
  opDelete(self);
}


