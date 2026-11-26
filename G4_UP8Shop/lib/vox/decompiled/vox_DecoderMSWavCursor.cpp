#include "Core/Utils/DecompTypes.h"
#include "vox_DecoderMSWavCursor.h"

// ----------------------------------------------------------------------------
// Function: vox::DecoderMSWavCursor::SetLoop  (binary VA: 0xfe5970)
// Original: vox::DecoderMSWavCursor::SetLoop
// ----------------------------------------------------------------------------
int vox::DecoderMSWavCursor::SetLoop(vox::DecoderMSWavCursor::Self *self, bool a2)
{
  int result;

  result = *((uint32_t *)self + 9);
  if ( result != 0 )
    *(uint8_t *)(result + 40) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMSWavCursor::HasData  (binary VA: 0xfe59d0)
// Original: vox::DecoderMSWavCursor::HasData
// ----------------------------------------------------------------------------
int vox::DecoderMSWavCursor::HasData(vox::DecoderMSWavCursor::Self *self)
{
  int CurThreadId;
  int v2;
  int v3;
  vox::VoxThread::Self *v5;

  CurThreadId = vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  v2 = 0;
  v3 = *((uint32_t *)self + 9);
  if ( v3 != 0 )
    v2 = (*(int (**)(uint32_t, int))(*(uint32_t *)v3 + 16))(*((uint32_t *)self + 9), CurThreadId);
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMSWavCursor::Seek  (binary VA: 0xfe5a50)
// Original: vox::DecoderMSWavCursor::Seek
// ----------------------------------------------------------------------------
int vox::DecoderMSWavCursor::Seek(vox::DecoderMSWavCursor::Self *self, unsigned int a2)
{
  int v2;
  int v3;
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  v2 = *((uint32_t *)self + 9);
  if ( v2 != 0 )
    v3 = G4_VCALL<int>(v2, 12, a2);
  else
    v3 = -1;
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMSWavCursor::IsSeekable  (binary VA: 0xfe5ad0)
// Original: vox::DecoderMSWavCursor::IsSeekable
// ----------------------------------------------------------------------------
int vox::DecoderMSWavCursor::IsSeekable(vox::DecoderMSWavCursor::Self *self)
{
  int CurThreadId;
  int v2;
  uint8_t v3;
  vox::VoxThread::Self *v5;
  uint8_t v6;

  CurThreadId = vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  v2 = *((uint32_t *)self + 6);
  v3 = 0;
  if ( v2 != 0 && *((uint32_t *)self + 4) != 0 )
    v3 = (*(int (**)(uint32_t, int))(*(uint32_t *)v2 + 20))(*((uint32_t *)self + 6), CurThreadId);
  v6 = v3;
  sub_BA06B0();
  return v6;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMSWavCursor::Decode  (binary VA: 0xfe5b50)
// Original: vox::DecoderMSWavCursor::Decode
// ----------------------------------------------------------------------------
int vox::DecoderMSWavCursor::Decode(vox::DecoderMSWavCursor::Self *self, void *a2, int a3)
{
  int v3;
  int v4;
  vox::VoxThread::Self *v6;

  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  v3 = 0;
  v4 = *((uint32_t *)self + 9);
  if ( v4 != 0 )
    v3 = G4_VCALL<int>(v4, 8, a2, a3);
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMSWavCursor::Destroy  (binary VA: 0xfe5be0)
// Original: vox::DecoderMSWavCursor::~DecoderMSWavCursor
// ----------------------------------------------------------------------------
void vox::DecoderMSWavCursor::Destroy(vox::DecoderMSWavCursor::Self *self)
{
  int CurThreadId;
  void (***v2)(uint32_t, int);
  vox::VoxThread::Self *v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CE68);
  CurThreadId = vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  v2 = *((void (****)(uint32_t, int))self + 9);
  if ( v2 != nullptr )
  {
    (**v2)(*((uint32_t *)self + 9), CurThreadId);
    VoxFreeInternal(*((void **)self + 9));
  }
  sub_BA06B0();
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CD28);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMSWavCursor::Destroy_eafe5c70  (binary VA: 0xfe5c70)
// Original: vox::DecoderMSWavCursor::~DecoderMSWavCursor
// ----------------------------------------------------------------------------
void vox::DecoderMSWavCursor::Destroy_eafe5c70(vox::DecoderMSWavCursor::Self *self)
{
  vox::DecoderMSWavCursor::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMSWavCursor::Serialize  (binary VA: 0xfe60b0)
// Original: vox::DecoderMSWavCursor::Serialize
// ----------------------------------------------------------------------------
int vox::DecoderMSWavCursor::Serialize(uint32_t *a1, int a2, int a3, char a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint8_t *v8;
  int16_t v9;
  const char *v10;
  int v11;
  size_t v12;
  void *v13;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  char *v20;
  char *v21;
  char *s;
  char *v23;
  char *v24;
  char *v25;
  char *v26;
  void *v27;
  uint8_t *v28;

  v4 = *(uint32_t *)(a2 + 200);
  if ( v4 == a2 + 200 )
  {
    v5 = a2 + 12;
    v28 = (uint8_t *)(a2 + 192);
  }
  else
  {
    v5 = a2 + 12;
    v28 = (uint8_t *)(a2 + 192);
    if ( *(uint8_t *)(v4 + 8) != 0 )
    {
      v8 = *(uint8_t **)(a2 + 192);
      if ( v8 == (uint8_t *)(a2 + 192) )
        goto LABEL_11;
      if ( v8[8] != 0 )
        v8[8] = 0;
      else
        g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
  }
  v20 = *(char **)(a2 + 192);
  v6 = opNew(0xCu);
  if ( v6 != -8 )
    *(uint8_t *)(v6 + 8) = 1;
  sub_1901920(v6, v20);
  v21 = *(char **)(a2 + 200);
  v7 = opNew(0xCu);
  if ( v7 != -8 )
    *(uint8_t *)(v7 + 8) = 0;
  sub_1901920(v7, v21);
  g4_std_compat::ostream_write(v5, "{", 1);
  v8 = *(uint8_t **)(a2 + 192);
  if ( v8 != v28 )
  {
    if ( v8[8] != 0 )
      v8[8] = 0;
    else
      g4_std_compat::ostream_write(v5, ",", 1);
    g4_std_compat::ostream_write(v5, "\"", 1);
    g4_std_compat::ostream_write(v5, "type", 4);
    g4_std_compat::ostream_write(v5, "\":\"", 3);
    g4_std_compat::ostream_write(v5, "WAV", 3);
    g4_std_compat::ostream_write(v5, "\"", 1);
    v8 = *(uint8_t **)(a2 + 192);
  }
LABEL_11:
  if ( (a4 & 2) != 0 )
  {
    v9 = *(uint16_t *)(a1[8] + 20);
    v10 = "MSADPCM";
    if ( v9 != 2 )
    {
      v10 = "IMAADPCM";
      if ( v9 != 17 )
      {
        v10 = "Unsupported";
        if ( v9 == 1 )
          v10 = "PCM";
      }
    }
    if ( v28 != v8 )
    {
      if ( v8[8] != 0 )
      {
        v8[8] = 0;
        v11 = a2 + 12;
      }
      else
      {
        v26 = (char *)v10;
        v11 = a2 + 12;
        g4_std_compat::ostream_write(a2 + 12, ",", 1);
        v10 = v26;
      }
      s = (char *)v10;
      g4_std_compat::ostream_write(v11, "\"", 1);
      g4_std_compat::ostream_write(v11, "compression", 11);
      g4_std_compat::ostream_write(v11, "\":\"", 3);
      v12 = strlen(s);
      g4_std_compat::ostream_write(v11, s, v12);
      g4_std_compat::ostream_write(v11, "\"", 1);
      v8 = *(uint8_t **)(a2 + 192);
    }
  }
  if ( (a4 & 4) != 0 && v28 != v8 )
  {
    if ( v8[8] != 0 )
    {
      v8[8] = 0;
      v19 = a2 + 12;
    }
    else
    {
      v19 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    v25 = (char *)a1[1];
    g4_std_compat::ostream_write(v19, "\"", 1);
    g4_std_compat::ostream_write(v19, "channel", 7);
    g4_std_compat::ostream_write(v19, "\":", 2);
    g4_std::ostream::op_shl_int(v19, v25);
    v8 = *(uint8_t **)(a2 + 192);
  }
  if ( (a4 & 8) != 0 && v28 != v8 )
  {
    if ( v8[8] != 0 )
    {
      v8[8] = 0;
      v18 = a2 + 12;
    }
    else
    {
      v18 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    v24 = (char *)a1[2];
    g4_std_compat::ostream_write(v18, "\"", 1);
    g4_std_compat::ostream_write(v18, "sample_rate", 11);
    g4_std_compat::ostream_write(v18, "\":", 2);
    g4_std::ostream::op_shl_int(v18, v24);
    v8 = *(uint8_t **)(a2 + 192);
  }
  if ( (a4 & 0x10) != 0 && v28 != v8 )
  {
    if ( v8[8] != 0 )
    {
      v8[8] = 0;
      v17 = a2 + 12;
    }
    else
    {
      v17 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    v23 = (char *)a1[4];
    g4_std_compat::ostream_write(v17, "\"", 1);
    g4_std_compat::ostream_write(v17, "sample_count", 12);
    g4_std_compat::ostream_write(v17, "\":", 2);
    sub_192D8B0(v17, v23);
    v8 = *(uint8_t **)(a2 + 192);
  }
  if ( (a4 & 0x20) != 0 )
  {
    if ( v28 == v8 )
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
  if ( v28 != v8 && a2 + 200 != *(uint32_t *)(a2 + 200) )
  {
    v27 = v8;
    sub_1901940(v8);
    opDelete(v27);
    v13 = *(void **)(a2 + 200);
    sub_1901940(v13);
    opDelete(v13);
    g4_std_compat::ostream_write(a2 + 12, "}", 1);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMSWavCursor::ValidateTrackParams  (binary VA: 0xfe67d0)
// Original: vox::DecoderMSWavCursor::ValidateTrackParams
// ----------------------------------------------------------------------------
bool vox::DecoderMSWavCursor::ValidateTrackParams(int a1, uint32_t *a2)
{
  bool v2;
  vox::VoxThread::Self *v4;
  bool v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  v2 = false;
  if ( a2[2] == 16 && a2[3] != 0 && (unsigned int)(*a2 - 1) <= 1 )
    v2 = a2[1] > 0;
  v5 = v2;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMSWavCursor::ParseFile  (binary VA: 0xfe6860)
// Original: vox::DecoderMSWavCursor::ParseFile
// ----------------------------------------------------------------------------
int vox::DecoderMSWavCursor::ParseFile(vox::DecoderMSWavCursor::Self *self)
{
  int v1;
  int v2;
  int v3;
  vox::DecoderMSWavCursor::Self *v4;
  char v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int **i;
  int *v19;
  vox::DecoderMSWavCursor::Self *v20;
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  typedef vox::VoxThread::Self *_g4_t_v25;
  typedef vox::DecoderMSWavCursor::Self *_g4_t_v26;
  typedef vox::DecoderMSWavCursor::Self *_g4_t_v27;
  typedef vox::DecoderMSWavCursor::Self *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_CurThreadId;
  typedef char _g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t _g4_t_src[7];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v25)) > _g4_s0 ? (0u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v26)) > _g4_s1 ? (44u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v27)) > _g4_s2 ? (44u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v28)) > _g4_s3 ? (44u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v29)) > _g4_s4 ? (48u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v30)) > _g4_s5 ? (56u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_CurThreadId)) > _g4_s6 ? (64u + sizeof(_g4_t_CurThreadId)) : _g4_s6,
    _g4_s8 = (71u + sizeof(_g4_t_v32)) > _g4_s7 ? (71u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v33)) > _g4_s8 ? (72u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_src)) > _g4_s9 ? (80u + sizeof(_g4_t_src)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_CurThreadId &CurThreadId = *reinterpret_cast<_g4_t_CurThreadId *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 71u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 80u);

  v1 = 0;
  CurThreadId = vox::VoxThread::GetCurThreadId(v25);
  sub_BA06A0("DecoderMSWavCursor::ParseFile", CurThreadId);
  v2 = *((uint32_t *)self + 6);
  if ( v2 != 0 )
  {
    v30 = (*(int (**)(uint32_t))(*(uint32_t *)v2 + 24))(*((uint32_t *)self + 6));
    v3 = (*(int (**)(uint32_t, uint32_t, uint32_t))(**((uint32_t **)self + 6) + 16))(*((uint32_t *)self + 6), 0, 0);
    v4 = self;
    if ( v3 >= 0 )
    {
      v32 = 0;
      v33 = 12;
      while ( 1 )
      {
        v26 = v4;
        v5 = (*(int (**)(uint32_t))(**((uint32_t **)v4 + 6) + 36))(*((uint32_t *)v4 + 6));
        v4 = v26;
        if ( v5 != 0 )
          break;
        v6 = (*(int (**)(uint32_t))(**((uint32_t **)v26 + 6) + 24))(*((uint32_t *)v26 + 6));
        v7 = v6;
        v4 = v26;
        if ( v6 < 0 )
          goto LABEL_26;
        if ( (v6 & 1) != 0 )
        {
          v11 = (*(int (**)(uint32_t, int, int))(**((uint32_t **)v26 + 6) + 16))(*((uint32_t *)v26 + 6), 1, 1);
          v4 = v26;
          if ( v11 < 0 )
            goto LABEL_26;
          ++v7;
        }
        if ( v33 <= v7 )
          break;
        v27 = v4;
        v8 = (*(int (**)(uint32_t, uint32_t *, int))(**((uint32_t **)v4 + 6) + 28))(*((uint32_t *)v4 + 6), src, 8);
        v4 = v27;
        if ( v8 != 8 )
          break;
        if ( memcmp(src, "RIFF", 4u) == 0 )
        {
          strncpy(*((char **)v27 + 8), (const char *)src, 4u);
          *(uint32_t *)(*((uint32_t *)v27 + 8) + 4) = src[1];
          (*(void (**)(uint32_t, int, int))(**((uint32_t **)v27 + 6) + 28))(
            *((uint32_t *)v27 + 6),
            *((uint32_t *)v27 + 8) + 8,
            4);
          v33 = src[1] + 8;
          if ( v33 > (*(int (**)(uint32_t))(**((uint32_t **)v27 + 6) + 44))(*((uint32_t *)v27 + 6)) )
            goto LABEL_26;
          (*(void (**)(uint32_t))(**((uint32_t **)v27 + 6) + 44))(*((uint32_t *)v27 + 6));
          v32 = 1;
          v4 = v27;
        }
        else
        {
          if ( memcmp(src, "fmt ", 4u) == 0 )
          {
            strncpy((char *)(*((uint32_t *)v27 + 8) + 12), (const char *)src, 4u);
            *(uint32_t *)(*((uint32_t *)v27 + 8) + 16) = src[1];
            (*(void (**)(uint32_t, int, int))(**((uint32_t **)v27 + 6) + 28))(
              *((uint32_t *)v27 + 6),
              *((uint32_t *)v27 + 8) + 20,
              16);
            v4 = v27;
            if ( src[1] < 0
              || (unsigned int)((v12 = *(uint32_t *)(*((uint32_t *)v27 + 8) + 16)) + 8) > 0x18
              && (v13 = (*(int (**)(uint32_t, int, int))(**((uint32_t **)v27 + 6) + 16))(
                          *((uint32_t *)v27 + 6),
                          v12 - 16,
                          1),
                  v4 = v27,
                  v13 < 0) )
            {
LABEL_26:
              v1 = 0;
              goto LABEL_18;
            }
          }
          else if ( memcmp(src, "fact", 4u) == 0 )
          {
            strncpy((char *)(*((uint32_t *)v27 + 8) + 44), (const char *)src, 4u);
            *(uint32_t *)(*((uint32_t *)v27 + 8) + 48) = src[1];
            (*(void (**)(uint32_t, int, int))(**((uint32_t **)v27 + 6) + 28))(
              *((uint32_t *)v27 + 6),
              *((uint32_t *)v27 + 8) + 52,
              4);
            v4 = v27;
          }
          else if ( memcmp(src, "data", 4u) == 0 )
          {
            strncpy((char *)(*((uint32_t *)v27 + 8) + 36), (const char *)src, 4u);
            *(uint32_t *)(*((uint32_t *)v27 + 8) + 40) = src[1];
            v14 = *((uint32_t *)v27 + 8);
            if ( *(uint32_t *)(v14 + 60) != 0 )
            {
              v15 = *(uint32_t *)(v14 + 40);
              v29 = (*(int (**)(uint32_t))(**((uint32_t **)v27 + 6) + 24))(*((uint32_t *)v27 + 6)) - 8;
              v16 = *(uint32_t *)(*((uint32_t *)v27 + 8) + 60);
              v17 = *(uint32_t *)(v16 + 8);
              for ( i = (int **)(v16 + 8); v17 != 0; v17 = *(uint32_t *)(v17 + 8) )
                i = (int **)(v17 + 8);
              v19 = (int *)VoxAllocInternal(
                             0xCu,
                             0,
                             (int)(uintptr_t)("../../../../../lib/vox/include/MSHeaders.h"),
                             (int)(uintptr_t)("AddNode"),
                             153);
              v19[1] = v15;
              *v19 = v29;
              v19[2] = 0;
              *i = v19;
              v20 = v27;
            }
            else
            {
              v22 = (*(int (**)(uint32_t))(**((uint32_t **)v27 + 6) + 24))(*((uint32_t *)v27 + 6));
              v23 = (uint32_t *)VoxAllocInternal(
                                0xCu,
                                0,
                                (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_mswav.cpp"),
                                (int)(uintptr_t)("ParseFile"),
                                387);
              v20 = v27;
              v24 = *(uint32_t *)(*((uint32_t *)v27 + 8) + 40);
              *v23 = v22 - 8;
              v23[1] = v24;
              v23[2] = 0;
              *(uint32_t *)(*((uint32_t *)v27 + 8) + 60) = (uint32_t)(uintptr_t)(v23);
              if ( *(uint32_t *)(*((uint32_t *)v27 + 8) + 60) == 0 )
              {
                v1 = 0;
                goto LABEL_18;
              }
            }
            if ( src[1] < 0 )
              goto LABEL_26;
            v28 = v20;
            v21 = (*(int (**)(uint32_t, uint32_t, int))(**((uint32_t **)v20 + 6) + 16))(
                    *((uint32_t *)v20 + 6),
                    *(uint32_t *)(*((uint32_t *)v20 + 8) + 40),
                    1);
            v4 = v28;
            if ( v21 < 0 )
            {
              v1 = 0;
              goto LABEL_18;
            }
          }
          else
          {
            if ( src[1] < 0 )
              goto LABEL_26;
            v9 = (*(int (**)(uint32_t, uint32_t, int))(**((uint32_t **)v27 + 6) + 16))(
                   *((uint32_t *)v27 + 6),
                   src[1],
                   1);
            v4 = v27;
            if ( v9 < 0 )
              goto LABEL_26;
          }
          if ( v32 == 0 )
            break;
        }
      }
      v1 = 0;
      if ( *(uint32_t *)(*((uint32_t *)v4 + 8) + 60) != 0 )
      {
        v1 = 1;
        (*(void (**)(uint32_t, int, uint32_t))(**((uint32_t **)v4 + 6) + 16))(*((uint32_t *)v4 + 6), v30, 0);
      }
    }
  }
LABEL_18:
  sub_BA06B0("DecoderMSWavCursor::ParseFile", CurThreadId);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMSWavCursor::Construct  (binary VA: 0xfe6da0)
// Original: vox::DecoderMSWavCursor::DecoderMSWavCursor
// ----------------------------------------------------------------------------
void vox::DecoderMSWavCursor::Construct(vox::DecoderMSWavCursor::Self *a1, int a2, int a3)
{
  int v3;
  uint16_t *v4;
  int16_t v5;
  vox::VoxMSWavSubDecoder::Self *v6;
  int v7;
  int v8;
  int v9;
  const void *v10;
  vox::VoxThread::Self *v11;
  bool v12;

  *((uint32_t *)a1 + 5) = a2;
  *((uint32_t *)a1 + 6) = a3;
  *((uint32_t *)a1 + 1) = 0;
  *((uint32_t *)a1 + 2) = 0;
  *((uint32_t *)a1 + 3) = 0;
  *((uint32_t *)a1 + 4) = 0;
  *((uint8_t *)a1 + 28) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_208CE68);
  *((uint32_t *)a1 + 9) = 0;
  vox::VoxThread::GetCurThreadId(v11);
  sub_BA06A0();
  v3 = *((uint32_t *)a1 + 5);
  v4 = (uint16_t *)(v3 + 4);
  *((uint32_t *)a1 + 8) = v3 + 4;
  if ( *(uint8_t *)(v3 + 68) != 0 )
  {
    if ( (uint8_t)vox::DecoderMSWavCursor::ParseFile(a1) == 0 )
    {
LABEL_18:
      *((uint32_t *)a1 + 1) = 0;
      *((uint32_t *)a1 + 2) = 0;
      *((uint32_t *)a1 + 3) = 0;
      *((uint32_t *)a1 + 4) = 0;
      goto LABEL_10;
    }
    *(uint8_t *)(*((uint32_t *)a1 + 5) + 68) = 0;
    v4 = *((uint16_t **)a1 + 8);
  }
  v12 = false;
  if ( memcmp(v4, "RIFF", 4u) == 0 )
  {
    v10 = v4 + 4;
    v5 = v4[10];
    v12 = memcmp(v10, "WAVE", 4u) == 0;
    if ( v5 != 1 )
    {
LABEL_4:
      if ( v5 == 17 )
      {
        if ( v12 )
        {
          v6 = (vox::VoxMSWavSubDecoder::Self *)VoxAllocInternal(
                                            0x8Cu,
                                            0,
                                            (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_mswav.cpp"),
                                            (int)(uintptr_t)("DecoderMSWavCursor"),
                                            97);
          vox::VoxMSWavSubDecoderIMAADPCM::Construct(v6, a3, *((uint32_t *)a1 + 8));
          *((uint32_t *)a1 + 9) = (uint32_t)(uintptr_t)(v6);
          goto LABEL_8;
        }
      }
      else if ( v5 == 2 && v12 )
      {
        v6 = (vox::VoxMSWavSubDecoder::Self *)VoxAllocInternal(
                                          0x454u,
                                          0,
                                          (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_mswav.cpp"),
                                          (int)(uintptr_t)("DecoderMSWavCursor"),
                                          102);
        vox::VoxMSWavSubDecoderMSADPCM::Construct(v6, a3, *((uint32_t *)a1 + 8));
        *((uint32_t *)a1 + 9) = (uint32_t)(uintptr_t)(v6);
        goto LABEL_8;
      }
      goto LABEL_7;
    }
  }
  else
  {
    v5 = v4[10];
    if ( v5 != 1 )
      goto LABEL_4;
  }
  if ( v12 )
  {
    v6 = (vox::VoxMSWavSubDecoder::Self *)VoxAllocInternal(
                                      0x3Cu,
                                      0,
                                      (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_mswav.cpp"),
                                      (int)(uintptr_t)("DecoderMSWavCursor"),
                                      93);
    vox::VoxMSWavSubDecoderPCM::Construct(v6, a3, *((uint32_t *)a1 + 8));
    *((uint32_t *)a1 + 9) = (uint32_t)(uintptr_t)(v6);
    goto LABEL_8;
  }
LABEL_7:
  v6 = *((vox::VoxMSWavSubDecoder::Self **)a1 + 9);
LABEL_8:
  if ( v6 == nullptr )
    goto LABEL_18;
  v7 = *((uint32_t *)v6 + 6);
  v8 = *((uint32_t *)v6 + 4);
  v9 = *((uint32_t *)v6 + 5);
  *((uint32_t *)a1 + 4) = *((uint32_t *)v6 + 7);
  *((uint32_t *)a1 + 3) = v7;
  *((uint32_t *)a1 + 1) = v8;
  *((uint32_t *)a1 + 2) = v9;
  if ( !vox::DecoderMSWavCursor::ValidateTrackParams((int)(uintptr_t)(a1), (uint32_t *)a1 + 1) )
    goto LABEL_18;
LABEL_10:
  sub_BA06B0();
}


