#include "Core/Utils/DecompTypes.h"
#include "vox_DecoderStbVorbisCursor.h"

// ----------------------------------------------------------------------------
// Function: vox::DecoderStbVorbisCursor::HasData  (binary VA: 0xfe93d0)
// Original: vox::DecoderStbVorbisCursor::HasData
// ----------------------------------------------------------------------------
bool vox::DecoderStbVorbisCursor::HasData(vox::DecoderStbVorbisCursor::Self *self)
{
  bool result;
  unsigned int v2;
  unsigned int v3;

  result = false;
  if ( *((uint32_t *)self + 6) != 0 && *((uint8_t *)self + 40) == 0 )
  {
    v2 = *((uint32_t *)self + 9);
    v3 = *((uint32_t *)self + 4);
    if ( v2 >= v3 && *((uint8_t *)self + 28) != 0 )
    {
      G4_VCALL<void>(self, 44, 0);
      v2 = *((uint32_t *)self + 9);
      v3 = *((uint32_t *)self + 4);
    }
    return v2 < v3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderStbVorbisCursor::Seek  (binary VA: 0xfe9420)
// Original: vox::DecoderStbVorbisCursor::Seek
// ----------------------------------------------------------------------------
int vox::DecoderStbVorbisCursor::Seek(vox::DecoderStbVorbisCursor::Self *self, unsigned int a2)
{
  int v2;
  vox::VoxThread::Self *v4;
  int v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  v2 = -1;
  if ( *((uint32_t *)self + 4) >= a2 && a2 == 0 && *((uint32_t *)self + 8) != 0 )
  {
    stb_vorbis_seek_start(*((uint32_t *)self + 8));
    *((uint32_t *)self + 9) = 0;
    v2 = 0;
  }
  v5 = v2;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderStbVorbisCursor::Destroy  (binary VA: 0xfe94c0)
// Original: vox::DecoderStbVorbisCursor::~DecoderStbVorbisCursor
// ----------------------------------------------------------------------------
void vox::DecoderStbVorbisCursor::Destroy(vox::DecoderStbVorbisCursor::Self *self)
{
  vox::VoxThread::Self *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CFC8);
  vox::VoxThread::GetCurThreadId(v1);
  sub_BA06A0();
  if ( *((uint32_t *)self + 8) != 0 )
    stb_vorbis_close(*((uint32_t *)self + 8));
  sub_BA06B0();
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CD28);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderStbVorbisCursor::Destroy_eafe9550  (binary VA: 0xfe9550)
// Original: vox::DecoderStbVorbisCursor::~DecoderStbVorbisCursor
// ----------------------------------------------------------------------------
void vox::DecoderStbVorbisCursor::Destroy_eafe9550(vox::DecoderStbVorbisCursor::Self *self)
{
  vox::DecoderStbVorbisCursor::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderStbVorbisCursor::Decode  (binary VA: 0xfe9590)
// Original: vox::DecoderStbVorbisCursor::Decode
// ----------------------------------------------------------------------------
int vox::DecoderStbVorbisCursor::Decode(vox::DecoderStbVorbisCursor::Self *self, void *a2, unsigned int a3)
{
  int v3;
  int v4;
  int samples_float_interleaved;
  int v6;
  vox::VoxThread::Self *v8;
  int v9;
  int v10;

  vox::VoxThread::GetCurThreadId(v8);
  sub_BA06A0();
  v3 = *((uint32_t *)self + 8);
  v4 = 0;
  if ( v3 != 0 )
  {
    if ( *((uint32_t *)self + 3) == 32 )
      samples_float_interleaved = stb_vorbis_get_samples_float_interleaved(v3, *((uint32_t *)self + 1), a2, a3 >> 2);
    else
      samples_float_interleaved = stb_vorbis_get_samples_short_interleaved(v3, *((uint32_t *)self + 1), a2, a3 >> 1);
    v6 = samples_float_interleaved + *((uint32_t *)self + 9);
    *((uint32_t *)self + 9) = v6;
    if ( samples_float_interleaved != 0 && v6 != *((uint32_t *)self + 4) )
      goto LABEL_6;
    if ( *((uint8_t *)self + 28) != 0 )
    {
      v10 = samples_float_interleaved;
      G4_VCALL<void>(self, 44, 0);
      v4 = v10 * *((uint32_t *)self + 1) * (*((int *)self + 3) >> 3);
      goto LABEL_10;
    }
    if ( samples_float_interleaved != 0 )
    {
LABEL_6:
      v4 = samples_float_interleaved * *((uint32_t *)self + 1) * (*((int *)self + 3) >> 3);
    }
    else
    {
      *((uint8_t *)self + 40) = 1;
      v4 = 0;
    }
  }
LABEL_10:
  v9 = v4;
  sub_BA06B0();
  return v9;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderStbVorbisCursor::IsSeekable  (binary VA: 0xfe96c0)
// Original: vox::DecoderStbVorbisCursor::IsSeekable
// ----------------------------------------------------------------------------
bool vox::DecoderStbVorbisCursor::IsSeekable(vox::DecoderStbVorbisCursor::Self *self)
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
// Function: vox::DecoderStbVorbisCursor::Serialize  (binary VA: 0xfe9750)
// Original: vox::DecoderStbVorbisCursor::Serialize
// ----------------------------------------------------------------------------
int vox::DecoderStbVorbisCursor::Serialize(int a1, int a2, int a3, char a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint8_t *v8;
  uint8_t *v9;
  void *v10;
  int v12;
  int v13;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  uint8_t *v29;
  int v30;
  int v31;

  v4 = *(uint32_t *)(a2 + 200);
  v5 = a2 + 12;
  v29 = (uint8_t *)(a2 + 192);
  if ( v4 != a2 + 200 && *(uint8_t *)(v4 + 8) != 0 )
  {
    v12 = *(uint32_t *)(a2 + 192);
    if ( v12 == a2 + 192 )
      goto LABEL_11;
    if ( *(uint8_t *)(v12 + 8) != 0 )
      *(uint8_t *)(v12 + 8) = 0;
    else
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
  }
  v22 = *(uint32_t *)(a2 + 192);
  v6 = opNew(0xCu);
  if ( v6 != -8 )
    *(uint8_t *)(v6 + 8) = 1;
  sub_1901920(v6, v22);
  v23 = *(uint32_t *)(a2 + 200);
  v7 = opNew(0xCu);
  if ( v7 != -8 )
    *(uint8_t *)(v7 + 8) = 0;
  sub_1901920(v7, v23);
  g4_std_compat::ostream_write(v5, "{", 1);
  v8 = *(uint8_t **)(a2 + 192);
  if ( v8 != v29 )
  {
    if ( v8[8] != 0 )
      v8[8] = 0;
    else
      g4_std_compat::ostream_write(v5, ",", 1);
    g4_std_compat::ostream_write(v5, "\"", 1);
    g4_std_compat::ostream_write(v5, "type", 4);
    g4_std_compat::ostream_write(v5, "\":\"", 3);
    g4_std_compat::ostream_write(v5, "VORBIS", 6);
    g4_std_compat::ostream_write(v5, "\"", 1);
  }
LABEL_11:
  if ( (a4 & 2) == 0 )
  {
    v9 = *(uint8_t **)(a2 + 192);
    goto LABEL_13;
  }
  v13 = (*(int (**)(uint32_t))(**(uint32_t **)(a1 + 24) + 44))(*(uint32_t *)(a1 + 24));
  v9 = *(uint8_t **)(a2 + 192);
  v30 = v13;
  v14 = *(uint32_t *)(a1 + 16);
  v31 = *(uint32_t *)(a1 + 8);
  if ( v29 == v9 )
  {
LABEL_13:
    if ( (a4 & 4) == 0 )
      goto LABEL_14;
    goto LABEL_29;
  }
  if ( v9[8] != 0 )
  {
    v9[8] = 0;
    v15 = a2 + 12;
  }
  else
  {
    v28 = *(uint32_t *)(a1 + 16);
    v15 = a2 + 12;
    g4_std_compat::ostream_write(a2 + 12, ",", 1);
    v14 = v28;
  }
  v27 = v14;
  g4_std_compat::ostream_write(v15, "\"", 1);
  g4_std_compat::ostream_write(v15, "compression", 11);
  g4_std_compat::ostream_write(v15, "\":\"", 3);
  v16 = (int)(uintptr_t)(g4_std::ostream::op_shl_double(
          v15,
          COERCE__INT64((float)((float)((float)v30
                                      / (float)((float)((float)((float)HIWORD(v27) * 65536.0)
                                                      + (float)(uint16_t)v27)
                                              * 1024.0))
                              * (float)v31))));
  g4_std_compat::ostream_write(v16, "\"", 1);
  v9 = *(uint8_t **)(a2 + 192);
  if ( (a4 & 4) == 0 )
  {
LABEL_14:
    if ( (a4 & 8) == 0 )
      goto LABEL_15;
    goto LABEL_33;
  }
LABEL_29:
  if ( v9 == v29 )
    goto LABEL_14;
  if ( v9[8] != 0 )
  {
    v9[8] = 0;
    v17 = a2 + 12;
  }
  else
  {
    v17 = a2 + 12;
    g4_std_compat::ostream_write(a2 + 12, ",", 1);
  }
  v24 = *(uint32_t *)(a1 + 4);
  g4_std_compat::ostream_write(v17, "\"", 1);
  g4_std_compat::ostream_write(v17, "channel", 7);
  g4_std_compat::ostream_write(v17, "\":", 2);
  g4_std::ostream::op_shl_int(v17, v24);
  v9 = *(uint8_t **)(a2 + 192);
  if ( (a4 & 8) == 0 )
  {
LABEL_15:
    if ( (a4 & 0x10) == 0 )
      goto LABEL_16;
    goto LABEL_37;
  }
LABEL_33:
  if ( v29 == v9 )
    goto LABEL_15;
  if ( v9[8] != 0 )
  {
    v9[8] = 0;
    v18 = a2 + 12;
  }
  else
  {
    v18 = a2 + 12;
    g4_std_compat::ostream_write(a2 + 12, ",", 1);
  }
  v25 = *(uint32_t *)(a1 + 8);
  g4_std_compat::ostream_write(v18, "\"", 1);
  g4_std_compat::ostream_write(v18, "sample_rate", 11);
  g4_std_compat::ostream_write(v18, "\":", 2);
  g4_std::ostream::op_shl_int(v18, v25);
  v9 = *(uint8_t **)(a2 + 192);
  if ( (a4 & 0x10) == 0 )
  {
LABEL_16:
    if ( (a4 & 0x20) == 0 )
      goto LABEL_17;
    goto LABEL_41;
  }
LABEL_37:
  if ( v29 == v9 )
    goto LABEL_16;
  if ( v9[8] != 0 )
  {
    v9[8] = 0;
    v19 = a2 + 12;
  }
  else
  {
    v19 = a2 + 12;
    g4_std_compat::ostream_write(a2 + 12, ",", 1);
  }
  v26 = *(uint32_t *)(a1 + 16);
  g4_std_compat::ostream_write(v19, "\"", 1);
  g4_std_compat::ostream_write(v19, "sample_count", 12);
  g4_std_compat::ostream_write(v19, "\":", 2);
  sub_192D8B0(v19, v26);
  v9 = *(uint8_t **)(a2 + 192);
  if ( (a4 & 0x20) != 0 )
  {
LABEL_41:
    if ( v29 == v9 )
      return 0;
    if ( v9[8] != 0 )
    {
      v9[8] = 0;
      v20 = a2 + 12;
    }
    else
    {
      v20 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    v21 = *(uint32_t *)(a1 + 12);
    g4_std_compat::ostream_write(v20, "\"", 1);
    g4_std_compat::ostream_write(v20, "bit_per_sample", 14);
    g4_std_compat::ostream_write(v20, "\":", 2);
    g4_std::ostream::op_shl_int(v20, v21);
    v9 = *(uint8_t **)(a2 + 192);
  }
LABEL_17:
  if ( v29 != v9 && a2 + 200 != *(uint32_t *)(a2 + 200) )
  {
    sub_1901940(v9);
    opDelete(v9);
    v10 = *(void **)(a2 + 200);
    sub_1901940(v10);
    opDelete(v10);
    g4_std_compat::ostream_write(a2 + 12, "}", 1);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderStbVorbisCursor::Construct  (binary VA: 0xfea080)
// Original: vox::DecoderStbVorbisCursor::DecoderStbVorbisCursor
// ----------------------------------------------------------------------------
void vox::DecoderStbVorbisCursor::Construct(int a1, int a2, vox::StreamCursorInterface::Self *a3)
{
  int v3;
  typedef vox::StreamCursorInterface::Self *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[9];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v5)) > _g4_s1 ? (36u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v6)) > _g4_s2 ? (40u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 36u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 40u);

  *(uint32_t *)(a1 + 20) = a2;
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 24) = (uint32_t)(uintptr_t)(a3);
  *(uint8_t *)(a1 + 28) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_208CFC8);
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint8_t *)(a1 + 40) = 0;
  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  *(uint32_t *)(a1 + 16) = 0;
  v3 = (int)(uintptr_t)(stb_vorbis_open_file(a3, 0, (int)(uintptr_t)(&v5), 0));
  *(uint32_t *)(a1 + 32) = v3;
  if ( v3 != 0 )
  {
    stb_vorbis_get_info(v6);
    *(uint32_t *)(a1 + 12) = 16;
    *(uint32_t *)(a1 + 4) = v6[1];
    *(uint32_t *)(a1 + 8) = v6[0];
    *(uint32_t *)(a1 + 16) = stb_vorbis_stream_length_in_samples(*(uint32_t *)(a1 + 32));
  }
  else
  {
    *(uint32_t *)(a1 + 4) = 0;
    *(uint32_t *)(a1 + 8) = 0;
    *(uint32_t *)(a1 + 12) = 0;
    *(uint32_t *)(a1 + 16) = 0;
  }
  sub_BA06B0();
}


