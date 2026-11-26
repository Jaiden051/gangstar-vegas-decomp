#include "Core/Utils/DecompTypes.h"
#include "vox_DecoderMPC8Cursor.h"

// ----------------------------------------------------------------------------
// Function: vox::DecoderMPC8Cursor::HasData  (binary VA: 0xfdf960)
// Original: vox::DecoderMPC8Cursor::HasData
// ----------------------------------------------------------------------------
bool vox::DecoderMPC8Cursor::HasData(vox::DecoderMPC8Cursor::Self *self)
{
  bool result;
  unsigned int v2;
  unsigned int v3;

  result = false;
  if ( *((uint32_t *)self + 6) != 0 && *((uint32_t *)self + 19) == 0 )
  {
    v2 = *((uint32_t *)self + 8);
    v3 = *((uint32_t *)self + 4);
    if ( v2 >= v3 && *((uint8_t *)self + 28) != 0 )
    {
      G4_VCALL<void>(self, 44, 0);
      v2 = *((uint32_t *)self + 8);
      v3 = *((uint32_t *)self + 4);
    }
    return v2 < v3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMPC8Cursor::Destroy  (binary VA: 0xfdf9b0)
// Original: vox::DecoderMPC8Cursor::~DecoderMPC8Cursor
// ----------------------------------------------------------------------------
void vox::DecoderMPC8Cursor::Destroy(vox::DecoderMPC8Cursor::Self *self)
{
  vox::VoxThread::Self *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CDC8);
  vox::VoxThread::GetCurThreadId(v1);
  sub_BA06A0();
  if ( *((uint32_t *)self + 11) != 0 )
    mpc_demux_exit(*((uint32_t *)self + 11));
  if ( *((uint32_t *)self + 18) != 0 )
    VoxFreeInternal(*((void **)self + 18));
  sub_BA06B0();
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CD28);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMPC8Cursor::Destroy_eafdfdd0  (binary VA: 0xfdfdd0)
// Original: vox::DecoderMPC8Cursor::~DecoderMPC8Cursor
// ----------------------------------------------------------------------------
void vox::DecoderMPC8Cursor::Destroy_eafdfdd0(vox::DecoderMPC8Cursor::Self *self)
{
  vox::DecoderMPC8Cursor::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMPC8Cursor::IsSeekable  (binary VA: 0xfdfe10)
// Original: vox::DecoderMPC8Cursor::IsSeekable
// ----------------------------------------------------------------------------
bool vox::DecoderMPC8Cursor::IsSeekable(vox::DecoderMPC8Cursor::Self *self)
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
      && G4_VCALL<uint8_t>(v2, 20, CurThreadId) != 0;
  v6 = v3;
  sub_BA06B0();
  return v6;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMPC8Cursor::Serialize  (binary VA: 0xfdfea0)
// Original: vox::DecoderMPC8Cursor::Serialize
// ----------------------------------------------------------------------------
int vox::DecoderMPC8Cursor::Serialize(uint32_t *a1, int a2, int a3, char a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint8_t *v8;
  const char *v9;
  int v10;
  size_t v11;
  void *v12;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char *v19;
  char *v20;
  char *s;
  char *v22;
  char *v23;
  char *v24;
  char *v25;
  void *v26;
  uint8_t *v27;

  v4 = *(uint32_t *)(a2 + 200);
  if ( v4 == a2 + 200 )
  {
    v5 = a2 + 12;
    v27 = (uint8_t *)(a2 + 192);
  }
  else
  {
    v5 = a2 + 12;
    v27 = (uint8_t *)(a2 + 192);
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
  v19 = *(char **)(a2 + 192);
  v6 = opNew(0xCu);
  if ( v6 != -8 )
    *(uint8_t *)(v6 + 8) = 1;
  sub_1901920(v6, v19);
  v20 = *(char **)(a2 + 200);
  v7 = opNew(0xCu);
  if ( v7 != -8 )
    *(uint8_t *)(v7 + 8) = 0;
  sub_1901920(v7, v20);
  g4_std_compat::ostream_write(v5, "{", 1);
  v8 = *(uint8_t **)(a2 + 192);
  if ( v8 != v27 )
  {
    if ( v8[8] != 0 )
      v8[8] = 0;
    else
      g4_std_compat::ostream_write(v5, ",", 1);
    g4_std_compat::ostream_write(v5, "\"", 1);
    g4_std_compat::ostream_write(v5, "type", 4);
    g4_std_compat::ostream_write(v5, "\":\"", 3);
    g4_std_compat::ostream_write(v5, "MPC", 3);
    g4_std_compat::ostream_write(v5, "\"", 1);
    v8 = *(uint8_t **)(a2 + 192);
  }
LABEL_11:
  v9 = *(const char **)(a1[11] + 344);
  if ( (a4 & 2) != 0 )
  {
    if ( v9 == nullptr )
      v9 = "Unknown";
    if ( v8 != v27 )
    {
      if ( v8[8] != 0 )
      {
        v8[8] = 0;
        v10 = a2 + 12;
      }
      else
      {
        v25 = (char *)v9;
        v10 = a2 + 12;
        g4_std_compat::ostream_write(a2 + 12, ",", 1);
        v9 = v25;
      }
      s = (char *)v9;
      g4_std_compat::ostream_write(v10, "\"", 1);
      g4_std_compat::ostream_write(v10, "compression", 11);
      g4_std_compat::ostream_write(v10, "\":\"", 3);
      v11 = strlen(s);
      g4_std_compat::ostream_write(v10, s, v11);
      g4_std_compat::ostream_write(v10, "\"", 1);
      v8 = *(uint8_t **)(a2 + 192);
    }
  }
  if ( (a4 & 4) != 0 && v27 != v8 )
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
    v24 = (char *)a1[1];
    g4_std_compat::ostream_write(v18, "\"", 1);
    g4_std_compat::ostream_write(v18, "channel", 7);
    g4_std_compat::ostream_write(v18, "\":", 2);
    g4_std::ostream::op_shl_int(v18, v24);
    v8 = *(uint8_t **)(a2 + 192);
  }
  if ( (a4 & 8) != 0 && v8 != v27 )
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
    v23 = (char *)a1[2];
    g4_std_compat::ostream_write(v17, "\"", 1);
    g4_std_compat::ostream_write(v17, "sample_rate", 11);
    g4_std_compat::ostream_write(v17, "\":", 2);
    g4_std::ostream::op_shl_int(v17, v23);
    v8 = *(uint8_t **)(a2 + 192);
  }
  if ( (a4 & 0x10) != 0 && v27 != v8 )
  {
    if ( v8[8] != 0 )
    {
      v8[8] = 0;
      v16 = a2 + 12;
    }
    else
    {
      v16 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    v22 = (char *)a1[4];
    g4_std_compat::ostream_write(v16, "\"", 1);
    g4_std_compat::ostream_write(v16, "sample_count", 12);
    g4_std_compat::ostream_write(v16, "\":", 2);
    sub_192D8B0(v16, v22);
    v8 = *(uint8_t **)(a2 + 192);
  }
  if ( (a4 & 0x20) != 0 )
  {
    if ( v27 == v8 )
      return 0;
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
    v15 = a1[3];
    g4_std_compat::ostream_write(v14, "\"", 1);
    g4_std_compat::ostream_write(v14, "bit_per_sample", 14);
    g4_std_compat::ostream_write(v14, "\":", 2);
    g4_std::ostream::op_shl_int(v14, v15);
    v8 = *(uint8_t **)(a2 + 192);
  }
  if ( v27 != v8 && a2 + 200 != *(uint32_t *)(a2 + 200) )
  {
    v26 = v8;
    sub_1901940(v8);
    opDelete(v26);
    v12 = *(void **)(a2 + 200);
    sub_1901940(v12);
    opDelete(v12);
    g4_std_compat::ostream_write(a2 + 12, "}", 1);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMPC8Cursor::Construct  (binary VA: 0xfe05b0)
// Original: vox::DecoderMPC8Cursor::DecoderMPC8Cursor
// ----------------------------------------------------------------------------
int vox::DecoderMPC8Cursor::Construct(int a1, int a2, int a3)
{
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  typedef vox::VoxThread::Self *_g4_t_v8;
  typedef int _g4_t_CurThreadId;
  typedef uint32_t _g4_t_v10[91];
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_CurThreadId)) > _g4_s1 ? (44u + sizeof(_g4_t_CurThreadId)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v10)) > _g4_s2 ? (48u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_CurThreadId &CurThreadId = *reinterpret_cast<_g4_t_CurThreadId *>(_g4_sf + 44u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);

  *(uint32_t *)(a1 + 20) = a2;
  *(uint32_t *)(a1 + 24) = a3;
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint8_t *)(a1 + 28) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_208CDC8);
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 40) = 0;
  *(uint32_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 72) = 0;
  *(uint32_t *)(a1 + 76) = 0;
  CurThreadId = vox::VoxThread::GetCurThreadId(v8);
  sub_BA06A0("DecoderMPC8Cursor::DecoderMPC8Cursor", CurThreadId);
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(mpc_read);
  *(uint32_t *)(a1 + 52) = (uint32_t)(uintptr_t)(mpc_seek);
  *(uint32_t *)(a1 + 56) = (uint32_t)(uintptr_t)(mpc_tell);
  *(uint32_t *)(a1 + 64) = (uint32_t)(uintptr_t)(mpc_canseek);
  *(uint32_t *)(a1 + 60) = (uint32_t)(uintptr_t)(mpc_getsize);
  *(uint32_t *)(a1 + 68) = a3;
  v3 = VoxAllocInternal(
         0x4800u,
         0,
         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_mpc8.cpp"),
         (int)(uintptr_t)("DecoderMPC8Cursor"),
         114);
  *(uint32_t *)(a1 + 72) = v3;
  if ( v3 != 0 )
  {
    v4 = (uint32_t *)mpc_demux_init(a1 + 48);
    *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(v4);
  }
  else
  {
    v4 = *(uint32_t **)(a1 + 44);
  }
  if ( v4 != nullptr && v4[1] != 0 && *v4 != 0 )
  {
    mpc_demux_get_info(v4, v10);
    v5 = v10[1];
    *(uint32_t *)(a1 + 12) = 16;
    *(uint32_t *)(a1 + 4) = v5;
    v6 = *(uint32_t *)(a2 + 4);
    if ( v6 <= 0 )
      v6 = v10[0];
    *(uint32_t *)(a1 + 8) = v6;
    *(uint32_t *)(a1 + 16) = v10[13];
  }
  else
  {
    *(uint32_t *)(a1 + 4) = 0;
    *(uint32_t *)(a1 + 8) = 0;
    *(uint32_t *)(a1 + 12) = 0;
    *(uint32_t *)(a1 + 16) = 0;
  }
  { sub_BA06B0("DecoderMPC8Cursor::DecoderMPC8Cursor", CurThreadId); return 0; }
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMPC8Cursor::ConvertFloatToShort  (binary VA: 0xfe07d0)
// Original: vox::DecoderMPC8Cursor::ConvertFloatToShort
// ----------------------------------------------------------------------------
void vox::DecoderMPC8Cursor::ConvertFloatToShort(vox::DecoderMPC8Cursor::Self *self, int16_t *a2, float *a3, int a4)
{
  int i;
  int v5;
  vox::VoxThread::Self *v6;

  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  if ( a4 > 0 )
  {
    for ( i = 0; i != a4; ++i )
    {
      while ( 1 )
      {
        v5 = (int)(float)(a3[i] * 32768.0);
        if ( (unsigned int)(v5 + 0x8000) <= 0xFFFF )
          break;
        a2[i++] = ((v5 >> 31) & 1) + 0x7FFF;
        if ( i == a4 )
          goto LABEL_6;
      }
      a2[i] = v5;
    }
  }
LABEL_6:
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMPC8Cursor::Decode  (binary VA: 0xfe0940)
// Original: vox::DecoderMPC8Cursor::Decode
// ----------------------------------------------------------------------------
int vox::DecoderMPC8Cursor::Decode(vox::DecoderMPC8Cursor::Self *self, int16_t *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char v9;
  int v10;
  int v12;
  float *v13;
  int v14;
  int v15;
  bool v16;
  int v17;
  int v18;
  int v19;
  typedef vox::VoxThread::Self *_g4_t_dest;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef float *_g4_t_src;
  typedef int _g4_t_v29;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_dest)) > _g4_s0 ? (0u + sizeof(_g4_t_dest)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v21)) > _g4_s1 ? (28u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v22)) > _g4_s2 ? (28u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v23)) > _g4_s3 ? (32u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v24)) > _g4_s4 ? (32u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v25)) > _g4_s5 ? (36u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v26)) > _g4_s6 ? (48u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v27)) > _g4_s7 ? (52u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_src)) > _g4_s8 ? (56u + sizeof(_g4_t_src)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v29)) > _g4_s9 ? (60u + sizeof(_g4_t_v29)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);

  v3 = 0;
  vox::VoxThread::GetCurThreadId(dest);
  sub_BA06A0();
  if ( *((uint32_t *)self + 11) != 0 )
  {
    v25 = *((uint32_t *)self + 3);
    v23 = *((uint32_t *)self + 1);
    v4 = *((uint32_t *)self + 9);
    v5 = 0;
    v6 = a3 / (v23 * (v25 >> 3));
    v7 = *((uint32_t *)self + 10);
    v8 = v6;
    if ( v7 < v4 )
    {
      v12 = v4 - v7;
      if ( v6 >= v4 - v7 )
      {
        v22 = v4 - v7;
        if ( v25 == 32 )
          memcpy(a2, (const void *)(*((uint32_t *)self + 18) + 4 * v23 * v7), 4 * v12 * v23);
        else
          vox::DecoderMPC8Cursor::ConvertFloatToShort(
            self,
            a2,
            (float *)(*((uint32_t *)self + 18) + 4 * v23 * v7),
            v12 * v23);
        v5 = v22;
        *((uint32_t *)self + 10) += v22;
        v8 = v6 - v22;
        *((uint32_t *)self + 8) += v22;
      }
      else
      {
        if ( v25 == 32 )
          memcpy(a2, (const void *)(*((uint32_t *)self + 18) + 4 * v23 * v7), 4 * v6 * v23);
        else
          vox::DecoderMPC8Cursor::ConvertFloatToShort(
            self,
            a2,
            (float *)(*((uint32_t *)self + 18) + 4 * v23 * v7),
            v6 * v23);
        *((uint32_t *)self + 10) += v6;
        *((uint32_t *)self + 8) += v6;
        v5 = a3 / (v23 * (v25 >> 3));
        v8 = 0;
      }
    }
    v21 = v5;
    v9 = vox::DecoderMPC8Cursor::CheckForEndOfSample(self);
    v10 = v21;
    if ( v9 == 0 )
    {
      v13 = *((float **)self + 18);
      v26 = 0;
      v27 = 0;
      v29 = 0;
      src = v13;
      if ( v8 > 0 )
      {
        while ( 1 )
        {
          v14 = mpc_demux_decode(*((uint32_t *)self + 11), &v26);
          v15 = v26;
          v16 = v27 == -1;
          *((uint32_t *)self + 19) = v14;
          *((uint32_t *)self + 10) = 0;
          *((uint32_t *)self + 9) = v15;
          if ( v16 )
          {
            v19 = *((uint32_t *)self + 4);
            *((uint32_t *)self + 9) = 0;
            *((uint32_t *)self + 8) = v19;
            if ( v14 != 0 )
              goto LABEL_21;
            v15 = 0;
          }
          v17 = *((uint32_t *)self + 1);
          v24 = v17 * (v6 - v8);
          if ( v8 < v15 )
          {
            if ( *((uint32_t *)self + 3) == 32 )
              memcpy(&a2[2 * v17 * (v6 - v8)], src, 4 * v8 * v17);
            else
              vox::DecoderMPC8Cursor::ConvertFloatToShort(self, &a2[v24], src, v8 * v17);
            *((uint32_t *)self + 10) += v8;
            *((uint32_t *)self + 8) += v8;
            v8 = 0;
            if ( (uint8_t)vox::DecoderMPC8Cursor::CheckForEndOfSample(self) != 0 )
            {
LABEL_21:
              v10 = v6 - v8;
              break;
            }
          }
          else
          {
            if ( *((uint32_t *)self + 3) == 32 )
              memcpy(&a2[2 * v24], src, 4 * v17 * v15);
            else
              vox::DecoderMPC8Cursor::ConvertFloatToShort(self, &a2[v24], src, v17 * v15);
            v18 = *((uint32_t *)self + 9);
            *((uint32_t *)self + 10) += v18;
            *((uint32_t *)self + 8) += v18;
            v8 -= v18;
            if ( (uint8_t)vox::DecoderMPC8Cursor::CheckForEndOfSample(self) != 0 )
              goto LABEL_21;
          }
          if ( v8 <= 0 )
            goto LABEL_21;
        }
      }
    }
    v3 = v10 * *((uint32_t *)self + 1) * (*((int *)self + 3) >> 3);
  }
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderMPC8Cursor::ConvertFixedToShort  (binary VA: 0xfe0c80)
// Original: vox::DecoderMPC8Cursor::ConvertFixedToShort
// ----------------------------------------------------------------------------
void vox::DecoderMPC8Cursor::ConvertFixedToShort()
{
  vox::VoxThread::Self *v0;

  vox::VoxThread::GetCurThreadId(v0);
  sub_BA06A0();
  sub_BA06B0();
}


